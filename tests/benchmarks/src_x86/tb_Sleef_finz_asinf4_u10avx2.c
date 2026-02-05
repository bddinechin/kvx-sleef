/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_asinf4_u10avx2128.c --function \
 *     Sleef_finz_asinf4_u10avx2128 --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0.0f, 0.0f, 0x1.670954p-39f, 0x1.23a588p-55f, 0x1.5c482ep-36f, 0.0f, 0.0f,
     0x1.3528eap-77f, 0.0f, 0x1.4e1b5ap-44f, 0x1.00d65cp-93f, 0.0f, 0x1.a158b4p-118f,
     0.0f, 0x1.a4242cp-20f, 0.0f, 0.0f, 0x1.aa39d6p-121f, 0.0f, 0.0f, 0x1.991bdcp-89f,
     0.0f, 0.0f, 0.0f, 0x1.011a0ap-88f, 0x1.ed261ap-8f, 0x1.55d6dcp-31f,
     0x1.27d80ep-4f, 0.0f, 0x1.992984p-24f, 0x1.099d98p-79f, 0x1.9ee51ep-31f,
     0x1.66cafap-46f, 0.0f, 0x1.fcfa06p-42f, 0.0f, 0.0f, 0x1.c46bbap-65f,
     0x1.5f0e9ep-113f, 0x1.e8d8a4p-90f, 0x1.ded3f2p-20f, 0x1.c2befcp-4f, 0.0f,
     0x1.7e24f8p-44f, 0x1.26511p-52f, 0x1.9529bp-115f, 0x1.77673ep-113f,
     0x1.821c24p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.764a98p-104f, 0.0f, 0.0f,
     0x1.5ba972p-112f, 0x1.ec4de4p-64f, 0.0f, 0x1.81a5dcp-56f, 0.0f, 0.0f,
     0x1.201fccp-25f, 0x1.b90c9cp-19f, 0x1.84f0e6p-16f, 0x1.b53336p-125f,
     0x1.14a42ap-12f, 0x1.73cfb8p-83f, 0x1.4984f6p-80f, 0x1.81f5eap-86f,
     0x1.540aa4p-44f, 0x1.dc4cc8p-57f, 0.0f, 0.0f, 0.0f, 0x1.08e1e6p-62f, 0.0f,
     0x1.9802aap-82f, 0x1.c6a072p-16f, 0x1.0ff68cp-108f, 0.0f, 0x1.89f176p-16f,
     0x1.20cf36p-44f, 0x1.63b476p-8f, 0x1.c8de4ep-107f, 0.0f, 0.0f, 0x1.8f316p-74f,
     0.0f, 0x1.e38b8ep-79f, 0.0f, 0x1.f052ecp-83f, 0.0f, 0x1.1cba8p-55f,
     0x1.65ce3ep-2f, 0x1.0b6fa8p-121f, 0.0f, 0x1.c72a12p-124f, 0.0f, 0x1.125c9p-97f,
     0x1.369ad8p-84f, 0x1.5acad6p-122f, 0x1.03ae94p-69f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.27bd94p-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f2220cp-47f, 0.0f, 0.0f,
     0x1.629798p-56f, 0x1.338aaep-8f, 0x1.584a48p-55f, 0x1.dda2e4p-65f,
     0x1.a6f154p-70f, 0.0f, 0x1.ae077cp-124f, 0x1.f2676cp-79f, 0x1.7655ccp-125f, 0.0f,
     0x1.90169ep-79f, 0.0f, 0x1.3c4f8ap-6f, 0.0f, 0x1.f30b16p-23f, 0.0f,
     0x1.79e1dap-91f, 0.0f, 0.0f, 0x1.e7226cp-111f, 0.0f, 0.0f, 0x1.af9e98p-88f, 0.0f,
     0x1.1d658ep-60f, 0x1.de1f9p-23f, 0.0f, 0.0f, 0x1.e1a06p-28f, 0x1.f88c0ep-30f,
     0x1.a2432ap-105f, 0x1.d37988p-31f, 0.0f, 0.0f, 0x1.3c9dbep-9f, 0x1.254aacp-41f,
     0.0f, 0.0f, 0x1.0cb332p-24f, 0.0f, 0.0f, 0.0f, 0x1.b6185cp-55f, 0x1.4be2dep-118f,
     0.0f, 0x1.7fbaf8p-35f, 0x1.3f0bd6p-62f, 0x1.706f1ep-97f, 0.0f, 0x1.457618p-91f,
     0x1.2a8c8ep-18f, 0x1.154e6ap-98f, 0x1.d0269p-51f, 0x1.7cca82p-64f, 0.0f, 0.0f,
     0.0f, 0x1.105d58p-122f, 0x1.7a8112p-122f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6cdf0ap-118f, 0.0f, 0.0f, 0x1.ae9fa6p-28f, 0x1.22ee4ep-61f, 0.0f, 0.0f,
     0x1.79bbeap-49f, 0x1.60cde4p-93f, 0x1.332796p-105f, 0.0f, 0x1.ef769cp-1f, 0.0f,
     0x1.3a69c6p-94f, 0.0f, 0.0f, 0.0f, 0x1.03d05ap-84f, 0.0f, 0.0f, 0x1.e9f2a4p-108f,
     0x1.4c6308p-109f, 0x1.23b7f4p-4f, 0.0f, 0x1.71ffa6p-93f, 0.0f, 0x1.252e84p-100f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.619a5p-41f, 0x1.17f622p-8f, 0x1.6dc15cp-126f,
     0x1.e115cp-87f, 0x1.bded0ep-44f, 0x1.76a7ecp-104f, 0x1.3e0ca2p-3f,
     0x1.670b5ap-40f, 0.0f, 0x1.c1a822p-93f, 0.0f, 0x1.9f7deap-21f, 0.0f,
     0x1.819092p-44f, 0x1.fb9572p-97f, 0x1.0fefep-5f, 0x1.ad7f96p-44f, 0.0f, 0.0f,
     0x1.f98694p-121f, 0.0f, 0.0f, 0x1.1444e2p-51f, 0.0f, 0.0f, 0x1.3837e2p-54f, 0.0f,
     0.0f, 0x1.dcd33cp-113f, 0.0f, 0.0f, 0x1.c13ea2p-105f, 0.0f, 0.0f, 0.0f,
     0x1.e1726ep-7f, 0.0f, 0.0f, 0x1.edcdecp-38f, 0.0f, 0x1.2efee6p-120f, 0.0f, 0.0f,
     0x1.cc8cdp-55f, 0.0f, 0x1.a0fea2p-90f, 0x1.6ce96p-49f, 0.0f, 0.0f, 0.0f,
     0x1.489e8p-12f, 0x1.38bf6ap-75f, 0x1.d2a194p-3f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a6bc86p-54f, 0.0f, 0x1.5e67ep-10f, 0x1.ffb56ep-35f, 0.0f, 0x1.13a0ep-14f,
     0x1.285156p-70f, 0.0f, 0x1.b2ffd4p-46f, 0x1.b4f16ap-36f, 0x1.4eb112p-94f,
     0x1.25f1dep-75f, 0x1.38cf78p-99f, 0.0f, 0.0f, 0x1.9a4ac2p-76f, 0x1.f23b36p-18f,
     0.0f, 0x1.dbdfc6p-100f, 0x1.8aecc6p-64f, 0x1.1c3076p-81f, 0.0f, 0x1.5b09d2p-38f,
     0.0f, 0x1.1ab29ap-125f, 0x1.b644p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f614a6p-3f, 0x1.b5ee7ap-109f, 0.0f, 0.0f, 0x1.6673bep-65f, 0.0f,
     0x1.f5bac2p-100f, 0x1.a51f66p-33f, 0.0f, 0x1.1dcb84p-47f, 0x1.9f6b82p-4f,
     0x1.846464p-78f, 0x1.cadf2p-30f, 0x1.bbf9e4p-101f, 0.0f, 0x1.c09efep-98f,
     0x1.0ac7cap-48f, 0.0f, 0x1.6a50b2p-62f, 0x1.ed1c78p-44f, 0x1.fc31fap-124f,
     0x1.d71184p-9f, 0x1.3fd7e6p-77f, 0.0f, 0x1.ef674cp-95f, 0x1.79dd3ap-126f,
     0x1.715d5p-55f, 0x1.583788p-1f, 0x1.de360ap-71f, 0x1.ed027ap-12f,
     0x1.4f3dd8p-39f, 0.0f, 0.0f, 0.0f, 0x1.143176p-55f, 0.0f, 0x1.410098p-13f,
     0x1.bdef36p-117f, 0x1p0f, 0.0f, 0.0f, 0x1.8b720cp-77f, 0.0f, 0.0f, 0.0f,
     0x1.d59bf8p-61f, 0x1.9948ep-23f, 0x1.b2b878p-12f, 0x1.dfc9d4p-76f,
     0x1.769a04p-104f, 0x1.6044e6p-69f, 0x1.27c7a2p-67f, 0x1.302878p-67f, 0.0f, 0.0f,
     0.0f, 0x1.e175d8p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d7bd52p-78f, 0x1.44ac26p-44f,
     0x1.a083ap-50f, 0.0f, 0x1.cf14d2p-64f, 0x1.5c970ap-123f, 0x1.955e1ep-11f, 0.0f,
     0.0f, 0.0f, 0x1.9ca858p-25f, 0x1.0d0e84p-79f, 0x1.f44db6p-54f, 0.0f,
     0x1.7b6b16p-105f, 0.0f, 0x1.702cb8p-18f, 0.0f, 0x1.b2871ap-113f, 0x1.db220ap-94f,
     0x1.3af0a4p-22f, 0.0f, 0x1.ec6b9cp-61f, 0.0f, 0x1.bb01f2p-52f, 0x1.fdd86ap-112f,
     0.0f, 0x1.4f5e8p-108f, 0.0f, 0x1.184648p-82f, 0x1.964c4ap-56f, 0.0f,
     0x1.37183cp-97f, 0x1.47364p-97f, 0x1.6b7642p-57f, 0x1.5e7856p-58f, 0.0f,
     0x1.ccedaep-101f, 0.0f, 0.0f, 0x1.0b6dcap-39f, 0x1.237086p-75f, 0x1.a363d4p-107f,
     0.0f, 0.0f, 0x1.5f63ap-76f, 0.0f, 0.0f, 0.0f, 0x1.1ae898p-23f, 0x1.dc0fb2p-52f,
     0.0f, 0.0f, 0.0f, 0x1.92a6ecp-37f, 0x1.9bb33ep-99f, 0.0f, 0x1.d0df1p-95f, 0.0f,
     0x1.1d09fp-15f, 0.0f, 0.0f, 0x1.c05b4ep-11f, 0x1.0aba7cp-84f, 0.0f, 0.0f,
     0x1.ba82fcp-89f, 0x1.7ffd06p-16f, 0x1.39276ep-30f, 0x1.1d6abap-111f, 0.0f,
     0x1.55a744p-55f, 0x1.0d1d1ep-74f, 0.0f, 0x1.371938p-15f, 0x1.9e7d1p-56f,
     0x1.f8cf88p-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c3663ap-78f, 0x1.b87b56p-19f,
     0x1.ac6786p-74f, 0.0f, 0x1.401a6cp-59f, 0.0f, 0.0f, 0.0f, 0x1.5d9444p-58f,
     0x1.c691a4p-76f, 0x1p0f, 0x1.949e6ep-117f, 0.0f, 0.0f, 0.0f, 0x1.548936p-65f,
     0.0f, 0.0f, 0x1.fcc9aap-13f, 0x1.4b656cp-81f, 0.0f, 0.0f, 0x1.0dbd64p-73f, 0.0f,
     0.0f, 0.0f, 0x1.957806p-33f, 0x1.ee901cp-35f, 0x1.556472p-10f, 0x1.ad7c96p-125f,
     0.0f, 0x1.fbffd4p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c6139p-125f, 0x1.5fcadcp-12f, 0.0f, 0x1.bc1688p-94f, 0.0f, 0.0f,
     0x1.20a3aap-35f, 0.0f, 0.0f, 0x1.27b55cp-3f, 0.0f, 0.0f, 0x1.dbf698p-17f, 0.0f,
     0x1.a0d54p-52f, 0x1.668c3p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.46a99p-65f, 0.0f,
     0x1.4485dcp-36f, 0.0f, 0x1.2ce7fp-63f, 0x1.ca28b6p-40f, 0x1.87fdc6p-59f, 0.0f,
     0.0f, 0x1.60f7bcp-21f, 0.0f, 0.0f, 0x1.a41886p-57f, 0.0f, 0x1.322b5ep-50f,
     0x1.03ddb2p-44f, 0x1.22195p-122f, 0.0f, 0x1.09acd4p-46f, 0x1.846046p-119f,
     0x1.caeca2p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0130f6p-53f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.973b6p-11f, 0.0f, 0x1.761b96p-27f, 0.0f, 0.0f, 0x1.d03cb8p-58f,
     0x1.6abd6p-47f, 0x1.0e0ae8p-76f, 0.0f, 0x1.eb6e7p-69f, 0x1.dabed2p-97f, 0.0f,
     0x1.7a7a02p-90f, 0x1.809664p-56f, 0x1.52c8dp-79f, 0x1.6fdbf6p-40f,
     0x1.afe5fcp-68f, 0x1.65261p-37f, 0.0f, 0.0f, 0.0f, 0x1.7e5d98p-53f, 0.0f,
     0x1.7ec6aap-85f, 0.0f, 0x1.ff605p-123f, 0.0f, 0x1.de6bf6p-32f, 0.0f,
     0x1.fd73eap-8f, 0.0f, 0x1.ece1ep-67f, 0.0f, 0x1.0721acp-32f, 0.0f,
     0x1.79250cp-70f, 0x1.96111ap-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5b5caep-76f, 0.0f,
     0x1.cff1bap-106f, 0x1.87160cp-103f, 0x1.6bdfacp-16f, 0x1.569fe2p-39f,
     0x1.061f5ap-45f, 0.0f, 0.0f, 0x1.776ed6p-3f, 0x1.da66cp-5f, 0.0f, 0.0f, 0.0f,
     0x1.44d6e2p-30f, 0x1.023632p-78f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f,
     0x1.ca583ep-101f, 0.0f, 0x1.20115cp-123f, 0x1.f6eeb6p-57f, 0x1.b13f8ap-117f,
     0.0f, 0x1.6dcde6p-73f, 0x1.3f0f9cp-119f, 0.0f, 0x1.0ee9b4p-21f, 0x1.bf368ap-61f,
     0.0f, 0.0f, 0.0f, 0x1.5341bep-117f, 0x1.d2ac36p-119f, 0x1.50f16ep-95f, 0.0f,
     0.0f, 0.0f, 0x1.6f71cap-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a4db24p-93f,
     0x1.679de2p-96f, 0x1.9e413ep-73f, 0x1.71e7fp-31f, 0x1.4ff688p-51f,
     0x1.8d30b8p-105f, 0.0f, 0x1.f1c2ccp-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ca1624p-78f, 0x1.721a68p-119f, 0.0f, 0x1.56c756p-46f, 0x1.c7bfdap-52f,
     0x1.588cdep-43f, 0x1.91b76ap-108f, 0.0f, 0x1.063472p-69f, 0x1.72dd42p-73f, 0.0f,
     0.0f, 0x1.2bc5fcp-11f, 0.0f, 0x1.fa18ecp-3f, 0x1.2c6176p-47f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.8d594ep-69f, 0.0f, 0x1.23ee34p-24f, 0.0f, 0.0f, 0x1.680eap-67f, 0.0f,
     0.0f, 0x1.7da098p-47f, 0.0f, 0x1.c9924ap-74f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f1bf46p-126f, 0x1.74b244p-48f, 0x1.173e94p-100f, 0.0f, 0x1.f35a7ep-7f,
     0x1.68d50cp-118f, 0x1p0f, 0.0f, 0.0f, 0x1.3b87d6p-115f, 0x1.2878f6p-23f, 0.0f,
     0x1.7ea1f6p-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bdc52p-58f, 0.0f, 0.0f,
     0x1.0a06bcp-49f, 0x1.9ff7a8p-37f, 0.0f, 0x1.5ee2b4p-79f, 0.0f, 0x1.7ba072p-81f,
     0x1.96f23p-71f, 0x1.db6ec6p-83f, 0x1.f22f1ap-79f, 0x1.08562p-123f, 0.0f, 0.0f,
     0x1.a8c484p-40f, 0.0f, 0.0f, 0.0f, 0x1.53731ep-110f, 0x1.d6b342p-114f,
     0x1.cd6cd6p-107f, 0x1.1c0c84p-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.4b9d7ap-66f, 0.0f, 0.0f, 0x1.b687cap-89f, 0.0f,
     0x1.289334p-98f, 0.0f, 0x1.5c7668p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.d771aap-83f, 0x1.c71bc8p-73f, 0.0f, 0x1.ccbd8cp-95f, 0x1.8ba9f2p-44f,
     0.0f, 0x1.902d1ap-53f, 0.0f, 0.0f, 0x1.ddd06ap-5f, 0x1.824b34p-27f, 0.0f,
     0x1.0aad8cp-85f, 0x1.8bf9a4p-25f, 0.0f, 0.0f, 0.0f, 0x1.4c1f4ap-70f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e9f8c8p-69f, 0.0f, 0.0f, 0x1.717782p-36f, 0.0f,
     0x1p0f, 0x1.bb837ep-18f, 0.0f, 0x1.6dddfap-3f, 0.0f, 0x1.c7e25ep-77f, 0.0f,
     0x1.ef208ep-64f, 0x1.cc6d0ep-109f, 0x1.d84c22p-56f, 0x1.419668p-110f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ae6daep-96f, 0.0f, 0.0f, 0x1.f9f648p-14f, 0x1.06891ap-12f,
     0x1.28e5a2p-14f, 0x1.b8871ep-10f, 0.0f, 0x1.3b9dc6p-101f, 0.0f, 0.0f,
     0x1.8c080cp-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8c88b2p-17f,
     0x1.2b3936p-44f, 0x1.9227acp-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.637c06p-97f, 0.0f,
     0.0f, 0x1.8e21bap-69f, 0x1.267312p-5f, 0x1.4b8a92p-35f, 0.0f, 0.0f, 0.0f,
     0x1.1e5216p-67f, 0.0f, 0.0f, 0.0f, 0x1.baacaep-13f, 0.0f, 0x1.aed47ap-94f,
     0x1.dc1488p-3f, 0x1.b0c1dcp-97f, 0.0f, 0x1.ff13c4p-59f, 0x1.3b616ap-24f,
     0x1.7f284cp-21f, 0.0f, 0.0f, 0x1.1f2acep-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b5f9eap-66f, 0x1.bf231cp-97f, 0.0f, 0x1.3cb3dcp-70f, 0x1.979216p-104f,
     0x1.51dfb8p-26f, 0.0f, 0x1.ff7498p-47f, 0x1.b363cp-6f, 0x1.a7f95p-37f, 0.0f,
     0.0f, 0x1.537a66p-31f, 0.0f, 0x1.f00d96p-68f, 0.0f, 0x1.5b8c6p-2f, 0.0f,
     0x1.9cc064p-18f, 0x1.8efbf4p-107f, 0x1.ccc766p-55f, 0.0f, 0.0f, 0x1.4b77c6p-26f,
     0.0f, 0.0f, 0.0f, 0x1.3669dcp-21f, 0x1.090076p-53f, 0.0f, 0x1.10014p-52f, 0.0f,
     0x1.f860eep-45f, 0.0f, 0x1.9e324ap-62f, 0x1.34a2f4p-76f, 0.0f, 0x1.605b7ep-94f,
     0x1.b8e676p-106f, 0x1.0cb946p-9f, 0x1.b2ab4cp-21f, 0x1.8095bcp-115f,
     0x1.c06c92p-5f, 0.0f, 0x1.6fec2p-94f, 0x1.bd415ap-115f, 0x1.5f64ecp-94f, 0.0f,
     0.0f, 0x1.26c79p-49f, 0x1.cd360cp-42f, 0x1.1a82d8p-125f, 0x1.873e24p-9f, 0.0f,
     0.0f, 0x1.01073ep-98f, 0.0f, 0.0f, 0x1.7d8922p-21f, 0.0f, 0.0f, 0x1.8c9fd2p-12f,
     0x1.ab921p-116f, 0x1.0b7ac6p-66f, 0.0f, 0x1.c29d46p-5f, 0x1.377bfap-86f,
     0x1.ffbf1cp-19f, 0.0f, 0.0f, 0x1.af26c6p-19f, 0.0f, 0.0f, 0x1.1a4ad4p-21f, 0.0f,
     0.0f, 0x1.36deaap-65f, 0.0f, 0x1.3ee5e6p-107f, 0x1.e62c5ep-120f, 0x1.ffea72p-31f,
     0x1.5a09dep-120f, 0.0f, 0x1.b6c778p-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d6688ap-85f, 0x1.92cc34p-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ce2dc6p-122f,
     0x1.97695ap-91f, 0x1.2da77cp-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5dc56cp-104f,
     0x1.eb774p-71f, 0.0f, 0x1.2eece4p-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.01097ap-44f,
     0.0f, 0.0f, 0x1.ea0884p-64f, 0x1.a9d344p-46f, 0x1.c6fb8ap-91f, 0.0f,
     0x1.d1e5ccp-67f, 0x1.ecb446p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7668ap-72f,
     0x1.a58fb2p-126f, 0x1.0f9838p-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b532aep-126f,
     0.0f, 0.0f, 0.0f, 0x1.8230aap-6f, 0.0f, 0.0f, 0.0f, 0x1.87994ap-126f, 0.0f, 0.0f,
     0x1.588172p-64f, 0.0f, 0.0f, 0x1.e3d322p-70f, 0x1.6640d8p-113f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.23b46ap-87f, 0x1.31cbcep-67f, 0x1.d95df6p-67f, 0x1.050b38p-83f, 0.0f,
     0.0f, 0x1.76c0aap-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e715bap-61f, 0.0f,
     0x1.67feaep-62f, 0x1.9a2354p-33f, 0x1.7a0404p-42f
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
            tmp1 = Sleef_finz_asinf4_u10avx2128(tmp0);
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
    printf("Sleef_finz_asinf4_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_asinf4_u10avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
