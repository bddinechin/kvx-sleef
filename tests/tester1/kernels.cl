
///////////////////////// Type defs ////////////////////////////
typedef struct {
  double2 x,y;
} Sleef_SLEEF_VECTOR_DOUBLE_2;

typedef struct {
  float4 x,y;
} Sleef_SLEEF_VECTOR_FLOAT_2;

//////////////// Sleef functions declaration //////////////////

__attribute__((mppa_native))
double2 Sleef_sind2_u35kvx(double2 arg);

__kernel void test_Sleef_sind2_u35kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_sind2_u35kvx(in[i]);
	}

__attribute__((mppa_native))
double2 Sleef_cosd2_u35kvx(double2 arg);

__kernel void test_Sleef_cosd2_u35kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_cosd2_u35kvx(in[i]);
	}

__attribute__((mppa_native))
double2 Sleef_tand2_u35kvx(double2 arg);

__kernel void test_Sleef_tand2_u35kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_tand2_u35kvx(in[i]);
	}

__attribute__((mppa_native))
double2 Sleef_asind2_u35kvx(double2 arg);

__kernel void test_Sleef_asind2_u35kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_asind2_u35kvx(in[i]);
	}

__attribute__((mppa_native))
double2 Sleef_acosd2_u35kvx(double2 arg);

__kernel void test_Sleef_acosd2_u35kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_acosd2_u35kvx(in[i]);
	}

__attribute__((mppa_native))
double2 Sleef_atand2_u35kvx(double2 arg);

__kernel void test_Sleef_atand2_u35kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_atand2_u35kvx(in[i]);
	}

__attribute__((mppa_native))
double2 Sleef_logd2_u35kvx(double2 arg);

__kernel void test_Sleef_logd2_u35kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_logd2_u35kvx(in[i]);
	}

__attribute__((mppa_native))
double2 Sleef_cbrtd2_u35kvx(double2 arg);

__kernel void test_Sleef_cbrtd2_u35kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_cbrtd2_u35kvx(in[i]);
	}

__attribute__((mppa_native))
double2 Sleef_sind2_u10kvx(double2 arg);

__kernel void test_Sleef_sind2_u10kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_sind2_u10kvx(in[i]);
	}

__attribute__((mppa_native))
double2 Sleef_cosd2_u10kvx(double2 arg);

__kernel void test_Sleef_cosd2_u10kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_cosd2_u10kvx(in[i]);
	}

__attribute__((mppa_native))
double2 Sleef_tand2_u10kvx(double2 arg);

__kernel void test_Sleef_tand2_u10kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_tand2_u10kvx(in[i]);
	}

__attribute__((mppa_native))
double2 Sleef_asind2_u10kvx(double2 arg);

__kernel void test_Sleef_asind2_u10kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_asind2_u10kvx(in[i]);
	}

__attribute__((mppa_native))
double2 Sleef_acosd2_u10kvx(double2 arg);

__kernel void test_Sleef_acosd2_u10kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_acosd2_u10kvx(in[i]);
	}

__attribute__((mppa_native))
double2 Sleef_atand2_u10kvx(double2 arg);

__kernel void test_Sleef_atand2_u10kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_atand2_u10kvx(in[i]);
	}

__attribute__((mppa_native))
double2 Sleef_logd2_u10kvx(double2 arg);

__kernel void test_Sleef_logd2_u10kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_logd2_u10kvx(in[i]);
	}

__attribute__((mppa_native))
double2 Sleef_cbrtd2_u10kvx(double2 arg);

__kernel void test_Sleef_cbrtd2_u10kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_cbrtd2_u10kvx(in[i]);
	}

__attribute__((mppa_native))
double2 Sleef_expd2_u10kvx(double2 arg);

__kernel void test_Sleef_expd2_u10kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_expd2_u10kvx(in[i]);
	}

__attribute__((mppa_native))
double2 Sleef_sinhd2_u10kvx(double2 arg);

__kernel void test_Sleef_sinhd2_u10kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_sinhd2_u10kvx(in[i]);
	}

__attribute__((mppa_native))
double2 Sleef_coshd2_u10kvx(double2 arg);

__kernel void test_Sleef_coshd2_u10kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_coshd2_u10kvx(in[i]);
	}

__attribute__((mppa_native))
double2 Sleef_tanhd2_u10kvx(double2 arg);

__kernel void test_Sleef_tanhd2_u10kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_tanhd2_u10kvx(in[i]);
	}

