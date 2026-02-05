/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_hypotf4_u05avx2128.c --function \
 *     Sleef_finz_hypotf4_u05avx2128 --arity 2 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32,binary32 --vector-size 4 \
 *     --function-input-vector-size 4 --bench --no-embedded-bin --target \
 *     x86_avx2128
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
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.cf05fap-81f, 0x1.e8b5d2p-87f, 0x1.d0ff96p-112f,
     0x1.fd60f6p-104f, 0.0f, 0x1.61fcfap-32f, 0.0f, 0x1.4ce62ep-91f, 0.0f,
     0x1.fe1e1p-74f, 0x1.46c3c2p-96f, 0x1.cd09eep-38f, 0x1.8d8264p-53f, 0.0f,
     0x1.08ad8ep-55f, 0x1.9c6348p-48f, 0.0f, 0.0f, 0x1.7015aap-79f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.31f03cp-7f, 0x1.828f88p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.12aba2p-53f, 0x1.32da16p-7f, 0.0f, 0.0f, 0x1.02fa62p-77f, 0.0f,
     0x1.78d746p-71f, 0.0f, 0.0f, 0.0f, 0x1.b77ffcp-38f, 0.0f, 0x1.035cb2p-3f, 0.0f,
     0x1.de7da8p-59f, 0.0f, 0.0f, 0x1.c94a3ap-99f, 0x1.199826p-122f, 0.0f, 0.0f, 0.0f,
     0x1.80639ap-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b4d4eap-1f, 0x1.ca077p-71f,
     0x1.b59dcap-108f, 0x1.40074cp-113f, 0.0f, 0.0f, 0x1.3030e6p-124f,
     0x1.b4bf48p-102f, 0x1.8315d2p-49f, 0x1.7fc244p-117f, 0.0f, 0.0f, 0x1.6c7c9cp-19f,
     0x1.88aa0ap-112f, 0.0f, 0x1.071f2cp-90f, 0.0f, 0.0f, 0x1.760bfap-37f, 0.0f, 0.0f,
     0.0f, 0x1.182cb6p-108f, 0.0f, 0x1.72fa4ep-30f, 0x1.7b62bep-107f, 0x1.50fa34p-63f,
     0x1.e85c7ep-62f, 0.0f, 0.0f, 0.0f, 0x1.58079cp-72f, 0.0f, 0x1.f54c58p-57f,
     0x1.e80cecp-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e0b77cp-77f, 0.0f, 0.0f,
     0x1.638396p-7f, 0x1.e3206ap-19f, 0x1.5094a8p-50f, 0x1.44089p-123f, 0.0f,
     0x1.5d838p-69f, 0.0f, 0x1.1bf3b2p-118f, 0x1.64359ap-106f, 0x1.866fbcp-48f, 0.0f,
     0x1.b6d82cp-38f, 0.0f, 0x1.87ca86p-1f, 0x1p0f, 0x1.3114b4p-52f, 0x1.5261b2p-99f,
     0x1.af2ebp-94f, 0.0f, 0.0f, 0x1.25fa34p-101f, 0x1.06b49cp-48f, 0.0f,
     0x1.2ec9b2p-69f, 0.0f, 0.0f, 0.0f, 0x1.e4048ep-39f, 0.0f, 0x1.fdf8acp-98f, 0.0f,
     0.0f, 0x1.704a5cp-48f, 0x1.f088f6p-3f, 0x1.61cc92p-59f, 0x1.ac1c62p-94f,
     0x1.e88a08p-67f, 0.0f, 0.0f, 0x1.1d1358p-88f, 0.0f, 0.0f, 0x1.bbba4ap-11f,
     0x1.b680fap-58f, 0.0f, 0.0f, 0x1.59d3f6p-120f, 0.0f, 0x1.591f5ep-118f,
     0x1.1d3ec8p-70f, 0.0f, 0x1.101098p-99f, 0x1.837df6p-71f, 0.0f, 0.0f,
     0x1.fdcb44p-76f, 0x1.7a3b6ep-87f, 0.0f, 0x1.680334p-82f, 0x1.67203ep-57f, 0.0f,
     0x1.2b1e1ep-17f, 0x1.285f68p-55f, 0x1.10a8aep-112f, 0.0f, 0x1.6995ap-38f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.6d9218p-123f, 0x1.d3b3d6p-86f, 0x1.b1313cp-72f,
     0x1.07c94ap-15f, 0x1.39fe72p-79f, 0x1.d2e352p-4f, 0.0f, 0x1.d0798cp-21f, 0.0f,
     0x1.9b0a76p-36f, 0.0f, 0.0f, 0x1.8b3dd6p-90f, 0.0f, 0.0f, 0x1.b94d08p-110f,
     0x1.f6b914p-86f, 0x1.6730acp-99f, 0.0f, 0.0f, 0.0f, 0x1.7e5862p-114f, 0.0f, 0.0f,
     0x1.1e337ep-59f, 0x1.04b7b6p-80f, 0.0f, 0.0f, 0x1.393b7ap-86f, 0x1.6cbea2p-5f,
     0x1.fd66aep-121f, 0x1.4ac71p-52f, 0.0f, 0x1.f2ec32p-22f, 0.0f, 0x1.973dacp-72f,
     0x1.712726p-46f, 0.0f, 0.0f, 0x1.f9a26cp-101f, 0x1.0a01c2p-41f, 0.0f,
     0x1.6097fap-86f, 0x1.d42694p-77f, 0.0f, 0x1.2a828p-41f, 0x1.3492acp-104f,
     0x1.3c6c34p-25f, 0x1.fa046ep-15f, 0x1.4142f2p-33f, 0.0f, 0x1.654182p-78f, 0.0f,
     0x1.08d6fep-123f, 0x1.abe58ep-72f, 0.0f, 0x1.a74078p-40f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.61ff9cp-101f, 0x1.32afep-117f, 0.0f, 0x1.215db8p-14f, 0x1.cbe716p-65f,
     0x1.b8fd0cp-6f, 0x1.ae986ep-100f, 0x1.80d55p-30f, 0.0f, 0x1.e4d736p-40f,
     0x1.35e9dp-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ff5944p-52f,
     0x1.b783d6p-43f, 0x1.f40398p-91f, 0x1.d96252p-113f, 0x1.4cac2ep-87f, 0.0f,
     0x1.f3d002p-60f, 0.0f, 0x1.78884ep-93f, 0x1.4aeafep-23f, 0x1.9a6132p-82f,
     0x1.ca6edep-117f, 0x1.a47498p-111f, 0.0f, 0x1.9c5f6ap-12f, 0.0f, 0.0f,
     0x1.e62b92p-87f, 0.0f, 0.0f, 0x1.44c8c4p-30f, 0.0f, 0x1.a7a426p-52f,
     0x1.f9f312p-6f, 0.0f, 0x1.930752p-76f, 0x1.e7972cp-58f, 0.0f, 0x1.490d7ep-15f,
     0x1.0f45eep-63f, 0.0f, 0.0f, 0.0f, 0x1.fa8624p-2f, 0.0f, 0.0f, 0x1.4973p-48f,
     0x1.b34a9ap-5f, 0.0f, 0.0f, 0x1.c5a26ep-113f, 0.0f, 0x1.cb7834p-79f,
     0x1.7d7736p-84f, 0.0f, 0x1.37e092p-10f, 0x1.c90b2ep-71f, 0.0f, 0x1.76452ep-49f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.916deep-57f, 0.0f, 0x1.0499d8p-92f, 0x1.031d16p-50f,
     0.0f, 0.0f, 0.0f, 0x1.23abc2p-66f, 0x1.8680c8p-126f, 0x1.a5c0fap-63f, 0.0f, 0.0f,
     0.0f, 0x1.a0a20ap-72f, 0x1.bd221cp-49f, 0x1.99cc34p-69f, 0.0f, 0x1.b1b74p-81f,
     0x1.5be78ep-116f, 0x1.4d4356p-101f, 0x1.63402p-101f, 0.0f, 0.0f, 0x1.1f236cp-2f,
     0.0f, 0.0f, 0x1.9eea86p-6f, 0x1.2a1654p-64f, 0x1.7794e4p-114f, 0.0f,
     0x1.bafda6p-28f, 0x1.4835a6p-126f, 0.0f, 0x1.3e171cp-21f, 0x1.34aa74p-13f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.214a1cp-24f, 0x1.9873bcp-103f, 0x1.475428p-124f, 0.0f,
     0x1.2a4d5ap-16f, 0x1.2e54eep-10f, 0x1.e91a4ep-15f, 0x1.77925p-29f, 0.0f,
     0x1.6ce004p-103f, 0x1.2c22ecp-75f, 0x1.bdbde4p-17f, 0x1.41806p-52f,
     0x1.26b8c8p-87f, 0.0f, 0x1.f77cf8p-4f, 0.0f, 0x1.118406p-48f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f753fap-22f, 0x1.22c86ap-117f, 0x1.e813p-111f,
     0x1.c43eep-103f, 0x1.450228p-29f, 0.0f, 0.0f, 0.0f, 0x1.6c8d4ep-102f, 0.0f,
     0x1.30898ap-19f, 0x1.d7c242p-101f, 0.0f, 0.0f, 0x1.7a4e3cp-5f, 0x1.f82582p-112f,
     0.0f, 0x1.42838ep-101f, 0.0f, 0.0f, 0x1.82f578p-91f, 0.0f, 0x1.339faap-95f, 0.0f,
     0.0f, 0.0f, 0x1.1bc89p-112f, 0x1.971ae6p-71f, 0x1.65afp-22f, 0.0f, 0.0f,
     0x1.fd4e9ap-25f, 0x1.13d212p-15f, 0.0f, 0.0f, 0x1.c7ca3p-95f, 0.0f, 0.0f,
     0x1.923e94p-23f, 0.0f, 0.0f, 0x1.8b8b5cp-63f, 0x1.7d91fep-123f, 0.0f, 0.0f,
     0x1.613eacp-14f, 0x1.ca6dfcp-109f, 0.0f, 0x1.9817d8p-56f, 0x1.d97708p-3f,
     0x1.1154c8p-76f, 0x1.cb02fcp-87f, 0.0f, 0x1.b4e922p-113f, 0x1.6ec598p-108f,
     0x1.d2ad14p-119f, 0x1.aaa04cp-56f, 0.0f, 0x1.b97d92p-46f, 0x1.dfea94p-63f,
     0x1.251c2ap-42f, 0x1.2651c4p-22f, 0.0f, 0x1.78825ap-60f, 0.0f, 0x1.c82adcp-102f,
     0x1.762dd8p-119f, 0.0f, 0.0f, 0x1.bf69fcp-47f, 0.0f, 0x1.73ed8ep-71f,
     0x1.07231cp-110f, 0.0f, 0x1.449f06p-35f, 0x1.2da564p-117f, 0.0f,
     0x1.247cf8p-114f, 0x1.918216p-74f, 0.0f, 0x1.8f4d22p-96f, 0.0f, 0x1.b0a546p-14f,
     0x1.6d01c6p-38f, 0.0f, 0x1.f2475p-4f, 0x1.44a76ep-97f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6cb7f6p-14f, 0.0f, 0.0f, 0x1.6c8a6ep-9f, 0x1.9740fep-62f, 0.0f,
     0x1.c77e86p-10f, 0x1.581a6cp-94f, 0.0f, 0.0f, 0x1.286454p-47f, 0x1.67e002p-91f,
     0.0f, 0x1.7ccb04p-22f, 0x1.103886p-67f, 0x1.284e9ep-94f, 0x1.6a1942p-51f, 0.0f,
     0x1.6b2ea8p-83f, 0x1.4a4bf2p-18f, 0x1.9c37dp-20f, 0x1.52ef3ep-90f, 0.0f, 0.0f,
     0x1.74c4e6p-24f, 0x1.32da04p-109f, 0.0f, 0x1.33eddep-45f, 0x1.2eae2ep-109f,
     0x1.df719p-109f, 0x1.5fbedp-53f, 0x1.fa1b82p-79f, 0.0f, 0x1.b5ef52p-79f,
     0x1.052b9ep-102f, 0.0f, 0.0f, 0x1.f10142p-33f, 0x1.c1d34cp-54f, 0.0f, 0.0f,
     0x1.7ce88cp-75f, 0.0f, 0x1.044688p-109f, 0x1.fc29e4p-88f, 0x1.3da2cp-62f, 0.0f,
     0.0f, 0x1.c66e12p-51f, 0.0f, 0x1.bf0912p-22f, 0.0f, 0x1.98d50ap-118f,
     0x1.cc5e2ap-19f, 0x1.fb1edp-29f, 0x1.e5b3cp-52f, 0.0f, 0x1.2471e6p-28f,
     0x1.d338bp-26f, 0x1.4e768ep-53f, 0x1.5d69a2p-121f, 0x1.840c02p-31f,
     0x1.29a1acp-54f, 0.0f, 0x1.563a84p-21f, 0x1.f18384p-17f, 0x1.27e47cp-80f, 0.0f,
     0.0f, 0x1.f3bcbep-121f, 0.0f, 0.0f, 0.0f, 0x1.e5a0eap-95f, 0x1.542072p-93f,
     0x1.689cbap-28f, 0.0f, 0x1.aaa4ap-124f, 0.0f, 0x1.77d448p-19f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6dc63p-2f, 0x1.7b8702p-39f, 0.0f,
     0x1.e5ccc4p-93f, 0x1.744352p-87f, 0.0f, 0x1.8daf64p-22f, 0x1.b454f6p-120f, 0.0f,
     0x1.ad008cp-19f, 0x1.4ad3e2p-76f, 0x1.6b541ap-51f, 0.0f, 0.0f, 0.0f,
     0x1.fe167cp-85f, 0x1.8ccd18p-11f, 0.0f, 0.0f, 0.0f, 0x1.8b742ep-33f, 0.0f, 0.0f,
     0x1.a1524ap-30f, 0x1.fdc7p-96f, 0x1.1c9b9cp-93f, 0x1.d87766p-81f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.99bec6p-90f, 0.0f, 0x1.b2debep-98f, 0.0f, 0.0f, 0.0f,
     0x1.3ce7b6p-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9f7e12p-108f, 0.0f, 0.0f,
     0x1.0707d8p-14f, 0x1.292ce8p-5f, 0.0f, 0.0f, 0x1.fbc2e4p-65f, 0.0f, 0.0f,
     0x1.4d9c18p-26f, 0.0f, 0x1.7c5b9ep-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a1da48p-12f,
     0.0f, 0.0f, 0x1.21549ap-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.64e77p-114f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.fa59a6p-118f, 0x1.734282p-92f, 0.0f, 0.0f,
     0x1.36772cp-75f, 0x1.8d9cdp-5f, 0x1.db09a4p-66f, 0.0f, 0x1.1f6d4ap-49f, 0.0f,
     0.0f, 0x1.f2d5c6p-38f, 0x1.7fcc08p-117f, 0x1.3e5dep-108f, 0.0f, 0x1.aa0ab2p-17f,
     0.0f, 0x1.e53d1cp-4f, 0x1.85139ep-5f, 0.0f, 0x1.452cecp-3f, 0x1.ba5edp-43f, 0.0f,
     0x1.1ae74ap-72f, 0.0f, 0x1.d61ec6p-28f, 0x1.6d5e58p-89f, 0x1.9ecb4cp-80f,
     0x1.aec312p-64f, 0x1.286f72p-61f, 0x1.b66792p-97f, 0.0f, 0x1.c8779p-32f,
     0x1.770d16p-51f, 0.0f, 0.0f, 0x1.73254ap-50f, 0x1.e2304p-115f, 0.0f,
     0x1.84f96cp-117f, 0.0f, 0x1.05e21ap-54f, 0x1.af6846p-112f, 0x1.d2ecf6p-120f,
     0x1.17958p-4f, 0x1.d25d8cp-123f, 0x1.6d219ap-21f, 0x1.e624fap-46f,
     0x1.9f340cp-126f, 0.0f, 0.0f, 0x1.64db6ap-69f, 0.0f, 0x1.01ee3ep-34f, 0.0f, 0.0f,
     0x1.6832dp-36f, 0.0f, 0x1.55ece4p-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5f400ap-18f,
     0.0f, 0.0f, 0x1.b2aec2p-84f, 0x1.c7cf78p-118f, 0x1.ddfcc2p-109f, 0.0f,
     0x1.b26f1ap-28f, 0.0f, 0x1.c3f404p-110f, 0.0f, 0x1.dd99d4p-124f, 0x1.a1c9dp-116f,
     0x1.eee504p-14f, 0.0f, 0x1.3c58a2p-110f, 0.0f, 0x1.527a4p-79f, 0x1.96ca62p-93f,
     0x1.662378p-99f, 0x1.c28b5p-111f, 0x1.88d1ccp-89f, 0x1.18471ep-86f, 0.0f, 0.0f,
     0x1.f6aedep-18f, 0x1.b1727ap-39f, 0x1.13128ep-20f, 0x1.d9ea8cp-11f,
     0x1.c52298p-66f, 0.0f, 0.0f, 0x1.150ce6p-32f, 0x1.bc3b0ap-89f, 0.0f,
     0x1.bc9ecap-63f, 0x1.9e36f4p-38f, 0.0f, 0.0f, 0.0f, 0x1.eac0b8p-85f,
     0x1.476566p-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ba4df6p-1f, 0.0f,
     0x1.9bbe32p-16f, 0x1.e73718p-62f, 0x1.92a0fap-10f, 0x1.115484p-64f, 0.0f, 0.0f,
     0x1.89bd54p-12f, 0.0f, 0x1.453bdcp-108f, 0.0f, 0x1.70ca66p-74f, 0x1.f0ee2p-102f,
     0x1.cf205p-119f, 0x1.479b1p-117f, 0x1.0d1848p-67f, 0x1.62646ap-22f, 0.0f, 0.0f,
     0.0f, 0x1.700e36p-4f, 0.0f, 0x1.46c044p-117f, 0.0f, 0x1.95ce8ep-36f,
     0x1.05429p-93f, 0x1.0bceacp-33f, 0.0f, 0.0f, 0.0f, 0x1.d36d92p-17f,
     0x1.592176p-63f, 0.0f, 0x1.11ca8p-41f, 0x1.e0b0e4p-55f, 0.0f, 0x1.45e142p-65f,
     0x1.2aa8dap-114f, 0x1.959948p-21f, 0x1.f069bep-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d3bb9ap-60f, 0.0f, 0x1.e6420cp-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6fb31ap-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4efe04p-22f, 0x1.d4a56p-33f, 0.0f,
     0x1.aeca04p-37f, 0.0f, 0x1.78d5a6p-10f, 0x1.74b4e6p-51f, 0.0f, 0x1.59b2dcp-108f,
     0x1.f851bcp-126f, 0x1.ee0f38p-3f, 0x1.b0fc24p-52f, 0.0f, 0x1.759886p-23f, 0.0f,
     0x1.8ba47ap-62f, 0x1.67151ep-105f, 0.0f, 0x1.cc0fe8p-106f, 0x1.2815eep-87f,
     0x1.d26108p-4f, 0.0f, 0.0f, 0.0f, 0x1.8a5742p-108f, 0x1.264382p-117f,
     0x1.35e9ep-92f, 0x1.aec4eap-25f, 0.0f, 0.0f, 0x1.23be88p-123f, 0.0f, 0.0f, 0.0f,
     0x1.67cd2p-122f, 0x1.bf3d4ep-41f, 0.0f, 0x1.48b80cp-118f, 0x1.40ebep-125f, 0.0f,
     0x1.ce2eeap-121f, 0x1.b6fc6p-109f, 0x1.fa15d6p-35f, 0x1.c8e4b4p-71f, 0.0f,
     0x1.c41adap-110f, 0.0f, 0x1.7750cap-108f, 0.0f, 0.0f, 0x1.2714bp-21f, 0.0f, 0.0f,
     0x1.0a44aep-122f, 0x1.aa456ap-21f, 0.0f, 0x1.62adc8p-23f, 0x1.d67018p-51f,
     0x1.f7e3c8p-61f, 0x1.17a4p-110f, 0.0f, 0x1.c11a24p-31f, 0.0f, 0x1.b17132p-111f,
     0x1.b5470ap-88f, 0.0f, 0.0f, 0.0f, 0x1.764a6p-59f, 0x1.bf889ap-76f,
     0x1.54dd7ep-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.756a86p-116f, 0x1.6f7dep-42f, 0x1.00ed5ep-89f, 0x1.389908p-42f, 0.0f,
     0x1.1a33c6p-64f, 0.0f, 0.0f, 0x1.0334bap-107f, 0x1.efb55ap-60f, 0.0f,
     0x1.749e3p-104f, 0x1.83970ep-3f, 0.0f, 0x1.3bca0ep-33f, 0x1.8059d4p-106f,
     0x1.f51f1ep-95f, 0.0f, 0x1.d43a14p-110f, 0x1.762bfap-121f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.2702eep-21f, 0.0f, 0.0f, 0x1.557dc6p-77f, 0.0f,
     0x1.f9170ap-122f, 0.0f, 0.0f, 0x1.68cf5p-19f, 0x1.7de71ep-22f, 0x1.07e09cp-74f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.5c99ccp-103f, 0x1.171926p-67f, 0.0f, 0.0f,
     0x1.01a9d8p-34f, 0x1.a5c638p-103f, 0.0f, 0x1.4981cp-35f, 0.0f, 0x1.c0d322p-16f,
     0.0f, 0.0f, 0x1.8f9396p-39f, 0.0f, 0x1.84c934p-22f, 0x1.44cfd4p-100f,
     0x1.a3fbbcp-106f, 0.0f, 0x1.4339e2p-95f, 0.0f, 0x1.854ebcp-122f, 0x1.26cbf2p-52f,
     0x1.1705b2p-50f, 0x1.e4951ap-45f, 0.0f, 0x1.94a8ecp-62f, 0x1p0f, 0x1.eed45ap-31f,
     0x1.1705fp-112f, 0x1.d7338ap-39f, 0.0f, 0.0f, 0x1.41f33ap-30f, 0x1.ff204p-16f,
     0.0f, 0x1.ce89aep-42f, 0x1.31fd66p-50f, 0x1.d786aep-82f, 0x1.9ff8a8p-77f, 0.0f,
     0x1.664bb6p-67f, 0.0f, 0.0f, 0x1.4f2af4p-65f, 0x1.71c718p-22f, 0.0f,
     0x1.cbe166p-121f, 0.0f, 0.0f, 0x1.04f18p-63f, 0x1.1dd036p-113f, 0x1.b68fa6p-35f,
     0x1.c6129p-92f, 0.0f, 0.0f, 0x1.75a2a2p-64f, 0x1.9e60e6p-100f, 0x1.a0e834p-23f,
     0x1.f64e58p-48f, 0x1.bb4b9ap-1f, 0x1.fb9196p-4f, 0x1.490e78p-108f,
     0x1.2466cap-118f, 0.0f, 0x1.8fee6ep-19f, 0.0f, 0x1.4d168ap-78f, 0.0f,
     0x1.34a5a6p-18f, 0.0f, 0x1.7def12p-71f, 0x1.67da58p-17f, 0.0f, 0x1.3a5edp-36f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b04be6p-22f, 0x1.933096p-20f, 0x1.8e94bcp-82f, 0.0f,
     0x1.aad926p-35f, 0.0f, 0.0f, 0.0f, 0x1.0072fcp-24f, 0x1.29dc42p-70f, 0.0f
};
static const float external_bench_wrapper_input_table_arg1[1004]  = {
     0.0f, 0.0f, 0.0f, 0x1.7f388ep-94f, 0x1.6eab12p-81f, 0.0f, 0.0f, 0x1.8da13ep-36f,
     0.0f, 0x1.7182aap-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b785c8p-48f,
     0x1.cc8f48p-28f, 0x1.abfb5cp-15f, 0x1.1b2c4p-27f, 0x1.841388p-70f,
     0x1.cbf5dp-69f, 0.0f, 0x1.8203b8p-109f, 0.0f, 0.0f, 0x1.dca8acp-116f,
     0x1.a8bbfap-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.59297ep-74f, 0.0f, 0.0f,
     0x1.1f5e72p-28f, 0.0f, 0.0f, 0.0f, 0x1.790ceap-80f, 0x1.582418p-62f,
     0x1.f7512p-96f, 0.0f, 0.0f, 0x1.fcd5d8p-3f, 0x1.6bf33cp-77f, 0x1.6fa01p-95f,
     0.0f, 0.0f, 0.0f, 0x1.29324ap-8f, 0.0f, 0x1.c0863ep-112f, 0.0f, 0.0f,
     0x1.af384cp-88f, 0.0f, 0x1.c7aa8ap-108f, 0.0f, 0.0f, 0.0f, 0x1.d49ef4p-33f,
     0x1.d0e28cp-124f, 0x1.c1e8f2p-75f, 0x1.e490f6p-72f, 0.0f, 0x1.9e0e84p-37f, 0.0f,
     0x1.d2c41ep-61f, 0x1.c9d7fcp-5f, 0x1.8e5432p-96f, 0x1.cd2eb4p-102f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e6df38p-104f, 0.0f, 0x1.d4886p-94f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f4c892p-125f, 0.0f, 0x1.5f49e4p-107f, 0.0f, 0.0f, 0x1.f973fp-97f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b9cf56p-120f, 0.0f, 0x1.09c628p-16f, 0x1.4e55e2p-103f,
     0x1.526548p-114f, 0.0f, 0.0f, 0x1.ab12eap-56f, 0x1.52959p-19f, 0x1.6c318cp-116f,
     0x1.e6c044p-86f, 0.0f, 0x1.500742p-64f, 0.0f, 0x1.feacecp-25f, 0.0f, 0.0f,
     0x1.5bda22p-66f, 0x1.121fecp-40f, 0x1p0f, 0x1.8e256cp-77f, 0x1.7333fcp-79f, 0.0f,
     0x1.ed1ef4p-33f, 0x1.b1264p-72f, 0.0f, 0x1.4effdep-121f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bc3784p-39f, 0.0f, 0x1.6bd3d4p-62f, 0.0f, 0x1.4d4718p-69f, 0x1.4fee52p-31f,
     0x1.80bf56p-94f, 0.0f, 0x1.34b9c4p-123f, 0x1.57843cp-26f, 0x1.61e996p-11f,
     0x1.2cf01cp-100f, 0x1.debadcp-56f, 0.0f, 0.0f, 0x1.0415cap-2f, 0.0f, 0.0f, 0.0f,
     0x1.d91654p-104f, 0.0f, 0x1.aba782p-34f, 0x1.a4c24cp-5f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7007c4p-119f, 0.0f, 0.0f, 0x1.3c2912p-117f, 0x1.3a6862p-34f, 0.0f, 0.0f,
     0.0f, 0x1.47dd7ep-105f, 0x1.46acdcp-84f, 0.0f, 0.0f, 0.0f, 0x1.25f896p-19f,
     0x1.f571dcp-103f, 0x1.44451p-97f, 0.0f, 0x1.4ee45cp-110f, 0.0f, 0.0f,
     0x1.f7006ap-47f, 0x1.bcdb4ep-1f, 0x1.aee0fcp-112f, 0.0f, 0x1.03fe94p-45f,
     0x1.037474p-90f, 0.0f, 0x1.3aa19ep-116f, 0.0f, 0x1.92fcc4p-84f, 0.0f, 0.0f, 0.0f,
     0x1.2f8e0cp-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9fff72p-59f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ac2274p-100f, 0x1.76088ep-42f, 0.0f, 0x1.2329ap-38f,
     0x1.6fc69ep-9f, 0x1.c34c8ep-85f, 0.0f, 0x1.0a1ee8p-57f, 0x1.d579bep-66f,
     0x1.3c58acp-47f, 0x1.5e7b38p-93f, 0x1.8dae64p-124f, 0x1.4babcep-99f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.58dcd2p-30f, 0x1.5e4c1ep-40f, 0.0f,
     0x1.40c0a6p-38f, 0x1.e7a434p-89f, 0.0f, 0.0f, 0.0f, 0x1.47b144p-84f,
     0x1.4ce13cp-54f, 0x1.baa1fap-67f, 0x1.2af76ep-53f, 0x1.432e7ep-79f, 0.0f, 0.0f,
     0.0f, 0x1.4fcf9ep-62f, 0x1.ec6134p-36f, 0x1.a34e42p-102f, 0.0f, 0.0f, 0.0f,
     0x1.e54d42p-3f, 0x1.5febf2p-17f, 0.0f, 0.0f, 0x1.c01736p-80f, 0.0f,
     0x1.8a1d48p-15f, 0.0f, 0x1.df4168p-88f, 0.0f, 0.0f, 0.0f, 0x1.dfd4c6p-103f,
     0x1.d81d06p-113f, 0.0f, 0.0f, 0x1.ae9cbap-14f, 0x1.041d4p-63f, 0.0f,
     0x1.4f75eap-46f, 0x1.50e7f4p-25f, 0.0f, 0.0f, 0.0f, 0x1.05f9f8p-12f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.91faa2p-38f, 0.0f, 0x1.2fb2eep-78f, 0.0f, 0.0f,
     0x1.5c33fp-117f, 0x1.60e23cp-97f, 0.0f, 0x1.2ab466p-24f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b3d964p-16f, 0.0f, 0x1.ee730ap-77f, 0x1.9e0b8cp-91f,
     0x1.6f72c2p-71f, 0.0f, 0.0f, 0x1.b0ad66p-91f, 0.0f, 0.0f, 0x1.1c7cap-16f, 0.0f,
     0.0f, 0x1.b6e1f8p-96f, 0.0f, 0x1.cb4d82p-111f, 0x1.928e8p-15f, 0.0f, 0.0f, 0.0f,
     0x1.c2763ep-21f, 0.0f, 0.0f, 0x1.5fcd7ep-116f, 0.0f, 0x1.aa5534p-23f, 0.0f,
     0x1.c3ab0ap-124f, 0x1p0f, 0x1.729d82p-99f, 0x1.093498p-84f, 0x1.58ba1cp-74f,
     0.0f, 0.0f, 0x1.ac5e66p-115f, 0x1.9070c6p-85f, 0x1.879aap-28f, 0.0f,
     0x1.868e24p-11f, 0.0f, 0.0f, 0.0f, 0x1.efa73p-26f, 0x1.dd077p-69f,
     0x1.368a3ep-49f, 0x1.3365d6p-54f, 0x1.80dfecp-75f, 0x1.862be6p-34f, 0.0f,
     0x1.fb604p-16f, 0.0f, 0x1.fae99ep-124f, 0x1.fc345ap-75f, 0x1.0fdb44p-97f,
     0x1.b3d85ap-100f, 0x1.e395fcp-54f, 0x1.84b6aap-46f, 0x1.3c7752p-117f, 0.0f, 0.0f,
     0x1.223bb2p-1f, 0x1.243fbp-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bbdeacp-5f, 0.0f,
     0.0f, 0.0f, 0x1.e045b8p-101f, 0.0f, 0x1.73265cp-78f, 0x1.d513p-117f,
     0x1.6c6466p-37f, 0.0f, 0x1.9f073ap-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.52cd84p-38f,
     0x1.a02e16p-76f, 0.0f, 0.0f, 0x1.4e3262p-6f, 0x1.e49e2ap-33f, 0x1.27aeb6p-17f,
     0x1.5fc124p-17f, 0x1.f0cfbep-42f, 0.0f, 0x1.0b45f4p-111f, 0x1.efafdp-79f,
     0x1.b4b906p-119f, 0x1.bd669cp-87f, 0.0f, 0x1.c0b752p-16f, 0.0f, 0x1.757f88p-90f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.57945ap-121f, 0x1.57dd76p-7f, 0x1.3afc68p-72f, 0.0f,
     0.0f, 0x1.43e0ccp-2f, 0.0f, 0.0f, 0x1.93953p-41f, 0x1.94b6c2p-71f, 0.0f,
     0x1.76c214p-106f, 0.0f, 0x1.f1901ep-70f, 0x1.f2aca8p-21f, 0.0f, 0x1.b35ecp-8f,
     0x1.93f7c2p-41f, 0x1.b6ba7ep-62f, 0x1.5301cap-57f, 0.0f, 0x1.cc336p-81f, 0.0f,
     0.0f, 0.0f, 0x1.187072p-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fbebdap-10f,
     0x1.3085d2p-75f, 0.0f, 0.0f, 0x1.a6549ap-58f, 0.0f, 0x1.e06332p-42f,
     0x1.a63fcp-33f, 0x1.512f22p-67f, 0.0f, 0x1.fb8d5cp-81f, 0.0f, 0.0f,
     0x1.9374ep-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0ea168p-100f, 0.0f, 0.0f, 0.0f,
     0x1.20d918p-23f, 0x1.830ab2p-107f, 0.0f, 0.0f, 0.0f, 0x1.60e4aap-103f, 0.0f,
     0x1.2598a6p-91f, 0x1.da090ep-54f, 0x1.7d12d8p-95f, 0.0f, 0x1.bb8fccp-65f, 0.0f,
     0x1.fb949p-53f, 0x1.8ac236p-112f, 0x1.2fbb8ap-125f, 0x1.3b9fd8p-35f, 0.0f, 0.0f,
     0.0f, 0x1.1a6234p-88f, 0.0f, 0x1.71e99ap-82f, 0.0f, 0.0f, 0x1.0ce052p-103f,
     0x1.1bda4ap-31f, 0x1.f326ecp-15f, 0.0f, 0x1.0e7adep-125f, 0x1.b3e056p-88f,
     0x1.69514cp-62f, 0.0f, 0x1.ed1856p-54f, 0x1.77b178p-28f, 0.0f, 0x1.e53982p-3f,
     0.0f, 0.0f, 0.0f, 0x1.d290dp-53f, 0.0f, 0.0f, 0x1.ad992ep-45f, 0.0f, 0.0f,
     0x1.f4db42p-116f, 0x1.1075ep-50f, 0x1.a04e28p-46f, 0x1.3fa26cp-108f,
     0x1.49a12p-48f, 0x1.20e84cp-115f, 0x1.35a094p-76f, 0.0f, 0x1.44055ap-124f,
     0x1.6f7d5p-100f, 0.0f, 0.0f, 0.0f, 0x1.39eb68p-108f, 0x1.41e76p-35f, 0.0f, 0.0f,
     0x1p0f, 0.0f, 0.0f, 0x1.bc796ap-15f, 0.0f, 0x1p0f, 0x1.e24736p-126f, 0.0f,
     0x1.c60708p-91f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1f1506p-2f,
     0.0f, 0.0f, 0x1.3b075p-102f, 0x1.1ebc7p-3f, 0.0f, 0.0f, 0.0f, 0x1.be86e6p-111f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.1a409p-118f, 0.0f, 0x1.69af16p-63f, 0x1.4f870ep-100f,
     0x1.60604cp-33f, 0x1.44dc88p-5f, 0.0f, 0x1.9c5cb6p-17f, 0x1.de8feep-74f,
     0x1.a43126p-74f, 0.0f, 0.0f, 0x1.218f7ep-112f, 0x1.04e91p-27f, 0x1.5b8b0cp-126f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f2fd3cp-4f, 0.0f, 0x1.4574eap-22f, 0.0f,
     0x1.b73342p-33f, 0.0f, 0.0f, 0x1.43b8e6p-55f, 0x1.f72c4ap-8f, 0.0f, 0.0f,
     0x1.36b508p-104f, 0x1.01383cp-88f, 0.0f, 0x1.bbd16cp-94f, 0.0f, 0x1.ee22b2p-13f,
     0.0f, 0x1.835288p-94f, 0x1.e06ff8p-104f, 0x1.7af63p-31f, 0.0f, 0x1.4a534ep-83f,
     0x1.a83bc6p-98f, 0x1.191432p-8f, 0.0f, 0x1.52b5cep-93f, 0x1.6ceb4ep-104f, 0.0f,
     0.0f, 0x1.6417bep-86f, 0.0f, 0.0f, 0x1.f7534p-18f, 0.0f, 0x1.30ce3ep-125f, 0.0f,
     0.0f, 0.0f, 0x1.91c2c2p-107f, 0.0f, 0.0f, 0x1.2672fep-4f, 0x1.5b0baap-81f, 0.0f,
     0x1.5bb108p-57f, 0.0f, 0x1.9a7d4ep-105f, 0x1.fefd7p-44f, 0.0f, 0.0f,
     0x1.96dc0ep-72f, 0.0f, 0.0f, 0.0f, 0x1.9b129ap-29f, 0.0f, 0x1.d7164p-72f, 0.0f,
     0x1.70e51ep-112f, 0.0f, 0x1.c5c9bep-58f, 0x1.867a16p-35f, 0x1.9e8046p-41f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.be1ffep-46f, 0.0f, 0x1.f895d2p-20f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.61d2ap-56f, 0.0f, 0.0f, 0x1.67ec9ap-119f, 0x1.c48e22p-83f, 0.0f, 0.0f,
     0x1.daec6p-22f, 0.0f, 0x1.0b62eap-104f, 0.0f, 0x1.fa7cf2p-106f, 0x1.4a6d2ep-111f,
     0.0f, 0.0f, 0.0f, 0x1.672c1cp-50f, 0.0f, 0.0f, 0.0f, 0x1.fedffep-107f,
     0x1.909472p-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3d877p-31f, 0.0f, 0.0f,
     0x1.5ab8d8p-125f, 0x1.2692eep-88f, 0x1.33762ep-81f, 0x1.19eb28p-79f, 0.0f,
     0x1.f8bcf4p-3f, 0.0f, 0.0f, 0x1.8b05e8p-63f, 0x1.0e5f14p-88f, 0x1.3922ccp-97f,
     0.0f, 0.0f, 0x1.67db78p-111f, 0.0f, 0.0f, 0x1.c77d24p-12f, 0x1.04217ap-68f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f36c92p-60f, 0x1.c21ca6p-74f, 0x1.93a32ep-100f, 0.0f, 0.0f,
     0x1.c6828p-4f, 0.0f, 0.0f, 0.0f, 0x1.737638p-24f, 0x1.f6f306p-31f, 0.0f, 0.0f,
     0.0f, 0x1.384ebap-119f, 0x1.a91d78p-59f, 0x1.78c28cp-104f, 0x1.917822p-12f,
     0x1.9fe324p-85f, 0x1.c779cap-95f, 0x1.f5e73ap-57f, 0.0f, 0x1.d61d36p-95f, 0.0f,
     0.0f, 0x1.942094p-53f, 0x1.86fe12p-89f, 0x1.74e1bep-27f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d3013p-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e2592cp-7f, 0x1.10b8d4p-37f,
     0.0f, 0.0f, 0x1.ebde06p-52f, 0x1.27440ep-44f, 0.0f, 0.0f, 0x1.438ef8p-76f,
     0x1.2ef77cp-76f, 0.0f, 0x1.78e8dp-35f, 0x1.0cfaa2p-28f, 0.0f, 0x1.c996cep-60f,
     0x1.c0e5d8p-80f, 0x1.0a9f2cp-11f, 0x1.57340ap-35f, 0x1.0c623ep-68f,
     0x1.ed4a1ep-116f, 0.0f, 0x1.fb0dp-85f, 0.0f, 0.0f, 0x1.3ddca6p-18f,
     0x1.39e192p-22f, 0x1.c9dc4ap-29f, 0.0f, 0x1.06243ep-83f, 0.0f, 0x1.464976p-44f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.cc0c4ep-49f, 0.0f, 0.0f, 0.0f, 0x1.4edac8p-125f,
     0.0f, 0x1.59b836p-56f, 0x1.61e94ap-90f, 0x1.e5e648p-110f, 0.0f, 0.0f, 0.0f,
     0x1.86fd58p-102f, 0.0f, 0x1.b8ea4ep-31f, 0x1.0718bp-30f, 0.0f, 0.0f,
     0x1.c307aep-117f, 0.0f, 0.0f, 0.0f, 0x1.9a2f6ap-72f, 0x1.776754p-100f, 0.0f,
     0x1.47378ep-55f, 0.0f, 0x1.cd543p-101f, 0.0f, 0x1.e85c16p-29f, 0.0f, 0.0f,
     0x1.65e06cp-24f, 0x1.486ed4p-22f, 0x1.b44fp-26f, 0x1.956818p-115f, 0.0f,
     0x1.a40ca4p-109f, 0.0f, 0x1.1e4adp-52f, 0.0f, 0x1.debc56p-71f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f0a1a4p-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.95dc22p-32f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a521e4p-111f, 0x1.55edcap-50f, 0x1.12f322p-95f,
     0x1.37c53p-117f, 0x1.e64fb2p-33f, 0.0f, 0.0f, 0x1.41b9a8p-3f, 0x1.b44118p-35f,
     0.0f, 0.0f, 0x1.7b5bfap-85f, 0.0f, 0x1.e15078p-33f, 0x1.009acp-54f,
     0x1.2491f4p-59f, 0x1.da274ep-50f, 0.0f, 0.0f, 0x1.58c6fcp-109f, 0x1.6ea28p-53f,
     0x1.d4f7cp-38f, 0x1.c34d64p-111f, 0x1.2c3826p-52f, 0x1.594418p-123f,
     0x1.d0126ep-24f, 0.0f, 0.0f, 0.0f, 0x1.857e34p-92f, 0x1.66dc3cp-32f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.77ca9p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c22734p-3f, 0.0f,
     0x1.e93e3cp-55f, 0.0f, 0.0f, 0x1.5a711p-52f, 0.0f, 0x1.c74384p-54f, 0.0f,
     0x1.0b5e76p-27f, 0.0f, 0.0f, 0.0f, 0x1.37626cp-123f, 0x1.76ab68p-62f,
     0x1.502a42p-37f, 0.0f, 0.0f, 0.0f, 0x1.dd26dap-56f, 0.0f, 0x1.981094p-14f,
     0x1.08b00cp-105f, 0.0f, 0x1.c72814p-113f, 0.0f, 0x1.576aa4p-53f, 0.0f, 0.0f,
     0x1.251186p-65f, 0.0f, 0x1.c89cfcp-39f, 0x1.76fb28p-1f, 0.0f, 0x1.0a9cb4p-28f,
     0.0f, 0.0f, 0.0f, 0x1.cb0ed2p-125f, 0.0f, 0.0f, 0x1.a653acp-59f, 0.0f,
     0x1.5faf7p-98f, 0.0f, 0x1.f0ba0cp-108f, 0.0f, 0x1.a0ac52p-60f, 0x1.1d9eep-69f,
     0x1.9da984p-17f, 0.0f, 0x1.27c598p-108f, 0.0f, 0x1.b64b52p-88f, 0x1.91a8dep-71f,
     0.0f, 0.0f, 0.0f, 0x1.ef891ep-118f, 0.0f, 0.0f, 0x1.173a86p-103f, 0.0f,
     0x1.95e0bp-47f, 0x1.a8e15p-74f, 0x1.a4b1a6p-99f, 0.0f, 0x1.79e1ecp-107f, 0.0f,
     0x1.234a44p-18f, 0x1.0aabf6p-126f, 0x1.372bcep-74f, 0.0f, 0x1.c5337cp-126f, 0.0f,
     0x1.d9bc08p-125f, 0.0f, 0.0f, 0x1.b110a8p-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7bd988p-95f, 0x1.0e1794p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c6ea1ep-58f,
     0x1.1e8ccep-62f, 0x1.a02344p-84f, 0x1p0f, 0.0f, 0x1.14aaa4p-75f, 0x1.298208p-81f,
     0.0f, 0.0f, 0x1.b05988p-46f, 0x1.0796aep-102f, 0x1.f497c6p-40f, 0x1.33b6f6p-93f,
     0.0f, 0x1.e77dcp-78f, 0.0f, 0.0f, 0x1.b8cd72p-10f, 0x1.782054p-66f,
     0x1.167c52p-69f, 0x1.916ce6p-84f, 0.0f, 0.0f, 0x1.c792d8p-95f, 0x1.4c671cp-82f,
     0.0f, 0.0f, 0x1.7c41bcp-1f, 0.0f, 0x1p0f, 0x1.113e96p-49f, 0.0f, 0.0f, 0.0f,
     0x1.40091ap-34f, 0x1.1b9e52p-19f, 0x1.95d2ep-87f, 0x1.9e1f7ap-47f, 0.0f, 0.0f,
     0x1.86322ep-25f, 0x1.194bc4p-103f, 0x1.3e448cp-124f, 0.0f, 0.0f, 0.0f,
     0x1.b00462p-93f, 0.0f, 0.0f, 0.0f, 0x1.e2ba2p-121f, 0x1.33c262p-93f, 0.0f, 0.0f,
     0x1.e0594p-92f, 0x1.571d2cp-121f, 0.0f, 0x1.e40852p-90f, 0x1.67c6d2p-81f,
     0x1.f083d6p-19f
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
            ml_float4_t tmp3;
            int32_t tmp4;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            memcpy(&tmp1, ((ml_float4_t*)(external_bench_wrapper_input_table_arg1+ i)), 16);
            tmp2 = Sleef_finz_hypotf4_u05avx2128(tmp0, tmp1);
            memcpy(((ml_float4_t*)(external_bench_wrapper_output_table+ i)), &(tmp2), 16);
            tmp3 = local_acc + tmp2;
            local_acc = tmp3;
            tmp4 = i + INT32_C(4);
            i = tmp4;
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
    printf("Sleef_finz_hypotf4_u05avx2128 %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_hypotf4_u05avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
