/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_sincosf4_u35avx2128.c --function Sleef_sincosf4_u35avx2128 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 4 --function-input-vector-size 4 --precision sleef_sf2 \
 *     --bench --no-embedded-bin --target x86_avx2128
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <string.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef___m128_2 external_bench_wrapper_cst = {.x = {0.0f, 0.0f, 0.0f, 0.0f},.y = {0.0f, 0.0f, 0.0f, 0.0f}};
static const Sleef___m128_2 external_bench_wrapper_cst1 = {.x = {0.0f, 0.0f, 0.0f, 0.0f},.y = {0.0f, 0.0f, 0.0f, 0.0f}};
volatile Sleef___m128_2 external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0x1.19d534p-12f, 0.0f, 0x1.43533p-55f, 0.0f, 0x1.f9affep-78f, 0.0f,
     0x1.eb0d44p-1f, 0x1.16bf5p-4f, 0x1.508418p-112f, 0.0f, 0x1.d9f47cp-18f,
     0x1.0f60aep-57f, 0x1.a1944p-63f, 0x1.cfccacp-75f, 0.0f, 0.0f, 0x1.5b4296p-12f,
     0.0f, 0x1.47d67cp-16f, 0x1.e52a94p-39f, 0.0f, 0x1.9aa438p-11f, 0x1.064ce8p-122f,
     0x1.cd34e8p-126f, 0x1.12e71cp-96f, 0x1.a1437ep-65f, 0x1.aed9b8p-46f,
     0x1.a05912p-45f, 0x1.0c8f1ap-52f, 0x1.1feea4p-119f, 0x1.5a9868p-7f, 0.0f,
     0x1.92879ep-88f, 0.0f, 0x1.e32618p-5f, 0x1.586388p-98f, 0x1.b7dd6p-71f, 0.0f,
     0x1.cc096p-119f, 0.0f, 0x1.3c54b8p-2f, 0x1.6f52ccp-41f, 0x1.303c86p-30f, 0.0f,
     0x1.92f57cp-50f, 0x1.9eadc2p-121f, 0x1.d9c05ap-22f, 0.0f, 0.0f, 0x1.ee9412p-116f,
     0x1.1aa25ap-89f, 0x1.6baf14p-22f, 0.0f, 0x1.0d6f6p-81f, 0.0f, 0.0f,
     0x1.2b8c54p-123f, 0.0f, 0.0f, 0x1.7121f2p-14f, 0.0f, 0x1.fcf84p-94f,
     0x1.f01402p-26f, 0x1.27b512p-117f, 0.0f, 0.0f, 0x1.f41abep-86f, 0.0f,
     0x1.cdcedp-118f, 0.0f, 0.0f, 0x1.96f7ecp-101f, 0x1.36971p-38f, 0x1.4560ecp-5f,
     0x1.707b9ep-126f, 0.0f, 0.0f, 0x1.58eee8p-30f, 0.0f, 0x1.f2a262p-84f, 0.0f, 0.0f,
     0x1.be5bf6p-51f, 0x1.0ed4dap-74f, 0x1.71a5aep-81f, 0.0f, 0.0f, 0x1.de5774p-86f,
     0x1.96e328p-45f, 0x1.024bf4p-33f, 0.0f, 0x1.363086p-119f, 0.0f, 0x1.b017fcp-35f,
     0.0f, 0x1.3e031cp-96f, 0x1.8bd6c2p-104f, 0x1.59c554p-42f, 0.0f, 0.0f, 0.0f,
     0x1.1c74c6p-24f, 0.0f, 0x1.8eaep-122f, 0.0f, 0x1.a3d4a2p-126f, 0.0f,
     0x1.856072p-18f, 0.0f, 0.0f, 0x1.0a7632p-111f, 0x1.2d4e9cp-91f, 0x1.3925d6p-3f,
     0.0f, 0.0f, 0.0f, 0x1.d22962p-81f, 0x1.8dc4e4p-32f, 0x1.419eap-37f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e00068p-71f, 0x1.567544p-80f, 0.0f, 0x1.baf58p-7f,
     0x1.159ab2p-63f, 0.0f, 0.0f, 0x1.6345d6p-102f, 0.0f, 0.0f, 0x1.03253ep-126f,
     0x1.d741bcp-19f, 0.0f, 0x1.6b9b0ap-71f, 0x1.ba46f6p-12f, 0x1.9be7acp-9f,
     0x1.c88eb4p-89f, 0x1.e5687p-5f, 0.0f, 0x1.a0548ap-45f, 0.0f, 0.0f, 0.0f,
     0x1.5c47bcp-114f, 0.0f, 0x1.8d95c4p-68f, 0.0f, 0x1.642c1cp-110f, 0.0f, 0.0f,
     0x1.b4acdap-68f, 0.0f, 0x1.d38b82p-77f, 0.0f, 0x1.e415c2p-58f, 0x1.686f7cp-96f,
     0x1.85c904p-39f, 0.0f, 0.0f, 0x1.679be2p-125f, 0x1.9d723ep-107f, 0.0f,
     0x1.eaa16cp-95f, 0.0f, 0x1.56e60ep-20f, 0.0f, 0x1.1b386cp-71f, 0.0f,
     0x1.3499bp-89f, 0x1.ed03e8p-98f, 0x1.485c2cp-74f, 0.0f, 0.0f, 0x1.b926ap-97f,
     0.0f, 0x1.024912p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a2d66cp-106f,
     0.0f, 0x1.1c007cp-114f, 0x1.211094p-28f, 0x1.a9c8fp-121f, 0x1.9a4d46p-124f, 0.0f,
     0x1.254a78p-13f, 0.0f, 0.0f, 0.0f, 0x1.45f7d4p-95f, 0.0f, 0x1.bd8d7ep-13f,
     0x1.14bbb4p-87f, 0.0f, 0x1.dc0674p-23f, 0x1.a2f648p-17f, 0x1.33d4d8p-22f, 0.0f,
     0.0f, 0x1.d1f9cap-39f, 0.0f, 0x1.6f626p-34f, 0x1.6d870ap-28f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.8b9964p-33f, 0x1.271bep-15f, 0x1.a2603ep-7f, 0x1.289fbp-113f,
     0x1.9fa38p-43f, 0x1.aa843cp-114f, 0x1.0b4c8cp-110f, 0.0f, 0.0f, 0x1.b3ed22p-5f,
     0x1.389d34p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4ff99ep-38f, 0.0f,
     0x1.cf3478p-23f, 0.0f, 0x1.aaf506p-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c9947ap-118f, 0x1.b2264ep-4f, 0.0f, 0x1.65c39ep-60f, 0x1.1ddc46p-91f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8b330ap-66f, 0x1.12c106p-8f, 0x1.6ceb02p-61f,
     0x1.5a4d0cp-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ffa982p-62f, 0.0f, 0x1.0442b2p-82f,
     0.0f, 0.0f, 0.0f, 0x1.560a36p-68f, 0x1.a4a6ccp-97f, 0.0f, 0.0f, 0x1.ad65aep-118f,
     0.0f, 0.0f, 0.0f, 0x1.7feb6ap-85f, 0x1.08fa8cp-13f, 0.0f, 0x1.f38a44p-112f,
     0x1.10c9ap-108f, 0x1.d123bep-44f, 0x1.7e4666p-8f, 0x1.cf1cdcp-73f, 0.0f,
     0x1.7df0c4p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b2f486p-89f, 0.0f,
     0x1.8ba6d2p-85f, 0x1.414aa4p-30f, 0x1.7fa52cp-118f, 0x1.a69304p-73f, 0.0f,
     0x1.3f027ep-79f, 0.0f, 0x1.993776p-69f, 0x1.3ae4dp-91f, 0x1.0b396p-94f, 0.0f,
     0.0f, 0x1.0faddp-22f, 0x1.e5d79ep-25f, 0x1.0cd1bp-66f, 0x1.e3542ep-69f, 0.0f,
     0x1.712c02p-103f, 0x1.01fa36p-61f, 0x1.13cf2p-74f, 0x1.fdc224p-22f,
     0x1.4cda88p-89f, 0.0f, 0x1.842432p-113f, 0.0f, 0x1.060d84p-104f, 0.0f, 0.0f,
     0x1.3fc558p-19f, 0x1.82a014p-57f, 0x1.971cd6p-60f, 0.0f, 0x1.063bd4p-54f, 0.0f,
     0.0f, 0.0f, 0x1.c28008p-97f, 0.0f, 0.0f, 0x1.56f95cp-54f, 0x1.a0d274p-27f, 0.0f,
     0x1.baf098p-54f, 0x1.c509f2p-13f, 0.0f, 0.0f, 0x1.6e12f2p-62f, 0x1.3af414p-101f,
     0x1.e30f04p-105f, 0x1.2fa5bep-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cd589cp-116f,
     0.0f, 0x1.79fadp-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.783c7cp-71f, 0x1.1a7356p-25f, 0.0f, 0x1.013012p-71f, 0.0f, 0.0f,
     0x1.cc160ap-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7a892cp-125f, 0.0f,
     0x1.932fa6p-105f, 0.0f, 0.0f, 0x1.7cefaap-42f, 0.0f, 0.0f, 0.0f, 0x1.92449ap-80f,
     0x1.0d9c76p-123f, 0x1.1443b8p-33f, 0.0f, 0.0f, 0x1.00e754p-97f, 0x1.5dd682p-78f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b16c38p-45f,
     0.0f, 0x1.d8d10cp-40f, 0x1.d6a30cp-95f, 0x1.a502b2p-60f, 0x1.ee89bp-89f,
     0x1.bd5456p-43f, 0x1.f84542p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0dd6f4p-107f, 0.0f, 0x1.e1af0ep-98f, 0.0f, 0x1.cf9c36p-34f, 0.0f,
     0x1.f16a06p-64f, 0x1.d6c42ep-115f, 0x1.c21134p-86f, 0.0f, 0x1.6c3ebap-77f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.51cb92p-103f, 0x1.c9f218p-39f, 0x1.0f9fap-40f, 0.0f,
     0x1.7ae9f8p-7f, 0.0f, 0x1.ee3c04p-29f, 0.0f, 0.0f, 0x1.a6dd62p-53f,
     0x1.91871ep-6f, 0x1.0892fp-48f, 0x1.baa468p-37f, 0x1.f878d4p-120f,
     0x1.132b9ap-122f, 0.0f, 0x1.2f9d3ep-17f, 0x1.c9bda6p-106f, 0x1.83c5c8p-107f,
     0x1.c2ac8p-113f, 0x1.d75e98p-33f, 0x1.42c36ep-25f, 0.0f, 0.0f, 0.0f,
     0x1.10a342p-65f, 0.0f, 0.0f, 0x1.7df606p-16f, 0x1.81ab44p-80f, 0x1.a9bc08p-3f,
     0.0f, 0x1.3ad0dcp-61f, 0.0f, 0x1.62aba2p-35f, 0x1.2a5862p-73f, 0x1.69acacp-12f,
     0.0f, 0x1.3bc478p-49f, 0x1.a9e8fep-92f, 0.0f, 0x1.d1cc1ap-16f, 0x1.639674p-99f,
     0x1.0f8b0ap-66f, 0x1.ea677cp-65f, 0x1.5e33c6p-57f, 0.0f, 0x1.0eea14p-1f, 0.0f,
     0.0f, 0x1.d63d0ep-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6f0ffap-42f, 0.0f,
     0x1.01488p-29f, 0.0f, 0x1.3fa5a4p-105f, 0x1.a3bb34p-56f, 0.0f, 0x1.dce98ap-103f,
     0x1.97d9d6p-59f, 0.0f, 0.0f, 0x1.fae31ep-83f, 0.0f, 0x1.308a2cp-115f,
     0x1.1a6a12p-102f, 0.0f, 0.0f, 0x1.45a18ep-96f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.251ee8p-83f, 0x1.ff1742p-20f, 0x1.670fb2p-15f, 0x1.26091ep-99f,
     0x1.477418p-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1b4846p-97f, 0x1.4b84e8p-35f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e2cf7ap-46f, 0x1.00a328p-43f,
     0x1.3e695ep-107f, 0x1.8d2d92p-116f, 0x1.fb719p-123f, 0.0f, 0x1.76364p-69f,
     0x1.314398p-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f7359p-26f, 0.0f, 0x1p0f,
     0x1.81ac1p-67f, 0x1.08a3ccp-70f, 0x1.95e476p-33f, 0.0f, 0.0f, 0.0f,
     0x1.ddbfb2p-64f, 0x1.65d8fep-63f, 0x1.2cf7aep-17f, 0x1.6cdb5p-18f,
     0x1.e3f04p-123f, 0x1.e88a12p-68f, 0.0f, 0x1.74f3e4p-73f, 0.0f, 0x1.1145b4p-43f,
     0.0f, 0x1.cbf786p-65f, 0.0f, 0x1.e159aep-66f, 0.0f, 0x1.25359ep-91f, 0.0f,
     0x1.39beep-52f, 0x1.c0ba58p-83f, 0.0f, 0.0f, 0.0f, 0x1.ba7e0ep-47f,
     0x1.b0e0ep-3f, 0x1.5a5fcp-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.81b5e8p-3f,
     0x1.b45092p-75f, 0.0f, 0x1.c599d8p-84f, 0.0f, 0.0f, 0x1.eb896cp-55f,
     0x1.9c737ep-53f, 0.0f, 0x1.5a876cp-90f, 0.0f, 0x1.d17be6p-14f, 0.0f,
     0x1.803cdep-72f, 0x1.5847aep-29f, 0x1.3c417ep-112f, 0.0f, 0x1.89ba08p-14f,
     0x1.f5174ep-43f, 0.0f, 0x1.84e35ap-13f, 0.0f, 0x1.12d6dp-23f, 0x1.c6526ep-11f,
     0.0f, 0.0f, 0.0f, 0x1.ba11c4p-107f, 0.0f, 0.0f, 0.0f, 0x1.3d6652p-92f, 0.0f,
     0x1.efb7aep-36f, 0.0f, 0x1.e54edcp-9f, 0.0f, 0x1.02949p-1f, 0x1.b95832p-54f,
     0.0f, 0.0f, 0x1.d49f74p-24f, 0.0f, 0.0f, 0.0f, 0x1.00a094p-30f, 0.0f,
     0x1.777044p-40f, 0.0f, 0.0f, 0.0f, 0x1.7caa7ap-60f, 0.0f, 0x1.bbbe5ap-119f,
     0x1.55399cp-23f, 0.0f, 0x1.12a786p-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f4756ap-110f,
     0.0f, 0.0f, 0x1.ced434p-49f, 0x1.fe251p-15f, 0.0f, 0.0f, 0x1.a6c9a6p-9f, 0.0f,
     0.0f, 0.0f, 0x1.649fdcp-83f, 0.0f, 0.0f, 0x1.5ab39cp-117f, 0.0f, 0.0f,
     0x1.7c4ca2p-87f, 0x1.9cbaeap-98f, 0x1.5261eep-5f, 0x1.699e1p-20f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b60b84p-93f, 0x1.fab562p-102f, 0.0f, 0.0f,
     0x1.3d3542p-96f, 0x1.d2c1dep-91f, 0.0f, 0x1.cca3e8p-11f, 0x1.456396p-10f,
     0x1.f816a6p-88f, 0x1.071d36p-98f, 0x1.cdfd72p-5f, 0x1.e9ba0cp-67f,
     0x1.47589p-34f, 0.0f, 0.0f, 0x1.22f06cp-103f, 0.0f, 0.0f, 0x1.10c886p-7f,
     0x1.070b46p-58f, 0.0f, 0x1.9718dcp-19f, 0.0f, 0.0f, 0.0f, 0x1.8917f8p-103f,
     0x1.4bbb52p-20f, 0x1.bf0f26p-4f, 0x1.58fcdcp-3f, 0.0f, 0x1.7827b4p-7f,
     0x1.2490c2p-62f, 0x1.c98c7ep-120f, 0.0f, 0.0f, 0x1.7ff94ep-83f, 0x1.d6272ep-122f,
     0.0f, 0x1.44f2ccp-67f, 0.0f, 0.0f, 0x1.33e5d2p-60f, 0x1.9e159cp-43f,
     0x1.4e4dd2p-120f, 0.0f, 0.0f, 0.0f, 0x1.e9eb62p-114f, 0.0f, 0.0f,
     0x1.e1a13ep-18f, 0.0f, 0.0f, 0x1.a98fd2p-11f, 0x1.decf1ep-29f, 0x1.9f00b2p-71f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.392c84p-100f, 0x1.578ea4p-103f, 0x1.942656p-40f,
     0.0f, 0.0f, 0.0f, 0x1.f9bd5p-111f, 0.0f, 0.0f, 0.0f, 0x1.a71ddcp-61f,
     0x1.63e05ap-103f, 0x1.f4ce6ep-6f, 0.0f, 0.0f, 0x1.953108p-17f, 0x1.0e9096p-23f,
     0.0f, 0.0f, 0x1.32e842p-111f, 0.0f, 0x1.95b67ep-98f, 0.0f, 0.0f, 0.0f,
     0x1.8b3f2cp-64f, 0x1.d93be4p-40f, 0.0f, 0x1.4a36p-63f, 0x1.26003ap-99f,
     0x1.590cbep-1f, 0x1.87e17ep-42f, 0x1.1bc1eep-76f, 0.0f, 0x1.93f24cp-92f,
     0x1.958432p-42f, 0.0f, 0x1.bf2f4p-43f, 0.0f, 0.0f, 0.0f, 0x1.525a3p-100f, 0.0f,
     0x1.69fd78p-35f, 0x1.d0ce16p-72f, 0.0f, 0x1.3b0e84p-86f, 0x1.107fe6p-23f,
     0x1.6aa5fp-1f, 0x1.045a2ap-34f, 0.0f, 0x1.d087cep-29f, 0.0f, 0.0f,
     0x1.6db9f4p-78f, 0x1.f7be0ep-87f, 0.0f, 0x1.585e3cp-111f, 0.0f, 0.0f,
     0x1.d7990ep-35f, 0.0f, 0x1.5f815cp-64f, 0.0f, 0x1.c336d6p-10f, 0x1.d299ecp-2f,
     0.0f, 0x1.d2555ep-62f, 0.0f, 0.0f, 0x1.20a8cp-9f, 0x1.281b5cp-78f, 0.0f,
     0x1.413822p-16f, 0.0f, 0x1.9c406cp-46f, 0x1.05422p-116f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.536052p-98f, 0x1.fc6e64p-78f, 0x1.020b6ep-126f, 0x1.87a87ap-56f, 0.0f, 0.0f,
     0x1.571c9p-31f, 0.0f, 0x1.5bd80cp-125f, 0.0f, 0.0f, 0x1.f21b9ap-70f, 0.0f,
     0x1.a88a28p-52f, 0.0f, 0x1.233ba2p-32f, 0x1.eeb11ep-25f, 0.0f, 0x1.9584dp-38f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.191dfap-83f, 0x1.a1ee64p-30f, 0x1.240fe8p-37f, 0.0f,
     0.0f, 0.0f, 0x1.b4fab8p-38f, 0.0f, 0x1.6d189cp-73f, 0x1.f7263ap-53f,
     0x1.725fc4p-42f, 0x1.b9c77p-41f, 0x1.08f76p-40f, 0x1.d1ebap-93f, 0.0f, 0.0f,
     0.0f, 0x1.3f6accp-7f, 0.0f, 0.0f, 0.0f, 0x1.747844p-102f, 0x1.85a2f2p-38f,
     0x1.4d3aeap-44f, 0.0f, 0.0f, 0x1.d7a38cp-114f, 0x1.5e2ad8p-65f, 0x1.3d67ap-85f,
     0.0f, 0x1.e9123ep-48f, 0.0f, 0.0f, 0.0f, 0x1.9960fp-43f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2106d8p-93f, 0.0f, 0x1.bcf618p-95f, 0.0f, 0.0f, 0x1.87dd6ap-26f, 0.0f, 0.0f,
     0x1.b93e52p-40f, 0x1.10e9dcp-43f, 0x1.dac22ap-108f, 0x1.66551ep-45f, 0.0f, 0.0f,
     0x1.cd00e4p-57f, 0x1.c1454ap-35f, 0x1.b5936ap-47f, 0x1.390e56p-72f, 0.0f, 0.0f,
     0.0f, 0x1.ee3c7ep-40f, 0x1.636466p-120f, 0x1.8b8e3ep-120f, 0.0f, 0.0f,
     0x1.f47a92p-94f, 0x1.08bfa8p-115f, 0x1.582848p-28f, 0.0f, 0x1.abdf18p-59f,
     0x1.fa633p-73f, 0x1.814048p-100f, 0.0f, 0x1.a66436p-49f, 0x1.7622c6p-75f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.75c588p-62f, 0x1.688ac4p-43f, 0.0f, 0.0f,
     0.0f, 0x1.28717ap-8f, 0.0f, 0.0f, 0x1.d21e0ap-46f, 0.0f, 0x1.15c296p-118f, 0.0f,
     0x1.9045dap-114f, 0x1.9e1dc8p-69f, 0.0f, 0.0f, 0.0f, 0x1.95af0ep-99f, 0.0f, 0.0f,
     0x1.6af404p-69f, 0x1.c8db7ap-124f, 0.0f, 0x1.691058p-84f, 0.0f, 0.0f, 0.0f,
     0x1.dab09p-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.028f66p-76f, 0.0f, 0.0f, 0.0f,
     0x1.ccc9cap-94f, 0.0f, 0x1.b83c02p-67f, 0x1.0c8138p-102f, 0.0f, 0x1.7c79fap-68f,
     0x1.731e5ap-16f, 0.0f, 0x1.f9d68ep-90f, 0.0f, 0.0f, 0.0f, 0x1.85dc3ap-14f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f2f50ap-28f, 0x1.a45e9ap-71f, 0x1.55f2bcp-94f, 0.0f, 0.0f,
     0.0f, 0x1.f9f74ap-96f, 0.0f, 0x1.e622f2p-59f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3a3356p-12f, 0.0f, 0.0f, 0x1.9c0126p-62f, 0.0f, 0x1.f8dd12p-77f,
     0x1.5d0b04p-86f, 0.0f, 0x1.0815dap-46f, 0x1.69dc34p-99f, 0.0f, 0x1.84bc54p-104f,
     0x1.f405e8p-23f, 0x1.c49b98p-37f, 0x1.22668p-25f, 0x1.98e9eap-57f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.7f5dbcp-106f, 0x1.c90d58p-99f, 0x1.f4e5fap-7f,
     0x1.5c62aap-121f, 0x1.584efap-82f, 0x1.60e316p-41f, 0x1.b56f5cp-51f, 0.0f, 0.0f,
     0x1.29aeb6p-35f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef___m128_2 global_bench_acc;
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
        Sleef___m128_2 local_acc;
        int32_t i;
        ml_float4_t tmp0;
        ml_float4_t tmp1;
        ml_float4_t tmp2;
        ml_float4_t tmp3;
        ml_float4_t tmp4;
        ml_float4_t tmp5;
        Sleef___m128_2 tmp6;
        int32_t tmp7;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1004));){
            ml_float4_t tmp0;
            Sleef___m128_2 tmp1;
            ml_float4_t tmp2;
            ml_float4_t tmp3;
            ml_float4_t tmp4;
            ml_float4_t tmp5;
            ml_float4_t tmp6;
            ml_float4_t tmp7;
            Sleef___m128_2 tmp8;
            int32_t tmp9;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_sincosf4_u35avx2128(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = local_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = local_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef___m128_2) {.x=tmp4, .y=tmp7});
            local_acc = tmp8;
            tmp9 = i + INT32_C(4);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = local_acc.x;
        tmp2 = tmp0 + tmp1;
        tmp3 = global_bench_acc.y;
        tmp4 = local_acc.y;
        tmp5 = tmp3 + tmp4;
        tmp6 = ((Sleef___m128_2) {.x=tmp2, .y=tmp5});
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
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_sincosf4_u35avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_sincosf4_u35avx2128 bench acc {.x=[%a, %a, %a, %a], .y=[%a, %a, %a, %a]}\n", global_bench_acc.x[0], global_bench_acc.x[1], global_bench_acc.x[2], global_bench_acc.x[3], global_bench_acc.y[0], global_bench_acc.y[1], global_bench_acc.y[2], global_bench_acc.y[3]);
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
