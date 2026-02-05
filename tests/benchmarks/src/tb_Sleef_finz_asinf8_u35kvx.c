/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_asinf8_u35kvx.c --function \
 *     Sleef_finz_asinf8_u35kvx --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.18aae8p-20f, 0x1.5ea80ap-2f, 0x1.084a6ep-108f,
     0x1.0e18b2p-66f, 0x1.5f5a14p-20f, 0x1.54d45ap-122f, 0x1.ea84dp-89f, 0.0f,
     0x1.a88746p-80f, 0.0f, 0x1.a2b7bep-27f, 0.0f, 0.0f, 0x1.2f5f98p-15f,
     0x1.ed8b46p-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.10943ap-25f, 0x1p0f, 0.0f, 0.0f,
     0x1.b1577ap-70f, 0x1.73800ep-14f, 0.0f, 0.0f, 0x1.eea04ep-75f, 0.0f,
     0x1.575514p-68f, 0x1.83af74p-71f, 0x1.3df26ep-33f, 0.0f, 0.0f, 0.0f,
     0x1.2db2c2p-12f, 0x1.cfc20cp-122f, 0.0f, 0.0f, 0x1.fb6afcp-124f, 0x1.7e776ap-58f,
     0.0f, 0x1.4349d6p-75f, 0.0f, 0x1.1c2b5cp-5f, 0x1.019ff6p-34f, 0x1.f62a7p-100f,
     0x1.2af892p-96f, 0x1.dfd39ep-48f, 0.0f, 0.0f, 0x1.0933a6p-110f, 0x1.2d2d5ep-76f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d0a25ap-76f, 0x1.5f9744p-90f,
     0x1.377446p-20f, 0x1.7b62cap-54f, 0.0f, 0x1.28e67ep-28f, 0x1.649938p-109f,
     0x1.9283cp-107f, 0x1.90012ap-119f, 0x1.cbb1bp-66f, 0x1.12e1ccp-104f,
     0x1.6f0b62p-87f, 0.0f, 0x1.5a4e7ap-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b703c4p-92f, 0.0f, 0.0f, 0x1.1f176cp-114f, 0x1.97b5dap-1f, 0.0f, 0.0f,
     0x1.70337ap-25f, 0x1.f1ab24p-80f, 0x1.77cdbcp-73f, 0x1.224a22p-54f,
     0x1.d79458p-89f, 0x1.05ff5ap-34f, 0.0f, 0x1.642d3cp-94f, 0x1.08a856p-12f,
     0x1.5e41e2p-64f, 0x1.536134p-62f, 0x1.f7a498p-74f, 0.0f, 0x1.f78284p-11f,
     0x1.09cb3cp-126f, 0.0f, 0.0f, 0x1.95ffe4p-81f, 0x1.789f32p-64f, 0x1.9f04eep-115f,
     0.0f, 0x1.35fbecp-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9fb138p-20f, 0.0f,
     0x1.d0e53p-20f, 0x1.620fd8p-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.556ce2p-87f, 0x1.f59f42p-98f, 0x1.b61da6p-33f, 0x1.f84f3ep-2f,
     0x1.149b0cp-86f, 0.0f, 0.0f, 0.0f, 0x1.059c8p-29f, 0.0f, 0x1.9fe61ap-86f, 0.0f,
     0.0f, 0x1.ed30dep-6f, 0.0f, 0.0f, 0x1.045276p-54f, 0x1.65248ap-106f,
     0x1.94690cp-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f7df52p-55f, 0.0f,
     0x1.6d046cp-67f, 0.0f, 0x1.ae4534p-63f, 0x1.3355b6p-120f, 0x1.a170a6p-75f,
     0x1.22b01cp-48f, 0.0f, 0x1.891a68p-26f, 0.0f, 0x1.33c44ep-49f, 0.0f,
     0x1.e50596p-50f, 0.0f, 0.0f, 0.0f, 0x1.ab342p-76f, 0.0f, 0x1.cb6b0ap-113f, 0.0f,
     0x1.eec77cp-125f, 0.0f, 0.0f, 0x1.a8240ap-122f, 0x1.4a3206p-92f, 0.0f,
     0x1.367edep-62f, 0x1.079a7ep-101f, 0x1.3fb25cp-24f, 0.0f, 0.0f, 0x1.02bd7ap-111f,
     0x1.8c68c4p-70f, 0x1.5e10bp-110f, 0.0f, 0.0f, 0x1.402d88p-111f, 0.0f,
     0x1.8022d6p-45f, 0x1.3be88ap-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ee5112p-35f, 0.0f,
     0.0f, 0.0f, 0x1.7389b4p-72f, 0x1.046bep-94f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.db1e9cp-101f, 0.0f, 0.0f, 0.0f, 0x1.45a9cep-117f, 0.0f, 0x1.3f19e4p-99f,
     0.0f, 0x1.eaf75cp-44f, 0.0f, 0.0f, 0.0f, 0x1.abc4c8p-56f, 0.0f, 0.0f, 0.0f,
     0x1.1a0cc6p-108f, 0x1.18199ep-72f, 0x1.b86824p-106f, 0.0f, 0x1.9a4208p-123f,
     0.0f, 0.0f, 0x1.626222p-111f, 0.0f, 0.0f, 0.0f, 0x1.874b2p-66f, 0x1.ad833p-57f,
     0x1.b14bb6p-27f, 0.0f, 0x1.26022ap-15f, 0x1.84c60ep-20f, 0x1.dd2c9ep-32f, 0.0f,
     0.0f, 0x1.889166p-24f, 0x1.9a8934p-42f, 0.0f, 0x1.f601acp-16f, 0x1.3e6e58p-43f,
     0.0f, 0x1.121ca6p-26f, 0x1.110fp-87f, 0.0f, 0.0f, 0x1.7afab8p-3f, 0.0f,
     0x1.c87762p-2f, 0.0f, 0.0f, 0.0f, 0x1.87ffcap-99f, 0x1.17d2e8p-118f, 0.0f, 0.0f,
     0x1.b4fbe4p-119f, 0x1.1c09d4p-65f, 0x1.126052p-5f, 0x1.9e769cp-34f,
     0x1.58443cp-103f, 0.0f, 0.0f, 0x1.72bd1cp-63f, 0x1.181e36p-102f, 0x1.959e16p-53f,
     0.0f, 0.0f, 0.0f, 0x1.116b6cp-25f, 0.0f, 0.0f, 0x1.f28cap-15f, 0x1.ff4c9ep-17f,
     0x1.c1473cp-80f, 0x1.d2cbfcp-20f, 0.0f, 0x1.0742a4p-68f, 0.0f, 0x1.e382f2p-59f,
     0x1.303092p-89f, 0x1.a195f6p-98f, 0x1.7008d2p-102f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.68d2d4p-106f, 0x1.1c3cbcp-17f, 0.0f, 0.0f, 0x1.5a1782p-46f, 0x1.36e982p-35f,
     0.0f, 0.0f, 0.0f, 0x1.15c722p-17f, 0x1.138a9p-47f, 0x1.2b1386p-8f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.51272p-88f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.22b466p-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.497a06p-60f,
     0x1.9153d6p-30f, 0.0f, 0.0f, 0.0f, 0x1.c9815ap-92f, 0.0f, 0x1.413a4cp-72f,
     0x1.c0069ep-100f, 0x1.d426cep-126f, 0.0f, 0.0f, 0.0f, 0x1.29786ap-16f, 0.0f,
     0.0f, 0.0f, 0x1.20f6a2p-40f, 0.0f, 0x1.3e2c68p-36f, 0.0f, 0x1.7614aep-62f,
     0x1.b36718p-107f, 0.0f, 0x1.88f3fep-125f, 0x1.9392acp-52f, 0x1.0acda4p-66f, 0.0f,
     0.0f, 0.0f, 0x1.b1d50cp-27f, 0.0f, 0x1.4bbb04p-12f, 0x1.be2462p-111f, 0.0f,
     0x1.02aedcp-43f, 0x1.ae393ap-31f, 0x1.144794p-60f, 0x1.d74fc2p-106f,
     0x1.d0654ep-37f, 0.0f, 0.0f, 0x1.18861ap-25f, 0.0f, 0.0f, 0x1.5371b6p-16f,
     0x1.292816p-58f, 0.0f, 0.0f, 0x1.7a82a6p-56f, 0.0f, 0x1.e52c38p-10f,
     0x1.1f599cp-48f, 0x1.a2e054p-60f, 0x1.a9af52p-37f, 0x1.f9c226p-38f,
     0x1.6bb5p-93f, 0x1.5c5332p-64f, 0.0f, 0x1.df4936p-114f, 0.0f, 0x1.fb51cp-71f,
     0x1.3105cep-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.806f6ap-85f, 0.0f, 0x1.111ea2p-32f,
     0.0f, 0x1.5bbfbep-36f, 0x1.ac2dbcp-110f, 0x1.e8884ep-40f, 0.0f, 0x1.4569c2p-49f,
     0x1.c0a356p-19f, 0x1.ab43fap-23f, 0x1.9b2a54p-10f, 0.0f, 0.0f, 0x1.834826p-120f,
     0.0f, 0.0f, 0x1.ac895ep-107f, 0x1.474d04p-72f, 0x1.645424p-71f, 0.0f,
     0x1.f6eccp-1f, 0x1.d55acap-125f, 0x1.ee67eap-57f, 0.0f, 0.0f, 0x1.323bfep-4f,
     0.0f, 0.0f, 0x1.eb2f22p-124f, 0x1.e77e5ep-18f, 0x1.c94568p-69f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.169d2ap-43f, 0.0f, 0x1.f2d4ecp-103f, 0.0f, 0x1.2eaadcp-22f,
     0x1.51c9eep-118f, 0.0f, 0.0f, 0x1.bef1f2p-89f, 0x1.ee11b4p-31f, 0.0f,
     0x1.d1c4c8p-31f, 0x1.d6c714p-79f, 0x1.6d751ep-6f, 0.0f, 0.0f, 0.0f,
     0x1.baa8c8p-20f, 0x1.e08a88p-84f, 0.0f, 0.0f, 0x1.7644d6p-63f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.3ff45cp-12f, 0x1.69622p-6f, 0x1.9cbf94p-46f, 0.0f, 0x1.bb264p-53f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.0dbdp-82f, 0.0f, 0.0f, 0.0f, 0x1.e64bfp-67f, 0x1p0f,
     0x1.450d62p-102f, 0.0f, 0.0f, 0x1.f9b712p-54f, 0.0f, 0x1.de4cd2p-29f, 0.0f,
     0x1.4e0984p-6f, 0.0f, 0.0f, 0x1.a30f96p-110f, 0.0f, 0.0f, 0x1.531258p-59f, 0.0f,
     0.0f, 0.0f, 0x1.ae5e88p-81f, 0.0f, 0.0f, 0x1.44f6dp-22f, 0x1.afaf4cp-2f,
     0x1.e2efdap-52f, 0.0f, 0x1.30576ap-48f, 0.0f, 0.0f, 0x1.429836p-98f, 0.0f,
     0x1.31c762p-119f, 0x1.ac7092p-111f, 0x1.7742a8p-119f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ea3cbp-51f, 0.0f, 0.0f, 0.0f, 0x1.d51394p-75f, 0x1.7569aap-83f, 0.0f,
     0.0f, 0x1.77a382p-58f, 0x1.b424b8p-21f, 0x1.4af9dcp-110f, 0x1.9f62dep-47f,
     0x1.12663ap-14f, 0x1.9fcfdap-65f, 0x1.45150cp-30f, 0x1.7200d4p-15f, 0.0f, 0.0f,
     0x1.1b20bp-37f, 0.0f, 0x1.ef56aep-62f, 0.0f, 0x1.ee86b6p-60f, 0x1.f9bf44p-119f,
     0.0f, 0.0f, 0x1.4ee46ep-38f, 0x1.2390cp-74f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ae82ccp-114f, 0x1.57e32ep-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.db9162p-108f,
     0.0f, 0x1.6e8bf6p-119f, 0x1.efacc2p-71f, 0.0f, 0x1.bdd432p-111f, 0.0f,
     0x1.627198p-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e8d7fcp-97f, 0x1.0ea0ecp-7f, 0.0f,
     0.0f, 0x1.9cfb88p-78f, 0x1.aae7d8p-37f, 0.0f, 0.0f, 0x1.ce8d1ap-109f,
     0x1.35080ap-66f, 0x1.0af47ap-88f, 0x1.639b8ep-17f, 0x1.95592p-71f, 0.0f, 0.0f,
     0x1.555fb2p-99f, 0.0f, 0x1.5ce09cp-5f, 0x1.40e3d4p-29f, 0x1.e07dbcp-38f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.8bf98cp-71f, 0x1.b4334cp-20f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.80fd16p-2f, 0.0f, 0.0f, 0x1.84f186p-111f, 0.0f, 0.0f, 0x1.54918cp-49f,
     0x1.f9a7cap-85f, 0x1.75efa6p-29f, 0.0f, 0.0f, 0x1.a4e59ep-77f, 0.0f,
     0x1.2ad08p-6f, 0x1.4a62e6p-2f, 0x1.a8eea4p-64f, 0.0f, 0.0f, 0x1.da4d28p-5f, 0.0f,
     0x1.09d8dcp-120f, 0x1.f47d6ap-47f, 0x1.fe4b78p-53f, 0x1.29169ap-39f, 0.0f,
     0x1.1e894ap-58f, 0.0f, 0.0f, 0.0f, 0x1.b0d69ep-7f, 0.0f, 0x1.3e1808p-88f,
     0x1.b72e06p-35f, 0x1.f618eep-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fa1036p-13f, 0.0f,
     0x1.3154bcp-67f, 0.0f, 0.0f, 0.0f, 0x1.0f172ep-45f, 0.0f, 0x1.0c0ec6p-46f,
     0x1.a75ab6p-102f, 0x1.b45236p-109f, 0.0f, 0.0f, 0x1.465862p-92f, 0x1.a330e6p-55f,
     0x1.2efb5cp-47f, 0x1.f2d722p-93f, 0x1.85767ap-50f, 0.0f, 0x1.44db6ep-59f, 0.0f,
     0.0f, 0x1.de6512p-64f, 0x1.2f5fbap-107f, 0x1.1dddbcp-49f, 0x1.0b2af8p-97f,
     0x1.e8f12cp-66f, 0.0f, 0.0f, 0.0f, 0x1.62557p-30f, 0x1.c399e4p-115f,
     0x1.7fa584p-114f, 0x1.a296e4p-66f, 0.0f, 0x1.a5095ap-54f, 0.0f, 0.0f,
     0x1.a5650ap-58f, 0.0f, 0.0f, 0x1.1b0c1ep-71f, 0x1.3620ecp-101f, 0.0f,
     0x1.16cbdcp-111f, 0.0f, 0.0f, 0.0f, 0x1.bc768ap-61f, 0x1.b10c24p-101f,
     0x1.34afa4p-61f, 0x1.15505cp-37f, 0.0f, 0.0f, 0x1.8362fap-121f, 0x1.0c07e2p-40f,
     0.0f, 0x1.7bdbfp-122f, 0.0f, 0x1.9ea7bep-90f, 0x1.3ba656p-99f, 0.0f,
     0x1.042812p-63f, 0x1.1d9f52p-25f, 0x1.5d5a34p-23f, 0.0f, 0.0f, 0x1.85ad14p-27f,
     0x1.f1d48cp-117f, 0x1p0f, 0x1.bcb006p-108f, 0x1.5b35a6p-89f, 0x1.36f87p-16f,
     0x1.1e1fd6p-68f, 0x1.4e61c6p-121f, 0x1.597da4p-121f, 0x1.63e296p-52f,
     0x1.a1f05cp-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9f64b2p-3f, 0x1.c700d6p-83f,
     0x1.d112dp-20f, 0x1.31506p-58f, 0x1.77c82cp-15f, 0x1.73f946p-23f,
     0x1.8ae948p-120f, 0x1.d4f93ap-79f, 0.0f, 0.0f, 0x1.f4f5f6p-58f, 0x1.647308p-27f,
     0x1.7097fep-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c66c7ep-114f, 0.0f, 0x1.7758f8p-72f, 0x1.b98e0ep-116f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.82ad52p-41f, 0x1.cadb1p-110f, 0.0f, 0x1.04c788p-69f,
     0.0f, 0x1.bece4ap-57f, 0x1.07bfe8p-22f, 0x1.0a7dfp-118f, 0x1.b6f2a6p-99f,
     0x1.ad6d2cp-85f, 0.0f, 0x1.a9ff4ap-94f, 0x1.c3550cp-109f, 0.0f, 0.0f,
     0x1.10460ap-22f, 0x1.b69878p-61f, 0.0f, 0x1.d1f8b8p-88f, 0.0f, 0.0f,
     0x1.428966p-14f, 0.0f, 0.0f, 0.0f, 0x1.b984d8p-72f, 0.0f, 0x1.ea084ap-108f,
     0x1.ca0714p-118f, 0x1.e0654ap-117f, 0.0f, 0.0f, 0x1.f5c53cp-126f,
     0x1.4b5e08p-110f, 0.0f, 0.0f, 0x1.cd9a56p-62f, 0.0f, 0.0f, 0x1.95ff1cp-33f, 0.0f,
     0x1.ce038p-110f, 0.0f, 0x1.3807f2p-64f, 0x1.f24f8cp-122f, 0x1.d90b0ap-88f,
     0x1.e27276p-97f, 0.0f, 0x1.b88638p-60f, 0.0f, 0x1.61816ep-89f, 0x1.62d5e2p-101f,
     0.0f, 0.0f, 0x1.1c68a6p-115f, 0.0f, 0x1.134c8p-76f, 0.0f, 0x1.d5070ap-75f,
     0x1.e3cb4p-42f, 0.0f, 0x1.8bb01ap-36f, 0x1.1d7cf4p-113f, 0.0f, 0x1.b28d94p-67f,
     0x1.94a292p-39f, 0x1.901dep-19f, 0x1.059b34p-1f, 0x1.387de8p-103f, 0.0f,
     0x1.c38302p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cbbb62p-52f, 0x1.feff8ap-38f, 0.0f,
     0.0f, 0x1.0e9482p-60f, 0x1.10cd02p-110f, 0.0f, 0x1.b436c8p-115f,
     0x1.bce5e4p-108f, 0.0f, 0x1.df99cp-104f, 0x1.b0b2eep-30f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dfd872p-23f, 0.0f, 0x1.d2c072p-66f, 0.0f, 0.0f,
     0x1.03fb86p-76f, 0.0f, 0.0f, 0.0f, 0x1.f331b6p-49f, 0.0f, 0x1.15bbe2p-56f,
     0x1.e3f066p-119f, 0.0f, 0x1.959f02p-48f, 0x1.8ff252p-26f, 0x1.f601ccp-1f, 0.0f,
     0x1.5bfd16p-34f, 0.0f, 0.0f, 0x1.78a214p-28f, 0x1.7e9b8ep-56f, 0.0f,
     0x1.8f2a36p-48f, 0.0f, 0x1.2603dap-39f, 0x1.d700f8p-33f, 0x1.c3dcap-62f,
     0x1.b43614p-71f, 0.0f, 0.0f, 0.0f, 0x1.5929eep-53f, 0x1.da8a68p-107f, 0.0f,
     0x1.97231ap-94f, 0x1.feed0ep-17f, 0.0f, 0.0f, 0x1.66eedap-60f, 0x1.4dfd92p-61f,
     0.0f, 0.0f, 0x1.5cdf44p-118f, 0x1.1fe6fp-119f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c6bfa4p-86f, 0x1.0ad52p-80f, 0.0f, 0.0f, 0.0f, 0x1.5a9754p-23f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.8b3e4ap-62f, 0x1.3cb6f6p-58f, 0.0f, 0.0f, 0x1.fe0ca6p-42f,
     0x1.2b6b46p-87f, 0.0f, 0.0f, 0x1.858f9p-64f, 0.0f, 0.0f, 0.0f, 0x1.463c7ep-4f,
     0x1.94f9f8p-109f, 0.0f, 0x1.861d8p-83f, 0x1.76a486p-119f, 0x1.d1eb46p-85f, 0.0f,
     0.0f, 0.0f, 0x1.d00beep-11f, 0x1.02c1a6p-47f, 0x1.9553c2p-3f, 0.0f, 0.0f, 0.0f,
     0x1.1902d8p-117f, 0.0f, 0x1.0d3ebcp-113f, 0.0f, 0.0f, 0x1.72ba9ap-95f, 0.0f,
     0.0f, 0x1.5c6d72p-40f, 0.0f, 0x1.1ca0b8p-126f, 0x1.9ec138p-83f, 0x1.6225e4p-25f,
     0x1.389f88p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.463d52p-42f, 0.0f, 0.0f, 0.0f,
     0x1.27bc02p-100f, 0x1.3cd482p-120f, 0.0f, 0.0f, 0x1.188f9ap-86f, 0.0f,
     0x1.a2f1dp-56f, 0x1.b9691p-1f, 0.0f, 0.0f, 0x1.e8e352p-50f, 0x1.739278p-93f,
     0x1.da9368p-62f, 0.0f, 0.0f, 0x1.f60854p-91f, 0.0f, 0.0f, 0x1.acf1f4p-62f,
     0x1.342e16p-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.72dbbcp-51f, 0.0f, 0x1.a75a12p-40f,
     0.0f, 0.0f, 0x1.336aeap-58f, 0x1.3abdb8p-62f, 0.0f, 0.0f, 0x1.067828p-23f,
     0x1.a3ebe2p-71f, 0.0f, 0.0f, 0x1.21325cp-38f, 0x1.a37cacp-25f, 0x1.fbc342p-102f,
     0x1.7328bcp-92f, 0x1.ef2d84p-5f, 0.0f, 0x1.74d32ap-97f, 0.0f, 0x1.ad63d4p-103f,
     0x1.be2e7p-104f, 0x1.f1f982p-76f, 0x1.06e106p-35f, 0x1.3ff6ap-70f, 0.0f, 0.0f,
     0x1.74b836p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.272462p-91f, 0.0f, 0x1.7ffd58p-14f,
     0.0f, 0.0f, 0x1.da246cp-17f
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
            tmp1 = Sleef_finz_asinf8_u35kvx(tmp0);
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
    printf("Sleef_finz_asinf8_u35kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_finz_asinf8_u35kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
