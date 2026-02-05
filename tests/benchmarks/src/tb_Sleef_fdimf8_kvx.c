/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_fdimf8_kvx.c --function Sleef_fdimf8_kvx --arity 2 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32,binary32 \
 *     --vector-size 8 --function-input-vector-size 8 --bench \
 *     --no-embedded-bin --target kv3
 *
 */
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float8_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float8_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1008];
static const float external_bench_wrapper_input_table_arg0[1008]  = {
     0.0f, 0x1.b434b6p-97f, 0.0f, 0.0f, 0x1.0eefbp-118f, 0.0f, 0.0f, 0x1.514a6ep-10f,
     0.0f, 0x1.7f35c4p-34f, 0.0f, 0.0f, 0.0f, 0x1.2b1d54p-45f, 0x1.72cd2p-95f, 0.0f,
     0x1.eb0b72p-105f, 0x1.07dd1p-5f, 0x1.68bc36p-27f, 0x1.bcb6dcp-11f,
     0x1.0c5e38p-45f, 0.0f, 0x1.fff06p-53f, 0.0f, 0x1.76494cp-91f, 0x1.83bbe2p-99f,
     0x1.9f3698p-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a778a2p-113f, 0.0f, 0.0f,
     0x1.89d76ep-126f, 0x1.dcb716p-105f, 0.0f, 0x1.9ca5ecp-23f, 0x1.293f7ap-61f,
     0x1.0a706p-63f, 0.0f, 0x1.85fea8p-45f, 0x1.26173ep-101f, 0x1.daaed4p-9f,
     0x1.62985cp-39f, 0.0f, 0.0f, 0x1.f96e1ep-72f, 0x1.124a16p-63f, 0x1.35346p-92f,
     0.0f, 0x1.08e742p-69f, 0.0f, 0.0f, 0x1.196d4cp-3f, 0x1.b92eccp-9f, 0.0f,
     0x1.15cebcp-90f, 0x1.139f42p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ebb1eep-101f,
     0.0f, 0.0f, 0x1.0afaa2p-85f, 0.0f, 0.0f, 0.0f, 0x1.a2a2f4p-80f, 0x1.d01aep-89f,
     0x1.63cc0ap-18f, 0.0f, 0.0f, 0x1.1e830ap-84f, 0.0f, 0x1.df13fep-121f, 0.0f, 0.0f,
     0x1.fad2e8p-74f, 0x1.2a4358p-84f, 0x1.1a5fcap-38f, 0.0f, 0x1.4cabep-17f, 0.0f,
     0.0f, 0.0f, 0x1.558f3cp-50f, 0x1.91c12cp-1f, 0.0f, 0.0f, 0x1.afa074p-95f,
     0x1.77b7ap-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ae0fcep-105f, 0.0f, 0x1.c25e6cp-39f,
     0.0f, 0x1.f8e03p-19f, 0.0f, 0.0f, 0x1.ee6e96p-113f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0c190cp-95f, 0x1.a4bd8ap-43f, 0.0f, 0.0f, 0x1.e831cep-114f, 0.0f,
     0x1.95a544p-122f, 0.0f, 0.0f, 0x1.6dbad4p-49f, 0x1.1831b2p-64f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.52455ap-111f, 0x1.95ca42p-26f, 0x1.e9b5acp-116f, 0.0f, 0.0f,
     0x1.076d7ep-37f, 0x1.ea5ap-50f, 0x1.3f2c88p-74f, 0x1.0cda2ap-103f,
     0x1.47164ap-70f, 0x1.7765cap-121f, 0x1.b5483cp-3f, 0.0f, 0x1.2f9ee8p-95f,
     0x1.055ff8p-84f, 0x1.b1dbdp-61f, 0.0f, 0.0f, 0x1.6c5dbcp-20f, 0.0f,
     0x1.c03c34p-103f, 0x1.94a36ap-88f, 0x1.050c98p-37f, 0x1.a3703cp-72f,
     0x1.2c86e6p-72f, 0.0f, 0x1.36f05ap-56f, 0x1.9cecd6p-27f, 0.0f, 0x1.98f7d2p-37f,
     0x1.05fc5ep-53f, 0x1.1a8a62p-54f, 0x1.cf6a9cp-115f, 0x1.b11fd8p-50f,
     0x1.2db378p-61f, 0.0f, 0x1.36e8ccp-13f, 0x1.432e2ap-109f, 0x1.0d5b04p-52f,
     0x1.abe9aep-23f, 0.0f, 0x1.30ae5cp-15f, 0.0f, 0x1.8eee9p-29f, 0.0f,
     0x1.8a12a8p-17f, 0x1.fc2e0ep-34f, 0x1.d7fbfp-40f, 0.0f, 0.0f, 0x1.4f8246p-52f,
     0.0f, 0x1.076e2ep-8f, 0x1.021d4ep-72f, 0x1.7dac78p-75f, 0.0f, 0x1.0c5126p-45f,
     0x1.3ae2cap-13f, 0.0f, 0x1.c2d82p-75f, 0x1.58a586p-65f, 0x1.f490bap-12f,
     0x1.09a79p-109f, 0.0f, 0.0f, 0x1.b7f61ep-56f, 0x1.b22d34p-5f, 0x1.59fe1p-106f,
     0.0f, 0x1.fc896p-112f, 0.0f, 0x1.08a956p-121f, 0.0f, 0.0f, 0x1.1ab4cp-10f, 0.0f,
     0.0f, 0x1.7c2a84p-70f, 0x1.fe9f3ep-3f, 0x1.7277bep-10f, 0x1.48fa28p-106f,
     0x1.256656p-77f, 0x1.e332f6p-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.09ae46p-62f, 0.0f, 0x1.0f7654p-1f, 0x1.ea97fep-36f, 0.0f, 0x1.d23c68p-123f,
     0x1.0a0db6p-86f, 0.0f, 0.0f, 0x1.20612p-36f, 0.0f, 0x1.59e7a8p-59f, 0.0f,
     0x1.e68224p-119f, 0.0f, 0.0f, 0.0f, 0x1.b285fap-17f, 0.0f, 0x1.49b3eap-117f,
     0x1.fb787ap-16f, 0.0f, 0.0f, 0x1.54ae12p-81f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.87b9e8p-85f, 0x1.60119p-93f, 0x1.e57cd4p-86f, 0x1.57570cp-109f,
     0x1.4a6fap-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.67648ap-44f, 0x1.12df0ep-105f,
     0x1.95ced8p-105f, 0x1.77154ep-52f, 0x1.02ff02p-55f, 0.0f, 0.0f, 0x1.e26a6ap-6f,
     0x1.75c59p-26f, 0.0f, 0x1.9ab1e6p-95f, 0.0f, 0.0f, 0.0f, 0x1.99f32ep-42f,
     0x1.f00496p-97f, 0.0f, 0x1.d0fb18p-63f, 0x1.589bep-47f, 0x1.fcde0ap-18f,
     0x1.fa5d94p-102f, 0.0f, 0x1.c3288cp-101f, 0x1.31e08p-88f, 0.0f, 0x1.8553a6p-50f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e95aaep-30f, 0x1.5831d8p-71f, 0x1.ad7322p-39f,
     0x1.4bd55ap-24f, 0x1.6db6ep-35f, 0x1.aa5c58p-100f, 0x1.c7969ep-124f, 0.0f,
     0x1.a0a22ap-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.64413ap-64f, 0x1.738cacp-80f,
     0x1.f0aff4p-116f, 0x1.b5a61cp-78f, 0.0f, 0x1.17102cp-16f, 0x1.5cd6bep-71f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.633f34p-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d0a412p-81f, 0.0f, 0x1.e3ca6cp-62f, 0x1.365294p-97f, 0x1.b7278ep-54f,
     0x1.9af342p-52f, 0x1.f96fbep-95f, 0x1.40e52ep-18f, 0.0f, 0x1.1e8f2cp-14f, 0.0f,
     0.0f, 0x1.951d52p-34f, 0.0f, 0x1.96258ep-116f, 0x1.a55e32p-105f, 0.0f,
     0x1.befe4ep-61f, 0x1.b88a3cp-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.472ee4p-49f,
     0x1.7db99p-38f, 0.0f, 0x1.f5360ap-13f, 0.0f, 0x1.c07294p-120f, 0.0f, 0.0f,
     0x1.757c4ap-101f, 0x1.8fcdd8p-31f, 0.0f, 0.0f, 0.0f, 0x1.a6dc9p-69f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1cc9ecp-56f, 0x1.0c79aap-16f, 0.0f, 0x1.0392c8p-8f,
     0x1.be93eap-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.52c9b4p-112f,
     0x1.3aefccp-56f, 0x1.aa373ep-18f, 0x1.a3801ap-27f, 0x1.c43b16p-115f,
     0x1.476394p-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ac3b1ep-71f, 0x1.7f1ae8p-74f,
     0x1.1ab2dap-83f, 0x1.ac487ep-75f, 0x1.7f0a5ep-115f, 0.0f, 0x1.3258a4p-63f,
     0x1.8a3c92p-41f, 0x1.160a88p-102f, 0x1.103e7ap-2f, 0x1.483694p-24f,
     0x1.c2e40cp-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1b5e92p-2f, 0x1.8648bap-112f, 0.0f,
     0x1.69b852p-123f, 0x1.9ba57ep-118f, 0.0f, 0x1.6a19fep-32f, 0.0f, 0x1.53a5d6p-35f,
     0.0f, 0x1.50514cp-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.41320ap-9f,
     0x1.2b9cbep-114f, 0x1.fec514p-62f, 0x1.25eb1ap-90f, 0x1.2bd674p-63f,
     0x1.ff409cp-43f, 0x1.8a2354p-21f, 0x1.c7254p-92f, 0.0f, 0x1.7e026ap-123f,
     0x1.3c8d6p-12f, 0.0f, 0.0f, 0x1.b07afp-100f, 0.0f, 0x1.cd3532p-121f, 0.0f,
     0x1.01246ep-108f, 0x1.2296e6p-55f, 0x1.29443p-24f, 0.0f, 0x1.08525ep-79f,
     0x1.7db35ap-10f, 0.0f, 0.0f, 0x1.8150d8p-126f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.81fa48p-3f, 0.0f, 0.0f, 0x1.a522fp-86f, 0x1.d5edf4p-125f, 0.0f,
     0x1.1131c4p-107f, 0.0f, 0.0f, 0.0f, 0x1.71b7p-35f, 0.0f, 0x1.3c1802p-64f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d0d046p-96f, 0x1.05424ap-18f, 0x1.95a0c2p-24f,
     0x1.c307e6p-83f, 0x1.07df2ep-24f, 0.0f, 0.0f, 0.0f, 0x1.d5c57cp-95f, 0.0f,
     0x1.7fce82p-109f, 0.0f, 0x1.3d947ep-115f, 0.0f, 0x1.7930bcp-36f, 0x1.3ff872p-31f,
     0x1.a0e7f2p-80f, 0x1.bcbd1cp-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.37d07ap-97f,
     0x1.802318p-51f, 0.0f, 0x1.c6c032p-24f, 0x1.8dfbbep-86f, 0.0f, 0x1.f0f5bap-82f,
     0x1.dc28bp-12f, 0.0f, 0x1.f074acp-95f, 0x1.ba7c16p-82f, 0x1.a91db2p-113f,
     0x1.f80faap-53f, 0.0f, 0x1.217a1ep-47f, 0x1.43238cp-99f, 0.0f, 0x1.8bfd32p-31f,
     0.0f, 0x1.58cdeap-64f, 0x1.9d83a2p-4f, 0x1.42321ap-115f, 0x1.6f23eap-67f, 0.0f,
     0x1.660618p-67f, 0x1.edeb42p-46f, 0x1.5d76fep-50f, 0.0f, 0x1.18c58ap-94f, 0.0f,
     0x1.8d006ep-84f, 0x1.bb93c8p-83f, 0.0f, 0.0f, 0x1.507d7p-76f, 0.0f,
     0x1.2c92dap-32f, 0x1.aa1d38p-84f, 0x1.925faap-117f, 0x1.bd7498p-8f,
     0x1.37a526p-51f, 0.0f, 0x1.af544ap-80f, 0x1.e8a754p-75f, 0x1.c3a40ap-62f, 0.0f,
     0x1.9ca3bep-11f, 0.0f, 0x1.f73f4ap-14f, 0.0f, 0.0f, 0x1.115f68p-35f, 0.0f,
     0x1.91effcp-92f, 0.0f, 0.0f, 0x1.fb78ecp-12f, 0x1.123a06p-114f, 0.0f,
     0x1.8d5406p-39f, 0x1.3ff5dep-121f, 0.0f, 0.0f, 0.0f, 0x1.556568p-125f, 0.0f,
     0.0f, 0x1.cde6fap-110f, 0.0f, 0x1.cfbfb4p-23f, 0x1.f14d3ap-73f, 0x1.6546b2p-118f,
     0x1.4c5b28p-21f, 0.0f, 0x1.6429aap-3f, 0.0f, 0.0f, 0.0f, 0x1.ea671cp-30f,
     0x1.8eaf4ap-28f, 0.0f, 0.0f, 0x1.2b7a0ep-26f, 0.0f, 0x1.c70482p-78f,
     0x1.c330ecp-63f, 0.0f, 0x1.1c6238p-37f, 0x1.3c401cp-25f, 0x1.387baap-122f, 0.0f,
     0.0f, 0x1.588eaep-15f, 0x1.009346p-122f, 0.0f, 0x1.75f23p-19f, 0x1.2c8184p-35f,
     0x1.0033b8p-29f, 0.0f, 0x1.6d54cap-13f, 0.0f, 0.0f, 0x1.195becp-102f,
     0x1.a9d81p-61f, 0x1.c2f134p-44f, 0x1.dbe4e4p-61f, 0x1.0b4838p-79f, 0.0f,
     0x1.29f0ccp-67f, 0x1.faee5ap-119f, 0x1.81d6dep-48f, 0x1.31bd56p-53f,
     0x1.e43ba2p-7f, 0.0f, 0x1.9012e4p-63f, 0x1.1f3d46p-93f, 0.0f, 0.0f,
     0x1.65b81cp-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.756768p-91f, 0x1.3d03eep-15f,
     0.0f, 0.0f, 0x1.a0c21ep-93f, 0.0f, 0x1.bac188p-6f, 0x1.b161b8p-86f,
     0x1.c5256cp-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b2addap-17f, 0.0f, 0x1.207b98p-91f,
     0x1.b942ap-34f, 0x1.e310fep-112f, 0x1.5ab246p-106f, 0x1.dc8ed2p-90f,
     0x1.0edd44p-120f, 0.0f, 0.0f, 0.0f, 0x1.473834p-94f, 0.0f, 0x1.0d10cep-1f, 0.0f,
     0.0f, 0x1.624368p-107f, 0x1.d146f2p-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d0fb16p-61f, 0.0f, 0x1.41eda6p-38f, 0.0f, 0x1.46a758p-105f, 0x1.3562a8p-51f,
     0.0f, 0x1.69b1e4p-53f, 0x1.88303p-19f, 0x1.bf6c1p-54f, 0.0f, 0.0f,
     0x1.f5f644p-56f, 0x1.a45f9ep-51f, 0x1.87220ep-56f, 0x1.f5cfcp-89f, 0.0f, 0.0f,
     0x1.8834ap-21f, 0x1.fcd5c6p-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ac17fp-52f, 0.0f,
     0x1.f309d8p-107f, 0x1.c508d8p-25f, 0x1.9c5584p-29f, 0.0f, 0x1.061a88p-113f, 0.0f,
     0x1.e791dap-88f, 0x1.216c2cp-82f, 0x1.cd9ccp-119f, 0.0f, 0.0f, 0x1.e92212p-65f,
     0x1.b17876p-49f, 0x1.15dec2p-29f, 0x1.a4dfap-45f, 0.0f, 0x1.a7b2eap-63f,
     0x1.411dap-30f, 0.0f, 0x1.bb8c5p-125f, 0x1.ca9aecp-2f, 0x1.1bac2p-111f,
     0x1.6f3784p-32f, 0.0f, 0x1.1ed798p-117f, 0x1.b5edb4p-1f, 0x1.23d2b6p-111f,
     0x1.e76698p-94f, 0.0f, 0x1.0bb8e4p-51f, 0x1.ec261ep-40f, 0.0f, 0.0f,
     0x1.9f3922p-76f, 0.0f, 0.0f, 0x1.762718p-122f, 0x1.20735p-66f, 0.0f,
     0x1.a942f2p-33f, 0x1.9afc5p-20f, 0x1.bef202p-80f, 0.0f, 0x1.a8d13ep-31f, 0.0f,
     0x1.4f6764p-99f, 0x1.a907b4p-119f, 0.0f, 0.0f, 0x1.a9fd78p-123f, 0x1.f2326p-16f,
     0.0f, 0.0f, 0x1.711b9ap-68f, 0.0f, 0x1.15b046p-68f, 0.0f, 0x1.ca0106p-16f,
     0x1.d80d62p-37f, 0.0f, 0x1.049744p-93f, 0x1.f396dep-112f, 0x1.aba5fep-43f,
     0x1.6da1cp-118f, 0.0f, 0x1.31158p-117f, 0.0f, 0x1.b68c7ap-14f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.2f8edap-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.865a4ep-27f, 0.0f, 0.0f,
     0x1.167bdap-72f, 0.0f, 0.0f, 0.0f, 0x1.724d0cp-50f, 0x1.48cc1ap-90f,
     0x1.680f94p-64f, 0x1.1cd99cp-73f, 0x1.ffa3c4p-120f, 0.0f, 0x1.417508p-8f, 0.0f,
     0.0f, 0x1.9abc26p-79f, 0x1.e1dd7cp-46f, 0.0f, 0.0f, 0x1.0c2b5ap-5f, 0.0f,
     0x1.b3f404p-105f, 0x1.3bc954p-17f, 0x1.5a66bcp-115f, 0x1.55feecp-101f,
     0x1.c5554ap-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.21e2a8p-51f,
     0x1.2aa648p-54f, 0.0f, 0.0f, 0.0f, 0x1.dc8c8ep-123f, 0x1.fa29d8p-55f,
     0x1.01e76p-126f, 0.0f, 0x1.9e9454p-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8b6p-3f, 0x1.a75714p-25f, 0x1.9305aap-105f, 0x1.992eb4p-93f, 0x1.142d4ap-33f,
     0.0f, 0.0f, 0.0f, 0x1.fa67aep-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.02375ep-74f, 0.0f, 0.0f, 0.0f, 0x1.97902ep-26f, 0.0f, 0x1.18be44p-9f,
     0x1.af1504p-51f, 0.0f, 0.0f, 0x1.45f6a4p-17f, 0x1.491342p-30f, 0x1.a61a9ep-114f,
     0x1.cc69dep-58f, 0.0f, 0.0f, 0x1.d5368ap-86f, 0x1.9eefdep-75f, 0x1.930436p-71f,
     0.0f, 0.0f, 0.0f, 0x1.b3bfa8p-67f, 0.0f, 0x1.aaaabep-110f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.4048fcp-7f, 0x1.414dc2p-110f, 0x1.0dbdd4p-102f,
     0x1.d607f4p-15f, 0.0f, 0x1.e91756p-42f, 0.0f, 0x1.c633fcp-103f, 0.0f, 0.0f, 0.0f,
     0x1.972a1ap-115f, 0.0f, 0x1.8b23eap-55f, 0.0f, 0x1.022362p-60f, 0x1.daff2ep-51f,
     0x1.5b5c64p-111f, 0x1.519648p-78f, 0.0f, 0x1.3498bap-114f, 0x1.d3c274p-26f, 0.0f,
     0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.0d2d46p-79f, 0x1.2a6fdp-111f, 0.0f,
     0x1.b25fccp-53f, 0.0f, 0.0f, 0.0f, 0x1.fa2b14p-89f, 0x1.cfe866p-12f, 0.0f,
     0x1.367d8cp-90f, 0x1.310826p-13f, 0.0f, 0.0f, 0.0f, 0x1.98fc88p-24f,
     0x1.73557cp-51f, 0x1.1a85bcp-105f, 0x1.1079fep-86f, 0x1.afa9bcp-98f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.54fb88p-126f, 0.0f, 0.0f, 0.0f, 0x1.f281c2p-39f,
     0x1.085b8ep-31f, 0x1.73ed9cp-16f, 0x1.951ceap-79f, 0.0f, 0.0f, 0x1.e92756p-12f,
     0.0f, 0.0f, 0x1.93018p-42f, 0x1.1e13d6p-77f, 0.0f, 0x1.ec69fep-120f,
     0x1.47df8cp-61f, 0.0f, 0x1.199136p-112f, 0.0f, 0.0f, 0.0f, 0x1.5246a4p-56f, 0.0f,
     0.0f, 0.0f, 0x1.7fd2ccp-91f, 0.0f, 0.0f, 0x1.7f4524p-87f, 0x1.c27c58p-53f,
     0x1.af9212p-81f, 0x1.134528p-109f, 0x1.98229ap-74f, 0.0f, 0x1.aa0aa8p-44f, 0.0f,
     0.0f, 0x1.5c0494p-5f, 0x1.241acep-49f, 0.0f, 0x1.1150e8p-35f, 0x1.826e2p-35f,
     0.0f, 0x1.012baap-100f, 0x1.0f7d4ap-87f, 0x1.5757f8p-80f, 0x1.16ccbap-9f, 0.0f,
     0x1.d6da44p-45f, 0x1.6098e2p-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b28224p-92f, 0.0f, 0x1.4427e6p-33f,
     0x1.4f47d8p-93f, 0x1.eaaf5cp-35f, 0.0f, 0.0f, 0.0f, 0x1.3b27b6p-64f,
     0x1.774786p-126f, 0x1.29723ep-92f, 0x1.d8947ap-105f, 0x1.d129fep-20f,
     0x1.5a2b7ep-43f, 0x1.4da11ap-100f, 0.0f, 0x1.76890ep-70f, 0x1.29062ap-102f,
     0x1.ced9dcp-15f, 0x1.77027ep-111f, 0.0f, 0x1.6677bep-71f, 0.0f, 0.0f,
     0x1.7fc9e2p-78f, 0x1.1ca662p-102f, 0.0f, 0x1.f472fap-107f, 0.0f, 0.0f,
     0x1.18243ap-82f, 0.0f, 0.0f, 0.0f, 0x1.1cdc6ep-109f, 0.0f, 0.0f, 0x1.994edap-39f,
     0.0f, 0.0f, 0.0f, 0x1.128d58p-124f, 0.0f, 0x1.244324p-19f, 0.0f, 0.0f, 0.0f,
     0x1.d01ed8p-43f, 0.0f, 0.0f
};
static const float external_bench_wrapper_input_table_arg1[1008]  = {
     0.0f, 0x1.c0a9a4p-102f, 0.0f, 0x1.49788ap-30f, 0x1.2aba74p-114f,
     0x1.52b776p-77f, 0.0f, 0x1.ffa30cp-5f, 0.0f, 0.0f, 0x1.d5d59ep-17f,
     0x1.49a2b6p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.29bc84p-10f,
     0x1.f8c01ep-119f, 0.0f, 0.0f, 0x1.20c4e2p-25f, 0.0f, 0x1.37fb84p-47f,
     0x1.57c946p-104f, 0.0f, 0x1.d494b2p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.773898p-102f, 0x1.afd96ap-114f, 0.0f, 0x1.5b4602p-35f, 0x1.c49048p-100f,
     0.0f, 0x1.bb9b7ap-63f, 0.0f, 0.0f, 0x1.7672f8p-87f, 0.0f, 0x1.cd876ap-19f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.2500eap-10f, 0.0f, 0x1.67c036p-102f, 0x1.6c17bep-110f,
     0.0f, 0.0f, 0.0f, 0x1.15674cp-33f, 0.0f, 0x1.3d041ap-78f, 0x1.6ccd7ap-40f,
     0x1.976bbep-55f, 0x1.000828p-84f, 0x1.6ede28p-69f, 0x1.4ebcdap-122f, 0.0f,
     0x1.cbdc38p-25f, 0.0f, 0x1.c58ddcp-116f, 0.0f, 0.0f, 0.0f, 0x1.7f1746p-22f, 0.0f,
     0.0f, 0x1.c1550ap-97f, 0x1.e824cep-96f, 0.0f, 0x1.4c5684p-112f, 0.0f,
     0x1.d50282p-44f, 0.0f, 0x1.b30af8p-105f, 0.0f, 0x1.4d7986p-112f, 0.0f, 0.0f,
     0x1.ecab06p-83f, 0.0f, 0.0f, 0.0f, 0x1.4f0124p-37f, 0.0f, 0.0f, 0.0f,
     0x1.31b998p-109f, 0.0f, 0x1.67ce1p-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c814b4p-33f, 0x1.007c72p-29f, 0x1.b7f3b6p-22f, 0x1.30fd02p-47f,
     0x1.dc4ddp-67f, 0x1.c313a6p-7f, 0x1.9d0052p-46f, 0x1.7a3aap-80f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f549b8p-125f, 0x1.6368aap-17f, 0.0f, 0x1.e739b2p-8f, 0.0f,
     0x1.4fe6d6p-9f, 0.0f, 0.0f, 0.0f, 0x1.7ba47p-1f, 0x1.3babfp-3f, 0x1.48ae98p-95f,
     0.0f, 0.0f, 0x1.190288p-18f, 0.0f, 0x1.792318p-16f, 0x1.384b24p-97f,
     0x1.0bfee8p-30f, 0x1.785798p-50f, 0.0f, 0x1.c560dap-69f, 0.0f, 0.0f,
     0x1.b3d996p-25f, 0.0f, 0x1.408324p-5f, 0.0f, 0.0f, 0.0f, 0x1.2e9baep-71f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c61ce6p-51f, 0x1.124052p-80f, 0.0f, 0x1.44c50ap-109f,
     0x1.170bf4p-64f, 0x1.875474p-125f, 0x1.90f192p-60f, 0x1.ccf2ap-122f,
     0x1.10d292p-124f, 0.0f, 0x1.fbcb2p-46f, 0.0f, 0x1.14041p-85f, 0x1.a372e8p-5f,
     0x1.870b3ap-120f, 0x1.aa4cf4p-105f, 0x1.28bdd2p-125f, 0.0f, 0.0f, 0.0f,
     0x1.83792ep-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.213deep-87f, 0.0f, 0.0f, 0.0f,
     0x1.226c2cp-40f, 0.0f, 0.0f, 0.0f, 0x1.8a6efp-97f, 0x1.ab178p-57f,
     0x1.1c482p-16f, 0.0f, 0x1.9c1ff6p-26f, 0x1.235fcep-118f, 0x1.8c4b3p-108f,
     0x1.a1ba8ep-121f, 0x1.3a3506p-35f, 0x1.1d07e8p-73f, 0x1.04b268p-5f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d10a02p-73f, 0x1.8923fp-66f, 0x1.32658cp-63f,
     0.0f, 0.0f, 0x1.114626p-17f, 0x1.4ccbb6p-66f, 0x1.bd0268p-30f, 0x1.b8132ap-9f,
     0.0f, 0x1.180a32p-40f, 0.0f, 0x1.a57c32p-11f, 0x1.666a7ap-58f, 0.0f, 0.0f,
     0x1.5aaadcp-108f, 0.0f, 0x1.8a0c88p-47f, 0.0f, 0.0f, 0.0f, 0x1.283b7cp-74f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.1dd4f8p-84f, 0x1.64ad6p-88f, 0x1.1a8dc8p-29f,
     0x1.97da88p-37f, 0.0f, 0x1.c116a4p-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.c375c8p-96f, 0x1.28714ep-38f, 0.0f, 0x1.48544p-24f, 0.0f, 0.0f,
     0x1.aa20bcp-79f, 0x1.28e516p-125f, 0x1.4fec2ap-82f, 0.0f, 0x1.c06342p-123f, 0.0f,
     0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.9e1e88p-96f, 0.0f, 0.0f, 0x1.015384p-35f, 0.0f,
     0.0f, 0x1.4774dap-118f, 0.0f, 0.0f, 0.0f, 0x1.2edb4cp-38f, 0x1.f122ap-7f, 0.0f,
     0.0f, 0.0f, 0x1.582012p-63f, 0x1.b535e6p-101f, 0x1.b57e0ap-41f, 0x1.fe708p-112f,
     0.0f, 0x1p0f, 0x1.dd35fcp-42f, 0x1.f19acep-107f, 0.0f, 0.0f, 0x1.6594a6p-104f,
     0.0f, 0.0f, 0.0f, 0x1.f6e58p-88f, 0.0f, 0x1.f7a3b4p-63f, 0.0f, 0.0f,
     0x1.6decaap-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1b38cp-20f, 0x1.b24c1p-61f,
     0x1.b184fcp-3f, 0x1.10ffa8p-51f, 0.0f, 0.0f, 0x1.835adep-2f, 0.0f, 0.0f,
     0x1.a10f1cp-4f, 0.0f, 0x1.21290ap-75f, 0.0f, 0.0f, 0x1.e2f136p-21f, 0.0f, 0.0f,
     0.0f, 0x1.a77e84p-10f, 0.0f, 0x1.66c222p-123f, 0x1.d656fep-8f, 0.0f, 0.0f, 0.0f,
     0x1.694e34p-122f, 0x1.13b67p-12f, 0x1.59828ep-75f, 0x1.92233p-122f,
     0x1.240bp-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.af02a4p-67f, 0x1.ec6278p-111f, 0.0f,
     0.0f, 0.0f, 0x1.1483e8p-42f, 0x1.d2f046p-88f, 0x1.8f0fe6p-100f, 0x1.e7cae2p-114f,
     0.0f, 0.0f, 0.0f, 0x1.206172p-104f, 0.0f, 0x1.9735c8p-112f, 0x1.6e629ap-77f,
     0x1.4cfa2cp-6f, 0x1.01dcap-30f, 0.0f, 0x1.2766e4p-2f, 0.0f, 0.0f,
     0x1.35bde8p-93f, 0x1.2b4f94p-92f, 0x1.38b48ap-71f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9ba07ap-13f, 0x1.933144p-45f, 0.0f, 0x1.c539d4p-86f, 0x1.e7c2dap-85f,
     0x1.e90c52p-85f, 0x1.54ff8p-2f, 0x1.86edc4p-3f, 0x1.6ec904p-63f, 0x1.e85afep-37f,
     0x1.810e46p-107f, 0.0f, 0x1.2a7652p-7f, 0.0f, 0x1.9ad29cp-69f, 0x1.f22e5p-20f,
     0.0f, 0x1.029eecp-1f, 0.0f, 0x1.9d7d66p-74f, 0.0f, 0x1.534bf2p-31f,
     0x1.3d82f6p-62f, 0.0f, 0.0f, 0x1.255456p-40f, 0.0f, 0x1.f7d9fep-63f, 0.0f, 0.0f,
     0x1.945626p-31f, 0x1.7798eap-98f, 0x1.78a99cp-3f, 0.0f, 0x1.52a262p-18f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.b29ce4p-21f, 0.0f, 0x1.98693cp-99f, 0.0f,
     0.0f, 0x1.e31278p-87f, 0.0f, 0x1.26a7cp-105f, 0x1.a87d9ap-17f, 0x1.eaa132p-103f,
     0x1.a719f4p-71f, 0x1.2099d2p-106f, 0.0f, 0.0f, 0.0f, 0x1.9ca60cp-83f,
     0x1.899d44p-46f, 0.0f, 0x1.540ce8p-27f, 0x1.dc37ecp-75f, 0.0f, 0x1.dffb16p-86f,
     0.0f, 0x1.0b27c6p-48f, 0.0f, 0x1.291906p-100f, 0.0f, 0.0f, 0x1.b98466p-97f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.246c3p-19f, 0.0f, 0.0f, 0.0f, 0x1.61aed6p-61f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ec22ap-17f, 0x1.92cddap-40f, 0.0f, 0x1.260896p-26f,
     0x1.a97ff8p-2f, 0x1.b2baaap-84f, 0.0f, 0.0f, 0x1.3a2eb2p-23f, 0.0f,
     0x1.ffe7f2p-46f, 0.0f, 0x1.9d586cp-12f, 0x1.40db5ep-109f, 0x1.4aa8a2p-6f,
     0x1.d01f3ep-7f, 0x1.2c8d7p-5f, 0.0f, 0.0f, 0.0f, 0x1.ede6aap-106f,
     0x1.19d2ap-117f, 0x1.049a9ap-48f, 0x1.e3f936p-112f, 0x1.b601e8p-108f,
     0x1.1de302p-15f, 0x1.de51cep-56f, 0.0f, 0.0f, 0x1.7a106p-31f, 0.0f, 0.0f,
     0x1.596928p-19f, 0.0f, 0.0f, 0.0f, 0x1.f4292cp-58f, 0x1.6eeff2p-102f,
     0x1.5e0cccp-101f, 0.0f, 0x1.7a91acp-8f, 0x1.d08d9ep-86f, 0.0f, 0x1.8c716cp-5f,
     0x1.70da02p-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d375ep-8f,
     0x1.d4455ep-1f, 0.0f, 0x1.ca17b4p-40f, 0x1.6b2a2ep-78f, 0.0f, 0x1.4a2026p-59f,
     0.0f, 0x1.bd7cb6p-26f, 0.0f, 0.0f, 0x1.6635ccp-35f, 0x1.d9f1d8p-86f, 0.0f,
     0x1.bf6d3ap-99f, 0x1.b8bd9cp-26f, 0.0f, 0x1.9b4ccap-39f, 0.0f, 0x1.e2cc52p-5f,
     0x1.5a217p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.35014cp-103f, 0x1.c67968p-81f,
     0.0f, 0x1.76a5dcp-76f, 0.0f, 0x1.702c0ep-45f, 0x1.8460d4p-93f, 0.0f,
     0x1.1c3a12p-71f, 0.0f, 0x1.f21b24p-50f, 0x1.2c1b78p-96f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9ecec8p-6f, 0x1.a8321ap-112f, 0x1.19aa76p-48f, 0x1.4a28a4p-22f,
     0x1.46488p-15f, 0x1.09ed96p-94f, 0x1.9588f8p-78f, 0x1.6af238p-26f,
     0x1.e1951p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9c8b9ap-95f, 0.0f,
     0x1.abc68ep-12f, 0.0f, 0.0f, 0x1.19dfcap-69f, 0x1.94b1aap-11f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.957584p-62f, 0x1.b0491cp-57f, 0.0f, 0.0f, 0x1.cd637ep-115f, 0.0f,
     0x1.2c35f6p-66f, 0.0f, 0x1.f7da1cp-115f, 0.0f, 0x1.6915a4p-14f, 0x1.6536ccp-44f,
     0x1.de5fb6p-62f, 0x1.e82b68p-15f, 0x1.c956cp-53f, 0.0f, 0.0f, 0.0f,
     0x1.acd97p-22f, 0.0f, 0x1.a1a91p-25f, 0x1.647f8cp-46f, 0.0f, 0x1.44170ep-32f,
     0.0f, 0x1.c9f88ap-56f, 0.0f, 0.0f, 0x1.0f6184p-65f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.057fe6p-93f, 0.0f, 0x1.3180fep-18f, 0.0f, 0.0f, 0x1.61ca3ep-41f,
     0x1.1c8922p-59f, 0x1.701768p-18f, 0x1.d4a128p-47f, 0x1.b537d6p-72f, 0.0f,
     0x1.7005ccp-102f, 0x1.7d1238p-5f, 0x1.88b24ap-84f, 0x1.77bcap-20f,
     0x1.273688p-126f, 0x1.91c122p-1f, 0.0f, 0x1.752d94p-11f, 0x1.aed3d2p-76f, 0.0f,
     0x1.7a6f18p-43f, 0.0f, 0.0f, 0x1.e75dap-82f, 0.0f, 0x1.a4c0f4p-14f,
     0x1.3a503cp-68f, 0.0f, 0.0f, 0x1.59f2ecp-8f, 0.0f, 0.0f, 0x1.c78622p-65f,
     0x1.6bcdfep-12f, 0.0f, 0x1.ea30f8p-123f, 0x1.6c9c34p-27f, 0x1.9423ecp-10f, 0.0f,
     0.0f, 0.0f, 0x1.a28416p-100f, 0.0f, 0.0f, 0.0f, 0x1.fcd106p-66f, 0x1.e7f25ep-93f,
     0.0f, 0.0f, 0x1.559d68p-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cefe72p-97f, 0.0f,
     0x1.1d763ap-69f, 0x1.f1a50ep-16f, 0.0f, 0x1.01c83p-33f, 0.0f, 0.0f, 0x1p0f,
     0x1.160562p-79f, 0.0f, 0x1.cb97f6p-124f, 0.0f, 0.0f, 0.0f, 0x1.a0e7dap-62f,
     0x1.1d77bcp-27f, 0x1.c434aap-9f, 0.0f, 0x1.9654cep-37f, 0x1.391216p-101f,
     0x1.8a5d46p-108f, 0.0f, 0x1.990524p-85f, 0x1.3c7844p-72f, 0.0f, 0x1.a37646p-94f,
     0.0f, 0.0f, 0x1.aeadf8p-88f, 0.0f, 0.0f, 0x1.ca80c6p-42f, 0.0f, 0.0f,
     0x1.810b0cp-115f, 0x1.e3fdfcp-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3c7fdep-65f, 0x1.eda9e8p-110f, 0x1.c8d11ep-81f, 0.0f, 0x1.28bacp-26f, 0.0f,
     0.0f, 0x1.884cc4p-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.032688p-50f, 0.0f, 0.0f,
     0.0f, 0x1.f6de32p-102f, 0.0f, 0x1.d3347p-85f, 0.0f, 0x1.633c82p-8f, 0.0f, 0.0f,
     0.0f, 0x1.ec0bdcp-80f, 0.0f, 0x1.1674ep-38f, 0x1.5bbc26p-48f, 0.0f,
     0x1.b3e792p-10f, 0.0f, 0x1.6633d4p-107f, 0x1.464a38p-101f, 0.0f, 0x1.7ab01cp-5f,
     0.0f, 0x1.88290cp-20f, 0x1.443488p-9f, 0x1.98757ep-48f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.6a8ffcp-37f, 0x1.6be19cp-37f, 0.0f, 0x1.7ff2b2p-42f, 0.0f,
     0x1.5b9948p-63f, 0x1.dd0a48p-34f, 0x1.52737ep-17f, 0x1.e5bb8ap-13f,
     0x1.2961cep-89f, 0x1.f9d05ep-9f, 0x1.54080ap-75f, 0x1.2a0bb8p-12f,
     0x1.ae4246p-103f, 0x1.e89e98p-30f, 0.0f, 0x1.1847b8p-26f, 0.0f, 0x1.18744p-56f,
     0x1.2a5ceep-6f, 0x1.28badep-74f, 0x1.10cab6p-4f, 0.0f, 0x1.a140c4p-1f,
     0x1.0e7864p-29f, 0.0f, 0.0f, 0.0f, 0x1.86ecf4p-30f, 0.0f, 0x1.0d141cp-86f, 0.0f,
     0x1.52a08ap-8f, 0x1.456d6ap-122f, 0.0f, 0x1.7eabf2p-86f, 0x1.140fc4p-60f, 0.0f,
     0.0f, 0x1.39fec6p-107f, 0x1.c72304p-51f, 0.0f, 0x1.6159d2p-91f, 0x1.f9bf32p-92f,
     0.0f, 0x1.6a99a2p-72f, 0x1.5fed8ap-29f, 0x1.5401fp-15f, 0.0f, 0.0f,
     0x1.d25618p-116f, 0x1.af5f1p-21f, 0.0f, 0.0f, 0x1.b4b272p-114f, 0.0f,
     0x1.1bde1p-88f, 0.0f, 0x1.82a926p-45f, 0.0f, 0.0f, 0.0f, 0x1.57cf74p-125f, 0.0f,
     0.0f, 0x1.1f46f4p-41f, 0.0f, 0x1.dfcda4p-42f, 0x1.400b74p-3f, 0x1.7b4baep-123f,
     0.0f, 0x1.2f40bep-65f, 0.0f, 0x1.6751d8p-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.eb2f18p-63f, 0x1.f091d2p-100f, 0.0f, 0.0f, 0x1.9e9926p-77f, 0.0f,
     0x1.c55f04p-31f, 0.0f, 0.0f, 0.0f, 0x1.d290cep-37f, 0.0f, 0x1.729ef6p-93f,
     0x1.d631bap-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.318068p-73f, 0.0f, 0.0f,
     0.0f, 0x1.397b72p-106f, 0x1.74c464p-109f, 0.0f, 0.0f, 0x1.5f954cp-14f,
     0x1.68d50ep-24f, 0x1.0d150cp-12f, 0x1.a21346p-82f, 0x1.e51cp-42f, 0.0f, 0.0f,
     0.0f, 0x1.b2e53p-113f, 0x1.db0524p-82f, 0.0f, 0.0f, 0x1.706db6p-39f,
     0x1.90c1f6p-85f, 0x1.731d7ap-89f, 0.0f, 0.0f, 0x1.7effa8p-20f, 0x1.408b5p-21f,
     0x1.0954fap-5f, 0.0f, 0.0f, 0x1.852af4p-112f, 0.0f, 0x1.1e8aa4p-67f, 0.0f, 0.0f,
     0x1.d9f74cp-35f, 0x1.d09ce6p-70f, 0.0f, 0.0f, 0x1.0921a4p-59f, 0x1.5504cp-124f,
     0.0f, 0.0f, 0x1.dc6e2ap-62f, 0x1.65f65ap-57f, 0x1.19d742p-19f, 0.0f,
     0x1.364f54p-104f, 0x1.5e2394p-9f, 0.0f, 0.0f, 0.0f, 0x1.2e99bcp-111f, 0.0f, 0.0f,
     0x1.3e5e2p-126f, 0.0f, 0.0f, 0.0f, 0x1.8d653ap-10f, 0x1.e4da88p-87f, 0.0f, 0.0f,
     0x1.428268p-61f, 0x1.b8e30ep-28f, 0x1.dd6d0ap-113f, 0x1.dab74ep-6f,
     0x1.d6a93ap-66f, 0.0f, 0x1.010d02p-21f, 0.0f, 0.0f, 0x1.6f0cd8p-91f,
     0x1.4e004cp-14f, 0x1.06522p-47f, 0.0f, 0x1.46ec34p-68f, 0.0f, 0x1.54d118p-102f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d1b34ep-69f, 0x1.92e27cp-123f,
     0x1.804fdp-19f, 0x1.b37402p-89f, 0.0f, 0.0f, 0.0f, 0x1.40f802p-117f,
     0x1.e1a372p-120f, 0.0f, 0.0f, 0x1.ac2dbep-95f, 0x1.292284p-62f, 0x1.759866p-113f,
     0x1.7480f6p-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.74abfp-52f, 0x1.fa3726p-11f, 0.0f,
     0x1.433798p-90f, 0x1.6e112p-121f, 0.0f, 0x1.c9634cp-105f, 0.0f, 0.0f,
     0x1.44a0a6p-79f, 0x1.b6126p-43f, 0x1.fbab1cp-124f, 0.0f, 0.0f, 0x1.aad65p-100f,
     0x1.0ffb0ep-68f, 0.0f, 0x1.87d6f8p-76f, 0.0f, 0.0f, 0x1.5ee8c6p-51f, 0.0f,
     0x1.037654p-20f, 0.0f, 0.0f, 0x1.83d7cp-13f, 0.0f, 0.0f, 0x1.dc2dacp-99f,
     0x1.a335cp-125f, 0.0f, 0x1.47a1d6p-95f, 0.0f, 0.0f, 0.0f, 0x1.690dd4p-94f, 0.0f,
     0x1.d7dda2p-33f, 0.0f, 0x1.5ab1bap-97f, 0.0f, 0.0f, 0.0f, 0x1.7ebd4cp-122f, 0.0f,
     0.0f, 0x1.f9e1aap-19f, 0x1.9363d2p-9f, 0.0f, 0x1.3b9d5ep-113f, 0x1.42246ap-94f,
     0.0f, 0x1.65293cp-86f, 0.0f, 0x1.cc7008p-7f, 0.0f, 0.0f, 0.0f, 0x1.40185cp-39f,
     0x1.c2a646p-110f, 0.0f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_float8_t global_bench_acc;
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
        ml_float8_t local_acc;
        int32_t i;
        ml_float8_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1008));){
            ml_float8_t tmp0;
            ml_float8_t tmp1;
            ml_float8_t tmp2;
            ml_float8_t tmp3;
            int32_t tmp4;

            memcpy(&tmp0, ((ml_float8_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            memcpy(&tmp1, ((ml_float8_t*)(external_bench_wrapper_input_table_arg1+ i)), 32);
            tmp2 = Sleef_fdimf8_kvx(tmp0, tmp1);
            memcpy(((ml_float8_t*)(external_bench_wrapper_output_table+ i)), &(tmp2), 32);
            tmp3 = local_acc + tmp2;
            local_acc = tmp3;
            tmp4 = i + INT32_C(8);
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
    cpe_measure = id_tmp / 10080000.0;
    printf("Sleef_fdimf8_kvx %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_fdimf8_kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
