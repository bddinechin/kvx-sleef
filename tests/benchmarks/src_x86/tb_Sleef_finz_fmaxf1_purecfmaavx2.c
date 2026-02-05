/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_fmaxf1_purecfma.c --function \
 *     Sleef_finz_fmaxf1_purecfma --arity 2 --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary32,binary32 --bench \
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
     0.0f, 0x1.10cd1cp-67f, 0.0f, 0.0f, 0x1.40972ap-76f, 0x1.851196p-117f,
     0x1.8e1c0ap-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8ff0b4p-94f, 0.0f, 0x1.c46b64p-121f,
     0.0f, 0.0f, 0x1.e34ba2p-35f, 0.0f, 0x1.a5ebb2p-116f, 0.0f, 0.0f, 0.0f,
     0x1.87253ap-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.339184p-39f, 0x1.ab56e6p-81f,
     0x1.3f3eeap-99f, 0.0f, 0.0f, 0x1.53e132p-49f, 0.0f, 0.0f, 0x1.9d3686p-65f,
     0x1.51285ep-76f, 0.0f, 0.0f, 0.0f, 0x1.e0a21p-125f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.41ac8cp-119f, 0.0f, 0x1.b92592p-94f, 0.0f, 0x1.12ee1ap-13f, 0x1.85a3ap-25f,
     0x1.7973fp-97f, 0.0f, 0x1.e985dcp-39f, 0.0f, 0.0f, 0x1.b32932p-54f,
     0x1.57fea6p-77f, 0x1.456f98p-89f, 0.0f, 0.0f, 0x1.02b356p-54f, 0x1.70456cp-126f,
     0.0f, 0x1.d660aep-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.df7fd6p-123f, 0.0f,
     0.0f, 0.0f, 0x1.f92746p-63f, 0.0f, 0.0f, 0.0f, 0x1.273d9cp-64f, 0.0f,
     0x1.35fa9cp-122f, 0x1.f095eap-25f, 0x1.63d92ep-111f, 0.0f, 0x1.0988aep-70f,
     0x1.7c5b7ap-67f, 0x1.1d7442p-65f, 0.0f, 0x1.c29026p-49f, 0.0f, 0.0f,
     0x1.25a01ap-121f, 0.0f, 0.0f, 0.0f, 0x1.10fd56p-8f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.497952p-45f, 0x1.02fef2p-10f, 0.0f, 0x1.7c9dbap-80f, 0.0f, 0.0f, 0.0f,
     0x1.f247c6p-51f, 0x1.f0d3a2p-21f, 0.0f, 0x1.af8524p-82f, 0.0f, 0.0f,
     0x1.4eef16p-40f, 0.0f, 0.0f, 0x1.b2563ep-76f, 0.0f, 0.0f, 0.0f, 0x1.43d188p-17f,
     0x1.4d56d8p-44f, 0x1.3fe18ep-111f, 0.0f, 0x1.86c472p-55f, 0x1.70ef02p-4f,
     0x1.6eb7d8p-115f, 0x1.8c50bep-117f, 0x1.6991fcp-19f, 0x1.1fdc3ep-10f, 0.0f,
     0x1.fcf74ap-4f, 0x1.bbc7a8p-25f, 0x1.990ec4p-94f, 0.0f, 0.0f, 0x1.a1b724p-38f,
     0.0f, 0x1.7b8666p-105f, 0.0f, 0x1.02531cp-85f, 0x1.efad04p-59f, 0x1.b4b82cp-75f,
     0.0f, 0x1.e90ad6p-113f, 0x1.c66bfap-107f, 0.0f, 0x1.50d86cp-8f, 0x1.27a20cp-7f,
     0x1.f3bd3p-1f, 0x1.680e0cp-106f, 0.0f, 0x1.dd6e8p-87f, 0.0f, 0.0f, 0.0f,
     0x1.bbe95ep-67f, 0x1.72d8bap-78f, 0.0f, 0.0f, 0x1.0a39ep-106f, 0x1.3459f6p-122f,
     0.0f, 0x1.a81f38p-63f, 0x1.53774cp-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e73b4ep-5f,
     0x1.dd7a3ep-73f, 0x1.184576p-11f, 0.0f, 0.0f, 0x1.ecbe7ap-5f, 0x1.a7d74cp-80f,
     0x1.c8eb62p-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1b664ap-100f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.3e124ap-60f, 0x1.9a4edp-42f, 0x1.c8b398p-11f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.8b90b4p-78f, 0x1.ae4d76p-44f, 0x1.b54896p-99f, 0x1.6d7684p-42f, 0.0f,
     0.0f, 0x1.574194p-92f, 0.0f, 0x1.374a5ap-91f, 0.0f, 0.0f, 0x1.d65834p-110f,
     0x1.231baep-75f, 0x1.ab5034p-101f, 0x1.928f2p-42f, 0.0f, 0.0f, 0.0f,
     0x1.be345p-20f, 0.0f, 0.0f, 0x1.e74fbep-27f, 0.0f, 0.0f, 0x1.03775ep-35f, 0.0f,
     0x1.ff2acp-7f, 0.0f, 0x1.fc2d9ep-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.48ccbap-121f,
     0x1.2cf35cp-26f, 0x1.451ep-27f, 0.0f, 0.0f, 0.0f, 0x1.0afc5p-106f,
     0x1.382c54p-37f, 0.0f, 0x1.8abb1ep-125f, 0x1.5877ep-7f, 0.0f, 0.0f,
     0x1.f7717p-74f, 0x1.0945eap-47f, 0x1.1f351ap-37f, 0.0f, 0x1.88369ep-95f,
     0x1.b70cf4p-17f, 0x1.1efaeep-9f, 0.0f, 0.0f, 0x1.21b8f8p-31f, 0x1.d488c2p-43f,
     0.0f, 0x1.4b668cp-87f, 0x1.c2cb4ap-55f, 0x1.0f9a5ap-46f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2fa552p-81f, 0.0f, 0x1.fb72cap-70f, 0.0f, 0x1.1d7fc6p-4f, 0.0f, 0.0f,
     0x1.17a87p-107f, 0.0f, 0.0f, 0x1.f71984p-93f, 0x1.c10584p-117f, 0.0f,
     0x1.469464p-92f, 0.0f, 0.0f, 0.0f, 0x1.981db2p-63f, 0x1.d9ad46p-110f,
     0x1.ef5ec8p-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b1994p-10f, 0.0f,
     0x1.728cfcp-91f, 0x1.7a6fd4p-14f, 0x1.f5241cp-82f, 0.0f, 0x1.b4140ep-97f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7018bap-32f, 0.0f, 0x1.1980cap-69f, 0x1.d8aff2p-70f,
     0.0f, 0x1.a0af78p-58f, 0.0f, 0.0f, 0x1.e73eep-73f, 0.0f, 0.0f, 0x1.2eabbep-111f,
     0.0f, 0.0f, 0.0f, 0x1.d153e4p-17f, 0x1.6d5b24p-65f, 0x1.88a4f4p-45f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b8476ep-102f, 0x1.3a220cp-47f, 0x1.58db7p-2f,
     0x1.e7e6bp-75f, 0.0f, 0.0f, 0x1.92d7a4p-46f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f4065ep-81f, 0x1.bc7b5p-69f, 0x1.a2941p-91f, 0x1.1b4bbcp-89f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.5d36e6p-72f, 0.0f, 0x1.0e78c8p-20f, 0.0f, 0x1.35b90ep-21f, 0.0f,
     0x1.e655c6p-110f, 0x1.517082p-7f, 0x1.d9767ap-116f, 0x1.33b626p-122f,
     0x1.192a7ap-80f, 0x1.1ab73ep-53f, 0.0f, 0.0f, 0x1.97e97ep-73f, 0.0f,
     0x1.c1d63cp-70f, 0x1.cd12c6p-68f, 0x1.13db92p-72f, 0.0f, 0.0f, 0x1.91c05p-61f,
     0.0f, 0x1.92594p-35f, 0.0f, 0x1.9a96d6p-110f, 0x1.248db4p-112f, 0x1.893b88p-103f,
     0.0f, 0x1.8b075ap-20f, 0.0f, 0x1.87a9dp-10f, 0.0f, 0x1.50b704p-110f, 0.0f,
     0x1.c18534p-46f, 0x1p0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.032514p-73f,
     0x1.00081cp-43f, 0.0f, 0.0f, 0x1.4f1c36p-97f, 0.0f, 0x1.873e9ap-60f,
     0x1.ea631p-5f, 0.0f, 0x1.2198e8p-95f, 0.0f, 0x1.764162p-110f, 0x1.adbc54p-124f,
     0.0f, 0x1.247bb8p-65f, 0x1.c40d64p-94f, 0x1.557ca4p-64f, 0x1.a03fbap-95f,
     0x1.66cab6p-62f, 0.0f, 0.0f, 0x1.9f0684p-58f, 0.0f, 0x1.10fcf2p-106f,
     0x1.55fc86p-87f, 0x1.43d69cp-61f, 0x1.83bd8ap-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5b527p-4f, 0.0f, 0.0f, 0x1.88273cp-67f, 0.0f, 0x1p0f, 0.0f, 0x1.0c9674p-44f,
     0.0f, 0x1.d6c5a6p-1f, 0.0f, 0.0f, 0x1.f84624p-22f, 0.0f, 0x1.e6a0acp-87f,
     0x1.91334ap-41f, 0.0f, 0.0f, 0x1.6ecd5ep-108f, 0x1.58fe8ap-59f, 0.0f,
     0x1.d00f6ep-105f, 0.0f, 0.0f, 0x1.645ap-68f, 0x1.587d0cp-72f, 0x1.34d2fap-58f,
     0x1.bf605ap-122f, 0x1.dc7d5cp-17f, 0x1.69f998p-56f, 0x1.7842fap-35f,
     0x1.4470dap-85f, 0.0f, 0.0f, 0.0f, 0x1.e160ap-79f, 0x1.5fc1b2p-64f,
     0x1.55b9fcp-106f, 0x1.d1db94p-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c9db1p-119f, 0x1.6e8fb6p-3f, 0x1.42c628p-27f, 0x1.c564f2p-54f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.828132p-100f, 0x1.b2325p-114f, 0.0f, 0x1.b5a774p-55f,
     0x1.3eb358p-68f, 0.0f, 0x1.eb507ap-41f, 0x1.7c11fap-74f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d0dc16p-39f, 0.0f, 0.0f, 0x1.1bc7a6p-74f, 0x1.16aed2p-64f,
     0x1.b7de82p-110f, 0.0f, 0x1.1026ecp-47f, 0.0f, 0x1.2c7ef4p-5f, 0x1.0b0292p-29f,
     0x1.230836p-126f, 0.0f, 0x1.5a41cep-57f, 0.0f, 0x1.7eb084p-102f, 0.0f,
     0x1.6c2c74p-114f, 0x1.abf474p-50f, 0.0f, 0.0f, 0.0f, 0x1.1eeb92p-25f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c66ecep-100f, 0x1.43c02ep-84f, 0.0f, 0.0f, 0.0f,
     0x1.026cb4p-64f, 0x1.846e0ap-2f, 0x1.1dca52p-25f, 0x1.0a5642p-96f,
     0x1.e9a842p-16f, 0.0f, 0x1.8d4346p-9f, 0.0f, 0.0f, 0x1.84d6d8p-9f, 0.0f, 0.0f,
     0x1.7d07e4p-66f, 0.0f, 0.0f, 0.0f, 0x1.82cfecp-101f, 0.0f, 0.0f, 0.0f,
     0x1.379a46p-43f, 0x1.1203b8p-78f, 0.0f, 0x1.cd5ec8p-106f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.194abep-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c20f72p-50f, 0x1.706d18p-42f, 0x1.d07d44p-8f, 0x1.33bc8ep-9f,
     0x1.cd3ebcp-53f, 0x1.6e4718p-113f, 0.0f, 0x1.aeb414p-112f, 0.0f, 0x1.fa5a64p-18f,
     0x1.bc66ep-73f, 0x1.528a5ap-91f, 0.0f, 0x1.ace6bp-53f, 0.0f, 0x1.a8904p-106f,
     0x1.0aef04p-40f, 0.0f, 0x1.73fab8p-115f, 0.0f, 0x1.11bb14p-47f, 0.0f,
     0x1.ee1cep-20f, 0x1.2460b8p-33f, 0x1.cecf26p-75f, 0x1.572aaep-86f,
     0x1.7b2d38p-1f, 0x1.e070d2p-59f, 0x1.94df6cp-33f, 0x1.f3c51ap-57f,
     0x1.53d77ep-70f, 0.0f, 0.0f, 0x1.7c765cp-35f, 0.0f, 0.0f, 0x1.f40c52p-26f, 0.0f,
     0x1.d87f98p-62f, 0x1.088762p-54f, 0.0f, 0.0f, 0.0f, 0x1.82f05ep-58f, 0.0f,
     0x1.f72c7ep-79f, 0.0f, 0x1.7c71dcp-5f, 0.0f, 0x1.9ad30ep-8f, 0.0f, 0.0f, 0.0f,
     0x1.fc32acp-74f, 0x1.4bfed2p-20f, 0.0f, 0.0f, 0x1.bd8eb6p-3f, 0.0f, 0.0f,
     0x1.ea27ecp-99f, 0x1.0acdf6p-90f, 0x1.8da796p-75f, 0.0f, 0x1.bf5b9cp-119f,
     0x1.6f1a3ep-7f, 0.0f, 0.0f, 0x1.d60d8ap-87f, 0x1.6f0882p-63f, 0x1.bdbe64p-17f,
     0.0f, 0.0f, 0x1.510feep-71f, 0.0f, 0x1.aedbcep-97f, 0x1.5c914p-73f, 0.0f, 0.0f,
     0x1.81d6a4p-103f, 0x1.33ae5ap-60f, 0x1.5dd638p-13f, 0.0f, 0x1.31cc4cp-61f,
     0x1.79961ap-28f, 0x1.b64e8ap-22f, 0.0f, 0.0f, 0x1.5e7686p-15f, 0x1.0a42c2p-32f,
     0.0f, 0.0f, 0.0f, 0x1.2338aep-82f, 0x1.6e9252p-93f, 0.0f, 0x1.1a8734p-112f,
     0x1.bbcdc8p-8f, 0.0f, 0x1.a96856p-57f, 0.0f, 0x1.f4806cp-104f, 0x1.876986p-117f,
     0x1.45b6c8p-70f, 0.0f, 0.0f, 0x1.ea36fp-91f, 0x1.3eb9e8p-52f, 0x1.f15b54p-49f,
     0x1.942f22p-7f, 0x1.32ae3ep-57f, 0x1.680f0ap-50f, 0x1.feef56p-125f, 0x1p0f,
     0x1.cfe25cp-86f, 0.0f, 0.0f, 0x1.204f26p-85f, 0.0f, 0x1.6bc052p-24f, 0.0f,
     0x1.d1bda8p-54f, 0x1.faaf74p-13f, 0x1.5f2756p-1f, 0x1.bdcb92p-115f,
     0x1.6ab2b6p-70f, 0.0f, 0x1.0d4d24p-72f, 0.0f, 0x1.2241bap-28f, 0.0f, 0.0f, 0.0f,
     0x1.cab512p-36f, 0.0f, 0.0f, 0x1.78df3cp-122f, 0x1.7b2c1cp-79f, 0.0f, 0.0f,
     0x1.7dd18ep-56f, 0.0f, 0.0f, 0x1.5c47aap-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.00ab2ap-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.04ae5p-113f, 0x1.644f04p-100f, 0.0f,
     0.0f, 0.0f, 0x1.3368aap-28f, 0x1.b9f42ep-64f, 0x1.9e77aep-70f, 0x1.f819b2p-6f,
     0.0f, 0.0f, 0.0f, 0x1.5cceap-114f, 0x1.fba9e4p-3f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.eb9548p-74f, 0x1.917442p-108f, 0x1.ef6192p-85f, 0.0f, 0.0f, 0.0f,
     0x1.a1e812p-101f, 0x1.42eb4cp-103f, 0.0f, 0.0f, 0x1.d407b8p-51f,
     0x1.01e69ep-114f, 0.0f, 0.0f, 0x1.7cdbfep-7f, 0.0f, 0x1.9ffdfcp-96f,
     0x1.3af3bep-78f, 0.0f, 0x1.39bcd2p-88f, 0.0f, 0x1.1a1c3p-118f, 0x1.bd6eccp-20f,
     0.0f, 0x1.1912b4p-15f, 0x1.9f5748p-21f, 0.0f, 0x1.afdcbcp-41f, 0x1.d1a48cp-122f,
     0x1.90e168p-32f, 0.0f, 0x1.e38e68p-24f, 0.0f, 0.0f, 0x1.f40752p-90f, 0.0f,
     0x1.5d27f8p-12f, 0x1.f116b6p-4f, 0.0f, 0x1.3736a4p-23f, 0.0f, 0x1.49e8fp-69f,
     0.0f, 0.0f, 0x1.e71e8ep-97f, 0x1.fd97f8p-106f, 0x1.30fc92p-59f, 0.0f, 0.0f,
     0x1.891cd6p-1f, 0x1.0edaeap-6f, 0.0f, 0x1.d7e31ap-112f, 0x1.0527eep-45f,
     0x1.c4b152p-94f, 0x1.966cd2p-34f, 0x1.786cf2p-1f, 0x1.9fecf8p-26f,
     0x1.1fa2a6p-58f, 0x1.88071p-109f, 0.0f, 0x1.c2af64p-111f, 0.0f, 0.0f, 0.0f,
     0x1.6f3d88p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7b37c6p-79f, 0.0f, 0.0f,
     0x1.29bb34p-118f, 0.0f, 0.0f, 0x1.e8c22p-25f, 0x1.d65ed4p-90f, 0x1.8134e2p-23f,
     0.0f, 0.0f, 0.0f, 0x1.ceafep-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b0dc4cp-83f,
     0x1.c85148p-22f, 0x1.ec82acp-124f, 0.0f, 0x1.49007ep-73f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1c6bd6p-53f, 0.0f, 0.0f, 0.0f, 0x1.96533ap-110f, 0.0f, 0.0f,
     0.0f, 0x1.6f53bp-18f, 0.0f, 0.0f, 0.0f, 0x1.57d62p-65f, 0.0f, 0x1.5ef53p-51f,
     0x1.13532cp-84f, 0.0f, 0x1.f349f2p-116f, 0.0f, 0.0f, 0.0f, 0x1.467c0ep-11f, 0.0f,
     0.0f, 0x1.3dd3b8p-55f, 0x1.abbc16p-38f, 0.0f, 0x1.871dbap-44f, 0x1.f4f86cp-1f,
     0.0f, 0x1.d21742p-15f, 0x1.787648p-90f, 0.0f, 0x1.aab0b6p-47f, 0x1.17469p-123f,
     0x1.7797b6p-114f, 0x1.e59458p-93f, 0.0f, 0.0f, 0x1.6b08cep-121f, 0x1.d92ef6p-15f,
     0.0f, 0.0f, 0x1.b6d234p-117f, 0.0f, 0.0f, 0x1.d55634p-95f, 0x1.f5786ep-61f, 0.0f,
     0x1.0e2bfp-121f, 0x1.cd58ap-72f, 0x1.c7a3bap-71f, 0.0f, 0.0f, 0.0f,
     0x1.db10eep-76f, 0.0f, 0x1.c9fca6p-119f, 0x1.f284e8p-77f, 0.0f, 0.0f, 0.0f,
     0x1.a2ef74p-7f, 0.0f, 0.0f, 0x1.498d76p-94f, 0x1.d25582p-84f, 0.0f,
     0x1.b5789ep-74f, 0.0f, 0x1.c4a376p-100f, 0x1.bfa1e4p-116f, 0x1.16d6cep-101f,
     0x1.ee9d7ap-33f, 0x1.e45308p-113f, 0x1.288dbap-72f, 0x1.7f0f84p-17f, 0.0f, 0.0f,
     0.0f, 0x1.b8e5c6p-99f, 0.0f, 0x1.654972p-116f, 0x1.0092f4p-20f, 0.0f, 0.0f, 0.0f,
     0x1.e88c2ap-43f, 0x1.208652p-43f, 0.0f, 0x1.6561dp-81f, 0.0f, 0x1.d455fcp-105f,
     0x1.f57f9ep-22f, 0.0f, 0x1.a97a94p-20f, 0x1.d7ef4ep-55f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.39bb52p-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.621e94p-79f, 0x1.287bf4p-75f, 0.0f,
     0.0f, 0x1.a20304p-123f, 0.0f, 0x1.7fb7fap-37f, 0.0f, 0x1.8abe5ep-99f,
     0x1.99568ep-16f, 0.0f, 0.0f, 0x1.a199dcp-64f, 0x1.51491p-123f, 0x1.2f5b9ap-71f,
     0.0f, 0x1.8e7552p-125f, 0x1.470c8cp-36f, 0x1.004deap-58f, 0x1.3eb428p-6f,
     0x1.685386p-13f, 0x1.affaf4p-65f, 0.0f, 0x1.c98c8ep-31f, 0.0f, 0.0f,
     0x1.941ff4p-50f, 0x1.92f2fp-56f, 0.0f, 0x1.fcd262p-58f, 0.0f, 0.0f,
     0x1.f177a4p-67f, 0.0f, 0x1.3d6108p-19f, 0x1.ed43c4p-113f, 0.0f, 0.0f,
     0x1.f1f0a6p-78f, 0x1.cb7caep-14f, 0.0f, 0.0f, 0x1.ee639ap-10f, 0.0f,
     0x1.d78072p-84f, 0x1.7b4ea2p-30f, 0x1.0f294p-95f, 0.0f, 0x1.99308ep-7f,
     0x1.ae086p-115f, 0.0f, 0x1.9d1218p-87f, 0.0f, 0.0f, 0.0f, 0x1.a9f37ap-62f,
     0x1.c09dd6p-99f, 0x1.9f5d44p-115f, 0.0f, 0.0f, 0x1.72e6dep-104f, 0x1.383486p-49f,
     0x1.c01702p-25f, 0x1.23c2a8p-20f, 0x1.e570a6p-118f, 0.0f, 0.0f, 0x1.ade712p-57f
};
static const float external_bench_wrapper_input_table_arg1[1001]  = {
     0x1.ea74bp-24f, 0x1.994dd8p-100f, 0x1.80cbep-57f, 0.0f, 0.0f, 0.0f,
     0x1.c0b8dap-85f, 0.0f, 0.0f, 0x1.0eb80ap-14f, 0.0f, 0.0f, 0.0f, 0x1.20eb1cp-47f,
     0x1.63cd9ap-37f, 0x1.13c158p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.910466p-100f,
     0x1.66a3dp-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e4301cp-47f, 0x1.4b66f4p-115f,
     0x1.d7781ap-11f, 0x1.d8138ep-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.32b25ep-119f,
     0x1.5b87dp-8f, 0.0f, 0x1.dae25ep-97f, 0x1.013e1cp-99f, 0x1.881e8cp-61f, 0.0f,
     0x1.3568p-66f, 0x1.e727bp-7f, 0x1.f06736p-72f, 0.0f, 0x1.c17404p-59f,
     0x1.80784ap-41f, 0.0f, 0.0f, 0x1.34e582p-15f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6cd71ep-64f, 0x1.4de11p-41f, 0x1p0f, 0x1.2b7d08p-121f, 0x1.4dceccp-123f,
     0.0f, 0x1.f25f88p-33f, 0.0f, 0x1.01ce56p-42f, 0x1.c6b398p-71f, 0x1.5b5b8p-12f,
     0.0f, 0x1.138a44p-55f, 0.0f, 0x1.27813ep-75f, 0x1.82fec2p-42f, 0.0f,
     0x1.09865ep-15f, 0x1.2fdf72p-21f, 0.0f, 0.0f, 0x1.849742p-19f, 0x1.59be2ep-76f,
     0x1.14e994p-78f, 0.0f, 0x1.ec7e2ap-15f, 0.0f, 0.0f, 0.0f, 0x1.e33c7cp-95f, 0.0f,
     0x1.41ea02p-38f, 0x1.1b6cc8p-110f, 0x1.84ef2ep-83f, 0.0f, 0.0f, 0x1.2786ep-23f,
     0.0f, 0.0f, 0x1.a79272p-50f, 0.0f, 0x1.66b90cp-20f, 0.0f, 0.0f, 0x1.1848a4p-104f,
     0x1.e55444p-78f, 0x1.efafbap-62f, 0x1.77b626p-2f, 0.0f, 0x1.eb35aep-38f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.3b04a6p-56f, 0.0f, 0.0f, 0x1.7f374p-44f, 0.0f, 0.0f, 0.0f,
     0x1.c6e03ap-121f, 0x1.a48f9cp-120f, 0x1.0e381cp-122f, 0x1.ef2b9cp-76f,
     0x1.e462c8p-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.35d726p-30f, 0.0f, 0.0f, 0.0f,
     0x1.43e03cp-13f, 0x1.24dc78p-58f, 0.0f, 0.0f, 0x1.020c86p-100f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b736e4p-125f, 0x1.fd3d4p-53f, 0x1.eea716p-27f, 0x1.87a506p-111f,
     0x1.05214ap-69f, 0.0f, 0.0f, 0.0f, 0x1.3161cep-48f, 0x1.d3af5ep-4f,
     0x1.8bcc84p-91f, 0x1.8367d2p-37f, 0x1.2dc0c2p-114f, 0x1.b6d1d2p-66f,
     0x1.58542ap-115f, 0.0f, 0x1p0f, 0.0f, 0x1.72b276p-126f, 0.0f, 0.0f, 0.0f,
     0x1.dc96e8p-98f, 0x1.2bde1p-124f, 0x1.5eacacp-25f, 0.0f, 0.0f, 0x1.d3911cp-42f,
     0x1.0aab78p-21f, 0x1.8f7fc2p-81f, 0.0f, 0.0f, 0.0f, 0x1.a22182p-114f,
     0x1.354ffap-124f, 0.0f, 0x1.70f2ep-9f, 0x1.81d542p-64f, 0x1.6eb2e8p-53f, 0.0f,
     0x1.eac5dap-103f, 0x1.ccc62ep-109f, 0.0f, 0.0f, 0.0f, 0x1.273288p-68f, 0.0f,
     0.0f, 0.0f, 0x1.d4bb4ep-45f, 0x1.fcfb48p-13f, 0x1.e485bp-20f, 0.0f,
     0x1.737278p-70f, 0x1.a70c3cp-43f, 0x1.a424aap-79f, 0.0f, 0x1.e8469ep-92f, 0.0f,
     0x1.420402p-31f, 0.0f, 0x1.d3abe6p-9f, 0.0f, 0x1.70a48cp-68f, 0.0f,
     0x1.8b4d7ap-35f, 0x1.3e38d4p-31f, 0.0f, 0x1.94b04p-84f, 0.0f, 0.0f, 0.0f,
     0x1.a2fd74p-70f, 0.0f, 0x1.f015fep-105f, 0x1.56480cp-30f, 0.0f, 0x1.0c38ecp-104f,
     0.0f, 0x1.f52e22p-42f, 0x1.674a66p-29f, 0.0f, 0x1.84e4d6p-88f, 0.0f,
     0x1.b72b46p-4f, 0.0f, 0x1.734c1cp-46f, 0.0f, 0x1.e5f66ap-9f, 0.0f, 0.0f,
     0x1.97b906p-100f, 0.0f, 0.0f, 0x1.d450fp-36f, 0x1.f817bap-46f, 0.0f, 0.0f, 0.0f,
     0x1.8697e8p-7f, 0x1.959136p-69f, 0x1.8f1c96p-76f, 0x1.5191a6p-24f, 0.0f, 0.0f,
     0.0f, 0x1.b534ap-87f, 0x1.457988p-49f, 0x1.da28c2p-45f, 0x1.c6043p-47f, 0.0f,
     0x1.18d5d6p-110f, 0.0f, 0x1.cc44dep-34f, 0x1.facf94p-61f, 0x1.cb4f72p-18f, 0.0f,
     0x1.3cd5b8p-100f, 0.0f, 0.0f, 0x1.22c332p-24f, 0.0f, 0.0f, 0x1.916d74p-22f,
     0x1.3e51a8p-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5eae36p-80f, 0x1.91db8ap-37f, 0.0f,
     0x1.a0b6eap-102f, 0x1.b20664p-40f, 0.0f, 0x1.854b3ap-92f, 0x1.cbdebap-117f,
     0x1.c864b4p-91f, 0.0f, 0x1.b31ab8p-96f, 0.0f, 0x1.2de53p-42f, 0.0f, 0.0f, 0.0f,
     0x1.30caep-49f, 0x1.f3c08ap-49f, 0x1.1e7632p-29f, 0.0f, 0.0f, 0x1.7c7a64p-8f,
     0x1.150232p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.303122p-120f, 0x1.0c5cfcp-92f,
     0x1.c909eap-81f, 0x1.12e7ep-119f, 0x1.c40f6ep-16f, 0.0f, 0x1.629f38p-102f,
     0x1.32f4f4p-85f, 0x1.9cc78ep-14f, 0x1.010efep-74f, 0x1.fc8d3ap-43f,
     0x1.c48234p-22f, 0.0f, 0.0f, 0x1.76c2fcp-3f, 0x1.2ba6bap-94f, 0.0f, 0.0f,
     0x1.a1c8d4p-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dcf118p-29f, 0x1.8dbadap-25f,
     0x1.72ca78p-13f, 0x1.cffea4p-36f, 0x1.94e174p-36f, 0x1.885e3ap-12f, 0.0f,
     0x1.1390c6p-3f, 0.0f, 0x1.8d176ap-76f, 0.0f, 0x1.c23752p-1f, 0.0f, 0.0f,
     0x1.0db4e6p-78f, 0.0f, 0x1.b2f1eep-12f, 0x1.145beap-53f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.d1f2ecp-3f, 0x1.cbc7bap-43f, 0x1.c468ccp-45f, 0.0f, 0x1.41ea18p-70f,
     0x1.ae921ap-5f, 0x1.8a43ccp-38f, 0x1.59978ep-41f, 0.0f, 0.0f, 0x1.00b8fap-20f,
     0x1.1fd354p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.26be3cp-108f, 0x1.3fde4p-74f,
     0x1.95b27ep-111f, 0.0f, 0.0f, 0x1.dd16dp-106f, 0x1.13c002p-32f, 0x1.9a0acp-111f,
     0.0f, 0x1.174498p-65f, 0x1.d2d094p-23f, 0x1.767a06p-30f, 0.0f, 0x1.249bfap-97f,
     0.0f, 0.0f, 0x1.091d82p-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f81cd8p-96f,
     0.0f, 0x1.960a52p-91f, 0x1.b308ep-95f, 0x1.ea7756p-69f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e7024ap-76f, 0.0f, 0.0f, 0x1.953a3p-111f, 0x1.3912aap-9f, 0.0f,
     0x1.63ea1ap-52f, 0x1p0f, 0x1.a8dc2ep-18f, 0x1.ba467ep-86f, 0x1.c53edap-70f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9cb65p-37f, 0.0f, 0.0f, 0x1.92241ap-42f, 0.0f,
     0x1.42c342p-57f, 0x1.88b62ap-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9f821ap-48f,
     0.0f, 0x1.c0cfb4p-43f, 0.0f, 0.0f, 0x1.b49f66p-118f, 0.0f, 0x1.bf52a8p-21f, 0.0f,
     0x1.974074p-37f, 0.0f, 0x1.248788p-15f, 0x1.10ccbp-117f, 0x1.5c23fp-53f,
     0x1.373ef2p-16f, 0.0f, 0x1.eb57f2p-92f, 0.0f, 0.0f, 0.0f, 0x1.9b4392p-107f, 0.0f,
     0x1.074b84p-8f, 0.0f, 0.0f, 0x1.6dd692p-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cab0c6p-125f, 0x1.85cb9p-56f, 0.0f, 0x1.da6a56p-77f, 0.0f, 0.0f,
     0x1.972944p-39f, 0x1.410298p-89f, 0x1.620556p-114f, 0x1.87954ap-111f,
     0x1.bd790ap-16f, 0.0f, 0.0f, 0.0f, 0x1.b4ebe6p-52f, 0x1.acbab2p-99f,
     0x1.89d3e4p-70f, 0.0f, 0x1.06843ap-4f, 0.0f, 0.0f, 0x1.c513c2p-115f, 0.0f, 0.0f,
     0x1.728166p-101f, 0.0f, 0x1.d4612cp-20f, 0x1.e353a4p-49f, 0.0f, 0.0f,
     0x1.4fa222p-13f, 0.0f, 0.0f, 0x1.dfceb6p-58f, 0x1.68f7b6p-63f, 0.0f, 0.0f,
     0x1.4e504ep-4f, 0.0f, 0x1.4cd69ep-62f, 0.0f, 0.0f, 0x1.2c8b6cp-39f,
     0x1.a1465cp-35f, 0x1.24320ap-50f, 0.0f, 0.0f, 0x1.2e45ap-4f, 0x1.f653c2p-115f,
     0x1.7cff5cp-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9a33acp-111f, 0x1.2234fep-12f, 0.0f,
     0.0f, 0.0f, 0x1.052838p-15f, 0.0f, 0.0f, 0x1.eb2e42p-109f, 0.0f, 0x1.4fd40cp-45f,
     0.0f, 0.0f, 0x1.2bdf38p-20f, 0x1.db6f98p-19f, 0x1.ccc5eep-84f, 0x1.57edp-117f,
     0.0f, 0x1.932ccap-56f, 0.0f, 0.0f, 0x1.9350f4p-20f, 0x1.324fc2p-37f, 0.0f,
     0x1.7b1faep-6f, 0x1.c5e79p-31f, 0x1.20ed8ap-50f, 0.0f, 0x1.a1fcp-70f, 0.0f,
     0x1.c3102ap-30f, 0.0f, 0x1.3d40bcp-86f, 0x1.a4c95ap-62f, 0x1.f27b0ap-113f,
     0x1.cbf66cp-69f, 0x1.5594c6p-106f, 0.0f, 0.0f, 0.0f, 0x1.37530ep-121f,
     0x1.e89eacp-23f, 0.0f, 0x1.bfe424p-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.410a2ep-11f,
     0x1.3f33dcp-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cad2dep-62f, 0x1.8df4a4p-85f,
     0x1.460a7p-34f, 0.0f, 0x1.603ea2p-100f, 0.0f, 0x1.314144p-24f, 0.0f, 0.0f,
     0x1.f8331cp-45f, 0.0f, 0x1.286d3cp-16f, 0x1.1df7c4p-77f, 0.0f, 0x1.157488p-64f,
     0.0f, 0x1.0237cep-8f, 0.0f, 0x1.11b312p-74f, 0x1.febc64p-50f, 0.0f, 0.0f,
     0x1.2caf32p-26f, 0x1.b13a22p-94f, 0x1.0f6a5ep-19f, 0x1.bafc4cp-97f,
     0x1.ebc26cp-19f, 0x1.8b91aep-45f, 0.0f, 0x1.1ec4c2p-114f, 0.0f, 0x1.0a2588p-25f,
     0.0f, 0.0f, 0x1.252472p-111f, 0x1.ed46a6p-31f, 0x1.ec00b4p-106f, 0.0f,
     0x1.743064p-125f, 0.0f, 0.0f, 0.0f, 0x1.fb99b4p-25f, 0.0f, 0.0f,
     0x1.4dda44p-120f, 0.0f, 0x1.5e2162p-17f, 0.0f, 0.0f, 0x1.00217cp-40f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.9350fap-50f, 0x1.40b06ep-76f, 0x1.de7c9ep-82f, 0x1.9bce38p-104f,
     0.0f, 0x1.eaa2ep-55f, 0.0f, 0x1.ff5f82p-60f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.08d75p-24f, 0.0f, 0.0f, 0x1.d7d892p-53f, 0.0f, 0.0f, 0.0f, 0x1.a66bf4p-77f,
     0.0f, 0.0f, 0.0f, 0x1.d08ddep-62f, 0.0f, 0.0f, 0x1.6e5376p-81f, 0x1.776788p-48f,
     0x1.ea1ae8p-81f, 0x1.8ee39p-86f, 0.0f, 0.0f, 0x1.5e5828p-53f, 0x1.966ac4p-91f,
     0x1.4b3878p-82f, 0.0f, 0.0f, 0x1.57904p-15f, 0x1p0f, 0.0f, 0x1.fc69f2p-55f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f04d36p-48f, 0.0f, 0x1.cb33dp-92f,
     0x1.32e728p-98f, 0x1.bc6b84p-116f, 0.0f, 0.0f, 0x1.7a449ap-67f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.7b4ceep-14f, 0x1.d2b54ep-62f, 0.0f, 0.0f, 0x1.01d3ap-99f,
     0x1.1f8898p-76f, 0x1.fa26c4p-84f, 0x1.ee2e62p-3f, 0x1p0f, 0.0f, 0.0f,
     0x1.1d83d6p-36f, 0.0f, 0x1.c17acep-41f, 0.0f, 0.0f, 0x1.f70922p-54f,
     0x1.0294bep-122f, 0.0f, 0.0f, 0x1.97614ep-24f, 0.0f, 0x1.15260ep-29f,
     0x1.6c99d4p-9f, 0.0f, 0x1.d6a82cp-82f, 0.0f, 0.0f, 0x1.cc201cp-8f,
     0x1.11424cp-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.861e9cp-1f, 0.0f, 0.0f,
     0x1.cb2a76p-26f, 0x1.4507b8p-46f, 0.0f, 0x1.a5affep-67f, 0x1.a511dp-35f, 0.0f,
     0.0f, 0.0f, 0x1.7a1538p-37f, 0.0f, 0x1.65610ep-30f, 0x1.25aaccp-3f,
     0x1.479b56p-74f, 0.0f, 0.0f, 0.0f, 0x1.fd41a2p-53f, 0.0f, 0x1.eb9dc4p-59f,
     0x1.422edp-9f, 0x1.1f331cp-112f, 0.0f, 0x1.d5b0b4p-50f, 0x1.b22feep-28f,
     0x1.29bfap-27f, 0x1.e395bcp-10f, 0.0f, 0.0f, 0x1.6e6398p-59f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.322626p-15f, 0.0f, 0x1.68882cp-89f, 0.0f, 0.0f, 0x1.861fbep-48f,
     0x1.0f4e72p-67f, 0x1.e019f2p-106f, 0.0f, 0.0f, 0x1.ce99e8p-5f, 0.0f,
     0x1.19784ap-82f, 0x1.e35c32p-27f, 0.0f, 0.0f, 0.0f, 0x1.fc7b9p-50f, 0.0f,
     0x1.6a29cep-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d798c6p-82f, 0x1.a9d6fp-98f,
     0x1.d90194p-66f, 0x1.8aaf02p-120f, 0x1.113c4cp-97f, 0x1.cf1f34p-102f, 0.0f, 0.0f,
     0x1.1cacb6p-58f, 0x1.6eb8b4p-15f, 0.0f, 0.0f, 0x1.8c348p-1f, 0x1.9246dp-98f,
     0x1.e43a62p-104f, 0x1.700d8ep-113f, 0x1.f85606p-108f, 0x1.38ef5p-85f,
     0x1.9d5a94p-79f, 0.0f, 0.0f, 0x1.35c92p-26f, 0.0f, 0.0f, 0.0f, 0x1.76d67p-72f,
     0x1.60bb62p-26f, 0.0f, 0.0f, 0x1.07d084p-112f, 0.0f, 0.0f, 0.0f,
     0x1.d8da76p-123f, 0.0f, 0x1.128356p-52f, 0x1.a1c85p-72f, 0x1.4a70ecp-70f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9b376ap-10f, 0.0f, 0x1.8c21f4p-97f, 0.0f, 0x1.20d6e4p-3f,
     0x1.a2a4d8p-1f, 0x1.108448p-62f, 0x1.6792fcp-122f, 0.0f, 0x1.72fe6ep-23f,
     0x1.3d56a8p-117f, 0x1.fd4aa4p-88f, 0.0f, 0x1.bf4f64p-126f, 0x1.57fb22p-25f,
     0x1.655c46p-13f, 0.0f, 0x1.22a2p-18f, 0.0f, 0x1.7765dap-90f, 0x1.d9113ep-20f,
     0.0f, 0.0f, 0.0f, 0x1.23822p-80f, 0x1.9d465p-14f, 0x1.c963b4p-16f,
     0x1.1cb2d2p-28f, 0.0f, 0x1.b53e62p-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.53d802p-104f, 0x1.dba65ep-2f, 0.0f, 0x1.08b4b4p-37f, 0.0f, 0x1.097bfap-109f,
     0.0f, 0x1.8a3f9cp-66f, 0x1.77b9dep-117f, 0x1.0ef2fap-37f, 0x1.bd350cp-64f,
     0x1.d51ff4p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a73106p-58f, 0x1.2a5c4ap-11f,
     0x1.8f4658p-27f, 0.0f, 0x1.b54ffap-28f, 0.0f, 0x1.11d556p-39f, 0x1.845098p-58f,
     0.0f, 0x1.37a738p-39f, 0x1.41565p-49f, 0.0f, 0x1.b0b6cep-94f, 0.0f, 0.0f,
     0x1.c27e16p-26f, 0.0f, 0.0f, 0.0f, 0x1.3dccfap-107f, 0x1.ac046p-65f, 0.0f,
     0x1.dcdb04p-74f, 0.0f, 0x1.823768p-15f, 0x1.b0bbp-122f, 0x1.a36922p-125f,
     0x1.987d92p-125f, 0.0f, 0x1.8da0e6p-62f, 0x1.4638b4p-85f, 0.0f, 0x1.98b8dep-122f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.018d8cp-110f, 0.0f, 0x1.979c22p-30f, 0x1.72763cp-78f, 0x1.4d0d32p-25f, 0.0f,
     0x1.b495c6p-33f, 0x1.9d3a14p-44f, 0.0f, 0x1.160616p-114f, 0x1.f356eap-1f,
     0x1.268ap-71f, 0.0f, 0.0f, 0x1.327274p-56f, 0x1.460ecep-10f, 0x1.12cf14p-31f,
     0.0f, 0.0f, 0x1.8ce60ap-71f, 0x1.890adap-109f, 0.0f, 0.0f, 0.0f, 0x1.5cabdp-7f,
     0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.56521ap-77f, 0x1.21412p-9f, 0.0f, 0.0f, 0.0f,
     0x1.0990fcp-90f, 0x1.b0bf34p-119f, 0.0f, 0x1.8c88fep-40f, 0x1.5e489cp-12f, 0.0f,
     0x1.2ccf62p-74f, 0x1.098cfp-56f, 0x1.c15d3ep-27f, 0x1.7cf74ap-76f, 0.0f,
     0x1.5135c2p-66f, 0x1.697edp-109f, 0.0f, 0.0f, 0x1.f6c77ap-126f, 0.0f,
     0x1.3cc712p-50f, 0.0f, 0.0f, 0.0f, 0x1.94859cp-52f, 0x1.d4df66p-111f,
     0x1.4b68a6p-18f, 0x1.6f5448p-111f, 0x1.1565dap-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b0b232p-78f, 0.0f, 0x1.a9205p-16f, 0.0f, 0x1.34db62p-77f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.abe59p-40f, 0.0f, 0.0f, 0.0f,
     0x1.9295dap-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f9304ap-54f, 0x1.c0a75p-12f
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
            float tmp2;
            __m128 carg;
            __m128 carg1;
            __m128 carg2;
            float tmp3;
            int32_t tmp4;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = external_bench_wrapper_input_table_arg1[i];
            tmp2 = Sleef_finz_fmaxf1_purecfma(tmp0, tmp1);
            external_bench_wrapper_output_table[i] = tmp2;
            carg = _mm_set_ss(bench_acc);
            carg1 = _mm_set_ss(tmp2);
            carg2 = _mm_add_ss(carg, carg1);
            tmp3 = _mm_cvtss_f32(carg2);
            bench_acc = tmp3;
            tmp4 = i + INT32_C(1);
            i = tmp4;
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
    printf("Sleef_finz_fmaxf1_purecfma %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_fmaxf1_purecfma bench acc %a\n", global_bench_acc);
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
