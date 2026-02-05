/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_tanf1_u10purecfma.c --function Sleef_tanf1_u10purecfma \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 --bench \
 *     --no-embedded-bin --target x86_sse2
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
     0.0f, 0x1.49ef38p-52f, 0x1.b06fbcp-74f, 0x1.add7e2p-123f, 0x1.d60aaap-85f,
     0x1.17532cp-107f, 0x1.46fb0ep-108f, 0x1.19f50ap-58f, 0.0f, 0x1.deae9ap-67f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.264316p-1f, 0.0f, 0.0f, 0x1.16ba26p-14f, 0x1.1d0788p-63f,
     0.0f, 0x1.c12fbp-83f, 0x1.351502p-69f, 0.0f, 0x1.a21008p-1f, 0x1.b8f9e4p-38f,
     0x1.beff26p-51f, 0x1.8fc14ap-83f, 0x1.4c42c4p-105f, 0x1.ef5cfep-13f,
     0x1.ae41f2p-32f, 0x1.f4a616p-19f, 0x1.dd0d1cp-49f, 0x1.2caa2p-74f,
     0x1.f6b23ap-40f, 0.0f, 0.0f, 0x1.eecc64p-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b958f8p-71f, 0x1.626706p-61f, 0x1.4ea234p-93f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6d734cp-57f, 0.0f, 0x1.f84868p-52f, 0x1.8db85ep-71f, 0x1.4dc87ap-89f,
     0x1.d1b5bep-76f, 0x1.c4b816p-67f, 0x1.1270b6p-17f, 0x1.cba378p-51f, 0.0f,
     0x1.dc159ep-19f, 0x1.e9f43ap-22f, 0x1.d268ap-8f, 0x1.a43f96p-53f, 0.0f,
     0x1.f2d526p-60f, 0x1.8b40c6p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a59ebp-99f,
     0x1p0f, 0.0f, 0x1.fddba2p-101f, 0.0f, 0.0f, 0.0f, 0x1.b05a48p-40f, 0.0f,
     0x1.42b57cp-22f, 0.0f, 0.0f, 0x1.b5e0b2p-23f, 0.0f, 0.0f, 0x1.6d42eap-74f,
     0x1.1769bap-124f, 0.0f, 0.0f, 0x1.187a4cp-13f, 0.0f, 0x1.84e27cp-50f, 0.0f, 0.0f,
     0x1.5cfdf6p-37f, 0x1.4f53a8p-117f, 0x1.41b34cp-45f, 0x1.e20f4cp-119f, 0.0f,
     0x1.4cb528p-14f, 0x1.fb2162p-62f, 0.0f, 0.0f, 0x1.9e624ap-68f, 0.0f,
     0x1.5fb674p-13f, 0x1.30ed9ap-88f, 0.0f, 0x1.cc6c84p-31f, 0x1.6e2644p-40f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.149966p-10f, 0x1.9fb3e8p-78f, 0.0f,
     0x1.fe3de4p-36f, 0x1.81caaap-109f, 0x1.d6a7acp-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5a866ap-40f, 0x1.49a06ep-59f, 0x1.c5bf32p-79f, 0.0f, 0x1.0b44d4p-115f,
     0x1.91bd44p-78f, 0.0f, 0x1.f6a8fp-17f, 0x1.36ca86p-22f, 0.0f, 0x1.0020e8p-5f,
     0x1.5b8f9p-50f, 0x1.3f8836p-77f, 0.0f, 0x1.78e444p-74f, 0.0f, 0.0f,
     0x1.c21b68p-102f, 0.0f, 0.0f, 0x1.dd7368p-124f, 0.0f, 0.0f, 0.0f,
     0x1.a4351cp-71f, 0.0f, 0.0f, 0x1.80e81p-125f, 0.0f, 0x1.aa8708p-71f,
     0x1.18de58p-113f, 0x1.c7da5ep-64f, 0.0f, 0x1.61aaa4p-25f, 0x1.7df056p-43f, 0.0f,
     0x1.f30662p-85f, 0.0f, 0x1.1d9c04p-4f, 0.0f, 0x1.a1397ap-125f, 0x1.23dbb6p-14f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4c82d2p-64f, 0x1.2d5f2cp-59f,
     0x1.81729p-47f, 0x1.90067cp-93f, 0.0f, 0x1.4d4372p-105f, 0.0f, 0x1.f67b52p-82f,
     0x1.de213ep-98f, 0x1.962c6p-2f, 0x1.19a1d6p-64f, 0x1.e3f8e6p-12f,
     0x1.b370ap-111f, 0.0f, 0x1.822eccp-28f, 0x1.668784p-6f, 0x1.ab698p-64f, 0.0f,
     0.0f, 0x1.97c3dap-18f, 0.0f, 0.0f, 0x1.1ca46ap-85f, 0.0f, 0x1.47403p-21f,
     0x1.ae1d8ep-30f, 0x1.cc3d2ap-49f, 0x1.555adap-79f, 0.0f, 0x1.b70466p-43f,
     0x1.14837cp-93f, 0x1.653d06p-31f, 0x1.7f759ep-86f, 0.0f, 0x1.a13bd8p-96f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.778486p-108f, 0x1.b35b12p-114f, 0.0f, 0.0f,
     0x1.820896p-81f, 0x1.12e2dep-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c028c8p-60f,
     0x1.b932e2p-62f, 0.0f, 0x1.92684cp-113f, 0.0f, 0x1.43384ap-66f, 0x1.1b3e36p-54f,
     0x1.df030ep-106f, 0.0f, 0x1.0ff5f2p-108f, 0x1.3babb4p-97f, 0x1.5dd68ep-45f, 0.0f,
     0x1.a29de6p-43f, 0.0f, 0x1.e1e042p-25f, 0x1.b61b56p-111f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.de9e12p-104f, 0x1.2180ecp-85f, 0x1.1dae74p-99f, 0.0f, 0.0f, 0.0f,
     0x1.f470eep-34f, 0.0f, 0x1.536212p-92f, 0.0f, 0.0f, 0.0f, 0x1.213462p-115f,
     0x1.1df75p-106f, 0.0f, 0x1.c2978ep-40f, 0x1.195606p-117f, 0x1.eedc5ap-24f, 0.0f,
     0.0f, 0x1.ac553cp-118f, 0x1.7b32c2p-1f, 0.0f, 0x1.a0d7f2p-88f, 0x1.9daa3p-114f,
     0x1.42aed4p-91f, 0x1.038e38p-53f, 0x1.278438p-72f, 0.0f, 0.0f, 0x1.d5979p-12f,
     0x1.c8ddbp-59f, 0.0f, 0.0f, 0x1.ea1ab4p-121f, 0.0f, 0x1.f6c6e2p-99f,
     0x1.c4899p-30f, 0x1.d4db76p-105f, 0.0f, 0x1.764c5ap-59f, 0.0f, 0x1.cf10fep-71f,
     0x1.9643f4p-67f, 0x1.e98e8ap-97f, 0.0f, 0x1.907344p-38f, 0.0f, 0.0f,
     0x1.e98deep-61f, 0x1.89669ap-115f, 0x1.e0a218p-20f, 0x1.386a4p-35f, 0.0f, 0.0f,
     0.0f, 0x1.6eb1fep-120f, 0.0f, 0.0f, 0.0f, 0x1.173b06p-40f, 0.0f, 0x1.e21926p-99f,
     0.0f, 0x1.5a97ccp-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ab78e6p-74f, 0x1.7d7dap-46f,
     0x1.6cfef8p-38f, 0x1p0f, 0x1.90dfe6p-48f, 0.0f, 0x1.47324cp-26f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.3746f6p-26f, 0x1.1846b6p-97f, 0x1.e48f2ap-8f, 0.0f,
     0x1.9d552cp-88f, 0x1.e36d8ep-66f, 0x1.c6bd68p-3f, 0x1.b5eba8p-109f,
     0x1.41c7aep-45f, 0x1.c9fe9cp-67f, 0x1.c5fbeap-54f, 0.0f, 0.0f, 0.0f,
     0x1.6d6c4p-87f, 0.0f, 0x1.383504p-33f, 0.0f, 0.0f, 0.0f, 0x1.1d4fc4p-33f,
     0x1.ebec6p-42f, 0.0f, 0x1.790d9ep-74f, 0.0f, 0.0f, 0.0f, 0x1.0e96a2p-58f,
     0x1.e90988p-64f, 0x1.d96404p-24f, 0.0f, 0x1.091182p-8f, 0.0f, 0x1.4036bap-107f,
     0.0f, 0x1.de0532p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5bbc8cp-107f, 0x1.acd4acp-11f,
     0.0f, 0x1.098b7cp-5f, 0.0f, 0.0f, 0x1.dec6bep-71f, 0x1.1d9d3p-56f, 0.0f,
     0x1.b89e56p-115f, 0.0f, 0.0f, 0x1.4c73bap-40f, 0x1.46d418p-88f, 0x1.614016p-121f,
     0x1.7f8c92p-11f, 0.0f, 0x1.ba0f0ep-108f, 0x1.af8984p-77f, 0.0f, 0.0f,
     0x1.834dfep-86f, 0.0f, 0.0f, 0x1.fe099p-114f, 0x1.3e3262p-124f, 0x1.d34944p-106f,
     0x1.a89832p-19f, 0x1.d1de46p-52f, 0x1.e6963ap-95f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.512d18p-59f, 0.0f, 0.0f, 0x1.93e358p-95f, 0.0f, 0.0f, 0.0f, 0x1.88cde8p-113f,
     0x1.8fdb2ap-105f, 0x1.1e34p-37f, 0.0f, 0.0f, 0x1.9f2706p-70f, 0x1.6862dep-33f,
     0.0f, 0x1.afc77cp-23f, 0.0f, 0.0f, 0x1.bec3c8p-21f, 0x1.3ae8a8p-118f, 0.0f,
     0x1.a7ac72p-4f, 0x1.38a23p-19f, 0.0f, 0.0f, 0.0f, 0x1.d1ab64p-38f,
     0x1.3da024p-95f, 0.0f, 0.0f, 0x1.ab6a12p-63f, 0x1.b4644ep-26f, 0.0f, 0.0f,
     0x1.6a1082p-78f, 0.0f, 0.0f, 0x1.7eb43ap-71f, 0.0f, 0.0f, 0x1.da769cp-62f, 0.0f,
     0.0f, 0x1.150a0cp-23f, 0x1.fe047p-120f, 0x1.85bf88p-118f, 0x1.918c2cp-65f, 0.0f,
     0.0f, 0x1.9770dep-51f, 0.0f, 0x1.82f312p-101f, 0.0f, 0.0f, 0.0f, 0x1.53f7ecp-5f,
     0x1.3972eap-46f, 0x1.c7623cp-107f, 0.0f, 0.0f, 0x1.f6bebap-19f, 0x1.0195a4p-119f,
     0x1.1beec2p-62f, 0x1.16fcc6p-26f, 0x1p0f, 0x1.1cd6ap-126f, 0x1.44b0aap-126f,
     0.0f, 0.0f, 0.0f, 0x1.01af0ap-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9912e2p-16f,
     0x1.bc8bf4p-111f, 0x1.d4d872p-10f, 0x1.efcee8p-102f, 0x1.006222p-53f,
     0x1.56bafep-98f, 0.0f, 0x1.4ffaep-103f, 0x1.c7c882p-83f, 0.0f, 0.0f,
     0x1.8748dep-22f, 0x1.5775ap-77f, 0x1.723accp-5f, 0.0f, 0.0f, 0x1.0393bap-126f,
     0x1.398354p-101f, 0x1.aaf1fep-66f, 0x1.c77d8ap-111f, 0x1.8ee8fp-124f, 0.0f,
     0x1.1fac1ap-62f, 0x1.d9c9fp-89f, 0.0f, 0x1.847ab6p-92f, 0.0f, 0x1.834832p-16f,
     0.0f, 0x1.f3af7ap-94f, 0.0f, 0.0f, 0x1.d1fdf4p-65f, 0.0f, 0x1.ea5d4ap-95f,
     0x1.7245f4p-69f, 0x1.cd6058p-41f, 0x1.5274b6p-68f, 0x1.6b63acp-7f,
     0x1.0200f6p-90f, 0.0f, 0x1.f1b05cp-24f, 0.0f, 0x1.a434d8p-23f, 0.0f, 0.0f,
     0x1.042dfcp-73f, 0.0f, 0.0f, 0x1.64b62ap-69f, 0.0f, 0x1.26d43p-117f, 0.0f, 0.0f,
     0.0f, 0x1.1096fap-20f, 0.0f, 0x1.b87e7cp-30f, 0.0f, 0x1.19f76p-49f, 0.0f,
     0x1.37acb4p-94f, 0x1.202438p-101f, 0x1.535e16p-122f, 0.0f, 0x1.cc038p-59f, 0.0f,
     0x1.515c42p-39f, 0x1.cad8b2p-33f, 0.0f, 0x1.adf012p-59f, 0x1.f04e04p-113f,
     0x1.9c2b02p-83f, 0x1.57a92ap-18f, 0x1.839d9ep-78f, 0x1.5bb6c6p-107f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.6e2e24p-53f, 0.0f, 0.0f, 0.0f, 0x1.0aa6a4p-64f, 0.0f, 0.0f,
     0x1.51fc92p-39f, 0.0f, 0.0f, 0.0f, 0x1.1e87f8p-120f, 0.0f, 0x1.898b62p-12f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.678014p-57f, 0.0f, 0x1.41aabp-103f,
     0x1.e5e6b2p-110f, 0.0f, 0x1.28285ap-58f, 0x1.468edp-16f, 0.0f, 0.0f,
     0x1.5a5588p-18f, 0.0f, 0x1.9ad84ap-73f, 0x1.15155ep-106f, 0.0f, 0x1.e510e2p-116f,
     0.0f, 0x1.dc869p-48f, 0x1.9ca5b8p-99f, 0x1.e670acp-22f, 0.0f, 0x1.93d838p-1f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3af436p-46f, 0x1.f9d338p-19f, 0.0f, 0x1.a8ede4p-82f,
     0.0f, 0x1.91c0c4p-75f, 0x1.314626p-7f, 0x1.f7f14ap-95f, 0.0f, 0x1.13020ap-30f,
     0x1.c90dcep-14f, 0.0f, 0x1.5eab94p-121f, 0x1.2e3cep-32f, 0.0f, 0x1.721ec2p-47f,
     0.0f, 0x1.fb2456p-122f, 0.0f, 0x1.ce8b84p-90f, 0.0f, 0.0f, 0x1.9f17b6p-63f, 0.0f,
     0.0f, 0x1.124b4ep-58f, 0.0f, 0x1.19f944p-25f, 0x1.2fc27cp-99f, 0x1p0f,
     0x1.184bc2p-103f, 0x1.436db6p-77f, 0x1.2184b4p-65f, 0.0f, 0.0f, 0x1.ad374p-12f,
     0x1.173de4p-56f, 0x1.d54a94p-21f, 0x1.aafd6cp-12f, 0x1.99c58ep-32f,
     0x1.954cf4p-61f, 0x1.566234p-109f, 0x1.d1ee9ep-61f, 0.0f, 0x1.0a9e58p-11f, 0.0f,
     0x1.09d9e6p-102f, 0x1.cda04p-90f, 0.0f, 0x1.2290c8p-74f, 0.0f, 0.0f, 0.0f,
     0x1.003aaap-118f, 0x1.3fe526p-8f, 0.0f, 0.0f, 0x1.72d484p-110f, 0x1.d79b5p-11f,
     0x1.b5574p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ba0cbep-33f, 0x1.3541c6p-68f,
     0x1.e1baf2p-98f, 0x1.8a1e14p-75f, 0x1.40184ap-88f, 0.0f, 0x1.7443d6p-60f, 0.0f,
     0x1.c83e2cp-124f, 0x1.81b73cp-106f, 0x1.67fed2p-15f, 0x1.58a26ap-104f,
     0x1.8c547ap-94f, 0.0f, 0x1.7cd1d2p-103f, 0.0f, 0x1.301fd4p-17f, 0x1.357fa2p-98f,
     0.0f, 0x1.8816eap-98f, 0x1.1e81f6p-49f, 0.0f, 0.0f, 0.0f, 0x1.33a962p-82f,
     0x1.f51052p-51f, 0.0f, 0x1.4c8e48p-56f, 0.0f, 0x1.c67878p-52f, 0.0f,
     0x1.f03e8ap-28f, 0x1.1a428ep-84f, 0x1.7cb066p-42f, 0x1.0076f2p-17f,
     0x1.5d0a1ap-122f, 0.0f, 0x1.c20cd8p-45f, 0x1.fdf7f6p-93f, 0x1.9e907cp-62f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.1f13aep-68f, 0.0f, 0x1.386f52p-87f, 0x1.043ec4p-5f,
     0x1.4c794ep-76f, 0.0f, 0.0f, 0.0f, 0x1.375dfp-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.92b968p-121f, 0.0f, 0.0f, 0x1.968ad6p-5f, 0x1.7f8e1ep-27f,
     0x1.4d3f92p-84f, 0.0f, 0x1.e1c0aep-109f, 0x1.dbbaa2p-1f, 0x1.f2f8a6p-64f, 0.0f,
     0.0f, 0x1.e0efp-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dad516p-5f, 0.0f,
     0.0f, 0x1.5eca74p-4f, 0x1.effe2p-30f, 0x1.ecbf4p-28f, 0x1.0ad992p-83f,
     0x1.c169d2p-108f, 0x1.1a711ap-69f, 0.0f, 0.0f, 0.0f, 0x1.d9a706p-116f,
     0x1.60cec6p-77f, 0.0f, 0.0f, 0x1.cefafp-84f, 0.0f, 0x1.e7ad2ap-26f, 0.0f,
     0x1.35ec2cp-109f, 0x1.22b0aep-10f, 0.0f, 0.0f, 0x1.a239dep-99f, 0.0f, 0.0f,
     0x1.fdf158p-95f, 0x1.4f7f2ep-109f, 0.0f, 0x1.767a9ap-92f, 0.0f, 0.0f,
     0x1.069212p-95f, 0x1.aad342p-103f, 0x1.88f098p-110f, 0x1.516ef8p-46f,
     0x1.a3ec9ap-30f, 0.0f, 0x1.3894f8p-33f, 0.0f, 0.0f, 0x1.f5b86p-4f, 0.0f,
     0x1.0dd3e8p-1f, 0x1.7536cap-103f, 0x1.5edab2p-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.93e25ap-71f, 0.0f, 0x1.524588p-99f, 0x1.73c3cp-40f, 0.0f, 0x1.4271f6p-40f,
     0.0f, 0.0f, 0.0f, 0x1.9193acp-93f, 0.0f, 0.0f, 0x1.416002p-106f, 0.0f, 0.0f,
     0.0f, 0x1.d77c16p-47f, 0.0f, 0.0f, 0.0f, 0x1.c7e44ap-54f, 0x1.f4383p-38f,
     0x1.f67e6ep-62f, 0x1.a4121ep-46f, 0.0f, 0.0f, 0.0f, 0x1.2f0b36p-104f,
     0x1.93ab72p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.37a04cp-39f, 0.0f,
     0x1.5c83f6p-31f, 0x1.c55106p-116f, 0x1.59f904p-27f, 0.0f, 0.0f, 0x1.c983bp-36f,
     0.0f, 0.0f, 0x1.608bd6p-58f, 0.0f, 0.0f, 0x1.17d046p-114f, 0x1.dfc008p-46f,
     0x1.84d28ap-122f, 0.0f, 0x1.aac104p-39f, 0.0f, 0x1.0db11ep-70f, 0x1.a25e02p-116f,
     0x1.fc9fdcp-10f, 0.0f, 0x1.78168p-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.edb4f2p-104f, 0x1.31aa02p-85f, 0.0f, 0.0f, 0.0f,
     0x1.3aa3ecp-89f, 0x1.90c338p-123f, 0x1.752d14p-11f, 0x1.489d64p-106f,
     0x1.4b81bep-13f, 0x1.fbc938p-117f, 0x1.079036p-27f, 0x1.142c2cp-26f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a3cd56p-111f, 0.0f, 0x1.01e5fcp-72f, 0x1.284798p-43f, 0.0f, 0.0f,
     0x1.5707a8p-92f, 0x1.ecd4dap-22f, 0x1.de220ap-124f, 0x1.1e6f56p-17f,
     0x1.ab25eap-55f, 0x1.7560f4p-100f, 0.0f, 0x1.a040e4p-59f, 0.0f, 0x1.1e2c8ap-85f,
     0.0f, 0x1.10db4ep-28f, 0.0f, 0x1.600abep-16f, 0x1.8c351ap-40f, 0.0f,
     0x1.483faap-70f, 0.0f, 0.0f, 0x1.ffb88ep-14f, 0x1.9a57b4p-9f, 0.0f, 0.0f, 0.0f,
     0x1.8eba0ap-30f, 0x1.fef812p-94f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.3c0084p-70f,
     0.0f, 0x1.306b7p-5f, 0x1.2d4c24p-74f, 0.0f, 0.0f, 0x1.810222p-103f,
     0x1.622378p-125f, 0x1.de91d6p-52f, 0x1.498e88p-95f, 0x1.df4622p-66f, 0.0f,
     0x1.4d2678p-64f, 0x1.acf772p-117f, 0x1.53fbdcp-85f, 0x1.1e66aap-126f,
     0x1.c1ab22p-102f, 0.0f, 0x1.0b622p-64f, 0x1.ac2a58p-47f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e3ed3ap-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f28346p-78f, 0.0f, 0.0f,
     0x1.d2b9e8p-61f, 0.0f, 0x1.59056p-53f, 0x1.70293ep-36f, 0.0f, 0.0f, 0.0f,
     0x1.b4bed4p-6f, 0x1.6e2c84p-20f, 0x1.d40f4ap-21f, 0x1.50f9a6p-104f, 0.0f,
     0x1.731d84p-72f, 0.0f, 0x1.706e82p-101f, 0x1.82fdbp-23f, 0x1.d01268p-91f,
     0x1.56649ap-60f, 0.0f, 0x1.65da1p-126f, 0x1.f42358p-121f, 0x1.f1b08p-38f,
     0x1.5e2016p-105f, 0x1.cf8852p-76f, 0x1.99fc48p-30f, 0.0f, 0x1.70a2bp-47f,
     0x1.7eaa88p-17f, 0x1.337d1ap-80f, 0x1.5b70d2p-17f, 0.0f, 0x1.b96d92p-76f, 0.0f,
     0.0f, 0.0f, 0x1.b03324p-32f, 0x1.5b9abcp-36f, 0.0f, 0x1.9ca756p-36f,
     0x1.463796p-86f, 0x1.9cf4ccp-89f, 0x1.2d395p-24f, 0.0f, 0.0f, 0.0f,
     0x1.74efb4p-98f, 0.0f, 0.0f, 0x1.fe47fap-25f, 0x1.1bdb1p-24f
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
            tmp1 = Sleef_tanf1_u10purecfma(tmp0);
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
    printf("Sleef_tanf1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_tanf1_u10purecfma bench acc %a\n", global_bench_acc);
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
