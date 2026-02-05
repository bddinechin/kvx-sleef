/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_cbrtf1_u10purecfma.c --function \
 *     Sleef_cbrtf1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.885142p-82f, 0.0f, 0x1.394fc8p-43f, 0.0f, 0.0f, 0x1.28246ep-80f,
     0x1.34c37cp-80f, 0.0f, 0x1.0c394ap-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fbadd2p-14f,
     0x1.14b31ep-106f, 0x1.203328p-108f, 0x1.e43c78p-15f, 0x1.bd68cep-42f, 0.0f,
     0x1.b67a96p-35f, 0x1.81a6e2p-124f, 0.0f, 0x1.66a236p-18f, 0.0f, 0x1.069a22p-28f,
     0x1.b9c978p-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bab862p-17f, 0x1.806f8ep-45f, 0.0f,
     0x1.005d06p-16f, 0.0f, 0x1.9a0d36p-113f, 0.0f, 0x1.3009ap-21f, 0.0f,
     0x1.d40572p-80f, 0x1.ae9d22p-110f, 0.0f, 0x1.de3eb8p-124f, 0.0f, 0.0f,
     0x1.b31652p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e2287cp-5f, 0x1.7fbc5ap-78f,
     0x1.24ef26p-8f, 0x1.649078p-86f, 0.0f, 0x1.619a6ep-57f, 0.0f, 0x1.2e25cp-32f,
     0.0f, 0x1.6cd1ap-27f, 0x1.3fb682p-63f, 0.0f, 0x1.06b17cp-5f, 0x1.feabb6p-70f,
     0x1.65faf8p-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a0d38ep-10f, 0x1.ec3992p-42f,
     0x1.aeabb8p-12f, 0x1.404bc4p-51f, 0x1.9cd8a2p-61f, 0x1.1e36bcp-47f,
     0x1.cb39b8p-21f, 0.0f, 0x1.493daap-50f, 0x1.6d8274p-44f, 0.0f, 0.0f,
     0x1.c0b71cp-104f, 0.0f, 0x1.a280e8p-123f, 0.0f, 0.0f, 0x1.ff0d5p-112f,
     0x1.60a93ep-93f, 0x1.c9851ep-37f, 0.0f, 0.0f, 0x1.3e2eaap-34f, 0.0f, 0.0f, 0.0f,
     0x1.2470f4p-44f, 0x1.14269p-64f, 0.0f, 0x1.636c96p-93f, 0x1.89846p-120f, 0.0f,
     0.0f, 0x1.6bfbd2p-112f, 0.0f, 0.0f, 0.0f, 0x1.9ba2d6p-29f, 0.0f,
     0x1.b959b4p-114f, 0x1.69df34p-103f, 0x1.e1550ap-124f, 0x1.9ccb3ep-34f,
     0x1.b048fep-54f, 0.0f, 0.0f, 0x1.38b4bap-96f, 0x1.7dce8cp-1f, 0x1.e1fddep-106f,
     0.0f, 0x1.6c5758p-60f, 0x1.717a38p-15f, 0x1.fe5eb4p-74f, 0x1.bb0486p-88f,
     0x1.b5bedcp-80f, 0.0f, 0x1.2cd8cap-102f, 0.0f, 0x1.ab2ca8p-1f, 0x1.9820dap-28f,
     0x1.5e7d08p-111f, 0.0f, 0x1.67a216p-101f, 0.0f, 0x1.aaef9ep-9f, 0x1.4e77f6p-35f,
     0x1.b07d68p-33f, 0x1.da63bp-74f, 0x1.93fd48p-91f, 0x1.3bcd7ap-26f, 0.0f,
     0x1.b6d8a4p-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.15c1fep-66f, 0.0f,
     0.0f, 0.0f, 0x1.229decp-110f, 0.0f, 0x1.f12f78p-44f, 0x1.9a4ff8p-116f, 0.0f,
     0x1.bfbcfp-16f, 0x1.485baap-107f, 0x1.055702p-122f, 0.0f, 0x1.32598cp-55f, 0.0f,
     0x1.47405p-14f, 0x1.bf8c5cp-26f, 0.0f, 0.0f, 0.0f, 0x1.33fe6cp-76f,
     0x1.6ca6fep-82f, 0x1.d7a38cp-31f, 0.0f, 0.0f, 0x1.80434ep-125f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.67b03ap-66f, 0x1.c7b422p-10f, 0x1.20d3bp-100f,
     0x1.1d883ep-3f, 0.0f, 0.0f, 0.0f, 0x1.ef530ap-124f, 0x1.76ac64p-105f,
     0x1.117a6p-125f, 0.0f, 0.0f, 0x1.8443dap-89f, 0.0f, 0.0f, 0x1.36eb9ep-5f, 0.0f,
     0x1.8f07fcp-63f, 0.0f, 0x1.1a769cp-58f, 0x1.2d987ep-7f, 0x1.0a9b0ep-94f,
     0x1.c3517ap-41f, 0.0f, 0.0f, 0x1.58935cp-102f, 0x1.8be614p-19f, 0x1.454a54p-68f,
     0.0f, 0x1.e71638p-84f, 0x1.5e4052p-122f, 0.0f, 0x1.d4b76ep-45f, 0.0f,
     0x1.bb55aap-41f, 0x1.0cf4b2p-28f, 0.0f, 0x1.b969bcp-22f, 0x1.32f58p-47f,
     0x1.149836p-72f, 0x1.84ad48p-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e95372p-116f, 0.0f,
     0.0f, 0x1.2f7a78p-114f, 0x1.ada31ap-14f, 0x1.89bda4p-10f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.082202p-55f, 0.0f, 0.0f, 0.0f, 0x1.a4fbap-84f, 0.0f, 0.0f, 0.0f,
     0x1.b91c7cp-107f, 0.0f, 0.0f, 0.0f, 0x1.5b716ap-85f, 0.0f, 0x1.73df12p-90f,
     0x1.6e963ep-18f, 0x1.5662dp-79f, 0.0f, 0.0f, 0x1.0cbdb2p-20f, 0x1.1129p-70f,
     0.0f, 0.0f, 0.0f, 0x1.5bbfeap-59f, 0x1.8abbbcp-7f, 0.0f, 0.0f, 0.0f,
     0x1.26c8cap-103f, 0.0f, 0.0f, 0.0f, 0x1.6765a4p-121f, 0.0f, 0x1.57d99ep-27f,
     0.0f, 0x1.e5c508p-56f, 0.0f, 0x1.88faa8p-70f, 0.0f, 0.0f, 0x1.679f62p-119f, 0.0f,
     0x1.5a06d6p-55f, 0.0f, 0x1.2a0aa6p-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.584544p-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4017d2p-27f, 0.0f,
     0x1.ff31ap-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1a81d2p-67f, 0x1.d1ef4cp-29f, 0.0f,
     0x1.7512a8p-86f, 0x1.fe2ap-88f, 0x1.8c98aap-110f, 0x1.58056p-74f,
     0x1.4d40f2p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.76e8a8p-63f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.7500c6p-54f, 0.0f, 0x1.c88c54p-108f, 0x1.c49c4ep-91f, 0x1.a3c79p-72f,
     0x1.efc5d2p-120f, 0.0f, 0x1.3f2028p-94f, 0.0f, 0x1.d4242ep-77f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b0a916p-35f, 0x1.539814p-79f, 0x1.2ddd04p-66f, 0.0f, 0.0f,
     0x1.e5a646p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9203d6p-62f, 0.0f, 0x1.fd91cep-39f,
     0.0f, 0.0f, 0.0f, 0x1.33110ep-125f, 0.0f, 0.0f, 0.0f, 0x1.d17c26p-8f, 0.0f,
     0x1.79343ep-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.29f53cp-27f, 0.0f, 0x1.907a58p-93f,
     0x1.60f88cp-71f, 0x1.a7c51ap-87f, 0x1.1a6b16p-72f, 0.0f, 0x1.4d02bcp-34f,
     0x1.be434ep-91f, 0.0f, 0.0f, 0x1.f779bcp-2f, 0x1.8b21b2p-48f, 0.0f,
     0x1.8870aap-88f, 0.0f, 0.0f, 0x1.19d2eap-71f, 0x1.8ed796p-116f, 0.0f, 0.0f,
     0x1.b189d4p-123f, 0.0f, 0.0f, 0x1.84bf7cp-45f, 0.0f, 0x1.7c30aap-85f, 0.0f, 0.0f,
     0x1.464688p-24f, 0x1.ce2bf2p-43f, 0x1.06063ap-68f, 0.0f, 0x1.a8e35ap-43f,
     0x1.2f15aep-58f, 0x1.d637a4p-115f, 0.0f, 0.0f, 0x1.aaad6ap-77f, 0x1.ef16fp-88f,
     0x1.44d864p-123f, 0x1.104dcep-68f, 0x1.3586aap-125f, 0x1.996bdep-93f, 0.0f,
     0x1.d37a9cp-58f, 0x1.81013ep-32f, 0x1.1f354cp-74f, 0.0f, 0.0f, 0.0f,
     0x1.694726p-39f, 0.0f, 0x1.811b48p-59f, 0x1.cc26cap-100f, 0.0f, 0x1.8990b6p-104f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.958e36p-98f, 0.0f,
     0x1.f28e1ep-35f, 0x1.79fd2ep-1f, 0.0f, 0x1.9308c8p-61f, 0.0f, 0x1.301466p-14f,
     0.0f, 0.0f, 0.0f, 0x1.189c38p-77f, 0.0f, 0x1.77bce2p-52f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9cd894p-96f, 0.0f, 0x1.02ea7cp-85f, 0.0f, 0.0f, 0x1p0f, 0x1.0db0a8p-1f, 0.0f,
     0x1.c09a8cp-12f, 0x1.25fbb4p-4f, 0.0f, 0.0f, 0x1.1029eap-105f, 0.0f,
     0x1.6bd70ep-71f, 0.0f, 0.0f, 0.0f, 0x1.b9de8ep-19f, 0x1.ea5f02p-15f,
     0x1.f24218p-70f, 0x1.de5d3ap-125f, 0x1.619b7ap-36f, 0x1.82891ap-108f, 0.0f,
     0x1.e89e68p-2f, 0.0f, 0x1.cef46p-40f, 0x1.cc931p-13f, 0x1.941802p-84f,
     0x1.a22b66p-45f, 0x1.54437ap-109f, 0.0f, 0x1.d25186p-20f, 0.0f, 0x1.35a9f6p-37f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.62f75p-22f, 0x1.b3bb28p-65f,
     0x1.c629d2p-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f169cap-4f, 0x1.3e4484p-34f, 0.0f,
     0x1.c59d78p-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f6528p-29f, 0.0f, 0.0f, 0.0f,
     0x1.fe562ap-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.79507p-41f,
     0x1.75e81cp-47f, 0.0f, 0x1.df68cep-35f, 0x1.117522p-10f, 0x1.5bf24ep-97f,
     0x1.60951ap-71f, 0x1.5fee56p-117f, 0x1.946a9ep-24f, 0x1.ae1a8p-13f, 0.0f, 0.0f,
     0x1.14ceep-78f, 0x1.b9ff32p-54f, 0x1.c49c54p-102f, 0.0f, 0x1.24bf6ap-80f,
     0x1.8a876cp-43f, 0x1.d3575p-78f, 0x1.0d20b8p-19f, 0.0f, 0x1.b2bdd4p-72f, 0.0f,
     0.0f, 0.0f, 0x1.ce1726p-89f, 0x1.9ea582p-2f, 0.0f, 0x1.9139aap-4f, 0.0f, 0.0f,
     0.0f, 0x1.f3ec3ep-45f, 0.0f, 0x1.7e505cp-9f, 0x1.aba71p-98f, 0.0f, 0.0f,
     0x1.45495p-112f, 0.0f, 0.0f, 0.0f, 0x1.e36114p-70f, 0.0f, 0x1.b2f164p-20f, 0.0f,
     0.0f, 0x1.9b5b4ap-30f, 0.0f, 0.0f, 0x1.ff6842p-33f, 0x1.3de9fap-114f, 0.0f, 0.0f,
     0.0f, 0x1.263bb6p-113f, 0x1.0807fap-23f, 0x1.b33724p-115f, 0x1.cf39eep-13f, 0.0f,
     0x1.86d448p-87f, 0.0f, 0x1.559bd2p-61f, 0x1.767316p-126f, 0.0f, 0x1.d924acp-57f,
     0x1.538e2ap-57f, 0.0f, 0x1.4f845ep-86f, 0.0f, 0x1.56f1e4p-82f, 0.0f,
     0x1.391282p-8f, 0x1.6673c6p-119f, 0.0f, 0.0f, 0.0f, 0x1.87a262p-25f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.dc8052p-112f, 0x1.c08666p-93f, 0x1.94e1d2p-69f,
     0x1.e283fcp-10f, 0.0f, 0x1.2b5f44p-72f, 0.0f, 0x1.b5922cp-85f, 0x1.206c8cp-32f,
     0x1.01bfacp-31f, 0x1.79ee74p-1f, 0x1.d65714p-84f, 0x1.09751ep-92f, 0.0f,
     0x1.28870ap-1f, 0.0f, 0x1.55025p-98f, 0x1.015c68p-26f, 0.0f, 0.0f,
     0x1.237b9p-66f, 0x1.5301fcp-62f, 0x1.9e74e2p-39f, 0.0f, 0.0f, 0x1.0ed676p-11f,
     0.0f, 0.0f, 0x1.fc0d2ap-53f, 0.0f, 0x1.428f3p-108f, 0x1.33fab2p-104f,
     0x1.383adap-114f, 0x1.a2d26cp-89f, 0x1.5305d8p-21f, 0x1.07d818p-38f, 0.0f,
     0x1.4b2c0ep-40f, 0.0f, 0.0f, 0x1.f0fa26p-73f, 0.0f, 0x1.3dc42p-49f,
     0x1.54024ep-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0190e4p-51f,
     0x1.33ad48p-92f, 0.0f, 0x1.5ff388p-17f, 0x1.c57bdap-54f, 0x1.758414p-49f,
     0x1.318d6ap-26f, 0x1.fed3dep-111f, 0x1.1be4aap-53f, 0x1.16f156p-102f, 0.0f,
     0x1.6ea2dap-100f, 0x1.63420ap-92f, 0.0f, 0.0f, 0x1.1c67f2p-93f, 0x1.e21d3cp-4f,
     0x1.79d00ep-121f, 0.0f, 0x1.98c3a2p-45f, 0.0f, 0.0f, 0.0f, 0x1.eb0434p-123f,
     0x1.103fd2p-30f, 0.0f, 0.0f, 0x1.44332ep-56f, 0x1.f0e9p-74f, 0.0f, 0.0f, 0.0f,
     0x1.6b1e6ap-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f9c31cp-68f,
     0x1.265bf2p-28f, 0x1.f555bp-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f91f2cp-21f,
     0x1.ad510ap-98f, 0x1.bb802p-96f, 0x1.fa023p-30f, 0.0f, 0x1.a2086p-23f,
     0x1.f88732p-84f, 0x1.534844p-81f, 0x1.d0cd56p-43f, 0x1.e4a2ecp-11f, 0.0f,
     0x1.eec1a6p-104f, 0x1.60eff4p-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0f0924p-7f,
     0x1.16236ap-104f, 0x1.4a8216p-70f, 0x1.432138p-123f, 0x1.4bed28p-49f, 0.0f,
     0x1.c48b04p-100f, 0.0f, 0x1.0114p-8f, 0.0f, 0.0f, 0x1.ab2052p-45f, 0.0f, 0.0f,
     0x1.f7c1bcp-126f, 0.0f, 0x1.dcdd44p-81f, 0x1.4c4ec8p-19f, 0x1.0a61a8p-121f, 0.0f,
     0x1.a01808p-62f, 0x1.62819ap-99f, 0.0f, 0x1.64e5aap-97f, 0x1.2b0b0ap-48f,
     0x1.e3bc0cp-51f, 0x1.487beep-13f, 0x1.f5aa64p-24f, 0.0f, 0.0f, 0.0f,
     0x1.8873d8p-96f, 0x1.857a1ap-76f, 0x1.625028p-53f, 0.0f, 0.0f, 0.0f,
     0x1.edc67p-80f, 0x1.f7ddb2p-121f, 0x1.debf62p-80f, 0.0f, 0x1.e33ebap-89f, 0.0f,
     0.0f, 0x1.1a9a4ep-102f, 0.0f, 0x1.6b7302p-96f, 0x1.bde3e8p-29f, 0.0f, 0.0f, 0.0f,
     0x1.8ec34p-53f, 0.0f, 0.0f, 0x1.75e872p-117f, 0.0f, 0.0f, 0x1.1fa21ep-41f,
     0x1.7a7eb2p-73f, 0x1.2bdd1p-1f, 0.0f, 0.0f, 0x1.6258cep-100f, 0.0f, 0.0f,
     0x1.e4f9d6p-13f, 0x1.dc90ccp-97f, 0x1.face2ap-9f, 0x1.61488ep-67f, 0.0f,
     0x1.7fd3cap-76f, 0.0f, 0.0f, 0.0f, 0x1.42ba7p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.fcb5dep-44f, 0.0f, 0x1.141888p-6f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1964bep-24f, 0x1.6317fcp-92f, 0x1.15d5a8p-80f, 0x1.a9fac4p-21f, 0.0f, 0.0f,
     0x1.5bd758p-46f, 0.0f, 0x1.49ab5ap-76f, 0.0f, 0x1.66c82p-16f, 0.0f,
     0x1.8b0e56p-56f, 0.0f, 0x1.519d36p-25f, 0x1.448ddep-21f, 0.0f, 0x1.5cb806p-60f,
     0.0f, 0.0f, 0.0f, 0x1.e187a2p-125f, 0x1.437d0cp-69f, 0x1.4966f6p-67f,
     0x1.909b46p-21f, 0.0f, 0.0f, 0x1.d1a866p-15f, 0.0f, 0.0f, 0x1.b2ddaap-71f,
     0x1.67f0a6p-47f, 0x1.4dd5f6p-121f, 0.0f, 0x1.f5b0cp-114f, 0x1.e1c9p-82f,
     0x1.b4d306p-27f, 0x1.70f36p-112f, 0x1.19283cp-118f, 0x1.19599p-41f,
     0x1.c9b64p-62f, 0.0f, 0x1.21478p-95f, 0.0f, 0.0f, 0x1.ba595cp-54f,
     0x1.5e7c4ep-67f, 0.0f, 0x1.9ac4dap-40f, 0x1.e795d4p-8f, 0.0f, 0.0f, 0.0f,
     0x1.c9786ap-77f, 0x1.8f7368p-33f, 0x1.2deedep-15f, 0x1.c87cc8p-120f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.46463ap-124f, 0.0f, 0x1.238c84p-21f, 0x1.025648p-28f, 0.0f,
     0x1.bb3894p-34f, 0x1.13b7b6p-26f, 0x1.c7dcc4p-86f, 0.0f, 0.0f, 0.0f,
     0x1.aed33cp-10f, 0.0f, 0x1.3846b4p-79f, 0x1.5cca84p-13f, 0.0f, 0.0f,
     0x1.cc4a5ep-77f, 0.0f, 0.0f, 0x1.ec5df2p-56f, 0.0f, 0x1.ceb186p-117f, 0.0f, 0.0f,
     0x1.0377a4p-63f, 0x1.350deap-31f, 0x1.c8ff8cp-14f, 0.0f, 0x1.5fd2f4p-105f,
     0x1.5a5604p-123f, 0x1.f7914ap-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6ade7ap-10f,
     0.0f, 0x1.8cf90cp-115f, 0.0f, 0.0f, 0.0f, 0x1.9642ap-125f, 0.0f, 0x1.f052e2p-68f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.28b57cp-10f, 0.0f, 0x1.2d0da2p-29f, 0x1.b3dcaap-103f,
     0x1.d17e0ap-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7b3b02p-118f, 0.0f,
     0x1.128884p-113f, 0.0f, 0.0f, 0x1.7cecd4p-94f, 0.0f, 0x1.47d21ap-122f,
     0x1.781f08p-26f, 0x1.dbd3c4p-126f, 0x1.24b1dp-69f, 0.0f, 0x1.0de974p-7f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d94f98p-86f, 0.0f, 0x1.f4ed7ep-14f,
     0x1.87f332p-63f, 0x1p0f, 0.0f, 0.0f, 0x1.030ebcp-12f, 0.0f, 0.0f,
     0x1.0bf6bp-116f, 0x1.664aa6p-84f, 0.0f, 0x1.d63e6p-1f, 0x1.727414p-80f, 0.0f,
     0.0f, 0x1.d15102p-82f, 0x1.76055p-22f, 0x1.2201f2p-18f, 0.0f, 0x1.221df6p-64f,
     0x1.facd88p-77f, 0.0f, 0.0f, 0.0f, 0x1.9c69fcp-22f, 0.0f, 0.0f, 0x1.f99782p-27f,
     0.0f, 0.0f, 0x1.4ea3ep-8f, 0x1.18a6bcp-24f, 0x1.545c0cp-67f, 0x1.815ceap-56f,
     0x1.245b3cp-35f, 0.0f, 0.0f, 0x1.e92d82p-54f, 0x1.7b3d6cp-6f, 0x1.ead71ap-58f,
     0x1.cd61bp-43f, 0x1.7b5d44p-42f, 0x1.ed8274p-41f, 0x1.8cc64cp-45f, 0.0f,
     0x1.118dd8p-20f, 0.0f, 0.0f, 0.0f, 0x1.0f34dcp-58f, 0.0f, 0x1.f1f11cp-89f,
     0x1.fddefcp-93f, 0.0f, 0x1.e43d94p-56f, 0x1.6ad84ep-46f, 0x1.6b1dcep-90f,
     0x1.d4cc78p-80f
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
            tmp1 = Sleef_cbrtf1_u10purecfma(tmp0);
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
    printf("Sleef_cbrtf1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_cbrtf1_u10purecfma bench acc %a\n", global_bench_acc);
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
