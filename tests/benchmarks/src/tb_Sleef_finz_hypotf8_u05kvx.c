/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_hypotf8_u05kvx.c --function \
 *     Sleef_finz_hypotf8_u05kvx --arity 2 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32,binary32 --vector-size 8 \
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
     0x1.a11bbep-23f, 0x1.734262p-79f, 0.0f, 0x1.06374p-8f, 0x1.d6a94p-101f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.13913ap-62f, 0x1.bedcecp-58f, 0.0f, 0.0f, 0x1.d418a8p-92f,
     0x1.80434cp-32f, 0x1.ea75c4p-101f, 0x1.69a0ccp-15f, 0x1.75cb26p-42f, 0.0f, 0.0f,
     0x1.e03c64p-17f, 0.0f, 0x1.56f358p-85f, 0.0f, 0x1.2c9846p-32f, 0.0f,
     0x1.21ba56p-28f, 0.0f, 0.0f, 0x1.0006b4p-70f, 0x1.3e99ep-49f, 0.0f,
     0x1.af8e58p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.011bdep-95f, 0x1.a6a434p-34f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.868384p-19f, 0x1.75a166p-46f, 0.0f, 0x1.3085a8p-39f,
     0x1.07cdf8p-42f, 0x1.629f5p-51f, 0.0f, 0x1.80d33ap-85f, 0x1.a1c6a8p-34f, 0.0f,
     0x1.ffdb86p-83f, 0.0f, 0x1.0ca452p-96f, 0x1.7197b6p-105f, 0x1.e0d638p-83f, 0.0f,
     0x1.f1548cp-117f, 0.0f, 0x1.1f62fep-94f, 0.0f, 0x1.371f88p-59f, 0x1.ed70f8p-71f,
     0x1.30e9e6p-49f, 0x1.a898dap-25f, 0x1.19039cp-1f, 0x1.4cdcacp-78f,
     0x1.5c760ap-23f, 0x1.72c67ep-44f, 0x1.0cd2a8p-3f, 0x1.830ebcp-1f, 0x1.6de0fp-63f,
     0x1.2e9c8ep-61f, 0.0f, 0x1.ebf6a8p-65f, 0.0f, 0.0f, 0.0f, 0x1.6ac6a2p-81f, 0.0f,
     0.0f, 0x1.9ec20ep-120f, 0.0f, 0x1.823a5ep-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ab3f56p-125f, 0.0f, 0x1.ee66bep-8f, 0x1.77a0f2p-61f,
     0x1.67264p-111f, 0x1.cd86p-83f, 0x1.73e4c6p-30f, 0x1.71e8f2p-81f,
     0x1.8ad352p-31f, 0x1.b67182p-30f, 0.0f, 0x1.7da49p-90f, 0x1.f45148p-50f,
     0x1.6302bap-20f, 0.0f, 0x1.caaffap-41f, 0.0f, 0.0f, 0.0f, 0x1.aa17a4p-55f,
     0x1.6ec25ep-121f, 0x1.acd904p-5f, 0x1.c1254ap-73f, 0.0f, 0x1.cda5b4p-15f, 0.0f,
     0x1.4c8dfp-63f, 0x1.7a8b2p-23f, 0x1.27ef02p-84f, 0x1.64af0ep-124f, 0.0f, 0.0f,
     0.0f, 0x1.29eb32p-5f, 0x1.15aba4p-33f, 0.0f, 0.0f, 0x1.55f19p-56f, 0.0f,
     0x1.a2ff22p-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b4a8c4p-60f, 0x1.1341e8p-87f,
     0.0f, 0x1.61ae5cp-13f, 0x1.ff51a4p-120f, 0.0f, 0.0f, 0x1.16d62p-111f,
     0x1.16b32ap-41f, 0x1.b9f09cp-95f, 0x1.e3b02ep-3f, 0x1.55ec6p-38f,
     0x1.b88deap-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ef4c5ep-8f, 0.0f,
     0x1.c6ffc6p-35f, 0x1.de9462p-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7f5b58p-119f, 0.0f, 0x1.dd4e48p-61f, 0.0f, 0.0f, 0x1.d2c00ap-85f, 0.0f, 0.0f,
     0x1.7b477ap-123f, 0x1.0fd4ccp-100f, 0x1.4b767ep-71f, 0x1.8e87c8p-65f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ea5b2p-95f, 0x1.928164p-117f, 0.0f, 0x1.80f908p-108f,
     0x1.75fc08p-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.181352p-87f, 0.0f, 0.0f,
     0x1.b25afap-109f, 0.0f, 0x1.8987d6p-37f, 0.0f, 0x1.87027p-100f, 0x1.51202ep-106f,
     0x1.b0337ap-41f, 0.0f, 0x1.52e206p-35f, 0x1.2ac26ap-30f, 0x1.422df6p-7f, 0.0f,
     0x1.2a79b4p-51f, 0.0f, 0.0f, 0x1.43523cp-40f, 0.0f, 0x1.d1273ep-18f, 0.0f,
     0x1.85e886p-84f, 0.0f, 0.0f, 0x1.e2022cp-107f, 0x1.8b5856p-58f, 0x1.9a5c2cp-8f,
     0x1.1f2568p-52f, 0x1.271e7p-87f, 0.0f, 0x1.19ecbcp-17f, 0.0f, 0.0f, 0.0f,
     0x1.03fbf4p-21f, 0x1.1e525cp-109f, 0.0f, 0x1.4a3a2cp-13f, 0.0f, 0x1.a63742p-76f,
     0.0f, 0.0f, 0.0f, 0x1.257c9ep-31f, 0.0f, 0x1.097c12p-76f, 0.0f, 0.0f,
     0x1.26c078p-118f, 0x1.ef911cp-3f, 0x1.1f376cp-37f, 0.0f, 0x1.39536p-63f,
     0x1.d726b8p-7f, 0x1.4c48fep-79f, 0.0f, 0.0f, 0.0f, 0x1.9eb87ep-97f,
     0x1.8a7646p-29f, 0.0f, 0x1.51109ep-86f, 0x1.f0d61ap-2f, 0x1.9f9ee4p-53f, 0.0f,
     0x1.77ee84p-48f, 0.0f, 0.0f, 0x1.e78422p-109f, 0.0f, 0x1.712722p-32f,
     0x1.a80b6cp-93f, 0.0f, 0x1.0d09f2p-81f, 0x1.db6448p-46f, 0.0f, 0.0f,
     0x1.7e223p-40f, 0.0f, 0.0f, 0.0f, 0x1.1ec072p-37f, 0x1.d83158p-97f,
     0x1.5de202p-49f, 0x1.36ca02p-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f4e9a6p-65f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4c05bcp-52f, 0.0f, 0x1.ac35a6p-67f,
     0.0f, 0x1.6c6774p-13f, 0x1.f0c51ep-40f, 0.0f, 0x1.5ead0cp-79f, 0x1.f96784p-30f,
     0x1.23a528p-16f, 0x1.579c5ep-43f, 0x1.d95002p-45f, 0.0f, 0x1.d54d26p-47f, 0.0f,
     0.0f, 0.0f, 0x1.9b8e9ep-33f, 0.0f, 0.0f, 0.0f, 0x1.ebec06p-123f, 0.0f, 0.0f,
     0x1.8c9752p-93f, 0.0f, 0x1.bbbbeap-125f, 0x1.d1796p-29f, 0.0f, 0x1.8a63e6p-6f,
     0x1.d07bcp-64f, 0x1.05e56ap-107f, 0x1.2e1d56p-109f, 0x1.14a896p-66f, 0.0f,
     0x1.5b8fd8p-11f, 0.0f, 0.0f, 0x1.62623cp-126f, 0.0f, 0.0f, 0.0f,
     0x1.d5c8a8p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.33008ep-114f, 0.0f,
     0x1.b976c6p-99f, 0.0f, 0x1.4037e4p-90f, 0.0f, 0x1.529adcp-124f, 0x1.1c26bp-35f,
     0x1.761feep-12f, 0.0f, 0.0f, 0x1.629926p-34f, 0.0f, 0.0f, 0x1.a319a4p-116f, 0.0f,
     0.0f, 0x1.5a886ep-95f, 0.0f, 0x1.364c96p-40f, 0.0f, 0x1.2bafd2p-86f, 0.0f, 0.0f,
     0x1.96f81ap-39f, 0x1.afc66p-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1d9bbcp-70f, 0.0f,
     0.0f, 0.0f, 0x1.bb45e2p-90f, 0x1.fd76dp-21f, 0.0f, 0x1.a82912p-52f,
     0x1.d8fb86p-88f, 0x1.d06668p-103f, 0.0f, 0x1.8240fep-2f, 0.0f, 0x1.b0dd5ep-20f,
     0.0f, 0x1.cf823p-120f, 0.0f, 0x1.30ee1ep-56f, 0x1.dc2e62p-76f, 0.0f, 0.0f,
     0x1.d5f7acp-61f, 0x1.0dc0acp-4f, 0.0f, 0x1.60665ap-78f, 0x1.bd220ep-2f,
     0x1.682b5ap-66f, 0.0f, 0x1.733502p-6f, 0x1.4ad02ap-39f, 0.0f, 0x1.e3cac8p-18f,
     0x1.3a0f84p-102f, 0.0f, 0.0f, 0x1.06656ep-41f, 0.0f, 0.0f, 0x1.1de39ep-86f,
     0x1.467ff2p-54f, 0x1.a11b28p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8859fp-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.994a62p-5f, 0.0f, 0.0f,
     0x1.f2af32p-8f, 0.0f, 0.0f, 0.0f, 0x1.020a02p-46f, 0x1.8a4df2p-25f,
     0x1.6c79ep-12f, 0x1.ad8c0cp-5f, 0.0f, 0x1.11be18p-27f, 0.0f, 0.0f,
     0x1.202554p-39f, 0.0f, 0.0f, 0.0f, 0x1.bb827ap-96f, 0x1.bf6bfap-8f, 0x1p0f, 0.0f,
     0x1.45797ep-107f, 0x1.41055ap-72f, 0x1.3d86d2p-60f, 0.0f, 0x1.d04d36p-75f,
     0x1.002c9p-80f, 0x1.7aa72cp-52f, 0.0f, 0x1.8376eep-68f, 0.0f, 0x1.f15508p-83f,
     0.0f, 0.0f, 0x1.95f98ep-2f, 0.0f, 0x1.eb8ad2p-120f, 0.0f, 0x1.0ece0ep-38f, 0.0f,
     0.0f, 0x1.7adf74p-120f, 0.0f, 0x1.efa70cp-13f, 0x1.b5bb8p-92f, 0x1.af2eap-123f,
     0x1.9da21p-3f, 0.0f, 0.0f, 0x1.66a9fp-43f, 0x1.d0a286p-28f, 0.0f, 0.0f,
     0x1.abadaep-101f, 0.0f, 0.0f, 0x1.3b87f2p-51f, 0x1.4ab64ap-103f, 0x1.001e7ep-89f,
     0.0f, 0x1.57eb22p-41f, 0x1.c9b73p-122f, 0x1.550692p-17f, 0.0f, 0x1.96229cp-122f,
     0.0f, 0.0f, 0x1.ce8f02p-58f, 0x1.82a6fep-27f, 0.0f, 0x1.67200ap-94f, 0.0f,
     0x1.736176p-60f, 0x1.ff2e5cp-57f, 0.0f, 0x1.bb075cp-14f, 0x1.784b7p-66f, 0.0f,
     0x1.aa4e7p-53f, 0x1.6afe86p-88f, 0x1.fcfd1cp-92f, 0.0f, 0x1.7fad42p-119f,
     0x1.8e7f0ep-14f, 0.0f, 0.0f, 0x1.f58e38p-39f, 0x1.335cep-119f, 0.0f,
     0x1.6752f2p-10f, 0x1.1875dp-72f, 0x1.e3ffb4p-107f, 0.0f, 0.0f, 0.0f,
     0x1.5eabfcp-91f, 0.0f, 0.0f, 0x1.5e94e6p-119f, 0x1.d79f38p-101f, 0x1.875fp-11f,
     0x1.ef64aap-86f, 0.0f, 0x1.762ddep-38f, 0x1.444a62p-29f, 0x1.11d568p-80f, 0.0f,
     0.0f, 0x1.5aad74p-113f, 0x1.daf5dap-2f, 0x1.5f4d82p-98f, 0x1.7ba3bp-11f, 0.0f,
     0.0f, 0x1.649706p-46f, 0x1.6a03eep-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.bd9fb6p-56f, 0x1.f504bep-91f, 0.0f, 0x1.770962p-70f, 0.0f,
     0x1.72b914p-97f, 0x1.535836p-90f, 0.0f, 0.0f, 0.0f, 0x1.f669dp-125f, 0.0f,
     0x1.e00902p-74f, 0x1.62fadp-122f, 0.0f, 0x1.5a52fap-73f, 0.0f, 0.0f, 0.0f,
     0x1.7dc5c2p-120f, 0x1.488666p-56f, 0.0f, 0.0f, 0.0f, 0x1.3569eep-40f,
     0x1.b4aa08p-57f, 0.0f, 0.0f, 0x1.aab46ep-75f, 0x1.8132dep-31f, 0x1.acc17cp-4f,
     0x1.6f8772p-108f, 0x1.1b460cp-103f, 0x1.2ff1e8p-89f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.58dcaap-116f, 0x1.f91c86p-117f, 0.0f, 0.0f, 0x1.0fce66p-49f,
     0.0f, 0x1.41c1a4p-50f, 0.0f, 0x1.d6980ep-103f, 0x1.f029ecp-48f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.1711a2p-98f, 0.0f, 0x1.f63fb8p-48f, 0x1.c4878ep-35f, 0x1.7be436p-34f,
     0x1.0c9bc4p-105f, 0x1.2e7788p-112f, 0x1.89d088p-101f, 0x1.1cb8c8p-12f,
     0x1.b8f7e6p-86f, 0.0f, 0.0f, 0x1.6fa196p-56f, 0.0f, 0x1.b4bdf2p-49f,
     0x1.daa3bep-96f, 0x1.dd70b6p-62f, 0.0f, 0.0f, 0.0f, 0x1.b0881ap-41f, 0.0f, 0.0f,
     0x1.f62d5ap-107f, 0.0f, 0x1.adb7bap-49f, 0x1.94e8acp-103f, 0x1.84c9bcp-15f, 0.0f,
     0.0f, 0.0f, 0x1.f7d1bp-31f, 0.0f, 0.0f, 0x1.e6a9acp-64f, 0.0f, 0x1.dcca4p-9f,
     0x1.5c5372p-11f, 0.0f, 0x1.3e3952p-63f, 0x1.1c10cp-25f, 0x1.a8b4eap-32f,
     0x1.e7eeaap-89f, 0.0f, 0x1.a0071ep-20f, 0x1.a06b88p-61f, 0.0f, 0x1.9f44c6p-113f,
     0x1.6d31dcp-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bc3574p-111f,
     0x1.61726ap-126f, 0.0f, 0.0f, 0.0f, 0x1.f5375p-19f, 0x1.11e21cp-33f, 0.0f,
     0x1.afb254p-12f, 0x1.50f86ap-121f, 0x1.b769dcp-119f, 0x1.0de1cp-60f,
     0x1.5af134p-95f, 0.0f, 0.0f, 0x1.21bf88p-103f, 0x1.223bcap-71f, 0x1.f6830ep-40f,
     0x1.a117fap-98f, 0.0f, 0x1.809a62p-42f, 0.0f, 0x1.7b4e5p-5f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.233d0ep-78f, 0.0f, 0x1.79461ap-124f, 0x1.4a7344p-43f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.74533cp-29f, 0x1.652938p-43f, 0x1.84f8e4p-112f, 0.0f, 0.0f,
     0x1.28f2p-93f, 0x1.4ea6b4p-55f, 0.0f, 0x1.d9e292p-118f, 0.0f, 0.0f, 0.0f,
     0x1.ce6488p-112f, 0.0f, 0x1.bd672p-10f, 0x1.432a82p-39f, 0.0f, 0x1.19ee7ep-99f,
     0.0f, 0x1.ee799cp-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7f223cp-95f, 0.0f, 0.0f, 0.0f,
     0x1.f3f51ap-30f, 0.0f, 0x1.fbafb8p-123f, 0x1p0f, 0x1.764146p-70f,
     0x1.f59664p-122f, 0x1.d263dcp-101f, 0.0f, 0x1.3cd2ap-112f, 0.0f, 0x1.4e1c4ep-46f,
     0.0f, 0x1.46cdf8p-74f, 0x1.7f1e84p-85f, 0.0f, 0x1.3f43aap-7f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.6aba54p-32f, 0.0f, 0.0f, 0x1.8db01ap-64f, 0x1.c92a52p-80f,
     0x1.08317cp-47f, 0x1.3981cep-58f, 0x1.b39794p-72f, 0x1.dbbbbp-84f, 0.0f, 0.0f,
     0x1.285572p-61f, 0x1.ec12bep-12f, 0x1.01b3f4p-109f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e1c1d8p-55f, 0x1.0e7c7ep-110f, 0.0f, 0x1.708adp-74f, 0.0f, 0x1.ec6b46p-47f,
     0.0f, 0x1.cb1e4p-61f, 0x1.230ee2p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.618d9ep-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d94d72p-3f, 0.0f, 0.0f,
     0x1.a6c7f8p-78f, 0x1.faa976p-123f, 0.0f, 0x1.ecef2ep-116f, 0x1.5dd92ep-100f,
     0.0f, 0x1.f85d7cp-117f, 0x1.d88a74p-123f, 0x1.c5e954p-76f, 0.0f, 0x1.777c44p-83f,
     0x1.f80732p-46f, 0x1.9f90a4p-31f, 0x1.c5b9c2p-121f, 0x1.bf3ef2p-53f, 0.0f, 0.0f,
     0.0f, 0x1.353dcap-62f, 0.0f, 0.0f, 0.0f, 0x1.bb757p-11f, 0x1.192c7cp-102f,
     0x1.d52e1ap-12f, 0.0f, 0x1.95a4b4p-10f, 0.0f, 0x1.57fbbp-35f, 0.0f,
     0x1.8be88cp-105f, 0x1.e21f6ap-117f, 0.0f, 0x1.d6101p-84f, 0.0f, 0x1.e86ef2p-5f,
     0.0f, 0.0f, 0x1.b2704ap-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ca5936p-11f,
     0x1.0aec4cp-13f, 0.0f, 0x1.a92ca4p-126f, 0x1.df130cp-90f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b66558p-39f, 0x1.989014p-2f, 0x1.728cc6p-103f, 0.0f, 0x1.3afbd8p-95f,
     0x1.5db136p-116f, 0.0f, 0x1.ae4e5ep-123f, 0x1.83b1b8p-48f, 0x1.39cf48p-11f, 0.0f,
     0x1.7fc79ep-126f, 0x1.1769e8p-114f, 0x1.be881ap-68f, 0.0f, 0x1.13417ep-99f,
     0x1.a76cbep-37f, 0x1.0c880cp-4f, 0x1.bc252ap-37f, 0.0f, 0x1.7f5866p-32f,
     0x1.0d4c84p-60f, 0x1.64f82p-103f, 0.0f, 0x1.011262p-32f, 0x1.576a46p-11f,
     0x1.4236fcp-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.794546p-16f, 0x1.2dbde8p-115f, 0.0f,
     0x1.a2bbf2p-94f, 0x1.f5124p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0c5fbcp-85f, 0x1.041aeap-71f, 0.0f, 0.0f, 0x1.fd0ba6p-47f, 0x1.2109a4p-59f,
     0x1.5ffd4p-40f, 0x1.702e1p-63f, 0x1.55b8e6p-43f, 0x1.484f4ep-119f,
     0x1.a4aac2p-64f, 0x1.406c3p-39f, 0.0f, 0.0f, 0.0f, 0x1.e7e41ep-39f,
     0x1.d1e1fap-37f, 0.0f, 0x1.04e108p-120f, 0x1.e3fdap-79f, 0.0f, 0.0f,
     0x1.e24a9ap-44f, 0.0f, 0.0f, 0x1.250decp-31f, 0x1.6d20bcp-12f, 0x1.27063cp-56f,
     0.0f, 0x1.ab8fbp-12f, 0x1.4ab22ap-57f, 0.0f, 0x1.d27e84p-115f, 0.0f,
     0x1.9fe176p-69f, 0x1.98bcc4p-91f, 0x1.72114ep-13f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.874bep-42f, 0x1.73b966p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9ef6ep-123f,
     0x1.e409fap-66f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.c1fd98p-72f, 0x1.e93084p-38f,
     0.0f, 0x1.1ecf14p-122f, 0x1.0fcecap-52f, 0x1.52a6aap-15f, 0x1.e150f2p-64f, 0.0f,
     0x1.b7d78ep-2f, 0.0f, 0x1.de2dd2p-15f, 0x1.e154dp-95f, 0x1.f5b192p-81f, 0.0f,
     0x1.6c94dp-78f, 0x1.6fefcp-67f, 0.0f, 0x1.777488p-83f, 0x1.01958p-20f, 0.0f,
     0x1.6f67d8p-106f, 0.0f, 0x1.7ecf84p-122f, 0x1.304a02p-103f, 0x1.d4fe06p-123f,
     0x1.4e5024p-67f, 0x1.995574p-11f, 0x1.8e046ep-16f, 0.0f, 0.0f, 0x1.ef6e12p-23f,
     0.0f, 0.0f, 0x1.db41ep-24f, 0x1.b44138p-39f, 0.0f, 0x1.86566ap-67f, 0.0f,
     0x1.ad1468p-101f, 0x1.d73a74p-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ad3fap-56f, 0.0f,
     0.0f, 0.0f, 0x1.ea4928p-43f, 0x1.ecb78cp-75f, 0x1.2798b8p-1f, 0x1.02c448p-70f,
     0x1.bb8c4p-98f, 0.0f, 0x1.feed14p-56f, 0x1.88183cp-71f, 0x1.041528p-41f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.962f3p-2f, 0.0f, 0x1.301feap-59f, 0x1.d6b7e6p-36f, 0.0f,
     0.0f, 0x1.780ce2p-17f, 0x1.98dc14p-102f, 0.0f, 0x1.1115f6p-51f, 0.0f, 0.0f, 0.0f
};
static const float external_bench_wrapper_input_table_arg1[1008]  = {
     0.0f, 0x1.2beae6p-34f, 0x1.3dbffcp-72f, 0x1.12b414p-67f, 0.0f, 0.0f, 0.0f,
     0x1.cc1b08p-12f, 0.0f, 0.0f, 0.0f, 0x1.f2cdcp-65f, 0.0f, 0.0f, 0x1.294dbp-10f,
     0x1.03508ap-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.46807cp-8f, 0.0f,
     0x1.792b7ep-46f, 0x1.cf13b4p-17f, 0x1.e974a6p-11f, 0x1.6f4b32p-63f,
     0x1.867444p-98f, 0.0f, 0x1.f686a2p-100f, 0x1.d95bfp-110f, 0.0f, 0x1.e2af3ep-55f,
     0x1.1d7378p-64f, 0.0f, 0.0f, 0x1.1b229p-27f, 0.0f, 0x1.197464p-95f,
     0x1.27dd0cp-31f, 0.0f, 0.0f, 0x1.215fa6p-80f, 0.0f, 0x1.e29fb8p-81f,
     0x1.5348ap-69f, 0.0f, 0x1.fa5c2p-124f, 0.0f, 0x1.53ad7ep-86f, 0.0f, 0.0f,
     0x1.44ac58p-59f, 0.0f, 0x1.aa746p-37f, 0x1.96cd06p-6f, 0.0f, 0x1.3a0366p-17f,
     0x1.c42e36p-38f, 0.0f, 0x1.4aca0ap-67f, 0.0f, 0.0f, 0.0f, 0x1.3a74dp-99f, 0.0f,
     0.0f, 0.0f, 0x1.acfbdcp-84f, 0.0f, 0.0f, 0x1.d927d6p-81f, 0.0f, 0.0f, 0.0f,
     0x1.c07ac6p-66f, 0.0f, 0x1.5a6d98p-118f, 0.0f, 0x1.4842acp-29f, 0.0f, 0.0f, 0.0f,
     0x1.11fa34p-53f, 0x1.8d6048p-13f, 0.0f, 0.0f, 0x1.550742p-56f, 0.0f,
     0x1.8fe7d6p-25f, 0x1.cc4106p-6f, 0x1.527f44p-36f, 0x1.a30c9ap-81f, 0.0f, 0.0f,
     0.0f, 0x1.11ad3ap-102f, 0.0f, 0x1.d9af4cp-34f, 0.0f, 0.0f, 0.0f, 0x1.71e924p-28f,
     0x1.02f6acp-105f, 0.0f, 0x1.aea60ep-47f, 0.0f, 0x1.585e86p-9f, 0x1.0ce038p-113f,
     0.0f, 0x1.97c8a6p-115f, 0.0f, 0x1.64c568p-38f, 0.0f, 0x1.812b82p-66f,
     0x1.c2195cp-6f, 0.0f, 0x1.d3d692p-3f, 0.0f, 0x1.87b1e8p-38f, 0x1.16a8b4p-89f,
     0x1.a9565p-73f, 0.0f, 0.0f, 0x1.31e3d8p-29f, 0.0f, 0x1.db64cap-99f,
     0x1.cf0f66p-35f, 0.0f, 0x1.23f6fp-90f, 0x1.0f179p-30f, 0x1.07fc6cp-18f,
     0x1.86124ap-5f, 0x1.f85328p-44f, 0.0f, 0x1.96ec1ep-39f, 0x1.455674p-29f,
     0x1.ff5f2ep-111f, 0.0f, 0.0f, 0x1.0ef28ap-83f, 0.0f, 0x1.80021cp-50f, 0.0f,
     0x1.814578p-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d911c8p-59f, 0x1.9ad87ep-91f,
     0.0f, 0x1.93c44p-35f, 0.0f, 0x1.6f36d6p-73f, 0x1.313b96p-88f, 0.0f,
     0x1.be423ap-124f, 0.0f, 0.0f, 0.0f, 0x1.ba967ep-84f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f4eb52p-67f, 0.0f, 0x1.14392ap-38f, 0.0f, 0x1.cae64p-87f, 0.0f,
     0.0f, 0.0f, 0x1.62d25ep-106f, 0.0f, 0.0f, 0x1.abc672p-30f, 0.0f, 0x1.5b752p-125f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.bb7008p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0e92dap-106f, 0.0f, 0x1.59a33ap-91f, 0x1.0d4bd2p-110f, 0.0f, 0x1.4f2b96p-43f,
     0x1.379868p-67f, 0.0f, 0x1.5ea6cep-68f, 0.0f, 0x1.b1138ap-13f, 0.0f,
     0x1.7c3dd8p-51f, 0x1.c7344ep-32f, 0.0f, 0.0f, 0x1.9fa7dp-23f, 0x1.8bf31p-40f,
     0x1.7bc9bep-7f, 0x1.ce34dp-63f, 0x1.69d78cp-71f, 0.0f, 0x1p0f, 0x1.6a3f82p-44f,
     0x1.b19c9ap-109f, 0x1.6ab69cp-56f, 0.0f, 0x1.140b44p-35f, 0x1.66669ap-44f,
     0x1.2fb93p-80f, 0x1.75b174p-97f, 0x1.ddc6b6p-107f, 0x1.eedb8ap-110f,
     0x1.ebd546p-33f, 0x1.806084p-78f, 0x1.303d4p-22f, 0.0f, 0x1.8190e4p-3f,
     0x1.62dd9cp-89f, 0.0f, 0.0f, 0x1.c41954p-15f, 0x1.196bf6p-63f, 0.0f,
     0x1.cbfdc6p-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.709f56p-44f, 0x1.bee938p-22f,
     0x1.9b3d72p-51f, 0.0f, 0.0f, 0x1.ca37ep-92f, 0x1.36e142p-4f, 0x1.41af5ep-73f,
     0.0f, 0x1.e7ae68p-93f, 0.0f, 0x1.3c08a2p-90f, 0x1.201ab2p-60f, 0.0f,
     0x1.796454p-126f, 0.0f, 0x1.8f45c4p-7f, 0.0f, 0.0f, 0.0f, 0x1.f2f668p-52f,
     0x1.4a0132p-37f, 0x1.f71228p-113f, 0.0f, 0x1.8ff192p-26f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c7cd38p-121f, 0.0f, 0x1.c9e1acp-80f, 0x1.635aa4p-86f, 0x1.3c405cp-86f, 0.0f,
     0x1.414314p-59f, 0.0f, 0x1.bcd32ep-67f, 0x1.5d31f4p-42f, 0.0f, 0x1.66fa32p-122f,
     0x1.28bde2p-65f, 0x1.5baa7ep-54f, 0x1.e30018p-9f, 0.0f, 0x1.ca34fcp-52f, 0.0f,
     0.0f, 0.0f, 0x1.de5fbep-31f, 0.0f, 0x1.26761p-102f, 0x1.ba41eap-30f,
     0x1.151344p-97f, 0.0f, 0x1.956a36p-76f, 0.0f, 0x1.c891e4p-29f, 0x1.3a6c5p-72f,
     0x1.9cd828p-48f, 0x1.5a3854p-12f, 0x1.4722c8p-48f, 0x1.8340e4p-88f,
     0x1.8ec188p-111f, 0.0f, 0.0f, 0.0f, 0x1.3e523p-102f, 0x1.440a88p-90f, 0.0f, 0.0f,
     0x1.0b93bep-118f, 0x1.842d2cp-65f, 0.0f, 0x1.fa2daap-16f, 0x1.e7600cp-80f,
     0x1.e2a3bcp-15f, 0x1.1d18a8p-76f, 0.0f, 0x1.47dccap-119f, 0x1.76d64cp-105f,
     0x1.428b9p-64f, 0x1.4940e4p-23f, 0x1.6105c4p-62f, 0x1.f19ad2p-39f,
     0x1.313eb2p-66f, 0x1.166548p-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.49f458p-114f,
     0.0f, 0x1.a824fap-4f, 0x1.0a9446p-4f, 0x1.5bd6f6p-94f, 0x1.a88a6cp-92f, 0.0f,
     0x1.a8d674p-90f, 0x1.aa2e6cp-117f, 0x1.d4b856p-15f, 0x1.efa456p-97f,
     0x1.b340aep-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.195c3cp-97f,
     0x1.c987d6p-5f, 0.0f, 0x1.73e0dap-98f, 0x1.2707fep-56f, 0x1.8cd644p-121f,
     0x1.ad7a06p-12f, 0.0f, 0.0f, 0x1.93cd5ap-53f, 0.0f, 0x1.9ca0b2p-44f,
     0x1.c4e75ep-95f, 0.0f, 0.0f, 0x1.488442p-36f, 0x1.f149a2p-85f, 0.0f, 0.0f, 0.0f,
     0x1.3f2d6cp-71f, 0.0f, 0.0f, 0x1.465f14p-54f, 0.0f, 0.0f, 0.0f, 0x1.76068ap-7f,
     0.0f, 0.0f, 0x1.63623p-37f, 0x1.4b8a3p-46f, 0x1.6ffca4p-123f, 0x1.b25bdep-75f,
     0x1.a0c406p-76f, 0x1.69d0f6p-72f, 0.0f, 0x1.acc55ep-95f, 0.0f, 0x1.f25ca4p-108f,
     0x1.8aa0bcp-1f, 0x1.078b62p-89f, 0x1.97d78cp-23f, 0x1.2f1212p-98f, 0.0f, 0.0f,
     0x1.d85082p-57f, 0x1.16c15ap-43f, 0.0f, 0x1.12571ep-61f, 0.0f, 0.0f,
     0x1.1359cp-103f, 0x1.17aa2ep-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fbfd7cp-96f,
     0x1.689ed2p-57f, 0x1.786336p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0ca348p-5f,
     0.0f, 0x1.4c0d54p-8f, 0x1.6624aep-116f, 0x1.08573p-91f, 0x1.983dep-56f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.98412p-25f, 0.0f, 0x1.c16d06p-95f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.582aap-34f, 0.0f, 0.0f, 0.0f, 0x1.3d727p-105f, 0.0f,
     0x1.2d83aep-69f, 0x1.9ee104p-109f, 0x1.4bb57ap-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8732e4p-103f, 0x1.975a98p-91f, 0x1.deaf9ep-22f, 0.0f, 0x1.eaedeep-113f,
     0x1.b46f94p-90f, 0x1.a4c4dap-47f, 0.0f, 0.0f, 0x1.40dd6ep-109f, 0x1.50f736p-126f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dcae82p-36f, 0x1.9dfcc6p-96f, 0.0f,
     0x1.2bb37ap-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2905b6p-103f, 0x1.a0111p-118f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a8abc8p-4f, 0x1.a2bd76p-123f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ea0f6cp-106f, 0x1.599p-14f, 0.0f, 0.0f,
     0x1.0d37bcp-94f, 0x1.538c6ap-82f, 0x1.4ff328p-52f, 0x1.c17952p-75f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4f1fb8p-10f, 0.0f, 0x1.591614p-62f, 0.0f, 0x1.2d10d4p-102f,
     0x1.1bea7cp-26f, 0x1.26fb5p-15f, 0.0f, 0x1.5306cep-19f, 0x1.7cf70cp-104f,
     0x1.795bf8p-30f, 0.0f, 0x1.418df2p-116f, 0x1.7b065ep-6f, 0.0f, 0x1.d26382p-41f,
     0.0f, 0.0f, 0x1.f1af32p-113f, 0.0f, 0x1.04163ap-82f, 0.0f, 0.0f, 0.0f,
     0x1.701778p-83f, 0x1.f877f6p-126f, 0.0f, 0x1.d374d4p-99f, 0.0f, 0.0f,
     0x1.75328p-60f, 0x1.c6c4c6p-113f, 0x1.a42de2p-18f, 0x1.22419ap-24f, 0.0f,
     0x1.17ed3ap-89f, 0.0f, 0x1.95ff06p-82f, 0x1.9832a4p-123f, 0x1.24ea2p-49f,
     0x1.4e4118p-52f, 0.0f, 0.0f, 0x1.a4caa8p-110f, 0.0f, 0.0f, 0x1.7cffbcp-29f, 0.0f,
     0x1.acf4a4p-110f, 0x1.fdd592p-57f, 0.0f, 0x1.8ee8e2p-39f, 0x1.ddadb6p-71f,
     0x1.8fdf78p-65f, 0x1.a01cd6p-15f, 0.0f, 0.0f, 0.0f, 0x1.256c78p-72f, 0.0f, 0.0f,
     0.0f, 0x1.c777bcp-108f, 0x1.612c68p-100f, 0x1.062ebap-63f, 0.0f, 0.0f,
     0x1.cda446p-83f, 0x1.63a6ccp-56f, 0.0f, 0.0f, 0x1.7f5494p-43f, 0x1.f78078p-9f,
     0.0f, 0x1.b95728p-101f, 0.0f, 0x1.b33974p-94f, 0.0f, 0x1.e332cap-106f, 0.0f,
     0.0f, 0x1.87badcp-49f, 0x1.bb0b4ap-70f, 0x1.a441eep-116f, 0x1.67476cp-39f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.caa06ap-107f, 0x1.6f213cp-45f, 0.0f,
     0x1.52b7d6p-85f, 0.0f, 0.0f, 0x1.f1dfa6p-8f, 0x1.92ddbp-42f, 0.0f,
     0x1.392c28p-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.42f218p-33f,
     0x1.8dc668p-6f, 0x1.622914p-50f, 0x1.3285eep-119f, 0x1.9cdbf4p-58f,
     0x1.a31778p-74f, 0x1.e363a4p-49f, 0x1.eef548p-125f, 0x1.746a1p-114f,
     0x1.90d78p-5f, 0x1.795a42p-94f, 0.0f, 0.0f, 0.0f, 0x1.86b75p-90f, 0.0f, 0.0f,
     0.0f, 0x1.f479aep-22f, 0.0f, 0x1.6912ecp-74f, 0x1.06e4p-92f, 0x1.28803ep-19f,
     0x1.a88bccp-1f, 0.0f, 0x1.565ffp-24f, 0x1.31ef92p-103f, 0.0f, 0x1.42b6bap-14f,
     0.0f, 0x1.1ef568p-100f, 0.0f, 0.0f, 0x1.0d63fcp-28f, 0.0f, 0.0f, 0x1.80b788p-94f,
     0x1.05d82cp-117f, 0.0f, 0.0f, 0x1.0e9884p-97f, 0.0f, 0x1.1491acp-54f, 0.0f, 0.0f,
     0x1.65575cp-1f, 0.0f, 0.0f, 0x1.d54fe6p-103f, 0x1.5210cep-12f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.7b9adap-75f, 0.0f, 0x1.93a682p-117f, 0x1.14e1a8p-58f, 0x1.f38e6p-57f,
     0x1.04b2fap-86f, 0x1.ef24fep-100f, 0.0f, 0.0f, 0.0f, 0x1.c2e6b6p-115f, 0.0f,
     0x1.d2ee62p-23f, 0.0f, 0x1.903906p-2f, 0x1.7cd1e6p-101f, 0x1.1e17ccp-116f,
     0x1.3077f8p-104f, 0x1.acb354p-26f, 0x1.4c6f78p-2f, 0.0f, 0.0f, 0x1.6c663ap-66f,
     0.0f, 0x1.c87d96p-106f, 0.0f, 0x1.a6ad5p-60f, 0x1.027656p-18f, 0.0f, 0.0f, 0.0f,
     0x1.f8cdp-66f, 0x1.deb158p-12f, 0.0f, 0.0f, 0.0f, 0x1.e003bp-70f,
     0x1.65719p-111f, 0x1.1aadcep-106f, 0x1.1b2bfep-66f, 0x1.74b176p-94f, 0.0f,
     0x1.ede48ap-31f, 0x1.39df2ap-57f, 0.0f, 0.0f, 0x1.80b212p-1f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.cb8a02p-73f, 0x1.1ef4c2p-118f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.85a24ap-120f, 0x1.712926p-13f, 0.0f, 0x1.dc67ap-26f, 0.0f,
     0x1.29c624p-91f, 0x1.0721b8p-126f, 0.0f, 0x1.987376p-108f, 0x1.badf9ap-113f,
     0x1.5564e8p-29f, 0x1.4302dcp-126f, 0.0f, 0.0f, 0x1.9b0a92p-123f, 0x1.512e26p-51f,
     0.0f, 0x1.f0bc1p-52f, 0x1.f8ae28p-81f, 0.0f, 0.0f, 0x1.314f72p-110f, 0.0f,
     0x1.47647ep-75f, 0.0f, 0x1.f24cc6p-77f, 0x1.131c32p-15f, 0.0f, 0.0f, 0.0f,
     0x1.c22952p-114f, 0.0f, 0.0f, 0.0f, 0x1.adf3e8p-67f, 0.0f, 0.0f, 0.0f,
     0x1.90164cp-37f, 0x1.fc20fcp-71f, 0x1.92bb4p-75f, 0.0f, 0x1.df433ep-96f, 0.0f,
     0x1.b6c9c4p-105f, 0.0f, 0.0f, 0x1.8325cap-88f, 0x1.d6f5a4p-114f, 0x1.032af2p-81f,
     0.0f, 0x1.fea74p-103f, 0.0f, 0.0f, 0x1.fde8c2p-81f, 0x1.b30bcep-55f,
     0x1.781bcep-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a76b18p-52f,
     0x1.bd2184p-26f, 0x1.2c4cf6p-108f, 0.0f, 0x1.4e7816p-61f, 0x1.7a84f4p-44f, 0.0f,
     0x1.974024p-78f, 0x1.79ddbp-120f, 0.0f, 0x1.ecd42p-44f, 0x1.3803eep-101f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d578fp-78f, 0.0f, 0.0f, 0.0f, 0x1.65791cp-37f,
     0x1.8bc4aep-52f, 0x1p0f, 0x1.25b5bcp-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9a68f8p-117f, 0x1.c7ac3ap-113f, 0x1.2b142p-3f, 0.0f, 0x1.66dd88p-29f,
     0x1.5aacecp-83f, 0.0f, 0x1.5f756p-105f, 0x1.6d2c56p-40f, 0x1.b28c1cp-84f,
     0x1.b1a1d4p-61f, 0x1.e68578p-67f, 0x1.407244p-14f, 0.0f, 0.0f, 0x1.c6899p-49f,
     0.0f, 0x1.f5db52p-90f, 0x1.869212p-108f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.137b12p-117f, 0.0f, 0x1.fc66bap-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.87c754p-18f,
     0x1.533408p-6f, 0.0f, 0.0f, 0.0f, 0x1.3a5508p-61f, 0x1.15b47p-108f, 0.0f,
     0x1.7dfbf6p-60f, 0.0f, 0.0f, 0x1.686d7p-69f, 0.0f, 0.0f, 0.0f, 0x1.a24b4ep-126f,
     0x1.9865a4p-120f, 0x1.f805fcp-7f, 0x1.e2e1b6p-98f, 0.0f, 0.0f, 0x1.8575eep-61f,
     0x1.e374fcp-32f, 0.0f, 0x1.3fb4f6p-49f, 0x1.5d7754p-4f, 0x1.51739ep-106f, 0.0f,
     0.0f, 0.0f, 0x1.76aa9ap-33f, 0x1.e68156p-54f, 0x1.e76b34p-41f, 0.0f, 0.0f,
     0x1.052116p-99f, 0x1.aa00d8p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f47d3ep-42f,
     0x1.63dc42p-66f, 0.0f, 0x1.154a1ep-113f, 0x1.7f93f2p-58f, 0x1.f9fb92p-20f, 0.0f,
     0x1.cb6a52p-90f, 0x1.b4c846p-110f, 0.0f, 0.0f, 0.0f, 0x1.ec66a4p-28f,
     0x1.21b5eep-62f, 0.0f, 0.0f, 0x1.4aad8ep-54f, 0.0f, 0.0f, 0x1.62e23p-105f,
     0x1.8ac7b2p-1f, 0x1.a78feep-11f, 0.0f, 0x1.e5e6f2p-34f, 0x1.152de2p-31f,
     0x1.7e89fap-125f, 0x1.e1d96cp-27f, 0x1.0a4d5p-59f, 0.0f, 0x1.367d2cp-1f,
     0x1.188d7ap-39f, 0.0f, 0x1.af88aep-41f, 0x1.3dc5e2p-126f, 0.0f, 0x1.9b03cep-61f,
     0x1.a54dc8p-58f, 0x1.7f612cp-108f, 0.0f, 0.0f, 0.0f, 0x1.f4efe4p-41f,
     0x1.7b19fep-45f, 0.0f, 0.0f, 0.0f, 0x1.37da86p-89f, 0.0f, 0.0f, 0x1.a9967ep-68f,
     0x1.2decb6p-1f, 0.0f, 0x1.cecb5ap-34f, 0x1.f1c404p-30f, 0.0f, 0.0f,
     0x1.05e53cp-4f, 0x1.533288p-72f, 0.0f, 0x1.47b51p-45f, 0x1.25576p-123f,
     0x1.2e3ec6p-12f, 0.0f, 0x1.6417d6p-49f, 0.0f, 0x1.8c19bp-87f, 0.0f, 0.0f,
     0x1.b5f9dep-23f, 0.0f, 0.0f, 0x1.4a4768p-65f, 0x1.3cd436p-70f, 0x1.5fdad4p-49f,
     0.0f, 0.0f, 0x1.c99156p-44f, 0x1.c3d9bcp-53f, 0.0f, 0.0f, 0x1.bac426p-30f,
     0x1.180e16p-47f, 0x1.4b05e2p-116f, 0.0f, 0.0f, 0x1.c5173ep-102f, 0.0f, 0.0f,
     0x1.9a7af6p-110f, 0x1.a9dd98p-28f, 0.0f, 0.0f, 0x1.c5f20ep-46f, 0.0f,
     0x1.5ccc4p-96f, 0.0f, 0x1.86524ap-11f, 0x1.2ad6ap-30f, 0x1.f94378p-80f,
     0x1.c0069ap-24f, 0x1.c14548p-64f, 0.0f, 0x1.fae09ep-63f, 0x1.2048cp-69f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.af976cp-95f, 0x1.91f68ap-38f, 0.0f, 0.0f, 0.0f
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
            tmp2 = Sleef_finz_hypotf8_u05kvx(tmp0, tmp1);
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
    printf("Sleef_finz_hypotf8_u05kvx %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_finz_hypotf8_u05kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
