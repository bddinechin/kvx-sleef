/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_atan2f1_u35purecfma.c --function \
 *     Sleef_finz_atan2f1_u35purecfma --arity 2 --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary32,binary32 --bench \
 *     --no-embedded-bin --target x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <xmmintrin.h>
#include <stdio.h>
#include <inttypes.h>


volatile float external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.66888p-30f, 0.0f, 0.0f, 0.0f, 0x1.6a2d6ep-24f, 0x1.26cb12p-55f, 0.0f,
     0x1.6ac7e4p-70f, 0.0f, 0x1.e44116p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9812aap-42f,
     0x1.037ebep-105f, 0.0f, 0x1.9b21ccp-112f, 0.0f, 0.0f, 0x1.cf2c16p-77f, 0.0f,
     0x1.7f237p-64f, 0x1.2f9bc6p-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d9fbc2p-56f,
     0x1.37bb1ap-16f, 0.0f, 0.0f, 0x1.e6ce38p-125f, 0.0f, 0x1.398a2ep-48f, 0x1p0f,
     0.0f, 0x1.8eed9ep-48f, 0x1.8fc9dep-73f, 0.0f, 0x1.e3d62ap-122f, 0x1.8f233p-113f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a3b666p-111f, 0.0f, 0.0f, 0.0f,
     0x1.3000b8p-99f, 0.0f, 0x1.b4b4cap-78f, 0x1.06ddfep-46f, 0.0f, 0x1.b6489p-38f,
     0.0f, 0.0f, 0x1.1e6c16p-64f, 0x1.3747ecp-86f, 0.0f, 0x1.76b63cp-79f, 0.0f, 0.0f,
     0x1.d44592p-70f, 0.0f, 0.0f, 0x1.5b9b3ep-98f, 0x1.6a4aep-14f, 0x1.745c6p-62f,
     0x1.fa44dcp-34f, 0x1.ca648ep-70f, 0.0f, 0.0f, 0x1.232572p-80f, 0x1.8d532p-122f,
     0x1.ab1f5p-12f, 0.0f, 0.0f, 0.0f, 0x1.1ec5eep-29f, 0.0f, 0.0f, 0x1.ab6b0ep-30f,
     0x1.c73442p-54f, 0x1.1a4b0ap-2f, 0x1.a7119ep-36f, 0.0f, 0x1.b7c534p-29f,
     0x1.9855eep-39f, 0x1.c2e008p-88f, 0.0f, 0x1.b48f0cp-14f, 0x1.06b7bp-95f,
     0x1.2819c6p-99f, 0.0f, 0.0f, 0x1.817248p-77f, 0.0f, 0x1.f4056p-39f, 0.0f,
     0x1.1a9468p-99f, 0x1.5f6932p-35f, 0x1.1d76dp-35f, 0.0f, 0x1.121bbcp-34f, 0.0f,
     0x1.fce916p-77f, 0x1.3aea1ep-60f, 0.0f, 0x1.0de022p-3f, 0.0f, 0x1.a5fe9ap-106f,
     0x1.1d85bcp-61f, 0x1.804d7ap-19f, 0x1.c2b1e4p-14f, 0.0f, 0.0f, 0x1.a8941ap-10f,
     0x1.677a5cp-118f, 0.0f, 0x1.fe38cp-115f, 0.0f, 0x1.7cce72p-28f, 0.0f,
     0x1.19313p-27f, 0.0f, 0x1.0678fap-80f, 0.0f, 0.0f, 0x1.bbc9f6p-86f,
     0x1.eeb7dp-52f, 0.0f, 0x1.1ccc2cp-122f, 0.0f, 0.0f, 0x1.ccfbdap-93f, 0.0f,
     0x1.afc84ap-122f, 0.0f, 0x1.e34496p-25f, 0x1.162ce2p-26f, 0x1.ac28a6p-4f, 0.0f,
     0x1.020316p-5f, 0.0f, 0x1.4d5f4cp-79f, 0.0f, 0x1.a8cedep-43f, 0x1.236dd8p-100f,
     0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.63bbdep-94f, 0.0f, 0x1.6e7108p-57f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.609c6ep-89f, 0.0f, 0x1.4d1ec2p-110f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.45f48cp-90f, 0x1.d5a4f6p-91f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.fa9694p-3f, 0x1.a6a43p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b7fc8cp-21f, 0.0f, 0.0f, 0.0f, 0x1.fb79cp-77f, 0.0f, 0.0f, 0x1.16304ep-117f,
     0.0f, 0.0f, 0x1p0f, 0x1.60159ap-65f, 0x1.1a44bp-65f, 0.0f, 0.0f, 0x1.323fecp-39f,
     0.0f, 0x1.b65dbp-101f, 0x1.301dfp-115f, 0.0f, 0.0f, 0.0f, 0x1.e8faa2p-94f,
     0x1.7e932p-13f, 0x1.8d1286p-9f, 0x1.997d44p-61f, 0.0f, 0x1.49ba7ep-53f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c60162p-24f, 0.0f, 0x1.d6d9a2p-108f, 0.0f, 0.0f, 0.0f,
     0x1.3504e2p-59f, 0x1.1d2286p-86f, 0x1.f8729ap-90f, 0.0f, 0x1.4ca1dep-104f,
     0x1.1ab11cp-124f, 0.0f, 0x1.112c0cp-53f, 0.0f, 0.0f, 0x1.65030cp-92f,
     0x1.4fb13cp-31f, 0x1.b8d51cp-126f, 0x1.850044p-63f, 0x1.fc9afap-35f,
     0x1.22686ap-43f, 0.0f, 0x1.83bcbp-15f, 0.0f, 0.0f, 0x1.b97434p-120f,
     0x1.d84de8p-43f, 0x1.d8e81ap-111f, 0x1.ed3864p-27f, 0x1.3b55bcp-68f, 0.0f,
     0x1.9a0ac8p-86f, 0x1.2fd5fp-20f, 0x1.65b9c8p-126f, 0x1.3ee09ap-73f,
     0x1.d008cp-115f, 0.0f, 0x1.08c6aep-49f, 0x1.e7d9f4p-113f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.117f0ep-34f, 0.0f, 0x1.c5dacap-117f, 0x1.eefea6p-73f, 0.0f, 0x1.66b802p-26f,
     0.0f, 0.0f, 0x1.50ccdcp-32f, 0x1.7b50c4p-57f, 0.0f, 0x1.0cfc8cp-8f, 0.0f,
     0x1.a50384p-46f, 0.0f, 0x1.4ee4d6p-44f, 0.0f, 0x1.ca6f2cp-53f, 0.0f,
     0x1.4aca4cp-67f, 0x1.28440ep-25f, 0.0f, 0x1.f0d4fep-31f, 0.0f, 0x1.647b1cp-72f,
     0.0f, 0.0f, 0x1.4adee6p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.414a34p-56f,
     0x1.8b6726p-78f, 0x1.4902e4p-106f, 0x1.14e35ep-3f, 0.0f, 0x1.e97e7ap-104f,
     0x1.50175p-123f, 0.0f, 0x1.d22032p-55f, 0.0f, 0x1.814f0cp-117f, 0x1.fe9f22p-9f,
     0.0f, 0x1.c91886p-36f, 0x1.a689e6p-5f, 0x1.0b896p-77f, 0.0f, 0x1.ade4d2p-42f,
     0x1.041b5p-14f, 0.0f, 0x1.c9a93ep-42f, 0.0f, 0.0f, 0.0f, 0x1.455598p-9f,
     0x1.9475dcp-94f, 0x1.0bc3eap-33f, 0.0f, 0.0f, 0.0f, 0x1.ea845p-69f,
     0x1.352c46p-47f, 0x1.65f8bep-47f, 0.0f, 0x1.78dadap-65f, 0.0f, 0x1.e6998ep-41f,
     0x1.185432p-92f, 0.0f, 0.0f, 0x1.0c7cbp-72f, 0.0f, 0x1.5860c4p-78f, 0.0f,
     0x1.31abb4p-34f, 0.0f, 0.0f, 0x1.411fp-92f, 0.0f, 0.0f, 0x1.6780b4p-19f, 0.0f,
     0.0f, 0x1.c3c9b8p-6f, 0.0f, 0x1.df9a5ep-52f, 0x1.7b3bf8p-74f, 0x1.0ee2dp-109f,
     0.0f, 0x1.154f32p-29f, 0x1.043632p-120f, 0.0f, 0.0f, 0x1.a5c0d8p-88f, 0.0f,
     0x1.fbc864p-71f, 0x1.17d912p-101f, 0.0f, 0.0f, 0x1.db71fap-69f, 0x1.426fbap-88f,
     0.0f, 0x1.16fffcp-119f, 0.0f, 0x1.d2bfa6p-6f, 0.0f, 0.0f, 0.0f, 0x1.740d44p-48f,
     0x1.dd91eep-81f, 0.0f, 0x1.fb10bep-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.62a06ap-62f,
     0x1.73923ap-122f, 0.0f, 0x1.55ff44p-7f, 0x1.9bbbe2p-98f, 0.0f, 0x1.60d1bep-66f,
     0x1.e0eb58p-91f, 0.0f, 0.0f, 0x1.73dda2p-3f, 0x1.2ae6b8p-47f, 0.0f,
     0x1.6c4f18p-67f, 0x1.78d0c8p-110f, 0.0f, 0.0f, 0.0f, 0x1.ffb80ap-60f,
     0x1.445d76p-113f, 0x1.944d1p-50f, 0.0f, 0x1.ba457ap-89f, 0x1.ee437p-86f,
     0x1.4cfc6cp-95f, 0x1.17b214p-86f, 0.0f, 0x1.0ceaacp-103f, 0x1.d3c6d4p-43f, 0.0f,
     0.0f, 0.0f, 0x1.e5adeep-16f, 0.0f, 0x1.f1c6c6p-9f, 0.0f, 0x1.1bbc56p-55f,
     0x1.e0de6ep-61f, 0x1.518bap-110f, 0.0f, 0x1.8d64aap-19f, 0x1.1d21dep-119f,
     0x1.40a2dcp-50f, 0x1.251ebcp-65f, 0.0f, 0x1.51fc62p-68f, 0x1.f0afeep-125f,
     0x1.636bbcp-64f, 0.0f, 0x1.f7abccp-94f, 0x1.412432p-86f, 0x1.28ac02p-109f,
     0x1.3ecca6p-115f, 0x1.3390f4p-20f, 0.0f, 0x1.124926p-36f, 0x1.625d76p-110f,
     0x1.6018dep-90f, 0x1.642b2ap-67f, 0.0f, 0x1.d53ecep-39f, 0x1.9be1c2p-14f, 0.0f,
     0x1.d8925p-94f, 0x1.d0593p-75f, 0.0f, 0x1.69232p-2f, 0.0f, 0x1.d7afbap-21f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b819e6p-31f, 0x1.8d663cp-87f, 0x1.d5313cp-9f,
     0x1.49b97ap-16f, 0x1.fd068p-35f, 0.0f, 0.0f, 0x1.55ef7ap-77f, 0x1.028556p-15f,
     0.0f, 0.0f, 0x1.b2004ep-84f, 0.0f, 0.0f, 0x1.3995eep-39f, 0.0f, 0x1.3b6564p-111f,
     0x1.76fc0ap-28f, 0.0f, 0.0f, 0x1.00f03ep-107f, 0x1.3c133cp-15f, 0x1.78b40ep-33f,
     0x1.cd2a6ep-92f, 0.0f, 0x1.e5f584p-33f, 0.0f, 0x1.e1b7bep-101f, 0.0f, 0.0f, 0.0f,
     0x1.c74fe2p-84f, 0.0f, 0.0f, 0x1.552c32p-8f, 0x1.443d1cp-61f, 0.0f,
     0x1.23284cp-68f, 0x1.e21a6ep-119f, 0x1.7b5454p-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d17f96p-88f, 0x1.2fb39p-125f, 0.0f, 0.0f, 0.0f, 0x1.77067p-57f,
     0x1.0ec996p-103f, 0.0f, 0x1.830b76p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.50fa2ep-44f, 0.0f, 0x1.cd209ep-25f, 0.0f, 0x1.e8866cp-70f, 0.0f, 0.0f,
     0x1.53694ep-3f, 0x1.83f65p-53f, 0.0f, 0.0f, 0.0f, 0x1.05979ep-121f,
     0x1.d94648p-97f, 0x1.84fd68p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.72e1ecp-47f,
     0x1.3be7eep-121f, 0x1.98c992p-25f, 0x1.18cbeap-14f, 0x1.cb429ap-78f, 0.0f, 0.0f,
     0x1.95348ap-78f, 0.0f, 0.0f, 0x1.d5d9b6p-95f, 0.0f, 0x1.36b912p-4f,
     0x1.b5f1c8p-5f, 0.0f, 0x1.cfaac4p-66f, 0.0f, 0x1.28e6bap-93f, 0x1.41b2f2p-64f,
     0.0f, 0x1.201926p-44f, 0.0f, 0x1.f947d2p-1f, 0.0f, 0.0f, 0.0f, 0x1.9d0352p-33f,
     0x1.950ec6p-123f, 0x1.d0f4ccp-29f, 0x1.5514acp-79f, 0.0f, 0.0f, 0x1.5625ecp-34f,
     0.0f, 0.0f, 0x1.d70dcap-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.812334p-87f,
     0x1.3deae8p-40f, 0x1.d4a176p-112f, 0x1.317214p-111f, 0x1.b25b8ap-124f, 0.0f,
     0.0f, 0.0f, 0x1.82cc82p-6f, 0.0f, 0x1.bf5cfap-17f, 0.0f, 0.0f, 0x1.02068p-43f,
     0.0f, 0.0f, 0x1.920414p-86f, 0x1.4e7e08p-8f, 0.0f, 0x1.3c8ceep-34f, 0.0f,
     0x1.91398p-26f, 0.0f, 0x1.3fbbdp-27f, 0x1.8674ecp-35f, 0x1.7c6262p-7f,
     0x1.506e74p-58f, 0.0f, 0.0f, 0x1.8c79a8p-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0a7032p-1f, 0.0f, 0.0f, 0.0f, 0x1.3d901ep-42f, 0.0f, 0x1.e09a9ep-14f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.5c030cp-2f, 0.0f, 0.0f, 0x1.3192ep-111f,
     0x1.c50c92p-76f, 0x1.9e0e42p-51f, 0.0f, 0.0f, 0.0f, 0x1.65718ap-95f,
     0x1.b47846p-39f, 0.0f, 0x1.e88e8cp-118f, 0.0f, 0.0f, 0x1.f8daf6p-81f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4850b6p-28f, 0.0f, 0x1.673294p-71f, 0.0f, 0.0f, 0x1.02277ep-51f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d8710ep-45f, 0x1.2b1dfp-121f, 0.0f,
     0.0f, 0x1.a925cp-113f, 0x1.07f874p-75f, 0.0f, 0x1.4417ccp-12f, 0x1.baa1f4p-28f,
     0x1.57eddp-3f, 0x1.543276p-58f, 0.0f, 0x1.f6bca4p-64f, 0.0f, 0x1.9cf6aap-41f,
     0.0f, 0x1.e1fbe8p-8f, 0.0f, 0.0f, 0x1.e15cbp-19f, 0x1.0fc6fap-42f,
     0x1.978126p-17f, 0.0f, 0.0f, 0.0f, 0x1.a6b558p-85f, 0.0f, 0x1.ef1aaap-75f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.56cee8p-19f, 0x1.6e20a2p-20f, 0x1.c6957cp-25f, 0.0f,
     0x1.f87496p-67f, 0x1.bf9058p-110f, 0.0f, 0.0f, 0.0f, 0x1.641722p-50f,
     0x1.2199dcp-120f, 0x1.64affap-111f, 0.0f, 0.0f, 0x1.2505a2p-87f, 0x1.1c4256p-82f,
     0x1.616c8p-16f, 0x1.1440d8p-115f, 0.0f, 0.0f, 0.0f, 0x1.1cecep-19f, 0.0f,
     0x1.0d57cep-117f, 0.0f, 0x1.f64176p-28f, 0x1.6b4f78p-126f, 0x1.643e6cp-61f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.52ef22p-31f, 0.0f, 0.0f, 0x1.36da2p-66f, 0x1.78150cp-10f,
     0x1.c72beep-7f, 0x1.c8356p-36f, 0x1.9dbcep-119f, 0.0f, 0x1.85c0f2p-85f,
     0x1.0034e4p-88f, 0.0f, 0x1.cb77aap-15f, 0x1.8ce648p-4f, 0.0f, 0x1.4f6accp-60f,
     0.0f, 0.0f, 0x1.5a91eap-49f, 0.0f, 0x1.726724p-52f, 0.0f, 0x1.5083cp-36f, 0.0f,
     0.0f, 0x1.e87c7cp-113f, 0x1.c98306p-94f, 0x1.00a14ep-21f, 0.0f, 0x1.7e55d4p-120f,
     0x1.6d44c4p-47f, 0x1.1cdefep-106f, 0.0f, 0.0f, 0x1.5be762p-90f, 0x1p0f, 0.0f,
     0.0f, 0x1.f19698p-102f, 0x1.fbda9p-50f, 0x1.23f97p-114f, 0.0f, 0.0f, 0.0f,
     0x1.b550fcp-79f, 0x1.063b28p-13f, 0x1.180b68p-109f, 0x1.e675fcp-86f,
     0x1.86d49p-16f, 0.0f, 0.0f, 0x1.d49c74p-8f, 0x1.2ea41cp-62f, 0.0f,
     0x1.b0245ep-86f, 0x1.61214ap-96f, 0.0f, 0.0f, 0.0f, 0x1.8092a2p-51f,
     0x1.d5c6a6p-49f, 0x1.cdc8fcp-38f, 0.0f, 0x1.116358p-53f, 0.0f, 0x1.11fc08p-43f,
     0.0f, 0.0f, 0x1.7ffd76p-92f, 0.0f, 0.0f, 0x1.37a024p-117f, 0.0f, 0x1.a75c9cp-75f,
     0x1.4a0714p-70f, 0x1.1c561ep-27f, 0.0f, 0x1.c9d936p-59f, 0x1.13e286p-43f,
     0x1.64b3cp-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8aaeb4p-126f, 0x1.7fe286p-81f, 0.0f,
     0.0f, 0x1.4e80fep-63f, 0x1.4fe35p-115f, 0x1.76655ap-1f, 0.0f, 0x1.1360cp-18f,
     0.0f, 0x1.627494p-96f, 0x1.a63ad8p-90f, 0x1.d80712p-107f, 0x1.6f39a2p-118f,
     0x1.553b96p-124f, 0x1p0f, 0.0f, 0x1.eeb858p-93f, 0.0f, 0.0f, 0x1.10b05p-48f,
     0x1.74c906p-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f3d47ap-123f, 0x1.4d5784p-5f,
     0.0f, 0x1.65944ep-4f, 0x1.094568p-46f, 0.0f, 0x1.2db276p-109f, 0x1.84f74p-89f,
     0x1.02b87ep-33f, 0.0f, 0.0f, 0.0f, 0x1.6cefacp-99f, 0x1.4ddb58p-46f,
     0x1.ad1f14p-2f, 0x1.ab34eap-1f, 0x1.561e3cp-65f, 0x1.110e14p-15f,
     0x1.5c27d6p-32f, 0x1.992ap-115f, 0.0f, 0x1.28f8f8p-41f, 0.0f, 0x1.b6ce86p-47f,
     0.0f, 0.0f, 0x1.7e4e4ep-37f, 0.0f, 0x1.ebcb9ap-34f, 0x1.499b9cp-27f, 0.0f,
     0x1.586112p-6f, 0.0f, 0.0f, 0x1.af1838p-63f, 0x1.fdcfa8p-99f, 0x1.61cd48p-96f,
     0.0f, 0.0f, 0x1.8b1f8cp-29f, 0x1.db47cap-61f, 0.0f, 0x1.69fe04p-74f, 0.0f,
     0x1.3f6e8ap-44f, 0.0f, 0x1.50482ap-63f, 0x1.14593ap-125f, 0.0f, 0x1.f73704p-11f,
     0.0f, 0.0f, 0x1.b21ed6p-96f, 0.0f, 0x1.d30a2ep-21f, 0.0f, 0x1.820b8p-51f, 0.0f,
     0.0f, 0.0f, 0x1.eed74cp-65f, 0.0f, 0.0f, 0x1.75ccf6p-117f, 0.0f, 0.0f, 0.0f,
     0x1.6c3a6ep-81f, 0.0f, 0x1.69c99p-75f, 0x1.a14e0cp-110f, 0.0f, 0x1.114d72p-55f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.6d30f2p-55f, 0x1.331ecp-119f, 0x1.4eacp-2f,
     0x1.846306p-102f, 0.0f, 0.0f, 0x1.9f4d44p-72f, 0.0f, 0.0f, 0.0f,
     0x1.b506a8p-123f, 0.0f, 0x1.79d412p-54f, 0.0f, 0.0f, 0x1.e493a2p-72f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.3c585ep-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cd8fb2p-6f, 0.0f,
     0x1.08a682p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9a4138p-39f, 0x1.2250dap-108f,
     0x1.fa37f4p-32f, 0x1.e0f988p-57f, 0x1.911bb8p-84f, 0x1.47587cp-108f,
     0x1.728604p-112f, 0x1.7dbaa6p-5f, 0.0f, 0x1.ce9a7ep-21f, 0.0f, 0.0f,
     0x1.12b2d2p-69f, 0.0f, 0x1.4bf20cp-10f, 0x1.79a482p-115f, 0x1.fe84a2p-20f,
     0x1.fcf51p-60f, 0x1.24c446p-60f, 0x1.a8696p-49f, 0x1.0fa73cp-86f, 0x1.f72f4p-28f,
     0x1.166eeap-61f, 0x1.df96b2p-39f, 0.0f, 0.0f, 0.0f, 0x1.82f0f8p-102f,
     0x1.6cf71cp-122f, 0.0f, 0.0f, 0x1.73f196p-119f, 0x1.d6074p-77f, 0.0f, 0.0f,
     0x1.19e958p-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e4608ap-79f, 0x1.f92dbep-45f,
     0x1.37556cp-68f, 0x1.f2f9f8p-108f, 0x1.93150ep-44f, 0x1.ff3e9ep-15f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d07f1p-116f, 0.0f, 0.0f, 0.0f, 0x1.9158aep-3f, 0.0f, 0.0f,
     0x1.8f571cp-44f, 0x1.3ba604p-42f
};
static const float external_bench_wrapper_input_table_arg1[1001]  = {
     0x1.0258e4p-39f, 0x1.a5ac7p-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1971b2p-7f,
     0x1.72d9ccp-31f, 0.0f, 0.0f, 0.0f, 0x1.7f97b8p-115f, 0.0f, 0.0f,
     0x1.a451ecp-112f, 0x1.21f97ap-37f, 0x1.6eac48p-8f, 0x1.e58ff6p-19f,
     0x1.85c2d4p-68f, 0.0f, 0.0f, 0.0f, 0x1.529e94p-58f, 0.0f, 0x1.191daep-67f,
     0x1.039f58p-118f, 0x1.01586cp-107f, 0x1.aae0dcp-24f, 0.0f, 0.0f, 0x1.5f9642p-67f,
     0.0f, 0x1.c86cd6p-125f, 0.0f, 0x1.b9a79p-57f, 0.0f, 0x1.243172p-9f, 0.0f,
     0x1.b2a754p-3f, 0.0f, 0x1.38210cp-49f, 0x1.42a098p-5f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9b5f38p-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f9ba0ep-75f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.64dfd8p-44f, 0x1.db53d4p-62f, 0.0f, 0x1.00645ap-14f,
     0x1.c5415ep-39f, 0x1.17ac12p-38f, 0x1.0c2fp-45f, 0.0f, 0x1.0ec7d2p-116f,
     0x1.d4155cp-29f, 0.0f, 0.0f, 0x1.3c2c36p-79f, 0x1.11bb48p-101f, 0x1.a83c5ap-109f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5a73aap-25f, 0x1.c2f5f2p-122f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b115a6p-62f, 0.0f, 0.0f, 0x1.06b31p-42f, 0x1.4475acp-88f,
     0.0f, 0x1.442bf8p-106f, 0x1.a2b7p-93f, 0.0f, 0.0f, 0x1.557c7p-56f, 0.0f, 0.0f,
     0x1.6da364p-58f, 0.0f, 0x1.9b9808p-31f, 0.0f, 0.0f, 0x1.490d4cp-29f,
     0x1.4edeaep-54f, 0.0f, 0x1.0528c8p-20f, 0x1.9d8086p-114f, 0.0f, 0.0f,
     0x1.91ba9ep-115f, 0.0f, 0.0f, 0x1.748cf8p-120f, 0.0f, 0x1.357e74p-54f, 0.0f,
     0x1.766036p-92f, 0x1.74cabcp-23f, 0x1.b1ecd4p-2f, 0.0f, 0.0f, 0x1.c9eb4cp-10f,
     0x1.7f03c8p-82f, 0.0f, 0x1.bf93cep-62f, 0x1.c35fep-16f, 0.0f, 0.0f,
     0x1.6abe2ap-70f, 0.0f, 0x1.705412p-36f, 0x1.55bc5ep-27f, 0x1.98969ep-72f,
     0x1.004cd2p-6f, 0.0f, 0.0f, 0x1.c45c54p-73f, 0.0f, 0.0f, 0x1.c7d672p-10f,
     0x1.62c7bep-102f, 0.0f, 0.0f, 0.0f, 0x1.f87fc6p-89f, 0x1.c40ef4p-12f,
     0x1.3d4706p-83f, 0x1.055914p-106f, 0.0f, 0x1.759a66p-83f, 0x1.3d3214p-68f, 0.0f,
     0.0f, 0.0f, 0x1.9c587p-29f, 0.0f, 0x1.3c0c96p-28f, 0.0f, 0.0f, 0.0f,
     0x1.590c94p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c4ba2ep-74f, 0.0f, 0.0f, 0.0f,
     0x1.1e2f98p-97f, 0x1.008832p-108f, 0.0f, 0.0f, 0.0f, 0x1.be6ca2p-22f, 0.0f,
     0x1.87b0a2p-85f, 0.0f, 0.0f, 0.0f, 0x1.dc79cap-1f, 0x1.84a074p-38f, 0.0f, 0x1p0f,
     0x1p0f, 0x1.ab726cp-80f, 0x1.c36fdep-1f, 0.0f, 0.0f, 0.0f, 0x1.989e0ep-52f,
     0x1.bf883cp-37f, 0x1.102a48p-102f, 0.0f, 0x1.9700eap-114f, 0x1.36bf4ap-113f,
     0x1.c7a11ap-50f, 0.0f, 0x1.b11772p-38f, 0.0f, 0.0f, 0x1.36ada8p-7f, 0.0f, 0.0f,
     0x1p0f, 0x1.de82ep-13f, 0.0f, 0x1.a65df2p-38f, 0.0f, 0.0f, 0x1.2b306cp-47f,
     0x1.247898p-40f, 0.0f, 0x1.cdff6ep-91f, 0.0f, 0x1.666666p-33f, 0.0f,
     0x1.af3144p-13f, 0x1.978142p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f5af66p-105f,
     0x1.b01d38p-3f, 0.0f, 0.0f, 0.0f, 0x1.13acacp-27f, 0.0f, 0x1.dd367ap-69f,
     0x1.62c0dap-120f, 0x1.b9c9a6p-27f, 0.0f, 0.0f, 0x1.b1733cp-100f, 0.0f,
     0x1.b1b6f8p-7f, 0.0f, 0.0f, 0.0f, 0x1.708aacp-82f, 0x1.9b4534p-77f, 0.0f, 0.0f,
     0x1.dba09p-40f, 0x1.394c7cp-50f, 0.0f, 0x1.13b204p-29f, 0x1.0739dap-79f, 0.0f,
     0x1.a95234p-114f, 0.0f, 0.0f, 0x1.6874d6p-40f, 0x1.b4f3a4p-112f, 0x1.b0b942p-24f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b36a1cp-24f, 0.0f, 0x1.c6952ap-58f, 0.0f,
     0x1.506b0ep-37f, 0x1.3b0234p-62f, 0x1.a006cp-116f, 0.0f, 0.0f, 0x1.ad8242p-48f,
     0.0f, 0.0f, 0x1.c67b88p-36f, 0.0f, 0x1.1fb0fep-54f, 0.0f, 0x1.b69042p-48f,
     0x1.74afc6p-59f, 0x1.0e3ad2p-117f, 0.0f, 0x1.d7d8a6p-116f, 0.0f, 0x1.28a9a2p-89f,
     0x1.2ecf5ap-93f, 0x1.c7e77cp-12f, 0x1.0cffacp-102f, 0x1.975554p-57f,
     0x1.1b5128p-44f, 0x1.3c705cp-36f, 0.0f, 0x1.7ce15cp-2f, 0.0f, 0x1.82a5fcp-34f,
     0x1.87edacp-112f, 0x1.bec5eep-7f, 0.0f, 0x1.e746e2p-110f, 0.0f, 0x1.c01928p-78f,
     0x1.54cb9ap-108f, 0x1.360068p-32f, 0.0f, 0x1.6698ecp-103f, 0.0f, 0x1.69a0bap-21f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d5813cp-68f, 0x1.aa6b36p-74f, 0x1.599408p-43f,
     0.0f, 0x1.e7aa5ep-120f, 0.0f, 0.0f, 0x1.cfe1ep-73f, 0x1.7dbbe8p-65f,
     0x1.0109eep-66f, 0x1.55cfcep-38f, 0.0f, 0.0f, 0.0f, 0x1.6d17cp-18f,
     0x1.f4efap-96f, 0.0f, 0x1.e3b344p-21f, 0.0f, 0x1.0821c6p-107f, 0x1.3b594ep-73f,
     0x1.01dd5ep-76f, 0x1.1b4442p-41f, 0.0f, 0.0f, 0x1.e14264p-14f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.126c06p-40f, 0.0f, 0x1.4bf66cp-39f, 0x1.e6cb76p-26f,
     0x1.8ad542p-74f, 0.0f, 0x1.f6ba7ep-41f, 0.0f, 0x1.b14a7ap-108f, 0.0f,
     0x1.7a8bc4p-79f, 0x1.1f2b6ap-40f, 0x1.392da6p-49f, 0x1.9332bp-10f, 0.0f,
     0x1.2895e6p-57f, 0.0f, 0x1.4270a8p-22f, 0x1.2c1102p-32f, 0x1.c4684ap-29f,
     0x1.943f64p-36f, 0x1.4a3812p-115f, 0.0f, 0.0f, 0.0f, 0x1.ecb8ep-42f,
     0x1.aecb58p-13f, 0.0f, 0x1.706e9ep-118f, 0x1.d8a558p-113f, 0.0f, 0.0f, 0.0f,
     0x1.fe53f4p-64f, 0.0f, 0.0f, 0x1.65f3a2p-4f, 0.0f, 0x1.b16758p-12f, 0.0f,
     0x1.63c4dep-102f, 0x1.004522p-27f, 0.0f, 0.0f, 0.0f, 0x1.1b9d1p-58f,
     0x1.2b6f2ap-100f, 0.0f, 0x1.5fa44cp-118f, 0.0f, 0x1.b4caecp-55f, 0.0f,
     0x1.e48c38p-79f, 0x1.877ca6p-44f, 0x1.91f5a8p-60f, 0x1.72b7bep-8f,
     0x1.9915eep-70f, 0x1.54d6bp-31f, 0x1.f70d08p-15f, 0x1.1737p-51f,
     0x1.38ed2cp-115f, 0x1.84855ap-107f, 0.0f, 0.0f, 0x1.c7c846p-34f, 0.0f, 0.0f,
     0x1.525daep-41f, 0x1.6398f8p-18f, 0.0f, 0.0f, 0x1.060e48p-63f, 0x1.9f4eb4p-44f,
     0.0f, 0.0f, 0x1.d40092p-108f, 0.0f, 0.0f, 0x1.11c5cap-15f, 0x1.ce118ep-91f,
     0x1.5f9458p-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fe673cp-121f, 0x1.897806p-92f,
     0x1.7c0ab2p-89f, 0.0f, 0x1.c9decp-56f, 0.0f, 0x1.adb536p-112f, 0x1.dea68ep-62f,
     0x1.bad21p-79f, 0x1.b667ap-118f, 0.0f, 0x1.127f92p-79f, 0x1.4b87a2p-64f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.4d67ep-84f, 0x1.c7115ap-14f, 0x1.86b0fep-2f,
     0x1.c7624cp-120f, 0.0f, 0x1.5d831ap-114f, 0x1.a41d06p-116f, 0x1.945da4p-67f,
     0x1.f490ep-28f, 0x1.a97f1ep-73f, 0x1.467404p-4f, 0x1.1e717cp-68f,
     0x1.2b6d3ap-93f, 0x1.ed5e6ap-57f, 0x1.29ee66p-7f, 0.0f, 0x1p0f, 0.0f,
     0x1.05a0d2p-8f, 0.0f, 0x1.0fe75ap-85f, 0x1.6e09d4p-113f, 0x1.63d2bcp-38f,
     0x1.7ec57cp-85f, 0x1.dc4c88p-68f, 0x1.15f7e4p-112f, 0.0f, 0.0f, 0.0f,
     0x1.aa2632p-123f, 0x1.bae564p-86f, 0x1.6dd19cp-64f, 0.0f, 0.0f, 0x1.d0597ap-124f,
     0x1.d5f924p-60f, 0.0f, 0.0f, 0.0f, 0x1.1c8f58p-16f, 0.0f, 0x1.ef963cp-33f, 0.0f,
     0.0f, 0x1.2a2d32p-15f, 0x1.ab2bdp-63f, 0x1.9f543ap-83f, 0.0f, 0.0f,
     0x1.a65756p-25f, 0.0f, 0x1.a72f56p-2f, 0.0f, 0.0f, 0.0f, 0x1.4ae03p-2f,
     0x1.7fbfc6p-114f, 0x1.6790bep-50f, 0x1.309p-50f, 0.0f, 0.0f, 0x1.f37e0ap-41f,
     0x1.af3ee2p-49f, 0.0f, 0x1.3b5008p-4f, 0.0f, 0.0f, 0x1.c95e48p-96f, 0.0f, 0.0f,
     0x1.2de32ap-121f, 0x1.52f7f8p-123f, 0.0f, 0.0f, 0x1.a866bap-45f, 0.0f, 0.0f,
     0.0f, 0x1.59c79ap-55f, 0.0f, 0.0f, 0x1.b1eb6p-33f, 0x1.33743ap-57f,
     0x1.946662p-107f, 0x1.44ab2p-73f, 0.0f, 0x1.e487fep-41f, 0.0f, 0.0f, 0.0f,
     0x1.dacc56p-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dd5702p-6f, 0x1.994d1ep-112f,
     0.0f, 0x1.09438cp-84f, 0x1.f83f78p-23f, 0.0f, 0x1.24a416p-13f, 0.0f,
     0x1.db807cp-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b15862p-118f, 0.0f, 0.0f, 0.0f,
     0x1.38918ep-35f, 0x1.ead498p-61f, 0.0f, 0x1.74d7dap-11f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b911fap-37f, 0.0f, 0x1.f151d6p-77f, 0.0f, 0.0f, 0.0f, 0x1.3e9b6p-70f, 0.0f,
     0.0f, 0.0f, 0x1.2816e8p-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cbca56p-25f, 0.0f,
     0x1.452562p-21f, 0x1.6fd47ep-97f, 0x1.74a7a2p-3f, 0.0f, 0.0f, 0.0f,
     0x1.3794c6p-72f, 0.0f, 0x1.384fcp-26f, 0x1.379fbep-27f, 0x1.ef0456p-108f,
     0x1.95a19p-20f, 0.0f, 0x1.6527e4p-106f, 0x1.59d7dcp-64f, 0x1.b010bp-114f,
     0x1.854a28p-65f, 0x1.3e9222p-17f, 0x1.4a200cp-119f, 0x1.2cb2d6p-91f, 0.0f, 0.0f,
     0.0f, 0x1.839d3p-120f, 0x1.a2fb14p-106f, 0x1.eee0bp-80f, 0x1.c08cb8p-102f,
     0x1.cdbcb6p-120f, 0x1.de1c68p-45f, 0x1.0d2cacp-92f, 0.0f, 0x1.874f38p-41f,
     0x1.f50414p-90f, 0.0f, 0x1.c6664p-92f, 0x1.d1899cp-110f, 0x1.e67216p-29f, 0.0f,
     0.0f, 0x1.e3bfaap-121f, 0.0f, 0x1.eb6eep-68f, 0x1.eb3bc2p-46f, 0x1.6ac84ep-63f,
     0x1.b22156p-62f, 0x1.4f231ep-14f, 0x1.630adp-108f, 0.0f, 0.0f, 0x1.d934c2p-26f,
     0.0f, 0x1.9f033ap-20f, 0x1.8493e4p-117f, 0.0f, 0.0f, 0.0f, 0x1.16f752p-53f, 0.0f,
     0x1.8fa6aap-22f, 0x1.25af3p-119f, 0.0f, 0x1.e9b5aep-112f, 0x1.a9918ep-50f,
     0x1.61f8f8p-18f, 0x1.7c892p-13f, 0x1.8da27ep-70f, 0x1.263f24p-101f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.fbf804p-39f, 0x1.7dc44cp-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.31b54ep-20f, 0.0f, 0.0f, 0x1.e3bd3ep-108f, 0x1.4fcb68p-93f, 0x1.8d3aaap-3f,
     0x1.dc2532p-64f, 0x1.d25eb6p-16f, 0x1.7cd334p-112f, 0.0f, 0.0f, 0x1.05ecd4p-119f,
     0.0f, 0.0f, 0x1.50d0ap-78f, 0.0f, 0.0f, 0.0f, 0x1.0c6a88p-4f, 0x1.586e56p-7f,
     0x1.670d22p-53f, 0.0f, 0x1.15436p-106f, 0x1.df951ep-37f, 0x1.ee78p-94f,
     0x1.1a435p-36f, 0x1.aabf4cp-44f, 0.0f, 0x1.7ba22ap-55f, 0x1.0adae8p-45f,
     0x1.b85c84p-118f, 0.0f, 0.0f, 0x1.3d1bdcp-81f, 0x1.dabe16p-70f, 0x1.65ac22p-42f,
     0.0f, 0x1.524e7p-117f, 0x1.ab9a3ep-77f, 0x1.d7d0c6p-58f, 0.0f, 0.0f, 0.0f,
     0x1.54916ep-98f, 0.0f, 0x1.c60122p-47f, 0x1.bcf6b8p-68f, 0x1.74e986p-57f, 0.0f,
     0x1.3714fap-119f, 0x1.b121b6p-42f, 0x1.04398ep-74f, 0.0f, 0.0f, 0.0f,
     0x1.b0d028p-69f, 0x1.8cd8c4p-50f, 0.0f, 0x1.8f5b8ep-66f, 0.0f, 0x1.f8a702p-77f,
     0.0f, 0.0f, 0x1.75f56ep-124f, 0.0f, 0.0f, 0x1.b231cp-7f, 0x1.0f7e38p-7f,
     0x1.6d3722p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a41f1p-86f, 0.0f,
     0x1.033096p-92f, 0.0f, 0x1.578a7ep-100f, 0x1.0723dcp-29f, 0x1.2507d2p-70f, 0.0f,
     0x1.f932eep-83f, 0x1.a5f88ap-105f, 0x1.977f4ap-50f, 0.0f, 0x1.81e3fap-109f, 0.0f,
     0x1.959c74p-32f, 0x1.48fb7p-118f, 0x1.46af5ap-37f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1eddcp-120f, 0x1.2fbe58p-91f, 0x1.1ede6ap-97f, 0.0f, 0x1.2d0b1cp-81f,
     0x1.2ecd76p-5f, 0x1.5e2d9ap-13f, 0.0f, 0.0f, 0.0f, 0x1.50067cp-61f,
     0x1.509eaap-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2a444cp-49f, 0x1.f01d08p-39f,
     0.0f, 0.0f, 0x1.c1c90ap-36f, 0x1.22a84ap-52f, 0.0f, 0.0f, 0x1.87cf5p-6f,
     0x1.8c476p-27f, 0x1.f68126p-32f, 0x1.fbc4b6p-21f, 0x1.a4c88ap-3f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.673d68p-91f, 0x1.b82658p-95f, 0x1.fe044p-97f, 0.0f,
     0x1.e69dap-92f, 0.0f, 0.0f, 0x1.816bd8p-79f, 0.0f, 0.0f, 0x1.3c2884p-85f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a480bcp-104f, 0.0f, 0x1.2fe20ep-85f, 0x1.1321ap-71f,
     0x1.14603ap-23f, 0.0f, 0x1.786a18p-20f, 0.0f, 0x1.2e5592p-49f, 0x1.bccddep-54f,
     0x1.f80f7cp-107f, 0x1.028a5ep-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.16bcfap-100f, 0x1.e06aap-107f, 0x1.b6e55ap-57f, 0.0f, 0x1.e04c5cp-62f,
     0x1.c62692p-75f, 0x1.1c0ccp-123f, 0x1.25112ep-60f, 0x1.19a6dap-3f, 0.0f, 0.0f,
     0.0f, 0x1.9b1674p-96f, 0x1.82c882p-71f, 0x1.718cbep-45f, 0.0f, 0x1.428378p-89f,
     0x1.0372a4p-73f, 0x1.884968p-37f, 0x1.bb324p-85f, 0.0f, 0.0f, 0x1.523012p-101f,
     0.0f, 0.0f, 0.0f, 0x1.61d9a4p-67f, 0x1.6ead54p-76f, 0.0f, 0x1.63d4d8p-77f,
     0x1.426a8p-45f, 0x1.cae868p-43f, 0.0f, 0.0f, 0x1.898aacp-126f, 0x1.b50cd6p-35f,
     0x1.48d6c4p-88f, 0x1.cf5894p-124f, 0.0f, 0x1.1bda26p-64f, 0x1.269782p-48f,
     0x1.2a67dap-72f, 0.0f, 0x1.d7b84p-64f, 0.0f, 0x1.7a0b84p-105f, 0.0f, 0.0f, 0.0f,
     0x1.795de2p-74f, 0x1.d3b3f4p-92f, 0x1.24b352p-66f, 0x1.52fbb4p-105f, 0.0f,
     0x1.a4fc46p-47f, 0x1.007b78p-118f, 0.0f, 0x1.6a869ep-92f, 0.0f, 0.0f, 0.0f,
     0x1.ca4a46p-74f, 0x1.03122cp-79f, 0.0f, 0x1.fc490ap-14f, 0x1.67075ep-105f, 0.0f,
     0.0f, 0x1.e0b292p-36f, 0x1.14e68ap-102f, 0.0f, 0x1.7e4f3ap-83f, 0x1.0deb36p-117f,
     0x1.a52f64p-49f, 0x1.c932e2p-89f, 0x1.516dc4p-95f, 0.0f, 0.0f, 0x1.5e3ba2p-73f,
     0.0f, 0x1.8a8ac2p-94f, 0x1.394778p-15f, 0x1.0381d8p-33f, 0.0f, 0x1.545c2ap-1f,
     0.0f, 0x1.a51f98p-62f, 0.0f, 0x1.3ce9b4p-38f, 0x1.5e37c4p-43f, 0x1.c6e798p-21f,
     0x1.e114dep-13f, 0x1.5835dap-93f, 0.0f, 0x1.568ba2p-98f, 0x1.5bbd9p-107f,
     0x1.477076p-98f, 0x1.9eba7cp-72f, 0.0f, 0.0f, 0x1.daf13ep-98f, 0.0f,
     0x1.be5bd2p-122f, 0.0f, 0x1.60f29cp-38f, 0.0f, 0x1.88588p-55f, 0x1.ace5e8p-28f,
     0x1.7ec796p-115f, 0x1.66fc9cp-50f, 0.0f, 0x1.b132c6p-63f, 0x1.41cbc6p-16f,
     0x1.fbafep-24f, 0x1.cd57c4p-100f, 0x1.32788ep-74f, 0x1.684cc4p-85f,
     0x1.2ba3d4p-1f, 0x1.9a5006p-89f, 0x1.1aa76p-100f, 0x1.edd5fap-106f,
     0x1.ded37ep-110f, 0.0f, 0x1.bfc208p-17f, 0x1.2a3742p-23f, 0.0f, 0.0f,
     0x1.37a296p-60f, 0x1.3370d8p-110f, 0.0f, 0x1.77c352p-83f, 0.0f, 0x1.3853b2p-92f,
     0.0f, 0x1.1e337cp-89f, 0x1.75e182p-83f, 0.0f, 0.0f, 0x1.e6f852p-44f,
     0x1.297b9cp-36f, 0x1.feffbep-77f, 0.0f, 0.0f, 0x1.b7d072p-101f, 0.0f,
     0x1.25429ap-106f, 0x1.4f2f32p-90f, 0x1.13ccd2p-39f, 0x1.992bap-17f,
     0x1.809568p-15f, 0x1.d9726p-30f, 0x1.d237cp-11f, 0.0f, 0.0f, 0x1.baf626p-24f,
     0.0f, 0.0f, 0.0f, 0x1.74d168p-48f, 0x1.61fcd8p-60f, 0x1.d97cdp-117f,
     0x1.49cfe8p-36f, 0.0f, 0x1.8a5206p-101f, 0.0f, 0.0f, 0.0f, 0x1.ef3f72p-16f,
     0x1.04a482p-2f, 0x1.db6b62p-88f, 0x1.13a466p-101f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    float global_bench_acc;
    int64_t timer;
    int64_t tmp;
    int32_t j;
    int64_t tmp1;
    int64_t tmp2;
    double id_tmp;
    double cpe_measure;
    
    global_bench_acc = 0.0f;
    {
        uint32_t cycles_hi = 0, cycles_lo = 0;
        asm volatile (
            "cpuid\n\t"
            "rdtsc\n\t"
            "mov %%edx, %0\n\t"
            "mov %%eax, %1\n\t"
            : "=r" (cycles_hi), "=r" (cycles_lo)
            :: "%rax", "%rbx", "%rcx", "%rdx");
        tmp = ((uint64_t) cycles_hi << 32) | cycles_lo;
    };
    timer = tmp;
    j = INT32_C(0);

    for (;(j < INT32_C(10000));){
        float bench_acc;
        int32_t i;
        __m128 carg;
        __m128 carg1;
        __m128 carg2;
        float tmp0;
        int32_t tmp1;

        i = INT32_C(0);
        bench_acc = 0.0f;

        for (;(i < INT32_C(1001));){
            float tmp0;
            float tmp1;
            float tmp2;
            __m128 carg;
            __m128 carg1;
            __m128 carg2;
            float tmp3;
            int32_t tmp4;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = external_bench_wrapper_input_table_arg1[i];
            tmp2 = Sleef_finz_atan2f1_u35purecfma(tmp0, tmp1);
            external_bench_wrapper_output_table[i] = tmp2;
            carg = _mm_set_ss(bench_acc);
            carg1 = _mm_set_ss(tmp2);
            carg2 = _mm_add_ss(carg, carg1);
            tmp3 = _mm_cvtss_f32(carg2);
            bench_acc = tmp3;
            tmp4 = i + INT32_C(1);
            i = tmp4;
        }
        carg = _mm_set_ss(global_bench_acc);
        carg1 = _mm_set_ss(bench_acc);
        carg2 = _mm_add_ss(carg, carg1);
        tmp0 = _mm_cvtss_f32(carg2);
        global_bench_acc = tmp0;
        tmp1 = j + INT32_C(1);
        j = tmp1;
    }
    {
        uint32_t cycles_hi = 0, cycles_lo = 0;
        asm volatile (
            "cpuid\n\t"
            "rdtsc\n\t"
            "mov %%edx, %0\n\t"
            "mov %%eax, %1\n\t"
            : "=r" (cycles_hi), "=r" (cycles_lo)
            :: "%rax", "%rbx", "%rcx", "%rdx");
        tmp1 = ((uint64_t) cycles_hi << 32) | cycles_lo;
    };
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_finz_atan2f1_u35purecfma %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_atan2f1_u35purecfma bench acc %a\n", global_bench_acc);
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
