CC=kvx-cos-gcc
SRC_DIR:=./src
SRC_LIBM:=./src_libm
SRC_X86:=./src_x86
OBJ_DIR:=./src
OBJ_LIBM:=./src_libm
OBJ_X86:=./src_x86
SRC_FILES:= $(wildcard $(SRC_DIR)/*.c)
SRC_LIBM_FILES:= $(wildcard $(SRC_LIBM)/*.c)
SRC_X86_FILES:= $(wildcard $(SRC_X86)/*.c)
OBJ_FILES:= $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC_FILES))
OBJ_LIBM_FILES:= $(patsubst $(SRC_LIBM)/%.c, $(OBJ_LIBM)/%.o, $(SRC_LIBM_FILES))
OBJ_X86_FILES:= $(patsubst $(SRC_X86)/%.c, $(OBJ_X86)/%.o, $(SRC_X86_FILES))
TARGETS:= $(patsubst $(SRC_DIR)/%.c, ./%, $(SRC_FILES))
TARGETS_LIBM:= $(patsubst $(SRC_LIBM)/%.c, ./%, $(SRC_LIBM_FILES))
TARGETS_X86:= $(patsubst $(SRC_X86)/%.c, ./%, $(SRC_X86_FILES))

.PHONY: all bench libm clean

all: $(TARGETS)

$(TARGETS): %: $(OBJ_DIR)/%.o
	@mkdir -p tbs/
	@#$(CC) -o tbs/$* $< -lm $(PWD)/../../kvx_build/lib/libsleef.a -lm -L/work1/agouzon/kalray-envs/csw_coolidge/opt/kalray/accesscore/lib/llvm/cos -lclang_rt.builtins-kvx
	$(CC) -o tbs/$* $< -lm $(PWD)/../../kvx_build/lib/libsleef.a -lm

$(TARGETS_LIBM): %: $(OBJ_LIBM)/%.o
	mkdir -p tbs_libm/
	$(CC) -o tbs_libm/$* $< -lm -L/work1/agouzon/kalray-envs/csw_coolidge/opt/kalray/accesscore/lib/llvm/cos -lclang_rt.builtins-kvx

$(TARGETS_X86): %: $(OBJ_X86)/%.o
	gcc -o tbs_libm/$* $< -lm -L$(PWD)/../../x86_build/lib/ -lsleef 

$(OBJ_LIBM_FILES): %.o: %.c
	$(CC) -c -o $@ $< -D__STDC_WANT_IEC_60559_FUNCS_EXT__ -lm -DFP_FAST_FMA -I$(PWD)/include/ -Wl,--defsym=MPPA_COS_NB_CC=1 -Wl,--defsym=MPPA_COS_NB_CORES_LOG2=4 -Wl,--defsym=MPPA_COS_THREAD_PER_CORE_LOG2=0 -Wl,--defsym=MPPA_COS_ENABLE_DDR_STACK=1 -Wl,--defsym=USER_STACK_SIZE=4M -Wl,--defsym=MPPA_COS_ENABLE_DDR_DATA_CACHED=1 -lmppal2 -Wl,--defsym=MPPA_COS_LOCALMEM_SIZE=2M -u mppa_l2_init -Wl,--defsym=MPPA_COS_ENABLE_L2_CACHE=1 -Tmppadcos_ddr.ld

$(OBJ_X86_FILES): %.o: %.c
	gcc -c -o $@ $< -D__STDC_WANT_IEC_60559_FUNCS_EXT__ -lm -DFP_FAST_FMA -I$(PWD)/include/ -I$(PWD)/../../x86_build/include/ -L$(PWD)/../../x86_build/lib/ -lsleef

$(OBJ_FILES): %.o: %.c
	$(CC) -c -o $@ $< -lsleef -DFP_FAST_FMA -I$(PWD)/../../kvx_build/include/ -I$(PWD)/include/ -Wl,--defsym=MPPA_COS_NB_CC=1 -Wl,--defsym=MPPA_COS_NB_CORES_LOG2=4 -Wl,--defsym=MPPA_COS_THREAD_PER_CORE_LOG2=0 -Wl,--defsym=MPPA_COS_ENABLE_DDR_STACK=1 -Wl,--defsym=USER_STACK_SIZE=4M -Wl,--defsym=MPPA_COS_ENABLE_DDR_DATA_CACHED=1 -lmppal2 -Wl,--defsym=MPPA_COS_LOCALMEM_SIZE=2M -u mppa_l2_init -Wl,--defsym=MPPA_COS_ENABLE_L2_CACHE=1 -Tmppadcos_ddr.ld

bench: $(TARGETS)
	@rm -f results.txt
	@$(foreach bench, $(wildcard tbs/tb_*), kvx-jtag-runner --no-printf-prefix -- $(bench) >> results.txt;)
	./csv_script.sh
	@echo "benchs results have been written to results.csv"

libm: $(TARGETS_LIBM)
	@rm results.txt
	@$(foreach bench, $(wildcard tbs_libm/tb_*), kvx-jtag-runner --no-printf-prefix -- $(bench) >> results.txt;)
	./csv_script_libm.sh
	@echo "benchs results have been written to results_libm.csv"

x86: $(TARGETS_X86)
	@rm results.txt
	@$(foreach bench, $(wildcard tbs_x86/tb_*), $(bench) >> results.txt;)
	./csv_script_x86.sh
	@echo "benchs results have been written to results_x86.csv"

clean:
	rm -f src/*.o src_x86/*.o tbs/* tbs_libm/* tbs_x86/* ./kvx_results.txt ./purecfma_results.txt ./libm_results.txt results.txt src_libm/*.o
