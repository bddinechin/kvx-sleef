/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_exp10f1_u10purecfma.c --function \
 *     Sleef_exp10f1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.69b2acp-41f, 0.0f, 0x1.cb6ffep-17f, 0.0f, 0x1.ad8d1ep-110f, 0.0f,
     0x1.cc3b4ap-113f, 0.0f, 0.0f, 0x1.000588p-28f, 0.0f, 0.0f, 0x1.6d4844p-80f,
     0x1.f0da18p-83f, 0x1.1e3694p-56f, 0x1.9b187ep-68f, 0x1.714c98p-35f,
     0x1.4d0cbp-77f, 0.0f, 0.0f, 0x1.a1e7b6p-26f, 0.0f, 0.0f, 0x1.ca5ac2p-61f,
     0x1.a4746cp-98f, 0.0f, 0x1.f0580cp-37f, 0.0f, 0.0f, 0x1.58461ep-17f, 0x1p0f,
     0.0f, 0.0f, 0x1.1a78b8p-77f, 0x1.5bb90ep-122f, 0x1.68243ap-109f, 0.0f, 0.0f,
     0.0f, 0x1.90365ap-94f, 0x1.37e304p-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.042bbcp-13f,
     0.0f, 0.0f, 0x1.911022p-120f, 0.0f, 0.0f, 0x1.0991dcp-40f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.67fbf6p-57f, 0x1.d311b6p-67f, 0.0f, 0x1.97975ep-74f,
     0x1.f55ed2p-112f, 0.0f, 0.0f, 0x1.95447ep-119f, 0x1.b55cap-115f, 0.0f,
     0x1.3465c8p-27f, 0.0f, 0.0f, 0x1.43eef2p-48f, 0x1.0b3e4p-99f, 0.0f,
     0x1.0c3d58p-32f, 0.0f, 0.0f, 0.0f, 0x1.dd64dap-73f, 0x1.a679a8p-2f, 0.0f,
     0x1.7458aap-115f, 0.0f, 0.0f, 0.0f, 0x1.4e82e2p-19f, 0.0f, 0x1.818374p-73f,
     0x1.f94b52p-71f, 0x1.40107ep-44f, 0.0f, 0x1.18a4e4p-123f, 0x1.6c389ap-108f, 0.0f,
     0.0f, 0.0f, 0x1.0fe16ap-50f, 0x1.edb608p-38f, 0x1.36272ap-4f, 0.0f,
     0x1.53b2dp-44f, 0x1.e3280ap-20f, 0.0f, 0x1.fa5de2p-1f, 0.0f, 0.0f,
     0x1.2aed76p-32f, 0x1.18156ap-108f, 0.0f, 0x1.81d5dcp-115f, 0.0f, 0x1.230718p-49f,
     0x1.1ebb24p-45f, 0x1.1bb0aep-49f, 0x1.6349e4p-112f, 0x1.c66bdep-91f, 0.0f,
     0x1.4c017ap-27f, 0x1.39162ap-58f, 0x1.66538ep-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.870c74p-10f, 0.0f, 0.0f, 0x1.d4c8e2p-103f, 0.0f, 0x1.05c8f6p-34f,
     0x1.f3757ep-2f, 0x1.e79c8ep-74f, 0.0f, 0x1.c13b4ep-70f, 0x1.a77862p-37f, 0.0f,
     0x1.8fd6f4p-42f, 0.0f, 0x1.91acdp-38f, 0x1.5c0d0cp-112f, 0.0f, 0x1.56a4f2p-14f,
     0x1.258766p-37f, 0.0f, 0.0f, 0.0f, 0x1.a8e22ap-50f, 0x1.3e9f62p-36f, 0.0f,
     0x1.34400cp-80f, 0x1.c03c4ap-112f, 0.0f, 0x1.f7aa16p-65f, 0x1.3b7184p-70f,
     0x1.a76394p-68f, 0.0f, 0x1.abac36p-2f, 0.0f, 0x1.550e4p-97f, 0.0f,
     0x1.58f9aap-119f, 0x1.662f5ep-9f, 0x1.40bc36p-126f, 0.0f, 0.0f, 0.0f,
     0x1.f42784p-76f, 0.0f, 0x1.1d9baep-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a8403cp-74f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.cbd374p-52f, 0.0f, 0.0f, 0.0f, 0x1.1d76b6p-122f,
     0x1.72543ep-47f, 0x1.424aacp-53f, 0x1.dc9bp-92f, 0.0f, 0x1.fbc8e2p-9f, 0.0f,
     0x1.1b1d72p-2f, 0x1.4ab43cp-69f, 0.0f, 0.0f, 0.0f, 0x1.cc1e08p-109f,
     0x1.630c4ap-4f, 0.0f, 0x1.340526p-109f, 0x1.b89802p-118f, 0x1.2a792cp-76f,
     0x1.9b4e58p-35f, 0x1.b25a04p-55f, 0.0f, 0.0f, 0.0f, 0x1.5b9faap-5f, 0.0f,
     0x1.40759p-82f, 0x1.21e028p-69f, 0.0f, 0x1.471b6cp-34f, 0x1.1994fp-83f,
     0x1.e38ce2p-20f, 0.0f, 0.0f, 0x1.189154p-96f, 0x1.b5ad0cp-86f, 0x1.c561b6p-125f,
     0x1.94343p-33f, 0x1.057c3cp-92f, 0.0f, 0x1.dc2d9p-108f, 0x1.1f349ep-40f, 0.0f,
     0.0f, 0x1.4b4bd4p-91f, 0.0f, 0x1.7a13bep-83f, 0x1.dc520ap-57f, 0x1.2a779ap-20f,
     0.0f, 0x1.ed7de2p-116f, 0.0f, 0x1.f62468p-80f, 0x1.391718p-80f, 0.0f, 0.0f,
     0x1.bfeab6p-38f, 0x1.6e52a8p-103f, 0x1.12449ap-105f, 0.0f, 0x1.c52192p-117f,
     0x1.95f06ep-30f, 0x1.e2f08cp-32f, 0x1.1250dap-39f, 0x1.d4fd84p-89f,
     0x1.93e8ecp-24f, 0x1.5f7f58p-22f, 0.0f, 0x1.17e982p-61f, 0.0f, 0.0f,
     0x1.ab4586p-26f, 0x1.53494p-35f, 0x1.449ea6p-78f, 0x1.2c2baep-52f,
     0x1.cc7528p-43f, 0.0f, 0x1.bbf01ep-97f, 0.0f, 0x1.d32d44p-126f, 0x1.f6e22ap-21f,
     0.0f, 0.0f, 0x1.5cd19p-21f, 0.0f, 0x1.5bf8e8p-118f, 0x1.944918p-4f,
     0x1.f6a964p-89f, 0x1.7fa3ecp-124f, 0x1.b1fc2p-72f, 0x1.1f05dep-90f,
     0x1.5ed5acp-85f, 0.0f, 0x1.02303ap-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e8657p-5f,
     0x1.39b364p-67f, 0.0f, 0.0f, 0x1.3182d6p-42f, 0.0f, 0.0f, 0x1.11000ap-121f,
     0x1.60fe22p-87f, 0.0f, 0.0f, 0x1.5a171ap-70f, 0x1.8e51dp-2f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.8c7b7cp-11f, 0.0f, 0x1.094ef8p-73f, 0.0f, 0.0f, 0x1.e51a5ep-108f,
     0x1.c05ce8p-19f, 0x1.c539aep-61f, 0x1.979c18p-28f, 0.0f, 0.0f, 0x1.201218p-93f,
     0x1.623604p-42f, 0.0f, 0x1.3c0152p-13f, 0x1.53de7cp-87f, 0x1.317a9ap-7f, 0.0f,
     0.0f, 0x1.d2ef36p-12f, 0x1.aa0282p-6f, 0.0f, 0.0f, 0.0f, 0x1.7ce448p-77f,
     0x1.711ac4p-117f, 0.0f, 0.0f, 0x1.8c2318p-119f, 0x1.99b71p-124f,
     0x1.3c2faap-102f, 0.0f, 0.0f, 0x1.dddd6cp-23f, 0x1.e66692p-118f, 0.0f,
     0x1.17471cp-120f, 0.0f, 0.0f, 0x1.a6827p-33f, 0x1.f5f2f4p-108f, 0.0f, 0.0f,
     0x1.f5aecap-35f, 0x1.f1b23p-1f, 0.0f, 0.0f, 0.0f, 0x1.6b3aa4p-73f,
     0x1.447364p-19f, 0x1.c61de8p-83f, 0x1.96dd6ep-39f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1ca4eep-57f, 0x1.99323ep-77f, 0x1.1c4ad6p-1f, 0x1.2e8c86p-44f, 0.0f,
     0x1.ee457ap-109f, 0x1.75347ep-85f, 0.0f, 0x1.53737cp-13f, 0.0f, 0x1.b7a35ep-55f,
     0x1.8e6738p-94f, 0.0f, 0.0f, 0x1.645e4p-55f, 0x1.16f988p-45f, 0x1.fcf1acp-124f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b31468p-83f, 0x1.88e182p-14f, 0x1.3101b8p-82f, 0.0f,
     0.0f, 0.0f, 0x1.ffe1p-88f, 0x1.425d1ap-22f, 0x1.60535p-125f, 0.0f, 0.0f,
     0x1.f3cd28p-114f, 0x1.ff099ep-103f, 0x1.aef598p-20f, 0x1.0c71a8p-28f, 0.0f,
     0x1.380e9cp-26f, 0.0f, 0.0f, 0x1.d1ff78p-96f, 0x1.b251fap-63f, 0x1.e9cbc4p-32f,
     0x1.8f7bbep-37f, 0x1.876664p-93f, 0.0f, 0.0f, 0x1.1c20a6p-29f, 0.0f, 0.0f,
     0x1.8112a8p-2f, 0x1.1950f8p-37f, 0x1.982deep-77f, 0x1.7110b6p-21f, 0.0f,
     0x1.801278p-8f, 0x1.ae4c92p-20f, 0.0f, 0.0f, 0x1.082776p-36f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.2a6684p-99f, 0x1.814a3ep-110f, 0x1.23f116p-124f,
     0.0f, 0x1.4e7acp-33f, 0.0f, 0x1.0fc208p-14f, 0.0f, 0x1.17d2f2p-100f,
     0x1.3d27ccp-1f, 0.0f, 0x1.18b678p-87f, 0.0f, 0.0f, 0.0f, 0x1.7dd2b2p-110f,
     0x1.a4d8a2p-19f, 0x1.389372p-40f, 0.0f, 0.0f, 0x1.b27f3cp-94f, 0.0f,
     0x1.5a7f48p-57f, 0x1.b90f34p-80f, 0x1.647e8cp-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.d30c6ap-126f, 0x1.cee8b6p-77f, 0x1.bba076p-56f, 0x1.588858p-5f,
     0x1.66fa7ap-126f, 0.0f, 0x1.40b72p-61f, 0x1.1f3abap-32f, 0x1.3ff9fcp-68f, 0.0f,
     0.0f, 0x1.366efep-114f, 0.0f, 0.0f, 0x1.e4b5aap-13f, 0.0f, 0.0f, 0x1.293e8p-22f,
     0.0f, 0x1.11eeb2p-64f, 0x1.ece826p-18f, 0x1.13dd2ep-124f, 0x1.66276cp-107f,
     0x1.205a3ep-100f, 0x1.22a72ap-81f, 0x1.7c2178p-82f, 0x1.7ba33ep-87f, 0.0f,
     0x1.7aac54p-11f, 0.0f, 0x1.7322c6p-6f, 0.0f, 0x1.9e768p-23f, 0x1.ac1584p-124f,
     0x1.301ccep-99f, 0.0f, 0.0f, 0x1.99add4p-9f, 0x1.e4b336p-48f, 0.0f,
     0x1.cfe626p-95f, 0.0f, 0.0f, 0.0f, 0x1.e38a1ep-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.3450fp-85f, 0.0f, 0x1.162be2p-92f, 0.0f, 0x1.0a2788p-63f, 0.0f, 0.0f,
     0.0f, 0x1.0c603ep-1f, 0x1.070dd6p-25f, 0.0f, 0x1.8aa434p-46f, 0x1.2efa44p-91f,
     0.0f, 0.0f, 0x1.f0417cp-53f, 0x1.2188c2p-69f, 0.0f, 0x1.4267fep-47f,
     0x1.b5fb9p-34f, 0.0f, 0x1.7407dcp-1f, 0x1.3d726cp-8f, 0.0f, 0x1.6e3e3p-73f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.0eb802p-15f, 0.0f, 0x1.1932f8p-27f, 0x1.adb89cp-30f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.27be02p-11f, 0.0f, 0x1.bcb256p-64f, 0.0f, 0.0f, 0.0f,
     0x1.4ebfep-11f, 0x1.923764p-59f, 0x1.eb0dc6p-48f, 0x1.18ea6ep-29f,
     0x1.26abd2p-74f, 0x1.dd8cbp-106f, 0x1.2f3e5ep-46f, 0.0f, 0x1.206d2ap-44f,
     0x1.6fcafep-86f, 0.0f, 0.0f, 0x1.3c0e86p-119f, 0.0f, 0x1.f1f64ap-38f,
     0x1.91baacp-7f, 0x1.53dbcep-79f, 0.0f, 0x1.8739b8p-120f, 0.0f, 0.0f, 0.0f,
     0x1.85d1f6p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2e1234p-82f, 0x1.5f46f6p-116f,
     0x1.5df4dap-49f, 0.0f, 0.0f, 0x1.5552eap-49f, 0x1.34363p-12f, 0x1.242c68p-115f,
     0x1.0ef97cp-43f, 0x1.4e10ccp-53f, 0x1.301968p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.7b8d92p-98f, 0x1.18a0c2p-66f, 0x1.00e51cp-119f, 0.0f, 0x1.f2a3f8p-94f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5060b8p-60f, 0x1.3edeccp-87f,
     0.0f, 0.0f, 0x1.d01bd4p-93f, 0.0f, 0.0f, 0x1.c6c3fep-22f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a8f462p-81f, 0x1.66eceep-31f, 0x1.9f6c8p-65f, 0x1.5ba896p-23f,
     0x1.95965ep-70f, 0x1.ce58f6p-112f, 0.0f, 0x1.b6646cp-101f, 0x1.e08decp-106f,
     0.0f, 0.0f, 0x1.2c6ap-58f, 0.0f, 0.0f, 0.0f, 0x1.c68ebp-80f, 0x1.6f54e8p-122f,
     0x1.0f34bp-69f, 0.0f, 0x1.9b238ap-24f, 0x1.d9b9b4p-53f, 0x1.4a9372p-61f, 0.0f,
     0.0f, 0x1.fce468p-34f, 0x1.dff16cp-55f, 0.0f, 0x1.f5cf54p-27f, 0.0f,
     0x1.989388p-5f, 0.0f, 0x1.e85c62p-118f, 0x1.9d7df6p-91f, 0.0f, 0.0f, 0.0f,
     0x1.0e24f2p-69f, 0x1.a04fe8p-108f, 0x1.6b5e0cp-23f, 0.0f, 0.0f, 0x1.a7021ep-12f,
     0x1.cc58fap-19f, 0.0f, 0x1.3747a6p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d7912cp-64f,
     0x1.849136p-87f, 0.0f, 0x1.901758p-76f, 0.0f, 0.0f, 0x1.1bef8cp-24f,
     0x1.c30aecp-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f76022p-106f, 0.0f, 0x1.aed8bap-74f,
     0.0f, 0.0f, 0x1.c4cbaep-108f, 0.0f, 0.0f, 0.0f, 0x1.5dc3ap-58f, 0x1.7e6cc2p-125f,
     0x1.ed2994p-125f, 0x1.1875dap-36f, 0.0f, 0x1.9ed6dap-3f, 0.0f, 0.0f, 0.0f,
     0x1.44210ep-22f, 0.0f, 0x1.94e894p-114f, 0x1.2b64a8p-12f, 0x1.cf6f1p-33f,
     0x1.af88fp-4f, 0x1.1278c2p-51f, 0.0f, 0x1.699708p-21f, 0x1.e17f18p-87f, 0.0f,
     0x1.b13fcap-11f, 0x1.862d36p-61f, 0.0f, 0x1p0f, 0x1.a2f20ep-51f, 0.0f,
     0x1.86f90cp-51f, 0x1.08cddap-88f, 0.0f, 0.0f, 0x1.7b6102p-103f, 0x1.063534p-50f,
     0x1.b087cp-35f, 0.0f, 0x1.948ab8p-98f, 0x1.c5dd5cp-103f, 0x1.1024acp-105f,
     0x1.a4443ap-13f, 0x1.f35558p-6f, 0.0f, 0x1.48bd2p-51f, 0.0f, 0.0f,
     0x1.b491cap-95f, 0x1.26e30ep-126f, 0.0f, 0.0f, 0.0f, 0x1.d4e05ap-15f,
     0x1.7b29acp-73f, 0x1.1fba66p-64f, 0x1.18f7b6p-59f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f44f8ep-45f, 0x1.20260ap-33f, 0x1.327646p-118f, 0.0f, 0.0f, 0x1.14b882p-33f,
     0x1.5b4b88p-46f, 0x1.5e06fcp-35f, 0.0f, 0x1.3347bep-109f, 0x1.ad720ap-6f, 0.0f,
     0.0f, 0x1.6c634cp-62f, 0x1.9393bap-122f, 0x1.f2acecp-22f, 0x1.0fb334p-74f,
     0x1.9034a6p-85f, 0x1.09371p-111f, 0x1.a9b5d2p-36f, 0x1.1c6e2cp-118f,
     0x1.0cc058p-94f, 0x1.3d1d4p-35f, 0.0f, 0.0f, 0x1.0e059p-88f, 0.0f, 0.0f, 0.0f,
     0x1.aad598p-13f, 0x1.e45f48p-34f, 0x1.beae2ep-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.da908p-90f, 0x1.75a7dp-87f, 0.0f, 0x1.20a1b6p-23f, 0x1.273d4cp-125f, 0.0f,
     0.0f, 0x1.40001ep-24f, 0x1.e8b944p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a9edap-40f, 0.0f, 0.0f, 0x1.f48142p-79f, 0x1.8c0678p-93f, 0x1.c01ebp-27f,
     0x1.fca7acp-42f, 0x1.f87198p-58f, 0x1.245c8ap-84f, 0.0f, 0x1.805b7p-37f, 0.0f,
     0x1.a1eee4p-29f, 0x1.b6b1a2p-36f, 0x1.e194e4p-36f, 0x1.7d8036p-88f,
     0x1.a97742p-76f, 0x1.e0188p-125f, 0.0f, 0x1.4d45b4p-31f, 0.0f, 0.0f,
     0x1.878fe6p-101f, 0.0f, 0x1.9b5266p-95f, 0x1.df5034p-7f, 0.0f, 0x1.099bd2p-35f,
     0x1.73259ap-60f, 0.0f, 0.0f, 0x1.888a9ep-117f, 0.0f, 0x1.34b6cap-2f, 0.0f, 0.0f,
     0x1.429666p-50f, 0x1.31dacap-107f, 0x1.3facccp-69f, 0.0f, 0x1.c1027ep-26f,
     0x1.bd96a2p-80f, 0.0f, 0x1.88746ep-16f, 0x1.47de16p-31f, 0x1.ac23b4p-86f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.da0e56p-29f, 0x1.3677acp-11f, 0x1.56caeep-50f, 0.0f, 0.0f,
     0x1.d41bf4p-2f, 0.0f, 0x1.453858p-35f, 0.0f, 0.0f, 0x1.2f7878p-99f, 0.0f,
     0x1.cd99fp-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.082b58p-106f, 0x1.116214p-37f,
     0x1.4bc366p-33f, 0.0f, 0x1.486a18p-50f, 0.0f, 0x1.bb584cp-42f, 0x1.bd0d7cp-104f,
     0x1.8edd78p-12f, 0x1.c0d04ap-51f, 0.0f, 0x1.0d7fbep-8f, 0x1.7f1322p-81f,
     0x1.53f62ep-80f, 0.0f, 0x1.cbafacp-39f, 0.0f, 0x1.36c414p-106f, 0.0f,
     0x1.8e1acp-99f, 0.0f, 0x1.38db1ep-34f, 0.0f, 0.0f, 0x1.9d19ecp-113f, 0.0f,
     0x1.04928cp-1f, 0x1.42ed72p-59f, 0x1.d959a2p-108f, 0x1.5cce18p-47f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b9d29ap-75f, 0.0f, 0x1.22cb3ap-1f, 0.0f,
     0x1.0f6602p-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.960778p-77f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f152f2p-62f, 0x1.c1a9a2p-114f, 0.0f, 0.0f, 0.0f, 0x1.f427a2p-80f, 0.0f,
     0.0f, 0x1.de326cp-1f, 0.0f, 0x1.51e82ep-77f, 0x1.aac086p-89f, 0.0f, 0.0f, 0.0f,
     0x1.c012d6p-22f, 0.0f, 0.0f, 0x1.91daacp-48f, 0.0f, 0.0f, 0.0f, 0x1.343c4p-62f,
     0.0f, 0x1.0fba74p-40f, 0.0f, 0x1.00dbc4p-11f, 0x1.19e39p-5f, 0.0f, 0.0f,
     0x1.45bdb2p-86f, 0.0f, 0x1.2698aap-84f, 0.0f, 0x1.9589d2p-105f, 0x1.adea7cp-22f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.196356p-30f, 0.0f, 0x1.91055ep-64f, 0.0f,
     0x1.c5a6ap-64f, 0.0f, 0x1.75bc12p-31f, 0.0f, 0x1.160026p-65f, 0x1.80e89ep-31f,
     0.0f, 0.0f, 0x1.3f1f62p-29f, 0x1.4648a2p-76f, 0.0f, 0.0f, 0x1.af327p-60f, 0.0f,
     0.0f, 0x1.dc2d54p-70f, 0.0f, 0.0f, 0.0f, 0x1.50672p-41f, 0.0f, 0.0f,
     0x1.7429cap-26f, 0.0f, 0x1.df7608p-75f, 0.0f, 0.0f, 0.0f, 0x1.a97e3cp-104f, 0.0f,
     0x1.cee936p-6f, 0x1.f64576p-17f, 0.0f, 0x1.5054cep-42f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c37e6ep-32f, 0x1.b28a54p-97f, 0x1.cf5efep-65f
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
            tmp1 = Sleef_exp10f1_u10purecfma(tmp0);
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
    printf("Sleef_exp10f1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_exp10f1_u10purecfma bench acc %a\n", global_bench_acc);
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
