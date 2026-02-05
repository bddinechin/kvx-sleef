/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_fminf4_avx2128.c --function Sleef_fminf4_avx2128 --arity 2 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32,binary32 \
 *     --vector-size 4 --function-input-vector-size 4 --bench \
 *     --no-embedded-bin --target x86_avx2128
 * 
**/
#include <stdint.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float4_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float4_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0.0f, 0x1.cdae1cp-61f, 0.0f, 0x1.cb7afap-41f, 0.0f, 0.0f, 0.0f, 0x1.35aa42p-72f,
     0.0f, 0x1.511fecp-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.120f06p-57f, 0.0f,
     0x1.fba22cp-79f, 0x1.3a98cap-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ac0436p-15f,
     0x1.dc851ap-73f, 0x1.14774ep-126f, 0x1.9ad38ep-89f, 0x1.de1692p-95f, 0.0f,
     0x1.67596ap-54f, 0x1.673eb2p-22f, 0.0f, 0.0f, 0.0f, 0x1.d5ea7cp-56f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fefc94p-79f, 0x1.ed897cp-108f,
     0x1.b5bc18p-69f, 0.0f, 0x1.2051eep-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.99a3cap-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.be2a68p-44f, 0.0f,
     0x1.61a2fcp-22f, 0x1.2e961cp-98f, 0x1.ba294cp-21f, 0x1.614cdap-101f,
     0x1.0b625cp-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6dac48p-93f,
     0x1.9b6ebcp-119f, 0.0f, 0.0f, 0x1.613c3ep-82f, 0x1.717d26p-99f, 0.0f,
     0x1.cf16e2p-79f, 0x1.f04f5ep-111f, 0x1.b8af52p-26f, 0.0f, 0x1.1b2116p-48f, 0.0f,
     0x1.662c3ep-16f, 0x1.6bda7ep-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8b70fep-1f, 0x1.684c84p-79f, 0.0f, 0.0f, 0.0f, 0x1.fa6e8p-49f,
     0x1.ba241p-121f, 0.0f, 0x1.8b0becp-48f, 0x1.edb772p-31f, 0.0f, 0x1.8cf2ecp-35f,
     0.0f, 0.0f, 0x1.31f8e8p-12f, 0x1.cf9674p-122f, 0.0f, 0x1.ce3f7ep-97f,
     0x1.52378ep-24f, 0x1.ec9926p-17f, 0x1.6fd51ep-122f, 0x1.e38cep-27f,
     0x1.9390c4p-42f, 0.0f, 0x1.c11944p-125f, 0.0f, 0x1.70f2ep-114f, 0x1.a6f4fap-4f,
     0x1.b399cap-54f, 0.0f, 0.0f, 0x1.c19e74p-114f, 0x1.c1439ep-44f, 0x1.be44dcp-38f,
     0.0f, 0x1.f4a6ccp-92f, 0.0f, 0.0f, 0x1.8fe764p-91f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2fe2a8p-38f, 0x1.88e4b6p-96f, 0x1.013f54p-4f, 0x1.45ce0ep-16f, 0.0f, 0.0f,
     0x1.7147cap-90f, 0x1.c06542p-54f, 0x1.c1c8b6p-85f, 0x1.8f23ecp-103f,
     0x1.f3e84cp-35f, 0.0f, 0.0f, 0.0f, 0x1.ba3bcep-108f, 0x1.c50c04p-19f, 0.0f, 0.0f,
     0x1.050888p-24f, 0x1.1c64fep-3f, 0x1.68a5fap-95f, 0.0f, 0.0f, 0x1.e374bap-32f,
     0x1.5adcfep-28f, 0x1.6e5a7ap-59f, 0x1.a84c2ep-100f, 0.0f, 0x1.6acacp-36f, 0.0f,
     0.0f, 0x1.fb687ep-103f, 0x1.2199b2p-87f, 0x1.35f0ep-83f, 0x1.8013cp-71f,
     0x1.625078p-115f, 0x1.ade84ep-67f, 0.0f, 0x1.b53afap-54f, 0.0f, 0.0f,
     0x1.a2ac9p-72f, 0x1.c1402ep-61f, 0x1.46a5dcp-54f, 0x1.1083eap-63f,
     0x1.300f38p-14f, 0.0f, 0.0f, 0x1.c467acp-108f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.86142p-85f, 0x1.f29974p-89f, 0.0f, 0.0f, 0x1.e1f684p-47f, 0x1.d680e2p-31f,
     0x1.9762aep-91f, 0.0f, 0.0f, 0x1.ff60f4p-67f, 0.0f, 0.0f, 0.0f, 0x1.9b8df4p-34f,
     0.0f, 0x1.20c69cp-99f, 0.0f, 0x1.98361ep-11f, 0.0f, 0x1.386dd4p-6f,
     0x1.7d8a8p-40f, 0.0f, 0x1.0e667cp-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3da278p-79f,
     0.0f, 0x1.c165f6p-104f, 0.0f, 0.0f, 0.0f, 0x1.015d84p-99f, 0x1.1d4f26p-86f, 0.0f,
     0x1.a2baap-111f, 0.0f, 0.0f, 0.0f, 0x1.e2b5d4p-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.edfcp-85f, 0x1.77daecp-14f, 0x1.4174fep-106f, 0.0f, 0x1.9a0344p-66f,
     0x1.e25582p-64f, 0x1.e0ef42p-67f, 0.0f, 0x1.c404bcp-46f, 0x1.326b62p-109f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.625e06p-60f, 0.0f, 0.0f, 0.0f, 0x1.797d14p-110f,
     0.0f, 0.0f, 0x1.80fe68p-107f, 0x1.3ad8b4p-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.39b624p-56f, 0.0f, 0.0f, 0x1.f02e3p-34f, 0x1.0f8454p-1f, 0.0f,
     0x1.b029eep-35f, 0.0f, 0x1.6cbe1ep-1f, 0.0f, 0x1.c1e446p-99f, 0.0f,
     0x1.c94a0ep-41f, 0x1.dd4d1cp-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.08bb78p-8f, 0x1.596c5p-14f, 0x1.fcbfa2p-69f, 0.0f, 0x1.395fe2p-62f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6836c8p-63f, 0x1.3491aap-63f, 0.0f,
     0x1.19dcd2p-19f, 0.0f, 0x1.8a28a2p-105f, 0.0f, 0x1.85c9c2p-97f, 0.0f,
     0x1.ed41dep-46f, 0.0f, 0.0f, 0x1.22c0d4p-70f, 0.0f, 0.0f, 0x1.f38bf8p-29f,
     0x1.e190c6p-15f, 0x1.5904p-123f, 0.0f, 0x1.a0f0f4p-29f, 0x1.04ac8cp-75f,
     0x1.11808ap-5f, 0.0f, 0x1.1477c2p-80f, 0x1.68df34p-40f, 0x1.d7366cp-45f, 0.0f,
     0x1.34b01ep-42f, 0x1.637874p-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5bc07p-31f, 0.0f,
     0x1.a8cc2ap-100f, 0.0f, 0x1.26c496p-86f, 0.0f, 0.0f, 0.0f, 0x1.9ce308p-52f,
     0x1.28320cp-111f, 0.0f, 0x1.7101dep-20f, 0.0f, 0.0f, 0x1.e046cep-31f, 0.0f,
     0x1.68c00cp-26f, 0.0f, 0x1.15fbbap-126f, 0.0f, 0.0f, 0x1.fa47f2p-43f, 0.0f,
     0x1.c2a776p-11f, 0.0f, 0x1.bc1f2cp-89f, 0.0f, 0.0f, 0.0f, 0x1.f9440ap-17f, 0.0f,
     0x1.c47ap-100f, 0x1.30440ep-68f, 0x1.c90198p-27f, 0x1.120ff2p-92f, 0.0f,
     0x1.19f3f2p-114f, 0.0f, 0.0f, 0.0f, 0x1.388f3p-35f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3ac112p-13f, 0x1.6ba46cp-12f, 0x1.66529cp-74f, 0x1p0f, 0x1.84b04ep-52f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.28b5d4p-34f, 0.0f, 0.0f, 0x1.bf9ae6p-27f, 0.0f,
     0x1.ddc52ep-30f, 0.0f, 0.0f, 0.0f, 0x1.b6c7a8p-7f, 0.0f, 0.0f, 0.0f,
     0x1.b9dca4p-24f, 0.0f, 0x1.e217fp-85f, 0.0f, 0x1.ebfde8p-72f, 0.0f, 0.0f,
     0x1.03540ep-77f, 0.0f, 0x1.42262p-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cb5b16p-81f,
     0x1.c5149cp-56f, 0x1.28337p-15f, 0.0f, 0x1.d00678p-79f, 0.0f, 0x1.4e09ep-106f,
     0.0f, 0x1.9d1c28p-85f, 0x1.4ee94p-55f, 0x1.6a822ap-77f, 0x1.563f12p-1f, 0.0f,
     0x1.6ea2p-56f, 0.0f, 0x1.49c34cp-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fce6c4p-11f,
     0x1.ed44bap-38f, 0x1.ed892ap-109f, 0.0f, 0x1.b8071ep-111f, 0.0f, 0.0f, 0x1p0f,
     0.0f, 0x1.625844p-57f, 0.0f, 0x1.a007f4p-112f, 0.0f, 0.0f, 0.0f,
     0x1.5aca1cp-105f, 0.0f, 0x1.8cd09ap-94f, 0x1.7393dep-3f, 0.0f, 0x1.954762p-121f,
     0x1.2528b6p-27f, 0x1.56584ep-66f, 0x1.920b8cp-54f, 0.0f, 0x1.a101fp-102f,
     0x1.7a0ba2p-4f, 0.0f, 0.0f, 0x1.24f0a8p-93f, 0x1.75cc4p-74f, 0x1.ed8772p-62f,
     0.0f, 0x1.e470c8p-63f, 0x1.e37762p-85f, 0x1.4100e6p-41f, 0.0f, 0.0f,
     0x1.b17e26p-70f, 0x1.6035e4p-54f, 0x1.fe6474p-9f, 0x1.97e49cp-43f,
     0x1.b93e44p-101f, 0.0f, 0x1.b111b6p-89f, 0.0f, 0.0f, 0x1.7cc3c4p-5f, 0.0f,
     0x1.8a83c4p-113f, 0x1.c41e2ep-19f, 0x1.6335eep-102f, 0x1.1e56dcp-74f,
     0x1.0f2b06p-23f, 0.0f, 0.0f, 0x1.824e0ap-71f, 0.0f, 0x1.eedb12p-27f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a1385ap-32f, 0.0f, 0.0f, 0x1.ac3644p-25f, 0x1.073f12p-125f, 0.0f,
     0.0f, 0x1.ccddc6p-65f, 0x1.5cbe7ep-81f, 0x1.a27ed6p-94f, 0x1.6eb556p-101f,
     0x1.351c6ep-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.866436p-97f,
     0x1.98a496p-122f, 0x1.c03d4ep-102f, 0.0f, 0x1.fd46dep-36f, 0x1.56b2e2p-80f, 0.0f,
     0x1.6b7ae4p-97f, 0x1.3a59acp-50f, 0.0f, 0x1.b0ab26p-5f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.34996cp-63f, 0.0f, 0.0f, 0x1.243ac8p-44f, 0.0f, 0.0f, 0x1.5aadc2p-14f,
     0x1.9f0b86p-9f, 0.0f, 0x1.770ebp-12f, 0.0f, 0.0f, 0.0f, 0x1.1c5422p-27f, 0x1p0f,
     0x1.0b1aap-3f, 0.0f, 0x1.0be842p-21f, 0x1.74ce28p-124f, 0.0f, 0x1.c482c4p-66f,
     0x1.b186dcp-100f, 0x1.9f0e3p-66f, 0.0f, 0.0f, 0x1.dcbad4p-103f, 0x1.fac5b2p-69f,
     0.0f, 0x1.aade6cp-125f, 0.0f, 0x1.a859d6p-122f, 0.0f, 0.0f, 0.0f,
     0x1.61c79ep-13f, 0.0f, 0x1.694488p-48f, 0x1.645a18p-82f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f1c55p-40f, 0x1.2a278cp-52f, 0x1.e3ddb8p-72f, 0x1.586fc2p-47f, 0.0f,
     0x1.0a9a58p-53f, 0x1.8e890ap-123f, 0x1.efc4f8p-51f, 0.0f, 0.0f, 0x1.8d789ep-41f,
     0x1.0167f6p-47f, 0.0f, 0x1.cb47acp-24f, 0x1.b431cp-40f, 0x1.104bcp-69f,
     0x1.16b8bcp-97f, 0.0f, 0x1.21a548p-40f, 0x1.e5578ep-78f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7799ecp-97f, 0.0f, 0x1.9ffc74p-4f, 0x1.244772p-42f, 0x1.8720a4p-99f,
     0x1.68bcbep-115f, 0.0f, 0x1.26cdc8p-95f, 0.0f, 0x1.7aeb4ap-69f, 0.0f, 0.0f, 0.0f,
     0x1.78ec72p-61f, 0x1.299054p-51f, 0x1.bde666p-41f, 0x1.07c0a6p-5f,
     0x1.76a27ap-43f, 0x1.e7fc5ap-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b9043cp-84f, 0.0f, 0.0f, 0.0f, 0x1.44d452p-72f, 0.0f, 0.0f, 0x1.3cf294p-96f,
     0x1.ba6ab8p-99f, 0.0f, 0.0f, 0x1.34c5p-121f, 0.0f, 0.0f, 0x1.fa0f48p-11f,
     0x1.967bbp-106f, 0x1.ef1b5cp-9f, 0.0f, 0.0f, 0x1.b75fp-16f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f44bcap-24f, 0x1.cd86aep-100f, 0x1.40c4b6p-98f, 0x1.67c048p-96f,
     0x1.9749e2p-87f, 0.0f, 0x1.de80ecp-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.00da48p-111f, 0x1.7dab8p-23f, 0.0f, 0.0f, 0x1.58cf7ep-17f, 0.0f,
     0x1.fa3706p-40f, 0x1.e6a958p-115f, 0x1.771236p-65f, 0.0f, 0.0f, 0x1.eb7fdcp-108f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.66a4fep-110f, 0.0f, 0x1.0e2042p-120f,
     0x1.2ead3p-43f, 0.0f, 0x1.8c92eep-93f, 0.0f, 0x1.30bc0ap-27f, 0.0f,
     0x1.03af5cp-109f, 0x1.d46656p-25f, 0x1.f28314p-91f, 0x1.3d5bacp-2f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.77d79cp-97f, 0.0f, 0.0f, 0x1.929b2cp-69f, 0.0f,
     0.0f, 0x1.7713ccp-96f, 0.0f, 0.0f, 0x1.4d2432p-49f, 0x1.fb0a04p-101f, 0.0f, 0.0f,
     0x1.48d022p-100f, 0.0f, 0x1.d75b4ep-17f, 0.0f, 0x1.cfcc46p-89f, 0x1.713bcep-105f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b86ffp-18f,
     0x1.1af246p-98f, 0x1.7c89e6p-98f, 0.0f, 0x1.ef12p-2f, 0.0f, 0x1.173ca6p-109f,
     0.0f, 0x1.aa242ep-32f, 0.0f, 0.0f, 0.0f, 0x1.d2aeb8p-82f, 0.0f, 0.0f, 0.0f,
     0x1.402e4cp-34f, 0.0f, 0x1.72debap-58f, 0x1.5d20e2p-47f, 0x1.25336ap-2f, 0.0f,
     0.0f, 0x1.02017cp-50f, 0x1.3fff88p-115f, 0x1.a308bcp-92f, 0.0f, 0x1.4f9e6p-46f,
     0x1.249178p-32f, 0x1.3ca47cp-113f, 0.0f, 0.0f, 0x1.1a0636p-59f, 0x1.7e9c5ap-119f,
     0.0f, 0.0f, 0.0f, 0x1.6b750ap-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.08cc4ep-21f, 0.0f,
     0x1.b77666p-71f, 0.0f, 0.0f, 0.0f, 0x1.bf7e54p-121f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.cc4922p-111f, 0.0f, 0x1.feec02p-120f, 0x1.196cb4p-42f, 0.0f, 0.0f,
     0x1.1f517ep-53f, 0.0f, 0.0f, 0x1.698004p-59f, 0x1p0f, 0x1.dca3eap-116f, 0.0f,
     0x1.d4a844p-10f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.47c178p-49f, 0.0f, 0.0f,
     0x1.b20114p-96f, 0.0f, 0x1.828b12p-80f, 0.0f, 0.0f, 0x1.4d4c72p-75f, 0.0f,
     0x1.12efbep-65f, 0x1.d1215cp-92f, 0x1.7a3a1cp-75f, 0x1.e1e3fap-102f, 0.0f,
     0x1.943f6p-50f, 0.0f, 0x1.d1c00cp-39f, 0x1.f416ap-91f, 0.0f, 0x1.a9eab4p-82f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f37204p-31f, 0x1.4d18ep-94f, 0x1.071cdcp-17f,
     0x1.5eb6dcp-114f, 0.0f, 0x1.7d2f3p-41f, 0x1.16e6c8p-36f, 0.0f, 0x1.73c6aap-37f,
     0x1.63995cp-105f, 0x1.8a7ce8p-48f, 0.0f, 0x1.88e184p-63f, 0.0f, 0.0f, 0.0f,
     0x1.b21078p-65f, 0x1.89e74ep-59f, 0x1.51df34p-13f, 0.0f, 0x1.d66b3ep-123f,
     0x1.5baf3p-18f, 0x1.4bb61ep-101f, 0.0f, 0.0f, 0.0f, 0x1.00bf04p-69f,
     0x1.ad57b2p-59f, 0.0f, 0x1.1130a2p-60f, 0x1.edfbfap-115f, 0.0f, 0x1.f2afd8p-69f,
     0x1.943c68p-69f, 0.0f, 0x1.2411b6p-86f, 0x1.8dbddcp-6f, 0.0f, 0x1.fce4cap-89f,
     0.0f, 0.0f, 0.0f, 0x1.b32b04p-72f, 0.0f, 0x1.5d401cp-56f, 0x1.10f03cp-100f, 0.0f,
     0x1.92c554p-67f, 0x1.bfc30ep-89f, 0x1.8a084cp-79f, 0x1.7da898p-41f,
     0x1.ef3ce4p-48f, 0.0f, 0.0f, 0x1.0eba78p-88f, 0.0f, 0x1.6624e6p-9f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d95a8cp-67f, 0.0f, 0.0f, 0x1.a53786p-8f, 0.0f, 0.0f,
     0x1.a8157cp-55f, 0.0f, 0.0f, 0.0f, 0x1.ddd228p-123f, 0x1.0372ep-28f, 0.0f, 0.0f,
     0.0f, 0x1.0e70ccp-67f, 0.0f, 0.0f, 0x1.1d852p-7f, 0x1.f319d8p-87f, 0.0f, 0.0f,
     0x1.f8040ap-45f, 0.0f, 0x1.ea7fd2p-118f, 0.0f, 0x1.b1412ep-93f, 0.0f,
     0x1.a5d08cp-10f, 0x1.d63796p-37f, 0x1.d4a7d6p-34f, 0x1.b76654p-89f,
     0x1.6ffdaap-108f, 0.0f, 0.0f, 0.0f, 0x1.8e2f12p-82f, 0x1.60c054p-66f, 0.0f,
     0x1.8a26f4p-101f, 0x1.10b148p-114f, 0x1.c6343p-70f, 0x1.ce0db4p-57f, 0.0f, 0.0f,
     0.0f, 0x1p0f, 0.0f, 0x1.bd255p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d644b8p-5f,
     0.0f, 0x1.64d3c8p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5c546ap-53f,
     0x1.7e5beep-14f, 0.0f, 0x1.a31b72p-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c9445p-11f, 0x1.d2f3bp-74f, 0.0f, 0.0f, 0x1.3091e8p-66f, 0.0f, 0.0f, 0.0f,
     0x1.d4f11p-71f, 0.0f, 0.0f, 0x1.69cb68p-74f, 0x1.a1b8cap-33f, 0.0f,
     0x1.2f1c4ap-106f, 0x1.5441d8p-67f, 0.0f, 0.0f, 0x1.3bdbfcp-8f, 0x1.fbb5acp-52f,
     0.0f, 0x1.f85106p-110f, 0.0f, 0x1.9f1b1ep-55f, 0.0f, 0.0f, 0x1.140c8ep-116f,
     0x1.9dab9p-3f, 0x1.16fc2p-63f, 0.0f, 0.0f, 0x1.238d3ap-64f, 0.0f,
     0x1.e8ff14p-114f, 0x1.ccbf18p-84f, 0x1.b47626p-109f, 0x1p0f, 0x1.188bc8p-83f,
     0x1.22d288p-123f, 0x1.afee22p-46f, 0x1.574a9ep-45f, 0.0f, 0x1.df35fep-56f,
     0x1.219726p-107f, 0.0f, 0.0f, 0.0f, 0x1.5ccd2ap-122f
};
static const float external_bench_wrapper_input_table_arg1[1004]  = {
     0x1.896488p-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7637b6p-106f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c95076p-119f, 0x1.6c52d4p-8f, 0x1.f662c8p-84f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e977p-62f, 0.0f, 0x1.dc9a8cp-113f, 0.0f,
     0x1.d8c094p-32f, 0x1.08fd5ap-120f, 0.0f, 0x1.89adcep-73f, 0x1.ad39bep-79f,
     0x1.548d6cp-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.981a7ap-55f, 0.0f, 0.0f,
     0x1.472518p-49f, 0x1.1cd948p-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f59596p-98f,
     0.0f, 0.0f, 0x1.8f031ep-116f, 0x1.b843d4p-35f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2182ap-73f, 0x1.54e6a6p-25f, 0x1.00c5b2p-98f, 0.0f, 0x1.1e6d06p-116f,
     0x1.95717ap-81f, 0.0f, 0x1.79e8e6p-52f, 0x1.1bec26p-103f, 0x1.022004p-122f, 0.0f,
     0.0f, 0x1.a0e0dp-90f, 0x1.6c6bfp-60f, 0x1.2b6b74p-120f, 0.0f, 0.0f,
     0x1.fa3ddap-46f, 0x1.29e864p-80f, 0.0f, 0x1.54f3ecp-112f, 0.0f, 0.0f,
     0x1.bd2d82p-94f, 0.0f, 0x1.20a5e4p-94f, 0.0f, 0x1.c03adcp-117f, 0x1.1442ep-40f,
     0.0f, 0x1.34ec58p-31f, 0.0f, 0x1.7d87d8p-64f, 0.0f, 0x1.1ef2fcp-21f, 0.0f, 0.0f,
     0x1.e995c4p-11f, 0.0f, 0x1.074e06p-69f, 0x1.067c26p-10f, 0x1.b1e74cp-66f, 0.0f,
     0x1.897b42p-125f, 0x1.012ddcp-13f, 0x1.5e3eecp-3f, 0.0f, 0x1.d3b6ap-124f, 0.0f,
     0.0f, 0x1.42dacep-55f, 0x1.30b7c6p-54f, 0x1.f89beep-30f, 0.0f, 0x1.eb35bp-115f,
     0x1.def43cp-61f, 0x1.5a76eep-54f, 0x1.043b24p-109f, 0.0f, 0x1.d7460ep-86f,
     0x1.8697e8p-43f, 0x1.a8a12p-93f, 0x1.b2e018p-52f, 0x1.d21ec8p-89f, 0.0f, 0.0f,
     0.0f, 0x1.780df4p-55f, 0x1.b9397p-119f, 0.0f, 0x1.2c321p-93f, 0.0f,
     0x1.9db0fp-68f, 0.0f, 0.0f, 0x1.2ba06ep-65f, 0.0f, 0.0f, 0x1.69b834p-80f, 0.0f,
     0x1.05d07p-77f, 0.0f, 0x1.fd0932p-107f, 0x1.dcbaap-93f, 0.0f, 0.0f,
     0x1.4acacp-71f, 0.0f, 0x1.26c6aap-37f, 0x1.f20e02p-50f, 0x1.99483cp-11f, 0.0f,
     0x1.c8b56ap-6f, 0x1.67513cp-5f, 0.0f, 0.0f, 0x1.e0df4ep-59f, 0x1.9d1562p-49f,
     0.0f, 0x1.a24822p-80f, 0x1.8a9d0cp-108f, 0x1.308b68p-18f, 0.0f, 0.0f, 0.0f,
     0x1.f69828p-109f, 0x1.649f4ep-72f, 0x1.bf50cap-43f, 0.0f, 0.0f, 0.0f,
     0x1.3dd12ap-87f, 0x1.310108p-116f, 0x1.9221fap-22f, 0x1.5eb72p-51f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.fee0fep-41f, 0x1.a2b0ccp-26f, 0x1.277fbcp-118f, 0.0f,
     0x1.3729bcp-48f, 0x1.cff1cp-62f, 0x1.ab0c22p-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.508992p-92f, 0.0f, 0.0f, 0x1.025ae6p-12f, 0x1.97ab84p-19f, 0.0f,
     0x1.e60dd8p-27f, 0x1.df3fcp-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.607956p-4f, 0.0f,
     0.0f, 0x1.9c2c4ep-64f, 0.0f, 0.0f, 0x1.cca336p-101f, 0.0f, 0x1.5f3cc8p-72f, 0.0f,
     0x1.383fbap-3f, 0.0f, 0x1.d77574p-46f, 0x1.a00a5ep-102f, 0.0f, 0.0f,
     0x1.f04be4p-21f, 0.0f, 0x1.47b71ap-85f, 0x1.39af72p-77f, 0x1.a134f8p-28f, 0.0f,
     0x1.d3e3e2p-38f, 0.0f, 0.0f, 0x1.5099b4p-106f, 0.0f, 0.0f, 0x1.327542p-94f, 0.0f,
     0.0f, 0.0f, 0x1.0da3c4p-124f, 0.0f, 0x1.83cdf6p-107f, 0x1.c3ba6ap-36f, 0.0f,
     0x1.c8a36p-65f, 0x1.f43e6ep-49f, 0x1.e2d8fcp-63f, 0x1p0f, 0x1.725b34p-96f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.08a5a6p-111f, 0.0f, 0x1.9827f8p-107f, 0.0f, 0.0f, 0.0f,
     0x1.1861dp-110f, 0x1.cff722p-96f, 0.0f, 0.0f, 0.0f, 0x1.f5cdf8p-27f,
     0x1.58ed92p-71f, 0x1.a9566ap-71f, 0x1.85fc4ep-93f, 0x1.34891ap-58f, 0.0f,
     0x1.7e7122p-26f, 0.0f, 0.0f, 0x1.f7053p-54f, 0.0f, 0x1.59eaf4p-8f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.c560d8p-86f, 0.0f, 0x1.923588p-67f, 0.0f, 0x1.c6b54cp-33f, 0.0f,
     0x1.470f6ep-109f, 0.0f, 0x1.6af1bcp-75f, 0.0f, 0.0f, 0x1.e70cc8p-107f,
     0x1.9a4bc8p-117f, 0.0f, 0x1.9404bep-26f, 0.0f, 0x1.8af04cp-97f, 0x1.8c9a64p-100f,
     0x1.51df74p-74f, 0.0f, 0.0f, 0x1.241796p-46f, 0.0f, 0x1.2c7d18p-67f, 0.0f,
     0x1.bbca74p-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a925d2p-98f, 0x1.d44308p-29f,
     0x1.231086p-102f, 0x1.82b9f8p-70f, 0.0f, 0x1.383a1ep-7f, 0x1.2f5434p-106f,
     0x1.a33218p-113f, 0.0f, 0.0f, 0.0f, 0x1.6b9e5cp-34f, 0x1.9bb2fcp-73f, 0.0f,
     0x1.f92d3cp-16f, 0x1.5fc54cp-39f, 0.0f, 0x1.4a321ep-88f, 0x1.cd13dp-8f,
     0x1.337b58p-88f, 0x1.f6c132p-107f, 0x1.b139cp-77f, 0x1.617732p-95f,
     0x1.7ffe8ep-49f, 0x1.66674ep-49f, 0x1.0f090ap-100f, 0x1.a383aap-108f, 0.0f, 0.0f,
     0x1.8e18fp-90f, 0.0f, 0.0f, 0.0f, 0x1.c7a0a6p-96f, 0.0f, 0x1.3baa32p-115f,
     0x1.091562p-80f, 0.0f, 0x1.97a88ep-17f, 0.0f, 0.0f, 0.0f, 0x1.37166p-106f,
     0x1.cd2d1ep-54f, 0.0f, 0x1.e09024p-74f, 0.0f, 0x1.d93e92p-77f, 0.0f,
     0x1.a9a4fcp-23f, 0.0f, 0x1.19b988p-12f, 0.0f, 0x1.6c15eap-16f, 0x1.4d121p-122f,
     0x1.6dceacp-39f, 0x1.64ad1p-71f, 0.0f, 0x1.f9ff04p-15f, 0x1.544e16p-46f, 0.0f,
     0.0f, 0.0f, 0x1.530802p-32f, 0x1.c6d2f8p-97f, 0.0f, 0x1.5d329ep-78f, 0.0f, 0.0f,
     0.0f, 0x1.1bffb2p-62f, 0.0f, 0.0f, 0x1.eb945ep-48f, 0x1.9679acp-86f,
     0x1.acffa8p-104f, 0.0f, 0x1.f95bfep-3f, 0x1.5093f8p-82f, 0.0f, 0.0f, 0.0f,
     0x1.bdb24cp-83f, 0.0f, 0.0f, 0.0f, 0x1.ec5b36p-22f, 0.0f, 0.0f, 0.0f,
     0x1.cb18f4p-66f, 0x1.1bbafp-36f, 0.0f, 0.0f, 0x1.4532eep-79f, 0.0f,
     0x1.518a8ap-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.543a9cp-43f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.be5dccp-53f, 0.0f, 0x1.77a988p-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d06b4p-92f,
     0.0f, 0x1.85e47cp-93f, 0.0f, 0x1.2e3cf4p-6f, 0x1.bda0ap-61f, 0.0f,
     0x1.7a0828p-81f, 0x1.b5a59ap-37f, 0x1.933f7p-86f, 0x1.7fb882p-80f, 0.0f, 0.0f,
     0x1.30da3p-98f, 0x1.12fc82p-54f, 0.0f, 0x1.77c852p-124f, 0x1.ec1142p-87f,
     0x1.1ce782p-72f, 0x1.b8130ep-13f, 0x1.0b9ccep-99f, 0.0f, 0.0f, 0.0f,
     0x1.87b688p-33f, 0x1.108cf2p-109f, 0.0f, 0x1.2d0da2p-50f, 0.0f, 0x1.4cb5e4p-114f,
     0x1.26fe68p-68f, 0x1.1ea972p-58f, 0.0f, 0x1.ae1036p-95f, 0x1.d152ecp-81f,
     0x1.dc6a9cp-38f, 0.0f, 0x1.c025a2p-111f, 0x1.efd572p-25f, 0.0f, 0x1.5f35c4p-48f,
     0x1.f2abcap-87f, 0.0f, 0x1.57f0dap-116f, 0x1.471c18p-41f, 0x1.5f92bep-123f,
     0x1.744a9p-92f, 0x1.b98a9p-71f, 0x1.360486p-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6e4426p-25f, 0.0f, 0x1.08d064p-102f, 0x1.1cd506p-107f, 0x1.b74526p-63f,
     0x1.070aa8p-4f, 0.0f, 0.0f, 0x1.0bd2c4p-57f, 0x1.ae1ecp-48f, 0x1.cde2b2p-34f,
     0.0f, 0x1.1f265cp-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a19692p-99f, 0.0f, 0x1.fbc6c6p-86f, 0x1.a55922p-2f, 0x1.84ef76p-6f,
     0x1.350d62p-37f, 0x1.db82d4p-39f, 0x1.c1d05p-5f, 0.0f, 0.0f, 0x1.3998f4p-12f,
     0.0f, 0x1.0d9888p-45f, 0x1.5d6ce6p-96f, 0.0f, 0x1.185dd4p-55f, 0x1.5153cap-35f,
     0x1p0f, 0x1.927b18p-8f, 0x1.c9f722p-41f, 0x1.28c26p-5f, 0x1.ac0accp-24f,
     0x1.679308p-69f, 0x1.b394fcp-11f, 0x1.fa5656p-49f, 0x1.d45ea8p-111f,
     0x1.562ffep-99f, 0x1.caf434p-80f, 0.0f, 0.0f, 0.0f, 0x1.d2a53ep-29f, 0.0f,
     0x1.ee4e64p-74f, 0x1.44c35p-73f, 0.0f, 0x1.c4aee2p-14f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.95d574p-70f, 0x1.d9e2fap-92f, 0x1.ff45d8p-50f, 0x1.aa0edep-79f, 0.0f, 0.0f,
     0x1.dca9e8p-82f, 0x1.34d0a8p-15f, 0.0f, 0.0f, 0x1.ffd13ep-125f, 0x1.e52192p-32f,
     0x1.c0b9ccp-65f, 0x1.219368p-32f, 0x1.bb10b6p-75f, 0.0f, 0x1.22f152p-84f, 0.0f,
     0x1.74223cp-70f, 0x1.780dcep-25f, 0.0f, 0x1.8c8caap-51f, 0.0f, 0.0f,
     0x1.5cb2bcp-34f, 0x1.cf3a2ap-80f, 0.0f, 0.0f, 0.0f, 0x1.e83cacp-106f, 0.0f,
     0x1.b69ce6p-66f, 0.0f, 0.0f, 0x1.f326d4p-40f, 0x1.779aacp-85f, 0x1.034c82p-65f,
     0x1.2ea03p-48f, 0x1.4c828ep-32f, 0x1.09504ep-118f, 0.0f, 0x1.3b101cp-45f, 0.0f,
     0x1.762a14p-16f, 0.0f, 0x1.ca1b32p-39f, 0x1.a8225ap-111f, 0.0f, 0.0f,
     0x1.d36634p-83f, 0x1.8761a6p-26f, 0.0f, 0x1.1b1bf2p-36f, 0.0f, 0.0f,
     0x1.619504p-45f, 0x1.d3b76cp-121f, 0.0f, 0x1.7d569ap-119f, 0.0f, 0.0f,
     0x1.def836p-44f, 0x1.be6a6ep-29f, 0x1.c17ebep-71f, 0.0f, 0.0f, 0.0f,
     0x1.89915ep-21f, 0x1.9073e4p-54f, 0.0f, 0.0f, 0x1.7c097ep-51f, 0x1.aeee4p-95f,
     0.0f, 0x1p0f, 0x1.9df316p-111f, 0.0f, 0x1.70ac8ap-99f, 0x1.c8b464p-42f,
     0x1.ddeb24p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0aa93p-29f, 0x1.82170ap-8f,
     0x1.bc9af4p-32f, 0x1.ed4b66p-60f, 0.0f, 0.0f, 0x1.d769cap-73f, 0x1.92befp-81f,
     0.0f, 0.0f, 0.0f, 0x1.9a327p-26f, 0.0f, 0.0f, 0x1.f11842p-65f, 0x1.65075p-63f,
     0x1.026344p-94f, 0.0f, 0.0f, 0x1.fd608p-66f, 0x1.8931d6p-111f, 0.0f,
     0x1.957beap-88f, 0x1p0f, 0.0f, 0x1.e7e5a4p-2f, 0x1.899d3p-23f, 0.0f,
     0x1.3da8e6p-19f, 0x1.68e4d2p-49f, 0.0f, 0.0f, 0x1.cde36cp-25f, 0x1.7d5f6cp-72f,
     0x1.f18c8ep-65f, 0.0f, 0.0f, 0.0f, 0x1.cf2a8p-8f, 0.0f, 0x1.76bd96p-114f,
     0x1.7c8052p-126f, 0.0f, 0x1.bc6da8p-89f, 0x1.f4f80ap-28f, 0x1.c6cfccp-66f, 0.0f,
     0.0f, 0x1.3ae0fap-76f, 0x1.83de24p-31f, 0x1.c888b6p-51f, 0x1.e3a69ep-54f, 0.0f,
     0.0f, 0x1.70e958p-114f, 0x1.24113p-110f, 0.0f, 0x1.60d95p-19f, 0.0f,
     0x1.e2c74p-8f, 0x1.6d8496p-72f, 0.0f, 0x1.e6f008p-8f, 0x1.535d5ap-122f,
     0x1.5f3b7cp-29f, 0.0f, 0.0f, 0x1.54b408p-62f, 0x1.7659f6p-108f, 0.0f,
     0x1.36280ap-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3898cp-101f, 0.0f, 0x1.db06c8p-54f,
     0.0f, 0x1.adff1cp-87f, 0x1.eec0fap-87f, 0.0f, 0.0f, 0x1.c298dep-116f,
     0x1.fb9792p-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.735512p-8f, 0.0f,
     0x1.d55f6ep-2f, 0x1.a03c4ap-96f, 0.0f, 0x1.105256p-97f, 0x1.184568p-4f, 0.0f,
     0x1.3920e2p-39f, 0.0f, 0.0f, 0.0f, 0x1.77fd98p-114f, 0x1.fedf86p-66f,
     0x1.2b4p-29f, 0x1.f87e5ep-108f, 0x1.936e44p-76f, 0x1.e6a76cp-2f, 0.0f,
     0x1.304b9cp-50f, 0x1.ff86fp-126f, 0.0f, 0.0f, 0x1.388b8ap-105f, 0.0f, 0.0f, 0.0f,
     0x1.80eebap-42f, 0x1.c918b4p-110f, 0.0f, 0.0f, 0.0f, 0x1.6f47c4p-98f,
     0x1.e1883ep-43f, 0x1.eb4002p-108f, 0.0f, 0x1.b003cp-122f, 0.0f, 0.0f,
     0x1.7a7a08p-15f, 0x1.6e7bep-93f, 0x1.de3e68p-77f, 0x1.d0ec3ap-70f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.263aep-52f, 0x1.082c02p-92f, 0.0f, 0.0f, 0.0f, 0x1p0f,
     0x1.6a060cp-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.64858ap-26f, 0x1p0f, 0.0f, 0.0f,
     0.0f, 0x1.ada2b2p-26f, 0.0f, 0.0f, 0x1.01c936p-45f, 0x1.5a2d36p-20f,
     0x1.18c71ap-115f, 0.0f, 0.0f, 0x1.88dd3p-41f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5f2f0ap-79f, 0.0f, 0x1.9b88bcp-1f, 0.0f, 0x1.c70504p-107f, 0.0f, 0.0f,
     0x1.851492p-26f, 0.0f, 0x1.e620cap-39f, 0.0f, 0x1.01d98p-71f, 0x1.3fa28ep-25f,
     0x1.d836bep-39f, 0x1.4b6f9ep-112f, 0x1.1de032p-66f, 0.0f, 0.0f, 0x1.f7d8a6p-25f,
     0x1.ca32bcp-72f, 0x1.07dec4p-2f, 0x1.8253cp-63f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bf801p-11f, 0.0f, 0x1.7ab3b8p-75f, 0x1.f80fep-114f, 0.0f, 0x1.8d3e6ep-24f,
     0.0f, 0x1.94c92p-22f, 0x1.62035ep-22f, 0x1.d16794p-65f, 0.0f, 0x1.c33a0ap-58f,
     0.0f, 0x1.81eb88p-34f, 0.0f, 0.0f, 0x1.e4210ap-18f, 0.0f, 0x1.424448p-120f, 0.0f,
     0.0f, 0.0f, 0x1.d56912p-6f, 0.0f, 0x1.4f781ep-82f, 0.0f, 0x1.424568p-15f,
     0x1.7b5968p-60f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.b929f6p-50f, 0x1.032da4p-3f,
     0.0f, 0x1.80427p-80f, 0x1.2e2104p-65f, 0x1.0c3e66p-43f, 0.0f, 0x1.0046d2p-67f,
     0x1.39f94cp-110f, 0.0f, 0.0f, 0x1.14ca9ep-43f, 0.0f, 0.0f, 0x1.c9fdf8p-30f, 0.0f,
     0x1.f7cd94p-99f, 0.0f, 0x1.e78a7ap-82f, 0x1.d50cc8p-66f, 0x1.c55e88p-18f, 0.0f,
     0.0f, 0x1.9a508ap-120f, 0.0f, 0.0f, 0.0f, 0x1.7b467cp-115f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.36ca06p-77f, 0x1.ec586ap-67f, 0.0f, 0x1.0dd2ep-85f, 0.0f, 0.0f,
     0x1.1d98f6p-32f, 0.0f, 0.0f, 0x1.838ce8p-48f, 0x1.d099dep-84f, 0x1.238e1cp-115f,
     0.0f, 0x1.0dc376p-10f, 0x1.3237c8p-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8465a8p-53f,
     0x1.1cd1d6p-84f, 0.0f, 0x1.bf6564p-84f, 0x1.4de0bap-1f, 0.0f, 0x1.d53d2ap-42f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.466de8p-107f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a4e4f6p-39f, 0x1.858b74p-60f, 0x1.ba6dd2p-9f, 0x1.8b72c6p-93f,
     0x1.b6866ep-36f, 0x1.e57056p-29f, 0x1.e5779ap-98f, 0x1.83258ep-113f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.345d4ep-94f, 0.0f, 0x1.d5bbd8p-35f, 0x1.cc30cp-11f,
     0x1.7d0dbp-106f, 0.0f, 0.0f, 0x1.7282cep-115f, 0x1.504d4ep-109f, 0.0f,
     0x1.83665p-16f, 0.0f, 0.0f, 0x1.ac4af2p-39f, 0.0f, 0x1.2f0b6cp-108f, 0.0f, 0.0f,
     0x1.51bafp-78f, 0x1.19d85ap-83f, 0x1.72db22p-30f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.051836p-57f, 0.0f, 0.0f, 0x1.aee5b6p-125f, 0.0f, 0.0f, 0.0f,
     0x1.b0b45cp-124f, 0x1.f63e2ap-85f, 0x1.f83e24p-63f, 0x1.4ffe32p-23f, 0.0f, 0.0f,
     0.0f, 0x1.bd309ep-49f, 0x1.2500fp-121f, 0x1.06cf42p-100f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.98549p-94f, 0x1.2abb3p-42f, 0.0f, 0x1.41dffap-78f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e7bc7cp-9f, 0x1.a3869cp-76f, 0x1.5bc706p-65f, 0.0f, 0.0f, 0.0f,
     0x1.bf0e6p-88f, 0.0f, 0x1.b99dc2p-18f, 0.0f, 0.0f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_float4_t global_bench_acc;
    int64_t timer;
    int64_t tmp;
    int32_t j;
    int64_t tmp1;
    int64_t tmp2;
    double id_tmp;
    double cpe_measure;
    
    global_bench_acc = external_bench_wrapper_cst;
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
        ml_float4_t local_acc;
        int32_t i;
        ml_float4_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1004));){
            ml_float4_t tmp0;
            ml_float4_t tmp1;
            ml_float4_t tmp2;
            ml_float4_t tmp3;
            int32_t tmp4;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            memcpy(&tmp1, ((ml_float4_t*)(external_bench_wrapper_input_table_arg1+ i)), 16);
            tmp2 = Sleef_fminf4_avx2128(tmp0, tmp1);
            memcpy(((ml_float4_t*)(external_bench_wrapper_output_table+ i)), &(tmp2), 16);
            tmp3 = local_acc + tmp2;
            local_acc = tmp3;
            tmp4 = i + INT32_C(4);
            i = tmp4;
        }
        tmp0 = global_bench_acc + local_acc;
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
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_fminf4_avx2128 %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_fminf4_avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
