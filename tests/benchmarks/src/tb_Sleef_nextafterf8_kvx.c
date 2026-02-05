/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_nextafterf8_kvx.c --function Sleef_nextafterf8_kvx \
 *     --arity 2 --headers sleef.h,ml_support_lib.h --input-formats \
 *     binary32,binary32 --vector-size 8 --function-input-vector-size 8 \
 *     --bench --no-embedded-bin --target kv3
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
     0.0f, 0.0f, 0.0f, 0x1.cdb22p-59f, 0x1.543b3ap-3f, 0.0f, 0x1.945162p-103f, 0.0f,
     0x1.df7c54p-28f, 0.0f, 0.0f, 0x1.535c4ap-68f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1dfdbep-75f, 0x1.4fae2ap-88f, 0.0f, 0.0f, 0x1.401562p-38f, 0.0f, 0.0f, 0.0f,
     0x1.933ba4p-5f, 0.0f, 0.0f, 0.0f, 0x1.fbe5b8p-7f, 0.0f, 0x1.36307ep-28f, 0.0f,
     0x1.04a3c2p-52f, 0x1.28edc4p-77f, 0x1.31945ep-30f, 0x1.87cdfcp-59f,
     0x1.a250b2p-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c9c798p-9f, 0.0f, 0.0f,
     0x1.7a81d4p-92f, 0.0f, 0.0f, 0.0f, 0x1.ff0f6ap-110f, 0x1.d283f8p-90f, 0.0f, 0.0f,
     0.0f, 0x1.79b312p-20f, 0.0f, 0.0f, 0.0f, 0x1.fa184ap-113f, 0.0f, 0x1.d59ce6p-38f,
     0x1.f58c1p-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.656db8p-82f, 0.0f, 0x1.0d3bd8p-77f,
     0x1.cc45b6p-125f, 0.0f, 0x1.528c12p-40f, 0x1.62499p-8f, 0.0f, 0x1.deeb32p-64f,
     0x1.4e5c7p-110f, 0x1.8e6392p-118f, 0x1.b8305ap-8f, 0x1.7c55aep-73f, 0.0f,
     0x1.a71f0cp-122f, 0.0f, 0x1.e64e62p-73f, 0.0f, 0x1.c48534p-83f, 0.0f,
     0x1.a40644p-16f, 0.0f, 0x1.8a3686p-98f, 0x1.1c3256p-81f, 0.0f, 0.0f, 0.0f,
     0x1.d098ep-120f, 0x1.8f4f6p-111f, 0x1.777f5cp-38f, 0x1.c28fb2p-111f, 0.0f,
     0x1.57d9ep-8f, 0x1.08a7d8p-101f, 0x1.ce1f44p-94f, 0.0f, 0x1.cb62fcp-1f, 0.0f,
     0x1.406b42p-102f, 0.0f, 0.0f, 0.0f, 0x1.4a16dap-39f, 0x1.bbdc1ep-114f, 0.0f,
     0x1.0093ecp-62f, 0.0f, 0x1.831d7p-123f, 0x1.8a992ep-51f, 0.0f, 0x1.8a117ep-75f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.690dbap-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.d75922p-122f, 0x1.6ebe1p-120f, 0.0f, 0x1.bc4daep-26f, 0x1.d13462p-119f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fa5fccp-113f, 0.0f, 0.0f, 0x1.8aabb6p-53f,
     0x1.d8019ap-109f, 0.0f, 0x1.e742e4p-62f, 0.0f, 0.0f, 0x1.96d686p-30f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.810174p-52f, 0x1.b47dcap-107f, 0x1.866894p-45f, 0x1.eaf316p-54f,
     0x1.2066fp-119f, 0x1.ad4c3ap-21f, 0.0f, 0x1.39615ap-1f, 0.0f, 0.0f,
     0x1.a3da5ep-57f, 0x1.e6a358p-81f, 0.0f, 0x1.4ced4cp-99f, 0.0f, 0.0f,
     0x1.941768p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f89da2p-9f, 0.0f, 0.0f,
     0x1.960c3ep-93f, 0.0f, 0x1.30e6fap-120f, 0.0f, 0x1.e6f984p-120f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.bead44p-10f, 0.0f, 0.0f, 0.0f, 0x1.4a9094p-109f, 0x1.bf462cp-23f,
     0.0f, 0.0f, 0x1.bc0784p-44f, 0.0f, 0.0f, 0.0f, 0x1.d373d6p-52f, 0.0f,
     0x1.cd1d1ap-66f, 0x1.331386p-45f, 0x1.ebb4e6p-3f, 0.0f, 0.0f, 0x1.b80474p-5f,
     0x1.bfe1a8p-51f, 0.0f, 0x1.7ebaa4p-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2b091ep-46f, 0.0f, 0x1.b704e2p-34f, 0.0f, 0.0f, 0x1.2e0a4ep-59f,
     0x1.8bcfap-83f, 0x1.633776p-66f, 0x1.5673bep-44f, 0x1.55c2d8p-72f,
     0x1.62fb94p-89f, 0.0f, 0.0f, 0x1.0cc924p-95f, 0x1.74da1ap-14f, 0.0f,
     0x1.a9eb1p-15f, 0.0f, 0.0f, 0.0f, 0x1.5aa69ap-97f, 0x1.217cbep-34f,
     0x1.f16d7cp-10f, 0x1.f6045ep-24f, 0.0f, 0.0f, 0x1.f93292p-100f, 0x1.001674p-20f,
     0x1.857ba8p-92f, 0.0f, 0x1.aa6ebp-29f, 0x1.e323d8p-99f, 0x1.14b88p-65f,
     0x1.c3dedp-102f, 0x1.81208ep-13f, 0.0f, 0x1.4c607ap-109f, 0x1.755f56p-58f, 0.0f,
     0x1.0b768p-40f, 0.0f, 0x1.f96056p-30f, 0x1.34dd5cp-46f, 0x1.35972ep-15f,
     0x1.2e400ep-21f, 0.0f, 0.0f, 0x1.8e245ep-13f, 0.0f, 0x1.960706p-34f,
     0x1.b4cd02p-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e0e0d4p-106f, 0.0f, 0.0f,
     0x1.42d0c4p-32f, 0x1.d7c0c8p-124f, 0.0f, 0.0f, 0x1.d4010ap-18f, 0x1.e44e1p-59f,
     0.0f, 0.0f, 0.0f, 0x1.70f9cep-67f, 0x1.dc791p-88f, 0x1.71ae56p-28f,
     0x1.63228ap-95f, 0x1.c5d02ep-81f, 0.0f, 0.0f, 0x1.aa2a6cp-77f, 0.0f,
     0x1.f9c1eep-91f, 0.0f, 0x1.15a53ap-107f, 0.0f, 0x1.eba7f4p-28f, 0.0f,
     0x1.c19962p-49f, 0.0f, 0.0f, 0.0f, 0x1.30c21p-117f, 0x1.38da24p-43f, 0.0f,
     0x1.81b026p-86f, 0x1.a15986p-80f, 0.0f, 0.0f, 0x1.88848cp-112f, 0x1.1544e4p-11f,
     0.0f, 0x1.99e242p-40f, 0.0f, 0.0f, 0.0f, 0x1.f27524p-110f, 0x1.237712p-115f,
     0x1.de8b68p-125f, 0x1.ec054ap-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0edd9ep-71f,
     0x1.b45272p-115f, 0x1.e142eap-123f, 0x1.b6e116p-45f, 0.0f, 0.0f, 0x1.7c7c42p-85f,
     0x1.e1cf14p-34f, 0.0f, 0.0f, 0x1.ebc7fcp-22f, 0x1.fae546p-88f, 0x1.63752p-1f,
     0.0f, 0x1.07d0b2p-65f, 0x1.8322bp-23f, 0.0f, 0x1.a3e3cp-66f, 0.0f,
     0x1.9017c6p-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.70f5f8p-44f, 0.0f,
     0x1.a4b7a6p-39f, 0x1.220894p-3f, 0.0f, 0.0f, 0.0f, 0x1.fbb39p-80f,
     0x1.407178p-111f, 0.0f, 0x1.2d8eb4p-2f, 0x1.5640fp-23f, 0.0f, 0x1.4d0264p-111f,
     0.0f, 0.0f, 0.0f, 0x1.b097fp-22f, 0.0f, 0x1.6820e4p-125f, 0x1.98628p-59f, 0.0f,
     0x1.fdf85p-79f, 0x1.7a3586p-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.62743p-104f, 0.0f,
     0x1.244612p-9f, 0x1.937386p-23f, 0x1.0d27cap-42f, 0.0f, 0.0f, 0x1.2db19p-2f,
     0.0f, 0x1.f9335p-1f, 0.0f, 0.0f, 0x1.e493fcp-97f, 0x1.b7ae62p-40f,
     0x1.e13002p-55f, 0x1.17759p-89f, 0x1.f17948p-79f, 0x1.004e68p-51f, 0.0f,
     0x1.4c95b2p-78f, 0.0f, 0.0f, 0x1.131776p-53f, 0x1.64b968p-52f, 0.0f,
     0x1.214b54p-49f, 0x1.0e0332p-52f, 0x1.e2f216p-121f, 0x1.90e25p-115f, 0.0f,
     0x1.b24574p-67f, 0x1.9905dp-113f, 0.0f, 0x1.f2a3c8p-86f, 0.0f, 0x1.24a086p-84f,
     0x1.db5384p-109f, 0.0f, 0x1.47836ap-60f, 0.0f, 0x1.87b904p-103f,
     0x1.08eca8p-112f, 0x1.6df21p-50f, 0.0f, 0x1.10c9acp-46f, 0.0f, 0x1.2786f4p-115f,
     0.0f, 0.0f, 0.0f, 0x1.6d4068p-51f, 0x1.6f5b8cp-46f, 0.0f, 0.0f, 0x1.6e192cp-24f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ff87p-76f, 0.0f,
     0x1.691c14p-89f, 0.0f, 0.0f, 0x1.90e8c4p-59f, 0x1.865c98p-41f, 0.0f, 0.0f,
     0x1.0aad48p-50f, 0.0f, 0.0f, 0x1.20598ap-41f, 0.0f, 0x1.0cbap-8f,
     0x1.989076p-64f, 0.0f, 0x1.d1e46ep-66f, 0.0f, 0.0f, 0x1.00db74p-81f,
     0x1.cbc212p-107f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.c52656p-14f, 0x1.275e22p-49f,
     0x1.39fcd8p-53f, 0x1.cc1622p-114f, 0.0f, 0x1.c60942p-33f, 0x1.3fdb9p-18f,
     0x1.9a7c82p-54f, 0x1.9de3dep-46f, 0x1.7f4302p-46f, 0.0f, 0x1.603416p-75f, 0.0f,
     0.0f, 0.0f, 0x1.b2bf54p-19f, 0.0f, 0x1.105918p-13f, 0x1.533a2ep-64f,
     0x1.450746p-63f, 0.0f, 0.0f, 0x1.ccac8ap-116f, 0x1.c6bbb4p-28f, 0x1.ffb8e4p-69f,
     0x1.f5b414p-67f, 0x1.9a85dp-53f, 0.0f, 0.0f, 0.0f, 0x1.409d0cp-92f, 0.0f,
     0x1.54f9f2p-114f, 0x1.761a66p-77f, 0.0f, 0x1.9b89b6p-72f, 0x1.f655fp-100f,
     0x1.07e08cp-17f, 0.0f, 0.0f, 0x1.0aba72p-68f, 0.0f, 0x1.e057d4p-110f,
     0x1.ed6bd4p-86f, 0.0f, 0.0f, 0x1.56f888p-72f, 0x1.cca1bap-16f, 0x1.51dc1cp-37f,
     0x1.d5336ap-51f, 0.0f, 0x1.01ec9p-54f, 0.0f, 0x1.1cc802p-40f, 0.0f,
     0x1.a5a38ap-12f, 0.0f, 0.0f, 0x1.7fd518p-70f, 0x1.6518a2p-9f, 0x1.b610f2p-10f,
     0.0f, 0x1.18e6d8p-119f, 0x1.d3e9cp-63f, 0.0f, 0x1.5dc08ap-101f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.1165aap-72f, 0x1.61a4dcp-33f, 0x1.7ad89ep-83f, 0x1.84c8ecp-25f,
     0x1.193c74p-49f, 0x1.0fb85cp-92f, 0x1.fbf84ap-82f, 0x1.b3f6p-29f, 0.0f,
     0x1.28b69p-121f, 0x1.7930a6p-18f, 0.0f, 0x1.a9989p-9f, 0.0f, 0x1.34928ep-101f,
     0x1.e29ac6p-48f, 0x1.a643cap-70f, 0.0f, 0x1.702798p-122f, 0.0f, 0x1.93073cp-117f,
     0.0f, 0.0f, 0.0f, 0x1.c54c54p-11f, 0.0f, 0x1.f7d848p-96f, 0x1.d8d21cp-28f, 0.0f,
     0x1.b05034p-88f, 0.0f, 0x1.0f05b4p-45f, 0.0f, 0x1.2cbbccp-19f, 0x1.bfbf8cp-76f,
     0x1.6a936ep-24f, 0.0f, 0x1.c583f4p-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0b3c28p-25f,
     0x1.a17d82p-23f, 0x1.627596p-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.0fc296p-115f, 0.0f, 0.0f, 0x1.b66dbep-109f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.824344p-46f, 0.0f, 0.0f, 0x1.3ea0bep-119f, 0x1.52aff8p-85f, 0.0f,
     0x1.3644cep-32f, 0x1.6ecfd2p-19f, 0x1.804ca6p-126f, 0.0f, 0.0f, 0.0f,
     0x1.944432p-69f, 0x1.b3bcp-39f, 0x1.d15a82p-7f, 0x1.0f02f8p-43f, 0.0f,
     0x1.7e0eeap-93f, 0x1.ee3cd4p-113f, 0x1.4921dap-39f, 0.0f, 0x1.fc33d2p-3f, 0.0f,
     0x1.07d794p-117f, 0.0f, 0.0f, 0x1.7f045ap-21f, 0.0f, 0.0f, 0x1.1cb0a4p-99f,
     0x1.3b91e2p-104f, 0x1.f58c02p-19f, 0x1.292cc4p-2f, 0.0f, 0.0f, 0x1.fbdaa4p-19f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a6ab12p-114f, 0.0f, 0x1.5a7d18p-45f, 0.0f,
     0x1.70dcdap-121f, 0.0f, 0.0f, 0x1.62ddd6p-40f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.04646p-61f, 0.0f, 0.0f, 0x1.55914p-103f, 0.0f, 0.0f, 0x1.c1af52p-43f, 0.0f,
     0.0f, 0x1.7d8214p-92f, 0.0f, 0x1.8ee5bep-79f, 0x1.6b9d76p-46f, 0.0f,
     0x1.2bb10cp-120f, 0.0f, 0x1.004266p-57f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f,
     0.0f, 0x1.48d714p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.50a16p-3f, 0x1.ba434cp-8f, 0.0f, 0x1.33f30cp-36f, 0.0f,
     0x1.edc52ap-88f, 0x1.7c3a3p-52f, 0x1.174248p-116f, 0x1.e4ecb4p-83f, 0.0f, 0.0f,
     0x1.bcf48cp-19f, 0x1.c30006p-56f, 0x1.9ec94p-87f, 0x1.b1c1f6p-62f,
     0x1.4d172p-99f, 0x1.89c9a6p-69f, 0x1.6ef034p-104f, 0.0f, 0x1.f26ce4p-123f, 0.0f,
     0x1.e4e61cp-20f, 0.0f, 0x1.279b36p-103f, 0x1.958dd2p-3f, 0.0f, 0x1.47045ep-15f,
     0x1.e8ae9cp-56f, 0x1.7a0376p-20f, 0x1p0f, 0.0f, 0x1.3a8ed8p-91f, 0.0f, 0.0f,
     0x1.b8fee4p-92f, 0.0f, 0x1.ceb138p-25f, 0.0f, 0.0f, 0.0f, 0x1.e3b8f2p-43f, 0.0f,
     0x1.ecc0a2p-35f, 0.0f, 0x1.3f1a24p-68f, 0.0f, 0x1.ff5c26p-36f, 0.0f,
     0x1.da1838p-2f, 0x1.340662p-31f, 0x1.851e2p-3f, 0x1.8d6408p-30f, 0x1.6b8528p-77f,
     0x1.caa4b8p-103f, 0.0f, 0x1.46b25p-73f, 0x1.c6c228p-85f, 0.0f, 0.0f, 0.0f,
     0x1.7187f4p-70f, 0.0f, 0x1.0c90f4p-67f, 0.0f, 0.0f, 0.0f, 0x1.5abc8ep-67f, 0.0f,
     0.0f, 0x1.e43876p-2f, 0.0f, 0.0f, 0x1.c5cfa8p-46f, 0.0f, 0.0f, 0x1.b342cap-67f,
     0x1.fc1fap-12f, 0.0f, 0.0f, 0x1.77d2dap-100f, 0x1.a47686p-68f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.47fc58p-42f, 0.0f, 0.0f, 0.0f, 0x1.80bb5ep-8f, 0.0f, 0.0f, 0.0f,
     0x1.6d41p-121f, 0.0f, 0x1.c5b73ap-71f, 0x1.cbd986p-106f, 0.0f, 0x1.a9dd1p-27f,
     0.0f, 0x1.5f1474p-65f, 0x1.9007cep-81f, 0.0f, 0x1.6cdefep-84f, 0.0f,
     0x1.dc8484p-101f, 0x1.2062eap-71f, 0x1.3b63ep-34f, 0x1.85729ap-120f,
     0x1.22f18p-6f, 0.0f, 0.0f, 0.0f, 0x1.994294p-51f, 0x1.18ee06p-30f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.6ee61ep-3f, 0x1.888d16p-49f, 0.0f, 0x1.d8319ap-73f, 0.0f,
     0x1.11d5aep-58f, 0x1.ef88a8p-74f, 0.0f, 0.0f, 0x1.9a9aa6p-57f, 0.0f, 0.0f,
     0x1.13389cp-91f, 0x1.255ddp-73f, 0.0f, 0.0f, 0.0f, 0x1.babeacp-10f, 0.0f, 0.0f,
     0.0f, 0x1.4bab7ap-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3f01c4p-40f, 0.0f,
     0x1.5d8708p-5f, 0.0f, 0x1.5866e2p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.72e354p-103f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.775358p-24f, 0x1.98645cp-85f, 0.0f, 0.0f,
     0x1.2f96b6p-119f, 0.0f, 0.0f, 0x1.9fafccp-83f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.32a1bp-63f, 0x1.4cd1b6p-62f, 0x1.9efb06p-70f, 0x1.3a20cp-87f, 0x1.e410d6p-7f,
     0x1.eb3334p-50f, 0x1.8d3e3p-3f, 0x1.21dfa8p-14f, 0x1.92904ap-20f, 0x1.748392p-8f,
     0.0f, 0.0f, 0.0f, 0x1.0b7b66p-40f, 0x1.da5a44p-54f, 0.0f, 0x1.a87b64p-42f,
     0x1.a28a78p-21f, 0x1.065b84p-102f, 0x1.3d459ap-95f, 0x1.259edep-92f,
     0x1.6679fp-47f, 0.0f, 0x1.df7684p-40f, 0x1.342cp-51f, 0.0f, 0.0f, 0x1.dc84dep-3f,
     0x1.a07096p-51f, 0x1.dbbcd2p-126f, 0x1.3bce08p-46f, 0.0f, 0.0f, 0.0f,
     0x1.da23aep-12f, 0.0f, 0x1.7c9c06p-30f, 0x1.da109p-81f, 0.0f, 0x1.96c56cp-97f,
     0x1.bd641cp-29f, 0x1.3572fap-54f, 0.0f, 0x1.78e978p-109f, 0.0f, 0.0f, 0.0f,
     0x1.06c8bcp-104f, 0.0f, 0.0f, 0x1.1c153cp-67f, 0x1.2d76e6p-22f, 0x1.49cc18p-37f,
     0.0f, 0x1.8c3a7ep-11f, 0.0f, 0x1.f34ep-72f, 0x1.5ef15ap-117f, 0x1.654c5p-60f,
     0x1.5f5e4cp-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.df8572p-117f, 0.0f, 0x1.313f4p-24f,
     0x1.a20f26p-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.57ec9ep-76f, 0x1.6042bap-41f,
     0x1.dc22e6p-106f, 0.0f, 0.0f, 0x1.6e90a8p-38f, 0.0f, 0.0f, 0x1.a194bcp-72f, 0.0f,
     0.0f, 0.0f, 0x1.597ceap-116f, 0x1.daf048p-55f, 0.0f, 0x1.c7000ap-18f, 0.0f,
     0x1.2a2a5cp-29f, 0.0f, 0.0f, 0.0f, 0x1.af16a2p-102f, 0.0f, 0x1.caeb84p-85f, 0.0f,
     0.0f, 0x1.cc793cp-95f, 0x1.ba040cp-70f, 0.0f, 0.0f, 0x1.0288fp-53f,
     0x1.901268p-30f, 0.0f, 0x1.b2a3bp-58f, 0.0f, 0.0f, 0x1.4f0378p-41f, 0.0f,
     0x1.839712p-27f, 0x1.ee3b0ep-98f, 0x1.ae571p-98f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6fc59ap-1f, 0x1.0e972cp-73f, 0x1.7d6f36p-96f, 0.0f, 0.0f, 0.0f,
     0x1.41dc1ep-41f, 0x1.710c2p-36f, 0x1.435a94p-29f, 0.0f, 0.0f, 0x1.6888b8p-71f,
     0x1.7a927ap-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1c3016p-37f, 0.0f,
     0x1.a814dcp-52f, 0.0f, 0.0f, 0x1.18e082p-102f, 0.0f, 0.0f, 0.0f, 0x1.fb81cep-37f,
     0.0f, 0x1.52be6ap-123f, 0x1.30fd16p-116f, 0.0f
};
static const float external_bench_wrapper_input_table_arg1[1008]  = {
     0.0f, 0x1.ba84cep-114f, 0x1.839198p-56f, 0x1.28f27ep-102f, 0.0f,
     0x1.db29dcp-53f, 0x1.35a642p-9f, 0.0f, 0x1.55f50ap-7f, 0.0f, 0.0f,
     0x1.297908p-69f, 0x1.150d78p-117f, 0.0f, 0.0f, 0.0f, 0x1.d2d562p-23f,
     0x1.821966p-60f, 0x1.c2e3bap-92f, 0x1.41961p-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a22ab2p-55f, 0x1.88356ep-4f, 0x1.c750b6p-91f, 0x1.99eadep-67f, 0.0f, 0.0f,
     0.0f, 0x1.73373ep-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9ce174p-98f,
     0x1.7dda7ep-123f, 0x1.a556a2p-6f, 0x1.31836cp-50f, 0.0f, 0.0f, 0x1.2f8a16p-47f,
     0.0f, 0.0f, 0x1.9e1f56p-60f, 0.0f, 0x1.02b5f2p-106f, 0.0f, 0x1.478bc2p-106f,
     0.0f, 0x1.fa0ebep-85f, 0x1.080dc8p-17f, 0x1.059ebap-94f, 0x1.b639e6p-18f,
     0x1.9cd7e8p-4f, 0x1.5384ecp-61f, 0x1.6f9d86p-27f, 0x1.ac339p-50f, 0x1.c3b69p-12f,
     0.0f, 0.0f, 0.0f, 0x1.4464fcp-57f, 0x1.36e76p-83f, 0x1.74c586p-17f,
     0x1.4a5736p-123f, 0x1.aa3bf8p-53f, 0.0f, 0x1.a3dc58p-51f, 0.0f, 0.0f,
     0x1.6dde14p-110f, 0.0f, 0x1.f62a7p-118f, 0x1.3c22d6p-21f, 0x1.5d629cp-56f, 0.0f,
     0x1.6f3dp-125f, 0x1.9dd2aap-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7fc61cp-79f,
     0.0f, 0x1.6bf3eap-66f, 0x1.8b98a8p-59f, 0x1.72c9dap-120f, 0x1.a2327p-79f, 0.0f,
     0x1.e2c614p-58f, 0.0f, 0.0f, 0x1.02e12p-40f, 0.0f, 0.0f, 0.0f, 0x1.567824p-64f,
     0x1.3c3f3ap-97f, 0x1.5af0d6p-62f, 0x1.d63b86p-18f, 0x1.3775cep-93f, 0.0f, 0.0f,
     0x1.30fc44p-21f, 0x1.441c38p-56f, 0.0f, 0.0f, 0.0f, 0x1.c8a98ap-117f,
     0x1.41c838p-9f, 0x1.248762p-19f, 0x1.97b8d8p-71f, 0.0f, 0x1.41f33ap-116f,
     0x1.236aa6p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0f486ep-107f, 0.0f, 0.0f,
     0x1.fbcd04p-4f, 0.0f, 0x1.5f363ep-119f, 0x1.48cd0cp-56f, 0.0f, 0.0f, 0.0f,
     0x1.4b6124p-112f, 0.0f, 0.0f, 0x1.3e04a8p-80f, 0.0f, 0x1.53aebap-115f,
     0x1.5a436ap-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.62f59ap-27f, 0.0f, 0.0f,
     0x1.e1e898p-106f, 0x1.5fa7aep-93f, 0x1.d21312p-103f, 0.0f, 0.0f, 0x1.bcc32ap-84f,
     0x1.9c01e2p-116f, 0x1.791082p-56f, 0x1.a292aap-33f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d66538p-79f, 0x1.cca5cp-74f, 0x1.7c2c42p-56f, 0.0f, 0x1.2e0a58p-19f, 0.0f,
     0.0f, 0.0f, 0x1.1f1106p-24f, 0.0f, 0x1.da0112p-80f, 0x1.568f1ep-123f, 0.0f, 0.0f,
     0x1.1b7182p-108f, 0x1.7d1576p-32f, 0x1.400304p-103f, 0.0f, 0.0f, 0x1.4b6e8ap-79f,
     0x1.0340dp-70f, 0x1.9fb63ap-2f, 0.0f, 0x1.1c39fcp-31f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.007786p-41f, 0x1.3af1d4p-41f, 0.0f, 0.0f, 0x1.ab1d96p-7f, 0x1.f5da9ep-99f,
     0x1.79bbfap-58f, 0x1.a2701p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1dc048p-51f,
     0x1.71aa9ap-83f, 0.0f, 0x1.01a9f2p-66f, 0.0f, 0x1.e9f89cp-115f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.35492cp-20f, 0x1.e7cc4ap-100f, 0x1.4fb70ep-34f, 0.0f, 0.0f,
     0.0f, 0x1.468922p-72f, 0x1.3f70e4p-60f, 0.0f, 0.0f, 0x1.54471p-109f, 0.0f, 0.0f,
     0x1.18c246p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.aecb78p-65f,
     0x1.eda4ep-1f, 0x1.c62bbcp-63f, 0x1.3dc66cp-120f, 0x1.266fb8p-27f,
     0x1.3f5548p-4f, 0.0f, 0.0f, 0x1.e57c74p-100f, 0x1.b1103ap-89f, 0.0f,
     0x1.d42012p-73f, 0.0f, 0x1.d181a4p-60f, 0x1.f0d70ap-125f, 0.0f, 0.0f, 0.0f,
     0x1.9f1af6p-85f, 0x1.d05d36p-74f, 0.0f, 0.0f, 0x1.b6125ep-84f, 0x1.b8a86cp-24f,
     0x1.3e4964p-73f, 0.0f, 0.0f, 0x1.be5b44p-49f, 0x1.84213cp-83f, 0.0f,
     0x1.42809ep-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.743508p-123f, 0.0f,
     0x1.99ec52p-11f, 0.0f, 0x1.fe3604p-125f, 0.0f, 0x1.581c92p-86f, 0x1.25ebfcp-29f,
     0x1.19aa06p-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c2d26p-123f, 0x1.07b3cp-85f,
     0x1.b813e4p-91f, 0.0f, 0x1.cc7e48p-52f, 0.0f, 0x1.70175ap-122f, 0x1.96d3a8p-11f,
     0x1.8b9bc2p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.de88a4p-55f, 0x1.85a52p-37f, 0.0f,
     0.0f, 0x1.4f4e76p-14f, 0x1.b73072p-107f, 0x1.f04338p-85f, 0.0f, 0.0f, 0.0f,
     0x1.2b7d12p-16f, 0.0f, 0.0f, 0x1.2741e2p-85f, 0x1.d36e4ap-51f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e4844ep-76f, 0x1.899cb6p-1f, 0.0f, 0.0f, 0x1.79e6a4p-77f,
     0x1.00897ep-81f, 0x1.8491dap-8f, 0.0f, 0x1.47237p-46f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d365dp-16f, 0x1.39acbap-83f, 0x1.7011e6p-5f, 0x1.98208p-121f, 0x1.30e99ep-5f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f1167ap-9f, 0x1.580202p-95f, 0x1.48dcb4p-36f,
     0.0f, 0x1.9759ap-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f1c4dep-79f, 0x1.c76d7ap-73f,
     0x1.b8795cp-122f, 0.0f, 0x1.b4e008p-51f, 0.0f, 0.0f, 0x1.db5a0cp-105f, 0.0f,
     0x1.7843c6p-87f, 0x1.e31b88p-60f, 0.0f, 0x1.d2e0b2p-82f, 0.0f, 0x1.4fe94p-73f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.916106p-7f, 0x1.014e8ep-71f, 0.0f,
     0x1.9b679p-53f, 0x1.2ea6c8p-60f, 0x1.cf636p-107f, 0.0f, 0x1.14875cp-19f,
     0x1.24e7e8p-72f, 0.0f, 0.0f, 0.0f, 0x1.d3a308p-30f, 0x1.4b0812p-41f, 0.0f, 0.0f,
     0x1.358af4p-30f, 0.0f, 0x1.98b982p-66f, 0x1p0f, 0.0f, 0x1.d41e26p-111f,
     0x1.cadb96p-63f, 0.0f, 0x1.3341acp-3f, 0x1.931b6ep-2f, 0x1.9ac3a2p-63f, 0.0f,
     0.0f, 0x1.047a4ap-40f, 0.0f, 0x1.3d29ccp-50f, 0x1.b7db1p-79f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.9c24eap-60f, 0x1.dba722p-48f, 0x1.ba838cp-4f, 0x1.c37e46p-10f,
     0.0f, 0x1.e2d2cap-51f, 0.0f, 0x1.c12b5ap-122f, 0x1.379fc8p-41f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.03140cp-101f, 0.0f, 0.0f, 0x1.c9eb72p-49f, 0x1.7833b8p-64f,
     0x1.288902p-107f, 0x1.b33502p-20f, 0.0f, 0.0f, 0x1.9941e6p-5f, 0.0f,
     0x1.de98eap-52f, 0x1.b9ac74p-18f, 0x1.1ac5f6p-5f, 0x1.da7fc6p-97f,
     0x1.8ee40cp-93f, 0x1.03fd4cp-104f, 0x1.7683eap-108f, 0x1.267fc4p-30f, 0.0f, 0.0f,
     0.0f, 0x1.ec6676p-24f, 0x1.d7b714p-16f, 0x1.45874cp-11f, 0.0f, 0x1.505d1p-81f,
     0.0f, 0.0f, 0x1.c8ad68p-12f, 0.0f, 0x1.47de28p-107f, 0x1.64a99cp-35f, 0.0f, 0.0f,
     0x1.4c4af6p-49f, 0.0f, 0x1.33bb9ap-78f, 0.0f, 0x1.394cb2p-83f, 0.0f, 0.0f,
     0x1.101bfap-81f, 0x1.432c48p-98f, 0x1.671bacp-46f, 0.0f, 0x1.009572p-9f, 0.0f,
     0x1.5cc1a8p-62f, 0x1.5a3e7ap-37f, 0x1.d3d186p-73f, 0x1.399fe2p-45f,
     0x1.8ed01cp-113f, 0x1.8b9a6ap-39f, 0x1.30081cp-70f, 0.0f, 0x1.ae29fap-82f, 0.0f,
     0x1.31738cp-100f, 0x1.f048c2p-22f, 0.0f, 0.0f, 0x1.a3beb8p-113f, 0x1.405edep-7f,
     0x1.3e007cp-51f, 0x1.20c694p-40f, 0.0f, 0x1.9eb9d6p-30f, 0x1.14eb3p-18f, 0.0f,
     0x1.e2e1ep-6f, 0x1.16b06cp-123f, 0x1.e80f76p-30f, 0.0f, 0x1.c5cd24p-35f,
     0x1.e95d24p-84f, 0.0f, 0x1.07301ap-118f, 0x1.e4d752p-118f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.eec66ap-82f, 0x1.7256p-106f, 0.0f, 0x1.c514c8p-32f, 0.0f,
     0x1.083a14p-40f, 0.0f, 0x1.42886ep-59f, 0.0f, 0x1.cf8b38p-10f, 0.0f, 0.0f,
     0x1.177366p-70f, 0x1.596bd6p-78f, 0.0f, 0.0f, 0x1.afea8cp-42f, 0x1.808302p-60f,
     0x1.15a1f4p-36f, 0.0f, 0.0f, 0x1.f0c0e4p-67f, 0.0f, 0x1.82bf04p-49f, 0.0f, 0.0f,
     0x1.8be60cp-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d7d7a2p-74f, 0x1.fbdd26p-39f, 0.0f,
     0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d027dap-59f, 0x1.5f5254p-56f, 0.0f,
     0x1.df64f8p-92f, 0.0f, 0.0f, 0x1.12d5d2p-102f, 0x1.c97d92p-120f, 0.0f,
     0x1.f990dcp-23f, 0x1.9cb686p-122f, 0x1.1fc734p-7f, 0.0f, 0x1.00804ap-122f, 0.0f,
     0x1.f4d1a6p-123f, 0x1.d24ad6p-68f, 0x1.9b8864p-38f, 0x1.345eaap-35f,
     0x1.702b86p-11f, 0.0f, 0x1.f25c4cp-19f, 0x1.e4c07ep-80f, 0.0f, 0.0f,
     0x1.4d3f94p-58f, 0.0f, 0x1.a15026p-58f, 0x1.946c76p-50f, 0x1.1ac686p-108f,
     0x1.79453p-15f, 0.0f, 0.0f, 0.0f, 0x1.73e1ccp-114f, 0x1.66aa98p-83f,
     0x1.7b95fp-96f, 0.0f, 0x1.1747ep-76f, 0x1.46717p-7f, 0x1.b3be02p-41f, 0.0f,
     0x1.caa906p-96f, 0.0f, 0x1.26be6ap-109f, 0.0f, 0x1.123e16p-106f, 0x1.f5abdap-15f,
     0.0f, 0x1.076c88p-68f, 0.0f, 0.0f, 0x1.607916p-70f, 0x1.3293b8p-65f, 0.0f,
     0x1.59d6c8p-126f, 0.0f, 0x1.3a5d72p-21f, 0x1.1cab26p-86f, 0x1.b23416p-25f, 0.0f,
     0x1.7f141ep-123f, 0.0f, 0x1.d710b4p-36f, 0x1.8d2fep-107f, 0x1.7ff48ap-92f, 0.0f,
     0x1.73915p-105f, 0.0f, 0.0f, 0.0f, 0x1.e73896p-14f, 0.0f, 0.0f, 0.0f,
     0x1.0a6c2p-28f, 0x1.0e41dap-113f, 0x1.0d2ba6p-122f, 0x1.205c3ep-29f,
     0x1.6c78eep-49f, 0.0f, 0x1.13303ep-45f, 0x1.af61d8p-30f, 0.0f, 0x1.984c6ep-30f,
     0x1.cb732cp-1f, 0x1.324dd8p-9f, 0x1.0012p-81f, 0x1.52efecp-43f, 0.0f,
     0x1.cc7006p-106f, 0x1.d41a06p-41f, 0x1.1a8e3p-11f, 0.0f, 0x1.f59d3ap-15f,
     0x1.c6d09ap-108f, 0.0f, 0.0f, 0.0f, 0x1.db08a2p-27f, 0x1.9eac5p-94f,
     0x1.4640ecp-41f, 0.0f, 0x1.fe173ap-1f, 0x1.3095p-71f, 0.0f, 0x1.31ad0cp-117f,
     0.0f, 0.0f, 0.0f, 0x1.42ee28p-26f, 0.0f, 0.0f, 0x1.4c7334p-3f, 0x1.40c708p-41f,
     0.0f, 0x1.2d05cap-75f, 0.0f, 0x1.ff03d8p-102f, 0.0f, 0x1.d1a03cp-39f, 0.0f, 0.0f,
     0x1.9012fp-8f, 0x1.53eb82p-55f, 0.0f, 0.0f, 0.0f, 0x1.805f2ep-102f, 0.0f, 0.0f,
     0x1.fd726cp-83f, 0.0f, 0x1.8bb716p-124f, 0.0f, 0.0f, 0x1.578d8ep-108f,
     0x1.52165ep-77f, 0.0f, 0.0f, 0x1.2b780ap-35f, 0x1.eec68ep-9f, 0.0f,
     0x1.5c0f3p-37f, 0x1.81c5acp-18f, 0.0f, 0.0f, 0x1.69556ap-5f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b054bap-1f, 0.0f, 0x1.4de1fep-118f, 0x1.41a43cp-62f,
     0x1.c8aea2p-58f, 0x1.ee07c6p-43f, 0.0f, 0.0f, 0.0f, 0x1.b812dp-40f, 0.0f, 0.0f,
     0x1.4ab55ap-105f, 0x1.0b6106p-107f, 0x1.c91d72p-45f, 0x1.5c0c3cp-100f,
     0x1.de3d9ep-34f, 0x1.e35542p-9f, 0x1.4c739ep-38f, 0.0f, 0x1.8bd966p-105f,
     0x1.1c6384p-106f, 0x1.84910ep-30f, 0.0f, 0.0f, 0x1.e20fc8p-3f, 0.0f, 0.0f, 0.0f,
     0x1.338254p-70f, 0.0f, 0.0f, 0x1.b3f9b2p-117f, 0x1.d6095p-81f, 0.0f,
     0x1.05bde6p-87f, 0x1.e47da4p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7978acp-79f, 0x1.7c2aecp-74f, 0x1.639dep-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.9b4972p-54f, 0.0f, 0x1.55a6ccp-7f, 0x1.95e974p-36f,
     0x1.5359fep-18f, 0x1.eed99ep-57f, 0.0f, 0.0f, 0x1.a80e84p-77f, 0x1.686d54p-13f,
     0x1.528e3p-121f, 0.0f, 0.0f, 0x1.c3d1dp-121f, 0.0f, 0x1.9d4c12p-57f, 0.0f,
     0x1.f0d4a8p-63f, 0x1.da72ccp-78f, 0x1.ab90b2p-80f, 0.0f, 0.0f, 0x1.08461cp-99f,
     0x1.263156p-114f, 0x1.0f68e6p-8f, 0.0f, 0x1.128a18p-87f, 0x1.a8ded2p-96f,
     0x1.678f1p-12f, 0x1.359f04p-79f, 0x1.14e49cp-65f, 0x1.1c6602p-31f,
     0x1.3ddb34p-72f, 0x1.768094p-105f, 0.0f, 0x1.361264p-76f, 0.0f, 0x1.48ac26p-121f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e22096p-81f, 0x1.4e0426p-83f, 0.0f, 0x1.7e6e64p-46f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e2164cp-112f, 0.0f, 0x1.2183aep-48f, 0x1.d93718p-91f,
     0.0f, 0x1.158a92p-104f, 0x1.cc4p-15f, 0.0f, 0x1.f9b816p-42f, 0.0f,
     0x1.e9e1f8p-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.631ae4p-73f, 0.0f,
     0x1.0f9a56p-53f, 0.0f, 0x1.508cbp-58f, 0x1.b8b00ap-9f, 0.0f, 0.0f, 0.0f,
     0x1.22f09cp-70f, 0x1.ce1336p-70f, 0.0f, 0.0f, 0.0f, 0x1.3466bp-52f,
     0x1.2b3e8p-63f, 0x1.2230dp-16f, 0x1.9c571p-58f, 0.0f, 0x1.08a1a8p-124f,
     0x1.71681ap-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.257dbcp-39f, 0.0f,
     0x1.2e58f2p-110f, 0x1.fde4cp-25f, 0.0f, 0x1.3228f8p-77f, 0x1.9db63ap-8f, 0.0f,
     0.0f, 0.0f, 0x1.250138p-111f, 0.0f, 0.0f, 0x1.b2c474p-91f, 0.0f, 0x1.a072e6p-58f,
     0x1.2e15b6p-17f, 0.0f, 0x1.793bfcp-87f, 0.0f, 0.0f, 0.0f, 0x1.199f12p-81f, 0.0f,
     0x1.e44ad8p-3f, 0x1.59e65p-16f, 0x1.f45df2p-62f, 0.0f, 0x1.14e852p-10f, 0.0f,
     0x1.1488c4p-46f, 0x1.760ba4p-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.78d97p-91f,
     0x1.192c32p-85f, 0x1.7d2004p-37f, 0x1.89175ep-95f, 0x1.27b52cp-14f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ebcd12p-94f, 0x1.60867ep-92f, 0x1.6aea3cp-76f, 0.0f, 0.0f, 0.0f,
     0x1.5c9412p-16f, 0.0f, 0x1.9229dcp-8f, 0.0f, 0.0f, 0x1.6b3314p-35f,
     0x1.2a2c04p-10f, 0.0f, 0x1.70e0a4p-30f, 0.0f, 0.0f, 0x1.85f816p-71f, 0.0f,
     0x1.e57baap-64f, 0x1.58ff72p-98f, 0x1.afd492p-72f, 0x1.de6728p-90f, 0.0f, 0.0f,
     0x1.376cf6p-48f, 0.0f, 0.0f, 0x1.44938ep-97f, 0.0f, 0x1.5ad51p-101f,
     0x1.3941aap-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.afad84p-23f, 0.0f,
     0x1.74e332p-115f, 0.0f, 0x1.e49dc8p-75f, 0x1.ac5428p-97f, 0.0f, 0x1.3b62aap-2f,
     0x1.b6102ap-85f, 0.0f, 0x1.f608d2p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a7719ep-120f, 0x1.66359cp-49f, 0.0f, 0.0f, 0x1.951c72p-45f, 0.0f, 0.0f,
     0x1.0eb1dp-103f, 0.0f, 0.0f, 0.0f, 0x1.3e0776p-72f, 0.0f, 0x1.1ff352p-108f, 0.0f,
     0x1.081a3ep-59f, 0.0f, 0x1.f1f0e2p-71f, 0x1.a8b4a4p-102f, 0.0f, 0x1.b7e74p-9f,
     0x1.1780a2p-70f, 0.0f, 0x1.0fc4c8p-61f, 0x1.21e104p-42f, 0x1.b42e56p-12f, 0.0f,
     0.0f, 0x1.d08ff4p-123f, 0.0f, 0.0f, 0.0f, 0x1.ec04dap-46f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.0aac1cp-1f, 0x1.312b78p-94f, 0x1.2937bep-1f, 0x1.032768p-51f,
     0x1.72a304p-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9673cep-7f, 0x1.6af4p-27f,
     0x1.48f69ep-5f, 0x1.49c03ep-56f, 0x1.543378p-93f, 0.0f, 0x1p0f, 0x1.9cfccp-41f,
     0x1.db76e2p-89f, 0.0f, 0x1.83ffc4p-27f, 0x1.9d9a7ep-24f, 0.0f, 0x1.69d13ep-11f,
     0.0f, 0x1.8621a4p-6f, 0x1.8e53aep-63f, 0x1.2aa84cp-116f, 0x1.6d4014p-103f
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
            ml_float8_t tmp3;
            int32_t tmp4;

            memcpy(&tmp0, ((ml_float8_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            memcpy(&tmp1, ((ml_float8_t*)(external_bench_wrapper_input_table_arg1+ i)), 32);
            tmp2 = Sleef_nextafterf8_kvx(tmp0, tmp1);
            memcpy(((ml_float8_t*)(external_bench_wrapper_output_table+ i)), &(tmp2), 32);
            tmp3 = local_acc + tmp2;
            local_acc = tmp3;
            tmp4 = i + INT32_C(8);
            i = tmp4;
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
    printf("Sleef_nextafterf8_kvx %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_nextafterf8_kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
