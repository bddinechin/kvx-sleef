/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_cbrtf4_u10kvx.c --function Sleef_cbrtf4_u10kvx \
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
     0x1.f3e118p-125f, 0x1.4037e8p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.71fe94p-6f,
     0x1.4bc85ap-88f, 0x1.11dcd4p-2f, 0.0f, 0x1.480de6p-75f, 0.0f, 0x1.b5fd8ap-30f,
     0.0f, 0.0f, 0x1.fe1eb8p-95f, 0x1.4f7aeep-23f, 0x1.1c4186p-116f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b741a6p-1f, 0x1p0f, 0.0f, 0x1.d146f4p-70f, 0.0f,
     0x1.6c4c3cp-112f, 0.0f, 0.0f, 0x1.581d1cp-28f, 0x1.fd88dap-76f, 0x1.22d45p-110f,
     0x1.df365p-13f, 0x1.3208c6p-20f, 0x1.e90e5p-105f, 0.0f, 0x1.0e35d2p-34f, 0.0f,
     0.0f, 0x1.59fedep-78f, 0x1.e10796p-108f, 0.0f, 0.0f, 0x1.370222p-42f,
     0x1.547a32p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.79741cp-68f, 0.0f, 0.0f,
     0x1.7f6848p-42f, 0.0f, 0.0f, 0x1.187d22p-21f, 0x1.409ee8p-77f, 0.0f, 0.0f, 0.0f,
     0x1.931e9p-49f, 0x1.707f5p-37f, 0.0f, 0x1.9d09cep-46f, 0.0f, 0x1.e3f988p-57f,
     0x1.a63e72p-1f, 0x1.4d2d76p-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bcbc9cp-66f, 0.0f,
     0x1.b2b5fp-69f, 0.0f, 0x1.2945e8p-29f, 0.0f, 0.0f, 0x1.bf5ffap-113f, 0.0f, 0.0f,
     0x1.35e3dep-15f, 0.0f, 0.0f, 0x1.4233c4p-49f, 0x1.ba2f1cp-62f, 0.0f,
     0x1.fc9278p-32f, 0.0f, 0.0f, 0x1.6e0cbap-104f, 0x1.74926cp-79f, 0x1.060284p-4f,
     0x1.97e3aap-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.360842p-107f, 0.0f, 0.0f, 0.0f,
     0x1.55781ap-62f, 0.0f, 0x1.a3befp-88f, 0x1p0f, 0x1.c2857ap-31f, 0.0f, 0.0f,
     0x1.d00e3ap-25f, 0x1.851c86p-95f, 0x1.01a4d4p-78f, 0.0f, 0x1.3ac774p-104f,
     0x1.22f86ap-13f, 0.0f, 0x1.4007e4p-106f, 0x1.d657acp-99f, 0x1.fb459cp-125f,
     0x1.d38afep-88f, 0.0f, 0.0f, 0x1.5c8b08p-7f, 0x1.cf6caep-3f, 0.0f,
     0x1.a75d3cp-30f, 0.0f, 0.0f, 0x1.8e3522p-67f, 0.0f, 0x1.a36a24p-5f, 0.0f,
     0x1.b7ddep-11f, 0x1.19d3d8p-44f, 0x1.bed978p-41f, 0x1.e140cp-96f, 0.0f,
     0x1.badf3p-29f, 0x1.528b1cp-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6cccbep-107f, 0.0f, 0x1.b99a34p-17f, 0.0f, 0x1.aeb9eep-103f, 0x1.2ad3ap-31f,
     0x1.a4e008p-107f, 0.0f, 0.0f, 0x1.783d12p-8f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.74964cp-41f, 0.0f, 0x1.a87582p-101f, 0.0f, 0.0f, 0x1.d0c574p-73f,
     0x1.d5af84p-24f, 0.0f, 0.0f, 0.0f, 0x1.185cfap-11f, 0x1.9170c8p-123f,
     0x1.1f003ep-91f, 0x1.e7a58p-31f, 0.0f, 0x1.17a7bap-78f, 0x1.61ebe8p-7f, 0.0f,
     0x1.4ab7b4p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d55738p-59f, 0.0f,
     0.0f, 0x1.f803e2p-4f, 0.0f, 0.0f, 0.0f, 0x1.81f92p-63f, 0x1.434d56p-22f,
     0x1.1a03d2p-76f, 0x1.58bf5cp-27f, 0x1.e77586p-21f, 0x1.723dcep-82f, 0.0f, 0.0f,
     0.0f, 0x1.5f189ap-120f, 0.0f, 0.0f, 0.0f, 0x1.75e21ap-68f, 0x1.587a6cp-9f,
     0x1.c7db2cp-46f, 0x1.3b9c3ap-94f, 0.0f, 0.0f, 0x1.bb8cf6p-51f, 0.0f, 0.0f, 0.0f,
     0x1.e9b4p-51f, 0.0f, 0x1.1a1152p-53f, 0.0f, 0x1.f8b4d2p-41f, 0x1.90db48p-86f,
     0x1.b01d62p-68f, 0.0f, 0x1.2350b6p-101f, 0x1.ae1a8ep-79f, 0.0f, 0x1.fc9ccp-86f,
     0.0f, 0x1.246d3ap-24f, 0x1.bcb418p-69f, 0x1.f6d4d6p-91f, 0.0f, 0.0f,
     0x1.1eb3e2p-33f, 0.0f, 0x1.638b68p-111f, 0.0f, 0.0f, 0.0f, 0x1.3ae596p-71f, 0.0f,
     0.0f, 0x1.1cd77ep-112f, 0.0f, 0x1.ce38aep-75f, 0.0f, 0.0f, 0x1.4ee7d2p-27f, 0.0f,
     0.0f, 0x1.78115ep-53f, 0x1.79d5cp-108f, 0x1.bb34c4p-72f, 0.0f, 0x1.8ff89ep-118f,
     0.0f, 0x1.d3097cp-47f, 0x1.012e96p-48f, 0x1.36c4d6p-58f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f4c596p-27f, 0x1.f3c502p-115f, 0.0f, 0x1.5e9484p-108f, 0x1.374ed6p-94f,
     0x1.8cb64ap-37f, 0.0f, 0.0f, 0.0f, 0x1.c0a24p-57f, 0.0f, 0x1.1b725ap-44f, 0.0f,
     0x1.5bdce8p-89f, 0x1.1742b6p-75f, 0x1.d384dcp-119f, 0x1.81a8cep-45f, 0.0f, 0.0f,
     0.0f, 0x1.7e5084p-6f, 0x1.336c7ap-11f, 0x1.fd5aaap-107f, 0.0f, 0x1.9b6502p-124f,
     0.0f, 0.0f, 0x1.978316p-45f, 0x1.446f8cp-59f, 0.0f, 0.0f, 0.0f, 0x1.818fbap-78f,
     0x1.975f3p-23f, 0x1.186ep-92f, 0x1.b6bee4p-124f, 0x1.a895ep-62f, 0.0f,
     0x1.fe2af6p-94f, 0.0f, 0.0f, 0.0f, 0x1.daebaep-18f, 0.0f, 0.0f, 0x1.3ef94cp-25f,
     0x1.860bdap-121f, 0.0f, 0.0f, 0x1.d078e2p-6f, 0.0f, 0.0f, 0x1.26e262p-123f,
     0x1.c5b4p-61f, 0x1.aff9ap-65f, 0x1.975848p-14f, 0.0f, 0x1.fe234ap-32f,
     0x1.23d19cp-100f, 0.0f, 0.0f, 0x1.6b0022p-81f, 0.0f, 0.0f, 0.0f, 0x1.93f8f4p-79f,
     0.0f, 0.0f, 0x1.12f9fcp-33f, 0.0f, 0x1.f27f32p-54f, 0.0f, 0.0f, 0x1.0488bp-123f,
     0.0f, 0x1.616fa8p-119f, 0.0f, 0x1.e633f6p-26f, 0x1.5ee992p-100f, 0x1.b2f308p-5f,
     0x1.44b988p-51f, 0x1.b0562cp-114f, 0x1.e530fap-22f, 0x1.6ffc52p-57f, 0.0f, 0.0f,
     0x1.fda4e6p-78f, 0x1.d1129ep-33f, 0x1.41c3dep-31f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.77330cp-102f, 0x1.57f27ep-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a441a2p-79f, 0.0f,
     0.0f, 0.0f, 0x1.715e12p-126f, 0x1.6619dcp-51f, 0x1.44dda2p-110f, 0.0f, 0.0f,
     0x1.9891c6p-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0dc274p-35f, 0.0f,
     0x1.b100a8p-14f, 0.0f, 0x1.aad084p-15f, 0x1.eab89ap-30f, 0x1.b37174p-59f,
     0x1.1ffda6p-91f, 0.0f, 0x1.1c66e6p-51f, 0.0f, 0x1.199236p-104f, 0x1.22ec32p-104f,
     0.0f, 0x1.77321ep-49f, 0x1.745e56p-20f, 0.0f, 0x1.93363ep-86f, 0.0f,
     0x1.752a26p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b17bc8p-125f, 0x1.80d2ap-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.478eacp-43f, 0.0f,
     0.0f, 0x1.f0e0e2p-64f, 0x1.c0178ap-117f, 0x1.80b2eep-8f, 0.0f, 0.0f,
     0x1.17245cp-47f, 0.0f, 0x1.5371cp-78f, 0.0f, 0.0f, 0x1.b5255ap-67f, 0.0f,
     0x1.4a250ep-1f, 0.0f, 0x1.397e56p-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.09c2d8p-118f,
     0x1.4fddep-21f, 0.0f, 0.0f, 0x1.55827cp-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.74c04ap-114f, 0x1.5905cep-67f, 0.0f, 0.0f, 0x1.6ee22ap-110f, 0.0f, 0.0f,
     0x1.28d338p-3f, 0x1.16ba76p-105f, 0.0f, 0x1.806b84p-97f, 0x1.44f34ep-126f, 0.0f,
     0x1.b4ffacp-67f, 0.0f, 0x1.e04a1ap-111f, 0x1.db00a4p-60f, 0x1.dc4ae6p-69f, 0.0f,
     0x1.f8db8p-50f, 0x1.bd404cp-82f, 0x1.cd37ecp-28f, 0x1.c3badcp-11f, 0.0f,
     0x1.47c3ap-116f, 0.0f, 0x1.185e4ap-8f, 0.0f, 0.0f, 0.0f, 0x1.531e1cp-32f, 0.0f,
     0.0f, 0x1.d20792p-47f, 0x1.c4e71cp-85f, 0.0f, 0x1.b7861ep-61f, 0.0f,
     0x1.3b9dd4p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.71be0ap-97f, 0.0f, 0x1.0e36a8p-52f,
     0.0f, 0.0f, 0x1.3ff9a6p-119f, 0.0f, 0x1.5238aep-11f, 0.0f, 0x1.ac8c4ap-1f,
     0x1.6512bap-30f, 0.0f, 0x1.c27f94p-74f, 0x1.d92448p-14f, 0.0f, 0x1.c638ap-8f,
     0x1.31e6bep-66f, 0x1.d9ae9ep-111f, 0.0f, 0.0f, 0x1.e6637p-50f, 0x1.dea0f8p-89f,
     0.0f, 0.0f, 0x1.a061f2p-55f, 0x1.16d5c6p-91f, 0x1.f9d23ep-111f, 0.0f,
     0x1.e762b8p-98f, 0.0f, 0.0f, 0x1.c76984p-64f, 0.0f, 0x1.658abp-5f, 0.0f,
     0x1.fc0e6ep-27f, 0.0f, 0.0f, 0.0f, 0x1.75242ap-16f, 0.0f, 0x1.7af336p-99f,
     0x1.271eacp-124f, 0x1.39e12p-68f, 0.0f, 0x1.24c292p-34f, 0x1.f10974p-58f,
     0x1.a81a8p-94f, 0.0f, 0x1.e6bfacp-118f, 0.0f, 0.0f, 0x1.9a2a02p-38f,
     0x1.f1e49p-63f, 0.0f, 0.0f, 0.0f, 0x1.3e892ap-65f, 0x1.edaa7p-21f, 0.0f,
     0x1.2a43a8p-91f, 0x1.36087p-8f, 0x1.fdcf5ap-5f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.51c26p-87f, 0.0f, 0x1.d88e86p-77f, 0.0f, 0.0f, 0x1.e0f6c8p-50f,
     0x1.642e1ap-81f, 0.0f, 0.0f, 0x1.0461cep-50f, 0x1.e8bf1p-94f, 0x1.1b1b52p-59f,
     0.0f, 0x1.f96beep-39f, 0.0f, 0x1.daa378p-101f, 0.0f, 0x1.34952ap-58f,
     0x1.55e82cp-91f, 0.0f, 0x1.ac2e58p-37f, 0.0f, 0.0f, 0.0f, 0x1.1b2ed2p-110f,
     0x1.f392ap-22f, 0.0f, 0x1.dfb54ap-38f, 0x1.4e391p-61f, 0x1.627318p-42f, 0x1p0f,
     0.0f, 0x1.a0913cp-6f, 0x1.4ad4d6p-4f, 0.0f, 0x1.d3880ep-62f, 0.0f,
     0x1.647382p-124f, 0.0f, 0x1.4dfe2cp-117f, 0.0f, 0x1.c821dep-22f, 0x1.843468p-35f,
     0x1.fd201ep-97f, 0x1.394368p-13f, 0x1.2e709p-48f, 0x1.5a6d12p-9f,
     0x1.aca126p-104f, 0x1.675238p-50f, 0.0f, 0x1.6d6924p-42f, 0.0f, 0.0f,
     0x1.6aa4d8p-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7dda44p-40f, 0x1.ffa48ep-89f, 0.0f,
     0x1.03a442p-61f, 0.0f, 0x1.f3f9cap-70f, 0x1.c4ff22p-108f, 0.0f, 0x1.24e3dep-60f,
     0x1.c5cc9ep-100f, 0.0f, 0x1.4fb964p-93f, 0.0f, 0x1.8cddbap-11f, 0x1.a2d294p-11f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.5f6e14p-117f, 0.0f, 0x1.53c518p-95f, 0x1.3f694p-59f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7750d2p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a1e706p-92f, 0.0f, 0.0f, 0x1.1c55ecp-106f, 0.0f, 0.0f, 0.0f, 0x1.9f3b42p-23f,
     0x1.def9f4p-27f, 0.0f, 0x1.a7666ep-61f, 0x1.17f688p-10f, 0.0f, 0.0f,
     0x1.5935fap-55f, 0x1.180e28p-116f, 0x1.6907e2p-9f, 0x1.37ffcp-7f,
     0x1.6b50fap-115f, 0.0f, 0.0f, 0x1.a588a4p-94f, 0x1.5e68dep-41f, 0x1.b3fca2p-33f,
     0x1.368d52p-112f, 0x1.358d7p-61f, 0.0f, 0x1.6a452ep-82f, 0x1.ad02p-102f, 0.0f,
     0x1.cf2608p-17f, 0.0f, 0x1.edd8d2p-3f, 0x1.985ed6p-52f, 0.0f, 0x1.af65d8p-47f,
     0x1.013498p-22f, 0x1.e8e00ep-117f, 0.0f, 0x1.30db0ap-3f, 0.0f, 0x1.69e104p-110f,
     0x1.a18e7ep-5f, 0.0f, 0x1.b3aa92p-61f, 0.0f, 0.0f, 0x1.dde598p-53f, 0.0f, 0.0f,
     0x1.844656p-106f, 0.0f, 0.0f, 0.0f, 0x1.330172p-18f, 0.0f, 0x1.b63426p-5f, 0.0f,
     0x1.c59264p-114f, 0x1.73546ap-82f, 0x1.a065fap-107f, 0x1.6cf6fcp-104f,
     0x1.1c414cp-85f, 0.0f, 0x1.5fb3acp-55f, 0x1.f31026p-115f, 0.0f, 0x1.0a719ap-18f,
     0.0f, 0x1.ca1d26p-125f, 0x1.3775b6p-43f, 0x1.0b7964p-38f, 0x1.dea344p-118f,
     0x1.a95e6p-44f, 0x1.d07d06p-83f, 0x1.cb8108p-53f, 0.0f, 0.0f, 0.0f,
     0x1.56a97ep-100f, 0x1.5572cap-24f, 0.0f, 0.0f, 0.0f, 0x1.c6e122p-33f,
     0x1.af9d14p-83f, 0.0f, 0x1.22b684p-72f, 0.0f, 0x1.b400b8p-100f, 0x1.a65beap-20f,
     0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.13f6b4p-53f, 0x1.474b3ep-30f, 0.0f,
     0x1.49e058p-102f, 0.0f, 0x1.8bbd84p-21f, 0x1.3a009ap-99f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.6adf72p-57f, 0.0f, 0x1.733822p-111f, 0.0f, 0.0f, 0.0f,
     0x1.b5f5d8p-50f, 0x1.503f4p-26f, 0.0f, 0x1.7677cp-81f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.88cefep-74f, 0.0f, 0x1.454e46p-113f, 0x1.d0d864p-108f, 0.0f, 0.0f,
     0x1.abe09ap-99f, 0.0f, 0x1.384c2cp-112f, 0.0f, 0.0f, 0x1.d24988p-97f,
     0x1.fa7decp-95f, 0.0f, 0x1.3f1c1ap-51f, 0.0f, 0x1.dc1bbcp-5f, 0x1.7338aap-53f,
     0.0f, 0.0f, 0x1.c829dap-64f, 0.0f, 0x1.f243e6p-86f, 0.0f, 0x1.53afdep-89f, 0.0f,
     0x1.cc6f4ap-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d2c27ap-85f, 0.0f, 0.0f, 0.0f, 0x1.f74bfcp-8f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.450226p-57f, 0x1.95642cp-81f, 0.0f, 0x1.e52dp-125f, 0x1.d6ecf2p-51f,
     0x1.63d012p-92f, 0x1.3676cap-89f, 0x1.929baep-68f, 0.0f, 0x1.82912ap-30f, 0.0f,
     0.0f, 0.0f, 0x1.be9062p-119f, 0x1.1156f4p-98f, 0.0f, 0x1.9cf2ccp-18f, 0.0f, 0.0f,
     0x1.be6eb8p-97f, 0.0f, 0.0f, 0x1.ebc17p-100f, 0x1.66f1dap-9f, 0x1.99971ep-70f,
     0x1.fd46aap-29f, 0x1.e3ebd6p-36f, 0.0f, 0x1.c8713p-27f, 0.0f, 0x1.b7af4cp-62f,
     0x1.13d2a4p-99f, 0.0f, 0x1.4b9072p-125f, 0x1.e7b012p-90f, 0.0f, 0x1.cae684p-68f,
     0.0f, 0.0f, 0.0f, 0x1.0da69p-48f, 0x1.adff12p-123f, 0x1.e93356p-49f, 0.0f,
     0x1.bad8d6p-13f, 0x1.eacd96p-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9e0e7cp-117f,
     0x1.173ee4p-92f, 0.0f, 0x1.abd0c2p-37f, 0x1.34990cp-13f, 0.0f, 0.0f,
     0x1.a8b13ep-47f, 0x1.df2c56p-21f, 0x1.fec102p-89f, 0.0f, 0x1.02e938p-64f,
     0x1.857fd6p-94f, 0.0f, 0.0f, 0x1.9e223ep-53f, 0x1.31d182p-114f, 0.0f, 0.0f,
     0x1p0f, 0.0f, 0.0f, 0x1.e44edep-20f, 0x1p0f, 0x1.41490cp-71f, 0x1.03b3b2p-51f,
     0.0f, 0.0f, 0x1.c3b342p-8f, 0x1.03180cp-94f, 0x1.f28e72p-38f, 0x1.baa7e4p-58f,
     0x1.a374b4p-24f, 0.0f, 0x1.63a2d4p-100f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b5e83ap-122f, 0.0f, 0.0f, 0.0f, 0x1.b981b2p-33f, 0x1.ae74ecp-45f, 0.0f,
     0x1.fc305ap-87f, 0.0f, 0x1.acc616p-100f, 0x1.f5000cp-60f, 0x1.23fe0ep-121f,
     0x1.4b228p-36f, 0.0f, 0x1.7827b8p-27f, 0x1.50c712p-91f, 0x1.e831b2p-14f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e3401ep-22f, 0.0f, 0x1.8a126ep-39f, 0.0f, 0x1.d5f64p-92f,
     0.0f, 0x1.dd3cep-101f, 0.0f, 0.0f, 0x1.81993ep-98f, 0.0f, 0x1.ed3f6ep-13f,
     0x1.191b38p-60f, 0x1.95ae62p-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6e495ep-84f, 0.0f,
     0x1.3e912ep-112f, 0x1.314ed8p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3bead6p-76f, 0.0f,
     0.0f, 0x1.34a6a2p-118f, 0x1.20c572p-29f, 0x1.d851p-115f, 0x1.8a3bf6p-66f,
     0x1.a14d48p-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.09ba8ap-29f, 0.0f, 0.0f, 0.0f,
     0x1.215c98p-114f, 0x1.dfe83cp-15f, 0.0f, 0x1.089694p-62f, 0.0f, 0x1.e66b72p-84f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.98b5f8p-104f, 0.0f, 0x1.6eb992p-25f, 0x1.0fdb9cp-40f,
     0.0f, 0x1.789eap-6f, 0x1.5938f6p-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d285dap-8f,
     0.0f, 0x1.3de3ep-8f, 0.0f, 0x1.878b1ep-47f
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
            tmp1 = Sleef_cbrtf4_u10kvx(tmp0);
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
    printf("Sleef_cbrtf4_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_cbrtf4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
