#
# Copyright (C) 2019 Kalray SA. All rights reserved.
#
#CL_BUILD_FLAGS ?= -DENABLE_WG_SIZE
MPPA_BUILD_POCL_CACHE_DIR ?= $(shell echo $$(pwd))/.cache/pocl/kcache
HOST_SYSTEM_BIN ?= host
HOST_SYSTEM ?= linux
HOST_FIRMWARE_NAME ?= ocl_fw_l2_d_1m.elf

cflags = -g3 -O2
pocl_cflags = -g -O2

LIBDIR := lib
POCL_MPPA_EXTRA_BUILD_LFLAGS="${KALRAY_TOOLCHAIN_DIR}/kvx-cos/${LIBDIR}/libsleef.a"

host_app-srcs := tester.c testerutil.c
host_app-system := $(HOST_SYSTEM)
host_app-cflags := -I../../native_build/include -DUSEMPFR
host_app-lflags := -lsleef -lmpfr -L${PWD}/../../native_build/lib -lm

$(HOST_SYSTEM_BIN)-bin := host_app

use-module += opencl_linux

include $(KALRAY_TOOLCHAIN_DIR)/share/make/Makefile.opencl.$(HOST_SYSTEM)

all: kernels.cl.pocl

kernels.cl.pocl:
	POCL_CACHE_DIR=$(MPPA_BUILD_POCL_CACHE_DIR) POCL_MPPA_EXTRA_BUILD_CFLAGS="${pocl_cflags} -fstack-limit-register=sr" POCL_MPPA_EXTRA_BUILD_LFLAGS=${POCL_MPPA_EXTRA_BUILD_LFLAGS} POCL_EXTRA_BUILD_FLAGS="$(CL_BUILD_FLAGS)" POCL_DEBUG=1 $(KALRAY_TOOLCHAIN_DIR)/bin/kvx-poclcc kernels.cl

run: all
	$(O)/bin/host_app
