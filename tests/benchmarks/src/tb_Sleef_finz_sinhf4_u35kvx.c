/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sinhf4_u35kvx.c --function \
 *     Sleef_finz_sinhf4_u35kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 4 --function-input-vector-size \
 *     4 --bench --no-embedded-bin --target kv3
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
     0x1.1f8b0ep-103f, 0x1.e6fb5ap-111f, 0x1.ba3ac4p-98f, 0x1.fc2a8ep-22f,
     0x1.f991a4p-25f, 0.0f, 0.0f, 0x1.c92d98p-104f, 0x1.1ca994p-89f, 0.0f, 0.0f,
     0x1.6afbfep-37f, 0.0f, 0x1.479dfcp-76f, 0.0f, 0x1.1377e4p-86f, 0x1.d104d8p-111f,
     0.0f, 0.0f, 0.0f, 0x1.33bee8p-117f, 0x1.2137b2p-35f, 0x1.7966dap-2f, 0.0f,
     0x1.fdbe48p-53f, 0.0f, 0x1.befd86p-89f, 0.0f, 0x1.ee02a8p-106f, 0.0f, 0.0f, 0.0f,
     0x1.4514cep-28f, 0.0f, 0x1.70365ep-35f, 0x1.00775cp-52f, 0x1.7f5ddap-45f, 0.0f,
     0.0f, 0.0f, 0x1.20d076p-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5e822cp-66f,
     0x1.ee983cp-16f, 0x1.f945b2p-122f, 0x1.a1c10ap-78f, 0.0f, 0x1.b38f1ep-3f,
     0x1.b39c2cp-50f, 0x1.b3961cp-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a32c5p-23f,
     0x1.a1d8ap-13f, 0.0f, 0x1.4c09f2p-93f, 0x1.7ccda6p-66f, 0.0f, 0x1.a1a65cp-25f,
     0.0f, 0.0f, 0.0f, 0x1.b32c38p-106f, 0.0f, 0x1.9e9c86p-39f, 0x1.cd62d4p-105f,
     0.0f, 0.0f, 0.0f, 0x1.9fd0bap-47f, 0x1.b4a9e6p-7f, 0x1.77fd58p-102f, 0.0f, 0.0f,
     0.0f, 0x1.60ddc2p-91f, 0x1.e37cb8p-109f, 0x1.082054p-8f, 0x1.bb1572p-88f, 0.0f,
     0x1.ed9bf2p-23f, 0x1.51286cp-115f, 0x1.cd9cf8p-83f, 0.0f, 0x1.7d9edep-86f,
     0x1p0f, 0x1.2b6834p-44f, 0.0f, 0x1.71d5c8p-5f, 0x1.d8064ap-65f, 0x1.e47e8cp-50f,
     0x1.ab5972p-84f, 0x1.07c938p-14f, 0x1.f1ea5cp-69f, 0.0f, 0.0f, 0x1.fced98p-18f,
     0.0f, 0.0f, 0.0f, 0x1.c8b56p-61f, 0.0f, 0x1.a582a4p-79f, 0.0f, 0.0f,
     0x1.4f7084p-116f, 0.0f, 0.0f, 0x1.c9f3a2p-109f, 0.0f, 0x1.d2c202p-42f,
     0x1.e7e0dep-13f, 0x1.765f22p-110f, 0x1.06262p-75f, 0x1.559f46p-21f,
     0x1.5869cap-19f, 0.0f, 0x1.308dcep-46f, 0x1.7ab03ep-113f, 0x1.7d50c2p-65f, 0.0f,
     0x1.68fa04p-121f, 0x1.4cd69ap-120f, 0.0f, 0x1.f86a86p-115f, 0x1.f09936p-104f,
     0x1.5203fcp-42f, 0x1.ef49dap-4f, 0x1.e241fap-61f, 0.0f, 0x1.0e47fcp-22f, 0.0f,
     0.0f, 0x1.42bf4ep-26f, 0.0f, 0.0f, 0.0f, 0x1.2cc90cp-124f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a7eb46p-6f, 0x1.bbfdcap-124f, 0x1.f8f10cp-70f, 0.0f,
     0.0f, 0.0f, 0x1.86d84cp-111f, 0.0f, 0x1.df3f5cp-90f, 0x1.54039ap-64f, 0.0f, 0.0f,
     0.0f, 0x1.2683f8p-67f, 0x1.6bee8p-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.20941p-75f,
     0.0f, 0x1.45323ap-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3b44bp-5f, 0.0f,
     0x1.23cb2ep-68f, 0x1.506a1ep-95f, 0x1.e0b3cp-30f, 0x1p0f, 0x1.08b3fcp-8f,
     0x1.ab10f4p-11f, 0x1.084342p-125f, 0x1.065d3ap-96f, 0x1.3aa91p-6f,
     0x1.d35e8ep-41f, 0.0f, 0x1.9407fp-87f, 0x1.064f12p-79f, 0.0f, 0x1.961ee6p-119f,
     0x1.451f88p-81f, 0x1.a4c312p-30f, 0.0f, 0x1.41eed2p-4f, 0x1.1dc16cp-33f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a6efap-48f, 0x1.381deep-60f, 0x1.007b2cp-11f, 0.0f,
     0x1.52d64p-40f, 0.0f, 0.0f, 0.0f, 0x1.81903ap-77f, 0.0f, 0x1.2fe348p-106f,
     0x1.3bb508p-89f, 0.0f, 0x1.5cd516p-68f, 0.0f, 0.0f, 0x1.28d9d6p-101f, 0.0f, 0.0f,
     0x1.468524p-23f, 0.0f, 0x1.c9e114p-105f, 0.0f, 0x1.25be22p-111f, 0.0f,
     0x1.d2501p-74f, 0x1.1ba41cp-96f, 0x1.978a4ap-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.5810b2p-46f, 0.0f, 0x1.2a54dap-120f, 0x1.55f25ap-38f, 0.0f, 0.0f,
     0x1.c56cc8p-19f, 0x1.6ec158p-124f, 0.0f, 0.0f, 0.0f, 0x1.b1da56p-13f, 0.0f,
     0x1.c60d6cp-106f, 0x1.eb852p-117f, 0.0f, 0.0f, 0x1.ed9a38p-13f, 0.0f,
     0x1.8412a4p-15f, 0.0f, 0x1.223032p-61f, 0.0f, 0.0f, 0x1.4b19acp-52f, 0.0f, 0.0f,
     0x1.f5f916p-43f, 0.0f, 0x1.e48984p-31f, 0.0f, 0x1.06b3b6p-113f, 0.0f,
     0x1.1ba096p-115f, 0.0f, 0x1.4ad654p-95f, 0x1.b88f58p-48f, 0.0f, 0x1.0be96cp-6f,
     0x1.ff932p-25f, 0x1.1250c8p-99f, 0.0f, 0x1.40ab04p-105f, 0x1.2fa724p-1f, 0.0f,
     0x1.e8ac58p-14f, 0x1.ed221p-9f, 0x1.0afbc8p-109f, 0.0f, 0.0f, 0x1.bf3b26p-114f,
     0x1.a662a6p-116f, 0.0f, 0x1.ad4036p-82f, 0.0f, 0.0f, 0x1.7a5666p-97f, 0.0f,
     0x1.fb07fap-103f, 0.0f, 0x1.ba7b46p-62f, 0.0f, 0x1.2032ap-125f, 0x1.36975p-45f,
     0.0f, 0x1.dfb302p-1f, 0x1.e310b2p-3f, 0.0f, 0x1.b4cb5ep-84f, 0.0f, 0.0f, 0.0f,
     0x1.35457ep-76f, 0x1.ce8442p-21f, 0.0f, 0.0f, 0x1.7a5c48p-117f, 0.0f,
     0x1.3fbd96p-28f, 0x1.730204p-76f, 0.0f, 0x1.c23e68p-72f, 0x1.d8eedp-63f, 0.0f,
     0.0f, 0x1.192f9ep-63f, 0.0f, 0x1.fec014p-36f, 0.0f, 0.0f, 0.0f, 0x1.425d4p-5f,
     0.0f, 0.0f, 0x1.79f48ap-121f, 0x1.df49c2p-116f, 0x1.e19546p-30f, 0.0f,
     0x1.3f6eap-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dbf122p-3f, 0.0f, 0.0f,
     0x1.eb2d2ep-113f, 0x1.1fce02p-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bf7f74p-96f,
     0x1.d90f3cp-81f, 0x1.9a72eap-13f, 0x1.a63ebap-95f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.08344ap-83f, 0.0f, 0.0f, 0x1.768a3p-66f, 0.0f, 0x1.5817eep-27f,
     0x1.f29faap-59f, 0x1.2152ecp-53f, 0x1.373864p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ec8854p-109f, 0x1.2d33d2p-33f, 0x1.5cf8bep-22f, 0.0f, 0x1.cf08aap-90f,
     0x1.aad192p-113f, 0x1.74537ep-49f, 0.0f, 0.0f, 0.0f, 0x1.e9cf9p-25f,
     0x1.cba298p-120f, 0x1.131452p-24f, 0.0f, 0.0f, 0x1.12e5d4p-17f, 0.0f,
     0x1.62b5fep-110f, 0x1.6c5f4ap-11f, 0.0f, 0.0f, 0x1.2d5a62p-26f, 0x1.64bec2p-96f,
     0x1.1aa386p-53f, 0.0f, 0.0f, 0.0f, 0x1.bf5b9cp-19f, 0x1.749882p-84f,
     0x1.c5353p-48f, 0x1.0616a6p-85f, 0.0f, 0.0f, 0x1.81dc8ep-22f, 0.0f,
     0x1.13dc1cp-96f, 0x1.0e94dap-123f, 0x1.a63fd8p-47f, 0x1.df9494p-16f,
     0x1.d3709ep-36f, 0x1.dff488p-114f, 0x1.5a6c9p-76f, 0x1.1b2944p-104f,
     0x1.2201b2p-6f, 0x1.7092a2p-80f, 0x1.075e26p-6f, 0x1.81937cp-35f,
     0x1.34eb9ap-12f, 0x1.5f08c4p-9f, 0x1.468f4ap-15f, 0.0f, 0.0f, 0x1.36fa4ap-45f,
     0x1.104f6p-46f, 0.0f, 0x1.3686cap-10f, 0.0f, 0x1.889f4ep-78f, 0.0f, 0.0f,
     0x1.cf01dp-81f, 0.0f, 0.0f, 0.0f, 0x1.9ea18cp-12f, 0.0f, 0x1.c2057ep-62f,
     0x1.30e968p-109f, 0.0f, 0.0f, 0x1.56fc74p-20f, 0.0f, 0x1.23490cp-89f,
     0x1.f53abap-95f, 0x1.b65304p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f62f78p-26f, 0.0f,
     0.0f, 0.0f, 0x1.112cbap-19f, 0x1.04ff38p-53f, 0.0f, 0.0f, 0x1.e2ad8cp-66f, 0.0f,
     0.0f, 0x1.09414ap-74f, 0.0f, 0.0f, 0x1.07019p-45f, 0.0f, 0x1.79479p-30f, 0.0f,
     0.0f, 0.0f, 0x1.04d42cp-124f, 0x1.1c5b58p-101f, 0x1.b5872cp-70f, 0.0f, 0.0f,
     0.0f, 0x1.be0f6ep-121f, 0.0f, 0x1.446a54p-8f, 0.0f, 0x1.6d4ab6p-102f, 0.0f,
     0x1.229d5ep-44f, 0x1.bdd5b2p-96f, 0x1.8f1e02p-95f, 0.0f, 0x1.517582p-81f, 0.0f,
     0x1.5bfaf6p-2f, 0.0f, 0.0f, 0x1.8a1716p-73f, 0.0f, 0x1.9cbfbap-121f, 0.0f, 0.0f,
     0.0f, 0x1.9b7538p-9f, 0x1.64f1a8p-25f, 0.0f, 0.0f, 0.0f, 0x1.4c356p-91f,
     0x1.07ffd6p-114f, 0x1.9b1858p-98f, 0x1.b56e02p-50f, 0.0f, 0.0f, 0x1.7b36bep-8f,
     0.0f, 0x1.87668ap-107f, 0.0f, 0.0f, 0.0f, 0x1.e12194p-37f, 0x1.a6cd3cp-65f, 0.0f,
     0.0f, 0.0f, 0x1.ceec0ap-46f, 0x1.e05fdap-101f, 0x1.a8df3p-112f, 0x1.bfa0f4p-36f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.5f5e26p-116f, 0x1.59cd7p-75f, 0.0f, 0x1.3e40eep-28f,
     0.0f, 0.0f, 0x1.faa76cp-29f, 0.0f, 0x1.ed4706p-7f, 0x1.ba6f9cp-81f,
     0x1.88293p-54f, 0x1.a75f48p-98f, 0x1.e884ap-82f, 0.0f, 0x1.f015e2p-26f, 0.0f,
     0.0f, 0x1.3104b2p-12f, 0.0f, 0x1.01635ep-11f, 0x1.c40cfep-114f, 0x1.98ca44p-107f,
     0x1.871584p-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a394d4p-23f, 0x1.2c41eap-33f,
     0x1.47dd74p-72f, 0.0f, 0.0f, 0x1.c513cep-108f, 0x1.7068bp-108f, 0x1.74c7e6p-69f,
     0x1.392b0ep-103f, 0x1.deb42ep-4f, 0x1.59fcd8p-117f, 0.0f, 0x1.490082p-26f,
     0x1.f1984cp-35f, 0.0f, 0.0f, 0x1.1e2edep-14f, 0x1.82303ep-42f, 0x1.5f41acp-48f,
     0.0f, 0x1.27f436p-46f, 0.0f, 0x1.9c3d5p-19f, 0x1.707502p-65f, 0.0f, 0.0f,
     0x1.c8fbc4p-104f, 0x1.fb985ap-121f, 0x1.ec921ap-122f, 0x1.d5ce2cp-69f,
     0x1.4d6a4cp-98f, 0x1.cedaaep-35f, 0.0f, 0x1.e21e7ep-48f, 0.0f, 0x1.37c294p-108f,
     0x1.e36e5ep-41f, 0x1.72fe34p-20f, 0x1.2e7d4ap-120f, 0x1.40396ap-76f, 0.0f, 0.0f,
     0.0f, 0x1.9d5d6p-4f, 0.0f, 0x1.09e1aep-22f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ce0c24p-77f, 0.0f, 0.0f, 0.0f, 0x1.307dacp-8f, 0.0f, 0.0f, 0x1.7604eap-60f,
     0.0f, 0.0f, 0.0f, 0x1.6540f2p-86f, 0x1.a8003ep-28f, 0x1.3862f4p-10f,
     0x1.480024p-40f, 0.0f, 0.0f, 0.0f, 0x1.ce57d2p-52f, 0.0f, 0.0f, 0.0f,
     0x1.0c0f04p-107f, 0x1.b1da08p-12f, 0.0f, 0.0f, 0x1.835eep-13f, 0x1.b49814p-113f,
     0.0f, 0.0f, 0.0f, 0x1.56d702p-44f, 0.0f, 0.0f, 0x1.9a707p-54f, 0x1.af1f82p-52f,
     0.0f, 0.0f, 0x1.708d76p-36f, 0x1.07a9a8p-11f, 0x1.4380f6p-27f, 0x1.ac7b2p-125f,
     0.0f, 0.0f, 0.0f, 0x1.0dd8eap-83f, 0x1.36ef7cp-14f, 0.0f, 0x1.f6d38ep-80f, 0.0f,
     0x1.93af3cp-55f, 0.0f, 0x1.c926bap-33f, 0.0f, 0.0f, 0x1.3b8f0ap-89f, 0.0f, 0.0f,
     0.0f, 0x1.12c14ep-46f, 0.0f, 0x1.aeca38p-33f, 0x1.3aef7p-22f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e0fc86p-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8b5b7ap-1f, 0.0f,
     0x1p0f, 0x1.6b3d4ep-31f, 0.0f, 0x1.c4d9bep-86f, 0.0f, 0x1.7ad3d8p-63f,
     0x1.440f2p-80f, 0x1.ae8facp-80f, 0x1.93166p-76f, 0x1.724732p-102f, 0.0f,
     0x1.f0d75p-126f, 0.0f, 0.0f, 0.0f, 0x1.9c6566p-35f, 0x1.6f8e1ap-20f,
     0x1.058d82p-86f, 0x1.17cd64p-21f, 0x1.3b4c14p-43f, 0.0f, 0.0f, 0.0f,
     0x1.a5e5b6p-119f, 0.0f, 0x1.5a1e04p-43f, 0.0f, 0x1.334e5ep-86f, 0.0f, 0.0f,
     0x1.b3cfe2p-125f, 0x1.efbdd6p-68f, 0.0f, 0.0f, 0x1.8b41e2p-17f, 0.0f, 0.0f,
     0x1.5b37b6p-71f, 0x1.6a9902p-12f, 0x1.0b4d6ep-35f, 0.0f, 0.0f, 0.0f,
     0x1.897978p-78f, 0x1.af9b86p-82f, 0x1.71c278p-77f, 0x1.a06e42p-33f, 0.0f,
     0x1.d98c06p-104f, 0.0f, 0x1.4df68ap-47f, 0.0f, 0x1.a5af32p-48f, 0x1.48ad14p-121f,
     0x1.85ccdap-18f, 0.0f, 0.0f, 0.0f, 0x1.910bd8p-70f, 0x1.4d7b34p-94f,
     0x1.0fd39cp-60f, 0.0f, 0x1.735e84p-79f, 0.0f, 0.0f, 0x1.b705a8p-118f,
     0x1.be40d6p-106f, 0.0f, 0.0f, 0.0f, 0x1.420b86p-16f, 0.0f, 0.0f,
     0x1.78463ep-108f, 0x1.9423a2p-61f, 0.0f, 0x1.6e33d8p-48f, 0x1.a76dc8p-38f, 0.0f,
     0x1.be2654p-89f, 0.0f, 0x1.041a1ap-90f, 0.0f, 0.0f, 0x1.47066ep-3f,
     0x1.7bbdd4p-38f, 0.0f, 0.0f, 0.0f, 0x1.79c9fap-6f, 0.0f, 0x1.15a51ap-56f, 0.0f,
     0x1.76a2f6p-23f, 0x1.1dd15ap-101f, 0x1.676c0ep-116f, 0.0f, 0x1.43a6eep-20f, 0.0f,
     0.0f, 0.0f, 0x1.807b1cp-100f, 0x1.417b6ep-45f, 0.0f, 0x1.7579aap-49f, 0.0f,
     0x1.4dbc9p-30f, 0x1.a9cfdp-20f, 0x1.6976dcp-11f, 0x1.b44904p-4f, 0x1.b339d2p-76f,
     0.0f, 0x1.bb8b2p-118f, 0x1.10d8b8p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f424c2p-86f, 0x1.818828p-35f, 0x1.4e6dfap-101f, 0x1.26ad3cp-19f, 0.0f,
     0x1.5474f8p-95f, 0.0f, 0.0f, 0x1.7569c8p-78f, 0.0f, 0.0f, 0.0f, 0x1.fb8cp-20f,
     0x1.6216c8p-103f, 0.0f, 0.0f, 0.0f, 0x1.49cb58p-53f, 0.0f, 0.0f,
     0x1.b7b16ep-120f, 0x1.59dap-68f, 0.0f, 0.0f, 0x1.de87bcp-101f, 0.0f,
     0x1.e276cep-34f, 0.0f, 0.0f, 0x1.1cc736p-87f, 0x1.1d752p-25f, 0x1.ad3b6ap-25f,
     0.0f, 0.0f, 0.0f, 0x1.05d4d6p-22f, 0x1.67ea8p-85f, 0.0f, 0.0f, 0x1.c23bfp-71f,
     0.0f, 0.0f, 0x1.938cbp-116f, 0x1.ef6226p-52f, 0x1.4a91dcp-47f, 0.0f,
     0x1.f3e7fep-93f, 0.0f, 0.0f, 0x1.e9f9p-6f, 0.0f, 0x1.770a7p-3f, 0.0f, 0.0f,
     0x1.31bec8p-50f, 0.0f, 0.0f, 0x1.ccf12ep-126f, 0.0f, 0.0f, 0.0f, 0x1.d0bdap-85f,
     0.0f, 0.0f, 0x1.2dfecep-14f, 0.0f, 0x1.d92a3cp-26f, 0x1.a1427ap-85f,
     0x1.7316cp-88f, 0.0f, 0x1.795046p-92f, 0.0f, 0x1.b3c676p-14f, 0.0f, 0.0f,
     0x1.07f38cp-30f, 0x1.92f278p-125f, 0.0f, 0x1.301162p-84f, 0x1.da1f6p-116f,
     0x1.0fcf5p-23f, 0x1.89cc7ap-22f, 0x1.d09296p-58f, 0x1.0560eap-53f, 0.0f, 0.0f,
     0x1.48e756p-76f, 0.0f, 0.0f, 0x1.e59854p-80f, 0x1.bd2634p-116f, 0x1.9d7efcp-114f,
     0x1.3f8ba6p-27f, 0x1.8f665cp-126f, 0.0f, 0x1.052cc6p-77f, 0.0f, 0x1.1a251ap-50f,
     0.0f, 0.0f, 0.0f, 0x1.89ce46p-81f, 0.0f, 0.0f, 0.0f, 0x1.0685eep-3f,
     0x1.5dcb02p-80f, 0x1.2b9406p-75f, 0.0f, 0x1.d5d628p-19f, 0x1.59547p-22f, 0.0f,
     0.0f, 0x1.b87a7ap-19f, 0.0f, 0x1.d65554p-76f, 0x1.41cc6cp-22f, 0.0f, 0.0f,
     0x1.db309ap-21f, 0x1.d4120ep-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ce1a26p-110f,
     0x1.25705ap-20f, 0.0f, 0.0f, 0x1.610954p-39f, 0x1.31113ap-36f, 0.0f,
     0x1.639df6p-77f, 0x1.c47458p-21f, 0x1.4796b6p-24f, 0x1.9fbe3ap-19f, 0.0f,
     0x1.8d7e72p-69f, 0x1.0d41dp-103f, 0.0f, 0x1.46a78ep-69f, 0x1.c71f5p-56f,
     0x1.9760d8p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f801ap-57f, 0.0f, 0x1.e248d6p-106f,
     0x1.394158p-64f, 0x1.d99f22p-37f, 0.0f, 0x1.14e618p-1f, 0x1.f4cbacp-119f,
     0x1.5c9b16p-17f, 0x1.b12d1ep-56f, 0x1.ba76f6p-83f, 0x1.75383ap-3f, 0.0f, 0.0f,
     0.0f, 0x1.712fe4p-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.24ad92p-46f, 0x1.7e0c76p-92f,
     0x1.f7b67ap-118f, 0x1.8e7d3ap-85f, 0x1.824134p-43f, 0x1.b30cccp-116f,
     0x1.d54c7cp-91f, 0x1.6f5edp-49f, 0x1.3968e6p-98f, 0x1.0d2dc8p-32f,
     0x1.ef3ea2p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.31ea12p-38f, 0x1.f2f92ap-63f,
     0x1.643764p-113f, 0x1.e0ed4cp-89f, 0x1.92883p-92f, 0.0f, 0x1.468c5cp-72f, 0.0f,
     0.0f, 0.0f, 0x1.0228ap-122f, 0.0f, 0.0f, 0.0f, 0x1.fed778p-33f, 0x1.dcd4fp-90f,
     0x1.7f48dep-97f
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
            tmp1 = Sleef_finz_sinhf4_u35kvx(tmp0);
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
    printf("Sleef_finz_sinhf4_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_sinhf4_u35kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
