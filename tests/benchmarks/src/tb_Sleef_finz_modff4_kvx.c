/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_finz_modff4_kvx.c --function Sleef_finz_modff4_kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 4 --function-input-vector-size 4 --precision sleef_sf2 \
 *     --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <string.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef_float32x4_t_2 external_bench_wrapper_cst = {.x = {0.0f, 0.0f, 0.0f, 0.0f},.y = {0.0f, 0.0f, 0.0f, 0.0f}};
static const Sleef_float32x4_t_2 external_bench_wrapper_cst1 = {.x = {0.0f, 0.0f, 0.0f, 0.0f},.y = {0.0f, 0.0f, 0.0f, 0.0f}};
volatile Sleef_float32x4_t_2 external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0x1.b077eap-113f, 0x1.82c3a4p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.302d9cp-19f,
     0.0f, 0.0f, 0x1.7967bap-56f, 0.0f, 0.0f, 0x1.1bdaf2p-123f, 0.0f, 0x1.8d9p-20f,
     0x1.4aceap-79f, 0x1.f6348ep-117f, 0.0f, 0x1.094e48p-100f, 0x1.e88caep-13f,
     0x1.395a82p-87f, 0x1.dfbd36p-123f, 0x1.143e9p-119f, 0x1.20e72cp-86f,
     0x1.323016p-24f, 0x1.e3c932p-85f, 0x1.7f99b4p-36f, 0x1.8a31aep-31f, 0.0f,
     0x1.91abd4p-114f, 0x1.1acc24p-18f, 0x1.ac8522p-25f, 0.0f, 0x1.09a816p-4f,
     0x1.04c498p-106f, 0x1.0082f6p-75f, 0.0f, 0x1.d7a6c4p-12f, 0.0f, 0x1.f621c4p-13f,
     0.0f, 0x1.98e1dap-19f, 0.0f, 0x1.d7a5b8p-46f, 0x1.3d623cp-23f, 0.0f, 0.0f,
     0x1.746e14p-116f, 0.0f, 0x1.4fed4cp-38f, 0.0f, 0x1.2837b6p-61f, 0x1.70f16p-93f,
     0.0f, 0x1.1c1c9p-106f, 0x1.e65d56p-36f, 0.0f, 0x1.0068eep-66f, 0x1.927bbep-17f,
     0.0f, 0x1.3717dep-94f, 0x1.61796cp-107f, 0.0f, 0x1.afb4f4p-18f, 0.0f,
     0x1.2dd1c2p-95f, 0.0f, 0x1.0b7138p-116f, 0x1.288456p-29f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b303bcp-40f, 0.0f, 0x1.9c4982p-41f, 0.0f, 0x1.00ce38p-39f, 0.0f, 0.0f,
     0x1.36e89cp-20f, 0x1.06568ap-117f, 0x1.637ad2p-45f, 0.0f, 0x1.a28a0ep-79f,
     0x1.234948p-42f, 0x1.d243dcp-22f, 0.0f, 0x1.a017e6p-10f, 0x1.4d585ap-101f, 0.0f,
     0x1.6a57bep-118f, 0.0f, 0.0f, 0x1.aaa9fap-109f, 0.0f, 0.0f, 0.0f,
     0x1.9c4902p-32f, 0.0f, 0x1.7e3ef2p-110f, 0x1.ed7cd6p-60f, 0.0f, 0x1.6b49p-90f,
     0x1.994644p-43f, 0.0f, 0x1.6e7496p-66f, 0.0f, 0.0f, 0x1.7d6a92p-117f,
     0x1.a6428ep-1f, 0x1.55f554p-102f, 0.0f, 0x1.32d0b2p-82f, 0.0f, 0x1.8756d2p-35f,
     0.0f, 0x1.a409d6p-57f, 0x1.f9dd3cp-15f, 0x1.2a95aep-68f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.8dfcb4p-105f, 0x1.c46a9p-66f, 0.0f, 0x1.bfdebp-105f, 0.0f,
     0x1.6616cep-86f, 0.0f, 0x1.38685cp-43f, 0x1.db5f28p-113f, 0.0f, 0.0f,
     0x1.f3e86cp-3f, 0x1.de36c4p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.af2202p-28f, 0x1.339f2cp-62f, 0x1.4320acp-114f, 0.0f, 0x1.51f024p-77f, 0.0f,
     0.0f, 0x1.3b9dacp-66f, 0.0f, 0x1.ba92b4p-83f, 0x1.085a08p-34f, 0x1.220ebcp-86f,
     0x1.a0273ap-67f, 0.0f, 0x1.f99652p-112f, 0.0f, 0.0f, 0x1.4539d8p-12f, 0.0f, 0.0f,
     0x1.ef9d2ap-97f, 0.0f, 0.0f, 0x1.b10ceap-40f, 0.0f, 0x1.2594b8p-39f,
     0x1.a1128ep-124f, 0.0f, 0.0f, 0.0f, 0x1.f1b89p-36f, 0x1.c6215ap-99f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.03bdf8p-60f, 0x1.43b1fcp-34f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d8184p-47f, 0x1.20e77cp-114f, 0x1.b62c6cp-56f, 0x1.f0afe4p-117f,
     0x1.4e2936p-45f, 0x1.4f02bep-15f, 0.0f, 0x1.3ab2d6p-16f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b5b3dep-92f, 0.0f, 0x1.363a5ap-106f, 0x1.193196p-78f, 0.0f, 0.0f,
     0.0f, 0x1.3b4fbap-32f, 0x1.1cd6e6p-27f, 0.0f, 0x1.301584p-73f, 0.0f, 0.0f,
     0x1.04ef8ep-38f, 0x1.ba97f4p-49f, 0x1.46fa46p-61f, 0x1.750da2p-104f,
     0x1.27d322p-109f, 0x1.83a0eap-95f, 0x1.79ceeap-9f, 0.0f, 0.0f, 0x1.cd6a94p-51f,
     0x1.8fede4p-119f, 0.0f, 0.0f, 0x1.1ef062p-12f, 0.0f, 0x1.bc3de4p-54f,
     0x1.f3d1a4p-116f, 0x1.51a18ep-125f, 0x1.de81c4p-29f, 0.0f, 0x1p0f, 0.0f,
     0x1.b3dd44p-5f, 0x1.827ca8p-87f, 0.0f, 0.0f, 0x1.28ed06p-78f, 0x1.485a3p-59f,
     0x1.64a1d4p-114f, 0.0f, 0x1.7081aep-17f, 0x1.ca0a48p-89f, 0x1.d93192p-102f, 0.0f,
     0.0f, 0.0f, 0x1.be43dap-25f, 0.0f, 0.0f, 0.0f, 0x1.5b4972p-70f, 0x1.420fa2p-99f,
     0x1.abc436p-78f, 0x1.86f71cp-126f, 0x1.549fd2p-101f, 0.0f, 0.0f, 0.0f,
     0x1.0ca302p-92f, 0.0f, 0x1.097cb4p-52f, 0.0f, 0x1.bfca5p-62f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.920342p-125f, 0x1.7a651ep-51f,
     0x1.b81a5cp-110f, 0.0f, 0x1.ffc3b8p-125f, 0x1.ff7008p-10f, 0x1.4f433ep-94f,
     0x1.20b4p-9f, 0x1.25dec6p-92f, 0.0f, 0x1.20e4dep-78f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b5fc68p-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.aed13ep-100f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1835d4p-79f, 0x1.90873ap-63f, 0x1.b16882p-77f, 0.0f,
     0x1.412826p-24f, 0.0f, 0.0f, 0.0f, 0x1.738b62p-83f, 0.0f, 0.0f, 0x1.5f3a84p-63f,
     0.0f, 0x1.773ba4p-70f, 0x1.adbb0cp-85f, 0x1.fee344p-121f, 0.0f, 0x1.506b96p-61f,
     0.0f, 0.0f, 0.0f, 0x1.f5113ap-101f, 0x1.6fd434p-13f, 0.0f, 0x1.e825fep-120f,
     0.0f, 0x1.840fd6p-76f, 0.0f, 0.0f, 0x1.5f0cacp-71f, 0.0f, 0x1.2c2e6p-114f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.de4f14p-21f, 0.0f, 0x1.f0e83ep-118f, 0.0f,
     0x1.852a7cp-31f, 0.0f, 0x1.fe91d6p-24f, 0.0f, 0.0f, 0.0f, 0x1.7be7p-112f, 0.0f,
     0x1.223c14p-60f, 0.0f, 0x1.8bdf8ap-69f, 0x1.d7d7f4p-53f, 0x1.8d71bap-57f,
     0x1.b41b4p-18f, 0x1.5bfafcp-124f, 0.0f, 0x1.3770dap-29f, 0.0f, 0.0f, 0.0f,
     0x1.88c1e2p-112f, 0x1.7603bap-73f, 0.0f, 0x1.7b04d4p-16f, 0x1.f144d8p-58f,
     0x1.078bcap-90f, 0x1.d6640ep-60f, 0.0f, 0x1.b4aa84p-53f, 0x1.d2833ep-12f, 0.0f,
     0x1.396056p-14f, 0x1.d0d71ep-6f, 0x1.7b30c2p-6f, 0x1.604432p-28f, 0.0f, 0.0f,
     0x1.1138e2p-60f, 0.0f, 0.0f, 0x1.a3e87ap-123f, 0.0f, 0x1.1de29ap-15f,
     0x1.8c9272p-68f, 0x1.3422bep-85f, 0x1.b881bep-75f, 0x1.78b5fep-17f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.8bdb92p-51f, 0x1.bb8f84p-124f, 0.0f, 0x1.c611bp-78f,
     0x1.2b710ep-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e8855cp-118f,
     0x1.cdcf1ap-91f, 0.0f, 0.0f, 0x1.65c42p-74f, 0.0f, 0.0f, 0x1.1cdbd4p-122f, 0.0f,
     0x1.bc592ap-42f, 0.0f, 0x1.068da2p-97f, 0.0f, 0x1.096dccp-50f, 0x1.1ff616p-91f,
     0x1.55808cp-104f, 0x1.71867ap-53f, 0.0f, 0x1.9e82ap-101f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.5a126cp-36f, 0x1.86f0ap-102f, 0.0f, 0.0f, 0x1.a1c4acp-119f,
     0x1.58a1d2p-107f, 0x1.347ae2p-111f, 0.0f, 0.0f, 0.0f, 0x1.c99b9cp-112f, 0.0f,
     0x1.87e922p-106f, 0x1.b4bc4cp-103f, 0x1.bc5f9p-34f, 0x1.ec697ap-40f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.67bbf6p-48f, 0x1.e2bcb6p-40f, 0x1.84d09cp-36f, 0.0f,
     0x1.4578fep-4f, 0.0f, 0x1.edd126p-108f, 0x1.60caaep-5f, 0x1.7f4a84p-71f,
     0x1.aada4p-80f, 0x1.3b4234p-2f, 0x1.c81fe6p-16f, 0x1.906ce4p-114f, 0.0f, 0.0f,
     0x1.35b5ap-115f, 0x1.79f702p-82f, 0x1.b9af1ep-114f, 0x1.38c2eep-76f, 0.0f,
     0x1.5386fp-102f, 0x1.15b72p-79f, 0x1.f972eap-33f, 0.0f, 0x1.5405e4p-68f,
     0x1.1bb814p-71f, 0.0f, 0.0f, 0x1.fe995ep-86f, 0x1.4fe6ecp-75f, 0x1.c21782p-49f,
     0x1.65837ap-62f, 0x1.06803p-69f, 0x1.116a3ap-29f, 0x1.b73072p-63f, 0.0f,
     0x1.37291ep-80f, 0.0f, 0x1.8dd8eep-95f, 0.0f, 0.0f, 0.0f, 0x1.4ce05ap-122f,
     0x1.1b221p-10f, 0.0f, 0x1.d236a8p-99f, 0x1.45d722p-15f, 0.0f, 0x1.7c20a4p-12f,
     0.0f, 0.0f, 0x1.b7b6f2p-28f, 0x1.dc90ccp-36f, 0x1.84c838p-76f, 0.0f,
     0x1.dce344p-8f, 0.0f, 0x1.93963cp-84f, 0x1.c038acp-2f, 0.0f, 0x1.b5efa2p-55f,
     0x1.26404ap-79f, 0.0f, 0x1.07a3ep-34f, 0x1.f44d36p-37f, 0x1.eeb8bcp-91f, 0.0f,
     0x1.1fbc94p-104f, 0.0f, 0.0f, 0x1.4681acp-36f, 0x1.303928p-68f, 0.0f, 0.0f,
     0x1.fce0bep-95f, 0x1.f89bdap-73f, 0x1.279bb8p-37f, 0x1.ce9ccap-93f, 0.0f, 0.0f,
     0x1.d8d944p-126f, 0x1.96ea56p-74f, 0x1.2807c8p-117f, 0x1.70945ep-57f, 0.0f,
     0x1.58f858p-53f, 0.0f, 0.0f, 0.0f, 0x1.c63d4ep-120f, 0.0f, 0.0f,
     0x1.76f6c4p-124f, 0x1.51f5d8p-49f, 0x1.359f8ap-3f, 0x1.62141ep-125f,
     0x1.ae843ap-50f, 0.0f, 0x1.25bbc8p-126f, 0x1.c5653ap-112f, 0x1.54716p-5f,
     0x1.ca9d7cp-73f, 0.0f, 0x1.09bfdep-37f, 0x1.77a1e4p-94f, 0.0f, 0.0f, 0.0f,
     0x1.5c215ap-85f, 0.0f, 0x1.83c528p-66f, 0x1.18f442p-123f, 0.0f, 0x1.aea97ep-25f,
     0.0f, 0x1.c4dc98p-104f, 0x1.7a564cp-16f, 0x1.21aa34p-124f, 0.0f, 0.0f, 0.0f,
     0x1.98753p-82f, 0.0f, 0.0f, 0x1.faff88p-90f, 0x1.397784p-23f, 0.0f, 0.0f, 0.0f,
     0x1.bd396p-21f, 0.0f, 0x1.2b32e8p-39f, 0x1.15f566p-114f, 0x1.0f63ap-63f, 0.0f,
     0.0f, 0x1.325efep-20f, 0x1.f759e6p-73f, 0.0f, 0.0f, 0x1.b7d9c2p-122f,
     0x1.930dacp-71f, 0x1.fab40ap-22f, 0x1.60555cp-80f, 0x1.b7ecbap-9f, 0.0f, 0.0f,
     0x1.3e1698p-72f, 0x1.c46ac4p-19f, 0x1.cc8dap-3f, 0.0f, 0x1.cacb6cp-115f, 0.0f,
     0x1.bf9a88p-51f, 0x1.7f4e16p-58f, 0x1.c4b5cp-36f, 0.0f, 0x1.7f6cb2p-60f,
     0x1.c04da2p-115f, 0x1.770c1cp-76f, 0.0f, 0x1.de0378p-33f, 0x1.67f97cp-12f,
     0x1.5c9644p-29f, 0.0f, 0.0f, 0x1.6f194p-28f, 0x1.186f6cp-99f, 0x1.1becdcp-52f,
     0x1.bb604cp-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1f37cp-100f, 0x1.5b707ap-48f, 0.0f,
     0.0f, 0x1p0f, 0x1.57d136p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.99e308p-72f,
     0x1.9dbf7ep-78f, 0x1.6e6a74p-72f, 0x1.f6d5e6p-47f, 0x1.4a5294p-5f, 0.0f, 0.0f,
     0.0f, 0x1.0356cp-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.787638p-16f, 0.0f,
     0x1.30883ap-54f, 0x1.0a412cp-69f, 0x1.60788cp-49f, 0x1.55d19cp-69f,
     0x1.27b3fcp-95f, 0x1.eaa58p-115f, 0x1.3b08a8p-119f, 0x1.fff4d2p-116f,
     0x1.c84bdep-69f, 0.0f, 0.0f, 0x1.b5c136p-90f, 0x1.25302ap-16f, 0x1.3f2094p-9f,
     0x1.046f1p-93f, 0.0f, 0.0f, 0x1.e05f78p-44f, 0x1.f14132p-93f, 0x1.0f9cdp-126f,
     0x1.24d576p-103f, 0x1.ce0e22p-16f, 0.0f, 0x1.cde038p-26f, 0.0f, 0.0f,
     0x1.900988p-39f, 0x1.1aa19cp-28f, 0.0f, 0.0f, 0x1.3a5fc2p-42f, 0x1.13ddfap-125f,
     0x1.0cbcc8p-64f, 0x1.c5b9b4p-40f, 0.0f, 0.0f, 0.0f, 0x1.c9d99p-8f,
     0x1.1f145ep-101f, 0x1.dbccf2p-48f, 0x1.5e0fep-63f, 0x1.f4ea42p-71f,
     0x1.6f1066p-83f, 0.0f, 0.0f, 0x1.7558ep-94f, 0.0f, 0x1.987b38p-26f, 0.0f, 0.0f,
     0x1.f44b7ep-81f, 0.0f, 0.0f, 0.0f, 0x1.c50678p-96f, 0x1.93c8cap-72f,
     0x1.752e5ap-26f, 0.0f, 0x1.9d338ep-71f, 0x1.8ade2p-96f, 0x1.7a9e86p-95f,
     0x1.88ea8p-117f, 0.0f, 0x1.b310e2p-99f, 0.0f, 0x1.ad42bap-124f, 0x1.520588p-8f,
     0x1.59f1cap-53f, 0x1.4cc91cp-90f, 0.0f, 0.0f, 0.0f, 0x1.44e98ap-37f,
     0x1.2e69aep-120f, 0.0f, 0x1.f827d6p-30f, 0.0f, 0x1.262c08p-108f, 0x1.ea5df4p-92f,
     0.0f, 0.0f, 0x1.5a1bf6p-47f, 0x1.3e62c8p-58f, 0.0f, 0x1.069f98p-124f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.7872eep-21f, 0x1.c2732cp-94f, 0.0f, 0x1.82dfc8p-10f,
     0x1.dedb1ep-29f, 0.0f, 0x1.c3de46p-103f, 0.0f, 0.0f, 0.0f, 0x1.6dc732p-94f,
     0x1.7b0e7cp-2f, 0x1.4437b8p-67f, 0.0f, 0.0f, 0.0f, 0x1.c5a704p-32f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.cb3ac4p-42f, 0x1.759dc2p-52f, 0.0f, 0x1.67427ep-100f,
     0.0f, 0x1.bed026p-54f, 0.0f, 0x1.86b5a6p-49f, 0.0f, 0.0f, 0x1.e856b2p-15f,
     0x1.475562p-102f, 0x1.510dfap-18f, 0.0f, 0.0f, 0x1.6bd76ep-39f, 0x1.360554p-93f,
     0.0f, 0x1.ef7426p-37f, 0x1.d9dd9ap-126f, 0.0f, 0.0f, 0x1.d6b8c4p-22f,
     0x1.10df14p-3f, 0x1.fc496p-95f, 0x1.e1e0e2p-54f, 0x1.ecaa9ep-67f,
     0x1.811798p-87f, 0x1.90bb5ep-121f, 0x1.23f778p-75f, 0x1.b8809ep-58f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4ae5d6p-123f, 0x1.942c98p-2f, 0.0f, 0x1.0d5506p-54f,
     0x1.4abef4p-114f, 0x1.495e7p-115f, 0.0f, 0.0f, 0.0f, 0x1.b628cep-110f, 0.0f,
     0.0f, 0x1.9b7f0ap-10f, 0x1.137e0cp-26f, 0.0f, 0x1.4989p-45f, 0x1.0f822ap-54f,
     0x1.4c635ap-49f, 0x1.071548p-14f, 0x1.ef146p-78f, 0.0f, 0x1.64f814p-19f,
     0x1.018d6cp-99f, 0x1.f5c3c6p-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e7a976p-53f,
     0x1.5740b2p-40f, 0x1.4f5924p-123f, 0.0f, 0.0f, 0.0f, 0x1.48d99cp-33f, 0.0f, 0.0f,
     0x1.c5cd06p-14f, 0x1.d255b6p-54f, 0.0f, 0x1.4f745ap-35f, 0.0f, 0x1.9781ep-38f,
     0x1.277f34p-63f, 0x1.a397c2p-13f, 0.0f, 0x1.1c442ap-90f, 0.0f, 0x1p0f,
     0x1.86043ep-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.01f4bap-87f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.485beep-113f, 0x1.19ee7cp-28f, 0x1.0d8beep-61f, 0.0f, 0x1.c1a522p-62f,
     0x1.29b1f2p-65f, 0.0f, 0x1.8e8c62p-96f, 0x1.f2ee8p-78f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.471ddep-80f, 0x1.093ff4p-17f, 0x1.29c814p-14f, 0.0f, 0.0f, 0x1.dd34f2p-96f,
     0x1.13344cp-3f, 0x1.1c341ep-95f, 0.0f, 0x1.2f63cap-63f, 0.0f, 0.0f,
     0x1.6e269cp-41f, 0x1.f1379cp-91f, 0.0f, 0.0f, 0.0f, 0x1.d68c86p-92f,
     0x1.008294p-98f, 0x1.b6f37p-62f, 0x1.f79cfap-114f, 0.0f, 0x1.5adcbep-23f, 0.0f,
     0.0f, 0x1.fbe422p-107f, 0x1.04f508p-10f, 0.0f, 0x1.f794c6p-99f, 0x1.876726p-16f,
     0x1.caa84ep-80f, 0.0f, 0x1.a9b82ep-114f, 0x1.303d8p-95f, 0x1.802afcp-106f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.273bb2p-114f, 0x1.e96cdp-4f, 0x1.f5fb0ep-94f,
     0x1.6f0e82p-37f, 0.0f, 0.0f, 0x1.47fddep-59f, 0x1.4f4e4cp-103f, 0x1.8df8ccp-15f,
     0x1.e15c8cp-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.16e568p-14f, 0.0f, 0x1.4054p-18f,
     0.0f, 0x1.03c3fcp-99f, 0x1.c96c46p-36f, 0.0f, 0x1.2b069p-111f, 0x1.0bf1aep-36f,
     0.0f, 0.0f, 0.0f, 0x1.574834p-61f, 0x1.42d7fcp-70f, 0.0f, 0x1.95540cp-70f,
     0x1.7bfe1ap-43f, 0.0f, 0.0f, 0.0f, 0x1.24417cp-13f, 0x1.bd13dep-96f, 0.0f,
     0x1.f53a06p-11f, 0.0f, 0x1.7a422ep-111f, 0x1.1eee2p-120f, 0x1.f1b882p-2f,
     0x1.946386p-74f, 0x1.ac36a6p-91f, 0x1.e1daf4p-3f, 0.0f, 0.0f, 0x1.39b89cp-38f,
     0x1.600ceep-21f, 0x1.b46c56p-39f, 0x1.1f2ed2p-55f, 0.0f, 0x1.82e212p-99f,
     0x1.6e655p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3139f8p-82f, 0.0f,
     0x1.b5de48p-15f, 0x1.66b43p-107f, 0.0f, 0x1.dd9576p-28f, 0x1.377f84p-29f, 0.0f,
     0x1.52b904p-1f, 0x1.df0008p-65f, 0x1.973f4cp-88f, 0x1.4cc34ap-67f, 0.0f, 0.0f,
     0.0f, 0x1.1bed36p-24f, 0.0f, 0x1.5e38cap-88f, 0.0f, 0x1.486b4cp-99f,
     0x1.d751bp-79f, 0x1.a69efep-94f, 0.0f, 0.0f, 0x1.264216p-90f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.337288p-1f, 0x1.ff3e1cp-81f, 0.0f, 0x1.f70d74p-104f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef_float32x4_t_2 global_bench_acc;
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
        Sleef_float32x4_t_2 local_acc;
        int32_t i;
        ml_float4_t tmp0;
        ml_float4_t tmp1;
        ml_float4_t tmp2;
        ml_float4_t tmp3;
        ml_float4_t tmp4;
        ml_float4_t tmp5;
        Sleef_float32x4_t_2 tmp6;
        int32_t tmp7;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1004));){
            ml_float4_t tmp0;
            Sleef_float32x4_t_2 tmp1;
            ml_float4_t tmp2;
            ml_float4_t tmp3;
            ml_float4_t tmp4;
            ml_float4_t tmp5;
            ml_float4_t tmp6;
            ml_float4_t tmp7;
            Sleef_float32x4_t_2 tmp8;
            int32_t tmp9;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_finz_modff4_kvx(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = local_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = local_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef_float32x4_t_2) {.x=tmp4, .y=tmp7});
            local_acc = tmp8;
            tmp9 = i + INT32_C(4);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = local_acc.x;
        tmp2 = tmp0 + tmp1;
        tmp3 = global_bench_acc.y;
        tmp4 = local_acc.y;
        tmp5 = tmp3 + tmp4;
        tmp6 = ((Sleef_float32x4_t_2) {.x=tmp2, .y=tmp5});
        global_bench_acc = tmp6;
        tmp7 = j + INT32_C(1);
        j = tmp7;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_finz_modff4_kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_modff4_kvx bench acc {.x=[%a, %a, %a, %a], .y=[%a, %a, %a, %a]}\n", global_bench_acc.x[0], global_bench_acc.x[1], global_bench_acc.x[2], global_bench_acc.x[3], global_bench_acc.y[0], global_bench_acc.y[1], global_bench_acc.y[2], global_bench_acc.y[3]);
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
