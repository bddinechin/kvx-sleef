/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_tanf8_u35kvx.c --function Sleef_tanf8_u35kvx --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary32 --vector-size 8 \
 *     --function-input-vector-size 8 --bench --no-embedded-bin --target kv3
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
     0x1.54c372p-125f, 0.0f, 0.0f, 0.0f, 0x1.48bd0ap-57f, 0x1.08743p-78f, 0.0f, 0.0f,
     0.0f, 0x1.5cbf16p-46f, 0x1.8f0c56p-17f, 0.0f, 0x1.3ac5e6p-111f, 0x1.912744p-47f,
     0x1.31cafap-79f, 0x1.5a31d2p-2f, 0x1.778b68p-112f, 0x1.f475d6p-57f, 0.0f,
     0x1.26d042p-111f, 0.0f, 0x1.470a46p-1f, 0x1.7fc97ap-103f, 0x1.f9d976p-126f, 0.0f,
     0x1.eee33ep-94f, 0x1.910c06p-1f, 0x1.f62152p-82f, 0x1.299a42p-84f, 0.0f,
     0x1.6560a2p-39f, 0x1.d94fdap-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2118fp-91f,
     0.0f, 0x1.e496e6p-91f, 0.0f, 0.0f, 0.0f, 0x1.b4e142p-1f, 0x1.05e676p-9f,
     0x1.133d32p-86f, 0.0f, 0x1.136864p-94f, 0x1.299a88p-29f, 0.0f, 0x1.48c638p-36f,
     0x1.88d818p-75f, 0.0f, 0.0f, 0.0f, 0x1.c8757cp-81f, 0x1.0bfc5ep-19f,
     0x1.98f42ap-94f, 0x1.202394p-25f, 0x1.8c6728p-123f, 0x1.9c929p-52f, 0.0f,
     0x1.d60c42p-102f, 0x1.d00cd4p-82f, 0x1.7929fp-47f, 0x1.d835b2p-97f, 0.0f,
     0x1.9be834p-29f, 0x1.78b752p-1f, 0x1.27c1acp-113f, 0x1.1bc684p-73f,
     0x1.3185acp-34f, 0.0f, 0.0f, 0x1.4b823cp-23f, 0x1.62fb4ap-100f, 0.0f,
     0x1.4f9882p-53f, 0.0f, 0x1.672a28p-43f, 0.0f, 0x1.40b638p-30f, 0x1.f32c3ap-40f,
     0x1.d2a8cep-44f, 0x1.599764p-11f, 0x1.33219p-111f, 0x1.446cfep-55f,
     0x1.36cff2p-66f, 0.0f, 0.0f, 0x1.1878a8p-37f, 0x1.1bc75ep-97f, 0.0f,
     0x1.54c112p-124f, 0x1.f8f9dap-86f, 0.0f, 0x1.a3404p-63f, 0x1.60bdd6p-88f,
     0x1.e238dap-82f, 0.0f, 0.0f, 0x1.d6c46p-79f, 0x1.e35364p-15f, 0.0f,
     0x1.733216p-38f, 0x1.94975cp-46f, 0x1.ef6f1p-33f, 0x1.1084a2p-5f, 0.0f,
     0x1.c59acep-5f, 0x1.11d38p-118f, 0x1.a98e16p-15f, 0x1.2011c2p-71f,
     0x1.8f8942p-91f, 0x1.029256p-75f, 0.0f, 0x1.aaa086p-49f, 0.0f, 0x1.8bf214p-60f,
     0.0f, 0x1.2ac3e8p-60f, 0.0f, 0x1.14759cp-114f, 0.0f, 0x1.d8020ep-93f, 0.0f,
     0x1.3c6984p-49f, 0.0f, 0x1.5e04eap-87f, 0.0f, 0x1.840d84p-92f, 0.0f, 0.0f,
     0x1.fbf298p-49f, 0x1.879eap-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c95bd8p-117f, 0.0f,
     0x1.db328ep-116f, 0x1.280c4cp-125f, 0.0f, 0x1.4a43d4p-68f, 0x1.189284p-117f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c563cap-37f, 0.0f, 0.0f, 0x1.4484dap-95f,
     0x1.2d6b1p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bf75cp-43f, 0x1.f243d6p-28f,
     0x1.c499b6p-87f, 0x1.33503cp-7f, 0.0f, 0x1.9fa94p-49f, 0.0f, 0.0f,
     0x1.15944ap-123f, 0.0f, 0x1.296d78p-74f, 0.0f, 0x1.46cdaap-61f, 0x1.3ad646p-31f,
     0.0f, 0x1.e1eb6p-27f, 0x1.4ae75ep-51f, 0x1.b2127cp-16f, 0.0f, 0x1.499cc6p-118f,
     0x1.d8d1f6p-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7962c8p-53f, 0.0f, 0x1.a67222p-123f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.da9decp-88f, 0x1.793428p-87f, 0.0f, 0x1.3688bap-16f,
     0x1.83179ap-42f, 0x1.7e74d2p-63f, 0.0f, 0.0f, 0.0f, 0x1.d7004cp-13f,
     0x1.4fde84p-8f, 0x1.59143p-66f, 0.0f, 0x1.02dc24p-112f, 0.0f, 0.0f, 0.0f,
     0x1.706cb8p-117f, 0.0f, 0.0f, 0x1.2d79dap-25f, 0.0f, 0.0f, 0x1.58a736p-29f, 0.0f,
     0x1.95fdcap-44f, 0x1.81cb5ap-22f, 0.0f, 0.0f, 0x1.8eaf68p-17f, 0x1.30bb0cp-32f,
     0.0f, 0.0f, 0x1.2cca1ep-80f, 0x1.1f8416p-19f, 0.0f, 0.0f, 0x1.9cae52p-30f,
     0x1.ae0a24p-70f, 0x1.1e9a4cp-118f, 0x1.f36cbcp-85f, 0x1.9c3ed2p-98f, 0.0f,
     0x1.9a4f48p-18f, 0.0f, 0.0f, 0x1.7aded8p-72f, 0x1.e3fd4p-94f, 0.0f, 0.0f, 0.0f,
     0x1.97e5p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.31ded4p-68f, 0.0f, 0x1.c84496p-98f,
     0x1.f8293p-91f, 0x1.320418p-99f, 0x1.45c652p-54f, 0x1.25e858p-43f, 0.0f,
     0x1.bd468cp-115f, 0.0f, 0.0f, 0x1.4b474cp-119f, 0x1.360284p-20f, 0x1.f741acp-75f,
     0.0f, 0.0f, 0x1.c09388p-21f, 0x1.d0712ap-87f, 0.0f, 0.0f, 0.0f, 0x1.a9bee8p-119f,
     0x1.63f984p-110f, 0x1.adda18p-37f, 0.0f, 0x1.cf95f6p-48f, 0x1.ac06b4p-61f, 0.0f,
     0x1.f5f986p-115f, 0.0f, 0x1.60030cp-122f, 0x1.45af34p-116f, 0x1.07ab6ep-117f,
     0.0f, 0x1.6a7ff8p-59f, 0.0f, 0.0f, 0x1.43d248p-83f, 0.0f, 0x1.611a3p-44f,
     0x1.9f2b1cp-1f, 0x1.d4046p-85f, 0x1.80c624p-100f, 0.0f, 0.0f, 0x1.4bc594p-126f,
     0.0f, 0.0f, 0.0f, 0x1.7a8cf4p-39f, 0x1.beaecap-22f, 0x1.6f36dp-64f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b04c58p-120f, 0.0f, 0x1.d17922p-2f, 0x1.df8acap-52f, 0x1.f7cc7ep-44f,
     0x1.ce879ep-11f, 0x1.35207cp-93f, 0.0f, 0.0f, 0x1.56bd3ap-71f, 0.0f,
     0x1.49effcp-63f, 0x1.45739cp-19f, 0.0f, 0.0f, 0x1.89f87p-109f, 0x1.fc32bp-124f,
     0x1.98e132p-28f, 0.0f, 0x1.a7215p-54f, 0x1.9ef464p-111f, 0x1.4a6cc4p-55f,
     0x1.4bebbp-88f, 0x1.dddf0cp-46f, 0.0f, 0x1.83917ap-111f, 0.0f, 0x1.df2c4ep-87f,
     0.0f, 0x1.9f09aap-1f, 0x1.68082ep-20f, 0.0f, 0x1.34f51ap-96f, 0x1.9b61f8p-122f,
     0.0f, 0.0f, 0.0f, 0x1.113266p-8f, 0.0f, 0.0f, 0.0f, 0x1.889fa4p-81f,
     0x1.0f7058p-37f, 0x1.37485p-40f, 0.0f, 0.0f, 0x1.5fa98cp-6f, 0x1.3a0596p-14f,
     0x1.2152cep-20f, 0.0f, 0x1.7a62f8p-102f, 0.0f, 0x1.053824p-102f, 0.0f,
     0x1.56192ap-88f, 0.0f, 0x1.a0e8ccp-122f, 0x1.80ee06p-126f, 0x1.499214p-88f,
     0x1.fa20acp-89f, 0x1.c5f142p-94f, 0x1.d3c86p-34f, 0.0f, 0x1.6f463cp-12f,
     0x1.68942cp-62f, 0x1.6a1bp-101f, 0x1.ca8018p-34f, 0.0f, 0x1.356a44p-117f,
     0x1.9ea8c2p-9f, 0x1.440abep-78f, 0.0f, 0x1.03a462p-22f, 0x1.d9bc6p-104f, 0.0f,
     0x1.6be0c8p-95f, 0x1.0f972ep-52f, 0x1p0f, 0.0f, 0x1.de5318p-15f, 0.0f, 0.0f,
     0x1.7aa5d8p-51f, 0.0f, 0.0f, 0x1.d2ef3ep-3f, 0x1.ba6c06p-104f, 0x1.1bfeb2p-27f,
     0x1.64394ep-55f, 0x1.0e1b2p-1f, 0x1.89eb98p-124f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ac0f64p-16f, 0x1.d7e7fep-75f, 0x1.73daa2p-64f, 0.0f, 0.0f, 0x1.b13ab2p-31f,
     0x1.609bfp-85f, 0x1.d36aa4p-40f, 0.0f, 0x1.6dfbep-56f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.78d662p-65f, 0.0f, 0.0f, 0x1.c39c26p-37f, 0x1.5449bp-118f,
     0x1.5c97cap-95f, 0x1.6371dep-19f, 0.0f, 0x1.3c59c8p-116f, 0.0f, 0.0f,
     0x1.297af2p-73f, 0x1.2b127ap-86f, 0.0f, 0x1.e3922ep-4f, 0x1.e9c6dep-112f, 0.0f,
     0x1.20640ep-71f, 0x1.60076p-23f, 0.0f, 0.0f, 0.0f, 0x1.149f36p-60f, 0.0f, 0.0f,
     0x1.304104p-65f, 0.0f, 0x1.03d64ep-92f, 0x1.8d2afep-5f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.751a16p-118f, 0x1.43aecp-100f, 0.0f, 0.0f, 0x1.22ebe6p-2f, 0x1.01b37ap-124f,
     0.0f, 0.0f, 0.0f, 0x1.b8ef7ep-22f, 0x1.00866cp-103f, 0x1.94d112p-96f, 0.0f,
     0x1.b96e58p-25f, 0.0f, 0.0f, 0.0f, 0x1.7002fep-121f, 0.0f, 0.0f, 0.0f,
     0x1.130ec4p-67f, 0.0f, 0.0f, 0.0f, 0x1.5a4d8ep-125f, 0x1.a4ddfcp-34f,
     0x1.82d85p-36f, 0x1.3be506p-83f, 0.0f, 0x1.75e4fp-75f, 0x1.55ed06p-14f,
     0x1.8238ecp-112f, 0x1.aabb9p-112f, 0x1.8a2b7cp-27f, 0x1.41f6fap-61f,
     0x1.820c1ap-52f, 0.0f, 0x1.da15d4p-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1a8822p-54f,
     0.0f, 0x1.349d2ap-79f, 0x1.cc70c6p-85f, 0x1.5549c2p-39f, 0x1.1f373cp-114f,
     0x1.1ee424p-92f, 0.0f, 0x1.42ca2ap-31f, 0.0f, 0x1.dfa9eep-56f, 0x1.22bdb2p-88f,
     0x1.0d2bdp-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3086f2p-74f, 0.0f, 0.0f,
     0x1.9d421cp-67f, 0.0f, 0x1.814452p-107f, 0.0f, 0.0f, 0x1.2c9aeep-3f, 0.0f, 0.0f,
     0x1.50c96cp-83f, 0.0f, 0.0f, 0.0f, 0x1.c2485ap-61f, 0x1.18fb08p-100f, 0.0f,
     0x1.394d82p-67f, 0.0f, 0.0f, 0x1.06c3e4p-35f, 0x1.efb28ap-60f, 0.0f,
     0x1.c3398ap-109f, 0.0f, 0x1.18c64ap-103f, 0.0f, 0.0f, 0.0f, 0x1.308b0cp-95f,
     0x1.cd1b72p-95f, 0.0f, 0x1.dd38aap-125f, 0.0f, 0.0f, 0x1.617058p-14f,
     0x1.76060ap-57f, 0x1.5525c4p-10f, 0x1.c6083p-39f, 0x1.51544cp-52f, 0.0f, 0.0f,
     0x1.54f0aep-49f, 0x1.709c16p-101f, 0x1p0f, 0x1.8d89dep-43f, 0x1.ec02c6p-118f,
     0x1.d95c34p-25f, 0x1.99088cp-116f, 0x1.888148p-84f, 0.0f, 0.0f, 0x1.8eef1p-50f,
     0x1.93d108p-122f, 0.0f, 0x1.4d6896p-41f, 0.0f, 0.0f, 0x1.334accp-42f,
     0x1.e9ab1p-76f, 0.0f, 0x1.631842p-117f, 0.0f, 0.0f, 0x1.8f4052p-98f,
     0x1.21411ep-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e014a2p-113f,
     0x1.36cae4p-119f, 0x1.cbd854p-2f, 0.0f, 0.0f, 0x1.604c6cp-37f, 0x1.b965dcp-102f,
     0.0f, 0.0f, 0x1.a2150cp-50f, 0x1.43725p-2f, 0x1.004546p-55f, 0x1.7fa56ap-56f,
     0.0f, 0x1.1e10c4p-51f, 0x1.995678p-93f, 0x1.10a444p-46f, 0.0f, 0x1.ad62f6p-106f,
     0x1.330deap-57f, 0x1.fb0294p-19f, 0x1.689d8p-37f, 0.0f, 0.0f, 0x1.d6927p-99f,
     0.0f, 0.0f, 0x1.4f6e3ep-46f, 0.0f, 0.0f, 0x1.034234p-41f, 0x1.63bd72p-93f, 0.0f,
     0x1.a57c94p-77f, 0x1.38a658p-31f, 0.0f, 0x1.63f9e2p-80f, 0x1.0986e8p-12f, 0.0f,
     0.0f, 0.0f, 0x1.02e70cp-33f, 0.0f, 0x1.6b5174p-67f, 0.0f, 0.0f, 0.0f,
     0x1.665706p-91f, 0x1.c60d48p-99f, 0.0f, 0x1.a57224p-26f, 0x1.fe051p-72f, 0.0f,
     0x1.03da9ep-48f, 0x1.978b1p-67f, 0x1.537132p-107f, 0x1.6d8e9ap-70f,
     0x1.2997fap-73f, 0x1.459b9ap-6f, 0x1.93c3e4p-16f, 0x1.986472p-56f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.bcc53ap-29f, 0.0f, 0x1.3f65bep-122f, 0.0f, 0x1.83539ap-93f,
     0x1.119966p-27f, 0x1.9ebfd8p-31f, 0x1.87119ap-125f, 0x1.b61cccp-93f, 0.0f, 0.0f,
     0.0f, 0x1.b3e5a2p-78f, 0x1.b37a4cp-36f, 0x1.87845cp-77f, 0.0f, 0.0f, 0.0f,
     0x1.5c1dbcp-100f, 0x1.fa90c6p-110f, 0.0f, 0.0f, 0x1.9dffd4p-85f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.176daap-79f, 0.0f, 0.0f, 0x1.187428p-31f, 0.0f, 0.0f,
     0x1.4d852ep-53f, 0.0f, 0x1.1e170cp-20f, 0.0f, 0x1.f4aad8p-45f, 0.0f,
     0x1.bcc392p-27f, 0x1.92c988p-110f, 0.0f, 0.0f, 0x1.c3f448p-28f, 0x1.cf0794p-77f,
     0x1.915574p-103f, 0x1.5f9cd4p-103f, 0.0f, 0x1.c271f6p-113f, 0x1.5ffd4ap-62f,
     0x1.0a46b6p-105f, 0x1.806c7cp-102f, 0x1.b7877p-12f, 0.0f, 0.0f, 0x1.e3b89p-125f,
     0x1.3e935ep-98f, 0x1.0986f8p-12f, 0x1.18e38ap-61f, 0x1.35919ep-91f, 0.0f, 0.0f,
     0.0f, 0x1.d13956p-104f, 0x1.d57054p-50f, 0.0f, 0x1.a5c858p-91f, 0.0f,
     0x1.942514p-33f, 0.0f, 0x1.075ff4p-110f, 0x1.df88dp-101f, 0.0f, 0x1.1d67f8p-42f,
     0x1.318a0ep-35f, 0.0f, 0.0f, 0.0f, 0x1.563182p-56f, 0x1.f8de4ap-30f,
     0x1.f3d05cp-44f, 0x1.276126p-47f, 0.0f, 0x1.b41e34p-21f, 0x1.0fafc6p-23f, 0.0f,
     0.0f, 0x1.75afecp-126f, 0.0f, 0x1.055682p-33f, 0.0f, 0x1.b0946cp-59f,
     0x1.7858a4p-39f, 0.0f, 0x1.83ae2ep-116f, 0.0f, 0x1.3dad0ap-126f, 0x1.baf212p-37f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.24fb7cp-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.08342ap-41f, 0x1.2574b8p-125f, 0x1.661cc4p-75f, 0x1.4df54ep-35f,
     0x1.f51be8p-35f, 0.0f, 0.0f, 0x1.490f3ep-2f, 0x1.a5a72p-38f, 0x1.7596c8p-50f,
     0x1.5fdb5ap-2f, 0x1.b34dfep-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a9c8a8p-10f,
     0x1.84566ep-92f, 0x1.4612b8p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.750dc4p-4f,
     0x1.a4f82ap-52f, 0x1.76e0cep-81f, 0x1.7ef676p-86f, 0.0f, 0.0f, 0x1.b7f2cep-31f,
     0.0f, 0x1.0a9a6ap-15f, 0.0f, 0.0f, 0x1.9725dep-16f, 0.0f, 0x1.fb7878p-89f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.570ec6p-120f, 0x1.1352aap-30f, 0x1.60e12cp-26f,
     0x1.ca1d9ep-60f, 0.0f, 0x1.cd028p-80f, 0x1.f1bbf8p-6f, 0x1.4fc45ap-102f, 0.0f,
     0x1.99d508p-6f, 0x1.0310c6p-108f, 0x1.f1d56p-88f, 0x1.885e78p-24f, 0.0f, 0.0f,
     0x1.65e9cp-86f, 0x1.460c0ap-114f, 0x1.37725cp-96f, 0.0f, 0x1.fbc994p-13f,
     0x1.3b242cp-62f, 0.0f, 0x1.de795ep-58f, 0x1.27d5b4p-15f, 0.0f, 0x1.903878p-63f,
     0.0f, 0.0f, 0.0f, 0x1.4be642p-59f, 0x1.9b0916p-39f, 0.0f, 0x1.be565ap-115f,
     0x1.6e1b86p-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a234ecp-93f, 0.0f,
     0x1.c1bfp-45f, 0x1.e2fef2p-79f, 0.0f, 0.0f, 0.0f, 0x1.4ee4c2p-107f,
     0x1.7c9a3ap-101f, 0x1.85753cp-111f, 0.0f, 0x1.1b5f32p-98f, 0x1.f7c7eap-96f,
     0x1.f8c97ap-121f, 0x1.51c7f4p-8f, 0.0f, 0.0f, 0x1.533798p-2f, 0x1.93c98cp-12f,
     0.0f, 0x1.e2f83ep-100f, 0.0f, 0x1.12d772p-51f, 0x1.09a36p-34f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.1ba5dp-86f, 0x1.6ca082p-109f, 0x1.1ca4d2p-38f, 0x1.96673cp-1f, 0.0f,
     0x1.d79b5ap-88f, 0.0f, 0x1.03603p-43f, 0x1.b97e32p-54f, 0.0f, 0x1.e6a572p-103f,
     0.0f, 0x1.b79c44p-73f, 0x1.d15f62p-56f, 0.0f, 0.0f, 0.0f, 0x1.c28a2ep-80f,
     0x1.cab7dap-118f, 0x1.8e81dep-124f, 0.0f, 0.0f, 0x1.808596p-36f, 0.0f, 0.0f,
     0.0f, 0x1.c9af58p-101f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.66a1ep-32f,
     0x1.b77464p-32f, 0.0f, 0x1.1c4018p-107f, 0.0f, 0x1.ada2f4p-13f, 0.0f,
     0x1.5482bep-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1de188p-79f, 0.0f, 0x1.db68ep-81f,
     0.0f, 0x1.38000ep-6f, 0.0f, 0.0f, 0x1.3ab454p-42f, 0x1.f8ca16p-82f, 0.0f, 0.0f,
     0x1.687a34p-109f, 0x1.ef4308p-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0b3118p-60f,
     0.0f, 0x1.c4e1aep-34f, 0.0f, 0x1.578f7ep-54f, 0.0f, 0x1.33ae92p-17f, 0.0f,
     0x1.9bc56cp-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bfae26p-96f,
     0x1.9b967cp-102f, 0.0f, 0x1.fa8988p-60f, 0.0f, 0x1.b8ba06p-12f, 0x1.9eeadp-45f,
     0.0f, 0.0f, 0x1.7a9fcap-26f, 0x1.6f64aep-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e5d1acp-102f, 0x1.0c495p-101f, 0x1.8af004p-110f, 0.0f, 0.0f,
     0x1.4439f6p-120f, 0x1.73ca3ep-76f, 0.0f, 0.0f, 0x1.8c8dc6p-72f, 0.0f,
     0x1.044a7ap-51f, 0.0f, 0.0f, 0x1.678df6p-91f, 0.0f, 0x1.2d025ap-47f, 0.0f, 0.0f,
     0x1p0f, 0x1.85ff7ap-32f, 0.0f, 0x1.a9c416p-44f, 0.0f, 0x1.debf28p-91f, 0.0f,
     0.0f, 0x1.243ec2p-54f, 0.0f, 0x1.4f3966p-91f, 0x1.d06cc6p-39f, 0x1.ca6fd6p-87f,
     0x1.8cf52p-77f, 0.0f, 0.0f, 0.0f, 0.0f
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
            tmp1 = Sleef_tanf8_u35kvx(tmp0);
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
    printf("Sleef_tanf8_u35kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_tanf8_u35kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
