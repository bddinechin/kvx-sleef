/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_hypotf4_u05kvx.c --function \
 *     Sleef_finz_hypotf4_u05kvx --arity 2 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32,binary32 --vector-size 4 \
 *     --function-input-vector-size 4 --bench --no-embedded-bin --target kv3
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
     0x1.c544cp-55f, 0.0f, 0x1.f69adcp-56f, 0.0f, 0x1.25c5c6p-10f, 0.0f,
     0x1.6c4816p-12f, 0.0f, 0.0f, 0x1.04a232p-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2a4d4p-3f, 0x1.3f0242p-26f, 0x1.c6a684p-35f, 0.0f, 0x1.68e038p-103f,
     0x1.7fc478p-67f, 0x1.11f7cap-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.092ec6p-84f, 0.0f,
     0.0f, 0.0f, 0x1.431d8p-27f, 0x1.16606cp-105f, 0x1.4d7c1ap-27f, 0x1.775484p-25f,
     0.0f, 0x1.0a0e18p-80f, 0x1.f35bdep-122f, 0.0f, 0.0f, 0x1.378082p-47f,
     0x1.a1966p-87f, 0x1.193e24p-7f, 0x1.75dabap-83f, 0x1.5a30dcp-54f,
     0x1.1ac176p-74f, 0.0f, 0.0f, 0.0f, 0x1.5f0e5ap-90f, 0x1.8be9b2p-42f, 0.0f, 0.0f,
     0.0f, 0x1.31ff28p-47f, 0x1.d7a7ep-36f, 0.0f, 0x1.290b74p-68f, 0x1.ccf31p-98f,
     0.0f, 0x1.f260cp-26f, 0x1.00567p-52f, 0.0f, 0.0f, 0x1.6abeecp-56f,
     0x1.161fc6p-81f, 0x1.d4eb78p-16f, 0x1.ee4ed6p-54f, 0.0f, 0.0f, 0x1.1c089cp-37f,
     0.0f, 0x1.bf306ap-119f, 0x1.01e364p-58f, 0x1.3c567ep-5f, 0x1.59108cp-54f,
     0x1.40ce16p-93f, 0.0f, 0x1.31ff88p-54f, 0x1.7a2d56p-65f, 0.0f, 0x1.5841e4p-7f,
     0.0f, 0x1.78c5p-31f, 0.0f, 0x1.7dcafep-12f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9376eep-35f, 0x1.c9de34p-10f, 0x1.077424p-42f, 0x1.867b36p-34f, 0.0f,
     0x1.464caep-117f, 0x1.d081ccp-49f, 0x1.186ed6p-11f, 0x1.617d46p-114f, 0.0f,
     0x1.58c04cp-67f, 0x1.98992cp-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.61bbdap-37f,
     0x1.bf0b28p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.aa1d46p-46f, 0x1.71957p-80f, 0.0f,
     0.0f, 0x1.5a231p-48f, 0.0f, 0.0f, 0x1.6c8b32p-73f, 0x1.a6ce8ap-89f, 0.0f, 0x1p0f,
     0x1.c6f078p-15f, 0.0f, 0.0f, 0x1.f4a80ep-86f, 0x1.a57a32p-110f, 0.0f,
     0x1.207f48p-79f, 0x1.94126ep-15f, 0.0f, 0x1.5d7beep-20f, 0.0f, 0.0f, 0.0f,
     0x1.6786e6p-125f, 0x1.6afd9ep-114f, 0x1.a9c9a8p-93f, 0x1.5f53fcp-21f, 0.0f,
     0x1.7d70b6p-93f, 0.0f, 0.0f, 0x1.efcedep-60f, 0x1.ee9ceep-22f, 0.0f, 0.0f,
     0x1.871d68p-29f, 0x1.1e559ep-42f, 0x1.3ef3acp-87f, 0x1.4f88bap-95f,
     0x1.2a809cp-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.392988p-42f, 0x1.2bee16p-103f,
     0x1.08c696p-24f, 0x1.07d14ep-120f, 0.0f, 0x1.6e6308p-32f, 0.0f, 0x1.2570eep-4f,
     0.0f, 0x1.42f03cp-1f, 0x1.e0495ep-120f, 0x1.a1c12cp-89f, 0.0f, 0x1p0f, 0.0f,
     0.0f, 0x1.77542p-18f, 0.0f, 0.0f, 0x1.fb0286p-126f, 0x1.ea76bcp-78f,
     0x1.ec8e3ap-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f,
     0x1.196afcp-114f, 0.0f, 0.0f, 0x1.df735cp-110f, 0x1.791cdep-92f, 0x1.9d12b2p-45f,
     0x1.816624p-100f, 0.0f, 0x1.0df74ap-41f, 0x1.bcbb22p-103f, 0x1.97476p-89f, 0.0f,
     0x1.e589aep-21f, 0.0f, 0x1.2d5d6ep-65f, 0.0f, 0x1.1960aap-6f, 0x1.fe58cap-76f,
     0.0f, 0.0f, 0x1.c47bccp-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.41b516p-81f,
     0x1.391f4cp-125f, 0x1.bbc804p-103f, 0.0f, 0.0f, 0x1.708d2ep-82f,
     0x1.57849ap-109f, 0x1.c771cap-51f, 0x1.17de52p-1f, 0x1.90b872p-73f, 0x1p0f,
     0x1.59cccp-56f, 0.0f, 0x1.ddc276p-98f, 0x1.851514p-79f, 0x1.97d174p-11f, 0.0f,
     0x1.7d4b06p-91f, 0.0f, 0.0f, 0x1.b458f8p-99f, 0x1.7fe4e4p-123f, 0.0f, 0.0f,
     0x1.10cb2ep-32f, 0x1.dffa9p-73f, 0x1.f66054p-73f, 0.0f, 0.0f, 0x1.ca7758p-95f,
     0x1.76fcdap-3f, 0x1.80ba72p-70f, 0x1.33ef1p-102f, 0.0f, 0x1.4da998p-109f, 0.0f,
     0x1.e38b36p-111f, 0x1.f68abcp-76f, 0.0f, 0.0f, 0x1.1502c8p-91f, 0x1.95a794p-87f,
     0x1.a457d2p-82f, 0x1.f8d53p-40f, 0.0f, 0x1.156844p-56f, 0x1.3a2fep-83f,
     0x1.272a84p-81f, 0.0f, 0x1.db43fcp-97f, 0x1.7eaeeap-100f, 0x1.340208p-125f,
     0x1.22bf02p-48f, 0x1.e40272p-115f, 0x1.ee1ee4p-85f, 0.0f, 0.0f, 0x1.74698p-83f,
     0x1.8a8b04p-17f, 0x1.090ce4p-119f, 0x1.1c38fap-40f, 0x1.42a634p-121f, 0.0f, 0.0f,
     0x1.38e2c8p-71f, 0.0f, 0x1.100894p-122f, 0x1.f64972p-93f, 0.0f, 0x1.571e46p-60f,
     0.0f, 0x1.2a30a2p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2433c8p-122f, 0.0f, 0.0f,
     0x1.b600dp-4f, 0.0f, 0.0f, 0x1.526d72p-29f, 0x1.bb7c44p-37f, 0.0f,
     0x1.478b96p-72f, 0.0f, 0.0f, 0.0f, 0x1.a3c6aep-31f, 0.0f, 0x1.fff23cp-62f,
     0x1.519a42p-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8ee646p-106f,
     0x1.de0a5ap-66f, 0x1.61a84ep-103f, 0.0f, 0x1.2cc8aap-62f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a05f6ep-36f, 0x1.1e9e56p-15f, 0.0f, 0x1.84d94ap-124f, 0x1.3751b6p-1f, 0.0f,
     0x1.f9c25cp-53f, 0x1.4be8ep-36f, 0.0f, 0.0f, 0.0f, 0x1.9d7a8cp-102f, 0.0f,
     0x1.4796bep-32f, 0x1.d6b3b4p-5f, 0x1.856476p-64f, 0x1.9ee5eep-77f, 0.0f,
     0x1.279cdap-31f, 0.0f, 0.0f, 0x1.d52c3ep-47f, 0x1.97068cp-115f, 0x1.2ea99cp-64f,
     0.0f, 0x1.d058fep-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e9a6dap-117f,
     0x1.287468p-30f, 0.0f, 0x1.d82af6p-18f, 0.0f, 0x1.9a50b2p-87f, 0x1.016326p-65f,
     0.0f, 0.0f, 0.0f, 0x1.01a246p-114f, 0x1.b0a5bcp-100f, 0x1.b008c2p-70f,
     0x1.ce95c4p-53f, 0.0f, 0x1.16461ap-93f, 0.0f, 0.0f, 0.0f, 0x1.96af06p-67f, 0.0f,
     0.0f, 0x1.df5698p-87f, 0x1.b3761p-118f, 0x1.83babp-81f, 0.0f, 0.0f, 0.0f,
     0x1.ff38f8p-98f, 0.0f, 0x1.2eeffcp-109f, 0x1.f15fc8p-20f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.c1220ep-88f, 0.0f, 0.0f, 0x1.308d18p-116f, 0.0f, 0.0f,
     0x1.a60ab2p-5f, 0x1.24a5ccp-101f, 0.0f, 0x1.5c4574p-44f, 0.0f, 0.0f,
     0x1.6d5b16p-50f, 0.0f, 0x1.ca76eep-29f, 0.0f, 0x1.148e56p-77f, 0.0f,
     0x1.db436ap-122f, 0.0f, 0.0f, 0.0f, 0x1.e246ep-95f, 0x1.ebebecp-86f,
     0x1.c42ap-122f, 0.0f, 0.0f, 0x1.fab2a8p-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e219a2p-109f, 0.0f, 0x1.c24824p-80f, 0x1p0f, 0.0f, 0.0f, 0.0f,
     0x1.708538p-18f, 0x1.6593c2p-83f, 0.0f, 0x1.4bf972p-91f, 0x1.4b3108p-86f,
     0x1.5e40ccp-82f, 0.0f, 0.0f, 0.0f, 0x1.0d37ap-83f, 0.0f, 0x1.c62508p-17f, 0.0f,
     0.0f, 0x1.d933cp-41f, 0.0f, 0x1.960356p-75f, 0.0f, 0x1.9b21d4p-121f, 0.0f,
     0x1.b568fcp-91f, 0.0f, 0.0f, 0x1.fe9a7cp-86f, 0x1.9c5b36p-78f, 0x1.331b0ep-118f,
     0.0f, 0x1.5175fp-100f, 0.0f, 0x1.800f26p-91f, 0.0f, 0x1.1f3e68p-112f, 0.0f, 0.0f,
     0x1.ed9f5p-123f, 0.0f, 0.0f, 0.0f, 0x1.2289fap-72f, 0x1.b5e094p-46f,
     0x1.5596e8p-78f, 0.0f, 0x1.e58a22p-120f, 0x1.23c9f4p-108f, 0.0f, 0x1.d9812cp-57f,
     0.0f, 0.0f, 0x1.3a2ea8p-39f, 0x1.90c5f4p-20f, 0x1.d3f4a2p-111f, 0.0f,
     0x1.71371p-43f, 0.0f, 0.0f, 0.0f, 0x1.48c134p-116f, 0.0f, 0x1.86f2acp-40f, 0.0f,
     0.0f, 0x1.d5f84ap-65f, 0x1.ca72a4p-89f, 0x1.232684p-88f, 0x1.77c7p-41f,
     0x1.54f892p-31f, 0x1.38194ep-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9d2492p-68f,
     0x1.5d6b16p-95f, 0x1.12085ep-120f, 0.0f, 0x1.5dbe16p-52f, 0.0f, 0.0f,
     0x1.d5c018p-54f, 0x1.ed566cp-32f, 0.0f, 0x1.f080e2p-53f, 0.0f, 0x1.ea39f6p-33f,
     0x1.0458bcp-64f, 0.0f, 0x1.c32226p-88f, 0x1.0df5a2p-88f, 0.0f, 0x1.1d0fdap-126f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b7e3e8p-67f, 0x1.9beea8p-31f, 0.0f, 0.0f,
     0x1.59d3c6p-108f, 0.0f, 0x1.d0055ep-46f, 0x1.fc733ep-4f, 0x1.0ce60ap-35f, 0.0f,
     0.0f, 0x1.ecc234p-105f, 0.0f, 0x1.30dd4ep-71f, 0x1.9f33e8p-97f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.602bcp-84f, 0.0f, 0x1.243cfep-115f, 0.0f, 0x1.ca8042p-122f,
     0x1.e4a026p-102f, 0.0f, 0.0f, 0.0f, 0x1.cdda3cp-89f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f73702p-87f, 0x1.16983p-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f4d4f8p-65f,
     0x1.cb37acp-62f, 0x1.a7cac6p-40f, 0.0f, 0x1.8de7e6p-3f, 0x1.9ed5fep-113f,
     0x1.4f884ap-56f, 0.0f, 0x1.4ad6eep-25f, 0.0f, 0.0f, 0x1.8356b2p-96f,
     0x1.977082p-93f, 0.0f, 0x1.dccb9ep-30f, 0.0f, 0x1.f75d7cp-55f, 0x1.2652f4p-80f,
     0.0f, 0x1.594f8p-59f, 0x1.b3e59cp-9f, 0.0f, 0.0f, 0x1.08f23ap-113f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.42afa4p-57f, 0x1.93ca8ap-28f, 0.0f,
     0x1.7223acp-26f, 0x1.961f6ap-65f, 0.0f, 0x1.8755bp-6f, 0x1.a2fb92p-11f, 0.0f,
     0x1.660954p-102f, 0.0f, 0x1.d6f808p-115f, 0.0f, 0.0f, 0.0f, 0x1.9fb346p-14f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.facaa6p-35f, 0.0f, 0.0f, 0.0f,
     0x1.900572p-4f, 0.0f, 0x1.c411f2p-23f, 0.0f, 0x1.7f1bb4p-29f, 0x1.6c0556p-17f,
     0x1.b0c81ep-59f, 0x1.49c52ep-59f, 0x1.5295dep-68f, 0.0f, 0x1.3710fap-110f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ffa1b2p-74f, 0x1.ee9624p-35f, 0.0f, 0x1.d977b6p-51f, 0.0f,
     0.0f, 0x1.9fd7a4p-16f, 0.0f, 0x1.8e8958p-58f, 0.0f, 0x1.80e4d2p-36f,
     0x1.6e1ae2p-110f, 0.0f, 0x1.9ce108p-53f, 0.0f, 0.0f, 0x1.681a6ep-15f,
     0x1.fc0004p-104f, 0x1.9a5ecap-80f, 0x1.ed7eb8p-39f, 0.0f, 0.0f, 0x1.54d244p-25f,
     0x1.9caab8p-41f, 0x1.194318p-27f, 0.0f, 0x1.c752ccp-3f, 0x1.638acp-23f, 0.0f,
     0.0f, 0x1.b037f2p-120f, 0x1.6a5d3cp-54f, 0.0f, 0x1.d84d5cp-58f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d7ce3ep-44f, 0x1.5324dep-110f,
     0x1.873c0cp-50f, 0x1.d6faep-53f, 0.0f, 0.0f, 0x1.cc38c2p-98f, 0x1.9c87eep-125f,
     0x1.bd153p-117f, 0x1.0e6c3ep-103f, 0.0f, 0x1.4a887p-58f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d94822p-79f, 0.0f, 0.0f, 0x1.284042p-78f, 0x1.290e0ep-14f, 0x1.e43714p-34f,
     0.0f, 0x1.00175p-11f, 0.0f, 0x1.b1cf3ap-123f, 0x1.d22efap-102f, 0x1.9e7d06p-41f,
     0.0f, 0x1.916eb4p-50f, 0x1.64bfbcp-43f, 0x1.225edcp-123f, 0x1.48b9d8p-29f,
     0x1.603a0ep-27f, 0x1.a778b8p-27f, 0.0f, 0x1.7dac28p-102f, 0.0f, 0x1.134f3cp-83f,
     0.0f, 0.0f, 0x1.b0ba2ep-71f, 0x1.df0576p-4f, 0x1.547ff8p-56f, 0x1.27cebcp-5f,
     0.0f, 0.0f, 0.0f, 0x1.8c4f56p-107f, 0x1.c0776cp-58f, 0.0f, 0.0f,
     0x1.7c06fcp-107f, 0.0f, 0.0f, 0x1.289394p-63f, 0.0f, 0.0f, 0.0f, 0x1.ff1a0ep-92f,
     0x1.7784cap-111f, 0x1.e9a046p-64f, 0.0f, 0x1.a751eap-80f, 0.0f, 0.0f, 0.0f,
     0x1.28e9cep-24f, 0.0f, 0x1.728dc4p-42f, 0.0f, 0.0f, 0x1.cee5b4p-7f, 0.0f,
     0x1.4e7032p-15f, 0.0f, 0x1.185314p-16f, 0.0f, 0.0f, 0.0f, 0x1.33e748p-27f, 0.0f,
     0.0f, 0x1.3482f4p-76f, 0x1.8bcf8p-96f, 0x1.99cfa4p-31f, 0x1.0f8354p-106f, 0.0f,
     0.0f, 0.0f, 0x1.5adeacp-40f, 0x1.858ec6p-17f, 0x1.9f9922p-33f, 0.0f, 0.0f, 0.0f,
     0x1.4c4e74p-109f, 0.0f, 0x1.17749cp-79f, 0.0f, 0.0f, 0x1.e7b066p-66f, 0.0f, 0.0f,
     0.0f, 0x1.9256f8p-3f, 0.0f, 0.0f, 0x1.53148ep-96f, 0x1.6ff664p-75f,
     0x1.0c243p-23f, 0x1.f713fep-111f, 0.0f, 0.0f, 0.0f, 0x1.416aa4p-112f,
     0x1.77d6fep-14f, 0.0f, 0.0f, 0x1.f0b04cp-53f, 0x1.e49f0cp-36f, 0.0f,
     0x1.0c274cp-35f, 0x1.84e50cp-52f, 0x1.667f4cp-17f, 0x1.0cf8ap-67f,
     0x1.1ce842p-84f, 0x1.ac006ap-47f, 0x1.33f98ap-73f, 0x1.4f78a2p-97f, 0.0f,
     0x1.797d6ep-16f, 0.0f, 0x1.d01908p-104f, 0x1.968814p-36f, 0x1.175a7ep-1f,
     0x1.6fa0a8p-17f, 0.0f, 0.0f, 0.0f, 0x1.9768aap-26f, 0x1.fdab66p-42f, 0.0f,
     0x1.be714p-69f, 0.0f, 0x1.6a5d9ap-95f, 0.0f, 0x1.ecdfc6p-1f, 0.0f, 0.0f,
     0x1.4605p-44f, 0x1.0856f4p-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ed8f6ep-101f, 0x1.23159ap-123f, 0x1p0f, 0x1.e01ae8p-82f, 0x1.77532ep-72f,
     0x1.28426ep-55f, 0x1.b50368p-66f, 0x1.26901ap-23f, 0x1.e20368p-63f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.94b208p-35f, 0x1.4db68ep-30f, 0x1.53ca26p-23f, 0.0f, 0.0f,
     0x1.e190fep-13f, 0.0f, 0.0f, 0x1.391d84p-30f, 0.0f, 0x1.c1c3cp-83f, 0.0f,
     0x1.e44e7p-41f, 0.0f, 0x1.bd663cp-78f, 0.0f, 0x1.1ac3b2p-91f, 0x1.61ca3ep-102f,
     0x1.9b65b2p-114f, 0.0f, 0x1.d349bp-67f, 0x1.062e6cp-5f, 0x1.423566p-26f,
     0x1.0d83bcp-113f, 0.0f, 0x1.86f1bep-82f, 0.0f, 0.0f, 0x1.ee34f2p-35f,
     0x1.0a2e9p-35f, 0.0f, 0.0f, 0x1.d21edcp-30f, 0.0f, 0x1.58745ep-118f,
     0x1.b3df08p-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9f146cp-4f, 0x1.d1f7e8p-20f,
     0x1.11bb3cp-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d25c6ap-125f,
     0x1.6229f4p-16f, 0x1.1a03b4p-10f, 0.0f, 0.0f, 0x1.8aa43p-115f, 0.0f,
     0x1.c125ccp-25f, 0x1.f40134p-100f, 0x1.382898p-120f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ee97eep-38f, 0x1.148ffcp-123f, 0.0f, 0x1.fe6b04p-76f, 0.0f, 0x1.d25f68p-99f,
     0x1.06c54cp-43f, 0x1.aed8a8p-74f, 0x1.8766e6p-23f, 0x1.d4764ep-104f, 0.0f,
     0x1.f5b61ep-14f, 0x1.78943p-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f820f4p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bf9fa6p-110f,
     0x1.a0c756p-42f, 0x1.d06f7ap-80f, 0.0f, 0x1p0f, 0x1.9afc3cp-66f, 0x1.6432eap-21f,
     0x1.31fd1p-35f, 0.0f, 0.0f, 0.0f, 0x1.2e0db4p-70f, 0x1.a2785ap-89f, 0.0f,
     0x1.6cc26ep-83f, 0.0f, 0x1.dc50aep-25f, 0.0f, 0.0f, 0x1.d0fbb2p-18f, 0.0f, 0.0f,
     0x1.b57fa2p-83f, 0.0f, 0x1.5ced64p-86f, 0x1.ba04e8p-36f, 0x1.177728p-62f,
     0x1.720224p-36f, 0.0f, 0x1.8a8ce6p-93f, 0x1.ad95ap-47f, 0x1.33154p-46f, 0.0f,
     0.0f, 0.0f, 0x1.2bce0ap-100f, 0.0f, 0x1.1d9a3cp-92f, 0.0f, 0x1.e24ec6p-32f,
     0x1.188f08p-68f, 0x1.35158p-103f, 0x1.01345cp-62f, 0.0f, 0x1.8f814ap-79f, 0.0f,
     0.0f, 0x1.a86d64p-99f, 0.0f, 0x1.0a8448p-16f, 0.0f, 0x1.f10c0cp-116f,
     0x1.0b9f6ap-84f, 0x1.70f8d2p-94f, 0x1.81b438p-59f, 0.0f, 0x1.daf3f8p-72f
};
static const float external_bench_wrapper_input_table_arg1[1004]  = {
     0x1.83ce5p-51f, 0.0f, 0.0f, 0.0f, 0x1.52b25ep-92f, 0.0f, 0x1.937618p-5f, 0.0f,
     0.0f, 0x1.e158f4p-111f, 0x1.c1b4aep-24f, 0.0f, 0x1.420124p-16f, 0x1.c6439cp-100f,
     0.0f, 0x1.ddd9d8p-50f, 0x1.80936ep-51f, 0.0f, 0x1.9f152ep-120f, 0x1.bb8796p-70f,
     0x1.6d335p-42f, 0.0f, 0.0f, 0x1.9d1ffap-66f, 0.0f, 0.0f, 0x1.19c2fep-17f,
     0x1.bcc496p-90f, 0x1.1897eap-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.799516p-18f,
     0x1.f3d6p-15f, 0.0f, 0.0f, 0.0f, 0x1.b08c1ep-76f, 0x1.48d924p-96f, 0.0f,
     0x1.61cc84p-115f, 0x1.6e204ep-105f, 0.0f, 0.0f, 0x1.a926dep-42f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.8146d6p-21f, 0.0f, 0x1.5a9d2p-47f, 0x1.6b9d0cp-75f,
     0x1.c0fd4p-112f, 0.0f, 0x1.78684ep-51f, 0x1.d11414p-13f, 0.0f, 0x1.706a78p-119f,
     0.0f, 0x1.eaccaap-66f, 0x1.e29576p-40f, 0x1.b014dap-34f, 0x1.091758p-21f,
     0x1.003e6cp-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.efa9d6p-97f, 0.0f,
     0x1.19d6c2p-56f, 0.0f, 0x1.5f3026p-60f, 0.0f, 0x1.5d8d74p-109f, 0.0f,
     0x1.15d5fep-97f, 0x1.c83f08p-13f, 0x1.12d6b8p-10f, 0x1.4ac89ap-15f,
     0x1.866104p-23f, 0.0f, 0.0f, 0x1.be031cp-85f, 0.0f, 0x1.b5a1dap-20f, 0.0f,
     0x1.97c0e2p-69f, 0.0f, 0.0f, 0x1.6b80c2p-71f, 0x1.0ef38ap-99f, 0x1.ed8b7ep-25f,
     0.0f, 0.0f, 0x1.e8f3e8p-59f, 0.0f, 0.0f, 0.0f, 0x1.58a6c4p-35f, 0.0f, 0.0f,
     0x1.440acp-49f, 0.0f, 0.0f, 0x1.bb346ap-13f, 0x1.aa3b7ap-94f, 0.0f, 0.0f,
     0x1.297dfp-48f, 0x1.be81d4p-124f, 0x1.6b8032p-71f, 0.0f, 0.0f, 0x1.a74dbcp-6f,
     0x1.7fe1ecp-111f, 0.0f, 0x1.9789f4p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.afd96ap-94f, 0x1.6053e4p-39f, 0x1.2e3ec2p-54f, 0x1.66b5f8p-15f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.af114ep-115f, 0x1.b883dap-14f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.175becp-107f, 0x1.d7d436p-95f, 0.0f, 0x1.483d2ap-44f, 0x1.5c6958p-48f, 0.0f,
     0.0f, 0.0f, 0x1.008deap-81f, 0x1.4344cep-83f, 0.0f, 0x1.79165ep-88f, 0.0f,
     0x1.c42e64p-105f, 0x1.81afcap-120f, 0.0f, 0x1.8103cap-121f, 0x1.00dfc2p-124f,
     0x1.bacde4p-16f, 0x1.1a2cf8p-95f, 0.0f, 0.0f, 0x1.961e96p-22f, 0x1.53afccp-13f,
     0x1.9eaebap-19f, 0x1.90b37ep-21f, 0x1.4fbd34p-25f, 0x1.61ae42p-124f,
     0x1.cf5296p-106f, 0.0f, 0x1.a9595ap-78f, 0.0f, 0.0f, 0x1.01e418p-59f,
     0x1.d6039ep-126f, 0.0f, 0.0f, 0x1.b0e9ep-85f, 0x1.ada3e8p-41f, 0x1.96ff76p-4f,
     0.0f, 0.0f, 0.0f, 0x1.8cef3ap-66f, 0x1.c24c7cp-106f, 0x1.75cb76p-62f,
     0x1.04d6cep-82f, 0.0f, 0.0f, 0x1.47a0dap-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.08b72ep-110f, 0.0f, 0x1.619f6ap-90f, 0x1.8120b8p-24f,
     0x1.50002p-2f, 0x1.801d0cp-21f, 0.0f, 0x1.13b1a6p-124f, 0x1.c04d3ap-6f, 0.0f,
     0x1.d290bep-49f, 0.0f, 0x1.bd1e56p-86f, 0x1.cadc0ep-69f, 0.0f, 0x1.e5ec8cp-90f,
     0.0f, 0.0f, 0x1.0f7bfp-22f, 0.0f, 0x1.e626a8p-53f, 0x1.2a5908p-8f,
     0x1.765ac6p-90f, 0.0f, 0.0f, 0x1.b3c12ap-64f, 0x1.882042p-123f, 0.0f, 0.0f,
     0x1.7df2fep-87f, 0.0f, 0x1.89baf2p-115f, 0x1.d7af08p-1f, 0.0f, 0x1.9df27p-8f,
     0.0f, 0x1.19ba9cp-114f, 0x1.259fd8p-84f, 0.0f, 0x1.4f1fe4p-78f, 0x1.7e4454p-36f,
     0x1.c12c22p-40f, 0.0f, 0.0f, 0.0f, 0x1.f513eep-114f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.6aef6cp-121f, 0.0f, 0.0f, 0.0f, 0x1.d3ac02p-20f, 0x1.bd639cp-81f, 0.0f,
     0x1.8ab7ecp-98f, 0.0f, 0x1.360364p-26f, 0.0f, 0.0f, 0x1.189e96p-5f,
     0x1.d650c6p-80f, 0x1.643decp-33f, 0.0f, 0x1.62ec1cp-114f, 0x1.303dc2p-125f, 0.0f,
     0x1.86da1p-116f, 0.0f, 0.0f, 0.0f, 0x1.58e572p-74f, 0.0f, 0x1.8f601p-125f, 0.0f,
     0x1.bcbec8p-94f, 0x1.3f50fcp-30f, 0.0f, 0x1.a80a66p-45f, 0x1.b3a0b8p-116f,
     0x1.df2d9ep-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c275cap-4f, 0.0f, 0.0f,
     0x1.b23db8p-54f, 0x1.ef270cp-112f, 0.0f, 0x1.e9adc4p-102f, 0x1.271dc2p-73f,
     0x1.ac918ep-28f, 0x1.ecf6f8p-51f, 0.0f, 0x1.84b3a4p-53f, 0x1.112298p-48f,
     0x1.66a196p-19f, 0x1.def6f6p-17f, 0.0f, 0.0f, 0x1.fa9fa8p-53f, 0x1.9c776p-80f,
     0x1.855948p-114f, 0.0f, 0.0f, 0x1.7af89cp-56f, 0.0f, 0x1.5cdcd2p-31f, 0.0f,
     0x1.56eb3ep-124f, 0x1.b28e44p-77f, 0x1.b65464p-50f, 0.0f, 0x1.0eb50ep-107f, 0.0f,
     0.0f, 0x1.f41aaep-38f, 0.0f, 0x1.26ccbap-9f, 0.0f, 0.0f, 0x1.ee3454p-78f,
     0x1.7aa84cp-116f, 0x1.3ae7bap-31f, 0x1.b9f21cp-29f, 0x1.b3d942p-69f,
     0x1.e28282p-21f, 0.0f, 0x1.1a7a1cp-1f, 0x1.16e984p-11f, 0x1.e25c34p-7f,
     0x1.c4138ap-32f, 0.0f, 0.0f, 0x1.d56d58p-16f, 0.0f, 0x1.e68082p-66f,
     0x1.b1c9ccp-90f, 0.0f, 0x1.a32dc4p-23f, 0.0f, 0x1.419116p-115f, 0x1p0f, 0.0f,
     0x1.153802p-69f, 0x1.a621bcp-30f, 0.0f, 0.0f, 0x1.eab506p-79f, 0x1.fe09c4p-59f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.df454p-48f, 0.0f, 0.0f, 0.0f, 0x1.001dacp-107f,
     0x1.879df2p-52f, 0x1.a9abaap-63f, 0x1.345feep-65f, 0.0f, 0x1.a978ecp-62f, 0.0f,
     0x1.9b1e26p-56f, 0x1.404642p-44f, 0x1.a661c2p-73f, 0x1.14e20cp-2f,
     0x1.1eb94cp-63f, 0x1.f8b3bcp-84f, 0.0f, 0.0f, 0x1.2a32bcp-77f, 0.0f,
     0x1.41495cp-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1ce0cap-105f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.db90f2p-99f, 0x1.88962ap-79f, 0x1.fe6506p-17f, 0.0f,
     0x1.1baa64p-89f, 0.0f, 0x1.40adbap-46f, 0.0f, 0x1.0ba78ep-83f, 0x1.d4f546p-41f,
     0x1.fb347ap-100f, 0x1.cd898ep-110f, 0.0f, 0x1.40163ap-24f, 0.0f, 0x1.cc02b6p-25f,
     0x1.c0e084p-112f, 0x1.561d72p-97f, 0x1.7c58a4p-42f, 0x1.4ffd48p-114f, 0.0f, 0.0f,
     0.0f, 0x1.6ae63ep-73f, 0x1.5cbf6ep-31f, 0.0f, 0.0f, 0x1.538cc2p-3f,
     0x1.358e4p-50f, 0x1.43af6ap-19f, 0.0f, 0x1.303c62p-86f, 0x1.b90242p-33f,
     0x1.1a8e44p-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c3d1bp-8f, 0x1.933f18p-11f,
     0.0f, 0x1.888dp-46f, 0.0f, 0.0f, 0x1.49ae9ep-83f, 0x1.71e63ep-115f,
     0x1.9d74bap-36f, 0x1.d63612p-90f, 0x1.2d858ep-87f, 0x1.38af5p-85f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b141ccp-14f, 0x1.1079fp-39f, 0x1.6a9354p-37f,
     0x1.a90f6p-86f, 0x1.646a3p-96f, 0x1.2b3c36p-33f, 0.0f, 0x1.116366p-19f, 0.0f,
     0x1.874a2ep-17f, 0x1.0a70fap-36f, 0x1.7d2a7p-4f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0ff02ap-17f, 0.0f, 0x1.323bacp-33f, 0x1.7738cap-83f, 0.0f, 0x1.57c6eep-53f,
     0x1.b186ap-17f, 0x1.ac1674p-23f, 0.0f, 0x1.55a448p-21f, 0x1.7e0eap-62f, 0.0f,
     0x1.603e1ap-1f, 0.0f, 0x1.db4f46p-64f, 0.0f, 0x1.ba14f4p-96f, 0.0f, 0.0f,
     0x1.641b06p-40f, 0.0f, 0x1.88dde4p-108f, 0.0f, 0x1.eb18c4p-74f, 0.0f,
     0x1.492306p-114f, 0.0f, 0x1.233866p-30f, 0x1.72b138p-76f, 0x1.39059cp-33f,
     0x1.1446d4p-44f, 0.0f, 0x1.694facp-11f, 0.0f, 0x1.cb68e4p-31f, 0.0f,
     0x1.534c2p-48f, 0.0f, 0x1.c2e932p-47f, 0x1.90c36ap-14f, 0x1.fef736p-126f, 0.0f,
     0x1.98908ep-17f, 0x1.464c4cp-21f, 0x1.0e556p-93f, 0.0f, 0.0f, 0x1.5ee862p-26f,
     0.0f, 0x1.5c225ep-9f, 0.0f, 0x1.abfedep-89f, 0x1.f20d5cp-85f, 0.0f,
     0x1.d53d38p-3f, 0x1.271fc2p-49f, 0.0f, 0.0f, 0x1.132008p-58f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.0e1e06p-33f, 0.0f, 0x1.e5b5bcp-29f, 0x1.9d7e34p-23f, 0x1.f8d13cp-63f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a28b4ap-60f, 0.0f, 0x1.09b03ep-125f,
     0x1.da3b12p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e991a8p-116f, 0x1.5a9aa4p-113f,
     0.0f, 0x1.6ed71ap-25f, 0.0f, 0x1.22e566p-78f, 0x1.868b16p-6f, 0.0f,
     0x1.4e62ccp-82f, 0x1.1d5122p-53f, 0x1.f5ae6cp-12f, 0.0f, 0.0f, 0.0f,
     0x1.078dfp-29f, 0.0f, 0.0f, 0x1.d5439cp-62f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6182dcp-23f, 0x1.d010b4p-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.17bbd8p-51f, 0x1.f7c418p-76f, 0.0f, 0x1.f786eap-100f, 0.0f, 0x1.435ec2p-73f,
     0.0f, 0x1.fa4fp-99f, 0x1.a12e4ap-31f, 0x1.ebf62cp-18f, 0.0f, 0.0f,
     0x1.7b0c28p-85f, 0x1.8885e2p-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.338102p-103f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.0b97fp-43f, 0x1.5674c4p-88f, 0x1.b0e62cp-63f, 0.0f, 0.0f,
     0x1.3f6582p-50f, 0.0f, 0x1.fbb83ep-10f, 0x1.238a2ep-123f, 0x1.cbfb0ap-77f,
     0x1.8e6a98p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.56b13cp-3f, 0x1.83752cp-75f,
     0x1.750776p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1f017ep-32f,
     0x1.313354p-25f, 0.0f, 0.0f, 0x1.39db5ap-39f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.90df28p-27f, 0x1.c7362cp-10f, 0x1.7ddcf4p-92f, 0x1.3e7074p-63f,
     0x1.b89eacp-6f, 0x1.4cb988p-23f, 0.0f, 0x1.6e5b2ep-24f, 0.0f, 0x1.4a73c4p-20f,
     0.0f, 0.0f, 0x1.95b8dep-13f, 0x1.e92052p-10f, 0.0f, 0.0f, 0x1.040402p-91f,
     0x1.13b4dp-62f, 0.0f, 0.0f, 0.0f, 0x1.f7c554p-24f, 0x1.84551ep-114f,
     0x1.c11b02p-106f, 0x1.48a822p-86f, 0.0f, 0x1.f96a96p-95f, 0.0f, 0x1.243ecap-44f,
     0x1.40b8f8p-62f, 0x1.c3d026p-116f, 0x1.9cd31ap-4f, 0x1.14a99ep-17f, 0.0f,
     0x1.75a426p-119f, 0.0f, 0.0f, 0x1.2acc78p-82f, 0.0f, 0x1.f30e64p-13f, 0.0f, 0.0f,
     0x1.815da8p-14f, 0.0f, 0x1.ee283ep-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3e1638p-117f, 0x1.f1f648p-56f, 0x1.40eb0cp-92f, 0x1.626af2p-17f, 0.0f, 0.0f,
     0.0f, 0x1.af3264p-122f, 0.0f, 0.0f, 0.0f, 0x1.3917cep-24f, 0x1.6fe68cp-39f,
     0x1.aab59ep-97f, 0x1.5ba3p-123f, 0x1.b6609ap-17f, 0x1.a8669ep-58f, 0.0f,
     0x1.f6deacp-32f, 0x1.d33bfap-66f, 0.0f, 0x1.27dfe4p-37f, 0x1.38923ap-21f, 0.0f,
     0.0f, 0.0f, 0x1.98f828p-9f, 0.0f, 0.0f, 0x1.a6a274p-48f, 0x1.92b41ap-50f,
     0x1.9fa82p-100f, 0.0f, 0.0f, 0.0f, 0x1.f629f6p-105f, 0x1.e0058cp-11f,
     0x1.12bcp-101f, 0x1.21cef4p-3f, 0.0f, 0x1.a98542p-39f, 0.0f, 0.0f,
     0x1.b80f48p-77f, 0x1.66043ep-47f, 0x1.c2e2acp-80f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fd6be4p-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.795968p-118f, 0.0f, 0.0f,
     0x1.0d4ed8p-73f, 0x1.8d6a9ep-51f, 0.0f, 0.0f, 0x1.458608p-111f, 0.0f,
     0x1.43e11cp-56f, 0.0f, 0.0f, 0x1.61a078p-2f, 0.0f, 0.0f, 0x1.80cce8p-30f, 0.0f,
     0x1.82a75p-78f, 0.0f, 0.0f, 0.0f, 0x1.442154p-15f, 0x1.950536p-6f,
     0x1.3b920ap-6f, 0.0f, 0x1.5aeaa6p-116f, 0.0f, 0x1.f8a948p-89f, 0x1.47d326p-64f,
     0.0f, 0x1.4fb07ep-9f, 0.0f, 0x1.5bc7e6p-90f, 0x1.218458p-117f, 0x1.42cf2p-114f,
     0x1.3d9ac6p-117f, 0x1.772912p-24f, 0x1.4b824p-46f, 0x1.c47fbcp-35f,
     0x1.b8e224p-41f, 0x1.07cff8p-15f, 0.0f, 0x1.ba390ep-26f, 0x1.97e816p-113f, 0.0f,
     0x1.109f3p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.429254p-100f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.9578c4p-94f, 0.0f, 0x1.0ecf9ep-45f, 0x1.f4c6f6p-58f,
     0x1.ca6dbp-4f, 0x1.f83f2p-57f, 0x1.374ef4p-66f, 0.0f, 0.0f, 0x1.a68684p-78f,
     0x1.4163ccp-6f, 0x1.165ef2p-16f, 0x1.c32bc4p-59f, 0x1.eba8acp-31f,
     0x1.e844b6p-42f, 0.0f, 0.0f, 0x1.7b28a6p-121f, 0x1.ace9d2p-41f, 0x1.af1dbcp-73f,
     0x1.292738p-32f, 0x1.429f12p-77f, 0.0f, 0x1.56476ep-9f, 0.0f, 0x1.727e5ap-4f,
     0.0f, 0.0f, 0x1.13524ep-1f, 0.0f, 0.0f, 0x1.e543ecp-69f, 0.0f, 0.0f,
     0x1.8b1f42p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eefac6p-22f,
     0.0f, 0x1.0da4fp-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.33781ep-24f, 0.0f, 0.0f,
     0.0f, 0x1.c59a5cp-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4aab18p-110f, 0.0f,
     0.0f, 0x1.f757d8p-73f, 0x1.efaef8p-79f, 0x1.f84ef8p-114f, 0x1.5eb5dcp-89f,
     0x1.d6b0e2p-16f, 0.0f, 0x1.f6821ep-74f, 0.0f, 0x1.012496p-44f, 0x1.c28a3p-70f,
     0x1.ffe212p-33f, 0.0f, 0.0f, 0.0f, 0x1.6eb434p-115f, 0x1.23050ep-27f, 0.0f, 0.0f,
     0x1.a372c2p-97f, 0x1.2506a2p-73f, 0x1.f107dap-17f, 0.0f, 0.0f, 0x1.85d53cp-85f,
     0x1.265f9cp-82f, 0x1.cbcdcep-106f, 0.0f, 0.0f, 0x1.36efe4p-77f, 0x1.b6ff5ep-17f,
     0.0f, 0x1.927e2ep-66f, 0.0f, 0x1.9a6c08p-123f, 0.0f, 0x1.a79c0ep-45f, 0.0f, 0.0f,
     0.0f, 0x1.ef8c52p-89f, 0.0f, 0x1.cdf49p-8f, 0.0f, 0.0f, 0x1.d1a422p-102f, 0.0f,
     0.0f, 0.0f, 0x1.69db2ap-12f, 0x1.8604a6p-9f, 0x1.45e1fp-3f, 0x1.2666acp-4f,
     0x1.77ac1ap-19f, 0x1.a16e3ep-12f, 0.0f, 0.0f, 0x1.5129ecp-10f, 0.0f, 0.0f, 0.0f,
     0x1.270e7p-47f, 0.0f, 0.0f, 0x1.03a9aep-97f, 0.0f, 0x1.3b4a82p-112f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.2ade9cp-78f, 0x1.b15d2p-69f, 0x1.9001a4p-71f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.17f8bap-40f, 0.0f, 0.0f, 0x1.e27a4p-72f, 0x1.9d1dcp-43f,
     0x1.7e4ec4p-104f, 0x1.def21ap-77f, 0x1.db2032p-72f, 0.0f, 0x1.28441cp-111f,
     0x1.cea97p-126f, 0.0f, 0x1.fca90ap-125f, 0.0f, 0.0f, 0x1.a3a9bep-41f, 0.0f, 0.0f,
     0x1.439a6p-86f, 0x1.db7938p-4f, 0.0f, 0.0f, 0.0f, 0x1.e78478p-113f,
     0x1.42fd0ap-125f, 0.0f, 0.0f, 0x1.c18c7p-77f, 0x1.bf6b22p-20f, 0x1.053834p-126f,
     0.0f, 0x1.ec2654p-48f, 0x1.e134ccp-80f, 0x1.62db14p-34f, 0.0f, 0.0f, 0.0f,
     0x1.7b388ep-4f, 0.0f, 0x1.68486p-121f, 0.0f, 0x1.1ec008p-117f, 0x1.0dbc8cp-53f,
     0x1.1e671cp-55f, 0x1.f142e2p-76f, 0.0f, 0x1.809ccep-112f, 0.0f, 0x1.d79b54p-2f,
     0.0f, 0x1.c2d89ap-10f, 0x1.ab255p-109f, 0.0f, 0x1.fb2b42p-12f, 0.0f,
     0x1.5336b8p-75f, 0.0f, 0x1.2d3f36p-98f, 0x1.971fd6p-19f, 0x1.29ab48p-77f, 0.0f,
     0.0f, 0x1.93a4ap-105f, 0x1.4df31ap-13f, 0.0f, 0x1.fa2e34p-10f
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
            tmp2 = Sleef_finz_hypotf4_u05kvx(tmp0, tmp1);
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
    printf("Sleef_finz_hypotf4_u05kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_hypotf4_u05kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
