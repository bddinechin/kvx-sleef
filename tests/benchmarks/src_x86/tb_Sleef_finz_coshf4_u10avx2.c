/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_coshf4_u10avx2128.c --function \
 *     Sleef_finz_coshf4_u10avx2128 --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0.0f, 0.0f, 0x1.2903e8p-70f, 0.0f, 0x1.98b03ap-74f, 0x1.7d2978p-81f, 0.0f,
     0.0f, 0x1.579562p-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.45a7bcp-34f,
     0x1.4ad72ep-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dc6366p-101f, 0.0f,
     0x1.f1727ap-126f, 0x1.a3a302p-21f, 0.0f, 0x1.cb8ad8p-48f, 0.0f, 0.0f,
     0x1.246332p-14f, 0.0f, 0x1.c4a1fep-62f, 0x1.12d9b6p-44f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.15a802p-48f, 0.0f, 0.0f, 0x1.13415ep-14f, 0x1.aa1ae4p-107f, 0x1.48137p-30f,
     0x1.6e13e8p-36f, 0x1.7156c6p-9f, 0.0f, 0x1.2711eap-58f, 0x1.86062ap-84f,
     0x1.64b6dep-93f, 0x1.2f48dap-29f, 0x1.51928ap-8f, 0.0f, 0x1.4b7528p-111f,
     0x1.3f7904p-99f, 0x1.0b5de8p-48f, 0.0f, 0.0f, 0x1.04186cp-47f, 0.0f, 0.0f,
     0x1.cc2ddap-111f, 0x1.975b24p-96f, 0.0f, 0.0f, 0x1.8af884p-21f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.6f441cp-32f, 0x1.7cc1c2p-106f, 0x1.0b9e1ap-81f, 0x1.d3d39ep-61f,
     0x1.e4f236p-1f, 0.0f, 0x1.1417c2p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ebc12ep-118f, 0.0f, 0x1.e5bfb4p-46f, 0x1.b45e34p-81f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.46e3a6p-45f, 0x1.9501acp-48f, 0.0f, 0.0f, 0x1.f090f4p-25f, 0.0f,
     0.0f, 0x1.e92df2p-14f, 0x1.758ceap-18f, 0x1.de0d3ap-26f, 0x1.81c7b6p-13f, 0.0f,
     0x1.bf256ep-76f, 0x1.59f62p-68f, 0.0f, 0x1.9fed7ep-73f, 0x1.9e9a4cp-23f,
     0x1.46161ep-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2ae1a4p-42f, 0x1.b198a6p-95f,
     0x1.d35bc8p-66f, 0x1.891fd8p-91f, 0.0f, 0.0f, 0x1.518ebp-115f, 0.0f,
     0x1.6a8eacp-4f, 0x1.9b40fcp-14f, 0.0f, 0.0f, 0.0f, 0x1.9a91ep-78f, 0.0f, 0.0f,
     0x1.ff8adap-16f, 0.0f, 0x1.833612p-91f, 0x1.fb7912p-90f, 0x1.fcdf8ap-112f,
     0x1.687b1ap-116f, 0.0f, 0x1.a98548p-15f, 0.0f, 0x1.d23408p-43f, 0x1.508486p-26f,
     0.0f, 0.0f, 0.0f, 0x1.6bcb98p-107f, 0.0f, 0x1.b0c528p-92f, 0x1.4210c4p-15f,
     0x1.8d03cep-7f, 0x1.05db2p-36f, 0.0f, 0.0f, 0x1.f5afe2p-12f, 0.0f,
     0x1.e5157cp-75f, 0x1.112eaep-2f, 0x1.e7ac5ep-75f, 0x1.b26abep-5f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d314d6p-101f, 0x1.9a7da6p-125f, 0.0f, 0.0f, 0.0f,
     0x1.feca3ep-51f, 0.0f, 0.0f, 0x1.5c4808p-49f, 0x1.3a105ap-123f, 0x1.834862p-37f,
     0x1.7f617ap-43f, 0x1.753aacp-118f, 0.0f, 0.0f, 0.0f, 0x1.ca681ap-78f,
     0x1.a0b844p-111f, 0.0f, 0.0f, 0x1.377a22p-18f, 0.0f, 0x1.aa26cap-4f,
     0x1.5d6656p-73f, 0x1.55b3c8p-17f, 0x1.1c512ap-21f, 0.0f, 0.0f, 0.0f,
     0x1.32adcap-75f, 0x1.036194p-59f, 0.0f, 0x1p0f, 0x1.5dadc2p-22f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b2bdf8p-46f, 0.0f, 0x1.8b5702p-77f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d26432p-65f, 0x1.5faabep-44f, 0x1.377c4cp-113f,
     0x1.56119p-113f, 0x1.708ddep-31f, 0x1.635bf2p-90f, 0.0f, 0x1.660534p-58f, 0.0f,
     0x1.b31b2ap-41f, 0.0f, 0x1.45aac4p-52f, 0x1.0b45a6p-66f, 0.0f, 0x1.cecbccp-85f,
     0.0f, 0x1.2fae64p-34f, 0.0f, 0x1.32dcb4p-4f, 0.0f, 0.0f, 0x1.1cc14cp-57f,
     0x1.20b33p-36f, 0x1.4a15fap-91f, 0x1.5e503cp-37f, 0x1.793102p-119f,
     0x1.04ca2ep-109f, 0.0f, 0x1.794fe2p-30f, 0.0f, 0x1.3eea4cp-55f, 0x1.69fe6p-109f,
     0.0f, 0x1.5975b2p-22f, 0.0f, 0x1.b56522p-95f, 0x1.042c12p-55f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.640bfep-51f, 0.0f, 0.0f, 0x1.f7d3b6p-124f, 0.0f, 0x1.29e6b2p-125f,
     0x1.79ba8ep-90f, 0x1.3f333p-6f, 0x1.176c0cp-70f, 0.0f, 0x1.646368p-34f, 0.0f,
     0.0f, 0x1.dcaa9cp-22f, 0.0f, 0x1.ee094cp-94f, 0x1p0f, 0x1.807828p-69f,
     0x1.92073p-1f, 0x1.b3f73cp-1f, 0x1.572d88p-14f, 0x1.b371fcp-99f, 0.0f,
     0x1.90cd34p-94f, 0x1.ea7908p-96f, 0.0f, 0x1.fb85fcp-4f, 0x1.e815f2p-93f, 0.0f,
     0.0f, 0x1.703346p-21f, 0x1.5eb554p-111f, 0x1.57e6eep-20f, 0.0f, 0x1.17ca3p-20f,
     0.0f, 0x1.66aea2p-111f, 0.0f, 0x1.2f1b6ep-49f, 0.0f, 0x1.5b64fap-57f,
     0x1.fe8762p-49f, 0.0f, 0x1.84e04p-46f, 0x1.a7ce1p-66f, 0.0f, 0.0f, 0.0f,
     0x1.d790e2p-1f, 0.0f, 0x1.17c9c4p-69f, 0x1.6ea72p-124f, 0x1.50d516p-61f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.72d4cp-114f, 0x1.4fd892p-64f, 0x1.d22d86p-71f, 0.0f,
     0x1.d7b292p-37f, 0.0f, 0x1.e9e7a8p-93f, 0.0f, 0x1.81d5ep-34f, 0.0f, 0.0f,
     0x1.bb88ap-125f, 0x1.4f208p-109f, 0.0f, 0.0f, 0x1.ee6082p-9f, 0.0f, 0.0f, 0.0f,
     0x1.f479e4p-105f, 0x1.d32cap-59f, 0x1.1d2fcap-96f, 0.0f, 0x1.cb0a1p-32f, 0.0f,
     0x1.fd7738p-42f, 0x1.e66432p-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9fa766p-72f, 0x1.44b756p-24f, 0.0f, 0.0f, 0x1.0ae9b2p-63f, 0x1.c24eb4p-90f,
     0x1.23a0eep-21f, 0.0f, 0x1.0c7b44p-117f, 0x1.faed5ap-92f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.7f67ccp-13f, 0x1.2bf02ep-68f, 0x1.4e32fcp-94f, 0.0f,
     0x1.ef60d4p-96f, 0x1.ba89a6p-44f, 0x1.1f9ba2p-57f, 0x1.286bbp-11f,
     0x1.3f49e8p-73f, 0.0f, 0.0f, 0.0f, 0x1.39c836p-92f, 0.0f, 0.0f, 0.0f,
     0x1.030bc8p-117f, 0x1.de712p-55f, 0.0f, 0x1.34daa8p-41f, 0x1.f8ca3ep-124f,
     0x1.3806cp-105f, 0.0f, 0x1.1e35dap-86f, 0x1.d4fcdp-34f, 0.0f, 0.0f,
     0x1.a6e42ep-49f, 0.0f, 0.0f, 0x1.329b6ap-101f, 0x1.b81e58p-18f, 0x1.78e502p-48f,
     0.0f, 0x1.894772p-58f, 0.0f, 0.0f, 0.0f, 0x1.6d38e2p-24f, 0x1.7f27b4p-72f, 0.0f,
     0x1.17095cp-114f, 0.0f, 0x1.66f7acp-1f, 0.0f, 0x1.bf3918p-66f, 0x1.fa0928p-95f,
     0x1.fc23dcp-79f, 0.0f, 0x1.38fa52p-75f, 0x1.de0d04p-92f, 0x1.8b4f3p-102f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.67a346p-92f, 0.0f, 0.0f, 0x1.d5d29ap-14f, 0x1.b0d072p-72f,
     0.0f, 0x1.f547c6p-117f, 0x1.8067a8p-57f, 0x1.13b37cp-14f, 0x1.5c4fb6p-63f, 0.0f,
     0x1.5906a4p-81f, 0x1.0c68b4p-44f, 0x1.f3591ep-75f, 0x1.936e8cp-43f,
     0x1.dfbe84p-20f, 0.0f, 0x1.8a3f7cp-105f, 0x1.2c7878p-126f, 0x1.fd65b8p-100f,
     0x1.beb788p-63f, 0.0f, 0x1.c95eacp-48f, 0x1.d4cc1p-114f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.41bc3p-10f, 0.0f, 0x1.dd948ap-119f, 0x1.42e8c8p-97f, 0x1.4e3f1ap-121f, 0.0f,
     0.0f, 0x1.d72098p-48f, 0.0f, 0.0f, 0.0f, 0x1.d5067ap-78f, 0.0f, 0x1.23d1d6p-126f,
     0x1.76f382p-6f, 0.0f, 0x1.79230ep-4f, 0.0f, 0.0f, 0.0f, 0x1.c81f9ep-58f,
     0x1.fd4dfp-85f, 0.0f, 0x1.551992p-113f, 0.0f, 0.0f, 0x1.d24f82p-5f,
     0x1.53532ep-2f, 0x1.5fe12cp-121f, 0x1.3f73e8p-103f, 0x1.055138p-20f,
     0x1.ee516p-23f, 0.0f, 0x1.620298p-110f, 0.0f, 0x1.f214a2p-107f, 0x1.4f7f16p-123f,
     0.0f, 0x1.327e78p-13f, 0x1.7522ccp-104f, 0.0f, 0.0f, 0.0f, 0x1.a98cb8p-7f, 0.0f,
     0.0f, 0x1.959baap-58f, 0x1.961492p-20f, 0x1.2965c2p-66f, 0x1.8c3b3ep-21f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.7633acp-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9cafc6p-79f, 0.0f, 0x1.109f24p-31f, 0x1.5809bcp-92f, 0.0f, 0.0f,
     0x1.06d0e2p-53f, 0x1.440f0ap-62f, 0.0f, 0x1.6c93eap-6f, 0.0f, 0x1.a06eeap-98f,
     0.0f, 0x1.047e7ep-77f, 0.0f, 0x1.95c27ep-48f, 0x1.1d95e8p-22f, 0.0f,
     0x1.d00d6cp-44f, 0x1.fd2456p-72f, 0x1.9f0586p-81f, 0x1.7c8664p-118f, 0.0f, 0.0f,
     0x1.5fe68ap-38f, 0.0f, 0x1.982eep-110f, 0x1.2cc48p-101f, 0.0f, 0x1.f5e42ep-3f,
     0x1.204ee8p-69f, 0x1.adf15cp-80f, 0x1.4ad73ep-72f, 0x1.3c704ep-45f, 0.0f,
     0x1.4460f4p-53f, 0.0f, 0x1.87d0e4p-125f, 0.0f, 0.0f, 0x1.3af108p-1f,
     0x1.d68c76p-55f, 0.0f, 0x1.ac9a82p-112f, 0.0f, 0x1.957186p-48f, 0x1.84e8f8p-45f,
     0.0f, 0.0f, 0x1.0985a2p-32f, 0.0f, 0x1.7fa6f8p-69f, 0x1.672a44p-82f, 0.0f,
     0x1.ac1fcap-8f, 0x1.d698f6p-77f, 0.0f, 0x1.232a6cp-115f, 0.0f, 0x1.75524ap-110f,
     0x1.1fd458p-54f, 0.0f, 0x1.50487ep-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b1cb5ap-74f, 0x1.b21294p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8d0bfep-18f, 0.0f, 0x1.8e7876p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.51610ep-21f,
     0x1.52be92p-30f, 0.0f, 0.0f, 0x1.64fb08p-104f, 0.0f, 0x1.ec6396p-105f, 0.0f,
     0.0f, 0.0f, 0x1.96e348p-10f, 0.0f, 0.0f, 0x1.4d27dap-86f, 0x1.ebd1a4p-122f, 0.0f,
     0x1.1b4b7cp-34f, 0x1.b403a6p-24f, 0.0f, 0x1.46cdacp-118f, 0x1.8c5524p-13f, 0.0f,
     0.0f, 0.0f, 0x1.cb30cp-58f, 0.0f, 0.0f, 0.0f, 0x1.fb7f44p-20f, 0.0f,
     0x1.fca956p-49f, 0x1.d3c6d4p-17f, 0.0f, 0x1.21ed04p-14f, 0x1.16e8d8p-120f,
     0x1.688126p-48f, 0.0f, 0.0f, 0.0f, 0x1.64e7f2p-20f, 0.0f, 0x1.316bb4p-96f, 0.0f,
     0.0f, 0.0f, 0x1.f4a0a2p-11f, 0.0f, 0x1.a00392p-77f, 0.0f, 0x1.62146p-31f,
     0x1.d87e66p-120f, 0x1.2336f8p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0305a4p-55f,
     0x1.72cd6ap-24f, 0x1.25d322p-22f, 0.0f, 0.0f, 0.0f, 0x1.6b7506p-46f,
     0x1.2f387ap-106f, 0x1.944f3cp-28f, 0.0f, 0x1.6970acp-117f, 0x1.355dep-100f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.505eaep-28f, 0x1.79591ep-26f, 0x1.8cc75ep-30f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ca5cfp-16f, 0x1.c5fbbep-89f, 0x1.17f8bep-82f, 0x1.d01cfep-63f,
     0x1.191a9ep-57f, 0.0f, 0.0f, 0x1.f8649ap-75f, 0.0f, 0x1.3c1bf8p-86f,
     0x1.899e5ep-66f, 0x1.17e388p-35f, 0x1.5fc0e6p-65f, 0x1.17a70cp-8f, 0x1.6fc9ap-1f,
     0x1.2c13a6p-23f, 0x1.2c68d2p-82f, 0x1.f5d31ep-53f, 0.0f, 0.0f, 0x1.f63732p-33f,
     0x1.32ed86p-120f, 0x1.761fc6p-44f, 0x1.848866p-56f, 0.0f, 0.0f, 0.0f,
     0x1.448ea6p-44f, 0.0f, 0.0f, 0x1.6a195ap-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.10096cp-45f, 0.0f, 0.0f, 0x1.0c242ap-4f, 0.0f, 0.0f, 0.0f, 0x1.f392d2p-36f,
     0x1.39e684p-71f, 0.0f, 0x1.7c7daep-97f, 0x1.3da262p-24f, 0x1.f99f9p-63f, 0.0f,
     0x1.27875p-31f, 0x1.87db42p-93f, 0x1.b50636p-124f, 0.0f, 0x1.91a366p-41f, 0.0f,
     0.0f, 0.0f, 0x1.933b3p-41f, 0.0f, 0x1p0f, 0x1.ef23fp-109f, 0x1.fb2a12p-59f, 0.0f,
     0.0f, 0.0f, 0x1.f4963ap-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.505d9p-60f, 0.0f, 0.0f,
     0.0f, 0x1.bc8612p-77f, 0x1.542448p-19f, 0.0f, 0.0f, 0x1.5f3decp-25f,
     0x1.77a46ep-69f, 0x1.860054p-18f, 0.0f, 0.0f, 0x1.78664ep-21f, 0x1.8cee3ep-85f,
     0x1.59036cp-26f, 0.0f, 0x1.a9138p-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d40758p-42f,
     0x1.c66e1ap-104f, 0x1.210076p-6f, 0.0f, 0x1.f266b2p-92f, 0.0f, 0x1.efc3b2p-89f,
     0.0f, 0.0f, 0x1.654a86p-44f, 0.0f, 0.0f, 0.0f, 0x1.16d7p-41f, 0.0f, 0.0f,
     0x1.5d7d34p-104f, 0.0f, 0.0f, 0x1.31f5cp-63f, 0x1.d14e06p-103f, 0x1.fb5efep-74f,
     0x1.d14c88p-77f, 0.0f, 0.0f, 0x1.19bcfp-81f, 0.0f, 0.0f, 0x1.c6e80ap-111f, 0.0f,
     0x1.5bdf6ap-119f, 0x1.c6d204p-122f, 0x1.b83ddap-25f, 0.0f, 0.0f,
     0x1.92501cp-100f, 0x1.de5b2ap-55f, 0.0f, 0.0f, 0x1.b73ddap-50f, 0.0f,
     0x1.b73c98p-20f, 0x1.c515e6p-58f, 0x1.12de7ap-67f, 0.0f, 0x1.490394p-41f, 0.0f,
     0x1.0a3142p-35f, 0x1.d9d048p-87f, 0x1.0fcd44p-59f, 0.0f, 0x1.8b78cp-100f, 0.0f,
     0.0f, 0.0f, 0x1.fdd03ep-30f, 0.0f, 0x1.79fed6p-43f, 0.0f, 0x1.51eddep-51f, 0.0f,
     0.0f, 0x1.0e6226p-49f, 0.0f, 0.0f, 0.0f, 0x1.cf9a92p-63f, 0.0f, 0x1.dc8746p-40f,
     0x1.2ae066p-42f, 0x1.730e5p-3f, 0.0f, 0x1.379d0ap-70f, 0.0f, 0.0f,
     0x1.a810d6p-30f, 0.0f, 0.0f, 0.0f, 0x1.4da0fp-26f, 0.0f, 0x1.9dd8f8p-77f,
     0x1.a36286p-28f, 0x1.75c228p-59f, 0x1.bf4cbap-66f, 0x1.9e76c2p-3f, 0.0f, 0.0f,
     0x1.735496p-32f, 0.0f, 0x1.cbcd7p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b1a43cp-19f,
     0.0f, 0.0f, 0.0f, 0x1.fb7cfp-35f, 0.0f, 0.0f, 0x1.31dc8ep-107f, 0x1.648d9ap-10f,
     0.0f, 0.0f, 0.0f, 0x1.97c404p-48f, 0x1.cbe46p-82f, 0x1.ff8d2cp-62f, 0.0f,
     0x1.10840ap-79f, 0x1.3e9c5ap-125f, 0x1.c4c908p-103f, 0x1.584ab2p-82f,
     0x1.af35fep-65f, 0x1.193f14p-85f, 0.0f, 0x1.c57e1ep-56f, 0.0f, 0.0f, 0.0f,
     0x1.5d545ep-107f, 0x1.c38ab8p-95f, 0.0f, 0.0f, 0.0f, 0x1.9508a6p-6f, 0.0f,
     0x1.b1b5bp-79f, 0.0f, 0x1.573ec4p-100f, 0x1.30540cp-31f, 0.0f, 0.0f,
     0x1.0fca1ep-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dbaa3ap-62f, 0.0f,
     0x1.ddd0ccp-54f, 0x1.03574cp-119f, 0x1.d84598p-51f, 0x1.4d99acp-97f,
     0x1.be3a4cp-26f, 0.0f, 0x1.8258fap-27f, 0.0f, 0x1.070d9ep-126f, 0x1.c4cc1ap-52f,
     0x1.4798f2p-86f, 0.0f, 0x1.b7118ap-92f, 0x1.f91414p-107f, 0x1.2821a2p-58f, 0.0f,
     0x1.a34dacp-111f, 0.0f, 0.0f, 0.0f, 0x1.51a6d6p-125f, 0x1.afefcp-120f,
     0x1.f40c6p-48f, 0.0f, 0.0f, 0x1.dacccep-62f, 0.0f, 0x1.36cb36p-17f, 0.0f,
     0x1.ce6b3cp-66f, 0.0f, 0.0f, 0x1.6c350ep-68f, 0x1.160cd2p-20f, 0x1.949acep-5f,
     0.0f, 0.0f, 0.0f, 0x1.bb449ap-11f, 0x1.1951b4p-55f, 0.0f, 0x1.bf3fcp-27f, 0.0f,
     0x1.f5df8p-9f, 0.0f, 0.0f, 0.0f, 0x1.c841d2p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.0cd308p-67f, 0x1.6305f6p-116f, 0x1.f8b8b8p-79f, 0x1.8d60f8p-46f, 0.0f,
     0x1.872aa4p-10f, 0.0f, 0x1.6004fep-17f, 0x1.e89d84p-116f, 0x1.9307c2p-95f,
     0x1.13507ap-70f, 0x1.35d024p-78f, 0.0f, 0.0f, 0.0f, 0x1.3c8132p-16f, 0.0f, 0.0f,
     0x1.cbf356p-12f, 0.0f, 0x1.bce80ep-22f, 0.0f, 0x1.e3db54p-124f, 0.0f,
     0x1.394a7cp-70f, 0.0f, 0x1.f8a7dcp-106f, 0x1.0339f4p-17f, 0x1.a3ac2ep-28f,
     0x1.0a651p-18f, 0.0f, 0x1.4ddd04p-96f, 0.0f, 0x1.6a3c6ap-9f, 0.0f, 0.0f,
     0x1.f80e82p-59f, 0.0f, 0x1.72057cp-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f
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
            tmp1 = Sleef_finz_coshf4_u10avx2128(tmp0);
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
    printf("Sleef_finz_coshf4_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_coshf4_u10avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