__attribute__((mppa_native))
double2 Sleef_sinhd2_u35kvx(double2 arg);

__kernel void test_Sleef_sinhd2_u35kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_sinhd2_u35kvx(in[i]);
	}

__attribute__((mppa_native))
double2 Sleef_coshd2_u35kvx(double2 arg);

__kernel void test_Sleef_coshd2_u35kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_coshd2_u35kvx(in[i]);
	}

__attribute__((mppa_native))
double2 Sleef_tanhd2_u35kvx(double2 arg);

__kernel void test_Sleef_tanhd2_u35kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_tanhd2_u35kvx(in[i]);
	}

__attribute__((mppa_native))
double2 Sleef_asinhd2_u10kvx(double2 arg);

__kernel void test_Sleef_asinhd2_u10kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_asinhd2_u10kvx(in[i]);
	}

__attribute__((mppa_native))
double2 Sleef_acoshd2_u10kvx(double2 arg);

__kernel void test_Sleef_acoshd2_u10kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_acoshd2_u10kvx(in[i]);
	}

__attribute__((mppa_native))
double2 Sleef_atanhd2_u10kvx(double2 arg);

__kernel void test_Sleef_atanhd2_u10kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_atanhd2_u10kvx(in[i]);
	}

__attribute__((mppa_native))
double2 Sleef_exp2d2_u10kvx(double2 arg);

__kernel void test_Sleef_exp2d2_u10kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_exp2d2_u10kvx(in[i]);
	}

__attribute__((mppa_native))
double2 Sleef_exp2d2_u35kvx(double2 arg);

__kernel void test_Sleef_exp2d2_u35kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_exp2d2_u35kvx(in[i]);
	}

__attribute__((mppa_native))
double2 Sleef_exp10d2_u10kvx(double2 arg);

__kernel void test_Sleef_exp10d2_u10kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_exp10d2_u10kvx(in[i]);
	}

__attribute__((mppa_native))
double2 Sleef_exp10d2_u35kvx(double2 arg);

__kernel void test_Sleef_exp10d2_u35kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_exp10d2_u35kvx(in[i]);
	}

__attribute__((mppa_native))
double2 Sleef_expm1d2_u10kvx(double2 arg);

__kernel void test_Sleef_expm1d2_u10kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_expm1d2_u10kvx(in[i]);
	}

__attribute__((mppa_native))
double2 Sleef_log10d2_u10kvx(double2 arg);

__kernel void test_Sleef_log10d2_u10kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_log10d2_u10kvx(in[i]);
	}

__attribute__((mppa_native))
double2 Sleef_log2d2_u10kvx(double2 arg);

__kernel void test_Sleef_log2d2_u10kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_log2d2_u10kvx(in[i]);
	}

__attribute__((mppa_native))
double2 Sleef_log2d2_u35kvx(double2 arg);

__kernel void test_Sleef_log2d2_u35kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_log2d2_u35kvx(in[i]);
	}

__attribute__((mppa_native))
double2 Sleef_log1pd2_u10kvx(double2 arg);

__kernel void test_Sleef_log1pd2_u10kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_log1pd2_u10kvx(in[i]);
	}

__attribute__((mppa_native))
double2 Sleef_sinpid2_u05kvx(double2 arg);

__kernel void test_Sleef_sinpid2_u05kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_sinpid2_u05kvx(in[i]);
	}

__attribute__((mppa_native))
double2 Sleef_cospid2_u05kvx(double2 arg);

__kernel void test_Sleef_cospid2_u05kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_cospid2_u05kvx(in[i]);
	}

__attribute__((mppa_native))
double2 Sleef_sqrtd2_kvx(double2 arg);

__kernel void test_Sleef_sqrtd2_kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_sqrtd2_kvx(in[i]);
	}

__attribute__((mppa_native))
double2 Sleef_sqrtd2_u05kvx(double2 arg);

__kernel void test_Sleef_sqrtd2_u05kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_sqrtd2_u05kvx(in[i]);
	}

__attribute__((mppa_native))
double2 Sleef_sqrtd2_u35kvx(double2 arg);

__kernel void test_Sleef_sqrtd2_u35kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_sqrtd2_u35kvx(in[i]);
	}

__attribute__((mppa_native))
double2 Sleef_fabsd2_kvx(double2 arg);

__kernel void test_Sleef_fabsd2_kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_fabsd2_kvx(in[i]);
	}

__attribute__((mppa_native))
double2 Sleef_truncd2_kvx(double2 arg);

