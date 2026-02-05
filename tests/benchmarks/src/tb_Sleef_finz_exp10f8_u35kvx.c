/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_exp10f8_u35kvx.c --function \
 *     Sleef_finz_exp10f8_u35kvx --headers sleef.h,ml_support_lib.h \
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
     0x1.7da6e8p-61f, 0.0f, 0.0f, 0x1.a2835p-78f, 0.0f, 0x1.ca1284p-84f,
     0x1.f615dep-7f, 0.0f, 0x1.4f22acp-26f, 0x1.58d00ep-72f, 0x1.bd46a6p-44f, 0.0f,
     0.0f, 0x1.c8db38p-102f, 0x1.fa6eap-63f, 0x1.a02e22p-89f, 0.0f, 0.0f,
     0x1.816b7ep-118f, 0x1.391bep-30f, 0.0f, 0.0f, 0.0f, 0x1.27e65cp-98f,
     0x1.70ae1cp-25f, 0.0f, 0.0f, 0x1.ad3072p-13f, 0.0f, 0.0f, 0x1.e95904p-73f, 0.0f,
     0x1.7d24dp-35f, 0.0f, 0x1.d56be8p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2b842p-37f,
     0.0f, 0x1.9b93cap-98f, 0x1.2ca6a8p-55f, 0.0f, 0.0f, 0x1.ccd77ep-26f, 0.0f, 0.0f,
     0x1.577f8p-34f, 0.0f, 0x1.8d9662p-27f, 0.0f, 0x1.223154p-27f, 0.0f, 0.0f, 0.0f,
     0x1.9f9452p-20f, 0.0f, 0.0f, 0.0f, 0x1.61cbf4p-13f, 0.0f, 0x1.8b383ep-13f, 0.0f,
     0x1.eeb35p-78f, 0.0f, 0.0f, 0x1.6e9ecap-76f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c11346p-78f, 0x1.bf2a7ap-31f, 0.0f, 0x1.324ef4p-80f, 0.0f, 0x1.b21af2p-119f,
     0.0f, 0x1.94eb1p-30f, 0x1.cf1852p-77f, 0x1.fb6ba6p-115f, 0.0f, 0.0f,
     0x1.128374p-41f, 0.0f, 0x1.a89a36p-60f, 0x1.0a8d52p-30f, 0.0f, 0x1.2f885ep-50f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.097c4ep-115f, 0x1.ff6ec6p-27f, 0x1.395ac8p-32f, 0.0f,
     0.0f, 0x1.5c259ep-70f, 0x1.f8abb4p-110f, 0x1.e23614p-122f, 0x1.149c4ap-32f, 0.0f,
     0x1.2a2e16p-45f, 0.0f, 0.0f, 0.0f, 0x1.be124ap-58f, 0.0f, 0.0f, 0x1.8ddff4p-51f,
     0.0f, 0x1.5b5f96p-58f, 0x1.0754e2p-3f, 0.0f, 0.0f, 0.0f, 0x1.80e94p-7f,
     0x1.656f8ep-57f, 0.0f, 0x1.5507bep-6f, 0.0f, 0.0f, 0x1p0f, 0x1.7e275p-126f,
     0x1.b1b97ep-96f, 0x1.a2cb2p-110f, 0x1.a9c44cp-81f, 0x1.de3a3ep-8f,
     0x1.7bb70cp-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7e06d8p-23f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d397bap-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e27a8cp-105f, 0x1p0f, 0x1.46d7c2p-17f, 0x1.44e71p-39f, 0.0f, 0x1.211284p-60f,
     0.0f, 0x1.249e02p-61f, 0x1.7ecf44p-77f, 0.0f, 0x1.31e3bp-11f, 0x1.d738dep-64f,
     0x1.ca075cp-83f, 0.0f, 0.0f, 0x1.51ef2cp-72f, 0.0f, 0.0f, 0x1.2badbap-6f,
     0x1.f9b228p-5f, 0x1.acc56cp-74f, 0x1.96db9ap-29f, 0x1.b8c1ccp-92f,
     0x1.965144p-77f, 0.0f, 0.0f, 0.0f, 0x1.3f5188p-68f, 0.0f, 0x1.36e78p-37f,
     0x1.d7a42cp-23f, 0x1.aa5834p-87f, 0x1.10004p-123f, 0x1.52096cp-70f,
     0x1.a6ed4cp-120f, 0x1.cf70ccp-1f, 0x1.bdf1c6p-122f, 0x1.f4be06p-25f,
     0x1.0190c2p-52f, 0x1.7f729p-63f, 0x1.855358p-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.670f6p-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7b6f7cp-31f, 0.0f,
     0x1.e21332p-116f, 0.0f, 0x1.49e0dap-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.c2534p-38f, 0x1.229a52p-59f, 0x1.62c1b6p-105f, 0x1.1116dcp-18f,
     0.0f, 0.0f, 0.0f, 0x1.f4bba8p-95f, 0x1.fefe02p-36f, 0.0f, 0x1.7097d4p-101f, 0.0f,
     0.0f, 0x1.b905f4p-82f, 0.0f, 0.0f, 0x1.13119ap-45f, 0x1.77f32ap-36f,
     0x1.fab8c6p-73f, 0x1.ac7a4cp-104f, 0.0f, 0x1.586346p-35f, 0.0f, 0.0f,
     0x1.00f56ap-18f, 0x1.822e64p-52f, 0.0f, 0x1.618c38p-126f, 0.0f, 0x1.fdb442p-31f,
     0.0f, 0x1.481c4ep-87f, 0.0f, 0x1.8a2782p-73f, 0.0f, 0x1.5491a2p-60f,
     0x1.352ccap-30f, 0.0f, 0.0f, 0x1.049796p-50f, 0x1.a3a1p-125f, 0x1.a8d06p-125f,
     0.0f, 0.0f, 0.0f, 0x1.122ab4p-111f, 0.0f, 0.0f, 0x1.5e0024p-34f, 0x1.3c587ap-29f,
     0.0f, 0.0f, 0x1.4b0a96p-27f, 0x1.caa308p-74f, 0.0f, 0.0f, 0x1.940222p-99f, 0.0f,
     0x1.e9b502p-52f, 0x1.c2ee04p-104f, 0x1.ac4b0cp-40f, 0.0f, 0x1.5e154ap-107f,
     0x1.5f2362p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cd8024p-42f, 0.0f, 0x1.5cf39p-1f,
     0x1.d17a84p-112f, 0x1.53f26cp-6f, 0x1.9c2d32p-4f, 0x1.b8ca6p-110f,
     0x1.4f6b54p-111f, 0x1.3d9e56p-46f, 0x1.5bebbap-72f, 0.0f, 0.0f, 0x1.0d1a9ep-85f,
     0x1.f9ce04p-111f, 0x1.5a4266p-22f, 0.0f, 0.0f, 0.0f, 0x1.901ca2p-71f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.9cc9cap-64f, 0.0f, 0x1.3702eap-21f, 0x1.63b072p-81f,
     0x1.9f1d2ep-36f, 0x1.0d8f0ap-83f, 0.0f, 0x1.ee2bf6p-47f, 0x1.ffb0cep-115f, 0.0f,
     0x1.1e7fe6p-90f, 0x1.3ac402p-124f, 0.0f, 0.0f, 0x1.03ec8ep-93f, 0x1.df68bep-67f,
     0.0f, 0x1.9f33e2p-52f, 0x1.9f8bfap-84f, 0.0f, 0x1.c44c02p-68f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b0ef16p-111f, 0x1.cb5c7ap-49f, 0.0f, 0.0f, 0.0f,
     0x1.127632p-86f, 0x1.74a5fep-89f, 0x1.242f12p-71f, 0x1.11152ap-5f, 0.0f,
     0x1.ff0c92p-17f, 0.0f, 0.0f, 0.0f, 0x1.12ca92p-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.38d392p-5f, 0.0f, 0x1.c60ebep-45f, 0x1.4b01f6p-50f, 0.0f,
     0x1.505598p-92f, 0.0f, 0.0f, 0x1.f4374cp-57f, 0x1.5f9efp-38f, 0x1.a46d3ap-14f,
     0.0f, 0x1.64a772p-58f, 0x1.afe246p-78f, 0.0f, 0x1.cb78dp-122f, 0.0f,
     0x1.7e0d8ep-70f, 0.0f, 0.0f, 0x1.ed22d2p-85f, 0.0f, 0.0f, 0x1.0b1beep-6f, 0.0f,
     0x1.0c4aa2p-91f, 0.0f, 0x1.38280ap-42f, 0.0f, 0x1.f46cp-12f, 0x1.63d352p-31f,
     0x1.434dacp-38f, 0.0f, 0x1.e4af3ep-37f, 0.0f, 0x1.989b6ep-21f, 0x1.d7504cp-110f,
     0.0f, 0x1.9bdbb4p-39f, 0x1.3439e2p-113f, 0.0f, 0.0f, 0x1.73e366p-5f,
     0x1.d0943ap-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.32355p-2f, 0x1.85b1d4p-57f,
     0.0f, 0x1.9f96fep-106f, 0x1.9a898p-19f, 0x1.8a97ccp-107f, 0.0f, 0.0f,
     0x1.6a942p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9cda18p-7f, 0x1.f4a2bap-57f, 0.0f,
     0x1.fc93b2p-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e515aap-75f, 0x1.2f9f82p-21f,
     0x1.9f6272p-67f, 0x1.0c27b4p-46f, 0.0f, 0x1.aad626p-4f, 0.0f, 0x1.5a76ecp-6f,
     0.0f, 0x1.4a21dep-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4939fcp-115f, 0x1.c5c176p-47f,
     0x1.d68348p-40f, 0x1.fbd182p-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e27a6ap-62f,
     0.0f, 0.0f, 0x1.a3933cp-4f, 0.0f, 0.0f, 0.0f, 0x1.2c20ep-28f, 0x1.e08c7ep-97f,
     0x1.f6b23ap-110f, 0x1.5944a4p-9f, 0.0f, 0x1.35fab8p-81f, 0x1.57e4e6p-84f, 0.0f,
     0.0f, 0.0f, 0x1.dba5dcp-29f, 0x1.535d76p-25f, 0x1.bc8c78p-78f, 0x1.1af7e6p-38f,
     0.0f, 0.0f, 0.0f, 0x1.faf1bep-52f, 0x1.1bb21ep-13f, 0x1.a68878p-4f, 0.0f, 0.0f,
     0x1.2fb52ep-94f, 0.0f, 0x1.b2e154p-1f, 0.0f, 0.0f, 0.0f, 0x1.61c486p-77f, 0.0f,
     0.0f, 0.0f, 0x1.abdd24p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d37474p-23f, 0.0f, 0.0f,
     0x1.275fp-31f, 0x1.ccda46p-42f, 0.0f, 0x1.7f51f2p-13f, 0x1.2f23e2p-18f,
     0x1.bd65ccp-74f, 0x1.acedccp-45f, 0.0f, 0x1.d728a6p-123f, 0x1.fb35c6p-79f,
     0x1.b276aap-18f, 0.0f, 0x1.a13a2p-19f, 0.0f, 0.0f, 0.0f, 0x1.7e0f28p-123f,
     0x1.985b9p-48f, 0x1.976b74p-48f, 0.0f, 0.0f, 0x1.13f002p-96f, 0x1.ae593ap-12f,
     0x1.37f706p-99f, 0.0f, 0x1.e7a1a6p-24f, 0x1.4da038p-80f, 0x1.1674ecp-8f, 0.0f,
     0x1.c9324cp-94f, 0.0f, 0.0f, 0x1.60e9b4p-84f, 0.0f, 0x1.fb4948p-83f, 0.0f,
     0x1.a3055ap-103f, 0x1.1ce072p-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.030b9cp-63f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c6e994p-18f, 0x1.c90a36p-5f, 0x1.1d3ba2p-61f,
     0x1.5c33b4p-29f, 0.0f, 0x1.ffc7b8p-45f, 0.0f, 0x1.a09ddep-73f, 0x1.89d784p-82f,
     0.0f, 0.0f, 0.0f, 0x1.29d4cep-109f, 0x1.f2f6b2p-6f, 0.0f, 0.0f, 0.0f,
     0x1.2f36cp-92f, 0.0f, 0.0f, 0x1.e3904cp-52f, 0x1.1c5d64p-115f, 0.0f,
     0x1.d892dcp-20f, 0.0f, 0.0f, 0x1.51878ep-89f, 0x1.73af9cp-125f, 0x1.bc2e4ap-42f,
     0.0f, 0.0f, 0x1.d16716p-26f, 0x1.0359ap-115f, 0x1.18b8b2p-43f, 0.0f,
     0x1.b8157ep-55f, 0x1.4fd1c6p-60f, 0.0f, 0.0f, 0x1.3cf9ap-30f, 0x1.7b3adap-102f,
     0x1.a68152p-8f, 0x1.5b7762p-80f, 0x1.9fefb2p-74f, 0.0f, 0x1.d74e8ep-53f,
     0x1.d1e9c8p-63f, 0x1.1b5364p-18f, 0.0f, 0x1.a10358p-40f, 0.0f, 0x1.9714e4p-115f,
     0.0f, 0.0f, 0x1.eb1a4ep-5f, 0x1.56ee2cp-19f, 0.0f, 0.0f, 0.0f, 0x1.953f1ep-94f,
     0x1.08808cp-121f, 0.0f, 0.0f, 0.0f, 0x1.c1dbaap-72f, 0.0f, 0x1.1fe87p-118f,
     0x1.5f424p-72f, 0x1.ec39eep-47f, 0x1.b8a872p-126f, 0.0f, 0.0f, 0x1.b1c2f2p-124f,
     0x1.e0b1b4p-4f, 0.0f, 0x1.37ad7cp-78f, 0x1.6fdd5ep-80f, 0x1.6dd55p-41f, 0.0f,
     0.0f, 0.0f, 0x1.fa51bcp-23f, 0x1.777956p-119f, 0.0f, 0x1.554388p-65f, 0.0f, 0.0f,
     0.0f, 0x1.96ab6ap-81f, 0x1.abcfap-92f, 0x1.7a9624p-102f, 0.0f, 0x1.f4109cp-66f,
     0.0f, 0.0f, 0.0f, 0x1.3e3718p-75f, 0x1.ca4d08p-73f, 0x1.340094p-80f, 0.0f,
     0x1.66707ep-39f, 0.0f, 0.0f, 0x1.ce5c12p-8f, 0.0f, 0.0f, 0.0f, 0x1.e0255cp-102f,
     0.0f, 0.0f, 0x1.f2361cp-38f, 0.0f, 0x1.63916ap-93f, 0x1.3cdc2cp-82f, 0.0f, 0.0f,
     0.0f, 0x1.5e61b4p-124f, 0x1.0a03cap-3f, 0.0f, 0.0f, 0.0f, 0x1.27c27cp-112f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.321822p-2f, 0x1.ab2bfep-6f, 0x1.8386aap-40f,
     0x1.c2a93p-93f, 0.0f, 0.0f, 0.0f, 0x1.ef7b3p-19f, 0.0f, 0.0f, 0.0f,
     0x1.189056p-36f, 0x1.0c0e3ep-2f, 0x1.1884cap-28f, 0x1.b9f64ep-45f,
     0x1.df1af6p-89f, 0x1.934eaep-73f, 0.0f, 0x1.eacde4p-100f, 0.0f, 0x1.d2ec2p-96f,
     0x1.6169e6p-27f, 0.0f, 0x1.e41808p-12f, 0.0f, 0x1.232d7cp-6f, 0.0f,
     0x1.0136p-95f, 0x1.bbae76p-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.262878p-97f, 0.0f,
     0.0f, 0.0f, 0x1.d001f8p-13f, 0x1.e51d36p-94f, 0.0f, 0x1.8d9c6ap-2f, 0.0f,
     0x1.fc72c6p-109f, 0x1.0e1246p-103f, 0.0f, 0.0f, 0x1.516aaap-40f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.6b0dfep-99f, 0x1.36ac8cp-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.df5b44p-40f, 0x1.47e518p-67f, 0x1.5980c4p-45f, 0x1.e24702p-49f, 0.0f, 0.0f,
     0.0f, 0x1.93223p-54f, 0x1.58fa28p-101f, 0.0f, 0.0f, 0.0f, 0x1.747cp-44f, 0.0f,
     0.0f, 0x1.541158p-18f, 0.0f, 0x1.14a4a4p-43f, 0.0f, 0x1.848394p-100f,
     0x1.19ea82p-4f, 0x1.c36524p-58f, 0x1.bd6022p-72f, 0x1.adf89ap-57f,
     0x1.a51ac4p-88f, 0x1.a27ecp-117f, 0x1p0f, 0x1.7e4212p-109f, 0x1.2d8d92p-2f, 0.0f,
     0.0f, 0x1.c7ddaap-83f, 0x1.468ff4p-42f, 0.0f, 0.0f, 0x1.ce250ep-41f,
     0x1.8726d8p-55f, 0x1.a3d212p-55f, 0x1.8e2ef8p-120f, 0x1.86b5a2p-121f,
     0x1.b535c4p-101f, 0x1.39e0fcp-30f, 0x1.1e1a8ep-113f, 0.0f, 0x1.3d1618p-47f, 0.0f,
     0.0f, 0x1.b250a6p-42f, 0x1.c92592p-9f, 0.0f, 0.0f, 0x1.7bb0b2p-64f,
     0x1.4562bcp-38f, 0.0f, 0.0f, 0x1.baa2fap-10f, 0x1.4c03aep-90f, 0.0f, 0.0f, 0.0f,
     0x1.b3dfdep-76f, 0.0f, 0x1.a793a6p-64f, 0.0f, 0x1.2acc88p-77f, 0x1.ca96bep-59f,
     0.0f, 0x1.7dbd44p-29f, 0x1.9ef94ap-22f, 0x1.15dba4p-68f, 0.0f, 0.0f,
     0x1.ee8344p-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0c543ep-3f, 0x1.61e5bap-47f, 0.0f,
     0x1.4a62ep-124f, 0x1.809118p-26f, 0.0f, 0x1.fd9a66p-56f, 0.0f, 0x1.09a50cp-11f,
     0.0f, 0.0f, 0x1.1b121cp-28f, 0x1.8bd222p-38f, 0.0f, 0x1.e5ca1cp-26f,
     0x1.c2f968p-81f, 0.0f, 0.0f, 0.0f, 0x1.ca63eep-1f, 0x1.56b704p-63f, 0.0f, 0.0f,
     0x1.7e24dp-29f, 0x1.cf73dp-118f, 0.0f, 0.0f, 0x1.c97e76p-37f, 0.0f, 0.0f,
     0x1.d5d6b6p-115f, 0x1.ae86a2p-63f, 0x1.7971a8p-39f, 0x1.8bb89ep-4f, 0.0f,
     0x1.231c02p-100f, 0.0f, 0.0f, 0x1.eb5872p-106f, 0.0f, 0.0f, 0x1.72b7c2p-104f,
     0.0f, 0x1.81ba3cp-55f, 0x1.294976p-114f, 0x1.4473e2p-11f, 0x1.2ad06p-86f,
     0x1.7c1bdap-43f, 0x1.73021ap-88f, 0x1.f5ee7cp-102f, 0.0f, 0.0f, 0.0f,
     0x1.e1d32ap-83f, 0x1.62bda2p-11f, 0x1.30c85ap-115f, 0.0f, 0x1.36887ep-44f, 0.0f,
     0x1.d78284p-23f, 0x1.027314p-38f, 0x1.ab2574p-77f, 0.0f, 0x1.4837ap-78f,
     0x1.40eadap-60f, 0x1.3db55cp-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8134f8p-119f, 0.0f,
     0x1.884394p-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.abc118p-71f, 0x1.bd61aep-29f, 0.0f,
     0x1.251728p-81f, 0.0f, 0x1.2a262ap-50f, 0x1.c8a5f8p-27f, 0.0f, 0.0f,
     0x1.fda2d8p-74f, 0.0f, 0.0f, 0.0f, 0x1.a0e7bp-102f, 0x1.36de34p-68f,
     0x1.280828p-99f, 0.0f, 0.0f, 0x1.fd38a8p-61f, 0x1.39ef9ep-4f, 0.0f,
     0x1.2b4ce4p-44f, 0x1.8dc6aap-28f, 0x1.cbf45p-10f, 0.0f, 0.0f, 0x1.b96406p-93f,
     0x1.08ffbep-55f, 0x1.e3f012p-92f, 0x1.6994bap-116f, 0x1.6270ep-36f,
     0x1.33829ap-60f, 0x1.879b12p-38f, 0x1.2ae77ap-15f, 0.0f, 0x1.9d09aap-11f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.100614p-30f, 0.0f, 0x1.dd55p-50f,
     0x1.e8a1dap-71f, 0x1.38b96p-85f, 0.0f, 0x1.3738a8p-48f, 0.0f, 0x1.68c00cp-50f,
     0x1.4d6928p-118f, 0.0f, 0x1.e99ccp-35f, 0x1.1c217ap-81f, 0.0f, 0x1.c7f11ap-100f,
     0x1.1b0222p-83f, 0.0f, 0.0f, 0x1.d3cd76p-65f, 0.0f, 0.0f, 0x1.c86998p-90f,
     0x1.68ff6ap-41f, 0x1.1628c4p-36f, 0x1.ac4076p-91f, 0.0f, 0.0f, 0.0f,
     0x1.8f2d1ep-12f, 0.0f, 0x1.dc8ff4p-48f, 0.0f, 0.0f, 0x1.a2967cp-94f, 0.0f,
     0x1.aab18ap-99f, 0.0f, 0.0f, 0x1.7dc442p-6f, 0x1.a6e41p-13f, 0x1.ee2b7cp-96f,
     0.0f, 0.0f, 0x1.c256dep-35f, 0x1.caa50cp-62f, 0.0f, 0.0f, 0x1.d61fdp-52f, 0.0f,
     0x1.0529cap-109f, 0.0f, 0.0f, 0.0f, 0x1.ff391cp-108f, 0x1.fea6f6p-98f, 0.0f,
     0x1.91bbe2p-42f, 0.0f, 0.0f, 0x1.d0cd4cp-4f, 0x1.b9e462p-36f, 0x1.fb3248p-102f,
     0.0f, 0.0f, 0x1.32604p-6f, 0.0f, 0.0f, 0x1.0d4f42p-25f, 0.0f, 0.0f,
     0x1.49b3b4p-1f, 0x1.a4a844p-114f, 0.0f, 0x1.485f9cp-71f, 0.0f, 0.0f,
     0x1.e24eaap-69f, 0x1.3c4b22p-46f, 0.0f, 0x1.89cd66p-71f, 0x1.cd762ap-21f, 0.0f
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
            tmp1 = Sleef_finz_exp10f8_u35kvx(tmp0);
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
    printf("Sleef_finz_exp10f8_u35kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_finz_exp10f8_u35kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
