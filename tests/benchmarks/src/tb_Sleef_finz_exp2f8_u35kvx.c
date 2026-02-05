/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_exp2f8_u35kvx.c --function \
 *     Sleef_finz_exp2f8_u35kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 8 --function-input-vector-size \
 *     8 --bench --no-embedded-bin --target kv3
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
     0.0f, 0x1.e574ap-21f, 0x1.b4a9b2p-96f, 0.0f, 0.0f, 0.0f, 0x1.7a2f0ap-105f, 0.0f,
     0x1.95e88ep-44f, 0.0f, 0x1.ef8316p-121f, 0x1.e835p-113f, 0.0f, 0.0f, 0.0f,
     0x1.d28a36p-120f, 0x1.0577e2p-42f, 0x1.d92ef6p-67f, 0x1.2c3986p-87f,
     0x1.757f26p-96f, 0.0f, 0x1.56515cp-11f, 0.0f, 0.0f, 0x1.335c48p-4f, 0.0f,
     0x1.de0ee6p-100f, 0x1.40ef92p-108f, 0x1.5b2e6ep-13f, 0.0f, 0x1.1928e6p-100f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.284f72p-53f, 0.0f, 0.0f, 0x1.ce21c4p-87f, 0.0f,
     0x1.0317f6p-2f, 0.0f, 0x1.d9551ep-90f, 0x1.557f1cp-96f, 0x1.a38e38p-71f, 0.0f,
     0.0f, 0x1.24e2b2p-122f, 0.0f, 0.0f, 0x1.2c16aep-68f, 0.0f, 0x1.06094ep-67f,
     0x1.dd93bcp-16f, 0x1.1a053ep-72f, 0x1.dc91d4p-114f, 0.0f, 0.0f, 0.0f,
     0x1.939204p-76f, 0x1.64d4e6p-21f, 0.0f, 0x1.887c2p-73f, 0x1.487a2cp-102f,
     0x1.0da1bep-120f, 0.0f, 0.0f, 0.0f, 0x1.02ad14p-30f, 0.0f, 0.0f, 0.0f,
     0x1.97c0dep-115f, 0.0f, 0.0f, 0x1.37b2d4p-90f, 0.0f, 0x1.0b0f8ap-104f, 0.0f,
     0x1.d592e2p-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.95f60ap-48f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a0398cp-73f, 0x1.d8a64ep-73f, 0x1.a37ebap-82f, 0x1.1c3dc2p-37f,
     0x1.3a47f4p-8f, 0.0f, 0.0f, 0.0f, 0x1.f1874ep-64f, 0.0f, 0x1.e58444p-43f, 0.0f,
     0.0f, 0x1.b8f5ecp-26f, 0.0f, 0x1.fa8348p-77f, 0x1.ad173cp-122f, 0x1.d7ee9ap-48f,
     0.0f, 0x1.b928e8p-37f, 0x1.513b6cp-73f, 0.0f, 0.0f, 0x1.f6536cp-34f, 0.0f, 0.0f,
     0.0f, 0x1.7ee4cp-114f, 0.0f, 0.0f, 0x1.d03648p-94f, 0x1.52e37ep-84f, 0.0f,
     0x1.391b9p-63f, 0x1.df42cep-92f, 0x1.ebbdbep-72f, 0.0f, 0.0f, 0x1.c4c5eap-21f,
     0.0f, 0.0f, 0.0f, 0x1.1d72d4p-114f, 0.0f, 0x1.a8ec2cp-45f, 0.0f,
     0x1.18130ep-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.080a3ep-110f, 0x1.a5583ep-90f,
     0x1.fe0a74p-23f, 0x1.44591cp-84f, 0.0f, 0x1.b78922p-34f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e2dfbap-12f, 0.0f, 0.0f, 0x1.839044p-47f, 0.0f, 0.0f, 0.0f,
     0x1.bf67f8p-126f, 0x1.e250bp-93f, 0x1.61cd66p-114f, 0.0f, 0x1.f1f4a4p-47f, 0.0f,
     0.0f, 0.0f, 0x1.e571dep-37f, 0.0f, 0x1.6408f4p-113f, 0.0f, 0.0f, 0x1.49573p-76f,
     0.0f, 0x1.dd5f2ap-1f, 0x1.d077e4p-36f, 0.0f, 0.0f, 0x1.a0ec3cp-3f,
     0x1.0716aep-56f, 0.0f, 0.0f, 0.0f, 0x1.a9cb56p-87f, 0x1.6f508cp-12f, 0.0f,
     0x1.0df42ap-22f, 0x1.a0a1f2p-11f, 0.0f, 0x1.5a1dbp-113f, 0.0f, 0x1.b0cad8p-25f,
     0x1.e5180ep-68f, 0.0f, 0x1.374ebap-43f, 0.0f, 0x1.2824d6p-90f, 0x1.50380ap-76f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.445f2ap-34f, 0.0f, 0.0f, 0.0f,
     0x1.3d7f16p-41f, 0.0f, 0x1.9187c2p-84f, 0x1.435e7p-52f, 0.0f, 0x1.dab8aep-38f,
     0.0f, 0x1.3d6a18p-64f, 0x1.ab6f08p-70f, 0.0f, 0x1.932b3ep-105f, 0x1.432a8p-6f,
     0x1.805f18p-100f, 0x1.2e8328p-104f, 0x1.f839c2p-27f, 0.0f, 0.0f, 0.0f,
     0x1.2848e2p-83f, 0x1.7796a4p-46f, 0x1.c52a82p-47f, 0x1.7b65bep-80f,
     0x1.c8288ep-96f, 0x1.642cc4p-18f, 0.0f, 0.0f, 0.0f, 0x1.e94462p-62f,
     0x1.d458fcp-123f, 0.0f, 0.0f, 0x1.99dbd2p-48f, 0x1.2623b6p-114f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.6eb6aep-55f, 0.0f, 0x1.e9eb4p-69f, 0.0f, 0.0f, 0.0f,
     0x1.787bbap-118f, 0.0f, 0.0f, 0.0f, 0x1.fcfcf4p-73f, 0.0f, 0x1.fdca56p-86f,
     0x1.0c8e6ap-24f, 0.0f, 0x1.a29522p-90f, 0.0f, 0x1.7d141ep-108f, 0x1.5159a4p-10f,
     0x1.fd8f44p-30f, 0x1.7fb7dcp-45f, 0x1.645f2cp-69f, 0x1.f1dea8p-63f,
     0x1.630e7ap-45f, 0.0f, 0x1.998ffap-46f, 0.0f, 0.0f, 0x1.d6e2ep-117f, 0.0f, 0.0f,
     0x1.e30cfep-106f, 0x1.ba433p-52f, 0x1.88db16p-102f, 0x1.6f347p-8f, 0.0f,
     0x1.8c0d58p-25f, 0x1.8e830cp-118f, 0.0f, 0.0f, 0x1.469c7cp-112f, 0.0f, 0.0f,
     0x1.5d9b3ep-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d10d3p-24f, 0x1.34dde8p-94f, 0.0f,
     0x1.d9ed0ep-109f, 0.0f, 0x1.cb52a6p-20f, 0x1.79a10ap-24f, 0x1.0545cap-76f,
     0x1.2ee09cp-9f, 0x1.f77678p-116f, 0x1.42fdfp-52f, 0x1.9b74ecp-60f,
     0x1.730432p-99f, 0x1.c98a36p-86f, 0.0f, 0.0f, 0x1.623ef4p-83f, 0.0f,
     0x1.e0b3eap-3f, 0x1.781648p-69f, 0x1.6826d2p-105f, 0.0f, 0x1.5aa54ap-19f, 0.0f,
     0x1.a2b27ep-45f, 0x1.c47fecp-39f, 0x1.9cb932p-38f, 0x1.38fa7cp-19f, 0.0f, 0.0f,
     0x1.52a3e2p-59f, 0.0f, 0x1.bfcc82p-15f, 0x1.f76466p-47f, 0x1.3c33e4p-63f,
     0x1.a729acp-73f, 0.0f, 0.0f, 0x1.8093c8p-116f, 0.0f, 0x1.84dc94p-91f,
     0x1.96b4d2p-73f, 0x1.c4885p-93f, 0x1.fc857p-121f, 0x1.77498ep-118f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.caac7p-115f, 0x1.eb1668p-27f, 0.0f, 0x1.7e123ap-11f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.bdafe2p-47f, 0.0f, 0x1.89f09cp-97f, 0x1.5af5d8p-18f, 0.0f,
     0x1.7c8748p-35f, 0.0f, 0x1.c855a8p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8646f6p-59f,
     0x1.e6d404p-47f, 0x1.a03cecp-30f, 0.0f, 0.0f, 0x1.5465fep-3f, 0.0f,
     0x1.99e26p-1f, 0.0f, 0.0f, 0x1.fad8b2p-10f, 0x1.95a9e8p-50f, 0x1.e0e722p-82f,
     0x1.0a0686p-35f, 0.0f, 0x1.7a87c2p-106f, 0x1.649f14p-10f, 0.0f, 0x1.475afep-92f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eeb94ep-80f, 0.0f, 0x1.956c8p-28f,
     0x1.e48ebap-21f, 0.0f, 0x1.9c61aep-26f, 0x1.1f584cp-117f, 0x1.8a4238p-8f,
     0x1.05acf2p-70f, 0.0f, 0x1.2184d6p-84f, 0.0f, 0.0f, 0x1.6eb448p-49f, 0.0f,
     0x1.5ff46ap-99f, 0x1.ff2afap-16f, 0x1.43088ap-13f, 0x1.ac4b52p-112f, 0.0f, 0.0f,
     0x1.5ab292p-15f, 0x1.99d29p-119f, 0.0f, 0x1.ddca4p-118f, 0.0f, 0.0f,
     0x1.bd3ed6p-48f, 0x1.8e2c32p-89f, 0x1.413e18p-108f, 0.0f, 0x1.3ad686p-77f, 0.0f,
     0x1.0beb68p-32f, 0x1.b5082ep-33f, 0x1.c2fdc2p-108f, 0.0f, 0.0f, 0.0f,
     0x1.71fc3ep-20f, 0.0f, 0x1.e1203ap-117f, 0.0f, 0.0f, 0x1.8ed65ep-113f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e2edf4p-28f, 0x1.324186p-48f, 0x1.9694cap-103f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.dc6864p-23f, 0x1.1df42cp-34f, 0x1.1d0d58p-118f, 0.0f,
     0.0f, 0x1.f3dd14p-122f, 0x1.79fa32p-118f, 0x1.810d5cp-7f, 0x1.d3e8bcp-12f, 0.0f,
     0x1.72f58ap-92f, 0.0f, 0.0f, 0.0f, 0x1.d0e1b4p-27f, 0x1.b4bf5cp-92f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.455aa4p-73f, 0x1.3ace9ap-120f, 0.0f, 0x1.f63708p-50f, 0.0f,
     0x1.738714p-112f, 0x1.b03ac4p-115f, 0.0f, 0x1.6fed48p-69f, 0x1.7640c2p-85f,
     0x1.b4bff8p-6f, 0x1.ac0ac8p-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.729accp-5f, 0x1.9f2b46p-121f, 0.0f, 0x1.8245cp-23f, 0x1.754f52p-5f,
     0x1.748f4p-99f, 0.0f, 0x1.be4fd6p-78f, 0x1.545cb8p-71f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4404f4p-62f, 0x1.c11442p-123f, 0.0f, 0.0f, 0x1.cf372cp-18f, 0.0f, 0.0f,
     0x1.40a11p-45f, 0x1.43f076p-92f, 0x1.e29c88p-69f, 0x1.0a159cp-99f, 0.0f, 0.0f,
     0x1.baad68p-28f, 0x1.134e9p-59f, 0.0f, 0x1.933fdcp-71f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8891cep-51f, 0x1.d9ff74p-39f, 0.0f, 0x1.3075dp-96f, 0.0f, 0x1.b5d7fcp-86f,
     0.0f, 0x1.eccf3p-48f, 0.0f, 0.0f, 0.0f, 0x1.9a8fccp-75f, 0.0f, 0x1.6c6bb6p-61f,
     0x1.c9a4ecp-11f, 0.0f, 0x1.6f166ep-110f, 0x1.97b19ap-95f, 0x1.6cfcd8p-73f,
     0x1.1d88ecp-50f, 0x1.859e86p-10f, 0.0f, 0.0f, 0.0f, 0x1.d9542ep-73f, 0.0f, 0.0f,
     0x1.d6d13p-5f, 0x1.c44d42p-68f, 0x1.ea4c8ap-62f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5951fap-53f, 0x1.5e9fb6p-12f, 0.0f, 0x1.1f7e3ep-102f, 0.0f, 0x1.9e1f7ap-116f,
     0x1.9f60fep-49f, 0x1.2c65a2p-86f, 0.0f, 0x1.04ccc6p-47f, 0.0f, 0x1.ea3368p-104f,
     0.0f, 0x1.eda146p-28f, 0x1.e04b5p-64f, 0.0f, 0x1.3e4f4ep-64f, 0x1.38bd6ep-57f,
     0.0f, 0.0f, 0.0f, 0x1.b5478cp-96f, 0.0f, 0x1.7e6c1cp-6f, 0.0f, 0.0f,
     0x1.6212a8p-30f, 0x1.9b89f4p-99f, 0x1.5f6c48p-51f, 0x1.c3cf3ap-97f,
     0x1.f729e2p-65f, 0.0f, 0.0f, 0x1.f50facp-9f, 0x1.c22ea2p-1f, 0x1.95c868p-12f,
     0.0f, 0x1.92297ep-25f, 0.0f, 0x1.9a27fap-121f, 0.0f, 0x1.93762ep-4f,
     0x1.6d3e2ep-18f, 0x1.4f74d2p-79f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.84f7cep-12f, 0.0f, 0x1.f23256p-93f, 0x1.963c94p-100f, 0.0f, 0x1.ddbe2ap-97f,
     0.0f, 0.0f, 0x1.7c504cp-78f, 0.0f, 0x1.fff588p-67f, 0x1.d79cd6p-55f,
     0x1.654362p-12f, 0.0f, 0.0f, 0.0f, 0x1.57e7eep-12f, 0.0f, 0x1.e18ab6p-85f,
     0x1.5391fp-63f, 0.0f, 0x1.1feebap-24f, 0x1.2ccaecp-52f, 0x1.00022p-43f, 0.0f,
     0x1.fdb53ap-55f, 0x1.8d6996p-11f, 0x1.0add3cp-118f, 0x1.b71p-13f, 0.0f, 0.0f,
     0x1.79e926p-60f, 0x1.2b37d6p-98f, 0.0f, 0x1.6e3f58p-51f, 0.0f, 0x1.dfddacp-21f,
     0.0f, 0x1.4973dep-11f, 0x1.3cb99ep-25f, 0.0f, 0x1.881b6cp-96f, 0x1.ad446ep-3f,
     0.0f, 0.0f, 0x1.427c68p-87f, 0.0f, 0x1.80d34ap-61f, 0x1.6edb58p-3f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.9ae274p-44f, 0.0f, 0x1.27570cp-50f, 0.0f, 0x1p0f,
     0x1.38d2e4p-55f, 0.0f, 0x1.9e282p-119f, 0.0f, 0x1.0f9054p-16f, 0x1.70ce7p-15f,
     0x1.0417aap-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a8fc7ep-68f, 0x1.0c781ap-124f,
     0x1.2aba3p-15f, 0.0f, 0.0f, 0x1.65db7ap-39f, 0.0f, 0.0f, 0x1.9543d6p-32f,
     0x1.6130dcp-75f, 0x1.8f30d2p-74f, 0.0f, 0.0f, 0x1.acba5ap-65f, 0.0f,
     0x1.8854dcp-8f, 0.0f, 0x1.db9606p-48f, 0x1.547a08p-59f, 0.0f, 0.0f, 0.0f,
     0x1.4421f4p-122f, 0x1.6de228p-115f, 0.0f, 0x1.80466p-19f, 0x1.ffdbcp-90f, 0.0f,
     0x1.518ae4p-42f, 0x1.6f843p-22f, 0x1.e6791ep-73f, 0x1.1b52f4p-111f, 0.0f, 0.0f,
     0x1.992f84p-104f, 0.0f, 0x1.d517d8p-102f, 0.0f, 0.0f, 0x1.d39694p-83f, 0.0f,
     0x1.036d4ap-6f, 0.0f, 0.0f, 0.0f, 0x1.62b046p-119f, 0x1.1f806cp-58f,
     0x1.7a185cp-34f, 0.0f, 0x1.031cfcp-5f, 0x1.be56bp-115f, 0x1.b2b874p-112f,
     0x1.505e22p-66f, 0x1.429562p-122f, 0x1.515eep-67f, 0.0f, 0.0f, 0x1.b0b9c2p-17f,
     0.0f, 0x1.1e013cp-53f, 0x1.3a24dap-119f, 0.0f, 0.0f, 0x1.cd50b6p-10f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.23a0b2p-55f, 0.0f, 0.0f, 0.0f, 0x1.4197ep-108f, 0x1.30a554p-111f,
     0.0f, 0x1.3b9d5p-38f, 0.0f, 0.0f, 0x1.032926p-13f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ad6bep-118f, 0.0f, 0x1.8ec65ap-21f, 0x1.aabbc2p-101f, 0x1.ed850ap-29f,
     0x1.b9c282p-71f, 0.0f, 0x1.4d245ep-39f, 0.0f, 0.0f, 0.0f, 0x1.0f3b1cp-45f, 0.0f,
     0.0f, 0.0f, 0x1.53b602p-116f, 0x1.f24ec4p-45f, 0.0f, 0.0f, 0x1.bd3992p-77f,
     0x1.8a0944p-110f, 0x1.270e22p-120f, 0x1.57b3f4p-36f, 0x1.9aa4ccp-42f,
     0x1.2bbdacp-111f, 0.0f, 0.0f, 0.0f, 0x1.aae3eap-41f, 0x1.71fdecp-66f, 0.0f, 0.0f,
     0.0f, 0x1.de85c2p-77f, 0x1.b955f2p-94f, 0.0f, 0.0f, 0.0f, 0x1.6116ep-11f,
     0x1.fb4368p-112f, 0.0f, 0x1.81b78p-104f, 0x1.7e2a8ap-42f, 0x1.b23f7ep-34f,
     0x1.594bc8p-26f, 0.0f, 0.0f, 0x1.a7378ep-10f, 0.0f, 0.0f, 0.0f, 0x1.33bf14p-80f,
     0.0f, 0x1.18ebf4p-21f, 0.0f, 0.0f, 0x1.104402p-78f, 0.0f, 0.0f, 0x1.e3f5a8p-48f,
     0x1.4d141ap-40f, 0x1.2a5218p-76f, 0x1.52c2cp-1f, 0.0f, 0x1.9e648p-120f, 0.0f,
     0.0f, 0.0f, 0x1.3a0c6p-3f, 0.0f, 0.0f, 0.0f, 0x1.27d22p-43f, 0x1.02eee4p-108f,
     0x1.c13c02p-100f, 0x1.8069c6p-99f, 0x1.f30dfep-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2df658p-89f, 0x1.b554b8p-87f, 0x1.4ea08p-19f, 0.0f, 0x1.1575ecp-83f,
     0x1.e72e96p-50f, 0x1.6e3ba4p-28f, 0x1.8e5a24p-117f, 0x1.4bef0ap-1f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.00727ap-99f, 0.0f, 0.0f, 0x1.2f5c8cp-22f, 0x1.8b3edp-33f, 0.0f,
     0.0f, 0.0f, 0x1.3b8524p-79f, 0x1.d353bap-87f, 0x1.d20576p-42f, 0.0f, 0.0f, 0.0f,
     0x1.c3b276p-99f, 0x1.0a4c3ap-7f, 0x1.567ab8p-86f, 0x1.13712cp-76f,
     0x1.c2cfe6p-123f, 0x1.edf7fcp-9f, 0x1.53547ap-30f, 0x1.fbf894p-34f,
     0x1.94a70cp-77f, 0x1.16c8f6p-51f, 0.0f, 0.0f, 0x1.2d03fep-89f, 0x1.e8eec8p-126f,
     0x1.64f9fap-121f, 0x1.9b0b2ep-95f, 0x1.96810ap-125f, 0.0f, 0x1.6935eap-116f,
     0.0f, 0x1.06f4dap-126f, 0x1.b7bb54p-118f, 0x1.8281b6p-83f, 0.0f, 0.0f, 0.0f,
     0x1.08d772p-99f, 0x1.826d6ap-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.08dd0cp-95f, 0.0f,
     0x1.a5390cp-17f, 0x1.599838p-15f, 0x1.26696ep-17f, 0.0f, 0.0f, 0x1.3ba53ep-60f,
     0x1p0f, 0.0f, 0x1.72b6a6p-76f, 0x1.cc4f72p-118f, 0x1.5fef3p-47f,
     0x1.f1300ap-119f, 0x1.ce1cep-40f, 0x1.29774ap-66f, 0.0f, 0.0f, 0x1.45281p-75f,
     0.0f, 0.0f, 0x1.842b62p-70f, 0.0f, 0.0f, 0x1.6e8d98p-26f, 0.0f, 0.0f, 0x1p0f,
     0.0f, 0x1.763726p-79f, 0x1.311cf6p-16f, 0x1.7ddb44p-71f, 0.0f, 0.0f,
     0x1.d9fabep-105f, 0x1.a85dap-101f, 0.0f, 0x1.7e8fe6p-94f, 0x1.dca958p-36f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.178a1ap-21f, 0x1.f54438p-29f, 0.0f,
     0.0f, 0x1.a3c386p-104f, 0x1p0f, 0x1.e2ce64p-7f, 0.0f, 0x1.9401dp-124f, 0.0f,
     0x1.e1b2cep-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ca19dep-82f, 0.0f, 0.0f,
     0.0f, 0x1.d5376cp-72f, 0.0f, 0.0f, 0x1.751536p-37f, 0x1.1bbc7ap-123f,
     0x1.fdd58ep-56f, 0.0f, 0x1.f83d4ap-17f, 0x1.45531ep-1f, 0.0f, 0x1.0f7e74p-44f,
     0x1.14e162p-79f, 0x1.2423a4p-61f, 0x1.7072cp-57f, 0x1.28f0a2p-125f,
     0x1.5357a6p-98f, 0.0f, 0.0f, 0x1.1ed0fep-3f, 0x1.d97d4p-1f, 0x1.94f1b8p-53f,
     0x1.8ae43ap-42f, 0x1.3ae874p-12f, 0.0f, 0.0f, 0.0f, 0x1.55b99cp-69f,
     0x1.e14f12p-78f, 0.0f, 0x1.0662fap-97f, 0.0f, 0.0f, 0x1.59f9c8p-30f,
     0x1.e5a12p-48f, 0x1.888f18p-108f, 0.0f, 0.0f, 0x1.330ba8p-17f, 0.0f, 0.0f, 0.0f,
     0x1.e9af24p-60f
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
            int32_t tmp3;

            memcpy(&tmp0, ((ml_float8_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            tmp1 = Sleef_finz_exp2f8_u35kvx(tmp0);
            memcpy(((ml_float8_t*)(external_bench_wrapper_output_table+ i)), &(tmp1), 32);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(8);
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
    cpe_measure = id_tmp / 10080000.0;
    printf("Sleef_finz_exp2f8_u35kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_finz_exp2f8_u35kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
