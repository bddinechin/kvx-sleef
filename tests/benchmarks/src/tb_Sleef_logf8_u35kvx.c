/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_logf8_u35kvx.c --function Sleef_logf8_u35kvx --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary32 --vector-size 8 \
 *     --function-input-vector-size 8 --bench --no-embedded-bin --target kv3
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
     0x1.bceb8p-27f, 0x1.35e0e4p-96f, 0x1.004ba4p-64f, 0x1.8f25bap-73f,
     0x1.72625ap-64f, 0.0f, 0x1.abc9e6p-114f, 0x1.0badcap-83f, 0.0f, 0.0f,
     0x1.86a5b6p-36f, 0x1.43e12ep-36f, 0.0f, 0.0f, 0x1.1c7e48p-79f, 0.0f, 0.0f, 0.0f,
     0x1.bb241cp-26f, 0x1.727fb8p-41f, 0x1.a4ce66p-35f, 0x1.b986dp-66f,
     0x1.3f0d44p-95f, 0.0f, 0.0f, 0x1.34db2ep-57f, 0.0f, 0.0f, 0x1.e9b946p-10f, 0.0f,
     0x1.a0488cp-6f, 0.0f, 0x1.5d624cp-6f, 0x1.b4f08ep-11f, 0.0f, 0x1.fb75b2p-115f,
     0x1.9bce04p-123f, 0x1.12b118p-72f, 0.0f, 0x1.8ac1d2p-6f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.321738p-58f, 0x1.e468ccp-45f, 0x1.0727c2p-41f, 0.0f, 0x1.fbbd96p-84f,
     0x1.df6ce4p-89f, 0.0f, 0x1.8a0e6ap-112f, 0.0f, 0x1.512268p-98f, 0x1.072926p-71f,
     0x1.b9195p-53f, 0.0f, 0.0f, 0x1.781a5ap-81f, 0.0f, 0x1.e74ebcp-15f, 0x1p0f, 0.0f,
     0x1.df892p-13f, 0.0f, 0x1.999adep-66f, 0x1.0e14eap-109f, 0x1.7e393cp-86f, 0.0f,
     0x1.4d52ecp-64f, 0.0f, 0x1.19c7dcp-21f, 0.0f, 0x1.ead18p-57f, 0x1.34a2bep-29f,
     0.0f, 0x1.a7f8d6p-26f, 0.0f, 0.0f, 0x1.7dd7bp-78f, 0.0f, 0x1.5b4dbep-79f,
     0x1.e1fb24p-51f, 0x1.3672eap-30f, 0.0f, 0x1.0fb8a4p-42f, 0.0f, 0.0f,
     0x1.b94b88p-117f, 0x1.0ba0dep-94f, 0x1.0ec018p-22f, 0x1.79a8bp-60f,
     0x1.b65448p-86f, 0.0f, 0.0f, 0.0f, 0x1.9f6b9ep-102f, 0x1.7a097p-64f,
     0x1.d9904ap-98f, 0.0f, 0.0f, 0x1.cb4d24p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0271bep-44f, 0x1p0f, 0.0f, 0x1.a674cep-61f, 0.0f, 0.0f, 0x1.6b377cp-53f,
     0x1.fa8bccp-31f, 0x1.860056p-17f, 0.0f, 0.0f, 0x1.e42b42p-37f, 0x1.b7674ap-44f,
     0.0f, 0.0f, 0.0f, 0x1.d1195p-21f, 0.0f, 0.0f, 0x1.d9d774p-24f, 0x1.d6b16cp-21f,
     0.0f, 0.0f, 0.0f, 0x1.52d0f4p-58f, 0.0f, 0.0f, 0.0f, 0x1.d1efc8p-124f, 0.0f,
     0x1.1df71cp-62f, 0x1.649b78p-34f, 0x1.9b46fap-72f, 0.0f, 0x1.4a278ap-42f,
     0x1.3bdc02p-81f, 0x1.925d6ap-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1fea28p-96f,
     0.0f, 0x1.42f06ep-108f, 0x1.d928a2p-58f, 0.0f, 0x1.2f89ecp-14f, 0x1.605f9cp-26f,
     0.0f, 0.0f, 0x1.391f6ap-25f, 0.0f, 0.0f, 0x1.3eeaf8p-20f, 0.0f, 0x1.e7032ep-117f,
     0.0f, 0.0f, 0x1.1f6e44p-99f, 0x1.91fd44p-92f, 0x1.bb88a6p-5f, 0.0f,
     0x1.648292p-86f, 0.0f, 0x1.a76b9ep-76f, 0x1.a8ab98p-56f, 0x1.efc5dp-27f, 0.0f,
     0x1p0f, 0.0f, 0x1.58ba16p-29f, 0x1.a405a6p-36f, 0x1.7f9e0ep-61f, 0x1.24cedp-68f,
     0x1.5317acp-58f, 0x1.58a01ap-18f, 0.0f, 0x1.19e99p-98f, 0x1.468eb8p-95f,
     0x1.140044p-38f, 0x1.763478p-93f, 0x1.1e444ep-88f, 0x1.a5edeep-61f, 0.0f, 0.0f,
     0x1.2c437ap-54f, 0.0f, 0.0f, 0.0f, 0x1.f3a7bp-32f, 0x1.977872p-37f, 0.0f, 0x1p0f,
     0.0f, 0x1.12f98p-77f, 0x1.1c9852p-83f, 0.0f, 0.0f, 0x1.a9fc3ap-65f, 0.0f, 0.0f,
     0x1.15910ep-118f, 0.0f, 0x1.85a3eap-1f, 0x1.691fd4p-22f, 0.0f, 0.0f,
     0x1.7ef75ap-57f, 0.0f, 0x1.24a9dcp-3f, 0x1.eaf538p-121f, 0.0f, 0.0f,
     0x1.6a981cp-52f, 0x1.0e3ee8p-55f, 0x1.f408dp-31f, 0.0f, 0.0f, 0.0f,
     0x1.e7474cp-30f, 0x1.fff698p-38f, 0.0f, 0.0f, 0.0f, 0x1.a00e48p-39f,
     0x1.874c74p-93f, 0x1.93923cp-105f, 0.0f, 0.0f, 0x1.a1e968p-3f, 0.0f,
     0x1.ec4b86p-13f, 0.0f, 0x1.17ed94p-23f, 0x1.8c051cp-76f, 0x1.0aa99p-119f,
     0x1.7d9398p-43f, 0x1.5f97c8p-95f, 0.0f, 0.0f, 0.0f, 0x1.14bbdp-59f,
     0x1.67ec6ap-38f, 0.0f, 0.0f, 0x1.c2a3c8p-119f, 0x1.6e5784p-24f, 0.0f,
     0x1.6dd798p-21f, 0x1.e6024ap-16f, 0.0f, 0.0f, 0x1.65c272p-99f, 0.0f, 0.0f, 0.0f,
     0x1.d36b58p-25f, 0.0f, 0.0f, 0.0f, 0x1.c096b8p-23f, 0.0f, 0.0f, 0x1.62fd7cp-34f,
     0x1.bcb82cp-121f, 0.0f, 0x1.ac094ep-75f, 0.0f, 0.0f, 0x1.fc0a58p-7f, 0.0f, 0.0f,
     0x1.a30db4p-69f, 0x1.2fab16p-19f, 0x1.76fe9ep-121f, 0x1.f23d74p-39f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.416592p-1f, 0x1.554c6cp-65f, 0.0f, 0.0f, 0.0f, 0x1.660884p-115f,
     0x1.fbabfep-29f, 0x1.bea012p-114f, 0.0f, 0.0f, 0x1.82caccp-118f, 0.0f, 0.0f,
     0.0f, 0x1.a65618p-107f, 0.0f, 0.0f, 0x1.8d9514p-54f, 0.0f, 0.0f, 0x1.a7fdbep-95f,
     0x1.1489d8p-61f, 0x1.b6e004p-110f, 0x1.da46dep-106f, 0.0f, 0.0f, 0.0f,
     0x1.a6fad4p-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.12ab88p-47f,
     0x1.fe50bep-51f, 0x1.4f0854p-48f, 0x1.1355fp-75f, 0x1.cad50ap-41f, 0.0f, 0.0f,
     0x1.549e68p-80f, 0.0f, 0.0f, 0x1.e17b6ep-92f, 0.0f, 0x1.b4df0ap-87f,
     0x1.47dd62p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7898f4p-18f, 0x1.e46328p-80f,
     0x1.625292p-4f, 0x1.400f3p-106f, 0x1.9f1612p-41f, 0.0f, 0x1.dd2e18p-36f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ec8bdep-23f, 0x1.8ac276p-110f, 0x1.a4a616p-112f,
     0x1.1eaa64p-66f, 0.0f, 0.0f, 0x1.be00aap-113f, 0.0f, 0.0f, 0x1.9b7adcp-27f, 0.0f,
     0.0f, 0x1.9e039p-50f, 0x1.6be838p-107f, 0x1.646eaap-31f, 0x1.f62052p-18f,
     0x1.32881p-67f, 0x1.bb7822p-8f, 0x1.556b14p-33f, 0.0f, 0.0f, 0x1.c93b6p-112f,
     0x1.57edap-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.66538ep-37f, 0.0f,
     0x1.19c4cep-11f, 0.0f, 0x1.f6a922p-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.33b638p-115f, 0x1.cf649p-18f, 0.0f, 0x1.7ad4ccp-32f, 0x1.f24a6cp-65f,
     0.0f, 0x1.ce3834p-25f, 0x1.b6a40ep-14f, 0.0f, 0x1.d2b69p-80f, 0.0f,
     0x1.ec85cep-75f, 0x1.9cde3ap-92f, 0x1.f47a64p-27f, 0x1.e5ffdcp-110f, 0.0f, 0.0f,
     0x1.9c0964p-107f, 0.0f, 0.0f, 0x1.c071dp-82f, 0.0f, 0x1.fc96d6p-115f, 0.0f,
     0x1.5271b6p-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.57d81p-26f,
     0x1.a7ff4ep-56f, 0x1.ed21cp-61f, 0x1.955b82p-20f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.971896p-121f, 0.0f, 0.0f, 0x1.5b2622p-39f, 0.0f, 0x1.62d59ep-36f, 0.0f, 0.0f,
     0x1.c6e29cp-47f, 0x1.361e96p-46f, 0.0f, 0x1.905474p-24f, 0x1.37f974p-93f, 0.0f,
     0.0f, 0x1.6ddcaep-52f, 0.0f, 0x1.5fbbb6p-12f, 0.0f, 0x1.658352p-14f,
     0x1.3d0714p-43f, 0.0f, 0.0f, 0.0f, 0x1.12c9c6p-48f, 0x1.515488p-12f, 0.0f, 0.0f,
     0x1.815d4ap-70f, 0.0f, 0.0f, 0.0f, 0x1.921adep-33f, 0.0f, 0x1.bd455ep-85f,
     0x1.762976p-77f, 0.0f, 0.0f, 0x1.7ea914p-79f, 0.0f, 0.0f, 0x1.7f30cep-58f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ee59e2p-73f, 0.0f, 0.0f, 0x1.0ae4ecp-3f, 0.0f, 0.0f, 0.0f,
     0x1.b7a4ecp-39f, 0x1.29f948p-56f, 0x1.3834a4p-18f, 0x1.72fbb4p-122f, 0.0f, 0.0f,
     0.0f, 0x1.c00bbcp-98f, 0x1.7b1fccp-58f, 0.0f, 0x1.481b12p-57f, 0x1.df411cp-6f,
     0x1.e3fc9ap-38f, 0x1.3b8cd8p-60f, 0.0f, 0x1.0eb4aep-121f, 0.0f, 0x1.822178p-37f,
     0x1.0ac318p-8f, 0.0f, 0x1.4841e2p-21f, 0.0f, 0x1.f0d856p-118f, 0x1.dd5e4ep-88f,
     0x1.67cbe8p-70f, 0.0f, 0x1.e554d4p-61f, 0x1.dd3e4cp-121f, 0x1.2190d4p-80f, 0.0f,
     0x1.5cd40ep-47f, 0x1.822512p-36f, 0.0f, 0x1.06a952p-106f, 0.0f, 0x1.26826ep-60f,
     0.0f, 0x1.962562p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.609db2p-94f,
     0x1.4aee44p-83f, 0x1.8754b4p-10f, 0x1.53c1d4p-55f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.87ceeap-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b1491cp-52f, 0.0f,
     0x1.92724cp-126f, 0x1.a108fep-102f, 0x1.a2469p-101f, 0x1.6466b8p-75f,
     0x1.f24ee4p-119f, 0x1.fc919cp-117f, 0x1.da88ep-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.124538p-58f, 0x1.fdaa9ep-41f, 0x1.7a4d26p-71f, 0.0f, 0.0f,
     0x1.b434fap-23f, 0.0f, 0.0f, 0x1.41ee5p-31f, 0x1.2f1f86p-83f, 0.0f,
     0x1.502c7ap-31f, 0x1.fa78c8p-95f, 0.0f, 0.0f, 0.0f, 0x1.4680d4p-68f,
     0x1.609f06p-56f, 0x1.6308fcp-7f, 0x1.0de1b8p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.235e36p-95f, 0x1.6cd37p-11f, 0.0f, 0x1.9e56cep-13f, 0.0f,
     0x1.7641a8p-40f, 0x1.dcafe8p-113f, 0x1.3173a6p-23f, 0.0f, 0.0f, 0x1.fce7fcp-121f,
     0.0f, 0.0f, 0.0f, 0x1.b5d28ap-67f, 0x1.67f82ap-85f, 0.0f, 0x1.d6315p-111f,
     0x1.3cb29p-73f, 0x1.70b3f2p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dd4f2cp-106f, 0.0f,
     0.0f, 0.0f, 0x1.f2310ap-113f, 0x1.1aeaacp-67f, 0.0f, 0.0f, 0x1.0bfdacp-43f, 0.0f,
     0x1.342224p-81f, 0.0f, 0.0f, 0x1.b5376cp-12f, 0.0f, 0.0f, 0.0f, 0x1.b35606p-4f,
     0x1.6317dep-64f, 0x1.9fe87ap-40f, 0x1.5cac2ap-21f, 0.0f, 0.0f, 0x1.7d20ecp-9f,
     0.0f, 0.0f, 0x1.15b354p-17f, 0x1.2959e6p-122f, 0x1.481d2cp-103f, 0x1.f57eaap-62f,
     0x1.0bafc8p-91f, 0.0f, 0.0f, 0.0f, 0x1.f7a046p-74f, 0.0f, 0x1.10228p-11f,
     0x1.55dc3p-4f, 0.0f, 0.0f, 0x1.fd7a58p-107f, 0.0f, 0x1.168714p-122f,
     0x1.8dbe1p-48f, 0.0f, 0.0f, 0x1.9b4052p-8f, 0.0f, 0.0f, 0.0f, 0x1.bea1bcp-119f,
     0.0f, 0x1.5d72fcp-87f, 0x1.289126p-23f, 0x1.d1c992p-50f, 0.0f, 0.0f,
     0x1.a80516p-87f, 0.0f, 0x1.9a42cp-97f, 0.0f, 0x1.f3616cp-126f, 0x1.f32688p-80f,
     0x1.3781d6p-15f, 0.0f, 0x1.27c31p-89f, 0.0f, 0x1.5c7ceap-20f, 0.0f, 0.0f, 0.0f,
     0x1.745202p-9f, 0x1.38bb2ap-114f, 0.0f, 0x1.37c462p-100f, 0.0f, 0.0f,
     0x1.cdce32p-86f, 0x1.6b8ea8p-82f, 0.0f, 0x1.82c532p-126f, 0x1.80217ap-76f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.1416a8p-24f, 0.0f, 0x1.f3366cp-117f, 0x1.529214p-126f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.1e07fp-82f, 0.0f, 0x1.282a18p-35f, 0.0f, 0.0f,
     0x1.9e1c02p-59f, 0x1.10a384p-126f, 0x1.7e22bcp-87f, 0.0f, 0.0f, 0.0f,
     0x1.6727d6p-96f, 0.0f, 0.0f, 0x1.212188p-81f, 0x1.7d808p-54f, 0x1.6b7d2ap-37f,
     0x1.d08166p-56f, 0.0f, 0x1.bc844ap-65f, 0.0f, 0.0f, 0x1.628284p-43f,
     0x1.45e54cp-62f, 0x1.4d58bap-81f, 0.0f, 0.0f, 0.0f, 0x1.c1a148p-104f,
     0x1.b58cc6p-27f, 0x1.9711fp-114f, 0x1.9ad622p-4f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ae5e5ep-71f, 0.0f, 0x1.5e0992p-89f, 0x1.094ef2p-90f, 0x1.233f4cp-75f,
     0x1.1abb6p-120f, 0x1.0e21fp-119f, 0.0f, 0.0f, 0x1.0f7caep-68f, 0.0f,
     0x1.17974cp-24f, 0.0f, 0.0f, 0x1.b9501ap-15f, 0x1.de53ep-33f, 0x1.b3d16ap-60f,
     0x1.501daap-34f, 0x1.678fa8p-91f, 0x1.0e8d04p-85f, 0.0f, 0.0f, 0x1.5ddb44p-125f,
     0.0f, 0.0f, 0x1.490312p-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6592dap-98f, 0x1.5384bap-76f, 0x1.08ef3ap-122f, 0x1.8c1f52p-56f, 0.0f,
     0x1.340102p-107f, 0x1.50c5f2p-42f, 0.0f, 0.0f, 0x1.3fd45ep-77f, 0.0f,
     0x1.d08128p-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.34934ap-12f, 0.0f,
     0.0f, 0x1.aebbap-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.53466cp-114f, 0x1.014e72p-13f,
     0.0f, 0x1.6b4e42p-108f, 0x1.75f7aep-48f, 0x1.685b74p-43f, 0x1.90f51cp-24f,
     0x1.4c2f02p-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.be40c2p-73f, 0.0f, 0.0f,
     0x1.eef50ep-13f, 0x1.17ac38p-20f, 0x1.a82784p-29f, 0.0f, 0.0f, 0x1.08e026p-42f,
     0.0f, 0.0f, 0x1.dc46aep-11f, 0x1.62c78p-92f, 0.0f, 0x1.71d7a6p-87f, 0.0f, 0.0f,
     0.0f, 0x1.589674p-44f, 0.0f, 0x1.4620f4p-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0061bap-7f, 0x1.cd3aep-112f, 0.0f, 0.0f, 0x1.9386a8p-85f, 0x1.78ecc6p-36f,
     0x1.3247dap-119f, 0.0f, 0.0f, 0.0f, 0x1.f612f6p-103f, 0x1.fc08c6p-100f, 0.0f,
     0x1.87575cp-112f, 0x1.3fd73ep-112f, 0.0f, 0x1.0c88aap-33f, 0x1.9e30f4p-106f,
     0x1.29869ep-54f, 0.0f, 0.0f, 0.0f, 0x1.e819c2p-91f, 0.0f, 0.0f, 0x1.29c73p-42f,
     0.0f, 0.0f, 0x1.a5af7ap-89f, 0.0f, 0.0f, 0x1.19de28p-49f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e27c42p-112f, 0.0f, 0x1.9615dap-12f, 0x1.0b8c9p-45f, 0.0f, 0.0f, 0.0f,
     0x1.651feep-60f, 0x1.bf30d2p-17f, 0x1.178158p-13f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b2e69cp-70f, 0x1.3af204p-69f, 0.0f, 0.0f, 0.0f, 0x1.0ee8dep-32f,
     0x1.47903ap-101f, 0x1.6cb4ccp-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.830998p-120f,
     0x1.124ebep-78f, 0.0f, 0x1.4cb6ap-13f, 0.0f, 0.0f, 0x1.56d4bap-27f,
     0x1.1ad442p-25f, 0.0f, 0.0f, 0x1.4c7108p-59f, 0x1.2fa9d4p-73f, 0x1.ca48aap-108f,
     0.0f, 0x1.f085c4p-83f, 0.0f, 0x1.d4b41cp-52f, 0.0f, 0x1.d569a8p-69f,
     0x1.1bf3e2p-92f, 0.0f, 0x1.8694cp-120f, 0x1.ed0298p-72f, 0x1.03cf1cp-35f, 0.0f,
     0.0f, 0x1.45581ep-21f, 0x1.d0946p-23f, 0.0f, 0.0f, 0x1.6fca8cp-95f,
     0x1.fce5bap-39f, 0x1.51b938p-86f, 0.0f, 0x1.0cd1bep-48f, 0x1.7249b8p-28f,
     0x1.da47e2p-115f, 0x1.ef222cp-32f, 0.0f, 0.0f, 0x1.301eacp-33f, 0x1.fb7798p-80f,
     0.0f, 0x1.10b5p-46f, 0.0f, 0x1.83baacp-35f, 0x1.0d9f9cp-63f, 0x1.3642f4p-87f,
     0x1.e5485p-74f, 0x1.097cd2p-82f, 0x1.630614p-64f, 0x1.b6efcep-9f,
     0x1.8f9d5ep-124f, 0x1.5772ecp-110f, 0.0f, 0.0f, 0x1.d003ecp-109f,
     0x1.56cce4p-93f, 0x1.d5f4f8p-13f, 0.0f, 0x1.ee11fap-110f, 0x1.d443f2p-70f,
     0x1.fc142ep-53f, 0.0f, 0x1.e7b15p-78f, 0x1.372256p-121f, 0.0f, 0x1.2631eap-88f,
     0x1.0b9d76p-25f, 0.0f, 0.0f, 0x1.7695a6p-7f, 0x1.f481a4p-124f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ebf6bcp-102f, 0.0f, 0x1.8c8d44p-38f, 0.0f, 0.0f, 0.0f, 0x1.a50a7ep-81f,
     0.0f, 0.0f, 0x1.3151aep-7f, 0.0f, 0x1.9ba3bcp-89f, 0x1.4ab5cp-45f, 0.0f, 0.0f,
     0.0f, 0x1.2f79fp-47f, 0x1.7d8882p-121f, 0x1.feb80cp-22f, 0x1.a9bb6ep-60f, 0.0f,
     0x1.204d58p-120f, 0.0f, 0.0f, 0.0f, 0x1.bdf9a2p-87f, 0x1.a1d69ep-95f,
     0x1.d67788p-99f, 0.0f, 0x1.5536dap-41f, 0x1.cb87e8p-5f, 0x1.70f1aap-34f
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
            tmp1 = Sleef_logf8_u35kvx(tmp0);
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
    printf("Sleef_logf8_u35kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_logf8_u35kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
