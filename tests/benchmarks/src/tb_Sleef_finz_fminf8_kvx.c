/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_fminf8_kvx.c --function Sleef_finz_fminf8_kvx \
 *     --arity 2 --headers sleef.h,ml_support_lib.h --input-formats \
 *     binary32,binary32 --vector-size 8 --function-input-vector-size 8 \
 *     --bench --no-embedded-bin --target kv3
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
     0x1.49fb1ap-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ef8f36p-88f, 0.0f, 0x1.49ac4p-91f,
     0.0f, 0.0f, 0.0f, 0x1.8e1846p-4f, 0x1.863696p-32f, 0x1.504df8p-115f,
     0x1.c0a446p-50f, 0.0f, 0x1.17311ep-29f, 0.0f, 0x1.a2bffp-71f, 0x1.3831ecp-118f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.243228p-68f, 0.0f, 0.0f, 0x1.f15eap-53f,
     0.0f, 0.0f, 0x1.958dbcp-22f, 0x1.5183d2p-26f, 0x1.a7ffacp-112f, 0.0f,
     0x1.5f2116p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b5e18ap-37f, 0.0f, 0.0f,
     0x1.0bc98p-25f, 0x1.12ffe2p-42f, 0x1.2e14b6p-41f, 0.0f, 0x1.560ce4p-124f, 0.0f,
     0x1.859bc6p-83f, 0x1.2b4398p-66f, 0x1.27100cp-5f, 0.0f, 0x1.094fa4p-122f,
     0x1.d4c8dcp-31f, 0.0f, 0x1.ac840cp-61f, 0x1.40f64ap-42f, 0x1.fd1cacp-46f,
     0x1.bf5468p-62f, 0.0f, 0x1.abea2ap-81f, 0x1.fc0916p-33f, 0x1.87129ep-31f,
     0x1.adc8aap-78f, 0x1.4c0d6ep-124f, 0x1.0ce3e2p-107f, 0x1.f81dbcp-78f,
     0x1.9159ccp-37f, 0x1.62e47p-99f, 0x1.67eef4p-102f, 0.0f, 0x1.cc9c64p-68f, 0.0f,
     0x1.e5a768p-30f, 0.0f, 0.0f, 0.0f, 0x1.0b1b22p-100f, 0x1.8ac568p-124f, 0.0f,
     0x1.31540ap-86f, 0x1.80a066p-96f, 0.0f, 0.0f, 0.0f, 0x1.8c9dacp-7f,
     0x1.42d5f8p-88f, 0.0f, 0x1.d48daap-47f, 0.0f, 0.0f, 0.0f, 0x1.418fe8p-88f,
     0x1.2e7cdp-82f, 0.0f, 0x1.001e8cp-113f, 0x1.33bdfp-121f, 0x1.cab45ap-42f,
     0x1.a6db0ep-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9f25d6p-101f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f2bf56p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1a38b8p-126f, 0.0f, 0.0f,
     0x1.d195fep-116f, 0x1.f5a542p-115f, 0.0f, 0x1.f5a774p-96f, 0x1.44baeep-36f,
     0x1.d573f4p-31f, 0x1.577ff6p-61f, 0.0f, 0x1.d5760ep-72f, 0.0f, 0.0f,
     0x1.d7e33ep-10f, 0x1.6376dcp-41f, 0x1.a0cf38p-70f, 0.0f, 0.0f, 0.0f,
     0x1.bfcda8p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.22ada4p-15f, 0.0f, 0.0f,
     0x1.f5c054p-85f, 0x1.fa4b0cp-72f, 0.0f, 0x1.0479fp-74f, 0.0f, 0x1.2b2e3cp-118f,
     0.0f, 0.0f, 0x1.525be6p-7f, 0.0f, 0x1.e10e2ep-110f, 0.0f, 0.0f, 0x1.771884p-3f,
     0x1.4eb126p-73f, 0.0f, 0x1.ec3daap-105f, 0.0f, 0.0f, 0x1.4d0ae4p-28f,
     0x1.946e46p-28f, 0.0f, 0x1.5b2436p-118f, 0.0f, 0.0f, 0x1.c5f1cep-102f, 0.0f,
     0x1.1814bap-39f, 0.0f, 0x1.caf236p-80f, 0x1.146574p-61f, 0x1.3761d6p-42f, 0.0f,
     0x1.8e95b6p-1f, 0.0f, 0x1.2c5bcap-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.530e74p-58f,
     0x1.d11a82p-80f, 0.0f, 0x1.a4a1eep-114f, 0x1.2d217p-36f, 0.0f, 0x1.570fa8p-48f,
     0.0f, 0x1.07a0f8p-50f, 0.0f, 0x1.f909d2p-117f, 0x1.c096fcp-57f, 0x1.65f946p-107f,
     0x1.819c16p-74f, 0x1.005d7p-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ec1304p-48f,
     0x1.512aaap-29f, 0.0f, 0x1.dbe7ap-8f, 0.0f, 0x1.2f22dep-54f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.6f04b6p-65f, 0x1.d00494p-104f, 0x1.fa42b4p-90f, 0.0f, 0x1.f219e2p-26f,
     0x1.8aa57ap-24f, 0.0f, 0.0f, 0x1.0036p-59f, 0.0f, 0x1.8aa55cp-53f,
     0x1.ad75eap-68f, 0x1.96e0eep-123f, 0x1.f9652cp-58f, 0.0f, 0x1.0a7ebap-27f,
     0x1.874ac8p-45f, 0.0f, 0.0f, 0.0f, 0x1.85202ap-15f, 0.0f, 0.0f, 0.0f,
     0x1.11ced6p-84f, 0.0f, 0x1.0211dap-39f, 0.0f, 0x1.bc1e5ep-42f, 0x1.700468p-84f,
     0x1.4446b2p-29f, 0x1.5bad16p-59f, 0.0f, 0.0f, 0.0f, 0x1.acc07ep-74f,
     0x1.5e82a6p-89f, 0x1.453e94p-82f, 0.0f, 0x1.87e424p-74f, 0.0f, 0x1.6d1d26p-26f,
     0.0f, 0x1.5ba09ap-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ad3438p-54f, 0.0f, 0.0f,
     0x1.75f9aap-97f, 0.0f, 0.0f, 0x1.ea9ae8p-52f, 0x1.d0d12cp-121f, 0.0f,
     0x1.f5eabap-56f, 0x1.82f5ecp-85f, 0x1.c23522p-59f, 0x1.d1c0ccp-110f, 0.0f,
     0x1.e70edp-48f, 0x1.b655dap-51f, 0.0f, 0.0f, 0x1.e2e154p-122f, 0x1.6574dp-71f,
     0.0f, 0x1.8913c4p-116f, 0x1.9153a4p-47f, 0x1.4a7a94p-97f, 0x1p0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a9ac12p-56f, 0.0f, 0.0f, 0x1.8cca46p-3f, 0x1.2b1a2ep-52f,
     0x1.b4713ap-23f, 0.0f, 0x1.8ef92ap-42f, 0.0f, 0.0f, 0x1.758c96p-17f,
     0x1.20e0bp-12f, 0x1.ae11f4p-43f, 0.0f, 0.0f, 0x1.a691ccp-61f, 0.0f,
     0x1.1bc7a6p-10f, 0x1.cf8dc4p-9f, 0.0f, 0.0f, 0.0f, 0x1.6bb698p-52f, 0.0f,
     0x1.12c7a8p-93f, 0x1.5701dcp-19f, 0.0f, 0.0f, 0.0f, 0x1.9f0cf2p-23f,
     0x1.ddd7e8p-116f, 0.0f, 0.0f, 0.0f, 0x1.23e9fp-104f, 0x1.6dc474p-77f,
     0x1.1ce166p-7f, 0x1.497a92p-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9a1a4cp-8f,
     0x1.3f95f8p-2f, 0.0f, 0.0f, 0.0f, 0x1.dcdfecp-59f, 0.0f, 0.0f, 0x1.b53282p-117f,
     0x1.eb2b9ep-87f, 0.0f, 0.0f, 0x1.93bc6ep-98f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.92c75ap-58f, 0.0f, 0x1.33956p-65f, 0.0f, 0.0f, 0x1.67a1dep-118f, 0.0f,
     0x1.116c5ep-90f, 0x1.46aaep-86f, 0.0f, 0.0f, 0x1.45b73ep-5f, 0x1.c4764ap-50f,
     0.0f, 0.0f, 0x1.bbdb52p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5e1a1ep-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ddef32p-56f, 0x1.ebc6c4p-102f,
     0x1.c2aa3ep-115f, 0x1.f4011ap-50f, 0.0f, 0x1.30e50ap-2f, 0x1.b4ee3ep-123f, 0.0f,
     0x1.62efd8p-119f, 0x1.6fa826p-100f, 0.0f, 0x1.c930c8p-66f, 0x1.4dd1c8p-119f,
     0x1.42d27ap-109f, 0x1.c99f76p-3f, 0x1.d1b91p-124f, 0x1.bb2cb2p-53f, 0.0f, 0.0f,
     0x1.632914p-2f, 0x1.5157e4p-13f, 0x1.567044p-64f, 0x1.8dfc1p-94f,
     0x1.6352bap-106f, 0x1.e0418cp-72f, 0x1.30afc2p-47f, 0.0f, 0x1.de61a6p-25f, 0.0f,
     0.0f, 0x1.ca638ap-49f, 0.0f, 0x1.95199ap-42f, 0.0f, 0.0f, 0x1.3afed2p-72f,
     0x1.b0da06p-74f, 0.0f, 0x1.55400ep-115f, 0x1.ace646p-29f, 0.0f, 0x1.9439e2p-48f,
     0.0f, 0x1.0d28f6p-13f, 0.0f, 0x1.0993fep-2f, 0x1.b1a4d8p-61f, 0x1.7197bcp-17f,
     0x1.8e9a3ap-37f, 0x1.85cd56p-125f, 0x1.2a10aap-105f, 0x1.f43d2ap-113f,
     0x1.7612c6p-116f, 0.0f, 0x1.d7a9acp-118f, 0x1.368c92p-14f, 0x1.6168ecp-99f, 0.0f,
     0x1.0e88b4p-2f, 0.0f, 0x1.46327ap-44f, 0.0f, 0x1.72e906p-104f, 0.0f,
     0x1.927fp-63f, 0x1.d90102p-17f, 0x1.40c30cp-113f, 0x1.8095b6p-36f, 0.0f, 0.0f,
     0x1.fbd33p-122f, 0x1.464c0ap-103f, 0.0f, 0.0f, 0.0f, 0x1.2924fcp-107f, 0.0f,
     0x1.118daep-19f, 0.0f, 0x1.e1ea36p-29f, 0.0f, 0.0f, 0x1.05a092p-37f, 0.0f, 0.0f,
     0x1.028178p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.444af4p-1f, 0.0f,
     0x1.722614p-108f, 0.0f, 0x1.e6fa5p-75f, 0x1.f337a2p-102f, 0x1.2008f2p-111f, 0.0f,
     0.0f, 0x1.0ce8eep-111f, 0x1.e364b2p-90f, 0.0f, 0x1.95fe08p-7f, 0x1.98e472p-3f,
     0x1.d1d7d6p-31f, 0.0f, 0.0f, 0x1.6f9c74p-29f, 0.0f, 0x1.c1a606p-55f,
     0x1.f5ee8cp-12f, 0x1.9998a4p-75f, 0x1.c8111p-67f, 0x1.2d65ap-52f,
     0x1.70e6c8p-20f, 0x1.ad4672p-60f, 0x1.ac0586p-58f, 0x1.704c08p-12f,
     0x1.5e29bp-14f, 0.0f, 0.0f, 0x1.6a1d2ap-45f, 0.0f, 0x1.e89ddcp-108f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.bebe3ap-14f, 0.0f, 0x1.266e6cp-65f, 0.0f, 0x1.1e11p-107f,
     0x1.b467b8p-36f, 0.0f, 0x1.695848p-38f, 0x1.54d178p-42f, 0x1.b50a3cp-114f, 0.0f,
     0x1.31ec74p-13f, 0x1.0a4448p-20f, 0.0f, 0.0f, 0x1.773b42p-119f, 0x1.779d6p-102f,
     0x1.a0f4ep-85f, 0.0f, 0.0f, 0.0f, 0x1.2859dep-54f, 0x1.90aec6p-67f, 0.0f, 0.0f,
     0x1.df723ep-2f, 0x1.27d576p-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4a958ap-15f,
     0x1.87740ep-24f, 0x1.3db632p-49f, 0.0f, 0x1.b3a7fap-104f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.5b2118p-64f, 0x1.362052p-6f, 0x1.830a86p-24f, 0x1.8ce9bp-39f,
     0x1.cd0c0ep-125f, 0.0f, 0.0f, 0.0f, 0x1.6f23e2p-109f, 0.0f, 0.0f, 0.0f,
     0x1.5865ecp-125f, 0x1.187484p-76f, 0x1.525f1cp-36f, 0x1.b28ecap-48f, 0.0f, 0.0f,
     0x1.50eedp-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5bd506p-87f, 0.0f, 0x1.fa9f7ep-65f,
     0x1.aac178p-52f, 0.0f, 0x1.ec109cp-40f, 0.0f, 0x1.cdac94p-33f, 0.0f, 0.0f,
     0x1.27a3bep-34f, 0x1.cc0b9ap-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.766724p-99f, 0.0f,
     0.0f, 0x1.d18042p-104f, 0x1.8fcaacp-38f, 0.0f, 0x1.7462ecp-46f, 0x1.7260cap-90f,
     0.0f, 0.0f, 0x1.f41b58p-109f, 0.0f, 0.0f, 0x1.178bcep-6f, 0.0f, 0x1.aafbd4p-65f,
     0x1.599524p-37f, 0.0f, 0x1.7909e6p-59f, 0x1.ef57a4p-23f, 0.0f, 0x1.a3659p-95f,
     0.0f, 0.0f, 0x1.c7d366p-3f, 0.0f, 0.0f, 0.0f, 0x1.50869p-77f, 0.0f,
     0x1.d9df5cp-41f, 0x1.88cbep-126f, 0x1.56389p-11f, 0x1.40a9b8p-98f, 0.0f,
     0x1.95c822p-122f, 0.0f, 0.0f, 0.0f, 0x1.64fdf6p-24f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.19530ep-68f, 0.0f, 0.0f, 0x1.315e4ep-86f, 0x1.e34502p-79f, 0.0f, 0.0f, 0.0f,
     0x1.4053ep-105f, 0x1.fd40ecp-106f, 0x1.417fb6p-125f, 0x1.a5bbdcp-121f, 0x1p0f,
     0.0f, 0x1.fc3f22p-95f, 0x1.33c762p-86f, 0.0f, 0.0f, 0x1.4df778p-23f, 0.0f, 0.0f,
     0x1.6e20cp-3f, 0x1.70e25ap-106f, 0.0f, 0.0f, 0.0f, 0x1.c9c99p-125f,
     0x1.df7092p-4f, 0x1.576212p-111f, 0x1.130fe8p-49f, 0.0f, 0x1.a7032ep-88f,
     0x1.eba88ep-80f, 0x1.b1b69ap-124f, 0.0f, 0.0f, 0.0f, 0x1.ececfap-51f,
     0x1.4e404ep-97f, 0x1p0f, 0x1.8af1ep-2f, 0x1.fc0dcp-122f, 0x1.a03266p-116f,
     0x1.8d3922p-79f, 0.0f, 0.0f, 0x1.e5fb24p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4a96e4p-89f, 0x1.de836cp-76f, 0.0f, 0x1.40196ep-43f, 0.0f, 0x1.bfe31ep-103f,
     0.0f, 0.0f, 0x1.754b52p-11f, 0x1.11a254p-110f, 0.0f, 0x1.19861ap-41f,
     0x1.625d8ep-62f, 0x1.921dd2p-87f, 0.0f, 0.0f, 0.0f, 0x1.b34c32p-113f, 0.0f,
     0x1.961e62p-6f, 0x1.b00fccp-16f, 0.0f, 0.0f, 0.0f, 0x1.fce62ep-86f, 0.0f,
     0x1.c2b40ap-19f, 0x1.7d1e14p-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7faddep-3f,
     0x1.ec0d62p-46f, 0x1.d3c148p-37f, 0x1.d6dfa6p-107f, 0x1.d4972p-104f, 0.0f,
     0x1.db463cp-34f, 0.0f, 0x1.81b1d4p-72f, 0.0f, 0x1.7b0ba6p-24f, 0.0f, 0.0f, 0.0f,
     0x1.06b404p-104f, 0x1.2adc82p-20f, 0.0f, 0.0f, 0x1.bb1f54p-54f, 0x1.a1cf82p-123f,
     0x1.e891d8p-21f, 0.0f, 0x1.2c69fep-57f, 0x1.3d0c0ap-76f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9f74ap-34f, 0.0f, 0.0f, 0.0f, 0x1.3bc1bap-53f, 0x1.f42342p-105f,
     0x1.7dap-121f, 0x1.44d3f4p-78f, 0x1.34a498p-5f, 0.0f, 0x1.c9a54ap-117f, 0.0f,
     0.0f, 0.0f, 0x1.f5724ep-51f, 0.0f, 0x1.000664p-87f, 0.0f, 0x1.a9ba42p-99f, 0.0f,
     0.0f, 0.0f, 0x1.4d14a4p-5f, 0.0f, 0x1.ab810ap-105f, 0.0f, 0.0f, 0x1.e3eb04p-96f,
     0x1.25f156p-20f, 0x1.535d0ap-69f, 0x1.2da33p-65f, 0x1.55d5fep-27f, 0.0f,
     0x1.aad9a8p-116f, 0x1.98cc94p-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d35edp-28f, 0.0f,
     0x1.0d801cp-65f, 0.0f, 0.0f, 0x1.3c6cf8p-109f, 0x1.ae5e5p-112f, 0x1.94e1c2p-57f,
     0.0f, 0x1.6f6ae2p-100f, 0.0f, 0.0f, 0x1.beb6a6p-101f, 0x1.5a2692p-74f, 0.0f,
     0x1.ce9fb8p-67f, 0.0f, 0.0f, 0x1.715b74p-24f, 0.0f, 0.0f, 0x1.f5f2fep-90f,
     0x1.771ab6p-124f, 0x1.9311cp-22f, 0.0f, 0x1.59613p-53f, 0.0f, 0.0f,
     0x1.840b06p-75f, 0.0f, 0x1.28d8a6p-76f, 0x1.43810cp-32f, 0x1.ec17b6p-19f,
     0x1.c0909ap-74f, 0x1.f4a8ecp-101f, 0x1.d12a78p-118f, 0.0f, 0.0f, 0x1.a26916p-46f,
     0.0f, 0.0f, 0x1.eb602cp-32f, 0x1.897f94p-3f, 0.0f, 0x1.8e53bcp-61f,
     0x1.c46a1p-70f, 0.0f, 0.0f, 0.0f, 0x1.6035b8p-119f, 0x1.ea538ap-94f,
     0x1.487748p-119f, 0x1.ed0b5cp-30f, 0.0f, 0x1.f18722p-89f, 0x1.441d3cp-61f,
     0x1.231a82p-98f, 0x1.9a4d6p-117f, 0.0f, 0.0f, 0x1.fc3766p-2f, 0.0f,
     0x1.45fa84p-51f, 0.0f, 0.0f, 0.0f, 0x1.f9a1ecp-95f, 0.0f, 0x1.73334ap-68f, 0.0f,
     0x1.afa7ecp-89f, 0x1.35b33cp-57f, 0.0f, 0.0f, 0.0f, 0x1.65db26p-118f, 0.0f,
     0x1.3407p-75f, 0.0f, 0x1.1ed1acp-45f, 0.0f, 0.0f, 0x1.693008p-24f,
     0x1.167c0ap-16f, 0.0f, 0.0f, 0x1.80e88p-113f, 0x1.04a044p-115f, 0x1.71fee6p-51f,
     0x1.1501cp-76f, 0x1.6928b8p-69f, 0.0f, 0x1.9c0c9cp-65f, 0.0f, 0.0f,
     0x1.a0ece6p-94f, 0.0f, 0x1.89bfb2p-75f, 0x1.0cda86p-66f, 0x1.96cd02p-105f,
     0x1.15e0f4p-7f, 0x1.d85d42p-54f, 0.0f, 0.0f, 0x1.e06134p-68f, 0.0f, 0.0f,
     0x1.0a39e8p-51f, 0.0f, 0.0f, 0.0f, 0x1.4fbc48p-25f, 0x1.a1397ap-110f, 0x1p0f,
     0.0f, 0x1.71c4c4p-71f, 0.0f, 0x1.1ae73p-70f, 0.0f, 0.0f, 0.0f, 0x1.059f28p-87f,
     0.0f, 0x1.2b5254p-57f, 0.0f, 0x1.bc2e18p-73f, 0.0f, 0x1.da303ap-111f, 0.0f,
     0x1.34db1ap-94f, 0x1.a9f118p-35f, 0x1.0a8e82p-117f, 0x1.7847ep-31f,
     0x1.e620fap-56f, 0.0f, 0x1.cc7c42p-4f, 0.0f, 0.0f, 0.0f, 0x1.f06ae8p-124f,
     0x1.35933cp-45f, 0.0f, 0x1.c526p-115f, 0x1.eb2a5ep-18f, 0.0f, 0.0f,
     0x1.97c40ep-124f, 0.0f, 0x1.6d2644p-23f, 0.0f, 0.0f, 0x1.b054dap-87f, 0.0f, 0.0f,
     0.0f, 0x1.1b7a2cp-45f, 0x1.f75a76p-100f, 0.0f, 0x1.e7c73ep-65f, 0x1.1d28fp-97f,
     0.0f, 0x1.7206acp-21f, 0x1.772b22p-80f, 0x1.2a2aeap-33f, 0x1.3ec872p-5f,
     0x1.b16076p-85f, 0.0f, 0.0f, 0x1.39fa24p-57f, 0x1.c6a172p-31f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.4eb72p-58f, 0.0f, 0x1.2b03cap-35f, 0x1.1c1ba8p-63f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.435d34p-61f, 0x1.8f0b4p-90f, 0x1.db683ap-77f, 0.0f,
     0x1.ff5f12p-47f, 0.0f, 0.0f, 0x1.17597p-11f, 0.0f, 0.0f, 0x1.16186cp-119f, 0.0f,
     0x1.fac814p-123f, 0.0f, 0x1.b3309p-4f, 0.0f, 0.0f, 0.0f, 0x1.543ee8p-1f, 0.0f,
     0.0f, 0.0f, 0x1.7f6bd6p-62f, 0.0f, 0x1.2065a2p-17f, 0.0f, 0.0f, 0.0f,
     0x1.07e6dep-81f, 0.0f, 0.0f, 0.0f, 0x1.2d6608p-34f, 0.0f, 0x1.ddf8a2p-120f, 0.0f,
     0.0f, 0x1.cf970ep-123f
};
static const float external_bench_wrapper_input_table_arg1[1008]  = {
     0x1.defb4ep-23f, 0x1.129888p-49f, 0x1.7adbdap-8f, 0x1.a7233ep-52f,
     0x1.1ae644p-105f, 0x1.756a9ep-8f, 0x1.3f92eap-42f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d4346cp-56f, 0.0f, 0x1.4fd104p-46f, 0x1.281594p-37f, 0x1.9f455ep-35f,
     0x1.41f1e4p-126f, 0.0f, 0x1.7fe81ep-44f, 0x1.38cf74p-41f, 0.0f, 0x1.317442p-39f,
     0x1.f8a438p-118f, 0x1.58fc7ep-114f, 0x1.7ebc04p-21f, 0.0f, 0x1.196982p-6f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.008e22p-3f, 0.0f, 0x1.e40188p-18f, 0x1.b32658p-108f,
     0x1.c98c12p-44f, 0x1.f9ea64p-35f, 0x1.7bdc78p-29f, 0.0f, 0x1.f3244ep-20f,
     0x1.5133a8p-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.857942p-88f, 0x1.4d14bap-11f, 0.0f,
     0x1.d543bcp-13f, 0x1.3fe02ep-10f, 0x1.789058p-16f, 0x1.152e8cp-22f, 0.0f, 0.0f,
     0x1.ae5a8p-64f, 0x1.ef75a8p-17f, 0x1.cb1c7ap-83f, 0.0f, 0x1.f071ep-98f,
     0x1.1783ap-120f, 0.0f, 0.0f, 0.0f, 0x1.1fc806p-98f, 0.0f, 0.0f, 0x1.06a872p-63f,
     0x1.ae938ep-79f, 0.0f, 0.0f, 0x1.7e9a96p-109f, 0x1.2a2f58p-4f, 0.0f, 0.0f,
     0x1.1008f6p-51f, 0x1.f432cp-118f, 0x1.82cb28p-17f, 0.0f, 0x1.06e7dap-79f,
     0x1.98910cp-1f, 0.0f, 0x1.df077ep-88f, 0x1.45ee98p-88f, 0.0f, 0.0f,
     0x1.f4527p-69f, 0x1.1679bep-47f, 0.0f, 0.0f, 0x1.e09f8cp-25f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.433126p-113f, 0x1.1d4b7ep-83f, 0x1.d6e69cp-66f, 0x1.0bbb2ap-11f,
     0x1.44efdcp-99f, 0x1.da20e8p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7de57p-74f,
     0x1.13b182p-75f, 0.0f, 0x1.a27412p-92f, 0.0f, 0x1.53452ep-65f, 0.0f,
     0x1.d6e6b8p-4f, 0.0f, 0x1.f2caaep-123f, 0x1.02b2eep-101f, 0.0f, 0x1.e1c842p-20f,
     0.0f, 0.0f, 0x1.41cac6p-81f, 0x1.7054d8p-29f, 0.0f, 0.0f, 0.0f, 0x1.9f99dp-21f,
     0x1.0dec44p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7c9128p-39f, 0x1.60ea48p-9f,
     0x1.7a4858p-76f, 0.0f, 0x1.accb0cp-104f, 0x1.461808p-108f, 0.0f,
     0x1.9f27bap-103f, 0.0f, 0.0f, 0x1.b3e83ap-15f, 0.0f, 0.0f, 0x1.7b18e6p-76f,
     0x1.7434fap-124f, 0.0f, 0.0f, 0x1.42d912p-83f, 0.0f, 0.0f, 0x1.4a061ep-116f,
     0x1.e9fecp-74f, 0x1.bce068p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e4766ap-89f,
     0x1.4b46dep-54f, 0x1.95f6dap-79f, 0x1.bcd816p-10f, 0.0f, 0x1.72048p-118f, 0.0f,
     0x1.140e9ep-120f, 0.0f, 0x1.bc1ee2p-43f, 0x1.f1a9fep-28f, 0x1.3189dp-111f,
     0x1.ba07c8p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.570dcap-105f, 0x1.9d72a2p-90f,
     0x1.16c55ap-124f, 0.0f, 0.0f, 0x1.aecd0ap-24f, 0.0f, 0x1.d37b8ep-51f,
     0x1.1e6022p-52f, 0.0f, 0.0f, 0x1.46621ep-118f, 0x1.e2346ap-109f, 0x1.c22b0ep-87f,
     0x1.d85964p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5c83aap-109f,
     0x1.df87f4p-40f, 0x1.601c86p-101f, 0x1.15df38p-72f, 0x1.86503ep-84f,
     0x1.19abdep-97f, 0x1.4124acp-71f, 0x1.6d9ff2p-91f, 0x1.62b5fcp-25f,
     0x1.ac7d4ep-18f, 0.0f, 0x1.9f8104p-113f, 0.0f, 0.0f, 0.0f, 0x1.70afc2p-27f, 0.0f,
     0x1.74925cp-114f, 0x1.5c0f36p-64f, 0.0f, 0.0f, 0x1.332854p-40f, 0.0f,
     0x1.1adc22p-74f, 0.0f, 0x1.9a8d06p-2f, 0.0f, 0x1.c3669p-48f, 0x1.70e9f2p-3f,
     0.0f, 0.0f, 0x1.a65f2ep-22f, 0x1.fec5p-25f, 0x1.0e3a82p-9f, 0.0f,
     0x1.6dc3eep-35f, 0x1.1995ap-26f, 0x1.c8a18ep-32f, 0x1.6ada88p-13f,
     0x1.415f98p-27f, 0x1.1f11cep-32f, 0x1.880b7cp-102f, 0x1.5b1e0ep-50f,
     0x1.6b8f8ep-24f, 0x1.11bf6p-89f, 0x1.646008p-97f, 0x1.d26364p-39f, 0.0f,
     0x1.63602cp-19f, 0x1.baaafep-65f, 0.0f, 0x1.e5e7dp-94f, 0.0f, 0.0f, 0.0f,
     0x1.0e85e6p-15f, 0x1.0f8a7ep-53f, 0x1.15660cp-100f, 0.0f, 0x1.b23ec4p-70f,
     0x1.2d43eep-53f, 0.0f, 0.0f, 0.0f, 0x1.4606f2p-82f, 0.0f, 0.0f, 0x1.e40de2p-102f,
     0x1.d4a774p-89f, 0.0f, 0x1.11acb8p-117f, 0x1.1c6fbp-105f, 0.0f, 0.0f, 0.0f,
     0x1.d4233ap-52f, 0x1.8f63f4p-84f, 0x1.f3f88ap-70f, 0x1.892734p-57f, 0.0f, 0.0f,
     0.0f, 0x1.9acf58p-111f, 0x1.77e868p-38f, 0.0f, 0x1.d3e958p-87f, 0x1.eedd4p-3f,
     0.0f, 0.0f, 0x1.d43db6p-96f, 0x1.d1fc16p-23f, 0.0f, 0.0f, 0x1.89612ep-81f, 0.0f,
     0x1.7a1eaap-17f, 0x1.367cf8p-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d1b252p-108f, 0x1.b25d48p-87f, 0x1.60829ep-74f, 0x1.025cfp-66f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7917d8p-43f, 0.0f, 0x1.8832fap-36f, 0.0f,
     0x1.5c885ep-61f, 0x1.e31cfcp-125f, 0x1.de2a3ep-43f, 0.0f, 0.0f, 0x1.648fccp-29f,
     0.0f, 0.0f, 0x1.56b6ecp-9f, 0.0f, 0.0f, 0.0f, 0x1.85713ap-117f, 0.0f,
     0x1.010dep-18f, 0x1.a3c4f4p-88f, 0.0f, 0.0f, 0x1.a1a762p-96f, 0x1.eb851ep-9f,
     0.0f, 0.0f, 0x1.7ed43ap-30f, 0.0f, 0.0f, 0.0f, 0x1.d9a73p-88f, 0x1.a9a954p-60f,
     0x1.92869cp-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b76884p-83f, 0.0f,
     0x1.8cedacp-71f, 0x1.0f0e7cp-4f, 0x1.75d13p-34f, 0x1.e95f2ap-13f,
     0x1.67d4e4p-104f, 0x1.31f676p-67f, 0.0f, 0x1.26075p-116f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.d66a3ep-6f, 0x1.e68914p-22f, 0x1.befbd4p-25f, 0x1.048276p-49f, 0.0f,
     0x1.c297cap-6f, 0.0f, 0.0f, 0.0f, 0x1.f2920cp-60f, 0.0f, 0x1.5cd624p-89f,
     0x1.f893p-17f, 0.0f, 0.0f, 0.0f, 0x1.121a04p-28f, 0.0f, 0x1.c9a4a8p-103f,
     0x1.c6ba9ap-32f, 0x1.98097cp-44f, 0.0f, 0x1.36c19ep-116f, 0x1.4bbe4cp-47f, 0.0f,
     0x1.940b96p-100f, 0.0f, 0x1.30d0a6p-98f, 0.0f, 0x1.391fd6p-12f, 0x1.94f15ap-63f,
     0x1.4c60fep-56f, 0x1.8d81dap-106f, 0x1.f9d4d4p-89f, 0.0f, 0x1.0d61fep-109f, 0.0f,
     0.0f, 0x1.f7031ep-16f, 0x1.241ef2p-92f, 0.0f, 0.0f, 0.0f, 0x1.70dbe8p-60f,
     0x1.fc6788p-14f, 0x1.d9fb24p-28f, 0.0f, 0.0f, 0.0f, 0x1.38b094p-87f,
     0x1.9c1966p-93f, 0.0f, 0.0f, 0.0f, 0x1.fed8a2p-35f, 0x1.b4904p-79f, 0.0f,
     0x1.2bf29ap-28f, 0x1.d442d6p-36f, 0x1.aa95f6p-13f, 0.0f, 0x1.ed0198p-101f,
     0x1.e47dcap-126f, 0x1.ddb844p-4f, 0x1.62a99ap-36f, 0x1.8e8216p-98f,
     0x1.faf17cp-7f, 0x1.00fc4ep-74f, 0.0f, 0x1.6478fp-20f, 0.0f, 0.0f, 0.0f,
     0x1.3d379ep-100f, 0x1.a32d54p-1f, 0.0f, 0x1.f46b8ep-25f, 0x1.64f858p-117f,
     0x1.dcc60cp-45f, 0x1.f53e64p-28f, 0.0f, 0x1.85150cp-96f, 0.0f, 0.0f, 0.0f,
     0x1.599748p-11f, 0x1.a1b032p-114f, 0.0f, 0.0f, 0.0f, 0x1.962108p-13f,
     0x1.c4a29ap-4f, 0x1.b554f4p-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.375bdep-66f, 0x1.7022b4p-52f, 0x1.6717b6p-68f, 0x1.80a18ap-16f,
     0x1.ff7804p-38f, 0.0f, 0.0f, 0x1.4f03a2p-103f, 0x1.219128p-15f, 0.0f,
     0x1.4f393cp-96f, 0x1.de94d4p-121f, 0x1.c9b4ccp-82f, 0.0f, 0x1.3bf96p-98f,
     0x1.1daf2p-54f, 0.0f, 0.0f, 0x1.6b8ed4p-83f, 0.0f, 0.0f, 0.0f, 0x1.20fe5ap-78f,
     0x1.590b5ap-53f, 0.0f, 0x1.d5aca8p-83f, 0x1.aedad6p-120f, 0.0f, 0x1.10deecp-31f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a37faep-81f, 0.0f,
     0x1.24a59ap-35f, 0x1.b301fcp-123f, 0.0f, 0x1.2861bap-5f, 0x1.f211ep-124f, 0.0f,
     0x1.3c29fep-105f, 0.0f, 0x1.9dcb8ap-47f, 0x1.b42534p-7f, 0x1.d99bdp-41f, 0.0f,
     0x1.eec9aep-102f, 0x1.1b9214p-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.debcd2p-18f,
     0x1.34e95p-112f, 0.0f, 0x1.4b7194p-100f, 0x1.cdb3ccp-80f, 0x1.315118p-14f, 0.0f,
     0x1.c6467ap-55f, 0.0f, 0.0f, 0.0f, 0x1.6835b8p-77f, 0x1.7e3598p-5f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2721e8p-120f,
     0x1.ba612ap-20f, 0x1.988ea6p-121f, 0x1.eae88cp-33f, 0x1.df92bep-96f, 0.0f,
     0x1.c62f86p-36f, 0.0f, 0x1.a58eaap-9f, 0x1.e6e144p-93f, 0x1.1b46b8p-83f, 0.0f,
     0.0f, 0.0f, 0x1.321e74p-72f, 0.0f, 0x1.5e080ap-52f, 0x1.84002ep-50f, 0.0f,
     0x1.74014ep-53f, 0x1.731b8p-101f, 0x1.6ea7f8p-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.145d56p-78f, 0x1.bfeb2ap-60f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.b7fdf2p-36f,
     0.0f, 0x1.655d24p-37f, 0x1.11ca86p-12f, 0x1.596778p-88f, 0x1.f9b13ep-8f,
     0x1.759348p-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e8d966p-124f, 0x1.3fd16ep-112f,
     0x1.ba9974p-62f, 0x1.5b0f4cp-54f, 0.0f, 0.0f, 0x1.fe109cp-57f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d0a18p-106f, 0.0f, 0x1.c4283p-53f, 0.0f, 0.0f, 0.0f,
     0x1.2a72f4p-108f, 0.0f, 0.0f, 0x1.df84a2p-101f, 0x1.00012cp-107f, 0.0f, 0.0f,
     0x1.540782p-18f, 0.0f, 0.0f, 0.0f, 0x1.6308cap-90f, 0.0f, 0x1.d921ccp-5f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9836b2p-16f, 0.0f, 0x1.9288d6p-33f, 0.0f, 0x1.d6990ap-48f,
     0.0f, 0x1.a2599ap-100f, 0.0f, 0x1.9c5918p-63f, 0x1p0f, 0x1.88254p-56f, 0.0f,
     0x1.72a3dap-81f, 0x1.aa899ep-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2ff7ep-47f, 0x1.c20c6ep-115f, 0.0f, 0x1.894d56p-32f, 0.0f, 0.0f,
     0x1.51b17ap-97f, 0.0f, 0.0f, 0.0f, 0x1.0e7556p-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.6b1d9ep-42f, 0x1.21125p-15f, 0.0f, 0x1.ca8b2ap-60f, 0.0f, 0.0f,
     0x1.ceb22p-96f, 0.0f, 0x1.7da438p-112f, 0x1.4e77e4p-69f, 0.0f, 0x1.08587cp-26f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.43f8a2p-24f, 0x1.0230b6p-17f, 0x1.96eb24p-117f,
     0x1.73e034p-109f, 0.0f, 0.0f, 0.0f, 0x1.cf310ap-19f, 0x1.3e6116p-26f,
     0x1.ec08c2p-86f, 0.0f, 0.0f, 0.0f, 0x1.163dp-70f, 0x1.bf8a42p-92f, 0.0f,
     0x1.4bca26p-114f, 0.0f, 0x1.f47cfp-32f, 0x1.033074p-88f, 0x1.3129d4p-89f,
     0x1.533c66p-123f, 0.0f, 0.0f, 0x1.e4fdfap-47f, 0.0f, 0.0f, 0x1.a0f4dcp-90f,
     0x1.093484p-107f, 0x1.6da948p-38f, 0.0f, 0x1.b143fcp-37f, 0x1.e1bf92p-56f,
     0x1.946142p-100f, 0.0f, 0x1.600afp-12f, 0.0f, 0.0f, 0x1.7442c6p-69f,
     0x1.726efap-108f, 0.0f, 0.0f, 0x1.12aa1ap-45f, 0x1.ecbdf6p-4f, 0x1.ad4994p-22f,
     0.0f, 0x1.b291e2p-43f, 0x1.613f98p-94f, 0x1.61a628p-15f, 0x1.ca19b2p-121f, 0.0f,
     0.0f, 0x1.a4ad94p-104f, 0x1p0f, 0x1.a9ee36p-123f, 0.0f, 0x1.db8984p-69f, 0.0f,
     0x1.6e26cp-72f, 0.0f, 0.0f, 0x1.247efap-118f, 0.0f, 0x1.b08a3p-72f,
     0x1.a5a0f6p-15f, 0x1.8a8078p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6dfc7cp-113f, 0.0f,
     0x1.3040f6p-66f, 0.0f, 0x1.085a56p-85f, 0.0f, 0x1.127562p-73f, 0x1.0814aep-26f,
     0x1.894a2ap-108f, 0x1.337202p-112f, 0x1.da852cp-39f, 0.0f, 0x1.9202ep-86f,
     0x1.07cc82p-85f, 0x1.03740cp-45f, 0.0f, 0.0f, 0.0f, 0x1.3c92p-102f,
     0x1.f6202cp-20f, 0x1.a12b78p-35f, 0x1.d03bc4p-115f, 0.0f, 0x1.ce54c2p-76f, 0.0f,
     0x1.81210ap-73f, 0x1.542db6p-8f, 0.0f, 0.0f, 0x1.fff72ep-56f, 0.0f,
     0x1.9e41c8p-16f, 0x1.b2ac1p-116f, 0x1.8b6d8ep-22f, 0x1.e75fc4p-77f,
     0x1.7d9c72p-121f, 0x1.431058p-100f, 0.0f, 0.0f, 0.0f, 0x1.9b088ap-18f, 0.0f,
     0.0f, 0x1.db434p-68f, 0x1.5f2298p-70f, 0.0f, 0.0f, 0x1.580bbcp-112f, 0.0f, 0.0f,
     0x1.80785cp-114f, 0x1.2f1fd2p-56f, 0x1.59efa6p-20f, 0x1.4ca90ep-74f,
     0x1.a9c26cp-77f, 0.0f, 0.0f, 0.0f, 0x1.7e8bbap-53f, 0.0f, 0.0f, 0x1.f8c1c4p-10f,
     0x1.55198ap-32f, 0.0f, 0x1.97ed3ap-33f, 0x1.98e40cp-68f, 0.0f, 0.0f,
     0x1.7ae57ap-42f, 0x1.7a36f4p-87f, 0x1.bbd9f6p-117f, 0x1.380b78p-11f, 0.0f,
     0x1.5751dp-12f, 0x1.bfd5a8p-114f, 0.0f, 0x1.aade54p-96f, 0.0f, 0x1.3e2202p-58f,
     0x1.35b104p-114f, 0x1.b90e66p-103f, 0.0f, 0.0f, 0x1.bb71dap-103f,
     0x1.7644fep-126f, 0x1.387dbcp-12f, 0.0f, 0x1.958ab4p-86f, 0.0f, 0.0f, 0.0f,
     0x1.237654p-68f, 0x1.6ad658p-87f, 0x1.0642e4p-12f, 0x1.d2c2e8p-73f, 0.0f, 0.0f,
     0x1.358976p-72f, 0.0f, 0x1.a75fc4p-109f, 0x1.57dc48p-43f, 0.0f, 0x1.b88b44p-7f,
     0x1.78cb16p-62f, 0.0f, 0x1.8880dap-46f, 0x1.332f1p-61f, 0.0f, 0x1p0f, 0.0f, 0.0f,
     0.0f, 0x1.889ad6p-17f, 0.0f, 0x1.851d46p-58f, 0x1.723acep-32f, 0.0f,
     0x1.f62958p-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8653d4p-60f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.7874acp-48f, 0.0f, 0x1.5643fep-7f, 0x1.27e43cp-102f,
     0x1.b68e16p-84f, 0.0f, 0x1.750bcap-52f, 0.0f, 0x1.03bde6p-74f, 0.0f,
     0x1.f9c13ep-114f, 0x1.aa112ap-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5b2daep-92f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c76e2p-81f, 0.0f, 0.0f, 0.0f, 0x1.025f4ep-122f,
     0x1.3e3f08p-13f, 0.0f, 0x1.1d9bf4p-68f, 0.0f, 0x1.a71bbep-68f, 0x1.0f5d1ep-99f,
     0x1.f4ec6ep-19f, 0x1.f80ccap-47f, 0.0f, 0x1.7fd9cp-30f, 0.0f, 0x1.335f7p-102f,
     0.0f, 0x1.6d6928p-112f, 0x1.a90cbep-124f, 0x1.cc1a3ap-107f, 0.0f,
     0x1.152132p-22f, 0x1.9326c8p-72f, 0x1.3fc678p-48f, 0x1.ccff5ep-61f, 0.0f,
     0x1.28143ap-62f, 0x1p0f, 0x1.76d414p-100f, 0.0f, 0.0f, 0x1.d4a25p-80f, 0.0f,
     0.0f, 0x1.951652p-52f, 0x1.fb39b6p-98f, 0.0f, 0x1.212714p-22f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e01974p-106f, 0.0f, 0.0f, 0x1.2a928cp-74f, 0x1.72e9fep-16f, 0.0f,
     0x1.b12cc8p-83f, 0x1.083c54p-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3acd92p-83f,
     0x1.ed31d6p-42f, 0.0f, 0x1.799676p-88f, 0.0f, 0.0f, 0x1.168a82p-118f, 0.0f,
     0x1.2c731ap-60f, 0.0f, 0x1.cf1ddep-30f, 0.0f, 0x1.cfe2ccp-64f, 0x1.6f6bc8p-123f,
     0.0f, 0x1.506816p-85f, 0x1.348bd6p-38f, 0.0f, 0x1.b9dfacp-35f, 0.0f, 0.0f, 0.0f,
     0x1.aa0b8ap-122f, 0x1.f41fa4p-27f, 0.0f, 0x1.070a2cp-126f, 0.0f, 0x1.0ed1ap-82f,
     0x1.884p-23f, 0x1.2506fcp-31f, 0.0f, 0x1.ee83e2p-70f, 0x1.8aef32p-123f,
     0x1.7745c4p-56f, 0x1.9f669p-123f, 0x1.22fbf4p-4f, 0x1.1ee826p-57f, 0.0f, 0.0f,
     0.0f, 0x1.1d81b6p-36f, 0x1.b705f4p-42f, 0x1.bd505p-22f, 0.0f, 0x1.2463b2p-19f,
     0.0f, 0x1.344878p-62f, 0x1.fb7ceap-83f
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
            tmp2 = Sleef_finz_fminf8_kvx(tmp0, tmp1);
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
    printf("Sleef_finz_fminf8_kvx %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_finz_fminf8_kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