__kernel void test_Sleef_truncd2_kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_truncd2_kvx(in[i]);
	}

__attribute__((mppa_native))
double2 Sleef_floord2_kvx(double2 arg);

__kernel void test_Sleef_floord2_kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_floord2_kvx(in[i]);
	}

__attribute__((mppa_native))
double2 Sleef_ceild2_kvx(double2 arg);

__kernel void test_Sleef_ceild2_kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_ceild2_kvx(in[i]);
	}

__attribute__((mppa_native))
double2 Sleef_roundd2_kvx(double2 arg);

__kernel void test_Sleef_roundd2_kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_roundd2_kvx(in[i]);
	}

__attribute__((mppa_native))
double2 Sleef_rintd2_kvx(double2 arg);

__kernel void test_Sleef_rintd2_kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_rintd2_kvx(in[i]);
	}

__attribute__((mppa_native))
double2 Sleef_frfrexpd2_kvx(double2 arg);

__kernel void test_Sleef_frfrexpd2_kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_frfrexpd2_kvx(in[i]);
	}

__attribute__((mppa_native))
double2 Sleef_lgammad2_u10kvx(double2 arg);

__kernel void test_Sleef_lgammad2_u10kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_lgammad2_u10kvx(in[i]);
	}

__attribute__((mppa_native))
double2 Sleef_tgammad2_u10kvx(double2 arg);

__kernel void test_Sleef_tgammad2_u10kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_tgammad2_u10kvx(in[i]);
	}

__attribute__((mppa_native))
double2 Sleef_erfd2_u10kvx(double2 arg);

__kernel void test_Sleef_erfd2_u10kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_erfd2_u10kvx(in[i]);
	}

__attribute__((mppa_native))
double2 Sleef_erfcd2_u15kvx(double2 arg);

__kernel void test_Sleef_erfcd2_u15kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_erfcd2_u15kvx(in[i]);
	}

__attribute__((mppa_native))
float4 Sleef_sinf4_u35kvx(float4 arg);

__kernel void test_Sleef_sinf4_u35kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = Sleef_sinf4_u35kvx(in[i]);
	}

__attribute__((mppa_native))
float4 Sleef_cosf4_u35kvx(float4 arg);

__kernel void test_Sleef_cosf4_u35kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = Sleef_cosf4_u35kvx(in[i]);
	}

__attribute__((mppa_native))
float4 Sleef_tanf4_u35kvx(float4 arg);

__kernel void test_Sleef_tanf4_u35kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = Sleef_tanf4_u35kvx(in[i]);
	}

__attribute__((mppa_native))
float4 Sleef_asinf4_u35kvx(float4 arg);

__kernel void test_Sleef_asinf4_u35kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = Sleef_asinf4_u35kvx(in[i]);
	}

__attribute__((mppa_native))
float4 Sleef_acosf4_u35kvx(float4 arg);

__kernel void test_Sleef_acosf4_u35kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = Sleef_acosf4_u35kvx(in[i]);
	}

__attribute__((mppa_native))
float4 Sleef_atanf4_u35kvx(float4 arg);

__kernel void test_Sleef_atanf4_u35kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = Sleef_atanf4_u35kvx(in[i]);
	}

__attribute__((mppa_native))
float4 Sleef_logf4_u35kvx(float4 arg);

__kernel void test_Sleef_logf4_u35kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = Sleef_logf4_u35kvx(in[i]);
	}

__attribute__((mppa_native))
float4 Sleef_cbrtf4_u35kvx(float4 arg);

__kernel void test_Sleef_cbrtf4_u35kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = Sleef_cbrtf4_u35kvx(in[i]);
	}

__attribute__((mppa_native))
float4 Sleef_sinf4_u10kvx(float4 arg);

__kernel void test_Sleef_sinf4_u10kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = Sleef_sinf4_u10kvx(in[i]);
	}

__attribute__((mppa_native))
float4 Sleef_cosf4_u10kvx(float4 arg);

__kernel void test_Sleef_cosf4_u10kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = Sleef_cosf4_u10kvx(in[i]);
	}

__attribute__((mppa_native))
float4 Sleef_tanf4_u10kvx(float4 arg);

__kernel void test_Sleef_tanf4_u10kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = Sleef_tanf4_u10kvx(in[i]);
	}

__attribute__((mppa_native))
float4 Sleef_asinf4_u10kvx(float4 arg);

__kernel void test_Sleef_asinf4_u10kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = Sleef_asinf4_u10kvx(in[i]);
	}

