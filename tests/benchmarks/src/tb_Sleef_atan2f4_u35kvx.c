/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_atan2f4_u35kvx.c --function Sleef_atan2f4_u35kvx \
 *     --arity 2 --headers sleef.h,ml_support_lib.h --input-formats \
 *     binary32,binary32 --vector-size 4 --function-input-vector-size 4 \
 *     --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float4_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float4_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0.0f, 0x1.73780ep-48f, 0x1.09e35ap-109f, 0x1.ecdb48p-86f, 0x1.a469e8p-61f,
     0x1.05e86ap-20f, 0x1.3b2fap-102f, 0.0f, 0x1.e2dbf2p-107f, 0.0f, 0.0f, 0.0f,
     0x1.f72f34p-88f, 0.0f, 0.0f, 0x1.aa9696p-41f, 0x1.2408dap-40f, 0x1.7a0088p-33f,
     0.0f, 0.0f, 0x1.1d9ab8p-112f, 0.0f, 0x1.5a4984p-53f, 0.0f, 0.0f, 0x1.a6b278p-8f,
     0.0f, 0.0f, 0x1.176224p-17f, 0x1.950b86p-68f, 0.0f, 0x1.af2cb6p-45f, 0.0f,
     0x1.2aec4cp-22f, 0.0f, 0x1.ff3a3ep-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.837144p-55f,
     0x1.8db1b6p-110f, 0x1.cd3a9cp-76f, 0.0f, 0.0f, 0x1.01aaccp-116f,
     0x1.1bdf78p-126f, 0x1.eda4cp-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4f277cp-100f, 0.0f,
     0.0f, 0x1.54ac32p-77f, 0.0f, 0x1.5ef074p-49f, 0x1.db9ecp-40f, 0.0f, 0.0f,
     0x1.fa27eap-125f, 0.0f, 0x1.4e9368p-40f, 0x1.614a48p-19f, 0x1.78604p-45f, 0.0f,
     0x1.3fee04p-126f, 0x1.7af956p-44f, 0x1.459afcp-86f, 0.0f, 0.0f, 0x1.7f2bb2p-23f,
     0x1.302da4p-126f, 0.0f, 0.0f, 0.0f, 0x1.6b0a7p-22f, 0x1.da3e2ap-100f, 0.0f,
     0x1.a0f89ap-64f, 0x1.2e58cp-105f, 0.0f, 0.0f, 0x1.fa4ap-113f, 0x1.bbf2ap-45f,
     0.0f, 0.0f, 0x1.f61196p-36f, 0.0f, 0.0f, 0.0f, 0x1.6fdd82p-69f, 0.0f, 0.0f,
     0x1.5d5656p-5f, 0x1.32a62ap-78f, 0x1.ee4952p-2f, 0.0f, 0x1.9a4b0cp-42f,
     0x1.b7ffa2p-81f, 0x1.19d832p-24f, 0x1.6887ep-120f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.71c39ap-108f, 0.0f, 0x1.52ed9ap-69f, 0.0f, 0.0f, 0x1.bc1c6ap-70f, 0.0f,
     0x1.5971fep-123f, 0x1.b84752p-66f, 0.0f, 0.0f, 0x1.f3fcb4p-15f, 0.0f, 0.0f,
     0x1.d173fcp-94f, 0x1.8e7ba4p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7d0512p-6f,
     0x1.fce1c6p-59f, 0.0f, 0x1.db7d88p-102f, 0x1.e4ad9ap-16f, 0x1.7e9a2cp-6f, 0.0f,
     0.0f, 0x1.66fde2p-53f, 0x1.e516eep-112f, 0.0f, 0x1.433b46p-46f, 0x1.673d8ap-60f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.4eb922p-107f, 0.0f, 0x1p0f, 0.0f, 0x1.7c7a08p-39f,
     0.0f, 0x1.8501f4p-58f, 0.0f, 0.0f, 0.0f, 0x1.c6f40ap-70f, 0x1.74d4aep-101f, 0.0f,
     0.0f, 0x1.f48fc4p-114f, 0x1.41360ep-57f, 0x1.1d98b2p-20f, 0x1.1f2116p-35f,
     0x1.580e1ep-66f, 0x1.332ff8p-49f, 0.0f, 0x1.a22b6ap-47f, 0.0f, 0x1.e7b50ep-49f,
     0x1.61dda8p-123f, 0.0f, 0.0f, 0x1.7d6958p-68f, 0.0f, 0x1.f56c02p-54f, 0.0f,
     0x1.da85ecp-87f, 0x1.874d3p-5f, 0x1.09ef6ep-72f, 0.0f, 0.0f, 0x1.04c20ep-41f,
     0.0f, 0.0f, 0x1.5bfe4p-69f, 0.0f, 0.0f, 0.0f, 0x1.fc6d0ep-3f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e13becp-47f, 0x1.5f85dcp-39f, 0.0f, 0x1.7df472p-108f, 0.0f, 0.0f,
     0x1.54ac9p-88f, 0.0f, 0x1.0bf97ep-43f, 0.0f, 0x1.776e76p-39f, 0.0f, 0.0f,
     0x1.2bda96p-109f, 0x1.0161a8p-95f, 0.0f, 0.0f, 0x1.8b843ap-3f, 0x1.8778aep-2f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dc0258p-41f, 0.0f, 0.0f, 0.0f, 0x1.425822p-27f,
     0.0f, 0.0f, 0x1.e5871ep-116f, 0x1.e255fcp-1f, 0x1.9c76bp-29f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e22708p-54f, 0x1.2a2092p-86f, 0.0f, 0x1.29eeb6p-9f, 0x1.59d1aep-54f,
     0x1.9b3e8ap-75f, 0.0f, 0.0f, 0x1.edfb1cp-79f, 0.0f, 0.0f, 0x1.042902p-8f,
     0x1.a2c142p-58f, 0x1.afd43ap-85f, 0.0f, 0x1.94fc46p-9f, 0.0f, 0x1.d0cb1p-31f,
     0x1.525048p-47f, 0x1.100642p-74f, 0.0f, 0.0f, 0x1.52ef16p-90f, 0.0f,
     0x1.fd6e72p-111f, 0.0f, 0x1.fccdaep-112f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.80e0dp-118f, 0x1.ed8dacp-83f, 0.0f, 0x1.d16422p-13f, 0x1.4a3364p-27f,
     0x1.0fa62p-122f, 0x1.e74e1ap-44f, 0x1.8e7798p-39f, 0x1.51dbecp-8f, 0.0f,
     0x1.b187fp-122f, 0.0f, 0x1.441fa6p-28f, 0.0f, 0.0f, 0x1.401f74p-126f, 0.0f,
     0x1.c284fep-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c4cp-79f, 0x1.4446cp-29f, 0.0f,
     0.0f, 0.0f, 0x1.183032p-62f, 0x1.4ca052p-5f, 0x1.4bc496p-14f, 0x1.f4b31ep-28f,
     0x1.111d9cp-6f, 0.0f, 0.0f, 0.0f, 0x1.96b892p-98f, 0.0f, 0.0f, 0.0f,
     0x1.1e326ap-69f, 0.0f, 0x1.a7138p-14f, 0.0f, 0.0f, 0.0f, 0x1.be5d3ep-93f,
     0x1.453276p-126f, 0x1.5c41a6p-52f, 0x1.3bd136p-74f, 0x1.ee8d5cp-47f,
     0x1.7eb0dcp-22f, 0x1.e55084p-97f, 0x1.8edap-28f, 0.0f, 0.0f, 0x1.27de06p-21f,
     0.0f, 0x1.6b5adp-57f, 0x1.582d06p-47f, 0.0f, 0x1.9f6ae4p-13f, 0x1.de92p-33f,
     0x1.a2edcp-50f, 0x1.c6375ep-33f, 0.0f, 0x1.d54d38p-103f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ac7c9cp-55f, 0.0f, 0x1.1df76cp-52f, 0x1.530bd8p-57f, 0x1.68155ap-109f,
     0x1.05d8e4p-69f, 0x1.17e248p-100f, 0x1.6278bcp-93f, 0x1.3b04bap-18f, 0.0f, 0.0f,
     0x1.288c14p-49f, 0x1.5cd5dp-40f, 0.0f, 0x1.cc3038p-125f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.3f4bd6p-119f, 0.0f, 0x1.163588p-8f, 0.0f, 0.0f, 0x1.1684dep-35f,
     0x1.185952p-10f, 0.0f, 0x1.0a1f5ap-103f, 0x1.700702p-38f, 0x1.9ed294p-121f,
     0x1.efb188p-27f, 0.0f, 0.0f, 0.0f, 0x1.6567ccp-4f, 0x1.e72fep-113f, 0.0f, 0.0f,
     0x1.f0c942p-83f, 0.0f, 0.0f, 0.0f, 0x1.809efap-68f, 0.0f, 0x1.9b8d8ep-1f, 0.0f,
     0x1.559ff8p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a04034p-89f, 0.0f, 0.0f,
     0x1.eb0b88p-55f, 0.0f, 0x1.2ed638p-119f, 0.0f, 0.0f, 0.0f, 0x1p0f,
     0x1.6bea1ap-15f, 0x1.2ab66cp-94f, 0.0f, 0.0f, 0x1.54ad5ap-81f, 0x1.378676p-111f,
     0.0f, 0x1.6e652cp-90f, 0.0f, 0.0f, 0x1.51f64ap-1f, 0x1.ad159ep-49f,
     0x1.c584a2p-120f, 0.0f, 0.0f, 0x1.2d687ep-114f, 0x1.88ba54p-3f, 0x1.bfacc4p-69f,
     0x1.a8da4p-63f, 0x1.8afa84p-126f, 0x1.ad0efap-41f, 0x1.8bfe26p-20f, 0.0f,
     0x1.acf3e4p-32f, 0.0f, 0x1.f2091p-28f, 0.0f, 0x1.7e52fap-85f, 0x1.e72e12p-72f,
     0.0f, 0.0f, 0.0f, 0x1.c0cab8p-2f, 0.0f, 0x1.21619ep-31f, 0x1.17826ap-70f, 0.0f,
     0.0f, 0x1.a1cd8p-57f, 0.0f, 0x1.1b5ca2p-14f, 0x1.d57148p-44f, 0.0f,
     0x1.77a64cp-22f, 0.0f, 0x1.9cd334p-107f, 0x1.f58efep-61f, 0x1.6e6a8p-89f,
     0x1.ec63a2p-98f, 0.0f, 0x1.363464p-21f, 0x1.bd626cp-59f, 0x1.56e968p-34f, 0.0f,
     0.0f, 0x1.0bb45cp-49f, 0x1.0d437cp-36f, 0.0f, 0.0f, 0.0f, 0x1.f4221ap-19f,
     0x1.729ba8p-111f, 0x1.ace58p-74f, 0x1.d7f5dcp-5f, 0x1.366e08p-38f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.862b94p-58f, 0.0f, 0x1.4969c2p-76f,
     0x1.d6e0a4p-69f, 0x1.cbe4d6p-7f, 0x1.6ca614p-87f, 0.0f, 0x1.d6a1aap-14f,
     0x1.f46fecp-40f, 0x1.4d59c8p-10f, 0.0f, 0x1.8f146ep-70f, 0.0f, 0.0f,
     0x1.aa7b66p-1f, 0x1.1f5f2ap-100f, 0x1.f273b2p-52f, 0.0f, 0x1.71d174p-71f, 0.0f,
     0x1.79de44p-72f, 0.0f, 0x1.aff5c8p-36f, 0x1.d61f7ap-56f, 0.0f, 0.0f,
     0x1.a8565p-70f, 0.0f, 0x1.c1e8b8p-22f, 0x1p0f, 0x1.b61d3ap-59f, 0x1.b7930ep-117f,
     0.0f, 0.0f, 0x1.987f14p-21f, 0x1.ff65cap-72f, 0x1.eb679p-17f, 0x1.c2e7bcp-9f,
     0.0f, 0.0f, 0.0f, 0x1.0fd248p-24f, 0.0f, 0x1.d82e9p-97f, 0x1.9fe034p-72f, 0.0f,
     0.0f, 0x1.e3574p-31f, 0.0f, 0x1.0ec998p-46f, 0x1.e46528p-33f, 0x1.50b866p-34f,
     0.0f, 0x1.cd0b6cp-44f, 0.0f, 0.0f, 0.0f, 0x1.2adf54p-85f, 0x1.14f4b6p-73f,
     0x1.bec4ccp-101f, 0x1.44cf8p-23f, 0x1.f53f4ep-110f, 0x1.81aefcp-32f, 0.0f,
     0x1.f637dp-123f, 0.0f, 0x1.18f2e2p-65f, 0x1.1cac8ap-105f, 0.0f, 0x1.973822p-66f,
     0.0f, 0x1.770bd2p-104f, 0.0f, 0x1.3e9f5p-11f, 0x1.55836cp-63f, 0.0f, 0.0f, 0.0f,
     0x1.b8958ep-17f, 0x1.288a14p-105f, 0.0f, 0x1.1e64a8p-57f, 0x1.f5e1c6p-120f,
     0x1.1bd60cp-12f, 0.0f, 0.0f, 0.0f, 0x1.f6cc18p-65f, 0.0f, 0x1.675dfep-121f,
     0x1.49dfc6p-58f, 0x1.44be1ep-89f, 0.0f, 0x1.253cdap-97f, 0.0f, 0x1.d4bde8p-111f,
     0x1.5214aep-41f, 0.0f, 0.0f, 0x1.e1f40ap-97f, 0x1.396442p-59f, 0.0f,
     0x1.031c0ep-7f, 0.0f, 0x1.5f8ee8p-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cb03c8p-31f, 0x1.024d38p-58f, 0.0f, 0x1.090f2p-106f, 0.0f, 0x1.58e2d6p-89f,
     0x1.ab7198p-56f, 0x1.3e000ep-111f, 0x1.246908p-20f, 0x1.6947fcp-6f,
     0x1.f5be28p-42f, 0x1.5b0a5ap-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0e7e76p-30f, 0x1.b4ead6p-96f, 0x1.be287p-54f, 0x1.b2fa7ep-49f,
     0x1.6cc872p-48f, 0x1.263984p-113f, 0x1.fe5f56p-82f, 0x1.150134p-73f,
     0x1.eae108p-95f, 0.0f, 0x1.fee5a4p-26f, 0.0f, 0x1.79941cp-81f, 0.0f,
     0x1.aa70a8p-46f, 0x1.b6af6p-114f, 0.0f, 0x1.a69646p-120f, 0x1.eb57eap-66f,
     0x1.36a86cp-45f, 0x1.d8aa08p-86f, 0.0f, 0x1.0edd54p-29f, 0x1.c17618p-101f,
     0x1.e9811ap-114f, 0x1.2dadf8p-47f, 0x1.cc5fe4p-66f, 0x1.75c3a4p-75f,
     0x1.189ecap-28f, 0x1.b4087ep-22f, 0x1.236bf4p-53f, 0x1.e76d1p-43f, 0.0f, 0.0f,
     0x1.f70c64p-22f, 0.0f, 0.0f, 0.0f, 0x1.62827ep-114f, 0.0f, 0x1.ff3ec4p-54f,
     0x1.4fc8f2p-116f, 0.0f, 0x1.f7ba7ap-22f, 0x1.ea7e7p-71f, 0x1.d195c2p-107f, 0.0f,
     0x1.efabdep-50f, 0x1.494182p-105f, 0x1.043736p-126f, 0x1.48211ap-92f, 0.0f,
     0x1.3c248cp-66f, 0.0f, 0.0f, 0x1.746d28p-71f, 0x1.accbe8p-126f, 0.0f,
     0x1.ceb388p-124f, 0x1.d2d9aap-19f, 0x1.a3ecf2p-67f, 0.0f, 0.0f, 0.0f,
     0x1.82f3d6p-118f, 0.0f, 0.0f, 0x1.1a8712p-124f, 0.0f, 0x1.1e085ap-96f,
     0x1.9ad9e8p-5f, 0x1.a1c018p-43f, 0.0f, 0x1.e2ad68p-62f, 0.0f, 0x1.bfee8cp-83f,
     0x1.2b70ap-100f, 0x1.08bcd2p-7f, 0x1.4a7b22p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5ced8p-42f, 0x1.d9dbacp-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.75b4acp-9f,
     0x1.b71448p-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.749a44p-50f,
     0x1.cc28e8p-39f, 0x1.3f035p-71f, 0x1.0f8684p-110f, 0x1.6b8b7ep-49f,
     0x1.81aadep-4f, 0.0f, 0.0f, 0.0f, 0x1.36b178p-68f, 0x1.d8b35cp-57f, 0.0f,
     0x1.14b87p-110f, 0x1.18013cp-113f, 0x1.bb1cb6p-57f, 0.0f, 0x1.c32d76p-98f,
     0x1.29da96p-94f, 0.0f, 0.0f, 0.0f, 0x1.f355bp-27f, 0x1.b5a4b2p-21f,
     0x1.b4b156p-107f, 0x1.719c34p-64f, 0.0f, 0.0f, 0.0f, 0x1.11a7eep-41f, 0.0f, 0.0f,
     0x1.1dff88p-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dc7868p-63f, 0.0f, 0.0f, 0.0f,
     0x1.93823ep-96f, 0.0f, 0x1.ca287ap-38f, 0x1.2eb582p-62f, 0.0f, 0.0f,
     0x1.c4726ep-104f, 0.0f, 0.0f, 0.0f, 0x1.578ed4p-83f, 0.0f, 0.0f, 0.0f,
     0x1.1b9942p-30f, 0x1.447e42p-69f, 0.0f, 0x1.b7dab4p-6f, 0.0f, 0.0f,
     0x1.008418p-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ffa15cp-84f, 0.0f,
     0x1.40997ap-101f, 0.0f, 0.0f, 0.0f, 0x1.3b6104p-90f, 0.0f, 0x1.cf5f96p-17f,
     0x1.c0168p-54f, 0x1.7f084p-69f, 0.0f, 0x1.3c93f6p-65f, 0.0f, 0x1.7d3a64p-46f,
     0.0f, 0.0f, 0x1.34493ap-104f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.db7a3cp-74f, 0.0f,
     0x1.88d5c4p-95f, 0x1.65dd72p-90f, 0.0f, 0x1.eca272p-93f, 0x1.25951ep-34f,
     0x1.bb027p-23f, 0.0f, 0x1.f77fc4p-36f, 0.0f, 0x1.34ff9p-122f, 0x1.6838acp-31f,
     0x1.1f4224p-36f, 0.0f, 0x1.e5e36p-13f, 0x1.19ebe2p-101f, 0.0f, 0x1.80cb7ep-104f,
     0.0f, 0x1.ec4764p-93f, 0x1.1f996ap-55f, 0.0f, 0.0f, 0x1.99cb88p-39f,
     0x1.5904c8p-32f, 0.0f, 0x1.05d2dep-77f, 0.0f, 0.0f, 0.0f, 0x1.68ad5cp-22f, 0.0f,
     0.0f, 0x1.2ca158p-23f, 0x1.25d882p-21f, 0x1.4195cap-27f, 0.0f, 0x1.0190cep-67f,
     0x1.4e6f94p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.852dc2p-54f, 0x1.284d94p-102f, 0.0f,
     0.0f, 0.0f, 0x1.be2bp-18f, 0.0f, 0x1.34b108p-10f, 0x1.60d894p-101f,
     0x1.16bc92p-88f, 0x1.bfd9c4p-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.18d93cp-67f,
     0x1.8244e8p-112f, 0.0f, 0x1.63be98p-87f, 0x1.324392p-110f, 0x1.58d55p-67f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c09f4cp-30f, 0.0f, 0x1.fef408p-97f, 0.0f, 0.0f,
     0x1.5660d4p-56f, 0x1.a160dap-43f, 0x1.432d4p-33f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.961fe8p-43f, 0x1.81fe5p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f,
     0x1.5557b4p-80f, 0x1.7a969ap-66f, 0.0f, 0x1.f2ede6p-31f, 0x1.6b047ep-9f,
     0x1.b22e76p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.45ebf2p-71f,
     0x1.24cf3ep-14f, 0.0f, 0x1.5596e6p-7f, 0x1.474458p-90f, 0.0f, 0x1.0b8c0ap-47f,
     0x1.cb2ae8p-40f, 0x1.43733p-96f, 0.0f, 0x1.af5a14p-85f, 0x1.0622a6p-67f, 0.0f,
     0x1.9ca882p-76f, 0.0f, 0.0f, 0x1.57e4fap-22f, 0.0f, 0x1.26d6cap-125f, 0.0f, 0.0f,
     0x1.20afeap-21f, 0.0f, 0x1.a55d34p-62f, 0x1.fbb8a6p-76f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4cb72cp-8f, 0.0f, 0.0f, 0.0f, 0x1.0dca2cp-105f, 0.0f, 0.0f, 0.0f,
     0x1.18c5dap-120f, 0.0f, 0x1.3b8348p-44f, 0x1.596554p-56f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b596cp-42f, 0.0f, 0.0f, 0x1.e13cfp-60f, 0x1.915e5ep-24f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.924114p-55f, 0x1.5dbd8ep-26f, 0x1.ac15dp-97f, 0x1.036d6ep-102f,
     0x1.f2ab86p-106f, 0x1.121c3ep-84f, 0x1.1e7cdcp-89f, 0.0f, 0x1.e9bc3ap-67f,
     0x1.3f1b56p-6f, 0.0f, 0x1.0c799ap-74f, 0x1.0b6096p-53f, 0.0f, 0.0f, 0.0f,
     0x1.2f763cp-58f, 0x1.a4117ep-82f, 0.0f, 0x1.a24fd6p-103f, 0x1.3835dp-9f, 0.0f,
     0x1.6db9d4p-97f, 0.0f, 0x1.4445a2p-14f, 0x1.867698p-60f, 0x1.b6c5fap-19f, 0.0f,
     0.0f, 0x1.799c2cp-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5d5142p-62f,
     0x1.6d73c8p-29f, 0.0f, 0x1.6be7cap-95f, 0.0f, 0x1.996156p-3f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.95b2dep-23f, 0x1.7f6b84p-121f, 0.0f, 0x1.45867p-79f, 0x1.fce8dap-49f,
     0x1.fb22d2p-110f, 0.0f, 0x1.bbaa2cp-62f, 0x1.d94544p-36f, 0x1.cddb4ep-6f,
     0x1.973d98p-103f, 0.0f, 0.0f, 0x1.2d1e52p-11f, 0.0f, 0.0f, 0x1.ad9a9cp-32f,
     0x1.48bdfp-35f, 0x1.67fb34p-37f, 0x1.ad10bp-33f, 0x1.6858ccp-123f
};
static const float external_bench_wrapper_input_table_arg1[1004]  = {
     0x1.2d05c8p-4f, 0.0f, 0x1.b02f9cp-46f, 0.0f, 0x1.8dfe18p-21f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ece09cp-53f, 0.0f, 0.0f, 0x1.b47fdcp-63f, 0.0f, 0x1.15a6ccp-1f, 0.0f,
     0.0f, 0x1.9d57d8p-107f, 0x1.fbfbfp-24f, 0x1.b6eb7ep-26f, 0.0f, 0.0f,
     0x1.f45526p-102f, 0x1.4e3186p-101f, 0x1.7022aap-45f, 0.0f, 0x1.35a17cp-95f,
     0x1.f85c1cp-27f, 0x1.77b1e4p-49f, 0x1.993caep-97f, 0.0f, 0x1.6eb45cp-115f, 0.0f,
     0x1.3d7eb8p-21f, 0.0f, 0x1.e46cb2p-67f, 0x1.6d6f88p-125f, 0.0f, 0x1.c94ea8p-4f,
     0x1.6f84p-15f, 0.0f, 0x1.613a8ap-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0b423p-53f,
     0.0f, 0.0f, 0x1.68b69ap-80f, 0x1.52d43ap-27f, 0x1.22990cp-18f, 0x1.0bce84p-29f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c8183cp-77f, 0x1.9a8978p-83f, 0x1.cb18dep-16f, 0.0f,
     0x1.b101acp-54f, 0x1.fa4a9ep-3f, 0.0f, 0x1.e0d8d4p-120f, 0.0f, 0.0f,
     0x1.0ffde2p-95f, 0x1.19765cp-71f, 0.0f, 0x1.ed28d2p-35f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.307f26p-15f, 0.0f, 0.0f, 0.0f, 0x1.3e749ap-15f, 0.0f, 0x1.3d9d3cp-42f, 0.0f,
     0.0f, 0x1.0460c4p-78f, 0.0f, 0.0f, 0x1.94bf96p-44f, 0.0f, 0.0f, 0.0f,
     0x1.c1fb44p-58f, 0.0f, 0.0f, 0x1.f27ffep-44f, 0x1.9a7b7ap-65f, 0.0f,
     0x1.67e466p-97f, 0.0f, 0.0f, 0x1.c541fp-51f, 0.0f, 0.0f, 0.0f, 0x1.a4c3a6p-37f,
     0.0f, 0x1.c122ecp-13f, 0x1.aab4b8p-97f, 0x1.417016p-42f, 0x1.6e1a56p-83f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.00aa6ep-21f, 0.0f, 0.0f, 0x1.124a3cp-13f, 0.0f,
     0x1.4c38f2p-30f, 0x1.cb7918p-94f, 0x1.bfbdf2p-74f, 0x1.2b2e16p-121f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.13aae2p-83f, 0x1.2e118ep-96f, 0x1.2e975p-23f, 0.0f,
     0.0f, 0x1.de83f8p-68f, 0x1.b16c42p-88f, 0.0f, 0x1.cfe78p-82f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.378d88p-55f, 0x1.4a47cp-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.317bb2p-19f, 0.0f, 0.0f, 0.0f, 0x1.32c526p-21f, 0x1.de28ap-36f, 0.0f,
     0x1.184342p-90f, 0x1.9f5c02p-102f, 0.0f, 0x1.b872c6p-101f, 0x1.62c824p-24f, 0.0f,
     0x1.04d766p-125f, 0x1.a8b066p-65f, 0x1.cb8aap-20f, 0.0f, 0x1p0f,
     0x1.954ef4p-125f, 0.0f, 0x1.5db98ep-96f, 0x1.87bd96p-30f, 0.0f, 0.0f,
     0x1.5a3016p-43f, 0.0f, 0x1.04aap-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4ee08p-62f, 0.0f, 0x1.26d9c4p-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.25eccap-88f,
     0.0f, 0.0f, 0.0f, 0x1.ab9f42p-23f, 0.0f, 0x1.7ed5b4p-3f, 0x1.0f2578p-98f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.fc8522p-77f, 0.0f, 0x1.29ae2p-48f, 0.0f, 0.0f,
     0x1.d1e616p-121f, 0.0f, 0x1.203e88p-26f, 0x1p0f, 0x1.b0d87cp-45f, 0.0f, 0.0f,
     0x1.57de8cp-116f, 0.0f, 0x1.989b5ap-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.da18d2p-67f, 0.0f, 0x1.43739p-37f, 0.0f,
     0x1.ccb96cp-38f, 0.0f, 0x1.190e0ep-121f, 0.0f, 0.0f, 0x1.a80cd6p-125f, 0.0f,
     0x1.b4ef9ep-23f, 0x1.8432fep-63f, 0x1.198edcp-51f, 0x1.fdeba4p-12f,
     0x1.f1d56p-43f, 0.0f, 0.0f, 0x1.bbe6e8p-7f, 0.0f, 0x1.6ce52ep-117f,
     0x1.99b9e8p-11f, 0x1.e4923cp-74f, 0x1.0e76aep-113f, 0.0f, 0x1.a26b16p-120f,
     0x1.257a76p-31f, 0x1.0a846p-121f, 0x1.a2f73p-51f, 0.0f, 0x1.da3f7cp-17f, 0.0f,
     0.0f, 0x1.096a08p-121f, 0.0f, 0.0f, 0x1.0f7d66p-11f, 0x1.45a0eap-2f,
     0x1.a6055p-122f, 0x1.cc84cp-57f, 0x1.a2c3c8p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.15078ap-38f, 0x1.fc1dccp-100f, 0x1.9eaad8p-68f, 0x1.095188p-49f, 0.0f, 0.0f,
     0.0f, 0x1.f37e04p-76f, 0x1.844dfap-85f, 0.0f, 0.0f, 0x1.789932p-95f,
     0x1.565d64p-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e38e8p-69f, 0x1.c787bep-12f, 0x1.982bd8p-48f, 0x1.534cfp-70f, 0.0f, 0.0f,
     0x1.a6481p-20f, 0.0f, 0x1.0119cep-16f, 0x1.09a45cp-85f, 0x1.a23a2ap-13f, 0.0f,
     0x1.932c74p-75f, 0x1.a5a2c8p-18f, 0.0f, 0.0f, 0x1.202522p-86f, 0x1.11135cp-39f,
     0.0f, 0.0f, 0x1.56f4dcp-53f, 0.0f, 0.0f, 0x1.e659fcp-44f, 0.0f, 0.0f, 0.0f,
     0x1.846616p-89f, 0x1.13ae8ep-75f, 0x1.a1fc84p-33f, 0.0f, 0x1.0823cap-89f, 0.0f,
     0.0f, 0x1.828786p-45f, 0x1.a3e3d2p-106f, 0x1.a12adep-9f, 0x1.15b4fp-73f, 0.0f,
     0x1.e5bb28p-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9db4aep-5f, 0.0f,
     0x1.443b5ep-21f, 0x1.84f348p-75f, 0.0f, 0.0f, 0x1.8dca66p-121f, 0x1.fed1cep-105f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e07228p-51f, 0.0f, 0.0f, 0.0f, 0x1.70090ap-16f,
     0x1.67b754p-2f, 0.0f, 0x1.64cb74p-27f, 0x1.b9d1acp-42f, 0x1.e68e2ep-13f,
     0x1.7b0668p-76f, 0.0f, 0x1.9cb1cep-119f, 0.0f, 0x1.a360aap-60f, 0.0f, 0.0f,
     0x1.62c856p-31f, 0x1.ce8366p-74f, 0x1.03eaf6p-42f, 0x1.9262a6p-30f, 0.0f, 0.0f,
     0x1.49f4dp-72f, 0x1.c33c52p-3f, 0x1.812052p-15f, 0x1.3e01dp-104f,
     0x1.e5e90cp-86f, 0.0f, 0.0f, 0.0f, 0x1.e1e53ap-8f, 0x1.ffb678p-23f, 0.0f, 0.0f,
     0x1.fa325p-110f, 0x1.b623aep-105f, 0.0f, 0x1.31e3dp-92f, 0.0f, 0x1.4811f8p-52f,
     0.0f, 0x1.3dfa56p-65f, 0x1.d1fce4p-90f, 0.0f, 0x1.b41522p-108f, 0.0f, 0.0f,
     0x1.e20a34p-46f, 0x1.09cebp-33f, 0x1.39e708p-15f, 0.0f, 0.0f, 0x1.ec7082p-119f,
     0.0f, 0.0f, 0.0f, 0x1.37497cp-51f, 0.0f, 0x1.297202p-100f, 0.0f, 0.0f,
     0x1.1dba92p-50f, 0x1.49e836p-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c74484p-40f, 0x1.8f513cp-65f, 0.0f, 0x1.78313ap-39f, 0.0f, 0.0f,
     0x1.5fa1e8p-49f, 0x1.0971b6p-33f, 0.0f, 0x1.bc4602p-66f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.5deb82p-81f, 0x1.a758bp-7f, 0.0f, 0.0f, 0x1.ff548ep-91f,
     0x1.55d484p-57f, 0x1.498dap-108f, 0x1.1de0acp-56f, 0.0f, 0x1.03d982p-19f,
     0x1.8f69d6p-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.623cccp-113f, 0.0f,
     0x1.b09d4p-92f, 0.0f, 0x1.0432acp-9f, 0x1.517202p-104f, 0.0f, 0x1.f7b12ap-96f,
     0.0f, 0x1.5affe6p-115f, 0x1.4ceaa8p-74f, 0x1.605e14p-104f, 0.0f, 0x1.50da1p-86f,
     0x1.660d04p-50f, 0x1.d29fa2p-121f, 0x1.475b32p-4f, 0x1.2e07a2p-64f,
     0x1.658ba4p-33f, 0.0f, 0x1.ee4f24p-22f, 0x1.5e68d2p-17f, 0x1.a5dce8p-72f, 0.0f,
     0x1.417fcep-117f, 0.0f, 0.0f, 0x1.3c5bb8p-29f, 0x1.5c0b1cp-73f, 0.0f,
     0x1.ef7cc4p-34f, 0x1.07df24p-23f, 0x1.43d0dep-62f, 0x1.4ad0eep-76f, 0.0f, 0.0f,
     0x1.98747cp-85f, 0x1.6319eap-104f, 0.0f, 0.0f, 0x1.3dd06cp-76f, 0.0f,
     0x1.0a79e2p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.067e0ep-105f, 0x1p0f, 0.0f,
     0x1.d1580ap-73f, 0x1.26a2e4p-47f, 0.0f, 0.0f, 0.0f, 0x1.59ecbp-1f,
     0x1.7a853ap-72f, 0.0f, 0.0f, 0x1.93fc88p-41f, 0.0f, 0x1.37095ep-1f,
     0x1.e041aep-20f, 0.0f, 0x1.257f36p-119f, 0.0f, 0.0f, 0x1.48e64p-92f,
     0x1.6e9632p-103f, 0x1.470dfep-121f, 0x1.bd5bccp-17f, 0x1.86380cp-38f,
     0x1.af707ap-102f, 0.0f, 0x1.ef73bap-43f, 0.0f, 0.0f, 0x1.a428ccp-65f,
     0x1.2b166p-24f, 0x1.5c84bp-60f, 0.0f, 0x1.7b5e7ap-23f, 0.0f, 0x1.9d1e06p-101f,
     0x1.530ea8p-38f, 0.0f, 0x1p0f, 0.0f, 0x1.c1b754p-119f, 0x1.9e865p-5f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.9f2feap-99f, 0.0f, 0x1.8c7576p-50f, 0.0f, 0.0f, 0x1.020742p-113f,
     0x1.6cb8a6p-98f, 0x1.edb7bap-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.349a98p-83f,
     0x1.a93468p-69f, 0.0f, 0.0f, 0.0f, 0x1.26235ep-126f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.5799eep-29f, 0.0f, 0x1.06a87p-72f, 0.0f, 0.0f, 0x1.5a4306p-37f, 0.0f,
     0x1.94907ap-70f, 0.0f, 0x1.ee68aap-8f, 0x1.160b18p-113f, 0.0f, 0.0f,
     0x1.b05078p-89f, 0.0f, 0x1.9c34cp-101f, 0.0f, 0x1.2887ep-5f, 0x1.0ad368p-28f,
     0x1.9408p-41f, 0x1.1db9bcp-111f, 0.0f, 0x1.4de192p-68f, 0.0f, 0.0f, 0.0f,
     0x1.244e1p-92f, 0x1.3dee16p-94f, 0x1.7b2bdep-116f, 0x1.9c92ep-86f,
     0x1.0ebcaep-50f, 0.0f, 0.0f, 0x1.d169d6p-6f, 0.0f, 0x1.ae3b54p-17f,
     0x1.e845ccp-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f71ca8p-78f, 0.0f, 0x1.3b5c96p-62f,
     0.0f, 0x1.a67cf6p-18f, 0x1.9cb08ap-44f, 0.0f, 0x1.e4d7ecp-110f, 0.0f, 0.0f,
     0x1.383bc8p-34f, 0x1.0d5d6cp-3f, 0x1.0bd672p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4dc974p-105f, 0x1.38f72ep-21f, 0x1.010acep-49f, 0x1.2f782ap-2f,
     0x1.0c5a3ap-59f, 0.0f, 0.0f, 0x1.422114p-43f, 0x1.cafc48p-105f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f48b52p-89f, 0.0f, 0.0f, 0x1.a601p-121f, 0.0f, 0x1.8ef15cp-52f,
     0.0f, 0.0f, 0x1.ac984p-28f, 0.0f, 0x1.d8051ap-120f, 0.0f, 0x1.7dc48cp-119f, 0.0f,
     0.0f, 0.0f, 0x1.752d62p-77f, 0x1.92d4dcp-25f, 0x1.31d638p-67f, 0.0f, 0.0f,
     0x1.184acap-85f, 0.0f, 0.0f, 0x1.22a12cp-3f, 0.0f, 0x1.3c0b44p-28f, 0.0f,
     0x1.878f34p-71f, 0x1.45d71ap-71f, 0x1.062cb4p-87f, 0x1.574088p-110f,
     0x1.482288p-17f, 0.0f, 0x1.36825ep-3f, 0x1.06861p-27f, 0.0f, 0.0f, 0.0f,
     0x1.c3badcp-24f, 0x1.95b078p-82f, 0x1.1322e6p-85f, 0x1.035568p-69f, 0.0f,
     0x1.cf653ap-121f, 0x1.4d4e32p-13f, 0x1.5cb45cp-23f, 0x1.869d54p-115f, 0.0f,
     0x1.4c088cp-42f, 0x1.e41ba6p-107f, 0x1.941b02p-46f, 0x1.c26bap-93f, 0.0f, 0.0f,
     0.0f, 0x1.f79b5ap-60f, 0.0f, 0x1.170aap-88f, 0x1.bc6b2cp-103f, 0x1.626786p-110f,
     0x1.bf2c4ep-26f, 0.0f, 0.0f, 0x1.ca92f8p-102f, 0x1.a22d6ep-104f, 0.0f,
     0x1.04ad82p-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6bb46p-65f, 0.0f, 0x1.4e9156p-1f,
     0.0f, 0x1.655662p-71f, 0x1.1dd54ep-20f, 0x1.4c768cp-9f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.8d6c64p-2f, 0.0f, 0.0f, 0.0f, 0x1.def05p-70f, 0.0f,
     0x1.89b772p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6e836ep-76f, 0x1.cf65aap-40f, 0.0f,
     0.0f, 0.0f, 0x1.01d5ep-16f, 0.0f, 0x1.ec56c6p-1f, 0.0f, 0.0f, 0x1.0679bcp-8f,
     0x1.044222p-75f, 0.0f, 0.0f, 0x1.8b08acp-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c19bep-103f, 0.0f, 0.0f, 0x1.adc5a8p-65f, 0.0f, 0.0f, 0x1.cbc56ap-87f, 0.0f,
     0.0f, 0x1.7f1ba2p-63f, 0.0f, 0x1.494f46p-84f, 0x1.93611cp-34f, 0x1.5b1cdap-28f,
     0.0f, 0.0f, 0.0f, 0x1.6de33p-110f, 0x1.c44f76p-122f, 0.0f, 0x1.1ce2p-51f, 0.0f,
     0x1.96e3dp-122f, 0x1.3ceef8p-18f, 0.0f, 0x1.07a47p-31f, 0.0f, 0.0f, 0.0f,
     0x1.b12eb4p-31f, 0x1.ef35ecp-115f, 0x1.74e55ap-8f, 0x1.c3ec5ap-35f,
     0x1.8cb4eap-13f, 0.0f, 0.0f, 0.0f, 0x1.1a5e7p-56f, 0x1.f627dp-89f,
     0x1.b32722p-99f, 0.0f, 0x1.493456p-55f, 0x1.b37d88p-26f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.3137bap-34f, 0x1.b3496ep-34f, 0x1.34cec8p-48f, 0x1.d5850cp-108f,
     0x1.022e58p-94f, 0.0f, 0.0f, 0x1.26e48cp-13f, 0x1.278bf6p-125f, 0x1.f61eb8p-110f,
     0x1.4b54c2p-106f, 0x1.5450f4p-98f, 0x1.fa5a4ap-41f, 0.0f, 0.0f, 0.0f,
     0x1.d9694cp-60f, 0x1.1042bp-9f, 0.0f, 0.0f, 0x1.2ed37p-121f, 0.0f, 0.0f, 0.0f,
     0x1.c602aep-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.586a42p-9f, 0x1.8a1906p-72f, 0.0f, 0x1.e1df2p-114f, 0x1.28f37p-56f,
     0.0f, 0.0f, 0x1.bacc26p-55f, 0x1.c0b0c2p-59f, 0.0f, 0.0f, 0x1.b037dap-121f, 0.0f,
     0.0f, 0x1.67ee8ep-123f, 0x1.be52ap-73f, 0.0f, 0x1.339afcp-9f, 0x1.e9d116p-95f,
     0.0f, 0.0f, 0.0f, 0x1.5f3408p-57f, 0x1.fc259ap-70f, 0.0f, 0.0f, 0x1.3c1084p-105f,
     0.0f, 0.0f, 0x1.918acap-92f, 0x1.17e10cp-49f, 0x1.9a7e7ap-35f, 0.0f, 0.0f,
     0x1.ce1a64p-77f, 0.0f, 0x1.be41dep-75f, 0.0f, 0.0f, 0.0f, 0x1.1de408p-64f,
     0x1.55cccp-4f, 0x1.32153cp-89f, 0.0f, 0.0f, 0x1.38e1d8p-72f, 0x1.f96deep-27f,
     0x1.8374a8p-122f, 0x1.2ac7e6p-121f, 0x1.f85e8p-97f, 0.0f, 0x1.ca7e42p-100f,
     0x1.88d25ap-74f, 0x1.9cb0bcp-36f, 0.0f, 0.0f, 0x1.b452p-111f, 0.0f,
     0x1.61ddcap-46f, 0x1.13ba4ap-5f, 0.0f, 0.0f, 0.0f, 0x1.554814p-43f,
     0x1.4ea61p-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.597e5cp-1f, 0.0f, 0x1.697c32p-123f,
     0.0f, 0x1.9c5b48p-2f, 0x1.4ba742p-61f, 0x1.7bac1p-39f, 0.0f, 0.0f, 0.0f,
     0x1.bd8b18p-82f, 0.0f, 0.0f, 0x1.5f51ap-97f, 0x1.8e35aep-49f, 0x1.678618p-106f,
     0x1.5186cp-16f, 0.0f, 0x1.ce5244p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8ce536p-65f, 0.0f, 0x1.fc9edap-20f, 0.0f, 0.0f, 0x1.738cfep-40f,
     0x1.7dcb3ap-1f, 0x1.6fd52ap-15f, 0x1.d40cdep-48f, 0x1.dc49acp-126f,
     0x1.81ec42p-113f, 0x1.aff362p-77f, 0x1.5390d2p-15f, 0x1.880fbep-52f,
     0x1.b06f5ap-30f, 0x1.7eeb3cp-58f, 0.0f, 0x1.1a444ap-22f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.54f188p-1f, 0x1.86b39cp-95f, 0x1.cdcae2p-100f, 0x1.3848dap-126f,
     0x1.c94306p-58f, 0x1.a2a7c4p-32f, 0.0f, 0x1.357e28p-70f, 0x1.4389fcp-6f, 0.0f,
     0x1.8d17b6p-104f, 0x1.2b41c8p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f,
     0x1.746696p-29f, 0.0f, 0.0f, 0x1.c663bep-56f, 0x1.c9ebd4p-14f, 0.0f,
     0x1.391cfap-39f, 0.0f, 0.0f, 0.0f, 0x1.13bcaap-59f, 0.0f, 0x1.4d4c9cp-6f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.65b784p-121f, 0x1.48f8d8p-36f
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
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = external_bench_wrapper_cst;
    tmp = __cos_counter_num(0);
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
            tmp2 = Sleef_atan2f4_u35kvx(tmp0, tmp1);
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
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_atan2f4_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_atan2f4_u35kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
