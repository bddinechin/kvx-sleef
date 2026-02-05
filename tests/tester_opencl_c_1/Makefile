#
# Copyright (C) 2021 Kalray SA. All rights reserved.
#
MPPA_BUILD_POCL_CACHE_DIR ?= $(shell echo $$(pwd))/.cache/pocl/kcache
HOST_SYSTEM_BIN ?= host
HOST_SYSTEM ?= linux
HOST_FIRMWARE_NAME ?= ocl_fw_l2_d_1m.elf

cflags = -g3 -O2
pocl_cflags = -g -O2

host_app-srcs := tester.c ../tester1/testerutil.c
host_app-system := $(HOST_SYSTEM)
host_app-cflags := -I../../native_build/include -DUSEMPFR -I../tester1
host_app-lflags := -lsleef -lmpfr -L${PWD}/../../native_build/lib -lm

$(HOST_SYSTEM_BIN)-bin := host_app

use-module += opencl_linux

include $(KALRAY_TOOLCHAIN_DIR)/share/make/Makefile.opencl.$(HOST_SYSTEM)

all: kernels

kernels:
	POCL_CACHE_DIR=$(MPPA_BUILD_POCL_CACHE_DIR) POCL_MPPA_EXTRA_USE_SLEEF=1 POCL_MPPA_EXTRA_BUILD_CFLAGS="${pocl_cflags} -fstack-limit-register=sr" POCL_EXTRA_BUILD_FLAGS="$(CL_BUILD_FLAGS)" POCL_DEBUG=1 $(KALRAY_TOOLCHAIN_DIR)/bin/kvx-poclcc kernels.cl

run_cos_sim: all
	$(KALRAY_TOOLCHAIN_DIR)/bin/kvx-cluster --elf-symbols=1,$(KALRAY_TOOLCHAIN_DIR)/share/pocl/cos_standalone/ocl_fw.elf,2,$(KALRAY_TOOLCHAIN_DIR)/share/pocl/cos_standalone/ocl_fw.elf,3,$(KALRAY_TOOLCHAIN_DIR)/share/pocl/cos_standalone/ocl_fw.elf,4,$(KALRAY_TOOLCHAIN_DIR)/share/pocl/cos_standalone/ocl_fw.elf --timeout-sec=3600 -s libstd_scalls.so -- tester

run_cos_hw: all
	$(KALRAY_TOOLCHAIN_DIR)/bin/kvx-jtag-runner --exec-file=Cluster0:tester --timeout=600

run_linux_hw: all
	POCL_CACHE_DIR=$(MPPA_BUILD_POCL_CACHE_DIR) POCL_MPPA_FIRMWARE_NAME=$(HOST_FIRMWARE_NAME) timeout 120 ${O}/bin/host_app
