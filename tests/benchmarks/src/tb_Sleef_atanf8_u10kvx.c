/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_atanf8_u10kvx.c --function Sleef_atanf8_u10kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
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
     0.0f, 0x1.cb7aa8p-119f, 0.0f, 0.0f, 0.0f, 0x1.628caep-76f, 0x1.472f46p-2f,
     0x1.ead32ep-42f, 0x1.0d6846p-99f, 0x1.f52c2ep-5f, 0.0f, 0.0f, 0x1.fa7afp-22f,
     0x1.a89e94p-96f, 0.0f, 0.0f, 0x1.4a2798p-93f, 0.0f, 0x1.b3732p-57f, 0.0f, 0.0f,
     0.0f, 0x1.1fad12p-122f, 0.0f, 0.0f, 0x1.929e98p-73f, 0.0f, 0x1.3e589cp-6f,
     0x1.76cb2p-108f, 0x1.6a9f28p-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.34f0bap-111f, 0.0f,
     0.0f, 0.0f, 0x1.c5a688p-116f, 0.0f, 0x1.6fe39ap-36f, 0x1.ed1aecp-58f,
     0x1.b88a3p-74f, 0.0f, 0.0f, 0x1.c9e31ap-62f, 0x1.650ec2p-64f, 0x1.443a88p-68f,
     0x1.e6b1f2p-87f, 0.0f, 0.0f, 0x1.9bf38ap-57f, 0.0f, 0x1.993378p-88f, 0.0f, 0.0f,
     0x1.565894p-126f, 0x1.10e1aap-97f, 0.0f, 0.0f, 0x1.85edeap-39f, 0x1.40ac72p-116f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ac95c8p-92f, 0x1.2b01b2p-38f, 0x1.3c9614p-111f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.45e1b4p-54f, 0x1.5daa98p-35f, 0.0f,
     0x1.04bcdep-89f, 0x1.059b3cp-90f, 0.0f, 0x1.89fdaep-41f, 0x1.5c8f4ep-117f,
     0x1.3602acp-34f, 0x1.c4fb3cp-31f, 0.0f, 0.0f, 0.0f, 0x1.d81f92p-8f,
     0x1.3215dp-16f, 0.0f, 0x1.72e57p-86f, 0x1.7be576p-3f, 0x1.f88bc2p-82f,
     0x1.8ed2dp-118f, 0x1.3857a6p-29f, 0.0f, 0x1.dfd2a6p-46f, 0x1.62901cp-23f,
     0x1.4a2bep-60f, 0x1.eb54a8p-86f, 0x1.fb9644p-107f, 0x1.6256c6p-56f,
     0x1.4144bp-90f, 0.0f, 0.0f, 0.0f, 0x1.ab02d2p-9f, 0.0f, 0x1.c4858ep-118f, 0.0f,
     0.0f, 0x1.c36b6cp-32f, 0x1.bc8172p-112f, 0x1.93d7dep-55f, 0.0f, 0x1.1b3de6p-15f,
     0.0f, 0.0f, 0.0f, 0x1.84adp-75f, 0.0f, 0x1.6592fap-105f, 0x1.a213eap-16f, 0.0f,
     0.0f, 0x1.997c84p-6f, 0.0f, 0x1.5a61b6p-116f, 0x1.86df0ap-17f, 0x1p0f,
     0x1.8aaa04p-108f, 0.0f, 0.0f, 0.0f, 0x1.447edp-3f, 0.0f, 0x1.18774p-92f,
     0x1.6f7f34p-33f, 0x1.9083f8p-22f, 0.0f, 0x1.63f4f8p-70f, 0x1.f0474cp-52f,
     0x1.d124dap-26f, 0x1.d70376p-11f, 0x1.ec46b8p-72f, 0.0f, 0.0f, 0.0f,
     0x1.dd864p-73f, 0x1.9baef6p-62f, 0x1.3f041ap-42f, 0x1.1d1534p-108f,
     0x1.22344cp-71f, 0.0f, 0.0f, 0x1.accaf2p-13f, 0x1.cea3c4p-106f, 0x1.69b508p-124f,
     0x1.7c9a28p-7f, 0x1.e3cf4ap-70f, 0.0f, 0x1.269e2cp-94f, 0x1.e1f372p-117f,
     0x1.271f1ap-101f, 0x1.461d6cp-29f, 0x1.36a268p-19f, 0x1.72da94p-47f, 0.0f,
     0x1.61502ep-124f, 0.0f, 0x1.75e994p-97f, 0x1.385b54p-9f, 0.0f, 0x1.5966d6p-66f,
     0x1.4a6e78p-108f, 0.0f, 0.0f, 0x1.1a4272p-101f, 0x1.29c866p-88f, 0x1.fb735p-78f,
     0.0f, 0.0f, 0.0f, 0x1.8d876cp-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bcdb2cp-85f, 0.0f, 0.0f, 0.0f, 0x1.5e7be2p-117f, 0.0f, 0x1.eda86p-21f, 0.0f,
     0x1.8899d8p-84f, 0.0f, 0x1.a60484p-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.657c9ap-26f, 0.0f, 0x1.51f52p-80f, 0.0f, 0.0f, 0x1.36bf14p-108f,
     0x1.598bcp-37f, 0x1.09ca8cp-8f, 0.0f, 0.0f, 0.0f, 0x1.7b2722p-86f, 0.0f,
     0x1.46075ap-77f, 0x1.1b9296p-80f, 0.0f, 0.0f, 0x1.a53d68p-66f, 0.0f,
     0x1.2bc938p-109f, 0.0f, 0x1.a7ca2p-110f, 0x1.09fdbcp-12f, 0x1.a8c8ecp-95f,
     0x1.5ba64ap-14f, 0x1.c39964p-29f, 0.0f, 0.0f, 0x1.12faa8p-33f, 0x1.b636f6p-121f,
     0.0f, 0x1.ead648p-9f, 0.0f, 0x1.acde34p-126f, 0x1.2067acp-36f, 0.0f, 0.0f,
     0x1.9e2fecp-19f, 0.0f, 0.0f, 0x1.e4411ep-30f, 0x1.6104cp-93f, 0.0f, 0.0f, 0.0f,
     0x1p0f, 0.0f, 0x1.b09b1cp-55f, 0.0f, 0.0f, 0.0f, 0x1.d0be9p-126f, 0.0f,
     0x1.46c398p-5f, 0.0f, 0x1.69e5c2p-22f, 0.0f, 0x1.17ee42p-41f, 0.0f,
     0x1.e50d24p-93f, 0x1.76c3d6p-18f, 0.0f, 0x1.7ba95ep-4f, 0x1.943498p-61f,
     0x1.382c8cp-47f, 0x1.8b0644p-59f, 0x1.2a2106p-89f, 0x1.20a9eap-2f, 0.0f,
     0x1.fb46c6p-43f, 0.0f, 0x1.5c58acp-40f, 0.0f, 0x1.538b2ap-103f, 0.0f, 0.0f,
     0x1.5f79d8p-40f, 0x1.bb705ap-13f, 0.0f, 0x1.9ef20ep-104f, 0.0f, 0x1.a72daep-6f,
     0x1.82459ep-41f, 0.0f, 0x1.c645fap-50f, 0x1.f19666p-55f, 0.0f, 0x1.05ece6p-102f,
     0x1.8af4acp-102f, 0x1.cd464ap-9f, 0.0f, 0.0f, 0x1.79140ep-120f, 0.0f, 0.0f, 0.0f,
     0x1.04785ep-45f, 0x1.17272p-10f, 0.0f, 0.0f, 0.0f, 0x1.627dep-52f, 0.0f, 0.0f,
     0x1.e3657ep-116f, 0x1.407c9p-62f, 0.0f, 0.0f, 0x1.8f4364p-34f, 0x1.1b9166p-66f,
     0.0f, 0.0f, 0x1.8d8a8p-27f, 0x1.82f89ep-69f, 0.0f, 0.0f, 0.0f, 0x1.4a788ep-46f,
     0.0f, 0.0f, 0x1.ae5642p-37f, 0x1.b76e6cp-34f, 0.0f, 0x1.53858ap-84f, 0.0f,
     0x1.93387p-106f, 0x1.0469fcp-119f, 0x1.c8c304p-42f, 0.0f, 0x1.092554p-81f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b90d22p-70f, 0x1.41bee6p-82f, 0.0f, 0x1.5d136ep-84f,
     0x1.d91302p-28f, 0x1.963f12p-45f, 0x1.72874cp-84f, 0.0f, 0x1.c5f62p-30f, 0.0f,
     0.0f, 0.0f, 0x1.c988d8p-91f, 0x1.da6c52p-66f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0eab0ap-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.71ff08p-66f, 0.0f, 0.0f,
     0.0f, 0x1.c3f824p-80f, 0.0f, 0.0f, 0x1.d65de2p-102f, 0.0f, 0x1.0eabc6p-117f,
     0x1.4fe9b6p-26f, 0.0f, 0.0f, 0x1.c5d152p-115f, 0.0f, 0x1.2250c2p-58f,
     0x1.6a9828p-16f, 0x1.80fbbep-109f, 0.0f, 0x1.cd603ap-126f, 0.0f, 0x1.67b338p-31f,
     0x1.4fb86cp-22f, 0.0f, 0.0f, 0x1.e67da6p-116f, 0x1.76843ep-60f, 0x1.98b5a8p-114f,
     0.0f, 0x1.72a344p-49f, 0.0f, 0.0f, 0x1.9120b8p-5f, 0x1.4e9fa2p-15f,
     0x1.51e5b4p-68f, 0.0f, 0x1.30605ap-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.84128p-44f, 0.0f, 0.0f, 0x1.1c1b06p-99f, 0x1.8f9724p-38f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.4217c8p-48f, 0x1.345d14p-51f, 0x1.b0bdcap-6f,
     0x1.c0d8c8p-32f, 0x1.28a456p-62f, 0.0f, 0.0f, 0.0f, 0x1.5ee98p-114f,
     0x1.b0f9e6p-76f, 0.0f, 0x1.35d6dap-9f, 0x1.589ee8p-21f, 0.0f, 0.0f,
     0x1.b1b584p-64f, 0x1.8c2f48p-13f, 0.0f, 0.0f, 0x1.e68b72p-13f, 0.0f, 0.0f,
     0x1.95b81ep-93f, 0.0f, 0x1.c55632p-50f, 0x1.ccea26p-26f, 0.0f, 0x1.4ec4eap-32f,
     0.0f, 0.0f, 0x1.384a94p-22f, 0.0f, 0x1.079a94p-120f, 0x1.c5166cp-112f, 0.0f,
     0x1.dc5ef4p-104f, 0.0f, 0x1.70794ap-23f, 0x1.23013ap-20f, 0x1.f1c3a2p-73f, 0.0f,
     0x1.9980c6p-110f, 0x1.c1739ap-108f, 0.0f, 0x1.e69accp-57f, 0x1.843a8cp-38f, 0.0f,
     0x1.698ae2p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7a3208p-43f, 0x1.d49778p-4f,
     0x1.8250dep-58f, 0x1.648028p-98f, 0x1.49cd8p-3f, 0x1.0150aap-123f,
     0x1.5f58cep-25f, 0.0f, 0x1.0291cep-24f, 0x1.eb987ep-102f, 0x1.915498p-52f, 0.0f,
     0x1.2c9a9ep-87f, 0.0f, 0x1.3c5ecap-52f, 0x1.d8581ep-22f, 0x1.961f28p-35f, 0.0f,
     0.0f, 0.0f, 0x1.8aae38p-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.59eeep-62f,
     0.0f, 0.0f, 0x1.52dfe2p-56f, 0x1.8a8da4p-78f, 0x1.fba238p-97f, 0x1.afa5cep-118f,
     0x1.65cf88p-25f, 0.0f, 0x1.8ec7p-15f, 0x1.9efd2cp-76f, 0x1.2ac45cp-82f,
     0x1.52ce02p-79f, 0x1.455d68p-92f, 0x1.d92a56p-31f, 0x1.47ba0ep-76f, 0.0f,
     0x1.3d763ap-122f, 0x1.13be34p-32f, 0x1.f578aap-102f, 0x1.bd5dc4p-123f,
     0x1.c9b392p-38f, 0x1.1eda3ap-85f, 0.0f, 0.0f, 0x1.7ff934p-74f, 0.0f, 0.0f,
     0x1.219284p-23f, 0x1.d7987cp-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c6b946p-74f, 0x1.62eadcp-16f, 0x1.1b628cp-39f, 0x1.467d7p-29f, 0.0f,
     0x1.4d383p-13f, 0.0f, 0.0f, 0.0f, 0x1.737bd8p-6f, 0.0f, 0x1.e25ac4p-73f, 0.0f,
     0.0f, 0.0f, 0x1.384a7ap-85f, 0x1.7e91eap-118f, 0x1.d992d2p-87f, 0.0f,
     0x1.3c776cp-107f, 0.0f, 0x1.d76ebcp-64f, 0x1p0f, 0.0f, 0x1.3b0384p-28f,
     0x1.eea7b6p-67f, 0x1.4e97dp-102f, 0.0f, 0.0f, 0x1.c47c84p-83f, 0.0f,
     0x1.361476p-103f, 0.0f, 0.0f, 0x1.5ffddep-41f, 0x1.09c25p-1f, 0x1.49f666p-96f,
     0.0f, 0.0f, 0.0f, 0x1.abad4ep-15f, 0.0f, 0x1.eb246p-55f, 0.0f, 0.0f,
     0x1.3054f2p-41f, 0x1.905564p-4f, 0x1.f84322p-102f, 0x1.85448p-120f, 0.0f,
     0x1.098aacp-101f, 0x1.277decp-95f, 0.0f, 0x1.8855fep-1f, 0.0f, 0x1.0adb5cp-92f,
     0x1.1206bp-74f, 0.0f, 0x1.fb3d7ep-23f, 0x1.d404b4p-19f, 0.0f, 0x1.3a1aaep-15f,
     0.0f, 0x1.f0d552p-56f, 0.0f, 0x1.3dc338p-78f, 0x1.79c39ap-89f, 0x1.8cf178p-120f,
     0.0f, 0.0f, 0x1.9b7672p-89f, 0x1.fcd304p-99f, 0.0f, 0x1.42305ap-51f,
     0x1.068ab8p-2f, 0x1.4f5cf8p-93f, 0x1.e541ccp-96f, 0x1.01b4bcp-113f,
     0x1.d44cb4p-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2aa326p-58f, 0.0f,
     0x1.40460ap-63f, 0.0f, 0x1.6da04ap-2f, 0x1.586d22p-93f, 0.0f, 0.0f,
     0x1.9895cp-22f, 0x1.500f38p-65f, 0.0f, 0x1.0e6078p-121f, 0.0f, 0.0f, 0.0f,
     0x1.13df04p-40f, 0x1.d0c0e8p-3f, 0x1.1e5576p-45f, 0.0f, 0x1.9a5154p-73f,
     0x1.2a497ap-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7b06d2p-88f, 0.0f,
     0.0f, 0.0f, 0x1.c993d2p-90f, 0.0f, 0x1.3a8034p-54f, 0x1.5e76fp-73f, 0.0f, 0.0f,
     0x1.03ad02p-21f, 0.0f, 0.0f, 0x1.3ff76ap-110f, 0x1.7fdf5ap-73f, 0x1.9867aep-46f,
     0.0f, 0.0f, 0.0f, 0x1.b6eb88p-103f, 0x1.e6914cp-16f, 0.0f, 0x1.cb9c48p-77f,
     0x1.3aadacp-102f, 0x1.38883ap-115f, 0x1.60b446p-99f, 0x1.954068p-53f,
     0x1.5e8112p-29f, 0.0f, 0x1.3f8ec8p-59f, 0.0f, 0x1.8aa258p-117f, 0x1.019b14p-117f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2f0578p-41f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.bab90ap-118f, 0.0f, 0.0f, 0.0f, 0x1.5cda72p-107f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.acf19p-4f, 0.0f, 0.0f, 0.0f, 0x1.e8ca9ap-24f, 0.0f,
     0x1.9baaacp-47f, 0x1.7cfa2ep-107f, 0.0f, 0.0f, 0.0f, 0x1.b70e22p-71f,
     0x1.41d882p-95f, 0.0f, 0x1.0f7474p-54f, 0.0f, 0x1.9859aap-12f, 0x1.e76a1ap-53f,
     0x1.661f5p-68f, 0.0f, 0.0f, 0x1.e081fcp-41f, 0.0f, 0x1.b38876p-70f, 0.0f, 0.0f,
     0x1.982e66p-56f, 0.0f, 0.0f, 0.0f, 0x1.69701ap-108f, 0x1.90c188p-124f,
     0x1.f725eap-35f, 0x1.65d222p-22f, 0x1.e48348p-98f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f6098ap-7f, 0.0f, 0.0f, 0x1.4dc934p-111f, 0x1.b7158ep-20f, 0.0f,
     0x1.82f284p-36f, 0x1.e5bd3ap-4f, 0x1.26a7aep-84f, 0.0f, 0x1.9cec1p-121f,
     0x1.2a6d0ep-54f, 0.0f, 0x1.6cce58p-100f, 0x1.103b32p-28f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.db7a02p-12f, 0x1.455b94p-113f, 0x1.33db8ap-36f, 0.0f, 0.0f, 0.0f,
     0x1.525bf6p-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.afdb3ep-98f, 0.0f, 0.0f,
     0x1.a5ff84p-65f, 0x1.b2c1bep-113f, 0.0f, 0x1.a59c3ap-18f, 0.0f, 0.0f,
     0x1.4427ecp-35f, 0.0f, 0x1.9773aap-77f, 0x1.e9fbb2p-59f, 0x1.d67c2ap-66f, 0.0f,
     0x1.4af844p-100f, 0x1.9c5aa6p-36f, 0x1.7d5df6p-118f, 0x1.ff1662p-79f, 0.0f, 0.0f,
     0x1.4f6636p-29f, 0x1.3bf096p-21f, 0.0f, 0.0f, 0x1.f0786ep-113f, 0x1.11f1f4p-104f,
     0x1.9c085cp-69f, 0.0f, 0x1.5c7af6p-101f, 0x1.ce9bcap-6f, 0.0f, 0x1.80021ap-71f,
     0.0f, 0x1.5adabp-102f, 0x1.c764dap-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.74709ap-126f, 0.0f, 0x1.5a9618p-21f, 0x1.ee5bp-38f, 0x1.f2465ep-56f, 0.0f,
     0.0f, 0x1.f8e782p-120f, 0x1.461a5cp-59f, 0x1.e6d042p-37f, 0.0f, 0x1.de5564p-34f,
     0.0f, 0.0f, 0.0f, 0x1.3127e4p-69f, 0.0f, 0.0f, 0x1.c80488p-87f, 0x1.7ccf6p-46f,
     0.0f, 0.0f, 0x1.4433a2p-113f, 0.0f, 0.0f, 0x1.ba0ddp-6f, 0x1.8128b2p-101f,
     0x1.135ae8p-38f, 0.0f, 0x1.e7c93p-51f, 0x1.25dee8p-65f, 0x1.f8f986p-102f, 0.0f,
     0x1.5f1f36p-67f, 0x1.48c584p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5881e2p-99f,
     0.0f, 0.0f, 0.0f, 0x1.5b87b8p-110f, 0x1.eb391cp-120f, 0.0f, 0.0f,
     0x1.e7d24ap-67f, 0x1.af4ee6p-24f, 0x1.2756c2p-7f, 0x1.55f04p-37f, 0.0f,
     0x1.338b3p-81f, 0x1.9e969ap-73f, 0x1.243ee4p-89f, 0.0f, 0x1.da757ap-62f,
     0x1.72c928p-44f, 0x1.5a483ap-120f, 0.0f, 0x1.d534a2p-18f, 0x1.8913f2p-77f,
     0x1.b08d46p-117f, 0x1.967c0ap-70f, 0x1.6764f8p-60f, 0.0f, 0.0f, 0x1.17f938p-19f,
     0.0f, 0.0f, 0.0f, 0x1.d7c17cp-84f, 0x1.c36618p-67f, 0x1.f55b24p-44f,
     0x1.497696p-92f, 0.0f, 0.0f, 0x1.6d0182p-5f, 0.0f, 0x1.6a00e6p-25f, 0.0f, 0.0f,
     0x1.fd7ee2p-3f, 0.0f, 0.0f, 0.0f, 0x1.f96388p-78f, 0x1.2c599ap-66f,
     0x1.2bce68p-28f, 0x1.a97f7ep-122f, 0x1.efeaf2p-107f, 0x1.69851ep-69f, 0.0f,
     0x1.a9462cp-39f, 0.0f, 0x1.bce55cp-87f, 0.0f, 0x1.7d330ap-116f, 0x1.f66984p-101f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8835e8p-25f, 0.0f, 0.0f, 0x1.101b16p-104f,
     0x1.e2ec58p-27f, 0x1.a28074p-103f, 0x1.97a3e6p-45f, 0x1.081d9cp-61f,
     0x1.39b6d6p-86f, 0x1.e527f8p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.de188ap-94f,
     0x1.29737cp-77f, 0x1.4c6638p-4f, 0.0f, 0.0f, 0x1.e60392p-62f, 0x1.a640f4p-87f,
     0.0f, 0x1.a6548ap-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fce97ep-118f, 0x1.22fap-121f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.11546ep-52f, 0x1.ace6aep-64f, 0x1.7da1f8p-113f,
     0x1.ade9d4p-10f, 0x1.1a7754p-52f, 0x1.548c5cp-110f, 0x1.fe8058p-44f, 0.0f, 0.0f,
     0x1.d968e4p-82f, 0x1.36d72ep-14f, 0x1.c47f98p-122f, 0x1.c481fep-121f, 0.0f,
     0x1.294a4ap-34f, 0.0f, 0.0f, 0x1.30c934p-44f, 0x1.fe67f8p-78f, 0.0f, 0.0f,
     0x1.eddf4ap-98f, 0.0f, 0.0f, 0.0f, 0x1.8a945p-60f, 0.0f, 0x1.cac6aap-25f, 0.0f,
     0x1.25e8e6p-72f, 0.0f, 0x1.7e2f4ap-2f, 0.0f, 0.0f, 0x1.a154b6p-87f, 0.0f, 0.0f,
     0.0f, 0x1.f69026p-7f, 0.0f, 0x1.a8da38p-46f, 0.0f, 0x1.a4828ap-122f, 0.0f,
     0x1.66429ep-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f232c6p-119f, 0x1p0f,
     0x1.288fa2p-81f
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
            tmp1 = Sleef_atanf8_u10kvx(tmp0);
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
    printf("Sleef_atanf8_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_atanf8_u10kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
