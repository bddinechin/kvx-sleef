/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sinhf1_u35purecfma.c --function \
 *     Sleef_finz_sinhf1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0x1.0ff508p-100f, 0.0f, 0x1.aa66eap-31f, 0.0f, 0.0f, 0x1.9d2956p-119f,
     0.0f, 0x1.1b1a4ep-33f, 0.0f, 0x1.3b42f8p-19f, 0x1.052a88p-14f, 0x1.3a5c4ap-28f,
     0x1.421f5ep-102f, 0.0f, 0x1.2d54cp-51f, 0x1.46948ep-36f, 0x1.946bep-69f, 0.0f,
     0.0f, 0x1.351cc6p-22f, 0.0f, 0x1.7df0d4p-98f, 0.0f, 0.0f, 0x1.19966ep-126f, 0.0f,
     0x1.205baep-44f, 0.0f, 0x1.82ba8ap-119f, 0.0f, 0.0f, 0.0f, 0x1.113d3p-1f, 0.0f,
     0x1.93dd9ep-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d5eb88p-21f, 0.0f, 0x1.0b3fcap-92f,
     0.0f, 0x1.83379cp-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6ffa08p-48f,
     0x1.437eaep-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.481ebp-54f, 0x1.4026ep-4f, 0.0f,
     0.0f, 0x1.379116p-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5f272ap-35f, 0x1.3a77e4p-81f,
     0x1.2a4c68p-29f, 0.0f, 0x1.b53bc6p-79f, 0x1.a01f82p-103f, 0x1.99c90ep-111f,
     0x1.42bc86p-99f, 0x1.c8dfa4p-80f, 0.0f, 0x1.8e2588p-126f, 0x1.4a97d6p-81f,
     0x1.778538p-3f, 0.0f, 0x1.c815c2p-19f, 0x1.aca29ap-11f, 0x1.10e4d4p-109f,
     0x1.8bd414p-37f, 0x1.0504c4p-99f, 0x1.7bfc2p-78f, 0.0f, 0x1.d089b8p-17f, 0.0f,
     0.0f, 0.0f, 0x1.b84da4p-95f, 0.0f, 0.0f, 0.0f, 0x1.c0a20ep-120f, 0x1.232daep-77f,
     0.0f, 0x1.6b8ae2p-123f, 0x1.e55832p-71f, 0x1.c0453ep-29f, 0.0f, 0x1.28740cp-77f,
     0x1.52ad2cp-58f, 0.0f, 0.0f, 0x1.1384fap-4f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.88bbf8p-75f, 0x1.78dc7p-80f, 0x1.f13a32p-41f, 0x1.6cc226p-77f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f6a362p-31f, 0.0f, 0x1.1f05f8p-26f, 0x1.413e94p-8f, 0.0f,
     0x1.485806p-94f, 0x1.d88206p-50f, 0.0f, 0x1.fdea1cp-80f, 0x1.b458ccp-68f, 0.0f,
     0.0f, 0x1.675928p-21f, 0x1.30ac12p-5f, 0x1.57f48cp-31f, 0.0f, 0.0f,
     0x1.72016ep-32f, 0.0f, 0.0f, 0.0f, 0x1.cdfc96p-111f, 0x1.e9ba4ep-17f, 0.0f, 0.0f,
     0x1.7c80aap-101f, 0x1.5adc6cp-41f, 0.0f, 0x1.f7f1p-94f, 0x1.1a5116p-120f,
     0x1.bfc478p-116f, 0.0f, 0x1.dbd424p-41f, 0x1.05071p-125f, 0.0f, 0.0f,
     0x1.eb5e6ap-105f, 0.0f, 0x1.a60ad6p-25f, 0.0f, 0x1.48ef8ep-118f, 0.0f, 0.0f,
     0.0f, 0x1.7b9d1ap-16f, 0x1.ecddfcp-62f, 0x1.4d024ep-91f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.24223ap-15f, 0x1.0de7e4p-75f, 0.0f, 0.0f, 0.0f, 0x1.771068p-4f, 0.0f,
     0x1.d63582p-5f, 0x1.b51122p-102f, 0x1.fbe43cp-95f, 0.0f, 0.0f, 0.0f,
     0x1.ef660ep-5f, 0.0f, 0x1.d7a6eep-38f, 0.0f, 0x1.1a0ce4p-95f, 0.0f, 0.0f,
     0x1.f9f8bp-66f, 0x1.16df34p-88f, 0x1.4ff034p-126f, 0.0f, 0x1.dad548p-118f, 0.0f,
     0.0f, 0x1.ca2d42p-3f, 0.0f, 0x1.9c6e4p-27f, 0.0f, 0x1.410f62p-10f, 0.0f,
     0x1.9381f8p-41f, 0x1.fd88fcp-92f, 0x1.a293cp-20f, 0x1.b478ecp-23f,
     0x1.ff96e4p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2a398ep-42f, 0.0f,
     0x1.daac7cp-6f, 0x1.9682f2p-3f, 0x1.ca8498p-21f, 0.0f, 0x1.7a8df6p-44f,
     0x1.36e1dep-17f, 0x1.1f796ep-114f, 0.0f, 0.0f, 0x1.c39076p-3f, 0x1.a1f3bep-3f,
     0x1.709bf4p-117f, 0x1.d5526ap-102f, 0.0f, 0x1.5dd45ap-72f, 0.0f, 0.0f, 0.0f,
     0x1.45f15p-113f, 0.0f, 0.0f, 0x1.b48e28p-34f, 0.0f, 0.0f, 0x1.c46b6p-95f, 0.0f,
     0x1.3a2382p-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.410f3ep-1f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.90281ap-9f, 0.0f, 0x1.4f116p-37f, 0x1.f91f92p-96f, 0x1.734438p-55f, 0.0f,
     0x1.9dbb82p-71f, 0x1.49568cp-62f, 0.0f, 0.0f, 0.0f, 0x1.8a0dp-50f, 0.0f,
     0x1.d134bap-120f, 0x1.c24a4p-15f, 0x1.98632ep-63f, 0.0f, 0x1.0d611ep-100f,
     0x1.f614fap-116f, 0x1.4a719cp-74f, 0x1.6ea3dcp-108f, 0x1.0cf3p-67f, 0.0f, 0.0f,
     0.0f, 0x1.de5294p-27f, 0x1.9a862ep-49f, 0x1.848d6p-120f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f98356p-18f, 0x1.6d9fbep-119f, 0x1.bfdcecp-74f, 0x1.438888p-56f, 0.0f, 0.0f,
     0.0f, 0x1.def8b4p-5f, 0x1.ecf224p-69f, 0.0f, 0x1.9c081cp-76f, 0x1.0ad214p-90f,
     0.0f, 0x1.459e06p-93f, 0x1.9f4668p-4f, 0.0f, 0x1.e0a9aep-31f, 0x1.6f676ap-24f,
     0.0f, 0x1.f80cep-96f, 0x1.10f034p-15f, 0.0f, 0x1.52445p-42f, 0x1.578f04p-77f,
     0x1.98f49cp-78f, 0x1.29b9cep-93f, 0x1.524b3cp-45f, 0.0f, 0x1.feb848p-21f, 0.0f,
     0x1.7ccef6p-74f, 0x1.48bf4p-7f, 0.0f, 0.0f, 0x1.0bb6c2p-123f, 0x1.3c0838p-79f,
     0.0f, 0.0f, 0.0f, 0x1.c7a068p-40f, 0x1.37d812p-51f, 0x1.b1aa9p-86f, 0.0f,
     0x1.8bc2f6p-35f, 0.0f, 0x1.285a12p-43f, 0x1.5c79dap-65f, 0x1.410d4cp-88f,
     0x1.edccecp-22f, 0.0f, 0.0f, 0.0f, 0x1.0829bp-120f, 0.0f, 0.0f, 0x1.f8b44p-77f,
     0.0f, 0x1.091dd6p-35f, 0.0f, 0x1.10da2ap-99f, 0x1.f757fep-43f, 0x1.277954p-85f,
     0x1.664ae8p-55f, 0x1.8e8f04p-17f, 0.0f, 0x1.945dd2p-11f, 0.0f, 0x1.579f34p-98f,
     0x1.748fd6p-29f, 0x1.2e7334p-80f, 0x1.5efe5cp-118f, 0x1.ee6322p-34f,
     0x1.e5b3d4p-20f, 0.0f, 0x1.2fbfe4p-78f, 0x1.db11dcp-34f, 0.0f, 0x1.6b39d8p-101f,
     0.0f, 0x1.c5dafap-26f, 0x1.0e7526p-77f, 0x1.d652bp-112f, 0x1p0f, 0x1.3924a2p-57f,
     0x1.e01174p-52f, 0.0f, 0.0f, 0x1.66ce14p-62f, 0x1.4867p-36f, 0.0f, 0.0f,
     0x1.10230ap-72f, 0x1.513ed2p-91f, 0x1.de3fe6p-56f, 0x1.b38d56p-15f, 0.0f, 0.0f,
     0.0f, 0x1.34f4c4p-32f, 0x1.f5b4d8p-98f, 0x1.0b475ap-90f, 0.0f, 0.0f,
     0x1.e4eb8p-67f, 0.0f, 0x1.bd1b9cp-38f, 0.0f, 0x1.a7d276p-65f, 0.0f,
     0x1.dd02e6p-61f, 0.0f, 0x1.1152acp-109f, 0x1.3b3be2p-66f, 0.0f, 0x1.a4a6a8p-40f,
     0x1.e89bc6p-57f, 0x1.38e0dcp-35f, 0.0f, 0x1.de7418p-88f, 0.0f, 0.0f, 0.0f,
     0x1.577bccp-73f, 0.0f, 0x1.66f6b8p-104f, 0.0f, 0x1.2692fp-33f, 0x1.acde84p-23f,
     0x1.984832p-78f, 0.0f, 0x1.03a272p-91f, 0.0f, 0.0f, 0.0f, 0x1.bc511ap-78f, 0.0f,
     0x1.39c638p-103f, 0x1.e3aba8p-119f, 0x1.e462ep-35f, 0.0f, 0x1.bd7fc2p-101f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e2702ap-17f, 0x1.0e72bcp-96f, 0.0f, 0.0f, 0.0f,
     0x1.a14e24p-22f, 0.0f, 0x1.85192p-121f, 0x1.c11e2ap-54f, 0.0f, 0x1.eefd5ap-61f,
     0x1.c1adfep-21f, 0x1.5bc6aep-3f, 0x1.76f5e4p-1f, 0.0f, 0x1.77bc9ap-78f, 0.0f,
     0.0f, 0.0f, 0x1.e12586p-112f, 0.0f, 0.0f, 0x1.525886p-83f, 0.0f,
     0x1.2eedb2p-104f, 0x1.3d8428p-105f, 0.0f, 0x1.5934b2p-99f, 0.0f, 0.0f,
     0x1.fa4e8p-16f, 0.0f, 0.0f, 0x1.eb717p-75f, 0x1.993b8cp-78f, 0.0f,
     0x1.14c494p-92f, 0x1.19db78p-30f, 0.0f, 0x1.7b9392p-21f, 0.0f, 0x1.76898ap-113f,
     0x1.0aad96p-114f, 0x1.fff17ap-17f, 0x1.35235ap-46f, 0.0f, 0.0f, 0x1.cf1d4cp-62f,
     0x1.d6ebbap-36f, 0.0f, 0x1.de1e88p-27f, 0x1.3cd5cp-96f, 0x1.1914fp-119f,
     0x1.53d1b4p-20f, 0.0f, 0x1.cd9142p-36f, 0.0f, 0.0f, 0x1.6ce4b6p-57f,
     0x1.1e8ddcp-56f, 0x1.83b7dep-117f, 0.0f, 0x1.a09476p-35f, 0x1.ed7fd6p-104f,
     0x1.ac92a4p-91f, 0.0f, 0x1.a5b5e8p-99f, 0x1.66c1e8p-61f, 0.0f, 0.0f,
     0x1.b73b72p-112f, 0.0f, 0.0f, 0x1.2b238cp-28f, 0x1.737e48p-101f, 0.0f,
     0x1.6ddb28p-122f, 0.0f, 0.0f, 0.0f, 0x1.a35d68p-123f, 0.0f, 0x1.381e88p-100f,
     0x1.f2b182p-57f, 0x1.cae95ap-84f, 0x1.4961dp-68f, 0x1.5372a2p-112f, 0.0f, 0.0f,
     0x1.5d6f48p-91f, 0x1.90d83ep-40f, 0.0f, 0.0f, 0.0f, 0x1.37296p-82f, 0.0f,
     0x1.93f8c2p-70f, 0.0f, 0x1.b3a5dp-104f, 0.0f, 0x1.d7c502p-47f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.52d752p-51f, 0.0f, 0x1.a0d33p-56f, 0x1.a0533ep-1f, 0.0f,
     0x1.d402cep-45f, 0x1.748edep-83f, 0.0f, 0x1.c4b53cp-122f, 0x1.db83b2p-30f,
     0x1.7fc1c4p-51f, 0x1.f1b722p-35f, 0.0f, 0.0f, 0.0f, 0x1.8d60c4p-1f,
     0x1.721efp-22f, 0.0f, 0x1.4f26e4p-52f, 0x1.b44dccp-84f, 0x1.d705e4p-16f,
     0x1.5b2e2ap-3f, 0x1.ba1bbp-79f, 0x1.d60898p-92f, 0.0f, 0x1.15e8f8p-17f, 0.0f,
     0x1.13c51p-96f, 0.0f, 0x1.8eecf6p-122f, 0x1.cf4fb2p-4f, 0.0f, 0x1.0f0fd6p-56f,
     0x1.184bdcp-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b6c97cp-113f, 0x1.378e5ap-76f, 0.0f,
     0x1.3ec402p-50f, 0x1.5576c8p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6cb226p-36f,
     0x1.273e52p-56f, 0x1.a03c5ep-124f, 0.0f, 0.0f, 0x1.771112p-16f, 0x1.8602b2p-18f,
     0x1.e36edep-75f, 0.0f, 0.0f, 0x1.1d9d32p-37f, 0x1.68f7aap-52f, 0x1.adff06p-85f,
     0x1.5ea828p-87f, 0x1.a1ef6cp-124f, 0.0f, 0x1.1bba22p-95f, 0.0f, 0x1.5fca5ep-90f,
     0.0f, 0.0f, 0.0f, 0x1.6dd1c8p-19f, 0.0f, 0.0f, 0x1.7b9e2cp-23f, 0.0f,
     0x1.5714fep-53f, 0.0f, 0x1.07b76ep-59f, 0.0f, 0x1.b354c6p-19f, 0x1.809f2cp-53f,
     0x1.f1c3e4p-43f, 0.0f, 0x1.2d11c6p-119f, 0x1.d98e86p-83f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.2f93a2p-67f, 0.0f, 0.0f, 0.0f, 0x1.d13fb2p-56f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.cd196ap-116f, 0x1.9d5ba4p-78f, 0.0f, 0x1.f8e0a8p-42f,
     0x1.e3514ap-33f, 0.0f, 0.0f, 0.0f, 0x1.40ec8ap-65f, 0.0f, 0.0f, 0x1.0a4ea6p-76f,
     0x1.86e2b4p-19f, 0x1.3f525ap-10f, 0x1.b349fap-44f, 0x1.a40758p-52f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7d71fap-101f, 0x1.8a2f9cp-114f, 0.0f,
     0x1.1c43f6p-28f, 0x1.b2ffp-63f, 0x1.ace35ep-41f, 0x1.b198aap-81f, 0.0f,
     0x1.ca73dcp-20f, 0x1.dfb8dep-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7fdec2p-40f, 0x1.ccdfep-3f, 0.0f, 0x1.c72116p-125f, 0x1.818dc4p-25f,
     0x1.b1bdap-25f, 0x1.d4bc74p-38f, 0.0f, 0x1.3dc30ep-1f, 0x1.9328c8p-43f,
     0x1.e15bbep-34f, 0.0f, 0.0f, 0x1.22961ep-78f, 0.0f, 0.0f, 0.0f, 0x1.093944p-50f,
     0.0f, 0.0f, 0x1.6f04e8p-70f, 0.0f, 0.0f, 0x1.dcf35ep-8f, 0.0f, 0x1.1c2816p-5f,
     0x1.0477eap-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3ae53ap-111f, 0.0f, 0.0f, 0.0f,
     0x1.bdbc18p-107f, 0x1.2e0f12p-51f, 0.0f, 0x1.a76184p-92f, 0x1.88cbfp-56f, 0.0f,
     0.0f, 0x1.c50c44p-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.36d6dap-81f, 0.0f,
     0x1.15483ap-33f, 0.0f, 0x1.7c6ccap-103f, 0x1.0acae8p-100f, 0x1.37f7e6p-33f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.7593b6p-85f, 0x1.20d5cp-86f, 0.0f, 0x1.b84262p-53f,
     0x1.6dd1eap-66f, 0x1p0f, 0.0f, 0x1.cddfp-115f, 0x1.742c74p-80f, 0x1.ea7776p-32f,
     0.0f, 0x1.1522f6p-104f, 0x1.576108p-80f, 0x1.de3894p-125f, 0.0f, 0.0f,
     0x1.476862p-123f, 0.0f, 0x1.6b550ep-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.240172p-21f, 0.0f, 0.0f, 0.0f, 0x1.db922ep-59f, 0x1.243222p-40f,
     0x1.547bd8p-82f, 0.0f, 0x1.fdbaa2p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.5240c4p-88f, 0.0f, 0x1.df0738p-92f, 0.0f, 0.0f, 0.0f, 0x1.f3cac8p-122f,
     0.0f, 0.0f, 0x1.1c4b7p-34f, 0.0f, 0x1.b78598p-75f, 0.0f, 0x1.511fdcp-43f, 0.0f,
     0x1.a716e6p-4f, 0x1.220038p-9f, 0.0f, 0.0f, 0x1.04b4cep-53f, 0.0f,
     0x1.e5426cp-68f, 0.0f, 0.0f, 0x1.48ab62p-72f, 0x1.454a96p-61f, 0x1.71dd26p-85f,
     0.0f, 0.0f, 0x1.9b94a6p-25f, 0x1.33deb2p-29f, 0.0f, 0x1.e58daap-35f,
     0x1.606802p-126f, 0x1.392a1p-4f, 0x1.8c776p-36f, 0.0f, 0x1.12a9d8p-40f, 0.0f,
     0x1.f9e006p-113f, 0x1.276e3ep-47f, 0x1.64c3c4p-16f, 0.0f, 0x1.8e668p-112f, 0.0f,
     0x1.09f79p-118f, 0.0f, 0.0f, 0x1.967dfp-122f, 0x1.015832p-114f, 0x1.fc4138p-67f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.28e328p-69f, 0x1.3bea32p-16f, 0.0f, 0.0f,
     0x1.d2e5dp-123f, 0.0f, 0.0f, 0x1.9c8c3p-66f, 0x1.e7a9f6p-4f, 0.0f,
     0x1.c49a84p-12f, 0.0f, 0x1.9cd328p-120f, 0x1.9132a8p-109f, 0x1.e7f82cp-21f,
     0x1.34a12p-98f, 0x1.92605ap-108f, 0x1.8c1abp-106f, 0x1.a1f5bcp-62f,
     0x1.f9f60ap-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.336898p-110f, 0x1.fd304p-46f,
     0x1.1e4742p-117f, 0.0f, 0.0f, 0.0f, 0x1.0abf3ep-74f, 0x1.0ae1cep-30f,
     0x1.b9929ap-90f, 0.0f, 0.0f, 0.0f, 0x1.d3dac4p-26f, 0.0f, 0.0f, 0.0f,
     0x1.d46cd8p-13f, 0.0f, 0x1.48b078p-87f, 0.0f, 0x1.ca05cp-104f, 0x1.96c424p-79f,
     0.0f, 0.0f, 0x1.117be6p-66f, 0x1.e5a66ep-4f, 0x1.37eb2ep-125f, 0x1.63049ep-33f,
     0.0f, 0x1.6ca59ap-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d585d2p-72f, 0x1.db5e82p-18f, 0x1.75d32ap-15f, 0.0f, 0.0f, 0x1.702256p-45f,
     0.0f, 0x1.f0f8ccp-33f, 0x1.541db4p-20f, 0x1.837754p-79f, 0x1.700d4ap-78f,
     0x1.433a14p-102f, 0.0f, 0.0f, 0x1.b4c58ap-111f, 0x1.13bb74p-38f, 0.0f,
     0x1.1f7652p-60f, 0x1.38cd9ep-82f, 0.0f, 0x1.99068p-57f, 0.0f, 0x1.01015cp-102f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7ebf5p-85f, 0.0f, 0x1.ca9744p-50f, 0.0f,
     0x1.d4379cp-20f, 0.0f, 0x1.023244p-59f, 0x1.9cac36p-65f, 0x1.c07f44p-53f,
     0x1.c44d96p-9f, 0x1.68c2d6p-3f, 0x1.d32812p-65f, 0x1.89cb1p-120f,
     0x1.f54e6ep-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.435ebp-38f, 0.0f,
     0x1.df0f8cp-32f, 0x1.782556p-14f, 0.0f, 0x1.929b38p-33f, 0x1.5490e8p-24f,
     0x1.821f78p-73f, 0.0f, 0x1.159e5ap-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d744f2p-113f,
     0x1.11e72ep-43f, 0.0f, 0.0f, 0x1.5c7f8cp-3f, 0x1.136b76p-50f, 0.0f,
     0x1.a27ea2p-63f, 0.0f, 0.0f, 0x1.351cc4p-2f, 0.0f, 0.0f, 0x1.eb7b02p-40f, 0.0f,
     0x1.6d8596p-12f, 0x1.b0d0aap-99f, 0.0f, 0x1.ae8806p-36f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a0f2b8p-88f, 0.0f, 0x1.c55434p-46f, 0x1.0ba6c8p-86f, 0.0f, 0.0f,
     0x1.8b611cp-79f, 0x1.76ecbp-38f, 0x1.737e46p-90f, 0x1.06c79p-23f,
     0x1.e527fcp-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.85ef78p-80f, 0.0f,
     0x1.89cbcp-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f
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
            tmp1 = Sleef_finz_sinhf1_u35purecfma(tmp0);
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
    printf("Sleef_finz_sinhf1_u35purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_sinhf1_u35purecfma bench acc %a\n", global_bench_acc);
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
