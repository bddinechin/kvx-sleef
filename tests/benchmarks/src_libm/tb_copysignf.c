/**
 * generated using metalibm 1.1
 * sha1 git: b'"3425a70973ff93e510359b9b2fa45754ebf43279"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_copysignf.c --function copysignf --arity 2 --headers \
 *     math.h,ml_support_lib.h --input-formats binary32,binary32 --bench \
 *     --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <math.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile float external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0.0f, 0x1.0579a2p-78f, 0.0f, 0x1.9ba76ap-73f, 0.0f, 0x1.caebfep-38f, 0.0f,
     0x1.77ebbp-111f, 0.0f, 0.0f, 0.0f, 0x1.073368p-114f, 0x1.9a41dap-28f, 0.0f,
     0x1.9eb064p-69f, 0x1.f6f3cp-29f, 0x1.f50d66p-62f, 0x1.c6bac2p-126f, 0.0f,
     0x1.eec054p-33f, 0x1.521b3p-8f, 0.0f, 0.0f, 0x1.dffffcp-75f, 0.0f,
     0x1.07f65p-65f, 0.0f, 0x1.3519ap-71f, 0.0f, 0.0f, 0x1.b5d91cp-4f, 0.0f, 0.0f,
     0.0f, 0x1.98a88cp-90f, 0x1.2062f4p-113f, 0.0f, 0x1.8b73d6p-61f, 0.0f, 0.0f,
     0x1.040ff4p-36f, 0x1.2462dep-13f, 0.0f, 0.0f, 0x1.7b2b34p-101f, 0.0f,
     0x1.86a03ap-77f, 0.0f, 0x1.d88ccp-5f, 0x1.8633fep-62f, 0.0f, 0x1.2a0d3p-70f,
     0.0f, 0.0f, 0.0f, 0x1.984be4p-99f, 0.0f, 0.0f, 0.0f, 0x1.c86fdap-54f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a0d1c2p-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.804bf2p-20f, 0.0f, 0.0f, 0x1.4b6294p-36f, 0.0f, 0x1.cbe2a4p-83f,
     0x1.779b3ap-61f, 0.0f, 0.0f, 0x1.ed8e3cp-55f, 0x1.f20428p-44f, 0.0f,
     0x1.c151ep-69f, 0x1.efc27ep-44f, 0x1.9a3766p-125f, 0.0f, 0.0f, 0x1.44bea2p-105f,
     0.0f, 0x1.9feecp-61f, 0x1.07af62p-78f, 0x1.968fa4p-96f, 0x1.023e7p-125f,
     0x1.f4dfd6p-5f, 0x1.641328p-94f, 0.0f, 0.0f, 0.0f, 0x1.cdf39cp-103f,
     0x1.62667ep-126f, 0.0f, 0x1.163c4ap-76f, 0x1.d523cap-72f, 0x1.d6a4dep-38f,
     0x1.891af4p-9f, 0x1.01daa2p-24f, 0.0f, 0x1.8d7c6p-106f, 0.0f, 0x1.bfb57p-55f,
     0x1.cb17dep-66f, 0.0f, 0x1.afbbf4p-18f, 0x1.fc2ec2p-108f, 0x1.160314p-73f,
     0x1.01489ap-69f, 0x1.2bd4eap-88f, 0x1.40f3ecp-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d5797p-18f, 0.0f, 0x1.29ad54p-50f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f985e6p-30f, 0.0f, 0x1.8a63bap-1f, 0.0f, 0x1.1515eap-116f,
     0x1.556c06p-27f, 0.0f, 0x1.cd652cp-117f, 0.0f, 0.0f, 0x1.5c77cep-16f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f5e814p-42f, 0.0f, 0x1.6d4dd8p-42f, 0.0f, 0.0f, 0x1.82fd2ap-37f,
     0.0f, 0x1.6df84cp-100f, 0x1.873244p-104f, 0x1.0fc22p-36f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4d4b7cp-32f, 0x1.c499c6p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1abf06p-115f, 0.0f,
     0.0f, 0.0f, 0x1.622212p-92f, 0x1.0f0d3cp-110f, 0.0f, 0.0f, 0x1.09ce7p-52f,
     0x1.2f4b22p-99f, 0.0f, 0x1.cfd066p-40f, 0.0f, 0x1.340a2cp-111f, 0.0f, 0.0f,
     0x1.541f16p-111f, 0x1.3d7302p-3f, 0.0f, 0x1.34de52p-64f, 0x1.de2a1ep-18f,
     0x1.567fc4p-20f, 0.0f, 0x1.91a6f4p-22f, 0x1.7c97fp-118f, 0.0f, 0x1.6e94b8p-27f,
     0.0f, 0x1.f006cap-90f, 0x1.136ebcp-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.24c602p-27f, 0.0f, 0x1.da593cp-59f, 0.0f, 0x1.152b2ap-79f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b2efd6p-115f, 0x1.ead2eap-78f, 0x1.b8390ap-76f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.923b62p-72f, 0.0f, 0x1.39c86ap-96f, 0x1.a7b5eap-76f, 0x1.754036p-77f,
     0.0f, 0x1.d12b3p-43f, 0.0f, 0x1.22e1c6p-113f, 0x1.4efa82p-72f, 0x1.7432fep-103f,
     0.0f, 0x1.79a8f2p-15f, 0x1.79f2d2p-35f, 0.0f, 0x1.77ad56p-7f, 0x1.aff0dep-89f,
     0.0f, 0x1.fb7854p-114f, 0x1.606832p-103f, 0.0f, 0x1.8efc9ap-23f, 0x1.828p-101f,
     0x1.99ed9ep-99f, 0x1.615d62p-62f, 0.0f, 0x1.4ed1eap-58f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1ceb04p-36f, 0.0f, 0x1.6d08ap-107f, 0.0f, 0x1.9c0f88p-30f, 0x1.24594p-89f,
     0x1.db7ff4p-41f, 0x1.a9339ep-45f, 0.0f, 0x1.44e95p-59f, 0.0f, 0x1.6196e6p-44f,
     0x1.7ad0c4p-93f, 0.0f, 0x1.ef4a36p-50f, 0x1.3c1594p-52f, 0x1.962d8ep-68f,
     0x1.b8e46cp-49f, 0.0f, 0x1.c368dep-5f, 0.0f, 0.0f, 0.0f, 0x1.54014ep-2f,
     0x1.d24382p-71f, 0.0f, 0x1.5bb4c6p-64f, 0x1.9301fp-104f, 0x1.e810d6p-126f,
     0x1.177246p-63f, 0.0f, 0x1.98645p-122f, 0.0f, 0.0f, 0x1.d80076p-60f, 0.0f,
     0x1.8bb402p-116f, 0x1.700c0ep-60f, 0.0f, 0x1.60089p-45f, 0x1.426752p-38f, 0.0f,
     0.0f, 0.0f, 0x1.133a6ep-48f, 0.0f, 0.0f, 0x1.97f76ap-86f, 0x1.567932p-96f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d0065p-71f, 0.0f, 0x1.226fbap-62f, 0x1.6c3134p-92f, 0.0f,
     0x1.d4925ep-29f, 0.0f, 0.0f, 0.0f, 0x1.40e22ep-118f, 0.0f, 0x1.7597aap-40f,
     0x1.aa4aaep-28f, 0x1.88b266p-103f, 0.0f, 0x1.730d1cp-71f, 0.0f, 0x1.42d8eep-101f,
     0x1.c487f6p-122f, 0.0f, 0.0f, 0x1.07c272p-60f, 0x1.c2400ap-16f, 0x1.8a711ep-47f,
     0.0f, 0x1.63d122p-13f, 0x1.96d9a6p-112f, 0x1.6ca692p-12f, 0.0f, 0x1.c305eap-25f,
     0x1.1efc7cp-30f, 0.0f, 0x1.f1a948p-42f, 0.0f, 0x1.d21906p-17f, 0x1.c7b3dep-95f,
     0x1.e9423ep-25f, 0x1.919cbap-72f, 0x1.137dc4p-38f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7f01c8p-74f, 0x1.923342p-120f, 0.0f, 0.0f, 0x1.43bb36p-7f, 0x1.ce0ffcp-62f,
     0x1.334956p-112f, 0x1.fe1a0cp-100f, 0.0f, 0x1.b3fe74p-10f, 0.0f,
     0x1.b6b0b6p-116f, 0x1.8a1302p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.acdc4p-3f,
     0x1.03f9p-101f, 0x1.683eb6p-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.335424p-31f,
     0x1.e0c918p-9f, 0x1.4d5668p-23f, 0x1.76622cp-109f, 0x1.5d15d6p-39f, 0.0f, 0.0f,
     0x1.9851cp-75f, 0.0f, 0.0f, 0.0f, 0x1.2779fap-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a58354p-41f, 0x1.388e74p-43f, 0.0f, 0x1.ce3278p-70f, 0x1.73b252p-1f,
     0.0f, 0x1.5f7298p-77f, 0x1.61e4f4p-50f, 0x1.18e596p-21f, 0x1.c610d4p-89f, 0.0f,
     0x1.d3b434p-110f, 0.0f, 0x1.c04744p-39f, 0.0f, 0x1.42f372p-30f, 0x1.2a1208p-56f,
     0x1.ae3d2p-30f, 0x1.9b90ep-39f, 0x1.7b75ecp-28f, 0x1.e8afbep-26f,
     0x1.985b86p-62f, 0x1.1d11bp-106f, 0x1.278a1ep-94f, 0x1.6473d2p-56f,
     0x1.7f346ap-21f, 0x1.9ffd9ap-26f, 0.0f, 0x1.b637a4p-66f, 0x1.7eb4a6p-97f, 0.0f,
     0x1.af855ap-17f, 0.0f, 0.0f, 0x1.ae2a34p-29f, 0x1.448d38p-79f, 0x1.15bf7ep-67f,
     0x1.eb4054p-6f, 0x1.f76944p-62f, 0x1.59ca0ep-86f, 0.0f, 0.0f, 0x1.cc85c2p-23f,
     0x1.87d198p-87f, 0x1.cc5ddp-53f, 0.0f, 0x1.e841e6p-119f, 0.0f, 0.0f, 0.0f,
     0x1.6380f6p-59f, 0x1.049194p-96f, 0x1.425efcp-78f, 0.0f, 0.0f, 0.0f,
     0x1.30ff2p-19f, 0.0f, 0x1.479ee4p-126f, 0x1.ef96b4p-7f, 0x1.709cf6p-125f,
     0x1.8452a2p-92f, 0.0f, 0x1.2c3faap-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2ce866p-4f,
     0.0f, 0.0f, 0x1.001a06p-99f, 0.0f, 0.0f, 0x1.afadfap-2f, 0x1.dec1dep-16f, 0.0f,
     0.0f, 0.0f, 0x1.0bf3bcp-107f, 0.0f, 0x1.d16da4p-106f, 0x1.5a0d48p-23f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9db2bp-10f, 0.0f, 0x1.b7f072p-72f, 0x1.2c6ee4p-74f, 0.0f,
     0x1.288614p-58f, 0x1.d28decp-94f, 0x1.959ffcp-63f, 0.0f, 0x1.f2feb2p-38f,
     0x1.28f7e4p-102f, 0x1.dc2ddep-66f, 0x1.7f9432p-82f, 0x1.1334f6p-85f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.2a733p-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.86ce84p-29f,
     0x1.6becbep-21f, 0.0f, 0.0f, 0x1.154facp-57f, 0x1.6afb72p-37f, 0x1.34dcc8p-30f,
     0x1.d777b2p-21f, 0x1.346bb6p-54f, 0.0f, 0x1.8ed3b6p-122f, 0.0f, 0.0f,
     0x1.75885ep-1f, 0x1.ecb686p-10f, 0x1.a637a8p-63f, 0.0f, 0.0f, 0x1.02f1eap-3f,
     0x1.5d83d8p-89f, 0x1.cf2ca6p-9f, 0.0f, 0x1.95883ep-119f, 0.0f, 0x1.36f0aep-120f,
     0x1.69d704p-54f, 0x1.603422p-46f, 0.0f, 0.0f, 0x1.37df3cp-23f, 0x1.0d0b6ep-60f,
     0.0f, 0.0f, 0x1.aa223p-96f, 0.0f, 0x1.5385bap-18f, 0x1.c0fd1ap-31f, 0.0f, 0.0f,
     0x1.184438p-5f, 0.0f, 0x1.1d4ba2p-45f, 0.0f, 0.0f, 0.0f, 0x1.26439p-13f,
     0x1.5e87fap-8f, 0.0f, 0x1.f0e24p-17f, 0.0f, 0.0f, 0x1.16ea5ap-52f,
     0x1.e1e956p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c7d41ep-82f, 0x1.8616aap-46f, 0.0f,
     0x1.d1623ap-72f, 0x1.cee72cp-58f, 0x1.8b3768p-28f, 0.0f, 0x1.e8b2fep-60f,
     0x1.765838p-7f, 0x1.298d78p-55f, 0.0f, 0x1.c13b36p-66f, 0.0f, 0.0f, 0.0f,
     0x1.c931cp-12f, 0.0f, 0x1.0d6524p-67f, 0x1.9162e4p-51f, 0x1.b029a2p-88f, 0.0f,
     0x1.521fb6p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f789fp-7f, 0.0f,
     0x1.0c93a4p-87f, 0x1.80e0a8p-61f, 0.0f, 0.0f, 0x1.9492fp-82f, 0.0f,
     0x1.acfb6cp-92f, 0x1.997e38p-59f, 0.0f, 0.0f, 0.0f, 0x1.185922p-110f,
     0x1.1fa8a4p-22f, 0.0f, 0x1.44fed8p-85f, 0x1.be7fdp-45f, 0x1.266b66p-13f, 0.0f,
     0x1.6d7ec2p-85f, 0.0f, 0.0f, 0x1.60317ep-68f, 0x1.4d8524p-60f, 0x1.688564p-20f,
     0x1.66e454p-40f, 0.0f, 0x1.f4d1f2p-83f, 0x1.a0fd78p-87f, 0x1.ad60b8p-88f, 0.0f,
     0x1.0449b6p-96f, 0x1.799328p-91f, 0.0f, 0.0f, 0x1.37a678p-18f, 0.0f,
     0x1.ef688cp-55f, 0x1.7d7fbcp-30f, 0x1.3d072cp-10f, 0x1.d929f8p-105f,
     0x1.0a0ad6p-118f, 0x1.43f904p-44f, 0x1.fd374cp-34f, 0x1.59c838p-88f,
     0x1.fbbf4ep-61f, 0x1.39d9c2p-75f, 0x1.91061ap-50f, 0x1.d58bf4p-3f, 0.0f, 0.0f,
     0.0f, 0x1.b0336ep-107f, 0.0f, 0x1.b95e1ap-31f, 0.0f, 0x1.a0b1d2p-104f, 0.0f,
     0x1.384ad8p-6f, 0x1.d900a8p-78f, 0.0f, 0.0f, 0x1.2506b2p-11f, 0.0f,
     0x1.071736p-38f, 0x1.61ee26p-6f, 0x1.531382p-92f, 0.0f, 0.0f, 0x1.e36578p-33f,
     0.0f, 0x1.9c1678p-33f, 0.0f, 0.0f, 0.0f, 0x1.2fb22ep-13f, 0x1.51d5ep-18f, 0.0f,
     0.0f, 0x1.a25e08p-8f, 0.0f, 0x1.60c062p-22f, 0.0f, 0.0f, 0.0f, 0x1.3b0b44p-106f,
     0x1.c264d8p-46f, 0.0f, 0.0f, 0x1.81d3eep-9f, 0x1.51074p-83f, 0x1.3295c2p-75f,
     0.0f, 0.0f, 0x1.9f1e9cp-17f, 0.0f, 0.0f, 0.0f, 0x1.76d5acp-117f, 0.0f,
     0x1.2367e8p-33f, 0x1.2494e2p-65f, 0.0f, 0.0f, 0x1.5796bcp-94f, 0x1.06eb46p-126f,
     0.0f, 0.0f, 0x1.23aec4p-32f, 0x1.892704p-57f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.059c42p-48f, 0x1.addfaep-121f, 0.0f, 0x1.444448p-86f, 0x1.fd8a3cp-88f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.df21f4p-114f, 0x1.998a14p-26f,
     0x1.1dc70ap-108f, 0.0f, 0x1.2ed254p-59f, 0x1.b5fe6cp-47f, 0.0f, 0x1.1bc028p-81f,
     0x1.d9bd0cp-112f, 0.0f, 0x1.491758p-55f, 0.0f, 0x1.48a0fap-11f, 0x1.dc7874p-27f,
     0x1.7033a4p-7f, 0.0f, 0x1.39d9c6p-22f, 0.0f, 0.0f, 0x1.674e24p-49f,
     0x1.4517p-17f, 0x1.bed62ep-70f, 0x1.4e86c2p-39f, 0.0f, 0x1.113c3cp-103f, 0.0f,
     0x1.bc78acp-36f, 0.0f, 0x1.6ca9bep-100f, 0.0f, 0x1.61c5bp-19f, 0x1.6a2e0ap-85f,
     0x1.268c9p-69f, 0.0f, 0x1.7a2cd2p-26f, 0x1.30b708p-107f, 0.0f, 0x1.a3cefep-118f,
     0.0f, 0x1.4c27ep-81f, 0x1.ff0ea6p-82f, 0.0f, 0.0f, 0.0f, 0x1.0433ecp-20f,
     0x1.903f9ep-96f, 0.0f, 0x1.8daf7cp-28f, 0x1.b656cep-36f, 0x1.8773fep-63f,
     0x1.cd559ap-82f, 0x1.eb0c62p-36f, 0x1.09e956p-91f, 0.0f, 0x1.6ea69ep-72f, 0.0f,
     0.0f, 0.0f, 0x1.89cf14p-18f, 0x1.28a9dp-38f, 0.0f, 0x1.52ebfep-120f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.51b23p-74f, 0x1.0195p-41f,
     0x1.9a2f34p-19f, 0.0f, 0x1.fd68ap-59f, 0.0f, 0.0f, 0x1.686c12p-93f, 0.0f,
     0x1.88d998p-70f, 0x1.e8f98cp-113f, 0.0f, 0x1.a3e6f6p-45f, 0.0f, 0.0f, 0.0f,
     0x1.49760ep-33f, 0x1.674938p-96f, 0x1.2d3ce4p-45f, 0.0f, 0x1.9003dcp-69f, 0.0f,
     0.0f, 0.0f, 0x1.85dccep-69f, 0.0f, 0x1.64d19ap-76f, 0x1.34f712p-14f,
     0x1.58f6cap-54f, 0x1.f277eap-114f, 0.0f, 0x1.f5e3d4p-65f, 0.0f, 0.0f,
     0x1.430784p-112f, 0.0f, 0x1.b8478ap-30f, 0.0f, 0.0f, 0x1.d88458p-76f,
     0x1.bf8e42p-59f, 0x1.a7f9a4p-35f, 0x1.fa7fdcp-19f, 0.0f, 0.0f, 0.0f,
     0x1.1caba4p-37f, 0x1.6c2e48p-31f, 0x1.fddbdep-89f, 0.0f, 0.0f, 0x1.bbca16p-30f,
     0x1.6248dap-103f, 0x1.fdfecp-106f, 0.0f, 0x1.c45ae6p-13f, 0x1.3b1bf4p-119f,
     0x1.d6f57ep-39f, 0x1.17508p-25f, 0x1.cc80f2p-71f, 0.0f, 0x1.4b540ap-3f,
     0x1.9b5048p-16f, 0.0f, 0.0f, 0.0f, 0x1.5d8a1cp-68f, 0x1.ec002cp-65f, 0.0f,
     0x1.347b4ep-30f, 0.0f, 0x1.d6b5b4p-97f, 0x1.4ba22cp-63f, 0.0f, 0x1.a031aap-58f,
     0.0f, 0x1.3855d6p-25f, 0.0f, 0.0f, 0x1.4906cp-65f, 0.0f, 0x1.213284p-14f, 0.0f,
     0x1.563d94p-88f, 0x1.f3376cp-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.02681p-83f, 0.0f,
     0.0f, 0.0f, 0x1.c164d8p-37f, 0.0f, 0x1.2f57b8p-31f, 0x1.43b70ep-86f,
     0x1.e2a7d6p-63f, 0x1.62142cp-27f, 0x1.6d2d42p-75f, 0.0f, 0x1.39ce86p-69f, 0.0f,
     0x1.feeef6p-3f, 0x1.a63b76p-85f, 0x1.54ca78p-121f, 0x1.d56b0cp-81f, 0.0f, 0.0f,
     0.0f, 0x1.82ec34p-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.aeaa5p-47f,
     0x1.643eeap-73f, 0x1.5520acp-126f, 0.0f, 0x1.3a6ba4p-8f, 0.0f, 0x1.e0fbd6p-11f,
     0x1.768566p-33f, 0x1.9815bep-49f, 0x1.c29344p-45f, 0x1.ff9a58p-8f, 0.0f, 0.0f,
     0x1.b1c09ep-80f, 0.0f, 0x1.a9d56ep-34f, 0.0f, 0x1.16e252p-3f, 0x1.42c894p-107f,
     0x1.9b18aep-115f, 0.0f, 0.0f, 0x1.d2d328p-91f, 0.0f, 0.0f, 0x1.b254aep-33f,
     0x1.0378a4p-126f, 0.0f, 0x1.a903aep-2f, 0.0f, 0x1.811a6cp-34f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e15e5ep-126f, 0x1.13155p-79f, 0.0f, 0x1.7e1b5cp-33f, 0.0f, 0.0f,
     0x1.2bd028p-76f, 0x1.5621bep-78f, 0.0f, 0x1.6918dp-84f, 0.0f, 0.0f, 0.0f,
     0x1.56209p-98f, 0.0f, 0.0f, 0x1.240eb6p-106f, 0x1.c3b4ap-22f, 0.0f, 0.0f, 0.0f,
     0x1.3e6904p-125f, 0x1.2f0e78p-118f, 0.0f, 0.0f, 0.0f, 0x1.173d76p-100f,
     0x1.d722bcp-97f, 0x1.1de6a6p-123f, 0x1.5b9b42p-36f, 0x1.6b3226p-2f,
     0x1.8f427ep-48f, 0x1.99dee6p-99f, 0.0f, 0.0f, 0x1.659586p-125f, 0x1.a023cep-3f,
     0x1.38e474p-64f, 0x1.66a294p-79f, 0.0f, 0.0f, 0x1.d55044p-63f, 0x1.525b94p-71f,
     0.0f, 0.0f, 0x1.5bfcfep-107f, 0x1.9ff63ap-7f, 0.0f, 0x1.b6d02ap-51f, 0.0f,
     0x1.5582d8p-1f, 0.0f, 0x1.0fb79ap-48f, 0.0f, 0.0f, 0x1.39c63ep-90f, 0.0f,
     0x1.23cbc4p-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6381aep-9f, 0x1.fb8c96p-53f,
     0x1.4631eep-86f
};
static const float external_bench_wrapper_input_table_arg1[1001]  = {
     0.0f, 0.0f, 0.0f, 0x1.ded06p-106f, 0x1.101d16p-71f, 0.0f, 0.0f, 0.0f,
     0x1.0292b6p-34f, 0.0f, 0x1.6f1dd6p-93f, 0.0f, 0x1.91451ep-78f, 0x1.07078cp-78f,
     0x1.a87c9ep-72f, 0x1.575f5p-40f, 0.0f, 0.0f, 0x1.82b456p-104f, 0x1.a9eaep-49f,
     0x1.c8bfa6p-10f, 0x1.3213cap-107f, 0x1.8e6f1ep-76f, 0.0f, 0.0f, 0.0f,
     0x1.26b3cp-31f, 0x1.024cfp-53f, 0.0f, 0.0f, 0x1.17fa2ep-76f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4596e6p-67f, 0x1.36368ep-60f, 0x1.b75094p-123f, 0.0f,
     0x1.3f83cap-11f, 0.0f, 0x1.42e414p-85f, 0.0f, 0x1.dad8d6p-115f, 0.0f, 0.0f, 0.0f,
     0x1.2aa6bcp-79f, 0x1.8881e4p-43f, 0x1.c2c74ap-88f, 0x1.eccd9cp-51f,
     0x1.9edb6cp-111f, 0x1.4f055p-29f, 0x1.12ea8ap-25f, 0x1.62047ep-62f,
     0x1.2560dep-83f, 0x1.98bdaep-120f, 0.0f, 0x1.214156p-38f, 0.0f, 0.0f, 0.0f,
     0x1.8fd286p-62f, 0x1.61cc44p-117f, 0x1.f7d4a2p-96f, 0x1.41182cp-114f, 0.0f, 0.0f,
     0.0f, 0x1.1c9904p-84f, 0x1.04cebep-65f, 0.0f, 0x1.211dfp-41f, 0.0f,
     0x1.3618cep-16f, 0.0f, 0.0f, 0.0f, 0x1.7b8a64p-80f, 0.0f, 0x1.8e24a4p-116f, 0.0f,
     0x1.02d3cep-112f, 0x1.4d3618p-15f, 0.0f, 0x1.de5f62p-28f, 0x1.22a3eap-91f,
     0x1.aafc14p-76f, 0.0f, 0x1.779fdap-24f, 0.0f, 0x1.62c718p-63f, 0.0f, 0.0f, 0.0f,
     0x1.e3ae04p-59f, 0x1.1dbfc8p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.390bc8p-28f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.24571cp-79f, 0x1.a14f64p-62f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.68cfaap-22f, 0x1.2e826ep-57f, 0x1.0d16aap-110f, 0.0f, 0x1.204e48p-60f,
     0x1.d00c9cp-19f, 0x1.222158p-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.13b1aap-16f,
     0x1.318dc4p-75f, 0.0f, 0x1.dbd7dp-40f, 0x1.88847p-126f, 0x1.ef2378p-73f, 0.0f,
     0x1.b3365ap-19f, 0.0f, 0.0f, 0x1.9a76c4p-58f, 0.0f, 0x1.dda6e8p-124f,
     0x1.bf2b9p-120f, 0x1.c946f2p-8f, 0.0f, 0x1.507d5cp-35f, 0.0f, 0x1.12e0c2p-116f,
     0.0f, 0x1.421932p-77f, 0.0f, 0.0f, 0x1.92b5b8p-92f, 0x1.7e47dcp-74f,
     0x1.dfc9fcp-48f, 0.0f, 0.0f, 0x1.7a9fcep-82f, 0.0f, 0.0f, 0.0f, 0x1.31a574p-2f,
     0x1.0a47c2p-4f, 0.0f, 0.0f, 0.0f, 0x1.c8644cp-11f, 0x1.87287ap-38f, 0.0f, 0.0f,
     0x1.93910ep-122f, 0.0f, 0.0f, 0.0f, 0x1.02651cp-82f, 0x1.f62566p-16f, 0.0f,
     0x1.291878p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4c8c8ep-4f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.892ac2p-44f, 0.0f, 0.0f, 0x1.2c273ep-28f, 0x1.e6d0a6p-45f,
     0x1.3830a8p-17f, 0x1.9233cap-40f, 0x1.142a4p-80f, 0x1.f58146p-60f, 0.0f, 0.0f,
     0x1.db5cdep-89f, 0x1.e51454p-67f, 0.0f, 0x1.e617e2p-60f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b58b64p-105f, 0.0f, 0x1.baafc6p-104f, 0x1.ebac4ap-1f, 0x1.fb7e74p-26f,
     0x1.85fae6p-95f, 0.0f, 0x1.52064ep-5f, 0x1.dc9ce4p-18f, 0.0f, 0x1.973a38p-81f,
     0.0f, 0.0f, 0x1.9e3726p-99f, 0.0f, 0.0f, 0x1.47cb1p-113f, 0.0f, 0.0f, 0.0f,
     0x1.89cdc6p-87f, 0x1.7ddbc2p-77f, 0x1.1c82dp-115f, 0.0f, 0x1.ba57f2p-73f, 0.0f,
     0x1.52eb8cp-30f, 0.0f, 0x1.4bc672p-7f, 0.0f, 0x1.0fb12ep-50f, 0x1.b7b89ap-113f,
     0.0f, 0x1.5b4a5ap-51f, 0x1.2b6202p-122f, 0x1.e21472p-5f, 0x1.b874d4p-60f,
     0x1.2dad8ep-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4c663ep-56f, 0.0f,
     0x1.22b182p-126f, 0x1.15a046p-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.790748p-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d79cbcp-3f,
     0x1.2f4dd4p-71f, 0.0f, 0.0f, 0x1.716704p-97f, 0x1.c6b45ep-94f, 0.0f, 0.0f, 0.0f,
     0x1.c4b566p-78f, 0x1.34b9d4p-83f, 0.0f, 0x1.1ebc5ep-115f, 0x1.c6581cp-78f, 0.0f,
     0.0f, 0.0f, 0x1.f8c6eap-29f, 0.0f, 0x1.34c0bap-104f, 0x1.424d8ap-54f,
     0x1.d8c302p-122f, 0.0f, 0x1.19fe88p-7f, 0x1.5c18b2p-104f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.24f49cp-98f, 0.0f, 0.0f, 0x1.ea121p-96f, 0.0f, 0x1.aef402p-82f, 0.0f, 0.0f,
     0.0f, 0x1.3248c2p-107f, 0x1.5294aep-1f, 0.0f, 0x1.4d648ap-80f, 0.0f, 0.0f,
     0x1.491d3ap-116f, 0.0f, 0.0f, 0.0f, 0x1.a7810ap-15f, 0x1.ef64d6p-67f,
     0x1.d6efd4p-73f, 0x1.9ee9f8p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.beedfap-112f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.0f1edap-88f, 0.0f, 0.0f, 0x1.a0a18ep-100f,
     0x1.6d7cf8p-113f, 0.0f, 0.0f, 0x1.1e242p-124f, 0x1.6f2946p-115f, 0x1.03d71ep-27f,
     0x1.2a2c72p-13f, 0.0f, 0x1.ae3674p-94f, 0x1.b10078p-59f, 0.0f, 0.0f, 0.0f,
     0x1.355916p-3f, 0.0f, 0x1.b81afep-87f, 0x1.335076p-27f, 0.0f, 0.0f,
     0x1.99090ep-3f, 0x1.4947bcp-47f, 0x1.7143d8p-58f, 0x1.5d2c82p-20f,
     0x1.0f513cp-14f, 0.0f, 0.0f, 0.0f, 0x1.5b82ecp-68f, 0.0f, 0x1.c5edcap-63f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.efd7eap-38f, 0x1.52ec0cp-75f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.66b1b2p-59f, 0x1.3c61ep-84f, 0.0f, 0x1.ba5894p-59f, 0.0f, 0.0f, 0.0f,
     0x1.aa715p-86f, 0.0f, 0.0f, 0.0f, 0x1.4ecd6cp-38f, 0.0f, 0x1.9c73c8p-72f, 0.0f,
     0.0f, 0x1.d81772p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.86c342p-123f,
     0.0f, 0.0f, 0.0f, 0x1.ce1594p-123f, 0x1.2d45fep-2f, 0.0f, 0x1.c9d834p-106f,
     0x1.0d28cp-90f, 0.0f, 0x1.21a1ecp-80f, 0x1.479e3ep-13f, 0.0f, 0.0f,
     0x1.198b22p-21f, 0x1.94b78p-82f, 0.0f, 0.0f, 0x1.70615ap-21f, 0x1.d30796p-33f,
     0x1.e589fap-16f, 0x1.71334cp-88f, 0x1.0cfd12p-50f, 0.0f, 0x1.a5c8b6p-38f, 0.0f,
     0x1.9dbff2p-18f, 0x1.eb2464p-77f, 0.0f, 0.0f, 0x1.351516p-112f, 0x1.5e1d3ep-100f,
     0.0f, 0x1.9470bap-114f, 0.0f, 0x1.aadcf6p-6f, 0.0f, 0x1.f11bp-4f, 0.0f,
     0x1.3a5e8ap-36f, 0.0f, 0.0f, 0.0f, 0x1.bfb04p-56f, 0.0f, 0x1.bf76f4p-36f, 0.0f,
     0.0f, 0.0f, 0x1.7724bp-103f, 0.0f, 0.0f, 0x1.672fd4p-29f, 0.0f, 0.0f, 0.0f,
     0x1.1e6cp-86f, 0.0f, 0.0f, 0x1.d3634cp-13f, 0.0f, 0x1.5c2316p-45f,
     0x1.34c28cp-66f, 0x1.59127ap-34f, 0x1p0f, 0x1.aa35bp-4f, 0x1.10dceep-10f,
     0x1.443aeap-15f, 0.0f, 0x1.05728ep-5f, 0.0f, 0.0f, 0x1.98fba4p-8f,
     0x1.26005ap-40f, 0x1.dc4bbcp-67f, 0.0f, 0x1.92dc7cp-31f, 0.0f, 0x1.135c66p-40f,
     0x1.1e1d9p-120f, 0.0f, 0.0f, 0.0f, 0x1.37d99ep-10f, 0.0f, 0.0f, 0.0f,
     0x1.295fe2p-108f, 0x1.15f2ap-50f, 0.0f, 0x1.1c0cc8p-98f, 0.0f, 0.0f,
     0x1.6447f6p-48f, 0.0f, 0x1.a4f48cp-18f, 0.0f, 0.0f, 0.0f, 0x1.556f96p-94f,
     0x1.042b38p-116f, 0x1.694182p-86f, 0.0f, 0.0f, 0.0f, 0x1.6e01acp-51f,
     0x1.58befp-99f, 0x1.f3e488p-119f, 0x1.ebc4b2p-65f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fb25e4p-14f, 0x1.8772bap-1f, 0.0f, 0.0f, 0x1.53cee6p-107f, 0x1.f5388cp-77f,
     0.0f, 0.0f, 0x1.a8a6bap-49f, 0x1.f5b81ap-35f, 0x1.2c20fep-106f, 0.0f,
     0x1.614de8p-94f, 0.0f, 0x1.6c8674p-61f, 0.0f, 0x1.0b77d4p-52f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.df60ep-97f, 0x1.bcfcccp-69f, 0.0f, 0x1.dc5766p-90f, 0.0f,
     0x1.7c83cep-20f, 0x1.f2f9b6p-108f, 0.0f, 0.0f, 0.0f, 0x1.8ac55ep-13f,
     0x1.02c40cp-119f, 0.0f, 0.0f, 0x1.15c6d4p-10f, 0.0f, 0x1.c794e4p-62f, 0.0f, 0.0f,
     0.0f, 0x1.f113b8p-64f, 0x1.ebbf52p-6f, 0.0f, 0x1.1a232cp-47f, 0x1.ea51f4p-61f,
     0x1.8772ecp-34f, 0.0f, 0.0f, 0x1.dc058cp-79f, 0.0f, 0.0f, 0x1.3fdd0ep-22f,
     0x1.aed69ap-49f, 0x1.669516p-22f, 0.0f, 0x1.1a739ep-66f, 0x1.7de2f8p-9f,
     0x1.c4c006p-126f, 0x1.495a8ep-7f, 0.0f, 0.0f, 0x1.9fba6cp-81f, 0.0f,
     0x1.f61714p-24f, 0.0f, 0x1.2af388p-67f, 0.0f, 0x1.a24df6p-48f, 0.0f,
     0x1.7c4252p-105f, 0.0f, 0.0f, 0x1.fa7e96p-126f, 0x1.a369eep-76f, 0x1.1d0622p-12f,
     0.0f, 0.0f, 0.0f, 0x1.690748p-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a01eeep-126f,
     0.0f, 0.0f, 0.0f, 0x1.eef2cap-5f, 0.0f, 0.0f, 0x1.5d6b54p-4f, 0x1.259ep-126f,
     0.0f, 0x1.5d992ap-93f, 0x1.a1f62cp-99f, 0x1.9eaa28p-126f, 0x1.9eb736p-22f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ddfd8ep-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.93c796p-64f, 0x1.53a296p-89f, 0x1.794228p-54f, 0x1.a3b3c8p-3f, 0.0f, 0.0f,
     0.0f, 0x1.91c2e2p-84f, 0.0f, 0.0f, 0x1.b632a8p-33f, 0.0f, 0x1.fb80a2p-41f, 0.0f,
     0x1.406608p-91f, 0x1.8e16a8p-74f, 0x1.322c8cp-51f, 0.0f, 0x1.58833p-104f,
     0x1.e4bc2ap-114f, 0x1.195152p-60f, 0.0f, 0.0f, 0x1.ee77c8p-8f, 0.0f, 0.0f, 0.0f,
     0x1.e8925p-118f, 0.0f, 0.0f, 0.0f, 0x1.36fbb8p-50f, 0.0f, 0.0f, 0.0f,
     0x1.043e5ap-22f, 0.0f, 0x1.3f145p-105f, 0.0f, 0.0f, 0.0f, 0x1.7df602p-66f, 0.0f,
     0x1.8aa3dp-69f, 0x1.d9a548p-22f, 0x1.df56ccp-78f, 0.0f, 0.0f, 0x1.a5f9f4p-22f,
     0x1.95133ap-20f, 0x1.04565ep-115f, 0x1.30738p-27f, 0x1.a42e62p-113f,
     0x1.a15536p-110f, 0.0f, 0x1.fdebe4p-28f, 0x1.44cce2p-23f, 0.0f, 0x1.7b7c5p-55f,
     0.0f, 0.0f, 0x1.1e385cp-78f, 0.0f, 0.0f, 0x1.aed9f4p-78f, 0.0f, 0.0f,
     0x1.0942cp-111f, 0.0f, 0x1.40fe3ap-65f, 0.0f, 0.0f, 0x1.85dd3ap-116f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.5a9d32p-64f, 0.0f, 0x1.b2cbe2p-40f, 0.0f, 0.0f, 0.0f,
     0x1.9c5d26p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.09d57p-89f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b1983ep-100f, 0x1.1aceecp-63f, 0x1.5c63b6p-100f, 0x1.2a2caep-19f,
     0.0f, 0x1.809f78p-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f80b66p-69f, 0x1.0de2ccp-94f,
     0x1.2d1d4ep-71f, 0x1.a59078p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ba38b2p-100f,
     0.0f, 0.0f, 0x1.8c28b8p-61f, 0.0f, 0x1.35361ep-26f, 0.0f, 0x1.6a290ep-88f,
     0x1.aeaa82p-121f, 0.0f, 0x1.2ed2a2p-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.6d83b6p-126f, 0.0f, 0.0f, 0.0f, 0x1.75176ep-55f, 0x1.319358p-1f,
     0x1.9f6f3ep-61f, 0.0f, 0.0f, 0x1.584678p-69f, 0.0f, 0x1.b83c92p-115f,
     0x1.d1f86p-91f, 0x1.21f7acp-87f, 0.0f, 0x1.dd5f7p-68f, 0.0f, 0.0f, 0.0f,
     0x1.0deed6p-87f, 0.0f, 0.0f, 0x1.5c1a2cp-49f, 0x1.bd7cf4p-50f, 0.0f,
     0x1.6e196cp-57f, 0x1.b43074p-26f, 0x1.73e456p-20f, 0x1.6fb66cp-123f,
     0x1.8cdef6p-120f, 0x1p0f, 0.0f, 0x1.866024p-61f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.59303ep-19f, 0x1.1074e4p-97f, 0.0f, 0x1.4c497p-62f, 0x1.31f3bap-20f, 0.0f,
     0.0f, 0x1.29cdcap-106f, 0.0f, 0.0f, 0.0f, 0x1.6bfa0ap-126f, 0.0f, 0x1.49e5ap-72f,
     0.0f, 0.0f, 0x1.e0db2p-73f, 0x1.bf3e4ep-11f, 0x1.16d77ep-102f, 0.0f,
     0x1.76fe74p-55f, 0x1.3d2b1p-68f, 0.0f, 0x1.818314p-39f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.8509dap-109f, 0.0f, 0x1.04f16cp-123f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.85a022p-35f, 0x1.3bb71ap-52f, 0.0f, 0x1.d1be7ep-65f,
     0.0f, 0.0f, 0x1.08d5fap-119f, 0.0f, 0.0f, 0.0f, 0x1.fc3f12p-75f, 0.0f, 0.0f,
     0x1.82e5eap-39f, 0.0f, 0.0f, 0x1.74e4fap-38f, 0x1.1799fep-48f, 0x1.69cf72p-106f,
     0.0f, 0.0f, 0.0f, 0x1.0b3462p-86f, 0.0f, 0x1.74b532p-32f, 0x1.7c35bcp-59f,
     0x1.30135cp-33f, 0x1.eb2612p-73f, 0x1.681f92p-21f, 0x1.336db2p-88f, 0.0f, 0.0f,
     0x1.5290bcp-94f, 0.0f, 0x1.7d461ap-9f, 0x1.30aafap-106f, 0x1.113b02p-33f, 0.0f,
     0x1.05326p-120f, 0x1.3fc2dp-75f, 0.0f, 0x1.9bb8ecp-25f, 0x1.f334b2p-126f, 0.0f,
     0.0f, 0x1.a5c0dep-3f, 0.0f, 0.0f, 0.0f, 0x1.cdc404p-76f, 0x1.891d3cp-111f,
     0x1.49047ep-57f, 0.0f, 0.0f, 0.0f, 0x1.7f8bf6p-125f, 0.0f, 0.0f, 0x1.a167bep-54f,
     0x1.81381cp-34f, 0x1.49ec62p-10f, 0.0f, 0x1.b9819p-29f, 0.0f, 0.0f, 0.0f,
     0x1.470c66p-58f, 0x1.8b18d8p-125f, 0x1.2e7cacp-31f, 0.0f, 0.0f, 0x1.03ebeap-61f,
     0x1.584778p-1f, 0x1.026374p-27f, 0x1.392c62p-20f, 0x1.540046p-9f, 0.0f, 0.0f,
     0.0f, 0x1.edcbd4p-88f, 0x1p0f, 0x1.5ef3ecp-98f, 0.0f, 0.0f, 0.0f,
     0x1.b2d814p-70f, 0.0f, 0x1.06d024p-108f, 0.0f, 0.0f, 0x1.3752dap-103f,
     0x1.c4c65cp-2f, 0.0f, 0x1.bb2ae4p-110f, 0.0f, 0.0f, 0.0f, 0x1.82f38p-120f,
     0x1.caf26p-21f, 0x1.15d306p-25f, 0x1.14952ep-9f, 0.0f, 0x1.78218p-100f,
     0x1.3e147cp-36f, 0x1.c64c96p-15f, 0x1.94b3c4p-115f, 0x1.9bbf78p-89f, 0.0f, 0.0f,
     0.0f, 0x1.570f6ap-46f, 0.0f, 0x1.6b704cp-103f, 0.0f, 0x1.a13994p-2f, 0.0f,
     0x1p0f, 0.0f, 0.0f, 0x1.8b96dcp-90f, 0.0f, 0.0f, 0x1.d08a0cp-112f,
     0x1.406c64p-90f, 0.0f, 0x1.2f2314p-85f, 0x1.07460cp-81f, 0x1.b217e8p-30f,
     0x1.60bf0ep-33f, 0x1.a6b34ep-90f, 0x1.f63f72p-90f, 0x1.3a4e2ap-43f, 0.0f,
     0x1.9b960ap-70f, 0x1.e8b826p-27f, 0x1.94215cp-55f, 0.0f, 0.0f, 0x1.2d179ap-32f,
     0.0f, 0x1.e7b91ap-52f, 0.0f, 0.0f, 0.0f, 0x1.9c90cp-51f, 0x1.e9c79ap-100f,
     0x1.9ece06p-62f, 0.0f, 0x1.e6284cp-5f, 0x1.7a94a6p-9f, 0x1.f25dcap-125f,
     0x1.f41fe4p-9f, 0.0f, 0x1.ff5c1cp-90f, 0.0f, 0x1.60a234p-102f, 0.0f,
     0x1.a13ed4p-26f, 0x1.774144p-106f, 0.0f, 0.0f, 0x1.59b2fcp-84f, 0.0f, 0.0f, 0.0f,
     0x1.182246p-38f, 0x1.64f896p-36f, 0.0f, 0.0f, 0.0f
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
            float tmp3;
            int32_t tmp4;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = external_bench_wrapper_input_table_arg1[i];
            tmp2 = copysignf(tmp0, tmp1);
            external_bench_wrapper_output_table[i] = tmp2;
            tmp3 = bench_acc + tmp2;
            bench_acc = tmp3;
            tmp4 = i + INT32_C(1);
            i = tmp4;
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
    printf("copysignf %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("copysignf bench acc %a\n", global_bench_acc);
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
