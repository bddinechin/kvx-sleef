/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_cosf4_u10avx2128.c --function Sleef_finz_cosf4_u10avx2128 \
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
     0.0f, 0x1.ec1dfap-95f, 0x1.4d61e8p-31f, 0.0f, 0.0f, 0x1.8bf45p-32f,
     0x1.2c24e4p-55f, 0x1.bee62ap-108f, 0x1.7ff35cp-105f, 0x1.47a0d4p-52f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b61c4cp-14f, 0.0f, 0x1.18afbcp-107f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.be70cap-43f, 0x1.7efafcp-54f, 0.0f, 0x1.b654cep-27f,
     0x1.16f694p-100f, 0x1.8a5204p-73f, 0.0f, 0x1.f5d474p-70f, 0.0f, 0.0f,
     0x1.2f8454p-80f, 0.0f, 0x1.63332ap-29f, 0.0f, 0x1.b56b46p-9f, 0x1.a02078p-57f,
     0x1.4d4fe4p-91f, 0x1.742106p-43f, 0x1.5d5bbp-124f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ae750ap-28f, 0x1.aee5fap-105f, 0x1.f20d66p-63f, 0.0f, 0x1.b63bfap-32f,
     0x1.af8972p-62f, 0x1.c19b84p-50f, 0x1.f96018p-19f, 0x1.53ffc8p-30f, 0.0f, 0.0f,
     0x1.039554p-84f, 0.0f, 0.0f, 0.0f, 0x1.3c65e4p-23f, 0x1.74f7cap-117f,
     0x1.5f36acp-62f, 0x1.1c2854p-53f, 0.0f, 0.0f, 0.0f, 0x1.6dab3p-53f,
     0x1.4c59dcp-110f, 0x1.87a36ap-74f, 0x1.af3f32p-47f, 0x1.59f06ap-31f, 0.0f, 0.0f,
     0x1.ffb3e8p-45f, 0x1.d612ccp-68f, 0x1.0632fep-43f, 0.0f, 0.0f, 0x1.623d56p-20f,
     0x1.3979bp-39f, 0x1.7d864p-16f, 0.0f, 0.0f, 0x1.8b0352p-12f, 0.0f,
     0x1.fe619ep-83f, 0x1.4887aap-12f, 0x1.b36d78p-103f, 0.0f, 0.0f, 0x1.9a93aap-84f,
     0.0f, 0.0f, 0x1.427076p-33f, 0x1.900bccp-29f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.67f7e2p-44f, 0x1.42e422p-25f, 0x1.51b8dcp-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.03b294p-6f, 0x1.6ceacap-89f, 0x1.fc54e2p-9f, 0.0f, 0.0f, 0x1.ff3bdcp-92f,
     0.0f, 0.0f, 0x1.d478cp-86f, 0.0f, 0.0f, 0.0f, 0x1.bb7172p-1f, 0.0f, 0.0f, 0.0f,
     0x1.67f132p-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d0130ap-13f, 0x1.dc0d78p-119f,
     0x1.642a44p-44f, 0x1.a7708p-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.016a1ap-125f, 0.0f, 0x1.089c58p-24f, 0.0f, 0.0f, 0.0f, 0x1.3bede2p-52f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a7fd88p-117f, 0.0f, 0x1.9a5e38p-97f, 0x1.f321eep-67f, 0.0f,
     0.0f, 0.0f, 0x1.8c4e0ap-73f, 0.0f, 0.0f, 0x1.d3a632p-38f, 0x1.c23afcp-95f,
     0x1.e65c72p-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cb4a4ep-86f, 0x1.5d7ae6p-104f,
     0.0f, 0.0f, 0.0f, 0x1.160392p-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f6b61ap-104f, 0x1.88c7d4p-5f, 0.0f, 0x1p0f, 0x1.4ac288p-39f, 0x1.199022p-89f,
     0.0f, 0x1.dbcc5cp-86f, 0.0f, 0x1.18771ap-124f, 0.0f, 0x1.63bb56p-120f, 0.0f,
     0x1.4c5182p-89f, 0.0f, 0x1.bba4f2p-107f, 0x1.55fe96p-110f, 0x1.ad279p-108f,
     0x1.e19e08p-40f, 0.0f, 0.0f, 0.0f, 0x1.3318ecp-108f, 0x1.504716p-4f, 0.0f, 0.0f,
     0x1p0f, 0.0f, 0x1.8d7a5ap-4f, 0.0f, 0x1.af2976p-8f, 0.0f, 0x1.4abf4ap-64f, 0.0f,
     0x1.f0f776p-81f, 0.0f, 0x1.3066fep-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e62e98p-76f,
     0x1.a00f62p-55f, 0.0f, 0x1.94dc94p-13f, 0x1.198c0ap-92f, 0x1.be16ccp-54f, 0.0f,
     0x1.a7ec14p-67f, 0.0f, 0x1.d6b2fap-107f, 0x1.fca91ep-87f, 0x1.15d63ap-22f,
     0x1.3a9ef2p-117f, 0x1.6d7ea2p-64f, 0x1.709064p-68f, 0x1.cc61f4p-25f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.82ece2p-36f, 0x1.90cd86p-76f, 0.0f, 0x1.fe30f6p-30f, 0.0f,
     0x1.a40b06p-8f, 0x1.8dc84ap-39f, 0x1.8c7e78p-50f, 0x1.4c0a0cp-85f, 0.0f, 0.0f,
     0x1.530a4ap-105f, 0.0f, 0x1.3b740ep-46f, 0.0f, 0x1.2c2b5p-84f, 0.0f, 0.0f,
     0x1.a9adbep-106f, 0x1.71f17ep-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d3326p-8f, 0x1.e87014p-95f, 0x1.734718p-79f,
     0x1.b41bf6p-42f, 0.0f, 0.0f, 0x1.c8ec2ep-62f, 0.0f, 0x1.89ec48p-45f,
     0x1.22195cp-115f, 0.0f, 0.0f, 0.0f, 0x1.ea798ap-10f, 0x1p0f, 0.0f, 0.0f,
     0x1.ccc1a2p-21f, 0x1.eebe84p-120f, 0x1.e67f88p-47f, 0.0f, 0x1.102d9cp-76f, 0.0f,
     0x1.2ad0fep-57f, 0x1.1da812p-84f, 0.0f, 0x1.92efap-20f, 0.0f, 0x1.3a7c64p-73f,
     0x1.10260ap-101f, 0x1.086666p-115f, 0x1.3b9932p-85f, 0.0f, 0x1.221d0ep-114f,
     0x1.b00cp-47f, 0.0f, 0.0f, 0x1.2e5afcp-14f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.403cb8p-1f, 0x1.c99c2cp-81f, 0x1.5b76cep-47f, 0x1.c73226p-47f,
     0x1.e4519ep-66f, 0.0f, 0x1.9db448p-23f, 0x1.e9b40ap-65f, 0x1.bd9d6p-111f, 0.0f,
     0x1.121ab4p-39f, 0.0f, 0.0f, 0.0f, 0x1.5504c8p-6f, 0x1.ccc644p-40f,
     0x1.3b0de6p-95f, 0.0f, 0.0f, 0x1.b8db94p-63f, 0.0f, 0x1.be3f44p-61f, 0.0f, 0.0f,
     0x1.495294p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dc512cp-96f, 0.0f, 0.0f,
     0x1.2b63a2p-14f, 0x1.f2220ap-39f, 0.0f, 0x1.937318p-53f, 0x1.789674p-122f,
     0x1.473eap-16f, 0.0f, 0x1.82ea58p-88f, 0x1.51a764p-85f, 0.0f, 0x1.cfdafp-35f,
     0.0f, 0.0f, 0x1.79ae08p-101f, 0x1.14bcd2p-122f, 0.0f, 0x1.1ec5d8p-117f, 0.0f,
     0.0f, 0.0f, 0x1.fd4224p-28f, 0x1.b9a0ecp-99f, 0.0f, 0x1.3b2b9ep-85f,
     0x1.368f2ep-10f, 0.0f, 0x1.a06878p-59f, 0.0f, 0x1.65165p-120f, 0x1.6ab56ep-58f,
     0x1.b069d8p-54f, 0.0f, 0.0f, 0x1.fffb8cp-113f, 0x1.774p-16f, 0.0f, 0.0f, 0.0f,
     0x1.f08e96p-14f, 0x1.81ec46p-120f, 0x1.e7d2bap-38f, 0x1.527edap-32f, 0.0f,
     0x1.c736d4p-81f, 0.0f, 0.0f, 0x1.e99aeap-109f, 0.0f, 0.0f, 0x1.936392p-13f, 0.0f,
     0x1.535ac2p-60f, 0.0f, 0x1.c8282cp-26f, 0.0f, 0x1.fdcb6ap-67f, 0x1.b8e1d2p-107f,
     0x1.b1907cp-22f, 0x1.126488p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.184454p-108f,
     0x1.b45b72p-120f, 0x1.0641e6p-15f, 0x1.e98a64p-111f, 0.0f, 0x1.27c592p-62f,
     0x1.9928d6p-32f, 0.0f, 0x1.17ad7ap-122f, 0.0f, 0x1.e5e134p-13f, 0.0f,
     0x1.a7b668p-18f, 0.0f, 0.0f, 0x1.1b7484p-77f, 0x1.e38a56p-48f, 0x1.af4154p-23f,
     0x1.9f2d96p-113f, 0.0f, 0.0f, 0x1.71aa6ep-3f, 0.0f, 0.0f, 0x1.4cb7bcp-64f, 0.0f,
     0x1.b6486p-33f, 0.0f, 0.0f, 0.0f, 0x1.324672p-102f, 0.0f, 0.0f, 0.0f,
     0x1.0df2e2p-75f, 0x1.62b36ap-96f, 0.0f, 0x1.511564p-94f, 0.0f, 0.0f,
     0x1.639ceep-124f, 0x1.9e7fap-88f, 0.0f, 0x1.a60312p-122f, 0x1.459444p-90f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.26539cp-51f, 0x1.4d4e58p-89f,
     0x1.0f186p-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8d4f7ap-72f, 0x1.27e21p-46f,
     0x1.0ee26cp-26f, 0x1.242336p-66f, 0.0f, 0x1.a0ecf8p-97f, 0x1.a275e2p-77f, 0.0f,
     0.0f, 0x1.5a5e56p-2f, 0x1.967ed2p-59f, 0.0f, 0.0f, 0x1.ab59b6p-29f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.67b80ap-59f, 0x1.49dc7p-98f, 0x1.e8eb76p-92f,
     0x1.a85174p-121f, 0.0f, 0x1.cd3c6ap-79f, 0.0f, 0x1.fcf5bep-31f, 0x1.8824bp-96f,
     0x1.5100dep-49f, 0x1.317ea4p-119f, 0x1.fc9ca4p-72f, 0.0f, 0.0f, 0.0f,
     0x1.3315bp-60f, 0x1.4fedap-70f, 0.0f, 0.0f, 0x1.87685p-43f, 0x1.a77cap-2f,
     0x1.76b9a8p-81f, 0x1.88f142p-125f, 0x1.af0d5cp-111f, 0.0f, 0x1.a0ccbap-44f, 0.0f,
     0.0f, 0x1.848feap-103f, 0x1.40a2ecp-86f, 0x1.f6e676p-121f, 0x1.e5a696p-98f,
     0x1.3db914p-17f, 0.0f, 0.0f, 0x1.763b46p-4f, 0.0f, 0.0f, 0.0f, 0x1.49b51ap-117f,
     0x1.468abcp-48f, 0x1.2ed8f6p-124f, 0.0f, 0x1.abdf96p-77f, 0.0f, 0.0f, 0.0f,
     0x1.eabf8ep-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.97b148p-27f, 0.0f, 0.0f,
     0x1.2b3e7ep-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0f2a8cp-110f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.859d1ap-86f, 0.0f, 0.0f, 0.0f, 0x1.49332p-84f,
     0x1.69d4d8p-23f, 0.0f, 0.0f, 0x1.2f7bfep-28f, 0.0f, 0.0f, 0x1.bdba2ap-76f,
     0x1.1bf6eep-11f, 0x1.f94164p-55f, 0.0f, 0.0f, 0.0f, 0x1.818b0cp-52f, 0.0f, 0.0f,
     0.0f, 0x1.4f6976p-116f, 0.0f, 0x1.420c2ep-62f, 0.0f, 0.0f, 0x1.9fb7dap-114f,
     0x1.20a58ap-64f, 0x1.164186p-4f, 0.0f, 0x1.d8383cp-41f, 0.0f, 0x1.cd4df6p-47f,
     0.0f, 0.0f, 0.0f, 0x1.8f0be6p-90f, 0.0f, 0.0f, 0x1.720874p-66f, 0.0f, 0.0f,
     0x1.402182p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d1f272p-61f, 0x1.eddd46p-35f, 0.0f,
     0x1.2189b8p-52f, 0.0f, 0x1.f79f92p-36f, 0.0f, 0.0f, 0x1.9e0018p-124f, 0.0f,
     0x1.0b384p-11f, 0.0f, 0.0f, 0.0f, 0x1.4a297cp-36f, 0.0f, 0x1.48dc1p-61f, 0.0f,
     0.0f, 0.0f, 0x1.b4cd5cp-46f, 0.0f, 0.0f, 0x1.a5ed4ep-72f, 0x1.7e2a88p-123f,
     0x1.d5f96ap-31f, 0.0f, 0.0f, 0x1.3e45dep-83f, 0.0f, 0.0f, 0x1.bbd65ep-11f,
     0x1.f14822p-73f, 0x1.105c32p-100f, 0x1.5a3cep-25f, 0.0f, 0.0f, 0x1.d53228p-58f,
     0.0f, 0x1.98bc54p-48f, 0x1.fec0dep-16f, 0x1.f18f4p-21f, 0x1.897ea4p-90f, 0.0f,
     0.0f, 0.0f, 0x1.76c60ap-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e87dccp-46f, 0x1.2da358p-66f, 0.0f, 0x1.6c10bp-56f, 0.0f, 0x1.c1f684p-66f,
     0x1.f0d6b4p-64f, 0.0f, 0x1.b9714ap-80f, 0.0f, 0.0f, 0x1.7f8dbep-18f,
     0x1.0d335cp-91f, 0x1.f5c532p-65f, 0x1.a9d8cp-58f, 0x1.6941d4p-85f, 0.0f, 0.0f,
     0.0f, 0x1.9312fep-21f, 0.0f, 0.0f, 0x1.b2f506p-44f, 0x1.5f54dcp-77f, 0.0f,
     0x1.19f7c4p-53f, 0x1.cac978p-30f, 0.0f, 0x1.c3623p-10f, 0.0f, 0x1.3de994p-110f,
     0x1.6ac88ap-53f, 0x1.53028ep-97f, 0.0f, 0.0f, 0x1.a93d32p-67f, 0.0f,
     0x1.c022a8p-102f, 0.0f, 0x1.f24d9p-125f, 0.0f, 0x1.97cd36p-123f, 0.0f,
     0x1.8a2cfap-71f, 0x1.528856p-51f, 0.0f, 0.0f, 0.0f, 0x1.e2c064p-2f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f67b3ap-35f, 0x1.073048p-49f, 0x1.fd56dcp-85f,
     0x1.9e987ap-4f, 0.0f, 0.0f, 0.0f, 0x1.a80e6p-79f, 0x1.2cbf38p-122f, 0.0f,
     0x1.f356fep-67f, 0.0f, 0x1.9e026cp-103f, 0x1.380d8p-83f, 0x1.63f3d4p-104f, 0.0f,
     0.0f, 0x1.189a06p-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.35e83ap-55f, 0x1.062f96p-81f,
     0.0f, 0x1.802598p-94f, 0x1.83472p-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5c18c6p-33f,
     0x1.99cd06p-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.863deep-16f, 0.0f, 0.0f,
     0x1.0a9004p-71f, 0.0f, 0x1.7c7508p-13f, 0x1.b09af4p-24f, 0.0f, 0.0f,
     0x1.d8b614p-80f, 0x1.10045cp-4f, 0.0f, 0.0f, 0x1.10f836p-86f, 0.0f, 0.0f, 0.0f,
     0x1.ed2aaep-24f, 0.0f, 0x1.042254p-123f, 0x1.53ea5ep-90f, 0x1.bd339p-15f,
     0x1.395bacp-62f, 0.0f, 0.0f, 0.0f, 0x1.79093ep-65f, 0x1.c8adf4p-57f,
     0x1.111534p-44f, 0.0f, 0x1.adf47p-58f, 0.0f, 0.0f, 0x1.1f513p-88f,
     0x1.638258p-5f, 0.0f, 0x1.163b1p-63f, 0.0f, 0.0f, 0x1.d6e09ep-22f, 0.0f,
     0x1.5386cap-113f, 0.0f, 0x1.92b29cp-33f, 0.0f, 0x1.b4e77ep-74f, 0x1.eaf338p-111f,
     0.0f, 0.0f, 0x1.2dd184p-14f, 0x1p0f, 0x1.89e4c8p-50f, 0x1.37ecep-8f,
     0x1.251648p-55f, 0x1.7e59f8p-101f, 0.0f, 0x1.0a276ap-44f, 0x1.ac3cp-20f,
     0x1.395772p-117f, 0x1.1203dap-6f, 0x1.2dcf0ep-64f, 0x1.c8038ep-91f,
     0x1.135f06p-57f, 0.0f, 0x1.c5accp-124f, 0x1.668c54p-77f, 0.0f, 0x1.e68c2p-73f,
     0x1.296e4ep-25f, 0.0f, 0.0f, 0.0f, 0x1.95cc76p-30f, 0x1.0cb09p-110f, 0.0f,
     0x1.4d7b0ep-5f, 0.0f, 0x1.3b6998p-76f, 0x1.bb738ep-38f, 0.0f, 0.0f,
     0x1.79f892p-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e117dep-69f, 0.0f,
     0x1.34528ap-113f, 0x1.05b4fcp-68f, 0.0f, 0x1.2b87bap-2f, 0x1.11da7ap-72f,
     0x1.ee9174p-44f, 0.0f, 0.0f, 0x1.295f44p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.47ee1ep-24f, 0x1.ae69e4p-99f, 0x1.05bc86p-82f, 0x1.d8031cp-52f, 0.0f,
     0.0f, 0.0f, 0x1.16bb72p-94f, 0.0f, 0x1.50c0aep-34f, 0x1.1c2df6p-28f, 0.0f,
     0x1.f6049cp-95f, 0.0f, 0.0f, 0x1.5c7128p-110f, 0.0f, 0x1.0bef58p-66f, 0.0f,
     0x1.55773ap-45f, 0.0f, 0x1.32d4eap-54f, 0x1.002c38p-118f, 0x1.35e208p-18f,
     0x1.b95faap-65f, 0.0f, 0x1.ae9e86p-88f, 0x1.b3ed8p-94f, 0x1.d52772p-20f, 0.0f,
     0x1.eae428p-73f, 0.0f, 0x1.fbd3c4p-67f, 0x1.c26932p-125f, 0.0f, 0x1.82e648p-81f,
     0.0f, 0x1.0f8628p-42f, 0.0f, 0.0f, 0x1.55ca24p-54f, 0x1.2d889ap-49f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cfe6c6p-32f, 0x1.84d48cp-103f,
     0x1.f90728p-91f, 0.0f, 0x1.d9c18p-56f, 0x1.b9ddeep-85f, 0.0f, 0x1.44938p-68f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.bd4966p-98f, 0.0f, 0.0f, 0x1.59422ap-14f, 0.0f,
     0x1.4453a8p-106f, 0.0f, 0x1.b8c056p-85f, 0.0f, 0x1.61084cp-52f, 0.0f,
     0x1.76f8b4p-90f, 0x1.c3db44p-9f, 0.0f, 0.0f, 0.0f, 0x1.30527cp-31f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.84d3dap-29f, 0.0f, 0.0f, 0.0f, 0x1.31542ap-96f, 0.0f,
     0.0f, 0x1.0e5d2p-83f, 0.0f, 0.0f, 0x1.db446cp-40f, 0x1.626e7cp-113f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.0da842p-50f, 0x1.636226p-56f, 0.0f, 0x1.4862b2p-26f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.5d14dep-62f, 0.0f, 0.0f, 0.0f, 0x1.4d40cap-9f,
     0x1.e966d8p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1f9cbcp-45f, 0.0f,
     0x1.8b820cp-117f, 0x1.9bf38p-40f, 0.0f, 0.0f, 0x1.bc61cap-74f, 0.0f, 0.0f,
     0x1.c6bd2ap-57f, 0.0f, 0.0f, 0x1.b8bc78p-78f, 0x1.8468d8p-95f, 0x1.54ffbcp-104f,
     0.0f, 0x1.3bcd34p-66f, 0.0f, 0x1.0406c6p-72f
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
            tmp1 = Sleef_finz_cosf4_u10avx2128(tmp0);
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
    printf("Sleef_finz_cosf4_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_cosf4_u10avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
