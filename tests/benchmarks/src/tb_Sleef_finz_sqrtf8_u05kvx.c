/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sqrtf8_u05kvx.c --function \
 *     Sleef_finz_sqrtf8_u05kvx --headers sleef.h,ml_support_lib.h \
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
     0x1.82aee2p-61f, 0.0f, 0.0f, 0.0f, 0x1.9d0a4ap-45f, 0x1.bebc72p-17f,
     0x1.9a7922p-67f, 0x1.3143ccp-110f, 0x1.82974ep-126f, 0.0f, 0x1.8b0ddp-113f, 0.0f,
     0.0f, 0.0f, 0x1.b2a6a4p-71f, 0x1.2d0aeep-113f, 0x1.a8afeep-113f, 0x1.bf5ffp-62f,
     0x1.ba9a74p-8f, 0.0f, 0x1.3f3aa2p-70f, 0x1.5d7154p-15f, 0x1.84bd9p-84f,
     0x1.399758p-69f, 0x1.095e38p-70f, 0x1.31b1a2p-122f, 0x1.de090ep-115f,
     0x1.e30452p-26f, 0x1.8fedfap-108f, 0.0f, 0x1.ca853ep-37f, 0x1.1e7138p-52f,
     0x1.79800ep-96f, 0.0f, 0.0f, 0x1.5d1bd8p-97f, 0.0f, 0.0f, 0.0f, 0x1.6522d4p-8f,
     0x1.b0c6aap-119f, 0x1.e41da4p-13f, 0x1.ae11ccp-22f, 0x1.e41a24p-35f,
     0x1.baa5eap-62f, 0x1.766632p-24f, 0.0f, 0.0f, 0.0f, 0x1.94ac9ep-125f, 0.0f,
     0x1.70557cp-115f, 0.0f, 0.0f, 0x1.5000e8p-10f, 0.0f, 0x1.578756p-75f, 0.0f, 0.0f,
     0x1.3bc838p-96f, 0.0f, 0x1.730dep-55f, 0.0f, 0.0f, 0x1.2f62cp-26f,
     0x1.3eb374p-38f, 0x1.77bf16p-9f, 0.0f, 0x1.776db8p-75f, 0x1.2b82bap-25f, 0.0f,
     0x1.361b9p-29f, 0.0f, 0x1.91f5acp-114f, 0.0f, 0.0f, 0x1.0495bp-97f,
     0x1.11ae98p-95f, 0x1.d1a422p-59f, 0.0f, 0.0f, 0x1.13ce4ep-101f, 0.0f, 0.0f,
     0x1.2cbd4cp-8f, 0.0f, 0x1.0a3f52p-7f, 0x1.a2af34p-29f, 0.0f, 0x1.c78aa2p-61f,
     0x1.3c0a3ep-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.13b81p-21f, 0x1.7341cap-59f,
     0x1.84e8ep-70f, 0x1.8fcb0ep-106f, 0x1.e3d56ep-38f, 0.0f, 0x1.e57ea8p-109f, 0.0f,
     0.0f, 0x1.3a4c36p-115f, 0x1.0b785cp-83f, 0x1.e8f942p-1f, 0.0f, 0.0f, 0.0f,
     0x1.c50646p-78f, 0x1.28fb84p-119f, 0.0f, 0x1.76911ap-59f, 0x1.d42538p-13f, 0.0f,
     0.0f, 0x1.cb836p-100f, 0x1.c18d48p-27f, 0x1.95bc3cp-12f, 0x1.3fbe2ep-117f,
     0x1.7902fap-72f, 0.0f, 0.0f, 0x1.aafa54p-104f, 0x1.7e5afep-79f, 0.0f,
     0x1.b16b2cp-1f, 0x1.9e825cp-6f, 0x1.cd55c4p-93f, 0x1.c73714p-107f,
     0x1.391c18p-83f, 0.0f, 0x1.823d46p-101f, 0.0f, 0x1.6f6fb8p-50f, 0x1.0cbaa8p-126f,
     0x1.91114ep-18f, 0.0f, 0.0f, 0.0f, 0x1.88d2a8p-59f, 0x1.a58218p-41f,
     0x1.c27ed4p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0b144ep-94f, 0.0f, 0x1.418b04p-8f,
     0.0f, 0x1.4730b2p-105f, 0x1.2f21c6p-19f, 0.0f, 0x1.ebd308p-28f, 0.0f,
     0x1.b8492ep-97f, 0x1.5c426ap-98f, 0x1.a8676ep-67f, 0x1.d09bf4p-57f,
     0x1.7aa3a4p-105f, 0.0f, 0x1.dd82fap-84f, 0x1.df542p-58f, 0.0f, 0.0f, 0.0f,
     0x1.560dfap-34f, 0x1.ba098ap-83f, 0x1.150158p-76f, 0x1.05585ap-17f, 0.0f, 0.0f,
     0x1.5baa3cp-118f, 0x1.f59beep-57f, 0.0f, 0.0f, 0.0f, 0x1.a1c3e8p-107f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.26e94ap-57f, 0x1.a31bdap-108f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.c339fp-63f, 0x1.c65342p-4f, 0x1.b23f3cp-33f, 0.0f, 0.0f, 0.0f,
     0x1.8bb77cp-63f, 0x1.4a1c2p-20f, 0x1.72f652p-90f, 0x1.882f4ap-60f,
     0x1.5ddb82p-16f, 0.0f, 0x1.70a18cp-43f, 0x1.9cd236p-101f, 0x1.1eae9p-37f,
     0x1.811b0ep-10f, 0x1.d479e4p-41f, 0x1.be5c2ep-126f, 0.0f, 0.0f, 0x1.0bfadap-67f,
     0.0f, 0x1.2e5f1p-97f, 0x1.0508a8p-97f, 0.0f, 0x1.93baeep-5f, 0.0f, 0.0f,
     0x1.152116p-109f, 0x1.e39d06p-113f, 0.0f, 0.0f, 0.0f, 0x1.01b1c6p-64f,
     0x1.b93398p-114f, 0x1.7b464p-118f, 0x1.2dbf5ep-15f, 0.0f, 0x1.81a49cp-25f, 0.0f,
     0.0f, 0.0f, 0x1.20fb4ep-126f, 0.0f, 0.0f, 0.0f, 0x1.2c5dbp-27f, 0x1.33f976p-117f,
     0.0f, 0x1.5f5044p-37f, 0.0f, 0x1.67344ep-119f, 0x1.2c79dap-115f, 0.0f,
     0x1.7032eap-45f, 0.0f, 0.0f, 0x1.12baa8p-32f, 0.0f, 0.0f, 0x1.c1c82ap-19f,
     0x1.cbcb54p-29f, 0.0f, 0x1.a1c44ep-37f, 0x1.9b877ap-113f, 0.0f, 0x1.a52934p-66f,
     0x1.937388p-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3adcbcp-124f, 0x1.5b1bcep-14f,
     0x1.dd266ep-101f, 0x1.8bbfeap-19f, 0.0f, 0x1.27cbc8p-18f, 0x1.d4fc32p-53f, 0.0f,
     0x1.424f88p-10f, 0.0f, 0x1.ccb4bp-67f, 0.0f, 0x1.911844p-69f, 0.0f,
     0x1.be0f0cp-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d72954p-83f, 0.0f, 0.0f,
     0x1.5c13fcp-106f, 0.0f, 0.0f, 0x1.426cf8p-74f, 0.0f, 0.0f, 0.0f, 0x1.19b576p-63f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f6644p-62f, 0.0f, 0.0f,
     0x1.1e3266p-116f, 0x1.6d606cp-73f, 0x1.aaf81cp-21f, 0.0f, 0.0f, 0x1.cd64a4p-2f,
     0.0f, 0.0f, 0x1.99a69cp-123f, 0x1.e75c6ap-35f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6d24d2p-53f, 0x1.87bd28p-94f, 0x1.0d2ec4p-25f, 0x1.95e4ap-83f,
     0x1.97b382p-35f, 0.0f, 0.0f, 0.0f, 0x1.fc3ca4p-87f, 0.0f, 0x1.89a9a8p-88f, 0.0f,
     0.0f, 0x1.3623p-37f, 0x1.7bd5c6p-58f, 0.0f, 0x1.3e087p-65f, 0x1.6ad5bp-42f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.8ed71ep-119f, 0.0f, 0.0f, 0x1.0fe28ap-13f, 0x1.3109e6p-68f,
     0x1.57638ap-79f, 0x1.a1ad66p-114f, 0x1.b7b34cp-104f, 0.0f, 0x1.3195d6p-94f, 0.0f,
     0.0f, 0x1.a8a9fap-87f, 0.0f, 0.0f, 0x1.e7733cp-26f, 0x1.d5a27p-93f, 0.0f,
     0x1.84d39ep-76f, 0x1.8765f8p-32f, 0x1.23c1fep-76f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.64c86ep-74f, 0.0f, 0x1.ee26aap-77f, 0.0f, 0.0f, 0x1.8c1dc6p-91f,
     0x1.9890f8p-75f, 0.0f, 0x1.8857dep-99f, 0x1.da2136p-117f, 0.0f, 0.0f,
     0x1.772404p-26f, 0.0f, 0.0f, 0x1.ae34fp-85f, 0x1.9b69bcp-108f, 0x1.c7b5f6p-48f,
     0.0f, 0.0f, 0x1.2ed0fep-42f, 0.0f, 0x1.a60d5cp-82f, 0x1.3d180ap-102f, 0.0f, 0.0f,
     0x1.5fb9b8p-113f, 0x1.f48d7ap-49f, 0.0f, 0.0f, 0.0f, 0x1.e77a98p-12f, 0.0f,
     0x1.3d1f48p-88f, 0x1.87ee16p-14f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.43b28p-2f,
     0x1.2ffb8cp-91f, 0.0f, 0x1.d534d2p-51f, 0x1.36750ap-19f, 0x1.b75014p-77f, 0.0f,
     0x1.182b5ap-88f, 0x1.b7720ep-6f, 0x1.6fed2ap-99f, 0.0f, 0.0f, 0x1.b4bdb6p-81f,
     0.0f, 0x1.7aa902p-100f, 0x1.adaa02p-44f, 0.0f, 0x1.d29fe2p-35f, 0x1.595accp-15f,
     0x1.bed9b2p-81f, 0x1.075862p-68f, 0x1.242ca8p-121f, 0x1.88445p-18f, 0.0f, 0.0f,
     0.0f, 0x1.cc5da2p-88f, 0.0f, 0x1.1a67dp-60f, 0.0f, 0.0f, 0x1.98eb2cp-6f, 0.0f,
     0x1.ba480cp-58f, 0x1.65d1fep-72f, 0x1.bafe7p-70f, 0x1.c89144p-112f,
     0x1.d3d32p-82f, 0x1.bdd85p-12f, 0.0f, 0x1.1103e2p-16f, 0x1.13a31ap-47f, 0.0f,
     0.0f, 0x1.55afa8p-4f, 0x1.860a4p-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.dd86a6p-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5742f4p-124f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.bc8044p-118f, 0.0f, 0x1.7760a8p-25f, 0.0f, 0x1.d799fcp-55f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a770f8p-117f, 0x1.aa3bd8p-119f, 0x1.fe20dep-124f,
     0x1.65b79p-118f, 0.0f, 0x1.d242ep-71f, 0.0f, 0.0f, 0x1.af3056p-92f,
     0x1.e4886cp-32f, 0.0f, 0x1.36cdfcp-114f, 0x1.30c84ap-20f, 0x1.b65398p-76f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.01a2f2p-114f, 0x1.cc3a1cp-125f, 0x1.9e6b9p-23f,
     0x1.6bad9p-91f, 0x1.d63a9ap-6f, 0.0f, 0x1.626d64p-120f, 0.0f, 0.0f,
     0x1.e20a9cp-98f, 0.0f, 0x1.dee5eep-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f81d38p-26f,
     0.0f, 0.0f, 0.0f, 0x1.a1c7fcp-4f, 0.0f, 0x1.f1a3c4p-89f, 0.0f, 0x1.1bde1ap-55f,
     0x1.f6552ep-58f, 0.0f, 0.0f, 0.0f, 0x1.dfdcfcp-22f, 0.0f, 0.0f, 0x1.269e44p-124f,
     0x1.abd46ap-19f, 0x1.70641p-17f, 0.0f, 0x1.897a4cp-50f, 0.0f, 0.0f, 0.0f,
     0x1.0105cep-57f, 0x1.dd60d4p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b12e6ap-39f, 0.0f, 0x1.c6e9b6p-118f, 0x1.a6260ap-95f, 0.0f, 0x1.b06c5cp-25f,
     0.0f, 0.0f, 0x1.b7a57ap-55f, 0x1.af5e64p-38f, 0.0f, 0x1.63e402p-83f, 0.0f,
     0x1.43111ep-117f, 0x1.f83ddap-16f, 0.0f, 0x1.d7d7ap-7f, 0x1.60941cp-109f, 0.0f,
     0.0f, 0x1.6a7122p-99f, 0x1.f020bap-59f, 0.0f, 0x1.ff37c4p-41f, 0x1.d2f3b4p-105f,
     0x1.02fbdap-108f, 0.0f, 0x1.58044ap-60f, 0.0f, 0x1.454366p-44f, 0.0f,
     0x1.46a4c2p-38f, 0.0f, 0x1.feb8cap-70f, 0x1.34d1eep-46f, 0x1.d46da6p-125f,
     0x1.8be1aap-11f, 0.0f, 0.0f, 0.0f, 0x1.c8f4f2p-75f, 0x1.d566ecp-124f,
     0x1.8c721cp-46f, 0x1.543494p-119f, 0x1.b46438p-58f, 0.0f, 0x1.3377e6p-68f, 0.0f,
     0x1.245cb2p-109f, 0.0f, 0x1.00e822p-57f, 0.0f, 0x1.1a3958p-124f, 0.0f,
     0x1.beca88p-63f, 0.0f, 0x1.124a68p-110f, 0x1.d447bcp-98f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3d4c5ep-54f, 0.0f, 0x1.548a74p-27f, 0x1.e43b46p-66f, 0x1.f73eb2p-60f, 0.0f,
     0.0f, 0.0f, 0x1.f1bc1ep-10f, 0x1.3671ep-54f, 0.0f, 0.0f, 0x1.31b21p-63f, 0.0f,
     0.0f, 0x1.639862p-49f, 0.0f, 0x1.d0f34p-100f, 0.0f, 0.0f, 0.0f, 0x1.ad3cfcp-53f,
     0.0f, 0.0f, 0x1.d60d46p-7f, 0x1.cb2d12p-4f, 0x1.a586b2p-49f, 0.0f,
     0x1.a5d9a2p-94f, 0x1.3000c8p-32f, 0.0f, 0.0f, 0x1.25cd52p-62f, 0x1.a3440ap-68f,
     0.0f, 0.0f, 0x1.f77132p-7f, 0x1.1daa1ap-96f, 0.0f, 0.0f, 0x1.53db72p-29f, 0.0f,
     0x1.14e19ap-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.354818p-110f, 0.0f,
     0.0f, 0x1.a83b18p-65f, 0x1.4a58c8p-95f, 0.0f, 0.0f, 0x1.e1db64p-97f, 0.0f, 0.0f,
     0.0f, 0x1.c4955ap-46f, 0x1.911a56p-9f, 0x1.c02dbap-112f, 0x1.660dfep-102f, 0.0f,
     0x1.e21afep-122f, 0.0f, 0x1.f70fd6p-8f, 0.0f, 0.0f, 0.0f, 0x1.8d9e66p-55f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.57a3a6p-103f, 0x1.9870a8p-36f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e84e46p-64f, 0x1.22de6ap-7f, 0x1.af3c16p-51f, 0.0f,
     0x1.67ce28p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.97eea8p-107f, 0.0f, 0x1.6fafbep-74f,
     0x1.763b86p-60f, 0x1.93bf4p-5f, 0.0f, 0.0f, 0x1.926346p-90f, 0x1.1d732ap-58f,
     0x1.4bdfa6p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.70b776p-8f, 0x1.294286p-50f, 0.0f,
     0x1.76b29cp-53f, 0.0f, 0.0f, 0x1.5b97b2p-12f, 0.0f, 0.0f, 0.0f, 0x1.675978p-78f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.9d0874p-47f, 0.0f, 0.0f, 0.0f, 0x1.802bc6p-74f,
     0x1.c195b6p-73f, 0x1.5896a8p-61f, 0.0f, 0x1.7e4288p-73f, 0x1.fd22e6p-47f, 0.0f,
     0x1.b52dfep-16f, 0x1.a7dccep-81f, 0x1.04169p-56f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.92f876p-27f, 0x1.a40308p-66f, 0x1.0374dap-41f, 0x1p0f, 0.0f, 0x1.5b0986p-31f,
     0.0f, 0.0f, 0x1.495eb6p-3f, 0.0f, 0x1.f50934p-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.dd3258p-13f, 0x1.5fa16cp-82f, 0.0f, 0x1.234eecp-111f, 0x1.a97806p-74f,
     0x1.c7555p-3f, 0.0f, 0x1.cb41ccp-16f, 0.0f, 0x1.03c426p-39f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.8f07fcp-63f, 0.0f, 0.0f, 0x1.9b70f6p-106f, 0x1.de4ce4p-72f,
     0x1.679ea6p-88f, 0x1.b44616p-50f, 0x1.4a660cp-104f, 0x1.80dc6ap-44f, 0.0f,
     0x1.74770ep-24f, 0x1.b3c9a4p-76f, 0x1.74d1fp-10f, 0x1.1156d6p-50f,
     0x1.7f8494p-122f, 0.0f, 0.0f, 0.0f, 0x1.1761dap-29f, 0x1.7e7452p-9f,
     0x1.cfc12p-25f, 0x1.a73622p-117f, 0x1.f53cd6p-104f, 0x1.8d336ep-92f,
     0x1.e149bep-83f, 0.0f, 0x1.32c55ep-82f, 0x1.f86ad6p-22f, 0x1.8c0bc6p-90f,
     0x1.28316ap-34f, 0x1.727eaep-125f, 0x1.e9ef02p-64f, 0.0f, 0x1.7bb75cp-110f, 0.0f,
     0.0f, 0x1.190a7ep-73f, 0.0f, 0x1.a8f99cp-120f, 0x1.95c6d2p-96f, 0.0f,
     0x1.e97738p-89f, 0x1.178dfp-3f, 0.0f, 0x1.69cd0cp-86f, 0.0f, 0x1.08d1cap-59f,
     0x1.e0505p-76f, 0x1.afe0ecp-87f, 0.0f, 0.0f, 0x1.fa2dd8p-96f, 0x1.b7b60ap-98f,
     0.0f, 0.0f, 0x1.74976ep-48f, 0.0f, 0.0f, 0x1.edc178p-96f, 0x1.6b60d6p-3f,
     0x1.ec575p-103f, 0x1.f676e6p-99f, 0.0f, 0.0f, 0x1.b95846p-30f, 0x1.f22ef4p-90f,
     0x1.8b213cp-53f, 0.0f, 0x1.63aad2p-41f, 0.0f, 0x1.29e398p-90f, 0.0f,
     0x1.fe40b6p-43f, 0.0f, 0x1.84d91ap-120f, 0.0f, 0x1.41c018p-80f, 0x1.2a1968p-55f,
     0x1.329eeap-42f, 0x1.43c10ap-74f, 0.0f, 0.0f, 0x1.376d76p-4f, 0x1.b69728p-86f,
     0.0f, 0.0f, 0x1.b83cbp-6f, 0x1.1332e8p-69f, 0.0f, 0.0f, 0x1.f7c374p-28f, 0.0f,
     0x1.9c93bep-66f, 0.0f, 0x1.70b3b8p-114f, 0x1.7e32a4p-113f, 0x1.7a367ap-7f, 0.0f,
     0x1.d958ccp-19f, 0x1.f86b42p-77f, 0.0f, 0x1p0f, 0x1.d24d66p-27f, 0.0f, 0.0f,
     0x1.dfd1eap-55f, 0x1.7d7392p-110f, 0x1.d07544p-18f, 0.0f, 0.0f, 0x1.376554p-33f,
     0x1.e91512p-62f, 0.0f, 0x1.923556p-33f, 0x1.ea8ebcp-79f, 0.0f, 0.0f,
     0x1.7e36dap-117f, 0x1.c3ea38p-31f, 0x1.12eb34p-94f, 0x1.2f2908p-59f,
     0x1.b4ab7p-120f, 0.0f, 0.0f, 0x1.0e4492p-100f, 0x1.854b1p-80f, 0x1.559e9ap-12f,
     0.0f, 0x1.6e2698p-56f, 0.0f, 0x1.b3c5acp-83f, 0.0f, 0x1.22cbc2p-55f,
     0x1.05ea44p-87f, 0x1.518398p-46f, 0x1.cf365cp-71f, 0x1.8e3758p-86f,
     0x1.2a4058p-42f, 0.0f, 0x1.b137d8p-35f, 0.0f, 0.0f, 0x1.aa62c8p-73f,
     0x1.89cdb4p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.66a8c6p-112f, 0.0f, 0.0f, 0x1.9cb06ep-66f, 0.0f, 0x1.c48084p-33f,
     0x1.09232ep-23f, 0x1.82289ep-79f, 0x1.4480ccp-89f, 0.0f, 0x1.e1514cp-30f,
     0x1.64dd9cp-121f, 0.0f, 0x1.71386ap-122f, 0.0f, 0x1.8b4f98p-122f, 0.0f, 0.0f,
     0x1.c156e6p-93f, 0x1.d6b588p-17f, 0x1.1cac7ep-58f, 0x1.f21b44p-90f,
     0x1.bf8f7ep-39f, 0.0f, 0x1.dbbf8ap-86f, 0.0f, 0x1.3d78e8p-112f, 0x1.6c0456p-40f,
     0x1.3fd9b8p-84f, 0.0f, 0x1.97badep-111f, 0x1.34077ap-105f, 0x1.46ac24p-117f,
     0x1.0e215ep-16f, 0x1.987442p-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5deda2p-69f,
     0x1.392e06p-85f, 0.0f, 0.0f, 0.0f, 0x1.4b37c2p-100f, 0.0f, 0.0f, 0x1.911eb6p-4f,
     0.0f, 0x1.ced0ccp-63f, 0.0f, 0x1.f88d4ep-50f, 0.0f, 0x1.d8cc8cp-29f, 0.0f,
     0x1.642cbep-34f, 0x1.8b4e0ep-111f, 0x1.f9f892p-102f, 0.0f, 0.0f, 0x1.26956cp-91f,
     0x1.9fe1eap-103f, 0.0f, 0.0f, 0x1.4df8d6p-2f, 0.0f, 0x1.d83eacp-103f, 0.0f, 0.0f,
     0x1.02b506p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5871b6p-6f, 0x1.75c754p-16f,
     0x1.c3fd4cp-49f, 0.0f, 0x1.5b1efep-60f, 0.0f
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
            tmp1 = Sleef_finz_sqrtf8_u05kvx(tmp0);
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
    printf("Sleef_finz_sqrtf8_u05kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_finz_sqrtf8_u05kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
