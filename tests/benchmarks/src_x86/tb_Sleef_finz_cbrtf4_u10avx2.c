/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_cbrtf4_u10avx2128.c --function \
 *     Sleef_finz_cbrtf4_u10avx2128 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 4 --function-input-vector-size \
 *     4 --bench --no-embedded-bin --target x86_avx2128
 * 
**/
#include <stdint.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float4_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float4_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0.0f, 0x1.3281dp-86f, 0x1.6762aap-123f, 0x1.e7ec1ep-14f, 0.0f, 0.0f, 0.0f,
     0x1.af94c4p-109f, 0.0f, 0x1.6898f8p-101f, 0x1.1b166ap-49f, 0x1.79e46ep-25f, 0.0f,
     0x1.a66a74p-66f, 0x1.239012p-55f, 0x1.7afa28p-84f, 0.0f, 0.0f, 0.0f,
     0x1.437078p-39f, 0x1.f55486p-90f, 0.0f, 0x1.b0f71ap-96f, 0.0f, 0.0f,
     0x1.7f237cp-78f, 0x1.4bb0bp-58f, 0x1.e45626p-123f, 0.0f, 0.0f, 0.0f,
     0x1.e8b02cp-79f, 0.0f, 0.0f, 0x1.30b44cp-97f, 0.0f, 0x1.9d7908p-24f, 0.0f,
     0x1.d986acp-7f, 0.0f, 0x1.d39fd6p-61f, 0x1.dd8832p-102f, 0.0f, 0.0f,
     0x1.2b0d7cp-95f, 0x1.5722d6p-101f, 0.0f, 0x1.47697ap-28f, 0x1.515984p-108f,
     0x1.441cb6p-70f, 0x1.ccc3acp-113f, 0x1.20676ap-120f, 0.0f, 0.0f, 0x1.78c9f8p-63f,
     0.0f, 0.0f, 0x1.9cb314p-89f, 0x1.94192ap-111f, 0.0f, 0x1.e5e4b8p-7f,
     0x1.598daep-74f, 0.0f, 0x1.3e0e3ep-59f, 0x1.f48914p-95f, 0.0f, 0x1.3c59cap-70f,
     0.0f, 0x1.d77564p-32f, 0.0f, 0.0f, 0x1.d65dc2p-97f, 0.0f, 0x1.7182f6p-2f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.147302p-62f, 0.0f, 0.0f, 0x1.2bcaccp-33f,
     0x1.241876p-115f, 0.0f, 0.0f, 0x1.999d8p-119f, 0.0f, 0.0f, 0.0f,
     0x1.fe0d74p-110f, 0.0f, 0x1.65bc56p-38f, 0x1.e8f2eap-61f, 0.0f, 0x1.002c8cp-28f,
     0x1.fed28ap-117f, 0.0f, 0x1.ad79eap-19f, 0x1.240562p-34f, 0.0f, 0x1p0f, 0.0f,
     0x1.093c4cp-110f, 0.0f, 0x1.ea055ap-89f, 0.0f, 0.0f, 0.0f, 0x1.98025ap-125f,
     0.0f, 0.0f, 0x1.f76422p-107f, 0.0f, 0x1.193eecp-118f, 0x1.3e5d1cp-47f,
     0x1.51717p-60f, 0x1.6a176p-85f, 0x1.62d9b6p-81f, 0x1.988d4ep-66f, 0.0f, 0.0f,
     0.0f, 0x1.5764ap-29f, 0x1.3603aep-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4c5898p-90f,
     0x1.7ad526p-5f, 0.0f, 0.0f, 0x1.65314ap-15f, 0x1.8fd426p-30f, 0x1.06487ep-72f,
     0x1.8ff318p-62f, 0.0f, 0x1.53236cp-102f, 0x1.c86bacp-28f, 0x1.ef06fcp-19f,
     0x1.6d6c52p-18f, 0.0f, 0x1.137894p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.48520ap-90f, 0x1.dda6d8p-116f, 0x1.ee36d6p-22f, 0.0f, 0.0f, 0x1.7c4f5p-10f,
     0.0f, 0x1.a1b358p-54f, 0x1.9fbfa8p-72f, 0.0f, 0x1.5d719p-92f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.103362p-23f, 0x1.b4450ap-116f, 0.0f, 0.0f, 0x1.2f195ep-101f,
     0x1.09c77p-113f, 0x1.ecaf3ap-72f, 0.0f, 0x1.5fa222p-103f, 0.0f, 0x1.cb5508p-110f,
     0x1.82e81ap-75f, 0.0f, 0x1.1849c8p-114f, 0.0f, 0x1.463a3ep-53f, 0.0f,
     0x1.d28fep-87f, 0x1.0f97ecp-78f, 0.0f, 0.0f, 0x1.43f3eep-93f, 0x1.e38868p-85f,
     0x1.73aed2p-20f, 0x1.38446p-47f, 0x1.6ca392p-100f, 0x1.4ab896p-36f,
     0x1.6fb8cap-84f, 0x1.afc79cp-48f, 0.0f, 0x1.fa0a4ep-64f, 0x1.e9d95p-121f,
     0x1.42c108p-38f, 0x1.5355c8p-103f, 0x1.f68b02p-114f, 0x1.a3232ep-117f, 0.0f,
     0.0f, 0.0f, 0x1.e5ab76p-18f, 0.0f, 0.0f, 0x1.6656f4p-106f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3fb7cep-78f, 0x1.b64412p-72f, 0x1.dc65d8p-13f,
     0x1.c159ep-119f, 0x1.7a85fap-55f, 0.0f, 0x1.dd025ap-1f, 0x1.230e52p-52f, 0.0f,
     0.0f, 0x1.f1c52p-114f, 0x1.6810dcp-113f, 0x1.108cp-114f, 0x1.fb9d6cp-83f,
     0x1.cf2382p-98f, 0.0f, 0.0f, 0x1.5fec06p-69f, 0x1.03917p-22f, 0x1.ad8eaep-59f,
     0.0f, 0x1.fc993ap-16f, 0x1.6b206cp-44f, 0x1.a86474p-118f, 0.0f, 0x1.1f88f6p-25f,
     0x1.320b6cp-46f, 0.0f, 0.0f, 0x1.d22d7p-23f, 0.0f, 0.0f, 0x1.09c354p-10f,
     0x1.8bc454p-74f, 0.0f, 0x1.c6f908p-26f, 0.0f, 0x1.a801f4p-15f, 0x1.89af6p-89f,
     0x1.27b38ep-38f, 0x1.1ffcf6p-12f, 0x1.981972p-57f, 0.0f, 0x1.4ddd4ep-69f, 0.0f,
     0x1.0533b8p-105f, 0x1.1c9682p-25f, 0x1.c69a4cp-100f, 0.0f, 0x1.a913f8p-37f,
     0x1.08150ap-70f, 0x1.22eabap-91f, 0.0f, 0.0f, 0x1.969d46p-29f, 0x1.acfa18p-86f,
     0.0f, 0x1.06a976p-6f, 0x1.568472p-124f, 0x1.8d39c4p-44f, 0x1.769de8p-33f,
     0x1.8f3046p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6f40c8p-67f, 0.0f,
     0x1.6a0886p-33f, 0.0f, 0x1.f12e88p-108f, 0x1.b0e29ep-27f, 0x1.e6dd86p-59f, 0.0f,
     0.0f, 0x1.bc48dep-56f, 0x1.dd6bcap-93f, 0x1.0daf58p-117f, 0x1.b91364p-92f, 0.0f,
     0.0f, 0x1.17adb8p-126f, 0.0f, 0.0f, 0.0f, 0x1.7017cp-14f, 0x1.5d7382p-88f, 0.0f,
     0x1.5d2df8p-74f, 0x1.d38478p-101f, 0x1.8c88eap-53f, 0x1.fccd12p-11f, 0.0f,
     0x1.dbf132p-56f, 0x1.e3f774p-102f, 0.0f, 0.0f, 0x1.8d6522p-28f, 0x1.2895a2p-35f,
     0.0f, 0x1.6cccdap-124f, 0.0f, 0x1.0b6ddap-94f, 0.0f, 0.0f, 0x1.d89278p-23f,
     0x1.e5ed38p-40f, 0x1.cc439ep-16f, 0.0f, 0x1.e5bap-80f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.9a2b9ap-29f, 0x1.ff6706p-81f, 0x1.9ea5a4p-12f, 0.0f, 0.0f,
     0x1.918d6p-46f, 0x1.d8d3cap-83f, 0.0f, 0x1.39d32cp-113f, 0x1.96544p-98f,
     0x1.4ba3d2p-47f, 0.0f, 0x1.388a6cp-108f, 0.0f, 0.0f, 0x1.929c54p-67f, 0.0f, 0.0f,
     0x1.ba22a6p-103f, 0.0f, 0x1.dfbbfcp-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.30309ap-24f, 0x1.6a9efcp-116f,
     0.0f, 0x1.3285e8p-75f, 0x1.19e25p-121f, 0.0f, 0x1.4ceb1ep-35f, 0.0f,
     0x1.395e2p-116f, 0x1.cc02c2p-98f, 0x1.45875cp-80f, 0x1.4dca3cp-78f,
     0x1.5b1d9ep-115f, 0.0f, 0x1.6e5d56p-57f, 0x1.ba870ep-66f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.080656p-75f, 0.0f, 0x1.4af7b8p-84f, 0x1.66cd42p-121f, 0x1.7beb2ap-83f, 0.0f,
     0x1.ec21cap-97f, 0x1.2b8af2p-97f, 0.0f, 0.0f, 0x1.0d42e2p-122f, 0.0f,
     0x1.73419ap-87f, 0.0f, 0x1.4cff7p-6f, 0x1.ebc7e6p-99f, 0.0f, 0x1.f518d4p-37f,
     0x1.9675a6p-26f, 0x1.7205fep-87f, 0.0f, 0.0f, 0x1.9bb0d6p-48f, 0.0f, 0.0f,
     0x1.636e32p-87f, 0x1.75fd3ep-32f, 0x1.fb209ap-112f, 0.0f, 0x1.2f6c9ap-40f,
     0x1.ed14f2p-88f, 0x1.153822p-98f, 0x1.1412ccp-18f, 0.0f, 0x1.4dc8ep-52f,
     0x1.7236ccp-93f, 0.0f, 0x1.50f6e6p-69f, 0x1.f616dp-12f, 0.0f, 0x1.a69316p-114f,
     0x1.7093e4p-36f, 0x1.478bdap-5f, 0.0f, 0.0f, 0x1.c75d32p-107f, 0.0f, 0.0f,
     0x1.2497d4p-34f, 0x1.4c905p-113f, 0x1.f5d8d2p-62f, 0x1.2c5562p-114f,
     0x1.d480ap-23f, 0x1.d2a58p-4f, 0x1.cf2466p-89f, 0.0f, 0x1.cb6148p-32f, 0.0f,
     0x1.ff733p-18f, 0x1.47bdfep-32f, 0x1.048838p-27f, 0x1.92bce2p-77f, 0.0f, 0.0f,
     0x1.a18542p-99f, 0.0f, 0.0f, 0x1.75ccb8p-49f, 0.0f, 0.0f, 0x1.0c5144p-22f, 0.0f,
     0x1.55e718p-106f, 0x1.71ed5ap-53f, 0.0f, 0.0f, 0.0f, 0x1.52b372p-24f, 0.0f,
     0x1.e8f68ap-62f, 0.0f, 0x1.3dac7ap-105f, 0x1.54aa16p-9f, 0x1.9c829ap-84f, 0.0f,
     0.0f, 0x1.2e76c4p-101f, 0x1.8a9c3ap-60f, 0x1.d186dp-28f, 0x1.23c624p-34f,
     0x1.45f55p-71f, 0x1.d0b566p-94f, 0x1.617768p-83f, 0x1.ecadb8p-9f, 0x1.dd3b9p-7f,
     0.0f, 0x1.17d8bap-17f, 0.0f, 0x1.07de9p-103f, 0.0f, 0x1.1eceaep-68f, 0.0f,
     0x1.6f84cep-92f, 0x1.4f9654p-29f, 0.0f, 0.0f, 0x1.b513d8p-89f, 0x1.8763f4p-97f,
     0x1.15fd04p-41f, 0.0f, 0x1.797918p-106f, 0.0f, 0x1.926ap-99f, 0x1.ec5bf6p-79f,
     0x1.70c1bap-69f, 0x1.1d6c74p-62f, 0.0f, 0.0f, 0.0f, 0x1.8fb4fp-58f, 0.0f,
     0x1.4a0d9cp-109f, 0x1.1ef93p-52f, 0x1.ee55f2p-14f, 0x1.85547p-51f,
     0x1.05c788p-65f, 0x1.5c5ba6p-121f, 0x1.917dfap-125f, 0x1.7c6edp-96f,
     0x1.6f63b8p-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.360132p-46f, 0x1.d57d0cp-100f,
     0x1.4a4d56p-38f, 0.0f, 0x1.a50d8cp-17f, 0x1.88c99ep-106f, 0x1.559704p-94f, 0.0f,
     0x1.e0ce94p-69f, 0x1.522166p-86f, 0.0f, 0x1.6a7d8p-6f, 0x1.2cc4b2p-86f,
     0x1.2dd5eep-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9591c8p-41f,
     0x1.9f24b6p-26f, 0.0f, 0.0f, 0x1.eaa932p-95f, 0x1.08eb64p-117f, 0x1.881bbep-20f,
     0.0f, 0x1.0d46c6p-125f, 0x1.bfe51p-97f, 0.0f, 0x1.fb42e2p-70f, 0x1.49eed8p-35f,
     0.0f, 0x1.1493eep-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4725cap-64f, 0x1.6455d2p-76f,
     0x1.6893cap-43f, 0x1.e3e886p-17f, 0x1.aebf0ep-125f, 0.0f, 0.0f, 0x1.277fb2p-30f,
     0x1.dd5c22p-6f, 0.0f, 0.0f, 0x1.281406p-122f, 0.0f, 0x1.291ce8p-41f, 0.0f,
     0x1.b362acp-72f, 0.0f, 0x1.6580e6p-52f, 0x1.9ca9ccp-82f, 0x1.1a31p-117f, 0.0f,
     0x1.e1fd4ep-40f, 0.0f, 0x1.b63c7ap-74f, 0.0f, 0.0f, 0.0f, 0x1.4a90acp-78f,
     0x1.9a27bp-13f, 0x1.f1b83p-110f, 0x1.3b337ep-73f, 0x1.f5ae44p-67f, 0.0f,
     0x1.29dff4p-2f, 0.0f, 0x1.7cf786p-14f, 0x1.b3e9fep-65f, 0x1.c9afbep-65f, 0.0f,
     0x1.989d7ap-59f, 0.0f, 0x1.96bd5p-25f, 0x1.2195acp-112f, 0.0f, 0x1p0f,
     0x1.538954p-113f, 0x1.8d3376p-122f, 0x1.b993aap-58f, 0x1.48822ap-21f,
     0x1.61063p-77f, 0x1.9f5bfcp-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.773f62p-47f,
     0x1.f02a4ap-92f, 0.0f, 0x1.d1813ep-113f, 0x1.9eba3ap-121f, 0.0f, 0x1.5527b2p-7f,
     0.0f, 0.0f, 0x1.e2599cp-72f, 0.0f, 0.0f, 0x1.2ba576p-10f, 0.0f, 0.0f, 0.0f,
     0x1.3b3b96p-14f, 0x1.246894p-44f, 0x1.9dd072p-95f, 0.0f, 0x1.7e9666p-24f,
     0x1.0f319cp-31f, 0.0f, 0x1.3771ccp-27f, 0x1.b8fb62p-75f, 0x1.e2972ep-122f, 0.0f,
     0.0f, 0x1.5f81a4p-100f, 0x1.30b2dep-54f, 0x1.917f2p-103f, 0.0f, 0x1.188ebep-46f,
     0x1.3d94d4p-125f, 0.0f, 0x1.54bbb6p-28f, 0x1.b303fap-14f, 0.0f, 0.0f, 0.0f,
     0x1.9f3b26p-125f, 0.0f, 0x1.6936dap-24f, 0x1.e465acp-82f, 0.0f, 0.0f, 0.0f,
     0x1.edb92p-12f, 0.0f, 0x1.7abf2cp-59f, 0x1.c01aacp-32f, 0x1.d8eb3p-44f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.90a41ep-6f, 0x1.6ecd74p-38f, 0.0f, 0x1.e2e5b6p-19f, 0.0f,
     0x1.248bc2p-120f, 0x1.37ff2ap-83f, 0x1.bba9e2p-118f, 0x1.c8ddbep-80f, 0.0f, 0.0f,
     0x1.c7fa8ep-70f, 0.0f, 0x1.13558p-40f, 0x1.20639p-73f, 0.0f, 0x1.9abc44p-125f,
     0x1.755196p-69f, 0x1.f90f28p-46f, 0.0f, 0x1.502a18p-92f, 0x1.df226ep-28f, 0.0f,
     0.0f, 0x1.133a4cp-69f, 0x1.4fb94ap-2f, 0.0f, 0x1.97eb9p-94f, 0.0f, 0.0f,
     0x1.887802p-82f, 0.0f, 0x1.eba84ep-115f, 0.0f, 0x1.8f1506p-62f, 0x1.458a8cp-44f,
     0.0f, 0.0f, 0.0f, 0x1.3e7ecp-108f, 0.0f, 0.0f, 0x1.4d82ccp-107f, 0x1.ac7616p-91f,
     0.0f, 0x1.cf9984p-43f, 0.0f, 0x1.d9ab94p-3f, 0x1.199d02p-42f, 0x1.e976d2p-3f,
     0x1.2f61c6p-28f, 0x1.91c458p-118f, 0x1.c286cp-48f, 0.0f, 0x1.fbdea2p-84f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.981f2ap-30f, 0x1.c99906p-30f, 0.0f, 0x1.a0bdd4p-106f,
     0x1.36198ep-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5f07e2p-49f, 0.0f, 0.0f, 0.0f,
     0x1.04e9aep-24f, 0x1.571372p-23f, 0x1.ade128p-115f, 0x1.9ebcep-93f,
     0x1.5edbbap-14f, 0.0f, 0x1.d3aba2p-26f, 0.0f, 0x1.cfad26p-120f, 0.0f,
     0x1.2ca2b6p-79f, 0x1.b349a2p-80f, 0x1.4fd2aap-34f, 0.0f, 0.0f, 0x1.d706cap-91f,
     0x1.49b60ep-97f, 0.0f, 0x1.8ac434p-62f, 0x1.d24988p-61f, 0x1.0ac908p-58f,
     0x1.595494p-4f, 0x1.1d414ep-89f, 0x1.d04d32p-9f, 0x1.f40442p-45f,
     0x1.b190eap-80f, 0x1.5a93a2p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.934fe4p-71f, 0x1.20e76ap-17f, 0.0f, 0x1.06e832p-33f, 0x1.704fe6p-124f,
     0x1.d6b9c2p-69f, 0.0f, 0x1.4305bp-40f, 0x1.95f892p-120f, 0.0f, 0x1.6a2f5ap-125f,
     0x1.c61238p-9f, 0x1.1c3622p-107f, 0x1.573064p-57f, 0x1.26b2cp-91f,
     0x1.6696fep-99f, 0x1p0f, 0.0f, 0x1.c7e11ap-97f, 0x1.9442f2p-53f, 0x1.fc8628p-49f,
     0.0f, 0.0f, 0x1.4134b4p-12f, 0.0f, 0.0f, 0x1.629f68p-111f, 0x1.73682ep-5f, 0.0f,
     0.0f, 0.0f, 0x1.ba5b36p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3855d8p-90f, 0x1.0ed5a4p-34f, 0x1.0728bep-77f, 0x1.da5f84p-96f, 0.0f,
     0x1.9250b2p-65f, 0.0f, 0x1.cd66a4p-27f, 0x1.d6aa24p-61f, 0.0f, 0.0f,
     0x1.7ec50ep-65f, 0x1.891b38p-35f, 0.0f, 0x1.3fe6ep-41f, 0.0f, 0.0f, 0.0f,
     0x1.763feep-122f, 0x1.ec2b86p-33f, 0x1.5496a4p-55f, 0x1.186b32p-66f,
     0x1.733b6cp-110f, 0.0f, 0x1.d727e2p-88f, 0x1.01be7cp-35f, 0x1.0bcc4ap-51f,
     0x1.cc7104p-44f, 0.0f, 0.0f, 0x1.e3256cp-1f, 0.0f, 0.0f, 0x1.85ebfap-34f,
     0x1.6246dep-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.353f8p-99f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.75da3p-2f, 0x1.7532cep-30f, 0.0f, 0x1.ce4b8p-91f, 0x1.250158p-100f,
     0.0f, 0x1.56e036p-83f, 0.0f, 0x1.96d488p-28f, 0x1.eddb68p-70f, 0x1.79b8eap-41f,
     0.0f, 0.0f, 0.0f, 0x1.0898f2p-62f, 0x1.8bb8c2p-70f, 0x1.de5842p-59f, 0.0f,
     0x1.c0e2bp-115f, 0.0f, 0x1.e49d78p-97f, 0x1.1fec8p-110f, 0.0f, 0.0f, 0.0f,
     0x1.a0213p-7f, 0x1.5bf09ep-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2812b2p-41f, 0.0f, 0.0f, 0x1.ce2d1cp-82f, 0x1.11bfe4p-28f, 0x1.f68116p-37f,
     0.0f, 0x1.33d97ap-15f, 0x1.b2d444p-11f, 0.0f, 0.0f, 0x1.3d84e6p-103f,
     0x1.29d7p-70f, 0.0f, 0x1.46d9ep-83f, 0x1.152bc4p-59f, 0x1.d78d38p-81f,
     0x1.b79b46p-122f, 0.0f, 0x1.d7c2c6p-72f, 0x1.1ba9cep-91f, 0.0f, 0x1.f1e90ep-100f,
     0.0f, 0x1.023e8cp-9f, 0.0f, 0x1.bb0d54p-83f, 0x1.543f86p-45f, 0x1.b2e2b2p-63f,
     0x1.a492d6p-37f, 0x1.929ee6p-61f, 0.0f, 0x1.a5016ap-55f, 0.0f, 0.0f,
     0x1.7a00bep-9f, 0.0f, 0.0f, 0x1.4adbd6p-39f, 0x1.42520cp-56f, 0.0f, 0.0f, 0.0f,
     0x1.bfa37ep-77f, 0x1.891862p-20f, 0x1.17f3f8p-105f, 0.0f, 0.0f, 0x1p0f, 0.0f,
     0x1.01b4bp-25f, 0.0f, 0x1.f980bep-111f, 0x1.e036c6p-30f, 0x1.39dd72p-73f,
     0x1.4dd77p-80f, 0x1.abcbeap-80f, 0.0f, 0x1.37cab4p-117f, 0.0f, 0.0f,
     0x1.ed9812p-105f, 0.0f, 0x1.ccac82p-33f, 0x1.d3b6d2p-11f, 0.0f, 0.0f,
     0x1.25235p-9f, 0x1.1e9a02p-36f, 0x1.bb6c0cp-22f, 0.0f, 0x1.28c3bap-13f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.81bf1ap-18f, 0.0f, 0x1.cc61d2p-106f, 0.0f, 0x1.94842cp-23f,
     0.0f, 0x1.86a014p-91f, 0.0f, 0x1.87d5c6p-55f, 0x1.543b52p-6f, 0x1.ac60fcp-10f,
     0x1.dac926p-89f, 0x1.ca48a2p-101f, 0.0f, 0x1.a825e4p-69f, 0x1.40d3ep-119f,
     0x1.41867ap-83f, 0.0f, 0x1.1c79cap-115f, 0x1.4c275ap-100f, 0x1.311e86p-93f,
     0x1.6e2cc4p-55f, 0.0f, 0.0f, 0x1.0bff12p-29f, 0x1.d2213p-17f, 0.0f,
     0x1.b6e806p-63f, 0.0f, 0.0f, 0.0f, 0x1.052c34p-110f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_float4_t global_bench_acc;
    int64_t timer;
    int64_t tmp;
    int32_t j;
    int64_t tmp1;
    int64_t tmp2;
    double id_tmp;
    double cpe_measure;
    
    global_bench_acc = external_bench_wrapper_cst;
    {
        uint32_t cycles_hi = 0, cycles_lo = 0;
        asm volatile (
            "cpuid\n\t"
            "rdtsc\n\t"
            "mov %%edx, %0\n\t"
            "mov %%eax, %1\n\t"
            : "=r" (cycles_hi), "=r" (cycles_lo)
            :: "%rax", "%rbx", "%rcx", "%rdx");
        tmp = ((uint64_t) cycles_hi << 32) | cycles_lo;
    };
    timer = tmp;
    j = INT32_C(0);

    for (;(j < INT32_C(10000));){
        ml_float4_t local_acc;
        int32_t i;
        ml_float4_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1004));){
            ml_float4_t tmp0;
            ml_float4_t tmp1;
            ml_float4_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_finz_cbrtf4_u10avx2128(tmp0);
            memcpy(((ml_float4_t*)(external_bench_wrapper_output_table+ i)), &(tmp1), 16);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(4);
            i = tmp3;
        }
        tmp0 = global_bench_acc + local_acc;
        global_bench_acc = tmp0;
        tmp1 = j + INT32_C(1);
        j = tmp1;
    }
    {
        uint32_t cycles_hi = 0, cycles_lo = 0;
        asm volatile (
            "cpuid\n\t"
            "rdtsc\n\t"
            "mov %%edx, %0\n\t"
            "mov %%eax, %1\n\t"
            : "=r" (cycles_hi), "=r" (cycles_lo)
            :: "%rax", "%rbx", "%rcx", "%rdx");
        tmp1 = ((uint64_t) cycles_hi << 32) | cycles_lo;
    };
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_finz_cbrtf4_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_cbrtf4_u10avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
    return cpe_measure;
}
int32_t main(){
    double tmp;
    int tmp1;
    
    tmp = bench_wrapper();
    tmp1 = tmp < 0.0;

    if (tmp1) {

        return INT32_C(1);
    }
    return INT32_C(0);
}
