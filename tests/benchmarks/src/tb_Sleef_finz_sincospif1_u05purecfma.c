/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sincospif1_u05purecfma.c --function \
 *     Sleef_finz_sincospif1_u05purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --precision sleef_sf2 --bench \
 *     --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef_float_2 external_bench_wrapper_cst = {.x = 0.0f, .y = 0.0f};
static const Sleef_float_2 external_bench_wrapper_cst1 = {.x = 0.0f, .y = 0.0f};
volatile Sleef_float_2 external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.490a52p-119f, 0.0f, 0x1.a665bcp-95f, 0x1.43c956p-75f, 0x1.049a8p-37f,
     0x1.a09164p-54f, 0x1.9d6ae4p-79f, 0.0f, 0.0f, 0x1.0989b2p-39f, 0x1.8e62ep-108f,
     0.0f, 0.0f, 0x1.7f2e6p-13f, 0.0f, 0x1.8c5852p-118f, 0.0f, 0.0f, 0x1.e5126ep-15f,
     0.0f, 0x1.fb6e52p-63f, 0x1.130ecep-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.08786cp-50f,
     0x1.5c0454p-118f, 0x1.f72e7ap-33f, 0.0f, 0x1.3b2ad4p-65f, 0x1.6114ep-92f,
     0x1.23e4e8p-17f, 0x1.349a98p-62f, 0.0f, 0.0f, 0x1.12c51ep-115f, 0.0f, 0.0f, 0.0f,
     0x1.48b5b4p-94f, 0x1.9c6fccp-113f, 0.0f, 0x1.1738b8p-22f, 0.0f, 0x1.55e5cap-58f,
     0.0f, 0.0f, 0x1.6d70aap-80f, 0x1.a5b562p-68f, 0.0f, 0.0f, 0x1.d3a90ep-30f,
     0x1.6357d8p-44f, 0x1.be552ep-10f, 0x1.fdc9d2p-94f, 0x1.a3c56cp-21f,
     0x1.c68982p-100f, 0.0f, 0x1.c427aap-27f, 0x1.3643b8p-22f, 0.0f, 0x1.2a102ep-90f,
     0.0f, 0x1.528b74p-80f, 0.0f, 0x1.51a6c2p-62f, 0.0f, 0x1.986a3p-85f,
     0x1.73195p-44f, 0.0f, 0.0f, 0x1.18124cp-46f, 0x1.f6ec28p-14f, 0.0f,
     0x1.e7a24ap-63f, 0x1.afe852p-80f, 0x1.12b1aap-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.fca598p-1f, 0x1.0aa12p-60f, 0x1.22103cp-120f, 0.0f,
     0x1.63cff2p-117f, 0x1.2ce43p-38f, 0.0f, 0x1.8d39acp-32f, 0.0f, 0x1.9a9b0ap-17f,
     0x1.26436p-64f, 0.0f, 0.0f, 0x1.9d0c5ap-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f,
     0.0f, 0x1.2ba838p-2f, 0.0f, 0x1.e9b9b6p-10f, 0.0f, 0.0f, 0x1.4f3b7ap-93f, 0.0f,
     0.0f, 0x1.01e51ep-89f, 0x1.0bcda4p-89f, 0x1.46d0b2p-17f, 0.0f, 0.0f,
     0x1.d86d24p-95f, 0x1.99f92ap-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8bb2p-84f, 0.0f,
     0x1.7aac6cp-63f, 0x1.cbb99ep-29f, 0.0f, 0x1.d293b4p-16f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.67dccp-119f, 0.0f, 0.0f, 0.0f, 0x1.37d156p-34f, 0.0f, 0x1.65df2cp-79f,
     0x1.46a7ap-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0f8022p-61f, 0.0f,
     0x1.8e9a7ep-53f, 0x1.da2ba2p-47f, 0.0f, 0x1.5ef8cep-53f, 0x1.c90b5p-38f, 0.0f,
     0.0f, 0x1.f2ff9ap-11f, 0.0f, 0x1.286028p-101f, 0x1.356f34p-111f,
     0x1.b31b44p-124f, 0.0f, 0.0f, 0x1.d0b778p-59f, 0x1.308f5ap-76f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.0ef61cp-9f, 0x1.cf4eacp-57f, 0x1.f6ea8cp-47f, 0x1.9661fcp-49f,
     0x1.07970ap-21f, 0.0f, 0x1.b2be3ep-78f, 0x1.eff76p-46f, 0x1.7b0dcep-24f,
     0x1.bb0416p-87f, 0x1.86c946p-72f, 0x1.978554p-80f, 0.0f, 0.0f, 0x1.d8ed54p-78f,
     0.0f, 0.0f, 0x1.1f0e92p-55f, 0.0f, 0x1.2bc10ep-18f, 0x1.fe8a1ep-1f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1bfe56p-126f, 0.0f, 0x1.1f0996p-116f, 0.0f, 0.0f, 0.0f,
     0x1.5ff81ap-104f, 0x1.8a3c2ep-121f, 0x1.7bcdaep-94f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.bdfd9p-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5725dcp-19f, 0.0f,
     0x1.5c961p-17f, 0.0f, 0x1.904e88p-55f, 0x1.c5af4ep-86f, 0x1.ceee28p-18f, 0.0f,
     0.0f, 0x1.8a9b64p-17f, 0x1.6f536cp-25f, 0.0f, 0.0f, 0.0f, 0x1.f2c312p-114f, 0.0f,
     0x1.3ffaa2p-97f, 0x1.313102p-13f, 0.0f, 0x1.27fc84p-120f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.5aa68ep-11f, 0x1.41d1f4p-56f, 0.0f, 0.0f, 0.0f,
     0x1.d60762p-5f, 0.0f, 0x1.e87fb2p-54f, 0.0f, 0x1.e167bap-47f, 0x1.dc9622p-79f,
     0x1.ebeae2p-116f, 0x1.5b78f4p-98f, 0x1.ed0c5ep-65f, 0x1.eb8ee4p-106f,
     0x1.8bbc94p-116f, 0.0f, 0.0f, 0x1.be5b78p-109f, 0.0f, 0x1.556c9cp-118f, 0.0f,
     0.0f, 0x1.acc19ap-7f, 0.0f, 0.0f, 0x1.95fffcp-3f, 0.0f, 0x1.fb33cp-40f,
     0x1.3f411ep-79f, 0.0f, 0.0f, 0.0f, 0x1.16a70ap-105f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d1f7ccp-67f, 0.0f, 0x1.1ea6d6p-71f, 0x1.4ba342p-80f,
     0x1.34e508p-78f, 0.0f, 0x1.929ac8p-13f, 0x1.633322p-69f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.2c467ep-13f, 0x1.f2669p-93f, 0x1.673b94p-12f, 0x1.abc072p-96f,
     0x1.ae345p-17f, 0.0f, 0x1.00c19p-12f, 0x1.45ada2p-104f, 0.0f, 0.0f,
     0x1.509a58p-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8947p-90f, 0.0f, 0.0f,
     0.0f, 0x1.96e112p-5f, 0x1.2de004p-86f, 0.0f, 0x1.f8f636p-26f, 0x1.ce6762p-86f,
     0.0f, 0.0f, 0x1.426ebap-117f, 0.0f, 0x1.fb0b14p-109f, 0x1.62758cp-38f, 0.0f,
     0x1.cfcd78p-71f, 0x1.c24c64p-105f, 0.0f, 0x1.7fe2e8p-31f, 0.0f, 0.0f,
     0x1.864cbp-46f, 0.0f, 0x1.662b5p-39f, 0x1.19cap-117f, 0x1.786c54p-114f,
     0x1.5e104ap-102f, 0x1.e3bb06p-47f, 0x1.e8e37ep-53f, 0x1.05bdf2p-2f,
     0x1.43fa98p-13f, 0x1.8317f6p-97f, 0x1.47c2fcp-66f, 0.0f, 0.0f, 0.0f,
     0x1.c5560cp-124f, 0.0f, 0x1.327036p-115f, 0x1.7c6f68p-39f, 0x1.f65002p-7f, 0.0f,
     0x1.e6926ep-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f5c148p-102f, 0x1.266292p-68f,
     0.0f, 0x1.989a6p-37f, 0x1.b360f8p-93f, 0.0f, 0x1.433106p-105f, 0x1.061b4ap-114f,
     0.0f, 0.0f, 0x1.e8a7c8p-90f, 0.0f, 0x1.fe645cp-82f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.67cb76p-2f, 0.0f, 0.0f, 0.0f, 0x1.5985b4p-105f, 0.0f, 0x1.783984p-89f, 0.0f,
     0.0f, 0.0f, 0x1.7cf596p-62f, 0x1.85f554p-68f, 0.0f, 0.0f, 0x1.39bb2ep-50f, 0.0f,
     0x1.103142p-33f, 0x1.be58a8p-85f, 0.0f, 0x1.6be8bep-14f, 0x1.9cc7a6p-90f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e24b22p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f36ac2p-58f, 0x1.9e6cdap-113f, 0x1.d08f0ap-16f, 0.0f,
     0x1.944cep-50f, 0x1.d7d398p-44f, 0x1.99c012p-40f, 0x1.300b68p-42f,
     0x1.6f5ba6p-1f, 0.0f, 0x1.421278p-125f, 0x1.d17266p-85f, 0x1.439438p-51f,
     0x1.e3536cp-35f, 0x1.23a0dp-56f, 0x1p0f, 0x1.c2b2b6p-41f, 0x1.b770a6p-63f,
     0x1.a55e54p-104f, 0x1.2e380cp-101f, 0x1.27e398p-99f, 0x1.e9c2a6p-62f, 0.0f, 0.0f,
     0.0f, 0x1.6641aap-85f, 0.0f, 0.0f, 0x1.18ea46p-80f, 0x1.4352dcp-116f,
     0x1.db848cp-29f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8e31e4p-84f,
     0x1.c98b52p-98f, 0x1.412b4ap-58f, 0x1.69a87ep-92f, 0x1.23d71cp-125f,
     0x1.18e864p-26f, 0.0f, 0.0f, 0.0f, 0x1.722b4cp-29f, 0x1.f00546p-92f,
     0x1.e3d404p-84f, 0.0f, 0.0f, 0x1.2f2f8ap-54f, 0.0f, 0x1.f6318cp-92f,
     0x1.53b3ap-92f, 0.0f, 0x1.79df6ep-32f, 0.0f, 0x1.ac9dfp-105f, 0x1.923922p-21f,
     0.0f, 0.0f, 0.0f, 0x1.f4f554p-50f, 0.0f, 0x1.b42b84p-54f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.43baeap-34f, 0x1.c70574p-101f, 0x1.d7ecf8p-124f, 0x1.032522p-61f,
     0x1.28c826p-33f, 0x1.553db4p-112f, 0x1.4f716ep-98f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f24dc6p-82f, 0x1.e913fcp-39f, 0x1.09acc6p-80f, 0x1.ee7234p-117f, 0.0f, 0.0f,
     0x1.d98974p-117f, 0x1.2ecc62p-70f, 0x1.4a404cp-9f, 0x1.8db9eap-9f,
     0x1.d0811ap-90f, 0x1.68f85cp-25f, 0x1.fcc986p-103f, 0.0f, 0x1.e180dep-111f,
     0x1.01a9b6p-122f, 0.0f, 0.0f, 0x1.19421cp-34f, 0.0f, 0.0f, 0.0f, 0x1.b57c02p-53f,
     0.0f, 0x1.500c4ap-70f, 0.0f, 0.0f, 0x1.ac8046p-3f, 0.0f, 0.0f, 0x1.94224p-11f,
     0x1.7b16b6p-112f, 0.0f, 0x1.18bc64p-89f, 0.0f, 0.0f, 0x1.fa5c32p-109f, 0.0f,
     0x1.3b82bcp-72f, 0x1.94bd66p-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f9560ap-28f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3a296ap-90f, 0x1.5a0a32p-41f, 0.0f, 0x1.19ec7ap-92f,
     0x1.fea39p-123f, 0x1.3e7042p-57f, 0.0f, 0.0f, 0.0f, 0x1.408876p-105f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.6e657cp-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.193728p-24f, 0x1.5292p-121f, 0.0f, 0.0f, 0x1.e8a9b2p-22f, 0.0f, 0.0f,
     0x1.b81facp-13f, 0x1.c9acc2p-49f, 0x1.3f7d36p-66f, 0x1.d7dc1ep-86f,
     0x1.fc3566p-51f, 0.0f, 0x1.f3097p-125f, 0x1.9e10bcp-16f, 0x1.c851e8p-10f,
     0x1.a7d8ecp-103f, 0x1.abd224p-98f, 0.0f, 0.0f, 0.0f, 0x1.e89868p-67f,
     0x1.c08fc4p-30f, 0.0f, 0.0f, 0x1.60a22cp-71f, 0x1.f7844cp-96f, 0.0f,
     0x1.f56252p-50f, 0x1p0f, 0.0f, 0x1.bb1b2p-122f, 0x1.aa9396p-123f, 0.0f,
     0x1.f2d67ap-32f, 0.0f, 0.0f, 0x1.417dbep-99f, 0.0f, 0x1.6cff0ap-24f, 0.0f,
     0x1.b7d06ap-82f, 0x1.0699dp-123f, 0.0f, 0.0f, 0.0f, 0x1.6ed8cap-30f, 0.0f, 0.0f,
     0x1.97cbd6p-96f, 0.0f, 0x1.60f17cp-9f, 0x1.731616p-91f, 0.0f, 0x1.aafa9cp-69f,
     0.0f, 0.0f, 0x1.2876aap-124f, 0x1.3a6d5ep-101f, 0x1.d09bd8p-109f,
     0x1.8889b4p-50f, 0x1.1b68e8p-26f, 0.0f, 0x1.b099aep-41f, 0.0f, 0.0f,
     0x1.451a7ap-20f, 0x1.dc649ap-66f, 0x1.1d5e6cp-43f, 0x1.62c7ep-59f,
     0x1.893a78p-40f, 0x1.2b184ep-113f, 0x1.69baf4p-84f, 0.0f, 0x1.45d7f8p-103f,
     0x1.9c0c62p-30f, 0x1.3dc0dep-87f, 0.0f, 0.0f, 0x1.2d51aep-89f, 0.0f, 0.0f,
     0x1.04f69p-75f, 0x1.5b033ap-84f, 0.0f, 0.0f, 0x1.95d774p-92f, 0x1.4d1e06p-35f,
     0x1.f5d8dep-14f, 0.0f, 0x1.6f6458p-69f, 0.0f, 0.0f, 0.0f, 0x1.3b54e2p-110f,
     0x1.37e886p-28f, 0.0f, 0.0f, 0x1.fb3cf4p-104f, 0.0f, 0x1.befbb8p-107f,
     0x1.cc1e7ep-112f, 0.0f, 0.0f, 0.0f, 0x1.ad1466p-82f, 0.0f, 0.0f, 0.0f,
     0x1.cf86f4p-123f, 0.0f, 0.0f, 0.0f, 0x1.84eaeap-86f, 0x1.901d06p-70f,
     0x1.21d5b6p-51f, 0x1.2f8cd8p-20f, 0x1.d2adbcp-21f, 0.0f, 0x1.d87f56p-94f, 0.0f,
     0x1.da7f9ep-64f, 0.0f, 0.0f, 0x1.4cbb66p-23f, 0.0f, 0x1.b91f38p-38f, 0.0f, 0.0f,
     0.0f, 0x1.2543e4p-49f, 0.0f, 0.0f, 0x1.7c1e06p-15f, 0.0f, 0.0f, 0.0f,
     0x1.d8661p-126f, 0.0f, 0x1.39aaap-101f, 0.0f, 0.0f, 0x1.72fc86p-92f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.db7d8p-121f, 0.0f, 0x1.2bec64p-101f, 0.0f, 0.0f, 0x1.68621ap-73f,
     0x1.f1314ap-49f, 0x1.cf31d4p-117f, 0.0f, 0.0f, 0.0f, 0x1.f27972p-10f,
     0x1.75469ap-92f, 0.0f, 0.0f, 0x1.240cdap-85f, 0.0f, 0.0f, 0.0f, 0x1.2498f8p-67f,
     0.0f, 0.0f, 0x1.402dacp-36f, 0x1.4eaef8p-42f, 0.0f, 0.0f, 0x1.240c08p-98f, 0.0f,
     0x1.413d94p-103f, 0.0f, 0.0f, 0x1.349f68p-32f, 0x1p0f, 0x1.7d80acp-44f, 0.0f,
     0.0f, 0.0f, 0x1.b8be04p-79f, 0x1.fbc50ap-62f, 0x1.2a1b08p-88f, 0.0f, 0.0f, 0.0f,
     0x1.5c449ep-116f, 0.0f, 0x1.4f7b9p-18f, 0x1.f884dp-38f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2447a6p-61f, 0x1.5839a8p-114f, 0.0f, 0.0f, 0.0f, 0x1.d3408ap-94f,
     0x1.6ea942p-117f, 0.0f, 0.0f, 0.0f, 0x1.574678p-77f, 0.0f, 0x1.eb8338p-59f,
     0x1.07690ap-100f, 0.0f, 0.0f, 0x1.186f72p-49f, 0.0f, 0.0f, 0.0f,
     0x1.41c014p-101f, 0.0f, 0x1.d8f708p-85f, 0x1.f37204p-33f, 0x1.b08ee6p-105f,
     0x1.ebaa84p-67f, 0.0f, 0x1.594ca2p-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.333486p-18f, 0.0f, 0.0f, 0x1.58686cp-61f, 0.0f, 0x1.020948p-61f, 0.0f, 0.0f,
     0.0f, 0x1.4c9c8p-44f, 0.0f, 0x1.1c878ep-2f, 0x1.898144p-14f, 0x1.8448cap-28f,
     0.0f, 0x1.eccfaap-32f, 0.0f, 0x1.23c19p-101f, 0.0f, 0x1.0b971cp-46f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3c398p-124f, 0x1.fc936p-39f,
     0x1.43ecf8p-99f, 0.0f, 0x1.a4e5cep-45f, 0.0f, 0x1.35904cp-17f, 0.0f, 0.0f, 0.0f,
     0x1.49718ep-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.95befap-125f, 0.0f, 0x1.ac447p-8f,
     0x1.75c09p-126f, 0x1.65a002p-74f, 0.0f, 0x1.6b7908p-23f, 0x1.8511dap-21f, 0.0f,
     0.0f, 0x1.81e48p-42f, 0x1.bfb39ap-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4d88d2p-36f, 0x1.7343f8p-55f, 0x1.7047fap-2f, 0.0f, 0x1.721e7p-95f,
     0x1.b05dep-32f, 0x1.e1ccep-108f, 0x1.0a08bap-4f, 0x1.d562dcp-120f, 0.0f,
     0x1.ba2e0ap-58f, 0.0f, 0x1.218a8ep-13f, 0.0f, 0x1.d67e9p-8f, 0.0f,
     0x1.3f4236p-64f, 0x1.e2f5b4p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e65216p-87f,
     0.0f, 0.0f, 0x1.beb742p-111f, 0x1.2a26a8p-14f, 0.0f, 0.0f, 0.0f, 0x1.7dc34p-31f,
     0.0f, 0.0f, 0x1.934ee2p-53f, 0.0f, 0x1.fcea38p-35f, 0.0f, 0.0f, 0x1.ab2c48p-126f,
     0.0f, 0x1.a98e52p-22f, 0.0f, 0x1.26c222p-20f, 0x1.27c2bcp-32f, 0.0f, 0.0f, 0.0f,
     0x1.b9a31ep-3f, 0x1.8b359cp-28f, 0x1.d11c6ep-35f, 0.0f, 0x1.f8fb42p-53f,
     0x1.0b13f4p-91f, 0.0f, 0x1.0a4426p-112f, 0.0f, 0x1.c77f22p-107f, 0.0f,
     0x1.a8fc9ep-55f, 0.0f, 0.0f, 0.0f, 0x1.e3560ap-6f, 0x1.eb4704p-24f,
     0x1.7afd52p-50f, 0x1.825e3ep-95f, 0.0f, 0x1.5b177cp-5f, 0.0f, 0x1.92d148p-10f,
     0x1.b6ceeep-17f, 0x1.f78a18p-79f, 0.0f, 0.0f, 0x1.93158cp-124f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.926484p-81f, 0x1.a1541p-66f, 0x1.21e71ap-110f, 0.0f, 0x1.918952p-65f,
     0x1.31aea8p-77f, 0x1.4c999ap-32f, 0.0f, 0x1.21007cp-33f, 0x1.6d0ef8p-61f,
     0x1.3c7e04p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b496d4p-44f, 0x1.390204p-45f, 0.0f,
     0x1.02f4bap-22f, 0.0f, 0x1.fc9952p-5f, 0.0f, 0.0f, 0x1.678914p-40f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.21f8d6p-81f, 0.0f, 0x1.b09e52p-14f, 0.0f, 0x1.21a85p-44f,
     0x1.4e9314p-112f, 0.0f, 0.0f, 0x1.886006p-4f, 0.0f, 0x1.e13bep-26f,
     0x1.363294p-73f, 0.0f, 0x1.c1f992p-92f, 0.0f, 0x1.d5f88p-50f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2dbeeep-3f, 0.0f,
     0x1.497d7cp-74f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef_float_2 global_bench_acc;
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
        Sleef_float_2 bench_acc;
        int32_t i;
        float tmp0;
        float tmp1;
        float tmp2;
        float tmp3;
        float tmp4;
        float tmp5;
        Sleef_float_2 tmp6;
        int32_t tmp7;

        i = INT32_C(0);
        bench_acc = external_bench_wrapper_cst1;

        for (;(i < INT32_C(1001));){
            float tmp0;
            Sleef_float_2 tmp1;
            float tmp2;
            float tmp3;
            float tmp4;
            float tmp5;
            float tmp6;
            float tmp7;
            Sleef_float_2 tmp8;
            int32_t tmp9;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_finz_sincospif1_u05purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = bench_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = bench_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef_float_2) {.x=tmp4, .y=tmp7});
            bench_acc = tmp8;
            tmp9 = i + INT32_C(1);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = bench_acc.x;
        tmp2 = tmp0 + tmp1;
        tmp3 = global_bench_acc.y;
        tmp4 = bench_acc.y;
        tmp5 = tmp3 + tmp4;
        tmp6 = ((Sleef_float_2) {.x=tmp2, .y=tmp5});
        global_bench_acc = tmp6;
        tmp7 = j + INT32_C(1);
        j = tmp7;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_finz_sincospif1_u05purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_sincospif1_u05purecfma bench acc {.x=%a, .y=%a}\n", global_bench_acc.x, global_bench_acc.y );
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
