/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_exp10f1_u35purecfma.c --function \
 *     Sleef_finz_exp10f1_u35purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile float external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0.0f, 0.0f, 0x1.7a0968p-60f, 0x1.b32634p-36f, 0.0f, 0.0f, 0.0f, 0x1.09b782p-21f,
     0x1.12d6b6p-85f, 0.0f, 0x1.79e07cp-48f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.afb10ap-85f, 0x1.4641b8p-35f, 0x1.c7e47ap-85f, 0x1.3baaep-1f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.71e684p-6f, 0x1.bd4752p-6f, 0x1.546126p-16f, 0.0f,
     0x1.c85d18p-85f, 0.0f, 0.0f, 0.0f, 0x1.fbb514p-106f, 0x1.c323eap-58f,
     0x1.7d45ecp-80f, 0x1.99a858p-54f, 0x1.3910ccp-57f, 0x1.6ae95ep-53f, 0.0f, 0x1p0f,
     0x1.99fc94p-31f, 0.0f, 0x1.e188ap-3f, 0.0f, 0.0f, 0x1.74a198p-22f,
     0x1.e1e4eap-21f, 0x1.150fcep-82f, 0x1.4f582ep-67f, 0x1.8da4cep-113f,
     0x1.d762f6p-40f, 0.0f, 0x1.ca4604p-50f, 0x1.a556a4p-115f, 0x1.99fe5cp-90f,
     0x1.d806fap-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6d4066p-40f, 0x1.4d9314p-1f,
     0x1.ea7968p-55f, 0.0f, 0.0f, 0x1.5a66a4p-95f, 0x1.864fb2p-40f, 0x1.1a2f5ep-118f,
     0.0f, 0x1.a626dcp-75f, 0x1.6e158ap-88f, 0.0f, 0x1.4cc0eep-68f, 0x1.9a1aa4p-35f,
     0.0f, 0x1.97865ep-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.09e068p-12f, 0.0f,
     0x1.eb06a4p-41f, 0x1.6fb62ep-50f, 0.0f, 0x1.429816p-72f, 0x1.fc15ap-33f,
     0x1.75346p-46f, 0.0f, 0x1.9732b2p-32f, 0.0f, 0x1.914b3p-66f, 0.0f,
     0x1.4332cep-93f, 0.0f, 0.0f, 0.0f, 0x1.b85c62p-123f, 0x1.4bc38p-3f,
     0x1.7226f6p-85f, 0.0f, 0.0f, 0x1.3f1f62p-93f, 0.0f, 0x1.730acp-12f,
     0x1.aadbd2p-91f, 0.0f, 0.0f, 0x1.613616p-4f, 0.0f, 0x1.4b394cp-88f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.511bf6p-109f, 0.0f, 0x1.ccccf2p-28f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cec32cp-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.cbd46p-72f, 0.0f, 0.0f, 0.0f, 0x1.5f0392p-66f, 0x1.b86cd2p-8f,
     0x1.d445c2p-38f, 0.0f, 0x1.c2f1d6p-54f, 0x1.4cffd6p-73f, 0.0f, 0.0f,
     0x1.e4c92ep-39f, 0.0f, 0.0f, 0x1.51b8f4p-56f, 0.0f, 0.0f, 0.0f, 0x1.87a98p-78f,
     0.0f, 0.0f, 0x1.f272f4p-29f, 0x1.f0bce2p-35f, 0.0f, 0x1.15eabep-88f,
     0x1.102d14p-112f, 0x1.c89692p-108f, 0x1.1ddbdap-74f, 0.0f, 0x1.133792p-116f,
     0x1.282b3ep-81f, 0.0f, 0x1.f708f2p-36f, 0.0f, 0x1.a8e474p-20f, 0x1.241de4p-79f,
     0x1.cae278p-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ba96ecp-70f, 0x1.c597a8p-51f, 0.0f, 0x1.e6499p-34f,
     0x1.bc103ep-119f, 0.0f, 0x1.43b1aap-108f, 0x1.8617fcp-83f, 0.0f, 0x1.36c068p-61f,
     0x1.6254fp-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8847fap-101f, 0x1.7979eep-59f,
     0x1.2054cep-75f, 0x1.7324acp-80f, 0.0f, 0x1.059c5p-10f, 0x1.53038p-47f, 0.0f,
     0x1.2f710ap-12f, 0.0f, 0x1.74f56ep-123f, 0.0f, 0x1.199fccp-125f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.bf3082p-117f, 0x1.3af73p-60f, 0.0f, 0.0f, 0x1.b031bp-104f, 0.0f,
     0.0f, 0x1.e78eb4p-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a6583p-126f, 0.0f,
     0x1.ed5bp-102f, 0.0f, 0x1.52726p-56f, 0.0f, 0x1.78a2dp-66f, 0x1.9bcc28p-112f,
     0x1.cab33cp-81f, 0x1.3dbc78p-18f, 0.0f, 0x1.b7e63ep-54f, 0x1.51729cp-94f,
     0x1.67ecdp-77f, 0.0f, 0.0f, 0x1.eab49ap-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c84ab2p-125f, 0.0f, 0.0f, 0x1.f0dac6p-44f, 0x1.070d7ap-18f, 0x1.876584p-10f,
     0.0f, 0.0f, 0.0f, 0x1.bcf2d6p-2f, 0x1.df8f94p-113f, 0.0f, 0x1.0960c4p-114f,
     0x1.d118fap-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.07aa4cp-117f, 0x1.e8f664p-33f, 0.0f,
     0.0f, 0.0f, 0x1.bd5fd6p-42f, 0x1.685acep-111f, 0.0f, 0.0f, 0.0f,
     0x1.ad86fep-126f, 0x1.aec17ap-70f, 0.0f, 0.0f, 0.0f, 0x1.5d2c2ap-65f, 0.0f, 0.0f,
     0.0f, 0x1.3311aep-50f, 0.0f, 0x1.9d5d7ep-52f, 0x1.1e582cp-100f, 0.0f,
     0x1.452c72p-62f, 0x1.5275ecp-101f, 0.0f, 0x1.7632bp-60f, 0x1.dae4a4p-88f, 0.0f,
     0.0f, 0x1.43963ep-50f, 0x1.df88b8p-32f, 0x1.ec1918p-71f, 0x1.1a3614p-115f, 0.0f,
     0x1.6568dep-31f, 0.0f, 0x1.350b72p-66f, 0.0f, 0x1.fed092p-94f, 0x1.ac4908p-87f,
     0.0f, 0x1.2542cp-10f, 0.0f, 0.0f, 0.0f, 0x1.c3fe08p-116f, 0.0f, 0.0f, 0.0f,
     0x1.289d36p-89f, 0x1.79826p-66f, 0x1.ede2f6p-83f, 0x1.9f89d2p-35f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ea17ecp-20f, 0x1.b64b5ep-37f, 0.0f,
     0.0f, 0.0f, 0x1.c61c3cp-116f, 0x1.9e517cp-41f, 0x1.69d512p-47f, 0.0f,
     0x1.b82da4p-120f, 0x1.a665p-10f, 0x1.a52f1p-95f, 0.0f, 0x1.ef635p-98f, 0.0f,
     0.0f, 0.0f, 0x1.bff4aep-119f, 0x1.34107cp-46f, 0.0f, 0x1.9e4768p-100f, 0.0f,
     0x1.840e1ep-22f, 0x1.243938p-80f, 0.0f, 0.0f, 0x1.11c472p-85f, 0x1.1a03fp-97f,
     0x1.c49aa8p-107f, 0.0f, 0x1.1f7c06p-100f, 0x1.8f66b4p-52f, 0x1.56ceecp-50f, 0.0f,
     0.0f, 0x1.2e3a7p-83f, 0x1.39f61p-67f, 0.0f, 0x1.5580bep-16f, 0.0f, 0.0f,
     0x1.910f5ap-21f, 0.0f, 0x1.d6992ap-55f, 0.0f, 0.0f, 0.0f, 0x1.5633f4p-63f,
     0x1.e63c7cp-82f, 0.0f, 0.0f, 0x1.518d9p-53f, 0.0f, 0x1.52feap-39f,
     0x1.2178f4p-111f, 0.0f, 0x1.f45286p-92f, 0x1.5fddc6p-108f, 0x1.964ecep-75f, 0.0f,
     0x1.e0587cp-66f, 0x1.3266b6p-91f, 0x1.d36952p-119f, 0.0f, 0.0f, 0x1.c67b26p-87f,
     0x1.a2d8fp-26f, 0x1.104a32p-110f, 0x1.42c048p-14f, 0x1.eafaap-45f, 0.0f, 0.0f,
     0x1.84cc6ap-86f, 0.0f, 0x1.90a7b8p-33f, 0x1.a162d2p-73f, 0x1.f15122p-76f,
     0x1.862f6p-17f, 0x1.e82678p-17f, 0x1.54b49p-118f, 0x1.b4deccp-14f, 0.0f, 0.0f,
     0x1.f17dbep-51f, 0.0f, 0.0f, 0x1.3320fap-58f, 0x1.6984fp-19f, 0x1.131246p-109f,
     0x1.391e82p-57f, 0x1.93ba3ep-11f, 0.0f, 0.0f, 0x1.b119d2p-58f, 0.0f, 0.0f,
     0x1.67cd6p-52f, 0.0f, 0.0f, 0x1.61b142p-102f, 0.0f, 0.0f, 0x1.9f0c7ep-11f,
     0x1.0e9b9p-23f, 0x1.6b77bcp-96f, 0.0f, 0.0f, 0.0f, 0x1.38746ap-91f, 0.0f,
     0x1.435b4ep-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.209036p-2f, 0.0f,
     0x1.0603fp-75f, 0.0f, 0.0f, 0x1.bf6a6ep-99f, 0.0f, 0x1.7db7e6p-72f,
     0x1.37a4c2p-99f, 0x1.dd4974p-83f, 0x1.0fa0cp-34f, 0.0f, 0.0f, 0.0f,
     0x1.67e822p-13f, 0x1.719584p-96f, 0x1.c44592p-15f, 0x1.3c3512p-69f, 0.0f, 0.0f,
     0.0f, 0x1.749e8ap-124f, 0x1.6da396p-73f, 0.0f, 0x1.e0fde6p-58f, 0.0f,
     0x1.a36638p-108f, 0x1.c42a8cp-111f, 0.0f, 0x1.68abacp-98f, 0.0f,
     0x1.57453ap-116f, 0x1.d427a6p-60f, 0x1.7e0bf6p-99f, 0.0f, 0.0f, 0x1.1ff44cp-28f,
     0.0f, 0x1.30a8c8p-32f, 0x1.0aab1ap-45f, 0x1.a920cep-6f, 0.0f, 0x1.110d78p-117f,
     0.0f, 0x1.5c386p-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fad872p-104f, 0x1.188e0cp-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.61ceacp-17f, 0x1.a8efap-112f, 0.0f, 0x1.13f2ep-103f, 0.0f, 0x1.53555ap-4f,
     0x1.cd957p-73f, 0x1.b3f3bep-121f, 0x1.e1f23ap-26f, 0.0f, 0x1.d165ecp-121f,
     0x1.f6a18cp-117f, 0.0f, 0x1.3f6eaep-82f, 0x1.04368ap-119f, 0x1.85ee1ap-100f,
     0x1.83f6dcp-112f, 0x1.b8bc5ap-44f, 0x1.65d69ap-39f, 0x1.767074p-122f,
     0x1.10bbaep-32f, 0.0f, 0.0f, 0x1.59b54ap-11f, 0.0f, 0x1.b1e0bep-109f, 0.0f, 0.0f,
     0.0f, 0x1.7a92f8p-91f, 0x1.18ece8p-77f, 0.0f, 0x1.3a29b6p-13f, 0x1.b6f90cp-19f,
     0x1.b11d58p-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d5918p-107f, 0.0f, 0.0f,
     0x1.4dcf82p-1f, 0x1.c92cf4p-108f, 0x1.18f2aap-56f, 0.0f, 0.0f, 0x1.255868p-75f,
     0.0f, 0x1.7fb54ep-44f, 0x1.17de98p-49f, 0x1.fe52cp-32f, 0.0f, 0.0f, 0.0f,
     0x1.04f8eep-21f, 0x1.a4ddfp-13f, 0x1.44463ap-35f, 0.0f, 0x1.d4642ep-97f,
     0x1.951bfcp-111f, 0x1.ac309ap-101f, 0.0f, 0x1.779422p-34f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1p0f, 0x1.e360aep-126f, 0x1.e1321ap-55f, 0.0f, 0.0f, 0x1.386486p-123f,
     0.0f, 0.0f, 0.0f, 0x1.7f46ep-24f, 0x1.f8ffc8p-124f, 0x1.628ebcp-96f,
     0x1.e3643ap-102f, 0.0f, 0.0f, 0x1.1380e2p-1f, 0x1.e8dd26p-90f, 0.0f, 0.0f,
     0x1.0662acp-2f, 0.0f, 0x1.3764b8p-74f, 0.0f, 0x1.091af6p-32f, 0.0f, 0.0f,
     0x1.a969aep-49f, 0.0f, 0x1.ca32eap-119f, 0x1.a1e84ap-62f, 0x1.a40d2p-107f,
     0x1.6e119p-114f, 0.0f, 0x1.54381cp-124f, 0.0f, 0.0f, 0.0f, 0x1.90664p-108f, 0.0f,
     0x1.5c4d02p-98f, 0x1.d44a78p-40f, 0.0f, 0x1.3130b4p-121f, 0.0f, 0.0f,
     0x1.35a04ap-29f, 0x1.bca0e6p-40f, 0x1.961116p-60f, 0.0f, 0x1.ac217ap-117f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ced526p-124f, 0.0f, 0x1.78a39p-31f, 0x1.400476p-88f,
     0x1.0134ep-21f, 0x1.9243fap-89f, 0x1.411f9ep-64f, 0.0f, 0x1.94da1ap-73f, 0.0f,
     0.0f, 0x1.1951a6p-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9c2546p-106f,
     0x1.e3dd5cp-51f, 0.0f, 0x1.3148e4p-12f, 0x1.18926ep-54f, 0x1.e2729p-80f,
     0x1.1913acp-27f, 0x1.3e3e1p-27f, 0x1.70036p-71f, 0.0f, 0x1.afdb4p-89f,
     0x1.b7b898p-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ea189ap-101f,
     0x1.7e20d4p-41f, 0x1.c55106p-71f, 0.0f, 0x1.67b1e6p-35f, 0x1.37accep-18f, 0.0f,
     0x1.bab37p-75f, 0.0f, 0x1.6d4b0cp-72f, 0x1.0c3d3p-53f, 0x1.cba8eep-9f, 0.0f,
     0x1.21dcccp-102f, 0x1.7dafbep-111f, 0.0f, 0.0f, 0.0f, 0x1.4625f2p-112f,
     0x1.19826ep-18f, 0x1.1af5e2p-34f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8b524p-75f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c5bceap-83f, 0.0f, 0.0f, 0x1.bac9e4p-44f,
     0x1.774bdp-40f, 0x1.4da56ap-26f, 0.0f, 0.0f, 0x1.b89394p-6f, 0x1.cc24e8p-69f,
     0x1.f424d8p-24f, 0x1.e1d99p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.21d3dp-3f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.517b66p-72f, 0x1.e65fbcp-89f,
     0x1.6f02e2p-14f, 0.0f, 0x1.354ddp-24f, 0.0f, 0x1.5a33aep-71f, 0x1.caa26ap-11f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d5633ap-48f, 0x1.7b617p-1f, 0.0f,
     0x1.26f4e8p-52f, 0.0f, 0.0f, 0.0f, 0x1.da1d96p-71f, 0.0f, 0x1.016734p-49f, 0.0f,
     0x1.ca0606p-36f, 0.0f, 0.0f, 0x1.ec3c3cp-32f, 0.0f, 0.0f, 0x1.21781ep-75f, 0.0f,
     0x1.3b365cp-70f, 0x1.07d412p-39f, 0x1.852d32p-68f, 0.0f, 0x1.6cb98ap-69f,
     0x1.4b300cp-5f, 0.0f, 0.0f, 0x1.e8544cp-68f, 0x1.9a6a6p-66f, 0.0f, 0.0f,
     0x1.f6d32ap-66f, 0x1.c29b76p-58f, 0x1.eb121ap-91f, 0.0f, 0.0f, 0x1.efd2b2p-80f,
     0x1.e3b4e2p-102f, 0x1.6167p-73f, 0.0f, 0x1p0f, 0x1.c47078p-101f, 0.0f,
     0x1.36f07ap-15f, 0.0f, 0.0f, 0x1.26d5cep-50f, 0.0f, 0x1.658d12p-39f,
     0x1.d01e62p-64f, 0.0f, 0x1.04617ep-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.95c158p-25f, 0.0f, 0x1.4e3706p-48f, 0.0f, 0x1.1b5fe2p-18f, 0x1.57ddcap-108f,
     0x1.08cbd4p-27f, 0.0f, 0.0f, 0x1.502b88p-55f, 0.0f, 0x1.69e016p-13f,
     0x1.305f7p-87f, 0.0f, 0.0f, 0x1.5bab36p-25f, 0.0f, 0.0f, 0x1.2643bcp-34f, 0.0f,
     0x1.5b7dccp-1f, 0.0f, 0x1.723fcep-47f, 0x1.8c6e36p-53f, 0x1.2aa9c6p-37f, 0.0f,
     0x1.5e9d94p-106f, 0.0f, 0x1.e08614p-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e7c306p-84f, 0x1.4b91f8p-70f, 0x1.742386p-29f, 0x1.e695b6p-56f, 0.0f,
     0x1.1bc324p-32f, 0x1.1a484ap-41f, 0x1.20b8a6p-77f, 0.0f, 0.0f, 0x1.de778cp-98f,
     0x1.17e87ap-69f, 0x1.87dea4p-95f, 0.0f, 0x1.4a680ep-26f, 0.0f, 0.0f,
     0x1.4db68p-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.30e034p-68f, 0x1.e7eb4cp-52f,
     0x1.fafcb4p-118f, 0x1.4125a6p-43f, 0x1.dc9a18p-37f, 0x1.41e5fap-47f,
     0x1.8c7b42p-90f, 0.0f, 0x1.f94062p-123f, 0.0f, 0x1.20608p-1f, 0x1.f346dcp-68f,
     0x1.e06feep-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c9506p-124f, 0x1.d08a1ep-4f,
     0x1.91b44ep-86f, 0.0f, 0x1.d8aaa2p-40f, 0x1.0d49d6p-14f, 0.0f, 0x1.1bd076p-38f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ac334cp-101f, 0.0f, 0x1.0ca4c4p-24f, 0x1.5bed6p-1f,
     0.0f, 0.0f, 0.0f, 0x1.1115ccp-119f, 0x1.892e9p-49f, 0.0f, 0.0f, 0x1.69475ep-107f,
     0.0f, 0.0f, 0x1.d6488ap-6f, 0.0f, 0x1.e7f2p-63f, 0x1.c157cap-68f,
     0x1.8379e2p-22f, 0x1.87e5eap-18f, 0.0f, 0x1.75d38p-70f, 0x1.8ef556p-98f,
     0x1.ad3128p-61f, 0x1.ca873ep-102f, 0.0f, 0x1.8e4734p-6f, 0x1.8b192cp-17f,
     0x1.f0acccp-120f, 0x1.9b0092p-35f, 0.0f, 0x1.f33a9p-4f, 0.0f, 0x1.842d9p-8f,
     0.0f, 0x1.cc1644p-82f, 0x1.3386a6p-22f, 0x1.95c7eap-122f, 0x1.73f6bap-79f, 0.0f,
     0x1.591d42p-71f, 0x1.770ca8p-12f, 0.0f, 0x1.62d4a2p-81f, 0.0f, 0.0f, 0.0f,
     0x1.a92a6ap-97f, 0x1.92e2fcp-101f, 0.0f, 0x1.526b48p-125f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.46bc9cp-51f, 0.0f, 0.0f, 0.0f, 0x1.1f49ecp-73f, 0.0f, 0.0f, 0.0f,
     0x1.7b8566p-14f, 0x1.b63906p-102f, 0.0f, 0x1.a005fp-95f, 0.0f, 0.0f,
     0x1.443f76p-40f, 0x1.51c7aep-95f, 0x1.155d7p-8f, 0.0f, 0x1.fcaca6p-43f, 0.0f,
     0x1.a6e94p-108f, 0.0f, 0x1.b7f2a2p-57f, 0x1.9fcdc2p-51f, 0.0f, 0.0f,
     0x1.050128p-107f, 0.0f, 0x1.705a42p-124f, 0x1.39eda2p-60f, 0.0f, 0x1.0e53e4p-92f,
     0.0f, 0.0f, 0.0f, 0x1.c5c454p-10f, 0x1.f113c8p-126f, 0.0f, 0.0f, 0x1.325412p-47f,
     0.0f, 0x1.f99e02p-4f, 0.0f, 0.0f, 0.0f, 0x1.93daf6p-118f, 0.0f, 0x1.72bb3cp-102f,
     0.0f, 0.0f, 0x1.94c9e4p-41f, 0.0f, 0x1.2d0bf4p-47f, 0.0f, 0x1.a20534p-107f, 0.0f,
     0.0f, 0.0f, 0.0f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    float global_bench_acc;
    int64_t timer;
    int64_t tmp;
    int32_t j;
    int64_t tmp1;
    int64_t tmp2;
    double id_tmp;
    double cpe_measure;
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = 0.0f;
    tmp = __cos_counter_num(0);
    timer = tmp;
    j = INT32_C(0);

    for (;(j < INT32_C(10000));){
        float bench_acc;
        int32_t i;
        float tmp0;
        int32_t tmp1;

        i = INT32_C(0);
        bench_acc = 0.0f;

        for (;(i < INT32_C(1001));){
            float tmp0;
            float tmp1;
            float tmp2;
            int32_t tmp3;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_finz_exp10f1_u35purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = bench_acc + tmp1;
            bench_acc = tmp2;
            tmp3 = i + INT32_C(1);
            i = tmp3;
        }
        tmp0 = global_bench_acc + bench_acc;
        global_bench_acc = tmp0;
        tmp1 = j + INT32_C(1);
        j = tmp1;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_finz_exp10f1_u35purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_exp10f1_u35purecfma bench acc %a\n", global_bench_acc);
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
