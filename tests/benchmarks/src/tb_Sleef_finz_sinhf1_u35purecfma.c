/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sinhf1_u35purecfma.c --function \
 *     Sleef_finz_sinhf1_u35purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --bench --no-embedded-bin --target kv3
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
     0x1.96d35p-101f, 0.0f, 0.0f, 0x1.eb1f02p-22f, 0.0f, 0x1.d4263p-105f,
     0x1.599988p-114f, 0x1.4a9884p-19f, 0.0f, 0x1.11b692p-77f, 0x1.8a6432p-36f,
     0x1.8a8de4p-12f, 0x1.efff06p-16f, 0.0f, 0.0f, 0x1.f85b6cp-112f, 0.0f,
     0x1.11230ap-61f, 0.0f, 0.0f, 0x1.c4211cp-60f, 0x1.8e65b4p-125f, 0.0f, 0.0f,
     0x1.490334p-29f, 0x1.1629fap-35f, 0.0f, 0x1.5f648cp-44f, 0x1.84208ep-108f, 0.0f,
     0x1.f2e348p-114f, 0x1.e745c2p-98f, 0x1.e89c66p-122f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4724c4p-66f, 0x1.364a5cp-96f, 0x1.5d1474p-18f, 0.0f, 0x1.7a7b36p-5f, 0.0f,
     0.0f, 0x1.9aa808p-118f, 0.0f, 0.0f, 0x1.6b083ap-91f, 0.0f, 0x1.de5748p-75f,
     0x1.828b42p-111f, 0.0f, 0x1.0aba6cp-115f, 0x1.d38deap-67f, 0x1.03b696p-2f, 0.0f,
     0x1.3dbd3cp-52f, 0.0f, 0.0f, 0.0f, 0x1.7721ep-42f, 0x1.48ea36p-19f, 0.0f, 0.0f,
     0.0f, 0x1.6a06eap-72f, 0x1.666b7cp-62f, 0.0f, 0.0f, 0x1.933f1cp-4f,
     0x1.d05beap-82f, 0x1.16797ep-33f, 0.0f, 0.0f, 0x1.6c64d6p-30f, 0.0f,
     0x1.2350d4p-63f, 0x1.89818cp-73f, 0.0f, 0.0f, 0.0f, 0x1.bb807ep-70f,
     0x1.9943eep-58f, 0x1.44766p-119f, 0.0f, 0x1.120ad4p-124f, 0.0f, 0x1.5f9cdcp-84f,
     0.0f, 0x1.85cac4p-42f, 0x1.78e7bcp-88f, 0x1.5bac9cp-80f, 0x1.977568p-52f, 0.0f,
     0x1.9d9c8ep-87f, 0x1.ec1fa4p-71f, 0x1.0af8d2p-80f, 0x1.4267p-103f, 0.0f, 0.0f,
     0.0f, 0x1.47338cp-40f, 0.0f, 0x1.4895ap-58f, 0x1.2c9edep-81f, 0x1.cce2d8p-28f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.621c2ap-16f, 0.0f, 0x1.7b47f2p-11f, 0x1.a02cd4p-63f,
     0x1.18976p-112f, 0x1.7a2e96p-89f, 0.0f, 0.0f, 0x1.fbda88p-77f, 0.0f,
     0x1.23cep-95f, 0x1.350cf8p-76f, 0x1.d2e702p-89f, 0x1.2c3b6ep-103f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.15478ep-80f, 0.0f, 0.0f, 0x1.508e02p-32f, 0.0f, 0x1.5e92b4p-21f,
     0.0f, 0x1.2ca116p-70f, 0x1.0f7996p-25f, 0x1.54643p-111f, 0.0f, 0.0f, 0.0f,
     0x1.4303e2p-8f, 0.0f, 0.0f, 0.0f, 0x1.5e1c34p-53f, 0.0f, 0.0f, 0x1.884fdep-99f,
     0.0f, 0.0f, 0x1.534cbcp-38f, 0x1.37425ap-7f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.967fep-74f, 0x1.e20f8p-22f, 0.0f, 0x1.d80f9cp-106f, 0x1.d38b2p-27f,
     0x1.240a54p-21f, 0.0f, 0.0f, 0x1.f984d8p-7f, 0x1.51966ap-113f, 0.0f,
     0x1.dfe944p-79f, 0.0f, 0x1p0f, 0.0f, 0x1.664cbcp-75f, 0.0f, 0x1.b578acp-30f,
     0x1.4c0704p-112f, 0.0f, 0.0f, 0x1.8944c2p-8f, 0.0f, 0.0f, 0x1.4a7988p-96f, 0.0f,
     0x1.fec8d8p-49f, 0.0f, 0x1.d02b8ep-64f, 0x1.37321p-53f, 0.0f, 0x1.974a52p-31f,
     0x1.215d6p-122f, 0.0f, 0.0f, 0x1.6079fap-90f, 0x1.951d08p-25f, 0x1.af22ap-98f,
     0x1.993f3p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c8bffcp-9f, 0x1.bf7964p-29f,
     0.0f, 0x1.dbcc1ep-103f, 0x1.aba1c6p-101f, 0.0f, 0x1.2cc246p-46f, 0.0f, 0.0f,
     0x1.5f768cp-82f, 0.0f, 0.0f, 0x1.b2638ep-90f, 0.0f, 0x1.d99bbap-69f,
     0x1.5215a8p-31f, 0x1.5220ecp-104f, 0x1.2dd3fap-70f, 0.0f, 0x1.840facp-47f,
     0x1.30ccf2p-72f, 0.0f, 0x1.67cebcp-13f, 0x1.8bc592p-43f, 0x1.fd5f8ap-110f, 0.0f,
     0.0f, 0x1.2e0dfcp-50f, 0.0f, 0.0f, 0x1.222e82p-54f, 0.0f, 0.0f, 0x1.036734p-11f,
     0x1.7450f8p-2f, 0.0f, 0x1.c1972ep-92f, 0.0f, 0x1.b59d4p-25f, 0x1.8c1804p-88f,
     0x1.58f74cp-71f, 0.0f, 0x1.82910ap-116f, 0.0f, 0.0f, 0.0f, 0x1.4658dap-88f, 0.0f,
     0.0f, 0.0f, 0x1.ee1748p-41f, 0x1.7a1a8ap-77f, 0x1.11587ep-13f, 0x1.e5f54ep-68f,
     0x1.6e1eap-1f, 0x1.55d22ep-95f, 0.0f, 0x1.7e2a8ep-97f, 0.0f, 0x1.e4164ep-88f,
     0x1.484bd8p-91f, 0.0f, 0x1.94c04cp-78f, 0.0f, 0x1.75a40ep-71f, 0.0f,
     0x1.58af8ap-33f, 0x1.2eb0f8p-30f, 0.0f, 0.0f, 0.0f, 0x1.3e5e0ep-87f, 0.0f,
     0x1.a42148p-2f, 0x1.8201bcp-125f, 0x1.59c2c8p-67f, 0x1.5138ecp-16f, 0.0f, 0.0f,
     0.0f, 0x1.c89a96p-47f, 0.0f, 0.0f, 0x1.07d556p-100f, 0x1.69d77cp-102f, 0.0f,
     0.0f, 0x1.fb3d5p-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.11bf88p-93f, 0x1.f48cd8p-41f,
     0x1.4bc64ep-32f, 0x1.8fd29ep-51f, 0x1.6f7fbap-50f, 0.0f, 0.0f, 0x1.a2a7dp-92f,
     0x1.7b395ep-98f, 0.0f, 0x1.b4f4bap-11f, 0x1.e9dbd6p-78f, 0.0f, 0.0f,
     0x1.195f5ap-39f, 0x1.77c324p-122f, 0x1.15b80ap-68f, 0x1.c7487ap-43f,
     0x1.6ca78ap-94f, 0x1.d87292p-72f, 0.0f, 0.0f, 0x1.d8dc26p-125f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.969ap-66f, 0x1.a8073ep-65f, 0x1.b0ebcp-61f, 0x1.c22b1ep-95f,
     0.0f, 0x1.d5d58p-88f, 0.0f, 0x1.5f669cp-120f, 0x1.e22054p-3f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.277p-69f, 0.0f, 0.0f, 0.0f, 0x1.b5964ep-24f, 0x1.9c6cc2p-119f,
     0x1.29a806p-75f, 0.0f, 0x1.49e356p-11f, 0x1.4daed8p-31f, 0.0f, 0x1.f590d8p-2f,
     0x1.637556p-53f, 0x1.e283cp-1f, 0.0f, 0x1.45d3fp-85f, 0x1.7aa41cp-80f, 0.0f,
     0.0f, 0x1.a733d2p-18f, 0x1.f9b884p-50f, 0x1.639c56p-8f, 0.0f, 0.0f,
     0x1.f56ce4p-105f, 0x1.7315dap-77f, 0.0f, 0.0f, 0.0f, 0x1.1871aap-125f,
     0x1.ac1b06p-59f, 0x1.e501bp-123f, 0x1.2b9dep-16f, 0x1.5bc198p-89f, 0.0f,
     0x1.c6b5bp-93f, 0.0f, 0.0f, 0x1.4e6394p-35f, 0.0f, 0x1.0c2294p-23f, 0.0f,
     0x1.3afae6p-48f, 0x1.8a83cep-101f, 0.0f, 0.0f, 0x1.22c654p-43f, 0x1.75c4acp-82f,
     0x1.71bbdcp-102f, 0.0f, 0.0f, 0x1.8253e8p-10f, 0x1.fe6674p-6f, 0x1.5a57fcp-27f,
     0.0f, 0x1.36545ap-114f, 0x1p0f, 0x1.05313ep-11f, 0.0f, 0.0f, 0x1.b32678p-42f,
     0.0f, 0.0f, 0.0f, 0x1.be257ap-89f, 0.0f, 0x1.acd7aep-110f, 0.0f, 0.0f, 0.0f,
     0x1.edc302p-39f, 0x1.80605cp-117f, 0.0f, 0x1.2bdeb8p-118f, 0.0f, 0.0f, 0.0f,
     0x1.197554p-20f, 0x1.9d26dep-125f, 0.0f, 0x1.e360b2p-91f, 0x1.30d48p-29f,
     0x1.c94dcap-13f, 0.0f, 0x1.7413ep-118f, 0.0f, 0.0f, 0.0f, 0x1.019e68p-115f, 0.0f,
     0x1.eace08p-10f, 0x1.6fc2fcp-78f, 0.0f, 0.0f, 0x1.8f5d98p-34f, 0.0f,
     0x1.8bc88ap-89f, 0.0f, 0x1.d620c4p-72f, 0.0f, 0x1.cdfaf8p-34f, 0.0f, 0.0f, 0.0f,
     0x1.f0636ep-120f, 0x1.dc8bc4p-102f, 0x1.187bc6p-124f, 0.0f, 0.0f, 0.0f,
     0x1.b8968ap-113f, 0.0f, 0.0f, 0.0f, 0x1.069fcp-20f, 0.0f, 0.0f, 0.0f,
     0x1.912ca8p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6c17ap-60f, 0.0f, 0x1.7a712p-44f,
     0.0f, 0x1.13e0bep-55f, 0.0f, 0x1.b7103cp-6f, 0.0f, 0.0f, 0x1.5030b4p-124f, 0.0f,
     0x1.c778c2p-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e10f1ep-10f, 0x1.7f933ep-70f,
     0x1.c26c8ap-6f, 0.0f, 0x1.727314p-108f, 0.0f, 0.0f, 0x1.7657cep-28f, 0.0f,
     0x1.531a02p-50f, 0.0f, 0.0f, 0x1.aaa0fcp-111f, 0.0f, 0.0f, 0x1.c5c28cp-54f,
     0x1.e8419p-80f, 0.0f, 0x1.95061cp-126f, 0x1.ba00c2p-23f, 0x1.16ceccp-106f, 0.0f,
     0x1.1818fap-47f, 0.0f, 0x1.ed7aap-21f, 0.0f, 0x1.584eccp-20f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.53a422p-38f, 0.0f, 0.0f, 0x1.9ab198p-24f, 0.0f, 0.0f,
     0x1.6a2e12p-4f, 0.0f, 0.0f, 0x1.92b79ep-31f, 0x1.ea6594p-94f, 0.0f,
     0x1.b505f8p-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dfc78ep-60f, 0.0f, 0.0f, 0.0f,
     0x1.fc96dep-99f, 0x1.1e9a6p-105f, 0x1.16e5dap-16f, 0x1.c38e9cp-94f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9546d4p-2f, 0x1.3ac17ap-64f, 0.0f, 0x1.7f43eep-68f, 0.0f,
     0.0f, 0x1.7b0b8cp-50f, 0x1.d4c0a4p-17f, 0.0f, 0x1.eb89bp-77f, 0x1.63280ap-46f,
     0.0f, 0x1.642752p-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9e3faap-10f, 0.0f,
     0x1.c110eap-51f, 0x1.29802ep-4f, 0x1.43a028p-43f, 0.0f, 0x1.2ef68cp-53f,
     0x1.e0d264p-109f, 0x1.745424p-68f, 0.0f, 0.0f, 0x1.2a6b1p-17f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.0f6c88p-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.591da6p-25f, 0.0f,
     0x1.f3b098p-96f, 0.0f, 0.0f, 0x1.73a636p-61f, 0.0f, 0x1.841828p-99f,
     0x1.061a3p-98f, 0x1.bdf4d2p-121f, 0.0f, 0x1.fa12p-62f, 0x1.622daap-108f, 0.0f,
     0.0f, 0x1.f818b6p-118f, 0.0f, 0x1.d49774p-46f, 0x1.5a597ap-28f, 0x1.3b2592p-52f,
     0.0f, 0x1.01295cp-78f, 0x1.5c76aep-20f, 0x1.6e91f8p-7f, 0x1.bbc562p-116f, 0.0f,
     0x1.8f7c82p-24f, 0x1.4ed9fep-13f, 0x1.84df12p-27f, 0.0f, 0x1.374f3ep-24f,
     0x1.a0c9c6p-5f, 0.0f, 0.0f, 0.0f, 0x1.121e9ap-114f, 0.0f, 0x1.679da2p-10f, 0.0f,
     0.0f, 0.0f, 0x1.663deap-39f, 0x1.23443p-119f, 0x1.2fbd7cp-37f, 0x1.8c643p-44f,
     0.0f, 0.0f, 0.0f, 0x1.9c2062p-54f, 0x1.2c54aep-81f, 0.0f, 0x1.4472d2p-30f,
     0x1.7bfbe6p-65f, 0x1.379b98p-10f, 0x1.d63bccp-54f, 0.0f, 0x1.fb857p-40f,
     0x1.8c85c6p-82f, 0.0f, 0.0f, 0x1.7c5b42p-109f, 0x1.45e89p-38f, 0.0f,
     0x1.578a1p-88f, 0x1.73035p-105f, 0x1.c885a8p-116f, 0x1.cd61c8p-110f,
     0x1.17e60cp-14f, 0x1.785b7ep-72f, 0.0f, 0.0f, 0x1.e01c4ap-100f, 0.0f,
     0x1.d9a2eap-90f, 0x1.a53666p-122f, 0x1.1e52bep-124f, 0x1.a1b702p-43f, 0.0f,
     0x1.f5276ap-103f, 0.0f, 0x1.efd2b6p-113f, 0.0f, 0.0f, 0x1.620986p-52f,
     0x1.c9be22p-126f, 0.0f, 0x1.333d66p-29f, 0x1.5426a2p-63f, 0x1.389e0ep-25f, 0.0f,
     0.0f, 0x1.54ca6ep-46f, 0x1.23e82cp-68f, 0x1.16974cp-79f, 0x1.d08988p-20f,
     0x1.a7c7acp-115f, 0.0f, 0x1.cdfb1p-95f, 0x1.3ea5a6p-68f, 0.0f, 0.0f,
     0x1.cca4d4p-23f, 0.0f, 0x1.68f78ap-66f, 0.0f, 0x1.8964a2p-39f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.dbd3c2p-89f, 0.0f, 0.0f, 0x1.cf8cbp-103f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.652bccp-126f, 0x1.76377p-47f, 0.0f, 0.0f, 0.0f, 0x1.d96156p-34f, 0.0f, 0.0f,
     0x1.73218ap-35f, 0x1.576346p-24f, 0.0f, 0x1.e7994ap-121f, 0x1.cc285ap-96f,
     0x1.cb327cp-51f, 0x1.66313cp-84f, 0x1.583f0cp-10f, 0x1.d96348p-117f, 0.0f,
     0x1.e0ce42p-39f, 0.0f, 0x1.9546aep-37f, 0.0f, 0x1.bae3fcp-62f, 0x1.0c80bcp-122f,
     0x1.cfd60ap-124f, 0x1.77c55ep-78f, 0x1.bd109cp-75f, 0.0f, 0x1.f0eef8p-62f,
     0x1.0601d8p-82f, 0x1.0db5c8p-38f, 0x1.e8b66ap-47f, 0.0f, 0x1.c5d054p-47f,
     0x1.1a3ffp-43f, 0x1.e1fd76p-31f, 0.0f, 0.0f, 0x1.374cc8p-8f, 0x1.1b12d6p-119f,
     0x1.620072p-21f, 0.0f, 0.0f, 0.0f, 0x1.7a4b36p-14f, 0x1.857b4cp-27f,
     0x1.e416aep-122f, 0x1.c94296p-23f, 0x1.e8789cp-67f, 0x1.e679e2p-9f, 0.0f,
     0x1.60491cp-111f, 0x1.9be4ccp-2f, 0.0f, 0x1.07afbcp-68f, 0.0f, 0.0f,
     0x1.301c82p-4f, 0x1.0cb98cp-79f, 0.0f, 0x1.22494cp-76f, 0x1.55aba4p-10f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.187b2ep-49f, 0x1.4e7a0ep-66f, 0.0f, 0x1.175188p-6f,
     0x1.935d54p-115f, 0.0f, 0x1.53ed3cp-14f, 0.0f, 0x1.2e1042p-26f, 0.0f,
     0x1.6bddf4p-89f, 0.0f, 0x1.e957aap-59f, 0.0f, 0x1.6c7acp-116f, 0x1.e9ee9cp-76f,
     0x1.14826ap-3f, 0x1.3d040ap-79f, 0x1.838004p-11f, 0.0f, 0x1.6cbd32p-81f,
     0x1.4464p-58f, 0x1.aff878p-60f, 0x1.57ca9cp-64f, 0x1.c8b3fcp-82f, 0.0f,
     0x1.67043ep-92f, 0.0f, 0x1.580cfep-90f, 0.0f, 0x1.cc1316p-21f, 0x1.a92d3cp-92f,
     0x1.caeaaap-77f, 0.0f, 0x1.65353ep-71f, 0.0f, 0x1.07a268p-22f, 0x1.a1970ap-2f,
     0.0f, 0x1.ed9868p-89f, 0.0f, 0.0f, 0x1.61d72p-73f, 0x1.0e2a2ap-2f, 0.0f, 0.0f,
     0x1.0a920ap-47f, 0.0f, 0.0f, 0x1.a60ff6p-44f, 0.0f, 0.0f, 0x1.a290acp-91f,
     0x1.e07fcp-31f, 0.0f, 0x1.49d9d4p-37f, 0x1.5daeaap-110f, 0.0f, 0x1.47b946p-53f,
     0x1.24a814p-120f, 0x1.6b11fap-29f, 0.0f, 0x1.4ee0f8p-105f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.357a2ap-111f, 0x1.b1481p-72f, 0.0f, 0x1.d22022p-45f, 0x1.0b20cp-122f,
     0.0f, 0x1.5b9792p-31f, 0x1.7a4e34p-24f, 0x1.139b3ap-87f, 0x1.346e9p-123f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.927072p-60f, 0x1.bd104cp-51f,
     0x1.b94622p-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4efedcp-46f, 0x1.e75f6ep-30f,
     0.0f, 0.0f, 0.0f, 0x1.e64ab2p-20f, 0.0f, 0x1.3b48fp-87f, 0x1.5a0892p-92f,
     0x1.8e92b6p-76f, 0x1.b6ec16p-23f, 0.0f, 0x1.3765cap-107f, 0.0f, 0x1.8af1acp-45f,
     0.0f, 0.0f, 0x1.54e2a6p-126f, 0.0f, 0.0f, 0x1.ddd2c8p-119f, 0.0f,
     0x1.b39852p-94f, 0.0f, 0x1.cadbdp-55f, 0.0f, 0.0f, 0x1.923816p-107f, 0.0f, 0.0f,
     0x1.96031p-126f, 0.0f, 0x1.09dc34p-4f, 0.0f, 0x1.04e7d2p-11f, 0.0f, 0.0f,
     0x1.9b00eap-121f, 0x1.75e346p-106f, 0.0f, 0x1.e358dp-41f, 0x1.3b435cp-120f,
     0x1.3a16f2p-3f, 0x1.03fd96p-99f, 0x1.8f3552p-116f, 0.0f, 0x1.6d08e2p-90f, 0.0f,
     0x1.191f86p-114f, 0x1.d6d2e8p-84f, 0x1.6ab3c6p-82f, 0.0f, 0.0f, 0.0f,
     0x1.ff235ap-3f, 0x1.f0558ep-18f, 0.0f, 0x1.c1a438p-123f, 0x1.958c5cp-49f,
     0x1.16ffacp-100f, 0.0f, 0.0f, 0x1.de4eecp-95f, 0.0f, 0.0f, 0x1.614658p-18f, 0.0f,
     0x1.3085dcp-7f, 0x1.c61bcap-97f, 0.0f, 0.0f, 0x1.3fee96p-49f, 0x1.9e2d1ap-24f,
     0.0f, 0.0f, 0.0f, 0x1.d26a66p-34f, 0.0f, 0.0f, 0x1.2625eap-86f, 0.0f, 0.0f,
     0x1.c7cb98p-83f, 0x1.38741ep-121f, 0x1.cb2d52p-79f, 0x1.9b59fcp-59f,
     0x1.85c1b2p-44f, 0.0f, 0.0f, 0x1.289d18p-39f, 0.0f, 0.0f, 0x1.d2b298p-108f, 0.0f,
     0.0f, 0x1.a56a0cp-61f, 0x1.6df394p-8f, 0.0f, 0.0f, 0.0f, 0x1.a13be4p-74f,
     0x1.32022p-36f, 0.0f, 0x1.6262cp-12f, 0.0f, 0x1.6a0b2p-76f, 0.0f, 0.0f,
     0x1.5af9f6p-72f, 0.0f, 0.0f, 0x1.fdf0bap-90f, 0x1.535244p-61f, 0.0f,
     0x1.4d7948p-85f, 0.0f, 0x1.0f5458p-51f, 0x1.fa63acp-28f, 0.0f, 0.0f,
     0x1.01048p-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4eb642p-92f, 0x1.1afe2p-84f,
     0x1.d7012ap-2f, 0.0f, 0.0f, 0.0f, 0x1.7d0afep-2f, 0x1.16e9cep-59f, 0.0f, 0.0f,
     0x1.8c2dap-9f, 0x1.b71a3ep-46f, 0x1.5d4674p-125f, 0x1.6d010ap-107f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.bff5a6p-60f
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
            int32_t tmp3;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_finz_sinhf1_u35purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = bench_acc + tmp1;
            bench_acc = tmp2;
            tmp3 = i + INT32_C(1);
            i = tmp3;
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
    printf("Sleef_finz_sinhf1_u35purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
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
