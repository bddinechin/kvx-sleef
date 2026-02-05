/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sincospif1_u35purecfma.c --function \
 *     Sleef_finz_sincospif1_u35purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --precision sleef_sf2 --bench \
 *     --no-embedded-bin --target x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <xmmintrin.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef_float_2 external_bench_wrapper_cst = {.x = 0.0f, .y = 0.0f};
static const Sleef_float_2 external_bench_wrapper_cst1 = {.x = 0.0f, .y = 0.0f};
volatile Sleef_float_2 external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.eed34cp-27f, 0x1.764136p-75f, 0.0f, 0x1.fdebc4p-31f, 0.0f, 0.0f,
     0x1.8e524ap-11f, 0.0f, 0x1.664a92p-115f, 0.0f, 0x1.57cae6p-69f, 0.0f, 0.0f,
     0x1.d283dp-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.079152p-20f,
     0x1.dc47dp-30f, 0.0f, 0x1.76d59p-100f, 0.0f, 0.0f, 0.0f, 0x1.35d744p-100f,
     0x1.70abd4p-36f, 0x1.cb49dp-49f, 0.0f, 0x1.acafbp-32f, 0.0f, 0.0f, 0.0f,
     0x1.083ebep-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.626282p-78f, 0.0f, 0x1.3e3e62p-72f,
     0.0f, 0x1.3a2ed6p-12f, 0.0f, 0x1.a79a4p-109f, 0.0f, 0.0f, 0x1.ccfa64p-114f, 0.0f,
     0.0f, 0x1.d24716p-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0441a4p-91f, 0.0f,
     0.0f, 0x1.7aa396p-120f, 0.0f, 0x1.2e9aa4p-37f, 0x1.04cb56p-5f, 0x1.c1f44ep-113f,
     0x1.03a49ap-82f, 0x1.7c177p-6f, 0x1.a5deeep-1f, 0x1.0b38a4p-22f, 0.0f,
     0x1.7922dp-19f, 0x1.34984cp-101f, 0.0f, 0.0f, 0.0f, 0x1.51fadcp-61f,
     0x1.5cadep-92f, 0x1.151746p-3f, 0.0f, 0.0f, 0x1.010e7cp-55f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a0893ap-25f, 0.0f, 0x1.3228cep-78f, 0.0f, 0x1.9852fap-81f,
     0x1.2ea14ep-5f, 0x1.35dabcp-17f, 0x1.c14646p-112f, 0x1.06b51cp-8f,
     0x1.182616p-103f, 0x1.28b696p-77f, 0x1.2c1ed4p-98f, 0x1.012308p-34f, 0.0f,
     0x1.27f932p-66f, 0.0f, 0.0f, 0x1.b3d9b4p-36f, 0.0f, 0x1.8014f8p-3f, 0.0f, 0.0f,
     0.0f, 0x1.64f82cp-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dd11a2p-31f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ac32fep-123f, 0.0f, 0.0f, 0.0f, 0x1.94ea1p-79f, 0.0f, 0.0f,
     0x1.bf669cp-1f, 0.0f, 0x1.809956p-117f, 0x1.3d26acp-4f, 0.0f, 0x1.76a54ap-65f,
     0.0f, 0x1.4ce45ap-45f, 0x1.4b91b2p-48f, 0x1.42634ep-5f, 0.0f, 0.0f,
     0x1.bd0f02p-32f, 0x1.b0fd6ep-25f, 0x1.043bc8p-115f, 0.0f, 0.0f, 0x1.1935ep-107f,
     0.0f, 0.0f, 0x1.9e39f6p-117f, 0x1.017554p-124f, 0x1.cc7416p-59f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.9d7c4ap-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.61f622p-88f, 0.0f, 0.0f, 0.0f, 0x1.a28c98p-23f, 0x1.4c7d32p-75f,
     0x1.2f5e2ep-116f, 0.0f, 0.0f, 0x1.8f97d6p-68f, 0x1.9b28cap-87f, 0x1.17756cp-13f,
     0x1.d58b9ap-72f, 0.0f, 0x1.9bb8ep-39f, 0.0f, 0x1.a131eap-10f, 0.0f, 0.0f, 0.0f,
     0x1.967b2p-62f, 0x1.559612p-65f, 0.0f, 0.0f, 0x1.9af11ep-114f, 0.0f,
     0x1.ab1b9p-51f, 0.0f, 0.0f, 0.0f, 0x1.d6f49ep-91f, 0.0f, 0.0f, 0.0f,
     0x1.5263a6p-22f, 0.0f, 0.0f, 0x1.b62cc8p-32f, 0.0f, 0.0f, 0x1.6e6986p-102f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.edaba4p-92f, 0x1.7d8a2ap-77f, 0x1.14a616p-79f,
     0x1.a6eb8ap-119f, 0x1.64855ap-74f, 0.0f, 0x1.1f759ap-83f, 0x1.51c4c2p-51f, 0.0f,
     0x1.7da338p-20f, 0x1.f8a208p-4f, 0.0f, 0x1.e4a9d2p-70f, 0.0f, 0x1.bf0f4p-14f,
     0.0f, 0.0f, 0.0f, 0x1.af2d48p-33f, 0x1.b9ca22p-106f, 0x1.6e564cp-28f,
     0x1.54f4a6p-105f, 0x1.ad8674p-19f, 0.0f, 0x1.a3dd1ap-62f, 0x1.a5f1p-4f,
     0x1.0673p-65f, 0.0f, 0.0f, 0x1.50e88ap-81f, 0.0f, 0x1.e1dbf6p-31f, 0.0f,
     0x1.2bbc3ap-36f, 0.0f, 0x1.84fb6p-108f, 0.0f, 0x1.fde0e8p-123f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.6ca97ep-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c99068p-47f, 0.0f,
     0x1.85d9e4p-99f, 0.0f, 0x1.e135eep-92f, 0.0f, 0x1.b1bb12p-106f, 0x1.a5b032p-87f,
     0.0f, 0x1.7dea2ep-113f, 0.0f, 0x1.8c10bcp-43f, 0x1.e17edp-105f, 0.0f,
     0x1.af78b6p-27f, 0x1.34d39p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.99d05ep-51f,
     0x1.a9b8d2p-53f, 0x1.8a125ap-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b2714p-80f,
     0x1.b94e52p-81f, 0x1.c71dd8p-83f, 0x1.2caed6p-52f, 0x1.b11e7p-120f, 0.0f, 0.0f,
     0.0f, 0x1.f6942cp-14f, 0.0f, 0x1.930774p-54f, 0.0f, 0x1.39e09p-19f, 0.0f,
     0x1.a4e8e6p-5f, 0.0f, 0.0f, 0.0f, 0x1.aa949p-48f, 0x1.0e0fe2p-119f,
     0x1.491e1cp-82f, 0x1.b49a14p-121f, 0x1.38d81ap-60f, 0x1.870d0cp-19f,
     0x1.9cab66p-35f, 0x1.dcaeap-28f, 0x1.eed13p-69f, 0.0f, 0.0f, 0x1.2c79ep-106f,
     0x1.11db2ap-108f, 0.0f, 0x1.f4b5ap-106f, 0.0f, 0.0f, 0x1.7c993ap-21f,
     0x1.324be4p-125f, 0x1.31c61cp-94f, 0.0f, 0.0f, 0x1.3de874p-14f, 0.0f,
     0x1.988822p-21f, 0x1.ca90d8p-34f, 0.0f, 0.0f, 0x1.9181ccp-28f, 0.0f, 0.0f,
     0x1.d5767p-87f, 0.0f, 0x1.25a146p-74f, 0x1.e0871p-31f, 0.0f, 0x1.6cd86cp-73f,
     0x1.79c09ep-22f, 0x1.3422fp-115f, 0.0f, 0x1.d6fdb2p-123f, 0x1.5d04e4p-37f, 0.0f,
     0x1.92661cp-62f, 0x1.1bede2p-31f, 0.0f, 0.0f, 0.0f, 0x1.1e83c8p-59f, 0.0f,
     0x1.5da976p-47f, 0.0f, 0x1.b17c06p-83f, 0x1.7a7ffp-76f, 0.0f, 0.0f, 0.0f,
     0x1.fc4a9p-105f, 0x1.180eacp-14f, 0x1.88a0d2p-14f, 0x1.c33efcp-21f,
     0x1.ad617ap-57f, 0x1.00a6e2p-91f, 0x1.0d40ccp-34f, 0x1.3b075cp-93f,
     0x1.99a75ep-80f, 0.0f, 0x1.7f9bb4p-115f, 0x1.010bcep-56f, 0x1.cae2fep-124f,
     0x1.398608p-119f, 0.0f, 0.0f, 0x1.3a8adcp-118f, 0x1.a7b80ap-35f, 0x1.17cf4cp-71f,
     0.0f, 0.0f, 0x1.162bbp-120f, 0.0f, 0x1.7b4bb2p-69f, 0x1.2d94dap-31f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.4ff7b6p-69f, 0x1.9d5f1cp-100f, 0x1.38ab94p-94f, 0.0f,
     0x1.7b0e92p-52f, 0x1.aa2bb8p-49f, 0.0f, 0x1.decd7p-97f, 0.0f, 0x1.9104a8p-97f,
     0.0f, 0x1.d93b6ap-52f, 0.0f, 0.0f, 0x1.1b002ep-12f, 0x1.a80e5ap-3f,
     0x1.d1b42p-28f, 0x1.3865cep-110f, 0.0f, 0x1.21c876p-99f, 0.0f, 0x1.5033ecp-27f,
     0.0f, 0x1.258038p-33f, 0.0f, 0.0f, 0x1.620372p-75f, 0x1.340de8p-55f,
     0x1.27ff7cp-37f, 0.0f, 0.0f, 0.0f, 0x1.5bd0d2p-111f, 0.0f, 0x1.805312p-115f,
     0.0f, 0.0f, 0x1.1be55ep-47f, 0.0f, 0.0f, 0x1.4e3bf4p-3f, 0.0f, 0x1.e28048p-104f,
     0x1.c3bedcp-121f, 0.0f, 0.0f, 0.0f, 0x1.54a0b2p-46f, 0.0f, 0x1.a0909ap-30f,
     0x1.2bdfcep-47f, 0.0f, 0x1.79e65cp-46f, 0x1.2b5dd8p-5f, 0x1.ae648cp-1f, 0.0f,
     0x1.5dfbc6p-93f, 0x1.fd036p-37f, 0x1.5df1c8p-24f, 0x1.de8888p-67f, 0.0f,
     0x1.9a55bep-53f, 0.0f, 0x1.9ddb2p-116f, 0x1.01352p-29f, 0.0f, 0.0f, 0.0f,
     0x1.ca147p-110f, 0.0f, 0x1p0f, 0.0f, 0x1.795188p-109f, 0.0f, 0x1.46a092p-85f,
     0.0f, 0x1.df84ep-116f, 0x1.54027ep-91f, 0x1.4a215p-76f, 0x1.f6224ap-18f,
     0x1.c8cfcap-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.47cc38p-9f, 0.0f, 0.0f, 0.0f,
     0x1.362a4ap-66f, 0x1.ce1a18p-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.47ec52p-8f,
     0x1.05e0c2p-119f, 0.0f, 0x1.2d5ef4p-107f, 0x1.8ae0b2p-90f, 0.0f, 0x1.8bae46p-64f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7c1608p-87f, 0x1.d2d2b2p-35f, 0x1.8bb984p-26f,
     0x1.c0b41cp-123f, 0.0f, 0x1.e84094p-125f, 0.0f, 0x1.ff803ap-84f, 0.0f, 0.0f,
     0x1.db1d48p-2f, 0.0f, 0x1.369ecp-84f, 0x1.083a84p-8f, 0x1.6c1824p-113f,
     0x1.e9083p-67f, 0x1.5cf298p-11f, 0.0f, 0x1.334cfap-29f, 0x1.05454p-60f,
     0x1.ff508ep-76f, 0.0f, 0.0f, 0.0f, 0x1.42fb6p-61f, 0.0f, 0x1.3725a6p-95f, 0.0f,
     0x1.a72886p-34f, 0.0f, 0.0f, 0x1.bc054ap-62f, 0x1.fc804ep-60f, 0.0f, 0.0f,
     0x1.0cc1cap-12f, 0x1.af6e82p-1f, 0x1.e7d81p-53f, 0x1.94c4a4p-56f,
     0x1.f64d98p-60f, 0x1.d57f1ep-73f, 0x1.68a22p-19f, 0.0f, 0.0f, 0x1.d7edc2p-69f,
     0x1.fadd84p-13f, 0x1.259538p-120f, 0.0f, 0x1.1cf9c6p-77f, 0.0f, 0x1.e95b74p-8f,
     0x1.6e077p-107f, 0.0f, 0x1.798bdap-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1ed388p-4f, 0x1.b31afcp-47f, 0x1.5d4c22p-32f, 0.0f, 0.0f, 0.0f,
     0x1.0e77c2p-3f, 0.0f, 0.0f, 0x1.a7278ep-40f, 0x1.558ffep-89f, 0.0f, 0.0f,
     0x1.3ec64p-69f, 0.0f, 0x1.c9bbcap-63f, 0x1.ec68acp-65f, 0x1.d19f54p-20f,
     0x1.97d704p-41f, 0.0f, 0.0f, 0x1.beb8e2p-51f, 0x1.915c2ap-2f, 0.0f, 0.0f,
     0x1.7f3554p-3f, 0x1.c02d6ep-26f, 0x1.51593cp-28f, 0.0f, 0.0f, 0x1.0d6e26p-49f,
     0.0f, 0.0f, 0.0f, 0x1.1ae5cap-2f, 0x1.cbaadap-62f, 0.0f, 0x1.eaa234p-110f, 0.0f,
     0x1.008974p-23f, 0.0f, 0x1.25919ap-4f, 0.0f, 0x1p0f, 0.0f, 0x1.e58e34p-111f,
     0.0f, 0x1.6259fap-45f, 0.0f, 0x1.34baaep-34f, 0.0f, 0x1.9322eap-111f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c381f4p-69f, 0x1.d42f0cp-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ede7eap-115f, 0.0f, 0x1.2fce86p-115f, 0.0f, 0.0f,
     0x1.645856p-77f, 0x1.7e5b34p-3f, 0x1.fdf11p-113f, 0x1.49329cp-16f, 0.0f, 0.0f,
     0.0f, 0x1.8666d4p-25f, 0x1.f439b6p-13f, 0.0f, 0x1.33765p-50f, 0x1.cead88p-124f,
     0.0f, 0.0f, 0x1.4c8c9cp-124f, 0x1p0f, 0.0f, 0.0f, 0x1.5efa1ap-43f,
     0x1.aca174p-36f, 0.0f, 0x1.9cd67ap-12f, 0.0f, 0.0f, 0x1.f4e606p-50f, 0.0f,
     0x1.312704p-83f, 0.0f, 0x1.af2862p-89f, 0x1.970faap-30f, 0x1.135604p-21f, 0.0f,
     0.0f, 0x1.1d132cp-85f, 0.0f, 0x1.6dd4c8p-108f, 0x1.d4afe6p-22f, 0x1.6880c6p-78f,
     0.0f, 0x1.f44308p-110f, 0x1.81413p-2f, 0x1.2f3868p-66f, 0.0f, 0x1.3d36ep-8f,
     0x1.4cd00cp-39f, 0x1.4a0d2ep-87f, 0.0f, 0.0f, 0x1.942888p-43f, 0.0f, 0.0f, 0.0f,
     0x1.3240fap-52f, 0.0f, 0.0f, 0.0f, 0x1.5b7cbap-68f, 0.0f, 0.0f, 0x1.0d4628p-121f,
     0.0f, 0.0f, 0x1.af06d8p-112f, 0.0f, 0x1.cdcc2ep-100f, 0x1.81b1a6p-27f,
     0x1.e3c87ap-95f, 0.0f, 0x1.00c96ap-24f, 0x1.f646dp-81f, 0x1.b28df8p-52f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c6b696p-34f, 0.0f, 0x1.af5ddap-83f, 0.0f, 0x1.f31b64p-115f,
     0.0f, 0.0f, 0x1.fd221ap-67f, 0.0f, 0x1.bba1dap-28f, 0.0f, 0.0f, 0x1.4b6a32p-115f,
     0x1.6bb10ep-58f, 0.0f, 0.0f, 0x1.475abcp-88f, 0x1.9e0478p-8f, 0.0f,
     0x1.4d7464p-32f, 0x1.01c066p-120f, 0x1.0c0a92p-13f, 0.0f, 0.0f, 0x1.12ab6ap-94f,
     0x1.8ee228p-9f, 0x1.b4ef7ep-96f, 0.0f, 0x1.ecc1dap-68f, 0.0f, 0x1.b92b3ap-85f,
     0.0f, 0x1p0f, 0x1.7bbe1ap-61f, 0.0f, 0x1.dc104p-21f, 0.0f, 0x1.cfa29p-102f, 0.0f,
     0x1.7e184p-25f, 0x1.20e36p-24f, 0.0f, 0x1.723cf8p-33f, 0.0f, 0.0f,
     0x1.f3efdap-60f, 0.0f, 0.0f, 0x1.7df9dep-119f, 0x1.7c5b5ep-110f, 0x1.0fb84cp-5f,
     0.0f, 0x1.32776ap-99f, 0x1.08726p-101f, 0.0f, 0.0f, 0x1.b491f4p-2f, 0.0f,
     0x1.b44932p-67f, 0x1.f06006p-108f, 0.0f, 0x1.b4f3f6p-98f, 0.0f, 0.0f,
     0x1.f6d408p-115f, 0x1.cf8ae2p-44f, 0.0f, 0.0f, 0.0f, 0x1.8bcdbcp-75f,
     0x1.3cd614p-109f, 0.0f, 0x1.6d6672p-70f, 0x1.ad4244p-61f, 0x1.821756p-59f, 0.0f,
     0.0f, 0x1.4b4a88p-90f, 0.0f, 0x1.ae981ap-58f, 0.0f, 0x1.288daep-5f, 0.0f, 0.0f,
     0.0f, 0x1.c3890cp-75f, 0.0f, 0.0f, 0x1.02aee8p-69f, 0x1.74a478p-25f, 0.0f,
     0x1.011aa4p-49f, 0x1.0b8022p-4f, 0x1.bf068cp-36f, 0.0f, 0x1.3ae278p-82f,
     0x1.e34d4ap-37f, 0x1.a42864p-62f, 0x1.de2cdp-84f, 0.0f, 0x1.6863bp-88f, 0.0f,
     0.0f, 0x1.db1e02p-71f, 0x1.07ac82p-95f, 0x1.d61e72p-16f, 0.0f, 0x1.84734ap-23f,
     0x1.5b2632p-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bb6ed4p-74f,
     0x1.e04332p-29f, 0x1.f34c66p-51f, 0x1.8f26ep-9f, 0x1.8a51a8p-50f, 0.0f, 0.0f,
     0x1.33eb38p-124f, 0x1.db6634p-21f, 0x1.5b9c6cp-83f, 0.0f, 0.0f, 0.0f,
     0x1.37106ap-72f, 0x1.558a0cp-112f, 0.0f, 0.0f, 0.0f, 0x1.584bfp-51f, 0.0f,
     0x1.bd3a84p-108f, 0.0f, 0.0f, 0x1.0469a8p-6f, 0.0f, 0.0f, 0x1.aa134ep-18f,
     0x1.498492p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d5ef24p-38f, 0.0f, 0.0f,
     0x1.44b72cp-20f, 0.0f, 0x1.feb292p-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2ca352p-108f,
     0x1.0f3f94p-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3105d6p-108f, 0.0f, 0x1.cd9d1p-11f,
     0x1.821e86p-34f, 0x1.b4a628p-96f, 0x1.44f86ap-25f, 0.0f, 0x1.979b14p-15f,
     0x1.f9f1d4p-68f, 0x1.3a2ff2p-26f, 0x1.27afc8p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c526d2p-37f, 0.0f, 0x1.02c752p-120f, 0x1.fc6c54p-39f, 0x1.e6a7ecp-1f, 0.0f,
     0x1.42df12p-92f, 0x1.916deap-58f, 0.0f, 0.0f, 0x1.d10316p-89f, 0.0f, 0.0f,
     0x1.dd0a18p-98f, 0.0f, 0x1.5a287ap-16f, 0.0f, 0.0f, 0x1.14ab6ep-113f, 0.0f, 0.0f,
     0.0f, 0x1.2ce6dep-104f, 0.0f, 0x1.e816a6p-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a53264p-99f, 0.0f, 0.0f, 0x1.1cc3bcp-67f, 0x1.01637cp-61f,
     0.0f, 0x1.1415c8p-94f, 0x1.009cp-31f, 0x1.a9778ap-43f, 0.0f, 0x1.4a2776p-78f,
     0x1.ef2906p-78f, 0x1.e71b96p-108f, 0x1.4463bep-15f, 0.0f, 0.0f, 0x1.adff5ap-85f,
     0x1.35c992p-56f, 0.0f, 0x1.0beb74p-55f, 0x1.d57f8ep-75f, 0.0f, 0x1.6dfd48p-41f,
     0x1.5f3772p-92f, 0.0f, 0x1.a50ec6p-54f, 0x1.c65508p-17f, 0.0f, 0x1.56845cp-113f,
     0x1.ba1fa2p-34f, 0x1.597664p-43f, 0.0f, 0x1.7a0d96p-98f, 0x1.ec8974p-89f, 0.0f,
     0.0f, 0.0f, 0x1.ae4f0ap-93f, 0x1.dbf262p-123f, 0.0f, 0.0f, 0x1.8b603p-23f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.2bcfdep-60f, 0x1.81c26ep-43f, 0.0f, 0.0f, 0.0f,
     0x1.16d4acp-104f, 0x1.59a2fap-67f, 0.0f, 0x1.a3d49p-33f, 0.0f, 0.0f,
     0x1.367dap-39f, 0.0f, 0x1.050f34p-60f, 0x1.c4cefap-61f, 0.0f, 0x1.4a3fc2p-62f,
     0.0f, 0.0f, 0.0f, 0x1.0cb59ep-31f, 0.0f, 0.0f, 0.0f, 0x1.9a5f7cp-124f, 0.0f,
     0x1.248b06p-76f, 0x1.4f90cap-46f, 0x1.d5f786p-9f, 0x1.ecc74cp-41f,
     0x1.344506p-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.43cc4ep-123f,
     0x1.a579a4p-102f, 0x1.fbdd9ap-79f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef_float_2 global_bench_acc;
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
        Sleef_float_2 bench_acc;
        int32_t i;
        float tmp0;
        float tmp1;
        __m128 carg;
        __m128 carg1;
        __m128 carg2;
        float tmp2;
        float tmp3;
        float tmp4;
        __m128 carg3;
        __m128 carg4;
        __m128 carg5;
        float tmp5;
        Sleef_float_2 tmp6;
        int32_t tmp7;

        i = INT32_C(0);
        bench_acc = external_bench_wrapper_cst1;

        for (;(i < INT32_C(1001));){
            float tmp0;
            Sleef_float_2 tmp1;
            float tmp2;
            float tmp3;
            __m128 carg;
            __m128 carg1;
            __m128 carg2;
            float tmp4;
            float tmp5;
            float tmp6;
            __m128 carg3;
            __m128 carg4;
            __m128 carg5;
            float tmp7;
            Sleef_float_2 tmp8;
            int32_t tmp9;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_finz_sincospif1_u35purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = bench_acc.x;
            tmp3 = tmp1.x;
            carg = _mm_set_ss(tmp2);
            carg1 = _mm_set_ss(tmp3);
            carg2 = _mm_add_ss(carg, carg1);
            tmp4 = _mm_cvtss_f32(carg2);
            tmp5 = bench_acc.y;
            tmp6 = tmp1.y;
            carg3 = _mm_set_ss(tmp5);
            carg4 = _mm_set_ss(tmp6);
            carg5 = _mm_add_ss(carg3, carg4);
            tmp7 = _mm_cvtss_f32(carg5);
            tmp8 = ((Sleef_float_2) {.x=tmp4, .y=tmp7});
            bench_acc = tmp8;
            tmp9 = i + INT32_C(1);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = bench_acc.x;
        carg = _mm_set_ss(tmp0);
        carg1 = _mm_set_ss(tmp1);
        carg2 = _mm_add_ss(carg, carg1);
        tmp2 = _mm_cvtss_f32(carg2);
        tmp3 = global_bench_acc.y;
        tmp4 = bench_acc.y;
        carg3 = _mm_set_ss(tmp3);
        carg4 = _mm_set_ss(tmp4);
        carg5 = _mm_add_ss(carg3, carg4);
        tmp5 = _mm_cvtss_f32(carg5);
        tmp6 = ((Sleef_float_2) {.x=tmp2, .y=tmp5});
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
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_finz_sincospif1_u35purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_sincospif1_u35purecfma bench acc {.x=%a, .y=%a}\n", global_bench_acc.x, global_bench_acc.y );
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
