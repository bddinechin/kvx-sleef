/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sqrtf8_kvx.c --function Sleef_finz_sqrtf8_kvx \
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
     0x1.35f044p-40f, 0x1.2978e6p-20f, 0.0f, 0x1.e2a698p-68f, 0.0f, 0.0f,
     0x1.1dd9f4p-85f, 0x1.01aa62p-81f, 0.0f, 0.0f, 0x1.dbbbp-104f, 0x1.a97f9p-23f,
     0.0f, 0x1.d6f832p-47f, 0.0f, 0x1.0a92acp-26f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.11d07p-37f, 0x1.22722ap-15f, 0x1.3ac78ap-94f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.af7156p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5099c8p-34f,
     0x1.cfeee6p-1f, 0.0f, 0x1.5d1482p-61f, 0x1.69e864p-67f, 0.0f, 0x1.dd8928p-119f,
     0.0f, 0.0f, 0.0f, 0x1.302acp-61f, 0.0f, 0.0f, 0x1.2eb782p-123f, 0.0f,
     0x1.625e06p-37f, 0x1.923a1p-98f, 0x1.1d89e8p-67f, 0x1.96ee52p-81f, 0.0f,
     0x1.f1c7b4p-124f, 0x1.cac18p-60f, 0.0f, 0x1.5b66d6p-95f, 0x1.2649f2p-105f,
     0x1.8852f6p-95f, 0.0f, 0x1.dfae3ap-48f, 0x1.d03f8ap-65f, 0.0f, 0x1.9cfaa6p-22f,
     0.0f, 0x1.e57766p-71f, 0x1.d9e7bep-12f, 0.0f, 0.0f, 0.0f, 0x1.3c041p-112f,
     0x1.99ded6p-26f, 0x1.3b4eecp-10f, 0x1.32c278p-77f, 0x1.6afb5cp-88f,
     0x1.446ffp-107f, 0.0f, 0.0f, 0x1.660124p-34f, 0x1.5b85acp-75f, 0x1.fdb5ep-7f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.feae36p-39f, 0.0f, 0x1.b7af4cp-73f, 0.0f,
     0x1.226828p-5f, 0.0f, 0x1.d458bap-123f, 0x1.871938p-74f, 0x1.2a99f6p-85f,
     0x1.99de54p-84f, 0x1.1c4fd4p-114f, 0x1.0ddd8p-75f, 0x1.08865cp-72f, 0.0f, 0.0f,
     0x1.f618aep-27f, 0x1.281746p-23f, 0x1.132f2ep-69f, 0x1.ae4e6cp-103f, 0.0f, 0.0f,
     0x1.e04b02p-35f, 0.0f, 0x1.db4b58p-110f, 0x1.861dfep-78f, 0.0f, 0x1.dd0688p-92f,
     0x1.d327fp-66f, 0.0f, 0x1.34a48p-52f, 0x1.b306ep-36f, 0.0f, 0x1.058584p-53f,
     0x1.7ba4fep-24f, 0.0f, 0x1.e30adep-42f, 0.0f, 0.0f, 0x1.a5bfd2p-81f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.3e2d3p-1f, 0x1.ba842cp-21f, 0x1.e52334p-27f,
     0x1.917a04p-104f, 0.0f, 0.0f, 0x1.3704ccp-29f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c3c8a8p-117f, 0x1.9b7268p-20f, 0x1.73687cp-104f, 0x1.3c04a8p-86f,
     0x1.7f60bp-86f, 0.0f, 0.0f, 0x1.2f022cp-2f, 0x1.5185d8p-44f, 0x1.772534p-68f,
     0.0f, 0x1.47e764p-19f, 0.0f, 0.0f, 0.0f, 0x1.1f774ap-20f, 0.0f, 0x1.131c12p-53f,
     0x1.af124ap-43f, 0.0f, 0.0f, 0.0f, 0x1.4a57a2p-42f, 0.0f, 0.0f, 0x1.4d84cep-108f,
     0x1.66f00ep-24f, 0.0f, 0.0f, 0.0f, 0x1.be004ep-83f, 0.0f, 0x1.e929d2p-118f,
     0x1.6e2dap-114f, 0.0f, 0x1.cebb8p-56f, 0x1.5b8c3cp-119f, 0x1.b10e2cp-100f,
     0x1.6579ecp-99f, 0x1.ca54dep-40f, 0x1.7911bep-2f, 0x1.273f22p-66f, 0.0f, 0.0f,
     0x1.777508p-84f, 0.0f, 0.0f, 0x1.db2abap-22f, 0.0f, 0.0f, 0x1.7d9b84p-40f, 0.0f,
     0x1.a53ef4p-126f, 0.0f, 0x1.ce5b0ap-56f, 0.0f, 0x1.41bc7ep-99f, 0.0f,
     0x1.3a2f6p-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9d31dcp-89f,
     0x1.2d327ep-66f, 0x1.ac6508p-120f, 0x1.8aaefcp-63f, 0.0f, 0.0f, 0x1.caf38ap-34f,
     0.0f, 0.0f, 0x1.7ba55ep-73f, 0x1.febd3p-113f, 0x1.1da76ap-49f, 0.0f, 0.0f,
     0x1.0c464ep-119f, 0.0f, 0.0f, 0.0f, 0x1.bd79f6p-106f, 0x1.f2839ep-95f, 0.0f,
     0x1.9e9e56p-11f, 0.0f, 0x1.317248p-40f, 0x1.0fe746p-68f, 0x1.6d43b4p-50f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.321fbap-52f, 0.0f, 0x1.187688p-107f, 0.0f, 0x1.434a94p-36f,
     0.0f, 0x1.a8a494p-84f, 0.0f, 0x1.4a3bfcp-59f, 0x1.f3b00cp-16f, 0.0f,
     0x1.f40c7ep-108f, 0.0f, 0x1.27754ep-90f, 0x1.fa36a2p-85f, 0.0f, 0.0f,
     0x1.111f94p-97f, 0x1.396092p-17f, 0x1.add64ap-73f, 0.0f, 0.0f, 0x1.3a4aacp-22f,
     0.0f, 0x1.4fcb3p-107f, 0x1.c9f05ep-112f, 0x1.d86132p-98f, 0.0f, 0.0f,
     0x1.ae70e6p-7f, 0x1.3949d8p-74f, 0.0f, 0x1.c37258p-116f, 0x1.c0e9b4p-90f,
     0x1.a56278p-63f, 0x1.085c96p-39f, 0x1.84a4e4p-13f, 0x1.227aa2p-20f, 0.0f,
     0x1.a8f216p-65f, 0.0f, 0x1.bffa18p-34f, 0x1.c70048p-74f, 0.0f, 0x1.bb6856p-117f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.2741f8p-52f, 0x1.231276p-124f, 0.0f, 0x1.a5939ep-78f,
     0x1.17506cp-1f, 0x1.20ce5cp-117f, 0.0f, 0x1.af57dcp-46f, 0.0f, 0.0f,
     0x1.617dbp-31f, 0x1.bfd63cp-107f, 0.0f, 0x1.8c9a6cp-64f, 0.0f, 0.0f, 0.0f,
     0x1.09c51p-44f, 0x1.e4a968p-44f, 0.0f, 0x1.df86dp-126f, 0.0f, 0x1.f1ebfep-103f,
     0.0f, 0.0f, 0x1.a2d792p-18f, 0x1.0514bp-73f, 0x1.13dd58p-14f, 0x1.15d7fap-53f,
     0x1.daf662p-55f, 0x1.6a3fcep-54f, 0x1.6c964cp-55f, 0x1.8365cep-70f,
     0x1.b2ae08p-72f, 0.0f, 0x1.c2a96p-96f, 0x1.4b3c34p-22f, 0.0f, 0x1.a31d9cp-41f,
     0.0f, 0.0f, 0.0f, 0x1.1edb82p-74f, 0x1.822128p-22f, 0.0f, 0x1.af8774p-107f,
     0x1.3b8872p-23f, 0.0f, 0x1.c07c8ap-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8e124ap-4f, 0.0f, 0x1.ae6424p-40f, 0x1.2688fp-53f, 0.0f, 0x1.937e9cp-124f,
     0x1.f57c5ap-31f, 0x1.5e17cap-123f, 0.0f, 0.0f, 0.0f, 0x1.06b5b4p-7f, 0.0f,
     0x1.d4954ep-54f, 0x1p0f, 0x1.b55774p-121f, 0x1.f66382p-23f, 0x1.c58de2p-89f,
     0.0f, 0x1.e17584p-28f, 0.0f, 0.0f, 0x1.656cdep-46f, 0.0f, 0x1.35d99cp-99f,
     0x1.717c54p-102f, 0x1.24f7c6p-30f, 0.0f, 0x1.35fde4p-126f, 0x1.f1cd82p-62f,
     0x1.e94924p-44f, 0x1.8cb4dcp-21f, 0x1.23ceccp-34f, 0.0f, 0x1.bcb48cp-15f, 0.0f,
     0.0f, 0x1.dd99d4p-38f, 0.0f, 0.0f, 0x1.d88138p-79f, 0x1.4f9514p-108f, 0.0f, 0.0f,
     0x1.2d2406p-21f, 0x1.e5b9d6p-119f, 0.0f, 0x1.069b6cp-98f, 0x1.877e5ap-53f, 0.0f,
     0.0f, 0x1.255886p-78f, 0.0f, 0x1.0a3ebep-60f, 0x1.7e7c6ap-94f, 0.0f,
     0x1.7a5364p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.83c004p-42f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.66186ep-26f, 0.0f, 0.0f, 0x1.fb2c72p-104f,
     0x1.d7da8p-70f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2780dep-39f, 0.0f,
     0.0f, 0x1.3bd308p-3f, 0x1.d6c49ep-111f, 0x1.420868p-18f, 0.0f, 0x1.d06092p-124f,
     0x1.26cd4p-51f, 0.0f, 0.0f, 0.0f, 0x1.cbd82cp-26f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d2b942p-13f, 0x1.6d97b4p-23f, 0.0f, 0.0f, 0.0f, 0x1.5ee928p-93f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dce696p-4f, 0x1.0994c4p-95f, 0x1.3d10b2p-82f,
     0.0f, 0.0f, 0x1.25d3f4p-27f, 0x1.5fc83ap-64f, 0.0f, 0.0f, 0x1.a645fp-87f,
     0x1.dcdac6p-93f, 0.0f, 0.0f, 0x1.f456c6p-10f, 0.0f, 0x1.6d9362p-4f, 0.0f,
     0x1.4713b4p-16f, 0.0f, 0.0f, 0x1.11d3cap-55f, 0x1.54eb7ep-104f, 0x1.391bbcp-36f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7a4ffep-101f, 0x1.9bcadap-4f, 0.0f, 0.0f,
     0x1.6b5c2ap-17f, 0x1.c1176p-13f, 0x1.b2699ep-79f, 0.0f, 0.0f, 0x1.22d346p-121f,
     0.0f, 0.0f, 0x1.5d68ccp-50f, 0.0f, 0x1.283caap-77f, 0.0f, 0x1.1a6116p-11f, 0.0f,
     0x1.e66adp-28f, 0.0f, 0.0f, 0x1.518884p-89f, 0x1.f1397p-121f, 0x1.6ac8c6p-31f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5e611ep-20f, 0x1.72c15cp-50f,
     0x1.1f7cb8p-81f, 0.0f, 0x1.477596p-65f, 0.0f, 0x1.2f73bap-110f, 0x1.ef5d6p-34f,
     0.0f, 0x1.35a6bcp-93f, 0x1.2e483cp-92f, 0.0f, 0.0f, 0x1.21cf02p-114f,
     0x1.367906p-73f, 0.0f, 0x1.3c1cdcp-37f, 0x1.6e987cp-66f, 0x1.4eecbap-13f, 0.0f,
     0x1.c70c1ep-125f, 0x1.12bap-119f, 0.0f, 0.0f, 0.0f, 0x1.47d5e8p-17f, 0.0f,
     0x1.458db2p-75f, 0x1.e7c7e4p-80f, 0.0f, 0x1.ac2e9p-25f, 0x1.0145f4p-38f,
     0x1.fd5804p-123f, 0x1.fc162ep-100f, 0.0f, 0.0f, 0.0f, 0x1.7c24aep-47f, 0.0f,
     0.0f, 0x1.1d7664p-117f, 0.0f, 0.0f, 0x1.0e82ep-82f, 0.0f, 0.0f, 0x1.43a54p-10f,
     0x1.04e9fep-46f, 0x1.d365aep-92f, 0.0f, 0.0f, 0x1.869f14p-118f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.059d1p-10f, 0x1.a0cb6p-90f, 0x1.e5f184p-40f, 0x1.db0c12p-73f,
     0x1.95294ap-95f, 0x1.05def2p-14f, 0x1.73006ap-8f, 0x1.85be94p-98f, 0.0f, 0.0f,
     0x1.ba0ebep-75f, 0.0f, 0.0f, 0x1.f0ab04p-12f, 0x1.4dcff8p-99f, 0.0f, 0.0f,
     0x1.ca9d2ap-31f, 0.0f, 0.0f, 0.0f, 0x1.fde93ap-50f, 0x1.9e5ef6p-110f, 0.0f,
     0x1.73cd3cp-12f, 0x1.1cdabep-110f, 0x1.b75abp-75f, 0.0f, 0.0f, 0x1.1e97a4p-47f,
     0.0f, 0x1.c5d73ep-58f, 0x1.d39906p-125f, 0.0f, 0.0f, 0x1.7c0d6ep-42f,
     0x1.c71374p-25f, 0x1.d273dap-111f, 0.0f, 0x1.37e29ap-81f, 0.0f, 0.0f,
     0x1.64c21ep-121f, 0x1.d4c4cap-23f, 0x1.510d6p-55f, 0x1.4f7432p-56f,
     0x1.6643fep-119f, 0.0f, 0.0f, 0x1.e6ccb6p-32f, 0.0f, 0x1.ed729cp-71f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ca086cp-82f, 0x1.5af7dcp-104f, 0x1p0f, 0x1.365decp-67f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.6c007p-110f, 0.0f, 0x1.37aa0ap-19f, 0.0f,
     0x1.a1e09ap-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cb62d8p-36f, 0.0f,
     0x1.912f3ap-54f, 0.0f, 0.0f, 0x1.1fb996p-124f, 0x1.b4de42p-47f, 0x1.f05dcep-16f,
     0.0f, 0x1.9537d4p-80f, 0.0f, 0.0f, 0.0f, 0x1.ad4ba8p-3f, 0.0f, 0.0f,
     0x1.996ddap-2f, 0x1.1764ep-8f, 0x1.cf461cp-117f, 0x1.b7b0d4p-23f, 0.0f, 0.0f,
     0.0f, 0x1.13f95ap-42f, 0.0f, 0.0f, 0.0f, 0x1.6ff808p-41f, 0x1.eb185ap-27f,
     0x1.938366p-119f, 0x1.6d59bep-55f, 0x1.0983c8p-70f, 0.0f, 0x1.0841bep-6f, 0.0f,
     0x1.9cae7ap-77f, 0x1.9ca7c8p-8f, 0x1.49b832p-7f, 0.0f, 0.0f, 0x1.c983b2p-7f,
     0.0f, 0x1.0fa26ap-97f, 0x1.f16182p-20f, 0x1.d13188p-121f, 0.0f, 0x1.394a5p-9f,
     0x1.94b99p-24f, 0.0f, 0x1.34d14ep-95f, 0x1.8c1c1p-63f, 0.0f, 0.0f,
     0x1.b877dp-30f, 0x1.27d0bep-119f, 0x1.6efc8ap-115f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9dc3d6p-117f, 0.0f, 0x1.1ecf7p-13f, 0x1.a6c906p-126f, 0.0f, 0x1.5fb6cp-72f,
     0.0f, 0x1.644f36p-105f, 0x1.7b1ebcp-67f, 0.0f, 0.0f, 0x1.2074c8p-113f,
     0x1.ab6d36p-36f, 0.0f, 0.0f, 0x1.63dc26p-45f, 0.0f, 0x1.48c374p-59f, 0.0f, 0.0f,
     0.0f, 0x1.369408p-119f, 0x1.15d332p-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e256c6p-75f,
     0x1.36eccap-60f, 0x1.8c4904p-118f, 0.0f, 0x1.675d4ap-69f, 0.0f, 0.0f, 0.0f,
     0x1.067e8p-84f, 0x1.98cafap-54f, 0.0f, 0.0f, 0x1.d4b286p-25f, 0.0f,
     0x1.cbab92p-66f, 0.0f, 0x1.13b232p-34f, 0.0f, 0.0f, 0x1.1c464ep-37f,
     0x1.8daf5ep-102f, 0x1.882656p-121f, 0x1.10cd2cp-73f, 0.0f, 0.0f,
     0x1.bf82e8p-102f, 0.0f, 0x1.afd0cep-35f, 0.0f, 0x1.624a3ep-54f, 0x1.c4d018p-24f,
     0x1.ee6582p-125f, 0.0f, 0.0f, 0x1.3b1eacp-31f, 0x1.e27abcp-92f, 0x1.af976ep-11f,
     0x1.45b2bep-121f, 0.0f, 0x1.931522p-85f, 0x1.a48ec2p-6f, 0x1.1b4b54p-29f, 0.0f,
     0.0f, 0x1.fa7afap-94f, 0x1.039f72p-126f, 0.0f, 0x1.375a9cp-60f, 0.0f, 0.0f,
     0x1.e38bdp-122f, 0x1.fd9b7cp-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ea12a8p-59f,
     0x1.4e9fdap-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e8fdaap-116f, 0.0f,
     0x1.325688p-34f, 0.0f, 0x1.d47b04p-13f, 0x1.d07d8p-43f, 0.0f, 0x1.8f96ecp-65f,
     0x1.f6113cp-2f, 0.0f, 0.0f, 0.0f, 0x1.2980cep-106f, 0.0f, 0x1.559efcp-4f, 0.0f,
     0.0f, 0x1.507d6ap-21f, 0x1.899a48p-63f, 0.0f, 0x1.18e156p-87f, 0x1.68657ap-88f,
     0.0f, 0.0f, 0x1.78bacp-54f, 0x1.018d84p-58f, 0x1.01aa6ap-65f, 0x1.8231dcp-8f,
     0x1.acbcbep-38f, 0x1.a9681ap-11f, 0x1.76625ap-7f, 0x1.13cab6p-104f,
     0x1.80997ap-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f63c34p-35f, 0.0f, 0.0f,
     0x1.03bedp-78f, 0.0f, 0x1.550e28p-20f, 0x1.ed6a4cp-85f, 0.0f, 0x1.eb6b06p-123f,
     0.0f, 0x1.19879cp-119f, 0.0f, 0x1.d494e2p-68f, 0x1.67839p-92f, 0.0f,
     0x1.7bc81ep-7f, 0.0f, 0x1.d2b9c2p-61f, 0x1.40863p-62f, 0.0f, 0.0f,
     0x1.44a2b2p-77f, 0.0f, 0x1.4f72e6p-94f, 0.0f, 0x1.6e2cf2p-51f, 0.0f, 0.0f, 0.0f,
     0x1.d82a66p-31f, 0.0f, 0.0f, 0x1.10e74ep-119f, 0x1.287398p-94f, 0x1.76737cp-103f,
     0.0f, 0x1.726c08p-28f, 0x1.fd0c84p-90f, 0x1.90d97ap-90f, 0x1.9a1d96p-63f, 0.0f,
     0x1.8c8a32p-82f, 0x1.9f3bbp-71f, 0x1.2e0176p-111f, 0x1.f64062p-32f, 0.0f,
     0x1.8f938ap-65f, 0x1.97f88ap-52f, 0.0f, 0.0f, 0.0f, 0x1.17a93ap-9f, 0.0f, 0.0f,
     0.0f, 0x1.544962p-11f, 0.0f, 0x1.fec8d6p-27f, 0x1.28a514p-116f, 0x1.5cc2a2p-43f,
     0.0f, 0x1.2b59f4p-66f, 0.0f, 0x1.a0d66p-100f, 0x1.02407ep-105f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.7d14f6p-30f, 0x1.f62da8p-5f, 0x1.a01f7p-15f, 0x1.558d62p-79f, 0.0f,
     0.0f, 0x1.ce2ee6p-100f, 0.0f, 0.0f, 0x1.13b1ccp-39f, 0x1.bd3ff4p-120f, 0.0f,
     0x1.1dedc6p-108f, 0.0f, 0.0f, 0.0f, 0x1.609be4p-24f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.00dbbep-63f, 0x1.dece14p-3f, 0x1.8d541p-96f, 0x1.2ea818p-31f, 0.0f,
     0x1.b27cbp-43f, 0.0f, 0.0f, 0x1.739fb8p-79f, 0x1.607d7p-68f, 0.0f,
     0x1.31f4d4p-123f, 0.0f, 0x1.a88c7ap-14f, 0x1.348ab2p-22f, 0x1.25864ep-3f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5d9452p-51f, 0.0f, 0x1.b61806p-41f,
     0x1.48ad52p-64f, 0x1.da1a6p-40f, 0.0f, 0.0f, 0x1.a207ap-118f, 0x1.920c06p-69f,
     0x1.d7d37p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.89f584p-13f,
     0x1.52a3eep-55f, 0.0f, 0x1.3b45ap-89f, 0.0f, 0.0f, 0x1.8e39bep-13f, 0.0f,
     0x1.2f4e44p-57f, 0x1.ef098ep-57f, 0x1.6335e2p-11f, 0x1.40f68p-64f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.757d6ep-85f, 0x1.ef44ap-44f, 0x1.f063a2p-40f,
     0x1.0b845cp-12f, 0.0f, 0.0f, 0x1.8ee322p-46f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5a5b9cp-72f, 0x1.d6829cp-75f, 0x1.916246p-120f, 0x1.b76b7ap-52f,
     0x1.ef7bap-99f, 0x1.633a24p-76f, 0.0f, 0.0f, 0x1.76d202p-18f, 0x1.fcb3eap-20f,
     0.0f, 0.0f, 0x1.63ad92p-75f, 0x1.d5911ep-29f, 0.0f, 0.0f, 0x1.3ed032p-5f, 0.0f,
     0.0f, 0.0f
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
            tmp1 = Sleef_finz_sqrtf8_kvx(tmp0);
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
    printf("Sleef_finz_sqrtf8_kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_finz_sqrtf8_kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
