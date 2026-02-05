/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_atanf8_u10kvx.c --function \
 *     Sleef_finz_atanf8_u10kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 8 --function-input-vector-size \
 *     8 --bench --no-embedded-bin --target kv3
 *
 */
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float8_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float8_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1008];
static const float external_bench_wrapper_input_table_arg0[1008]  = {
     0x1.da7c5cp-64f, 0x1.d634dep-44f, 0.0f, 0.0f, 0x1.45fc32p-45f, 0.0f, 0.0f,
     0x1.ee03aep-13f, 0x1.d16bbp-112f, 0x1.7b6d84p-1f, 0x1.220c52p-38f, 0.0f, 0.0f,
     0x1.de3fa4p-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9adb96p-101f,
     0.0f, 0.0f, 0x1.92255cp-53f, 0x1.d7cb94p-32f, 0x1.4cefccp-111f, 0x1.bc3abcp-114f,
     0x1.ae024p-65f, 0.0f, 0.0f, 0x1.eba57ap-8f, 0x1.f0f6f2p-72f, 0.0f, 0.0f, 0.0f,
     0x1.80171ap-13f, 0x1.84c8a6p-16f, 0x1.7a5356p-14f, 0x1.ef89f6p-86f, 0.0f,
     0x1.70f6a8p-69f, 0.0f, 0.0f, 0x1.863918p-31f, 0.0f, 0.0f, 0x1.5a253ep-100f, 0.0f,
     0.0f, 0x1.d965fap-44f, 0x1.427a74p-10f, 0.0f, 0x1.04e936p-90f, 0.0f, 0.0f,
     0x1.d88732p-16f, 0x1.0439bcp-49f, 0.0f, 0x1.018bdcp-25f, 0.0f, 0.0f, 0.0f,
     0x1.27b71ap-42f, 0.0f, 0x1.08bb3cp-87f, 0.0f, 0.0f, 0x1.1f2858p-104f,
     0x1.5d58ap-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b84bfep-126f, 0.0f, 0.0f, 0.0f,
     0x1.3ce59cp-126f, 0x1.c5bad4p-86f, 0.0f, 0.0f, 0x1.6378a2p-87f, 0.0f, 0.0f,
     0x1.c6dd8ap-73f, 0.0f, 0.0f, 0x1.29bdf2p-30f, 0.0f, 0.0f, 0x1.41630ep-80f,
     0x1.f7d13ap-99f, 0x1.9042fp-29f, 0x1.2aeeb2p-17f, 0.0f, 0x1.7c9106p-18f, 0.0f,
     0.0f, 0x1.e7ec06p-14f, 0x1.a30ce4p-34f, 0.0f, 0.0f, 0.0f, 0x1.3d84ap-93f, 0.0f,
     0x1.5a9f6ap-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f2273p-109f, 0.0f, 0.0f, 0.0f,
     0x1.3e4756p-37f, 0.0f, 0x1.771244p-15f, 0x1.1dd2c8p-15f, 0x1.85238cp-99f,
     0x1.a916aep-100f, 0.0f, 0.0f, 0.0f, 0x1.1118a4p-63f, 0x1.f7559cp-14f, 0.0f,
     0x1.1af058p-43f, 0x1.244f42p-91f, 0x1.8f1c26p-113f, 0x1.4ffe7cp-121f, 0.0f,
     0x1.627138p-93f, 0x1.c10c7ep-118f, 0x1.77586ep-29f, 0.0f, 0.0f, 0x1.2c1beep-84f,
     0x1.ae9884p-113f, 0x1.05782ep-69f, 0.0f, 0.0f, 0x1.b19944p-97f, 0.0f, 0.0f, 0.0f,
     0x1.e5dac4p-98f, 0x1.b46e52p-53f, 0.0f, 0.0f, 0x1.d9a374p-14f, 0.0f,
     0x1.bfc1b2p-57f, 0.0f, 0x1.af6f7ep-36f, 0.0f, 0x1.6abf38p-123f, 0x1.bf07cep-91f,
     0.0f, 0x1.de26c2p-95f, 0.0f, 0x1.ffa5b8p-80f, 0x1.dc127cp-111f, 0x1.e46106p-103f,
     0x1.381036p-90f, 0.0f, 0.0f, 0x1.ed78ecp-62f, 0.0f, 0.0f, 0x1.088dc2p-110f,
     0x1.6170b2p-51f, 0x1.436e2cp-60f, 0x1.17e32cp-29f, 0x1.c05f7cp-124f, 0.0f,
     0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.423b9p-91f, 0x1.3f7134p-54f, 0x1.33958p-65f,
     0x1.a56fbp-116f, 0.0f, 0.0f, 0.0f, 0x1.f6821ap-105f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4febd4p-59f, 0x1.d226aep-52f, 0x1.692534p-107f, 0x1.07e90ap-5f,
     0.0f, 0x1.9a2df8p-26f, 0x1.9e92b6p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a1e35ap-111f, 0.0f, 0.0f, 0x1.032b32p-65f, 0.0f, 0x1.4fb29ap-115f,
     0x1.45386cp-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.01d868p-49f,
     0x1.de368cp-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5c8794p-85f, 0.0f, 0x1.3f138p-57f,
     0.0f, 0x1.6ff6f6p-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.da407ep-12f, 0.0f,
     0x1.3bdf4ap-49f, 0.0f, 0x1.a59942p-32f, 0x1.c992fap-31f, 0x1.d5fd1ap-113f, 0.0f,
     0x1.4e1b94p-15f, 0x1.fe81e2p-117f, 0x1.de39cap-70f, 0.0f, 0.0f, 0.0f,
     0x1.4f6528p-56f, 0x1.79dd8p-11f, 0.0f, 0.0f, 0x1.882328p-45f, 0x1.a12bbep-120f,
     0x1.688c76p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.32f67ap-6f, 0x1.78ec78p-90f,
     0x1.ef83fp-7f, 0x1.b5095p-111f, 0.0f, 0x1.9e5816p-51f, 0.0f, 0x1.0343dcp-12f,
     0.0f, 0.0f, 0x1.f28fccp-92f, 0.0f, 0.0f, 0x1.e694dap-37f, 0x1.678a76p-78f, 0.0f,
     0x1.ce6fd2p-69f, 0x1.875bb2p-86f, 0.0f, 0x1.c50088p-6f, 0x1.50c944p-93f,
     0x1.94041p-92f, 0x1.81bc52p-3f, 0.0f, 0x1.bdc8ecp-16f, 0x1.1ee3eap-69f,
     0x1.1fc90ep-68f, 0.0f, 0x1.b0c8fcp-26f, 0x1.18fdaap-109f, 0.0f, 0.0f,
     0x1.d5941ep-118f, 0x1.92bddep-121f, 0.0f, 0.0f, 0x1.4fa2eep-10f, 0.0f, 0.0f,
     0.0f, 0x1.35f498p-118f, 0x1.906d2ep-105f, 0.0f, 0.0f, 0x1.488eecp-114f, 0.0f,
     0x1.b7e64cp-9f, 0x1.0fc374p-89f, 0x1.7ac5c2p-123f, 0.0f, 0.0f, 0.0f,
     0x1.a37a22p-125f, 0.0f, 0.0f, 0x1.a99772p-47f, 0.0f, 0x1.7f5106p-105f, 0.0f,
     0x1.8aac9ap-92f, 0.0f, 0.0f, 0x1.6afd5p-104f, 0x1.8553dap-21f, 0.0f, 0.0f,
     0x1.4abfc6p-1f, 0.0f, 0.0f, 0x1.25edbep-1f, 0x1.6160aep-7f, 0x1.8fa8e8p-93f,
     0x1.61f5a2p-112f, 0.0f, 0.0f, 0.0f, 0x1.7f9aecp-17f, 0x1.83e40cp-72f,
     0x1.842966p-47f, 0.0f, 0.0f, 0.0f, 0x1.f532bp-31f, 0.0f, 0.0f, 0.0f,
     0x1.c6097ap-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c568f4p-99f, 0x1.faaf12p-24f, 0x1.fe10dap-87f, 0x1.3abb2cp-9f,
     0x1.d6d7a2p-101f, 0.0f, 0x1.4f5c9cp-102f, 0x1.772bfcp-11f, 0x1.c40dfep-33f,
     0x1.6b375cp-62f, 0x1.7fcc8p-10f, 0x1.0a924ap-75f, 0x1.ccad1ap-110f, 0.0f,
     0x1.6aa9b8p-38f, 0x1.d56f8p-5f, 0.0f, 0.0f, 0.0f, 0x1.422b4cp-52f,
     0x1.eaef2ap-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.773b2p-83f, 0x1.48b2b8p-125f,
     0x1.62c7e6p-80f, 0.0f, 0x1.fc6ecep-35f, 0x1.868ab2p-4f, 0x1.975296p-115f, 0.0f,
     0x1.73aecep-106f, 0.0f, 0.0f, 0x1.0b0beep-16f, 0x1.c3babp-19f, 0x1.14bbb2p-40f,
     0x1.2b24f8p-91f, 0x1.2e2de8p-126f, 0x1.07bc9ap-19f, 0x1.2fe676p-71f, 0.0f, 0.0f,
     0.0f, 0x1.d3f236p-89f, 0.0f, 0x1.166ac4p-22f, 0.0f, 0x1.54af1p-23f,
     0x1.553b3cp-28f, 0x1.db64e6p-63f, 0x1.fb11bcp-99f, 0.0f, 0.0f, 0x1.2aa786p-105f,
     0.0f, 0.0f, 0x1.374bcep-84f, 0x1.66855ap-68f, 0x1.88e8aep-2f, 0.0f, 0.0f,
     0x1.d777e4p-56f, 0.0f, 0x1.1871f8p-112f, 0.0f, 0x1.60cbcep-22f, 0x1.946c76p-3f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b4b0e4p-64f, 0.0f, 0.0f, 0.0f, 0x1.a819e2p-17f, 0.0f,
     0x1.2c9238p-102f, 0.0f, 0.0f, 0x1.7f115ap-20f, 0.0f, 0.0f, 0x1.cd4ee4p-54f, 0.0f,
     0.0f, 0x1.00f11p-58f, 0.0f, 0.0f, 0.0f, 0x1.e53a1ap-16f, 0x1.ac6f52p-87f,
     0x1.82213p-81f, 0.0f, 0x1.69c11ap-113f, 0.0f, 0x1.b221f6p-98f, 0.0f,
     0x1.f233c2p-51f, 0x1.cc8f58p-88f, 0x1.621d3p-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.adb43ap-46f, 0x1.b2f99cp-22f, 0.0f, 0x1.e4abd8p-14f, 0.0f,
     0x1.ea7014p-29f, 0.0f, 0x1.eadb22p-18f, 0.0f, 0x1.259dfp-35f, 0.0f,
     0x1.2bfaeap-106f, 0.0f, 0.0f, 0x1.8fa25cp-61f, 0.0f, 0x1.8c2524p-57f,
     0x1.44d9cep-126f, 0.0f, 0.0f, 0x1.e93924p-38f, 0x1.8eab8p-109f, 0x1.954048p-49f,
     0.0f, 0.0f, 0.0f, 0x1.ed4b7p-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d9f3bap-118f,
     0x1.0fd206p-54f, 0.0f, 0.0f, 0.0f, 0x1.c0c212p-59f, 0x1.b661fep-102f,
     0x1.bcae1ep-27f, 0.0f, 0x1.b5b35p-44f, 0.0f, 0x1.6280c2p-95f, 0.0f,
     0x1.5fc33ap-90f, 0x1.0eec9p-44f, 0x1.189596p-65f, 0.0f, 0x1.ef6944p-19f,
     0x1.1e2cdap-36f, 0x1.af6e8ap-32f, 0.0f, 0x1.82c42cp-126f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.22e532p-109f, 0.0f, 0.0f, 0x1.6d35a6p-78f, 0x1.8a99bcp-26f, 0.0f, 0.0f,
     0x1.fa1bdap-122f, 0x1.fcc2ap-73f, 0x1.7f447ap-19f, 0x1.562f4ap-105f,
     0x1.c6d7acp-102f, 0.0f, 0.0f, 0x1.b49716p-67f, 0.0f, 0.0f, 0.0f, 0x1.c8228cp-69f,
     0.0f, 0.0f, 0x1.090cd4p-56f, 0x1.50a8b6p-44f, 0.0f, 0x1.3aaeb4p-58f,
     0x1.a5212ap-2f, 0x1.ea5132p-71f, 0x1.e2c29cp-10f, 0.0f, 0.0f, 0x1p0f,
     0x1.8159a2p-26f, 0x1.96065ap-10f, 0.0f, 0.0f, 0x1.30653ep-8f, 0x1.9525b4p-105f,
     0x1.377758p-81f, 0.0f, 0.0f, 0x1.523f3cp-27f, 0.0f, 0x1.524288p-93f, 0.0f,
     0x1.9bb98ep-123f, 0.0f, 0x1.ffef82p-3f, 0.0f, 0x1.fd8ce4p-2f, 0x1.550a6cp-64f,
     0x1.4487d4p-91f, 0x1.cd882cp-51f, 0x1.c36beap-8f, 0x1.2b7498p-72f, 0.0f, 0.0f,
     0x1.f0dda6p-67f, 0.0f, 0.0f, 0.0f, 0x1.77cc8p-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.fd9a2cp-14f, 0.0f, 0.0f, 0x1.e8c6c8p-83f, 0.0f, 0x1.cc746ep-103f, 0.0f,
     0.0f, 0x1.d77f1cp-1f, 0.0f, 0x1.2d237ep-37f, 0x1.787c3ap-89f, 0.0f,
     0x1.0463fap-44f, 0x1.e08d68p-69f, 0x1.4c0c6cp-104f, 0.0f, 0.0f, 0.0f,
     0x1.09b798p-102f, 0x1.2821b4p-17f, 0x1.a1e37ep-15f, 0.0f, 0x1.f6875p-99f,
     0x1.d17112p-46f, 0.0f, 0x1.d90bfep-108f, 0x1.c4c1p-77f, 0x1.0fc882p-69f,
     0x1.3169dp-117f, 0x1.46d6b2p-97f, 0x1.232b66p-81f, 0x1.6b30b6p-21f, 0.0f,
     0x1.833544p-113f, 0x1.bbff98p-50f, 0x1.32041ap-79f, 0.0f, 0.0f, 0x1.d1f85ap-114f,
     0x1.6beae2p-59f, 0x1.a68902p-122f, 0.0f, 0.0f, 0.0f, 0x1.ba1bcp-58f,
     0x1.a9ee7p-107f, 0x1.c0a3c8p-63f, 0.0f, 0.0f, 0x1.696038p-32f, 0.0f,
     0x1.56022ap-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ab415p-36f, 0.0f,
     0x1.1496ccp-79f, 0x1.e23898p-92f, 0x1.d0ba94p-28f, 0.0f, 0x1.6cb19ap-85f, 0.0f,
     0.0f, 0x1.ebba18p-45f, 0.0f, 0.0f, 0x1.459ee6p-101f, 0x1.606388p-28f,
     0x1.09294ep-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.afc34p-42f, 0.0f, 0x1.47998ep-28f,
     0.0f, 0x1.33691ep-103f, 0.0f, 0.0f, 0x1.f3fd9ap-83f, 0.0f, 0x1.bd14d8p-117f,
     0.0f, 0.0f, 0x1.4403eap-101f, 0x1.916084p-126f, 0x1.35015cp-120f, 0x1p0f,
     0x1.a2ac4ap-11f, 0.0f, 0x1.8c94aap-67f, 0x1.b25d94p-113f, 0x1.a8dd72p-106f,
     0x1.417344p-13f, 0x1.3a98aap-51f, 0x1.695d56p-79f, 0x1.35de76p-37f,
     0x1.e4ee6ap-97f, 0x1.abc1d2p-13f, 0.0f, 0.0f, 0x1.aeb6bp-31f, 0x1.ce72d2p-18f,
     0x1.d95d88p-47f, 0x1.ad7f78p-79f, 0x1.060454p-22f, 0x1.85a8a4p-2f, 0.0f,
     0x1.dd1868p-105f, 0x1.07882p-6f, 0.0f, 0.0f, 0x1.8cbb84p-43f, 0x1.1c62dap-90f,
     0x1.722f34p-20f, 0x1.0b6bfcp-2f, 0x1.62ce1cp-51f, 0.0f, 0x1.dea654p-111f,
     0x1.5b258ap-2f, 0x1.fd21bap-81f, 0x1.43980ap-59f, 0x1.e0b48p-76f, 0.0f,
     0x1.ee4354p-24f, 0x1.b4fea4p-49f, 0x1.c457aep-48f, 0x1.0c9b24p-76f,
     0x1.bcf9e8p-76f, 0.0f, 0.0f, 0x1.c2b3b4p-93f, 0.0f, 0.0f, 0x1.e4e6eep-48f,
     0x1.2b0998p-100f, 0x1.edbdbap-85f, 0.0f, 0x1.af7648p-114f, 0x1.9a0842p-90f,
     0x1.999bbcp-11f, 0.0f, 0x1.75f59p-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.9d6c9p-91f, 0x1.12854cp-28f, 0x1.ab2b1ap-75f, 0.0f,
     0x1.30a9bap-93f, 0x1.823ac4p-124f, 0x1.1d9b3cp-92f, 0.0f, 0.0f, 0x1.4bbd8ap-19f,
     0x1.ec03f4p-73f, 0.0f, 0x1.7dfafap-14f, 0x1.9ed12ap-80f, 0.0f, 0.0f,
     0x1.148606p-45f, 0.0f, 0.0f, 0x1.3a27ccp-124f, 0.0f, 0.0f, 0x1.fdada6p-3f,
     0x1.c31f04p-90f, 0x1.8832fap-95f, 0.0f, 0.0f, 0.0f, 0x1.0fc37p-95f,
     0x1.321678p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.324474p-73f, 0x1.386acep-107f,
     0x1.584e7cp-54f, 0x1.e85b6p-60f, 0.0f, 0.0f, 0.0f, 0x1.48f5aap-3f, 0.0f, 0.0f,
     0x1.0848e8p-74f, 0.0f, 0x1.b838e6p-23f, 0x1.8f4f36p-46f, 0x1.818724p-82f, 0.0f,
     0.0f, 0.0f, 0x1.ee2e6cp-90f, 0x1.2228b6p-42f, 0.0f, 0x1.daa68ap-112f,
     0x1.4ddf9p-36f, 0x1.77e238p-40f, 0x1.8e7cecp-33f, 0.0f, 0.0f, 0.0f,
     0x1.86b53p-125f, 0x1.6358dcp-98f, 0.0f, 0x1.2366a4p-85f, 0x1.f5c14cp-50f,
     0x1.ff0768p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fabc4cp-126f, 0.0f, 0x1.9abedap-33f,
     0.0f, 0.0f, 0x1.6bba9cp-38f, 0.0f, 0.0f, 0.0f, 0x1.abe14ep-103f, 0x1.f96bdcp-71f,
     0.0f, 0x1.9a867cp-38f, 0x1.5a8c5p-100f, 0x1.03ca64p-99f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.6fdd2ep-68f, 0x1.28804cp-115f, 0.0f, 0x1.ddf946p-93f, 0x1.47123cp-38f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fcc524p-109f, 0x1.4cc642p-35f, 0.0f, 0.0f,
     0.0f, 0x1.eac896p-62f, 0x1.0e4eecp-74f, 0x1.5f06a6p-104f, 0x1.7f698p-100f,
     0x1.71e9aep-31f, 0x1.a0d73ep-19f, 0.0f, 0x1.2d43a6p-1f, 0x1.5c9704p-114f, 0.0f,
     0.0f, 0.0f, 0x1.ea1054p-37f, 0.0f, 0.0f, 0x1.fc992p-28f, 0.0f, 0.0f, 0.0f,
     0x1.c8e736p-15f, 0x1.98232p-62f, 0x1.49eca6p-42f, 0x1.338dc4p-77f,
     0x1.910da6p-17f, 0.0f, 0x1.171ce6p-38f, 0.0f, 0.0f, 0x1.a3f3c2p-39f,
     0x1.dff8c2p-14f, 0.0f, 0.0f, 0.0f, 0x1.191612p-69f, 0x1.115f54p-37f, 0.0f,
     0x1.e506f4p-107f, 0x1.81b81ep-46f, 0x1p0f, 0x1.13b23ap-76f, 0x1.6c7618p-29f,
     0.0f, 0.0f, 0.0f, 0x1.2b969ep-126f, 0.0f, 0x1.8a4c2ep-61f, 0.0f, 0.0f,
     0x1.ff220ep-90f, 0.0f, 0x1.4b9c94p-41f, 0.0f, 0x1.09cb42p-45f, 0.0f,
     0x1.481096p-46f, 0.0f, 0.0f, 0x1.326678p-82f, 0x1.05701ep-120f, 0.0f,
     0x1.48a23cp-23f, 0.0f, 0x1.fb9fap-84f, 0x1.ca8fb4p-29f, 0x1.f6f42ap-10f,
     0x1.880be2p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.de1c3cp-117f, 0x1.52aafap-3f,
     0.0f, 0x1.543cep-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.88ee5cp-126f, 0.0f, 0.0f,
     0x1.faf44ap-77f, 0.0f, 0.0f, 0x1.f6d4bep-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b85d3cp-100f, 0x1.dc3f5ap-24f, 0x1.8bd3e6p-35f, 0x1.e08f9ap-118f,
     0x1.fe71e6p-68f, 0.0f, 0x1.5720b8p-86f, 0x1.4333c2p-1f, 0.0f, 0.0f,
     0x1.5dbb84p-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d738e4p-114f, 0.0f,
     0x1.667a2ap-73f, 0.0f, 0x1.e8fa4p-72f, 0.0f, 0x1.9672a6p-45f, 0.0f,
     0x1.2d219cp-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bc84b6p-88f, 0x1.b32aap-7f,
     0x1.4c3abcp-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7959dp-104f, 0.0f,
     0x1.e5a398p-24f, 0x1.2dc0c8p-26f, 0x1.152526p-21f, 0x1.11d4fap-13f,
     0x1.ab2d64p-45f, 0.0f, 0x1.44cdecp-95f, 0x1.23bf94p-74f, 0x1.730a24p-106f, 0.0f,
     0x1.b61abp-18f, 0x1.7cb6dp-6f, 0.0f, 0.0f, 0x1.b8d286p-49f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_float8_t global_bench_acc;
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
        ml_float8_t local_acc;
        int32_t i;
        ml_float8_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1008));){
            ml_float8_t tmp0;
            ml_float8_t tmp1;
            ml_float8_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_float8_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            tmp1 = Sleef_finz_atanf8_u10kvx(tmp0);
            memcpy(((ml_float8_t*)(external_bench_wrapper_output_table+ i)), &(tmp1), 32);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(8);
            i = tmp3;
        }
        tmp0 = global_bench_acc + local_acc;
        global_bench_acc = tmp0;
        tmp1 = j + INT32_C(1);
        j = tmp1;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10080000.0;
    printf("Sleef_finz_atanf8_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_finz_atanf8_u10kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
