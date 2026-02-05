/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_sincospif1_u05purecfma.c --function \
 *     Sleef_sincospif1_u05purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.290c04p-103f, 0.0f, 0.0f, 0x1.c285c8p-23f, 0.0f, 0.0f, 0x1.cacfaap-121f,
     0x1.49a59cp-45f, 0x1.90047p-113f, 0.0f, 0x1.63b5fep-16f, 0.0f, 0x1.768a9cp-12f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c7fa72p-50f, 0x1.794352p-46f, 0x1.cc8b9ep-26f,
     0x1.ed967ep-93f, 0x1.efaf82p-60f, 0x1.51d4d4p-108f, 0x1.6b82cp-42f, 0.0f, 0.0f,
     0x1.0feb1ap-113f, 0.0f, 0x1.7ffb36p-83f, 0.0f, 0x1.f2059p-38f, 0.0f,
     0x1.87002ap-33f, 0.0f, 0x1.8fff86p-109f, 0.0f, 0.0f, 0x1.0b7574p-83f, 0.0f,
     0x1.ff360cp-70f, 0x1.8f0cdap-107f, 0.0f, 0x1.63a68p-126f, 0.0f, 0x1.117334p-119f,
     0x1.bdec2cp-111f, 0x1.b1dcdp-25f, 0x1.7c2e2cp-37f, 0.0f, 0.0f, 0x1.ba3c2ep-6f,
     0x1.30a2a2p-14f, 0x1.96d946p-64f, 0.0f, 0.0f, 0.0f, 0x1.eb1fdap-86f, 0.0f,
     0x1.39ee9p-102f, 0.0f, 0.0f, 0x1.714cdp-22f, 0.0f, 0x1.5655a4p-94f, 0.0f,
     0x1.36b028p-113f, 0.0f, 0.0f, 0x1.71e0dap-69f, 0.0f, 0.0f, 0x1.af1962p-50f,
     0x1.5e0a5p-12f, 0.0f, 0x1.05e392p-59f, 0x1.d0f668p-87f, 0.0f, 0x1.f069fap-65f,
     0x1.0c516ep-11f, 0x1.879292p-22f, 0x1.8ab47ep-115f, 0.0f, 0x1.14bbd4p-20f,
     0x1.ad395cp-67f, 0x1.fdcaaap-97f, 0x1.7ef05ep-52f, 0x1.78c306p-18f, 0.0f,
     0x1.f6386ep-48f, 0.0f, 0.0f, 0x1.28f474p-110f, 0x1.6db256p-60f, 0x1.b50d96p-53f,
     0.0f, 0.0f, 0x1.830d56p-97f, 0.0f, 0x1.b3514p-10f, 0x1.fdf002p-109f,
     0x1.78845p-54f, 0x1.c8168ep-59f, 0x1.ea79fep-65f, 0.0f, 0x1.dbd638p-3f, 0.0f,
     0x1.4fb17p-76f, 0.0f, 0x1.572ff4p-8f, 0.0f, 0x1.b045eep-122f, 0.0f, 0.0f,
     0x1.0aa116p-11f, 0.0f, 0x1.a2cab4p-57f, 0.0f, 0x1.235bbep-67f, 0x1.faa23ep-74f,
     0.0f, 0x1.39cd4ap-100f, 0x1.ee571ep-101f, 0x1.e5f898p-66f, 0x1.6aed08p-124f,
     0x1.73daf2p-1f, 0x1.78e2aep-19f, 0x1.d4ed1ap-30f, 0.0f, 0x1.bf74cp-62f,
     0x1.42ae98p-78f, 0x1.9d9dc6p-86f, 0.0f, 0x1.7f1e58p-18f, 0x1.ceb17ap-115f, 0.0f,
     0x1.79e7a2p-34f, 0.0f, 0.0f, 0x1.edd5dap-55f, 0.0f, 0.0f, 0.0f, 0x1.abc11ap-28f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.12bce4p-44f, 0x1.d0426ep-117f,
     0x1.5bea0ep-1f, 0x1.57ecb4p-36f, 0x1.55712ep-123f, 0x1.36fe5cp-57f, 0.0f,
     0x1.519062p-97f, 0.0f, 0x1.429ce2p-99f, 0x1.c56d84p-90f, 0x1.caab7p-110f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ce1e82p-8f, 0x1.73dc5ep-102f, 0x1.fa43e6p-8f,
     0x1.885f92p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bdb7c4p-88f, 0x1.858f92p-25f,
     0x1.7caf42p-48f, 0x1.88a596p-89f, 0.0f, 0x1.09604p-112f, 0x1.cd7ea8p-11f,
     0x1.d90fep-42f, 0x1.5b813ap-5f, 0.0f, 0x1.9d05e6p-68f, 0x1.a4f1fp-29f,
     0x1.5d8056p-63f, 0.0f, 0.0f, 0x1.903374p-26f, 0x1.8b1a7cp-24f, 0x1.ddc3a2p-109f,
     0.0f, 0.0f, 0x1.beac8ap-118f, 0x1.ae9148p-13f, 0x1.0c9fdep-112f, 0x1.b5d848p-30f,
     0x1.353f5ap-67f, 0x1.f18b28p-26f, 0x1.f0777ep-57f, 0.0f, 0x1.60b3d2p-69f, 0.0f,
     0x1.f32a36p-61f, 0x1.ecf9a2p-104f, 0.0f, 0x1.5d2446p-98f, 0x1.d4936ap-100f, 0.0f,
     0.0f, 0x1.4c7adap-99f, 0x1.1842b6p-3f, 0x1.f96182p-68f, 0x1.20869cp-89f,
     0x1.bcc024p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f91f5p-116f, 0x1.366066p-16f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e1cab2p-2f, 0.0f, 0.0f, 0x1.90094ep-36f, 0.0f, 0.0f,
     0x1.14f658p-32f, 0x1.a571fap-87f, 0x1.0f9256p-73f, 0.0f, 0x1.b5cb64p-97f, 0.0f,
     0x1.55254ap-122f, 0.0f, 0x1.3f8b6p-2f, 0x1.77efaap-6f, 0.0f, 0x1.b7390cp-116f,
     0.0f, 0.0f, 0x1.84ee98p-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7585cep-15f, 0.0f,
     0x1.18afeep-113f, 0.0f, 0x1.46a794p-119f, 0x1.a9ddacp-49f, 0.0f,
     0x1.046918p-123f, 0.0f, 0x1.50bbb8p-109f, 0.0f, 0x1.18af34p-61f, 0x1.54380ap-2f,
     0.0f, 0.0f, 0x1.827174p-70f, 0x1.17ed06p-108f, 0.0f, 0.0f, 0x1.ed4364p-103f,
     0.0f, 0.0f, 0x1.5a947p-36f, 0.0f, 0x1.6ee0dep-22f, 0.0f, 0.0f, 0x1.81cdccp-83f,
     0x1.5a554cp-99f, 0.0f, 0.0f, 0.0f, 0x1.8d485ap-41f, 0.0f, 0x1.dba39ap-85f,
     0x1.5d6698p-2f, 0x1.3ddf84p-28f, 0.0f, 0x1p0f, 0x1.34fda4p-76f, 0x1.f87302p-65f,
     0x1.adb2ep-113f, 0x1.543954p-78f, 0.0f, 0x1.3c82f4p-12f, 0.0f, 0x1.39d81ap-59f,
     0x1.0ec094p-44f, 0x1.991148p-75f, 0.0f, 0x1.a2474cp-70f, 0x1.6674bcp-30f,
     0x1.62bd7cp-10f, 0x1.8d29c4p-98f, 0x1.9424p-32f, 0x1.aa0ffap-61f, 0.0f, 0.0f,
     0x1.5483e2p-96f, 0.0f, 0.0f, 0x1.c4dd76p-2f, 0.0f, 0x1.565238p-119f, 0.0f,
     0x1.3a23d4p-73f, 0.0f, 0.0f, 0x1.d91a36p-91f, 0x1.af8eacp-114f, 0x1.465ad8p-119f,
     0.0f, 0.0f, 0x1.da0658p-100f, 0x1.450ccp-55f, 0x1.973812p-120f, 0.0f, 0.0f,
     0x1.c4810ep-12f, 0x1.6230b8p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.70a832p-39f, 0.0f,
     0x1.c8b56cp-87f, 0.0f, 0x1.ba98p-94f, 0x1.99d59cp-45f, 0.0f, 0x1.a8cd52p-91f,
     0x1.81393cp-64f, 0x1.613ebap-30f, 0.0f, 0x1.037172p-81f, 0.0f, 0x1.3c55a2p-62f,
     0x1.dabd36p-14f, 0x1.e6326ap-25f, 0.0f, 0x1.9e40eep-15f, 0.0f, 0.0f,
     0x1.ba28dep-68f, 0.0f, 0.0f, 0x1.126e72p-52f, 0.0f, 0x1.e1b3eep-55f, 0.0f,
     0x1.f9327ep-10f, 0.0f, 0x1.f5a038p-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.657ac8p-79f,
     0x1.5fd398p-111f, 0x1.6c18dcp-5f, 0x1.483bdep-107f, 0x1.bee062p-114f, 0.0f,
     0x1.c41d42p-8f, 0x1.0af496p-110f, 0.0f, 0x1.a40a6cp-4f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b7ec92p-58f, 0.0f, 0.0f, 0.0f, 0x1.586a8cp-68f, 0.0f, 0.0f,
     0x1.08d028p-2f, 0x1.2401b6p-59f, 0x1.442b8cp-126f, 0x1.0268bep-90f, 0.0f, 0.0f,
     0.0f, 0x1.aa07aep-16f, 0x1.a2ec6ap-62f, 0x1.8a169ap-40f, 0.0f, 0x1.2f2206p-18f,
     0x1.f54c2p-56f, 0x1.5ffa5cp-4f, 0x1.e6696ap-111f, 0x1.21250cp-106f, 0.0f,
     0x1.69e11cp-38f, 0.0f, 0.0f, 0x1.b37882p-45f, 0x1.4ad078p-31f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a728fep-29f, 0.0f, 0x1.9c4a14p-69f, 0x1.5ebe68p-51f, 0x1.a873a6p-63f,
     0.0f, 0x1.335c8ep-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b0cf04p-35f,
     0x1.57477ep-31f, 0.0f, 0x1.9d01f8p-34f, 0x1.7b112ep-36f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.19af6p-4f, 0x1.18f6aep-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.122b54p-62f,
     0x1.fbf598p-61f, 0x1.d51bd8p-26f, 0x1.ee9dap-106f, 0.0f, 0.0f, 0x1.412e4cp-16f,
     0x1.67c3c8p-40f, 0x1.e66098p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.54c96cp-8f, 0x1.b21cdcp-35f, 0.0f, 0x1.0b119ep-32f, 0x1.4378a2p-20f,
     0x1.1e7a3cp-42f, 0.0f, 0x1.0ef012p-35f, 0x1.2b395ep-63f, 0x1.5cf94ap-104f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.be5cfep-102f, 0.0f, 0x1.d3cb24p-120f,
     0x1.8e9f1ap-75f, 0x1.550572p-76f, 0x1.001b22p-95f, 0x1.0bc1fcp-66f,
     0x1.9f7198p-116f, 0x1.43e4a6p-27f, 0x1.24d27ap-26f, 0.0f, 0x1.a3865ap-82f, 0.0f,
     0.0f, 0x1.872478p-37f, 0.0f, 0x1.19c6b4p-43f, 0x1.f1bdc8p-26f, 0x1.14e7e4p-78f,
     0.0f, 0x1.8536e2p-69f, 0.0f, 0.0f, 0x1.ad1644p-90f, 0x1.436f3p-41f, 0.0f,
     0x1.8ff06ap-104f, 0x1.bd3eecp-90f, 0x1.182dcep-120f, 0.0f, 0x1.f432b2p-30f, 0.0f,
     0x1.55ceecp-45f, 0x1.6c1186p-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.38ab12p-73f, 0.0f,
     0.0f, 0x1.111f4ep-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.703c3cp-49f, 0.0f,
     0x1.b54e2p-88f, 0x1.232884p-118f, 0.0f, 0x1.3cfa4cp-96f, 0.0f, 0x1.2a4ac4p-12f,
     0x1.5951b2p-63f, 0x1.862e86p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a4add6p-94f,
     0x1.4a5bdap-103f, 0x1.f183e6p-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6fdf06p-30f,
     0x1.71ab0cp-4f, 0.0f, 0.0f, 0x1.ed9978p-43f, 0.0f, 0x1.a0454ep-51f, 0.0f, 0.0f,
     0x1.3a6e68p-98f, 0.0f, 0x1.405bcep-126f, 0x1.8b2834p-115f, 0.0f, 0.0f, 0.0f,
     0x1.4ab508p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.df7c5ep-62f, 0.0f, 0.0f,
     0x1.3145dp-49f, 0x1.201e3p-113f, 0x1.0509aep-98f, 0.0f, 0.0f, 0.0f,
     0x1.742b46p-16f, 0x1.823a58p-49f, 0x1.2a8e94p-35f, 0x1.25680ap-73f,
     0x1.76a154p-93f, 0x1.3c2636p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7a42bp-55f, 0.0f,
     0.0f, 0x1.bd0ad8p-63f, 0x1.2cd936p-107f, 0x1.4dedbcp-96f, 0.0f, 0x1.736274p-70f,
     0.0f, 0.0f, 0.0f, 0x1.f06e9ep-125f, 0x1.0adbf2p-44f, 0x1.735f08p-90f,
     0x1.5001bap-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9510b4p-63f, 0.0f, 0.0f,
     0x1.fff0a8p-105f, 0.0f, 0x1.e291a2p-80f, 0.0f, 0.0f, 0.0f, 0x1.d363a6p-18f, 0.0f,
     0x1.65e284p-76f, 0.0f, 0.0f, 0x1.3b3b9cp-70f, 0x1.60d90ap-68f, 0x1.3deea8p-6f,
     0x1.c7a63p-70f, 0.0f, 0x1.5da08ap-99f, 0x1.2c62e8p-46f, 0.0f, 0x1.c7a11p-123f,
     0.0f, 0x1.5de56ep-58f, 0x1.ecb36ap-44f, 0.0f, 0x1.bd495ep-10f, 0x1.c32a1cp-11f,
     0.0f, 0x1.405296p-105f, 0.0f, 0.0f, 0x1.9ee5e2p-74f, 0x1.c70fe8p-69f,
     0x1.7b5b52p-29f, 0x1.43da48p-77f, 0x1.24864ep-41f, 0x1.4d5f56p-123f, 0.0f, 0.0f,
     0.0f, 0x1.856c16p-43f, 0.0f, 0x1.a35e64p-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c332aap-7f, 0.0f, 0x1.df1692p-64f, 0x1.dc034ap-92f, 0.0f, 0.0f,
     0x1.d69936p-15f, 0.0f, 0.0f, 0x1.0564fcp-117f, 0x1.dafa9p-23f, 0.0f,
     0x1.71a0cap-43f, 0.0f, 0x1.d7cbbep-71f, 0x1.81e388p-119f, 0.0f, 0.0f, 0.0f,
     0x1.132f82p-33f, 0x1.bc6b5ap-58f, 0x1.2396cap-111f, 0x1p0f, 0x1.dcfa4ep-20f,
     0x1.30000ap-76f, 0.0f, 0x1.1dd712p-36f, 0x1.6ab7a4p-84f, 0x1.0a5006p-6f,
     0x1.907d88p-76f, 0.0f, 0x1.a9feep-101f, 0x1.0b1afap-15f, 0.0f, 0x1.102404p-13f,
     0x1.20001ep-45f, 0.0f, 0.0f, 0x1.928a3ap-38f, 0x1.82967cp-85f, 0x1.6dcdb2p-2f,
     0x1.5a6c98p-71f, 0x1.4e674p-104f, 0.0f, 0.0f, 0x1.5ba156p-33f, 0x1.8b3a3p-61f,
     0.0f, 0.0f, 0x1.d55b2ap-95f, 0.0f, 0x1.4ae216p-29f, 0x1.f5059ep-117f, 0.0f,
     0x1.513e2ep-101f, 0x1.83e156p-89f, 0x1.4cfa54p-87f, 0.0f, 0.0f, 0.0f,
     0x1.6b90aep-57f, 0x1.cfdf12p-76f, 0x1.9e486cp-39f, 0x1.e4c412p-67f, 0.0f,
     0x1.bcc31ep-109f, 0.0f, 0.0f, 0x1.1cf5dcp-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.027f38p-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e9afe2p-115f, 0.0f, 0x1.78c556p-107f, 0.0f, 0.0f, 0x1.9d068ep-22f,
     0x1.c542a4p-30f, 0.0f, 0x1.a2dda2p-13f, 0x1.29e978p-56f, 0.0f, 0.0f,
     0x1.8fc6dep-27f, 0x1.13911cp-46f, 0x1.01995ep-77f, 0.0f, 0.0f, 0x1.fecc0ap-54f,
     0.0f, 0.0f, 0x1.0ea46ep-58f, 0x1.b779a4p-104f, 0.0f, 0x1.81e9b6p-89f,
     0x1.e87728p-35f, 0x1.84e9b6p-45f, 0x1.00ea78p-119f, 0x1.2f50dep-77f,
     0x1.5afd9ap-115f, 0x1.384b28p-90f, 0.0f, 0x1.2fa4d4p-105f, 0.0f, 0x1.469c5ep-75f,
     0.0f, 0.0f, 0x1.200c84p-23f, 0x1.50e21ap-105f, 0.0f, 0.0f, 0x1.9710f4p-57f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.6fe87p-16f, 0.0f, 0.0f, 0x1.a76568p-116f, 0.0f, 0.0f,
     0x1.18c296p-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.42bd5p-83f,
     0x1.bbfb42p-53f, 0.0f, 0.0f, 0x1.4db17p-104f, 0.0f, 0x1.77fb84p-58f, 0.0f,
     0x1.4aa5d4p-119f, 0.0f, 0.0f, 0x1.4219aap-22f, 0x1.281714p-109f, 0x1.73915ap-46f,
     0x1.f8d278p-70f, 0x1.582038p-113f, 0.0f, 0.0f, 0.0f, 0x1.bfa3a6p-29f,
     0x1.d97f36p-10f, 0x1.7a867ep-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2d0144p-13f, 0.0f,
     0.0f, 0.0f, 0x1.f2158ap-19f, 0.0f, 0.0f, 0.0f, 0x1.05cb82p-109f, 0x1.6391c2p-68f,
     0.0f, 0.0f, 0x1.62a542p-10f, 0x1.13e84ap-90f, 0x1.eaf5f4p-85f, 0x1.8d593ep-104f,
     0.0f, 0.0f, 0x1.6bcbd2p-37f, 0.0f, 0.0f, 0.0f, 0x1.2ef658p-85f, 0.0f, 0.0f,
     0x1.e2a038p-40f, 0.0f, 0.0f, 0x1.ffa882p-103f, 0.0f, 0.0f, 0x1.063a64p-8f, 0.0f,
     0x1.2fbfdap-42f, 0x1.9ff34cp-114f, 0.0f, 0x1.cb39p-57f, 0x1.0e29f4p-31f, 0.0f,
     0x1.620386p-27f, 0x1.0ef74ep-19f, 0x1.48189ap-2f, 0.0f, 0x1.0f3208p-2f,
     0x1.4c19e2p-62f, 0x1.84db8ep-10f, 0x1.18676ep-124f, 0.0f, 0.0f, 0.0f,
     0x1.c6d33cp-126f, 0.0f, 0.0f, 0x1.f1cdecp-107f, 0x1.17046ep-81f, 0x1.b2f052p-62f,
     0x1.dae116p-48f, 0.0f, 0x1.da488ep-80f, 0x1.bdcde6p-25f, 0x1.155a26p-84f,
     0x1.3d1a5ap-45f, 0x1.e0e072p-40f, 0x1.165e1cp-85f, 0x1.daee32p-72f, 0.0f,
     0x1.08f7ecp-76f, 0x1.8f65f2p-64f, 0x1.d7fc1cp-14f, 0.0f, 0.0f, 0x1.32e03p-116f,
     0.0f, 0.0f, 0x1.f7abbap-95f, 0x1.6c161ep-74f, 0x1.0ededp-124f, 0x1.8a0cf8p-16f,
     0.0f, 0.0f, 0x1.24aeecp-72f, 0.0f, 0x1.319c54p-110f, 0x1.31a20ep-73f,
     0x1.bd64c4p-106f, 0.0f, 0x1.e82b8p-58f, 0x1.41032cp-93f, 0.0f, 0x1.f21dbcp-95f,
     0.0f, 0.0f, 0x1.61d72p-91f, 0x1.6ffd2p-6f, 0.0f, 0x1.724c5ep-86f, 0.0f, 0.0f,
     0x1.51f424p-84f, 0.0f, 0x1.78c84ap-98f, 0x1.5a170ap-107f, 0x1.81f73cp-62f,
     0x1.c091cep-39f, 0.0f, 0.0f, 0x1.6da6a8p-119f, 0x1.caba86p-110f, 0.0f,
     0x1.8f6d42p-88f, 0.0f, 0.0f, 0x1.d42bap-51f, 0x1.2295d6p-56f, 0.0f,
     0x1.008cc6p-82f, 0.0f, 0x1.b9dd6p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a7aef2p-43f, 0.0f, 0.0f, 0x1.da2a84p-95f, 0x1.9d1cp-85f, 0.0f,
     0x1.428c9ep-111f, 0x1.d59e7cp-113f, 0.0f, 0x1.0aafecp-85f, 0.0f, 0.0f,
     0x1.d02e6p-105f, 0x1.d9f624p-100f, 0.0f, 0.0f, 0x1.89bce6p-84f, 0x1.3aaebap-115f,
     0x1.089ecep-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.508782p-50f,
     0x1.1d5c48p-61f, 0x1.cceap-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e7e4c4p-29f,
     0x1.88c64cp-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e9907ep-33f, 0x1.40827ep-40f,
     0x1.b42aap-3f, 0x1.30fe1ep-72f, 0.0f, 0.0f, 0x1.ec577cp-84f, 0x1.d3773p-100f,
     0x1.f6165p-80f, 0.0f, 0x1.3f5eeap-83f
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
            tmp1 = Sleef_sincospif1_u05purecfma(tmp0);
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
    printf("Sleef_sincospif1_u05purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_sincospif1_u05purecfma bench acc {.x=%a, .y=%a}\n", global_bench_acc.x, global_bench_acc.y );
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
