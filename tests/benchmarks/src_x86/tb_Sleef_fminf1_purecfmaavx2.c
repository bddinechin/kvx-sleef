/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_fminf1_purecfma.c --function Sleef_fminf1_purecfma \
 *     --arity 2 --headers sleef.h,ml_support_lib.h --input-formats \
 *     binary32,binary32 --bench --no-embedded-bin --target x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <xmmintrin.h>
#include <stdio.h>
#include <inttypes.h>


volatile float external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.f7e886p-124f, 0.0f, 0.0f, 0x1.8502bep-24f, 0.0f, 0x1.ac2182p-57f, 0.0f,
     0.0f, 0x1.abc936p-41f, 0.0f, 0x1.64b926p-32f, 0x1.b2a042p-26f, 0.0f,
     0x1.e1ffe4p-59f, 0x1.dee20ap-75f, 0.0f, 0x1.57fe1ap-110f, 0.0f, 0x1.39e09cp-97f,
     0.0f, 0.0f, 0x1.467e6cp-116f, 0.0f, 0x1p0f, 0.0f, 0x1.403234p-109f, 0.0f, 0.0f,
     0x1.bb685ap-26f, 0x1.5c7b2ap-23f, 0x1.c045acp-39f, 0x1.7ed1a6p-44f,
     0x1.92fe44p-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2e976cp-126f, 0x1.364ea8p-70f,
     0x1.201ff8p-83f, 0.0f, 0.0f, 0x1.1a4602p-11f, 0.0f, 0x1.a4b062p-41f, 0.0f,
     0x1.2d7d3ep-54f, 0.0f, 0x1.22b17p-121f, 0x1.fa1124p-25f, 0x1.9fadd2p-55f, 0.0f,
     0x1.2fe464p-35f, 0x1.460ddep-99f, 0.0f, 0x1.91a0e4p-60f, 0x1.99e2eep-87f, 0.0f,
     0x1.a8e36ep-31f, 0x1.6fde0cp-53f, 0x1.53991p-25f, 0.0f, 0x1.319114p-61f,
     0x1.805c1p-87f, 0.0f, 0x1.714b08p-92f, 0x1.76468cp-35f, 0.0f, 0.0f, 0.0f,
     0x1.ec75d2p-67f, 0.0f, 0x1.e047acp-28f, 0.0f, 0x1.d2498ep-19f, 0x1.eee3ccp-30f,
     0x1.6ac5e2p-17f, 0.0f, 0.0f, 0.0f, 0x1.51fc68p-39f, 0x1.3db01cp-18f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0b6f56p-117f, 0x1.3d7cd6p-61f, 0x1.7d061ap-73f,
     0x1.ea92e6p-103f, 0x1.84f5fcp-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ed40a6p-116f, 0.0f, 0.0f, 0.0f, 0x1.28dcaep-36f, 0.0f, 0.0f, 0x1.74cbd4p-71f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7e7c88p-61f, 0.0f, 0.0f, 0.0f, 0x1.170968p-77f,
     0x1.718322p-67f, 0x1.93a358p-88f, 0.0f, 0x1.49f86cp-16f, 0.0f, 0x1.2ecd4cp-32f,
     0.0f, 0.0f, 0x1.2d7be2p-35f, 0x1.6988ap-47f, 0x1.5abbd6p-86f, 0x1.90542ep-98f,
     0x1.3f13fp-60f, 0x1.5438ep-111f, 0.0f, 0.0f, 0x1.290248p-74f, 0.0f,
     0x1.71e04ap-110f, 0.0f, 0x1.cc6532p-63f, 0.0f, 0.0f, 0x1.5d638cp-11f,
     0x1.f01114p-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dfde66p-77f,
     0.0f, 0x1.9ae194p-54f, 0x1.dc425ep-30f, 0.0f, 0.0f, 0x1.47834cp-39f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.1fb294p-74f, 0.0f, 0.0f, 0x1.4ceb24p-10f, 0x1.7ae58p-16f,
     0x1.f8f968p-69f, 0.0f, 0x1.2ebb3cp-38f, 0.0f, 0.0f, 0x1.dd601ep-60f,
     0x1.7f5ec4p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3417f2p-84f,
     0x1.962d7p-86f, 0.0f, 0.0f, 0x1.9bef96p-64f, 0x1.e12p-55f, 0.0f, 0x1.5eca94p-25f,
     0.0f, 0.0f, 0.0f, 0x1.03d874p-65f, 0.0f, 0.0f, 0.0f, 0x1.59473ap-90f,
     0x1.c9c06cp-93f, 0x1.7b17c4p-63f, 0.0f, 0.0f, 0.0f, 0x1.0f6254p-20f,
     0x1.a59b86p-109f, 0x1.118882p-41f, 0x1.9460dap-79f, 0.0f, 0.0f, 0.0f,
     0x1.db0d26p-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.478eeep-75f, 0.0f, 0x1.6073c8p-85f,
     0x1.1f7896p-29f, 0x1.663f84p-12f, 0x1.1454acp-34f, 0x1.415472p-46f, 0.0f,
     0x1.f871bep-19f, 0.0f, 0.0f, 0.0f, 0x1.a6d154p-36f, 0.0f, 0x1.b7a108p-47f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.70108p-80f, 0x1.19ec16p-44f, 0x1.c15bd4p-123f,
     0.0f, 0.0f, 0x1.23ba8ep-37f, 0.0f, 0.0f, 0x1.fe2e8ep-84f, 0.0f, 0x1.c3a0e8p-47f,
     0.0f, 0x1.6c30e2p-38f, 0x1.b8da5ep-78f, 0x1.7e5314p-50f, 0.0f, 0x1.e8627ep-23f,
     0.0f, 0.0f, 0.0f, 0x1.549ab4p-63f, 0x1.c5d39cp-50f, 0.0f, 0.0f, 0x1.03e92ap-118f,
     0x1.dc2a88p-117f, 0x1.ff49bap-44f, 0.0f, 0x1.13189ep-118f, 0x1.492baep-56f,
     0x1.6f28fp-22f, 0x1.67ca2ap-62f, 0x1.e6ecdap-60f, 0.0f, 0x1.b4fc6ap-90f,
     0x1.ada3dep-110f, 0.0f, 0x1.fb59a2p-107f, 0x1.2f4778p-9f, 0x1.0f8f94p-18f,
     0x1.f385dap-13f, 0.0f, 0.0f, 0x1.fd5cbp-31f, 0x1.2d8ab4p-42f, 0.0f,
     0x1.27ae74p-118f, 0x1.3205d4p-102f, 0x1.f99afp-99f, 0x1.637302p-107f,
     0x1.2bf3c2p-25f, 0x1.e856dep-123f, 0x1.2c8aaap-109f, 0x1.ecfb98p-58f, 0.0f, 0.0f,
     0x1.47eba6p-80f, 0.0f, 0x1.b9abfap-28f, 0x1.375784p-17f, 0.0f, 0x1.c31ee6p-101f,
     0x1.23e93p-71f, 0x1.a97dbcp-111f, 0x1.1da2c6p-66f, 0.0f, 0x1.2c670ep-121f,
     0x1.a3b7e4p-100f, 0.0f, 0x1.505feap-69f, 0.0f, 0x1.dfc4c2p-52f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.86b3fap-54f, 0.0f, 0x1.bb07d2p-92f, 0.0f, 0x1.d74e04p-105f, 0.0f,
     0x1.1bd218p-10f, 0.0f, 0x1.d7aa24p-32f, 0x1.4e8c34p-79f, 0.0f, 0.0f, 0.0f,
     0x1.419ce6p-6f, 0.0f, 0x1.c81cp-103f, 0x1.d28fd6p-104f, 0.0f, 0x1.0222fp-53f,
     0x1.28279ap-36f, 0.0f, 0.0f, 0x1.2cba02p-52f, 0.0f, 0.0f, 0.0f, 0x1.e393c4p-82f,
     0x1.8fa338p-14f, 0x1.a96306p-2f, 0.0f, 0x1.9b3736p-74f, 0.0f, 0x1.33f488p-61f,
     0x1.a46812p-71f, 0.0f, 0.0f, 0x1.a02774p-48f, 0x1.1a5c1p-109f, 0x1.b5287p-54f,
     0.0f, 0.0f, 0x1.f8d5e6p-6f, 0x1.6e3ff8p-92f, 0.0f, 0x1.de132p-31f,
     0x1.c8419p-112f, 0x1.684c1ep-101f, 0x1.30c3c4p-39f, 0.0f, 0.0f, 0.0f,
     0x1.f09e3cp-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1f55f2p-100f,
     0x1.82cd32p-41f, 0.0f, 0.0f, 0x1.03839ep-70f, 0.0f, 0.0f, 0.0f, 0x1.be54c4p-83f,
     0.0f, 0x1.ac078ap-71f, 0.0f, 0x1.937906p-87f, 0.0f, 0x1.d2e9b6p-8f, 0.0f, 0.0f,
     0x1.987792p-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e070e6p-28f, 0.0f, 0x1.4ff808p-90f,
     0x1.6939c4p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5482b8p-40f, 0x1.4c3bfep-112f,
     0x1.583372p-110f, 0x1.9ba56ap-102f, 0x1.cfc2f8p-20f, 0x1.425252p-86f, 0.0f, 0.0f,
     0x1.ea2f36p-30f, 0x1.ca93fcp-81f, 0x1.c79ae6p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.21ddb4p-35f, 0.0f, 0x1.a4e876p-47f, 0.0f, 0x1.f16f52p-123f,
     0x1.7445dcp-68f, 0.0f, 0.0f, 0x1.42455cp-108f, 0x1.c66be2p-51f, 0.0f, 0.0f, 0.0f,
     0x1.63b7bp-116f, 0.0f, 0x1.2271bap-97f, 0.0f, 0x1.ce0072p-50f, 0x1.76c154p-41f,
     0x1.af3a8cp-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cd3b6p-53f, 0.0f, 0.0f,
     0x1.1ec75ep-7f, 0x1.1e94p-57f, 0x1.597ad2p-42f, 0x1.fbf4ecp-100f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7fc538p-70f, 0x1.ecee42p-35f, 0x1.c0812p-73f,
     0x1.291fecp-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dc54bep-102f, 0.0f, 0.0f,
     0x1.1c3c82p-30f, 0.0f, 0.0f, 0x1.a1e7e6p-85f, 0x1.9420cep-1f, 0x1.09dd34p-101f,
     0.0f, 0.0f, 0x1.07cc6cp-108f, 0.0f, 0.0f, 0x1.50d9fp-107f, 0x1.7c9176p-101f,
     0x1.783becp-90f, 0x1.11107ep-104f, 0x1.a7a80ep-124f, 0x1.d5efep-45f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ab241ap-115f, 0x1.48f954p-21f, 0x1.d85e86p-108f, 0.0f, 0.0f,
     0.0f, 0x1.05faaap-11f, 0.0f, 0.0f, 0.0f, 0x1.b85fe8p-77f, 0.0f, 0x1.ea97bp-2f,
     0.0f, 0x1p0f, 0.0f, 0x1.6bf796p-125f, 0.0f, 0.0f, 0x1.c0de5cp-26f, 0.0f, 0.0f,
     0x1.c269ecp-81f, 0x1.3a7cd4p-39f, 0.0f, 0x1.8d0024p-88f, 0.0f, 0x1.bbd42p-84f,
     0.0f, 0.0f, 0x1.f7cbecp-95f, 0x1.41ccbap-122f, 0x1.cc1028p-5f, 0x1.b05062p-26f,
     0x1.c6475ap-47f, 0x1.49fd5ap-125f, 0x1.b0a62cp-2f, 0x1.050f5cp-64f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d43f52p-123f, 0.0f, 0.0f, 0x1.02121ap-75f, 0x1.cd7018p-40f,
     0x1.34f7p-72f, 0x1.1306f2p-126f, 0x1.1f847ap-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.935426p-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c4f35p-7f, 0x1.7c12bep-1f,
     0.0f, 0.0f, 0.0f, 0x1.357edp-55f, 0x1.8ea78cp-4f, 0x1.ab1ce4p-102f,
     0x1.354ed4p-30f, 0.0f, 0.0f, 0x1.8dfc44p-76f, 0x1.3a8e0ap-4f, 0.0f,
     0x1.b81f26p-47f, 0.0f, 0x1.b2e31ap-68f, 0.0f, 0x1.6cafc2p-93f, 0.0f, 0.0f,
     0x1.b13964p-53f, 0x1.b9b81ap-29f, 0x1.b0cd5p-70f, 0.0f, 0x1.05292p-47f,
     0x1.abb966p-53f, 0x1.658762p-114f, 0.0f, 0.0f, 0.0f, 0x1.6cfd94p-4f, 0.0f,
     0x1.511336p-84f, 0x1.dff0bap-113f, 0.0f, 0x1.41f964p-61f, 0x1.63208ap-69f, 0.0f,
     0x1.73afecp-15f, 0.0f, 0.0f, 0x1.183c2ep-46f, 0.0f, 0.0f, 0.0f, 0x1.71e5eap-100f,
     0.0f, 0.0f, 0x1.379f4ap-55f, 0.0f, 0.0f, 0x1.8f700ap-99f, 0.0f, 0x1.cf30cep-36f,
     0x1.06b2a4p-43f, 0x1.fce0d4p-98f, 0x1.e03c7p-20f, 0.0f, 0.0f, 0x1.0a8834p-101f,
     0.0f, 0x1.7d7e48p-96f, 0x1.8deaccp-89f, 0.0f, 0.0f, 0x1.62c732p-86f,
     0x1.43f00ep-121f, 0x1.276146p-2f, 0x1.00802ap-88f, 0x1.d4a564p-83f,
     0x1.28bdd4p-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8d5dd2p-29f, 0.0f, 0.0f,
     0x1.b7c46cp-25f, 0.0f, 0x1.28b2e4p-69f, 0x1.7d69fap-97f, 0.0f, 0.0f, 0.0f,
     0x1.db29e8p-116f, 0.0f, 0.0f, 0x1.4bd028p-104f, 0.0f, 0x1.89e9ep-111f,
     0x1.a537fap-107f, 0x1.f9d1bep-22f, 0x1.d8c15cp-100f, 0x1.821e56p-82f, 0.0f, 0.0f,
     0x1.09c68ap-15f, 0x1.999636p-80f, 0.0f, 0x1.d05ceap-23f, 0x1.175628p-80f, 0.0f,
     0x1.1ae0aap-33f, 0x1.e2ff3ap-119f, 0.0f, 0x1.6a2fcep-5f, 0.0f, 0x1.3b9904p-68f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.0ecf1p-39f, 0.0f, 0x1.bd888p-6f, 0.0f, 0.0f, 0.0f,
     0x1.c3367cp-29f, 0x1.b149c4p-47f, 0.0f, 0x1.5f1a1ap-33f, 0.0f, 0x1.00d6ecp-87f,
     0x1.09c2eep-6f, 0.0f, 0.0f, 0x1.c2933ap-15f, 0x1.a6f994p-30f, 0x1.31feaap-115f,
     0.0f, 0x1.23dd96p-47f, 0.0f, 0x1.b1975cp-25f, 0.0f, 0x1.2264ecp-98f,
     0x1.04d882p-115f, 0.0f, 0.0f, 0x1.2e5b38p-92f, 0x1.6cc158p-18f, 0x1.47a366p-5f,
     0x1.c1cc42p-13f, 0x1.909db6p-18f, 0x1.d7760ap-85f, 0.0f, 0x1.4ce5f4p-82f, 0.0f,
     0x1.86b0aep-91f, 0.0f, 0x1.0d7b36p-21f, 0.0f, 0x1.f32128p-103f, 0.0f,
     0x1.95b8fap-62f, 0x1.525d94p-87f, 0.0f, 0.0f, 0x1.021774p-106f, 0.0f,
     0x1.0788f2p-99f, 0x1.d3a836p-45f, 0.0f, 0x1.dab8a8p-67f, 0x1.7fe054p-78f,
     0x1.b1d12cp-62f, 0x1.0f4eacp-118f, 0.0f, 0x1.a2a786p-83f, 0x1.e9a692p-36f, 0.0f,
     0.0f, 0x1.fc044p-51f, 0x1.4ab386p-23f, 0x1.9ea9fep-117f, 0.0f, 0x1.0d791ap-66f,
     0x1.06d674p-51f, 0.0f, 0.0f, 0.0f, 0x1.29e5f4p-74f, 0x1.2661c4p-116f,
     0x1.db2e42p-51f, 0x1.c7234p-49f, 0.0f, 0x1.7de312p-21f, 0.0f, 0.0f,
     0x1.d069e2p-26f, 0x1.1d63b4p-103f, 0.0f, 0x1.00ffe4p-77f, 0x1.bdda0cp-66f,
     0x1.b1f49ep-96f, 0.0f, 0x1.107ab6p-13f, 0x1.01aefcp-85f, 0x1.45d614p-38f,
     0x1.dab5e8p-113f, 0.0f, 0.0f, 0x1.d34f7ep-53f, 0x1.f94a28p-61f, 0.0f, 0.0f,
     0x1.70657cp-124f, 0.0f, 0x1.d6c5fp-12f, 0x1.001bap-6f, 0x1.81b244p-9f, 0.0f,
     0.0f, 0x1.5a6bacp-19f, 0x1.2bc028p-52f, 0x1.d05cc4p-45f, 0.0f, 0x1.f5c20ep-45f,
     0x1.91819p-32f, 0.0f, 0x1.baff84p-4f, 0.0f, 0.0f, 0x1.a38cd2p-115f, 0.0f,
     0x1.d026acp-111f, 0.0f, 0.0f, 0x1.306904p-10f, 0x1.65b0c2p-87f, 0.0f,
     0x1.e54226p-31f, 0x1.a57736p-32f, 0x1.959a8ep-85f, 0x1.103c42p-27f, 0.0f, 0.0f,
     0x1.59c9bep-104f, 0.0f, 0x1.2762c2p-116f, 0x1.c29f56p-90f, 0.0f, 0x1.a8ab4p-15f,
     0.0f, 0.0f, 0x1.7435d8p-30f, 0x1.516074p-107f, 0.0f, 0x1.c3b6fp-25f,
     0x1.d49ddcp-81f, 0.0f, 0x1.1a5c4p-118f, 0.0f, 0.0f, 0.0f, 0x1.1548f2p-7f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.1cad3p-40f, 0.0f, 0x1.6d617ap-60f, 0x1.11af64p-110f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d1df4p-25f, 0x1.6b2a44p-44f,
     0x1.1ba1f4p-56f, 0.0f, 0x1.49627ep-21f, 0x1.0ee8d2p-15f, 0x1.037fbp-86f,
     0x1.4f6814p-19f, 0x1.59b6cp-30f, 0x1.44c806p-5f, 0x1.23772ep-79f,
     0x1.ad96fep-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.72da6p-36f, 0.0f, 0.0f,
     0x1.f39b92p-70f, 0x1.4f51eep-67f, 0x1.2d7dd2p-114f, 0x1.330d42p-102f, 0.0f,
     0x1.2da2b4p-41f, 0.0f, 0.0f, 0.0f, 0x1.1b99fp-2f, 0x1.1fd1d6p-95f, 0.0f,
     0x1.a64244p-59f, 0x1.e4e36cp-112f, 0.0f, 0x1.f550b4p-84f, 0x1.669f8ep-56f, 0.0f,
     0x1.6d49a2p-79f, 0.0f, 0x1.a8122ep-84f, 0x1.209512p-124f, 0.0f, 0x1.da6492p-112f,
     0.0f, 0x1.7d5eecp-88f, 0x1.a9acd4p-90f, 0x1.6a8a5ap-48f, 0x1.e8bd0ap-86f,
     0x1.ab1d86p-1f, 0.0f, 0.0f, 0x1.7f861cp-22f, 0x1.76159cp-112f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.15761p-105f, 0.0f, 0x1.087f66p-22f, 0.0f, 0x1.d115f8p-47f, 0.0f,
     0x1.c0e88ep-116f, 0x1.d6c678p-80f, 0.0f, 0x1.203e34p-4f, 0x1.206e26p-92f,
     0x1.388734p-51f, 0x1.a5861p-37f, 0x1.7284dep-126f, 0.0f, 0.0f, 0.0f,
     0x1.783084p-24f, 0.0f, 0.0f, 0.0f, 0x1.c7d36p-57f, 0x1.ab21a2p-75f,
     0x1.ddad68p-11f, 0x1.8a9502p-32f, 0x1.c6fb1ep-42f, 0x1.0c8d5p-97f, 0.0f,
     0x1.7d87dp-117f, 0x1.e5dbcep-5f, 0x1.4c04b2p-25f, 0x1.7075bep-72f,
     0x1.bc5382p-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.731e84p-125f, 0x1.4150e8p-20f,
     0x1.a27506p-98f, 0.0f, 0x1.0992dcp-11f, 0.0f, 0x1.018c0ap-115f, 0.0f,
     0x1.5bd1c8p-19f, 0.0f, 0x1.456968p-98f, 0x1.bf5b3ap-112f, 0x1.473c64p-99f,
     0x1.c663eep-102f, 0x1.a498fp-54f, 0.0f, 0.0f, 0x1.b11de4p-86f, 0x1.4cc7d2p-25f,
     0x1.f62adap-36f, 0x1.045fbep-51f, 0.0f, 0.0f, 0.0f, 0x1.31187ep-37f, 0.0f,
     0x1.d50d3ap-112f, 0.0f, 0x1.f8d1fcp-112f, 0x1.096882p-82f, 0x1.f4ee9ap-7f, 0.0f,
     0.0f, 0x1.403e46p-52f, 0x1.5231bcp-71f, 0.0f, 0.0f, 0x1.4a27bp-31f, 0.0f,
     0x1.f61fecp-32f, 0.0f, 0.0f, 0x1.c6200cp-40f, 0.0f, 0.0f, 0x1.7fb564p-106f,
     0x1.338ceap-107f, 0x1.3555ecp-7f, 0x1.f5357ep-88f, 0.0f, 0.0f, 0x1.744368p-85f,
     0.0f, 0.0f, 0x1.c76fap-104f, 0.0f, 0x1.47241ap-125f, 0x1.a6c69ep-17f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.dfcd08p-81f, 0x1.eb1066p-104f, 0.0f, 0x1.d52cdp-21f, 0.0f,
     0x1.1a5056p-9f, 0x1.a93754p-24f, 0.0f, 0x1.da675ap-49f, 0.0f, 0x1.2b817p-49f,
     0.0f, 0x1.54633p-116f, 0x1.04c122p-72f, 0.0f, 0x1.2806e6p-15f, 0x1.a23276p-23f,
     0.0f, 0x1.deb6e4p-70f, 0.0f, 0x1.167d66p-118f, 0x1.f3ebap-67f, 0.0f, 0.0f,
     0x1.ca1acep-91f
};
static const float external_bench_wrapper_input_table_arg1[1001]  = {
     0x1.1fa4a6p-71f, 0.0f, 0x1.24361p-125f, 0.0f, 0.0f, 0.0f, 0x1.ce5b3ep-28f, 0.0f,
     0.0f, 0x1.eede78p-16f, 0.0f, 0x1.c9cf84p-122f, 0.0f, 0x1.f3383ap-80f,
     0x1.a79798p-52f, 0.0f, 0.0f, 0x1.fa180ap-72f, 0x1.a6dab6p-78f, 0x1.d37d5cp-39f,
     0.0f, 0.0f, 0.0f, 0x1.8ccc4ep-71f, 0.0f, 0x1.b659dp-110f, 0x1.404ecp-116f,
     0x1.efed34p-64f, 0x1.2711dep-71f, 0.0f, 0.0f, 0x1.92be82p-99f, 0x1.072bf8p-37f,
     0.0f, 0.0f, 0.0f, 0x1.37ff4cp-125f, 0x1.9b051ap-102f, 0.0f, 0.0f,
     0x1.4882aap-25f, 0.0f, 0x1.8fb0a8p-43f, 0.0f, 0x1.232582p-67f, 0x1.cf3322p-103f,
     0x1.1066ccp-3f, 0x1.7fc288p-100f, 0.0f, 0x1.3f304ap-123f, 0.0f, 0x1.73fcaap-38f,
     0x1.e0af2cp-122f, 0x1.98b872p-37f, 0x1.13a1fep-39f, 0.0f, 0x1.c23f3ep-79f,
     0x1.bee854p-74f, 0.0f, 0.0f, 0x1.5e1b56p-71f, 0.0f, 0.0f, 0.0f, 0x1.e5769ap-53f,
     0x1.6d3702p-17f, 0.0f, 0.0f, 0x1.0a90fap-116f, 0.0f, 0x1.fc1478p-40f,
     0x1.6a2e2ap-96f, 0.0f, 0.0f, 0x1.f4ef56p-105f, 0.0f, 0.0f, 0x1.620832p-111f,
     0x1.339562p-52f, 0.0f, 0x1.3c654cp-65f, 0x1.493062p-125f, 0.0f, 0.0f,
     0x1.cb762ep-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7b09fp-82f, 0x1.e64698p-57f, 0x1.05711ap-123f, 0.0f, 0.0f, 0.0f,
     0x1.faacb6p-118f, 0.0f, 0x1.ea7dfep-21f, 0x1.2afc84p-46f, 0x1.b1a65p-27f,
     0x1.1a0ad2p-30f, 0.0f, 0x1.6a8a8p-29f, 0x1.fa26a8p-46f, 0x1.63ed7ap-39f, 0.0f,
     0.0f, 0.0f, 0x1.ad1e6ep-95f, 0.0f, 0x1.f68cbcp-36f, 0x1.5c273ep-10f,
     0x1.04bf88p-60f, 0x1.f765ap-107f, 0x1.bbbfaep-55f, 0x1.469f2ap-28f, 0.0f, 0.0f,
     0x1.ce29fep-107f, 0x1.11fd34p-37f, 0x1.4b9eep-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.09035ep-44f, 0.0f, 0x1.d56e9p-27f, 0x1.f0b8dap-71f, 0x1.a94472p-64f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.399698p-88f, 0x1.1d6194p-105f, 0x1.ff20ap-111f,
     0x1.c99cc6p-8f, 0x1.2fccecp-84f, 0x1.30f9c8p-59f, 0.0f, 0.0f, 0x1.e39c88p-14f,
     0x1.6fefb2p-45f, 0.0f, 0.0f, 0x1.216566p-80f, 0x1.cadd7ap-125f, 0.0f, 0.0f,
     0x1.e60ef6p-67f, 0.0f, 0x1.795196p-115f, 0x1.99aacp-57f, 0.0f, 0.0f,
     0x1.bbabeep-32f, 0.0f, 0x1.88858cp-108f, 0.0f, 0x1.4ebd56p-98f, 0x1.21d4e8p-4f,
     0x1.6195bap-82f, 0.0f, 0x1.9ca24ep-32f, 0x1.f4ade2p-57f, 0x1.1f3f22p-81f, 0.0f,
     0.0f, 0x1.4b2388p-78f, 0x1.e4a716p-59f, 0x1.41961cp-53f, 0.0f, 0.0f,
     0x1.d8430ep-23f, 0x1.c8d4d8p-13f, 0x1.81602ep-90f, 0x1.81510ap-81f, 0.0f,
     0x1.4ea37cp-84f, 0.0f, 0.0f, 0.0f, 0x1.6abc7p-112f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.18f424p-98f, 0x1.71a29ap-61f, 0x1.bb181cp-7f, 0x1p0f, 0.0f, 0.0f,
     0x1.8813d2p-46f, 0.0f, 0.0f, 0x1.36dbfcp-9f, 0.0f, 0.0f, 0x1.cf4cfap-7f, 0.0f,
     0.0f, 0.0f, 0x1.eeabf6p-112f, 0x1.75a696p-105f, 0.0f, 0.0f, 0.0f,
     0x1.8b23f2p-69f, 0x1.4df3ep-12f, 0.0f, 0x1.4a3304p-55f, 0.0f, 0.0f,
     0x1.97292p-97f, 0x1.23d6b4p-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.255b04p-82f,
     0.0f, 0.0f, 0.0f, 0x1.f65c72p-80f, 0x1.43064cp-78f, 0.0f, 0.0f, 0x1.132adcp-35f,
     0.0f, 0x1.ad9e06p-57f, 0.0f, 0x1p0f, 0x1.6e70ecp-46f, 0.0f, 0x1.faf02cp-99f,
     0x1.95c8acp-101f, 0.0f, 0.0f, 0x1.18d51ep-70f, 0.0f, 0.0f, 0x1.dc60ccp-63f,
     0x1.1b6308p-56f, 0.0f, 0.0f, 0.0f, 0x1.4cbc2cp-56f, 0.0f, 0.0f, 0x1.916e82p-83f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.767c1cp-27f, 0x1.3eeb6ap-107f, 0.0f, 0.0f,
     0.0f, 0x1.f6cdfep-80f, 0x1.b9a5bap-27f, 0x1.2857ap-36f, 0.0f, 0x1.8a6606p-7f,
     0.0f, 0.0f, 0x1.a81874p-98f, 0x1.dbeab8p-80f, 0.0f, 0.0f, 0.0f, 0x1.38163cp-56f,
     0x1.fe67e4p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.aa56b4p-122f, 0.0f,
     0x1.30f89cp-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c1b244p-47f, 0.0f, 0x1.682b3cp-61f,
     0x1.c3ab64p-35f, 0x1.c4507ep-8f, 0.0f, 0x1.9d774p-13f, 0x1.7272cep-83f,
     0x1.1fe036p-9f, 0.0f, 0.0f, 0x1.032528p-98f, 0x1.d9f164p-94f, 0x1.408682p-21f,
     0.0f, 0.0f, 0.0f, 0x1.a7ade2p-31f, 0x1.e6c306p-9f, 0x1.10a1d2p-120f,
     0x1.d78d4cp-95f, 0.0f, 0x1.5b89fep-88f, 0x1.8d0ef4p-2f, 0x1.c7ea8ap-36f,
     0x1.c9cfcep-73f, 0x1.82aa3p-36f, 0.0f, 0x1.883496p-110f, 0.0f, 0.0f, 0.0f,
     0x1.7514d8p-60f, 0.0f, 0x1.f61c78p-73f, 0.0f, 0.0f, 0.0f, 0x1.72a99cp-54f, 0.0f,
     0x1.045556p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1f9354p-52f, 0.0f, 0x1.18ab34p-89f,
     0x1.7274a6p-99f, 0x1.c7c8c8p-96f, 0x1.d0828ep-25f, 0.0f, 0.0f, 0x1.247812p-56f,
     0x1.e082c6p-122f, 0.0f, 0x1.5eff1p-94f, 0.0f, 0.0f, 0x1.5f37ccp-32f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1514fp-89f, 0.0f, 0x1.c39da2p-68f, 0x1.2039c6p-53f, 0.0f, 0.0f,
     0.0f, 0x1.5ef176p-123f, 0x1.64ce2ep-92f, 0.0f, 0.0f, 0.0f, 0x1.ee6102p-84f, 0.0f,
     0x1.76db8cp-8f, 0x1.1fb24cp-86f, 0.0f, 0x1.8f6ed6p-95f, 0x1.f349b8p-29f, 0.0f,
     0.0f, 0x1.ac5578p-10f, 0.0f, 0x1.061f9p-105f, 0.0f, 0x1.d7baeep-103f, 0.0f, 0.0f,
     0x1.ae4cbap-54f, 0.0f, 0x1.20ac28p-85f, 0.0f, 0x1.acc13p-68f, 0.0f, 0.0f,
     0x1.c8675ep-38f, 0.0f, 0x1.4f94fcp-2f, 0.0f, 0x1.0947d2p-41f, 0x1.2f648ap-65f,
     0.0f, 0x1.189faap-53f, 0x1.e42396p-95f, 0.0f, 0.0f, 0.0f, 0x1.ea2942p-6f, 0.0f,
     0x1.804876p-18f, 0.0f, 0.0f, 0x1.8bffe2p-56f, 0.0f, 0x1.1e3666p-96f,
     0x1.0c2b8cp-70f, 0x1.a0e012p-22f, 0.0f, 0.0f, 0x1.444776p-98f, 0.0f,
     0x1.ce0caep-105f, 0x1.547e12p-100f, 0x1.97c09ep-57f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c69156p-13f, 0.0f, 0x1.b0e804p-2f, 0x1.35fa5ep-111f, 0.0f, 0.0f, 0.0f,
     0x1.2f1364p-5f, 0x1.41a6fcp-107f, 0.0f, 0.0f, 0x1.70cd2ep-39f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.22864cp-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.925296p-92f, 0.0f,
     0x1.04f4a4p-106f, 0.0f, 0.0f, 0x1.f104ccp-46f, 0x1.7b502ep-79f, 0x1.acad52p-31f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.204d1cp-44f, 0.0f, 0x1.a9843p-79f, 0.0f,
     0x1.ec5f32p-70f, 0x1.79b1ecp-70f, 0.0f, 0x1.673656p-111f, 0.0f, 0.0f,
     0x1.5d0b5p-73f, 0.0f, 0.0f, 0.0f, 0x1.e616b4p-97f, 0.0f, 0x1.ef1522p-55f, 0.0f,
     0x1.29a034p-25f, 0x1.f5214cp-33f, 0x1.7bae46p-96f, 0x1.935b0cp-62f,
     0x1.ca12eap-85f, 0x1.08dc0cp-121f, 0.0f, 0x1.55db02p-13f, 0.0f, 0x1.26ed56p-33f,
     0x1.e56b8p-73f, 0.0f, 0x1.8506aap-61f, 0.0f, 0.0f, 0x1.50f42cp-65f, 0.0f, 0.0f,
     0x1.687218p-50f, 0.0f, 0x1.cf7f5p-3f, 0x1.7723d4p-100f, 0.0f, 0x1.e2ed7p-52f,
     0.0f, 0x1.7761bep-65f, 0.0f, 0x1.28998p-29f, 0x1.9815d4p-8f, 0x1.dfd8aap-113f,
     0x1.b0839cp-86f, 0x1.9dbde2p-20f, 0x1.da85bep-30f, 0x1.f85c78p-95f,
     0x1.89487p-44f, 0.0f, 0.0f, 0.0f, 0x1.1cc34p-23f, 0.0f, 0x1.5081e6p-43f, 0.0f,
     0x1.56f59p-34f, 0x1.1fe9fcp-22f, 0.0f, 0x1.733be6p-69f, 0x1.7ea37ep-8f,
     0x1.0115e8p-60f, 0.0f, 0x1.833b4ep-33f, 0.0f, 0.0f, 0x1.237ec2p-40f, 0.0f, 0.0f,
     0.0f, 0x1.9327a6p-58f, 0x1.4c802p-18f, 0.0f, 0x1.f217b4p-113f, 0x1.55a924p-9f,
     0.0f, 0x1.e8df46p-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a3bae4p-41f, 0x1.d43c9ap-102f,
     0x1.f9c3cep-104f, 0.0f, 0.0f, 0.0f, 0x1.2f2548p-19f, 0x1.2c1762p-10f, 0.0f, 0.0f,
     0x1.d61f66p-47f, 0x1.7a15bep-1f, 0x1.bcfb26p-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8e363cp-94f, 0x1.fcd8fp-56f, 0x1.f9399cp-120f, 0.0f, 0x1.0a2184p-7f, 0.0f,
     0x1.e1ccc4p-42f, 0.0f, 0x1.2dfa0ap-69f, 0.0f, 0x1.48ecd4p-69f, 0.0f,
     0x1.df39c2p-31f, 0.0f, 0x1.df8abap-86f, 0x1.e4f748p-120f, 0.0f, 0x1.5beb78p-98f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d0ca02p-38f, 0x1.3c8efap-75f, 0.0f, 0.0f,
     0.0f, 0x1.1350bcp-114f, 0x1.694d1p-29f, 0x1.849b02p-113f, 0x1.af2784p-116f, 0.0f,
     0.0f, 0.0f, 0x1.d38b18p-68f, 0.0f, 0x1.0ff87p-7f, 0x1.f92db4p-97f,
     0x1.b2c346p-83f, 0.0f, 0.0f, 0x1.323734p-91f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9368a6p-91f, 0x1.c11596p-26f, 0x1.4c9c0ep-7f, 0.0f, 0.0f, 0x1.5392c2p-62f,
     0x1.82386ep-29f, 0.0f, 0.0f, 0.0f, 0x1.39590ep-4f, 0x1.c1f4ecp-77f,
     0x1.215592p-34f, 0.0f, 0x1.641a0cp-12f, 0x1.f41812p-21f, 0x1.24f2aap-78f, 0.0f,
     0.0f, 0.0f, 0x1.9dd0ecp-105f, 0x1.fbba66p-65f, 0x1.a189c4p-126f, 0x1.45856ap-6f,
     0.0f, 0x1.187c4ep-43f, 0.0f, 0x1.482b0cp-57f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.82e35ep-21f, 0.0f, 0x1.682e9ep-119f, 0.0f, 0x1.b2e882p-93f, 0x1.cf0726p-97f,
     0.0f, 0x1.2e8b8ep-61f, 0x1.3296p-10f, 0x1.c1d954p-126f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e611bap-91f, 0.0f, 0x1.95783ep-56f, 0x1.dd996cp-99f, 0.0f, 0.0f, 0.0f,
     0x1.dc1afp-85f, 0x1.be0582p-41f, 0x1.1c342p-85f, 0x1.ab8788p-66f, 0.0f, 0.0f,
     0x1.672a36p-22f, 0x1.22ac6cp-108f, 0.0f, 0x1.c38656p-65f, 0.0f, 0.0f,
     0x1.6911f2p-89f, 0.0f, 0x1.4ac8d6p-49f, 0x1.715dc2p-65f, 0x1.a5a0b8p-30f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.3c11a4p-28f, 0x1.23cfb4p-49f, 0.0f, 0x1.a4fbb4p-4f,
     0x1.6c1612p-79f, 0x1.38818ap-38f, 0.0f, 0x1.ecae2cp-36f, 0.0f, 0x1.689a14p-25f,
     0x1.7bc222p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5f9586p-99f, 0.0f,
     0x1.002f8ap-109f, 0x1.fb265p-91f, 0.0f, 0x1.eebda6p-74f, 0.0f, 0.0f,
     0x1.4807f2p-95f, 0x1.77e4c8p-116f, 0.0f, 0x1.881f8ap-88f, 0.0f, 0.0f, 0.0f,
     0x1.32fbeap-82f, 0x1.f07976p-9f, 0x1.69009ep-80f, 0x1.051132p-89f,
     0x1.e6ffd8p-32f, 0x1.f36f3ap-87f, 0.0f, 0x1.d60226p-85f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.896116p-27f, 0x1.3317c4p-47f, 0.0f, 0.0f, 0.0f, 0x1.1ade3p-9f,
     0x1.006018p-32f, 0.0f, 0.0f, 0x1.fed1cp-108f, 0.0f, 0.0f, 0x1.449078p-8f, 0.0f,
     0.0f, 0.0f, 0x1.bbd8a4p-37f, 0.0f, 0x1.bb87d8p-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.65eebp-9f, 0.0f, 0x1.575886p-76f, 0.0f, 0x1.443d5p-26f, 0.0f,
     0x1.6eb0cep-115f, 0x1.e70ed4p-90f, 0.0f, 0x1.5cd5d8p-83f, 0x1.010a8cp-12f,
     0x1.12e98ep-92f, 0.0f, 0x1.6f640ep-35f, 0x1.950962p-112f, 0x1.1c974ap-96f, 0.0f,
     0.0f, 0.0f, 0x1.c7b8p-76f, 0.0f, 0.0f, 0x1.747f88p-88f, 0.0f, 0x1.afc0ecp-16f,
     0.0f, 0.0f, 0x1.5be2ap-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7d67ccp-65f,
     0.0f, 0x1.710c56p-76f, 0x1.0f8644p-53f, 0x1.48e54ap-118f, 0.0f, 0.0f,
     0x1.ac0fbep-100f, 0.0f, 0x1.bf746ep-108f, 0.0f, 0.0f, 0x1.107784p-2f,
     0x1.aeeec4p-61f, 0.0f, 0.0f, 0.0f, 0x1.e90578p-115f, 0x1.cab402p-16f, 0.0f,
     0x1.960baap-5f, 0x1.87518ep-114f, 0x1.7e5302p-108f, 0x1.812d28p-72f, 0.0f,
     0x1.607588p-79f, 0x1.c203d8p-21f, 0.0f, 0x1.bed9bp-63f, 0x1.84536cp-124f,
     0x1.6323d8p-44f, 0.0f, 0x1.c1ea7p-26f, 0x1.4f5c62p-24f, 0.0f, 0x1.f35f94p-112f,
     0.0f, 0x1.adf866p-25f, 0x1.f59c4cp-73f, 0.0f, 0.0f, 0x1.bdd598p-3f, 0.0f,
     0x1.94f15p-87f, 0x1.964f5cp-11f, 0x1.94c632p-123f, 0x1.7b9f8p-31f, 0.0f,
     0x1.2f7098p-93f, 0.0f, 0.0f, 0x1.f74ef8p-113f, 0.0f, 0.0f, 0.0f, 0x1.615048p-59f,
     0.0f, 0x1.aedc12p-17f, 0.0f, 0.0f, 0.0f, 0x1.d3ef0ap-76f, 0x1.42ec0ap-34f, 0.0f,
     0x1.11c3dcp-37f, 0.0f, 0x1.1e2184p-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.4896f6p-55f, 0x1.897a98p-90f, 0x1.fe90fp-44f, 0x1.6ab17ep-68f,
     0x1.f4583ap-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e109dap-49f, 0x1.13cf0ap-109f,
     0x1.8d19b2p-77f, 0.0f, 0x1.f2d912p-109f, 0x1.df91ep-87f, 0x1.e705ap-93f,
     0x1.15b6a2p-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.54309ap-123f,
     0x1.a38fd2p-117f, 0.0f, 0x1.7b62bep-28f, 0x1.0831b6p-119f, 0.0f, 0x1.6bcc88p-70f,
     0x1.34f1p-97f, 0x1.d3db0cp-59f, 0.0f, 0x1.6a49cep-98f, 0.0f, 0.0f,
     0x1.cc0afp-107f, 0.0f, 0.0f, 0x1.c5989cp-11f, 0x1.86e1a6p-89f, 0.0f,
     0x1.b82826p-25f, 0x1.189444p-14f, 0.0f, 0x1.6a5fc2p-77f, 0.0f, 0.0f, 0.0f,
     0x1.f086c2p-89f, 0x1.6c205p-22f, 0.0f, 0x1.230f7cp-56f, 0.0f, 0.0f,
     0x1.a074d6p-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3f7a7ap-6f, 0.0f, 0x1.63a7fp-87f,
     0.0f, 0x1.1a2f3ap-78f, 0.0f, 0.0f, 0x1.5ad97p-96f, 0x1.9d3f72p-54f,
     0x1.339172p-16f, 0.0f, 0x1.c829eep-43f, 0x1.d51f56p-14f, 0x1.dcd6dep-32f,
     0x1.342ae4p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.553c62p-97f, 0.0f, 0x1.b2237cp-47f,
     0.0f, 0x1.2019fep-55f, 0x1.1c634ap-71f, 0.0f, 0x1.ba007p-43f, 0x1.5d48cp-81f,
     0.0f, 0x1.caa246p-30f, 0x1.2b9284p-73f, 0x1.21cd06p-60f, 0x1.023d7p-32f, 0.0f,
     0.0f, 0x1.bcfb72p-117f, 0.0f, 0x1.4e3a22p-93f, 0.0f, 0.0f, 0x1.c7f6fp-5f, 0.0f,
     0x1.99a18cp-9f, 0.0f, 0.0f, 0x1.63add4p-90f, 0.0f, 0x1.d86a48p-30f, 0.0f, 0.0f,
     0x1.19430ep-12f, 0.0f, 0x1.8e609p-110f, 0.0f, 0.0f, 0.0f, 0x1.0254bp-111f,
     0x1.12645ep-71f, 0.0f, 0x1.d0b9ecp-12f, 0.0f, 0x1.fe037ep-104f, 0x1.7b0ab4p-49f,
     0x1.3cc1c6p-34f, 0.0f, 0x1.b62688p-100f, 0.0f, 0.0f, 0.0f, 0x1.247a8cp-82f,
     0x1.f1c302p-112f, 0x1.4ab92ap-56f, 0x1.9ce776p-47f, 0x1.1e5134p-121f,
     0x1.48413cp-46f, 0.0f, 0.0f, 0.0f
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
    
    global_bench_acc = 0.0f;
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
        float bench_acc;
        int32_t i;
        __m128 carg;
        __m128 carg1;
        __m128 carg2;
        float tmp0;
        int32_t tmp1;

        i = INT32_C(0);
        bench_acc = 0.0f;

        for (;(i < INT32_C(1001));){
            float tmp0;
            float tmp1;
            float tmp2;
            __m128 carg;
            __m128 carg1;
            __m128 carg2;
            float tmp3;
            int32_t tmp4;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = external_bench_wrapper_input_table_arg1[i];
            tmp2 = Sleef_fminf1_purecfma(tmp0, tmp1);
            external_bench_wrapper_output_table[i] = tmp2;
            carg = _mm_set_ss(bench_acc);
            carg1 = _mm_set_ss(tmp2);
            carg2 = _mm_add_ss(carg, carg1);
            tmp3 = _mm_cvtss_f32(carg2);
            bench_acc = tmp3;
            tmp4 = i + INT32_C(1);
            i = tmp4;
        }
        carg = _mm_set_ss(global_bench_acc);
        carg1 = _mm_set_ss(bench_acc);
        carg2 = _mm_add_ss(carg, carg1);
        tmp0 = _mm_cvtss_f32(carg2);
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
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_fminf1_purecfma %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_fminf1_purecfma bench acc %a\n", global_bench_acc);
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
