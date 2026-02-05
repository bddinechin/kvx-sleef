/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_log2f8_u35kvx.c --function \
 *     Sleef_finz_log2f8_u35kvx --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0x1.ca169p-19f, 0.0f, 0.0f, 0x1.b8b3f4p-51f, 0.0f, 0x1.bb5ba8p-65f, 0.0f,
     0.0f, 0.0f, 0x1.da5478p-93f, 0.0f, 0x1.cff658p-7f, 0x1.482378p-57f, 0.0f,
     0x1.13729cp-85f, 0x1.04bb38p-79f, 0.0f, 0.0f, 0.0f, 0x1.813158p-44f,
     0x1.6aebd8p-111f, 0x1.02d434p-114f, 0.0f, 0x1.bdd524p-55f, 0.0f, 0x1.e3135ap-47f,
     0.0f, 0x1.8f4218p-15f, 0x1.2f198cp-32f, 0x1.1aeb66p-46f, 0x1.4aba06p-39f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d9608cp-44f, 0x1.f0a6d6p-120f, 0.0f,
     0x1.288d9p-45f, 0.0f, 0.0f, 0x1.099ffcp-9f, 0.0f, 0x1p0f, 0.0f, 0x1.5aedcp-56f,
     0.0f, 0x1.d01c9ap-26f, 0x1.3339fp-109f, 0x1.60179ap-17f, 0x1.9dfd24p-19f, 0.0f,
     0.0f, 0x1.4b0f14p-43f, 0x1.7732f6p-75f, 0x1.ad176ap-32f, 0x1.6be2d4p-4f,
     0x1.05354cp-26f, 0x1.9a57cep-55f, 0x1.6db3a6p-44f, 0.0f, 0.0f, 0x1.4a1f4ep-91f,
     0.0f, 0.0f, 0x1.0e4e9ep-87f, 0x1.2330d8p-45f, 0.0f, 0x1.cb390cp-111f, 0.0f,
     0x1.60c37ep-75f, 0.0f, 0.0f, 0x1.6410bep-63f, 0.0f, 0.0f, 0x1.5546fep-107f,
     0x1.3de49p-105f, 0.0f, 0.0f, 0x1.440a0cp-50f, 0.0f, 0.0f, 0.0f, 0x1.6446d2p-7f,
     0x1.47e5aep-70f, 0x1.01076ap-5f, 0.0f, 0.0f, 0.0f, 0x1.e6ca58p-112f, 0.0f,
     0x1.b47884p-69f, 0x1.c93bdp-74f, 0.0f, 0.0f, 0x1.50bc2ap-88f, 0.0f,
     0x1.90172ap-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.caf41cp-80f, 0.0f, 0x1.4d2dfcp-67f,
     0.0f, 0x1.505b94p-111f, 0.0f, 0x1.4cf25cp-50f, 0.0f, 0x1.bd50d4p-4f,
     0x1.2750acp-55f, 0.0f, 0.0f, 0.0f, 0x1.86feb2p-117f, 0.0f, 0.0f, 0.0f,
     0x1.e776bcp-21f, 0.0f, 0.0f, 0x1.b69dfp-44f, 0.0f, 0x1.e7ee5ap-6f, 0.0f, 0.0f,
     0x1.a2d84cp-92f, 0.0f, 0x1.724c36p-22f, 0x1.ae01eap-125f, 0.0f, 0.0f,
     0x1.06082p-64f, 0.0f, 0x1.f015d8p-71f, 0x1.7519cep-23f, 0.0f, 0x1.18d4e6p-4f,
     0.0f, 0x1.38dd1ap-57f, 0x1.ff61a4p-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c997c8p-20f, 0.0f, 0.0f, 0x1.b55756p-75f, 0x1.157122p-83f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d10932p-68f, 0x1.49852ap-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2caa9p-91f, 0x1.b615ap-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0588a4p-58f, 0.0f,
     0x1.90c53ep-25f, 0x1.819806p-55f, 0x1.6b9a86p-14f, 0x1.68956ep-73f,
     0x1.47bb16p-34f, 0x1.e543dp-64f, 0x1.da486cp-15f, 0x1.cdc27ep-65f, 0.0f,
     0x1.a4734p-119f, 0x1.0414f4p-64f, 0.0f, 0.0f, 0x1.44cbcap-111f, 0x1.79a7a6p-3f,
     0x1.d04c34p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6d70f4p-104f, 0x1.e61622p-37f,
     0x1.300a9p-52f, 0x1.f83366p-92f, 0.0f, 0x1.f0789ap-3f, 0x1.53b136p-76f,
     0x1.26b3bep-47f, 0x1.21b97cp-91f, 0x1.a8d69p-47f, 0x1.166ef6p-62f, 0.0f, 0.0f,
     0x1.012a08p-85f, 0x1.a1508ap-66f, 0x1.67acc2p-119f, 0.0f, 0x1.059102p-89f,
     0x1.4daf3p-95f, 0x1.23721ep-94f, 0.0f, 0.0f, 0x1.1cc3ccp-75f, 0x1.2574dcp-86f,
     0.0f, 0x1.e99daep-51f, 0.0f, 0x1.a4260cp-62f, 0.0f, 0x1.16408ep-13f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a7c72ep-102f, 0.0f, 0.0f, 0x1.2ad03cp-100f, 0x1.771ffep-70f,
     0x1.c3b14ap-11f, 0.0f, 0x1.209cf6p-6f, 0.0f, 0x1.c2222ap-61f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.3f166cp-85f, 0.0f, 0.0f, 0.0f, 0x1.c37e66p-1f, 0.0f, 0.0f, 0.0f,
     0x1.4bbc18p-73f, 0x1.e0ce9ep-95f, 0x1.dd4a1ap-116f, 0.0f, 0x1.6fa39ap-78f, 0.0f,
     0x1.965d24p-6f, 0.0f, 0.0f, 0x1.816fa6p-41f, 0.0f, 0x1.8d17eap-101f, 0.0f, 0.0f,
     0x1.c78c12p-92f, 0.0f, 0.0f, 0x1.79338cp-95f, 0.0f, 0x1.136d3p-5f, 0.0f,
     0x1.d93708p-34f, 0.0f, 0.0f, 0x1.43bae6p-89f, 0.0f, 0x1.aa9b14p-19f,
     0x1.9d6adap-96f, 0x1.f4a41p-98f, 0.0f, 0x1.e99fa8p-54f, 0x1.5717b4p-88f, 0.0f,
     0x1.27cep-98f, 0.0f, 0x1.5988fap-32f, 0x1.1916b6p-71f, 0.0f, 0x1.f72d1cp-23f,
     0.0f, 0x1.a2efa4p-109f, 0.0f, 0.0f, 0x1.a9a7a2p-121f, 0x1.c90dc6p-29f, 0.0f,
     0.0f, 0x1.1d8f0ap-72f, 0.0f, 0x1.688432p-39f, 0.0f, 0.0f, 0x1.cd736p-23f,
     0x1.e215dap-19f, 0.0f, 0.0f, 0.0f, 0x1.a320fep-37f, 0.0f, 0x1.b0585p-47f, 0.0f,
     0x1.824b24p-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eec8acp-63f,
     0x1.b88836p-101f, 0.0f, 0.0f, 0.0f, 0x1.0f7596p-119f, 0.0f, 0x1.06c836p-3f, 0.0f,
     0.0f, 0x1.cb676p-13f, 0x1.3fbf44p-13f, 0.0f, 0.0f, 0.0f, 0x1.d07bdcp-13f, 0.0f,
     0x1.4c6b62p-110f, 0.0f, 0x1.732056p-90f, 0.0f, 0.0f, 0.0f, 0x1.34116cp-38f,
     0x1.8bfb82p-91f, 0x1.08a3cap-54f, 0.0f, 0x1.61a80ep-34f, 0.0f, 0x1.2f4f4cp-80f,
     0.0f, 0.0f, 0x1.ac9252p-52f, 0x1.2c7c24p-3f, 0x1.9735fap-21f, 0x1.59f1a8p-119f,
     0.0f, 0.0f, 0x1.122c2ap-89f, 0.0f, 0.0f, 0x1.38c852p-48f, 0.0f, 0.0f,
     0x1.7b7308p-101f, 0x1.5e0cf2p-3f, 0.0f, 0x1.50024p-59f, 0x1.54511cp-9f,
     0x1.35b05cp-122f, 0x1.17d136p-79f, 0x1.badc1cp-119f, 0x1.5029c8p-22f,
     0x1.fdbd1ap-48f, 0x1.5b7aecp-62f, 0.0f, 0x1.910cb6p-71f, 0.0f, 0x1.5aa32cp-26f,
     0x1.fa403ep-19f, 0.0f, 0x1.cac74cp-22f, 0.0f, 0.0f, 0x1.2d0c52p-81f, 0.0f, 0.0f,
     0.0f, 0x1.dea6bap-48f, 0.0f, 0.0f, 0x1.157a5cp-53f, 0.0f, 0.0f, 0.0f,
     0x1.b38fbcp-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.32b60ep-92f, 0x1.1bb9a6p-32f, 0.0f,
     0.0f, 0x1.0c43acp-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8189p-90f, 0x1.deafcp-47f,
     0x1.fcca38p-87f, 0x1.8e0f28p-60f, 0.0f, 0x1.01896ep-85f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c66d3cp-104f, 0.0f, 0.0f, 0.0f, 0x1.e85aaep-120f, 0x1.7ba504p-13f,
     0x1.831e64p-19f, 0x1.db1ccap-98f, 0.0f, 0x1.07a714p-125f, 0x1.ded904p-3f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.741ca8p-112f, 0.0f, 0x1.585b3ap-120f, 0.0f,
     0.0f, 0x1.27d9cp-9f, 0x1.0e836ap-11f, 0x1.85f6bcp-15f, 0x1.57a95ep-84f,
     0x1.d453acp-29f, 0.0f, 0.0f, 0x1.5c8202p-22f, 0.0f, 0.0f, 0x1.f40146p-100f, 0.0f,
     0.0f, 0.0f, 0x1.a43794p-75f, 0x1.22e694p-38f, 0.0f, 0x1.1f1324p-90f,
     0x1.bd0698p-39f, 0.0f, 0.0f, 0x1.e14ecep-61f, 0x1.2f1522p-54f, 0.0f,
     0x1.783fc2p-40f, 0.0f, 0.0f, 0x1.25c228p-14f, 0.0f, 0.0f, 0x1.43790cp-97f, 0.0f,
     0x1.3812d4p-11f, 0x1.0109a2p-8f, 0x1.05d6a6p-23f, 0x1.125e4ep-55f,
     0x1.70e086p-40f, 0.0f, 0.0f, 0.0f, 0x1.8e2cc2p-85f, 0x1.39f92ep-111f, 0.0f, 0.0f,
     0x1.6e5f54p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f323eep-10f, 0.0f,
     0.0f, 0x1.338f16p-43f, 0.0f, 0.0f, 0x1.fec9d6p-3f, 0.0f, 0x1.5e27b6p-16f,
     0x1.5172c4p-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bb143p-59f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.fc730ep-10f, 0.0f, 0x1.1ddb28p-39f, 0.0f, 0.0f, 0x1.cac43ap-32f, 0.0f,
     0.0f, 0x1.0e81a6p-21f, 0.0f, 0x1.48d94p-88f, 0x1.70283p-28f, 0x1.ab9f94p-33f,
     0.0f, 0x1.5988fp-110f, 0x1.33ca72p-83f, 0x1.86e344p-75f, 0.0f, 0x1.ae80b2p-114f,
     0x1.339506p-50f, 0x1.837d84p-2f, 0x1.23f7a2p-7f, 0x1.6e3bf2p-98f,
     0x1.d1565ap-27f, 0x1.a103d2p-124f, 0x1.d5dd94p-20f, 0x1.aa556cp-88f,
     0x1.a36556p-100f, 0x1.b45c4ep-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8096bp-75f,
     0x1.be3046p-15f, 0.0f, 0x1.6a4228p-73f, 0.0f, 0.0f, 0x1.184076p-49f, 0.0f, 0.0f,
     0x1.94bf2ep-91f, 0.0f, 0x1.8eb204p-108f, 0x1.69356ap-81f, 0.0f, 0.0f,
     0x1.7f807ep-72f, 0x1.3c60ep-23f, 0x1.1256f2p-32f, 0x1.6fb1f2p-121f,
     0x1.0e1884p-116f, 0.0f, 0x1.b8faap-88f, 0.0f, 0.0f, 0x1.acd8f8p-22f,
     0x1.5910e8p-27f, 0x1.f43ec4p-24f, 0x1.b9a14ep-26f, 0.0f, 0x1.a7f41ep-118f, 0.0f,
     0x1.981afp-95f, 0.0f, 0x1.ec1d8ep-37f, 0x1.6d361p-59f, 0x1.dce5ecp-26f,
     0x1.0ad72cp-58f, 0x1.244244p-53f, 0x1.719ddep-42f, 0x1.00bc9p-24f,
     0x1.ef568ep-96f, 0.0f, 0x1.762d4ap-107f, 0.0f, 0x1.cb393ap-90f, 0x1.e9f43cp-33f,
     0.0f, 0x1.5d9eb6p-10f, 0x1.562eecp-3f, 0x1.7722ccp-90f, 0.0f, 0.0f, 0.0f,
     0x1.d818eep-74f, 0.0f, 0x1.fb1194p-42f, 0x1.48f0c8p-120f, 0x1.41334p-116f,
     0x1.d488a4p-39f, 0.0f, 0x1.43f84p-109f, 0x1.743e48p-90f, 0.0f, 0.0f,
     0x1.634a02p-1f, 0x1.cc0df2p-111f, 0.0f, 0.0f, 0x1.c1bc4cp-108f, 0.0f,
     0x1.1aec6cp-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8bbf16p-111f,
     0x1.18f196p-33f, 0x1.f9a7e6p-120f, 0x1.16ea8ep-113f, 0.0f, 0x1.5d67fp-30f,
     0x1.4ba0bcp-36f, 0x1.1b109ep-62f, 0x1.3add4ap-114f, 0x1.06e35p-30f,
     0x1.43c73ep-84f, 0x1.1d955ep-77f, 0.0f, 0x1.d6433cp-20f, 0.0f, 0x1.8513cp-12f,
     0x1.2239eep-49f, 0x1.30c476p-19f, 0.0f, 0.0f, 0.0f, 0x1.e73b4cp-109f, 0.0f,
     0x1.11bc72p-57f, 0.0f, 0x1.0280d2p-32f, 0.0f, 0x1.2f7522p-39f, 0.0f, 0.0f, 0.0f,
     0x1.485714p-13f, 0x1.2b30acp-112f, 0.0f, 0.0f, 0.0f, 0x1.6538f8p-89f,
     0x1.6a648ep-58f, 0x1.fe791p-20f, 0x1.39f742p-93f, 0x1.e1f07cp-114f, 0.0f, 0.0f,
     0x1.fb259p-37f, 0.0f, 0x1.736b04p-111f, 0x1.982a02p-87f, 0.0f, 0x1.c98094p-122f,
     0x1.73d258p-32f, 0.0f, 0.0f, 0x1.2f43a4p-45f, 0.0f, 0.0f, 0x1.410184p-91f,
     0x1.dfad5p-90f, 0x1.5e42e2p-15f, 0.0f, 0x1.a02ad2p-112f, 0.0f, 0.0f, 0.0f,
     0x1.b9d2e4p-48f, 0.0f, 0x1.b34b5ap-14f, 0.0f, 0x1.aab5bep-112f, 0.0f,
     0x1.e8abcp-55f, 0x1.efa908p-95f, 0x1.63ddc8p-21f, 0.0f, 0x1.a4e86cp-52f, 0.0f,
     0x1.04f25cp-59f, 0x1.e040dcp-16f, 0.0f, 0x1.283c32p-67f, 0.0f, 0.0f,
     0x1.9c6348p-20f, 0.0f, 0x1.916ebep-123f, 0.0f, 0x1.141814p-44f, 0x1.46ffbap-81f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3dcf2cp-14f, 0x1.2fca66p-62f, 0.0f, 0.0f,
     0x1.23ca1cp-124f, 0x1.96c9f2p-24f, 0x1.3650fep-9f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0b90dp-91f, 0x1.1718c6p-115f, 0.0f, 0.0f, 0x1.9a3a0ep-101f, 0x1.2eb164p-18f,
     0.0f, 0x1.35d2dp-119f, 0.0f, 0x1.130388p-52f, 0x1.b53552p-115f, 0x1.1b9e56p-104f,
     0x1.cc682cp-4f, 0x1.a5c124p-39f, 0.0f, 0.0f, 0x1.b8e3ap-54f, 0.0f,
     0x1.e0edd4p-82f, 0x1.131a32p-5f, 0x1.56d20cp-117f, 0.0f, 0x1.b1b25ep-38f,
     0x1.d2203cp-113f, 0x1.b70a3p-8f, 0x1.90209p-119f, 0x1.4d521cp-73f,
     0x1.48c436p-26f, 0x1.71194ep-109f, 0x1.188976p-111f, 0x1.069b4cp-86f, 0.0f,
     0x1.1e7c8ep-110f, 0.0f, 0x1.31d768p-27f, 0x1.efed74p-116f, 0x1.c15d4p-42f,
     0x1.b9c06ap-68f, 0x1.68feb8p-102f, 0x1.359356p-49f, 0.0f, 0.0f, 0x1.eca32ap-79f,
     0x1.10ee6ap-9f, 0.0f, 0.0f, 0x1.42d3d2p-61f, 0x1.ccfadcp-43f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.aa62aep-58f, 0.0f, 0x1.34e97ap-59f, 0x1.01b256p-25f, 0x1.b2e9fcp-81f,
     0x1.e9cc1ep-116f, 0x1.b1556p-64f, 0.0f, 0.0f, 0.0f, 0x1.7733fap-89f,
     0x1.a13ff8p-37f, 0x1.0ec792p-62f, 0x1.78d9d6p-24f, 0.0f, 0x1.ce628ep-94f, 0.0f,
     0.0f, 0x1.27ff4ap-14f, 0.0f, 0x1.107886p-80f, 0.0f, 0.0f, 0.0f, 0x1.e18ad4p-97f,
     0.0f, 0x1.c924eap-54f, 0x1.3298c6p-32f, 0x1.c56a32p-47f, 0x1.19f84ap-47f,
     0x1.7c47d2p-17f, 0x1.f2c828p-23f, 0.0f, 0x1.5fbc7p-123f, 0.0f, 0x1.83de3ap-79f,
     0x1.fb1bcp-86f, 0.0f, 0x1.4e693cp-1f, 0x1.3539c2p-56f, 0.0f, 0x1.1479a4p-7f,
     0.0f, 0.0f, 0x1.4f3752p-100f, 0.0f, 0x1.7075a8p-84f, 0.0f, 0.0f, 0.0f,
     0x1.0dc06ap-49f, 0x1.b4c098p-43f, 0.0f, 0x1.fe0886p-55f, 0.0f, 0x1.415494p-62f,
     0x1.eff6c6p-59f, 0x1.8d466p-76f, 0x1.806902p-31f, 0.0f, 0x1.964b6ap-95f, 0.0f,
     0x1.00347p-47f, 0x1.50e22ep-96f, 0x1.e1d50ap-15f, 0.0f, 0x1.217bb2p-95f,
     0x1.ac4822p-33f, 0.0f, 0.0f, 0x1.56a5cep-29f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3dfba8p-40f, 0.0f, 0.0f, 0x1.ad052p-22f, 0x1.fb9bb4p-63f, 0x1.712ebap-83f,
     0.0f, 0x1.fb138cp-41f, 0x1.ec14p-11f, 0x1.77b5dep-81f, 0x1.eecd1ap-48f, 0.0f,
     0.0f, 0x1.8e88fep-113f, 0x1.cd0a34p-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2eaf6ap-67f, 0.0f, 0x1.857a54p-18f, 0x1.39b8fp-23f, 0x1.719aa4p-19f,
     0x1.9b5192p-92f, 0.0f, 0x1.427612p-82f, 0x1.03484ep-46f, 0.0f, 0x1.7c0158p-9f,
     0x1.817d6ep-96f, 0.0f, 0.0f, 0.0f, 0x1.6f9efp-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.3adfe6p-61f, 0.0f, 0.0f, 0x1.db51bcp-106f, 0.0f,
     0x1.673fc8p-115f, 0.0f, 0.0f, 0x1.3e0d7ap-58f, 0.0f, 0.0f, 0.0f, 0x1.2ff672p-98f,
     0x1.447a8ep-123f, 0x1.f0a906p-46f, 0x1.9b2dep-62f, 0x1.249deap-38f,
     0x1.96b65ap-124f, 0x1.01935ep-104f, 0x1.573d82p-51f, 0x1.36b744p-112f, 0.0f,
     0x1.fa5facp-37f, 0.0f, 0x1.124a5ep-60f, 0x1.8c0f8p-43f, 0.0f, 0x1.17f7bep-15f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ff102p-11f, 0.0f, 0x1.4d2826p-112f, 0x1.fb5bacp-16f,
     0.0f, 0x1.856d54p-46f, 0x1.fb0984p-68f, 0x1.1a4ac8p-99f, 0x1.e87f1ep-82f, 0.0f,
     0x1.6343e2p-26f, 0.0f, 0x1.340686p-39f, 0x1.a676dap-123f, 0.0f, 0.0f,
     0x1.df3706p-98f, 0x1.ad5eccp-14f, 0x1.1238bap-94f, 0.0f, 0.0f, 0.0f,
     0x1.fb47e8p-100f, 0.0f, 0x1.d9075cp-3f, 0x1.34e424p-97f, 0x1.098caap-61f,
     0x1.aac8dcp-31f, 0.0f, 0x1.574428p-88f, 0x1.e7700ap-15f, 0.0f, 0.0f, 0.0f,
     0x1.35675ep-76f, 0.0f, 0x1.6386a2p-74f, 0.0f, 0x1.4333cep-114f, 0x1.ae7b0ep-60f,
     0x1.da061cp-34f, 0.0f, 0.0f, 0x1.64da2p-49f, 0x1.705eep-120f, 0x1.ae61f2p-1f,
     0.0f, 0x1.a681aep-125f, 0x1.74ea62p-45f, 0x1.01c32cp-37f, 0x1.18ef4p-88f, 0.0f,
     0.0f, 0.0f, 0x1.63615ep-120f, 0x1.b41a4cp-20f, 0.0f, 0.0f, 0.0f, 0x1.ba9a62p-76f,
     0x1.60745p-53f, 0x1.d7262ap-23f, 0x1.805ca4p-28f, 0x1.ce3686p-123f,
     0x1.853602p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a0861ap-2f, 0.0f,
     0x1.316d7p-25f, 0.0f, 0x1.00481p-96f, 0.0f, 0x1.1ba31p-16f, 0x1.57a2b2p-39f
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
            tmp1 = Sleef_finz_log2f8_u35kvx(tmp0);
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
    printf("Sleef_finz_log2f8_u35kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_finz_log2f8_u35kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
