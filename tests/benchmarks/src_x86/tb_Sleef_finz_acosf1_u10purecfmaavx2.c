/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_acosf1_u10purecfma.c --function \
 *     Sleef_finz_acosf1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.64c24ap-90f, 0x1.eeb68ap-28f, 0.0f, 0x1.8d06p-96f,
     0x1.c53fdcp-84f, 0x1.dfcf1cp-19f, 0.0f, 0.0f, 0.0f, 0x1.953518p-103f, 0.0f, 0.0f,
     0.0f, 0x1.6878b8p-48f, 0.0f, 0.0f, 0x1.fa65a6p-28f, 0x1.b313d4p-116f,
     0x1.e2db22p-113f, 0x1.b528e8p-16f, 0.0f, 0x1.0e5b88p-72f, 0x1.695c7p-20f, 0.0f,
     0x1.8f0abcp-4f, 0.0f, 0.0f, 0x1.3c1082p-92f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.49f91p-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3136e6p-31f, 0.0f,
     0x1.f738aap-21f, 0x1.b24506p-35f, 0.0f, 0x1.e67ca2p-77f, 0x1.37277cp-111f,
     0x1.8044bep-80f, 0x1.80bcaep-52f, 0.0f, 0x1.aa2edep-19f, 0x1.1b9d9p-93f, 0.0f,
     0.0f, 0x1.5035e2p-64f, 0x1.f3265p-92f, 0.0f, 0x1.c275d4p-84f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.3edb66p-126f, 0.0f, 0.0f, 0.0f, 0x1.cb0766p-119f, 0.0f,
     0x1.3d8766p-103f, 0.0f, 0x1.e62beap-66f, 0.0f, 0x1.431fecp-36f, 0.0f,
     0x1.b073e6p-120f, 0x1.582862p-11f, 0.0f, 0.0f, 0.0f, 0x1.a93594p-12f,
     0x1.f922fcp-35f, 0x1.1ae742p-24f, 0.0f, 0x1.5a5e2ap-109f, 0.0f, 0x1.2b106ep-125f,
     0x1.f978f2p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.95a474p-11f, 0x1.9d41e6p-55f,
     0x1.d76c9cp-79f, 0x1.f39018p-101f, 0x1.a92ca2p-57f, 0.0f, 0x1.3620c2p-90f, 0.0f,
     0.0f, 0x1.61a324p-31f, 0x1.6bea8ap-73f, 0x1.606046p-85f, 0.0f, 0.0f, 0.0f,
     0x1.041188p-39f, 0.0f, 0.0f, 0x1.2dbe4ep-104f, 0x1.f4902ap-82f, 0x1.ac73cp-8f,
     0x1.7353ecp-76f, 0x1.25ce76p-28f, 0.0f, 0x1.8e099cp-65f, 0.0f, 0x1.95942cp-34f,
     0x1.ac0e5p-86f, 0.0f, 0x1.a54b0ap-14f, 0.0f, 0x1.2fb9dep-42f, 0x1.143412p-78f,
     0.0f, 0x1.5d8a98p-100f, 0.0f, 0.0f, 0.0f, 0x1.2048c8p-38f, 0.0f, 0x1.04b64cp-99f,
     0.0f, 0x1.74185ap-52f, 0.0f, 0.0f, 0x1.c94e7p-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9a572ap-103f, 0x1.2af5dap-46f, 0x1.d1d732p-15f, 0x1.d2a0d6p-7f, 0.0f, 0.0f,
     0.0f, 0x1.097df4p-118f, 0x1.c37d0ap-40f, 0.0f, 0x1.7f70aap-123f, 0x1.5c8bb6p-66f,
     0.0f, 0.0f, 0x1.d1cf14p-121f, 0.0f, 0x1.30a6a2p-67f, 0x1.86aebap-13f, 0.0f, 0.0f,
     0x1.34f068p-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.39e7ecp-61f, 0x1.a574b2p-90f,
     0x1.f1a15cp-41f, 0.0f, 0x1.6c4afap-52f, 0x1p0f, 0x1.112888p-118f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.297ff4p-50f, 0.0f, 0x1.121a76p-109f, 0.0f, 0x1.4cc24p-108f,
     0x1.2654dap-116f, 0x1.401deep-103f, 0.0f, 0.0f, 0x1.4cb078p-44f, 0x1.67e1cp-29f,
     0x1.4f9f5p-25f, 0x1.33e67ep-86f, 0.0f, 0.0f, 0x1.6463d6p-57f, 0x1.54380cp-48f,
     0.0f, 0.0f, 0x1.4c0e1p-61f, 0.0f, 0x1.5ec736p-102f, 0.0f, 0x1.06461ep-35f,
     0x1.0bc6dap-89f, 0.0f, 0.0f, 0x1.96a756p-101f, 0x1.c1ad1cp-27f, 0x1.1d2502p-6f,
     0.0f, 0x1.50eb1cp-64f, 0.0f, 0x1.0fe9fp-24f, 0.0f, 0x1.c59ef4p-49f,
     0x1.02bd12p-1f, 0x1.446c02p-92f, 0.0f, 0x1.feaf4ep-39f, 0.0f, 0.0f,
     0x1.23649ep-58f, 0x1.5b8ccap-104f, 0x1.60e674p-40f, 0x1.7af3d2p-109f, 0.0f, 0.0f,
     0x1.62145cp-61f, 0x1.c634ap-85f, 0.0f, 0x1.faf16p-59f, 0x1.bd9ffep-51f, 0.0f,
     0.0f, 0.0f, 0x1.1d1b8cp-73f, 0x1.cea6ep-25f, 0.0f, 0x1.fea20cp-58f,
     0x1.49f7f8p-83f, 0x1.d44c18p-32f, 0.0f, 0x1.80c816p-62f, 0x1.221648p-83f, 0.0f,
     0.0f, 0.0f, 0x1.34474ep-105f, 0x1.fbb492p-81f, 0x1.f514ecp-72f, 0.0f,
     0x1.7a4b2cp-67f, 0x1.bc95cep-68f, 0.0f, 0.0f, 0x1.f322eap-114f, 0x1.255ee2p-28f,
     0.0f, 0x1.194d2ap-116f, 0x1.24e57p-104f, 0x1.113bccp-103f, 0.0f, 0.0f,
     0x1.0a29bp-77f, 0x1.3cb474p-18f, 0.0f, 0x1.70a73p-102f, 0x1.4cceb4p-45f,
     0x1.99cfccp-17f, 0.0f, 0x1.f57a2ep-84f, 0x1.4f7ebap-77f, 0.0f, 0x1.08146p-45f,
     0.0f, 0x1.502e18p-52f, 0x1.637a76p-44f, 0.0f, 0.0f, 0x1.b7ff56p-64f, 0.0f, 0.0f,
     0x1.a3942p-56f, 0x1.b90b6ap-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.978a1ep-93f,
     0x1.1250e2p-32f, 0.0f, 0x1.d8403cp-37f, 0.0f, 0.0f, 0x1.7733cep-95f, 0.0f,
     0x1.101c1ep-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c3a8d2p-100f, 0x1.e4d148p-96f, 0.0f,
     0.0f, 0.0f, 0x1.c0250ep-80f, 0x1.6d0b2ep-60f, 0.0f, 0.0f, 0.0f, 0x1.70f814p-5f,
     0.0f, 0.0f, 0.0f, 0x1.b6025ep-8f, 0x1.e13dacp-70f, 0.0f, 0x1.3c0368p-5f,
     0x1.d2f88p-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2f6764p-78f, 0.0f, 0x1.e67178p-79f,
     0x1.112dbap-60f, 0.0f, 0x1.ff6d54p-107f, 0x1.cb3d62p-101f, 0.0f, 0x1.6785fep-73f,
     0.0f, 0.0f, 0x1.2a79ecp-122f, 0x1.f718acp-7f, 0.0f, 0x1.9072fcp-38f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.711e8p-86f, 0x1.fdc5fap-47f, 0.0f, 0x1.113f7cp-108f,
     0.0f, 0.0f, 0x1.17ae82p-19f, 0.0f, 0x1.c38f3p-51f, 0.0f, 0.0f, 0x1.435afap-25f,
     0.0f, 0x1.4bf0eep-38f, 0.0f, 0x1.8b3a2cp-7f, 0x1.7aba46p-42f, 0x1.f34cb8p-67f,
     0.0f, 0.0f, 0x1.d7c5a8p-76f, 0.0f, 0x1.d5b57p-37f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c982bap-24f, 0x1.6073f2p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.780c66p-25f, 0.0f,
     0x1.39c53cp-118f, 0x1.86a988p-27f, 0.0f, 0x1.6b720ep-96f, 0.0f, 0x1.7551d8p-106f,
     0x1.e4d37ep-24f, 0x1.f9c75ap-70f, 0x1.dc27a2p-106f, 0.0f, 0.0f, 0x1.c3029ep-85f,
     0.0f, 0.0f, 0x1.c6621p-117f, 0.0f, 0.0f, 0x1.74ceap-96f, 0x1.fb2f58p-77f, 0x1p0f,
     0x1.43e5e8p-5f, 0x1.fd849ap-30f, 0x1.29fd18p-3f, 0.0f, 0x1.9da6fep-68f, 0.0f,
     0x1.14c8fap-26f, 0x1.baedb4p-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fa1a74p-39f, 0.0f,
     0x1.4d71eap-33f, 0x1.4c53b6p-3f, 0x1.e3b1aep-116f, 0.0f, 0.0f, 0x1.fa0364p-121f,
     0.0f, 0.0f, 0x1.9fc646p-92f, 0x1.e0e42cp-47f, 0x1.6cb0eep-110f, 0x1.c777e6p-84f,
     0x1.dc1d5cp-121f, 0.0f, 0x1.6ab038p-12f, 0x1.5c559ep-104f, 0x1.79de7cp-48f, 0.0f,
     0x1.bf1f96p-114f, 0x1.e1b27cp-75f, 0x1.490766p-86f, 0.0f, 0x1.1d02dcp-3f,
     0x1.a53412p-65f, 0x1.fddfap-27f, 0x1.7165f8p-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.530266p-67f, 0.0f, 0.0f, 0x1.d6d806p-89f, 0.0f, 0x1.5ce95ep-81f,
     0x1.dd654ap-90f, 0.0f, 0.0f, 0x1.06bfb4p-10f, 0x1.cacf02p-1f, 0x1.077bb4p-48f,
     0x1.d3107p-123f, 0.0f, 0x1.5d8a24p-65f, 0x1.34677cp-69f, 0x1.5475ecp-93f, 0.0f,
     0x1.81a918p-102f, 0x1.b9178cp-83f, 0.0f, 0.0f, 0.0f, 0x1.5138ecp-113f, 0.0f,
     0.0f, 0.0f, 0x1.e1567cp-70f, 0.0f, 0.0f, 0.0f, 0x1.db92e8p-101f, 0.0f, 0.0f,
     0.0f, 0x1.d49e48p-23f, 0.0f, 0x1.ff1186p-8f, 0x1.35a06ap-52f, 0.0f, 0.0f, 0.0f,
     0x1.4c00f8p-46f, 0.0f, 0x1.9a801ep-104f, 0.0f, 0.0f, 0x1.e570ap-96f,
     0x1.46e6d8p-109f, 0.0f, 0x1.c0b222p-67f, 0.0f, 0x1.07a1acp-11f, 0.0f,
     0x1.99699cp-39f, 0x1.d8d842p-3f, 0.0f, 0x1.910edcp-110f, 0.0f, 0x1.e14ad8p-44f,
     0x1.112a8p-28f, 0.0f, 0.0f, 0x1.0b1b3ap-96f, 0x1.4181dp-106f, 0.0f,
     0x1.20d50ap-7f, 0x1.33301p-6f, 0x1.c3dbacp-59f, 0.0f, 0x1.68f926p-106f,
     0x1.0de262p-9f, 0.0f, 0x1.9fbe98p-9f, 0x1.5b83dap-118f, 0.0f, 0.0f,
     0x1.3a2f6cp-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.acd408p-45f, 0x1.a47be4p-119f, 0.0f,
     0x1.f62bd6p-58f, 0x1.5fa21ep-90f, 0x1.876a86p-104f, 0x1.7e588p-119f, 0.0f, 0.0f,
     0.0f, 0x1.8fe6aep-96f, 0.0f, 0.0f, 0x1.e247a8p-63f, 0.0f, 0.0f, 0x1.ef96cep-23f,
     0x1.f01c5p-81f, 0.0f, 0.0f, 0.0f, 0x1.00028cp-116f, 0.0f, 0x1.8438dp-20f, 0.0f,
     0.0f, 0x1.58e9bcp-37f, 0x1.9f1894p-119f, 0x1.be40f8p-23f, 0x1.0a4258p-21f, 0.0f,
     0x1.dcc0a6p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bcdf96p-113f, 0x1.b011bep-97f,
     0x1.5130bep-123f, 0.0f, 0x1.a44352p-118f, 0x1.fcb936p-24f, 0.0f, 0.0f,
     0x1.5d12f4p-95f, 0x1.b885e8p-112f, 0x1.dd997cp-26f, 0x1.603a7ep-29f,
     0x1.aa6fcep-99f, 0x1.e94874p-21f, 0x1.18b528p-67f, 0x1.554ae2p-102f,
     0x1.6f695p-20f, 0.0f, 0x1.6eeb74p-116f, 0x1.287574p-53f, 0.0f, 0x1.0cdefap-62f,
     0x1.285b92p-3f, 0.0f, 0.0f, 0x1.516d1cp-27f, 0.0f, 0x1.3ce558p-74f,
     0x1.fe1d44p-103f, 0.0f, 0.0f, 0x1.afb15p-100f, 0.0f, 0x1.dd656cp-44f, 0.0f, 0.0f,
     0x1.80e47ap-50f, 0x1.a460a2p-124f, 0x1.34660ap-50f, 0x1.cb50eep-79f, 0.0f,
     0x1.67833cp-35f, 0.0f, 0x1.5ca3fep-80f, 0x1.cc133ap-42f, 0.0f, 0x1.e7094cp-119f,
     0x1.13262ep-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.579114p-22f, 0.0f,
     0x1.5b6444p-26f, 0x1.811a3p-68f, 0x1.6376acp-38f, 0.0f, 0.0f, 0x1.2bdddap-13f,
     0.0f, 0x1.4a2304p-118f, 0x1.29f5f2p-17f, 0.0f, 0.0f, 0x1.db07bcp-67f, 0.0f, 0.0f,
     0.0f, 0x1.c8011p-40f, 0x1.3202ecp-43f, 0x1.0b2f4cp-104f, 0x1.e0e9fap-99f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9c5e46p-26f, 0.0f, 0.0f, 0x1.f46bf2p-26f, 0.0f,
     0x1.d3304cp-49f, 0.0f, 0x1.0c789ap-61f, 0x1.da7732p-65f, 0x1.de0fa4p-1f, 0.0f,
     0x1.5bfd56p-1f, 0.0f, 0.0f, 0x1.935a18p-34f, 0x1.6f4dbep-77f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.899c22p-63f, 0.0f, 0x1.236e48p-31f, 0x1.d6e814p-94f,
     0x1.7bb0cp-15f, 0.0f, 0.0f, 0x1.73fac2p-76f, 0x1.2840d4p-78f, 0.0f,
     0x1.ad6316p-96f, 0.0f, 0x1.c2565ap-53f, 0.0f, 0.0f, 0x1.e0a2cp-66f, 0.0f,
     0x1.ecdd42p-114f, 0x1.fbb2a2p-115f, 0.0f, 0.0f, 0.0f, 0x1.1e228p-65f, 0.0f,
     0x1.368f18p-27f, 0x1.c7690ap-95f, 0.0f, 0.0f, 0.0f, 0x1.bee5fcp-52f,
     0x1.0f1244p-27f, 0x1.567d52p-99f, 0.0f, 0.0f, 0.0f, 0x1.e1daccp-32f,
     0x1.99c51ap-32f, 0.0f, 0x1.9cfa86p-115f, 0x1.e44e04p-122f, 0.0f, 0x1.5a7604p-76f,
     0x1.ecd798p-61f, 0x1.37781p-99f, 0.0f, 0x1.07fa4cp-42f, 0x1.df88bap-117f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d429dcp-35f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.9a2ffap-92f, 0.0f, 0.0f, 0x1.f3865p-12f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ad978ep-75f, 0x1.fb493ep-71f, 0.0f, 0.0f, 0x1.ea7b0ap-56f, 0x1.421b8ap-120f,
     0x1.8bd91p-61f, 0x1.f58fbp-116f, 0x1.ead942p-66f, 0.0f, 0x1.178544p-125f, 0.0f,
     0x1.a02918p-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.759e4ap-3f, 0.0f, 0x1.c4863ap-59f,
     0x1.c3f0dcp-42f, 0.0f, 0x1.14e756p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d4e6eap-21f, 0.0f, 0x1.5d42acp-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b1a3bcp-92f, 0.0f, 0.0f, 0x1.314b9p-39f, 0.0f, 0x1.949b74p-116f,
     0x1.92d832p-7f, 0x1.545554p-89f, 0.0f, 0x1.a7f44p-48f, 0.0f, 0.0f, 0.0f,
     0x1.9612c2p-92f, 0.0f, 0x1.8931e6p-18f, 0.0f, 0.0f, 0x1.834818p-48f,
     0x1.ba23fp-67f, 0.0f, 0x1.6bd97ep-62f, 0x1.8881a4p-12f, 0x1.6bb63cp-21f, 0.0f,
     0x1.858968p-66f, 0x1.611336p-29f, 0x1.108d3ap-56f, 0x1.8363fap-36f,
     0x1.cc005p-87f, 0x1.a8e826p-16f, 0x1.bb4292p-68f, 0.0f, 0x1.ad56d4p-61f,
     0x1.6b50b2p-6f, 0.0f, 0x1.c1d0bcp-117f, 0x1.0a079cp-57f, 0.0f, 0x1.096418p-34f,
     0x1.062814p-47f, 0x1.c4aafep-110f, 0x1.3dec42p-116f, 0x1.c7f65p-103f, 0.0f,
     0x1.e68806p-74f, 0x1.e1619p-33f, 0x1.78a4cap-26f, 0x1.0fe99ap-82f, 0.0f,
     0x1.212944p-81f, 0.0f, 0x1.c95d4ap-44f, 0x1.71d4a6p-13f, 0x1.152cc6p-126f,
     0x1.ee18p-47f, 0x1.e784acp-113f, 0x1.40a82p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.2d719ap-15f, 0x1.e98f7cp-48f, 0.0f, 0x1.b043f6p-56f, 0.0f,
     0x1.b805ep-17f, 0x1.19cf38p-62f, 0x1.99b28cp-43f, 0.0f, 0x1.7f54fp-47f,
     0x1.c3f81p-119f, 0.0f, 0x1.818d64p-57f, 0x1.df02d6p-6f, 0.0f, 0x1.d4a0f6p-5f,
     0.0f, 0x1.0a6a6ep-101f, 0x1.a15338p-20f, 0x1.fe006p-104f, 0x1.5c9146p-72f, 0.0f,
     0.0f, 0x1.b2f2ap-36f, 0x1.a55258p-51f, 0x1.ee67p-62f, 0.0f, 0x1.e98f8cp-56f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3b2b56p-105f, 0x1.917742p-101f, 0.0f,
     0x1.619fa6p-102f, 0.0f, 0x1.f4f236p-4f, 0.0f, 0x1.94ce8cp-72f, 0x1.b2847ap-90f,
     0x1.0f87bp-89f, 0x1.66f074p-9f, 0x1.e26eb6p-80f, 0.0f, 0.0f, 0x1.d3c942p-29f,
     0x1.75f0dp-116f, 0.0f, 0x1.a47dbcp-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.73d4bep-84f,
     0.0f, 0x1.e5862ap-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d61db2p-7f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.1a22bep-123f, 0x1.8b7c72p-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.94df98p-15f,
     0x1.5ad8fep-86f, 0.0f, 0x1.3d2378p-29f, 0.0f, 0.0f, 0x1.be8034p-98f, 0.0f,
     0x1.391f1ep-23f, 0.0f, 0x1.b88f3p-96f, 0.0f, 0.0f, 0x1.98cf92p-113f, 0.0f,
     0x1.9ec05ep-90f, 0x1.f45c38p-122f, 0.0f, 0x1.a8215p-96f, 0.0f, 0x1.4be73ep-122f,
     0x1.b7b1f2p-34f, 0x1.01ddbep-79f, 0x1.31eea6p-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9970bap-15f, 0.0f, 0x1.eda856p-45f, 0x1.141beap-63f, 0.0f, 0.0f,
     0x1.e2974p-60f, 0.0f, 0.0f, 0x1.eae7b2p-17f, 0.0f, 0x1.294e6p-91f,
     0x1.db277ap-41f, 0x1.913dccp-1f, 0x1.1b57e6p-101f, 0x1.06c04cp-5f, 0.0f,
     0x1.f51d16p-17f, 0x1.6d38c6p-44f, 0x1.c0d8cp-51f, 0.0f, 0x1.ddb5cp-73f, 0.0f,
     0x1.e437bap-89f, 0x1.50ad3p-43f, 0.0f, 0x1.e56508p-12f, 0.0f, 0x1.a4f08cp-111f,
     0.0f, 0x1.b6488ep-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f685p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e7bef6p-79f, 0x1.ff3828p-113f, 0.0f,
     0x1.1cdbdcp-75f, 0x1.1a74bep-120f, 0x1.4893c2p-112f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d9f666p-50f, 0.0f, 0x1.80c4f4p-108f, 0.0f, 0.0f, 0.0f, 0x1.5e6a6ep-81f,
     0x1.148752p-99f, 0.0f, 0x1.c1b7b4p-96f, 0.0f, 0x1.72e14ep-14f, 0x1.6a18ep-74f,
     0x1.17a4eep-16f, 0.0f
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
            tmp1 = Sleef_finz_acosf1_u10purecfma(tmp0);
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
    printf("Sleef_finz_acosf1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_acosf1_u10purecfma bench acc %a\n", global_bench_acc);
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
