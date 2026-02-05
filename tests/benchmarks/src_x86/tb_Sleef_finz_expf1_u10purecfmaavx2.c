/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_expf1_u10purecfma.c --function \
 *     Sleef_finz_expf1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.339dc2p-34f, 0.0f, 0x1.2c28d8p-123f,
     0x1.6d0c4ap-86f, 0x1.195494p-103f, 0.0f, 0x1.3715f6p-61f, 0x1.9d600ep-44f,
     0x1.68e748p-124f, 0.0f, 0x1.980f04p-61f, 0.0f, 0x1.1e0c7p-113f, 0x1.d45aap-89f,
     0.0f, 0x1.2e3354p-83f, 0x1.6aa97p-10f, 0.0f, 0.0f, 0.0f, 0x1.12df7ap-92f,
     0x1.5e7178p-36f, 0x1.0667b8p-21f, 0.0f, 0x1.b151dp-103f, 0.0f, 0x1.cacdb4p-26f,
     0.0f, 0x1.78a9aap-97f, 0.0f, 0.0f, 0x1.a3cabap-118f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e96302p-16f, 0.0f, 0.0f, 0x1.91e09ap-88f, 0.0f, 0x1.aeb6acp-60f, 0.0f, 0.0f,
     0x1.0394dap-54f, 0x1.1a968ap-24f, 0x1.9c53ecp-60f, 0x1.164c8ap-37f, 0.0f,
     0x1.5fa818p-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.41ef6ep-15f, 0x1.2c1804p-114f, 0x1.3fef5p-78f, 0x1.aa7c58p-92f, 0.0f,
     0x1.9ce06p-51f, 0.0f, 0x1.5bf9a8p-41f, 0x1.0dce5ap-68f, 0x1.1e0498p-104f,
     0x1.d74252p-96f, 0.0f, 0x1.ed89eap-106f, 0x1.a22c94p-16f, 0x1.e14f44p-119f,
     0x1.626f1ep-23f, 0x1.45d0fap-17f, 0.0f, 0x1.ef166p-80f, 0.0f, 0x1.6d2b36p-125f,
     0x1.1611bp-75f, 0.0f, 0x1.09498ep-6f, 0.0f, 0.0f, 0x1.38b426p-104f, 0.0f,
     0x1.67215p-78f, 0x1.9f4694p-111f, 0.0f, 0x1.7c3f46p-97f, 0.0f, 0x1.f917dcp-105f,
     0.0f, 0x1.49d402p-64f, 0x1.6ab2a6p-24f, 0x1.3397c6p-18f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7892bep-98f, 0x1.d4a718p-45f, 0.0f, 0x1.58b2ep-125f, 0.0f, 0.0f,
     0x1.c0682ep-116f, 0.0f, 0x1.5e7064p-4f, 0x1.fc9b7cp-100f, 0.0f, 0x1.1ee3e4p-24f,
     0.0f, 0x1.b469dep-20f, 0x1.e3f82ap-54f, 0x1.200c16p-22f, 0x1.e4a97ap-23f,
     0x1.a09bcp-56f, 0.0f, 0.0f, 0.0f, 0x1.47479cp-62f, 0.0f, 0.0f, 0x1.7554a8p-41f,
     0.0f, 0.0f, 0.0f, 0x1.eca54p-30f, 0x1.04f8aap-110f, 0x1.fc2292p-24f, 0.0f, 0.0f,
     0x1.92873cp-8f, 0x1.87f41ep-62f, 0.0f, 0x1.53ae72p-13f, 0x1.04491ap-122f, 0.0f,
     0x1.6f1f7ep-68f, 0.0f, 0x1.0f33c4p-109f, 0.0f, 0.0f, 0.0f, 0x1.98625cp-22f,
     0x1.9e0cf6p-103f, 0x1.a358f8p-15f, 0x1.05cd2ap-25f, 0x1.33b548p-61f, 0.0f,
     0x1.fd971ap-20f, 0x1.0b969ep-61f, 0.0f, 0x1.cfaf2ap-72f, 0x1.9b6704p-45f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.99a0dep-117f, 0.0f, 0.0f, 0x1.bdda5cp-110f,
     0x1.93604ep-86f, 0x1.fd8166p-57f, 0x1.3851a6p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a1d3dcp-81f, 0.0f, 0.0f, 0.0f,
     0x1.7709c2p-117f, 0x1.b1b924p-84f, 0.0f, 0.0f, 0x1.63a0ecp-28f, 0x1.5546e2p-51f,
     0x1.08535ap-121f, 0x1.6b2b88p-19f, 0x1.ae3786p-103f, 0.0f, 0x1.c37caap-26f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9cb678p-47f, 0.0f, 0.0f, 0x1.15369cp-124f, 0.0f,
     0x1.07d5aep-37f, 0.0f, 0x1.8cc3eep-107f, 0.0f, 0x1.2579b4p-70f, 0.0f, 0.0f, 0.0f,
     0x1.a430dep-6f, 0x1.6b0d18p-126f, 0.0f, 0.0f, 0x1.aab608p-98f, 0x1.ff3d6cp-121f,
     0.0f, 0.0f, 0x1.1642e8p-107f, 0x1.c19c08p-26f, 0x1.9d597cp-33f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.2abfb8p-104f, 0x1.6d168p-74f, 0.0f, 0.0f, 0x1.f0faa4p-4f,
     0x1.b6395ap-65f, 0.0f, 0x1.12aea2p-101f, 0.0f, 0x1.5e6a36p-125f,
     0x1.e69b4cp-105f, 0x1.f4a3b8p-93f, 0x1.1c3abep-100f, 0.0f, 0x1.74b18p-52f,
     0x1.2d77f4p-23f, 0.0f, 0x1.ccd452p-40f, 0.0f, 0x1.b8337p-73f, 0x1.4e2886p-20f,
     0x1.26e26cp-37f, 0x1.7460b8p-76f, 0.0f, 0.0f, 0x1.81ff0ep-74f, 0.0f,
     0x1.fea548p-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7d9c28p-30f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f858eep-94f, 0x1.977c74p-105f, 0x1.3fc0d6p-112f, 0.0f, 0x1.838026p-12f,
     0x1.80011ep-71f, 0.0f, 0x1.be3bdep-121f, 0x1.2e0366p-98f, 0.0f, 0.0f, 0.0f,
     0x1.36023ap-69f, 0x1.d59292p-2f, 0.0f, 0.0f, 0x1.080cbep-56f, 0x1.a5e72p-21f,
     0x1.21b46ep-59f, 0x1.1af304p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3d3bc8p-41f,
     0x1.5ab89ep-49f, 0.0f, 0.0f, 0.0f, 0x1.63018cp-109f, 0.0f, 0x1.02606ap-90f, 0.0f,
     0x1.ce9fa2p-35f, 0.0f, 0x1.f0944p-36f, 0.0f, 0x1.596464p-17f, 0.0f,
     0x1.b04b58p-110f, 0x1.89e412p-34f, 0x1.cddd2ap-98f, 0.0f, 0x1.39dcf6p-9f, 0.0f,
     0x1.66f8fap-36f, 0x1.f00698p-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8e26a8p-29f,
     0x1.faafeap-28f, 0x1.86c9eap-12f, 0x1.b70d1cp-116f, 0x1.5102aap-83f, 0.0f, 0.0f,
     0x1.00ad8cp-20f, 0.0f, 0x1.9d6482p-72f, 0.0f, 0.0f, 0x1.d048b2p-24f,
     0x1.8f9e9p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.97feep-49f, 0.0f, 0x1.47acp-71f,
     0x1.2c1c9ap-64f, 0.0f, 0x1.ca1928p-103f, 0x1.39a93ap-24f, 0x1.d5665cp-56f, 0.0f,
     0x1.9f5a8ep-126f, 0x1.ec585ap-61f, 0x1.3a3d4ap-120f, 0.0f, 0.0f, 0x1.213f9cp-74f,
     0x1.2d19fp-53f, 0x1.4a027ap-59f, 0x1.733626p-57f, 0.0f, 0x1p0f, 0x1.3ae70cp-42f,
     0.0f, 0x1.b9155p-115f, 0x1.f94c7p-83f, 0x1.93a0fcp-116f, 0.0f, 0x1.02a156p-115f,
     0.0f, 0.0f, 0x1.100d46p-13f, 0x1.5428d6p-29f, 0x1.6c0bccp-114f, 0x1.2076b6p-97f,
     0x1.313c0cp-5f, 0x1.b1105ep-21f, 0x1.f2258ep-46f, 0x1.1cb9cp-19f,
     0x1.ad986cp-28f, 0.0f, 0x1.6835bep-24f, 0x1.d6250cp-30f, 0.0f, 0x1.325818p-24f,
     0.0f, 0x1.a1893cp-10f, 0.0f, 0x1.f7624ep-95f, 0.0f, 0x1.57b83p-76f,
     0x1.936038p-12f, 0x1.79cadcp-106f, 0x1.4387bap-1f, 0.0f, 0.0f, 0x1.da2764p-120f,
     0x1.4fe17ep-52f, 0.0f, 0x1.d156fep-45f, 0x1.4d1a02p-15f, 0.0f, 0x1.19f55cp-24f,
     0.0f, 0x1.734c28p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fe89fap-98f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b444fap-105f, 0x1.ca3902p-123f, 0x1.918da4p-29f, 0.0f, 0.0f,
     0x1.339edcp-73f, 0x1.8dcacp-66f, 0x1.e27042p-104f, 0.0f, 0x1.280454p-63f,
     0x1.bc0a7p-37f, 0.0f, 0x1.b74cc6p-1f, 0.0f, 0x1.98c304p-102f, 0.0f,
     0x1.eda78ap-16f, 0.0f, 0x1.688dbp-36f, 0x1.f9fafap-4f, 0x1.7d2c48p-117f,
     0x1.455f6ep-90f, 0x1.ef00ccp-58f, 0x1.06fb8p-119f, 0x1.ad9acp-52f, 0.0f,
     0x1.c51516p-30f, 0x1.7e13e6p-69f, 0.0f, 0.0f, 0x1.38af52p-70f, 0x1.52cf62p-98f,
     0.0f, 0.0f, 0x1.f4abfcp-25f, 0.0f, 0x1.deb734p-81f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9dcaf4p-79f, 0.0f, 0.0f, 0x1.4c0bd2p-32f, 0.0f, 0x1.2bc0aap-124f, 0.0f,
     0x1.e2121ap-125f, 0x1.ee8064p-7f, 0x1.7a78dp-34f, 0x1.47d374p-4f, 0x1.4461cp-63f,
     0.0f, 0x1.346532p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4cc882p-120f, 0x1.8563dcp-22f,
     0.0f, 0x1.edddeep-29f, 0.0f, 0x1.4654bcp-93f, 0.0f, 0x1.42d796p-95f,
     0x1.866ee6p-102f, 0x1.b05a7cp-17f, 0x1.f5fb9p-79f, 0x1.c8a85cp-21f,
     0x1.85af7p-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.306bd8p-22f,
     0x1.6dd10ep-103f, 0.0f, 0x1.a0b73p-102f, 0.0f, 0x1.8a1db6p-37f, 0.0f,
     0x1.5196b8p-60f, 0x1.86d888p-73f, 0.0f, 0x1.885ad2p-10f, 0x1.5b2e2ep-65f,
     0x1.64746cp-100f, 0.0f, 0x1.e69294p-54f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4a3128p-101f, 0.0f, 0.0f, 0x1.8add1ap-92f, 0.0f, 0x1.ee3c9cp-49f, 0.0f, 0.0f,
     0.0f, 0x1.b2d0d2p-120f, 0.0f, 0x1.21ba38p-27f, 0.0f, 0.0f, 0.0f, 0x1.8e7acap-52f,
     0x1.891254p-26f, 0.0f, 0.0f, 0x1.fa5902p-12f, 0.0f, 0x1.699dbcp-122f, 0.0f,
     0x1.c4c7bcp-43f, 0x1.0d3298p-97f, 0x1.37d294p-66f, 0x1.7f4dep-81f, 0.0f,
     0x1.dc90ccp-39f, 0.0f, 0x1.3554a4p-63f, 0.0f, 0x1.af082p-101f, 0.0f,
     0x1.c917a2p-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f9541p-123f, 0.0f, 0x1.c89abap-31f,
     0.0f, 0.0f, 0x1.c6f538p-25f, 0.0f, 0.0f, 0.0f, 0x1.2cbb9cp-65f, 0x1.e2f3c8p-14f,
     0.0f, 0.0f, 0.0f, 0x1.77695p-24f, 0x1.d4f31ap-95f, 0x1.1c6cdp-107f,
     0x1.d9d668p-108f, 0x1.76e1c4p-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.66e118p-111f, 0.0f, 0x1.9eceacp-40f, 0x1.ac3682p-117f, 0x1.61b88cp-66f,
     0x1.67251p-79f, 0x1.c022c4p-11f, 0x1.38493ep-105f, 0.0f, 0x1.ab483ep-22f,
     0x1.052ed4p-101f, 0.0f, 0x1.04cc22p-47f, 0.0f, 0x1.bc0a82p-36f, 0x1.a5083cp-29f,
     0.0f, 0x1.4775cep-105f, 0.0f, 0x1.2869f6p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.15466ep-107f, 0x1.6c055ap-1f, 0.0f, 0x1.036dccp-102f, 0.0f, 0x1.9ee9cp-70f,
     0x1.f4f868p-21f, 0.0f, 0x1.8ed286p-117f, 0.0f, 0.0f, 0.0f, 0x1.840e46p-90f, 0.0f,
     0x1.f99a12p-83f, 0x1.0be07ep-85f, 0x1.a7b1a2p-13f, 0x1.16d8fcp-45f, 0.0f, 0.0f,
     0x1.dca7a8p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3c1666p-81f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.501f62p-126f, 0.0f, 0.0f, 0x1.d843bep-39f, 0.0f, 0x1.eaaf9ap-19f,
     0x1.7b10b6p-87f, 0.0f, 0x1.e7f5cp-6f, 0x1.fef33ep-106f, 0.0f, 0x1.8fc322p-119f,
     0x1.4bae9cp-61f, 0.0f, 0.0f, 0.0f, 0x1.abe4dap-42f, 0.0f, 0x1.8f2c1ep-14f, 0.0f,
     0x1.87b26ap-125f, 0x1.50b9a8p-125f, 0.0f, 0.0f, 0x1.db5a8ap-36f, 0x1.ccfab2p-1f,
     0x1.9010fcp-49f, 0x1.5ae7p-98f, 0.0f, 0x1.5c07a2p-103f, 0.0f, 0.0f,
     0x1.23c308p-24f, 0.0f, 0.0f, 0x1.88e8fep-77f, 0.0f, 0x1.7661f2p-75f,
     0x1.6ba15ep-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b998eap-91f, 0.0f, 0x1.0acb7ap-72f,
     0x1.85dbcp-42f, 0x1.26ccfap-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.87f142p-22f,
     0x1.5b3738p-93f, 0x1.92b318p-122f, 0x1.b8fbaap-4f, 0x1.5474cep-107f, 0.0f,
     0x1.5d5b1ep-35f, 0.0f, 0x1.00d682p-62f, 0.0f, 0.0f, 0.0f, 0x1.4ae368p-109f,
     0x1.1faad2p-110f, 0.0f, 0x1.7d0f04p-13f, 0x1.cd235p-7f, 0x1.e92d8ap-58f, 0.0f,
     0x1.8848d4p-53f, 0x1.1612dap-77f, 0.0f, 0.0f, 0x1.b5a1eep-61f, 0.0f, 0.0f,
     0x1.9663fap-72f, 0.0f, 0.0f, 0x1.163408p-58f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.680856p-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6baa44p-58f,
     0.0f, 0.0f, 0x1.44cccep-101f, 0x1.fe3386p-89f, 0x1.16130ep-38f, 0x1.a5494ap-48f,
     0x1.520852p-32f, 0x1.e71bf6p-43f, 0x1.5b82dcp-60f, 0x1.c4a97p-116f, 0.0f, 0.0f,
     0x1.51a4a8p-96f, 0x1.90c83ap-41f, 0x1.5023e4p-31f, 0x1.16aa36p-19f,
     0x1.fd53b4p-64f, 0.0f, 0x1.4bbadcp-33f, 0.0f, 0x1.253452p-19f, 0.0f,
     0x1.859b7ep-82f, 0.0f, 0x1.e20be2p-126f, 0.0f, 0.0f, 0x1.65e5a8p-61f,
     0x1.6c3ac4p-68f, 0.0f, 0x1.58f9f6p-32f, 0.0f, 0x1.0e3728p-5f, 0x1.3af17ap-72f,
     0x1.85ebe6p-38f, 0.0f, 0.0f, 0.0f, 0x1.2c85fep-111f, 0.0f, 0.0f,
     0x1.e33d66p-125f, 0x1.f087f2p-27f, 0.0f, 0.0f, 0.0f, 0x1.534c96p-66f,
     0x1.14ba9ep-62f, 0.0f, 0.0f, 0.0f, 0x1.fb63f2p-37f, 0.0f, 0.0f, 0x1.888738p-102f,
     0.0f, 0.0f, 0.0f, 0x1.52d2c6p-25f, 0x1.1379aep-86f, 0x1.e0aaf4p-94f, 0.0f,
     0x1.7b75f2p-22f, 0x1.be6acap-67f, 0x1.b3abbep-80f, 0x1.c03ac8p-33f,
     0x1.dfadfp-125f, 0x1.755622p-75f, 0.0f, 0x1.848dd4p-57f, 0.0f, 0x1.ece29p-64f,
     0x1.7596fep-123f, 0.0f, 0.0f, 0x1.2cd454p-54f, 0.0f, 0.0f, 0.0f, 0x1.7e330cp-87f,
     0x1.642b8cp-100f, 0x1.45c47cp-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ff7b3cp-96f,
     0x1.d0c7fp-65f, 0x1.ebd552p-17f, 0x1.fc03ccp-74f, 0x1.96757cp-35f,
     0x1.eb6306p-123f, 0x1.47c1c2p-57f, 0.0f, 0.0f, 0x1.fed344p-7f, 0.0f, 0.0f, 0.0f,
     0x1.ce2478p-41f, 0.0f, 0.0f, 0x1.bdc262p-36f, 0x1.d7b114p-11f, 0x1.d28828p-115f,
     0x1.e65ba8p-61f, 0.0f, 0x1.9be234p-10f, 0x1.88566cp-84f, 0.0f, 0x1.311bdap-59f,
     0.0f, 0.0f, 0x1.10056p-50f, 0x1.b4c308p-50f, 0x1.b028e2p-89f, 0x1.abf85ep-13f,
     0x1.802428p-20f, 0x1.69adfap-90f, 0.0f, 0.0f, 0x1.3c9cd2p-126f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.0f01p-23f, 0x1.bd274ap-121f, 0x1.4ad926p-102f, 0x1.1ff638p-15f,
     0x1.239cfap-39f, 0.0f, 0.0f, 0x1.9cd3ep-123f, 0x1.665bbcp-120f, 0.0f,
     0x1.286412p-36f, 0x1.fcae0ap-92f, 0.0f, 0x1.59d3b4p-51f, 0x1.b1826ep-75f,
     0x1.bb694cp-99f, 0x1.ec0bdap-82f, 0.0f, 0.0f, 0.0f, 0x1.1f53p-5f, 0.0f,
     0x1.18ac54p-10f, 0.0f, 0x1.7e201ep-71f, 0x1.80d22ap-101f, 0.0f, 0x1.69bc08p-80f,
     0.0f, 0.0f, 0x1.54cad6p-36f, 0.0f, 0x1.b65cacp-110f, 0x1.7a9e56p-58f,
     0x1.afe246p-49f, 0.0f, 0x1.995bc4p-100f, 0.0f, 0x1.9e1d4ap-31f, 0x1.2d5a8ap-73f,
     0.0f, 0x1.e7e626p-36f, 0x1.4f0696p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c5b708p-48f, 0x1.164d56p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9156bp-116f, 0.0f,
     0x1.6093c8p-47f, 0.0f, 0x1.01ac98p-84f, 0.0f, 0.0f, 0.0f, 0x1.0e11a6p-55f,
     0x1.5aa6d2p-67f, 0.0f, 0x1.27fd94p-22f, 0x1.2af2e4p-32f, 0.0f, 0x1.c11352p-124f,
     0x1.603b8ap-42f, 0x1.7e60d2p-80f, 0x1.8b5006p-5f, 0.0f, 0.0f, 0x1.7aecbp-78f,
     0.0f, 0.0f, 0x1.12bf66p-78f, 0.0f, 0.0f, 0.0f, 0x1.970a4p-103f, 0x1.f0787ap-78f,
     0x1.8371e2p-112f, 0x1.370cap-111f, 0.0f, 0x1.b4443cp-30f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.71e97ep-23f, 0x1.9e89eap-29f, 0x1.a36e5cp-3f, 0.0f, 0.0f, 0x1.b578cp-112f,
     0.0f, 0.0f, 0.0f, 0x1.bb57fcp-82f, 0x1.e78da6p-103f, 0.0f, 0x1.a20f64p-1f, 0.0f,
     0x1.08bdb4p-87f, 0.0f, 0.0f, 0x1.40045p-63f, 0.0f, 0.0f, 0x1.783bcp-66f, 0.0f,
     0x1.e7f452p-13f, 0x1.8416c2p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.71ce14p-78f, 0x1.aea25ep-103f, 0x1.6fa8e8p-56f, 0.0f, 0.0f, 0x1.ecf2f8p-16f,
     0.0f, 0x1.69061ap-13f, 0x1.9a3ed4p-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0bf202p-95f, 0x1.251dc8p-35f, 0x1.a6ebe2p-109f, 0.0f, 0.0f, 0x1p0f, 0.0f,
     0.0f, 0.0f, 0x1.9afcap-70f, 0.0f, 0.0f, 0x1.148e5cp-28f
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
            tmp1 = Sleef_finz_expf1_u10purecfma(tmp0);
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
    printf("Sleef_finz_expf1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_expf1_u10purecfma bench acc %a\n", global_bench_acc);
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
