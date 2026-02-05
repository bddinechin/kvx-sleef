/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_finz_modff1_purecfma.c --function \
 *     Sleef_finz_modff1_purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.3985fap-52f, 0.0f, 0x1.82f242p-1f, 0.0f, 0x1.c4954ap-80f, 0x1.4ff684p-22f,
     0x1.f0c046p-15f, 0x1.c455ecp-2f, 0x1.15c606p-72f, 0x1.15d874p-126f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.587736p-23f, 0x1.db4116p-71f, 0.0f, 0.0f, 0.0f,
     0x1.cef304p-102f, 0.0f, 0x1.c5b898p-100f, 0x1.754ee8p-34f, 0x1.534642p-60f,
     0x1.1cb6ep-30f, 0x1.648186p-21f, 0x1.8a2c04p-29f, 0x1.f2530ap-23f,
     0x1.14c798p-8f, 0x1.2412a4p-75f, 0.0f, 0x1.380fe6p-49f, 0x1.7365cp-76f,
     0x1.d174dcp-7f, 0x1.919908p-4f, 0.0f, 0.0f, 0x1.d977a4p-19f, 0x1.35e7a4p-55f,
     0x1.8d5246p-121f, 0x1.1bc13cp-120f, 0.0f, 0.0f, 0.0f, 0x1.20da86p-24f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3f4486p-95f, 0.0f, 0x1.ce0432p-70f, 0.0f, 0.0f,
     0x1.9587b8p-70f, 0x1.438f98p-54f, 0x1.720146p-72f, 0x1.e2661ap-112f,
     0x1.5a236ep-100f, 0.0f, 0x1.906af6p-25f, 0x1.f0f4c4p-92f, 0x1.2df42cp-122f, 0.0f,
     0x1.ca3aecp-90f, 0x1.f97ef6p-57f, 0.0f, 0.0f, 0.0f, 0x1.48df28p-108f,
     0x1.1c9ab8p-57f, 0.0f, 0x1.58de9cp-43f, 0x1.8e1aa2p-44f, 0x1.89d936p-60f,
     0x1.aac45ep-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.668ffcp-32f, 0.0f, 0x1.e23d5cp-7f,
     0x1.d2bdep-65f, 0.0f, 0.0f, 0x1.bf1498p-107f, 0x1.81dff6p-114f, 0x1.b64b04p-36f,
     0x1.01d952p-64f, 0x1.a21dep-72f, 0.0f, 0.0f, 0.0f, 0x1.25005p-102f, 0.0f,
     0x1.0d1dfap-100f, 0.0f, 0x1.a3af48p-83f, 0x1.b54202p-6f, 0x1.401eccp-31f, 0.0f,
     0x1.28f308p-95f, 0.0f, 0x1.ae4beap-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.16712cp-33f,
     0.0f, 0x1.0680a2p-47f, 0.0f, 0x1.22e638p-58f, 0x1.c533b8p-61f, 0.0f, 0.0f,
     0x1.1cc65p-26f, 0x1.bb121cp-30f, 0.0f, 0x1.65d6ccp-46f, 0.0f, 0x1.4b224ap-20f,
     0x1.044758p-63f, 0.0f, 0x1.308402p-106f, 0x1.c14d62p-70f, 0x1.22c316p-46f, 0.0f,
     0.0f, 0x1.aec4ecp-76f, 0.0f, 0x1.bea922p-46f, 0.0f, 0.0f, 0x1.9c2acp-5f, 0.0f,
     0.0f, 0x1.dd98f2p-58f, 0x1.78ffep-126f, 0.0f, 0x1.91d724p-84f, 0.0f,
     0x1.63dc26p-1f, 0x1.e4f54cp-125f, 0.0f, 0.0f, 0.0f, 0x1.c88946p-7f, 0.0f, 0.0f,
     0.0f, 0x1.a234b4p-15f, 0x1.a1ed9ep-38f, 0.0f, 0.0f, 0.0f, 0x1.19f45cp-116f,
     0x1.858544p-33f, 0x1.02d448p-56f, 0x1.360dbp-100f, 0x1.0e9a9ap-84f, 0.0f,
     0x1.1376ecp-36f, 0.0f, 0.0f, 0x1.e0083cp-44f, 0x1.b4a22ep-74f, 0.0f,
     0x1.d02afp-23f, 0x1.3f0c6ep-83f, 0.0f, 0x1.ba4506p-60f, 0x1.839996p-21f, 0.0f,
     0x1.d6600ep-83f, 0x1.cfa33ep-33f, 0.0f, 0.0f, 0x1.564d4ap-8f, 0x1.e300cp-47f,
     0x1.2eb3b2p-37f, 0.0f, 0x1.e1a794p-97f, 0.0f, 0x1.789134p-91f, 0x1.6f191cp-42f,
     0x1.3dee38p-16f, 0x1.3e5156p-56f, 0.0f, 0.0f, 0x1.5f5decp-102f, 0.0f,
     0x1.4568cap-46f, 0x1.a972b6p-71f, 0.0f, 0.0f, 0x1.ff1492p-22f, 0x1.4408eep-86f,
     0x1.855936p-10f, 0.0f, 0x1.6743a8p-95f, 0x1.2ff47ap-99f, 0.0f, 0.0f,
     0x1.996bfp-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e7e954p-126f, 0x1.40944p-103f,
     0x1.f77c58p-82f, 0x1.6b3304p-35f, 0x1.abeceep-70f, 0.0f, 0x1.7473cep-111f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.cbe042p-68f, 0x1.fcc34p-16f, 0x1.f43a72p-45f,
     0x1.472482p-16f, 0.0f, 0x1.309b16p-18f, 0x1.0b349cp-100f, 0.0f, 0x1.5bdd78p-38f,
     0.0f, 0.0f, 0x1.ec1df8p-41f, 0x1.d70bbp-48f, 0.0f, 0.0f, 0x1.cd689p-65f,
     0x1.e1491cp-61f, 0.0f, 0x1.e2ef34p-67f, 0.0f, 0x1.22b556p-82f, 0x1.443f2cp-28f,
     0.0f, 0x1.bf69p-74f, 0.0f, 0x1.c05ae2p-93f, 0x1.d99fep-13f, 0.0f,
     0x1.79e96cp-62f, 0x1.79a86ap-2f, 0.0f, 0x1.148fc2p-114f, 0x1.363ee8p-70f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.8bac98p-125f, 0x1.12eb7cp-13f, 0x1.19328cp-124f, 0.0f,
     0x1.ae9de4p-124f, 0x1.6dc15cp-104f, 0.0f, 0x1.4f49ep-85f, 0.0f, 0x1.a8f0ecp-97f,
     0.0f, 0x1.536e96p-19f, 0x1.343af6p-3f, 0.0f, 0x1.35a164p-20f, 0x1.d87b0ap-59f,
     0.0f, 0x1.de9f36p-115f, 0.0f, 0x1.41068p-90f, 0x1.85874ap-57f, 0x1.224aa6p-64f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.9300ccp-16f, 0x1.87b7dp-21f, 0x1.5e8218p-124f, 0.0f,
     0x1.93622ep-21f, 0x1.66af38p-46f, 0x1.7f56fap-95f, 0.0f, 0x1.64072ep-56f,
     0x1.533612p-46f, 0x1.3f4962p-99f, 0.0f, 0x1.d5450cp-23f, 0x1.b4b79cp-98f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dcbfbep-22f, 0.0f, 0.0f, 0x1.48c7fep-45f, 0.0f,
     0x1.b68466p-77f, 0x1.597e4p-26f, 0.0f, 0x1.f7e43ap-92f, 0.0f, 0.0f,
     0x1.52f5e4p-54f, 0x1.6ea894p-38f, 0.0f, 0x1.7eddcap-106f, 0x1.0980c4p-38f, 0.0f,
     0x1.6ec51ap-13f, 0.0f, 0x1.6844fcp-42f, 0.0f, 0x1.5c4282p-44f, 0.0f,
     0x1.0dfe78p-116f, 0.0f, 0x1.547d6ep-15f, 0x1.527198p-43f, 0x1.d91ed8p-38f, 0.0f,
     0.0f, 0.0f, 0x1.e103ecp-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ed70bp-118f, 0.0f,
     0.0f, 0x1.76d1c4p-71f, 0.0f, 0x1.46d828p-46f, 0x1.695236p-12f, 0.0f,
     0x1.b4909cp-85f, 0.0f, 0x1.cb51bap-73f, 0.0f, 0.0f, 0.0f, 0x1.d35dc4p-5f,
     0x1.34aabep-19f, 0.0f, 0x1.da4798p-108f, 0x1.d8d8f6p-118f, 0x1.1bec6ep-63f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.abce7p-100f, 0x1.96598ep-14f, 0.0f, 0x1.d2a10cp-2f,
     0x1.f2493cp-62f, 0x1.5eb92ap-42f, 0.0f, 0x1.7c31d6p-102f, 0.0f, 0.0f,
     0x1.e7da6cp-2f, 0.0f, 0x1.52068ap-20f, 0.0f, 0.0f, 0x1.d26p-108f,
     0x1.c42d1ap-42f, 0x1.e1d78ep-40f, 0x1.5a8fp-88f, 0x1.def5a2p-33f,
     0x1.c4e168p-88f, 0.0f, 0x1.4db40ep-60f, 0.0f, 0.0f, 0x1.adff92p-95f,
     0x1.23b874p-84f, 0x1.23374ep-116f, 0x1.ff2a24p-102f, 0.0f, 0.0f, 0x1.059adp-69f,
     0.0f, 0.0f, 0x1.b18b94p-117f, 0.0f, 0x1.e01f96p-46f, 0.0f, 0.0f, 0.0f,
     0x1.0b0676p-65f, 0x1.af94bcp-96f, 0x1.41864ep-63f, 0.0f, 0x1.835c8cp-105f, 0.0f,
     0x1.7fc232p-96f, 0.0f, 0x1.ce9e7ap-121f, 0.0f, 0.0f, 0.0f, 0x1.03dabep-73f, 0.0f,
     0.0f, 0x1.7fcb3ap-115f, 0.0f, 0.0f, 0x1.285db2p-8f, 0x1.83c326p-115f, 0.0f,
     0x1.05b7dp-112f, 0x1.20bc18p-75f, 0x1.15feap-46f, 0.0f, 0x1.66fda2p-78f,
     0x1.dc177cp-29f, 0x1.693b74p-57f, 0x1.3d5cd8p-36f, 0x1.8675b8p-6f, 0.0f,
     0x1.e8b384p-8f, 0x1.755c0cp-48f, 0.0f, 0x1.da419ep-118f, 0.0f, 0x1.2ab92ap-104f,
     0.0f, 0x1.4052e6p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2ec194p-46f, 0.0f, 0x1.cd6ddcp-68f, 0.0f, 0.0f, 0x1.7181ccp-97f,
     0x1.32ea38p-9f, 0x1.7279a2p-44f, 0x1.480c6p-25f, 0.0f, 0x1.2e2f78p-11f,
     0x1.0ef3fap-9f, 0x1.8971dap-97f, 0.0f, 0x1.6e306p-121f, 0x1.d3a9fp-62f, 0.0f,
     0x1.9f23c6p-6f, 0x1.c3efecp-98f, 0x1.b061fcp-11f, 0x1.c6a2a8p-106f, 0.0f,
     0x1.210ddap-67f, 0.0f, 0x1.09fae2p-63f, 0.0f, 0x1.4c5dbap-95f, 0x1.deff98p-78f,
     0.0f, 0.0f, 0x1.995caep-60f, 0x1.6ac716p-5f, 0x1.42db42p-76f, 0.0f, 0.0f,
     0x1.62f5dcp-59f, 0x1.fbe848p-86f, 0x1.baef28p-90f, 0.0f, 0.0f, 0.0f,
     0x1.8177aep-49f, 0.0f, 0x1.28510cp-84f, 0x1.f782f6p-2f, 0.0f, 0x1.bfa11ap-48f,
     0.0f, 0x1.04223p-95f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.63d51p-84f, 0x1.40bcf6p-64f,
     0.0f, 0x1.67fed4p-55f, 0.0f, 0x1.b963fep-119f, 0x1.d85f32p-67f, 0x1.fe8f86p-7f,
     0x1.b95ad6p-97f, 0x1.49be26p-126f, 0.0f, 0x1.803cfap-43f, 0x1.2f63d8p-53f, 0.0f,
     0x1.103a74p-97f, 0x1.f1aa0ep-52f, 0.0f, 0x1.5af91cp-90f, 0x1.80a46p-83f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a1d3cep-83f, 0x1.b40c5p-41f,
     0.0f, 0.0f, 0x1.333a76p-76f, 0.0f, 0.0f, 0.0f, 0x1.6e378ep-31f, 0.0f, 0.0f, 0.0f,
     0x1.a728e2p-70f, 0.0f, 0.0f, 0x1.99da6p-45f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.712c7ep-44f, 0.0f, 0.0f, 0.0f, 0x1.c3b808p-82f, 0x1.9bb58ep-99f,
     0x1.1200cp-29f, 0.0f, 0x1.def762p-4f, 0.0f, 0x1.ba2968p-109f, 0.0f, 0.0f,
     0x1.bbe0a4p-29f, 0.0f, 0x1.c453ecp-111f, 0x1.19475ap-10f, 0x1.b034dap-89f, 0.0f,
     0x1.91ed42p-2f, 0.0f, 0.0f, 0x1.e00b5cp-2f, 0.0f, 0x1.5c8094p-12f,
     0x1.3d0e4cp-71f, 0x1.93d48p-113f, 0.0f, 0x1.7d9006p-16f, 0.0f, 0.0f, 0.0f,
     0x1.7af6cp-29f, 0.0f, 0.0f, 0x1.0c125p-14f, 0.0f, 0.0f, 0.0f, 0x1.6d38e4p-111f,
     0x1.b1fc34p-102f, 0.0f, 0x1.6e0252p-52f, 0x1.a5398p-17f, 0x1.2a6ba8p-118f,
     0x1.87e76p-12f, 0.0f, 0x1.0d2f4cp-85f, 0.0f, 0x1.23e676p-33f, 0.0f, 0.0f,
     0x1.427a92p-18f, 0x1.24aa04p-81f, 0.0f, 0.0f, 0x1.1a0e6p-110f, 0x1.36e49p-10f,
     0.0f, 0x1.b25456p-61f, 0.0f, 0x1.7a31d2p-107f, 0.0f, 0.0f, 0x1p0f,
     0x1.e180bep-54f, 0.0f, 0.0f, 0x1.4aecacp-70f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2298b6p-35f, 0x1.0d5644p-37f, 0x1.601014p-15f, 0.0f, 0.0f, 0x1.a202f4p-123f,
     0.0f, 0.0f, 0.0f, 0x1.6f9ecap-55f, 0.0f, 0x1.f62512p-71f, 0x1.aec40cp-49f, 0.0f,
     0x1.61330ap-41f, 0x1.c69e92p-59f, 0x1.2c09e8p-13f, 0.0f, 0x1.289d68p-42f, 0.0f,
     0x1.906a56p-124f, 0.0f, 0.0f, 0.0f, 0x1.24eap-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d6d556p-106f, 0x1.f2177p-83f, 0.0f, 0x1.bbb63ep-89f, 0.0f, 0x1.122418p-74f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.51a8dep-71f, 0x1.b92836p-113f, 0x1.2fcbd6p-68f,
     0x1.ec2c2ep-78f, 0.0f, 0x1.1846f2p-109f, 0.0f, 0x1.e3035ep-54f, 0x1.cf2958p-6f,
     0x1.1e4844p-93f, 0x1.31803cp-31f, 0x1.849ad4p-98f, 0.0f, 0x1.e5301ap-125f,
     0x1.72e9bap-63f, 0.0f, 0x1.57054cp-30f, 0x1.f8fffap-118f, 0.0f, 0.0f,
     0x1.2eb03p-14f, 0.0f, 0x1.d6757ap-90f, 0x1p0f, 0x1.c96216p-111f, 0.0f,
     0x1.6ebafcp-29f, 0x1.18dea2p-105f, 0x1.12789cp-59f, 0.0f, 0.0f, 0x1.571a42p-25f,
     0x1.28a898p-63f, 0.0f, 0x1.8f6f7cp-45f, 0x1.154a02p-122f, 0.0f, 0x1.bd38b4p-109f,
     0.0f, 0x1.17875ep-106f, 0x1.b3b798p-17f, 0.0f, 0x1.58637cp-123f, 0x1.5e7c84p-75f,
     0.0f, 0.0f, 0.0f, 0x1.b1c448p-74f, 0x1.a2b8eep-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.742ffcp-13f, 0x1.635594p-118f, 0x1.60335ap-120f,
     0x1.c2889ep-7f, 0.0f, 0.0f, 0x1.23ee98p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1a4dbcp-81f, 0x1.89b8c6p-45f, 0x1.7f3358p-49f, 0.0f, 0x1.e0261ap-53f,
     0x1.e6c502p-97f, 0x1.67feaep-85f, 0x1.2ea868p-73f, 0x1.0ff89cp-64f,
     0x1.bb1ab8p-98f, 0.0f, 0.0f, 0x1.788f3ap-10f, 0x1.d45eecp-52f, 0x1.4f13d8p-49f,
     0.0f, 0.0f, 0x1.eef23p-5f, 0.0f, 0x1.b635c2p-114f, 0x1.4e5e0ap-116f,
     0x1.ddc3cap-15f, 0x1.35519p-43f, 0.0f, 0x1.b1eb5ep-22f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.03432ep-59f, 0x1p0f, 0.0f, 0x1.8a931ep-81f, 0x1.6e6dc2p-37f, 0x1.d602dap-62f,
     0.0f, 0.0f, 0x1.45af92p-48f, 0x1.5af6a2p-105f, 0x1.6650eap-36f, 0.0f,
     0x1.3f032p-64f, 0x1.255006p-104f, 0.0f, 0.0f, 0x1.68df28p-3f, 0.0f,
     0x1.3ce64ap-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fb0fccp-23f, 0.0f,
     0.0f, 0x1.cfc6dap-101f, 0.0f, 0x1.f921e8p-8f, 0.0f, 0.0f, 0x1.20537ap-54f,
     0x1.491f2cp-47f, 0.0f, 0.0f, 0x1.cae002p-5f, 0.0f, 0.0f, 0x1.9a8d54p-95f, 0.0f,
     0.0f, 0x1.61d5bcp-8f, 0x1.a4ff48p-38f, 0.0f, 0x1.bfde1ap-63f, 0.0f, 0.0f, 0.0f,
     0x1.3c3606p-59f, 0.0f, 0.0f, 0x1.951052p-80f, 0x1.76cfe2p-63f, 0.0f,
     0x1.dd5bcap-117f, 0.0f, 0.0f, 0.0f, 0x1.032466p-81f, 0.0f, 0x1.9e375p-15f, 0.0f,
     0x1.2f22bap-123f, 0.0f, 0.0f, 0x1.3e5b5ep-79f, 0x1.70e568p-4f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.60db06p-36f, 0x1.cfe556p-55f, 0x1.16753p-81f, 0.0f, 0.0f, 0.0f,
     0x1.de6992p-7f, 0x1.0fb3c8p-82f, 0.0f, 0x1.2ff932p-43f, 0x1.c19ae6p-16f,
     0x1.8ef8d2p-126f, 0x1.97d11cp-107f, 0x1.6164bp-89f, 0x1.5a27e6p-89f, 0.0f,
     0x1.b83276p-9f, 0.0f, 0x1.6be30cp-116f, 0.0f, 0x1.0778dap-21f, 0.0f,
     0x1.fd0e3cp-14f, 0.0f, 0x1.c36e48p-42f, 0x1.093032p-113f, 0.0f, 0x1.a23efep-106f,
     0.0f, 0.0f, 0.0f, 0x1.10f396p-51f, 0x1.5fa3cep-35f, 0x1.536f56p-44f,
     0x1.86987p-33f, 0.0f, 0.0f, 0.0f, 0x1.994e38p-29f, 0.0f, 0x1.2fb1c4p-114f,
     0x1.50158ap-73f, 0.0f, 0x1.aeb10ap-64f, 0.0f, 0x1.5801p-72f, 0x1.038f48p-27f,
     0x1.a8aefep-6f, 0.0f, 0.0f, 0x1.d92dc4p-125f, 0x1.a176bp-6f, 0x1.6937c4p-4f,
     0.0f, 0x1.41a7cap-117f, 0x1.967908p-6f, 0x1.efcd2ap-93f, 0x1.ff8cc6p-20f,
     0x1.fbf28ep-77f, 0.0f, 0x1.4a0ae4p-7f, 0.0f, 0.0f, 0.0f, 0x1.f5db0ep-58f, 0.0f,
     0x1.82cec4p-94f, 0x1.7fd2b8p-52f, 0x1.9accbap-92f, 0.0f, 0x1.6c7956p-9f, 0.0f,
     0x1.fe33fap-70f, 0x1.c1f85p-117f, 0.0f, 0.0f, 0x1.c4f86ap-63f, 0x1p0f,
     0x1.d4eabp-93f, 0x1.14bea8p-12f, 0.0f, 0x1.d2fa52p-2f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e70a52p-41f, 0x1.fce412p-111f, 0x1.86c45ap-95f, 0.0f, 0x1.22e4eap-17f,
     0.0f, 0.0f, 0x1.4a9534p-44f, 0.0f, 0.0f, 0x1.72cb68p-20f, 0x1.f6f8c4p-10f,
     0x1.acfdbcp-110f, 0.0f, 0x1.4bed56p-88f, 0.0f, 0x1.5aa3b2p-15f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.360dfap-44f, 0x1.956b8ep-126f,
     0x1.199864p-101f, 0.0f, 0x1.7d33f6p-28f, 0.0f, 0.0f, 0x1.e1fd8p-52f,
     0x1.8c2582p-122f, 0.0f, 0x1.9e5a8ap-50f, 0x1.e2f16p-66f, 0.0f, 0x1.99693ep-80f,
     0.0f, 0x1.cf024ep-46f, 0x1.371ceap-42f, 0.0f, 0x1.093b8ep-106f, 0.0f,
     0x1.12cb8ap-29f, 0x1.81155ap-59f, 0.0f, 0x1.21ac24p-82f, 0.0f, 0x1.ce94cp-15f,
     0.0f, 0x1.3d3f5cp-64f, 0x1.2ea2acp-111f, 0.0f, 0.0f, 0.0f, 0x1.ddebbap-39f,
     0x1.bbb71p-38f, 0.0f, 0.0f, 0x1.611bcap-54f, 0.0f, 0.0f, 0.0f, 0x1.8c5b8ep-5f,
     0.0f, 0.0f, 0.0f, 0x1.1d6544p-74f, 0.0f, 0x1.c1c156p-62f
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
            tmp1 = Sleef_finz_modff1_purecfma(tmp0);
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
    printf("Sleef_finz_modff1_purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_modff1_purecfma bench acc {.x=%a, .y=%a}\n", global_bench_acc.x, global_bench_acc.y );
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
