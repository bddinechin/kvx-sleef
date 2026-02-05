/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_copysignf1_purecfma.c --function \
 *     Sleef_finz_copysignf1_purecfma --arity 2 --headers \
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
     0x1.2fa9b4p-31f, 0x1.2b9f4ap-19f, 0x1.04b84p-21f, 0x1.f65cdcp-4f,
     0x1.a3970cp-90f, 0.0f, 0x1.dc7eb8p-106f, 0.0f, 0.0f, 0.0f, 0x1.bb5742p-89f,
     0x1.b8330ep-68f, 0x1.cb0546p-103f, 0.0f, 0x1.df7e64p-77f, 0.0f, 0x1.faa7cap-97f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.98c4e2p-103f, 0.0f, 0.0f, 0x1.afeb2ap-58f, 0.0f,
     0.0f, 0x1.6267ecp-89f, 0x1.d0d3e6p-113f, 0.0f, 0x1.7fbb76p-7f, 0.0f, 0.0f,
     0x1.f20852p-118f, 0x1.75f8a8p-117f, 0x1.f821ecp-114f, 0.0f, 0x1.7f5562p-49f,
     0.0f, 0x1.37c832p-104f, 0x1.d020c4p-88f, 0x1.99e86ap-120f, 0.0f,
     0x1.832b78p-103f, 0.0f, 0x1.e2f3cep-50f, 0.0f, 0x1.7051c6p-22f, 0x1.8cafcp-94f,
     0.0f, 0x1.bbd424p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d4a2bp-96f, 0.0f, 0.0f,
     0x1.7a028cp-117f, 0.0f, 0x1.806584p-87f, 0x1.c13dcep-19f, 0x1.c3bd54p-50f,
     0x1.14df32p-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8a09dp-6f,
     0x1.7ac306p-56f, 0.0f, 0x1.24c81ap-67f, 0x1.0e5d96p-52f, 0x1.c1334ep-4f, 0.0f,
     0x1.9f8154p-76f, 0x1.265728p-2f, 0.0f, 0x1.e5b084p-119f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.5c5d8ep-80f, 0x1.b9a50ep-56f, 0x1.abe74p-32f, 0.0f, 0.0f,
     0x1.f31ap-70f, 0.0f, 0.0f, 0x1.f49d68p-38f, 0.0f, 0.0f, 0x1.3600eap-96f, 0.0f,
     0.0f, 0.0f, 0x1.63074p-33f, 0.0f, 0x1.08b852p-100f, 0x1.65349ap-51f,
     0x1.547becp-20f, 0.0f, 0x1.6d3946p-111f, 0x1.465df4p-96f, 0x1.6b152p-65f,
     0x1.8d3598p-66f, 0.0f, 0x1.906034p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.211f08p-4f,
     0.0f, 0.0f, 0x1.d834f8p-98f, 0x1.5f4502p-69f, 0.0f, 0x1.ada044p-92f,
     0x1.19de12p-102f, 0x1.fc421cp-63f, 0.0f, 0x1.e4ca12p-112f, 0.0f, 0.0f,
     0x1.eeb9fep-93f, 0.0f, 0x1.9a6b68p-29f, 0.0f, 0x1.6eb666p-36f, 0x1.1d0924p-32f,
     0.0f, 0.0f, 0.0f, 0x1.e0034cp-12f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.5d7dacp-112f, 0x1.a3a758p-81f, 0.0f, 0x1.02f92ep-64f, 0x1.f0ea9ap-92f,
     0.0f, 0.0f, 0.0f, 0x1.a77efep-40f, 0.0f, 0x1.9dac7ap-29f, 0x1.6f6386p-32f,
     0x1.ace0e2p-50f, 0x1.2d2d7p-57f, 0x1.a8936p-96f, 0.0f, 0.0f, 0x1.da2ea4p-118f,
     0x1.c967a4p-111f, 0.0f, 0x1.93cacp-20f, 0x1.2fd4fp-96f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.67403ap-77f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0f0fbep-4f, 0x1.a86f0cp-120f, 0x1.de6baap-99f, 0.0f, 0.0f, 0x1.19d246p-42f,
     0.0f, 0.0f, 0x1.c10deep-74f, 0.0f, 0.0f, 0.0f, 0x1.aa85a4p-101f, 0x1.9be0f2p-11f,
     0x1.cec5f4p-12f, 0x1.9b6c2cp-111f, 0x1.302e92p-69f, 0.0f, 0x1.6fa738p-116f,
     0x1.18de34p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dc89a6p-117f,
     0.0f, 0.0f, 0x1.6fe692p-60f, 0.0f, 0x1.4ce356p-89f, 0.0f, 0.0f, 0x1.06223ap-67f,
     0x1.27d22ep-105f, 0x1.33bd98p-81f, 0x1.68b874p-104f, 0x1.e83c42p-74f,
     0x1.d18764p-34f, 0.0f, 0.0f, 0x1.98c08p-24f, 0x1.b7cdeap-42f, 0x1.a3b0d4p-122f,
     0.0f, 0x1.3af7dep-6f, 0.0f, 0.0f, 0.0f, 0x1.4b045ep-44f, 0x1.5a4068p-59f,
     0x1.f94bf2p-19f, 0.0f, 0.0f, 0x1.bb5a04p-112f, 0x1.710108p-42f, 0.0f, 0.0f, 0.0f,
     0x1.cf097ap-116f, 0x1.a5f2e6p-68f, 0.0f, 0x1.79e40ap-6f, 0.0f, 0.0f, 0.0f,
     0x1.a4f1e6p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d0637ap-38f, 0.0f,
     0x1.68414ap-12f, 0.0f, 0.0f, 0x1.abd7a4p-97f, 0.0f, 0x1.d0656ep-13f, 0.0f,
     0x1.d7cf44p-44f, 0x1.5b63bep-12f, 0x1.676d0ap-24f, 0.0f, 0x1.9bf9dcp-40f, 0.0f,
     0x1.9f43fap-85f, 0.0f, 0x1.f8b7c2p-8f, 0x1.3842dcp-30f, 0.0f, 0x1.c63154p-42f,
     0.0f, 0.0f, 0x1.a10f4p-78f, 0x1.e15682p-50f, 0x1.70dbfp-125f, 0.0f, 0.0f,
     0x1.f5fe36p-25f, 0x1.60ec6ap-66f, 0x1.888efcp-27f, 0x1.bee318p-7f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.3cd298p-8f, 0x1.58f216p-68f, 0.0f, 0x1.a88564p-64f, 0.0f, 0.0f,
     0x1.8e875cp-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.25d756p-20f, 0.0f,
     0x1.cef326p-43f, 0x1.ac83a2p-89f, 0x1.284a96p-66f, 0x1.9dbfp-77f, 0.0f,
     0x1.a20ecep-31f, 0.0f, 0.0f, 0x1p0f, 0x1.49bbfap-23f, 0.0f, 0x1.90bef2p-114f,
     0x1.772d18p-104f, 0.0f, 0x1.192e54p-80f, 0x1.9b4ffep-8f, 0.0f, 0.0f, 0.0f,
     0x1.cbe78cp-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1ac95cp-66f, 0x1.33e91cp-52f,
     0x1.5abb44p-95f, 0.0f, 0x1.9fe534p-46f, 0x1.7bb3d8p-124f, 0x1.6cebecp-105f,
     0x1.f783eep-117f, 0x1.e46af4p-110f, 0x1.8bfdccp-80f, 0.0f, 0.0f, 0x1p0f,
     0x1.e7033p-84f, 0x1.e7b6cep-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fea68cp-68f, 0x1.53cc38p-115f, 0x1.c53d4ap-122f, 0.0f, 0x1.9d70d4p-43f, 0.0f,
     0x1.8994dp-4f, 0x1.47c99cp-107f, 0.0f, 0x1.e96c56p-34f, 0x1.f17f06p-98f, 0.0f,
     0x1.fe22fap-13f, 0x1.b543dp-60f, 0x1.df540ep-15f, 0.0f, 0x1.7b4a8ep-93f, 0.0f,
     0.0f, 0.0f, 0x1.ddda0ap-19f, 0.0f, 0.0f, 0.0f, 0x1.309658p-22f, 0x1.aac8d8p-61f,
     0x1.eb8a7ap-32f, 0.0f, 0x1.d090cep-67f, 0x1.246eeap-121f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d24db2p-99f, 0x1.c13e5ep-29f, 0.0f, 0x1.0d342p-121f, 0.0f, 0.0f,
     0x1.52af38p-95f, 0x1.d965cap-66f, 0.0f, 0x1.cd69c8p-4f, 0x1.91d8p-35f, 0.0f,
     0x1.3509f4p-18f, 0.0f, 0.0f, 0x1.c93826p-119f, 0.0f, 0x1.b97a24p-69f, 0.0f,
     0x1.c00b8ep-87f, 0.0f, 0x1.68a08ep-45f, 0x1.ec4f66p-44f, 0.0f, 0x1.211d1cp-85f,
     0.0f, 0x1.2711dcp-76f, 0.0f, 0x1.6d376cp-73f, 0.0f, 0x1.c2c11cp-95f, 0.0f,
     0x1.1860a2p-101f, 0.0f, 0x1.a53278p-42f, 0x1.74aa6cp-62f, 0.0f, 0.0f,
     0x1.00ddep-53f, 0x1.5b3eb6p-116f, 0.0f, 0.0f, 0x1.6c716cp-27f, 0x1.0c12e6p-7f,
     0x1.467f6cp-80f, 0.0f, 0x1.5a096ep-69f, 0x1.620c3cp-12f, 0.0f, 0x1.2740fp-107f,
     0x1.290e9p-108f, 0.0f, 0.0f, 0x1.401f82p-60f, 0x1.d7f01ap-60f, 0.0f, 0.0f, 0.0f,
     0x1.ac3538p-54f, 0x1.7c4cdp-53f, 0x1.d19a4ap-100f, 0x1.65f7bp-3f, 0.0f,
     0x1.eec436p-117f, 0.0f, 0x1.9ee6dcp-125f, 0x1.288cecp-10f, 0x1.35f452p-111f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.4b44f4p-92f, 0.0f, 0x1.2eecdcp-81f, 0x1.910094p-94f,
     0x1.bcc1acp-7f, 0x1.3c7c84p-53f, 0x1.74312p-126f, 0.0f, 0.0f, 0.0f,
     0x1.95bbfap-91f, 0x1.37092ep-19f, 0x1.28774ap-63f, 0x1.1b85e4p-93f,
     0x1.05c1c2p-80f, 0x1.35bc6ep-54f, 0x1.25c54ep-85f, 0.0f, 0x1.99818ap-11f, 0x1p0f,
     0x1.84f83p-84f, 0x1.2451fcp-121f, 0x1.e1135ep-114f, 0.0f, 0.0f, 0x1.5a2556p-31f,
     0x1.c321c6p-123f, 0.0f, 0x1.ab100cp-26f, 0.0f, 0.0f, 0x1.ae9702p-36f,
     0x1.fb6924p-104f, 0x1.fffd02p-100f, 0x1.fd3016p-126f, 0.0f, 0x1.807de4p-20f,
     0x1.d71be2p-104f, 0x1.1718f4p-41f, 0.0f, 0x1.e75a76p-119f, 0x1.8ef652p-116f,
     0x1.a0b0eep-100f, 0x1.ffba54p-59f, 0x1.241d6ep-2f, 0.0f, 0.0f, 0x1.39cbf6p-66f,
     0.0f, 0x1.b69f66p-35f, 0.0f, 0.0f, 0x1.d9027p-88f, 0x1.8c3692p-28f,
     0x1.b0323ep-88f, 0x1.b6b8dcp-123f, 0x1.1087f6p-82f, 0.0f, 0x1.c9442ap-52f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.800fb4p-111f, 0.0f, 0x1.3e6862p-117f, 0.0f,
     0x1.4f4716p-5f, 0.0f, 0x1.e0bb8cp-105f, 0.0f, 0x1.370428p-4f, 0x1.9717d6p-93f,
     0x1.19a4e6p-50f, 0.0f, 0x1.6307fep-96f, 0.0f, 0x1.5a2484p-43f, 0.0f,
     0x1.6c38e6p-56f, 0.0f, 0x1.94c73cp-110f, 0x1.a139cp-107f, 0x1.9bb35ap-55f, 0.0f,
     0x1.0c5692p-101f, 0x1.3fb30ep-13f, 0x1.78402cp-57f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9a691cp-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2ccc28p-119f, 0x1.566b04p-64f,
     0.0f, 0.0f, 0x1.c45248p-120f, 0x1.efb4cep-3f, 0.0f, 0x1.32f026p-92f,
     0x1.c00156p-29f, 0.0f, 0x1.9a64e2p-62f, 0.0f, 0.0f, 0.0f, 0x1.9985a2p-14f,
     0x1.f19e78p-30f, 0.0f, 0x1.f015acp-27f, 0.0f, 0.0f, 0.0f, 0x1.d408cap-12f,
     0x1.f13cd8p-93f, 0.0f, 0x1.31df38p-13f, 0x1.acfac2p-121f, 0.0f, 0x1.2a4e28p-85f,
     0.0f, 0x1.ae98ecp-2f, 0.0f, 0x1.71e214p-100f, 0x1.fc8a1ap-53f, 0x1.d13c34p-78f,
     0.0f, 0x1.baf4c2p-54f, 0x1.d397fap-113f, 0.0f, 0x1.ce06ep-28f, 0x1.41efcap-115f,
     0x1.6eb66ap-6f, 0.0f, 0x1.caad12p-104f, 0.0f, 0.0f, 0x1.e362a8p-68f, 0.0f, 0.0f,
     0.0f, 0x1.57df38p-125f, 0x1.859252p-84f, 0.0f, 0x1.384d08p-85f, 0.0f,
     0x1.d028bap-63f, 0x1.184eecp-24f, 0.0f, 0.0f, 0x1.be5c6ep-91f, 0x1.0214cp-48f,
     0x1.5239eep-95f, 0x1.5c1544p-98f, 0x1.0f1c7ep-18f, 0.0f, 0x1.6c63ep-70f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.8a28ccp-38f, 0.0f, 0x1.67f7dap-83f, 0x1.2c510ap-23f,
     0.0f, 0x1.516692p-11f, 0.0f, 0.0f, 0x1.bbb406p-67f, 0x1.60d51ap-122f,
     0x1.4cb62ap-109f, 0.0f, 0x1.6de666p-39f, 0.0f, 0x1.087738p-117f, 0.0f, 0.0f,
     0x1.937486p-3f, 0.0f, 0x1.12a1acp-4f, 0.0f, 0x1.a7e494p-116f, 0x1.6eb7ccp-26f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3cb096p-32f, 0.0f, 0.0f, 0.0f, 0x1.169446p-69f, 0.0f,
     0x1.c17d1ep-8f, 0x1.fc14c8p-124f, 0x1.2cac5ep-78f, 0.0f, 0x1.72a2d8p-58f,
     0x1.3dabc8p-109f, 0x1.e3f1a2p-109f, 0x1.7bca34p-14f, 0x1.76ef3ap-2f, 0.0f, 0.0f,
     0.0f, 0x1.33e8p-125f, 0.0f, 0x1.1b0b7ap-118f, 0x1.e0165cp-123f, 0x1.abf7a2p-48f,
     0.0f, 0.0f, 0.0f, 0x1.8f277cp-116f, 0x1.6f0afep-43f, 0x1.5e389cp-80f,
     0x1.a64d6ep-54f, 0.0f, 0x1.fdcf6ep-83f, 0x1.34f29cp-84f, 0x1.f89e1cp-105f,
     0x1.52de3cp-42f, 0x1.27686ep-45f, 0x1.7e623ap-80f, 0.0f, 0x1.f7b8eap-123f, 0.0f,
     0.0f, 0x1.892fc4p-9f, 0.0f, 0.0f, 0x1.c2a4fp-12f, 0x1.bfba3p-122f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.23569cp-11f, 0.0f, 0.0f, 0x1.5cd5fep-58f,
     0x1.9969a8p-80f, 0x1.a7eaa8p-53f, 0x1.9f156ep-115f, 0.0f, 0.0f, 0x1.67ed0ap-84f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ada972p-51f, 0x1.451e1p-83f, 0x1.adc53cp-21f, 0.0f,
     0x1.d2f9cep-20f, 0.0f, 0x1.10cd96p-107f, 0x1.1af5c4p-120f, 0.0f, 0x1.df13fp-23f,
     0.0f, 0x1.66561ep-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8b1d5ep-98f,
     0x1.be7e74p-53f, 0.0f, 0x1.1a5004p-48f, 0x1.2b526ep-68f, 0.0f, 0.0f,
     0x1.450828p-118f, 0x1.ff27f8p-112f, 0.0f, 0.0f, 0x1.a1266cp-8f, 0x1.c055e2p-88f,
     0.0f, 0x1.33ac44p-88f, 0x1.37722cp-107f, 0x1.0bedfcp-48f, 0x1.22ae6cp-38f, 0.0f,
     0x1.428d9ep-117f, 0x1.965c5p-3f, 0.0f, 0.0f, 0x1.8321a8p-50f, 0x1.8f2ee2p-38f,
     0x1.a4f01cp-59f, 0x1.40dcc6p-38f, 0x1.1e57a8p-124f, 0x1.a127d2p-74f, 0.0f, 0.0f,
     0x1.ec15aep-58f, 0.0f, 0x1.b72e3ep-78f, 0.0f, 0x1.4036bp-85f, 0x1.84371ep-84f,
     0x1.b69e86p-99f, 0x1.c8b79ep-17f, 0.0f, 0x1.9e0bb8p-92f, 0.0f, 0.0f,
     0x1.d1472ap-89f, 0x1.b9e8eap-44f, 0.0f, 0x1.07f288p-103f, 0.0f, 0.0f,
     0x1.6f57cep-24f, 0.0f, 0.0f, 0x1.40dc24p-34f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bbd374p-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.60bf14p-25f, 0.0f, 0x1.137b6cp-95f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7f5784p-37f, 0.0f, 0x1.7a273p-67f,
     0.0f, 0.0f, 0.0f, 0x1.74e89ap-38f, 0x1.0669eep-99f, 0.0f, 0.0f, 0x1.d1b566p-32f,
     0.0f, 0.0f, 0x1.c25e06p-60f, 0.0f, 0.0f, 0.0f, 0x1.380ab8p-68f, 0.0f,
     0x1.febb5cp-54f, 0x1.abaae4p-93f, 0x1.a288aap-48f, 0x1.4f1d3cp-2f,
     0x1.b8ec0ap-35f, 0.0f, 0x1.a191f4p-48f, 0.0f, 0x1.a6779ep-96f, 0x1.b245ccp-111f,
     0x1.da0136p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.484c5ep-96f, 0.0f,
     0x1.172b36p-84f, 0x1.d13454p-2f, 0x1.360798p-37f, 0x1.9848ecp-68f,
     0x1.fad164p-105f, 0x1.6a95d8p-92f, 0x1.6af9f2p-54f, 0.0f, 0.0f, 0x1.92b88ap-92f,
     0.0f, 0x1.dec11p-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7414e6p-40f,
     0x1.4b55dcp-73f, 0.0f, 0.0f, 0x1.a0cec6p-90f, 0.0f, 0.0f, 0.0f, 0x1.9e98b8p-30f,
     0x1.3c4f4ep-33f, 0x1.ac2e34p-46f, 0x1.57467cp-53f, 0.0f, 0.0f, 0x1.e1c2f6p-97f,
     0.0f, 0x1.858dcep-37f, 0x1.e82b7ap-100f, 0.0f, 0.0f, 0x1.4a79dap-13f,
     0x1.aa666ap-66f, 0x1.4ab3d4p-121f, 0x1.16eb6cp-36f, 0x1.ffa48ap-42f, 0.0f,
     0x1.b61eeep-113f, 0.0f, 0.0f, 0x1.6fb648p-17f, 0.0f, 0.0f, 0x1.fb395ap-16f, 0.0f,
     0.0f, 0x1.9f6fa8p-122f, 0.0f, 0.0f, 0.0f, 0x1.2566b8p-16f, 0x1.a2948ap-36f,
     0x1.e2bdf6p-120f, 0.0f, 0x1.0406b8p-8f, 0.0f, 0.0f, 0.0f, 0x1.f78e98p-76f, 0.0f,
     0x1.ea08a6p-119f, 0x1.298e58p-123f, 0.0f, 0.0f, 0.0f, 0x1.863fbcp-58f, 0.0f,
     0x1.0d7076p-112f, 0.0f, 0x1.716e6ep-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a27c4ap-22f, 0x1.c3523ap-73f, 0x1.91a77ap-13f, 0x1.ff7cbcp-62f,
     0x1.b96a3ep-89f, 0.0f, 0.0f, 0.0f, 0x1.bb5e84p-14f, 0x1.701b7ep-11f,
     0x1.bfad9ep-12f, 0.0f, 0.0f, 0.0f, 0x1.74502p-122f, 0x1.c3fcbcp-13f, 0.0f,
     0x1.dcfcep-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ed6f14p-110f, 0x1.9a2366p-85f,
     0x1.b78cf4p-93f, 0x1.af51f8p-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eec274p-123f,
     0x1.3e6046p-89f, 0.0f, 0.0f, 0x1.216632p-10f, 0x1.2edab6p-87f, 0.0f, 0.0f, 0.0f,
     0x1.29b102p-125f, 0.0f, 0x1.d857ecp-84f, 0.0f, 0.0f, 0.0f, 0x1.ba33fap-31f,
     0x1.7128a8p-22f, 0x1.0172e4p-120f, 0x1.0ad796p-64f, 0.0f, 0x1.4b4d8cp-35f,
     0x1.559854p-40f, 0.0f, 0.0f, 0x1.6ea038p-80f, 0.0f, 0.0f, 0x1.d2c22ap-29f, 0.0f,
     0x1.6ca0b4p-59f, 0x1.2096f8p-97f, 0x1.3d687cp-85f, 0.0f, 0x1.72ec8ep-73f
};
static const float external_bench_wrapper_input_table_arg1[1001]  = {
     0x1.03b134p-118f, 0.0f, 0.0f, 0x1.663ba6p-64f, 0.0f, 0.0f, 0.0f,
     0x1.62f7b2p-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8113f2p-65f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bf3d16p-19f, 0.0f, 0x1.204a84p-121f, 0.0f, 0.0f, 0x1.30ba82p-15f, 0.0f, 0.0f,
     0x1.0e5dfep-109f, 0x1.9a95e2p-21f, 0x1.4fcfbp-124f, 0.0f, 0.0f, 0x1.a6dcdcp-2f,
     0.0f, 0.0f, 0x1.498046p-21f, 0x1.cbaca8p-51f, 0x1.734ec2p-12f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.332888p-62f, 0x1.18952ep-107f, 0.0f, 0.0f, 0x1.d8b22ap-22f,
     0x1.91d7f4p-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.99923p-103f, 0x1.75d6bp-50f,
     0x1.e5e9ap-68f, 0.0f, 0x1.9059aep-57f, 0x1.f26728p-63f, 0x1.ba9246p-118f,
     0x1.385d6ap-17f, 0x1.ec5decp-76f, 0.0f, 0x1.f3fff6p-25f, 0x1.1a708ap-14f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ade612p-56f, 0.0f, 0x1.69b406p-85f, 0.0f, 0x1.0d0ad8p-121f,
     0x1.7cda84p-5f, 0x1.30357ap-81f, 0x1.3687c4p-86f, 0x1.ceb612p-106f,
     0x1.6a62acp-82f, 0x1.1c568cp-116f, 0.0f, 0.0f, 0x1.4bb418p-72f, 0x1.44f24ep-109f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e05094p-91f, 0.0f, 0x1.8459d4p-85f,
     0x1.dda18cp-23f, 0x1.5f692cp-29f, 0.0f, 0x1.232eacp-42f, 0.0f, 0.0f,
     0x1.6b09dcp-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.39c094p-54f, 0.0f, 0.0f, 0.0f,
     0x1.8ec59ep-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9628c8p-79f, 0x1.61137p-124f, 0.0f,
     0x1.dad33ep-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0c3eacp-68f, 0.0f,
     0x1.960a4p-69f, 0.0f, 0x1.df47f6p-111f, 0.0f, 0.0f, 0x1.09eac4p-39f, 0.0f,
     0x1.7e24b8p-84f, 0x1.e16c76p-110f, 0x1.03a798p-59f, 0x1.d92c4p-36f, 0.0f, 0.0f,
     0x1.842f8ep-6f, 0.0f, 0x1.31f6bap-115f, 0.0f, 0.0f, 0x1.0e0138p-14f,
     0x1.bfda1cp-45f, 0x1.7d7e34p-77f, 0.0f, 0.0f, 0.0f, 0x1.8bf894p-105f,
     0x1.6ab576p-30f, 0.0f, 0.0f, 0x1.314ep-37f, 0.0f, 0x1.903d0ap-7f,
     0x1.e1f77ap-20f, 0.0f, 0x1.44388cp-110f, 0.0f, 0.0f, 0.0f, 0x1.3e7a62p-100f,
     0x1.481886p-15f, 0x1.816bbap-117f, 0x1.d5911p-44f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.41eebep-53f, 0x1.d9ac7cp-72f, 0.0f, 0x1.c1176cp-53f, 0.0f, 0x1.d01414p-66f,
     0x1.4d014ep-88f, 0x1.d7a562p-60f, 0.0f, 0.0f, 0x1.f5d518p-7f, 0x1.328ef8p-3f,
     0x1.332d86p-51f, 0x1.b409bp-123f, 0x1.3acafep-46f, 0x1.c039fep-109f,
     0x1.b4a904p-73f, 0x1.b26d16p-62f, 0.0f, 0x1.521122p-11f, 0x1.2e3e26p-116f,
     0x1.824bc2p-30f, 0x1.21917ep-64f, 0.0f, 0x1.7c4f8cp-89f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1326d8p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.4edd4p-33f, 0.0f,
     0x1.058c2p-100f, 0x1.6e7f44p-123f, 0x1.9aedbcp-7f, 0x1.c88b26p-54f, 0.0f, 0.0f,
     0x1.0309e8p-66f, 0x1.a7b96cp-62f, 0x1.c90e56p-93f, 0x1.39fbc2p-124f,
     0x1.cefd78p-7f, 0.0f, 0x1.0012f6p-1f, 0.0f, 0x1.d40834p-7f, 0.0f, 0.0f,
     0x1.410274p-43f, 0x1.b141ap-96f, 0x1.b89546p-9f, 0x1.6fe2f8p-61f,
     0x1.1bd86ep-73f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.4bae4p-52f, 0.0f, 0x1.7ea398p-87f,
     0x1.847b82p-74f, 0x1.9efac2p-33f, 0.0f, 0x1.72c108p-97f, 0.0f, 0x1.133d92p-111f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.26bdfp-113f, 0x1.96dbdp-28f, 0x1.e22292p-55f,
     0x1.59f162p-75f, 0x1.8d7c22p-58f, 0.0f, 0.0f, 0x1.db56dcp-75f, 0x1.783d32p-18f,
     0.0f, 0x1.4a0216p-65f, 0x1.1a25e4p-24f, 0x1.63a29ep-6f, 0x1.77c138p-48f, 0.0f,
     0x1.0f8f9cp-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5b3f9p-23f, 0x1.e4bdb4p-34f,
     0x1.eda1cp-48f, 0.0f, 0x1.6b9af4p-7f, 0x1.21fb44p-88f, 0x1.7255fap-30f,
     0x1.629c86p-42f, 0x1.48b534p-92f, 0.0f, 0x1.03a94ap-38f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.89154cp-116f, 0.0f, 0x1.9e17e2p-60f, 0x1.e0d5c4p-106f, 0x1.dc432cp-24f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.50b9b8p-81f, 0x1.48d4bep-85f, 0.0f,
     0x1.65fc3p-65f, 0.0f, 0.0f, 0x1.33c42p-60f, 0x1.30a8ep-99f, 0x1.bde072p-39f,
     0x1.95b894p-112f, 0.0f, 0x1.db7fdp-92f, 0x1.cfeecep-56f, 0x1.b4dd6ep-53f,
     0x1.6ba22p-13f, 0x1.8c90dcp-102f, 0x1.2e07cep-7f, 0.0f, 0.0f, 0.0f,
     0x1.874c16p-93f, 0.0f, 0x1.6ca47cp-41f, 0x1.8e6a84p-91f, 0x1.498af4p-102f,
     0x1.671c76p-112f, 0.0f, 0x1.5ffe6ap-72f, 0x1.ac3e7ep-91f, 0.0f, 0x1.0d0eaep-67f,
     0x1.21d6eap-85f, 0x1.80a27p-43f, 0x1.a9dffep-103f, 0x1.bb7338p-102f,
     0x1.32df86p-108f, 0.0f, 0.0f, 0x1.65309ep-92f, 0x1.6f1c2ap-93f, 0.0f, 0.0f, 0.0f,
     0x1.88b728p-41f, 0x1.5ea79cp-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6745a6p-85f, 0.0f, 0x1.955f46p-71f, 0x1.abeb4ap-14f, 0x1.e2be06p-83f,
     0x1.1e05b6p-43f, 0.0f, 0x1.576218p-14f, 0.0f, 0x1.779ae4p-72f, 0x1.8404a8p-86f,
     0.0f, 0.0f, 0.0f, 0x1.04cfdp-36f, 0x1.9fd1dap-41f, 0x1.817eb4p-103f,
     0x1.6f4feap-115f, 0.0f, 0.0f, 0x1.624cdap-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.1ecbb2p-86f, 0x1.6c9deap-39f, 0x1.5a163cp-109f,
     0x1.4b278ep-100f, 0x1.7c2d94p-55f, 0x1.113d26p-83f, 0x1.020a0ap-33f,
     0x1.a5ef5p-103f, 0x1.479ebap-82f, 0x1.3cdd86p-80f, 0.0f, 0x1.63a72ep-102f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.6f11dap-87f, 0.0f, 0.0f, 0.0f, 0x1.28aedep-74f, 0.0f,
     0x1.f74786p-124f, 0.0f, 0.0f, 0.0f, 0x1.8a3adcp-11f, 0.0f, 0.0f, 0x1.21b87cp-33f,
     0.0f, 0.0f, 0x1.6b1646p-66f, 0x1.8862eep-103f, 0.0f, 0.0f, 0x1.0d184ep-74f,
     0x1.79d606p-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7c0d24p-47f,
     0x1.6ad194p-59f, 0x1.9dec3ep-117f, 0x1.6cfe82p-113f, 0x1.e892a2p-125f,
     0x1.453f2cp-114f, 0x1.956ccp-84f, 0x1.ab51a2p-54f, 0x1.28d256p-34f,
     0x1.b0d39ep-102f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.a39364p-28f, 0x1.c2f704p-118f,
     0x1.1b0562p-82f, 0x1.126784p-4f, 0.0f, 0.0f, 0x1.f73ca2p-116f, 0x1.6e5d4ep-53f,
     0.0f, 0x1.b9ae98p-112f, 0.0f, 0x1.db4662p-80f, 0x1.baf0bp-62f, 0x1.05f05ap-15f,
     0.0f, 0.0f, 0.0f, 0x1.e32d52p-34f, 0x1.dea45ap-19f, 0x1.6caa9ep-75f,
     0x1.87240ep-115f, 0x1.3d87e6p-40f, 0.0f, 0.0f, 0.0f, 0x1.ad4ca4p-6f,
     0x1.bfa058p-66f, 0.0f, 0.0f, 0x1.79fb6p-25f, 0.0f, 0.0f, 0.0f, 0x1.0a3882p-25f,
     0x1.8108a2p-42f, 0.0f, 0x1.e60d9cp-125f, 0.0f, 0.0f, 0.0f, 0x1.26a6bep-20f, 0.0f,
     0x1.133fb2p-50f, 0x1.d6d276p-44f, 0.0f, 0x1.547f18p-21f, 0x1.c4e9a6p-58f,
     0x1.c23f62p-80f, 0x1.020a88p-66f, 0.0f, 0.0f, 0x1.e3455ap-77f, 0x1.56c30cp-61f,
     0x1.88b9f8p-1f, 0.0f, 0x1.6ffaf8p-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.40394ep-26f,
     0x1.c10764p-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a62c96p-90f,
     0x1.82bd58p-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4e7e5p-126f, 0.0f, 0x1.8ff4fp-104f,
     0.0f, 0x1.211e2cp-22f, 0.0f, 0x1.6f8618p-63f, 0.0f, 0x1.2a247ap-102f, 0.0f,
     0x1.2c0cfcp-32f, 0x1.570c44p-87f, 0x1.c0c92ep-49f, 0x1.fc0be8p-61f,
     0x1.1a690ap-24f, 0x1.2bf9c4p-36f, 0.0f, 0.0f, 0x1.627ab6p-57f, 0.0f,
     0x1.13066cp-7f, 0.0f, 0.0f, 0x1.2a10e6p-97f, 0x1.93f88ep-116f, 0x1.e4d9b6p-102f,
     0.0f, 0x1.a4111p-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.399cfep-42f, 0x1.20e424p-91f,
     0.0f, 0x1.8766bep-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f,
     0x1.f4fffap-31f, 0x1.739e64p-69f, 0x1.c01024p-60f, 0.0f, 0.0f, 0x1.c5756ap-120f,
     0x1.b72446p-117f, 0x1.eeabdep-47f, 0x1.90d2b8p-89f, 0.0f, 0x1.22298cp-39f,
     0x1.4ca5ep-42f, 0x1.a1ac7ap-108f, 0x1.88ba2ep-54f, 0.0f, 0x1.66be48p-15f, 0.0f,
     0.0f, 0x1.194148p-105f, 0.0f, 0.0f, 0x1.db790cp-37f, 0x1.e67ceep-66f, 0.0f, 0.0f,
     0x1.30f644p-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5ae218p-1f, 0.0f, 0.0f,
     0x1.e41316p-114f, 0x1.39625p-26f, 0.0f, 0x1.b03fe4p-63f, 0.0f, 0x1.7004e8p-53f,
     0.0f, 0x1.45179cp-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a1102cp-39f, 0x1.c20f3ep-2f,
     0x1.7cf564p-6f, 0x1.69755p-8f, 0x1.b55814p-17f, 0x1.ed8358p-100f, 0.0f,
     0x1.4f3d1cp-60f, 0.0f, 0.0f, 0x1.bbd73ap-19f, 0x1.d1211p-63f, 0.0f, 0.0f, 0.0f,
     0x1.2efa9cp-55f, 0x1.c2dd2cp-16f, 0x1.0f27a2p-21f, 0x1.63a696p-123f, 0.0f, 0.0f,
     0x1.1ac938p-10f, 0.0f, 0.0f, 0x1.2e3664p-10f, 0.0f, 0x1.a2e32ap-84f,
     0x1.6d0dfep-71f, 0.0f, 0x1.abcdfap-111f, 0.0f, 0x1.143dfep-12f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.249d3ap-23f, 0.0f, 0.0f, 0.0f, 0x1.4883c8p-113f, 0.0f, 0x1.2fd792p-13f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.9520e2p-118f, 0x1.d91feep-47f, 0x1.68cbb4p-121f,
     0.0f, 0x1.b04cp-108f, 0.0f, 0x1.b40028p-111f, 0.0f, 0x1.6477d4p-99f,
     0x1.bb85cap-81f, 0.0f, 0x1.6f70e6p-5f, 0.0f, 0x1.27d07ep-44f, 0.0f,
     0x1.8eb67p-125f, 0x1.21b0fep-1f, 0.0f, 0x1.851552p-32f, 0.0f, 0x1.cad6c2p-22f,
     0.0f, 0x1.b35802p-17f, 0x1.8fe79p-84f, 0x1.80e7d6p-109f, 0.0f, 0x1.44c65cp-77f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d08c38p-68f, 0x1.f38286p-68f, 0.0f,
     0x1.991316p-113f, 0x1.8e1722p-52f, 0x1.f984f6p-50f, 0x1.09e08ap-115f, 0.0f,
     0x1.f822d2p-85f, 0x1.ad3e3ap-52f, 0x1.144f2ep-28f, 0x1.729622p-123f, 0.0f, 0.0f,
     0x1.697852p-117f, 0.0f, 0x1.57476p-42f, 0x1.874cp-20f, 0x1.a6fedep-47f, 0.0f,
     0.0f, 0x1.7df51cp-123f, 0.0f, 0x1.deedb6p-121f, 0x1.8a864p-101f, 0.0f, 0.0f,
     0x1.f718fap-24f, 0.0f, 0.0f, 0x1.5b68dp-97f, 0.0f, 0x1.c7589ap-73f,
     0x1.23c312p-85f, 0.0f, 0.0f, 0x1.8d40f2p-112f, 0x1.8188f4p-95f, 0.0f,
     0x1.aa1188p-48f, 0.0f, 0x1.6307d8p-61f, 0x1.569742p-24f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.0e98eap-14f, 0.0f, 0x1.ddcc8p-1f, 0.0f, 0x1.cf8bb6p-66f,
     0.0f, 0x1.6adf8p-103f, 0.0f, 0.0f, 0x1.8e2344p-95f, 0x1.3f3dfep-123f, 0.0f,
     0x1.c67bfap-124f, 0x1.c82aa6p-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9c71e6p-97f,
     0x1.e710dap-87f, 0.0f, 0x1.a27dbap-122f, 0x1.ef732p-94f, 0x1.7a22aep-112f, 0.0f,
     0x1.396a56p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d37aaep-67f, 0.0f, 0.0f, 0x1.d131e8p-109f, 0.0f, 0x1.e2adacp-24f, 0.0f, 0.0f,
     0x1.5240bep-105f, 0x1.828f84p-87f, 0.0f, 0.0f, 0.0f, 0x1.dfa8a6p-3f,
     0x1.20d8ap-21f, 0x1.61b384p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.dcd79ep-11f, 0x1.84a1c8p-79f, 0x1.edddecp-66f, 0x1.1c15cep-118f,
     0x1.5c9c3p-1f, 0.0f, 0.0f, 0.0f, 0x1.2fea5ep-98f, 0x1.ead88cp-36f,
     0x1.65ee22p-64f, 0x1.c05bc2p-118f, 0x1.b8e874p-48f, 0x1.197b82p-39f,
     0x1.6b5426p-24f, 0x1.c81a46p-20f, 0x1.a28984p-55f, 0.0f, 0.0f, 0.0f,
     0x1.2a5934p-97f, 0x1.0f7b74p-27f, 0.0f, 0.0f, 0x1.d77baep-78f, 0x1.537ac4p-56f,
     0x1.cb2eb4p-64f, 0x1.e4c50ep-15f, 0x1.df69c2p-98f, 0x1.77744ep-7f, 0.0f,
     0x1.660db8p-112f, 0x1.84f6dap-114f, 0x1.82ce3p-84f, 0.0f, 0x1.78e15p-67f,
     0x1.3b3d0cp-95f, 0.0f, 0.0f, 0.0f, 0x1.7ee552p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b07f3cp-105f, 0x1.8a9e8p-25f, 0x1.790a64p-33f, 0x1.55e3ccp-115f, 0.0f,
     0.0f, 0.0f, 0x1.c2eb1p-54f, 0.0f, 0x1.87ec82p-74f, 0x1.e62c8cp-76f,
     0x1.f092c4p-65f, 0.0f, 0.0f, 0.0f, 0x1.ff0048p-70f, 0x1.838d7ap-9f,
     0x1.d362acp-22f, 0.0f, 0.0f, 0.0f, 0x1.95789ep-108f, 0.0f, 0.0f, 0.0f,
     0x1.207382p-81f, 0.0f, 0x1.f8ba7ap-120f, 0x1.8d19a2p-23f, 0.0f, 0x1.63ed6ap-7f,
     0.0f, 0.0f, 0x1.d5d4e6p-12f, 0x1.f8ef58p-48f, 0.0f, 0x1.3415dep-103f, 0x1p0f,
     0x1.c14d24p-67f, 0.0f, 0.0f, 0x1.9149cep-60f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5c3d66p-73f, 0.0f, 0.0f, 0x1.5a7c72p-53f, 0x1.d2bc8p-46f, 0.0f,
     0x1.88cf9ep-115f, 0x1.917be2p-61f, 0.0f, 0x1.f44fd6p-60f, 0.0f, 0x1.90046ap-57f,
     0x1.d1562ap-78f, 0x1.ad9c4ap-61f, 0.0f, 0x1.48059p-13f, 0x1.7fc3ep-80f, 0.0f,
     0x1.6ca3e4p-7f, 0x1.a5edbp-18f, 0x1.9b7524p-93f, 0x1.2386e2p-2f, 0.0f, 0.0f,
     0.0f, 0x1.66c758p-49f, 0.0f, 0x1.52cf46p-105f, 0x1.a6ed1p-87f, 0x1.c0d3bcp-6f,
     0.0f, 0x1.5ee7acp-1f, 0.0f, 0x1.a268d6p-105f, 0x1.4eb05p-122f, 0x1.19ccd2p-112f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.328298p-64f, 0x1.5afef6p-59f, 0.0f, 0.0f,
     0x1.a29e78p-92f, 0x1.d21b8p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.130dacp-82f, 0.0f, 0x1.d1db9ap-93f, 0x1.43b93ep-53f, 0x1.dc5e2p-53f, 0.0f,
     0.0f, 0x1.169074p-125f, 0.0f, 0.0f, 0.0f, 0x1.4ad58p-110f, 0x1.71e576p-31f,
     0x1.101e22p-85f, 0x1.f3b728p-11f, 0x1.56f3bp-11f, 0.0f, 0x1.2375dep-2f,
     0x1.69d602p-125f, 0.0f, 0x1.6a003cp-6f, 0.0f, 0.0f, 0x1.4a4b82p-75f, 0.0f,
     0x1.d6dd6cp-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7d9f48p-42f, 0.0f, 0.0f, 0.0f,
     0x1.7f3966p-71f, 0x1.902848p-29f, 0x1.cbefb4p-121f, 0.0f, 0.0f, 0x1.3c8454p-120f,
     0.0f, 0x1.3d6f6cp-56f, 0x1.5f222p-95f, 0.0f, 0.0f, 0x1.9c82acp-109f, 0.0f,
     0x1.d0518ep-3f, 0.0f, 0x1.96fc2cp-8f, 0x1.def46ep-35f, 0.0f, 0.0f, 0.0f,
     0x1.b75294p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0c04e2p-83f, 0x1.3c243cp-28f,
     0x1.3ad67p-56f, 0.0f, 0.0f, 0.0f, 0x1.87aeeep-121f, 0.0f, 0x1.a675b2p-117f, 0.0f,
     0.0f, 0x1.562b76p-90f, 0.0f, 0x1.9ba1c6p-20f, 0.0f, 0.0f, 0x1.5c481ap-47f
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
            tmp2 = Sleef_finz_copysignf1_purecfma(tmp0, tmp1);
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
    printf("Sleef_finz_copysignf1_purecfma %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_copysignf1_purecfma bench acc %a\n", global_bench_acc);
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
