/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_lgammaf1_u10purecfma.c --function \
 *     Sleef_lgammaf1_u10purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile float external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.27ed1p-34f, 0.0f, 0.0f, 0x1.a668dcp-98f, 0x1.21c04ap-107f, 0.0f,
     0x1.f187a6p-55f, 0.0f, 0.0f, 0.0f, 0x1.888778p-17f, 0x1.b6407p-122f,
     0x1.1a1fep-101f, 0x1.75cbfcp-2f, 0.0f, 0.0f, 0.0f, 0x1.84e5a6p-49f, 0.0f,
     0x1.5c0f0ap-10f, 0.0f, 0x1.a8a9ap-31f, 0x1.f403a8p-49f, 0x1.c918d4p-123f, 0.0f,
     0x1.f45b68p-120f, 0.0f, 0.0f, 0.0f, 0x1.e77ec8p-26f, 0.0f, 0x1.ff32a2p-52f,
     0x1p0f, 0.0f, 0x1.0fc65p-38f, 0.0f, 0x1.a6cefap-42f, 0.0f, 0x1.25cee8p-16f,
     0x1.d855e6p-64f, 0x1.5c584p-37f, 0x1.a6492p-59f, 0.0f, 0x1.c6fc24p-6f,
     0x1.94ee5cp-19f, 0.0f, 0x1.48a07cp-35f, 0.0f, 0.0f, 0x1.75e57ap-53f, 0.0f,
     0x1.48dedcp-119f, 0x1.665db6p-78f, 0.0f, 0x1.60f686p-27f, 0x1.92b6cep-60f,
     0x1.2fbf52p-42f, 0x1.28a36cp-118f, 0x1.f3f46p-23f, 0.0f, 0x1.1eea26p-91f,
     0x1.4c43f8p-114f, 0x1.c9923p-74f, 0x1.4fc442p-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4f8a8ap-102f, 0.0f, 0.0f, 0x1.42f9e6p-75f, 0x1.c07d58p-71f, 0x1.fcacdp-92f,
     0.0f, 0x1.020988p-25f, 0.0f, 0x1.d8a04ap-115f, 0x1.dd8502p-73f, 0.0f,
     0x1.af6a14p-3f, 0x1.7ab2ecp-4f, 0x1.b113aep-39f, 0.0f, 0x1.725c98p-78f,
     0x1.4a38fcp-57f, 0x1.23b654p-54f, 0x1.728ce8p-22f, 0x1.d71924p-49f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.6af9b6p-20f, 0.0f, 0x1.878ec6p-94f, 0.0f,
     0x1.7016a2p-28f, 0x1.21106ep-50f, 0.0f, 0.0f, 0x1.016546p-6f, 0x1.17b8d8p-104f,
     0.0f, 0x1.59403ep-102f, 0x1.4e504p-122f, 0.0f, 0x1.7b729ap-124f, 0.0f,
     0x1.316af4p-98f, 0.0f, 0x1.8ad276p-92f, 0x1.8698aep-36f, 0.0f, 0x1.30d0f8p-93f,
     0.0f, 0x1p0f, 0x1.6bb1dp-57f, 0x1.c03458p-64f, 0.0f, 0x1.0fe1c6p-120f,
     0x1.cdfe4ap-106f, 0x1.2a4edcp-104f, 0.0f, 0.0f, 0x1.1b0ae2p-118f, 0.0f,
     0x1.ec7a14p-91f, 0x1.cf2cfep-108f, 0x1.94a6bcp-49f, 0.0f, 0x1.349d0cp-52f,
     0x1.1ab014p-8f, 0x1.0835e6p-6f, 0x1.72b49cp-120f, 0x1.1ab56ep-49f, 0.0f, 0.0f,
     0.0f, 0x1.c11958p-91f, 0.0f, 0.0f, 0x1.a161c6p-109f, 0x1.84f51ep-34f, 0.0f, 0.0f,
     0x1.8845a4p-21f, 0.0f, 0.0f, 0x1.d252cap-107f, 0.0f, 0x1.94935ap-83f,
     0x1.70b012p-9f, 0.0f, 0x1.bf1b9ep-75f, 0x1.14b00ap-43f, 0x1.821536p-96f, 0.0f,
     0x1.8d3d54p-124f, 0.0f, 0.0f, 0x1.feb7a8p-50f, 0.0f, 0.0f, 0x1.c7b29ap-96f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.16c426p-114f, 0x1.42500cp-117f, 0.0f, 0.0f, 0.0f,
     0x1.487178p-115f, 0.0f, 0x1.7a1728p-7f, 0x1.668be6p-75f, 0x1.f41222p-88f, 0.0f,
     0x1.62027ap-110f, 0.0f, 0x1.c6caf6p-72f, 0x1.205edp-35f, 0.0f, 0x1.f7ffd8p-111f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9e45ep-19f, 0x1.494b24p-50f, 0.0f,
     0x1.a7b3d2p-85f, 0x1.069c4p-110f, 0.0f, 0x1.960c04p-38f, 0.0f, 0x1.0677b4p-49f,
     0.0f, 0x1.732e3cp-113f, 0.0f, 0x1.e281aep-86f, 0.0f, 0x1.f90edep-109f, 0.0f,
     0x1.7dae84p-108f, 0.0f, 0x1.5a3188p-77f, 0x1.b0122ep-99f, 0x1.0e8aep-53f,
     0x1.1bbf88p-80f, 0.0f, 0x1.76b2b8p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1f1642p-80f, 0.0f, 0.0f, 0x1.4118a6p-106f, 0x1.b84c88p-120f, 0x1.947faap-79f,
     0x1.b158c8p-6f, 0.0f, 0x1.d4c9d2p-74f, 0.0f, 0x1.185ca6p-110f, 0x1.44792p-13f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9d8694p-102f, 0.0f, 0.0f, 0x1.6e9682p-50f,
     0x1.af31e2p-124f, 0.0f, 0.0f, 0x1.959d28p-48f, 0.0f, 0x1.65eebap-68f,
     0x1.719d38p-96f, 0.0f, 0.0f, 0x1.82eefap-92f, 0.0f, 0x1.afaafap-80f,
     0x1.6a49d2p-120f, 0.0f, 0x1.688e12p-111f, 0x1.e0a06p-113f, 0x1.6b0f42p-77f, 0.0f,
     0x1.e6885ap-68f, 0x1.5d4384p-56f, 0x1.3e295ep-69f, 0.0f, 0x1.06c20cp-6f,
     0x1.22569cp-32f, 0x1.8d4792p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a9e132p-73f, 0.0f, 0.0f, 0.0f, 0x1.bec27ep-75f, 0.0f, 0x1.173216p-20f, 0.0f,
     0x1.2b4368p-116f, 0.0f, 0x1.459fc8p-20f, 0x1.61d5bep-118f, 0x1.3a120cp-30f, 0.0f,
     0x1.762c4ap-61f, 0.0f, 0x1.cc609cp-92f, 0x1.e7c3b2p-110f, 0.0f, 0x1.c9a4c2p-42f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.da06eap-75f, 0x1.1e4034p-96f, 0x1.cb27a8p-14f,
     0x1.aa70dcp-124f, 0.0f, 0x1.2ffdd2p-31f, 0x1.8aaefap-98f, 0.0f, 0.0f,
     0x1.21fc18p-37f, 0x1.da6a2ap-98f, 0.0f, 0x1.fcf9fap-120f, 0x1.1721c2p-21f, 0.0f,
     0.0f, 0x1.2e0ee6p-86f, 0x1.d520b8p-97f, 0.0f, 0x1.07aac8p-71f, 0.0f,
     0x1.4b23b2p-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2fc3fcp-105f, 0.0f,
     0.0f, 0x1.d73c76p-109f, 0x1.d99e64p-71f, 0x1.545232p-115f, 0.0f, 0x1.35c1f6p-75f,
     0.0f, 0.0f, 0x1.f9127p-56f, 0.0f, 0.0f, 0.0f, 0x1.885d3ep-119f, 0x1.9634b6p-18f,
     0x1.870726p-76f, 0x1.28f65cp-42f, 0.0f, 0x1.19daf8p-14f, 0.0f, 0.0f,
     0x1.4ede48p-95f, 0x1.640a76p-111f, 0x1.919a74p-70f, 0.0f, 0x1.3f7a24p-4f, 0.0f,
     0.0f, 0x1.a08dd2p-68f, 0x1.4818p-49f, 0.0f, 0x1.8ec3dep-113f, 0.0f, 0.0f, 0.0f,
     0x1.6fc0d8p-91f, 0x1.52f1eap-74f, 0.0f, 0.0f, 0.0f, 0x1.9ff694p-94f,
     0x1.649604p-100f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.881054p-88f, 0x1.0c2b9ep-80f,
     0x1.02743p-104f, 0.0f, 0.0f, 0.0f, 0x1.e09684p-34f, 0x1.0ba6d6p-9f,
     0x1.6f107p-108f, 0.0f, 0x1.ca25b4p-108f, 0x1.e8e87cp-115f, 0x1.c6798p-56f, 0.0f,
     0x1.bf6c3p-7f, 0x1.c08a8cp-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f,
     0x1.7982bep-37f, 0.0f, 0x1.1d5d4ap-30f, 0x1.2eb18ep-30f, 0x1.d87cc4p-120f,
     0x1.e7895ep-105f, 0.0f, 0x1.b3cde2p-124f, 0x1.ef2988p-104f, 0x1.8078a4p-63f,
     0x1.253b84p-63f, 0x1.b203b8p-30f, 0.0f, 0.0f, 0x1.5211c2p-83f, 0.0f,
     0x1.ed24ecp-123f, 0.0f, 0x1.e0e97ap-113f, 0x1.257d3p-113f, 0.0f, 0x1.e3f61ep-42f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.af35c6p-24f, 0.0f, 0x1.34b548p-56f,
     0x1.c88f18p-63f, 0.0f, 0x1.24fbeep-81f, 0x1.a301bcp-109f, 0.0f, 0.0f, 0.0f,
     0x1.607b5ap-42f, 0.0f, 0x1.8a2614p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.72aab4p-92f,
     0.0f, 0.0f, 0x1.13f81cp-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f9616ap-96f, 0.0f,
     0x1.427bd2p-54f, 0x1.d3aa58p-44f, 0x1.99ab34p-97f, 0x1.08fbe8p-41f, 0.0f,
     0x1.dbfacap-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7ec82p-71f, 0.0f, 0.0f, 0x1.f1bb2p-64f, 0.0f, 0.0f, 0x1.93784ap-23f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.2c5c6p-124f, 0.0f, 0.0f, 0x1.1a511ep-126f, 0.0f, 0.0f,
     0.0f, 0x1.b0470cp-59f, 0x1.64f786p-94f, 0x1.951afp-17f, 0x1.45a632p-116f, 0.0f,
     0x1.6902ap-27f, 0x1.23de44p-35f, 0x1.4d0902p-94f, 0.0f, 0x1.7ed3ecp-25f,
     0x1.c0d562p-104f, 0x1.950092p-125f, 0x1.9a960ap-5f, 0.0f, 0.0f, 0x1.acef86p-73f,
     0x1.0adabcp-27f, 0x1.ceda6p-18f, 0.0f, 0.0f, 0x1.b52aa2p-54f, 0.0f, 0.0f,
     0x1.4cd49ap-109f, 0.0f, 0x1.615fc8p-105f, 0.0f, 0x1.f8c036p-69f, 0.0f,
     0x1.cc29e2p-32f, 0.0f, 0.0f, 0x1.579114p-18f, 0.0f, 0.0f, 0x1.227c16p-33f,
     0x1.c2150ep-25f, 0.0f, 0x1.2e5bap-29f, 0x1.c98222p-43f, 0.0f, 0.0f, 0.0f,
     0x1.695176p-113f, 0.0f, 0.0f, 0.0f, 0x1.ceb4c4p-79f, 0x1.8a3a7ap-103f, 0.0f,
     0x1.579882p-103f, 0.0f, 0.0f, 0x1.fdd336p-109f, 0x1.60d07cp-35f,
     0x1.3655cep-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dc71a6p-60f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.4a6a0ep-17f, 0x1.1b32ap-34f, 0.0f, 0x1.62fb46p-15f, 0.0f,
     0x1.d6050cp-74f, 0.0f, 0.0f, 0.0f, 0x1.7abd88p-11f, 0x1.1ddbfcp-25f,
     0x1.606a3ap-65f, 0.0f, 0x1.5bda9ep-86f, 0.0f, 0.0f, 0x1.7c1e8p-78f, 0.0f,
     0x1.2b441cp-35f, 0x1.3b2116p-12f, 0x1.0f5a72p-39f, 0.0f, 0.0f, 0.0f,
     0x1.c6a4dcp-12f, 0x1.a74074p-6f, 0.0f, 0x1.08a7e2p-32f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1507bp-85f, 0x1.a78188p-82f, 0x1.bb8018p-35f, 0.0f, 0.0f, 0x1.e928ecp-64f,
     0x1.218c56p-46f, 0.0f, 0.0f, 0x1.b58256p-65f, 0.0f, 0.0f, 0x1.389806p-82f,
     0x1.5371a8p-15f, 0.0f, 0.0f, 0x1.041a3ap-9f, 0.0f, 0x1.e626e6p-49f,
     0x1.394534p-47f, 0.0f, 0x1.e78b88p-72f, 0.0f, 0x1.1fb0d6p-43f, 0.0f,
     0x1.446adep-121f, 0.0f, 0x1.6ccb9ep-54f, 0x1.6c34e2p-79f, 0x1.56c406p-109f,
     0x1.94b5d4p-34f, 0.0f, 0x1.93a2cep-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.dd00e8p-97f, 0x1.dc6e6cp-11f, 0x1.25667ap-78f, 0.0f, 0x1.f14936p-126f,
     0x1.f9fa1ap-59f, 0x1.06b3bep-59f, 0x1.5d51d8p-55f, 0.0f, 0x1.a5b06p-61f,
     0x1.4c85dep-51f, 0x1.f43b3ep-53f, 0.0f, 0x1.b8dec8p-99f, 0.0f, 0x1.b1988ap-64f,
     0x1.488c78p-103f, 0x1.12fee2p-30f, 0.0f, 0.0f, 0x1.b1f136p-14f, 0x1.16cd28p-83f,
     0.0f, 0.0f, 0x1.d170fep-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.92abe6p-78f,
     0x1.a51c8p-24f, 0x1.dbf6f8p-87f, 0x1.72eb12p-102f, 0.0f, 0.0f, 0.0f,
     0x1.b533dcp-119f, 0.0f, 0.0f, 0.0f, 0x1.0039c4p-75f, 0x1.cdd86ap-13f, 0.0f, 0.0f,
     0x1.b5258ep-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.313924p-51f, 0.0f,
     0x1.e2f2b8p-48f, 0.0f, 0x1.b13508p-64f, 0.0f, 0x1.3edf84p-97f, 0x1.6a72p-123f,
     0x1.c27d3ap-109f, 0x1.b6e8bp-23f, 0.0f, 0.0f, 0x1.8de08p-118f, 0x1.f993eap-102f,
     0.0f, 0.0f, 0.0f, 0x1.7daa7ap-61f, 0.0f, 0x1.ed8e36p-47f, 0.0f, 0x1.3c9586p-75f,
     0.0f, 0.0f, 0x1.f9d62ap-62f, 0x1.d0838ap-9f, 0x1.80773p-68f, 0.0f,
     0x1.efbb42p-75f, 0.0f, 0x1.863d26p-88f, 0x1.aa9bcap-73f, 0.0f, 0x1.334f96p-9f,
     0.0f, 0x1.34086ep-25f, 0.0f, 0x1.e7b908p-113f, 0x1.e3e93ep-56f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.6c3756p-56f, 0x1.194bb4p-113f, 0x1.afeffap-125f, 0.0f, 0.0f, 0.0f,
     0x1.39ebeap-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.288bd6p-32f,
     0.0f, 0x1.8579ep-108f, 0.0f, 0x1.f2703ap-15f, 0x1.71e176p-31f, 0.0f, 0.0f,
     0x1.4efc0ap-55f, 0x1.ad733cp-75f, 0x1.28ec46p-58f, 0.0f, 0x1.ccddc6p-73f, 0.0f,
     0.0f, 0x1.2dd612p-12f, 0x1.0b82a6p-54f, 0x1.87158cp-27f, 0x1.181cd4p-8f,
     0x1.931928p-54f, 0x1.4f0faap-27f, 0.0f, 0.0f, 0x1.73c8bp-26f, 0x1.9ca37ap-56f,
     0x1.f1548ep-1f, 0x1.648c8ep-116f, 0x1.e9401p-85f, 0x1.bb54ccp-103f,
     0x1.9fb7e6p-41f, 0x1.96be3ap-102f, 0.0f, 0.0f, 0x1.ef254ap-75f, 0.0f, 0.0f, 0.0f,
     0x1.a76c4p-23f, 0x1.0b7f12p-33f, 0x1.e1ace6p-64f, 0.0f, 0x1.7bc0bep-110f, 0.0f,
     0x1.ad4d56p-82f, 0x1.f94982p-114f, 0.0f, 0x1.f73a1ep-75f, 0x1.04ac58p-103f,
     0x1.96b6f2p-29f, 0x1.c4e59cp-47f, 0.0f, 0.0f, 0x1.98df9cp-84f, 0x1.ee17a2p-117f,
     0x1.01cf4ep-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d16128p-87f, 0.0f, 0x1.0a257p-110f,
     0x1.be24c6p-112f, 0x1.86e8dcp-42f, 0.0f, 0x1.65cfd6p-87f, 0x1.1ce454p-41f, 0.0f,
     0.0f, 0.0f, 0x1.cbf43ep-95f, 0.0f, 0x1.355ec6p-37f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.05fac8p-66f, 0x1.f5e0f8p-121f, 0x1.1f95d8p-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.2e8e62p-103f, 0x1.c1e912p-99f, 0.0f, 0x1.9ea67ap-57f, 0.0f,
     0x1.137cbcp-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c343d2p-3f,
     0x1.0d9aaep-49f, 0x1.073866p-97f, 0.0f, 0.0f, 0x1.0142ap-113f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.defbdap-48f, 0.0f, 0x1.595ef6p-113f, 0x1.051c44p-78f,
     0x1.6c6ebap-55f, 0x1.07c786p-42f, 0.0f, 0x1.183062p-87f, 0.0f, 0.0f,
     0x1.8341d4p-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.12f598p-44f, 0x1.6eec1ap-16f, 0.0f,
     0.0f, 0x1.f2f928p-121f, 0x1.94fe3ap-36f, 0.0f, 0x1.eedbacp-105f, 0x1.dffc74p-95f,
     0.0f, 0x1.281026p-114f, 0.0f, 0.0f, 0.0f, 0x1.a7bc7ep-47f, 0.0f, 0.0f,
     0x1.f01b12p-85f, 0.0f, 0x1.fb163cp-84f, 0x1.f547c4p-32f, 0x1.4fa656p-73f, 0.0f,
     0.0f, 0x1.f31996p-112f, 0x1.499bdcp-34f, 0.0f, 0x1.c58f5ep-19f, 0x1.b7c7dep-81f,
     0.0f, 0.0f, 0x1.a0e92ep-53f, 0x1.be338cp-38f, 0.0f, 0x1.ab44c6p-113f, 0.0f,
     0x1.47fec8p-120f, 0x1.08c342p-11f, 0x1.aa0352p-29f, 0.0f, 0.0f, 0.0f,
     0x1.59c902p-20f, 0.0f, 0.0f, 0x1.d78408p-76f, 0.0f, 0.0f, 0x1.21662ep-43f,
     0x1.b62b44p-123f, 0x1p0f, 0.0f, 0.0f, 0x1.e5d206p-76f, 0.0f, 0.0f,
     0x1.d78cc6p-110f, 0.0f, 0x1.f5b3e6p-49f, 0x1.5cf952p-95f, 0x1.00938p-75f,
     0x1.606232p-60f, 0.0f, 0x1.22cc2ep-11f, 0x1.ddca36p-75f, 0.0f, 0x1.657228p-3f,
     0x1.138cb8p-101f, 0x1.645342p-108f, 0x1.f8cc5cp-106f, 0.0f, 0x1.0f004p-6f, 0.0f,
     0x1.403c92p-59f, 0.0f, 0x1.a1cc8ap-24f, 0x1.735fbep-39f, 0.0f, 0x1.7f75f2p-70f,
     0.0f, 0x1.9313b4p-126f, 0.0f, 0.0f, 0.0f, 0x1.d69062p-76f, 0x1.a157acp-83f,
     0x1.5b3a1ap-126f, 0x1.225076p-48f, 0x1.6479e2p-117f, 0.0f, 0x1.3e80e8p-116f,
     0.0f, 0x1.c0195ep-85f, 0x1.d4917p-73f, 0.0f, 0x1.ac9d1p-58f, 0.0f,
     0x1.33997ap-45f, 0.0f, 0.0f, 0x1.61e7b2p-86f, 0x1.94924ep-106f, 0x1.e6d18cp-87f,
     0.0f, 0.0f, 0x1.33529cp-28f, 0.0f, 0x1.5a5974p-34f, 0.0f, 0x1.9f1b3cp-35f,
     0x1.fd79dp-121f, 0.0f, 0x1p0f, 0.0f, 0x1.77e17cp-6f, 0.0f, 0x1.c59266p-45f, 0.0f,
     0x1.a42f36p-1f, 0x1.c6e804p-40f, 0.0f, 0.0f, 0x1.ea2398p-16f, 0.0f,
     0x1.534eacp-71f, 0.0f, 0x1.765fa8p-48f, 0.0f, 0x1.bdd392p-39f, 0x1.ea2938p-24f,
     0x1.8e9a38p-49f, 0.0f, 0.0f, 0x1.fa7924p-16f, 0x1.9c5b7ap-80f, 0x1.23ce24p-108f,
     0x1.a6f3a6p-107f, 0x1.cc1af4p-18f, 0x1.03c5f4p-8f, 0.0f, 0x1.3ea856p-90f, 0.0f,
     0x1.23de68p-18f, 0x1.23275ep-74f, 0.0f, 0x1.8d3f0ap-47f
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
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = 0.0f;
    tmp = __cos_counter_num(0);
    timer = tmp;
    j = INT32_C(0);

    for (;(j < INT32_C(10000));){
        float bench_acc;
        int32_t i;
        float tmp0;
        int32_t tmp1;

        i = INT32_C(0);
        bench_acc = 0.0f;

        for (;(i < INT32_C(1001));){
            float tmp0;
            float tmp1;
            float tmp2;
            int32_t tmp3;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_lgammaf1_u10purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = bench_acc + tmp1;
            bench_acc = tmp2;
            tmp3 = i + INT32_C(1);
            i = tmp3;
        }
        tmp0 = global_bench_acc + bench_acc;
        global_bench_acc = tmp0;
        tmp1 = j + INT32_C(1);
        j = tmp1;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_lgammaf1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_lgammaf1_u10purecfma bench acc %a\n", global_bench_acc);
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
