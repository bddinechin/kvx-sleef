/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_coshf8_u10kvx.c --function Sleef_coshf8_u10kvx \
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
     0.0f, 0x1.055b46p-15f, 0.0f, 0x1.d39c9p-115f, 0.0f, 0x1.05a2e8p-31f,
     0x1.7f67eap-119f, 0.0f, 0x1.1d34d8p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6823e8p-47f,
     0x1.f42924p-92f, 0x1.8acca2p-14f, 0x1.db50dcp-1f, 0.0f, 0x1.e15fb6p-91f,
     0x1.778f6p-82f, 0x1.69a876p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3c4c94p-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cd1fep-77f,
     0x1.213a14p-74f, 0.0f, 0.0f, 0x1.703ad4p-23f, 0.0f, 0.0f, 0.0f, 0x1.b49a12p-39f,
     0x1.6e71ecp-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6c2242p-49f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.d1c892p-84f, 0.0f, 0.0f, 0x1.605a7ep-34f, 0.0f, 0x1.bc86f6p-3f,
     0x1.7199eap-108f, 0.0f, 0.0f, 0x1.73698p-79f, 0.0f, 0x1.2faf64p-88f, 0.0f, 0.0f,
     0x1.acd3d8p-24f, 0x1.19c1f6p-98f, 0x1.f3683ep-26f, 0x1.e273b4p-18f,
     0x1.33c99ep-50f, 0x1.a3694cp-105f, 0x1.219c18p-72f, 0x1.fd6072p-115f, 0.0f,
     0x1.c43e8ep-43f, 0x1.06bffap-27f, 0x1.d8f024p-27f, 0x1.a0eecp-55f, 0.0f, 0.0f,
     0.0f, 0x1.81c08cp-124f, 0x1.e13e68p-45f, 0.0f, 0.0f, 0.0f, 0x1.6f44f8p-23f,
     0x1.60fe2p-84f, 0x1.8d781p-47f, 0.0f, 0x1.f8891ep-93f, 0x1.845b4ap-11f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.0ceb0ap-45f, 0x1.300574p-39f, 0x1.aa5bfap-29f,
     0x1.76f8cap-33f, 0x1.e08e8ap-102f, 0.0f, 0.0f, 0x1.28fa2ep-61f, 0.0f, 0.0f,
     0x1.e6abbep-44f, 0.0f, 0.0f, 0.0f, 0x1.8d0932p-29f, 0x1.235542p-105f,
     0x1.8ca3p-86f, 0x1.4222dap-12f, 0x1.77a0b6p-124f, 0x1.d89034p-8f, 0.0f, 0.0f,
     0x1.02d96p-77f, 0.0f, 0.0f, 0x1.dca372p-37f, 0.0f, 0.0f, 0x1.3a32e8p-80f,
     0x1.fa7142p-36f, 0.0f, 0.0f, 0.0f, 0x1.7f6302p-36f, 0.0f, 0.0f, 0x1.cd9b24p-85f,
     0x1.c8310cp-84f, 0x1.4d8d3cp-57f, 0x1.dace6p-44f, 0x1.47c144p-63f,
     0x1.354a0ep-115f, 0x1.1c6022p-19f, 0x1.af2c62p-124f, 0x1.15ffbcp-58f,
     0x1.7bb62cp-112f, 0.0f, 0.0f, 0.0f, 0x1.c98008p-79f, 0.0f, 0x1.98811ap-49f, 0.0f,
     0.0f, 0x1.e1b152p-57f, 0x1.9afe2ep-51f, 0.0f, 0x1.17808p-98f, 0x1.981024p-126f,
     0.0f, 0.0f, 0.0f, 0x1.8deefep-42f, 0.0f, 0.0f, 0.0f, 0x1.18f526p-66f,
     0x1.9be506p-45f, 0.0f, 0x1.6a44eep-22f, 0x1.333b5cp-74f, 0.0f, 0.0f,
     0x1.bd2d58p-84f, 0x1.93aee8p-18f, 0.0f, 0x1.35841ap-20f, 0.0f, 0x1.99a9b6p-66f,
     0.0f, 0.0f, 0x1.2c70ap-94f, 0x1.24e19ap-100f, 0.0f, 0.0f, 0x1.40f8acp-26f,
     0x1.646d76p-74f, 0x1.cc1182p-105f, 0x1.373802p-53f, 0x1.d5d01ep-50f, 0.0f,
     0x1.1ba6p-7f, 0x1.b4066p-6f, 0x1.76be86p-17f, 0x1.a38996p-24f, 0.0f, 0.0f,
     0x1.aa1ac4p-51f, 0x1.366e92p-90f, 0.0f, 0x1.e1b306p-24f, 0.0f, 0.0f,
     0x1.2911f6p-39f, 0x1p0f, 0.0f, 0.0f, 0x1.1ab4a2p-74f, 0.0f, 0x1.0277a6p-34f,
     0.0f, 0x1.445778p-112f, 0.0f, 0x1.9b79a4p-104f, 0x1.577168p-95f, 0.0f,
     0x1.2cb946p-5f, 0x1.164154p-78f, 0.0f, 0.0f, 0x1.b71246p-70f, 0.0f,
     0x1.e6dbb2p-43f, 0.0f, 0x1.88e7dap-60f, 0.0f, 0x1.46442ap-39f, 0.0f,
     0x1.9e9116p-20f, 0x1.7cc7cp-45f, 0x1.5846d8p-92f, 0x1.3861cp-9f, 0x1.5e2c88p-85f,
     0x1.2b2802p-60f, 0x1.e808fp-71f, 0.0f, 0x1.e499e8p-120f, 0x1.0eab9ap-32f, 0.0f,
     0x1.7d157p-35f, 0x1.51a6eap-58f, 0.0f, 0x1.3d05c2p-93f, 0.0f, 0.0f, 0.0f,
     0x1.7476ap-54f, 0.0f, 0.0f, 0x1.c7c46ep-103f, 0.0f, 0.0f, 0.0f, 0x1.2bc7ecp-28f,
     0x1.3cae2ap-62f, 0.0f, 0x1.685c28p-87f, 0x1.401ddap-90f, 0.0f, 0x1.30d92ap-73f,
     0x1.28f19cp-100f, 0.0f, 0x1.cabd04p-82f, 0.0f, 0.0f, 0x1.5b2ff4p-27f, 0.0f, 0.0f,
     0x1.103fa4p-76f, 0.0f, 0x1.9a1a68p-31f, 0x1.fe572ep-120f, 0x1.34a03ep-20f,
     0x1.81f0e2p-12f, 0x1.cae8p-64f, 0.0f, 0.0f, 0.0f, 0x1.8f91ep-18f,
     0x1.05b838p-33f, 0.0f, 0.0f, 0x1.593b78p-30f, 0.0f, 0x1.476292p-74f, 0.0f,
     0x1.59f59ep-92f, 0x1.f0539cp-78f, 0.0f, 0x1.cef1f2p-94f, 0x1.bf37fap-101f,
     0x1.4fd4c6p-44f, 0.0f, 0x1.8911c8p-77f, 0x1.d25832p-71f, 0x1.e4ac2ap-56f,
     0x1.0cd494p-87f, 0x1.b686dcp-111f, 0.0f, 0x1.9daca6p-98f, 0.0f, 0.0f, 0.0f,
     0x1.f9a046p-99f, 0x1.563a02p-51f, 0x1.9e126p-126f, 0x1.509a22p-112f,
     0x1.9033d4p-83f, 0x1.dda6a6p-22f, 0.0f, 0x1.f584aep-114f, 0.0f, 0x1.0523f6p-61f,
     0x1.eedfacp-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3bca6cp-65f, 0.0f, 0.0f,
     0x1.7d2898p-109f, 0.0f, 0.0f, 0.0f, 0x1.a8f342p-77f, 0.0f, 0.0f, 0.0f,
     0x1.975724p-51f, 0.0f, 0x1.53fa68p-25f, 0.0f, 0x1.a6105ap-17f, 0.0f,
     0x1.018376p-105f, 0x1.85f194p-108f, 0x1.af449p-87f, 0x1.a5edd4p-37f, 0.0f,
     0x1.e4ee76p-5f, 0x1.bed018p-14f, 0x1.cc123ep-1f, 0x1.c1de48p-107f, 0.0f, 0.0f,
     0x1.897fe8p-124f, 0.0f, 0x1.3ed8c6p-116f, 0x1.bd2d7cp-110f, 0x1.893bcp-64f,
     0x1.e3c214p-102f, 0.0f, 0x1.e3dc52p-115f, 0.0f, 0x1.c74e5ep-103f, 0.0f,
     0x1.23e8fcp-65f, 0.0f, 0.0f, 0x1.0c484ap-24f, 0x1.1ba7e8p-9f, 0x1.a43e2cp-109f,
     0x1.5b25ecp-86f, 0.0f, 0x1.0529fcp-75f, 0x1.5a59ep-24f, 0x1.ffe68ap-121f, 0.0f,
     0x1.f93514p-85f, 0.0f, 0x1.a7fa2ap-85f, 0x1.6401d8p-58f, 0x1.ccb38p-30f, 0.0f,
     0x1.2e43f6p-23f, 0.0f, 0.0f, 0x1.ad4ec6p-79f, 0.0f, 0x1.20007ep-1f, 0x1p0f,
     0x1.574332p-59f, 0x1.e4466ap-123f, 0x1.c01c2p-19f, 0.0f, 0.0f, 0.0f,
     0x1.8eb224p-27f, 0.0f, 0x1.419958p-67f, 0.0f, 0x1.2c6c2cp-83f, 0x1.58c772p-22f,
     0x1.5f1cfep-34f, 0x1.6b370ap-30f, 0.0f, 0.0f, 0.0f, 0x1.985b98p-43f,
     0x1.ca373ep-14f, 0x1.56e4d8p-113f, 0x1.822ca6p-100f, 0.0f, 0x1.91e5aap-97f, 0.0f,
     0x1.de80aep-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.81e7b6p-77f, 0x1.5695f2p-82f,
     0x1.9c17f8p-35f, 0.0f, 0.0f, 0.0f, 0x1.1cfa6p-71f, 0x1.16dd28p-12f, 0.0f, 0.0f,
     0x1.892edcp-126f, 0.0f, 0.0f, 0.0f, 0x1.45fcdp-42f, 0x1.da7086p-54f,
     0x1.ce28c4p-64f, 0x1.41cbbcp-123f, 0.0f, 0x1.7197ccp-41f, 0x1.62033ep-25f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c801f2p-36f, 0x1.d71c34p-24f, 0x1.48adf4p-13f,
     0x1.d92874p-7f, 0x1.a2a18ep-96f, 0x1.47b26ep-107f, 0.0f, 0x1.deb5c6p-84f, 0.0f,
     0.0f, 0x1.0bdf8ep-55f, 0.0f, 0x1.0d375ep-8f, 0x1.4caf16p-75f, 0.0f, 0.0f,
     0x1.21acbp-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8a7338p-95f, 0.0f, 0.0f,
     0x1.78574p-25f, 0.0f, 0.0f, 0x1.e5a2fcp-24f, 0.0f, 0.0f, 0.0f, 0x1.403f28p-19f,
     0x1.bcf054p-47f, 0x1.81bc6ep-61f, 0.0f, 0.0f, 0.0f, 0x1.cd4f96p-63f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3b4908p-83f, 0x1.de7066p-74f, 0.0f, 0x1.e2f58ep-21f,
     0x1.eff6d4p-35f, 0.0f, 0.0f, 0.0f, 0x1.8848ccp-120f, 0.0f, 0.0f, 0x1.b9a396p-35f,
     0x1.2a0baap-29f, 0x1.c3f1b8p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b70836p-102f,
     0x1.128aap-2f, 0x1.7c4de4p-103f, 0.0f, 0.0f, 0x1.e10736p-105f, 0x1.ae860cp-96f,
     0.0f, 0.0f, 0x1.c60a6ep-107f, 0.0f, 0.0f, 0x1.e4c19ep-6f, 0x1.0508b4p-44f,
     0x1.fa9dacp-65f, 0.0f, 0x1.81041cp-65f, 0.0f, 0x1.494972p-100f, 0.0f, 0.0f,
     0x1.52b3b8p-48f, 0x1.39a7d2p-122f, 0.0f, 0.0f, 0.0f, 0x1.2707b4p-114f,
     0x1.7f59c2p-122f, 0x1.184112p-12f, 0.0f, 0x1.fe9022p-126f, 0x1.667bbep-73f, 0.0f,
     0.0f, 0x1.d23188p-13f, 0.0f, 0.0f, 0x1.5d4ab8p-45f, 0.0f, 0x1.dd8ae6p-52f,
     0x1.8cd25ap-106f, 0x1.8d2a0ep-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.959688p-96f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7201c4p-41f, 0.0f,
     0x1.9ba27p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1d55acp-15f, 0x1.40e8d2p-19f,
     0.0f, 0.0f, 0x1.18754cp-57f, 0x1.8d349ap-30f, 0x1.c5c94p-48f, 0x1.013274p-72f,
     0.0f, 0.0f, 0x1.b05842p-10f, 0x1.8d40a6p-101f, 0x1.7a8d88p-92f, 0x1.bb3ee6p-101f,
     0.0f, 0x1.8f2e0ap-31f, 0x1.eccaaep-76f, 0x1.47916ep-102f, 0.0f, 0.0f, 0.0f,
     0x1.e41b3p-60f, 0x1.be52aep-69f, 0.0f, 0.0f, 0x1.5d99ap-16f, 0.0f,
     0x1.c6c5fp-54f, 0.0f, 0x1.0351d6p-72f, 0x1.9990a4p-90f, 0.0f, 0x1.d74ba2p-102f,
     0x1.bc65b4p-57f, 0x1.afd16p-66f, 0x1.eec9a8p-86f, 0x1.c33f34p-106f,
     0x1.233478p-86f, 0x1.8bc26p-2f, 0x1.c2e934p-79f, 0.0f, 0x1.028d1p-70f,
     0x1.3d0fa2p-57f, 0.0f, 0.0f, 0x1.009568p-32f, 0x1.e1eff8p-79f, 0x1.63cd96p-120f,
     0.0f, 0.0f, 0.0f, 0x1.458cbp-9f, 0x1.ad047ap-29f, 0x1.aa0a02p-13f, 0.0f,
     0x1.ff5536p-46f, 0x1.421ce2p-49f, 0x1.13653cp-19f, 0x1.30e892p-26f,
     0x1.c9237ep-42f, 0.0f, 0x1.62abbap-90f, 0.0f, 0x1.98bb2ap-27f, 0.0f, 0.0f, 0.0f,
     0x1.82f5d4p-99f, 0x1.0229ecp-113f, 0x1.a6981ep-23f, 0x1.eff6c6p-51f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.c66bcp-78f, 0x1.f98c08p-53f, 0x1.282bacp-95f, 0x1.24405ap-13f,
     0x1.e9ad12p-77f, 0.0f, 0x1.ece02p-112f, 0.0f, 0x1.ed6634p-50f, 0x1.2691f6p-124f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1c0f7p-86f, 0x1.e31d5ap-24f,
     0x1.018ebep-12f, 0x1.c9be5cp-9f, 0x1.98a50ap-39f, 0x1.5a8374p-98f, 0.0f, 0x1p0f,
     0.0f, 0.0f, 0x1.648464p-3f, 0.0f, 0.0f, 0.0f, 0x1.2e22e4p-111f, 0.0f,
     0x1.2dadfep-116f, 0.0f, 0.0f, 0x1.cc9d56p-68f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1adb38p-125f, 0x1.260b9ap-39f, 0.0f, 0x1.696496p-70f, 0x1.27c242p-45f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3d0b24p-8f, 0.0f, 0x1.23616cp-80f, 0x1.415818p-95f,
     0.0f, 0x1.88d478p-95f, 0x1.c22406p-38f, 0.0f, 0x1.80a692p-33f, 0x1.5f24c2p-26f,
     0.0f, 0.0f, 0x1.7e17aep-20f, 0x1.8edea8p-38f, 0x1.9acef2p-8f, 0.0f,
     0x1.66904ep-50f, 0.0f, 0.0f, 0x1.b6b812p-83f, 0.0f, 0x1.84c336p-55f, 0.0f, 0.0f,
     0.0f, 0x1.9dc212p-27f, 0x1.ec6c12p-111f, 0.0f, 0x1.166c44p-119f, 0x1.d854p-26f,
     0.0f, 0.0f, 0.0f, 0x1.94eb0ep-94f, 0x1.103a1ep-8f, 0.0f, 0.0f, 0x1.2561acp-26f,
     0x1.420bfp-48f, 0x1.632774p-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9fe01ep-44f, 0.0f,
     0.0f, 0x1.b43634p-113f, 0.0f, 0x1.71a092p-116f, 0.0f, 0.0f, 0.0f, 0x1.d25344p-5f,
     0x1.b4e658p-118f, 0x1.60aed2p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c6c2bap-98f, 0x1.930d3ap-89f, 0x1.c8a324p-21f, 0.0f, 0x1.29b46p-101f,
     0x1.e7b2ep-78f, 0x1.ce2b7cp-22f, 0x1.626daep-3f, 0x1.8d8486p-75f, 0.0f,
     0x1.ff6862p-126f, 0.0f, 0x1.c8af2ap-83f, 0x1.325f7p-77f, 0x1.8ccabap-47f,
     0x1.a77212p-43f, 0x1.33743p-87f, 0x1.baff2ap-121f, 0x1.929e24p-65f,
     0x1.6a5b94p-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cff634p-53f,
     0x1.d6bc68p-102f, 0.0f, 0x1.74bc8ep-25f, 0.0f, 0.0f, 0x1.0ed488p-96f,
     0x1.53b804p-60f, 0.0f, 0.0f, 0.0f, 0x1.08defap-50f, 0x1.14d57ap-93f,
     0x1.a0125ap-15f, 0x1.1b5956p-91f, 0.0f, 0x1.e2cd0cp-71f, 0.0f, 0x1.f1eb72p-14f,
     0x1.2a3b54p-80f, 0.0f, 0.0f, 0x1.67fd9cp-97f, 0.0f, 0x1.84d5ecp-111f, 0x1p0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d08c34p-33f, 0.0f, 0x1.8c0b3cp-125f,
     0x1.414214p-109f, 0.0f, 0x1.3593c6p-6f, 0.0f, 0x1.d01904p-23f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d4afd8p-91f, 0.0f, 0x1.a56ed6p-85f, 0x1.6d69aap-11f, 0.0f,
     0x1.84b2a2p-31f, 0.0f, 0.0f, 0x1.38970ep-4f, 0.0f, 0.0f, 0.0f, 0x1.e512e2p-16f,
     0.0f, 0.0f, 0x1.506896p-21f, 0x1.6bd6p-113f, 0x1.d35fe6p-110f, 0x1.22cffcp-2f,
     0.0f, 0.0f, 0.0f, 0x1.cb36b4p-4f, 0.0f, 0x1.da5ce2p-56f, 0x1.00231p-83f, 0.0f,
     0x1.f7c69ap-20f, 0x1.730986p-5f, 0x1.5ce758p-92f, 0.0f, 0.0f, 0.0f,
     0x1.710fc8p-39f, 0x1.829e7cp-51f, 0.0f, 0x1.65f13ep-112f, 0x1.d02c54p-99f, 0.0f,
     0x1.662c1ap-40f, 0x1.bb36aep-91f, 0x1.f185e2p-125f, 0x1.15bed4p-73f,
     0x1.5cb2ecp-55f, 0.0f, 0x1.eee1aep-35f, 0.0f, 0x1.e3f34ap-105f, 0.0f, 0.0f,
     0x1.f7756p-95f, 0x1.d56b66p-55f, 0.0f, 0x1.84dd9p-33f, 0.0f, 0.0f,
     0x1.d79218p-103f, 0x1.d589eep-68f, 0x1.04ce4cp-61f, 0.0f, 0.0f, 0.0f,
     0x1.23a8aap-28f, 0.0f, 0.0f, 0x1.407e0cp-55f, 0.0f, 0x1.b92404p-12f,
     0x1.cf1d3ap-69f, 0x1.d6e14ap-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e1ea46p-41f, 0x1.18db7ap-4f, 0.0f, 0x1.ba4244p-78f, 0x1.0ac22ap-53f, 0.0f,
     0x1.0f8226p-44f, 0x1.1cf918p-10f, 0x1.8bcf5ep-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f2c326p-56f, 0.0f, 0x1.1e4942p-54f, 0.0f, 0x1.dd1246p-68f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.acb0fp-122f, 0x1.1bee7p-125f,
     0x1.e2e41p-11f, 0.0f, 0.0f, 0x1.2d974ap-119f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.57266p-83f, 0.0f, 0x1.81629cp-124f, 0x1.6a0876p-81f, 0x1.39d4dap-67f,
     0x1.31e89p-25f, 0.0f, 0x1.35e47ep-122f, 0.0f, 0x1.840c8p-31f, 0.0f,
     0x1.0893ep-122f, 0x1.1897f6p-65f, 0x1.88c53cp-42f, 0.0f, 0.0f, 0x1.eaebe4p-24f,
     0.0f, 0.0f, 0x1.fc4d38p-126f, 0.0f, 0x1.0edaccp-16f, 0.0f, 0x1.8e20f4p-77f,
     0x1.4e1a24p-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.924c56p-59f, 0.0f, 0x1.13cb1p-67f,
     0x1.c15ac4p-80f, 0.0f, 0x1.2c49fcp-9f, 0x1.b3d5b8p-83f, 0.0f, 0x1.99af12p-119f,
     0x1.8ed8fp-17f, 0.0f, 0x1.cd352ep-4f, 0x1.ce691p-36f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b73p-55f, 0.0f, 0x1.35ce54p-116f, 0x1.5ad7bp-29f, 0.0f,
     0x1.c3126p-123f, 0x1.f01abp-47f, 0.0f, 0x1.c75dbep-77f, 0x1.1aa4dap-61f, 0.0f,
     0.0f, 0x1.d84508p-110f, 0x1.ecf154p-63f, 0.0f, 0.0f, 0x1.e8aebcp-76f, 0.0f, 0.0f,
     0x1.b049ep-14f, 0.0f
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
            tmp1 = Sleef_coshf8_u10kvx(tmp0);
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
    printf("Sleef_coshf8_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_coshf8_u10kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