__attribute__((mppa_native))
float4 Sleef_acosf4_u10kvx(float4 arg);

__kernel void test_Sleef_acosf4_u10kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = Sleef_acosf4_u10kvx(in[i]);
	}

__attribute__((mppa_native))
float4 Sleef_atanf4_u10kvx(float4 arg);

__kernel void test_Sleef_atanf4_u10kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = Sleef_atanf4_u10kvx(in[i]);
	}

__attribute__((mppa_native))
float4 Sleef_logf4_u10kvx(float4 arg);

__kernel void test_Sleef_logf4_u10kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = Sleef_logf4_u10kvx(in[i]);
	}

__attribute__((mppa_native))
float4 Sleef_cbrtf4_u10kvx(float4 arg);

__kernel void test_Sleef_cbrtf4_u10kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = Sleef_cbrtf4_u10kvx(in[i]);
	}

__attribute__((mppa_native))
float4 Sleef_expf4_u10kvx(float4 arg);

__kernel void test_Sleef_expf4_u10kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = Sleef_expf4_u10kvx(in[i]);
	}

__attribute__((mppa_native))
float4 Sleef_sinhf4_u10kvx(float4 arg);

__kernel void test_Sleef_sinhf4_u10kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = Sleef_sinhf4_u10kvx(in[i]);
	}

__attribute__((mppa_native))
float4 Sleef_coshf4_u10kvx(float4 arg);

__kernel void test_Sleef_coshf4_u10kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = Sleef_coshf4_u10kvx(in[i]);
	}

__attribute__((mppa_native))
float4 Sleef_tanhf4_u10kvx(float4 arg);

__kernel void test_Sleef_tanhf4_u10kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = Sleef_tanhf4_u10kvx(in[i]);
	}

__attribute__((mppa_native))
float4 Sleef_sinhf4_u35kvx(float4 arg);

__kernel void test_Sleef_sinhf4_u35kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = Sleef_sinhf4_u35kvx(in[i]);
	}

__attribute__((mppa_native))
float4 Sleef_coshf4_u35kvx(float4 arg);

__kernel void test_Sleef_coshf4_u35kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = Sleef_coshf4_u35kvx(in[i]);
	}

__attribute__((mppa_native))
float4 Sleef_tanhf4_u35kvx(float4 arg);

__kernel void test_Sleef_tanhf4_u35kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = Sleef_tanhf4_u35kvx(in[i]);
	}

__attribute__((mppa_native))
float4 Sleef_fastsinf4_u3500kvx(float4 arg);

__kernel void test_Sleef_fastsinf4_u3500kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = Sleef_fastsinf4_u3500kvx(in[i]);
	}

__attribute__((mppa_native))
float4 Sleef_fastcosf4_u3500kvx(float4 arg);

__kernel void test_Sleef_fastcosf4_u3500kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = Sleef_fastcosf4_u3500kvx(in[i]);
	}

__attribute__((mppa_native))
float4 Sleef_asinhf4_u10kvx(float4 arg);

__kernel void test_Sleef_asinhf4_u10kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = Sleef_asinhf4_u10kvx(in[i]);
	}

__attribute__((mppa_native))
float4 Sleef_acoshf4_u10kvx(float4 arg);

__kernel void test_Sleef_acoshf4_u10kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = Sleef_acoshf4_u10kvx(in[i]);
	}

__attribute__((mppa_native))
float4 Sleef_atanhf4_u10kvx(float4 arg);

__kernel void test_Sleef_atanhf4_u10kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = Sleef_atanhf4_u10kvx(in[i]);
	}

__attribute__((mppa_native))
float4 Sleef_exp2f4_u10kvx(float4 arg);

__kernel void test_Sleef_exp2f4_u10kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = Sleef_exp2f4_u10kvx(in[i]);
	}

__attribute__((mppa_native))
float4 Sleef_exp2f4_u35kvx(float4 arg);

__kernel void test_Sleef_exp2f4_u35kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = Sleef_exp2f4_u35kvx(in[i]);
	}

__attribute__((mppa_native))
float4 Sleef_exp10f4_u10kvx(float4 arg);

__kernel void test_Sleef_exp10f4_u10kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = Sleef_exp10f4_u10kvx(in[i]);
	}

__attribute__((mppa_native))
float4 Sleef_exp10f4_u35kvx(float4 arg);

__kernel void test_Sleef_exp10f4_u35kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = Sleef_exp10f4_u35kvx(in[i]);
	}

