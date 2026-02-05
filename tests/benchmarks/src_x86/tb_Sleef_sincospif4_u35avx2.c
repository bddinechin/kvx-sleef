/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_sincospif4_u35avx2128.c --function Sleef_sincospif4_u35avx2128 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 4 --function-input-vector-size 4 --precision sleef_sf2 \
 *     --bench --no-embedded-bin --target x86_avx2128
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <string.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef___m128_2 external_bench_wrapper_cst = {.x = {0.0f, 0.0f, 0.0f, 0.0f},.y = {0.0f, 0.0f, 0.0f, 0.0f}};
static const Sleef___m128_2 external_bench_wrapper_cst1 = {.x = {0.0f, 0.0f, 0.0f, 0.0f},.y = {0.0f, 0.0f, 0.0f, 0.0f}};
volatile Sleef___m128_2 external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0x1.cbbfbcp-64f, 0.0f, 0x1.5d908ep-44f, 0.0f, 0.0f, 0.0f, 0x1.4b75ccp-67f, 0.0f,
     0.0f, 0x1.a95e82p-85f, 0.0f, 0.0f, 0.0f, 0x1.f3d9ap-52f, 0.0f, 0.0f,
     0x1.36a9eep-55f, 0x1.b1accap-40f, 0x1.2cb174p-8f, 0.0f, 0x1.5a1p-34f,
     0x1.25d98cp-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f7c5bep-28f, 0x1.092406p-107f,
     0x1.8739b4p-14f, 0.0f, 0.0f, 0x1.b588fap-105f, 0.0f, 0.0f, 0x1.aaf132p-73f,
     0x1.254992p-7f, 0x1.02a27p-76f, 0.0f, 0.0f, 0x1.057f22p-104f, 0.0f, 0.0f,
     0x1.25fddp-119f, 0x1.b9956cp-90f, 0x1.b9ecc8p-68f, 0.0f, 0x1.08e9bp-43f,
     0x1.aaa93ap-14f, 0x1.efbd58p-108f, 0x1.93281cp-103f, 0.0f, 0x1.d03b68p-27f, 0.0f,
     0.0f, 0x1.7cd4eap-116f, 0x1.b84072p-124f, 0x1.90421ap-26f, 0x1.39b2d2p-50f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c033a6p-82f, 0.0f, 0.0f, 0x1.62848ap-100f,
     0.0f, 0x1.3819eep-60f, 0x1.e6408p-36f, 0x1.ca4a74p-52f, 0.0f, 0.0f,
     0x1.2238d2p-64f, 0.0f, 0x1.a294fep-31f, 0.0f, 0x1.845b4cp-124f, 0x1.ef36dap-49f,
     0.0f, 0.0f, 0.0f, 0x1.b6573ap-69f, 0x1.dd999p-30f, 0x1.b35db8p-30f, 0.0f,
     0x1.ddcd22p-21f, 0.0f, 0.0f, 0x1.de3dd4p-16f, 0.0f, 0x1.c711a8p-1f,
     0x1.dfd778p-36f, 0x1.bb0bb8p-21f, 0.0f, 0.0f, 0x1.53ff9ep-59f, 0x1.2a3192p-69f,
     0.0f, 0x1.60eaa8p-2f, 0x1.b6364p-124f, 0x1.03f62ep-17f, 0.0f, 0x1.fa9b2ap-52f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.da22cap-66f, 0.0f, 0x1.1d4afap-119f,
     0x1.77543ap-66f, 0.0f, 0x1.747606p-28f, 0.0f, 0.0f, 0x1.1bd572p-55f, 0.0f, 0.0f,
     0x1.9c5116p-103f, 0x1.bfd896p-1f, 0x1.51917ep-24f, 0x1.8085a6p-14f, 0.0f,
     0x1.77baf8p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b17ebcp-50f, 0.0f, 0.0f,
     0.0f, 0x1.fd58fep-18f, 0x1.e4538ep-100f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7a6084p-123f, 0.0f, 0.0f, 0x1.b9901ap-11f, 0.0f, 0x1.ba166p-87f,
     0x1.90a564p-10f, 0x1.4d5b3p-73f, 0.0f, 0.0f, 0x1.1544e6p-95f, 0.0f,
     0x1.6ed8fcp-59f, 0x1.f9977ep-2f, 0.0f, 0.0f, 0x1.98e11cp-59f, 0x1.177de8p-76f,
     0x1.2e0336p-36f, 0x1.0f1d8ep-4f, 0.0f, 0x1.be4bb4p-79f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0a11f4p-7f, 0.0f, 0x1.7fcdf8p-70f, 0.0f, 0x1.04bb32p-95f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.56be6ap-76f, 0x1.f61b5cp-13f, 0x1.f093f4p-94f, 0.0f,
     0x1.05d884p-98f, 0x1.5c1054p-67f, 0.0f, 0.0f, 0.0f, 0x1.35e42ep-102f,
     0x1.9c7adp-23f, 0x1.23c708p-65f, 0x1.a5dc1ap-111f, 0.0f, 0x1.ea744p-70f,
     0x1.3965dp-96f, 0.0f, 0x1.945c18p-46f, 0x1.a7b18cp-94f, 0.0f, 0x1.98fa9ep-63f,
     0x1.47e44p-89f, 0.0f, 0.0f, 0x1.703b72p-29f, 0.0f, 0x1.1368bcp-54f,
     0x1.ea07f8p-22f, 0.0f, 0x1.32d7d6p-15f, 0.0f, 0x1.ba542ap-85f, 0x1.bd7dbep-82f,
     0.0f, 0.0f, 0x1.766a08p-30f, 0.0f, 0x1.c9b3a4p-48f, 0x1.2ede3ep-83f,
     0x1.a08b96p-92f, 0x1.a2a7fap-32f, 0.0f, 0.0f, 0x1.c4018cp-50f, 0x1.31db5ep-119f,
     0x1.549bcap-40f, 0x1.22c75cp-10f, 0x1.41365p-106f, 0.0f, 0.0f, 0x1.39446ep-5f,
     0x1.8f0dbap-105f, 0.0f, 0x1.75fe46p-111f, 0x1.584046p-33f, 0x1.16b772p-55f, 0.0f,
     0.0f, 0.0f, 0x1.b36512p-86f, 0x1.07f8eap-84f, 0x1.87ebb4p-21f, 0.0f, 0.0f,
     0x1.f1e266p-91f, 0x1.b6e92ap-90f, 0x1.53e644p-54f, 0x1.82945p-96f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.11563ep-35f, 0.0f, 0.0f, 0.0f, 0x1.45c2b6p-47f, 0.0f, 0.0f, 0.0f,
     0x1.363dccp-59f, 0.0f, 0.0f, 0x1.4cadeep-75f, 0.0f, 0.0f, 0.0f, 0x1.59f08p-10f,
     0x1.40a088p-85f, 0x1.55c832p-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.09c3b8p-91f, 0.0f,
     0.0f, 0x1.7c1b0cp-57f, 0x1.473412p-99f, 0.0f, 0x1.590816p-65f, 0.0f,
     0x1.7ddb1ep-63f, 0x1.b1bd48p-120f, 0.0f, 0.0f, 0x1.cb602ep-102f, 0.0f,
     0x1.bb8df4p-38f, 0x1.21dd9p-51f, 0x1.b8f33cp-5f, 0.0f, 0x1.c5d296p-121f, 0.0f,
     0x1.4f75a6p-57f, 0x1.d62422p-83f, 0x1.b84f48p-2f, 0x1.5e3e02p-65f,
     0x1.1dbf26p-7f, 0x1.d095acp-9f, 0.0f, 0.0f, 0.0f, 0x1.aa1a6cp-116f,
     0x1.c86862p-8f, 0.0f, 0x1.e8298ep-119f, 0.0f, 0x1.fcd2a2p-110f, 0x1.0507aap-38f,
     0x1.6163a2p-5f, 0.0f, 0.0f, 0.0f, 0x1.299714p-71f, 0x1.873226p-113f,
     0x1.137edep-114f, 0.0f, 0x1.94447ap-106f, 0.0f, 0.0f, 0x1.e44572p-18f, 0.0f,
     0.0f, 0x1.f57484p-80f, 0.0f, 0x1.60b67p-20f, 0x1.2891aap-4f, 0x1.4f566ap-80f,
     0.0f, 0x1.89576ep-2f, 0x1.a2ea8p-94f, 0.0f, 0.0f, 0x1.4ba49cp-123f,
     0x1.29cd36p-78f, 0.0f, 0x1.32436ep-115f, 0.0f, 0x1.30565ep-7f, 0x1.adec42p-87f,
     0x1.53adap-25f, 0x1.dbe8f8p-18f, 0x1.46773ep-39f, 0.0f, 0x1.91af52p-91f,
     0x1.b3bb2cp-78f, 0.0f, 0x1.c1bc96p-121f, 0x1.7e3fcp-14f, 0.0f, 0.0f,
     0x1.3ffd6cp-68f, 0x1.c8dd26p-34f, 0.0f, 0x1.fb1b7ap-97f, 0.0f, 0x1.2c425cp-87f,
     0x1.def7f8p-41f, 0.0f, 0x1.aacad8p-113f, 0.0f, 0.0f, 0x1.26a19cp-79f, 0.0f, 0.0f,
     0.0f, 0x1.5784cp-88f, 0.0f, 0x1.1608e8p-54f, 0.0f, 0.0f, 0x1.f1bdcep-21f, 0.0f,
     0.0f, 0x1.ab017ep-89f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.24c8dap-6f, 0.0f, 0.0f, 0.0f, 0x1.94c1c4p-10f, 0.0f, 0x1.3e90fep-50f,
     0x1.1df8eep-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dfce46p-102f, 0x1.126fcp-31f,
     0x1.79fe1cp-84f, 0x1.504af2p-78f, 0x1.0797ccp-85f, 0x1.a92434p-111f, 0.0f,
     0x1.a5219ap-55f, 0.0f, 0x1.c6dd0ap-2f, 0x1.27589p-86f, 0.0f, 0x1.9bb792p-121f,
     0.0f, 0x1.99ca12p-9f, 0x1.6ed696p-49f, 0x1.eaca66p-72f, 0.0f, 0x1.105674p-52f,
     0x1.a4eb38p-70f, 0.0f, 0x1.cae252p-47f, 0x1.4909ep-1f, 0x1.bc222ep-27f,
     0x1.a543d4p-120f, 0.0f, 0x1.156da8p-87f, 0.0f, 0.0f, 0x1.026d14p-72f,
     0x1.11ad8cp-51f, 0x1.9fa7p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4d9302p-37f,
     0x1.b4ed12p-107f, 0x1.3ce61p-76f, 0.0f, 0x1.fb82f8p-56f, 0.0f, 0.0f, 0.0f,
     0x1.1c167ep-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.63e6eap-69f, 0.0f, 0x1.4174eep-48f,
     0x1.3d9ec6p-56f, 0.0f, 0.0f, 0x1.c9b39ap-9f, 0.0f, 0.0f, 0.0f, 0x1.84abe6p-95f,
     0x1.c5897cp-79f, 0x1.c34b88p-4f, 0.0f, 0.0f, 0x1.b7de06p-47f, 0.0f,
     0x1.c0aa7cp-2f, 0.0f, 0x1.5f5dd4p-112f, 0x1.fcf5eap-77f, 0.0f, 0.0f,
     0x1.2e999cp-34f, 0x1.9b0f9cp-66f, 0.0f, 0x1.ea1d0cp-91f, 0x1.8c0112p-56f, 0.0f,
     0x1.ad575cp-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.521d28p-112f, 0.0f,
     0x1.e63154p-105f, 0.0f, 0.0f, 0.0f, 0x1.88f7e8p-24f, 0x1.40fcc6p-114f,
     0x1.7c4e6cp-15f, 0.0f, 0x1.390204p-38f, 0.0f, 0.0f, 0.0f, 0x1.5350bp-100f,
     0x1.d5c13ap-124f, 0x1.966886p-74f, 0x1.501afcp-88f, 0.0f, 0.0f, 0.0f,
     0x1.b7fc22p-27f, 0x1.c71f3cp-26f, 0.0f, 0.0f, 0x1.6dcc1ap-126f, 0.0f, 0.0f, 0.0f,
     0x1.fc9536p-93f, 0x1.7d87d2p-30f, 0.0f, 0.0f, 0.0f, 0x1.7fa89ep-56f,
     0x1.a7acbap-88f, 0x1.bb3b62p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c4f818p-12f, 0.0f,
     0.0f, 0x1.a996bep-8f, 0x1.f40d7ap-56f, 0x1.d23ebcp-124f, 0.0f, 0x1.1f19a8p-22f,
     0.0f, 0x1.8f7a7ep-51f, 0.0f, 0x1.4a0208p-115f, 0.0f, 0x1.2cd732p-74f, 0.0f,
     0x1.8d9c1ep-118f, 0.0f, 0x1.2e16bep-40f, 0.0f, 0x1.b42bb2p-58f, 0x1.2fde92p-33f,
     0.0f, 0.0f, 0.0f, 0x1.27dac4p-45f, 0.0f, 0.0f, 0x1.576a02p-9f, 0x1.7180b4p-96f,
     0x1.4ca4dcp-92f, 0x1.ed7508p-9f, 0x1.f773d8p-19f, 0x1.92028ap-88f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.78d1b8p-1f, 0.0f, 0x1.dc45fp-20f, 0x1.d92778p-22f,
     0x1.c2602cp-80f, 0.0f, 0.0f, 0x1.13f476p-97f, 0.0f, 0.0f, 0x1.cecd48p-80f,
     0x1.4fb44cp-60f, 0.0f, 0x1.458afap-71f, 0x1.b9cf24p-51f, 0x1.dbb4acp-104f,
     0x1.411fe6p-116f, 0x1.49b4a4p-101f, 0x1.41d262p-87f, 0x1.a2c694p-35f, 0.0f,
     0x1.1bc21cp-122f, 0.0f, 0.0f, 0x1.e9d16ep-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5a868ep-124f, 0x1.f149aap-27f, 0.0f, 0.0f, 0x1.679686p-68f, 0x1.5f3206p-37f,
     0x1.5f1022p-60f, 0.0f, 0.0f, 0x1.6edfeap-112f, 0.0f, 0.0f, 0x1.0352p-71f, 0.0f,
     0.0f, 0.0f, 0x1.7113c4p-24f, 0.0f, 0x1.daf338p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.755ffcp-121f, 0x1.8c930cp-5f, 0x1.acc4c8p-61f, 0x1.71547ep-119f, 0.0f,
     0x1.df70fp-119f, 0x1.e4d08ep-106f, 0.0f, 0x1.9b80fcp-97f, 0.0f, 0.0f,
     0x1.b6d89cp-118f, 0.0f, 0.0f, 0x1.81dca6p-109f, 0x1.22a16ap-17f, 0.0f,
     0x1.b64288p-113f, 0x1.d0f92ap-123f, 0.0f, 0.0f, 0x1.008accp-82f, 0.0f,
     0x1.edb138p-126f, 0.0f, 0x1.ed97cep-125f, 0x1.b97334p-86f, 0x1.aac276p-16f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f61c04p-78f,
     0x1.95bf18p-113f, 0.0f, 0x1.2faefp-17f, 0x1.636152p-55f, 0.0f, 0.0f,
     0x1.b1806cp-11f, 0x1.d40a58p-13f, 0x1.376fp-100f, 0.0f, 0x1.65eb94p-110f,
     0x1.2f867p-124f, 0x1.1cff5cp-84f, 0x1.ed3d5ep-5f, 0x1.0eb272p-55f, 0.0f,
     0x1.da8f58p-126f, 0x1.206a78p-117f, 0.0f, 0x1.eac55ap-91f, 0x1.50d584p-53f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1d6888p-75f,
     0x1.4d70acp-53f, 0x1.09f3cap-85f, 0.0f, 0x1.3bfdcap-25f, 0x1.34538ap-82f,
     0x1.02bd68p-6f, 0x1.0efdc4p-29f, 0.0f, 0x1.1292d6p-11f, 0x1.7dfad4p-118f, 0.0f,
     0x1.18935ap-5f, 0.0f, 0.0f, 0x1.6911b8p-107f, 0x1.6c9b1ep-122f, 0.0f,
     0x1.a4fa66p-117f, 0.0f, 0x1.616e7cp-95f, 0x1.5e653p-10f, 0.0f, 0.0f,
     0x1.0a065ap-99f, 0.0f, 0x1.ee45fcp-107f, 0.0f, 0x1.c89dbcp-41f, 0x1.be98dep-104f,
     0.0f, 0x1.763358p-94f, 0x1.ed4022p-87f, 0x1.88e5e4p-47f, 0.0f, 0.0f,
     0x1.c474c8p-53f, 0x1.8c5b9p-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7bad08p-71f,
     0x1.cf1a3p-78f, 0x1.dea88cp-30f, 0x1.990ae6p-52f, 0x1.fdc4e8p-87f,
     0x1.9bc476p-42f, 0.0f, 0x1.84593cp-40f, 0x1.b59f84p-18f, 0x1.68a27p-81f,
     0x1.79297p-60f, 0x1.e0814cp-6f, 0.0f, 0.0f, 0.0f, 0x1.32e842p-106f,
     0x1.8d0c1ep-1f, 0.0f, 0.0f, 0x1.44df58p-45f, 0x1.374e44p-42f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.81472cp-55f, 0.0f, 0x1.c289b4p-27f, 0x1.dffb42p-5f,
     0x1.d7c90ap-32f, 0.0f, 0.0f, 0x1.53d29ap-120f, 0x1.9fe32cp-105f, 0x1.d7b45ep-39f,
     0.0f, 0x1.d760fap-123f, 0.0f, 0.0f, 0.0f, 0x1.0f279ap-34f, 0.0f, 0x1.cb3ceap-10f,
     0.0f, 0x1.c1a3b6p-3f, 0x1.4d3b32p-18f, 0x1.e62b76p-108f, 0.0f, 0x1.f380a6p-44f,
     0.0f, 0.0f, 0x1.bf2decp-51f, 0.0f, 0x1.d78dbp-58f, 0x1.58230ep-9f, 0.0f, 0.0f,
     0x1.07bdeap-93f, 0x1.886768p-84f, 0x1.81111ep-52f, 0x1.e1d5bap-61f,
     0x1.e5b936p-101f, 0.0f, 0x1.f8f868p-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f8262ep-45f,
     0x1.e81e2ep-123f, 0.0f, 0x1.daef6ep-101f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.011ce4p-107f, 0.0f, 0x1.cde3f8p-109f, 0.0f, 0.0f, 0.0f, 0x1.f773bep-35f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d38e36p-105f, 0x1.00a3f8p-118f, 0.0f,
     0x1.434b9cp-55f, 0.0f, 0.0f, 0x1.7a0f54p-106f, 0.0f, 0x1.dabaf2p-65f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.db77d8p-114f, 0x1.b6c85ep-38f, 0.0f, 0x1.c060dp-74f, 0.0f, 0.0f,
     0x1.ae3fc8p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.25dacp-77f, 0.0f,
     0x1.d8907ep-79f, 0x1.2d7356p-63f, 0x1.0c7cfcp-98f, 0.0f, 0.0f, 0x1.aff274p-64f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f063fp-31f, 0.0f, 0x1.3b62fcp-64f, 0x1.beb8dp-24f,
     0x1.ae7232p-18f, 0x1.88ce02p-68f, 0.0f, 0.0f, 0x1.26eee2p-19f, 0.0f,
     0x1.3829cep-112f, 0x1.0855dep-120f, 0.0f, 0.0f, 0x1.60ac5ap-59f,
     0x1.662564p-121f, 0x1.df2b0cp-47f, 0x1.50dfc2p-108f, 0x1.af32aap-72f,
     0x1.4d72fcp-32f, 0x1.06b94p-50f, 0x1.b4d9c6p-50f, 0x1.b4769p-19f, 0.0f, 0.0f,
     0x1.b11c5ep-55f, 0x1.e03266p-107f, 0x1.fbd064p-53f, 0.0f, 0.0f, 0x1.9b74b8p-57f,
     0x1.02f19cp-19f, 0.0f, 0x1.a0c7fap-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.de963cp-55f,
     0x1.d870cap-110f, 0.0f, 0x1.12747p-59f, 0x1.fbb538p-74f, 0x1.9264dap-101f,
     0x1.1a052ep-83f, 0x1.e47ed6p-85f, 0x1.68b216p-60f, 0.0f, 0x1.024c8ep-50f,
     0x1.2e441ep-99f, 0.0f, 0.0f, 0.0f, 0x1.9f673ep-5f, 0x1.65eec4p-4f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.11eae2p-88f, 0.0f, 0.0f, 0.0f, 0x1.151fd8p-5f, 0.0f,
     0.0f, 0x1.250cap-66f, 0x1.efbe02p-20f, 0.0f, 0.0f, 0x1.13b292p-92f, 0.0f,
     0x1.07a29ep-9f, 0x1.6135cap-15f, 0x1.ec4b9ap-36f, 0x1.fb545ap-94f,
     0x1.993ddcp-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1445b4p-25f, 0x1.a100ep-70f, 0.0f,
     0x1.91fdecp-78f, 0x1.7bb022p-16f, 0.0f, 0x1.3bf028p-36f, 0.0f, 0x1.c567a2p-78f,
     0x1.68a4a4p-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.67133p-88f, 0x1.82be08p-92f,
     0x1.911646p-73f, 0.0f, 0x1.52278cp-106f, 0x1.b9458ap-104f, 0.0f, 0x1.8ce4a6p-60f,
     0x1.91ad86p-57f, 0.0f, 0.0f, 0.0f, 0x1.8120a4p-96f, 0x1.11bb68p-60f,
     0x1.7bb03p-55f, 0.0f, 0x1.3fa7c8p-104f, 0.0f, 0x1.a9219ep-46f, 0x1.d1abp-2f,
     0.0f, 0x1.4a0cbap-4f, 0.0f, 0x1.cd877ap-66f, 0.0f, 0x1.98835cp-27f,
     0x1.cd9046p-96f, 0.0f, 0x1.d6cb8p-13f, 0.0f, 0x1.3b6d96p-36f, 0x1p0f,
     0x1.42a6d8p-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0e57b6p-53f, 0.0f, 0.0f,
     0x1.071f3cp-116f, 0.0f, 0x1.a1d9cp-38f, 0x1.42082p-95f, 0.0f, 0.0f,
     0x1.05b97ap-60f, 0.0f, 0x1.7b447cp-26f, 0.0f, 0.0f, 0x1.67bfa6p-92f,
     0x1.886b54p-103f, 0.0f, 0.0f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef___m128_2 global_bench_acc;
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
        Sleef___m128_2 local_acc;
        int32_t i;
        ml_float4_t tmp0;
        ml_float4_t tmp1;
        ml_float4_t tmp2;
        ml_float4_t tmp3;
        ml_float4_t tmp4;
        ml_float4_t tmp5;
        Sleef___m128_2 tmp6;
        int32_t tmp7;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1004));){
            ml_float4_t tmp0;
            Sleef___m128_2 tmp1;
            ml_float4_t tmp2;
            ml_float4_t tmp3;
            ml_float4_t tmp4;
            ml_float4_t tmp5;
            ml_float4_t tmp6;
            ml_float4_t tmp7;
            Sleef___m128_2 tmp8;
            int32_t tmp9;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_sincospif4_u35avx2128(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = local_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = local_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef___m128_2) {.x=tmp4, .y=tmp7});
            local_acc = tmp8;
            tmp9 = i + INT32_C(4);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = local_acc.x;
        tmp2 = tmp0 + tmp1;
        tmp3 = global_bench_acc.y;
        tmp4 = local_acc.y;
        tmp5 = tmp3 + tmp4;
        tmp6 = ((Sleef___m128_2) {.x=tmp2, .y=tmp5});
        global_bench_acc = tmp6;
        tmp7 = j + INT32_C(1);
        j = tmp7;
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
    printf("Sleef_sincospif4_u35avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_sincospif4_u35avx2128 bench acc {.x=[%a, %a, %a, %a], .y=[%a, %a, %a, %a]}\n", global_bench_acc.x[0], global_bench_acc.x[1], global_bench_acc.x[2], global_bench_acc.x[3], global_bench_acc.y[0], global_bench_acc.y[1], global_bench_acc.y[2], global_bench_acc.y[3]);
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
