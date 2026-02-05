/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_sincosf8_u10kvx.c --function Sleef_sincosf8_u10kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 4 --function-input-vector-size 4 --precision sleef_sf2 \
 *     --bench --no-embedded-bin --target kv3
 *
 */
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <string.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef_float32x8_t_2 external_bench_wrapper_cst = {.x = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f},.y = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f}};
static const Sleef_float32x8_t_2 external_bench_wrapper_cst1 = {.x = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f},.y = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f}};
volatile Sleef_float32x8_t_2 external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0x1.a4ef94p-5f, 0x1.8a45ccp-38f, 0x1.d4a14p-67f, 0x1.80879p-63f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.023c7ap-21f, 0.0f, 0x1.bdb05ap-51f, 0x1.8df5cp-93f,
     0x1.e0740ap-24f, 0x1.8575ecp-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b01664p-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7d78dap-26f, 0.0f,
     0x1.30464p-4f, 0.0f, 0x1.0e12eap-84f, 0x1.543134p-24f, 0x1.c71e2cp-56f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f643f6p-19f, 0x1.b81c46p-119f, 0.0f, 0x1.061f1cp-79f,
     0x1.797632p-34f, 0x1.c853f8p-14f, 0.0f, 0.0f, 0x1.de756ap-102f, 0.0f, 0.0f,
     0x1.20ddeep-81f, 0x1.294ac8p-91f, 0x1.99fc18p-96f, 0x1.ddd9dep-107f,
     0x1.b9d70ap-108f, 0x1.0918ecp-122f, 0x1.3b74b8p-34f, 0.0f, 0.0f, 0x1.a99146p-78f,
     0x1.a68544p-104f, 0.0f, 0x1.ce146cp-17f, 0.0f, 0x1.bbf93cp-77f, 0.0f, 0.0f,
     0x1.38cd1p-45f, 0x1.506a14p-25f, 0x1.044712p-21f, 0.0f, 0x1.d300c6p-82f,
     0x1.0d178ep-108f, 0x1.5da6e6p-103f, 0.0f, 0.0f, 0x1.442b7cp-125f,
     0x1.09453ep-104f, 0.0f, 0x1.097a9cp-42f, 0x1.aa4ce2p-64f, 0x1.9fdf86p-126f, 0.0f,
     0x1.2bb7a4p-29f, 0.0f, 0.0f, 0x1.03ae22p-123f, 0x1.b4dc98p-8f, 0.0f, 0.0f, 0.0f,
     0x1.e75fc2p-114f, 0x1.99e75ep-74f, 0x1.eaa9eap-33f, 0x1.5e9648p-41f,
     0x1.02fd8ep-63f, 0x1.b2a00ap-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6f5d26p-26f, 0x1.388496p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8ea862p-3f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.27a102p-118f, 0x1.0a24ep-114f, 0.0f, 0.0f, 0x1.1bdc7p-62f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.08c37ap-70f, 0x1.da1b9ap-78f, 0.0f,
     0x1.d496bcp-76f, 0.0f, 0x1.b6616p-109f, 0x1.e49578p-90f, 0x1.bb9bd8p-125f, 0.0f,
     0.0f, 0.0f, 0x1.81c6c2p-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1a2486p-109f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f41d4ep-62f, 0x1.0e969cp-114f, 0x1.d9faa6p-42f, 0.0f, 0.0f,
     0x1.a01facp-62f, 0x1.1b13b6p-46f, 0.0f, 0x1.499456p-49f, 0x1.6a5baap-118f,
     0x1.285594p-21f, 0x1.1c30eep-115f, 0x1.7dd32ap-72f, 0x1.2a1492p-18f, 0.0f,
     0x1.55faaap-100f, 0.0f, 0.0f, 0x1.2a3e6cp-64f, 0x1.7afbe2p-57f, 0.0f,
     0x1.36eb8p-103f, 0x1.fe5462p-77f, 0.0f, 0.0f, 0x1.ba15d2p-70f, 0x1.3ac776p-41f,
     0.0f, 0x1.d38fep-56f, 0.0f, 0x1.4a431ap-69f, 0.0f, 0x1.8e36d2p-91f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.c4e486p-18f, 0.0f, 0.0f, 0.0f, 0x1.113498p-75f, 0x1.3a2094p-8f,
     0x1.2ae114p-67f, 0x1.cfd23ap-107f, 0.0f, 0x1.b0b17cp-47f, 0x1.68562ep-47f,
     0x1.9139f8p-108f, 0x1.5cbe12p-106f, 0x1.e20d42p-69f, 0x1.cf42e8p-1f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.5d87cep-43f, 0.0f, 0x1.1c211cp-4f, 0.0f, 0.0f, 0.0f,
     0x1.feb85p-38f, 0.0f, 0x1.5dc2c4p-77f, 0x1.77f7b4p-5f, 0.0f, 0x1.08eb6p-71f,
     0x1.95a46ap-118f, 0.0f, 0.0f, 0.0f, 0x1.20f7b4p-121f, 0x1.49a518p-42f, 0.0f,
     0.0f, 0.0f, 0x1.d734f8p-76f, 0x1.b66812p-73f, 0x1.134a46p-66f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.06024cp-10f, 0x1.4444fep-38f, 0.0f,
     0x1.1dbcc6p-40f, 0.0f, 0x1.be38cp-98f, 0x1.46a708p-45f, 0.0f, 0x1.fc39f8p-115f,
     0x1.ade082p-66f, 0.0f, 0.0f, 0x1.c0037ep-50f, 0.0f, 0.0f, 0.0f, 0x1.bd7484p-80f,
     0.0f, 0x1.68553cp-58f, 0.0f, 0x1.5a625ep-38f, 0.0f, 0x1.2d1a94p-102f,
     0x1.28e488p-52f, 0x1.3fb7a2p-97f, 0x1.8b9c7ep-9f, 0x1.66e012p-64f, 0.0f,
     0x1.f5efa2p-76f, 0x1.c9258cp-12f, 0x1.5a3f12p-19f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.627e7ap-114f, 0.0f, 0.0f, 0.0f, 0x1.9b3fccp-31f, 0x1.ba88e8p-6f, 0.0f, 0.0f,
     0x1.81b088p-121f, 0x1.a2e0aap-113f, 0x1.7780ccp-84f, 0x1.d70cf6p-66f,
     0x1.c23724p-72f, 0.0f, 0x1.8b2ef4p-62f, 0.0f, 0.0f, 0.0f, 0x1.e8bd16p-121f, 0.0f,
     0.0f, 0.0f, 0x1.f8e46ap-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3dbb02p-64f,
     0.0f, 0.0f, 0x1.aa178cp-101f, 0x1.34a9p-50f, 0.0f, 0x1.50e3e4p-38f, 0.0f, 0.0f,
     0x1.1f589ep-11f, 0x1.85eb88p-71f, 0.0f, 0x1.b4ac62p-25f, 0.0f, 0.0f, 0.0f,
     0x1.88107cp-16f, 0x1.a83e2ep-68f, 0.0f, 0x1.7ce43ap-67f, 0.0f, 0x1.3e9e86p-49f,
     0x1.9bca62p-16f, 0.0f, 0.0f, 0x1.5d0eep-23f, 0.0f, 0.0f, 0x1.f546c4p-120f, 0.0f,
     0x1.78c02p-39f, 0.0f, 0.0f, 0x1.1ac128p-25f, 0.0f, 0.0f, 0x1.d62016p-84f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.85397p-78f, 0.0f, 0x1.3fafe4p-15f, 0.0f, 0.0f,
     0x1.f9ad24p-105f, 0x1.4255e6p-79f, 0.0f, 0x1.5b37dap-121f, 0.0f, 0x1.efc3dp-99f,
     0.0f, 0.0f, 0x1.f1b218p-6f, 0x1.566ea8p-66f, 0.0f, 0x1.3f906p-16f,
     0x1.ac334ep-53f, 0x1.031088p-40f, 0x1.e67e6cp-24f, 0.0f, 0.0f, 0x1.b269fep-47f,
     0.0f, 0.0f, 0.0f, 0x1.2d37eap-115f, 0x1.659e7p-12f, 0x1.edf7bcp-48f,
     0x1.8e08dp-116f, 0.0f, 0x1.948e6cp-47f, 0x1.8e1248p-80f, 0x1.cbf032p-75f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.885a5p-64f, 0x1.626d9cp-20f, 0.0f, 0x1.f1e038p-73f,
     0x1.5cc4a6p-49f, 0.0f, 0.0f, 0x1.31a484p-51f, 0.0f, 0.0f, 0x1.fabb42p-78f,
     0x1.c9e27ap-102f, 0x1.df1ab4p-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.44a212p-89f, 0.0f,
     0x1.4e7744p-119f, 0x1.8bbb86p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.da0ca6p-72f, 0x1.912324p-31f, 0.0f, 0x1.d055aap-53f, 0.0f,
     0x1.3bc1ccp-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5a57d2p-105f, 0.0f, 0x1.a53df8p-15f,
     0x1.a68e5ep-94f, 0.0f, 0x1.2ce026p-31f, 0.0f, 0.0f, 0.0f, 0x1.7527f6p-29f,
     0x1.70ba66p-94f, 0.0f, 0.0f, 0x1.d0ac64p-68f, 0x1.81f558p-69f, 0.0f,
     0x1.3ecc62p-67f, 0.0f, 0.0f, 0x1.e66d4ep-14f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.442c2cp-77f, 0.0f, 0x1.ccc8fcp-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.64088ep-85f,
     0.0f, 0.0f, 0.0f, 0x1.d6347ap-119f, 0x1.9f85cap-54f, 0.0f, 0.0f, 0x1.434e2cp-22f,
     0x1.a983fp-101f, 0x1.0e184ep-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.efeb06p-64f, 0.0f,
     0x1.ce9ad8p-87f, 0x1.c5a1e4p-55f, 0x1.ecd0d8p-75f, 0x1.4a78c6p-94f,
     0x1.df8f28p-89f, 0x1.a85e8ap-15f, 0.0f, 0x1.ede742p-112f, 0.0f, 0.0f,
     0x1.27c1bcp-122f, 0.0f, 0x1.6ecb38p-16f, 0x1.5a8d36p-84f, 0.0f, 0x1.055ec6p-47f,
     0x1.ae452ap-17f, 0x1.38ff48p-117f, 0x1.b7e5cap-36f, 0x1.ce5248p-77f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.62722ep-111f, 0.0f, 0x1.06ffb2p-43f, 0.0f, 0.0f,
     0x1.98529ep-8f, 0.0f, 0x1.3ade36p-27f, 0x1.30f062p-99f, 0x1.924e08p-26f,
     0x1.f6beb4p-99f, 0x1.01a45cp-15f, 0x1.ef44d6p-36f, 0x1.0e1f6cp-109f,
     0x1.5a4f9ep-62f, 0.0f, 0x1.9b3c8ap-47f, 0x1.60a334p-95f, 0.0f, 0x1.3e99cep-103f,
     0x1.4ec6c4p-5f, 0.0f, 0.0f, 0.0f, 0x1.83fcc4p-60f, 0x1.6d7356p-107f,
     0x1.7da6eap-72f, 0.0f, 0.0f, 0.0f, 0x1.67ca56p-26f, 0x1.c8a366p-76f, 0.0f, 0.0f,
     0x1.227dcp-7f, 0x1.dc0378p-38f, 0.0f, 0x1.239628p-36f, 0x1.6e3746p-60f,
     0x1.b2102cp-69f, 0.0f, 0.0f, 0x1.17afdp-97f, 0x1.5ec4ap-13f, 0.0f, 0.0f,
     0x1.adeb9ep-93f, 0.0f, 0.0f, 0x1.4da3a4p-101f, 0.0f, 0.0f, 0x1.9f7c28p-13f, 0.0f,
     0x1.0512d4p-21f, 0.0f, 0x1.29f13ep-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1e352p-5f, 0.0f, 0x1.a80366p-58f, 0x1.86e31p-70f, 0.0f, 0x1.54457cp-3f, 0.0f,
     0.0f, 0x1.440d5cp-73f, 0x1.8de6a8p-40f, 0.0f, 0.0f, 0x1.22e2c8p-8f, 0.0f,
     0x1.2a85f4p-55f, 0x1.05d1cep-18f, 0.0f, 0.0f, 0.0f, 0x1.2ab034p-61f, 0.0f, 0.0f,
     0x1.e1b1ep-90f, 0x1.e07e08p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.56c612p-28f, 0.0f, 0x1.382902p-118f, 0x1.b111fap-94f, 0.0f, 0x1.bfd718p-101f,
     0x1.c7b26ep-80f, 0.0f, 0x1.d20642p-3f, 0.0f, 0.0f, 0.0f, 0x1.c1c0b4p-35f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d38758p-71f, 0x1.ea4686p-55f, 0.0f, 0.0f, 0x1.d26ebep-2f,
     0.0f, 0x1.cd746ap-102f, 0.0f, 0.0f, 0x1.5f3aa8p-91f, 0x1.9843bap-91f,
     0x1.75b27p-6f, 0.0f, 0x1.8b66e6p-97f, 0x1.2d6bcp-100f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4718bp-50f, 0.0f, 0.0f, 0.0f, 0x1.a04994p-99f, 0x1.c87bd2p-35f,
     0x1.15369ap-117f, 0x1.eeffa8p-74f, 0.0f, 0x1.c93f1ap-80f, 0x1.d359c6p-59f, 0.0f,
     0x1.157eap-85f, 0x1.d410dap-124f, 0x1.c902e8p-47f, 0x1.b22d14p-88f,
     0x1.2344f4p-6f, 0x1.7ea4c6p-86f, 0x1.a96d18p-107f, 0x1.7651bap-93f, 0.0f, 0.0f,
     0x1.3f6812p-96f, 0x1.15a2acp-111f, 0x1.d90bbep-9f, 0.0f, 0x1.005e1ap-18f,
     0x1.9d5cf2p-126f, 0x1.278f2cp-21f, 0.0f, 0x1.8ec8aap-18f, 0.0f, 0x1.632bd2p-119f,
     0.0f, 0.0f, 0x1.f248bep-78f, 0x1.0e160ep-72f, 0.0f, 0x1.d3cfb8p-109f,
     0x1.eee1c8p-124f, 0x1.a02ab2p-11f, 0.0f, 0.0f, 0.0f, 0x1.5e9ceap-88f,
     0x1.ed814ep-38f, 0.0f, 0x1.188aa6p-3f, 0.0f, 0x1.200d54p-13f, 0.0f,
     0x1.daa3cp-108f, 0x1.37d7c2p-16f, 0x1.ddbbb2p-124f, 0x1.75279ep-16f,
     0x1.e4aeb4p-116f, 0.0f, 0x1.3ad354p-19f, 0.0f, 0.0f, 0x1.0d957ap-28f,
     0x1.b80d78p-103f, 0.0f, 0x1.b9132p-100f, 0.0f, 0.0f, 0x1.fae0e8p-48f, 0.0f, 0.0f,
     0.0f, 0x1.0d5516p-19f, 0.0f, 0x1.f404dep-68f, 0x1.c02c1ep-102f, 0.0f,
     0x1.45a286p-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fb5934p-100f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.fd5534p-7f, 0x1.3404e4p-91f, 0x1.a076f6p-31f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.0cb982p-16f, 0.0f, 0.0f, 0x1.bb28ap-34f, 0.0f, 0x1.30364cp-45f,
     0x1.86cbcep-37f, 0.0f, 0x1.7e957ep-120f, 0x1.03f544p-60f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4d2fbap-78f, 0x1.48521ap-52f, 0x1.be43a2p-68f, 0x1.f846a8p-22f,
     0x1.b5f86ap-20f, 0x1.8cb4b6p-102f, 0x1.17131cp-120f, 0x1.04f78ap-64f, 0.0f, 0.0f,
     0.0f, 0x1.480dap-97f, 0x1.666c6ep-35f, 0.0f, 0.0f, 0.0f, 0x1.9346dcp-47f,
     0x1.68ae58p-35f, 0x1.cb3e1ep-79f, 0x1.012f54p-107f, 0.0f, 0x1.a3001ap-92f, 0.0f,
     0.0f, 0x1.17fa18p-118f, 0x1.f7c872p-20f, 0.0f, 0x1.da781ep-91f, 0x1.897fc8p-77f,
     0x1.ebe0b4p-27f, 0x1.a42856p-8f, 0.0f, 0.0f, 0x1.5fdb5p-100f, 0x1.f8e5cp-30f,
     0.0f, 0x1.1d1202p-121f, 0x1.5a4eeap-107f, 0.0f, 0x1.12e302p-24f, 0.0f,
     0x1.b5fb08p-8f, 0.0f, 0.0f, 0x1.9c1ba4p-48f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9cafp-111f, 0.0f, 0.0f, 0.0f, 0x1.7de09p-8f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.20883p-116f, 0.0f, 0x1.a94076p-45f, 0x1.25b8f8p-61f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4f989ap-48f, 0x1.406938p-92f, 0x1.679a3cp-20f, 0x1.17435p-73f,
     0x1.479b8ep-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.06d644p-48f, 0.0f, 0.0f, 0.0f,
     0x1.b868d6p-121f, 0x1.6907p-14f, 0.0f, 0x1.5ce5f6p-42f, 0.0f, 0x1.c7b91p-20f,
     0x1.78002ap-111f, 0x1.bcbfep-91f, 0.0f, 0x1.35b784p-29f, 0.0f, 0x1.34dd2ap-39f,
     0.0f, 0x1.09088p-100f, 0.0f, 0.0f, 0x1.1e0a4ep-36f, 0x1.a476eep-38f, 0.0f, 0.0f,
     0x1.b99f1ep-18f, 0x1.d6c44cp-118f, 0.0f, 0.0f, 0x1.416f3ep-97f, 0.0f,
     0x1.72e7fp-68f, 0.0f, 0x1.c64f8cp-73f, 0.0f, 0.0f, 0.0f, 0x1.450c26p-3f, 0.0f,
     0x1.5230dep-101f, 0.0f, 0x1.7d0aa2p-54f, 0x1.76d0eep-54f, 0x1.f8ad14p-17f, 0.0f,
     0.0f, 0x1.da924ep-52f, 0.0f, 0x1.6a8bb8p-27f, 0.0f, 0x1.d68f5cp-116f, 0.0f,
     0x1.53748ep-77f, 0.0f, 0.0f, 0x1.56eb5ap-21f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6ad41ap-77f, 0.0f, 0x1.005a88p-27f, 0x1.0c0632p-54f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c7452cp-99f, 0x1.ea66e4p-54f, 0.0f, 0.0f, 0x1.344cf8p-7f, 0x1.1e54cap-97f,
     0x1.369b06p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a70c54p-4f, 0x1.6a8778p-96f,
     0x1.fa8584p-7f, 0x1.2e1fa4p-17f, 0.0f, 0x1.ed7746p-85f, 0.0f, 0.0f,
     0x1.67e214p-78f, 0.0f, 0x1.91cdeap-12f, 0.0f, 0x1.2c9284p-26f, 0x1.e8c9d2p-16f,
     0.0f, 0x1.74f796p-77f, 0.0f, 0x1.c4cee8p-33f, 0.0f, 0x1.53bdfap-27f,
     0x1.ea62f4p-74f, 0.0f, 0x1.d5a7bap-59f, 0.0f, 0x1.48c97ap-103f, 0x1.2786c4p-63f,
     0x1.9edadep-82f, 0x1.5cb6b2p-125f, 0x1.486388p-88f, 0.0f, 0.0f, 0.0f,
     0x1.f6d5c8p-60f, 0x1.c0a66ap-10f, 0x1.44d348p-118f, 0.0f, 0x1.262824p-10f,
     0x1.b589f8p-97f, 0x1.b4584cp-92f, 0x1.5df522p-80f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8b4b12p-118f, 0x1.be2d92p-16f, 0x1.ce46b2p-8f, 0.0f, 0.0f, 0x1.4c5a88p-118f,
     0x1.03f6fcp-87f, 0.0f, 0x1.27da0ap-21f, 0.0f, 0x1.419bbep-40f, 0x1.c42d9ep-50f,
     0x1.ba52e8p-52f, 0x1.70fd7p-93f, 0.0f, 0x1.7e831cp-93f, 0x1.7a1fd4p-7f,
     0x1.547302p-53f, 0.0f, 0.0f, 0.0f, 0x1.81f38ap-43f, 0.0f, 0.0f, 0x1.959efap-43f,
     0.0f, 0x1.282366p-88f, 0x1.d3a358p-119f, 0x1.77b3bp-94f, 0x1.641e26p-85f,
     0x1.470718p-107f, 0.0f, 0x1.0a555p-22f, 0.0f, 0x1.6747e2p-95f, 0x1.7a9196p-25f,
     0.0f, 0.0f, 0.0f, 0x1.2db26p-56f, 0x1.de91e2p-87f, 0.0f, 0x1.821d1ap-77f, 0.0f,
     0x1.7b44cep-75f, 0x1.efba8ap-118f, 0x1.df976cp-65f, 0x1.2d0732p-79f,
     0x1.ee2fd4p-101f, 0x1.a334eap-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.17dacep-113f, 0x1.7c1efap-123f, 0.0f, 0.0f, 0.0f, 0x1.532e88p-64f, 0.0f,
     0x1.0b6e14p-41f, 0x1.c57cdp-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.df531ep-87f, 0.0f, 0.0f, 0x1.09b882p-27f, 0x1.e7fe6ap-70f, 0.0f, 0.0f, 0.0f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef_float32x8_t_2 global_bench_acc;
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
        Sleef_float32x8_t_2 local_acc;
        int32_t i;
        ml_float8_t tmp0;
        ml_float8_t tmp1;
        ml_float8_t tmp2;
        ml_float8_t tmp3;
        ml_float8_t tmp4;
        ml_float8_t tmp5;
        Sleef_float32x8_t_2 tmp6;
        int32_t tmp7;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1004));){
            ml_float8_t tmp0;
            Sleef_float32x8_t_2 tmp1;
            ml_float8_t tmp2;
            ml_float8_t tmp3;
            ml_float8_t tmp4;
            ml_float8_t tmp5;
            ml_float8_t tmp6;
            ml_float8_t tmp7;
            Sleef_float32x8_t_2 tmp8;
            int32_t tmp9;

            memcpy(&tmp0, ((ml_float8_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            tmp1 = Sleef_sincosf8_u10kvx(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = local_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = local_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef_float32x8_t_2) {.x=tmp4, .y=tmp7});
            local_acc = tmp8;
            tmp9 = i + INT32_C(8);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = local_acc.x;
        tmp2 = tmp0 + tmp1;
        tmp3 = global_bench_acc.y;
        tmp4 = local_acc.y;
        tmp5 = tmp3 + tmp4;
        tmp6 = ((Sleef_float32x8_t_2) {.x=tmp2, .y=tmp5});
        global_bench_acc = tmp6;
        tmp7 = j + INT32_C(1);
        j = tmp7;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_sincosf8_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_sincosf8_u10kvx bench acc {.x=[%a, %a, %a, %a], .y=[%a, %a, %a, %a]}\n", global_bench_acc.x[0], global_bench_acc.x[1], global_bench_acc.x[2], global_bench_acc.x[3], global_bench_acc.y[0], global_bench_acc.y[1], global_bench_acc.y[2], global_bench_acc.y[3]);
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
