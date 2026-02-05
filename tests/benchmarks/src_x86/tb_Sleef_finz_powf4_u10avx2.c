/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_powf4_u10avx2128.c --function Sleef_finz_powf4_u10avx2128 \
 *     --arity 2 --headers sleef.h,ml_support_lib.h --input-formats \
 *     binary32,binary32 --vector-size 4 --function-input-vector-size 4 \
 *     --bench --no-embedded-bin --target x86_avx2128
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
     0.0f, 0x1.2a0cb6p-14f, 0x1.3d09ep-55f, 0.0f, 0x1.bcc65cp-9f, 0x1.d88d7p-75f,
     0.0f, 0.0f, 0x1.a8b064p-7f, 0.0f, 0.0f, 0x1.85c1aep-42f, 0.0f, 0x1.963c52p-14f,
     0x1.4e64dap-32f, 0x1.ff9666p-88f, 0.0f, 0x1.b45fc4p-114f, 0x1.bbe72ep-107f,
     0x1.1a6d34p-14f, 0x1.60d71p-81f, 0.0f, 0.0f, 0.0f, 0x1.79d948p-47f,
     0x1.028b7ep-19f, 0.0f, 0.0f, 0.0f, 0x1.bea474p-16f, 0.0f, 0x1.28eb1p-16f,
     0x1.6b888ep-119f, 0x1.d90522p-114f, 0x1.e4838ep-81f, 0.0f, 0.0f, 0.0f,
     0x1.483d08p-100f, 0.0f, 0x1.ba6836p-123f, 0.0f, 0.0f, 0x1.86cc5ap-106f,
     0x1.8f8fe8p-46f, 0.0f, 0x1.e7c1aep-76f, 0x1.750afp-112f, 0.0f, 0x1.1edf9p-79f,
     0x1.8639dcp-96f, 0.0f, 0x1.1e8fdap-24f, 0.0f, 0x1.0f551ap-64f, 0.0f, 0.0f,
     0x1.3b2baap-25f, 0x1.3c273p-82f, 0x1.78d13p-8f, 0x1.14b942p-112f,
     0x1.85152cp-60f, 0.0f, 0x1.b77fe8p-71f, 0x1.f316fep-48f, 0.0f, 0x1.77727cp-5f,
     0.0f, 0x1.bd01e2p-11f, 0.0f, 0x1.a8416p-19f, 0x1.35f3dep-70f, 0x1.5c198ep-121f,
     0.0f, 0.0f, 0x1.b7d07ap-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0417c6p-87f,
     0x1.1fc878p-56f, 0x1.548bf4p-21f, 0x1.de6bd4p-69f, 0x1.e631f6p-118f, 0.0f,
     0x1.55002p-12f, 0x1.22cc4p-14f, 0.0f, 0x1.4c2ccp-82f, 0x1.f24758p-64f,
     0x1.e69c92p-32f, 0.0f, 0x1.8fe312p-38f, 0.0f, 0x1.6b6c44p-9f, 0.0f,
     0x1.98de7ep-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2db074p-29f, 0.0f, 0x1.4534aap-118f,
     0x1.d087p-54f, 0.0f, 0.0f, 0x1.41e4bap-33f, 0.0f, 0.0f, 0x1.5a18fep-20f, 0.0f,
     0x1.b1d69p-76f, 0x1.cea42cp-68f, 0x1.4c64d4p-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.37b85ep-105f, 0x1.b5d34p-56f, 0.0f, 0x1.5f51fcp-79f, 0.0f,
     0x1.f9690ep-74f, 0.0f, 0x1.6ba37p-113f, 0x1.8bb3f6p-115f, 0x1.767448p-92f, 0.0f,
     0x1.ab4332p-20f, 0.0f, 0.0f, 0x1.860822p-8f, 0x1.ef8fc6p-78f, 0x1p0f, 0.0f,
     0x1.ed3fcep-45f, 0.0f, 0x1.cf102p-59f, 0x1.506a5cp-120f, 0x1.c199a2p-21f,
     0x1.b140b2p-75f, 0x1.c91c7cp-32f, 0.0f, 0.0f, 0x1.da836cp-53f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.67eea8p-115f, 0.0f, 0x1.2b3b58p-122f, 0.0f, 0x1.c5b132p-103f,
     0x1.9f4bbcp-61f, 0.0f, 0x1.288b16p-27f, 0.0f, 0x1.596da2p-41f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a518f8p-123f, 0.0f, 0.0f, 0.0f, 0x1.57502p-15f,
     0x1.6e61c6p-50f, 0x1.97b95ep-123f, 0.0f, 0x1.5a1236p-12f, 0.0f, 0.0f,
     0x1.ae4b04p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d1a25p-105f,
     0x1.d06d2ap-20f, 0x1.83a918p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.44fdc8p-117f,
     0.0f, 0x1.acdd4cp-114f, 0.0f, 0.0f, 0x1.81e086p-123f, 0.0f, 0.0f,
     0x1.caad96p-72f, 0x1.b4657ap-112f, 0x1.789f92p-69f, 0.0f, 0x1.1afb94p-76f,
     0x1.714414p-80f, 0x1.494afap-62f, 0x1.9d08acp-57f, 0x1.4df332p-61f, 0.0f,
     0x1.8a98dp-103f, 0x1.e2225ap-30f, 0x1.a62fd2p-106f, 0x1.f2472p-65f, 0.0f, 0.0f,
     0x1.364bc2p-10f, 0x1.065022p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4fdec8p-64f,
     0x1.1776dap-42f, 0x1.097c54p-46f, 0x1.82dee8p-84f, 0.0f, 0.0f, 0x1.b2a786p-75f,
     0x1.703f0ep-95f, 0x1.ab982cp-74f, 0x1.78d1fep-18f, 0x1.51c34ap-65f,
     0x1.b63dc4p-18f, 0.0f, 0x1.5222a6p-59f, 0x1.d1002p-26f, 0.0f, 0.0f,
     0x1.7dcf8ep-52f, 0x1.6d7c02p-25f, 0.0f, 0.0f, 0.0f, 0x1.1be708p-74f, 0.0f, 0.0f,
     0x1.25d332p-80f, 0.0f, 0.0f, 0.0f, 0x1.1696f4p-98f, 0x1.26abbcp-48f,
     0x1.31e734p-106f, 0x1.32a7dp-97f, 0.0f, 0x1.d1f1d6p-69f, 0.0f, 0.0f,
     0x1.4fc3dap-21f, 0x1.bde7fap-86f, 0x1.6f64b8p-89f, 0x1.536374p-116f, 0.0f,
     0x1.081dbap-31f, 0x1.47af7cp-97f, 0x1.900624p-52f, 0.0f, 0x1.0e3184p-56f,
     0x1.b81f9ap-103f, 0.0f, 0x1.27b64p-7f, 0x1.90ee2ap-20f, 0.0f, 0x1.dcbe48p-26f,
     0x1.043232p-45f, 0x1.c894c4p-43f, 0x1.225b6ap-27f, 0.0f, 0.0f, 0x1.2414a6p-95f,
     0.0f, 0x1.e50392p-39f, 0.0f, 0.0f, 0x1.5234e4p-5f, 0.0f, 0.0f, 0.0f,
     0x1.d1a3dap-105f, 0x1.7f14e2p-81f, 0.0f, 0.0f, 0x1.e49e98p-75f, 0.0f,
     0x1.fc9feap-84f, 0.0f, 0x1.44982ap-110f, 0.0f, 0x1.7a5acp-13f, 0x1.0ffd4ep-46f,
     0x1.e59c58p-95f, 0x1.49f908p-2f, 0.0f, 0.0f, 0x1.55c8eap-96f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.63d9aap-76f, 0x1.eee748p-48f, 0x1.4672d8p-41f, 0x1.382e44p-51f, 0.0f,
     0x1.16bce2p-60f, 0x1.fd9c76p-45f, 0.0f, 0.0f, 0x1.15493ap-30f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5d9a92p-105f, 0.0f, 0x1.086496p-53f, 0.0f,
     0.0f, 0x1.b1c3cap-117f, 0x1.9d057cp-90f, 0x1.a7dc7p-101f, 0x1.75f5dp-119f, 0.0f,
     0.0f, 0x1.0ac74p-40f, 0.0f, 0.0f, 0x1.f40734p-115f, 0.0f, 0x1.c4887p-119f,
     0x1.181f9p-42f, 0x1.fbe158p-61f, 0x1.d29bdcp-75f, 0.0f, 0.0f, 0x1.3ebb78p-2f,
     0.0f, 0.0f, 0.0f, 0x1.3e9264p-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.078976p-16f,
     0x1.941be4p-43f, 0x1.89075p-24f, 0.0f, 0x1.478882p-6f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.09ec8ep-40f, 0x1.0cd65ap-33f, 0x1.f7587cp-50f, 0.0f, 0.0f,
     0x1.8c2642p-126f, 0x1.48dcfcp-73f, 0x1.c94d82p-38f, 0.0f, 0x1.64241cp-58f, 0.0f,
     0.0f, 0x1.918956p-122f, 0x1.3883e6p-45f, 0x1.6c7daap-15f, 0x1.f61ca2p-80f, 0.0f,
     0.0f, 0x1.01256cp-99f, 0.0f, 0x1.07b71cp-90f, 0x1.873034p-19f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a1cc3ep-56f, 0x1.d0abf8p-51f, 0x1.01ff8cp-35f, 0.0f, 0x1.8ee47ap-27f,
     0x1.f3fa8cp-30f, 0.0f, 0.0f, 0x1.464c14p-1f, 0.0f, 0.0f, 0x1.f47408p-7f,
     0x1.6601fap-107f, 0x1.1ae25ep-68f, 0x1.a7e564p-16f, 0x1.38a26ep-123f,
     0x1.dfc39ap-19f, 0x1.e42dd4p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f67df6p-2f,
     0.0f, 0.0f, 0x1.8398fep-103f, 0x1.59a162p-92f, 0x1.a822f2p-115f, 0x1.74f45ep-41f,
     0.0f, 0.0f, 0x1.b251d4p-120f, 0.0f, 0x1.040dccp-11f, 0x1.a67858p-99f, 0.0f,
     0x1.b751fep-6f, 0x1.aa43bcp-63f, 0x1.3f7abap-40f, 0x1.b613fcp-7f, 0.0f,
     0x1.aa6498p-113f, 0x1.9d95e2p-88f, 0.0f, 0x1.185034p-59f, 0x1.849b58p-24f, 0.0f,
     0x1.c3db16p-101f, 0.0f, 0x1.25b48cp-46f, 0x1.16698ap-69f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.3c07acp-26f, 0x1.103b8cp-110f, 0x1.b97712p-26f, 0x1.87f0f6p-44f,
     0x1.d8b1f8p-113f, 0.0f, 0x1.a50f0cp-28f, 0x1.e6e53ep-105f, 0.0f, 0.0f,
     0x1.0e867cp-11f, 0x1.959e28p-24f, 0.0f, 0x1.2f6a22p-43f, 0.0f, 0x1.d27186p-62f,
     0x1.2c8aecp-123f, 0x1.6582a2p-120f, 0x1.87317p-58f, 0.0f, 0.0f, 0x1.4f279ap-6f,
     0.0f, 0.0f, 0.0f, 0x1.66a3cap-76f, 0x1.87c012p-91f, 0x1.c501fcp-75f,
     0x1.1d073p-5f, 0.0f, 0.0f, 0x1.e18c0cp-78f, 0.0f, 0x1.f475c4p-22f, 0.0f,
     0x1.b7db86p-79f, 0x1.519aa4p-87f, 0x1.4de3d8p-105f, 0x1.3f0a08p-95f, 0.0f,
     0x1.be4424p-92f, 0x1.8c4a56p-118f, 0.0f, 0.0f, 0x1.31f14cp-30f, 0.0f, 0.0f, 0.0f,
     0x1.5c876ap-97f, 0x1.12a2bp-42f, 0x1.ade554p-45f, 0.0f, 0x1.f7cfe2p-111f,
     0x1.85a4fp-112f, 0x1.88a3c8p-122f, 0x1.191beap-33f, 0.0f, 0.0f, 0x1.98d1p-67f,
     0.0f, 0x1.c4cdcap-32f, 0x1.aa60cep-85f, 0x1.c03ac8p-47f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.46ec4ep-50f, 0x1.07d3bcp-82f, 0x1.d4a03cp-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b66ab2p-95f, 0.0f, 0.0f, 0x1.c69a12p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c7deecp-104f, 0.0f, 0x1.c25b64p-48f, 0.0f, 0x1.f7e1bap-39f, 0.0f, 0.0f,
     0x1.c743aap-34f, 0x1.597286p-1f, 0.0f, 0x1.4a951cp-18f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.44a44ap-33f, 0x1.749a86p-24f, 0x1.828674p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.5f86e8p-44f, 0.0f, 0.0f, 0.0f, 0x1.567d14p-96f, 0.0f, 0x1.e5c398p-77f,
     0.0f, 0.0f, 0.0f, 0x1.67a232p-71f, 0.0f, 0.0f, 0x1.0ade7cp-86f, 0x1.c3c784p-46f,
     0x1.7aec4cp-99f, 0x1.8c91e4p-14f, 0.0f, 0x1.412ebap-85f, 0.0f, 0x1.f9b454p-109f,
     0.0f, 0.0f, 0x1.78b8e8p-15f, 0x1.1d141ep-44f, 0x1.99bf16p-4f, 0x1.eb5324p-42f,
     0x1.19339ep-109f, 0x1.58c8c2p-16f, 0x1.4eb37p-7f, 0x1.bd5fp-4f, 0x1.1d8ec8p-92f,
     0.0f, 0.0f, 0x1.04e50ap-25f, 0.0f, 0.0f, 0x1.541a7p-64f, 0.0f, 0.0f, 0.0f,
     0x1.dd55f2p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.64b238p-77f, 0.0f, 0.0f,
     0x1.943014p-85f, 0.0f, 0x1.c313fp-47f, 0x1.d46ee2p-16f, 0.0f, 0x1p0f, 0.0f, 0.0f,
     0.0f, 0x1.829568p-28f, 0x1.208d96p-124f, 0.0f, 0x1.e02e8cp-51f, 0x1.74d2a8p-45f,
     0x1.c385a8p-18f, 0.0f, 0x1.19d15p-123f, 0.0f, 0.0f, 0x1.67e58ep-20f,
     0x1.f7ce26p-19f, 0.0f, 0x1.db9e78p-26f, 0x1.97178ap-74f, 0.0f, 0.0f, 0.0f,
     0x1.4824ep-105f, 0.0f, 0x1.1d5fbp-19f, 0x1.a18832p-64f, 0x1.d713fep-48f,
     0x1.7619a2p-37f, 0.0f, 0x1.9b5b6ap-125f, 0x1.eaf166p-95f, 0x1.2becc8p-11f,
     0x1.de1a4cp-54f, 0x1.f73bcep-76f, 0.0f, 0.0f, 0x1.035e6ep-18f, 0x1.16609cp-32f,
     0.0f, 0x1.229d44p-38f, 0x1.7a7f08p-28f, 0.0f, 0x1.ec561p-43f, 0x1.9dd33ep-15f,
     0x1.7ff6e4p-100f, 0.0f, 0.0f, 0x1.70d96ep-1f, 0.0f, 0x1.ef12ap-41f,
     0x1.241faep-31f, 0.0f, 0x1.02da68p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3bbdacp-43f,
     0.0f, 0x1.07692ep-36f, 0.0f, 0.0f, 0x1.e08422p-38f, 0x1.0d7058p-48f, 0.0f, 0.0f,
     0.0f, 0x1.f29f46p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7843b6p-109f,
     0x1.ce91f4p-116f, 0.0f, 0x1.130674p-104f, 0x1.2cca3cp-97f, 0x1.7a2a56p-106f,
     0x1.ad521ap-68f, 0.0f, 0.0f, 0x1.0134a6p-33f, 0.0f, 0x1.aa5e5cp-24f, 0.0f, 0.0f,
     0x1.4438a8p-99f, 0x1.5fccap-33f, 0x1.2b44c6p-92f, 0.0f, 0x1.2e125ap-20f, 0.0f,
     0.0f, 0x1.e8b288p-111f, 0.0f, 0.0f, 0x1.b5568ap-28f, 0x1.3cef96p-32f,
     0x1.e200fep-22f, 0x1.fb66ccp-120f, 0.0f, 0x1.23cd16p-67f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d56ee4p-122f, 0x1.6b8dc2p-2f, 0x1.465706p-91f, 0x1.8db106p-74f,
     0x1.b209bep-45f, 0x1.5535fep-27f, 0x1.43d6eep-46f, 0x1.146612p-90f,
     0x1.227456p-75f, 0x1.4bbe66p-46f, 0x1.a6c614p-69f, 0.0f, 0.0f, 0x1.985cc4p-63f,
     0.0f, 0x1.df5156p-22f, 0.0f, 0.0f, 0x1.1c78dp-122f, 0x1.430d8ap-54f,
     0x1.566308p-64f, 0.0f, 0x1.536b4p-92f, 0.0f, 0.0f, 0x1.8cce5cp-75f,
     0x1.1fa9e2p-23f, 0.0f, 0.0f, 0x1.b9ec9ap-102f, 0.0f, 0.0f, 0.0f, 0x1.437bbp-45f,
     0x1.8a2bf6p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bfca5ep-120f, 0.0f,
     0x1.469d34p-118f, 0.0f, 0x1.e1e39p-104f, 0.0f, 0.0f, 0x1.1db1aap-82f, 0.0f,
     0x1.c383cap-82f, 0.0f, 0x1.c709e4p-6f, 0.0f, 0x1.b2dd62p-92f, 0.0f,
     0x1.a1ea32p-110f, 0.0f, 0.0f, 0x1.7486e6p-58f, 0.0f, 0x1.008114p-98f, 0.0f,
     0x1.97db26p-99f, 0x1.1f5bdep-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.609112p-28f, 0.0f, 0x1.f8299ep-78f, 0.0f, 0.0f, 0.0f, 0x1.65bc92p-74f,
     0x1.23287cp-44f, 0.0f, 0x1.8f0414p-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e7882p-5f,
     0x1.6eba78p-40f, 0x1.da1c82p-67f, 0.0f, 0x1.d97648p-43f, 0x1.c2a592p-117f, 0.0f,
     0x1.cdcdd6p-6f, 0x1.694672p-48f, 0x1.8d4b54p-114f, 0.0f, 0x1.83b626p-31f, 0.0f,
     0x1.af4706p-38f, 0.0f, 0x1.d68fe6p-119f, 0x1.a9a57ap-38f, 0x1.1c9014p-74f,
     0x1.15ddb2p-94f, 0.0f, 0x1.d036ep-71f, 0.0f, 0.0f, 0x1.c5c192p-57f,
     0x1.0b30bap-12f, 0x1.433048p-114f, 0x1.8808f6p-54f, 0.0f, 0.0f, 0x1.b07aep-7f,
     0.0f, 0.0f, 0x1.35f40ep-114f, 0.0f, 0x1.bac5d4p-120f, 0.0f, 0.0f,
     0x1.74346ap-18f, 0x1.736d88p-39f, 0.0f, 0x1.409cb2p-79f, 0x1.23ae14p-9f,
     0x1.7e6068p-112f, 0.0f, 0.0f, 0x1.80fc28p-103f, 0x1.33aff4p-66f, 0.0f,
     0x1.14b7ep-25f, 0x1.abf012p-10f, 0.0f, 0.0f, 0x1.152346p-57f, 0.0f, 0.0f,
     0x1.4db842p-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1c5348p-48f, 0.0f, 0x1.8e84a8p-57f,
     0.0f, 0x1.217c46p-10f, 0x1.88a738p-13f, 0x1.098218p-94f, 0x1.3651d8p-29f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.583f28p-15f, 0x1.88023cp-43f, 0.0f, 0.0f,
     0x1.f32634p-39f, 0.0f, 0.0f, 0x1.36015ep-9f, 0.0f, 0x1.1c96dap-81f,
     0x1.293366p-31f, 0x1.e4762ep-70f, 0.0f, 0.0f, 0x1.944834p-117f, 0.0f,
     0x1.394b2ap-13f, 0.0f, 0.0f, 0.0f, 0x1.8c04dap-49f, 0x1.e27fe2p-13f,
     0x1.9ccc2cp-15f, 0.0f, 0x1.995424p-1f, 0x1.b701acp-59f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f0461ap-23f, 0x1.fda8b6p-106f, 0x1.7f0fdep-72f, 0.0f, 0x1.d2e9bp-123f,
     0x1.93facap-46f, 0x1.d3ea4ep-50f, 0.0f, 0x1.6f8718p-46f, 0x1.5c03bap-109f,
     0x1.cf6564p-96f, 0x1.208f18p-16f, 0.0f, 0.0f, 0.0f, 0x1.90ed5ap-58f,
     0x1.3510dep-49f, 0.0f, 0x1.74d80ep-70f, 0x1.1bd5bp-36f, 0.0f, 0x1.c0a8cp-51f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.693002p-40f,
     0x1.f6a0e6p-104f, 0x1.c3a95ep-24f, 0x1.925bacp-71f, 0.0f, 0x1.70df0ap-17f,
     0x1.f8304ep-86f, 0x1.5cb55cp-70f, 0.0f, 0x1.39c68cp-82f, 0x1.165072p-113f, 0.0f,
     0.0f, 0x1.051e04p-55f, 0.0f, 0x1.6b9526p-65f, 0x1.b747c6p-28f, 0.0f,
     0x1.41dfe2p-96f, 0x1.3b5814p-48f, 0x1.2c47d2p-44f, 0.0f, 0x1.8cdafep-8f, 0.0f,
     0.0f, 0.0f, 0x1.e44212p-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.69f278p-2f,
     0x1.b324e8p-67f, 0.0f, 0x1.16fa2cp-54f, 0.0f, 0x1.ed3442p-53f, 0.0f, 0.0f, 0.0f,
     0x1.fd104cp-78f, 0x1.79aaap-77f, 0x1.73d24ap-8f, 0x1.025f1p-40f, 0x1.29b352p-3f,
     0x1.e70dbap-16f, 0.0f, 0.0f, 0.0f, 0x1.e56514p-35f, 0.0f, 0x1.e3fd26p-108f,
     0x1.68cd86p-74f, 0x1.82ce0ap-67f, 0.0f, 0x1.d272fp-57f, 0.0f, 0.0f
};
static const float external_bench_wrapper_input_table_arg1[1004]  = {
     0x1.66a9f2p-21f, 0x1.1ca8ap-93f, 0x1.c1b316p-76f, 0x1.4fdef6p-64f,
     0x1.fc10aap-115f, 0x1.448868p-118f, 0.0f, 0.0f, 0x1.ee6c8ep-57f, 0.0f,
     0x1.f48686p-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.499176p-122f, 0x1.fa4878p-6f, 0x1.e4beecp-87f, 0.0f, 0.0f, 0x1.5ff636p-110f,
     0.0f, 0x1.cb1362p-97f, 0x1.90c0eap-73f, 0x1.21d1bap-62f, 0.0f, 0.0f, 0.0f,
     0x1.9cecfp-91f, 0x1.d718cp-68f, 0x1.e050dap-105f, 0.0f, 0x1.f78bb8p-75f, 0.0f,
     0x1.d540bep-74f, 0x1.a97e08p-88f, 0x1.0c44d8p-51f, 0x1.80db4p-120f, 0.0f, 0.0f,
     0.0f, 0x1.db9ec6p-87f, 0.0f, 0x1.25a08ap-107f, 0.0f, 0.0f, 0x1.6eddeep-83f,
     0x1.dbec92p-86f, 0x1.01703cp-85f, 0.0f, 0x1.c0e074p-83f, 0.0f, 0.0f, 0.0f,
     0x1.fde58cp-10f, 0x1.c569dep-88f, 0x1.3ca942p-71f, 0x1.5fd144p-38f,
     0x1.f8d1aap-31f, 0.0f, 0.0f, 0.0f, 0x1.921c4ep-118f, 0x1.2e7642p-13f,
     0x1.212386p-91f, 0x1.fdfe18p-119f, 0.0f, 0x1.bb433cp-109f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c1ae9cp-12f, 0x1.32ec7cp-30f, 0.0f, 0.0f, 0.0f, 0x1.a77e9p-12f, 0.0f,
     0x1.a86746p-108f, 0x1.724cf2p-126f, 0x1.a7a67p-116f, 0x1.47b68ep-125f, 0.0f,
     0.0f, 0x1.dc1722p-76f, 0.0f, 0x1.758392p-86f, 0x1.a561c2p-62f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3865bp-50f, 0.0f, 0x1.145e4ep-28f, 0x1.fa343p-57f,
     0x1.83f4a4p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.551596p-37f, 0.0f, 0x1.5cdbc4p-23f,
     0x1.333962p-64f, 0.0f, 0.0f, 0x1.4b776cp-57f, 0.0f, 0.0f, 0.0f, 0x1.04c618p-82f,
     0x1.d1fbeap-103f, 0x1.c8c4c8p-111f, 0.0f, 0x1.fcb482p-10f, 0x1.64d6e4p-63f, 0.0f,
     0.0f, 0x1.8b3eb8p-56f, 0x1.6bb0bp-78f, 0x1.5f077ep-122f, 0x1.ff5e26p-122f,
     0x1.91e26p-20f, 0.0f, 0x1.2cdefp-93f, 0x1.73698cp-20f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0c2a76p-37f, 0x1.d6c9f6p-92f, 0x1.01a5ccp-92f, 0.0f, 0.0f, 0.0f,
     0x1.ba1814p-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9c9a06p-95f, 0.0f, 0.0f,
     0x1.855272p-74f, 0x1.d01f8cp-37f, 0x1.caf41ap-97f, 0x1.7e1578p-13f, 0.0f,
     0x1.33a438p-81f, 0.0f, 0.0f, 0x1.882436p-46f, 0x1.5a9386p-103f, 0x1.50379p-61f,
     0.0f, 0.0f, 0.0f, 0x1.33cbb4p-25f, 0x1.288fa4p-65f, 0x1.db8d76p-107f, 0.0f, 0.0f,
     0.0f, 0x1.3fa76ep-81f, 0x1.28e6c2p-10f, 0x1.4ddb6ap-32f, 0x1.f59052p-89f,
     0x1.6c786ap-102f, 0x1.efb066p-51f, 0x1.f85d82p-23f, 0x1.4cfa4cp-85f, 0x1p0f,
     0x1.b871e4p-23f, 0.0f, 0.0f, 0x1.8e5282p-44f, 0x1.a23bep-103f, 0x1.c8df8ap-85f,
     0.0f, 0x1.65c7cap-74f, 0x1.183494p-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b59392p-36f,
     0x1.7c9842p-57f, 0.0f, 0x1.432da6p-34f, 0x1.a25c0ep-120f, 0x1.29fdc8p-106f, 0.0f,
     0x1.60df02p-100f, 0x1.4484dap-94f, 0x1.f78af2p-60f, 0.0f, 0x1.83f8bap-69f,
     0x1.e4339ep-78f, 0.0f, 0x1.2fcbc4p-68f, 0.0f, 0x1.a1eddcp-15f, 0x1.5f7d34p-52f,
     0x1.0a75eep-74f, 0.0f, 0.0f, 0.0f, 0x1.454fd6p-22f, 0x1.22825ep-84f,
     0x1.7ade72p-121f, 0.0f, 0.0f, 0x1.47f8cap-73f, 0.0f, 0x1.2ba20ap-53f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b3934p-26f, 0x1.87051ap-6f, 0x1.c4975cp-121f,
     0x1.3e5fd4p-30f, 0.0f, 0.0f, 0x1.399da8p-90f, 0.0f, 0x1.cedc02p-119f,
     0x1.6a63dep-111f, 0x1.bd5ddcp-83f, 0.0f, 0x1.878d5ap-21f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9cb8dcp-24f, 0x1.363f46p-106f, 0x1.27a1ep-100f, 0x1.9f1d5p-52f,
     0x1.39e4a6p-22f, 0x1.d9ea66p-95f, 0.0f, 0.0f, 0x1.15c812p-95f, 0x1.865112p-123f,
     0.0f, 0x1.145a72p-126f, 0x1.8ad164p-85f, 0.0f, 0x1.1ae332p-122f, 0x1.1cd8c8p-81f,
     0.0f, 0x1.9af6c4p-86f, 0x1.3710ccp-64f, 0.0f, 0.0f, 0x1.46676ep-121f,
     0x1.57363ap-51f, 0x1.a50ea8p-11f, 0x1.6cc44cp-53f, 0.0f, 0x1.e6ea2ep-51f, 0.0f,
     0x1.da7a78p-85f, 0.0f, 0x1.85089ap-55f, 0x1.504a26p-106f, 0.0f, 0.0f, 0.0f,
     0x1.53d6a2p-83f, 0x1.75508ap-1f, 0x1.3fe7f8p-33f, 0x1.124f0ep-12f,
     0x1.cdb42ep-119f, 0x1.565752p-8f, 0x1.855322p-57f, 0.0f, 0x1.d99a64p-68f,
     0x1.9a1422p-53f, 0.0f, 0.0f, 0x1.80992cp-98f, 0x1.a3681ep-69f, 0.0f,
     0x1.bf538cp-23f, 0x1.19bde2p-27f, 0.0f, 0.0f, 0x1.662aaap-41f, 0x1.66bc74p-33f,
     0.0f, 0.0f, 0x1.b0508ap-44f, 0x1.10a474p-95f, 0.0f, 0.0f, 0x1.e202ecp-43f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e3748ep-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f23c7p-27f, 0x1.4a854ep-19f,
     0x1.c89d3ep-63f, 0.0f, 0.0f, 0x1.a25668p-13f, 0.0f, 0.0f, 0x1.0d1b5p-97f,
     0x1.14818ep-88f, 0.0f, 0x1.d529bp-118f, 0.0f, 0x1.ffc8bep-62f, 0x1.f45946p-11f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a074cap-48f, 0.0f, 0x1.bd452cp-123f,
     0x1.483efcp-77f, 0.0f, 0.0f, 0x1.82cde6p-73f, 0.0f, 0.0f, 0x1.469afp-107f, 0.0f,
     0x1.9da6b6p-106f, 0.0f, 0x1.fce2e4p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.20f9c2p-78f,
     0.0f, 0.0f, 0x1.b1bc6cp-107f, 0x1.bbfc5ap-88f, 0x1.0771bep-15f, 0.0f,
     0x1.578a76p-46f, 0x1.3a2406p-86f, 0.0f, 0x1.e1bd4ap-65f, 0x1.4b3e08p-94f,
     0x1.10edd8p-32f, 0x1.1a055ap-79f, 0.0f, 0x1.fa867p-36f, 0.0f, 0x1.83fc76p-22f,
     0.0f, 0x1.c64eacp-100f, 0.0f, 0x1.d6db9ep-40f, 0x1.b41df6p-100f, 0x1.4c266ap-91f,
     0x1.705924p-19f, 0x1.61a912p-83f, 0x1.69b718p-117f, 0.0f, 0.0f, 0x1.150c88p-6f,
     0.0f, 0x1.f9aee2p-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.88d2aep-21f, 0x1.2de8p-109f,
     0.0f, 0.0f, 0.0f, 0x1.199e9ep-59f, 0.0f, 0x1.583222p-42f, 0x1.204e1cp-100f, 0.0f,
     0.0f, 0x1.b99842p-53f, 0.0f, 0x1.f4c6aep-83f, 0x1.2bc9c6p-52f, 0x1.50a36ap-97f,
     0x1.6d3f8cp-80f, 0x1.e3e972p-40f, 0.0f, 0.0f, 0x1.54f232p-103f, 0.0f, 0.0f,
     0x1.b93598p-16f, 0x1.ffc65ap-77f, 0.0f, 0.0f, 0.0f, 0x1.2cd988p-106f,
     0x1.05667cp-77f, 0x1.288e8ep-2f, 0.0f, 0x1.76ac82p-61f, 0.0f, 0.0f,
     0x1.68a56cp-25f, 0x1.a67b8cp-78f, 0.0f, 0x1.564e88p-111f, 0x1.17e352p-115f,
     0x1.c71a7p-58f, 0x1.6eb0bp-41f, 0x1.fe6778p-29f, 0x1.f3ca72p-108f,
     0x1.ac20e2p-113f, 0x1.750cc2p-69f, 0x1.a0934ap-123f, 0x1.8564eep-72f, 0.0f, 0.0f,
     0x1.ea03dep-66f, 0x1.e73b3p-94f, 0.0f, 0x1.fc2234p-63f, 0.0f, 0x1.92d32cp-93f,
     0x1.b08a52p-95f, 0x1.055482p-52f, 0x1.6180e2p-71f, 0x1.f5389p-58f, 0.0f,
     0x1.014df2p-94f, 0.0f, 0x1.6a55dap-24f, 0x1.67bb82p-122f, 0.0f, 0.0f, 0.0f,
     0x1.b471eep-1f, 0x1.150c3p-23f, 0x1.af5002p-44f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.721f16p-107f, 0.0f, 0.0f, 0x1.32a5e8p-7f, 0.0f, 0.0f, 0x1.4bb13p-5f,
     0x1.9dc722p-96f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.e99274p-29f, 0.0f,
     0x1.8cd00cp-38f, 0.0f, 0x1.e87638p-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3a509p-113f, 0.0f, 0x1.5fcef4p-21f, 0x1.8cd132p-87f, 0x1.acb75p-104f,
     0x1.2b4ee6p-62f, 0x1.3cc056p-75f, 0.0f, 0.0f, 0x1.25986ap-95f, 0x1.27c254p-99f,
     0.0f, 0.0f, 0x1.59f5acp-104f, 0x1.2f757ep-38f, 0x1.7ba3b4p-72f, 0x1.789062p-76f,
     0x1.acb1f4p-12f, 0.0f, 0.0f, 0.0f, 0x1.593288p-13f, 0x1.8a5052p-89f, 0.0f,
     0x1.dc964cp-102f, 0x1.9c7474p-13f, 0x1.75b33cp-5f, 0x1.022394p-47f, 0.0f, 0.0f,
     0x1.fe912ap-33f, 0x1.abaa74p-104f, 0.0f, 0.0f, 0x1.a8681ep-100f,
     0x1.1c0baap-114f, 0.0f, 0.0f, 0.0f, 0x1.1774d4p-76f, 0.0f, 0x1.2ce9dp-22f,
     0x1.769a48p-23f, 0x1.d70366p-120f, 0.0f, 0x1.59f292p-98f, 0.0f, 0.0f, 0.0f,
     0x1.8b22bep-109f, 0.0f, 0.0f, 0.0f, 0x1.0abc4ep-25f, 0.0f, 0x1.40ff9p-40f,
     0x1.b3f55cp-31f, 0.0f, 0.0f, 0x1.bc6d32p-77f, 0x1.d41ea4p-108f, 0x1.c7b574p-58f,
     0x1.58d178p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dd2114p-44f, 0.0f,
     0x1.87f73cp-98f, 0.0f, 0x1.bb0aacp-20f, 0x1.038716p-126f, 0x1.143968p-14f, 0.0f,
     0.0f, 0.0f, 0x1.9884d4p-71f, 0x1.9e7f82p-10f, 0.0f, 0x1.a7d08cp-76f, 0.0f, 0.0f,
     0x1.74b6fcp-30f, 0.0f, 0x1.c4d382p-44f, 0x1.47b9ep-76f, 0.0f, 0x1.105a86p-21f,
     0.0f, 0.0f, 0x1.284d3ep-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3676cep-36f, 0.0f,
     0x1.36b778p-103f, 0x1.6a4296p-105f, 0.0f, 0x1.6702e8p-49f, 0.0f, 0.0f,
     0x1.55cec8p-49f, 0x1.054d0ap-59f, 0x1.33eceap-111f, 0x1.43a8acp-92f, 0.0f, 0.0f,
     0x1.ec92e2p-114f, 0x1.5efc2p-111f, 0.0f, 0.0f, 0.0f, 0x1.934bc6p-20f,
     0x1.773a1cp-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f9a298p-30f, 0.0f, 0.0f,
     0x1.74580ep-70f, 0.0f, 0x1.279bbap-70f, 0x1.82834p-84f, 0.0f, 0.0f,
     0x1.976f4p-125f, 0x1.62aa42p-34f, 0.0f, 0x1.3b866ep-28f, 0.0f, 0.0f,
     0x1.f10594p-86f, 0x1.4992c4p-66f, 0.0f, 0.0f, 0x1.3ebfdap-59f, 0.0f, 0.0f,
     0x1.7f5292p-31f, 0x1.708574p-8f, 0.0f, 0x1.beb598p-101f, 0.0f, 0.0f,
     0x1.33b5dep-104f, 0x1.8b27f8p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.70994cp-60f, 0x1.2aaf92p-70f, 0x1.902fe6p-10f, 0.0f, 0.0f, 0.0f,
     0x1.e5ddd6p-36f, 0x1.9107dp-115f, 0x1.ac0dc4p-16f, 0x1.feecep-123f,
     0x1.83d9e6p-53f, 0.0f, 0x1.e489d6p-4f, 0x1.bbbadap-61f, 0x1.9f1bf8p-55f, 0.0f,
     0.0f, 0.0f, 0x1.5cc222p-86f, 0.0f, 0x1.19a1b6p-54f, 0.0f, 0x1.155298p-48f,
     0x1.79a976p-15f, 0.0f, 0.0f, 0.0f, 0x1.280bfcp-41f, 0.0f, 0x1.41edd4p-40f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.fae0a2p-62f, 0x1.77652p-63f, 0.0f, 0x1.5282dcp-84f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.94d35ep-26f, 0x1.1ed41ap-21f, 0.0f, 0x1.8e07c4p-125f,
     0x1.022814p-115f, 0.0f, 0.0f, 0x1.bac75cp-101f, 0x1.12bd58p-4f, 0x1.d531f4p-87f,
     0x1.550398p-38f, 0.0f, 0.0f, 0.0f, 0x1.523e4ap-62f, 0.0f, 0x1.0fc3c2p-92f,
     0x1.5d977ap-83f, 0.0f, 0x1.1d4676p-62f, 0.0f, 0x1.3c3c38p-117f, 0x1.c6d236p-19f,
     0.0f, 0.0f, 0x1.12a908p-19f, 0x1.b2bbbp-18f, 0.0f, 0.0f, 0.0f, 0x1.0807b6p-56f,
     0.0f, 0.0f, 0x1.9791dap-125f, 0.0f, 0x1.67853ep-36f, 0x1.0b013cp-112f,
     0x1.00ba7cp-22f, 0.0f, 0x1.432c46p-4f, 0.0f, 0x1.6dabdep-83f, 0.0f,
     0x1.84f79ep-99f, 0.0f, 0x1.78038p-74f, 0x1.065e0ep-12f, 0.0f, 0.0f, 0.0f,
     0x1.ce2114p-8f, 0.0f, 0x1.92fd56p-4f, 0x1.470742p-44f, 0x1.f71118p-31f,
     0x1.73a9fcp-90f, 0x1.03aecap-95f, 0x1.a8f21ap-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.60e202p-91f, 0x1.50758ap-26f, 0.0f, 0x1.1c1aaap-92f, 0.0f, 0x1.a667d8p-47f,
     0x1.78db06p-73f, 0x1.909b2cp-84f, 0.0f, 0x1.a58c34p-76f, 0.0f, 0.0f,
     0x1.dc754cp-108f, 0x1.8642bp-21f, 0x1.8bd3e4p-62f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.244cfap-31f, 0x1.1c609p-61f, 0x1.3c1d0ep-34f, 0x1.68d9eep-61f, 0.0f,
     0x1.2b1866p-70f, 0.0f, 0x1.76e854p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b5112ap-111f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.634338p-39f,
     0x1.5dc106p-120f, 0x1.9b239ep-95f, 0.0f, 0.0f, 0.0f, 0x1.9af2ap-108f,
     0x1.969d4cp-85f, 0x1.060ddcp-125f, 0.0f, 0x1.00abc6p-8f, 0.0f, 0x1.8e62c4p-34f,
     0.0f, 0.0f, 0.0f, 0x1.4431aap-108f, 0x1.49b28cp-8f, 0x1.1633fp-13f,
     0x1.8538c4p-22f, 0.0f, 0.0f, 0x1.42fc7ep-21f, 0.0f, 0.0f, 0x1.caecccp-105f,
     0x1.c0f624p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e0544ep-50f, 0.0f, 0x1.f97684p-88f,
     0.0f, 0.0f, 0x1.e937c2p-56f, 0.0f, 0x1.c7d21cp-123f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.9c2318p-42f, 0x1.7a7f78p-16f, 0x1.a92dccp-36f, 0.0f, 0x1.c3da1ep-100f,
     0.0f, 0.0f, 0x1.7b63a4p-4f, 0x1.6ca88cp-73f, 0x1.ec3db6p-119f, 0.0f,
     0x1.9b80dep-47f, 0.0f, 0x1.b2090ep-47f, 0x1.259f6cp-38f, 0x1.06bf3cp-116f, 0.0f,
     0.0f, 0x1.b3b5b2p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9274f6p-11f, 0.0f,
     0x1.84853cp-10f, 0.0f, 0x1.54c9cap-23f, 0x1.282374p-62f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.645ca4p-55f, 0.0f, 0.0f, 0x1.d9dcep-115f, 0.0f, 0x1.af7888p-47f,
     0x1.a44fb2p-69f, 0.0f, 0x1.bca8cp-21f, 0x1.695aecp-78f, 0x1.4d299ep-42f, 0.0f,
     0.0f, 0.0f, 0x1.2ffbb6p-89f, 0.0f, 0x1.a93422p-103f, 0x1.8138ccp-113f,
     0x1.5c6b52p-74f, 0.0f, 0x1.4afe44p-110f, 0.0f, 0x1p0f, 0x1.38b45p-113f,
     0x1.7c4d16p-103f, 0.0f, 0x1.09b758p-84f, 0x1.9987ccp-101f, 0.0f, 0x1.5a00b4p-66f,
     0.0f, 0.0f, 0.0f, 0x1.de1c0ep-38f, 0x1.640546p-98f, 0.0f, 0x1.86822ep-12f,
     0x1.028b26p-39f, 0.0f, 0.0f, 0x1.69eeaep-103f, 0.0f, 0.0f, 0.0f, 0x1.6fc04ep-32f,
     0.0f, 0x1.18ba66p-22f, 0x1.75ca68p-116f, 0x1.869176p-84f, 0x1.af82cap-87f,
     0x1.568222p-38f, 0.0f, 0x1.74eae2p-50f, 0x1.e9c8fep-113f, 0.0f, 0x1.4540e4p-21f,
     0x1.475f8p-62f, 0x1.d0016cp-104f, 0x1.f28ff8p-103f, 0x1.6a885p-72f,
     0x1.718ce6p-45f, 0x1.0ab198p-66f, 0.0f, 0x1.386378p-19f, 0x1.70f898p-79f, 0.0f,
     0x1.671658p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.13f3f6p-60f, 0.0f, 0x1.6af7aap-55f,
     0x1.1c31ecp-116f, 0.0f, 0x1.f8fa86p-90f, 0x1.475d94p-28f, 0x1.37e1fap-101f,
     0x1.ab175p-68f, 0.0f, 0.0f, 0.0f, 0x1.62b3cap-107f, 0.0f, 0.0f, 0x1.486b36p-92f,
     0x1.2ac41p-6f, 0.0f, 0.0f, 0x1.7ac87ep-63f, 0.0f, 0x1.b9479ep-17f,
     0x1.d70eccp-122f, 0.0f, 0.0f, 0.0f, 0x1.f520e2p-91f, 0x1.6da884p-19f, 0.0f,
     0x1.c199aap-35f, 0.0f, 0x1.ff6956p-31f, 0.0f, 0x1.090b2p-104f, 0.0f,
     0x1.80eb66p-45f, 0x1.d10746p-52f, 0x1.801b12p-3f, 0.0f, 0x1.36ed34p-60f,
     0x1.3ca904p-57f, 0x1.3ef354p-80f, 0.0f, 0x1.a8bacep-13f, 0x1.949472p-90f, 0.0f
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
            ml_float4_t tmp3;
            int32_t tmp4;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            memcpy(&tmp1, ((ml_float4_t*)(external_bench_wrapper_input_table_arg1+ i)), 16);
            tmp2 = Sleef_finz_powf4_u10avx2128(tmp0, tmp1);
            memcpy(((ml_float4_t*)(external_bench_wrapper_output_table+ i)), &(tmp2), 16);
            tmp3 = local_acc + tmp2;
            local_acc = tmp3;
            tmp4 = i + INT32_C(4);
            i = tmp4;
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
    printf("Sleef_finz_powf4_u10avx2128 %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_powf4_u10avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
