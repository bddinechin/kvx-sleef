/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_exp10f4_u10avx2128.c --function Sleef_exp10f4_u10avx2128 \
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
     0x1.f6cc66p-10f, 0x1.7e8f3ep-55f, 0x1.61c8d4p-31f, 0x1.b32e6ep-83f, 0.0f,
     0x1.1162c4p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0bba0cp-108f, 0.0f, 0.0f,
     0x1.0a4ce8p-77f, 0x1.3f21d8p-96f, 0x1.acb762p-108f, 0.0f, 0.0f, 0x1.6f7b3ap-31f,
     0.0f, 0x1.02c364p-59f, 0.0f, 0x1.ed8b4ap-21f, 0x1.6ac0e4p-14f, 0.0f,
     0x1.6b5bap-86f, 0.0f, 0x1.fdd7f2p-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fd238ap-27f,
     0.0f, 0x1.c1ec9ep-119f, 0.0f, 0.0f, 0x1.e02e9cp-33f, 0.0f, 0.0f, 0x1.19de74p-36f,
     0.0f, 0x1.ad116ep-114f, 0x1.76fd16p-121f, 0.0f, 0x1.97aa72p-74f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.c93ef6p-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d95d58p-102f,
     0x1.4e55a6p-29f, 0.0f, 0.0f, 0.0f, 0x1.2ad21ep-11f, 0.0f, 0x1.73c95cp-6f,
     0x1.633fc4p-75f, 0.0f, 0x1.e75a0cp-33f, 0.0f, 0x1.7c1cep-108f, 0x1.03de52p-121f,
     0.0f, 0.0f, 0.0f, 0x1.832b4ep-30f, 0.0f, 0x1.ab4be2p-42f, 0.0f, 0x1.afd5bp-16f,
     0.0f, 0.0f, 0x1.8797b8p-13f, 0x1.eeabd8p-112f, 0x1.1bfb2ap-87f, 0x1.c0bdc8p-13f,
     0x1.749924p-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.20918cp-6f, 0x1.c6c166p-44f,
     0x1.eec602p-19f, 0x1.299496p-37f, 0x1.69616ep-87f, 0x1.d72746p-34f, 0.0f, 0.0f,
     0.0f, 0x1.608234p-35f, 0.0f, 0.0f, 0x1.58744cp-55f, 0x1.d5199ep-16f,
     0x1.cbdb28p-112f, 0.0f, 0x1.33aac4p-50f, 0.0f, 0x1.2c1ecap-97f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a6c5c6p-73f, 0x1.2ae192p-82f, 0.0f, 0.0f, 0.0f, 0x1.fbb0fcp-37f, 0.0f,
     0x1.b8ab7ep-14f, 0.0f, 0.0f, 0x1.56755ap-69f, 0.0f, 0.0f, 0x1.bd95fep-70f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.fe37d2p-115f, 0.0f, 0x1.185c08p-57f, 0.0f, 0.0f, 0.0f,
     0x1.9ab234p-106f, 0.0f, 0x1.593dd8p-81f, 0.0f, 0.0f, 0.0f, 0x1.5b4dc2p-33f, 0.0f,
     0.0f, 0x1.c0a0bcp-102f, 0x1.ec23e8p-64f, 0x1.2619b8p-101f, 0x1.02c3cp-19f, 0.0f,
     0.0f, 0x1.b27a7ap-63f, 0x1.bee898p-121f, 0.0f, 0x1.09b78ep-32f, 0x1.bddda8p-64f,
     0.0f, 0x1.4930dep-73f, 0x1.33999ap-52f, 0.0f, 0x1.695e76p-104f, 0.0f,
     0x1.96981cp-83f, 0.0f, 0x1.e3934cp-10f, 0.0f, 0.0f, 0.0f, 0x1.ca6592p-67f, 0.0f,
     0.0f, 0.0f, 0x1.90b29ap-15f, 0x1.b592bep-49f, 0.0f, 0x1.039254p-108f,
     0x1.8f362ap-54f, 0.0f, 0.0f, 0.0f, 0x1.6294f2p-94f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ee9cd2p-29f, 0.0f, 0.0f, 0x1.67f7c4p-41f, 0.0f, 0x1.3c03aap-44f, 0.0f,
     0x1.6fd2aap-26f, 0.0f, 0.0f, 0.0f, 0x1.2a4266p-109f, 0x1.58b05ep-62f, 0.0f,
     0x1.f717aep-30f, 0x1.8b1978p-110f, 0.0f, 0x1.8f84d8p-98f, 0.0f, 0x1.416828p-47f,
     0x1.d9fd2cp-117f, 0x1.ea99cp-96f, 0x1.b4589p-108f, 0x1.697726p-120f, 0.0f, 0.0f,
     0x1.822bcep-41f, 0x1.1330f2p-101f, 0.0f, 0.0f, 0.0f, 0x1.2aa5bp-117f,
     0x1.f32386p-70f, 0.0f, 0x1.2b4678p-100f, 0x1.aff8eep-1f, 0x1.c51994p-9f, 0.0f,
     0.0f, 0x1.0bdcf2p-19f, 0.0f, 0.0f, 0x1.3c8964p-68f, 0x1.9ceedp-51f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d7ceccp-84f, 0.0f, 0x1.df6894p-49f, 0x1.7c0814p-117f,
     0x1.a48aa6p-36f, 0x1.f1222cp-18f, 0x1.3ca3ecp-108f, 0x1.ddfab6p-123f,
     0x1.1874b6p-40f, 0.0f, 0x1.ab8d78p-49f, 0x1.a4ea6ap-10f, 0.0f, 0x1.a3caf6p-88f,
     0.0f, 0x1.4a3aa8p-125f, 0.0f, 0.0f, 0.0f, 0x1.250ap-110f, 0x1.2ffc5cp-40f, 0.0f,
     0x1.c0024ep-20f, 0x1.23047ap-82f, 0x1.ab5f3p-31f, 0.0f, 0.0f, 0.0f,
     0x1.6abebcp-32f, 0.0f, 0.0f, 0x1.b599dcp-11f, 0x1.2dbc0cp-86f, 0.0f, 0.0f, 0.0f,
     0x1.e2fe0cp-60f, 0x1.2e5f2cp-37f, 0.0f, 0x1.663b22p-95f, 0x1.b21212p-108f,
     0x1.7945e4p-5f, 0x1.f5ff9p-110f, 0x1.e36a4ap-74f, 0x1.18e6bap-33f, 0.0f,
     0x1.75d178p-24f, 0x1.5878e8p-96f, 0x1.bbff24p-8f, 0x1.2da954p-51f,
     0x1.71c2aap-113f, 0.0f, 0x1.f0b0cep-119f, 0.0f, 0x1.135026p-42f, 0x1.ec7a3p-121f,
     0.0f, 0.0f, 0.0f, 0x1.63ddeep-20f, 0.0f, 0x1.c76ef6p-92f, 0.0f, 0x1.fc7752p-95f,
     0x1.d5b5dep-60f, 0x1.e84a5cp-106f, 0x1.475c2ap-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f48cacp-36f, 0x1.452938p-72f, 0x1.89d58ep-99f, 0x1.e1a7c6p-19f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b4a8d6p-51f, 0.0f, 0.0f, 0x1.4ce422p-15f, 0.0f,
     0x1.375674p-54f, 0x1.8330ecp-114f, 0.0f, 0x1.424682p-109f, 0x1.ae4112p-24f,
     0x1.0c29dap-20f, 0.0f, 0.0f, 0x1.ff0a74p-51f, 0x1.e6668ep-101f, 0.0f, 0.0f,
     0x1.dc2e34p-38f, 0.0f, 0x1.6e2104p-46f, 0.0f, 0.0f, 0x1.fa6dd6p-121f,
     0x1.0badaep-37f, 0.0f, 0x1.c95e0ap-22f, 0x1.d8839ap-50f, 0x1.a4a184p-74f,
     0x1.4864acp-13f, 0.0f, 0x1.b6eadep-18f, 0x1.e21112p-99f, 0x1.6b0ff4p-10f,
     0x1.b6b264p-64f, 0x1.bb9ffcp-46f, 0x1.a6bb04p-43f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ad970ep-126f, 0.0f, 0x1.9ceab2p-111f, 0.0f, 0x1.5839aep-88f, 0x1.4bc06ep-52f,
     0.0f, 0x1.6e434p-103f, 0x1.565bbep-1f, 0.0f, 0x1.69d9c4p-26f, 0x1.4c7d9p-116f,
     0x1.156b3cp-27f, 0x1.672c6ep-118f, 0x1.409546p-15f, 0x1.816b8p-51f, 0.0f, 0.0f,
     0x1.1dbd9cp-47f, 0.0f, 0.0f, 0x1.f5fcc6p-35f, 0.0f, 0.0f, 0x1.60b2fcp-50f,
     0x1.2000f4p-95f, 0.0f, 0x1.6f849p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a47cb2p-24f, 0.0f, 0x1.652d34p-81f, 0x1.e9c918p-58f, 0x1.e854eep-85f, 0.0f,
     0x1.a35b46p-122f, 0.0f, 0.0f, 0.0f, 0x1.778898p-60f, 0.0f, 0.0f, 0.0f,
     0x1.4bbc3ap-96f, 0.0f, 0.0f, 0.0f, 0x1.0d447ap-25f, 0.0f, 0.0f, 0x1.482c42p-37f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.66037ep-15f, 0x1.6c0ccap-33f, 0.0f, 0.0f,
     0x1.4cc636p-92f, 0.0f, 0.0f, 0.0f, 0x1.ff5aacp-24f, 0x1.07708p-55f,
     0x1.9348bap-71f, 0x1.110534p-32f, 0.0f, 0x1.d5ca96p-36f, 0x1.b92dp-108f,
     0x1.ece2aap-30f, 0x1.9037c2p-22f, 0x1.26e616p-60f, 0x1.b0c4e6p-124f, 0.0f,
     0x1.257fap-122f, 0x1.13164cp-122f, 0x1p0f, 0x1.1d854ap-31f, 0x1.34db32p-43f,
     0x1.21ae34p-112f, 0x1.de2fd6p-100f, 0x1.c20d3ap-115f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.05b1dap-123f, 0.0f, 0x1.8c8ac4p-114f, 0.0f,
     0x1.c0f57ep-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ee67b8p-102f, 0x1.7f9e48p-20f, 0x1.dc84p-35f, 0.0f, 0x1.afe83p-86f, 0.0f,
     0x1.52a87cp-1f, 0x1.416308p-118f, 0x1.f48a46p-21f, 0x1.85af52p-25f,
     0x1.df2e34p-111f, 0x1.8d91a4p-15f, 0x1.25e992p-77f, 0.0f, 0.0f, 0.0f,
     0x1.85a60ap-101f, 0.0f, 0x1.6cb758p-75f, 0.0f, 0x1.a04ad4p-39f, 0x1.2a11a8p-44f,
     0.0f, 0x1.ba3b92p-7f, 0x1.db712ap-116f, 0.0f, 0x1.897d9p-100f, 0.0f,
     0x1.b25912p-124f, 0x1.40a276p-105f, 0x1.bf1be6p-111f, 0x1.7f4506p-117f, 0.0f,
     0.0f, 0.0f, 0x1.874b7ap-14f, 0.0f, 0x1.33debep-112f, 0x1.2f7f2ep-19f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.232034p-58f, 0x1.2e77f4p-80f,
     0.0f, 0.0f, 0x1.4c12fp-44f, 0x1.a95264p-84f, 0x1.5fada2p-77f, 0.0f, 0.0f,
     0x1.75b9b8p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.32db04p-54f, 0.0f, 0.0f,
     0x1.894048p-36f, 0x1.1f7502p-88f, 0x1.bc53b8p-72f, 0.0f, 0.0f, 0.0f,
     0x1.474a2cp-96f, 0.0f, 0.0f, 0x1.923b82p-85f, 0x1.70ac48p-4f, 0x1.b946b4p-104f,
     0x1.0b13fcp-48f, 0.0f, 0.0f, 0x1.09acd4p-98f, 0x1.47682ep-94f, 0.0f,
     0x1.b7602p-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cd41a2p-64f, 0x1.89f9dap-3f, 0.0f,
     0x1.9d3d4p-121f, 0x1.40633cp-83f, 0.0f, 0.0f, 0.0f, 0x1.6bc756p-63f,
     0x1.4d7f52p-31f, 0.0f, 0.0f, 0x1.95a85ap-58f, 0.0f, 0.0f, 0x1.c801dp-45f, 0.0f,
     0x1.45eb3ap-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fba84cp-11f, 0.0f, 0.0f,
     0x1.5f165cp-61f, 0.0f, 0.0f, 0.0f, 0x1.63b954p-116f, 0x1.1f7a52p-14f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.4f1ep-38f, 0.0f, 0x1.48251p-28f, 0.0f, 0.0f,
     0x1.bda7a4p-37f, 0x1.896b5p-76f, 0.0f, 0.0f, 0.0f, 0x1.e5c694p-62f,
     0x1.20bc7ap-58f, 0x1.4fd94p-121f, 0x1.2e9e76p-78f, 0.0f, 0.0f, 0.0f,
     0x1.b70d6ep-12f, 0.0f, 0x1.4d482ap-70f, 0x1.697c86p-7f, 0.0f, 0.0f,
     0x1.12fe4cp-102f, 0x1.b8dc54p-91f, 0.0f, 0.0f, 0.0f, 0x1.111d92p-88f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d143bp-103f, 0.0f, 0.0f, 0x1.35a70ep-38f, 0x1.2c95b8p-52f,
     0x1.e552c6p-9f, 0.0f, 0x1.1c4e98p-39f, 0.0f, 0x1.d19decp-23f, 0.0f, 0.0f,
     0x1.40478ap-115f, 0.0f, 0x1.44a7aap-120f, 0x1.782ccep-86f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.8b2b24p-6f, 0x1.a0cfacp-57f, 0.0f, 0x1.861b38p-30f, 0x1.4a4b1ap-46f,
     0x1.d24bcp-45f, 0.0f, 0.0f, 0.0f, 0x1.d22f5ap-56f, 0x1.c05f3ep-50f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d4721p-48f, 0x1.ac9d76p-91f, 0x1.23789ap-118f,
     0x1.7dba5p-120f, 0.0f, 0x1.e913bep-36f, 0.0f, 0.0f, 0x1.f4b548p-53f,
     0x1.fb1406p-122f, 0.0f, 0x1.b96f68p-42f, 0x1.a28686p-28f, 0x1.528f1ep-120f, 0.0f,
     0x1.deb61cp-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c1c072p-101f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7499acp-72f, 0.0f, 0x1.d5cdcap-84f, 0.0f,
     0x1.3fd7bp-113f, 0.0f, 0x1.d1aa04p-95f, 0x1.c89c02p-124f, 0x1.271c48p-43f,
     0x1.1c9f4ep-94f, 0.0f, 0x1.d7aa2cp-30f, 0.0f, 0x1.a26b0ap-75f, 0x1.ff6306p-126f,
     0.0f, 0x1.b5ab6ep-94f, 0x1.cca242p-93f, 0x1.979c4cp-41f, 0.0f, 0x1.94e82cp-46f,
     0x1.c547d6p-115f, 0x1.61dd3ep-63f, 0.0f, 0.0f, 0x1.57775cp-34f, 0x1.f86b82p-87f,
     0.0f, 0x1.8e5326p-14f, 0.0f, 0.0f, 0x1.a3e84ap-115f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a4a336p-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.83f8e2p-82f,
     0x1.68242ep-79f, 0.0f, 0.0f, 0x1.fe7624p-83f, 0.0f, 0.0f, 0x1.e68d2ap-13f,
     0x1.872724p-49f, 0.0f, 0x1.ff1b3cp-106f, 0x1.0880f4p-78f, 0.0f, 0.0f,
     0x1.a973c6p-56f, 0.0f, 0x1.17cacap-34f, 0.0f, 0x1.4e65a2p-60f, 0x1.b33c64p-41f,
     0.0f, 0.0f, 0x1.5a5d0ep-30f, 0.0f, 0x1.5cd4f2p-108f, 0x1.3fee9ap-99f,
     0x1.d2a498p-47f, 0x1.e9b4c4p-35f, 0x1.3dbfbap-104f, 0x1.bc01eap-85f, 0.0f,
     0x1.ae4dd6p-46f, 0.0f, 0x1.615956p-77f, 0.0f, 0x1.3bd2f4p-50f, 0.0f, 0.0f, 0.0f,
     0x1.799fcp-65f, 0.0f, 0.0f, 0.0f, 0x1.b3db3ap-93f, 0x1.41c0d8p-45f, 0.0f,
     0x1.cb289ep-109f, 0x1.126284p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9ae846p-120f,
     0.0f, 0x1.c2d75ep-72f, 0x1.405c36p-62f, 0.0f, 0x1.9f9cecp-43f, 0.0f, 0.0f,
     0x1.b4add2p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c974a2p-18f, 0.0f,
     0x1.f87c06p-103f, 0x1.65fe72p-85f, 0x1.041aa6p-30f, 0.0f, 0x1.3d92aep-96f, 0.0f,
     0.0f, 0x1.466d3ep-105f, 0.0f, 0x1.faebf6p-36f, 0x1.4b83eap-7f, 0x1.97f124p-30f,
     0x1.e69a1ap-81f, 0.0f, 0x1.826f12p-55f, 0.0f, 0x1.2c5106p-37f, 0x1.b7c932p-99f,
     0x1.258788p-12f, 0.0f, 0x1.1ac646p-121f, 0.0f, 0x1.9769c4p-42f, 0.0f, 0.0f,
     0x1.1a8cdep-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3ea96p-9f, 0x1.855c04p-58f,
     0.0f, 0x1.2b8484p-52f, 0.0f, 0x1.3b6ec6p-35f, 0x1.915944p-98f, 0.0f, 0.0f, 0.0f,
     0x1.334c9cp-2f, 0x1.6ab32ep-22f, 0.0f, 0.0f, 0x1.307062p-108f, 0.0f, 0.0f, 0.0f,
     0x1.d268aap-78f, 0x1.b966d4p-34f, 0x1.26538cp-101f, 0.0f, 0x1.ec39fp-123f,
     0x1.4f137ep-35f, 0x1.beee7cp-12f, 0x1.c19118p-64f, 0.0f, 0.0f, 0x1.7707bep-102f,
     0x1.928ad8p-66f, 0x1.8f3eap-70f, 0.0f, 0x1.e9b49p-15f, 0.0f, 0.0f,
     0x1.826c74p-44f, 0x1.cba4c6p-25f, 0.0f, 0x1.612074p-69f, 0.0f, 0.0f,
     0x1.279eep-84f, 0.0f, 0x1.ad3258p-26f, 0x1.b3e73ep-58f, 0x1.d2e8e2p-68f, 0.0f,
     0.0f, 0.0f, 0x1.d1c1dep-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4d67ccp-59f,
     0x1.25fbd4p-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5fad58p-20f, 0x1.72ef08p-65f, 0.0f,
     0x1.f53fa2p-93f, 0x1.59845cp-33f, 0x1.718564p-25f, 0x1.575b52p-63f, 0.0f, 0.0f,
     0.0f, 0x1.851872p-48f, 0x1.a8f116p-73f, 0.0f, 0.0f, 0x1.b36862p-124f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.80a3b6p-64f, 0x1.1c65f2p-6f, 0x1.ce4cdep-7f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fd9ab8p-126f, 0x1.2a2ab4p-58f, 0.0f,
     0x1.1d18d2p-110f, 0x1.3dd2bcp-120f, 0x1.436a2cp-73f, 0x1.9ab868p-96f,
     0x1.f45a72p-19f, 0.0f, 0x1.f3959p-94f, 0x1.af464ap-62f, 0.0f, 0x1.f006f8p-54f,
     0x1.6f99d2p-84f, 0.0f, 0x1.2152d2p-112f, 0.0f, 0x1.16e938p-7f, 0.0f,
     0x1.bd7624p-44f, 0x1.fbd8c2p-126f, 0.0f, 0.0f, 0x1.85b936p-24f, 0x1.2511d6p-112f,
     0.0f, 0x1.454ddp-28f, 0x1.0f819ep-100f, 0.0f, 0x1.074e2cp-75f, 0x1.32a41cp-25f,
     0x1.063a24p-45f, 0.0f, 0x1.d02cd4p-56f, 0.0f, 0x1.404c02p-105f, 0.0f,
     0x1.168c56p-113f, 0.0f, 0x1.717e54p-10f, 0.0f, 0x1.c420ep-109f, 0x1.a9234ep-81f,
     0.0f, 0.0f, 0.0f, 0x1.5d403p-56f, 0.0f, 0x1.c01b78p-76f, 0.0f, 0.0f, 0.0f,
     0x1.86a54ep-52f, 0x1.0b671ap-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2bef2p-74f,
     0.0f, 0x1.5125fep-101f, 0x1.d897eap-66f, 0x1.facf2ep-90f, 0x1.2ec882p-81f, 0.0f,
     0.0f, 0x1.ae4944p-112f, 0x1.72a082p-18f, 0x1.8432e6p-66f, 0x1.c095b8p-78f, 0.0f,
     0x1.4a638p-103f, 0x1.2d3be4p-117f, 0x1.3ea994p-93f, 0.0f, 0.0f, 0.0f,
     0x1.a147a2p-2f, 0x1.01b18ap-70f, 0x1.d085bep-46f, 0x1.c721fap-75f, 0.0f, 0.0f
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
            tmp1 = Sleef_exp10f4_u10avx2128(tmp0);
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
    printf("Sleef_exp10f4_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_exp10f4_u10avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
