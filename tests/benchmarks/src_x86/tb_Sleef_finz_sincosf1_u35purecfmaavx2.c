/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sincosf1_u35purecfma.c --function \
 *     Sleef_finz_sincosf1_u35purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --precision sleef_sf2 --bench \
 *     --no-embedded-bin --target x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <xmmintrin.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef_float_2 external_bench_wrapper_cst = {.x = 0.0f, .y = 0.0f};
static const Sleef_float_2 external_bench_wrapper_cst1 = {.x = 0.0f, .y = 0.0f};
volatile Sleef_float_2 external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0.0f, 0x1.0704ccp-80f, 0.0f, 0x1.f08b84p-31f, 0x1.d7ffap-77f, 0.0f,
     0x1.18356ap-64f, 0.0f, 0.0f, 0x1.c5fbbap-73f, 0x1.1447d2p-81f, 0.0f, 0.0f,
     0x1.7e1b42p-4f, 0.0f, 0x1.a774cp-57f, 0.0f, 0.0f, 0x1.d9f4a8p-35f, 0.0f,
     0x1.eaa648p-88f, 0.0f, 0.0f, 0.0f, 0x1.71daf2p-103f, 0x1.617ef2p-54f, 0.0f, 0.0f,
     0.0f, 0x1.9c5714p-107f, 0.0f, 0x1.e9db7ap-60f, 0x1.3fea44p-19f, 0x1.f04ec4p-81f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3d5596p-80f, 0.0f, 0x1.e8a8cp-126f, 0x1.83c578p-104f,
     0.0f, 0.0f, 0x1.1ab8d4p-29f, 0.0f, 0x1.dc8efap-120f, 0.0f, 0x1.2fdcp-61f,
     0x1.6c67d8p-70f, 0x1.c70074p-117f, 0.0f, 0x1.08d0f4p-26f, 0.0f, 0.0f,
     0x1.c200dp-10f, 0.0f, 0x1.cccdeep-29f, 0.0f, 0x1.b668b8p-66f, 0x1.7094fep-44f,
     0x1.47d47ep-98f, 0x1.0a4814p-2f, 0x1.483c92p-44f, 0.0f, 0.0f, 0.0f,
     0x1.9c05bcp-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8171bp-83f, 0x1.1b047p-73f,
     0x1.769ef6p-111f, 0.0f, 0x1.5d4ebcp-19f, 0.0f, 0x1.249a5p-6f, 0x1.bdecf4p-100f,
     0.0f, 0x1.2944aap-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7c1984p-8f, 0x1.a2a3f8p-46f,
     0.0f, 0x1.73e0bap-21f, 0.0f, 0x1.33dcacp-72f, 0x1.bd32ecp-5f, 0x1.ed99b8p-91f,
     0.0f, 0x1.63953ap-1f, 0.0f, 0.0f, 0x1.775e7ap-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.69f402p-114f, 0x1.19fdc4p-81f, 0x1.561506p-35f, 0x1.8b6f32p-88f, 0.0f,
     0x1.bd4392p-60f, 0x1.5c0cap-19f, 0.0f, 0.0f, 0x1.2ffe74p-83f, 0x1.b30834p-118f,
     0.0f, 0.0f, 0.0f, 0x1.b3493ep-77f, 0.0f, 0x1.b9cb86p-105f, 0x1.f8edcep-65f,
     0x1.50fbc2p-48f, 0x1.35231ep-115f, 0.0f, 0x1.90298p-121f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a381f6p-50f, 0.0f, 0x1.2b1fe4p-71f, 0.0f,
     0x1.fb1c5ep-125f, 0.0f, 0x1.781982p-90f, 0x1.246ad8p-89f, 0.0f, 0x1.24b228p-91f,
     0.0f, 0.0f, 0x1.b22326p-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4b376ep-15f,
     0x1.135c22p-29f, 0x1.b820bep-17f, 0.0f, 0x1.fa4e76p-74f, 0.0f, 0x1.363a8ap-20f,
     0.0f, 0x1.db2b2p-24f, 0.0f, 0.0f, 0.0f, 0x1.05962p-54f, 0x1.c51e22p-55f, 0.0f,
     0x1.1b3d0ep-50f, 0x1.e95416p-99f, 0.0f, 0.0f, 0x1.f0de6ap-57f, 0.0f,
     0x1.8d1bfap-42f, 0.0f, 0.0f, 0x1.4eca22p-8f, 0x1.d96e8cp-7f, 0x1.5dd0fcp-6f,
     0x1.f7dfbp-38f, 0x1.7ca6b4p-113f, 0.0f, 0x1.9223b6p-67f, 0x1.3502aep-39f,
     0x1.4906fep-49f, 0x1.820b2ep-1f, 0x1.a46748p-124f, 0x1.0ee112p-34f,
     0x1.f37178p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8d130ap-113f, 0x1.9c589cp-117f,
     0.0f, 0x1.32c2e4p-123f, 0x1.ffd896p-70f, 0.0f, 0x1.96906p-100f, 0x1.755926p-43f,
     0.0f, 0x1.732998p-55f, 0x1.6722a6p-28f, 0.0f, 0x1.86b196p-62f, 0.0f, 0.0f, 0.0f,
     0x1.7dbaeep-1f, 0.0f, 0.0f, 0x1.776f98p-65f, 0x1.3ea72ap-21f, 0.0f, 0.0f,
     0x1.22903cp-11f, 0x1.2f4e58p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a1348cp-122f, 0.0f,
     0x1.83d438p-29f, 0x1.5920e6p-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e0edcap-73f,
     0x1.ef0bcep-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.09e454p-107f, 0.0f,
     0x1.312f4ep-58f, 0.0f, 0x1.18943ep-84f, 0x1.bc475cp-101f, 0.0f, 0.0f,
     0x1.0d1f46p-111f, 0x1.7ee4a4p-113f, 0.0f, 0.0f, 0.0f, 0x1.74ce28p-38f,
     0x1.fc205ep-46f, 0x1.3ad862p-93f, 0x1.6e121ep-89f, 0x1.cff5eap-93f, 0.0f, 0.0f,
     0x1.8334eap-57f, 0.0f, 0x1.7a8172p-33f, 0.0f, 0x1.f51da6p-25f, 0.0f,
     0x1.5b835cp-66f, 0x1.a22614p-65f, 0x1.d7f6f4p-59f, 0.0f, 0.0f, 0x1.ec7c5ep-104f,
     0.0f, 0.0f, 0.0f, 0x1.2c28fp-19f, 0x1.c33f64p-103f, 0.0f, 0.0f, 0x1.37f5ap-122f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.08c7e2p-107f, 0.0f, 0.0f, 0x1.2dc5acp-5f,
     0x1.a71d84p-46f, 0.0f, 0.0f, 0x1.79686ep-66f, 0.0f, 0x1.ca75e6p-110f,
     0x1.52b1dcp-72f, 0.0f, 0.0f, 0x1.e94b12p-3f, 0x1.d4e5c6p-37f, 0.0f,
     0x1.bff39ep-88f, 0.0f, 0x1.ad59b8p-66f, 0.0f, 0.0f, 0x1.76f2a2p-18f,
     0x1.7d4c1ap-55f, 0x1.580ad2p-40f, 0x1.97164cp-35f, 0.0f, 0.0f, 0x1.e7be52p-98f,
     0x1.8bbc6p-126f, 0.0f, 0.0f, 0.0f, 0x1.7e7746p-34f, 0.0f, 0.0f, 0x1.72f17p-124f,
     0.0f, 0x1.6ad4c8p-51f, 0x1.33c86ap-71f, 0.0f, 0.0f, 0.0f, 0x1.404742p-20f, 0.0f,
     0.0f, 0x1.50a15ep-37f, 0.0f, 0.0f, 0x1.67f804p-49f, 0x1.1bff6p-69f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.22e126p-82f, 0.0f, 0x1.4fc93ep-72f,
     0x1.3a3118p-23f, 0.0f, 0x1.66b8aep-40f, 0x1.a13004p-90f, 0x1.97890cp-5f, 0.0f,
     0x1.6baffap-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a26768p-105f,
     0.0f, 0x1.7c94a2p-8f, 0x1.424f64p-13f, 0.0f, 0x1.3d4b7p-44f, 0.0f,
     0x1.3433d6p-34f, 0x1.da64fep-72f, 0.0f, 0.0f, 0.0f, 0x1.7dbed2p-46f,
     0x1.239d76p-11f, 0x1.3c3846p-115f, 0.0f, 0.0f, 0x1.d62c1cp-2f, 0.0f,
     0x1.ccab06p-76f, 0x1.f02eb2p-111f, 0x1.2a4eaep-98f, 0x1.0f3536p-59f,
     0x1.3b4278p-79f, 0x1.a6c802p-118f, 0x1.44680cp-88f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b11a18p-75f, 0.0f, 0.0f, 0.0f, 0x1.ba66f6p-4f, 0x1.40f99cp-118f,
     0x1.83b7e8p-84f, 0.0f, 0x1.184002p-113f, 0.0f, 0x1.941072p-110f, 0.0f,
     0x1.bdb5eep-16f, 0.0f, 0x1.9d84ap-77f, 0x1.1a514ap-112f, 0x1.bc8ccep-104f,
     0x1.4c07b6p-18f, 0x1.6a824p-117f, 0.0f, 0x1.26fb6ap-126f, 0x1.29b96ap-21f,
     0x1.2831cap-124f, 0x1.5d52cep-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.51ff04p-33f, 0.0f, 0x1.c79436p-6f, 0x1.89dca2p-8f, 0x1.d0e25ap-67f, 0.0f,
     0.0f, 0x1.2bb442p-13f, 0.0f, 0.0f, 0x1.8bc5ecp-72f, 0.0f, 0.0f, 0x1.0cb8bp-123f,
     0x1.486b38p-102f, 0x1.de6af6p-44f, 0x1.b43428p-94f, 0x1.8aabdcp-125f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.085be6p-88f, 0.0f, 0x1.edd568p-10f, 0.0f, 0x1.6d5ab2p-72f,
     0x1.0cff2ap-9f, 0x1.e29746p-62f, 0.0f, 0x1.2eec7p-110f, 0x1.9519dp-35f,
     0x1.44652ap-52f, 0.0f, 0x1.88b70ap-47f, 0x1.6327a8p-44f, 0x1.f346f2p-47f,
     0x1.d790f6p-15f, 0.0f, 0.0f, 0x1.519b08p-65f, 0.0f, 0.0f, 0.0f, 0x1.c26e9ap-5f,
     0.0f, 0.0f, 0x1.862484p-3f, 0x1.3f0828p-18f, 0x1.3bf21ap-60f, 0.0f, 0.0f, 0.0f,
     0x1.a000acp-90f, 0x1.5bcc6p-43f, 0.0f, 0.0f, 0x1p0f, 0x1.d383aap-27f,
     0x1.566182p-99f, 0x1.4adf06p-93f, 0.0f, 0x1.36e608p-86f, 0x1.f9720cp-23f,
     0x1.fb25p-44f, 0x1.451308p-111f, 0.0f, 0x1.f482c6p-10f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.350b9ap-65f, 0x1.c6b0ecp-95f, 0.0f, 0x1.5a1a64p-62f, 0.0f, 0.0f,
     0x1.c5a9a6p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.77d248p-20f, 0.0f, 0x1p0f, 0.0f,
     0x1.bbc1d4p-106f, 0x1.07bc56p-88f, 0.0f, 0x1.031da6p-126f, 0x1.776348p-8f, 0.0f,
     0x1.39d4dep-10f, 0x1.6a5f1ep-119f, 0.0f, 0x1.9de20ep-22f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5b2af2p-60f, 0.0f, 0.0f, 0x1.a6a8c2p-87f, 0x1.8f4bep-46f, 0.0f, 0.0f,
     0x1.6d402ap-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.397f3ap-27f, 0.0f, 0x1.29ec78p-40f, 0x1.9bf952p-104f, 0.0f,
     0x1.c4a63ep-67f, 0x1.221fbp-84f, 0x1.a3acc2p-107f, 0x1.fa443ep-72f, 0.0f,
     0x1.832492p-123f, 0.0f, 0.0f, 0x1.7d138ap-93f, 0x1.c4fde4p-92f, 0x1.01c61cp-55f,
     0.0f, 0x1.cc2498p-41f, 0.0f, 0x1.616576p-41f, 0.0f, 0x1.6c46b4p-45f, 0.0f,
     0x1.39c89cp-56f, 0x1.23b852p-30f, 0.0f, 0.0f, 0x1.921156p-39f, 0x1.03142cp-106f,
     0x1.c07ee8p-71f, 0x1p0f, 0x1.8d9c4ep-123f, 0x1.8c3dc6p-40f, 0x1.c7c17p-123f,
     0x1.cb338ep-38f, 0.0f, 0x1.aa7cc8p-23f, 0x1.4380ep-120f, 0x1.83b77ap-25f,
     0x1.0a9df6p-59f, 0.0f, 0.0f, 0x1.3af16p-86f, 0.0f, 0.0f, 0x1.70c93p-14f,
     0x1.05d538p-21f, 0x1.5873bp-44f, 0.0f, 0x1.01d7fp-85f, 0x1.e7fa66p-42f, 0x1p0f,
     0.0f, 0x1.86cee6p-95f, 0x1.4be5fcp-110f, 0.0f, 0x1.dbc81ap-80f, 0.0f,
     0x1.b048dap-88f, 0x1.4049bap-91f, 0.0f, 0.0f, 0x1.790948p-114f, 0x1.52a556p-50f,
     0.0f, 0.0f, 0x1.71ce1ap-1f, 0.0f, 0x1.258216p-36f, 0x1.13836p-100f,
     0x1.bed5dp-27f, 0x1.a88922p-24f, 0x1.13c48ap-58f, 0.0f, 0x1.288afap-45f, 0.0f,
     0x1.afb73ep-80f, 0x1.272b7ap-114f, 0.0f, 0x1.4987a8p-19f, 0x1.1634b6p-85f, 0.0f,
     0x1.8f4a38p-19f, 0x1.57ef98p-39f, 0.0f, 0.0f, 0x1.50ae9cp-93f, 0.0f, 0.0f, 0.0f,
     0x1.b3ea1cp-52f, 0x1.361ae8p-121f, 0x1.d4430cp-37f, 0x1.59044cp-19f,
     0x1.3dc046p-62f, 0.0f, 0x1.e758cap-58f, 0.0f, 0x1.2ed3bcp-106f, 0x1.fe68f6p-4f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.df60b8p-37f, 0x1.552e9cp-27f, 0x1.4180c8p-65f,
     0x1.af8006p-80f, 0.0f, 0x1.e796dap-62f, 0.0f, 0.0f, 0x1p0f, 0x1.08a7c4p-88f,
     0x1.6df632p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1230f8p-105f, 0x1.6ed4aap-104f,
     0x1.d21842p-125f, 0.0f, 0x1.867e0cp-53f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7a2516p-108f, 0.0f, 0x1.03f4a6p-24f, 0x1.afeab8p-4f, 0x1.c443cap-110f, 0.0f,
     0x1.df3856p-39f, 0x1.a1310cp-93f, 0x1.cfab32p-90f, 0x1.3a3b08p-69f, 0.0f,
     0x1.f1e466p-38f, 0x1.5cec96p-9f, 0.0f, 0x1.8190e4p-125f, 0x1.7e4d88p-34f,
     0x1.2c2c12p-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.41e202p-70f, 0x1.dc3c5p-43f,
     0x1.c344eap-89f, 0x1.4dfc18p-13f, 0.0f, 0.0f, 0x1.551f1ap-7f, 0.0f,
     0x1.be4c7ap-68f, 0x1.d62a02p-45f, 0x1.de9c3ap-105f, 0x1.10245ep-30f, 0.0f,
     0x1.7dc22ep-74f, 0x1.56007ap-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c53dc2p-67f,
     0x1.d49dc6p-118f, 0x1.2aec62p-86f, 0x1.dcb6fcp-81f, 0x1.3f915ep-25f,
     0x1.395c38p-117f, 0.0f, 0x1.bcac1ap-104f, 0x1.16033ep-50f, 0.0f, 0.0f, 0.0f,
     0x1.a5120ep-39f, 0.0f, 0.0f, 0x1.000afep-108f, 0.0f, 0.0f, 0x1.942502p-92f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.caee9ep-5f, 0x1.33158ap-19f, 0.0f, 0x1.3598e6p-114f,
     0.0f, 0.0f, 0x1.a0e78ap-102f, 0.0f, 0x1.60b6bap-95f, 0x1.44368ap-88f,
     0x1.356dp-125f, 0.0f, 0x1.93d928p-90f, 0x1.a7be6ap-24f, 0x1.1912f2p-115f, 0.0f,
     0.0f, 0x1.9e7be2p-17f, 0x1.288a3ap-5f, 0x1.1323cp-34f, 0x1.547cfp-73f, 0.0f,
     0.0f, 0x1.a505c6p-50f, 0.0f, 0x1.a3e2c6p-111f, 0x1.7616aep-125f, 0.0f,
     0x1.96b4dep-10f, 0.0f, 0x1.619a1ep-66f, 0.0f, 0x1.959d8ap-44f, 0.0f,
     0x1.336a3cp-56f, 0.0f, 0x1.a2ce74p-67f, 0x1.685578p-52f, 0x1.aaf774p-33f,
     0x1.f00bb4p-110f, 0x1.adf8e8p-108f, 0.0f, 0.0f, 0.0f, 0x1.8fdae6p-16f,
     0x1.22fb4cp-1f, 0x1.68aa54p-112f, 0.0f, 0x1.6cf7bp-50f, 0.0f, 0.0f,
     0x1.e532e8p-114f, 0x1.a1685ap-57f, 0.0f, 0.0f, 0x1.489176p-36f, 0x1.9e96d4p-88f,
     0x1.68115ep-70f, 0x1.183602p-28f, 0.0f, 0.0f, 0.0f, 0x1.d26808p-65f, 0.0f, 0.0f,
     0.0f, 0x1.3e5056p-39f, 0x1.52f9d4p-103f, 0x1.7f3a24p-41f, 0.0f, 0.0f, 0.0f,
     0x1.1ced98p-96f, 0.0f, 0x1.39a84ap-57f, 0x1.6e6a02p-112f, 0x1.e93af8p-17f,
     0x1.501dfp-14f, 0.0f, 0.0f, 0x1.75c37ep-16f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0ef034p-121f, 0x1.3a0d6p-103f, 0x1.66a052p-33f, 0.0f, 0x1.302ef6p-74f,
     0x1.0a10d8p-105f, 0.0f, 0.0f, 0.0f, 0x1.6f03f4p-65f, 0.0f, 0.0f, 0x1.6986e2p-30f,
     0x1.97208ap-102f, 0.0f, 0.0f, 0.0f, 0x1.b08f42p-105f, 0x1.a0199ep-25f,
     0x1.940996p-52f, 0x1.a8c352p-62f, 0x1.4721ecp-117f, 0x1.2c50c4p-5f, 0.0f,
     0x1.cbe708p-115f, 0x1.7b30c2p-32f, 0x1.fb1feep-13f, 0.0f, 0.0f, 0x1.c76ce6p-21f,
     0x1.72ececp-59f, 0x1.7ee376p-29f, 0.0f, 0.0f, 0.0f, 0x1.7ee85cp-37f,
     0x1.30c6b4p-50f, 0.0f, 0.0f, 0x1.4db8f8p-78f, 0.0f, 0x1.dc4fc4p-65f, 0.0f,
     0x1.1e8c0ap-71f, 0.0f, 0x1.1f131ep-76f, 0x1.a88ceep-81f, 0x1.c9a28p-87f, 0.0f,
     0.0f, 0x1.c160fp-23f, 0.0f, 0x1.3a2278p-103f, 0.0f, 0x1p0f, 0.0f,
     0x1.d9edc2p-98f, 0x1.e39bf6p-67f, 0.0f, 0.0f, 0x1.2463f4p-48f, 0x1.3ca97ep-74f,
     0x1.6ce834p-21f, 0.0f, 0x1.55cba8p-39f, 0.0f, 0.0f, 0.0f, 0x1.cc0782p-76f, 0.0f,
     0.0f, 0.0f, 0x1.d966c4p-17f, 0.0f, 0.0f, 0x1.4227e4p-23f, 0x1.8c4a7ep-72f,
     0x1.bb43b4p-74f, 0.0f, 0.0f, 0.0f, 0x1.7a2c06p-71f, 0x1.8a8dfep-108f, 0.0f,
     0x1.10ee96p-1f, 0.0f, 0x1.e55b28p-101f, 0x1.a1feap-9f, 0x1.0e22ccp-91f,
     0x1.8e3b3ep-99f, 0x1.120feep-77f, 0x1.971a5p-110f, 0x1.41c5ccp-61f, 0.0f,
     0x1.92ca14p-10f, 0.0f, 0x1.87654ep-51f, 0.0f, 0.0f, 0x1.579754p-126f,
     0x1.e76998p-66f, 0x1.fe674ep-87f, 0x1.deeb3ep-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1bc69cp-39f, 0x1.50e994p-101f, 0.0f, 0.0f, 0.0f, 0x1.adde7ep-66f,
     0x1.17ececp-43f, 0.0f, 0x1.13c0e2p-32f, 0x1.2d199ap-115f, 0x1.8aa346p-7f, 0.0f,
     0.0f, 0x1.f49412p-118f, 0x1.8494dp-40f, 0x1.9b0a8ep-44f, 0x1.8c44ccp-118f,
     0x1.b6ef9cp-29f, 0x1.799a02p-57f, 0x1.482d94p-86f, 0.0f, 0.0f, 0x1.ed001ap-33f,
     0.0f, 0x1.b0d10ap-56f, 0x1.c1b654p-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.abc5a2p-56f,
     0x1.6e115cp-53f, 0x1.60e516p-31f, 0x1.a77bp-82f, 0.0f, 0.0f, 0x1.b06286p-70f,
     0.0f, 0.0f, 0x1.ccc072p-51f, 0.0f, 0x1.7e5812p-25f, 0.0f, 0x1.b1038ap-47f,
     0x1.09ee4ep-123f, 0x1.7ad804p-59f, 0.0f, 0x1.653a3p-40f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.35b00ap-75f, 0x1.c5c75p-44f, 0x1.03f1c2p-76f, 0.0f, 0.0f,
     0x1.0b32c4p-68f, 0x1p0f, 0x1.f0c45ap-26f, 0.0f, 0.0f, 0.0f, 0x1.14901ap-106f,
     0x1.6349bp-104f, 0x1.edcaap-72f, 0x1.a315f6p-87f, 0x1.07992ep-35f, 0.0f, 0.0f,
     0x1.e6eeep-104f, 0.0f, 0x1.c077ecp-29f, 0.0f, 0x1.193dd8p-1f, 0x1.763b88p-27f,
     0.0f, 0x1.c51146p-99f, 0x1.58f34cp-76f
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
        Sleef_float_2 bench_acc;
        int32_t i;
        float tmp0;
        float tmp1;
        __m128 carg;
        __m128 carg1;
        __m128 carg2;
        float tmp2;
        float tmp3;
        float tmp4;
        __m128 carg3;
        __m128 carg4;
        __m128 carg5;
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
            __m128 carg;
            __m128 carg1;
            __m128 carg2;
            float tmp4;
            float tmp5;
            float tmp6;
            __m128 carg3;
            __m128 carg4;
            __m128 carg5;
            float tmp7;
            Sleef_float_2 tmp8;
            int32_t tmp9;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_finz_sincosf1_u35purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = bench_acc.x;
            tmp3 = tmp1.x;
            carg = _mm_set_ss(tmp2);
            carg1 = _mm_set_ss(tmp3);
            carg2 = _mm_add_ss(carg, carg1);
            tmp4 = _mm_cvtss_f32(carg2);
            tmp5 = bench_acc.y;
            tmp6 = tmp1.y;
            carg3 = _mm_set_ss(tmp5);
            carg4 = _mm_set_ss(tmp6);
            carg5 = _mm_add_ss(carg3, carg4);
            tmp7 = _mm_cvtss_f32(carg5);
            tmp8 = ((Sleef_float_2) {.x=tmp4, .y=tmp7});
            bench_acc = tmp8;
            tmp9 = i + INT32_C(1);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = bench_acc.x;
        carg = _mm_set_ss(tmp0);
        carg1 = _mm_set_ss(tmp1);
        carg2 = _mm_add_ss(carg, carg1);
        tmp2 = _mm_cvtss_f32(carg2);
        tmp3 = global_bench_acc.y;
        tmp4 = bench_acc.y;
        carg3 = _mm_set_ss(tmp3);
        carg4 = _mm_set_ss(tmp4);
        carg5 = _mm_add_ss(carg3, carg4);
        tmp5 = _mm_cvtss_f32(carg5);
        tmp6 = ((Sleef_float_2) {.x=tmp2, .y=tmp5});
        global_bench_acc = tmp6;
        tmp7 = j + INT32_C(1);
        j = tmp7;
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
    printf("Sleef_finz_sincosf1_u35purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_sincosf1_u35purecfma bench acc {.x=%a, .y=%a}\n", global_bench_acc.x, global_bench_acc.y );
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
