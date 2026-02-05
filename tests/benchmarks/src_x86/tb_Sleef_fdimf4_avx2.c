/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_fdimf4_avx2128.c --function Sleef_fdimf4_avx2128 --arity 2 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32,binary32 \
 *     --vector-size 4 --function-input-vector-size 4 --bench \
 *     --no-embedded-bin --target x86_avx2128
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
     0x1.0bd5b8p-52f, 0.0f, 0x1.1be166p-30f, 0.0f, 0x1.279f2ep-87f, 0.0f, 0.0f,
     0x1.0d0e06p-56f, 0.0f, 0.0f, 0x1.e5e196p-26f, 0x1.37ef24p-53f, 0.0f,
     0x1.4054b8p-58f, 0x1p0f, 0x1.6cb0d2p-27f, 0x1.45f3p-70f, 0x1.e4bd8ep-107f, 0.0f,
     0x1.1304acp-29f, 0.0f, 0.0f, 0.0f, 0x1.103e5ep-55f, 0x1.009b12p-112f,
     0x1.68172p-88f, 0.0f, 0x1.8646bep-79f, 0.0f, 0.0f, 0.0f, 0x1.a7e6f2p-86f, 0.0f,
     0x1.c4b3eap-48f, 0.0f, 0x1.936b46p-62f, 0x1.a3d012p-26f, 0.0f, 0x1.aba33cp-93f,
     0x1.f98bf4p-89f, 0x1.f33158p-99f, 0x1.d7dad4p-33f, 0.0f, 0.0f, 0.0f,
     0x1.984c58p-126f, 0x1.652f14p-51f, 0x1.a5c5c8p-42f, 0.0f, 0.0f, 0x1.3fb52ep-48f,
     0x1.5cf776p-117f, 0x1.5b9376p-15f, 0x1.b8766ap-70f, 0x1.1a171ap-56f,
     0x1.cdbfdap-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.536bacp-7f, 0x1.0668b8p-115f,
     0x1.e54dc4p-84f, 0.0f, 0.0f, 0.0f, 0x1.c8f634p-82f, 0x1.a3bc62p-46f, 0.0f, 0.0f,
     0x1.8a1e94p-84f, 0x1.b60cccp-18f, 0x1.bc529p-37f, 0x1.01a28p-58f, 0.0f, 0.0f,
     0x1.f366a2p-13f, 0.0f, 0.0f, 0x1.070198p-26f, 0.0f, 0.0f, 0x1.b7ed46p-43f,
     0x1.c00974p-98f, 0x1.b18384p-1f, 0x1.fec772p-104f, 0.0f, 0x1.c43cb4p-66f, 0.0f,
     0x1.74b02p-100f, 0x1.5a530ep-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.34377cp-28f,
     0x1.0d501cp-20f, 0.0f, 0.0f, 0x1.275dd6p-23f, 0x1.d2c5a8p-60f, 0x1.3c9c5cp-3f,
     0x1.f99c6ap-69f, 0.0f, 0x1.a00b6ep-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b34f1p-2f, 0.0f, 0.0f, 0x1.c5bc4ep-71f, 0.0f, 0x1.b067aep-35f,
     0x1.7f0fbap-90f, 0x1.d19bfcp-95f, 0x1.9a2782p-116f, 0.0f, 0x1.26ba52p-18f, 0.0f,
     0x1.3670f8p-12f, 0x1.0a12dep-121f, 0x1.9073b6p-32f, 0x1.57ca1cp-119f, 0.0f,
     0x1.20a5e8p-30f, 0.0f, 0.0f, 0.0f, 0x1.20eeaap-84f, 0.0f, 0.0f, 0x1.0d031cp-94f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0cff08p-124f, 0x1.766cbap-109f, 0.0f, 0.0f,
     0.0f, 0x1.4ab8eep-83f, 0.0f, 0x1.1940cp-62f, 0.0f, 0x1.44503ep-58f,
     0x1.65eaf2p-113f, 0x1.20d826p-112f, 0x1.53e3d4p-104f, 0.0f, 0.0f, 0.0f,
     0x1.14f91ep-78f, 0x1.bb856ep-16f, 0x1.f2e3d6p-62f, 0.0f, 0.0f, 0x1.0cbe0ep-30f,
     0.0f, 0.0f, 0x1.2718cp-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ea1f46p-103f, 0.0f, 0.0f, 0x1.6b4dc2p-116f, 0x1.4495d4p-37f, 0.0f,
     0x1.6cc49ap-95f, 0x1.d13d8ap-55f, 0.0f, 0.0f, 0x1.266012p-39f, 0.0f, 0.0f, 0.0f,
     0x1.473632p-10f, 0.0f, 0x1.0c2f02p-30f, 0x1.a06458p-91f, 0x1.f348c4p-8f,
     0x1.b6db92p-94f, 0x1.c66fa2p-85f, 0.0f, 0.0f, 0x1.07d1c2p-64f, 0.0f, 0.0f, 0.0f,
     0x1.eedd2ap-17f, 0x1.2e7af8p-91f, 0x1.fdb096p-59f, 0x1.e448acp-67f, 0.0f,
     0x1.31fdd2p-107f, 0x1.d50bfap-82f, 0x1.74dc18p-6f, 0.0f, 0.0f, 0x1.cd70d4p-40f,
     0.0f, 0x1.ee2ecp-120f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.43c644p-122f, 0.0f,
     0.0f, 0x1.aa4494p-43f, 0x1.b808cap-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.56e7e2p-11f,
     0.0f, 0.0f, 0x1.0977a4p-77f, 0.0f, 0.0f, 0.0f, 0x1.4041e8p-106f, 0x1.ff9682p-37f,
     0.0f, 0x1.97b4acp-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f8d628p-63f, 0.0f,
     0x1.78922p-26f, 0.0f, 0.0f, 0x1.e3be94p-20f, 0.0f, 0x1.f357b2p-58f, 0.0f,
     0x1.cc2f2cp-34f, 0x1.d362e6p-77f, 0x1.63df5ap-36f, 0.0f, 0x1.b008ccp-59f,
     0x1.28f6c2p-117f, 0.0f, 0x1.21a132p-23f, 0.0f, 0x1.5c4bf6p-83f, 0x1.4287cap-8f,
     0x1.551d58p-96f, 0.0f, 0.0f, 0x1.4be52ap-67f, 0.0f, 0x1.846b88p-69f, 0.0f, 0.0f,
     0x1.94386ep-85f, 0x1.7c5aaap-51f, 0x1.e15f52p-105f, 0.0f, 0x1.8c2ed6p-86f,
     0x1.fd79e6p-19f, 0.0f, 0x1.b6226p-82f, 0x1.81dcc4p-91f, 0x1.e3bcap-19f,
     0x1.48cf3ep-77f, 0.0f, 0x1.71d624p-51f, 0x1.65d0a4p-14f, 0.0f, 0x1.1fa5d4p-65f,
     0.0f, 0x1.e41c9cp-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0ff89ep-45f, 0.0f, 0x1.0cb236p-31f, 0x1.40b0f2p-75f, 0.0f, 0x1.2cf2aep-40f,
     0x1.c53038p-83f, 0.0f, 0.0f, 0x1.f0af88p-6f, 0.0f, 0.0f, 0x1.f9e0ep-121f, 0.0f,
     0x1.e021c2p-2f, 0.0f, 0x1.c7e00cp-23f, 0x1.e309dcp-15f, 0.0f, 0x1.3f03bap-25f,
     0x1.68bfaap-35f, 0.0f, 0.0f, 0x1.88ff6ap-11f, 0x1.ee3bfp-86f, 0.0f, 0.0f,
     0x1.80ebeep-116f, 0x1.cc3bf4p-64f, 0.0f, 0x1.5be18p-38f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.982cd4p-71f, 0x1.d564d8p-17f, 0.0f, 0.0f, 0x1.6bc884p-52f, 0.0f, 0.0f,
     0x1.02ef5p-83f, 0x1.6ea7c2p-107f, 0x1.254c36p-20f, 0x1.aed286p-112f, 0.0f,
     0x1.f43accp-61f, 0x1.121ac2p-1f, 0.0f, 0.0f, 0x1.acaec4p-73f, 0x1.c281eep-31f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d63398p-50f,
     0.0f, 0.0f, 0.0f, 0x1.87d408p-112f, 0.0f, 0.0f, 0.0f, 0x1.08ee3p-99f, 0.0f,
     0x1.9aca32p-18f, 0x1.35bff6p-101f, 0.0f, 0.0f, 0x1.ddb934p-29f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.6e2998p-58f, 0.0f, 0x1.c21c12p-37f, 0.0f, 0.0f, 0x1.1c0beap-40f,
     0x1.fc7a1cp-110f, 0.0f, 0.0f, 0x1.d77ab6p-58f, 0x1.5f1b9p-31f, 0.0f,
     0x1.1c63ecp-56f, 0x1.55c02ap-40f, 0.0f, 0x1.49e78ap-101f, 0.0f, 0x1.41be3ap-3f,
     0x1.aa7822p-95f, 0x1.3427fcp-58f, 0.0f, 0x1.f136c8p-50f, 0x1.1035bap-125f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b05edap-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a87618p-77f, 0.0f, 0x1.92b0f2p-118f, 0x1.41f2ccp-9f, 0x1.1b68bep-37f, 0.0f,
     0.0f, 0.0f, 0x1.6f93fep-65f, 0x1.dccdp-83f, 0.0f, 0x1.149296p-71f, 0.0f, 0.0f,
     0x1.a5b464p-109f, 0.0f, 0x1.5aca9cp-38f, 0.0f, 0x1.c17c68p-34f, 0.0f, 0.0f, 0.0f,
     0x1.616c58p-94f, 0.0f, 0x1.70014ep-31f, 0x1.fd5f4ap-107f, 0x1.1f372ap-73f, 0.0f,
     0.0f, 0x1.2e3272p-107f, 0.0f, 0x1.21f804p-112f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.516eaap-15f, 0x1.a41654p-23f, 0x1.92dd4ep-20f, 0x1.683814p-41f, 0.0f, 0.0f,
     0.0f, 0x1.9c78fcp-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9c4feep-93f, 0.0f,
     0x1.213d1cp-49f, 0.0f, 0.0f, 0x1.127dccp-64f, 0.0f, 0x1.b9ef4p-1f,
     0x1.3afadep-90f, 0.0f, 0x1.cc5b96p-24f, 0x1.d52088p-55f, 0.0f, 0.0f,
     0x1.6d59ep-48f, 0x1.db87d6p-91f, 0x1.2b6a8ep-63f, 0.0f, 0.0f, 0.0f,
     0x1.5997fap-72f, 0x1.f215fep-109f, 0x1.e17758p-1f, 0.0f, 0.0f, 0x1.e35a62p-106f,
     0.0f, 0.0f, 0.0f, 0x1.d1597ap-94f, 0x1.1c0c6ap-63f, 0x1.591982p-78f,
     0x1.9a9dfap-96f, 0.0f, 0.0f, 0x1.bccf14p-67f, 0x1.0c3684p-92f, 0x1.25dea6p-65f,
     0x1.64c82p-70f, 0x1.91e938p-88f, 0.0f, 0.0f, 0x1.ccebeep-39f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ca3158p-74f, 0.0f, 0x1.405518p-57f, 0.0f, 0x1.df503ep-106f,
     0x1.4a1ea4p-126f, 0x1.416372p-87f, 0.0f, 0.0f, 0x1.73c1acp-18f, 0.0f, 0.0f,
     0x1.0f358p-91f, 0.0f, 0.0f, 0x1.a069c4p-85f, 0.0f, 0x1.038708p-67f, 0.0f, 0.0f,
     0x1.f47beep-37f, 0.0f, 0x1.55c3eap-94f, 0.0f, 0.0f, 0x1.514e28p-72f, 0.0f, 0.0f,
     0.0f, 0x1.29a1eep-111f, 0x1p0f, 0x1.2b620cp-92f, 0.0f, 0x1.74223ap-16f, 0.0f,
     0x1.118646p-84f, 0x1.2dc3a6p-112f, 0.0f, 0x1.fadf76p-93f, 0x1.5f32bap-12f,
     0x1.b1a0bp-121f, 0x1.2b5774p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.53da52p-66f,
     0x1.707578p-21f, 0.0f, 0.0f, 0x1.00af1ep-97f, 0x1.ed6448p-106f, 0x1.59912p-10f,
     0x1.f7a072p-89f, 0x1.058c9cp-57f, 0x1.d931b4p-63f, 0x1.1c545ep-117f,
     0x1.fd4b24p-97f, 0.0f, 0x1.26b872p-6f, 0.0f, 0x1.8228bep-72f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.c9971ep-101f, 0x1.c3e266p-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.999714p-83f, 0x1.87a98p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ce458ap-86f, 0.0f,
     0x1.9ee2ecp-27f, 0.0f, 0.0f, 0x1.4aa866p-56f, 0x1.09331ap-86f, 0.0f,
     0x1.d9697p-32f, 0.0f, 0x1.a9ed9ep-112f, 0.0f, 0x1.b90bdep-90f, 0.0f, 0.0f,
     0x1.b8e9fcp-41f, 0x1.396ce4p-75f, 0.0f, 0.0f, 0.0f, 0x1.3b6846p-32f, 0.0f, 0.0f,
     0x1.43459p-32f, 0x1.0b33dp-108f, 0.0f, 0x1.94d50ep-48f, 0x1.7694e4p-66f, 0.0f,
     0x1.c8063ep-24f, 0x1.b03dcp-75f, 0x1.8b9d56p-124f, 0x1.3e7cb6p-44f, 0.0f,
     0x1.f44a78p-106f, 0x1.e525ecp-29f, 0x1.8e30ccp-69f, 0x1.7a303ep-90f, 0.0f,
     0x1.90664cp-96f, 0.0f, 0.0f, 0x1.13b5b2p-102f, 0.0f, 0.0f, 0x1.5fbd12p-123f,
     0x1.429e8ep-13f, 0x1.da50e8p-2f, 0x1.05c45p-124f, 0.0f, 0.0f, 0x1.5a3cd2p-19f,
     0x1.5d8afp-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b4294ep-62f, 0x1.4c2ebap-71f,
     0x1.7e045cp-124f, 0x1.711f48p-37f, 0x1.95f5cap-36f, 0x1.709a58p-67f, 0.0f, 0.0f,
     0.0f, 0x1.406ebcp-123f, 0.0f, 0x1.603212p-3f, 0.0f, 0x1.e2e21cp-16f,
     0x1.1ce882p-78f, 0x1.2a58a6p-40f, 0x1.8f87fep-37f, 0x1.539d7cp-110f,
     0x1.dfd2cp-94f, 0.0f, 0x1.d1d2acp-6f, 0.0f, 0.0f, 0x1.2fa36ep-75f, 0.0f,
     0x1.2c77cep-13f, 0.0f, 0.0f, 0x1.c58a4p-34f, 0x1.712f7ep-6f, 0x1.52f75ap-113f,
     0x1.ebb55ep-30f, 0.0f, 0.0f, 0.0f, 0x1.08394p-2f, 0.0f, 0.0f, 0.0f,
     0x1.5e52e6p-43f, 0x1.02353ap-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5f7eaap-61f, 0.0f, 0x1.139decp-16f, 0x1.60aabp-46f, 0x1.cd02cap-49f,
     0x1.a84c52p-84f, 0x1.0e7eb6p-29f, 0.0f, 0x1.83dfcap-110f, 0x1.c25a64p-104f, 0.0f,
     0.0f, 0.0f, 0x1.22cbep-79f, 0.0f, 0x1.ca06fep-106f, 0.0f, 0x1.2f6cdap-49f, 0.0f,
     0x1.e82daep-75f, 0.0f, 0x1.5a633ap-62f, 0.0f, 0.0f, 0.0f, 0x1.3045a6p-15f,
     0x1.18454cp-65f, 0.0f, 0x1.6657dep-70f, 0x1.6d53dcp-90f, 0.0f, 0.0f, 0.0f,
     0x1.c600fcp-79f, 0x1.a52898p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1942f6p-77f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.cab96ap-118f, 0x1.dfa96ep-2f, 0.0f, 0x1.6fcdf2p-79f,
     0x1.bf782ep-123f, 0.0f, 0.0f, 0x1.891dd6p-126f, 0.0f, 0x1.e8cb7p-11f, 0.0f,
     0x1.ee31dap-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.738202p-83f, 0x1.212bf4p-66f,
     0x1.77b132p-55f, 0.0f, 0x1.69d71p-60f, 0x1.be417ep-123f, 0x1.693d92p-53f, 0.0f,
     0.0f, 0x1.3bb566p-41f, 0x1.2eaef6p-94f, 0x1.fbb552p-75f, 0x1.335ac2p-57f,
     0x1.00f3aap-24f, 0.0f, 0.0f, 0x1.e9fc2ep-65f, 0.0f, 0x1.dce61cp-74f,
     0x1.9d321ap-48f, 0x1.d7b0e6p-39f, 0x1.9e9d9ep-44f, 0x1.0741bap-17f, 0.0f, 0.0f,
     0x1.93ee24p-116f, 0x1.32a54ep-13f, 0x1.000c8ap-81f, 0.0f, 0.0f, 0x1.44d6f4p-90f,
     0.0f, 0.0f, 0x1.826f66p-82f, 0.0f, 0x1.ddf43cp-2f, 0.0f, 0x1.66e38p-71f,
     0x1.7eb10cp-53f, 0x1.46c1acp-63f, 0x1.1515fcp-23f, 0x1.272ccap-124f,
     0x1.1f1026p-11f, 0.0f, 0x1.7566p-75f, 0.0f, 0x1.1bb878p-41f, 0.0f, 0.0f,
     0x1.b15644p-93f, 0x1.f6e8fep-64f, 0.0f, 0x1.b34d6cp-31f, 0.0f, 0x1.a41332p-62f,
     0x1.d7e294p-4f, 0x1.0506d8p-95f, 0x1.d79a2cp-45f, 0.0f, 0x1.df834p-44f,
     0x1.bf6e66p-59f, 0x1.5565ap-75f, 0.0f, 0.0f, 0x1.2379c6p-31f, 0.0f, 0.0f,
     0x1.6398bap-36f, 0x1.af2aa2p-51f, 0.0f, 0x1.2dab26p-56f, 0.0f, 0.0f,
     0x1.9eeb12p-115f, 0.0f, 0x1.ad88aep-2f, 0.0f, 0x1.ef55ep-2f, 0.0f, 0.0f, 0.0f,
     0x1.9b09e8p-93f, 0.0f, 0x1.7e5e8p-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bda8ap-47f,
     0.0f, 0.0f, 0x1.e59ecap-97f, 0.0f, 0x1.2f20e4p-7f, 0.0f, 0x1.27b826p-59f,
     0x1.f1547cp-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f6c708p-88f, 0x1.5c53c6p-33f, 0.0f,
     0x1.5ba0fap-61f, 0.0f, 0x1.a10148p-125f, 0x1.15e852p-85f, 0.0f, 0.0f,
     0x1.3c7482p-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.07adc6p-88f, 0x1.b837fp-110f, 0.0f,
     0x1.c6de0cp-124f, 0.0f, 0.0f, 0x1.b25644p-11f, 0x1.e0104ep-24f, 0x1.43b636p-70f,
     0.0f, 0x1.e50be4p-21f, 0x1.d4de98p-48f, 0.0f, 0x1.1bca22p-61f, 0.0f,
     0x1.827d0cp-92f, 0.0f, 0x1.64a3bcp-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d765bp-18f,
     0x1.56f7b6p-93f, 0x1.18ff1p-35f, 0x1.f78a2p-37f, 0x1.de9fb8p-91f, 0.0f, 0.0f,
     0x1.aafc12p-59f, 0.0f, 0.0f, 0x1.ece7fep-80f, 0x1.28716p-115f, 0x1.7c2e7ap-62f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3453aep-123f, 0x1.39948ap-96f, 0x1.b2b02cp-80f,
     0x1.10e6cp-33f, 0.0f, 0x1.7bbb5p-3f, 0.0f, 0.0f, 0x1.0e0beap-92f,
     0x1.c61072p-50f, 0.0f, 0x1.5f127ep-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f,
     0x1.9769b4p-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7ec7dep-95f, 0.0f, 0.0f,
     0x1.eaddc6p-37f, 0.0f, 0x1.de6158p-29f, 0.0f, 0x1.e71bbap-54f, 0x1.4dd76ep-11f,
     0x1.bf1c1ap-80f, 0x1.a7f042p-62f, 0.0f, 0.0f, 0.0f, 0x1.82d24ep-21f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e3b61ap-13f, 0x1.9cb934p-5f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.5bc30ap-96f, 0x1.c89198p-47f, 0x1.c28c0cp-19f, 0.0f,
     0x1.16147ep-85f, 0.0f, 0.0f, 0.0f, 0x1.13663cp-15f, 0x1.cff264p-80f,
     0x1.ec32b8p-28f, 0x1.48864ap-76f, 0x1.9ad8b6p-123f, 0.0f, 0x1.c08dap-1f,
     0x1.0845cep-32f, 0.0f, 0x1.811436p-118f, 0x1.82a902p-30f, 0x1.267fbep-27f,
     0x1.9bbdb4p-75f, 0.0f, 0x1.f918b4p-25f, 0.0f, 0x1.0eb5d8p-14f, 0.0f,
     0x1.8bb036p-112f, 0.0f, 0x1.9d107p-18f, 0.0f, 0.0f, 0.0f, 0x1.b591dep-9f,
     0x1.49f39ep-17f, 0x1.ceb872p-76f, 0x1.d39e6p-125f, 0x1.1fcb08p-77f,
     0x1.b9e25p-21f, 0x1.3744b2p-126f, 0x1.9833e6p-77f
};
static const float external_bench_wrapper_input_table_arg1[1004]  = {
     0.0f, 0x1.0725dap-74f, 0x1.9ddbb2p-74f, 0x1.41e226p-34f, 0x1.5b5b0cp-65f,
     0x1.e814f6p-84f, 0.0f, 0x1.7fa946p-96f, 0x1.2df7c6p-123f, 0x1.8b879cp-25f,
     0x1.c674cap-118f, 0x1.7deaaap-13f, 0x1.a30faep-7f, 0x1.7f4f6p-111f,
     0x1.7d86f2p-115f, 0x1.3bf44ep-49f, 0.0f, 0x1.98c87p-63f, 0.0f, 0x1.5dcaf6p-76f,
     0x1.6507f8p-21f, 0x1.6f468ep-47f, 0.0f, 0.0f, 0.0f, 0x1.0ba1eep-36f, 0.0f, 0.0f,
     0x1.e52722p-21f, 0x1.5f9032p-113f, 0.0f, 0.0f, 0x1.23663p-7f, 0x1.6defecp-105f,
     0x1.bdd62cp-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.597bb6p-52f, 0x1.b44588p-102f,
     0.0f, 0x1.120c9ep-1f, 0x1.122e4ep-39f, 0.0f, 0x1.1c6aacp-64f, 0.0f,
     0x1.b845bcp-56f, 0x1.e7eacap-30f, 0.0f, 0x1.e87a86p-126f, 0x1.abe2f6p-40f,
     0x1.81bed6p-70f, 0x1.5214fep-27f, 0x1.e6dc9cp-62f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1a9adep-79f, 0x1.7a3cd8p-40f, 0.0f, 0x1.c55a4cp-69f, 0x1.5a5302p-93f,
     0x1.c71efcp-106f, 0.0f, 0x1.78d078p-102f, 0x1.571d3ep-30f, 0.0f, 0x1.b30b8p-82f,
     0x1.efda8ap-50f, 0x1.2e8da6p-17f, 0.0f, 0x1.cde694p-79f, 0.0f, 0.0f,
     0x1.fce5d4p-66f, 0x1.73d012p-88f, 0x1.6af9d2p-32f, 0x1.730e5ap-73f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a9d1fap-47f, 0x1.11d24ap-15f, 0x1.1182ep-95f, 0.0f,
     0x1.0aeb92p-106f, 0x1.35a7cap-66f, 0x1.b7355p-15f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e38ed2p-31f, 0.0f, 0.0f, 0x1.3906b4p-91f, 0.0f, 0x1.dfc5d8p-122f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1c6302p-83f, 0.0f, 0.0f, 0x1.f936ap-62f, 0x1.24977cp-33f, 0.0f,
     0.0f, 0.0f, 0x1.1f2b5p-54f, 0.0f, 0x1.f82a6ap-108f, 0x1.c0906cp-45f, 0.0f,
     0x1.0181eap-70f, 0x1.945ae2p-11f, 0.0f, 0x1.b51196p-52f, 0x1p0f, 0x1.0835a6p-36f,
     0.0f, 0.0f, 0x1.113674p-41f, 0x1.23307cp-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ae9f8cp-32f, 0x1.26314p-116f, 0x1.9fea46p-17f, 0.0f, 0.0f, 0x1.277e38p-24f,
     0.0f, 0x1.f7772ap-124f, 0.0f, 0x1.c0ad96p-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bb3cbep-45f, 0x1.39452ep-66f, 0x1.953f92p-57f, 0.0f, 0.0f, 0x1.886cb2p-66f,
     0x1.5863ecp-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c7b902p-35f, 0.0f, 0.0f,
     0x1.b8f512p-118f, 0x1.3d26p-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a2cc5ep-100f,
     0x1.83f6bap-77f, 0x1.21b5aap-4f, 0x1.a25a4p-89f, 0x1.c14edep-15f, 0.0f, 0.0f,
     0x1.3f592cp-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a68f9cp-6f, 0.0f, 0.0f,
     0x1.f57ccep-27f, 0.0f, 0.0f, 0.0f, 0x1.27539ap-98f, 0.0f, 0x1.954d76p-9f,
     0x1.97e7a4p-52f, 0.0f, 0x1.350338p-41f, 0.0f, 0.0f, 0x1.8eac2ap-88f,
     0x1.63769ap-107f, 0.0f, 0.0f, 0x1.28a3f4p-75f, 0.0f, 0.0f, 0x1.4bdd96p-13f,
     0x1.3ed984p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c839dp-106f,
     0x1.0d7d9ep-100f, 0x1.5307f4p-29f, 0.0f, 0x1.bb7628p-104f, 0x1.c9e964p-59f,
     0x1.113d54p-126f, 0.0f, 0.0f, 0.0f, 0x1.a816b8p-101f, 0x1.4a3aa6p-39f, 0.0f,
     0.0f, 0x1.70ecccp-74f, 0.0f, 0x1.90bff8p-32f, 0.0f, 0x1.d014cp-54f,
     0x1.5c6878p-2f, 0.0f, 0.0f, 0x1.147dbp-90f, 0.0f, 0.0f, 0.0f, 0x1.d5c3c6p-116f,
     0.0f, 0x1.d1d7dp-97f, 0.0f, 0.0f, 0x1.c7aff6p-80f, 0.0f, 0x1.6f24cap-60f,
     0x1.5552a8p-114f, 0.0f, 0.0f, 0x1.25e9d8p-50f, 0.0f, 0.0f, 0x1.b08d68p-90f, 0.0f,
     0x1.181c52p-123f, 0.0f, 0x1.edbc2p-91f, 0x1.ed7834p-75f, 0.0f, 0.0f,
     0x1.f2fc04p-98f, 0.0f, 0x1.61f93p-67f, 0x1.c5f38ep-121f, 0.0f, 0.0f, 0.0f,
     0x1.e8a92ap-22f, 0x1.b4dd52p-78f, 0x1.4294bp-9f, 0.0f, 0.0f, 0x1.2dec38p-27f,
     0x1.077cdp-2f, 0.0f, 0.0f, 0.0f, 0x1.6769eep-89f, 0x1.2df426p-125f,
     0x1.372524p-13f, 0x1.0070c6p-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4129c4p-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.10f1a2p-89f, 0.0f, 0.0f,
     0x1.e1cf32p-47f, 0.0f, 0x1.448966p-37f, 0.0f, 0x1.706baep-67f, 0.0f,
     0x1.3ab2f2p-112f, 0x1.2b7d5cp-61f, 0x1.a50f2cp-71f, 0x1.7b453cp-76f,
     0x1.f1ff6ep-64f, 0x1.306b18p-71f, 0.0f, 0x1.ffcffap-92f, 0.0f, 0.0f,
     0x1.5bb626p-66f, 0.0f, 0x1.d91496p-14f, 0.0f, 0.0f, 0x1.91ab68p-91f,
     0x1.18ed54p-16f, 0.0f, 0x1.fac3bcp-10f, 0x1.333684p-81f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c1f9dep-22f, 0x1.c1c89p-60f, 0x1.032c4cp-17f, 0x1.87b002p-14f, 0.0f, 0.0f,
     0.0f, 0x1.8ba0c8p-67f, 0x1.e8066cp-88f, 0.0f, 0.0f, 0x1.dc22f2p-116f,
     0x1.d941b8p-13f, 0.0f, 0.0f, 0.0f, 0x1.7c9268p-113f, 0.0f, 0x1.9db5c6p-27f,
     0x1.73c5a4p-58f, 0x1.23573ep-9f, 0x1.94641p-18f, 0x1.8c1054p-14f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.75c61ap-80f, 0x1.03ab56p-107f, 0x1.cee37ep-42f, 0x1.222514p-73f,
     0.0f, 0.0f, 0.0f, 0x1.c40fbcp-93f, 0.0f, 0x1.e8a8fp-116f, 0x1.4989cap-43f, 0.0f,
     0x1.1830eep-107f, 0x1.cd800cp-28f, 0x1.411366p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.1cfa02p-49f, 0x1.57cba4p-125f, 0.0f, 0x1.8ba116p-27f,
     0.0f, 0x1.0764c6p-69f, 0.0f, 0.0f, 0.0f, 0x1.e2fc24p-118f, 0x1.666a8ep-7f,
     0x1.77281cp-1f, 0x1.9be35ep-86f, 0.0f, 0x1.7d49dep-15f, 0.0f, 0x1.8a6984p-86f,
     0.0f, 0x1.60210cp-109f, 0x1.faf46ep-80f, 0.0f, 0.0f, 0x1.b1ebdap-81f, 0.0f, 0.0f,
     0.0f, 0x1.09d354p-16f, 0x1.0f8c58p-2f, 0.0f, 0x1.e186bep-87f, 0x1.eead56p-5f,
     0x1.18e54p-70f, 0x1.c33068p-33f, 0x1.d41436p-113f, 0x1.09710ap-16f,
     0x1.1b2ed6p-20f, 0.0f, 0.0f, 0x1.0b8e72p-82f, 0.0f, 0x1.fc79a4p-113f,
     0x1.a2b232p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cee5bap-38f,
     0x1.594c2ep-25f, 0x1.1cb9b8p-13f, 0x1.1fac58p-115f, 0.0f, 0x1.d7c50ap-50f,
     0x1.e2ca4cp-49f, 0x1.eec10cp-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a9eefcp-51f,
     0x1.d2e9eap-82f, 0.0f, 0x1.2021b6p-56f, 0x1.a3218cp-3f, 0x1.aef786p-4f, 0.0f,
     0x1.45bf3cp-36f, 0.0f, 0.0f, 0.0f, 0x1.9c8db8p-70f, 0x1.94e2d4p-38f, 0.0f,
     0x1.c8ecfcp-124f, 0x1.948ed8p-11f, 0.0f, 0.0f, 0.0f, 0x1.9d6af8p-56f,
     0x1.4cd43cp-88f, 0.0f, 0x1.435cbcp-70f, 0x1.7156aep-59f, 0x1.4b2df4p-95f, 0.0f,
     0.0f, 0x1.fd2438p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cf2f26p-16f, 0.0f, 0.0f,
     0x1.b8d33ep-20f, 0.0f, 0.0f, 0.0f, 0x1.1c05fap-60f, 0x1.c1c88ap-94f, 0.0f, 0.0f,
     0x1.dde512p-122f, 0x1.e5a3f6p-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.683e88p-8f, 0.0f,
     0.0f, 0.0f, 0x1.bff41p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1f2362p-48f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.97a248p-85f, 0.0f, 0x1.d0383p-79f, 0.0f,
     0x1.debeb4p-69f, 0x1.06a8bep-32f, 0x1.cd041cp-111f, 0.0f, 0.0f, 0.0f,
     0x1.f42854p-62f, 0x1.83830ep-63f, 0x1.a4f3bap-112f, 0x1.f494c4p-28f,
     0x1.39dae4p-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0251d8p-104f, 0.0f, 0.0f,
     0x1.cd4d88p-49f, 0x1.c5d8aep-26f, 0x1.491738p-46f, 0.0f, 0x1.849dd2p-47f,
     0x1.9ed3cp-111f, 0x1.358208p-76f, 0x1.523e24p-85f, 0.0f, 0.0f, 0x1.121cbap-5f,
     0x1.74dbfcp-41f, 0x1.48fe58p-122f, 0x1.a5df8p-126f, 0x1.07f51p-12f,
     0x1.c051c8p-45f, 0.0f, 0.0f, 0x1.fc9fa2p-43f, 0.0f, 0.0f, 0.0f, 0x1.e1778cp-37f,
     0.0f, 0x1.b1ce2ep-121f, 0.0f, 0x1.6e2ee4p-124f, 0x1.544dbap-43f, 0x1.c7c82cp-77f,
     0x1.d05c3p-3f, 0.0f, 0x1.a03a88p-115f, 0x1.23ac3ap-41f, 0.0f, 0x1.8f1c7ap-25f,
     0.0f, 0.0f, 0x1.2dc22cp-72f, 0x1.1753p-15f, 0x1.1a3e42p-107f, 0.0f,
     0x1.a6daaap-35f, 0.0f, 0.0f, 0x1.597c3p-73f, 0x1.f03c4p-5f, 0.0f,
     0x1.196caap-117f, 0.0f, 0x1.8dc9dp-14f, 0.0f, 0x1.b0a1aap-17f, 0x1.0005a6p-50f,
     0.0f, 0x1.9e1cfcp-61f, 0x1.a50b86p-5f, 0x1.c4b8ap-86f, 0.0f, 0.0f,
     0x1.56e77ep-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.97adb6p-96f,
     0x1.61b476p-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7ac1f4p-119f, 0x1.e40e52p-124f,
     0x1.d53816p-89f, 0x1.a04e96p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ba4ea6p-20f,
     0.0f, 0.0f, 0x1.c8528cp-90f, 0.0f, 0.0f, 0x1.163574p-103f, 0x1.d95bc2p-121f,
     0x1.5a6c22p-106f, 0x1.95b926p-18f, 0x1.ca396p-55f, 0x1.8af13cp-31f, 0.0f,
     0x1.9a981ap-122f, 0.0f, 0x1.e36676p-30f, 0x1.6b4efap-54f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fdeb48p-97f, 0.0f, 0x1.ecfe1ep-47f, 0.0f, 0x1.1ab7ccp-42f, 0x1.28091cp-12f,
     0x1.6530d6p-113f, 0x1.3f593ep-16f, 0.0f, 0x1.efd862p-97f, 0x1.da9e5ap-103f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3c5f9p-15f, 0.0f,
     0x1.73dc62p-50f, 0x1.a157eap-42f, 0.0f, 0x1.a6e3c2p-22f, 0x1.49243ep-57f,
     0x1.a7cb94p-60f, 0x1.f7bd88p-3f, 0x1.3ff06cp-22f, 0.0f, 0.0f, 0.0f,
     0x1.fa55e6p-3f, 0x1.ad8628p-40f, 0.0f, 0.0f, 0x1.ddc038p-7f, 0x1.472d7ap-10f,
     0.0f, 0.0f, 0x1.259892p-110f, 0.0f, 0.0f, 0.0f, 0x1.91d272p-45f, 0x1.32845cp-66f,
     0.0f, 0x1.aaef52p-74f, 0.0f, 0.0f, 0.0f, 0x1.77269ap-38f, 0x1.3568ccp-117f,
     0x1.d8f91p-76f, 0.0f, 0x1.5a322p-16f, 0x1.ef66eap-22f, 0.0f, 0x1.fc09fcp-81f,
     0.0f, 0x1.a4b4fp-66f, 0x1.12045cp-84f, 0x1.99cb1cp-106f, 0x1.c75f82p-115f, 0.0f,
     0x1.72172ap-20f, 0x1.072f3cp-120f, 0.0f, 0.0f, 0.0f, 0x1.ad1048p-42f,
     0x1.dd213ap-41f, 0x1.a8685cp-126f, 0.0f, 0.0f, 0.0f, 0x1.691414p-89f,
     0x1.041248p-5f, 0x1.667f96p-2f, 0.0f, 0.0f, 0x1.9ce2a8p-114f, 0.0f,
     0x1.3541cap-75f, 0x1.76465ap-49f, 0x1.fcd38p-49f, 0x1.dbab66p-46f, 0.0f,
     0x1.5124a6p-12f, 0.0f, 0x1.ea18cap-96f, 0x1.fa5f7ep-110f, 0.0f, 0x1.3b6db6p-74f,
     0x1.96accp-114f, 0x1.655bf6p-124f, 0x1.df59d6p-84f, 0.0f, 0x1.59afc4p-74f,
     0x1.280e0ap-44f, 0x1.3e431ap-75f, 0x1.59afb8p-70f, 0.0f, 0.0f, 0.0f,
     0x1.063d36p-120f, 0x1.911196p-72f, 0x1.8bbc44p-42f, 0x1.929886p-53f,
     0x1.db6d08p-104f, 0x1.b4a79ep-80f, 0.0f, 0x1.51d126p-56f, 0x1.2806c4p-65f,
     0x1.b977dep-112f, 0.0f, 0x1.c0826ap-74f, 0x1.8f80a2p-70f, 0.0f, 0x1.51fb48p-47f,
     0.0f, 0.0f, 0.0f, 0x1.56f9d6p-98f, 0x1.16e3fp-88f, 0.0f, 0x1.ec1ab6p-4f, 0.0f,
     0.0f, 0.0f, 0x1.5f589ep-6f, 0x1.a6a15p-15f, 0x1.1c2be6p-102f, 0.0f,
     0x1.8770dp-68f, 0.0f, 0x1.153cp-75f, 0x1.e88d3ep-18f, 0x1.8374c4p-106f,
     0x1.b250e2p-120f, 0x1.95d52ap-62f, 0.0f, 0.0f, 0x1.8af0d4p-112f, 0.0f,
     0x1.80b2e4p-41f, 0x1.d65464p-46f, 0.0f, 0.0f, 0x1.15f9bap-122f, 0x1.fb1ab4p-68f,
     0x1.a40ef6p-94f, 0x1.c3a7f8p-94f, 0x1.5f61e8p-48f, 0.0f, 0x1.0de226p-26f,
     0x1.d7fe0cp-111f, 0x1.35fa84p-58f, 0x1.866644p-89f, 0x1.e0bd54p-76f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a896a2p-7f, 0x1.f5e088p-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0304bp-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c6e558p-108f, 0x1.6ce884p-29f,
     0x1.a6d616p-38f, 0.0f, 0x1.f931dcp-67f, 0x1.56508cp-70f, 0x1.5e016ap-36f,
     0x1.14a866p-53f, 0.0f, 0.0f, 0x1.9f1bbep-104f, 0.0f, 0x1.e2b42cp-8f, 0.0f,
     0x1.f52ee4p-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0823cep-69f, 0x1.05716cp-106f,
     0x1.3c45f6p-70f, 0x1.5f9a64p-71f, 0.0f, 0x1.5a00b8p-34f, 0x1.763f3cp-39f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.607abep-95f, 0x1.857dc6p-40f, 0x1.8b496ep-121f, 0.0f,
     0x1.be759cp-77f, 0.0f, 0x1.b16b78p-23f, 0x1.b1c3e6p-56f, 0x1.927bc8p-96f, 0.0f,
     0.0f, 0x1.99914ep-63f, 0x1.269592p-97f, 0x1.82acbcp-1f, 0x1.3d01f2p-25f,
     0x1.13ff56p-6f, 0.0f, 0x1p0f, 0x1.f55a7ep-118f, 0x1.b8e48ep-105f,
     0x1.5742cep-122f, 0.0f, 0.0f, 0x1.54a9fap-118f, 0.0f, 0.0f, 0x1.b51cb2p-96f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.efd654p-7f, 0.0f,
     0x1.2fb268p-67f, 0x1.986396p-42f, 0x1.88006ap-54f, 0.0f, 0.0f, 0x1.6846f4p-66f,
     0x1.4490c4p-6f, 0x1.484a3cp-83f, 0.0f, 0x1.c1f75ep-124f, 0x1.a0e81p-53f, 0.0f,
     0.0f, 0x1.d0b372p-38f, 0x1.507ed2p-124f, 0x1.cdfed6p-64f, 0.0f, 0x1.45218cp-16f,
     0x1.d29d94p-93f, 0.0f, 0.0f, 0x1.55d39p-65f, 0x1.586e76p-40f, 0.0f, 0.0f, 0.0f,
     0x1.3da9f2p-47f, 0x1.d9c036p-54f, 0x1.2e8a16p-66f, 0x1.5cd3cp-3f, 0x1p0f, 0.0f,
     0x1.4030ap-23f, 0.0f, 0x1.7a3942p-107f, 0.0f, 0x1.154edap-35f, 0.0f, 0.0f, 0.0f,
     0x1.1bf85cp-14f, 0x1.c72da2p-72f, 0.0f, 0x1.7d0e8cp-42f, 0.0f, 0.0f,
     0x1.cab6bep-67f, 0x1.f3bf96p-63f, 0x1.d14a4ep-25f, 0x1.439316p-115f,
     0x1.f327a2p-70f, 0.0f, 0.0f, 0x1.862ce6p-89f, 0x1.6b3b18p-36f, 0.0f,
     0x1.e1fa72p-67f, 0.0f, 0.0f, 0.0f, 0x1.e24216p-71f, 0x1.1f6452p-119f, 0.0f, 0.0f,
     0.0f, 0x1.6aafbep-86f, 0x1.0d34bp-74f, 0.0f, 0x1.4a47dcp-114f, 0.0f,
     0x1.5672dp-108f, 0.0f, 0x1.68d2e8p-29f, 0.0f, 0x1.6e2ecep-31f, 0x1.879308p-71f,
     0x1.a442ep-19f, 0x1.e53074p-57f, 0x1.cef00ep-122f, 0.0f, 0x1.2dcadap-39f, 0.0f,
     0.0f, 0x1.4e6046p-102f, 0.0f, 0x1.62c6bcp-79f, 0.0f, 0x1.a931fp-26f,
     0x1.954fdep-71f, 0x1.4858p-100f, 0.0f, 0.0f, 0.0f, 0x1.c230dep-123f,
     0x1.8918dp-87f, 0.0f, 0x1.198ffep-107f, 0.0f, 0x1.6bd0ecp-94f, 0.0f,
     0x1.75d76cp-104f, 0x1.9df4f2p-11f, 0x1.20acecp-3f, 0x1.00785p-73f,
     0x1.765544p-120f, 0.0f, 0x1.4ea95p-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6d3974p-30f, 0x1.a6a6c8p-55f, 0.0f, 0x1.5cd13ep-33f, 0x1.4c1374p-20f,
     0x1.d54a1ep-20f, 0x1.c0b56ep-84f, 0.0f, 0x1.7f7cfap-22f, 0x1.bb657p-119f,
     0x1.8a9a04p-86f, 0x1.15e6f8p-18f
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
            ml_float4_t tmp3;
            int32_t tmp4;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            memcpy(&tmp1, ((ml_float4_t*)(external_bench_wrapper_input_table_arg1+ i)), 16);
            tmp2 = Sleef_fdimf4_avx2128(tmp0, tmp1);
            memcpy(((ml_float4_t*)(external_bench_wrapper_output_table+ i)), &(tmp2), 16);
            tmp3 = local_acc + tmp2;
            local_acc = tmp3;
            tmp4 = i + INT32_C(4);
            i = tmp4;
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
    printf("Sleef_fdimf4_avx2128 %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_fdimf4_avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
