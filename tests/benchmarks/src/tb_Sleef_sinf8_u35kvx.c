/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sinf8_u35kvx.c --function Sleef_sinf8_u35kvx --headers \
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
     0x1.d8f414p-77f, 0x1.6418cp-65f, 0x1.3c1b9cp-67f, 0.0f, 0.0f, 0.0f,
     0x1.9d0fcap-91f, 0.0f, 0.0f, 0x1.57d89p-16f, 0x1.6f1a92p-115f, 0x1.5d8beep-63f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e110d4p-16f,
     0.0f, 0x1.d96ee4p-96f, 0x1.6f00a2p-101f, 0.0f, 0x1.0f6edep-29f, 0x1.6b6bd4p-83f,
     0x1.2dc642p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d35772p-31f, 0.0f, 0.0f,
     0x1.95db5ap-123f, 0.0f, 0x1.6f6962p-28f, 0x1.acefaap-103f, 0x1.cad19ap-45f,
     0x1.dfb9c6p-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.562df6p-45f, 0x1.ca08a2p-68f,
     0.0f, 0.0f, 0x1.f0e57ap-8f, 0.0f, 0.0f, 0x1.a0bc76p-97f, 0x1.455b2ep-25f, 0.0f,
     0x1.bad61ap-14f, 0x1.0df754p-116f, 0.0f, 0.0f, 0.0f, 0x1.487e96p-1f,
     0x1.85f042p-79f, 0.0f, 0x1.c4bf54p-26f, 0x1.e15208p-55f, 0x1.4c62ecp-119f,
     0x1.da19fcp-117f, 0x1.f61e9cp-30f, 0x1.9215dp-86f, 0x1.4253dcp-39f,
     0x1.d698dap-30f, 0.0f, 0.0f, 0x1.0936bp-46f, 0.0f, 0x1.db9286p-86f,
     0x1.4892f2p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b1ecfap-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.26a128p-67f, 0.0f, 0.0f,
     0x1.ecc2ep-32f, 0.0f, 0x1.f4c204p-59f, 0.0f, 0.0f, 0.0f, 0x1.980f72p-50f, 0.0f,
     0x1.07e94ap-1f, 0x1.ab20fcp-20f, 0x1.7eaec8p-88f, 0x1.a0746ap-57f,
     0x1.7e22e2p-92f, 0x1.bb4bbp-20f, 0.0f, 0x1.1aa43cp-102f, 0x1.feb4c2p-88f, 0.0f,
     0.0f, 0x1.721ff6p-102f, 0.0f, 0x1.c795e6p-72f, 0.0f, 0x1.aa319ap-94f,
     0x1.75a0acp-99f, 0.0f, 0x1.54f1dp-24f, 0.0f, 0x1.0ef10ap-80f, 0.0f,
     0x1.f98a82p-87f, 0x1.39bc92p-44f, 0x1.e68c24p-121f, 0x1.a35facp-58f,
     0x1.6c592cp-44f, 0x1.ddbd64p-5f, 0x1.e8f652p-109f, 0x1.4c0d2p-61f,
     0x1.55a15p-85f, 0x1.c9f07ap-73f, 0.0f, 0.0f, 0x1.8a77f6p-48f, 0x1.f90728p-25f,
     0x1.324b5ep-36f, 0.0f, 0x1.335ec8p-22f, 0.0f, 0x1.5bbe94p-42f, 0x1.5fbf84p-58f,
     0x1.2978a2p-19f, 0.0f, 0.0f, 0x1.c2ade2p-42f, 0x1.defb7ep-7f, 0.0f, 0.0f,
     0x1.023f56p-103f, 0x1.543b6ap-104f, 0x1.102588p-87f, 0x1.1fbc06p-4f, 0.0f, 0.0f,
     0x1.f32884p-123f, 0x1.eee13cp-55f, 0.0f, 0x1.d033fap-82f, 0x1.2a2a6ep-61f,
     0x1.e588e4p-110f, 0.0f, 0x1.fc38d6p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3d18a2p-80f, 0.0f, 0x1.eda982p-114f, 0x1.8a37a6p-73f, 0.0f, 0.0f, 0.0f,
     0x1.86c5eep-84f, 0.0f, 0.0f, 0.0f, 0x1.a80146p-96f, 0.0f, 0x1.23def4p-52f,
     0x1.9cc18ep-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d3d0eap-2f, 0x1.1dc978p-33f,
     0x1.50bc16p-28f, 0.0f, 0x1.90918p-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fcbd2ap-34f, 0x1.57d804p-54f, 0x1.f6562ap-38f, 0x1.581508p-82f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2a7eep-34f, 0x1.6a7ee4p-70f, 0x1.90178cp-57f,
     0x1.fedb6p-108f, 0x1.b2a23cp-80f, 0.0f, 0x1.24e1aep-49f, 0.0f, 0x1.c9f5a8p-126f,
     0.0f, 0x1.7c4e6ap-34f, 0x1.bc1fb8p-18f, 0x1.0b59f2p-16f, 0.0f, 0x1.3cc8c8p-66f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.353ed4p-19f, 0.0f, 0.0f,
     0x1.49d88ep-82f, 0.0f, 0x1.846b7ap-125f, 0x1.c08ff6p-74f, 0.0f, 0x1.bd94e2p-8f,
     0x1.d9ce1ap-88f, 0.0f, 0.0f, 0x1.bfd84cp-85f, 0.0f, 0.0f, 0.0f, 0x1.002c24p-95f,
     0x1.579de2p-14f, 0x1.ba50b8p-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.96d542p-4f,
     0x1.748354p-77f, 0x1.6c9cdcp-72f, 0x1.69a1b6p-123f, 0x1.7d12a4p-104f,
     0x1.697bdap-40f, 0.0f, 0x1.feb27cp-47f, 0.0f, 0.0f, 0x1.acd9p-5f, 0.0f, 0.0f,
     0.0f, 0x1.2ab50ep-65f, 0.0f, 0.0f, 0x1.9293c8p-1f, 0x1.fd0b76p-63f, 0.0f,
     0x1.1dcbfep-25f, 0x1.334666p-106f, 0.0f, 0x1.f40722p-92f, 0x1.cb5672p-22f,
     0x1.f1826ap-107f, 0.0f, 0.0f, 0.0f, 0x1.3bc626p-91f, 0.0f, 0x1.14ac78p-116f,
     0x1.ae1ffep-74f, 0x1.104968p-19f, 0x1.6885c8p-100f, 0x1.997f74p-67f, 0.0f,
     0x1.abf888p-11f, 0x1.7a1a4ap-79f, 0.0f, 0.0f, 0x1.4e96eap-22f, 0.0f,
     0x1.e03586p-66f, 0x1.c655aep-106f, 0x1.c42572p-11f, 0x1.a0619ap-38f, 0.0f, 0.0f,
     0x1.4157f8p-118f, 0x1.9947bap-75f, 0x1.ac210ap-29f, 0x1.032f3ap-84f, 0.0f,
     0x1.496f66p-8f, 0x1.a7016cp-78f, 0x1.4e62bep-65f, 0x1.8bc36p-21f,
     0x1.2c7192p-63f, 0x1.eb987cp-100f, 0x1.c3d33ep-96f, 0.0f, 0x1.2cbd9ep-36f, 0.0f,
     0x1.ce6b14p-123f, 0.0f, 0x1.8210e8p-40f, 0x1.469a4ep-39f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.6ab674p-56f, 0.0f, 0.0f, 0.0f, 0x1.b8128ap-112f, 0.0f, 0.0f,
     0x1.bd353cp-8f, 0.0f, 0x1.b14f24p-55f, 0.0f, 0x1.c3facp-55f, 0x1.9b40b4p-6f,
     0x1.7a1becp-119f, 0.0f, 0x1.e9e3bp-24f, 0.0f, 0.0f, 0x1.ab346p-66f,
     0x1.aeef56p-37f, 0x1.99e3f4p-111f, 0x1.73a998p-106f, 0.0f, 0x1.b874fap-21f,
     0x1.55532p-72f, 0x1.4d10a8p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.08a7c2p-124f,
     0x1.760d9ep-74f, 0x1.95d84cp-62f, 0x1.6fca3ep-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d480dcp-73f, 0.0f, 0.0f, 0.0f, 0x1.d73282p-40f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.fa272ap-121f, 0.0f, 0x1.b708ep-49f, 0x1.518faap-108f, 0x1.3a0512p-65f,
     0x1.f7c4e8p-19f, 0x1.2c3084p-116f, 0.0f, 0x1.a60b24p-104f, 0x1.82562p-49f,
     0x1.65e24ep-35f, 0x1.d49a96p-94f, 0x1.58e86p-72f, 0x1.841eap-12f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.0d342cp-40f, 0.0f, 0x1.93d238p-84f, 0x1.9fbf7ep-78f, 0.0f, 0.0f,
     0x1.45d6e2p-65f, 0x1p0f, 0.0f, 0x1.e6536ep-45f, 0x1.900462p-67f, 0x1.e67deap-88f,
     0.0f, 0.0f, 0x1.509342p-34f, 0x1.9afeep-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.55f34p-61f, 0.0f, 0.0f, 0x1.7190ap-19f, 0x1.1ed408p-68f, 0.0f, 0.0f,
     0x1.3744e4p-125f, 0.0f, 0x1.58a0c4p-34f, 0x1.908cap-106f, 0x1.cc2cf8p-40f,
     0x1.757704p-122f, 0x1.35466p-97f, 0x1.a9fb24p-48f, 0.0f, 0x1.d436eep-20f, 0.0f,
     0x1.74375ap-106f, 0.0f, 0.0f, 0x1.7ef462p-65f, 0.0f, 0x1.4cd9a2p-103f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.91339cp-33f, 0x1.784p-19f, 0.0f, 0x1.dfefb4p-61f,
     0x1.f0fa9p-96f, 0.0f, 0.0f, 0x1.4e76dp-97f, 0.0f, 0.0f, 0x1.ae1006p-73f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.10ab8ep-65f, 0x1.5ff412p-120f, 0.0f, 0x1.19a398p-48f,
     0x1.f1802ep-90f, 0x1.d61c68p-122f, 0x1.31cce4p-56f, 0.0f, 0.0f, 0x1.2479d2p-13f,
     0x1.4c69fep-36f, 0x1.aea512p-68f, 0x1.0fde86p-28f, 0.0f, 0x1.199cbcp-30f, 0.0f,
     0.0f, 0x1.862b86p-25f, 0x1.397c7p-107f, 0x1.d57a0ap-79f, 0.0f, 0.0f, 0.0f,
     0x1.3d71f8p-79f, 0.0f, 0x1.2b6b1cp-48f, 0.0f, 0x1.8735d2p-34f, 0x1.4f7bb8p-22f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.0b96e6p-45f, 0.0f, 0.0f,
     0x1.d82104p-43f, 0x1.fe8a4ap-45f, 0x1.b088dep-13f, 0.0f, 0.0f, 0.0f,
     0x1.ec68fcp-110f, 0.0f, 0x1.650c0ep-97f, 0x1.9b7c82p-81f, 0x1.1c3adep-124f,
     0x1.87783cp-42f, 0x1.fd957ep-116f, 0.0f, 0.0f, 0x1.42fee2p-90f, 0.0f, 0.0f,
     0x1.e4fafp-118f, 0.0f, 0x1.e41bfep-19f, 0x1.90a07ep-90f, 0.0f, 0.0f,
     0x1.f3f2ap-77f, 0.0f, 0.0f, 0x1.952126p-48f, 0.0f, 0x1.14f0a4p-82f, 0.0f,
     0x1.be01a6p-15f, 0.0f, 0x1.9fe21p-113f, 0x1.913ddp-33f, 0x1.54f00ep-102f, 0.0f,
     0x1.0b4f6ep-101f, 0x1.8e71a6p-51f, 0x1.c55444p-77f, 0x1.94f7fap-13f, 0.0f, 0.0f,
     0.0f, 0x1.af25d4p-94f, 0.0f, 0.0f, 0x1.3cec8p-100f, 0.0f, 0x1.528614p-89f,
     0x1.408b16p-74f, 0.0f, 0x1.5f103ap-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2ccd9ep-113f, 0.0f, 0.0f, 0x1.d72b4cp-117f, 0x1.5ba07p-25f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.447328p-1f, 0x1.89f8ep-13f, 0x1.342dacp-54f, 0x1.f26288p-74f, 0.0f,
     0x1.42470ap-20f, 0.0f, 0x1.5b51cp-61f, 0.0f, 0x1.711236p-61f, 0.0f,
     0x1.76789cp-116f, 0x1.b4b5eep-54f, 0.0f, 0x1.bbe968p-6f, 0x1.d53b14p-77f,
     0x1.886e62p-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f3e4c6p-115f, 0.0f, 0.0f, 0.0f, 0x1.51d0f6p-103f, 0x1.11c63ep-118f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.160d24p-69f, 0x1.63e616p-114f, 0.0f,
     0x1.26f2b2p-54f, 0x1.3b03b4p-104f, 0x1.1bdd5ep-78f, 0.0f, 0x1.3ca5aap-53f, 0.0f,
     0.0f, 0x1.b48fe4p-122f, 0.0f, 0x1.97a8bp-2f, 0x1.5e0e2ap-49f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a1f2eep-90f, 0.0f, 0x1.4f5134p-75f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.78b58ep-123f, 0x1.234896p-50f, 0x1.4e9576p-116f, 0.0f, 0.0f,
     0x1.5fb1d2p-77f, 0.0f, 0x1.07a0c2p-73f, 0x1.bf4ee6p-62f, 0.0f, 0.0f,
     0x1.0b16eep-23f, 0.0f, 0x1.d83f4ap-17f, 0x1.3b4c64p-115f, 0.0f, 0x1.7a5872p-86f,
     0x1.0e2146p-101f, 0x1.238baap-66f, 0.0f, 0x1.44d50ap-19f, 0.0f, 0.0f,
     0x1.f2007ep-74f, 0x1.56856cp-64f, 0x1.1a3e86p-106f, 0.0f, 0.0f, 0x1.adc51ap-72f,
     0x1.16dddp-123f, 0x1.1d8374p-117f, 0.0f, 0.0f, 0.0f, 0x1.8ff282p-93f,
     0x1.aadb6ap-19f, 0x1.1b934p-16f, 0.0f, 0.0f, 0.0f, 0x1.bd80fep-109f, 0.0f,
     0x1.0e27bp-34f, 0.0f, 0x1.67532ep-34f, 0.0f, 0x1.8dc992p-10f, 0x1.695884p-108f,
     0.0f, 0x1.8d9d2p-16f, 0x1.de9a02p-42f, 0x1.1a8c32p-67f, 0.0f, 0.0f,
     0x1.977d9p-83f, 0x1.6f2bdep-97f, 0x1.147dfap-107f, 0.0f, 0x1.6d4732p-65f, 0.0f,
     0x1.258222p-84f, 0x1.0dc1acp-17f, 0.0f, 0x1.1633f4p-30f, 0.0f, 0x1.1f98e2p-61f,
     0x1.1ad55ap-37f, 0.0f, 0x1.b3f80cp-117f, 0x1.023058p-82f, 0x1.50ff44p-96f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9948d8p-115f, 0x1.c5a6bep-42f, 0.0f, 0.0f,
     0x1.81288ep-76f, 0x1.7201f6p-68f, 0x1.00e3a8p-34f, 0x1.ec444p-65f,
     0x1.d5bc54p-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f5c304p-52f, 0.0f, 0.0f,
     0x1.d535eap-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4f8ceep-113f,
     0.0f, 0x1.bf7332p-21f, 0.0f, 0x1.3e6a6ap-103f, 0x1.ec8ec6p-118f, 0.0f, 0.0f,
     0x1.8a4214p-15f, 0.0f, 0.0f, 0x1.677a82p-79f, 0.0f, 0.0f, 0.0f, 0x1.c036a2p-41f,
     0.0f, 0x1.8ea052p-37f, 0.0f, 0x1.3e4d1p-115f, 0x1.1d2cd8p-61f, 0x1.7e7336p-68f,
     0.0f, 0.0f, 0x1.02670ep-39f, 0x1.e37f3ap-31f, 0x1.20d98p-16f, 0.0f, 0.0f, 0.0f,
     0x1.41666ap-16f, 0x1.d9e1eep-86f, 0.0f, 0.0f, 0x1.eb4cdep-112f, 0x1.d752a6p-40f,
     0.0f, 0x1.38ffdp-42f, 0.0f, 0x1.2aa344p-53f, 0x1.b31efcp-111f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c6e052p-76f, 0x1.6991dcp-29f, 0.0f, 0x1.edb8f2p-106f, 0.0f,
     0x1.8d43b6p-106f, 0x1.35a99ap-30f, 0x1.4ebfbep-87f, 0x1.667908p-8f,
     0x1.52c02p-88f, 0x1.421556p-63f, 0x1.f2e846p-12f, 0.0f, 0x1.7995a8p-109f,
     0x1.9b1f2ap-92f, 0.0f, 0x1.13d522p-89f, 0.0f, 0x1.002c8cp-67f, 0x1.3dd0c8p-53f,
     0.0f, 0x1.2729d2p-58f, 0.0f, 0x1.0f99e2p-87f, 0.0f, 0.0f, 0x1.3cdcbap-65f,
     0x1.fa6ac8p-124f, 0.0f, 0.0f, 0x1.fbc8a6p-76f, 0.0f, 0x1.756558p-11f,
     0x1.694f96p-83f, 0x1.d5c9a6p-7f, 0x1.766822p-51f, 0x1.1652c6p-72f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c470c6p-95f, 0.0f, 0.0f, 0.0f, 0x1.adef04p-55f, 0.0f,
     0x1.034df6p-5f, 0.0f, 0x1.715de8p-80f, 0x1.46bf2ep-115f, 0x1.7065ecp-100f,
     0x1.192212p-110f, 0.0f, 0x1.08c33p-75f, 0.0f, 0x1.61566cp-88f, 0.0f,
     0x1.d6cb2ep-44f, 0x1.3f1b78p-101f, 0x1.c9a91cp-88f, 0.0f, 0.0f, 0x1.c58faep-100f,
     0.0f, 0x1.fc03c8p-49f, 0x1.540518p-28f, 0x1.ba209cp-4f, 0x1.6dcd9cp-32f, 0.0f,
     0.0f, 0.0f, 0x1.b849fcp-7f, 0x1.818d8ep-77f, 0x1.dde078p-72f, 0x1.6ef948p-108f,
     0.0f, 0x1.0c28p-15f, 0x1.f03ebep-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0b40fap-87f,
     0.0f, 0.0f, 0.0f, 0x1.566806p-49f, 0x1.895cb2p-124f, 0x1.f34c3ap-10f,
     0x1.180d84p-95f, 0x1.cbe6c6p-80f, 0.0f, 0x1.949b2p-119f, 0x1.d01446p-1f,
     0x1.3aa688p-50f, 0.0f, 0x1.683afp-9f, 0.0f, 0x1.027f2p-50f, 0.0f,
     0x1.9a4c9ep-117f, 0x1.b53a2ap-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8f6b98p-102f,
     0x1.5b32a4p-120f, 0x1.c739e8p-25f, 0.0f, 0x1.81d19ep-58f, 0.0f, 0x1.5a0dbp-53f,
     0x1.0d319ap-120f, 0x1.c0b264p-82f, 0x1.4a7a8ep-38f, 0.0f, 0.0f, 0x1.0705dp-53f,
     0x1.d66ddp-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7e92aap-81f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f56384p-39f, 0.0f, 0x1.717f86p-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3e0a3ep-21f, 0.0f, 0x1.38059cp-88f, 0.0f, 0x1.cac3f2p-124f, 0.0f,
     0x1.cf2a04p-103f, 0.0f, 0x1.819994p-53f, 0x1.a1b1c8p-122f, 0.0f, 0x1.68af98p-99f,
     0.0f, 0.0f, 0x1.c6741p-26f, 0.0f, 0x1.0970d4p-86f, 0.0f, 0x1.dad2e2p-88f, 0.0f,
     0x1.b25e0ap-50f, 0.0f, 0x1.a36bdp-27f, 0.0f, 0x1.bd9a9p-12f, 0.0f,
     0x1.18bbfcp-54f, 0.0f, 0x1.b913dcp-71f, 0.0f, 0.0f, 0.0f, 0x1.9b28cap-22f,
     0x1.c378ep-23f, 0.0f, 0x1.2b75eap-22f, 0.0f, 0.0f, 0x1.968f92p-76f,
     0x1.28d2aep-73f, 0x1.aa723ep-73f, 0x1.cfeff2p-27f, 0x1.d64656p-90f, 0.0f, 0.0f,
     0x1.95cabcp-51f, 0.0f, 0.0f, 0x1.47e3fp-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.34fa3ap-1f, 0.0f, 0.0f, 0x1.965bc8p-123f, 0.0f, 0x1.974846p-17f,
     0x1.a56064p-5f, 0.0f, 0x1.b8a818p-69f, 0.0f, 0x1.d0b244p-119f, 0x1.552264p-116f,
     0.0f, 0.0f, 0.0f, 0x1.58da46p-13f, 0x1.f86ed4p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a9c752p-108f, 0x1.bf7ba4p-42f, 0.0f, 0.0f, 0x1.48eef8p-74f, 0.0f
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
            tmp1 = Sleef_sinf8_u35kvx(tmp0);
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
    printf("Sleef_sinf8_u35kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_sinf8_u35kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
