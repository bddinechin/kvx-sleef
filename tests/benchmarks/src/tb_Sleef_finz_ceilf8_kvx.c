/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_ceilf8_kvx.c --function Sleef_finz_ceilf8_kvx \
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
     0.0f, 0.0f, 0x1.5232acp-61f, 0x1.c616fep-125f, 0.0f, 0x1.2f61b6p-49f, 0.0f,
     0.0f, 0x1.fcd842p-30f, 0.0f, 0x1.61a066p-97f, 0x1.4eeda6p-2f, 0.0f,
     0x1.5199dp-20f, 0.0f, 0x1.a058f6p-16f, 0x1.1a0b44p-80f, 0.0f, 0.0f,
     0x1.2f78fcp-94f, 0x1.00e542p-12f, 0x1.98b3e4p-31f, 0.0f, 0x1.e79728p-77f,
     0x1.bd80eep-103f, 0x1.81a72cp-68f, 0.0f, 0.0f, 0x1.3ce48p-21f, 0x1.8d275ap-109f,
     0x1.5e2bdap-42f, 0.0f, 0x1.a4c96p-109f, 0.0f, 0.0f, 0x1.5202e6p-16f, 0.0f,
     0x1.538acep-125f, 0x1.01f6aap-78f, 0.0f, 0.0f, 0.0f, 0x1.edf1dp-102f, 0.0f, 0.0f,
     0x1.579628p-120f, 0.0f, 0.0f, 0x1.5d7eacp-79f, 0x1.308af6p-49f, 0x1.db234p-76f,
     0.0f, 0.0f, 0x1.2c6562p-112f, 0.0f, 0.0f, 0.0f, 0x1.666788p-94f,
     0x1.b98516p-117f, 0x1.af5056p-82f, 0x1.5ae2a8p-35f, 0x1.59864ep-30f,
     0x1.cc0666p-74f, 0.0f, 0x1.0ed4dep-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8607f4p-20f, 0x1.1126ccp-81f, 0x1.1f2708p-72f, 0x1.06626p-12f,
     0x1.c436bp-41f, 0x1.d3f29p-78f, 0x1.003dep-33f, 0.0f, 0x1.271bdp-43f,
     0x1.4501fap-59f, 0x1.a6078ep-21f, 0.0f, 0x1.0aebe2p-126f, 0x1.bfdb6ep-67f,
     0x1.aac08p-74f, 0.0f, 0x1.b7b4f6p-90f, 0x1.4927cap-31f, 0.0f, 0x1.aa0c3ap-42f,
     0.0f, 0x1.19dabap-12f, 0.0f, 0x1.24d114p-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1adb3cp-87f, 0.0f, 0x1.6e7c8ap-27f, 0.0f, 0x1.3ff9aep-37f, 0.0f, 0.0f, 0.0f,
     0x1.a0df3ap-56f, 0x1.2aa296p-83f, 0.0f, 0.0f, 0x1.a8b87ap-48f, 0x1.713d62p-59f,
     0x1.6e9412p-16f, 0.0f, 0.0f, 0x1.79b374p-76f, 0.0f, 0x1.1e04fp-12f,
     0x1.a8928ap-13f, 0.0f, 0.0f, 0x1.043a56p-107f, 0.0f, 0x1.d31c54p-7f, 0.0f,
     0x1.6d2926p-85f, 0x1.f2714cp-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.98ee4cp-11f, 0.0f,
     0.0f, 0x1.1ee378p-51f, 0.0f, 0x1.c0a8fcp-15f, 0x1.0a66e6p-76f, 0x1.218a3p-84f,
     0x1.c7b0ap-106f, 0.0f, 0.0f, 0x1.3e4f7cp-100f, 0.0f, 0.0f, 0.0f, 0x1.5eae1ap-26f,
     0x1.f2916ap-108f, 0.0f, 0.0f, 0x1.2164bap-93f, 0x1p0f, 0.0f, 0x1.d98734p-7f,
     0x1.7473aep-18f, 0x1.57210ap-123f, 0x1.2a8fe4p-107f, 0x1.afe79ap-30f, 0.0f, 0.0f,
     0x1.91b5dcp-108f, 0.0f, 0.0f, 0x1.6218b2p-90f, 0x1.279872p-47f, 0.0f,
     0x1.6cf632p-54f, 0.0f, 0.0f, 0x1.9cfa9p-106f, 0.0f, 0.0f, 0.0f, 0x1.7bb59cp-76f,
     0x1.6c6ff4p-123f, 0.0f, 0x1.dce016p-63f, 0.0f, 0x1.ace9fcp-102f, 0x1.802fd6p-60f,
     0x1.6033cp-52f, 0x1.e8cfdp-7f, 0.0f, 0x1.db8e98p-87f, 0x1.7fa386p-11f,
     0x1.5d3d42p-10f, 0x1.64a624p-68f, 0.0f, 0x1.330da4p-2f, 0.0f, 0x1.166c16p-78f,
     0x1.e43d28p-23f, 0x1.739118p-116f, 0x1.a98564p-11f, 0.0f, 0x1.5986eap-85f, 0.0f,
     0x1.55c508p-45f, 0.0f, 0x1.3eaebep-104f, 0.0f, 0.0f, 0x1.7c6bf8p-1f,
     0x1.4908c8p-30f, 0.0f, 0x1.20b87cp-71f, 0x1.3f00cap-22f, 0x1.856e32p-42f,
     0x1.222c72p-96f, 0x1.b7475ap-114f, 0x1.44be3cp-21f, 0x1.5d4508p-1f,
     0x1.bf0e5ep-64f, 0x1.8974f6p-79f, 0.0f, 0.0f, 0x1.6f775p-28f, 0.0f, 0.0f, 0.0f,
     0x1.e1d582p-1f, 0x1.53eb12p-36f, 0.0f, 0x1.b5038p-4f, 0.0f, 0x1.23d61ep-88f,
     0x1.c0a53ep-126f, 0.0f, 0x1.1d0306p-30f, 0.0f, 0x1.a3b9bep-110f, 0x1.127e6ep-73f,
     0x1.542c9ep-89f, 0x1.e7ab6ep-70f, 0.0f, 0x1.7b8952p-57f, 0.0f, 0x1.69c656p-124f,
     0x1.abcaa8p-44f, 0x1.712d46p-83f, 0x1.bc7e86p-75f, 0.0f, 0x1.5650a8p-86f, 0.0f,
     0x1.3d98dcp-63f, 0.0f, 0x1.375192p-58f, 0x1.0bdde4p-25f, 0.0f, 0x1.8110ccp-72f,
     0x1.ae5974p-63f, 0x1.5f6a6ap-16f, 0.0f, 0x1.89d9dep-99f, 0x1.dc0956p-107f, 0.0f,
     0.0f, 0x1.c63e14p-112f, 0.0f, 0x1.9e796ep-4f, 0x1.5d86p-53f, 0x1.0b1e4p-126f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f42206p-14f, 0.0f, 0x1.30164ap-33f, 0x1.ca8d8ap-97f,
     0x1.c7245p-107f, 0.0f, 0.0f, 0.0f, 0x1.b41f16p-117f, 0x1.d26a9cp-36f,
     0x1.53ba66p-8f, 0x1.1f6082p-62f, 0.0f, 0.0f, 0x1.ec97cap-74f, 0x1.60dd14p-80f,
     0.0f, 0.0f, 0.0f, 0x1.f27968p-70f, 0x1.574636p-79f, 0x1.5138aep-117f, 0.0f, 0.0f,
     0x1.8eeebap-80f, 0x1.07e4c4p-60f, 0x1.77350ep-29f, 0.0f, 0x1.efc51cp-46f, 0.0f,
     0.0f, 0.0f, 0x1.bbc9b4p-89f, 0.0f, 0x1.8b9332p-61f, 0x1.733a04p-124f,
     0x1.50dfeap-83f, 0.0f, 0x1.3c048cp-23f, 0.0f, 0.0f, 0x1.8069f6p-8f, 0.0f,
     0x1.12a67ap-61f, 0x1.ed8054p-7f, 0x1.849f02p-75f, 0.0f, 0x1.4f6ebep-46f, 0.0f,
     0.0f, 0x1.19c26cp-86f, 0.0f, 0x1.addd1cp-79f, 0.0f, 0x1.98648p-77f,
     0x1.9fc81cp-28f, 0.0f, 0x1.87223cp-123f, 0x1.65a478p-68f, 0.0f, 0.0f,
     0x1.88d56p-110f, 0x1.d5a0ap-22f, 0x1.74bdfp-60f, 0.0f, 0x1.1810a6p-46f, 0.0f,
     0.0f, 0.0f, 0x1.0df916p-65f, 0.0f, 0x1.5c038cp-117f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.11724ep-6f, 0.0f, 0.0f, 0x1.4c09cp-105f, 0x1.1ffe3ap-64f, 0x1.82e6e8p-94f,
     0x1.8fa35cp-44f, 0x1.ea9412p-99f, 0x1.1fcc7p-85f, 0x1.1f52aap-24f, 0.0f, 0.0f,
     0x1.a9012cp-39f, 0.0f, 0.0f, 0.0f, 0x1.035f66p-45f, 0x1.dea3e6p-27f, 0.0f,
     0x1.c7ca0cp-14f, 0.0f, 0x1.dc6488p-34f, 0x1.fb7b9ap-125f, 0x1.6b7904p-52f,
     0x1.507c3ap-23f, 0.0f, 0x1.8734bap-126f, 0x1.367282p-117f, 0.0f, 0x1.83842ap-90f,
     0x1.32336ep-53f, 0.0f, 0x1.7b874p-36f, 0x1.4cd29ep-118f, 0.0f, 0.0f,
     0x1.782ba2p-83f, 0x1.d43ba8p-94f, 0.0f, 0x1.138a76p-95f, 0.0f, 0x1.6af2fcp-112f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bb7c12p-50f, 0x1.e93914p-71f, 0x1.b6dbb8p-100f, 0.0f, 0x1.446ce4p-14f,
     0x1.a69016p-52f, 0.0f, 0.0f, 0x1.46ce5ep-10f, 0x1.e4c61ep-43f, 0x1.2e95a4p-107f,
     0.0f, 0.0f, 0x1.71d574p-42f, 0.0f, 0.0f, 0x1.d76fdcp-104f, 0x1.d6ba12p-30f, 0.0f,
     0.0f, 0x1.7e0d5ap-44f, 0x1.326bbep-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4d09b4p-105f, 0.0f, 0x1.d0446ep-33f, 0x1.ba3f1p-14f, 0.0f, 0.0f, 0.0f,
     0x1.49ae48p-92f, 0.0f, 0x1.53d3bp-63f, 0x1.69be84p-32f, 0.0f, 0.0f,
     0x1.558f62p-105f, 0.0f, 0x1.b5f0bap-60f, 0x1.fb8f6ep-113f, 0x1.9c4d74p-50f,
     0x1.bdf2b8p-18f, 0.0f, 0.0f, 0x1.36826ep-19f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0cc498p-49f, 0x1.e0e74cp-59f, 0x1.059e54p-68f, 0.0f, 0x1.f0d4bp-9f, 0.0f,
     0x1.a4e21ep-64f, 0x1.e41f28p-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.257e4ep-32f, 0.0f,
     0x1.73be7p-23f, 0.0f, 0x1.1f1caap-50f, 0.0f, 0x1.aaceap-107f, 0x1.fd12d8p-53f,
     0x1.0546acp-97f, 0x1.659b82p-5f, 0.0f, 0.0f, 0.0f, 0x1.4e8342p-104f, 0.0f, 0.0f,
     0.0f, 0x1.60ee32p-102f, 0x1.12ca02p-43f, 0x1.f3913ap-105f, 0.0f, 0x1.359d58p-33f,
     0.0f, 0x1.eef7e8p-26f, 0.0f, 0.0f, 0.0f, 0x1.402216p-16f, 0x1.2667b2p-35f,
     0x1.26370cp-38f, 0x1.bef5f6p-47f, 0.0f, 0x1.936cd8p-117f, 0x1.ddap-37f,
     0x1.ecfa8ap-107f, 0.0f, 0.0f, 0.0f, 0x1.ef0214p-57f, 0x1.d02d6p-19f, 0.0f, 0.0f,
     0x1.b667bp-53f, 0x1.93aaa2p-39f, 0.0f, 0x1.4d6cfcp-122f, 0x1.f28ea6p-96f, 0.0f,
     0.0f, 0x1.98854p-115f, 0x1.42d622p-63f, 0x1.812e0ap-41f, 0x1.2be778p-77f,
     0x1.e95ecp-6f, 0x1.69b154p-81f, 0x1.925818p-88f, 0.0f, 0.0f, 0x1.9279d2p-5f,
     0.0f, 0.0f, 0x1.9ed638p-69f, 0x1.28b5b2p-75f, 0x1.fcef5cp-66f, 0.0f,
     0x1.d9445cp-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0933dap-62f, 0x1.57c77ap-52f, 0.0f,
     0.0f, 0x1.d19346p-17f, 0.0f, 0x1.e27576p-88f, 0.0f, 0.0f, 0.0f, 0x1.94260ap-94f,
     0x1.dc792ep-60f, 0.0f, 0x1.3a4e0ap-97f, 0x1.e47018p-3f, 0x1.ef0788p-12f, 0.0f,
     0.0f, 0x1.82b052p-33f, 0.0f, 0x1.2e5e56p-109f, 0.0f, 0.0f, 0x1.683aaep-14f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.af686p-71f, 0x1.be8e7cp-53f, 0.0f, 0x1.9bd942p-45f, 0.0f,
     0x1.0df99p-74f, 0x1.833f5cp-15f, 0.0f, 0.0f, 0x1.5de6e8p-61f, 0x1.a60556p-77f,
     0.0f, 0.0f, 0x1.e4042ep-104f, 0.0f, 0.0f, 0x1.cbc564p-78f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.189b8ep-76f, 0x1.248c7p-54f, 0.0f, 0.0f, 0x1.f2320cp-35f,
     0x1.5e5fa8p-115f, 0x1.348108p-25f, 0.0f, 0.0f, 0.0f, 0x1.36c568p-97f, 0.0f,
     0x1.c3cbbap-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.704ca8p-84f, 0x1.99accap-41f, 0.0f,
     0.0f, 0x1.d068f6p-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f7db48p-20f, 0x1.78a3dp-20f,
     0x1.193ec4p-74f, 0.0f, 0x1.ff4418p-77f, 0.0f, 0.0f, 0x1.7b258ep-4f,
     0x1.cb8cfp-4f, 0x1.ceda4p-34f, 0.0f, 0x1.91a796p-105f, 0x1.58ad26p-100f,
     0x1.e18d02p-108f, 0x1.9c612ap-43f, 0x1.5855bep-14f, 0x1.880f26p-60f, 0.0f,
     0x1.59f0ep-86f, 0.0f, 0.0f, 0.0f, 0x1.0d638ep-23f, 0x1.fee7a2p-42f,
     0x1.b9b2bp-67f, 0.0f, 0.0f, 0.0f, 0x1.9b2d7p-14f, 0x1.921caep-119f, 0.0f,
     0x1.4269c8p-83f, 0.0f, 0.0f, 0.0f, 0x1.3aa0e2p-56f, 0x1.cf7c5p-85f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.40c09ep-41f, 0x1.bde136p-88f, 0x1.8e4bf6p-57f, 0x1.28cc9p-69f,
     0x1.f39ee2p-85f, 0x1.476962p-8f, 0x1.471ab2p-70f, 0x1.cd6aa8p-114f, 0.0f,
     0x1.1a666ep-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ba3832p-113f, 0x1.fabd9ap-113f,
     0.0f, 0.0f, 0x1.642604p-116f, 0.0f, 0x1.6f9666p-4f, 0x1.ddbc98p-41f,
     0x1.f345fcp-91f, 0x1.55612p-47f, 0x1.e65ccap-89f, 0x1.02e326p-12f, 0.0f, 0.0f,
     0x1.9960e4p-68f, 0x1.adbbb8p-45f, 0x1.517cf6p-9f, 0x1.2041dp-86f, 0.0f, 0.0f,
     0x1.1c94cp-24f, 0.0f, 0x1.cc509cp-53f, 0.0f, 0.0f, 0x1.d2ad54p-123f,
     0x1.ae91c2p-58f, 0x1.c47e18p-17f, 0.0f, 0x1.9a9486p-126f, 0.0f, 0x1.6b1dp-35f,
     0.0f, 0x1.bde2bp-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2e2c5ep-84f, 0.0f,
     0x1.62debep-56f, 0x1.463eaap-102f, 0.0f, 0.0f, 0x1.89da2cp-22f, 0.0f, 0.0f, 0.0f,
     0x1.d0df3ap-11f, 0x1.9cf12ap-4f, 0x1.daa36ap-81f, 0.0f, 0x1.78dc92p-70f,
     0x1.40b82p-101f, 0x1.833a6p-28f, 0x1.5808b2p-83f, 0x1.8261bep-50f,
     0x1.c8693ep-17f, 0.0f, 0x1.90a4b6p-105f, 0x1.83c20cp-59f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.31e5bp-54f, 0x1.072f34p-1f, 0x1.ab7f7cp-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f40526p-23f, 0x1.2e693ap-125f, 0.0f, 0x1.956d18p-29f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.25fd22p-32f, 0.0f, 0.0f, 0.0f, 0x1.aee49ep-61f, 0.0f, 0x1.9d6b9cp-14f,
     0x1.010282p-124f, 0x1.cb1678p-1f, 0.0f, 0x1.5c1b0ep-10f, 0.0f, 0.0f,
     0x1.647502p-96f, 0x1.4dd08p-70f, 0.0f, 0x1.57734p-61f, 0.0f, 0x1.29591ap-28f,
     0x1.54ddecp-7f, 0.0f, 0.0f, 0x1.c231d8p-109f, 0x1.704cf8p-58f, 0x1.843d04p-62f,
     0.0f, 0x1.5d324ep-92f, 0x1.a7e796p-90f, 0x1.93c55ep-111f, 0.0f, 0x1.08fb36p-68f,
     0x1.eb1f9ap-60f, 0x1.c750e8p-62f, 0x1.509496p-79f, 0x1.cbbf8p-42f, 0x1p0f, 0.0f,
     0.0f, 0x1.7552e6p-1f, 0x1.22de4p-124f, 0x1.967aaap-74f, 0x1.ff383ep-9f, 0.0f,
     0x1.94331cp-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.70220ap-123f, 0.0f, 0.0f,
     0x1.4fb9c2p-112f, 0x1.f67092p-106f, 0.0f, 0x1.f3a81ap-66f, 0.0f, 0.0f,
     0x1.c2b8a4p-22f, 0x1.6b16c4p-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.75e226p-44f, 0.0f,
     0x1.7625ep-75f, 0.0f, 0.0f, 0.0f, 0x1.f96ffp-53f, 0.0f, 0.0f, 0.0f,
     0x1.4eb8cap-95f, 0.0f, 0.0f, 0.0f, 0x1.45ad42p-73f, 0x1.48d9a4p-22f, 0.0f,
     0x1.24f6d4p-86f, 0.0f, 0x1.0a50e6p-35f, 0x1.3931a8p-88f, 0.0f, 0x1.2a212p-25f,
     0.0f, 0.0f, 0x1.247d3cp-37f, 0x1.e8fa92p-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b8dcb4p-6f, 0.0f, 0x1.93838ap-74f, 0x1.caf38p-10f, 0x1.f7509ep-24f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e7aa3cp-92f, 0.0f, 0.0f, 0.0f, 0x1.85e792p-41f, 0.0f,
     0x1.c6bbcp-10f, 0x1.5d635cp-1f, 0.0f, 0.0f, 0x1.17d092p-34f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.726e84p-11f, 0x1.d658a2p-82f, 0x1.12877ap-59f, 0x1.6a0b1p-60f,
     0x1.6293d2p-101f, 0x1.a160ep-3f, 0.0f, 0x1.c0ea5p-17f, 0x1.1c11bcp-18f,
     0x1.93cd4p-119f, 0x1.cd0a72p-52f, 0.0f, 0.0f, 0.0f, 0x1.575d7ep-86f, 0.0f,
     0x1.dfbd0ap-95f, 0x1.d6b618p-118f, 0.0f, 0x1.6d3b8ap-64f, 0.0f, 0x1.db8ee8p-29f,
     0x1.1d1508p-48f, 0x1.723c2ep-45f, 0x1.44ada6p-95f, 0x1.55897ep-27f,
     0x1.c371f4p-82f, 0x1.4caa32p-8f, 0x1.f808bcp-2f, 0.0f, 0.0f, 0x1.ed6d56p-64f,
     0x1.694d12p-74f, 0x1.6cef02p-122f, 0.0f, 0x1.903e18p-115f, 0x1.03e1bp-114f,
     0x1.d5a3a6p-40f, 0.0f, 0x1.79dc66p-72f, 0x1.231a36p-1f, 0.0f, 0x1.5f8d48p-72f,
     0.0f, 0x1.2e71a6p-7f, 0.0f, 0.0f, 0x1.af2348p-29f, 0x1.66e48ap-1f,
     0x1.f46522p-44f, 0x1.82043p-8f, 0x1.3af2eap-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c1430ap-51f, 0x1.955044p-58f, 0x1.3561dcp-117f, 0x1.c2ed96p-13f, 0.0f,
     0x1.f86fe8p-114f, 0.0f, 0x1.b39384p-106f, 0.0f, 0.0f, 0.0f, 0x1.035dd4p-30f,
     0x1.4a29f4p-38f, 0.0f, 0x1.7770b8p-1f, 0.0f, 0x1.31e984p-69f, 0.0f, 0.0f,
     0x1.911f6ap-35f, 0.0f, 0x1.18ad78p-22f, 0.0f, 0.0f, 0x1.fe405p-114f,
     0x1.0bed66p-34f, 0x1.e6de9p-36f, 0x1.249c92p-28f, 0x1.58dc9cp-78f, 0.0f, 0.0f,
     0x1.3178d2p-113f, 0.0f, 0x1.6b9832p-76f, 0.0f, 0x1.05f8c6p-39f, 0x1.153df8p-65f,
     0x1.c0838cp-126f, 0.0f, 0x1.bec8a8p-26f, 0x1.b3cb4ep-59f, 0.0f, 0.0f,
     0x1.2e95a4p-27f, 0.0f, 0x1.1f165p-114f, 0.0f, 0.0f, 0.0f, 0x1.58829ep-119f, 0.0f,
     0.0f, 0x1.aa29a4p-71f, 0x1.c87a26p-60f, 0x1.5b1d84p-35f, 0x1.1e0daap-124f, 0.0f,
     0x1.fad184p-76f, 0x1.cf27c4p-26f, 0.0f, 0.0f, 0.0f, 0x1.1ab4dcp-22f, 0.0f, 0.0f,
     0x1.a43d56p-19f, 0x1.8e597ap-38f, 0x1.51775p-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c5ad5p-33f, 0x1.f87612p-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.93ef6ep-14f, 0.0f,
     0x1.ce41acp-59f, 0x1.8bbb1cp-65f, 0x1.3f62bp-113f, 0x1.ebd402p-49f, 0.0f,
     0x1.1026fep-52f
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
            tmp1 = Sleef_finz_ceilf8_kvx(tmp0);
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
    printf("Sleef_finz_ceilf8_kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_finz_ceilf8_kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
