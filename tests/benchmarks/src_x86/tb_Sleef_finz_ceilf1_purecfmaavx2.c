/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_ceilf1_purecfma.c --function \
 *     Sleef_finz_ceilf1_purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.f7f652p-97f, 0x1.2eb56ep-63f, 0x1.8d3ee2p-58f, 0x1.10a95ep-33f, 0.0f,
     0x1.defc2ep-87f, 0.0f, 0x1.76dcecp-86f, 0x1.836456p-51f, 0x1.550f7p-46f, 0.0f,
     0.0f, 0x1.ef0162p-85f, 0x1.f6ccf4p-47f, 0.0f, 0.0f, 0x1.72b0dep-5f,
     0x1.8450eep-100f, 0x1p0f, 0.0f, 0x1.13ef74p-21f, 0.0f, 0x1.2cdde2p-47f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0050b2p-53f, 0x1.63472cp-35f,
     0x1.ef9d1cp-36f, 0x1.e23f3ap-51f, 0x1.94cf12p-121f, 0.0f, 0.0f, 0.0f,
     0x1.1e1f96p-43f, 0.0f, 0x1.04d136p-36f, 0x1.0f85d8p-124f, 0.0f, 0.0f,
     0x1.b0ba54p-64f, 0.0f, 0x1.01fa9ap-125f, 0.0f, 0x1.0a5304p-101f, 0x1.91ea88p-29f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1905cep-85f, 0.0f, 0x1.93878cp-96f,
     0x1.21f41ep-54f, 0x1.a16502p-17f, 0x1.b50186p-39f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.afa264p-38f, 0x1.7a069ep-59f, 0x1.d8459ep-82f, 0.0f, 0x1.c49e9ep-68f,
     0x1.073a7p-73f, 0x1.82d90ap-91f, 0x1.929c3p-52f, 0.0f, 0x1.6dc268p-14f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c62d46p-79f, 0x1.cfab8ep-117f, 0.0f, 0.0f,
     0x1.15bbdep-51f, 0.0f, 0.0f, 0x1.7c3b68p-17f, 0x1.85083ep-123f, 0.0f, 0.0f,
     0x1.12b008p-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.339938p-12f, 0x1.6fda58p-64f, 0.0f,
     0x1p0f, 0.0f, 0x1.bb867p-114f, 0x1.8c679cp-98f, 0.0f, 0x1.efa61cp-86f, 0.0f,
     0.0f, 0.0f, 0x1.25d4c2p-98f, 0.0f, 0x1.5b7b2ap-66f, 0x1.0433dap-118f,
     0x1.6d3ca4p-108f, 0.0f, 0x1.87e0e2p-61f, 0x1.864b24p-88f, 0.0f, 0.0f,
     0x1.f6a41p-92f, 0x1.067348p-31f, 0.0f, 0x1.266f6p-118f, 0x1.89850ep-118f,
     0x1.9af78ap-65f, 0.0f, 0.0f, 0.0f, 0x1.dd9dap-124f, 0.0f, 0x1.e60cp-5f,
     0x1.e998ccp-64f, 0.0f, 0x1.d9eeap-92f, 0x1.7887fep-65f, 0x1.a5593cp-35f,
     0x1.b37a64p-103f, 0x1.b7a466p-92f, 0x1.cb96e6p-93f, 0x1.75bfdcp-95f,
     0x1.c58a3p-46f, 0x1.bef39ap-59f, 0x1.5f89d6p-36f, 0x1.6b7d96p-90f, 0.0f, 0.0f,
     0.0f, 0x1.6b5d04p-1f, 0.0f, 0.0f, 0x1.cfeb3ep-58f, 0.0f, 0x1.384ef8p-98f,
     0x1.983c56p-13f, 0x1.a129bep-22f, 0x1.f7ae28p-45f, 0.0f, 0.0f, 0x1.22ad3cp-62f,
     0x1.04c964p-108f, 0x1.115378p-105f, 0.0f, 0.0f, 0x1.75647cp-7f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.fa66a6p-12f, 0.0f, 0x1.e3ec1p-82f, 0.0f, 0.0f, 0x1.c3f544p-110f, 0.0f,
     0.0f, 0x1.efa3eap-68f, 0x1.103906p-104f, 0x1.1d7f52p-96f, 0.0f, 0.0f,
     0x1.0601c4p-66f, 0x1.8c5ac6p-34f, 0x1.070bfp-63f, 0x1.5f99fep-66f, 0.0f, 0.0f,
     0.0f, 0x1.b2a6e6p-21f, 0.0f, 0x1.0dfed2p-2f, 0x1.4cb452p-33f, 0.0f,
     0x1.30a798p-71f, 0.0f, 0x1.8adbb2p-81f, 0x1.5dddbcp-126f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.083844p-71f, 0x1.0e036p-13f, 0.0f, 0x1.7fb7d8p-21f, 0x1p0f, 0.0f, 0.0f, 0.0f,
     0x1.6c3b58p-51f, 0x1.eaf4a2p-16f, 0x1.ece2b8p-27f, 0x1.b17ef4p-62f,
     0x1.5ebdfp-107f, 0x1.cd478cp-49f, 0x1.e5e406p-13f, 0.0f, 0x1.be6c1ap-19f,
     0x1.f7c248p-53f, 0x1.af6f54p-66f, 0x1.2b4fc4p-7f, 0x1.850286p-59f,
     0x1.1406cp-110f, 0.0f, 0x1.70574p-2f, 0x1.6e0238p-50f, 0.0f, 0.0f, 0.0f,
     0x1.718d74p-93f, 0.0f, 0x1.e78068p-63f, 0.0f, 0x1.ab6d26p-59f, 0.0f, 0.0f,
     0x1.6ec018p-125f, 0.0f, 0.0f, 0x1.334ba4p-76f, 0x1.8c038ep-27f, 0x1.3723e8p-40f,
     0.0f, 0.0f, 0.0f, 0x1.7a780cp-70f, 0x1.779f7ep-4f, 0x1.038fb6p-80f, 0.0f,
     0x1.ac57ccp-27f, 0.0f, 0.0f, 0.0f, 0x1.37aeeap-1f, 0x1.6dde6cp-8f, 0.0f, 0.0f,
     0.0f, 0x1.9dd314p-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.61d2fcp-97f,
     0x1.7e9e76p-78f, 0x1.b0bc78p-107f, 0x1.56dc0cp-37f, 0.0f, 0x1.292cbcp-23f, 0.0f,
     0x1.b2ce5ep-13f, 0x1.f97884p-18f, 0.0f, 0.0f, 0x1.3bd05ep-3f, 0.0f,
     0x1.114072p-80f, 0x1.7286acp-116f, 0x1.e14fbap-83f, 0.0f, 0x1.402b84p-63f, 0.0f,
     0.0f, 0x1.b9b24cp-28f, 0.0f, 0x1.7f9dcap-86f, 0.0f, 0.0f, 0x1.b642bp-98f,
     0x1.d6b204p-112f, 0.0f, 0x1.9d707cp-66f, 0.0f, 0x1.bbd0a8p-12f, 0.0f, 0.0f, 0.0f,
     0x1.e792bep-109f, 0x1.ead416p-59f, 0.0f, 0x1.cb33a4p-126f, 0x1.6bb072p-49f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.454c7p-88f, 0x1.446e5cp-83f, 0x1.0fd3eep-72f, 0.0f,
     0x1.b3e122p-39f, 0x1.1df9c8p-94f, 0.0f, 0.0f, 0.0f, 0x1.002268p-107f,
     0x1.919e26p-98f, 0.0f, 0x1.f06564p-111f, 0.0f, 0x1.2e8d42p-114f, 0.0f,
     0x1.fc437p-8f, 0x1.ac183ap-78f, 0.0f, 0x1.4f5928p-48f, 0.0f, 0.0f, 0.0f,
     0x1.8e4e8ep-63f, 0.0f, 0x1.cddadep-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a67c3cp-50f,
     0x1.5e283ap-98f, 0x1.78366p-71f, 0x1.2c22b2p-101f, 0x1.2d06eap-27f,
     0x1.07b662p-86f, 0.0f, 0x1.b5e416p-40f, 0x1.50e812p-49f, 0.0f, 0x1.79692p-26f,
     0.0f, 0x1.70d77cp-63f, 0x1.c88a28p-126f, 0.0f, 0x1.660796p-110f, 0.0f, 0.0f,
     0x1.138fd6p-11f, 0x1.11c8fcp-124f, 0x1.42b5cp-52f, 0.0f, 0.0f, 0x1.7b71bep-6f,
     0.0f, 0.0f, 0x1.02d29ep-90f, 0x1.db243cp-117f, 0x1.d76b1ep-102f, 0.0f,
     0x1.0bf2bp-21f, 0.0f, 0.0f, 0.0f, 0x1.51af4cp-31f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.aa40f8p-70f, 0.0f, 0x1.bee0c8p-113f, 0.0f, 0x1.a6ae9p-7f, 0x1.d91ce6p-101f,
     0.0f, 0x1.8defa8p-100f, 0.0f, 0.0f, 0x1.02dbd2p-119f, 0x1.19aac4p-80f,
     0x1.0ec41p-11f, 0x1.a0bd98p-119f, 0x1.1a905ap-23f, 0x1.9ca67cp-75f,
     0x1.9be208p-62f, 0.0f, 0x1.e14c7cp-4f, 0x1.58676ep-57f, 0x1.a6f91ep-95f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.72f7c2p-22f, 0.0f, 0.0f, 0x1.e21eccp-57f, 0.0f,
     0.0f, 0.0f, 0x1.9e543cp-74f, 0.0f, 0x1.68ea36p-15f, 0.0f, 0x1.54c59cp-68f, 0.0f,
     0x1.bdc892p-81f, 0x1.52f46p-88f, 0.0f, 0x1.995098p-6f, 0x1.a17ea8p-73f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ba4132p-88f, 0.0f, 0.0f, 0.0f, 0x1.3736f4p-86f,
     0x1.9f2186p-67f, 0.0f, 0x1.beecfp-117f, 0.0f, 0x1.0e2d42p-45f, 0x1.15e2c4p-117f,
     0x1.50ea72p-32f, 0x1.bf08cep-33f, 0x1.f1c06ap-72f, 0x1.6c8e28p-78f, 0.0f, 0.0f,
     0.0f, 0x1.7b9658p-75f, 0x1.38a4dp-23f, 0x1.edad1ep-60f, 0.0f, 0x1.e5907ep-32f,
     0x1.f4760cp-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b5aec2p-1f, 0x1.ff11ep-87f,
     0x1.cb62fp-20f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.2994dp-55f,
     0x1.68060ep-89f, 0x1.e7300ep-14f, 0x1.2c9ec2p-39f, 0.0f, 0x1.1efd14p-30f,
     0x1.b0dccp-105f, 0x1.b24c34p-25f, 0.0f, 0x1.947d24p-11f, 0x1.a3e5b6p-14f,
     0x1.516f8cp-113f, 0x1.32c28ep-48f, 0x1.3745e4p-27f, 0.0f, 0x1.fa5366p-70f, 0.0f,
     0x1.bdef6p-8f, 0x1.100524p-55f, 0x1.b72206p-88f, 0x1.41956cp-68f,
     0x1.7eda0ap-118f, 0x1.8252e4p-122f, 0x1.0636e8p-47f, 0x1.3ca508p-108f,
     0x1.9f14aep-20f, 0.0f, 0x1.e5be5ep-101f, 0.0f, 0.0f, 0x1.9c5e6ap-61f,
     0x1.963718p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f05718p-99f, 0.0f, 0.0f,
     0x1.628442p-52f, 0x1.767e78p-25f, 0x1.df3422p-106f, 0x1.758644p-100f,
     0x1.1b1b6cp-25f, 0.0f, 0x1.2bb9d2p-113f, 0x1.eec7fp-107f, 0x1.49f614p-27f,
     0x1.6d66dap-72f, 0x1.15b9dcp-119f, 0.0f, 0x1.d42628p-120f, 0x1.b9a826p-100f,
     0x1.df5054p-78f, 0x1.432e76p-77f, 0x1.ba1464p-51f, 0.0f, 0.0f, 0x1.13d4f8p-31f,
     0.0f, 0.0f, 0.0f, 0x1.00dee2p-52f, 0.0f, 0x1.e537d6p-105f, 0x1.83c21cp-35f, 0.0f,
     0.0f, 0x1.549af6p-54f, 0.0f, 0x1.efbf5p-54f, 0.0f, 0.0f, 0.0f, 0x1.c1331p-101f,
     0x1.5728aep-42f, 0x1.e64a7cp-81f, 0.0f, 0.0f, 0x1.a7ef42p-105f, 0.0f,
     0x1.18e224p-91f, 0.0f, 0x1.8dcc1p-100f, 0x1.d5f486p-92f, 0.0f, 0x1.9900eep-105f,
     0x1.3a5fdp-18f, 0x1.b4ed46p-11f, 0.0f, 0x1.078f2ap-104f, 0x1.d1cefap-86f,
     0x1.29d15cp-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5feca6p-89f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f7dabap-98f, 0.0f, 0.0f, 0.0f, 0x1.8a8ddap-72f, 0x1.f2ac02p-108f,
     0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c745ap-97f,
     0x1.9bab7ep-104f, 0x1.79a15p-18f, 0x1.8b2f6p-124f, 0.0f, 0x1.375274p-78f, 0.0f,
     0x1.51b41ep-43f, 0.0f, 0.0f, 0x1.15fa32p-45f, 0.0f, 0.0f, 0x1.e55172p-88f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.83c378p-82f, 0x1.b35e52p-2f, 0x1.4b3d68p-27f,
     0.0f, 0x1.3884cap-8f, 0x1.14f636p-48f, 0x1.c0ca92p-15f, 0x1.bf0506p-77f,
     0x1.d33158p-33f, 0x1.c1c526p-44f, 0.0f, 0x1.e575fp-6f, 0x1p0f, 0x1.5775e8p-101f,
     0.0f, 0x1.c6a3bap-87f, 0x1.a9c432p-33f, 0.0f, 0x1.897dccp-28f, 0x1.b9ba62p-15f,
     0x1.e31c0cp-34f, 0x1.ba7cccp-126f, 0.0f, 0.0f, 0x1.fbee08p-20f, 0x1.244392p-54f,
     0.0f, 0.0f, 0x1.b7e052p-103f, 0.0f, 0.0f, 0x1.82714cp-107f, 0x1.64c064p-65f,
     0x1.51b33cp-88f, 0x1.5165dep-88f, 0.0f, 0x1.e1314p-31f, 0x1.cc103ap-69f, 0.0f,
     0x1.5d3b12p-97f, 0.0f, 0.0f, 0.0f, 0x1.9dee5cp-52f, 0.0f, 0.0f, 0x1.e1ae86p-26f,
     0x1.4f418ep-18f, 0x1.3206b2p-32f, 0.0f, 0x1.15e88p-32f, 0x1.9fad28p-51f, 0.0f,
     0.0f, 0x1.bafea2p-83f, 0x1.ea3d3cp-88f, 0x1.7cc01p-50f, 0x1.546df8p-80f,
     0x1.9c4c1p-115f, 0.0f, 0x1.77a978p-68f, 0x1.c5163p-80f, 0x1.812dfp-80f, 0.0f,
     0x1.0962eap-68f, 0x1.9433b4p-60f, 0x1.e76d58p-125f, 0x1.0228a8p-62f,
     0x1.582966p-88f, 0x1.aad9acp-4f, 0.0f, 0x1.00c5d6p-46f, 0x1.74086ap-70f,
     0x1.953a28p-63f, 0.0f, 0.0f, 0x1.c11462p-118f, 0x1.170f5cp-106f, 0.0f, 0.0f,
     0.0f, 0x1.156bf6p-105f, 0.0f, 0.0f, 0x1.b9dcf2p-85f, 0x1.2d2258p-61f, 0.0f, 0.0f,
     0x1.ec978p-89f, 0.0f, 0.0f, 0.0f, 0x1.dc04ccp-91f, 0.0f, 0.0f, 0x1.9d57fap-81f,
     0.0f, 0.0f, 0x1.94d8bap-66f, 0.0f, 0x1.94ff9ep-25f, 0x1.820932p-85f,
     0x1.4cfbfcp-1f, 0.0f, 0.0f, 0x1.c5126cp-103f, 0.0f, 0x1.560c68p-114f,
     0x1.743224p-54f, 0x1.f35a8p-52f, 0x1.cee0b2p-28f, 0x1.0ddfe6p-48f, 0.0f, 0.0f,
     0.0f, 0x1.acae6cp-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8dd222p-115f, 0x1.3967a6p-95f,
     0.0f, 0.0f, 0.0f, 0x1.f8f27ap-110f, 0x1.afc7fcp-109f, 0x1.4a5afcp-63f, 0.0f,
     0x1.6c06a2p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.893d1cp-91f, 0x1.e08baep-61f,
     0x1.11844cp-29f, 0x1.e836bap-46f, 0.0f, 0x1.411ea4p-84f, 0.0f, 0x1.c07104p-79f,
     0x1.67415cp-124f, 0.0f, 0.0f, 0x1.80ff42p-47f, 0.0f, 0x1.c1671cp-68f,
     0x1.b824d8p-46f, 0.0f, 0.0f, 0x1.20d6c6p-23f, 0x1.41e826p-61f, 0.0f, 0.0f, 0.0f,
     0x1.d858a2p-42f, 0.0f, 0.0f, 0x1.b61522p-38f, 0.0f, 0.0f, 0.0f, 0x1.673ffp-78f,
     0x1.b54742p-46f, 0x1.7a0e6ep-120f, 0x1.b3c5bep-119f, 0.0f, 0.0f, 0x1.bfd22ep-73f,
     0.0f, 0x1.368fa6p-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7d271ep-112f, 0x1.b3cbaap-23f,
     0.0f, 0x1.0a563ap-20f, 0.0f, 0.0f, 0x1.37587ap-65f, 0x1.64ee52p-57f,
     0x1.8c30f4p-88f, 0x1.9ac47cp-7f, 0.0f, 0x1.b45be8p-49f, 0x1.c7454ep-113f,
     0x1.53fdecp-34f, 0x1.48ce7ep-76f, 0.0f, 0x1.dd8e14p-86f, 0x1.a7cbecp-69f, 0.0f,
     0x1.10b56cp-14f, 0x1.5b97a6p-27f, 0x1.f33628p-116f, 0.0f, 0.0f, 0.0f,
     0x1.f80ab6p-18f, 0x1.00149ap-118f, 0x1.4ee6fep-67f, 0.0f, 0.0f, 0x1.c2a1d8p-113f,
     0x1.ea165ep-31f, 0x1.60feaap-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2c687p-99f, 0.0f,
     0x1.2b3106p-70f, 0.0f, 0x1.9a4becp-111f, 0x1.63490ep-58f, 0.0f, 0x1.185c5cp-47f,
     0.0f, 0.0f, 0x1.7af014p-120f, 0.0f, 0x1.6daf54p-27f, 0.0f, 0x1p0f,
     0x1.690f7cp-12f, 0.0f, 0x1.a3fa66p-55f, 0x1.a411cap-24f, 0x1.254e02p-22f,
     0x1.4bfd1p-51f, 0.0f, 0.0f, 0x1.a57d64p-28f, 0x1.f1224p-58f, 0.0f, 0.0f,
     0x1.c9d1e4p-43f, 0.0f, 0x1.efe0ecp-79f, 0x1.341d26p-105f, 0.0f, 0x1.487308p-125f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.27f31p-39f, 0x1.8dd0b4p-115f, 0.0f, 0x1.1b3702p-33f,
     0x1.350cf4p-60f, 0x1.ea1e7ep-71f, 0.0f, 0.0f, 0.0f, 0x1.059d44p-96f, 0.0f, 0.0f,
     0x1.91061ep-92f, 0x1.55efap-93f, 0.0f, 0.0f, 0x1.3bce6ap-124f, 0.0f, 0.0f, 0.0f,
     0x1.16e2f6p-15f, 0.0f, 0.0f, 0x1.76cfd8p-48f, 0.0f, 0x1.0e142cp-12f,
     0x1.5957fap-58f, 0.0f, 0x1.00c22ep-80f, 0x1.03de6p-68f, 0.0f, 0.0f, 0.0f,
     0x1.963326p-10f, 0x1.30ce44p-118f, 0.0f, 0x1.dde726p-6f, 0.0f, 0.0f, 0.0f,
     0x1.cca47ep-112f, 0x1.e8d542p-108f, 0x1.f6bd0ep-78f, 0x1.afaccp-36f, 0.0f,
     0x1.327f9cp-49f, 0x1.65f272p-84f, 0.0f, 0.0f, 0.0f, 0x1.4825fap-115f,
     0x1.51a866p-28f, 0x1.87c686p-6f, 0x1.d1e876p-124f, 0.0f, 0x1.0ed06p-119f, 0.0f,
     0x1.8ade64p-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bd0d7cp-31f, 0.0f, 0.0f,
     0x1.da6036p-112f, 0x1.06a8b2p-45f, 0.0f, 0.0f, 0.0f, 0x1.cb8d54p-91f,
     0x1.051242p-54f, 0.0f, 0x1.e0aab2p-89f, 0.0f, 0x1.42fe4ap-107f, 0.0f, 0.0f,
     0x1.1fb646p-124f, 0x1.ab06a2p-73f, 0.0f, 0.0f, 0.0f, 0x1.f4671ep-15f,
     0x1.169d9p-83f, 0.0f, 0x1.972132p-85f, 0.0f, 0.0f, 0.0f, 0x1.3effcp-81f, 0.0f,
     0x1.cb952ap-19f, 0x1.690f94p-7f, 0.0f, 0x1.e65f24p-36f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.1002d6p-120f, 0.0f, 0x1.b9348cp-17f, 0x1.9b643p-65f, 0x1.768da6p-40f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.465366p-119f, 0.0f, 0x1.1143dp-30f, 0.0f, 0.0f,
     0x1.bdaf5ap-68f, 0x1.efdfe8p-50f, 0.0f, 0.0f, 0x1.09f028p-24f, 0.0f, 0.0f,
     0x1.c8feecp-69f, 0.0f, 0.0f, 0.0f, 0x1.4c0a46p-2f, 0.0f, 0.0f, 0x1.546dacp-99f,
     0.0f, 0.0f, 0x1.802e9p-101f, 0x1.c32566p-80f, 0.0f, 0.0f, 0x1.f643p-12f,
     0x1.ccb584p-55f, 0x1.adf7ecp-77f, 0x1.a13876p-1f, 0.0f, 0x1.cf83d2p-76f, 0.0f,
     0x1.3240dep-102f, 0x1.ef0feap-41f, 0x1.e45788p-65f, 0x1.1a6f24p-95f, 0.0f
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
            tmp1 = Sleef_finz_ceilf1_purecfma(tmp0);
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
    printf("Sleef_finz_ceilf1_purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_ceilf1_purecfma bench acc %a\n", global_bench_acc);
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
