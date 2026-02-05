/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_atan2f8_u35kvx.c --function Sleef_atan2f8_u35kvx \
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
     0x1.cc15b6p-121f, 0.0f, 0.0f, 0x1.ccaff4p-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.993dcp-108f, 0.0f, 0x1.4adfdp-108f, 0x1.83ce5ap-37f, 0x1.2ce1a8p-64f,
     0x1.27b20ap-110f, 0x1.b9750cp-16f, 0.0f, 0x1.8c0a7p-28f, 0x1.b78124p-15f, 0.0f,
     0x1.fbf692p-110f, 0.0f, 0x1.2439cep-91f, 0.0f, 0.0f, 0x1.d5b254p-74f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ddbe2ep-41f, 0.0f, 0x1.e798f8p-22f, 0x1.0ac81p-98f, 0.0f, 0.0f,
     0x1.b217a2p-50f, 0.0f, 0.0f, 0.0f, 0x1.ade2c8p-61f, 0x1.d292bcp-33f,
     0x1.ac8126p-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fd7c34p-97f, 0x1.b71a52p-40f,
     0x1.9477bcp-50f, 0x1.17073p-65f, 0x1.e565aep-55f, 0.0f, 0.0f, 0x1.a2e344p-48f,
     0.0f, 0x1.2ab396p-90f, 0x1.df1a62p-1f, 0x1.ec4accp-5f, 0.0f, 0x1.7fbd18p-92f,
     0.0f, 0x1.57d0e2p-33f, 0.0f, 0x1.71ed1p-34f, 0.0f, 0.0f, 0.0f, 0x1.f6a47ap-103f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.646f5cp-94f, 0x1.98060ep-100f, 0x1.afcc18p-14f, 0.0f,
     0x1.26db16p-122f, 0x1.8cee74p-83f, 0x1.3c048cp-99f, 0x1.dab7a2p-98f,
     0x1.0b3fc8p-58f, 0.0f, 0x1.59d4e4p-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1474dcp-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b7cb2ap-54f, 0.0f,
     0x1.f9f0b6p-109f, 0x1.27bb6ep-85f, 0.0f, 0x1.1c98b4p-65f, 0.0f, 0x1.ccdb2ap-111f,
     0.0f, 0.0f, 0x1.9b78dp-56f, 0x1.36557cp-116f, 0.0f, 0.0f, 0x1.22a464p-41f, 0.0f,
     0x1.5bbadap-54f, 0.0f, 0x1.9c581ep-105f, 0x1.d63e88p-66f, 0.0f, 0.0f,
     0x1.58a7a8p-14f, 0.0f, 0x1.6ba9f2p-40f, 0.0f, 0x1.f17338p-114f, 0x1.19f8d8p-57f,
     0x1.7bad5ap-44f, 0.0f, 0x1.df7c96p-20f, 0.0f, 0.0f, 0.0f, 0x1.0c221cp-88f, 0.0f,
     0x1.6d1dd4p-54f, 0x1.e0023p-121f, 0.0f, 0x1.5c2ffap-48f, 0.0f, 0x1.d1492ep-93f,
     0x1.7a4232p-106f, 0x1.91c6p-31f, 0x1.d5a6cep-81f, 0x1.082c02p-26f, 0.0f,
     0x1.a14068p-36f, 0x1.828188p-68f, 0.0f, 0.0f, 0x1.056b32p-17f, 0.0f, 0.0f, 0.0f,
     0x1.15651ep-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fdffp-109f, 0x1.e1f942p-19f, 0.0f,
     0.0f, 0.0f, 0x1.6dd7eap-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.641224p-32f,
     0.0f, 0x1.ffc4bep-87f, 0.0f, 0.0f, 0x1.ac702cp-79f, 0x1.1c122ep-6f, 0.0f,
     0x1.a9a7d2p-3f, 0x1.b68198p-77f, 0x1.e97796p-58f, 0x1.60f2eap-19f,
     0x1.844f1ap-105f, 0.0f, 0.0f, 0x1.bf9206p-1f, 0x1.bf7fe8p-115f, 0x1.1e60cap-44f,
     0x1.9b0bc6p-20f, 0x1.7a0aa4p-52f, 0.0f, 0x1.aa71eep-11f, 0x1.a18f9cp-52f,
     0x1.6d7f86p-99f, 0.0f, 0.0f, 0x1.2e9d84p-19f, 0x1.ca774cp-17f, 0x1.5ae3c8p-93f,
     0.0f, 0x1.dc51f4p-63f, 0.0f, 0x1.cb2fdcp-108f, 0.0f, 0x1.16b596p-32f,
     0x1.76dfbcp-94f, 0.0f, 0.0f, 0x1.e4c98ep-110f, 0x1.0461e6p-28f, 0.0f,
     0x1.0a2654p-104f, 0.0f, 0.0f, 0.0f, 0x1.dc682cp-120f, 0x1.1c2dacp-20f,
     0x1.ded9bep-100f, 0.0f, 0x1.723408p-45f, 0.0f, 0x1.b59ff2p-51f, 0x1.0e7a74p-122f,
     0.0f, 0x1.40140ep-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9aafc2p-20f,
     0x1.941de6p-54f, 0x1.ff6c58p-95f, 0.0f, 0x1.44494cp-83f, 0x1.cb2cbp-120f, 0.0f,
     0x1.353ea8p-15f, 0.0f, 0.0f, 0.0f, 0x1.d6fb44p-20f, 0.0f, 0x1.6d2f72p-11f, 0.0f,
     0.0f, 0x1.c2164p-46f, 0.0f, 0x1.cd52ecp-59f, 0.0f, 0.0f, 0x1.b1c784p-6f, 0.0f,
     0x1.6bb74ap-34f, 0.0f, 0.0f, 0x1.73d1bcp-68f, 0.0f, 0.0f, 0.0f, 0x1.066d06p-41f,
     0.0f, 0.0f, 0x1.18a022p-104f, 0.0f, 0x1.7fe62cp-93f, 0x1.5be108p-74f,
     0x1.06eed6p-3f, 0x1.da602cp-104f, 0x1.a9f2bcp-106f, 0x1.211026p-116f, 0.0f,
     0x1.458ebep-99f, 0.0f, 0x1.6e6c3p-3f, 0x1.03dde2p-115f, 0.0f, 0.0f,
     0x1.3fa8bap-77f, 0x1.e4847p-119f, 0.0f, 0.0f, 0.0f, 0x1.13af7cp-92f,
     0x1.29d3e2p-8f, 0x1.cb8fdap-3f, 0x1.5f2e8cp-44f, 0.0f, 0x1.19b8fep-28f, 0.0f,
     0x1.100092p-6f, 0x1.6b0aeep-4f, 0x1.eb5626p-18f, 0.0f, 0x1.c6c594p-98f,
     0x1.29bfb4p-99f, 0x1.d79fa4p-102f, 0.0f, 0.0f, 0x1.ede33ap-45f, 0x1.25d02cp-115f,
     0.0f, 0x1.f7eca2p-62f, 0x1.3bdec8p-125f, 0x1.cff99ep-123f, 0x1.ccfbc6p-67f,
     0x1.17c66ep-73f, 0.0f, 0x1.3d435ap-92f, 0x1.f0a428p-125f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9b6888p-109f, 0.0f, 0x1.dea14p-63f, 0.0f, 0.0f, 0.0f, 0x1.d527p-37f, 0.0f,
     0.0f, 0x1.214168p-12f, 0x1.d5408ep-7f, 0x1.96bfe6p-18f, 0x1.471b9cp-37f,
     0x1.bb6012p-124f, 0.0f, 0x1.49ba7cp-25f, 0.0f, 0.0f, 0x1.1c2dfep-95f,
     0x1.debff2p-103f, 0.0f, 0.0f, 0x1.fa1a94p-105f, 0.0f, 0.0f, 0x1.d9d916p-79f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b17dd2p-96f, 0.0f, 0.0f, 0x1.e430ccp-108f,
     0x1.34da66p-85f, 0x1.6a967cp-105f, 0x1.52678ap-16f, 0.0f, 0.0f, 0x1.b72d08p-71f,
     0x1.613c06p-13f, 0x1.5c6272p-125f, 0.0f, 0.0f, 0.0f, 0x1.935632p-19f, 0.0f, 0.0f,
     0x1.0fe874p-89f, 0x1.cc8bc2p-76f, 0.0f, 0.0f, 0x1.267028p-40f, 0.0f,
     0x1.476cp-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ed260cp-18f, 0.0f, 0.0f,
     0x1.66a5f8p-21f, 0.0f, 0x1.8e5d8cp-106f, 0x1.c1ef32p-36f, 0.0f, 0.0f,
     0x1.5d0316p-89f, 0.0f, 0x1.d56a0ap-108f, 0.0f, 0x1.b9670ep-5f, 0x1.1ed17ap-31f,
     0x1.8b527ap-118f, 0x1.6db266p-7f, 0.0f, 0.0f, 0x1.5ccf7p-83f, 0.0f, 0.0f, 0.0f,
     0x1.a7517ep-104f, 0x1.2433e4p-94f, 0.0f, 0x1.4f25b8p-23f, 0.0f, 0.0f, 0.0f,
     0x1.1f93ep-34f, 0x1.089ec8p-18f, 0.0f, 0x1.1f240ap-2f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.56be26p-61f, 0.0f, 0.0f, 0.0f, 0x1.484d7cp-36f, 0.0f, 0x1.5d4fdp-1f,
     0x1.d05832p-103f, 0x1.67b40cp-25f, 0.0f, 0x1.914decp-58f, 0x1.fac93cp-85f,
     0x1.1b5f4ap-44f, 0.0f, 0x1.1c74dcp-67f, 0x1.da94aap-28f, 0.0f, 0x1.6c8bbep-69f,
     0x1.9fec14p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.452138p-123f,
     0.0f, 0x1.c00f7ap-111f, 0x1.77864cp-39f, 0.0f, 0.0f, 0x1.60e59ap-35f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.82583ep-77f, 0x1.0a1b8cp-102f, 0.0f, 0x1.a411ccp-97f,
     0x1.06d08p-31f, 0x1.7999c8p-82f, 0.0f, 0x1.fa0cecp-8f, 0.0f, 0.0f,
     0x1.ed7902p-69f, 0x1.fd04bap-23f, 0x1.96d11ep-90f, 0x1.c3e6b4p-39f,
     0x1.07cf0ap-73f, 0x1.51a952p-95f, 0.0f, 0x1.aab1eap-5f, 0x1.af3ff6p-121f,
     0x1.3476ap-117f, 0x1.5cfb06p-37f, 0x1.b0890ep-78f, 0x1.610774p-86f, 0.0f, 0.0f,
     0x1.782b3p-118f, 0x1.e960dp-65f, 0.0f, 0x1.2bd56p-109f, 0x1.0bc232p-50f, 0.0f,
     0.0f, 0x1.edd4fap-57f, 0x1.82d9d4p-115f, 0x1.21663ep-67f, 0x1.fc7748p-65f,
     0x1.e44846p-11f, 0.0f, 0.0f, 0x1.3fbc38p-71f, 0.0f, 0x1.e5d1fcp-29f, 0.0f, 0.0f,
     0x1.cf7b62p-109f, 0x1.15b71ap-31f, 0x1.5529cp-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c6b6c4p-111f, 0.0f, 0x1.062c8p-74f, 0.0f, 0.0f, 0x1.c5ae66p-118f, 0.0f,
     0.0f, 0.0f, 0x1.08544ep-25f, 0.0f, 0x1.9f4cbap-34f, 0x1.513f2ap-40f,
     0x1.8e8cf6p-38f, 0x1.2be462p-122f, 0x1.2ac674p-54f, 0x1.04fb78p-56f,
     0x1.51ff12p-40f, 0x1.ecb262p-100f, 0x1.6b81cep-117f, 0x1.b73528p-110f, 0.0f,
     0x1.3e5038p-66f, 0.0f, 0.0f, 0x1.d24bfap-98f, 0x1.78b5c4p-94f, 0x1.98b224p-88f,
     0.0f, 0x1.c91ab4p-115f, 0.0f, 0.0f, 0x1.c26ba4p-32f, 0x1.6bd462p-91f, 0.0f,
     0x1.953d22p-24f, 0.0f, 0x1.186cbp-23f, 0x1.dff77ap-31f, 0.0f, 0x1.cbe1e6p-69f,
     0x1.a820d6p-23f, 0x1.fbb4a8p-67f, 0x1.989e4p-30f, 0.0f, 0x1.556d54p-99f,
     0x1.7dce4p-27f, 0.0f, 0x1.21451ap-62f, 0x1.674de8p-52f, 0x1.4b5418p-114f, 0.0f,
     0x1.5b9f16p-44f, 0x1.60d54p-1f, 0.0f, 0.0f, 0x1.ac5b98p-13f, 0.0f,
     0x1.14041cp-65f, 0.0f, 0.0f, 0.0f, 0x1.85d3f8p-70f, 0x1.96d148p-15f,
     0x1.3b122ap-115f, 0x1.0c5bcep-38f, 0.0f, 0x1.7b9246p-80f, 0.0f, 0x1.fd7e9cp-38f,
     0.0f, 0x1.9b06e6p-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a4a1b8p-39f, 0.0f, 0x1.d6ecfp-44f, 0x1.845aa4p-14f, 0.0f,
     0x1.88b798p-126f, 0.0f, 0.0f, 0x1.1d6d02p-65f, 0.0f, 0.0f, 0x1.85315p-90f,
     0x1.ff5794p-79f, 0x1.1b013cp-72f, 0x1.3827c6p-21f, 0.0f, 0x1.20a184p-79f, 0.0f,
     0.0f, 0x1.bea398p-8f, 0.0f, 0x1.dcba4ep-41f, 0.0f, 0x1.f270e2p-1f,
     0x1.614d0ep-75f, 0.0f, 0x1.70f8e4p-13f, 0x1.75ca48p-126f, 0.0f, 0x1.b8f0d6p-125f,
     0x1.d5001p-7f, 0.0f, 0.0f, 0x1.85cc7p-37f, 0x1.1cf022p-23f, 0.0f,
     0x1.00ef66p-13f, 0x1.9e451ep-2f, 0.0f, 0.0f, 0x1.323a6ap-75f, 0.0f,
     0x1.5d8592p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.65baf4p-13f,
     0x1.e2c032p-53f, 0x1.228928p-28f, 0x1.31a7e2p-68f, 0x1.4a95aep-105f,
     0x1.36c9fep-95f, 0x1.4e7a26p-62f, 0.0f, 0.0f, 0x1.af7da8p-58f, 0.0f, 0.0f, 0.0f,
     0x1.defbd8p-8f, 0x1.35a862p-48f, 0x1.0367p-83f, 0x1.9a9aecp-35f, 0.0f, 0.0f,
     0x1.c92aeap-17f, 0x1.9e0684p-63f, 0x1.95730ap-34f, 0x1.adf2dep-71f,
     0x1.b51744p-23f, 0x1.383a9p-32f, 0x1.867df4p-24f, 0x1.b91accp-37f,
     0x1.2057bp-92f, 0x1.44d71cp-71f, 0.0f, 0x1.b590e2p-25f, 0.0f, 0x1.76b884p-118f,
     0x1.da64ecp-118f, 0x1.708538p-57f, 0.0f, 0x1.b6282cp-28f, 0x1.eb6034p-35f,
     0x1.04a404p-28f, 0.0f, 0x1.fbe74p-7f, 0x1.ef3a56p-107f, 0x1.6f8d2p-96f,
     0x1.a8c9fep-105f, 0x1.2af75ep-52f, 0x1.b6bbeep-98f, 0.0f, 0.0f, 0x1.0b6c46p-65f,
     0.0f, 0.0f, 0x1.5f5ed2p-69f, 0x1.c218e8p-120f, 0x1.a0fcfap-59f, 0x1.f820c4p-122f,
     0x1.25d2bap-83f, 0x1.5bbf88p-11f, 0x1.29873ep-77f, 0x1.08011ep-108f,
     0x1.1114fap-95f, 0x1.f8c4a2p-121f, 0x1.986dep-116f, 0x1.0e0476p-123f, 0.0f,
     0x1.803b66p-59f, 0.0f, 0x1.0860f8p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ca344p-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.80a8acp-66f, 0.0f,
     0x1.0b6c3cp-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.04a798p-119f, 0x1.eb0aep-121f, 0.0f,
     0.0f, 0x1.218a0cp-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.60bdp-126f,
     0x1.c836acp-80f, 0.0f, 0x1.59cff8p-123f, 0.0f, 0x1.6f7e84p-66f, 0x1.7f9978p-121f,
     0x1.0c24d2p-60f, 0x1.209198p-73f, 0.0f, 0.0f, 0.0f, 0x1.9e5f26p-126f,
     0x1.c88414p-108f, 0x1.6cf41p-112f, 0x1.cd3b14p-119f, 0.0f, 0.0f, 0.0f,
     0x1.26993cp-118f, 0x1.328f1ep-115f, 0.0f, 0x1.899ecp-1f, 0x1.3c225ep-30f, 0.0f,
     0x1.5f44cep-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a89a68p-14f, 0x1.960f86p-66f, 0.0f,
     0.0f, 0x1.3e9632p-121f, 0x1.bcc7dp-33f, 0.0f, 0.0f, 0.0f, 0x1.4c3898p-37f,
     0x1.aede6p-45f, 0.0f, 0x1.bb280ap-51f, 0x1.9bcad8p-96f, 0.0f, 0.0f,
     0x1.588966p-29f, 0.0f, 0.0f, 0.0f, 0x1.f6ef56p-10f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.dbcb02p-48f, 0x1.2fa198p-33f, 0.0f, 0x1.c811f4p-72f, 0x1.6b0ed6p-18f,
     0x1.127e0ap-5f, 0.0f, 0.0f, 0.0f, 0x1.97c2f6p-60f, 0.0f, 0.0f, 0.0f,
     0x1.646492p-37f, 0.0f, 0x1.7922c6p-23f, 0x1.3e6b8p-16f, 0.0f, 0x1.24c00ap-71f,
     0x1.a02e5p-35f, 0.0f, 0x1.aa5c1ep-47f, 0x1.220fbp-39f, 0x1.a7c1ap-124f, 0.0f,
     0x1.72b774p-75f, 0.0f, 0x1.33f02ep-82f, 0.0f, 0.0f, 0x1.9812bcp-107f, 0.0f,
     0x1.ea4886p-73f, 0.0f, 0x1.f248ccp-54f, 0x1.541b92p-57f, 0.0f, 0x1.8d6e5ap-97f,
     0.0f, 0.0f, 0x1.dc8cf6p-115f, 0.0f, 0x1.29b4dap-9f, 0x1.0b14f6p-44f,
     0x1.3adb96p-51f, 0x1.59808cp-80f, 0x1.f664e2p-57f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.45d8d4p-48f, 0x1.d0aabp-72f, 0.0f, 0x1.07939ap-44f, 0.0f, 0x1.25913ap-1f,
     0.0f, 0.0f, 0.0f, 0x1.7e0dc8p-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b6cc86p-77f,
     0.0f, 0x1.5b3566p-60f, 0x1.8a70e8p-126f, 0x1.751c5ep-83f, 0x1.1b43e6p-75f,
     0x1.c0af78p-7f, 0x1.489faap-50f, 0.0f, 0x1.0ab21p-36f, 0.0f, 0x1.578368p-58f,
     0x1.6b2c9p-76f, 0x1.f3f4bp-30f, 0x1.ca1752p-92f, 0.0f, 0x1.1a4692p-115f, 0.0f,
     0x1.51cba8p-48f, 0x1.54400ep-23f, 0x1.91e492p-78f, 0.0f, 0x1.fc725ap-120f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.01c3acp-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a7aea6p-4f,
     0x1.032e76p-56f, 0x1.71efdep-90f, 0.0f, 0.0f, 0x1.8c2b6ap-68f, 0x1.849d2ep-70f,
     0.0f, 0.0f, 0.0f, 0x1.335b8cp-80f, 0x1.47e846p-60f, 0.0f, 0.0f, 0.0f,
     0x1.1ee6ccp-78f, 0.0f, 0x1.3f7e2ap-34f, 0x1.39c2e6p-20f, 0.0f, 0x1.d14f42p-28f,
     0.0f, 0x1.f51e92p-101f, 0x1.e779ep-120f, 0.0f, 0.0f, 0.0f, 0x1.531deap-40f, 0.0f,
     0.0f, 0x1.c3abf6p-26f, 0x1.008be8p-93f, 0x1.0f7d28p-79f, 0.0f, 0x1.5652a4p-68f,
     0x1.beb908p-55f, 0.0f, 0.0f, 0x1.4b40bp-27f, 0.0f, 0x1.a4af4p-105f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0e4bep-50f, 0.0f, 0x1.369f56p-11f,
     0x1.55eaa8p-123f, 0x1p0f, 0.0f, 0x1p0f, 0x1.66ed46p-38f, 0.0f, 0.0f, 0.0f,
     0x1.9dbeeap-126f, 0.0f, 0.0f, 0x1.84ce54p-35f, 0x1.c2f1cap-19f, 0x1.fad806p-72f,
     0.0f, 0.0f, 0.0f, 0x1.a1d284p-95f, 0.0f, 0x1.8e34c4p-107f, 0x1.51fae8p-47f,
     0x1.4bd9acp-47f, 0.0f, 0x1.a68656p-25f, 0x1.4633b4p-125f, 0x1.bdb114p-42f,
     0x1.73a68cp-45f, 0x1.9db0e2p-117f, 0x1.4f7018p-43f, 0.0f, 0x1p0f, 0x1.c70604p-5f,
     0x1.47359p-58f, 0.0f, 0.0f, 0x1.aad7bep-116f, 0x1.4a809cp-67f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.da2928p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6da54cp-117f, 0.0f, 0x1.332432p-76f, 0.0f, 0x1.eb554cp-10f, 0x1.2ad276p-101f,
     0x1.9b7beap-54f, 0.0f, 0x1.bc9444p-85f, 0x1.b0ccd2p-88f, 0x1.71d1dcp-96f,
     0x1.1cd8a8p-24f, 0.0f, 0x1.cc1c72p-33f, 0.0f, 0x1.12011p-61f, 0x1.3d986ep-73f,
     0x1.b75acap-64f, 0x1.be0038p-116f, 0.0f, 0x1.6258a2p-33f, 0x1.6d3cc6p-110f, 0.0f,
     0x1.6e075cp-19f, 0x1.22f9bp-111f
};
static const float external_bench_wrapper_input_table_arg1[1008]  = {
     0x1.626df6p-57f, 0.0f, 0x1.d2b37ap-42f, 0x1.9a9622p-51f, 0.0f, 0x1.32754ap-5f,
     0.0f, 0.0f, 0x1.241346p-41f, 0x1.d75658p-101f, 0.0f, 0x1.f4edf8p-35f, 0.0f, 0.0f,
     0x1.fbd10cp-57f, 0x1.d664fap-108f, 0x1.78f7aap-58f, 0x1.df0b64p-117f,
     0x1.e336bcp-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9f5132p-12f, 0x1.9035aep-114f,
     0.0f, 0x1.192b42p-24f, 0.0f, 0.0f, 0x1.e1bde6p-58f, 0x1.158612p-69f, 0.0f,
     0x1.9c0eep-109f, 0.0f, 0.0f, 0x1.fc2bb4p-48f, 0x1.113802p-11f, 0.0f,
     0x1.8b964p-12f, 0.0f, 0x1.cf3c44p-20f, 0x1.4b8f9ap-31f, 0x1.28fb1ep-110f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.1c476ap-28f, 0.0f, 0x1.eb03e2p-118f, 0x1.a6fc18p-93f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ad951ap-50f, 0x1.524e1ap-82f, 0x1.8bd39ap-52f, 0.0f, 0.0f,
     0.0f, 0x1.1d4126p-98f, 0x1.d1f888p-101f, 0x1.b3fe94p-80f, 0.0f, 0.0f, 0.0f,
     0x1.abc0e4p-38f, 0x1.c6accp-48f, 0.0f, 0.0f, 0x1.fbe8aep-48f, 0.0f, 0.0f,
     0x1.35fa4cp-22f, 0.0f, 0x1.4d731p-42f, 0.0f, 0x1.812c02p-69f, 0x1.6595d2p-65f,
     0.0f, 0.0f, 0x1.55d17cp-71f, 0x1.d35ffp-108f, 0.0f, 0.0f, 0x1.3f4e46p-89f, 0.0f,
     0x1.5899e2p-62f, 0.0f, 0x1.50ca74p-49f, 0.0f, 0x1.565aecp-107f, 0x1.f9f736p-6f,
     0.0f, 0x1.237982p-55f, 0x1.1d7c7ep-71f, 0.0f, 0x1.6928aap-5f, 0.0f,
     0x1.d9d24ap-64f, 0.0f, 0x1.4dd902p-24f, 0.0f, 0x1.842d7ep-16f, 0.0f,
     0x1.293ae8p-5f, 0.0f, 0x1.92bffap-85f, 0x1.15177cp-26f, 0.0f, 0x1.1123c2p-64f,
     0.0f, 0x1.78f0eap-45f, 0x1.227306p-38f, 0.0f, 0x1.46881ap-25f, 0.0f,
     0x1.09c89ap-66f, 0.0f, 0.0f, 0x1.08f1fep-16f, 0x1.9eb5bcp-45f, 0.0f, 0.0f,
     0x1.e3473p-5f, 0x1.280b44p-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c1e45ep-100f,
     0x1.38ba62p-57f, 0x1.494d64p-112f, 0.0f, 0.0f, 0x1.357cp-112f, 0x1.3b86b6p-87f,
     0x1.1db0d6p-116f, 0.0f, 0.0f, 0x1.c7538cp-60f, 0.0f, 0x1.17c834p-123f,
     0x1.86db64p-111f, 0x1.efd566p-98f, 0x1.0822dcp-62f, 0.0f, 0.0f, 0.0f,
     0x1.114efep-103f, 0.0f, 0.0f, 0.0f, 0x1.29c662p-42f, 0x1.d0a14cp-13f, 0.0f,
     0x1.917f82p-30f, 0x1.6203d2p-17f, 0x1.dabb84p-14f, 0.0f, 0x1.cf2beap-64f,
     0x1.cbac3p-26f, 0.0f, 0.0f, 0x1.7ab9a2p-60f, 0.0f, 0x1.ca3bb4p-117f, 0.0f,
     0x1.450274p-113f, 0x1.565c48p-115f, 0x1.ac40ecp-72f, 0.0f, 0x1.37873ep-61f,
     0x1.6c19bap-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5cf83p-3f, 0x1.80c91p-73f, 0.0f,
     0.0f, 0.0f, 0x1.c83134p-60f, 0x1.02c094p-47f, 0x1.d03e2p-8f, 0x1.74186ep-88f,
     0x1.56a84p-63f, 0x1.425644p-80f, 0.0f, 0x1.e1130ap-3f, 0.0f, 0.0f, 0.0f,
     0x1.0b3304p-53f, 0x1.8d59f4p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2e9f1ap-59f,
     0x1.894b4ep-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4ca08p-38f,
     0x1.940d9ap-114f, 0x1.93e94cp-57f, 0x1.86ee0cp-70f, 0x1.3eb8d6p-28f, 0.0f, 0.0f,
     0x1.4808bp-39f, 0x1.660f16p-60f, 0.0f, 0.0f, 0x1.497198p-103f, 0x1.a8294cp-119f,
     0x1.d9a146p-29f, 0.0f, 0.0f, 0.0f, 0x1.42d62ap-1f, 0x1.afad1ap-37f, 0x1.68p-46f,
     0x1.4510b4p-69f, 0x1.6a92a6p-11f, 0.0f, 0.0f, 0x1.b6480ep-101f, 0x1.408a8cp-35f,
     0.0f, 0x1.9f2b06p-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7a4f8cp-56f, 0x1.4b449ep-39f,
     0.0f, 0x1.5f7afcp-79f, 0.0f, 0x1.6e8816p-60f, 0x1.9ca0e8p-7f, 0x1.a160f4p-95f,
     0x1.8d626cp-57f, 0x1.e220fep-111f, 0.0f, 0.0f, 0.0f, 0x1.6f4b98p-2f,
     0x1.6b8dacp-88f, 0.0f, 0.0f, 0x1.69ba74p-75f, 0x1.ea956p-13f, 0x1.05e7d6p-109f,
     0.0f, 0x1.a0f16cp-24f, 0x1.d602eep-41f, 0.0f, 0x1p0f, 0.0f, 0x1.a84d2cp-21f,
     0x1.b81202p-27f, 0.0f, 0x1.12a2bp-1f, 0.0f, 0.0f, 0.0f, 0x1.31b4f2p-117f,
     0x1.eb49ccp-16f, 0.0f, 0.0f, 0x1.51e68p-65f, 0.0f, 0x1.92e276p-125f, 0.0f, 0.0f,
     0x1.ca98a4p-1f, 0x1.49d96p-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e28d84p-121f, 0.0f, 0.0f, 0x1.ecab86p-119f, 0.0f, 0x1.07ae78p-20f, 0.0f,
     0x1.6e4018p-64f, 0x1.9e599ap-121f, 0x1.245032p-123f, 0x1.3b4fbcp-24f, 0.0f,
     0x1.c6b204p-34f, 0x1.372c2ap-72f, 0.0f, 0.0f, 0.0f, 0x1.69760ap-51f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.bb595p-38f, 0x1.8c0416p-110f, 0x1.6b24ap-63f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f01f7p-112f, 0x1.0bbc5ap-72f, 0x1.e91294p-80f, 0.0f, 0x1.75a464p-116f,
     0.0f, 0x1.0df848p-84f, 0.0f, 0x1.3befa4p-101f, 0x1.115c8cp-35f, 0.0f, 0.0f,
     0x1.5fc4a4p-106f, 0x1.ace008p-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c12328p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.691c96p-84f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.82f856p-113f, 0x1.03430cp-13f, 0.0f, 0.0f, 0x1.8ef9d8p-92f,
     0x1.6ec354p-118f, 0x1.af4d5ap-42f, 0x1.5427dp-56f, 0.0f, 0x1.c94d4ep-51f, 0.0f,
     0x1.fa04cap-123f, 0x1.ffeb98p-110f, 0x1.7dff48p-75f, 0.0f, 0.0f, 0.0f,
     0x1.43d38p-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ee35a2p-112f,
     0x1.95990cp-98f, 0x1.fa4962p-73f, 0x1.86e964p-72f, 0.0f, 0x1.d15d4ep-88f,
     0x1.4cbc1ap-5f, 0.0f, 0.0f, 0x1.1e1ea2p-61f, 0.0f, 0x1.e47934p-14f,
     0x1.bdd0c8p-122f, 0x1.b8227ep-45f, 0x1.e0cc24p-108f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.2f302cp-37f, 0x1.3ee8f8p-115f, 0x1.575888p-55f, 0.0f, 0x1.445226p-19f,
     0.0f, 0.0f, 0.0f, 0x1.ed3508p-79f, 0.0f, 0.0f, 0x1.e56a74p-105f, 0.0f,
     0x1.f0f236p-81f, 0x1.abfa6p-95f, 0.0f, 0x1.56e668p-124f, 0.0f, 0x1.2f575ap-51f,
     0x1.336d3ap-114f, 0x1.117dbep-62f, 0x1.18db6ep-35f, 0.0f, 0x1.088eacp-54f,
     0x1.a95384p-54f, 0.0f, 0x1.71752cp-104f, 0x1.0f6758p-67f, 0.0f, 0x1.b17c9cp-110f,
     0x1.00b982p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1f25dp-96f, 0.0f,
     0x1.fa34d6p-77f, 0.0f, 0x1.0ab022p-123f, 0.0f, 0x1.a7e988p-33f, 0x1.34d5f8p-50f,
     0x1.894e5ep-36f, 0.0f, 0.0f, 0x1.8b7572p-112f, 0.0f, 0x1.34b864p-3f,
     0x1.d12074p-8f, 0x1.c279a8p-32f, 0x1.e4be54p-116f, 0x1.1d989p-31f, 0.0f,
     0x1.8aca52p-49f, 0.0f, 0.0f, 0.0f, 0x1.1f3044p-105f, 0x1.4387d2p-101f,
     0x1.22e0a6p-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8118b8p-53f, 0x1.d45aa2p-52f, 0.0f,
     0.0f, 0x1.2e22eep-118f, 0x1.5cc6b6p-76f, 0.0f, 0.0f, 0x1.828936p-82f, 0.0f,
     0x1.b6aedap-121f, 0.0f, 0.0f, 0x1.f49142p-30f, 0.0f, 0.0f, 0.0f, 0x1.67565cp-26f,
     0x1.cf41f4p-97f, 0.0f, 0.0f, 0x1.4e1284p-82f, 0x1.7377eep-108f, 0.0f,
     0x1.ce40bep-96f, 0x1.9b25b2p-56f, 0.0f, 0.0f, 0x1.8ff442p-96f, 0.0f,
     0x1.ce62f8p-122f, 0.0f, 0.0f, 0.0f, 0x1.ebe502p-12f, 0.0f, 0x1.86fe9ap-66f,
     0x1.7d574ap-109f, 0x1.439a4ap-4f, 0.0f, 0x1.3d6d7cp-38f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9f3444p-96f, 0x1.e36932p-11f, 0.0f, 0.0f, 0.0f,
     0x1.743fcap-96f, 0.0f, 0.0f, 0.0f, 0x1.dface2p-88f, 0x1.d67006p-31f,
     0x1.6119acp-42f, 0.0f, 0.0f, 0.0f, 0x1.0cf1cp-69f, 0x1.1c7dccp-93f, 0.0f,
     0x1.395468p-78f, 0x1.1fa186p-95f, 0x1.596ff4p-60f, 0.0f, 0.0f, 0x1.789d24p-119f,
     0x1.b3bc1p-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6f686ap-30f, 0x1.3f557ap-26f,
     0x1.18d4b8p-3f, 0x1.85bf2ap-126f, 0.0f, 0.0f, 0.0f, 0x1.81cb0cp-25f, 0.0f, 0.0f,
     0x1.a0d12ap-36f, 0x1.844954p-79f, 0.0f, 0.0f, 0.0f, 0x1.825646p-15f,
     0x1.03c2c6p-61f, 0.0f, 0.0f, 0x1.fbf3cep-119f, 0x1.301482p-42f, 0.0f,
     0x1.dc01cap-78f, 0x1.c06964p-72f, 0x1.0b6fb2p-54f, 0x1.60a1d6p-29f, 0.0f, 0.0f,
     0x1.c88e48p-58f, 0.0f, 0.0f, 0x1.bee198p-20f, 0.0f, 0.0f, 0x1.cee22cp-58f,
     0x1.795c96p-120f, 0.0f, 0.0f, 0x1.9c6984p-104f, 0.0f, 0.0f, 0.0f,
     0x1.0b14a6p-22f, 0.0f, 0.0f, 0x1.e34e72p-81f, 0x1.c3eb2cp-52f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.44e61p-44f, 0.0f, 0x1.93b296p-63f, 0.0f, 0.0f, 0x1.3bf2bep-8f,
     0x1.f41746p-28f, 0x1.bc084ep-42f, 0x1.e51b6ep-50f, 0.0f, 0.0f, 0x1.ea45f4p-123f,
     0.0f, 0x1.c7105cp-69f, 0.0f, 0x1.e9f19cp-118f, 0x1.e44044p-11f, 0.0f,
     0x1.6aea56p-99f, 0.0f, 0.0f, 0x1.8dee76p-117f, 0x1.79617p-21f, 0x1.39fb38p-49f,
     0x1.84496ep-80f, 0.0f, 0x1.88d4b8p-104f, 0x1.2625ccp-19f, 0x1.3dfeeap-48f,
     0x1.95afd8p-65f, 0x1.261792p-87f, 0x1.64955p-123f, 0x1.7966dap-54f,
     0x1.ce05bp-121f, 0.0f, 0x1.b81eb4p-74f, 0x1.2f0d86p-75f, 0x1.d73e4cp-71f,
     0x1.68aebep-88f, 0.0f, 0.0f, 0.0f, 0x1.3f83d2p-12f, 0.0f, 0x1.266504p-24f,
     0x1.03c7f6p-23f, 0x1.183be6p-15f, 0.0f, 0.0f, 0x1.31c13ap-110f, 0x1.0cfaf4p-47f,
     0x1.e21d1p-67f, 0x1.65bb1ap-26f, 0.0f, 0.0f, 0x1.7ae426p-103f, 0x1.452bf6p-20f,
     0.0f, 0x1.3f1198p-49f, 0.0f, 0.0f, 0x1.76a898p-81f, 0.0f, 0.0f, 0x1.d091d4p-28f,
     0x1.a84776p-35f, 0x1.7b21acp-65f, 0x1.796d42p-27f, 0x1.a4f4c6p-114f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.8640dp-57f, 0.0f, 0x1.7e07ep-3f, 0x1.45d2acp-46f, 0.0f, 0.0f,
     0x1.137822p-34f, 0.0f, 0x1.3b5658p-57f, 0.0f, 0.0f, 0x1.6657eap-88f, 0.0f, 0.0f,
     0x1.65fc2ep-111f, 0x1.b5e264p-57f, 0x1.453eb4p-116f, 0.0f, 0x1.4a9f3ep-69f, 0.0f,
     0.0f, 0x1.c93e2p-109f, 0.0f, 0x1.8e212cp-11f, 0.0f, 0x1.531324p-6f,
     0x1.178f4cp-46f, 0x1.53c25p-85f, 0x1.cd054ap-31f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b01e24p-97f, 0x1.a3f1aep-91f, 0x1.3cb888p-42f, 0x1.3728d2p-96f,
     0x1.f0c686p-68f, 0.0f, 0x1.09e21ep-25f, 0x1.65093cp-25f, 0x1.d6f3b6p-122f,
     0x1.fcc646p-63f, 0x1.5a4004p-122f, 0.0f, 0x1.05ffeap-66f, 0x1.260deap-87f, 0.0f,
     0.0f, 0x1.c99ec8p-15f, 0x1.35e676p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a74272p-40f, 0x1p0f, 0x1.0629a4p-60f, 0x1.159316p-42f,
     0x1.db9738p-21f, 0x1.35d0ecp-30f, 0x1.5c8b58p-103f, 0x1.bad26p-61f,
     0x1.0d8a4ep-49f, 0.0f, 0x1.b6b6cap-18f, 0.0f, 0x1.30727p-94f, 0.0f, 0.0f, 0.0f,
     0x1.bd608cp-108f, 0x1.12df3ap-93f, 0.0f, 0x1.7d95fap-107f, 0.0f, 0.0f,
     0x1.7a6998p-86f, 0x1.fd4f1ep-99f, 0.0f, 0.0f, 0x1.f9a51ap-103f, 0x1.206dbap-47f,
     0x1.d452f4p-15f, 0x1.916d4ap-7f, 0.0f, 0x1.ff9516p-66f, 0x1.c9a5cap-122f, 0.0f,
     0x1.9ee6aep-95f, 0.0f, 0x1.809e28p-59f, 0x1.ae43dp-83f, 0x1.e7fe3p-125f, 0.0f,
     0x1.5cde72p-11f, 0x1.9d6df8p-84f, 0.0f, 0x1.7a78fap-81f, 0x1.aaada4p-108f, 0.0f,
     0x1.011366p-53f, 0x1.ffa93cp-23f, 0.0f, 0x1.d9745ep-54f, 0.0f, 0.0f,
     0x1.861adap-53f, 0.0f, 0.0f, 0.0f, 0x1.590facp-59f, 0.0f, 0.0f, 0.0f,
     0x1.9ef6a8p-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5bd72ap-6f, 0.0f, 0x1.31c518p-29f,
     0.0f, 0x1.44a9e8p-98f, 0x1.5eb9f8p-51f, 0x1.4c8faap-10f, 0x1p0f, 0x1.b043bap-42f,
     0x1.db6da4p-97f, 0x1.c18f14p-41f, 0.0f, 0.0f, 0x1.cd9ce4p-96f, 0x1.bae69p-42f,
     0.0f, 0.0f, 0.0f, 0x1.3dc696p-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.6e1c16p-101f, 0x1.056f86p-46f, 0.0f, 0x1.470ebcp-7f,
     0x1.0e2dd8p-20f, 0.0f, 0x1.87b766p-74f, 0x1.abca82p-40f, 0.0f, 0.0f, 0.0f,
     0x1.f13716p-60f, 0.0f, 0.0f, 0x1.1ffe44p-89f, 0.0f, 0x1.83dc56p-36f,
     0x1.bf500cp-51f, 0.0f, 0x1.d1528ep-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d50e6cp-47f, 0x1.c470f6p-79f, 0.0f, 0.0f, 0x1.7e6662p-63f, 0.0f,
     0x1.087d3ap-6f, 0x1.0715cep-92f, 0.0f, 0.0f, 0x1.bb7ca8p-44f, 0x1.736fe6p-49f,
     0x1.93eb5cp-120f, 0x1.8e303p-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5e459p-43f,
     0.0f, 0.0f, 0x1.80885ep-60f, 0x1.bef9d2p-90f, 0x1.06cd54p-117f, 0x1.901306p-1f,
     0x1.805904p-118f, 0x1.24ba58p-73f, 0x1.5641fcp-6f, 0.0f, 0.0f, 0x1.c7e88ap-112f,
     0.0f, 0x1.2b1556p-87f, 0x1.b7a1eap-73f, 0x1.1a6294p-75f, 0x1.173e7ep-96f,
     0x1.71cbbep-98f, 0.0f, 0x1.fc367cp-124f, 0.0f, 0x1.5ea7fep-80f, 0.0f, 0.0f,
     0x1.838034p-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6b17a6p-88f, 0.0f,
     0x1.c065acp-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.465a18p-12f, 0.0f,
     0x1.457572p-59f, 0x1.470374p-47f, 0.0f, 0x1.ca7278p-20f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9fe8p-86f, 0x1.c9b3c8p-36f, 0x1.6ee724p-51f, 0x1.f6f006p-5f, 0x1.108548p-97f,
     0x1.07f39ep-42f, 0x1.78ac4ep-71f, 0x1.c51e7ep-8f, 0.0f, 0.0f, 0x1.b9eef2p-67f,
     0.0f, 0x1.cf4c5ap-124f, 0x1.dd6acap-32f, 0x1.62946ap-43f, 0x1.f0efc4p-13f, 0.0f,
     0x1.16359ep-37f, 0x1.9a0f3ep-76f, 0.0f, 0x1.a13de2p-125f, 0.0f, 0.0f,
     0x1.9e0c5p-5f, 0x1.6111a2p-116f, 0x1.56f5fcp-34f, 0x1.f4c7cp-41f,
     0x1.0e907ep-61f, 0.0f, 0.0f, 0x1.006b8ep-104f, 0.0f, 0x1.c5f3e6p-49f,
     0x1.5daea8p-25f, 0x1.b57c56p-80f, 0x1.93b5d8p-80f, 0x1.0865aep-41f,
     0x1.dad21p-86f, 0.0f, 0x1.77ecd8p-18f, 0x1.d83b76p-30f, 0x1.7dd4e4p-62f,
     0x1.c8b6d6p-97f, 0x1.86d096p-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.46c0fep-105f, 0.0f,
     0x1.4b432cp-69f, 0x1.5bb89p-57f, 0.0f, 0.0f, 0.0f, 0x1.9a6c4p-17f, 0.0f,
     0x1.e57648p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b89cacp-119f, 0.0f, 0x1.27d6dp-32f,
     0x1.1841dp-32f, 0.0f, 0.0f, 0.0f, 0x1.1f74c8p-82f, 0x1.9a2f22p-5f,
     0x1.ce3b5ap-36f, 0.0f, 0.0f, 0x1.67195p-65f, 0.0f, 0.0f, 0.0f, 0x1.b941fp-27f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.402e8cp-60f, 0x1.becb4ap-116f, 0.0f,
     0x1.00014ap-82f, 0.0f, 0x1.8fce3p-1f, 0x1.b93174p-108f, 0.0f
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
            tmp2 = Sleef_atan2f8_u35kvx(tmp0, tmp1);
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
    printf("Sleef_atan2f8_u35kvx %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_atan2f8_u35kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
