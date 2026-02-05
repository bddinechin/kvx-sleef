SET (CMAKE_CROSSCOMPILING   TRUE)
SET (CMAKE_SYSTEM_NAME      "cos")
SET (CMAKE_SYSTEM_PROCESSOR "kvx")

SET(CMAKE_FIND_ROOT_PATH  $(KALRAY_TOOLCHAIN_DIR))

find_program(CMAKE_C_COMPILER kvx-cos-gcc)

# Default is coolidge v1
SET (MPPA_COS_LOCALMEM_SIZE_VALUE "2M")

# Check if building for coolidge v2
STRING(REGEX MATCHALL "-march=kv3-2" REGEX_OUTPUT_CV2 "${CMAKE_C_FLAGS}")
if ("${REGEX_OUTPUT_CV2}" STREQUAL "-march=kv3-2")
  # Promote local memory size to 6MB if coolidge v2 build
  SET (MPPA_COS_LOCALMEM_SIZE_VALUE "6M")
endif()

message(STATUS "CV2 : ${REGEX_OUTPUT_CV2} ${MPPA_COS_LOCALMEM_SIZE_VALUE}")

SET(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
SET(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY BOTH)
SET(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)

# link flags to build binary with DDR heap, stack and L2 cache enabled
set(CMAKE_EXE_LINKER_FLAGS_INIT "-Wl,--defsym=MPPA_COS_NB_CC=1 \
                            -Wl,--defsym=MPPA_COS_NB_CORES_LOG2=4 \
                            -Wl,--defsym=MPPA_COS_THREAD_PER_CORE_LOG2=0 \
                            -Wl,--defsym=MPPA_COS_ENABLE_DDR_STACK=1 \
                            -Wl,--defsym=USER_STACK_SIZE=4M \
                            -Wl,--defsym=MPPA_COS_ENABLE_DDR_DATA_CACHED=1 \
                            -lmppal2 -Wl,--defsym=MPPA_COS_LOCALMEM_SIZE=${MPPA_COS_LOCALMEM_SIZE_VALUE} \
                            -u mppa_l2_init -Wl,--defsym=MPPA_COS_ENABLE_L2_CACHE=1 \
                            -Tmppadcos_ddr.ld -fstack-limit-register=sr -g")
