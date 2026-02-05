# Copyright (C) 2020 Kalray SA. All rights reserved.
# This code is Kalray proprietary and confidential.
# Any use of the code for whatever purpose is subject to
# specific written permission of Kalray SA.

cluster-bin := hard_rounding_cases
hard_rounding_cases-srcs := main.c
cluster-system := cos
cflags += -g -I../../kvx_build/include -O2 -std=gnu99 $(ARCHI)
lflags += -L../../kvx_build/lib -lm -lsleef

include $(KALRAY_TOOLCHAIN_DIR)/share/make/Makefile.kalray

