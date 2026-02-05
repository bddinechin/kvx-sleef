/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_log10f1_u10purecfma.c --function \
 *     Sleef_finz_log10f1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0x1.a6fb84p-6f, 0.0f, 0.0f, 0.0f, 0x1.18e776p-119f, 0.0f, 0.0f,
     0x1.eedc9p-81f, 0.0f, 0.0f, 0x1.e1836cp-116f, 0x1.591566p-1f, 0x1.650ad2p-126f,
     0x1.ba1c6ap-38f, 0x1.60cd74p-36f, 0x1.4152ep-78f, 0.0f, 0.0f, 0.0f,
     0x1.0134aep-125f, 0.0f, 0.0f, 0x1.c21b2cp-74f, 0x1.118244p-15f, 0.0f,
     0x1.f1b498p-76f, 0.0f, 0x1.08db5p-71f, 0x1.0c598ep-20f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.13547ep-83f, 0.0f, 0x1.67de42p-91f, 0x1.142824p-64f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9d5be4p-123f, 0x1.b73384p-43f, 0x1.825a4ep-63f,
     0.0f, 0x1.205c2ap-54f, 0x1.70a096p-110f, 0x1.1bcaf6p-7f, 0x1.6c42bp-100f,
     0x1.5fc6dap-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2b743p-68f, 0x1.1f83b2p-81f,
     0x1.a50384p-74f, 0x1.5fb4bap-23f, 0x1.d84d78p-29f, 0.0f, 0.0f, 0x1.8194a2p-115f,
     0.0f, 0x1.d46a52p-44f, 0x1.42dfd8p-93f, 0.0f, 0.0f, 0x1.3696c8p-101f,
     0x1.cf5ee2p-4f, 0.0f, 0x1.890792p-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.63444p-38f,
     0x1.aca4ccp-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.91d368p-57f,
     0x1.4b92bep-85f, 0x1.b38e12p-79f, 0x1.0229ecp-110f, 0x1.0195b2p-15f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2e5984p-116f, 0x1.dafc88p-37f, 0.0f,
     0.0f, 0x1.716adep-80f, 0.0f, 0.0f, 0.0f, 0x1.f09904p-89f, 0x1.39b9e2p-125f, 0.0f,
     0x1.91cc96p-86f, 0x1.356f5cp-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.190eap-39f,
     0.0f, 0.0f, 0x1.bb2084p-67f, 0.0f, 0x1.bbcbccp-33f, 0x1.858864p-73f,
     0x1.6af592p-93f, 0.0f, 0x1.45c296p-41f, 0.0f, 0x1.a39606p-23f, 0x1.c31d16p-118f,
     0x1.1ab1ap-93f, 0x1.07898ep-101f, 0x1.4168bap-104f, 0x1.94534cp-49f, 0.0f,
     0x1.06cbaap-104f, 0x1.3588e4p-72f, 0.0f, 0.0f, 0x1.9c9862p-43f, 0x1.365922p-116f,
     0.0f, 0x1.d0e87ap-80f, 0x1.ff3d7cp-75f, 0.0f, 0.0f, 0x1.b8392p-106f,
     0x1.4e3cfep-9f, 0.0f, 0.0f, 0x1.6aa872p-13f, 0x1.1d143p-118f, 0x1.0adf08p-17f,
     0.0f, 0.0f, 0.0f, 0x1.b67d6cp-72f, 0x1.87d14ep-28f, 0x1.e3a412p-111f, 0.0f,
     0x1.feaf12p-3f, 0x1.781342p-81f, 0x1.f27798p-1f, 0x1.42fa9p-67f, 0.0f, 0.0f,
     0x1.0df304p-30f, 0.0f, 0x1.d4025ap-99f, 0x1.8cf0a6p-121f, 0.0f, 0x1.a4ef3ep-121f,
     0x1.b6323ap-111f, 0.0f, 0x1.16f6e4p-91f, 0.0f, 0.0f, 0x1.dff0e4p-109f, 0.0f,
     0x1.00ec5ep-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1422ecp-34f, 0.0f,
     0x1.06bec2p-42f, 0.0f, 0.0f, 0x1.ce8c82p-81f, 0x1.ac9ebap-84f, 0.0f, 0.0f, 0.0f,
     0x1.d0d2cep-34f, 0.0f, 0x1.a5e724p-68f, 0.0f, 0.0f, 0.0f, 0x1.b275ecp-121f, 0.0f,
     0.0f, 0.0f, 0x1.6f0d44p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.784ab6p-109f, 0.0f, 0x1.9a8deap-23f, 0.0f, 0x1.b7b00ep-44f, 0.0f,
     0x1.f427fp-88f, 0x1.24e01ap-5f, 0.0f, 0x1.725ccep-60f, 0x1.fcc56p-36f,
     0x1.4e6054p-78f, 0x1.c009ap-1f, 0.0f, 0x1.d53ec8p-126f, 0.0f, 0x1.f3ebe8p-3f,
     0.0f, 0x1.a60916p-75f, 0.0f, 0.0f, 0x1.fec544p-69f, 0x1.109a8p-73f, 0.0f, 0.0f,
     0.0f, 0x1.1c6258p-88f, 0x1.11dcccp-4f, 0.0f, 0x1.9d2ddcp-75f, 0.0f, 0x1p0f,
     0x1.e37b6p-61f, 0x1.73d778p-100f, 0x1.41cf5ep-9f, 0x1.f48e5ep-110f, 0.0f,
     0x1.c883cap-99f, 0x1.fb07f4p-63f, 0x1.cefd5ap-108f, 0x1.7c3554p-90f, 0.0f,
     0x1.df36b2p-35f, 0.0f, 0x1.f4dddap-118f, 0.0f, 0.0f, 0.0f, 0x1.1867d2p-19f,
     0x1.a02742p-87f, 0x1.76197ap-65f, 0x1.372b66p-14f, 0.0f, 0x1.b9f8bp-17f, 0.0f,
     0x1.ac11bp-116f, 0.0f, 0x1.f88122p-71f, 0.0f, 0.0f, 0.0f, 0x1.8e4f86p-65f, 0.0f,
     0x1.aa84e6p-113f, 0x1.2ac31cp-20f, 0x1.ea963p-97f, 0.0f, 0x1.317d32p-32f,
     0x1.123196p-61f, 0.0f, 0.0f, 0x1.91e642p-75f, 0x1.b129ecp-106f, 0x1.d2c984p-81f,
     0x1.effc7cp-112f, 0x1.1b3c62p-114f, 0.0f, 0x1.a10808p-84f, 0x1.2af71p-99f,
     0x1.e84decp-8f, 0.0f, 0x1.27e436p-79f, 0x1.a0e8p-104f, 0x1.78d4eep-37f, 0.0f,
     0x1.ea9408p-15f, 0x1p0f, 0x1.f2b7bep-91f, 0x1.d50822p-82f, 0x1.a7e3bcp-68f, 0.0f,
     0x1.f52268p-59f, 0.0f, 0x1.cd6146p-92f, 0.0f, 0x1.e958ecp-110f, 0.0f, 0.0f,
     0x1.6e634cp-7f, 0x1.1a4bd4p-48f, 0.0f, 0x1.22bc36p-34f, 0.0f, 0x1.e4326cp-91f,
     0.0f, 0.0f, 0x1.4fb0c8p-24f, 0.0f, 0x1.2742eap-102f, 0.0f, 0.0f, 0x1.39153ap-1f,
     0.0f, 0x1.401c64p-6f, 0x1.7b3ecep-87f, 0x1.c3ad02p-39f, 0x1.e37a8p-115f, 0.0f,
     0.0f, 0.0f, 0x1.ad375p-86f, 0.0f, 0.0f, 0x1.adcb36p-107f, 0x1.a7d526p-119f, 0.0f,
     0.0f, 0x1.5fac0ap-33f, 0x1.198e46p-94f, 0.0f, 0x1.f9638p-6f, 0.0f,
     0x1.9131fap-28f, 0x1.e4d2c2p-10f, 0x1.995114p-21f, 0.0f, 0x1.2914acp-115f,
     0x1.661f54p-120f, 0x1.aa819ap-23f, 0x1.0b92c4p-21f, 0.0f, 0x1.af86d8p-112f, 0.0f,
     0.0f, 0x1.f0d42ep-35f, 0.0f, 0x1.79f116p-108f, 0.0f, 0.0f, 0.0f, 0x1.f14d72p-12f,
     0x1.f7761cp-21f, 0.0f, 0x1.f58b9p-39f, 0.0f, 0x1.7bbf34p-10f, 0x1.bfb22cp-23f,
     0.0f, 0x1.00c4eep-102f, 0x1.0e0524p-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.93de3p-81f, 0.0f, 0x1.8c8aaep-53f, 0x1.66ae3p-45f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.594924p-33f, 0x1.01eb2ep-90f, 0x1.316fa8p-83f, 0.0f, 0x1.c064bp-73f,
     0x1.21f3p-74f, 0.0f, 0x1.6caf04p-96f, 0.0f, 0.0f, 0x1.efef32p-31f,
     0x1.0b37c8p-93f, 0.0f, 0x1.82e4b4p-23f, 0x1.4df2ccp-16f, 0.0f, 0.0f,
     0x1.7e7756p-109f, 0x1.0e418p-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d28d9p-93f, 0.0f, 0.0f, 0.0f, 0x1.f1f4cep-80f, 0.0f, 0.0f, 0x1.bfbdbep-15f,
     0.0f, 0x1.293e68p-93f, 0x1.26714cp-3f, 0x1.c45212p-48f, 0x1.c89cc4p-67f, 0.0f,
     0.0f, 0x1.6ce38ap-55f, 0.0f, 0x1.47cde6p-107f, 0.0f, 0x1.da0c7ep-22f, 0.0f,
     0x1.1dcc66p-75f, 0x1.f9342p-33f, 0.0f, 0.0f, 0x1.e00b06p-49f, 0.0f,
     0x1.a1643cp-41f, 0.0f, 0x1.90a25ep-48f, 0.0f, 0x1.64276ap-111f, 0x1.25f63p-54f,
     0x1.e73e86p-19f, 0.0f, 0.0f, 0.0f, 0x1.9a778ap-60f, 0x1.cee49ep-80f,
     0x1.2f66cep-102f, 0x1.4dab6ep-87f, 0.0f, 0x1.aef00cp-118f, 0x1.85311ep-82f,
     0x1.ecc126p-51f, 0x1.232fc6p-12f, 0x1.9a7fc4p-90f, 0x1.e024fep-82f, 0.0f, 0.0f,
     0x1.d3186ep-77f, 0x1.1c06ap-26f, 0.0f, 0x1.7d4b5p-10f, 0.0f, 0.0f,
     0x1.f822b4p-36f, 0.0f, 0.0f, 0x1.b1311ap-97f, 0x1.0c0c3cp-80f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a11906p-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d29db2p-24f, 0.0f,
     0x1.36851cp-121f, 0.0f, 0.0f, 0x1.659c78p-116f, 0x1.ac8286p-126f, 0.0f, 0.0f,
     0.0f, 0x1.eb2caep-30f, 0.0f, 0x1.dae39ep-8f, 0.0f, 0x1.deac02p-26f, 0.0f, 0.0f,
     0.0f, 0x1.9ddfd8p-51f, 0x1.e195cep-2f, 0.0f, 0.0f, 0x1.d2f182p-119f, 0.0f, 0.0f,
     0.0f, 0x1.28ebc6p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e48dd4p-10f, 0.0f,
     0x1.52b55cp-22f, 0x1.7935cep-101f, 0x1.8489fep-8f, 0x1.683d98p-60f,
     0x1.40a094p-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9eecd4p-41f, 0x1.0681f2p-62f,
     0x1.8db88cp-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f50c7cp-108f, 0x1.6ca1dp-124f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c701a8p-53f, 0.0f, 0.0f, 0x1.26a2b8p-115f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.849decp-34f, 0x1.897306p-71f, 0.0f, 0x1.ca95fap-77f, 0.0f,
     0.0f, 0x1.a232dcp-11f, 0x1.2d517ep-43f, 0x1.0dc99cp-6f, 0.0f, 0x1.e6d528p-1f,
     0x1.4bd31p-56f, 0.0f, 0.0f, 0x1.7b85fap-121f, 0x1.b47696p-90f, 0x1.1f2ca8p-67f,
     0.0f, 0x1.ade738p-107f, 0.0f, 0x1.b2c162p-10f, 0x1.dfb5bap-54f, 0x1.d1c072p-51f,
     0.0f, 0x1.9321f6p-68f, 0x1.9e21e4p-2f, 0x1.aee6bep-66f, 0x1.7ace68p-46f, 0.0f,
     0x1.36d8aap-72f, 0.0f, 0x1.78d424p-11f, 0.0f, 0x1.c5827ap-98f, 0x1.e3e9b8p-126f,
     0x1.1cdbbp-113f, 0x1.350d4ep-118f, 0.0f, 0x1.b40a14p-97f, 0x1.cee44p-71f,
     0x1.8bee4cp-60f, 0x1.3a551ep-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a5a13cp-14f, 0.0f,
     0.0f, 0x1.c0d30cp-71f, 0x1.af83fp-91f, 0x1p0f, 0.0f, 0x1.edc482p-66f, 0.0f, 0.0f,
     0x1.87f16p-78f, 0.0f, 0.0f, 0.0f, 0x1.668b3cp-110f, 0.0f, 0.0f, 0x1.bb8c62p-60f,
     0.0f, 0.0f, 0x1.14c516p-46f, 0.0f, 0.0f, 0x1.9d60f8p-28f, 0x1.ed9c86p-50f,
     0x1.7d613ap-78f, 0x1.e5fed2p-81f, 0.0f, 0x1.10a02ep-28f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c240b6p-97f, 0x1.78e03ep-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7c876ep-27f,
     0x1.f09276p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1b071p-103f, 0.0f,
     0.0f, 0x1.e12328p-99f, 0x1.696faep-80f, 0x1.1b773ap-86f, 0x1.d26434p-95f,
     0x1.6028b6p-109f, 0x1.d721bep-120f, 0.0f, 0x1.a39e14p-124f, 0.0f, 0.0f,
     0x1.0dd6f8p-31f, 0.0f, 0x1.37da1p-77f, 0x1.aa996p-37f, 0x1.5a7b08p-60f,
     0x1.58e74ep-78f, 0x1.c8f1e4p-63f, 0x1.cbbfe4p-123f, 0x1.fafc06p-4f, 0.0f,
     0x1.2980f8p-25f, 0x1.2caebcp-104f, 0x1.b7493p-4f, 0x1.4bb4eap-107f, 0.0f,
     0x1.2601d6p-40f, 0x1.446288p-24f, 0x1.d285a6p-123f, 0x1.1be35ap-9f, 0.0f,
     0x1.1d8622p-58f, 0x1p0f, 0.0f, 0x1.a3aa5ep-110f, 0.0f, 0.0f, 0x1.ef25d2p-115f,
     0.0f, 0.0f, 0.0f, 0x1.f67d8ap-123f, 0x1.2edaaap-59f, 0.0f, 0.0f, 0.0f,
     0x1.4c1b42p-62f, 0.0f, 0x1.7e9aep-113f, 0.0f, 0.0f, 0.0f, 0x1.80c594p-32f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a0798ap-102f, 0x1.7044bap-79f, 0.0f, 0x1.4e50a8p-89f,
     0.0f, 0x1.af79dcp-13f, 0x1.b2f44cp-45f, 0.0f, 0.0f, 0x1.4f2702p-27f,
     0x1.9483d4p-119f, 0.0f, 0x1.20eba4p-51f, 0.0f, 0.0f, 0.0f, 0x1.1afa78p-124f,
     0x1.5b8e56p-54f, 0x1.1d966ep-114f, 0x1.43f786p-76f, 0.0f, 0.0f, 0x1.d5c74ep-3f,
     0x1.364f44p-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.aa3fd4p-57f, 0.0f, 0.0f,
     0x1.29505p-97f, 0.0f, 0x1.d65354p-60f, 0x1.7ee0ccp-10f, 0.0f, 0x1.56bb9ap-69f,
     0x1.80253p-83f, 0x1.a76a4p-85f, 0.0f, 0x1.cbe146p-61f, 0.0f, 0x1.b7760ap-112f,
     0x1.359c2ep-119f, 0x1.a74b6ep-112f, 0.0f, 0.0f, 0.0f, 0x1.61301ap-50f, 0.0f,
     0.0f, 0.0f, 0x1.06bd52p-6f, 0.0f, 0x1.0c48e8p-85f, 0.0f, 0.0f, 0x1.6660aep-13f,
     0.0f, 0.0f, 0.0f, 0x1.cd5dbap-96f, 0x1.ee1cc6p-108f, 0x1.27bd9p-62f, 0.0f, 0.0f,
     0x1.8776fap-104f, 0x1.b2d4a6p-76f, 0x1.00b7f4p-126f, 0.0f, 0.0f, 0.0f,
     0x1.be99f6p-74f, 0.0f, 0x1.cf42dp-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1ba0f2p-21f,
     0.0f, 0x1.7b8ec6p-88f, 0.0f, 0.0f, 0.0f, 0x1.d61fbcp-126f, 0.0f, 0.0f,
     0x1.b8993cp-85f, 0.0f, 0.0f, 0x1.0b9934p-51f, 0.0f, 0.0f, 0x1.1994f2p-109f,
     0x1.e9902ap-66f, 0x1.8ec816p-70f, 0x1.e96cbap-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.42b0f8p-48f, 0x1.81ab66p-65f, 0.0f, 0x1.7927ap-21f,
     0x1.2b87e2p-25f, 0.0f, 0.0f, 0x1.70263cp-31f, 0x1.0fe2d6p-117f, 0x1.b08d26p-125f,
     0x1.15b05cp-14f, 0.0f, 0.0f, 0.0f, 0x1.937edap-47f, 0x1.6b6bbap-73f,
     0x1.aa274ap-98f, 0x1.fd511ap-75f, 0x1.9bf9bep-37f, 0.0f, 0.0f, 0x1.57e9bep-77f,
     0x1.488936p-54f, 0.0f, 0.0f, 0.0f, 0x1.bbb41cp-41f, 0.0f, 0.0f, 0x1.bcd9ap-91f,
     0.0f, 0x1.a4c5b2p-104f, 0x1.cafffcp-90f, 0.0f, 0x1.b33fc6p-39f, 0.0f,
     0x1.d5449ap-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.355fbap-37f, 0.0f,
     0x1.b5382ep-108f, 0.0f, 0x1.e2528cp-70f, 0x1.85fe8cp-2f, 0x1.7b73acp-22f, 0.0f,
     0x1.c8e43cp-65f, 0x1.de87e8p-125f, 0.0f, 0x1.be6a3cp-68f, 0.0f, 0x1.c369ecp-38f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.81a6ecp-59f,
     0x1.63a448p-109f, 0.0f, 0.0f, 0x1.31229ep-88f, 0x1.f48922p-58f, 0.0f,
     0x1.37db5p-15f, 0.0f, 0.0f, 0x1.3566bep-64f, 0.0f, 0.0f, 0x1.6d5c8p-99f, 0.0f,
     0.0f, 0x1.2e78fap-67f, 0x1.ad01f8p-6f, 0x1.27483ap-3f, 0.0f, 0x1.9079d2p-41f,
     0.0f, 0.0f, 0.0f, 0x1.04dbb6p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ee780ep-63f, 0.0f,
     0x1.d10eeep-38f, 0x1.644628p-118f, 0.0f, 0.0f, 0x1.93126cp-29f, 0x1.ecb954p-28f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.268e72p-72f, 0x1.ec891ep-117f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ba6e8p-40f, 0.0f, 0.0f, 0.0f, 0x1.0e31cep-13f,
     0x1.cd342cp-20f, 0.0f, 0x1.14de84p-75f, 0x1.970b9p-46f, 0x1.768c9ep-123f, 0.0f,
     0x1.337382p-102f, 0x1.827ce4p-93f, 0x1.bdfa1p-50f, 0x1.1dd8ecp-35f, 0.0f, 0.0f,
     0x1.a613bep-120f, 0x1.4d3f74p-22f, 0x1.cb2a6p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3fc724p-38f, 0x1.6e4778p-19f, 0x1.214f06p-33f, 0.0f, 0x1.e8c3a8p-26f, 0.0f,
     0.0f, 0x1.bb31c4p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.866aa4p-47f,
     0x1.776bb4p-85f, 0x1.14aac8p-69f, 0.0f, 0x1.ef7046p-64f, 0.0f, 0.0f,
     0x1.69c154p-119f, 0x1.093102p-1f, 0x1.ca4324p-104f, 0x1.53059ep-96f,
     0x1.c61996p-100f, 0x1.c7a722p-100f, 0.0f, 0x1.301132p-75f, 0x1.3720c4p-68f, 0.0f,
     0x1.c2d9dp-99f, 0x1.8e62cap-16f, 0x1.20132ap-8f, 0.0f, 0x1.e739eep-126f, 0.0f,
     0x1.3cdb4cp-6f, 0x1.6b354p-90f, 0x1.7ae10ep-76f, 0.0f, 0.0f, 0.0f,
     0x1.a748f6p-113f, 0x1.f1ed58p-30f, 0.0f, 0x1.9eef68p-116f, 0x1.ded7dep-45f, 0.0f,
     0x1.f5a356p-16f, 0.0f, 0x1.e8fe72p-53f
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
            tmp1 = Sleef_finz_log10f1_u10purecfma(tmp0);
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
    printf("Sleef_finz_log10f1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_log10f1_u10purecfma bench acc %a\n", global_bench_acc);
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
