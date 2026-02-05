/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_fabsf1_purecfma.c --function \
 *     Sleef_finz_fabsf1_purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --bench --no-embedded-bin --target x86_sse2
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
     0x1.12f964p-37f, 0x1.d6b5a8p-59f, 0x1.89c73cp-75f, 0.0f, 0.0f, 0x1.86b61ap-13f,
     0.0f, 0.0f, 0.0f, 0x1.29110cp-20f, 0.0f, 0.0f, 0.0f, 0x1.d299f2p-83f, 0.0f,
     0x1.45c5dcp-61f, 0.0f, 0x1.410eccp-118f, 0x1.84f258p-83f, 0.0f, 0x1.bd10f4p-94f,
     0.0f, 0x1.4a5d12p-90f, 0x1.c5578ep-31f, 0.0f, 0.0f, 0x1.fcb594p-104f, 0.0f, 0.0f,
     0x1.873836p-26f, 0.0f, 0x1.23b56ep-54f, 0.0f, 0x1.4b7bd6p-38f, 0x1.685feep-20f,
     0.0f, 0x1.0d164ap-44f, 0.0f, 0x1.0aa13ap-114f, 0.0f, 0x1.444852p-25f,
     0x1.630984p-91f, 0.0f, 0.0f, 0x1.a51aacp-115f, 0x1.03b2cp-65f, 0x1.3443dep-37f,
     0x1.bd44fcp-34f, 0x1.7e2ad6p-16f, 0x1.2d44f2p-1f, 0.0f, 0.0f, 0x1.5ba50ap-105f,
     0x1.1dd3d8p-79f, 0.0f, 0x1.edd8p-89f, 0x1.eaccc6p-29f, 0x1.509bfcp-71f,
     0x1.689ed6p-59f, 0x1p0f, 0.0f, 0x1.54d116p-36f, 0x1.dabe66p-124f, 0.0f, 0.0f,
     0x1.7f5d5ep-63f, 0x1.80941ap-61f, 0x1.7f8e0ap-110f, 0x1.b2914p-96f, 0.0f, 0.0f,
     0x1.14871ap-99f, 0x1.04d5aap-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b437a4p-93f, 0.0f, 0x1.73a706p-75f, 0x1.80f2e8p-36f, 0x1.2daa5ep-82f,
     0x1.0c8cap-115f, 0.0f, 0.0f, 0.0f, 0x1.51e668p-113f, 0x1.91ad5ap-93f, 0.0f,
     0x1.0e0788p-72f, 0x1.b6e492p-20f, 0.0f, 0x1.83fc9ep-54f, 0.0f, 0x1.81bbap-69f,
     0x1.60b28cp-7f, 0x1.dc2dd2p-115f, 0.0f, 0.0f, 0x1.4dd62ep-64f, 0.0f,
     0x1.0567bcp-47f, 0.0f, 0x1.4eaaep-9f, 0.0f, 0x1.e69f16p-97f, 0.0f, 0.0f, 0.0f,
     0x1.02fbd2p-5f, 0x1.246776p-19f, 0.0f, 0x1.07c35p-99f, 0x1.e876aap-15f, 0.0f,
     0x1.4b3164p-62f, 0.0f, 0x1.18ca9p-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.51d22cp-71f, 0.0f, 0.0f, 0x1.4fc3fep-11f, 0x1.41b5cap-56f, 0x1.377a0ep-1f,
     0x1.f01896p-103f, 0x1.66e83ep-115f, 0.0f, 0.0f, 0x1.570fbp-16f, 0x1.7a7e2p-41f,
     0x1.25b076p-5f, 0.0f, 0x1.7b5b9ep-81f, 0x1.90b81p-81f, 0x1.1de536p-104f, 0.0f,
     0x1.689p-13f, 0x1.20b2aap-18f, 0.0f, 0x1.d89f88p-13f, 0.0f, 0.0f,
     0x1.4b2f8ap-109f, 0x1.1f0a68p-5f, 0.0f, 0.0f, 0x1.6304c2p-20f, 0.0f, 0.0f,
     0x1.041eaap-30f, 0x1.94b74ap-31f, 0.0f, 0x1.22185ap-10f, 0x1.2c4148p-116f, 0.0f,
     0x1.a10d76p-7f, 0.0f, 0.0f, 0x1.54feecp-29f, 0.0f, 0x1.5a5582p-47f,
     0x1.5a25e2p-77f, 0.0f, 0.0f, 0x1.e05232p-71f, 0.0f, 0.0f, 0x1.2f0846p-53f,
     0x1.51768cp-7f, 0x1.04216p-54f, 0x1.616d0ep-111f, 0.0f, 0x1.1dbaf6p-62f,
     0x1.eedf4p-64f, 0.0f, 0.0f, 0x1.f23e54p-51f, 0x1.5252b4p-8f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.90ddf8p-82f, 0x1.70cba6p-33f, 0x1.c965a6p-22f, 0x1.183504p-8f,
     0x1.bd6558p-56f, 0.0f, 0.0f, 0x1.db817p-123f, 0x1.590584p-119f, 0.0f, 0.0f, 0.0f,
     0x1.2621dap-91f, 0x1.87f71cp-62f, 0x1.e5bad4p-88f, 0x1.f7acb2p-105f,
     0x1.05f3bcp-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8c5f12p-98f,
     0x1.237be4p-61f, 0.0f, 0x1.ce421p-108f, 0.0f, 0.0f, 0x1.e0dc88p-77f,
     0x1.82f106p-116f, 0x1.b6fa04p-95f, 0x1.249274p-98f, 0.0f, 0x1.36529p-85f,
     0x1.993b3ap-11f, 0x1.680fp-60f, 0.0f, 0x1.4c0f5ep-38f, 0x1.638be6p-96f,
     0x1.f0fbc6p-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2ef5dep-63f,
     0x1.7888e4p-37f, 0x1.ec88cp-3f, 0x1.7c5f28p-52f, 0.0f, 0x1.3b42p-19f,
     0x1.663072p-84f, 0.0f, 0x1.62bceap-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7a10dep-107f,
     0.0f, 0.0f, 0.0f, 0x1.cc93e6p-65f, 0.0f, 0x1.f8fadap-119f, 0x1p0f, 0.0f, 0.0f,
     0x1.24f676p-104f, 0x1.4a434ap-28f, 0.0f, 0x1.217488p-97f, 0x1.9eeb58p-83f, 0.0f,
     0.0f, 0x1.ff8722p-34f, 0x1.71c776p-41f, 0.0f, 0x1.6299f6p-95f, 0.0f,
     0x1.14364cp-33f, 0.0f, 0.0f, 0.0f, 0x1.a90016p-122f, 0.0f, 0x1.3604dp-53f,
     0x1.57caa2p-30f, 0.0f, 0x1.78883p-75f, 0.0f, 0.0f, 0.0f, 0x1.7555c4p-40f,
     0x1.626642p-87f, 0.0f, 0x1.319892p-46f, 0.0f, 0x1.9c58f6p-5f, 0x1.4eb01ep-3f,
     0.0f, 0.0f, 0x1.63ba7ep-12f, 0x1.1b333cp-70f, 0.0f, 0x1.a36f6ep-11f,
     0x1.645a8ap-8f, 0x1.96f66cp-70f, 0x1.a7b2eep-64f, 0x1.8e0b2ap-125f, 0.0f,
     0x1.1727aep-56f, 0.0f, 0.0f, 0x1.311d9p-45f, 0.0f, 0x1.2152a6p-23f, 0.0f,
     0x1.429b1p-13f, 0x1.1fa38ep-78f, 0.0f, 0x1.aef118p-11f, 0x1.cca3fap-110f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.709dbap-32f, 0.0f, 0x1.7423fp-107f, 0.0f, 0.0f,
     0x1.f4c362p-104f, 0x1.68f476p-86f, 0.0f, 0x1.6576e4p-54f, 0x1.3bfe24p-37f, 0.0f,
     0.0f, 0.0f, 0x1.09a232p-94f, 0.0f, 0x1.34604p-42f, 0x1.74de9ap-79f,
     0x1.45409p-106f, 0.0f, 0.0f, 0x1.8580a2p-114f, 0x1.2348ecp-65f, 0x1.739df4p-58f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.39c514p-92f, 0.0f, 0x1.1f639ap-7f,
     0x1.b9d2eap-112f, 0.0f, 0x1.4c4cdp-86f, 0x1.30aa66p-90f, 0x1.1c979ep-105f, 0.0f,
     0x1.6614b4p-16f, 0.0f, 0x1.be05a4p-87f, 0x1.33afb8p-52f, 0x1.fe24f8p-107f, 0.0f,
     0.0f, 0x1.2ea7bcp-54f, 0x1.9af062p-81f, 0x1.3596aep-126f, 0x1.b1ab02p-15f, 0.0f,
     0.0f, 0x1.59a9a4p-63f, 0.0f, 0x1.644b6ep-50f, 0.0f, 0.0f, 0x1.b6f0ccp-50f, 0.0f,
     0x1.e50d9p-43f, 0x1.04dcc8p-79f, 0x1.9255bcp-19f, 0x1.5c873cp-32f, 0.0f, 0.0f,
     0x1.c91faep-31f, 0.0f, 0.0f, 0x1.0a96ap-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.de4d94p-80f, 0x1.d757fcp-91f, 0.0f, 0x1.db104cp-84f, 0x1.b51c78p-97f,
     0x1.13b264p-34f, 0x1.369b8ap-57f, 0.0f, 0x1.dceea4p-101f, 0x1.cf8caap-3f,
     0x1.228034p-10f, 0x1.0e93bcp-25f, 0x1.a9ddeep-35f, 0x1.a3e77ep-106f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.79c69ap-3f, 0x1.d61b68p-40f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5053bap-9f, 0.0f, 0x1.11e4d2p-20f, 0.0f, 0.0f, 0x1.9739b2p-102f,
     0x1.96b0dap-2f, 0x1.a86738p-112f, 0x1.298606p-63f, 0x1.dc12d6p-97f, 0.0f,
     0x1.1e881cp-93f, 0x1.07ae42p-69f, 0.0f, 0.0f, 0.0f, 0x1.65190ap-10f,
     0x1.6003f8p-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0ff9b6p-18f, 0x1.e34142p-15f, 0.0f,
     0.0f, 0x1.a5a82ap-3f, 0.0f, 0.0f, 0.0f, 0x1.a9bb68p-112f, 0.0f, 0x1.86a982p-102f,
     0x1.5f6334p-51f, 0.0f, 0x1.eb54e2p-55f, 0.0f, 0x1.22638ep-65f, 0.0f,
     0x1.32cd56p-50f, 0.0f, 0.0f, 0x1.a85e2ap-117f, 0.0f, 0x1.e40d7cp-49f, 0.0f, 0.0f,
     0x1.3d4a78p-110f, 0x1.c858e8p-116f, 0x1.ff541ap-4f, 0x1.71782p-79f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.8992e8p-98f, 0x1.04296ap-121f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bdaa66p-58f, 0.0f, 0x1.e60a9cp-117f, 0.0f, 0x1.952de6p-90f, 0x1.806504p-118f,
     0x1.a0f418p-60f, 0.0f, 0x1.3eb746p-49f, 0.0f, 0.0f, 0.0f, 0x1.7a688ap-80f,
     0x1.bdd272p-115f, 0.0f, 0.0f, 0.0f, 0x1.4933dcp-4f, 0.0f, 0.0f, 0x1.d7b67ap-116f,
     0.0f, 0x1.d9aeacp-97f, 0.0f, 0.0f, 0.0f, 0x1.3c0cd8p-80f, 0x1.989c36p-40f, 0.0f,
     0.0f, 0x1.a10906p-1f, 0.0f, 0.0f, 0x1.1fdf96p-32f, 0x1.59ae3ap-125f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.fec2bp-29f, 0.0f, 0x1.4c6b64p-87f, 0x1.618372p-74f,
     0x1.034accp-56f, 0.0f, 0x1.ae09ep-35f, 0.0f, 0x1.7723a4p-3f, 0x1.25d714p-31f,
     0x1.9c36c2p-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7931cp-34f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6cffe8p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fcf4e4p-39f,
     0x1.151e4ep-8f, 0x1.480b32p-50f, 0.0f, 0x1.9cc1a2p-93f, 0.0f, 0x1.0e9138p-116f,
     0x1.76a7ap-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cbb472p-49f,
     0x1.4c9f16p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d123e6p-61f, 0x1.a21998p-71f,
     0x1.d53224p-3f, 0.0f, 0.0f, 0.0f, 0x1.43dbccp-120f, 0x1.3756bp-5f, 0.0f,
     0x1.6f6932p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bfb3dcp-54f, 0.0f, 0.0f,
     0x1.19ef8ep-79f, 0.0f, 0.0f, 0x1.182386p-50f, 0.0f, 0x1.021268p-92f, 0.0f, 0.0f,
     0x1.987dc4p-3f, 0x1.2c545p-93f, 0x1.fb0e8ep-122f, 0.0f, 0.0f, 0.0f,
     0x1.39446p-48f, 0.0f, 0x1.85f692p-15f, 0.0f, 0.0f, 0x1.a45fap-86f,
     0x1.fcad5ep-52f, 0x1.6c3c6cp-92f, 0.0f, 0.0f, 0x1.a886fep-32f, 0.0f,
     0x1.5fc9ecp-79f, 0x1.47450ep-71f, 0x1.aa2d6ep-120f, 0x1.ae88fcp-81f,
     0x1.6ab8e6p-22f, 0x1.d3d9dcp-36f, 0x1.ed5b2ap-119f, 0.0f, 0.0f, 0x1.47c87p-76f,
     0x1.bb5c6ap-32f, 0x1.c04ap-73f, 0.0f, 0.0f, 0x1.e0c4ecp-116f, 0x1.77f092p-124f,
     0x1.dd199p-40f, 0.0f, 0.0f, 0.0f, 0x1.8d37a8p-72f, 0x1.ebda08p-47f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.78e526p-124f, 0.0f, 0x1.dab088p-30f,
     0x1.e5874p-6f, 0.0f, 0.0f, 0x1.387c32p-8f, 0x1.c366d2p-123f, 0x1.a5b056p-48f,
     0x1.28e0a6p-22f, 0x1.dae706p-51f, 0.0f, 0.0f, 0x1.333eb4p-82f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ba5df2p-75f, 0x1.cf8984p-122f, 0.0f, 0.0f, 0x1.75a9f6p-91f, 0.0f,
     0x1.0cec04p-15f, 0x1.183192p-67f, 0x1.68cf84p-125f, 0.0f, 0x1.981e6p-90f, 0.0f,
     0.0f, 0.0f, 0x1.f65756p-111f, 0x1.277edcp-86f, 0x1.e4e37cp-117f, 0x1.7c6576p-27f,
     0x1.79b306p-109f, 0x1.0b06b8p-75f, 0.0f, 0x1.e6b41cp-115f, 0x1.a7a484p-99f, 0.0f,
     0x1.23d022p-27f, 0x1.1a24fcp-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4fa2bap-45f, 0x1.65e03ap-96f, 0x1.e276c4p-103f, 0x1.e44b32p-73f, 0.0f,
     0x1.b693c8p-89f, 0.0f, 0x1.2e552ep-57f, 0x1.432edap-19f, 0.0f, 0x1.6fe46cp-111f,
     0x1.dcd5d8p-81f, 0.0f, 0x1.3a1db6p-21f, 0x1.ddc19p-114f, 0.0f, 0x1.e9274cp-120f,
     0x1.a12d52p-34f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.61250ap-5f,
     0x1.9ad386p-110f, 0x1.806da4p-92f, 0x1.2f14c2p-75f, 0.0f, 0.0f, 0x1.ff2c6p-35f,
     0x1.b37676p-57f, 0x1.b68ebcp-93f, 0x1.6c6da4p-84f, 0.0f, 0x1.2b783p-104f,
     0x1.1083ecp-85f, 0x1.eb3bb6p-95f, 0x1.4be54p-30f, 0.0f, 0x1.77679cp-119f,
     0x1.0ed1c4p-4f, 0x1.57ef32p-66f, 0.0f, 0.0f, 0x1.6b47aap-36f, 0.0f,
     0x1.548c92p-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5a0d32p-104f, 0.0f, 0.0f, 0x1.3583c2p-122f, 0.0f, 0.0f, 0x1.18e392p-110f,
     0x1.6988ep-16f, 0.0f, 0x1.6c815cp-91f, 0.0f, 0x1.6668ep-4f, 0.0f, 0.0f,
     0x1.ea64dep-81f, 0x1.eb3292p-80f, 0.0f, 0x1.172d48p-4f, 0x1.bc2e76p-74f, 0.0f,
     0x1.a7df3ap-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bd1d0ep-60f, 0x1.9b2b5p-34f,
     0x1.5e83e6p-4f, 0.0f, 0x1.74c498p-7f, 0.0f, 0x1.8a2beap-91f, 0x1.4d718p-103f,
     0.0f, 0x1.7a793p-61f, 0.0f, 0x1.358854p-111f, 0.0f, 0x1.64141p-121f,
     0x1.6f8d98p-35f, 0.0f, 0x1.494652p-2f, 0x1.2303bap-18f, 0x1.af4b06p-88f,
     0x1.83f5e6p-14f, 0.0f, 0.0f, 0x1.8d1f08p-110f, 0.0f, 0x1.7fc21cp-103f, 0.0f,
     0x1.a6e57ep-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4e22c6p-124f, 0x1.0f7d32p-94f, 0.0f,
     0x1.b2b5eep-60f, 0.0f, 0.0f, 0.0f, 0x1.0251aap-47f, 0.0f, 0x1.f91d82p-83f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d78966p-44f, 0x1.2f9138p-103f, 0x1.657c44p-106f,
     0x1.1322ap-76f, 0.0f, 0.0f, 0.0f, 0x1.4b1a58p-25f, 0x1.3ac622p-64f, 0.0f,
     0x1.9bdeeep-64f, 0x1.de6a8p-76f, 0.0f, 0.0f, 0x1.4d78f8p-48f, 0x1.bb0d98p-101f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b1939ap-31f, 0.0f, 0x1.6ec29cp-110f,
     0x1.0cd108p-79f, 0x1.63dabcp-31f, 0.0f, 0.0f, 0x1.b5e12ep-16f, 0x1.52843cp-113f,
     0.0f, 0x1.f01e62p-116f, 0.0f, 0.0f, 0.0f, 0x1.66f97ap-99f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.163e5ap-96f, 0.0f, 0.0f, 0.0f, 0x1.3af2a8p-4f, 0.0f, 0.0f,
     0x1.8633b6p-110f, 0.0f, 0.0f, 0x1.0585bcp-109f, 0x1.1128dp-14f, 0.0f,
     0x1.5d5adap-80f, 0.0f, 0x1.6bca8ap-125f, 0x1.791902p-108f, 0x1.03b8e2p-20f,
     0x1.c0e694p-48f, 0.0f, 0.0f, 0x1.c86a7cp-125f, 0x1.3d7f6ap-48f, 0x1.5cce4ap-91f,
     0x1.eb1186p-9f, 0.0f, 0.0f, 0x1.2b599p-14f, 0x1.ccb778p-72f, 0.0f, 0.0f,
     0x1.3e0116p-4f, 0x1.2a957p-29f, 0.0f, 0.0f, 0x1.9a4acp-53f, 0.0f,
     0x1.ed2fa4p-124f, 0.0f, 0x1.f0cbbp-73f, 0x1.4e933ep-117f, 0x1.564d4cp-49f,
     0x1.f15ccap-69f, 0x1.70e09ep-25f, 0x1.66033ep-37f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e96e44p-49f, 0.0f, 0x1.11511cp-11f, 0.0f, 0.0f, 0x1.982dbep-76f,
     0x1.5ec3ep-13f, 0x1.a9b44cp-92f, 0.0f, 0x1.384e74p-87f, 0.0f, 0x1.e9a858p-46f,
     0x1.458994p-89f, 0.0f, 0.0f, 0x1.1b706p-11f, 0x1.12435cp-109f, 0x1.df37ecp-114f,
     0.0f, 0x1.ba308p-61f, 0x1.f41dd4p-114f, 0x1.fa7b8cp-50f, 0.0f, 0x1.b9177ep-114f,
     0.0f, 0x1.6fff28p-78f, 0.0f, 0.0f, 0x1.8633f4p-96f, 0x1.54b796p-92f, 0.0f, 0.0f,
     0.0f, 0x1.7fd5e2p-116f, 0x1.5215cap-36f, 0x1.99c51cp-15f, 0.0f, 0.0f,
     0x1.c7aef6p-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f63462p-119f, 0x1.4c49b6p-14f,
     0.0f, 0x1.3146bp-34f, 0x1.f9dafep-18f, 0.0f, 0.0f, 0x1.92c066p-105f,
     0x1.8645bp-114f, 0x1.2c41cep-4f, 0.0f, 0x1.eddb46p-11f, 0.0f, 0x1.6d35acp-100f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0f6f48p-118f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.36c108p-81f, 0x1.4d8f4cp-122f, 0x1.c6409ap-47f, 0x1.2d3b42p-107f, 0.0f,
     0x1.18122p-83f, 0x1.5ad786p-36f, 0.0f, 0x1.9fd18ap-26f, 0x1.697fcap-27f,
     0x1.c32952p-33f, 0.0f, 0x1.20929ep-49f, 0.0f, 0.0f, 0x1.018068p-115f,
     0x1.0e4a1cp-13f, 0.0f, 0x1.73ed2ap-110f, 0x1.23ab08p-117f, 0x1.162a9ap-14f, 0.0f,
     0.0f, 0x1.a12d0cp-42f, 0.0f, 0x1.fc9cfap-62f, 0x1.4f94b8p-20f, 0.0f,
     0x1.6586dcp-30f
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
            __m128 carg;
            __m128 carg1;
            __m128 carg2;
            float tmp2;
            int32_t tmp3;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_finz_fabsf1_purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            carg = _mm_set_ss(bench_acc);
            carg1 = _mm_set_ss(tmp1);
            carg2 = _mm_add_ss(carg, carg1);
            tmp2 = _mm_cvtss_f32(carg2);
            bench_acc = tmp2;
            tmp3 = i + INT32_C(1);
            i = tmp3;
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
    printf("Sleef_finz_fabsf1_purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_fabsf1_purecfma bench acc %a\n", global_bench_acc);
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
