/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_sincospif8_u35kvx.c --function Sleef_sincospif8_u35kvx \
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
     0x1.6ef19p-58f, 0.0f, 0x1.60c3d8p-6f, 0x1.cd5f94p-79f, 0x1.46b5d4p-117f,
     0x1.6bfbc6p-13f, 0x1.8271fep-51f, 0.0f, 0x1.a1e146p-39f, 0.0f, 0.0f,
     0x1.82cceep-126f, 0x1.d2352ep-29f, 0.0f, 0x1.b48834p-97f, 0.0f, 0x1.6f78b4p-78f,
     0.0f, 0.0f, 0x1.529e9p-98f, 0x1.b59162p-21f, 0x1.0230a8p-99f, 0x1.8fbaa6p-110f,
     0.0f, 0x1.b887b6p-113f, 0x1.99c1dep-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.41035ep-56f,
     0x1.85d66cp-16f, 0x1.9e482p-53f, 0.0f, 0x1.51cdfcp-25f, 0x1.e408dp-35f,
     0x1.9805a6p-15f, 0x1.63335ep-71f, 0.0f, 0x1.d73232p-104f, 0.0f, 0x1.bd1fb8p-14f,
     0.0f, 0x1.8d7a58p-41f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.28dfbep-55f,
     0.0f, 0x1.bb36cp-74f, 0.0f, 0.0f, 0x1.31dc2cp-30f, 0x1.1d8cf6p-22f,
     0x1.4af582p-71f, 0.0f, 0x1.c37d2p-6f, 0x1.b5706ap-113f, 0x1.e75bcp-40f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.77bf9ap-29f, 0x1.349962p-10f, 0.0f, 0x1.46a11ep-29f, 0.0f,
     0x1.d9e2d6p-53f, 0.0f, 0x1.7bb878p-109f, 0.0f, 0.0f, 0x1.6de88ep-87f, 0.0f,
     0x1.131ab6p-101f, 0x1.6a7dfep-115f, 0.0f, 0x1.9ea676p-35f, 0x1.c6ff4cp-72f,
     0x1.1db71ep-101f, 0.0f, 0x1.f2a444p-101f, 0.0f, 0x1.978d3cp-98f,
     0x1.b8031cp-114f, 0x1.dfea8ap-19f, 0x1.550a7p-63f, 0.0f, 0x1.24922ep-111f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.fa8106p-49f, 0.0f, 0x1.01f3aap-123f, 0x1.16b89ap-53f,
     0x1.73e136p-104f, 0x1.c14f44p-58f, 0.0f, 0.0f, 0.0f, 0x1.30874ap-59f,
     0x1.152442p-11f, 0.0f, 0x1.a5ae12p-66f, 0x1.43973cp-66f, 0.0f, 0.0f, 0.0f,
     0x1.6d29cp-24f, 0.0f, 0x1.69a2ep-99f, 0x1.965d16p-26f, 0.0f, 0x1.bc13d8p-78f,
     0x1.11e4fap-3f, 0x1.064d5cp-27f, 0x1.a8fa7ep-68f, 0x1.584064p-14f,
     0x1.077764p-68f, 0x1.8eb9c8p-44f, 0.0f, 0.0f, 0.0f, 0x1.db784ap-87f,
     0x1.6d7372p-37f, 0.0f, 0x1.26b75ep-85f, 0.0f, 0x1.756356p-53f, 0.0f, 0.0f,
     0x1.d45a1ep-78f, 0x1.b92114p-37f, 0.0f, 0.0f, 0x1.e78fa4p-86f, 0x1.14e15p-18f,
     0x1.e72924p-52f, 0x1.e1b6cp-36f, 0x1.08098p-30f, 0x1.77263p-45f, 0x1.f38692p-11f,
     0.0f, 0.0f, 0x1.4f75p-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b61dbcp-26f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.8a3424p-68f, 0.0f, 0.0f, 0.0f, 0x1.2a2e0ep-35f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e4c36p-116f, 0x1.9cc2a2p-86f, 0.0f, 0.0f, 0.0f, 0x1.d49d32p-74f,
     0.0f, 0x1.8f316p-32f, 0.0f, 0x1.7c942cp-97f, 0.0f, 0x1.ca9c2ep-72f,
     0x1.91cedap-125f, 0x1.fc15f2p-54f, 0.0f, 0x1.77a934p-113f, 0x1.2b4af4p-17f, 0.0f,
     0.0f, 0.0f, 0x1.7b99d4p-66f, 0.0f, 0.0f, 0x1.84c398p-91f, 0.0f, 0.0f, 0.0f,
     0x1.c9e512p-97f, 0x1.f54788p-45f, 0.0f, 0.0f, 0.0f, 0x1.9d72ccp-60f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a74f2p-61f, 0.0f, 0x1.b353fp-117f, 0.0f, 0.0f,
     0x1.db2fd8p-118f, 0x1.73fc4ap-89f, 0x1.180c28p-95f, 0x1.4b7628p-28f,
     0x1.9f9dc8p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.905fd2p-112f, 0.0f,
     0x1.81cbaep-22f, 0.0f, 0.0f, 0x1.d90dd2p-46f, 0.0f, 0.0f, 0x1.d4f8aep-122f,
     0x1.91c9d4p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c33bbp-101f, 0.0f,
     0x1.147bfep-94f, 0x1.8ebc82p-107f, 0x1.04452p-30f, 0x1.8eef5ap-81f,
     0x1.78b79cp-58f, 0x1.b132fp-21f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4af288p-19f,
     0.0f, 0.0f, 0.0f, 0x1.423b9p-108f, 0x1.1ae58ap-97f, 0.0f, 0.0f, 0.0f,
     0x1.81a3c4p-24f, 0x1.85d8bap-116f, 0.0f, 0.0f, 0x1.7ab65ep-24f, 0.0f, 0.0f, 0.0f,
     0x1.7e032ap-26f, 0x1.08178ep-30f, 0.0f, 0x1.8b29cap-69f, 0.0f, 0.0f,
     0x1.909486p-115f, 0.0f, 0x1.61e5d8p-89f, 0.0f, 0.0f, 0x1.a8c6a8p-104f, 0.0f,
     0.0f, 0.0f, 0x1.808ddap-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.74979p-118f,
     0.0f, 0.0f, 0x1.fd753ep-56f, 0x1.068f54p-29f, 0.0f, 0.0f, 0x1.e93484p-109f, 0.0f,
     0x1.3fd938p-47f, 0.0f, 0.0f, 0.0f, 0x1.e170e8p-56f, 0x1.9b6946p-1f,
     0x1.a0a912p-76f, 0x1.6b59e6p-43f, 0x1.9e012cp-5f, 0.0f, 0x1.78d4b2p-69f, 0.0f,
     0.0f, 0.0f, 0x1.2d4048p-81f, 0.0f, 0.0f, 0x1.cebe1ap-119f, 0.0f,
     0x1.dcab36p-119f, 0x1.331acap-40f, 0x1.ace41cp-69f, 0x1.de6e9ap-15f,
     0x1.655e02p-125f, 0x1.a97e14p-31f, 0.0f, 0.0f, 0x1.cebb96p-28f, 0.0f, 0.0f,
     0x1.31b0a4p-50f, 0x1.f88932p-16f, 0.0f, 0.0f, 0x1.9700c2p-7f, 0x1.6b4868p-6f,
     0.0f, 0x1.e1930cp-122f, 0.0f, 0.0f, 0x1.55451ep-69f, 0.0f, 0x1.91a66cp-88f,
     0x1.12cc06p-32f, 0x1.c59d9ep-102f, 0x1.ddf66ep-111f, 0x1.32402ep-50f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d3e9eep-120f, 0x1.b6189ap-11f, 0x1.c8346ep-69f, 0.0f,
     0x1.4e04b2p-3f, 0.0f, 0.0f, 0x1.0199c6p-1f, 0.0f, 0x1.e7620ep-85f,
     0x1.2b783ap-113f, 0x1.1788cp-100f, 0.0f, 0x1.24201cp-38f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c50474p-73f, 0x1.79385cp-106f, 0.0f, 0x1.1610fp-18f, 0.0f, 0x1.dd0ebcp-79f,
     0.0f, 0.0f, 0x1.5362a4p-117f, 0x1.43c4ecp-80f, 0.0f, 0x1.5ce7eap-48f,
     0x1.894258p-33f, 0.0f, 0x1.703098p-53f, 0x1.845288p-54f, 0.0f, 0x1.5dfa0ap-23f,
     0x1.07ce0cp-48f, 0x1.9577e6p-123f, 0.0f, 0.0f, 0x1.0f185ep-6f, 0.0f,
     0x1.21d434p-97f, 0x1.55622ap-67f, 0x1.0cf912p-104f, 0x1.a7852p-32f,
     0x1.2577c2p-88f, 0.0f, 0x1.68f402p-41f, 0.0f, 0x1.811132p-31f, 0x1.ed4ab6p-115f,
     0.0f, 0.0f, 0x1.1d5e4p-53f, 0x1.1be0cep-15f, 0x1.14eea8p-111f, 0.0f, 0.0f,
     0x1.39db84p-20f, 0x1.8ebd0ep-58f, 0.0f, 0x1.8b85d6p-23f, 0x1.9b5ac6p-93f,
     0x1.18b4e8p-72f, 0x1.3dd1d6p-27f, 0.0f, 0x1.99dce2p-48f, 0x1.058702p-2f, 0.0f,
     0x1.eb86bp-19f, 0x1.1ca48ap-88f, 0.0f, 0x1.ce5edp-121f, 0x1.8a90f6p-52f,
     0x1.4f24fcp-11f, 0x1.c086f6p-74f, 0x1.2dcebp-84f, 0.0f, 0x1p0f, 0x1.29bff4p-84f,
     0.0f, 0x1.76f1fp-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.10b9eep-4f, 0.0f,
     0x1.cb2adp-6f, 0x1.9273b6p-8f, 0.0f, 0x1.4fa5ecp-69f, 0x1.8d0b2ap-22f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b516dcp-56f, 0x1.e27c48p-126f, 0.0f, 0.0f,
     0x1.2169f2p-124f, 0.0f, 0x1.f865bap-105f, 0x1.a16b06p-87f, 0.0f, 0.0f,
     0x1.3a4226p-126f, 0.0f, 0x1.a924c8p-113f, 0.0f, 0.0f, 0x1.999a9p-64f, 0.0f,
     0x1.293ef6p-59f, 0.0f, 0x1p0f, 0x1.d506f6p-83f, 0.0f, 0.0f, 0.0f,
     0x1.0a368cp-39f, 0x1.5467dep-114f, 0.0f, 0.0f, 0x1.a287bap-90f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a908fep-93f, 0x1.f22ab6p-14f, 0x1.80cab6p-1f, 0x1.bfb546p-77f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.60a7c2p-62f, 0x1.b45abp-6f, 0.0f,
     0.0f, 0x1.990564p-23f, 0.0f, 0.0f, 0x1.975e8ap-85f, 0.0f, 0.0f, 0.0f,
     0x1.51795ep-9f, 0.0f, 0x1.de7ad2p-92f, 0x1.56ad1ap-113f, 0x1.c5645cp-57f,
     0x1.554c5ep-34f, 0x1.f3276ap-30f, 0.0f, 0x1.05c1c4p-36f, 0x1.3512fep-104f, 0.0f,
     0x1.a1a27p-47f, 0.0f, 0x1.04198ap-18f, 0x1.e03508p-38f, 0.0f, 0.0f, 0.0f,
     0x1.23a2dep-34f, 0x1.8b8beap-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c901c4p-65f, 0x1.ba2888p-116f, 0x1.4f4acep-28f, 0.0f, 0x1.1339cep-37f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a2813ap-86f, 0x1.ee2274p-22f, 0x1.bc8248p-124f, 0.0f, 0.0f,
     0.0f, 0x1.a62c68p-99f, 0.0f, 0x1.353804p-50f, 0x1.4a4e9cp-67f, 0x1.de2334p-4f,
     0x1.c59fap-13f, 0.0f, 0x1.3754dp-113f, 0x1.6fa93p-41f, 0.0f, 0x1.5e22ap-120f,
     0x1.0e7d2p-77f, 0x1.a45772p-85f, 0.0f, 0x1.b567e4p-67f, 0.0f, 0x1.0adf38p-73f,
     0x1.d7d3ccp-53f, 0.0f, 0x1.666fcap-99f, 0x1.47c8cap-126f, 0.0f, 0.0f,
     0x1.19e4e6p-19f, 0.0f, 0x1.746224p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.932c7ap-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1fef16p-17f,
     0x1.9b04a8p-25f, 0.0f, 0.0f, 0x1.bc0d54p-52f, 0x1.2f7734p-42f, 0x1.84cb84p-46f,
     0x1.a807eep-72f, 0.0f, 0.0f, 0x1.058df2p-86f, 0x1.e0a87ep-97f, 0x1.63ae88p-74f,
     0x1.ae9ef4p-50f, 0x1.5f589ap-5f, 0.0f, 0x1.3b2f3ap-68f, 0.0f, 0.0f,
     0x1.e2ff5ep-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dbbcccp-49f, 0.0f, 0.0f, 0.0f,
     0x1.738d38p-74f, 0x1.f0582ap-96f, 0x1.c343f8p-53f, 0x1.d38b4ep-104f, 0.0f,
     0x1.9a8ab2p-108f, 0.0f, 0.0f, 0x1.143c34p-65f, 0.0f, 0.0f, 0x1.019706p-73f, 0.0f,
     0x1.8a3594p-125f, 0x1.9eeaacp-91f, 0.0f, 0x1.e3b4cap-121f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.287e2ep-69f, 0x1.1c5e1ap-83f, 0.0f, 0.0f, 0.0f, 0x1.bf28ecp-62f, 0.0f,
     0.0f, 0x1.3392c4p-39f, 0.0f, 0.0f, 0x1.edceeap-87f, 0x1.6354aep-21f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e99fdcp-14f, 0x1.ec91dp-126f, 0x1.5ad3dcp-30f, 0.0f, 0.0f, 0.0f,
     0x1.0d0818p-16f, 0.0f, 0x1.1ce08cp-106f, 0.0f, 0.0f, 0x1.e94de4p-117f, 0.0f,
     0x1.ab81b6p-90f, 0x1.add2a4p-4f, 0.0f, 0.0f, 0x1.240718p-46f, 0x1.c9c5dp-117f,
     0x1.c25824p-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.af621p-6f, 0.0f, 0x1.8fa482p-93f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.df3e08p-74f, 0x1.6e0226p-94f, 0.0f, 0.0f,
     0x1.35ee94p-47f, 0x1.379ee4p-14f, 0x1.6640f8p-51f, 0x1.77cde8p-81f,
     0x1.82951ap-6f, 0.0f, 0x1.980f4cp-121f, 0.0f, 0x1.62cb52p-93f, 0x1p0f,
     0x1.7c15fep-6f, 0.0f, 0.0f, 0.0f, 0x1.c6b6ap-29f, 0.0f, 0.0f, 0x1.2cafdap-37f,
     0x1.8512fp-47f, 0x1.b07ab8p-22f, 0x1.086ad8p-23f, 0x1.c92366p-32f, 0.0f,
     0x1.7937aap-44f, 0x1.26df44p-79f, 0.0f, 0x1.ffa6dp-62f, 0x1.5ae62ep-24f, 0.0f,
     0x1.1ad0b2p-65f, 0x1.303226p-18f, 0.0f, 0.0f, 0.0f, 0x1.0d0d9cp-45f,
     0x1.f92458p-67f, 0.0f, 0.0f, 0x1.5bcbc2p-76f, 0x1.fe14f4p-87f, 0.0f,
     0x1.d18c2ep-78f, 0.0f, 0x1.662a1ap-98f, 0x1.f4bf64p-3f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ca6bf4p-93f, 0.0f, 0x1.676d04p-101f, 0.0f, 0x1.2c64fcp-104f,
     0x1.6ab95ap-22f, 0.0f, 0.0f, 0.0f, 0x1.b5f94cp-60f, 0.0f, 0x1.c24c12p-59f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.164e62p-108f, 0x1.621244p-78f, 0x1.90da9p-71f, 0.0f,
     0.0f, 0x1.b43acp-69f, 0x1.8e3a1cp-101f, 0.0f, 0.0f, 0x1.b9b1cep-56f,
     0x1.c55a4cp-56f, 0.0f, 0x1.6f7a4p-109f, 0.0f, 0x1.ba4abap-6f, 0.0f,
     0x1.fb7896p-106f, 0x1.e2c726p-17f, 0x1.6aea02p-121f, 0x1.be08ap-71f, 0.0f,
     0x1.4831c6p-8f, 0x1.b30a62p-122f, 0.0f, 0x1.6ca328p-69f, 0.0f, 0.0f,
     0x1.87f9c4p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3337bp-57f, 0.0f,
     0x1.545f28p-8f, 0x1.fc8fe6p-43f, 0.0f, 0.0f, 0x1.3d8dp-40f, 0.0f, 0.0f, 0.0f,
     0x1.c3cf88p-52f, 0.0f, 0x1.f1630ap-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c48feep-11f, 0x1.0b8ce6p-5f, 0x1.487f36p-119f, 0x1.b267cp-13f,
     0x1.c53342p-124f, 0x1.c8c55p-13f, 0x1.1174cep-3f, 0x1.179eb8p-105f, 0.0f, 0.0f,
     0.0f, 0x1.79d84ep-31f, 0.0f, 0x1.a005fep-59f, 0.0f, 0x1.0a7328p-52f, 0.0f, 0.0f,
     0x1.114e4p-48f, 0x1.c7570ep-28f, 0.0f, 0x1.b77e72p-47f, 0.0f, 0.0f,
     0x1.28a842p-51f, 0.0f, 0x1.6418fp-13f, 0.0f, 0x1.a08974p-61f, 0.0f, 0.0f, 0.0f,
     0x1.2afa5cp-46f, 0x1.ae135ep-86f, 0x1.9d5544p-111f, 0x1.ee9d7ap-100f, 0.0f, 0.0f,
     0x1.1a4fa4p-118f, 0.0f, 0x1.33a51p-94f, 0.0f, 0.0f, 0x1.bf1f14p-97f, 0.0f,
     0x1.427de4p-85f, 0.0f, 0.0f, 0x1.9a5ad6p-125f, 0x1.19ea4cp-101f, 0.0f,
     0x1.676332p-118f, 0x1.7d11a2p-11f, 0.0f, 0x1.4e801cp-114f, 0x1.299b2p-47f,
     0x1.cae616p-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dc1b5ap-73f, 0x1.e8040ap-65f,
     0.0f, 0x1.a17d4ep-10f, 0.0f, 0x1.bb60bap-24f, 0.0f, 0.0f, 0.0f, 0x1.023ebp-83f,
     0.0f, 0.0f, 0.0f, 0x1.851dd2p-67f, 0.0f, 0.0f, 0x1.b4aa5ap-72f, 0x1.f3cd7ap-104f,
     0x1.7d7578p-105f, 0.0f, 0.0f, 0.0f, 0x1.ecb56p-126f, 0x1.bbf7bcp-27f, 0.0f,
     0x1.88ea3p-54f, 0x1.de129p-47f, 0.0f, 0.0f, 0.0f, 0x1.39f9b2p-65f,
     0x1.d4a5ap-20f, 0x1.417b38p-120f, 0.0f, 0x1.cbb9c2p-12f, 0x1.e0c174p-72f, 0.0f,
     0x1.9d242p-20f, 0x1.a2cf88p-89f, 0.0f, 0x1.e9b1fep-113f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.373366p-112f, 0x1.0e9b92p-121f, 0.0f, 0x1.046924p-35f,
     0x1.16da06p-1f, 0x1.113f42p-101f, 0x1.613468p-34f, 0x1.04e69ap-39f, 0.0f,
     0x1.857aap-70f, 0x1.3df762p-63f, 0x1.f56e8ep-67f, 0.0f, 0.0f, 0x1.6aaf5ep-4f,
     0.0f, 0x1.ae5b64p-55f, 0x1.ebe8acp-67f, 0.0f, 0x1.0d4512p-111f, 0x1.fe8408p-100f,
     0x1.02d988p-92f, 0.0f, 0.0f, 0x1.4c1f36p-90f, 0x1.ae8032p-120f, 0x1.f10dbap-110f,
     0.0f, 0x1.3a6da8p-85f, 0x1.458ebp-122f, 0x1.94b244p-71f, 0x1.1ae88ep-85f, 0.0f,
     0x1.2131fap-37f, 0.0f, 0x1.18b79ep-72f, 0x1.1b17p-8f, 0.0f, 0x1.668582p-5f,
     0x1.08e09cp-79f, 0x1.f6d70cp-38f, 0.0f, 0.0f, 0.0f, 0x1.959b68p-27f,
     0x1.a358c8p-19f, 0.0f, 0x1.1febap-3f, 0.0f, 0.0f, 0.0f, 0x1.ff9b92p-79f,
     0x1.f60ccap-102f, 0x1.217e98p-37f, 0x1.d983p-106f, 0.0f, 0x1.85f7d4p-98f,
     0x1.e101eep-8f, 0x1.80caf4p-116f, 0x1.8e08e2p-7f, 0.0f, 0.0f, 0.0f,
     0x1.79079p-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e8bde6p-16f, 0.0f, 0x1.db6e5cp-99f,
     0.0f, 0.0f, 0x1.7c03a4p-97f, 0.0f, 0x1.f902e6p-101f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f
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
            tmp1 = Sleef_sincospif8_u35kvx(tmp0);
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
    printf("Sleef_sincospif8_u35kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_sincospif8_u35kvx bench acc {.x=[%a, %a, %a, %a], .y=[%a, %a, %a, %a]}\n", global_bench_acc.x[0], global_bench_acc.x[1], global_bench_acc.x[2], global_bench_acc.x[3], global_bench_acc.y[0], global_bench_acc.y[1], global_bench_acc.y[2], global_bench_acc.y[3]);
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
