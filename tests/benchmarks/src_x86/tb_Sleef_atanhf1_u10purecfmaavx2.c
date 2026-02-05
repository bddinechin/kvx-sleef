/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_atanhf1_u10purecfma.c --function \
 *     Sleef_atanhf1_u10purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --bench --no-embedded-bin --target x86_sse2
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
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dbcca2p-98f, 0.0f, 0.0f, 0x1.95aba2p-12f,
     0x1.025808p-76f, 0x1.7ebb5p-56f, 0x1.8d1e7ep-43f, 0x1.1c843p-94f, 0.0f,
     0x1.e24b14p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7d9a34p-119f, 0x1.97dcc2p-93f,
     0.0f, 0x1.d39836p-77f, 0x1.dff092p-50f, 0x1.f011dcp-100f, 0x1.98ee76p-96f, 0.0f,
     0x1.c8d758p-105f, 0.0f, 0.0f, 0.0f, 0x1.e9e81cp-81f, 0x1.5382ep-82f, 0.0f,
     0x1.43ab3ep-40f, 0.0f, 0.0f, 0x1.b18678p-91f, 0x1.537dd6p-110f, 0.0f,
     0x1.631c2ap-118f, 0.0f, 0x1.1a103p-120f, 0.0f, 0x1.5917c8p-84f, 0.0f, 0.0f,
     0x1.5fca42p-87f, 0.0f, 0x1.8cfbb4p-123f, 0.0f, 0x1.2724d2p-115f, 0.0f,
     0x1.6be4d8p-37f, 0.0f, 0x1.0cc3cep-94f, 0.0f, 0.0f, 0.0f, 0x1.a4135p-98f, 0.0f,
     0x1.738af4p-17f, 0x1.8af3e2p-55f, 0x1.3e8aeap-118f, 0.0f, 0.0f, 0x1.14d9a2p-108f,
     0.0f, 0x1.bf308ep-97f, 0.0f, 0x1.feb784p-10f, 0x1.ce01bp-33f, 0.0f,
     0x1.8f56c6p-64f, 0.0f, 0.0f, 0.0f, 0x1.78fabcp-100f, 0x1.8d6068p-96f, 0.0f,
     0x1.f72f3cp-40f, 0.0f, 0x1.45598ep-94f, 0x1.3f120ep-104f, 0.0f, 0x1.717d9cp-61f,
     0.0f, 0x1.e90c98p-86f, 0x1.1da282p-66f, 0x1.04cdd6p-49f, 0.0f, 0.0f,
     0x1.caad94p-47f, 0x1.bbdf06p-110f, 0x1.c8fc2p-43f, 0.0f, 0x1.850ae6p-118f,
     0x1.43dd72p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3e5ea2p-93f, 0.0f, 0.0f,
     0x1.09b1p-122f, 0.0f, 0.0f, 0x1.b720acp-55f, 0x1.bda28p-124f, 0x1.eeba46p-28f,
     0.0f, 0x1.019f1ap-116f, 0x1.09ef92p-41f, 0.0f, 0.0f, 0.0f, 0x1.b0e084p-56f,
     0x1.fe6908p-95f, 0x1.334a7cp-113f, 0.0f, 0.0f, 0x1.faedc8p-49f, 0x1.d7e722p-27f,
     0.0f, 0x1.34bb3ep-74f, 0.0f, 0.0f, 0x1.1816b8p-110f, 0x1.54cd8p-71f,
     0x1.fb8a8ep-64f, 0.0f, 0x1.de4dcap-40f, 0x1.e3818ep-122f, 0x1.e1fd84p-89f, 0.0f,
     0x1.304698p-69f, 0.0f, 0x1.f65f8ap-59f, 0x1.134196p-41f, 0.0f, 0x1.3ec3fcp-60f,
     0.0f, 0x1.4c0f3p-23f, 0.0f, 0.0f, 0x1.1a8164p-4f, 0.0f, 0x1.1594acp-58f,
     0x1.5192f6p-41f, 0.0f, 0x1.c686eep-87f, 0x1.e33022p-102f, 0.0f, 0x1.546416p-62f,
     0x1.05976p-90f, 0.0f, 0x1.7b090cp-99f, 0.0f, 0x1.1f9b62p-20f, 0.0f,
     0x1.bca8p-11f, 0x1.1a611ap-78f, 0x1.45aed6p-56f, 0x1.19256ep-11f, 0.0f,
     0x1.a84258p-8f, 0.0f, 0x1.1afd62p-87f, 0.0f, 0x1.75ebd4p-97f, 0.0f, 0.0f,
     0x1.50cf96p-57f, 0.0f, 0.0f, 0x1.0c72aep-6f, 0.0f, 0x1.c33a6cp-6f,
     0x1.d531a6p-5f, 0x1.a2d124p-82f, 0.0f, 0.0f, 0x1.c6d226p-25f, 0.0f,
     0x1.3efb6cp-68f, 0x1.4c82c4p-17f, 0.0f, 0.0f, 0x1.14eef6p-22f, 0.0f,
     0x1.635186p-11f, 0x1.75b2bcp-3f, 0x1.6dd846p-107f, 0.0f, 0x1.50f74p-40f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.252868p-55f, 0x1.154dep-21f,
     0x1.20a642p-65f, 0x1.12f05cp-56f, 0x1.1472ap-78f, 0x1.9ff98p-13f,
     0x1.b6dc18p-12f, 0.0f, 0x1.8b8bccp-14f, 0x1.b8987ep-57f, 0.0f, 0x1.111b7ep-96f,
     0x1.4e9c34p-56f, 0.0f, 0x1.d12cacp-116f, 0.0f, 0x1.12b1a2p-77f, 0x1.c444d6p-90f,
     0x1.748b12p-28f, 0.0f, 0x1.27eef6p-99f, 0.0f, 0.0f, 0x1.adf05ep-117f, 0.0f, 0.0f,
     0x1.83d5bep-59f, 0.0f, 0x1.80785p-112f, 0x1.ad0c5ep-91f, 0.0f, 0x1.278068p-65f,
     0.0f, 0x1.fc2016p-108f, 0x1.ef96cep-29f, 0x1.2c5002p-95f, 0.0f, 0x1.de6968p-28f,
     0x1.aa9a36p-92f, 0x1.109c34p-87f, 0x1.f3bcdep-117f, 0x1.9877fap-117f, 0.0f,
     0x1.c7d206p-15f, 0.0f, 0x1.81bd62p-21f, 0x1.f47958p-34f, 0.0f, 0x1.2454c6p-120f,
     0x1.81acc4p-84f, 0x1.f70ffap-6f, 0x1.717036p-98f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8844a4p-78f, 0.0f, 0.0f, 0x1.bf8862p-63f, 0.0f, 0x1.2f3ce6p-24f,
     0x1.3b4602p-120f, 0.0f, 0x1.e323c4p-68f, 0.0f, 0.0f, 0x1.c5046ep-41f,
     0x1.bae99cp-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fc06a2p-110f, 0.0f, 0.0f,
     0x1.8cc68ep-82f, 0.0f, 0.0f, 0x1.859dbp-78f, 0.0f, 0x1.4e297ep-4f, 0.0f, 0.0f,
     0x1.828d5ap-59f, 0x1.84d134p-101f, 0.0f, 0.0f, 0x1.78f2dp-25f, 0x1.51a7fcp-13f,
     0x1.cd39b8p-45f, 0x1.e7421ap-109f, 0x1.36a1d8p-89f, 0x1.eb9baap-29f, 0.0f,
     0x1.499dcap-3f, 0.0f, 0x1.1677e2p-68f, 0x1.f0aa1cp-34f, 0x1.ba323p-60f,
     0x1.7f20aap-77f, 0x1.0cc9a4p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a198e6p-45f,
     0x1.f5cb62p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2ccb96p-24f, 0.0f, 0.0f, 0.0f,
     0x1.7d8bdap-120f, 0.0f, 0x1.1b0348p-92f, 0.0f, 0x1.aecbaep-59f, 0x1.03fba6p-88f,
     0x1.bb8c3p-12f, 0.0f, 0x1.f7aad2p-26f, 0.0f, 0x1.e77d58p-1f, 0x1.2f5f0ap-45f,
     0x1.4d26f6p-93f, 0x1.da228cp-41f, 0x1.65575p-104f, 0.0f, 0x1.b4903ap-94f,
     0x1.ab3042p-115f, 0.0f, 0x1.103a3ap-22f, 0.0f, 0x1.199c7ep-100f, 0.0f, 0.0f,
     0x1.af24bap-97f, 0x1.1b8588p-24f, 0x1.bef78ap-25f, 0x1.7b717p-48f, 0.0f,
     0x1.827cbcp-104f, 0.0f, 0.0f, 0.0f, 0x1.89009p-18f, 0.0f, 0.0f, 0.0f,
     0x1.0f0e26p-116f, 0.0f, 0.0f, 0.0f, 0x1.f18072p-2f, 0x1.b2d0fcp-113f,
     0x1.399a84p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bda558p-73f, 0x1.c9620ep-61f, 0.0f,
     0.0f, 0x1.398c1cp-120f, 0.0f, 0.0f, 0x1p0f, 0x1.82502cp-13f, 0.0f, 0.0f,
     0x1.fd5228p-9f, 0x1.f8f2ccp-99f, 0.0f, 0.0f, 0x1.1d4dbp-116f, 0x1.c97bf6p-72f,
     0x1.1ea69cp-30f, 0.0f, 0.0f, 0x1.91251cp-114f, 0.0f, 0x1.1e004ep-31f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4ae49cp-66f, 0x1.9c55aep-126f, 0x1.41052ep-33f, 0.0f,
     0x1.524f82p-74f, 0.0f, 0x1.20d9dap-25f, 0.0f, 0x1.1e0bcap-86f, 0x1.9eb9a8p-56f,
     0x1.1da8e6p-102f, 0x1.3fc97cp-68f, 0x1.72b19ep-10f, 0.0f, 0x1.ac9ec8p-97f,
     0x1.57f33ep-92f, 0.0f, 0.0f, 0x1.b1645cp-49f, 0x1.375678p-125f, 0x1.1b49dcp-78f,
     0.0f, 0.0f, 0x1.f729bep-49f, 0x1.afcd8cp-22f, 0x1.a1b1e8p-105f, 0.0f, 0.0f,
     0x1.b054c4p-26f, 0x1.fa41c8p-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.198038p-51f, 0.0f,
     0x1.bb1714p-100f, 0.0f, 0.0f, 0x1.e177f4p-26f, 0.0f, 0x1.8ac7dep-88f,
     0x1.d161bp-19f, 0.0f, 0x1.8574ep-73f, 0x1.21e58ap-29f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b9d3fp-68f, 0.0f, 0.0f, 0x1.6b5de8p-15f, 0.0f, 0x1.6ac558p-113f, 0.0f,
     0x1.cdaf0ap-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.34347ap-28f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f7fceep-102f, 0.0f, 0.0f,
     0.0f, 0x1.a218bap-73f, 0x1.f9e2e4p-12f, 0x1.e04bc6p-28f, 0.0f, 0x1.2b0f04p-58f,
     0.0f, 0.0f, 0x1.bd044p-65f, 0.0f, 0.0f, 0x1.6bac28p-49f, 0.0f, 0.0f,
     0x1.f1970ap-88f, 0x1.a24858p-123f, 0x1.93848ap-84f, 0x1.fae86ep-54f, 0.0f,
     0x1.92f88ep-63f, 0.0f, 0.0f, 0x1.328978p-68f, 0x1.f7d29cp-73f, 0x1.516452p-9f,
     0x1.5aa2cap-75f, 0x1.aa6c24p-50f, 0x1.3b32aep-110f, 0x1.0103p-10f,
     0x1.e54208p-65f, 0x1.c1abfp-8f, 0x1.56f69cp-79f, 0x1.1d2b06p-65f, 0.0f, 0.0f,
     0x1.642dfep-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.94b8f4p-121f, 0.0f,
     0x1.c4b3e8p-81f, 0.0f, 0x1.deebcep-93f, 0x1.c3893ep-14f, 0.0f, 0.0f, 0.0f,
     0x1.0a55fp-40f, 0.0f, 0.0f, 0x1.43dddep-81f, 0.0f, 0x1.71a93p-85f,
     0x1.bdb35p-51f, 0x1.a6f4bcp-18f, 0.0f, 0.0f, 0x1.cef0e8p-124f, 0.0f,
     0x1.effp-113f, 0.0f, 0x1.d02418p-53f, 0x1.2faa52p-99f, 0x1.24419cp-83f,
     0x1.c4ca82p-112f, 0.0f, 0.0f, 0x1.b3f7dp-34f, 0x1.0902aap-109f, 0x1.0ec7cep-102f,
     0.0f, 0x1.468e6p-2f, 0x1.e8d22p-114f, 0x1.58adcep-24f, 0.0f, 0x1.6a063ep-83f,
     0x1.d3dd6p-123f, 0x1.5eebe4p-18f, 0x1.dde7fp-19f, 0x1.cc93fep-54f,
     0x1.b93af2p-40f, 0x1.83ba96p-58f, 0x1.90b486p-61f, 0x1.751912p-10f,
     0x1.fdd6eep-76f, 0x1.9acf88p-26f, 0.0f, 0x1.fc2e2p-78f, 0.0f, 0x1.9f87bcp-97f,
     0x1.f62f04p-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ea9446p-94f, 0.0f, 0.0f,
     0x1.d310e4p-94f, 0x1.a5b1eap-29f, 0.0f, 0x1.95bd8ep-11f, 0.0f, 0x1.b3ae2ap-122f,
     0x1.3ed976p-66f, 0.0f, 0x1.10601ap-91f, 0.0f, 0x1.57ac34p-43f, 0x1.7637dep-37f,
     0.0f, 0.0f, 0x1.eb1bdap-1f, 0x1.baaa78p-36f, 0.0f, 0x1.51cd32p-28f,
     0x1.de66f2p-43f, 0x1.72f066p-59f, 0x1.eb363cp-32f, 0x1.3e80dcp-45f,
     0x1.6d593cp-58f, 0x1.3d687p-60f, 0x1.f0fee6p-13f, 0x1.95c5eep-22f,
     0x1.617458p-95f, 0.0f, 0x1.4e1d12p-71f, 0.0f, 0.0f, 0x1.d458b8p-59f,
     0x1.d5cb56p-9f, 0x1.427198p-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.efa9e4p-49f, 0.0f,
     0.0f, 0x1.418988p-64f, 0.0f, 0.0f, 0.0f, 0x1.53018ap-1f, 0x1.0de9dp-76f,
     0x1.6cb602p-17f, 0x1.818bcap-91f, 0.0f, 0x1.3a41b2p-44f, 0x1.20c68ap-119f,
     0x1.7dab7ap-40f, 0.0f, 0.0f, 0x1.1d1f88p-75f, 0x1.e4039cp-91f, 0.0f, 0.0f,
     0x1.22c75cp-102f, 0x1.1b7a74p-67f, 0.0f, 0.0f, 0.0f, 0x1.0b180ap-20f, 0.0f,
     0x1.00b7d4p-94f, 0x1.d08524p-2f, 0.0f, 0x1.3d47dap-63f, 0x1.83b554p-62f, 0.0f,
     0x1.9dee82p-18f, 0x1.e3aa1cp-87f, 0.0f, 0x1.043ffp-43f, 0x1.0d0284p-21f, 0.0f,
     0.0f, 0x1.d8e8d4p-102f, 0.0f, 0.0f, 0.0f, 0x1.566592p-8f, 0.0f, 0x1.33fb84p-39f,
     0x1.e6c9b2p-92f, 0.0f, 0x1.91b762p-84f, 0.0f, 0x1.0993bcp-11f, 0x1.2d66bp-48f,
     0x1.be220cp-76f, 0x1.38633ap-79f, 0x1.2873d2p-118f, 0x1.598f8ep-24f, 0.0f,
     0x1.0cc968p-109f, 0x1.d2e618p-41f, 0x1.28f67p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e91c7cp-9f, 0x1.a57f6ep-74f, 0x1.4b2daap-100f, 0.0f, 0x1.89425p-4f,
     0x1.2f52eap-40f, 0x1.2d13b8p-39f, 0x1.2bd7fap-125f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.82e72ep-123f, 0x1.33a87cp-107f, 0.0f, 0x1.c87b7cp-51f, 0.0f,
     0x1.ab6434p-112f, 0.0f, 0x1.5d78c8p-119f, 0.0f, 0x1.d36c12p-78f, 0.0f,
     0x1.df84aap-50f, 0x1.3599f6p-34f, 0.0f, 0.0f, 0x1.4cce9cp-125f, 0.0f,
     0x1.5acf62p-56f, 0.0f, 0x1.07de7cp-71f, 0x1.8c65bp-62f, 0x1.3050fep-51f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.639aecp-13f, 0.0f, 0x1.d0de5ep-73f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.96d64p-11f, 0.0f, 0.0f, 0.0f, 0x1.f4349p-10f,
     0x1.48decep-77f, 0.0f, 0.0f, 0x1.4078b6p-119f, 0x1.5d1184p-45f, 0.0f,
     0x1.d1b75p-44f, 0.0f, 0.0f, 0.0f, 0x1.47b7e4p-111f, 0x1.07972ep-43f,
     0x1.6b0d28p-95f, 0x1.8881b2p-69f, 0x1.20411cp-34f, 0.0f, 0x1.574548p-22f, 0.0f,
     0x1.1b8204p-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.292d5ap-5f, 0.0f,
     0x1.7f4538p-20f, 0.0f, 0.0f, 0x1.e048f6p-38f, 0x1.5609a4p-105f, 0.0f, 0.0f,
     0x1.822b3cp-33f, 0x1.0b778cp-93f, 0x1.efea6p-85f, 0x1.513fccp-12f,
     0x1.0f60c4p-110f, 0.0f, 0x1.f0b7e8p-18f, 0x1.53a974p-46f, 0x1p0f,
     0x1.7d7554p-76f, 0.0f, 0x1.aeadb4p-77f, 0.0f, 0x1.d2e55ap-125f, 0x1.199df6p-26f,
     0x1.7f749cp-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4f0deep-43f, 0x1.28252p-94f, 0.0f, 0x1.222ce2p-26f, 0x1.a6b33cp-67f, 0.0f,
     0x1.dba93cp-22f, 0.0f, 0x1.4395eep-4f, 0x1.366424p-58f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c78ba8p-8f, 0x1.70e422p-107f, 0x1.714e7ep-40f, 0x1.9ce9dap-125f, 0.0f, 0.0f,
     0x1.c9b1e4p-11f, 0.0f, 0x1.8568b4p-9f, 0.0f, 0.0f, 0x1.db3cb2p-80f, 0.0f,
     0x1.ddf158p-4f, 0.0f, 0x1.37a2d2p-22f, 0x1.499976p-126f, 0x1.faa296p-82f, 0.0f,
     0x1.34f8dp-26f, 0.0f, 0.0f, 0x1.b6454ap-2f, 0x1.6a2bbcp-37f, 0x1.95cceep-118f,
     0.0f, 0.0f, 0x1.07696ap-76f, 0x1.42b7dap-118f, 0x1.0ca83ep-31f, 0x1.9e7724p-35f,
     0x1.94efap-72f, 0x1.644c74p-107f, 0x1.00a9f6p-119f, 0x1.5a1da6p-20f, 0.0f,
     0x1.358456p-102f, 0x1.0818b4p-42f, 0x1.3a55d6p-55f, 0x1.e9a2bp-79f, 0.0f, 0.0f,
     0x1.05addp-111f, 0x1.e6d46ep-58f, 0x1.2edd18p-27f, 0.0f, 0x1.f7eb4ap-88f,
     0x1.747ae4p-21f, 0.0f, 0.0f, 0x1.9654fap-123f, 0.0f, 0x1.da339ap-31f,
     0x1.738362p-102f, 0x1.3fadaap-21f, 0x1.fcf9f2p-31f, 0x1.cfa93ap-107f, 0.0f, 0.0f,
     0.0f, 0x1.0ff654p-126f, 0.0f, 0x1.e6fffap-55f, 0x1.97c37ep-105f, 0.0f, 0.0f,
     0x1.1d7048p-75f, 0.0f, 0x1.c9e6c2p-7f, 0x1.b7f75ep-88f, 0x1.841cdcp-18f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7bb3a2p-10f, 0.0f, 0.0f, 0x1.d928dcp-64f, 0.0f,
     0.0f, 0.0f, 0x1.f54dfp-84f, 0x1.35374cp-119f, 0.0f, 0x1.a36736p-21f, 0.0f, 0.0f,
     0x1.2bbe04p-46f, 0.0f, 0x1.768a6ep-43f, 0x1.813aa8p-88f, 0x1.45ec1p-118f,
     0x1.b11a9p-99f, 0x1.17f3dcp-2f, 0x1.db0438p-87f, 0.0f, 0.0f, 0x1.74e4dap-74f,
     0.0f, 0.0f, 0x1.83563cp-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.8f290cp-33f, 0x1.80497ep-106f, 0.0f, 0x1.c528cp-112f, 0.0f,
     0x1.53002ep-103f, 0.0f, 0.0f, 0x1.49f66p-109f, 0x1.4b57dcp-98f, 0x1.7424a8p-49f,
     0.0f, 0x1.cbbef4p-37f, 0x1.f76f4ap-27f, 0.0f, 0x1.bdfc9ap-74f, 0.0f, 0.0f,
     0x1.0e9a98p-39f, 0.0f, 0.0f, 0x1.5f46bcp-87f, 0.0f, 0.0f, 0.0f, 0x1.4404e2p-71f,
     0.0f, 0.0f, 0x1.840c32p-45f, 0x1.a311e2p-31f, 0x1.c3f3b2p-36f, 0x1.fa9824p-92f,
     0x1.d362f4p-48f, 0.0f, 0x1.ccb984p-77f, 0x1.c1526ap-48f, 0.0f, 0x1.052132p-94f,
     0x1.b03558p-70f, 0.0f, 0x1.4624dap-53f, 0x1.3ae64p-59f, 0.0f, 0x1.8500b8p-6f,
     0x1.c55468p-38f, 0x1.c8dd98p-106f, 0x1.62ba7ep-113f, 0x1.79465ap-107f,
     0x1.d227e8p-63f, 0x1.0e8272p-35f, 0.0f, 0x1.6e13d4p-46f, 0x1.f44a86p-28f, 0.0f,
     0x1.0352dap-44f, 0x1.29cc28p-29f, 0.0f, 0x1.650e58p-124f, 0.0f, 0x1.63375ep-104f,
     0x1.54c8c8p-63f, 0.0f, 0.0f, 0.0f, 0x1.1580d2p-69f, 0x1.2dd556p-107f, 0.0f, 0.0f,
     0x1.e04992p-44f, 0.0f, 0x1.819476p-87f, 0x1.41181ep-75f, 0x1.839e5ap-17f,
     0x1.28421p-25f, 0x1.bb052p-22f, 0.0f, 0.0f, 0x1.da11c6p-10f, 0x1.3fbc22p-91f,
     0x1.6c7c74p-73f, 0x1.413e86p-80f
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
            tmp1 = Sleef_atanhf1_u10purecfma(tmp0);
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
    printf("Sleef_atanhf1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_atanhf1_u10purecfma bench acc %a\n", global_bench_acc);
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
