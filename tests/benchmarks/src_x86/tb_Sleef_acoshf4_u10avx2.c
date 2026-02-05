/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_acoshf4_u10avx2128.c --function Sleef_acoshf4_u10avx2128 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 4 --function-input-vector-size 4 --bench \
 *     --no-embedded-bin --target x86_avx2128
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
     0.0f, 0.0f, 0.0f, 0x1.d14fap-79f, 0x1.38f8b4p-36f, 0x1.6ca9aap-32f,
     0x1.b2fc96p-101f, 0x1.e74bbp-19f, 0x1.3ffd82p-55f, 0.0f, 0x1.c33fd8p-99f, 0.0f,
     0.0f, 0x1.ed4d32p-29f, 0.0f, 0x1.e7a7dep-87f, 0.0f, 0.0f, 0.0f, 0x1.e339e6p-101f,
     0.0f, 0x1.366b0ep-28f, 0x1.d4d4eep-124f, 0x1.c6531p-66f, 0x1.d54a6p-50f, 0.0f,
     0x1.708b06p-93f, 0.0f, 0x1.648f1p-39f, 0x1.55f04p-60f, 0x1.a7028p-15f, 0.0f,
     0x1.30b166p-61f, 0.0f, 0.0f, 0x1.82444ap-39f, 0x1.dfc928p-60f, 0x1.f2fc8ep-61f,
     0x1.abdfa2p-88f, 0.0f, 0x1p0f, 0.0f, 0x1.896658p-49f, 0x1.569e0cp-59f, 0.0f,
     0.0f, 0x1.347e68p-13f, 0x1.7f164p-67f, 0.0f, 0x1.87d5dap-41f, 0x1.077b3p-84f,
     0x1.2f397ap-90f, 0x1.f30d2p-20f, 0x1.63f8c2p-62f, 0x1.a761f6p-27f, 0.0f, 0x1p0f,
     0x1.c4188p-64f, 0x1.2839cep-18f, 0.0f, 0x1.12e72ap-9f, 0x1.1d08ecp-5f,
     0x1.1d6c24p-19f, 0x1.ee06eap-12f, 0.0f, 0.0f, 0x1.d0769p-57f, 0x1.8ce36ap-120f,
     0.0f, 0.0f, 0.0f, 0x1.63f0d4p-81f, 0.0f, 0x1.c8a14p-16f, 0.0f, 0x1.86e294p-59f,
     0.0f, 0.0f, 0x1.087f38p-92f, 0.0f, 0x1.1dde84p-30f, 0x1.b10f48p-75f,
     0x1.5c94dap-58f, 0x1.542d96p-55f, 0x1.a4721ap-85f, 0x1.3991a4p-32f, 0.0f,
     0x1.4d4b04p-110f, 0.0f, 0.0f, 0x1.b17dcp-103f, 0x1.924518p-43f, 0x1.59852ap-49f,
     0x1.1f0a4ep-115f, 0x1.4a2782p-56f, 0.0f, 0x1.19d542p-59f, 0.0f, 0x1.f6113p-121f,
     0x1.0208c6p-10f, 0.0f, 0.0f, 0x1.737c8p-92f, 0x1.26e028p-27f, 0x1.b5e1ccp-123f,
     0x1.ae0a48p-50f, 0x1.cc6c2p-35f, 0x1.cbff32p-123f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ccef3ep-22f, 0x1.64593ap-119f, 0.0f, 0x1.0961a6p-20f, 0x1.9d9bbcp-81f,
     0x1.74d3ep-108f, 0.0f, 0.0f, 0.0f, 0x1.f7f3b8p-19f, 0x1.2a83a2p-51f, 0.0f,
     0x1.c233bap-23f, 0.0f, 0x1.fa0ep-88f, 0.0f, 0x1.6626c4p-97f, 0.0f,
     0x1.09402ap-69f, 0x1.127662p-85f, 0x1.2627aap-68f, 0x1.734d1cp-76f, 0.0f, 0.0f,
     0x1.8a594ap-2f, 0.0f, 0.0f, 0x1.96e354p-97f, 0.0f, 0.0f, 0x1.8b34bp-60f,
     0x1.c1fa68p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.53f70ap-37f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a8f8dep-67f, 0.0f, 0x1.b585bap-18f, 0x1.5cfde4p-121f, 0.0f,
     0x1.153888p-30f, 0x1.c9fe06p-3f, 0x1.d2be5cp-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.41f316p-103f, 0.0f, 0x1.a2f196p-70f, 0x1.859dc6p-40f, 0x1.a9cc6ep-35f,
     0x1.19e35ap-45f, 0.0f, 0.0f, 0x1.4081ap-74f, 0.0f, 0x1.1967ccp-94f,
     0x1.31905ep-90f, 0x1.76aea6p-21f, 0x1.2735d4p-33f, 0.0f, 0x1.e5691p-79f,
     0x1.bb999ep-93f, 0x1.765acap-41f, 0.0f, 0x1.050db2p-43f, 0.0f, 0.0f,
     0x1.b1501ap-41f, 0.0f, 0.0f, 0.0f, 0x1.272934p-24f, 0.0f, 0x1.b42adcp-90f,
     0x1p0f, 0x1.eab8a4p-39f, 0.0f, 0x1.b0ef2ap-56f, 0.0f, 0.0f, 0.0f,
     0x1.e1879ap-57f, 0x1.763c0ap-114f, 0x1.1e2616p-75f, 0.0f, 0x1.221e22p-58f,
     0x1.8a18cap-80f, 0x1.63dc94p-55f, 0x1p0f, 0.0f, 0.0f, 0x1.571e0ap-108f,
     0x1.5585ap-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d5a1dcp-90f, 0.0f, 0.0f,
     0x1.7d9638p-107f, 0x1.886c3ap-84f, 0x1.a0bd2cp-55f, 0x1.71bd7ep-12f, 0.0f, 0.0f,
     0x1.7e767ep-123f, 0x1.96e1aap-75f, 0.0f, 0.0f, 0x1.edf044p-116f,
     0x1.df70bcp-102f, 0x1.58cf44p-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0aeaf8p-62f, 0.0f,
     0.0f, 0x1.2a71ep-58f, 0x1.f63888p-52f, 0x1.6b2448p-114f, 0x1.18e926p-75f, 0.0f,
     0x1.0947dcp-28f, 0x1.3ba68cp-18f, 0.0f, 0x1.3ae992p-124f, 0x1.6c8d04p-43f, 0.0f,
     0x1.359c26p-68f, 0x1.926574p-115f, 0.0f, 0x1.2b836ep-41f, 0.0f, 0x1.0de822p-100f,
     0x1.42f97ep-59f, 0.0f, 0.0f, 0x1.5a220ap-113f, 0x1.184e44p-22f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ad3feep-16f, 0.0f, 0.0f, 0x1.48cbdcp-6f, 0x1.178a62p-13f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.95bf44p-61f, 0.0f, 0x1.465eaap-75f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.764556p-91f, 0.0f, 0.0f, 0x1.9772bcp-52f, 0x1.49accp-125f, 0x1.75fbap-112f,
     0x1.91dddcp-124f, 0.0f, 0.0f, 0x1.c04142p-22f, 0x1.def072p-56f, 0x1.e77936p-22f,
     0x1.e8877cp-119f, 0.0f, 0x1.832f94p-116f, 0x1.6a5b5ep-62f, 0x1.1fca4ap-106f,
     0x1.7e63b6p-74f, 0x1.f02c24p-10f, 0x1.fac854p-70f, 0.0f, 0.0f, 0x1.4db86ap-49f,
     0.0f, 0x1.05f19ep-36f, 0x1.4039cap-12f, 0x1.1ffbe6p-121f, 0x1.4e61bep-81f, 0.0f,
     0x1.d1ebp-12f, 0.0f, 0.0f, 0.0f, 0x1.3c246ep-103f, 0x1.04eb62p-112f,
     0x1.22cb24p-117f, 0.0f, 0x1.f241dep-49f, 0x1.c7437p-29f, 0x1.72581cp-56f,
     0x1.aae502p-25f, 0.0f, 0.0f, 0.0f, 0x1.25caa2p-88f, 0x1.0ec6f4p-2f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c724dap-44f, 0x1.71f582p-4f, 0x1.25785p-107f,
     0x1.c9d6e2p-71f, 0.0f, 0.0f, 0.0f, 0x1.8979cp-48f, 0.0f, 0x1.fa1fe6p-64f,
     0x1.0f14d8p-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d6f32ap-71f, 0x1.02971p-51f, 0.0f,
     0x1.80c196p-119f, 0x1.98ed5cp-100f, 0x1.6af56ep-30f, 0.0f, 0x1.88bd76p-26f,
     0x1.09e8acp-19f, 0.0f, 0.0f, 0.0f, 0x1.2e1698p-56f, 0.0f, 0.0f, 0x1.e5210ep-63f,
     0x1.294352p-49f, 0.0f, 0.0f, 0x1.005618p-113f, 0.0f, 0x1.2b4a0ep-29f,
     0x1.91ed3p-52f, 0x1.9996e2p-89f, 0.0f, 0x1.95fc88p-113f, 0.0f, 0x1.e33b9p-5f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.21e1ecp-106f, 0.0f, 0x1.ea97bp-17f,
     0x1.77a566p-72f, 0.0f, 0x1.91a2bep-88f, 0x1.d0d4b8p-54f, 0.0f, 0.0f, 0.0f,
     0x1.171b3p-122f, 0x1.c608eap-109f, 0.0f, 0.0f, 0x1.dfe7a2p-74f, 0x1.a4d2a6p-65f,
     0.0f, 0x1.aa5b8p-40f, 0x1.6fc9b6p-94f, 0.0f, 0.0f, 0x1.203488p-75f,
     0x1.2b2628p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8f732ep-61f,
     0x1.f3410ep-100f, 0x1.9b567cp-122f, 0.0f, 0x1.da3968p-82f, 0.0f, 0x1.6d3a1ap-7f,
     0.0f, 0x1.63f018p-62f, 0.0f, 0.0f, 0x1.c1a912p-71f, 0x1.30a49ep-68f, 0.0f,
     0x1.826e6cp-18f, 0.0f, 0x1.086dccp-123f, 0x1.923d6ap-58f, 0x1.998316p-94f, 0.0f,
     0.0f, 0x1.fad21ap-42f, 0x1.708584p-43f, 0.0f, 0.0f, 0x1.be2ba2p-126f, 0.0f,
     0x1.e2ae56p-110f, 0x1.c279c8p-64f, 0.0f, 0x1.6aa36cp-125f, 0.0f, 0x1.a539ccp-55f,
     0.0f, 0.0f, 0.0f, 0x1.7cb76ep-80f, 0x1.31fce2p-116f, 0x1.ef288cp-48f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d543f4p-12f, 0.0f, 0.0f, 0x1.469294p-7f, 0x1.73e5f8p-109f, 0.0f,
     0x1.6de27ap-42f, 0x1.7bafc6p-43f, 0.0f, 0.0f, 0x1.864f6ap-68f, 0x1.e81814p-90f,
     0.0f, 0.0f, 0x1.d3dadp-11f, 0.0f, 0.0f, 0x1.c5d594p-48f, 0x1.a97974p-87f, 0.0f,
     0.0f, 0.0f, 0x1.3e848ap-115f, 0x1.3fce04p-35f, 0x1.a583a4p-110f,
     0x1.4741d6p-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ffccfep-76f,
     0x1.44a762p-113f, 0.0f, 0.0f, 0x1.b71156p-48f, 0x1.81581p-33f, 0.0f,
     0x1.2cc40ep-4f, 0x1.0758dap-60f, 0.0f, 0x1.335cbp-23f, 0.0f, 0.0f,
     0x1.68074cp-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.38be02p-110f,
     0x1.4e87f2p-22f, 0.0f, 0.0f, 0x1.16a484p-56f, 0.0f, 0.0f, 0.0f, 0x1.21c448p-125f,
     0x1.a434fcp-11f, 0x1.073472p-16f, 0x1.6dccdap-31f, 0.0f, 0.0f, 0.0f,
     0x1.4a6efap-56f, 0x1.29ff3ap-3f, 0x1.634112p-17f, 0x1.8cfdcp-95f, 0.0f, 0.0f,
     0.0f, 0x1.539d0cp-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.63d3dap-20f, 0x1.58ba1ep-89f,
     0x1.3a431ep-69f, 0x1.91ad68p-112f, 0x1.e53874p-84f, 0.0f, 0.0f, 0.0f,
     0x1.359b36p-103f, 0x1.b8916cp-40f, 0.0f, 0x1.2ed76ep-88f, 0.0f, 0x1.5dfa9ap-74f,
     0x1.549ed6p-73f, 0x1.ea27b8p-46f, 0x1.0c25cp-116f, 0x1.d776f2p-74f,
     0x1.46f40ap-38f, 0x1.eff7cp-96f, 0x1.e589a6p-30f, 0x1.227206p-96f, 0.0f, 0.0f,
     0x1.a88686p-7f, 0.0f, 0x1.69ae0ep-112f, 0.0f, 0x1.fbe20cp-109f, 0x1.47a218p-26f,
     0x1.6f7c3p-28f, 0x1.3f942ap-125f, 0x1.2b6a74p-96f, 0.0f, 0x1.2baf7ep-5f, 0.0f,
     0x1.e823dcp-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.33782ep-65f, 0.0f, 0x1.86cd6p-119f,
     0.0f, 0x1.beba4ap-68f, 0x1.7ccf48p-21f, 0x1.4fb314p-29f, 0.0f, 0.0f,
     0x1.b3d362p-123f, 0.0f, 0x1.b07794p-7f, 0x1.a9126cp-47f, 0.0f, 0x1.07879p-54f,
     0x1.75f6ap-12f, 0x1.57074p-2f, 0x1.f4c206p-72f, 0x1.092cdcp-71f, 0x1.51faf2p-80f,
     0.0f, 0x1.1253d4p-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e4c72ap-58f, 0x1.fc752ep-67f,
     0.0f, 0.0f, 0x1.f79654p-78f, 0.0f, 0.0f, 0x1.ea0c2p-86f, 0x1.011f96p-12f, 0.0f,
     0x1.3abe58p-9f, 0x1.0a54aep-48f, 0.0f, 0.0f, 0.0f, 0x1.9550eep-40f, 0.0f,
     0x1.24b67ep-17f, 0x1.6b8c5cp-70f, 0.0f, 0.0f, 0x1.63da98p-59f, 0.0f, 0.0f, 0.0f,
     0x1.a349b2p-18f, 0.0f, 0x1.477342p-72f, 0.0f, 0.0f, 0x1.637eaap-12f,
     0x1.0a859ep-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.289d3ap-41f, 0.0f, 0x1.6a4568p-109f,
     0x1.757ca4p-96f, 0.0f, 0x1.92befp-62f, 0x1.9da402p-126f, 0.0f, 0.0f,
     0x1.d4a298p-17f, 0x1.4c89dcp-10f, 0.0f, 0x1.f32f86p-36f, 0x1.d08b2ap-35f,
     0x1.c2c838p-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.251524p-11f, 0.0f, 0.0f, 0.0f,
     0x1.b43f44p-36f, 0x1.92c282p-55f, 0x1.ac4796p-53f, 0x1.2397cap-92f, 0.0f,
     0x1.9dda4p-70f, 0.0f, 0.0f, 0.0f, 0x1.a4af96p-106f, 0x1.dfd468p-87f,
     0x1.f6d51ep-90f, 0.0f, 0x1.57fc08p-26f, 0x1.e1bd24p-50f, 0x1.0540f2p-15f,
     0x1.93a6fp-30f, 0x1.8a204p-69f, 0x1.015b16p-89f, 0x1.08be6ep-99f,
     0x1.51dfc4p-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.45c58p-124f, 0x1p0f, 0.0f,
     0.0f, 0.0f, 0x1.0ed2d2p-79f, 0x1.21239cp-39f, 0x1.717e0ep-38f, 0x1.d41a1cp-116f,
     0.0f, 0.0f, 0x1.2566p-18f, 0x1.deeb5ep-75f, 0x1.d2604ap-48f, 0.0f, 0.0f, 0.0f,
     0x1.216688p-119f, 0x1.856cbap-81f, 0.0f, 0.0f, 0.0f, 0x1.67472ap-11f, 0.0f,
     0x1.00618ep-101f, 0.0f, 0x1.01b066p-20f, 0x1.a1ddcp-118f, 0.0f, 0x1.8821fap-51f,
     0.0f, 0x1.0e6356p-22f, 0x1.575e1p-64f, 0x1.9bdc54p-79f, 0.0f, 0x1.aebe4p-33f,
     0.0f, 0x1.483132p-92f, 0.0f, 0.0f, 0x1.badcaep-78f, 0x1.9b26d6p-124f, 0.0f, 0.0f,
     0.0f, 0x1.8cb692p-60f, 0x1.7fdf42p-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7f1d7ap-54f,
     0x1.7a62f2p-113f, 0.0f, 0x1.8130d8p-52f, 0x1.d5e5a6p-107f, 0.0f, 0.0f, 0.0f,
     0x1.87ca1p-103f, 0x1.7fa0d8p-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.83e6acp-97f, 0.0f,
     0x1.6b9d58p-67f, 0x1.04c3c2p-125f, 0.0f, 0.0f, 0.0f, 0x1.a33f94p-90f,
     0x1.3b61aap-20f, 0x1.02f96ep-110f, 0x1.e82df2p-118f, 0.0f, 0x1.736a22p-66f, 0.0f,
     0x1.b6eecp-101f, 0.0f, 0.0f, 0x1.2dcac2p-114f, 0.0f, 0.0f, 0x1.159d74p-121f,
     0x1.7098b8p-35f, 0x1.3cff64p-101f, 0x1.2f0104p-22f, 0.0f, 0x1.2143c2p-122f, 0.0f,
     0x1.81cfb6p-20f, 0.0f, 0x1.0217dap-7f, 0x1.ebfae8p-27f, 0.0f, 0x1.1917eap-61f,
     0.0f, 0x1.15da98p-113f, 0x1.afea76p-79f, 0x1.345c18p-76f, 0x1.b779dep-76f,
     0x1.2e0c5cp-18f, 0.0f, 0x1.b55e4ep-75f, 0x1.54129cp-58f, 0x1.233e9cp-30f, 0.0f,
     0x1.29829ap-10f, 0.0f, 0.0f, 0x1.8c0652p-27f, 0.0f, 0.0f, 0x1.9cb682p-126f, 0.0f,
     0.0f, 0.0f, 0x1.5b2dbcp-47f, 0x1.fa96eap-118f, 0x1.e0d2d6p-46f, 0.0f,
     0x1.40615ep-86f, 0x1.ac06f8p-72f, 0.0f, 0x1.c2c514p-33f, 0x1.c47a08p-125f, 0.0f,
     0.0f, 0x1.9f5f56p-53f, 0.0f, 0x1.c64962p-19f, 0x1.e7472ep-117f, 0x1.f3ce98p-97f,
     0x1.cec6bcp-24f, 0x1.263564p-63f, 0.0f, 0.0f, 0x1.2fa87p-84f, 0x1.6afcd4p-122f,
     0x1p0f, 0x1.70ec66p-50f, 0.0f, 0.0f, 0.0f, 0x1.060cfp-4f, 0x1.eaeffap-54f,
     0x1.bc22f8p-70f, 0x1.19bc92p-30f, 0x1.d847b2p-42f, 0.0f, 0.0f, 0.0f,
     0x1.a395c6p-115f, 0x1.56a276p-22f, 0x1.daf5c6p-69f, 0x1.674764p-48f, 0.0f,
     0x1.a0af18p-64f, 0x1.c3b73ap-81f, 0x1.878ee6p-98f, 0x1.b4d1b4p-20f,
     0x1.3cb1f4p-81f, 0x1.e89524p-45f, 0.0f, 0x1.e8631ep-8f, 0.0f, 0x1.e7a77ep-36f,
     0x1.cdbbe6p-120f, 0.0f, 0.0f, 0x1.13afdcp-28f, 0x1.171d18p-24f, 0.0f, 0.0f,
     0x1.651508p-115f, 0x1.73b1c2p-60f, 0.0f, 0x1.790422p-61f, 0x1.af032p-69f,
     0x1.8f095ep-96f, 0.0f, 0x1.4a96c2p-52f, 0.0f, 0x1.e7cce6p-32f, 0.0f,
     0x1.ce8634p-57f, 0.0f, 0x1.66453ep-57f, 0x1.2b710cp-24f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.60c656p-126f, 0x1.4cd188p-6f, 0.0f, 0x1.e8aaap-56f,
     0x1.ad1aeap-41f, 0.0f, 0x1.49e6e4p-18f, 0.0f, 0x1.f6bdbcp-51f, 0.0f, 0.0f, 0.0f,
     0x1.c9943cp-66f, 0.0f, 0.0f, 0.0f, 0x1.7b5b56p-120f, 0.0f, 0x1.c353e8p-111f,
     0x1.4d5e2ep-14f, 0.0f, 0x1.608674p-102f, 0.0f, 0x1.894ep-24f, 0.0f,
     0x1.547908p-110f, 0.0f, 0x1.dacd78p-108f, 0x1.96d76cp-81f, 0.0f, 0.0f,
     0x1.1caf66p-80f, 0.0f, 0x1.045b44p-93f, 0.0f, 0x1.18622cp-81f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d45ca6p-51f, 0x1.245b26p-55f, 0x1.d2bfb2p-87f, 0.0f,
     0x1.7518eap-109f, 0.0f, 0x1.37942cp-121f, 0x1.e02488p-71f, 0.0f, 0.0f,
     0x1.7d4996p-104f, 0x1.345a56p-98f, 0x1.1e393p-100f, 0x1.939ff4p-15f,
     0x1.92f62p-35f, 0.0f, 0.0f, 0x1.d92954p-47f, 0.0f, 0.0f, 0x1.a1d1e4p-64f,
     0x1.3b90b8p-64f, 0x1.b2263p-62f, 0x1.a93d54p-38f, 0.0f, 0x1.f2693p-126f,
     0x1.a04886p-94f, 0x1.761fbep-33f, 0x1.7fcab4p-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.8a8476p-24f, 0x1.2cecb8p-106f, 0x1.11830cp-22f, 0x1.fe0a32p-107f,
     0.0f, 0x1.b4874ap-70f, 0.0f, 0.0f, 0x1.54f83ep-107f, 0.0f, 0x1.d13ffap-19f,
     0x1.5ce38ep-8f, 0x1.8eaf96p-106f, 0.0f, 0.0f, 0x1.409466p-58f, 0x1.69e9dp-93f,
     0x1.24241cp-119f, 0.0f, 0x1.911254p-39f, 0x1.a5e202p-19f, 0x1.728b9cp-125f, 0.0f,
     0.0f, 0x1.41a2fep-41f, 0.0f, 0x1.ac8436p-35f, 0.0f, 0x1.9dc402p-37f,
     0x1.c037eap-78f, 0x1.ef890ep-82f, 0.0f, 0x1.a129fep-14f, 0x1.e99e76p-62f,
     0x1.2c31dcp-40f, 0.0f, 0x1.69da8ep-99f, 0.0f, 0.0f, 0.0f, 0.0f
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
            tmp1 = Sleef_acoshf4_u10avx2128(tmp0);
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
    printf("Sleef_acoshf4_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_acoshf4_u10avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