__attribute__((mppa_native))
float4 Sleef_expm1f4_u10kvx(float4 arg);

__kernel void test_Sleef_expm1f4_u10kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = Sleef_expm1f4_u10kvx(in[i]);
	}

__attribute__((mppa_native))
float4 Sleef_log10f4_u10kvx(float4 arg);

__kernel void test_Sleef_log10f4_u10kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = Sleef_log10f4_u10kvx(in[i]);
	}

__attribute__((mppa_native))
float4 Sleef_log2f4_u10kvx(float4 arg);

__kernel void test_Sleef_log2f4_u10kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = Sleef_log2f4_u10kvx(in[i]);
	}

__attribute__((mppa_native))
float4 Sleef_log2f4_u35kvx(float4 arg);

__kernel void test_Sleef_log2f4_u35kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = Sleef_log2f4_u35kvx(in[i]);
	}

__attribute__((mppa_native))
float4 Sleef_log1pf4_u10kvx(float4 arg);

__kernel void test_Sleef_log1pf4_u10kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = Sleef_log1pf4_u10kvx(in[i]);
	}

__attribute__((mppa_native))
float4 Sleef_sinpif4_u05kvx(float4 arg);

__kernel void test_Sleef_sinpif4_u05kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = Sleef_sinpif4_u05kvx(in[i]);
	}

__attribute__((mppa_native))
float4 Sleef_cospif4_u05kvx(float4 arg);

__kernel void test_Sleef_cospif4_u05kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = Sleef_cospif4_u05kvx(in[i]);
	}

__attribute__((mppa_native))
float4 Sleef_sqrtf4_kvx(float4 arg);

__kernel void test_Sleef_sqrtf4_kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = Sleef_sqrtf4_kvx(in[i]);
	}

__attribute__((mppa_native))
float4 Sleef_sqrtf4_u05kvx(float4 arg);

__kernel void test_Sleef_sqrtf4_u05kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = Sleef_sqrtf4_u05kvx(in[i]);
	}

__attribute__((mppa_native))
float4 Sleef_sqrtf4_u35kvx(float4 arg);

__kernel void test_Sleef_sqrtf4_u35kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = Sleef_sqrtf4_u35kvx(in[i]);
	}

__attribute__((mppa_native))
float4 Sleef_fabsf4_kvx(float4 arg);

__kernel void test_Sleef_fabsf4_kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = Sleef_fabsf4_kvx(in[i]);
	}

__attribute__((mppa_native))
float4 Sleef_truncf4_kvx(float4 arg);

__kernel void test_Sleef_truncf4_kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = Sleef_truncf4_kvx(in[i]);
	}

__attribute__((mppa_native))
float4 Sleef_floorf4_kvx(float4 arg);

__kernel void test_Sleef_floorf4_kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = Sleef_floorf4_kvx(in[i]);
	}

__attribute__((mppa_native))
float4 Sleef_ceilf4_kvx(float4 arg);

__kernel void test_Sleef_ceilf4_kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = Sleef_ceilf4_kvx(in[i]);
	}

__attribute__((mppa_native))
float4 Sleef_roundf4_kvx(float4 arg);

__kernel void test_Sleef_roundf4_kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = Sleef_roundf4_kvx(in[i]);
	}

__attribute__((mppa_native))
float4 Sleef_rintf4_kvx(float4 arg);

__kernel void test_Sleef_rintf4_kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = Sleef_rintf4_kvx(in[i]);
	}

__attribute__((mppa_native))
float4 Sleef_frfrexpf4_kvx(float4 arg);

__kernel void test_Sleef_frfrexpf4_kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = Sleef_frfrexpf4_kvx(in[i]);
	}

__attribute__((mppa_native))
float4 Sleef_lgammaf4_u10kvx(float4 arg);

__kernel void test_Sleef_lgammaf4_u10kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = Sleef_lgammaf4_u10kvx(in[i]);
	}

__attribute__((mppa_native))
float4 Sleef_tgammaf4_u10kvx(float4 arg);

__kernel void test_Sleef_tgammaf4_u10kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = Sleef_tgammaf4_u10kvx(in[i]);
	}

__attribute__((mppa_native))
float4 Sleef_erff4_u10kvx(float4 arg);

__kernel void test_Sleef_erff4_u10kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = Sleef_erff4_u10kvx(in[i]);
	}

__attribute__((mppa_native))
float4 Sleef_erfcf4_u15kvx(float4 arg);

__kernel void test_Sleef_erfcf4_u15kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = Sleef_erfcf4_u15kvx(in[i]);
	}

