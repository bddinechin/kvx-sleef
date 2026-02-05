/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_erfcf8_u15kvx.c --function \
 *     Sleef_finz_erfcf8_u15kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 8 --function-input-vector-size \
 *     8 --bench --no-embedded-bin --target kv3
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
     0x1.17fbf2p-40f, 0.0f, 0.0f, 0x1.d95bp-6f, 0.0f, 0x1.dccf3ep-123f,
     0x1.d18956p-32f, 0x1.4237bep-63f, 0x1p0f, 0.0f, 0.0f, 0x1.7012aep-95f,
     0x1.817646p-92f, 0x1.022df4p-18f, 0.0f, 0.0f, 0x1.d5031cp-120f, 0x1.8e5446p-91f,
     0x1.7c7876p-96f, 0x1.5a7eb4p-23f, 0.0f, 0x1.c33608p-93f, 0x1.44db4ep-15f,
     0x1.6e2eecp-122f, 0.0f, 0.0f, 0x1.308e54p-74f, 0x1.2acceep-53f, 0.0f,
     0x1.53d5e2p-21f, 0.0f, 0x1.c450f2p-26f, 0x1.3ed59cp-27f, 0.0f, 0x1.b7873ap-1f,
     0x1.1898p-17f, 0.0f, 0.0f, 0x1.2c6e8p-34f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e4fb0cp-39f, 0x1.84b018p-4f, 0.0f, 0x1.e178f2p-5f, 0x1.1537f4p-31f, 0.0f,
     0x1.6577acp-20f, 0.0f, 0.0f, 0.0f, 0x1.e4ddaap-58f, 0x1.8d6174p-45f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.c775a6p-95f, 0x1.7331fep-63f, 0.0f, 0.0f, 0x1.d5112p-53f, 0.0f,
     0x1.8fc1c8p-68f, 0x1.0df7dap-59f, 0x1.5ace8ap-85f, 0x1.0afd04p-23f, 0.0f,
     0x1.183048p-74f, 0x1.378db8p-26f, 0x1.443be2p-16f, 0x1.eb092p-20f, 0.0f,
     0x1.73d944p-112f, 0.0f, 0x1.fa9482p-123f, 0.0f, 0.0f, 0x1.e9103cp-117f, 0.0f,
     0.0f, 0x1.94076ap-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f23004p-126f,
     0x1.dd5f58p-106f, 0x1.8563aap-117f, 0.0f, 0.0f, 0x1.59b4f8p-63f, 0.0f,
     0x1.df7a8cp-67f, 0x1.814d4cp-49f, 0.0f, 0x1.c4657cp-66f, 0x1.cfca4cp-2f, 0.0f,
     0x1.63ad9p-46f, 0x1.620912p-66f, 0.0f, 0x1.18510ep-20f, 0.0f, 0x1.d61e5cp-10f,
     0.0f, 0x1.9491d2p-63f, 0.0f, 0.0f, 0x1.ba7204p-89f, 0.0f, 0x1.7b3aa6p-4f, 0.0f,
     0x1.3d60dcp-117f, 0.0f, 0x1.be86cap-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c717c8p-9f,
     0.0f, 0x1.bc9e68p-60f, 0.0f, 0x1.23f894p-81f, 0x1.2ea37cp-8f, 0.0f,
     0x1.249062p-30f, 0x1.0f6ecap-120f, 0x1.d20e36p-44f, 0x1.b331dap-77f, 0.0f,
     0x1.d804bp-116f, 0x1.6438p-58f, 0.0f, 0.0f, 0x1.4f308p-19f, 0.0f,
     0x1.23430cp-17f, 0x1.184098p-78f, 0x1.26e43ap-27f, 0x1.34ed92p-58f, 0.0f, 0.0f,
     0x1.bbc0eap-75f, 0.0f, 0x1.230b84p-56f, 0.0f, 0x1.0d3d5cp-103f, 0x1.40400ep-107f,
     0.0f, 0.0f, 0.0f, 0x1.6b5d92p-120f, 0x1.3bcb9ep-113f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e87ae6p-98f, 0x1.e65098p-116f, 0x1.a8b9a6p-35f, 0x1.e5d8ecp-34f, 0.0f,
     0x1.383a02p-28f, 0x1.87b9e8p-89f, 0.0f, 0x1.506e18p-65f, 0x1.7e211ap-58f,
     0x1.3fb14ap-9f, 0x1.4079dcp-54f, 0.0f, 0x1.bb026cp-68f, 0x1.15591cp-100f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c26376p-39f, 0.0f, 0.0f, 0.0f, 0x1.4220e8p-106f, 0.0f,
     0.0f, 0x1.10621p-27f, 0.0f, 0x1.e92a18p-36f, 0x1.52e8dcp-24f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.60c2dcp-44f, 0.0f, 0.0f, 0.0f, 0x1.04ae7ap-89f, 0.0f, 0.0f,
     0x1.d26c06p-33f, 0.0f, 0.0f, 0x1.2a37a2p-94f, 0x1.0eab46p-118f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.9f4f86p-9f, 0.0f, 0x1.a1453cp-90f, 0.0f, 0.0f, 0x1.65f5e8p-30f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.3faac2p-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.caa5eep-121f,
     0x1.cda072p-16f, 0x1.0df966p-100f, 0x1.f408e6p-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.029738p-5f, 0.0f, 0x1.25ca82p-24f, 0.0f, 0.0f, 0x1.4e6c5cp-92f,
     0x1.d2d9e6p-79f, 0x1.d08434p-96f, 0.0f, 0.0f, 0x1.12c9f6p-104f, 0x1.1405dep-26f,
     0x1.95192ap-14f, 0.0f, 0x1.24ff42p-53f, 0.0f, 0x1.abf918p-97f, 0x1.053a9ep-9f,
     0x1.d14816p-32f, 0x1.756c44p-67f, 0x1.40ea96p-80f, 0x1.3c044ap-58f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.2a4818p-51f, 0x1.730578p-111f, 0x1.b9f2fcp-36f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.76009p-26f, 0x1.d5977cp-66f, 0.0f, 0x1.533216p-27f, 0x1.48eb34p-17f,
     0x1.da5d2cp-83f, 0x1.4ce758p-106f, 0.0f, 0.0f, 0x1.4b482p-125f, 0x1.11286cp-84f,
     0x1.77b982p-40f, 0.0f, 0x1.4dbc4ap-67f, 0x1.a78802p-52f, 0.0f, 0.0f,
     0x1.be5e4cp-105f, 0.0f, 0.0f, 0.0f, 0x1.3d4816p-44f, 0x1.a2dae2p-98f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.17330ep-30f, 0.0f, 0x1.c3808ap-35f, 0.0f,
     0x1.07646ep-68f, 0x1.1723fp-121f, 0x1.3699ap-12f, 0.0f, 0x1.532ed8p-65f,
     0x1.4b0138p-28f, 0.0f, 0x1.f5f7dp-109f, 0x1.4b56fp-16f, 0x1.5b13f6p-51f,
     0x1.bcd498p-13f, 0.0f, 0.0f, 0.0f, 0x1.585c4cp-38f, 0.0f, 0x1.57b9fp-121f,
     0x1.a24262p-123f, 0x1.ca2072p-100f, 0x1.3a2a3ep-95f, 0.0f, 0.0f, 0x1.84eaa6p-58f,
     0.0f, 0x1.03c242p-5f, 0x1.4f711p-23f, 0x1.d9f004p-73f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.630d44p-99f, 0x1.d44eb8p-110f, 0x1.56469ep-78f, 0.0f, 0.0f, 0x1.63e5fap-77f,
     0x1.f53b46p-25f, 0x1.0191dap-102f, 0.0f, 0.0f, 0x1.4d3a0ap-116f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.5c9292p-1f, 0x1.7e702ap-120f, 0x1.0f4292p-54f, 0.0f,
     0x1.699e84p-47f, 0.0f, 0.0f, 0.0f, 0x1.2bb49cp-27f, 0.0f, 0.0f, 0x1.bd8f9cp-98f,
     0x1.b63324p-94f, 0x1.4dfb44p-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b275d6p-40f,
     0x1.38d7dp-61f, 0x1.fc2dap-75f, 0x1.8051bep-47f, 0.0f, 0x1.1d6442p-66f,
     0x1.7884bap-20f, 0.0f, 0x1.95d8ap-28f, 0x1.396128p-115f, 0.0f, 0.0f,
     0x1.53299cp-51f, 0.0f, 0.0f, 0.0f, 0x1.90f046p-39f, 0.0f, 0x1.b2b896p-14f, 0.0f,
     0.0f, 0.0f, 0x1.f55764p-101f, 0.0f, 0x1.1c745p-71f, 0x1.425e5ap-124f,
     0x1.be77a8p-99f, 0.0f, 0.0f, 0x1.36f378p-117f, 0.0f, 0.0f, 0.0f, 0x1.a6655ep-66f,
     0x1.1319f2p-40f, 0.0f, 0.0f, 0x1.2a792ap-76f, 0x1.a0647ap-26f, 0x1.5491bap-1f,
     0x1.6eaae2p-95f, 0x1.45d43ap-38f, 0.0f, 0x1.a3447ep-125f, 0.0f, 0.0f, 0.0f,
     0x1.f8e17cp-111f, 0x1.35251cp-95f, 0x1.03e168p-47f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.731c7cp-5f, 0x1.b2d9fep-72f, 0x1.d3a82ap-124f, 0x1.22b1a6p-26f,
     0x1.2ba728p-69f, 0.0f, 0.0f, 0x1.cecaf4p-62f, 0.0f, 0.0f, 0x1.bffe8ep-35f, 0.0f,
     0x1.08bd2ap-21f, 0.0f, 0.0f, 0x1.00abc6p-93f, 0.0f, 0.0f, 0.0f, 0x1.c761d6p-126f,
     0x1.4725a6p-79f, 0x1.63639ap-55f, 0x1.3db8e2p-11f, 0x1.f01e58p-107f,
     0x1.e70fe8p-117f, 0.0f, 0.0f, 0x1.b78034p-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.8a973cp-42f, 0.0f, 0x1.e1dc8cp-102f, 0x1.3a5452p-68f, 0.0f,
     0x1.269d62p-9f, 0.0f, 0x1.b78768p-84f, 0.0f, 0x1.f877c2p-40f, 0.0f,
     0x1.463ff2p-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0caa08p-94f, 0.0f, 0.0f,
     0x1.5defcep-80f, 0x1.4de486p-90f, 0.0f, 0x1.138acep-12f, 0.0f, 0x1.e0672ap-111f,
     0.0f, 0x1.d676f2p-113f, 0.0f, 0.0f, 0x1.ea83d2p-8f, 0.0f, 0x1.153adcp-2f, 0.0f,
     0x1.7dad3ap-117f, 0x1.b62828p-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0d6a4ap-90f, 0x1.4fd166p-57f, 0x1.a66d52p-116f, 0.0f, 0.0f, 0x1.f292b8p-23f,
     0.0f, 0.0f, 0.0f, 0x1.d84932p-56f, 0x1.4a305cp-38f, 0x1.0c7a24p-94f,
     0x1.868b14p-29f, 0x1.f23e12p-50f, 0.0f, 0x1.e16d4cp-103f, 0x1.0050f4p-8f, 0.0f,
     0.0f, 0.0f, 0x1.0bd48ep-53f, 0x1.30ae5cp-81f, 0.0f, 0x1.389deap-22f,
     0x1.77c822p-81f, 0x1.97950ep-16f, 0x1.42fae2p-34f, 0x1.1ecea4p-22f, 0.0f,
     0x1.f1137ep-52f, 0.0f, 0x1.a4d7a6p-44f, 0.0f, 0x1.86a05ep-6f, 0.0f, 0.0f, 0.0f,
     0x1.2b475ep-77f, 0x1.94217p-25f, 0x1.b048a8p-111f, 0x1.fd0828p-15f, 0.0f, 0.0f,
     0x1.f49278p-7f, 0x1.49a606p-116f, 0.0f, 0.0f, 0.0f, 0x1.3b7afp-20f, 0.0f, 0.0f,
     0x1.62ae6cp-6f, 0x1.92f426p-55f, 0.0f, 0.0f, 0x1.0d1efcp-75f, 0x1.7f151ep-6f,
     0x1.ecb324p-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f4e9fcp-38f, 0x1.7af146p-80f,
     0x1.5e4594p-72f, 0x1.47d11p-47f, 0x1.798bdep-122f, 0.0f, 0.0f, 0.0f,
     0x1.01d1bap-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3ad95ap-58f, 0.0f, 0x1.bb08ecp-31f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e95634p-92f, 0.0f, 0x1.55b2d6p-28f, 0.0f,
     0x1.77100ap-10f, 0x1.daa2dp-32f, 0x1.2e1948p-23f, 0x1.4fe49p-106f, 0.0f,
     0x1.875b5ep-88f, 0x1.0ed55ap-43f, 0.0f, 0x1.a6da1ep-6f, 0x1.f2e5c6p-49f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7b38cap-78f, 0x1.3c751cp-99f, 0x1.63619cp-70f,
     0x1.d3b4d4p-113f, 0x1.023346p-122f, 0x1.22f75p-124f, 0.0f, 0x1.98c0c4p-69f,
     0x1.67c90ep-68f, 0x1.e50a0ap-101f, 0x1.e40c4ep-86f, 0.0f, 0x1.d01608p-49f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f2739cp-39f, 0.0f, 0x1.efeb3ap-64f, 0.0f, 0x1.7eb71p-126f,
     0x1p0f, 0x1.580e12p-2f, 0.0f, 0.0f, 0x1.c3e0aap-96f, 0x1.7cb36cp-75f,
     0x1.ea5424p-54f, 0.0f, 0.0f, 0.0f, 0x1.eb6f9ap-49f, 0x1.75e664p-126f, 0.0f, 0.0f,
     0x1.78c04p-89f, 0.0f, 0.0f, 0.0f, 0x1.4b363cp-101f, 0x1.6d2adp-11f,
     0x1.b62cd4p-85f, 0.0f, 0.0f, 0x1.6fc8b8p-55f, 0.0f, 0.0f, 0.0f, 0x1.4cf17ep-10f,
     0x1.7085aap-33f, 0x1.3fb7c2p-4f, 0x1.6b56p-34f, 0x1.58cf7p-104f, 0x1.ca97f8p-33f,
     0x1.18c148p-34f, 0x1.5e73a2p-68f, 0x1.18b728p-55f, 0.0f, 0.0f, 0.0f,
     0x1.97dd74p-48f, 0x1.829e12p-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d3decap-57f,
     0x1.7e8046p-78f, 0.0f, 0x1.1732f8p-22f, 0x1.070506p-88f, 0x1.be9a28p-78f, 0.0f,
     0x1.b1e38ep-105f, 0.0f, 0x1.8a1442p-77f, 0.0f, 0.0f, 0.0f, 0x1.547a8ep-43f, 0.0f,
     0.0f, 0.0f, 0x1.5b200cp-15f, 0.0f, 0x1.73e56p-92f, 0.0f, 0x1.300f14p-99f,
     0x1.e58e14p-107f, 0.0f, 0.0f, 0.0f, 0x1.2c3146p-9f, 0x1.a50ae8p-41f,
     0x1.35ad4p-52f, 0.0f, 0x1.ecf856p-44f, 0x1.7f892p-90f, 0x1.433ed4p-22f,
     0x1.bb8c02p-38f, 0.0f, 0.0f, 0x1.014d66p-46f, 0.0f, 0x1.62e172p-116f, 0.0f,
     0x1.b6ba18p-20f, 0.0f, 0x1.216604p-84f, 0x1.2a0a2ep-110f, 0x1.1b51a4p-98f, 0.0f,
     0.0f, 0x1.05bc4ep-47f, 0x1.a01058p-82f, 0x1.315748p-66f, 0x1.4b0de6p-42f,
     0x1.d9f0c4p-45f, 0.0f, 0.0f, 0x1.083302p-25f, 0.0f, 0x1.e0ba64p-16f, 0.0f, 0.0f,
     0x1.aba96ep-20f, 0x1.147ea2p-96f, 0x1.f16568p-73f, 0.0f, 0.0f, 0x1.84dc18p-113f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7eb808p-19f, 0.0f, 0.0f, 0x1.498e78p-29f,
     0x1.626d34p-32f, 0x1.40268cp-90f, 0.0f, 0x1.dff8a8p-45f, 0.0f, 0x1.de0776p-93f,
     0x1.05758ap-85f, 0.0f, 0.0f, 0x1.83f628p-101f, 0x1.66ee28p-69f, 0.0f, 0.0f,
     0x1.5d59f4p-101f, 0x1.4b05dap-85f, 0x1.9b205ep-13f, 0x1.57cb0cp-82f,
     0x1.8ac094p-12f, 0x1.16eb0cp-29f, 0x1.0a871ap-10f, 0x1.7f0676p-104f,
     0x1.488d1ap-102f, 0x1.4e1554p-96f, 0x1.17845p-115f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3814d4p-38f, 0x1.ab7e52p-90f, 0x1.0b0ac6p-52f, 0x1.ab6356p-108f, 0.0f, 0.0f,
     0.0f, 0x1.e06644p-76f, 0x1.738e96p-10f, 0x1.6a8afcp-89f, 0x1.8d9aeap-102f, 0.0f,
     0.0f, 0x1.2014aep-11f, 0.0f, 0x1.66916cp-91f, 0x1.79e996p-125f, 0x1.1c94p-123f,
     0x1.b8967cp-14f, 0x1.6c5518p-29f, 0x1.44bc58p-126f, 0.0f, 0x1.fd2bc8p-69f,
     0x1.a4e624p-43f, 0x1.e337fap-50f, 0.0f, 0x1.030cd6p-5f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9eb6bcp-38f, 0x1.563334p-23f,
     0x1.2f08cap-29f, 0x1.bc86ccp-8f, 0.0f, 0.0f, 0.0f, 0x1.80a61cp-34f,
     0x1.486f38p-62f, 0.0f, 0.0f, 0x1.d1e1f8p-108f, 0x1.99ff46p-82f, 0.0f, 0.0f, 0.0f,
     0x1.7d241ep-61f, 0.0f, 0.0f, 0x1.928b6ap-44f, 0.0f, 0x1.c0c7ccp-32f,
     0x1.4d57b4p-74f, 0.0f, 0x1.f4e24ep-68f, 0.0f, 0x1.2d1994p-43f, 0x1.2609d4p-4f,
     0x1.1695eap-90f, 0.0f, 0.0f, 0x1.bbe668p-27f, 0x1.e1fdeep-51f, 0.0f, 0.0f, 0.0f,
     0x1.b3d6b2p-68f, 0.0f, 0x1.0cdbe2p-106f, 0x1.18c0acp-31f, 0.0f, 0.0f,
     0x1.69a67ap-38f, 0x1.67c97ap-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4eadd6p-109f,
     0x1.56d2cp-102f, 0x1.4bbeeep-75f, 0x1.9408bp-55f, 0x1.a93d52p-10f, 0.0f, 0.0f,
     0x1.e47272p-8f, 0x1.830cf4p-35f, 0.0f, 0x1.899dc4p-116f, 0x1.4c217ap-93f,
     0x1.6c1d84p-89f, 0x1.0a7418p-103f, 0.0f, 0x1.f9e1e2p-25f, 0x1.24f28ep-23f, 0.0f,
     0.0f, 0.0f, 0x1.7b7972p-23f, 0.0f, 0x1.91d192p-39f, 0x1.ceb306p-19f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1566c8p-37f, 0x1.136ff6p-102f, 0.0f, 0.0f, 0.0f, 0x1.14bc88p-75f,
     0.0f, 0x1.bc083ap-26f, 0x1.1a3d58p-77f, 0.0f, 0x1.1fe5bap-119f, 0x1.8d924p-73f,
     0x1.a6ebe6p-85f, 0.0f, 0x1.3e2332p-97f, 0x1.b14d6cp-61f, 0x1.4803c4p-72f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.4ef05ep-125f, 0x1.d02f52p-125f, 0.0f, 0x1.b85662p-57f,
     0x1.ad9d78p-48f, 0x1.42671cp-26f, 0.0f, 0.0f, 0x1.ef185ep-83f, 0.0f,
     0x1.fe7ef6p-63f, 0.0f, 0.0f, 0x1.7e5796p-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f8a24cp-65f, 0x1.9aa87ep-29f, 0x1.e6150ep-72f, 0.0f, 0x1.3b8bbp-32f,
     0x1.3fa916p-95f, 0x1.a57e7cp-117f, 0x1.f30b4cp-32f, 0.0f, 0x1.6a95dep-36f, 0.0f,
     0x1.02160cp-93f, 0.0f, 0.0f, 0x1.f3b0acp-55f, 0.0f, 0x1.ef48p-27f,
     0x1.e79aa4p-91f, 0x1.ee337ep-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.60afa2p-10f, 0x1.08ee1ep-53f, 0x1.cf13ap-74f, 0.0f, 0.0f, 0.0f,
     0x1.4ad13ap-27f, 0.0f, 0.0f, 0.0f, 0x1.cddc6cp-119f, 0x1.b6f10ap-74f,
     0x1.95b5bap-109f, 0.0f, 0.0f, 0x1.34d182p-105f, 0x1.41f8a2p-72f, 0x1.223b74p-55f,
     0.0f, 0x1.af416p-120f, 0x1.c3ff6p-40f, 0x1.9e7f2ep-86f, 0.0f, 0x1.f4c4f6p-105f,
     0.0f, 0.0f, 0x1.8cd03ap-87f, 0x1.731b58p-85f, 0x1.4ba428p-111f, 0x1.72adfcp-57f,
     0x1.c5cfe4p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.afc5d8p-64f, 0x1.bbd9f6p-4f, 0.0f,
     0x1.1e5dcap-48f, 0.0f, 0x1.f9da54p-4f, 0.0f, 0x1.d49aaap-88f, 0x1.572286p-90f,
     0x1.573a6cp-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.72de9cp-95f, 0x1.9942cap-11f, 0.0f,
     0.0f, 0.0f
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
            tmp1 = Sleef_finz_erfcf8_u15kvx(tmp0);
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
    printf("Sleef_finz_erfcf8_u15kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_finz_erfcf8_u15kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
