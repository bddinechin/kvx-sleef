/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_ceilf4_kvx.c --function Sleef_finz_ceilf4_kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 4 --function-input-vector-size 4 --bench \
 *     --no-embedded-bin --target kv3
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
     0x1.70bdc2p-79f, 0.0f, 0x1.742d08p-78f, 0x1.8bcd0ep-108f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.8c3dccp-97f, 0x1.7ad0e2p-114f, 0x1.4f7ce2p-85f, 0.0f, 0.0f, 0.0f,
     0x1.94b6a8p-95f, 0.0f, 0x1.9e7fb8p-21f, 0x1.3107dcp-46f, 0x1.c908a6p-112f, 0.0f,
     0x1.bce20ap-48f, 0x1.ec5926p-68f, 0x1.9bc602p-126f, 0x1.cba98ap-10f,
     0x1.365fap-60f, 0.0f, 0.0f, 0x1.26de0ep-41f, 0.0f, 0x1.b81494p-102f, 0.0f,
     0x1p0f, 0x1.aa513cp-114f, 0.0f, 0.0f, 0x1.1aafeep-33f, 0.0f, 0x1.2ffe4cp-14f,
     0x1.45da4cp-109f, 0x1.18afbap-100f, 0x1.81b18ap-110f, 0.0f, 0x1.72ea3ep-37f,
     0.0f, 0x1.f91674p-101f, 0x1.b661p-4f, 0.0f, 0x1.486a5ap-17f, 0x1.129742p-102f,
     0.0f, 0x1.dd2848p-85f, 0x1.55553p-58f, 0.0f, 0.0f, 0x1.52487ep-57f,
     0x1.c2ba7p-121f, 0x1.b7677cp-93f, 0.0f, 0.0f, 0.0f, 0x1.98fbaap-72f,
     0x1.264716p-85f, 0x1.8eac58p-10f, 0.0f, 0x1.34c3a4p-104f, 0.0f, 0x1.0aa024p-30f,
     0x1.88357p-2f, 0x1.f1881ap-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ddebb2p-29f,
     0x1.cfcd7p-76f, 0x1.f4bfbep-78f, 0x1.2d3eacp-55f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2ad50cp-31f, 0x1.9102a2p-38f, 0.0f, 0.0f, 0.0f, 0x1.30d4aep-33f,
     0x1.9360a8p-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f2b71p-106f,
     0x1.9457ecp-113f, 0.0f, 0.0f, 0.0f, 0x1.766216p-62f, 0.0f, 0x1.0d9a2p-88f, 0.0f,
     0x1.e626e6p-9f, 0x1.46e02cp-84f, 0x1.ea7baap-77f, 0x1.b5cbap-66f,
     0x1.214f5cp-48f, 0.0f, 0x1.4de468p-63f, 0x1.ba4e3ap-37f, 0.0f, 0x1.48be4p-12f,
     0x1.535bfcp-2f, 0x1.32d466p-61f, 0x1.143144p-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7cd3dap-111f, 0.0f, 0x1.b6968p-16f, 0x1.889e16p-107f, 0.0f, 0x1.e867f4p-71f,
     0x1.230bdap-59f, 0x1.b0141cp-33f, 0x1.fb7ea8p-24f, 0.0f, 0x1.6052d8p-1f,
     0x1.e7ae24p-45f, 0x1.8a76fap-70f, 0.0f, 0x1.e3e53ep-86f, 0x1.9d3098p-52f, 0.0f,
     0.0f, 0x1.cdcc9ap-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.78e09p-95f, 0x1.862282p-20f,
     0x1.eb6692p-26f, 0.0f, 0.0f, 0x1.f05144p-26f, 0.0f, 0x1.11b17ap-20f,
     0x1.485008p-108f, 0x1.923ee2p-102f, 0.0f, 0x1.73e34cp-20f, 0.0f, 0x1.59d8fap-85f,
     0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.3b8306p-122f, 0.0f, 0x1.87d4d4p-70f,
     0x1.033ae8p-3f, 0.0f, 0.0f, 0x1.c48d4ap-77f, 0.0f, 0x1.3b52acp-27f,
     0x1.56ffc2p-45f, 0x1.096dap-20f, 0.0f, 0.0f, 0.0f, 0x1.7cf4b2p-85f, 0.0f,
     0x1.c88ddp-70f, 0.0f, 0x1.eb236ap-93f, 0x1.3e22cep-99f, 0.0f, 0x1.d5aabap-84f,
     0.0f, 0x1.bb91dap-91f, 0.0f, 0x1.3ac6bap-55f, 0x1.c2f7fap-114f, 0.0f,
     0x1.68faaep-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.205aa6p-51f, 0.0f, 0x1.8487bep-60f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.5a0dbp-111f, 0x1.867c3ep-108f, 0x1.21f9e2p-29f,
     0x1.ca9f94p-52f, 0x1.9314e6p-54f, 0.0f, 0.0f, 0.0f, 0x1.3b7a8p-61f, 0.0f, 0.0f,
     0x1.01d8f6p-25f, 0x1.616954p-4f, 0x1.d5ce44p-117f, 0x1.68cf6ap-104f, 0.0f, 0.0f,
     0.0f, 0x1.473a8p-88f, 0.0f, 0x1.9f0266p-29f, 0x1.00750ep-44f, 0.0f, 0.0f,
     0x1.933818p-85f, 0x1.c071c6p-46f, 0.0f, 0x1.ec48b4p-13f, 0.0f, 0.0f, 0.0f,
     0x1.e839fep-48f, 0x1.db71d4p-51f, 0.0f, 0x1.169622p-84f, 0x1.1eb812p-18f, 0.0f,
     0.0f, 0.0f, 0x1.507728p-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.13c56p-74f,
     0x1.5bfd48p-29f, 0x1.59bb16p-124f, 0x1.3a218ap-53f, 0.0f, 0.0f, 0.0f,
     0x1.5cacfp-84f, 0x1.a08e56p-10f, 0x1.16b696p-101f, 0.0f, 0.0f, 0x1.ba7566p-94f,
     0x1.c0b55cp-73f, 0.0f, 0x1.d8f248p-66f, 0.0f, 0.0f, 0x1.d6b6d6p-55f,
     0x1.c3e91p-95f, 0.0f, 0.0f, 0.0f, 0x1.2102ecp-42f, 0x1p0f, 0x1.d8bee8p-26f,
     0x1.923f2ap-7f, 0x1.c826bap-43f, 0.0f, 0x1.c67c44p-55f, 0.0f, 0x1.356e94p-46f,
     0x1.05fd36p-62f, 0.0f, 0x1.80f526p-101f, 0x1.d7b99cp-93f, 0x1.8ca444p-18f,
     0x1.7ddddp-82f, 0x1.7295bep-47f, 0.0f, 0.0f, 0.0f, 0x1.daa3d4p-39f,
     0x1.c8f1a4p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.617bcep-73f, 0.0f,
     0x1.a420cap-108f, 0x1.7853c2p-103f, 0.0f, 0x1.bcde3cp-91f, 0x1.5c5cc4p-48f, 0.0f,
     0.0f, 0x1.09d9dp-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.54a8fap-6f,
     0x1.e8a3ap-36f, 0x1.0a1ccap-46f, 0x1.a4566ap-2f, 0.0f, 0x1.011e2p-64f,
     0x1.82bdccp-95f, 0x1.8f2c62p-117f, 0.0f, 0.0f, 0x1.f24826p-122f, 0x1.8f5e8ap-40f,
     0.0f, 0.0f, 0x1.aa742p-73f, 0x1.e8fbf4p-111f, 0.0f, 0x1.9fcedap-35f,
     0x1.8b1d82p-3f, 0x1.53f54ep-16f, 0x1.4d2fp-48f, 0x1.4df3b4p-6f, 0.0f, 0.0f, 0.0f,
     0x1.ab71fcp-64f, 0.0f, 0x1.b6099p-57f, 0.0f, 0x1.93eef4p-107f, 0x1.8a2418p-65f,
     0x1.1d6a2cp-55f, 0x1.7438b8p-40f, 0.0f, 0x1.0ca14cp-59f, 0.0f, 0.0f, 0.0f,
     0x1.ee8bc4p-69f, 0x1.baa538p-47f, 0.0f, 0x1.79a85cp-68f, 0.0f, 0.0f,
     0x1.7ad166p-34f, 0.0f, 0x1.f94f6ep-24f, 0x1.79a8bap-34f, 0x1.dc844p-105f,
     0x1.af8a6p-4f, 0.0f, 0x1.7aff8p-114f, 0.0f, 0x1.cbd306p-53f, 0x1.348c56p-64f,
     0x1.96121ep-5f, 0x1.fc147p-77f, 0.0f, 0.0f, 0x1.f7ccfcp-57f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a0d9e6p-21f, 0.0f, 0.0f, 0.0f, 0x1.132bbap-120f, 0.0f, 0.0f, 0.0f,
     0x1.e5a748p-27f, 0.0f, 0x1.d7f648p-7f, 0x1.63dcap-44f, 0.0f, 0x1.8f9766p-28f,
     0x1.1d3822p-8f, 0.0f, 0x1.06dd22p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e38834p-33f,
     0.0f, 0.0f, 0.0f, 0x1.a61f08p-21f, 0.0f, 0x1.a4f572p-10f, 0.0f, 0x1.3d987ep-76f,
     0x1.4357e8p-33f, 0.0f, 0.0f, 0.0f, 0x1.2a5bd6p-66f, 0.0f, 0x1.ea91acp-115f, 0.0f,
     0x1p0f, 0.0f, 0x1.d9c00cp-79f, 0.0f, 0.0f, 0.0f, 0x1.5cdbb2p-16f, 0.0f,
     0x1.5c9f1ap-10f, 0.0f, 0.0f, 0x1.9f98aap-44f, 0x1.6680aap-51f, 0.0f, 0.0f,
     0x1.dad8ep-89f, 0x1.1a06e6p-117f, 0.0f, 0.0f, 0x1.09c6fp-71f, 0.0f,
     0x1.73a106p-87f, 0.0f, 0x1.76fdd8p-71f, 0.0f, 0x1.6fa472p-109f, 0x1.32584ap-79f,
     0x1.a02472p-83f, 0x1.0c926ep-106f, 0x1.a45ef4p-126f, 0x1.5a1fcp-123f, 0.0f, 0.0f,
     0x1.2247a2p-53f, 0x1.f7650cp-23f, 0.0f, 0x1.338648p-72f, 0.0f, 0x1.562bd6p-126f,
     0.0f, 0x1.9def5p-34f, 0x1.5fbe44p-18f, 0.0f, 0x1.195cf6p-114f, 0.0f,
     0x1.1ca834p-74f, 0x1.828d12p-17f, 0.0f, 0.0f, 0x1.04cbe2p-110f, 0.0f,
     0x1.f50426p-46f, 0x1.d914eep-52f, 0.0f, 0.0f, 0x1.cbfb56p-97f, 0x1.fe28a8p-74f,
     0.0f, 0.0f, 0.0f, 0x1.a1ce86p-60f, 0.0f, 0x1.0b15f2p-85f, 0.0f, 0.0f, 0.0f,
     0x1.66741ap-85f, 0.0f, 0x1.55464cp-103f, 0.0f, 0.0f, 0x1.e5b6aap-28f,
     0x1.5f6258p-39f, 0x1.5b49e4p-111f, 0x1.952db2p-7f, 0.0f, 0x1.0012bcp-105f,
     0x1.5b59a2p-108f, 0x1.ab1a56p-81f, 0x1.755198p-42f, 0.0f, 0.0f, 0x1.80384cp-105f,
     0x1.1e3236p-19f, 0x1.64c334p-85f, 0.0f, 0x1.a1d09p-72f, 0.0f, 0x1.0d1a0ep-126f,
     0x1.a7b186p-37f, 0x1.d876cep-101f, 0.0f, 0.0f, 0x1.d9f1b2p-122f, 0x1.b7c446p-54f,
     0x1.1cecdp-99f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.5f3ab2p-61f, 0x1.d9d1bap-84f,
     0.0f, 0x1.eaf3c4p-42f, 0x1.f85c9p-91f, 0x1.294b7cp-26f, 0.0f, 0x1.1eaa74p-120f,
     0.0f, 0x1.6b0b8cp-73f, 0x1.4f7daep-70f, 0.0f, 0x1.34666cp-41f, 0x1.173d2cp-106f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.00afb6p-35f, 0.0f, 0.0f, 0x1.efac4ap-79f,
     0x1.0a1ec2p-106f, 0x1.423a92p-96f, 0x1.db08ep-33f, 0.0f, 0.0f, 0x1.28f5dep-26f,
     0x1.fcf554p-23f, 0.0f, 0.0f, 0.0f, 0x1.d5bc0ap-102f, 0x1.555f4p-104f, 0.0f, 0.0f,
     0.0f, 0x1.3c3b24p-94f, 0.0f, 0x1.d8fd9cp-107f, 0x1.a40de6p-2f, 0x1.538ea4p-89f,
     0x1.6b2e26p-123f, 0x1.97a2ecp-119f, 0.0f, 0x1.5791fap-75f, 0x1.b310d6p-109f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.34d21cp-99f, 0.0f, 0x1.e78bccp-85f,
     0x1.defb52p-107f, 0.0f, 0.0f, 0x1.027afcp-74f, 0x1.907b18p-120f, 0.0f, 0.0f,
     0x1.610adap-85f, 0.0f, 0.0f, 0x1.5ebf94p-116f, 0.0f, 0x1.3cbd68p-75f,
     0x1.83eae4p-104f, 0.0f, 0.0f, 0x1.752832p-20f, 0x1.f521d4p-60f, 0.0f, 0.0f,
     0x1.8041bcp-36f, 0.0f, 0x1.3821c8p-16f, 0x1.1a4dap-61f, 0.0f, 0x1.08ef56p-103f,
     0x1.2c1578p-6f, 0.0f, 0.0f, 0.0f, 0x1.9bed8ap-49f, 0.0f, 0x1.208294p-91f,
     0x1.635ed4p-72f, 0x1.55a2dcp-83f, 0.0f, 0x1.48c5ecp-56f, 0x1.0711e8p-57f, 0.0f,
     0.0f, 0x1.5b66bcp-113f, 0.0f, 0.0f, 0.0f, 0x1.436408p-27f, 0x1.006d42p-112f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.04808ep-16f, 0x1.542bp-90f, 0x1.10438ap-94f,
     0.0f, 0x1.8cd1bep-123f, 0.0f, 0x1.12f91cp-100f, 0x1.9a9402p-7f, 0x1.e2bb3ep-15f,
     0.0f, 0x1.2eb4f8p-35f, 0x1.1798cap-16f, 0x1.cb3704p-113f, 0x1.a66e6ep-27f,
     0x1.0d65ep-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d0658p-5f, 0.0f,
     0x1.96617p-40f, 0.0f, 0x1.838ef6p-49f, 0.0f, 0x1.a21102p-93f, 0x1.90f808p-70f,
     0x1.8aa022p-98f, 0x1.8db67cp-116f, 0.0f, 0x1.dd584ap-41f, 0.0f, 0.0f, 0.0f,
     0x1.883282p-103f, 0.0f, 0x1.99aa02p-4f, 0x1.b3fc7p-84f, 0x1.51512ap-113f, 0.0f,
     0x1.e836cep-44f, 0x1.ff76bep-108f, 0.0f, 0x1.51041ep-123f, 0x1.600dfap-78f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.5a1d1ap-95f, 0.0f, 0.0f, 0.0f, 0x1.402b52p-61f, 0.0f,
     0x1.50fe5ep-102f, 0x1.3cb19ap-58f, 0x1.fb295p-106f, 0.0f, 0x1.513bf6p-47f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0fe4eep-29f, 0x1.b6b90ap-55f, 0.0f,
     0x1.603526p-98f, 0x1.9a09dp-13f, 0x1.56a666p-95f, 0.0f, 0.0f, 0x1.8f8162p-119f,
     0.0f, 0x1.b498d6p-52f, 0x1.acff3p-104f, 0x1.4a3e1cp-16f, 0x1.a4e0bep-58f,
     0x1.595284p-28f, 0.0f, 0.0f, 0x1.497d4p-60f, 0x1.2ba13p-9f, 0x1.87c67cp-73f,
     0.0f, 0x1.00860ep-111f, 0x1.f7a418p-109f, 0x1.eaa772p-111f, 0.0f,
     0x1.2627e6p-31f, 0x1.28762p-70f, 0.0f, 0x1.f02c6cp-68f, 0.0f, 0.0f, 0.0f,
     0x1.8cf0a6p-66f, 0x1.2dd854p-116f, 0x1.b332e6p-1f, 0.0f, 0x1.c8833ap-54f,
     0x1.055038p-65f, 0x1.88323ap-13f, 0.0f, 0x1.ee335ep-9f, 0x1.82c708p-52f,
     0x1.5a4124p-33f, 0.0f, 0.0f, 0x1.61f19ap-118f, 0.0f, 0.0f, 0x1.bb79c4p-97f,
     0x1p0f, 0.0f, 0x1.192448p-1f, 0.0f, 0x1.cf26dp-107f, 0x1.0453dp-54f,
     0x1.c81502p-35f, 0.0f, 0x1.9c41bep-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c49db8p-41f, 0.0f, 0x1.a0b66ap-75f, 0x1.371fd8p-112f, 0.0f, 0x1.becdc6p-77f,
     0.0f, 0x1.676bb8p-93f, 0.0f, 0x1.75ba0ap-17f, 0.0f, 0.0f, 0x1.d16962p-13f,
     0x1.f41762p-57f, 0.0f, 0x1.7d0a78p-56f, 0.0f, 0.0f, 0.0f, 0x1.d8dc12p-28f,
     0x1.fc9ap-48f, 0.0f, 0x1.f64776p-16f, 0x1.a3e92ap-57f, 0x1.3a3084p-72f,
     0x1.7bbf22p-51f, 0.0f, 0x1.0e449p-73f, 0.0f, 0x1.fa8d76p-98f, 0x1.ae1096p-45f,
     0.0f, 0.0f, 0.0f, 0x1.9b9e14p-15f, 0x1.a4099p-23f, 0x1.f1ea5ap-18f, 0.0f, 0.0f,
     0x1.0efe8cp-84f, 0.0f, 0.0f, 0.0f, 0x1.08e554p-29f, 0x1.c3b1a4p-31f, 0.0f,
     0x1.a68d4p-50f, 0x1.8289b6p-3f, 0x1.eee09cp-121f, 0.0f, 0.0f, 0x1.e5ebc4p-88f,
     0.0f, 0.0f, 0x1.8ca07ap-36f, 0.0f, 0x1.72151p-77f, 0x1.e992a2p-23f,
     0x1.64f4dap-77f, 0.0f, 0.0f, 0x1.a21d4cp-88f, 0.0f, 0x1.79b1bep-56f,
     0x1.2c9074p-103f, 0.0f, 0.0f, 0.0f, 0x1.bf8d4p-23f, 0x1.7d3e28p-24f, 0.0f,
     0x1.6870c4p-22f, 0x1.cbcd78p-95f, 0.0f, 0x1.ceb49ap-7f, 0.0f, 0x1.c9c2d8p-14f,
     0x1.2209b8p-8f, 0x1.07e544p-90f, 0.0f, 0.0f, 0.0f, 0x1.d91298p-62f,
     0x1.dbb5ecp-38f, 0.0f, 0.0f, 0x1.c8aefp-109f, 0.0f, 0.0f, 0x1.29602p-99f,
     0x1.8594ecp-51f, 0x1.cd93e6p-109f, 0x1.adc1f4p-47f, 0.0f, 0x1.824638p-105f,
     0x1.5a7838p-7f, 0.0f, 0x1.dccaa8p-87f, 0.0f, 0x1.4a4e4ep-62f, 0x1.14c4d4p-3f,
     0.0f, 0.0f, 0.0f, 0x1.478346p-23f, 0x1.78f2eep-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8ba3b2p-78f, 0x1.7ad17ep-64f, 0.0f, 0.0f, 0x1.ebc33cp-5f, 0x1.3a7f9ep-16f,
     0.0f, 0.0f, 0x1.4ed2cep-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cca2f6p-88f,
     0.0f, 0x1.e7d4d2p-124f, 0x1.01803cp-81f, 0.0f, 0x1.234b9ep-118f, 0x1.2f2b02p-61f,
     0x1.b74b9ap-78f, 0.0f, 0x1.7e0e4ep-90f, 0x1.a68f6ep-89f, 0x1.c8a948p-95f,
     0x1.0e948p-22f, 0x1.9a888ep-48f, 0.0f, 0x1.f958aap-50f, 0x1.fd599cp-90f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.689962p-87f, 0.0f, 0.0f, 0x1.366dd6p-48f, 0.0f, 0.0f,
     0.0f, 0x1.9ba204p-43f, 0.0f, 0x1.233a54p-79f, 0x1.4c530ap-29f, 0x1.0f9f0ap-96f,
     0.0f, 0.0f, 0x1.e146aep-114f, 0x1.4161ccp-35f, 0x1.226acap-124f, 0.0f, 0.0f,
     0x1.3ecbap-42f, 0x1.3047b8p-96f, 0.0f, 0.0f, 0x1.ff74b2p-77f, 0.0f, 0.0f,
     0x1.06fa2ep-59f, 0x1.31de1ap-89f, 0x1.2667e2p-29f, 0.0f, 0.0f, 0x1.3a29b4p-58f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2ad67p-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.270e5cp-91f, 0.0f, 0.0f, 0x1.f84e84p-50f, 0x1.9da99ep-39f,
     0.0f, 0x1.c9eae8p-117f, 0x1.018eeep-112f, 0x1.9ddacep-90f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.4bffb2p-89f, 0x1.60d98cp-108f, 0x1.a2f4dp-23f, 0.0f, 0.0f, 0.0f,
     0x1.78de1ep-74f, 0x1.abb2c6p-125f, 0x1.620acap-57f, 0.0f, 0.0f, 0.0f,
     0x1.40e464p-42f, 0.0f, 0.0f, 0x1.fc512cp-42f, 0.0f, 0x1.8bc3cap-62f,
     0x1.1aa13ep-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.97002p-74f, 0.0f, 0.0f,
     0x1.4e5816p-112f, 0.0f, 0.0f, 0.0f, 0x1.3b826ep-20f, 0x1.820382p-6f,
     0x1.bf318p-43f, 0x1.8697a4p-124f, 0x1.a5dd86p-30f, 0.0f, 0.0f, 0x1.8dcc3ep-14f,
     0x1.1690fp-38f, 0x1.6e8bcap-78f
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
            int32_t tmp3;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_finz_ceilf4_kvx(tmp0);
            memcpy(((ml_float4_t*)(external_bench_wrapper_output_table+ i)), &(tmp1), 16);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(4);
            i = tmp3;
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
    printf("Sleef_finz_ceilf4_kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_ceilf4_kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
