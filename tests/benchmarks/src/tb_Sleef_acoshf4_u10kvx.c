/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_acoshf4_u10kvx.c --function Sleef_acoshf4_u10kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 4 --function-input-vector-size 4 --bench \
 *     --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float4_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float4_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0x1.20d4e2p-46f, 0x1.e678a8p-43f, 0.0f, 0x1.35c8dep-110f, 0x1.ee2ed6p-121f,
     0.0f, 0.0f, 0.0f, 0x1.9b9202p-36f, 0x1.1d5b92p-2f, 0.0f, 0.0f, 0x1.d30e64p-58f,
     0x1.841becp-24f, 0x1.424c84p-67f, 0.0f, 0x1.59baeap-18f, 0.0f, 0.0f, 0.0f,
     0x1.637958p-57f, 0x1.ee743ep-38f, 0x1.a47bb8p-20f, 0.0f, 0x1.b49c78p-12f, 0.0f,
     0x1.5143a6p-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8a7abcp-104f, 0.0f, 0.0f,
     0x1.a13466p-93f, 0x1.4805aep-65f, 0x1.da2988p-64f, 0.0f, 0x1.64043ap-23f,
     0x1.29541p-91f, 0.0f, 0x1.ef6598p-72f, 0.0f, 0x1.f54b46p-122f, 0x1.15d588p-58f,
     0.0f, 0x1.32a532p-100f, 0.0f, 0x1.329f4cp-99f, 0.0f, 0x1.30215p-103f,
     0x1.666acep-38f, 0.0f, 0x1.eae392p-2f, 0x1.c51188p-68f, 0.0f, 0x1.b9c7cp-122f,
     0x1.a3b1a4p-46f, 0.0f, 0.0f, 0.0f, 0x1.ce992p-71f, 0x1.1d6d0ap-124f, 0.0f,
     0x1.232484p-78f, 0.0f, 0x1.d62702p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fef75ap-70f,
     0x1.1f991p-112f, 0.0f, 0.0f, 0x1.77b212p-29f, 0x1.08848ep-121f, 0.0f,
     0x1.c4eb8cp-16f, 0.0f, 0x1.afef24p-4f, 0x1.a58cep-96f, 0x1.005b1p-85f,
     0x1.4a58c4p-103f, 0x1.5b2eep-59f, 0.0f, 0.0f, 0.0f, 0x1.b6c6dcp-118f,
     0x1.d93f8ap-71f, 0.0f, 0x1.70ba4cp-109f, 0.0f, 0x1.88fa2ep-38f, 0.0f,
     0x1.c79822p-98f, 0x1.0afd58p-88f, 0.0f, 0.0f, 0x1.f91ffep-34f, 0x1.0a81c4p-40f,
     0x1.ceb2c4p-51f, 0.0f, 0.0f, 0.0f, 0x1.b57c38p-114f, 0x1.42748cp-52f, 0.0f, 0.0f,
     0.0f, 0x1.1ab0d6p-52f, 0x1.872c86p-52f, 0x1.ec08bcp-114f, 0x1.7f6c2ep-61f,
     0x1.3eaf4ap-88f, 0x1.b149b4p-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.977172p-58f,
     0x1.f01b6ep-87f, 0x1.09b1bcp-102f, 0x1.88309p-54f, 0x1.f51a62p-1f, 0.0f, 0.0f,
     0x1.66821p-124f, 0x1.70bcc2p-85f, 0.0f, 0.0f, 0x1.d4d3a8p-74f, 0.0f, 0.0f, 0.0f,
     0x1.58eb64p-118f, 0.0f, 0.0f, 0x1.e82926p-17f, 0x1.d81576p-1f, 0x1.e8e0f4p-109f,
     0x1.17e0bp-75f, 0x1.40861p-29f, 0.0f, 0x1.03dfdep-110f, 0x1.32b9aep-47f,
     0x1.ef9d14p-60f, 0x1.84b186p-74f, 0x1.11c9fap-75f, 0x1.442e4ap-12f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.02ce06p-92f, 0.0f, 0.0f, 0x1.7ccd0ap-38f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a827b6p-120f, 0x1.3c4b72p-125f, 0x1.87497ep-105f, 0x1.ef735cp-78f, 0.0f,
     0x1.480c56p-20f, 0x1.03827p-80f, 0x1.ebaefcp-11f, 0x1.f4463ap-50f,
     0x1.64574ep-54f, 0x1.eda834p-117f, 0.0f, 0x1.ba47dap-54f, 0x1.e5567ap-40f, 0.0f,
     0x1.dd0184p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8fc63ep-64f, 0x1.a0ccdep-17f,
     0x1.04f7fep-8f, 0x1.56df18p-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3f2816p-52f, 0.0f,
     0x1.570deep-81f, 0.0f, 0x1.223b6ap-105f, 0.0f, 0x1.6a8004p-114f, 0.0f,
     0x1.5831bep-43f, 0.0f, 0.0f, 0x1.d6128ap-33f, 0.0f, 0x1.2af0f2p-71f, 0.0f,
     0x1.cd1c1cp-87f, 0.0f, 0.0f, 0.0f, 0x1.2d7e9ap-51f, 0.0f, 0x1.001beep-47f, 0.0f,
     0x1.81f0fap-126f, 0.0f, 0.0f, 0x1.b41d62p-67f, 0.0f, 0.0f, 0x1.8b4738p-74f,
     0x1.769cb2p-61f, 0x1.5cd53cp-74f, 0.0f, 0x1.e57c96p-68f, 0.0f, 0x1.f4a8ap-111f,
     0x1.5812b4p-52f, 0.0f, 0.0f, 0x1.a44fap-57f, 0x1.2c5e9ap-35f, 0x1.538f52p-26f,
     0x1.e00ba8p-19f, 0.0f, 0x1.b161eap-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.339b88p-93f, 0x1.cb7a0ap-111f, 0x1.99ec46p-33f, 0.0f, 0.0f, 0x1.5f9d16p-86f,
     0.0f, 0x1.ea66d2p-36f, 0x1.fc8086p-116f, 0x1.029022p-120f, 0x1.efb0cap-41f, 0.0f,
     0.0f, 0.0f, 0x1.61d4f2p-14f, 0.0f, 0x1.5f9a32p-51f, 0x1.24ffecp-106f,
     0x1.8d110ap-88f, 0x1.14887ep-92f, 0.0f, 0.0f, 0x1.195a16p-13f, 0x1.36af3cp-103f,
     0.0f, 0.0f, 0.0f, 0x1.61d9d4p-29f, 0.0f, 0x1.10c4c6p-45f, 0.0f, 0.0f,
     0x1.a2a9eep-101f, 0x1.37f116p-9f, 0.0f, 0x1.a10cf2p-24f, 0.0f, 0x1.8f46aap-95f,
     0x1.22f3bcp-30f, 0x1.8b352p-101f, 0x1.74b728p-64f, 0x1.da0f46p-126f, 0.0f, 0.0f,
     0x1.a86a8ep-62f, 0x1.707fa8p-20f, 0x1.e63b7ep-117f, 0x1.0aef76p-122f,
     0x1.7bbb7ep-81f, 0x1.0ea6dp-69f, 0.0f, 0.0f, 0x1.96a9c4p-63f, 0.0f,
     0x1.2c5b2ep-68f, 0x1.580cc2p-112f, 0x1.0ee3bep-110f, 0.0f, 0.0f, 0x1.91e93ep-96f,
     0.0f, 0.0f, 0x1.1f36a2p-124f, 0x1.b42afap-62f, 0.0f, 0.0f, 0x1.b5c056p-12f,
     0x1.e2336ep-88f, 0.0f, 0x1.d10ca6p-11f, 0x1p0f, 0x1.2d09b6p-101f, 0.0f,
     0x1.52eaa4p-77f, 0x1.95ca56p-58f, 0x1.12da22p-65f, 0x1.b29576p-22f, 0.0f, 0.0f,
     0.0f, 0x1.f9fbaep-1f, 0x1.11dcfp-80f, 0x1.358028p-67f, 0x1.649004p-119f, 0.0f,
     0x1.c99d44p-21f, 0x1.2259a2p-11f, 0x1.37a87ap-78f, 0x1.ba28f8p-14f, 0.0f, 0.0f,
     0.0f, 0x1.8ce56ep-46f, 0x1.c71128p-2f, 0x1.728d1ap-113f, 0.0f, 0.0f, 0.0f,
     0x1.78a84p-40f, 0x1.9f3856p-98f, 0.0f, 0.0f, 0x1.e5b0fep-60f, 0.0f, 0.0f,
     0x1.eefa46p-73f, 0x1.29b0dcp-21f, 0x1.8e5776p-71f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7abc7p-27f, 0.0f, 0x1.78f714p-93f, 0x1.9ad6dep-55f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.dbe6d6p-87f, 0x1p0f, 0x1.913c02p-91f, 0x1.33652ap-34f, 0.0f,
     0x1.528586p-111f, 0.0f, 0x1.416412p-8f, 0x1.54a706p-5f, 0.0f, 0.0f,
     0x1.6e6f22p-91f, 0.0f, 0x1.c052b2p-45f, 0x1.367edp-40f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.87b4c6p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.225c8p-41f, 0x1.4d2eb2p-38f, 0.0f,
     0x1.fde31cp-52f, 0x1.a4e5f8p-37f, 0.0f, 0x1.7e6822p-12f, 0x1.9c881ep-31f,
     0x1.7e72b2p-102f, 0.0f, 0x1.48e102p-27f, 0x1.f19a04p-10f, 0.0f, 0x1.4100dp-108f,
     0.0f, 0x1.bc7dc8p-31f, 0x1.4e49a2p-5f, 0.0f, 0x1.47666ap-27f, 0.0f, 0.0f,
     0x1.d14d5ap-55f, 0.0f, 0.0f, 0x1.af1fdcp-7f, 0x1.dcf2d2p-120f, 0x1.342268p-8f,
     0x1.5c056ap-39f, 0.0f, 0x1.ae9a96p-11f, 0.0f, 0.0f, 0x1.f2acc6p-53f,
     0x1.5213ecp-64f, 0x1.2a2eacp-2f, 0x1.567e74p-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f1a6e4p-26f, 0x1.be6de4p-108f, 0x1.42554cp-124f, 0x1.48fcfp-109f, 0.0f, 0.0f,
     0x1.1fd708p-83f, 0.0f, 0.0f, 0x1.bffd7ap-71f, 0.0f, 0x1.bbdb76p-49f, 0.0f, 0.0f,
     0.0f, 0x1.c3e53ap-70f, 0.0f, 0x1.ff214cp-98f, 0x1.edcf78p-50f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c4cbdp-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.404e4cp-75f,
     0x1.5ae61ap-17f, 0.0f, 0x1.523566p-89f, 0x1.cb3722p-17f, 0x1.e59c64p-123f, 0.0f,
     0x1.6bc6p-11f, 0.0f, 0x1.612d58p-67f, 0.0f, 0x1.a3bb2cp-49f, 0.0f, 0.0f, 0.0f,
     0x1.cb56cep-61f, 0.0f, 0x1.b31972p-66f, 0.0f, 0x1.03870cp-70f, 0.0f,
     0x1.1b22c2p-9f, 0x1.61b7fap-73f, 0x1.47c116p-17f, 0x1.54eb54p-84f,
     0x1.61921ep-34f, 0x1.812edcp-124f, 0x1.8dc9bp-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b61cf6p-113f, 0.0f, 0x1.6b44f6p-25f, 0x1.88a356p-84f, 0.0f,
     0x1.f73fdcp-77f, 0x1.00f87cp-83f, 0.0f, 0x1.899174p-64f, 0x1.2a7d78p-78f,
     0x1.f6332ep-20f, 0.0f, 0x1.7681eap-92f, 0.0f, 0x1.ff0afap-109f, 0x1.d9a42p-14f,
     0x1.e13988p-40f, 0x1.6fb79ap-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9d38e8p-50f,
     0.0f, 0.0f, 0x1.0a9ab4p-87f, 0x1.70a00ep-64f, 0x1.d62538p-95f, 0x1.31565p-126f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.bfc28p-92f, 0.0f, 0.0f, 0x1.b7464ep-47f, 0.0f,
     0x1.cc9fa4p-1f, 0x1.bf21dap-51f, 0.0f, 0.0f, 0.0f, 0x1.53b32ep-84f,
     0x1.bf27fp-76f, 0x1.fa4b9cp-68f, 0x1.f1e0f2p-18f, 0x1.bffd4p-50f, 0.0f,
     0x1.cde38cp-103f, 0.0f, 0x1.0cb802p-91f, 0x1.99d014p-65f, 0.0f, 0x1.173eaap-102f,
     0x1.b82a54p-93f, 0x1.28d3b8p-83f, 0.0f, 0.0f, 0x1.154702p-117f, 0.0f,
     0x1.076c1ap-87f, 0.0f, 0x1.6bdcf6p-46f, 0.0f, 0x1.2aeeaep-41f, 0x1.5066e4p-54f,
     0.0f, 0x1.de5bb2p-11f, 0x1.af5e4cp-118f, 0.0f, 0.0f, 0x1.692de4p-106f,
     0x1.4e3e1cp-37f, 0.0f, 0.0f, 0x1.a98de2p-85f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6ef768p-4f, 0x1.c3b0ccp-50f, 0x1.99d22ap-104f, 0x1.7f6562p-41f,
     0x1.cd54fep-46f, 0x1.076eep-20f, 0x1.08b25ep-73f, 0.0f, 0x1.120d2cp-104f,
     0x1.99e8fp-113f, 0.0f, 0.0f, 0x1.ffa13ap-15f, 0.0f, 0.0f, 0.0f, 0x1.306ddap-26f,
     0.0f, 0.0f, 0.0f, 0x1.5a36dap-58f, 0.0f, 0.0f, 0x1.6fe426p-91f, 0x1.4994fep-80f,
     0.0f, 0x1.795fa8p-111f, 0.0f, 0x1.b81ae4p-79f, 0.0f, 0x1.67e5a6p-6f,
     0x1.a1aef8p-64f, 0.0f, 0.0f, 0x1.17d60cp-47f, 0x1.3365fap-71f, 0.0f,
     0x1.2c295ep-100f, 0.0f, 0x1.f09f32p-86f, 0x1.91a5b2p-108f, 0.0f, 0x1.d4ac78p-64f,
     0.0f, 0x1.969b62p-46f, 0.0f, 0x1.553126p-53f, 0x1.4e2f06p-42f, 0x1.2ec73ap-36f,
     0.0f, 0.0f, 0x1.f0ed94p-98f, 0x1.471ea8p-3f, 0x1.005886p-7f, 0x1.09353p-10f,
     0.0f, 0.0f, 0x1.ad2254p-30f, 0x1.c184aep-94f, 0x1.811ed4p-126f, 0x1.70239p-17f,
     0x1.cae38ep-98f, 0x1.d8a34ap-121f, 0.0f, 0.0f, 0x1.b30c64p-76f, 0x1.bcdf9cp-122f,
     0.0f, 0x1.31bd2cp-101f, 0x1.34045p-51f, 0x1.58d9bep-44f, 0.0f, 0x1.91d0a2p-21f,
     0x1.e073cep-15f, 0.0f, 0x1.79c06p-81f, 0.0f, 0.0f, 0x1.486046p-123f, 0.0f, 0.0f,
     0x1.c1ed6p-125f, 0.0f, 0.0f, 0x1.a8a3b6p-36f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6532dcp-34f, 0.0f, 0.0f, 0x1.9d3e42p-87f, 0x1.267c4ap-21f, 0x1.0456cap-75f,
     0x1.abf342p-85f, 0x1.a0a3c6p-51f, 0x1.c65f22p-85f, 0.0f, 0x1.37fcecp-53f, 0.0f,
     0x1.9df256p-45f, 0x1.b33c64p-13f, 0.0f, 0x1.b91b46p-76f, 0.0f, 0x1.294ba2p-89f,
     0x1.46b858p-23f, 0.0f, 0x1.dc16bep-89f, 0.0f, 0x1.b6544ap-115f, 0x1.7de4cap-72f,
     0.0f, 0x1.6de70cp-121f, 0x1.476bc8p-30f, 0.0f, 0.0f, 0x1.4b7692p-58f, 0.0f,
     0x1.7f76e2p-93f, 0x1.80a8c2p-83f, 0.0f, 0.0f, 0.0f, 0x1.123eep-69f, 0.0f,
     0x1.33292cp-62f, 0x1.271ddep-101f, 0x1.7c04e2p-24f, 0x1.f43386p-63f,
     0x1.e0cbaep-88f, 0.0f, 0x1.940d38p-36f, 0x1.04b7b8p-61f, 0.0f, 0x1.f24368p-36f,
     0.0f, 0x1.49642cp-22f, 0.0f, 0x1.f18bd6p-108f, 0x1.6d0e34p-77f, 0x1.3771cap-98f,
     0.0f, 0.0f, 0x1.8995c2p-56f, 0.0f, 0x1.3d8382p-77f, 0.0f, 0x1.23a7bep-9f, 0.0f,
     0x1.b5404cp-13f, 0.0f, 0.0f, 0x1.408f1cp-115f, 0x1.1123dcp-75f, 0.0f,
     0x1.7006c2p-123f, 0x1.0e7a06p-41f, 0x1.720e3p-49f, 0x1.186f1p-109f,
     0x1.3e0ef4p-113f, 0x1.e7a1c8p-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d99a66p-119f,
     0.0f, 0.0f, 0.0f, 0x1.1a277p-50f, 0.0f, 0x1.fc4ef8p-87f, 0.0f, 0x1.f0059cp-123f,
     0x1.ea371p-1f, 0.0f, 0.0f, 0x1.41e638p-112f, 0.0f, 0x1.a6569ap-18f,
     0x1.245b2ap-83f, 0.0f, 0.0f, 0x1.65b786p-52f, 0.0f, 0.0f, 0.0f, 0x1.77422ep-44f,
     0x1.5b12eep-12f, 0x1.930c64p-51f, 0.0f, 0.0f, 0x1.46998ap-86f, 0.0f,
     0x1.9b9c0ap-82f, 0x1.62cd54p-48f, 0x1.443fe2p-14f, 0.0f, 0.0f, 0x1.79caeap-47f,
     0.0f, 0.0f, 0x1.86042p-49f, 0x1.a8eff4p-71f, 0.0f, 0.0f, 0.0f, 0x1.812864p-122f,
     0.0f, 0.0f, 0x1.6ae7ep-93f, 0.0f, 0x1.bf63eep-125f, 0x1.4adcacp-11f, 0.0f, 0.0f,
     0x1.31f30ep-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.89f642p-125f, 0.0f, 0x1.a1ac4ep-112f,
     0.0f, 0x1.2c85aap-12f, 0x1.a2f09ap-30f, 0x1.8a2ea4p-27f, 0x1.cff812p-14f, 0.0f,
     0.0f, 0.0f, 0x1.f69eaap-11f, 0x1.ac609cp-97f, 0.0f, 0x1.2c1fcep-16f,
     0x1.d6a348p-57f, 0.0f, 0.0f, 0x1.0d3dbep-26f, 0x1.e3bb0ep-64f, 0.0f,
     0x1.05fd74p-38f, 0.0f, 0.0f, 0x1.be55bap-12f, 0x1.2045ap-36f, 0x1.481796p-15f,
     0x1.41b82ap-18f, 0.0f, 0.0f, 0x1.48fbf4p-46f, 0.0f, 0x1.38bfe4p-106f,
     0x1.8c437p-4f, 0x1.701bbcp-99f, 0.0f, 0.0f, 0x1.538bdep-33f, 0.0f, 0.0f,
     0x1.92bc2ap-64f, 0x1.d15ed8p-78f, 0.0f, 0x1.61543ep-76f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.fc8d7ap-100f, 0x1.b9770ap-30f, 0x1.ad9fccp-94f, 0.0f, 0x1.cf234ep-116f,
     0.0f, 0x1.5a6a18p-75f, 0x1.c3fbe4p-20f, 0x1.c3a02cp-44f, 0.0f, 0.0f,
     0x1.7014aap-73f, 0x1.49f842p-47f, 0x1.54a61ep-79f, 0.0f, 0.0f, 0x1.7db11cp-20f,
     0x1.4bbc44p-98f, 0.0f, 0x1.2c4f2ap-40f, 0.0f, 0x1.20eaaep-125f, 0x1.0d991cp-50f,
     0x1.df23bep-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7467c4p-64f, 0.0f, 0x1.5a5a42p-84f,
     0x1.22214ap-93f, 0.0f, 0x1.63ba98p-122f, 0.0f, 0x1.a09298p-98f, 0x1.3e7a1p-40f,
     0.0f, 0.0f, 0.0f, 0x1.901808p-47f, 0x1.dc1cfep-17f, 0x1.4fc5cep-89f,
     0x1.2c0392p-34f, 0.0f, 0.0f, 0.0f, 0x1.777d24p-59f, 0.0f, 0.0f, 0x1.f4f7fep-98f,
     0x1.048baap-117f, 0x1.a2d284p-18f, 0x1.931a64p-20f, 0.0f, 0x1.04c7e4p-56f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.3c0f9ap-105f, 0.0f, 0x1.8d45c8p-58f, 0.0f, 0x1.4426ecp-81f,
     0.0f, 0x1.9238c6p-96f, 0x1.91479ep-27f, 0x1.40e85cp-68f, 0.0f, 0x1.b1fdbp-30f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ae2e16p-29f, 0.0f, 0.0f, 0x1.6f602cp-118f,
     0x1.8600dap-94f, 0.0f, 0.0f, 0.0f, 0x1.f7ea2ap-120f, 0.0f, 0x1.b514e4p-124f,
     0.0f, 0x1.0479c4p-63f, 0.0f, 0x1.1578e8p-55f, 0x1.450fd8p-64f, 0.0f, 0.0f,
     0x1.db6b38p-32f, 0.0f, 0x1.67f35p-96f, 0x1.bc29a8p-4f, 0x1.42a7f8p-116f, 0.0f,
     0x1.d96cbcp-114f, 0x1.aed8dap-65f, 0.0f, 0x1.a07486p-95f, 0x1.c1d42p-94f,
     0x1.051f98p-18f, 0x1.89b0d2p-74f, 0.0f, 0x1.a18e92p-29f, 0.0f, 0x1.6530fp-109f,
     0x1.776d62p-59f, 0.0f, 0x1.281e66p-89f, 0x1.628624p-82f, 0x1.a6f6fep-108f,
     0x1.47a78cp-74f, 0x1.23b30ep-55f, 0x1.399762p-12f, 0x1.c18426p-73f,
     0x1.f0def2p-41f, 0x1.bc42f6p-108f, 0.0f, 0.0f, 0x1.a9bbe2p-34f, 0.0f, 0.0f, 0.0f,
     0x1.f0e31ep-33f, 0x1.b24848p-58f, 0.0f, 0.0f, 0.0f, 0x1.09134ap-100f,
     0x1.24a788p-107f, 0.0f, 0.0f, 0x1.129898p-12f, 0x1.0ebad2p-101f,
     0x1.5b355cp-119f, 0.0f, 0x1.9bea0ep-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bdaedep-73f,
     0x1.f8c942p-116f, 0.0f, 0x1.27a70ep-13f, 0x1.293288p-122f, 0.0f, 0.0f,
     0x1.c14b26p-48f, 0x1.f726aep-33f, 0x1.fc0b8p-31f, 0.0f, 0x1.c5c9dep-41f, 0.0f,
     0.0f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_float4_t global_bench_acc;
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
        ml_float4_t local_acc;
        int32_t i;
        ml_float4_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1004));){
            ml_float4_t tmp0;
            ml_float4_t tmp1;
            ml_float4_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_acoshf4_u10kvx(tmp0);
            memcpy(((ml_float4_t*)(external_bench_wrapper_output_table+ i)), &(tmp1), 16);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(4);
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
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_acoshf4_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_acoshf4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
