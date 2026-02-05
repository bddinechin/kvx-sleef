/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_fastsinf1_u3500purecfma.c --function \
 *     Sleef_fastsinf1_u3500purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile float external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0.0f, 0.0f, 0x1.5f36c4p-63f, 0.0f, 0.0f, 0.0f, 0x1.a916dap-100f, 0.0f,
     0x1.c959fcp-25f, 0x1.c6aeeep-43f, 0.0f, 0x1.69333ap-32f, 0.0f, 0x1.802392p-22f,
     0x1.463386p-17f, 0.0f, 0.0f, 0x1.4b2a14p-14f, 0.0f, 0.0f, 0.0f, 0x1.d5cf36p-4f,
     0x1.1866c8p-48f, 0.0f, 0x1.51878ep-6f, 0x1.03de7cp-56f, 0.0f, 0x1.e823bcp-78f,
     0x1.6cb0bcp-64f, 0x1.519dfap-79f, 0x1.051afep-6f, 0.0f, 0.0f, 0x1.0bef8cp-59f,
     0x1.79103cp-81f, 0.0f, 0x1.22336cp-40f, 0.0f, 0x1.cd444cp-29f, 0x1.2cce2ep-25f,
     0x1.742fc4p-26f, 0x1.fbfeb2p-55f, 0x1.a6e6f2p-80f, 0x1p0f, 0x1.4e4ee8p-100f,
     0x1.f0b03p-1f, 0x1.6f83bcp-13f, 0x1.0b9cdcp-97f, 0.0f, 0x1.396902p-97f,
     0x1.4f0fa4p-84f, 0x1.e987e6p-78f, 0x1.ea35ep-101f, 0.0f, 0x1.2b14b8p-122f, 0.0f,
     0x1.3aec6ap-42f, 0x1.f73c22p-119f, 0.0f, 0x1.1bba22p-81f, 0x1.21fe8ap-4f,
     0x1.6afafcp-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.850534p-124f, 0.0f,
     0x1.e59edep-115f, 0.0f, 0x1.9a102ep-85f, 0x1.6ba5d6p-98f, 0x1.7b5ca8p-79f, 0.0f,
     0x1.7e5a2cp-94f, 0x1.a35edcp-91f, 0.0f, 0x1.cd6a8ep-27f, 0.0f, 0.0f,
     0x1.3b9b0ap-6f, 0.0f, 0.0f, 0.0f, 0x1.8e579ap-84f, 0x1.df264cp-45f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a597e8p-47f, 0x1.772e94p-23f, 0.0f, 0.0f,
     0x1.cf4d8ap-7f, 0.0f, 0x1.6cc788p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e78d8cp-22f, 0.0f, 0.0f, 0x1.2fe96ep-102f, 0x1.f97bp-107f, 0x1.66f01ap-51f,
     0.0f, 0x1.10b44ep-30f, 0x1.d2058cp-113f, 0.0f, 0x1.0bb076p-68f, 0.0f, 0.0f,
     0x1.778b32p-25f, 0x1.7d517p-53f, 0.0f, 0.0f, 0.0f, 0x1.c7fa1ap-85f, 0.0f,
     0x1.774926p-76f, 0x1.30d4fap-41f, 0x1.85a03ep-7f, 0x1.e11384p-25f,
     0x1.e81064p-29f, 0.0f, 0x1.4dd234p-4f, 0.0f, 0x1.299eap-26f, 0x1.b81854p-70f,
     0.0f, 0.0f, 0x1.ff6b6cp-97f, 0x1.6d22eep-119f, 0x1.167208p-63f, 0.0f,
     0x1.922b14p-10f, 0.0f, 0x1.e69626p-64f, 0x1.6a51a8p-72f, 0.0f, 0.0f,
     0x1.5cbfep-108f, 0x1.8ae214p-30f, 0.0f, 0.0f, 0x1.588298p-9f, 0.0f,
     0x1.056b54p-39f, 0.0f, 0x1.c82d24p-96f, 0.0f, 0x1.4e1f64p-67f, 0.0f, 0.0f, 0.0f,
     0x1.533782p-37f, 0x1.20625p-112f, 0.0f, 0.0f, 0x1.db70cap-65f, 0x1.ab92bap-4f,
     0.0f, 0.0f, 0x1.768844p-98f, 0x1.40861ap-103f, 0x1.c212dcp-27f, 0.0f,
     0x1.4b0c3p-41f, 0x1.742b14p-51f, 0x1.83b64cp-95f, 0.0f, 0x1.9ca4f4p-15f,
     0x1.32eb76p-4f, 0x1.042e88p-74f, 0.0f, 0.0f, 0x1.1f6ae4p-52f, 0x1.5ba948p-42f,
     0x1.a4a23ap-76f, 0.0f, 0x1.2d4beap-91f, 0x1.e28d6cp-91f, 0x1.c0ccbap-99f,
     0x1.15308p-20f, 0x1.b5b07cp-57f, 0.0f, 0.0f, 0x1.3d84bcp-103f, 0.0f, 0.0f,
     0x1.a8ef5p-78f, 0.0f, 0.0f, 0x1.1be964p-42f, 0x1.04cc3ap-67f, 0x1.0b916ep-13f,
     0.0f, 0x1.8ca7a2p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c9bbcp-8f, 0.0f, 0.0f,
     0x1.d771a6p-103f, 0.0f, 0x1.0e9a7cp-39f, 0.0f, 0x1.0ab842p-125f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.edd16p-35f, 0.0f, 0x1.bcce3ep-125f, 0x1.46535cp-74f, 0.0f,
     0.0f, 0x1.949f06p-5f, 0.0f, 0x1.430682p-88f, 0.0f, 0x1.90fcd8p-27f,
     0x1.0e179p-80f, 0x1.370e7ap-97f, 0.0f, 0.0f, 0.0f, 0x1.081758p-78f, 0.0f,
     0x1.52c1fep-3f, 0x1.c983b8p-70f, 0x1.715daap-38f, 0.0f, 0x1.a7269ap-33f,
     0x1.6b22b6p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2dd8fep-55f, 0x1.2cc6fap-16f,
     0x1.26d7eep-124f, 0.0f, 0.0f, 0x1.07db0ep-125f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6461eep-67f, 0x1.61656ep-4f, 0x1.59d676p-58f, 0x1.d104d6p-90f,
     0x1.1f1836p-120f, 0x1.bb8aecp-9f, 0.0f, 0.0f, 0.0f, 0x1.c6820ep-105f,
     0x1.f617d2p-115f, 0.0f, 0x1.0c830cp-46f, 0x1.291b48p-69f, 0.0f, 0.0f,
     0x1.84f95cp-11f, 0x1.093414p-14f, 0x1.1b1892p-27f, 0x1.c9672p-119f,
     0x1.755c38p-4f, 0x1.55cccap-33f, 0.0f, 0x1.562664p-122f, 0.0f, 0x1.60aaa6p-94f,
     0.0f, 0.0f, 0x1.68b55p-105f, 0x1.92ad6cp-126f, 0.0f, 0x1.288a32p-50f,
     0x1.ad235p-62f, 0x1.e02126p-44f, 0.0f, 0x1.13bf2cp-65f, 0x1.81a77ap-41f,
     0x1.fe1934p-90f, 0.0f, 0.0f, 0x1.f6422ap-89f, 0.0f, 0x1.bbc27ap-45f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0e13d6p-63f, 0x1.e99dbep-103f, 0.0f, 0.0f,
     0.0f, 0x1.83a118p-107f, 0x1.96539p-95f, 0.0f, 0x1.4603d6p-19f, 0x1.ef5d9cp-33f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.af36cap-41f, 0x1.716e66p-25f, 0x1.822c98p-40f,
     0.0f, 0.0f, 0x1.ca7edep-28f, 0x1.990496p-81f, 0x1.7bccd2p-99f, 0.0f,
     0x1.3b9cfp-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.20fc0ap-68f,
     0x1.56c2d2p-104f, 0x1.5ff568p-46f, 0x1.21d638p-87f, 0x1.933368p-114f, 0.0f,
     0x1.6b8456p-60f, 0x1.854c6ap-27f, 0.0f, 0x1.5984d8p-76f, 0x1.e1768cp-29f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.db1d96p-52f, 0x1.093a64p-70f, 0x1.eff16p-116f,
     0x1.51a1p-38f, 0.0f, 0.0f, 0x1.fe18f4p-47f, 0.0f, 0x1.302f48p-116f,
     0x1.0c16dep-51f, 0.0f, 0.0f, 0x1.90322ap-73f, 0.0f, 0x1.e7d1dp-23f, 0.0f, 0.0f,
     0x1.2a752ep-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c7de4p-56f, 0x1.fe7966p-126f,
     0x1.1a3b7cp-33f, 0x1.5c0b9cp-71f, 0.0f, 0.0f, 0x1.c06c54p-76f, 0.0f, 0.0f,
     0x1.f4e13cp-122f, 0.0f, 0x1.c65a94p-102f, 0x1.02c97p-117f, 0x1.49c166p-61f,
     0x1.611484p-38f, 0x1.b16966p-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a09c22p-96f,
     0x1.f2e5e6p-57f, 0.0f, 0x1.b302eep-104f, 0.0f, 0x1.a2dc5ep-19f, 0x1.76898cp-71f,
     0x1.0e4954p-52f, 0x1.77ec62p-86f, 0.0f, 0.0f, 0x1.79715p-38f, 0x1.b1a634p-9f,
     0.0f, 0.0f, 0x1.a37296p-25f, 0.0f, 0.0f, 0x1.8e6b94p-78f, 0.0f, 0.0f,
     0x1.31f76ep-11f, 0x1.f3fd72p-21f, 0x1.0f0f72p-82f, 0.0f, 0.0f, 0.0f,
     0x1.5d0ea8p-55f, 0x1.0db474p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d70a8cp-47f,
     0x1.55f2b8p-48f, 0.0f, 0.0f, 0x1.05c6bep-107f, 0.0f, 0.0f, 0x1.86271ep-10f, 0.0f,
     0x1.cb5c9cp-76f, 0.0f, 0.0f, 0.0f, 0x1.23873cp-2f, 0.0f, 0x1.f96bdp-8f,
     0x1.3fcadp-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7a75cap-38f, 0x1.f467dap-87f,
     0x1.d4658ap-42f, 0x1.d4ef2ep-68f, 0x1.8fb1a6p-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.54de4p-26f, 0.0f, 0x1.29c07cp-74f, 0x1.eaa89cp-51f, 0.0f, 0x1.b72028p-23f,
     0x1.c36f78p-59f, 0x1.cb92b2p-59f, 0x1.65a2d4p-62f, 0x1.b734c2p-116f,
     0x1.4824d8p-69f, 0.0f, 0.0f, 0x1.cb471ep-16f, 0.0f, 0.0f, 0.0f, 0x1.833faep-15f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.931c48p-51f, 0x1.02d226p-64f, 0.0f, 0x1.f0f8b2p-21f,
     0x1.c9b58ep-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9c8894p-33f, 0.0f, 0.0f, 0.0f,
     0x1.0b1124p-100f, 0.0f, 0.0f, 0x1.135ca8p-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.7cd8bep-101f, 0.0f, 0x1.222fdep-25f, 0x1.72399cp-6f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.52c26ap-109f, 0x1.38dfe8p-112f, 0x1.6dc456p-4f,
     0.0f, 0x1.27aa52p-81f, 0.0f, 0x1.e77944p-5f, 0x1.0e009ep-66f, 0.0f,
     0x1.fd2fcep-82f, 0x1.8580ccp-118f, 0x1.879664p-46f, 0x1.343766p-101f, 0.0f,
     0x1.5ed4a4p-71f, 0x1.e45a86p-99f, 0x1.26fbb4p-20f, 0.0f, 0x1.e239fap-122f, 0.0f,
     0x1.cee00ep-124f, 0x1.340d6ep-63f, 0x1.58f604p-99f, 0.0f, 0x1.06eb28p-75f,
     0x1.61c468p-20f, 0.0f, 0.0f, 0x1.1b4262p-40f, 0x1.9aa84cp-8f, 0.0f,
     0x1.8e0486p-88f, 0.0f, 0x1.e1826p-43f, 0x1.7b82ecp-91f, 0.0f, 0.0f,
     0x1.6ebcacp-33f, 0x1.3721dcp-50f, 0x1.b2fa14p-17f, 0.0f, 0.0f, 0x1.39d9cap-15f,
     0x1.80218p-22f, 0.0f, 0.0f, 0x1.94cd18p-98f, 0x1.cd90ap-1f, 0.0f,
     0x1.88931ap-48f, 0.0f, 0x1.e63a24p-12f, 0.0f, 0.0f, 0x1.1c5da2p-120f,
     0x1.e17b14p-80f, 0.0f, 0.0f, 0x1.b20e68p-77f, 0.0f, 0.0f, 0.0f, 0x1.20a1dp-75f,
     0x1.1fa7dep-69f, 0.0f, 0.0f, 0x1.8b0e8cp-43f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6fa54ep-39f, 0.0f, 0.0f, 0x1.e659dp-43f, 0.0f, 0x1.45a8eep-72f,
     0x1.1a54e4p-98f, 0x1.ed569p-99f, 0.0f, 0.0f, 0x1.a376f8p-43f, 0.0f,
     0x1.4cb674p-25f, 0.0f, 0x1.b1f492p-73f, 0x1.ab8496p-91f, 0.0f, 0x1.45276ap-1f,
     0x1.ea2cbcp-69f, 0x1.b1291cp-9f, 0x1.fcf5d4p-74f, 0x1.e4f5e6p-63f, 0.0f, 0.0f,
     0x1.db0edep-78f, 0x1.9efd86p-56f, 0x1.c622f4p-82f, 0x1.2e3c18p-44f, 0.0f, 0.0f,
     0.0f, 0x1.d9947cp-9f, 0x1.b62decp-77f, 0.0f, 0x1.1a14ep-64f, 0x1.984e1ap-91f,
     0.0f, 0x1.dc2672p-126f, 0x1.b34e44p-2f, 0.0f, 0x1.60eb2ep-102f, 0x1.d874a8p-113f,
     0.0f, 0x1.599c4ep-34f, 0.0f, 0x1.442dccp-60f, 0.0f, 0x1.9d154ap-113f, 0.0f,
     0x1.dfd942p-96f, 0x1.f590f2p-3f, 0.0f, 0.0f, 0x1.0843d8p-29f, 0x1.112d74p-29f,
     0x1.01a63ep-31f, 0x1.196cap-101f, 0.0f, 0x1.0830b2p-73f, 0.0f, 0x1.36a8aep-99f,
     0x1.5bf268p-10f, 0x1.107a74p-26f, 0.0f, 0.0f, 0x1.b132cap-74f, 0x1.60afdcp-46f,
     0x1.9109fep-120f, 0.0f, 0x1.ab8944p-92f, 0.0f, 0.0f, 0.0f, 0x1.f2c6fap-24f, 0.0f,
     0x1.9163bp-108f, 0.0f, 0x1.ff3e28p-124f, 0x1p0f, 0x1.ca041cp-13f, 0.0f,
     0x1.83e38cp-27f, 0.0f, 0x1.be3874p-98f, 0.0f, 0x1.badf5cp-42f, 0x1.f1fccep-44f,
     0x1.7d43dp-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6dfe52p-18f,
     0x1.60d8b6p-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.764532p-72f, 0x1.b2e056p-63f,
     0x1.4a0dd6p-45f, 0x1.4f2c8cp-8f, 0x1.bdcp-90f, 0x1.77e574p-91f, 0x1.793548p-2f,
     0x1.b79a2ap-64f, 0.0f, 0.0f, 0x1.ba2034p-77f, 0x1.a497c2p-21f, 0x1.84851cp-5f,
     0x1.fa59c6p-107f, 0.0f, 0x1.7d65ecp-119f, 0x1.b7fbc2p-65f, 0x1.fe084p-87f,
     0x1.9519f2p-114f, 0x1.b15214p-33f, 0.0f, 0x1.d667b2p-8f, 0x1.0197d2p-84f,
     0x1.47b4f4p-49f, 0x1.751f38p-53f, 0.0f, 0.0f, 0x1.c3d13ep-54f, 0.0f, 0.0f, 0.0f,
     0x1.79205ap-100f, 0x1.f1a40ep-93f, 0x1.785322p-96f, 0x1.555c5ap-83f, 0.0f,
     0x1.5e702ap-34f, 0x1.f465e2p-104f, 0x1.3b8fep-42f, 0.0f, 0.0f, 0x1.960a0ep-99f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.2c36c8p-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2386p-45f, 0x1.401c08p-24f, 0x1.8b183ap-70f, 0x1.85feep-91f, 0x1.bde95p-54f,
     0.0f, 0x1.a7ff3ep-48f, 0x1.5bb1b8p-112f, 0.0f, 0.0f, 0x1.1fe4e6p-84f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.7f274p-78f, 0x1.b1fc68p-23f, 0.0f, 0.0f, 0.0f, 0x1.25016cp-54f,
     0x1.93892p-13f, 0.0f, 0x1.e1f60ep-97f, 0.0f, 0x1.e7314p-109f, 0.0f,
     0x1.0f201cp-52f, 0.0f, 0x1.457c22p-124f, 0x1.24fc14p-8f, 0x1.d20e9p-124f, 0.0f,
     0x1.7dfda2p-120f, 0.0f, 0.0f, 0.0f, 0x1.e1153cp-90f, 0.0f, 0.0f, 0x1.541edcp-66f,
     0.0f, 0x1.f01c82p-60f, 0x1.7d6c2p-23f, 0.0f, 0x1.d962a8p-78f, 0.0f, 0.0f, 0.0f,
     0x1.ce474ep-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a45d18p-113f, 0x1.0bf5ccp-18f,
     0x1.daed0ap-98f, 0.0f, 0x1.d0b3ecp-94f, 0x1.2ce5cep-2f, 0.0f, 0.0f,
     0x1.06992cp-6f, 0x1.8d7568p-87f, 0x1.b9958ap-40f, 0.0f, 0.0f, 0x1.97645ep-61f,
     0x1.15e26ap-111f, 0x1.937816p-124f, 0x1.50eb1p-73f, 0x1.35b08cp-15f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.67a322p-12f, 0x1.e534ccp-45f, 0x1.9685acp-44f, 0x1.bb4122p-24f,
     0x1.7f345p-41f, 0x1.43fd22p-55f, 0x1.001facp-104f, 0.0f, 0x1.7fb8e6p-75f,
     0x1.46f194p-115f, 0x1.728fc2p-122f, 0.0f, 0.0f, 0.0f, 0x1.ad96d4p-31f, 0.0f,
     0.0f, 0.0f, 0x1.44c5e2p-76f, 0.0f, 0.0f, 0.0f, 0x1.a1b87p-11f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.22b90ap-74f, 0x1.4c388cp-6f, 0x1.0161a4p-55f,
     0x1.49a44cp-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8e76f8p-68f, 0x1.616cd2p-104f, 0.0f,
     0x1.44d52cp-49f, 0x1.6de922p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.95de58p-79f, 0.0f,
     0x1.0e0f58p-26f, 0.0f, 0x1.5768c8p-39f, 0.0f, 0x1.72092p-102f, 0.0f,
     0x1.6028bp-48f, 0.0f, 0.0f, 0x1.86034p-4f, 0.0f, 0x1.764e96p-58f, 0.0f,
     0x1.19c69ap-126f, 0x1.27a42p-121f, 0.0f, 0x1.1a30e2p-74f, 0x1.62caecp-50f, 0.0f,
     0.0f, 0.0f, 0x1.fe17cp-38f, 0x1.686aecp-56f, 0x1.418d68p-37f, 0x1.c5c2c6p-8f,
     0x1.4e0a74p-81f, 0.0f, 0.0f, 0x1.3ad78ep-66f, 0x1.b25e46p-11f, 0.0f,
     0x1.3cc59ep-124f, 0.0f, 0x1.dec09ep-19f, 0x1.d01c5ep-20f, 0.0f, 0x1.f8d60ap-46f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.2a2e16p-53f, 0.0f, 0x1.ad639p-2f, 0.0f, 0.0f, 0.0f,
     0x1.28409p-121f, 0x1.ed7fd4p-18f, 0x1.83952ap-57f, 0x1p0f, 0x1.b39f7cp-25f, 0.0f,
     0x1.18c432p-23f, 0x1.89f23p-19f, 0x1.c67cb8p-88f, 0x1.6b2092p-91f, 0.0f,
     0x1.a9097ap-51f, 0x1.0f5c7p-98f, 0x1.e218f2p-89f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.950c72p-88f, 0x1.2ec6ep-111f, 0x1.c28804p-62f, 0.0f,
     0x1.34db84p-46f, 0.0f, 0x1.4428d4p-92f, 0x1.d16284p-23f, 0.0f, 0.0f,
     0x1.6698f6p-79f, 0.0f, 0.0f, 0.0f, 0x1.182b5p-79f, 0x1.11f356p-47f, 0.0f,
     0x1.7b80dap-111f, 0.0f, 0.0f, 0.0f, 0x1.b16436p-49f, 0x1.33e698p-12f,
     0x1.80841ap-23f, 0x1.e9d784p-1f, 0x1.618c62p-20f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e087eep-36f, 0.0f, 0.0f, 0.0f, 0x1.9071b4p-55f, 0x1.c40d2cp-30f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d603f2p-93f, 0.0f, 0.0f, 0x1.55fd54p-66f, 0.0f, 0.0f, 0.0f,
     0x1.370b1cp-48f, 0.0f, 0.0f, 0.0f, 0x1.3f5d62p-1f, 0.0f, 0x1.f5e306p-7f,
     0x1.79bcfp-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.209ddcp-10f, 0.0f, 0.0f
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
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = 0.0f;
    tmp = __cos_counter_num(0);
    timer = tmp;
    j = INT32_C(0);

    for (;(j < INT32_C(10000));){
        float bench_acc;
        int32_t i;
        float tmp0;
        int32_t tmp1;

        i = INT32_C(0);
        bench_acc = 0.0f;

        for (;(i < INT32_C(1001));){
            float tmp0;
            float tmp1;
            float tmp2;
            int32_t tmp3;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_fastsinf1_u3500purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = bench_acc + tmp1;
            bench_acc = tmp2;
            tmp3 = i + INT32_C(1);
            i = tmp3;
        }
        tmp0 = global_bench_acc + bench_acc;
        global_bench_acc = tmp0;
        tmp1 = j + INT32_C(1);
        j = tmp1;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_fastsinf1_u3500purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_fastsinf1_u3500purecfma bench acc %a\n", global_bench_acc);
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
