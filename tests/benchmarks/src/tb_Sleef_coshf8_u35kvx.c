/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_coshf8_u35kvx.c --function Sleef_coshf8_u35kvx \
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
     0x1.4f3638p-51f, 0.0f, 0.0f, 0.0f, 0x1.2fbcbcp-87f, 0x1.5f6b8ep-90f,
     0x1.9e459ep-126f, 0x1.9ea216p-59f, 0.0f, 0x1.0fda06p-41f, 0.0f, 0.0f,
     0x1.7be622p-11f, 0x1.9cd4b6p-111f, 0.0f, 0x1.19592p-77f, 0x1.236c06p-2f,
     0x1.f375a8p-11f, 0.0f, 0.0f, 0.0f, 0x1.b69ebp-40f, 0x1.e7fbdap-49f, 0.0f,
     0x1.d300bap-8f, 0x1.72dd9p-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e78e38p-88f, 0x1.71cf8p-102f, 0x1.e3fe4p-103f, 0.0f, 0x1.d3165ap-26f,
     0x1.3c2954p-21f, 0.0f, 0x1.f47e7ap-90f, 0.0f, 0x1.8a7dcap-82f, 0.0f,
     0x1.2770f2p-117f, 0.0f, 0x1.be2872p-59f, 0.0f, 0x1.6234bep-5f, 0.0f,
     0x1.aa40aep-108f, 0x1.b7f9ep-75f, 0.0f, 0.0f, 0.0f, 0x1.e4f7b6p-48f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.23dd3ap-38f, 0x1.073b8ep-12f, 0.0f, 0x1.691744p-76f, 0.0f,
     0x1.987882p-39f, 0.0f, 0.0f, 0.0f, 0x1.810f26p-58f, 0x1.a77602p-72f, 0.0f,
     0x1.7da8ap-66f, 0.0f, 0x1.8a697p-94f, 0.0f, 0x1.2ef838p-87f, 0x1.194782p-78f,
     0x1.622f5cp-100f, 0.0f, 0x1.e0d198p-119f, 0x1.a0f852p-1f, 0.0f, 0x1.ae9cb4p-101f,
     0x1.7c79ecp-90f, 0x1.83ef96p-57f, 0x1.18c784p-89f, 0x1.ec604ep-115f, 0.0f, 0.0f,
     0.0f, 0x1.192e0ep-117f, 0x1.127c84p-81f, 0x1.89d4ccp-41f, 0x1.573e62p-105f,
     0x1.3c24dp-83f, 0x1.79bba2p-10f, 0x1.9a47aep-9f, 0.0f, 0x1.6b8122p-48f,
     0x1.6a5d2cp-102f, 0.0f, 0x1.ad7714p-104f, 0x1.2519fcp-25f, 0.0f, 0.0f, 0.0f,
     0x1.430e8ap-19f, 0.0f, 0x1.d40854p-99f, 0.0f, 0.0f, 0x1.4e737p-101f,
     0x1.4603b4p-31f, 0x1.a7adbep-70f, 0.0f, 0.0f, 0x1.735c48p-12f, 0x1.ff7f5ep-75f,
     0x1.9b53ecp-10f, 0x1.30cdc4p-112f, 0x1.44f5b8p-101f, 0.0f, 0x1.13162cp-49f, 0.0f,
     0.0f, 0x1.991aaep-93f, 0.0f, 0.0f, 0x1.ddeba2p-15f, 0x1.b85898p-26f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.18a2aep-92f, 0.0f, 0x1.122eccp-21f, 0x1.96a33p-47f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.23cffcp-27f, 0.0f, 0.0f, 0x1.1ed3bp-115f, 0.0f, 0.0f,
     0x1.6b625ap-51f, 0x1.d988acp-104f, 0x1.dea764p-66f, 0x1.d6f6cp-60f, 0.0f,
     0x1.f51bdap-110f, 0.0f, 0x1.0dd066p-27f, 0.0f, 0x1.d94f78p-125f, 0x1.1d5baap-35f,
     0x1.cd804ep-7f, 0x1.7ce166p-104f, 0.0f, 0x1.74474ep-109f, 0.0f, 0.0f,
     0x1.3c7966p-125f, 0x1.2a3a42p-30f, 0x1.7188dep-70f, 0.0f, 0.0f, 0x1.29e3d4p-32f,
     0.0f, 0.0f, 0.0f, 0x1.18ef84p-8f, 0.0f, 0x1.cf5deep-83f, 0.0f, 0x1.3c393cp-104f,
     0x1.50aea2p-34f, 0.0f, 0x1.3f5ee8p-94f, 0.0f, 0.0f, 0.0f, 0x1.77aaa4p-79f,
     0x1.e12ff2p-5f, 0.0f, 0.0f, 0.0f, 0x1.e09accp-94f, 0x1.2c96b6p-79f, 0.0f,
     0x1.de8504p-85f, 0.0f, 0.0f, 0x1.016e26p-81f, 0x1.2083ep-119f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.d68856p-39f, 0.0f, 0x1.d36c94p-23f, 0x1.002784p-121f, 0x1.65c62ep-33f,
     0x1.9b1068p-113f, 0.0f, 0x1.91b9d8p-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.95b4d6p-1f,
     0.0f, 0x1.1ab328p-10f, 0.0f, 0.0f, 0.0f, 0x1.f90bb6p-79f, 0x1.9b3712p-9f, 0.0f,
     0x1.fb583ap-21f, 0.0f, 0.0f, 0x1.d9008p-77f, 0x1.023cdp-98f, 0.0f, 0.0f,
     0x1.f327bep-41f, 0.0f, 0x1.61de14p-27f, 0x1.d26d92p-42f, 0.0f, 0x1.894a1cp-40f,
     0x1.e185acp-94f, 0.0f, 0.0f, 0x1.bb6b3ep-82f, 0x1.49d1cep-39f, 0.0f, 0.0f, 0.0f,
     0x1.d66ecep-13f, 0x1.899d5ep-125f, 0.0f, 0.0f, 0.0f, 0x1.4b1634p-83f,
     0x1.b7ad58p-20f, 0.0f, 0.0f, 0.0f, 0x1.988c22p-74f, 0x1.7da8fp-96f,
     0x1.5c62b8p-26f, 0x1.b89764p-66f, 0x1.d61262p-119f, 0x1.7418f4p-10f,
     0x1.f86f6ep-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ed7d0cp-82f, 0.0f, 0x1.e945aep-51f,
     0x1.ee8a8ep-1f, 0.0f, 0x1.da2a72p-91f, 0.0f, 0x1.5eefa8p-37f, 0x1.158cdap-109f,
     0x1.1c414ap-115f, 0x1.f0d35p-93f, 0x1.d3f1b6p-111f, 0.0f, 0.0f, 0x1.9ca8aep-60f,
     0.0f, 0x1.19c036p-96f, 0.0f, 0x1.af224p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c5e52cp-19f, 0x1.298ecep-103f, 0.0f, 0x1.9cac9ep-35f, 0x1.14d294p-58f, 0.0f,
     0x1.0c41cep-99f, 0x1.306328p-126f, 0x1.6474f4p-112f, 0.0f, 0x1.79f18ep-85f,
     0x1.b38eb6p-84f, 0.0f, 0.0f, 0x1.0b05dep-26f, 0x1.9c8b78p-117f, 0.0f,
     0x1.09c99ap-117f, 0x1.a6cdbep-104f, 0.0f, 0.0f, 0x1.41112ap-46f, 0.0f,
     0x1.87e8a4p-57f, 0.0f, 0.0f, 0x1.e87e02p-98f, 0x1.04f126p-14f, 0x1.1bcd4cp-48f,
     0.0f, 0x1.5dbde2p-110f, 0x1.36bf5ep-56f, 0.0f, 0x1.1a7bb8p-45f, 0x1.e33cap-11f,
     0x1.fcb1ep-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.94ebb2p-34f, 0.0f, 0x1.33fc76p-66f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a1ff82p-26f, 0x1.91cba8p-46f, 0.0f, 0x1.1aeaf6p-77f,
     0.0f, 0.0f, 0x1.a4fc08p-97f, 0x1.330a98p-107f, 0.0f, 0x1.580e56p-12f,
     0x1.a994bep-120f, 0.0f, 0.0f, 0x1.2f3ccp-118f, 0.0f, 0x1.366b46p-31f,
     0x1.6a6beep-58f, 0x1.a5dd32p-59f, 0.0f, 0x1.00efbcp-114f, 0.0f, 0.0f, 0.0f,
     0x1.822a06p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a1cd22p-62f, 0x1.4fd16ap-22f,
     0x1.33fe6p-47f, 0x1.5206bcp-100f, 0x1.a01e9ap-12f, 0x1.4c63c6p-115f,
     0x1.970ffcp-66f, 0.0f, 0x1.953af8p-123f, 0x1.a8813ep-61f, 0x1.7920b6p-51f, 0.0f,
     0x1.bd73c6p-68f, 0.0f, 0x1.10aefcp-108f, 0.0f, 0.0f, 0.0f, 0x1.9d0bfep-8f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d948fep-118f, 0.0f, 0.0f, 0.0f, 0x1.e8fa7cp-111f,
     0x1.a89c12p-44f, 0x1.cfde7cp-83f, 0x1.b02c7ap-47f, 0.0f, 0.0f, 0x1.7fd3cap-88f,
     0.0f, 0x1.7f32cep-12f, 0.0f, 0.0f, 0x1.bd9b46p-30f, 0x1.feb028p-5f,
     0x1.8b2c56p-100f, 0x1.991d1cp-97f, 0x1.546eeap-98f, 0x1.90f2ap-20f,
     0x1.35e9a4p-75f, 0x1.afbd58p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.23bd44p-15f,
     0.0f, 0.0f, 0x1.2a2cdap-76f, 0x1.744104p-65f, 0x1.ac4cb8p-57f, 0x1.2c1f42p-22f,
     0x1.fc3f6ep-6f, 0x1.7af14cp-11f, 0x1.489a48p-105f, 0x1.4248c4p-18f,
     0x1.7610fap-62f, 0.0f, 0.0f, 0.0f, 0x1.4ed664p-17f, 0.0f, 0x1.19c58cp-3f, 0.0f,
     0.0f, 0x1.30c8d4p-10f, 0x1.61b05ep-38f, 0.0f, 0x1.2fe73ap-67f, 0.0f,
     0x1.c0c1ap-52f, 0x1.91737cp-113f, 0x1.792cc6p-24f, 0.0f, 0x1.66841ap-41f,
     0x1.2bc8e2p-107f, 0.0f, 0x1.3b2f66p-119f, 0.0f, 0x1.b68144p-96f, 0x1.100298p-48f,
     0.0f, 0x1.b1be14p-15f, 0x1.aab804p-35f, 0x1.6c02d8p-81f, 0.0f, 0.0f, 0.0f,
     0x1.44acd6p-1f, 0.0f, 0x1.a6703ap-114f, 0.0f, 0.0f, 0x1.da1bc6p-34f,
     0x1.4ee64ep-126f, 0x1.3e259ep-124f, 0x1.ea19e2p-53f, 0x1.4271p-17f,
     0x1.e6ceccp-57f, 0.0f, 0.0f, 0x1.a2247ep-116f, 0x1.c44c24p-67f, 0.0f, 0.0f,
     0x1.3706fep-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.87fc18p-111f,
     0x1.2e7f1cp-102f, 0.0f, 0x1.3f720ep-111f, 0x1.dd6142p-5f, 0.0f, 0x1.325672p-107f,
     0x1.f84524p-11f, 0x1.11b1dp-27f, 0.0f, 0.0f, 0.0f, 0x1.351ap-61f, 0.0f, 0.0f,
     0x1.2b1374p-105f, 0x1.659dc6p-38f, 0.0f, 0.0f, 0x1.815464p-88f, 0.0f,
     0x1.073682p-111f, 0.0f, 0x1.0bd004p-43f, 0x1.64989ap-48f, 0x1.18a394p-103f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.3744ecp-115f, 0.0f, 0.0f, 0.0f, 0x1.811206p-83f,
     0x1.790de2p-106f, 0x1.8161e2p-28f, 0x1.c61faep-101f, 0.0f, 0x1.1e06bep-73f,
     0x1.5c9414p-112f, 0x1.17b5ap-87f, 0.0f, 0.0f, 0.0f, 0x1.da4d02p-66f,
     0x1.89a132p-5f, 0x1.434888p-76f, 0.0f, 0x1.07a3ccp-25f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.cf4498p-41f, 0x1.b890b2p-58f, 0x1.a4570ap-48f, 0x1.6f3e5ep-43f, 0.0f,
     0.0f, 0x1.6332d2p-14f, 0.0f, 0.0f, 0x1.d21696p-26f, 0x1.aaed4ep-49f,
     0x1.54a816p-93f, 0.0f, 0x1.d120aep-100f, 0.0f, 0.0f, 0.0f, 0x1.4e3756p-71f, 0.0f,
     0x1.6abb7ap-17f, 0x1.cd799ep-58f, 0.0f, 0.0f, 0x1.2d8932p-17f, 0.0f, 0.0f, 0.0f,
     0x1.30b88ep-48f, 0x1.1eaa5ep-1f, 0.0f, 0x1.4938f6p-20f, 0.0f, 0.0f, 0.0f,
     0x1.76b2ep-56f, 0.0f, 0x1.d312acp-78f, 0.0f, 0x1.de203p-124f, 0x1.7886ep-39f,
     0x1.be50c4p-81f, 0.0f, 0x1.299d76p-34f, 0x1.08a122p-102f, 0x1.ebeb78p-77f,
     0x1.fe23a2p-9f, 0.0f, 0.0f, 0.0f, 0x1.16e298p-52f, 0x1.374f5cp-78f,
     0x1.f8effap-36f, 0x1.41bbfp-119f, 0.0f, 0x1.16c0b8p-67f, 0x1.11c8ap-28f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a4e3a4p-22f, 0x1p0f, 0x1.91073cp-22f,
     0x1.49d6dep-31f, 0.0f, 0.0f, 0x1.07b76cp-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a67feap-108f, 0x1.fb84fap-53f, 0.0f, 0x1.17456ap-80f, 0.0f, 0x1.bd048ap-78f,
     0.0f, 0x1.cb0b72p-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a3ea86p-57f, 0.0f, 0x1.24ad6ap-111f, 0.0f, 0.0f, 0.0f, 0x1.bfcb22p-100f,
     0x1.973248p-43f, 0x1.ae116cp-30f, 0.0f, 0.0f, 0x1.c9a4cep-78f, 0.0f, 0.0f, 0.0f,
     0x1.9efddep-38f, 0.0f, 0x1.c761bcp-20f, 0x1.3817fap-17f, 0.0f, 0x1.ee2a78p-69f,
     0x1.89d652p-88f, 0.0f, 0x1.b37cbp-48f, 0.0f, 0.0f, 0x1.be5662p-57f,
     0x1.a326a6p-41f, 0x1.fcacap-81f, 0x1.e30bd8p-121f, 0.0f, 0.0f, 0x1.ef80d4p-58f,
     0.0f, 0x1.7e3d0ep-102f, 0x1.def6f4p-62f, 0x1.f13e06p-115f, 0x1.60fe1p-95f, 0.0f,
     0.0f, 0x1.85eb66p-78f, 0.0f, 0.0f, 0.0f, 0x1.cb2b6ep-87f, 0.0f, 0x1.fc9534p-73f,
     0x1.da5942p-26f, 0x1.5760ep-40f, 0x1.ec9f04p-44f, 0.0f, 0x1.dc51cap-44f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.79d69ep-78f, 0x1.22d2aep-5f, 0x1.5ba7dep-90f,
     0x1.7d3a5ap-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a5ae16p-8f, 0x1.9fd6e2p-19f,
     0x1.b26474p-110f, 0x1.f94b26p-63f, 0x1.7c7458p-23f, 0x1.311caep-35f, 0.0f,
     0x1.936436p-5f, 0.0f, 0.0f, 0.0f, 0x1.49293p-8f, 0x1.c343dep-60f, 0.0f,
     0x1.87713p-94f, 0x1.849c5cp-124f, 0x1.620efap-71f, 0.0f, 0x1.710fe4p-65f,
     0x1.5173a2p-87f, 0x1.083012p-108f, 0.0f, 0.0f, 0.0f, 0x1.51cbfep-41f,
     0x1.fa7fep-32f, 0.0f, 0.0f, 0.0f, 0x1.1e4ddcp-98f, 0x1.f0a878p-89f, 0.0f, 0.0f,
     0x1.003434p-16f, 0x1.230f0cp-96f, 0.0f, 0.0f, 0.0f, 0x1.d2fe2p-26f, 0.0f,
     0x1.3b148cp-7f, 0x1.65952ep-88f, 0.0f, 0x1.ec26ccp-117f, 0x1.a5719ep-26f,
     0x1.c98b64p-38f, 0x1.7e1bfap-10f, 0.0f, 0.0f, 0x1.6f2a34p-43f, 0.0f,
     0x1.383d16p-82f, 0x1.69242ap-12f, 0x1.d2819ep-107f, 0.0f, 0x1.e5ccccp-26f,
     0x1.539f02p-121f, 0.0f, 0.0f, 0x1.0dc81p-59f, 0.0f, 0x1.4b3cd6p-10f, 0.0f, 0.0f,
     0x1.ccabfp-111f, 0.0f, 0x1.f151f6p-1f, 0x1.be90bep-116f, 0x1.666246p-49f, 0.0f,
     0x1.0208a2p-78f, 0.0f, 0x1.0ca4c6p-85f, 0x1.a14912p-36f, 0.0f, 0.0f,
     0x1.36ad36p-114f, 0x1.2f7afcp-1f, 0x1.6101e6p-100f, 0.0f, 0x1.b762d2p-79f, 0.0f,
     0x1.c74f5p-2f, 0x1.7e8a58p-79f, 0.0f, 0.0f, 0.0f, 0x1.499e54p-46f,
     0x1.0be61cp-117f, 0.0f, 0.0f, 0.0f, 0x1.259bb6p-119f, 0x1.4a2dbap-8f,
     0x1.bcfa44p-114f, 0.0f, 0x1.205cacp-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.22f1f8p-3f, 0.0f, 0x1.e5514ep-28f, 0.0f, 0x1.a1b35ap-13f, 0.0f,
     0x1.742fbp-5f, 0.0f, 0x1.8b1a24p-100f, 0x1.f77302p-34f, 0x1.a12cb6p-53f, 0.0f,
     0.0f, 0x1.f5212cp-70f, 0x1.07cec8p-57f, 0.0f, 0x1.d2d3fap-111f, 0x1.a068cep-112f,
     0.0f, 0.0f, 0.0f, 0x1.3b4e6ap-71f, 0x1.865aaep-64f, 0.0f, 0.0f, 0x1.457dc2p-17f,
     0x1.2fd05ap-93f, 0x1.3e4fcp-111f, 0x1.66a10ep-51f, 0x1.73a446p-73f,
     0x1.f4fbaap-120f, 0.0f, 0.0f, 0.0f, 0x1.3397cep-57f, 0x1.23df36p-33f, 0.0f,
     0x1.9f14bap-92f, 0.0f, 0x1.34a71p-77f, 0.0f, 0.0f, 0x1.a458cep-38f, 0.0f, 0.0f,
     0x1.0c3e46p-96f, 0x1.3e5f06p-93f, 0.0f, 0.0f, 0x1.8206d2p-70f, 0x1.fe3e2ep-6f,
     0.0f, 0.0f, 0.0f, 0x1.4ac4acp-94f, 0x1.ba5f3ap-12f, 0x1.deead8p-110f, 0.0f,
     0x1.457e9ap-37f, 0x1.6040fcp-114f, 0x1.bd4b96p-93f, 0.0f, 0x1.7b3e2ap-51f, 0.0f,
     0x1.7e6b2ap-12f, 0x1.f9fd2cp-126f, 0.0f, 0x1.26e8bcp-10f, 0x1.485984p-41f, 0.0f,
     0.0f, 0.0f, 0x1.51cbfp-102f, 0x1.58e89ep-123f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a36fa6p-102f, 0.0f, 0x1.8fde56p-13f, 0.0f, 0.0f, 0x1.d82474p-19f,
     0x1.050b1cp-92f, 0x1.b1b5f2p-74f, 0x1.336e6ep-19f, 0x1.d6e67ep-48f, 0.0f,
     0x1.9dfb94p-86f, 0x1.3f951ep-117f, 0.0f, 0.0f, 0x1.c48306p-42f, 0x1.1453e6p-111f,
     0x1.39b568p-73f, 0x1.9985ep-77f, 0x1.543d5cp-126f, 0x1.ccbb1cp-123f, 0.0f, 0.0f,
     0x1.b6327cp-120f, 0.0f, 0.0f, 0x1.cbcee4p-38f, 0.0f, 0.0f, 0x1.8a166ep-74f, 0.0f,
     0x1.e04d1ap-7f, 0.0f, 0x1.1a95ap-16f, 0x1.5b97e6p-59f, 0x1.3d7c0ap-53f,
     0x1.4a3b8p-78f, 0x1.d06f06p-97f, 0x1.fd777p-41f, 0.0f, 0.0f, 0.0f,
     0x1.60f146p-61f, 0.0f, 0.0f, 0x1.6ca156p-69f, 0x1.c98c8ep-81f, 0.0f,
     0x1.523fb2p-97f, 0.0f, 0.0f, 0.0f, 0x1.69546cp-111f, 0.0f, 0x1.32f508p-40f, 0.0f,
     0x1.d401e4p-23f, 0x1.177cfep-120f, 0x1.092bccp-44f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c4127cp-82f, 0.0f, 0x1.9b7d98p-16f, 0.0f, 0.0f, 0x1.be43b4p-124f, 0.0f,
     0x1.21341ap-103f, 0.0f, 0x1.9a34dap-15f, 0x1.d686c8p-55f, 0x1.3f5654p-94f,
     0x1.dc316ap-35f, 0.0f, 0x1.5426c8p-58f, 0.0f, 0.0f, 0x1.c31cc4p-113f, 0.0f, 0.0f,
     0.0f, 0x1.85b94ap-111f, 0.0f, 0.0f, 0x1.b9c63p-10f, 0.0f, 0.0f, 0x1.00ec38p-115f,
     0.0f, 0.0f, 0x1.cf24e2p-2f, 0x1.4fb1d4p-110f, 0.0f, 0.0f, 0.0f, 0x1.e964e6p-63f,
     0.0f, 0.0f, 0.0f, 0x1.b0a502p-60f, 0x1.3a52fp-30f, 0.0f, 0.0f, 0x1.223e86p-18f,
     0.0f, 0x1.8656f4p-11f, 0x1.e1857p-17f, 0.0f, 0x1.359906p-21f, 0x1.9197f4p-51f,
     0x1.54ef36p-50f, 0x1.a8db04p-89f, 0x1.f797bp-62f, 0x1.2a4506p-36f, 0.0f, 0.0f,
     0x1.76f506p-41f, 0x1.49dd1cp-59f, 0.0f, 0x1.32a5f6p-121f, 0x1.98439p-125f,
     0x1.e5494p-22f, 0.0f, 0.0f, 0.0f, 0.0f
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
            tmp1 = Sleef_coshf8_u35kvx(tmp0);
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
    printf("Sleef_coshf8_u35kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_coshf8_u35kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
