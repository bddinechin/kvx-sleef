/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_cospif8_u05kvx.c --function \
 *     Sleef_finz_cospif8_u05kvx --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0x1.f51d9p-87f, 0.0f, 0x1.d6fb7ap-37f, 0x1.735e3ep-68f, 0.0f,
     0x1.07341ap-111f, 0x1.c5353ap-114f, 0.0f, 0.0f, 0x1.0663fcp-102f,
     0x1.d4d01ap-76f, 0.0f, 0x1.0bb1e6p-101f, 0.0f, 0x1.81e4dp-69f, 0x1.7a9454p-58f,
     0x1.c7e498p-65f, 0.0f, 0x1.0a7c94p-124f, 0x1p0f, 0.0f, 0.0f, 0x1.b4eb88p-79f,
     0x1.bb9a86p-65f, 0x1.75ef5ap-126f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f,
     0x1.d218c8p-62f, 0x1.e82eep-21f, 0x1.de3768p-72f, 0x1.bf840ap-89f, 0.0f,
     0x1.13dc32p-120f, 0x1.161e88p-111f, 0.0f, 0.0f, 0x1.d36feep-100f,
     0x1.acd9c2p-74f, 0x1.9460d6p-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d3e62ep-90f, 0x1.60c212p-88f, 0x1.30d984p-34f, 0x1.4671f4p-23f,
     0x1.534fc4p-28f, 0.0f, 0x1.89277cp-78f, 0x1.24edf2p-50f, 0x1.b76beep-79f, 0.0f,
     0.0f, 0.0f, 0x1.9a1fcp-122f, 0.0f, 0.0f, 0x1.2fabecp-52f, 0x1.69e4b4p-95f,
     0x1.0ee6a2p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e34752p-108f, 0x1.f282d2p-26f,
     0.0f, 0.0f, 0x1.11a63cp-78f, 0.0f, 0.0f, 0x1.82f7aap-44f, 0x1.2e4b1ep-30f,
     0x1.40115cp-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6e37e6p-117f, 0x1.3b6d12p-16f, 0.0f,
     0.0f, 0x1p0f, 0x1.3aba2ap-42f, 0x1.002f04p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.9319aep-7f, 0x1.ab9452p-42f, 0x1.6efd36p-41f, 0x1.162218p-115f,
     0x1.3595dp-3f, 0x1.d3b1fp-81f, 0x1.4b6682p-113f, 0x1.adc74cp-27f,
     0x1.645ee2p-65f, 0x1.60ebf2p-97f, 0x1.458d4p-68f, 0x1.a58b28p-39f,
     0x1.5994c6p-49f, 0.0f, 0.0f, 0x1.645982p-12f, 0x1.50793cp-58f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c2d55cp-50f, 0.0f, 0x1.53ef0ap-27f, 0x1.cb5d82p-64f, 0.0f,
     0x1.14eae2p-20f, 0x1.6598a2p-36f, 0.0f, 0.0f, 0x1.9c9026p-14f, 0.0f,
     0x1.c2b8e2p-119f, 0x1.e7b3fap-87f, 0.0f, 0x1.e99cd6p-15f, 0.0f, 0x1p0f, 0.0f,
     0x1.1b7ac6p-60f, 0x1.1edc9p-62f, 0.0f, 0x1.3db74p-122f, 0.0f, 0x1.06577ap-101f,
     0x1.d31b2p-66f, 0.0f, 0.0f, 0x1.f953dap-119f, 0x1.1b2884p-49f, 0x1.19925cp-10f,
     0.0f, 0.0f, 0x1.352edap-70f, 0x1.43b96ap-23f, 0.0f, 0.0f, 0x1.956e62p-92f,
     0x1.23d312p-73f, 0x1.6b0eaap-92f, 0.0f, 0x1.86025p-80f, 0.0f, 0x1.ad0282p-86f,
     0x1.8fe26p-66f, 0.0f, 0.0f, 0.0f, 0x1.87c424p-83f, 0x1.0453a8p-47f, 0.0f,
     0x1.2b2866p-5f, 0x1.f8776p-42f, 0x1.3857bep-76f, 0x1.bb8b74p-21f, 0.0f,
     0x1.6dc2f8p-2f, 0x1.84461cp-77f, 0.0f, 0x1.221c2ep-106f, 0.0f, 0.0f,
     0x1.693df6p-34f, 0.0f, 0x1.72194p-10f, 0x1.498fa2p-107f, 0x1.f78b9cp-14f, 0.0f,
     0x1.7bab82p-55f, 0.0f, 0x1.ca8eb8p-78f, 0.0f, 0.0f, 0x1.2a3522p-59f, 0.0f,
     0x1.67fddap-39f, 0.0f, 0x1.848a32p-62f, 0x1.65790ep-91f, 0.0f, 0x1.ba782ap-24f,
     0.0f, 0x1.f9fe66p-114f, 0x1.6447eep-55f, 0x1.b5e386p-123f, 0x1.463128p-81f, 0.0f,
     0.0f, 0x1.69c60ep-28f, 0x1.b1fe66p-4f, 0x1.6fe99ap-60f, 0x1.b06fdap-13f, 0.0f,
     0.0f, 0x1.e51a48p-90f, 0.0f, 0.0f, 0x1.e5772cp-30f, 0.0f, 0.0f, 0x1.778228p-118f,
     0x1.502664p-83f, 0x1.dc4b94p-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d697dcp-28f, 0.0f,
     0x1.263678p-121f, 0x1.5385aap-60f, 0.0f, 0x1.3774f4p-33f, 0.0f, 0x1.d136d2p-101f,
     0.0f, 0x1.4fff24p-91f, 0x1.931a8ap-6f, 0.0f, 0.0f, 0.0f, 0x1.4d6e2ep-72f, 0.0f,
     0.0f, 0x1.f345b6p-72f, 0.0f, 0.0f, 0x1.38b774p-67f, 0x1.b7c40ep-18f,
     0x1.ae453cp-87f, 0.0f, 0.0f, 0.0f, 0x1.2c3844p-80f, 0x1.c0c282p-60f, 0.0f, 0.0f,
     0x1.01f29ep-17f, 0.0f, 0x1.36661cp-78f, 0x1.42b27cp-44f, 0x1.55f11ep-9f, 0.0f,
     0x1.86aa9ap-75f, 0x1.d0b5ecp-86f, 0x1.a5252ep-24f, 0.0f, 0.0f, 0x1.3b9662p-64f,
     0.0f, 0x1.d09p-7f, 0x1.aa5626p-101f, 0x1.543fc2p-42f, 0x1.26f87p-9f,
     0x1.8e5d9ap-74f, 0x1.4acc66p-98f, 0x1.1a29e4p-114f, 0x1.26bda6p-125f,
     0x1.3a77d4p-66f, 0x1.542da2p-65f, 0.0f, 0x1.e25e2p-116f, 0x1.80b846p-124f, 0.0f,
     0.0f, 0x1.18fadcp-88f, 0.0f, 0.0f, 0x1.6e7a04p-42f, 0x1.46d39cp-124f,
     0x1.59d67ap-27f, 0.0f, 0.0f, 0x1.3fac6ap-10f, 0x1.e1aa24p-38f, 0x1.7a0ae8p-38f,
     0.0f, 0.0f, 0x1.747ad8p-19f, 0x1.0af34ap-34f, 0x1.af5fecp-13f, 0x1.abed94p-51f,
     0x1.8bcd5ep-102f, 0.0f, 0x1.fa480cp-77f, 0.0f, 0.0f, 0.0f, 0x1.cf8a0ap-17f, 0.0f,
     0x1.c99932p-84f, 0x1.d1b59ep-48f, 0.0f, 0x1.792f2ep-83f, 0x1.39a5fcp-18f,
     0x1.e78298p-85f, 0x1.846356p-9f, 0x1.df8bcp-15f, 0x1.db19ecp-73f, 0x1.688a4p-93f,
     0x1p0f, 0x1.ce66ecp-63f, 0.0f, 0x1.ed8112p-34f, 0.0f, 0x1.eb438ep-88f, 0.0f,
     0.0f, 0x1.b6882ep-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5b1a24p-2f, 0.0f, 0.0f, 0.0f,
     0x1.753b74p-71f, 0.0f, 0.0f, 0x1.436182p-118f, 0.0f, 0x1.c13246p-24f, 0.0f,
     0x1.08f406p-61f, 0.0f, 0.0f, 0x1.32f792p-8f, 0x1.952dacp-11f, 0x1.f5492ap-98f,
     0x1.a5152cp-62f, 0x1.8452f8p-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bd66a8p-42f, 0.0f,
     0.0f, 0x1.6db6c2p-106f, 0.0f, 0x1.8c1d7ep-38f, 0.0f, 0.0f, 0x1.692644p-57f, 0.0f,
     0.0f, 0.0f, 0x1.32bc16p-87f, 0.0f, 0.0f, 0x1.d66e3ep-77f, 0.0f, 0x1.e08026p-65f,
     0x1.d57dep-125f, 0.0f, 0.0f, 0x1.54af72p-9f, 0x1.9994a8p-75f, 0.0f, 0.0f,
     0x1.a1ed6p-107f, 0.0f, 0.0f, 0x1.698e3ap-24f, 0x1.01da12p-43f, 0x1.92a076p-126f,
     0.0f, 0x1.1b57f8p-113f, 0x1.fea3c2p-79f, 0x1.f9d7bcp-77f, 0x1.ad923ep-103f, 0.0f,
     0.0f, 0.0f, 0x1.966eeep-31f, 0x1.f0b5a4p-3f, 0.0f, 0x1.209cb8p-116f, 0.0f, 0.0f,
     0.0f, 0x1.234e06p-44f, 0x1.9327eep-124f, 0.0f, 0x1.3da578p-42f, 0x1.13ec4ep-36f,
     0x1.39fe9p-77f, 0x1.00677cp-113f, 0x1.72e354p-124f, 0.0f, 0x1.987c92p-105f, 0.0f,
     0.0f, 0x1.528b08p-112f, 0.0f, 0x1.bc485cp-19f, 0.0f, 0x1.60b02cp-31f,
     0x1.bc6bfap-119f, 0.0f, 0.0f, 0x1.30ae2ep-33f, 0x1.794da8p-70f, 0x1.dfb59cp-22f,
     0.0f, 0.0f, 0x1.026b8ep-105f, 0.0f, 0x1.bc0e28p-22f, 0x1.2f8fa6p-45f,
     0x1.28d6fap-92f, 0.0f, 0x1.7caf6p-86f, 0x1.22f5cap-110f, 0x1.aad964p-119f,
     0x1.c10562p-32f, 0x1.b4809ep-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.34ca98p-94f,
     0x1.d159c4p-120f, 0.0f, 0x1.c7b75ep-93f, 0x1.5f5ffep-100f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7d45ep-72f, 0.0f, 0x1.7e489ep-37f, 0x1.c0aa34p-114f,
     0x1.1e06f6p-91f, 0x1.b20392p-22f, 0.0f, 0x1.e61624p-61f, 0.0f, 0x1.fc48c6p-125f,
     0.0f, 0.0f, 0x1.1913bcp-114f, 0.0f, 0x1.853e52p-80f, 0.0f, 0.0f, 0x1.f4a67ep-89f,
     0.0f, 0x1.e8dfb4p-103f, 0x1.47c714p-123f, 0x1.c8f526p-66f, 0x1.49cf5ap-11f, 0.0f,
     0.0f, 0x1.55097ap-83f, 0.0f, 0.0f, 0.0f, 0x1.b5d60ep-107f, 0.0f,
     0x1.9603dap-103f, 0x1.2f4acep-109f, 0x1.eb35fep-7f, 0x1.826558p-13f,
     0x1.2fed82p-90f, 0.0f, 0x1.fa0c7cp-78f, 0x1.c09f22p-112f, 0x1.23a71ap-60f, 0.0f,
     0x1.62b75p-114f, 0x1.82fbap-49f, 0x1.eeaeeap-62f, 0.0f, 0x1.afc9b6p-9f,
     0x1.2db9fep-67f, 0.0f, 0x1.c530fcp-66f, 0x1.4ea6cep-41f, 0.0f, 0.0f,
     0x1.d25864p-97f, 0x1.c66d82p-72f, 0x1.ba93dp-53f, 0x1.f96e38p-3f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.74ce6ap-78f, 0x1p0f, 0x1.36e0acp-32f, 0.0f, 0.0f,
     0.0f, 0x1.da33bap-15f, 0.0f, 0x1.5c225ep-32f, 0x1.02c7c8p-32f, 0.0f, 0.0f,
     0x1.113a22p-20f, 0.0f, 0.0f, 0x1.8b9b0ap-53f, 0x1.f8de9cp-87f, 0x1.c66a86p-55f,
     0.0f, 0.0f, 0x1.1717b4p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bc017p-97f,
     0x1.f475f2p-104f, 0.0f, 0.0f, 0x1.44ed16p-74f, 0.0f, 0x1.425dep-57f,
     0x1.4d34eep-33f, 0.0f, 0.0f, 0x1.30ccb4p-56f, 0.0f, 0x1.ec411ep-23f,
     0x1.41ecd4p-11f, 0x1.591668p-24f, 0.0f, 0.0f, 0x1.f93d86p-114f, 0x1.2feeaep-89f,
     0x1.bb434cp-16f, 0.0f, 0.0f, 0x1.ef2ae8p-83f, 0x1.4dcf8ap-106f, 0x1.1a20dap-67f,
     0x1.0ef80cp-15f, 0x1.ad0534p-58f, 0.0f, 0.0f, 0x1.5a08a8p-40f, 0.0f, 0.0f,
     0x1.a947cep-37f, 0.0f, 0x1.6a3beep-76f, 0x1.d89c64p-61f, 0x1.72ab16p-6f,
     0x1.a45148p-94f, 0x1.f2e674p-76f, 0x1.06a3bcp-5f, 0.0f, 0x1.f58bf8p-106f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.72b23p-82f, 0.0f, 0x1.20d3aep-50f, 0x1.c7dffcp-84f, 0.0f,
     0x1.7eb6a8p-67f, 0x1.8c0f3p-24f, 0.0f, 0x1.26e45cp-91f, 0.0f, 0.0f,
     0x1.c3ae5ap-25f, 0.0f, 0.0f, 0x1.3082ecp-55f, 0.0f, 0x1.edd58ap-93f,
     0x1.bad9c4p-72f, 0x1.ec6ceap-118f, 0.0f, 0x1.7556e2p-46f, 0.0f, 0x1p0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a85388p-70f, 0.0f, 0x1.ba724p-100f, 0.0f, 0.0f,
     0x1.f19aa2p-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.06099ep-71f, 0.0f,
     0x1.c64922p-100f, 0.0f, 0x1.3b6572p-36f, 0x1.00af8ap-39f, 0.0f, 0.0f, 0.0f,
     0x1.b3919cp-62f, 0x1.703512p-33f, 0x1.c119fep-77f, 0x1.6be298p-36f,
     0x1.d2e0a4p-29f, 0.0f, 0x1.8bb7f2p-37f, 0.0f, 0x1.49c9ap-80f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.68f526p-81f, 0x1.93674cp-94f, 0x1.aa12a2p-98f, 0.0f, 0x1.71130cp-112f,
     0x1.3169bap-34f, 0x1.c8b17cp-109f, 0x1.632e62p-80f, 0.0f, 0x1.74b25p-11f,
     0x1.45bf2ap-11f, 0.0f, 0x1.1f7fap-125f, 0.0f, 0x1.a476b2p-8f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.515aaep-108f, 0x1.d31f7ep-28f, 0.0f, 0x1.524d64p-79f,
     0x1.bbfa62p-64f, 0x1.322d8p-109f, 0.0f, 0x1.2fca72p-7f, 0.0f, 0.0f,
     0x1.fe4d96p-7f, 0.0f, 0.0f, 0x1.b00018p-14f, 0x1.14a468p-31f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.7447aap-16f, 0.0f, 0.0f, 0x1.feb9cep-15f, 0.0f, 0.0f, 0x1.c1affap-105f,
     0x1.1630d6p-125f, 0.0f, 0x1.8d3f1cp-12f, 0.0f, 0x1.8bb352p-83f, 0x1.929282p-16f,
     0x1.99161p-63f, 0x1.18411ep-41f, 0x1.07e6eep-54f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.db2ef2p-87f, 0x1.f0991ap-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f34e32p-83f, 0.0f, 0.0f, 0.0f, 0x1.1719dp-79f, 0.0f, 0.0f, 0.0f,
     0x1.d981b4p-63f, 0x1.965068p-106f, 0.0f, 0x1.8d918ap-15f, 0.0f, 0.0f,
     0x1.4c56eap-61f, 0.0f, 0.0f, 0x1.a71c0ap-43f, 0x1.74261p-102f, 0x1.7bc89ap-57f,
     0x1.d90806p-63f, 0x1.f30788p-112f, 0.0f, 0.0f, 0x1.dfe32p-112f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.4581ccp-68f, 0.0f, 0x1.63f2a2p-2f, 0x1.a2ad5p-50f, 0x1.bc3cf6p-66f,
     0.0f, 0.0f, 0.0f, 0x1.5d1322p-83f, 0x1.6172f2p-17f, 0x1.93df86p-84f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d3f414p-101f, 0.0f, 0x1.4e25cap-93f, 0x1.b7c692p-5f, 0.0f,
     0x1.7ed824p-118f, 0x1.889072p-25f, 0.0f, 0.0f, 0x1.4ab57p-49f, 0x1.23b97cp-72f,
     0x1.f3403ap-2f, 0.0f, 0.0f, 0x1.a8fe64p-60f, 0x1.0e73ecp-118f, 0.0f, 0.0f, 0.0f,
     0x1.deed16p-117f, 0x1.56ed0ap-84f, 0.0f, 0.0f, 0.0f, 0x1.7bc368p-38f, 0.0f,
     0x1.948618p-88f, 0x1.08435ep-24f, 0x1.812e16p-61f, 0x1.e6eda8p-2f, 0.0f, 0.0f,
     0x1.f39978p-8f, 0x1.29fe32p-16f, 0x1.7d2cdcp-28f, 0x1.7ce19p-21f, 0.0f, 0.0f,
     0.0f, 0x1.b65e76p-74f, 0.0f, 0x1.84df62p-47f, 0x1.ef6524p-113f, 0x1.984e5p-82f,
     0x1.f3cd1cp-62f, 0x1.3b1e76p-5f, 0.0f, 0x1.94f834p-32f, 0.0f, 0x1.0779fap-7f,
     0.0f, 0.0f, 0x1.838b74p-118f, 0.0f, 0x1.06ddb8p-108f, 0.0f, 0x1.426faap-98f,
     0x1.3d249ap-13f, 0x1.cf48bap-11f, 0x1.414a8ep-35f, 0x1.30c62ep-65f,
     0x1.1a7ec6p-12f, 0x1.b6711ap-53f, 0x1.be3a78p-79f, 0x1.902ab2p-67f, 0.0f,
     0x1.0c3034p-65f, 0x1.b18cc4p-92f, 0x1.d330dep-30f, 0x1.ff7ce4p-107f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ce9e5ap-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.170c22p-59f,
     0x1.40911cp-111f, 0.0f, 0.0f, 0x1.67a5eep-117f, 0x1.12064ep-57f, 0.0f,
     0x1.23e33cp-108f, 0.0f, 0.0f, 0.0f, 0x1.64f708p-9f, 0.0f, 0.0f, 0x1.346796p-125f,
     0.0f, 0.0f, 0x1.ab22b4p-87f, 0x1.ac2d34p-46f, 0x1.45eb26p-12f, 0x1.9310f2p-48f,
     0x1.d544a4p-124f, 0.0f, 0.0f, 0.0f, 0x1.c8d25p-110f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.eae894p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c237f2p-72f,
     0x1.53c9e2p-75f, 0.0f, 0x1.5db3b4p-13f, 0x1.1f8eaap-20f, 0.0f, 0x1.06ca8p-50f,
     0.0f, 0.0f, 0x1.b7f9d4p-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6e9aep-71f,
     0x1.d185eap-48f, 0.0f, 0.0f, 0x1.b6efdep-113f, 0x1.328a9ep-122f,
     0x1.94026ep-121f, 0x1.fbd5d8p-15f, 0.0f, 0x1.273016p-107f, 0x1.2dfcfap-8f,
     0x1.63e1acp-66f, 0x1.0e0d28p-14f, 0x1.ae19c2p-24f, 0x1.20f9b4p-66f, 0.0f,
     0x1.b6b83ep-52f, 0x1.afebd8p-71f, 0x1.a3d43p-13f, 0.0f, 0.0f, 0x1.6eb0d2p-37f,
     0x1.aa0cf6p-63f, 0x1.937d82p-1f, 0x1.697744p-5f, 0x1.a8a472p-119f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e8883p-63f, 0x1.95be2ep-71f, 0.0f, 0x1.e573bap-10f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b02fb8p-36f, 0.0f, 0.0f, 0.0f, 0x1.0c1398p-15f, 0.0f,
     0x1.e8496ep-40f, 0.0f, 0x1.1423a2p-120f, 0x1.ebfd8p-60f, 0.0f, 0x1.edb41ep-90f,
     0x1.d1f716p-87f, 0.0f, 0x1.960296p-34f, 0x1.0ba02p-53f, 0.0f, 0x1.f21694p-86f,
     0x1.0d3b82p-98f, 0.0f, 0.0f, 0.0f, 0x1.e1df8cp-92f, 0.0f, 0x1.a0ed16p-64f, 0.0f,
     0x1.89d112p-73f, 0x1.88d1b6p-86f, 0x1.ef7226p-21f, 0.0f, 0x1.b9df7ep-51f,
     0x1.f4bf96p-63f, 0x1.442bf4p-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.1f4816p-20f, 0.0f, 0x1.a5dcap-117f, 0x1.e6cb1ap-87f,
     0x1.a61fe8p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1403e2p-46f, 0.0f, 0.0f, 0.0f,
     0x1.3d81dap-87f, 0x1.001b7ap-54f, 0x1.2d4932p-107f, 0.0f, 0.0f, 0x1.5b6d1cp-67f,
     0x1.f0a84p-89f, 0x1.d66c92p-124f, 0.0f, 0x1.985942p-85f, 0x1.e76cc6p-31f,
     0x1.9a7acep-96f, 0x1.9196e4p-29f, 0x1.a54db4p-6f, 0.0f, 0.0f, 0x1.deafbep-11f,
     0x1.800e72p-54f, 0.0f, 0.0f, 0.0f, 0x1.1b306cp-103f
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
            tmp1 = Sleef_finz_cospif8_u05kvx(tmp0);
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
    printf("Sleef_finz_cospif8_u05kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_finz_cospif8_u05kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
