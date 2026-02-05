/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_coshf1_u35purecfma.c --function \
 *     Sleef_finz_coshf1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.3a6d02p-74f, 0.0f, 0x1.67947p-30f, 0x1.1a09b2p-40f, 0x1.27225cp-78f,
     0x1.a2cc2cp-28f, 0x1.df0a3p-74f, 0.0f, 0.0f, 0.0f, 0x1.1c7ed6p-5f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.5da786p-36f, 0.0f, 0x1.5cc234p-117f, 0x1.edd494p-86f, 0.0f,
     0x1.a21fdcp-22f, 0.0f, 0.0f, 0.0f, 0x1.93768ap-75f, 0x1.866346p-112f,
     0x1.15e056p-113f, 0x1.9b6698p-88f, 0.0f, 0x1.63f49ap-96f, 0.0f, 0x1.c17702p-75f,
     0.0f, 0.0f, 0x1.cc7878p-35f, 0.0f, 0.0f, 0x1.03c7e2p-124f, 0x1.68c21ep-44f,
     0x1.df6afcp-58f, 0.0f, 0x1.e1482ep-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.659d78p-98f, 0.0f, 0x1.710782p-46f, 0.0f, 0.0f, 0.0f, 0x1.8aa89ep-69f,
     0.0f, 0.0f, 0x1.c170cp-114f, 0x1.6fc744p-103f, 0.0f, 0x1.ae5e04p-51f,
     0x1.7a4398p-17f, 0.0f, 0.0f, 0x1.0d325ep-10f, 0.0f, 0x1.ce0944p-111f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4111c6p-39f, 0.0f, 0x1.363f0cp-83f, 0.0f, 0x1.9227acp-95f,
     0x1.da0d78p-120f, 0.0f, 0x1.374b32p-114f, 0.0f, 0x1.5aa51cp-72f, 0x1.5e548cp-26f,
     0.0f, 0x1.b51672p-108f, 0x1.e289fap-85f, 0.0f, 0.0f, 0x1.445748p-9f, 0.0f,
     0x1.ea16bep-84f, 0x1.1cad7ap-87f, 0.0f, 0.0f, 0.0f, 0x1.419b8cp-94f, 0.0f, 0.0f,
     0x1.a4934p-104f, 0.0f, 0.0f, 0.0f, 0x1.10d0e6p-76f, 0.0f, 0x1.07fd72p-13f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d37248p-47f, 0x1.dbbfa2p-100f, 0x1.63fa08p-112f,
     0x1.b71a26p-70f, 0x1.25cb68p-117f, 0x1.8aaedp-79f, 0.0f, 0.0f, 0x1.9871bep-113f,
     0.0f, 0x1.62732ep-94f, 0.0f, 0.0f, 0x1.daba3p-41f, 0x1.a9963ep-48f,
     0x1.6afe3cp-33f, 0.0f, 0.0f, 0x1.9c4bd2p-118f, 0x1.c73aecp-59f, 0x1.fa4c8cp-57f,
     0x1.16bfdap-51f, 0.0f, 0x1.518996p-116f, 0.0f, 0x1.3d0494p-100f, 0x1.a80232p-56f,
     0x1.d80824p-1f, 0.0f, 0x1.c5827ep-90f, 0x1.a90894p-62f, 0x1.88117ap-121f, 0.0f,
     0.0f, 0x1.bce78ap-82f, 0x1.afd254p-99f, 0x1.4104c4p-106f, 0.0f, 0x1.fc9ed8p-65f,
     0.0f, 0x1.a523d8p-15f, 0.0f, 0x1.bd062ap-41f, 0x1.725136p-104f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b56242p-19f, 0x1.94beeep-21f, 0x1.775bfp-91f, 0x1.fbfdeap-6f, 0.0f,
     0x1.99957p-31f, 0.0f, 0.0f, 0.0f, 0x1.9ca712p-86f, 0.0f, 0x1.b7d816p-47f, 0.0f,
     0.0f, 0.0f, 0x1.9bd28p-65f, 0x1.c4080cp-30f, 0.0f, 0x1.3e3dfcp-16f, 0.0f, 0.0f,
     0x1.458eccp-100f, 0x1.767beap-82f, 0.0f, 0x1.002df8p-77f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.4fb8bp-16f, 0x1.4a2b8cp-53f, 0.0f, 0x1.30277ep-86f, 0x1.85ac88p-17f,
     0.0f, 0x1.1647a6p-115f, 0x1.a589d4p-107f, 0x1.a4504cp-26f, 0x1.4d55e6p-125f,
     0.0f, 0.0f, 0x1.72bcfcp-35f, 0.0f, 0.0f, 0.0f, 0x1.cffecep-115f, 0x1.c523aap-79f,
     0x1.365d34p-117f, 0x1.f2b8bp-54f, 0x1.d2a406p-108f, 0.0f, 0.0f, 0x1.2853bcp-33f,
     0x1.866e1cp-13f, 0.0f, 0x1.743978p-25f, 0.0f, 0.0f, 0x1.c4e32p-102f, 0.0f,
     0x1.659aa4p-15f, 0.0f, 0x1.2abd4p-17f, 0x1.3461bp-47f, 0x1.48b4bp-12f, 0.0f,
     0.0f, 0x1.d3314p-46f, 0x1.c64922p-5f, 0x1.74bc2ap-41f, 0x1.e9d7p-57f,
     0x1.0ba79ep-62f, 0x1.a1649cp-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f,
     0x1.099a3ep-5f, 0.0f, 0.0f, 0x1.c3412ep-22f, 0.0f, 0x1.1758f2p-21f, 0.0f,
     0x1.d3a62cp-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.70c738p-91f, 0.0f, 0x1.ee3ed4p-14f,
     0.0f, 0x1.93d70ap-113f, 0x1.d07fd4p-121f, 0x1.5de9bp-15f, 0x1.b5be3p-85f,
     0x1.553722p-126f, 0x1.370bcp-101f, 0.0f, 0.0f, 0.0f, 0x1.898ba8p-45f,
     0x1.c77122p-119f, 0.0f, 0x1.979a74p-53f, 0.0f, 0.0f, 0x1.301352p-4f, 0.0f, 0.0f,
     0x1.7b95fap-84f, 0x1.828238p-12f, 0x1.3169fp-83f, 0x1.683f78p-107f, 0.0f,
     0x1.8b7752p-10f, 0x1.be85e6p-92f, 0.0f, 0.0f, 0x1.1fe24ap-41f, 0x1.1877fep-65f,
     0x1.ae7416p-2f, 0x1.021bd8p-30f, 0.0f, 0.0f, 0x1.5139dp-52f, 0x1.5b0234p-62f,
     0.0f, 0.0f, 0.0f, 0x1.e3d83p-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.38b20ep-21f,
     0x1.aec7a8p-111f, 0.0f, 0x1.0f5a28p-84f, 0x1.8cc342p-36f, 0.0f, 0x1.452542p-120f,
     0x1.51a202p-88f, 0.0f, 0.0f, 0x1.2be6d6p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.01f3f8p-27f, 0x1.a9520ap-11f, 0.0f, 0x1.f43776p-118f, 0x1.cbe5c4p-71f, 0.0f,
     0.0f, 0x1.7af04ap-48f, 0.0f, 0x1.debf54p-70f, 0.0f, 0x1.d48088p-89f, 0.0f,
     0x1.2fb38cp-126f, 0.0f, 0x1.0211cp-43f, 0.0f, 0x1.eb4df4p-51f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b3bfe6p-57f, 0.0f, 0x1p0f, 0.0f, 0x1.fb5e76p-25f,
     0x1.2c03ccp-98f, 0x1.70bc48p-105f, 0x1.512c46p-82f, 0.0f, 0x1.43ffc4p-77f,
     0x1.9bd9dp-109f, 0.0f, 0x1.db623ap-71f, 0x1.75ce92p-65f, 0x1.196ed4p-83f,
     0x1.0aebbp-59f, 0x1.823828p-92f, 0x1.e958e8p-119f, 0.0f, 0.0f, 0x1.bf3796p-90f,
     0x1.ba1ebcp-5f, 0x1.f71428p-37f, 0.0f, 0.0f, 0x1.e97836p-51f, 0x1.865cf8p-3f,
     0.0f, 0x1.43a958p-125f, 0x1.7b8ce4p-5f, 0x1.480a22p-18f, 0.0f, 0.0f,
     0x1.24e782p-20f, 0.0f, 0x1.f680dcp-81f, 0x1.40d0eap-2f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.89b5f2p-96f, 0x1.37196p-117f, 0x1.aecef8p-27f, 0x1.96b2e4p-7f, 0.0f,
     0.0f, 0x1.1032cep-62f, 0x1.d46c4cp-5f, 0.0f, 0x1.5c981cp-74f, 0.0f, 0.0f,
     0x1.0defcp-83f, 0x1.cd043ap-96f, 0.0f, 0x1.7c731ap-2f, 0x1.a4046p-78f, 0.0f,
     0.0f, 0x1.6a297cp-56f, 0.0f, 0.0f, 0.0f, 0x1.33fa5ap-92f, 0.0f, 0x1.58a6eep-74f,
     0.0f, 0.0f, 0x1.3358bcp-120f, 0x1.f51f22p-47f, 0.0f, 0x1.83907cp-18f,
     0x1.42fd3ap-72f, 0x1.678548p-101f, 0x1.df09d8p-88f, 0x1.3129fcp-56f, 0.0f,
     0x1.a81902p-40f, 0.0f, 0x1.2bf02p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fcc1f4p-15f, 0x1.b290d4p-72f, 0.0f, 0x1.04bcbap-10f, 0x1.fe61bep-67f, 0.0f,
     0x1.21b218p-114f, 0x1.b8e81cp-5f, 0x1.54f038p-17f, 0.0f, 0x1.ee6a6p-44f,
     0x1.fb5118p-78f, 0x1.8bb0a2p-58f, 0.0f, 0x1.f22b6p-126f, 0.0f, 0x1.7c6dfap-93f,
     0x1.797e4ep-10f, 0x1.7856fep-112f, 0.0f, 0x1.921454p-37f, 0.0f, 0.0f,
     0x1.da2ddp-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cae788p-24f, 0x1.dc62dcp-68f,
     0x1.a0a68ep-80f, 0.0f, 0x1.ed992p-88f, 0x1.dc7776p-33f, 0.0f, 0x1.737edap-12f,
     0.0f, 0.0f, 0.0f, 0x1.60a0bcp-61f, 0x1.5fe0c6p-73f, 0x1.8dd3b8p-4f, 0.0f,
     0x1.11720cp-125f, 0.0f, 0.0f, 0.0f, 0x1.3025a4p-2f, 0x1.7633cap-35f, 0.0f,
     0x1.8148e2p-46f, 0x1.b925acp-23f, 0x1.42c04cp-78f, 0.0f, 0.0f, 0x1.de797cp-81f,
     0.0f, 0.0f, 0x1.6d96a8p-13f, 0.0f, 0.0f, 0x1.e8d6e2p-41f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7631p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.379508p-27f,
     0.0f, 0x1.184dc4p-16f, 0.0f, 0x1.7f6ecp-46f, 0.0f, 0x1.dd022cp-50f,
     0x1.a0825cp-59f, 0x1.422618p-73f, 0x1.35c534p-87f, 0x1.64b96ep-123f, 0.0f,
     0x1.c65d32p-71f, 0x1.103672p-12f, 0x1.b2227cp-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bbb386p-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.895f74p-49f, 0.0f,
     0x1.dc213cp-99f, 0x1.ecfb6p-44f, 0.0f, 0x1.fae57ap-76f, 0.0f, 0x1.47b9fep-80f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.81784ep-93f, 0x1.2dbdeap-17f, 0.0f, 0.0f, 0.0f,
     0x1.54af58p-79f, 0x1p0f, 0x1.6d2b32p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4bc2dp-51f,
     0x1.536f5p-70f, 0x1.2c4a5p-55f, 0x1.6ec36ap-4f, 0x1.1748d4p-92f, 0.0f, 0.0f,
     0x1.3ed584p-95f, 0x1.68864ep-68f, 0x1.c2c6dep-27f, 0.0f, 0.0f, 0.0f, 0x1p0f,
     0.0f, 0x1.238574p-20f, 0.0f, 0x1.82cf2p-51f, 0.0f, 0x1.4467fep-59f,
     0x1.ead85ap-117f, 0.0f, 0.0f, 0.0f, 0x1.9cfe84p-57f, 0x1.68349ap-59f,
     0x1.b47ab8p-9f, 0x1.802c56p-110f, 0x1.4d52dcp-9f, 0.0f, 0.0f, 0.0f,
     0x1.c2a2ecp-117f, 0.0f, 0x1.9092c2p-3f, 0x1.21fbb6p-43f, 0x1.706bdp-115f,
     0x1.14bb38p-124f, 0x1.447a24p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.03176ep-57f,
     0.0f, 0.0f, 0.0f, 0x1.0d7b14p-116f, 0.0f, 0x1.9276e8p-64f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.4448d6p-97f, 0.0f, 0.0f, 0.0f, 0x1.3c7378p-23f, 0x1.182586p-74f,
     0x1.2a978p-116f, 0.0f, 0.0f, 0x1.7571d4p-93f, 0x1.c2d98p-97f, 0x1.e8aa3ap-2f,
     0x1.db7d8ep-113f, 0x1.d6ef1cp-65f, 0x1.bacf8p-7f, 0.0f, 0.0f, 0.0f,
     0x1.4a62ecp-16f, 0x1.f9e042p-124f, 0.0f, 0x1.1cfc68p-90f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b098dep-72f, 0x1.69cfp-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d460eap-82f, 0.0f,
     0.0f, 0x1.8b7954p-119f, 0.0f, 0x1.fb969ep-20f, 0x1.337952p-6f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.602ee4p-86f, 0x1.93c11p-44f, 0x1.b98314p-38f, 0x1.96307ap-96f,
     0x1.1987f4p-70f, 0.0f, 0x1.97004p-67f, 0x1.31762ap-25f, 0x1.ecce9ap-72f,
     0x1.176fcep-83f, 0x1.884984p-74f, 0x1.0692d2p-52f, 0x1.b7165ep-87f, 0.0f, 0.0f,
     0x1.3baae4p-64f, 0x1.de07bap-16f, 0x1.1229bcp-26f, 0.0f, 0x1.2772ap-84f, 0.0f,
     0x1.8d46eep-56f, 0x1.d7de66p-28f, 0x1.9727fcp-41f, 0x1.7d5f16p-66f,
     0x1.a99a16p-88f, 0.0f, 0.0f, 0x1.946dbep-48f, 0.0f, 0.0f, 0x1.c53232p-85f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.fbfb84p-107f, 0x1.717a78p-16f, 0x1.cf1d3p-21f,
     0x1.ba593ap-47f, 0.0f, 0.0f, 0x1.dff218p-55f, 0x1.6dbfaap-34f, 0x1.87f214p-55f,
     0x1.065f9ep-121f, 0x1.7377dp-86f, 0.0f, 0x1.5b0656p-12f, 0.0f, 0x1.b04e02p-108f,
     0x1.cac9a4p-2f, 0x1.efba0ap-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.964abap-95f, 0.0f, 0x1.4a6bp-120f, 0x1.2ee098p-8f, 0x1.50cbp-44f, 0.0f,
     0x1.5f12c4p-97f, 0x1.2fa698p-13f, 0.0f, 0x1.d4cbf6p-89f, 0.0f, 0x1.ad8deep-19f,
     0x1.2f6c66p-19f, 0x1.0d6f52p-71f, 0.0f, 0x1.16a8d6p-23f, 0x1.3b99dp-19f,
     0x1.f882aap-97f, 0x1.55e91cp-2f, 0.0f, 0x1.476312p-72f, 0x1.23ee1cp-44f, 0.0f,
     0.0f, 0x1.f50692p-63f, 0x1.07ca04p-58f, 0x1.9b684ap-109f, 0x1.31a93p-110f,
     0x1.0fea4ep-110f, 0.0f, 0.0f, 0x1.38bbccp-99f, 0.0f, 0x1.f267dp-71f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3a56c6p-48f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6f3f82p-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8cf752p-58f, 0.0f, 0.0f, 0.0f,
     0x1.ee624cp-50f, 0x1.dabc52p-81f, 0x1.4f473ep-32f, 0x1.33365ep-99f, 0.0f, 0.0f,
     0.0f, 0x1.861a74p-22f, 0x1.6d1882p-2f, 0x1.9fd4dep-46f, 0.0f, 0.0f,
     0x1.9f5042p-25f, 0x1.c6a8aep-104f, 0x1.c91d8p-42f, 0x1.ef6c18p-102f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c2155ep-62f, 0x1.61250ep-7f, 0.0f, 0x1.31205ep-5f, 0.0f,
     0x1.977becp-29f, 0.0f, 0x1.2a212cp-42f, 0x1.f225f6p-21f, 0.0f, 0.0f,
     0x1.07f6f4p-30f, 0.0f, 0.0f, 0.0f, 0x1.4a0b9p-45f, 0x1.98301ap-85f, 0.0f, 0.0f,
     0x1.3c0f8ap-12f, 0.0f, 0x1.36b14cp-13f, 0.0f, 0.0f, 0x1.9ef61p-121f,
     0x1.a0b958p-125f, 0x1.a41566p-39f, 0.0f, 0.0f, 0.0f, 0x1.7915c8p-81f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.98d4f6p-103f, 0x1.299188p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.4de0a8p-123f, 0x1.58871ap-39f, 0x1.edc2d8p-38f, 0.0f, 0x1.66349cp-90f,
     0x1.db928p-87f, 0.0f, 0x1.a03ea8p-86f, 0.0f, 0x1.508b66p-50f, 0.0f, 0.0f,
     0x1.3340eap-39f, 0.0f, 0x1.10336ep-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2f629ep-81f, 0.0f,
     0x1.ed5c6ap-97f, 0.0f, 0.0f, 0.0f, 0x1.0257eep-112f, 0x1.9ded24p-81f, 0.0f,
     0x1.eb3f3p-101f, 0.0f, 0x1.ff9e56p-72f, 0x1.27e2c4p-50f, 0x1.272f98p-39f,
     0x1.31771ap-34f, 0x1.48e6eep-76f, 0x1.5b4074p-14f, 0x1.2b223ep-4f,
     0x1.c8c55ap-102f, 0.0f, 0.0f, 0.0f, 0x1.1541e8p-76f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2fc5cp-8f, 0x1.a4550ep-24f, 0.0f, 0x1.88402cp-76f, 0x1.f5db44p-117f, 0.0f,
     0.0f, 0.0f, 0x1.22ffp-53f, 0.0f, 0x1.93825p-7f, 0x1.e9e206p-126f,
     0x1.5143b2p-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eac574p-109f, 0.0f, 0.0f,
     0x1.4a2f2p-89f, 0.0f, 0x1.db8054p-26f, 0.0f, 0x1.df10d6p-82f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.dd57fcp-93f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.8b0e3p-35f, 0x1.e22e88p-7f,
     0.0f, 0.0f, 0.0f, 0x1.1b6ff6p-120f, 0x1.5230e8p-102f, 0x1.8ba8d4p-113f, 0.0f,
     0.0f, 0x1.7023bap-32f, 0.0f, 0.0f, 0x1.9f956ep-78f, 0x1.4e3a54p-34f, 0.0f, 0.0f,
     0.0f, 0x1.6ef0dep-97f, 0x1.f3f3b6p-125f, 0.0f, 0.0f, 0x1.eeee08p-83f, 0.0f, 0.0f,
     0.0f, 0x1.44f144p-94f, 0x1.e3ad58p-115f, 0x1.79bb1p-43f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7a356p-29f, 0x1.092daap-46f, 0.0f, 0x1.ed8e5ap-29f, 0x1.311eaap-55f, 0.0f,
     0x1.272fb4p-8f, 0.0f, 0.0f, 0x1.c46cd2p-68f, 0.0f, 0x1.154614p-27f, 0.0f, 0.0f,
     0x1.d5ff6ap-33f, 0.0f, 0x1.64fcfep-12f, 0x1.2fe504p-92f, 0x1.80e8b8p-64f,
     0x1.230a22p-14f, 0.0f, 0.0f, 0x1.97132p-86f, 0x1.dcc29cp-69f, 0x1.1f2978p-116f,
     0x1.526caep-46f, 0x1.e4062ep-28f, 0.0f, 0x1.568fe8p-54f, 0x1.a510acp-39f, 0.0f,
     0.0f, 0x1.5eeafp-101f, 0.0f, 0.0f, 0x1.301d36p-120f, 0x1.869eb8p-109f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.4f5908p-47f, 0x1.f1e5fp-12f, 0.0f, 0.0f, 0.0f,
     0x1.7e1734p-121f, 0.0f, 0x1.8f7d6p-22f
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
            tmp1 = Sleef_finz_coshf1_u35purecfma(tmp0);
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
    printf("Sleef_finz_coshf1_u35purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_coshf1_u35purecfma bench acc %a\n", global_bench_acc);
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
