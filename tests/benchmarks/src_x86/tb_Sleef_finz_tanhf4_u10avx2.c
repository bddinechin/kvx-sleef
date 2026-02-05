/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_tanhf4_u10avx2128.c --function \
 *     Sleef_finz_tanhf4_u10avx2128 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 4 --function-input-vector-size \
 *     4 --bench --no-embedded-bin --target x86_avx2128
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
     0x1.b519ap-51f, 0x1.434372p-55f, 0.0f, 0.0f, 0x1.c9ef9ap-56f, 0x1.948816p-43f,
     0.0f, 0.0f, 0x1.1aeeaap-21f, 0x1.7c1706p-37f, 0.0f, 0.0f, 0x1.eb7486p-30f, 0.0f,
     0x1.d40ec6p-114f, 0x1.18c336p-87f, 0.0f, 0.0f, 0.0f, 0x1.2c3604p-88f,
     0x1.552554p-57f, 0.0f, 0.0f, 0x1.d19fecp-64f, 0.0f, 0.0f, 0.0f, 0x1.29a984p-81f,
     0.0f, 0x1.95bb6p-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.16db38p-10f, 0.0f, 0.0f,
     0x1.b23e68p-113f, 0.0f, 0.0f, 0x1.f85944p-103f, 0.0f, 0.0f, 0x1.60d058p-44f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.05f35ep-101f, 0x1.33843p-15f, 0.0f, 0.0f,
     0x1.cb134ap-55f, 0x1.9d169ap-119f, 0.0f, 0x1.f5f066p-15f, 0x1.98cb58p-111f,
     0x1.10d2b4p-104f, 0.0f, 0x1.6049a8p-93f, 0.0f, 0.0f, 0.0f, 0x1.25022cp-42f, 0.0f,
     0x1.f06034p-99f, 0.0f, 0x1.9f312ap-94f, 0x1.980c9p-100f, 0.0f, 0.0f,
     0x1.c2f40cp-46f, 0x1.0b7558p-58f, 0.0f, 0x1.d9c89p-26f, 0x1.1e5ef4p-81f, 0.0f,
     0x1.66bf7cp-122f, 0.0f, 0.0f, 0x1.0a5208p-61f, 0x1.f53d28p-95f, 0x1.9f0ce6p-1f,
     0x1.6ffda6p-67f, 0x1.6501ap-50f, 0x1.a9e25p-97f, 0x1.d09066p-114f, 0.0f, 0.0f,
     0.0f, 0x1.d5da68p-115f, 0x1.eba234p-47f, 0x1.87d642p-46f, 0.0f, 0x1.0c923ap-89f,
     0x1.977efap-56f, 0x1.2789e2p-109f, 0.0f, 0x1.2c54dp-78f, 0x1.d687ccp-88f, 0.0f,
     0.0f, 0x1.d43b6cp-70f, 0.0f, 0x1.ed61c4p-61f, 0.0f, 0x1.eeaf4ap-99f,
     0x1.1c3006p-45f, 0.0f, 0x1.4e5168p-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.853d8p-52f, 0.0f, 0x1.d0cb52p-4f, 0.0f, 0.0f, 0x1.cd85c4p-60f, 0.0f,
     0x1.6699bap-116f, 0.0f, 0.0f, 0x1.d16df8p-67f, 0x1.0fb4ap-80f, 0x1.6a43acp-58f,
     0.0f, 0x1.3f5334p-23f, 0x1.94f32ap-61f, 0x1.d752ep-26f, 0x1.05b668p-4f, 0.0f,
     0.0f, 0.0f, 0x1.88331p-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.400448p-62f, 0.0f,
     0x1.fdc022p-59f, 0x1.388e46p-75f, 0x1.1cf04ep-55f, 0.0f, 0x1.ba4962p-98f,
     0x1.73ab54p-83f, 0.0f, 0x1.b0d204p-14f, 0.0f, 0.0f, 0.0f, 0x1.f570a4p-13f, 0.0f,
     0x1.635fd6p-109f, 0x1.1abfe6p-75f, 0x1.29ba04p-84f, 0x1.c1bfcep-49f,
     0x1.70158ap-35f, 0.0f, 0x1.d14c1ep-78f, 0.0f, 0.0f, 0.0f, 0x1.20d2a8p-58f,
     0x1.d54e32p-87f, 0x1.c343ap-38f, 0x1.5ffd64p-120f, 0x1.72d9d6p-43f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.43e656p-119f, 0x1.e0d71ep-67f, 0.0f, 0x1.5df4b2p-111f,
     0x1.237ad8p-55f, 0.0f, 0x1.711d26p-29f, 0.0f, 0x1.7304fap-51f, 0x1.378f8p-39f,
     0.0f, 0.0f, 0x1.f935fp-78f, 0x1.503d7cp-95f, 0x1.3dcdeap-94f, 0.0f,
     0x1.6fec6p-4f, 0x1.fcddccp-21f, 0x1.d5c472p-102f, 0.0f, 0.0f, 0x1.a71a6cp-21f,
     0.0f, 0.0f, 0x1.2bf4fap-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3f2b0ap-78f, 0.0f,
     0x1.9cce9cp-118f, 0.0f, 0x1.283558p-98f, 0.0f, 0x1.56d5dp-80f, 0x1.e78a64p-111f,
     0x1.f053e4p-111f, 0x1.f0759ep-23f, 0x1.8b989ap-98f, 0.0f, 0x1.c4ff66p-97f, 0.0f,
     0x1.3b8746p-72f, 0x1.a412dap-90f, 0.0f, 0x1.f5419ap-84f, 0.0f, 0x1.71472ap-99f,
     0.0f, 0.0f, 0.0f, 0x1.cd2052p-108f, 0.0f, 0x1p0f, 0x1.764a2p-64f, 0.0f, 0.0f,
     0.0f, 0x1.c35de8p-83f, 0x1.87786ep-2f, 0.0f, 0.0f, 0.0f, 0x1.3f4bf2p-13f, 0.0f,
     0x1.59882p-32f, 0.0f, 0x1.6b5fdep-108f, 0.0f, 0.0f, 0x1.a3656p-26f,
     0x1.ce6454p-25f, 0x1.be8aa6p-89f, 0.0f, 0.0f, 0x1.959adcp-14f, 0x1.550c1p-46f,
     0x1.837c88p-9f, 0x1.66d3dap-25f, 0.0f, 0x1.25c252p-116f, 0x1.63190ap-24f, 0.0f,
     0.0f, 0x1.691828p-5f, 0.0f, 0x1.a31a9p-98f, 0.0f, 0.0f, 0x1.509998p-55f,
     0x1.31e40ap-27f, 0x1.04c4e2p-63f, 0x1.c7f81cp-88f, 0x1.8faebap-44f,
     0x1.9614cap-79f, 0x1.498c2ap-50f, 0x1.67141ep-88f, 0x1.7057ap-110f,
     0x1.b579cap-61f, 0x1.e36b1cp-78f, 0x1.6cbdb8p-42f, 0.0f, 0.0f, 0.0f,
     0x1.4b1b5ap-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1025ap-70f, 0.0f, 0.0f,
     0x1.2b85e2p-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.91e5acp-89f,
     0x1.a313b4p-100f, 0.0f, 0x1.41d7a6p-7f, 0.0f, 0.0f, 0x1.4dc786p-79f, 0.0f, 0.0f,
     0.0f, 0x1.0ee12cp-108f, 0.0f, 0.0f, 0x1.c0857p-103f, 0.0f, 0x1.9029d6p-95f,
     0x1.cf6628p-106f, 0x1.e2c67ep-67f, 0.0f, 0x1.0f707p-120f, 0x1.f25482p-21f,
     0x1.07ccecp-114f, 0.0f, 0.0f, 0x1.5b2c88p-7f, 0.0f, 0x1.dc2694p-11f, 0.0f, 0.0f,
     0.0f, 0x1.4e22aap-107f, 0.0f, 0x1.2a7a2ep-89f, 0x1.be923cp-118f, 0x1.560edap-85f,
     0x1.e0de04p-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d168acp-90f, 0x1.203408p-82f,
     0x1.a9f926p-10f, 0x1.476a9ap-110f, 0.0f, 0.0f, 0x1p0f, 0x1.fb907ep-6f,
     0x1.d18a74p-115f, 0x1.e454e6p-111f, 0x1.cd74eap-109f, 0x1.6bc792p-10f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.497d5ep-104f, 0x1.d81abep-115f, 0.0f, 0.0f, 0.0f,
     0x1.27a574p-81f, 0x1.015716p-93f, 0x1.474cdep-14f, 0.0f, 0x1.3675fap-111f, 0.0f,
     0.0f, 0.0f, 0x1.05293ap-105f, 0.0f, 0x1.e74786p-83f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3c6642p-54f, 0x1.b321c2p-49f, 0.0f, 0x1.18f05cp-88f, 0x1.72583ep-25f,
     0x1.6f754ep-32f, 0x1.3ed84ep-116f, 0x1.a9849ap-28f, 0.0f, 0x1.2955ap-125f,
     0x1.d3c68p-56f, 0x1.d4d6b8p-117f, 0.0f, 0x1.1ca058p-84f, 0.0f, 0x1.01c05p-48f,
     0x1.4013eap-2f, 0x1.608efap-47f, 0.0f, 0.0f, 0x1.14fcbp-117f, 0.0f, 0.0f,
     0x1.6932a4p-125f, 0.0f, 0.0f, 0x1.0eaceap-54f, 0.0f, 0x1.1c1efap-73f, 0.0f,
     0x1.300728p-24f, 0x1.6695b8p-7f, 0x1.9f1006p-110f, 0x1.fccd6cp-52f, 0.0f,
     0x1.a51db4p-68f, 0x1.2600a4p-23f, 0x1.06907p-71f, 0.0f, 0.0f, 0x1.f3073cp-27f,
     0.0f, 0x1.02c416p-90f, 0x1.c90b46p-63f, 0x1.8376fcp-46f, 0x1.2e8544p-45f, 0.0f,
     0.0f, 0x1.560a76p-72f, 0x1.6b27eap-15f, 0.0f, 0.0f, 0x1.e7ee92p-96f,
     0x1.ce1da2p-27f, 0.0f, 0x1.c8262ep-34f, 0x1.d8a48ap-104f, 0x1.e8100ep-1f, 0.0f,
     0x1.46ddcep-16f, 0.0f, 0x1.c5799ap-51f, 0.0f, 0x1.a02324p-5f, 0x1.6d6eb6p-39f,
     0x1.96c322p-4f, 0.0f, 0.0f, 0x1.e1526ap-37f, 0x1.5f9edcp-32f, 0x1.2da1p-27f,
     0.0f, 0x1.c984a2p-37f, 0.0f, 0x1.42d67p-115f, 0.0f, 0.0f, 0.0f, 0x1.b2a056p-15f,
     0.0f, 0x1.7a6fdp-102f, 0.0f, 0.0f, 0.0f, 0x1.d88c88p-46f, 0x1.620342p-111f, 0.0f,
     0x1.bb4116p-63f, 0x1.c93b2ep-101f, 0.0f, 0.0f, 0x1.f0a526p-30f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.bce556p-119f, 0x1.02d4eap-97f, 0x1.b5fee6p-43f, 0.0f,
     0x1.22198p-104f, 0x1.73888ap-60f, 0.0f, 0.0f, 0x1.df00fap-119f, 0x1.d1f2dcp-106f,
     0x1.f0b8c4p-84f, 0.0f, 0x1.e0e164p-18f, 0.0f, 0.0f, 0x1.1cfb78p-92f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d0a29cp-82f, 0x1.08117ep-99f, 0.0f, 0x1.72bacep-52f,
     0x1.1098cap-20f, 0.0f, 0x1.684p-69f, 0.0f, 0x1.f35986p-8f, 0.0f, 0.0f,
     0x1.0642ap-6f, 0.0f, 0x1.13cffcp-13f, 0.0f, 0.0f, 0x1.04c50ep-59f,
     0x1.4cc24cp-39f, 0.0f, 0x1.d3277p-123f, 0.0f, 0.0f, 0x1.446732p-85f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ce396ep-102f, 0x1.b765acp-54f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.654b44p-55f, 0x1.1da9e4p-29f, 0.0f, 0.0f, 0x1.c40eaep-84f, 0.0f,
     0x1.72aee4p-100f, 0x1.47970cp-20f, 0x1.0dfc2ap-24f, 0x1.df1572p-27f, 0.0f, 0.0f,
     0x1.bc0eep-85f, 0.0f, 0.0f, 0.0f, 0x1.afc0e6p-106f, 0x1.001a96p-115f,
     0x1.86b8e8p-93f, 0x1.f77294p-113f, 0.0f, 0.0f, 0x1.8d7c8p-117f, 0.0f, 0.0f,
     0x1p0f, 0.0f, 0.0f, 0x1.56fec8p-43f, 0x1.b22e36p-19f, 0.0f, 0x1.705158p-20f,
     0.0f, 0x1.ac3e7ep-98f, 0x1.6d7b74p-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1bba38p-13f, 0x1.6eff72p-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f4e9d4p-120f, 0.0f, 0.0f, 0x1.4a0958p-73f, 0x1.1d40d2p-65f, 0x1.0eb096p-34f,
     0x1.55addcp-74f, 0x1.1ae9f6p-118f, 0.0f, 0.0f, 0.0f, 0x1.e23cbcp-81f, 0.0f,
     0x1.3e87d6p-96f, 0.0f, 0x1.17accp-28f, 0x1.dc5e28p-36f, 0.0f, 0.0f, 0.0f,
     0x1.7eeb8cp-53f, 0.0f, 0x1.78137p-108f, 0.0f, 0x1.06b93ep-15f, 0.0f,
     0x1.8a7d4ep-70f, 0x1.241492p-66f, 0x1.d09774p-116f, 0.0f, 0.0f, 0.0f,
     0x1.0ee46cp-32f, 0.0f, 0x1.e51408p-42f, 0.0f, 0x1.9b119ep-24f, 0.0f,
     0x1.0a8faap-91f, 0x1.c90fa8p-57f, 0.0f, 0.0f, 0x1.ebcb5cp-30f, 0x1.afbf1cp-25f,
     0x1.1c6fecp-113f, 0.0f, 0x1.243fcp-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.d40c4ap-114f, 0.0f, 0x1.7f590ep-34f, 0.0f, 0x1.5de558p-40f, 0.0f, 0.0f,
     0.0f, 0x1.b53658p-47f, 0.0f, 0.0f, 0x1.e9515ap-24f, 0x1.c80506p-26f, 0.0f,
     0x1.6e2f8cp-116f, 0.0f, 0x1.87ab86p-110f, 0x1.a7f15ap-29f, 0.0f, 0x1.00d79cp-24f,
     0.0f, 0.0f, 0.0f, 0x1.23ef98p-110f, 0x1.6afc94p-116f, 0.0f, 0x1.1b8f06p-84f,
     0.0f, 0.0f, 0x1.3dabc6p-25f, 0x1.5d2144p-64f, 0.0f, 0x1.33b1ap-114f,
     0x1.2619bap-55f, 0x1.3cd128p-6f, 0x1.4c93f2p-54f, 0x1.0f101cp-53f,
     0x1.ed190ep-49f, 0x1.7b42cp-105f, 0x1.a23d3cp-26f, 0x1.1348c6p-69f, 0.0f,
     0x1.b59738p-26f, 0x1.d97c92p-126f, 0.0f, 0x1.f5e412p-116f, 0x1.962e72p-27f,
     0x1.f3102cp-91f, 0x1.af5154p-8f, 0.0f, 0x1.ce8ef4p-88f, 0x1.af1a6ep-15f,
     0x1.4a1b7p-26f, 0.0f, 0x1.72e466p-108f, 0x1.8bff78p-14f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.78f3f8p-42f, 0.0f, 0.0f, 0x1.22189ep-24f, 0.0f,
     0x1.ae676ap-97f, 0.0f, 0.0f, 0.0f, 0x1.4efefp-20f, 0x1.7954dcp-31f,
     0x1.aa0e2ep-87f, 0x1.037b3ap-97f, 0x1.8e5354p-65f, 0.0f, 0x1.c8b00cp-45f,
     0x1.d2ea0ap-80f, 0x1.6e454p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.775692p-34f, 0x1.b22df2p-116f, 0x1.8f0be8p-102f, 0x1.83f428p-96f, 0.0f, 0.0f,
     0.0f, 0x1.3f6272p-83f, 0.0f, 0x1.bfe04ap-50f, 0x1.c546b6p-16f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f2c354p-96f, 0.0f, 0x1.e36116p-19f, 0.0f, 0x1.36d3fcp-19f,
     0x1.5c987cp-84f, 0x1.5feccep-116f, 0.0f, 0.0f, 0.0f, 0x1.48cdfcp-110f, 0.0f,
     0x1.736b2ap-119f, 0.0f, 0x1.1ffa16p-85f, 0x1.0db644p-11f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.02b4e2p-10f, 0.0f, 0x1.809a2cp-24f,
     0x1.6c9b6ep-40f, 0x1.c9f22cp-23f, 0.0f, 0x1.cbd386p-59f, 0x1.9bfdd8p-109f, 0.0f,
     0x1.938472p-18f, 0x1.9345fap-59f, 0.0f, 0x1.37efacp-89f, 0x1.bcf32ep-55f,
     0x1.b6eccep-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d0b656p-126f, 0.0f,
     0x1.a8cc32p-67f, 0.0f, 0.0f, 0.0f, 0x1.296c52p-9f, 0.0f, 0x1.4a99cp-15f, 0.0f,
     0x1.652ac4p-53f, 0x1.8f569ep-107f, 0.0f, 0.0f, 0x1.c7dd68p-15f, 0.0f,
     0x1.c621dp-97f, 0.0f, 0.0f, 0x1.9e0b5ep-45f, 0.0f, 0x1.74fbc4p-51f,
     0x1.f8de7cp-24f, 0x1.ca233ep-66f, 0x1.066744p-3f, 0.0f, 0x1.92bb2ep-9f, 0.0f,
     0.0f, 0x1.c190b4p-60f, 0x1.da173cp-88f, 0.0f, 0x1.394a8ep-38f, 0x1.95b4f8p-114f,
     0.0f, 0x1.c2e67ap-52f, 0.0f, 0x1.b8ebd4p-99f, 0x1.139be8p-118f, 0x1.58d60ep-27f,
     0.0f, 0x1.c61594p-32f, 0x1.0fe158p-74f, 0x1.d6d34p-41f, 0x1.f656e6p-42f, 0.0f,
     0x1.280414p-106f, 0x1.077caap-59f, 0x1.58361ap-122f, 0.0f, 0x1.d54788p-54f,
     0x1.685024p-12f, 0.0f, 0.0f, 0x1.fbd11ep-50f, 0.0f, 0x1.d72c02p-5f, 0.0f,
     0x1.1e1362p-83f, 0x1.28cf6cp-100f, 0x1.a3869ep-28f, 0.0f, 0.0f, 0x1.c0cbb8p-98f,
     0.0f, 0x1.8c9df2p-53f, 0.0f, 0x1.25604ap-120f, 0x1p0f, 0x1.014206p-55f, 0.0f,
     0.0f, 0x1.8dc2dp-60f, 0.0f, 0.0f, 0x1.4f076p-99f, 0x1.fd924cp-40f,
     0x1.0841f6p-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.61ed9p-60f, 0.0f, 0.0f,
     0x1.2a043p-114f, 0.0f, 0x1.34a74ep-19f, 0x1.c1e50ep-45f, 0x1.bb09f6p-125f, 0.0f,
     0x1.a5549ep-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.48fcaap-65f, 0x1.5c84d2p-100f, 0.0f,
     0.0f, 0x1.066ee2p-71f, 0.0f, 0.0f, 0x1.afd3c2p-112f, 0.0f, 0.0f,
     0x1.78473ap-112f, 0.0f, 0.0f, 0.0f, 0x1.a596bp-59f, 0x1.e25572p-13f, 0.0f,
     0x1.9a986cp-41f, 0.0f, 0x1.87728ep-90f, 0.0f, 0x1.316d32p-126f, 0x1.8edc2p-44f,
     0x1.46a2a4p-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.976fe4p-68f, 0x1.55dd22p-69f,
     0.0f, 0x1.cd6582p-87f, 0.0f, 0x1.51fa5ep-86f, 0.0f, 0x1.0267fcp-11f, 0.0f, 0.0f,
     0x1.b6e8d4p-15f, 0x1.9e2bep-20f, 0.0f, 0.0f, 0x1.84aa76p-109f, 0.0f,
     0x1.11565ap-20f, 0.0f, 0x1.e99e5ap-61f, 0.0f, 0x1.2e8b0ep-109f, 0.0f,
     0x1.ddeedap-63f, 0.0f, 0x1.6fc818p-87f, 0x1.e520b2p-28f, 0.0f, 0x1.774c2ep-71f,
     0.0f, 0x1.f55508p-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6216fep-99f,
     0x1.87e074p-37f, 0x1.d83f84p-104f, 0x1.ab8fdap-16f, 0x1.7a0ed8p-15f,
     0x1.49a784p-58f, 0.0f, 0x1.6c8e7p-42f, 0x1.6e5c7p-69f, 0.0f, 0x1.80669p-106f,
     0x1.4b1606p-5f, 0.0f, 0.0f, 0x1.90539cp-9f, 0x1.8beaa8p-104f, 0.0f,
     0x1.82a386p-102f, 0.0f, 0.0f, 0x1.82ecf6p-11f, 0.0f, 0.0f, 0x1.71c46ap-117f,
     0.0f, 0.0f, 0.0f, 0x1.4409ep-66f, 0.0f, 0x1.e4a29ap-125f, 0x1.9c050ep-19f, 0.0f,
     0x1.b537dp-32f, 0x1.8efa0ep-39f, 0.0f, 0x1.ca6e56p-95f, 0x1.de6304p-15f, 0.0f,
     0.0f, 0x1.5d7734p-36f, 0x1.d8eca6p-28f, 0.0f, 0.0f, 0x1.b9ee26p-46f, 0.0f, 0.0f,
     0.0f, 0x1.4bb434p-78f, 0.0f, 0.0f, 0x1.4e0cf8p-99f, 0x1.106fep-118f, 0.0f,
     0x1.f87d5cp-6f, 0.0f, 0x1.c9916p-125f, 0x1.3950d2p-41f, 0x1.91a9dcp-67f
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
            tmp1 = Sleef_finz_tanhf4_u10avx2128(tmp0);
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
    printf("Sleef_finz_tanhf4_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_tanhf4_u10avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
