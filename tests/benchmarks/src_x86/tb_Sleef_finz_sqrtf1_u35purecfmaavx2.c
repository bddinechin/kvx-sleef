/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sqrtf1_u35purecfma.c --function \
 *     Sleef_finz_sqrtf1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.1b123p-113f, 0x1.c8f076p-28f, 0.0f, 0x1.5e02fcp-63f, 0.0f, 0x1.2a2e2ap-68f,
     0x1.ff2bdcp-12f, 0.0f, 0x1.16d892p-90f, 0.0f, 0.0f, 0x1.8cab98p-37f,
     0x1.0888dap-118f, 0x1.ae49f8p-117f, 0x1.4d369cp-110f, 0x1.7973aap-23f,
     0x1.8a38c8p-26f, 0.0f, 0.0f, 0x1.9c82p-74f, 0.0f, 0x1.5605bp-14f,
     0x1.affe1ap-100f, 0x1.c48b7ap-61f, 0x1.856682p-23f, 0.0f, 0.0f, 0x1.afdb3p-116f,
     0x1.b6907ap-75f, 0.0f, 0.0f, 0x1.d30898p-75f, 0x1.5e56aep-59f, 0.0f, 0.0f,
     0x1.4977f8p-35f, 0.0f, 0x1.891be6p-65f, 0x1.d7ad82p-110f, 0.0f, 0x1.657dd8p-118f,
     0x1.6facb6p-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5ad9ccp-2f, 0x1.076536p-123f, 0.0f,
     0.0f, 0.0f, 0x1.81909ap-74f, 0x1.4f06fap-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.af2bd2p-38f, 0x1.0950ap-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e163e4p-100f,
     0x1.fad748p-20f, 0.0f, 0x1.179176p-114f, 0.0f, 0x1.c9b0aep-42f, 0x1.17ed24p-104f,
     0x1.bf5172p-68f, 0.0f, 0x1.d3379p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.29075ap-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.073f0ep-6f, 0x1.cfa8f4p-116f,
     0x1.ece7fap-16f, 0x1.ddbabap-45f, 0x1.82394p-8f, 0x1.98f6d8p-43f, 0.0f,
     0x1.70167p-125f, 0x1.90ac66p-126f, 0x1.8d728p-69f, 0.0f, 0.0f, 0x1.9ab8bap-49f,
     0x1.c76afap-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1dbf3ap-10f, 0.0f, 0x1.734e14p-66f,
     0x1.193324p-95f, 0.0f, 0x1.2bf61ap-35f, 0.0f, 0x1.047b72p-20f, 0x1.a3c88p-27f,
     0.0f, 0.0f, 0.0f, 0x1.4c64d2p-82f, 0.0f, 0.0f, 0x1.7e088p-57f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.d2f0b8p-69f, 0x1.b43b6p-121f, 0x1.d36576p-10f, 0x1.d2433ep-123f, 0.0f,
     0.0f, 0.0f, 0x1.c47276p-98f, 0.0f, 0x1.e3fe7ep-107f, 0.0f, 0x1.2be856p-33f,
     0x1.c2f238p-61f, 0x1.7f12dp-34f, 0x1.aa527ep-16f, 0x1.876e4ap-36f,
     0x1.50712p-86f, 0.0f, 0x1.3f95b2p-118f, 0x1.a0ea94p-2f, 0x1.ae2844p-49f,
     0x1.5f97bp-84f, 0x1.d14a58p-100f, 0x1.63ad24p-86f, 0.0f, 0.0f, 0.0f,
     0x1.c0089ep-101f, 0.0f, 0x1.9fe144p-75f, 0x1.0e9a68p-104f, 0.0f, 0.0f,
     0x1.da217ep-112f, 0.0f, 0x1.c4e7fep-114f, 0x1.3a6a6p-43f, 0x1.8bdcd4p-100f,
     0x1.54b4b6p-90f, 0.0f, 0x1.2bd4p-42f, 0x1.6e3614p-4f, 0.0f, 0x1.dcf532p-61f,
     0.0f, 0.0f, 0.0f, 0x1.9f2694p-75f, 0x1.9ebd1p-99f, 0.0f, 0x1.53bddap-21f,
     0x1.8329e8p-69f, 0x1.50bb1ep-17f, 0x1.8ce826p-26f, 0x1.e95bd8p-18f,
     0x1.25956cp-108f, 0x1.938d3ep-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9f3f38p-121f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.73d6b2p-65f, 0x1.8742c4p-97f, 0.0f, 0.0f,
     0.0f, 0x1.fdb4f4p-37f, 0x1.c6cd44p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.90bb78p-64f,
     0x1.b430e6p-126f, 0x1.fdf4cep-49f, 0.0f, 0.0f, 0x1.7cfbfep-25f, 0.0f,
     0x1.7556f4p-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.09234ep-19f,
     0.0f, 0.0f, 0x1.c140ecp-15f, 0x1.58600cp-55f, 0x1.2a42bp-70f, 0x1.680ef2p-121f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.959eb8p-41f, 0x1.127394p-16f, 0.0f, 0x1.20335p-109f,
     0x1.f419a8p-96f, 0x1.22135ap-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fd60e6p-70f,
     0x1.8d2d5p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b8fca4p-9f, 0.0f, 0x1.b4222cp-92f,
     0x1.6ce962p-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0478fp-99f,
     0x1.d03c66p-122f, 0x1.77461ep-60f, 0x1.f16edp-120f, 0.0f, 0x1.77e99p-4f,
     0x1.c96a86p-90f, 0x1.39a482p-106f, 0x1.aa5d38p-8f, 0.0f, 0x1.06af2ep-120f,
     0x1.783a3cp-85f, 0x1.e995bcp-93f, 0.0f, 0.0f, 0.0f, 0x1.cbbaaep-28f, 0.0f,
     0x1.6d05f4p-102f, 0.0f, 0x1.e53524p-27f, 0.0f, 0.0f, 0.0f, 0x1.efc3fep-49f,
     0x1.20d044p-65f, 0.0f, 0x1.5ffb0ep-29f, 0x1.0ec2cp-78f, 0x1.12d122p-80f, 0.0f,
     0.0f, 0x1.6327f8p-32f, 0.0f, 0.0f, 0.0f, 0x1.b38cfp-111f, 0.0f, 0.0f, 0.0f,
     0x1.5cac4ap-3f, 0.0f, 0x1.b4f82ap-119f, 0x1.ce5a06p-58f, 0.0f, 0x1.f89524p-95f,
     0x1.458b02p-24f, 0.0f, 0x1.6a6edcp-47f, 0.0f, 0.0f, 0.0f, 0x1.ea5d72p-53f, 0.0f,
     0.0f, 0.0f, 0x1.575eeep-11f, 0x1.e43728p-92f, 0.0f, 0.0f, 0x1.dff174p-47f,
     0x1.87d39cp-69f, 0x1.3be318p-104f, 0.0f, 0x1.a316c4p-75f, 0x1.d69828p-7f, 0.0f,
     0x1.89e2aep-106f, 0.0f, 0x1.9f4546p-115f, 0x1.60b706p-123f, 0x1.66fb9cp-111f,
     0.0f, 0.0f, 0.0f, 0x1.c7d35p-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.726ebep-49f,
     0.0f, 0x1.a8f3eap-109f, 0x1.9b4ae8p-12f, 0x1.c54a1p-57f, 0.0f, 0.0f,
     0x1.f9e524p-57f, 0x1.399496p-27f, 0.0f, 0.0f, 0x1.5646cep-69f, 0x1.93003p-86f,
     0x1.2ce742p-41f, 0x1.9b7d16p-30f, 0.0f, 0.0f, 0x1.746f54p-89f, 0.0f, 0.0f,
     0x1.77e5a8p-123f, 0x1.0c6de6p-44f, 0x1.2839a8p-22f, 0x1.74d8f8p-21f, 0.0f,
     0x1.340c42p-122f, 0x1.7d50f8p-79f, 0x1.b25e7ep-51f, 0.0f, 0.0f, 0.0f,
     0x1.3349a4p-11f, 0x1.37f19cp-70f, 0x1.974d76p-35f, 0.0f, 0x1.9622a8p-41f, 0.0f,
     0.0f, 0x1.0d0358p-115f, 0x1.1824ap-123f, 0.0f, 0x1.c3cb4ep-55f, 0x1.180a76p-116f,
     0x1.7a584ep-93f, 0.0f, 0.0f, 0.0f, 0x1.ea6a6ep-32f, 0x1.b4a4aep-50f,
     0x1.503fcap-26f, 0x1.457cecp-81f, 0.0f, 0.0f, 0.0f, 0x1.1a6594p-7f,
     0x1.c626dap-48f, 0.0f, 0x1.d9693ep-95f, 0x1.9c1b18p-33f, 0.0f, 0x1.d75bfap-96f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fe212p-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.480b86p-60f, 0.0f, 0.0f, 0x1.c741ep-16f, 0x1.4fedbcp-96f, 0.0f,
     0x1.1e62f8p-37f, 0.0f, 0x1.25ac08p-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.547c5ap-85f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.6dae92p-119f, 0.0f, 0.0f, 0x1.20737p-49f,
     0x1.7bb984p-28f, 0x1.4a977cp-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2059cap-76f, 0.0f,
     0x1.9f1404p-43f, 0.0f, 0.0f, 0x1.27abbp-14f, 0.0f, 0x1.f4aa6cp-1f,
     0x1.8e6326p-33f, 0x1.5cddfcp-41f, 0x1.804274p-56f, 0.0f, 0.0f, 0.0f,
     0x1.7cba12p-52f, 0.0f, 0.0f, 0x1.2969b6p-61f, 0.0f, 0x1.ba10e6p-25f, 0.0f,
     0x1.f65354p-81f, 0.0f, 0.0f, 0x1.3a93aep-121f, 0.0f, 0.0f, 0x1.096c92p-85f,
     0x1.23f322p-12f, 0x1.ce296ap-90f, 0x1.ef9c16p-32f, 0.0f, 0x1.02f2fap-63f, 0.0f,
     0.0f, 0.0f, 0x1.21025cp-6f, 0.0f, 0.0f, 0x1.d06ddep-66f, 0.0f, 0x1.686c3p-112f,
     0x1.c7a9p-86f, 0.0f, 0.0f, 0x1.2dfcccp-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.08d79cp-60f, 0.0f, 0.0f, 0.0f, 0x1.33adb2p-59f, 0x1.bdca42p-6f,
     0x1.c31d6cp-121f, 0x1.a75e48p-5f, 0x1.ef586ep-98f, 0x1.f0feb4p-29f,
     0x1.1b96bcp-58f, 0x1.5c3bdap-92f, 0x1.00495p-15f, 0x1.465366p-68f, 0.0f,
     0x1.49fc3p-71f, 0x1.ef5ba2p-123f, 0x1.57ea46p-71f, 0.0f, 0.0f, 0x1.54d7d4p-41f,
     0x1.5ff164p-55f, 0x1.c61918p-72f, 0x1.576452p-92f, 0x1.303302p-23f, 0.0f,
     0x1.a319eep-62f, 0x1.15c88ep-36f, 0x1.0c011cp-99f, 0x1.59264ep-38f, 0.0f, 0.0f,
     0x1.86ae7ap-62f, 0.0f, 0x1.d32c28p-69f, 0x1.2f61b8p-96f, 0x1.1bd174p-56f, 0.0f,
     0.0f, 0.0f, 0x1.5c0aaap-69f, 0x1.65f1cp-92f, 0x1.636582p-44f, 0.0f,
     0x1.a27d2cp-84f, 0x1.d6de4cp-34f, 0.0f, 0x1.0de146p-59f, 0.0f, 0.0f,
     0x1.cb1454p-75f, 0x1.3c8ef2p-57f, 0x1.f88942p-34f, 0.0f, 0x1.8fcd34p-34f,
     0x1.075a22p-30f, 0x1.f70152p-16f, 0.0f, 0x1.b674b8p-82f, 0x1.edd546p-10f, 0.0f,
     0.0f, 0x1.8c6f3p-62f, 0.0f, 0x1.3c6bp-75f, 0x1.7bdca8p-68f, 0.0f,
     0x1.cd77fep-17f, 0.0f, 0x1.a4867p-11f, 0x1.6fd1a2p-3f, 0x1.4184f6p-54f, 0.0f,
     0x1.4da58cp-70f, 0.0f, 0.0f, 0x1.895f5p-23f, 0x1.3282d2p-20f, 0.0f, 0.0f, 0.0f,
     0x1.b4b234p-37f, 0x1.4bd39ap-23f, 0x1.2f9766p-63f, 0x1.bdb496p-36f, 0.0f,
     0x1.e8a576p-114f, 0x1.490126p-94f, 0.0f, 0.0f, 0x1.b04572p-53f, 0.0f, 0.0f,
     0x1.5f040cp-69f, 0.0f, 0x1.0c26cp-108f, 0x1.d4d12ep-103f, 0x1.7bf0c6p-12f,
     0x1.e6eb32p-116f, 0.0f, 0x1.730bbep-76f, 0x1.baae46p-54f, 0.0f, 0.0f,
     0x1.37a6f2p-97f, 0.0f, 0x1.8b3512p-72f, 0x1.203d7ep-88f, 0x1.2e1934p-53f, 0.0f,
     0.0f, 0x1.381308p-27f, 0x1.bba834p-124f, 0x1.4d1476p-58f, 0x1.4a5334p-33f,
     0x1.03df08p-78f, 0.0f, 0.0f, 0.0f, 0x1.5888aep-36f, 0x1.238b08p-106f, 0.0f, 0.0f,
     0.0f, 0x1.462f5ap-89f, 0x1.20f8b4p-86f, 0x1.77107p-38f, 0x1.c7bcdep-78f, 0.0f,
     0x1.89fe7p-53f, 0.0f, 0x1.7f80c8p-83f, 0.0f, 0x1.fe2032p-65f, 0.0f,
     0x1.27af76p-119f, 0.0f, 0x1.b7a70ap-106f, 0.0f, 0.0f, 0x1.5ab802p-46f, 0.0f,
     0x1.790dcp-104f, 0x1.851794p-33f, 0x1.d0d4ecp-22f, 0x1.7fde0ap-113f,
     0x1.02c91cp-14f, 0x1.2ae2ccp-73f, 0x1.605638p-36f, 0.0f, 0x1.066ac8p-79f, 0.0f,
     0x1.986b4p-33f, 0x1.2737fap-124f, 0x1.8f8e8cp-79f, 0.0f, 0x1.0c02b8p-42f, 0.0f,
     0.0f, 0x1.7ffb18p-31f, 0x1.07f85ap-79f, 0x1.3a827ap-40f, 0.0f, 0x1.467a08p-2f,
     0.0f, 0x1.eee98ap-123f, 0x1.7ab4c2p-7f, 0x1.c79e9p-56f, 0.0f, 0.0f,
     0x1.21d84ap-109f, 0x1.aa092ep-10f, 0.0f, 0x1.8a422ap-57f, 0.0f, 0x1.2fb886p-110f,
     0.0f, 0.0f, 0x1.ccd2f2p-18f, 0.0f, 0x1.a1a188p-104f, 0x1.1dfc0ep-87f,
     0x1.3c987ep-42f, 0x1.dd9f66p-10f, 0x1.8543aap-44f, 0.0f, 0.0f, 0x1.82c064p-31f,
     0.0f, 0x1.764ce6p-77f, 0x1.ab5c02p-82f, 0x1.a05b8ep-24f, 0.0f, 0x1.65dddp-45f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.57770cp-6f, 0.0f, 0x1.797336p-71f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ce980cp-110f, 0x1.a510dp-17f, 0.0f, 0x1.9d0fe2p-25f, 0x1.ab28c2p-40f,
     0.0f, 0x1.9c2428p-120f, 0.0f, 0x1.e23f1p-56f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f0444ep-18f, 0.0f, 0.0f, 0x1.051c3ep-27f, 0x1.55a7c2p-107f, 0x1.168ed8p-26f,
     0.0f, 0x1.c5537p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.af07ccp-5f, 0.0f, 0.0f,
     0x1.684cdap-46f, 0x1.126376p-110f, 0x1.92192cp-1f, 0x1.cd4e8ap-117f, 0.0f, 0.0f,
     0x1.42dfdcp-21f, 0.0f, 0x1.4df85cp-110f, 0x1.bea422p-79f, 0.0f, 0x1.64b482p-38f,
     0.0f, 0.0f, 0x1.2367b2p-122f, 0.0f, 0x1.4c6ea2p-14f, 0x1.75ed26p-90f,
     0x1.f582cep-3f, 0x1.16970cp-46f, 0.0f, 0.0f, 0x1.8836e8p-59f, 0x1.d01eap-82f,
     0.0f, 0x1.f68d8p-43f, 0x1.d22cb2p-2f, 0.0f, 0.0f, 0.0f, 0x1.65bfa4p-2f, 0.0f,
     0.0f, 0x1.c2d48ep-72f, 0.0f, 0.0f, 0x1.170a06p-105f, 0.0f, 0x1.90f298p-89f,
     0x1.004792p-21f, 0.0f, 0.0f, 0x1.22849ap-62f, 0x1.56419ep-111f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.5f747p-45f, 0.0f, 0x1.238552p-70f, 0x1.0af3aep-111f, 0.0f,
     0x1.3009d8p-21f, 0x1.6a0076p-49f, 0.0f, 0x1.984bd6p-40f, 0.0f, 0x1.14b224p-13f,
     0x1.9ee37cp-50f, 0.0f, 0.0f, 0.0f, 0x1.a33e06p-50f, 0.0f, 0x1.98ce1p-51f,
     0x1.310c04p-54f, 0.0f, 0x1.b786bp-7f, 0x1.7d72d8p-52f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.30987p-118f, 0x1.23064cp-32f, 0x1.2b8ba6p-28f, 0.0f, 0x1.afe11ep-64f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f6ed2cp-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5fc5ap-6f, 0.0f,
     0.0f, 0x1.49f3p-71f, 0.0f, 0.0f, 0x1.6c8552p-77f, 0.0f, 0x1.2f2512p-15f,
     0x1.476c1cp-44f, 0.0f, 0.0f, 0x1.d9baf4p-18f, 0x1.364712p-39f, 0.0f,
     0x1.0215aep-51f, 0.0f, 0x1.d140d2p-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c86852p-108f, 0x1.15f5dp-99f, 0.0f, 0.0f, 0.0f, 0x1.099026p-34f, 0.0f, 0.0f,
     0x1.6536c8p-14f, 0x1.241de4p-65f, 0x1.ef02d2p-45f, 0.0f, 0.0f, 0x1.74d718p-1f,
     0x1.12fb9cp-19f, 0x1.6785b4p-77f, 0.0f, 0.0f, 0.0f, 0x1.c5f46ep-4f,
     0x1.818366p-52f, 0x1.e86bdp-124f, 0x1.87aa74p-23f, 0.0f, 0.0f, 0x1p0f,
     0x1.15b262p-94f, 0.0f, 0.0f, 0.0f, 0x1.5a5678p-57f, 0.0f, 0.0f, 0x1.a7aa1p-92f,
     0x1.b70924p-38f, 0.0f, 0x1.57f95ep-69f, 0x1.3c03f2p-92f, 0x1.0e9d42p-37f, 0.0f,
     0.0f, 0x1.c374bp-112f, 0x1.940846p-114f, 0.0f, 0x1.b378d8p-86f, 0x1.2a4768p-96f,
     0x1.c1fd1cp-68f, 0x1.9190a4p-122f, 0x1.75792p-38f, 0x1.697066p-58f,
     0x1.cef44cp-78f, 0.0f, 0.0f, 0x1.9a1d52p-55f, 0.0f, 0x1.3394a2p-100f, 0.0f,
     0x1.3e4f6p-100f, 0.0f, 0.0f, 0x1.0597fcp-57f, 0.0f, 0x1.fb5fd4p-82f, 0.0f,
     0x1.8d2ec8p-9f, 0.0f, 0x1.688a8p-109f, 0x1.19c706p-95f, 0.0f, 0x1.241ae4p-48f,
     0.0f, 0.0f, 0.0f, 0x1.115576p-118f, 0x1.e7d6c8p-20f, 0x1.402b36p-35f,
     0x1.e3b96ap-42f, 0x1.612fe2p-46f, 0x1.46295cp-18f, 0.0f, 0x1.4f007ep-41f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.3e9a54p-11f, 0x1.a3a3c8p-110f, 0x1.b03482p-69f,
     0x1.3624bep-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f286cap-45f, 0x1.c22a9cp-103f,
     0x1.8c4e0ap-113f, 0.0f, 0.0f, 0.0f, 0x1.b64732p-23f, 0.0f, 0x1.7d6f28p-30f, 0.0f,
     0.0f, 0x1.988554p-69f, 0x1.e3712p-107f, 0x1.69df64p-48f, 0.0f, 0.0f, 0.0f,
     0x1.ea94ep-7f, 0.0f, 0x1.79ed9cp-42f, 0x1.2bf5f2p-41f, 0.0f, 0x1.c2781ep-30f,
     0x1.24c87cp-53f, 0.0f, 0.0f, 0x1.98a06ep-104f, 0.0f, 0.0f, 0x1.a2f254p-126f,
     0x1.4ca714p-98f, 0.0f, 0x1.11cd48p-67f, 0.0f, 0x1.287428p-45f, 0.0f,
     0x1.44329ep-55f, 0x1.95a3d4p-101f, 0.0f, 0.0f, 0x1.ac0e14p-31f, 0.0f,
     0x1.eec4f6p-83f, 0x1.377228p-76f, 0x1.198ed8p-107f, 0.0f, 0.0f, 0x1.ca287p-15f,
     0.0f, 0.0f, 0x1.20bd7p-124f, 0.0f, 0x1.22e4bcp-7f, 0x1.9ab732p-102f, 0.0f, 0.0f,
     0.0f, 0x1.3c4214p-50f, 0x1.8f3e4ap-10f, 0x1.42067ep-120f, 0.0f, 0x1.234bd2p-55f,
     0.0f, 0x1.b97cbep-99f, 0x1.acee0ep-108f, 0.0f, 0.0f, 0x1.7413c2p-96f,
     0x1.48de6p-93f, 0x1.baa43cp-20f, 0x1.d0c088p-118f, 0x1.541464p-118f, 0.0f, 0.0f,
     0x1.8209a6p-95f
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
            tmp1 = Sleef_finz_sqrtf1_u35purecfma(tmp0);
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
    printf("Sleef_finz_sqrtf1_u35purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_sqrtf1_u35purecfma bench acc %a\n", global_bench_acc);
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
