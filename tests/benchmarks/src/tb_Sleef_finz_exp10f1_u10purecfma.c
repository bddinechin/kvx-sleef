/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_exp10f1_u10purecfma.c --function \
 *     Sleef_finz_exp10f1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.aec922p-20f, 0x1.4109aep-36f, 0x1.6e2cfp-122f, 0.0f, 0x1.b2b946p-26f,
     0x1.354ef4p-120f, 0x1.3ee97ep-5f, 0.0f, 0.0f, 0.0f, 0x1.e3453ap-87f, 0.0f,
     0x1.fd7802p-10f, 0x1.d87b54p-54f, 0x1.f97ee4p-67f, 0x1.524ea6p-42f,
     0x1.898cbap-120f, 0.0f, 0x1.46abcep-73f, 0x1.d0c6f4p-7f, 0.0f, 0.0f,
     0x1.5d5ed2p-41f, 0.0f, 0.0f, 0.0f, 0x1.a935fep-125f, 0x1.761da6p-56f, 0.0f, 0.0f,
     0x1.41758cp-30f, 0x1.016226p-25f, 0x1.366f2cp-63f, 0.0f, 0x1.0c6abp-107f,
     0x1.1b46a8p-58f, 0x1.97345p-38f, 0.0f, 0x1.21e1aep-35f, 0x1.e1b802p-17f,
     0x1.563ebcp-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1d3038p-106f,
     0x1.d78c22p-51f, 0.0f, 0.0f, 0.0f, 0x1.7780e2p-76f, 0x1.11aab4p-89f,
     0x1.fadf2cp-96f, 0x1.812452p-70f, 0x1.6b39f6p-56f, 0.0f, 0x1.dcfe8ap-64f,
     0x1.f9017cp-11f, 0.0f, 0x1.d95c76p-93f, 0x1.3e621cp-7f, 0x1.22ce28p-115f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.97a6c8p-96f, 0.0f, 0x1.a6f7ep-97f,
     0x1.a6ad8p-55f, 0.0f, 0.0f, 0x1.7c2fe2p-29f, 0x1.d49406p-36f, 0.0f, 0.0f,
     0x1.43a398p-32f, 0.0f, 0x1.293c48p-11f, 0.0f, 0x1.4d635ep-66f, 0.0f,
     0x1.42b3fap-90f, 0x1.064bbp-47f, 0.0f, 0x1.4d814ep-125f, 0.0f, 0x1.ebc258p-77f,
     0.0f, 0.0f, 0x1.f88e58p-110f, 0x1.aa7d24p-53f, 0x1.d59792p-126f,
     0x1.b4fd16p-120f, 0x1.ca0c02p-101f, 0.0f, 0x1.68d0dap-48f, 0.0f, 0x1.f37948p-24f,
     0x1.d82c8cp-29f, 0.0f, 0.0f, 0x1.87f426p-123f, 0.0f, 0.0f, 0.0f,
     0x1.4e4b0ap-104f, 0.0f, 0x1.1c4516p-60f, 0x1.fc3d5cp-57f, 0x1.f47f08p-98f,
     0x1.82fc38p-124f, 0.0f, 0x1.0e6c1ep-103f, 0.0f, 0.0f, 0x1.161604p-72f,
     0x1.6f68fcp-100f, 0.0f, 0x1.c78bccp-28f, 0x1.75fb0cp-16f, 0x1.9d2f7ep-90f,
     0x1.3a260ep-96f, 0.0f, 0x1.773a92p-98f, 0x1.b5769ep-26f, 0.0f, 0x1.2eee28p-55f,
     0x1.5c265cp-80f, 0x1.d4de2cp-76f, 0.0f, 0x1.b756b8p-74f, 0x1.5b90c4p-112f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3c5652p-40f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d8e1f8p-114f, 0.0f, 0.0f, 0.0f, 0x1.8a13eep-81f, 0.0f, 0.0f, 0.0f,
     0x1.f7ef3cp-14f, 0x1.8ec0aap-44f, 0.0f, 0x1.446f26p-27f, 0.0f, 0.0f,
     0x1.1eac44p-45f, 0x1.4c58a6p-28f, 0.0f, 0.0f, 0x1.752226p-99f, 0x1.66f6dcp-115f,
     0x1.fc7014p-18f, 0x1.409998p-80f, 0x1.64f55ap-120f, 0x1p0f, 0x1.aee0ep-67f, 0.0f,
     0.0f, 0x1.5e4996p-44f, 0.0f, 0.0f, 0x1.4ffc84p-8f, 0.0f, 0x1.5e94c6p-116f,
     0x1.56059p-123f, 0.0f, 0x1.9df3b4p-38f, 0x1.1c6114p-85f, 0x1.4dd64ep-17f, 0.0f,
     0x1.9f4922p-109f, 0.0f, 0.0f, 0.0f, 0x1.31849ap-9f, 0x1.c2f306p-35f,
     0x1.647326p-47f, 0.0f, 0x1.d6c3ap-100f, 0.0f, 0.0f, 0.0f, 0x1.ec526p-38f,
     0x1.0cc6eap-2f, 0x1.bd3024p-57f, 0x1.d1cb88p-47f, 0.0f, 0.0f, 0x1.f934aap-32f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.eaacdp-36f, 0.0f, 0x1.647f72p-4f, 0.0f,
     0x1.e2531p-32f, 0x1.5f1d9p-97f, 0.0f, 0.0f, 0x1.522822p-90f, 0x1.7fd4f6p-121f,
     0x1.4f379ep-58f, 0.0f, 0.0f, 0x1.e8236cp-19f, 0.0f, 0x1.fc9b5p-107f, 0.0f,
     0x1.59eedep-6f, 0x1.c2305p-29f, 0x1.8cfc58p-109f, 0x1.c0e51ap-6f,
     0x1.bbd814p-84f, 0.0f, 0x1.d766aap-93f, 0x1.12af5cp-6f, 0.0f, 0x1.c142a4p-96f,
     0x1.13589ep-51f, 0x1.d89f08p-57f, 0.0f, 0x1.42e49cp-2f, 0x1.6c5874p-43f, 0.0f,
     0x1.47df2p-65f, 0.0f, 0x1.3e29a4p-44f, 0.0f, 0x1.3bf7d8p-109f, 0x1.4b5a56p-42f,
     0.0f, 0x1.57412cp-15f, 0x1.0bba12p-4f, 0x1.1eeee2p-125f, 0x1.4ffdd4p-4f, 0.0f,
     0.0f, 0x1.8cf164p-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6ff7eep-112f, 0.0f,
     0x1.9ebd8ep-126f, 0x1.f5da98p-108f, 0x1.370f72p-120f, 0x1.b09f9cp-66f, 0.0f,
     0.0f, 0x1.89684cp-2f, 0x1.594de2p-74f, 0x1.5be6e2p-119f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.782592p-21f, 0.0f, 0x1.9e2708p-23f, 0x1.01f20ap-19f, 0.0f, 0x1.af2b1ep-89f,
     0.0f, 0.0f, 0x1.921948p-71f, 0x1.536044p-14f, 0x1.a70dbp-9f, 0x1.ee63d4p-111f,
     0.0f, 0x1.28c5dcp-103f, 0.0f, 0.0f, 0x1.829334p-126f, 0.0f, 0.0f, 0.0f,
     0x1.959e7ep-112f, 0x1.5f25fap-11f, 0.0f, 0.0f, 0x1.114b7ap-75f, 0.0f,
     0x1.1ea58p-76f, 0.0f, 0x1.aa849ap-31f, 0.0f, 0.0f, 0x1.66dap-78f, 0.0f, 0.0f,
     0x1.85ded4p-44f, 0.0f, 0.0f, 0.0f, 0x1.f27848p-116f, 0x1.d2c172p-55f, 0.0f,
     0x1.41bacep-120f, 0x1.fa1692p-79f, 0x1.71cfecp-66f, 0x1.ef3898p-17f,
     0x1.0b37dcp-66f, 0x1.5cb5bp-60f, 0.0f, 0x1.aabb9ap-6f, 0x1.f3a874p-43f,
     0x1.01210ep-35f, 0x1.c51a5p-94f, 0.0f, 0.0f, 0.0f, 0x1.81346p-82f, 0.0f,
     0x1.8f1e04p-28f, 0x1.b4fe5ap-84f, 0x1.c4988ap-80f, 0x1.b0f74p-44f,
     0x1.521b02p-95f, 0x1.050e84p-55f, 0.0f, 0x1.769538p-123f, 0.0f, 0.0f,
     0x1.641e9cp-44f, 0x1.2dae78p-26f, 0.0f, 0x1.6736bcp-63f, 0x1.b71d4ep-79f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e3388p-27f, 0.0f, 0x1.5a27f2p-47f,
     0x1.4f7f12p-93f, 0x1.83caep-72f, 0.0f, 0x1.e9cadcp-108f, 0x1.01ef42p-9f, 0.0f,
     0.0f, 0x1.46f676p-90f, 0.0f, 0x1.5d738cp-85f, 0x1.15bbd8p-121f, 0.0f, 0.0f,
     0x1.9986f8p-126f, 0.0f, 0x1.850496p-58f, 0.0f, 0x1.3d2fep-110f, 0x1.6d7e7ap-111f,
     0.0f, 0.0f, 0.0f, 0x1.673a16p-68f, 0.0f, 0x1.afd84cp-92f, 0x1.61e448p-82f,
     0x1.c71348p-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a630f2p-124f, 0.0f,
     0x1.55808ap-103f, 0x1.48f38ap-101f, 0.0f, 0x1.02453p-95f, 0x1.ac0feep-119f,
     0x1.ee985p-123f, 0.0f, 0x1.3c8882p-114f, 0.0f, 0x1.118688p-68f, 0x1.3f190cp-90f,
     0x1.1afb26p-82f, 0x1.b0e8fcp-78f, 0.0f, 0x1.5d1a0ep-3f, 0x1.24d51p-67f, 0.0f,
     0x1.bf4a3ep-77f, 0x1.21d41cp-60f, 0x1.659cd2p-100f, 0x1.46d5f6p-37f, 0.0f, 0.0f,
     0.0f, 0x1.64717ap-15f, 0x1.fae932p-52f, 0x1.c5f2aep-104f, 0.0f, 0x1.021b72p-89f,
     0x1.7e9fc8p-9f, 0x1.aaac66p-65f, 0.0f, 0.0f, 0x1.42d8c2p-90f, 0.0f, 0.0f, 0.0f,
     0x1.2d80ep-84f, 0x1.89b25ep-110f, 0.0f, 0x1.d54336p-116f, 0x1.12b4b4p-110f, 0.0f,
     0.0f, 0x1.3aee2cp-26f, 0x1.e04312p-112f, 0.0f, 0x1.ab5e12p-94f, 0x1.0af352p-66f,
     0x1.6b4a1p-78f, 0.0f, 0.0f, 0x1.fcdf7ap-31f, 0x1.74dcc6p-24f, 0.0f, 0.0f,
     0x1.335b08p-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0e7dd8p-55f, 0.0f, 0.0f,
     0.0f, 0x1.fb0632p-111f, 0x1.25dfbap-115f, 0.0f, 0.0f, 0x1.2219ccp-83f, 0.0f,
     0x1.582cbp-109f, 0x1.545768p-110f, 0x1.c4321ap-9f, 0x1.f0af52p-70f,
     0x1.f7f6ap-49f, 0x1.74256p-114f, 0.0f, 0.0f, 0x1.d7c6bp-74f, 0x1.77ae4ep-97f,
     0x1.8d3a7cp-30f, 0.0f, 0x1.0abddap-82f, 0x1.271194p-123f, 0x1.dca92ep-92f,
     0x1.32769ap-82f, 0x1.d9ce66p-107f, 0x1.7ac70ep-102f, 0x1.42394p-55f, 0.0f, 0.0f,
     0x1.b6cf3p-122f, 0.0f, 0x1.75d812p-121f, 0.0f, 0.0f, 0.0f, 0x1.a4d3bcp-125f,
     0x1.72e26p-69f, 0.0f, 0.0f, 0.0f, 0x1.41c67ap-66f, 0x1.3f1a4cp-109f,
     0x1.c1a722p-94f, 0.0f, 0x1.423f9ap-104f, 0x1.67681cp-10f, 0.0f, 0.0f,
     0x1.4b3c78p-112f, 0x1.7024fp-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.895a1cp-41f,
     0x1.81803cp-47f, 0.0f, 0x1.346156p-91f, 0.0f, 0x1.fe2d8ap-110f, 0x1.03d584p-102f,
     0x1.ae299cp-25f, 0x1.8f1ecap-70f, 0.0f, 0.0f, 0x1.0baa2p-115f, 0.0f,
     0x1.6717dap-101f, 0x1.44e6fap-123f, 0.0f, 0x1.5ed8dep-112f, 0x1.e4b726p-78f,
     0x1.3c5e12p-54f, 0.0f, 0.0f, 0.0f, 0x1.bc244p-53f, 0.0f, 0.0f, 0x1.232a48p-120f,
     0x1.a51a98p-100f, 0x1.fc082cp-93f, 0.0f, 0x1.a054aap-104f, 0x1.55bbb2p-39f,
     0x1.c089d4p-45f, 0x1.e3fa98p-119f, 0.0f, 0x1.62596ap-87f, 0.0f, 0x1.d86822p-60f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.addp-81f, 0x1.7905aap-33f, 0.0f,
     0x1.7d194cp-39f, 0.0f, 0x1.670832p-18f, 0.0f, 0.0f, 0.0f, 0x1.3e92p-123f, 0.0f,
     0.0f, 0x1.873144p-28f, 0.0f, 0x1.b60f92p-93f, 0x1.f7b778p-33f, 0x1.67c7fp-100f,
     0.0f, 0x1.37c922p-21f, 0.0f, 0.0f, 0x1.8b2452p-103f, 0x1.169bb2p-113f,
     0x1.f991cep-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.092c54p-3f,
     0x1.fc718ap-110f, 0.0f, 0x1.50b934p-11f, 0x1.c83328p-58f, 0x1.b260ecp-101f, 0.0f,
     0.0f, 0x1.37850cp-2f, 0.0f, 0x1.371f56p-116f, 0x1.d10e44p-34f, 0.0f, 0.0f,
     0x1.9a272ap-42f, 0x1.880abep-34f, 0x1.e7452ap-103f, 0x1.8e6e92p-110f,
     0x1.6f0b0ep-45f, 0.0f, 0x1.e0d67p-41f, 0x1.df946cp-121f, 0x1.25ab62p-66f,
     0x1.608e3p-11f, 0x1.ae625ap-53f, 0x1.158896p-42f, 0x1.638844p-34f, 0.0f, 0.0f,
     0x1.e4c89cp-96f, 0x1.720b7p-56f, 0x1.cacc02p-111f, 0.0f, 0x1.622f9cp-56f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c17f1cp-124f, 0x1.0c1088p-91f, 0.0f,
     0x1.2fde46p-40f, 0x1.b43cdcp-96f, 0.0f, 0x1.2a6ce4p-35f, 0x1p0f, 0.0f,
     0x1.f5a46p-88f, 0x1.37b3a4p-103f, 0x1.392856p-18f, 0x1.7aea42p-23f,
     0x1.dc4c22p-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.116e3p-69f, 0x1.ab9896p-99f,
     0.0f, 0x1.6cfca6p-76f, 0.0f, 0.0f, 0x1.fcfc06p-15f, 0.0f, 0x1.89e7a2p-112f,
     0x1.1d333cp-89f, 0x1.8a9f64p-53f, 0.0f, 0.0f, 0.0f, 0x1.355e4ap-39f, 0.0f, 0.0f,
     0x1.93c83cp-90f, 0x1.c9b04cp-114f, 0.0f, 0x1.1eb6cep-60f, 0x1.14acaap-2f, 0.0f,
     0x1.b20174p-56f, 0x1.3bf678p-88f, 0.0f, 0.0f, 0x1.ed0486p-57f, 0.0f, 0.0f, 0.0f,
     0x1.f3c7b2p-37f, 0x1.e01e56p-103f, 0.0f, 0.0f, 0x1.bdb726p-40f, 0.0f, 0.0f, 0.0f,
     0x1.acab8cp-36f, 0.0f, 0x1.4eea8p-101f, 0x1.405c7cp-32f, 0x1.ae7a0ep-37f,
     0x1.1c9084p-20f, 0.0f, 0.0f, 0x1.e631cp-47f, 0.0f, 0.0f, 0x1.0205fcp-61f,
     0x1.982708p-113f, 0.0f, 0x1.e74cfap-117f, 0x1.0ed7f6p-55f, 0x1.3755b6p-79f, 0.0f,
     0.0f, 0x1.d079ap-29f, 0x1.561ac8p-69f, 0.0f, 0.0f, 0x1.7fa65ap-66f,
     0x1.e310a6p-8f, 0.0f, 0x1.386058p-44f, 0x1.eef8ap-35f, 0x1.b81f36p-70f,
     0x1.3c601ep-120f, 0x1.16aa3p-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.692836p-72f, 0.0f,
     0x1.cae654p-108f, 0x1.d0633cp-80f, 0x1.b51cp-65f, 0x1.392cbp-49f,
     0x1.ebfdbep-104f, 0x1.a3dcb8p-39f, 0x1.635544p-88f, 0.0f, 0x1.097d9ep-97f,
     0x1.fdf2fcp-34f, 0x1.d25192p-53f, 0x1.8c78a6p-43f, 0x1.2595bp-102f,
     0x1.0eb1cap-60f, 0.0f, 0.0f, 0.0f, 0x1.caec8ep-15f, 0.0f, 0.0f, 0x1.9af354p-70f,
     0.0f, 0x1.c28854p-126f, 0.0f, 0.0f, 0x1.07efbcp-124f, 0x1.5d33e2p-78f,
     0x1.f33262p-25f, 0x1.9ccddp-67f, 0x1.b18cfp-72f, 0.0f, 0x1.3601a8p-54f,
     0x1.88a8p-33f, 0.0f, 0x1.fc0e64p-5f, 0x1.b0e97cp-122f, 0x1.deeaeap-30f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e8078cp-32f, 0x1.bbb752p-6f, 0.0f,
     0x1.cb9bbep-65f, 0.0f, 0.0f, 0x1.b463acp-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1ac24ep-119f, 0x1.92be8ap-51f, 0x1.20f896p-8f, 0.0f, 0.0f, 0x1.d3e102p-116f,
     0.0f, 0x1.8f5712p-16f, 0.0f, 0.0f, 0.0f, 0x1.5f878ap-88f, 0x1.3105dcp-123f,
     0x1.62550ep-101f, 0.0f, 0x1.889b48p-28f, 0.0f, 0.0f, 0.0f, 0x1.38cf54p-15f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.98ce14p-47f, 0x1.260116p-119f, 0x1.be2f22p-14f,
     0x1.b34efcp-38f, 0.0f, 0.0f, 0x1.5dc5ecp-61f, 0x1.afb7cap-46f, 0.0f,
     0x1.f459fcp-9f, 0.0f, 0x1.f5b85ap-34f, 0x1.9ac2aep-99f, 0.0f, 0x1.beda08p-89f,
     0x1.d8d9b2p-39f, 0x1.a8b4p-77f, 0x1.dfbff2p-122f, 0.0f, 0x1.b15fp-3f,
     0x1.6b73fep-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e66a2ep-28f, 0.0f, 0x1.e4dd3cp-94f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3bc1aep-63f, 0.0f, 0.0f, 0.0f, 0x1.02528ep-18f, 0.0f,
     0x1.4a8bd8p-18f, 0.0f, 0x1.2ec54cp-51f, 0.0f, 0x1.57d3fp-50f, 0x1p0f,
     0x1.d5d8bap-10f, 0x1.4b79ecp-68f, 0.0f, 0.0f, 0x1.e9fe8p-95f, 0x1.4acffep-27f,
     0x1.d8f49ap-49f, 0x1.86d05p-83f, 0x1.d5bf38p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.8df07ep-95f, 0.0f, 0x1.c9d8e4p-50f, 0x1.0b8138p-60f, 0.0f,
     0x1.9f79fep-23f, 0x1.25487cp-36f, 0.0f, 0x1.fa45a6p-122f, 0.0f, 0.0f,
     0x1.1e5064p-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5c2e94p-78f, 0x1.047686p-117f,
     0x1.cad92p-69f, 0x1.3af06ap-118f, 0x1.dda7c6p-14f, 0x1.f70a8ap-95f,
     0x1.bc48e8p-4f, 0.0f, 0.0f, 0x1.ef20d2p-59f, 0.0f, 0.0f, 0.0f, 0x1.d16f2ap-24f,
     0x1.b4077cp-79f, 0.0f, 0x1.31ce88p-102f, 0x1.b3dd2cp-51f, 0.0f, 0.0f,
     0x1.02c478p-11f, 0x1.841448p-110f, 0.0f, 0x1.9fb6bcp-75f, 0.0f, 0x1.703de6p-39f,
     0x1.b68048p-22f, 0x1.08f482p-110f, 0x1.bca402p-90f, 0.0f, 0x1.b52942p-85f, 0.0f,
     0.0f, 0x1.186e82p-34f, 0x1.de6846p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.902306p-9f, 0.0f, 0x1.934502p-44f, 0.0f, 0x1.cdebd2p-54f, 0x1.e62384p-62f,
     0x1.53ff5p-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.f85ceep-43f, 0.0f, 0.0f,
     0x1.3b3fb4p-39f, 0x1.bb7b38p-60f, 0.0f, 0.0f, 0.0f, 0x1.289c16p-59f,
     0x1.1d5728p-65f, 0.0f, 0.0f, 0x1.4c70ap-123f, 0x1.79ee24p-75f, 0.0f, 0.0f,
     0x1.179d12p-105f, 0.0f, 0x1.2f8796p-103f, 0.0f, 0.0f, 0.0f, 0x1.91123cp-2f, 0.0f,
     0x1.14834cp-121f, 0x1.393416p-4f, 0.0f, 0.0f, 0x1.cd7902p-99f, 0.0f, 0.0f, 0.0f,
     0x1.af626ap-53f, 0x1.7ec0c4p-101f, 0x1.012abep-26f, 0x1.3b3dbcp-38f, 0.0f, 0.0f,
     0x1.03fb46p-59f, 0.0f, 0x1.d920aap-85f, 0.0f, 0x1.38e824p-53f, 0x1.4c137p-44f,
     0x1.237878p-56f, 0x1.8ca1aap-102f, 0.0f, 0x1.451e62p-5f, 0x1.b25b4cp-7f,
     0x1.be810ep-98f, 0.0f, 0.0f, 0.0f, 0x1.ecfcaep-87f, 0.0f, 0x1.e32ac4p-100f, 0.0f,
     0.0f, 0x1.64fa9cp-48f, 0.0f, 0x1.400a82p-6f, 0x1.eed098p-34f, 0.0f, 0.0f,
     0x1.5d6112p-109f, 0x1.713dd8p-33f, 0.0f, 0.0f, 0x1.094bb6p-73f
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
            tmp1 = Sleef_finz_exp10f1_u10purecfma(tmp0);
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
    printf("Sleef_finz_exp10f1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_exp10f1_u10purecfma bench acc %a\n", global_bench_acc);
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
