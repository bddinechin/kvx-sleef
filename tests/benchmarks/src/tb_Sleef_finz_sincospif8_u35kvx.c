/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sincospif8_u35kvx.c --function \
 *     Sleef_finz_sincospif8_u35kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 4 --function-input-vector-size \
 *     4 --precision sleef_sf2 --bench --no-embedded-bin --target kv3
 *
 */
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <string.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef_float32x8_t_2 external_bench_wrapper_cst = {.x = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f},.y = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f}};
static const Sleef_float32x8_t_2 external_bench_wrapper_cst1 = {.x = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f},.y = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f}};
volatile Sleef_float32x8_t_2 external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0.0f, 0.0f, 0x1.bbba96p-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2d0f04p-115f,
     0x1.32930cp-94f, 0.0f, 0x1.7fb13ap-124f, 0x1.96f97p-38f, 0.0f, 0x1.2061fap-125f,
     0.0f, 0x1.0eea58p-53f, 0x1.99df6cp-56f, 0.0f, 0.0f, 0x1.162d4ap-83f, 0.0f, 0.0f,
     0.0f, 0x1.edc116p-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bcabd4p-20f,
     0x1.126404p-68f, 0x1.e8e7ep-77f, 0x1.034802p-80f, 0.0f, 0.0f, 0x1.828af8p-30f,
     0x1.9fc0bp-94f, 0.0f, 0.0f, 0x1.1bd63p-20f, 0.0f, 0.0f, 0x1.e79eeap-76f,
     0x1.b9d218p-39f, 0x1.a1ef32p-63f, 0x1.be8d5p-114f, 0x1.070e94p-29f,
     0x1.4d2a94p-102f, 0.0f, 0.0f, 0.0f, 0x1.eab642p-63f, 0.0f, 0x1.90594ep-104f,
     0.0f, 0x1.1bac4p-105f, 0.0f, 0.0f, 0x1.53e3dp-57f, 0.0f, 0x1.3868a2p-4f, 0.0f,
     0x1.3c4cp-102f, 0x1.2a4634p-118f, 0x1.bcb70ep-93f, 0.0f, 0.0f, 0.0f,
     0x1.b635bap-2f, 0.0f, 0.0f, 0x1.b110b8p-5f, 0x1.0c8c32p-93f, 0.0f,
     0x1.659034p-125f, 0x1.bfaf94p-112f, 0x1.af4bcep-76f, 0x1.432288p-58f,
     0x1.7d31bep-4f, 0.0f, 0.0f, 0.0f, 0x1.0bae24p-102f, 0x1.5d94ep-61f, 0.0f, 0.0f,
     0x1.ecd9c2p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a943f2p-97f, 0.0f, 0x1.6aade8p-70f,
     0x1.4a8272p-77f, 0x1.e97316p-39f, 0x1.c75956p-40f, 0x1.4adb8ap-109f, 0.0f, 0.0f,
     0x1.08b498p-54f, 0.0f, 0.0f, 0x1.717ae2p-8f, 0x1.064f52p-115f, 0x1.374eb8p-99f,
     0.0f, 0x1.4fa682p-70f, 0.0f, 0.0f, 0x1.627126p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8371dep-38f, 0.0f, 0.0f, 0.0f, 0x1.554b3cp-79f, 0x1.856fdcp-118f, 0.0f,
     0x1.1e38a2p-82f, 0x1.e5865p-57f, 0.0f, 0x1.f74e6cp-4f, 0x1.1b8d4cp-68f, 0.0f,
     0x1.c3661cp-88f, 0x1.f4cc42p-120f, 0x1.c3c9cp-104f, 0x1.fd100cp-110f,
     0x1.fcb81cp-87f, 0.0f, 0x1.2c72ep-16f, 0x1.55760ep-107f, 0x1.58ef46p-72f, 0.0f,
     0.0f, 0x1.2e2148p-90f, 0.0f, 0.0f, 0x1.d6f238p-38f, 0x1.ab69a2p-77f, 0.0f, 0.0f,
     0x1.169828p-12f, 0.0f, 0x1.05e65ep-113f, 0x1.500e58p-123f, 0x1.8114aap-118f,
     0.0f, 0.0f, 0x1.31dad6p-104f, 0.0f, 0.0f, 0.0f, 0x1.3a2cbep-21f, 0x1.3ea2cap-13f,
     0.0f, 0.0f, 0.0f, 0x1.a0a7aap-115f, 0.0f, 0.0f, 0x1.5767c4p-50f, 0.0f, 0.0f,
     0x1.4bb4e4p-16f, 0.0f, 0.0f, 0x1.9664dap-124f, 0x1.889b56p-79f, 0.0f,
     0x1.9be126p-102f, 0x1.1565f4p-111f, 0x1.a66384p-11f, 0x1.981516p-81f, 0.0f,
     0x1.7056f4p-22f, 0x1.eb3986p-47f, 0x1.f42a3ap-40f, 0x1.8b00d4p-124f,
     0x1.3e2a0ep-88f, 0.0f, 0.0f, 0.0f, 0x1.90b1cap-31f, 0.0f, 0.0f, 0x1.709c6ep-59f,
     0.0f, 0x1.6673cep-13f, 0.0f, 0.0f, 0x1.128704p-49f, 0.0f, 0x1.5ab59p-34f, 0.0f,
     0.0f, 0x1.7e21a8p-27f, 0.0f, 0.0f, 0x1.aebcap-13f, 0.0f, 0x1.0c8f84p-62f,
     0x1.a43468p-43f, 0x1.f9699ep-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.71389ap-56f,
     0.0f, 0x1.646984p-82f, 0.0f, 0x1.359ff6p-111f, 0.0f, 0x1p0f, 0.0f,
     0x1.95b786p-29f, 0.0f, 0.0f, 0.0f, 0x1.23c3e2p-30f, 0.0f, 0x1.b7953ap-39f,
     0x1.7e2a42p-76f, 0.0f, 0x1.86056ap-73f, 0.0f, 0.0f, 0x1.fd1af6p-85f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.0df644p-90f, 0x1.cc659ap-106f, 0.0f, 0x1.268986p-99f,
     0x1.193e58p-116f, 0.0f, 0.0f, 0.0f, 0x1.e3618ep-92f, 0x1.ce0a7ep-81f, 0.0f, 0.0f,
     0.0f, 0x1.fb04a2p-34f, 0.0f, 0x1.6a6396p-57f, 0.0f, 0x1.9fd768p-27f,
     0x1.49d584p-99f, 0.0f, 0x1.a9287ap-14f, 0.0f, 0.0f, 0x1.e1b978p-44f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.007f82p-2f, 0.0f, 0x1.1ff87p-42f, 0.0f,
     0x1p0f, 0x1.f22f9p-75f, 0x1.3c93b8p-88f, 0.0f, 0x1.f5a5a2p-17f, 0.0f, 0.0f,
     0x1.b7b608p-68f, 0.0f, 0.0f, 0.0f, 0x1.3a862cp-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.0cd8b2p-2f, 0.0f, 0x1.41143p-90f, 0x1.bafbf4p-22f, 0x1.fb89a8p-113f,
     0x1.f76b48p-111f, 0x1.95a95ap-81f, 0.0f, 0.0f, 0x1.7f9b26p-29f, 0.0f, 0.0f,
     0x1.0ce1aep-43f, 0x1.ac2a56p-5f, 0.0f, 0x1.3fad4ap-104f, 0.0f, 0.0f, 0.0f,
     0x1.cea782p-68f, 0x1.8826b8p-63f, 0x1.da625ap-21f, 0.0f, 0.0f, 0.0f,
     0x1.f5f634p-48f, 0x1.fed998p-46f, 0x1.3b09a8p-78f, 0.0f, 0.0f, 0x1.615b0ep-77f,
     0x1.58a71p-120f, 0.0f, 0x1.b0149ap-37f, 0.0f, 0.0f, 0x1.f85b5ap-85f, 0.0f,
     0x1.104cdap-94f, 0.0f, 0.0f, 0.0f, 0x1.50f454p-78f, 0.0f, 0.0f, 0x1.e43dacp-79f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.5ee6ap-34f, 0.0f, 0x1.de77ccp-80f, 0x1.ba15eep-72f,
     0x1.58e302p-64f, 0.0f, 0.0f, 0x1.2569d6p-99f, 0x1.0197fap-109f, 0x1.2a829cp-108f,
     0x1.c088e6p-103f, 0x1.0ab512p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.767332p-97f, 0x1.6a597ap-123f, 0.0f, 0x1.196d08p-98f, 0.0f, 0.0f,
     0x1.899c28p-21f, 0x1.f5be3ep-14f, 0x1.589d88p-101f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c87aaap-5f, 0.0f, 0.0f, 0x1.19fa58p-2f, 0x1.4666b4p-19f, 0x1.12ada8p-70f,
     0.0f, 0x1.73cf14p-47f, 0x1.28f9acp-87f, 0.0f, 0x1.a82ecap-104f, 0.0f, 0.0f,
     0x1.685578p-94f, 0.0f, 0.0f, 0x1.6aba02p-116f, 0.0f, 0x1.480e8ap-93f, 0.0f, 0.0f,
     0.0f, 0x1.e67f42p-22f, 0.0f, 0.0f, 0x1.d0f8ccp-72f, 0.0f, 0.0f, 0x1.ba197ep-52f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f965fap-50f, 0x1.77a7a8p-108f, 0x1.102aaap-41f,
     0.0f, 0x1.d440e6p-110f, 0.0f, 0x1.d1700ep-101f, 0.0f, 0x1.61675ap-106f,
     0x1.8f90fep-46f, 0x1.183156p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bc49p-45f,
     0.0f, 0.0f, 0x1.ea8aaep-110f, 0x1.f589p-76f, 0.0f, 0x1.82dd6cp-55f,
     0x1.f93864p-72f, 0x1.978b72p-77f, 0x1.482d34p-82f, 0.0f, 0x1.5e4908p-96f,
     0x1.d30deep-114f, 0x1.9f7976p-123f, 0x1.724dc6p-54f, 0x1.0021dp-38f, 0.0f,
     0x1.6b5dacp-57f, 0.0f, 0x1.2e0008p-15f, 0x1.534fc4p-77f, 0.0f, 0x1.e2133cp-56f,
     0x1.4c19ap-45f, 0x1.61e97cp-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4ef9fep-115f, 0x1.87280ap-7f, 0.0f, 0x1.dd1c7ap-62f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.826bd6p-82f, 0.0f, 0x1.91bd5p-119f, 0x1.c899dcp-36f,
     0x1.c61924p-10f, 0x1.1a6b68p-126f, 0.0f, 0x1p0f, 0.0f, 0x1.dd1514p-84f, 0.0f,
     0.0f, 0x1.470e52p-63f, 0x1.8f1596p-30f, 0x1.f3bd7cp-122f, 0x1.b42b6cp-71f, 0.0f,
     0.0f, 0.0f, 0x1.75905cp-69f, 0x1.5f84e2p-62f, 0x1.ff394ep-49f, 0x1.dbe2fap-105f,
     0x1.c20312p-95f, 0x1.f31feep-80f, 0.0f, 0.0f, 0x1.266728p-81f, 0x1.21a3ecp-103f,
     0x1.fa6d0cp-113f, 0x1.e19602p-23f, 0.0f, 0.0f, 0x1.eb184ep-109f, 0x1.aaa572p-25f,
     0x1.7d1edap-61f, 0x1.984338p-77f, 0x1.72d6d2p-51f, 0x1.c4e5ecp-22f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f897bep-54f, 0.0f, 0x1.4b7b32p-72f, 0.0f, 0.0f,
     0x1.5a0b4ap-119f, 0x1.16763cp-83f, 0x1.eef08ep-79f, 0x1.47981p-125f,
     0x1.9765bep-4f, 0x1.7135dp-23f, 0.0f, 0.0f, 0.0f, 0x1.40a1dp-108f,
     0x1.1d4a2cp-100f, 0x1.620eb6p-94f, 0.0f, 0x1.aa8ee8p-10f, 0x1.571b86p-24f,
     0x1.757eap-54f, 0x1.0f5ed8p-111f, 0.0f, 0x1.a00012p-110f, 0x1.244bd2p-105f, 0.0f,
     0.0f, 0.0f, 0x1.aea8ccp-106f, 0.0f, 0.0f, 0x1.c4ea1ep-103f, 0.0f,
     0x1.9a0ebcp-88f, 0x1.da4c04p-26f, 0x1.43bcfcp-108f, 0x1.6d9726p-60f,
     0x1.5bae9ap-119f, 0.0f, 0x1.3ae3fp-71f, 0.0f, 0.0f, 0.0f, 0x1.3d7736p-101f,
     0x1.5844bap-70f, 0.0f, 0x1.bc7dfcp-92f, 0x1.b7fe54p-91f, 0.0f, 0.0f,
     0x1.3b1892p-4f, 0x1.ccc9b4p-27f, 0x1.50dc4p-53f, 0x1.2ab998p-121f,
     0x1.5aa7b2p-71f, 0x1.997156p-38f, 0x1.43180ap-94f, 0x1.0c5c5ep-82f,
     0x1.f1342ap-18f, 0.0f, 0x1.cb73d6p-60f, 0x1.cb0318p-2f, 0.0f, 0x1.0d87bcp-100f,
     0.0f, 0.0f, 0x1.8b4028p-80f, 0x1.dc05cep-114f, 0x1.c005d4p-117f, 0x1.a28d7ep-54f,
     0.0f, 0.0f, 0x1.af5a22p-114f, 0.0f, 0.0f, 0x1.bee59p-118f, 0x1.15851cp-112f,
     0x1.cd730ap-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bba01p-78f,
     0.0f, 0x1.39670cp-73f, 0x1.dda828p-74f, 0.0f, 0.0f, 0x1.70fefap-101f, 0.0f, 0.0f,
     0.0f, 0x1.108e84p-63f, 0x1.0b537cp-78f, 0x1.dca1bcp-114f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a3a49p-5f, 0.0f, 0.0f, 0x1.6867bp-51f, 0.0f, 0.0f, 0.0f,
     0x1.d962fap-90f, 0x1.349e9p-77f, 0x1.2f465ap-92f, 0x1.47ecbep-28f,
     0x1.5fecc8p-19f, 0x1.906e4p-49f, 0x1.b5e13p-27f, 0x1.d80ad6p-36f, 0.0f,
     0x1.c7d054p-61f, 0x1.cde0a2p-53f, 0.0f, 0x1.9f530ep-119f, 0.0f, 0.0f,
     0x1.e929cap-83f, 0.0f, 0x1.1843fap-111f, 0x1.6aaa7ep-91f, 0x1.f803ccp-76f, 0.0f,
     0.0f, 0x1.cf4a7ap-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9f41dcp-75f, 0x1.34fb5cp-21f,
     0x1.8e269ap-5f, 0x1.8a4f46p-49f, 0x1.3aa846p-78f, 0x1.0a9136p-25f, 0.0f,
     0x1.1fa2fcp-119f, 0.0f, 0x1.71fab2p-83f, 0x1.e62c0ep-40f, 0x1.9af0ap-98f, 0.0f,
     0x1.15568ap-114f, 0x1.2fce78p-26f, 0.0f, 0.0f, 0x1.8f32dcp-44f, 0x1.fd31a8p-68f,
     0x1.ef2e9ep-104f, 0.0f, 0x1.5f430ep-92f, 0x1.d7e50ap-24f, 0x1.5a41d8p-126f,
     0x1.4fe928p-39f, 0x1.2c360cp-1f, 0x1.afea42p-63f, 0x1.15120cp-90f,
     0x1.91a2d8p-102f, 0x1.eca118p-38f, 0x1.20644ep-75f, 0.0f, 0x1.6dbe4ap-32f, 0.0f,
     0x1.d773fep-20f, 0x1.d4fb74p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.605544p-52f, 0x1.4cbc04p-48f, 0.0f, 0x1.06eeeep-13f, 0x1.484334p-2f, 0.0f,
     0x1.40ac9p-43f, 0.0f, 0x1.697556p-113f, 0.0f, 0x1.117822p-5f, 0x1.ef990ep-13f,
     0x1.22f3c8p-4f, 0.0f, 0.0f, 0x1.b67562p-7f, 0x1.a0f312p-110f, 0.0f,
     0x1.fc76e8p-27f, 0x1.c3176ep-4f, 0x1.96693ep-77f, 0x1.db9f46p-83f, 0.0f, 0.0f,
     0x1.9a64aap-26f, 0.0f, 0x1.2c7aeap-16f, 0.0f, 0x1.b9f602p-30f, 0x1.a32902p-15f,
     0x1.27275ep-48f, 0.0f, 0x1.8cfb94p-6f, 0.0f, 0x1.34dfaap-99f, 0.0f,
     0x1.420404p-123f, 0x1.4e7948p-88f, 0x1.329d0ep-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e289dp-11f, 0x1.430c1p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.86732ep-109f, 0.0f, 0.0f, 0.0f, 0x1.93f1eep-81f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.00c9f2p-112f, 0x1.a93596p-29f, 0x1.a439dap-29f, 0x1.fa686ap-111f,
     0x1.6dcdc4p-90f, 0x1.d98446p-71f, 0x1.4c4678p-84f, 0.0f, 0.0f, 0.0f,
     0x1.93b888p-106f, 0.0f, 0x1.408cb4p-74f, 0.0f, 0.0f, 0x1.365a8cp-98f,
     0x1.fa171ap-96f, 0.0f, 0.0f, 0x1.42effep-81f, 0x1.496662p-49f, 0.0f,
     0x1.ce684ep-55f, 0x1.758a4ep-25f, 0x1.977d22p-103f, 0x1.0cda5ap-19f, 0.0f,
     0x1.412d9p-98f, 0.0f, 0x1.919e84p-118f, 0x1.b56256p-112f, 0x1.0a7e28p-56f, 0.0f,
     0.0f, 0x1.d49b1ap-92f, 0x1.0397f2p-110f, 0.0f, 0.0f, 0x1.7fb206p-35f,
     0x1.ac9dcap-124f, 0x1.a1c616p-58f, 0.0f, 0.0f, 0.0f, 0x1.bd451ep-112f, 0.0f,
     0.0f, 0.0f, 0x1.45201cp-101f, 0.0f, 0x1.e05dc4p-119f, 0.0f, 0.0f,
     0x1.622874p-102f, 0x1.b932cp-28f, 0x1.285dp-99f, 0.0f, 0.0f, 0.0f,
     0x1.b98b22p-41f, 0x1.d9bd04p-28f, 0.0f, 0x1.273066p-99f, 0.0f, 0.0f, 0.0f,
     0x1.67fa3ap-6f, 0x1.ffecd6p-45f, 0.0f, 0x1.3936fp-82f, 0x1.ebd3ap-67f, 0.0f,
     0x1.4567eap-31f, 0x1.5ca0f2p-65f, 0x1.3e84acp-91f, 0.0f, 0x1.2e1c02p-16f, 0.0f,
     0x1.4c8f28p-68f, 0x1.da4712p-57f, 0.0f, 0.0f, 0x1.fe860ep-51f, 0.0f, 0.0f, 0.0f,
     0x1.b28d9p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2d7cd8p-67f, 0.0f,
     0.0f, 0x1.9a408ap-98f, 0.0f, 0.0f, 0x1.0e3f5ep-120f, 0x1.dcb708p-71f,
     0x1.bf8244p-29f, 0.0f, 0x1.4f81bep-108f, 0x1.2cb2p-110f, 0x1.63a262p-9f,
     0x1.e9366ep-73f, 0x1.2d7e84p-95f, 0.0f, 0.0f, 0x1.97e0aep-17f, 0.0f, 0.0f,
     0x1.556a1p-76f, 0.0f, 0x1.9f0bdp-60f, 0.0f, 0.0f, 0x1.2d55ccp-46f,
     0x1.e11558p-19f, 0.0f, 0.0f, 0.0f, 0x1.65ddp-107f, 0x1.28db24p-89f,
     0x1.9a1e0ap-40f, 0x1.e92d2ep-122f, 0x1.7225fp-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d779dap-119f, 0.0f, 0.0f, 0x1.d56dcp-109f, 0.0f, 0.0f, 0.0f, 0x1.c2de2cp-60f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a9981cp-25f, 0x1.90be42p-8f, 0x1.4a156ap-94f,
     0x1.aba608p-50f, 0.0f, 0.0f, 0.0f, 0x1.dcb0aap-99f, 0.0f, 0x1.7b882ep-54f,
     0x1.78587ep-99f, 0x1.c49f8cp-43f, 0x1.a7ceap-40f, 0.0f, 0x1.24e866p-35f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.3bcdp-64f, 0x1.d1ad4p-115f, 0x1.ef755p-62f, 0.0f,
     0x1.235c9p-126f, 0x1.8fe376p-28f, 0.0f, 0.0f, 0x1.61789p-1f, 0x1.252a32p-110f,
     0x1.cc68cp-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f76e04p-93f, 0.0f, 0.0f, 0.0f,
     0x1.76a958p-97f, 0x1.de31ap-20f, 0x1.051362p-99f, 0.0f, 0x1.25bfb8p-4f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.198a98p-23f, 0x1.b21e8ep-94f, 0x1.6cf262p-59f,
     0x1.d240eap-101f, 0.0f, 0.0f, 0.0f, 0x1.d1ec0ap-58f, 0x1.cc5bdp-4f,
     0x1.ff3d7ep-15f, 0x1.3433f8p-33f, 0.0f, 0x1.5c1d26p-41f, 0.0f, 0x1.0db2b2p-31f,
     0.0f, 0x1.037812p-75f, 0.0f, 0x1.086a3cp-90f, 0x1.060ecp-110f, 0.0f,
     0x1.4e9f8p-56f, 0x1.68aa04p-118f, 0.0f, 0x1.3a5838p-22f, 0.0f, 0.0f,
     0x1.f7f0cp-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.553fd2p-71f, 0.0f, 0.0f,
     0x1.8787bap-92f, 0x1.66276ap-49f, 0.0f, 0.0f, 0x1.907f0cp-96f, 0x1.67884ap-40f,
     0x1.71901ep-108f, 0x1.69e77ap-9f, 0.0f, 0.0f, 0x1.0ae88ep-15f, 0.0f, 0.0f,
     0x1.a3e812p-45f, 0.0f, 0.0f, 0.0f, 0x1.7d15bep-73f, 0x1.500ff6p-45f,
     0x1.48ee7ap-44f, 0.0f, 0.0f, 0.0f, 0x1.fea28p-88f, 0.0f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef_float32x8_t_2 global_bench_acc;
    int64_t timer;
    int64_t tmp;
    int32_t j;
    int64_t tmp1;
    int64_t tmp2;
    double id_tmp;
    double cpe_measure;
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = external_bench_wrapper_cst;
    tmp = __cos_counter_num(0);
    timer = tmp;
    j = INT32_C(0);

    for (;(j < INT32_C(10000));){
        Sleef_float32x8_t_2 local_acc;
        int32_t i;
        ml_float8_t tmp0;
        ml_float8_t tmp1;
        ml_float8_t tmp2;
        ml_float8_t tmp3;
        ml_float8_t tmp4;
        ml_float8_t tmp5;
        Sleef_float32x8_t_2 tmp6;
        int32_t tmp7;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1004));){
            ml_float8_t tmp0;
            Sleef_float32x8_t_2 tmp1;
            ml_float8_t tmp2;
            ml_float8_t tmp3;
            ml_float8_t tmp4;
            ml_float8_t tmp5;
            ml_float8_t tmp6;
            ml_float8_t tmp7;
            Sleef_float32x8_t_2 tmp8;
            int32_t tmp9;

            memcpy(&tmp0, ((ml_float8_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            tmp1 = Sleef_finz_sincospif8_u35kvx(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = local_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = local_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef_float32x8_t_2) {.x=tmp4, .y=tmp7});
            local_acc = tmp8;
            tmp9 = i + INT32_C(8);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = local_acc.x;
        tmp2 = tmp0 + tmp1;
        tmp3 = global_bench_acc.y;
        tmp4 = local_acc.y;
        tmp5 = tmp3 + tmp4;
        tmp6 = ((Sleef_float32x8_t_2) {.x=tmp2, .y=tmp5});
        global_bench_acc = tmp6;
        tmp7 = j + INT32_C(1);
        j = tmp7;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_finz_sincospif8_u35kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_sincospif8_u35kvx bench acc {.x=[%a, %a, %a, %a], .y=[%a, %a, %a, %a]}\n", global_bench_acc.x[0], global_bench_acc.x[1], global_bench_acc.x[2], global_bench_acc.x[3], global_bench_acc.y[0], global_bench_acc.y[1], global_bench_acc.y[2], global_bench_acc.y[3]);
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
