/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_tanf4_u35avx2128.c --function Sleef_finz_tanf4_u35avx2128 \
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
     0x1.918a06p-5f, 0x1.b18daep-87f, 0x1.99d5bp-95f, 0x1.e7bb3cp-94f,
     0x1.044da4p-13f, 0x1.f85976p-113f, 0.0f, 0x1.ff72aep-107f, 0x1.6f9e02p-22f, 0.0f,
     0x1.3ed716p-91f, 0x1.b9e776p-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b24376p-35f, 0.0f,
     0.0f, 0x1.c6712p-94f, 0x1.ab3f4p-119f, 0x1.7851fep-72f, 0x1.15ad72p-116f, 0.0f,
     0x1.f24a3cp-100f, 0x1.93b6b6p-95f, 0.0f, 0.0f, 0x1.131f32p-113f, 0.0f, 0.0f,
     0.0f, 0x1.09eadep-65f, 0.0f, 0x1.c5df98p-62f, 0x1.a7c16p-26f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ec25e4p-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.376d92p-94f, 0x1.b24908p-126f,
     0x1.c7d8c8p-77f, 0x1.f62102p-67f, 0x1.60782p-20f, 0.0f, 0x1.84a75p-106f, 0.0f,
     0.0f, 0x1.8fe318p-117f, 0.0f, 0.0f, 0x1.17d6eep-56f, 0.0f, 0x1.98a168p-117f,
     0.0f, 0.0f, 0.0f, 0x1.5c2856p-119f, 0.0f, 0x1.70265ap-29f, 0.0f, 0x1.894d1cp-69f,
     0.0f, 0x1.475caap-33f, 0x1.eaec4cp-49f, 0x1.ac13f8p-108f, 0.0f, 0x1.24bfa2p-22f,
     0x1.741686p-48f, 0x1.80f776p-78f, 0x1.08f4dap-87f, 0x1.91816ep-44f,
     0x1.cfabc2p-25f, 0.0f, 0.0f, 0x1.76367ap-113f, 0x1.9ab8e4p-103f, 0x1.6fbce8p-47f,
     0x1.772978p-107f, 0.0f, 0.0f, 0x1.d306f2p-93f, 0x1.fef696p-4f, 0x1.6f77ccp-87f,
     0x1.097a9cp-52f, 0.0f, 0.0f, 0.0f, 0x1.5c8bcp-46f, 0x1.4fdb7ap-40f, 0.0f, 0.0f,
     0x1.0f5146p-41f, 0x1.0bd98ap-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dcec52p-61f,
     0.0f, 0.0f, 0x1.75eb2p-119f, 0.0f, 0.0f, 0x1.3d4c04p-46f, 0.0f, 0.0f,
     0x1.0ddf04p-114f, 0.0f, 0x1.402a92p-99f, 0x1.c792d2p-34f, 0x1.19855ep-107f, 0.0f,
     0x1.81cab6p-92f, 0x1.4673fap-118f, 0x1.abf192p-12f, 0x1.67fd4p-104f, 0.0f, 0.0f,
     0x1.9459ap-48f, 0x1.bb6d62p-34f, 0.0f, 0x1.d390dep-26f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.858e34p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.90a454p-120f, 0.0f, 0.0f,
     0x1.219984p-65f, 0x1.832172p-45f, 0x1.8f730cp-66f, 0x1.cd4dc2p-54f,
     0x1.f3b356p-115f, 0.0f, 0x1.d8b2acp-38f, 0.0f, 0.0f, 0x1.0274d4p-97f, 0.0f,
     0x1.c7869cp-48f, 0x1.4fd022p-57f, 0x1.68c23ep-7f, 0.0f, 0.0f, 0x1.123d7p-49f,
     0x1.1c0fe8p-100f, 0.0f, 0x1.b6fe2ap-7f, 0x1.44e6fep-118f, 0x1.fb53aap-99f,
     0x1.8d5082p-117f, 0.0f, 0x1.36f0fep-93f, 0x1.315e9ap-71f, 0x1.1c93a6p-23f,
     0x1.4532b4p-15f, 0.0f, 0.0f, 0.0f, 0x1.bc5eb4p-101f, 0x1.2ee74cp-70f, 0.0f,
     0x1.e817bcp-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f9e6c8p-90f, 0.0f, 0.0f,
     0x1.5977ap-106f, 0x1.07a96ep-76f, 0x1.c7291ep-8f, 0.0f, 0x1.b9e26cp-52f,
     0x1.496db8p-1f, 0x1.a07504p-67f, 0x1.0576bcp-69f, 0x1.71e776p-49f,
     0x1.66db1p-104f, 0x1.ad32ep-4f, 0x1.ab1a38p-43f, 0.0f, 0.0f, 0x1.619964p-74f,
     0x1.7a7c54p-7f, 0x1.3a0fdp-20f, 0.0f, 0.0f, 0x1.c1c5b2p-17f, 0x1.265f04p-61f,
     0.0f, 0.0f, 0.0f, 0x1.9eccap-70f, 0.0f, 0x1.2841c2p-8f, 0x1.4a04e2p-9f,
     0x1.0e7ee8p-42f, 0.0f, 0x1.1d74d6p-111f, 0.0f, 0x1.b4d3eep-11f, 0x1.3c94cep-35f,
     0x1.d4b268p-16f, 0x1.c33f98p-40f, 0.0f, 0x1.1f36d8p-97f, 0x1.f65666p-111f,
     0x1.910514p-58f, 0x1.3d02eap-15f, 0x1.90a876p-4f, 0.0f, 0.0f, 0x1.fc3902p-8f,
     0.0f, 0x1.d19cc6p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.73ac8ep-73f, 0x1.44c16ap-21f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.47ebb2p-40f, 0.0f, 0x1.0fe73ep-85f,
     0x1.e574p-92f, 0x1.93114p-40f, 0.0f, 0x1.1181a2p-45f, 0x1.0e17b6p-84f, 0.0f,
     0x1.65cb34p-15f, 0x1.c3cfe2p-18f, 0x1.8e1974p-117f, 0x1.ee1b46p-114f,
     0x1.0d54dcp-2f, 0.0f, 0x1.bb9a96p-99f, 0.0f, 0x1.cc86c2p-9f, 0.0f, 0.0f,
     0x1.f48bf6p-92f, 0x1.2650d6p-37f, 0x1.cd4286p-33f, 0x1.7ffd72p-90f, 0.0f,
     0x1.ef1d24p-102f, 0x1.54fa94p-8f, 0.0f, 0.0f, 0x1.1223cp-27f, 0x1.bba11ep-70f,
     0.0f, 0x1.a0050ep-66f, 0.0f, 0x1.8cb0dap-30f, 0x1.2466bap-14f, 0x1.61ba8cp-8f,
     0x1.b4dfccp-124f, 0.0f, 0x1.6bdc9p-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.39cf6ap-1f,
     0.0f, 0x1.cfc532p-54f, 0.0f, 0x1.8131ap-11f, 0.0f, 0.0f, 0x1.42c5e8p-22f, 0.0f,
     0x1.143c6ap-114f, 0x1.689264p-115f, 0.0f, 0x1.1aep-81f, 0x1.f51cf6p-89f,
     0x1.ce272cp-104f, 0.0f, 0.0f, 0x1.847776p-88f, 0.0f, 0.0f, 0x1.6c2562p-111f,
     0x1.57d24p-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6b4ddcp-87f,
     0x1.c27bb4p-73f, 0.0f, 0x1.d992b4p-100f, 0x1.74bbe2p-31f, 0.0f, 0.0f,
     0x1.1d67bep-51f, 0x1.aced96p-22f, 0.0f, 0x1.b97ae6p-9f, 0x1.4f3a38p-1f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.21848p-112f, 0.0f,
     0x1.f22dccp-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.145884p-117f, 0.0f, 0.0f, 0.0f,
     0x1.910a9ep-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6c97a4p-10f, 0.0f, 0.0f,
     0x1.0a1a3cp-125f, 0.0f, 0.0f, 0x1.ae2c8ap-107f, 0x1.b61826p-121f, 0.0f,
     0x1.04bd4cp-84f, 0.0f, 0.0f, 0x1.14eb0ap-112f, 0.0f, 0x1.003106p-10f,
     0x1.9b883p-33f, 0x1.fe9fbep-73f, 0x1.a4dc02p-77f, 0x1.2b9d06p-106f, 0.0f,
     0x1.76e108p-70f, 0.0f, 0x1.99bba6p-122f, 0.0f, 0x1.146956p-21f, 0x1.566506p-120f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.465fd4p-87f,
     0x1.a9376p-57f, 0.0f, 0x1.ee5a7ep-113f, 0x1.5790dap-40f, 0x1.42d864p-32f, 0.0f,
     0.0f, 0x1.ae580ap-4f, 0x1.b489acp-56f, 0x1.7d725ep-11f, 0.0f, 0x1.a35bc2p-104f,
     0.0f, 0.0f, 0x1.c68a8ap-98f, 0.0f, 0x1.e94daap-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.6fdd3p-98f, 0.0f, 0.0f, 0x1.bf5094p-56f, 0.0f, 0x1.cc8edep-44f,
     0x1.70ac72p-53f, 0x1.8aa8c4p-106f, 0.0f, 0x1.cd3c14p-3f, 0x1.3f9498p-122f, 0.0f,
     0.0f, 0.0f, 0x1.2b6f12p-10f, 0.0f, 0.0f, 0x1.bf86acp-55f, 0x1.7a907ep-101f, 0.0f,
     0x1.0b82b6p-3f, 0.0f, 0.0f, 0.0f, 0x1.18e168p-59f, 0.0f, 0x1.058bf4p-71f,
     0x1.6bc2ccp-24f, 0.0f, 0.0f, 0x1.9d832p-55f, 0x1.f8fe26p-29f, 0.0f,
     0x1.56bc2cp-15f, 0x1.12d8f6p-102f, 0.0f, 0.0f, 0.0f, 0x1.df2bd6p-42f,
     0x1.622d12p-56f, 0.0f, 0x1.1adcdep-4f, 0.0f, 0x1.87b034p-91f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.9bdf3cp-16f, 0.0f, 0.0f, 0x1.f96e56p-97f, 0.0f, 0.0f,
     0x1.726b08p-11f, 0.0f, 0x1.078646p-37f, 0.0f, 0x1.f3c102p-97f, 0x1.4f084cp-40f,
     0x1.cccbaap-54f, 0.0f, 0.0f, 0x1.59af74p-36f, 0x1.59bc74p-56f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.d983f8p-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.33f816p-30f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.5d5c0cp-78f, 0x1.04d09cp-37f, 0.0f, 0x1.9e72d2p-82f, 0x1.bec8e6p-13f,
     0x1.30ae8ap-99f, 0x1.a3bbbp-47f, 0.0f, 0x1.92694cp-31f, 0.0f, 0x1.4319f2p-28f,
     0.0f, 0x1.844f6ap-7f, 0x1.b7607ep-85f, 0.0f, 0x1.e6055cp-78f, 0x1.228706p-39f,
     0.0f, 0x1.129dacp-15f, 0.0f, 0.0f, 0.0f, 0x1.58c78ap-25f, 0x1.9e5fp-106f,
     0x1.dd25d8p-83f, 0.0f, 0.0f, 0.0f, 0x1.4f0f7p-74f, 0.0f, 0x1.3766bap-93f, 0.0f,
     0.0f, 0.0f, 0x1.95dc3ep-80f, 0.0f, 0x1.f4232p-31f, 0x1.4c1f88p-5f, 0.0f,
     0x1.f444acp-3f, 0.0f, 0x1.7bdc42p-84f, 0.0f, 0x1.2ea048p-17f, 0x1.523c54p-7f,
     0x1.19a04ap-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.939d2p-35f, 0.0f, 0x1.22f4d4p-34f,
     0.0f, 0x1.8ef2e2p-1f, 0.0f, 0x1.b71bb4p-53f, 0x1.a5d788p-9f, 0x1.a0951p-126f,
     0x1.ed1cbap-62f, 0x1.2cb43cp-31f, 0x1.ae026ep-14f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a1401ep-51f, 0x1.35b432p-105f, 0x1.b5d48ap-31f, 0x1.729a04p-58f, 0.0f,
     0x1.5c791p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.95c1bep-125f, 0.0f, 0x1.c6d2bcp-43f,
     0x1.9fc7a4p-95f, 0.0f, 0x1.127c4ap-124f, 0x1.3cd8ap-64f, 0x1.2d2dfcp-64f,
     0x1.7dc498p-122f, 0x1.63e24cp-36f, 0x1.3325ap-117f, 0x1.458236p-46f, 0.0f,
     0x1.dabebp-54f, 0x1.ebe164p-22f, 0.0f, 0.0f, 0x1.e5987ep-59f, 0.0f, 0.0f,
     0x1.e1924ep-70f, 0.0f, 0x1.29195cp-29f, 0x1.018ff8p-118f, 0.0f, 0x1.b42458p-76f,
     0x1.3af706p-80f, 0x1.b724fep-84f, 0.0f, 0x1.e7b87ap-122f, 0x1.bb47bcp-125f, 0.0f,
     0.0f, 0x1.3ef20ap-32f, 0.0f, 0x1.19ca22p-116f, 0.0f, 0x1.0d1556p-7f,
     0x1.4eae42p-35f, 0.0f, 0x1.11d468p-92f, 0x1.44b174p-8f, 0.0f, 0x1.815e9ep-52f,
     0.0f, 0x1.af111cp-30f, 0.0f, 0.0f, 0x1.f5f06cp-59f, 0.0f, 0.0f, 0x1.93f836p-79f,
     0x1.2bd18ap-51f, 0x1.f4ee4cp-59f, 0x1.a602f6p-62f, 0x1.3f35d6p-19f, 0.0f,
     0x1.85d83ep-65f, 0x1.40a23ep-108f, 0x1.6e344p-44f, 0x1.cda404p-120f,
     0x1.44f0ap-21f, 0x1.9c226ap-81f, 0.0f, 0.0f, 0.0f, 0x1.3b95d6p-101f, 0.0f, 0.0f,
     0x1.7d6e52p-8f, 0.0f, 0.0f, 0x1.b35e16p-116f, 0.0f, 0.0f, 0x1.0dc47cp-95f,
     0x1.ddbefap-6f, 0x1.414794p-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8db0b6p-32f,
     0.0f, 0.0f, 0.0f, 0x1.037cd6p-73f, 0x1.132cd6p-61f, 0.0f, 0.0f, 0x1.55556ep-124f,
     0x1.f7429p-69f, 0.0f, 0.0f, 0.0f, 0x1.dfc018p-47f, 0x1.9e92ccp-73f, 0.0f, 0.0f,
     0x1.6cc346p-77f, 0.0f, 0.0f, 0.0f, 0x1.983bdp-32f, 0.0f, 0.0f, 0x1.e808e4p-78f,
     0x1.34ec08p-84f, 0x1.43eb2p-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b209bcp-96f, 0.0f,
     0.0f, 0.0f, 0x1.d5b79p-73f, 0.0f, 0x1.1408c6p-102f, 0.0f, 0.0f, 0x1.a51506p-67f,
     0.0f, 0x1.68e6b2p-26f, 0x1.17970ep-101f, 0.0f, 0x1.1024e8p-110f, 0.0f, 0.0f,
     0x1.58f7b4p-23f, 0.0f, 0.0f, 0.0f, 0x1.e95adep-80f, 0x1.d26998p-29f,
     0x1.20372p-112f, 0x1.247a4ap-19f, 0x1.ae0804p-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a459d2p-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.76f212p-117f,
     0x1.787768p-4f, 0x1.2090fp-34f, 0.0f, 0.0f, 0x1.5ed312p-77f, 0x1.1c9e3ap-105f,
     0.0f, 0x1.f325bep-64f, 0x1.30170ap-126f, 0x1.3e3d84p-88f, 0.0f, 0.0f,
     0x1.8b028ap-120f, 0x1.9bacp-4f, 0x1.d68ca8p-67f, 0.0f, 0.0f, 0x1.71db6p-114f,
     0.0f, 0.0f, 0x1.09fd5ap-87f, 0.0f, 0x1.4cf934p-121f, 0x1.6dd6b6p-104f,
     0x1.311a84p-98f, 0.0f, 0x1.acbe04p-72f, 0x1.f34758p-65f, 0.0f, 0x1.b6a556p-4f,
     0x1.0c12d2p-71f, 0x1.1bdca8p-69f, 0x1.6c3d52p-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3145e6p-89f, 0x1.8e09e4p-103f, 0x1.45b792p-91f, 0.0f, 0x1.5d038cp-60f, 0.0f,
     0x1.88ddd6p-108f, 0.0f, 0x1.499862p-39f, 0.0f, 0x1.c1cd24p-86f, 0x1.a273fep-94f,
     0.0f, 0x1.9eb86ap-126f, 0.0f, 0.0f, 0x1.cb6546p-121f, 0x1.7aca32p-9f,
     0x1.02ab0ap-102f, 0x1.ac25fcp-52f, 0x1.071b98p-65f, 0x1.d79dd4p-124f,
     0x1.64c3d8p-59f, 0x1.20d0fcp-63f, 0x1.d56f9p-99f, 0x1.e2bd88p-100f,
     0x1.33e5c4p-65f, 0x1.0889b6p-71f, 0.0f, 0x1.1c103cp-52f, 0x1.1a999ap-90f, 0.0f,
     0.0f, 0x1.175406p-116f, 0.0f, 0x1.202d74p-68f, 0.0f, 0x1.56bdap-4f,
     0x1.d19f0ep-73f, 0.0f, 0.0f, 0x1.6a08c2p-118f, 0x1.62d2fap-59f, 0.0f,
     0x1.7be5dep-110f, 0.0f, 0x1.c9d106p-46f, 0x1.22aef2p-24f, 0x1.77283ep-62f, 0.0f,
     0x1.e15d3ep-51f, 0.0f, 0.0f, 0.0f, 0x1.d768ap-106f, 0x1.c79f12p-52f, 0.0f,
     0x1.99dfdcp-16f, 0.0f, 0x1.5bd01cp-49f, 0x1.61d4p-112f, 0.0f, 0x1.387b08p-89f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.5d4566p-74f, 0.0f, 0x1.6c7932p-105f, 0x1.aea8cap-79f,
     0x1.9f744cp-17f, 0x1.5668eep-123f, 0x1.aa4564p-70f, 0x1.4d0038p-105f, 0.0f,
     0x1.51f89ep-93f, 0.0f, 0.0f, 0.0f, 0x1.f1099cp-81f, 0x1.1020bcp-113f,
     0x1.3c7e5cp-121f, 0.0f, 0.0f, 0x1.05d9fap-85f, 0x1.f81bfap-124f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.3cd436p-37f, 0.0f, 0x1.48ac28p-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.aae92cp-25f, 0x1.580beep-48f, 0x1.256b3cp-46f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.070d04p-86f, 0.0f, 0.0f, 0x1.196dccp-81f, 0x1.9d34bep-70f,
     0x1.95236cp-104f, 0.0f, 0x1.73db8p-58f, 0.0f, 0x1.92e888p-111f, 0x1.adcbc6p-12f,
     0x1.d1d096p-21f, 0x1.a0f512p-23f, 0.0f, 0.0f, 0.0f, 0x1.adaddcp-63f,
     0x1.302a96p-49f, 0.0f, 0.0f, 0.0f, 0x1.dff682p-47f, 0x1.13bcfcp-38f,
     0x1.56f5cp-105f, 0.0f, 0.0f, 0.0f, 0x1.727f48p-21f, 0.0f, 0x1.04808ap-41f,
     0x1.40520cp-116f, 0.0f, 0x1.852de2p-107f, 0x1.b6e796p-43f, 0.0f, 0x1.0bcfd2p-8f,
     0x1.791a84p-6f, 0x1.a34beep-60f, 0x1.cf24e6p-75f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.87d7c8p-82f, 0.0f, 0x1.653536p-45f, 0x1.502b54p-72f, 0x1.f57a78p-66f, 0.0f,
     0x1.def2b4p-14f, 0.0f, 0x1.d89e1cp-60f, 0.0f, 0.0f, 0x1.331bc4p-108f,
     0x1.287dbep-63f, 0x1.12120cp-121f, 0x1.a680dap-3f, 0.0f, 0x1.98aa3ap-14f,
     0x1.03f0c8p-91f, 0.0f, 0.0f, 0x1.b24764p-94f, 0.0f, 0x1.711872p-22f,
     0x1.d0105ap-80f, 0x1.a6486p-117f, 0x1.8db442p-25f, 0.0f, 0.0f, 0.0f,
     0x1.eccddcp-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ec052ap-93f,
     0x1.ce1164p-81f, 0.0f, 0x1.f36264p-50f, 0x1.29b368p-14f, 0x1.298fd2p-6f, 0.0f,
     0.0f, 0.0f, 0x1.e60962p-5f, 0x1.af6864p-2f, 0x1.3afa8ap-80f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.6f74d2p-38f, 0.0f, 0x1.22d8dp-97f, 0x1.b78386p-55f, 0.0f, 0.0f,
     0x1.168c14p-46f, 0x1.3cb49p-39f, 0.0f, 0x1.bd3cccp-19f, 0x1.8440d4p-2f,
     0x1.6f366ap-115f, 0.0f, 0x1.f97208p-75f, 0x1.14c9p-14f, 0.0f, 0.0f, 0.0f,
     0x1.372af6p-54f, 0.0f, 0x1.1ed622p-75f, 0.0f, 0.0f, 0.0f, 0x1.605548p-113f, 0.0f,
     0x1.eddfep-103f, 0.0f, 0x1.2e38a8p-36f, 0x1p0f, 0.0f, 0x1.cf15ecp-115f,
     0x1.b34028p-43f, 0x1.4ba158p-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1e835p-92f
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
            tmp1 = Sleef_finz_tanf4_u35avx2128(tmp0);
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
    printf("Sleef_finz_tanf4_u35avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_tanf4_u35avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
