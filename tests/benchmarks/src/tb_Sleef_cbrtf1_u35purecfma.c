/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_cbrtf1_u35purecfma.c --function \
 *     Sleef_cbrtf1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.c68848p-53f, 0.0f, 0.0f, 0.0f, 0x1.ece2f4p-20f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.26e2cep-46f, 0x1.ef23b6p-67f, 0x1.e1a4e6p-99f, 0.0f,
     0x1.2c0c42p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.68f44ap-44f, 0.0f, 0x1.ae3596p-49f,
     0x1.ef4108p-72f, 0x1.27f5f6p-30f, 0.0f, 0x1.c4b84p-105f, 0.0f, 0x1.c874ep-81f,
     0x1.df7322p-22f, 0.0f, 0.0f, 0x1.976a1ap-100f, 0x1.1690d2p-114f, 0x1.51b48ep-4f,
     0x1.0da77ep-72f, 0x1.5d4f6ap-43f, 0x1.1ef054p-1f, 0x1.00c3f4p-31f, 0.0f,
     0x1.03975ap-105f, 0.0f, 0x1.0d2d7ap-26f, 0x1.0284aap-123f, 0x1.234e2p-10f, 0.0f,
     0x1.3223dp-41f, 0x1.68662ep-2f, 0.0f, 0x1.40e85ap-87f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2232ccp-5f, 0x1.3ffabp-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.666518p-114f, 0.0f,
     0x1.cc15p-86f, 0x1.299082p-82f, 0x1.89b252p-62f, 0.0f, 0x1.bea35ep-103f, 0.0f,
     0x1.a9344p-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3d48aep-85f,
     0.0f, 0.0f, 0.0f, 0x1.58ad5p-41f, 0x1.38f228p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.635d5ep-108f, 0.0f, 0x1.3e6568p-14f, 0x1.d355bp-98f, 0x1.73fea8p-39f,
     0x1.1d7cdp-110f, 0x1.a95dccp-34f, 0x1.d2bc14p-84f, 0.0f, 0x1.a73434p-23f, 0.0f,
     0x1.0ea966p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c158a6p-108f, 0x1.4ad478p-3f,
     0x1.d1f05p-94f, 0x1.325b86p-86f, 0x1.58d0f6p-105f, 0x1.89f228p-44f, 0.0f,
     0x1.428b4ep-10f, 0x1.cb9ff2p-124f, 0.0f, 0x1.ff8f9ep-69f, 0x1.9f7494p-37f,
     0x1.4da6ap-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4790fep-7f, 0.0f, 0.0f,
     0x1.e0c0fcp-67f, 0.0f, 0.0f, 0.0f, 0x1.64e25ap-115f, 0x1.ebd414p-48f,
     0x1.ee3632p-105f, 0.0f, 0.0f, 0x1.276146p-61f, 0x1.0b81cp-106f, 0x1.37c68ep-2f,
     0x1.f6700ep-99f, 0x1.16435ap-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5de7cp-48f,
     0x1.c269b6p-25f, 0.0f, 0.0f, 0x1.37be7p-65f, 0.0f, 0.0f, 0.0f, 0x1.ea9884p-45f,
     0.0f, 0x1.28db0ap-19f, 0.0f, 0x1.e6e988p-24f, 0x1.6016aap-118f, 0x1.4ad312p-77f,
     0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.39d54ep-18f, 0.0f, 0.0f, 0.0f,
     0x1.7e3294p-54f, 0.0f, 0x1.f3723cp-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c75974p-121f, 0.0f, 0x1.ac9d82p-45f, 0x1.3ed6eap-109f, 0.0f, 0.0f, 0.0f,
     0x1.19456p-5f, 0.0f, 0.0f, 0x1.299646p-19f, 0.0f, 0x1.b4193ap-35f, 0.0f,
     0x1.c5fa4cp-92f, 0.0f, 0x1.ac2202p-4f, 0.0f, 0.0f, 0x1.d4fbf8p-88f, 0.0f, 0.0f,
     0x1.d8553cp-106f, 0x1.195724p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c9db96p-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.aa5516p-112f, 0.0f, 0.0f, 0.0f, 0x1.a1cbfep-117f, 0.0f, 0x1.059d54p-119f,
     0.0f, 0x1.b3adb8p-84f, 0x1.ebbcaap-65f, 0x1.28f902p-79f, 0x1.c53a22p-44f,
     0x1.827288p-96f, 0x1.67e162p-13f, 0.0f, 0x1.b25a1ap-25f, 0.0f, 0x1.ff40f6p-46f,
     0.0f, 0.0f, 0x1.a717f8p-114f, 0x1.e05eap-3f, 0x1.d9ecfep-64f, 0.0f, 0.0f,
     0x1.a25384p-3f, 0.0f, 0x1.deeb04p-33f, 0x1.aa8d42p-74f, 0x1.d54fdp-117f,
     0x1.bb772ep-72f, 0x1.39e84ap-80f, 0.0f, 0x1.4948e2p-75f, 0x1.23532p-109f, 0.0f,
     0.0f, 0.0f, 0x1.d6ef9cp-2f, 0.0f, 0x1.5e7dd6p-77f, 0.0f, 0.0f, 0x1.b2e406p-103f,
     0x1.0eca8ap-31f, 0.0f, 0x1.d5b47ep-46f, 0x1.6ddd16p-13f, 0.0f, 0.0f, 0.0f,
     0x1.eaf8b8p-55f, 0.0f, 0.0f, 0.0f, 0x1.d47736p-40f, 0.0f, 0.0f, 0x1.0a7aaep-126f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ca05bp-2f, 0.0f, 0.0f, 0x1.a0775cp-70f, 0.0f, 0.0f,
     0x1.38e4ap-26f, 0.0f, 0x1.e94e9p-105f, 0.0f, 0x1.b0d79ap-73f, 0.0f,
     0x1.58e29ap-15f, 0x1.3f5ae8p-36f, 0x1.9a1e3ap-113f, 0.0f, 0x1.8a9442p-3f, 0.0f,
     0x1.fcb606p-37f, 0x1.905994p-35f, 0x1.0107c4p-87f, 0.0f, 0.0f, 0x1.4a0604p-46f,
     0x1.b8624ep-62f, 0x1.d208ecp-64f, 0.0f, 0.0f, 0.0f, 0x1.7fba82p-89f,
     0x1.5cdb72p-96f, 0.0f, 0x1.77e09p-79f, 0.0f, 0x1.637768p-11f, 0.0f,
     0x1.55169cp-99f, 0x1.dad3bp-118f, 0x1.ed80ap-120f, 0.0f, 0x1.ce54a2p-5f,
     0x1.552976p-118f, 0x1.2be986p-72f, 0.0f, 0x1.368d4cp-70f, 0.0f, 0x1.66e978p-16f,
     0x1.c02648p-107f, 0x1.1d776ep-96f, 0x1.e7da8ep-6f, 0x1.d5f73ep-27f,
     0x1.fc15fep-126f, 0x1.bf19d8p-114f, 0.0f, 0.0f, 0x1.85ef5ep-76f, 0.0f,
     0x1.1c8adp-60f, 0.0f, 0.0f, 0x1p0f, 0x1.a02b52p-87f, 0.0f, 0x1.9abf16p-47f,
     0x1.9e9ea4p-87f, 0.0f, 0.0f, 0x1.fa99cap-97f, 0x1.92e098p-89f, 0x1.408438p-126f,
     0.0f, 0x1.914694p-2f, 0x1.4e1a12p-34f, 0x1.9c8d68p-16f, 0.0f, 0x1.cccfa8p-99f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ca43c6p-63f, 0.0f, 0x1.05a34cp-84f,
     0.0f, 0x1.450eep-83f, 0x1.856f4p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ffae7ep-19f,
     0x1.3cebf4p-48f, 0x1.0cbecp-84f, 0x1.4226ap-2f, 0x1.1f67b4p-106f,
     0x1.7b8816p-95f, 0.0f, 0x1.d6631cp-126f, 0.0f, 0x1.d54958p-36f, 0x1.496dccp-107f,
     0x1.29e66p-66f, 0x1.43b3p-97f, 0x1.cc5b0ap-83f, 0x1.61506ap-44f, 0.0f, 0.0f,
     0.0f, 0x1.c38e08p-63f, 0.0f, 0x1.f9e152p-94f, 0.0f, 0x1.ae539p-33f,
     0x1.8fe036p-126f, 0x1.97d04ap-45f, 0.0f, 0.0f, 0x1.ab7da8p-82f, 0.0f,
     0x1.4dcb4cp-76f, 0x1.7ca30cp-7f, 0x1.ecd50ap-112f, 0.0f, 0.0f, 0.0f, 0x1p0f,
     0x1.aab8c6p-9f, 0.0f, 0.0f, 0x1.b771cap-20f, 0x1.a7c806p-84f, 0x1.081478p-101f,
     0x1.dd653ep-4f, 0x1.43e5eep-124f, 0.0f, 0x1.972bfcp-39f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.33a9b2p-42f, 0.0f, 0.0f, 0.0f, 0x1.d985bcp-92f, 0x1.40aaaap-38f, 0.0f,
     0.0f, 0x1.5c2dc2p-32f, 0.0f, 0.0f, 0.0f, 0x1.e99348p-86f, 0x1.276a9cp-41f,
     0x1.1b6576p-114f, 0x1.37e516p-25f, 0x1.792762p-23f, 0x1.92bcbp-73f,
     0x1.95e36ep-83f, 0x1.e04142p-34f, 0.0f, 0x1.089916p-113f, 0x1.9a44acp-59f,
     0x1.ee929ep-102f, 0x1.a5402p-65f, 0x1.4d67a6p-58f, 0.0f, 0.0f, 0x1.b43128p-10f,
     0x1.3cfda2p-15f, 0x1.7605ep-32f, 0x1.0d2c66p-60f, 0x1.065ecp-125f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a985f8p-24f, 0x1.e2728ap-47f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.149924p-17f, 0.0f, 0.0f, 0.0f, 0x1.1b9718p-99f, 0x1.b2a3a2p-39f,
     0x1.ee2fcp-27f, 0.0f, 0x1.42a152p-117f, 0x1.4b3f86p-103f, 0x1.3cf434p-31f,
     0x1.72600ap-15f, 0x1.8c62e4p-79f, 0x1.aa3d84p-60f, 0x1.ea1acp-114f,
     0x1.bb6b52p-83f, 0x1.b88812p-14f, 0x1.0bc732p-70f, 0x1.1ef7d4p-116f,
     0x1.ddf684p-5f, 0x1.3207f4p-24f, 0x1.d47a8ep-21f, 0.0f, 0.0f, 0x1.5cf99p-12f,
     0x1.51602ap-55f, 0x1.65e04ap-77f, 0.0f, 0x1.7363b6p-110f, 0.0f, 0x1.cd125ap-125f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ef363p-10f, 0x1.b233c2p-17f, 0x1.84b852p-69f,
     0x1.672184p-12f, 0x1.b80e04p-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.5a5a82p-48f, 0x1.bcc6fcp-51f, 0x1.96be28p-10f,
     0x1.9969bap-7f, 0.0f, 0.0f, 0x1.eed7a6p-100f, 0x1.fb665ep-126f, 0.0f, 0.0f,
     0x1.612f9p-7f, 0x1.58435p-76f, 0.0f, 0.0f, 0x1.b34f3p-37f, 0x1.23a55ap-35f,
     0x1.7ef68cp-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d1d2dcp-101f,
     0x1.abbd12p-56f, 0x1.2923cep-20f, 0.0f, 0x1.713634p-41f, 0x1.c391a4p-3f, 0.0f,
     0x1.08e6f8p-77f, 0.0f, 0x1.cbc39ap-123f, 0.0f, 0.0f, 0.0f, 0x1.395ed2p-40f, 0.0f,
     0x1.910a3p-42f, 0.0f, 0x1.5de4b4p-49f, 0x1.3f6b68p-55f, 0x1.40ad9ap-89f,
     0x1.3d452cp-24f, 0.0f, 0x1.fcd5e2p-33f, 0.0f, 0x1.40d75ap-37f, 0x1.4e42a6p-73f,
     0x1.123548p-109f, 0.0f, 0.0f, 0x1.b6c9bap-112f, 0.0f, 0.0f, 0x1.ab0c96p-5f,
     0x1.87742ap-35f, 0.0f, 0.0f, 0.0f, 0x1.0be464p-24f, 0.0f, 0x1.60cfbcp-56f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ade9eap-101f, 0x1.98a078p-22f, 0.0f, 0.0f, 0.0f,
     0x1.503d4cp-35f, 0x1.295076p-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.950c44p-70f,
     0x1.171b5p-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c43284p-40f, 0.0f, 0.0f, 0.0f,
     0x1.737af6p-19f, 0x1.2b8c58p-101f, 0x1.5859e6p-28f, 0x1.745e8ep-70f,
     0x1.0586fap-50f, 0x1.194f0ep-81f, 0x1.2838bcp-105f, 0.0f, 0x1.f37a5p-93f,
     0x1.dfa9a4p-10f, 0x1.d6e79ap-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.825504p-51f, 0.0f, 0.0f, 0x1.c6bccep-80f, 0x1.0aec26p-122f, 0.0f,
     0x1.011616p-97f, 0x1.c673bp-21f, 0x1.fa99cep-5f, 0.0f, 0.0f, 0x1.a66ae4p-100f,
     0x1.610deap-8f, 0.0f, 0.0f, 0x1.ea6134p-93f, 0x1.5dbfaep-11f, 0x1.9757fap-44f,
     0.0f, 0x1.850502p-20f, 0x1.961f56p-22f, 0.0f, 0x1.312616p-86f, 0x1.29f1ccp-61f,
     0.0f, 0x1.006462p-20f, 0.0f, 0.0f, 0x1.148c18p-34f, 0x1.1266ap-79f,
     0x1.de7102p-32f, 0.0f, 0x1.a3da5ep-66f, 0x1.4b116ep-107f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.2b7bfp-122f, 0x1.2d7202p-121f, 0.0f, 0x1.9cc72ep-88f, 0.0f, 0.0f,
     0x1.443c88p-90f, 0x1.6726cep-88f, 0x1.f43354p-96f, 0x1.e0e64ep-98f, 0.0f, 0.0f,
     0x1.886edap-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.74d648p-23f,
     0.0f, 0.0f, 0.0f, 0x1.00cc36p-71f, 0.0f, 0.0f, 0x1.b6c14ep-12f, 0x1.7e0504p-25f,
     0x1.67bfeep-30f, 0x1.affc74p-93f, 0x1.d5687p-26f, 0.0f, 0x1.809504p-76f,
     0x1.1ebf18p-91f, 0.0f, 0.0f, 0x1.9f0f3cp-12f, 0x1.777c6cp-114f, 0x1.1b30eep-40f,
     0x1.9eae94p-71f, 0.0f, 0x1.0efd6ep-5f, 0x1.8d0f42p-35f, 0.0f, 0x1.cb64c4p-116f,
     0.0f, 0.0f, 0.0f, 0x1.b475d4p-4f, 0.0f, 0x1.2de3aep-9f, 0.0f, 0x1.9a593ap-84f,
     0x1.f69d68p-31f, 0x1.0addb4p-44f, 0x1.adfd68p-83f, 0.0f, 0x1p0f, 0x1.ad71bp-36f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.8dea36p-23f, 0.0f, 0x1.e0d4fap-126f, 0.0f,
     0x1.e99c24p-85f, 0x1.f8e2c6p-36f, 0.0f, 0x1.f7fc52p-73f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.44436cp-102f, 0x1.8541ep-75f, 0.0f, 0.0f, 0.0f, 0x1.3eb978p-59f, 0.0f,
     0x1.e518bcp-85f, 0.0f, 0.0f, 0x1.59407ap-118f, 0.0f, 0.0f, 0.0f, 0x1.45c1e2p-50f,
     0x1.d051bcp-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a37d2ap-117f, 0x1.bbf072p-18f,
     0.0f, 0.0f, 0.0f, 0x1.a8556p-53f, 0x1.f9b332p-13f, 0.0f, 0.0f, 0.0f,
     0x1.d9186p-88f, 0x1.092fa4p-68f, 0x1.dd955ap-48f, 0x1.0e6e36p-85f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.6f0f88p-79f, 0.0f, 0x1.1eedb6p-25f, 0x1.69e4a6p-119f,
     0x1.f3180ep-37f, 0x1.85f3d2p-85f, 0.0f, 0x1.dfbfcp-76f, 0.0f, 0.0f,
     0x1.d873f6p-74f, 0x1.c32904p-67f, 0x1.25564p-59f, 0x1.467e66p-34f, 0.0f, 0.0f,
     0.0f, 0x1.ae544ep-94f, 0.0f, 0.0f, 0.0f, 0x1.6161a2p-2f, 0.0f, 0x1.d67fb8p-101f,
     0.0f, 0x1.d9422p-67f, 0x1.9b385p-1f, 0.0f, 0x1.921176p-13f, 0.0f, 0.0f, 0.0f,
     0x1.171812p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eb3e3ap-62f, 0x1.92e1a2p-52f,
     0x1.81eb38p-106f, 0.0f, 0x1.f51c9p-79f, 0x1.93931p-81f, 0.0f, 0x1.e11e04p-20f,
     0.0f, 0x1.becc1ep-66f, 0.0f, 0.0f, 0x1.8bb7aap-48f, 0x1.d42f84p-62f, 0.0f, 0.0f,
     0x1.64839cp-42f, 0x1.eee634p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.091918p-34f, 0.0f,
     0x1.cbe30ap-111f, 0.0f, 0.0f, 0x1.b590dep-91f, 0x1.0f39f2p-111f,
     0x1.596bfcp-101f, 0x1.99244ep-118f, 0.0f, 0x1.ef28e6p-123f, 0x1.f079c6p-38f,
     0x1.bd2794p-26f, 0x1.1440dcp-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f186bp-124f, 0.0f,
     0x1.ed2a7ap-121f, 0x1.74422cp-83f, 0x1.237b7ap-39f, 0x1.8bfa4ap-70f, 0.0f, 0.0f,
     0.0f, 0x1.fce192p-8f, 0x1.9aa69ep-97f, 0x1.e4e7c2p-16f, 0x1.1062fep-62f,
     0x1.464e48p-117f, 0x1.f984bep-92f, 0.0f, 0x1.eff614p-8f, 0x1.c46c44p-20f,
     0x1.d1434ep-2f, 0x1.292abp-2f, 0x1.bf35aep-97f, 0.0f, 0x1.fb4e6ep-71f,
     0x1.e7b0ccp-32f, 0x1.1b9bc8p-69f, 0.0f, 0x1.f15f32p-117f, 0x1.39d52cp-38f, 0.0f,
     0x1.9763bap-92f, 0x1.fd7b9cp-74f, 0x1.178bdcp-92f, 0.0f, 0.0f, 0x1.43a0b4p-3f,
     0x1.501ea8p-96f, 0x1.c172d2p-30f, 0.0f, 0x1.e70146p-38f, 0x1.26847ap-62f,
     0x1.51903cp-28f, 0x1.b22a58p-68f, 0x1.7b3b8p-125f, 0x1.8aafd8p-80f,
     0x1.5320f4p-64f, 0x1.44fce2p-11f, 0.0f, 0x1.babf26p-106f, 0.0f, 0.0f,
     0x1.bf49d2p-11f, 0x1.9bfe44p-113f, 0x1.5527f8p-92f, 0x1.292214p-118f, 0.0f,
     0x1.168444p-21f, 0x1.cbd382p-85f, 0x1.20d4dcp-55f, 0.0f, 0.0f, 0x1.19ed26p-16f,
     0.0f, 0.0f, 0.0f, 0x1.358bb6p-63f, 0.0f, 0x1.ecfe98p-88f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4ca36p-65f, 0.0f, 0x1.76d2fcp-125f, 0.0f, 0.0f, 0x1.4760acp-111f,
     0x1.48f30cp-102f, 0.0f, 0x1.092c72p-73f, 0.0f, 0.0f, 0x1.89cd3p-6f,
     0x1.a8f272p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b0a8dep-21f, 0.0f, 0x1.64a1f4p-99f,
     0x1.7129fap-70f, 0x1.b8323ap-121f, 0.0f, 0.0f, 0x1.ce7a92p-100f, 0x1.0fff12p-78f,
     0x1.f807c4p-103f, 0.0f, 0.0f, 0.0f, 0x1.f6c436p-22f, 0.0f, 0.0f, 0.0f,
     0x1.6150e8p-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7a2c5p-58f, 0x1.f5cc3cp-115f, 0.0f,
     0x1.00bfa8p-72f, 0.0f, 0.0f, 0.0f, 0x1.9f9708p-49f, 0x1.9d6e2ep-97f, 0.0f, 0.0f,
     0x1.8ea4a8p-56f, 0x1.a15da6p-43f, 0x1.4670fep-114f, 0x1.06dfaep-75f, 0.0f, 0.0f,
     0.0f, 0x1.fbefa2p-68f, 0.0f, 0x1.f1457ep-61f, 0x1.85951ap-20f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.72e3bap-33f, 0x1.89f1c4p-41f, 0x1.4fa432p-20f, 0x1.f2d6e2p-119f,
     0x1.5ff5fep-71f, 0.0f
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
            tmp1 = Sleef_cbrtf1_u35purecfma(tmp0);
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
    printf("Sleef_cbrtf1_u35purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_cbrtf1_u35purecfma bench acc %a\n", global_bench_acc);
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
