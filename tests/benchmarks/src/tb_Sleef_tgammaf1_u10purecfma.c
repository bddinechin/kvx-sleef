/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_tgammaf1_u10purecfma.c --function \
 *     Sleef_tgammaf1_u10purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile float external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.10cf32p-62f, 0.0f, 0x1.44e44cp-85f,
     0x1.e8bb92p-114f, 0.0f, 0x1.436364p-49f, 0x1.7350d4p-8f, 0.0f, 0x1.f2b01ap-59f,
     0.0f, 0x1.f10c6cp-114f, 0x1.05f4bp-11f, 0.0f, 0.0f, 0x1.7611d2p-28f, 0.0f, 0.0f,
     0.0f, 0x1.42cb4p-23f, 0x1.e55a3ap-30f, 0.0f, 0x1.d90074p-26f, 0x1.ae0134p-77f,
     0.0f, 0.0f, 0x1.2d0e56p-5f, 0.0f, 0x1.f3bf4ep-97f, 0x1.91cfbap-43f, 0.0f,
     0x1.381abep-41f, 0x1.e4ff6ap-117f, 0x1.f23c56p-40f, 0x1.1fab52p-19f,
     0x1.f6ee12p-100f, 0.0f, 0x1.5257a2p-8f, 0x1.1b4f32p-70f, 0x1.c6811ep-25f,
     0x1.f80dcap-17f, 0.0f, 0.0f, 0x1.aed2b8p-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e6598ep-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fc04ccp-118f, 0.0f,
     0x1.a9d426p-123f, 0.0f, 0x1.7a7ddep-74f, 0x1.c2514ap-70f, 0x1.cb6ed8p-110f, 0.0f,
     0.0f, 0x1.00fd46p-88f, 0.0f, 0.0f, 0x1.220872p-23f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b58096p-98f, 0.0f, 0x1.fe102cp-32f, 0x1.ebae1p-34f, 0.0f, 0.0f,
     0x1.3581bap-58f, 0x1.65aa6p-67f, 0.0f, 0.0f, 0x1.e723c6p-115f, 0x1.9d73eep-58f,
     0x1.e73c3cp-97f, 0x1.235ccap-90f, 0x1.d8ae24p-19f, 0.0f, 0x1.212cfp-17f, 0.0f,
     0.0f, 0x1.3737e2p-91f, 0x1.d37254p-17f, 0.0f, 0x1.7c951ep-115f, 0.0f,
     0x1.f8be7cp-18f, 0x1.a59e1cp-52f, 0.0f, 0.0f, 0.0f, 0x1.30d004p-5f,
     0x1.6774c6p-125f, 0x1.c004cap-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.73fa5cp-72f,
     0x1.4274a8p-102f, 0x1.2535bp-44f, 0.0f, 0.0f, 0.0f, 0x1.32be32p-62f, 0.0f, 0.0f,
     0.0f, 0x1.cb810cp-45f, 0.0f, 0.0f, 0x1.ad4cap-50f, 0x1p0f, 0.0f, 0.0f,
     0x1.fa8652p-119f, 0.0f, 0x1.a168a2p-20f, 0x1.a13746p-90f, 0x1.c6ecp-29f, 0.0f,
     0x1.50c206p-99f, 0.0f, 0.0f, 0x1.6369bep-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.dfabd4p-35f, 0x1.38f844p-11f, 0.0f, 0x1.97ccb4p-1f, 0.0f, 0x1.ce148cp-58f,
     0x1.05c762p-87f, 0.0f, 0x1.f38faap-87f, 0.0f, 0.0f, 0x1.b6cfep-13f, 0.0f,
     0x1.ae417p-104f, 0x1.f43f78p-9f, 0x1.f78972p-62f, 0x1.9d1d02p-68f, 0.0f,
     0x1.02052cp-1f, 0x1.d0a82ap-50f, 0x1.4cf05p-79f, 0.0f, 0x1.584026p-66f,
     0x1.9acd2ep-2f, 0x1.586cdcp-17f, 0x1.4ede5cp-65f, 0.0f, 0x1.3b01bap-13f, 0.0f,
     0.0f, 0.0f, 0x1.a8698cp-47f, 0.0f, 0x1.b4e046p-95f, 0.0f, 0x1.cdce2p-125f,
     0x1.aa8b74p-42f, 0.0f, 0x1.813626p-49f, 0.0f, 0x1.86a862p-18f, 0x1.9c5a46p-50f,
     0x1.e5d972p-57f, 0x1.5d6e2p-101f, 0x1.50b0a6p-103f, 0.0f, 0.0f, 0.0f,
     0x1.30f20ep-107f, 0x1.52b024p-82f, 0x1.0e3136p-34f, 0x1.8cc374p-89f, 0.0f,
     0x1.cdbeb2p-15f, 0.0f, 0x1.0babd6p-56f, 0x1.2eaa6ap-47f, 0.0f, 0.0f,
     0x1.c7fb18p-50f, 0x1.b62ab6p-57f, 0.0f, 0x1.83e5b4p-44f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a8e066p-40f, 0x1.e9fa36p-71f, 0.0f, 0x1.1e5cf8p-49f, 0x1p0f, 0x1.c31d76p-96f,
     0.0f, 0.0f, 0x1.9c4856p-55f, 0x1.8a79a6p-11f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7b9954p-33f, 0x1.6aab7p-85f, 0x1.48ac98p-62f, 0x1.5e0ep-105f,
     0x1.2c19bap-68f, 0x1.0b8bc6p-12f, 0.0f, 0x1.84b6f2p-122f, 0x1.6d1ddap-51f,
     0x1.eb5d3ep-78f, 0x1.2a4694p-95f, 0.0f, 0.0f, 0x1.214c5ap-103f, 0x1.1c4392p-70f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dea08ap-44f, 0.0f, 0x1.c3754p-36f,
     0x1.f7e8d6p-39f, 0x1.ca957cp-114f, 0.0f, 0.0f, 0.0f, 0x1.8e313cp-119f,
     0x1.6e89cap-8f, 0.0f, 0.0f, 0.0f, 0x1.b94c2p-48f, 0.0f, 0.0f, 0.0f,
     0x1.cc75e2p-68f, 0.0f, 0x1.b86b5p-41f, 0.0f, 0.0f, 0.0f, 0x1.94444ap-34f, 0.0f,
     0x1.023e66p-68f, 0.0f, 0.0f, 0.0f, 0x1.e3c902p-77f, 0x1.753e26p-9f,
     0x1.418284p-114f, 0.0f, 0.0f, 0x1.1f39c4p-94f, 0.0f, 0x1.00cf3p-45f, 0.0f,
     0x1.feacdep-96f, 0.0f, 0.0f, 0x1.c8458cp-72f, 0x1.639ff4p-114f, 0x1.4259c6p-72f,
     0x1.da86d2p-124f, 0.0f, 0.0f, 0.0f, 0x1.50dc1cp-117f, 0.0f, 0.0f, 0.0f,
     0x1.34191ap-86f, 0x1.6bbdccp-56f, 0x1.716a48p-91f, 0x1.b14342p-4f, 0x1.3e68dp-7f,
     0.0f, 0x1.92ab32p-120f, 0.0f, 0x1.23522cp-5f, 0.0f, 0.0f, 0x1.7f4a98p-107f,
     0x1.35d648p-95f, 0x1.5b2546p-9f, 0x1.e6b874p-15f, 0x1.3b637ep-9f,
     0x1.ef53d8p-95f, 0.0f, 0x1.00c8eap-64f, 0x1.124a96p-69f, 0x1.ef48e2p-98f, 0.0f,
     0x1.a5e994p-75f, 0.0f, 0x1.3f1808p-17f, 0.0f, 0.0f, 0.0f, 0x1.0fc866p-55f,
     0x1.49c4fep-71f, 0.0f, 0x1.6867a8p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.65d7b8p-67f, 0x1.dfb626p-71f, 0x1.77582p-119f, 0.0f, 0x1.b81a34p-51f, 0.0f,
     0x1.0c6696p-109f, 0x1.6d1e64p-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9c8196p-87f, 0.0f, 0x1.76de9cp-88f, 0x1.c8fp-107f, 0x1.6b4cfap-88f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e43114p-57f, 0.0f, 0.0f, 0x1.1d8a1ap-40f, 0.0f,
     0x1.c9a42cp-25f, 0.0f, 0.0f, 0x1.3884dap-85f, 0.0f, 0.0f, 0.0f, 0x1.d830b2p-29f,
     0.0f, 0x1.9e6dp-112f, 0.0f, 0x1.729582p-23f, 0x1.c34b8cp-39f, 0.0f,
     0x1.54413p-122f, 0x1.05c9cap-114f, 0.0f, 0.0f, 0x1.721acep-108f, 0x1.87d69ap-52f,
     0.0f, 0.0f, 0x1.1fcb94p-87f, 0x1.656a6ep-32f, 0.0f, 0x1.b48cfep-38f, 0.0f,
     0x1.07fb92p-82f, 0x1.a8ecb4p-86f, 0x1.5070cap-68f, 0x1.cee45ap-71f, 0.0f,
     0x1.1f92f2p-78f, 0.0f, 0x1.973ecp-89f, 0x1.27a0acp-60f, 0.0f, 0x1.a6b574p-54f,
     0x1.5e21c8p-28f, 0x1.2d5f28p-86f, 0x1.131a82p-117f, 0.0f, 0x1.83d6dp-115f, 0.0f,
     0x1.23d1e8p-84f, 0x1.30fda8p-23f, 0x1.35e2a2p-90f, 0.0f, 0.0f, 0.0f,
     0x1.d0d22cp-112f, 0.0f, 0x1.d85e06p-117f, 0.0f, 0x1.7ca10ap-47f, 0x1.56e676p-80f,
     0x1.fddd56p-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e7a324p-26f, 0x1.b06306p-66f, 0.0f,
     0.0f, 0.0f, 0x1.34104ep-29f, 0x1.f36ce6p-80f, 0x1.4f25e6p-35f, 0.0f, 0.0f,
     0x1.3fe3bcp-42f, 0x1.119b3ep-18f, 0.0f, 0x1.46e7bap-68f, 0x1.c84b2cp-8f, 0.0f,
     0.0f, 0x1.756a7ap-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f81f0ep-14f, 0x1.2638d6p-1f,
     0x1.aa44fcp-17f, 0.0f, 0x1.7fa1ecp-120f, 0x1.2ca1b8p-45f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8d771ep-121f, 0.0f, 0x1.eb78bcp-41f, 0.0f, 0.0f, 0x1.f045c4p-92f,
     0x1.254a3p-71f, 0x1.d45dfp-27f, 0x1.1db96p-43f, 0x1.b1ae16p-27f, 0x1.b300c8p-67f,
     0x1.3a155ep-32f, 0.0f, 0.0f, 0x1.ff2898p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.28aa92p-63f, 0x1.110d6ap-85f, 0.0f, 0.0f, 0x1.80e87p-45f, 0x1.1a64eep-1f,
     0.0f, 0.0f, 0x1.d85c6ap-126f, 0.0f, 0x1.3fe8p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.8e2956p-41f, 0.0f, 0x1.bb913ap-38f, 0x1.7ed004p-75f, 0x1.9149e6p-72f,
     0x1.9ac3fcp-99f, 0.0f, 0.0f, 0.0f, 0x1.9e3f5ep-21f, 0x1.67f0c6p-85f, 0.0f,
     0x1.8c23f4p-28f, 0.0f, 0.0f, 0.0f, 0x1.815f8cp-46f, 0x1.e2f4d8p-74f,
     0x1.f46304p-84f, 0.0f, 0x1.27356cp-101f, 0x1.f1e4cep-77f, 0x1.4d6b4ap-108f,
     0x1.cafa92p-103f, 0.0f, 0.0f, 0x1.ac89bcp-41f, 0x1.1d10ep-126f, 0x1.dc6e64p-54f,
     0.0f, 0x1.1c137p-36f, 0x1.a8ed8p-62f, 0.0f, 0.0f, 0.0f, 0x1.c98072p-86f,
     0x1.88ca3ep-2f, 0.0f, 0x1.02f294p-70f, 0x1.03d0a8p-30f, 0x1.8ef9bp-102f,
     0x1.6f767p-112f, 0x1.bfa664p-92f, 0.0f, 0x1.d34fccp-113f, 0.0f, 0.0f,
     0x1.015912p-19f, 0x1.11b18cp-85f, 0.0f, 0.0f, 0.0f, 0x1.5766p-14f, 0.0f, 0.0f,
     0x1.e30b8p-56f, 0.0f, 0x1.d47d5cp-46f, 0.0f, 0x1.a69f18p-97f, 0x1.490bb4p-3f,
     0x1.519f5ap-11f, 0x1.370c9ap-126f, 0.0f, 0.0f, 0.0f, 0x1.d71fcap-116f,
     0x1.b628bp-85f, 0.0f, 0x1.d36dap-48f, 0.0f, 0x1.83e0dp-80f, 0x1.10442p-72f,
     0x1.eb2032p-14f, 0x1.ee9ee6p-118f, 0x1.ca1a2p-13f, 0x1.57b77ap-119f, 0.0f, 0.0f,
     0x1.06d6fep-9f, 0x1.5142e6p-56f, 0x1.b9d80cp-67f, 0x1.e29676p-89f,
     0x1.7d3a66p-1f, 0x1.a19b6cp-1f, 0.0f, 0.0f, 0x1.a0432p-109f, 0x1.0854b2p-65f,
     0.0f, 0x1.11e1eap-95f, 0x1.726612p-68f, 0x1.869d5ep-90f, 0.0f, 0x1.971ebap-93f,
     0.0f, 0.0f, 0x1.82f8bp-78f, 0.0f, 0x1.82c25ep-77f, 0x1.7d7274p-24f,
     0x1.b85166p-50f, 0.0f, 0.0f, 0x1.fe889p-40f, 0x1.07401ap-109f, 0x1.dd0c5ep-100f,
     0.0f, 0x1.b19e12p-68f, 0x1.000ae4p-121f, 0x1.7f90b2p-95f, 0.0f, 0.0f,
     0x1.fb13eep-105f, 0x1.8837aep-82f, 0x1.35f5bep-110f, 0.0f, 0.0f, 0.0f,
     0x1.f0e5f2p-31f, 0.0f, 0.0f, 0x1.c512bcp-111f, 0.0f, 0x1.c7777ap-10f,
     0x1.5ecf2ap-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9f834cp-122f,
     0.0f, 0x1.b920a8p-103f, 0x1.287d84p-6f, 0x1.a60cb2p-47f, 0x1.44a1b8p-105f, 0.0f,
     0.0f, 0.0f, 0x1.a547bp-45f, 0x1.596f1ep-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e5a9f4p-41f, 0.0f, 0x1.c055eap-11f, 0x1.0f42acp-99f, 0.0f, 0.0f,
     0x1.b7e6fap-8f, 0.0f, 0.0f, 0x1.0a3dp-10f, 0x1.7fe476p-38f, 0x1.86cc22p-34f,
     0x1.7c5d9ap-66f, 0x1.66798cp-25f, 0.0f, 0.0f, 0x1.326ceap-104f, 0.0f, 0.0f, 0.0f,
     0x1.15ddaap-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a99ad6p-2f, 0.0f, 0.0f,
     0x1.e48aa4p-21f, 0x1.fdeb4ap-38f, 0.0f, 0.0f, 0x1.8dc7cp-72f, 0.0f,
     0x1.fcf858p-13f, 0.0f, 0.0f, 0x1.c609bp-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c53b8ap-109f, 0x1.89ca24p-108f, 0x1.864e14p-74f, 0.0f, 0x1.5ff6fcp-113f,
     0x1.fc702cp-97f, 0.0f, 0.0f, 0x1.74f2cp-89f, 0x1.8d919ap-107f, 0.0f,
     0x1.61d1cep-46f, 0x1.b31096p-49f, 0x1.ff796cp-91f, 0.0f, 0x1.08922p-30f,
     0x1.8440c2p-59f, 0x1.eebabap-3f, 0.0f, 0.0f, 0x1.d4d6f2p-48f, 0x1.827e6ap-99f,
     0x1.5c0cd4p-36f, 0.0f, 0x1.ebd3dp-111f, 0x1.6d055ap-118f, 0x1.6c9af6p-42f, 0.0f,
     0.0f, 0.0f, 0x1.cdb9b4p-22f, 0.0f, 0x1.7ee842p-75f, 0x1.a40556p-92f,
     0x1.a33686p-126f, 0x1.f02f16p-75f, 0x1.45f5bcp-17f, 0x1.105768p-11f, 0.0f,
     0x1.d06626p-58f, 0.0f, 0x1.e89daep-109f, 0x1.d6bd7cp-73f, 0x1.dca494p-16f, 0.0f,
     0x1.cd1996p-15f, 0.0f, 0.0f, 0.0f, 0x1.b0c71ep-111f, 0x1.04e45ap-68f,
     0x1.9431aep-103f, 0.0f, 0x1.05114cp-80f, 0x1.6f141ep-88f, 0.0f, 0x1.0a5b98p-51f,
     0x1.39b66ep-93f, 0x1.6f50bcp-81f, 0.0f, 0.0f, 0.0f, 0x1.530f16p-107f,
     0x1.f42c4ep-122f, 0.0f, 0x1p0f, 0.0f, 0x1.a1fbbap-76f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.9245e8p-69f, 0.0f, 0.0f, 0x1.bd0534p-71f, 0x1.b41c38p-64f, 0.0f,
     0.0f, 0x1.5d28e4p-48f, 0x1.393716p-68f, 0.0f, 0.0f, 0x1.aeb0cep-120f, 0.0f,
     0x1.21f674p-71f, 0x1.2f132ep-100f, 0x1.7f826cp-12f, 0x1.a00b9ap-106f,
     0x1.53248ap-47f, 0.0f, 0x1.362d3p-118f, 0x1.43a2c8p-79f, 0.0f, 0x1.bccf48p-111f,
     0.0f, 0x1.8cc0bcp-35f, 0.0f, 0.0f, 0x1.da9a2ep-44f, 0.0f, 0.0f, 0x1.e68e4p-19f,
     0.0f, 0.0f, 0x1.852428p-43f, 0x1.34245p-67f, 0x1.4a177p-14f, 0x1.c70154p-36f,
     0.0f, 0.0f, 0x1.d9de9ep-78f, 0x1.34aa1cp-53f, 0x1.d8b3dp-83f, 0.0f, 0.0f,
     0x1.6dc7eep-4f, 0x1.cfb80ap-30f, 0x1.30e55cp-41f, 0x1.8fd438p-78f,
     0x1.88f18p-33f, 0.0f, 0.0f, 0x1.b7353cp-71f, 0.0f, 0x1.ef3002p-112f, 0.0f,
     0x1.d73d62p-85f, 0x1.350bb8p-111f, 0x1.9c62f8p-52f, 0x1.4fb1p-36f, 0.0f,
     0x1.8786c4p-94f, 0.0f, 0x1.2c1342p-34f, 0.0f, 0x1.0a4c74p-38f, 0.0f, 0.0f,
     0x1.a4f4d4p-121f, 0.0f, 0.0f, 0x1.d7184p-17f, 0x1.932d1ap-56f, 0x1.7bae3ap-47f,
     0.0f, 0x1.920962p-63f, 0x1.90e134p-76f, 0.0f, 0x1.515a1ep-55f, 0.0f, 0.0f, 0.0f,
     0x1.2321e4p-42f, 0x1.89bc36p-94f, 0.0f, 0x1.627926p-70f, 0x1.676324p-31f,
     0x1.9d4a8p-91f, 0.0f, 0.0f, 0x1.44440ep-88f, 0x1.493898p-14f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.0ca3e6p-4f, 0.0f, 0.0f, 0x1.3e7c16p-55f, 0.0f, 0.0f, 0x1.b0c332p-48f,
     0x1.c7ab1ep-23f, 0x1.93adc8p-74f, 0x1.2d16e8p-22f, 0.0f, 0.0f, 0x1.7b5cd8p-40f,
     0x1.0a3b74p-53f, 0.0f, 0.0f, 0x1.96f7fap-28f, 0x1.9a531ap-50f, 0.0f,
     0x1.b10298p-126f, 0x1.7dca42p-42f, 0x1.39972ep-13f, 0.0f, 0.0f, 0.0f,
     0x1.7085d6p-60f, 0.0f, 0.0f, 0x1.533866p-36f, 0x1.d25fcap-94f, 0.0f, 0.0f,
     0x1.9a1c2ep-89f, 0x1.321ec2p-97f, 0.0f, 0x1.0bfb16p-116f, 0x1.b8aa2cp-56f, 0.0f,
     0x1.c7dbf6p-63f, 0.0f, 0.0f, 0x1.dd5076p-20f, 0x1.1b1cbep-2f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.8ff454p-37f, 0.0f, 0.0f, 0x1.2096eep-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d792d6p-81f, 0.0f, 0.0f, 0.0f, 0x1.1e1938p-23f, 0.0f, 0x1.4b600cp-33f, 0.0f,
     0x1.ad9078p-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3f66d8p-42f, 0x1.32d9fp-58f, 0.0f,
     0.0f, 0x1.4d810cp-26f, 0.0f, 0.0f, 0x1.8a408ep-108f, 0.0f, 0x1.44cb9ep-72f, 0.0f,
     0x1.8ae84cp-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ac86bap-67f, 0.0f, 0x1.b09ccep-97f, 0x1.9f840cp-29f, 0.0f, 0x1.6e1a02p-57f,
     0.0f, 0.0f, 0x1.fcfe62p-5f, 0.0f, 0.0f, 0x1.68fd4ep-23f, 0.0f, 0x1.09c7bap-26f,
     0.0f, 0.0f, 0x1.992ca2p-70f, 0x1.974f24p-25f, 0x1.f78168p-84f, 0x1.30403cp-14f,
     0x1.dfdcd2p-85f, 0.0f, 0x1.79dafap-42f, 0x1.cdc0b6p-6f, 0x1.44a7d6p-56f,
     0x1.57f13ap-106f, 0.0f, 0.0f, 0x1.1ec82ap-32f, 0.0f, 0x1.f26c48p-98f,
     0x1.3e8c7ap-56f, 0x1.d5781ap-115f, 0x1.12130cp-69f, 0x1.890966p-5f,
     0x1.843b7p-39f, 0.0f, 0.0f, 0.0f, 0x1.08588p-46f, 0x1.3e93fap-117f,
     0x1.ea1432p-82f, 0.0f, 0x1.b87cbep-71f, 0.0f, 0x1.278808p-92f, 0x1.241214p-126f,
     0.0f, 0x1.bd7d44p-114f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    float global_bench_acc;
    int64_t timer;
    int64_t tmp;
    int32_t j;
    int64_t tmp1;
    int64_t tmp2;
    double id_tmp;
    double cpe_measure;
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = 0.0f;
    tmp = __cos_counter_num(0);
    timer = tmp;
    j = INT32_C(0);

    for (;(j < INT32_C(10000));){
        float bench_acc;
        int32_t i;
        float tmp0;
        int32_t tmp1;

        i = INT32_C(0);
        bench_acc = 0.0f;

        for (;(i < INT32_C(1001));){
            float tmp0;
            float tmp1;
            float tmp2;
            int32_t tmp3;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_tgammaf1_u10purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = bench_acc + tmp1;
            bench_acc = tmp2;
            tmp3 = i + INT32_C(1);
            i = tmp3;
        }
        tmp0 = global_bench_acc + bench_acc;
        global_bench_acc = tmp0;
        tmp1 = j + INT32_C(1);
        j = tmp1;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_tgammaf1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_tgammaf1_u10purecfma bench acc %a\n", global_bench_acc);
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
