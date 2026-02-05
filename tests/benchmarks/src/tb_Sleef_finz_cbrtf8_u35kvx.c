/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_cbrtf8_u35kvx.c --function \
 *     Sleef_finz_cbrtf8_u35kvx --headers sleef.h,ml_support_lib.h \
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
     0x1.fff55cp-94f, 0.0f, 0.0f, 0x1.50d7a8p-111f, 0.0f, 0.0f, 0x1.34eca4p-110f,
     0x1.578862p-58f, 0.0f, 0x1.8e3a18p-70f, 0x1.74a848p-102f, 0x1.54d8bep-56f, 0.0f,
     0x1.d285e6p-118f, 0.0f, 0x1.d4d182p-66f, 0.0f, 0.0f, 0.0f, 0x1.cffd02p-75f,
     0x1.9c4d1ap-30f, 0x1.a8e91cp-114f, 0.0f, 0x1.7694e8p-96f, 0x1.133d6ap-62f, 0.0f,
     0.0f, 0.0f, 0x1.17a282p-34f, 0x1.6c0e4ep-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e9bd82p-81f, 0.0f, 0x1.951ecap-9f, 0x1.b2435ap-26f, 0x1.a8694ep-86f,
     0x1.a60fbep-35f, 0.0f, 0x1.4fcd06p-83f, 0.0f, 0.0f, 0x1.c77884p-89f, 0.0f, 0.0f,
     0.0f, 0x1.ac3752p-101f, 0x1.414ce8p-64f, 0x1.1f309p-103f, 0.0f, 0.0f,
     0x1.aac712p-93f, 0x1.e9ff7p-82f, 0x1.7d9c8ap-45f, 0x1.f46806p-46f,
     0x1.708074p-34f, 0.0f, 0x1.9d8808p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.25f142p-17f,
     0.0f, 0x1.44f89ap-79f, 0.0f, 0x1.23226p-64f, 0x1.169a86p-27f, 0x1.fbce28p-59f,
     0.0f, 0.0f, 0.0f, 0x1.b6a82ep-76f, 0.0f, 0.0f, 0x1.e913bep-28f, 0x1.f15f72p-31f,
     0.0f, 0x1.85edaep-100f, 0x1.3f1858p-51f, 0x1.d45e7cp-112f, 0x1.14875ep-96f,
     0x1.1a2d88p-80f, 0x1.d5beeap-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.579144p-46f,
     0x1.dc8c52p-68f, 0x1.4ebebep-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cc5616p-62f, 0.0f, 0x1.7893cep-77f, 0.0f, 0.0f, 0x1.8784c2p-109f, 0.0f, 0.0f,
     0x1.382bc8p-117f, 0x1.1d5992p-117f, 0.0f, 0.0f, 0x1.df9232p-51f, 0x1.1bf5e8p-79f,
     0x1.625e4ap-78f, 0x1.cad008p-76f, 0x1.7ad6bep-31f, 0x1.cfab88p-116f, 0.0f,
     0x1.85ad6p-27f, 0.0f, 0x1.c410e8p-83f, 0.0f, 0.0f, 0.0f, 0x1.fd6b68p-124f, 0.0f,
     0.0f, 0x1.7ccf48p-31f, 0x1.82634cp-105f, 0x1.b054ap-41f, 0x1.eeb8bep-122f, 0.0f,
     0x1.9beb58p-30f, 0x1.2777dp-109f, 0x1.8727e8p-70f, 0.0f, 0.0f, 0.0f,
     0x1.71c11cp-64f, 0.0f, 0x1.065c72p-31f, 0x1.5fce2p-72f, 0x1.23883p-83f, 0.0f,
     0x1.a101ap-84f, 0.0f, 0x1.398268p-62f, 0x1.77d8c2p-15f, 0x1.e3bf74p-53f, 0.0f,
     0.0f, 0x1.826398p-116f, 0.0f, 0.0f, 0.0f, 0x1.c026e2p-8f, 0.0f, 0x1.e86fdp-20f,
     0.0f, 0.0f, 0.0f, 0x1.7a87fp-27f, 0x1.7a826ap-106f, 0.0f, 0.0f, 0x1.f761bp-101f,
     0x1.c3df1ep-30f, 0x1.099014p-79f, 0x1.54fcbcp-49f, 0x1.d79fbp-94f,
     0x1.b47a08p-21f, 0x1.a4ab7ep-79f, 0.0f, 0x1.d643e2p-105f, 0.0f, 0.0f, 0.0f,
     0x1.6e3dcep-122f, 0x1.5c7b12p-102f, 0x1.62e45ap-122f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a0982p-3f, 0.0f, 0x1.d8ccb6p-43f, 0.0f,
     0x1.e2640ep-100f, 0.0f, 0.0f, 0x1.aa3312p-42f, 0x1.c2e544p-65f, 0.0f,
     0x1.f1187ep-74f, 0.0f, 0x1.7d31f2p-47f, 0x1.ef5ba2p-109f, 0x1.4118d2p-91f,
     0x1.650198p-30f, 0x1.18674ep-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f09b2cp-24f, 0x1.ebc378p-97f, 0.0f, 0.0f, 0x1.ed9944p-122f, 0.0f, 0.0f,
     0x1.f9ecfcp-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.18fedp-85f, 0x1.e3eac6p-29f,
     0x1.ace82p-110f, 0.0f, 0x1.55c77ap-26f, 0.0f, 0x1.d1cfccp-63f, 0.0f,
     0x1.138426p-8f, 0x1.19528ap-45f, 0.0f, 0x1.d7c1dp-125f, 0x1.8da87p-125f,
     0x1.bd013cp-86f, 0.0f, 0.0f, 0x1.06b98cp-65f, 0.0f, 0x1.a80a9cp-83f,
     0x1.50be2ap-20f, 0x1.a95feep-21f, 0.0f, 0.0f, 0.0f, 0x1.26e43cp-70f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.873eccp-115f, 0x1.d55ffap-72f, 0.0f, 0x1.058aa8p-45f,
     0x1.699a26p-84f, 0.0f, 0x1.543e86p-51f, 0.0f, 0x1.127b76p-55f, 0.0f,
     0x1.6b24d6p-21f, 0.0f, 0.0f, 0x1.c73f36p-108f, 0x1.491186p-78f, 0.0f, 0.0f,
     0x1.269632p-88f, 0.0f, 0x1.894b98p-15f, 0x1.ca1a6cp-45f, 0.0f, 0x1.705032p-30f,
     0.0f, 0x1.16bf8p-21f, 0x1.bc73eap-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2f224p-112f, 0.0f, 0.0f, 0x1.93df9ep-29f, 0x1.bd32fp-86f, 0.0f, 0.0f,
     0x1.da2ae8p-51f, 0.0f, 0x1.465f84p-66f, 0x1.b77274p-70f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.8ba028p-118f, 0.0f, 0x1.e89424p-8f, 0x1.2f3048p-107f, 0x1.e2debcp-106f,
     0x1.ee4df4p-74f, 0.0f, 0x1.259ec4p-48f, 0.0f, 0x1.a503c4p-39f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.5e1a6cp-3f, 0.0f, 0x1.a28838p-80f, 0.0f, 0.0f, 0.0f,
     0x1.78ab8cp-79f, 0x1.9378f6p-58f, 0x1.682258p-54f, 0.0f, 0x1.3ff89ep-103f, 0.0f,
     0.0f, 0x1.ca3a48p-67f, 0.0f, 0x1.1add0ep-83f, 0x1.a98fdep-27f, 0x1.4cf52ep-124f,
     0x1.81a764p-119f, 0.0f, 0x1.aa4e32p-48f, 0x1.df202cp-57f, 0.0f, 0x1.0cedaap-64f,
     0.0f, 0.0f, 0x1.c47a0cp-73f, 0.0f, 0x1.c35d96p-88f, 0x1.e38p-76f, 0.0f,
     0x1.698a2ap-41f, 0.0f, 0x1.3d60f2p-19f, 0x1.9f08d6p-68f, 0x1.d573b8p-104f, 0.0f,
     0.0f, 0x1.7a2feep-103f, 0x1.ff8ef6p-26f, 0.0f, 0x1.301aecp-53f, 0x1.0b1dc8p-6f,
     0.0f, 0.0f, 0x1.17b59ep-119f, 0x1.5fc638p-25f, 0x1.de8abep-85f, 0.0f,
     0x1.357696p-21f, 0x1.73e66p-46f, 0x1.814e62p-55f, 0x1.2b45aap-45f, 0.0f,
     0x1.efbd0ap-48f, 0.0f, 0.0f, 0x1.38e468p-108f, 0.0f, 0.0f, 0x1.bce6cep-118f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d241b2p-49f, 0.0f, 0x1.5021ecp-51f,
     0x1.060892p-49f, 0x1.15edfap-115f, 0x1.d8f4eep-107f, 0x1.3397fcp-94f,
     0x1.b333fep-80f, 0x1.270e9cp-5f, 0x1.4ee72p-68f, 0.0f, 0.0f, 0x1.a0e802p-25f,
     0.0f, 0.0f, 0x1.0498e4p-28f, 0.0f, 0x1.597f92p-13f, 0x1.4f30c2p-17f,
     0x1.3c7056p-51f, 0.0f, 0.0f, 0x1.2ee1aap-121f, 0x1.065c62p-64f, 0x1.61adf6p-33f,
     0x1.dbd0e6p-63f, 0.0f, 0x1.3b56dep-66f, 0.0f, 0.0f, 0.0f, 0x1.45ef4cp-8f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9577ep-118f, 0x1.497ab4p-73f, 0x1.37aebap-30f, 0.0f, 0.0f,
     0x1.599176p-56f, 0.0f, 0x1.35e7dp-7f, 0.0f, 0x1.5c34aap-98f, 0.0f,
     0x1.7dd3bp-32f, 0x1.6fddaep-26f, 0.0f, 0x1.a5846p-68f, 0x1.67287ap-101f,
     0x1.2320c6p-15f, 0.0f, 0x1.96e8a4p-125f, 0x1.2e3fd6p-53f, 0x1.548004p-110f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f5e8eep-2f, 0.0f, 0.0f, 0x1.abad5cp-8f,
     0x1.9b083cp-26f, 0x1.d66786p-28f, 0.0f, 0x1.f6a194p-91f, 0.0f, 0x1.9f832cp-14f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.304286p-29f, 0.0f, 0.0f, 0x1.92729p-9f,
     0x1.75fc7ep-46f, 0.0f, 0x1.86277ap-104f, 0.0f, 0x1.ea953p-72f, 0x1.ce4c8ep-55f,
     0x1.60afe8p-17f, 0x1.690b16p-3f, 0x1.412898p-55f, 0x1.a68d1ap-32f, 0.0f, 0.0f,
     0x1.5a70d2p-110f, 0x1.6dadcp-101f, 0.0f, 0x1.a83482p-46f, 0.0f, 0.0f,
     0x1.c6cda8p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ce9b56p-78f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.74bceap-94f, 0.0f, 0x1.00ef6cp-80f, 0.0f, 0x1.3f813ap-65f, 0.0f, 0.0f,
     0x1.f9bcdep-28f, 0x1.5fe344p-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.319606p-101f, 0.0f, 0x1.57dfp-70f, 0.0f, 0x1.a3ae68p-22f, 0x1.00788p-100f,
     0.0f, 0x1p0f, 0.0f, 0x1.d02c86p-70f, 0.0f, 0x1.91e574p-8f, 0.0f, 0x1.0f0516p-75f,
     0x1.7606ap-35f, 0.0f, 0x1.1bb3b4p-31f, 0.0f, 0x1.1cac22p-39f, 0x1.a3360ep-117f,
     0.0f, 0x1.d9f1b6p-75f, 0.0f, 0.0f, 0x1.23dfap-110f, 0.0f, 0.0f, 0x1.2a13b8p-63f,
     0x1.82245p-113f, 0x1.05f654p-63f, 0x1.b2400ap-114f, 0.0f, 0x1.0bf554p-3f, 0.0f,
     0.0f, 0x1.c153e2p-30f, 0.0f, 0x1.54575cp-75f, 0.0f, 0x1.47f682p-71f, 0.0f,
     0x1.d387c2p-54f, 0x1.f0b1e8p-100f, 0.0f, 0.0f, 0x1.de7ff2p-32f, 0.0f, 0.0f, 0.0f,
     0x1.df8acap-49f, 0x1.8ba29ep-92f, 0.0f, 0x1.874f18p-50f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.fb890ap-105f, 0x1p0f, 0.0f, 0x1.7f4d4p-117f, 0.0f, 0x1.7e8058p-122f,
     0.0f, 0x1p0f, 0.0f, 0x1.197deep-112f, 0x1.d8eae6p-108f, 0.0f, 0x1.32e2e8p-87f,
     0x1.6ece02p-123f, 0.0f, 0x1.aff6fp-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.67d8bcp-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8aa75cp-100f, 0.0f, 0.0f, 0.0f,
     0x1.cef6e2p-17f, 0.0f, 0.0f, 0x1.5e793cp-126f, 0x1.e9075p-117f, 0.0f, 0.0f, 0.0f,
     0x1.9a4134p-110f, 0.0f, 0.0f, 0x1.53cac4p-109f, 0x1.43242ep-45f, 0x1.5660aap-96f,
     0.0f, 0x1.c43feep-8f, 0.0f, 0.0f, 0.0f, 0x1.462884p-10f, 0.0f, 0x1.81aebp-95f,
     0.0f, 0.0f, 0x1.2953b8p-98f, 0x1.cb966cp-76f, 0x1.daadp-108f, 0.0f,
     0x1.c025ccp-83f, 0.0f, 0x1.26033ap-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1c861cp-59f,
     0.0f, 0.0f, 0x1.b6dc96p-121f, 0.0f, 0.0f, 0.0f, 0x1.b09f6ep-116f, 0.0f,
     0x1.b92286p-100f, 0x1.b89fdcp-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2bbb34p-63f,
     0.0f, 0x1.26bd32p-123f, 0x1.d6b11cp-34f, 0x1.e67602p-105f, 0x1.d78ffp-53f, 0.0f,
     0x1.e5fab2p-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3c6c4cp-48f, 0.0f,
     0x1.d27d32p-68f, 0x1.009a2cp-14f, 0x1.3d24a6p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e5d48p-29f, 0.0f, 0.0f, 0x1.1b6668p-56f, 0.0f, 0.0f, 0x1.be77e8p-16f,
     0x1.5dbf56p-20f, 0x1.07280ep-44f, 0x1.288feep-90f, 0.0f, 0x1.042d9p-5f, 0.0f,
     0x1.ecf808p-35f, 0.0f, 0x1.33831ep-15f, 0.0f, 0.0f, 0x1.e9e28p-31f,
     0x1.174fdap-78f, 0.0f, 0x1.fbb0d4p-39f, 0.0f, 0x1.045abep-83f, 0.0f,
     0x1.e413cp-28f, 0.0f, 0x1.c6c35p-36f, 0.0f, 0.0f, 0.0f, 0x1.eeafbap-102f, 0.0f,
     0x1.cf5e92p-56f, 0.0f, 0.0f, 0.0f, 0x1.2b9f72p-104f, 0.0f, 0x1.b50682p-34f,
     0x1.f4a21cp-42f, 0x1.7f4e5p-113f, 0x1.4b8486p-100f, 0x1.5966e6p-45f, 0.0f,
     0x1.be91f8p-120f, 0x1.eddd9cp-70f, 0x1.84260cp-28f, 0.0f, 0.0f, 0x1.b54646p-106f,
     0x1.f36ddap-3f, 0x1.40f386p-34f, 0x1.2aa5dcp-102f, 0.0f, 0x1.088b76p-7f,
     0x1.84ee26p-103f, 0x1.b97678p-19f, 0x1.cc15p-82f, 0x1.0c17a4p-114f,
     0x1.0fb25cp-58f, 0.0f, 0.0f, 0x1.66213p-78f, 0.0f, 0x1.600dfp-9f, 0.0f,
     0x1.d3bebcp-13f, 0x1.a03958p-60f, 0x1.0cfbaep-77f, 0.0f, 0x1.9ea772p-30f,
     0x1.bbbcc2p-70f, 0.0f, 0.0f, 0x1.e0118cp-97f, 0x1.26e478p-53f, 0.0f, 0.0f,
     0x1.3c92b2p-62f, 0.0f, 0x1.3b4822p-106f, 0.0f, 0.0f, 0.0f, 0x1.2a88a4p-16f,
     0x1.746a1ap-117f, 0.0f, 0.0f, 0x1.d4e4d8p-74f, 0x1.b603ecp-6f, 0.0f, 0.0f, 0.0f,
     0x1.902868p-42f, 0x1.c1ca48p-102f, 0x1.02e74ap-114f, 0.0f, 0x1.143b4p-95f, 0.0f,
     0x1.042072p-99f, 0x1.e842a6p-18f, 0.0f, 0.0f, 0x1.81cc4ap-33f, 0x1.8985dcp-115f,
     0.0f, 0.0f, 0x1.0a690cp-69f, 0.0f, 0x1.54997ep-97f, 0x1.324246p-86f,
     0x1.c751d4p-49f, 0.0f, 0x1.04ba94p-2f, 0x1.117a02p-62f, 0.0f, 0.0f, 0.0f,
     0x1.de37c2p-93f, 0x1.2b1c22p-14f, 0.0f, 0x1.c0ebf8p-68f, 0x1.4b34dep-63f,
     0x1.55c18p-94f, 0.0f, 0.0f, 0.0f, 0x1.3ba85p-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.982ffp-29f, 0.0f, 0x1.d371acp-42f, 0.0f,
     0x1.82bc3ap-30f, 0x1.5a9b04p-48f, 0.0f, 0.0f, 0x1.92e416p-105f, 0x1.5587fep-42f,
     0.0f, 0.0f, 0.0f, 0x1.17ecbap-82f, 0x1.6e29e6p-124f, 0x1.2a9032p-112f, 0.0f,
     0.0f, 0.0f, 0x1.5633fap-46f, 0x1.400944p-91f, 0.0f, 0.0f, 0x1.ad50b2p-56f,
     0x1.83496cp-5f, 0.0f, 0x1.e1191cp-20f, 0x1.0778ep-42f, 0x1.f860aap-6f,
     0x1.ae9184p-79f, 0.0f, 0x1.71ae0ap-12f, 0.0f, 0x1.86e968p-37f, 0.0f,
     0x1.97eb38p-81f, 0x1.03512ep-98f, 0x1.bcf3ep-13f, 0x1.ecea0ep-73f,
     0x1.db8032p-24f, 0x1.79ed98p-125f, 0x1.65d72p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.fe2ec2p-7f, 0x1.28292p-72f, 0x1p0f, 0x1.3dafc2p-25f, 0x1.d0a322p-69f,
     0.0f, 0x1.b3f72ep-94f, 0.0f, 0.0f, 0x1.7779dcp-8f, 0.0f, 0.0f, 0x1.984d4cp-122f,
     0x1.1af87ep-93f, 0x1.5c8ed4p-27f, 0x1.c9551ap-58f, 0.0f, 0x1.c2b674p-44f, 0.0f,
     0.0f, 0x1.2f83f4p-60f, 0x1.2323c4p-100f, 0.0f, 0.0f, 0x1.58795ap-14f,
     0x1.994eccp-102f, 0x1.9ad85p-107f, 0x1.0d6d5p-53f, 0.0f, 0.0f, 0.0f,
     0x1.89865cp-22f, 0.0f, 0x1.6a5fa8p-93f, 0.0f, 0.0f, 0x1.e240aep-23f, 0.0f,
     0x1.58f57cp-105f, 0.0f, 0x1.813afep-11f, 0x1.422fcap-99f, 0.0f, 0x1.cdbb56p-89f,
     0.0f, 0x1.98fdcap-29f, 0.0f, 0x1.ea509ep-45f, 0.0f, 0.0f, 0.0f, 0x1.0ad0d2p-92f,
     0.0f, 0x1.484bbep-88f, 0.0f, 0.0f, 0.0f, 0x1.d12aaap-63f, 0x1.ce973p-23f,
     0x1.e23762p-22f, 0.0f, 0x1.08dd5cp-107f, 0x1.d939dcp-24f, 0x1.ddba6ap-106f,
     0x1.70f0fap-88f, 0x1.cc1b4ep-65f, 0.0f, 0x1.adcb3cp-121f, 0.0f, 0x1.951828p-17f,
     0x1.704986p-73f, 0.0f, 0x1.bb008cp-43f, 0x1.1a757ep-39f, 0x1.af664cp-19f, 0.0f,
     0.0f, 0x1.be2b82p-11f, 0x1.5c5cccp-60f, 0.0f, 0x1.eaab56p-60f, 0.0f,
     0x1.d733cep-77f, 0.0f, 0x1.e2ae96p-40f, 0x1.0903ap-54f, 0x1.65e1bp-72f,
     0x1.a73f16p-2f, 0x1.962feap-75f, 0.0f, 0x1.e3181p-116f, 0x1.d10014p-89f,
     0x1.8ed088p-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b92dc8p-114f, 0x1.702a14p-83f, 0.0f, 0.0f, 0.0f, 0x1.a76704p-20f, 0.0f, 0.0f,
     0x1.e400d6p-26f, 0x1.315108p-83f, 0.0f, 0x1.e4d85ep-22f, 0.0f, 0.0f,
     0x1.9979cap-21f, 0.0f, 0x1.45967ap-117f, 0x1.b22fe6p-14f, 0.0f, 0x1.874928p-80f,
     0x1p0f, 0x1.4d61d6p-1f, 0x1.459ccap-96f, 0x1.6e8aecp-112f, 0x1.0b165ap-68f,
     0x1.33920ap-98f, 0x1.e777cap-9f, 0x1.4c992ap-111f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a21416p-83f, 0.0f, 0x1.1381dap-122f, 0.0f, 0.0f, 0x1.e8fadcp-81f,
     0x1.5b43f6p-116f, 0.0f, 0x1.7b9c8ep-104f, 0.0f, 0x1.0032e8p-126f, 0.0f,
     0x1.cda2e2p-114f, 0x1.0a2a9p-102f, 0.0f, 0x1.5f6174p-78f, 0.0f, 0.0f, 0.0f
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
            tmp1 = Sleef_finz_cbrtf8_u35kvx(tmp0);
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
    printf("Sleef_finz_cbrtf8_u35kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_finz_cbrtf8_u35kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
