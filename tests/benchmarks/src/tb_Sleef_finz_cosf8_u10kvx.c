/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_cosf8_u10kvx.c --function Sleef_finz_cosf8_u10kvx \
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
     0x1.bf8642p-21f, 0.0f, 0x1.2090ap-78f, 0x1.2719a2p-45f, 0x1.b2346ap-50f,
     0x1.40107ep-100f, 0.0f, 0x1.38d5f4p-66f, 0.0f, 0.0f, 0x1.8c151ap-76f,
     0x1.d4c87cp-43f, 0.0f, 0.0f, 0x1.e8eea8p-80f, 0x1.b03e84p-34f, 0.0f, 0.0f,
     0x1.9c052cp-92f, 0x1.2897c2p-15f, 0x1.9f4bcap-23f, 0.0f, 0x1.b7689ap-45f,
     0x1.137058p-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9f351p-98f, 0.0f, 0x1.1300acp-110f,
     0x1.1f5208p-72f, 0.0f, 0x1.2e9562p-47f, 0.0f, 0.0f, 0x1.7032e4p-17f, 0.0f,
     0x1.2b20b4p-85f, 0.0f, 0.0f, 0x1.9a464ep-7f, 0.0f, 0x1.d2e122p-24f,
     0x1.2b3d3cp-33f, 0.0f, 0.0f, 0x1.cfa29ap-40f, 0x1.1bd868p-109f, 0.0f, 0.0f,
     0x1.9a5f5ep-99f, 0x1.1ee1b8p-66f, 0.0f, 0.0f, 0x1.9146cap-31f, 0x1.3ac734p-52f,
     0x1.c7454ap-117f, 0.0f, 0x1.00ec2p-85f, 0x1.59e294p-79f, 0x1.a4eccp-35f,
     0x1.a0ea7cp-48f, 0x1.fe7796p-76f, 0x1.0b2e56p-75f, 0x1.3a69f8p-44f,
     0x1.891d5ap-82f, 0x1.918fdap-81f, 0.0f, 0.0f, 0.0f, 0x1.ef3846p-123f,
     0x1.f7afacp-70f, 0x1.25fee2p-84f, 0x1.ed2baep-14f, 0x1.a70e94p-96f, 0.0f,
     0x1.750f4ep-45f, 0x1.83e0e2p-1f, 0.0f, 0x1.26ef82p-22f, 0x1.806ec4p-78f,
     0x1.df713p-64f, 0.0f, 0x1.2d06e4p-77f, 0x1.8d6ea6p-98f, 0x1.4c3c38p-47f, 0.0f,
     0.0f, 0.0f, 0x1.16c8cp-103f, 0.0f, 0x1.43d324p-106f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4fcb98p-52f, 0.0f, 0x1.f22a62p-118f, 0.0f, 0x1.aa5278p-24f, 0.0f,
     0x1.0c9ea8p-2f, 0.0f, 0x1.92ac44p-54f, 0x1.5ba284p-47f, 0.0f, 0x1.e0069ep-4f,
     0x1.88299ap-14f, 0.0f, 0.0f, 0x1.ba1cfp-13f, 0x1.4e8854p-110f, 0x1.dee592p-62f,
     0x1.f85ad2p-43f, 0.0f, 0.0f, 0x1.c4a2f6p-100f, 0.0f, 0.0f, 0x1.906c5ap-79f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f942a6p-110f, 0x1.c62718p-7f, 0.0f, 0x1.068da8p-101f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.0adc8ep-78f, 0x1.b24b62p-115f, 0.0f, 0.0f, 0x1.618234p-20f,
     0x1.6ac5aap-124f, 0x1.712d72p-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.daf75ap-46f,
     0x1.ec0d9ap-66f, 0x1.5739acp-49f, 0.0f, 0.0f, 0.0f, 0x1.d34b28p-112f, 0.0f, 0.0f,
     0x1.2ae328p-37f, 0x1.58a8c2p-56f, 0x1.d9c8b4p-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8fa41ap-90f, 0x1.bfdebap-123f, 0x1.509294p-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a2c268p-27f, 0x1.5f9b0ap-62f, 0x1.491dap-4f, 0x1.4b2924p-58f,
     0x1.dc841cp-112f, 0.0f, 0x1.98e202p-34f, 0x1.19598ap-48f, 0.0f, 0x1.7bf3c4p-89f,
     0.0f, 0.0f, 0.0f, 0x1.f1db46p-13f, 0x1.18a88p-47f, 0x1.3b996p-116f,
     0x1.238bf2p-18f, 0x1.87ef12p-97f, 0.0f, 0.0f, 0.0f, 0x1.cfb202p-120f,
     0x1.9af22ep-20f, 0x1.36657cp-5f, 0.0f, 0.0f, 0x1.1f2198p-18f, 0x1.9ab3dep-114f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.9903c2p-123f, 0x1.3166d8p-88f, 0x1.36da54p-44f, 0.0f,
     0x1.0a11eap-44f, 0x1.3910d8p-90f, 0x1.592d48p-114f, 0x1.6386f4p-59f,
     0x1.11cb88p-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6c64fap-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.598672p-39f, 0x1.049c6cp-58f,
     0.0f, 0x1.e4a278p-86f, 0.0f, 0.0f, 0x1.74f948p-70f, 0x1.7c1638p-19f,
     0x1.c00b24p-111f, 0x1.51f5p-63f, 0x1.b4e5e6p-15f, 0x1.03869ep-26f, 0.0f, 0.0f,
     0x1.2c081ap-58f, 0x1.212d42p-67f, 0.0f, 0x1.ea95cap-79f, 0x1.dee296p-81f, 0.0f,
     0.0f, 0.0f, 0x1.31d576p-31f, 0.0f, 0.0f, 0x1.afed56p-78f, 0.0f, 0x1.f9a632p-112f,
     0.0f, 0.0f, 0x1.78213p-34f, 0x1.0e6a1p-104f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fb13fap-55f, 0.0f, 0x1.7ccffcp-47f, 0x1.2b904p-83f, 0x1.246fa2p-76f,
     0x1.f00c4ep-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ac9c6ap-112f, 0.0f,
     0x1.8bcc4p-108f, 0.0f, 0.0f, 0x1.7addaep-11f, 0x1.9b1e22p-110f, 0.0f,
     0x1.bcaecap-49f, 0.0f, 0.0f, 0x1.d59f18p-30f, 0x1.de6ac2p-10f, 0x1.d097fep-116f,
     0x1.3cce78p-83f, 0x1.35267ep-23f, 0x1.84c7a2p-15f, 0x1.7256acp-114f, 0.0f,
     0x1.1d036cp-34f, 0x1.f47d46p-53f, 0.0f, 0.0f, 0x1.626e1p-19f, 0.0f,
     0x1.6d2adep-95f, 0.0f, 0x1.d193bap-32f, 0.0f, 0.0f, 0x1.7d8a62p-114f, 0.0f, 0.0f,
     0.0f, 0x1.ee668cp-97f, 0.0f, 0.0f, 0.0f, 0x1.f42ac6p-75f, 0.0f, 0x1.d28048p-42f,
     0.0f, 0x1.f86ac8p-55f, 0.0f, 0.0f, 0.0f, 0x1.46616ap-81f, 0x1.1eca52p-62f, 0.0f,
     0.0f, 0x1.497652p-33f, 0.0f, 0.0f, 0x1.da72p-2f, 0.0f, 0x1.b6f276p-70f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.06b4f4p-65f, 0.0f, 0x1.80053ep-60f, 0x1.1ca924p-82f,
     0.0f, 0x1.547336p-106f, 0x1.7c59fep-11f, 0x1.8e95bcp-65f, 0x1.5746ep-111f,
     0x1.5da22p-36f, 0x1.cdeb1ep-42f, 0x1.728a6cp-113f, 0.0f, 0.0f, 0x1.ef24acp-99f,
     0x1.ed2136p-59f, 0x1.081d1cp-88f, 0x1.fcde1ap-99f, 0x1.5b710cp-24f,
     0x1.ac7508p-78f, 0x1.7eb054p-51f, 0.0f, 0x1.55b472p-84f, 0.0f, 0x1.4fca0ep-79f,
     0x1.8bbe4cp-54f, 0x1.766dbcp-53f, 0x1.89db0ap-29f, 0x1.cf4526p-17f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.323c5p-64f, 0.0f, 0.0f, 0x1.9f1f16p-118f, 0.0f, 0.0f,
     0x1.374acap-92f, 0.0f, 0x1.0e174ep-67f, 0.0f, 0.0f, 0.0f, 0x1.b2af34p-38f, 0.0f,
     0.0f, 0.0f, 0x1.b0b15ep-116f, 0.0f, 0x1.703db8p-101f, 0.0f, 0x1.0a49acp-64f,
     0.0f, 0.0f, 0x1.fe041ep-123f, 0.0f, 0x1.ad7438p-89f, 0x1.048854p-55f, 0.0f,
     0x1.7740ap-123f, 0.0f, 0x1.8b67c2p-71f, 0.0f, 0.0f, 0x1.1385c6p-73f, 0.0f,
     0x1.10e398p-92f, 0.0f, 0x1.023f6ep-41f, 0.0f, 0.0f, 0.0f, 0x1.6d2f14p-30f, 0.0f,
     0.0f, 0.0f, 0x1.6a3ef2p-26f, 0x1.6a764cp-71f, 0x1.3721cp-94f, 0x1.70a918p-87f,
     0x1.f5768ep-83f, 0.0f, 0.0f, 0x1.29bf16p-113f, 0x1.a950e4p-1f, 0x1.b96b3cp-10f,
     0.0f, 0x1.37d978p-48f, 0x1.2e73dcp-57f, 0x1.9e393ep-31f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.459af2p-108f, 0.0f, 0x1.b35b6ep-68f, 0x1.4fd13p-26f,
     0x1.3d3274p-116f, 0x1.4a567cp-62f, 0x1.255e2cp-107f, 0.0f, 0x1.d87faap-100f,
     0.0f, 0x1.4be4dap-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ab6a44p-109f, 0x1.7078a4p-120f, 0.0f, 0x1.9bec2ap-92f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.83acb2p-30f, 0x1.29c77ep-61f, 0.0f, 0.0f, 0x1.72e11p-82f,
     0.0f, 0.0f, 0x1.ce6222p-52f, 0x1.52c298p-9f, 0.0f, 0.0f, 0x1.9b81f8p-67f, 0.0f,
     0x1.078102p-98f, 0x1.c5bfdap-120f, 0x1.4bc9e6p-97f, 0.0f, 0x1.a79cecp-13f,
     0x1.40836cp-37f, 0.0f, 0x1.25e082p-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ed50fep-122f,
     0.0f, 0.0f, 0x1.9a49bcp-121f, 0x1.387d9p-22f, 0.0f, 0x1.b71c98p-105f, 0.0f,
     0x1.360334p-65f, 0.0f, 0x1.c7655ap-40f, 0.0f, 0.0f, 0x1.aa04cap-67f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.814b5cp-37f, 0.0f, 0x1.03651ap-87f, 0x1.d9e7a2p-75f, 0.0f,
     0x1.726678p-49f, 0.0f, 0x1.b81ceap-19f, 0.0f, 0x1.9f5f48p-3f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.fd9ff2p-96f, 0x1.883876p-43f, 0x1.9d066p-4f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c8cca4p-100f, 0.0f, 0.0f, 0.0f, 0x1.d0ad5ap-91f, 0.0f, 0x1.ee1c68p-99f,
     0x1.bd3764p-122f, 0x1.436a3ap-21f, 0x1.2d06a8p-41f, 0x1.60c512p-98f,
     0x1.c030e2p-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.38211ep-83f, 0x1.e7a26cp-41f,
     0x1.667ec4p-25f, 0.0f, 0.0f, 0.0f, 0x1.1400b8p-16f, 0x1.5504dcp-32f,
     0x1.97ca36p-23f, 0x1.252ca6p-48f, 0x1.0cb9c4p-110f, 0x1.1b3fdep-36f,
     0x1.87e19cp-8f, 0x1.2478dep-96f, 0x1.7ae3dap-7f, 0x1.b47eb4p-68f, 0.0f,
     0x1.751186p-72f, 0.0f, 0.0f, 0.0f, 0x1.1fd5bep-37f, 0x1.157fcep-85f,
     0x1.0a2828p-16f, 0.0f, 0x1.72b3a4p-88f, 0x1.f84ffp-35f, 0x1.c6b418p-82f, 0.0f,
     0.0f, 0.0f, 0x1.8592aep-16f, 0.0f, 0x1.e9f87p-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8ce2ep-7f, 0.0f, 0x1.f9c444p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.128a0ap-1f, 0.0f, 0x1.8db404p-34f, 0.0f, 0x1.c5db02p-39f, 0x1.9abc28p-5f,
     0x1.4de4fep-56f, 0.0f, 0.0f, 0x1.40e2fap-103f, 0x1.5cd122p-10f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.5e6e28p-42f, 0.0f, 0.0f, 0.0f, 0x1.56c184p-93f,
     0x1.8a3fbep-48f, 0x1.508966p-126f, 0.0f, 0.0f, 0x1.0c3b24p-14f, 0.0f, 0.0f,
     0x1.9a16cep-115f, 0.0f, 0x1.34a674p-104f, 0x1.ee0754p-102f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.8be32cp-9f, 0x1.2923f2p-24f, 0x1.16b0c6p-81f, 0x1.631618p-64f,
     0x1.5319dp-33f, 0x1.bd93cep-23f, 0x1.fae28cp-115f, 0.0f, 0.0f, 0x1.9f631cp-63f,
     0x1.05a222p-83f, 0.0f, 0.0f, 0x1.baeb4cp-95f, 0.0f, 0x1.d4468ap-4f,
     0x1.d573f6p-51f, 0.0f, 0.0f, 0x1.23b362p-26f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f78034p-124f, 0.0f, 0.0f, 0x1.b43b7ap-116f, 0x1.8e3e4ap-80f,
     0x1.9e469cp-103f, 0.0f, 0x1.8e2e64p-106f, 0.0f, 0x1.016a9cp-13f,
     0x1.36a99ep-113f, 0.0f, 0x1.fd7dd2p-79f, 0x1.986374p-53f, 0x1.d7c2dep-37f,
     0x1.b4157p-65f, 0.0f, 0.0f, 0x1.86bba2p-2f, 0.0f, 0.0f, 0x1.d432d2p-79f,
     0x1.54921ep-64f, 0x1.0dbaf2p-2f, 0.0f, 0x1.01b252p-102f, 0.0f, 0x1.4fa06ap-61f,
     0x1.ad5b18p-41f, 0.0f, 0.0f, 0x1.fa09b8p-30f, 0x1.a16afcp-41f, 0x1.d22974p-117f,
     0x1.c74cb8p-108f, 0.0f, 0x1.488e24p-6f, 0.0f, 0.0f, 0x1.1c0952p-39f, 0.0f,
     0x1p0f, 0x1.067d54p-111f, 0.0f, 0x1.7ac504p-123f, 0x1.bf418cp-103f,
     0x1.162d32p-94f, 0.0f, 0x1.cc566p-47f, 0.0f, 0x1.1ec548p-74f, 0.0f, 0.0f,
     0x1.dc256ap-23f, 0.0f, 0x1.b3cbb6p-28f, 0.0f, 0x1.dbce42p-64f, 0x1.e615a2p-65f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.2cb938p-118f, 0.0f, 0.0f, 0x1.c5f5bcp-68f, 0.0f,
     0x1.aa8902p-109f, 0.0f, 0x1.22fe1ap-15f, 0x1.0e626ap-79f, 0.0f, 0.0f, 0.0f,
     0x1.48aa8ep-61f, 0x1.5acf34p-12f, 0x1.f7b926p-118f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ede352p-67f, 0.0f, 0.0f, 0.0f, 0x1.edb304p-7f, 0.0f, 0x1.65d99ap-60f, 0.0f,
     0.0f, 0x1.18e23ep-14f, 0.0f, 0.0f, 0x1.8d1f52p-91f, 0.0f, 0x1.94f15ap-66f, 0.0f,
     0x1.587642p-98f, 0.0f, 0x1.7918b4p-107f, 0.0f, 0.0f, 0x1.8afe2ep-20f, 0.0f,
     0x1.72e8b2p-61f, 0x1.9c9d6ep-85f, 0x1.8b157ep-14f, 0x1.be1ebep-50f,
     0x1.ea849ap-65f, 0.0f, 0x1.eb6e64p-17f, 0x1.25a094p-9f, 0x1.385af6p-51f, 0.0f,
     0.0f, 0.0f, 0x1.47e176p-70f, 0x1.700fbep-90f, 0.0f, 0x1.e83f02p-117f, 0.0f,
     0x1.cf547ep-126f, 0x1.276c7ep-102f, 0x1.f126e8p-126f, 0.0f, 0x1.b4fd24p-112f,
     0x1.18cf8ap-107f, 0.0f, 0.0f, 0x1.b2fd4cp-57f, 0x1.8ccfecp-97f, 0x1.a1b154p-50f,
     0x1.64b714p-53f, 0x1.b4d5aep-81f, 0x1.71abep-126f, 0.0f, 0.0f, 0x1.e8d7dep-105f,
     0x1.8ba834p-26f, 0x1.d50a8ap-45f, 0x1.73ee14p-119f, 0.0f, 0x1.0e2c2cp-54f, 0.0f,
     0.0f, 0x1.846dd6p-32f, 0x1.6cb81ep-85f, 0.0f, 0.0f, 0.0f, 0x1.efe1e6p-92f, 0.0f,
     0.0f, 0x1.95aa12p-39f, 0x1.bdb582p-14f, 0.0f, 0x1.f0645p-91f, 0x1.64c9f4p-96f,
     0.0f, 0x1.318d48p-114f, 0.0f, 0x1.389f7p-7f, 0x1.a7f0e4p-125f, 0x1.d7ac22p-30f,
     0.0f, 0.0f, 0x1.4bb99p-19f, 0x1.f0df7cp-10f, 0x1.4a79f2p-26f, 0.0f, 0.0f,
     0x1.a8741cp-18f, 0.0f, 0x1.5d80c4p-87f, 0.0f, 0.0f, 0.0f, 0x1.0b3ddcp-23f, 0.0f,
     0x1.cadb04p-122f, 0x1.84a344p-52f, 0x1.db95a8p-118f, 0.0f, 0x1.dfb8bap-101f,
     0.0f, 0.0f, 0.0f, 0x1.d3b582p-41f, 0x1.dc1f36p-62f, 0x1.fcc32p-63f, 0.0f,
     0x1.c87164p-16f, 0.0f, 0x1.9f3802p-26f, 0x1.9ea088p-79f, 0x1.a68fcp-39f,
     0x1.6068dp-17f, 0x1.95ebcap-97f, 0x1.2da846p-40f, 0.0f, 0.0f, 0x1.4412bcp-80f,
     0x1.8175d4p-8f, 0x1.55aeacp-13f, 0.0f, 0.0f, 0x1.c741b4p-122f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ac0ad2p-1f, 0.0f, 0.0f, 0x1.ccc528p-52f, 0.0f, 0.0f, 0.0f,
     0x1.10a276p-79f, 0.0f, 0.0f, 0.0f, 0x1.3a391cp-83f, 0.0f, 0.0f, 0x1.39151ep-7f,
     0.0f, 0.0f, 0x1.62ac88p-39f, 0x1.34f9eep-94f, 0.0f, 0x1.203c7p-120f,
     0x1.bbd2fcp-19f, 0x1.493634p-124f, 0x1.7d0c28p-3f, 0x1.719d64p-82f,
     0x1.73cc34p-106f, 0x1.0ca4e4p-124f, 0.0f, 0.0f, 0x1.c52a9ep-94f, 0.0f,
     0x1.932c12p-5f, 0.0f, 0.0f, 0x1.63563cp-118f, 0.0f, 0.0f, 0x1.7d72c6p-28f, 0.0f,
     0x1.70b5acp-69f, 0x1.d2b6a6p-17f, 0.0f, 0x1.ebe894p-91f, 0.0f, 0.0f, 0.0f,
     0x1.6f1e8ep-17f, 0x1.fa2bf4p-57f, 0x1.aedf56p-108f, 0.0f, 0x1.002ecap-86f, 0.0f,
     0x1.4ad3ecp-124f, 0x1.330538p-11f, 0x1.607b3ep-8f, 0.0f, 0x1.d692a6p-13f,
     0x1.1d162p-116f, 0.0f, 0.0f, 0x1.08480ap-97f, 0.0f, 0.0f, 0x1.ec6e52p-17f,
     0x1.afbb32p-93f, 0x1.554528p-106f, 0.0f, 0x1.f295dcp-96f, 0.0f, 0.0f, 0.0f,
     0x1.bb298ap-44f, 0x1.07a0f2p-83f, 0.0f, 0x1.7d24a4p-95f, 0x1.0142e6p-85f,
     0x1.4fc5b6p-38f, 0.0f, 0.0f, 0.0f, 0x1.c817bcp-84f, 0.0f, 0x1.dcb17cp-102f, 0.0f,
     0x1.77d7cap-44f, 0.0f, 0x1.d1a3aep-31f, 0x1.7abf8ep-6f, 0.0f, 0.0f, 0.0f,
     0x1.b6f228p-101f, 0.0f, 0.0f, 0x1.bf38f6p-107f, 0x1.2f6252p-5f, 0x1.72d1f2p-94f,
     0.0f, 0.0f, 0x1.989f48p-16f, 0.0f, 0x1.e5aa42p-30f, 0x1.f0247ep-104f, 0.0f,
     0x1.07d65ep-75f, 0x1.c8ba0ep-60f, 0x1.e5fb46p-78f, 0x1.cdb8f4p-34f, 0.0f,
     0x1.c7e386p-64f, 0.0f, 0.0f, 0x1.0bab2ep-25f, 0x1.956e0ep-98f, 0x1.dfadf2p-97f,
     0x1.47ab56p-100f, 0x1.7c589ap-82f, 0x1.3edc68p-32f, 0x1.d97e0ap-87f, 0.0f, 0.0f,
     0x1.343d2p-119f, 0x1.64bf82p-99f, 0.0f, 0x1.eaecb2p-13f, 0.0f, 0x1.837564p-106f,
     0.0f, 0x1.76694ep-123f, 0x1.7ab506p-69f, 0.0f, 0x1.683c4ep-50f, 0.0f,
     0x1.7413a6p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7bfe04p-62f, 0.0f, 0.0f
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
            tmp1 = Sleef_finz_cosf8_u10kvx(tmp0);
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
    printf("Sleef_finz_cosf8_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_finz_cosf8_u10kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
