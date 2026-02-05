/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_acoshf8_u10kvx.c --function Sleef_acoshf8_u10kvx \
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
     0x1.fa42a4p-102f, 0x1.cab72p-122f, 0x1.6327dcp-24f, 0.0f, 0x1.05762cp-15f, 0.0f,
     0x1.e73aaap-11f, 0.0f, 0x1.bf7736p-114f, 0x1.481274p-34f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0840ap-96f, 0.0f, 0.0f, 0.0f, 0x1.f14238p-7f, 0x1.a9f098p-15f, 0.0f,
     0x1.b7573ap-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.532868p-93f, 0.0f,
     0x1.c76626p-63f, 0x1.c544d8p-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f8724cp-34f, 0.0f,
     0x1.cc69dcp-95f, 0x1.570728p-123f, 0.0f, 0x1p0f, 0.0f, 0x1.1b8a5cp-14f,
     0x1.d3c166p-105f, 0.0f, 0.0f, 0x1.8bad86p-93f, 0.0f, 0.0f, 0x1.82a6b4p-69f, 0.0f,
     0.0f, 0.0f, 0x1.56503ap-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6270b8p-66f, 0.0f, 0.0f,
     0x1.692e12p-96f, 0.0f, 0x1.c236c6p-86f, 0.0f, 0.0f, 0.0f, 0x1.f5971ep-98f, 0.0f,
     0.0f, 0.0f, 0x1.485afp-44f, 0.0f, 0.0f, 0x1.79187cp-35f, 0x1.54ebp-10f, 0.0f,
     0x1.77e9f8p-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fe8242p-59f, 0.0f,
     0.0f, 0x1.10da08p-5f, 0.0f, 0x1.7dee36p-31f, 0x1.80ded4p-123f, 0.0f, 0.0f,
     0x1.74016p-60f, 0.0f, 0x1.c4137p-57f, 0.0f, 0x1.51d254p-43f, 0x1.8d679ep-6f,
     0.0f, 0.0f, 0x1.924f96p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d91aep-3f,
     0x1.9a108cp-31f, 0x1.6c5756p-3f, 0.0f, 0x1.d44504p-124f, 0.0f, 0x1.3bd7d4p-27f,
     0x1.a85cap-32f, 0.0f, 0x1.0632c2p-11f, 0x1.0e77d8p-90f, 0x1.efd16cp-11f,
     0x1.680f06p-73f, 0.0f, 0.0f, 0x1.098a3p-51f, 0x1.652254p-124f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.deda6p-73f, 0.0f, 0.0f, 0x1.1f65eap-72f, 0.0f, 0x1.a3aafep-57f,
     0x1.846cp-65f, 0.0f, 0x1.772a2ep-50f, 0x1.8c9e1cp-69f, 0x1.46cb36p-8f,
     0x1.42ea9ep-42f, 0x1.f8f556p-30f, 0x1.e3638p-70f, 0x1.9a6136p-14f, 0.0f, 0.0f,
     0x1.a96626p-122f, 0.0f, 0x1.a073dp-104f, 0.0f, 0x1.38df34p-105f, 0.0f,
     0x1.c600a6p-76f, 0.0f, 0.0f, 0.0f, 0x1.8cd0c8p-71f, 0x1.e2d656p-57f, 0.0f, 0.0f,
     0x1.49e03p-60f, 0x1.94b078p-87f, 0x1.8ec64ep-90f, 0.0f, 0x1.61f1eap-44f,
     0x1.528c6p-51f, 0x1.7f432cp-13f, 0.0f, 0.0f, 0x1.bd5adep-126f, 0x1.cad81ap-12f,
     0.0f, 0x1.d339p-73f, 0.0f, 0.0f, 0x1.f9eebcp-37f, 0.0f, 0.0f, 0x1.1556eep-1f,
     0x1.1d37dep-99f, 0.0f, 0x1.844ab4p-23f, 0.0f, 0.0f, 0x1.15bac2p-111f, 0.0f,
     0x1.5ecc4ap-120f, 0.0f, 0.0f, 0x1.4053f4p-113f, 0.0f, 0x1.622662p-43f, 0.0f,
     0x1.1e8f38p-112f, 0x1.4f3d9ap-66f, 0x1.6c9132p-28f, 0.0f, 0x1.3b60eep-22f, 0.0f,
     0x1.7de61cp-126f, 0.0f, 0x1.02c886p-6f, 0.0f, 0.0f, 0x1.2ecd3ap-64f,
     0x1.1445f6p-47f, 0x1.cac624p-85f, 0x1.ad52cp-93f, 0.0f, 0.0f, 0x1.2dfbf8p-102f,
     0.0f, 0.0f, 0x1.57919p-66f, 0.0f, 0x1.b28bf8p-100f, 0.0f, 0x1.6c13a2p-47f, 0.0f,
     0x1.b93cbep-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.44a7ep-109f, 0x1.3ea95ap-108f,
     0x1.ce864ep-83f, 0.0f, 0x1.59c7b6p-106f, 0.0f, 0.0f, 0x1.2301eap-67f,
     0x1.7309eap-111f, 0x1.55fce6p-30f, 0x1.4a1a5p-124f, 0x1.899072p-96f,
     0x1.758932p-126f, 0.0f, 0.0f, 0x1.2eff82p-32f, 0.0f, 0x1.e6c3f8p-71f,
     0x1.73848cp-1f, 0x1.1901b6p-88f, 0x1.495f8cp-124f, 0x1.9a54a6p-53f, 0.0f, 0.0f,
     0x1.776fdcp-89f, 0x1.949de6p-122f, 0x1.8d6a34p-51f, 0x1.9c5f18p-118f,
     0x1.ae8328p-29f, 0x1.b15386p-94f, 0.0f, 0.0f, 0x1.345a3ep-35f, 0x1p0f,
     0x1.f83d4p-83f, 0.0f, 0.0f, 0.0f, 0x1.59148ep-8f, 0.0f, 0x1.c8c1cep-37f,
     0x1.ebff5ep-95f, 0.0f, 0x1.37dbbep-23f, 0.0f, 0.0f, 0.0f, 0x1.65fbdep-24f,
     0x1.986a3cp-12f, 0x1.e45b32p-17f, 0x1.c286c6p-98f, 0x1.33715p-48f, 0.0f,
     0x1.61e23ap-13f, 0x1.1da534p-68f, 0x1.a97d3ep-122f, 0.0f, 0.0f, 0.0f,
     0x1.168bd6p-32f, 0.0f, 0x1.8914e4p-82f, 0.0f, 0x1.eeb676p-10f, 0x1.0899c4p-32f,
     0x1.d3d49ep-74f, 0.0f, 0x1.022bcp-117f, 0x1.19ec8p-40f, 0.0f, 0x1.4801ecp-102f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d84d62p-48f, 0x1.e5c14ap-24f, 0x1.e1d316p-112f, 0.0f,
     0x1.fc5ea8p-73f, 0.0f, 0x1.5d61b2p-1f, 0x1.fb4f78p-50f, 0.0f, 0.0f,
     0x1.9efe14p-8f, 0x1.cbff76p-58f, 0.0f, 0x1.da2674p-15f, 0x1.30cf96p-71f, 0.0f,
     0x1.cd8076p-73f, 0x1.4e0962p-116f, 0.0f, 0.0f, 0x1.104d32p-82f, 0x1.1fccb4p-18f,
     0.0f, 0x1.ceaf6ep-68f, 0.0f, 0x1.bd4f6ap-61f, 0.0f, 0x1.4d70bcp-35f, 0.0f,
     0x1.0d0c0ap-96f, 0.0f, 0x1.822fa4p-87f, 0.0f, 0x1.fc07a2p-65f, 0.0f, 0.0f, 0.0f,
     0x1.d7e37ap-32f, 0x1.b192f8p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c3289cp-108f, 0.0f,
     0x1.58a78ep-59f, 0x1.381d2ep-34f, 0x1.0e1526p-101f, 0x1.2c3482p-80f,
     0x1.a6216ap-35f, 0x1.7124ecp-111f, 0.0f, 0x1.38d624p-30f, 0x1.91ff46p-110f,
     0x1.afd47p-125f, 0.0f, 0x1.7002c8p-75f, 0x1.ccae2p-14f, 0x1.42924ep-6f,
     0x1.8a138p-52f, 0x1.751b34p-125f, 0.0f, 0x1.f90ae2p-86f, 0.0f, 0x1.466e0ep-102f,
     0.0f, 0x1.97f934p-13f, 0x1.d924ap-10f, 0.0f, 0.0f, 0x1.12ff6cp-75f,
     0x1.2623cep-116f, 0.0f, 0x1.64a7d8p-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.25bc8cp-41f,
     0.0f, 0x1.bff01cp-18f, 0x1.b0e8fcp-27f, 0.0f, 0x1.866faap-83f, 0.0f, 0.0f,
     0x1.d53accp-20f, 0x1.621a7ap-104f, 0.0f, 0.0f, 0.0f, 0x1.99cbe2p-78f, 0.0f, 0.0f,
     0.0f, 0x1.b746fcp-71f, 0.0f, 0.0f, 0x1.73d4aep-41f, 0.0f, 0x1.644aa4p-79f,
     0x1.a6229p-54f, 0.0f, 0x1.2ff09p-124f, 0x1.b10c9p-79f, 0.0f, 0x1.4ca0f4p-120f,
     0x1.ad46fcp-66f, 0x1.a3f6c8p-28f, 0.0f, 0.0f, 0x1.863c24p-122f, 0.0f, 0.0f,
     0x1.82753ep-110f, 0.0f, 0x1.b49704p-64f, 0.0f, 0x1.65cef8p-38f, 0.0f,
     0x1.1fb7dep-101f, 0x1.c47596p-96f, 0x1.2b69p-22f, 0.0f, 0x1.78a6bap-51f, 0.0f,
     0x1.41d838p-67f, 0x1.e01e7ep-124f, 0.0f, 0x1.d2c9aap-49f, 0x1.585a1p-85f,
     0x1.a286e8p-120f, 0x1.67d3f6p-28f, 0x1.8f8b1ap-80f, 0.0f, 0x1.99e068p-54f,
     0x1.ee1e5ep-118f, 0x1.8a8af6p-56f, 0.0f, 0x1.431d38p-87f, 0.0f, 0.0f,
     0x1.7f5032p-89f, 0.0f, 0x1.19700ap-115f, 0x1.0b2b6cp-76f, 0.0f, 0x1.a5e61cp-58f,
     0x1.fbe234p-61f, 0.0f, 0x1.1ba562p-53f, 0.0f, 0x1.f4a682p-94f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.8983ecp-85f, 0.0f, 0.0f, 0x1.7a728cp-104f, 0x1.997336p-77f,
     0x1.5ab8ecp-118f, 0x1.8f5fd2p-106f, 0.0f, 0.0f, 0x1.b42c86p-27f, 0.0f, 0.0f,
     0x1.55e87p-63f, 0.0f, 0.0f, 0x1.f0ee14p-59f, 0.0f, 0x1.515eecp-94f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a70088p-11f, 0x1.d002dap-8f, 0.0f, 0.0f, 0.0f, 0x1.63a32ep-16f,
     0.0f, 0x1.3f935cp-54f, 0x1.e42f98p-15f, 0x1.ab5358p-96f, 0.0f, 0x1.58a552p-13f,
     0x1.170e38p-83f, 0x1.ea3086p-7f, 0x1.89a464p-50f, 0.0f, 0x1.fa4f36p-90f,
     0x1.10296p-2f, 0x1.2c34b4p-75f, 0x1.98e8e4p-44f, 0x1.778e56p-49f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.0ac194p-59f, 0.0f, 0.0f, 0.0f, 0x1.bd8294p-85f, 0.0f, 0.0f,
     0x1.e4dabp-26f, 0.0f, 0.0f, 0x1.87a8ecp-121f, 0x1.f6bfbcp-24f, 0x1.2f60d4p-90f,
     0.0f, 0x1.b1abbap-80f, 0.0f, 0.0f, 0.0f, 0x1.3b81fp-36f, 0x1.7c462cp-109f, 0.0f,
     0x1.0902dap-40f, 0.0f, 0x1.6fada4p-60f, 0.0f, 0x1.59aabcp-72f, 0x1.9252a2p-31f,
     0x1.b9eb18p-22f, 0.0f, 0.0f, 0x1.e0cddp-99f, 0x1.a5c72p-19f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.2ab578p-10f, 0x1.f6a38ap-76f, 0x1.864224p-39f, 0.0f, 0.0f, 0.0f,
     0x1.ebf6fp-101f, 0x1.d9d90ep-110f, 0x1.b3483cp-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.96bf78p-44f, 0x1.fddcf2p-113f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.58e6a6p-122f, 0x1.ae7f78p-121f, 0x1.047378p-3f,
     0x1.1e76dap-16f, 0x1.b9afd4p-15f, 0.0f, 0x1.83a596p-13f, 0x1.ec25b2p-116f,
     0x1.edb20ap-41f, 0.0f, 0.0f, 0x1.525754p-83f, 0.0f, 0x1.ea2bb2p-15f,
     0x1.56f122p-35f, 0.0f, 0x1.c30e6cp-40f, 0x1.665c1ep-72f, 0.0f, 0.0f,
     0x1.c5d0aep-96f, 0x1.7a8154p-86f, 0.0f, 0x1.602298p-25f, 0x1.96c076p-2f, 0x1p0f,
     0.0f, 0x1.6d0f9ap-80f, 0x1.5699d2p-100f, 0.0f, 0.0f, 0x1.4e32dep-103f, 0.0f,
     0.0f, 0x1.3537a4p-10f, 0x1.aeb7acp-79f, 0.0f, 0x1.d2a3dp-87f, 0.0f, 0.0f, 0.0f,
     0x1.152a7cp-68f, 0x1.a70876p-35f, 0.0f, 0x1.f145c4p-76f, 0.0f, 0x1.d83fbap-36f,
     0x1.28272cp-29f, 0x1.5e723cp-24f, 0.0f, 0x1.dccafap-35f, 0.0f, 0.0f,
     0x1.c2ac5ep-94f, 0x1.e951d2p-54f, 0x1.97870ap-46f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b3fbe2p-37f, 0.0f, 0x1.673a4cp-71f, 0.0f, 0x1.d21e52p-59f, 0.0f,
     0x1.38d05cp-105f, 0x1.29ae3ap-7f, 0.0f, 0x1.39a1e8p-91f, 0x1.be70f8p-123f,
     0x1.30ee44p-4f, 0x1.02d6bcp-69f, 0.0f, 0x1.d876f2p-27f, 0.0f, 0x1.6dd338p-108f,
     0.0f, 0x1.047c1ap-58f, 0x1.b76402p-58f, 0x1.1e829ep-73f, 0.0f, 0x1.d29ff2p-59f,
     0.0f, 0x1.532904p-107f, 0x1.cc9c2ep-4f, 0x1.8e69dp-109f, 0x1.e3113p-87f,
     0x1.feefe2p-91f, 0.0f, 0x1.923134p-44f, 0x1.6ed126p-3f, 0x1.629572p-60f, 0.0f,
     0.0f, 0.0f, 0x1.a367ep-58f, 0x1.d80128p-41f, 0x1.8b8b52p-61f, 0.0f, 0.0f, 0.0f,
     0x1.786ea2p-83f, 0x1.8f3b9ap-125f, 0x1.b25d7p-29f, 0.0f, 0x1.23881cp-20f, 0.0f,
     0x1.fab7fap-64f, 0.0f, 0x1.11faa8p-113f, 0x1.6c1d32p-63f, 0x1.432ecp-64f,
     0x1.3cde2ep-70f, 0x1.6c041ep-24f, 0x1.df900ep-28f, 0x1.26763cp-91f,
     0x1.eee9fp-74f, 0x1.22f14p-101f, 0x1.327164p-91f, 0x1.26cc46p-4f, 0.0f,
     0x1.74a4fcp-2f, 0.0f, 0x1.328a34p-75f, 0.0f, 0.0f, 0x1.00e7e2p-79f, 0.0f, 0.0f,
     0.0f, 0x1.19683ap-36f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9046a2p-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4a1d5cp-122f, 0x1.edbcc8p-101f,
     0.0f, 0x1.c99c52p-117f, 0x1.da5b3ep-111f, 0x1.9eeaf4p-21f, 0x1.1da7d8p-124f,
     0.0f, 0x1.c1504p-93f, 0x1.8b6a6ap-33f, 0.0f, 0.0f, 0x1.1e65f4p-71f, 0.0f, 0.0f,
     0x1.f492d2p-21f, 0x1.282ceap-34f, 0.0f, 0.0f, 0x1.47463p-77f, 0x1.6016c4p-69f,
     0x1.fb6e54p-38f, 0.0f, 0x1.4b664cp-96f, 0.0f, 0.0f, 0x1.5874a2p-111f,
     0x1.ffa9cp-39f, 0.0f, 0x1.313dcp-51f, 0x1.661b9ep-40f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.42ee92p-115f, 0x1.80d4dap-80f, 0.0f, 0x1.74bb36p-82f,
     0.0f, 0x1.81c806p-4f, 0x1.5cd51p-11f, 0x1.3abecep-39f, 0.0f, 0.0f,
     0x1.a73c1cp-71f, 0x1.a738e6p-13f, 0.0f, 0x1.fe4bfap-95f, 0x1.f324c6p-9f,
     0x1.ba22f6p-87f, 0x1.cb01eap-85f, 0x1.b328c8p-121f, 0x1.ed4568p-76f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.eb837ep-96f, 0x1.19c992p-77f, 0.0f, 0.0f, 0x1.0f1754p-46f, 0.0f,
     0x1.ababeap-28f, 0x1.2ed056p-18f, 0.0f, 0x1.896da6p-38f, 0x1.22732ep-26f, 0.0f,
     0.0f, 0.0f, 0x1.d5c8c4p-61f, 0x1.6956bcp-61f, 0.0f, 0.0f, 0.0f, 0x1.f121a8p-29f,
     0.0f, 0.0f, 0x1.3f12dap-125f, 0.0f, 0.0f, 0x1.f1f6c4p-71f, 0x1.cb46bap-47f,
     0x1.8a6634p-9f, 0x1.ca75bep-83f, 0.0f, 0.0f, 0x1.8adb3p-33f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.5e837ap-39f, 0x1.2be3dap-76f, 0x1.8dee5cp-117f, 0x1.fa16a2p-60f,
     0.0f, 0.0f, 0.0f, 0x1.3ec8a2p-90f, 0x1.ee8bep-108f, 0.0f, 0x1.cb33ap-115f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.460db8p-62f, 0x1.db0a22p-85f, 0x1.963d92p-80f,
     0x1.df3a8p-90f, 0x1.78bc14p-6f, 0x1.ddfff2p-19f, 0x1.96d99p-114f, 0.0f, 0.0f,
     0.0f, 0x1.cf8b4ap-84f, 0.0f, 0x1.b7cc5ap-1f, 0x1.704718p-113f, 0.0f, 0.0f, 0.0f,
     0x1.e53feap-101f, 0.0f, 0x1.9a5202p-93f, 0.0f, 0x1.983c0cp-126f, 0x1.f39de2p-8f,
     0x1.32ff5p-39f, 0.0f, 0.0f, 0x1.332aa2p-102f, 0x1.f98cd4p-104f, 0x1.cf21eep-54f,
     0x1.b3145cp-56f, 0x1.77f6dap-73f, 0.0f, 0x1.c4a878p-92f, 0.0f, 0x1.7e3daep-85f,
     0.0f, 0x1.bf6d08p-62f, 0x1.b30d26p-78f, 0x1.191994p-93f, 0x1.ae405ap-105f, 0.0f,
     0.0f, 0x1.be7714p-29f, 0.0f, 0x1.ec9704p-124f, 0x1.bc4408p-38f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.88348p-114f, 0.0f, 0x1.a9be9p-65f, 0.0f, 0x1.62b406p-98f,
     0x1.4005aap-107f, 0x1.4701aep-110f, 0x1.7bb7d4p-120f, 0.0f, 0x1.0df32ap-123f,
     0.0f, 0x1.f3985ep-50f, 0.0f, 0x1.c62aaep-58f, 0x1.c0a938p-53f, 0.0f,
     0x1.6c0ceep-100f, 0x1.5cc176p-69f, 0.0f, 0x1.fcea6cp-11f, 0.0f, 0.0f, 0.0f,
     0x1.a3da8cp-58f, 0.0f, 0.0f, 0x1.0e72b6p-98f, 0x1.c24226p-87f, 0.0f, 0.0f, 0.0f,
     0x1.5aeb16p-91f, 0.0f, 0.0f, 0x1.a8219cp-11f, 0x1.16f048p-43f, 0.0f, 0.0f, 0.0f,
     0x1.28d792p-125f, 0.0f, 0x1.bd06fp-94f, 0.0f, 0x1.b36f14p-69f, 0x1.2ac082p-38f,
     0.0f, 0.0f, 0x1.1808d4p-61f, 0x1.18f278p-68f, 0x1.72742cp-95f, 0.0f,
     0x1.fef01p-17f, 0.0f, 0.0f, 0.0f, 0x1.db02bep-69f, 0.0f, 0.0f, 0x1.81b11ep-73f,
     0x1.d7d4c6p-96f, 0x1.b7d67ep-110f, 0.0f, 0.0f, 0x1.5b33eep-122f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.30ab7cp-48f, 0x1.06baaep-76f, 0.0f, 0x1.f41e7p-72f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.5e63eep-120f, 0x1.d97538p-27f, 0.0f, 0x1.9810e8p-24f,
     0x1.c44374p-86f, 0.0f, 0.0f, 0.0f, 0x1.7d2b0ap-121f, 0.0f, 0x1.37af1p-65f,
     0x1.48db0ep-3f, 0.0f, 0x1.53179ep-125f, 0x1.1863aap-17f, 0.0f, 0x1.fc8644p-49f,
     0x1.1808b4p-124f, 0x1.b011d4p-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.df32ep-99f,
     0.0f, 0.0f, 0x1.630b54p-44f, 0.0f, 0x1.aacf3p-41f, 0.0f, 0x1.1c36e2p-36f, 0.0f,
     0x1.533616p-44f, 0.0f, 0.0f, 0x1.ead236p-40f, 0x1.e20ecp-76f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a9e0fcp-97f, 0.0f, 0.0f, 0x1.cd7afp-99f, 0x1.3c54b6p-82f, 0.0f,
     0.0f, 0.0f, 0x1.9af946p-28f, 0.0f, 0x1.025beap-49f, 0x1.784948p-12f
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
            tmp1 = Sleef_acoshf8_u10kvx(tmp0);
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
    printf("Sleef_acoshf8_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_acoshf8_u10kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
