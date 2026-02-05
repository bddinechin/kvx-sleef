/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_logf1_u10purecfma.c --function Sleef_logf1_u10purecfma \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 --bench \
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
     0x1.82c35ep-80f, 0x1.7b42ep-95f, 0x1.2147bap-86f, 0x1.1d2408p-95f,
     0x1.4df856p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2d061cp-124f, 0x1.527a52p-91f, 0x1.a04b4cp-51f, 0x1.9c2ef6p-6f,
     0x1.2133d4p-31f, 0x1.7042b8p-111f, 0.0f, 0.0f, 0x1.f6eb26p-41f, 0x1.9c7c58p-28f,
     0.0f, 0x1.8201c8p-106f, 0.0f, 0x1.fd5ap-111f, 0x1.5daedep-93f, 0.0f,
     0x1.c0d7a8p-93f, 0x1.1b1fb6p-5f, 0.0f, 0.0f, 0x1.b05d88p-76f, 0.0f,
     0x1.cb8f12p-25f, 0x1.5297f6p-48f, 0.0f, 0x1.d978c4p-8f, 0.0f, 0x1.d5fc94p-61f,
     0x1.837846p-88f, 0.0f, 0.0f, 0.0f, 0x1.3d0434p-83f, 0.0f, 0x1.d89ec6p-16f, 0.0f,
     0x1.e3943p-60f, 0.0f, 0.0f, 0x1.02903ep-41f, 0.0f, 0.0f, 0x1.2f7f22p-23f, 0.0f,
     0.0f, 0x1.dab648p-35f, 0.0f, 0.0f, 0x1.6d0852p-90f, 0x1.3cf11ap-35f, 0.0f, 0.0f,
     0x1.9bfd68p-112f, 0x1.93cf6ap-54f, 0x1.02083ep-4f, 0x1.998466p-60f,
     0x1.04e4ap-65f, 0.0f, 0x1.8f1d3ap-99f, 0.0f, 0.0f, 0x1.e5483cp-83f,
     0x1.90a294p-121f, 0x1.6dfc2cp-76f, 0x1.9b38fap-21f, 0.0f, 0x1.a126a8p-109f, 0.0f,
     0x1.32b76ep-88f, 0x1.8aafdp-107f, 0.0f, 0x1.fce40cp-96f, 0x1.9d8366p-4f, 0.0f,
     0.0f, 0x1.14d6dcp-11f, 0.0f, 0x1.945f2p-63f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.454c7ep-75f, 0x1.0e09dep-33f, 0x1.c3938cp-9f, 0.0f, 0.0f, 0.0f,
     0x1.84925cp-34f, 0x1p0f, 0.0f, 0x1.c9302p-38f, 0.0f, 0.0f, 0.0f,
     0x1.df5be2p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c86cccp-42f, 0.0f, 0x1.b7564ep-10f,
     0.0f, 0x1.74966cp-79f, 0.0f, 0.0f, 0x1.0e3038p-32f, 0x1.b165cep-102f,
     0x1.4d6324p-105f, 0.0f, 0.0f, 0x1.866f64p-33f, 0x1.e2049ep-22f, 0.0f, 0.0f,
     0x1.b72f4cp-75f, 0.0f, 0x1.68c776p-89f, 0x1.cefcap-125f, 0x1.96b9d6p-84f, 0.0f,
     0x1.2f2d4cp-18f, 0x1.49af2cp-36f, 0x1.45ae36p-31f, 0x1.786592p-59f, 0.0f,
     0x1.30d602p-123f, 0x1.f42ce2p-81f, 0.0f, 0.0f, 0x1.a4c528p-7f, 0x1.1d67cap-115f,
     0.0f, 0x1.84aa94p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.87ad08p-41f,
     0x1.2d8a38p-19f, 0.0f, 0.0f, 0x1.7b71d4p-52f, 0.0f, 0x1.a1aeep-52f, 0.0f, 0.0f,
     0x1.0d1ac8p-4f, 0x1.cc2bb8p-125f, 0x1.d30b16p-16f, 0.0f, 0.0f, 0x1.133168p-10f,
     0.0f, 0x1.da6bc4p-36f, 0x1.598a2cp-92f, 0.0f, 0x1.815b28p-28f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.48585ap-100f, 0x1.e6538ep-79f, 0.0f, 0.0f, 0x1.902fdep-84f,
     0x1.024714p-92f, 0x1.9366dp-37f, 0x1.91b02ap-70f, 0x1.9e989ap-86f, 0.0f,
     0x1.875f36p-72f, 0x1.fc5f7cp-10f, 0x1.e81b14p-82f, 0x1.2c63dcp-66f, 0.0f,
     0x1.79fd36p-16f, 0.0f, 0.0f, 0.0f, 0x1.3bba1cp-93f, 0.0f, 0.0f, 0x1.a840e6p-86f,
     0.0f, 0.0f, 0.0f, 0x1.45025ap-65f, 0.0f, 0x1.e1087ep-90f, 0.0f, 0x1.36d0f2p-54f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d48daep-48f, 0x1.2caa22p-97f, 0.0f,
     0.0f, 0x1.8e862ap-75f, 0x1.f0e44p-46f, 0x1.4a0252p-84f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.1c9f02p-48f, 0x1.67558ap-62f, 0.0f, 0x1.19487p-117f, 0x1.09688cp-102f,
     0x1.6f700ep-40f, 0x1.7ade8ep-65f, 0.0f, 0.0f, 0x1.3945a6p-35f, 0x1.a83106p-123f,
     0x1.36a6d6p-35f, 0x1.071924p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bc442p-119f, 0.0f, 0.0f, 0x1.70c562p-112f, 0x1.56aeb2p-107f, 0x1.4f2054p-78f,
     0x1.14cc04p-124f, 0x1.ed34dep-3f, 0.0f, 0x1.0f7384p-43f, 0x1.95de12p-118f,
     0x1.7db63cp-16f, 0.0f, 0x1.db89f4p-109f, 0.0f, 0.0f, 0x1.96c97ap-15f,
     0x1.f5dbdap-57f, 0x1.641fc6p-80f, 0.0f, 0x1.56695p-68f, 0x1.3ce1d4p-41f, 0.0f,
     0.0f, 0.0f, 0x1.ed3c4ap-17f, 0.0f, 0x1.db24d6p-82f, 0.0f, 0.0f, 0.0f,
     0x1.4bd442p-123f, 0.0f, 0x1.d25548p-119f, 0.0f, 0.0f, 0.0f, 0x1.298826p-114f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ba12aep-37f, 0x1.23cc64p-37f, 0.0f, 0x1.44c4a4p-85f,
     0x1.c0f852p-94f, 0.0f, 0x1.013894p-40f, 0x1.0ba8bap-33f, 0.0f, 0x1.6c71dap-17f,
     0.0f, 0x1.f9ba5p-122f, 0x1.ea1b18p-15f, 0.0f, 0.0f, 0.0f, 0x1.7a27acp-36f,
     0x1.08322ap-66f, 0.0f, 0x1.37c06cp-38f, 0.0f, 0x1.081e54p-92f, 0x1.38839ap-119f,
     0x1.d5c40cp-30f, 0.0f, 0x1.d34466p-21f, 0.0f, 0.0f, 0x1.d94e86p-13f,
     0x1.b0e784p-41f, 0.0f, 0x1.00d992p-23f, 0x1.5c6158p-56f, 0x1.b1d2dp-37f, 0x1p0f,
     0x1.36a54ap-106f, 0.0f, 0x1.9c0098p-86f, 0x1.1132cp-10f, 0.0f, 0x1.c70fccp-17f,
     0x1.15772p-83f, 0x1.f610cap-47f, 0.0f, 0x1.79e042p-38f, 0x1.d6d57ep-18f,
     0x1.210648p-52f, 0x1.7e4144p-85f, 0.0f, 0x1.770beep-96f, 0x1.74963ep-46f, 0.0f,
     0.0f, 0.0f, 0x1.64d5aep-20f, 0x1.ceb0a4p-8f, 0.0f, 0.0f, 0x1.eebe3ep-2f,
     0x1.421bcep-116f, 0x1.9f6554p-73f, 0x1.d76b9p-56f, 0.0f, 0x1.512ea2p-9f, 0.0f,
     0x1.09708ap-57f, 0.0f, 0.0f, 0x1.60fae8p-42f, 0x1.aea188p-63f, 0.0f, 0.0f,
     0x1.1e3bf4p-1f, 0.0f, 0.0f, 0x1.9df98p-67f, 0x1.ed27c2p-124f, 0.0f,
     0x1.2a8b4cp-1f, 0x1.822f0ap-71f, 0.0f, 0x1.bd91c6p-92f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b9dfacp-15f, 0x1.4fcaa6p-54f, 0x1.f5e4fcp-83f, 0x1.a740e4p-76f,
     0x1.23a956p-1f, 0.0f, 0.0f, 0x1.ae9628p-21f, 0x1.0aa2dcp-70f, 0x1.9745f8p-7f,
     0.0f, 0x1.433ebcp-4f, 0x1.a47bbep-53f, 0.0f, 0.0f, 0x1.216324p-6f,
     0x1.8e6f4ap-59f, 0.0f, 0x1.75ffdep-121f, 0x1.973be4p-15f, 0x1.76f5eap-106f,
     0x1.464f6ap-120f, 0x1.ec106ap-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dc98d8p-46f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ddbf98p-22f, 0x1.cc2a0ap-36f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1d5d72p-23f, 0.0f, 0x1.e2f13ep-63f, 0.0f,
     0x1.554388p-70f, 0x1.ab77dep-97f, 0x1.e18816p-54f, 0.0f, 0x1.f57ac8p-122f, 0.0f,
     0x1.6af81ap-71f, 0.0f, 0.0f, 0x1.a1129p-53f, 0x1.79fa2cp-9f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.738b34p-32f, 0.0f, 0.0f, 0.0f, 0x1.087212p-29f, 0.0f,
     0x1.a5df9ep-99f, 0.0f, 0.0f, 0x1.48e95ap-15f, 0x1.f2fac4p-106f, 0x1.f463f4p-83f,
     0x1.4ca71p-97f, 0.0f, 0.0f, 0x1.114d1cp-59f, 0.0f, 0.0f, 0.0f, 0x1.920c54p-18f,
     0.0f, 0.0f, 0.0f, 0x1.a2363ep-1f, 0x1.3da0bap-49f, 0x1.ff8d3cp-104f,
     0x1.bf563ep-16f, 0x1.3e0b08p-87f, 0x1.f3e486p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.329b62p-122f, 0.0f, 0.0f, 0.0f, 0x1.9ab144p-96f, 0x1.30ee9p-23f, 0.0f,
     0x1.398974p-103f, 0.0f, 0.0f, 0x1.6a2a94p-36f, 0.0f, 0.0f, 0x1.a3a154p-17f, 0.0f,
     0x1.8c582ep-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9a3b2ap-26f,
     0x1.094bbap-93f, 0x1.912332p-99f, 0.0f, 0.0f, 0.0f, 0x1.b81d2p-36f,
     0x1.e026e4p-106f, 0x1.6a6fb4p-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bc5e96p-52f,
     0x1.bc7974p-109f, 0.0f, 0.0f, 0.0f, 0x1.4344b6p-52f, 0.0f, 0x1.ce46f4p-126f,
     0.0f, 0x1.ad1c8cp-25f, 0.0f, 0.0f, 0.0f, 0x1.df2caep-91f, 0x1.bfbd3ap-68f,
     0x1.c6fda2p-54f, 0.0f, 0.0f, 0x1.27f1cep-86f, 0.0f, 0x1.89dc9ap-95f,
     0x1.541e7cp-9f, 0.0f, 0.0f, 0x1.ae6b18p-120f, 0.0f, 0.0f, 0x1.b8a5dp-14f,
     0x1.3994fep-71f, 0x1.daad04p-2f, 0x1.4ea5a8p-113f, 0x1.3e7ddep-53f, 0.0f,
     0x1.6f8cc6p-117f, 0x1.53df66p-89f, 0.0f, 0x1.2e8c56p-68f, 0.0f, 0.0f, 0.0f,
     0x1.ce915cp-50f, 0x1.e0c1a4p-83f, 0.0f, 0x1.64e714p-109f, 0.0f, 0x1.805e52p-34f,
     0.0f, 0x1.54b02ap-73f, 0x1.3c0ad2p-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5f040cp-80f,
     0x1.7ae60ep-125f, 0x1.1c6bcp-34f, 0.0f, 0.0f, 0.0f, 0x1.3235b2p-21f,
     0x1.95185ep-77f, 0x1.11a8fap-3f, 0.0f, 0.0f, 0x1.4cedp-7f, 0.0f, 0.0f,
     0x1.90030ap-15f, 0.0f, 0x1.48e7aep-4f, 0.0f, 0x1.6a8ae2p-37f, 0.0f,
     0x1.17367cp-40f, 0x1.a607acp-1f, 0.0f, 0x1.599136p-3f, 0x1.5ebccep-88f, 0.0f,
     0x1.359034p-85f, 0.0f, 0x1.3a5782p-63f, 0x1.8380e6p-96f, 0x1.1941fp-82f,
     0x1.fb273cp-118f, 0.0f, 0x1.8dc0e2p-47f, 0.0f, 0.0f, 0x1.41c988p-88f, 0.0f,
     0x1.cf5ae6p-82f, 0.0f, 0x1.ff5a62p-104f, 0x1.793f4p-20f, 0.0f, 0x1.2e9a06p-88f,
     0x1.0da4f8p-125f, 0x1.9d039p-41f, 0.0f, 0x1.883996p-119f, 0.0f, 0.0f, 0.0f,
     0x1.e1425cp-10f, 0.0f, 0.0f, 0x1.88c11ap-83f, 0.0f, 0.0f, 0.0f, 0x1.352bd4p-86f,
     0.0f, 0.0f, 0.0f, 0x1.7f3f42p-67f, 0.0f, 0x1.b75d3cp-118f, 0x1.35d69cp-110f,
     0.0f, 0x1.9948b6p-89f, 0x1.cc1b4ep-35f, 0.0f, 0.0f, 0x1p0f, 0.0f,
     0x1.68cdf2p-92f, 0.0f, 0.0f, 0x1.0225ecp-84f, 0x1.d78ffp-1f, 0x1.4fcf54p-6f,
     0.0f, 0.0f, 0x1.e6ac94p-1f, 0x1.5b96dep-13f, 0.0f, 0.0f, 0.0f, 0x1.1d1baap-28f,
     0x1.28099ap-64f, 0x1.42ec4ap-60f, 0.0f, 0.0f, 0x1.ca1f54p-101f, 0.0f,
     0x1.16b23ep-104f, 0x1.4ab89p-13f, 0.0f, 0x1.a0be62p-107f, 0x1.6521fap-64f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.36eb1p-91f, 0x1.9eaa9ap-118f, 0.0f, 0x1.5737fp-118f,
     0.0f, 0x1.96f66ep-52f, 0x1.3d9964p-22f, 0.0f, 0.0f, 0x1.ce87fcp-93f,
     0x1.ff5204p-34f, 0x1.0feef4p-46f, 0x1.f5d1fcp-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.cc0fb8p-120f, 0.0f, 0x1.4f5616p-111f, 0.0f, 0x1.23e24p-97f,
     0x1.5a349p-82f, 0.0f, 0x1.bcc21ep-15f, 0.0f, 0.0f, 0x1.bca144p-37f, 0.0f,
     0x1.0192b6p-53f, 0.0f, 0x1.c3625cp-118f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cb9158p-110f, 0x1.150ffp-109f, 0.0f, 0x1.87e6b8p-112f, 0x1.2091f6p-81f, 0.0f,
     0x1.e74c2cp-24f, 0x1.44c64ep-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.275bbp-118f,
     0x1.debb2ap-68f, 0x1.316d86p-62f, 0.0f, 0x1.6a29fep-77f, 0x1.54eb52p-59f,
     0x1.d2a17cp-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9fc36ap-17f, 0x1.a388cp-34f, 0.0f,
     0x1.c3ab62p-118f, 0x1.7719cp-77f, 0x1.9f1ecp-12f, 0x1.524632p-21f,
     0x1.73725cp-1f, 0.0f, 0x1.57ed9cp-77f, 0x1.e7f2ap-13f, 0.0f, 0.0f, 0.0f,
     0x1.fe1e98p-57f, 0.0f, 0x1.8537c4p-99f, 0.0f, 0.0f, 0.0f, 0x1.d97766p-47f,
     0x1.e042a8p-123f, 0x1.5c4054p-110f, 0x1.bbf578p-32f, 0x1.110d68p-44f,
     0x1.bdbf78p-43f, 0.0f, 0x1.cd31p-17f, 0.0f, 0.0f, 0x1.a6846cp-95f,
     0x1.c6d8a6p-42f, 0.0f, 0.0f, 0x1.dd4f3p-99f, 0x1.14adcap-120f, 0x1.f04322p-55f,
     0x1.6127e6p-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f66a68p-125f, 0x1.416f44p-24f,
     0x1.a908fp-35f, 0.0f, 0.0f, 0x1.853744p-93f, 0.0f, 0.0f, 0.0f, 0x1.ff0268p-33f,
     0x1.9762aap-9f, 0.0f, 0.0f, 0x1.f70044p-13f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bef772p-32f, 0.0f, 0x1.fe242ep-108f, 0.0f, 0.0f, 0x1.881a92p-38f,
     0x1.976d2ap-17f, 0.0f, 0.0f, 0x1.152f0cp-11f, 0x1.1f5302p-22f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.dd2d04p-126f, 0x1.1bc308p-23f, 0x1.871c54p-77f, 0x1.68de3ep-104f, 0.0f,
     0x1.857382p-100f, 0.0f, 0x1.32f048p-8f, 0x1p0f, 0x1.d8dfb6p-58f, 0.0f,
     0x1.1f2ae2p-87f, 0.0f, 0x1.3fc9d6p-58f, 0.0f, 0.0f, 0.0f, 0x1.0abe9ep-34f,
     0x1.bc6c94p-97f, 0x1.1c905cp-89f, 0.0f, 0x1.583eap-126f, 0x1.79877p-97f,
     0x1.f035ep-81f, 0x1.ec107cp-56f, 0.0f, 0.0f, 0.0f, 0x1.6589eap-95f,
     0x1.04b8d4p-56f, 0.0f, 0.0f, 0.0f, 0x1.fcddf4p-26f, 0x1.ed34c6p-68f,
     0x1.2e87a4p-29f, 0.0f, 0.0f, 0x1.ee5b7cp-109f, 0x1.54124ap-60f, 0.0f, 0.0f, 0.0f,
     0x1.5396c8p-27f, 0.0f, 0x1.6a2586p-112f, 0.0f, 0.0f, 0x1.cdb97p-56f,
     0x1.ea5a7ap-77f, 0.0f, 0.0f, 0x1.e151d8p-51f, 0x1.609a76p-35f, 0x1.23783ap-52f,
     0x1.1b19aep-92f, 0.0f, 0.0f, 0.0f, 0x1.9f78cp-18f, 0.0f, 0.0f, 0.0f,
     0x1.d7f312p-80f, 0.0f, 0x1.49f34ap-34f, 0x1.b6c51cp-77f, 0x1.9fac38p-65f, 0.0f,
     0.0f, 0x1.1e39p-14f, 0x1.143346p-91f, 0x1.516ce4p-24f, 0x1.73bdbcp-44f, 0.0f,
     0.0f, 0x1.f655eap-58f, 0x1.55711ep-111f, 0x1.725294p-34f, 0x1.742d88p-125f,
     0x1.7183bap-57f, 0.0f, 0.0f, 0.0f, 0x1.07e99ap-113f, 0.0f, 0.0f, 0.0f,
     0x1.c37978p-17f, 0x1.f763e2p-43f, 0x1.0ac32ap-70f, 0.0f, 0x1.659a7p-110f,
     0x1.b82e5cp-53f, 0x1.6194eep-54f, 0x1.823f1ep-5f, 0x1.3bea96p-122f, 0.0f,
     0x1.e6cdaep-18f, 0x1.c524dap-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.da60e4p-113f, 0x1.8cf276p-84f, 0.0f, 0x1.2cfd62p-97f, 0.0f,
     0x1.c01786p-65f, 0x1.2989c8p-113f, 0x1.16beap-87f, 0.0f, 0x1.cbdb9cp-3f,
     0x1.0be164p-89f, 0x1.ed808ap-5f, 0.0f, 0.0f, 0x1.75a43cp-119f, 0x1.14bd4ap-120f,
     0.0f, 0x1.a830e6p-118f, 0x1.3d279ep-82f, 0.0f, 0x1.119dp-50f, 0x1.1dcdf2p-64f,
     0.0f, 0x1.6b6df6p-59f, 0x1.100c74p-18f, 0x1.ad7a96p-53f, 0x1.8f217ap-4f,
     0x1.bc91fcp-67f, 0.0f, 0x1.23252cp-70f, 0x1.4db254p-28f, 0.0f, 0x1.29e01ap-3f,
     0.0f, 0.0f, 0.0f, 0x1.071314p-37f, 0x1.3d0bccp-13f, 0x1.3412dep-18f,
     0x1.2d560ep-70f, 0x1.8c448ep-12f, 0.0f, 0x1.ce387p-23f, 0.0f, 0.0f, 0.0f,
     0x1.16d3c2p-3f, 0x1.2f147ap-29f, 0.0f, 0.0f, 0.0f, 0x1.0af9d6p-119f, 0.0f, 0.0f,
     0x1.573ad4p-7f, 0x1.f7b48cp-88f, 0x1.3a61c4p-34f, 0x1.e42e3ap-54f, 0.0f,
     0x1.1e814p-123f, 0x1.d01f9ep-65f, 0x1.e4974ap-23f, 0x1.e83074p-43f,
     0x1.a2d2d6p-31f, 0x1.ad8174p-97f, 0x1.fe600cp-47f, 0.0f, 0.0f, 0x1.eb0b1cp-101f,
     0.0f, 0x1.2aee0ap-85f, 0x1.115d8ap-59f, 0x1.5afb64p-56f, 0x1.696bf2p-126f,
     0x1.74ee6ap-9f, 0.0f, 0x1.6cd6bep-106f, 0x1.ba1646p-116f, 0.0f, 0x1.9279eap-61f,
     0x1.271d9ep-89f, 0.0f, 0x1.0cc2aap-27f, 0.0f, 0x1.96a1fcp-46f, 0.0f,
     0x1.2a0b0ap-119f, 0x1.9bda0ap-108f
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
            __m128 carg;
            __m128 carg1;
            __m128 carg2;
            float tmp2;
            int32_t tmp3;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_logf1_u10purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            carg = _mm_set_ss(bench_acc);
            carg1 = _mm_set_ss(tmp1);
            carg2 = _mm_add_ss(carg, carg1);
            tmp2 = _mm_cvtss_f32(carg2);
            bench_acc = tmp2;
            tmp3 = i + INT32_C(1);
            i = tmp3;
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
    printf("Sleef_logf1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_logf1_u10purecfma bench acc %a\n", global_bench_acc);
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
