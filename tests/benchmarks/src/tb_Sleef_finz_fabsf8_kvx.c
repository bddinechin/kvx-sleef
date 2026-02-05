/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_fabsf8_kvx.c --function Sleef_finz_fabsf8_kvx \
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
     0x1.b58e16p-63f, 0x1.b5e254p-12f, 0.0f, 0.0f, 0x1.295326p-88f, 0x1.457526p-125f,
     0.0f, 0x1.9648a8p-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cd4ccap-29f, 0.0f,
     0x1.356ff2p-43f, 0.0f, 0x1.08d398p-93f, 0x1.8e47c6p-54f, 0x1.d49abap-78f, 0.0f,
     0x1.bec3d2p-52f, 0x1.d305f6p-36f, 0x1.e469ccp-63f, 0.0f, 0.0f, 0.0f,
     0x1.2633f2p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0e6922p-90f,
     0x1.032856p-48f, 0x1.8b9804p-116f, 0.0f, 0.0f, 0.0f, 0x1.a9f80ap-39f,
     0x1.9cd454p-117f, 0x1.b0fe68p-60f, 0x1.e6f94cp-16f, 0x1.183c1cp-45f,
     0x1.6f9d06p-71f, 0.0f, 0.0f, 0x1.6d48f6p-104f, 0x1.22dfbcp-30f, 0.0f, 0.0f,
     0x1.f2bd04p-68f, 0.0f, 0x1p0f, 0.0f, 0x1.6c5d1cp-92f, 0x1.1e5946p-74f,
     0x1.8acff8p-115f, 0.0f, 0.0f, 0x1.55f96ap-91f, 0x1.d4283ap-3f, 0.0f,
     0x1.650a0ep-40f, 0.0f, 0.0f, 0.0f, 0x1.063134p-52f, 0x1.1eb5dep-66f, 0.0f, 0.0f,
     0.0f, 0x1.0ca1a8p-123f, 0x1.607e52p-87f, 0x1.dd4bd4p-19f, 0.0f, 0x1.110316p-3f,
     0x1.09879p-103f, 0.0f, 0x1.f28bd2p-116f, 0x1.766136p-90f, 0x1.967b78p-117f, 0.0f,
     0.0f, 0.0f, 0x1.feaf52p-64f, 0x1.695ec6p-47f, 0x1.c521dp-54f, 0.0f,
     0x1.9a5e9ap-73f, 0x1.68cbb4p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f24714p-22f,
     0x1.7e49bp-66f, 0.0f, 0x1.ab6c78p-14f, 0x1.b15fb8p-65f, 0.0f, 0x1.f6ec84p-13f,
     0.0f, 0x1.fab6bep-118f, 0.0f, 0.0f, 0x1.ead788p-4f, 0.0f, 0.0f, 0x1.7beaep-28f,
     0x1.8ab97cp-80f, 0.0f, 0.0f, 0.0f, 0x1.0bfd86p-120f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a2047ap-39f, 0.0f, 0x1.4481fp-111f, 0x1.bacd94p-37f, 0.0f, 0.0f,
     0x1.91e046p-75f, 0.0f, 0.0f, 0.0f, 0x1.5c1ce8p-63f, 0x1.a3cee2p-116f,
     0x1.6dc8a2p-72f, 0.0f, 0.0f, 0x1.0326p-119f, 0x1.290d92p-121f, 0x1.16e06p-63f,
     0x1.706598p-74f, 0x1.8fb2e6p-46f, 0.0f, 0x1.16006cp-95f, 0x1.aa868ep-62f,
     0x1.8a6506p-105f, 0x1.ced23p-72f, 0x1.275e52p-91f, 0x1.54f216p-57f,
     0x1.8005bcp-25f, 0x1.fcacccp-113f, 0x1.4a0da8p-74f, 0x1.0d806cp-91f,
     0x1.657c5cp-95f, 0.0f, 0x1.9becf4p-105f, 0x1.1820fp-100f, 0x1.578058p-95f, 0.0f,
     0x1.3d7502p-25f, 0.0f, 0x1.33cff6p-108f, 0x1.6a6b44p-116f, 0x1.f7448cp-24f,
     0x1.347262p-120f, 0x1.355afap-41f, 0.0f, 0x1.fba53ep-102f, 0.0f, 0x1.c4046ep-55f,
     0.0f, 0x1.7cbca2p-63f, 0.0f, 0x1.d76878p-94f, 0x1.093d7p-95f, 0x1.c59f1ep-100f,
     0x1.7491bp-34f, 0.0f, 0x1.771fc2p-105f, 0.0f, 0.0f, 0x1.005a9cp-125f,
     0x1.2e7dcp-101f, 0x1.73accp-121f, 0x1.db6b92p-57f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4abc4p-60f, 0x1.baa458p-39f, 0x1.cd7116p-91f, 0.0f, 0x1.b35f6cp-64f,
     0x1.4774e8p-44f, 0x1.c9a382p-53f, 0.0f, 0x1.14fba6p-78f, 0x1.033af2p-108f,
     0x1.d987e2p-3f, 0x1.e592ecp-59f, 0.0f, 0x1.86ee14p-39f, 0.0f, 0x1.c472d2p-101f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b30134p-48f, 0.0f, 0x1.333e82p-10f, 0x1p0f,
     0x1.b464ep-108f, 0x1.521338p-74f, 0.0f, 0x1.f9991p-25f, 0x1.e87d36p-31f,
     0x1.6080a4p-66f, 0x1.0a6ed8p-61f, 0.0f, 0x1.851878p-88f, 0.0f, 0x1.f37908p-48f,
     0.0f, 0.0f, 0x1.26b33p-17f, 0.0f, 0x1.31a9dap-41f, 0x1.888a6ap-16f, 0.0f,
     0x1.4b322p-118f, 0x1.98b18cp-90f, 0x1.f9defep-121f, 0x1.75af9ep-10f, 0.0f,
     0x1.568b66p-91f, 0x1.94b3c6p-4f, 0.0f, 0.0f, 0x1.6e2d68p-16f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.6fa19cp-45f, 0.0f, 0x1.9a8a46p-77f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1e5256p-78f, 0.0f, 0x1.0e52a4p-58f, 0.0f, 0.0f, 0x1.e0a5f6p-34f, 0.0f,
     0x1.643506p-102f, 0.0f, 0x1.9c2bd4p-114f, 0x1.d777c6p-125f, 0.0f,
     0x1.85afb6p-24f, 0x1.61b836p-22f, 0.0f, 0.0f, 0x1.bb5b6cp-73f, 0x1.8392a6p-23f,
     0.0f, 0.0f, 0.0f, 0x1.5a818cp-8f, 0.0f, 0x1.0f9c86p-93f, 0x1.29bee8p-43f, 0.0f,
     0.0f, 0x1.c5bdf8p-77f, 0.0f, 0x1.275d88p-72f, 0x1.f73a5p-64f, 0.0f,
     0x1.8ceeep-4f, 0x1.055f4cp-7f, 0.0f, 0x1.8d311ap-126f, 0x1.4cab42p-60f, 0.0f,
     0x1.2012a4p-115f, 0x1.971feep-112f, 0x1.1e2d3ap-105f, 0.0f, 0.0f, 0.0f,
     0x1.f377eap-25f, 0x1.59a98p-79f, 0x1.c31bbcp-29f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e24e24p-102f, 0.0f, 0.0f, 0x1.79b76ep-111f, 0x1.e48bc6p-113f, 0.0f,
     0x1.f0e31ep-27f, 0x1.5ce6aep-103f, 0x1.bc0c8cp-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.641e62p-22f, 0.0f, 0.0f, 0.0f, 0x1.4994e4p-61f, 0x1.fd92d2p-109f,
     0x1.30a83cp-67f, 0.0f, 0.0f, 0x1.460608p-84f, 0.0f, 0.0f, 0x1.19a256p-62f,
     0x1.8448f8p-64f, 0x1.68dcd8p-97f, 0x1.761d6ap-26f, 0x1.a4e424p-121f, 0.0f,
     0x1.8d4946p-42f, 0x1.833244p-15f, 0.0f, 0.0f, 0x1.8b6ca8p-92f, 0.0f,
     0x1.4c2b1ap-11f, 0.0f, 0x1.989be4p-45f, 0.0f, 0x1.ef4bcp-98f, 0.0f,
     0x1.96befp-111f, 0x1.4c9b78p-111f, 0.0f, 0x1.0f0a9ep-33f, 0.0f, 0x1.b72616p-102f,
     0x1.0670a2p-3f, 0.0f, 0.0f, 0x1.77ab98p-37f, 0.0f, 0x1.6e7a5ap-95f,
     0x1.cfe16ep-125f, 0x1.898a3p-9f, 0.0f, 0x1.8fe284p-90f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.bdb27p-84f, 0.0f, 0x1.17dbdp-19f, 0x1.bc1a1ap-62f, 0x1.40c7f8p-92f,
     0x1.cafaa6p-122f, 0x1.2bfae4p-56f, 0.0f, 0x1.25123ep-32f, 0x1.69e8ep-39f, 0.0f,
     0x1.01f34p-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.da7e34p-54f, 0x1.70b1ap-88f,
     0x1.435f92p-41f, 0x1.b44ea8p-4f, 0x1.d1dd7ep-21f, 0.0f, 0x1.1d2156p-34f,
     0x1.29212p-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8a19p-103f, 0x1.561f34p-97f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.373adep-108f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e17824p-29f, 0.0f, 0x1.491ebap-89f, 0.0f, 0x1.0a0788p-9f,
     0x1.62c842p-1f, 0x1.26f172p-49f, 0x1.d6ec3ap-38f, 0x1.a4506ep-3f,
     0x1.9a52c6p-42f, 0x1.db4808p-35f, 0x1.eb13fep-107f, 0x1.1018aap-53f, 0.0f,
     0x1.97b5fp-77f, 0x1.0eb476p-45f, 0.0f, 0.0f, 0x1.6435cp-2f, 0x1.3feccp-74f, 0.0f,
     0.0f, 0x1.bdd488p-93f, 0.0f, 0.0f, 0x1.600a8ep-29f, 0.0f, 0x1.3e1c64p-93f, 0.0f,
     0.0f, 0.0f, 0x1.621e2p-28f, 0.0f, 0x1.3b8b98p-104f, 0.0f, 0x1.45c92cp-1f, 0.0f,
     0.0f, 0x1.3be728p-33f, 0.0f, 0x1.e8b31p-81f, 0x1.be7992p-118f, 0x1.035a66p-38f,
     0x1.418e88p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ca71e6p-110f, 0.0f,
     0x1.a6de62p-95f, 0x1.30379ap-71f, 0.0f, 0x1.bff91cp-66f, 0x1.b21282p-65f, 0.0f,
     0x1.011c12p-85f, 0x1.52174ap-39f, 0.0f, 0x1.72f672p-122f, 0x1.879eap-6f, 0.0f,
     0x1.21e3c8p-38f, 0.0f, 0x1.6cef84p-21f, 0.0f, 0.0f, 0x1.8681d6p-66f, 0.0f,
     0x1.6e91ap-45f, 0x1.aa1604p-60f, 0.0f, 0.0f, 0.0f, 0x1.ed36a8p-51f, 0.0f, 0.0f,
     0.0f, 0x1.499b6p-69f, 0.0f, 0x1.745becp-3f, 0x1.1078a2p-3f, 0.0f,
     0x1.9872fcp-105f, 0.0f, 0.0f, 0x1.d41c46p-70f, 0.0f, 0x1.dd3ff4p-82f,
     0x1.1ecaep-73f, 0x1.571d58p-20f, 0.0f, 0.0f, 0x1.8b9ca6p-8f, 0.0f,
     0x1.ab2688p-19f, 0x1.a2fa76p-1f, 0x1.22662p-109f, 0x1.11ae88p-47f,
     0x1.0bdd3ap-20f, 0x1.ffd11p-7f, 0x1.f6c752p-114f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.72e8b2p-86f, 0.0f, 0x1.881f56p-106f, 0x1.282cb4p-100f, 0x1.52d228p-7f,
     0x1.7242d4p-30f, 0.0f, 0.0f, 0x1.fa09f8p-111f, 0.0f, 0x1.61bd5ap-8f, 0.0f,
     0x1.07b292p-73f, 0x1.2bf6a4p-34f, 0.0f, 0x1.6c61cep-106f, 0x1.9e1964p-92f,
     0x1.5297f2p-35f, 0.0f, 0x1.a7ba4ep-57f, 0.0f, 0x1.4318e4p-20f, 0x1.4ed114p-124f,
     0.0f, 0x1.bbaf58p-98f, 0x1.5f29ecp-106f, 0x1.b96198p-44f, 0x1.b98168p-62f, 0.0f,
     0.0f, 0.0f, 0x1.f5679cp-120f, 0x1.044c3cp-22f, 0.0f, 0x1.1d6ce8p-52f,
     0x1.bd6f1p-28f, 0.0f, 0.0f, 0x1.9d2904p-37f, 0x1.10013ap-107f, 0.0f,
     0x1.d1e1e4p-38f, 0x1.8184e8p-45f, 0x1.d4b7dap-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.718bp-77f, 0.0f, 0.0f, 0x1.bee1a6p-66f, 0.0f, 0.0f, 0x1.f50a3p-79f, 0.0f,
     0.0f, 0.0f, 0x1.2a049cp-52f, 0.0f, 0x1.24eb8ap-33f, 0.0f, 0.0f, 0x1.ddec92p-89f,
     0.0f, 0x1.3c055ap-84f, 0.0f, 0.0f, 0x1.8e365p-79f, 0x1.f8bdf8p-7f,
     0x1.2dd566p-58f, 0x1.63a2aep-25f, 0.0f, 0x1.39d938p-39f, 0.0f, 0x1.c7202ap-40f,
     0x1.a534d6p-28f, 0.0f, 0x1.11331cp-50f, 0x1.f2df96p-23f, 0x1.2e9c76p-121f,
     0x1.b0ce08p-43f, 0x1.595f8p-28f, 0x1.8c61fep-54f, 0x1.a95db6p-48f,
     0x1.a56bf8p-94f, 0.0f, 0x1.9d59a6p-97f, 0x1.e6e458p-74f, 0.0f, 0.0f, 0.0f,
     0x1.c9606cp-93f, 0x1.166b38p-95f, 0x1.ec6614p-112f, 0x1.61eab2p-27f,
     0x1.e9e0aep-78f, 0.0f, 0.0f, 0x1.214158p-25f, 0x1.3a960ap-87f, 0.0f,
     0x1.e4cbeap-110f, 0.0f, 0x1.cce1c2p-86f, 0x1.2246c6p-54f, 0.0f, 0.0f, 0.0f,
     0x1.d548f8p-72f, 0.0f, 0x1.be4e8p-34f, 0.0f, 0x1.15c92ap-118f, 0x1.6ecc3ap-106f,
     0x1.5f7fe2p-84f, 0.0f, 0.0f, 0x1.1b250ep-70f, 0x1.c2200ap-124f, 0x1.2be684p-7f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.6fffe8p-53f, 0.0f, 0x1.e9b54ep-34f, 0.0f, 0.0f,
     0x1.f4f90ep-2f, 0.0f, 0x1.eddadp-2f, 0.0f, 0.0f, 0.0f, 0x1.b28ecep-69f, 0.0f,
     0x1.4e31d4p-98f, 0x1.dd144ap-99f, 0x1.ae54bp-103f, 0x1.0ec308p-52f,
     0x1.af36c6p-24f, 0.0f, 0x1.45b53ep-79f, 0x1.d72398p-21f, 0.0f, 0.0f,
     0x1.409bb6p-73f, 0.0f, 0.0f, 0x1.2efb24p-77f, 0x1.cf7f58p-40f, 0x1.b310fep-112f,
     0.0f, 0.0f, 0x1.99c64p-74f, 0.0f, 0.0f, 0.0f, 0x1.cbd466p-112f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e1d4f2p-54f, 0x1.335948p-89f,
     0x1.8b63cap-122f, 0.0f, 0x1p0f, 0x1.01988ap-68f, 0x1.be792cp-53f, 0.0f,
     0x1.ec5d96p-31f, 0.0f, 0.0f, 0x1.7d48d4p-94f, 0.0f, 0.0f, 0x1.3894f6p-110f,
     0x1.3da184p-2f, 0x1.6378c8p-113f, 0x1.970aa2p-42f, 0x1.f8147p-53f,
     0x1.0820cp-93f, 0x1.403cc2p-56f, 0x1.e9f396p-88f, 0x1.5ce6bcp-124f,
     0x1.3d52d2p-5f, 0.0f, 0x1.7caa2cp-93f, 0x1.c6bd3cp-110f, 0x1.076234p-117f,
     0x1.05eebap-13f, 0x1.930d84p-79f, 0.0f, 0x1.3c4b2p-30f, 0.0f, 0.0f,
     0x1.bc2e98p-52f, 0x1.9b795ap-70f, 0.0f, 0x1.4c47cap-13f, 0x1.d1b15p-52f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bcbfccp-124f, 0x1p0f, 0x1.1b4f3ep-89f, 0.0f,
     0x1.ce81fep-107f, 0x1.a54ef2p-34f, 0.0f, 0.0f, 0x1.721764p-60f, 0.0f,
     0x1.c4a48cp-78f, 0x1.7cc2f2p-16f, 0x1.21d88ap-82f, 0x1.f685d6p-81f,
     0x1.7179c8p-100f, 0.0f, 0.0f, 0x1.38943cp-95f, 0x1.0da888p-110f,
     0x1.d7a55ep-119f, 0x1.463eb2p-24f, 0.0f, 0x1.d4aa18p-94f, 0x1.660f86p-56f, 0.0f,
     0x1.29c89cp-47f, 0.0f, 0.0f, 0x1.a2b70ap-113f, 0x1.f8c14p-41f, 0x1.0c40cp-42f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.699d92p-7f, 0x1.2a29dep-3f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.756efp-14f, 0x1.d79a9ap-15f, 0x1.876a04p-106f, 0.0f, 0x1.f3f6b2p-35f,
     0x1.221f96p-111f, 0x1.6a8e28p-85f, 0x1.0e415ep-21f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c5d49p-64f, 0x1.d3effap-113f, 0x1.58bc76p-119f, 0x1.2e846ap-66f, 0.0f,
     0x1.7a5234p-125f, 0x1.1ffa4ap-89f, 0x1.33a902p-12f, 0x1.676dc8p-108f,
     0x1.9ebc62p-15f, 0x1.1e2f54p-69f, 0x1.ae6dbap-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4a1fdp-67f, 0.0f, 0x1.7427fap-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b972f2p-40f, 0.0f, 0x1.cb28acp-54f, 0.0f, 0x1.d3b146p-92f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f0b62cp-122f, 0x1.6ee6e4p-10f, 0x1.0ad3b2p-70f, 0x1.d67afp-88f, 0.0f,
     0x1.95932p-26f, 0x1.f89a76p-114f, 0.0f, 0.0f, 0.0f, 0x1.2f3ae4p-46f,
     0x1.d2d3ecp-33f, 0.0f, 0x1.88dff8p-98f, 0x1.ac214cp-125f, 0x1.e7437ap-125f, 0.0f,
     0.0f, 0x1.981c78p-97f, 0.0f, 0x1.592a6cp-8f, 0x1.9522eep-95f, 0.0f,
     0x1.78f3bep-17f, 0x1.3cedcap-78f, 0.0f, 0.0f, 0x1.9748c8p-98f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.3917c6p-16f, 0.0f, 0.0f, 0x1.675fdp-40f, 0.0f, 0.0f, 0.0f,
     0x1.079e94p-68f, 0.0f, 0.0f, 0.0f, 0x1.cae9cep-67f, 0x1.f2639p-63f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ec8942p-87f, 0.0f, 0x1.5abadcp-107f,
     0x1.a927f4p-43f, 0x1.9a0f3p-47f, 0.0f, 0.0f, 0x1.28ac96p-34f, 0x1.02736cp-68f,
     0.0f, 0.0f, 0.0f, 0x1.37f7d2p-26f, 0.0f, 0.0f, 0.0f, 0x1.344feap-12f,
     0x1.b498acp-26f, 0x1.36746ep-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e52ac8p-31f, 0.0f, 0x1.a11a6ap-33f, 0x1.67e486p-10f, 0.0f, 0.0f,
     0x1.0a4e1ep-57f, 0.0f, 0.0f, 0.0f, 0x1.99068cp-107f, 0x1.4a1b56p-85f, 0.0f,
     0x1.ba65ccp-47f, 0.0f, 0x1.c7d828p-112f, 0.0f, 0x1.40ca46p-20f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.cb7d38p-91f, 0x1.ba74bap-32f, 0.0f, 0x1.3da224p-16f, 0.0f,
     0x1.11aecp-119f, 0x1.ff54ecp-35f, 0x1.ab18a6p-126f, 0.0f, 0x1.d922e6p-93f, 0.0f,
     0x1.acaa68p-122f, 0.0f, 0x1.4486fcp-11f, 0x1.d413bp-88f, 0x1.1dceaep-104f,
     0x1.20489ap-58f, 0.0f, 0x1.62fa1cp-33f, 0.0f, 0x1.46d73ep-83f, 0x1.5fb594p-59f,
     0x1.356a3cp-67f, 0x1.eab644p-95f, 0.0f, 0x1.f731dap-32f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.123e6cp-58f, 0x1.12b154p-63f, 0x1.00f252p-118f, 0.0f, 0x1.a5b588p-31f,
     0x1.39e6f8p-86f, 0.0f, 0x1.21cc6ap-112f, 0x1.9fbe2ep-114f, 0.0f, 0.0f,
     0x1.a5f474p-49f, 0.0f, 0.0f, 0.0f, 0x1.9ef274p-122f, 0x1.faaa2ap-21f,
     0x1.c323fp-123f, 0x1.ae087p-117f, 0x1.f128a4p-1f, 0.0f, 0x1.7528d6p-23f, 0.0f,
     0.0f, 0x1.fe0ed2p-78f, 0.0f, 0x1.c00108p-113f, 0.0f, 0.0f, 0x1.47405ep-27f,
     0x1.3f83eap-108f, 0x1.0cfa06p-86f, 0x1.985348p-23f, 0x1.9e810ap-46f,
     0x1.6cde6cp-81f, 0.0f, 0.0f, 0x1.94c45p-73f, 0x1.910c64p-102f, 0.0f, 0.0f,
     0x1.c71b2p-21f, 0.0f, 0x1.7329e8p-13f, 0.0f, 0.0f, 0x1.f4e0c6p-27f,
     0x1.c52af8p-20f, 0.0f, 0.0f, 0x1.b07eaap-20f, 0x1.4ec2ep-53f, 0.0f,
     0x1.b5e51ep-98f, 0.0f, 0.0f
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
            tmp1 = Sleef_finz_fabsf8_kvx(tmp0);
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
    printf("Sleef_finz_fabsf8_kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_finz_fabsf8_kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
