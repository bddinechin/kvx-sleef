/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_hypotf1_u35purecfma.c --function \
 *     Sleef_hypotf1_u35purecfma --arity 2 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32,binary32 --bench --no-embedded-bin --target \
 *     kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile float external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0.0f, 0x1.a89daap-11f, 0x1.a2695cp-7f, 0.0f, 0x1.0cd026p-56f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.046c32p-21f, 0.0f, 0x1.615648p-83f, 0x1.04935p-55f, 0x1.1a74fap-1f,
     0x1p0f, 0x1.ef2fe2p-115f, 0x1.1214ccp-88f, 0x1.cb2bc2p-67f, 0.0f, 0.0f, 0.0f,
     0x1.daf024p-71f, 0x1.35fe32p-31f, 0x1.e64caep-14f, 0.0f, 0.0f, 0.0f,
     0x1.ffc12ep-99f, 0.0f, 0x1.583a16p-123f, 0.0f, 0x1.ddf9c2p-77f, 0.0f, 0.0f,
     0x1.228bccp-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d92306p-101f, 0x1.3cf32p-49f,
     0x1.f8b7ccp-117f, 0x1.253e22p-36f, 0x1.65e65cp-28f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.73dbeap-123f, 0.0f, 0x1.4e1ee4p-59f, 0.0f, 0.0f, 0.0f, 0x1.b20e52p-9f, 0.0f,
     0x1.a2019cp-16f, 0.0f, 0x1.3a58f6p-78f, 0x1.bb0104p-100f, 0.0f, 0.0f,
     0x1.50c94ep-97f, 0x1.f294ccp-109f, 0x1.e59374p-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4f270ep-33f, 0.0f, 0.0f, 0.0f, 0x1.a2e9ep-114f, 0.0f, 0.0f, 0x1.5c30bep-85f,
     0.0f, 0.0f, 0x1.b540eep-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9f6d9ap-20f,
     0x1.661bdap-114f, 0x1.08639cp-118f, 0x1.e13c2cp-27f, 0x1.299b4p-60f, 0.0f,
     0x1.eea21cp-105f, 0.0f, 0.0f, 0x1.5d76ecp-79f, 0.0f, 0.0f, 0.0f, 0x1.5525dap-55f,
     0.0f, 0.0f, 0x1.8d3c8ap-44f, 0.0f, 0x1.565142p-19f, 0.0f, 0x1.5f1012p-43f, 0.0f,
     0.0f, 0.0f, 0x1.429318p-46f, 0.0f, 0x1.069c04p-72f, 0.0f, 0.0f, 0x1.f46dbcp-99f,
     0x1.c6e6aep-119f, 0.0f, 0.0f, 0x1.93ea2p-118f, 0.0f, 0.0f, 0x1.e24a2p-15f,
     0x1.ce8472p-70f, 0x1.63f2cap-48f, 0x1.6090bcp-30f, 0x1.166224p-13f,
     0x1.9a8708p-111f, 0x1.bdc5fep-46f, 0.0f, 0x1.6d9c88p-8f, 0.0f, 0x1.8d65d8p-32f,
     0x1.1338fp-71f, 0x1.cef6d6p-23f, 0x1.6b778p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2cf8b8p-35f, 0.0f, 0x1.989cc6p-70f, 0.0f, 0x1.45dd8ap-41f, 0x1.864524p-78f,
     0x1.e4d916p-104f, 0x1.37b4dap-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9ac718p-121f,
     0x1.d0f4e6p-88f, 0.0f, 0x1.69e14ep-100f, 0.0f, 0x1.a85858p-45f, 0x1.5274a4p-19f,
     0.0f, 0x1.210e48p-35f, 0.0f, 0x1.77edap-98f, 0x1.6c5b6p-20f, 0x1.3462e4p-53f,
     0.0f, 0x1.14808p-20f, 0x1.292e3ap-43f, 0.0f, 0x1.5ab0bp-56f, 0x1.e7a494p-57f,
     0x1.784ca4p-92f, 0x1.1c3a4ap-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.40dd44p-27f,
     0x1.9b72d4p-103f, 0x1.cbfe54p-6f, 0.0f, 0x1.6211c8p-19f, 0.0f, 0.0f,
     0x1.01d5dp-97f, 0x1.1b9b96p-78f, 0x1.5ef2dap-76f, 0.0f, 0x1.6f343p-86f,
     0x1.69cd04p-48f, 0.0f, 0x1.35546ep-117f, 0.0f, 0.0f, 0.0f, 0x1.dc016p-51f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4e32a2p-112f, 0.0f,
     0x1.e55d8ap-91f, 0x1.262104p-108f, 0x1.20cf02p-39f, 0.0f, 0x1.c233c8p-92f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.7fab0ep-47f, 0x1.b2b28cp-34f, 0x1.d4de12p-99f, 0.0f,
     0x1.6752b6p-80f, 0x1.701a1p-122f, 0.0f, 0.0f, 0x1.cb54a4p-11f, 0.0f,
     0x1.f63c2ap-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.63bccep-20f, 0.0f,
     0x1.ba710ep-88f, 0.0f, 0x1.1169e6p-34f, 0.0f, 0.0f, 0x1.f708ccp-14f, 0.0f,
     0x1.a6ada8p-118f, 0.0f, 0x1.a58ba2p-72f, 0x1.242afap-98f, 0x1.1b4488p-18f, 0.0f,
     0.0f, 0.0f, 0x1.bce0cap-113f, 0x1.abcd0ap-42f, 0.0f, 0.0f, 0x1p0f, 0.0f,
     0x1.0a7fc4p-19f, 0x1.f12f64p-24f, 0x1.849628p-25f, 0.0f, 0x1.e500f4p-80f, 0.0f,
     0.0f, 0x1.42a5e6p-86f, 0x1.9ef546p-9f, 0x1.4e68d2p-36f, 0x1.b94bcap-101f, 0.0f,
     0.0f, 0x1.00fc3ep-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c980d4p-68f, 0x1.e70ef4p-34f,
     0x1.00896cp-98f, 0.0f, 0x1.e36644p-40f, 0.0f, 0x1.de7e6cp-112f, 0x1.269e1p-26f,
     0x1.8e1d64p-96f, 0.0f, 0.0f, 0.0f, 0x1.52467cp-1f, 0.0f, 0.0f, 0.0f,
     0x1.fd8feep-36f, 0.0f, 0x1.f454fcp-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7ba098p-105f,
     0x1.8a99aep-18f, 0.0f, 0.0f, 0.0f, 0x1.632a26p-114f, 0.0f, 0.0f, 0x1.9bae16p-51f,
     0x1.becf1ep-86f, 0x1.c4ab3p-119f, 0.0f, 0x1.629bap-115f, 0.0f, 0x1.65acd4p-26f,
     0x1.594d6cp-114f, 0.0f, 0x1.9a6544p-118f, 0.0f, 0.0f, 0.0f, 0x1.02e6c4p-21f,
     0x1.0c34f8p-78f, 0x1.0dff54p-13f, 0.0f, 0.0f, 0x1.f74edcp-110f, 0x1.86ee9ep-31f,
     0x1.f959d2p-78f, 0.0f, 0.0f, 0.0f, 0x1.6f65dp-64f, 0x1.ca519cp-50f,
     0x1.ce0a74p-44f, 0x1.5f5988p-70f, 0x1.43ca8ep-6f, 0x1.412df6p-89f, 0.0f,
     0x1.7d77e4p-4f, 0x1.85c2e8p-36f, 0x1.dfde48p-22f, 0.0f, 0.0f, 0.0f,
     0x1.febdap-94f, 0x1.291b82p-57f, 0.0f, 0.0f, 0x1.e819f4p-92f, 0x1.e6e224p-115f,
     0.0f, 0.0f, 0x1.4d9d68p-73f, 0.0f, 0x1.ffaab8p-82f, 0x1.476e4ep-104f,
     0x1.4dbfc4p-12f, 0.0f, 0x1.8ecd42p-107f, 0x1.0dfc14p-58f, 0.0f, 0x1.0742fcp-91f,
     0.0f, 0.0f, 0x1.cf5a78p-19f, 0x1.156e24p-75f, 0.0f, 0.0f, 0x1.d08eaap-115f,
     0x1.706d56p-103f, 0x1.05e1fep-101f, 0x1.a81932p-32f, 0.0f, 0x1.1ffb3ep-23f, 0.0f,
     0x1.f53b14p-60f, 0x1.5ed73ep-76f, 0x1.c7c71cp-17f, 0.0f, 0.0f, 0x1.df9c04p-71f,
     0x1.66b8f2p-31f, 0.0f, 0x1.2d695p-54f, 0.0f, 0.0f, 0.0f, 0x1.8f2ccp-93f, 0.0f,
     0.0f, 0x1.7899e4p-121f, 0x1.e3c586p-112f, 0x1.5f26ep-51f, 0x1.e441fap-100f, 0.0f,
     0.0f, 0x1.a20d56p-125f, 0.0f, 0x1.2f8998p-86f, 0x1.bc425ep-35f, 0x1.f23182p-91f,
     0x1.978224p-63f, 0x1.a6a68cp-4f, 0x1.868604p-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.4bae32p-43f, 0x1.ad8fe4p-72f, 0x1.60cc9ep-59f, 0.0f, 0.0f,
     0x1.19a8c4p-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.aec8c6p-38f,
     0x1.5eb782p-118f, 0.0f, 0x1.2852c4p-27f, 0.0f, 0.0f, 0x1.bf2bbap-80f,
     0x1.ccebd2p-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.91fae6p-75f, 0.0f, 0.0f,
     0x1.b5ec46p-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.518feap-85f, 0x1.3d55d8p-104f, 0.0f,
     0x1.d60866p-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6655e4p-91f, 0.0f, 0.0f, 0.0f,
     0x1.6b7f02p-124f, 0x1.9705fep-123f, 0.0f, 0.0f, 0x1.bbd684p-62f, 0.0f,
     0x1.ff4ac4p-96f, 0x1.aa13aep-20f, 0.0f, 0x1.786d2p-5f, 0.0f, 0x1.a5742ap-14f,
     0x1.24ff68p-78f, 0x1.12dc7cp-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.55e812p-7f,
     0x1.b0e494p-113f, 0x1.c0cc9ep-82f, 0.0f, 0.0f, 0x1.44a8fap-87f, 0x1.327e22p-73f,
     0x1.502494p-98f, 0x1.927cacp-49f, 0.0f, 0x1.c602p-42f, 0x1.5265d2p-110f,
     0x1.2ce41p-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.476f46p-46f,
     0x1.f17b0cp-76f, 0.0f, 0x1.d888d8p-55f, 0.0f, 0.0f, 0x1.4d5466p-121f,
     0x1.57ac26p-94f, 0.0f, 0x1.b4ce5p-113f, 0x1.c83b1p-7f, 0.0f, 0x1.240cb6p-99f,
     0.0f, 0x1.4ac67p-98f, 0.0f, 0.0f, 0x1.d9a76p-38f, 0.0f, 0.0f, 0x1.46f678p-111f,
     0.0f, 0.0f, 0.0f, 0x1.bf0dfcp-92f, 0.0f, 0x1.6a1e68p-13f, 0.0f, 0x1.39df34p-83f,
     0.0f, 0x1.dd5236p-8f, 0.0f, 0.0f, 0x1.41285ap-111f, 0x1.1fc466p-25f, 0.0f,
     0x1.45122ap-118f, 0x1.5d2554p-85f, 0.0f, 0.0f, 0.0f, 0x1.b1eadcp-70f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ea66dcp-64f, 0x1.4daa06p-33f, 0.0f, 0.0f,
     0x1.e2bad6p-27f, 0x1.b63a08p-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.48666ep-85f, 0.0f,
     0.0f, 0x1.dcdf6p-121f, 0x1.10afa6p-111f, 0x1.016afap-94f, 0x1.397a7ep-39f, 0.0f,
     0x1.764bf6p-60f, 0x1.7083cep-64f, 0x1.eaf1d8p-52f, 0.0f, 0.0f, 0x1.796588p-67f,
     0x1.cb7cdap-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.347acep-90f, 0x1.40d5dp-26f, 0.0f,
     0.0f, 0x1.dac67cp-77f, 0x1.4f048p-74f, 0.0f, 0x1.eb2e5ep-87f, 0x1.da3ba4p-52f,
     0x1.d61798p-80f, 0x1.e9aabcp-14f, 0.0f, 0x1.ddeae8p-71f, 0x1.61c58cp-20f,
     0x1.72891cp-102f, 0x1.2a5dfp-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a0508ap-18f, 0.0f,
     0.0f, 0.0f, 0x1.10c4d6p-27f, 0.0f, 0x1.d5534ep-101f, 0.0f, 0x1.58c302p-38f,
     0x1.3d5e32p-115f, 0x1.a7b8a4p-125f, 0.0f, 0x1.294deap-41f, 0.0f, 0x1.a57fb6p-54f,
     0x1.400bp-120f, 0x1.9a37fcp-126f, 0.0f, 0x1.8383d6p-66f, 0x1.1ac75cp-109f, 0.0f,
     0.0f, 0x1.103dbep-124f, 0x1.ca9e8cp-8f, 0x1.7b6d84p-43f, 0.0f, 0.0f,
     0x1.dca83p-29f, 0.0f, 0x1.3000a4p-32f, 0x1.9d286ap-34f, 0x1.e4c496p-30f,
     0x1.564976p-105f, 0.0f, 0.0f, 0.0f, 0x1.df112p-105f, 0.0f, 0x1.3b27a2p-33f, 0.0f,
     0x1.b2d98ep-116f, 0x1.38c1dep-87f, 0x1.620de6p-116f, 0.0f, 0.0f, 0x1.be2f88p-11f,
     0.0f, 0x1.2fc438p-67f, 0.0f, 0x1.11ab18p-112f, 0.0f, 0x1.393b9ap-52f,
     0x1.7dbe6ep-114f, 0.0f, 0.0f, 0x1.c15a38p-78f, 0.0f, 0x1.dfffbep-51f,
     0x1.fd9ab4p-102f, 0x1.c4f768p-27f, 0.0f, 0x1.b48338p-5f, 0x1.bce752p-120f,
     0x1.6f20e2p-54f, 0x1.b4c8f8p-29f, 0x1.623a5ap-125f, 0.0f, 0x1.a89b92p-102f, 0.0f,
     0x1.100ae4p-55f, 0.0f, 0x1.8f0b52p-98f, 0x1.53d73ep-27f, 0x1.8351ap-11f,
     0x1.4ce3bep-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a6384ap-43f, 0.0f, 0x1.fefdcp-17f,
     0.0f, 0.0f, 0.0f, 0x1.2ca05p-108f, 0.0f, 0x1.3c7054p-14f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.68fef4p-21f, 0x1.4226f8p-20f, 0.0f, 0x1.e4d1ccp-98f, 0x1.7045aap-105f,
     0x1.94db4ap-95f, 0.0f, 0x1.8e7664p-39f, 0.0f, 0x1.d5fa76p-60f, 0.0f,
     0x1.f75112p-48f, 0x1.82ceb6p-100f, 0.0f, 0.0f, 0x1.23157ep-97f, 0.0f,
     0x1.6410a6p-49f, 0.0f, 0x1.2e25bep-47f, 0.0f, 0x1.53fd66p-53f, 0x1.53f81p-108f,
     0x1.8f6814p-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c4fb82p-98f, 0x1.2ffe1ep-2f, 0.0f,
     0x1.c18b4cp-94f, 0x1.f28974p-62f, 0x1.63996p-101f, 0x1.3c47dp-31f, 0.0f,
     0x1.f1d75ep-110f, 0.0f, 0x1.8a788ap-106f, 0.0f, 0x1.5ccdep-119f, 0x1.989466p-89f,
     0x1.0a7a98p-111f, 0.0f, 0.0f, 0.0f, 0x1.762aa6p-114f, 0.0f, 0.0f,
     0x1.7173e8p-104f, 0.0f, 0x1.7d3c0cp-82f, 0x1.77c1b8p-23f, 0x1.d8564ep-47f,
     0x1.77e9ccp-86f, 0x1.960474p-113f, 0.0f, 0x1.738206p-74f, 0.0f, 0x1.d1bffep-113f,
     0.0f, 0x1.40d4p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cac15p-108f,
     0x1.923da8p-34f, 0x1.942b52p-76f, 0.0f, 0x1.695fp-73f, 0.0f, 0x1.abb72ap-49f,
     0.0f, 0x1.2500e2p-62f, 0x1.1b9dcap-23f, 0x1.31802ep-22f, 0x1.edbd5ap-104f,
     0x1.694a64p-10f, 0x1.de922cp-24f, 0.0f, 0x1.d0fd92p-95f, 0.0f, 0x1.261114p-22f,
     0.0f, 0x1.342014p-50f, 0x1.ba75cp-122f, 0x1.7fd31ep-1f, 0x1.9fb9fcp-11f,
     0x1.a09212p-125f, 0.0f, 0x1.46cf3ep-43f, 0.0f, 0x1.869cbap-83f, 0.0f, 0.0f,
     0x1.865a94p-97f, 0x1.a56344p-64f, 0.0f, 0x1.429bc4p-22f, 0.0f, 0x1.6f00dcp-62f,
     0.0f, 0x1.2ca54ap-105f, 0x1.11966ep-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.de297cp-117f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9c57ep-10f, 0x1.b6e976p-76f, 0x1.883202p-113f,
     0x1.8eb048p-88f, 0x1.2c3394p-85f, 0.0f, 0.0f, 0x1.b94dd6p-116f, 0.0f, 0.0f,
     0x1.a99f7ep-126f, 0.0f, 0x1.91aa82p-116f, 0x1.6d9e1ap-49f, 0.0f, 0.0f,
     0x1.6a6fp-69f, 0x1.8b0b2cp-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f,
     0x1.4c3a28p-11f, 0x1.1e8104p-126f, 0x1.29b3eap-22f, 0x1.6bafeap-8f, 0.0f, 0.0f,
     0x1.633df2p-66f, 0x1.df06fep-93f, 0.0f, 0.0f, 0.0f, 0x1.c62444p-30f, 0.0f, 0.0f,
     0x1.0a4be4p-70f, 0.0f, 0x1.9be6a2p-45f, 0x1.76f94ep-116f, 0x1.8eea9p-99f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.94d6ecp-20f, 0.0f, 0.0f, 0x1.f9e2acp-87f, 0.0f,
     0x1.0348f2p-70f, 0x1.1f7538p-60f, 0x1.deb926p-54f, 0x1.f08fbcp-98f, 0.0f,
     0x1.74ef02p-32f, 0x1.569662p-119f, 0x1.cd2766p-35f, 0x1.44d3fap-95f,
     0x1.45322cp-40f, 0x1.439bf4p-61f, 0x1.77a46p-66f, 0x1.333294p-35f, 0.0f, 0.0f,
     0.0f, 0x1.8d91dep-59f, 0.0f, 0x1.6321fp-69f, 0x1.714dcep-77f, 0x1.a246eep-19f,
     0.0f, 0.0f, 0.0f, 0x1.109166p-26f, 0x1.ecd7dcp-105f, 0x1.93f512p-39f, 0.0f,
     0x1.7c6dfap-75f, 0x1.2d677cp-111f, 0.0f, 0x1.6dcdc8p-110f, 0.0f, 0x1.ef1292p-73f,
     0x1.77770ep-67f, 0x1.511b2cp-116f, 0x1.03a9b2p-33f, 0.0f, 0.0f, 0x1.500b2ap-70f,
     0.0f, 0.0f, 0x1.c90d6ep-38f, 0x1.3e3d5ep-49f, 0.0f, 0.0f, 0x1.3c262cp-42f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.18db2ep-109f, 0x1.1dfdd6p-13f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.be31b2p-62f, 0.0f, 0x1.d8afe8p-1f, 0x1.ccd666p-93f, 0.0f,
     0.0f, 0x1.d18864p-111f, 0.0f, 0x1.acfbaap-108f, 0x1.54ad0ap-101f,
     0x1.19ff92p-37f, 0.0f, 0x1.35c2b6p-102f, 0x1.f11142p-45f, 0.0f, 0.0f,
     0x1.c38c12p-89f, 0x1.009fbcp-38f, 0x1.a2af78p-87f, 0x1.a56666p-98f,
     0x1.76f49p-14f, 0x1.d8c5fep-53f, 0.0f, 0x1.742442p-93f, 0x1.c1698p-22f,
     0x1.8641a6p-10f, 0x1.40a85ep-79f, 0.0f, 0x1.b37748p-112f, 0.0f, 0.0f, 0.0f,
     0x1.0e5bdp-8f, 0.0f, 0x1.1dc42ep-84f, 0x1.6cb91p-88f, 0x1.cf8916p-35f,
     0x1.ec9772p-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.68c8dap-10f, 0.0f, 0.0f,
     0x1.949866p-76f, 0.0f, 0.0f, 0x1.1f03dp-38f, 0x1.8cb91ap-51f, 0x1.cb13dp-4f,
     0.0f, 0.0f, 0.0f, 0x1.ea9266p-59f, 0x1.55886ep-46f, 0x1.54ccbp-33f,
     0x1.917af8p-14f, 0x1.99d314p-106f, 0x1.8af3fap-74f, 0.0f, 0.0f, 0x1.ab5542p-6f,
     0x1.3d4d7ap-83f, 0x1.7150e6p-29f, 0x1.ad9b88p-65f, 0x1.88f936p-41f,
     0x1.b600a8p-126f, 0x1.02685p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.76100cp-104f, 0.0f,
     0x1.0d2a4ap-57f, 0x1.45d4fp-20f, 0.0f, 0.0f, 0x1.0aca4cp-8f, 0.0f,
     0x1.f78198p-87f, 0x1.583ec4p-73f, 0.0f, 0.0f, 0x1.42015ep-80f, 0.0f,
     0x1.b85acap-117f
};
static const float external_bench_wrapper_input_table_arg1[1001]  = {
     0x1.7b6f7p-103f, 0.0f, 0x1.3e3ef6p-12f, 0.0f, 0x1.d13494p-121f,
     0x1.dd2624p-126f, 0x1.6e84cp-108f, 0.0f, 0.0f, 0x1.bcf758p-39f, 0x1.487d14p-99f,
     0x1.403b62p-10f, 0.0f, 0x1.78ac3ep-123f, 0x1.1551fep-31f, 0.0f, 0.0f, 0.0f,
     0x1.5815e6p-4f, 0x1.5e1c1ap-1f, 0.0f, 0.0f, 0.0f, 0x1.2003dap-24f, 0.0f,
     0x1.8be72ep-123f, 0.0f, 0x1.9bf6e2p-92f, 0x1.a236cep-50f, 0x1.a2c99ep-90f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.45d884p-44f, 0x1.ae806ep-32f,
     0x1.b93218p-19f, 0.0f, 0.0f, 0x1.f44c4ep-59f, 0x1.e21714p-36f, 0x1.e85bbep-63f,
     0x1.8c0d7p-120f, 0.0f, 0x1.2cc98ep-38f, 0.0f, 0x1.0b3508p-14f, 0.0f, 0.0f,
     0x1.f88992p-55f, 0x1.f7717p-28f, 0.0f, 0x1.029652p-67f, 0.0f, 0.0f,
     0x1.a2ca2ep-120f, 0x1.71339p-29f, 0x1.3a35e8p-117f, 0.0f, 0.0f, 0x1.ca5cfep-108f,
     0.0f, 0x1.bd809cp-18f, 0x1.79823cp-91f, 0.0f, 0x1.188ab8p-94f, 0x1.9bee56p-20f,
     0x1.6accc6p-29f, 0x1.193daep-20f, 0.0f, 0.0f, 0x1.254338p-59f, 0.0f,
     0x1.9aa91ap-24f, 0x1.1fb14p-17f, 0x1.bd9f34p-117f, 0x1.e7ad46p-68f,
     0x1.cc7f0ap-5f, 0.0f, 0x1.9bbceap-71f, 0x1.f078bep-87f, 0.0f, 0x1.c1bb8ap-76f,
     0.0f, 0.0f, 0.0f, 0x1.b488fap-13f, 0x1.8c7b7ep-99f, 0.0f, 0x1.980382p-73f,
     0x1.6a9b1ep-85f, 0x1.01b06ep-35f, 0.0f, 0.0f, 0x1.6216ecp-84f, 0.0f, 0.0f,
     0x1.ef9216p-110f, 0.0f, 0x1.42ac5cp-108f, 0.0f, 0x1.54e0c4p-98f, 0.0f,
     0x1.94e8ep-103f, 0.0f, 0.0f, 0.0f, 0x1.86f74ap-12f, 0.0f, 0x1.2fd33p-20f, 0.0f,
     0x1.26c332p-99f, 0.0f, 0x1.9a62ap-98f, 0x1.e81ef4p-19f, 0.0f, 0.0f,
     0x1.574d2p-19f, 0.0f, 0x1.11369ep-79f, 0x1.46a502p-19f, 0x1.960166p-114f, 0.0f,
     0x1.8bdd6cp-45f, 0x1.e0cfacp-101f, 0x1.f4b76p-114f, 0.0f, 0.0f, 0.0f,
     0x1.31ff36p-105f, 0x1.f0dad2p-13f, 0.0f, 0.0f, 0x1.ff3a9ep-32f, 0x1.eb705p-13f,
     0.0f, 0.0f, 0x1.d6bf3cp-77f, 0.0f, 0.0f, 0.0f, 0x1.46f6b4p-72f, 0.0f,
     0x1.206498p-75f, 0x1.4c029ap-24f, 0x1.2289d8p-100f, 0x1.7939e4p-118f, 0.0f,
     0x1.dd21eep-91f, 0x1.a22c9p-49f, 0.0f, 0x1.5546cep-100f, 0.0f, 0x1.9b9436p-39f,
     0.0f, 0x1.b45a1cp-76f, 0x1.4e1092p-32f, 0.0f, 0.0f, 0x1.4821f6p-121f, 0.0f,
     0x1.69fa28p-85f, 0x1.eb2b26p-13f, 0x1.cafc3ap-97f, 0x1.75cd2cp-73f,
     0x1.2da716p-54f, 0x1.c0700cp-93f, 0x1.e32752p-48f, 0x1.c32596p-30f,
     0x1.141a42p-67f, 0.0f, 0.0f, 0x1.bda634p-111f, 0.0f, 0x1.1e76d6p-116f, 0x1p0f,
     0.0f, 0x1.90805p-50f, 0x1.d1b112p-13f, 0.0f, 0x1.1216d4p-123f, 0.0f,
     0x1.63d31p-112f, 0.0f, 0x1.5a1d04p-113f, 0.0f, 0x1.5ca636p-111f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.1d0ad2p-39f, 0x1.d75e8ep-55f, 0.0f, 0x1.7e0e9p-41f,
     0x1.63ede6p-105f, 0x1.0d1684p-79f, 0x1.a494c8p-7f, 0.0f, 0.0f, 0.0f,
     0x1.7ed1d4p-6f, 0x1.9a689ap-125f, 0x1.c6982cp-71f, 0.0f, 0x1.d389d4p-109f, 0.0f,
     0.0f, 0x1.35cb2cp-33f, 0x1.644dcp-88f, 0.0f, 0x1.49451cp-80f, 0.0f,
     0x1.19e79ep-5f, 0x1.38d93p-25f, 0.0f, 0.0f, 0.0f, 0x1.7a48b4p-89f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.66715ep-15f, 0.0f, 0x1.686984p-99f, 0x1.bd087ap-7f,
     0.0f, 0.0f, 0.0f, 0x1.2ee9f2p-59f, 0x1.7e11a2p-19f, 0.0f, 0.0f, 0x1.dd0c52p-7f,
     0.0f, 0x1.d4b47cp-28f, 0x1.e92584p-32f, 0x1.ac946ep-113f, 0.0f, 0.0f,
     0x1.244622p-124f, 0x1.099d1cp-12f, 0.0f, 0x1.0374e2p-114f, 0x1.89e5f4p-93f,
     0x1.32cc5p-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.38ba74p-62f, 0.0f,
     0x1.81ecb2p-74f, 0x1.fcd116p-23f, 0.0f, 0x1.121e3cp-84f, 0x1.035dd6p-96f, 0.0f,
     0x1.01410cp-47f, 0.0f, 0x1.4232a8p-37f, 0.0f, 0.0f, 0.0f, 0x1.7aed7p-115f,
     0x1.d17efcp-70f, 0.0f, 0x1.460d8cp-46f, 0x1.1d5394p-71f, 0.0f, 0.0f,
     0x1.063448p-30f, 0x1.aed894p-80f, 0x1.8d6aaap-74f, 0.0f, 0x1.bc77bcp-110f,
     0x1.a6dd66p-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5680fap-15f, 0x1.908734p-35f,
     0x1.e14526p-115f, 0x1.26b85ap-102f, 0.0f, 0x1.baaef6p-45f, 0x1.fd3d94p-10f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d2cfdp-76f, 0x1.33f99ap-101f, 0.0f, 0x1.85ac18p-35f,
     0x1.40eafep-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.34b8ep-108f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c669a2p-26f, 0.0f, 0x1.7b6cacp-16f, 0x1.e680dp-123f,
     0x1.01e48ep-120f, 0.0f, 0.0f, 0.0f, 0x1.673438p-11f, 0.0f, 0x1.880eb2p-80f, 0.0f,
     0x1.81e1dp-22f, 0.0f, 0.0f, 0x1.c7b208p-66f, 0x1.9763fcp-17f, 0x1.cf4ad2p-82f,
     0.0f, 0.0f, 0x1.89b93ap-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.08b14p-29f,
     0x1.fcb964p-61f, 0.0f, 0x1.4bfe8ap-21f, 0.0f, 0x1.c0543cp-3f, 0.0f, 0.0f,
     0x1.922daap-27f, 0.0f, 0x1.cf21f2p-54f, 0x1.623458p-119f, 0x1p0f,
     0x1.cc1a36p-71f, 0x1.9825b2p-12f, 0.0f, 0x1.4906fap-8f, 0x1.ebfe8p-16f,
     0x1.06d7a6p-103f, 0x1.091f7cp-76f, 0x1.cee7fep-5f, 0.0f, 0.0f, 0.0f,
     0x1.1d21bp-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a42faap-69f, 0x1.a0f256p-23f,
     0x1.4b195ap-36f, 0.0f, 0x1.4eb484p-111f, 0x1.78d892p-86f, 0.0f, 0x1.379d54p-65f,
     0x1.65e9ecp-116f, 0.0f, 0.0f, 0.0f, 0x1.37455ap-110f, 0x1.9c9c56p-73f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.60185ap-18f, 0x1.3593cap-124f, 0x1.c8c1b8p-21f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.3fbc8p-109f, 0x1.fa0586p-31f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.dae12cp-83f, 0x1.dc4632p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.11907cp-9f, 0.0f,
     0x1.5262eap-43f, 0x1.7aced6p-122f, 0.0f, 0.0f, 0.0f, 0x1.c71f32p-73f, 0x1p0f,
     0x1.46d2aap-118f, 0.0f, 0x1.9f67c8p-31f, 0x1.4112c8p-5f, 0x1.403cc4p-117f, 0.0f,
     0x1.3b12d8p-43f, 0.0f, 0x1.fd57c6p-104f, 0x1.7811e6p-67f, 0x1.8b71a6p-41f,
     0x1.896704p-55f, 0x1.1042acp-72f, 0x1.d6358ep-106f, 0x1.2e1f32p-44f, 0.0f,
     0x1.7864aap-34f, 0x1.5763b8p-13f, 0x1.63c8fp-59f, 0x1.38776ap-77f,
     0x1.2c4c78p-74f, 0x1.91c2dap-74f, 0x1.c6e17ap-37f, 0.0f, 0.0f, 0x1.6fa79cp-75f,
     0x1.8fe19p-97f, 0x1.fefdeap-90f, 0.0f, 0.0f, 0x1.e060a2p-86f, 0x1.caa76cp-13f,
     0.0f, 0.0f, 0x1.a566fp-52f, 0.0f, 0x1.9276f6p-107f, 0.0f, 0x1.a43d12p-15f, 0.0f,
     0.0f, 0.0f, 0x1.34ff66p-11f, 0.0f, 0x1.9032eap-38f, 0.0f, 0.0f, 0x1.671a5cp-22f,
     0.0f, 0x1.94304p-54f, 0.0f, 0.0f, 0x1.21d4eap-115f, 0x1.578c24p-61f,
     0x1.c92e72p-5f, 0.0f, 0x1.7e6da4p-28f, 0x1.5ec0a6p-83f, 0.0f, 0.0f,
     0x1.8de17ep-95f, 0x1.5adc58p-7f, 0x1.b50cb8p-109f, 0x1.7cc13p-74f, 0.0f, 0.0f,
     0.0f, 0x1.97251cp-87f, 0x1.962c6p-49f, 0.0f, 0.0f, 0.0f, 0x1.e7a34ap-51f, 0.0f,
     0x1.5b566cp-45f, 0x1.2580eap-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3cbff2p-6f, 0.0f, 0x1.5c420ap-20f, 0.0f, 0.0f, 0x1.03dc2ap-63f, 0.0f,
     0x1.04cfbep-34f, 0x1.e3296p-25f, 0x1.b74484p-124f, 0x1.38dffp-120f, 0.0f, 0.0f,
     0.0f, 0x1.9ffb78p-50f, 0.0f, 0x1.618cd8p-117f, 0x1.7bc832p-101f, 0.0f, 0.0f,
     0.0f, 0x1.86065ep-13f, 0.0f, 0x1.f9109cp-2f, 0x1.87654ep-93f, 0x1.07743cp-73f,
     0x1.ffec78p-6f, 0.0f, 0x1.20741p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8ab58ep-101f,
     0x1.46e92ap-3f, 0.0f, 0.0f, 0x1.73189p-20f, 0x1.f3c09p-98f, 0.0f,
     0x1.f0b0f2p-66f, 0.0f, 0x1.e9ca62p-6f, 0.0f, 0x1p0f, 0x1.49e47p-48f, 0.0f,
     0x1.1e4734p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9e18c2p-73f,
     0.0f, 0x1.65c84cp-67f, 0x1.f58dcep-28f, 0.0f, 0.0f, 0x1.8ddf84p-78f,
     0x1.80fa1cp-64f, 0x1.eb071ep-123f, 0x1.dbc7eap-14f, 0x1.97548cp-72f,
     0x1.b05bd8p-16f, 0x1.949a98p-111f, 0.0f, 0.0f, 0.0f, 0x1.60a81ep-11f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.76d8c4p-16f, 0x1.36d278p-84f, 0.0f, 0.0f, 0.0f, 0x1.e7f3aap-16f,
     0.0f, 0.0f, 0x1.fc0826p-122f, 0.0f, 0x1.74dffcp-13f, 0x1.849d28p-56f,
     0x1.448894p-61f, 0.0f, 0.0f, 0x1.a2785p-33f, 0x1.dcfee2p-15f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.724624p-97f, 0x1.88f8d4p-126f, 0.0f, 0.0f,
     0x1.ce0e58p-88f, 0x1.88a73ap-5f, 0.0f, 0.0f, 0.0f, 0x1.ab9638p-80f, 0.0f,
     0x1.648a54p-106f, 0x1.3d4b5ap-58f, 0x1.f2132ap-10f, 0x1.05aad4p-84f, 0.0f, 0.0f,
     0x1.b232d2p-49f, 0.0f, 0.0f, 0.0f, 0x1.217126p-92f, 0x1.047ep-21f, 0.0f,
     0x1.d3dbd2p-30f, 0x1.d08a1ep-70f, 0x1.d23068p-70f, 0.0f, 0x1.5f3f8p-37f, 0.0f,
     0.0f, 0.0f, 0x1.a29168p-36f, 0.0f, 0x1.5a8f08p-115f, 0x1.5531f8p-26f, 0.0f, 0.0f,
     0x1.cdf748p-84f, 0x1.1f2874p-41f, 0.0f, 0.0f, 0x1.cc0b1ep-63f, 0x1.c16c0ap-64f,
     0x1.e279eep-123f, 0.0f, 0x1.556464p-16f, 0.0f, 0x1.ebb748p-93f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e1b1fep-27f, 0x1.2d5ec2p-5f, 0x1.f0ea76p-75f, 0x1.386622p-119f, 0.0f,
     0x1.4be69p-44f, 0x1.15bc5ep-42f, 0x1.d493ep-112f, 0.0f, 0.0f, 0x1.d0c4p-14f,
     0.0f, 0.0f, 0x1.59432cp-100f, 0x1.ddf10ap-7f, 0x1.a0cabep-100f, 0.0f, 0.0f, 0.0f,
     0x1.e81b4p-34f, 0x1.0418acp-72f, 0x1.198e24p-20f, 0x1.5d9252p-70f,
     0x1.b6de4ep-78f, 0.0f, 0x1.4be6dcp-75f, 0.0f, 0x1.87abe2p-87f, 0x1.0e978p-15f,
     0x1.ace8cap-64f, 0.0f, 0.0f, 0x1.a21ac6p-71f, 0x1.446fcep-30f, 0x1.8c8614p-124f,
     0x1.deb534p-81f, 0.0f, 0.0f, 0x1.bc238ep-48f, 0x1.bd9b04p-15f, 0x1.f56492p-92f,
     0x1.a2d25ap-72f, 0x1.ac886cp-24f, 0x1.6330a4p-122f, 0x1.e76786p-87f, 0.0f, 0.0f,
     0.0f, 0x1.d734ap-123f, 0.0f, 0.0f, 0.0f, 0x1.0d6b96p-57f, 0.0f, 0x1.a2649cp-72f,
     0.0f, 0x1.62cd22p-60f, 0x1.8ee066p-48f, 0x1.2f5c26p-83f, 0x1p0f, 0x1.643362p-67f,
     0.0f, 0x1.2d6438p-8f, 0.0f, 0.0f, 0x1.36ae44p-63f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.96738cp-73f, 0x1.72204ap-34f, 0.0f, 0x1.103bccp-35f, 0.0f, 0x1.4f178ep-7f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.99491cp-37f, 0.0f, 0x1.a94ce8p-20f,
     0x1.e95a38p-66f, 0.0f, 0.0f, 0x1.ad78e8p-124f, 0x1.e0f956p-119f, 0.0f, 0.0f,
     0.0f, 0x1.77155ap-58f, 0.0f, 0x1.96587cp-66f, 0.0f, 0.0f, 0x1.0fb448p-21f, 0.0f,
     0.0f, 0x1.ecc21ap-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.354abep-77f, 0.0f,
     0x1.04bd3cp-95f, 0x1.9bc672p-55f, 0.0f, 0.0f, 0x1.fbaba8p-26f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.0da8a4p-31f, 0.0f, 0.0f, 0x1.bb68e4p-61f, 0.0f,
     0x1.3624ap-39f, 0.0f, 0.0f, 0.0f, 0x1.a850b8p-23f, 0.0f, 0.0f, 0x1.58d386p-48f,
     0.0f, 0.0f, 0x1.708216p-36f, 0x1.0d3a84p-79f, 0.0f, 0x1.fb7a7p-107f,
     0x1.df34cep-11f, 0x1.80a8dap-62f, 0.0f, 0.0f, 0x1.03b25cp-12f, 0.0f, 0.0f,
     0x1.ac84f8p-3f, 0.0f, 0.0f, 0x1.bdcde8p-71f, 0x1.4e259p-40f, 0.0f,
     0x1.344464p-1f, 0.0f, 0.0f, 0x1.4cd49ep-12f, 0x1.561386p-37f, 0.0f,
     0x1.3b66f2p-6f, 0.0f, 0.0f, 0.0f, 0x1.3cfda6p-126f, 0.0f, 0.0f, 0x1.386066p-45f,
     0.0f, 0x1.f8e9acp-76f, 0.0f, 0.0f, 0.0f, 0x1.f2176p-98f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.af06acp-25f, 0.0f, 0x1.0257ap-61f, 0.0f, 0.0f, 0.0f,
     0x1.1f2e9p-12f, 0x1.2b5804p-46f, 0x1.fd4e22p-28f, 0.0f, 0x1.1b3f88p-91f,
     0x1.35b55ap-61f, 0x1.c6f974p-13f, 0.0f, 0x1.835f52p-3f, 0x1.f6ce0ap-125f, 0.0f,
     0.0f, 0.0f, 0x1.830992p-126f, 0x1.43d23p-126f, 0.0f, 0.0f, 0x1.e745a2p-125f,
     0.0f, 0x1.8f94e6p-125f, 0x1.104ce2p-95f, 0.0f, 0x1.f75948p-28f, 0.0f,
     0x1.a6fb9cp-5f, 0.0f, 0x1.72c216p-19f, 0.0f, 0x1.9339c2p-113f, 0.0f, 0.0f,
     0x1.b185b4p-5f, 0.0f, 0x1.ab4448p-38f, 0.0f, 0.0f, 0x1.4388p-46f, 0.0f, 0.0f,
     0x1.b822e6p-93f, 0x1.f5ace4p-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.28b46ap-34f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.dacba2p-50f, 0x1.8ac068p-58f, 0x1.6add5cp-80f,
     0x1.144566p-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1ff1b2p-59f, 0x1.5906b6p-84f,
     0x1.8d2124p-26f, 0x1.a0f2f8p-83f, 0x1.e83076p-35f, 0x1.b62686p-111f, 0.0f, 0.0f,
     0x1.73ebe4p-79f, 0x1.06027cp-61f, 0.0f, 0x1.5e2e5p-104f, 0x1.312186p-90f, 0.0f,
     0.0f, 0.0f, 0x1.dd6c34p-108f, 0x1.df732ap-51f, 0.0f, 0x1.c0d762p-9f, 0.0f, 0.0f,
     0x1.7e7dd4p-52f, 0.0f, 0.0f, 0x1.dc4108p-77f, 0.0f, 0.0f, 0x1.ca0ecap-79f,
     0x1.e71d6p-36f, 0x1.abd956p-13f, 0.0f, 0.0f, 0x1.2631a6p-124f, 0.0f,
     0x1.0e05acp-53f, 0.0f, 0.0f, 0x1.a5f32ep-101f, 0.0f, 0.0f, 0x1.50a414p-105f,
     0x1.6dc5c8p-43f, 0.0f, 0x1.085a24p-125f, 0x1.0450c2p-56f, 0x1.956f84p-15f, 0.0f,
     0x1.7e9696p-115f, 0.0f, 0x1.5a0044p-93f, 0x1.9ea138p-70f, 0.0f, 0x1.44500ep-40f,
     0.0f, 0x1.69112p-99f, 0.0f, 0x1.3a9796p-107f, 0.0f, 0x1.d5a118p-22f,
     0x1.28edfp-85f, 0.0f, 0.0f, 0x1.61e3e6p-57f, 0.0f, 0.0f, 0x1.a69302p-21f, 0.0f,
     0.0f, 0x1.0f97d8p-107f, 0x1.721938p-91f, 0.0f, 0.0f, 0.0f, 0x1.1c8f96p-3f,
     0x1.7d2deep-67f, 0.0f, 0.0f, 0x1.8f407ep-70f, 0x1.c9009p-1f, 0.0f,
     0x1.d1bb98p-34f, 0.0f, 0.0f, 0x1.cf0ec8p-57f, 0.0f, 0x1.66b068p-80f, 0.0f,
     0x1.dbdadcp-90f, 0x1.dc530cp-107f, 0.0f, 0.0f, 0.0f, 0x1.b6f06p-109f,
     0x1.3ce58cp-68f, 0x1.127c7cp-105f, 0x1.9853bap-79f, 0.0f, 0x1.847cdap-108f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b12eaep-26f, 0.0f, 0.0f
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
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = 0.0f;
    tmp = __cos_counter_num(0);
    timer = tmp;
    j = INT32_C(0);

    for (;(j < INT32_C(10000));){
        float bench_acc;
        int32_t i;
        float tmp0;
        int32_t tmp1;

        i = INT32_C(0);
        bench_acc = 0.0f;

        for (;(i < INT32_C(1001));){
            float tmp0;
            float tmp1;
            float tmp2;
            float tmp3;
            int32_t tmp4;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = external_bench_wrapper_input_table_arg1[i];
            tmp2 = Sleef_hypotf1_u35purecfma(tmp0, tmp1);
            external_bench_wrapper_output_table[i] = tmp2;
            tmp3 = bench_acc + tmp2;
            bench_acc = tmp3;
            tmp4 = i + INT32_C(1);
            i = tmp4;
        }
        tmp0 = global_bench_acc + bench_acc;
        global_bench_acc = tmp0;
        tmp1 = j + INT32_C(1);
        j = tmp1;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_hypotf1_u35purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_hypotf1_u35purecfma bench acc %a\n", global_bench_acc);
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
