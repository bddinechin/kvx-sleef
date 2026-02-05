/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_sincosf1_u35purecfma.c --function \
 *     Sleef_sincosf1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.43541ap-76f, 0x1.0850d4p-40f, 0.0f, 0.0f, 0.0f, 0x1.c9d972p-67f, 0.0f,
     0x1.e254f4p-115f, 0x1.219156p-51f, 0x1.b63d1p-79f, 0.0f, 0x1.eb8498p-114f,
     0x1.287352p-68f, 0.0f, 0x1.a817cap-81f, 0.0f, 0x1.7b9cbp-115f, 0.0f, 0.0f,
     0x1.b4e9f2p-84f, 0.0f, 0x1.2c34bp-4f, 0x1.974d86p-70f, 0.0f, 0x1.ccc164p-4f,
     0x1.390dbap-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.38e4d6p-22f, 0x1.f5a55p-101f,
     0x1.fae85ep-125f, 0x1.91404ap-85f, 0.0f, 0x1.282064p-112f, 0x1.2e2e3ap-8f,
     0x1.70a4e2p-37f, 0x1.024b94p-47f, 0x1.01e57ep-32f, 0.0f, 0.0f, 0.0f,
     0x1.a6ea16p-29f, 0x1.343e1ep-98f, 0x1.334236p-54f, 0.0f, 0x1.6b7b8ep-78f,
     0x1.fabe02p-22f, 0x1.3f6d04p-27f, 0x1.90231ep-25f, 0.0f, 0x1.519258p-53f, 0.0f,
     0.0f, 0x1.3b4ed6p-59f, 0.0f, 0x1.7086p-35f, 0.0f, 0x1.fb72dp-49f,
     0x1.1facb4p-49f, 0x1.4e59cp-111f, 0x1.1d79ep-27f, 0x1.ff002ep-78f, 0.0f,
     0x1.02b0acp-44f, 0x1.b1876ap-1f, 0.0f, 0x1.ebc39cp-116f, 0.0f, 0.0f,
     0x1.b2141ep-126f, 0x1.286cdap-13f, 0x1.a1c16ap-27f, 0x1.761b9ep-65f,
     0x1.077e64p-44f, 0.0f, 0.0f, 0.0f, 0x1.0d086cp-63f, 0.0f, 0.0f, 0x1.dee2e8p-62f,
     0.0f, 0x1.094e04p-63f, 0x1.6a9a3ap-37f, 0x1.6c6af6p-110f, 0x1.3b47f8p-3f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.8a051ap-68f, 0.0f, 0x1.a9e898p-6f, 0x1.8262f8p-51f,
     0.0f, 0.0f, 0x1.862a3p-107f, 0.0f, 0x1.76c45p-95f, 0x1.245126p-32f, 0.0f,
     0x1.7d8cc6p-98f, 0x1.727e72p-88f, 0.0f, 0.0f, 0.0f, 0x1.8ca5dcp-56f,
     0x1.4fa59ap-65f, 0x1.19434p-115f, 0x1.3a950ap-124f, 0x1.ce4974p-69f, 0.0f,
     0x1.cd07bp-104f, 0.0f, 0.0f, 0x1.f69e8ap-91f, 0x1.e00c7cp-16f, 0x1.a0a6cp-7f,
     0.0f, 0.0f, 0x1.fcdcfcp-118f, 0x1.cc741ep-83f, 0x1.dc33fep-89f, 0x1.1dfe8p-4f,
     0x1.d8b23ap-35f, 0x1.034632p-46f, 0.0f, 0x1.52751ap-53f, 0.0f, 0x1.dcd67p-19f,
     0x1.ae31ap-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.24d214p-114f, 0.0f, 0x1.84d6dcp-14f, 0x1.7addecp-54f, 0.0f, 0.0f, 0.0f,
     0x1.352028p-88f, 0x1.5c0d18p-97f, 0.0f, 0x1.1cae64p-87f, 0x1.aee228p-10f, 0.0f,
     0.0f, 0.0f, 0x1.b89a5p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.09b284p-32f, 0.0f,
     0x1.5fa14cp-9f, 0.0f, 0.0f, 0x1.48e606p-89f, 0.0f, 0x1.d42f84p-41f, 0.0f, 0.0f,
     0x1.cf0cbep-3f, 0x1.200fbcp-1f, 0.0f, 0x1.2b265ep-108f, 0x1.e06c8ep-28f, 0.0f,
     0x1.c7632cp-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4eff6cp-24f, 0x1.8febdep-106f,
     0.0f, 0x1.55461p-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7251dap-51f, 0.0f, 0.0f,
     0x1.d459a4p-11f, 0.0f, 0x1.072c6ap-110f, 0x1.636838p-50f, 0.0f, 0x1.c865bp-29f,
     0x1.31b76ap-62f, 0x1.3ba928p-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.15461ap-33f, 0.0f, 0x1.3ff8d8p-115f, 0.0f, 0x1.fd103cp-19f, 0.0f, 0.0f, 0.0f,
     0x1.2c5106p-108f, 0.0f, 0.0f, 0.0f, 0x1.98cd1p-36f, 0x1.0564cap-97f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.76ed84p-41f, 0x1.7d2d3cp-104f, 0x1.ba112ep-20f, 0x1.bfaf0cp-115f,
     0.0f, 0x1.a21008p-43f, 0x1.5d3296p-46f, 0x1.2dd40ep-4f, 0x1.d3492ap-56f, 0.0f,
     0.0f, 0x1.e904f2p-88f, 0.0f, 0x1.d93144p-96f, 0.0f, 0x1.5f85dcp-61f, 0.0f,
     0x1.671f38p-86f, 0.0f, 0.0f, 0.0f, 0x1.a1036ep-71f, 0.0f, 0.0f, 0x1.d244b4p-39f,
     0.0f, 0x1.93dcd4p-111f, 0x1.c56c2cp-14f, 0x1.e3a416p-94f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d811fap-13f, 0.0f, 0x1.0a157ep-97f, 0x1.d28484p-73f, 0.0f,
     0.0f, 0x1.f7f8f8p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.06552p-39f,
     0x1.1012bap-71f, 0.0f, 0.0f, 0.0f, 0x1.1e122cp-44f, 0.0f, 0x1.79f432p-54f,
     0x1.0da9d6p-65f, 0x1.5dc2eep-92f, 0.0f, 0.0f, 0.0f, 0x1.d4f13cp-55f,
     0x1.f4ce36p-103f, 0x1.e2d9dp-8f, 0.0f, 0x1.56fb4ap-13f, 0.0f, 0x1.0cdb8p-22f,
     0.0f, 0x1.6bb6eap-23f, 0x1.a2c98ep-62f, 0x1.de34b8p-95f, 0.0f, 0x1.1a97c6p-95f,
     0.0f, 0x1.df9eecp-114f, 0x1.e26c2cp-62f, 0x1.b6a55p-110f, 0.0f, 0x1.156db2p-23f,
     0x1.d4ec54p-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.db4354p-95f, 0.0f, 0.0f,
     0x1.042bd8p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2e4f58p-45f,
     0x1.e62c0cp-59f, 0.0f, 0.0f, 0x1.d50e3ep-39f, 0x1.68f60ep-115f, 0x1.b108f2p-1f,
     0x1.a87d46p-25f, 0.0f, 0x1.acd92ep-51f, 0.0f, 0x1.1c49fp-51f, 0.0f, 0.0f,
     0x1.84f00ap-15f, 0.0f, 0x1.520814p-82f, 0x1.585efap-99f, 0.0f, 0x1.202ff2p-4f,
     0.0f, 0x1.d12aa4p-31f, 0.0f, 0x1.1617eap-92f, 0x1.907ea8p-75f, 0.0f,
     0x1.dc2926p-87f, 0.0f, 0.0f, 0.0f, 0x1.71ab82p-47f, 0x1.96eac2p-44f,
     0x1.a6145ap-18f, 0.0f, 0.0f, 0x1.6caafcp-98f, 0x1.54b47cp-76f, 0.0f, 0.0f,
     0x1.c2446cp-43f, 0x1.4de314p-75f, 0x1.54a236p-33f, 0x1.df6bf6p-60f,
     0x1.e28292p-54f, 0.0f, 0.0f, 0x1.32398cp-118f, 0x1.b7f3aep-120f, 0x1.29fdb4p-83f,
     0x1.439ef4p-108f, 0x1.71cbd4p-82f, 0.0f, 0x1.e54e78p-37f, 0.0f, 0x1.135d2ap-77f,
     0.0f, 0.0f, 0x1.f979eap-23f, 0x1.c0351ap-44f, 0.0f, 0.0f, 0.0f, 0x1.40c5d2p-42f,
     0x1.6bc346p-75f, 0.0f, 0.0f, 0x1.b277e8p-3f, 0x1.3591fep-56f, 0.0f,
     0x1.18c9d4p-70f, 0.0f, 0.0f, 0x1.e768e2p-81f, 0x1.36c6bcp-91f, 0x1.e14b76p-83f,
     0.0f, 0.0f, 0.0f, 0x1.3fb14ap-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.4a804p-55f, 0.0f, 0x1.73dc96p-93f, 0.0f, 0.0f, 0x1.d61c78p-9f,
     0x1.f3778cp-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ef5766p-122f, 0.0f, 0.0f,
     0x1.f03f68p-25f, 0x1.631216p-65f, 0.0f, 0.0f, 0x1.a28192p-51f, 0x1.2624dep-15f,
     0x1.c9de9cp-37f, 0x1.b720ep-57f, 0.0f, 0.0f, 0.0f, 0x1.781dfcp-117f,
     0x1.b6f3e8p-74f, 0.0f, 0x1.15983cp-112f, 0x1.04cbdep-78f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8b604ap-116f, 0.0f, 0.0f, 0x1.09580cp-117f, 0.0f, 0x1.603662p-2f, 0.0f, 0.0f,
     0x1.158d6p-100f, 0x1.8c7c2ap-76f, 0x1.0cfbf2p-34f, 0x1.1ca7acp-51f, 0.0f,
     0x1.9f57d8p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e19862p-54f, 0x1.2b3468p-13f, 0.0f, 0x1.9c577ap-93f, 0.0f, 0.0f,
     0x1.3de952p-10f, 0x1.2a229ep-57f, 0x1.fb57bep-96f, 0.0f, 0.0f, 0.0f,
     0x1.654288p-45f, 0.0f, 0.0f, 0x1.c5baf6p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.559394p-90f, 0x1.deba1cp-102f, 0x1.2a0f9p-77f,
     0x1.63fd22p-76f, 0.0f, 0x1.9d00b4p-38f, 0x1.b9390ap-59f, 0x1.895b8ap-94f,
     0x1.eeef5p-126f, 0x1.c8a28ap-96f, 0x1.3532bep-33f, 0.0f, 0x1.2b0632p-22f,
     0x1.27d9acp-109f, 0x1.c488fap-97f, 0.0f, 0x1.4f2c7ep-18f, 0x1.c5819cp-16f,
     0x1.73ccc2p-64f, 0.0f, 0x1.4a2174p-109f, 0.0f, 0x1.21c704p-38f, 0.0f,
     0x1.6f1f3ep-76f, 0.0f, 0x1.62fc04p-17f, 0x1.bc4372p-76f, 0x1.6c3ccap-47f,
     0x1.2da35p-69f, 0x1.f350a4p-22f, 0.0f, 0x1.6688cep-54f, 0x1.1bd174p-78f,
     0x1.bc604p-62f, 0x1.7f9b06p-49f, 0.0f, 0x1.4368d8p-115f, 0.0f, 0.0f, 0.0f,
     0x1.f053e2p-4f, 0.0f, 0x1.88967cp-32f, 0x1.62d6fp-111f, 0.0f, 0.0f, 0.0f,
     0x1.aa3aeap-7f, 0.0f, 0x1.d30edap-109f, 0x1.54f7c8p-50f, 0x1.18b7fap-108f, 0.0f,
     0x1.d50208p-42f, 0.0f, 0.0f, 0.0f, 0x1.9d00a6p-49f, 0.0f, 0x1.ead0d8p-10f,
     0x1.4f221p-92f, 0x1.78e486p-80f, 0.0f, 0x1.fb5486p-7f, 0.0f, 0x1.9811dep-120f,
     0.0f, 0x1.9df7d6p-87f, 0x1.571e0ap-7f, 0.0f, 0x1.7f6618p-105f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.60704p-5f, 0x1.b3e8ccp-63f, 0.0f, 0.0f, 0.0f, 0x1.a0819ep-124f,
     0x1.c4f6aep-30f, 0.0f, 0x1.96c422p-76f, 0.0f, 0.0f, 0x1.4a5e6ap-19f,
     0x1.8fb22cp-46f, 0x1.b86444p-4f, 0.0f, 0x1.3a7a1ap-96f, 0.0f, 0x1.9f24ecp-92f,
     0x1.1ee838p-96f, 0x1.8e7e8ep-33f, 0.0f, 0x1.b1b8bep-107f, 0.0f, 0x1.40a13ep-13f,
     0x1.8cc67ap-44f, 0x1.42026ap-46f, 0.0f, 0.0f, 0x1.386c38p-19f, 0x1.c153a6p-77f,
     0.0f, 0x1.824474p-58f, 0.0f, 0x1p0f, 0.0f, 0x1.cba942p-27f, 0.0f, 0.0f,
     0x1.69b0fcp-67f, 0x1.154a1cp-98f, 0x1.c3e47ep-62f, 0x1.632ea4p-48f,
     0x1.b0c9d4p-60f, 0x1.3d5378p-59f, 0.0f, 0.0f, 0.0f, 0x1.888ebcp-125f,
     0x1.b0412ep-62f, 0.0f, 0x1.768b34p-108f, 0x1.6c7b04p-10f, 0x1.8f166ep-110f, 0.0f,
     0x1.ad790cp-88f, 0.0f, 0x1.8dc054p-64f, 0.0f, 0x1.5b2e92p-110f, 0x1.2e0f82p-9f,
     0.0f, 0x1.230682p-78f, 0x1.c33f16p-9f, 0x1.e8d896p-73f, 0.0f, 0x1.1dff04p-57f,
     0.0f, 0.0f, 0x1.2e7488p-119f, 0x1.9f73ap-118f, 0.0f, 0x1.8214aep-107f, 0.0f,
     0x1.90a1e8p-38f, 0.0f, 0.0f, 0x1.6e7608p-27f, 0x1.d9c77ap-15f, 0x1.6c33dap-7f,
     0.0f, 0x1.50d222p-58f, 0x1.0625ccp-32f, 0x1.370f72p-121f, 0x1.244c3ep-34f, 0.0f,
     0x1.5b280ap-74f, 0x1.9df3cap-32f, 0x1.c0f6cep-89f, 0x1.f9d08p-26f,
     0x1.464c94p-16f, 0x1.f30066p-5f, 0x1.afb5acp-40f, 0x1.4f8c8cp-97f, 0.0f,
     0x1.22dc74p-58f, 0x1.048e7ap-4f, 0.0f, 0x1.6d2fb2p-112f, 0.0f, 0x1.0d3934p-104f,
     0.0f, 0.0f, 0x1.1e5eccp-69f, 0x1.0e99bep-116f, 0x1.4091bap-7f, 0x1.5687ccp-10f,
     0.0f, 0.0f, 0x1.f3129ap-116f, 0.0f, 0.0f, 0x1.588cdcp-4f, 0.0f, 0x1.2e70d8p-57f,
     0.0f, 0x1.8628b8p-34f, 0x1.8c22fcp-111f, 0.0f, 0x1.17ae9p-38f, 0x1.2c6a08p-118f,
     0.0f, 0x1.2747f4p-41f, 0.0f, 0x1.f502d2p-85f, 0x1.0d5ef4p-16f, 0.0f,
     0x1.79ebfep-122f, 0x1.507e92p-123f, 0x1.e2d6e6p-120f, 0x1.8a6108p-85f, 0.0f,
     0x1.3fb946p-120f, 0.0f, 0.0f, 0.0f, 0x1.3eb5dcp-64f, 0x1.533eeap-38f,
     0x1.dcac92p-14f, 0x1.0fbdeep-26f, 0x1.9fb7c4p-113f, 0.0f, 0x1.3f4d3p-29f,
     0x1.c27134p-119f, 0x1.786b9ep-42f, 0.0f, 0.0f, 0.0f, 0x1.941b38p-111f,
     0x1.273386p-100f, 0x1.64b8p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.02adbep-15f, 0.0f, 0x1.cc9892p-43f, 0x1.d2a73p-82f, 0.0f, 0x1.a5b36ap-99f,
     0.0f, 0x1.a8d494p-85f, 0x1.be8b9ap-56f, 0.0f, 0x1.436186p-75f, 0.0f,
     0x1.a41892p-31f, 0.0f, 0x1.2806b6p-5f, 0x1.328aaap-35f, 0.0f, 0x1.9400e8p-39f,
     0x1.dad9e8p-98f, 0x1.d827aep-89f, 0.0f, 0.0f, 0x1.9c4b12p-77f, 0x1.de66d4p-60f,
     0.0f, 0x1.9ecffep-92f, 0x1.485942p-126f, 0.0f, 0.0f, 0x1.70f052p-109f,
     0x1.5a04b2p-110f, 0x1.f9e4dep-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.394144p-60f,
     0x1.bc84dep-2f, 0x1.cbc5d2p-107f, 0x1.7f557ap-110f, 0.0f, 0x1.d7301p-66f,
     0x1.9ab05ep-83f, 0x1.09dd0ap-66f, 0x1.9a267cp-65f, 0x1.83fd34p-60f,
     0x1.49469ap-90f, 0x1.229016p-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a56c3cp-39f,
     0x1.e51cdp-28f, 0x1.036094p-124f, 0x1.c14ecap-40f, 0.0f, 0x1.5bfaaap-82f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ff674p-42f, 0x1.6a494ep-43f, 0.0f, 0x1.32eb8cp-121f,
     0x1.06316ap-126f, 0.0f, 0.0f, 0x1.30d49p-43f, 0x1.afefdcp-39f, 0.0f,
     0x1.d3ceap-79f, 0.0f, 0x1.793e2p-39f, 0.0f, 0.0f, 0x1.b3e8dcp-37f, 0.0f, 0.0f,
     0x1.bfec4p-14f, 0x1.48b096p-83f, 0x1.a05932p-55f, 0x1.cbe87cp-82f,
     0x1.4a1592p-71f, 0x1.68165p-26f, 0x1.1b7e9ap-111f, 0x1.3e6492p-122f,
     0x1.86166ep-47f, 0.0f, 0x1.d204dp-22f, 0x1.dfd6e2p-75f, 0.0f, 0.0f,
     0x1.3856c2p-99f, 0.0f, 0.0f, 0x1.306dcep-23f, 0.0f, 0.0f, 0.0f, 0x1.8b48fp-88f,
     0.0f, 0x1.dfb15ap-126f, 0x1.58f342p-15f, 0.0f, 0.0f, 0.0f, 0x1.c516a8p-94f,
     0x1.d92488p-40f, 0.0f, 0.0f, 0x1.512c56p-25f, 0x1.dece04p-32f, 0x1.0b7e4cp-118f,
     0.0f, 0.0f, 0.0f, 0x1.0a089ap-54f, 0x1.2c3958p-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.02f2ap-124f, 0.0f, 0x1.e000ap-23f, 0.0f, 0x1.5caa24p-76f, 0x1.723b8p-109f,
     0.0f, 0x1.d84878p-78f, 0.0f, 0.0f, 0x1.f8b752p-40f, 0x1.c2fe92p-96f,
     0x1.254faep-87f, 0x1.839d24p-38f, 0.0f, 0.0f, 0.0f, 0x1.4522b4p-6f,
     0x1.4134d4p-7f, 0x1p0f, 0.0f, 0.0f, 0x1.5341dap-71f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.091c9ep-63f, 0.0f, 0x1.28479ep-7f, 0x1.fb7d3ep-17f, 0.0f, 0x1p0f,
     0x1.ced1acp-125f, 0.0f, 0x1.527546p-6f, 0x1.504612p-26f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b6113ep-124f, 0.0f, 0.0f, 0.0f, 0x1.0bd996p-56f, 0.0f, 0x1.89f57p-10f,
     0.0f, 0.0f, 0x1.c3ce98p-78f, 0.0f, 0x1.f1c0bp-79f, 0.0f, 0.0f, 0x1.805536p-86f,
     0.0f, 0x1.a27fe4p-120f, 0.0f, 0x1.a09f26p-121f, 0x1.f5dd2ep-14f,
     0x1.f6954ep-121f, 0x1.3d1ce2p-94f, 0x1.694c18p-71f, 0.0f, 0x1.3612a4p-5f,
     0x1.06600cp-101f, 0x1.ef78bp-91f, 0.0f, 0x1.3a551cp-105f, 0.0f, 0.0f, 0x1p0f,
     0.0f, 0.0f, 0x1.797dc6p-43f, 0x1.5442fep-87f, 0.0f, 0x1.ada41cp-9f,
     0x1.8cfe7ap-3f, 0x1.7f2a94p-97f, 0x1.7e5c36p-65f, 0x1.a84c62p-36f,
     0x1.343148p-70f, 0x1.14115p-124f, 0x1.037bb6p-59f, 0x1.10a34ap-117f,
     0x1.a60614p-117f, 0x1.c60e5cp-48f, 0.0f, 0x1.6efe48p-71f, 0.0f, 0x1.6fd82ep-25f,
     0.0f, 0x1.acda28p-100f, 0.0f, 0x1.0bcf72p-94f, 0.0f, 0x1.9bb27cp-17f,
     0x1.db82c6p-20f, 0.0f, 0.0f, 0.0f, 0x1.f04278p-125f, 0.0f, 0.0f, 0.0f,
     0x1.2c27a8p-116f, 0.0f, 0.0f, 0x1.f87442p-53f, 0x1.4bba8ep-14f, 0.0f, 0.0f,
     0x1.f823e4p-69f, 0.0f, 0.0f, 0x1.71665ap-12f, 0.0f, 0x1.2f93d6p-92f, 0.0f,
     0x1.803218p-94f, 0.0f, 0x1.18f65ap-15f, 0x1.e34998p-45f, 0x1.93943ap-30f,
     0x1.c9652ep-35f, 0x1p0f, 0x1.307ddap-63f, 0x1.7f2cc6p-15f, 0.0f, 0.0f, 0.0f,
     0x1.dd4beap-22f, 0x1.5545d2p-93f, 0x1.37cc34p-2f, 0x1.c8e994p-79f,
     0x1.862cdp-108f, 0x1.0abc58p-20f, 0x1.02c6f8p-77f, 0x1.dd4f2p-52f
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
            tmp1 = Sleef_sincosf1_u35purecfma(tmp0);
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
    printf("Sleef_sincosf1_u35purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_sincosf1_u35purecfma bench acc {.x=%a, .y=%a}\n", global_bench_acc.x, global_bench_acc.y );
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