__attribute__((mppa_native))
double2 Sleef_atan2d2_u35kvx(double2 arg1, double2 arg2);

__kernel void test_Sleef_atan2d2_u35kvx(__global double2* in1, __global double2* in2, __global double2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_atan2d2_u35kvx(in1[i], in2[i]);
	}

__attribute__((mppa_native))
double2 Sleef_atan2d2_u10kvx(double2 arg1, double2 arg2);

__kernel void test_Sleef_atan2d2_u10kvx(__global double2* in1, __global double2* in2, __global double2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_atan2d2_u10kvx(in1[i], in2[i]);
	}

__attribute__((mppa_native))
double2 Sleef_powd2_u10kvx(double2 arg1, double2 arg2);

__kernel void test_Sleef_powd2_u10kvx(__global double2* in1, __global double2* in2, __global double2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_powd2_u10kvx(in1[i], in2[i]);
	}

__attribute__((mppa_native))
double2 Sleef_hypotd2_u05kvx(double2 arg1, double2 arg2);

__kernel void test_Sleef_hypotd2_u05kvx(__global double2* in1, __global double2* in2, __global double2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_hypotd2_u05kvx(in1[i], in2[i]);
	}

__attribute__((mppa_native))
double2 Sleef_hypotd2_u35kvx(double2 arg1, double2 arg2);

__kernel void test_Sleef_hypotd2_u35kvx(__global double2* in1, __global double2* in2, __global double2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_hypotd2_u35kvx(in1[i], in2[i]);
	}

__attribute__((mppa_native))
double2 Sleef_copysignd2_kvx(double2 arg1, double2 arg2);

__kernel void test_Sleef_copysignd2_kvx(__global double2* in1, __global double2* in2, __global double2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_copysignd2_kvx(in1[i], in2[i]);
	}

__attribute__((mppa_native))
double2 Sleef_fmaxd2_kvx(double2 arg1, double2 arg2);

__kernel void test_Sleef_fmaxd2_kvx(__global double2* in1, __global double2* in2, __global double2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_fmaxd2_kvx(in1[i], in2[i]);
	}

__attribute__((mppa_native))
double2 Sleef_fmind2_kvx(double2 arg1, double2 arg2);

__kernel void test_Sleef_fmind2_kvx(__global double2* in1, __global double2* in2, __global double2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_fmind2_kvx(in1[i], in2[i]);
	}

__attribute__((mppa_native))
double2 Sleef_fdimd2_kvx(double2 arg1, double2 arg2);

__kernel void test_Sleef_fdimd2_kvx(__global double2* in1, __global double2* in2, __global double2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_fdimd2_kvx(in1[i], in2[i]);
	}

__attribute__((mppa_native))
double2 Sleef_nextafterd2_kvx(double2 arg1, double2 arg2);

__kernel void test_Sleef_nextafterd2_kvx(__global double2* in1, __global double2* in2, __global double2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_nextafterd2_kvx(in1[i], in2[i]);
	}

__attribute__((mppa_native))
double2 Sleef_fmodd2_kvx(double2 arg1, double2 arg2);

__kernel void test_Sleef_fmodd2_kvx(__global double2* in1, __global double2* in2, __global double2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_fmodd2_kvx(in1[i], in2[i]);
	}

__attribute__((mppa_native))
double2 Sleef_remainderd2_kvx(double2 arg1, double2 arg2);

__kernel void test_Sleef_remainderd2_kvx(__global double2* in1, __global double2* in2, __global double2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_remainderd2_kvx(in1[i], in2[i]);
	}

__attribute__((mppa_native))
float4 Sleef_atan2f4_u35kvx(float4 arg1, float4 arg2);

__kernel void test_Sleef_atan2f4_u35kvx(__global float4* in1, __global float4* in2, __global float4* out) {
		int i = get_global_id(0);
		out[i] = Sleef_atan2f4_u35kvx(in1[i], in2[i]);
	}

__attribute__((mppa_native))
float4 Sleef_atan2f4_u10kvx(float4 arg1, float4 arg2);

__kernel void test_Sleef_atan2f4_u10kvx(__global float4* in1, __global float4* in2, __global float4* out) {
		int i = get_global_id(0);
		out[i] = Sleef_atan2f4_u10kvx(in1[i], in2[i]);
	}

__attribute__((mppa_native))
float4 Sleef_powf4_u10kvx(float4 arg1, float4 arg2);

