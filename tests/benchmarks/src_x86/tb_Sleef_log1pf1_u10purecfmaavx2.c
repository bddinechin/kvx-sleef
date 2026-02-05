/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_log1pf1_u10purecfma.c --function \
 *     Sleef_log1pf1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.3484f4p-107f, 0.0f, 0x1.d0c76ap-43f, 0.0f, 0x1.1e8666p-68f, 0x1.34c934p-19f,
     0.0f, 0x1.7ebc72p-74f, 0.0f, 0x1.11395p-1f, 0x1.6a1a44p-36f, 0.0f,
     0x1.4ab9d6p-124f, 0.0f, 0x1.a49f24p-64f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.74d28cp-101f, 0.0f, 0.0f, 0.0f, 0x1.fe568cp-100f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.9dc4b4p-60f, 0.0f, 0x1.81e2cp-15f, 0x1.4d775ep-5f, 0x1.1ce368p-11f,
     0x1.14462ep-36f, 0x1.bd025p-41f, 0x1.e01506p-100f, 0.0f, 0x1.c9714ap-61f, 0.0f,
     0.0f, 0.0f, 0x1.bab3a2p-94f, 0x1.7a2cccp-10f, 0.0f, 0x1.be4ffap-86f, 0.0f,
     0x1.2d4a5ap-110f, 0x1.94ef08p-122f, 0x1.ecb6ap-5f, 0.0f, 0x1.c82846p-112f, 0.0f,
     0x1.71c55p-110f, 0x1.e3f39p-99f, 0x1.1254b4p-59f, 0x1.7134a6p-36f, 0.0f, 0.0f,
     0x1.7e09aap-90f, 0.0f, 0x1.cfd97cp-17f, 0x1.64f53p-90f, 0x1.27cb1p-54f, 0.0f,
     0.0f, 0x1.2b9a0cp-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2ef3d4p-85f,
     0x1.bb9f3ap-100f, 0x1.29c2eap-95f, 0.0f, 0x1.2cb58ap-69f, 0.0f, 0.0f,
     0x1.8e0f86p-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.28776ep-1f,
     0.0f, 0.0f, 0.0f, 0x1.9a6ff2p-102f, 0x1.0fa476p-89f, 0x1p0f, 0x1.f3afacp-94f,
     0x1.8b7c0ap-29f, 0x1.7103b2p-75f, 0x1.fd9088p-9f, 0.0f, 0x1.fa2c02p-89f, 0.0f,
     0x1.6c00eap-80f, 0.0f, 0x1.b04f62p-86f, 0.0f, 0.0f, 0.0f, 0x1.dd01a4p-13f,
     0x1.0fb63cp-6f, 0.0f, 0x1.4b5bc2p-29f, 0.0f, 0.0f, 0x1.897faep-69f,
     0x1.974a02p-108f, 0x1.9a15b8p-4f, 0.0f, 0x1.fc389p-74f, 0.0f, 0.0f, 0.0f,
     0x1.ee6582p-38f, 0x1.a4e55p-125f, 0x1.440d08p-116f, 0.0f, 0x1.cba4ap-94f, 0.0f,
     0x1.19bbacp-104f, 0x1.767896p-50f, 0.0f, 0x1.623ca2p-122f, 0.0f, 0x1.eb1502p-91f,
     0x1.c49754p-61f, 0x1.907d6cp-41f, 0x1.3eeb8ap-83f, 0x1.ded994p-49f,
     0x1.1c2894p-125f, 0x1.e47114p-80f, 0.0f, 0.0f, 0x1.589be8p-120f, 0.0f, 0.0f,
     0.0f, 0x1.aca27ap-17f, 0x1.e054dp-59f, 0.0f, 0.0f, 0.0f, 0x1.d79266p-99f,
     0x1.b1ccfep-31f, 0x1.80ae88p-24f, 0x1.39044p-90f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6469b6p-23f, 0x1.60897ap-69f, 0.0f, 0.0f, 0x1.20074cp-25f, 0x1.7127f2p-124f,
     0x1.6e93ccp-70f, 0.0f, 0x1.0d47c4p-125f, 0.0f, 0x1.12a3ccp-60f, 0x1.ba95fcp-65f,
     0x1.43a06ep-14f, 0x1.76ff16p-11f, 0.0f, 0.0f, 0x1.ba9382p-8f, 0.0f, 0.0f,
     0x1.df754p-39f, 0x1.6cfd36p-65f, 0x1.9fcc42p-40f, 0.0f, 0x1.a72d74p-70f, 0.0f,
     0x1.c0cd5p-17f, 0x1.c8dd88p-42f, 0x1.7bd9aep-111f, 0.0f, 0x1.023a8cp-76f, 0.0f,
     0x1.954ddap-100f, 0x1.ee5294p-20f, 0x1.e4397cp-40f, 0x1.93e466p-87f,
     0x1.07a8fap-100f, 0x1.7dd47p-42f, 0.0f, 0.0f, 0x1.bbd5d8p-27f, 0x1.9f198ep-30f,
     0x1.395d5p-124f, 0.0f, 0x1.d15ac8p-89f, 0x1.51b6a6p-109f, 0.0f, 0x1.75b73ap-53f,
     0x1.21a388p-75f, 0x1.8b99eep-31f, 0x1.6efcf6p-68f, 0.0f, 0x1.41dad8p-10f,
     0x1.1f04a6p-114f, 0x1.9576fp-2f, 0.0f, 0x1.8fd4acp-65f, 0.0f, 0x1.bc33cep-65f,
     0.0f, 0x1.e3fb2cp-45f, 0.0f, 0.0f, 0x1.6b41cap-60f, 0.0f, 0.0f, 0x1.96192p-17f,
     0x1.caae12p-50f, 0x1.95bff6p-20f, 0x1.6caae2p-92f, 0x1.973e3ep-18f,
     0x1.717032p-68f, 0.0f, 0x1.947868p-21f, 0.0f, 0x1.2b58bap-74f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e28b88p-86f, 0.0f, 0x1.02cf2ap-126f, 0.0f, 0x1.1dffeep-9f,
     0x1.621f9cp-108f, 0x1.150768p-54f, 0.0f, 0.0f, 0x1.33e6a2p-31f, 0x1.340d1cp-72f,
     0.0f, 0.0f, 0.0f, 0x1.ed3884p-8f, 0.0f, 0x1.e6ad16p-87f, 0x1.76dc8ap-81f,
     0x1.f5b83ap-97f, 0x1.bdc6fcp-108f, 0.0f, 0.0f, 0x1.44da98p-23f, 0x1.7fdda8p-27f,
     0.0f, 0x1.3bbbe6p-94f, 0x1.0619a8p-104f, 0x1.a478fcp-85f, 0x1.e8e032p-15f,
     0x1.d9b84cp-27f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.67972p-73f,
     0.0f, 0x1.07e82cp-84f, 0x1.087aap-80f, 0.0f, 0.0f, 0.0f, 0x1.fdb54p-41f,
     0x1.efe0dp-53f, 0x1.75f3eep-70f, 0x1.1752c4p-24f, 0x1.eb97b2p-107f,
     0x1.7fd624p-73f, 0x1.2a0d9cp-38f, 0.0f, 0.0f, 0.0f, 0x1.f63356p-69f, 0.0f, 0.0f,
     0.0f, 0x1.a19afp-109f, 0x1.ea07bep-57f, 0x1.cebcp-45f, 0x1.89de9ap-50f, 0.0f,
     0x1.39ef0ap-34f, 0.0f, 0.0f, 0x1.6cd622p-24f, 0.0f, 0x1.d3ece2p-31f, 0.0f, 0.0f,
     0x1.3b37bep-87f, 0x1.32d0cep-102f, 0x1.c5b3dap-27f, 0.0f, 0x1.4f09aep-9f,
     0x1.b84526p-100f, 0x1.49ff2ap-84f, 0.0f, 0x1.d506eep-100f, 0.0f, 0.0f,
     0x1.5380a4p-84f, 0.0f, 0.0f, 0.0f, 0x1.830712p-64f, 0.0f, 0.0f, 0.0f,
     0x1.7ab3c2p-55f, 0x1.5d6a86p-53f, 0x1.d1bbd4p-37f, 0x1.144a44p-117f, 0.0f, 0.0f,
     0x1.bf0e36p-108f, 0.0f, 0x1.865fdap-46f, 0.0f, 0x1.645d6p-6f, 0.0f, 0.0f,
     0x1.8f1ff4p-80f, 0.0f, 0.0f, 0.0f, 0x1.b00f8ap-10f, 0.0f, 0.0f, 0x1.faf95cp-109f,
     0.0f, 0x1.45cac8p-94f, 0.0f, 0.0f, 0x1.d1c812p-65f, 0x1.59f874p-54f, 0.0f,
     0x1.f0a612p-33f, 0.0f, 0x1.7d8ea4p-115f, 0.0f, 0.0f, 0.0f, 0x1.755302p-113f,
     0x1.189748p-12f, 0x1.e403a2p-61f, 0.0f, 0.0f, 0.0f, 0x1.fbe32p-110f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7a7f8ep-77f, 0x1.afd102p-108f, 0x1.7f5e5ap-7f,
     0.0f, 0x1.48cf48p-96f, 0.0f, 0x1.232b68p-26f, 0.0f, 0.0f, 0x1.6110aep-111f,
     0x1.8e25c6p-27f, 0x1.a7b6a4p-13f, 0.0f, 0.0f, 0.0f, 0x1.562f0ep-83f, 0.0f, 0.0f,
     0.0f, 0x1.d1d63ep-102f, 0x1.cfc662p-106f, 0.0f, 0x1.feceaap-112f,
     0x1.34159ap-34f, 0x1.c3ea56p-55f, 0x1.a9267ap-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e36c9cp-7f, 0.0f, 0x1.9a745p-95f, 0.0f, 0.0f, 0.0f, 0x1.bff9bp-102f,
     0x1.0dc54cp-77f, 0x1.399a66p-124f, 0.0f, 0x1.b7679ep-7f, 0.0f, 0.0f,
     0x1.9759bep-57f, 0.0f, 0.0f, 0.0f, 0x1.ea7504p-110f, 0x1.d854e4p-35f,
     0x1.27d308p-86f, 0.0f, 0x1.3cc6bcp-43f, 0x1.2b4ae4p-5f, 0x1.02014ep-75f,
     0x1.35b56p-118f, 0x1.e44466p-45f, 0x1.85898cp-110f, 0.0f, 0.0f, 0x1.7c2022p-50f,
     0.0f, 0.0f, 0x1.c7ba26p-99f, 0x1.f13edap-6f, 0.0f, 0x1.d11d06p-109f,
     0x1.69b2fcp-75f, 0.0f, 0x1.374dcp-14f, 0x1.6c5138p-91f, 0.0f, 0x1.142052p-85f,
     0.0f, 0.0f, 0x1.d26416p-9f, 0x1.f0a044p-20f, 0x1.17e8bap-114f, 0.0f, 0.0f, 0.0f,
     0x1.46e284p-85f, 0x1.ea54dep-85f, 0.0f, 0x1.6cfd4p-41f, 0x1.c6fa72p-108f, 0.0f,
     0x1.71786ep-11f, 0x1.2c6e08p-27f, 0x1.aa7ep-16f, 0x1.da62c6p-73f,
     0x1.b6d474p-108f, 0x1.62d762p-67f, 0x1.afd69ap-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.bfe444p-4f, 0.0f, 0.0f, 0x1.a00a66p-45f, 0x1.d718dap-92f, 0.0f,
     0x1.a08b24p-32f, 0.0f, 0x1.0df9cp-56f, 0x1.b7f96ep-13f, 0x1.ad8796p-21f,
     0x1.0808d2p-9f, 0x1.51a0dcp-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.dace26p-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.efd278p-36f, 0x1.b863e2p-63f,
     0x1.0cd25p-104f, 0x1.3976eap-16f, 0x1.d8432cp-89f, 0.0f, 0.0f, 0x1.b8e1a6p-46f,
     0.0f, 0x1.86f478p-108f, 0.0f, 0.0f, 0x1.52651p-109f, 0.0f, 0x1.126722p-103f,
     0x1.21bca6p-48f, 0.0f, 0x1.43d176p-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6339ccp-7f, 0x1.10b0cep-105f, 0.0f, 0x1.e6df4p-24f, 0.0f, 0x1.daf65p-32f,
     0.0f, 0x1.1917e6p-83f, 0x1.ca17dep-118f, 0x1.66634ep-52f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b2c0dap-73f, 0.0f, 0.0f, 0x1.fd5abep-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.997dbp-96f, 0x1.b4c86p-91f, 0x1.f6e4a2p-41f, 0.0f, 0x1.115dc2p-75f,
     0x1.e2d48ep-65f, 0x1.b3cee8p-40f, 0.0f, 0x1.abb77ep-33f, 0.0f, 0.0f, 0.0f,
     0x1.df4a42p-15f, 0.0f, 0x1.a90624p-84f, 0.0f, 0.0f, 0.0f, 0x1.ee7cep-59f,
     0x1.1e7e0cp-75f, 0.0f, 0.0f, 0.0f, 0x1.f2105ap-126f, 0x1.cb46cep-11f, 0.0f,
     0x1.702922p-86f, 0x1.f0adbp-56f, 0x1.3bc252p-78f, 0.0f, 0x1.c2ee06p-57f, 0.0f,
     0x1.93f1aap-106f, 0x1.1b571ap-17f, 0.0f, 0x1.93f812p-52f, 0.0f, 0.0f, 0.0f,
     0x1.aad9a2p-29f, 0x1.69f2f4p-11f, 0x1.92a072p-100f, 0.0f, 0.0f, 0x1.78502cp-76f,
     0x1.55fc7ep-33f, 0x1.c8fc36p-99f, 0.0f, 0.0f, 0x1.829852p-30f, 0.0f, 0.0f,
     0x1.3f4faap-87f, 0.0f, 0x1.996d4cp-119f, 0.0f, 0.0f, 0x1.88e386p-11f,
     0x1.d303e2p-109f, 0.0f, 0x1.7395d4p-119f, 0x1.e09d3ep-34f, 0x1.dbff52p-101f,
     0x1.8ce012p-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b960c8p-111f,
     0x1.af6fb4p-116f, 0.0f, 0.0f, 0x1.a6cb82p-34f, 0.0f, 0x1.71ba2ep-26f,
     0x1.5cef06p-43f, 0.0f, 0x1.273652p-120f, 0x1.f70c62p-3f, 0.0f, 0.0f,
     0x1.52adbp-57f, 0.0f, 0x1.31629p-56f, 0.0f, 0x1.2fdae8p-118f, 0x1.8fa85ep-113f,
     0.0f, 0.0f, 0x1.d942ep-44f, 0x1.cde2ep-27f, 0x1.d55eb4p-45f, 0.0f, 0.0f, 0.0f,
     0x1.8cb968p-46f, 0x1.115dcap-28f, 0x1.fd1354p-79f, 0x1.37b8fp-48f, 0.0f,
     0x1.7cbf94p-48f, 0x1.35911ap-18f, 0.0f, 0.0f, 0x1.5c0b8cp-117f, 0x1.855a36p-60f,
     0.0f, 0.0f, 0x1.7e8a3p-77f, 0x1.c9fd44p-27f, 0x1.068a74p-27f, 0x1.64bfeap-51f,
     0x1.813f48p-36f, 0x1.b594f6p-71f, 0.0f, 0.0f, 0.0f, 0x1.c5f12ep-97f,
     0x1.a9b03cp-3f, 0x1.562fp-10f, 0.0f, 0x1.221c76p-67f, 0.0f, 0.0f,
     0x1.3149bcp-80f, 0.0f, 0.0f, 0x1.8cc102p-39f, 0.0f, 0x1.b355c4p-24f, 0.0f, 0.0f,
     0x1.e4fceap-93f, 0.0f, 0x1.01d3a6p-45f, 0.0f, 0.0f, 0.0f, 0x1.c7942cp-42f,
     0x1.3e077ap-104f, 0x1.662fep-74f, 0x1.356f5ap-40f, 0.0f, 0x1.537fbep-106f,
     0x1.56040ap-101f, 0x1.4a29eap-1f, 0x1.8304c6p-26f, 0.0f, 0.0f, 0.0f,
     0x1.e48e76p-119f, 0.0f, 0.0f, 0x1.b8b502p-86f, 0.0f, 0x1.69143cp-67f, 0.0f, 0.0f,
     0x1.141f12p-78f, 0x1.b39642p-11f, 0.0f, 0.0f, 0x1.addabap-40f, 0.0f, 0.0f,
     0x1.f99594p-74f, 0x1.f5231ep-108f, 0x1.b5c5c2p-93f, 0x1.8029ecp-31f, 0.0f,
     0x1.3e997cp-71f, 0.0f, 0.0f, 0x1.89cb6ep-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.28593ap-39f, 0.0f, 0.0f, 0x1.38998cp-4f, 0x1.e3e23cp-66f,
     0x1.096b16p-114f, 0x1.3d05cp-71f, 0x1.63b804p-29f, 0.0f, 0.0f, 0.0f,
     0x1.a64402p-68f, 0x1.e3825p-66f, 0x1.9f1ee6p-19f, 0x1.93a83cp-69f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.991e1cp-36f, 0x1.fabfdep-90f, 0.0f,
     0x1.432062p-111f, 0.0f, 0x1.08b736p-23f, 0.0f, 0.0f, 0x1.d76cbep-56f, 0.0f,
     0x1.c3a3b4p-103f, 0x1.fe61e8p-94f, 0x1.d3e4fep-11f, 0.0f, 0x1.31cc9ap-62f,
     0x1.5cd33p-110f, 0.0f, 0.0f, 0.0f, 0x1.872a1ep-54f, 0.0f, 0.0f, 0x1.b7badp-117f,
     0x1.d08074p-59f, 0x1.9522d4p-20f, 0.0f, 0x1.2ccaa2p-57f, 0x1.b170f8p-56f,
     0x1.98138ap-96f, 0.0f, 0x1.52806ep-75f, 0.0f, 0x1.622792p-50f, 0.0f,
     0x1.789ed2p-98f, 0x1.9a340cp-88f, 0x1.e0a80ap-20f, 0.0f, 0x1.4652a8p-124f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.2b00b4p-108f, 0.0f, 0x1.cd7582p-124f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.750dcp-68f, 0x1.18b186p-121f, 0.0f, 0.0f, 0.0f, 0x1.172822p-57f,
     0.0f, 0x1.2e19c6p-53f, 0.0f, 0.0f, 0.0f, 0x1.32c34ep-24f, 0.0f, 0x1.e2dc14p-3f,
     0x1.99a518p-105f, 0x1.5265aep-116f, 0.0f, 0x1.531c8p-13f, 0x1.3ae928p-86f,
     0x1.256cap-39f, 0.0f, 0x1.5df00ap-33f, 0x1.49e272p-81f, 0x1.e066c8p-105f, 0.0f,
     0.0f, 0x1.7cda0ap-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a23c62p-75f, 0x1.0748b6p-34f,
     0.0f, 0.0f, 0x1.4b8cep-66f, 0.0f, 0x1.9a78fap-55f, 0.0f, 0x1.56f5fcp-56f,
     0x1.e0f936p-19f, 0x1.95799p-96f, 0x1.e78f8cp-41f, 0.0f, 0x1.907642p-21f, 0.0f,
     0.0f, 0x1.1cfa9ap-102f, 0x1.6982ep-54f, 0.0f, 0.0f, 0x1.338f9ep-25f,
     0x1.8db32ap-61f, 0x1.c0bfc8p-126f, 0.0f, 0x1.754a5cp-21f, 0x1.8d847p-83f, 0.0f,
     0x1.ec31fp-26f, 0x1.391394p-49f, 0.0f, 0.0f, 0x1.44fcb2p-79f, 0x1.4729e4p-8f,
     0x1.1a7a16p-17f, 0x1.7ea87cp-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f,
     0x1.6fb616p-45f, 0.0f, 0x1.c1cdfcp-100f, 0.0f, 0x1.93004cp-32f, 0x1.9bd294p-30f,
     0.0f, 0x1.fe465cp-87f, 0.0f, 0x1.55317cp-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7a0e8ap-45f, 0.0f, 0x1.8f4294p-107f, 0.0f, 0x1.a06ecep-95f, 0.0f,
     0x1.882906p-89f, 0.0f, 0x1p0f, 0x1.87be32p-39f, 0.0f, 0.0f, 0x1.cab266p-117f,
     0.0f, 0x1.cec26ep-82f, 0x1.80b7bep-52f, 0.0f, 0x1.2404dcp-83f, 0x1.63e3cep-11f,
     0.0f, 0x1.620268p-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.db31dp-119f, 0.0f,
     0x1.355beap-69f, 0.0f, 0x1.f312p-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.550fdep-64f,
     0.0f, 0x1.e00c4ep-47f, 0x1.92292p-1f, 0x1.83a63p-70f, 0.0f, 0.0f,
     0x1.2bc72ep-80f, 0x1.709d16p-49f, 0x1.9180a2p-46f, 0x1.6050acp-64f,
     0x1.92ff34p-42f, 0.0f, 0.0f, 0x1.992094p-56f, 0x1.a2c418p-34f, 0x1.d17424p-70f,
     0.0f, 0x1.7a5d8ep-42f, 0.0f, 0.0f, 0.0f, 0x1.5623c2p-91f, 0.0f, 0.0f,
     0x1.279502p-27f, 0x1.8ca244p-42f, 0.0f, 0.0f, 0.0f, 0x1.9dfff6p-110f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.acf7dap-113f, 0x1.c2e09cp-97f, 0.0f, 0.0f, 0.0f,
     0x1.fac4f4p-96f, 0x1.ee02fp-50f, 0x1.23262ep-75f, 0x1.d3709p-25f,
     0x1.ae256ep-23f, 0x1.a268e8p-54f, 0.0f, 0.0f, 0.0f, 0x1.fe0d9p-113f, 0.0f,
     0x1.65e6cep-1f, 0.0f, 0x1.2fc4aap-103f, 0.0f, 0x1.f9e5eap-6f, 0.0f,
     0x1.36b08ap-124f, 0.0f, 0x1.ec3114p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3b1dbap-117f, 0.0f, 0.0f, 0x1.3592p-60f, 0.0f, 0x1.c45b54p-41f,
     0x1.16d998p-101f, 0x1.adfe68p-75f, 0.0f, 0x1p0f
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
            tmp1 = Sleef_log1pf1_u10purecfma(tmp0);
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
    printf("Sleef_log1pf1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_log1pf1_u10purecfma bench acc %a\n", global_bench_acc);
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
