/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_asinf4_u35kvx.c --function Sleef_asinf4_u35kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 4 --function-input-vector-size 4 --bench \
 *     --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float4_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float4_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0x1.10f9c6p-79f, 0.0f, 0.0f, 0x1.947768p-27f, 0x1.dfd3fcp-16f, 0x1.056204p-105f,
     0x1.80b2c4p-44f, 0x1.cd7156p-53f, 0.0f, 0x1.6f2946p-88f, 0x1.6f7256p-87f, 0.0f,
     0.0f, 0x1.77e67ep-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.349928p-25f,
     0x1.5c727ep-108f, 0x1.1e8d3ap-47f, 0x1.515fa4p-97f, 0.0f, 0x1.63fdc4p-22f,
     0x1.64ddfep-111f, 0x1.582efp-46f, 0.0f, 0.0f, 0x1.44aac4p-74f, 0.0f,
     0x1.7c8774p-100f, 0.0f, 0x1.5d9318p-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.96065ap-81f, 0x1.75e846p-68f, 0.0f, 0.0f, 0x1.ddc47cp-111f, 0x1.7bfee2p-21f,
     0.0f, 0x1.a19338p-90f, 0x1.56c32p-78f, 0x1.06bc3cp-51f, 0.0f, 0x1.0154dap-62f,
     0.0f, 0.0f, 0x1.dcc948p-6f, 0x1.0da948p-107f, 0x1.3e52dp-104f, 0x1.4d935ep-40f,
     0.0f, 0.0f, 0x1.4e4faap-123f, 0.0f, 0x1.e8532cp-121f, 0x1.01d6d4p-83f, 0.0f,
     0.0f, 0x1.40994ap-31f, 0.0f, 0x1.aec768p-46f, 0.0f, 0x1.e68018p-9f, 0.0f, 0.0f,
     0x1.749af8p-85f, 0.0f, 0x1.99ab4ep-63f, 0.0f, 0.0f, 0.0f, 0x1.ebc3c6p-66f, 0.0f,
     0.0f, 0x1.1ac01ep-114f, 0x1.ae17c4p-43f, 0.0f, 0.0f, 0x1.0e30d4p-5f,
     0x1.f0b1bep-2f, 0x1.64d818p-33f, 0x1.aa8cd8p-1f, 0x1.aa9cp-111f, 0x1.185396p-29f,
     0x1.56459ep-21f, 0x1.24117p-123f, 0.0f, 0x1.352aaep-124f, 0.0f, 0x1.0a8ea8p-4f,
     0x1.3504dcp-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.847b7cp-26f, 0.0f, 0.0f, 0.0f,
     0x1.1e07bap-115f, 0x1.d0fa4p-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bc79f8p-93f,
     0x1.460e5p-77f, 0.0f, 0x1.5d11eap-27f, 0.0f, 0.0f, 0.0f, 0x1.d84ae4p-41f,
     0x1.d559b2p-12f, 0.0f, 0x1.57453ep-56f, 0x1.590f4ep-40f, 0.0f, 0.0f,
     0x1.812e76p-3f, 0.0f, 0.0f, 0x1.ad35e6p-18f, 0.0f, 0x1.3801dcp-39f,
     0x1.67a746p-97f, 0x1.9d0916p-15f, 0.0f, 0x1.25f3f8p-53f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1cf898p-117f, 0.0f, 0x1.03bf8p-51f, 0x1.7a8704p-45f, 0x1.8991e6p-2f,
     0x1.85e3eap-40f, 0.0f, 0x1.558522p-12f, 0.0f, 0.0f, 0x1.5888fcp-8f,
     0x1.d2f6f8p-14f, 0.0f, 0.0f, 0.0f, 0x1.bbfea6p-87f, 0x1.db1a48p-69f,
     0x1.a64db6p-47f, 0x1.051996p-70f, 0.0f, 0.0f, 0x1.083058p-124f, 0.0f,
     0x1.33f25p-109f, 0.0f, 0x1.7ff21cp-32f, 0.0f, 0x1.90abb2p-20f, 0.0f,
     0x1.1c45fcp-70f, 0.0f, 0x1.54f32cp-122f, 0x1.15f084p-51f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.7e8db4p-6f, 0x1.bf46bp-118f, 0.0f, 0x1.08849ep-116f, 0x1.4c06b6p-33f,
     0x1.e881dp-92f, 0.0f, 0.0f, 0.0f, 0x1.a52df6p-95f, 0.0f, 0x1.226fp-86f,
     0x1.13a99ep-11f, 0.0f, 0x1.03262ap-10f, 0x1.83f296p-70f, 0x1.fb52aap-57f,
     0x1.ad9906p-5f, 0.0f, 0.0f, 0x1.7de816p-125f, 0x1.f3ebd6p-7f, 0x1.7c801p-124f,
     0x1.a96e6ep-57f, 0x1.51f49cp-15f, 0x1.eed12ep-61f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.de9adp-76f, 0.0f, 0x1.0f894ep-72f, 0.0f, 0.0f, 0x1.cc8288p-50f, 0.0f, 0.0f,
     0.0f, 0x1.c6ecb6p-18f, 0x1.ab9ae2p-44f, 0.0f, 0.0f, 0.0f, 0x1.b1560cp-17f, 0.0f,
     0x1.cf8d6cp-65f, 0.0f, 0x1.a265aap-111f, 0.0f, 0x1.4609aap-95f, 0x1.517d08p-86f,
     0x1.797b04p-93f, 0.0f, 0.0f, 0x1.88f5aep-36f, 0.0f, 0x1.1a3ee2p-122f,
     0x1.59758p-37f, 0.0f, 0x1.6f356p-75f, 0.0f, 0x1.f3347ap-60f, 0.0f,
     0x1.530ba4p-12f, 0.0f, 0x1.4cd6f4p-17f, 0x1.a2a51ep-65f, 0x1.e1934cp-50f,
     0x1.2a0538p-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5d3d22p-33f, 0x1.b6d26ap-75f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1cb00cp-38f, 0.0f, 0.0f, 0x1.504ca4p-69f, 0.0f,
     0x1.4b0a3ep-97f, 0x1.287ccp-108f, 0x1.233674p-73f, 0x1.3015a4p-77f,
     0x1.2d05c4p-17f, 0.0f, 0x1.ad1e06p-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1e0522p-83f,
     0.0f, 0.0f, 0x1.85ba5ap-31f, 0.0f, 0x1.33d8dcp-39f, 0.0f, 0.0f, 0.0f,
     0x1.b940e6p-37f, 0.0f, 0x1.e059ep-47f, 0x1.d55a2cp-28f, 0x1.872b22p-88f,
     0x1.b198d4p-102f, 0.0f, 0x1.a8ec7ap-26f, 0x1.904d3ep-121f, 0x1p0f,
     0x1.83a0dap-106f, 0x1.a596d2p-102f, 0x1.42feeap-101f, 0.0f, 0x1.1a9888p-61f,
     0x1.1845f2p-38f, 0.0f, 0x1.3a273ep-63f, 0.0f, 0x1.1ce306p-107f, 0x1.234a1p-92f,
     0x1.d37252p-84f, 0x1.1619f6p-17f, 0x1.e48642p-17f, 0x1.c6b59p-75f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3daf56p-14f, 0x1.2241a8p-87f, 0x1.9e3a86p-12f, 0.0f,
     0x1.7ed5aep-108f, 0.0f, 0x1.8aa174p-115f, 0.0f, 0x1.31371cp-56f, 0.0f,
     0x1.c06a9p-69f, 0.0f, 0.0f, 0.0f, 0x1.890736p-87f, 0.0f, 0x1.686492p-114f, 0.0f,
     0x1.2dcb0cp-26f, 0.0f, 0x1.7a2e5ap-105f, 0.0f, 0.0f, 0x1.ef20c8p-43f, 0.0f,
     0x1.9ca554p-121f, 0.0f, 0.0f, 0.0f, 0x1.8dcf2ap-112f, 0x1.680bd8p-65f, 0.0f,
     0.0f, 0x1.3eced4p-117f, 0x1.bbd9cp-75f, 0x1.474108p-86f, 0x1.6123acp-85f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b4d198p-103f, 0.0f, 0x1.e1e468p-53f, 0x1.7716fp-22f,
     0x1.caaea6p-87f, 0x1.7bcf1ep-116f, 0.0f, 0.0f, 0x1.3bf2cep-82f, 0.0f,
     0x1.96dc16p-38f, 0x1.c5ea8p-96f, 0x1.38c0f6p-72f, 0.0f, 0x1.5656bep-125f,
     0x1.decb34p-60f, 0.0f, 0.0f, 0x1.235654p-34f, 0.0f, 0x1.8fc98ap-45f, 0.0f,
     0x1.6f53a8p-48f, 0.0f, 0x1.b974c2p-125f, 0x1.50cb64p-24f, 0.0f, 0.0f,
     0x1.2c41d6p-103f, 0x1.e2ff14p-79f, 0.0f, 0x1.9f945ep-72f, 0x1.9493cep-49f, 0.0f,
     0.0f, 0x1.68fbc4p-53f, 0.0f, 0x1.ba1278p-50f, 0x1.ba2ecp-21f, 0.0f,
     0x1.27d86p-126f, 0x1.3b9f8p-109f, 0x1.783be4p-69f, 0x1.294744p-108f, 0.0f,
     0x1.0d25b4p-107f, 0.0f, 0.0f, 0.0f, 0x1.90f37ep-35f, 0.0f, 0.0f, 0x1.d8ce42p-49f,
     0.0f, 0.0f, 0.0f, 0x1.6323d2p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6b29e4p-47f,
     0x1.948168p-44f, 0.0f, 0x1.939986p-56f, 0.0f, 0x1.8a01c8p-49f, 0x1.6c7fc6p-95f,
     0.0f, 0.0f, 0.0f, 0x1.b78p-15f, 0x1.9f7dd6p-46f, 0x1.014422p-76f,
     0x1.00b1bcp-90f, 0.0f, 0x1.2242b2p-107f, 0.0f, 0.0f, 0x1.bab356p-40f,
     0x1.6e86f6p-68f, 0.0f, 0x1.adfbaap-38f, 0x1.4b4462p-95f, 0x1.0feab8p-41f, 0.0f,
     0x1.631ea4p-36f, 0x1.4b992p-102f, 0x1.1157acp-58f, 0x1.1db74cp-124f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7e4d3p-114f, 0.0f, 0x1.5b7636p-46f,
     0x1.0bfdf2p-11f, 0x1.36106ap-20f, 0.0f, 0x1.cdd4c4p-60f, 0x1.3439b6p-122f,
     0x1.23c0e4p-44f, 0x1.ffc346p-67f, 0.0f, 0x1.be036p-65f, 0x1.50b46cp-49f,
     0x1.423f34p-125f, 0x1.c305aap-3f, 0x1.75159cp-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.04b442p-56f, 0.0f, 0x1.1e7326p-37f, 0.0f, 0.0f, 0.0f, 0x1.33c78cp-109f,
     0.0f, 0x1.cf583cp-81f, 0x1.7e1786p-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b1877ap-21f,
     0.0f, 0x1.cf3758p-106f, 0.0f, 0x1.a1c2fcp-102f, 0.0f, 0.0f, 0x1.24e11cp-43f,
     0.0f, 0x1.955c12p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.524e7cp-24f, 0.0f, 0.0f, 0x1.035d8p-79f, 0x1.8d9ff6p-85f, 0x1.6ba3p-52f,
     0x1.5beccap-61f, 0x1.0474p-21f, 0x1.c16a48p-100f, 0x1.b64494p-48f,
     0x1.de41a2p-3f, 0x1.6cb4b2p-58f, 0.0f, 0.0f, 0x1.5c2a22p-29f, 0.0f,
     0x1.8bfdd6p-95f, 0.0f, 0x1.56ecb2p-53f, 0.0f, 0x1.160852p-122f, 0.0f,
     0x1.e217e4p-101f, 0x1.4e6f12p-83f, 0x1.516ddap-117f, 0.0f, 0.0f, 0x1.6e3d56p-11f,
     0.0f, 0x1.49d76cp-92f, 0x1.ea46d4p-94f, 0x1.96a42ap-78f, 0x1.b7a6ecp-39f,
     0x1.3429f6p-19f, 0.0f, 0x1.359b9ep-125f, 0x1.4cedfcp-3f, 0x1.b17e78p-13f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.df892p-74f, 0.0f, 0x1.0dcee2p-23f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e698dap-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e3b8cap-84f,
     0x1.926fap-49f, 0x1.52178ap-68f, 0x1.a6272ep-126f, 0.0f, 0.0f, 0x1.eff536p-65f,
     0.0f, 0.0f, 0x1.582238p-99f, 0.0f, 0.0f, 0x1.24efacp-33f, 0x1.b5c542p-3f, 0.0f,
     0x1.46274ep-83f, 0x1.1e007p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d01a9cp-99f, 0.0f, 0x1.205804p-99f, 0.0f, 0.0f, 0.0f, 0x1.14e1ccp-86f, 0.0f,
     0.0f, 0.0f, 0x1.844ea8p-29f, 0x1.c2e814p-77f, 0x1.6d66cep-20f, 0.0f,
     0x1.01f194p-89f, 0.0f, 0x1.58d0ap-62f, 0x1.af8feep-114f, 0x1.7d4a2p-105f, 0.0f,
     0x1.f75692p-121f, 0x1.cecc38p-12f, 0x1.1bd086p-60f, 0x1.0ee21ep-53f,
     0x1.099d04p-118f, 0x1.d9b31ap-51f, 0x1.f7fa8ap-47f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.31c3a6p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0a6e96p-21f, 0x1.7bc68p-117f,
     0x1.82c922p-19f, 0x1.573c38p-43f, 0x1.8aaae8p-77f, 0x1.19af38p-123f,
     0x1.35c2bap-45f, 0x1.6aaca6p-23f, 0.0f, 0x1.bbbf78p-78f, 0.0f, 0x1.3f0648p-99f,
     0x1.f297f4p-46f, 0.0f, 0.0f, 0.0f, 0x1.184132p-4f, 0x1.0a513p-91f, 0.0f, 0.0f,
     0x1.2946fep-88f, 0x1.be285ep-23f, 0.0f, 0x1.b2e418p-91f, 0x1.77c886p-88f, 0.0f,
     0x1.a46b9cp-79f, 0.0f, 0x1.146b92p-4f, 0x1.678cc4p-33f, 0.0f, 0.0f, 0.0f,
     0x1.58f17ap-70f, 0x1.6669a8p-32f, 0x1.1b2bc4p-21f, 0.0f, 0.0f, 0x1.fe7722p-59f,
     0x1.fd33dcp-97f, 0.0f, 0x1.6d199p-55f, 0x1.cd24f2p-39f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3519cep-125f, 0x1.2c6946p-30f, 0x1.c3e6acp-103f,
     0.0f, 0x1.80ad8ap-15f, 0.0f, 0.0f, 0.0f, 0x1.c0354p-40f, 0x1.f11a2p-75f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.5284f6p-35f, 0.0f, 0.0f, 0.0f, 0x1.302e5p-43f,
     0x1.8e22aep-113f, 0.0f, 0x1.c19f14p-61f, 0.0f, 0x1.4d5eb6p-125f, 0x1.0ebfbp-74f,
     0.0f, 0.0f, 0.0f, 0x1.57f922p-18f, 0x1.0844bep-72f, 0x1.79b2e4p-69f,
     0x1.e4033ep-27f, 0x1.0fdff8p-5f, 0.0f, 0x1.3540b6p-125f, 0x1.36615p-102f, 0.0f,
     0x1.26dc54p-24f, 0.0f, 0x1.89f5b2p-58f, 0x1.1759cep-107f, 0.0f, 0x1.442718p-52f,
     0.0f, 0x1.834b58p-103f, 0x1.24d38cp-55f, 0.0f, 0x1.cb13b6p-44f, 0.0f,
     0x1.a3d80ep-6f, 0x1.5e02fcp-74f, 0.0f, 0x1.216b12p-39f, 0x1.f82e6cp-43f,
     0x1.6c9dfcp-49f, 0x1.567324p-74f, 0.0f, 0x1.d185dp-86f, 0x1.8aca98p-100f, 0.0f,
     0.0f, 0x1.647aeep-2f, 0.0f, 0x1.186fc2p-35f, 0x1.6f22b8p-38f, 0.0f, 0.0f,
     0x1.1f6b7p-114f, 0x1.6a9194p-36f, 0x1.815ef8p-13f, 0x1.91368cp-77f,
     0x1.e89074p-120f, 0.0f, 0.0f, 0x1.2f981cp-103f, 0x1.ff6162p-54f, 0.0f,
     0x1.76484ap-76f, 0.0f, 0x1.ba979p-105f, 0.0f, 0x1.2a5f9cp-105f, 0.0f,
     0x1.a89d9p-13f, 0x1.e30518p-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.58980ap-77f,
     0x1.65827ep-8f, 0.0f, 0.0f, 0x1.30ad24p-47f, 0.0f, 0x1.fc4e84p-103f, 0.0f, 0.0f,
     0.0f, 0x1.635b44p-81f, 0x1.dc3a74p-43f, 0x1.057f5ap-119f, 0.0f, 0x1.156d36p-51f,
     0.0f, 0.0f, 0x1.dffd66p-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e9d13ap-90f,
     0x1.9866ccp-11f, 0x1.2fd9e6p-24f, 0.0f, 0x1.15b89ep-49f, 0.0f, 0x1.48021p-59f,
     0x1.16cd6p-56f, 0.0f, 0.0f, 0x1.3610cap-101f, 0x1.8744bp-40f, 0x1.327aa8p-65f,
     0.0f, 0.0f, 0x1.f97c36p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.53ce92p-35f, 0.0f, 0.0f,
     0x1.ada94ep-123f, 0.0f, 0.0f, 0.0f, 0x1.de257cp-53f, 0.0f, 0x1.50e17ep-109f,
     0.0f, 0x1.a0ae1cp-19f, 0.0f, 0x1.e3f47ep-120f, 0x1.e7ef3ap-101f, 0x1.c36b0ep-65f,
     0x1.52e758p-126f, 0x1.405a18p-106f, 0.0f, 0.0f, 0x1.d0abb8p-81f, 0x1.4fc4c2p-77f,
     0.0f, 0x1.5e0e9ap-73f, 0x1.9f713ep-112f, 0.0f, 0x1.c6d4b6p-47f, 0x1.981142p-126f,
     0.0f, 0x1.32160ap-37f, 0.0f, 0x1.c4e5fcp-49f, 0.0f, 0.0f, 0.0f, 0x1.da1368p-97f,
     0.0f, 0x1.123328p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e50e14p-12f, 0.0f,
     0.0f, 0.0f, 0x1.98d44ep-17f, 0x1.699ac6p-40f, 0x1.407506p-62f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.98d0c4p-27f, 0.0f, 0x1.b466fep-39f, 0x1.72780ep-68f,
     0x1.4d59c6p-117f, 0.0f, 0.0f, 0x1.0650bp-66f, 0.0f, 0.0f, 0x1.430066p-53f,
     0x1.e32e86p-30f, 0x1.53e974p-53f, 0.0f, 0.0f, 0x1.172cccp-52f, 0.0f,
     0x1.a53794p-92f, 0x1.24db7ep-36f, 0.0f, 0x1.356592p-114f, 0.0f, 0.0f,
     0x1.a260e6p-25f, 0x1.65827p-96f, 0.0f, 0x1.d1a774p-22f, 0.0f, 0.0f, 0.0f,
     0x1.b5618p-24f, 0x1.06d17p-106f, 0x1.7604cp-121f, 0.0f, 0x1.4a3454p-111f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6d56f2p-87f, 0x1.bf38dcp-41f, 0x1.9bb4cap-96f,
     0x1.e4d842p-9f, 0.0f, 0x1.327ffep-77f, 0x1.2e707cp-120f, 0x1.100dep-29f, 0.0f,
     0x1.68f6cp-2f, 0x1.633cdap-45f, 0.0f, 0.0f, 0x1.652a34p-89f, 0.0f,
     0x1.3b183ep-75f, 0x1.c92f3ep-121f, 0x1.bb7938p-105f, 0x1.9036e8p-64f, 0.0f, 0.0f,
     0x1.5eadep-89f, 0.0f, 0x1.772f4p-60f, 0.0f, 0.0f, 0x1.44cb64p-69f,
     0x1.979702p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5d457ep-123f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b6ef9ep-64f, 0x1.01329ap-97f, 0x1.8d167ap-118f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.6bd98ap-105f, 0x1.434eaap-100f, 0x1.faa39ep-56f,
     0.0f, 0.0f, 0x1.6e8a62p-6f, 0.0f, 0.0f, 0.0f, 0x1.dbaafp-124f, 0x1.75bf04p-90f,
     0x1.b81d8ap-23f, 0.0f, 0x1.9f031cp-28f, 0.0f, 0.0f, 0x1.d492c4p-48f, 0.0f,
     0x1.812d18p-15f, 0.0f, 0x1.3c895p-118f, 0.0f, 0x1.95c53p-103f, 0.0f, 0.0f,
     0x1.325952p-23f, 0x1.63736p-13f, 0.0f, 0x1.dc433ep-93f, 0.0f, 0.0f,
     0x1.68161p-58f, 0.0f, 0x1.b9e448p-70f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.f15134p-22f,
     0x1.d8474p-96f, 0x1p0f, 0.0f, 0x1.277e54p-57f, 0x1.d0e58ap-94f, 0.0f,
     0x1.7c5042p-115f, 0x1.bd859p-110f, 0.0f, 0x1.38a272p-78f, 0x1.a283c4p-54f,
     0x1.5ff12cp-55f, 0.0f
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
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = external_bench_wrapper_cst;
    tmp = __cos_counter_num(0);
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
            tmp1 = Sleef_asinf4_u35kvx(tmp0);
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
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_asinf4_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_asinf4_u35kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