__kernel void test_Sleef_powf4_u10kvx(__global float4* in1, __global float4* in2, __global float4* out) {
		int i = get_global_id(0);
		out[i] = Sleef_powf4_u10kvx(in1[i], in2[i]);
	}

__attribute__((mppa_native))
float4 Sleef_fastpowf4_u3500kvx(float4 arg1, float4 arg2);

__kernel void test_Sleef_fastpowf4_u3500kvx(__global float4* in1, __global float4* in2, __global float4* out) {
		int i = get_global_id(0);
		out[i] = Sleef_fastpowf4_u3500kvx(in1[i], in2[i]);
	}

__attribute__((mppa_native))
float4 Sleef_hypotf4_u05kvx(float4 arg1, float4 arg2);

__kernel void test_Sleef_hypotf4_u05kvx(__global float4* in1, __global float4* in2, __global float4* out) {
		int i = get_global_id(0);
		out[i] = Sleef_hypotf4_u05kvx(in1[i], in2[i]);
	}

__attribute__((mppa_native))
float4 Sleef_hypotf4_u35kvx(float4 arg1, float4 arg2);

__kernel void test_Sleef_hypotf4_u35kvx(__global float4* in1, __global float4* in2, __global float4* out) {
		int i = get_global_id(0);
		out[i] = Sleef_hypotf4_u35kvx(in1[i], in2[i]);
	}

__attribute__((mppa_native))
float4 Sleef_copysignf4_kvx(float4 arg1, float4 arg2);

__kernel void test_Sleef_copysignf4_kvx(__global float4* in1, __global float4* in2, __global float4* out) {
		int i = get_global_id(0);
		out[i] = Sleef_copysignf4_kvx(in1[i], in2[i]);
	}

__attribute__((mppa_native))
float4 Sleef_fmaxf4_kvx(float4 arg1, float4 arg2);

__kernel void test_Sleef_fmaxf4_kvx(__global float4* in1, __global float4* in2, __global float4* out) {
		int i = get_global_id(0);
		out[i] = Sleef_fmaxf4_kvx(in1[i], in2[i]);
	}

__attribute__((mppa_native))
float4 Sleef_fminf4_kvx(float4 arg1, float4 arg2);

__kernel void test_Sleef_fminf4_kvx(__global float4* in1, __global float4* in2, __global float4* out) {
		int i = get_global_id(0);
		out[i] = Sleef_fminf4_kvx(in1[i], in2[i]);
	}

__attribute__((mppa_native))
float4 Sleef_fdimf4_kvx(float4 arg1, float4 arg2);

__kernel void test_Sleef_fdimf4_kvx(__global float4* in1, __global float4* in2, __global float4* out) {
		int i = get_global_id(0);
		out[i] = Sleef_fdimf4_kvx(in1[i], in2[i]);
	}

__attribute__((mppa_native))
float4 Sleef_nextafterf4_kvx(float4 arg1, float4 arg2);

__kernel void test_Sleef_nextafterf4_kvx(__global float4* in1, __global float4* in2, __global float4* out) {
		int i = get_global_id(0);
		out[i] = Sleef_nextafterf4_kvx(in1[i], in2[i]);
	}

__attribute__((mppa_native))
float4 Sleef_fmodf4_kvx(float4 arg1, float4 arg2);

__kernel void test_Sleef_fmodf4_kvx(__global float4* in1, __global float4* in2, __global float4* out) {
		int i = get_global_id(0);
		out[i] = Sleef_fmodf4_kvx(in1[i], in2[i]);
	}

__attribute__((mppa_native))
float4 Sleef_remainderf4_kvx(float4 arg1, float4 arg2);

__kernel void test_Sleef_remainderf4_kvx(__global float4* in1, __global float4* in2, __global float4* out) {
		int i = get_global_id(0);
		out[i] = Sleef_remainderf4_kvx(in1[i], in2[i]);
	}

__attribute__((mppa_native))
Sleef_SLEEF_VECTOR_DOUBLE_2 Sleef_modfd2_kvx(double2 arg);

__kernel void test_Sleef_modfd2_kvx(__global double2* in, __global Sleef_SLEEF_VECTOR_DOUBLE_2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_modfd2_kvx(in[i]);
	}

__attribute__((mppa_native))
Sleef_SLEEF_VECTOR_DOUBLE_2 Sleef_sincospid2_u35kvx(double2 arg);

__kernel void test_Sleef_sincospid2_u35kvx(__global double2* in, __global Sleef_SLEEF_VECTOR_DOUBLE_2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_sincospid2_u35kvx(in[i]);
	}

