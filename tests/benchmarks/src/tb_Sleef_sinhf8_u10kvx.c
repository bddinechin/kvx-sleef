/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sinhf8_u10kvx.c --function Sleef_sinhf8_u10kvx \
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
     0.0f, 0x1.993f8ap-5f, 0.0f, 0.0f, 0x1.a04684p-97f, 0x1.6f612ep-70f,
     0x1.e82f8ap-61f, 0.0f, 0.0f, 0.0f, 0x1.7e6b26p-45f, 0x1.3ab3f4p-109f, 0.0f,
     0x1.008c46p-73f, 0x1.be5e7cp-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7a8f3cp-57f,
     0x1.35d57ep-44f, 0x1.76b572p-54f, 0x1.deb804p-70f, 0.0f, 0x1.92c74ap-117f,
     0x1.81fc6cp-70f, 0x1.a41656p-122f, 0.0f, 0.0f, 0.0f, 0x1.ea5fd4p-71f, 0.0f,
     0x1.f76c12p-29f, 0.0f, 0x1.a4ec0cp-50f, 0.0f, 0x1.de8a3ep-118f, 0x1.c28bbcp-54f,
     0x1.b4d508p-16f, 0x1.892834p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.dd1f7p-77f, 0x1.4d6ff6p-104f, 0.0f, 0x1.77527p-54f, 0x1.e9dadap-113f,
     0x1.bf7ffcp-90f, 0x1.b3d574p-62f, 0x1.77210ep-26f, 0x1.0f1902p-72f,
     0x1.e7b246p-2f, 0x1.17a0dep-12f, 0x1.ed77d2p-116f, 0x1.8e716ap-109f, 0.0f,
     0x1.0d36b2p-12f, 0x1.6b346p-99f, 0.0f, 0.0f, 0.0f, 0x1.55be94p-94f,
     0x1.efeedep-106f, 0x1.4457fep-54f, 0.0f, 0.0f, 0x1.7d7896p-118f, 0x1.a6aa7ep-41f,
     0x1.005b8ep-32f, 0x1.26444cp-34f, 0x1.1c1cbp-106f, 0.0f, 0.0f, 0x1.ca470cp-106f,
     0.0f, 0x1.a25936p-28f, 0x1.eb3e1ap-54f, 0.0f, 0x1.dd4612p-111f, 0.0f, 0.0f,
     0x1.9805c2p-25f, 0.0f, 0x1.9413b2p-110f, 0.0f, 0x1.1379d4p-62f, 0.0f,
     0x1.d459d4p-79f, 0.0f, 0.0f, 0.0f, 0x1.c520b6p-111f, 0.0f, 0.0f, 0x1.7cfb1cp-10f,
     0x1.749e96p-36f, 0.0f, 0x1.6857cep-20f, 0x1.ced56cp-59f, 0x1.142c54p-70f,
     0x1.d3295p-13f, 0.0f, 0.0f, 0.0f, 0x1.df977cp-91f, 0.0f, 0.0f, 0x1.35e6eap-60f,
     0x1.76d408p-6f, 0x1.b36a54p-121f, 0.0f, 0.0f, 0x1.d60602p-45f, 0x1.cb47e4p-75f,
     0x1.40a086p-79f, 0x1.2816bep-41f, 0x1.86a118p-23f, 0.0f, 0.0f, 0.0f,
     0x1.34bb7ep-107f, 0x1.f26c06p-24f, 0.0f, 0x1.7b19b6p-37f, 0x1.ebd94p-123f,
     0x1.17760ep-10f, 0x1.9aa2bep-20f, 0.0f, 0.0f, 0x1.659a5p-66f, 0x1.2ecb7p-110f,
     0.0f, 0.0f, 0.0f, 0x1.f5db86p-94f, 0.0f, 0x1.09a6ep-80f, 0.0f, 0x1.758faap-79f,
     0x1.2ff9ap-72f, 0.0f, 0.0f, 0x1.5edf02p-17f, 0x1.595f9cp-108f, 0x1.84b856p-56f,
     0.0f, 0.0f, 0x1.34f03ap-103f, 0.0f, 0x1.5b6e36p-124f, 0.0f, 0.0f,
     0x1.d4ad34p-23f, 0x1.227fd6p-31f, 0.0f, 0x1.877b82p-41f, 0x1.846fa8p-116f,
     0x1.252e6ap-85f, 0.0f, 0x1.b7681ap-110f, 0x1.559474p-9f, 0.0f, 0.0f, 0.0f,
     0x1.5df744p-3f, 0x1.fd3a7ep-39f, 0x1.b13fbap-106f, 0x1.0c01aap-10f,
     0x1.452e36p-95f, 0x1.713002p-118f, 0.0f, 0x1.d7d16ep-94f, 0.0f, 0x1.40fc16p-115f,
     0x1.9a4f82p-14f, 0x1.8ad32ep-89f, 0x1.7fdb94p-53f, 0.0f, 0x1.879066p-36f,
     0x1.5f17cp-50f, 0.0f, 0.0f, 0x1.f5e65p-115f, 0.0f, 0.0f, 0x1.0b9cc2p-85f,
     0x1.305626p-32f, 0.0f, 0x1.004e8p-118f, 0.0f, 0.0f, 0x1.c18682p-27f,
     0x1.b2714cp-98f, 0.0f, 0.0f, 0.0f, 0x1.647dc4p-24f, 0x1.25bdc6p-72f, 0.0f, 0.0f,
     0.0f, 0x1.cb1834p-54f, 0x1.85625ep-40f, 0.0f, 0x1.fc9796p-121f, 0.0f, 0.0f,
     0x1.90d02ap-106f, 0.0f, 0x1.d483d8p-88f, 0x1.fdb8e8p-102f, 0x1.a6379ep-39f, 0.0f,
     0.0f, 0x1.9d86ccp-85f, 0x1.9f6158p-14f, 0x1.008a8ep-15f, 0x1.32af5ap-21f, 0.0f,
     0x1.9af36p-1f, 0x1.e1a552p-31f, 0x1.967b2ap-115f, 0x1.e08f62p-122f, 0.0f,
     0x1.138daep-46f, 0.0f, 0.0f, 0x1.9bcdd4p-29f, 0x1.71248cp-30f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.610f7ap-45f, 0.0f, 0.0f, 0x1.30faacp-114f, 0x1.3b5936p-80f,
     0x1.85641p-74f, 0.0f, 0x1.4b836ap-107f, 0.0f, 0.0f, 0.0f, 0x1p0f,
     0x1.3610cep-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b3b6d8p-91f, 0.0f, 0x1.3bdb52p-66f,
     0x1.f99cdp-107f, 0x1.e28f4ep-118f, 0.0f, 0.0f, 0x1.6af87ap-27f, 0x1.7e17f4p-61f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.17b3ap-42f, 0.0f, 0x1.3b6ebap-84f, 0.0f,
     0x1.d863cp-70f, 0x1.d9a72cp-93f, 0x1.fe724p-73f, 0.0f, 0x1.c53952p-36f, 0.0f,
     0x1.680de6p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.60646ap-84f, 0x1.de5a18p-82f,
     0x1.f9fc3cp-76f, 0x1.1e5856p-34f, 0x1.c01fbap-46f, 0.0f, 0x1.2b99f8p-35f,
     0x1.56ac7p-13f, 0.0f, 0x1.bf31a8p-35f, 0x1.29216p-117f, 0.0f, 0x1.e3bb7p-102f,
     0x1.a73a9cp-4f, 0.0f, 0.0f, 0x1.31e18p-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d8d35p-104f, 0.0f, 0.0f, 0x1.6506d2p-69f, 0x1.c69586p-58f, 0.0f,
     0x1.4a70e8p-20f, 0x1.bdb6e6p-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dfa9fcp-58f,
     0x1.02e69ap-63f, 0.0f, 0x1.32dfdep-104f, 0.0f, 0x1.c7eb6ap-105f,
     0x1.160274p-101f, 0.0f, 0x1.b4411cp-120f, 0x1.bbf95ap-57f, 0x1.986c84p-80f,
     0x1.a2f72p-123f, 0.0f, 0.0f, 0.0f, 0x1.ae722p-109f, 0x1.cdf5fep-40f,
     0x1.4b9732p-93f, 0.0f, 0x1.288b0cp-99f, 0x1.34ac48p-74f, 0x1.913262p-117f,
     0x1.4ae63cp-24f, 0x1.84adb2p-23f, 0.0f, 0x1.ccbaeap-70f, 0x1.aaaf3cp-17f,
     0x1.e123bep-43f, 0x1.51997p-95f, 0.0f, 0.0f, 0x1.38ecb6p-87f, 0.0f, 0.0f,
     0x1.4e79p-77f, 0x1.a62bc8p-31f, 0x1.2aca44p-39f, 0x1.bddd0ap-55f, 0x1.4ee6ecp-3f,
     0x1.42755p-54f, 0x1.7c4bbep-118f, 0.0f, 0.0f, 0.0f, 0x1.a48d52p-31f,
     0x1.64721ep-116f, 0x1.6aef1ap-25f, 0x1.4dfdd4p-107f, 0x1.94c786p-65f,
     0x1.5f1696p-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a129ccp-73f, 0.0f, 0.0f,
     0x1.e334c4p-2f, 0x1.4b3b32p-126f, 0.0f, 0.0f, 0.0f, 0x1.606fa4p-118f, 0.0f,
     0x1.5acd5p-108f, 0x1.26452cp-2f, 0x1.cea62ap-25f, 0x1.b186f8p-17f, 0.0f,
     0x1.c35a3ap-97f, 0.0f, 0.0f, 0.0f, 0x1.e45558p-56f, 0x1.71be86p-18f,
     0x1.ae7b42p-75f, 0.0f, 0.0f, 0.0f, 0x1.17438cp-74f, 0.0f, 0x1.c3dc06p-31f, 0.0f,
     0.0f, 0.0f, 0x1.3c1666p-32f, 0x1.1da0eap-63f, 0.0f, 0x1.df58a8p-20f,
     0x1.f257fap-65f, 0.0f, 0.0f, 0x1.b5d0f4p-82f, 0x1.6f524cp-112f, 0.0f, 0.0f, 0.0f,
     0x1.ea966ep-50f, 0x1.b145c2p-23f, 0x1.3b02fap-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.92bd42p-118f, 0x1.f64372p-62f, 0x1.339aa6p-20f, 0x1.cda93ep-17f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.5bc9ap-50f, 0x1.1f5cfap-103f, 0x1.b9de8ap-75f,
     0x1.72dedap-102f, 0x1.6deaf6p-111f, 0.0f, 0.0f, 0x1.3782a6p-66f, 0x1.4002aap-37f,
     0.0f, 0x1.41eb2p-40f, 0x1.fb74cp-13f, 0.0f, 0.0f, 0x1.041bcap-120f, 0.0f, 0.0f,
     0.0f, 0x1.93aaa4p-89f, 0x1.3428a8p-109f, 0.0f, 0.0f, 0x1.663754p-20f,
     0x1.4ecc0cp-126f, 0.0f, 0.0f, 0.0f, 0x1.89bd78p-117f, 0x1.eabfbep-120f, 0.0f,
     0x1.8398acp-50f, 0.0f, 0x1.23197ap-115f, 0x1.14e49ap-1f, 0x1.c9c0d8p-49f,
     0x1.d3eff8p-64f, 0.0f, 0.0f, 0x1.2e8504p-76f, 0x1.735858p-67f, 0x1.ab1bc6p-69f,
     0.0f, 0.0f, 0.0f, 0x1.bb378ep-126f, 0x1.9c3808p-53f, 0.0f, 0.0f,
     0x1.b5869ep-121f, 0x1.0f6032p-55f, 0.0f, 0.0f, 0.0f, 0x1.ff7a56p-111f, 0.0f,
     0x1.fe3f02p-29f, 0x1.df9736p-97f, 0.0f, 0x1.9d4408p-101f, 0x1.fbf878p-59f, 0.0f,
     0x1p0f, 0.0f, 0x1.455a56p-50f, 0x1.afacecp-89f, 0x1.647b76p-76f, 0x1.5ae9aap-78f,
     0.0f, 0x1.51082p-60f, 0.0f, 0x1.ad442ap-115f, 0.0f, 0x1.365ebap-118f,
     0x1.7e37d6p-71f, 0x1.1275fp-37f, 0x1.178a74p-41f, 0x1.cda866p-2f,
     0x1.6589dcp-113f, 0x1.212298p-3f, 0.0f, 0x1.966aa6p-103f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.25e53p-98f, 0.0f, 0.0f, 0x1.3183d6p-53f, 0.0f, 0x1.1e735ap-39f,
     0x1.43c8c4p-63f, 0.0f, 0x1.1fc0e8p-117f, 0.0f, 0.0f, 0x1.05cd2cp-62f,
     0x1.1c68dep-126f, 0x1.82c156p-48f, 0.0f, 0.0f, 0x1.b9f66ep-98f, 0.0f,
     0x1.31b6bap-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bb9e52p-108f, 0x1.d4fdf4p-40f,
     0x1.77013p-122f, 0x1.a63006p-91f, 0x1.25f9d2p-50f, 0x1.067c66p-126f,
     0x1.5a2292p-67f, 0.0f, 0x1.1bd85cp-32f, 0x1.158cd8p-108f, 0.0f, 0.0f, 0.0f,
     0x1.fb2824p-85f, 0.0f, 0.0f, 0x1.bbe8b8p-34f, 0.0f, 0x1.ed16eep-64f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.bfa502p-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.313424p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ac9d8ep-3f, 0.0f,
     0x1.1229eap-10f, 0.0f, 0.0f, 0x1.01bd6ep-18f, 0x1.41d38cp-53f, 0.0f, 0.0f, 0.0f,
     0x1.945cacp-6f, 0.0f, 0x1.f2cea4p-104f, 0.0f, 0x1.750a3ep-106f, 0.0f, 0.0f,
     0x1.8ab87p-83f, 0x1.89063cp-111f, 0x1.cd7f1p-31f, 0.0f, 0x1.11f464p-118f,
     0x1.7f2564p-15f, 0x1.1c1978p-114f, 0x1.72cf7cp-72f, 0.0f, 0.0f, 0.0f,
     0x1.fbb3fp-81f, 0.0f, 0x1.c97896p-29f, 0x1.aeb01p-21f, 0.0f, 0.0f,
     0x1.1e5d24p-33f, 0x1.624f3ep-49f, 0x1.0997bap-98f, 0.0f, 0x1.039b1p-103f,
     0x1.2bdc08p-1f, 0.0f, 0.0f, 0x1.37b1acp-105f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2e34c8p-104f, 0x1.41f1fp-86f, 0.0f, 0.0f, 0x1.73fa9ep-46f, 0.0f, 0.0f, 0.0f,
     0x1.0a9d1ap-102f, 0.0f, 0x1.612c2p-5f, 0x1.7e4f84p-91f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.66d0a4p-14f, 0x1.e3df0ap-107f, 0.0f, 0x1.8647ccp-99f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c77c82p-85f, 0x1.e2c7d2p-35f,
     0x1.f18308p-89f, 0x1.7f92c6p-125f, 0x1.5fa0e2p-82f, 0.0f, 0.0f, 0.0f,
     0x1.50cb8p-6f, 0.0f, 0x1.721fap-41f, 0.0f, 0x1.bb8354p-74f, 0.0f, 0x1.c5b24p-55f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.2ded8ep-97f, 0.0f, 0.0f, 0x1.386c64p-119f, 0.0f,
     0x1.c1e2c6p-23f, 0.0f, 0.0f, 0x1.5cd7a2p-102f, 0.0f, 0x1.ab3be4p-106f,
     0x1.934ba8p-57f, 0x1.eda23cp-82f, 0.0f, 0x1.57fdcep-19f, 0x1.849c7ep-36f,
     0x1.46273ap-109f, 0.0f, 0.0f, 0x1.2487a6p-96f, 0.0f, 0.0f, 0x1.b55e26p-74f,
     0x1.7d94bp-20f, 0.0f, 0x1.b7b66ap-34f, 0x1.f5da38p-99f, 0.0f, 0.0f,
     0x1.e13c08p-113f, 0x1.6d4d74p-70f, 0x1.b1b8e8p-94f, 0x1.4c80cap-76f, 0.0f, 0.0f,
     0x1.87f98ap-78f, 0x1.d5673ap-62f, 0.0f, 0.0f, 0.0f, 0x1.c3fe8ep-20f, 0.0f,
     0x1.23c2fcp-61f, 0x1.0f1a38p-38f, 0.0f, 0x1.bca55cp-75f, 0x1.f0cb48p-40f,
     0x1.983dd2p-41f, 0x1.898d78p-91f, 0.0f, 0.0f, 0.0f, 0x1.5fbc38p-85f,
     0x1.6b491cp-124f, 0.0f, 0.0f, 0x1.5590eap-19f, 0x1.fcf46ep-56f, 0.0f, 0.0f,
     0x1.823ad2p-55f, 0.0f, 0x1.270fp-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.30121ap-64f, 0x1.d0a9fap-116f, 0.0f, 0x1.8991b2p-98f, 0x1.076096p-68f, 0.0f,
     0x1.65740cp-72f, 0x1.a578b4p-59f, 0x1.1a244cp-70f, 0x1.93ae48p-7f,
     0x1.307ba8p-51f, 0x1.0e8fa4p-112f, 0.0f, 0x1.963ee6p-87f, 0x1.32504ep-101f, 0.0f,
     0.0f, 0x1.a53b1cp-3f, 0x1.50b34ap-83f, 0.0f, 0x1.31383p-13f, 0.0f,
     0x1.908aa4p-112f, 0.0f, 0.0f, 0x1.91b974p-8f, 0.0f, 0.0f, 0.0f, 0x1.26d488p-100f,
     0x1.17df06p-86f, 0x1.18fa62p-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4188a4p-89f,
     0.0f, 0x1.a5fdd2p-38f, 0.0f, 0.0f, 0x1.80dd7p-96f, 0x1.9ca806p-47f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.867038p-35f, 0.0f, 0.0f, 0.0f, 0x1.e33112p-21f, 0.0f,
     0x1.e97d18p-114f, 0x1.df03c6p-82f, 0x1.951b5ep-13f, 0x1.1d5cdp-41f,
     0x1.804deep-73f, 0x1.2bf12ep-31f, 0x1.c3b80ep-96f, 0x1.7c57d2p-62f,
     0x1.2d5066p-79f, 0x1.ffcd54p-41f, 0x1.57a086p-67f, 0x1.364648p-106f, 0.0f, 0.0f,
     0x1.b5a0a4p-89f, 0.0f, 0.0f, 0.0f, 0x1.4d10aep-34f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ccdb78p-37f, 0x1.bbce04p-29f, 0x1.800344p-53f, 0x1.395972p-68f,
     0x1.1190d2p-81f, 0x1.ca8c3p-115f, 0.0f, 0x1.7ea632p-55f, 0x1.061926p-57f,
     0x1.afb9a6p-58f, 0.0f, 0.0f, 0.0f, 0x1.dbd3d6p-1f, 0x1.9a0074p-42f, 0.0f, 0.0f,
     0x1.728436p-126f, 0.0f, 0x1.b7c48ep-67f, 0.0f, 0.0f, 0x1.c2227cp-109f,
     0x1.b4840ap-66f, 0x1.7707e8p-64f, 0x1.9c0564p-117f, 0.0f, 0.0f, 0x1.17ce9p-77f,
     0.0f, 0.0f, 0.0f, 0x1.ef218ap-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e7f568p-11f, 0.0f,
     0x1.013804p-26f, 0x1.834e82p-57f, 0x1.8436b6p-107f, 0.0f, 0.0f, 0x1.0f9024p-8f,
     0x1.eba1f6p-110f, 0.0f, 0x1.ca21d8p-9f, 0x1.e6e748p-125f, 0x1.c9df7p-42f,
     0x1.63574ap-6f, 0x1.8f0768p-43f, 0x1.de8d5p-63f, 0x1.93f07ap-101f, 0.0f, 0.0f,
     0x1.bb2982p-57f, 0.0f, 0x1.96ce96p-116f, 0.0f, 0.0f, 0.0f, 0x1.683162p-24f, 0.0f,
     0x1.ac2676p-11f, 0x1.432b92p-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f395cp-57f,
     0x1.21455cp-47f, 0x1.901ccep-80f, 0.0f, 0x1.9c40bcp-28f, 0x1.31139ep-19f,
     0x1.f5b308p-34f, 0x1.069dc6p-27f, 0.0f, 0.0f, 0x1.d56634p-22f, 0x1.95da3p-119f,
     0x1.586c1ep-126f, 0x1.c756dap-92f, 0.0f, 0x1.dfdc12p-114f, 0x1.992578p-63f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c048a8p-7f, 0.0f, 0.0f, 0x1.df1acap-112f, 0x1.2df7f6p-93f,
     0x1.9f917ep-62f, 0.0f, 0x1.963586p-78f, 0x1.a50736p-72f, 0.0f, 0.0f,
     0x1.50714ep-58f, 0.0f, 0.0f, 0x1.683324p-88f, 0x1.f57caep-117f, 0.0f,
     0x1.401f42p-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7adedap-119f, 0.0f,
     0x1.0dca84p-55f, 0x1.c0fa7cp-103f, 0x1.0ea6dap-76f, 0x1.cccf32p-112f, 0.0f,
     0x1.e79556p-93f, 0.0f, 0x1.9f49eep-55f, 0.0f, 0x1.763774p-63f, 0.0f,
     0x1.4e4218p-29f, 0.0f, 0x1.a15af2p-121f, 0.0f, 0x1.15b602p-81f, 0x1.ae1224p-83f,
     0x1.b03b68p-101f, 0.0f, 0.0f, 0.0f, 0x1.074b66p-61f, 0.0f, 0x1.33b04ap-53f, 0.0f,
     0.0f, 0.0f, 0x1.4da5f2p-19f, 0x1.1e02a2p-44f, 0x1.058eep-107f, 0.0f, 0.0f,
     0x1.742ccep-82f, 0.0f, 0x1.1219c2p-121f, 0x1.5e38bap-10f, 0x1.2638a2p-91f,
     0x1.7d9bfcp-109f, 0.0f, 0x1.950e9ep-30f, 0x1.770e26p-4f, 0.0f, 0x1.1211e8p-115f,
     0x1.46b47ap-122f, 0x1.2f1fbap-31f, 0.0f, 0x1.942b7ap-69f, 0.0f, 0.0f,
     0x1.23e016p-18f, 0.0f, 0.0f, 0.0f, 0x1.6bd8dcp-125f, 0.0f, 0x1.a10baap-76f,
     0x1.e54cb4p-98f, 0x1.7691e4p-110f, 0.0f, 0.0f, 0x1.f43e6cp-100f, 0.0f, 0.0f,
     0.0f, 0x1.60602cp-83f
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
            tmp1 = Sleef_sinhf8_u10kvx(tmp0);
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
    printf("Sleef_sinhf8_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_sinhf8_u10kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
