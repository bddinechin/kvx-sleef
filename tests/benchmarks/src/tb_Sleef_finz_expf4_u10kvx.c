/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_expf4_u10kvx.c --function Sleef_finz_expf4_u10kvx \
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
     0x1.f522e6p-97f, 0.0f, 0x1.6b4e1p-69f, 0.0f, 0.0f, 0.0f, 0x1.2e6102p-96f,
     0x1.2cc8p-53f, 0x1.e5a6fep-58f, 0.0f, 0x1.daf3d6p-122f, 0.0f, 0x1.4932c4p-120f,
     0.0f, 0x1.f0c9bp-26f, 0x1.1f2cdp-78f, 0.0f, 0x1.f9e614p-75f, 0x1.332996p-76f,
     0.0f, 0.0f, 0x1.df190cp-56f, 0.0f, 0.0f, 0.0f, 0x1.a1699p-29f, 0.0f,
     0x1.1f11c8p-39f, 0.0f, 0.0f, 0x1.47aa92p-82f, 0.0f, 0x1.79d49p-125f, 0.0f, 0.0f,
     0.0f, 0x1.be85e2p-104f, 0.0f, 0x1.05a7ep-62f, 0.0f, 0.0f, 0.0f, 0x1.dce7a8p-18f,
     0x1.d9b518p-49f, 0x1.365884p-64f, 0x1.784f0ap-48f, 0.0f, 0x1.9722fcp-4f, 0.0f,
     0x1.5f6b42p-126f, 0.0f, 0.0f, 0x1.1c6f3p-11f, 0x1.88f694p-18f, 0x1.64631p-31f,
     0.0f, 0.0f, 0x1.3a0c84p-63f, 0.0f, 0x1.317f34p-87f, 0x1.d9df1p-46f,
     0x1.d0ad9ep-125f, 0x1.883c84p-94f, 0x1.08c68ap-87f, 0x1.182f6p-12f, 0.0f, 0.0f,
     0x1.28818p-44f, 0x1.a75aaap-122f, 0x1.480c0ep-92f, 0x1.559448p-78f,
     0x1.b65868p-47f, 0x1.8b3f8cp-109f, 0.0f, 0.0f, 0x1.90f48cp-70f, 0x1.06df9p-91f,
     0x1.89462ap-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.16168ep-1f, 0.0f, 0.0f,
     0x1.7d64dap-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2e42fap-28f,
     0x1.dbdd34p-41f, 0.0f, 0.0f, 0x1.b68af2p-97f, 0x1.d5e44cp-92f, 0x1.ff2f9cp-73f,
     0.0f, 0.0f, 0x1.ea6954p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9b4532p-125f,
     0x1.92ca36p-71f, 0.0f, 0x1.48bf7ep-39f, 0.0f, 0x1.b3769ap-27f, 0.0f,
     0x1.aa84c4p-119f, 0.0f, 0.0f, 0x1.df953ep-19f, 0.0f, 0.0f, 0x1.a9bacep-101f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b5bd66p-61f, 0x1.8d5aa8p-18f, 0.0f,
     0x1.08c0fep-9f, 0x1.b63d56p-30f, 0x1.d89d6p-4f, 0x1.7defeep-59f, 0x1.64cf1ap-57f,
     0x1.20e228p-19f, 0x1.45a234p-70f, 0x1.10027cp-2f, 0x1.37050ap-76f, 0.0f, 0.0f,
     0x1.68d39p-56f, 0x1.7f93eep-102f, 0.0f, 0.0f, 0.0f, 0x1.bd1adp-40f,
     0x1.dcd7fep-43f, 0.0f, 0.0f, 0x1.566f4cp-21f, 0x1.54e206p-101f, 0x1.a372a2p-119f,
     0x1.85555p-18f, 0x1.caccdcp-122f, 0.0f, 0.0f, 0x1.3a3abap-97f, 0x1.adff52p-54f,
     0x1.4722f2p-93f, 0x1.9a416ap-56f, 0x1.d3d0a8p-54f, 0x1.3050dcp-93f, 0.0f, 0.0f,
     0x1.c54b1cp-4f, 0.0f, 0x1.b907d2p-75f, 0.0f, 0x1.2b7868p-72f, 0.0f, 0.0f, 0.0f,
     0x1.922418p-9f, 0x1.2922bap-4f, 0x1.852142p-23f, 0x1.60de54p-14f,
     0x1.c967a8p-34f, 0x1.85b64p-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a2ef74p-19f,
     0x1.609514p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5faafep-61f, 0.0f, 0.0f,
     0x1.329db8p-93f, 0.0f, 0.0f, 0.0f, 0x1.d170eep-52f, 0x1.282492p-101f,
     0x1.2aef0ep-122f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.0ec28ep-8f,
     0x1.ad3532p-91f, 0x1.4cd7ep-25f, 0.0f, 0x1.b62758p-10f, 0x1.1fbb36p-57f,
     0x1.c83776p-65f, 0x1.749184p-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8fcd0ep-73f,
     0x1.963b72p-89f, 0x1.e934p-1f, 0.0f, 0.0f, 0x1.cda72ap-14f, 0.0f, 0.0f,
     0x1.a45198p-115f, 0.0f, 0x1.18bfa2p-50f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c87058p-123f, 0x1.1f294ap-31f, 0x1.da11eep-101f, 0x1.3fbf32p-86f, 0.0f,
     0x1.0c83c2p-92f, 0.0f, 0.0f, 0x1.92c1e8p-56f, 0x1.b7bbc4p-46f, 0.0f, 0.0f,
     0x1.f8d704p-12f, 0.0f, 0x1.237728p-69f, 0.0f, 0x1.c375b2p-118f, 0.0f,
     0x1.486ccep-1f, 0.0f, 0x1.e9ee22p-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6bbd86p-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9941bep-124f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.527efap-9f, 0x1.d3b83ap-27f, 0x1.28104ap-89f, 0.0f, 0x1.c48edap-50f,
     0x1.79fc9cp-45f, 0.0f, 0.0f, 0x1.81879cp-25f, 0.0f, 0.0f, 0.0f, 0x1.b7d69ap-121f,
     0.0f, 0.0f, 0x1.c6fd46p-104f, 0x1.5f5368p-55f, 0.0f, 0.0f, 0x1.f4e094p-113f,
     0.0f, 0x1.bdd37ap-107f, 0x1.9661f4p-82f, 0.0f, 0.0f, 0.0f, 0x1.608202p-26f, 0.0f,
     0.0f, 0.0f, 0x1.c95fbap-8f, 0.0f, 0x1.ade982p-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e43766p-66f, 0.0f, 0.0f, 0x1.354588p-25f, 0x1.ba2064p-21f, 0x1.259ccp-30f,
     0.0f, 0x1.bd272ep-53f, 0x1.71fbdep-30f, 0x1.2093ap-30f, 0x1.9708c4p-94f, 0.0f,
     0.0f, 0x1.bb485cp-98f, 0.0f, 0x1.9fda8cp-4f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e5a1c4p-79f, 0.0f, 0x1.9ec0a6p-52f, 0.0f, 0.0f, 0x1.3325aep-117f,
     0x1.1b0038p-2f, 0x1.c52fbap-106f, 0x1.88ac76p-103f, 0x1.5088d4p-71f, 0.0f, 0.0f,
     0x1.1c49dcp-84f, 0.0f, 0.0f, 0.0f, 0x1.49f5e2p-73f, 0x1.26eb28p-2f,
     0x1.498b68p-32f, 0x1.0fd8bcp-76f, 0.0f, 0.0f, 0x1.896dfcp-33f, 0x1.c252f6p-126f,
     0x1.4118f2p-9f, 0x1.3bc6c2p-104f, 0x1.52eab6p-92f, 0x1.155b2cp-74f, 0.0f, 0.0f,
     0x1p0f, 0.0f, 0x1.c54ab8p-101f, 0.0f, 0x1.2af86cp-87f, 0x1.a91bep-27f, 0.0f,
     0x1.50902p-38f, 0.0f, 0.0f, 0x1.db29c6p-71f, 0.0f, 0x1.ae62bap-52f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1af0d8p-82f, 0x1.038b94p-108f, 0.0f, 0.0f, 0x1.7c010ep-9f,
     0x1.255d3p-25f, 0x1.06800ep-26f, 0x1.38207p-97f, 0.0f, 0x1.46338cp-13f, 0.0f,
     0.0f, 0x1.e44ff4p-68f, 0.0f, 0x1.d28348p-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cb25a2p-97f, 0.0f, 0x1.ba58dap-111f, 0.0f, 0x1.aa8d32p-24f, 0x1.ab5aa8p-10f,
     0x1.7aeb1ap-34f, 0.0f, 0x1.937a38p-10f, 0x1.2c1e8ap-39f, 0.0f, 0x1.df5802p-22f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d6d97ap-125f, 0.0f, 0x1.9dce36p-17f, 0.0f,
     0x1.d1d924p-11f, 0x1.99b16ep-13f, 0x1.88c53cp-48f, 0.0f, 0x1.d2522cp-114f, 0.0f,
     0x1.e10eeep-60f, 0x1p0f, 0x1.782e74p-70f, 0x1.66f67cp-87f, 0.0f, 0x1.b62a98p-27f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.2403cp-61f, 0.0f, 0.0f, 0x1.bec7d4p-70f, 0.0f, 0.0f,
     0x1.979bd6p-36f, 0.0f, 0.0f, 0.0f, 0x1.ebf908p-22f, 0x1.273e2ep-55f,
     0x1.a8236p-110f, 0.0f, 0.0f, 0x1.1fa982p-75f, 0x1.781a22p-23f, 0.0f, 0.0f,
     0x1.1f072ep-21f, 0.0f, 0.0f, 0x1.1c1684p-120f, 0x1.d54e6ap-75f, 0x1.1a3aaep-61f,
     0.0f, 0x1.c5abeap-13f, 0.0f, 0x1.dda9fp-121f, 0.0f, 0.0f, 0x1.64a93p-51f,
     0x1.b4eebap-93f, 0.0f, 0.0f, 0.0f, 0x1.630056p-39f, 0.0f, 0.0f, 0x1.7b83fep-91f,
     0.0f, 0x1.69edf4p-123f, 0x1.f41d34p-27f, 0x1.a43eep-45f, 0.0f, 0.0f,
     0x1.d35828p-85f, 0x1.86237ap-91f, 0x1.d1743ap-47f, 0x1.54f668p-53f, 0.0f, 0.0f,
     0x1.bffd5ap-98f, 0x1.698cap-46f, 0.0f, 0x1.a36d46p-44f, 0x1.22a668p-57f, 0.0f,
     0.0f, 0x1.a4681ap-60f, 0x1.2f424ep-44f, 0x1.bfb87cp-92f, 0.0f, 0.0f, 0.0f,
     0x1.125e2p-2f, 0x1.78d90ep-123f, 0x1.1f4d18p-113f, 0x1.32ed8ep-102f, 0.0f, 0.0f,
     0.0f, 0x1.05d534p-108f, 0x1.d88a52p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.852d6ap-13f,
     0x1.601644p-24f, 0x1.e3b51ap-45f, 0x1.0d8ea8p-120f, 0x1.5b2e82p-20f,
     0x1.2b125cp-26f, 0.0f, 0x1.fecdap-28f, 0x1.faa772p-4f, 0x1.4b90d6p-98f,
     0x1.3bf608p-6f, 0.0f, 0.0f, 0x1.aa5efp-61f, 0.0f, 0.0f, 0.0f, 0x1.4dd1dcp-115f,
     0.0f, 0x1.bc07eap-74f, 0.0f, 0.0f, 0.0f, 0x1.bcad28p-91f, 0.0f, 0.0f,
     0x1.783764p-28f, 0x1.ee5ebcp-86f, 0x1.dfc282p-53f, 0.0f, 0x1.6fd222p-22f,
     0x1.ebc526p-33f, 0x1.bd58f4p-112f, 0x1.80e30cp-28f, 0x1.d3aa1ap-6f, 0.0f, 0.0f,
     0.0f, 0x1.d756c2p-45f, 0x1.5ac7fp-45f, 0x1.5d2cdp-41f, 0.0f, 0.0f, 0.0f,
     0x1.37b88ap-23f, 0.0f, 0.0f, 0x1.d0cc4ep-58f, 0x1.1ccc72p-5f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.7ef1eap-109f, 0.0f, 0x1.8009bep-9f, 0.0f, 0.0f, 0x1.d9f952p-90f,
     0x1.b998c2p-39f, 0.0f, 0.0f, 0.0f, 0x1.0cdaf8p-15f, 0.0f, 0.0f, 0x1.7a4c7cp-107f,
     0.0f, 0x1.979fa4p-15f, 0x1.53f9ecp-115f, 0x1.f0759cp-126f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.76be5cp-13f, 0x1.4280cap-116f, 0.0f, 0.0f, 0.0f, 0x1.a774e6p-80f, 0.0f,
     0.0f, 0x1.eab122p-124f, 0x1.9e767cp-13f, 0x1.2c8d9ap-121f, 0x1.631a16p-115f,
     0.0f, 0.0f, 0.0f, 0x1.d3b488p-59f, 0x1.7e95c8p-25f, 0.0f, 0x1.99da9ep-30f,
     0x1.d026b4p-84f, 0.0f, 0.0f, 0x1.fcd6eap-5f, 0.0f, 0x1.d5182cp-58f, 0.0f,
     0x1.548b68p-98f, 0.0f, 0x1.6eac9p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.570688p-38f, 0x1.efe25ap-101f, 0x1.0aed94p-36f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d39092p-22f, 0x1.060e8cp-20f, 0.0f, 0.0f, 0.0f, 0x1.a9a694p-126f,
     0x1.fe84e8p-78f, 0.0f, 0x1.3db028p-32f, 0.0f, 0x1p0f, 0.0f, 0x1.7380ccp-20f,
     0x1.ad1676p-93f, 0x1.4ae34ap-35f, 0x1.34e52p-67f, 0x1.e326b8p-124f,
     0x1.fb3f42p-22f, 0x1.3bc598p-84f, 0.0f, 0x1.88e7p-76f, 0.0f, 0.0f,
     0x1.d8d31ap-49f, 0x1.88e622p-36f, 0x1.3f612p-50f, 0.0f, 0.0f, 0.0f,
     0x1.682cbap-111f, 0x1.e33e6p-40f, 0.0f, 0x1.4e5654p-36f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.68089ep-108f, 0.0f, 0.0f, 0.0f, 0x1.37efdap-38f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b28cfep-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0978e8p-122f, 0x1.a5d638p-15f, 0x1.7c84dep-111f, 0x1.ec770cp-58f,
     0x1.f8e5e8p-88f, 0x1.0f4832p-122f, 0x1.e8a1aap-111f, 0x1.cc934ep-31f,
     0x1.742108p-46f, 0x1.48e416p-51f, 0.0f, 0x1.3bd02p-39f, 0x1.d2ca82p-79f, 0.0f,
     0.0f, 0x1.901678p-71f, 0.0f, 0x1.3423cep-83f, 0.0f, 0.0f, 0x1.2788bep-78f,
     0x1.65d662p-125f, 0x1.178bc8p-54f, 0x1.51009cp-61f, 0x1.780f7ep-86f,
     0x1.ae14ep-14f, 0x1.e95978p-36f, 0x1.1f54b6p-72f, 0x1.07ff6ep-109f, 0.0f, 0.0f,
     0.0f, 0x1.d0bbd4p-66f, 0.0f, 0x1.ec542p-13f, 0x1.8df0ap-37f, 0.0f, 0.0f,
     0x1.f0d48cp-121f, 0.0f, 0.0f, 0x1.e6b62ap-25f, 0.0f, 0x1.a24748p-15f, 0.0f,
     0x1.70988ap-54f, 0x1.e70488p-82f, 0.0f, 0.0f, 0.0f, 0x1.ad444p-76f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.097fd6p-36f, 0x1.d50906p-17f, 0x1.e9e254p-99f,
     0x1.851c5p-80f, 0.0f, 0x1.3915e8p-109f, 0.0f, 0x1.7029dap-36f, 0.0f, 0.0f,
     0x1.68426ep-120f, 0.0f, 0x1.01c9ecp-24f, 0x1.0fa68ep-64f, 0x1.1e670ep-119f,
     0x1.eb8daap-74f, 0x1.7353c8p-60f, 0x1.0f391cp-112f, 0x1.e3facap-109f, 0.0f,
     0x1.f66cb4p-96f, 0.0f, 0.0f, 0x1.efa9aep-51f, 0x1.7f219ep-10f, 0.0f,
     0x1.690694p-62f, 0.0f, 0x1.5ff906p-112f, 0.0f, 0x1.d0b332p-63f, 0.0f,
     0x1.5e5b3ep-113f, 0.0f, 0x1.19657p-99f, 0.0f, 0x1.8215bp-12f, 0.0f, 0.0f, 0.0f,
     0x1.7ddd0ep-121f, 0x1.1e9a44p-114f, 0.0f, 0x1.2a567cp-16f, 0x1.1fd5bep-20f, 0.0f,
     0x1.8dcbd4p-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dd506cp-108f, 0x1.c9662cp-83f,
     0.0f, 0x1.a950eap-71f, 0.0f, 0.0f, 0.0f, 0x1.835684p-70f, 0.0f, 0x1.4605a8p-102f,
     0x1.d7f206p-19f, 0x1.65acfap-119f, 0x1.3eaacep-53f, 0x1.39aefp-123f, 0.0f,
     0x1.41a0d8p-74f, 0.0f, 0.0f, 0.0f, 0x1.ea4946p-99f, 0.0f, 0.0f, 0x1.d686d6p-3f,
     0.0f, 0.0f, 0x1.ae51d4p-38f, 0.0f, 0x1.7d4212p-27f, 0.0f, 0.0f, 0.0f,
     0x1.c9539ap-87f, 0.0f, 0x1.9ddd6cp-46f, 0x1.663b0ep-52f, 0.0f, 0.0f,
     0x1.e9845p-93f, 0x1.b457aep-123f, 0.0f, 0.0f, 0x1.11168cp-74f, 0x1.d3dfdcp-6f,
     0x1.b03496p-106f, 0.0f, 0.0f, 0x1.b1872cp-43f, 0.0f, 0.0f, 0x1.b7faccp-40f,
     0x1.78bc1ap-125f, 0x1.34d7e2p-3f, 0x1.22e85ep-4f, 0.0f, 0.0f, 0.0f,
     0x1.d463eap-82f, 0.0f, 0x1.28fbc2p-126f, 0.0f, 0x1.589b48p-118f, 0x1.80704ap-80f,
     0x1.7dac3ap-118f, 0.0f, 0x1.fb994cp-55f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3509a2p-116f, 0.0f, 0x1.145058p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b7425p-35f, 0x1.60256cp-12f, 0.0f, 0.0f, 0x1.c81f88p-82f, 0x1.28b21p-103f,
     0x1.497814p-121f, 0.0f, 0x1.018a36p-90f, 0x1.184dbap-32f, 0x1.1753dp-14f,
     0x1.0a5f32p-123f, 0x1.5a757cp-4f, 0.0f, 0x1.7daff6p-69f, 0.0f, 0.0f, 0.0f,
     0x1.b794e4p-107f, 0.0f, 0.0f, 0x1.055b84p-123f, 0.0f, 0.0f, 0x1.72db7p-80f, 0.0f,
     0.0f, 0x1.cbb01ep-61f, 0.0f, 0.0f, 0x1.52eeb6p-44f, 0.0f, 0.0f, 0x1.d8a1dep-84f,
     0x1.e87e3cp-30f, 0x1.a5ec9ep-84f, 0.0f, 0.0f, 0.0f, 0x1.f2cb72p-118f, 0.0f,
     0x1.cd55e2p-12f, 0.0f, 0x1.376628p-68f, 0.0f, 0.0f, 0x1.4d5456p-18f,
     0x1.0fa6acp-14f, 0x1.41e7ap-25f, 0.0f, 0.0f, 0x1.3c0336p-114f, 0x1.19ed2ep-120f,
     0.0f, 0x1.64e1a8p-119f, 0.0f, 0x1.f47d24p-51f, 0x1.84c61p-72f, 0.0f,
     0x1.085018p-43f, 0.0f, 0x1.e5ebdp-22f, 0x1.093618p-72f, 0x1.6cfd8ep-118f,
     0x1.6528c2p-82f, 0.0f, 0.0f, 0x1.83e664p-20f, 0.0f, 0x1.f2a0c4p-52f, 0.0f, 0.0f,
     0x1.e4dba6p-30f, 0.0f, 0x1.928312p-69f, 0.0f, 0x1.0e6c6ep-108f, 0x1.8cbe12p-33f,
     0x1.cf528ep-33f, 0.0f, 0.0f, 0x1.324124p-81f, 0.0f, 0.0f, 0x1.26e646p-29f,
     0x1.788e3ap-93f, 0x1.7b882ap-117f, 0.0f, 0.0f, 0x1.34153cp-92f, 0x1.1c6e5ep-30f,
     0x1.9206d2p-31f, 0.0f, 0x1.551a48p-31f, 0.0f, 0x1.d4609ep-54f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.fab82ap-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.df2baap-24f,
     0.0f, 0x1.f904d2p-73f, 0.0f, 0x1.e5919ep-7f, 0.0f, 0x1.a2957ep-75f,
     0x1.5613c2p-116f, 0x1.af6702p-95f, 0.0f, 0.0f, 0x1.490b6cp-21f, 0x1.e097ep-44f,
     0.0f, 0x1.f0aa06p-6f, 0.0f, 0.0f, 0x1.7a0ba8p-17f, 0.0f, 0.0f, 0x1.d5d868p-101f,
     0x1.07931cp-122f
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
            tmp1 = Sleef_finz_expf4_u10kvx(tmp0);
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
    printf("Sleef_finz_expf4_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_expf4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
