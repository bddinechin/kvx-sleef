//   Copyright Naoki Shibata and contributors 2010 - 2020.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE.txt or copy at
//          http://www.boost.org/LICENSE_1_0.txt)

// This define is needed to prevent the `execvpe` function to raise a
// warning at compile time. For more information, see
// https://linux.die.net/man/3/execvp.
#define _GNU_SOURCE
#define CL_TARGET_OPENCL_VERSION 120
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <float.h>
#include <limits.h>
#include <errno.h>
#include <inttypes.h>

#include <math.h>
#include <mpfr.h>

#include <unistd.h>
#include <assert.h>
#include <sys/types.h>

#include <CL/cl.h>
#include <CL/cl_mppa.h>
#define __KVX__
#include <sleef.h>
#include "misc.h"
#include "testerutil.h"

#ifndef NANf
#define NANf ((float)NAN)
#endif

#define makeVecd(x) (SLEEF_VECTOR_DOUBLE) {x, x}
#define makeVecf(x) (SLEEF_VECTOR_FLOAT) {x, x, x, x}

typedef struct {
	SLEEF_VECTOR_DOUBLE x,y;
} Sleef_SLEEF_VECTOR_DOUBLE_2;

typedef struct {
	SLEEF_VECTOR_FLOAT x,y;
} Sleef_SLEEF_VECTOR_FLOAT_2;

void stop(char *mes) {
  fprintf(stderr, "%s\n", mes);
  exit(-1);
}

cl_context context = 0;
cl_device_id *cdDevices;
cl_program program = 0;
cl_device_id device = 0;
cl_command_queue commandQueue = 0;
cl_kernel kernel = 0;
cl_mem memObjects[] = { 0, 0, 0, 0 };
cl_int errNum;


cl_context createContext() {
        cl_int errNum;
        cl_uint numPlatforms;
        cl_platform_id firstPlatformId;
        cl_context context = NULL;

        // First, select an OpenCL platform to run on.  For this example, we
        // simply choose the first available platform.  Normally, you would
        // query for all available platforms and select the most appropriate one.
        errNum = clGetPlatformIDs(1, &firstPlatformId, &numPlatforms);
	if (errNum != CL_SUCCESS || numPlatforms <= 0) {
                fprintf(stderr, "Failed to find any OpenCL platforms.\n");
                return NULL;
        }
	cl_uint uiNumDevices = 0;           // Number of devices available
        cl_uint uiTargetDevice = 0;             // Default Device to compute on
        cl_uint uiNumComputeUnits;          // Number of compute units (SM's on NV MPPA)
        errNum = clGetDeviceIDs(firstPlatformId, CL_DEVICE_TYPE_ACCELERATOR, 0, NULL, &uiNumDevices);
        assert(errNum == CL_SUCCESS);
	cdDevices = (cl_device_id *)malloc(uiNumDevices * sizeof(cl_device_id) );
        errNum = clGetDeviceIDs(firstPlatformId, CL_DEVICE_TYPE_ACCELERATOR, uiNumDevices, cdDevices, NULL);
        assert(errNum == CL_SUCCESS);

	errNum = clGetDeviceInfo(cdDevices[uiTargetDevice], CL_DEVICE_MAX_COMPUTE_UNITS, sizeof(uiNumComputeUnits), &uiNumComputeUnits, NULL);

	 // Get a MPPA device
        errNum = clGetDeviceIDs(firstPlatformId, CL_DEVICE_TYPE_ACCELERATOR, 1, &cdDevices[uiTargetDevice], NULL);
        assert(errNum == CL_SUCCESS);

        // Create the context
        context = clCreateContext(0, 1, &cdDevices[uiTargetDevice], NULL, NULL, &errNum);
        assert(errNum == CL_SUCCESS);


        return context;
}

cl_command_queue createCommandQueue(cl_context context, cl_device_id *device) {
        cl_int errNum;
        cl_device_id *devices;
        cl_command_queue commandQueue = NULL;
        size_t deviceBufferSize = -1;

        // First get the size of the devices buffer
        errNum = clGetContextInfo(context, CL_CONTEXT_DEVICES, 0, NULL, &deviceBufferSize);
        if (errNum != CL_SUCCESS)
        {
                fprintf(stderr, "Failed call to clGetContextInfo(...,GL_CONTEXT_DEVICES,...\n)");
                return NULL;
        }

        if (deviceBufferSize <= 0)
        {
                fprintf(stderr, "No devices available.\n");
                return NULL;
        }

        // Allocate memory for the devices buffer
        devices = calloc(deviceBufferSize / sizeof(cl_device_id), sizeof(cl_device_id));
        errNum = clGetContextInfo(context, CL_CONTEXT_DEVICES, deviceBufferSize, devices, NULL);
        if (errNum != CL_SUCCESS)
        {
                free(devices);
                fprintf(stderr, "Failed to get device IDs\n");
                return NULL;
        }

        // In this example, we just choose the first available device.  In a
        // real program, you would likely use all available devices or choose
        // the highest performance device based on OpenCL device queries
        commandQueue = clCreateCommandQueue(context, devices[0], 0, NULL);
        if (commandQueue == NULL)
        {
                free(devices);
                fprintf(stderr, "Failed to create commandQueue for device 0\n");
                return NULL;
        }

        *device = devices[0];
        free(devices);
        return commandQueue;
}

cl_program createProgram(cl_context context, cl_device_id device, const char* srcStr) {
	char buildLog[16384];
        cl_int errNum;
        cl_program program;

        program = clCreateProgramWithSource(context, 1,
                        (const char**)&srcStr,
                        NULL, NULL);
        if (program == NULL) {
                fprintf(stderr, "Failed to create CL program from source.\n");
                return NULL;
        }

        errNum = clBuildProgram(program, 0, NULL, NULL, NULL, NULL);
        if (errNum != CL_SUCCESS)
        {
                // Determine the reason for the error
                clGetProgramBuildInfo(program, device, CL_PROGRAM_BUILD_LOG,
                                sizeof(buildLog), buildLog, NULL);

                //std::cerr << "Error in kernel: " << std::endl;
                fprintf(stderr, "error in kernel:\n%s", buildLog);
		clReleaseProgram(program);
                return NULL;
        }

        return program;
}

cl_program createProgramFromBinary(cl_context context, cl_device_id device, const char* fileName) {
	char buildLog[16384];
        FILE *fp = fopen(fileName, "rb");
        if (fp == NULL)
        {
                fprintf(stderr, "Failed opening %s\n", fileName);
                return NULL;
        }
        printf("File opened %s\n", fileName);

        // Determine the size of the binary
        size_t binarySize;
        fseek(fp, 0, SEEK_END);
        binarySize = ftell(fp);
        rewind(fp);

        unsigned char *programBinary = calloc(binarySize, sizeof(unsigned char));
        size_t r = fread(programBinary, 1, binarySize, fp);
        (void)r;
        fclose(fp);

        cl_int errNum = 0;
        cl_program program;
        cl_int binaryStatus;

        program = clCreateProgramWithBinary(context,
                        1,
                        &device,
                        &binarySize,
                        (const unsigned char**)&programBinary,
                        &binaryStatus,
                        &errNum);
        free(programBinary);
        if (errNum != CL_SUCCESS) {
                fprintf(stderr, "Error loading program binary.\n");
                return NULL;
        }

        if (binaryStatus != CL_SUCCESS) {
                fprintf(stderr, "Invalid binary for device\n");
                return NULL;
        }

        errNum = clBuildProgram(program, 0, NULL, NULL, NULL, NULL);
	if (errNum != CL_SUCCESS) {
                // Determine the reason for the error
                clGetProgramBuildInfo(program, device, CL_PROGRAM_BUILD_LOG,
                                sizeof(buildLog), buildLog, NULL);

                fprintf(stderr, "Error in program: \n%s", buildLog);
                clReleaseProgram(program);
                return NULL;
        }

        return program;
}


bool createMemd2_d2(cl_context context, cl_mem memObjects[4], SLEEF_VECTOR_DOUBLE *a, size_t nbElems) {
	memObjects[0] = clCreateBuffer(context, CL_MEM_READ_ONLY | CL_MEM_COPY_HOST_PTR,
                        sizeof(SLEEF_VECTOR_DOUBLE) * nbElems, a, NULL);
        memObjects[1] = clCreateBuffer(context, CL_MEM_READ_WRITE,
                        sizeof(SLEEF_VECTOR_DOUBLE) * nbElems, NULL, NULL);

        if (memObjects[0] == NULL || memObjects[1] == NULL) {
                fprintf(stderr, "Error creating memory objects.\n");
                return false;
        }

        return true;
}

bool createMemi2_d2(cl_context context, cl_mem memObjects[4], SLEEF_VECTOR_DOUBLE *a, size_t nbElems) {
	memObjects[0] = clCreateBuffer(context, CL_MEM_READ_ONLY | CL_MEM_COPY_HOST_PTR,
                        sizeof(SLEEF_VECTOR_DOUBLE) * nbElems, a, NULL);
        memObjects[1] = clCreateBuffer(context, CL_MEM_READ_WRITE,
                        sizeof(SLEEF_VECTOR_INT) * nbElems, NULL, NULL);

        if (memObjects[0] == NULL || memObjects[1] == NULL) {
                fprintf(stderr, "Error creating memory objects.\n");
                return false;
        }

        return true;
}

bool createMemd22_d2(cl_context context, cl_mem memObjects[4], SLEEF_VECTOR_DOUBLE *a, size_t nbElems) {
	memObjects[0] = clCreateBuffer(context, CL_MEM_READ_ONLY | CL_MEM_COPY_HOST_PTR,
                        sizeof(SLEEF_VECTOR_DOUBLE) * nbElems, a, NULL);
        memObjects[1] = clCreateBuffer(context, CL_MEM_READ_WRITE,
                        sizeof(Sleef_SLEEF_VECTOR_DOUBLE_2) * nbElems, NULL, NULL);

        if (memObjects[0] == NULL || memObjects[1] == NULL) {
                fprintf(stderr, "Error creating memory objects.\n");
                return false;
        }

        return true;
}

bool createMemf42_f4(cl_context context, cl_mem memObjects[4], SLEEF_VECTOR_FLOAT *a, size_t nbElems) {
	memObjects[0] = clCreateBuffer(context, CL_MEM_READ_ONLY | CL_MEM_COPY_HOST_PTR,
                        sizeof(SLEEF_VECTOR_FLOAT) * nbElems, a, NULL);
        memObjects[1] = clCreateBuffer(context, CL_MEM_READ_WRITE,
                        sizeof(Sleef_SLEEF_VECTOR_FLOAT_2) * nbElems, NULL, NULL);

        if (memObjects[0] == NULL || memObjects[1] == NULL) {
                fprintf(stderr, "Error creating memory objects.\n");
                return false;
        }

        return true;
}

bool createMemd2_d2_d2(cl_context context, cl_mem memObjects[4], SLEEF_VECTOR_DOUBLE *a, SLEEF_VECTOR_DOUBLE *b, size_t nbElems) {
	memObjects[0] = clCreateBuffer(context, CL_MEM_READ_ONLY | CL_MEM_COPY_HOST_PTR,
                        sizeof(SLEEF_VECTOR_DOUBLE) * nbElems, a, NULL);
	memObjects[1] = clCreateBuffer(context, CL_MEM_READ_ONLY | CL_MEM_COPY_HOST_PTR,
                        sizeof(SLEEF_VECTOR_DOUBLE) * nbElems, b, NULL);
        memObjects[2] = clCreateBuffer(context, CL_MEM_READ_WRITE,
                        sizeof(SLEEF_VECTOR_DOUBLE) * nbElems, NULL, NULL);

        if (memObjects[0] == NULL || memObjects[1] == NULL || memObjects[2] == NULL) {
                fprintf(stderr, "Error creating memory objects.\n");
                return false;
        }

        return true;
}

bool createMemf4_f4(cl_context context, cl_mem memObjects[4], SLEEF_VECTOR_FLOAT *a, size_t nbElems) {
	memObjects[0] = clCreateBuffer(context, CL_MEM_READ_ONLY | CL_MEM_COPY_HOST_PTR,
                        sizeof(SLEEF_VECTOR_FLOAT) * nbElems, a, NULL);
	memObjects[1] = clCreateBuffer(context, CL_MEM_READ_WRITE,
                        sizeof(SLEEF_VECTOR_FLOAT) * nbElems, NULL, NULL);

        if (memObjects[0] == NULL || memObjects[1] == NULL) {
                fprintf(stderr, "Error creating memory objects.\n");
                return false;
        }

        return true;
}

bool createMemf4_f4_f4(cl_context context, cl_mem memObjects[4], SLEEF_VECTOR_FLOAT *a, SLEEF_VECTOR_FLOAT *b, size_t nbElems) {
	memObjects[0] = clCreateBuffer(context, CL_MEM_READ_ONLY | CL_MEM_COPY_HOST_PTR,
                        sizeof(SLEEF_VECTOR_FLOAT) * nbElems, a, NULL);
	memObjects[1] = clCreateBuffer(context, CL_MEM_READ_ONLY | CL_MEM_COPY_HOST_PTR,
                        sizeof(SLEEF_VECTOR_FLOAT) * nbElems, b, NULL);
        memObjects[2] = clCreateBuffer(context, CL_MEM_READ_WRITE,
                        sizeof(SLEEF_VECTOR_FLOAT) * nbElems, NULL, NULL);

        if (memObjects[0] == NULL || memObjects[1] == NULL || memObjects[2] == NULL) {
                fprintf(stderr, "Error creating memory objects.\n");
                return false;
        }

        return true;
}

void cleanup(cl_context context, cl_command_queue commandQueue,
                cl_program program, cl_kernel kernel, cl_mem memObjects[4]) {
        for (int i = 0; i < 4; i++)
        {
                if (memObjects[i] != 0)
                        clReleaseMemObject(memObjects[i]);
        }
        if (commandQueue != 0)
                clReleaseCommandQueue(commandQueue);

        if (kernel != 0) {
		clReleaseKernel(kernel);
		kernel = 0;
	}


        if (program != 0)
                clReleaseProgram(program);

        if (context != 0)
                clReleaseContext(context);

}


void test_denormdp_dp(char *kernel_name, SLEEF_VECTOR_DOUBLE *x, SLEEF_VECTOR_DOUBLE *y, size_t nb_elems) {
      // send work to mppa
      kernel = clCreateKernel(program, kernel_name, NULL);
      createMemd2_d2(context, memObjects, x, nb_elems);
      errNum = clSetKernelArg(kernel, 0, sizeof(cl_mem), &memObjects[0]);
      errNum |= clSetKernelArg(kernel, 1, sizeof(cl_mem), &memObjects[1]);

      if (errNum != CL_SUCCESS) {
	fprintf(stderr, "failed to set kernel args\n");
	cleanup(context, commandQueue, program, kernel, memObjects);
	return;
      }

      size_t globalWorkSize[1] = {nb_elems};
      size_t localWorkSize[1] = {nb_elems % 2 ? 1: 2};
      errNum = clEnqueueNDRangeKernel(commandQueue, kernel, 1, NULL,
				globalWorkSize, localWorkSize,
				0, NULL, NULL);
      if (errNum != CL_SUCCESS) {
	fprintf(stderr, "failed to exec kernel\n");
	cleanup(context, commandQueue, program, kernel, memObjects);
	return;
      }

      clFinish(commandQueue);
      //read results
      errNum = clEnqueueReadBuffer(commandQueue, memObjects[1], CL_TRUE,
				0, nb_elems * sizeof(SLEEF_VECTOR_DOUBLE), y,
				0, NULL, NULL);
      if (errNum != CL_SUCCESS) {
	fprintf(stderr, "error reading results\n");
	cleanup(context, commandQueue, program, kernel, memObjects);
	return;
      }
      clReleaseKernel(kernel);
      kernel = 0;
}

void test_denormdi_dp(char *kernel_name, SLEEF_VECTOR_DOUBLE *x, SLEEF_VECTOR_INT *y, size_t nb_elems) {
      // send work to mppa
      kernel = clCreateKernel(program, kernel_name, NULL);
      createMemi2_d2(context, memObjects, x, nb_elems);
      errNum = clSetKernelArg(kernel, 0, sizeof(cl_mem), &memObjects[0]);
      errNum |= clSetKernelArg(kernel, 1, sizeof(cl_mem), &memObjects[1]);

      if (errNum != CL_SUCCESS) {
	fprintf(stderr, "failed to set kernel args\n");
	cleanup(context, commandQueue, program, kernel, memObjects);
	return;
      }

      size_t globalWorkSize[1] = {nb_elems};
      size_t localWorkSize[1] = {nb_elems % 2 ? 1: 2};
      errNum = clEnqueueNDRangeKernel(commandQueue, kernel, 1, NULL,
				globalWorkSize, localWorkSize,
				0, NULL, NULL);
      if (errNum != CL_SUCCESS) {
	fprintf(stderr, "failed to exec kernel\n");
	cleanup(context, commandQueue, program, kernel, memObjects);
	return;
      }

      clFinish(commandQueue);
      //read results
      errNum = clEnqueueReadBuffer(commandQueue, memObjects[1], CL_TRUE,
				0, nb_elems * sizeof(SLEEF_VECTOR_INT), y,
				0, NULL, NULL);
      if (errNum != CL_SUCCESS) {
	fprintf(stderr, "error reading results\n");
	cleanup(context, commandQueue, program, kernel, memObjects);
	return;
      }
      clReleaseKernel(kernel);
      kernel = 0;
}

void test_denormdp2_dp(char *kernel_name, SLEEF_VECTOR_DOUBLE *x, Sleef_SLEEF_VECTOR_DOUBLE_2 *y, size_t nb_elems) {
      // send work to mppa
      kernel = clCreateKernel(program, kernel_name, NULL);
      createMemd22_d2(context, memObjects, x, nb_elems);
      errNum = clSetKernelArg(kernel, 0, sizeof(cl_mem), &memObjects[0]);
      errNum |= clSetKernelArg(kernel, 1, sizeof(cl_mem), &memObjects[1]);

      if (errNum != CL_SUCCESS) {
	fprintf(stderr, "failed to set kernel args\n");
	cleanup(context, commandQueue, program, kernel, memObjects);
	return;
      }

      size_t globalWorkSize[1] = {nb_elems};
      size_t localWorkSize[1] = {nb_elems % 2 ? 1: 2};
      errNum = clEnqueueNDRangeKernel(commandQueue, kernel, 1, NULL,
				globalWorkSize, localWorkSize,
				0, NULL, NULL);
      if (errNum != CL_SUCCESS) {
	fprintf(stderr, "failed to exec kernel\n");
	cleanup(context, commandQueue, program, kernel, memObjects);
	return;
      }

      clFinish(commandQueue);
      //read results
      errNum = clEnqueueReadBuffer(commandQueue, memObjects[1], CL_TRUE,
				0, nb_elems * sizeof(Sleef_SLEEF_VECTOR_DOUBLE_2), y,
				0, NULL, NULL);
      if (errNum != CL_SUCCESS) {
	fprintf(stderr, "error reading results\n");
	cleanup(context, commandQueue, program, kernel, memObjects);
	return;
      }
      clReleaseKernel(kernel);
      kernel = 0;
}

void test_denormdp_dp_dp(char *kernel_name, SLEEF_VECTOR_DOUBLE *x1, SLEEF_VECTOR_DOUBLE *x2, SLEEF_VECTOR_DOUBLE *y, size_t nb_elems) {
      // send work to mppa
      kernel = clCreateKernel(program, kernel_name, NULL);
      createMemd2_d2_d2(context, memObjects, x1, x2, nb_elems);
      errNum = clSetKernelArg(kernel, 0, sizeof(cl_mem), &memObjects[0]);
      errNum |= clSetKernelArg(kernel, 1, sizeof(cl_mem), &memObjects[1]);
      errNum |= clSetKernelArg(kernel, 2, sizeof(cl_mem), &memObjects[2]);

      if (errNum != CL_SUCCESS) {
	fprintf(stderr, "failed to set kernel args\n");
	cleanup(context, commandQueue, program, kernel, memObjects);
	return;
      }

      size_t globalWorkSize[1] = {nb_elems};
      size_t localWorkSize[1] = {nb_elems % 2 ? 1: 2};
      errNum = clEnqueueNDRangeKernel(commandQueue, kernel, 1, NULL,
				globalWorkSize, localWorkSize,
				0, NULL, NULL);
      if (errNum != CL_SUCCESS) {
	fprintf(stderr, "failed to exec kernel\n");
	cleanup(context, commandQueue, program, kernel, memObjects);
	return;
      }
      
      clFinish(commandQueue);
      //read results
      errNum = clEnqueueReadBuffer(commandQueue, memObjects[2], CL_TRUE,
				0, nb_elems * sizeof(SLEEF_VECTOR_DOUBLE), y,
				0, NULL, NULL);
      if (errNum != CL_SUCCESS) {
	fprintf(stderr, "error reading results\n");
	cleanup(context, commandQueue, program, kernel, memObjects);
	return;
      }
      clReleaseKernel(kernel);
      kernel = 0;
}

void test_denormsp_sp(char *kernel_name, SLEEF_VECTOR_FLOAT *x, SLEEF_VECTOR_FLOAT *y, size_t nb_elems) {
      // send work to mppa
      kernel = clCreateKernel(program, kernel_name, NULL);
      createMemf4_f4(context, memObjects, x, nb_elems);
      errNum = clSetKernelArg(kernel, 0, sizeof(cl_mem), &memObjects[0]);
      errNum |= clSetKernelArg(kernel, 1, sizeof(cl_mem), &memObjects[1]);

      if (errNum != CL_SUCCESS) {
	fprintf(stderr, "failed to set kernel args\n");
	cleanup(context, commandQueue, program, kernel, memObjects);
	return;
      }

      size_t globalWorkSize[1] = {nb_elems};
      size_t localWorkSize[1] = {nb_elems % 2 ? 1: 2};
      errNum = clEnqueueNDRangeKernel(commandQueue, kernel, 1, NULL,
				globalWorkSize, localWorkSize,
				0, NULL, NULL);
      if (errNum != CL_SUCCESS) {
	fprintf(stderr, "failed to exec kernel\n");
	cleanup(context, commandQueue, program, kernel, memObjects);
	return;
      }

      clFinish(commandQueue);
      //read results
      errNum = clEnqueueReadBuffer(commandQueue, memObjects[1], CL_TRUE,
				0, nb_elems * sizeof(SLEEF_VECTOR_FLOAT), y,
				0, NULL, NULL);
      if (errNum != CL_SUCCESS) {
	fprintf(stderr, "error reading results\n");
	cleanup(context, commandQueue, program, kernel, memObjects);
	return;
      }
      clReleaseKernel(kernel);
      kernel = 0;
}

void test_denormsp2_sp(char *kernel_name, SLEEF_VECTOR_FLOAT *x, Sleef_SLEEF_VECTOR_FLOAT_2 *y, size_t nb_elems) {
      // send work to mppa
      kernel = clCreateKernel(program, kernel_name, NULL);
      createMemf42_f4(context, memObjects, x, nb_elems);
      errNum = clSetKernelArg(kernel, 0, sizeof(cl_mem), &memObjects[0]);
      errNum |= clSetKernelArg(kernel, 1, sizeof(cl_mem), &memObjects[1]);

      if (errNum != CL_SUCCESS) {
	fprintf(stderr, "failed to set kernel args\n");
	cleanup(context, commandQueue, program, kernel, memObjects);
	return;
      }

      size_t globalWorkSize[1] = {nb_elems};
      size_t localWorkSize[1] = {nb_elems % 2 ? 1: 2};
      errNum = clEnqueueNDRangeKernel(commandQueue, kernel, 1, NULL,
				globalWorkSize, localWorkSize,
				0, NULL, NULL);
      if (errNum != CL_SUCCESS) {
	fprintf(stderr, "failed to exec kernel\n");
	cleanup(context, commandQueue, program, kernel, memObjects);
	return;
      }

      clFinish(commandQueue);
      //read results
      errNum = clEnqueueReadBuffer(commandQueue, memObjects[1], CL_TRUE,
				0, nb_elems * sizeof(Sleef_SLEEF_VECTOR_FLOAT_2), y,
				0, NULL, NULL);
      if (errNum != CL_SUCCESS) {
	fprintf(stderr, "error reading results\n");
	cleanup(context, commandQueue, program, kernel, memObjects);
	return;
      }
      clReleaseKernel(kernel);
      kernel = 0;
}

void test_denormsp_sp_sp(char *kernel_name, SLEEF_VECTOR_FLOAT *x1, SLEEF_VECTOR_FLOAT *x2, SLEEF_VECTOR_FLOAT *y, size_t nb_elems) {
      // send work to mppa
      kernel = clCreateKernel(program, kernel_name, NULL);
      createMemf4_f4_f4(context, memObjects, x1, x2, nb_elems);
      errNum = clSetKernelArg(kernel, 0, sizeof(cl_mem), &memObjects[0]);
      errNum |= clSetKernelArg(kernel, 1, sizeof(cl_mem), &memObjects[1]);
      errNum |= clSetKernelArg(kernel, 2, sizeof(cl_mem), &memObjects[2]);

      if (errNum != CL_SUCCESS) {
	fprintf(stderr, "failed to set kernel args\n");
	cleanup(context, commandQueue, program, kernel, memObjects);
	return;
      }

      size_t globalWorkSize[1] = {nb_elems};
      size_t localWorkSize[1] = {nb_elems % 2 ? 1: 2};
      errNum = clEnqueueNDRangeKernel(commandQueue, kernel, 1, NULL,
				globalWorkSize, localWorkSize,
				0, NULL, NULL);
      if (errNum != CL_SUCCESS) {
	fprintf(stderr, "failed to exec kernel\n");
	cleanup(context, commandQueue, program, kernel, memObjects);
	return;
      }

      clFinish(commandQueue);
      //read results
      errNum = clEnqueueReadBuffer(commandQueue, memObjects[2], CL_TRUE,
				0, nb_elems * sizeof(SLEEF_VECTOR_FLOAT), y,
				0, NULL, NULL);
      if (errNum != CL_SUCCESS) {
	fprintf(stderr, "error reading results\n");
	cleanup(context, commandQueue, program, kernel, memObjects);
	return;
      }
      clReleaseKernel(kernel);
      kernel = 0;
}

int allTestsPassed = 1;

void showResult(int success) {
  if (!success) allTestsPassed = 0;
  fprintf(stderr, "%s\n", success ? "OK" : "NG **************");

  if (!success) {
    fprintf(stderr, "\n\n*** Test failed\n");
    exit(-1);
  }
}

int enableDP = 0, enableSP = 0, deterministicMode = 0;

void do_test() {
  mpfr_t frc, frt, frx, fry, frz;
  mpfr_inits(frc, frt, frx, fry, frz, NULL);

  int i, j;
  int64_t i64;
  double d;
  int success = 1;

  
  
  if (enableDP) {
   {
    fprintf(stderr, "Denormal/nonnumber test atan2(y, x): ");
    // atand2_u35kvx
   
    // first arg	
    SLEEF_VECTOR_DOUBLE xa[] = { makeVecd(+0.0), makeVecd(-0.0), makeVecd(+0.0), makeVecd(-0.0), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), 
	    makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), 
   	    makeVecd(-100000.5), makeVecd(-100000), makeVecd(-3), makeVecd(-2.5), makeVecd(-2), makeVecd(-1.5), makeVecd(-1.0), makeVecd(-0.5), makeVecd(-100000.5), makeVecd(-100000), makeVecd(-3), makeVecd(-2.5), makeVecd(-2), makeVecd(-1.5), makeVecd(-1.0), makeVecd(-0.5),
	    makeVecd(100000.5), makeVecd(100000), makeVecd(3), makeVecd(2.5), makeVecd(2), makeVecd(1.5), makeVecd(1.0), makeVecd(0.5), makeVecd(100000.5), makeVecd(100000), makeVecd(3), makeVecd(2.5), makeVecd(2), makeVecd(1.5), makeVecd(1.0), makeVecd(0.5),
    	    makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY),
            makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY),
    	    makeVecd(0.5), makeVecd(1.5), makeVecd(2.0), makeVecd(2.5), makeVecd(3.0), makeVecd(100000), makeVecd(100000.5),
     	    makeVecd(-0.5), makeVecd(-1.5), makeVecd(-2.0), makeVecd(-2.5), makeVecd(-3.0), makeVecd(-100000), makeVecd(-100000.5),
	    makeVecd(0.5), makeVecd(1.5), makeVecd(2.0), makeVecd(2.5), makeVecd(3.0), makeVecd(100000), makeVecd(100000.5),
     	    makeVecd(-0.5), makeVecd(-1.5), makeVecd(-2.0), makeVecd(-2.5), makeVecd(-3.0), makeVecd(-100000), makeVecd(-100000.5),
    	    makeVecd(-100000.5), makeVecd(-100000), makeVecd(-3), makeVecd(-2.5), makeVecd(-2), makeVecd(-1.5), makeVecd(-1.0), makeVecd(-0.5), makeVecd(-0.0), makeVecd(+0.0), makeVecd(0.5), makeVecd(1.5), makeVecd(2.0), makeVecd(2.5), makeVecd(3.0), makeVecd(100000), makeVecd(100000.5), makeVecd(NAN),
    	    makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN) };
    // second arg
    SLEEF_VECTOR_DOUBLE ya[] = { makeVecd(-0.0), makeVecd(-0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY),
	    makeVecd(-100000.5), makeVecd(-100000), makeVecd(-3), makeVecd(-2.5), makeVecd(-2), makeVecd(-1.5), makeVecd(-1.0), makeVecd(-0.5), makeVecd(-100000.5), makeVecd(-100000), makeVecd(-3), makeVecd(-2.5), makeVecd(-2), makeVecd(-1.5), makeVecd(-1.0), makeVecd(-0.5),
	    makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0),
   	    makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0),
    	    makeVecd(-100000.5), makeVecd(-100000), makeVecd(-3), makeVecd(-2.5), makeVecd(-2), makeVecd(-1.5), makeVecd(-1.0), makeVecd(-0.5), makeVecd(-0.0), makeVecd(+0.0), makeVecd(0.5), makeVecd(1.5), makeVecd(2.0), makeVecd(2.5), makeVecd(3.0), makeVecd(100000), makeVecd(100000.5),
    	    makeVecd(-100000.5), makeVecd(-100000), makeVecd(-3), makeVecd(-2.5), makeVecd(-2), makeVecd(-1.5), makeVecd(-1.0), makeVecd(-0.5), makeVecd(-0.0), makeVecd(+0.0), makeVecd(0.5), makeVecd(1.5), makeVecd(2.0), makeVecd(2.5), makeVecd(3.0), makeVecd(100000), makeVecd(100000.5),
    	    makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY),
    	    makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY),
    	    makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY),
    	    makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY),
    	    makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN),
    	    makeVecd(-100000.5), makeVecd(-100000), makeVecd(-3), makeVecd(-2.5), makeVecd(-2), makeVecd(-1.5), makeVecd(-1.0), makeVecd(-0.5), makeVecd(-0.0), makeVecd(+0.0), makeVecd(0.5), makeVecd(1.5), makeVecd(2.0), makeVecd(2.5), makeVecd(3.0), makeVecd(100000), makeVecd(100000.5), makeVecd(NAN) };
    
    // results
    SLEEF_VECTOR_DOUBLE *result = malloc(sizeof(xa));
    double check[] = { M_PI, -M_PI, +0.0, -0.0, 3*M_PI/4, -3*M_PI/4, M_PI/4, -M_PI/4,
	    M_PI, M_PI, M_PI, M_PI, M_PI, M_PI, M_PI, M_PI,
    	    -M_PI, -M_PI, -M_PI, -M_PI, -M_PI, -M_PI, -M_PI, -M_PI,
    	    -M_PI/2, -M_PI/2, -M_PI/2, -M_PI/2, -M_PI/2, -M_PI/2, -M_PI/2, -M_PI/2, -M_PI/2, -M_PI/2, -M_PI/2, -M_PI/2, -M_PI/2, -M_PI/2, -M_PI/2, -M_PI/2,
    	    M_PI/2, M_PI/2, M_PI/2, M_PI/2, M_PI/2, M_PI/2, M_PI/2, M_PI/2, M_PI/2, M_PI/2, M_PI/2, M_PI/2, M_PI/2, M_PI/2, M_PI/2, M_PI/2,
    	    M_PI/2, M_PI/2, M_PI/2, M_PI/2, M_PI/2, M_PI/2, M_PI/2, M_PI/2, M_PI/2, M_PI/2, M_PI/2, M_PI/2, M_PI/2, M_PI/2, M_PI/2, M_PI/2, M_PI/2,
    	    -M_PI/2, -M_PI/2, -M_PI/2, -M_PI/2, -M_PI/2, -M_PI/2, -M_PI/2, -M_PI/2, -M_PI/2, -M_PI/2, -M_PI/2, -M_PI/2, -M_PI/2, -M_PI/2, -M_PI/2, -M_PI/2, -M_PI/2,
            M_PI, M_PI, M_PI, M_PI, M_PI, M_PI, M_PI,
    	    -M_PI, -M_PI, -M_PI, -M_PI, -M_PI, -M_PI, -M_PI,
    	    +0.0, +0.0, +0.0, +0.0, +0.0, +0.0, +0.0,
    	    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    	    NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN };
    
    test_denormdp_dp_dp("test_Sleef_atan2d2_u35kvx", xa, ya, result, sizeof(xa)/sizeof(SLEEF_VECTOR_DOUBLE));
    for (size_t i =0; i < sizeof(check)/sizeof(double) && success; i++) {
    	
	if (result[i][0] != check[i]) {
		if (xisnan(check[i])) {
			if (!xisnan(result[i][0]))
				success = 0;
		} else {	
			fprintf(stderr, "iter %ld: result is: %.20g, check is: %.20g\n", i, result[i][0], check[i]);
			success = 0;
		}
	}
    }

      free(result);
    showResult(success);
  } 
    //
  {
    fprintf(stderr, "\nDenormal/nonnumber test atan2_u1(y, x): ");

    // atand2_u10kvx
   
    // first arg	
    SLEEF_VECTOR_DOUBLE xa[] = { makeVecd(+0.0), makeVecd(-0.0), makeVecd(+0.0), makeVecd(-0.0), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), 
	    makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), 
   	    makeVecd(-100000.5), makeVecd(-100000), makeVecd(-3), makeVecd(-2.5), makeVecd(-2), makeVecd(-1.5), makeVecd(-1.0), makeVecd(-0.5), makeVecd(-100000.5), makeVecd(-100000), makeVecd(-3), makeVecd(-2.5), makeVecd(-2), makeVecd(-1.5), makeVecd(-1.0), makeVecd(-0.5),
	    makeVecd(100000.5), makeVecd(100000), makeVecd(3), makeVecd(2.5), makeVecd(2), makeVecd(1.5), makeVecd(1.0), makeVecd(0.5), makeVecd(100000.5), makeVecd(100000), makeVecd(3), makeVecd(2.5), makeVecd(2), makeVecd(1.5), makeVecd(1.0), makeVecd(0.5),
    	    makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY),
            makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY),
    	    makeVecd(0.5), makeVecd(1.5), makeVecd(2.0), makeVecd(2.5), makeVecd(3.0), makeVecd(100000), makeVecd(100000.5),
     	    makeVecd(-0.5), makeVecd(-1.5), makeVecd(-2.0), makeVecd(-2.5), makeVecd(-3.0), makeVecd(-100000), makeVecd(-100000.5),
	    makeVecd(0.5), makeVecd(1.5), makeVecd(2.0), makeVecd(2.5), makeVecd(3.0), makeVecd(100000), makeVecd(100000.5),
     	    makeVecd(-0.5), makeVecd(-1.5), makeVecd(-2.0), makeVecd(-2.5), makeVecd(-3.0), makeVecd(-100000), makeVecd(-100000.5),
    	    makeVecd(-100000.5), makeVecd(-100000), makeVecd(-3), makeVecd(-2.5), makeVecd(-2), makeVecd(-1.5), makeVecd(-1.0), makeVecd(-0.5), makeVecd(-0.0), makeVecd(+0.0), makeVecd(0.5), makeVecd(1.5), makeVecd(2.0), makeVecd(2.5), makeVecd(3.0), makeVecd(100000), makeVecd(100000.5), makeVecd(NAN),
    	    makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN) };
    // second arg
    SLEEF_VECTOR_DOUBLE ya[] = { makeVecd(-0.0), makeVecd(-0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY),
	    makeVecd(-100000.5), makeVecd(-100000), makeVecd(-3), makeVecd(-2.5), makeVecd(-2), makeVecd(-1.5), makeVecd(-1.0), makeVecd(-0.5), makeVecd(-100000.5), makeVecd(-100000), makeVecd(-3), makeVecd(-2.5), makeVecd(-2), makeVecd(-1.5), makeVecd(-1.0), makeVecd(-0.5),
	    makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0),
   	    makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0),
    	    makeVecd(-100000.5), makeVecd(-100000), makeVecd(-3), makeVecd(-2.5), makeVecd(-2), makeVecd(-1.5), makeVecd(-1.0), makeVecd(-0.5), makeVecd(-0.0), makeVecd(+0.0), makeVecd(0.5), makeVecd(1.5), makeVecd(2.0), makeVecd(2.5), makeVecd(3.0), makeVecd(100000), makeVecd(100000.5),
    	    makeVecd(-100000.5), makeVecd(-100000), makeVecd(-3), makeVecd(-2.5), makeVecd(-2), makeVecd(-1.5), makeVecd(-1.0), makeVecd(-0.5), makeVecd(-0.0), makeVecd(+0.0), makeVecd(0.5), makeVecd(1.5), makeVecd(2.0), makeVecd(2.5), makeVecd(3.0), makeVecd(100000), makeVecd(100000.5),
    	    makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY),
    	    makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY),
    	    makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY),
    	    makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY),
    	    makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN),
    	    makeVecd(-100000.5), makeVecd(-100000), makeVecd(-3), makeVecd(-2.5), makeVecd(-2), makeVecd(-1.5), makeVecd(-1.0), makeVecd(-0.5), makeVecd(-0.0), makeVecd(+0.0), makeVecd(0.5), makeVecd(1.5), makeVecd(2.0), makeVecd(2.5), makeVecd(3.0), makeVecd(100000), makeVecd(100000.5), makeVecd(NAN) };
    
    // results
    SLEEF_VECTOR_DOUBLE *result = malloc(sizeof(xa));
    double check[] = { M_PI, -M_PI, +0.0, -0.0, 3*M_PI/4, -3*M_PI/4, M_PI/4, -M_PI/4,
	    M_PI, M_PI, M_PI, M_PI, M_PI, M_PI, M_PI, M_PI,
    	    -M_PI, -M_PI, -M_PI, -M_PI, -M_PI, -M_PI, -M_PI, -M_PI,
    	    -M_PI/2, -M_PI/2, -M_PI/2, -M_PI/2, -M_PI/2, -M_PI/2, -M_PI/2, -M_PI/2, -M_PI/2, -M_PI/2, -M_PI/2, -M_PI/2, -M_PI/2, -M_PI/2, -M_PI/2, -M_PI/2,
    	    M_PI/2, M_PI/2, M_PI/2, M_PI/2, M_PI/2, M_PI/2, M_PI/2, M_PI/2, M_PI/2, M_PI/2, M_PI/2, M_PI/2, M_PI/2, M_PI/2, M_PI/2, M_PI/2,
    	    M_PI/2, M_PI/2, M_PI/2, M_PI/2, M_PI/2, M_PI/2, M_PI/2, M_PI/2, M_PI/2, M_PI/2, M_PI/2, M_PI/2, M_PI/2, M_PI/2, M_PI/2, M_PI/2, M_PI/2,
    	    -M_PI/2, -M_PI/2, -M_PI/2, -M_PI/2, -M_PI/2, -M_PI/2, -M_PI/2, -M_PI/2, -M_PI/2, -M_PI/2, -M_PI/2, -M_PI/2, -M_PI/2, -M_PI/2, -M_PI/2, -M_PI/2, -M_PI/2,
            M_PI, M_PI, M_PI, M_PI, M_PI, M_PI, M_PI,
    	    -M_PI, -M_PI, -M_PI, -M_PI, -M_PI, -M_PI, -M_PI,
    	    +0.0, +0.0, +0.0, +0.0, +0.0, +0.0, +0.0,
    	    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    	    NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN };
    
    test_denormdp_dp_dp("test_Sleef_atan2d2_u10kvx", xa, ya, result, sizeof(xa)/sizeof(SLEEF_VECTOR_DOUBLE));
    for (size_t i =0; i < sizeof(check)/sizeof(double) && success; i++) {
    	
	if (result[i][0] != check[i]) {
		if (xisnan(check[i])) {
			if (!xisnan(result[i][0]))
				success = 0;
		} else {	
			fprintf(stderr, "iter %ld: result is: %.20g, check is: %.20g\n", i, result[i][0], check[i]);
			success = 0;
		}
	}
    }
      free(result);

    showResult(success);
  }

    //


    fprintf(stderr, "\nDenormal/nonnumber test pow(x, y): ");
  {
    // Sleef_powd2_u10kvx
    // first arg
    SLEEF_VECTOR_DOUBLE x[] = { makeVecd(1), makeVecd(NAN), makeVecd(-1), makeVecd(-1),
    	makeVecd(-100000.5), makeVecd(-100000.5), makeVecd(-100000.5), makeVecd(-100000.5), makeVecd(-100000.5), makeVecd(-100000.5), makeVecd(-100000.5), makeVecd(-100000.5), makeVecd(-100000), makeVecd(-100000), makeVecd(-100000), makeVecd(-100000), makeVecd(-100000), makeVecd(-100000), makeVecd(-100000), makeVecd(-100000),
    	makeVecd(-3), makeVecd(-3), makeVecd(-3), makeVecd(-3), makeVecd(-3), makeVecd(-3), makeVecd(-3), makeVecd(-3), makeVecd(-2.5), makeVecd(-2.5), makeVecd(-2.5), makeVecd(-2.5), makeVecd(-2.5), makeVecd(-2.5), makeVecd(-2.5), makeVecd(-2.5), makeVecd(-2), makeVecd(-2), makeVecd(-2), makeVecd(-2), makeVecd(-2), makeVecd(-2), makeVecd(-2), makeVecd(-2), makeVecd(-1.5), makeVecd(-1.5), makeVecd(-1.5), makeVecd(-1.5), makeVecd(-1.5), makeVecd(-1.5), makeVecd(-1.5), makeVecd(-1.5),
    	makeVecd(-1.0), makeVecd(-1.0), makeVecd(-1.0), makeVecd(-1.0), makeVecd(-1.0), makeVecd(-1.0), makeVecd(-1.0), makeVecd(-1.0), makeVecd(-0.5), makeVecd(-0.5), makeVecd(-0.5), makeVecd(-0.5), makeVecd(-0.5), makeVecd(-0.5), makeVecd(-0.5), makeVecd(-0.5),
    	makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN),
    	makeVecd(-100000.5), makeVecd(-100000), makeVecd(-3), makeVecd(-2.5), makeVecd(-2), makeVecd(-1.5), makeVecd(-1.0), makeVecd(-0.5), makeVecd(-0.0), makeVecd(+0.0), makeVecd(+0.5), makeVecd(1.5), makeVecd(2.0), makeVecd(2.5), makeVecd(3.0), makeVecd(100000), makeVecd(100000.5),
    	makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0),
    	makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0),
    	makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0),
    	makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0),
    	makeVecd(-0.999), makeVecd(-0.5), makeVecd(-0.0), makeVecd(+0.0), makeVecd(+0.5), makeVecd(+0.999),
    	makeVecd(-100000.5), makeVecd(-100000), makeVecd(-3), makeVecd(-2.5), makeVecd(-2), makeVecd(-1.5), makeVecd(1.5), makeVecd(2.0), makeVecd(2.5), makeVecd(3.0), makeVecd(100000), makeVecd(100000.5),
	makeVecd(-0.999), makeVecd(-0.5), makeVecd(-0.0), makeVecd(+0.0), makeVecd(+0.5), makeVecd(+0.999),
    	makeVecd(-100000.5), makeVecd(-100000), makeVecd(-3), makeVecd(-2.5), makeVecd(-2), makeVecd(-1.5), makeVecd(1.5), makeVecd(2.0), makeVecd(2.5), makeVecd(3.0), makeVecd(100000), makeVecd(100000.5),
	makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY),    	makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY),
    	makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0),
    	makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0),
    	makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0),
    	makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0)};

    // second arg
    SLEEF_VECTOR_DOUBLE y[] = { makeVecd(NAN), makeVecd(0), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY),
    	makeVecd(-100000.5), makeVecd(-2.5), makeVecd(-1.5), makeVecd(-0.5), makeVecd(0.5), makeVecd(1.5), makeVecd(2.5), makeVecd(100000.5), makeVecd(-100000.5), makeVecd(-2.5), makeVecd(-1.5), makeVecd(-0.5), makeVecd(0.5), makeVecd(1.5), makeVecd(2.5), makeVecd(100000.5), makeVecd(-100000.5), makeVecd(-2.5), makeVecd(-1.5), makeVecd(-0.5), makeVecd(0.5), makeVecd(1.5), makeVecd(2.5), makeVecd(100000.5), makeVecd(-100000.5), makeVecd(-2.5), makeVecd(-1.5), makeVecd(-0.5), makeVecd(0.5), makeVecd(1.5), makeVecd(2.5), makeVecd(100000.5), makeVecd(-100000.5), makeVecd(-2.5), makeVecd(-1.5), makeVecd(-0.5), makeVecd(0.5), makeVecd(1.5), makeVecd(2.5), makeVecd(100000.5), makeVecd(-100000.5), makeVecd(-2.5), makeVecd(-1.5), makeVecd(-0.5), makeVecd(0.5), makeVecd(1.5), makeVecd(2.5), makeVecd(100000.5), makeVecd(-100000.5), makeVecd(-2.5), makeVecd(-1.5), makeVecd(-0.5), makeVecd(0.5), makeVecd(1.5), makeVecd(2.5), makeVecd(100000.5), makeVecd(-100000.5), makeVecd(-2.5), makeVecd(-1.5), makeVecd(-0.5), makeVecd(0.5), makeVecd(1.5), makeVecd(2.5), makeVecd(100000.5),
    makeVecd(-100000.5), makeVecd(-100000), makeVecd(-3), makeVecd(-2.5), makeVecd(-2), makeVecd(-1.5), makeVecd(-1.0), makeVecd(-0.5), makeVecd(0.5), makeVecd(1.0), makeVecd(1.5), makeVecd(2.0), makeVecd(2.5), makeVecd(3.0), makeVecd(100000), makeVecd(100000.5),
    	makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN),
	makeVecd(1), makeVecd(3), makeVecd(5), makeVecd(7), makeVecd(100001),
	makeVecd(1), makeVecd(3), makeVecd(5), makeVecd(7), makeVecd(100001),
    	makeVecd(0.5), makeVecd(1.5), makeVecd(2.0), makeVecd(2.5), makeVecd(4.0), makeVecd(100000), makeVecd(100000.5),
    	makeVecd(0.5), makeVecd(1.5), makeVecd(2.0), makeVecd(2.5), makeVecd(4.0), makeVecd(100000), makeVecd(100000.5),
	makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY),
    	makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY),
    	makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY),
    	makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY),
    	makeVecd(-100001), makeVecd(-5), makeVecd(-3), makeVecd(-1),
	makeVecd(-100000.5), makeVecd(-100000), makeVecd(-4), makeVecd(-2.5), makeVecd(-2), makeVecd(-1.5), makeVecd(-0.5),
	makeVecd(1), makeVecd(3), makeVecd(5), makeVecd(7), makeVecd(100001),
	makeVecd(0.5), makeVecd(1.5), makeVecd(2), makeVecd(2.5), makeVecd(3.5), makeVecd(4), makeVecd(100000), makeVecd(100000.5),
	makeVecd(-100000.5), makeVecd(-100000), makeVecd(-3), makeVecd(-2.5), makeVecd(-2), makeVecd(-1.5), makeVecd(-1.0), makeVecd(-0.5),
	makeVecd(0.5), makeVecd(1), makeVecd(1.5), makeVecd(2.0), makeVecd(2.5), makeVecd(3.0), makeVecd(100000), makeVecd(100000.5),
	makeVecd(-100001), makeVecd(-5), makeVecd(-3), makeVecd(-1),
	makeVecd(-100001), makeVecd(-5), makeVecd(-3), makeVecd(-1),
	makeVecd(-100000.5), makeVecd(-100000), makeVecd(-4), makeVecd(-2.5), makeVecd(-2), makeVecd(-1.5), makeVecd(-0.5), makeVecd(-100000.5), makeVecd(-100000), makeVecd(-4), makeVecd(-2.5), makeVecd(-2), makeVecd(-1.5), makeVecd(-0.5)};

    // results
    SLEEF_VECTOR_DOUBLE *results = malloc(sizeof(x));
    double check[] = { 1.0, 1.0, 1.0, 1.0, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN,
    NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN,
    +0, +0, +0, +0, +0, -0, -0, -0, -0, -0, +0, +0, +0, +0, +0, +0, +0, +0, +0, +0, +0, +0, +0, +0, POSITIVE_INFINITY, POSITIVE_INFINITY, POSITIVE_INFINITY, POSITIVE_INFINITY, POSITIVE_INFINITY, POSITIVE_INFINITY,
    +0, +0, +0, +0, +0, +0, +0, +0, +0, +0, +0, +0, +0, +0, +0, +0, +0, +0,
    POSITIVE_INFINITY, POSITIVE_INFINITY, POSITIVE_INFINITY, POSITIVE_INFINITY, POSITIVE_INFINITY, POSITIVE_INFINITY, POSITIVE_INFINITY, POSITIVE_INFINITY, POSITIVE_INFINITY, POSITIVE_INFINITY, POSITIVE_INFINITY, POSITIVE_INFINITY,
    -0, -0, -0, -0, +0, +0, +0, +0, +0, +0, +0, NEGATIVE_INFINITY, NEGATIVE_INFINITY, NEGATIVE_INFINITY, NEGATIVE_INFINITY, NEGATIVE_INFINITY, POSITIVE_INFINITY, POSITIVE_INFINITY, POSITIVE_INFINITY, POSITIVE_INFINITY, POSITIVE_INFINITY, POSITIVE_INFINITY, POSITIVE_INFINITY, POSITIVE_INFINITY,
    +0, +0, +0, +0, +0, +0, +0, +0, POSITIVE_INFINITY, POSITIVE_INFINITY, POSITIVE_INFINITY, POSITIVE_INFINITY, POSITIVE_INFINITY, POSITIVE_INFINITY, POSITIVE_INFINITY, POSITIVE_INFINITY,
    POSITIVE_INFINITY, POSITIVE_INFINITY, POSITIVE_INFINITY, POSITIVE_INFINITY, NEGATIVE_INFINITY, NEGATIVE_INFINITY, NEGATIVE_INFINITY, NEGATIVE_INFINITY,
    POSITIVE_INFINITY, POSITIVE_INFINITY, POSITIVE_INFINITY, POSITIVE_INFINITY, POSITIVE_INFINITY, POSITIVE_INFINITY, POSITIVE_INFINITY, POSITIVE_INFINITY, POSITIVE_INFINITY, POSITIVE_INFINITY, POSITIVE_INFINITY, POSITIVE_INFINITY, POSITIVE_INFINITY, POSITIVE_INFINITY };
    
    test_denormdp_dp_dp("test_Sleef_powd2_u10kvx", x, y, results, sizeof(x)/sizeof(SLEEF_VECTOR_DOUBLE));
    for (size_t i =0; i < sizeof(check)/sizeof(double) && success; i++) {
    	
	if (results[i][0] != check[i]) {
		if (xisnan(check[i])) {
			if (!xisnan(results[i][0])) {
				fprintf(stderr, "iter %ld: pow(%.20g, %.20g) = %.20g, check is: %.20g\n", i, x[i][0], y[i][0], results[i][0], check[i]);
				success = 0;
			}
		} else {	
			fprintf(stderr, "iter %ld: pow(%.20g, %.20g) = %.20g, check is: %.20g\n", i, x[i][0], y[i][0], results[i][0], check[i]);
			success = 0;
		}
	}
    }
      free(results);
    showResult(success);
   }
  }

  //

#define cmpDenorm_f(mpfrFunc, childFunc, argx) do {			\
    mpfr_set_d(frx, (float)flushToZero(argx), GMP_RNDN);		\
    mpfrFunc(frc, frx, GMP_RNDN);					\
    if (!cmpDenormsp(childFunc[0], frc)) {	\
      fprintf(stderr, "arg = %.20g, test = %.20g, correct = %.20g\n",	\
	      (float)flushToZero(argx), childFunc[0], flushToZero(mpfr_get_d(frc, GMP_RNDN))); \
      success = 0;							\
      break;								\
    }									\
  } while(0)

#define cmpDenormNR_f(mpfrFunc, childFunc, argx) do {			\
    mpfr_set_d(frx, (float)flushToZero(argx), GMP_RNDN);		\
    mpfrFunc(frc, frx);							\
    if (!cmpDenormsp(childFunc[0], frc)) {	\
      fprintf(stderr, "arg = %.20g, test = %.20g, correct = %.20g\n",	\
	      (float)flushToZero(argx), childFunc[0], mpfr_get_d(frc, GMP_RNDN)); \
      success = 0;							\
      break;								\
    }									\
  } while(0)

#define cmpDenorm_f_f(mpfrFunc, childFunc, argx, argy) do {		\
    mpfr_set_d(frx, (float)flushToZero(argx), GMP_RNDN);		\
    mpfr_set_d(fry, (float)flushToZero(argy), GMP_RNDN);		\
    mpfrFunc(frc, frx, fry, GMP_RNDN);					\
    if (!cmpDenormsp(childFunc[0], frc)) { \
      fprintf(stderr, "arg = %.20g, %.20g, test = %.20g, correct = %.20g\n", \
	      (float)flushToZero(argx), (float)flushToZero(argy), childFunc[0], mpfr_get_d(frc, GMP_RNDN)); \
      success = 0;							\
      break;								\
    }									\
  } while(0)
  
#define cmpDenormX_f(mpfrFunc, childFunc, argx) do {			\
    mpfr_set_d(frx, (float)flushToZero(argx), GMP_RNDN);		\
    mpfrFunc(frc, frx, GMP_RNDN);					\
    Sleef_SLEEF_VECTOR_FLOAT_2 d2 = childFunc;		\
    if (!cmpDenormsp(d2.x[0], frc)) {					\
      fprintf(stderr, "arg = %.20g, test = %.20g, correct = %.20g\n",	\
	      (float)flushToZero(argx), d2.x[0], mpfr_get_d(frc, GMP_RNDN)); \
      success = 0;							\
      break;								\
    }									\
  } while(0)
  
#define cmpDenormY_f(mpfrFunc, childFunc, argx) do {			\
    mpfr_set_d(frx, (float)flushToZero(argx), GMP_RNDN);		\
    mpfrFunc(frc, frx, GMP_RNDN);					\
    Sleef_SLEEF_VECTOR_FLOAT_2 d2 = childFunc;		\
    if (!cmpDenormsp(d2.y[0], frc)) {					\
      fprintf(stderr, "arg = %.20g, test = %.20g, correct = %.20g\n",	\
	      (float)flushToZero(argx), d2.y[0], mpfr_get_d(frc, GMP_RNDN)); \
      success = 0;							\
      break;								\
    }									\
  } while(0)

  //

  if (enableSP) {
    fprintf(stderr, "\nDenormal/nonnumber test atan2f(y, x): ");
    // Sleef_atan2f_u35kvx
   {
	// first arg
	SLEEF_VECTOR_FLOAT x[] = { makeVecf(+0.0), makeVecf(-0.0), makeVecf(+0.0), makeVecf(-0.0), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf),
		makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0),
		makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0),
		makeVecf(-100000.5), makeVecf(-100000.5), makeVecf(-100000), makeVecf(-100000), makeVecf(-3), makeVecf(-3), makeVecf(-2.5), makeVecf(-2.5), makeVecf(-2), makeVecf(-2), makeVecf(-1.5), makeVecf(-1.5), makeVecf(-1.0), makeVecf(-1.0), makeVecf(-0.5), makeVecf(-0.5),
		makeVecf(+100000.5), makeVecf(+100000.5), makeVecf(+100000), makeVecf(+100000), makeVecf(+3), makeVecf(+3), makeVecf(+2.5), makeVecf(+2.5), makeVecf(+2), makeVecf(+2), makeVecf(+1.5), makeVecf(+1.5), makeVecf(+1.0), makeVecf(+1.0), makeVecf(+0.5), makeVecf(+0.5),
		makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf),
		makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf),
		makeVecf(0.5), makeVecf(1.5), makeVecf(2.0), makeVecf(2.5), makeVecf(3.0), makeVecf(100000), makeVecf(100000.5),
		makeVecf(-0.5), makeVecf(-1.5), makeVecf(-2.0), makeVecf(-2.5), makeVecf(-3.0), makeVecf(-100000), makeVecf(-100000.5),
		makeVecf(0.5), makeVecf(1.5), makeVecf(2.0), makeVecf(2.5), makeVecf(3.0), makeVecf(100000), makeVecf(100000.5),
		makeVecf(-0.5), makeVecf(-1.5), makeVecf(-2.0), makeVecf(-2.5), makeVecf(-3.0), makeVecf(-100000), makeVecf(-100000.5),
		makeVecf(-100000.5), makeVecf(-100000), makeVecf(-3), makeVecf(-2.5), makeVecf(-2), makeVecf(-1.5), makeVecf(-1.0), makeVecf(-0.5), makeVecf(-0.0), makeVecf(+0.0), makeVecf(0.5), makeVecf(1.5), makeVecf(2.0), makeVecf(2.5), makeVecf(3.0), makeVecf(100000), makeVecf(100000.5), makeVecf(NANf),
		makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf),
		};

	// second arg
	SLEEF_VECTOR_FLOAT y[] = { makeVecf(-0.0), makeVecf(-0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf),
		makeVecf(-100000.5), makeVecf(-100000), makeVecf(-3), makeVecf(-2.5), makeVecf(-2), makeVecf(-1.5), makeVecf(-1.0), makeVecf(-0.5),
		makeVecf(-100000.5), makeVecf(-100000), makeVecf(-3), makeVecf(-2.5), makeVecf(-2), makeVecf(-1.5), makeVecf(-1.0), makeVecf(-0.5),
		makeVecf(+0.0), makeVecf(-0.0), makeVecf(+0.0), makeVecf(-0.0), makeVecf(+0.0), makeVecf(-0.0), makeVecf(+0.0), makeVecf(-0.0), makeVecf(+0.0), makeVecf(-0.0), makeVecf(+0.0), makeVecf(-0.0), makeVecf(+0.0), makeVecf(-0.0), makeVecf(+0.0), makeVecf(-0.0),
		makeVecf(+0.0), makeVecf(-0.0), makeVecf(+0.0), makeVecf(-0.0), makeVecf(+0.0), makeVecf(-0.0), makeVecf(+0.0), makeVecf(-0.0), makeVecf(+0.0), makeVecf(-0.0), makeVecf(+0.0), makeVecf(-0.0), makeVecf(+0.0), makeVecf(-0.0), makeVecf(+0.0), makeVecf(-0.0),
		makeVecf(-100000.5), makeVecf(-100000), makeVecf(-3), makeVecf(-2.5), makeVecf(-2), makeVecf(-1.5), makeVecf(-1.0), makeVecf(-0.5), makeVecf(-0.0), makeVecf(+0.0), makeVecf(0.5), makeVecf(1.5), makeVecf(2.0), makeVecf(2.5), makeVecf(3.0), makeVecf(100000), makeVecf(100000.5),
		makeVecf(-100000.5), makeVecf(-100000), makeVecf(-3), makeVecf(-2.5), makeVecf(-2), makeVecf(-1.5), makeVecf(-1.0), makeVecf(-0.5), makeVecf(-0.0), makeVecf(+0.0), makeVecf(0.5), makeVecf(1.5), makeVecf(2.0), makeVecf(2.5), makeVecf(3.0), makeVecf(100000), makeVecf(100000.5),
		makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf),
		makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf),
		makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf),
		makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf),
		makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf),
		makeVecf(-100000.5), makeVecf(-100000), makeVecf(-3), makeVecf(-2.5), makeVecf(-2), makeVecf(-1.5), makeVecf(-1.0), makeVecf(-0.5), makeVecf(-0.0), makeVecf(+0.0), makeVecf(0.5), makeVecf(1.5), makeVecf(2.0), makeVecf(2.5), makeVecf(3.0), makeVecf(100000), makeVecf(100000.5), makeVecf(NANf),
		};

	// results
	SLEEF_VECTOR_FLOAT *results = malloc(sizeof(x));
	float check[] = {M_PIf, -M_PIf, +0.0, -0.0, 3*M_PIf/4, -3*M_PIf/4, M_PIf/4, -M_PIf/4,
		M_PIf, M_PIf, M_PIf, M_PIf, M_PIf, M_PIf, M_PIf, M_PIf,
		-M_PIf, -M_PIf, -M_PIf, -M_PIf, -M_PIf, -M_PIf, -M_PIf, -M_PIf,
		-M_PIf/2, -M_PIf/2, -M_PIf/2, -M_PIf/2, -M_PIf/2, -M_PIf/2, -M_PIf/2, -M_PIf/2, -M_PIf/2, -M_PIf/2, -M_PIf/2, -M_PIf/2, -M_PIf/2, -M_PIf/2, -M_PIf/2, -M_PIf/2,
		+M_PIf/2, +M_PIf/2, +M_PIf/2, +M_PIf/2, +M_PIf/2, +M_PIf/2, +M_PIf/2, +M_PIf/2, +M_PIf/2, +M_PIf/2, +M_PIf/2, +M_PIf/2, +M_PIf/2, +M_PIf/2, +M_PIf/2, +M_PIf/2,
		+M_PIf/2, +M_PIf/2, +M_PIf/2, +M_PIf/2, +M_PIf/2, +M_PIf/2, +M_PIf/2, +M_PIf/2, +M_PIf/2, +M_PIf/2, +M_PIf/2, +M_PIf/2, +M_PIf/2, +M_PIf/2, +M_PIf/2, +M_PIf/2, +M_PIf/2,
		-M_PIf/2, -M_PIf/2, -M_PIf/2, -M_PIf/2, -M_PIf/2, -M_PIf/2, -M_PIf/2, -M_PIf/2, -M_PIf/2, -M_PIf/2, -M_PIf/2, -M_PIf/2, -M_PIf/2, -M_PIf/2, -M_PIf/2, -M_PIf/2, -M_PIf/2, 
		+M_PIf, +M_PIf, +M_PIf, +M_PIf, +M_PIf, +M_PIf, +M_PIf,
		-M_PIf, -M_PIf, -M_PIf, -M_PIf, -M_PIf, -M_PIf, -M_PIf,
		+0.0, +0.0, +0.0, +0.0, +0.0, +0.0, +0.0,
		-0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
		NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf,
		NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf };


	    test_denormsp_sp_sp("test_Sleef_atan2f4_u35kvx", x, y, results, sizeof(x)/sizeof(SLEEF_VECTOR_FLOAT));
	    for (size_t i =0; i < sizeof(check)/sizeof(float) && success; i++) {
		
		if (results[i][0] != check[i]) {
			if (xisnan(check[i])) {
				if (!xisnan(results[i][0])) {
					fprintf(stderr, "iter %ld: pow(%.20g, %.20g) = %.20g, check is: %.20g\n", i, x[i][0], y[i][0], results[i][0], check[i]);
					success = 0;
				}
			} else {	
				fprintf(stderr, "iter %ld: pow(%.20g, %.20g) = %.20g, check is: %.20g\n", i, x[i][0], y[i][0], results[i][0], check[i]);
				success = 0;
			}
		}
	    }
      free(results);
	    showResult(success);
   }


    //

    fprintf(stderr, "\nDenormal/nonnumber test atan2f_u1(y, x): ");
    // Sleef_atan2f_u10kvx
   {
	// first arg
	SLEEF_VECTOR_FLOAT x[] = { makeVecf(+0.0), makeVecf(-0.0), makeVecf(+0.0), makeVecf(-0.0), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf),
		makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0),
		makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0),
		makeVecf(-100000.5), makeVecf(-100000.5), makeVecf(-100000), makeVecf(-100000), makeVecf(-3), makeVecf(-3), makeVecf(-2.5), makeVecf(-2.5), makeVecf(-2), makeVecf(-2), makeVecf(-1.5), makeVecf(-1.5), makeVecf(-1.0), makeVecf(-1.0), makeVecf(-0.5), makeVecf(-0.5),
		makeVecf(+100000.5), makeVecf(+100000.5), makeVecf(+100000), makeVecf(+100000), makeVecf(+3), makeVecf(+3), makeVecf(+2.5), makeVecf(+2.5), makeVecf(+2), makeVecf(+2), makeVecf(+1.5), makeVecf(+1.5), makeVecf(+1.0), makeVecf(+1.0), makeVecf(+0.5), makeVecf(+0.5),
		makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf),
		makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf),
		makeVecf(0.5), makeVecf(1.5), makeVecf(2.0), makeVecf(2.5), makeVecf(3.0), makeVecf(100000), makeVecf(100000.5),
		makeVecf(-0.5), makeVecf(-1.5), makeVecf(-2.0), makeVecf(-2.5), makeVecf(-3.0), makeVecf(-100000), makeVecf(-100000.5),
		makeVecf(0.5), makeVecf(1.5), makeVecf(2.0), makeVecf(2.5), makeVecf(3.0), makeVecf(100000), makeVecf(100000.5),
		makeVecf(-0.5), makeVecf(-1.5), makeVecf(-2.0), makeVecf(-2.5), makeVecf(-3.0), makeVecf(-100000), makeVecf(-100000.5),
		makeVecf(-100000.5), makeVecf(-100000), makeVecf(-3), makeVecf(-2.5), makeVecf(-2), makeVecf(-1.5), makeVecf(-1.0), makeVecf(-0.5), makeVecf(-0.0), makeVecf(+0.0), makeVecf(0.5), makeVecf(1.5), makeVecf(2.0), makeVecf(2.5), makeVecf(3.0), makeVecf(100000), makeVecf(100000.5), makeVecf(NANf),
		makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf),
		};

	// second arg
	SLEEF_VECTOR_FLOAT y[] = { makeVecf(-0.0), makeVecf(-0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf),
		makeVecf(-100000.5), makeVecf(-100000), makeVecf(-3), makeVecf(-2.5), makeVecf(-2), makeVecf(-1.5), makeVecf(-1.0), makeVecf(-0.5),
		makeVecf(-100000.5), makeVecf(-100000), makeVecf(-3), makeVecf(-2.5), makeVecf(-2), makeVecf(-1.5), makeVecf(-1.0), makeVecf(-0.5),
		makeVecf(+0.0), makeVecf(-0.0), makeVecf(+0.0), makeVecf(-0.0), makeVecf(+0.0), makeVecf(-0.0), makeVecf(+0.0), makeVecf(-0.0), makeVecf(+0.0), makeVecf(-0.0), makeVecf(+0.0), makeVecf(-0.0), makeVecf(+0.0), makeVecf(-0.0), makeVecf(+0.0), makeVecf(-0.0),
		makeVecf(+0.0), makeVecf(-0.0), makeVecf(+0.0), makeVecf(-0.0), makeVecf(+0.0), makeVecf(-0.0), makeVecf(+0.0), makeVecf(-0.0), makeVecf(+0.0), makeVecf(-0.0), makeVecf(+0.0), makeVecf(-0.0), makeVecf(+0.0), makeVecf(-0.0), makeVecf(+0.0), makeVecf(-0.0),
		makeVecf(-100000.5), makeVecf(-100000), makeVecf(-3), makeVecf(-2.5), makeVecf(-2), makeVecf(-1.5), makeVecf(-1.0), makeVecf(-0.5), makeVecf(-0.0), makeVecf(+0.0), makeVecf(0.5), makeVecf(1.5), makeVecf(2.0), makeVecf(2.5), makeVecf(3.0), makeVecf(100000), makeVecf(100000.5),
		makeVecf(-100000.5), makeVecf(-100000), makeVecf(-3), makeVecf(-2.5), makeVecf(-2), makeVecf(-1.5), makeVecf(-1.0), makeVecf(-0.5), makeVecf(-0.0), makeVecf(+0.0), makeVecf(0.5), makeVecf(1.5), makeVecf(2.0), makeVecf(2.5), makeVecf(3.0), makeVecf(100000), makeVecf(100000.5),
		makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf),
		makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf),
		makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf),
		makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf),
		makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf),
		makeVecf(-100000.5), makeVecf(-100000), makeVecf(-3), makeVecf(-2.5), makeVecf(-2), makeVecf(-1.5), makeVecf(-1.0), makeVecf(-0.5), makeVecf(-0.0), makeVecf(+0.0), makeVecf(0.5), makeVecf(1.5), makeVecf(2.0), makeVecf(2.5), makeVecf(3.0), makeVecf(100000), makeVecf(100000.5), makeVecf(NANf),
		};

	// results
	SLEEF_VECTOR_FLOAT *results = malloc(sizeof(x));
	float check[] = {M_PIf, -M_PIf, +0.0, -0.0, 3*M_PIf/4, -3*M_PIf/4, M_PIf/4, -M_PIf/4,
		M_PIf, M_PIf, M_PIf, M_PIf, M_PIf, M_PIf, M_PIf, M_PIf,
		-M_PIf, -M_PIf, -M_PIf, -M_PIf, -M_PIf, -M_PIf, -M_PIf, -M_PIf,
		-M_PIf/2, -M_PIf/2, -M_PIf/2, -M_PIf/2, -M_PIf/2, -M_PIf/2, -M_PIf/2, -M_PIf/2, -M_PIf/2, -M_PIf/2, -M_PIf/2, -M_PIf/2, -M_PIf/2, -M_PIf/2, -M_PIf/2, -M_PIf/2,
		+M_PIf/2, +M_PIf/2, +M_PIf/2, +M_PIf/2, +M_PIf/2, +M_PIf/2, +M_PIf/2, +M_PIf/2, +M_PIf/2, +M_PIf/2, +M_PIf/2, +M_PIf/2, +M_PIf/2, +M_PIf/2, +M_PIf/2, +M_PIf/2,
		+M_PIf/2, +M_PIf/2, +M_PIf/2, +M_PIf/2, +M_PIf/2, +M_PIf/2, +M_PIf/2, +M_PIf/2, +M_PIf/2, +M_PIf/2, +M_PIf/2, +M_PIf/2, +M_PIf/2, +M_PIf/2, +M_PIf/2, +M_PIf/2, +M_PIf/2,
		-M_PIf/2, -M_PIf/2, -M_PIf/2, -M_PIf/2, -M_PIf/2, -M_PIf/2, -M_PIf/2, -M_PIf/2, -M_PIf/2, -M_PIf/2, -M_PIf/2, -M_PIf/2, -M_PIf/2, -M_PIf/2, -M_PIf/2, -M_PIf/2, -M_PIf/2, 
		+M_PIf, +M_PIf, +M_PIf, +M_PIf, +M_PIf, +M_PIf, +M_PIf,
		-M_PIf, -M_PIf, -M_PIf, -M_PIf, -M_PIf, -M_PIf, -M_PIf,
		+0.0, +0.0, +0.0, +0.0, +0.0, +0.0, +0.0,
		-0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
		NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf,
		NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf };


	    test_denormsp_sp_sp("test_Sleef_atan2f4_u10kvx", x, y, results, sizeof(x)/sizeof(SLEEF_VECTOR_FLOAT));
	    for (size_t i =0; i < sizeof(check)/sizeof(float) && success; i++) {
		
		if (results[i][0] != check[i]) {
			if (xisnan(check[i])) {
				if (!xisnan(results[i][0])) {
					fprintf(stderr, "iter %ld: pow(%.20g, %.20g) = %.20g, check is: %.20g\n", i, x[i][0], y[i][0], results[i][0], check[i]);
					success = 0;
				}
			} else {	
				fprintf(stderr, "iter %ld: pow(%.20g, %.20g) = %.20g, check is: %.20g\n", i, x[i][0], y[i][0], results[i][0], check[i]);
				success = 0;
			}
		}
	    }
      free(results);
	    showResult(success);
   }

    //

    fprintf(stderr, "\nDenormal/nonnumber test powf(x, y): ");
  {
    // Sleef_powf4_u10kvx
    // first arg
    SLEEF_VECTOR_FLOAT x[] = { makeVecf(1), makeVecf(NANf), makeVecf(-1), makeVecf(-1),
    	makeVecf(-100000.5), makeVecf(-100000.5), makeVecf(-100000.5), makeVecf(-100000.5), makeVecf(-100000.5), makeVecf(-100000.5), makeVecf(-100000.5), makeVecf(-100000.5), makeVecf(-100000), makeVecf(-100000), makeVecf(-100000), makeVecf(-100000), makeVecf(-100000), makeVecf(-100000), makeVecf(-100000), makeVecf(-100000),
    	makeVecf(-3), makeVecf(-3), makeVecf(-3), makeVecf(-3), makeVecf(-3), makeVecf(-3), makeVecf(-3), makeVecf(-3), makeVecf(-2.5), makeVecf(-2.5), makeVecf(-2.5), makeVecf(-2.5), makeVecf(-2.5), makeVecf(-2.5), makeVecf(-2.5), makeVecf(-2.5), makeVecf(-2), makeVecf(-2), makeVecf(-2), makeVecf(-2), makeVecf(-2), makeVecf(-2), makeVecf(-2), makeVecf(-2), makeVecf(-1.5), makeVecf(-1.5), makeVecf(-1.5), makeVecf(-1.5), makeVecf(-1.5), makeVecf(-1.5), makeVecf(-1.5), makeVecf(-1.5),
    	makeVecf(-1.0), makeVecf(-1.0), makeVecf(-1.0), makeVecf(-1.0), makeVecf(-1.0), makeVecf(-1.0), makeVecf(-1.0), makeVecf(-1.0), makeVecf(-0.5), makeVecf(-0.5), makeVecf(-0.5), makeVecf(-0.5), makeVecf(-0.5), makeVecf(-0.5), makeVecf(-0.5), makeVecf(-0.5),
    	makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf),
    	makeVecf(-100000.5), makeVecf(-100000), makeVecf(-3), makeVecf(-2.5), makeVecf(-2), makeVecf(-1.5), makeVecf(-1.0), makeVecf(-0.5), makeVecf(-0.0), makeVecf(+0.0), makeVecf(+0.5), makeVecf(1.5), makeVecf(2.0), makeVecf(2.5), makeVecf(3.0), makeVecf(100000), makeVecf(100000.5),
    	makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0),
    	makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0),
    	makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0),
    	makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0),
    	makeVecf(-0.999), makeVecf(-0.5), makeVecf(-0.0), makeVecf(+0.0), makeVecf(+0.5), makeVecf(+0.999),
    	makeVecf(-100000.5), makeVecf(-100000), makeVecf(-3), makeVecf(-2.5), makeVecf(-2), makeVecf(-1.5), makeVecf(1.5), makeVecf(2.0), makeVecf(2.5), makeVecf(3.0), makeVecf(100000), makeVecf(100000.5),
	makeVecf(-0.999), makeVecf(-0.5), makeVecf(-0.0), makeVecf(+0.0), makeVecf(+0.5), makeVecf(+0.999),
    	makeVecf(-100000.5), makeVecf(-100000), makeVecf(-3), makeVecf(-2.5), makeVecf(-2), makeVecf(-1.5), makeVecf(1.5), makeVecf(2.0), makeVecf(2.5), makeVecf(3.0), makeVecf(100000), makeVecf(100000.5),
	makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf),    	makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf),
    	makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0),
    	makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0),
    	makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0),
    	makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0)};

    // second arg
    SLEEF_VECTOR_FLOAT y[] = { makeVecf(NANf), makeVecf(0), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf),
    	makeVecf(-100000.5), makeVecf(-2.5), makeVecf(-1.5), makeVecf(-0.5), makeVecf(0.5), makeVecf(1.5), makeVecf(2.5), makeVecf(100000.5), makeVecf(-100000.5), makeVecf(-2.5), makeVecf(-1.5), makeVecf(-0.5), makeVecf(0.5), makeVecf(1.5), makeVecf(2.5), makeVecf(100000.5), makeVecf(-100000.5), makeVecf(-2.5), makeVecf(-1.5), makeVecf(-0.5), makeVecf(0.5), makeVecf(1.5), makeVecf(2.5), makeVecf(100000.5), makeVecf(-100000.5), makeVecf(-2.5), makeVecf(-1.5), makeVecf(-0.5), makeVecf(0.5), makeVecf(1.5), makeVecf(2.5), makeVecf(100000.5), makeVecf(-100000.5), makeVecf(-2.5), makeVecf(-1.5), makeVecf(-0.5), makeVecf(0.5), makeVecf(1.5), makeVecf(2.5), makeVecf(100000.5), makeVecf(-100000.5), makeVecf(-2.5), makeVecf(-1.5), makeVecf(-0.5), makeVecf(0.5), makeVecf(1.5), makeVecf(2.5), makeVecf(100000.5), makeVecf(-100000.5), makeVecf(-2.5), makeVecf(-1.5), makeVecf(-0.5), makeVecf(0.5), makeVecf(1.5), makeVecf(2.5), makeVecf(100000.5), makeVecf(-100000.5), makeVecf(-2.5), makeVecf(-1.5), makeVecf(-0.5), makeVecf(0.5), makeVecf(1.5), makeVecf(2.5), makeVecf(100000.5),
    makeVecf(-100000.5), makeVecf(-100000), makeVecf(-3), makeVecf(-2.5), makeVecf(-2), makeVecf(-1.5), makeVecf(-1.0), makeVecf(-0.5), makeVecf(0.5), makeVecf(1.0), makeVecf(1.5), makeVecf(2.0), makeVecf(2.5), makeVecf(3.0), makeVecf(100000), makeVecf(100000.5),
    	makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf), makeVecf(NANf),
	makeVecf(1), makeVecf(3), makeVecf(5), makeVecf(7), makeVecf(100001),
	makeVecf(1), makeVecf(3), makeVecf(5), makeVecf(7), makeVecf(100001),
    	makeVecf(0.5), makeVecf(1.5), makeVecf(2.0), makeVecf(2.5), makeVecf(4.0), makeVecf(100000), makeVecf(100000.5),
    	makeVecf(0.5), makeVecf(1.5), makeVecf(2.0), makeVecf(2.5), makeVecf(4.0), makeVecf(100000), makeVecf(100000.5),
	makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf),
    	makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf),
    	makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf),
    	makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf),
    	makeVecf(-100001), makeVecf(-5), makeVecf(-3), makeVecf(-1),
	makeVecf(-100000.5), makeVecf(-100000), makeVecf(-4), makeVecf(-2.5), makeVecf(-2), makeVecf(-1.5), makeVecf(-0.5),
	makeVecf(1), makeVecf(3), makeVecf(5), makeVecf(7), makeVecf(100001),
	makeVecf(0.5), makeVecf(1.5), makeVecf(2), makeVecf(2.5), makeVecf(3.5), makeVecf(4), makeVecf(100000), makeVecf(100000.5),
	makeVecf(-100000.5), makeVecf(-100000), makeVecf(-3), makeVecf(-2.5), makeVecf(-2), makeVecf(-1.5), makeVecf(-1.0), makeVecf(-0.5),
	makeVecf(0.5), makeVecf(1), makeVecf(1.5), makeVecf(2.0), makeVecf(2.5), makeVecf(3.0), makeVecf(100000), makeVecf(100000.5),
	makeVecf(-100001), makeVecf(-5), makeVecf(-3), makeVecf(-1),
	makeVecf(-100001), makeVecf(-5), makeVecf(-3), makeVecf(-1),
	makeVecf(-100000.5), makeVecf(-100000), makeVecf(-4), makeVecf(-2.5), makeVecf(-2), makeVecf(-1.5), makeVecf(-0.5), makeVecf(-100000.5), makeVecf(-100000), makeVecf(-4), makeVecf(-2.5), makeVecf(-2), makeVecf(-1.5), makeVecf(-0.5)};

    // results
    SLEEF_VECTOR_FLOAT *results = malloc(sizeof(x));
    float check[] = { 1.0, 1.0, 1.0, 1.0, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf,
    NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf, NANf,
    +0, +0, +0, +0, +0, -0, -0, -0, -0, -0, +0, +0, +0, +0, +0, +0, +0, +0, +0, +0, +0, +0, +0, +0, POSITIVE_INFINITYf, POSITIVE_INFINITYf, POSITIVE_INFINITYf, POSITIVE_INFINITYf, POSITIVE_INFINITYf, POSITIVE_INFINITYf,
    +0, +0, +0, +0, +0, +0, +0, +0, +0, +0, +0, +0, +0, +0, +0, +0, +0, +0,
    POSITIVE_INFINITYf, POSITIVE_INFINITYf, POSITIVE_INFINITYf, POSITIVE_INFINITYf, POSITIVE_INFINITYf, POSITIVE_INFINITYf, POSITIVE_INFINITYf, POSITIVE_INFINITYf, POSITIVE_INFINITYf, POSITIVE_INFINITYf, POSITIVE_INFINITYf, POSITIVE_INFINITYf,
    -0, -0, -0, -0, +0, +0, +0, +0, +0, +0, +0, NEGATIVE_INFINITYf, NEGATIVE_INFINITYf, NEGATIVE_INFINITYf, NEGATIVE_INFINITYf, NEGATIVE_INFINITYf, POSITIVE_INFINITYf, POSITIVE_INFINITYf, POSITIVE_INFINITYf, POSITIVE_INFINITYf, POSITIVE_INFINITYf, POSITIVE_INFINITYf, POSITIVE_INFINITYf, POSITIVE_INFINITYf,
    +0, +0, +0, +0, +0, +0, +0, +0, POSITIVE_INFINITYf, POSITIVE_INFINITYf, POSITIVE_INFINITYf, POSITIVE_INFINITYf, POSITIVE_INFINITYf, POSITIVE_INFINITYf, POSITIVE_INFINITYf, POSITIVE_INFINITYf,
    POSITIVE_INFINITYf, POSITIVE_INFINITYf, POSITIVE_INFINITYf, POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NEGATIVE_INFINITYf, NEGATIVE_INFINITYf, NEGATIVE_INFINITYf,
    POSITIVE_INFINITYf, POSITIVE_INFINITYf, POSITIVE_INFINITYf, POSITIVE_INFINITYf, POSITIVE_INFINITYf, POSITIVE_INFINITYf, POSITIVE_INFINITYf, POSITIVE_INFINITYf, POSITIVE_INFINITYf, POSITIVE_INFINITYf, POSITIVE_INFINITYf, POSITIVE_INFINITYf, POSITIVE_INFINITYf, POSITIVE_INFINITYf };
    
    test_denormsp_sp_sp("test_Sleef_powf4_u10kvx", x, y, results, sizeof(x)/sizeof(SLEEF_VECTOR_FLOAT));
    for (size_t i =0; i < sizeof(check)/sizeof(float) && success; i++) {
    	
	if (results[i][0] != check[i]) {
		if (xisnan(check[i])) {
			if (!xisnan(results[i][0])) {
				fprintf(stderr, "iter %ld: pow(%.20g, %.20g) = %.20g, check is: %.20g\n", i, x[i][0], y[i][0], results[i][0], check[i]);
				success = 0;
			}
		} else {	
			fprintf(stderr, "iter %ld: pow(%.20g, %.20g) = %.20g, check is: %.20g\n", i, x[i][0], y[i][0], results[i][0], check[i]);
			success = 0;
		}
	}
    }
      free(results);
    showResult(success);
   }
  }
  //
  
#define cmpDenorm_d(mpfrFunc, sleef_result, argx) do {			\
      mpfr_set_d(frx, argx, GMP_RNDN);					\
      mpfrFunc(frc, frx, GMP_RNDN);					\
      if (!cmpDenormdp(sleef_result[0], frc)) {				\
	fprintf(stderr, "arg = %.20g, test = {%.20g, %.20g}, correct = %.20g\n", argx, sleef_result[0], sleef_result[1], mpfr_get_d(frc, GMP_RNDN)); \
	success = 0;							\
	break;								\
      }									\
    } while(0)

#define cmpDenormNR_d(mpfrFunc, childFunc, argx) do {			\
      mpfr_set_d(frx, argx, GMP_RNDN);					\
      mpfrFunc(frc, frx);						\
      if (!cmpDenormdp(childFunc[0], frc)) {				\
	fprintf(stderr, "arg = %.20g, test = %.20g, correct = %.20g\n", argx, childFunc[0], mpfr_get_d(frc, GMP_RNDN)); \
	success = 0;							\
	break;								\
      }									\
    } while(0)

#define cmpDenorm_d_d(mpfrFunc, childFunc, argx, argy) do {		\
      mpfr_set_d(frx, argx, GMP_RNDN);					\
      mpfr_set_d(fry, argy, GMP_RNDN);					\
      mpfrFunc(frc, frx, fry, GMP_RNDN);				\
      if (!cmpDenormdp(childFunc[0], frc)) {			\
	fprintf(stderr, "arg = %.20g, %.20g, test = %.20g, correct = %.20g\n", argx, argy, childFunc[0], mpfr_get_d(frc, GMP_RNDN)); \
	success = 0;							\
	break;								\
      }									\
    } while(0)
  
#define cmpDenormX_d(mpfrFunc, childFunc, argx) do {			\
      mpfr_set_d(frx, argx, GMP_RNDN);					\
      mpfrFunc(frc, frx, GMP_RNDN);					\
      Sleef_SLEEF_VECTOR_DOUBLE_2 d2 = childFunc;				\
      if (!cmpDenormdp(d2.x[0], frc)) {					\
	fprintf(stderr, "arg = %.20g, test = %.20g, correct = %.20g\n", argx, d2.x[0], mpfr_get_d(frc, GMP_RNDN)); \
	success = 0;							\
	break;								\
      }									\
    } while(0)
  
#define cmpDenormY_d(mpfrFunc, childFunc, argx) do {			\
      mpfr_set_d(frx, argx, GMP_RNDN);					\
      mpfrFunc(frc, frx, GMP_RNDN);					\
      Sleef_SLEEF_VECTOR_DOUBLE_2 d2 = childFunc;				\
      if (!cmpDenormdp(d2.y[0], frc)) {					\
	fprintf(stderr, "arg = %.20g, test = %.20g, correct = %.20g\n", argx, d2.y[0], mpfr_get_d(frc, GMP_RNDN)); \
	success = 0;							\
	break;								\
      }									\
    } while(0)

  //
  if (enableDP) {
    {
      fprintf(stderr, "sin denormal/nonnumber test : ");
      
      SLEEF_VECTOR_DOUBLE x[] = { makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+10), makeVecd(-1e+10), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN) };
      double xa[] = { +0.0, -0.0, +1, -1, +1e+10, -1e+10, POSITIVE_INFINITY, NEGATIVE_INFINITY, NAN };
      SLEEF_VECTOR_DOUBLE y[9];

      test_denormdp_dp("test_Sleef_sind2_u35kvx", x, y, 9);

      for(i=0;i<sizeof(xa)/sizeof(double) && success;i++) cmpDenorm_d(mpfr_sin, y[i], xa[i]);
      showResult(success);
    }
    
    {
      fprintf(stderr, "sin_u1 denormal/nonnumber test : ");
      SLEEF_VECTOR_DOUBLE x[] = { makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+10), makeVecd(-1e+10), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN) };
      double xa[] = { +0.0, -0.0, +1, -1, +1e+10, -1e+10, POSITIVE_INFINITY, NEGATIVE_INFINITY, NAN };
      SLEEF_VECTOR_DOUBLE y[9];

      test_denormdp_dp("test_Sleef_sind2_u10kvx", x, y, 9);

      for(i=0;i<sizeof(xa)/sizeof(double) && success;i++) cmpDenorm_d(mpfr_sin, y[i], xa[i]);
      showResult(success);
    }
    
    {
      fprintf(stderr, "sin in sincos denormal/nonnumber test : ");
      SLEEF_VECTOR_DOUBLE x[] = { makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+10), makeVecd(-1e+10), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN) };
      double xa[] = { +0.0, -0.0, +1, -1, +1e+10, -1e+10, POSITIVE_INFINITY, NEGATIVE_INFINITY, NAN };
      Sleef_SLEEF_VECTOR_DOUBLE_2 *y = malloc(sizeof(x)*2);
      
      test_denormdp2_dp("test_Sleef_sincosd2_u35kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_DOUBLE));

      for(i=0;i<sizeof(xa)/sizeof(double) && success;i++) cmpDenormX_d(mpfr_sin, y[i], xa[i]);
      free(y);
      showResult(success);
    }
    {
      fprintf(stderr, "sin in sincos_u1 denormal/nonnumber test : ");
      SLEEF_VECTOR_DOUBLE x[] = { makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+10), makeVecd(-1e+10), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN) };
      double xa[] = { +0.0, -0.0, +1, -1, +1e+10, -1e+10, POSITIVE_INFINITY, NEGATIVE_INFINITY, NAN };
      Sleef_SLEEF_VECTOR_DOUBLE_2 *y = malloc(sizeof(x)*2);
      
      test_denormdp2_dp("test_Sleef_sincosd2_u10kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_DOUBLE));

      for(i=0;i<sizeof(xa)/sizeof(double) && success;i++) cmpDenormX_d(mpfr_sin, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "sin in sincospi_u05 denormal/nonnumber test : ");
      SLEEF_VECTOR_DOUBLE x[] = { makeVecd(+0.0), makeVecd(-0.0), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN) };
      double xa[] = { +0.0, -0.0, POSITIVE_INFINITY, NEGATIVE_INFINITY, NAN };
      Sleef_SLEEF_VECTOR_DOUBLE_2 *y = malloc(sizeof(x)*2);
      
      test_denormdp2_dp("test_Sleef_sincospid2_u05kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_DOUBLE));

      for(i=0;i<sizeof(xa)/sizeof(double) && success;i++) cmpDenormX_d(mpfr_sin, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "sin in sincospi_u35 denormal/nonnumber test : ");
      SLEEF_VECTOR_DOUBLE x[] = { makeVecd(+0.0), makeVecd(-0.0), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN) };
      double xa[] = { +0.0, -0.0, POSITIVE_INFINITY, NEGATIVE_INFINITY, NAN };
      Sleef_SLEEF_VECTOR_DOUBLE_2 *y = malloc(sizeof(x)*2);
      
      test_denormdp2_dp("test_Sleef_sincospid2_u35kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_DOUBLE));

      for(i=0;i<sizeof(xa)/sizeof(double) && success;i++) cmpDenormX_d(mpfr_sin, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "sinpi_u05 denormal/nonnumber test : ");
      SLEEF_VECTOR_DOUBLE x[] = { makeVecd(+0.0), makeVecd(-0.0), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN) };
      double xa[] = { +0.0, -0.0, POSITIVE_INFINITY, NEGATIVE_INFINITY, NAN };
      SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(x));

      test_denormdp_dp("test_Sleef_sinpid2_u05kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_DOUBLE));

      for(i=0;i<sizeof(xa)/sizeof(double) && success;i++) cmpDenorm_d(mpfr_sinpi, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "cospi_u05 denormal/nonnumber test : ");
      SLEEF_VECTOR_DOUBLE x[] = { makeVecd(+0.0), makeVecd(-0.0), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN) };
      double xa[] = { +0.0, -0.0, POSITIVE_INFINITY, NEGATIVE_INFINITY, NAN };
      SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(x));
      
      test_denormdp_dp("test_Sleef_cospid2_u05kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_DOUBLE));

      for(i=0;i<sizeof(xa)/sizeof(double) && success;i++) cmpDenorm_d(mpfr_cospi, y[i], xa[i]);
      free(y);
      showResult(success);
    }
    
    //
  
    {
      fprintf(stderr, "cos denormal/nonnumber test : ");
      SLEEF_VECTOR_DOUBLE x[] = { makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+10), makeVecd(-1e+10), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN) };
      double xa[] = { +0.0, -0.0, +1, -1, +1e+10, -1e+10, POSITIVE_INFINITY, NEGATIVE_INFINITY, NAN };
      SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(x));
      test_denormdp_dp("test_Sleef_cosd2_u35kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_DOUBLE));

      for(i=0;i<sizeof(xa)/sizeof(double) && success;i++) cmpDenorm_d(mpfr_cos, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "cos_u1 denormal/nonnumber test : ");
      SLEEF_VECTOR_DOUBLE x[] = { makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+10), makeVecd(-1e+10), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN) };
      double xa[] = { +0.0, -0.0, +1, -1, +1e+10, -1e+10, POSITIVE_INFINITY, NEGATIVE_INFINITY, NAN };
      SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(x));
      test_denormdp_dp("test_Sleef_cosd2_u10kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_DOUBLE));

      for(i=0;i<sizeof(xa)/sizeof(double) && success;i++) cmpDenorm_d(mpfr_cos, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "cos in sincos denormal/nonnumber test : ");
      SLEEF_VECTOR_DOUBLE x[] = { makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+10), makeVecd(-1e+10), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN) };
      double xa[] = { +0.0, -0.0, +1, -1, +1e+10, -1e+10, POSITIVE_INFINITY, NEGATIVE_INFINITY, NAN };
      Sleef_SLEEF_VECTOR_DOUBLE_2 *y = malloc(sizeof(x)*2);
      test_denormdp2_dp("test_Sleef_sincosd2_u35kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_DOUBLE));
      
      for(i=0;i<sizeof(xa)/sizeof(double) && success;i++) cmpDenormY_d(mpfr_cos, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "cos in sincos_u1 denormal/nonnumber test : ");
      SLEEF_VECTOR_DOUBLE x[] = { makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+10), makeVecd(-1e+10), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN) };
      double xa[] = { +0.0, -0.0, +1, -1, +1e+10, -1e+10, POSITIVE_INFINITY, NEGATIVE_INFINITY, NAN };
      Sleef_SLEEF_VECTOR_DOUBLE_2 *y = malloc(sizeof(x)*2);
      test_denormdp2_dp("test_Sleef_sincosd2_u10kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_DOUBLE));
      
      for(i=0;i<sizeof(xa)/sizeof(double) && success;i++) cmpDenormY_d(mpfr_cos, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "cos in sincospi_u05 denormal/nonnumber test : ");
      SLEEF_VECTOR_DOUBLE x[] = { makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+10), makeVecd(-1e+10), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN) };
      double xa[] = { +0.0, -0.0, +1, -1, +1e+10, -1e+10, POSITIVE_INFINITY, NEGATIVE_INFINITY, NAN };
      Sleef_SLEEF_VECTOR_DOUBLE_2 *y = malloc(sizeof(x)*2);
      test_denormdp2_dp("test_Sleef_sincospid2_u05kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_DOUBLE));
      
      for(i=0;i<sizeof(xa)/sizeof(double) && success;i++) cmpDenormY_d(mpfr_cospi, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "cos in sincospi_u35 denormal/nonnumber test : ");
      SLEEF_VECTOR_DOUBLE x[] = { makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+10), makeVecd(-1e+10), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN) };
      double xa[] = { +0.0, -0.0, +1, -1, +1e+10, -1e+10, POSITIVE_INFINITY, NEGATIVE_INFINITY, NAN };
      Sleef_SLEEF_VECTOR_DOUBLE_2 *y = malloc(sizeof(x)*2);
      test_denormdp2_dp("test_Sleef_sincospid2_u35kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_DOUBLE));
      
      for(i=0;i<sizeof(xa)/sizeof(double) && success;i++) cmpDenormY_d(mpfr_cospi, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    //
  
    {
      fprintf(stderr, "tan denormal/nonnumber test : ");
      SLEEF_VECTOR_DOUBLE x[] = { makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+10), makeVecd(-1e+10), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN), makeVecd(M_PI/2), makeVecd(-M_PI/2) };
      double xa[] = { +0.0, -0.0, +1, -1, +1e+10, -1e+10, POSITIVE_INFINITY, NEGATIVE_INFINITY, NAN, M_PI/2, -M_PI/2 };
      SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(x));
      test_denormdp_dp("test_Sleef_tand2_u35kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_DOUBLE));

      for(i=0;i<sizeof(xa)/sizeof(double) && success;i++) cmpDenorm_d(mpfr_tan, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "tan_u1 denormal/nonnumber test : ");
      SLEEF_VECTOR_DOUBLE x[] = { makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+10), makeVecd(-1e+10), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN), makeVecd(M_PI/2), makeVecd(-M_PI/2) };
      double xa[] = { +0.0, -0.0, +1, -1, +1e+10, -1e+10, POSITIVE_INFINITY, NEGATIVE_INFINITY, NAN, M_PI/2, -M_PI/2 };
      SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(x));
      test_denormdp_dp("test_Sleef_tand2_u10kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_DOUBLE));

      for(i=0;i<sizeof(xa)/sizeof(double) && success;i++) cmpDenorm_d(mpfr_tan, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "asin denormal/nonnumber test : ");
      SLEEF_VECTOR_DOUBLE x[] = { makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+10), makeVecd(-1e+10), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN),
      makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN), makeVecd(nextafter(1, 2)), makeVecd(nextafter(-1, -2)) };
      double xa[] = { +0.0, -0.0, +1, -1, +1e+10, -1e+10, DBL_MAX, -DBL_MAX, DBL_MIN, -DBL_MIN,
		      POSITIVE_INFINITY, NEGATIVE_INFINITY, NAN, nextafter(1, 2), nextafter(-1, -2) };
      SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(x));
      test_denormdp_dp("test_Sleef_asind2_u35kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_DOUBLE)); 

      for(i=0;i<sizeof(xa)/sizeof(double) && success;i++) cmpDenorm_d(mpfr_asin, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "asin_u1 denormal/nonnumber test : ");
      SLEEF_VECTOR_DOUBLE x[] = { makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+10), makeVecd(-1e+10), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN),
      makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN), makeVecd(nextafter(1, 2)), makeVecd(nextafter(-1, -2)) };
      double xa[] = { +0.0, -0.0, +1, -1, +1e+10, -1e+10, DBL_MAX, -DBL_MAX, DBL_MIN, -DBL_MIN,
		      POSITIVE_INFINITY, NEGATIVE_INFINITY, NAN, nextafter(1, 2), nextafter(-1, -2) };
      SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(x));
      test_denormdp_dp("test_Sleef_asind2_u10kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_DOUBLE)); 

      for(i=0;i<sizeof(xa)/sizeof(double) && success;i++) cmpDenorm_d(mpfr_asin, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "acos denormal/nonnumber test : ");
      SLEEF_VECTOR_DOUBLE x[] = { makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+10), makeVecd(-1e+10), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN),
      makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN), makeVecd(nextafter(1, 2)), makeVecd(nextafter(-1, -2)) };
      double xa[] = { +0.0, -0.0, +1, -1, +1e+10, -1e+10, DBL_MAX, -DBL_MAX, DBL_MIN, -DBL_MIN,
		      POSITIVE_INFINITY, NEGATIVE_INFINITY, NAN, nextafter(1, 2), nextafter(-1, -2) };
      SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(x));
      test_denormdp_dp("test_Sleef_acosd2_u35kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_DOUBLE)); 

      for(i=0;i<sizeof(xa)/sizeof(double) && success;i++) cmpDenorm_d(mpfr_acos, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "acos_u1 denormal/nonnumber test : ");
      SLEEF_VECTOR_DOUBLE x[] = { makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+10), makeVecd(-1e+10), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN),
      makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN), makeVecd(nextafter(1, 2)), makeVecd(nextafter(-1, -2)) };
      double xa[] = { +0.0, -0.0, +1, -1, +1e+10, -1e+10, DBL_MAX, -DBL_MAX, DBL_MIN, -DBL_MIN,
		      POSITIVE_INFINITY, NEGATIVE_INFINITY, NAN, nextafter(1, 2), nextafter(-1, -2) };
      SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(x));
      test_denormdp_dp("test_Sleef_acosd2_u10kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_DOUBLE)); 

      for(i=0;i<sizeof(xa)/sizeof(double) && success;i++) cmpDenorm_d(mpfr_acos, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "atan denormal/nonnumber test : ");
      SLEEF_VECTOR_DOUBLE x[] = { makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+10), makeVecd(-1e+10), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN) };
      double xa[] = { +0.0, -0.0, +1, -1, +1e+10, -1e+10, DBL_MAX, -DBL_MAX, DBL_MIN, -DBL_MIN, POSITIVE_INFINITY, NEGATIVE_INFINITY, NAN };
      SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(x));
      test_denormdp_dp("test_Sleef_atand2_u35kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_DOUBLE)); 

      for(i=0;i<sizeof(xa)/sizeof(double) && success;i++) cmpDenorm_d(mpfr_atan, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "atan_u1 denormal/nonnumber test : ");
      SLEEF_VECTOR_DOUBLE x[] = { makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+10), makeVecd(-1e+10), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN) };
      double xa[] = { +0.0, -0.0, +1, -1, +1e+10, -1e+10, DBL_MAX, -DBL_MAX, DBL_MIN, -DBL_MIN, POSITIVE_INFINITY, NEGATIVE_INFINITY, NAN };
      SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(x));
      test_denormdp_dp("test_Sleef_atand2_u10kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_DOUBLE)); 

      for(i=0;i<sizeof(xa)/sizeof(double) && success;i++) cmpDenorm_d(mpfr_atan, y[i], xa[i]);
      free(y);
      showResult(success);
    }
    {
      fprintf(stderr, "log denormal/nonnumber test : ");
      SLEEF_VECTOR_DOUBLE x[] ={ makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+10), makeVecd(-1e+10), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN), makeVecd(nextafter(0, -1)) };
      double xa[] = { +0.0, -0.0, +1, -1, +1e+10, -1e+10, DBL_MAX, -DBL_MAX, DBL_MIN, -DBL_MIN, POSITIVE_INFINITY, NEGATIVE_INFINITY, NAN, nextafter(0, -1) };
      SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(x));
      test_denormdp_dp("test_Sleef_logd2_u35kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_DOUBLE)); 

      for(i=0;i<sizeof(xa)/sizeof(double) && success;i++) cmpDenorm_d(mpfr_log, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "log_u1 denormal/nonnumber test : ");
      SLEEF_VECTOR_DOUBLE x[] ={ makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+10), makeVecd(-1e+10), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN), makeVecd(nextafter(0, -1)) };
      double xa[] = { +0.0, -0.0, +1, -1, +1e+10, -1e+10, DBL_MAX, -DBL_MAX, DBL_MIN, -DBL_MIN, POSITIVE_INFINITY, NEGATIVE_INFINITY, NAN, nextafter(0, -1) };
      SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(x));
      test_denormdp_dp("test_Sleef_logd2_u10kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_DOUBLE)); 

      for(i=0;i<sizeof(xa)/sizeof(double) && success;i++) cmpDenorm_d(mpfr_log, y[i], xa[i]);
      free(y);
      showResult(success);
    }
    {
      fprintf(stderr, "exp denormal/nonnumber test : ");
      SLEEF_VECTOR_DOUBLE x[] = { makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+10), makeVecd(-1e+10), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN) };
      double xa[] = { +0.0, -0.0, +1, -1, +1e+10, -1e+10, DBL_MAX, -DBL_MAX, DBL_MIN, -DBL_MIN, POSITIVE_INFINITY, NEGATIVE_INFINITY, NAN };
      SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(x));
      test_denormdp_dp("test_Sleef_expd2_u10kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_DOUBLE)); 

      for(i=0;i<sizeof(xa)/sizeof(double) && success;i++) cmpDenorm_d(mpfr_exp, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "sinh denormal/nonnumber test : ");
      SLEEF_VECTOR_DOUBLE x[] = { makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+10), makeVecd(-1e+10), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN) };
      double xa[] = { +0.0, -0.0, +1, -1, +1e+10, -1e+10, DBL_MAX, -DBL_MAX, DBL_MIN, -DBL_MIN, POSITIVE_INFINITY, NEGATIVE_INFINITY, NAN };
      SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(x));
      test_denormdp_dp("test_Sleef_sinhd2_u35kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_DOUBLE)); 

      for(i=0;i<sizeof(xa)/sizeof(double) && success;i++) cmpDenorm_d(mpfr_sinh, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "cosh denormal/nonnumber test : ");
      SLEEF_VECTOR_DOUBLE x[] = { makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+10), makeVecd(-1e+10), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN) };
      double xa[] = { +0.0, -0.0, +1, -1, +1e+10, -1e+10, DBL_MAX, -DBL_MAX, DBL_MIN, -DBL_MIN, POSITIVE_INFINITY, NEGATIVE_INFINITY, NAN };
      SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(x));
      test_denormdp_dp("test_Sleef_coshd2_u35kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_DOUBLE)); 

      for(i=0;i<sizeof(xa)/sizeof(double) && success;i++) cmpDenorm_d(mpfr_cosh, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "tanh denormal/nonnumber test : ");
      SLEEF_VECTOR_DOUBLE x[] = { makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+10), makeVecd(-1e+10), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN) };
      double xa[] = { +0.0, -0.0, +1, -1, +1e+10, -1e+10, DBL_MAX, -DBL_MAX, DBL_MIN, -DBL_MIN, POSITIVE_INFINITY, NEGATIVE_INFINITY, NAN };
      SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(x));
      test_denormdp_dp("test_Sleef_tanhd2_u35kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_DOUBLE)); 

      for(i=0;i<sizeof(xa)/sizeof(double) && success;i++) cmpDenorm_d(mpfr_tanh, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "sinh_u35 denormal/nonnumber test : ");
      SLEEF_VECTOR_DOUBLE x[] = { makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+10), makeVecd(-1e+10), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN) };
      double xa[] = { +0.0, -0.0, +1, -1, +1e+10, -1e+10, DBL_MAX, -DBL_MAX, DBL_MIN, -DBL_MIN, POSITIVE_INFINITY, NEGATIVE_INFINITY, NAN };
      SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(x));
      test_denormdp_dp("test_Sleef_sinhd2_u35kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_DOUBLE)); 

      for(i=0;i<sizeof(xa)/sizeof(double) && success;i++) cmpDenorm_d(mpfr_sinh, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "cosh_u35 denormal/nonnumber test : ");
      SLEEF_VECTOR_DOUBLE x[] = { makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+10), makeVecd(-1e+10), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN) };
      double xa[] = { +0.0, -0.0, +1, -1, +1e+10, -1e+10, DBL_MAX, -DBL_MAX, DBL_MIN, -DBL_MIN, POSITIVE_INFINITY, NEGATIVE_INFINITY, NAN };
      SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(x));
      test_denormdp_dp("test_Sleef_coshd2_u35kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_DOUBLE)); 

      for(i=0;i<sizeof(xa)/sizeof(double) && success;i++) cmpDenorm_d(mpfr_cosh, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "tanh_u35 denormal/nonnumber test : ");
      SLEEF_VECTOR_DOUBLE x[] = { makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+10), makeVecd(-1e+10), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN) };
      double xa[] = { +0.0, -0.0, +1, -1, +1e+10, -1e+10, DBL_MAX, -DBL_MAX, DBL_MIN, -DBL_MIN, POSITIVE_INFINITY, NEGATIVE_INFINITY, NAN };
      SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(x));
      test_denormdp_dp("test_Sleef_tanhd2_u35kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_DOUBLE)); 

      for(i=0;i<sizeof(xa)/sizeof(double) && success;i++) cmpDenorm_d(mpfr_tanh, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "asinh denormal/nonnumber test : ");
      SLEEF_VECTOR_DOUBLE x[] = { makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+10), makeVecd(-1e+10), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN) };
      double xa[] = { +0.0, -0.0, +1, -1, +1e+10, -1e+10, DBL_MIN, -DBL_MIN, POSITIVE_INFINITY, NEGATIVE_INFINITY, NAN };
      SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(x));
      test_denormdp_dp("test_Sleef_asinhd2_u10kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_DOUBLE)); 
      
      for(i=0;i<sizeof(xa)/sizeof(double) && success;i++) cmpDenorm_d(mpfr_asinh, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "acosh denormal/nonnumber test : ");
      SLEEF_VECTOR_DOUBLE x[] = { makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+10), makeVecd(-1e+10), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN) };
      double xa[] = { +0.0, -0.0, +1, -1, +1e+10, -1e+10, DBL_MIN, -DBL_MIN, POSITIVE_INFINITY, NEGATIVE_INFINITY, NAN };
      SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(x));
      test_denormdp_dp("test_Sleef_acoshd2_u10kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_DOUBLE)); 
      
      for(i=0;i<sizeof(xa)/sizeof(double) && success;i++) cmpDenorm_d(mpfr_acosh, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "atanh denormal/nonnumber test : ");
      SLEEF_VECTOR_DOUBLE x[] = { makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+10), makeVecd(-1e+10), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN) };
      double xa[] = { +0.0, -0.0, +1, -1, +1e+10, -1e+10, DBL_MAX, -DBL_MAX, DBL_MIN, -DBL_MIN, POSITIVE_INFINITY, NEGATIVE_INFINITY, NAN };
      SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(x));
      test_denormdp_dp("test_Sleef_atanhd2_u10kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_DOUBLE)); 

      for(i=0;i<sizeof(xa)/sizeof(double) && success;i++) cmpDenorm_d(mpfr_atanh, y[i], xa[i]);
      showResult(success);
    }

    if (!deterministicMode) {
      fprintf(stderr, "sqrt denormal/nonnumber test : ");
      SLEEF_VECTOR_DOUBLE x[] = { makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+10), makeVecd(-1e+10), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN) };
      double xa[] = { +0.0, -0.0, +1, -1, +1e+10, -1e+10, DBL_MAX, -DBL_MAX, DBL_MIN, -DBL_MIN, POSITIVE_INFINITY, NEGATIVE_INFINITY, NAN };
      SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(x));
      test_denormdp_dp("test_Sleef_sqrtd2_kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_DOUBLE)); 
      
      for(i=0;i<sizeof(xa)/sizeof(double) && success;i++) cmpDenorm_d(mpfr_sqrt, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    if (!deterministicMode) {
      fprintf(stderr, "sqrt_u05 denormal/nonnumber test : ");
      SLEEF_VECTOR_DOUBLE x[] = { makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+10), makeVecd(-1e+10), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN) };
      double xa[] = { +0.0, -0.0, +1, -1, +1e+10, -1e+10, DBL_MAX, -DBL_MAX, DBL_MIN, -DBL_MIN, POSITIVE_INFINITY, NEGATIVE_INFINITY, NAN };
      SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(x));
      test_denormdp_dp("test_Sleef_sqrtd2_u05kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_DOUBLE)); 
      
      for(i=0;i<sizeof(xa)/sizeof(double) && success;i++) cmpDenorm_d(mpfr_sqrt, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    if (!deterministicMode) {
      fprintf(stderr, "sqrt_u35 denormal/nonnumber test : ");
      SLEEF_VECTOR_DOUBLE x[] = { makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+10), makeVecd(-1e+10), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN) };
      double xa[] = { +0.0, -0.0, +1, -1, +1e+10, -1e+10, DBL_MAX, -DBL_MAX, DBL_MIN, -DBL_MIN, POSITIVE_INFINITY, NEGATIVE_INFINITY, NAN };
      SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(x));
      test_denormdp_dp("test_Sleef_sqrtd2_u35kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_DOUBLE)); 
      
      for(i=0;i<sizeof(xa)/sizeof(double) && success;i++) cmpDenorm_d(mpfr_sqrt, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "cbrt denormal/nonnumber test : ");
      SLEEF_VECTOR_DOUBLE x[] = { makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+10), makeVecd(-1e+10), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN) };
      double xa[] = { +0.0, -0.0, +1, -1, +1e+10, -1e+10, DBL_MAX, -DBL_MAX, DBL_MIN, -DBL_MIN, POSITIVE_INFINITY, NEGATIVE_INFINITY, NAN };
      SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(x));
      test_denormdp_dp("test_Sleef_cbrtd2_u35kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_DOUBLE)); 
      
      for(i=0;i<sizeof(xa)/sizeof(double) && success;i++) cmpDenorm_d(mpfr_cbrt, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "cbrt_u1 denormal/nonnumber test : ");
      SLEEF_VECTOR_DOUBLE x[] = { makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+10), makeVecd(-1e+10), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN) };
      double xa[] = { +0.0, -0.0, +1, -1, +1e+10, -1e+10, DBL_MAX, -DBL_MAX, DBL_MIN, -DBL_MIN, POSITIVE_INFINITY, NEGATIVE_INFINITY, NAN };
      SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(x));
      test_denormdp_dp("test_Sleef_cbrtd2_u10kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_DOUBLE)); 
      
      for(i=0;i<sizeof(xa)/sizeof(double) && success;i++) cmpDenorm_d(mpfr_cbrt, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "exp2 denormal/nonnumber test : ");
      SLEEF_VECTOR_DOUBLE x[] = { makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+10), makeVecd(-1e+10), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN) };
      double xa[] = { +0.0, -0.0, +1, -1, +1e+10, -1e+10, DBL_MAX, -DBL_MAX, DBL_MIN, -DBL_MIN, POSITIVE_INFINITY, NEGATIVE_INFINITY, NAN };
      SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(x));
      test_denormdp_dp("test_Sleef_exp2d2_u10kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_DOUBLE)); 
      
      for(i=0;i<sizeof(xa)/sizeof(double) && success;i++) cmpDenorm_d(mpfr_exp2, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "exp10 denormal/nonnumber test : ");
      SLEEF_VECTOR_DOUBLE x[] = { makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+10), makeVecd(-1e+10), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN) };
      double xa[] = { +0.0, -0.0, +1, -1, +1e+10, -1e+10, DBL_MAX, -DBL_MAX, DBL_MIN, -DBL_MIN, POSITIVE_INFINITY, NEGATIVE_INFINITY, NAN };
      SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(x));
      test_denormdp_dp("test_Sleef_exp10d2_u10kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_DOUBLE)); 
      
      for(i=0;i<sizeof(xa)/sizeof(double) && success;i++) cmpDenorm_d(mpfr_exp10, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "exp2_u35 denormal/nonnumber test : ");
      SLEEF_VECTOR_DOUBLE x[] = { makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+10), makeVecd(-1e+10), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN) };
      double xa[] = { +0.0, -0.0, +1, -1, +1e+10, -1e+10, DBL_MAX, -DBL_MAX, DBL_MIN, -DBL_MIN, POSITIVE_INFINITY, NEGATIVE_INFINITY, NAN };
      SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(x));
      test_denormdp_dp("test_Sleef_exp2d2_u35kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_DOUBLE)); 
      
      for(i=0;i<sizeof(xa)/sizeof(double) && success;i++) cmpDenorm_d(mpfr_exp2, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "exp10_u35 denormal/nonnumber test : ");
      SLEEF_VECTOR_DOUBLE x[] = { makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+10), makeVecd(-1e+10), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN) };
      double xa[] = { +0.0, -0.0, +1, -1, +1e+10, -1e+10, DBL_MAX, -DBL_MAX, DBL_MIN, -DBL_MIN, POSITIVE_INFINITY, NEGATIVE_INFINITY, NAN };
      SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(x));
      test_denormdp_dp("test_Sleef_exp10d2_u35kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_DOUBLE)); 
      
      for(i=0;i<sizeof(xa)/sizeof(double) && success;i++) cmpDenorm_d(mpfr_exp10, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "expm1 denormal/nonnumber test : ");
      SLEEF_VECTOR_DOUBLE x[] = { makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+10), makeVecd(-1e+10), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN) };
      double xa[] = { +0.0, -0.0, +1, -1, +1e+10, -1e+10, DBL_MAX, -DBL_MAX, DBL_MIN, -DBL_MIN, POSITIVE_INFINITY, NEGATIVE_INFINITY, NAN };
      SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(x));
      test_denormdp_dp("test_Sleef_expm1d2_u10kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_DOUBLE)); 
      
      for(i=0;i<sizeof(xa)/sizeof(double) && success;i++) cmpDenorm_d(mpfr_expm1, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "log10 denormal/nonnumber test : ");
      SLEEF_VECTOR_DOUBLE x[] = { makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+10), makeVecd(-1e+10), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN) };
      double xa[] = { +0.0, -0.0, +1, -1, +1e+10, -1e+10, DBL_MAX, -DBL_MAX, DBL_MIN, -DBL_MIN, POSITIVE_INFINITY, NEGATIVE_INFINITY, NAN };
      SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(x));
      test_denormdp_dp("test_Sleef_log10d2_u10kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_DOUBLE)); 
      
      for(i=0;i<sizeof(xa)/sizeof(double) && success;i++) cmpDenorm_d(mpfr_log10, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "log2 denormal/nonnumber test : ");
      SLEEF_VECTOR_DOUBLE x[] = { makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+10), makeVecd(-1e+10), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN) };
      double xa[] = { +0.0, -0.0, +1, -1, +1e+10, -1e+10, DBL_MAX, -DBL_MAX, DBL_MIN, -DBL_MIN, POSITIVE_INFINITY, NEGATIVE_INFINITY, NAN };
      SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(x));
      test_denormdp_dp("test_Sleef_log2d2_u10kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_DOUBLE)); 
      
      for(i=0;i<sizeof(xa)/sizeof(double) && success;i++) cmpDenorm_d(mpfr_log2, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "log2_u35 denormal/nonnumber test : ");
      SLEEF_VECTOR_DOUBLE x[] = { makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+10), makeVecd(-1e+10), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN) };
      double xa[] = { +0.0, -0.0, +1, -1, +1e+10, -1e+10, DBL_MAX, -DBL_MAX, DBL_MIN, -DBL_MIN, POSITIVE_INFINITY, NEGATIVE_INFINITY, NAN };
      SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(x));
      test_denormdp_dp("test_Sleef_log2d2_u35kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_DOUBLE)); 
      
      for(i=0;i<sizeof(xa)/sizeof(double) && success;i++) cmpDenorm_d(mpfr_log2, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "log1p denormal/nonnumber test : ");
      SLEEF_VECTOR_DOUBLE x[] = { makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+10), makeVecd(-1e+10), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN), makeVecd(nextafter(-1,-2)), makeVecd(-2) };
      double xa[] = { +0.0, -0.0, +1, -1, +1e+10, -1e+10, DBL_MIN, -DBL_MIN, POSITIVE_INFINITY, NEGATIVE_INFINITY, NAN, nextafter(-1, -2), -2 };
      SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(x));
      test_denormdp_dp("test_Sleef_log1pd2_u10kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_DOUBLE)); 
      
      for(i=0;i<sizeof(xa)/sizeof(double) && success;i++) cmpDenorm_d(mpfr_log1p, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "ldexp denormal/nonnumber test : ");
      SLEEF_VECTOR_DOUBLE *x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
      SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
      SLEEF_VECTOR_DOUBLE *results = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);

      // test goes from -10000 to 10000 but we need to split it up to send it to the mppa
      for(int base_i=-10; i<=10 && success; i++) {
	      for(i=0;i<=1000 && success;i++) {
		      x[i] = makeVecd(1.0);
		      y[i] = makeVecd(base_i*i);
	      }
	      test_denormdp_dp_dp("test_Sleef_ldexpd2_kvx", x, y, results, 1000); 
	      
	      for(i=0;i<=1000 && success;i++) {
		mpfr_set_d(frx, 1.0, GMP_RNDN);
		mpfr_set_exp(frx, mpfr_get_exp(frx) + (base_i*i));
		double c = mpfr_get_d(frx, GMP_RNDN);

		if (c != results[i][0]) {
		  fprintf(stderr, "arg = %.20g, correct = %.20g, test = %.20g\n", (double)i, c, d);
		  success = 0;
		  break;
		}
	      }
      }

      free(x);
      free(y);
      free(results);
      showResult(success);
    }

    {
      fprintf(stderr, "ilogb denormal/nonnumber test : ");
	
      SLEEF_VECTOR_DOUBLE x[] = { makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(-1), makeVecd(NAN), makeVecd(0) };
      double xa[] = { POSITIVE_INFINITY, NEGATIVE_INFINITY, -1 };
      SLEEF_VECTOR_INT *y = malloc(sizeof(x));
      test_denormdi_dp("test_Sleef_ilogbd2_kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_DOUBLE)); 

      for(i=0;i<sizeof(xa)/sizeof(double) && success;i++) {
	if (y[i][0] != ilogb(xa[i])) {
	  fprintf(stderr, "arg = %.20g, correct = %d, test = %d\n", xa[i], ilogb(xa[i]), y[i][0]);
	  success = 0;
	  break;
	}
      }
      if (y[3][0] != INT_MAX && y[3][0] != INT_MIN) success = 0;
      if (y[4][0] != INT_MIN && y[4][0] != -INT_MAX) success = 0;
    
      showResult(success);
    }
  
    {
      fprintf(stderr, "hypot_u35 denormal/nonnumber test : ");
      SLEEF_VECTOR_DOUBLE x[] = { makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0),
      		makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0),
      		makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1),
      		makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1),
      		makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100),
      		makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100),
      		makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN),
      		makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN),
      		makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY),
      		makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY),
      		makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN) };
      double xa[] = { +0.0, -0.0, +1, -1, +1e+100, -1e+100, DBL_MIN, -DBL_MIN, POSITIVE_INFINITY, NEGATIVE_INFINITY, NAN };

      SLEEF_VECTOR_DOUBLE y[] = { makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN),
	      makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN),
	      makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN),
	      makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN),
	      makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN),
	      makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN),
	      makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN),
	      makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN),
	      makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN),
	      makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN),
	      makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN) };
      double ya[] = { +0.0, -0.0, +1, -1, +1e+100, -1e+100, DBL_MIN, -DBL_MIN, POSITIVE_INFINITY, NEGATIVE_INFINITY, NAN };
      SLEEF_VECTOR_DOUBLE *results = malloc(sizeof(x));
      test_denormdp_dp_dp("test_Sleef_hypotd2_u35kvx", x, y, results, sizeof(x)/sizeof(SLEEF_VECTOR_DOUBLE));

      for(i=0;i<sizeof(xa)/sizeof(double) && success;i++) {
	for(j=0;j<sizeof(ya)/sizeof(double) && success;j++) {
	  cmpDenorm_d_d(mpfr_hypot, results[i*11+j], xa[i], ya[j]);
	}
      }
      free(results);
      showResult(success);
    }

    {
      fprintf(stderr, "hypot_u05 denormal/nonnumber test : ");
      SLEEF_VECTOR_DOUBLE x[] = { makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0),
      		makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0),
      		makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1),
      		makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1),
      		makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100),
      		makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100),
      		makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN),
      		makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN),
      		makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY),
      		makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY),
      		makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN) };
      double xa[] = { +0.0, -0.0, +1, -1, +1e+100, -1e+100, DBL_MIN, -DBL_MIN, POSITIVE_INFINITY, NEGATIVE_INFINITY, NAN };

      SLEEF_VECTOR_DOUBLE y[] = { makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN),
	      makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN),
	      makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN),
	      makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN),
	      makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN),
	      makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN),
	      makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN),
	      makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN),
	      makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN),
	      makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN),
	      makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN) };
      double ya[] = { +0.0, -0.0, +1, -1, +1e+100, -1e+100, DBL_MIN, -DBL_MIN, POSITIVE_INFINITY, NEGATIVE_INFINITY, NAN };
      SLEEF_VECTOR_DOUBLE *results = malloc(sizeof(x));
      test_denormdp_dp_dp("test_Sleef_hypotd2_u05kvx", x, y, results, sizeof(x)/sizeof(SLEEF_VECTOR_DOUBLE));

      for(i=0;i<sizeof(xa)/sizeof(double) && success;i++) {
	for(j=0;j<sizeof(ya)/sizeof(double) && success;j++) {
	  cmpDenorm_d_d(mpfr_hypot, results[i*11+j], xa[i], ya[j]);
	}
      }
      free(results);
      showResult(success);
    }

    {
      fprintf(stderr, "copysign denormal/nonnumber test : ");
      SLEEF_VECTOR_DOUBLE x[] = { makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0),
      		makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0),
      		makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1),
      		makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1),
      		makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100),
      		makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100),
      		makeVecd(DBL_MAX), makeVecd(DBL_MAX), makeVecd(DBL_MAX), makeVecd(DBL_MAX), makeVecd(DBL_MAX), makeVecd(DBL_MAX), makeVecd(DBL_MAX), makeVecd(DBL_MAX), makeVecd(DBL_MAX), makeVecd(DBL_MAX), makeVecd(DBL_MAX), makeVecd(DBL_MAX),
      		makeVecd(-DBL_MAX), makeVecd(-DBL_MAX), makeVecd(-DBL_MAX), makeVecd(-DBL_MAX), makeVecd(-DBL_MAX), makeVecd(-DBL_MAX), makeVecd(-DBL_MAX), makeVecd(-DBL_MAX), makeVecd(-DBL_MAX), makeVecd(-DBL_MAX), makeVecd(-DBL_MAX), makeVecd(-DBL_MAX),
      		makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN),
      		makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN),
      		makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY),
      		makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY) };
      double xa[] = { +0.0, -0.0, +1, -1, +1e+100, -1e+100, DBL_MAX, -DBL_MAX, DBL_MIN, -DBL_MIN, POSITIVE_INFINITY, NEGATIVE_INFINITY };

      SLEEF_VECTOR_DOUBLE y[] = { makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY),
	      makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY),
	      makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY),
	      makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY),
	      makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY),
	      makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY),
	      makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY),
	      makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY),
	      makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY),
	      makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY),
	      makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY),
	      makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY) };
      double ya[] = { +0.0, -0.0, +1, -1, +1e+100, -1e+100, DBL_MAX, -DBL_MAX, DBL_MIN, -DBL_MIN, POSITIVE_INFINITY, NEGATIVE_INFINITY };
      SLEEF_VECTOR_DOUBLE *results = malloc(sizeof(x));
      test_denormdp_dp_dp("test_Sleef_copysignd2_kvx", x, y, results, sizeof(x)/sizeof(SLEEF_VECTOR_DOUBLE));

      for(i=0;i<sizeof(xa)/sizeof(double) && success;i++) {
	for(j=0;j<sizeof(ya)/sizeof(double) && success;j++) {
	  cmpDenorm_d_d(mpfr_copysign, results[i*12+j], xa[i], ya[j]);
	}
      }

      free(results);
      showResult(success);
    }

    {
      fprintf(stderr, "fmax denormal/nonnumber test : ");
      SLEEF_VECTOR_DOUBLE x[] = { makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), 
      		makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), 
      		makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), 
      		makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), 
      		makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), 
      		makeVecd(DBL_MAX), makeVecd(DBL_MAX), makeVecd(DBL_MAX), makeVecd(DBL_MAX), makeVecd(DBL_MAX), makeVecd(DBL_MAX), makeVecd(DBL_MAX), makeVecd(DBL_MAX), makeVecd(DBL_MAX), makeVecd(DBL_MAX), makeVecd(DBL_MAX), makeVecd(DBL_MAX), makeVecd(DBL_MAX), 
      		makeVecd(-DBL_MAX), makeVecd(-DBL_MAX), makeVecd(-DBL_MAX), makeVecd(-DBL_MAX), makeVecd(-DBL_MAX), makeVecd(-DBL_MAX), makeVecd(-DBL_MAX), makeVecd(-DBL_MAX), makeVecd(-DBL_MAX), makeVecd(-DBL_MAX), makeVecd(-DBL_MAX), makeVecd(-DBL_MAX), makeVecd(-DBL_MAX), 
      		makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), 
      		makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), 
      		makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), 
      		makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), 
		makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), 
      		makeVecd(SLEEF_SNAN), makeVecd(SLEEF_SNAN), makeVecd(SLEEF_SNAN), makeVecd(SLEEF_SNAN), makeVecd(SLEEF_SNAN), makeVecd(SLEEF_SNAN), makeVecd(SLEEF_SNAN), makeVecd(SLEEF_SNAN), makeVecd(SLEEF_SNAN), makeVecd(SLEEF_SNAN), makeVecd(SLEEF_SNAN), makeVecd(SLEEF_SNAN), makeVecd(SLEEF_SNAN) };
      double xa[] = { +0.0, +1, -1, +1e+100, -1e+100, DBL_MAX, -DBL_MAX, DBL_MIN, -DBL_MIN, POSITIVE_INFINITY, NEGATIVE_INFINITY, NAN, SLEEF_SNAN };
      
      SLEEF_VECTOR_DOUBLE y[] = { makeVecd(+0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN), makeVecd(SLEEF_SNAN),
	      makeVecd(+0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN), makeVecd(SLEEF_SNAN),
	      makeVecd(+0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN), makeVecd(SLEEF_SNAN),
	      makeVecd(+0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN), makeVecd(SLEEF_SNAN),
	      makeVecd(+0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN), makeVecd(SLEEF_SNAN),
	      makeVecd(+0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN), makeVecd(SLEEF_SNAN),
	      makeVecd(+0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN), makeVecd(SLEEF_SNAN),
	      makeVecd(+0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN), makeVecd(SLEEF_SNAN),
	      makeVecd(+0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN), makeVecd(SLEEF_SNAN),
	      makeVecd(+0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN), makeVecd(SLEEF_SNAN),
	      makeVecd(+0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN), makeVecd(SLEEF_SNAN),
	      makeVecd(+0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN), makeVecd(SLEEF_SNAN),
	      makeVecd(+0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN), makeVecd(SLEEF_SNAN),
      		};
      double ya[] = { +0.0, +1, -1, +1e+100, -1e+100, DBL_MAX, -DBL_MAX, DBL_MIN, -DBL_MIN, POSITIVE_INFINITY, NEGATIVE_INFINITY, NAN, SLEEF_SNAN };
      SLEEF_VECTOR_DOUBLE *results = malloc(sizeof(x));
      test_denormdp_dp_dp("test_Sleef_fmaxd2_kvx", x, y, results, sizeof(x)/sizeof(SLEEF_VECTOR_DOUBLE));

      for(i=0;i<sizeof(xa)/sizeof(double) && success;i++) {
	for(j=0;j<sizeof(ya)/sizeof(double) && success;j++) {
	  cmpDenorm_d_d(mpfr_max, results[i*13+j], xa[i], ya[j]);
	}
      }

      free(results);
      showResult(success);
    }

    {
      fprintf(stderr, "fmin denormal/nonnumber test : ");
      SLEEF_VECTOR_DOUBLE x[] = { makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), 
      		makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), 
      		makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), 
      		makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), 
      		makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), 
      		makeVecd(DBL_MAX), makeVecd(DBL_MAX), makeVecd(DBL_MAX), makeVecd(DBL_MAX), makeVecd(DBL_MAX), makeVecd(DBL_MAX), makeVecd(DBL_MAX), makeVecd(DBL_MAX), makeVecd(DBL_MAX), makeVecd(DBL_MAX), makeVecd(DBL_MAX), makeVecd(DBL_MAX), makeVecd(DBL_MAX), 
      		makeVecd(-DBL_MAX), makeVecd(-DBL_MAX), makeVecd(-DBL_MAX), makeVecd(-DBL_MAX), makeVecd(-DBL_MAX), makeVecd(-DBL_MAX), makeVecd(-DBL_MAX), makeVecd(-DBL_MAX), makeVecd(-DBL_MAX), makeVecd(-DBL_MAX), makeVecd(-DBL_MAX), makeVecd(-DBL_MAX), makeVecd(-DBL_MAX), 
      		makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), 
      		makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), 
      		makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), 
      		makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), 
		makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), 
      		makeVecd(SLEEF_SNAN), makeVecd(SLEEF_SNAN), makeVecd(SLEEF_SNAN), makeVecd(SLEEF_SNAN), makeVecd(SLEEF_SNAN), makeVecd(SLEEF_SNAN), makeVecd(SLEEF_SNAN), makeVecd(SLEEF_SNAN), makeVecd(SLEEF_SNAN), makeVecd(SLEEF_SNAN), makeVecd(SLEEF_SNAN), makeVecd(SLEEF_SNAN), makeVecd(SLEEF_SNAN) };
      double xa[] = { +0.0, +1, -1, +1e+100, -1e+100, DBL_MAX, -DBL_MAX, DBL_MIN, -DBL_MIN, POSITIVE_INFINITY, NEGATIVE_INFINITY, NAN, SLEEF_SNAN };
      
      SLEEF_VECTOR_DOUBLE y[] = { makeVecd(+0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN), makeVecd(SLEEF_SNAN),
	      makeVecd(+0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN), makeVecd(SLEEF_SNAN),
	      makeVecd(+0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN), makeVecd(SLEEF_SNAN),
	      makeVecd(+0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN), makeVecd(SLEEF_SNAN),
	      makeVecd(+0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN), makeVecd(SLEEF_SNAN),
	      makeVecd(+0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN), makeVecd(SLEEF_SNAN),
	      makeVecd(+0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN), makeVecd(SLEEF_SNAN),
	      makeVecd(+0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN), makeVecd(SLEEF_SNAN),
	      makeVecd(+0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN), makeVecd(SLEEF_SNAN),
	      makeVecd(+0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN), makeVecd(SLEEF_SNAN),
	      makeVecd(+0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN), makeVecd(SLEEF_SNAN),
	      makeVecd(+0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN), makeVecd(SLEEF_SNAN),
	      makeVecd(+0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN), makeVecd(SLEEF_SNAN),
      		};
      double ya[] = { +0.0, +1, -1, +1e+100, -1e+100, DBL_MAX, -DBL_MAX, DBL_MIN, -DBL_MIN, POSITIVE_INFINITY, NEGATIVE_INFINITY, NAN, SLEEF_SNAN };
      SLEEF_VECTOR_DOUBLE *results = malloc(sizeof(x));
      test_denormdp_dp_dp("test_Sleef_fmind2_kvx", x, y, results, sizeof(x)/sizeof(SLEEF_VECTOR_DOUBLE));

      for(i=0;i<sizeof(xa)/sizeof(double) && success;i++) {
	for(j=0;j<sizeof(ya)/sizeof(double) && success;j++) {
	  cmpDenorm_d_d(mpfr_min, results[i*13+j], xa[i], ya[j]);
	}
      }

      free(results);
      showResult(success);
    }

    {
      fprintf(stderr, "fdim denormal/nonnumber test : ");
      SLEEF_VECTOR_DOUBLE x[] = { makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), 
      		makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), 
	      	makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), 
      		makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), 
      		makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), 
      		makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), 
      		makeVecd(DBL_MAX), makeVecd(DBL_MAX), makeVecd(DBL_MAX), makeVecd(DBL_MAX), makeVecd(DBL_MAX), makeVecd(DBL_MAX), makeVecd(DBL_MAX), makeVecd(DBL_MAX), makeVecd(DBL_MAX), makeVecd(DBL_MAX), makeVecd(DBL_MAX), makeVecd(DBL_MAX), makeVecd(DBL_MAX), 
      		makeVecd(-DBL_MAX), makeVecd(-DBL_MAX), makeVecd(-DBL_MAX), makeVecd(-DBL_MAX), makeVecd(-DBL_MAX), makeVecd(-DBL_MAX), makeVecd(-DBL_MAX), makeVecd(-DBL_MAX), makeVecd(-DBL_MAX), makeVecd(-DBL_MAX), makeVecd(-DBL_MAX), makeVecd(-DBL_MAX), makeVecd(-DBL_MAX), 
      		makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), 
      		makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), 
      		makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), 
      		makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), 
		makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN) }; 
      double xa[] = { +0.0, -0.0, +1, -1, +1e+100, -1e+100, DBL_MAX, -DBL_MAX, DBL_MIN, -DBL_MIN, POSITIVE_INFINITY, NEGATIVE_INFINITY, NAN };

      SLEEF_VECTOR_DOUBLE y[] = { makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN),
	      makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN),
	      makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN),
	      makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN),
	      makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN),
	      makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN),
	      makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN),
	      makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN),
	      makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN),
	      makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN),
	      makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN),
	      makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN),
	      makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN) };
      double ya[] = { +0.0, -0.0, +1, -1, +1e+100, -1e+100, DBL_MAX, -DBL_MAX, DBL_MIN, -DBL_MIN, POSITIVE_INFINITY, NEGATIVE_INFINITY, NAN };
      SLEEF_VECTOR_DOUBLE *results = malloc(sizeof(x));
      test_denormdp_dp_dp("test_Sleef_fdimd2_kvx", x, y, results, sizeof(x)/sizeof(SLEEF_VECTOR_DOUBLE));

      for(i=0;i<sizeof(xa)/sizeof(double) && success;i++) {
	for(j=0;j<sizeof(ya)/sizeof(double) && success;j++) {
	  cmpDenorm_d_d(mpfr_dim, results[i*13+j], xa[i], ya[j]);
	}
      }
	
      free(results);
      showResult(success);
    }

    {
      fprintf(stderr, "fmod denormal/nonnumber test : ");
      SLEEF_VECTOR_DOUBLE x[] = { makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), 
      		makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), 
	      	makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), 
      		makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), 
      		makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), 
      		makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), 
      		makeVecd(DBL_MAX), makeVecd(DBL_MAX), makeVecd(DBL_MAX), makeVecd(DBL_MAX), makeVecd(DBL_MAX), makeVecd(DBL_MAX), makeVecd(DBL_MAX), makeVecd(DBL_MAX), makeVecd(DBL_MAX), makeVecd(DBL_MAX), makeVecd(DBL_MAX), makeVecd(DBL_MAX), makeVecd(DBL_MAX), 
      		makeVecd(-DBL_MAX), makeVecd(-DBL_MAX), makeVecd(-DBL_MAX), makeVecd(-DBL_MAX), makeVecd(-DBL_MAX), makeVecd(-DBL_MAX), makeVecd(-DBL_MAX), makeVecd(-DBL_MAX), makeVecd(-DBL_MAX), makeVecd(-DBL_MAX), makeVecd(-DBL_MAX), makeVecd(-DBL_MAX), makeVecd(-DBL_MAX), 
      		makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), 
      		makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), 
      		makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), 
      		makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), 
		makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN) }; 
      double xa[] = { +0.0, -0.0, +1, -1, +1e+100, -1e+100, DBL_MAX, -DBL_MAX, DBL_MIN, -DBL_MIN, POSITIVE_INFINITY, NEGATIVE_INFINITY, NAN };

      SLEEF_VECTOR_DOUBLE y[] = { makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN),
	      makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN),
	      makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN),
	      makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN),
	      makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN),
	      makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN),
	      makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN),
	      makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN),
	      makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN),
	      makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN),
	      makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN),
	      makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN),
	      makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN) };
      double ya[] = { +0.0, -0.0, +1, -1, +1e+100, -1e+100, DBL_MAX, -DBL_MAX, DBL_MIN, -DBL_MIN, POSITIVE_INFINITY, NEGATIVE_INFINITY, NAN };
      SLEEF_VECTOR_DOUBLE *results = malloc(sizeof(x));
      test_denormdp_dp_dp("test_Sleef_fmodd2_kvx", x, y, results, sizeof(x)/sizeof(SLEEF_VECTOR_DOUBLE));

      for(i=0;i<sizeof(xa)/sizeof(double) && success;i++) {
	for(j=0;j<sizeof(ya)/sizeof(double) && success;j++) {
	  if (fabs(xa[i] / ya[j]) > 1e+300) continue;
	  cmpDenorm_d_d(mpfr_fmod, results[i*13+j], xa[i], ya[j]);
	}
      }

      free(results);
      showResult(success);
    }

    {
      fprintf(stderr, "remainder denormal/nonnumber test : ");
      SLEEF_VECTOR_DOUBLE x[] = { makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), makeVecd(+0.0), 
      		makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), makeVecd(-0.0), 
	      	makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), makeVecd(+1), 
      		makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), makeVecd(-1), 
      		makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), makeVecd(+1e+100), 
      		makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100), makeVecd(-1e+100),
	       	makeVecd(1.7e+308), makeVecd(1.7e+308), makeVecd(1.7e+308), makeVecd(1.7e+308), makeVecd(1.7e+308), makeVecd(1.7e+308), makeVecd(1.7e+308), makeVecd(1.7e+308), makeVecd(1.7e+308), makeVecd(1.7e+308), makeVecd(1.7e+308), makeVecd(1.7e+308), makeVecd(1.7e+308), makeVecd(1.7e+308), 	
      		makeVecd(DBL_MAX), makeVecd(DBL_MAX), makeVecd(DBL_MAX), makeVecd(DBL_MAX), makeVecd(DBL_MAX), makeVecd(DBL_MAX), makeVecd(DBL_MAX), makeVecd(DBL_MAX), makeVecd(DBL_MAX), makeVecd(DBL_MAX), makeVecd(DBL_MAX), makeVecd(DBL_MAX), makeVecd(DBL_MAX), makeVecd(DBL_MAX), 
      		makeVecd(-DBL_MAX), makeVecd(-DBL_MAX), makeVecd(-DBL_MAX), makeVecd(-DBL_MAX), makeVecd(-DBL_MAX), makeVecd(-DBL_MAX), makeVecd(-DBL_MAX), makeVecd(-DBL_MAX), makeVecd(-DBL_MAX), makeVecd(-DBL_MAX), makeVecd(-DBL_MAX), makeVecd(-DBL_MAX), makeVecd(-DBL_MAX), makeVecd(-DBL_MAX), 
      		makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), makeVecd(DBL_MIN), 
      		makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), makeVecd(-DBL_MIN), 
      		makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), makeVecd(POSITIVE_INFINITY), 
      		makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), 
		makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN), makeVecd(NAN) }; 
      double xa[] = { +0.0, -0.0, +1, -1, +1e+100, -1e+100, 1.7e+308, DBL_MAX, -DBL_MAX, DBL_MIN, -DBL_MIN, POSITIVE_INFINITY, NEGATIVE_INFINITY, NAN };

      SLEEF_VECTOR_DOUBLE y[] = { 
	      makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(1.0e+308), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN),
	      makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(1.0e+308), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN),
	      makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(1.0e+308), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN),
	      makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(1.0e+308), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN),
	      makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(1.0e+308), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN),
	      makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(1.0e+308), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN),
	      makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(1.0e+308), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN),
	      makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(1.0e+308), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN),
	      makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(1.0e+308), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN),
	      makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(1.0e+308), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN),
	      makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(1.0e+308), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN),
	      makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(1.0e+308), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN),
	      makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(1.0e+308), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN),
	      makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+100), makeVecd(-1e+100), makeVecd(1.0e+308), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN) };
      double ya[] = { +0.0, -0.0, +1, -1, +1e+100, -1e+100, 1.0e+308, DBL_MAX, -DBL_MAX, DBL_MIN, -DBL_MIN, POSITIVE_INFINITY, NEGATIVE_INFINITY, NAN };
      SLEEF_VECTOR_DOUBLE *results = malloc(sizeof(x));
      test_denormdp_dp_dp("test_Sleef_remainderd2_kvx", x, y, results, sizeof(x)/sizeof(SLEEF_VECTOR_DOUBLE));

      for(i=0;i<sizeof(xa)/sizeof(double) && success;i++) {
	for(j=0;j<sizeof(ya)/sizeof(double) && success;j++) {
	  if (fabs(xa[i] / ya[j]) > 1e+300) continue;
	  cmpDenorm_d_d(mpfr_remainder, results[i*14+j], xa[i], ya[j]);
	}
      }

      free(results);
      showResult(success);
    }

    {
      fprintf(stderr, "trunc denormal/nonnumber test : ");
      SLEEF_VECTOR_DOUBLE x[] = { makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+10), makeVecd(-1e+10), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN) };
      double xa[] = { +0.0, -0.0, +1, -1, +1e+10, -1e+10, DBL_MAX, -DBL_MAX, DBL_MIN, -DBL_MIN, POSITIVE_INFINITY, NEGATIVE_INFINITY, NAN };
      SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(x));
      test_denormdp_dp("test_Sleef_truncd2_kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_DOUBLE));

      for(i=0;i<sizeof(xa)/sizeof(double) && success;i++) cmpDenormNR_d(mpfr_trunc, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "floor denormal/nonnumber test : ");
      SLEEF_VECTOR_DOUBLE x[] = { makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+10), makeVecd(-1e+10), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN) };
      double xa[] = { +0.0, -0.0, +1, -1, +1e+10, -1e+10, DBL_MAX, -DBL_MAX, DBL_MIN, -DBL_MIN, POSITIVE_INFINITY, NEGATIVE_INFINITY, NAN };
      SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(x));
      test_denormdp_dp("test_Sleef_floord2_kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_DOUBLE));

      for(i=0;i<sizeof(xa)/sizeof(double) && success;i++) cmpDenormNR_d(mpfr_floor, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "ceil denormal/nonnumber test : ");
      SLEEF_VECTOR_DOUBLE x[] = { makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+10), makeVecd(-1e+10), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN) };
      double xa[] = { +0.0, -0.0, +1, -1, +1e+10, -1e+10, DBL_MAX, -DBL_MAX, DBL_MIN, -DBL_MIN, POSITIVE_INFINITY, NEGATIVE_INFINITY, NAN };
      SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(x));
      test_denormdp_dp("test_Sleef_ceild2_kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_DOUBLE));

      for(i=0;i<sizeof(xa)/sizeof(double) && success;i++) cmpDenormNR_d(mpfr_ceil, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "round denormal/nonnumber test : ");
      SLEEF_VECTOR_DOUBLE x[] = { makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+10), makeVecd(-1e+10), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN) };
      double xa[] = { +0.0, -0.0, +1, -1, +1e+10, -1e+10, DBL_MAX, -DBL_MAX, DBL_MIN, -DBL_MIN, POSITIVE_INFINITY, NEGATIVE_INFINITY, NAN };
      SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(x));
      test_denormdp_dp("test_Sleef_roundd2_kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_DOUBLE));

      for(i=0;i<sizeof(xa)/sizeof(double) && success;i++) cmpDenormNR_d(mpfr_round, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "rint denormal/nonnumber test : ");
      SLEEF_VECTOR_DOUBLE x[] = { makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(-1), makeVecd(+1e+10), makeVecd(-1e+10), makeVecd(DBL_MAX), makeVecd(-DBL_MAX), makeVecd(DBL_MIN), makeVecd(-DBL_MIN), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN) };
      double xa[] = { +0.0, -0.0, +1, -1, +1e+10, -1e+10, DBL_MAX, -DBL_MAX, DBL_MIN, -DBL_MIN, POSITIVE_INFINITY, NEGATIVE_INFINITY, NAN };
      SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(x));
      test_denormdp_dp("test_Sleef_rintd2_kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_DOUBLE));

      for(i=0;i<sizeof(xa)/sizeof(double) && success;i++) cmpDenorm_d(mpfr_rint, y[i], xa[i]);
      free(y);
      showResult(success);
    }
    
    {
      fprintf(stderr, "lgamma_u1 denormal/nonnumber test : ");
      SLEEF_VECTOR_DOUBLE x[] = { makeVecd(-4), makeVecd(-3), makeVecd(-2), makeVecd(-1), makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(+2), makeVecd(+1e+10), makeVecd(-1e+10), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN) };
      double xa[] = { -4, -3, -2, -1, +0.0, -0.0, +1, +2, +1e+10, -1e+10, POSITIVE_INFINITY, NEGATIVE_INFINITY, NAN };
      SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(x));
      test_denormdp_dp("test_Sleef_lgammad2_u10kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_DOUBLE));

      for(i=0;i<sizeof(xa)/sizeof(double) && success;i++) cmpDenorm_d(mpfr_lgamma_nosign, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "tgamma_u1 denormal/nonnumber test : ");
      SLEEF_VECTOR_DOUBLE x[] = { makeVecd(-4), makeVecd(-3), makeVecd(-2), makeVecd(-1), makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(+2), makeVecd(+1e+10), makeVecd(-1e+10), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN) };
      double xa[] = { -4, -3, -2, -1, +0.0, -0.0, +1, +2, +1e+10, -1e+10, POSITIVE_INFINITY, NEGATIVE_INFINITY, NAN };
      SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(x));
      test_denormdp_dp("test_Sleef_tgammad2_u10kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_DOUBLE));
      for(i=0;i<sizeof(xa)/sizeof(double) && success;i++) cmpDenorm_d(mpfr_gamma, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "erf_u1 denormal/nonnumber test : ");
      SLEEF_VECTOR_DOUBLE x[] = { makeVecd(-1), makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(+1e+10), makeVecd(-1e+10), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN) };
      double xa[] = { -1, +0.0, -0.0, +1, +1e+10, -1e+10, POSITIVE_INFINITY, NEGATIVE_INFINITY, NAN };
      SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(x));
      test_denormdp_dp("test_Sleef_erfd2_u10kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_DOUBLE));
      
      for(i=0;i<sizeof(xa)/sizeof(double) && success;i++) cmpDenorm_d(mpfr_erf, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "erfc_u15 denormal/nonnumber test : ");
      SLEEF_VECTOR_DOUBLE x[] = { makeVecd(-1), makeVecd(+0.0), makeVecd(-0.0), makeVecd(+1), makeVecd(+1e+10), makeVecd(-1e+10), makeVecd(POSITIVE_INFINITY), makeVecd(NEGATIVE_INFINITY), makeVecd(NAN) };
      double xa[] = { -1, +0.0, -0.0, +1, +1e+10, -1e+10, POSITIVE_INFINITY, NEGATIVE_INFINITY, NAN };
      SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(x));
      test_denormdp_dp("test_Sleef_erfcd2_u15kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_DOUBLE));
      
      for(i=0;i<sizeof(xa)/sizeof(double) && success;i++) cmpDenorm_d(mpfr_erfc, y[i], xa[i]);
      free(y);
      showResult(success);
    }
  }

  if (enableSP) {
    {
      fprintf(stderr, "sinf denormal/nonnumber test : ");
      SLEEF_VECTOR_FLOAT x[] = { makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+7), makeVecf(-1e+7), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN) };
      float xa[] = { +0.0, -0.0, +1, -1, +1e+7, -1e+7, POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NAN };
      SLEEF_VECTOR_FLOAT y[9];

      test_denormsp_sp("test_Sleef_sinf4_u35kvx", x, y, 9);

      for(i=0;i<sizeof(xa)/sizeof(float) && success;i++) cmpDenorm_f(mpfr_sin, y[i], xa[i]);
      showResult(success);
    }

    {
      fprintf(stderr, "sinf_u1 denormal/nonnumber test : ");
      SLEEF_VECTOR_FLOAT x[] = { makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+7), makeVecf(-1e+7), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN) };
      float xa[] = { +0.0, -0.0, +1, -1, +1e+7, -1e+7, POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NAN };
      SLEEF_VECTOR_FLOAT y[9];

      test_denormsp_sp("test_Sleef_sinf4_u10kvx", x, y, 9);

      for(i=0;i<sizeof(xa)/sizeof(float) && success;i++) cmpDenorm_f(mpfr_sin, y[i], xa[i]);
      showResult(success);
    }

    {
      fprintf(stderr, "sin in sincosf denormal/nonnumber test : ");
      SLEEF_VECTOR_FLOAT x[] = { makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+7), makeVecf(-1e+7), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN) };
      float xa[] = { +0.0, -0.0, +1, -1, +1e+7, -1e+7, POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NAN };
      Sleef_SLEEF_VECTOR_FLOAT_2 *y = malloc(sizeof(x)*2);
      
      test_denormsp2_sp("test_Sleef_sincosf4_u35kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_FLOAT));

      for(i=0;i<sizeof(xa)/sizeof(float) && success;i++) cmpDenormX_f(mpfr_sin, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "sin in sincosf_u1 denormal/nonnumber test : ");
      SLEEF_VECTOR_FLOAT x[] = { makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+7), makeVecf(-1e+7), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN) };
      float xa[] = { +0.0, -0.0, +1, -1, +1e+7, -1e+7, POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NAN };
      Sleef_SLEEF_VECTOR_FLOAT_2 *y = malloc(sizeof(x)*2); 
      test_denormsp2_sp("test_Sleef_sincosf4_u10kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_FLOAT));

      for(i=0;i<sizeof(xa)/sizeof(float) && success;i++) cmpDenormX_f(mpfr_sin, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "sin in sincospif_u05 denormal/nonnumber test : ");
      SLEEF_VECTOR_FLOAT x[] = { makeVecf(+0.0), makeVecf(-0.0), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN) };
      float xa[] = { +0.0, -0.0, POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NAN };
      Sleef_SLEEF_VECTOR_FLOAT_2 *y = malloc(sizeof(x)*2); 
      test_denormsp2_sp("test_Sleef_sincospif4_u05kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_FLOAT));

      for(i=0;i<sizeof(xa)/sizeof(float) && success;i++) cmpDenormX_f(mpfr_sinpi, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "sin in sincospif_u35 denormal/nonnumber test : ");
      SLEEF_VECTOR_FLOAT x[] = { makeVecf(+0.0), makeVecf(-0.0), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN) };
      float xa[] = { +0.0, -0.0, POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NAN };
      Sleef_SLEEF_VECTOR_FLOAT_2 *y = malloc(sizeof(x)*2); 
      test_denormsp2_sp("test_Sleef_sincospif4_u35kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_FLOAT));

      for(i=0;i<sizeof(xa)/sizeof(float) && success;i++) cmpDenormX_f(mpfr_sinpi, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "sinpif_u05 denormal/nonnumber test : ");
      SLEEF_VECTOR_FLOAT x[] = { makeVecf(+0.0), makeVecf(-0.0), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN) };
      float xa[] = { +0.0, -0.0, POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NAN };
      SLEEF_VECTOR_FLOAT *y = malloc(sizeof(x));

      test_denormsp_sp("test_Sleef_sinpif4_u05kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_FLOAT));

      for(i=0;i<sizeof(xa)/sizeof(float) && success;i++) cmpDenorm_f(mpfr_sinpi, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "cospif_u05 denormal/nonnumber test : ");
      SLEEF_VECTOR_FLOAT x[] = { makeVecf(+0.0), makeVecf(-0.0), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN) };
      float xa[] = { +0.0, -0.0, POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NAN };
      SLEEF_VECTOR_FLOAT *y = malloc(sizeof(x));

      test_denormsp_sp("test_Sleef_cospif4_u05kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_FLOAT));

      for(i=0;i<sizeof(xa)/sizeof(float) && success;i++) cmpDenorm_f(mpfr_cospi, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    //
  
    {
      fprintf(stderr, "cosf denormal/nonnumber test : ");
      SLEEF_VECTOR_FLOAT x[] = { makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+7), makeVecf(-1e+7), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN) };
      double xa[] = { +0.0, -0.0, +1, -1, +1e+7, -1e+7, POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NAN };
      SLEEF_VECTOR_FLOAT *y = malloc(sizeof(x));
      test_denormsp_sp("test_Sleef_cosf4_u35kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_FLOAT));

      for(i=0;i<sizeof(xa)/sizeof(double) && success;i++) cmpDenorm_d(mpfr_cos, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "cosf_u1 denormal/nonnumber test : ");
      SLEEF_VECTOR_FLOAT x[] = { makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+7), makeVecf(-1e+7), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN) };
      double xa[] = { +0.0, -0.0, +1, -1, +1e+7, -1e+7, POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NAN };
      SLEEF_VECTOR_FLOAT *y = malloc(sizeof(x));
      test_denormsp_sp("test_Sleef_cosf4_u10kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_FLOAT));

      for(i=0;i<sizeof(xa)/sizeof(double) && success;i++) cmpDenorm_d(mpfr_cos, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "cosf in sincos denormal/nonnumber test : ");
      SLEEF_VECTOR_FLOAT x[] = { makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+7), makeVecf(-1e+7), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN) };
      float xa[] = { +0.0, -0.0, +1, -1, +1e+7, -1e+7, POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NAN };
      Sleef_SLEEF_VECTOR_FLOAT_2 *y = malloc(sizeof(x)*2);
      
      test_denormsp2_sp("test_Sleef_sincosf4_u35kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_FLOAT));

      for(i=0;i<sizeof(xa)/sizeof(float) && success;i++) cmpDenormY_f(mpfr_cos, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "cosf in sincos_u1 denormal/nonnumber test : ");
      SLEEF_VECTOR_FLOAT x[] = { makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+7), makeVecf(-1e+7), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN) };
      float xa[] = { +0.0, -0.0, +1, -1, +1e+7, -1e+7, POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NAN };
      Sleef_SLEEF_VECTOR_FLOAT_2 *y = malloc(sizeof(x)*2);
      
      test_denormsp2_sp("test_Sleef_sincosf4_u10kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_FLOAT));

      for(i=0;i<sizeof(xa)/sizeof(float) && success;i++) cmpDenormY_f(mpfr_cos, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "cosf in sincospi_u05 denormal/nonnumber test : ");
      SLEEF_VECTOR_FLOAT x[] = { makeVecf(+0.0), makeVecf(-0.0), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN) };
      float xa[] = { +0.0, -0.0, POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NAN };
      Sleef_SLEEF_VECTOR_FLOAT_2 *y = malloc(sizeof(x)*2); 
      test_denormsp2_sp("test_Sleef_sincospif4_u05kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_FLOAT));

      for(i=0;i<sizeof(xa)/sizeof(float) && success;i++) cmpDenormY_f(mpfr_cospi, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "cosf in sincospi_u35 denormal/nonnumber test : ");
      SLEEF_VECTOR_FLOAT x[] = { makeVecf(+0.0), makeVecf(-0.0), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN) };
      float xa[] = { +0.0, -0.0, POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NAN };
      Sleef_SLEEF_VECTOR_FLOAT_2 *y = malloc(sizeof(x)*2); 
      test_denormsp2_sp("test_Sleef_sincospif4_u35kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_FLOAT));

      for(i=0;i<sizeof(xa)/sizeof(float) && success;i++) cmpDenormY_f(mpfr_cospi, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    //
  
    {
      fprintf(stderr, "tanf denormal/nonnumber test : ");
      SLEEF_VECTOR_FLOAT x[] = { makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+7), makeVecf(-1e+7), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN), makeVecf(M_PI/2), makeVecf(-M_PI/2) };
      float xa[] = { +0.0, -0.0, +1, -1, +1e+7, -1e+7, POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NAN, M_PI/2, -M_PI/2 };
      SLEEF_VECTOR_FLOAT *y = malloc(sizeof(x));
      test_denormsp_sp("test_Sleef_tanf4_u35kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_FLOAT));

      for(i=0;i<sizeof(xa)/sizeof(float) && success;i++) cmpDenorm_f(mpfr_tan, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "tanf_u1 denormal/nonnumber test : ");
      SLEEF_VECTOR_FLOAT x[] = { makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+7), makeVecf(-1e+7), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN), makeVecf(M_PI/2), makeVecf(-M_PI/2) };
      float xa[] = { +0.0, -0.0, +1, -1, +1e+7, -1e+7, POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NAN, M_PI/2, -M_PI/2 };
      SLEEF_VECTOR_FLOAT *y = malloc(sizeof(x));
      test_denormsp_sp("test_Sleef_tanf4_u10kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_FLOAT));

      for(i=0;i<sizeof(xa)/sizeof(float) && success;i++) cmpDenorm_f(mpfr_tan, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "asinf denormal/nonnumber test : ");
      SLEEF_VECTOR_FLOAT x[] = { makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+7), makeVecf(-1e+7), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN),
      makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN), makeVecf(nextafter(1, 2)), makeVecf(nextafter(-1, -2)) };
      float xa[] = { +0.0, -0.0, +1, -1, +1e+7, -1e+7, FLT_MAX, -FLT_MAX, FLT_MIN, -FLT_MIN,
		      POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NAN, nextafter(1, 2), nextafter(-1, -2) };
      SLEEF_VECTOR_FLOAT *y = malloc(sizeof(x));
      test_denormsp_sp("test_Sleef_asinf4_u35kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_FLOAT)); 

      for(i=0;i<sizeof(xa)/sizeof(float) && success;i++) cmpDenorm_f(mpfr_asin, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "asinf_u1 denormal/nonnumber test : ");
      SLEEF_VECTOR_FLOAT x[] = { makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+7), makeVecf(-1e+7), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN),
      makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN), makeVecf(nextafter(1, 2)), makeVecf(nextafter(-1, -2)) };
      float xa[] = { +0.0, -0.0, +1, -1, +1e+7, -1e+7, FLT_MAX, -FLT_MAX, FLT_MIN, -FLT_MIN,
		      POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NAN, nextafter(1, 2), nextafter(-1, -2) };
      SLEEF_VECTOR_FLOAT *y = malloc(sizeof(x));
      test_denormsp_sp("test_Sleef_asinf4_u10kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_FLOAT)); 

      for(i=0;i<sizeof(xa)/sizeof(float) && success;i++) cmpDenorm_f(mpfr_asin, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "acosf denormal/nonnumber test : ");
      SLEEF_VECTOR_FLOAT x[] = { makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+7), makeVecf(-1e+7), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN),
      makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN), makeVecf(nextafter(1, 2)), makeVecf(nextafter(-1, -2)) };
      float xa[] = { +0.0, -0.0, +1, -1, +1e+7, -1e+7, FLT_MAX, -FLT_MAX, FLT_MIN, -FLT_MIN,
		      POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NAN, nextafter(1, 2), nextafter(-1, -2) };
      SLEEF_VECTOR_FLOAT *y = malloc(sizeof(x));
      test_denormsp_sp("test_Sleef_acosf4_u35kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_FLOAT)); 

      for(i=0;i<sizeof(xa)/sizeof(float) && success;i++) cmpDenorm_f(mpfr_acos, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "acosf_u1 denormal/nonnumber test : ");
      SLEEF_VECTOR_FLOAT x[] = { makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+7), makeVecf(-1e+7), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN),
      makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN), makeVecf(nextafter(1, 2)), makeVecf(nextafter(-1, -2)) };
      float xa[] = { +0.0, -0.0, +1, -1, +1e+7, -1e+7, FLT_MAX, -FLT_MAX, FLT_MIN, -FLT_MIN,
		      POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NAN, nextafter(1, 2), nextafter(-1, -2) };
      SLEEF_VECTOR_FLOAT *y = malloc(sizeof(x));
      test_denormsp_sp("test_Sleef_acosf4_u10kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_FLOAT)); 

      for(i=0;i<sizeof(xa)/sizeof(float) && success;i++) cmpDenorm_f(mpfr_acos, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "atanf denormal/nonnumber test : ");
      SLEEF_VECTOR_FLOAT x[] = { makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+7), makeVecf(-1e+7), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN),
      makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN) };
      float xa[] = { +0.0, -0.0, +1, -1, +1e+7, -1e+7, FLT_MAX, -FLT_MAX, FLT_MIN, -FLT_MIN,
		      POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NAN };
      SLEEF_VECTOR_FLOAT *y = malloc(sizeof(x));
      test_denormsp_sp("test_Sleef_atanf4_u35kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_FLOAT)); 

      for(i=0;i<sizeof(xa)/sizeof(float) && success;i++) cmpDenorm_f(mpfr_atan, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "atanf_u1 denormal/nonnumber test : ");
      SLEEF_VECTOR_FLOAT x[] = { makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+7), makeVecf(-1e+7), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN),
      makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN) };
      float xa[] = { +0.0, -0.0, +1, -1, +1e+7, -1e+7, FLT_MAX, -FLT_MAX, FLT_MIN, -FLT_MIN,
		      POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NAN };
      SLEEF_VECTOR_FLOAT *y = malloc(sizeof(x));
      test_denormsp_sp("test_Sleef_atanf4_u10kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_FLOAT)); 

      for(i=0;i<sizeof(xa)/sizeof(float) && success;i++) cmpDenorm_f(mpfr_atan, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "logf denormal/nonnumber test : ");
      SLEEF_VECTOR_FLOAT x[] = { makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+7), makeVecf(-1e+7), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN),
      makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN), makeVecf(nextafter(0, -1)) };
      float xa[] = { +0.0, -0.0, +1, -1, +1e+7, -1e+7, FLT_MAX, -FLT_MAX, FLT_MIN, -FLT_MIN,
		      POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NAN, nextafter(0, -1) };
      SLEEF_VECTOR_FLOAT *y = malloc(sizeof(x));
      test_denormsp_sp("test_Sleef_logf4_u35kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_FLOAT)); 

      for(i=0;i<sizeof(xa)/sizeof(float) && success;i++) cmpDenorm_f(mpfr_log, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "logf_u1 denormal/nonnumber test : ");
      SLEEF_VECTOR_FLOAT x[] = { makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+7), makeVecf(-1e+7), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN),
      makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN), makeVecf(nextafter(0, -1)) };
      float xa[] = { +0.0, -0.0, +1, -1, +1e+7, -1e+7, FLT_MAX, -FLT_MAX, FLT_MIN, -FLT_MIN,
		      POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NAN, nextafter(0, -1) };
      SLEEF_VECTOR_FLOAT *y = malloc(sizeof(x));
      test_denormsp_sp("test_Sleef_logf4_u10kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_FLOAT)); 

      for(i=0;i<sizeof(xa)/sizeof(float) && success;i++) cmpDenorm_f(mpfr_log, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "expf denormal/nonnumber test : ");
      SLEEF_VECTOR_FLOAT x[] = { makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+7), makeVecf(-1e+7), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN),
      makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN) };
      float xa[] = { +0.0, -0.0, +1, -1, +1e+7, -1e+7, FLT_MAX, -FLT_MAX, FLT_MIN, -FLT_MIN,
		      POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NAN };
      SLEEF_VECTOR_FLOAT *y = malloc(sizeof(x));
      test_denormsp_sp("test_Sleef_expf4_u10kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_FLOAT)); 

      for(i=0;i<sizeof(xa)/sizeof(float) && success;i++) cmpDenorm_f(mpfr_exp, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "sinhf denormal/nonnumber test : ");
      SLEEF_VECTOR_FLOAT x[] = { makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+7), makeVecf(-1e+7), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN),
      makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN) };
      float xa[] = { +0.0, -0.0, +1, -1, +1e+7, -1e+7, FLT_MAX, -FLT_MAX, FLT_MIN, -FLT_MIN,
		      POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NAN };
      SLEEF_VECTOR_FLOAT *y = malloc(sizeof(x));
      test_denormsp_sp("test_Sleef_sinhf4_u10kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_FLOAT)); 

      for(i=0;i<sizeof(xa)/sizeof(float) && success;i++) cmpDenorm_f(mpfr_sinh, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "coshf denormal/nonnumber test : ");
      SLEEF_VECTOR_FLOAT x[] = { makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+7), makeVecf(-1e+7), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN),
      makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN) };
      float xa[] = { +0.0, -0.0, +1, -1, +1e+7, -1e+7, FLT_MAX, -FLT_MAX, FLT_MIN, -FLT_MIN,
		      POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NAN };
      SLEEF_VECTOR_FLOAT *y = malloc(sizeof(x));
      test_denormsp_sp("test_Sleef_coshf4_u10kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_FLOAT)); 

      for(i=0;i<sizeof(xa)/sizeof(float) && success;i++) cmpDenorm_f(mpfr_cosh, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "tanhf denormal/nonnumber test : ");
      SLEEF_VECTOR_FLOAT x[] = { makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+7), makeVecf(-1e+7), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN),
      makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN) };
      float xa[] = { +0.0, -0.0, +1, -1, +1e+7, -1e+7, FLT_MAX, -FLT_MAX, FLT_MIN, -FLT_MIN,
		      POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NAN };
      SLEEF_VECTOR_FLOAT *y = malloc(sizeof(x));
      test_denormsp_sp("test_Sleef_tanhf4_u10kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_FLOAT)); 

      for(i=0;i<sizeof(xa)/sizeof(float) && success;i++) cmpDenorm_f(mpfr_tanh, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "sinhf_u35 denormal/nonnumber test : ");
      SLEEF_VECTOR_FLOAT x[] = { makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+7), makeVecf(-1e+7), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN),
      makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN) };
      float xa[] = { +0.0, -0.0, +1, -1, +1e+7, -1e+7, FLT_MAX, -FLT_MAX, FLT_MIN, -FLT_MIN,
		      POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NAN };
      SLEEF_VECTOR_FLOAT *y = malloc(sizeof(x));
      test_denormsp_sp("test_Sleef_sinhf4_u35kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_FLOAT)); 

      for(i=0;i<sizeof(xa)/sizeof(float) && success;i++) cmpDenorm_f(mpfr_sinh, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "coshf_u35 denormal/nonnumber test : ");
      SLEEF_VECTOR_FLOAT x[] = { makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+7), makeVecf(-1e+7), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN),
      makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN) };
      float xa[] = { +0.0, -0.0, +1, -1, +1e+7, -1e+7, FLT_MAX, -FLT_MAX, FLT_MIN, -FLT_MIN,
		      POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NAN };
      SLEEF_VECTOR_FLOAT *y = malloc(sizeof(x));
      test_denormsp_sp("test_Sleef_coshf4_u35kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_FLOAT)); 

      for(i=0;i<sizeof(xa)/sizeof(float) && success;i++) cmpDenorm_f(mpfr_cosh, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "tanhf_u35 denormal/nonnumber test : ");
      SLEEF_VECTOR_FLOAT x[] = { makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+7), makeVecf(-1e+7), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN),
      makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN) };
      float xa[] = { +0.0, -0.0, +1, -1, +1e+7, -1e+7, FLT_MAX, -FLT_MAX, FLT_MIN, -FLT_MIN,
		      POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NAN };
      SLEEF_VECTOR_FLOAT *y = malloc(sizeof(x));
      test_denormsp_sp("test_Sleef_tanhf4_u35kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_FLOAT)); 

      for(i=0;i<sizeof(xa)/sizeof(float) && success;i++) cmpDenorm_f(mpfr_tanh, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "asinhf denormal/nonnumber test : ");
      SLEEF_VECTOR_FLOAT x[] = { makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+7), makeVecf(-1e+7), makeVecf(FLT_MIN), makeVecf(-FLT_MIN),
      makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN) };
      float xa[] = { +0.0, -0.0, +1, -1, +1e+7, -1e+7, FLT_MIN, -FLT_MIN,
		      POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NAN };
      SLEEF_VECTOR_FLOAT *y = malloc(sizeof(x));
      test_denormsp_sp("test_Sleef_asinhf4_u10kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_FLOAT)); 

      for(i=0;i<sizeof(xa)/sizeof(float) && success;i++) cmpDenorm_f(mpfr_asinh, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "acoshf denormal/nonnumber test : ");
      SLEEF_VECTOR_FLOAT x[] = { makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+7), makeVecf(-1e+7), makeVecf(FLT_MIN), makeVecf(-FLT_MIN),
      makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN) };
      float xa[] = { +0.0, -0.0, +1, -1, +1e+7, -1e+7, FLT_MIN, -FLT_MIN,
		      POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NAN };
      SLEEF_VECTOR_FLOAT *y = malloc(sizeof(x));
      test_denormsp_sp("test_Sleef_acoshf4_u10kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_FLOAT)); 

      for(i=0;i<sizeof(xa)/sizeof(float) && success;i++) cmpDenorm_f(mpfr_acosh, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "atanhf denormal/nonnumber test : ");
      SLEEF_VECTOR_FLOAT x[] = { makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+7), makeVecf(-1e+7), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN),
      makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN) };
      float xa[] = { +0.0, -0.0, +1, -1, +1e+7, -1e+7, FLT_MAX, -FLT_MAX, FLT_MIN, -FLT_MIN,
		      POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NAN };
      SLEEF_VECTOR_FLOAT *y = malloc(sizeof(x));
      test_denormsp_sp("test_Sleef_atanhf4_u10kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_FLOAT)); 

      for(i=0;i<sizeof(xa)/sizeof(float) && success;i++) cmpDenorm_f(mpfr_atanh, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    if (!deterministicMode) {
      fprintf(stderr, "sqrtf denormal/nonnumber test : ");
      SLEEF_VECTOR_FLOAT x[] = { makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+7), makeVecf(-1e+7), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN),
      makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN) };
      float xa[] = { +0.0, -0.0, +1, -1, +1e+7, -1e+7, FLT_MAX, -FLT_MAX, FLT_MIN, -FLT_MIN,
		      POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NAN };
      SLEEF_VECTOR_FLOAT *y = malloc(sizeof(x));
      test_denormsp_sp("test_Sleef_sqrtf4_kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_FLOAT)); 

      for(i=0;i<sizeof(xa)/sizeof(float) && success;i++) cmpDenorm_f(mpfr_sqrt, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    if (!deterministicMode) {
      fprintf(stderr, "sqrtf_u05 denormal/nonnumber test : ");
      SLEEF_VECTOR_FLOAT x[] = { makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+7), makeVecf(-1e+7), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN),
      makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN) };
      float xa[] = { +0.0, -0.0, +1, -1, +1e+7, -1e+7, FLT_MAX, -FLT_MAX, FLT_MIN, -FLT_MIN,
		      POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NAN };
      SLEEF_VECTOR_FLOAT *y = malloc(sizeof(x));
      test_denormsp_sp("test_Sleef_sqrtf4_u05kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_FLOAT)); 

      for(i=0;i<sizeof(xa)/sizeof(float) && success;i++) cmpDenorm_f(mpfr_sqrt, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    if (!deterministicMode) {
      fprintf(stderr, "sqrtf_u35 denormal/nonnumber test : ");
      SLEEF_VECTOR_FLOAT x[] = { makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+7), makeVecf(-1e+7), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN),
      makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN) };
      float xa[] = { +0.0, -0.0, +1, -1, +1e+7, -1e+7, FLT_MAX, -FLT_MAX, FLT_MIN, -FLT_MIN,
		      POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NAN };
      SLEEF_VECTOR_FLOAT *y = malloc(sizeof(x));
      test_denormsp_sp("test_Sleef_sqrtf4_u35kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_FLOAT)); 

      for(i=0;i<sizeof(xa)/sizeof(float) && success;i++) cmpDenorm_f(mpfr_sqrt, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "cbrtf denormal/nonnumber test : ");
      SLEEF_VECTOR_FLOAT x[] = { makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+7), makeVecf(-1e+7), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN),
      makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN) };
      float xa[] = { +0.0, -0.0, +1, -1, +1e+7, -1e+7, FLT_MAX, -FLT_MAX, FLT_MIN, -FLT_MIN,
		      POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NAN };
      SLEEF_VECTOR_FLOAT *y = malloc(sizeof(x));
      test_denormsp_sp("test_Sleef_cbrtf4_u35kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_FLOAT)); 

      for(i=0;i<sizeof(xa)/sizeof(float) && success;i++) cmpDenorm_f(mpfr_cbrt, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "cbrtf_u1 denormal/nonnumber test : ");
      SLEEF_VECTOR_FLOAT x[] = { makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+7), makeVecf(-1e+7), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN),
      makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN) };
      float xa[] = { +0.0, -0.0, +1, -1, +1e+7, -1e+7, FLT_MAX, -FLT_MAX, FLT_MIN, -FLT_MIN,
		      POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NAN };
      SLEEF_VECTOR_FLOAT *y = malloc(sizeof(x));
      test_denormsp_sp("test_Sleef_cbrtf4_u10kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_FLOAT)); 

      for(i=0;i<sizeof(xa)/sizeof(float) && success;i++) cmpDenorm_f(mpfr_cbrt, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "exp2f denormal/nonnumber test : ");
      SLEEF_VECTOR_FLOAT x[] = { makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+7), makeVecf(-1e+7), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN),
      makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN) };
      float xa[] = { +0.0, -0.0, +1, -1, +1e+7, -1e+7, FLT_MAX, -FLT_MAX, FLT_MIN, -FLT_MIN,
		      POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NAN };
      SLEEF_VECTOR_FLOAT *y = malloc(sizeof(x));
      test_denormsp_sp("test_Sleef_exp2f4_u10kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_FLOAT)); 

      for(i=0;i<sizeof(xa)/sizeof(float) && success;i++) cmpDenorm_f(mpfr_exp2, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "exp10f denormal/nonnumber test : ");
      SLEEF_VECTOR_FLOAT x[] = { makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+7), makeVecf(-1e+7), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN),
      makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN) };
      float xa[] = { +0.0, -0.0, +1, -1, +1e+7, -1e+7, FLT_MAX, -FLT_MAX, FLT_MIN, -FLT_MIN,
		      POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NAN };
      SLEEF_VECTOR_FLOAT *y = malloc(sizeof(x));
      test_denormsp_sp("test_Sleef_exp10f4_u10kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_FLOAT)); 

      for(i=0;i<sizeof(xa)/sizeof(float) && success;i++) cmpDenorm_f(mpfr_exp10, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "exp2f_u35 denormal/nonnumber test : ");
      SLEEF_VECTOR_FLOAT x[] = { makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+7), makeVecf(-1e+7), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN),
      makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN) };
      float xa[] = { +0.0, -0.0, +1, -1, +1e+7, -1e+7, FLT_MAX, -FLT_MAX, FLT_MIN, -FLT_MIN,
		      POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NAN };
      SLEEF_VECTOR_FLOAT *y = malloc(sizeof(x));
      test_denormsp_sp("test_Sleef_exp2f4_u35kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_FLOAT)); 

      for(i=0;i<sizeof(xa)/sizeof(float) && success;i++) cmpDenorm_f(mpfr_exp2, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "exp10f_u35 denormal/nonnumber test : ");
      SLEEF_VECTOR_FLOAT x[] = { makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+7), makeVecf(-1e+7), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN),
      makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN) };
      float xa[] = { +0.0, -0.0, +1, -1, +1e+7, -1e+7, FLT_MAX, -FLT_MAX, FLT_MIN, -FLT_MIN,
		      POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NAN };
      SLEEF_VECTOR_FLOAT *y = malloc(sizeof(x));
      test_denormsp_sp("test_Sleef_exp10f4_u35kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_FLOAT)); 

      for(i=0;i<sizeof(xa)/sizeof(float) && success;i++) cmpDenorm_f(mpfr_exp10, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "expm1f denormal/nonnumber test : ");
      SLEEF_VECTOR_FLOAT x[] = { makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+7), makeVecf(-1e+7), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN),
      makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN) };
      float xa[] = { +0.0, -0.0, +1, -1, +1e+7, -1e+7, FLT_MAX, -FLT_MAX, FLT_MIN, -FLT_MIN,
		      POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NAN };
      SLEEF_VECTOR_FLOAT *y = malloc(sizeof(x));
      test_denormsp_sp("test_Sleef_expm1f4_u10kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_FLOAT)); 

      for(i=0;i<sizeof(xa)/sizeof(float) && success;i++) cmpDenorm_f(mpfr_expm1, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "log10f denormal/nonnumber test : ");
      SLEEF_VECTOR_FLOAT x[] = { makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+7), makeVecf(-1e+7), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN),
      makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN) };
      float xa[] = { +0.0, -0.0, +1, -1, +1e+7, -1e+7, FLT_MAX, -FLT_MAX, FLT_MIN, -FLT_MIN,
		      POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NAN };
      SLEEF_VECTOR_FLOAT *y = malloc(sizeof(x));
      test_denormsp_sp("test_Sleef_log10f4_u10kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_FLOAT)); 

      for(i=0;i<sizeof(xa)/sizeof(float) && success;i++) cmpDenorm_f(mpfr_log10, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "log2f denormal/nonnumber test : ");
      SLEEF_VECTOR_FLOAT x[] = { makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+7), makeVecf(-1e+7), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN),
      makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN) };
      float xa[] = { +0.0, -0.0, +1, -1, +1e+7, -1e+7, FLT_MAX, -FLT_MAX, FLT_MIN, -FLT_MIN,
		      POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NAN };
      SLEEF_VECTOR_FLOAT *y = malloc(sizeof(x));
      test_denormsp_sp("test_Sleef_log2f4_u10kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_FLOAT)); 

      for(i=0;i<sizeof(xa)/sizeof(float) && success;i++) cmpDenorm_f(mpfr_log2, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "log2f_u35 denormal/nonnumber test : ");
      SLEEF_VECTOR_FLOAT x[] = { makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+7), makeVecf(-1e+7), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN),
      makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN) };
      float xa[] = { +0.0, -0.0, +1, -1, +1e+7, -1e+7, FLT_MAX, -FLT_MAX, FLT_MIN, -FLT_MIN,
		      POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NAN };
      SLEEF_VECTOR_FLOAT *y = malloc(sizeof(x));
      test_denormsp_sp("test_Sleef_log2f4_u35kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_FLOAT)); 

      for(i=0;i<sizeof(xa)/sizeof(float) && success;i++) cmpDenorm_f(mpfr_log2, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "log1pf denormal/nonnumber test : ");
      SLEEF_VECTOR_FLOAT x[] = { makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+7), makeVecf(-1e+7), makeVecf(FLT_MIN), makeVecf(-FLT_MIN),
      makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN), makeVecf(nextafterf(-1, -2)), makeVecf(-2) };
	float xa[] = { +0.0, -0.0, +1, -1, +1e+7, -1e+7, FLT_MIN, -FLT_MIN, POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NAN, nextafterf(-1, -2), -2 };
      SLEEF_VECTOR_FLOAT *y = malloc(sizeof(x));
      test_denormsp_sp("test_Sleef_log1pf4_u10kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_FLOAT)); 

      for(i=0;i<sizeof(xa)/sizeof(float) && success;i++) cmpDenorm_f(mpfr_log1p, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "hypotf_u35 denormal/nonnumber test : ");
      SLEEF_VECTOR_FLOAT x[] = { makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0),
      		makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0),
      		makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1),
      		makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1),
      		makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30),
      		makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30),
      		makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN),
      		makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN),
      		makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf),
      		makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf),
      		makeVecf(NAN), makeVecf(NAN), makeVecf(NAN), makeVecf(NAN), makeVecf(NAN), makeVecf(NAN), makeVecf(NAN), makeVecf(NAN), makeVecf(NAN), makeVecf(NAN), makeVecf(NAN) };
      float xa[] = { +0.0, -0.0, +1, -1, +1e+30, -1e+30, FLT_MIN, -FLT_MIN, POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NAN };

      SLEEF_VECTOR_FLOAT y[] = { makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN),
	      makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN),
	      makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN),
	      makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN),
	      makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN),
	      makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN),
	      makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN),
	      makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN),
	      makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN),
	      makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN),
	      makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN) };
      float ya[] = { +0.0, -0.0, +1, -1, +1e+30, -1e+30, FLT_MIN, -FLT_MIN, POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NAN };
      SLEEF_VECTOR_FLOAT *results = malloc(sizeof(x));
      test_denormsp_sp_sp("test_Sleef_hypotf4_u35kvx", x, y, results, sizeof(x)/sizeof(SLEEF_VECTOR_FLOAT));

      for(i=0;i<sizeof(xa)/sizeof(float) && success;i++) {
	for(j=0;j<sizeof(ya)/sizeof(float) && success;j++) {
	  cmpDenorm_f_f(mpfr_hypot, results[i*11+j], xa[i], ya[j]);
	}
      }
      free(results);
      showResult(success);
    }

    {
      fprintf(stderr, "hypotf_u05 denormal/nonnumber test : ");
      SLEEF_VECTOR_FLOAT x[] = { makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0),
      		makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0),
      		makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1),
      		makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1),
      		makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30),
      		makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30),
      		makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN),
      		makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN),
      		makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf),
      		makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf),
      		makeVecf(NAN), makeVecf(NAN), makeVecf(NAN), makeVecf(NAN), makeVecf(NAN), makeVecf(NAN), makeVecf(NAN), makeVecf(NAN), makeVecf(NAN), makeVecf(NAN), makeVecf(NAN) };
      float xa[] = { +0.0, -0.0, +1, -1, +1e+30, -1e+30, FLT_MIN, -FLT_MIN, POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NAN };

      SLEEF_VECTOR_FLOAT y[] = { makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN),
	      makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN),
	      makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN),
	      makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN),
	      makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN),
	      makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN),
	      makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN),
	      makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN),
	      makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN),
	      makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN),
	      makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN) };
      float ya[] = { +0.0, -0.0, +1, -1, +1e+30, -1e+30, FLT_MIN, -FLT_MIN, POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NAN };
      SLEEF_VECTOR_FLOAT *results = malloc(sizeof(x));
      test_denormsp_sp_sp("test_Sleef_hypotf4_u05kvx", x, y, results, sizeof(x)/sizeof(SLEEF_VECTOR_FLOAT));

      for(i=0;i<sizeof(xa)/sizeof(float) && success;i++) {
	for(j=0;j<sizeof(ya)/sizeof(float) && success;j++) {
	  cmpDenorm_f_f(mpfr_hypot, results[i*11+j], xa[i], ya[j]);
	}
      }
      free(results);
      showResult(success);
    }

    {
      fprintf(stderr, "copysignf denormal/nonnumber test : ");
      SLEEF_VECTOR_FLOAT x[] = { makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0),
      		makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0),
      		makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1),
      		makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1),
      		makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30),
      		makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30),
      		makeVecf(FLT_MAX), makeVecf(FLT_MAX), makeVecf(FLT_MAX), makeVecf(FLT_MAX), makeVecf(FLT_MAX), makeVecf(FLT_MAX), makeVecf(FLT_MAX), makeVecf(FLT_MAX), makeVecf(FLT_MAX), makeVecf(FLT_MAX), makeVecf(FLT_MAX), makeVecf(FLT_MAX),
      		makeVecf(-FLT_MAX), makeVecf(-FLT_MAX), makeVecf(-FLT_MAX), makeVecf(-FLT_MAX), makeVecf(-FLT_MAX), makeVecf(-FLT_MAX), makeVecf(-FLT_MAX), makeVecf(-FLT_MAX), makeVecf(-FLT_MAX), makeVecf(-FLT_MAX), makeVecf(-FLT_MAX), makeVecf(-FLT_MAX),
      		makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN),
      		makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN),
      		makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf),
      		makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf) };
      float xa[] = { +0.0, -0.0, +1, -1, +1e+30, -1e+30, FLT_MAX, -FLT_MAX, FLT_MIN, -FLT_MIN, POSITIVE_INFINITYf, NEGATIVE_INFINITYf };

      SLEEF_VECTOR_FLOAT y[] = { makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf),
	      makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf),
	      makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf),
	      makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf),
	      makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf),
	      makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf),
	      makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf),
	      makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf),
	      makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf),
	      makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf),
	      makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf),
	      makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf) };
      float ya[] = { +0.0, -0.0, +1, -1, +1e+30, -1e+30, FLT_MAX, -FLT_MAX, FLT_MIN, -FLT_MIN, POSITIVE_INFINITYf, NEGATIVE_INFINITYf };
      SLEEF_VECTOR_FLOAT *results = malloc(sizeof(x));
      test_denormsp_sp_sp("test_Sleef_copysignf4_kvx", x, y, results, sizeof(x)/sizeof(SLEEF_VECTOR_FLOAT));

      for(i=0;i<sizeof(xa)/sizeof(float) && success;i++) {
	for(j=0;j<sizeof(ya)/sizeof(float) && success;j++) {
	  cmpDenorm_f_f(mpfr_copysign, results[i*12+j], xa[i], ya[j]);
	}
      }

      free(results);
      showResult(success);
    }

    {
      fprintf(stderr, "fmaxf denormal/nonnumber test : ");
      SLEEF_VECTOR_FLOAT x[] = { makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), 
      		makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1), 
      		makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1), 
      		makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), 
      		makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), 
      		makeVecf(FLT_MAX), makeVecf(FLT_MAX), makeVecf(FLT_MAX), makeVecf(FLT_MAX), makeVecf(FLT_MAX), makeVecf(FLT_MAX), makeVecf(FLT_MAX), makeVecf(FLT_MAX), makeVecf(FLT_MAX), makeVecf(FLT_MAX), makeVecf(FLT_MAX), makeVecf(FLT_MAX), makeVecf(FLT_MAX), 
      		makeVecf(-FLT_MAX), makeVecf(-FLT_MAX), makeVecf(-FLT_MAX), makeVecf(-FLT_MAX), makeVecf(-FLT_MAX), makeVecf(-FLT_MAX), makeVecf(-FLT_MAX), makeVecf(-FLT_MAX), makeVecf(-FLT_MAX), makeVecf(-FLT_MAX), makeVecf(-FLT_MAX), makeVecf(-FLT_MAX), makeVecf(-FLT_MAX), 
      		makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), 
      		makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), 
      		makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), 
      		makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), 
		makeVecf(NAN), makeVecf(NAN), makeVecf(NAN), makeVecf(NAN), makeVecf(NAN), makeVecf(NAN), makeVecf(NAN), makeVecf(NAN), makeVecf(NAN), makeVecf(NAN), makeVecf(NAN), makeVecf(NAN), makeVecf(NAN), 
      		makeVecf(SLEEF_SNANf), makeVecf(SLEEF_SNANf), makeVecf(SLEEF_SNANf), makeVecf(SLEEF_SNANf), makeVecf(SLEEF_SNANf), makeVecf(SLEEF_SNANf), makeVecf(SLEEF_SNANf), makeVecf(SLEEF_SNANf), makeVecf(SLEEF_SNANf), makeVecf(SLEEF_SNANf), makeVecf(SLEEF_SNANf), makeVecf(SLEEF_SNANf), makeVecf(SLEEF_SNANf) };
      float xa[] = { +0.0, +1, -1, +1e+30, -1e+30, FLT_MAX, -FLT_MAX, FLT_MIN, -FLT_MIN, POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NAN, SLEEF_SNANf };
      
      SLEEF_VECTOR_FLOAT y[] = { makeVecf(+0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN), makeVecf(SLEEF_SNANf),
	      makeVecf(+0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN), makeVecf(SLEEF_SNANf),
	      makeVecf(+0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN), makeVecf(SLEEF_SNANf),
	      makeVecf(+0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN), makeVecf(SLEEF_SNANf),
	      makeVecf(+0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN), makeVecf(SLEEF_SNANf),
	      makeVecf(+0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN), makeVecf(SLEEF_SNANf),
	      makeVecf(+0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN), makeVecf(SLEEF_SNANf),
	      makeVecf(+0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN), makeVecf(SLEEF_SNANf),
	      makeVecf(+0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN), makeVecf(SLEEF_SNANf),
	      makeVecf(+0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN), makeVecf(SLEEF_SNANf),
	      makeVecf(+0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN), makeVecf(SLEEF_SNANf),
	      makeVecf(+0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN), makeVecf(SLEEF_SNANf),
	      makeVecf(+0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN), makeVecf(SLEEF_SNANf),
      		};
      float ya[] = { +0.0, +1, -1, +1e+30, -1e+30, FLT_MAX, -FLT_MAX, FLT_MIN, -FLT_MIN, POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NAN, SLEEF_SNANf };
      SLEEF_VECTOR_FLOAT *results = malloc(sizeof(x));
      test_denormsp_sp_sp("test_Sleef_fmaxf4_kvx", x, y, results, sizeof(x)/sizeof(SLEEF_VECTOR_FLOAT));

      for(i=0;i<sizeof(xa)/sizeof(float) && success;i++) {
	for(j=0;j<sizeof(ya)/sizeof(float) && success;j++) {
	  cmpDenorm_f_f(mpfr_max, results[i*13+j], xa[i], ya[j]);
	}
      }

      free(results);
      showResult(success);
    }

    {
      fprintf(stderr, "fminf denormal/nonnumber test : ");
      SLEEF_VECTOR_FLOAT x[] = { makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), 
      		makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1), 
      		makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1), 
      		makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), 
      		makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), 
      		makeVecf(FLT_MAX), makeVecf(FLT_MAX), makeVecf(FLT_MAX), makeVecf(FLT_MAX), makeVecf(FLT_MAX), makeVecf(FLT_MAX), makeVecf(FLT_MAX), makeVecf(FLT_MAX), makeVecf(FLT_MAX), makeVecf(FLT_MAX), makeVecf(FLT_MAX), makeVecf(FLT_MAX), makeVecf(FLT_MAX), 
      		makeVecf(-FLT_MAX), makeVecf(-FLT_MAX), makeVecf(-FLT_MAX), makeVecf(-FLT_MAX), makeVecf(-FLT_MAX), makeVecf(-FLT_MAX), makeVecf(-FLT_MAX), makeVecf(-FLT_MAX), makeVecf(-FLT_MAX), makeVecf(-FLT_MAX), makeVecf(-FLT_MAX), makeVecf(-FLT_MAX), makeVecf(-FLT_MAX), 
      		makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), 
      		makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), 
      		makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), 
      		makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), 
		makeVecf(NAN), makeVecf(NAN), makeVecf(NAN), makeVecf(NAN), makeVecf(NAN), makeVecf(NAN), makeVecf(NAN), makeVecf(NAN), makeVecf(NAN), makeVecf(NAN), makeVecf(NAN), makeVecf(NAN), makeVecf(NAN), 
      		makeVecf(SLEEF_SNANf), makeVecf(SLEEF_SNANf), makeVecf(SLEEF_SNANf), makeVecf(SLEEF_SNANf), makeVecf(SLEEF_SNANf), makeVecf(SLEEF_SNANf), makeVecf(SLEEF_SNANf), makeVecf(SLEEF_SNANf), makeVecf(SLEEF_SNANf), makeVecf(SLEEF_SNANf), makeVecf(SLEEF_SNANf), makeVecf(SLEEF_SNANf), makeVecf(SLEEF_SNANf) };
      float xa[] = { +0.0, +1, -1, +1e+30, -1e+30, FLT_MAX, -FLT_MAX, FLT_MIN, -FLT_MIN, POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NAN, SLEEF_SNANf };
      
      SLEEF_VECTOR_FLOAT y[] = { makeVecf(+0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN), makeVecf(SLEEF_SNANf),
	      makeVecf(+0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN), makeVecf(SLEEF_SNANf),
	      makeVecf(+0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN), makeVecf(SLEEF_SNANf),
	      makeVecf(+0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN), makeVecf(SLEEF_SNANf),
	      makeVecf(+0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN), makeVecf(SLEEF_SNANf),
	      makeVecf(+0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN), makeVecf(SLEEF_SNANf),
	      makeVecf(+0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN), makeVecf(SLEEF_SNANf),
	      makeVecf(+0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN), makeVecf(SLEEF_SNANf),
	      makeVecf(+0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN), makeVecf(SLEEF_SNANf),
	      makeVecf(+0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN), makeVecf(SLEEF_SNANf),
	      makeVecf(+0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN), makeVecf(SLEEF_SNANf),
	      makeVecf(+0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN), makeVecf(SLEEF_SNANf),
	      makeVecf(+0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN), makeVecf(SLEEF_SNANf),
      		};
      float ya[] = { +0.0, +1, -1, +1e+30, -1e+30, FLT_MAX, -FLT_MAX, FLT_MIN, -FLT_MIN, POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NAN, SLEEF_SNANf };
      SLEEF_VECTOR_FLOAT *results = malloc(sizeof(x));
      test_denormsp_sp_sp("test_Sleef_fminf4_kvx", x, y, results, sizeof(x)/sizeof(SLEEF_VECTOR_FLOAT));

      for(i=0;i<sizeof(xa)/sizeof(float) && success;i++) {
	for(j=0;j<sizeof(ya)/sizeof(float) && success;j++) {
	  cmpDenorm_f_f(mpfr_min, results[i*13+j], xa[i], ya[j]);
	}
      }

      free(results);
      showResult(success);
    }

    {
      fprintf(stderr, "fdimf denormal/nonnumber test : ");
      SLEEF_VECTOR_FLOAT x[] = { makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0),
	     makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0),
	     makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1),
	  makeVecf(-1),  makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1),
	     makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30),
	     makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30),
	     makeVecf(FLT_MAX), makeVecf(FLT_MAX), makeVecf(FLT_MAX), makeVecf(FLT_MAX), makeVecf(FLT_MAX), makeVecf(FLT_MAX), makeVecf(FLT_MAX), makeVecf(FLT_MAX), makeVecf(FLT_MAX), makeVecf(FLT_MAX), makeVecf(FLT_MAX), makeVecf(FLT_MAX), makeVecf(FLT_MAX),
	     makeVecf(-FLT_MAX), makeVecf(-FLT_MAX), makeVecf(-FLT_MAX), makeVecf(-FLT_MAX), makeVecf(-FLT_MAX), makeVecf(-FLT_MAX), makeVecf(-FLT_MAX), makeVecf(-FLT_MAX), makeVecf(-FLT_MAX), makeVecf(-FLT_MAX), makeVecf(-FLT_MAX), makeVecf(-FLT_MAX), makeVecf(-FLT_MAX),
	     makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN),
	     makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN),
	     makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf),
	     makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf),
	     makeVecf(NAN), makeVecf(NAN), makeVecf(NAN), makeVecf(NAN), makeVecf(NAN), makeVecf(NAN), makeVecf(NAN), makeVecf(NAN), makeVecf(NAN), makeVecf(NAN), makeVecf(NAN), makeVecf(NAN), makeVecf(NAN) };
      float xa[] = { +0.0, -0.0, +1, -1, +1e+30, -1e+30, FLT_MAX, -FLT_MAX, FLT_MIN, -FLT_MIN, POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NAN };

      SLEEF_VECTOR_FLOAT y[] = { 
	      makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN),
	      makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN),
	      makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN),
	      makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN),
	      makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN),
	      makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN),
	      makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN),
	      makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN),
	      makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN),
	      makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN),
	      makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN),
	      makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN),
	      makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN) };
      float ya[] = { +0.0, -0.0, +1, -1, +1e+30, -1e+30, FLT_MAX, -FLT_MAX, FLT_MIN, -FLT_MIN, POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NAN };
      SLEEF_VECTOR_FLOAT *results = malloc(sizeof(x));
      test_denormsp_sp_sp("test_Sleef_fdimf4_kvx", x, y, results, sizeof(x)/sizeof(SLEEF_VECTOR_FLOAT));

      for(i=0;i<sizeof(xa)/sizeof(float) && success;i++) {
	for(j=0;j<sizeof(ya)/sizeof(float) && success;j++) {
	  cmpDenorm_f_f(mpfr_dim, results[i*13+j], xa[i], ya[j]);
	}
      }

      free(results);
      showResult(success);
    }

    {
      fprintf(stderr, "fmodf denormal/nonnumber test : ");
      SLEEF_VECTOR_FLOAT x[] = { makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0),
	     makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0),
	     makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1),
	  makeVecf(-1),  makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1),
	     makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30),
	     makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30),
	     makeVecf(FLT_MAX), makeVecf(FLT_MAX), makeVecf(FLT_MAX), makeVecf(FLT_MAX), makeVecf(FLT_MAX), makeVecf(FLT_MAX), makeVecf(FLT_MAX), makeVecf(FLT_MAX), makeVecf(FLT_MAX), makeVecf(FLT_MAX), makeVecf(FLT_MAX), makeVecf(FLT_MAX), makeVecf(FLT_MAX),
	     makeVecf(-FLT_MAX), makeVecf(-FLT_MAX), makeVecf(-FLT_MAX), makeVecf(-FLT_MAX), makeVecf(-FLT_MAX), makeVecf(-FLT_MAX), makeVecf(-FLT_MAX), makeVecf(-FLT_MAX), makeVecf(-FLT_MAX), makeVecf(-FLT_MAX), makeVecf(-FLT_MAX), makeVecf(-FLT_MAX), makeVecf(-FLT_MAX),
	     makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN),
	     makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN),
	     makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf),
	     makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf),
	     makeVecf(NAN), makeVecf(NAN), makeVecf(NAN), makeVecf(NAN), makeVecf(NAN), makeVecf(NAN), makeVecf(NAN), makeVecf(NAN), makeVecf(NAN), makeVecf(NAN), makeVecf(NAN), makeVecf(NAN), makeVecf(NAN) };
      float xa[] = { +0.0, -0.0, +1, -1, +1e+30, -1e+30, FLT_MAX, -FLT_MAX, FLT_MIN, -FLT_MIN, POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NAN };

      SLEEF_VECTOR_FLOAT y[] = { 
	      makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN),
	      makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN),
	      makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN),
	      makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN),
	      makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN),
	      makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN),
	      makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN),
	      makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN),
	      makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN),
	      makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN),
	      makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN),
	      makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN),
	      makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN) };
      float ya[] = { +0.0, -0.0, +1, -1, +1e+30, -1e+30, FLT_MAX, -FLT_MAX, FLT_MIN, -FLT_MIN, POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NAN };
      SLEEF_VECTOR_FLOAT *results = malloc(sizeof(x));
      test_denormsp_sp_sp("test_Sleef_fmodf4_kvx", x, y, results, sizeof(x)/sizeof(SLEEF_VECTOR_FLOAT));

      for(i=0;i<sizeof(xa)/sizeof(float) && success;i++) {
	for(j=0;j<sizeof(ya)/sizeof(float) && success;j++) {
	  if (fabs(xa[i] / ya[j]) > 1e+38) continue;
	  cmpDenorm_f_f(mpfr_fmod, results[i*13+j], xa[i], ya[j]);
	}
      }

      free(results);
      showResult(success);
    }

    {
      fprintf(stderr, "remainderf denormal/nonnumber test : ");
      SLEEF_VECTOR_FLOAT x[] = { makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0), makeVecf(+0.0),
	     makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0), makeVecf(-0.0),
	     makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1), makeVecf(+1),
	  makeVecf(-1),  makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1), makeVecf(-1),
	     makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30), makeVecf(+1e+30),
	     makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30), makeVecf(-1e+30),
	     makeVecf(FLT_MAX), makeVecf(FLT_MAX), makeVecf(FLT_MAX), makeVecf(FLT_MAX), makeVecf(FLT_MAX), makeVecf(FLT_MAX), makeVecf(FLT_MAX), makeVecf(FLT_MAX), makeVecf(FLT_MAX), makeVecf(FLT_MAX), makeVecf(FLT_MAX), makeVecf(FLT_MAX), makeVecf(FLT_MAX),
	     makeVecf(-FLT_MAX), makeVecf(-FLT_MAX), makeVecf(-FLT_MAX), makeVecf(-FLT_MAX), makeVecf(-FLT_MAX), makeVecf(-FLT_MAX), makeVecf(-FLT_MAX), makeVecf(-FLT_MAX), makeVecf(-FLT_MAX), makeVecf(-FLT_MAX), makeVecf(-FLT_MAX), makeVecf(-FLT_MAX), makeVecf(-FLT_MAX),
	     makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN), makeVecf(FLT_MIN),
	     makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN), makeVecf(-FLT_MIN),
	     makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf), makeVecf(POSITIVE_INFINITYf),
	     makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf),
	     makeVecf(NAN), makeVecf(NAN), makeVecf(NAN), makeVecf(NAN), makeVecf(NAN), makeVecf(NAN), makeVecf(NAN), makeVecf(NAN), makeVecf(NAN), makeVecf(NAN), makeVecf(NAN), makeVecf(NAN), makeVecf(NAN) };
      float xa[] = { +0.0, -0.0, +1, -1, +1e+30, -1e+30, FLT_MAX, -FLT_MAX, FLT_MIN, -FLT_MIN, POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NAN };

      SLEEF_VECTOR_FLOAT y[] = { 
	      makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN),
	      makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN),
	      makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN),
	      makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN),
	      makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN),
	      makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN),
	      makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN),
	      makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN),
	      makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN),
	      makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN),
	      makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN),
	      makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN),
	      makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+30), makeVecf(-1e+30), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN) };
      float ya[] = { +0.0, -0.0, +1, -1, +1e+30, -1e+30, FLT_MAX, -FLT_MAX, FLT_MIN, -FLT_MIN, POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NAN };
      SLEEF_VECTOR_FLOAT *results = malloc(sizeof(x));
      test_denormsp_sp_sp("test_Sleef_remainderf4_kvx", x, y, results, sizeof(x)/sizeof(SLEEF_VECTOR_FLOAT));

      for(i=0;i<sizeof(xa)/sizeof(float) && success;i++) {
	for(j=0;j<sizeof(ya)/sizeof(float) && success;j++) {
	  if (fabs(xa[i] / ya[j]) > 1e+38) continue;
	  cmpDenorm_f_f(mpfr_remainder, results[i*13+j], xa[i], ya[j]);
	}
      }

      free(results);
      showResult(success);
    }

    {
      fprintf(stderr, "truncf denormal/nonnumber test : ");
      SLEEF_VECTOR_FLOAT x[] = { makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+10), makeVecf(-1e+10), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN) };
      float xa[] = { +0.0, -0.0, +1, -1, +1e+10, -1e+10, FLT_MAX, -FLT_MAX, FLT_MIN, -FLT_MIN, POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NAN };
      SLEEF_VECTOR_FLOAT *y = malloc(sizeof(x));
      test_denormsp_sp("test_Sleef_truncf4_kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_FLOAT));

      for(i=0;i<sizeof(xa)/sizeof(float) && success;i++) cmpDenormNR_f(mpfr_trunc, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "floorf denormal/nonnumber test : ");
      SLEEF_VECTOR_FLOAT x[] = { makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+10), makeVecf(-1e+10), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN) };
      float xa[] = { +0.0, -0.0, +1, -1, +1e+10, -1e+10, FLT_MAX, -FLT_MAX, FLT_MIN, -FLT_MIN, POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NAN };
      SLEEF_VECTOR_FLOAT *y = malloc(sizeof(x));
      test_denormsp_sp("test_Sleef_floorf4_kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_FLOAT));

      for(i=0;i<sizeof(xa)/sizeof(float) && success;i++) cmpDenormNR_f(mpfr_floor, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "ceilf denormal/nonnumber test : ");
      SLEEF_VECTOR_FLOAT x[] = { makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+10), makeVecf(-1e+10), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN) };
      float xa[] = { +0.0, -0.0, +1, -1, +1e+10, -1e+10, FLT_MAX, -FLT_MAX, FLT_MIN, -FLT_MIN, POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NAN };
      SLEEF_VECTOR_FLOAT *y = malloc(sizeof(x));
      test_denormsp_sp("test_Sleef_ceilf4_kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_FLOAT));

      for(i=0;i<sizeof(xa)/sizeof(float) && success;i++) cmpDenormNR_f(mpfr_ceil, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "roundf denormal/nonnumber test : ");
      SLEEF_VECTOR_FLOAT x[] = { makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+10), makeVecf(-1e+10), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN) };
      float xa[] = { +0.0, -0.0, +1, -1, +1e+10, -1e+10, FLT_MAX, -FLT_MAX, FLT_MIN, -FLT_MIN, POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NAN };
      SLEEF_VECTOR_FLOAT *y = malloc(sizeof(x));
      test_denormsp_sp("test_Sleef_roundf4_kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_FLOAT));

      for(i=0;i<sizeof(xa)/sizeof(float) && success;i++) cmpDenormNR_f(mpfr_round, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "rintf denormal/nonnumber test : ");
      SLEEF_VECTOR_FLOAT x[] = { makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(-1), makeVecf(+1e+10), makeVecf(-1e+10), makeVecf(FLT_MAX), makeVecf(-FLT_MAX), makeVecf(FLT_MIN), makeVecf(-FLT_MIN), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN) };
      float xa[] = { +0.0, -0.0, +1, -1, +1e+10, -1e+10, FLT_MAX, -FLT_MAX, FLT_MIN, -FLT_MIN, POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NAN };
      SLEEF_VECTOR_FLOAT *y = malloc(sizeof(x));
      test_denormsp_sp("test_Sleef_rintf4_kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_FLOAT));

      for(i=0;i<sizeof(xa)/sizeof(float) && success;i++) cmpDenorm_f(mpfr_rint, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    //
    
    {
      fprintf(stderr, "lgammaf_u1 denormal/nonnumber test : ");
      SLEEF_VECTOR_FLOAT x[] = { makeVecf(-4), makeVecf(-3), makeVecf(-2), makeVecf(-1), makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(+2), makeVecf(+1e+10), makeVecf(-1e+10), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN) };
      float xa[] = { -4, -3, -2, -1, +0.0, -0.0, +1, +2, +1e+10, -1e+10, POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NAN };
      SLEEF_VECTOR_FLOAT *y = malloc(sizeof(x));
      test_denormsp_sp("test_Sleef_lgammaf4_u10kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_FLOAT));

      for(i=0;i<sizeof(xa)/sizeof(float) && success;i++) cmpDenorm_f(mpfr_lgamma_nosign, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "tgammaf_u1 denormal/nonnumber test : ");
      SLEEF_VECTOR_FLOAT x[] = { makeVecf(-4), makeVecf(-3), makeVecf(-2), makeVecf(-1), makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(+2), makeVecf(+1e+10), makeVecf(-1e+10), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN) };
      float xa[] = { -4, -3, -2, -1, +0.0, -0.0, +1, +2, +1e+10, -1e+10, POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NAN };
      SLEEF_VECTOR_FLOAT *y = malloc(sizeof(x));
      test_denormsp_sp("test_Sleef_tgammaf4_u10kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_FLOAT));

      for(i=0;i<sizeof(xa)/sizeof(float) && success;i++) cmpDenorm_f(mpfr_gamma, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "erff_u1 denormal/nonnumber test : ");
      SLEEF_VECTOR_FLOAT x[] = { makeVecf(-1), makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(+1e+10), makeVecf(-1e+10), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN) };
      float xa[] = { -1, +0.0, -0.0, +1, +1e+10, -1e+10, POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NAN };
      SLEEF_VECTOR_FLOAT *y = malloc(sizeof(x));
      test_denormsp_sp("test_Sleef_erff4_u10kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_FLOAT));
      
      for(i=0;i<sizeof(xa)/sizeof(float) && success;i++) cmpDenorm_f(mpfr_erf, y[i], xa[i]);
      free(y);
      showResult(success);
    }

    {
      fprintf(stderr, "erfcf_u15 denormal/nonnumber test : ");
      SLEEF_VECTOR_FLOAT x[] = { makeVecf(-1), makeVecf(+0.0), makeVecf(-0.0), makeVecf(+1), makeVecf(+1e+10), makeVecf(-1e+10), makeVecf(POSITIVE_INFINITYf), makeVecf(NEGATIVE_INFINITYf), makeVecf(NAN) };
      float xa[] = { -1, +0.0, -0.0, +1, +1e+10, -1e+10, POSITIVE_INFINITYf, NEGATIVE_INFINITYf, NAN };
      SLEEF_VECTOR_FLOAT *y = malloc(sizeof(x));
      test_denormsp_sp("test_Sleef_erfcf4_u15kvx", x, y, sizeof(x)/sizeof(SLEEF_VECTOR_FLOAT));
      
      for(i=0;i<sizeof(xa)/sizeof(float) && success;i++) cmpDenorm_f(mpfr_erfc, y[i], xa[i]);
      free(y);
      showResult(success);
    }

  }
 
  //

#define checkAccuracy_d(mpfrFunc, childFunc, argx, bound) do {		\
    mpfr_set_d(frx, argx, GMP_RNDN);					\
    mpfrFunc(frc, frx, GMP_RNDN);					\
    if (countULPdp(childFunc[0], frc) > bound) {			\
      fprintf(stderr, "\narg = %.20g, test = %.20g, correct = %.20g, ULP = %lf\n", argx, childFunc[0], mpfr_get_d(frc, GMP_RNDN), countULPdp(childFunc[0], frc)); \
      success = 0;							\
      break;								\
    }									\
  } while(0)

#define checkAccuracyNR_d(mpfrFunc, childFunc, argx, bound) do {	\
    mpfr_set_d(frx, argx, GMP_RNDN);					\
    mpfrFunc(frc, frx);							\
    if (countULPdp(childFunc[0], frc) > bound) {			\
      fprintf(stderr, "\narg = %.20g, test = %.20g, correct = %.20g, ULP = %lf\n", argx, childFunc[0], mpfr_get_d(frc, GMP_RNDN), countULPdp(childFunc[0], frc)); \
      success = 0;							\
      break;								\
    }									\
  } while(0)

#define checkAccuracy_d_d(mpfrFunc, childFunc, argx, argy, bound) do {	\
    mpfr_set_d(frx, argx, GMP_RNDN);					\
    mpfr_set_d(fry, argy, GMP_RNDN);					\
    mpfrFunc(frc, frx, fry, GMP_RNDN);					\
    if (countULPdp(childFunc[0], frc) > bound) {		\
      fprintf(stderr, "\narg = %.20g, %.20g, test = %.20g, correct = %.20g, ULP = %lf\n", \
	      argx, argy, childFunc[0], mpfr_get_d(frc, GMP_RNDN), countULPdp(childFunc[0], frc)); \
      success = 0;							\
      break;								\
    }									\
  } while(0)

#define checkAccuracyX_d(mpfrFunc, childFunc, argx, bound) do {		\
    mpfr_set_d(frx, argx, GMP_RNDN);					\
    mpfrFunc(frc, frx, GMP_RNDN);					\
    Sleef_SLEEF_VECTOR_DOUBLE_2 d2 = childFunc;					\
    if (countULPdp(d2.x[0], frc) > bound) {				\
      fprintf(stderr, "\narg = %.20g, test = %.20g, correct = %.20g, ULP = %lf\n", argx, d2.x[0], mpfr_get_d(frc, GMP_RNDN), countULPdp(d2.x[0], frc)); \
      success = 0;							\
      break;								\
    }									\
  } while(0)
  
#define checkAccuracyY_d(mpfrFunc, childFunc, argx, bound) do {		\
    mpfr_set_d(frx, argx, GMP_RNDN);					\
    mpfrFunc(frc, frx, GMP_RNDN);					\
    Sleef_SLEEF_VECTOR_DOUBLE_2 d2 = childFunc;					\
    if (countULPdp(d2.y[0], frc) > bound) {				\
      fprintf(stderr, "\narg = %.20g, test = %.20g, correct = %.20g, ULP = %lf\n", argx, d2.y[0], mpfr_get_d(frc, GMP_RNDN), countULPdp(d2.y[0], frc)); \
      success = 0;							\
      break;								\
    }									\
  } while(0)
  //
  
  fprintf(stderr, "\nAccuracy test\n");

  //
  if (enableDP) {
    // 64 > 53(=number of bits in DP mantissa)
    mpfr_set_default_prec(64);
    fprintf(stderr, "hypot_u35 : ");
    {
	    SLEEF_VECTOR_DOUBLE *x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*134);
	    SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*134);
	    SLEEF_VECTOR_DOUBLE *results = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*134);
	    for (double l = -10; l < 10 && success; l += 0.15) {
		size_t idx = 0;
	    	for(double m = -10; m < 10; m += 0.15) {
			x[idx] = makeVecd(l);
			y[idx] = makeVecd(m);
			idx += 1;
		}
      		test_denormdp_dp_dp("test_Sleef_hypotd2_u35kvx", x, y, results, 134);
		for (size_t k = 0; k < 134 && success; k++) {
			checkAccuracy_d_d(mpfr_hypot, results[k], x[k][0], y[k][0], 3.5);
		}
	    }
	    for(double l = -1e+10; l < 1e+10 && success; l += 1.51e+8) {
		size_t idx = 0;
	      	for(double m = -1e+10; m < 1e+10; m += 1.51e+8) {
			x[idx] = makeVecd(l);
			y[idx] = makeVecd(m);
			idx += 1;
		}
      		test_denormdp_dp_dp("test_Sleef_hypotd2_u35kvx", x, y, results, 134);
		for (size_t k = 0; k < 133 && success; k++) {
			checkAccuracy_d_d(mpfr_hypot, results[k], x[k][0], y[k][0], 3.5);
		}
	    }

	    free(x);
	    free(y);
	    free(results);
	    showResult(success);
    }
    //

    fprintf(stderr, "hypot_u05 : ");
    {
	    SLEEF_VECTOR_DOUBLE *x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*134);
	    SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*134);
	    SLEEF_VECTOR_DOUBLE *results = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*134);
	    for (double l = -10; l < 10 && success; l += 0.15) {
		size_t idx = 0;
	    	for(double m = -10; m < 10; m += 0.15) {
			x[idx] = makeVecd(l);
			y[idx] = makeVecd(m);
			idx += 1;
		}
      		test_denormdp_dp_dp("test_Sleef_hypotd2_u05kvx", x, y, results, 134);
		for (size_t k = 0; k < 134 && success; k++) {
			checkAccuracy_d_d(mpfr_hypot, results[k], x[k][0], y[k][0], 3.5);
		}
	    }
	    for(double l = -1e+10; l < 1e+10 && success; l += 1.51e+8) {
		size_t idx = 0;
	      	for(double m = -1e+10; m < 1e+10; m += 1.51e+8) {
			x[idx] = makeVecd(l);
			y[idx] = makeVecd(m);
			idx += 1;
		}
      		test_denormdp_dp_dp("test_Sleef_hypotd2_u05kvx", x, y, results, 134);
		for (size_t k = 0; k < 133 && success; k++) {
			checkAccuracy_d_d(mpfr_hypot, results[k], x[k][0], y[k][0], 3.5);
		}
	    }

	    free(x);
	    free(y);
	    free(results);
	    showResult(success);
    }
  
    //

    fprintf(stderr, "copysign : ");
    {
	    SLEEF_VECTOR_DOUBLE *x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*134);
	    SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*134);
	    SLEEF_VECTOR_DOUBLE *results = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*134);
	    for (double l = -10; l < 10 && success; l += 0.15) {
		size_t idx = 0;
	    	for(double m = -10; m < 10; m += 0.15) {
			x[idx] = makeVecd(l);
			y[idx] = makeVecd(m);
			idx += 1;
		}
      		test_denormdp_dp_dp("test_Sleef_copysignd2_kvx", x, y, results, 134);
		for (size_t k = 0; k < 134 && success; k++) {
			checkAccuracy_d_d(mpfr_copysign, results[k], x[k][0], y[k][0], 3.5);
		}
	    }
	    for(double l = -1e+10; l < 1e+10 && success; l += 1.51e+8) {
		size_t idx = 0;
	      	for(double m = -1e+10; m < 1e+10; m += 1.51e+8) {
			x[idx] = makeVecd(l);
			y[idx] = makeVecd(m);
			idx += 1;
		}
      		test_denormdp_dp_dp("test_Sleef_copysignd2_kvx", x, y, results, 134);
		for (size_t k = 0; k < 133 && success; k++) {
			checkAccuracy_d_d(mpfr_copysign, results[k], x[k][0], y[k][0], 3.5);
		}
	    }

	    free(x);
	    free(y);
	    free(results);
	    showResult(success);
    }
  
    //

    fprintf(stderr, "fmax : ");
    {
	    SLEEF_VECTOR_DOUBLE *x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*134);
	    SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*134);
	    SLEEF_VECTOR_DOUBLE *results = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*134);
	    for (double l = -10; l < 10 && success; l += 0.15) {
		size_t idx = 0;
	    	for(double m = -10; m < 10; m += 0.15) {
			x[idx] = makeVecd(l);
			y[idx] = makeVecd(m);
			idx += 1;
		}
      		test_denormdp_dp_dp("test_Sleef_fmaxd2_kvx", x, y, results, 134);
		for (size_t k = 0; k < 134 && success; k++) {
			checkAccuracy_d_d(mpfr_max, results[k], x[k][0], y[k][0], 3.5);
		}
	    }
	    for(double l = -1e+10; l < 1e+10 && success; l += 1.51e+8) {
		size_t idx = 0;
	      	for(double m = -1e+10; m < 1e+10; m += 1.51e+8) {
			x[idx] = makeVecd(l);
			y[idx] = makeVecd(m);
			idx += 1;
		}
      		test_denormdp_dp_dp("test_Sleef_fmaxd2_kvx", x, y, results, 134);
		for (size_t k = 0; k < 133 && success; k++) {
			checkAccuracy_d_d(mpfr_max, results[k], x[k][0], y[k][0], 3.5);
		}
	    }

	    free(x);
	    free(y);
	    free(results);
	    showResult(success);
    }
  
    //

    fprintf(stderr, "fmin : ");
    {
	    SLEEF_VECTOR_DOUBLE *x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*134);
	    SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*134);
	    SLEEF_VECTOR_DOUBLE *results = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*134);
	    for (double l = -10; l < 10 && success; l += 0.15) {
		size_t idx = 0;
	    	for(double m = -10; m < 10; m += 0.15) {
			x[idx] = makeVecd(l);
			y[idx] = makeVecd(m);
			idx += 1;
		}
      		test_denormdp_dp_dp("test_Sleef_fmind2_kvx", x, y, results, 134);
		for (size_t k = 0; k < 134 && success; k++) {
			checkAccuracy_d_d(mpfr_min, results[k], x[k][0], y[k][0], 3.5);
		}
	    }
	    for(double l = -1e+10; l < 1e+10 && success; l += 1.51e+8) {
		size_t idx = 0;
	      	for(double m = -1e+10; m < 1e+10; m += 1.51e+8) {
			x[idx] = makeVecd(l);
			y[idx] = makeVecd(m);
			idx += 1;
		}
      		test_denormdp_dp_dp("test_Sleef_fmind2_kvx", x, y, results, 134);
		for (size_t k = 0; k < 133 && success; k++) {
			checkAccuracy_d_d(mpfr_min, results[k], x[k][0], y[k][0], 3.5);
		}
	    }

	    free(x);
	    free(y);
	    free(results);
	    showResult(success);
    }
  
    //

    fprintf(stderr, "fdim : ");
    {
	    SLEEF_VECTOR_DOUBLE *x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*134);
	    SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*134);
	    SLEEF_VECTOR_DOUBLE *results = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*134);
	    for (double l = -10; l < 10 && success; l += 0.15) {
		size_t idx = 0;
	    	for(double m = -10; m < 10; m += 0.15) {
			x[idx] = makeVecd(l);
			y[idx] = makeVecd(m);
			idx += 1;
		}
      		test_denormdp_dp_dp("test_Sleef_fdimd2_kvx", x, y, results, 134);
		for (size_t k = 0; k < 134 && success; k++) {
			checkAccuracy_d_d(mpfr_dim, results[k], x[k][0], y[k][0], 3.5);
		}
	    }
	    for(double l = -1e+10; l < 1e+10 && success; l += 1.51e+8) {
		size_t idx = 0;
	      	for(double m = -1e+10; m < 1e+10; m += 1.51e+8) {
			x[idx] = makeVecd(l);
			y[idx] = makeVecd(m);
			idx += 1;
		}
      		test_denormdp_dp_dp("test_Sleef_fdimd2_kvx", x, y, results, 134);
		for (size_t k = 0; k < 133 && success; k++) {
			checkAccuracy_d_d(mpfr_dim, results[k], x[k][0], y[k][0], 3.5);
		}
	    }

	    free(x);
	    free(y);
	    free(results);
	    showResult(success);
    }
  
    //

    fprintf(stderr, "fmod : ");
    {
	    SLEEF_VECTOR_DOUBLE *x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*134);
	    SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*134);
	    SLEEF_VECTOR_DOUBLE *results = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*134);
	    for (double l = -10; l < 10 && success; l += 0.15) {
		size_t idx = 0;
	    	for(double m = -10; m < 10; m += 0.15) {
			x[idx] = makeVecd(l);
			y[idx] = makeVecd(m);
			idx += 1;
		}
      		test_denormdp_dp_dp("test_Sleef_fmodd2_kvx", x, y, results, 134);
		for (size_t k = 0; k < 134 && success; k++) {
			checkAccuracy_d_d(mpfr_fmod, results[k], x[k][0], y[k][0], 3.5);
		}
	    }
	    for(double l = -1e+10; l < 1e+10 && success; l += 1.51e+8) {
		size_t idx = 0;
	      	for(double m = -1e+10; m < 1e+10; m += 1.51e+8) {
			x[idx] = makeVecd(l);
			y[idx] = makeVecd(m);
			idx += 1;
		}
      		test_denormdp_dp_dp("test_Sleef_fmodd2_kvx", x, y, results, 134);
		for (size_t k = 0; k < 133 && success; k++) {
			checkAccuracy_d_d(mpfr_fmod, results[k], x[k][0], y[k][0], 3.5);
		}
	    }

	    free(x);
	    free(y);
	    free(results);
	    showResult(success);
    }
  
    //

    fprintf(stderr, "remainder : ");
    {
	    SLEEF_VECTOR_DOUBLE *x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*134);
	    SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*134);
	    SLEEF_VECTOR_DOUBLE *results = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*134);
	    for (double l = -10; l < 10 && success; l += 0.15) {
		size_t idx = 0;
	    	for(double m = -10; m < 10; m += 0.15) {
			x[idx] = makeVecd(l);
			y[idx] = makeVecd(m);
			idx += 1;
		}
      		test_denormdp_dp_dp("test_Sleef_remainderd2_kvx", x, y, results, 134);
		for (size_t k = 0; k < 134 && success; k++) {
			checkAccuracy_d_d(mpfr_remainder, results[k], x[k][0], y[k][0], 3.5);
		}
	    }
	    for(double l = -1e+10; l < 1e+10 && success; l += 1.51e+8) {
		size_t idx = 0;
	      	for(double m = -1e+10; m < 1e+10; m += 1.51e+8) {
			x[idx] = makeVecd(l);
			y[idx] = makeVecd(m);
			idx += 1;
		}
      		test_denormdp_dp_dp("test_Sleef_remainderd2_kvx", x, y, results, 134);
		for (size_t k = 0; k < 133 && success; k++) {
			checkAccuracy_d_d(mpfr_remainder, results[k], x[k][0], y[k][0], 3.5);
		}
	    }

	    free(x);
	    free(y);
	    free(results);
	    showResult(success);
    }
  
    //

    fprintf(stderr, "trunc : ");
    {
	    SLEEF_VECTOR_DOUBLE *x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*404);
	    SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*404);
	    for (int i = 0; i < 404; i++)
		    x[i] = makeVecd(i*0.5-100);
	    test_denormdp_dp("test_Sleef_truncd2_kvx", x, y, 404);
	    for (int i = 0; i < 404 && success; i++)
	    	    checkAccuracyNR_d(mpfr_trunc, y[i], x[i][0], 0);
	    //for(x = -100.5;x <= 100.5;x+=0.5) {
	    //  for(d = u2d(d2u(x)-3);d <= u2d(d2u(x)+3) && success;d = u2d(d2u(d)+1)) checkAccuracyNR_d(mpfr_trunc, child_trunc, d, 0);
	    //}
	    free(x);
	    free(y);

	    x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    for(int i = -5; i < 5; i++) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd((double)i*(double)j*0.7);
		}
	    	test_denormdp_dp("test_Sleef_truncd2_kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
	    		checkAccuracyNR_d(mpfr_trunc, y[k], x[k][0], 0);
		}
	    free(x);
	    free(y);
	   
	    x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*40);
	    y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*40);
	    double start = u2d(d2u((double)(INT64_C(1) << 52))-20), end = u2d(d2u((double)(INT64_C(1) << 52))+20);
	    for (int i = 0; i < 40; i++) {
	    	x[i] = makeVecd(start-20+i);
	    }
	    test_denormdp_dp("test_Sleef_truncd2_kvx", x, y, 40);
	    for (int i = 0; i < 40 && success; i++) checkAccuracyNR_d(mpfr_trunc, y[i], x[i][0], 0);

	    free(x);
	    free(y);
	    showResult(success);
    }
  
    //

    fprintf(stderr, "floor : ");
    {
	    SLEEF_VECTOR_DOUBLE *x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*404);
	    SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*404);
	    for (int i = 0; i < 404; i++)
		    x[i] = makeVecd(i*0.5-100);
	    test_denormdp_dp("test_Sleef_floord2_kvx", x, y, 404);
	    for (int i = 0; i < 404 && success; i++)
	    	    checkAccuracyNR_d(mpfr_floor, y[i], x[i][0], 0);
	    //for(x = -100.5;x <= 100.5;x+=0.5) {
	    //  for(d = u2d(d2u(x)-3);d <= u2d(d2u(x)+3) && success;d = u2d(d2u(d)+1)) checkAccuracyNR_d(mpfr_floor, child_trunc, d, 0);
	    //}
	    free(x);
	    free(y);

	    x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    for(int i = -10; i < 10; i++) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i*j*0.7);
		}
	    	test_denormdp_dp("test_Sleef_floord2_kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
	    		checkAccuracyNR_d(mpfr_floor, y[k], x[k][0], 0);
		}
	    free(x);
	    free(y);
	   
	    x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*40);
	    y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*40);
	    double start = u2d(d2u((double)(INT64_C(1) << 52))-20), end = u2d(d2u((double)(INT64_C(1) << 52))+20);
	    for (int i = 0; i < 40; i++) {
	    	x[i] = makeVecd(start-20+i);
	    }
	    test_denormdp_dp("test_Sleef_floord2_kvx", x, y, 40);
	    for (int i = 0; i < 40 && success; i++) checkAccuracyNR_d(mpfr_floor, y[i], x[i][0], 0);

	    free(x);
	    free(y);
	    showResult(success);
    }
  
    //

    fprintf(stderr, "ceil : ");
    {
	    SLEEF_VECTOR_DOUBLE *x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*404);
	    SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*404);
	    for (int i = 0; i < 404; i++)
		    x[i] = makeVecd(i*0.5-100);
	    test_denormdp_dp("test_Sleef_ceild2_kvx", x, y, 404);
	    for (int i = 0; i < 404 && success; i++)
	    	    checkAccuracyNR_d(mpfr_ceil, y[i], x[i][0], 0);
	    //for(x = -100.5;x <= 100.5;x+=0.5) {
	    //  for(d = u2d(d2u(x)-3);d <= u2d(d2u(x)+3) && success;d = u2d(d2u(d)+1)) checkAccuracyNR_d(mpfr_floor, child_trunc, d, 0);
	    //}
	    free(x);
	    free(y);

	    x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    for(int i = -10; i < 10; i++) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd((double)(i*j)*0.7);
		}
	    	test_denormdp_dp("test_Sleef_ceild2_kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
	    	    checkAccuracyNR_d(mpfr_ceil, y[k], x[k][0], 0);
	    }
	    free(x);
	    free(y);
	   
	    x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*40);
	    y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*40);
	    double start = u2d(d2u((double)(INT64_C(1) << 52))-20), end = u2d(d2u((double)(INT64_C(1) << 52))+20);
	    for (int i = 0; i < 40; i++) {
	    	x[i] = makeVecd(start-20+i);
	    }
	    test_denormdp_dp("test_Sleef_ceild2_kvx", x, y, 40);
	    for (int i = 0; i < 40 && success; i++) checkAccuracyNR_d(mpfr_ceil, y[i], x[i][0], 0);

	    free(x);
	    free(y);
	    showResult(success);
    }
  
    //

    fprintf(stderr, "round : ");
    {
	    SLEEF_VECTOR_DOUBLE *x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*404);
	    SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*404);
	    for (int i = 0; i < 404; i++)
		    x[i] = makeVecd(i*0.5-100);
	    test_denormdp_dp("test_Sleef_roundd2_kvx", x, y, 404);
	    for (int i = 0; i < 404 && success; i++)
	    	    checkAccuracyNR_d(mpfr_round, y[i], x[i][0], 0);
	    //for(x = -100.5;x <= 100.5;x+=0.5) {
	    //  for(d = u2d(d2u(x)-3);d <= u2d(d2u(x)+3) && success;d = u2d(d2u(d)+1)) checkAccuracyNR_d(mpfr_floor, child_trunc, d, 0);
	    //}
	    free(x);
	    free(y);

	    x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    for(int i = -10; i < 10; i++) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd((double)(i*j)*0.7);
		}
	    	test_denormdp_dp("test_Sleef_roundd2_kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
	    	    checkAccuracyNR_d(mpfr_round, y[k], x[k][0], 0);
	    }
	    free(x);
	    free(y);
	   
	    x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*40);
	    y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*40);
	    double start = u2d(d2u((double)(INT64_C(1) << 52))-20), end = u2d(d2u((double)(INT64_C(1) << 52))+20);
	    for (int i = 0; i < 40; i++) {
	    	x[i] = makeVecd(start-20+i);
	    }
	    test_denormdp_dp("test_Sleef_roundd2_kvx", x, y, 40);
	    for (int i = 0; i < 40 && success; i++) checkAccuracyNR_d(mpfr_round, y[i], x[i][0], 0);

	    free(x);
	    free(y);
	    showResult(success);
    }
  
    //

    fprintf(stderr, "rint : ");
    {
	    SLEEF_VECTOR_DOUBLE *x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*404);
	    SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*404);
	    for (int i = 0; i < 404; i++)
		    x[i] = makeVecd(i*0.5-100);
	    test_denormdp_dp("test_Sleef_rintd2_kvx", x, y, 404);
	    for (int i = 0; i < 404 && success; i++)
	    	    checkAccuracy_d(mpfr_rint, y[i], x[i][0], 0);
	    //for(x = -100.5;x <= 100.5;x+=0.5) {
	    //  for(d = u2d(d2u(x)-3);d <= u2d(d2u(x)+3) && success;d = u2d(d2u(d)+1)) checkAccuracyNR_d(mpfr_floor, child_trunc, d, 0);
	    //}
	    free(x);
	    free(y);

	    x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    for(int i = -10; i < 10; i++) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd((double)(i*j)*0.7);
		}
	    	test_denormdp_dp("test_Sleef_rintd2_kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
	    	    checkAccuracy_d(mpfr_rint, y[k], x[k][0], 0);
	    }
	    free(x);
	    free(y);
	   
	    x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*40);
	    y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*40);
	    double start = u2d(d2u((double)(INT64_C(1) << 52))-20), end = u2d(d2u((double)(INT64_C(1) << 52))+20);
	    for (int i = 0; i < 40; i++) {
	    	x[i] = makeVecd(start-20+i);
	    }
	    test_denormdp_dp("test_Sleef_rintd2_kvx", x, y, 40);
	    for (int i = 0; i < 40 && success; i++) checkAccuracy_d(mpfr_rint, y[i], x[i][0], 0);

	    free(x);
	    free(y);
	    showResult(success);
    }
  
    //
  
    fprintf(stderr, "sin : ");
    {
	    SLEEF_VECTOR_DOUBLE *x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    for (int i = -10; i < 10 && success; i++) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i+j*0.002);	
		}
		test_denormdp_dp("test_Sleef_sind2_u35kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_d(mpfr_sin, y[k], x[k][0], 3.5);
	    }
	    for (double i = 0; i < 2e+14 && success; i += 1e+13) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i+j*(1e+10+0.1) - 1e+14);
		}
		test_denormdp_dp("test_Sleef_sind2_u35kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_d(mpfr_sin, y[k], x[k][0], 3.5);
	    }
	    free(x);
	    free(y);

	    x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*920);
	    y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*920);
	    for(i = 0; i < 920; i++)
		    x[i] = makeVecd(pow(2.16, i));
	    test_denormdp_dp("test_Sleef_sind2_u35kvx", x, y, 920);
	    for (i = 0; i < 920 && success; i++)
	    	checkAccuracy_d(mpfr_sin, y[i], x[i][0], 3.5);
	    free(x);
	    free(y);
	    x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*40);
	    y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*40);
	    for(i64=(int64_t)-1e+14;i64<(int64_t)1e+14 && success;i64+=(int64_t)1e+12) {
	      double start = u2d(d2u(M_PI_4 * i64)-20);
	      for(i = 0; i < 40; i++) {
	      	x[i] = makeVecd(start+i);
	      }
	      test_denormdp_dp("test_Sleef_sind2_u35kvx", x, y, 40);
		
	      for (i = 0; i < 40 && success; i++)
	      	checkAccuracy_d(mpfr_sin, y[i], x[i][0], 3.5);
	    }

	    free(x);
	    free(y);
	    showResult(success);
    }

    //
  
    fprintf(stderr, "sin_u1 : ");
    {
	    SLEEF_VECTOR_DOUBLE *x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    for (int i = -10; i < 10 && success; i++) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i+j*0.002);	
		}
		test_denormdp_dp("test_Sleef_sind2_u10kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_d(mpfr_sin, y[k], x[k][0], 1);
	    }
	    for (double i = 0; i < 2e+14 && success; i += 1e+13) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i+j*(1e+10+0.1) - 1e+14);
		}
		test_denormdp_dp("test_Sleef_sind2_u10kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_d(mpfr_sin, y[k], x[k][0], 1);
	    }
	    free(x);
	    free(y);

	    x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*920);
	    y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*920);
	    for(i = 0; i < 920; i++)
		    x[i] = makeVecd(pow(2.16, i));
	    test_denormdp_dp("test_Sleef_sind2_u10kvx", x, y, 920);
	    for (i = 0; i < 920 && success; i++)
	    	checkAccuracy_d(mpfr_sin, y[i], x[i][0], 1);
	    free(x);
	    free(y);
	    x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*40);
	    y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*40);
	    for(i64=(int64_t)-1e+14;i64<(int64_t)1e+14 && success;i64+=(int64_t)1e+12) {
	      double start = u2d(d2u(M_PI_4 * i64)-20);
	      for(i = 0; i < 40; i++) {
	      	x[i] = makeVecd(start+i);
	      }
	      test_denormdp_dp("test_Sleef_sind2_u10kvx", x, y, 40);
		
	      for (i = 0; i < 40 && success; i++)
	      	checkAccuracy_d(mpfr_sin, y[i], x[i][0], 1);
	    }

	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "sin in sincos : ");
    {
	    SLEEF_VECTOR_DOUBLE *x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    Sleef_SLEEF_VECTOR_DOUBLE_2 *y = malloc(sizeof(Sleef_SLEEF_VECTOR_DOUBLE_2)*1000);
	    for (int i = -10; i < 10 && success; i++) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i+j*0.002);	
		}
		test_denormdp2_dp("test_Sleef_sincosd2_u35kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracyX_d(mpfr_sin, y[k], x[k][0], 3.5);
	    }
	    for (double i = 0; i < 2e+14 && success; i += 1e+13) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i+j*(1e+10+0.1) - 1e+14);
		}
		test_denormdp2_dp("test_Sleef_sincosd2_u35kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracyX_d(mpfr_sin, y[k], x[k][0], 3.5);
	    }
	    free(x);
	    free(y);

	    x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*920);
	    y = malloc(sizeof(Sleef_SLEEF_VECTOR_DOUBLE_2)*920);
	    for(i = 0; i < 920; i++)
		    x[i] = makeVecd(pow(2.16, i));
	    test_denormdp2_dp("test_Sleef_sincosd2_u35kvx", x, y, 920);
	    for (i = 0; i < 920 && success; i++)
	    	checkAccuracyX_d(mpfr_sin, y[i], x[i][0], 3.5);
	    free(x);
	    free(y);
	    x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*40);
	    y = malloc(sizeof(Sleef_SLEEF_VECTOR_DOUBLE_2)*40);
	    for(i=1;i<10000 && success;i+=31) {
	      double start = u2d(d2u(M_PI_4 * i)-20);
	      for(int k = 0; k < 40; k++) {
	      	x[k] = makeVecd(start+k);
	      }
	      test_denormdp2_dp("test_Sleef_sincosd2_u35kvx", x, y, 40);
		
	      for (int k = 0; k < 40 && success; k++)
	      	checkAccuracyX_d(mpfr_sin, y[k], x[k][0], 3.5);
	    }
	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "sin in sincos_u1 : ");
    {
	    SLEEF_VECTOR_DOUBLE *x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    Sleef_SLEEF_VECTOR_DOUBLE_2 *y = malloc(sizeof(Sleef_SLEEF_VECTOR_DOUBLE_2)*1000);
	    for (int i = -10; i < 10 && success; i++) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i+j*0.002);	
		}
		test_denormdp2_dp("test_Sleef_sincosd2_u10kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracyX_d(mpfr_sin, y[k], x[k][0], 1);
	    }
	    for (double i = 0; i < 2e+14 && success; i += 1e+13) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i+j*(1e+10+0.1) - 1e+14);
		}
		test_denormdp2_dp("test_Sleef_sincosd2_u10kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracyX_d(mpfr_sin, y[k], x[k][0], 1);
	    }
	    free(x);
	    free(y);

	    x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*920);
	    y = malloc(sizeof(Sleef_SLEEF_VECTOR_DOUBLE_2)*920);
	    for(i = 0; i < 920; i++)
		    x[i] = makeVecd(pow(2.16, i));
	    test_denormdp2_dp("test_Sleef_sincosd2_u10kvx", x, y, 920);
	    for (i = 0; i < 920 && success; i++)
	    	checkAccuracyX_d(mpfr_sin, y[i], x[i][0], 1);
	    free(x);
	    free(y);
	    x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*40);
	    y = malloc(sizeof(Sleef_SLEEF_VECTOR_DOUBLE_2)*40);
	    for(i=1;i<10000 && success;i+=31) {
	      double start = u2d(d2u(M_PI_4 * i)-20);
	      for(int k = 0; k < 40; k++) {
	      	x[k] = makeVecd(start+k);
	      }
	      test_denormdp2_dp("test_Sleef_sincosd2_u10kvx", x, y, 40);
		
	      for (int k = 0; k < 40 && success; k++)
	      	checkAccuracyX_d(mpfr_sin, y[k], x[k][0], 1);
	    }
	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    // 1280 > 1024(=maximum DP exponent) + 53(=number of bits in DP mantissa)
    mpfr_set_default_prec(1280);

    fprintf(stderr, "sin in sincospi_u35 : ");
    {
	    SLEEF_VECTOR_DOUBLE *x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    Sleef_SLEEF_VECTOR_DOUBLE_2 *y = malloc(sizeof(Sleef_SLEEF_VECTOR_DOUBLE_2)*1000);
	    for (double i = -10.1; i < 10 && success; i+=1) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i+j*0.0021);	
		}
		test_denormdp2_dp("test_Sleef_sincospid2_u35kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracyX_d(mpfr_sinpi, y[k], x[k][0], 3.5);
	    }
	    /*for (double i = 0; i < 2e+14 && success; i += 1e+13) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i+j*(1e+10+0.1) - 1e+14);
		}
		test_denormdp2_dp("test_Sleef_sincospid2_u35kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracyX_d(mpfr_sinpi, y[k], x[k][0], 3.5);
	    }*/
	    free(x);
	    free(y);
	    //for(d = -1e+8-0.1;d < 1e+8 && success;d += (1e+10 + 0.1)) checkAccuracyX_d(mpfr_sinpi, child_sincospi_u35, d, 3.5);
	    
	    x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*40);
	    y = malloc(sizeof(Sleef_SLEEF_VECTOR_DOUBLE_2)*40);
	    for(i=1;i<10000 && success;i+=31) {
	      double start = u2d(d2u(M_PI_4 * i)-20);
	      for(int k = 0; k < 40; k++) {
	      	x[k] = makeVecd(start+k);
	      }
	      test_denormdp2_dp("test_Sleef_sincospid2_u35kvx", x, y, 40);
		
	      for (int k = 0; k < 40 && success; k++)
	      	checkAccuracyX_d(mpfr_sinpi, y[k], x[k][0], 3.5);
	    }
	    free(x);
	    free(y);
	    x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*20);
	    y = malloc(sizeof(Sleef_SLEEF_VECTOR_DOUBLE_2)*20);
	    for(i=1;i<=20 && success;i++) {
	      double start = u2d(d2u(0.25 * i)-20);
	      for(int k = 0; k < 20; k++) {
	      	x[k] = makeVecd(start+k);
	      }
	      test_denormdp2_dp("test_Sleef_sincospid2_u35kvx", x, y, 20);
		
	      for (int k = 0; k < 20 && success; k++)
	      	checkAccuracyX_d(mpfr_sinpi, y[k], x[k][0], 3.5);
	    }
	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "sin in sincospi_u05 : ");
    {
	    SLEEF_VECTOR_DOUBLE *x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    Sleef_SLEEF_VECTOR_DOUBLE_2 *y = malloc(sizeof(Sleef_SLEEF_VECTOR_DOUBLE_2)*1000);
	    for (double i = -10.1; i < 10 && success; i+=1) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i+j*0.0021);	
		}
		test_denormdp2_dp("test_Sleef_sincospid2_u05kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracyX_d(mpfr_sinpi, y[k], x[k][0], 0.506);
	    }
	    /*for (double i = 0; i < 2e+14 && success; i += 1e+13) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i+j*(1e+10+0.1) - 1e+14);
		}
		test_denormdp2_dp("test_Sleef_sincospid2_u05kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracyX_d(mpfr_sinpi, y[k], x[k][0], 0.506);
	    }*/
	    free(x);
	    free(y);
	    //for(d = -1e+8-0.1;d < 1e+8 && success;d += (1e+10 + 0.1)) checkAccuracyX_d(mpfr_sinpi, child_sincospi_u05, d, 0.506);
	    
	    x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*40);
	    y = malloc(sizeof(Sleef_SLEEF_VECTOR_DOUBLE_2)*40);
	    for(i=1;i<10000 && success;i+=31) {
	      double start = u2d(d2u(M_PI_4 * i)-20);
	      for(int k = 0; k < 40; k++) {
	      	x[k] = makeVecd(start+k);
	      }
	      test_denormdp2_dp("test_Sleef_sincospid2_u05kvx", x, y, 40);
		
	      for (int k = 0; k < 40 && success; k++)
	      	checkAccuracyX_d(mpfr_sinpi, y[k], x[k][0], 0.506);
	    }
	    free(x);
	    free(y);
	    x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*20);
	    y = malloc(sizeof(Sleef_SLEEF_VECTOR_DOUBLE_2)*20);
	    for(i=1;i<=20 && success;i++) {
	      double start = u2d(d2u(0.25 * i)-20);
	      for(int k = 0; k < 20; k++) {
	      	x[k] = makeVecd(start+k);
	      }
	      test_denormdp2_dp("test_Sleef_sincospid2_u05kvx", x, y, 20);
		
	      for (int k = 0; k < 20 && success; k++)
	      	checkAccuracyX_d(mpfr_sinpi, y[k], x[k][0], 0.506);
	    }
	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "sinpi_u05 : ");
    {
	    SLEEF_VECTOR_DOUBLE *x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    for (double i = -10.1; i < 10 && success; i+=1) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i+j*0.0021);	
		}
		test_denormdp_dp("test_Sleef_sinpid2_u05kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_d(mpfr_sinpi, y[k], x[k][0], 0.506);
	    }
	    /*for (double i = 0; i < 2e+14 && success; i += 1e+13) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i+j*(1e+10+0.1) - 1e+14);
		}
		test_denormdp_dp("test_Sleef_sinpid2_u05kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_d(mpfr_sinpi, y[k], x[k][0], 0.506);
	    }*/
	    free(x);
	    free(y);
	    //for(d = -1e+8-0.1;d < 1e+8 && success;d += (1e+10 + 0.1)) checkAccuracy_d(mpfr_sinpi, child_sinpi_u05, d, 0.506);
	    
	    x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*40);
	    y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*40);
	    for(i=1;i<10000 && success;i+=31) {
	      double start = u2d(d2u(M_PI_4 * i)-20);
	      for(int k = 0; k < 40; k++) {
	      	x[k] = makeVecd(start+k);
	      }
	      test_denormdp_dp("test_Sleef_sinpid2_u05kvx", x, y, 40);
		
	      for (int k = 0; k < 40 && success; k++)
	      	checkAccuracy_d(mpfr_sinpi, y[k], x[k][0], 0.506);
	    }
	    free(x);
	    free(y);
	    x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*20);
	    y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*20);
	    for(i=1;i<=20 && success;i++) {
	      double start = u2d(d2u(0.25 * i)-20);
	      for(int k = 0; k < 20; k++) {
	      	x[k] = makeVecd(start+k);
	      }
	      test_denormdp_dp("test_Sleef_sinpid2_u05kvx", x, y, 20);
		
	      for (int k = 0; k < 20 && success; k++)
	      	checkAccuracy_d(mpfr_sinpi, y[k], x[k][0], 0.506);
	    }
	    free(x);
	    free(y);
	    showResult(success);
    }
    
    //

    fprintf(stderr, "cospi_u05 : ");
    {
	    SLEEF_VECTOR_DOUBLE *x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    for (double i = -10.1; i < 10 && success; i+=1) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i+j*0.0021);	
		}
		test_denormdp_dp("test_Sleef_cospid2_u05kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_d(mpfr_cospi, y[k], x[k][0], 0.506);
	    }
	    /*for (double i = 0; i < 2e+14 && success; i += 1e+13) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i+j*(1e+10+0.1) - 1e+14);
		}
		test_denormdp_dp("test_Sleef_cospid2_u05kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_d(mpfr_cospi, y[k], x[k][0], 0.506);
	    }*/
	    free(x);
	    free(y);
	    //for(d = -1e+8-0.1;d < 1e+8 && success;d += (1e+10 + 0.1)) checkAccuracy_d(mpfr_cospi, child_cospi_u05, d, 0.506);
	    
	    x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*40);
	    y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*40);
	    for(i=1;i<10000 && success;i+=31) {
	      double start = u2d(d2u(M_PI_4 * i)-20);
	      for(int k = 0; k < 40; k++) {
	      	x[k] = makeVecd(start+k);
	      }
	      test_denormdp_dp("test_Sleef_cospid2_u05kvx", x, y, 40);
		
	      for (int k = 0; k < 40 && success; k++)
	      	checkAccuracy_d(mpfr_cospi, y[k], x[k][0], 0.506);
	    }
	    free(x);
	    free(y);
	    x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*20);
	    y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*20);
	    for(i=1;i<=20 && success;i++) {
	      double start = u2d(d2u(0.25 * i)-20);
	      for(int k = 0; k < 20; k++) {
	      	x[k] = makeVecd(start+k);
	      }
	      test_denormdp_dp("test_Sleef_cospid2_u05kvx", x, y, 20);
		
	      for (int k = 0; k < 20 && success; k++)
	      	checkAccuracy_d(mpfr_cospi, y[k], x[k][0], 0.506);
	    }
	    free(x);
	    free(y);
	    showResult(success);
    }

    mpfr_set_default_prec(64);
  
    //

    fprintf(stderr, "cos : ");
    {
	    SLEEF_VECTOR_DOUBLE *x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    for (int i = -10; i < 10 && success; i++) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i+j*0.002);	
		}
		test_denormdp_dp("test_Sleef_cosd2_u35kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_d(mpfr_cos, y[k], x[k][0], 3.5);
	    }
	    for (double i = 0; i < 2e+14 && success; i += 1e+13) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i+j*(1e+10+0.1) - 1e+14);
		}
		test_denormdp_dp("test_Sleef_cosd2_u35kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_d(mpfr_cos, y[k], x[k][0], 3.5);
	    }
	    free(x);
	    free(y);

	    x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*920);
	    y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*920);
	    for(i = 0; i < 920; i++)
		    x[i] = makeVecd(pow(2.16, i));
	    test_denormdp_dp("test_Sleef_cosd2_u35kvx", x, y, 920);
	    for (i = 0; i < 920 && success; i++)
	    	checkAccuracy_d(mpfr_cos, y[i], x[i][0], 3.5);
	    free(x);
	    free(y);
	    x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*40);
	    y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*40);
	    for(i64=(int64_t)-1e+14;i64<(int64_t)1e+14 && success;i64+=(int64_t)1e+12) {
	      double start = u2d(d2u(M_PI_4 * i64)-20);
	      for(i = 0; i < 40; i++) {
	      	x[i] = makeVecd(start+i);
	      }
	      test_denormdp_dp("test_Sleef_cosd2_u35kvx", x, y, 40);
		
	      for (i = 0; i < 40 && success; i++)
	      	checkAccuracy_d(mpfr_cos, y[i], x[i][0], 3.5);
	    }

	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "cos_u1 : ");
    {
	    SLEEF_VECTOR_DOUBLE *x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    for (int i = -10; i < 10 && success; i++) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i+j*0.002);	
		}
		test_denormdp_dp("test_Sleef_cosd2_u10kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_d(mpfr_cos, y[k], x[k][0], 1.0);
	    }
	    for (double i = 0; i < 2e+14 && success; i += 1e+13) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i+j*(1e+10+0.1) - 1e+14);
		}
		test_denormdp_dp("test_Sleef_cosd2_u10kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_d(mpfr_cos, y[k], x[k][0], 1.0);
	    }
	    free(x);
	    free(y);

	    x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*920);
	    y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*920);
	    for(i = 0; i < 920; i++)
		    x[i] = makeVecd(pow(2.16, i));
	    test_denormdp_dp("test_Sleef_cosd2_u10kvx", x, y, 920);
	    for (i = 0; i < 920 && success; i++)
	    	checkAccuracy_d(mpfr_cos, y[i], x[i][0], 1.0);
	    free(x);
	    free(y);
	    x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*40);
	    y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*40);
	    for(i64=(int64_t)-1e+14;i64<(int64_t)1e+14 && success;i64+=(int64_t)1e+12) {
	      double start = u2d(d2u(M_PI_4 * i64)-20);
	      for(i = 0; i < 40; i++) {
	      	x[i] = makeVecd(start+i);
	      }
	      test_denormdp_dp("test_Sleef_cosd2_u10kvx", x, y, 40);
		
	      for (i = 0; i < 40 && success; i++)
	      	checkAccuracy_d(mpfr_cos, y[i], x[i][0], 1.0);
	    }

	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "cos in sincos : ");
    {
	    SLEEF_VECTOR_DOUBLE *x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    Sleef_SLEEF_VECTOR_DOUBLE_2 *y = malloc(sizeof(Sleef_SLEEF_VECTOR_DOUBLE_2)*1000);
	    for (int i = -10; i < 10 && success; i++) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i+j*0.002);	
		}
		test_denormdp2_dp("test_Sleef_sincosd2_u35kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracyY_d(mpfr_cos, y[k], x[k][0], 3.5);
	    }
	    for (double i = 0; i < 2e+14 && success; i += 1e+13) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i+j*(1e+10+0.1) - 1e+14);
		}
		test_denormdp2_dp("test_Sleef_sincosd2_u35kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracyY_d(mpfr_cos, y[k], x[k][0], 3.5);
	    }
	    free(x);
	    free(y);

	    x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*920);
	    y = malloc(sizeof(Sleef_SLEEF_VECTOR_DOUBLE_2)*920);
	    for(i = 0; i < 920; i++)
		    x[i] = makeVecd(pow(2.16, i));
	    test_denormdp2_dp("test_Sleef_sincosd2_u35kvx", x, y, 920);
	    for (i = 0; i < 920 && success; i++)
	    	checkAccuracyY_d(mpfr_cos, y[i], x[i][0], 3.5);
	    free(x);
	    free(y);
	    x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*40);
	    y = malloc(sizeof(Sleef_SLEEF_VECTOR_DOUBLE_2)*40);
	    for(i=1;i<10000 && success;i+=31) {
	      double start = u2d(d2u(M_PI_4 * i)-20);
	      for(int k = 0; k < 40; k++) {
	      	x[k] = makeVecd(start+k);
	      }
	      test_denormdp2_dp("test_Sleef_sincosd2_u35kvx", x, y, 40);
		
	      for (int k = 0; k < 40 && success; k++)
	      	checkAccuracyY_d(mpfr_cos, y[k], x[k][0], 3.5);
	    }
	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "cos in sincos_u1 : ");
    {
	    SLEEF_VECTOR_DOUBLE *x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    Sleef_SLEEF_VECTOR_DOUBLE_2 *y = malloc(sizeof(Sleef_SLEEF_VECTOR_DOUBLE_2)*1000);
	    for (int i = -10; i < 10 && success; i++) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i+j*0.002);	
		}
		test_denormdp2_dp("test_Sleef_sincosd2_u10kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracyY_d(mpfr_cos, y[k], x[k][0], 1.0);
	    }
	    for (double i = 0; i < 2e+14 && success; i += 1e+13) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i+j*(1e+10+0.1) - 1e+14);
		}
		test_denormdp2_dp("test_Sleef_sincosd2_u10kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracyY_d(mpfr_cos, y[k], x[k][0], 1.0);
	    }
	    free(x);
	    free(y);

	    x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*920);
	    y = malloc(sizeof(Sleef_SLEEF_VECTOR_DOUBLE_2)*920);
	    for(i = 0; i < 920; i++)
		    x[i] = makeVecd(pow(2.16, i));
	    test_denormdp2_dp("test_Sleef_sincosd2_u10kvx", x, y, 920);
	    for (i = 0; i < 920 && success; i++)
	    	checkAccuracyY_d(mpfr_cos, y[i], x[i][0], 1.0);
	    free(x);
	    free(y);
	    x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*40);
	    y = malloc(sizeof(Sleef_SLEEF_VECTOR_DOUBLE_2)*40);
	    for(i=1;i<10000 && success;i+=31) {
	      double start = u2d(d2u(M_PI_4 * i)-20);
	      for(int k = 0; k < 40; k++) {
	      	x[k] = makeVecd(start+k);
	      }
	      test_denormdp2_dp("test_Sleef_sincosd2_u10kvx", x, y, 40);
		
	      for (int k = 0; k < 40 && success; k++)
	      	checkAccuracyY_d(mpfr_cos, y[k], x[k][0], 1.0);
	    }
	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    mpfr_set_default_prec(1280);

    fprintf(stderr, "cos in sincospi_u35 : ");
    {
	    SLEEF_VECTOR_DOUBLE *x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    Sleef_SLEEF_VECTOR_DOUBLE_2 *y = malloc(sizeof(Sleef_SLEEF_VECTOR_DOUBLE_2)*1000);
	    for (double i = -10.1; i < 10 && success; i+=1) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i+j*0.0021);	
		}
		test_denormdp2_dp("test_Sleef_sincospid2_u35kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracyY_d(mpfr_cospi, y[k], x[k][0], 3.5);
	    }
	    /*for (double i = 0; i < 2e+14 && success; i += 1e+13) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i+j*(1e+10+0.1) - 1e+14);
		}
		test_denormdp2_dp("test_Sleef_sincospid2_u35kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracyY_d(mpfr_cospi, y[k], x[k][0], 3.5);
	    }*/
	    free(x);
	    free(y);
	    //for(d = -1e+8-0.1;d < 1e+8 && success;d += (1e+10 + 0.1)) checkAccuracyY_d(mpfr_cospi, child_sincospi_u35, d, 3.5);
	    
	    x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*40);
	    y = malloc(sizeof(Sleef_SLEEF_VECTOR_DOUBLE_2)*40);
	    for(i=1;i<10000 && success;i+=31) {
	      double start = u2d(d2u(M_PI_4 * i)-20);
	      for(int k = 0; k < 40; k++) {
	      	x[k] = makeVecd(start+k);
	      }
	      test_denormdp2_dp("test_Sleef_sincospid2_u35kvx", x, y, 40);
		
	      for (int k = 0; k < 40 && success; k++)
	      	checkAccuracyY_d(mpfr_cospi, y[k], x[k][0], 3.5);
	    }
	    free(x);
	    free(y);
	    x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*20);
	    y = malloc(sizeof(Sleef_SLEEF_VECTOR_DOUBLE_2)*20);
	    for(i=1;i<=20 && success;i++) {
	      double start = u2d(d2u(0.25 * i)-20);
	      for(int k = 0; k < 20; k++) {
	      	x[k] = makeVecd(start+k);
	      }
	      test_denormdp2_dp("test_Sleef_sincospid2_u35kvx", x, y, 20);
		
	      for (int k = 0; k < 20 && success; k++)
	      	checkAccuracyY_d(mpfr_cospi, y[k], x[k][0], 3.5);
	    }
	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "cos in sincospi_u05 : ");
    {
	    SLEEF_VECTOR_DOUBLE *x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    Sleef_SLEEF_VECTOR_DOUBLE_2 *y = malloc(sizeof(Sleef_SLEEF_VECTOR_DOUBLE_2)*1000);
	    for (double i = -10.1; i < 10 && success; i+=1) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i+j*0.0021);	
		}
		test_denormdp2_dp("test_Sleef_sincospid2_u05kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracyY_d(mpfr_cospi, y[k], x[k][0], 0.506);
	    }
	    /*for (double i = 0; i < 2e+14 && success; i += 1e+13) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i+j*(1e+10+0.1) - 1e+14);
		}
		test_denormdp2_dp("test_Sleef_sincospid2_u05kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracyY_d(mpfr_cospi, y[k], x[k][0], 0.506);
	    }*/
	    free(x);
	    free(y);
	    //for(d = -1e+8-0.1;d < 1e+8 && success;d += (1e+10 + 0.1)) checkAccuracyY_d(mpfr_cospi, child_sincospi_u35, d, 0.506);
	    
	    x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*40);
	    y = malloc(sizeof(Sleef_SLEEF_VECTOR_DOUBLE_2)*40);
	    for(i=1;i<10000 && success;i+=31) {
	      double start = u2d(d2u(M_PI_4 * i)-20);
	      for(int k = 0; k < 40; k++) {
	      	x[k] = makeVecd(start+k);
	      }
	      test_denormdp2_dp("test_Sleef_sincospid2_u05kvx", x, y, 40);
		
	      for (int k = 0; k < 40 && success; k++)
	      	checkAccuracyY_d(mpfr_cospi, y[k], x[k][0], 0.506);
	    }
	    free(x);
	    free(y);
	    x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*20);
	    y = malloc(sizeof(Sleef_SLEEF_VECTOR_DOUBLE_2)*20);
	    for(i=1;i<=20 && success;i++) {
	      double start = u2d(d2u(0.25 * i)-20);
	      for(int k = 0; k < 20; k++) {
	      	x[k] = makeVecd(start+k);
	      }
	      test_denormdp2_dp("test_Sleef_sincospid2_u05kvx", x, y, 20);
		
	      for (int k = 0; k < 20 && success; k++)
	      	checkAccuracyY_d(mpfr_cospi, y[k], x[k][0], 0.506);
	    }
	    free(x);
	    free(y);
	    showResult(success);
    }

    mpfr_set_default_prec(64);
  
    //

    fprintf(stderr, "tan : ");
    {
	    SLEEF_VECTOR_DOUBLE *x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    for (int i = -10; i < 10; i++) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i + j*0.002);
		}
		test_denormdp_dp("test_Sleef_tand2_u35kvx", x, y, 1000);

		for (int k = 0; k < 1000; k++)
			checkAccuracy_d(mpfr_tan, y[k], x[k][0], 3.5);
	    }
	    for (double i = 0; i < 2e+7 && success; i += 1e+6) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i+j*(1000.1) - 1e+7);
		}
		test_denormdp_dp("test_Sleef_tand2_u35kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_d(mpfr_tan, y[k], x[k][0], 3.5);
	    }

	    for (double i = 0; i < 2e+14 && success; i += 1e+13) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i+j*(1e+10+0.1) - 1e+14);
		}
		test_denormdp_dp("test_Sleef_tand2_u35kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_d(mpfr_tan, y[k], x[k][0], 3.5);
	    }
	    free(x);
	    free(y);

	    x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*920);
	    y = malloc(sizeof(Sleef_SLEEF_VECTOR_DOUBLE_2)*920);
	    for(i = 0; i < 920; i++)
		    x[i] = makeVecd(pow(2.16, i));
	    test_denormdp_dp("test_Sleef_tand2_u35kvx", x, y, 920);
	    for (i = 0; i < 920 && success; i++)
	    	checkAccuracy_d(mpfr_tan, y[i], x[i][0], 3.5);
	    free(x);
	    free(y);
	    x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*40);
	    y = malloc(sizeof(Sleef_SLEEF_VECTOR_DOUBLE_2)*40);
	    for(i=1;i<10000 && success;i+=31) {
	      double start = u2d(d2u(M_PI_4 * i)-20);
	      for(int k = 0; k < 40; k++) {
	      	x[k] = makeVecd(start+k);
	      }
	      test_denormdp_dp("test_Sleef_tand2_u35kvx", x, y, 40);
		
	      for (int k = 0; k < 40 && success; k++)
	      	checkAccuracy_d(mpfr_tan, y[k], x[k][0], 3.5);
	    }
	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "tan_u1 : ");
    {
	    SLEEF_VECTOR_DOUBLE *x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    for (int i = -10; i < 10; i++) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i + j*0.002);
		}
		test_denormdp_dp("test_Sleef_tand2_u10kvx", x, y, 1000);

		for (int k = 0; k < 1000; k++)
			checkAccuracy_d(mpfr_tan, y[k], x[k][0], 1.0);
	    }
	    for (double i = 0; i < 2e+7 && success; i += 1e+6) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i+j*(1000.1) - 1e+7);
		}
		test_denormdp_dp("test_Sleef_tand2_u10kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_d(mpfr_tan, y[k], x[k][0], 1.0);
	    }

	    for (double i = 0; i < 2e+14 && success; i += 1e+13) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i+j*(1e+10+0.1) - 1e+14);
		}
		test_denormdp_dp("test_Sleef_tand2_u10kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_d(mpfr_tan, y[k], x[k][0], 1.0);
	    }
	    free(x);
	    free(y);

	    x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*920);
	    y = malloc(sizeof(Sleef_SLEEF_VECTOR_DOUBLE_2)*920);
	    for(i = 0; i < 920; i++)
		    x[i] = makeVecd(pow(2.16, i));
	    test_denormdp_dp("test_Sleef_tand2_u10kvx", x, y, 920);
	    for (i = 0; i < 920 && success; i++)
	    	checkAccuracy_d(mpfr_tan, y[i], x[i][0], 1.0);
	    free(x);
	    free(y);
	    x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*40);
	    y = malloc(sizeof(Sleef_SLEEF_VECTOR_DOUBLE_2)*40);
	    for(i=1;i<10000 && success;i+=31) {
	      double start = u2d(d2u(M_PI_4 * i)-20);
	      for(int k = 0; k < 40; k++) {
	      	x[k] = makeVecd(start+k);
	      }
	      test_denormdp_dp("test_Sleef_tand2_u10kvx", x, y, 40);
		
	      for (int k = 0; k < 40 && success; k++)
	      	checkAccuracy_d(mpfr_tan, y[k], x[k][0], 1.0);
	    }
	    free(x);
	    free(y);
	    showResult(success);
    }

    //
  
    fprintf(stderr, "log : ");
    {
	    SLEEF_VECTOR_DOUBLE *x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    for (double i = 0.0001; i < 10 && success; i+=1) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i + j*0.001);
		}
		test_denormdp_dp("test_Sleef_logd2_u35kvx", x, y, 1000);

		for (int k = 0; k < 1000; k++)
			checkAccuracy_d(mpfr_log, y[k], x[k][0], 3.5);
	    }

	    for (double i = 0.0001; i < 10000 && success; i+=1000) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i + j*1.1);
		}
		test_denormdp_dp("test_Sleef_logd2_u35kvx", x, y, 1000);

		for (int k = 0; k < 1000; k++)
			checkAccuracy_d(mpfr_log, y[k], x[k][0], 3.5);
	    }
	    free(x);
	    free(y);

	    x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*201);
	    y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*201);
	    for (i = 0; i <= 200 && success; i++) {
	    	x[i] = makeVecd(pow(2.1, i*10 - 1000));
	    }
	    test_denormdp_dp("test_Sleef_logd2_u35kvx", x, y, 201);
	    for (int k = 0; k < 201; k++)
		checkAccuracy_d(mpfr_log, y[k], x[k][0], 3.5);
	    free(x);
	    free(y);

	    x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    for (i = 0; i < 1000; i++) {
	    	x[i] = makeVecd(DBL_MAX * pow(0.9314821319758632, i*10));
	    }
	    test_denormdp_dp("test_Sleef_logd2_u35kvx", x, y, 1000);
	    for (int k = 0; k < 1000; k++)
		checkAccuracy_d(mpfr_log, y[k], x[k][0], 3.5);

	    for (i = 0; i < 1000; i++) {
	    	x[i] = makeVecd(pow(0.933254300796991, i*10));
	    }
	    test_denormdp_dp("test_Sleef_logd2_u35kvx", x, y, 1000);
	    for (int k = 0; k < 1000; k++)
		checkAccuracy_d(mpfr_log, y[k], x[k][0], 3.5);
	    
	    for (i = 0; i < 1000; i++) {
	    	x[i] = makeVecd(DBL_MIN * pow(0.996323, i*10));
	    }
	    test_denormdp_dp("test_Sleef_logd2_u35kvx", x, y, 1000);
	    for (int k = 0; k < 1000; k++)
		checkAccuracy_d(mpfr_log, y[k], x[k][0], 3.5);
	    
	    free(x);
	    free(y);
	    showResult(success);
    }

    //
  
    fprintf(stderr, "log_u1 : ");
    {
	    SLEEF_VECTOR_DOUBLE *x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    for (double i = 0.0001; i < 10 && success; i+=1) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i + j*0.001);
		}
		test_denormdp_dp("test_Sleef_logd2_u10kvx", x, y, 1000);

		for (int k = 0; k < 1000; k++)
			checkAccuracy_d(mpfr_log, y[k], x[k][0], 1.0);
	    }

	    for (double i = 0.0001; i < 10000 && success; i+=1000) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i + j*1.1);
		}
		test_denormdp_dp("test_Sleef_logd2_u10kvx", x, y, 1000);

		for (int k = 0; k < 1000; k++)
			checkAccuracy_d(mpfr_log, y[k], x[k][0], 1.0);
	    }
	    free(x);
	    free(y);

	    x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*201);
	    y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*201);
	    for (i = 0; i <= 200 && success; i++) {
	    	x[i] = makeVecd(pow(2.1, i*10 - 1000));
	    }
	    test_denormdp_dp("test_Sleef_logd2_u10kvx", x, y, 201);
	    for (int k = 0; k < 201; k++)
		checkAccuracy_d(mpfr_log, y[k], x[k][0], 1.0);
	    free(x);
	    free(y);

	    x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    for (i = 0; i < 1000; i++) {
	    	x[i] = makeVecd(DBL_MAX * pow(0.9314821319758632, i*10));
	    }
	    test_denormdp_dp("test_Sleef_logd2_u10kvx", x, y, 1000);
	    for (int k = 0; k < 1000; k++)
		checkAccuracy_d(mpfr_log, y[k], x[k][0], 1.0);

	    for (i = 0; i < 1000; i++) {
	    	x[i] = makeVecd(pow(0.933254300796991, i*10));
	    }
	    test_denormdp_dp("test_Sleef_logd2_u10kvx", x, y, 1000);
	    for (int k = 0; k < 1000; k++)
		checkAccuracy_d(mpfr_log, y[k], x[k][0], 1.0);
	    
	    for (i = 0; i < 1000; i++) {
	    	x[i] = makeVecd(DBL_MIN * pow(0.996323, i*10));
	    }
	    test_denormdp_dp("test_Sleef_logd2_u10kvx", x, y, 1000);
	    for (int k = 0; k < 1000; k++)
		checkAccuracy_d(mpfr_log, y[k], x[k][0], 1.0);
	    
	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "exp : ");
    {
	    SLEEF_VECTOR_DOUBLE *x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    for (int i = -10; i < 10; i+=2) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i + j*0.002);
		}
		test_denormdp_dp("test_Sleef_expd2_u10kvx", x, y, 1000);

		for (int k = 0; k < 1000; k++)
			checkAccuracy_d(mpfr_exp, y[k], x[k][0], 1.0);
	    }
	    
	    for (int i = 0; i < 2 && success; i++) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i*1000 + j*1.1 -1000);
		}
		test_denormdp_dp("test_Sleef_expd2_u10kvx", x, y, 1000);

		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_d(mpfr_exp, y[k], x[k][0], 1.0);
	    }
	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "pow : ");
    {
	    SLEEF_VECTOR_DOUBLE *x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*333);
	    SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*333);
	    SLEEF_VECTOR_DOUBLE *results = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*333);
	    for(double i = 0.1; i < 100 && success; i += 0.6) {
	      for(int j = 0; j < 333 && success; j ++) {
		      x[j] = makeVecd(i);
		      y[j] = makeVecd(j*0.6 - 100);
	      }
	      test_denormdp_dp_dp("test_Sleef_powd2_u10kvx", x, y, results, 333);
	      for (int k = 0; k < 333; k++)
	      	checkAccuracy_d_d(mpfr_pow, results[k], x[k][0], y[k][0], 1.0);
	      
	    }
	    free(x);
	    free(y);
	    free(results);
	    
	    x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    results = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    for (int i = -10; i < 10; i++) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd((double)i*100.0 + (double)j*0.1);
			y[j] = makeVecd((double)i*0.6);
		}
	        test_denormdp_dp_dp("test_Sleef_powd2_u10kvx", x, y, results, 1000);	
	        for (int k = 0; k < 1000 && success; k++)
	       	  checkAccuracy_d_d(mpfr_pow, results[k], x[k][0], y[k][0], 1.0);
	    }
	    free(x);
	    free(y);
	    free(results);
	    showResult(success);
    }

    //

    if (!deterministicMode) {
      fprintf(stderr, "sqrt : ");
      {
      	      SLEEF_VECTOR_DOUBLE *x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	      SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	      for (int i = -10000; i < 10000 && success; i+=2000) {
	      	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i + j*2.1);
		}
		test_denormdp_dp("test_Sleef_sqrtd2_kvx", x, y, 1000);
	        for (int k = 0; k < 1000 && success; k++)
	       	  checkAccuracy_d(mpfr_sqrt, y[k], x[k][0], 1.0);
	      }
	      free(x);
	      free(y);

	      x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*200);
	      y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*200);
	      for (i = 0; i < 200; i++) {
	      	x[i] = makeVecd(pow(2.1, i*10 -1000));
	      }
	      test_denormdp_dp("test_Sleef_sqrtd2_kvx", x, y, 200);
	      for (int k = 0; k < 200 && success; k++)
	       	checkAccuracy_d(mpfr_sqrt, y[k], x[k][0], 1.0);
		
	      free(x);
	      free(y);
	      showResult(success);
      }

      //

      fprintf(stderr, "sqrt_u05 : ");
      {
      	      SLEEF_VECTOR_DOUBLE *x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	      SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	      for (int i = -10000; i < 10000 && success; i+=2000) {
	      	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i + j*2.1);
		}
		test_denormdp_dp("test_Sleef_sqrtd2_u05kvx", x, y, 1000);
	        for (int k = 0; k < 1000 && success; k++)
	       	  checkAccuracy_d(mpfr_sqrt, y[k], x[k][0], 0.506);
	      }
	      free(x);
	      free(y);

	      x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*200);
	      y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*200);
	      for (i = 0; i < 200; i++) {
	      	x[i] = makeVecd(pow(2.1, i*10 -1000));
	      }
	      test_denormdp_dp("test_Sleef_sqrtd2_u05kvx", x, y, 200);
	      for (int k = 0; k < 200 && success; k++)
	       	checkAccuracy_d(mpfr_sqrt, y[k], x[k][0], 0.506);
		
	      free(x);
	      free(y);
	      showResult(success);
      }

      //

      fprintf(stderr, "sqrt_u35 : ");
      {
      	      SLEEF_VECTOR_DOUBLE *x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	      SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	      for (int i = -10000; i < 10000 && success; i+=2000) {
	      	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i + j*2.1);
		}
		test_denormdp_dp("test_Sleef_sqrtd2_u05kvx", x, y, 1000);
	        for (int k = 0; k < 1000 && success; k++)
	       	  checkAccuracy_d(mpfr_sqrt, y[k], x[k][0], 0.506);
	      }
	      free(x);
	      free(y);

	      x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*200);
	      y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*200);
	      for (i = 0; i < 200; i++) {
	      	x[i] = makeVecd(pow(2.1, i*10 -1000));
	      }
	      test_denormdp_dp("test_Sleef_sqrtd2_u05kvx", x, y, 200);
	      for (int k = 0; k < 200 && success; k++)
	       	checkAccuracy_d(mpfr_sqrt, y[k], x[k][0], 0.506);
		
	      free(x);
	      free(y);
	      showResult(success);
      }
    }

    //

    fprintf(stderr, "cbrt : ");
      {
      	      SLEEF_VECTOR_DOUBLE *x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	      SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	      for (int i = -10000; i < 10000 && success; i+=2000) {
	      	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i + j*2.1);
		}
		test_denormdp_dp("test_Sleef_cbrtd2_u35kvx", x, y, 1000);
	        for (int k = 0; k < 1000 && success; k++)
	       	  checkAccuracy_d(mpfr_cbrt, y[k], x[k][0], 3.5);
	      }
	      free(x);
	      free(y);

	      x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*200);
	      y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*200);
	      for (i = 0; i < 200; i++) {
	      	x[i] = makeVecd(pow(2.1, i*10 -1000));
	      }
	      test_denormdp_dp("test_Sleef_cbrtd2_u35kvx", x, y, 200);
	      for (int k = 0; k < 200 && success; k++)
	       	checkAccuracy_d(mpfr_cbrt, y[k], x[k][0], 3.5);
		
	      free(x);
	      free(y);
	      showResult(success);
      }
  
    //

    fprintf(stderr, "cbrt_u1 : ");
      {
      	      SLEEF_VECTOR_DOUBLE *x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	      SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	      for (int i = -10000; i < 10000 && success; i+=2000) {
	      	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i + j*2.1);
		}
		test_denormdp_dp("test_Sleef_cbrtd2_u10kvx", x, y, 1000);
	        for (int k = 0; k < 1000 && success; k++)
	       	  checkAccuracy_d(mpfr_cbrt, y[k], x[k][0], 1.0);
	      }
	      free(x);
	      free(y);

	      x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*200);
	      y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*200);
	      for (i = 0; i < 200; i++) {
	      	x[i] = makeVecd(pow(2.1, i*10 -1000));
	      }
	      test_denormdp_dp("test_Sleef_cbrtd2_u10kvx", x, y, 200);
	      for (int k = 0; k < 200 && success; k++)
	       	checkAccuracy_d(mpfr_cbrt, y[k], x[k][0], 1.0);
		
	      free(x);
	      free(y);
	      showResult(success);
      }

    //

    fprintf(stderr, "asin : ");
    {
	    SLEEF_VECTOR_DOUBLE *x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    for (double i = -1; i < 1 && success; i += 0.2) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i + j*0.0002);
		}
		test_denormdp_dp("test_Sleef_asind2_u35kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_d(mpfr_asin, y[k], x[k][0], 3.5);
	    }

	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "asin_u1 : ");
    {
	    SLEEF_VECTOR_DOUBLE *x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    for (double i = -1; i < 1 && success; i += 0.2) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i + j*0.0002);
		}
		test_denormdp_dp("test_Sleef_asind2_u10kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_d(mpfr_asin, y[k], x[k][0], 1.0);
	    }

	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "acos : ");
    {
	    SLEEF_VECTOR_DOUBLE *x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    for (double i = -1; i < 1 && success; i += 0.2) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i + j*0.0002);
		}
		test_denormdp_dp("test_Sleef_acosd2_u35kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_d(mpfr_acos, y[k], x[k][0], 3.5);
	    }

	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "acos_u1 : ");
    {
	    SLEEF_VECTOR_DOUBLE *x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    for (double i = -1; i < 1 && success; i += 0.2) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i + j*0.0002);
		}
		test_denormdp_dp("test_Sleef_acosd2_u10kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_d(mpfr_acos, y[k], x[k][0], 1.0);
	    }

	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "atan : ");
    {
	    SLEEF_VECTOR_DOUBLE *x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    for (int i = -10; i < 10 && success; i++) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i + j*0.002);
		}
		test_denormdp_dp("test_Sleef_atand2_u35kvx", x, y, 1000);

		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_d(mpfr_atan, y[k], x[k][0], 3.5);
	    }

	    for (int i = -10000; i < 10000 && success; i+=2000) {
	      	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i + j*2.1);
		}
		test_denormdp_dp("test_Sleef_atand2_u35kvx", x, y, 1000);
	        for (int k = 0; k < 1000 && success; k++)
	       	  checkAccuracy_d(mpfr_atan, y[k], x[k][0], 3.5);
	    }

	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "atan_u1 : ");
    {
	    SLEEF_VECTOR_DOUBLE *x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    for (int i = -10; i < 10 && success; i++) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i + j*0.002);
		}
		test_denormdp_dp("test_Sleef_atand2_u10kvx", x, y, 1000);

		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_d(mpfr_atan, y[k], x[k][0], 1.0);
	    }

	    for (int i = -10000; i < 10000 && success; i+=2000) {
	      	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i + j*2.1);
		}
		test_denormdp_dp("test_Sleef_atand2_u10kvx", x, y, 1000);
	        for (int k = 0; k < 1000 && success; k++)
	       	  checkAccuracy_d(mpfr_atan, y[k], x[k][0], 1.0);
	    }

	    free(x);
	    free(y);
	    showResult(success);
    }

    //
  
    fprintf(stderr, "atan2 : ");
    {
	    SLEEF_VECTOR_DOUBLE *x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*134);
	    SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*134);
	    SLEEF_VECTOR_DOUBLE *results = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*134);
	    for(double i = -10; i < 10 && success; i += 0.15) {
	      for(int j = 0; j < 134 && success; j++) { 
	      	      x[j] = makeVecd(i);
		      y[j] = makeVecd(j*0.15 - 10);
	      }

	      test_denormdp_dp_dp("test_Sleef_atan2d2_u35kvx", x, y, results, 134);
	      for (int k = 0; k < 134 && success; k++) 
		      checkAccuracy_d_d(mpfr_atan2, results[k], x[k][0], y[k][0], 3.5);
	    }
	    
	    for(double i = -100; i < 100 && success; i += 1.51) {
	      for(int j = 0; j < 134 && success; j ++) {
	      	x[j] = makeVecd(i);
		y[j] = makeVecd(j*1.51 - 100);
	      }
	      test_denormdp_dp_dp("test_Sleef_atan2d2_u35kvx", x, y, results, 134);
	      for (int k = 0; k < 134 && success; k++) 
		      checkAccuracy_d_d(mpfr_atan2, results[k], x[k][0], y[k][0], 3.5);
	    }

	    free(x);
	    free(y);
	    free(results);
	    showResult(success);
    }

    //
  
    fprintf(stderr, "atan2_u1 : ");
    {
	    SLEEF_VECTOR_DOUBLE *x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*134);
	    SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*134);
	    SLEEF_VECTOR_DOUBLE *results = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*134);
	    for(double i = -10; i < 10 && success; i += 0.15) {
	      for(int j = 0; j < 134 && success; j++) { 
	      	      x[j] = makeVecd(i);
		      y[j] = makeVecd(j*0.15 - 10);
	      }

	      test_denormdp_dp_dp("test_Sleef_atan2d2_u10kvx", x, y, results, 134);
	      for (int k = 0; k < 134 && success; k++) 
		      checkAccuracy_d_d(mpfr_atan2, results[k], x[k][0], y[k][0], 1.0);
	    }
	    
	    for(double i = -100; i < 100 && success; i += 1.51) {
	      for(int j = 0; j < 134 && success; j ++) {
	      	x[j] = makeVecd(i);
		y[j] = makeVecd(j*1.51 - 100);
	      }
	      test_denormdp_dp_dp("test_Sleef_atan2d2_u10kvx", x, y, results, 134);
	      for (int k = 0; k < 134 && success; k++) 
		      checkAccuracy_d_d(mpfr_atan2, results[k], x[k][0], y[k][0], 1.0);
	    }

	    free(x);
	    free(y);
	    free(results);
	    showResult(success);
    }

    //

    fprintf(stderr, "sinh : ");
    {
	    SLEEF_VECTOR_DOUBLE *x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    for (int i = -10; i < 10 && success; i++) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i + j*0.002);
		}
		test_denormdp_dp("test_Sleef_sinhd2_u10kvx", x, y, 1000);

		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_d(mpfr_sinh, y[k], x[k][0], 1.0);
	    }
	    free(x);
	    free(y);

	    x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*709);
	    y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*709);
	    for (double i = -709; i < 709 && success; i+= 141.8) {
	    	for (int j = 0; j < 709; j++) {
			x[j] = makeVecd(i + j*0.2);
		}

		test_denormdp_dp("test_Sleef_sinhd2_u10kvx", x, y, 709);

		for (int k = 0; k < 709 && success; k++)
			checkAccuracy_d(mpfr_sinh, y[k], x[k][0], 1.0);
	    }

	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "cosh : ");
    {
	    SLEEF_VECTOR_DOUBLE *x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    for (int i = -10; i < 10 && success; i++) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i + j*0.002);
		}
		test_denormdp_dp("test_Sleef_coshd2_u10kvx", x, y, 1000);

		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_d(mpfr_cosh, y[k], x[k][0], 1.0);
	    }
	    free(x);
	    free(y);

	    x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*709);
	    y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*709);
	    for (double i = -709; i < 709 && success; i+= 141.8) {
	    	for (int j = 0; j < 709; j++) {
			x[j] = makeVecd(i + j*0.2);
		}

		test_denormdp_dp("test_Sleef_coshd2_u10kvx", x, y, 709);

		for (int k = 0; k < 709 && success; k++)
			checkAccuracy_d(mpfr_cosh, y[k], x[k][0], 1.0);
	    }

	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "tanh : ");
    {
	    SLEEF_VECTOR_DOUBLE *x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    for (int i = -10; i < 10 && success; i++) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i + j*0.002);
		}
		test_denormdp_dp("test_Sleef_tanhd2_u10kvx", x, y, 1000);

		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_d(mpfr_tanh, y[k], x[k][0], 1.0);
	    }
	    free(x);
	    free(y);

	    x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    for (double i = -1000; i < 1000 && success; i+= 200) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i + j*0.2);
		}

		test_denormdp_dp("test_Sleef_tanhd2_u10kvx", x, y, 1000);

		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_d(mpfr_tanh, y[k], x[k][0], 1.0);
	    }

	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "sinh_u35 : ");
    {
	    SLEEF_VECTOR_DOUBLE *x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    for (int i = -10; i < 10 && success; i++) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i + j*0.002);
		}
		test_denormdp_dp("test_Sleef_sinhd2_u35kvx", x, y, 1000);

		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_d(mpfr_sinh, y[k], x[k][0], 3.5);
	    }
	    free(x);
	    free(y);

	    x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*709);
	    y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*709);
	    for (double i = -709; i < 709 && success; i+= 141.8) {
	    	for (int j = 0; j < 709; j++) {
			x[j] = makeVecd(i + j*0.2);
		}

		test_denormdp_dp("test_Sleef_sinhd2_u35kvx", x, y, 709);

		for (int k = 0; k < 709 && success; k++)
			checkAccuracy_d(mpfr_sinh, y[k], x[k][0], 3.5);
	    }

	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "cosh_u35 : ");
    {
	    SLEEF_VECTOR_DOUBLE *x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    for (int i = -10; i < 10 && success; i++) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i + j*0.002);
		}
		test_denormdp_dp("test_Sleef_coshd2_u35kvx", x, y, 1000);

		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_d(mpfr_cosh, y[k], x[k][0], 3.5);
	    }
	    free(x);
	    free(y);

	    x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*709);
	    y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*709);
	    for (double i = -709; i < 709 && success; i+= 141.8) {
	    	for (int j = 0; j < 709; j++) {
			x[j] = makeVecd(i + j*0.2);
		}

		test_denormdp_dp("test_Sleef_coshd2_u35kvx", x, y, 709);

		for (int k = 0; k < 709 && success; k++)
			checkAccuracy_d(mpfr_cosh, y[k], x[k][0], 3.5);
	    }

	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "tanh_u35 : ");
    {
	    SLEEF_VECTOR_DOUBLE *x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    for (int i = -10; i < 10 && success; i++) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i + j*0.002);
		}
		test_denormdp_dp("test_Sleef_tanhd2_u35kvx", x, y, 1000);

		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_d(mpfr_tanh, y[k], x[k][0], 3.5);
	    }
	    free(x);
	    free(y);

	    x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    for (double i = -1000; i < 1000 && success; i+= 200) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i + j*0.2);
		}

		test_denormdp_dp("test_Sleef_tanhd2_u35kvx", x, y, 1000);

		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_d(mpfr_tanh, y[k], x[k][0], 3.5);
	    }

	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "asinh : ");
    {
	    SLEEF_VECTOR_DOUBLE *x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    for (int i = -10; i < 10 && success; i++) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i + j*0.002);
		}
		test_denormdp_dp("test_Sleef_asinhd2_u10kvx", x, y, 1000);

		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_d(mpfr_asinh, y[k], x[k][0], 1.0);
	    }
	    free(x);
	    free(y);

	    x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    for (double i = -1000; i < 1000 && success; i+= 200) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i + j*0.2);
		}

		test_denormdp_dp("test_Sleef_asinhd2_u10kvx", x, y, 1000);

		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_d(mpfr_asinh, y[k], x[k][0], 1.0);
	    }

	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "acosh : ");
    {
	    SLEEF_VECTOR_DOUBLE *x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    for (int i = -10; i < 10 && success; i++) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i + j*0.002);
		}
		test_denormdp_dp("test_Sleef_acoshd2_u10kvx", x, y, 1000);

		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_d(mpfr_acosh, y[k], x[k][0], 1.0);
	    }
	    free(x);
	    free(y);

	    x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    for (double i = -1000; i < 1000 && success; i+= 200) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i + j*0.2);
		}

		test_denormdp_dp("test_Sleef_acoshd2_u10kvx", x, y, 1000);

		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_d(mpfr_acosh, y[k], x[k][0], 1.0);
	    }

	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "atanh : ");
    {
	    SLEEF_VECTOR_DOUBLE *x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    for (int i = -10; i < 10 && success; i++) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i + j*0.002);
		}
		test_denormdp_dp("test_Sleef_atanhd2_u10kvx", x, y, 1000);

		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_d(mpfr_atanh, y[k], x[k][0], 1.0);
	    }
	    free(x);
	    free(y);

	    x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    for (double i = -1000; i < 1000 && success; i+= 200) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i + j*0.2);
		}

		test_denormdp_dp("test_Sleef_atanhd2_u10kvx", x, y, 1000);

		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_d(mpfr_atanh, y[k], x[k][0], 1.0);
	    }

	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "exp2 : ");
    {
	    SLEEF_VECTOR_DOUBLE *x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    for (int i = -10; i < 10 && success; i++) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i + j*0.002);
		}
		test_denormdp_dp("test_Sleef_exp2d2_u10kvx", x, y, 1000);

		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_d(mpfr_exp2, y[k], x[k][0], 1.0);
	    }
	    free(x);
	    free(y);

	    x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    for (double i = -1000; i < 1000 && success; i+= 200) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i + j*0.2);
		}

		test_denormdp_dp("test_Sleef_exp2d2_u10kvx", x, y, 1000);

		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_d(mpfr_exp2, y[k], x[k][0], 1.0);
	    }

	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "exp10 : ");
    {
	    SLEEF_VECTOR_DOUBLE *x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    for (int i = -10; i < 10 && success; i+=2) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i + j*0.002);
		}
		test_denormdp_dp("test_Sleef_exp10d2_u10kvx", x, y, 1000);

		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_d(mpfr_exp10, y[k], x[k][0], 1.0);
	    }
	    free(x);
	    free(y);
	    
	    x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*600);
	    y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*600);
	    for (double i = -300; i < 300 && success; i+= 60) {
	    	for (int j = 0; j < 600; j++) {
			x[j] = makeVecd(i + j*0.1);
		}

		test_denormdp_dp("test_Sleef_exp10d2_u10kvx", x, y, 600);

		for (int k = 0; k < 600 && success; k++)
			checkAccuracy_d(mpfr_exp10, y[k], x[k][0], 1.0);
	    }

	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "exp2_u35 : ");
    {
	    SLEEF_VECTOR_DOUBLE *x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    for (int i = -10; i < 10 && success; i++) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i + j*0.002);
		}
		test_denormdp_dp("test_Sleef_exp2d2_u35kvx", x, y, 1000);

		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_d(mpfr_exp2, y[k], x[k][0], 3.5);
	    }
	    free(x);
	    free(y);

	    x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    for (double i = -1000; i < 1000 && success; i+= 200) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i + j*0.2);
		}

		test_denormdp_dp("test_Sleef_exp2d2_u35kvx", x, y, 1000);

		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_d(mpfr_exp2, y[k], x[k][0], 3.5);
	    }

	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "exp10_u35 : ");
    {
	    SLEEF_VECTOR_DOUBLE *x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    for (int i = -10; i < 10 && success; i+=2) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i + j*0.002);
		}
		test_denormdp_dp("test_Sleef_exp10d2_u35kvx", x, y, 1000);

		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_d(mpfr_exp10, y[k], x[k][0], 3.5);
	    }
	    free(x);
	    free(y);

	    x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*600);
	    y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*600);
	    for (double i = -300; i < 300 && success; i+= 60) {
	    	for (int j = 0; j < 600; j++) {
			x[j] = makeVecd(i + j*0.1);
		}

		test_denormdp_dp("test_Sleef_exp10d2_u35kvx", x, y, 600);

		for (int k = 0; k < 600 && success; k++)
			checkAccuracy_d(mpfr_exp10, y[k], x[k][0], 3.5);
	    }

	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "expm1 : ");
    {
	    SLEEF_VECTOR_DOUBLE *x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    for (int i = -10; i < 10 && success; i+=2) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i + j*0.002);
		}
		test_denormdp_dp("test_Sleef_expm1d2_u10kvx", x, y, 1000);

		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_d(mpfr_expm1, y[k], x[k][0], 1.0);
	    }

	    for (int i = -1000; i < 1000 && success; i+=200) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i + j*0.21);
		}
		test_denormdp_dp("test_Sleef_expm1d2_u10kvx", x, y, 1000);

		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_d(mpfr_expm1, y[k], x[k][0], 1.0);
	    }
	    free(x);
	    free(y);
	    
	    x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*500);
	    y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*500);
	    for(int i = 0; i < 300 && success; i += 100) {
	    	for (int j = 0; j < 500; j++)
		    x[j] = makeVecd(pow(10, -j*0.21));

		test_denormdp_dp("test_Sleef_expm1d2_u10kvx", x, y, 500);

		for (int k = 0; k < 500 && success; k++)
			checkAccuracy_d(mpfr_expm1, y[k], x[k][0], 1.0);
	    }
	    for(int i = 0; i < 300 && success; i += 100) {
	    	for (int j = 0; j < 500; j++)
		    x[j] = makeVecd(-pow(10, -j*0.21));

		test_denormdp_dp("test_Sleef_expm1d2_u10kvx", x, y, 500);

		for (int k = 0; k < 500 && success; k++)
			checkAccuracy_d(mpfr_expm1, y[k], x[k][0], 1.0);
	    }

	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "log10 : ");
    {
	    SLEEF_VECTOR_DOUBLE *x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    for (double i = 0.0001; i < 10 && success; i+=1) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i + j*0.001);
		}
		test_denormdp_dp("test_Sleef_log10d2_u10kvx", x, y, 1000);

		for (int k = 0; k < 1000; k++)
			checkAccuracy_d(mpfr_log10, y[k], x[k][0], 1.0);
	    }

	    for (double i = 0.0001; i < 10000 && success; i+=1000) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i + j*1.1);
		}
		test_denormdp_dp("test_Sleef_log10d2_u10kvx", x, y, 1000);

		for (int k = 0; k < 1000; k++)
			checkAccuracy_d(mpfr_log10, y[k], x[k][0], 1.0);
	    }
	    free(x);
	    free(y);

	    x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    
	    for (i = 0; i < 1000; i++) {
	    	x[i] = makeVecd(DBL_MIN * pow(0.996323, i*10));
	    }
	    test_denormdp_dp("test_Sleef_log10d2_u10kvx", x, y, 1000);
	    for (int k = 0; k < 1000; k++)
		checkAccuracy_d(mpfr_log10, y[k], x[k][0], 1.0);
	    
	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "log2 : ");
    {
	    SLEEF_VECTOR_DOUBLE *x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    for (double i = 0.0001; i < 10 && success; i+=1) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i + j*0.001);
		}
		test_denormdp_dp("test_Sleef_log2d2_u10kvx", x, y, 1000);

		for (int k = 0; k < 1000; k++)
			checkAccuracy_d(mpfr_log2, y[k], x[k][0], 1.0);
	    }

	    for (double i = 0.0001; i < 10000 && success; i+=1000) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i + j*1.1);
		}
		test_denormdp_dp("test_Sleef_log2d2_u10kvx", x, y, 1000);

		for (int k = 0; k < 1000; k++)
			checkAccuracy_d(mpfr_log2, y[k], x[k][0], 1.0);
	    }
	    free(x);
	    free(y);

	    x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    
	    for (i = 0; i < 1000; i++) {
	    	x[i] = makeVecd(DBL_MIN * pow(0.996323, i*10));
	    }
	    test_denormdp_dp("test_Sleef_log2d2_u10kvx", x, y, 1000);
	    for (int k = 0; k < 1000; k++)
		checkAccuracy_d(mpfr_log2, y[k], x[k][0], 1.0);
	    
	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "log2_u35 : ");
    {
	    SLEEF_VECTOR_DOUBLE *x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    for (double i = 0.0001; i < 10 && success; i+=1) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i + j*0.001);
		}
		test_denormdp_dp("test_Sleef_log2d2_u35kvx", x, y, 1000);

		for (int k = 0; k < 1000; k++)
			checkAccuracy_d(mpfr_log2, y[k], x[k][0], 3.5);
	    }

	    for (double i = 0.0001; i < 10000 && success; i+=1000) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i + j*1.1);
		}
		test_denormdp_dp("test_Sleef_log2d2_u35kvx", x, y, 1000);

		for (int k = 0; k < 1000; k++)
			checkAccuracy_d(mpfr_log2, y[k], x[k][0], 3.5);
	    }
	    free(x);
	    free(y);

	    x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    
	    for (i = 0; i < 1000; i++) {
	    	x[i] = makeVecd(DBL_MIN * pow(0.996323, i*10));
	    }
	    test_denormdp_dp("test_Sleef_log2d2_u35kvx", x, y, 1000);
	    for (int k = 0; k < 1000; k++)
		checkAccuracy_d(mpfr_log2, y[k], x[k][0], 3.5);
	    
	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "log1p : ");
    {
	    SLEEF_VECTOR_DOUBLE *x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    for (double i = 0.0001; i < 10 && success; i+=1) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i + j*0.001);
		}
		test_denormdp_dp("test_Sleef_log1pd2_u10kvx", x, y, 1000);

		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_d(mpfr_log1p, y[k], x[k][0], 1.0);
	    }
	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "lgamma_u1 : ");
    {
	    SLEEF_VECTOR_DOUBLE *x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
 	    for (int i = -5000; i < 5000; i += 1000) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i + j*1.1);
		}
		test_denormdp_dp("test_Sleef_lgammad2_u10kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_d(mpfr_lgamma_nosign, y[k], x[k][0], 1.0);
	    }

	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "tgamma_u1 : ");
    {
	    SLEEF_VECTOR_DOUBLE *x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    for (int i = -10; i < 10 && success; i+=2) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i + j*0.002);
		}
		test_denormdp_dp("test_Sleef_tgammad2_u10kvx", x, y, 1000);

		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_d(mpfr_gamma, y[k], x[k][0], 1.0);
	    }
	    
	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "erf_u1 : ");
    {
	    SLEEF_VECTOR_DOUBLE *x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
	    for (int i = -100; i < 100 && success; i+=20) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecd(i + j*0.02);
		}
		test_denormdp_dp("test_Sleef_erfd2_u10kvx", x, y, 1000);

		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_d(mpfr_erf, y[k], x[k][0], 1.0);
	    }
	    
	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "erfc_u15 : ");
    {
	    SLEEF_VECTOR_DOUBLE *x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1010);
	    SLEEF_VECTOR_DOUBLE *y = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1010);
	    for (double i = -1; i < 100 && success; i+=10.1) {
	    	for (int j = 0; j < 1010; j++) {
			x[j] = makeVecd(i + j*0.01);
		}
		test_denormdp_dp("test_Sleef_erfcd2_u15kvx", x, y, 1010);

		for (int k = 0; k < 1010 && success; k++)
			checkAccuracy_d(mpfr_erfc, y[k], x[k][0], 1.5);
	    }
	    
	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    {
      fprintf(stderr, "ilogb : ");
      
      SLEEF_VECTOR_DOUBLE *x = malloc(sizeof(SLEEF_VECTOR_DOUBLE)*1000);
      SLEEF_VECTOR_INT *y = malloc(sizeof(SLEEF_VECTOR_INT)*1000);
      for (int i = 0.0001; i < 10; i++) {
      	for (int j = 0; j < 1000; j++) {
		x[j] = makeVecd(i + j*0.001);
	}
	test_denormdi_dp("test_Sleef_ilogbd2_kvx", x, y, 1000);

	for (int k = 0; k < 1000; k++) {
		int c = ilogb(x[k][0]);
		if (y[k][0] != c) {
		  fprintf(stderr, "ilogb : arg = %.20g, test = %d, correct = %d\n", x[k][0], ilogb(x[k][0]), y[k][0]);
		  success = 0;
		  free(x);
		  free(y);
		  showResult(success);
		}
	}
      }

      for (int i = 0.0001; i < 10000; i++) {
      	for (int j = 0; j < 1000; j++) {
		x[j] = makeVecd(i + j*1.1);
	}
	test_denormdi_dp("test_Sleef_ilogbd2_kvx", x, y, 1000);

	for (int k = 0; k < 1000; k++) {
		int c = ilogb(x[k][0]);
		if (y[k][0] != c) {
		  fprintf(stderr, "ilogb : arg = %.20g, test = %d, correct = %d\n", x[k][0], ilogb(x[k][0]), y[k][0]);
		  success = 0;
		  free(x);
		  free(y);
		  showResult(success);
		}
	}
      }

      for (int j = 0; j < 1000; j++) {
	      x[j] = makeVecd(DBL_MIN * pow(0.996323, i*10));
      }
      test_denormdi_dp("test_Sleef_ilogbd2_kvx", x, y, 1000);

      for (int k = 0; k < 1000; k++) {
	      if (x[k][0] == 0) continue;
	      int c = ilogb(x[k][0]);
	      if (y[k][0] != c) {
		    fprintf(stderr, "ilogb : arg = %.20g, test = %d, correct = %d\n", x[k][0], ilogb(x[k][0]), y[k][0]);
		    success = 0;
		    free(x);
		    free(y);
		    showResult(success);
	      }
      }
    
      for (int j = 0; j < 1000; j++) {
	      x[j] = makeVecd(pow(0.933254300796991, i*10));
      }
      test_denormdi_dp("test_Sleef_ilogbd2_kvx", x, y, 1000);

      for (int k = 0; k < 1000; k++) {
	      if (x[k][0] == 0) continue;
	      int c = ilogb(x[k][0]);
	      if (y[k][0] != c) {
		    fprintf(stderr, "ilogb : arg = %.20g, test = %d, correct = %d\n", x[k][0], ilogb(x[k][0]), y[k][0]);
		    success = 0;
		    free(x);
		    free(y);
		    showResult(success);
	      }
      }

      free(x);
      free(y);
      showResult(success);
    }
  }
  //

#define checkAccuracy_f(mpfrFunc, childFunc, argx, bound) do {		\
    mpfr_set_d(frx, (float)flushToZero(argx), GMP_RNDN);		\
    mpfrFunc(frc, frx, GMP_RNDN);					\
    if (countULPsp(childFunc[0], frc) > bound) {	\
      fprintf(stderr, "\narg = %.20g, test = %.20g, correct = %.20g, ULP = %lf\n", \
	      (float)flushToZero(argx), (double)childFunc[0], mpfr_get_d(frc, GMP_RNDN), countULPsp(childFunc[0], frc)); \
      success = 0;							\
      break;								\
    }									\
  } while(0)

#define checkAccuracyNR_f(mpfrFunc, childFunc, argx, bound) do {	\
    mpfr_set_d(frx, (float)flushToZero(argx), GMP_RNDN);		\
    mpfrFunc(frc, frx);							\
    if (countULPsp(childFunc[0], frc) > bound) {	\
      fprintf(stderr, "\narg = %.20g, test = %.20g, correct = %.20g, ULP = %lf\n", \
	      (float)flushToZero(argx), (double)childFunc[0], mpfr_get_d(frc, GMP_RNDN), countULPsp(childFunc[0], frc)); \
      success = 0;							\
      break;								\
    }									\
  } while(0)

#define checkAccuracy_f_f(mpfrFunc, childFunc, argx, argy, bound) do {	\
    mpfr_set_d(frx, (float)flushToZero(argx), GMP_RNDN);		\
    mpfr_set_d(fry, (float)flushToZero(argy), GMP_RNDN);		\
    mpfrFunc(frc, frx, fry, GMP_RNDN);					\
    if (countULPsp(childFunc[0], frc) > bound) {	\
      fprintf(stderr, "\narg = %.20g, %.20g, test = %.20g, correct = %.20g, ULP = %lf\n", \
	      (float)flushToZero(argx), (float)flushToZero(argy), childFunc[0], mpfr_get_d(frc, GMP_RNDN), countULPsp(childFunc[0], frc)); \
      success = 0;							\
      break;								\
    }									\
  } while(0)

#define checkAccuracyX_f(mpfrFunc, childFunc, argx, bound) do {		\
    mpfr_set_d(frx, (float)flushToZero(argx), GMP_RNDN);				\
    mpfrFunc(frc, frx, GMP_RNDN);					\
    Sleef_SLEEF_VECTOR_FLOAT_2 d2 = childFunc;				\
    if (countULPsp(d2.x[0], frc) > bound) {				\
      fprintf(stderr, "\narg = %.20g, test = %.20g, correct = %.20g, ULP = %lf\n", (float)flushToZero(argx), (double)d2.x[0], mpfr_get_d(frc, GMP_RNDN), countULPsp(d2.x[0], frc)); \
      success = 0;							\
      break;								\
    }									\
  } while(0)
  
#define checkAccuracyY_f(mpfrFunc, childFunc, argx, bound) do {		\
    mpfr_set_d(frx, (float)flushToZero(argx), GMP_RNDN);				\
    mpfrFunc(frc, frx, GMP_RNDN);					\
    Sleef_SLEEF_VECTOR_FLOAT_2 d2 = childFunc;				\
    if (countULPsp(d2.y[0], frc) > bound) {				\
      fprintf(stderr, "\narg = %.20g, test = %.20g, correct = %.20g, ULP = %lf\n", (float)flushToZero(argx), (double)d2.y[0], mpfr_get_d(frc, GMP_RNDN), countULPsp(d2.y[0], frc)); \
      success = 0;							\
      break;								\
    }									\
  } while(0)

#define checkAccuracy2_f(mpfrFunc, childFunc, argx, bound, abound) do {	\
    mpfr_set_d(frx, (float)flushToZero(argx), GMP_RNDN);		\
    mpfrFunc(frc, frx, GMP_RNDN);					\
    double t = childFunc[0];			\
    double ae = fabs(mpfr_get_d(frc, GMP_RNDN) - t);			\
    if (countULPsp(t, frc) > bound && ae > abound) {			\
      fprintf(stderr, "\narg = %.20g, test = %.20g, correct = %.20g, ULP = %lf, abserror = %g\n", \
	      (float)flushToZero(argx), (double)childFunc[0], mpfr_get_d(frc, GMP_RNDN), countULPsp(childFunc[0], frc), ae); \
      success = 0;							\
      break;								\
    }									\
  } while(0)
  
#define checkAccuracy2_f_f(mpfrFunc, childFunc, argx, argy, bound, abound) do {	\
    mpfr_set_d(frx, (float)flushToZero(argx), GMP_RNDN);		\
    mpfr_set_d(fry, (float)flushToZero(argy), GMP_RNDN);		\
    mpfrFunc(frc, frx, fry, GMP_RNDN);					\
    double t = childFunc[0];			\
    double ae = fabs(mpfr_get_d(frc, GMP_RNDN) - t);			\
    if (countULPsp(t, frc) > bound && ae > abound) {			\
      fprintf(stderr, "\narg = %.20g, %.20g test = %.20g, correct = %.20g, ULP = %lf, abserror = %g\n", \
	      (float)flushToZero(argx), argy, (double)childFunc[0], mpfr_get_d(frc, GMP_RNDN), countULPsp(childFunc[0], frc), ae); \
      success = 0;							\
      break;								\
    }									\
  } while(0)

  //

  if (enableSP) {
    // 53 > 24(=number of bits in SP mantissa)
    mpfr_set_default_prec(53);

    fprintf(stderr, "hypotf_u35 : ");
    {
	    SLEEF_VECTOR_FLOAT *x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*134);
	    SLEEF_VECTOR_FLOAT *y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*134);
	    SLEEF_VECTOR_FLOAT *results = malloc(sizeof(SLEEF_VECTOR_FLOAT)*134);
	    for (float l = -10; l < 10 && success; l += 0.15) {
		size_t idx = 0;
	    	for(float m = -10; m < 10; m += 0.15) {
			x[idx] = makeVecf(l);
			y[idx] = makeVecf(m);
			idx += 1;
		}
      		test_denormsp_sp_sp("test_Sleef_hypotf4_u35kvx", x, y, results, 134);
		for (size_t k = 0; k < 134 && success; k++) {
			checkAccuracy_f_f(mpfr_hypot, results[k], x[k][0], y[k][0], 3.5);
		}
	    }
	    for(float l = -1e+7; l < 1e+7 && success; l += 1.51e+5) {
		size_t idx = 0;
	      	for(float m = -1e+7; m < 1e+7; m += 1.51e+5) {
			x[idx] = makeVecf(l);
			y[idx] = makeVecf(m);
			idx += 1;
		}
      		test_denormsp_sp_sp("test_Sleef_hypotf4_u35kvx", x, y, results, 134);
		for (size_t k = 0; k < 133 && success; k++) {
			checkAccuracy_f_f(mpfr_hypot, results[k], x[k][0], y[k][0], 3.5);
		}
	    }

	    free(x);
	    free(y);
	    free(results);
	    showResult(success);
    }
  
    //

    fprintf(stderr, "hypotf_u05 : ");
    {
	    SLEEF_VECTOR_FLOAT *x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*134);
	    SLEEF_VECTOR_FLOAT *y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*134);
	    SLEEF_VECTOR_FLOAT *results = malloc(sizeof(SLEEF_VECTOR_FLOAT)*134);
	    for (float l = -10; l < 10 && success; l += 0.15) {
		size_t idx = 0;
	    	for(float m = -10; m < 10; m += 0.15) {
			x[idx] = makeVecf(l);
			y[idx] = makeVecf(m);
			idx += 1;
		}
      		test_denormsp_sp_sp("test_Sleef_hypotf4_u05kvx", x, y, results, 134);
		for (size_t k = 0; k < 134 && success; k++) {
			checkAccuracy_f_f(mpfr_hypot, results[k], x[k][0], y[k][0], 0.5);
		}
	    }
	    for(float l = -1e+7; l < 1e+7 && success; l += 1.51e+5) {
		size_t idx = 0;
	      	for(float m = -1e+7; m < 1e+7; m += 1.51e+5) {
			x[idx] = makeVecf(l);
			y[idx] = makeVecf(m);
			idx += 1;
		}
      		test_denormsp_sp_sp("test_Sleef_hypotf4_u05kvx", x, y, results, 134);
		for (size_t k = 0; k < 133 && success; k++) {
			checkAccuracy_f_f(mpfr_hypot, results[k], x[k][0], y[k][0], 0.5);
		}
	    }

	    free(x);
	    free(y);
	    free(results);
	    showResult(success);
    }
  
    //

    fprintf(stderr, "copysignf : ");
    {
	    SLEEF_VECTOR_FLOAT *x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*134);
	    SLEEF_VECTOR_FLOAT *y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*134);
	    SLEEF_VECTOR_FLOAT *results = malloc(sizeof(SLEEF_VECTOR_FLOAT)*134);
	    for (float l = -10; l < 10 && success; l += 0.15) {
		size_t idx = 0;
	    	for(float m = -10; m < 10; m += 0.15) {
			x[idx] = makeVecf(l);
			y[idx] = makeVecf(m);
			idx += 1;
		}
      		test_denormsp_sp_sp("test_Sleef_copysignf4_kvx", x, y, results, 134);
		for (size_t k = 0; k < 134 && success; k++) {
			checkAccuracy_f_f(mpfr_copysign, results[k], x[k][0], y[k][0], 3.5);
		}
	    }
	    for(float l = -1e+7; l < 1e+7 && success; l += 1.51e+5) {
		size_t idx = 0;
	      	for(float m = -1e+7; m < 1e+7; m += 1.51e+5) {
			x[idx] = makeVecf(l);
			y[idx] = makeVecf(m);
			idx += 1;
		}
      		test_denormsp_sp_sp("test_Sleef_copysignf4_kvx", x, y, results, 134);
		for (size_t k = 0; k < 133 && success; k++) {
			checkAccuracy_f_f(mpfr_copysign, results[k], x[k][0], y[k][0], 3.5);
		}
	    }

	    free(x);
	    free(y);
	    free(results);
	    showResult(success);
    }
  
    //

    fprintf(stderr, "fmaxf : ");
    {
	    SLEEF_VECTOR_FLOAT *x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*134);
	    SLEEF_VECTOR_FLOAT *y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*134);
	    SLEEF_VECTOR_FLOAT *results = malloc(sizeof(SLEEF_VECTOR_FLOAT)*134);
	    for (float l = -10; l < 10 && success; l += 0.15) {
		size_t idx = 0;
	    	for(float m = -10; m < 10; m += 0.15) {
			x[idx] = makeVecf(l);
			y[idx] = makeVecf(m);
			idx += 1;
		}
      		test_denormsp_sp_sp("test_Sleef_fmaxf4_kvx", x, y, results, 134);
		for (size_t k = 0; k < 134 && success; k++) {
			checkAccuracy_f_f(mpfr_max, results[k], x[k][0], y[k][0], 3.5);
		}
	    }
	    for(float l = -1e+7; l < 1e+7 && success; l += 1.51e+5) {
		size_t idx = 0;
	      	for(float m = -1e+7; m < 1e+7; m += 1.51e+5) {
			x[idx] = makeVecf(l);
			y[idx] = makeVecf(m);
			idx += 1;
		}
      		test_denormsp_sp_sp("test_Sleef_fmaxf4_kvx", x, y, results, 134);
		for (size_t k = 0; k < 133 && success; k++) {
			checkAccuracy_f_f(mpfr_max, results[k], x[k][0], y[k][0], 3.5);
		}
	    }

	    free(x);
	    free(y);
	    free(results);
	    showResult(success);
    }
  
    //

    fprintf(stderr, "fminf : ");
    {
	    SLEEF_VECTOR_FLOAT *x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*134);
	    SLEEF_VECTOR_FLOAT *y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*134);
	    SLEEF_VECTOR_FLOAT *results = malloc(sizeof(SLEEF_VECTOR_FLOAT)*134);
	    for (float l = -10; l < 10 && success; l += 0.15) {
		size_t idx = 0;
	    	for(float m = -10; m < 10; m += 0.15) {
			x[idx] = makeVecf(l);
			y[idx] = makeVecf(m);
			idx += 1;
		}
      		test_denormsp_sp_sp("test_Sleef_fminf4_kvx", x, y, results, 134);
		for (size_t k = 0; k < 134 && success; k++) {
			checkAccuracy_f_f(mpfr_min, results[k], x[k][0], y[k][0], 3.5);
		}
	    }
	    for(float l = -1e+7; l < 1e+7 && success; l += 1.51e+5) {
		size_t idx = 0;
	      	for(float m = -1e+7; m < 1e+7; m += 1.51e+5) {
			x[idx] = makeVecf(l);
			y[idx] = makeVecf(m);
			idx += 1;
		}
      		test_denormsp_sp_sp("test_Sleef_fminf4_kvx", x, y, results, 134);
		for (size_t k = 0; k < 133 && success; k++) {
			checkAccuracy_f_f(mpfr_min, results[k], x[k][0], y[k][0], 3.5);
		}
	    }

	    free(x);
	    free(y);
	    free(results);
	    showResult(success);
    }
  
    //

    fprintf(stderr, "fdimf : ");
    {
	    SLEEF_VECTOR_FLOAT *x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*134);
	    SLEEF_VECTOR_FLOAT *y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*134);
	    SLEEF_VECTOR_FLOAT *results = malloc(sizeof(SLEEF_VECTOR_FLOAT)*134);
	    for (float l = -10; l < 10 && success; l += 0.15) {
		size_t idx = 0;
	    	for(float m = -10; m < 10; m += 0.15) {
			x[idx] = makeVecf(l);
			y[idx] = makeVecf(m);
			idx += 1;
		}
      		test_denormsp_sp_sp("test_Sleef_fdimf4_kvx", x, y, results, 134);
		for (size_t k = 0; k < 134 && success; k++) {
			checkAccuracy_f_f(mpfr_dim, results[k], x[k][0], y[k][0], 3.5);
		}
	    }
	    for(float l = -1e+7; l < 1e+7 && success; l += 1.51e+5) {
		size_t idx = 0;
	      	for(float m = -1e+7; m < 1e+7; m += 1.51e+5) {
			x[idx] = makeVecf(l);
			y[idx] = makeVecf(m);
			idx += 1;
		}
      		test_denormsp_sp_sp("test_Sleef_fdimf4_kvx", x, y, results, 134);
		for (size_t k = 0; k < 133 && success; k++) {
			checkAccuracy_f_f(mpfr_dim, results[k], x[k][0], y[k][0], 3.5);
		}
	    }

	    free(x);
	    free(y);
	    free(results);
	    showResult(success);
    }
  
    //

    fprintf(stderr, "fmodf : ");
    {
	    SLEEF_VECTOR_FLOAT *x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*134);
	    SLEEF_VECTOR_FLOAT *y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*134);
	    SLEEF_VECTOR_FLOAT *results = malloc(sizeof(SLEEF_VECTOR_FLOAT)*134);
	    for (float l = -10; l < 10 && success; l += 0.15) {
		size_t idx = 0;
	    	for(float m = -10; m < 10; m += 0.15) {
			x[idx] = makeVecf(l);
			y[idx] = makeVecf(m);
			idx += 1;
		}
      		test_denormsp_sp_sp("test_Sleef_fmodf4_kvx", x, y, results, 134);
		for (size_t k = 0; k < 134 && success; k++) {
			checkAccuracy_f_f(mpfr_fmod, results[k], x[k][0], y[k][0], 3.5);
		}
	    }
	    for(float l = -1e+7; l < 1e+7 && success; l += 1.51e+5) {
		size_t idx = 0;
	      	for(float m = -1e+7; m < 1e+7; m += 1.51e+5) {
			x[idx] = makeVecf(l);
			y[idx] = makeVecf(m);
			idx += 1;
		}
      		test_denormsp_sp_sp("test_Sleef_fmodf4_kvx", x, y, results, 134);
		for (size_t k = 0; k < 133 && success; k++) {
			checkAccuracy_f_f(mpfr_fmod, results[k], x[k][0], y[k][0], 3.5);
		}
	    }

	    free(x);
	    free(y);
	    free(results);
	    showResult(success);
    }
  
    //

    fprintf(stderr, "remainderf : ");
    {
	    SLEEF_VECTOR_FLOAT *x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*134);
	    SLEEF_VECTOR_FLOAT *y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*134);
	    SLEEF_VECTOR_FLOAT *results = malloc(sizeof(SLEEF_VECTOR_FLOAT)*134);
	    for (float l = -10; l < 10 && success; l += 0.15) {
		size_t idx = 0;
	    	for(float m = -10; m < 10; m += 0.15) {
			x[idx] = makeVecf(l);
			y[idx] = makeVecf(m);
			idx += 1;
		}
      		test_denormsp_sp_sp("test_Sleef_remainderf4_kvx", x, y, results, 134);
		for (size_t k = 0; k < 134 && success; k++) {
			checkAccuracy_f_f(mpfr_remainder, results[k], x[k][0], y[k][0], 3.5);
		}
	    }
	    for(float l = -1e+7; l < 1e+7 && success; l += 1.51e+5) {
		size_t idx = 0;
	      	for(float m = -1e+7; m < 1e+7; m += 1.51e+5) {
			x[idx] = makeVecf(l);
			y[idx] = makeVecf(m);
			idx += 1;
		}
		x[idx] = makeVecf(11114942644092928.0);
		y[idx] = makeVecf(224544296009728.0);
      		test_denormsp_sp_sp("test_Sleef_remainderf4_kvx", x, y, results, 134);
		for (size_t k = 0; k < 134 && success; k++) {
			checkAccuracy_f_f(mpfr_remainder, results[k], x[k][0], y[k][0], 3.5);
		}
	    }

	    free(x);
	    free(y);
	    free(results);
	    showResult(success);
    }
  
    //

    fprintf(stderr, "truncf : ");
    {
	    SLEEF_VECTOR_FLOAT *x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*404);
	    SLEEF_VECTOR_FLOAT *y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*404);
	    for (int i = 0; i < 404; i++)
		    x[i] = makeVecf(i*0.5-100);
	    test_denormsp_sp("test_Sleef_truncf4_kvx", x, y, 404);
	    for (int i = 0; i < 404 && success; i++)
	    	    checkAccuracyNR_f(mpfr_trunc, y[i], x[i][0], 0);
	    //for(x = -100.5;x <= 100.5;x+=0.5) {
	    //  for(d = u2d(d2u(x)-3);d <= u2d(d2u(x)+3) && success;d = u2d(d2u(d)+1)) checkAccuracyNR_d(mpfr_trunc, child_trunc, d, 0);
	    //}
	    free(x);
	    free(y);

	    x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    for(int i = -10; i < 10; i++) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf((double)(i*j)*0.7);
		}
	    	test_denormsp_sp("test_Sleef_truncf4_kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
	    	    checkAccuracyNR_f(mpfr_trunc, y[k], x[k][0], 0);
	    }
	    free(x);
	    free(y);
	   
	    x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*40);
	    y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*40);
	    double start = u2d(d2u((float)(INT64_C(1) << 23))-20);
	    for (int i = 0; i < 40; i++) {
	    	x[i] = makeVecf(start-20+i);
	    }
	    test_denormsp_sp("test_Sleef_truncf4_kvx", x, y, 40);
	    for (int i = 0; i < 40 && success; i++) checkAccuracyNR_f(mpfr_trunc, y[i], x[i][0], 0);

	    for (int i = 0; i < 40; i++) {
	    	x[i] = makeVecf(-(start-20+i));
	    }
	    test_denormsp_sp("test_Sleef_truncf4_kvx", x, y, 40);
	    for (int i = 0; i < 40 && success; i++) checkAccuracyNR_f(mpfr_trunc, y[i], x[i][0], 0);
	    
	    free(x);
	    free(y);
	    showResult(success);
    }
  
    //

    fprintf(stderr, "floorf : ");
    {
	    SLEEF_VECTOR_FLOAT *x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*404);
	    SLEEF_VECTOR_FLOAT *y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*404);
	    for (int i = 0; i < 404; i++)
		    x[i] = makeVecf(i*0.5-100);
	    test_denormsp_sp("test_Sleef_floorf4_kvx", x, y, 404);
	    for (int i = 0; i < 404 && success; i++)
	    	    checkAccuracyNR_f(mpfr_floor, y[i], x[i][0], 0);
	    //for(x = -100.5;x <= 100.5;x+=0.5) {
	    //  for(d = u2d(d2u(x)-3);d <= u2d(d2u(x)+3) && success;d = u2d(d2u(d)+1)) checkAccuracyNR_d(mpfr_trunc, child_trunc, d, 0);
	    //}
	    free(x);
	    free(y);

	    x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    for(int i = -10; i < 10; i++) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf((double)(i*j)*0.7);
		}
	    	test_denormsp_sp("test_Sleef_floorf4_kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
	    	    checkAccuracyNR_f(mpfr_floor, y[k], x[k][0], 0);
	    }
	    free(x);
	    free(y);
	   
	    x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*40);
	    y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*40);
	    double start = u2d(d2u((float)(INT64_C(1) << 23))-20);
	    for (int i = 0; i < 40; i++) {
	    	x[i] = makeVecf(start-20+i);
	    }
	    test_denormsp_sp("test_Sleef_floorf4_kvx", x, y, 40);
	    for (int i = 0; i < 40 && success; i++) checkAccuracyNR_f(mpfr_floor, y[i], x[i][0], 0);

	    for (int i = 0; i < 40; i++) {
	    	x[i] = makeVecf(-(start-20+i));
	    }
	    test_denormsp_sp("test_Sleef_floorf4_kvx", x, y, 40);
	    for (int i = 0; i < 40 && success; i++) checkAccuracyNR_f(mpfr_floor, y[i], x[i][0], 0);
	    
	    free(x);
	    free(y);
	    showResult(success);
    }
  
    //

    fprintf(stderr, "ceilf : ");
    {
	    SLEEF_VECTOR_FLOAT *x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*404);
	    SLEEF_VECTOR_FLOAT *y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*404);
	    for (int i = 0; i < 404; i++)
		    x[i] = makeVecf(i*0.5-100);
	    test_denormsp_sp("test_Sleef_ceilf4_kvx", x, y, 404);
	    for (int i = 0; i < 404 && success; i++)
	    	    checkAccuracyNR_f(mpfr_ceil, y[i], x[i][0], 0);
	    //for(x = -100.5;x <= 100.5;x+=0.5) {
	    //  for(d = u2d(d2u(x)-3);d <= u2d(d2u(x)+3) && success;d = u2d(d2u(d)+1)) checkAccuracyNR_d(mpfr_trunc, child_trunc, d, 0);
	    //}
	    free(x);
	    free(y);

	    x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    for(int i = -10; i < 10; i++) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i*j);
		}
	    	test_denormsp_sp("test_Sleef_ceilf4_kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
	    	    checkAccuracyNR_f(mpfr_ceil, y[k], x[k][0], 0);
	    }
	    free(x);
	    free(y);
	   
	    x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*40);
	    y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*40);
	    double start = u2d(d2u((float)(INT64_C(1) << 23))-20);
	    for (int i = 0; i < 40; i++) {
	    	x[i] = makeVecf(start-20+i);
	    }
	    test_denormsp_sp("test_Sleef_ceilf4_kvx", x, y, 40);
	    for (int i = 0; i < 40 && success; i++) checkAccuracyNR_f(mpfr_ceil, y[i], x[i][0], 0);

	    for (int i = 0; i < 40; i++) {
	    	x[i] = makeVecf(-(start-20+i));
	    }
	    test_denormsp_sp("test_Sleef_ceilf4_kvx", x, y, 40);
	    for (int i = 0; i < 40 && success; i++) checkAccuracyNR_f(mpfr_ceil, y[i], x[i][0], 0);
	    
	    free(x);
	    free(y);
	    showResult(success);
    }
  
    //

    fprintf(stderr, "roundf : ");
    {
	    SLEEF_VECTOR_FLOAT *x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*404);
	    SLEEF_VECTOR_FLOAT *y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*404);
	    for (int i = 0; i < 404; i++)
		    x[i] = makeVecf(i*0.5-100);
	    test_denormsp_sp("test_Sleef_roundf4_kvx", x, y, 404);
	    for (int i = 0; i < 404 && success; i++)
	    	    checkAccuracyNR_f(mpfr_round, y[i], x[i][0], 0);
	    //for(x = -100.5;x <= 100.5;x+=0.5) {
	    //  for(d = u2d(d2u(x)-3);d <= u2d(d2u(x)+3) && success;d = u2d(d2u(d)+1)) checkAccuracyNR_d(mpfr_trunc, child_trunc, d, 0);
	    //}
	    free(x);
	    free(y);

	    x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    for(int i = -10; i < 10; i++) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf((double)(i*j)*0.7);
		}
	    	test_denormsp_sp("test_Sleef_roundf4_kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
	    	    checkAccuracyNR_f(mpfr_round, y[k], x[k][0], 0);
	    }
	    free(x);
	    free(y);
	   
	    x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*40);
	    y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*40);
	    double start = u2d(d2u((float)(INT64_C(1) << 23))-20);
	    for (int i = 0; i < 40; i++) {
	    	x[i] = makeVecf(start-20+i);
	    }
	    test_denormsp_sp("test_Sleef_roundf4_kvx", x, y, 40);
	    for (int i = 0; i < 40 && success; i++) checkAccuracyNR_f(mpfr_round, y[i], x[i][0], 0);

	    for (int i = 0; i < 40; i++) {
	    	x[i] = makeVecf(-(start-20+i));
	    }
	    test_denormsp_sp("test_Sleef_roundf4_kvx", x, y, 40);
	    for (int i = 0; i < 40 && success; i++) checkAccuracyNR_f(mpfr_round, y[i], x[i][0], 0);
	    
	    free(x);
	    free(y);
	    showResult(success);
    }
  
    //

    fprintf(stderr, "rintf : ");
    {
	    SLEEF_VECTOR_FLOAT *x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*404);
	    SLEEF_VECTOR_FLOAT *y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*404);
	    for (int i = 0; i < 404; i++)
		    x[i] = makeVecf(i*0.5-100);
	    test_denormsp_sp("test_Sleef_rintf4_kvx", x, y, 404);
	    for (int i = 0; i < 404 && success; i++)
	    	    checkAccuracy_f(mpfr_rint, y[i], x[i][0], 0);
	    //for(x = -100.5;x <= 100.5;x+=0.5) {
	    //  for(d = u2d(d2u(x)-3);d <= u2d(d2u(x)+3) && success;d = u2d(d2u(d)+1)) checkAccuracyNR_d(mpfr_trunc, child_trunc, d, 0);
	    //}
	    free(x);
	    free(y);

	    x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    for(int i = -10; i < 10; i++) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf((double)(i*j)*0.7);
		}
	    	test_denormsp_sp("test_Sleef_rintf4_kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
	    	    checkAccuracy_f(mpfr_rint, y[k], x[k][0], 0);
	    }
	    free(x);
	    free(y);
	   
	    x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*40);
	    y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*40);
	    double start = u2d(d2u((float)(INT64_C(1) << 23))-20);
	    for (int i = 0; i < 40; i++) {
	    	x[i] = makeVecf(start-20+i);
	    }
	    test_denormsp_sp("test_Sleef_rintf4_kvx", x, y, 40);
	    for (int i = 0; i < 40 && success; i++) checkAccuracy_f(mpfr_rint, y[i], x[i][0], 0);

	    for (int i = 0; i < 40; i++) {
	    	x[i] = makeVecf(-(start-20+i));
	    }
	    test_denormsp_sp("test_Sleef_rintf4_kvx", x, y, 40);
	    for (int i = 0; i < 40 && success; i++) checkAccuracy_f(mpfr_rint, y[i], x[i][0], 0);
	    
	    free(x);
	    free(y);
	    showResult(success);
    }
  
    //
  
    fprintf(stderr, "sinf : ");
    {
	    SLEEF_VECTOR_FLOAT *x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    SLEEF_VECTOR_FLOAT *y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    for (int i = -10; i < 10 && success; i++) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i+j*0.002);	
		}
		test_denormsp_sp("test_Sleef_sinf4_u35kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_f(mpfr_sin, y[k], x[k][0], 3.5);
	    }
	    for (float i = -10000; i < 10000 && success; i += 1100) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i+j*1.1);
		}
		test_denormsp_sp("test_Sleef_sinf4_u35kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_f(mpfr_sin, y[k], x[k][0], 3.5);
	    }
	    
	    for(i = 0; i < 1000; i++)
		    x[i] = makeVecf(pow(1.092, i));
	    test_denormsp_sp("test_Sleef_sinf4_u35kvx", x, y, 1000);
	    for (i = 0; i < 1000 && success; i++)
	    	checkAccuracy_f(mpfr_sin, y[i], x[i][0], 3.5);
	    free(x);
	    free(y);
	    x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*40);
	    y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*40);
	    for(i64=(int64_t)-1000;i64<(int64_t)1000 && success;i64+=(int64_t)1) {
	      double start = u2f(f2u(M_PI_4 * i64)-20);
	      for(i = 0; i < 40; i++) {
	      	x[i] = makeVecf((float)flushToZero(u2f(f2u(start)+i)));
	      }
	      test_denormsp_sp("test_Sleef_sinf4_u35kvx", x, y, 40);
		
	      for (i = 0; i < 40 && success; i++)
	      	checkAccuracy_f(mpfr_sin, y[i], x[i][0], 3.5);
	    }

	    free(x);
	    free(y);
	    showResult(success);
    }

    //
  
    fprintf(stderr, "sinf_u1 : ");
    {
	    SLEEF_VECTOR_FLOAT *x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    SLEEF_VECTOR_FLOAT *y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    for (int i = -10; i < 10 && success; i++) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i+j*0.002);	
		}
		test_denormsp_sp("test_Sleef_sinf4_u10kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_f(mpfr_sin, y[k], x[k][0], 1.0);
	    }
	    for (float i = -10000; i < 10000 && success; i += 1100) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i+j*1.1);
		}
		test_denormsp_sp("test_Sleef_sinf4_u10kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_f(mpfr_sin, y[k], x[k][0], 1.0);
	    }
	    
	    for(i = 0; i < 1000; i++)
		    x[i] = makeVecf(pow(1.092, i));
	    test_denormsp_sp("test_Sleef_sinf4_u10kvx", x, y, 1000);
	    for (i = 0; i < 1000 && success; i++)
	    	checkAccuracy_f(mpfr_sin, y[i], x[i][0], 1.0);
	    free(x);
	    free(y);
	    x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*40);
	    y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*40);
	    for(i64=(int64_t)-1000;i64<(int64_t)1000 && success;i64+=(int64_t)1) {
	      double start = u2f(f2u(M_PI_4 * i64)-20);
	      for(i = 0; i < 40; i++) {
	      	x[i] = makeVecf((float)flushToZero(u2f(f2u(start)+i)));
	      }
	      test_denormsp_sp("test_Sleef_sinf4_u10kvx", x, y, 40);
		
	      for (i = 0; i < 40 && success; i++)
	      	checkAccuracy_f(mpfr_sin, y[i], x[i][0], 1.0);
	    }

	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "sin in sincosf : ");
    {
	    SLEEF_VECTOR_FLOAT *x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    Sleef_SLEEF_VECTOR_FLOAT_2 *y = malloc(sizeof(Sleef_SLEEF_VECTOR_FLOAT_2)*1000);
	    for (int i = -10; i < 10 && success; i++) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i+j*0.002);	
		}
		test_denormsp2_sp("test_Sleef_sincosf4_u35kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracyX_f(mpfr_sin, y[k], x[k][0], 3.5);
	    }
	    for (float i = -10000; i < 10000 && success; i += 1100) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i+j*1.1);
		}
		test_denormsp2_sp("test_Sleef_sincosf4_u35kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracyX_f(mpfr_sin, y[k], x[k][0], 3.5);
	    }
	    for(i = 0; i < 1000; i++)
		    x[i] = makeVecf(pow(1.092, i));
	    test_denormsp2_sp("test_Sleef_sincosf4_u10kvx", x, y, 1000);
	    for (i = 0; i < 1000 && success; i++)
	    	checkAccuracyX_f(mpfr_sin, y[i], x[i][0], 3.5);
	    free(x);
	    free(y);
	    x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*40);
	    y = malloc(sizeof(Sleef_SLEEF_VECTOR_FLOAT_2)*40);
	    for(i=1;i<10000 && success;i+=31) {
	      double start = u2f(f2u(M_PI_4 * i)-20);
	      for(int k = 0; k < 40; k++) {
	      	x[k] = makeVecf((float)flushToZero(u2f(f2u(start)+k)));
	      }
	      test_denormsp2_sp("test_Sleef_sincosf4_u35kvx", x, y, 40);
		
	      for (int k = 0; k < 40 && success; k++)
	      	checkAccuracyX_f(mpfr_sin, y[k], x[k][0], 3.5);
	    }
	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "sin in sincosf_u1 : ");
    {
	    SLEEF_VECTOR_FLOAT *x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    Sleef_SLEEF_VECTOR_FLOAT_2 *y = malloc(sizeof(Sleef_SLEEF_VECTOR_FLOAT_2)*1000);
	    for (int i = -10; i < 10 && success; i++) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i+j*0.002);	
		}
		test_denormsp2_sp("test_Sleef_sincosf4_u10kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracyX_f(mpfr_sin, y[k], x[k][0], 1.0);
	    }
	    for (float i = -10000; i < 10000 && success; i += 1100) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i+j*1.1);
		}
		test_denormsp2_sp("test_Sleef_sincosf4_u10kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracyX_f(mpfr_sin, y[k], x[k][0], 1.0);
	    }
	    for(i = 0; i < 1000; i++)
		    x[i] = makeVecf(pow(1.092, i));
	    test_denormsp2_sp("test_Sleef_sincosf4_u10kvx", x, y, 1000);
	    for (i = 0; i < 1000 && success; i++)
	    	checkAccuracyX_f(mpfr_sin, y[i], x[i][0], 1.0);
	    free(x);
	    free(y);
	    x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*40);
	    y = malloc(sizeof(Sleef_SLEEF_VECTOR_FLOAT_2)*40);
	    for(i=1;i<10000 && success;i+=31) {
	      double start = u2f(f2u(M_PI_4 * i)-20);
	      for(int k = 0; k < 40; k++) {
	      	x[k] = makeVecf((float)flushToZero(u2f(f2u(start)+k)));
	      }
	      test_denormsp2_sp("test_Sleef_sincosf4_u10kvx", x, y, 40);
		
	      for (int k = 0; k < 40 && success; k++)
	      	checkAccuracyX_f(mpfr_sin, y[k], x[k][0], 1.0);
	    }
	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    // 256 > 128(=maximum SP exponent) + 24(=number of bits in SP mantissa)
    mpfr_set_default_prec(256);

    fprintf(stderr, "sin in sincospif_u35 : ");
    {
	    SLEEF_VECTOR_FLOAT *x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    Sleef_SLEEF_VECTOR_FLOAT_2 *y = malloc(sizeof(Sleef_SLEEF_VECTOR_FLOAT_2)*1000);
	    for (float i = -10.1; i < 10 && success; i+=1) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i+j*0.0021);	
		}
		test_denormsp2_sp("test_Sleef_sincospif4_u35kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracyX_f(mpfr_sinpi, y[k], x[k][0], 3.5);
	    }
	    for (float i = -10000-0.1; i < 10000 && success; i += 1100) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i+j*1.1);
		}
		test_denormsp2_sp("test_Sleef_sincospif4_u35kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracyX_f(mpfr_sinpi, y[k], x[k][0], 3.5);
	    }
	    free(x);
	    free(y);
	    
	    x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*40);
	    y = malloc(sizeof(Sleef_SLEEF_VECTOR_FLOAT_2)*40);
	    for(i=1;i<10000 && success;i+=31) {
	      double start = u2f(f2u(M_PI_4 * i)-20);
	      for(int k = 0; k < 40; k++) {
	      	x[k] = makeVecf((float)flushToZero(u2f(f2u(start)+k)));
	      }
	      test_denormsp2_sp("test_Sleef_sincospif4_u35kvx", x, y, 40);
		
	      for (int k = 0; k < 40 && success; k++)
	      	checkAccuracyX_f(mpfr_sinpi, y[k], x[k][0], 3.5);
	    }
	    
	    for(i=1;i<=20 && success;i++) {
	      double start = u2f(f2u(0.25 * i)-20);
	      for(int k = 0; k < 40; k++) {
	      	x[k] = makeVecf((float)flushToZero(u2f(f2u(start)+k)));
	      }
	      test_denormsp2_sp("test_Sleef_sincospif4_u35kvx", x, y, 20);
		
	      for (int k = 0; k < 20 && success; k++)
	      	checkAccuracyX_f(mpfr_sinpi, y[k], x[k][0], 3.5);
	    }
	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "sin in sincospif_u05 : ");
    {
	    SLEEF_VECTOR_FLOAT *x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    Sleef_SLEEF_VECTOR_FLOAT_2 *y = malloc(sizeof(Sleef_SLEEF_VECTOR_FLOAT_2)*1000);
	    for (float i = -10.1; i < 10 && success; i+=1) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i+j*0.0021);	
		}
		test_denormsp2_sp("test_Sleef_sincospif4_u05kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracyX_f(mpfr_sinpi, y[k], x[k][0], 0.5);
	    }
	    for (float i = -10000-0.1; i < 10000 && success; i += 1100) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i+j*1.1);
		}
		test_denormsp2_sp("test_Sleef_sincospif4_u05kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracyX_f(mpfr_sinpi, y[k], x[k][0], 0.5);
	    }
	    free(x);
	    free(y);
	    
	    x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*40);
	    y = malloc(sizeof(Sleef_SLEEF_VECTOR_FLOAT_2)*40);
	    for(i=1;i<10000 && success;i+=31) {
	      double start = u2f(f2u(M_PI_4 * i)-20);
	      for(int k = 0; k < 40; k++) {
	      	x[k] = makeVecf((float)flushToZero(u2f(f2u(start)+k)));
	      }
	      test_denormsp2_sp("test_Sleef_sincospif4_u05kvx", x, y, 40);
		
	      for (int k = 0; k < 40 && success; k++)
	      	checkAccuracyX_f(mpfr_sinpi, y[k], x[k][0], 0.5);
	    }
	    
	    for(i=1;i<=20 && success;i++) {
	      double start = u2f(f2u(0.25 * i)-20);
	      for(int k = 0; k < 40; k++) {
	      	x[k] = makeVecf((float)flushToZero(u2f(f2u(start)+k)));
	      }
	      test_denormsp2_sp("test_Sleef_sincospif4_u05kvx", x, y, 20);
		
	      for (int k = 0; k < 20 && success; k++)
	      	checkAccuracyX_f(mpfr_sinpi, y[k], x[k][0], 0.5);
	    }
	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "sinpif_u05 : ");
    {
	    SLEEF_VECTOR_FLOAT *x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    SLEEF_VECTOR_FLOAT *y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    for (float i = -10.1; i < 10 && success; i+=1) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i+j*0.0021);	
		}
		test_denormsp_sp("test_Sleef_sinpif4_u05kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_f(mpfr_sinpi, y[k], x[k][0], 0.5);
	    }
	    for (float i = -10000-0.1; i < 10000 && success; i += 1100) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i+j*1.1);
		}
		test_denormsp_sp("test_Sleef_sinpif4_u05kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_f(mpfr_sinpi, y[k], x[k][0], 0.5);
	    }
	    free(x);
	    free(y);
	    
	    x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*40);
	    y = malloc(sizeof(Sleef_SLEEF_VECTOR_FLOAT_2)*40);
	    for(i=1;i<10000 && success;i+=31) {
	      double start = u2f(f2u(M_PI_4 * i)-20);
	      for(int k = 0; k < 40; k++) {
	      	x[k] = makeVecf((float)flushToZero(u2f(f2u(start)+k)));
	      }
	      test_denormsp_sp("test_Sleef_sinpif4_u05kvx", x, y, 40);
		
	      for (int k = 0; k < 40 && success; k++)
	      	checkAccuracy_f(mpfr_sinpi, y[k], x[k][0], 0.5);
	    }
	    
	    for(i=1;i<=20 && success;i++) {
	      double start = u2f(f2u(0.25 * i)-20);
	      for(int k = 0; k < 40; k++) {
	      	x[k] = makeVecf((float)flushToZero(u2f(f2u(start)+k)));
	      }
	      test_denormsp_sp("test_Sleef_sinpif4_u05kvx", x, y, 20);
		
	      for (int k = 0; k < 20 && success; k++)
	      	checkAccuracy_f(mpfr_sinpi, y[k], x[k][0], 0.5);
	    }
	    free(x);
	    free(y);
	    showResult(success);
    }
    
    //

    fprintf(stderr, "cospif_u05 : ");
    {
	    SLEEF_VECTOR_FLOAT *x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    SLEEF_VECTOR_FLOAT *y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    for (float i = -10.1; i < 10 && success; i+=1) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i+j*0.0021);	
		}
		test_denormsp_sp("test_Sleef_cospif4_u05kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_f(mpfr_cospi, y[k], x[k][0], 0.506);
	    }
	    for (float i = -10000-0.1; i < 10000 && success; i += 1100) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i+j*1.1);
		}
		test_denormsp_sp("test_Sleef_cospif4_u05kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_f(mpfr_cospi, y[k], x[k][0], 0.506);
	    }
	    free(x);
	    free(y);
	    
	    x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*40);
	    y = malloc(sizeof(Sleef_SLEEF_VECTOR_FLOAT_2)*40);
	    for(i=1;i<10000 && success;i+=31) {
	      double start = u2f(f2u(M_PI_4 * i)-20);
	      for(int k = 0; k < 40; k++) {
	      	x[k] = makeVecf((float)flushToZero(u2f(f2u(start)+k)));
	      }
	      test_denormsp_sp("test_Sleef_cospif4_u05kvx", x, y, 40);
		
	      for (int k = 0; k < 40 && success; k++)
	      	checkAccuracy_f(mpfr_cospi, y[k], x[k][0], 0.506);
	    }
	    
	    for(i=1;i<=20 && success;i++) {
	      double start = u2f(f2u(0.25 * i)-20);
	      for(int k = 0; k < 40; k++) {
	      	x[k] = makeVecf((float)flushToZero(u2f(f2u(start)+k)));
	      }
	      test_denormsp_sp("test_Sleef_cospif4_u05kvx", x, y, 20);
		
	      for (int k = 0; k < 20 && success; k++)
	      	checkAccuracy_f(mpfr_cospi, y[k], x[k][0], 0.506);
	    }
	    free(x);
	    free(y);
	    showResult(success);
    }

    mpfr_set_default_prec(53);
  
    //

    fprintf(stderr, "cosf : ");
    {
	    SLEEF_VECTOR_FLOAT *x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    SLEEF_VECTOR_FLOAT *y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    for (int i = -10; i < 10 && success; i++) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i+j*0.002);	
		}
		test_denormsp_sp("test_Sleef_cosf4_u35kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_f(mpfr_cos, y[k], x[k][0], 3.5);
	    }
	    for (float i = -10000; i < 10000 && success; i += 1100) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i+j*1.1);
		}
		test_denormsp_sp("test_Sleef_cosf4_u35kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_f(mpfr_cos, y[k], x[k][0], 3.5);
	    }
	    
	    for(i = 0; i < 1000; i++)
		    x[i] = makeVecf(pow(1.092, i));
	    test_denormsp_sp("test_Sleef_cosf4_u35kvx", x, y, 1000);
	    for (i = 0; i < 1000 && success; i++)
	    	checkAccuracy_f(mpfr_cos, y[i], x[i][0], 3.5);
	    free(x);
	    free(y);
	    x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*40);
	    y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*40);
	    for(i64=(int64_t)-1000;i64<(int64_t)1000 && success;i64+=(int64_t)100) {
	      double start = u2f(f2u(M_PI_4 * i64)-20);
	      for(int i = 0; i < 40; i++) {
	      	x[i] = makeVecf((float)flushToZero(u2f(f2u(start)+i)));
	      }
	      test_denormsp_sp("test_Sleef_cosf4_u35kvx", x, y, 40);
	      
	      for (int i = 0; i < 40 && success; i++)
	      	checkAccuracy_f(mpfr_cos, y[i], x[i][0], 3.5);
	    }

	    free(x);
	    free(y);
	    showResult(success);
    }

    //
  
    fprintf(stderr, "cosf_u1 : ");
    {
	    SLEEF_VECTOR_FLOAT *x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    SLEEF_VECTOR_FLOAT *y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    for (int i = -10; i < 10 && success; i++) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i+j*0.002);	
		}
		test_denormsp_sp("test_Sleef_cosf4_u10kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_f(mpfr_cos, y[k], x[k][0], 1.0);
	    }
	    for (float i = -10000; i < 10000 && success; i += 1100) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i+j*1.1);
		}
		test_denormsp_sp("test_Sleef_cosf4_u10kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_f(mpfr_cos, y[k], x[k][0], 1.0);
	    }
	    
	    for(i = 0; i < 1000; i++)
		    x[i] = makeVecf((float)flushToZero(pow(1.092, i)));
	    test_denormsp_sp("test_Sleef_cosf4_u10kvx", x, y, 1000);
	    for (i = 0; i < 1000 && success; i++)
	    	checkAccuracy_f(mpfr_cos, y[i], x[i][0], 1.0);
	    
	    free(x);
	    free(y);
	    x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*40);
	    y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*40);
	    for(i64=(int64_t)-1000;i64<(int64_t)1000 && success;i64+=(int64_t)100) {
	      double start = u2f(f2u(M_PI_4 * i64)-20);
	      for(int i = 0; i < 40; i++) {
	      	x[i] = makeVecf((float)flushToZero(u2f(f2u(start)+i)));
	      }
	      test_denormsp_sp("test_Sleef_cosf4_u10kvx", x, y, 40);
	      
	      for (int i = 0; i < 40 && success; i++)
	      	checkAccuracy_f(mpfr_cos, y[i], x[i][0], 1.0);
	    }

	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "cos in sincosf : ");
    {
	    SLEEF_VECTOR_FLOAT *x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    Sleef_SLEEF_VECTOR_FLOAT_2 *y = malloc(sizeof(Sleef_SLEEF_VECTOR_FLOAT_2)*1000);
	    for (int i = -10; i < 10 && success; i++) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i+j*0.002);	
		}
		test_denormsp2_sp("test_Sleef_sincosf4_u35kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracyY_f(mpfr_cos, y[k], x[k][0], 3.5);
	    }
	    for (float i = -10000; i < 10000 && success; i += 1100) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i+j*1.1);
		}
		test_denormsp2_sp("test_Sleef_sincosf4_u35kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracyY_f(mpfr_cos, y[k], x[k][0], 3.5);
	    }
	    for(i = 0; i < 1000; i++)
		    x[i] = makeVecf(pow(1.092, i));
	    test_denormsp2_sp("test_Sleef_sincosf4_u10kvx", x, y, 1000);
	    for (i = 0; i < 1000 && success; i++)
	    	checkAccuracyY_f(mpfr_cos, y[i], x[i][0], 3.5);
	    free(x);
	    free(y);
	    x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*40);
	    y = malloc(sizeof(Sleef_SLEEF_VECTOR_FLOAT_2)*40);
	    for(i=1;i<10000 && success;i+=31) {
	      double start = u2f(f2u(M_PI_4 * i)-20);
	      for(int k = 0; k < 40; k++) {
	      	x[k] = makeVecf((float)flushToZero(u2f(f2u(start)+k)));
	      }
	      test_denormsp2_sp("test_Sleef_sincosf4_u35kvx", x, y, 40);
		
	      for (int k = 0; k < 40 && success; k++)
	      	checkAccuracyY_f(mpfr_cos, y[k], x[k][0], 3.5);
	    }
	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "cos in sincosf_u1 : ");
    {
	    SLEEF_VECTOR_FLOAT *x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    Sleef_SLEEF_VECTOR_FLOAT_2 *y = malloc(sizeof(Sleef_SLEEF_VECTOR_FLOAT_2)*1000);
	    for (int i = -10; i < 10 && success; i++) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i+j*0.002);	
		}
		test_denormsp2_sp("test_Sleef_sincosf4_u10kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracyY_f(mpfr_cos, y[k], x[k][0], 1.0);
	    }
	    
	    for (float i = -10000; i < 10000 && success; i += 1100) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i+j*1.1);
		}
		test_denormsp2_sp("test_Sleef_sincosf4_u10kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracyY_f(mpfr_cos, y[k], x[k][0], 1.0);
	    }
	    
	    for(i = 0; i < 1000; i++)
		    x[i] = makeVecf(pow(1.092, i));
	    test_denormsp2_sp("test_Sleef_sincosf4_u10kvx", x, y, 1000);
	    for (i = 0; i < 1000 && success; i++)
	    	checkAccuracyY_f(mpfr_cos, y[i], x[i][0], 1.0);
	    
	    free(x);
	    free(y);
	    x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*40);
	    y = malloc(sizeof(Sleef_SLEEF_VECTOR_FLOAT_2)*40);
	    for(i=1;i<10000 && success;i+=31) {
	      double start = u2f(f2u(M_PI_4 * i)-20);
	      for(int k = 0; k < 40; k++) {
	      	x[k] = makeVecf((float)flushToZero(u2f(f2u(start)+k)));
	      }
	      test_denormsp2_sp("test_Sleef_sincosf4_u10kvx", x, y, 40);
		
	      for (int k = 0; k < 40 && success; k++)
	      	checkAccuracyY_f(mpfr_cos, y[k], x[k][0], 1.0);
	    }
	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    mpfr_set_default_prec(256);

    fprintf(stderr, "cos in sincospif_u35 : ");
    {
	    SLEEF_VECTOR_FLOAT *x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    Sleef_SLEEF_VECTOR_FLOAT_2 *y = malloc(sizeof(Sleef_SLEEF_VECTOR_FLOAT_2)*1000);
	    for (float i = -10.1; i < 10 && success; i+=1) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i+j*0.0021);	
		}
		test_denormsp2_sp("test_Sleef_sincospif4_u35kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracyY_f(mpfr_cospi, y[k], x[k][0], 3.5);
	    }
	    for (float i = -10000-0.1; i < 10000 && success; i += 1100) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i+j*1.1);
		}
		test_denormsp2_sp("test_Sleef_sincospif4_u35kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracyY_f(mpfr_cospi, y[k], x[k][0], 3.5);
	    }
	    free(x);
	    free(y);
	    
	    x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*40);
	    y = malloc(sizeof(Sleef_SLEEF_VECTOR_FLOAT_2)*40);
	    for(i=1;i<10000 && success;i+=31) {
	      double start = u2f(f2u(M_PI_4 * i)-20);
	      for(int k = 0; k < 40; k++) {
	      	x[k] = makeVecf((float)flushToZero(u2f(f2u(start)+k)));
	      }
	      test_denormsp2_sp("test_Sleef_sincospif4_u35kvx", x, y, 40);
		
	      for (int k = 0; k < 40 && success; k++)
	      	checkAccuracyY_f(mpfr_cospi, y[k], x[k][0], 3.5);
	    }
	    
	    for(i=1;i<=20 && success;i++) {
	      double start = u2f(f2u(0.25 * i)-20);
	      for(int k = 0; k < 40; k++) {
	      	x[k] = makeVecf((float)flushToZero(u2f(f2u(start)+k)));
	      }
	      test_denormsp2_sp("test_Sleef_sincospif4_u35kvx", x, y, 20);
		
	      for (int k = 0; k < 20 && success; k++)
	      	checkAccuracyY_f(mpfr_cospi, y[k], x[k][0], 3.5);
	    }
	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "cos in sincospif_u05 : ");
    {
	    SLEEF_VECTOR_FLOAT *x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    Sleef_SLEEF_VECTOR_FLOAT_2 *y = malloc(sizeof(Sleef_SLEEF_VECTOR_FLOAT_2)*1000);
	    for (float i = -10.1; i < 10 && success; i+=1) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i+j*0.0021);	
		}
		test_denormsp2_sp("test_Sleef_sincospif4_u05kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracyY_f(mpfr_cospi, y[k], x[k][0], 0.506);
	    }
	    for (float i = -10000-0.1; i < 10000 && success; i += 1100) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i+j*1.1);
		}
		test_denormsp2_sp("test_Sleef_sincospif4_u05kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracyY_f(mpfr_cospi, y[k], x[k][0], 0.506);
	    }
	    free(x);
	    free(y);
	    
	    x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*40);
	    y = malloc(sizeof(Sleef_SLEEF_VECTOR_FLOAT_2)*40);
	    for(i=1;i<10000 && success;i+=31) {
	      double start = u2f(f2u(M_PI_4 * i)-20);
	      for(int k = 0; k < 40; k++) {
	      	x[k] = makeVecf((float)flushToZero(u2f(f2u(start)+k)));
	      }
	      test_denormsp2_sp("test_Sleef_sincospif4_u05kvx", x, y, 40);
		
	      for (int k = 0; k < 40 && success; k++)
	      	checkAccuracyY_f(mpfr_cospi, y[k], x[k][0], 0.506);
	    }
	    
	    for(i=1;i<=20 && success;i++) {
	      double start = u2f(f2u(0.25 * i)-20);
	      for(int k = 0; k < 40; k++) {
	      	x[k] = makeVecf((float)flushToZero(u2f(f2u(start)+k)));
	      }
	      test_denormsp2_sp("test_Sleef_sincospif4_u05kvx", x, y, 20);
		
	      for (int k = 0; k < 20 && success; k++)
	      	checkAccuracyY_f(mpfr_cospi, y[k], x[k][0], 0.506);
	    }
	    free(x);
	    free(y);
	    showResult(success);
    }

    mpfr_set_default_prec(53);
  
    //
  
    fprintf(stderr, "fastsinf_u3500 : ");
    {
	    SLEEF_VECTOR_FLOAT *x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    SLEEF_VECTOR_FLOAT *y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    for (float i = -32; i < 32 && success; i++) {
	    	for (int j = 0; j < 1000; j++)
			x[j] = makeVecf(i + j*0.001);
	      
		test_denormsp_sp("test_Sleef_fastsinf4_u3500kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy2_f(mpfr_sin, y[k], x[k][0], 350, 2e-6);
	    }
	    free(x);
	    free(y);
	    showResult(success);
    }

    fprintf(stderr, "fastcosf_u3500 : ");
    {
	    SLEEF_VECTOR_FLOAT *x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    SLEEF_VECTOR_FLOAT *y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    for (float i = -32; i < 32 && success; i++) {
	    	for (int j = 0; j < 1000; j++)
			x[j] = makeVecf(i + j*0.001);
	      
		test_denormsp_sp("test_Sleef_fastcosf4_u3500kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy2_f(mpfr_cos, y[k], x[k][0], 350, 2e-6);
	    }
	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "tanf : ");
    {
	    SLEEF_VECTOR_FLOAT *x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    SLEEF_VECTOR_FLOAT *y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    for (int i = -10; i < 10 && success; i++) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i+j*0.002);	
		}
		test_denormsp_sp("test_Sleef_tanf4_u35kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_f(mpfr_tan, y[k], x[k][0], 3.5);
	    }
	    for (float i = -10000; i < 10000 && success; i += 1100) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i+j*1.1);
		}
		test_denormsp_sp("test_Sleef_tanf4_u35kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_f(mpfr_tan, y[k], x[k][0], 3.5);
	    }
	    
	    free(x);
	    free(y);
	    x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1001);
	    y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1001);
	    for(i = 0; i < 1000; i++)
		    x[i] = makeVecf(pow(1.092, i));
	    x[1000] = makeVecf(70.936981201171875);
	    test_denormsp_sp("test_Sleef_tanf4_u35kvx", x, y, 1000);
	    for (i = 0; i < 1000 && success; i++)
	    	checkAccuracy_f(mpfr_tan, y[i], x[i][0], 3.5);

	    free(x);
	    free(y);
	    x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*40);
	    y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*40);
	    for(int i = 1; i < 10000 && success;i += 31) {
	      double start = u2f(f2u(M_PI_4 * i)-20);
	      for(int i = 0; i < 40; i++) {
	      	x[i] = makeVecf((float)flushToZero(u2f(f2u(start)+i)));
	      }
	      test_denormsp_sp("test_Sleef_tanf4_u35kvx", x, y, 40);
	      
	      for (int i = 0; i < 40 && success; i++)
	      	checkAccuracy_f(mpfr_tan, y[i], x[i][0], 3.5);
	    }

	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "tanf_u1 : ");
    {
	    SLEEF_VECTOR_FLOAT *x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    SLEEF_VECTOR_FLOAT *y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    for (int i = -10; i < 10 && success; i++) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i+j*0.002);	
		}
		test_denormsp_sp("test_Sleef_tanf4_u10kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_f(mpfr_tan, y[k], x[k][0], 1.0);
	    }
	    for (float i = -10000; i < 10000 && success; i += 1100) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i+j*1.1);
		}
		test_denormsp_sp("test_Sleef_tanf4_u10kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_f(mpfr_tan, y[k], x[k][0], 1.0);
	    }
	    
	    free(x);
	    free(y);
	    x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1001);
	    y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1001);
	    for(i = 0; i < 1000; i++)
		    x[i] = makeVecf(pow(1.092, i));
	    x[1000] = makeVecf(70.936981201171875);
	    test_denormsp_sp("test_Sleef_tanf4_u10kvx", x, y, 1000);
	    for (i = 0; i < 1000 && success; i++)
	    	checkAccuracy_f(mpfr_tan, y[i], x[i][0], 1.0);

	    free(x);
	    free(y);
	    x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*40);
	    y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*40);
	    for(int i = 1; i < 10000 && success;i += 31) {
	      double start = u2f(f2u(M_PI_4 * i)-20);
	      for(int i = 0; i < 40; i++) {
	      	x[i] = makeVecf((float)flushToZero(u2f(f2u(start)+i)));
	      }
	      test_denormsp_sp("test_Sleef_tanf4_u10kvx", x, y, 40);
	      
	      for (int i = 0; i < 40 && success; i++)
	      	checkAccuracy_f(mpfr_tan, y[i], x[i][0], 1.0);
	    }

	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "logf : ");
    {
	    SLEEF_VECTOR_FLOAT *x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    SLEEF_VECTOR_FLOAT *y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    for (float i = 0.0001; i < 10 && success; i+=1) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i + j*0.001);
		}
		test_denormsp_sp("test_Sleef_logf4_u35kvx", x, y, 1000);

		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_f(mpfr_log, y[k], x[k][0], 3.5);
	    }

	    for (float i = 0.0001; i < 10000 && success; i+=1000) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(pow(2.1, i + j*1.1));
		}
		test_denormsp_sp("test_Sleef_logf4_u35kvx", x, y, 1000);

		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_f(mpfr_log, y[k], x[k][0], 3.5);
	    }
	    free(x);
	    free(y);

	    x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*201);
	    y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*201);
	    for (i = 0; i <= 200; i++) {
	    	x[i] = makeVecf(i*10 - 1000);
	    }
	    test_denormsp_sp("test_Sleef_logf4_u35kvx", x, y, 201);
	    for (int k = 0; k < 201 && success; k++)
		checkAccuracy_f(mpfr_log, y[k], x[k][0], 3.5);
	    free(x);
	    free(y);

	    x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    for (i = 0; i < 1000; i++) {
	    	x[i] = makeVecf(FLT_MAX * pow(0.9314821319758632, i*10));
	    }
	    test_denormsp_sp("test_Sleef_logf4_u35kvx", x, y, 1000);
	    for (int k = 0; k < 1000 && success; k++)
		checkAccuracy_f(mpfr_log, y[k], x[k][0], 3.5);

	    for (i = 0; i < 1000; i++) {
	    	x[i] = makeVecf(pow(0.933254300796991, i*10));
	    }
	    test_denormsp_sp("test_Sleef_logf4_u35kvx", x, y, 1000);
	    for (int k = 0; k < 1000 && success; k++)
		checkAccuracy_f(mpfr_log, y[k], x[k][0], 3.5);
	    
	    for (i = 0; i < 1000; i++) {
	    	x[i] = makeVecf(FLT_MIN * pow(0.996323, i*10));
	    }
	    test_denormsp_sp("test_Sleef_logf4_u35kvx", x, y, 1000);
	    for (int k = 0; k < 1000 && success; k++)
		checkAccuracy_f(mpfr_log, y[k], x[k][0], 3.5);
	    
	    free(x);
	    free(y);
	    showResult(success);
    }

    //
  
    fprintf(stderr, "logf_u1 : ");
    {
	    SLEEF_VECTOR_FLOAT *x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    SLEEF_VECTOR_FLOAT *y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    for (float i = 0.0001; i < 10 && success; i+=1) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i + j*0.001);
		}
		test_denormsp_sp("test_Sleef_logf4_u10kvx", x, y, 1000);

		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_f(mpfr_log, y[k], x[k][0], 1.0);
	    }

	    for (float i = 0.0001; i < 10000 && success; i+=1000) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(pow(2.1, i + j*1.1));
		}
		test_denormsp_sp("test_Sleef_logf4_u10kvx", x, y, 1000);

		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_f(mpfr_log, y[k], x[k][0], 1.0);
	    }
	    free(x);
	    free(y);

	    x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*201);
	    y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*201);
	    for (i = 0; i <= 200; i++) {
	    	x[i] = makeVecf(i*10 - 1000);
	    }
	    test_denormsp_sp("test_Sleef_logf4_u10kvx", x, y, 201);
	    for (int k = 0; k < 201 && success; k++)
		checkAccuracy_f(mpfr_log, y[k], x[k][0], 1.0);
	    free(x);
	    free(y);

	    x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    for (i = 0; i < 1000; i++) {
	    	x[i] = makeVecf(FLT_MAX * pow(0.9314821319758632, i*10));
	    }
	    test_denormsp_sp("test_Sleef_logf4_u10kvx", x, y, 1000);
	    for (int k = 0; k < 1000 && success; k++)
		checkAccuracy_f(mpfr_log, y[k], x[k][0], 1.0);

	    for (i = 0; i < 1000; i++) {
	    	x[i] = makeVecf(pow(0.933254300796991, i*10));
	    }
	    test_denormsp_sp("test_Sleef_logf4_u10kvx", x, y, 1000);
	    for (int k = 0; k < 1000 && success; k++)
		checkAccuracy_f(mpfr_log, y[k], x[k][0], 1.0);
	    
	    for (i = 0; i < 1000; i++) {
	    	x[i] = makeVecf(FLT_MIN * pow(0.996323, i*10));
	    }
	    test_denormsp_sp("test_Sleef_logf4_u10kvx", x, y, 1000);
	    for (int k = 0; k < 1000 && success; k++)
		checkAccuracy_f(mpfr_log, y[k], x[k][0], 1.0);
	    
	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "expf : ");
    {
	    SLEEF_VECTOR_FLOAT *x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    SLEEF_VECTOR_FLOAT *y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    for (int i = -10; i < 10; i+=2) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i + j*0.002);
		}
		test_denormsp_sp("test_Sleef_expf4_u10kvx", x, y, 1000);

		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_f(mpfr_exp, y[k], x[k][0], 1.0);
	    }
	    
	    for (int i = 0; i < 2 && success; i++) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i*1000 + j*1.1 -1000);
		}
		test_denormsp_sp("test_Sleef_expf4_u10kvx", x, y, 1000);

		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_f(mpfr_exp, y[k], x[k][0], 1.0);
	    }
	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "powf : ");
    {
	    SLEEF_VECTOR_FLOAT *x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*333);
	    SLEEF_VECTOR_FLOAT *y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*333);
	    SLEEF_VECTOR_FLOAT *results = malloc(sizeof(SLEEF_VECTOR_FLOAT)*333);
	    for(double i = 0.1; i < 100 && success; i += 0.6) {
	      for(int j = 0; j < 333 && success; j ++) {
		      x[j] = makeVecf(i);
		      y[j] = makeVecf(j*0.6 - 100);
	      }
	      test_denormsp_sp_sp("test_Sleef_powf4_u10kvx", x, y, results, 333);
	      for (int k = 0; k < 333; k++)
	      	checkAccuracy_f_f(mpfr_pow, results[k], x[k][0], y[k][0], 1.0);
	      
	    }
	    free(x);
	    free(y);
	    free(results);
	    
	    x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    results = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    for (int i = -10; i < 10; i++) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i*100 +j*0.1);
			y[j] = makeVecf((double)i*0.6);
		}
	        test_denormsp_sp_sp("test_Sleef_powf4_u10kvx", x, y, results, 1000);	
	        for (int k = 0; k < 1000 && success; k++)
	       	  checkAccuracy_f_f(mpfr_pow, results[k], x[k][0], y[k][0], 1.0);
	    }
	    free(x);
	    free(y);
	    free(results);
	    showResult(success);
    }

    //

    fprintf(stderr, "fastpowf_u3500 : ");
    {
	    SLEEF_VECTOR_FLOAT *x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*100);
	    SLEEF_VECTOR_FLOAT *y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*100);
	    SLEEF_VECTOR_FLOAT *results = malloc(sizeof(SLEEF_VECTOR_FLOAT)*100);
	    for(float i = -25; i < 25 && success; i += 0.121) {
	      for(int j = 0; j < 100 && success; j++) {
		      x[j] = makeVecf(i);
		      y[j] = makeVecf((float)flushToZero((float)0.1 + j*0.251));
	      }
	      test_denormsp_sp_sp("test_Sleef_fastpowf4_u3500kvx", x, y, results, 100);
	      for (int k = 0; k < 100 && success; k++) {
		checkAccuracy2_f_f(mpfr_pow, results[k], x[k][0], y[k][0], 350, 2e-6);
	      }
	    }
	    free(x);
	    free(y);
	    free(results);
	    showResult(success);
    }

    //

    if (!deterministicMode) {
      fprintf(stderr, "sqrtf : ");
      {
      	      SLEEF_VECTOR_FLOAT *x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	      SLEEF_VECTOR_FLOAT *y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	      for (int i = -10000; i < 10000 && success; i+=2000) {
	      	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i + j*2.1);
		}
		test_denormsp_sp("test_Sleef_sqrtf4_kvx", x, y, 1000);
	        for (int k = 0; k < 1000 && success; k++)
	       	  checkAccuracy_f(mpfr_sqrt, y[k], x[k][0], 1.0);
	      }
	      free(x);
	      free(y);

	      x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*200);
	      y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*200);
	      for (i = 0; i < 200; i++) {
	      	x[i] = makeVecf(pow(2.1, i*10 -1000));
	      }
	      test_denormsp_sp("test_Sleef_sqrtf4_kvx", x, y, 200);
	      for (int k = 0; k < 200 && success; k++)
	       	checkAccuracy_f(mpfr_sqrt, y[k], x[k][0], 1.0);
		
	      free(x);
	      free(y);
	      showResult(success);
      }

      //

      fprintf(stderr, "sqrtf_u05 : ");
      {
      	      SLEEF_VECTOR_FLOAT *x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	      SLEEF_VECTOR_FLOAT *y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	      for (int i = -10000; i < 10000 && success; i+=2000) {
	      	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i + j*2.1);
		}
		test_denormsp_sp("test_Sleef_sqrtf4_u05kvx", x, y, 1000);
	        for (int k = 0; k < 1000 && success; k++)
	       	  checkAccuracy_f(mpfr_sqrt, y[k], x[k][0], 0.506);
	      }
	      free(x);
	      free(y);

	      x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*200);
	      y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*200);
	      for (i = 0; i < 200; i++) {
	      	x[i] = makeVecf(pow(2.1, i*10 -1000));
	      }
	      test_denormsp_sp("test_Sleef_sqrtf4_u05kvx", x, y, 200);
	      for (int k = 0; k < 200 && success; k++)
	       	checkAccuracy_f(mpfr_sqrt, y[k], x[k][0], 0.506);
		
	      free(x);
	      free(y);
	      showResult(success);
      }

      //

      fprintf(stderr, "sqrtf_u35 : ");
      {
      	      SLEEF_VECTOR_FLOAT *x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	      SLEEF_VECTOR_FLOAT *y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	      for (int i = -10000; i < 10000 && success; i+=2000) {
	      	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i + j*2.1);
		}
		test_denormsp_sp("test_Sleef_sqrtf4_u35kvx", x, y, 1000);
	        for (int k = 0; k < 1000 && success; k++)
	       	  checkAccuracy_f(mpfr_sqrt, y[k], x[k][0], 3.5);
	      }
	      free(x);
	      free(y);

	      x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*200);
	      y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*200);
	      for (i = 0; i < 200; i++) {
	      	x[i] = makeVecf(pow(2.1, i*10 -1000));
	      }
	      test_denormsp_sp("test_Sleef_sqrtf4_u35kvx", x, y, 200);
	      for (int k = 0; k < 200 && success; k++)
	       	checkAccuracy_f(mpfr_sqrt, y[k], x[k][0], 3.5);
		
	      free(x);
	      free(y);
	      showResult(success);
      }
    }
  
    //

    fprintf(stderr, "cbrtf : ");
      {
      	      SLEEF_VECTOR_FLOAT *x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	      SLEEF_VECTOR_FLOAT *y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	      for (int i = -10000; i < 10000 && success; i+=2000) {
	      	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i + j*2.1);
		}
		test_denormsp_sp("test_Sleef_cbrtf4_u35kvx", x, y, 1000);
	        for (int k = 0; k < 1000 && success; k++)
	       	  checkAccuracy_f(mpfr_cbrt, y[k], x[k][0], 3.5);
	      }
	      free(x);
	      free(y);

	      x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*200);
	      y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*200);
	      for (i = 0; i < 200; i++) {
	      	x[i] = makeVecf(pow(2.1, i*10 -1000));
	      }
	      test_denormsp_sp("test_Sleef_cbrtf4_u35kvx", x, y, 200);
	      for (int k = 0; k < 200 && success; k++)
	       	checkAccuracy_f(mpfr_cbrt, y[k], x[k][0], 3.5);
		
	      free(x);
	      free(y);
	      showResult(success);
      }
  
    //

    fprintf(stderr, "cbrtf_u1 : ");
      {
      	      SLEEF_VECTOR_FLOAT *x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	      SLEEF_VECTOR_FLOAT *y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	      for (int i = -10000; i < 10000 && success; i+=2000) {
	      	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i + j*2.1);
		}
		test_denormsp_sp("test_Sleef_cbrtf4_u10kvx", x, y, 1000);
	        for (int k = 0; k < 1000 && success; k++)
	       	  checkAccuracy_f(mpfr_cbrt, y[k], x[k][0], 1.0);
	      }
	      free(x);
	      free(y);

	      x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*200);
	      y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*200);
	      for (i = 0; i < 200; i++) {
	      	x[i] = makeVecf(pow(2.1, i*10 -1000));
	      }
	      test_denormsp_sp("test_Sleef_cbrtf4_u10kvx", x, y, 200);
	      for (int k = 0; k < 200 && success; k++)
	       	checkAccuracy_f(mpfr_cbrt, y[k], x[k][0], 1.0);
		
	      free(x);
	      free(y);
	      showResult(success);
      }

    //

    fprintf(stderr, "asinf : ");
    {
	    SLEEF_VECTOR_FLOAT *x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    SLEEF_VECTOR_FLOAT *y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    for (float i = -1; i < 1 && success; i += 0.2) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i + j*0.0002);
		}
		test_denormsp_sp("test_Sleef_asinf4_u35kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_f(mpfr_asin, y[k], x[k][0], 3.5);
	    }

	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "asinf_u1 : ");
    {
	    SLEEF_VECTOR_FLOAT *x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    SLEEF_VECTOR_FLOAT *y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    for (float i = -1; i < 1 && success; i += 0.2) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i + j*0.0002);
		}
		test_denormsp_sp("test_Sleef_asinf4_u10kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_f(mpfr_asin, y[k], x[k][0], 1.0);
	    }

	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "acosf : ");
    {
	    SLEEF_VECTOR_FLOAT *x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    SLEEF_VECTOR_FLOAT *y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    for (float i = -1; i < 1 && success; i += 0.2) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i + j*0.0002);
		}
		test_denormsp_sp("test_Sleef_acosf4_u35kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_f(mpfr_acos, y[k], x[k][0], 3.5);
	    }

	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "acosf_u1 : ");
    {
	    SLEEF_VECTOR_FLOAT *x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    SLEEF_VECTOR_FLOAT *y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    for (float i = -1; i < 1 && success; i += 0.2) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i + j*0.0002);
		}
		test_denormsp_sp("test_Sleef_acosf4_u10kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_f(mpfr_acos, y[k], x[k][0], 1.0);
	    }

	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "atanf : ");
    {
	    SLEEF_VECTOR_FLOAT *x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    SLEEF_VECTOR_FLOAT *y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    for (int i = -10; i < 10 && success; i++) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i + j*0.002);
		}
		test_denormsp_sp("test_Sleef_atanf4_u35kvx", x, y, 1000);

		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_f(mpfr_atan, y[k], x[k][0], 3.5);
	    }

	    for (int i = -10000; i < 10000 && success; i+=2000) {
	      	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i + j*2.1);
		}
		test_denormsp_sp("test_Sleef_atanf4_u35kvx", x, y, 1000);
	        for (int k = 0; k < 1000 && success; k++)
	       	  checkAccuracy_f(mpfr_atan, y[k], x[k][0], 3.5);
	    }

	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "atanf_u1 : ");
    {
	    SLEEF_VECTOR_FLOAT *x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    SLEEF_VECTOR_FLOAT *y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    for (int i = -10; i < 10 && success; i++) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i + j*0.002);
		}
		test_denormsp_sp("test_Sleef_atanf4_u10kvx", x, y, 1000);

		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_f(mpfr_atan, y[k], x[k][0], 1.0);
	    }

	    for (int i = -10000; i < 10000 && success; i+=2000) {
	      	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i + j*2.1);
		}
		test_denormsp_sp("test_Sleef_atanf4_u10kvx", x, y, 1000);
	        for (int k = 0; k < 1000 && success; k++)
	       	  checkAccuracy_f(mpfr_atan, y[k], x[k][0], 1.0);
	    }

	    free(x);
	    free(y);
	    showResult(success);
    }

    //
  
    fprintf(stderr, "atan2f : ");
    {
	    SLEEF_VECTOR_FLOAT *x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*134);
	    SLEEF_VECTOR_FLOAT *y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*134);
	    SLEEF_VECTOR_FLOAT *results = malloc(sizeof(SLEEF_VECTOR_FLOAT)*134);
	    for(float i = -10; i < 10 && success; i += 0.15) {
	      for(int j = 0; j < 134 && success; j++) { 
	      	      x[j] = makeVecf(i);
		      y[j] = makeVecf(j*0.15 - 10);
	      }

	      test_denormsp_sp_sp("test_Sleef_atan2f4_u35kvx", x, y, results, 134);
	      for (int k = 0; k < 134 && success; k++) 
		      checkAccuracy_f_f(mpfr_atan2, results[k], x[k][0], y[k][0], 3.5);
	    }
	    
	    for(float i = -100; i < 100 && success; i += 1.51) {
	      for(int j = 0; j < 134 && success; j ++) {
	      	x[j] = makeVecf(i);
		y[j] = makeVecf(j*1.51 - 100);
	      }
	      test_denormsp_sp_sp("test_Sleef_atan2f4_u35kvx", x, y, results, 134);
	      for (int k = 0; k < 134 && success; k++) 
		      checkAccuracy_f_f(mpfr_atan2, results[k], x[k][0], y[k][0], 3.5);
	    }

	    free(x);
	    free(y);
	    free(results);
	    showResult(success);
    }

    //
  
    fprintf(stderr, "atan2f_u1 : ");
    {
	    SLEEF_VECTOR_FLOAT *x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*134);
	    SLEEF_VECTOR_FLOAT *y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*134);
	    SLEEF_VECTOR_FLOAT *results = malloc(sizeof(SLEEF_VECTOR_FLOAT)*134);
	    for(float i = -10; i < 10 && success; i += 0.15) {
	      for(int j = 0; j < 134 && success; j++) { 
	      	      x[j] = makeVecf(i);
		      y[j] = makeVecf(j*0.15 - 10);
	      }

	      test_denormsp_sp_sp("test_Sleef_atan2f4_u10kvx", x, y, results, 134);
	      for (int k = 0; k < 134 && success; k++) 
		      checkAccuracy_f_f(mpfr_atan2, results[k], x[k][0], y[k][0], 1.0);
	    }
	    
	    for(float i = -100; i < 100 && success; i += 1.51) {
	      for(int j = 0; j < 134 && success; j ++) {
	      	x[j] = makeVecf(i);
		y[j] = makeVecf(j*1.51 - 100);
	      }
	      test_denormsp_sp_sp("test_Sleef_atan2f4_u10kvx", x, y, results, 134);
	      for (int k = 0; k < 134 && success; k++) 
		      checkAccuracy_f_f(mpfr_atan2, results[k], x[k][0], y[k][0], 1.0);
	    }

	    free(x);
	    free(y);
	    free(results);
	    showResult(success);
    }

    //

    fprintf(stderr, "sinhf : ");
    {
	    SLEEF_VECTOR_FLOAT *x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    SLEEF_VECTOR_FLOAT *y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    for (int i = -10; i < 10 && success; i++) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i + j*0.002);
		}
		test_denormsp_sp("test_Sleef_sinhf4_u10kvx", x, y, 1000);

		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_f(mpfr_sinh, y[k], x[k][0], 1.0);
	    }
	    free(x);
	    free(y);

	    x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*880);
	    y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*880);
	    for (int j = 0; j < 880; j++) {
		    x[j] = makeVecf(j*0.2 - 88);
  	    }

	    test_denormsp_sp("test_Sleef_sinhf4_u10kvx", x, y, 880);

	    for (int k = 0; k < 880 && success; k++)
	    	    checkAccuracy_f(mpfr_sinh, y[k], x[k][0], 1.0);

	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "coshf : ");
    {
	    SLEEF_VECTOR_FLOAT *x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    SLEEF_VECTOR_FLOAT *y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    for (int i = -10; i < 10 && success; i++) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i + j*0.002);
		}
		test_denormsp_sp("test_Sleef_coshf4_u10kvx", x, y, 1000);

		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_f(mpfr_cosh, y[k], x[k][0], 1.0);
	    }
	    free(x);
	    free(y);

	    x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*880);
	    y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*880);
	    for (int j = 0; j < 880; j++) {
		    x[j] = makeVecf(j*0.2 - 88);
  	    }

	    test_denormsp_sp("test_Sleef_coshf4_u10kvx", x, y, 880);

	    for (int k = 0; k < 880 && success; k++)
	    	    checkAccuracy_f(mpfr_cosh, y[k], x[k][0], 1.0);

	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "tanhf : ");
    {
	    SLEEF_VECTOR_FLOAT *x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    SLEEF_VECTOR_FLOAT *y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    for (int i = -10; i < 10 && success; i++) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i + j*0.002);
		}
		test_denormsp_sp("test_Sleef_tanhf4_u10kvx", x, y, 1000);

		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_f(mpfr_tanh, y[k], x[k][0], 1.0);
	    }
	    free(x);
	    free(y);

	    x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    for (float i = -1000; i < 1000 && success; i+= 200) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i + j*0.2);
		}

		test_denormsp_sp("test_Sleef_tanhf4_u10kvx", x, y, 1000);

		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_f(mpfr_tanh, y[k], x[k][0], 1.0);
	    }

	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "sinhf_u35 : ");
    {
	    SLEEF_VECTOR_FLOAT *x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    SLEEF_VECTOR_FLOAT *y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    for (int i = -10; i < 10 && success; i++) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i + j*0.002);
		}
		test_denormsp_sp("test_Sleef_sinhf4_u35kvx", x, y, 1000);

		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_f(mpfr_sinh, y[k], x[k][0], 3.5);
	    }
	    free(x);
	    free(y);

	    x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*880);
	    y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*880);
	    for (int j = 0; j < 880; j++) {
		    x[j] = makeVecf(j*0.2 - 88);
  	    }

	    test_denormsp_sp("test_Sleef_sinhf4_u35kvx", x, y, 880);

	    for (int k = 0; k < 880 && success; k++)
	    	    checkAccuracy_f(mpfr_sinh, y[k], x[k][0], 3.5);

	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "coshf_u35 : ");
    {
	    SLEEF_VECTOR_FLOAT *x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    SLEEF_VECTOR_FLOAT *y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    for (int i = -10; i < 10 && success; i++) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i + j*0.002);
		}
		test_denormsp_sp("test_Sleef_coshf4_u35kvx", x, y, 1000);

		for (int k = 0; k < 3.50 && success; k++)
			checkAccuracy_f(mpfr_cosh, y[k], x[k][0], 3.5);
	    }
	    free(x);
	    free(y);

	    x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*880);
	    y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*880);
	    for (int j = 0; j < 880; j++) {
		    x[j] = makeVecf(j*0.2 - 88);
  	    }

	    test_denormsp_sp("test_Sleef_coshf4_u35kvx", x, y, 880);

	    for (int k = 0; k < 880 && success; k++)
	    	    checkAccuracy_f(mpfr_cosh, y[k], x[k][0], 3.5);

	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "tanhf_u35 : ");
    {
	    SLEEF_VECTOR_FLOAT *x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    SLEEF_VECTOR_FLOAT *y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    for (int i = -10; i < 10 && success; i++) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i + j*0.002);
		}
		test_denormsp_sp("test_Sleef_tanhf4_u35kvx", x, y, 1000);

		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_f(mpfr_tanh, y[k], x[k][0], 3.5);
	    }
	    free(x);
	    free(y);

	    x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    for (float i = -1000; i < 1000 && success; i+= 200) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i + j*0.2);
		}

		test_denormsp_sp("test_Sleef_tanhf4_u35kvx", x, y, 1000);

		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_f(mpfr_tanh, y[k], x[k][0], 3.5);
	    }

	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "asinhf : ");
    {
	    SLEEF_VECTOR_FLOAT *x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    SLEEF_VECTOR_FLOAT *y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    for (int i = -10; i < 10 && success; i++) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i + j*0.002);
		}
		test_denormsp_sp("test_Sleef_asinhf4_u10kvx", x, y, 1000);

		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_f(mpfr_asinh, y[k], x[k][0], 1.0);
	    }
	    free(x);
	    free(y);

	    x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    for (float i = -1000; i < 1000 && success; i+= 200) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i + j*0.2);
		}

		test_denormsp_sp("test_Sleef_asinhf4_u10kvx", x, y, 1000);

		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_f(mpfr_asinh, y[k], x[k][0], 1.0);
	    }

	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "acoshf : ");
    {
	    SLEEF_VECTOR_FLOAT *x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    SLEEF_VECTOR_FLOAT *y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    for (int i = 1; i < 10 && success; i++) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i + j*0.002);
		}
		test_denormsp_sp("test_Sleef_acoshf4_u10kvx", x, y, 1000);

		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_f(mpfr_acosh, y[k], x[k][0], 1.0);
	    }
	    free(x);
	    free(y);

	    x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    for (float i = 1; i < 1000 && success; i+= 200) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i + j*0.2);
		}

		test_denormsp_sp("test_Sleef_acoshf4_u10kvx", x, y, 1000);

		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_f(mpfr_acosh, y[k], x[k][0], 1.0);
	    }

	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "atanhf : ");
    {
	    SLEEF_VECTOR_FLOAT *x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    SLEEF_VECTOR_FLOAT *y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    for (int i = -10; i < 10 && success; i++) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i + j*0.002);
		}
		test_denormsp_sp("test_Sleef_atanhf4_u10kvx", x, y, 1000);

		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_f(mpfr_atanh, y[k], x[k][0], 1.0);
	    }
	    free(x);
	    free(y);

	    x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    for (float i = -1000; i < 1000 && success; i+= 200) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i + j*0.2);
		}

		test_denormsp_sp("test_Sleef_atanhf4_u10kvx", x, y, 1000);

		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_f(mpfr_atanh, y[k], x[k][0], 1.0);
	    }

	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "exp2f : ");
    {
	    SLEEF_VECTOR_FLOAT *x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    SLEEF_VECTOR_FLOAT *y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    for (int i = -10; i < 10 && success; i++) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i + j*0.002);
		}
		test_denormsp_sp("test_Sleef_exp2f4_u10kvx", x, y, 1000);

		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_f(mpfr_exp2, y[k], x[k][0], 1.0);
	    }
	    free(x);
	    free(y);

	    x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    for (float i = -1000; i < 1000 && success; i+= 200) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i + j*0.2);
		}

		test_denormsp_sp("test_Sleef_exp2f4_u10kvx", x, y, 1000);

		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_f(mpfr_exp2, y[k], x[k][0], 1.0);
	    }

	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "exp10f : ");
    {
	    SLEEF_VECTOR_FLOAT *x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    SLEEF_VECTOR_FLOAT *y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    for (int i = -10; i < 10 && success; i+=2) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i + j*0.002);
		}
		test_denormsp_sp("test_Sleef_exp10f4_u10kvx", x, y, 1000);

		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_f(mpfr_exp10, y[k], x[k][0], 1.0);
	    }
	    free(x);
	    free(y);
	    
	    x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*600);
	    y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*600);
	    for (float i = -300; i < 300 && success; i+= 60) {
	    	for (int j = 0; j < 600; j++) {
			x[j] = makeVecf(i + j*0.1);
		}

		test_denormsp_sp("test_Sleef_exp10f4_u10kvx", x, y, 600);

		for (int k = 0; k < 600 && success; k++)
			checkAccuracy_f(mpfr_exp10, y[k], x[k][0], 1.0);
	    }

	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "exp2f_u35 : ");
    {
	    SLEEF_VECTOR_FLOAT *x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    SLEEF_VECTOR_FLOAT *y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    for (int i = -10; i < 10 && success; i++) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i + j*0.002);
		}
		test_denormsp_sp("test_Sleef_exp2f4_u35kvx", x, y, 1000);

		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_f(mpfr_exp2, y[k], x[k][0], 3.5);
	    }
	    free(x);
	    free(y);

	    x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    for (float i = -1000; i < 1000 && success; i+= 200) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i + j*0.2);
		}

		test_denormsp_sp("test_Sleef_exp2f4_u35kvx", x, y, 1000);

		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_f(mpfr_exp2, y[k], x[k][0], 3.5);
	    }

	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "exp10f_u35 : ");
    {
	    SLEEF_VECTOR_FLOAT *x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    SLEEF_VECTOR_FLOAT *y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    for (int i = -10; i < 10 && success; i+=2) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i + j*0.002);
		}
		test_denormsp_sp("test_Sleef_exp10f4_u35kvx", x, y, 1000);

		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_f(mpfr_exp10, y[k], x[k][0], 3.5);
	    }
	    free(x);
	    free(y);
	    
	    x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*600);
	    y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*600);
	    for (float i = -300; i < 300 && success; i+= 60) {
	    	for (int j = 0; j < 600; j++) {
			x[j] = makeVecf(i + j*0.1);
		}

		test_denormsp_sp("test_Sleef_exp10f4_u35kvx", x, y, 600);

		for (int k = 0; k < 600 && success; k++)
			checkAccuracy_f(mpfr_exp10, y[k], x[k][0], 3.5);
	    }

	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "expm1f : ");
    {
	    SLEEF_VECTOR_FLOAT *x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    SLEEF_VECTOR_FLOAT *y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    for (int i = -10; i < 10 && success; i+=2) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i + j*0.002);
		}
		test_denormsp_sp("test_Sleef_expm1f4_u10kvx", x, y, 1000);

		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_f(mpfr_expm1, y[k], x[k][0], 1.0);
	    }

	    for (int i = -1000; i < 1000 && success; i+=200) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i + j*0.21);
		}
		test_denormsp_sp("test_Sleef_expm1f4_u10kvx", x, y, 1000);

		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_f(mpfr_expm1, y[k], x[k][0], 1.0);
	    }
	    free(x);
	    free(y);
	    
	    x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*500);
	    y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*500);
	    for(int i = 0; i < 300 && success; i += 100) {
	    	for (int j = 0; j < 500; j++)
		    x[j] = makeVecf(pow(10, -j*0.21));

		test_denormsp_sp("test_Sleef_expm1f4_u10kvx", x, y, 500);

		for (int k = 0; k < 500 && success; k++)
			checkAccuracy_f(mpfr_expm1, y[k], x[k][0], 1.0);
	    }
	    for(int i = 0; i < 300 && success; i += 100) {
	    	for (int j = 0; j < 500; j++)
		    x[j] = makeVecf(-pow(10, -j*0.21));

		test_denormsp_sp("test_Sleef_expm1f4_u10kvx", x, y, 500);

		for (int k = 0; k < 500 && success; k++)
			checkAccuracy_f(mpfr_expm1, y[k], x[k][0], 1.0);
	    }

	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "log10f : ");
    {
	    SLEEF_VECTOR_FLOAT *x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    SLEEF_VECTOR_FLOAT *y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    for (float i = 0.0001; i < 10 && success; i+=1) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i + j*0.001);
		}
		test_denormsp_sp("test_Sleef_log10f4_u10kvx", x, y, 1000);

		for (int k = 0; k < 1000; k++)
			checkAccuracy_f(mpfr_log10, y[k], x[k][0], 1.0);
	    }

	    for (float i = 0.0001; i < 10000 && success; i+=1000) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i + j*1.1);
		}
		test_denormsp_sp("test_Sleef_log10f4_u10kvx", x, y, 1000);

		for (int k = 0; k < 1000; k++)
			checkAccuracy_f(mpfr_log10, y[k], x[k][0], 1.0);
	    }
	    free(x);
	    free(y);

	    x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    
	    for (i = 0; i < 1000; i++) {
	    	x[i] = makeVecf(DBL_MIN * pow(0.996323, i*10));
	    }
	    test_denormsp_sp("test_Sleef_log10f4_u10kvx", x, y, 1000);
	    for (int k = 0; k < 1000; k++)
		checkAccuracy_f(mpfr_log10, y[k], x[k][0], 1.0);
	    
	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "log2f : ");
    {
	    SLEEF_VECTOR_FLOAT *x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    SLEEF_VECTOR_FLOAT *y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    for (float i = 0.0001; i < 10 && success; i+=1) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i + j*0.001);
		}
		test_denormsp_sp("test_Sleef_log2f4_u10kvx", x, y, 1000);

		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_f(mpfr_log2, y[k], x[k][0], 1.0);
	    }

	    for (float i = 0.0001; i < 10000 && success; i+=1000) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i + j*1.1);
		}
		test_denormsp_sp("test_Sleef_log2f4_u10kvx", x, y, 1000);

		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_f(mpfr_log2, y[k], x[k][0], 1.0);
	    }
	    free(x);
	    free(y);

	    x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    
	    for (i = 0; i < 1000; i++) {
	    	x[i] = makeVecf(FLT_MIN * pow(0.996323, i*10));
	    }
	    test_denormsp_sp("test_Sleef_log2f4_u10kvx", x, y, 1000);
	    for (int k = 0; k < 1000; k++)
		checkAccuracy_f(mpfr_log2, y[k], x[k][0], 1.0);
	    
	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "log2f_u35 : ");
    {
	    SLEEF_VECTOR_FLOAT *x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    SLEEF_VECTOR_FLOAT *y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    for (float i = 0.0001; i < 10 && success; i+=1) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i + j*0.001);
		}
		test_denormsp_sp("test_Sleef_log2f4_u35kvx", x, y, 1000);

		for (int k = 0; k < 1000; k++)
			checkAccuracy_f(mpfr_log2, y[k], x[k][0], 3.5);
	    }

	    for (float i = 0.0001; i < 10000 && success; i+=1000) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i + j*1.1);
		}
		test_denormsp_sp("test_Sleef_log2f4_u35kvx", x, y, 1000);

		for (int k = 0; k < 1000; k++)
			checkAccuracy_f(mpfr_log2, y[k], x[k][0], 3.5);
	    }
	    free(x);
	    free(y);

	    x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    
	    for (i = 0; i < 1000; i++) {
	    	x[i] = makeVecf(FLT_MIN * pow(0.996323, i*10));
	    }
	    test_denormsp_sp("test_Sleef_log2f4_u35kvx", x, y, 1000);
	    for (int k = 0; k < 1000; k++)
		checkAccuracy_f(mpfr_log2, y[k], x[k][0], 3.5);
	    
	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "log1pf : ");
    {
	    SLEEF_VECTOR_FLOAT *x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    SLEEF_VECTOR_FLOAT *y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    for (float i = 0.0001; i < 10 && success; i+=1) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i + j*0.001);
		}
		test_denormsp_sp("test_Sleef_log1pf4_u10kvx", x, y, 1000);

		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_f(mpfr_log1p, y[k], x[k][0], 1.0);
	    }
	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "lgammaf_u1 : ");
    {
	    SLEEF_VECTOR_FLOAT *x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    SLEEF_VECTOR_FLOAT *y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
 	    for (int i = -5000; i < 5000; i += 1000) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i + j*1.1);
		}
		test_denormsp_sp("test_Sleef_lgammaf4_u10kvx", x, y, 1000);
		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_f(mpfr_lgamma_nosign, y[k], x[k][0], 1.0);
	    }

	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "tgammaf_u1 : ");
    {
	    SLEEF_VECTOR_FLOAT *x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    SLEEF_VECTOR_FLOAT *y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    for (int i = -10; i < 10 && success; i+=2) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i + j*0.002);
		}
		test_denormsp_sp("test_Sleef_tgammaf4_u10kvx", x, y, 1000);

		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_f(mpfr_gamma, y[k], x[k][0], 1.0);
	    }
	    
	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "erff_u1 : ");
    {
	    SLEEF_VECTOR_FLOAT *x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    SLEEF_VECTOR_FLOAT *y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    for (int i = -100; i < 100 && success; i+=20) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i + j*0.02);
		}
		test_denormsp_sp("test_Sleef_erff4_u10kvx", x, y, 1000);

		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_f(mpfr_erf, y[k], x[k][0], 1.0);
	    }
	    
	    free(x);
	    free(y);
	    showResult(success);
    }

    //

    fprintf(stderr, "erfcf_u15 : ");
    {
	    SLEEF_VECTOR_FLOAT *x = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    SLEEF_VECTOR_FLOAT *y = malloc(sizeof(SLEEF_VECTOR_FLOAT)*1000);
	    for (float i = -1; i < 8 && success; i+=1) {
	    	for (int j = 0; j < 1000; j++) {
			x[j] = makeVecf(i + j*0.001);
		}
		test_denormsp_sp("test_Sleef_erfcf4_u15kvx", x, y, 1000);

		for (int k = 0; k < 1000 && success; k++)
			checkAccuracy_f(mpfr_erfc, y[k], x[k][0], 1.5);
	    }
	    
	    free(x);
	    free(y);
	    showResult(success);
    }
  }
  mpfr_clears(frc, frt, frx, fry, frz, NULL);
}




int main(int argc, char **argv) {
  context = createContext();
  if (context == NULL) {
    fprintf(stderr, "Failed to create OpenCL context.\n");
    return 1;
  }
  commandQueue = createCommandQueue(context, &device);
  if (commandQueue == NULL) {
    cleanup(context, commandQueue, program, kernel, memObjects);
    return 1;
  }

  program = createProgramFromBinary(context, device, "kernels.cl.pocl");
  if (program == NULL) {
    cleanup(context, commandQueue, program, kernel, memObjects);
    return 1;
  }

  printf("\n\n*** Now testing kvx\n");
  
  enableDP = 1;
  enableSP = 1;

  mpfr_set_default_prec(64);

  do_test();
  cleanup(context, commandQueue, program, kernel, memObjects);

  if (allTestsPassed) {
    fprintf(stderr, "\n\n*** All tests passed\n");
  } else {
    fprintf(stderr, "\n\n*** There were errors in some tests\n");
  }

  if (allTestsPassed) return 0;

  return -1;
}
