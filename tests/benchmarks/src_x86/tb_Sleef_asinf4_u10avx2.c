/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_asinf4_u10avx2128.c --function Sleef_asinf4_u10avx2128 \
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
     0x1.60a4d2p-121f, 0.0f, 0.0f, 0x1.13c498p-49f, 0.0f, 0.0f, 0x1.130c24p-76f,
     0x1.9e1886p-98f, 0x1.8716c6p-10f, 0.0f, 0x1.c0ca72p-2f, 0x1.df06aep-89f, 0.0f,
     0.0f, 0.0f, 0x1.3240cep-25f, 0x1.fc74cap-76f, 0x1.10f7cep-42f, 0x1.66426cp-106f,
     0.0f, 0.0f, 0x1.e0802p-86f, 0.0f, 0.0f, 0x1.781a86p-16f, 0x1.eec7bap-80f,
     0x1.f36308p-84f, 0.0f, 0x1.213f4p-33f, 0.0f, 0.0f, 0.0f, 0x1.ed505p-30f,
     0x1.4ea6fep-17f, 0.0f, 0x1.d11bd8p-54f, 0.0f, 0x1.c215c4p-37f, 0x1.e7c824p-32f,
     0x1.2716f8p-77f, 0x1.e8c8eep-116f, 0x1.3afc42p-120f, 0.0f, 0x1.bb4f48p-73f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c22fc4p-49f, 0x1.87c9a4p-97f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.352e78p-105f, 0.0f, 0x1.a7c1e4p-25f, 0x1.6579dp-21f, 0.0f, 0.0f,
     0x1.285dep-70f, 0.0f, 0x1.22c87cp-91f, 0.0f, 0.0f, 0x1.400456p-58f, 0.0f, 0.0f,
     0.0f, 0x1.c1359ep-3f, 0x1.290ff2p-66f, 0.0f, 0.0f, 0x1.8642a4p-110f, 0.0f, 0.0f,
     0x1.add9e4p-38f, 0.0f, 0x1.893ebp-33f, 0x1.13ed32p-76f, 0.0f, 0x1.b06cp-16f,
     0x1.9877a4p-85f, 0x1.cc9b9p-22f, 0.0f, 0.0f, 0x1.ca7194p-79f, 0x1.57abaep-122f,
     0x1.235fc6p-23f, 0x1.a16846p-84f, 0.0f, 0.0f, 0x1.8e0292p-101f, 0.0f,
     0x1.d67a9p-8f, 0.0f, 0x1.ae4f4p-48f, 0x1.65a5a4p-121f, 0x1.22b44ap-92f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.469f26p-68f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.70d8ecp-23f, 0.0f, 0.0f, 0x1.b59136p-97f, 0.0f, 0.0f,
     0x1.3c24b6p-54f, 0.0f, 0x1.6815d8p-90f, 0x1.07b2f2p-117f, 0.0f, 0x1.6d2922p-24f,
     0.0f, 0x1.8335c4p-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6d392cp-40f, 0x1.8a8adap-24f,
     0x1.5e412cp-86f, 0x1.74892p-96f, 0x1.1b0cacp-125f, 0.0f, 0x1.6019aep-96f, 0.0f,
     0x1.50136ep-96f, 0x1.a2c3fep-53f, 0.0f, 0.0f, 0.0f, 0x1.0d8baap-51f,
     0x1.fee81p-65f, 0x1.2debbep-2f, 0x1.40cbep-34f, 0.0f, 0.0f, 0.0f,
     0x1.120f4ap-14f, 0x1.a72e8ap-86f, 0x1.92b30ap-72f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.29ad22p-84f, 0.0f, 0x1.f1985cp-23f, 0.0f, 0x1.6660ccp-22f, 0x1.0bc45cp-6f,
     0.0f, 0x1.f610eep-120f, 0x1.04b538p-2f, 0x1.8a259cp-38f, 0x1.439a76p-99f, 0.0f,
     0.0f, 0x1.6ce2f6p-118f, 0x1.619394p-118f, 0.0f, 0.0f, 0x1.094c0cp-33f, 0.0f,
     0x1.d13e28p-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6074d8p-101f, 0.0f, 0x1.a54a78p-38f,
     0x1.9750a4p-35f, 0.0f, 0x1.e96d7ap-62f, 0x1.bbe2b6p-93f, 0x1p0f, 0.0f,
     0x1.2755dp-96f, 0.0f, 0x1.bbfd6cp-125f, 0x1.47aa76p-26f, 0x1.5ca0c4p-99f, 0.0f,
     0.0f, 0x1.2712c4p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.687adep-27f,
     0.0f, 0.0f, 0.0f, 0x1.6ea068p-86f, 0x1.063402p-62f, 0x1.fa98ap-89f, 0.0f, 0.0f,
     0.0f, 0x1.ebb26p-52f, 0.0f, 0.0f, 0x1.a188dep-51f, 0x1.6a89e4p-81f, 0.0f,
     0x1.f1e292p-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5cc574p-125f, 0.0f, 0.0f, 0.0f,
     0x1.45000cp-94f, 0.0f, 0.0f, 0x1.e1f16p-78f, 0.0f, 0.0f, 0x1.b53848p-37f, 0.0f,
     0.0f, 0.0f, 0x1.8eaeacp-111f, 0x1.4e9b9p-56f, 0.0f, 0.0f, 0x1.821124p-90f,
     0x1.e1eabep-105f, 0x1.ae97cap-65f, 0.0f, 0.0f, 0.0f, 0x1.940b3ep-66f,
     0x1.c73ecp-91f, 0x1.00cbc6p-59f, 0x1.f32abcp-2f, 0.0f, 0x1.58c892p-72f,
     0x1.a30028p-44f, 0x1.4b31d4p-21f, 0x1.d335a6p-119f, 0x1.ed0688p-25f,
     0x1.37364ap-10f, 0.0f, 0x1.25e502p-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.385c4cp-19f,
     0.0f, 0x1.886b96p-67f, 0.0f, 0.0f, 0x1.a013ccp-121f, 0.0f, 0.0f, 0x1.cb401ap-73f,
     0x1.e8af5p-48f, 0.0f, 0x1.d11b4ep-15f, 0.0f, 0x1.84fe88p-10f, 0x1.ca9568p-53f,
     0.0f, 0x1.e278dcp-4f, 0x1.543ebep-102f, 0x1.7b91e4p-40f, 0x1.1ce6e4p-112f, 0.0f,
     0.0f, 0.0f, 0x1.8d0fd4p-112f, 0.0f, 0.0f, 0x1.c0ac72p-5f, 0x1.37f598p-38f, 0.0f,
     0x1.e09cacp-78f, 0x1.1b8d44p-89f, 0x1.0079e6p-114f, 0x1.e21658p-101f, 0.0f, 0.0f,
     0x1.5bf22p-80f, 0x1.dc5648p-98f, 0x1.669a94p-4f, 0.0f, 0x1.8192b8p-82f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f299aep-37f, 0x1.dc6008p-30f, 0.0f, 0.0f, 0.0f,
     0x1.09235ap-68f, 0x1.64363cp-40f, 0.0f, 0x1.e2b15p-73f, 0.0f, 0.0f, 0.0f,
     0x1.c929eap-10f, 0.0f, 0x1.c1aa64p-82f, 0.0f, 0x1.ec88c6p-89f, 0.0f,
     0x1.e9c64p-110f, 0x1.3615f6p-113f, 0x1.b48bc8p-114f, 0.0f, 0x1.4466cap-65f,
     0x1.3f8864p-25f, 0.0f, 0.0f, 0.0f, 0x1.5099c4p-71f, 0.0f, 0.0f, 0x1.9346a6p-109f,
     0x1.b1a7b6p-19f, 0x1.226e9cp-70f, 0.0f, 0.0f, 0.0f, 0x1.e9a9acp-37f,
     0x1.e8084cp-28f, 0x1.bda91ap-104f, 0x1.f3ff92p-2f, 0.0f, 0x1.1bcaaap-120f, 0.0f,
     0x1.4423e2p-102f, 0.0f, 0.0f, 0x1.75c0f8p-67f, 0x1.e24882p-47f, 0x1.276f28p-91f,
     0x1.f80facp-119f, 0x1.8896c8p-22f, 0x1.1c9946p-35f, 0x1.d56b08p-106f,
     0x1.4731d2p-36f, 0x1.567ac8p-123f, 0x1.ee63dep-65f, 0.0f, 0.0f, 0x1.13a4f6p-16f,
     0x1.645fe6p-96f, 0.0f, 0.0f, 0x1.674666p-11f, 0.0f, 0x1.98966ap-109f, 0.0f, 0.0f,
     0x1.0224ccp-76f, 0x1.df979p-117f, 0.0f, 0x1.b2f576p-45f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.72c6d8p-116f, 0.0f, 0.0f, 0x1.804faep-24f, 0.0f, 0.0f, 0.0f, 0x1.07423ep-76f,
     0x1.85e0dap-36f, 0x1.2e3012p-66f, 0.0f, 0.0f, 0x1.14740cp-55f, 0.0f,
     0x1.533f8p-101f, 0x1.e8b776p-66f, 0.0f, 0x1.cba5aap-34f, 0.0f, 0x1.c1814cp-126f,
     0.0f, 0x1.e10f9p-118f, 0x1.d68de4p-47f, 0x1p0f, 0.0f, 0x1.613888p-124f, 0.0f,
     0x1.8e1b42p-90f, 0.0f, 0.0f, 0.0f, 0x1.b1b062p-24f, 0x1.80daep-11f,
     0x1.7603dep-47f, 0.0f, 0.0f, 0x1.e9f67ep-19f, 0x1.adc816p-37f, 0.0f, 0.0f, 0.0f,
     0x1.e7584ep-94f, 0.0f, 0.0f, 0.0f, 0x1.7263ep-35f, 0.0f, 0x1.43e03ep-92f, 0.0f,
     0x1.2ca55ap-96f, 0.0f, 0.0f, 0.0f, 0x1.fce758p-76f, 0.0f, 0x1.ec5e5ap-52f, 0.0f,
     0x1.b71f92p-125f, 0x1.5a417cp-104f, 0x1.105f86p-7f, 0.0f, 0.0f, 0x1.ca2e6p-53f,
     0.0f, 0.0f, 0x1p0f, 0x1.a3cf6ep-12f, 0x1.a38462p-73f, 0.0f, 0x1.629158p-11f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.60152ap-46f, 0.0f, 0.0f, 0.0f,
     0x1.10f0a6p-96f, 0x1.33671ap-18f, 0x1.ba77dp-64f, 0.0f, 0.0f, 0x1.a0bbep-18f,
     0.0f, 0x1.b85a62p-25f, 0x1.bfd728p-119f, 0.0f, 0.0f, 0x1.8cf7ccp-38f, 0.0f,
     0x1.88728ep-32f, 0x1.ac1242p-92f, 0.0f, 0.0f, 0.0f, 0x1.dfd164p-40f, 0.0f, 0.0f,
     0x1.c43472p-82f, 0.0f, 0.0f, 0.0f, 0x1.382e96p-24f, 0.0f, 0.0f, 0x1.feeb7ap-62f,
     0.0f, 0x1.343106p-84f, 0.0f, 0x1.0b7cfep-99f, 0.0f, 0x1.73e0dep-54f, 0.0f, 0.0f,
     0x1.8f35dap-13f, 0.0f, 0x1.a6e89ap-47f, 0.0f, 0.0f, 0x1.615486p-86f, 0.0f,
     0x1.c3d06ep-7f, 0.0f, 0.0f, 0x1.0087b8p-85f, 0x1.3ced58p-76f, 0.0f,
     0x1.b8d13ep-124f, 0x1.226656p-36f, 0x1.91a724p-74f, 0x1.2db5b8p-43f,
     0x1.adbd5ep-93f, 0x1.7494bp-6f, 0.0f, 0.0f, 0x1.a45b64p-66f, 0x1.221a5ap-41f,
     0.0f, 0.0f, 0x1.cafaap-56f, 0x1.daae92p-100f, 0.0f, 0.0f, 0.0f, 0x1.81b2dcp-4f,
     0.0f, 0x1.2d418ep-51f, 0x1.13843ep-46f, 0.0f, 0.0f, 0.0f, 0x1.a35c3p-98f,
     0x1.229bbap-18f, 0.0f, 0.0f, 0x1.ab8fbep-3f, 0x1.f7c0eep-96f, 0x1.48dbaap-80f,
     0x1.4c9946p-60f, 0.0f, 0.0f, 0x1.d40bf2p-61f, 0x1.6cc2a6p-75f, 0x1.3bf7eap-101f,
     0.0f, 0x1.f5ab22p-68f, 0.0f, 0x1.e848bep-93f, 0x1.40c2ap-70f, 0x1.6a9076p-70f,
     0x1.e6ab2cp-115f, 0.0f, 0.0f, 0x1.0bb3a6p-52f, 0x1.d79c0cp-39f, 0x1.e59e46p-74f,
     0.0f, 0.0f, 0.0f, 0x1.8f57bp-48f, 0x1.0b7b7p-34f, 0x1.ab7daap-92f,
     0x1.2bd75p-119f, 0.0f, 0.0f, 0x1.d9c282p-48f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.67be62p-91f, 0x1.4399c2p-40f, 0.0f, 0.0f, 0x1.b5bf3ep-34f, 0x1.0757fcp-109f,
     0x1.f6a3p-48f, 0x1.a030bp-115f, 0x1.b2b4eep-126f, 0x1.2617c4p-63f,
     0x1.c8b868p-32f, 0.0f, 0x1.77cde2p-35f, 0.0f, 0x1.6767b2p-67f, 0x1.7065a8p-88f,
     0x1.d8c5eap-26f, 0.0f, 0.0f, 0.0f, 0x1.fa6474p-1f, 0x1.4e56b6p-120f,
     0x1.57d998p-31f, 0.0f, 0.0f, 0x1.3816dcp-52f, 0x1.59a5fcp-16f, 0.0f, 0.0f,
     0x1.301426p-62f, 0x1.434116p-120f, 0x1.7f9b16p-31f, 0x1.e57ff4p-54f, 0.0f,
     0x1.147122p-43f, 0x1.df03b8p-35f, 0x1.17b19ap-106f, 0.0f, 0x1.08d896p-5f,
     0x1.880e9ep-118f, 0x1.9fb84cp-100f, 0.0f, 0x1.8ebae4p-6f, 0.0f, 0.0f,
     0x1.7835bep-121f, 0.0f, 0x1.d970fcp-121f, 0x1.4abab4p-118f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.00697ep-21f, 0.0f, 0.0f, 0.0f, 0x1.21b84ap-78f, 0x1.be179ep-43f, 0.0f,
     0x1.d9e5e8p-13f, 0x1.e754dep-115f, 0x1.186682p-75f, 0.0f, 0.0f, 0x1.41c8p-13f,
     0.0f, 0x1.a2ff7p-111f, 0x1.9a9ca2p-32f, 0.0f, 0.0f, 0x1.ebb8ccp-117f,
     0x1.0cc8bp-73f, 0.0f, 0x1.fee6b2p-41f, 0x1.6b051ap-77f, 0.0f, 0x1.3dee88p-108f,
     0.0f, 0.0f, 0.0f, 0x1.88e94ap-9f, 0.0f, 0x1.2c76b2p-104f, 0.0f, 0x1.60dc34p-8f,
     0.0f, 0x1.31712ap-94f, 0.0f, 0x1.8b5f68p-92f, 0x1.3e0af4p-118f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e3a8bap-81f, 0.0f, 0x1.f1e9ep-64f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.86e826p-7f, 0x1.efd5p-86f, 0x1.302682p-72f, 0x1.f0b3d4p-43f, 0.0f,
     0x1.d943eap-118f, 0.0f, 0x1.a9caa2p-117f, 0.0f, 0.0f, 0x1.2683f2p-102f, 0.0f,
     0.0f, 0x1.f759eap-35f, 0x1.926282p-73f, 0x1.e099cep-31f, 0.0f, 0x1.94e49ep-84f,
     0.0f, 0x1.8f54a8p-118f, 0.0f, 0.0f, 0x1.24b648p-89f, 0x1.341816p-23f,
     0x1.945252p-110f, 0x1.7cb712p-56f, 0.0f, 0x1.abece4p-27f, 0x1.777b2ap-9f,
     0x1.d7c1c6p-5f, 0x1.d256cap-22f, 0.0f, 0.0f, 0.0f, 0x1.fc54fap-124f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d0e12cp-28f, 0x1.96a20ep-81f, 0x1.73a334p-91f, 0.0f, 0.0f, 0.0f,
     0x1.10b2eep-58f, 0x1.452718p-69f, 0x1.6f1b9ap-38f, 0.0f, 0.0f, 0x1.896fa6p-47f,
     0x1.d3f568p-46f, 0x1.8507bp-117f, 0.0f, 0.0f, 0.0f, 0x1.444f08p-103f,
     0x1.22374ap-64f, 0x1.2ac094p-91f, 0x1p0f, 0x1.01a664p-39f, 0.0f, 0.0f, 0.0f,
     0x1.e2927p-69f, 0.0f, 0.0f, 0x1.3a8428p-35f, 0x1.25ce86p-18f, 0x1.3c9ea8p-114f,
     0.0f, 0.0f, 0x1.d8c6ccp-32f, 0.0f, 0x1.42008p-7f, 0.0f, 0x1.642d96p-98f, 0.0f,
     0x1.88047ap-23f, 0x1.271eaep-25f, 0.0f, 0x1.df75c6p-95f, 0x1.295f36p-108f, 0.0f,
     0.0f, 0x1.726a16p-87f, 0.0f, 0.0f, 0.0f, 0x1.096b14p-78f, 0x1.2130e6p-33f, 0.0f,
     0x1.8c58ep-10f, 0x1.fcc37ep-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.25e8ap-102f, 0.0f,
     0.0f, 0x1.42bb4p-83f, 0.0f, 0x1.d9acp-98f, 0x1.dccf5p-73f, 0.0f,
     0x1.3e6366p-118f, 0.0f, 0x1.f9f052p-35f, 0x1.f18ec8p-86f, 0x1.3dbdf4p-32f, 0.0f,
     0.0f, 0x1.25ede2p-34f, 0x1.647e7cp-18f, 0.0f, 0.0f, 0x1.526ebap-69f,
     0x1.3dc79cp-39f, 0.0f, 0x1.de7058p-25f, 0.0f, 0x1.9364e2p-24f, 0x1.66b248p-100f,
     0.0f, 0.0f, 0x1.88c276p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ba02dcp-7f,
     0x1.eaf35ep-9f, 0x1.dea3bcp-21f, 0x1.cb2702p-120f, 0.0f, 0x1.93725cp-37f,
     0x1.a9d37ap-113f, 0.0f, 0x1.c77a0ap-120f, 0.0f, 0x1.6687d6p-68f, 0.0f, 0.0f,
     0x1.188ffp-36f, 0x1.0a70a4p-78f, 0.0f, 0.0f, 0.0f, 0x1.1671ep-6f, 0.0f, 0.0f,
     0.0f, 0x1.cb9d9p-24f, 0.0f, 0x1.0be662p-35f, 0x1.f07d42p-68f, 0.0f,
     0x1.a836p-125f, 0x1.f79866p-63f, 0x1.8fe528p-124f, 0.0f, 0.0f, 0x1.92ebaep-39f,
     0x1.90a536p-38f, 0.0f, 0x1.46d194p-68f, 0.0f, 0.0f, 0.0f, 0x1.603fc2p-21f,
     0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.29e0d8p-113f, 0.0f, 0x1.406388p-113f,
     0.0f, 0x1.d9e1bep-32f, 0.0f, 0x1.646832p-74f, 0.0f, 0.0f, 0.0f, 0x1.28fdd6p-107f,
     0.0f, 0.0f, 0x1.4aee1p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.45ea38p-114f, 0.0f,
     0.0f, 0.0f, 0x1.9e883p-20f, 0x1.18cda4p-64f, 0x1.e5f37p-64f, 0.0f,
     0x1.0b035p-116f, 0.0f, 0.0f, 0x1.c811c6p-11f, 0.0f, 0x1.d13a3cp-104f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b88f0ap-10f, 0x1.ef99b4p-98f, 0x1.b371c6p-49f, 0.0f, 0.0f, 0.0f,
     0x1.d2896cp-87f, 0x1.dd2ff8p-107f, 0x1.eddc5ap-111f, 0x1.41db8cp-47f,
     0x1.878d8ep-89f, 0x1.a2af24p-2f, 0.0f, 0x1.e25fbcp-7f, 0.0f, 0x1.4090e2p-102f,
     0.0f, 0x1.33ab44p-125f, 0x1.878e4cp-113f, 0.0f, 0.0f, 0.0f, 0x1.6d3104p-74f,
     0x1.ab878ap-99f, 0.0f, 0x1.4d46bp-103f, 0x1.7c31fep-54f, 0x1.bb7bd6p-39f, 0.0f,
     0x1.6baa7cp-51f, 0x1.5c6716p-54f, 0x1.20a0f4p-45f, 0.0f, 0x1.2344bp-9f, 0.0f,
     0.0f, 0.0f, 0x1.12942ap-107f, 0x1.a93a2ap-110f, 0.0f, 0x1.a09bd4p-62f,
     0x1.e964ccp-95f, 0.0f, 0x1.145d8ap-8f, 0.0f, 0x1.4d864ep-54f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a3c7ep-56f, 0x1.9011cp-107f, 0.0f, 0x1.79482ep-10f,
     0x1.bdd92cp-100f, 0.0f, 0.0f, 0x1.54e7b2p-20f, 0.0f, 0.0f, 0x1.ac7f38p-19f,
     0x1.6e22a8p-15f, 0.0f, 0x1.a3a1aep-61f, 0.0f, 0x1.218f8cp-126f, 0x1.80f94cp-21f,
     0.0f, 0x1.138b08p-16f, 0.0f, 0.0f, 0x1.12d76ap-48f, 0x1.8a9028p-88f, 0.0f,
     0x1.4e425cp-93f, 0.0f, 0.0f, 0x1.c3e5dp-21f, 0.0f, 0x1.fffe58p-64f,
     0x1.c0924ap-62f, 0x1.5dfa4p-117f, 0x1.c398dep-121f, 0.0f, 0x1.dfab44p-11f, 0.0f,
     0.0f, 0x1.6992e4p-68f, 0.0f, 0x1.39a312p-105f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.741e5ap-31f, 0x1.6111aap-50f, 0x1.df69ep-92f, 0x1.d28eeap-105f,
     0x1.231b88p-119f, 0.0f, 0x1.3ecad2p-106f
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
            tmp1 = Sleef_asinf4_u10avx2128(tmp0);
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
    printf("Sleef_asinf4_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_asinf4_u10avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