__attribute__((mppa_native))
Sleef_SLEEF_VECTOR_DOUBLE_2 Sleef_sincosd2_u35kvx(double2 arg);

__kernel void test_Sleef_sincosd2_u35kvx(__global double2* in, __global Sleef_SLEEF_VECTOR_DOUBLE_2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_sincosd2_u35kvx(in[i]);
	}

__attribute__((mppa_native))
Sleef_SLEEF_VECTOR_DOUBLE_2 Sleef_sincospid2_u05kvx(double2 arg);

__kernel void test_Sleef_sincospid2_u05kvx(__global double2* in, __global Sleef_SLEEF_VECTOR_DOUBLE_2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_sincospid2_u05kvx(in[i]);
	}

__attribute__((mppa_native))
Sleef_SLEEF_VECTOR_DOUBLE_2 Sleef_sincosd2_u10kvx(double2 arg);

__kernel void test_Sleef_sincosd2_u10kvx(__global double2* in, __global Sleef_SLEEF_VECTOR_DOUBLE_2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_sincosd2_u10kvx(in[i]);
	}

__attribute__((mppa_native))
Sleef_SLEEF_VECTOR_FLOAT_2 Sleef_sincosf4_u35kvx(float4 arg);

__kernel void test_Sleef_sincosf4_u35kvx(__global float4* in, __global Sleef_SLEEF_VECTOR_FLOAT_2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_sincosf4_u35kvx(in[i]);
	}

__attribute__((mppa_native))
Sleef_SLEEF_VECTOR_FLOAT_2 Sleef_sincosf4_u10kvx(float4 arg);

__kernel void test_Sleef_sincosf4_u10kvx(__global float4* in, __global Sleef_SLEEF_VECTOR_FLOAT_2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_sincosf4_u10kvx(in[i]);
	}

__attribute__((mppa_native))
Sleef_SLEEF_VECTOR_FLOAT_2 Sleef_sincospif4_u05kvx(float4 arg);

__kernel void test_Sleef_sincospif4_u05kvx(__global float4* in, __global Sleef_SLEEF_VECTOR_FLOAT_2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_sincospif4_u05kvx(in[i]);
	}

__attribute__((mppa_native))
Sleef_SLEEF_VECTOR_FLOAT_2 Sleef_sincospif4_u35kvx(float4 arg);

__kernel void test_Sleef_sincospif4_u35kvx(__global float4* in, __global Sleef_SLEEF_VECTOR_FLOAT_2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_sincospif4_u35kvx(in[i]);
	}

__attribute__((mppa_native))
Sleef_SLEEF_VECTOR_FLOAT_2 Sleef_modff4_kvx(float4 arg);

__kernel void test_Sleef_modff4_kvx(__global float4* in, __global Sleef_SLEEF_VECTOR_FLOAT_2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_modff4_kvx(in[i]);
	}

__attribute__((mppa_native))
int2 Sleef_expfrexpd2_kvx(double2 arg);

__kernel void test_Sleef_expfrexpd2_kvx(__global double2* in, __global int2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_expfrexpd2_kvx(in[i]);
	}

__attribute__((mppa_native))
int2 Sleef_ilogbd2_kvx(double2 arg);

__kernel void test_Sleef_ilogbd2_kvx(__global double2* in, __global int2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_ilogbd2_kvx(in[i]);
	}

__attribute__((mppa_native))
double2 Sleef_fmad2_kvx(double2 arg1, double2 arg2, double2 arg3);

__kernel void test_Sleef_fmad2_kvx(__global double2* in1, __global double2* in2, __global double2* in3, __global double2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_fmad2_kvx(in1[i], in2[i], in3[i]);
	}

__attribute__((mppa_native))
float4 Sleef_fmaf4_kvx(float4 arg1, float4 arg2, float4 arg3);

__kernel void test_Sleef_fmaf4_kvx(__global float4* in1, __global float4* in2, __global float4* in3, __global float4* out) {
		int i = get_global_id(0);
		out[i] = Sleef_fmaf4_kvx(in1[i], in2[i], in3[i]);
	}

__attribute__((mppa_native))
double2 Sleef_ldexpd2_kvx(double2 arg1, int2 arg2);

__kernel void test_Sleef_ldexpd2_kvx(__global double2* in1, __global int2* in2, __global double2* out) {
		int i = get_global_id(0);
		out[i] = Sleef_ldexpd2_kvx(in1[i], in2[i]);
	}

