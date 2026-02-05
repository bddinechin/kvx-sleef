/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sinhf4_u35avx2128.c --function \
 *     Sleef_finz_sinhf4_u35avx2128 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 4 --function-input-vector-size \
 *     4 --bench --no-embedded-bin --target x86_avx2128
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
     0.0f, 0.0f, 0x1.c2ffe8p-117f, 0.0f, 0x1.6c58eep-58f, 0x1.39769p-10f,
     0x1.2aeba4p-81f, 0x1.40f0f4p-123f, 0x1.145a22p-97f, 0x1.d06d4cp-113f,
     0x1.18fd4p-18f, 0.0f, 0x1.4c452ep-3f, 0.0f, 0x1.84057ep-44f, 0.0f, 0.0f,
     0x1.42fd84p-66f, 0.0f, 0.0f, 0x1.ae82d8p-42f, 0x1.6817e8p-91f, 0x1.59eee6p-60f,
     0x1.a26672p-92f, 0.0f, 0x1.97c122p-22f, 0x1.ee9bbap-16f, 0x1.8b411cp-4f, 0.0f,
     0x1.216f66p-100f, 0x1.184314p-42f, 0.0f, 0.0f, 0x1.d6f2ep-7f, 0x1.129292p-33f,
     0.0f, 0x1.785716p-27f, 0.0f, 0x1.f3e134p-119f, 0.0f, 0.0f, 0x1.6d34f4p-76f, 0.0f,
     0x1.83798p-46f, 0x1.31347ap-75f, 0x1.248e54p-79f, 0x1.7b62bp-125f, 0x1p0f,
     0x1.d07842p-87f, 0.0f, 0.0f, 0.0f, 0x1.18fa9ep-36f, 0.0f, 0x1.c9f1f2p-41f,
     0x1.6d7eecp-87f, 0x1.6c3024p-108f, 0.0f, 0x1.f1f82ap-83f, 0.0f, 0x1.b9815ap-69f,
     0x1.4fb2aap-110f, 0.0f, 0x1.2513cap-52f, 0x1.0003bcp-84f, 0.0f, 0x1.bd2224p-2f,
     0x1.3c8b2p-102f, 0x1.2e3a0cp-98f, 0x1.d042b2p-22f, 0x1.be293ap-58f,
     0x1.d6e1a2p-96f, 0.0f, 0x1.768918p-37f, 0.0f, 0.0f, 0x1.64a4f2p-1f,
     0x1.c89fb8p-14f, 0.0f, 0.0f, 0x1.2e5daep-68f, 0x1.58671ep-100f, 0x1.972c58p-83f,
     0.0f, 0.0f, 0x1.52a128p-91f, 0.0f, 0.0f, 0x1.5999f2p-90f, 0x1.3a8902p-4f, 0.0f,
     0x1.15ebc6p-45f, 0.0f, 0.0f, 0x1.010696p-88f, 0.0f, 0x1.bf4fa8p-54f,
     0x1.b11f38p-16f, 0x1.d9786p-40f, 0.0f, 0x1.d8fb7ep-73f, 0x1.8993e6p-80f,
     0x1.74a348p-116f, 0x1.bcaccep-15f, 0x1.e70352p-37f, 0.0f, 0x1.db6258p-41f,
     0x1.04d5bp-1f, 0x1.d0666p-75f, 0.0f, 0x1.9a3654p-8f, 0x1.00febep-30f, 0.0f, 0.0f,
     0.0f, 0x1.a4e07ap-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ce37cap-104f,
     0x1.03c8f6p-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9f7db4p-88f,
     0x1.52fa78p-85f, 0x1.f1e8e4p-75f, 0x1.13427ep-116f, 0x1.870ea4p-111f, 0.0f,
     0x1.ca45a2p-25f, 0.0f, 0x1.ba7f74p-78f, 0x1.947786p-4f, 0x1.e186b4p-38f, 0.0f,
     0x1.daf7e4p-27f, 0x1.f4ff64p-60f, 0x1.e35c84p-121f, 0x1.7dcd44p-16f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7f1768p-110f, 0x1.14e252p-35f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a77638p-65f, 0.0f, 0x1.c8f11ep-62f, 0x1.74734ap-53f, 0.0f,
     0x1.102a22p-119f, 0x1.0d8ecap-9f, 0x1.3138fp-44f, 0.0f, 0x1.cc7e68p-105f,
     0x1.17d6e6p-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c46e58p-21f, 0x1.117266p-109f,
     0x1.82e182p-33f, 0x1.875894p-93f, 0.0f, 0x1.f07c1p-78f, 0x1.a35058p-30f,
     0x1.19f018p-85f, 0.0f, 0.0f, 0.0f, 0x1.6462fep-58f, 0x1.e81d9ep-117f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.069b26p-108f, 0x1.fa78eap-20f, 0x1.dd1ee4p-113f,
     0x1.51985cp-58f, 0x1.1d2e5p-93f, 0x1.36451cp-44f, 0x1.e2fa68p-24f, 0.0f, 0.0f,
     0x1.8df0b8p-41f, 0.0f, 0.0f, 0x1.028db6p-101f, 0x1.14adcp-47f, 0.0f, 0.0f,
     0x1.464894p-108f, 0x1.d1422ap-51f, 0.0f, 0x1.af36ep-113f, 0.0f, 0x1.0ce5cep-44f,
     0.0f, 0x1.d4a2acp-106f, 0.0f, 0.0f, 0.0f, 0x1.7b92b6p-89f, 0x1.12343ap-62f, 0.0f,
     0.0f, 0x1.44de74p-100f, 0.0f, 0x1.f423bp-93f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.628a32p-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.981b8p-113f, 0.0f, 0.0f,
     0x1.24cf8p-68f, 0x1.cff9fap-41f, 0x1.663974p-4f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d42702p-107f, 0x1.150adep-82f, 0.0f, 0.0f, 0x1.f75a7ep-78f, 0.0f, 0.0f, 0.0f,
     0x1.5b59aep-23f, 0.0f, 0x1.0458f4p-116f, 0x1.70ffcp-93f, 0.0f, 0x1.8dcd46p-80f,
     0.0f, 0x1.d4efd8p-7f, 0.0f, 0x1.25e8d4p-33f, 0.0f, 0x1.c38c36p-67f,
     0x1.72da14p-125f, 0.0f, 0x1.b2c2b8p-46f, 0x1.26aca8p-53f, 0x1.36ca82p-60f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.74aa66p-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7304bep-33f,
     0x1.0b319ep-39f, 0.0f, 0.0f, 0x1.f6340ap-35f, 0.0f, 0x1.832d6ap-102f,
     0x1.62cebap-8f, 0x1.8dd3dap-46f, 0.0f, 0.0f, 0x1.40fa52p-64f, 0x1.0d320ap-75f,
     0.0f, 0.0f, 0x1.9d3b28p-82f, 0.0f, 0.0f, 0x1.822176p-17f, 0x1.0f4b3ep-72f,
     0x1.53bfa6p-4f, 0.0f, 0.0f, 0x1.77a972p-42f, 0.0f, 0x1.aa4e42p-114f,
     0x1.bd495ap-47f, 0.0f, 0.0f, 0x1.787998p-116f, 0.0f, 0.0f, 0x1.7fae6ep-87f, 0.0f,
     0.0f, 0x1.b90e72p-22f, 0.0f, 0.0f, 0x1.3df5dep-126f, 0x1.11337cp-105f,
     0x1.dfd288p-93f, 0x1.b4f28ap-25f, 0x1.be3d06p-18f, 0x1.fe6ac4p-36f, 0.0f, 0.0f,
     0.0f, 0x1.397c3ap-15f, 0.0f, 0x1.4706d4p-75f, 0x1.b835ecp-49f, 0x1.77f9c2p-70f,
     0x1.125bf8p-109f, 0x1.f5504cp-2f, 0x1.3ef268p-1f, 0.0f, 0.0f, 0x1.9c4f46p-5f,
     0.0f, 0.0f, 0x1.fa4a6ep-82f, 0x1.09064p-21f, 0.0f, 0.0f, 0x1.a02f26p-69f,
     0x1.9b0a52p-106f, 0.0f, 0.0f, 0x1.4787eap-116f, 0.0f, 0.0f, 0x1.133258p-86f,
     0.0f, 0x1.4698f6p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6e910ap-93f, 0.0f,
     0x1.056a2ep-58f, 0x1.ff2412p-35f, 0x1.d6252ep-23f, 0x1.b60206p-85f, 0.0f, 0.0f,
     0x1.4dd316p-17f, 0x1.00c996p-35f, 0x1.f5b6a8p-95f, 0.0f, 0x1.062e0ep-21f, 0.0f,
     0.0f, 0x1.408d26p-48f, 0.0f, 0.0f, 0x1.f15804p-66f, 0x1.09c0d4p-125f,
     0x1.ce891ap-32f, 0x1.cf3edep-3f, 0x1.53b878p-30f, 0.0f, 0x1.155c72p-97f,
     0x1.f6ed5p-103f, 0.0f, 0.0f, 0.0f, 0x1.bac112p-115f, 0x1.a6c4bp-77f, 0.0f, 0.0f,
     0x1.0c2122p-121f, 0.0f, 0x1.85bdd6p-12f, 0.0f, 0x1.7abeb8p-87f, 0.0f,
     0x1.164ec6p-14f, 0x1.fe0308p-80f, 0.0f, 0.0f, 0x1.08d38ap-126f, 0.0f, 0.0f, 0.0f,
     0x1.2fc9f4p-84f, 0.0f, 0.0f, 0x1.cf5f66p-13f, 0x1.230208p-31f, 0.0f,
     0x1.125a94p-28f, 0.0f, 0x1.a4998p-118f, 0x1.054298p-75f, 0x1.31d722p-66f, 0.0f,
     0.0f, 0x1.12e87p-52f, 0.0f, 0.0f, 0x1.565966p-74f, 0x1.d818eap-5f, 0.0f,
     0x1.de19c2p-86f, 0.0f, 0x1.f96a26p-20f, 0.0f, 0.0f, 0.0f, 0x1.adb792p-14f,
     0x1.19c854p-86f, 0x1.1541eap-31f, 0x1.987e4ap-96f, 0x1.165d92p-111f, 0.0f, 0.0f,
     0x1.e26e98p-24f, 0.0f, 0x1.44490ep-80f, 0x1.3bc7dcp-25f, 0x1.8f4714p-45f,
     0x1.1d63fap-99f, 0x1.d3cb5cp-19f, 0.0f, 0x1.37ddbep-83f, 0x1.678352p-4f,
     0x1.54084ep-8f, 0x1.15464p-36f, 0.0f, 0.0f, 0x1.18f0cap-22f, 0.0f, 0.0f, 0.0f,
     0x1.736b3p-74f, 0x1.aefdccp-15f, 0x1.2a14bcp-46f, 0x1.7928ap-21f, 0.0f, 0.0f,
     0x1.4ba3bep-88f, 0x1.026b2ap-66f, 0x1.cc9caep-10f, 0.0f, 0x1.ebdc46p-68f, 0.0f,
     0.0f, 0x1.476674p-104f, 0x1.f249c6p-69f, 0.0f, 0.0f, 0x1.0b279cp-84f, 0.0f,
     0x1.bc007ap-40f, 0.0f, 0.0f, 0x1.a37048p-73f, 0.0f, 0.0f, 0x1.e4c51ap-124f,
     0x1.a6300ep-27f, 0.0f, 0x1.d78b2cp-97f, 0x1.3d6caep-90f, 0x1.723d2p-116f, 0.0f,
     0.0f, 0x1.f6a0b4p-57f, 0.0f, 0x1.69b73cp-98f, 0x1.6c1a52p-117f, 0.0f, 0.0f,
     0x1.993eb2p-102f, 0.0f, 0.0f, 0x1.79f8bcp-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.20aee2p-2f, 0.0f, 0.0f, 0x1.70ab88p-86f, 0.0f, 0x1.0d9348p-104f, 0.0f, 0.0f,
     0x1.5901e2p-11f, 0.0f, 0x1.fc0cf4p-14f, 0.0f, 0x1.e4e316p-73f, 0.0f,
     0x1.a5857cp-77f, 0x1.c70d6ap-59f, 0.0f, 0x1p0f, 0.0f, 0x1.a81966p-123f,
     0x1.85a8bcp-1f, 0x1.9bff36p-112f, 0x1.f5b3bep-32f, 0.0f, 0.0f, 0.0f,
     0x1.5673aep-107f, 0x1.33bb8p-70f, 0x1.4e7f44p-120f, 0x1.4e2616p-83f,
     0x1.9b2ceep-55f, 0x1.1ccd64p-116f, 0x1.733a5cp-39f, 0.0f, 0x1.f68dep-16f, 0.0f,
     0.0f, 0x1p0f, 0.0f, 0x1.45749p-53f, 0.0f, 0x1.745d5ap-6f, 0x1.62b67cp-22f, 0.0f,
     0.0f, 0x1.51aaeap-43f, 0x1.8185bep-67f, 0.0f, 0.0f, 0x1.aaf942p-97f, 0.0f,
     0x1.97772p-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.658b82p-101f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4366f8p-61f, 0.0f, 0.0f, 0.0f, 0x1.03b3b8p-100f, 0x1.f1884cp-23f,
     0.0f, 0.0f, 0.0f, 0x1.67ae4ap-12f, 0x1.1d6fc2p-124f, 0.0f, 0.0f,
     0x1.5a1aeap-114f, 0.0f, 0x1.362f42p-27f, 0x1.aa0b38p-7f, 0.0f, 0x1.81844ep-30f,
     0.0f, 0.0f, 0x1.e0c62p-34f, 0x1.e13bdap-15f, 0x1.374a4ep-9f, 0.0f, 0.0f, 0.0f,
     0x1.29e47ap-106f, 0x1.658ed2p-88f, 0.0f, 0.0f, 0x1.e19a94p-123f, 0.0f, 0.0f,
     0x1.606ec2p-93f, 0x1.54e516p-17f, 0x1.f1e13p-20f, 0x1.f4937ap-126f, 0.0f,
     0x1.84f8bp-66f, 0x1.29aa6ap-72f, 0x1.661c0ep-36f, 0x1.441b2ap-40f,
     0x1.20253ep-39f, 0x1.74202p-60f, 0.0f, 0.0f, 0x1.841638p-38f, 0x1.af2374p-84f,
     0.0f, 0.0f, 0x1.ee60dep-33f, 0.0f, 0x1.5cf7e4p-55f, 0x1.57061ep-46f,
     0x1.17cfb2p-65f, 0x1.fac44cp-35f, 0.0f, 0x1.3afcecp-69f, 0x1.13eab6p-63f,
     0x1.d25148p-2f, 0.0f, 0x1.42d656p-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.19b76p-28f, 0x1.ac58fep-80f, 0x1.d54c1cp-81f, 0x1.f91e8p-123f,
     0x1.2a39aep-76f, 0.0f, 0.0f, 0.0f, 0x1.a0fa04p-12f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0167cep-10f, 0.0f, 0.0f, 0.0f, 0x1.72ef14p-122f, 0x1.d00562p-71f, 0.0f,
     0x1.9ed17p-9f, 0.0f, 0.0f, 0x1.5e887ap-121f, 0x1.5139f6p-120f, 0x1.39bfcap-101f,
     0.0f, 0.0f, 0x1.102826p-124f, 0x1.a4db82p-33f, 0x1.8d6adep-108f, 0x1.e0179ep-58f,
     0x1.69e4f6p-51f, 0x1.35b7a4p-66f, 0x1.203cb6p-60f, 0x1.1ba18cp-56f, 0.0f,
     0x1.244062p-68f, 0x1.a3d818p-96f, 0.0f, 0x1.1cd83ap-19f, 0.0f, 0.0f,
     0x1.e42b44p-119f, 0.0f, 0x1.ef936p-44f, 0x1.1e4e86p-22f, 0x1.0ba00ep-36f,
     0x1.9028aap-82f, 0x1.43ed72p-38f, 0x1.8a4106p-102f, 0.0f, 0.0f, 0.0f,
     0x1.29d5bp-66f, 0x1.12b6c8p-38f, 0.0f, 0x1.3fe4f6p-16f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.61a66ep-113f, 0.0f, 0x1.408b0ep-73f, 0x1.a7fe18p-55f, 0.0f,
     0x1.e772b8p-68f, 0.0f, 0x1.e8f108p-99f, 0.0f, 0x1.b4b7c4p-25f, 0.0f, 0.0f,
     0x1.dd8dcp-73f, 0.0f, 0.0f, 0x1.0b2996p-14f, 0.0f, 0.0f, 0.0f, 0x1.5a1cd6p-8f,
     0x1.30dee6p-63f, 0.0f, 0.0f, 0x1.6daceap-3f, 0.0f, 0x1.e8aad6p-35f,
     0x1.db2b1cp-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2771cp-99f, 0.0f, 0.0f, 0.0f,
     0x1.f51386p-84f, 0.0f, 0x1.cb248ep-104f, 0x1.2e22bap-96f, 0.0f, 0x1.b321dep-6f,
     0.0f, 0x1.fb0c88p-70f, 0x1.f33d0cp-42f, 0x1.595474p-59f, 0x1.276db8p-49f, 0.0f,
     0x1.d1c486p-122f, 0.0f, 0x1.22acbcp-72f, 0.0f, 0.0f, 0x1.72bbc6p-67f, 0.0f,
     0x1.535f9cp-82f, 0.0f, 0.0f, 0x1.e10e8cp-19f, 0.0f, 0.0f, 0.0f, 0x1.5921ecp-31f,
     0.0f, 0x1.2df22ep-49f, 0.0f, 0x1.06d52ap-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.7a1fc8p-101f, 0x1.db034ep-13f, 0.0f, 0x1.ea6ca8p-86f, 0.0f,
     0x1.43ee66p-82f, 0.0f, 0.0f, 0.0f, 0x1.e061bcp-43f, 0.0f, 0.0f, 0x1.320548p-77f,
     0x1.889ee8p-47f, 0x1.5a784cp-72f, 0.0f, 0.0f, 0.0f, 0x1.ac3df8p-29f, 0x1p0f,
     0.0f, 0x1.9a8f7ap-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d72862p-26f,
     0x1.591e68p-124f, 0x1.837448p-2f, 0x1.91ab54p-67f, 0.0f, 0.0f, 0.0f,
     0x1.a01222p-26f, 0x1.e13a5cp-100f, 0x1.0bc604p-42f, 0x1.6e4baep-20f, 0x1p0f,
     0x1.e46062p-56f, 0x1.adfc58p-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0f33a2p-102f,
     0.0f, 0.0f, 0.0f, 0x1.8c91f6p-125f, 0x1.cc368ep-119f, 0x1.a66544p-15f, 0.0f,
     0x1.a26f22p-14f, 0.0f, 0.0f, 0x1.4fc48ap-91f, 0.0f, 0x1.60b522p-99f, 0.0f,
     0x1.189ce4p-70f, 0x1.9bf11ap-112f, 0.0f, 0x1.d3a324p-75f, 0.0f, 0x1.1a31c4p-46f,
     0.0f, 0.0f, 0.0f, 0x1.2b9e2ep-16f, 0x1.612746p-24f, 0x1.64134p-55f, 0.0f, 0.0f,
     0.0f, 0x1.4f52b8p-96f, 0x1.157c98p-108f, 0x1.31be5ap-108f, 0x1.bc87a8p-12f,
     0x1.9d769cp-119f, 0x1.c151a4p-80f, 0x1.50af3ep-7f, 0x1.40eea2p-68f, 0.0f,
     0x1.fcf3b8p-21f, 0x1.146a54p-85f, 0x1.852aaep-28f, 0.0f, 0.0f, 0x1.86c0eap-5f,
     0.0f, 0.0f, 0x1.4d76acp-66f, 0x1.9f40aep-78f, 0x1.21865cp-71f, 0.0f,
     0x1.081578p-53f, 0.0f, 0.0f, 0x1.bc5b3ep-34f, 0.0f, 0.0f, 0.0f, 0x1.4fc634p-26f,
     0x1.5a0448p-118f, 0.0f, 0x1.c0ac9p-5f, 0x1.f580c6p-43f, 0.0f, 0x1.a2367ep-88f,
     0x1.e9bbcep-119f, 0x1.449acp-3f, 0.0f, 0x1.578d4ap-92f, 0.0f, 0x1.30495cp-65f,
     0x1.1ad76cp-122f, 0.0f, 0x1.e6fec4p-73f, 0x1.b3953cp-47f, 0x1.0a4accp-95f,
     0x1.6636fap-31f, 0.0f, 0.0f, 0x1.6e8daep-14f, 0x1.aa5fe4p-42f, 0.0f,
     0x1.cb0e4p-12f, 0x1.e89098p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9a8fbp-120f,
     0x1.86982p-16f, 0x1.ca03ecp-105f, 0.0f, 0.0f, 0.0f, 0x1.5e358cp-107f,
     0x1.c2f442p-32f, 0.0f, 0x1.47da9ep-43f, 0.0f, 0.0f, 0x1.fb86c2p-125f, 0.0f, 0.0f,
     0x1.7fe11ap-81f, 0x1.6c938p-97f, 0x1.c3a16cp-13f, 0.0f, 0x1.2c3c02p-38f, 0.0f,
     0x1.ba64bp-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b64a6ep-49f,
     0x1.ccde9ap-59f, 0.0f, 0.0f, 0x1.50a25ap-85f, 0x1.659afp-91f, 0x1.508b52p-95f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.0b2be4p-10f, 0x1.f51956p-12f,
     0.0f, 0.0f, 0x1.8f3fbcp-19f, 0.0f, 0x1.b93048p-65f, 0.0f, 0x1.496c04p-54f,
     0x1.ff394ap-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1c56ecp-49f, 0.0f,
     0x1.2f3078p-101f, 0x1.f7c742p-14f, 0x1.b4d94p-58f, 0.0f, 0x1.1a4178p-29f,
     0x1.4d4898p-112f, 0.0f, 0.0f, 0x1.abb594p-126f, 0x1.40d5eap-99f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.16bcd6p-7f, 0x1.858d7cp-53f, 0x1.4bb054p-103f, 0.0f, 0.0f, 0.0f,
     0x1.458abcp-78f, 0.0f, 0.0f, 0x1.f58578p-4f, 0.0f, 0.0f, 0.0f, 0x1.194c2cp-102f,
     0x1.60411p-8f, 0x1.a8ab7ap-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f
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
            tmp1 = Sleef_finz_sinhf4_u35avx2128(tmp0);
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
    printf("Sleef_finz_sinhf4_u35avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_sinhf4_u35avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
