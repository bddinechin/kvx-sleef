/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_cbrtf8_u10kvx.c --function \
 *     Sleef_finz_cbrtf8_u10kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 8 --function-input-vector-size \
 *     8 --bench --no-embedded-bin --target kv3
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
     0x1.5b4e4ep-62f, 0.0f, 0x1.06b4fap-112f, 0.0f, 0x1p0f, 0x1.459a86p-30f,
     0x1.3932f4p-98f, 0x1.4b78b2p-30f, 0.0f, 0.0f, 0x1.ec61dep-19f, 0.0f,
     0x1.2e8efp-86f, 0.0f, 0x1.48a74p-88f, 0x1.f5b19cp-111f, 0x1p0f, 0x1.649846p-126f,
     0x1.b43c4ep-78f, 0.0f, 0x1p0f, 0.0f, 0x1.5f8592p-2f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.9653c2p-3f, 0.0f, 0x1.b5842ap-117f, 0.0f, 0x1.47832ap-119f, 0.0f, 0.0f,
     0.0f, 0x1.b2496ep-126f, 0x1.e108dap-35f, 0x1.6aef78p-47f, 0.0f, 0x1.6ba8aap-120f,
     0.0f, 0x1.5ec276p-123f, 0x1.0879bp-31f, 0.0f, 0x1.86636ep-47f, 0.0f,
     0x1.94bb2ep-10f, 0x1.3247b6p-113f, 0x1.277bep-120f, 0x1.e4aa5ap-24f,
     0x1.bb19e6p-62f, 0x1.74a456p-99f, 0x1.618d7cp-44f, 0x1.cd00a6p-48f,
     0x1.99056ap-118f, 0x1.fcc90cp-30f, 0x1.197f18p-37f, 0.0f, 0.0f, 0x1.024f66p-26f,
     0.0f, 0x1.81c942p-51f, 0x1.87398ep-93f, 0x1.dae5e8p-81f, 0x1.0bbccep-18f,
     0x1.5e0cf4p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bfa284p-79f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.bd0036p-36f, 0x1.e9d274p-113f, 0x1.46eefcp-21f, 0.0f, 0.0f,
     0x1.a4659p-111f, 0x1.c33b0cp-4f, 0x1.397b7p-27f, 0x1.6576cep-3f, 0.0f,
     0x1.370dd6p-117f, 0x1.ae1172p-16f, 0x1.5d9292p-95f, 0.0f, 0x1.b13c82p-68f,
     0x1.c32c04p-37f, 0.0f, 0.0f, 0x1.de70bep-30f, 0x1.b51e62p-20f, 0.0f,
     0x1.be043p-53f, 0.0f, 0x1.cebb5ap-102f, 0.0f, 0x1.61ab28p-17f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f20ba2p-4f, 0x1.dd0ff4p-74f, 0x1.cfa962p-79f, 0x1.6b8f9cp-70f,
     0x1.77c7fp-20f, 0.0f, 0x1.9326e4p-24f, 0.0f, 0x1.2d0bbep-70f, 0.0f,
     0x1.0f1bc8p-100f, 0x1.9026f2p-22f, 0x1.83b60ap-110f, 0x1.19fe98p-55f, 0.0f,
     0x1.2ea60cp-46f, 0x1.ce37fcp-97f, 0.0f, 0.0f, 0x1.082daap-54f, 0x1.701904p-53f,
     0.0f, 0.0f, 0x1.fb3feap-102f, 0x1.78b754p-55f, 0.0f, 0x1.ece3d4p-98f,
     0x1.781cc2p-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a6e72ap-57f, 0x1.2a24fap-19f,
     0.0f, 0.0f, 0.0f, 0x1.f18354p-94f, 0.0f, 0.0f, 0x1.6dec84p-18f, 0.0f, 0.0f,
     0x1.52b4a8p-106f, 0x1.7f0ff4p-33f, 0.0f, 0x1.899032p-65f, 0.0f, 0.0f,
     0x1.13cd86p-78f, 0x1.9e8192p-119f, 0.0f, 0x1.d97d1ep-11f, 0x1.bce8a6p-110f,
     0x1.88da76p-124f, 0x1.79bb4ep-14f, 0.0f, 0.0f, 0x1.c5520cp-102f, 0.0f,
     0x1.d35578p-115f, 0x1.04498ep-91f, 0x1.70f156p-89f, 0.0f, 0.0f, 0.0f,
     0x1.dff8f2p-68f, 0x1.cdf70cp-74f, 0.0f, 0x1.91cdbcp-113f, 0x1.5df9bcp-90f,
     0x1.cda2bp-46f, 0x1.d0139ep-49f, 0x1.39490cp-105f, 0.0f, 0.0f, 0x1.78f49cp-37f,
     0x1.2897ccp-87f, 0x1.f5b458p-113f, 0.0f, 0x1.4b8d38p-88f, 0.0f, 0.0f,
     0x1.40ae96p-106f, 0x1.6d428cp-101f, 0.0f, 0x1.f18546p-11f, 0x1.8a3f12p-116f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5978fep-44f, 0.0f, 0.0f, 0.0f, 0x1.89749ap-79f,
     0.0f, 0.0f, 0.0f, 0x1.3aa96ap-107f, 0x1.c4fc9ep-41f, 0.0f, 0.0f, 0x1.0e7616p-88f,
     0.0f, 0x1.fd1242p-65f, 0x1.537e82p-111f, 0x1.26995p-53f, 0.0f, 0.0f,
     0x1.68df96p-110f, 0x1.5c2d4ep-114f, 0x1.61f69ep-70f, 0.0f, 0x1.2bc236p-42f, 0.0f,
     0x1.6818fp-19f, 0.0f, 0.0f, 0.0f, 0x1.084cbcp-40f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.05a86ep-107f, 0x1.65c8a6p-39f, 0.0f, 0.0f, 0.0f, 0x1.5d2ca6p-119f,
     0x1.758a5ep-113f, 0x1.fd7e1ep-30f, 0.0f, 0x1.7d5624p-124f, 0.0f, 0.0f,
     0x1.7c976cp-84f, 0x1.4f97b4p-95f, 0x1.a93896p-116f, 0.0f, 0.0f, 0.0f,
     0x1.ea5ed4p-22f, 0x1.2a015cp-75f, 0x1.f8f36p-50f, 0x1.333b6p-46f, 0.0f,
     0x1.5bb6d4p-121f, 0.0f, 0x1.7b428p-26f, 0x1.2505a6p-24f, 0x1.1ce80ap-17f,
     0x1.c234fp-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.67dccep-28f,
     0x1.8b4a66p-23f, 0x1.f7b4b6p-39f, 0x1.dfd874p-117f, 0x1.985ec2p-123f,
     0x1.8a3f94p-55f, 0.0f, 0x1.e66e32p-123f, 0x1.3fe8c8p-83f, 0x1.188f1ap-40f,
     0x1.819a06p-102f, 0x1.b00598p-100f, 0.0f, 0.0f, 0x1.fd3f56p-120f,
     0x1.f4ca82p-114f, 0x1.aae14p-3f, 0.0f, 0x1.fcb8bep-58f, 0.0f, 0x1.3eab2ap-121f,
     0x1.2da97p-66f, 0.0f, 0x1.87be78p-87f, 0x1.b3d216p-19f, 0.0f, 0x1.f82cb8p-98f,
     0.0f, 0.0f, 0x1.9a6b9cp-50f, 0x1.d93934p-55f, 0x1.f0052ap-107f, 0x1.77d704p-116f,
     0x1.c7f7c8p-44f, 0.0f, 0x1.ae4cd4p-46f, 0.0f, 0x1.d9035p-48f, 0x1.e1a202p-87f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a2948cp-46f, 0x1.e80a88p-9f, 0.0f, 0x1.ee30b6p-76f,
     0.0f, 0x1.364858p-9f, 0.0f, 0.0f, 0.0f, 0x1.04a8bap-40f, 0.0f, 0.0f,
     0x1.8e3ae6p-14f, 0.0f, 0.0f, 0x1.88ff9ep-10f, 0x1.343954p-15f, 0x1.a1d558p-43f,
     0.0f, 0x1.4d4c7cp-112f, 0.0f, 0.0f, 0.0f, 0x1.0b0d28p-79f, 0.0f, 0.0f,
     0x1.159ee4p-102f, 0.0f, 0x1.daf0d4p-40f, 0x1.a3d7bap-23f, 0x1.219cc6p-90f, 0.0f,
     0x1.f08d34p-121f, 0.0f, 0x1.6461aap-45f, 0.0f, 0.0f, 0x1.a8e33ap-51f, 0.0f,
     0x1.c13602p-97f, 0.0f, 0.0f, 0.0f, 0x1.991d98p-90f, 0.0f, 0x1.ab4494p-7f, 0.0f,
     0x1.45d6e4p-49f, 0x1.f18dfcp-49f, 0x1.1f837ap-69f, 0x1.effe36p-83f, 0.0f,
     0x1.8b86d6p-60f, 0.0f, 0.0f, 0x1.f3a32ap-74f, 0.0f, 0x1.546dbep-66f, 0.0f,
     0x1.907fcp-11f, 0x1.ea886cp-112f, 0x1.ea4e38p-121f, 0.0f, 0x1.b3893p-17f,
     0x1.6eb13cp-83f, 0.0f, 0.0f, 0.0f, 0x1.6e24e4p-12f, 0x1.d0adfcp-15f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.70a8fap-21f, 0.0f, 0.0f, 0.0f, 0x1.70de6cp-120f, 0.0f,
     0x1.fb1a1ap-6f, 0x1.5ce63p-73f, 0.0f, 0x1.5a4c18p-100f, 0.0f, 0.0f,
     0x1.bc3588p-86f, 0x1.5b4232p-26f, 0.0f, 0.0f, 0x1.be0de8p-14f, 0x1.7358cep-35f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.52b058p-78f, 0x1.7b5ec6p-100f, 0.0f, 0.0f,
     0x1.7d2a42p-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.57df56p-22f, 0.0f,
     0x1.3fbda2p-119f, 0.0f, 0x1.0b38bcp-50f, 0x1.3a93bcp-75f, 0x1.13efep-58f,
     0x1.6de98p-2f, 0x1.1b596ep-77f, 0.0f, 0.0f, 0x1.ec6954p-44f, 0.0f, 0.0f,
     0x1.c94c38p-103f, 0.0f, 0.0f, 0.0f, 0x1.0741c4p-84f, 0.0f, 0.0f, 0x1.58ae28p-71f,
     0.0f, 0.0f, 0x1.fdd33ap-26f, 0x1.5113dp-23f, 0x1.91aaecp-56f, 0x1.c4c786p-56f,
     0x1.d810b2p-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6c8daap-81f, 0x1.b722cep-43f,
     0.0f, 0x1.11248p-16f, 0.0f, 0x1.1078b8p-41f, 0x1.f0fffap-10f, 0.0f,
     0x1.9ab562p-81f, 0x1.0f6c1p-126f, 0.0f, 0.0f, 0x1.b2a13cp-81f, 0x1.2622b2p-45f,
     0.0f, 0.0f, 0.0f, 0x1.83e1c2p-81f, 0x1.67e5cp-67f, 0x1.af0d84p-56f, 0.0f,
     0x1.b4f24ep-40f, 0x1.fb4842p-110f, 0.0f, 0.0f, 0x1.20e604p-45f, 0x1.9991b6p-124f,
     0.0f, 0.0f, 0x1.c0cfc2p-99f, 0x1.f6378p-53f, 0.0f, 0.0f, 0x1.a0bef4p-125f,
     0x1.098aecp-19f, 0x1.04452cp-45f, 0x1.610468p-78f, 0x1.b5a572p-84f, 0.0f,
     0x1.afbcdp-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.aea412p-6f, 0.0f, 0x1.fd4db4p-39f,
     0.0f, 0.0f, 0x1.31a9fep-97f, 0.0f, 0.0f, 0x1.0fc37ep-58f, 0.0f, 0.0f,
     0x1.d92178p-117f, 0.0f, 0.0f, 0x1.a5a1ap-95f, 0.0f, 0.0f, 0x1.22e3e2p-81f,
     0x1.d3dab4p-30f, 0x1.3f9982p-49f, 0x1.694faap-13f, 0x1.946c02p-6f, 0.0f, 0.0f,
     0x1.9ebcp-33f, 0x1.866f58p-83f, 0x1.72ba88p-15f, 0.0f, 0.0f, 0x1.e6241ep-86f,
     0x1.b60472p-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ef9a8p-48f, 0.0f, 0x1.7ced8cp-105f,
     0x1.599a4ap-34f, 0.0f, 0.0f, 0x1.67ccc8p-67f, 0.0f, 0x1.291106p-126f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.8fdb2p-92f, 0x1.1f43bp-73f, 0x1.33d4f6p-43f, 0.0f,
     0x1.2b2216p-103f, 0x1.2516bep-111f, 0.0f, 0.0f, 0x1.78b4d2p-20f, 0x1p0f, 0.0f,
     0x1.d16096p-110f, 0x1.ff1aeep-58f, 0.0f, 0.0f, 0x1.8c026cp-61f, 0.0f, 0.0f,
     0x1.ae1b9ap-75f, 0.0f, 0.0f, 0x1.fc19f2p-123f, 0.0f, 0x1.e2f4p-37f, 0.0f,
     0x1.5b59dap-81f, 0.0f, 0x1.697aap-83f, 0.0f, 0.0f, 0x1.3e7cdp-101f,
     0x1.86f034p-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ec3c52p-27f, 0.0f, 0.0f,
     0x1.c55f4p-122f, 0.0f, 0x1.e8488p-111f, 0x1.269412p-104f, 0x1.ce01b2p-121f,
     0x1.be312p-12f, 0x1.2c7dbap-44f, 0x1.beb284p-78f, 0x1.1cfef8p-126f, 0.0f,
     0x1.a3c1fep-115f, 0.0f, 0.0f, 0x1p0f, 0x1.09ec8ap-108f, 0x1.6a85ecp-110f, 0.0f,
     0x1.0bf698p-71f, 0x1.7f8c68p-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c64c9p-15f, 0.0f,
     0x1.8b8b0ep-42f, 0x1.b2890cp-55f, 0x1.2bc59ap-92f, 0x1.0ae9eep-79f, 0.0f, 0.0f,
     0.0f, 0x1.34541ep-101f, 0.0f, 0.0f, 0x1.5fa552p-125f, 0x1.c9deb2p-107f, 0.0f,
     0.0f, 0x1.04f5ccp-80f, 0x1.548c34p-66f, 0.0f, 0.0f, 0.0f, 0x1.834c96p-91f, 0.0f,
     0x1.195278p-49f, 0x1.75434ep-63f, 0x1.79905ap-81f, 0x1.4e93a8p-111f,
     0x1.916032p-21f, 0x1.7bbffap-102f, 0x1.e117dp-112f, 0x1.444bc2p-81f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c49c1ep-52f, 0x1.9e0e2ap-42f, 0x1.2b1f88p-27f, 0.0f,
     0.0f, 0x1.c4aacep-35f, 0x1.6614e4p-37f, 0.0f, 0.0f, 0x1.61d04cp-45f,
     0x1.1ff608p-99f, 0x1.d03b5ep-73f, 0x1.a5066ap-44f, 0x1.5e88c6p-59f,
     0x1.381a08p-38f, 0x1.ba78cp-50f, 0.0f, 0x1.c5ce3cp-8f, 0.0f, 0x1.838bb4p-20f,
     0.0f, 0x1.2913bep-19f, 0x1.071b2ap-72f, 0x1.28b1f6p-35f, 0x1.efb81p-121f,
     0x1.75b494p-57f, 0x1.918b3p-125f, 0.0f, 0x1.78ed4ap-13f, 0.0f, 0x1.303a2ap-8f,
     0x1.d46e4cp-66f, 0x1.62ffbap-23f, 0.0f, 0x1.59dcbep-15f, 0x1.419b4p-50f,
     0x1.0708ccp-57f, 0x1.2ac8bap-54f, 0.0f, 0x1.2e8b06p-126f, 0.0f, 0x1.ffe0f6p-94f,
     0.0f, 0.0f, 0x1.9d2842p-71f, 0.0f, 0.0f, 0x1.b56268p-78f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.29c97ap-97f, 0.0f, 0.0f, 0x1.ce3e1p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c3e57ep-96f, 0x1.07be94p-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3d7fb6p-56f, 0x1.ce7142p-62f, 0.0f, 0x1.b7146p-90f, 0x1.31a47p-74f,
     0x1.c9635p-95f, 0.0f, 0.0f, 0x1.72a944p-111f, 0x1.1a0ad8p-68f, 0x1.d0be32p-108f,
     0x1.4179ecp-3f, 0.0f, 0x1.6b94dap-101f, 0x1.07224ap-47f, 0.0f, 0.0f,
     0x1.cac3fep-66f, 0x1.27641p-63f, 0x1.7f0208p-72f, 0x1.3b26ap-32f, 0.0f, 0.0f,
     0.0f, 0x1.245f42p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4aad0ap-40f, 0.0f,
     0x1.cfc274p-122f, 0.0f, 0x1.5b1e82p-90f, 0.0f, 0.0f, 0.0f, 0x1.6a3dfcp-86f,
     0x1.398e9cp-75f, 0x1.08b30ep-1f, 0.0f, 0x1.7c394cp-60f, 0x1.c9f32ep-41f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.af673cp-93f, 0x1.a08bdap-96f, 0.0f, 0x1.3948d6p-34f,
     0x1.8177acp-103f, 0x1.ed25dap-15f, 0x1.896384p-78f, 0.0f, 0x1.4c792ap-102f,
     0x1.87f986p-47f, 0.0f, 0x1.2b3678p-109f, 0.0f, 0x1.f4c4fp-73f, 0x1.c6d82p-109f,
     0.0f, 0.0f, 0.0f, 0x1.316318p-14f, 0.0f, 0x1.e0d01ep-48f, 0x1.c18028p-77f,
     0x1.441d2p-100f, 0.0f, 0x1.01c356p-4f, 0x1.bbfa36p-69f, 0.0f, 0.0f, 0.0f,
     0x1.67e65p-81f, 0.0f, 0x1.4ba27p-33f, 0.0f, 0x1.efc86ap-22f, 0x1.a2c152p-80f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.872e78p-76f, 0.0f, 0x1.0ac23ep-58f,
     0x1.3560acp-63f, 0.0f, 0x1.b6863cp-56f, 0x1.76496p-24f, 0x1.4b4652p-50f,
     0x1.4f2e68p-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.178c84p-73f, 0x1.f9cd52p-83f,
     0x1.ec068p-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.24afc8p-38f, 0.0f,
     0x1.c6e65ap-13f, 0x1.98ede2p-61f, 0.0f, 0x1.3aa90ep-40f, 0.0f, 0.0f, 0.0f,
     0x1.a75c2p-126f, 0.0f, 0x1.2fec44p-65f, 0x1.12024ep-31f, 0.0f, 0x1.473d84p-6f,
     0.0f, 0.0f, 0x1.14c85cp-68f, 0.0f, 0.0f, 0x1.8bb29cp-85f, 0.0f, 0.0f,
     0x1.81303p-25f, 0.0f, 0.0f, 0.0f, 0x1.1b515ep-6f, 0x1.fdad9ep-54f, 0.0f, 0.0f,
     0x1.d40d6ap-92f, 0x1.baa26p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3ae17ap-46f,
     0.0f, 0.0f, 0.0f, 0x1.d6d908p-26f, 0.0f, 0x1.f669f6p-39f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.d8e45ap-58f, 0x1.6a472ep-11f, 0.0f, 0x1.b28f64p-58f, 0x1.26e924p-62f,
     0.0f, 0x1.95fb9cp-15f, 0.0f, 0x1.03d9aep-2f, 0x1.e9b368p-60f, 0x1.ce1b74p-3f,
     0x1.959fa6p-46f, 0.0f, 0x1.d51614p-113f, 0.0f, 0.0f, 0x1.d4b628p-30f, 0.0f, 0.0f,
     0x1.ececcep-8f, 0x1.74c94p-115f, 0.0f, 0x1.643136p-68f, 0.0f, 0x1.7ec70cp-30f,
     0.0f, 0.0f, 0x1.e8a01ap-5f, 0x1.6551eep-12f, 0x1.285d68p-65f, 0.0f, 0.0f,
     0x1.75bb18p-80f, 0x1.1e2c36p-85f, 0.0f, 0x1.0beb3cp-64f, 0.0f, 0x1.77188ap-120f,
     0.0f, 0x1.05df06p-42f, 0.0f, 0x1.06771ap-96f, 0x1.07f05ep-6f, 0x1.8ad88p-63f,
     0.0f, 0.0f, 0.0f, 0x1.6839bep-83f, 0x1.04fc4ap-120f, 0.0f, 0x1.876f3ap-19f, 0.0f,
     0.0f, 0x1.5858c4p-14f, 0x1.c1b246p-72f, 0.0f, 0.0f, 0x1.6ab454p-44f,
     0x1.b266a2p-120f, 0x1.4278acp-81f, 0x1.692a96p-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6a48dp-25f, 0x1.e6ebecp-8f, 0.0f, 0.0f, 0x1.223ed8p-51f, 0.0f, 0.0f,
     0x1.9f9d16p-118f, 0.0f, 0.0f, 0.0f, 0x1.d8f172p-22f, 0x1.dde9fp-58f, 0.0f, 0.0f,
     0x1.137d04p-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.822ddep-68f, 0.0f, 0.0f,
     0x1.3707f6p-7f, 0.0f, 0x1.f0bf4ep-36f, 0x1.a81fe2p-3f, 0.0f, 0.0f, 0.0f,
     0x1.f90daep-39f, 0.0f, 0x1.90c71cp-20f, 0.0f, 0x1.e6187ap-14f, 0x1.ae1ddap-77f,
     0.0f, 0.0f, 0.0f, 0x1.4bd32cp-73f, 0.0f, 0.0f, 0x1.2e6bfp-60f, 0x1.503c28p-1f,
     0x1.6f16c4p-31f, 0x1.333e64p-40f, 0.0f, 0x1.cf8fdp-48f, 0.0f, 0.0f,
     0x1.34592ep-2f, 0x1.23cb46p-5f, 0x1.67a402p-18f, 0.0f, 0.0f, 0.0f,
     0x1.41458cp-32f, 0.0f, 0x1.091e2ap-24f, 0.0f, 0.0f, 0.0f
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
            tmp1 = Sleef_finz_cbrtf8_u10kvx(tmp0);
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
    printf("Sleef_finz_cbrtf8_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_finz_cbrtf8_u10kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
