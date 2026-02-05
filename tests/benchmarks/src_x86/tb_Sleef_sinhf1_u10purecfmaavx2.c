/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sinhf1_u10purecfma.c --function \
 *     Sleef_sinhf1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.4e53c2p-15f, 0x1p0f, 0x1.150588p-85f, 0x1.246e1ap-42f, 0x1.5283f4p-57f,
     0x1.aa7e6cp-20f, 0.0f, 0x1.bdc504p-49f, 0x1.36f114p-15f, 0.0f, 0x1.6c15bap-119f,
     0x1.3bb5aep-46f, 0x1.15dfe4p-30f, 0.0f, 0.0f, 0x1.91e73ap-92f, 0.0f,
     0x1.5ddd9p-13f, 0x1.1de7aep-99f, 0x1.becfbap-115f, 0.0f, 0.0f, 0.0f,
     0x1.5c1b68p-43f, 0x1.bdba7ep-41f, 0.0f, 0x1.d9f454p-58f, 0x1.d22a06p-21f, 0.0f,
     0x1.859358p-65f, 0.0f, 0.0f, 0x1.05cfd4p-80f, 0x1.1029d2p-98f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.838b84p-44f, 0.0f, 0x1.228abap-125f, 0.0f,
     0x1.6315eap-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.73b214p-68f, 0.0f, 0x1.417f14p-32f, 0x1.e9463p-46f, 0.0f, 0.0f,
     0x1.60a1fap-97f, 0.0f, 0x1.778a1cp-25f, 0.0f, 0.0f, 0x1.57f8b8p-51f, 0.0f,
     0x1.6407dp-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fa16a2p-98f, 0x1.ee109ep-19f,
     0.0f, 0.0f, 0.0f, 0x1.1b79fp-117f, 0x1.90ba48p-103f, 0x1.fd0982p-12f,
     0x1.79c92cp-57f, 0.0f, 0.0f, 0x1.8e079ap-9f, 0.0f, 0x1.1eb98ep-122f, 0.0f, 0.0f,
     0.0f, 0x1.825118p-28f, 0.0f, 0x1.4c0208p-57f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b616f2p-118f, 0x1.1b6678p-86f, 0x1.3e1f62p-71f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0f1dacp-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.022dc6p-71f, 0x1.4b94cep-107f,
     0x1.70109cp-106f, 0.0f, 0.0f, 0x1.038ca4p-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ff3804p-32f, 0.0f, 0x1.322e2ap-43f, 0.0f, 0x1.8584b6p-51f, 0.0f,
     0x1.eb5f8ap-44f, 0.0f, 0x1.50d80cp-2f, 0.0f, 0.0f, 0x1.067bdep-29f, 0.0f, 0.0f,
     0x1.38f752p-125f, 0x1.452d92p-15f, 0x1.c37e48p-19f, 0x1.bf4a7cp-47f, 0.0f,
     0x1.60c0fep-96f, 0.0f, 0x1.f6f2e4p-80f, 0x1.44729ep-96f, 0.0f, 0.0f,
     0x1.0d595p-55f, 0x1.9986dap-91f, 0x1.ccf2b8p-57f, 0.0f, 0.0f, 0x1.f0a0eep-33f,
     0.0f, 0x1.9aa5dcp-11f, 0x1.da0c28p-32f, 0x1.b8e1dcp-119f, 0.0f, 0.0f,
     0x1.c9c8a6p-35f, 0.0f, 0.0f, 0x1.a9aa2ap-62f, 0x1.167fp-83f, 0x1.14fe08p-9f,
     0x1.f72fa2p-12f, 0.0f, 0.0f, 0x1.ab131ep-3f, 0.0f, 0x1.39da5ap-43f,
     0x1.46ec16p-47f, 0x1.fc16f4p-44f, 0x1.4fd4dep-61f, 0x1.26e72ep-58f, 0.0f,
     0x1.2a6c22p-100f, 0x1.44bacap-123f, 0x1.336eap-126f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f5b08cp-31f, 0.0f, 0.0f, 0x1.639bccp-101f, 0x1.0d183ap-123f,
     0.0f, 0x1.2d0004p-14f, 0.0f, 0x1.7827ccp-106f, 0x1.ff120cp-42f, 0x1.1242bcp-57f,
     0x1.bfe4e4p-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.76f602p-88f, 0x1.713feap-32f,
     0x1.770636p-66f, 0x1.2d7d5p-87f, 0x1.5f3044p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c2893ep-7f, 0.0f, 0.0f, 0x1.471294p-18f, 0.0f,
     0x1.37d67cp-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b5c2c2p-17f, 0.0f, 0x1.9d2556p-14f,
     0.0f, 0x1.1ca37p-76f, 0x1.5de34ep-116f, 0x1.e3b29ap-91f, 0x1.a73164p-82f,
     0x1.43f572p-49f, 0.0f, 0x1.25d504p-53f, 0x1.61246ap-89f, 0x1.ab120ep-116f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.69453ap-18f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e43dbap-80f, 0x1.fe4366p-36f, 0x1.bc3cccp-5f, 0.0f,
     0.0f, 0x1.2f10fap-113f, 0.0f, 0x1.f81272p-10f, 0x1.bc995ep-126f, 0.0f,
     0x1.a9ca9cp-76f, 0x1.2ee694p-121f, 0x1.ff1cf6p-19f, 0x1.287264p-14f,
     0x1.f2cb3p-45f, 0x1.340a7ap-34f, 0x1.b4d866p-105f, 0.0f, 0.0f, 0.0f,
     0x1.ece48p-87f, 0x1.8c7fcap-33f, 0x1.ffb4fep-83f, 0x1.6f65dp-102f, 0.0f, 0.0f,
     0x1.8f7aa6p-109f, 0x1.0b0e7ap-122f, 0.0f, 0x1.ba83e2p-56f, 0x1.437968p-109f,
     0.0f, 0.0f, 0x1.54e7c4p-50f, 0.0f, 0.0f, 0x1.922c04p-53f, 0x1.dbb7a4p-63f,
     0x1.2e4b0ep-115f, 0.0f, 0.0f, 0.0f, 0x1.f4dbcap-8f, 0.0f, 0.0f, 0x1.90efc8p-14f,
     0.0f, 0x1.e6c5acp-61f, 0.0f, 0x1.1997bap-101f, 0x1.1bca1cp-115f,
     0x1.c0bf0ep-121f, 0x1.7b1252p-100f, 0x1.bd1866p-108f, 0x1.539f34p-91f, 0.0f,
     0.0f, 0x1.ba3612p-122f, 0.0f, 0.0f, 0x1.431bf6p-65f, 0x1.3d9c76p-88f, 0.0f,
     0x1.0d6896p-103f, 0.0f, 0x1.5954e4p-67f, 0.0f, 0x1.4bedf6p-97f, 0.0f,
     0x1.b9cb06p-46f, 0.0f, 0.0f, 0.0f, 0x1.4b78p-85f, 0.0f, 0.0f, 0.0f,
     0x1.2e1d8ep-18f, 0.0f, 0.0f, 0x1.9c7b1cp-2f, 0x1.5f4d48p-110f, 0x1.c0eb58p-12f,
     0.0f, 0.0f, 0x1.d8bf66p-91f, 0x1.feb78cp-53f, 0x1.49cd8p-88f, 0x1.a0b5d8p-82f,
     0x1.309e76p-55f, 0.0f, 0.0f, 0x1.a7eaf8p-94f, 0x1.63935p-41f, 0.0f,
     0x1.a6d6bcp-1f, 0.0f, 0x1.adef12p-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.949684p-113f, 0.0f, 0.0f, 0.0f, 0x1.214d9cp-85f, 0x1.675d18p-65f, 0.0f, 0.0f,
     0x1.2737dap-121f, 0x1.0a04b4p-123f, 0x1.853a06p-66f, 0.0f, 0x1.668042p-41f, 0.0f,
     0.0f, 0x1.6d07ap-47f, 0x1.d2913cp-8f, 0x1.86f1dap-42f, 0x1.aeffb8p-99f, 0.0f,
     0x1.ee34fp-35f, 0x1.3b4a24p-94f, 0x1.877bp-28f, 0x1.e4aa0ap-15f, 0.0f,
     0x1.0ab434p-108f, 0x1.678322p-55f, 0x1.4ea4ep-61f, 0.0f, 0.0f, 0.0f,
     0x1.c45a9p-50f, 0.0f, 0x1.734afap-41f, 0x1.cc9bdep-23f, 0.0f, 0.0f,
     0x1.072b26p-17f, 0x1.c4c0dep-91f, 0x1.043c9p-15f, 0x1.7e2932p-36f, 0.0f,
     0x1.beae2ep-8f, 0x1.7fe5bcp-40f, 0x1.895c5ap-9f, 0.0f, 0x1.2e751ep-59f, 0.0f,
     0x1.ce0b24p-59f, 0.0f, 0.0f, 0.0f, 0x1.2f7bc6p-109f, 0.0f, 0x1.ad999cp-58f, 0.0f,
     0x1.397c1ep-116f, 0.0f, 0x1.058d46p-111f, 0x1.7aa038p-100f, 0.0f,
     0x1.3b6dfcp-50f, 0.0f, 0x1.6a87d6p-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.54a592p-70f,
     0x1.634e9p-17f, 0x1.95835ap-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.72c988p-38f,
     0x1.348712p-34f, 0x1.9d027ap-9f, 0x1.10f58ap-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ad947cp-109f, 0.0f, 0x1.2ab9d4p-121f, 0.0f, 0x1.bf0cfep-113f,
     0x1.a1281p-101f, 0x1.b3d3b8p-126f, 0.0f, 0x1.170d02p-100f, 0x1.4ce798p-100f,
     0.0f, 0x1.e1fa86p-35f, 0x1.ce0afp-6f, 0x1.7c3368p-13f, 0x1.5d6a56p-84f,
     0x1.794678p-73f, 0x1.16f712p-113f, 0x1.899eb6p-81f, 0x1.92d578p-87f, 0.0f,
     0x1.ddeb9ap-23f, 0x1.7ef61ep-75f, 0.0f, 0.0f, 0x1.423384p-5f, 0x1.4677bp-89f,
     0x1.a05bcp-88f, 0.0f, 0x1.767e44p-116f, 0x1.72b2fap-47f, 0x1.f06fp-21f, 0.0f,
     0x1.b6337ap-49f, 0.0f, 0.0f, 0.0f, 0x1.3d3012p-38f, 0x1.ea438ap-126f, 0.0f, 0.0f,
     0x1.b5ac7p-30f, 0x1.ac10fcp-59f, 0.0f, 0.0f, 0.0f, 0x1.b160bcp-19f, 0.0f,
     0x1.679c86p-105f, 0x1.18a3bp-92f, 0.0f, 0x1.bcedfap-55f, 0x1.02ee6p-83f,
     0x1.ae9bap-100f, 0.0f, 0x1.ddaaf2p-104f, 0.0f, 0.0f, 0.0f, 0x1.1ca02ep-90f, 0.0f,
     0x1.f50ba8p-113f, 0.0f, 0.0f, 0x1.f5d0aap-33f, 0.0f, 0x1.6009c8p-74f, 0.0f,
     0x1.c9a8c4p-86f, 0.0f, 0.0f, 0.0f, 0x1.e10924p-77f, 0x1.a98ba8p-67f,
     0x1.da7088p-65f, 0.0f, 0.0f, 0.0f, 0x1.40dbf8p-43f, 0.0f, 0x1.82bf0ep-23f, 0.0f,
     0x1.4229fap-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cf8fc8p-95f, 0.0f, 0.0f,
     0x1.60386ap-106f, 0.0f, 0x1.763edep-22f, 0x1.2f2e8ap-35f, 0.0f, 0.0f,
     0x1.439adep-103f, 0x1.d733p-79f, 0.0f, 0x1.bbbc64p-116f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ef969cp-125f, 0.0f, 0x1.a7d1fap-15f, 0x1.3a673ep-11f, 0x1.a4b422p-97f,
     0x1.5c829ep-10f, 0x1.763f6ap-1f, 0x1.db55cap-12f, 0x1.c949c2p-83f,
     0x1.53626ap-84f, 0x1.e03772p-9f, 0.0f, 0x1.8005ep-61f, 0x1.77a164p-3f,
     0x1.451a74p-27f, 0.0f, 0x1.2627e8p-55f, 0x1.efd72p-19f, 0.0f, 0.0f, 0.0f,
     0x1.e8d2ecp-29f, 0x1.ce42e2p-61f, 0x1.b54642p-28f, 0.0f, 0x1.f9d4bp-109f,
     0x1.f6c518p-94f, 0.0f, 0.0f, 0x1.e6a93cp-4f, 0x1.06be12p-90f, 0.0f, 0.0f,
     0x1.1dee3ep-103f, 0x1.11cd4cp-1f, 0x1.14c91ap-21f, 0x1.50d7a2p-40f, 0.0f, 0.0f,
     0x1.e9aaap-125f, 0x1.17978cp-125f, 0.0f, 0.0f, 0x1.8510ccp-39f, 0x1.c87de8p-54f,
     0x1.53182cp-44f, 0x1.61ff3p-74f, 0x1.efe9c8p-91f, 0x1.65252ap-5f,
     0x1.5d6e94p-59f, 0x1.76bdccp-65f, 0x1.fc5e58p-88f, 0.0f, 0.0f, 0x1.ababbcp-119f,
     0.0f, 0.0f, 0x1.9b12c6p-66f, 0x1.bb65fap-57f, 0x1.fe1728p-116f, 0.0f,
     0x1.65e608p-70f, 0.0f, 0.0f, 0.0f, 0x1.fb6442p-59f, 0.0f, 0x1.d146dep-72f, 0.0f,
     0.0f, 0.0f, 0x1.b1e6ccp-64f, 0x1.7e3252p-6f, 0x1.86c97ep-120f, 0x1.1ab74ep-81f,
     0.0f, 0x1.cf1cf4p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fa83eap-121f,
     0.0f, 0.0f, 0.0f, 0x1.1ac8e6p-71f, 0.0f, 0x1.021e4ep-84f, 0.0f, 0x1.7443f4p-74f,
     0.0f, 0x1.c7678cp-38f, 0.0f, 0.0f, 0x1.0d0e8ep-12f, 0.0f, 0.0f, 0x1.765044p-27f,
     0x1.d59708p-87f, 0.0f, 0.0f, 0x1.0701b8p-22f, 0x1.cad70ap-39f, 0.0f, 0.0f,
     0x1.3c26c8p-29f, 0x1.f317e2p-23f, 0x1.0bf092p-54f, 0.0f, 0x1.cb7572p-112f, 0.0f,
     0.0f, 0x1.57ca6cp-121f, 0x1.af358cp-97f, 0x1.221d4p-21f, 0x1.993ffcp-116f, 0.0f,
     0x1.173628p-47f, 0.0f, 0.0f, 0x1.ee526p-17f, 0x1.037cc8p-97f, 0.0f, 0.0f,
     0x1.e2cde2p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a6e3cap-36f, 0x1.d6d2e4p-37f, 0.0f,
     0.0f, 0.0f, 0x1.577c4ep-59f, 0.0f, 0x1.1af668p-45f, 0x1.4069f4p-54f,
     0x1.8573cap-55f, 0.0f, 0x1.bcdbc8p-65f, 0.0f, 0x1.f74abp-3f, 0x1.95442p-31f,
     0x1.66af6ep-68f, 0.0f, 0x1.6404fap-92f, 0.0f, 0.0f, 0.0f, 0x1.00f944p-96f,
     0x1.4a2aa8p-54f, 0.0f, 0x1.d16c0ep-95f, 0x1.1a8ffap-70f, 0.0f, 0.0f, 0.0f,
     0x1.e07d8ep-34f, 0x1.cd76b8p-100f, 0.0f, 0x1.c6ae18p-108f, 0x1.b72114p-37f,
     0x1.77d308p-19f, 0.0f, 0x1.86f27ap-24f, 0.0f, 0.0f, 0x1.713cd6p-84f, 0.0f,
     0x1.d608fap-117f, 0.0f, 0.0f, 0x1.d51cap-61f, 0x1.51b036p-46f, 0x1.bb04d6p-28f,
     0.0f, 0x1.d43ad2p-3f, 0x1.ae57fcp-28f, 0.0f, 0x1.fc06b2p-81f, 0x1.c937bap-34f,
     0.0f, 0x1.584004p-4f, 0.0f, 0.0f, 0x1.71f522p-38f, 0x1.7ed728p-40f, 0.0f,
     0x1.1a0c6ep-42f, 0x1.64b766p-116f, 0.0f, 0.0f, 0x1.4f05fcp-16f, 0.0f, 0.0f, 0.0f,
     0x1.e5509cp-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4ba36p-101f, 0.0f, 0x1.c1a99ep-72f,
     0x1.cc1f8ep-41f, 0x1.4c9e5p-38f, 0.0f, 0.0f, 0x1.71c69p-117f, 0.0f,
     0x1.fe2faap-46f, 0x1.2e9cd8p-126f, 0x1.6ba9d6p-10f, 0.0f, 0x1.24989cp-115f, 0.0f,
     0x1.72e458p-105f, 0x1.23eb6cp-51f, 0.0f, 0.0f, 0.0f, 0x1.9823bap-65f, 0.0f,
     0x1.d6dddep-38f, 0x1.84cb9p-120f, 0x1.52398cp-54f, 0.0f, 0.0f, 0.0f,
     0x1.8732fap-89f, 0x1.266e3cp-12f, 0x1.86c37ep-110f, 0.0f, 0x1.d51d88p-11f, 0.0f,
     0x1.5d8ffp-65f, 0.0f, 0x1.43227cp-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e5421p-30f, 0x1.3b57eap-113f, 0.0f, 0x1.ae214p-12f, 0.0f,
     0x1.ab029ap-2f, 0x1.2f0b06p-2f, 0x1.9c7488p-24f, 0x1.f01996p-64f, 0.0f, 0.0f,
     0x1.535b6ep-115f, 0.0f, 0x1.4a9c56p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7a9f54p-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a3b29ep-45f, 0.0f, 0x1.d3f272p-83f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.aa99b2p-106f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d845e2p-64f, 0x1.bf9f06p-60f, 0.0f, 0.0f, 0x1.a61298p-24f, 0x1.d4337p-82f,
     0.0f, 0.0f, 0x1.3f3394p-116f, 0.0f, 0.0f, 0x1.231d2ep-111f, 0x1.61f996p-46f,
     0x1.32fe7p-102f, 0x1.5b1652p-80f, 0x1.f9d674p-75f, 0.0f, 0.0f, 0x1.2a3a48p-99f,
     0x1.824a4p-55f, 0x1.8f7c2p-63f, 0x1.1dac14p-35f, 0x1.7c06b2p-14f, 0.0f, 0.0f,
     0x1.14c046p-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5db468p-82f, 0.0f,
     0.0f, 0x1.ef9f72p-89f, 0.0f, 0x1.61f314p-29f, 0.0f, 0x1.bd39eap-9f,
     0x1.6c4f54p-78f, 0x1.a4ceccp-103f, 0x1.e295f8p-14f, 0x1.872084p-123f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.171bp-37f, 0x1.76c18ep-67f, 0.0f, 0.0f,
     0x1.a0f4d4p-31f, 0x1.ce92b4p-108f, 0.0f, 0x1.df10bep-16f, 0x1.cff01ep-64f,
     0x1.7b4806p-8f, 0.0f, 0x1.963f16p-75f, 0x1.507f5ep-45f, 0.0f, 0.0f, 0.0f,
     0x1.d887cap-3f, 0x1.555908p-37f, 0x1.708928p-122f, 0.0f, 0.0f, 0.0f,
     0x1.64d09ap-114f, 0.0f, 0x1.c388d8p-92f, 0x1.2ff262p-121f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.598728p-68f, 0.0f, 0.0f, 0.0f, 0x1.5d4abep-49f, 0.0f,
     0x1.562602p-55f, 0.0f, 0x1.6b70f4p-88f, 0.0f, 0x1.731a84p-4f, 0.0f, 0.0f,
     0x1.4696c2p-112f, 0x1.bdbb54p-77f, 0.0f, 0x1.cdf27ep-121f, 0x1.886596p-58f,
     0x1.acf02ep-122f, 0x1.fbc7fcp-15f, 0x1.fa99bp-22f, 0.0f, 0.0f, 0x1.4a845p-77f,
     0.0f, 0.0f, 0x1.ff6de6p-26f, 0x1.0cc0a4p-80f, 0.0f, 0x1.76362cp-103f,
     0x1.81f636p-101f, 0.0f, 0x1.ed109cp-79f, 0x1.ee260cp-69f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.df1cbap-100f, 0x1.55519cp-102f, 0x1.93fccep-41f, 0.0f, 0.0f, 0.0f,
     0x1.62777p-100f, 0.0f, 0x1.e2a19cp-107f, 0x1.2fc3dep-98f, 0x1.8269f8p-43f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0a1342p-26f, 0x1.fc0afp-46f, 0.0f,
     0x1.10fc4cp-70f, 0x1.7ece88p-111f, 0x1.089a72p-4f, 0x1.4d278ap-9f,
     0x1.2d9d18p-125f, 0x1.8bc40ep-93f, 0.0f, 0x1.63bb3p-74f, 0.0f, 0.0f,
     0x1.e17cd2p-6f, 0.0f, 0.0f, 0x1.5b03a2p-35f, 0x1.00c63cp-9f, 0.0f,
     0x1.6998d4p-20f, 0.0f, 0.0f, 0.0f, 0x1.1e6286p-63f, 0x1.317c54p-32f, 0.0f, 0.0f,
     0x1.98e43ap-100f, 0.0f, 0.0f
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
            tmp1 = Sleef_sinhf1_u10purecfma(tmp0);
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
    printf("Sleef_sinhf1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_sinhf1_u10purecfma bench acc %a\n", global_bench_acc);
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
