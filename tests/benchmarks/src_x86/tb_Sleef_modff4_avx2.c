/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_modff4_avx2128.c --function Sleef_modff4_avx2128 --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary32 --vector-size 4 \
 *     --function-input-vector-size 4 --precision sleef_sf2 --bench \
 *     --no-embedded-bin --target x86_avx2128
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <string.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef___m128_2 external_bench_wrapper_cst = {.x = {0.0f, 0.0f, 0.0f, 0.0f},.y = {0.0f, 0.0f, 0.0f, 0.0f}};
static const Sleef___m128_2 external_bench_wrapper_cst1 = {.x = {0.0f, 0.0f, 0.0f, 0.0f},.y = {0.0f, 0.0f, 0.0f, 0.0f}};
volatile Sleef___m128_2 external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e3091p-26f, 0.0f, 0.0f, 0.0f, 0x1.651b1cp-10f,
     0x1.dc63a8p-36f, 0.0f, 0.0f, 0.0f, 0x1.62e666p-53f, 0.0f, 0.0f, 0.0f,
     0x1.055604p-73f, 0.0f, 0.0f, 0.0f, 0x1.6ed96cp-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2ec836p-2f, 0x1.15b152p-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.855bdcp-68f,
     0x1.ee3488p-92f, 0.0f, 0x1.df543ep-76f, 0.0f, 0x1.eda266p-7f, 0x1.12c94cp-71f,
     0.0f, 0.0f, 0x1.20dcaap-94f, 0x1.230476p-10f, 0x1.c61d1p-20f, 0.0f,
     0x1.346474p-40f, 0x1.e2e69ap-24f, 0x1.e6d43ap-73f, 0x1.f249cap-56f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.562a26p-73f, 0x1.030ebcp-94f, 0.0f, 0.0f, 0.0f, 0x1.bb701ep-109f,
     0.0f, 0x1.3f0e4ep-113f, 0x1.2850ecp-35f, 0.0f, 0x1.ca254ap-91f, 0.0f, 0.0f,
     0x1.2be768p-36f, 0.0f, 0.0f, 0.0f, 0x1.329c5ap-71f, 0x1.e26cf6p-30f,
     0x1.f8b1f4p-25f, 0.0f, 0.0f, 0x1.9e1794p-84f, 0x1.57bc62p-121f, 0x1.43c65ap-45f,
     0.0f, 0.0f, 0.0f, 0x1.38a28cp-45f, 0x1.be08f2p-84f, 0x1.fa9cd2p-7f,
     0x1.5f2e5p-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.50ebf4p-7f, 0.0f, 0.0f,
     0x1.97b79ep-114f, 0x1.96442cp-90f, 0.0f, 0.0f, 0x1.7e5f62p-63f, 0.0f, 0.0f, 0.0f,
     0x1.717584p-80f, 0.0f, 0x1.03b662p-31f, 0x1.09c9cep-16f, 0x1.c69baep-35f,
     0x1.737b26p-11f, 0.0f, 0x1.2e5686p-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3b58ep-102f,
     0x1.185c38p-88f, 0x1.14c73ep-110f, 0x1.4cbabap-75f, 0.0f, 0x1.d09d2ap-8f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.939dbp-56f, 0x1.11b93ep-92f, 0.0f, 0x1.dc2bb2p-122f, 0.0f,
     0x1.fa875ep-40f, 0x1.547f46p-69f, 0x1.295b4cp-102f, 0.0f, 0.0f, 0x1.306174p-95f,
     0x1p0f, 0.0f, 0x1.28d256p-73f, 0x1.9629c4p-70f, 0.0f, 0.0f, 0x1.90f076p-74f,
     0x1.586318p-47f, 0.0f, 0x1.32cfdap-76f, 0.0f, 0x1.adade4p-16f, 0x1.52e80cp-97f,
     0.0f, 0.0f, 0x1.dcae26p-31f, 0x1.f35e3ep-62f, 0x1.ec6ecap-90f, 0x1.94433cp-67f,
     0.0f, 0.0f, 0x1.ac222ep-111f, 0x1.e65d3cp-10f, 0.0f, 0x1.09df3p-26f,
     0x1.69ea3ep-48f, 0.0f, 0.0f, 0x1.ca6edp-101f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6802f2p-96f, 0x1.ecde5cp-82f, 0.0f, 0x1.75e9b4p-92f, 0x1.398bd8p-88f, 0.0f,
     0.0f, 0.0f, 0x1.94bfaep-103f, 0x1.ca55fcp-36f, 0x1.cc351ep-69f, 0x1.c9c08ep-109f,
     0x1.a93754p-38f, 0.0f, 0.0f, 0.0f, 0x1.d7467ap-125f, 0.0f, 0.0f,
     0x1.21eeb8p-110f, 0.0f, 0x1.0e5696p-71f, 0x1.71644cp-9f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.925fd4p-58f, 0.0f, 0.0f, 0x1.151726p-20f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.24b94ep-65f, 0.0f, 0x1.e490acp-11f, 0x1.04a298p-106f, 0.0f, 0.0f,
     0x1.c875b2p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b6efb8p-14f, 0x1.6fcf98p-120f,
     0x1.29ff28p-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3f3cfap-73f, 0.0f, 0.0f, 0.0f,
     0x1.dbe088p-82f, 0x1.4fed7ap-65f, 0x1.3c7c46p-33f, 0x1.28ed2ap-84f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f8da58p-20f, 0.0f, 0x1.d25e5p-27f, 0x1.c6d242p-104f,
     0x1.344878p-30f, 0.0f, 0x1.2d53ecp-58f, 0x1.3bf5fp-74f, 0x1.9951ecp-92f, 0.0f,
     0.0f, 0x1.9a3276p-59f, 0x1.c7baaap-104f, 0.0f, 0.0f, 0x1.27586ap-55f, 0.0f,
     0x1.c2d942p-84f, 0x1.3bab9cp-112f, 0.0f, 0.0f, 0x1.d236fp-66f, 0.0f, 0.0f,
     0x1.75fbd6p-18f, 0.0f, 0x1.5e7976p-108f, 0x1.12eafap-57f, 0.0f, 0.0f,
     0x1.6c91a4p-78f, 0x1.8d8ec8p-70f, 0x1.48175ep-8f, 0.0f, 0x1.d1753cp-38f,
     0x1.87b832p-92f, 0.0f, 0x1.489eap-52f, 0.0f, 0x1.68da8ap-112f, 0x1.6fdd1ep-78f,
     0.0f, 0.0f, 0x1.d4a21ap-40f, 0x1.83643p-96f, 0.0f, 0x1.6130aep-39f, 0.0f,
     0x1.627c86p-64f, 0x1.7697e8p-16f, 0x1.6f7a1ep-23f, 0x1.f17312p-63f,
     0x1.810ba8p-114f, 0x1.be83f4p-124f, 0x1.cba2e2p-29f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.14ddep-114f, 0x1.706296p-74f, 0x1.eb57c2p-63f, 0x1.507efep-36f,
     0x1.ccfeb4p-106f, 0.0f, 0x1.4af6fep-17f, 0x1.acb78ap-114f, 0x1.1f021p-50f, 0.0f,
     0x1.3e8cf8p-4f, 0x1.29b908p-1f, 0x1.8934f8p-115f, 0x1.225f8p-89f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.2a92f4p-68f, 0x1.c0fc7p-60f, 0.0f, 0.0f, 0.0f,
     0x1.2f343p-68f, 0x1.45e022p-101f, 0.0f, 0x1.cc6142p-5f, 0x1.3fd82p-1f, 0.0f,
     0x1.4d4a52p-14f, 0x1.626814p-100f, 0.0f, 0x1.06f8ap-68f, 0.0f, 0x1.8e647ap-68f,
     0.0f, 0.0f, 0x1.b68ee2p-41f, 0x1.1dee84p-30f, 0.0f, 0.0f, 0x1.1c4fep-117f,
     0x1.8df1dcp-93f, 0.0f, 0x1.72bba2p-65f, 0x1.f17c6p-91f, 0.0f, 0x1.14022ep-1f,
     0x1.666bep-68f, 0.0f, 0.0f, 0x1.2ded64p-105f, 0.0f, 0.0f, 0x1.d02cb4p-51f, 0.0f,
     0x1.398f1cp-93f, 0.0f, 0.0f, 0.0f, 0x1.cd208ep-98f, 0x1.b05a3ap-74f,
     0x1.8ca80ep-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6e8eccp-19f, 0x1.5a7a3p-41f,
     0x1.16cd42p-51f, 0x1.244c38p-122f, 0.0f, 0.0f, 0.0f, 0x1.c7ac4ep-117f, 0.0f,
     0.0f, 0.0f, 0x1.5787dap-28f, 0.0f, 0x1.f3p-112f, 0x1.5c26b6p-101f,
     0x1.54dcb6p-15f, 0x1.ae0838p-15f, 0.0f, 0x1.4a1388p-9f, 0x1.c85978p-104f, 0.0f,
     0x1.e07a92p-118f, 0.0f, 0x1.b7ee3ap-76f, 0x1.1d65ccp-75f, 0x1.234452p-53f,
     0x1.673664p-46f, 0.0f, 0x1.204ee4p-70f, 0.0f, 0.0f, 0x1.cb4878p-8f, 0.0f,
     0x1.1345ecp-116f, 0x1.935302p-83f, 0.0f, 0.0f, 0.0f, 0x1.47d422p-24f,
     0x1.845b92p-84f, 0x1.ce6ec4p-34f, 0x1.dc6e0ap-24f, 0x1.ba6902p-57f,
     0x1.0af24ap-119f, 0x1.a2eec6p-1f, 0.0f, 0x1.c67e88p-122f, 0.0f, 0x1.8126bp-16f,
     0x1.4a668p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b7c95p-22f, 0x1.1ab11p-25f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.19f2f2p-105f, 0x1.01ed7ap-12f, 0.0f, 0.0f, 0x1.26ba3p-124f,
     0x1.a8644p-123f, 0x1.e3e58ap-21f, 0x1.6a611cp-78f, 0.0f, 0x1.625af8p-68f,
     0x1.e1072p-109f, 0x1.7ea882p-65f, 0.0f, 0x1.ed24a8p-34f, 0.0f, 0.0f,
     0x1.2f8e98p-48f, 0x1.8640dap-28f, 0.0f, 0.0f, 0x1.5956b2p-10f, 0.0f, 0.0f,
     0x1.fe843p-95f, 0x1.c5cd5ep-70f, 0.0f, 0.0f, 0x1.977b58p-15f, 0x1.42babcp-12f,
     0.0f, 0.0f, 0.0f, 0x1.903004p-88f, 0x1.c598bp-8f, 0x1.bc0c5cp-36f,
     0x1.ae1b18p-101f, 0x1.4d5a24p-88f, 0x1.c12e38p-82f, 0x1.533bd6p-7f, 0.0f, 0.0f,
     0.0f, 0x1.02274ep-20f, 0x1.49d95cp-115f, 0.0f, 0.0f, 0.0f, 0x1.ac50a2p-100f,
     0x1.529c32p-110f, 0x1.9b97d4p-116f, 0x1.fb5a6ap-70f, 0.0f, 0x1.ebe734p-99f,
     0x1.a9294ap-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3e2f8ep-3f, 0x1.959936p-3f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9242c4p-82f, 0.0f,
     0x1.fabd28p-97f, 0x1.636534p-45f, 0.0f, 0x1.3e288p-1f, 0.0f, 0.0f, 0.0f,
     0x1.e44766p-64f, 0.0f, 0x1.dfc85ep-37f, 0x1.2ae444p-4f, 0.0f, 0x1.106dcap-81f,
     0.0f, 0x1.fa6d52p-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.14e676p-37f, 0.0f, 0.0f,
     0x1.7a30c8p-99f, 0.0f, 0.0f, 0.0f, 0x1.9495bcp-17f, 0x1.1dcfa4p-72f, 0.0f,
     0x1.0b6382p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ec0b0cp-59f, 0.0f, 0.0f,
     0x1.02f8b2p-40f, 0x1.725ddp-90f, 0.0f, 0.0f, 0.0f, 0x1.e9b77ap-7f, 0.0f,
     0x1.4e80b2p-7f, 0x1.9d89a4p-115f, 0x1.2f5d88p-38f, 0.0f, 0.0f, 0x1.5037cp-61f,
     0x1.55cba6p-123f, 0x1.5585fp-43f, 0x1.f43b6p-107f, 0.0f, 0x1.861eb6p-93f,
     0x1.0f2368p-35f, 0.0f, 0.0f, 0.0f, 0x1.ec9b12p-112f, 0.0f, 0x1.480136p-62f,
     0x1.e165bp-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.674ca2p-87f, 0x1.292008p-34f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b55cdap-64f, 0.0f, 0.0f, 0x1.ce51d6p-3f,
     0x1.abcb8ap-38f, 0.0f, 0x1.f7717cp-116f, 0.0f, 0x1.5ff186p-83f, 0.0f,
     0x1.8a1cd8p-95f, 0x1.a3d072p-66f, 0.0f, 0.0f, 0x1.f148d2p-19f, 0x1.a2ecccp-92f,
     0.0f, 0.0f, 0.0f, 0x1.356a7cp-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7de9c6p-28f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.457042p-78f, 0.0f, 0.0f, 0x1.acf0d8p-11f,
     0x1.340966p-59f, 0.0f, 0x1.47682ep-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.59f344p-102f,
     0x1.31807cp-54f, 0.0f, 0.0f, 0x1.5e6e62p-110f, 0x1.9072a6p-48f, 0x1.67d012p-92f,
     0x1.aa7a9p-99f, 0x1.924fdap-84f, 0x1.b9a86ap-21f, 0x1.9a6f16p-63f, 0.0f, 0.0f,
     0x1.498e92p-126f, 0x1p0f, 0x1.a7246p-94f, 0.0f, 0x1.6451a6p-109f,
     0x1.5991d2p-53f, 0x1.57016cp-87f, 0.0f, 0.0f, 0.0f, 0x1.7f3088p-47f,
     0x1.5ea8f2p-111f, 0x1.084686p-94f, 0x1.19d584p-64f, 0x1.9cc48p-115f, 0.0f, 0.0f,
     0x1.08ebfap-109f, 0.0f, 0.0f, 0.0f, 0x1.cb386ap-49f, 0.0f, 0.0f, 0x1.a2c82ap-98f,
     0x1.8d6ca8p-97f, 0.0f, 0.0f, 0.0f, 0x1.c7735ep-67f, 0.0f, 0.0f, 0x1.0a05bp-88f,
     0x1.91bd2ep-56f, 0x1.28128ap-14f, 0x1.6039eep-98f, 0x1.6a8c4p-85f, 0.0f, 0.0f,
     0x1.242946p-82f, 0x1.4c36a4p-89f, 0.0f, 0.0f, 0x1.056c44p-111f, 0x1.1bf992p-72f,
     0.0f, 0.0f, 0x1.a1aafep-14f, 0.0f, 0x1.14f766p-72f, 0x1.d92bb2p-35f, 0.0f,
     0x1.80ee7ap-53f, 0x1.1ff32ap-8f, 0x1.973306p-91f, 0.0f, 0x1.d0df4ap-92f,
     0x1.df1866p-111f, 0x1.3147d2p-105f, 0.0f, 0x1.1eb2p-39f, 0x1.86611ap-126f,
     0x1.d79cb6p-106f, 0x1.6a8ba4p-29f, 0.0f, 0.0f, 0x1.1d0578p-31f, 0x1.be5e92p-30f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ea66cep-49f, 0x1.24584ap-78f, 0.0f, 0.0f,
     0x1.98ec52p-30f, 0x1.fc7c3p-28f, 0x1.7a8f98p-43f, 0x1.ee3dbep-54f, 0.0f, 0.0f,
     0x1.6aafd2p-81f, 0x1.e7998ep-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e5be8cp-75f,
     0x1.beb86cp-43f, 0.0f, 0.0f, 0.0f, 0x1.a7bcf6p-27f, 0.0f, 0.0f, 0x1.ef1b4p-63f,
     0x1.df8dc4p-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.657e28p-15f, 0.0f,
     0x1.8f6bbp-58f, 0.0f, 0x1.6c840cp-47f, 0x1.e5e40ap-89f, 0.0f, 0x1.208e98p-117f,
     0x1.54370ep-105f, 0.0f, 0.0f, 0x1.932f56p-119f, 0x1.dc3984p-38f, 0x1.c20bfcp-95f,
     0x1.df36d4p-100f, 0x1.5552f4p-107f, 0x1.ab1d92p-105f, 0.0f, 0.0f, 0x1.ba2e4p-76f,
     0x1.893f48p-110f, 0.0f, 0.0f, 0x1.7f4acap-121f, 0.0f, 0x1.923806p-91f,
     0x1.4ae776p-28f, 0x1.f44db2p-18f, 0x1.cc12bcp-70f, 0.0f, 0x1.cb8feep-99f,
     0x1.e28e58p-62f, 0x1.2e1b18p-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ac5e56p-104f,
     0x1.e8a3cap-58f, 0.0f, 0.0f, 0.0f, 0x1.dce8dap-85f, 0.0f, 0x1.fea0b8p-46f,
     0x1.cd6bbap-92f, 0.0f, 0x1.05f69ep-56f, 0.0f, 0x1.82384p-114f, 0x1.9102cep-27f,
     0.0f, 0x1.31644cp-102f, 0x1.279ecap-48f, 0.0f, 0.0f, 0x1.83cfd2p-50f,
     0x1.568ef4p-84f, 0.0f, 0x1.1c25ap-15f, 0x1.c08478p-88f, 0.0f, 0x1.2d58ep-121f,
     0x1.30749p-83f, 0.0f, 0.0f, 0x1.12b36ep-31f, 0x1.643fdp-98f, 0x1.8b2a72p-86f,
     0x1.853dcap-91f, 0x1.a873dap-106f, 0x1.2a26bep-100f, 0x1.85d062p-94f, 0.0f, 0.0f,
     0.0f, 0x1.bc3c6p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a758eap-60f,
     0x1.70df52p-19f, 0.0f, 0.0f, 0.0f, 0x1.304cbp-64f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.af6d4ap-68f, 0.0f, 0.0f, 0x1.af5d9ap-124f, 0.0f, 0x1.6adfa4p-83f, 0.0f,
     0x1.6db288p-16f, 0x1.f7b408p-93f, 0x1.920f7ap-19f, 0x1.14b234p-67f, 0.0f,
     0x1.abba58p-19f, 0.0f, 0x1.23b6cep-16f, 0.0f, 0x1.9d1c84p-115f, 0x1.c4e1cp-122f,
     0x1.760a8ap-93f, 0x1.5f6d7p-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5e76bep-84f,
     0.0f, 0x1.f0f976p-122f, 0x1.d113p-48f, 0x1.21f3a2p-34f, 0x1.e02bf2p-113f,
     0x1.d2efe8p-91f, 0.0f, 0x1.1a1d7ap-42f, 0.0f, 0x1.9a5fc6p-99f, 0x1.61ad76p-121f,
     0.0f, 0.0f, 0x1.628da4p-36f, 0.0f, 0.0f, 0x1.57f2fp-123f, 0x1.069756p-69f,
     0x1.5138cep-26f, 0x1.2d1b9cp-80f, 0.0f, 0.0f, 0x1.ce48a6p-34f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.3407cp-84f, 0.0f, 0.0f, 0x1.472eecp-15f, 0.0f, 0.0f, 0.0f,
     0x1.47b6ep-33f, 0.0f, 0.0f, 0x1.08fe16p-102f, 0x1.d9115ep-23f, 0.0f,
     0x1.d3738cp-68f, 0x1.345fc6p-98f, 0.0f, 0x1.46b3dap-13f, 0.0f, 0x1.c1cdc8p-49f,
     0.0f, 0.0f, 0x1.03111ap-66f, 0.0f, 0.0f, 0.0f, 0x1.e1a0a2p-55f, 0x1.bca25ep-79f,
     0x1.68b1fcp-81f, 0x1.b5037ep-119f, 0.0f, 0.0f, 0x1.d6dd78p-76f, 0x1.4fcaa4p-42f,
     0x1.48f56cp-25f, 0.0f, 0x1.836b68p-64f, 0x1.07bbp-98f, 0x1.4c186p-47f, 0.0f,
     0x1.376de4p-99f, 0.0f, 0x1.1a03cap-6f, 0.0f, 0.0f, 0x1.455f54p-62f,
     0x1.86b6b6p-4f, 0x1.31dc3cp-74f, 0.0f, 0x1.046194p-38f, 0x1.259808p-65f,
     0x1.9f7c76p-105f, 0x1.9d97f2p-13f, 0x1.77a846p-6f, 0x1.16c03ep-4f, 0.0f,
     0x1.543346p-33f, 0x1.7557cp-124f, 0x1.31f3fap-88f, 0.0f, 0x1.6b7da2p-39f,
     0x1.cd402ap-116f, 0x1.ce2226p-125f, 0.0f, 0.0f, 0x1.538a52p-8f, 0.0f, 0.0f,
     0x1.ee26e8p-121f, 0.0f, 0x1.64ac8cp-124f, 0.0f, 0.0f, 0x1.2fe0e6p-88f,
     0x1.73db98p-108f, 0x1.16de7ap-112f, 0x1.bfa1a4p-24f, 0x1.43c06ep-61f, 0.0f, 0.0f,
     0x1.2eae4ap-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a03724p-37f, 0.0f, 0x1.cc34a2p-42f,
     0x1.37bc02p-68f, 0.0f, 0x1.052ad2p-9f, 0x1.2d0cf2p-124f, 0.0f, 0x1.e6652ap-38f,
     0x1.f7d9e4p-40f, 0.0f, 0.0f, 0x1.b3b156p-43f, 0x1.8abf1ep-114f, 0.0f,
     0x1.6cdce6p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4297a4p-65f, 0x1.f44bdcp-117f, 0.0f,
     0.0f, 0x1.8f21d4p-118f, 0x1.4aeb42p-15f, 0x1.8fc3bep-50f, 0.0f, 0.0f,
     0x1.c49166p-100f, 0.0f, 0.0f, 0x1.9dfb96p-38f, 0.0f, 0x1.f21c5ep-101f,
     0x1.a1f97p-109f, 0x1.bf9bcp-14f, 0.0f, 0.0f, 0x1.909664p-24f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef___m128_2 global_bench_acc;
    int64_t timer;
    int64_t tmp;
    int32_t j;
    int64_t tmp1;
    int64_t tmp2;
    double id_tmp;
    double cpe_measure;
    
    global_bench_acc = external_bench_wrapper_cst;
    {
        uint32_t cycles_hi = 0, cycles_lo = 0;
        asm volatile (
            "cpuid\n\t"
            "rdtsc\n\t"
            "mov %%edx, %0\n\t"
            "mov %%eax, %1\n\t"
            : "=r" (cycles_hi), "=r" (cycles_lo)
            :: "%rax", "%rbx", "%rcx", "%rdx");
        tmp = ((uint64_t) cycles_hi << 32) | cycles_lo;
    };
    timer = tmp;
    j = INT32_C(0);

    for (;(j < INT32_C(10000));){
        Sleef___m128_2 local_acc;
        int32_t i;
        ml_float4_t tmp0;
        ml_float4_t tmp1;
        ml_float4_t tmp2;
        ml_float4_t tmp3;
        ml_float4_t tmp4;
        ml_float4_t tmp5;
        Sleef___m128_2 tmp6;
        int32_t tmp7;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1004));){
            ml_float4_t tmp0;
            Sleef___m128_2 tmp1;
            ml_float4_t tmp2;
            ml_float4_t tmp3;
            ml_float4_t tmp4;
            ml_float4_t tmp5;
            ml_float4_t tmp6;
            ml_float4_t tmp7;
            Sleef___m128_2 tmp8;
            int32_t tmp9;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_modff4_avx2128(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = local_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = local_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef___m128_2) {.x=tmp4, .y=tmp7});
            local_acc = tmp8;
            tmp9 = i + INT32_C(4);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = local_acc.x;
        tmp2 = tmp0 + tmp1;
        tmp3 = global_bench_acc.y;
        tmp4 = local_acc.y;
        tmp5 = tmp3 + tmp4;
        tmp6 = ((Sleef___m128_2) {.x=tmp2, .y=tmp5});
        global_bench_acc = tmp6;
        tmp7 = j + INT32_C(1);
        j = tmp7;
    }
    {
        uint32_t cycles_hi = 0, cycles_lo = 0;
        asm volatile (
            "cpuid\n\t"
            "rdtsc\n\t"
            "mov %%edx, %0\n\t"
            "mov %%eax, %1\n\t"
            : "=r" (cycles_hi), "=r" (cycles_lo)
            :: "%rax", "%rbx", "%rcx", "%rdx");
        tmp1 = ((uint64_t) cycles_hi << 32) | cycles_lo;
    };
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_modff4_avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_modff4_avx2128 bench acc {.x=[%a, %a, %a, %a], .y=[%a, %a, %a, %a]}\n", global_bench_acc.x[0], global_bench_acc.x[1], global_bench_acc.x[2], global_bench_acc.x[3], global_bench_acc.y[0], global_bench_acc.y[1], global_bench_acc.y[2], global_bench_acc.y[3]);
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
