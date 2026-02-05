/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_expm1f1_u10purecfma.c --function \
 *     Sleef_expm1f1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0x1.5f022ep-43f, 0.0f, 0x1.ad105cp-108f, 0x1.75fb9cp-103f,
     0x1.b5af8ap-30f, 0.0f, 0x1.80a546p-3f, 0x1.5b6f76p-125f, 0x1.7a2ea8p-40f,
     0x1.ad6736p-69f, 0x1.8f2d2ap-34f, 0.0f, 0x1.342aaap-123f, 0x1.b0d2d6p-42f, 0.0f,
     0x1.911b2ap-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.959eacp-113f, 0x1.270634p-18f,
     0x1.0a3782p-7f, 0.0f, 0x1.0f15b8p-3f, 0.0f, 0x1.70d8aap-109f, 0.0f,
     0x1.6b37bcp-33f, 0x1.1997acp-26f, 0x1.8d88ep-117f, 0.0f, 0x1.b268e6p-72f, 0.0f,
     0.0f, 0x1.88bc2ap-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.17498cp-80f, 0x1.f41678p-61f,
     0x1.ce83c6p-22f, 0x1.050c4cp-44f, 0x1.8b243p-23f, 0x1.dc6b98p-81f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b31feep-125f, 0.0f, 0.0f, 0.0f, 0x1.27f6a8p-115f, 0.0f,
     0x1.90e8bap-109f, 0x1.cdb8ccp-15f, 0.0f, 0x1.c036b8p-113f, 0.0f, 0x1.b4274ep-69f,
     0x1.21a882p-84f, 0x1.3290d8p-29f, 0x1.9bdc6p-29f, 0.0f, 0x1.c249eep-15f,
     0x1.4939b4p-24f, 0.0f, 0.0f, 0.0f, 0x1.e12cb2p-5f, 0x1.e1652p-66f, 0.0f, 0.0f,
     0x1.fa2656p-30f, 0.0f, 0.0f, 0x1.954b0ep-120f, 0.0f, 0.0f, 0.0f, 0x1.0b4926p-51f,
     0x1.e993bp-36f, 0.0f, 0x1.0a586p-118f, 0x1.d992b4p-31f, 0.0f, 0.0f, 0.0f,
     0x1.d77f5p-70f, 0.0f, 0.0f, 0x1.c78188p-119f, 0.0f, 0.0f, 0x1.127a4ap-16f, 0.0f,
     0.0f, 0x1.683c58p-54f, 0.0f, 0x1.9d9678p-70f, 0.0f, 0.0f, 0x1.f716dp-119f, 0.0f,
     0x1.65de52p-115f, 0x1.56c8f8p-27f, 0.0f, 0x1.9aa068p-84f, 0x1.33a15cp-54f, 0.0f,
     0.0f, 0x1.97973ep-110f, 0.0f, 0x1.85775ap-43f, 0x1.784a16p-91f, 0x1.d855e6p-38f,
     0.0f, 0x1.3f0afcp-104f, 0x1.5bb99cp-97f, 0x1.5788cep-2f, 0.0f, 0x1.364baep-103f,
     0.0f, 0x1.f44752p-11f, 0x1.fb46acp-66f, 0.0f, 0x1.588e68p-54f, 0x1.d2eddap-80f,
     0x1.6a5b38p-113f, 0.0f, 0.0f, 0.0f, 0x1.7d1ae2p-117f, 0.0f, 0x1.f05bfap-54f,
     0x1.56b1a8p-80f, 0x1.e36b56p-16f, 0.0f, 0x1.546d94p-97f, 0x1.a96482p-79f,
     0x1.c9dd8cp-44f, 0x1.61718ap-3f, 0x1.5a2ff6p-20f, 0x1.7d0f92p-71f,
     0x1.24457p-120f, 0.0f, 0.0f, 0x1.b1574cp-111f, 0x1.91ebf2p-13f, 0x1.bd8fbcp-59f,
     0x1.04f05ap-18f, 0x1.5fa1fep-21f, 0.0f, 0x1.a7b9a6p-69f, 0x1.862976p-17f,
     0x1.a9712cp-37f, 0.0f, 0x1.5b405ap-115f, 0x1.87dd36p-101f, 0.0f, 0.0f,
     0x1.1cc796p-116f, 0x1.a3c716p-26f, 0x1.d596bcp-21f, 0x1.1c92fcp-60f, 0.0f,
     0x1.5e93fep-71f, 0x1.ad19dcp-24f, 0.0f, 0.0f, 0.0f, 0x1.55d30cp-51f,
     0x1.77dae4p-5f, 0x1.d1b85ap-91f, 0x1.f3f9f2p-106f, 0x1.c69288p-27f,
     0x1.0487fcp-20f, 0x1.7b66e2p-51f, 0x1.0166eap-2f, 0x1.6a098p-3f, 0.0f, 0.0f,
     0x1.ae2c0ap-63f, 0.0f, 0x1.7d0ffp-84f, 0.0f, 0x1.18edb2p-82f, 0x1.47eb28p-114f,
     0x1.35e032p-5f, 0x1.c9f7dp-73f, 0x1.eab7a6p-110f, 0x1.5685bcp-59f,
     0x1.062944p-107f, 0.0f, 0.0f, 0x1.63fb4ep-11f, 0.0f, 0x1.d162p-120f,
     0x1.facacap-97f, 0x1.09723cp-116f, 0x1.0b061cp-10f, 0.0f, 0.0f, 0.0f,
     0x1.3c583cp-100f, 0.0f, 0x1.6138ecp-34f, 0.0f, 0x1.5e4e16p-26f, 0.0f,
     0x1.e27be8p-30f, 0x1.4b335p-67f, 0.0f, 0x1.9203bep-120f, 0x1.5a04d8p-62f, 0.0f,
     0x1.ea1358p-122f, 0x1.18996cp-4f, 0x1.e3c1bp-98f, 0x1.760754p-63f, 0.0f,
     0x1.d5181ep-51f, 0.0f, 0.0f, 0x1.d21a4ep-27f, 0.0f, 0x1.1cc054p-13f,
     0x1.b9e04p-15f, 0.0f, 0x1.453f2ap-124f, 0.0f, 0x1.0bcb4ap-7f, 0.0f, 0.0f, 0.0f,
     0x1.b9966ap-89f, 0x1.0a0abcp-32f, 0x1.c1448p-112f, 0x1.d55b66p-86f,
     0x1.138906p-124f, 0x1.9fd676p-36f, 0.0f, 0x1.1fce96p-85f, 0x1.eac09cp-12f,
     0x1.51330cp-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6bdf24p-31f, 0x1.4571f6p-70f,
     0x1.53c798p-32f, 0x1.d38af8p-28f, 0x1.d8f524p-92f, 0.0f, 0x1.e0f89cp-105f, 0.0f,
     0.0f, 0x1.8d3ddcp-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3c5c92p-94f, 0.0f,
     0.0f, 0x1.8416aep-88f, 0.0f, 0.0f, 0.0f, 0x1.d2b9a4p-103f, 0.0f, 0.0f,
     0x1.83309cp-55f, 0.0f, 0x1.4ae37p-85f, 0.0f, 0x1.9f3568p-54f, 0x1.63e364p-5f,
     0.0f, 0.0f, 0.0f, 0x1.f9b9dep-59f, 0x1.791c14p-16f, 0.0f, 0x1.b2a7aap-109f,
     0x1.7eaf3p-4f, 0x1.35e4ep-117f, 0x1.9f8e56p-44f, 0x1.20ac64p-54f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ffe108p-101f, 0x1.5a1c3ap-54f, 0.0f, 0.0f, 0x1.25d90cp-19f, 0.0f,
     0x1.2c9708p-117f, 0x1.71e27cp-16f, 0x1.12f03ep-62f, 0x1.92fbd6p-91f, 0.0f,
     0x1.7ae056p-84f, 0.0f, 0x1.7ac062p-82f, 0x1.5e8ddcp-1f, 0.0f, 0.0f,
     0x1.6daa0ap-89f, 0.0f, 0x1.107ddcp-28f, 0.0f, 0x1.8e7662p-70f, 0x1.f882bap-74f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7676bep-49f, 0x1.df2d74p-41f, 0.0f, 0.0f, 0.0f,
     0x1.72701cp-42f, 0.0f, 0x1.9f10fap-31f, 0.0f, 0.0f, 0x1.d5401ep-4f, 0.0f, 0.0f,
     0.0f, 0x1.04bdf6p-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d58324p-103f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e4b05ap-50f, 0x1.c76d64p-16f, 0x1.b0653cp-49f,
     0x1.f4cea6p-101f, 0x1.8e2c5ap-36f, 0.0f, 0.0f, 0x1.b3cb5p-27f, 0x1.1f8ebcp-64f,
     0.0f, 0x1.b199ecp-37f, 0x1.93f59cp-125f, 0x1.567f26p-26f, 0.0f, 0x1.861b98p-90f,
     0.0f, 0.0f, 0x1.cb6098p-10f, 0.0f, 0x1.076df8p-52f, 0.0f, 0x1.683678p-119f,
     0x1.076196p-120f, 0.0f, 0.0f, 0.0f, 0x1.bd4986p-5f, 0.0f, 0.0f, 0x1.1a55d2p-108f,
     0.0f, 0x1.b48ab2p-76f, 0.0f, 0.0f, 0.0f, 0x1.0d3588p-68f, 0x1.faec46p-108f,
     0x1.d1fccp-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fcb092p-63f,
     0x1.5d48c6p-35f, 0.0f, 0x1.37f76cp-78f, 0.0f, 0.0f, 0x1.937ebap-7f,
     0x1.e70052p-3f, 0x1.ae1304p-2f, 0x1.fbfd7p-40f, 0.0f, 0x1.dad21ap-42f,
     0x1.e0dba6p-42f, 0.0f, 0.0f, 0x1.aadc9cp-28f, 0.0f, 0x1.c422e2p-109f,
     0x1.1da556p-32f, 0.0f, 0x1.5780dep-44f, 0x1.db1876p-34f, 0x1.de69d6p-21f,
     0x1.5b9694p-53f, 0.0f, 0.0f, 0x1.c3edf6p-122f, 0.0f, 0x1.48fda6p-62f,
     0x1.684a38p-87f, 0x1.a6eb5ap-42f, 0.0f, 0.0f, 0.0f, 0x1.8acc9p-95f,
     0x1.933cbep-15f, 0.0f, 0.0f, 0.0f, 0x1.25e688p-34f, 0x1.4a5714p-117f, 0.0f, 0.0f,
     0x1.e1bd06p-113f, 0x1.6306ap-101f, 0.0f, 0x1.247a16p-73f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d4dedp-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c493f2p-6f, 0.0f, 0.0f,
     0x1.3389b6p-115f, 0.0f, 0x1.a0d878p-21f, 0.0f, 0x1.f3a532p-40f, 0.0f, 0.0f,
     0x1.56bf82p-61f, 0x1.07e9b8p-38f, 0x1.ceea4ep-82f, 0x1.44de8p-83f, 0.0f, 0.0f,
     0.0f, 0x1.ca3746p-35f, 0.0f, 0x1.98c8aep-117f, 0x1.f5f87cp-106f,
     0x1.ca64a6p-123f, 0.0f, 0x1.03a03cp-60f, 0x1.33ee2p-39f, 0.0f, 0.0f,
     0x1.519a5p-24f, 0.0f, 0x1.780608p-21f, 0.0f, 0x1.5de3bp-55f, 0x1.d1969cp-20f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e21362p-50f, 0.0f, 0.0f, 0x1.edb0b2p-113f,
     0x1.788842p-64f, 0x1.eacb9ep-49f, 0x1.04e43p-103f, 0.0f, 0x1.1fefdcp-124f,
     0x1.a9c496p-62f, 0x1.ecaa42p-31f, 0x1.2380bp-77f, 0x1.6a5c32p-99f, 0.0f,
     0x1.32012ep-82f, 0.0f, 0.0f, 0x1.96cdfep-122f, 0x1.38f3ap-117f, 0x1.c791b4p-19f,
     0.0f, 0x1.7fd24cp-65f, 0.0f, 0.0f, 0.0f, 0x1.30b18cp-126f, 0.0f, 0x1.1eb08cp-8f,
     0.0f, 0x1.e0c0f6p-113f, 0.0f, 0x1.e47232p-96f, 0x1.d70cc6p-18f, 0x1.22c3cap-52f,
     0x1.b410a2p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2a0bbcp-45f, 0x1.ba16bp-85f,
     0x1.c7714p-98f, 0.0f, 0x1.5ddcd6p-100f, 0.0f, 0.0f, 0x1.070a34p-79f, 0.0f, 0.0f,
     0.0f, 0x1.2efa6cp-65f, 0x1.d23e74p-10f, 0x1.515a8ap-11f, 0x1.d7b0f8p-64f, 0.0f,
     0.0f, 0x1.a15872p-51f, 0.0f, 0.0f, 0x1.58bf8ep-124f, 0.0f, 0x1.f18c6ap-82f,
     0x1.dddabep-48f, 0x1.203dfap-64f, 0.0f, 0x1.678fc2p-73f, 0.0f, 0.0f, 0.0f,
     0x1.b8aeaap-50f, 0.0f, 0x1.f67b2cp-46f, 0.0f, 0x1.0bd6cap-88f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cff084p-114f, 0x1.f8953cp-78f, 0x1.e50b9p-17f,
     0x1.315a4ap-121f, 0x1.4afeep-110f, 0.0f, 0.0f, 0x1.cdf31p-73f, 0.0f,
     0x1.72b7ep-15f, 0x1.0d1c2ep-99f, 0.0f, 0.0f, 0.0f, 0x1.2d0328p-11f, 0.0f,
     0x1.2f3746p-94f, 0x1.d46a24p-110f, 0.0f, 0x1.418e22p-116f, 0.0f,
     0x1.ce1d82p-118f, 0.0f, 0.0f, 0x1.1517aep-18f, 0.0f, 0.0f, 0x1.bd52c4p-92f,
     0x1.ff0dd2p-37f, 0x1.1ed034p-62f, 0.0f, 0x1.348334p-106f, 0.0f, 0x1.8629c8p-83f,
     0x1.19455p-59f, 0x1.3254ecp-17f, 0.0f, 0.0f, 0x1.cdc556p-76f, 0x1.42427ep-58f,
     0.0f, 0.0f, 0.0f, 0x1.1a3fdp-103f, 0.0f, 0.0f, 0.0f, 0x1.98d2a6p-103f, 0.0f,
     0x1.cea314p-66f, 0x1.77242ep-25f, 0x1.c3133cp-4f, 0.0f, 0x1.3285a8p-96f, 0.0f,
     0x1.c32874p-125f, 0.0f, 0x1.62026ap-17f, 0x1.9e6e66p-117f, 0.0f, 0.0f,
     0x1.6874dep-43f, 0.0f, 0x1.59bf56p-40f, 0.0f, 0.0f, 0x1.d0430cp-120f, 0.0f, 0.0f,
     0x1.0e4ccep-55f, 0x1.8f6fc2p-54f, 0.0f, 0x1.3f27fep-24f, 0x1.4bc61ap-70f,
     0x1.c4cb7p-25f, 0.0f, 0x1.e560fcp-89f, 0.0f, 0x1.d24a1ap-7f, 0x1.5f6e46p-75f,
     0x1.71f03ap-110f, 0x1.214c3ep-48f, 0x1.713ef6p-77f, 0x1.9dc258p-22f,
     0x1.f34e08p-11f, 0x1.7c0508p-68f, 0x1.a853f4p-48f, 0x1.b591f6p-40f,
     0x1.fa28dep-49f, 0.0f, 0x1.7c8cbp-42f, 0x1.53e366p-118f, 0x1.d1b4a8p-48f, 0.0f,
     0x1.fa7218p-4f, 0x1.d6efdep-78f, 0x1.de772ep-112f, 0x1.6b8594p-85f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.7ea96cp-25f, 0.0f, 0x1.a211a2p-105f, 0x1.3120f6p-121f, 0.0f,
     0x1.40a98p-91f, 0x1.c39fbap-15f, 0x1.86d404p-56f, 0.0f, 0.0f, 0x1.78b1b4p-69f,
     0x1.096594p-35f, 0.0f, 0x1.dd609ap-52f, 0x1.0f80bap-42f, 0.0f, 0x1.b8ccaep-114f,
     0x1.ffa4e4p-46f, 0x1.6d945p-99f, 0x1.28af7cp-70f, 0x1.46fee4p-91f,
     0x1.8a03d2p-1f, 0.0f, 0x1.3bafcp-89f, 0x1.17ac18p-50f, 0.0f, 0x1.763cbcp-70f,
     0.0f, 0.0f, 0x1.f5a8f6p-12f, 0.0f, 0x1.731226p-119f, 0x1.991caap-116f, 0.0f,
     0x1.a9af7ep-57f, 0x1.10ea8cp-26f, 0.0f, 0x1.41ef14p-43f, 0x1.bf0baep-65f, 0.0f,
     0.0f, 0x1.8579f6p-3f, 0.0f, 0.0f, 0.0f, 0x1.1b7c36p-101f, 0.0f, 0x1.74ae4ap-56f,
     0x1.f38802p-112f, 0.0f, 0x1.a651b2p-67f, 0x1.5fb8e8p-7f, 0.0f, 0.0f,
     0x1.f06c1p-109f, 0.0f, 0x1.1f9794p-68f, 0x1.a1484ep-101f, 0x1.b4a174p-53f,
     0x1.b8896ep-41f, 0.0f, 0.0f, 0.0f, 0x1.3c66ap-101f, 0x1.be29f4p-93f, 0.0f, 0.0f,
     0.0f, 0x1.397a1cp-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ffe6a2p-33f, 0x1.442442p-5f,
     0x1.5ae58p-35f, 0.0f, 0.0f, 0x1.89ed58p-77f, 0x1.c89f6ap-61f, 0.0f, 0.0f,
     0x1.540f26p-93f, 0x1.7010fp-18f, 0x1.e5c824p-110f, 0x1.bf33bcp-125f, 0.0f,
     0x1.0000e6p-1f, 0.0f, 0.0f, 0x1.51b24ep-38f, 0x1.1b421cp-117f, 0.0f, 0.0f,
     0x1.865f78p-54f, 0.0f, 0x1.f8ca4cp-28f, 0x1.6aee44p-65f, 0.0f, 0.0f, 0.0f,
     0x1.27ae64p-10f, 0.0f, 0x1.7c311ap-34f, 0x1.ebd1a6p-112f, 0x1.5f65aep-68f, 0.0f,
     0x1.065e8ep-88f, 0.0f, 0x1.b3927ap-77f, 0x1.3ff984p-65f, 0.0f, 0x1.9bcfaap-124f,
     0x1.53e76ap-90f, 0.0f, 0.0f, 0x1.bc206p-26f, 0x1.4ecf96p-102f, 0.0f,
     0x1.a41edcp-114f, 0x1.cb70ecp-17f, 0x1.973988p-42f, 0x1.7c33d8p-71f,
     0x1.d20cbap-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7e607ap-113f, 0x1.35e904p-26f,
     0x1.0e0afap-105f, 0.0f, 0x1.2c2136p-86f, 0x1.46433cp-61f, 0.0f, 0x1.bc5c2ep-76f,
     0x1.5193aap-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.72f212p-121f,
     0x1.f7de3ep-85f, 0x1.c47c12p-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ce30cap-119f, 0x1.8801ap-67f, 0.0f, 0.0f, 0.0f, 0x1.d103cap-64f,
     0x1.22e1cap-62f, 0x1.0cc27ep-30f, 0.0f, 0.0f, 0x1.d19fe6p-27f, 0x1.eedaf6p-25f,
     0x1.f1a43ap-126f, 0.0f, 0x1.285b4ap-79f, 0x1.51f09cp-55f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fdbd9ep-103f, 0x1.060562p-44f, 0.0f, 0x1.7782bcp-91f, 0x1.e0c1ecp-114f,
     0x1.0b0282p-28f, 0.0f, 0x1.d4ed48p-80f, 0x1.9293e8p-60f, 0.0f, 0x1.aa3652p-75f,
     0.0f, 0.0f, 0x1.a5ae2cp-95f, 0x1.65afcap-76f, 0x1.2aec0cp-47f, 0x1.7d0bdcp-73f,
     0x1.aaceccp-45f, 0.0f, 0x1.c50ebp-54f, 0.0f, 0.0f, 0x1.aa0dccp-19f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ffe2c8p-72f, 0.0f, 0x1.23c7eep-6f, 0.0f, 0x1.777568p-27f, 0.0f,
     0x1.1d97eap-20f, 0.0f, 0x1.812eccp-88f, 0.0f, 0x1.63bafcp-25f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.bc667ep-51f, 0.0f, 0x1.cf0118p-68f, 0.0f, 0x1.d591c4p-5f, 0.0f, 0.0f,
     0x1.40e3dap-5f, 0.0f, 0.0f, 0x1.af014ep-31f, 0.0f, 0.0f, 0x1.49981cp-106f,
     0x1.9eac4cp-53f, 0.0f, 0.0f, 0x1.416876p-15f, 0.0f, 0x1.bafc38p-99f,
     0x1.50b1f4p-84f, 0.0f, 0.0f, 0x1.02b6f8p-59f, 0.0f, 0.0f, 0.0f, 0x1.6bcffcp-117f,
     0.0f, 0.0f, 0x1.b658cp-59f, 0.0f, 0x1.fe51ep-58f, 0x1.0c7a78p-9f, 0x1.e82abp-27f,
     0x1.c92736p-7f, 0x1.80c5b4p-24f, 0.0f, 0x1.21f026p-87f, 0x1.45e312p-45f,
     0x1.8c4f62p-55f, 0.0f, 0x1.f03d74p-21f, 0x1.03b42cp-9f, 0x1.f7d974p-34f, 0.0f,
     0x1.d70d7cp-120f, 0x1.37fcdcp-42f, 0x1.2d62e8p-23f, 0.0f, 0x1.8eeb86p-62f,
     0x1.983884p-68f, 0.0f, 0.0f, 0.0f, 0x1.1815cep-89f, 0.0f, 0x1.2146b2p-99f,
     0x1.605a8p-118f, 0x1.92e9d4p-58f, 0x1.753192p-6f, 0.0f, 0.0f, 0x1.59237cp-95f,
     0.0f, 0x1.6cac38p-123f, 0.0f, 0.0f, 0x1.ec7b6cp-23f, 0x1.a47ec8p-40f,
     0x1.3d58a4p-64f, 0.0f, 0x1.9cc84ep-55f, 0.0f, 0x1.210a54p-120f, 0.0f, 0.0f,
     0x1.910fbcp-50f, 0x1.85e246p-111f, 0x1.c026bp-103f, 0x1.7b2f84p-32f, 0.0f,
     0x1.e66c6p-54f, 0.0f, 0x1.178236p-63f, 0.0f, 0.0f, 0x1.e65856p-28f,
     0x1.4d22f6p-47f, 0x1.8d231cp-119f, 0.0f, 0x1.4101f2p-27f, 0.0f, 0.0f,
     0x1.d09522p-102f, 0.0f, 0x1.b95ca6p-125f, 0x1.2393a4p-82f, 0.0f, 0x1.1b45bep-87f,
     0x1.5a696p-67f, 0x1.ee7b2cp-46f, 0.0f, 0x1.4965ccp-72f, 0.0f, 0.0f,
     0x1.2b5b4cp-18f, 0x1.fca2aap-112f, 0.0f
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
            tmp1 = Sleef_expm1f1_u10purecfma(tmp0);
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
    printf("Sleef_expm1f1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_expm1f1_u10purecfma bench acc %a\n", global_bench_acc);
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
