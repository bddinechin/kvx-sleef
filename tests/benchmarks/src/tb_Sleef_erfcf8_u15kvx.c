/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_erfcf8_u15kvx.c --function Sleef_erfcf8_u15kvx \
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
     0x1.b0a6bp-9f, 0x1.d96bcap-62f, 0x1.a17f96p-2f, 0x1.444d9cp-1f, 0.0f,
     0x1.281cc8p-82f, 0x1.0fe40cp-49f, 0.0f, 0.0f, 0x1.dc89c8p-101f, 0x1.992df4p-50f,
     0.0f, 0.0f, 0.0f, 0x1.d2cb6p-1f, 0.0f, 0x1.e624ep-36f, 0x1.20facap-42f, 0.0f,
     0x1.3083a6p-80f, 0.0f, 0x1.dbffbp-47f, 0.0f, 0x1.f7aaacp-30f, 0x1.4b6a96p-24f,
     0x1.872d8p-51f, 0x1.31b7c2p-76f, 0x1.920c36p-102f, 0x1.8b3b5ap-66f, 0.0f,
     0x1.498e82p-29f, 0.0f, 0x1.37ef0ep-57f, 0.0f, 0x1.58af4ep-6f, 0x1.057e08p-93f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a74d84p-56f, 0x1.0f7ceap-114f, 0.0f,
     0x1.95ea0ep-113f, 0.0f, 0.0f, 0.0f, 0x1.3ba9f6p-45f, 0x1.405d42p-68f,
     0x1.1f9b22p-22f, 0x1.bb6ad6p-21f, 0.0f, 0.0f, 0x1.49eed6p-124f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.2b090ep-57f, 0x1.731afep-103f, 0x1.d7d4a2p-91f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.88794ep-38f, 0x1.1b6b9cp-14f, 0x1.bb2df2p-24f, 0.0f,
     0x1.2a740ap-68f, 0.0f, 0.0f, 0x1.d4fbc2p-97f, 0x1.7f314cp-90f, 0x1.f9acep-54f,
     0.0f, 0.0f, 0.0f, 0x1.99ef04p-1f, 0.0f, 0x1.8e0556p-103f, 0.0f, 0x1.f2b0d6p-107f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b3c3d2p-106f,
     0.0f, 0x1.5bf6ep-94f, 0x1.dbfc5ep-29f, 0.0f, 0x1.3591e2p-65f, 0.0f, 0.0f,
     0x1.c3ba1cp-70f, 0x1.879856p-72f, 0.0f, 0.0f, 0x1.bce734p-25f, 0.0f,
     0x1.1d122p-84f, 0.0f, 0x1.4ac54p-124f, 0x1.2d61bp-116f, 0x1.a3fa32p-85f, 0.0f,
     0x1.c73cb2p-72f, 0x1.322ba4p-88f, 0x1.dd3e96p-12f, 0x1.00621ep-9f,
     0x1.623414p-63f, 0x1.89e87ap-85f, 0.0f, 0x1.de925cp-17f, 0x1.15b182p-37f, 0.0f,
     0x1.ff8a0ep-92f, 0x1.ec58ap-120f, 0x1.2e65p-82f, 0.0f, 0.0f, 0.0f,
     0x1.e35a6p-78f, 0x1.9b8b6cp-32f, 0.0f, 0x1.3e763cp-6f, 0.0f, 0x1.b9b6ccp-106f,
     0x1.ee9e84p-114f, 0.0f, 0x1.5a77p-26f, 0x1.b6fc2ep-98f, 0x1.93bf9ap-16f,
     0x1.8917d6p-126f, 0.0f, 0.0f, 0.0f, 0x1.ba85f4p-68f, 0.0f, 0.0f,
     0x1.ce6704p-116f, 0.0f, 0.0f, 0.0f, 0x1.59d79p-85f, 0.0f, 0.0f, 0x1.a3abb6p-48f,
     0x1.a2f93p-54f, 0.0f, 0x1.5cb5ap-94f, 0x1.70a446p-11f, 0.0f, 0.0f,
     0x1.c45b78p-86f, 0.0f, 0x1.b3fd6cp-101f, 0.0f, 0x1.e7730cp-27f, 0.0f, 0.0f,
     0x1.e02898p-4f, 0.0f, 0.0f, 0x1.eaff76p-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d47832p-16f, 0x1.e81f34p-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.590fbap-66f,
     0x1.0effa6p-84f, 0x1.c89e98p-15f, 0x1.b9cf88p-104f, 0x1.481f1ep-78f, 0.0f, 0.0f,
     0.0f, 0x1.476df6p-116f, 0x1.ea1974p-125f, 0x1.f68f2cp-60f, 0x1.e60116p-57f,
     0x1.1b58b2p-118f, 0x1.296186p-121f, 0.0f, 0.0f, 0.0f, 0x1.df241p-28f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.7fc78ap-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a6bd14p-74f,
     0x1.80aa6ep-14f, 0.0f, 0x1.3c5d38p-46f, 0x1.db0036p-100f, 0.0f, 0x1p0f,
     0x1.3cb1bcp-85f, 0.0f, 0x1.d39fdep-109f, 0x1.83f7bcp-73f, 0.0f, 0.0f, 0.0f,
     0x1.3d9a84p-9f, 0.0f, 0x1.b2453p-11f, 0.0f, 0.0f, 0x1.b53cd4p-62f,
     0x1.bbfd22p-61f, 0.0f, 0.0f, 0.0f, 0x1.32166cp-77f, 0x1.4a89f8p-69f,
     0x1.3cf0d2p-69f, 0x1.8819b8p-60f, 0x1.49624ap-9f, 0.0f, 0.0f, 0.0f,
     0x1.68177p-25f, 0x1.e74796p-106f, 0.0f, 0.0f, 0.0f, 0x1.a1d8d6p-54f, 0.0f,
     0x1.315532p-58f, 0.0f, 0x1.5e4534p-33f, 0x1.35986ep-122f, 0x1.250284p-60f,
     0x1.c50bf6p-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.39b13ep-102f, 0x1.5e0d8ep-99f,
     0.0f, 0x1.3ae67cp-122f, 0.0f, 0.0f, 0x1.36668p-59f, 0.0f, 0.0f, 0x1.ee13dap-68f,
     0x1.d52f44p-66f, 0x1.d2ff7p-48f, 0x1.d69aeap-54f, 0x1.38f3f2p-78f, 0.0f, 0.0f,
     0.0f, 0x1.a29268p-62f, 0x1.53345p-12f, 0.0f, 0x1.04bb28p-56f, 0x1.037bf4p-61f,
     0x1.a764ccp-44f, 0.0f, 0x1.b124fcp-67f, 0.0f, 0x1.582f7ep-16f, 0.0f, 0.0f,
     0x1.2469b6p-37f, 0.0f, 0x1.857f5p-69f, 0x1.dc2958p-54f, 0x1.b7847ep-67f, 0.0f,
     0x1.87c8cp-97f, 0x1.14b18cp-17f, 0x1.feecfap-37f, 0.0f, 0x1p0f, 0.0f, 0.0f,
     0x1.0c6dfep-40f, 0.0f, 0x1.bcff62p-73f, 0.0f, 0x1.70416p-17f, 0x1.6740f2p-44f,
     0x1.0b629ap-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3eacbep-28f, 0x1.61b824p-71f, 0.0f,
     0.0f, 0x1.c18aecp-66f, 0x1.4fd336p-116f, 0.0f, 0x1.971dap-108f, 0.0f,
     0x1.ec967ap-42f, 0x1.5a3476p-5f, 0x1.dc5dp-62f, 0.0f, 0x1.e7fd5ap-120f,
     0x1.7a39bcp-107f, 0x1.77677cp-30f, 0x1.ae11bcp-68f, 0x1.2e828ap-79f, 0.0f, 0.0f,
     0.0f, 0x1.1e8d5ap-7f, 0.0f, 0.0f, 0x1.49775cp-73f, 0.0f, 0x1.dcd028p-47f, 0.0f,
     0.0f, 0x1.ad2832p-67f, 0x1.3e884ep-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c8368p-44f,
     0.0f, 0.0f, 0x1.7d1c72p-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6de4p-19f, 0x1.223b56p-117f, 0.0f, 0x1.bf2b6cp-81f, 0x1.5be866p-104f, 0.0f,
     0.0f, 0x1.b7cf92p-95f, 0.0f, 0x1.bb644p-83f, 0x1.8df204p-126f, 0x1.60bcdap-86f,
     0.0f, 0.0f, 0x1.c23b2ep-123f, 0x1.1b67b8p-117f, 0.0f, 0x1.26ee18p-13f, 0.0f,
     0x1.e9454ep-64f, 0x1.6ce02ep-26f, 0x1.99362cp-114f, 0x1.96eed6p-67f, 0.0f, 0.0f,
     0x1.29e3eap-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.414bf8p-92f, 0.0f, 0.0f,
     0x1.f6e1a4p-11f, 0.0f, 0x1.7c4a0ep-96f, 0.0f, 0x1.01dcc6p-117f, 0x1.2b414ep-125f,
     0.0f, 0x1.fdb098p-115f, 0x1.2d0a8ep-36f, 0x1.98e1bap-30f, 0x1.7e008ep-84f,
     0x1p0f, 0x1.158d52p-66f, 0x1.1d58f4p-60f, 0x1.08131ap-74f, 0.0f, 0.0f,
     0x1.5cbe7ep-117f, 0.0f, 0x1.6ee6aap-79f, 0x1.4e99cap-80f, 0x1.563bbp-48f,
     0x1.8f6072p-45f, 0.0f, 0.0f, 0x1.e104aap-98f, 0x1.33469p-91f, 0.0f,
     0x1.491fc4p-36f, 0.0f, 0x1.dad90cp-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5bc96ep-122f,
     0x1.cc5988p-103f, 0x1.796756p-122f, 0.0f, 0x1.710346p-35f, 0x1.c84a6ap-77f,
     0x1.b70edcp-24f, 0x1.076b5ep-27f, 0.0f, 0x1.3b1c3ap-32f, 0x1.b6b516p-20f,
     0x1.36f3eep-84f, 0x1.bac07cp-36f, 0.0f, 0.0f, 0.0f, 0x1.2a1cfep-47f,
     0x1.c21f5cp-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.02e74p-74f, 0.0f, 0.0f,
     0x1.42646ep-111f, 0x1.9ca1cep-77f, 0.0f, 0.0f, 0x1.efa2bep-43f, 0.0f, 0.0f, 0.0f,
     0x1.24e6b4p-29f, 0x1.c3393ep-49f, 0x1p0f, 0.0f, 0.0f, 0x1.094fe2p-68f, 0.0f,
     0x1.96c962p-118f, 0x1.b201a8p-35f, 0x1.b64948p-25f, 0.0f, 0.0f, 0.0f,
     0x1.97969ap-126f, 0x1.66d63p-73f, 0x1.c7f6b6p-83f, 0x1.1df08p-4f, 0.0f,
     0x1.f7604cp-76f, 0.0f, 0x1.09577ap-70f, 0.0f, 0x1.71f482p-100f, 0.0f, 0.0f,
     0x1.7cca4ep-49f, 0x1.845da6p-71f, 0.0f, 0x1.01faaep-4f, 0.0f, 0x1.288ca4p-91f,
     0x1.d6d042p-48f, 0.0f, 0x1.3207b4p-49f, 0.0f, 0x1.4a2d96p-17f, 0x1.0ec3ap-116f,
     0.0f, 0x1.50a442p-9f, 0.0f, 0x1.237b5cp-103f, 0x1.3f0c42p-105f, 0.0f, 0.0f,
     0x1.5763c4p-14f, 0.0f, 0.0f, 0.0f, 0x1.cb9398p-118f, 0x1.743ec6p-12f, 0.0f,
     0x1.87cc0ep-5f, 0x1.e114c4p-18f, 0x1.8935acp-82f, 0.0f, 0x1.1b8444p-24f, 0.0f,
     0x1.f21788p-122f, 0.0f, 0.0f, 0x1.59abcap-54f, 0.0f, 0x1.148fdep-109f, 0.0f,
     0x1.5dc6cep-62f, 0.0f, 0.0f, 0.0f, 0x1.cc88cep-87f, 0x1.be6ebp-16f,
     0x1.bb8842p-53f, 0x1.56f3bcp-51f, 0x1.8333c4p-28f, 0.0f, 0.0f, 0.0f,
     0x1.4e265p-99f, 0x1.625af2p-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a47b78p-107f, 0x1.0125fep-61f, 0x1.29e0bap-6f, 0.0f, 0.0f, 0x1.5606d2p-64f,
     0x1.01d72ap-58f, 0.0f, 0.0f, 0.0f, 0x1.5f8ceep-104f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0f1f34p-81f, 0x1.09ed22p-109f, 0.0f, 0.0f, 0x1.3e1accp-109f, 0x1.c71dccp-14f,
     0x1.4a128cp-6f, 0.0f, 0.0f, 0x1.ac4df6p-122f, 0x1.49754cp-44f, 0.0f,
     0x1.4211dp-6f, 0x1.a1e488p-65f, 0x1.aae43cp-45f, 0.0f, 0x1.92007ap-53f,
     0x1.b93026p-89f, 0x1.d51974p-94f, 0x1.e4e8dcp-80f, 0x1.d5f25cp-116f, 0.0f, 0.0f,
     0x1.9f31fcp-20f, 0x1.0e82c4p-76f, 0x1.8f4878p-94f, 0.0f, 0.0f, 0.0f,
     0x1.4dd5a4p-19f, 0.0f, 0.0f, 0.0f, 0x1.210474p-22f, 0.0f, 0x1.adab32p-13f, 0.0f,
     0.0f, 0.0f, 0x1.42b13ep-96f, 0x1.8451a2p-94f, 0x1.645e86p-87f, 0x1.eda178p-35f,
     0x1.185938p-78f, 0.0f, 0x1.4421aep-119f, 0.0f, 0x1.1679c4p-56f, 0x1.35aceep-14f,
     0x1.5eee64p-89f, 0.0f, 0x1.3a088p-106f, 0x1.1d0882p-70f, 0x1.c4d68ep-109f, 0.0f,
     0x1.0d59bep-101f, 0x1.5aea3ap-46f, 0x1.d67246p-87f, 0x1.f3c702p-55f,
     0x1.4f11dap-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f9c676p-108f, 0x1.5baf9cp-66f, 0x1.8cacf8p-33f, 0.0f, 0.0f, 0x1.a0998ap-98f,
     0.0f, 0.0f, 0x1.02759ap-97f, 0x1.d8a19p-26f, 0x1.339606p-119f, 0x1.ad7f86p-43f,
     0x1.d0b8a6p-61f, 0.0f, 0x1.a764cap-97f, 0.0f, 0.0f, 0x1.d44ecep-126f,
     0x1.46aa02p-90f, 0x1.3b527cp-95f, 0.0f, 0.0f, 0x1.6e061ap-79f, 0x1.e65818p-100f,
     0.0f, 0.0f, 0.0f, 0x1.a5c99cp-103f, 0x1.cfe444p-113f, 0.0f, 0x1.cfab16p-118f,
     0x1.1c5feep-31f, 0x1.feff7cp-111f, 0x1.8cc8aap-72f, 0.0f, 0x1.2b6bf4p-78f,
     0x1.32c64p-41f, 0x1.53a3f2p-119f, 0x1.395588p-73f, 0x1.e0eb64p-51f, 0.0f,
     0x1.935972p-112f, 0.0f, 0.0f, 0.0f, 0x1.a3af44p-67f, 0x1.68633ap-83f, 0.0f, 0.0f,
     0.0f, 0x1.b17ac2p-83f, 0x1.7cf7d6p-44f, 0x1.8d1f14p-77f, 0x1.5fc362p-110f, 0.0f,
     0.0f, 0.0f, 0x1.a7c4ecp-113f, 0x1.8373f6p-37f, 0x1.4bdb8ep-68f, 0x1.faaae6p-46f,
     0.0f, 0x1.6a53d4p-32f, 0x1.34101cp-109f, 0.0f, 0.0f, 0x1.41660cp-103f,
     0x1.cf18d2p-61f, 0x1.7116dcp-5f, 0.0f, 0.0f, 0x1.b942e4p-73f, 0.0f,
     0x1.2a421cp-5f, 0x1.7cbb1ep-10f, 0.0f, 0x1.fe71bep-96f, 0.0f, 0x1.72d912p-19f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ec9072p-126f, 0.0f, 0.0f, 0x1.ce1d46p-6f,
     0x1.b064f2p-49f, 0x1.f6bd1ap-101f, 0.0f, 0x1.d4a8cap-15f, 0.0f, 0x1.676f02p-103f,
     0x1.790bbep-59f, 0.0f, 0x1.d1f27cp-64f, 0x1.c09a8ap-69f, 0x1p0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e98d4ep-29f, 0x1.71d7e8p-30f, 0.0f, 0x1.751624p-88f, 0.0f,
     0x1.6f2734p-61f, 0.0f, 0.0f, 0x1.64e4fep-49f, 0x1.1e6ebcp-75f, 0.0f, 0.0f,
     0x1.d8e4cep-40f, 0.0f, 0x1.64964p-83f, 0.0f, 0.0f, 0x1.ad8b3ep-81f, 0.0f, 0.0f,
     0x1.29ee88p-17f, 0x1.a70368p-49f, 0x1.5b407p-42f, 0x1.7ea7a8p-101f,
     0x1.94cac4p-86f, 0.0f, 0.0f, 0x1.f391c8p-118f, 0x1.78a978p-108f,
     0x1.42cf28p-108f, 0x1.491274p-71f, 0x1.6a3932p-118f, 0.0f, 0.0f, 0.0f,
     0x1.09b47ep-70f, 0.0f, 0.0f, 0.0f, 0x1.b7439ap-75f, 0x1.bf09dp-35f,
     0x1.bf6b1cp-101f, 0.0f, 0x1.96d4ap-63f, 0.0f, 0.0f, 0.0f, 0x1.b17e74p-23f,
     0x1.a647c6p-76f, 0.0f, 0x1.89a41ep-93f, 0.0f, 0.0f, 0.0f, 0x1.7845cp-69f,
     0x1.493b44p-9f, 0.0f, 0.0f, 0.0f, 0x1.7332d2p-83f, 0.0f, 0.0f, 0x1.92fc52p-17f,
     0.0f, 0x1.88c574p-67f, 0x1.270dc8p-20f, 0.0f, 0.0f, 0x1.b57378p-3f, 0.0f,
     0x1.28872ep-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f95a6ap-66f, 0.0f, 0x1.bc81ccp-22f,
     0.0f, 0.0f, 0x1.2bb664p-85f, 0.0f, 0.0f, 0x1.5f5f2p-45f, 0.0f, 0.0f, 0.0f,
     0x1.389f1ep-66f, 0x1.9a144p-104f, 0x1.004114p-30f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d6f4a6p-52f, 0.0f, 0x1.0f4e8ep-93f, 0x1.2a13b8p-94f, 0.0f, 0x1.0bd01ep-103f,
     0.0f, 0.0f, 0x1.87156cp-97f, 0x1.71b7e8p-78f, 0.0f, 0x1.bc2134p-49f,
     0x1.53b532p-100f, 0x1.e189f4p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d169dp-115f, 0x1.0b5488p-98f, 0.0f, 0.0f, 0x1.d0fceap-117f, 0.0f, 0.0f,
     0x1.9bf618p-93f, 0.0f, 0x1.08103ep-85f, 0x1.4d531p-118f, 0x1.1d10cp-122f,
     0x1.3f72c8p-56f, 0x1.7169e2p-21f, 0.0f, 0x1.0b6a4ap-27f, 0.0f, 0x1.50c432p-98f,
     0.0f, 0x1.5d7d1ap-37f, 0.0f, 0.0f, 0.0f, 0x1.8fdb6p-121f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bef4aap-23f, 0.0f, 0x1.d595a6p-94f, 0x1.2ef55ep-57f, 0.0f, 0.0f, 0.0f,
     0x1.3dbd9cp-99f, 0x1.a17d3ap-70f, 0.0f, 0.0f, 0x1.5dc89cp-22f, 0.0f,
     0x1.25b31ep-75f, 0x1.5edda4p-49f, 0x1.c93354p-117f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4c4a86p-71f, 0.0f, 0x1.c0089p-28f, 0x1.964eb2p-81f, 0x1.65c5ap-122f,
     0x1.027c36p-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5738acp-111f,
     0x1.e6ff32p-113f, 0x1.bae6cep-6f, 0x1.de571ap-104f, 0x1.1b7c8ep-59f,
     0x1.aea47cp-1f, 0x1.14a0acp-73f, 0x1.d61f1cp-53f, 0.0f, 0x1.72b6e6p-45f, 0.0f,
     0.0f, 0x1.ce79f8p-43f, 0x1.a27b1ap-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.33d918p-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.aa0afcp-2f,
     0x1.bd22a6p-17f, 0.0f, 0x1.bc44bcp-71f, 0x1.9d22c4p-89f, 0x1.392216p-84f, 0.0f,
     0.0f, 0x1.07ec9ap-72f, 0x1.f1234ap-63f, 0x1.06abf2p-12f, 0.0f, 0.0f, 0.0f,
     0x1.266e7p-118f, 0x1.6a4d62p-49f, 0x1.4e95ecp-35f, 0x1.9fee0ep-74f, 0.0f, 0.0f,
     0x1.fe6decp-25f, 0.0f, 0x1.7ed1f4p-112f, 0.0f, 0x1.e2dc68p-4f, 0x1.ef8a18p-7f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ee83dp-18f, 0x1.4811f8p-25f, 0.0f, 0.0f, 0.0f,
     0x1.52dc22p-99f, 0x1.25ee5ap-4f, 0x1.e7bcd6p-67f, 0x1.44b50cp-78f,
     0x1.fa421cp-11f, 0x1.6d6f4cp-92f, 0.0f, 0x1.1bb85ap-85f, 0x1.906634p-55f,
     0x1.aa3d8ep-1f, 0.0f, 0x1.b4e57ep-28f, 0x1.cc90c8p-58f, 0x1.ca1716p-14f,
     0x1.4a614ap-48f, 0.0f, 0.0f, 0x1.113542p-124f, 0.0f, 0x1.c074c8p-30f,
     0x1.f7603ap-30f, 0x1.95992ap-115f, 0.0f, 0x1.1e4d6ep-2f, 0.0f, 0x1.9ce844p-25f,
     0.0f, 0.0f, 0x1.636f88p-49f, 0.0f, 0x1.70e196p-116f, 0.0f, 0x1.cbe16p-78f, 0.0f,
     0x1.c54d06p-89f, 0.0f
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
            tmp1 = Sleef_erfcf8_u15kvx(tmp0);
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
    printf("Sleef_erfcf8_u15kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_erfcf8_u15kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
