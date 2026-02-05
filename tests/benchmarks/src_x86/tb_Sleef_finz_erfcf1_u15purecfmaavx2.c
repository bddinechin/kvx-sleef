/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_erfcf1_u15purecfma.c --function \
 *     Sleef_finz_erfcf1_u15purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0x1p0f, 0x1.988ea4p-30f, 0.0f, 0x1.71b836p-82f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.56b446p-64f, 0.0f, 0x1.1afbfep-90f, 0.0f, 0x1.bf2972p-21f,
     0x1.5c6a04p-80f, 0.0f, 0x1.ba60ecp-125f, 0x1.5ddb8ap-67f, 0.0f, 0x1.60e2c8p-35f,
     0x1.977cd6p-82f, 0x1.0bf0d6p-118f, 0x1.9fa634p-20f, 0.0f, 0x1.f8433cp-62f, 0.0f,
     0x1.74682p-59f, 0x1.957e64p-35f, 0x1.92affcp-97f, 0x1.e9f0e2p-1f, 0.0f,
     0x1.2e3764p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.837448p-20f, 0.0f, 0x1.23316ep-104f,
     0x1.b1d608p-35f, 0.0f, 0x1.b86de8p-39f, 0.0f, 0x1.a71f6cp-39f, 0x1.2bf216p-52f,
     0x1.89b49ap-114f, 0.0f, 0.0f, 0x1.6bb28cp-114f, 0x1.39faa8p-65f, 0.0f, 0.0f,
     0x1.660a28p-48f, 0.0f, 0x1.72addp-37f, 0.0f, 0x1.b0f586p-40f, 0x1.4f416cp-4f,
     0x1.3196dcp-88f, 0x1.56bad2p-51f, 0.0f, 0x1.a43ep-108f, 0.0f, 0.0f,
     0x1.016b22p-37f, 0x1.005dbep-121f, 0x1.6d9c98p-54f, 0.0f, 0.0f, 0x1.9d4328p-46f,
     0.0f, 0.0f, 0.0f, 0x1.aff674p-121f, 0.0f, 0.0f, 0x1.8f4326p-95f, 0x1.ea988cp-54f,
     0.0f, 0x1.f0295ep-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ae9fbcp-114f, 0.0f,
     0x1.50d552p-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.01f498p-83f, 0x1.3cc0cp-77f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.cfe7f8p-112f, 0x1.6eeea8p-89f, 0x1.489318p-20f,
     0x1.59cfp-95f, 0x1p0f, 0x1.17212cp-54f, 0x1.deadf6p-32f, 0x1.1c9eeep-40f,
     0x1.5bb1f2p-85f, 0x1.ff71dp-7f, 0.0f, 0x1.b66adp-6f, 0.0f, 0x1.02db7ep-78f,
     0x1.74ca92p-52f, 0x1.4ce3ap-34f, 0x1.76eddp-20f, 0.0f, 0x1.da5462p-106f, 0.0f,
     0x1.a250e2p-106f, 0.0f, 0x1.630f66p-16f, 0.0f, 0x1.d59748p-19f, 0.0f,
     0x1.a98b12p-1f, 0.0f, 0x1.00ca2cp-54f, 0.0f, 0x1.d0715ep-6f, 0x1.c6b172p-7f,
     0x1.88e4b6p-63f, 0.0f, 0x1.e6629p-5f, 0.0f, 0.0f, 0x1.ad3298p-96f,
     0x1.de4f04p-59f, 0x1.992bfp-57f, 0x1.09e788p-37f, 0.0f, 0.0f, 0.0f,
     0x1.0ff818p-36f, 0x1.d6a698p-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4f3066p-87f, 0.0f, 0x1.7bc974p-40f, 0.0f, 0.0f, 0.0f, 0x1.60b8ap-8f, 0.0f,
     0x1.99d01ap-27f, 0.0f, 0x1.c916a8p-48f, 0x1.25749ap-26f, 0x1.e5eb02p-57f,
     0x1.5f61aep-97f, 0.0f, 0x1.2cdc58p-122f, 0x1.2c49c4p-37f, 0.0f, 0x1.9e96bep-29f,
     0x1.c38edcp-46f, 0x1.39dcecp-63f, 0.0f, 0x1.bd0572p-61f, 0x1.ac69ap-6f,
     0x1.8e14a4p-91f, 0.0f, 0.0f, 0x1.cba81ep-57f, 0x1.28fe7p-14f, 0.0f, 0.0f,
     0x1.8938eep-86f, 0.0f, 0x1.b63bd8p-5f, 0.0f, 0.0f, 0.0f, 0x1.19deaap-40f, 0.0f,
     0x1.83cp-98f, 0.0f, 0x1.4172fap-47f, 0x1.3612c6p-59f, 0.0f, 0.0f,
     0x1.aa743ap-18f, 0x1.75ba86p-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d6558cp-41f, 0.0f,
     0.0f, 0x1.ce7696p-10f, 0.0f, 0x1.afa9fep-14f, 0.0f, 0.0f, 0x1.9c8adp-110f, 0.0f,
     0.0f, 0x1.76af04p-100f, 0x1.1129e4p-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.12193p-26f,
     0x1.f4a528p-106f, 0.0f, 0.0f, 0x1.b3c5e4p-22f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.162a26p-105f, 0x1.ec04ecp-87f, 0x1.e5b7a8p-40f, 0x1.0f2b52p-33f, 0.0f,
     0x1.63c9f8p-126f, 0x1.9c37b8p-7f, 0.0f, 0.0f, 0.0f, 0x1.0292b8p-111f, 0.0f,
     0x1.ef5fa4p-17f, 0.0f, 0.0f, 0.0f, 0x1.c44558p-107f, 0x1.4cba9ap-39f,
     0x1.a2dd04p-46f, 0.0f, 0x1.9c0ebap-8f, 0.0f, 0x1.92c7bp-32f, 0x1.c69642p-64f,
     0.0f, 0x1.b94baap-84f, 0x1.4d5c82p-59f, 0.0f, 0x1.16cc1p-116f, 0.0f, 0.0f,
     0x1.3ff24ap-35f, 0.0f, 0x1.0934c6p-31f, 0.0f, 0x1.3a4556p-111f, 0x1.e15198p-53f,
     0x1.054c0cp-61f, 0.0f, 0x1.c9f7eap-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ec40c6p-53f, 0x1.7598f4p-123f, 0x1.aa562p-96f, 0.0f, 0x1.bf1af6p-36f,
     0x1.36e4dp-116f, 0x1.2c2ff4p-68f, 0.0f, 0x1.295d24p-95f, 0.0f, 0.0f,
     0x1.b02628p-103f, 0x1.8b0deap-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7457b8p-78f,
     0x1.3c409p-45f, 0x1.91a6f4p-78f, 0.0f, 0.0f, 0x1.896da6p-5f, 0x1.1a93ecp-37f,
     0.0f, 0.0f, 0x1.aae306p-71f, 0.0f, 0.0f, 0x1.6cfd54p-56f, 0x1.e85e0cp-49f, 0.0f,
     0x1.821782p-83f, 0.0f, 0x1.46b58cp-31f, 0.0f, 0x1.939f9cp-37f, 0.0f, 0.0f, 0.0f,
     0x1.e5361ep-97f, 0x1.b51a8ap-14f, 0x1.820592p-103f, 0x1.d313fcp-103f, 0.0f, 0.0f,
     0.0f, 0x1.d4ec06p-43f, 0x1.8ebc9ap-93f, 0.0f, 0.0f, 0.0f, 0x1.cffe4p-86f,
     0x1.f9186ep-73f, 0.0f, 0.0f, 0.0f, 0x1.0ca18ap-26f, 0x1.a76c6ap-36f,
     0x1.f5e7p-114f, 0x1.0f27ap-21f, 0.0f, 0.0f, 0x1.94e75cp-10f, 0.0f, 0.0f,
     0x1.c9264cp-23f, 0.0f, 0.0f, 0x1.349864p-102f, 0.0f, 0.0f, 0.0f, 0x1.a7d52ap-8f,
     0x1.cba9f6p-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.05b172p-81f, 0x1.830554p-98f,
     0x1.c8a8b4p-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.36eb18p-33f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e037fp-107f, 0x1.cf37c2p-47f, 0x1.021f3p-66f, 0x1.ebc268p-102f,
     0x1.c9d736p-90f, 0.0f, 0.0f, 0.0f, 0x1.439084p-121f, 0.0f, 0.0f, 0x1.f33884p-51f,
     0.0f, 0.0f, 0x1.c4113cp-126f, 0.0f, 0.0f, 0x1.2c9616p-123f, 0.0f,
     0x1.f5be88p-57f, 0x1.29770cp-125f, 0.0f, 0.0f, 0x1.91a658p-20f, 0x1.c5520cp-78f,
     0x1.df2908p-34f, 0x1.436e7ep-10f, 0.0f, 0x1.3ac57p-90f, 0x1.475cdp-52f, 0.0f,
     0x1.d54ec8p-27f, 0.0f, 0x1.fa1238p-44f, 0x1.43481cp-73f, 0x1.34e604p-26f,
     0x1.50539cp-46f, 0x1.7d1dbp-84f, 0.0f, 0.0f, 0.0f, 0x1.621754p-119f, 0.0f, 0.0f,
     0x1.63f5b6p-58f, 0x1.f02c4ep-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d4c35ap-75f, 0x1.452454p-23f, 0x1.e6f3d2p-61f, 0.0f, 0x1.ac5898p-120f,
     0x1.729afep-69f, 0.0f, 0x1.491112p-125f, 0.0f, 0x1.b4c562p-38f, 0x1.56d48ep-28f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.88abcep-46f, 0x1.20470ep-65f, 0.0f, 0.0f,
     0x1.462bbep-123f, 0x1.3b29dp-125f, 0x1.f8e27cp-118f, 0.0f, 0.0f,
     0x1.0ec722p-113f, 0x1.02e87ep-30f, 0x1.fe53fep-28f, 0x1.447ea2p-92f,
     0x1.c3141ap-50f, 0.0f, 0x1.6a7fb4p-125f, 0x1.308e5ep-75f, 0.0f, 0x1.24e53ap-64f,
     0.0f, 0.0f, 0x1.3585d8p-27f, 0x1.f53e76p-49f, 0x1.5ca712p-19f, 0.0f,
     0x1.2efbe4p-19f, 0.0f, 0x1.196d0ap-82f, 0x1.854a1p-80f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c370c8p-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.140cacp-48f, 0x1.d0dd26p-39f, 0.0f, 0.0f, 0x1.6c50c6p-42f, 0x1.27d714p-52f,
     0.0f, 0.0f, 0x1.b007cep-78f, 0.0f, 0x1.8d5fdcp-92f, 0x1.8d3faap-68f, 0.0f,
     0x1.1a5254p-70f, 0.0f, 0.0f, 0x1.490936p-91f, 0.0f, 0x1.16f5bep-121f, 0.0f,
     0x1.60011ep-20f, 0.0f, 0x1.4e3ep-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2fff94p-102f,
     0.0f, 0.0f, 0.0f, 0x1.9166ecp-42f, 0x1.d82b8p-59f, 0.0f, 0x1.31cf98p-23f,
     0x1.698738p-51f, 0.0f, 0.0f, 0x1.d4a2ap-17f, 0x1.ea685p-101f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b9c112p-94f, 0.0f, 0.0f, 0x1.134272p-38f, 0x1.0608fp-37f,
     0x1.3cb372p-55f, 0x1.f36da8p-18f, 0x1.5d324cp-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f92c28p-121f, 0.0f, 0x1.752ae2p-93f, 0.0f, 0.0f, 0x1.057716p-109f,
     0.0f, 0.0f, 0.0f, 0x1.1bf56ap-15f, 0.0f, 0.0f, 0x1.6147fp-60f, 0.0f, 0.0f,
     0x1.6423c6p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b121dcp-53f, 0.0f, 0x1.4820fep-112f,
     0x1.c63098p-122f, 0x1.3d192cp-78f, 0x1.34946ap-54f, 0.0f, 0.0f, 0.0f,
     0x1.21a42p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f9e3d6p-16f, 0x1.f06e86p-5f,
     0x1.0b09fap-45f, 0x1.3a6e12p-121f, 0x1.86b206p-14f, 0.0f, 0.0f, 0x1.83ec3cp-40f,
     0.0f, 0x1.e75692p-61f, 0.0f, 0x1.f1fde4p-120f, 0.0f, 0x1.76319ep-105f,
     0x1.286584p-36f, 0.0f, 0x1.21c768p-26f, 0x1.ba3828p-115f, 0.0f, 0.0f,
     0x1.47d44ap-70f, 0.0f, 0.0f, 0x1.73e5f6p-23f, 0x1.b7af86p-30f, 0.0f, 0.0f, 0.0f,
     0x1.1ecd2ep-9f, 0x1.9d4abep-97f, 0x1.7f8586p-120f, 0x1.9c104p-47f,
     0x1.99415cp-43f, 0.0f, 0x1.7e88c8p-69f, 0x1.902bd4p-62f, 0x1.e5a6e8p-10f, 0.0f,
     0x1.d8444ep-113f, 0.0f, 0x1.36c978p-77f, 0.0f, 0x1.0ae78cp-45f, 0x1.083984p-80f,
     0x1.c64324p-116f, 0x1.dc8cfp-8f, 0.0f, 0x1.eb32p-47f, 0.0f, 0x1.82400cp-93f,
     0.0f, 0.0f, 0x1.ccc022p-122f, 0x1.8077a4p-66f, 0x1.879f2ap-65f, 0x1.2902e6p-79f,
     0x1.41b00ap-109f, 0.0f, 0.0f, 0x1.4505ecp-7f, 0.0f, 0x1.74be92p-124f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d6514ap-124f, 0x1.e43604p-126f, 0x1.00632ep-53f,
     0x1.c47c9cp-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.01a7ap-122f, 0.0f, 0.0f,
     0x1.0fe6f8p-29f, 0x1.a255dcp-4f, 0.0f, 0.0f, 0.0f, 0x1.7d225ap-49f,
     0x1.ff6c14p-63f, 0x1.ce454ap-5f, 0.0f, 0x1.878172p-97f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.6864dcp-47f, 0x1.fd087ep-104f, 0x1.18efdcp-9f, 0.0f,
     0x1.d40beap-5f, 0.0f, 0.0f, 0.0f, 0x1.be15dap-12f, 0x1.a0edd4p-55f,
     0x1.f1249p-82f, 0.0f, 0.0f, 0x1.668f78p-13f, 0x1.f786ep-98f, 0.0f,
     0x1.72b532p-104f, 0x1.72990ap-55f, 0.0f, 0.0f, 0.0f, 0x1.6618ap-125f, 0.0f,
     0x1.815dd8p-62f, 0.0f, 0x1.e7e84ap-16f, 0.0f, 0x1.d5cfe4p-110f, 0.0f,
     0x1.a3e66cp-29f, 0x1.9bb1c8p-51f, 0x1.7bd4ep-30f, 0.0f, 0x1.b3e29p-112f,
     0x1.d52fb6p-73f, 0.0f, 0.0f, 0x1.aae358p-101f, 0.0f, 0x1.0584f8p-71f, 0.0f, 0.0f,
     0x1.a7de5p-78f, 0.0f, 0x1.910fb6p-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d062eap-88f,
     0x1.c7509ap-10f, 0x1.3c0f0ap-124f, 0x1.71f88p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2e6b82p-64f, 0x1.822c78p-59f, 0.0f, 0x1.e8950ep-89f, 0.0f, 0.0f,
     0x1.6cc9a2p-25f, 0x1.f8c11ep-59f, 0.0f, 0x1.9d3ccep-96f, 0x1.d18d8ep-29f,
     0x1.235296p-88f, 0x1.94512p-125f, 0x1.878d28p-74f, 0x1.c3e324p-47f,
     0x1.05ef08p-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.16b49cp-34f,
     0x1.7c467p-72f, 0x1.6d224p-52f, 0.0f, 0x1.3d9c4ap-76f, 0.0f, 0x1.3f428ep-40f,
     0.0f, 0x1.6cff38p-67f, 0.0f, 0.0f, 0.0f, 0x1.285d6ep-25f, 0.0f, 0.0f,
     0x1.349ab6p-18f, 0.0f, 0x1.b6599ep-117f, 0.0f, 0.0f, 0x1.fe7f8p-83f, 0.0f, 0.0f,
     0.0f, 0x1.c11bacp-125f, 0x1.2f779cp-40f, 0x1.249a7p-15f, 0x1.8ae88cp-50f, 0.0f,
     0.0f, 0x1.67d308p-78f, 0x1.fb749ep-28f, 0x1.2f59dp-114f, 0.0f, 0.0f,
     0x1.86db44p-38f, 0.0f, 0x1.9816bep-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1662bp-9f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bfc202p-50f, 0x1.f7451p-119f, 0.0f,
     0x1.7565d2p-100f, 0x1.1cc946p-99f, 0.0f, 0x1.fe66e8p-8f, 0x1.88c55p-124f, 0.0f,
     0x1.a06a8cp-100f, 0x1.8f9afep-73f, 0.0f, 0x1.6652acp-125f, 0x1.7d7d6p-53f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c2d924p-26f, 0x1.732784p-51f,
     0x1.e09fc4p-110f, 0x1.8d7f8ap-63f, 0x1.7201bap-71f, 0.0f, 0x1.ea6cd2p-86f, 0.0f,
     0x1.8412f8p-70f, 0.0f, 0x1.061348p-66f, 0x1.940568p-37f, 0x1.445fb2p-11f, 0.0f,
     0x1.111ac4p-48f, 0x1.8c239ap-21f, 0x1.ab2d2cp-89f, 0x1.b84d0ep-60f,
     0x1.f11d8ap-94f, 0x1.645a4p-63f, 0.0f, 0.0f, 0.0f, 0x1.3d0c5cp-117f,
     0x1.df2aeep-103f, 0x1.3a00a4p-1f, 0.0f, 0.0f, 0x1.f06f0ep-47f, 0.0f, 0.0f,
     0x1.fa2eb2p-19f, 0x1.a6883ap-51f, 0x1.d0560cp-80f, 0x1.ba1cd4p-78f,
     0x1.fd2744p-40f, 0x1.4c533cp-56f, 0x1.151f1ap-74f, 0.0f, 0x1.c6ee2p-83f,
     0x1.611e22p-25f, 0.0f, 0x1.34fc4ep-64f, 0.0f, 0x1.4ce9c4p-121f, 0.0f,
     0x1.900968p-5f, 0x1.ccfb4p-70f, 0.0f, 0.0f, 0.0f, 0x1.c6095cp-59f, 0.0f,
     0x1.b03714p-48f, 0.0f, 0.0f, 0x1.9f228cp-106f, 0.0f, 0x1.bfb06cp-95f,
     0x1.9a7d42p-113f, 0.0f, 0x1.de8e22p-61f, 0.0f, 0.0f, 0.0f, 0x1.927268p-108f,
     0x1.416224p-108f, 0.0f, 0.0f, 0x1.e4894cp-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.0af604p-53f, 0x1.a58f46p-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dd51fp-39f,
     0x1.9eb906p-113f, 0x1.9397d2p-77f, 0x1.4e25eap-83f, 0.0f, 0.0f, 0x1.dcd8bp-125f,
     0x1.2d2276p-94f, 0.0f, 0.0f, 0x1.2a5174p-117f, 0.0f, 0x1.0f144ep-119f, 0.0f,
     0.0f, 0.0f, 0x1.c7c376p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.61730cp-69f, 0.0f,
     0x1.2fa7cp-102f, 0x1.46ca3p-65f, 0.0f, 0x1.f6a14p-80f, 0x1.ccf64ap-52f,
     0x1.edc6p-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.daf902p-70f, 0x1.3f78a8p-87f,
     0x1.f3eea4p-3f, 0.0f, 0x1.26105ap-32f, 0x1.028fdcp-114f, 0x1.74c5aep-2f, 0.0f,
     0x1.39c9cp-54f, 0x1.7ac5f8p-117f, 0x1.020192p-102f, 0.0f, 0x1.6ab64ap-101f, 0.0f,
     0x1.9c25fap-48f, 0x1.3da20ep-119f, 0x1.8ff7bap-1f, 0x1.0e7f1cp-1f, 0.0f,
     0x1.7f4db4p-28f, 0x1.9b8522p-76f, 0x1.b663ccp-71f, 0.0f, 0.0f, 0x1.9077fep-77f,
     0.0f, 0x1.711bfap-44f, 0.0f, 0.0f, 0x1.d06ac2p-24f, 0.0f, 0x1.da519ep-16f, 0.0f,
     0x1.cef6ep-113f, 0.0f, 0.0f, 0x1.49b4dep-61f, 0x1.a105c6p-57f, 0.0f, 0.0f,
     0x1.04e4bap-16f, 0x1.b60dd2p-110f, 0.0f, 0x1.abfdf8p-126f, 0x1.08379cp-61f, 0.0f,
     0x1.cbf5a2p-27f, 0x1.e56068p-69f, 0.0f, 0.0f, 0.0f, 0x1.6ba38p-87f,
     0x1.28932cp-40f, 0.0f, 0x1.0e3784p-29f, 0x1.ea221cp-48f, 0.0f, 0x1.c8b38cp-23f,
     0.0f, 0x1.bf127ap-21f, 0x1.6c0f3ep-98f, 0x1.b7520cp-48f, 0x1.c42082p-60f, 0.0f,
     0.0f, 0x1.d8b11p-66f
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
            tmp1 = Sleef_finz_erfcf1_u15purecfma(tmp0);
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
    printf("Sleef_finz_erfcf1_u15purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_erfcf1_u15purecfma bench acc %a\n", global_bench_acc);
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
