/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_exp10f8_u35kvx.c --function Sleef_exp10f8_u35kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 8 --function-input-vector-size 8 --bench \
 *     --no-embedded-bin --target kv3
 *
 */
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float8_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float8_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1008];
static const float external_bench_wrapper_input_table_arg0[1008]  = {
     0x1.907a8ep-94f, 0.0f, 0x1.7f54cap-3f, 0.0f, 0x1.93a044p-4f, 0.0f,
     0x1.8734bp-74f, 0x1.aaabc8p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.99fca2p-110f,
     0x1.99c37p-92f, 0x1.922412p-114f, 0x1.5bee4cp-82f, 0x1.e0052p-93f,
     0x1.17f77p-122f, 0.0f, 0.0f, 0x1.a57a76p-74f, 0.0f, 0.0f, 0x1.fa0aacp-100f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f4ccf4p-98f, 0.0f, 0x1.6c4112p-36f, 0.0f, 0.0f,
     0x1.d55ad8p-42f, 0x1.985868p-7f, 0x1.4f2f58p-47f, 0x1.8b0448p-24f,
     0x1.b2a5fp-29f, 0.0f, 0.0f, 0x1.59317ep-72f, 0x1.c81754p-94f, 0.0f,
     0x1.301a2cp-33f, 0.0f, 0x1.8df0a2p-73f, 0x1.eb963cp-39f, 0x1.5779cp-47f,
     0x1.33cff6p-91f, 0x1.ffd4eap-110f, 0x1.54fd5ep-95f, 0x1.110156p-123f,
     0x1.7ca634p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ed2184p-35f, 0x1.a9288cp-99f,
     0x1.6de4e2p-22f, 0x1.f9605cp-9f, 0x1.a5f25ap-76f, 0.0f, 0x1.8b5fb4p-58f,
     0x1.c50edap-110f, 0x1.671bfap-41f, 0.0f, 0.0f, 0x1.a7d64ep-41f, 0x1.8ffc74p-6f,
     0x1.ca986ap-12f, 0.0f, 0.0f, 0x1.79c41ep-22f, 0x1.03e146p-66f, 0x1.ca1db4p-63f,
     0.0f, 0x1.2f89aep-113f, 0x1.18223cp-4f, 0.0f, 0x1.154caep-4f, 0x1.0d084cp-64f,
     0.0f, 0x1.20b5a6p-93f, 0x1.d5286cp-97f, 0x1.3bd43cp-98f, 0.0f, 0.0f,
     0x1.36cb56p-80f, 0.0f, 0.0f, 0x1.1f9c38p-14f, 0x1.31408ap-56f, 0x1.2cabfap-47f,
     0x1.dd009ep-111f, 0.0f, 0x1.808486p-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.99d08p-121f, 0.0f, 0.0f, 0.0f, 0x1.6abca4p-56f, 0.0f, 0x1.32ddf6p-90f,
     0x1.ed000ep-94f, 0x1.aea4fap-2f, 0.0f, 0.0f, 0x1.4cd5fp-114f, 0.0f,
     0x1.a3f5c4p-6f, 0.0f, 0x1.3e9b78p-120f, 0x1.57351p-125f, 0x1.c56622p-62f, 0.0f,
     0.0f, 0x1.76793ap-73f, 0.0f, 0.0f, 0x1.b4070cp-83f, 0x1.2fd37ap-68f,
     0x1.e53c08p-101f, 0x1.e1bfa4p-43f, 0x1.36aa26p-107f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f1d69ep-102f, 0.0f, 0.0f, 0.0f, 0x1.4629dp-64f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a59956p-126f, 0x1.a05e72p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.844c84p-7f, 0.0f, 0.0f, 0x1.721284p-95f, 0x1.fdbaf8p-56f, 0.0f, 0.0f,
     0x1.8f348ap-105f, 0x1.a134fp-44f, 0x1.c3855ap-89f, 0.0f, 0x1.1e01f4p-30f,
     0x1.f0b8a8p-55f, 0.0f, 0.0f, 0.0f, 0x1.65cd82p-68f, 0.0f, 0x1.f0d16ep-122f,
     0x1.25bd6cp-16f, 0x1.44a37ep-87f, 0.0f, 0.0f, 0.0f, 0x1.1f5776p-25f, 0.0f, 0.0f,
     0.0f, 0x1.ecca12p-66f, 0.0f, 0x1.4a10cp-84f, 0.0f, 0x1.9ba534p-117f, 0.0f,
     0x1.e637bep-126f, 0.0f, 0.0f, 0.0f, 0x1.4431ecp-96f, 0x1.a45a98p-97f, 0.0f, 0.0f,
     0x1.dd9a3p-49f, 0.0f, 0x1.eb9a94p-29f, 0x1.4b5966p-95f, 0.0f, 0x1.721284p-112f,
     0.0f, 0x1.7eee9cp-116f, 0x1.206b6ap-117f, 0.0f, 0x1.b4206p-96f, 0x1.a9d7dep-109f,
     0x1.34424ep-101f, 0x1.1add5cp-76f, 0.0f, 0x1.1c294p-40f, 0.0f, 0x1.aebc92p-9f,
     0.0f, 0x1.1eefdap-97f, 0x1.d2b33cp-65f, 0x1.8612eap-68f, 0x1.f523ecp-34f,
     0x1.14e31ap-109f, 0x1.ebe2b6p-53f, 0.0f, 0x1.020eap-22f, 0x1.541b54p-87f,
     0x1.1370fp-5f, 0x1.a6374p-96f, 0.0f, 0.0f, 0x1.9d469cp-121f, 0x1.fc150cp-61f,
     0x1.63f23p-84f, 0.0f, 0x1.0bef36p-39f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.bfa918p-25f,
     0.0f, 0x1.fbfabp-55f, 0x1.5a17e8p-96f, 0x1.68fec6p-56f, 0x1.2dccaap-67f,
     0x1.b5c2f2p-54f, 0x1.6e53b2p-119f, 0x1.9672a4p-58f, 0.0f, 0x1.54e758p-79f, 0.0f,
     0x1.727dbp-77f, 0x1.930556p-39f, 0x1.3069cep-47f, 0x1.3ea6c2p-41f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b56fcp-5f, 0.0f, 0x1.6d1532p-16f,
     0x1.0591ep-22f, 0.0f, 0x1.5ee956p-12f, 0x1.e788aep-39f, 0x1.c293b8p-46f, 0.0f,
     0x1.cfe07ap-24f, 0.0f, 0.0f, 0.0f, 0x1.cad90cp-70f, 0.0f, 0x1.ff58ap-39f, 0.0f,
     0x1.b2be6cp-66f, 0.0f, 0x1.4e2ce6p-52f, 0x1.460fecp-64f, 0x1.edafacp-17f,
     0x1.e0d7fp-29f, 0.0f, 0.0f, 0.0f, 0x1.215d04p-87f, 0x1.afe67ep-31f,
     0x1.9fb328p-114f, 0.0f, 0.0f, 0x1.204092p-82f, 0.0f, 0x1.0df86ep-89f, 0.0f, 0.0f,
     0x1.06742p-94f, 0.0f, 0.0f, 0.0f, 0x1.807414p-21f, 0x1.28d1ccp-114f,
     0x1.79fd3ep-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.134acep-98f,
     0x1.73fc2ep-49f, 0.0f, 0x1.96dedap-42f, 0.0f, 0x1.004eaep-27f, 0.0f, 0.0f,
     0x1.1bace6p-63f, 0.0f, 0.0f, 0x1.42846ap-102f, 0.0f, 0x1.68c11p-87f,
     0x1.71882p-88f, 0.0f, 0x1.296afcp-23f, 0.0f, 0x1.7d24e4p-111f, 0x1p0f,
     0x1.ae6afp-126f, 0.0f, 0x1.e57342p-4f, 0x1.977252p-58f, 0x1.a55356p-50f,
     0x1.c92532p-67f, 0.0f, 0.0f, 0x1.bcbdcap-43f, 0.0f, 0.0f, 0.0f, 0x1.4102c8p-31f,
     0x1.3d5b4ep-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.54a326p-40f,
     0x1.6e6e8cp-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.66db24p-25f, 0.0f, 0.0f,
     0x1.f998f4p-81f, 0x1.57b542p-101f, 0.0f, 0x1.c57ec4p-41f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.9a7554p-44f, 0.0f, 0x1.5e6f34p-110f, 0x1.5fa946p-85f,
     0x1.494262p-106f, 0x1.ec4b56p-56f, 0x1.6c4ee6p-9f, 0.0f, 0.0f, 0.0f,
     0x1.9e142ep-50f, 0x1.657ceap-6f, 0x1.7d06f6p-117f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8f866ap-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.392d7p-59f, 0.0f, 0.0f,
     0x1.89cd1ap-123f, 0x1.b5d226p-57f, 0x1.2ccd42p-27f, 0x1.d4d182p-33f, 0.0f,
     0x1.66885p-91f, 0x1.d9190cp-30f, 0.0f, 0.0f, 0.0f, 0x1.c2472p-37f, 0.0f,
     0x1.1b67fcp-11f, 0x1.5c5fap-119f, 0x1.97ad96p-27f, 0x1.4fbd6cp-103f,
     0x1.76da38p-24f, 0.0f, 0.0f, 0.0f, 0x1.c7734ep-75f, 0x1.c2e912p-108f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.7fc646p-115f, 0x1.ab15d6p-57f, 0x1.ce5784p-30f, 0.0f, 0.0f, 0.0f,
     0x1.67d422p-9f, 0x1.b08594p-44f, 0.0f, 0x1.535806p-63f, 0.0f, 0x1.379fa6p-86f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.19872ep-70f, 0.0f, 0x1.ab721ep-28f,
     0x1.585b9ep-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b63256p-68f, 0x1.ced74ap-32f,
     0x1.96b6e8p-91f, 0.0f, 0.0f, 0.0f, 0x1.a6a0e6p-89f, 0.0f, 0x1.d6c064p-9f,
     0x1.5a86b2p-110f, 0.0f, 0.0f, 0x1.f59794p-39f, 0x1.84c1d4p-77f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d7d95ep-92f, 0.0f, 0x1.006eacp-95f, 0.0f, 0.0f,
     0x1.a10402p-50f, 0x1.3bb15ep-31f, 0.0f, 0.0f, 0x1.da6fdep-119f, 0x1.d3f25cp-26f,
     0.0f, 0.0f, 0x1.0e8598p-66f, 0.0f, 0x1.214804p-109f, 0.0f, 0x1.b0e31ep-16f, 0.0f,
     0.0f, 0.0f, 0x1.63e11ap-106f, 0x1.ac4546p-1f, 0.0f, 0x1.30bb46p-4f,
     0x1.d0a2b4p-73f, 0.0f, 0x1.cb7c4p-15f, 0x1.d4d354p-41f, 0x1.690eb2p-54f,
     0x1.cda8fap-71f, 0x1.59c13ap-109f, 0x1.9f4072p-101f, 0x1.ef8f8ap-68f,
     0x1.387a3ap-64f, 0x1.57cecp-125f, 0.0f, 0.0f, 0x1.d69b48p-23f, 0.0f,
     0x1.816f8ep-40f, 0.0f, 0x1.9f4738p-17f, 0.0f, 0.0f, 0x1.1fdde8p-44f,
     0x1.019288p-119f, 0.0f, 0.0f, 0.0f, 0x1.193fa8p-120f, 0.0f, 0.0f,
     0x1.9ee1a2p-116f, 0x1.6e117ap-54f, 0.0f, 0.0f, 0x1.5f35bp-72f, 0x1.325d42p-40f,
     0.0f, 0.0f, 0x1.d7cdap-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4cf0e2p-79f,
     0x1.f47276p-6f, 0x1.d910b2p-17f, 0.0f, 0.0f, 0x1.55431ep-33f, 0x1.0a19c8p-18f,
     0.0f, 0x1.2497a2p-30f, 0x1.283e7p-16f, 0.0f, 0x1.c17f74p-113f, 0x1.a702aap-124f,
     0x1p0f, 0x1.6f46d6p-122f, 0x1.6f8632p-27f, 0.0f, 0x1.f86a82p-91f, 0x1.7b92dp-56f,
     0.0f, 0.0f, 0x1.1505b8p-12f, 0.0f, 0.0f, 0.0f, 0x1.bb6664p-95f, 0.0f,
     0x1.1975dp-3f, 0.0f, 0.0f, 0x1.8c80bap-87f, 0.0f, 0x1.0f404ap-41f, 0.0f, 0.0f,
     0x1.cecf3ap-114f, 0.0f, 0.0f, 0.0f, 0x1.546a8ap-125f, 0.0f, 0x1.283b9ap-106f,
     0x1.7468b8p-44f, 0x1.60ad9ep-48f, 0x1.5becbp-16f, 0.0f, 0x1.c3804cp-65f, 0.0f,
     0.0f, 0x1.2f5d32p-110f, 0x1.7151d2p-100f, 0x1.90f2dap-114f, 0x1.9168p-125f, 0.0f,
     0x1.8d0232p-57f, 0x1.cc83a8p-95f, 0.0f, 0x1.3cabd2p-61f, 0.0f, 0x1.d068ecp-69f,
     0x1.f6c16ap-100f, 0.0f, 0x1.92b44ep-119f, 0.0f, 0x1.920734p-54f,
     0x1.880ea6p-109f, 0x1.40c636p-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.7efdc6p-21f, 0.0f, 0x1.da0a7p-80f, 0.0f, 0.0f, 0.0f, 0x1.ffadbp-79f,
     0.0f, 0.0f, 0.0f, 0x1.f37c7cp-31f, 0x1.e1838cp-87f, 0.0f, 0.0f, 0x1.ee1dep-2f,
     0x1.b1fd14p-48f, 0.0f, 0x1.fdb21ep-112f, 0x1.893236p-81f, 0x1.b07ef8p-113f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.eb6d36p-59f, 0.0f, 0.0f, 0x1.371e6p-110f, 0.0f, 0.0f,
     0x1.5cad4cp-39f, 0.0f, 0.0f, 0x1.880176p-14f, 0x1.d0d2d6p-62f, 0.0f, 0.0f,
     0x1.0b2aecp-76f, 0x1.6f6646p-11f, 0x1.f093f6p-5f, 0x1.fc0e2ep-27f, 0.0f, 0.0f,
     0x1.3aadbp-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6a5466p-120f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e5d1c6p-10f, 0x1.44fac4p-91f, 0x1.f92594p-27f, 0.0f, 0x1.06f9ecp-50f,
     0x1.da499ap-75f, 0x1.97d2d6p-105f, 0x1.9ef708p-52f, 0.0f, 0.0f, 0x1.a67606p-71f,
     0x1.3c4638p-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a4cb52p-104f, 0.0f,
     0x1.32126ap-91f, 0x1.66a68p-125f, 0x1.1a6846p-17f, 0x1.42a702p-65f,
     0x1.71403ap-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.174ae6p-12f, 0x1.718a6cp-108f,
     0x1.3464a8p-29f, 0.0f, 0.0f, 0.0f, 0x1.5107fap-46f, 0.0f, 0x1.c08e96p-88f,
     0x1.36e3dp-84f, 0.0f, 0x1.64b23ap-48f, 0x1.fb20cap-77f, 0.0f, 0x1.3f254p-35f,
     0x1.569cfp-87f, 0x1.90168ep-59f, 0.0f, 0x1.2d9a4ep-13f, 0x1.c35a1cp-83f, 0.0f,
     0.0f, 0x1.c6c93ep-78f, 0.0f, 0.0f, 0.0f, 0x1.0ee668p-14f, 0.0f, 0.0f, 0.0f,
     0x1.1250eap-124f, 0.0f, 0.0f, 0.0f, 0x1.74ecbp-93f, 0.0f, 0x1.8901cep-51f, 0.0f,
     0x1.3e5a92p-102f, 0x1.aa85bap-110f, 0x1.962c78p-81f, 0.0f, 0x1.e19f8ep-117f,
     0x1.410c3ap-121f, 0.0f, 0x1.f2a99ap-87f, 0x1.ff7d5ap-11f, 0x1.1e32aap-27f, 0.0f,
     0x1.e86ae6p-122f, 0x1.55d2e4p-36f, 0x1.1842c2p-14f, 0.0f, 0x1.e5b7dp-121f,
     0x1.6ed3ap-114f, 0.0f, 0.0f, 0x1.d93bap-94f, 0x1.c24942p-8f, 0x1.7cc4dp-10f,
     0.0f, 0.0f, 0.0f, 0x1.5b5636p-94f, 0.0f, 0.0f, 0x1.fe9bfap-56f, 0x1.30a012p-119f,
     0x1.62a4fap-13f, 0.0f, 0x1.0b0c72p-43f, 0.0f, 0.0f, 0x1.6f9b12p-94f,
     0x1.e3b698p-50f, 0x1.18dac2p-93f, 0.0f, 0x1.4f6166p-96f, 0x1.01c2dap-56f,
     0x1.6d0998p-6f, 0.0f, 0x1.75bd9ap-35f, 0.0f, 0.0f, 0.0f, 0x1.1ce15p-89f, 0.0f,
     0x1.d8e2bcp-56f, 0x1.09bd3ep-73f, 0x1.520f16p-79f, 0.0f, 0x1.ec3f06p-26f, 0.0f,
     0x1.dc9564p-11f, 0x1.3eb7e2p-22f, 0.0f, 0x1.f17492p-46f, 0.0f, 0x1.b7d0acp-119f,
     0x1.f448aep-21f, 0x1.c548b2p-85f, 0.0f, 0.0f, 0.0f, 0x1.8559d4p-10f,
     0x1.223074p-99f, 0.0f, 0.0f, 0.0f, 0x1.4b774cp-19f, 0.0f, 0x1.47f4dep-111f, 0.0f,
     0x1.d9b424p-98f, 0.0f, 0.0f, 0x1.e286eep-31f, 0.0f, 0x1.f3ee72p-52f,
     0x1.aa0976p-42f, 0x1.019374p-8f, 0x1.c60b12p-84f, 0x1.b70be4p-115f,
     0x1.5bd6bp-114f, 0x1.ff8c6ap-75f, 0x1p0f, 0x1.a51d34p-124f, 0x1.43264cp-125f,
     0.0f, 0x1.745accp-85f, 0.0f, 0.0f, 0x1.b01ac6p-85f, 0.0f, 0x1.e45766p-119f, 0.0f,
     0.0f, 0x1.bb95fcp-90f, 0x1.3be4acp-29f, 0.0f, 0x1.a43ccep-76f, 0.0f,
     0x1.11da64p-56f, 0x1.b96d1p-23f, 0x1.3c4206p-83f, 0x1.0a7006p-20f,
     0x1.016f92p-9f, 0.0f, 0x1.6a6056p-10f, 0.0f, 0x1.d8a3a8p-18f, 0.0f, 0.0f,
     0x1.c4bf96p-18f, 0x1.87fd3ap-93f, 0x1.cff544p-112f, 0.0f, 0x1.4ffffp-121f, 0.0f,
     0.0f, 0.0f, 0x1.94fdeap-79f, 0.0f, 0.0f, 0x1.5965aap-6f, 0x1.8db14p-126f, 0.0f,
     0x1p0f, 0x1.2fd716p-33f, 0.0f, 0x1.640ecp-126f, 0x1.70c46ep-85f, 0x1.19776ep-34f,
     0x1.810a6ap-44f, 0.0f, 0x1.7a03dcp-61f, 0.0f, 0x1.95c7aap-54f, 0.0f,
     0x1.193a14p-21f, 0.0f, 0x1.9a75fcp-89f, 0x1.9c2eeap-101f, 0x1.39cda8p-72f, 0.0f,
     0.0f, 0x1.3e6eacp-112f, 0x1.26bcd8p-122f, 0.0f, 0x1.744f8ap-64f, 0.0f, 0.0f,
     0.0f, 0x1.a23c28p-37f, 0x1.bc3d3p-14f, 0x1.93b8fcp-94f, 0.0f, 0.0f, 0.0f,
     0x1.ea6d56p-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6d02f8p-11f, 0.0f, 0.0f,
     0.0f, 0x1.df91d4p-63f, 0.0f, 0x1.bbb664p-67f, 0x1.d8d66ap-56f, 0.0f,
     0x1.0dcdfep-117f, 0.0f, 0.0f, 0x1.bbc9c6p-95f, 0x1.b80ffcp-15f, 0x1.175db6p-50f,
     0x1.80b62cp-65f, 0.0f, 0.0f, 0.0f, 0x1.b594c4p-52f, 0.0f, 0x1.7b25f8p-66f,
     0x1.b404cp-82f, 0x1.4608fp-1f, 0x1.18981ep-89f, 0.0f, 0x1.71efdep-89f, 0.0f,
     0.0f, 0x1.fb5252p-32f, 0x1.c7f446p-77f, 0.0f, 0x1.534a92p-61f, 0x1.412e26p-90f,
     0x1.14061p-4f, 0x1.67c7d4p-84f, 0.0f, 0x1.f8cf6ap-25f, 0x1.469bf6p-69f, 0.0f,
     0x1.5d0166p-25f, 0.0f, 0x1.f158a6p-125f, 0x1.192f22p-85f, 0x1.af036p-101f,
     0x1.db70c2p-16f, 0.0f, 0x1.eceab4p-21f, 0x1.6bcbdp-58f, 0.0f, 0x1.054dd4p-98f,
     0.0f, 0x1.bcd67p-6f, 0x1.48607ep-21f, 0.0f, 0x1.7ff8ccp-41f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.d052dcp-53f, 0x1.a93e64p-53f, 0x1.33c386p-38f, 0.0f, 0.0f, 0.0f,
     0x1.b3f886p-108f, 0x1.60349p-88f, 0.0f, 0.0f, 0x1.12eb3cp-89f, 0.0f,
     0x1.ff6356p-40f, 0x1.08e814p-126f, 0x1.3eed9cp-115f, 0x1.3f98ap-79f, 0.0f,
     0x1.0b7254p-106f, 0x1.894b46p-80f, 0.0f, 0.0f, 0x1.5245c8p-82f, 0.0f,
     0x1.3c6efep-123f, 0x1.d38fd2p-80f, 0.0f, 0.0f, 0x1.6616cp-103f, 0x1.cdd1e8p-75f,
     0x1.087c84p-81f, 0.0f, 0.0f, 0.0f, 0x1.d6e48ep-107f, 0.0f, 0x1.8549e8p-118f,
     0x1.28b862p-22f, 0x1.d7c508p-63f, 0x1.acb71cp-44f, 0x1.89c0dcp-27f,
     0x1.c3aeb2p-126f, 0.0f, 0x1.547732p-67f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ae3b96p-103f, 0.0f, 0.0f, 0x1.f05e26p-54f, 0.0f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_float8_t global_bench_acc;
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
        ml_float8_t local_acc;
        int32_t i;
        ml_float8_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1008));){
            ml_float8_t tmp0;
            ml_float8_t tmp1;
            ml_float8_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_float8_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            tmp1 = Sleef_exp10f8_u35kvx(tmp0);
            memcpy(((ml_float8_t*)(external_bench_wrapper_output_table+ i)), &(tmp1), 32);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(8);
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
    cpe_measure = id_tmp / 10080000.0;
    printf("Sleef_exp10f8_u35kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_exp10f8_u35kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
