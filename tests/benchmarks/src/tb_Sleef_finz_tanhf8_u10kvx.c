/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_tanhf8_u10kvx.c --function \
 *     Sleef_finz_tanhf8_u10kvx --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c6ce16p-13f, 0x1.9ef44p-58f, 0.0f,
     0x1.28b898p-99f, 0x1.cbe68cp-77f, 0.0f, 0.0f, 0x1.da0372p-93f, 0x1.b9fcc4p-81f,
     0.0f, 0x1.7b0e5ep-83f, 0x1.662278p-60f, 0.0f, 0x1.312b54p-117f, 0x1.e6c106p-88f,
     0x1.d924a6p-87f, 0.0f, 0.0f, 0x1.ef1504p-42f, 0x1.a50cfep-121f, 0x1.b85b6p-82f,
     0x1.8045fep-85f, 0x1.959f1p-85f, 0.0f, 0x1.76cde6p-74f, 0x1.e997fap-66f, 0.0f,
     0.0f, 0x1.bf4aaap-24f, 0.0f, 0x1.870b16p-23f, 0x1.af4248p-41f, 0.0f, 0.0f,
     0x1.6a8efcp-47f, 0.0f, 0x1.7f90d2p-61f, 0.0f, 0.0f, 0x1.8a43e2p-125f, 0.0f,
     0x1.68f86ep-1f, 0x1.86df14p-7f, 0.0f, 0x1.5d4c7p-78f, 0.0f, 0x1.55cd24p-118f,
     0.0f, 0.0f, 0x1.d489f4p-120f, 0.0f, 0x1.63ee44p-29f, 0.0f, 0.0f, 0x1.442ef2p-42f,
     0x1.c772ecp-16f, 0.0f, 0x1.b31f08p-38f, 0.0f, 0.0f, 0x1.4bd79ap-81f, 0.0f, 0.0f,
     0.0f, 0x1.2c517ep-22f, 0.0f, 0x1.6967fep-88f, 0.0f, 0.0f, 0x1.a61f2ap-69f,
     0x1.f83e24p-118f, 0x1.f89302p-91f, 0x1.0c5858p-92f, 0x1.1ff702p-42f, 0.0f,
     0x1.d5a24ep-122f, 0.0f, 0x1.0501f2p-94f, 0x1.116114p-92f, 0.0f, 0x1.7586dp-107f,
     0.0f, 0.0f, 0x1.c5861p-100f, 0x1.7fe544p-121f, 0x1.226e6cp-21f, 0x1.17a90ep-86f,
     0x1.7d7a42p-65f, 0.0f, 0x1.338104p-125f, 0x1.de13bap-50f, 0x1.96c292p-13f, 0.0f,
     0.0f, 0x1.7d2b78p-18f, 0x1.a0351p-53f, 0.0f, 0x1.a432dp-65f, 0.0f, 0.0f,
     0x1.178f9ep-24f, 0.0f, 0x1.8f36ep-113f, 0x1.08658ap-84f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.568746p-98f, 0x1.e1c286p-13f, 0.0f, 0.0f, 0x1.70b96p-59f, 0x1.5261fap-42f,
     0.0f, 0.0f, 0x1.61c04cp-91f, 0x1.82a944p-99f, 0.0f, 0x1.d658bep-41f,
     0x1.cf8172p-102f, 0x1.0c56bp-105f, 0.0f, 0x1.b61d5p-61f, 0x1.4b82eap-9f, 0.0f,
     0x1.14b3f2p-60f, 0.0f, 0x1.33b6f8p-32f, 0.0f, 0x1.e4c08cp-43f, 0x1.debfbep-125f,
     0x1.7c6d96p-105f, 0x1.4326d8p-38f, 0x1.94e2e8p-104f, 0.0f, 0x1.82fed2p-107f,
     0.0f, 0x1.5317a2p-121f, 0x1.aa27f8p-25f, 0x1.298d1cp-47f, 0.0f, 0x1.4c3874p-40f,
     0x1p0f, 0x1.b256dp-35f, 0x1.87ecb6p-66f, 0.0f, 0.0f, 0x1.ac2878p-72f, 0.0f,
     0x1.aea518p-26f, 0x1.18473ep-117f, 0x1.f307a4p-48f, 0.0f, 0x1.4f5004p-52f, 0.0f,
     0x1.4731fap-18f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.bff00cp-50f,
     0x1.a3a36p-116f, 0.0f, 0.0f, 0x1.43be18p-76f, 0x1.2ef3f8p-76f, 0.0f, 0.0f,
     0x1.e85dfep-13f, 0x1.b532ecp-79f, 0x1.19df24p-48f, 0.0f, 0.0f, 0x1.a5277p-91f,
     0x1.7ca1bcp-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e7b162p-34f,
     0.0f, 0.0f, 0x1.7da9c8p-36f, 0.0f, 0.0f, 0x1.218632p-22f, 0x1.404862p-78f, 0.0f,
     0.0f, 0x1.38f48ep-12f, 0.0f, 0x1.50db64p-124f, 0.0f, 0.0f, 0x1.17aca4p-43f,
     0x1.d34546p-65f, 0.0f, 0x1.24ae8ep-121f, 0.0f, 0.0f, 0.0f, 0x1.69d8a4p-50f, 0.0f,
     0x1.1c8152p-124f, 0.0f, 0.0f, 0.0f, 0x1.6b9af2p-35f, 0.0f, 0.0f, 0x1.29ae92p-14f,
     0x1.01ab5ap-38f, 0x1.6c3234p-124f, 0x1.3f3f68p-103f, 0x1.b0bb12p-44f, 0.0f,
     0x1.8307ap-102f, 0.0f, 0x1.da6ce8p-119f, 0.0f, 0.0f, 0x1.2d34bp-125f,
     0x1.e754dcp-111f, 0x1.026838p-39f, 0x1.add518p-126f, 0.0f, 0x1.78f472p-95f,
     0x1.e2ea8cp-83f, 0x1.dda13p-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7e3f8ep-20f, 0x1.159a2ep-89f, 0x1.8d78fp-45f, 0.0f, 0x1.df424p-51f, 0.0f,
     0.0f, 0.0f, 0x1.81e74p-53f, 0x1.1dc50ep-90f, 0x1.dfaf28p-77f, 0x1.84931ap-71f,
     0.0f, 0x1.556b52p-40f, 0.0f, 0x1.c928ccp-76f, 0.0f, 0x1.95bcap-8f,
     0x1.3eb066p-34f, 0x1.859e98p-121f, 0x1.c17012p-43f, 0.0f, 0x1.380796p-32f,
     0x1.287602p-17f, 0x1.7c7106p-103f, 0x1.81e808p-94f, 0x1.2e4b5ap-69f,
     0x1.03a5eap-117f, 0.0f, 0.0f, 0x1.9610ecp-102f, 0.0f, 0x1.307cf6p-60f, 0.0f,
     0.0f, 0.0f, 0x1.584cd4p-6f, 0x1.b49bap-56f, 0x1.fc1822p-101f, 0x1.c846e6p-78f,
     0x1.07e82ep-84f, 0x1.3c560ep-110f, 0x1.8ccb8cp-43f, 0x1.538d06p-49f,
     0x1.b83ea6p-81f, 0x1.67ea76p-76f, 0.0f, 0.0f, 0.0f, 0x1.01b27ap-15f,
     0x1.9276e4p-8f, 0x1.f81106p-52f, 0x1.9225b6p-120f, 0.0f, 0x1.32b728p-109f, 0.0f,
     0.0f, 0.0f, 0x1.02f052p-19f, 0.0f, 0x1.47195cp-43f, 0x1.52d83cp-34f, 0.0f, 0.0f,
     0x1.aebebap-97f, 0x1.d712dap-55f, 0x1.e9da72p-43f, 0.0f, 0x1.2d3448p-69f,
     0x1.43e946p-89f, 0x1.be514ep-47f, 0x1.722faep-28f, 0x1.1dd068p-120f, 0.0f,
     0x1.f5d71cp-72f, 0x1.eadf4ep-39f, 0.0f, 0.0f, 0.0f, 0x1.20a9fep-120f,
     0x1.aefb8ep-90f, 0.0f, 0x1.31fb1cp-32f, 0x1.1ff21ep-60f, 0.0f, 0.0f,
     0x1.7d7d1cp-35f, 0.0f, 0x1.8636e8p-107f, 0x1.61c012p-38f, 0.0f, 0.0f,
     0x1.d55de6p-123f, 0x1.0ace44p-42f, 0x1.e98db6p-115f, 0x1.394294p-56f, 0.0f, 0.0f,
     0x1.7ef9dap-80f, 0.0f, 0.0f, 0x1.232ebcp-3f, 0.0f, 0.0f, 0x1.d6a164p-117f, 0.0f,
     0x1.11220ap-44f, 0x1.c0bb88p-27f, 0x1.b6e1a2p-48f, 0x1.e76642p-101f,
     0x1.624d1cp-31f, 0x1.632084p-54f, 0.0f, 0x1.85e25cp-116f, 0.0f, 0x1.0a75c4p-57f,
     0x1.d3ce0cp-47f, 0x1.ce1426p-120f, 0x1.a80a7p-1f, 0x1.5ab33ap-118f,
     0x1.b08434p-47f, 0.0f, 0.0f, 0.0f, 0x1.b4b132p-60f, 0x1.aeb352p-57f,
     0x1.270df6p-55f, 0x1.b2c0e8p-92f, 0.0f, 0x1.3aa7eep-10f, 0.0f, 0.0f,
     0x1.4317e4p-111f, 0.0f, 0.0f, 0.0f, 0x1.c916d4p-81f, 0.0f, 0x1.953978p-77f, 0.0f,
     0x1.e5847ap-57f, 0.0f, 0x1.729bb6p-106f, 0.0f, 0.0f, 0.0f, 0x1.bb3a4ep-100f,
     0x1.bee346p-35f, 0x1.b1a9aep-51f, 0x1.6a4e54p-96f, 0x1.c98d4ep-121f,
     0x1.ceb32ap-108f, 0x1.444c6cp-107f, 0.0f, 0x1.3840b2p-123f, 0.0f,
     0x1.5aa1d8p-45f, 0.0f, 0.0f, 0x1.eef9eap-28f, 0x1.138582p-52f, 0x1.15c3fap-31f,
     0x1.7377eap-89f, 0.0f, 0.0f, 0.0f, 0x1.08471cp-61f, 0.0f, 0x1.936388p-80f, 0.0f,
     0.0f, 0x1.7f1e72p-88f, 0.0f, 0x1.82d5ep-42f, 0x1.cd8ebcp-2f, 0.0f,
     0x1.9d3938p-60f, 0x1.be4918p-108f, 0.0f, 0.0f, 0x1.0a8d3ep-56f, 0x1.41ad48p-14f,
     0x1.aae972p-13f, 0x1.6f19f6p-62f, 0.0f, 0x1.cce75ep-94f, 0x1.765042p-9f, 0.0f,
     0x1.3235dcp-3f, 0.0f, 0.0f, 0x1.9556f8p-87f, 0x1.dc651ap-21f, 0x1.348ed6p-24f,
     0.0f, 0.0f, 0.0f, 0x1.6f96cep-79f, 0.0f, 0x1.90a3aap-83f, 0.0f, 0.0f,
     0x1.edb7ep-71f, 0.0f, 0.0f, 0x1.f8a11cp-31f, 0.0f, 0.0f, 0x1.0762c6p-71f, 0.0f,
     0x1.63357p-119f, 0.0f, 0.0f, 0x1.bd9c7ep-95f, 0x1.fd78b2p-63f, 0x1.533fbep-111f,
     0x1.b5f798p-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.55603ap-2f, 0x1.6ac474p-103f,
     0x1.6759e4p-81f, 0x1.12287cp-73f, 0x1.bbb2bcp-73f, 0.0f, 0.0f, 0x1.0eda64p-24f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.8d88fep-91f, 0x1.effe3ap-32f, 0.0f, 0x1.177866p-115f,
     0x1.6af51ep-61f, 0.0f, 0x1.c140d6p-60f, 0.0f, 0x1.8ee26cp-30f, 0x1.a503b2p-120f,
     0x1.d8638cp-105f, 0x1.09b392p-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8befa6p-103f, 0x1.81f258p-88f, 0.0f, 0x1.310b22p-83f, 0.0f, 0.0f,
     0x1.842208p-17f, 0x1.218ae6p-46f, 0x1.d06824p-101f, 0x1.a19cf6p-60f,
     0x1.0b489ap-117f, 0x1.ebc734p-56f, 0.0f, 0x1.a39fc4p-9f, 0.0f, 0.0f, 0.0f,
     0x1.11c2aap-118f, 0.0f, 0x1.8e748ep-89f, 0x1.f5832cp-90f, 0x1.93015ap-93f, 0.0f,
     0.0f, 0.0f, 0x1.cce21p-53f, 0.0f, 0x1.cf2562p-11f, 0.0f, 0.0f, 0.0f,
     0x1.5e468ep-43f, 0x1.3ae506p-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8484a2p-6f,
     0x1.8f24dap-116f, 0x1.eddaaep-93f, 0.0f, 0x1.1477bcp-41f, 0x1.952624p-125f,
     0x1.45b23p-10f, 0x1.fb549ap-81f, 0x1.9552dcp-95f, 0x1.ebd9ccp-74f, 0.0f, 0.0f,
     0x1.d8ff5ap-97f, 0.0f, 0x1.ac3348p-47f, 0.0f, 0.0f, 0x1.ceaa88p-36f,
     0x1.cb7c54p-94f, 0.0f, 0x1.d4da5ap-51f, 0x1.46371cp-113f, 0.0f, 0x1.844a48p-89f,
     0x1.ddeb4cp-125f, 0.0f, 0.0f, 0.0f, 0x1.7518e4p-12f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.2348f4p-96f, 0x1.e0391ep-105f, 0x1.100b28p-71f,
     0x1.db1efp-74f, 0x1.16dd3ep-42f, 0x1.b53f6ap-42f, 0x1.15b0cp-4f, 0x1.fa27b2p-34f,
     0x1.866a2ep-63f, 0.0f, 0x1.c47e78p-83f, 0x1.6dba8ep-114f, 0x1.5cae2ap-112f,
     0x1.43e40ap-6f, 0.0f, 0x1.8328aep-3f, 0.0f, 0x1.a30e8p-9f, 0.0f, 0.0f,
     0x1.5551dp-28f, 0x1.2f358p-55f, 0.0f, 0x1.8cd3c6p-92f, 0x1.9e1baep-107f,
     0x1.7a9d08p-33f, 0x1.d011ccp-59f, 0x1.b454f4p-36f, 0.0f, 0x1.9e5e0cp-64f, 0.0f,
     0x1.48b7dap-66f, 0.0f, 0x1.4a9826p-24f, 0.0f, 0x1.16a786p-75f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c4f4acp-2f, 0.0f, 0x1.876586p-11f, 0.0f, 0x1.91e5a6p-111f, 0.0f, 0.0f,
     0x1.0e7442p-1f, 0.0f, 0.0f, 0x1.4e93fp-19f, 0.0f, 0.0f, 0x1.6e995ep-13f, 0.0f,
     0.0f, 0x1.00a72ep-55f, 0x1.bee4bep-34f, 0.0f, 0x1.fa07fep-90f, 0x1.f9bdc6p-89f,
     0x1.9dc698p-44f, 0x1.76402cp-62f, 0.0f, 0x1.9faad2p-13f, 0x1.70f878p-89f, 0.0f,
     0.0f, 0.0f, 0x1.5ac6a4p-59f, 0.0f, 0x1.8b67e8p-65f, 0.0f, 0.0f, 0x1.b83fa2p-7f,
     0x1.d6c20ap-50f, 0x1.634848p-43f, 0.0f, 0x1.5ff57p-2f, 0x1.6ba21ep-28f,
     0x1.b89a4ap-81f, 0x1.35d55ep-44f, 0.0f, 0x1.bf2c98p-10f, 0x1.d94b12p-37f, 0.0f,
     0.0f, 0x1.b5847ep-16f, 0x1.3b90cep-19f, 0x1.585ba6p-105f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cb3b56p-67f, 0.0f, 0x1.52a972p-74f, 0.0f, 0.0f, 0.0f, 0x1.7549f2p-48f,
     0x1.fd384ap-110f, 0x1.5d1e34p-99f, 0x1.4a161ap-59f, 0x1.35351ep-75f, 0.0f,
     0x1.e8b30cp-35f, 0x1.dbccdp-117f, 0.0f, 0x1.46d2eap-111f, 0x1.427506p-100f, 0.0f,
     0x1.041f98p-66f, 0.0f, 0x1.a6787cp-8f, 0x1.0146b6p-42f, 0x1.0adf42p-121f, 0.0f,
     0x1.912db2p-103f, 0x1.f69d5cp-43f, 0.0f, 0.0f, 0x1.585678p-19f, 0.0f, 0.0f,
     0x1p0f, 0.0f, 0x1.f1707ap-81f, 0x1.476406p-9f, 0x1.815d82p-123f, 0x1.48299ap-82f,
     0x1.bfc4e6p-33f, 0x1.46d84p-25f, 0.0f, 0x1.ed0148p-71f, 0x1.9f606ep-76f, 0.0f,
     0x1.9a2142p-100f, 0x1.a397d8p-90f, 0.0f, 0.0f, 0x1.23b51p-33f, 0.0f,
     0x1.6c95eap-22f, 0.0f, 0x1.986e64p-37f, 0.0f, 0.0f, 0.0f, 0x1.621d56p-50f,
     0x1.0efecp-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ea3086p-32f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.2e6932p-101f, 0x1.f02f04p-34f, 0.0f, 0x1.8b30ccp-36f, 0.0f,
     0x1.9430c6p-19f, 0.0f, 0.0f, 0.0f, 0x1.e52d8p-67f, 0.0f, 0.0f, 0x1.e7619ap-58f,
     0.0f, 0.0f, 0x1.cf9cbap-47f, 0x1.80d3d2p-99f, 0.0f, 0.0f, 0x1.1c5d6ap-122f,
     0x1.84cb88p-63f, 0x1.7aad9cp-53f, 0.0f, 0x1.f51fp-21f, 0.0f, 0x1.45db3ap-5f,
     0x1.b0df2p-89f, 0x1.6cc41ap-79f, 0x1.b40b7cp-28f, 0x1.d568aep-119f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.5a5d3ap-64f, 0.0f, 0.0f, 0.0f, 0x1.720612p-21f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.60e884p-35f, 0.0f, 0x1.9f465cp-103f, 0.0f, 0x1.1285c4p-95f,
     0x1.fdc432p-37f, 0x1.d1ed1cp-96f, 0x1.6fef9ap-4f, 0x1.c174b6p-63f, 0.0f, 0.0f,
     0x1.9f02aap-55f, 0x1.8367b8p-100f, 0x1.ee0c0cp-84f, 0x1.958b28p-64f, 0.0f, 0.0f,
     0x1.a0b6e2p-59f, 0x1.2b90f6p-21f, 0.0f, 0x1.6263acp-63f, 0.0f, 0.0f,
     0x1.315708p-79f, 0x1.e0fep-53f, 0.0f, 0.0f, 0x1.48f89ep-79f, 0x1.9572e6p-113f,
     0.0f, 0x1.9c641ap-91f, 0.0f, 0x1.419d2cp-18f, 0x1.dc27d8p-35f, 0x1.a6aa34p-30f,
     0.0f, 0x1.115b5p-8f, 0.0f, 0.0f, 0x1.f75d9cp-37f, 0x1.c61452p-122f,
     0x1.d48fbep-108f, 0x1.2cafeep-68f, 0.0f, 0.0f, 0x1.7a7c06p-45f, 0.0f, 0.0f,
     0x1.10dcc4p-23f, 0.0f, 0x1.d43f9cp-63f, 0.0f, 0x1.e4687p-67f, 0.0f, 0.0f, 0.0f,
     0x1.09863ap-101f, 0.0f, 0x1.4ba58ap-9f, 0.0f, 0x1.f1d43p-28f, 0.0f,
     0x1.1cbf18p-16f, 0.0f, 0x1.c3498ap-14f, 0.0f, 0x1.ef3282p-77f, 0.0f,
     0x1.4f8fbcp-107f, 0x1.a113f6p-44f, 0.0f, 0.0f, 0x1.2c41f2p-83f, 0.0f,
     0x1.da8382p-58f, 0x1.8450ccp-102f, 0x1.86a694p-11f, 0x1.ac634ep-35f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.585fdp-62f, 0.0f, 0x1.0e3ea4p-57f, 0x1.daa158p-119f,
     0x1.bb96cep-11f, 0x1.c597aap-118f, 0x1.9c0312p-70f, 0.0f, 0.0f, 0x1.ba49f6p-22f,
     0x1.136cdep-49f, 0.0f, 0x1.7c958p-105f, 0x1.a17dcap-69f, 0x1.da9646p-81f,
     0x1.10b55ap-28f, 0x1.e9efd2p-76f, 0.0f, 0.0f, 0.0f, 0x1.0f444cp-102f, 0.0f,
     0x1.56b82ep-85f, 0.0f, 0x1.9bb0bep-73f, 0.0f, 0.0f, 0x1.2df0e4p-113f,
     0x1.efa64cp-114f, 0x1.a6c5d6p-114f, 0x1.f9a704p-77f, 0x1.d93fc2p-100f,
     0x1.f5febp-78f, 0x1.172c78p-24f, 0.0f, 0.0f, 0x1.7df85cp-108f, 0.0f,
     0x1.3119cep-47f, 0.0f, 0.0f, 0x1.5c7abcp-70f, 0.0f, 0x1.0b3174p-85f, 0.0f,
     0x1.f827eap-47f, 0.0f, 0.0f, 0x1.df862ap-69f, 0x1.fe2e48p-123f, 0.0f, 0.0f,
     0x1.bf2f84p-55f, 0x1.64cccep-5f, 0.0f, 0x1.49634ap-13f, 0x1.7d3c5p-14f, 0.0f,
     0x1.692c42p-52f, 0.0f, 0.0f, 0.0f, 0x1.1a5162p-122f, 0x1.3ab668p-22f, 0.0f,
     0x1.a011d6p-41f, 0x1.8b1de8p-84f, 0x1.ae600ap-121f, 0.0f, 0x1.80b61ap-16f,
     0x1.8b0712p-40f, 0x1.77718p-77f, 0x1.a4799p-66f, 0x1.e88136p-123f,
     0x1.660188p-38f, 0x1.5d7456p-68f, 0x1.20dd9ep-73f, 0.0f, 0x1.c2e24ep-14f, 0.0f,
     0x1.2b8ffcp-121f, 0x1.b7e2dap-90f, 0x1.248128p-59f, 0.0f, 0x1.026e42p-53f,
     0x1.e1483ep-19f, 0.0f, 0x1.b62be2p-71f, 0x1.2897cap-26f, 0.0f, 0.0f,
     0x1.5d4058p-83f, 0x1.37854ap-5f, 0.0f, 0x1.10e87cp-94f, 0.0f, 0.0f,
     0x1.bbb652p-20f, 0x1.bbda54p-71f, 0x1.62f5ccp-73f, 0.0f, 0x1.629246p-113f,
     0x1.95d994p-59f, 0x1.0674cp-89f, 0.0f, 0x1.3676ecp-85f, 0.0f, 0.0f,
     0x1.c8cba2p-64f, 0.0f, 0x1.0da196p-105f, 0.0f, 0.0f, 0x1.9a81a4p-1f, 0.0f,
     0x1.87182p-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c950acp-23f, 0x1.024822p-40f, 0.0f,
     0x1.a07048p-50f, 0.0f, 0.0f, 0.0f, 0x1.1c5718p-101f, 0.0f, 0x1.fbe384p-70f,
     0x1.625c32p-91f, 0.0f, 0x1.8fa22cp-123f, 0.0f, 0.0f, 0x1.6d127cp-126f,
     0x1.59734cp-103f, 0x1.b8cd76p-26f, 0x1.c71accp-53f, 0.0f, 0x1.8e715ap-122f,
     0x1.92fd88p-4f, 0x1.dd818ep-87f, 0.0f, 0x1.edaa0ep-91f, 0x1.0a783p-29f,
     0x1.d3b1bep-47f, 0.0f, 0.0f, 0x1.837d6ap-56f
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
            tmp1 = Sleef_finz_tanhf8_u10kvx(tmp0);
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
    printf("Sleef_finz_tanhf8_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_finz_tanhf8_u10kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
