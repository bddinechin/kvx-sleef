/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_log10f4_u10avx2128.c --function Sleef_log10f4_u10avx2128 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
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
     0x1.0177ccp-13f, 0.0f, 0x1.f5106p-25f, 0x1.63a66p-41f, 0x1.4debe4p-21f,
     0x1.9d0f72p-92f, 0x1.98138ep-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.fa194p-124f, 0x1.edcc88p-96f, 0x1.3888eap-73f, 0x1.65ea7ap-118f,
     0x1.884d04p-58f, 0.0f, 0.0f, 0x1.da1ab4p-22f, 0.0f, 0x1.4bc24ep-12f, 0.0f, 0.0f,
     0.0f, 0x1.304f96p-74f, 0.0f, 0x1.aa6bd6p-57f, 0.0f, 0x1.384c5p-3f,
     0x1.05ae26p-103f, 0.0f, 0x1.24cd22p-15f, 0x1.17f29p-84f, 0.0f, 0.0f,
     0x1.d0124ep-108f, 0x1.60ff5ep-120f, 0x1.0adcf4p-39f, 0x1.6bf88p-3f, 0.0f,
     0x1.a2e7bp-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8e945p-78f, 0x1.8f17dep-64f,
     0.0f, 0x1.856542p-79f, 0.0f, 0x1.10df7ap-56f, 0.0f, 0x1.6cb316p-16f, 0.0f,
     0x1.c6171cp-64f, 0x1.ff4484p-34f, 0.0f, 0x1.3fadcap-48f, 0x1.b56bf2p-51f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.88ec8p-34f, 0.0f, 0x1.5cc528p-8f, 0x1.ab260ap-1f,
     0.0f, 0x1.26932ap-5f, 0.0f, 0.0f, 0.0f, 0x1.dd2146p-112f, 0.0f, 0.0f,
     0x1.486acep-51f, 0x1.d35894p-46f, 0x1.bd72eap-11f, 0.0f, 0.0f, 0.0f,
     0x1.61fb3ap-34f, 0x1.74e9c8p-20f, 0x1.1ef8fep-111f, 0.0f, 0x1p0f, 0.0f, 0.0f,
     0.0f, 0x1.69b7e4p-11f, 0x1.57b4dp-73f, 0.0f, 0x1.395df6p-68f, 0x1.2e18c6p-103f,
     0.0f, 0.0f, 0x1.e671ep-88f, 0x1.a6c75ap-11f, 0.0f, 0x1.53385cp-75f, 0.0f, 0.0f,
     0x1.3fbd5cp-45f, 0x1.0d245p-66f, 0x1.7a10d6p-67f, 0x1.b7e2acp-24f,
     0x1.07c874p-101f, 0x1.db3e7cp-40f, 0x1.5f176p-41f, 0x1.a165f4p-39f, 0x1p0f, 0.0f,
     0x1.f4063ep-111f, 0x1.337e6cp-19f, 0.0f, 0x1.15a654p-46f, 0x1.e6127cp-35f, 0.0f,
     0x1.1dedbap-15f, 0x1.2fe504p-56f, 0x1.c71784p-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.fcafaap-84f, 0x1.e4a4ap-85f, 0.0f, 0.0f, 0x1.9325e2p-85f,
     0x1.dcd598p-118f, 0x1.7fd8ap-23f, 0x1.93bc28p-15f, 0x1.edc57ep-62f, 0.0f, 0.0f,
     0x1.8216e4p-48f, 0.0f, 0x1.ff7df2p-77f, 0.0f, 0x1.2eeec4p-38f, 0.0f,
     0x1.206394p-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3a206cp-67f, 0x1.6a78ep-90f,
     0x1.20e77ap-51f, 0.0f, 0x1.349c2ap-29f, 0.0f, 0.0f, 0x1.a88dep-105f, 0.0f, 0.0f,
     0x1.d60b84p-13f, 0x1.2d769ep-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ab46cap-49f, 0x1.a71436p-99f, 0x1.0eae7p-48f, 0x1.c85a1ep-54f,
     0x1.ae3fe6p-95f, 0.0f, 0.0f, 0x1.0c8ef8p-73f, 0x1.289e84p-102f, 0x1.01e8fcp-53f,
     0.0f, 0x1.3634ap-29f, 0x1.9ea214p-9f, 0.0f, 0x1.f284bep-99f, 0.0f, 0.0f, 0.0f,
     0x1.4fb2ecp-91f, 0.0f, 0x1.893d22p-24f, 0.0f, 0.0f, 0.0f, 0x1.8c34fap-62f,
     0x1.15b0b8p-25f, 0x1.93f6a8p-82f, 0.0f, 0.0f, 0.0f, 0x1.610826p-97f,
     0x1.8a518ep-9f, 0.0f, 0x1.c5a8d2p-78f, 0.0f, 0x1.eb7818p-17f, 0.0f,
     0x1.50671ap-118f, 0.0f, 0x1.a16faep-46f, 0x1.cc1018p-49f, 0.0f, 0.0f,
     0x1.1f261p-7f, 0.0f, 0x1.6475aep-72f, 0.0f, 0x1.25fb3ep-57f, 0x1.1c0d1ap-98f,
     0.0f, 0.0f, 0.0f, 0x1.35e3e2p-22f, 0x1.c854ccp-81f, 0.0f, 0.0f, 0x1.e1e85ap-118f,
     0.0f, 0x1.0746bp-85f, 0x1.ffb98cp-102f, 0.0f, 0x1.0bae64p-43f, 0x1.47011ap-126f,
     0x1.b65e82p-123f, 0.0f, 0x1.65a624p-64f, 0.0f, 0x1.ffe84p-105f, 0x1.cc0f5cp-20f,
     0x1.321b08p-97f, 0.0f, 0x1.3aa57p-29f, 0.0f, 0.0f, 0x1.c9bfc8p-51f,
     0x1.3e8f4ep-58f, 0.0f, 0.0f, 0x1.1f0e38p-14f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.909c46p-109f, 0x1.e514f8p-20f, 0x1.9b87d8p-57f, 0.0f, 0x1.6ac718p-40f, 0.0f,
     0.0f, 0.0f, 0x1.e2ed3p-110f, 0.0f, 0.0f, 0.0f, 0x1.ec7758p-81f, 0x1.017354p-42f,
     0x1.b229b2p-111f, 0.0f, 0.0f, 0x1.f2a734p-26f, 0x1.f04c34p-45f, 0x1.475c72p-37f,
     0x1.c67d2cp-64f, 0.0f, 0.0f, 0.0f, 0x1.35525cp-122f, 0x1.7ca278p-60f,
     0x1.603088p-12f, 0.0f, 0.0f, 0x1.0b7154p-29f, 0x1.e91dc2p-119f, 0x1.0aa894p-65f,
     0.0f, 0.0f, 0.0f, 0x1.34ca4ep-108f, 0x1.bcb178p-31f, 0.0f, 0.0f, 0.0f,
     0x1.4517b4p-18f, 0x1.fb506p-81f, 0.0f, 0.0f, 0x1.9b03acp-99f, 0.0f, 0.0f,
     0x1.81ca76p-84f, 0.0f, 0x1.fde96ap-124f, 0x1.8f894p-83f, 0x1.742f0ep-77f,
     0x1.bed1d2p-81f, 0.0f, 0x1.a3ea7ep-100f, 0x1.0bd69ap-76f, 0.0f, 0x1.6ccd5ep-126f,
     0x1.3d51cap-102f, 0x1.b7a65ap-90f, 0.0f, 0.0f, 0.0f, 0x1.336ed6p-97f,
     0x1.39f388p-9f, 0x1.ce5d58p-125f, 0x1.fb781cp-109f, 0x1.37b54cp-12f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.8decbp-22f, 0.0f, 0.0f, 0.0f, 0x1.fe6ep-99f, 0.0f,
     0x1.f2acd6p-125f, 0.0f, 0.0f, 0x1.896a5cp-38f, 0x1.afef5p-116f, 0x1.58a83ep-1f,
     0x1.dc62fap-55f, 0.0f, 0x1.8c0d2ep-83f, 0.0f, 0x1.a9bd3cp-50f, 0.0f, 0.0f, 0.0f,
     0x1.5d500ep-110f, 0.0f, 0x1.96bfp-97f, 0x1.4a4024p-107f, 0x1.1114e6p-103f,
     0x1.814d0ap-30f, 0.0f, 0.0f, 0x1.216cd8p-70f, 0x1.1f7492p-73f, 0x1.0daaeap-62f,
     0.0f, 0.0f, 0x1.c98c2ep-21f, 0x1.29b62ap-26f, 0.0f, 0x1.8e672p-95f, 0.0f, 0.0f,
     0x1.2752e6p-120f, 0x1.6d6c54p-18f, 0.0f, 0x1.cedb4cp-63f, 0.0f, 0x1.100578p-75f,
     0.0f, 0.0f, 0.0f, 0x1.c2724cp-126f, 0.0f, 0.0f, 0.0f, 0x1.eec8d2p-119f,
     0x1.890742p-30f, 0x1.102af2p-117f, 0x1.7dcb86p-80f, 0x1.694b26p-89f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3356ap-8f, 0.0f, 0x1.d1bba4p-58f,
     0x1.1ef9ap-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dc7bep-120f, 0.0f,
     0.0f, 0x1.0c9dcep-29f, 0.0f, 0.0f, 0x1.8c45b4p-27f, 0x1.bbc616p-32f,
     0x1.7b1a58p-51f, 0.0f, 0x1.3780f6p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ce2c9cp-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cdf79ep-100f, 0.0f, 0.0f,
     0x1.63166ep-60f, 0.0f, 0x1.551f32p-104f, 0.0f, 0.0f, 0.0f, 0x1.e405e6p-112f,
     0x1.5e027ep-98f, 0x1.463f98p-98f, 0x1.d6a192p-34f, 0.0f, 0x1.b8cf14p-57f,
     0x1.59e1d8p-74f, 0.0f, 0.0f, 0x1.614176p-97f, 0.0f, 0x1.89e486p-26f, 0.0f,
     0x1.c7e6bp-8f, 0x1.7cb672p-27f, 0x1.58b416p-41f, 0x1.7e3216p-57f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.c84918p-26f, 0x1p0f, 0.0f, 0x1.3ac31cp-95f, 0x1.d1e008p-100f,
     0.0f, 0x1.d519a8p-38f, 0.0f, 0.0f, 0.0f, 0x1.a7e2ep-41f, 0x1.573946p-66f,
     0x1.86f586p-56f, 0.0f, 0x1.f658dep-35f, 0x1.55219ap-4f, 0x1.ac9ec8p-57f, 0.0f,
     0x1.3ac198p-64f, 0x1.a2f57p-112f, 0.0f, 0x1.488216p-93f, 0.0f, 0x1.829f5p-51f,
     0x1.7e28d4p-36f, 0x1.6a2214p-60f, 0x1.f8c7a4p-105f, 0.0f, 0x1.cdfb36p-41f, 0.0f,
     0x1.4f7738p-66f, 0.0f, 0x1.ccf492p-74f, 0.0f, 0.0f, 0x1.9990e2p-62f,
     0x1.088d48p-118f, 0x1.ec4552p-69f, 0.0f, 0x1.3c0704p-81f, 0.0f, 0.0f,
     0x1.0b5a3cp-3f, 0x1.d7cf22p-58f, 0.0f, 0.0f, 0.0f, 0x1.71f3a8p-98f,
     0x1.d733d6p-46f, 0x1.ed8906p-65f, 0x1.a85ba2p-74f, 0.0f, 0x1.056d1ep-40f, 0.0f,
     0x1.680854p-91f, 0.0f, 0x1.06306ap-33f, 0x1.ded9d4p-103f, 0.0f, 0x1.b54a32p-121f,
     0x1.a54be8p-3f, 0x1.aa839p-3f, 0x1.a61218p-126f, 0x1.565476p-104f, 0.0f,
     0x1.762ea6p-57f, 0x1.89d352p-10f, 0.0f, 0x1.f0bed8p-110f, 0.0f, 0.0f,
     0x1.37b6a6p-125f, 0x1.43ab0ep-107f, 0x1.c1542ep-124f, 0x1.ec845cp-34f,
     0x1.7b026p-18f, 0x1.a91a78p-22f, 0.0f, 0.0f, 0x1.9014ap-114f, 0.0f,
     0x1.c623a2p-83f, 0.0f, 0x1.5992cap-71f, 0.0f, 0x1.a5068ep-29f, 0.0f, 0.0f,
     0x1.f8bbaep-86f, 0.0f, 0x1.e92084p-33f, 0x1.b25ecp-72f, 0.0f, 0x1.2b7e3cp-77f,
     0x1.59b134p-69f, 0x1.725cfep-81f, 0x1.5954bep-42f, 0x1.676632p-110f, 0.0f, 0.0f,
     0.0f, 0x1.612e2p-42f, 0x1.128ddap-89f, 0x1.67b3f2p-84f, 0x1.b47f1ap-86f,
     0x1.135558p-24f, 0x1.b5324ep-96f, 0.0f, 0x1.54136cp-105f, 0x1.61a644p-53f, 0.0f,
     0.0f, 0.0f, 0x1.3ad692p-110f, 0x1.91df6ap-124f, 0x1.36e61ep-56f, 0x1.12e29cp-90f,
     0.0f, 0.0f, 0.0f, 0x1.13e224p-66f, 0.0f, 0x1.f09388p-85f, 0x1.87ddcp-59f,
     0x1.611c1ap-77f, 0x1.bc1e12p-102f, 0x1.90368p-13f, 0x1.10c4e8p-23f,
     0x1.04c97p-84f, 0x1.4008aap-52f, 0.0f, 0x1.92ab46p-57f, 0.0f, 0.0f,
     0x1.4c544ep-55f, 0x1.a72344p-37f, 0.0f, 0x1.ab916cp-15f, 0.0f, 0.0f,
     0x1.ecb322p-1f, 0.0f, 0x1.4e3596p-76f, 0.0f, 0x1.d7175cp-37f, 0x1.47b0dap-103f,
     0x1.94cecap-101f, 0.0f, 0.0f, 0.0f, 0x1.b51ba6p-32f, 0x1.09cf06p-20f, 0.0f, 0.0f,
     0x1.15bda8p-28f, 0.0f, 0.0f, 0.0f, 0x1.cb9098p-63f, 0x1.a6e8a6p-33f,
     0x1.6befcp-23f, 0x1.60eap-105f, 0.0f, 0x1.0b3bf2p-55f, 0x1.4d1184p-91f, 0.0f,
     0.0f, 0x1.5ff39ap-116f, 0.0f, 0.0f, 0.0f, 0x1.bf4d94p-98f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.65d2d2p-4f, 0x1.84dceap-67f, 0.0f, 0x1.353abep-18f, 0x1.d73c5cp-49f,
     0.0f, 0x1.658c28p-42f, 0.0f, 0x1.259a66p-111f, 0x1.34e2bp-48f, 0x1.36a83p-29f,
     0.0f, 0.0f, 0x1.bcc996p-86f, 0.0f, 0.0f, 0x1.a45734p-83f, 0x1.e59a8ap-12f,
     0x1.81540ap-79f, 0.0f, 0.0f, 0x1.b5192cp-126f, 0.0f, 0x1.f1684p-8f, 0.0f, 0.0f,
     0x1.e7f036p-117f, 0x1.b39b2ep-61f, 0.0f, 0.0f, 0x1.504242p-67f, 0x1.4e457p-23f,
     0x1.8cb0b4p-22f, 0x1.d08c0cp-53f, 0.0f, 0.0f, 0.0f, 0x1.d465c4p-109f, 0.0f, 0.0f,
     0.0f, 0x1.2eae02p-42f, 0.0f, 0x1.5a335p-124f, 0x1.245bep-70f, 0x1.894b4ep-32f,
     0x1.675922p-119f, 0x1.0985cep-60f, 0.0f, 0x1.abccecp-101f, 0.0f, 0.0f, 0.0f,
     0x1.1430bep-67f, 0.0f, 0.0f, 0x1.61e70cp-104f, 0.0f, 0x1.ccd13ep-125f,
     0x1.726628p-39f, 0x1.0ac18p-47f, 0x1.6ec9fep-86f, 0x1.2907aep-15f, 0.0f,
     0x1.45e67p-54f, 0x1.646bbep-44f, 0.0f, 0.0f, 0.0f, 0x1.9c521cp-45f,
     0x1.ddf2dcp-28f, 0x1.0d38dap-123f, 0x1.a30d06p-5f, 0.0f, 0.0f, 0.0f,
     0x1.d31ffp-110f, 0.0f, 0x1.f09c44p-104f, 0x1.f11b36p-114f, 0.0f, 0.0f,
     0x1.45999ap-119f, 0x1.776b5ap-30f, 0x1.bfad9p-37f, 0x1.44bdfep-54f, 0.0f, 0.0f,
     0.0f, 0x1.1a44cp-57f, 0.0f, 0x1.eaf4dcp-106f, 0.0f, 0.0f, 0x1.5bcaeap-78f,
     0x1.511feap-10f, 0.0f, 0.0f, 0x1.6cd678p-121f, 0x1.fd0e44p-11f, 0x1.d0e00cp-99f,
     0x1.3129p-64f, 0.0f, 0x1.bdcdd6p-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.043872p-85f, 0x1.154d48p-85f, 0.0f, 0.0f, 0x1.fa975ap-68f, 0.0f, 0.0f, 0.0f,
     0x1.fc617ap-48f, 0x1.cc402cp-118f, 0x1.e755a2p-79f, 0x1.3431f4p-87f, 0.0f,
     0x1.bd711cp-6f, 0x1.63b1c4p-96f, 0x1.f8dc88p-10f, 0.0f, 0x1p0f, 0x1.c5999cp-23f,
     0x1.ea7eeep-92f, 0.0f, 0.0f, 0.0f, 0x1.cc44fcp-70f, 0x1.d152a8p-73f, 0.0f, 0.0f,
     0.0f, 0x1.eb3132p-64f, 0x1.caecd8p-48f, 0.0f, 0.0f, 0.0f, 0x1.6c168cp-3f, 0.0f,
     0.0f, 0.0f, 0x1.9b7676p-18f, 0x1.0f81a6p-100f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1e339ep-88f, 0x1.64ebbap-20f, 0.0f, 0.0f, 0x1.866c12p-12f, 0x1.1e39f8p-15f,
     0.0f, 0.0f, 0.0f, 0x1.3d32c6p-71f, 0x1.de007p-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c6b11cp-85f, 0x1.43dbeep-8f, 0x1.d5bda4p-67f, 0.0f, 0x1.12e212p-30f,
     0x1.09ae96p-87f, 0x1.cf4d4p-95f, 0x1.fbbcc8p-13f, 0x1.01fbd4p-93f, 0.0f,
     0x1.6041aap-49f, 0x1.807288p-95f, 0.0f, 0.0f, 0x1.f02a7ap-30f, 0x1.7c4e0ap-90f,
     0x1.79934cp-108f, 0x1.58249ep-113f, 0x1.d43138p-19f, 0.0f, 0x1.af2b2ep-74f,
     0x1.77e43ap-77f, 0x1.84467p-6f, 0.0f, 0.0f, 0x1.d3e13p-119f, 0x1.0daf7p-110f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.4f770ap-76f, 0x1.5f4038p-25f, 0x1p0f,
     0x1.1bef9ep-62f, 0x1.1c13ep-49f, 0x1.7d0eeep-1f, 0x1.3eda12p-90f, 0.0f,
     0x1.7d1956p-5f, 0.0f, 0.0f, 0x1.e65fa4p-95f, 0.0f, 0.0f, 0.0f, 0x1.439e0ap-99f,
     0.0f, 0x1.62fa9p-65f, 0x1.303c88p-88f, 0x1.160738p-4f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e3e1ecp-124f, 0x1.9e82b2p-96f, 0.0f, 0.0f, 0.0f,
     0x1.9c097cp-62f, 0.0f, 0x1.e24e92p-33f, 0x1.04949ep-26f, 0x1.be6d42p-8f,
     0x1.782d06p-7f, 0x1.597adp-11f, 0x1.17d65ep-126f, 0.0f, 0x1.0603f4p-43f, 0.0f,
     0x1.4a9084p-117f, 0x1.058d7cp-45f, 0.0f, 0x1.f79542p-32f, 0x1.6aa358p-112f,
     0x1.ac0148p-68f, 0.0f, 0.0f, 0.0f, 0x1.0a1f74p-120f, 0x1.53862cp-74f,
     0x1.04c7acp-27f, 0x1.dc747ep-59f, 0.0f, 0.0f, 0x1.70937ep-53f, 0x1.51cbeep-96f,
     0.0f, 0.0f, 0.0f, 0x1.a63722p-90f, 0.0f, 0.0f, 0.0f, 0x1.0c3facp-41f,
     0x1.0d53ep-107f, 0.0f, 0x1.921746p-111f, 0x1.752e3ep-30f, 0x1.0927e2p-100f, 0.0f,
     0.0f, 0x1.0cec54p-85f, 0x1.badeaep-84f, 0.0f, 0x1.7d9938p-101f, 0x1.5e7c78p-74f,
     0.0f, 0x1.c691a4p-117f, 0.0f, 0x1.b9107ep-117f, 0x1.bcca22p-61f, 0.0f, 0.0f,
     0x1.d1fc0ep-9f, 0.0f, 0x1.4d02b6p-54f, 0x1.29eaa4p-66f, 0x1.27c936p-30f, 0.0f,
     0x1.a6aa4ap-27f, 0x1.196cb4p-85f, 0x1.81ffc8p-64f, 0.0f, 0x1.fca434p-44f, 0.0f,
     0x1.1fa284p-14f, 0.0f, 0x1.140d8p-25f, 0x1.382474p-88f, 0.0f, 0x1.7ab012p-57f,
     0x1.b1b25ap-19f, 0x1.c5bc04p-77f, 0.0f, 0.0f, 0x1.37536ep-108f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.53ff2p-8f, 0.0f, 0x1.aa465ep-73f, 0x1.d8259ep-39f, 0.0f,
     0x1.8110e8p-82f, 0x1.6129bap-57f, 0.0f, 0x1.9c03dep-51f, 0x1.f46b8ap-118f,
     0x1.1fedaep-125f, 0x1.193ccap-42f, 0.0f, 0x1.da5f06p-15f, 0x1.24066ep-22f,
     0x1.d4e7cp-111f, 0.0f, 0.0f, 0x1.d068bcp-107f, 0.0f, 0.0f, 0x1.bdeeeap-121f,
     0x1.e9ed3ap-47f, 0x1.98fbcap-104f, 0.0f, 0.0f, 0x1.c99d62p-63f, 0x1.14b718p-108f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.06f644p-52f, 0x1.a0f02p-35f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1p0f, 0x1.dacf56p-11f, 0x1.e7c388p-117f, 0x1.d816d2p-5f, 0.0f, 0.0f,
     0x1.9911ecp-68f, 0x1.f1798p-65f, 0x1.fe735ep-99f, 0.0f, 0x1.27436ep-29f, 0.0f,
     0.0f, 0.0f, 0.0f
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
            int32_t tmp3;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_log10f4_u10avx2128(tmp0);
            memcpy(((ml_float4_t*)(external_bench_wrapper_output_table+ i)), &(tmp1), 16);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(4);
            i = tmp3;
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
    printf("Sleef_log10f4_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_log10f4_u10avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
