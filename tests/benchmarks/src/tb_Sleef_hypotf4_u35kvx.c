/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_hypotf4_u35kvx.c --function Sleef_hypotf4_u35kvx \
 *     --arity 2 --headers sleef.h,ml_support_lib.h --input-formats \
 *     binary32,binary32 --vector-size 4 --function-input-vector-size 4 \
 *     --bench --no-embedded-bin --target kv3
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
     0.0f, 0.0f, 0x1.54ad24p-11f, 0x1.640b1ap-85f, 0.0f, 0x1.13b09ep-103f, 0.0f,
     0.0f, 0.0f, 0x1.bde674p-84f, 0x1.9d0daap-117f, 0.0f, 0.0f, 0.0f, 0x1.ac455ap-33f,
     0x1.8e92e6p-108f, 0.0f, 0.0f, 0.0f, 0x1.a99bd4p-97f, 0.0f, 0.0f, 0x1.1cc0d2p-89f,
     0.0f, 0x1.40af4cp-20f, 0x1.97379cp-26f, 0.0f, 0x1.d2cb4cp-115f, 0.0f,
     0x1.8084f4p-48f, 0.0f, 0x1.a801fp-6f, 0x1.64f2ecp-33f, 0.0f, 0x1.61e668p-43f,
     0x1.137916p-112f, 0.0f, 0x1.3c9a3cp-124f, 0.0f, 0x1.d4183p-86f, 0.0f,
     0x1.2426aep-117f, 0.0f, 0x1.b756ecp-24f, 0.0f, 0x1.d96edap-25f, 0.0f,
     0x1.d3f38ap-89f, 0x1.427ef4p-3f, 0x1.6226e2p-46f, 0.0f, 0.0f, 0x1.92052cp-9f,
     0x1.4e1de2p-83f, 0.0f, 0x1.9f997cp-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dd7c76p-21f,
     0x1.6ea414p-109f, 0x1.e51e4cp-89f, 0.0f, 0x1.c56ae2p-108f, 0x1.863492p-18f, 0.0f,
     0x1.19f488p-75f, 0.0f, 0x1.0f538p-58f, 0.0f, 0x1.1fe31ep-5f, 0x1.a3336ap-15f,
     0.0f, 0x1.addc3ep-9f, 0x1.4ded66p-80f, 0.0f, 0x1.3b7b84p-69f, 0x1.aa2b8cp-97f,
     0.0f, 0.0f, 0x1.647d2ap-8f, 0x1.7f1b34p-99f, 0x1.71645ap-82f, 0x1.c24d68p-85f,
     0x1.e73b0ap-79f, 0.0f, 0x1.117154p-49f, 0.0f, 0.0f, 0x1.8e0da2p-94f, 0.0f, 0.0f,
     0x1.e06cf2p-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d2b178p-33f, 0x1.73eaaep-72f, 0.0f,
     0.0f, 0x1.c9ad3p-122f, 0.0f, 0.0f, 0x1.74c51p-75f, 0x1.f0e84p-115f,
     0x1.f66594p-84f, 0.0f, 0.0f, 0x1.3d80aep-84f, 0.0f, 0.0f, 0x1.31952p-1f, 0.0f,
     0x1.f0518p-125f, 0x1.8c5d4cp-105f, 0x1.3078dap-22f, 0x1.91084ep-118f,
     0x1.49b068p-20f, 0.0f, 0.0f, 0.0f, 0x1.4d644cp-43f, 0x1.4f9af6p-69f,
     0x1.45e066p-87f, 0x1.6d0b2p-89f, 0.0f, 0.0f, 0x1.df20b2p-1f, 0x1.4d54a2p-33f,
     0x1.48d05ep-84f, 0.0f, 0x1.d6c2c4p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.170542p-43f,
     0x1.9c7182p-49f, 0x1.2728b8p-13f, 0x1.ee6806p-63f, 0.0f, 0x1.3b7c08p-40f,
     0x1.1b6438p-84f, 0.0f, 0.0f, 0x1.e2bf6ep-123f, 0x1.6b9baep-34f, 0x1.688c98p-21f,
     0x1.6b1bdap-66f, 0x1.94da3ap-56f, 0.0f, 0.0f, 0.0f, 0x1.22cad2p-1f, 0.0f,
     0x1.216a7ap-34f, 0x1.6b1a06p-87f, 0x1.f6f404p-85f, 0.0f, 0.0f, 0.0f,
     0x1.c55c76p-7f, 0.0f, 0.0f, 0x1.48cb2cp-34f, 0x1.1d0738p-100f, 0.0f,
     0x1.3ecc68p-32f, 0.0f, 0x1.65e6b4p-106f, 0x1.c1c7bp-46f, 0x1.f861ccp-9f, 0.0f,
     0.0f, 0x1.2ac9c8p-80f, 0x1.3a8c52p-70f, 0x1.08882ep-41f, 0.0f, 0x1.bf9212p-52f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.129c78p-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.3fbd52p-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f1e614p-18f, 0.0f,
     0x1.b13046p-53f, 0x1.b92c5ap-42f, 0x1.528a66p-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.37a38ap-80f, 0x1.ff0164p-90f, 0.0f, 0x1.c476cap-39f, 0.0f,
     0x1.76dbbap-125f, 0x1.2f8984p-61f, 0.0f, 0.0f, 0x1.0a4a24p-119f, 0.0f, 0.0f,
     0x1.1db52cp-51f, 0x1.c88558p-50f, 0.0f, 0x1.f8a524p-65f, 0x1.7d6f94p-104f,
     0x1.e93d6ap-33f, 0x1.eff91p-42f, 0x1.f5bc12p-57f, 0.0f, 0x1.58b04ap-99f,
     0x1.20691ep-15f, 0.0f, 0.0f, 0x1.1bd23p-103f, 0.0f, 0x1.ab8938p-84f, 0.0f, 0.0f,
     0.0f, 0x1.840888p-117f, 0.0f, 0x1.a2612ep-118f, 0x1.a84e8ap-92f, 0x1.aaa0c2p-13f,
     0x1.0974e2p-121f, 0.0f, 0x1.ffa648p-104f, 0x1p0f, 0.0f, 0x1.54b33ep-52f,
     0x1.ad0a66p-72f, 0.0f, 0x1.05dafep-15f, 0x1.6ff4ccp-112f, 0x1.89d9bcp-88f,
     0x1.974a84p-19f, 0x1.e771ecp-47f, 0x1.3d450ap-65f, 0x1.7dc56ep-69f, 0.0f, 0.0f,
     0x1.003d4p-59f, 0x1.5cc3f4p-32f, 0.0f, 0x1.fcf428p-36f, 0x1.03656ap-5f, 0.0f,
     0x1.d03e3ep-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.006ed4p-63f, 0x1.dc051ap-97f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.47cc1ap-118f, 0.0f, 0x1.fe98b6p-50f, 0x1.4ffafap-80f,
     0x1.e695e6p-75f, 0.0f, 0.0f, 0.0f, 0x1.a0fbeap-118f, 0.0f, 0x1.5791f6p-18f, 0.0f,
     0.0f, 0.0f, 0x1.84c436p-37f, 0x1.555b1p-119f, 0x1.ee4482p-46f, 0x1.0453e2p-5f,
     0x1.cc601ep-105f, 0x1.b4bf76p-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.31dd0ap-39f, 0.0f,
     0x1.16a5c2p-118f, 0.0f, 0.0f, 0x1.5c91d6p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a14358p-73f, 0x1.8e194p-37f, 0.0f, 0x1.fa63eep-52f, 0.0f, 0x1.767b3cp-22f,
     0.0f, 0.0f, 0x1.2aadaap-48f, 0x1.382ba2p-23f, 0x1.16bc02p-106f, 0.0f,
     0x1.e0838cp-94f, 0.0f, 0x1.780a5ep-38f, 0x1.8d22eap-91f, 0.0f, 0x1.a9983p-65f,
     0.0f, 0x1.c8f6fep-3f, 0.0f, 0x1.cc088cp-118f, 0x1.fd2eaep-58f, 0.0f, 0.0f,
     0x1.28afa2p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4fae38p-47f, 0.0f, 0.0f, 0.0f, 0x1.ba4776p-72f, 0.0f, 0.0f, 0x1.44e3dcp-97f,
     0x1.3b2be6p-17f, 0.0f, 0x1.23e1b4p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5e5ba2p-67f, 0.0f, 0x1.bf64a4p-45f, 0.0f, 0x1.c7d84ap-27f, 0x1.1a76bp-12f,
     0x1.610d7ap-45f, 0.0f, 0x1.5113aap-116f, 0.0f, 0.0f, 0.0f, 0x1.5cd902p-71f, 0.0f,
     0x1.faf7eep-78f, 0x1.30739ap-39f, 0.0f, 0x1.092c3cp-48f, 0x1.fd9fc6p-84f,
     0x1.eb14f6p-92f, 0x1.e1a008p-77f, 0x1.e038b4p-41f, 0x1.0279cep-82f, 0.0f, 0.0f,
     0x1.c418a2p-115f, 0x1.e41ce6p-85f, 0.0f, 0.0f, 0.0f, 0x1.bb138cp-125f, 0.0f,
     0.0f, 0x1.08c2bap-67f, 0x1.95645p-113f, 0x1.4e5adap-41f, 0x1.11c72p-109f, 0.0f,
     0.0f, 0x1.cfcb1ap-113f, 0.0f, 0.0f, 0x1.b99c2cp-88f, 0.0f, 0.0f, 0.0f,
     0x1.64c04ap-52f, 0.0f, 0.0f, 0x1.f597a4p-2f, 0.0f, 0.0f, 0x1.485c1ap-126f, 0.0f,
     0.0f, 0x1.12c76ap-78f, 0x1.9aa5f6p-109f, 0x1.679ec2p-114f, 0x1.b5069cp-81f, 0.0f,
     0.0f, 0x1.384114p-45f, 0.0f, 0x1.6036ccp-59f, 0.0f, 0x1.bb44aep-48f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.6f219cp-88f, 0x1.b2c21cp-53f, 0.0f, 0.0f, 0x1.77a644p-119f, 0.0f,
     0x1.82f644p-42f, 0.0f, 0x1.1dc6a2p-40f, 0.0f, 0x1.890d0cp-10f, 0x1.6dfa3ep-86f,
     0x1.d15ebp-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cab4bcp-1f, 0x1.f6a17ep-48f,
     0x1.9c7958p-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.39c4eap-43f, 0.0f,
     0x1.33816ap-34f, 0x1.f19204p-66f, 0x1.f1ee1cp-74f, 0.0f, 0.0f, 0.0f,
     0x1.a97592p-37f, 0.0f, 0.0f, 0x1.c2b60ap-35f, 0.0f, 0x1.41d61ap-27f, 0.0f,
     0x1.007d3cp-87f, 0.0f, 0.0f, 0.0f, 0x1.bc3f6ap-80f, 0.0f, 0.0f, 0x1.60329cp-21f,
     0x1.80074ep-11f, 0.0f, 0.0f, 0x1.69448ap-108f, 0x1.c34eecp-45f, 0x1.af50aep-18f,
     0x1.c208c4p-29f, 0x1.e2548p-17f, 0.0f, 0x1.d25aa4p-21f, 0.0f, 0.0f,
     0x1.13d3b8p-91f, 0.0f, 0.0f, 0x1.9648b8p-1f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f55d9ep-1f, 0.0f, 0.0f, 0x1.a7858ep-74f, 0x1.e912c8p-49f, 0.0f,
     0x1.df8dcap-106f, 0.0f, 0x1.2ae1dap-83f, 0x1.b3d26cp-91f, 0.0f, 0.0f,
     0x1.dddca2p-61f, 0x1.512002p-121f, 0x1.dbec62p-28f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ed96p-113f, 0x1.4beee8p-2f, 0.0f, 0x1.7577f2p-117f, 0.0f, 0x1.ec8f6p-31f,
     0x1.749346p-27f, 0.0f, 0x1.a9208ep-27f, 0.0f, 0x1.734bcep-18f, 0x1.fb0ec6p-116f,
     0x1.39ee5ap-91f, 0.0f, 0x1.9cb408p-47f, 0x1.e7a458p-32f, 0x1.33a0ecp-33f, 0.0f,
     0x1.509cc8p-90f, 0x1.64b6b8p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d9a052p-18f,
     0x1.6829dp-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c8dd8ep-7f, 0.0f,
     0x1.49c01p-126f, 0.0f, 0.0f, 0x1.4b711ep-83f, 0x1.56654cp-107f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.cf6444p-52f, 0x1.d8baa8p-10f, 0x1.0ee2fp-26f, 0x1.0b3792p-32f,
     0x1.0b6876p-6f, 0x1.e5c4b4p-11f, 0.0f, 0x1.74e46ep-83f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.60dbf6p-91f, 0x1.489bdap-47f, 0.0f, 0x1.053aa8p-21f, 0x1.bc562cp-31f,
     0x1.f4616ep-59f, 0x1.d40106p-18f, 0.0f, 0x1.d4028p-75f, 0x1.c9f4eap-124f,
     0x1.52ea84p-121f, 0x1.b5b11ap-124f, 0x1.1d14d4p-52f, 0x1.2f8424p-49f,
     0x1.6a6b2ep-74f, 0x1.5006p-14f, 0x1.76e22ep-83f, 0.0f, 0x1.f0bd64p-55f, 0.0f,
     0x1.ed6d2cp-114f, 0x1.eb0072p-107f, 0x1.fc1066p-87f, 0x1.f24ee8p-84f, 0.0f,
     0x1.d7d942p-90f, 0x1.96edf8p-49f, 0x1.4d4576p-26f, 0x1.36089ap-27f, 0.0f,
     0x1.2eaec8p-15f, 0x1.858256p-122f, 0.0f, 0x1.438302p-40f, 0.0f, 0x1.bc7dbep-110f,
     0.0f, 0x1.61b07cp-35f, 0x1.8c7edp-58f, 0.0f, 0x1.44c952p-99f, 0.0f,
     0x1.34d918p-33f, 0.0f, 0x1.97433ep-103f, 0x1.302a5p-71f, 0.0f, 0x1.d9fb98p-66f,
     0x1.e56312p-35f, 0x1.0d1aacp-65f, 0x1.1f555ep-13f, 0x1.82fabp-59f, 0.0f,
     0x1.23385p-89f, 0x1.d56806p-66f, 0x1.7037dp-107f, 0x1.212fecp-108f, 0.0f,
     0x1.66c0b2p-119f, 0x1.9f379ep-51f, 0x1.03397cp-66f, 0x1.dd27p-36f,
     0x1.7c8bb2p-49f, 0.0f, 0x1.56f53cp-10f, 0x1.df8e24p-112f, 0.0f, 0x1.854d54p-70f,
     0.0f, 0.0f, 0x1.b767e4p-52f, 0.0f, 0.0f, 0x1.df5a44p-40f, 0x1.8c2554p-2f, 0.0f,
     0x1.9c63p-107f, 0x1.113036p-114f, 0x1.6b9002p-8f, 0x1.5f23bp-102f, 0.0f,
     0x1.b8f40ep-102f, 0.0f, 0x1.a41982p-47f, 0x1.33159cp-73f, 0.0f, 0.0f, 0.0f,
     0x1.98bc98p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8b57bcp-98f, 0.0f, 0x1.ed2be6p-102f,
     0.0f, 0.0f, 0x1.ad8d4ep-29f, 0.0f, 0.0f, 0x1.a509d8p-120f, 0x1.a8882p-7f,
     0x1.26c02ep-62f, 0x1.cf74c4p-17f, 0x1.3bf3ep-62f, 0.0f, 0x1.a6441ap-118f,
     0x1.42e09cp-80f, 0.0f, 0x1.64c42ap-100f, 0x1.012ca6p-8f, 0.0f, 0x1.d60f12p-114f,
     0x1.fe7108p-40f, 0.0f, 0.0f, 0x1.55d3e6p-88f, 0.0f, 0.0f, 0x1.0f6526p-25f, 0.0f,
     0.0f, 0x1.bff904p-37f, 0.0f, 0x1.ac8b5ep-117f, 0x1.1bad2ap-22f, 0x1.8c7968p-3f,
     0x1.8bbf1p-68f, 0.0f, 0.0f, 0x1.d24334p-27f, 0.0f, 0x1.b638f2p-92f,
     0x1.586982p-45f, 0x1.e8a174p-64f, 0x1.d96e3cp-23f, 0x1.5059bp-9f,
     0x1.3ed72ep-52f, 0.0f, 0x1.87f324p-115f, 0x1.2c709p-11f, 0x1.548332p-113f, 0.0f,
     0x1.df53bcp-50f, 0.0f, 0x1.db4aaap-100f, 0x1.5ce438p-77f, 0x1p0f, 0.0f, 0.0f,
     0x1.c7c82p-100f, 0.0f, 0x1.0ecc08p-5f, 0x1.c1dbfcp-100f, 0.0f, 0.0f,
     0x1.44c39ep-118f, 0x1.989e76p-43f, 0.0f, 0.0f, 0.0f, 0x1.bdd94cp-23f, 0.0f,
     0x1.30d824p-4f, 0.0f, 0x1.3d8b6ep-120f, 0.0f, 0.0f, 0x1.d89714p-70f, 0.0f,
     0x1.d97cc4p-16f, 0x1.4b993cp-27f, 0x1.45f73p-126f, 0.0f, 0x1.12f956p-21f,
     0x1.429c6p-119f, 0x1.df7ad4p-108f, 0x1.2d260ap-45f, 0x1.b49998p-31f,
     0x1.3d83e6p-5f, 0x1.9af142p-93f, 0x1.c0adfcp-68f, 0x1.16dc92p-114f,
     0x1.8221e6p-67f, 0.0f, 0.0f, 0.0f, 0x1.7699d8p-15f, 0x1.3f4d3cp-47f, 0.0f,
     0x1.6be9fp-64f, 0x1.3ec06cp-6f, 0.0f, 0x1.ef5d1p-90f, 0x1.f0c0bap-92f,
     0x1.2495ecp-95f, 0.0f, 0x1.0b368ap-48f, 0.0f, 0.0f, 0.0f, 0x1.21d49ep-96f, 0.0f,
     0.0f, 0x1.578afcp-50f, 0.0f, 0x1.a418b8p-99f, 0x1.4db192p-50f, 0x1.c1cep-106f,
     0.0f, 0x1.95544cp-40f, 0x1.15a168p-54f, 0.0f, 0.0f, 0x1.43201ep-24f, 0.0f,
     0x1.cda3dap-88f, 0.0f, 0.0f, 0x1.d43ca2p-35f, 0.0f, 0.0f, 0x1.b05cbcp-106f,
     0x1.8b749ap-126f, 0.0f, 0x1.8c55eep-59f, 0.0f, 0x1.7bc46cp-17f, 0.0f, 0.0f,
     0x1.9ac2bep-49f, 0x1.25b3fcp-96f, 0x1.3b13f6p-56f, 0x1.d34b9ap-11f, 0.0f,
     0x1.09bc6p-7f, 0x1.7b98d8p-85f, 0x1.149432p-90f, 0.0f, 0x1.b6d0fp-109f,
     0x1.ca1d96p-95f, 0.0f, 0x1.e4c4aep-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.624cbp-111f,
     0.0f, 0x1.85aa14p-91f, 0.0f, 0x1.e43782p-7f, 0x1.a492fp-86f, 0.0f, 0.0f,
     0x1.d615ecp-57f, 0.0f, 0x1.0a27fap-48f, 0x1.00747ep-34f, 0.0f, 0x1.b69cd6p-39f,
     0.0f, 0x1.628adp-46f, 0.0f, 0x1.6347fcp-52f, 0x1.32e166p-61f, 0.0f, 0.0f, 0.0f,
     0x1.8ce6a8p-61f, 0x1.13128cp-69f, 0x1.472296p-43f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e11582p-80f, 0.0f, 0.0f, 0.0f, 0x1.d7304cp-83f, 0x1.07efb6p-49f, 0.0f, 0.0f,
     0x1.e38cb2p-52f, 0.0f, 0.0f, 0x1.5ef156p-1f, 0x1.cb7aaep-79f, 0x1.51ea04p-86f,
     0x1.bab246p-49f, 0.0f, 0.0f, 0.0f, 0x1.f68d46p-42f, 0.0f, 0x1.dfdb6ap-90f, 0.0f,
     0.0f, 0.0f, 0x1.898ab2p-47f, 0x1.6af71ep-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.173a68p-99f, 0x1.b7da26p-8f, 0.0f, 0.0f, 0x1.c2f74p-102f,
     0x1.d6425ap-38f, 0x1.4a8916p-4f, 0.0f, 0x1.7d640ap-83f, 0.0f, 0.0f,
     0x1.ec93f6p-123f, 0.0f, 0.0f, 0x1.a76532p-38f, 0.0f, 0.0f, 0.0f, 0x1.190eecp-22f,
     0.0f, 0.0f, 0.0f, 0x1.03ba58p-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.679ad6p-36f,
     0.0f, 0x1.a103d2p-78f, 0x1.ab747p-26f, 0x1.2a8cccp-20f, 0x1.236768p-67f, 0.0f,
     0x1.d23dcep-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4bfac2p-100f, 0.0f, 0.0f,
     0x1.ec9f0cp-89f, 0.0f, 0.0f, 0x1.777aap-92f, 0x1.cb797cp-67f, 0x1.e4912ap-33f,
     0.0f, 0.0f, 0x1.08f99cp-87f, 0x1.eea19ap-109f, 0.0f, 0x1.2a66eap-57f,
     0x1.5885d4p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.35e48cp-100f, 0x1.45edc8p-53f, 0.0f,
     0.0f, 0.0f, 0x1.d362aap-108f, 0x1.305012p-94f, 0.0f, 0.0f, 0.0f,
     0x1.101a02p-124f, 0.0f, 0x1.eac124p-33f, 0x1.e4c8c8p-100f, 0.0f, 0x1.e5c86ep-71f,
     0.0f, 0x1.5f8922p-40f, 0.0f, 0.0f, 0x1.80d374p-106f, 0.0f, 0.0f,
     0x1.9e52e2p-117f, 0x1.80cff6p-121f, 0.0f, 0x1.27ee38p-17f, 0.0f,
     0x1.eec9a2p-111f, 0x1.66bf08p-70f, 0x1.ae332ap-79f, 0x1.2b36d6p-90f,
     0x1.37dcd4p-57f, 0.0f, 0x1.f114d4p-10f, 0x1.ad09dcp-33f, 0.0f, 0.0f,
     0x1.922f0cp-10f, 0.0f, 0x1.d56c22p-91f, 0.0f, 0.0f, 0x1.90e242p-5f, 0.0f, 0.0f,
     0.0f, 0x1.a53c86p-12f, 0x1.aeeffp-122f, 0.0f, 0x1.507aeep-25f
};
static const float external_bench_wrapper_input_table_arg1[1004]  = {
     0x1.a1f2b2p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f26f2p-23f, 0x1.01f086p-91f, 0.0f,
     0.0f, 0x1.4b2c4p-23f, 0.0f, 0.0f, 0x1.568a78p-68f, 0.0f, 0x1.6e0c2cp-52f,
     0x1.51f97ap-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ce34fp-82f, 0.0f, 0.0f,
     0x1.a42722p-15f, 0x1.97286ap-100f, 0x1.7534b6p-90f, 0x1.441a12p-67f,
     0x1.e09deap-28f, 0.0f, 0x1.624b4p-92f, 0x1.e562d8p-126f, 0.0f, 0x1.940b54p-36f,
     0.0f, 0x1.9cdbep-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.273402p-84f, 0x1.e5a4bep-104f,
     0.0f, 0.0f, 0x1.e0eaccp-4f, 0.0f, 0x1.d270b4p-76f, 0x1.aa6f62p-59f,
     0x1.091b82p-100f, 0.0f, 0x1.bcf89cp-29f, 0.0f, 0x1.4026eap-30f, 0x1.ba065p-124f,
     0.0f, 0.0f, 0x1.601172p-70f, 0x1.b2dd12p-68f, 0x1.41c992p-48f, 0.0f,
     0x1.acdef8p-72f, 0x1.64a7d2p-107f, 0.0f, 0.0f, 0x1.f5d14cp-53f, 0x1.bbe388p-112f,
     0.0f, 0x1.135484p-116f, 0x1.f4430ap-89f, 0x1.82843ep-120f, 0.0f, 0x1.824096p-71f,
     0x1.feeffep-74f, 0x1.21b47cp-26f, 0.0f, 0x1.77c532p-88f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.dd05ap-41f, 0.0f, 0x1.75379p-66f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d9478p-92f, 0.0f, 0.0f, 0x1.ce3606p-84f, 0.0f,
     0x1.6e3cb2p-84f, 0.0f, 0x1.ff74d6p-32f, 0x1.f2f09p-124f, 0x1.6930d8p-88f,
     0x1.f4db2ap-68f, 0x1.ac0f7ap-88f, 0.0f, 0x1.47d14p-105f, 0.0f, 0x1.1bf796p-102f,
     0.0f, 0x1.d2ee0cp-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.00745ep-83f,
     0x1.c48e94p-45f, 0.0f, 0x1.666086p-93f, 0.0f, 0.0f, 0x1.d3eb5ep-19f,
     0x1.7a5152p-99f, 0.0f, 0.0f, 0x1.848bb6p-76f, 0.0f, 0x1.554c9p-33f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7d3f0ep-60f, 0.0f, 0.0f, 0x1.9fef4ep-89f,
     0x1.b911aep-50f, 0x1.25d1bap-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.146822p-48f, 0x1.54d426p-100f, 0.0f, 0x1.5ab71ep-39f, 0.0f, 0.0f, 0.0f,
     0x1.4d21cp-43f, 0x1.ddcb0ep-99f, 0x1.b187acp-95f, 0x1.414d7ep-38f,
     0x1.4b723p-72f, 0.0f, 0.0f, 0x1.f9ee4ep-41f, 0x1.0f6588p-99f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.26852p-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fad028p-85f,
     0.0f, 0.0f, 0x1.5f62cp-16f, 0.0f, 0x1.313826p-69f, 0x1.1f85fap-25f,
     0x1.64edf6p-58f, 0x1.586528p-96f, 0.0f, 0.0f, 0x1.d3a73p-85f, 0.0f, 0.0f,
     0x1.54c02cp-24f, 0x1.4ce0ecp-91f, 0.0f, 0x1.7f04f2p-100f, 0.0f, 0x1.fbc64p-30f,
     0.0f, 0.0f, 0x1.75ab24p-105f, 0x1.d60aa4p-47f, 0x1.17991p-17f, 0.0f, 0.0f,
     0x1.ab34f8p-52f, 0.0f, 0x1.d29b22p-7f, 0.0f, 0.0f, 0.0f, 0x1.81e1d6p-119f, 0.0f,
     0x1.344c3ep-49f, 0.0f, 0x1.d99a2ap-19f, 0x1.6363fep-60f, 0.0f, 0x1.192be6p-120f,
     0x1.553732p-123f, 0x1.de279ap-108f, 0.0f, 0.0f, 0x1.15d34cp-107f, 0.0f, 0.0f,
     0.0f, 0x1.25b364p-36f, 0x1.6eb0d4p-22f, 0.0f, 0.0f, 0x1.b4032ap-88f, 0.0f, 0.0f,
     0x1.788bc2p-105f, 0.0f, 0x1.a98db4p-112f, 0.0f, 0.0f, 0x1.b69a5ap-101f,
     0x1.89d8f2p-120f, 0x1.0549ccp-2f, 0x1.1bb56ep-79f, 0.0f, 0x1.76c01p-102f,
     0x1.6ef64p-60f, 0.0f, 0.0f, 0.0f, 0x1.59f2b8p-79f, 0x1.f332d2p-83f, 0.0f, 0.0f,
     0x1.a927aap-126f, 0.0f, 0x1.36fe8p-35f, 0.0f, 0x1.ec1c44p-83f, 0.0f, 0.0f,
     0x1.dc5e44p-14f, 0.0f, 0x1.cabb94p-39f, 0x1.1a9f02p-96f, 0.0f, 0.0f,
     0x1.7795d2p-63f, 0x1.a7def2p-83f, 0.0f, 0x1.e5b9a6p-1f, 0x1.4a32f6p-30f,
     0x1.8b2efcp-54f, 0.0f, 0.0f, 0.0f, 0x1.60101ep-31f, 0.0f, 0.0f, 0x1.345324p-40f,
     0.0f, 0.0f, 0x1.749542p-62f, 0x1.49f3f2p-121f, 0.0f, 0x1.6bb362p-2f, 0.0f, 0.0f,
     0x1.41c86cp-54f, 0x1.b2a1fap-69f, 0.0f, 0x1.f06c72p-70f, 0x1.8b768ep-47f, 0.0f,
     0x1.bbd43ep-13f, 0.0f, 0.0f, 0x1.4a5eeep-44f, 0x1.2fea9cp-101f, 0.0f, 0.0f,
     0x1.5dcad6p-115f, 0x1.0d14fap-2f, 0.0f, 0x1.651246p-95f, 0.0f, 0x1.a97e2cp-122f,
     0x1.381632p-91f, 0x1.62aac6p-78f, 0.0f, 0x1.0ad66cp-64f, 0x1.d373eep-85f, 0.0f,
     0.0f, 0.0f, 0x1.ed305ap-109f, 0.0f, 0.0f, 0.0f, 0x1.b0e04ap-63f, 0.0f,
     0x1.71d0b8p-59f, 0.0f, 0.0f, 0x1.7af3ap-114f, 0x1.dff818p-4f, 0x1.8251fap-69f,
     0.0f, 0x1.c462dep-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ced4c8p-120f, 0.0f,
     0.0f, 0x1.8339aap-67f, 0x1.0abd86p-87f, 0x1.a11144p-90f, 0x1.54aabap-73f, 0.0f,
     0x1.8bcd06p-4f, 0x1.2eb97ap-11f, 0.0f, 0.0f, 0.0f, 0x1.0b9d06p-3f, 0.0f,
     0x1.c47c9cp-4f, 0x1.813d6ap-107f, 0x1.02ede4p-102f, 0x1.bda4b2p-83f,
     0x1.feef7p-101f, 0.0f, 0.0f, 0x1.a231a2p-59f, 0.0f, 0x1.f96706p-6f,
     0x1.3274bep-40f, 0x1.73214cp-88f, 0.0f, 0.0f, 0x1.73cd6ap-30f, 0x1.f807f8p-19f,
     0x1.17b75ap-30f, 0.0f, 0.0f, 0.0f, 0x1.44e584p-49f, 0.0f, 0x1.ae85eap-48f,
     0x1.bc7b84p-27f, 0.0f, 0.0f, 0.0f, 0x1.24156ep-17f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f8c6ecp-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3d678ap-18f, 0x1.cc48a6p-114f,
     0.0f, 0x1.22d342p-126f, 0.0f, 0.0f, 0x1.27628ap-95f, 0.0f, 0x1.26b27ap-55f,
     0x1.0c7d5ep-95f, 0.0f, 0.0f, 0x1.5a99a4p-62f, 0x1.c07458p-35f, 0x1.df649cp-39f,
     0x1.e7b7b8p-25f, 0x1.d56ad8p-83f, 0x1.54713p-59f, 0.0f, 0.0f, 0x1.4f6654p-80f,
     0.0f, 0.0f, 0.0f, 0x1.3d0388p-100f, 0.0f, 0x1.b27766p-119f, 0x1.1ab3fp-84f,
     0x1.4749fp-101f, 0.0f, 0.0f, 0.0f, 0x1.cfb4f2p-17f, 0.0f, 0x1.dbf9cp-60f, 0.0f,
     0.0f, 0x1.64f402p-78f, 0.0f, 0x1p0f, 0x1.298d2ep-116f, 0.0f, 0.0f,
     0x1.ea9868p-36f, 0.0f, 0.0f, 0x1.115f28p-21f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.deed26p-72f, 0.0f, 0x1.285daap-53f, 0x1.1bb70cp-90f, 0x1.36bdbcp-4f,
     0x1.e5a51ep-12f, 0.0f, 0x1.99738cp-37f, 0x1.eb2b7ap-10f, 0.0f, 0.0f,
     0x1.5c4478p-3f, 0.0f, 0x1.8df7cep-31f, 0.0f, 0x1.e20668p-100f, 0x1.7e1266p-63f,
     0.0f, 0.0f, 0.0f, 0x1.c94244p-10f, 0.0f, 0x1.a221a2p-100f, 0x1.87b4a6p-22f, 0.0f,
     0x1.d619d2p-10f, 0x1.b37916p-71f, 0.0f, 0.0f, 0x1.0e254cp-27f, 0x1.b777ecp-66f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fe1a12p-121f, 0x1.27c53cp-100f,
     0x1.743142p-108f, 0x1.cf3446p-20f, 0.0f, 0.0f, 0x1.0f884ep-72f, 0x1.bfe0d2p-111f,
     0x1.1f9bfcp-49f, 0.0f, 0x1.5fb81ap-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f99d6ap-18f, 0x1.2c159cp-121f, 0x1.66b2bcp-87f, 0.0f, 0x1.18cac6p-35f,
     0x1.ede71cp-13f, 0.0f, 0.0f, 0x1.3de482p-126f, 0x1.60f432p-72f, 0x1.72cc44p-20f,
     0x1.3773d6p-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bf8c5cp-28f, 0.0f, 0.0f,
     0x1.6ba79ap-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8d03d8p-14f, 0.0f, 0x1.9779fap-21f,
     0x1.8b2e5ep-110f, 0.0f, 0x1.0e7ea4p-46f, 0x1.b337c8p-9f, 0.0f, 0x1.60f4p-14f,
     0.0f, 0x1.550db4p-19f, 0x1.d23984p-111f, 0x1.f36008p-71f, 0x1.4bbf3cp-27f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.cb974p-13f, 0.0f, 0x1.b4f65cp-112f, 0.0f, 0x1.330acep-17f,
     0x1.3d6782p-83f, 0.0f, 0.0f, 0.0f, 0x1.8a3cb8p-84f, 0.0f, 0x1.24e216p-62f,
     0x1.854e72p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.24615ap-98f, 0.0f,
     0x1.859a5p-101f, 0.0f, 0x1.43ac38p-6f, 0.0f, 0.0f, 0x1.a6134p-35f, 0.0f,
     0x1.7b87cep-42f, 0x1.292112p-4f, 0.0f, 0x1.a90392p-69f, 0x1.2e5c4p-9f,
     0x1.41e36cp-75f, 0x1.54cc5ep-33f, 0.0f, 0x1.831764p-116f, 0.0f, 0x1.50c8cep-73f,
     0.0f, 0.0f, 0.0f, 0x1.5c0584p-28f, 0.0f, 0x1.97be86p-60f, 0.0f, 0x1.27e58p-110f,
     0.0f, 0x1.25b3aap-65f, 0x1.29927p-30f, 0.0f, 0x1.7a6466p-112f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.10bd52p-91f, 0.0f, 0.0f, 0.0f, 0x1.81201ap-15f,
     0x1.7e3bacp-101f, 0.0f, 0x1.5154acp-66f, 0.0f, 0x1.e625e4p-51f, 0.0f,
     0x1.0f5816p-94f, 0.0f, 0.0f, 0x1.7c8f8cp-7f, 0x1.7ee25p-74f, 0.0f,
     0x1.066a36p-79f, 0x1.2593ecp-54f, 0x1.a5a50ap-72f, 0x1.ae1618p-55f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e4752ep-4f, 0x1.0951a4p-110f, 0x1.882a1p-51f, 0.0f, 0.0f,
     0x1.265c9p-71f, 0.0f, 0.0f, 0x1.83bbep-29f, 0.0f, 0.0f, 0.0f, 0x1.a70654p-76f,
     0x1.9967eep-19f, 0x1.5c423ep-46f, 0.0f, 0x1.9eb0fap-50f, 0.0f, 0x1.1816b6p-82f,
     0x1.f197b8p-31f, 0x1.d0d434p-52f, 0x1.abefeep-50f, 0.0f, 0x1.4db9ep-27f, 0.0f,
     0x1.ba62d8p-84f, 0x1.c8d238p-67f, 0.0f, 0x1.4fa286p-18f, 0x1.34e9ccp-9f,
     0x1.6d15fcp-72f, 0.0f, 0.0f, 0x1.d5192ap-102f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d28668p-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.981f16p-16f, 0x1.c1f1bcp-123f,
     0x1.f970ep-70f, 0.0f, 0x1.c1af66p-88f, 0.0f, 0.0f, 0.0f, 0x1.1757dp-106f,
     0x1.46c6bcp-124f, 0x1.91b26p-1f, 0.0f, 0.0f, 0.0f, 0x1.3d4e0ep-80f, 0.0f, 0.0f,
     0x1.c54568p-121f, 0x1.b954f2p-98f, 0x1.d0fe9p-64f, 0.0f, 0x1.f0e8dap-14f, 0.0f,
     0.0f, 0.0f, 0x1.75c69ep-58f, 0.0f, 0x1.21f496p-12f, 0.0f, 0.0f, 0x1.ff2c88p-99f,
     0.0f, 0.0f, 0x1.0d696ep-20f, 0x1.ad3e64p-117f, 0.0f, 0.0f, 0x1.55bd08p-32f, 0.0f,
     0x1.3b05aep-57f, 0x1.07272ap-120f, 0.0f, 0x1.70d134p-80f, 0x1.00f468p-69f, 0.0f,
     0x1.2b6b5ep-65f, 0x1.075e5p-75f, 0.0f, 0x1.6c4a9ap-106f, 0.0f, 0.0f,
     0x1.2e14c6p-48f, 0x1.bdf24p-83f, 0x1.796b06p-125f, 0x1.5d5daep-94f,
     0x1.ae9b22p-53f, 0.0f, 0.0f, 0x1.1eb8ecp-22f, 0.0f, 0x1.b61176p-32f, 0.0f, 0.0f,
     0.0f, 0x1.fda4b8p-106f, 0.0f, 0.0f, 0x1.a5ab5p-30f, 0x1.8ab938p-125f,
     0x1.d183d6p-117f, 0x1.ba7bc8p-59f, 0x1.438ecap-102f, 0x1.fc677cp-57f,
     0x1.932c5p-84f, 0x1.08203p-89f, 0x1.82f89cp-11f, 0.0f, 0.0f, 0x1.7fbca6p-12f,
     0x1.8f86a6p-88f, 0x1.93729cp-19f, 0.0f, 0.0f, 0x1.206e56p-113f, 0.0f, 0.0f,
     0x1.42c02ep-77f, 0.0f, 0.0f, 0x1.595b98p-122f, 0x1.b77bc2p-93f, 0x1.15a76ep-98f,
     0x1.2e5388p-61f, 0.0f, 0.0f, 0.0f, 0x1.bbae54p-37f, 0x1.a12494p-104f, 0.0f,
     0x1.aeede6p-69f, 0x1.710dap-113f, 0x1.e732d2p-27f, 0x1.fbb202p-91f, 0.0f,
     0x1.e21698p-50f, 0.0f, 0x1.3f4028p-104f, 0x1.e3063cp-31f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d455aep-28f, 0x1.3c84d8p-103f, 0.0f, 0.0f, 0x1.4560dp-7f,
     0.0f, 0x1.eb992cp-82f, 0.0f, 0x1.95b282p-54f, 0x1.ac480ap-52f, 0x1.da594p-104f,
     0.0f, 0.0f, 0x1.fa43cep-120f, 0.0f, 0x1.ecabf8p-97f, 0.0f, 0x1.bfb8fcp-109f,
     0.0f, 0.0f, 0x1.74de02p-41f, 0x1.81e5e4p-14f, 0x1.891676p-61f, 0.0f, 0.0f, 0.0f,
     0x1.4ef1e6p-95f, 0x1.465332p-81f, 0x1.408e7ap-92f, 0.0f, 0x1.4c0cdcp-5f,
     0x1.f16dacp-36f, 0.0f, 0.0f, 0.0f, 0x1.dee6dp-6f, 0.0f, 0.0f, 0.0f,
     0x1.201d88p-34f, 0.0f, 0.0f, 0.0f, 0x1.2a2da8p-28f, 0.0f, 0x1.510802p-98f,
     0x1.2388d4p-102f, 0x1.e534ecp-111f, 0.0f, 0x1.414e7ap-119f, 0.0f, 0.0f,
     0x1.24df0ep-52f, 0x1.5b956p-7f, 0x1.c7de66p-104f, 0x1.d92bd8p-93f,
     0x1.3a66aep-86f, 0.0f, 0x1.cd4b62p-38f, 0.0f, 0x1.7cd7ep-115f, 0x1.51349ep-27f,
     0x1.827f42p-120f, 0x1.90d0c4p-112f, 0.0f, 0.0f, 0x1.fdd194p-51f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.300f3ep-95f, 0.0f, 0x1.99aa4cp-8f, 0.0f,
     0x1.edf7ecp-97f, 0.0f, 0.0f, 0.0f, 0x1.78baeap-53f, 0.0f, 0x1.368b1p-92f,
     0x1.b8d0dep-60f, 0x1.045d9p-72f, 0x1.895b6ap-70f, 0x1.8bfcf6p-14f, 0.0f, 0.0f,
     0x1.aeae46p-17f, 0.0f, 0.0f, 0x1.4c0ff2p-20f, 0.0f, 0.0f, 0x1.fe3002p-118f,
     0x1.a9992p-24f, 0x1.90c3p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e869fp-73f,
     0x1.db02aap-108f, 0.0f, 0.0f, 0x1.8dac66p-50f, 0.0f, 0x1.d04bc4p-117f, 0.0f,
     0x1.f31f6ep-117f, 0x1.a06ccep-43f, 0x1.3457f6p-33f, 0x1.701a16p-38f,
     0x1.07ab4cp-48f, 0x1.82f936p-84f, 0x1.9bb788p-125f, 0x1.77b662p-80f, 0.0f, 0.0f,
     0.0f, 0x1.c56d9ap-58f, 0.0f, 0.0f, 0x1.48cabp-103f, 0x1.a0e642p-39f, 0.0f,
     0x1.54286cp-59f, 0x1.fda0a8p-19f, 0.0f, 0.0f, 0.0f, 0x1.53c7ecp-45f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.06ebc8p-112f, 0x1.994a76p-82f, 0x1.68d984p-87f, 0.0f, 0.0f,
     0x1.fcc136p-54f, 0x1.83b45p-57f, 0.0f, 0.0f, 0x1.6c8366p-62f, 0x1.300aep-119f,
     0x1.bea248p-19f, 0x1.c7654ep-102f, 0x1.0ab16p-84f, 0.0f, 0.0f, 0.0f,
     0x1.3cb7a2p-82f, 0.0f, 0x1.d034d2p-96f, 0x1.a286c2p-109f, 0x1.317162p-98f, 0.0f,
     0.0f, 0x1.ab80f8p-9f, 0x1.769132p-81f, 0x1.69faeap-7f, 0x1.d5e61p-113f, 0.0f,
     0x1.8ad926p-33f, 0x1.d68e9ap-24f, 0x1.439e5ap-113f, 0x1.5b2258p-58f,
     0x1.fdea02p-111f, 0x1.f8653ep-114f, 0.0f, 0x1.17e1aep-97f, 0x1.5b46ap-28f,
     0x1.75d336p-57f, 0.0f, 0.0f, 0.0f, 0x1.958f28p-53f, 0x1.1203e4p-7f, 0.0f, 0.0f,
     0.0f, 0x1.542b9cp-16f, 0.0f, 0x1.8fc80ep-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.261fb6p-82f, 0x1.a0396p-94f, 0x1.b8f968p-86f, 0.0f, 0x1.b8bdbcp-33f,
     0.0f, 0.0f, 0x1.914186p-4f, 0.0f, 0x1.e6abbep-121f, 0x1.d43a2p-23f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.6b9998p-112f, 0x1.6ee1c6p-71f, 0x1.9ae862p-120f, 0.0f, 0.0f,
     0.0f, 0x1.e00cfp-27f, 0.0f, 0.0f, 0.0f, 0x1.bbe2aep-92f, 0.0f, 0x1.4442c8p-114f,
     0.0f, 0.0f, 0.0f, 0x1.34def2p-119f, 0x1.f36636p-86f, 0x1.c8c876p-57f,
     0x1.9a6816p-34f, 0.0f
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
            ml_float4_t tmp3;
            int32_t tmp4;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            memcpy(&tmp1, ((ml_float4_t*)(external_bench_wrapper_input_table_arg1+ i)), 16);
            tmp2 = Sleef_hypotf4_u35kvx(tmp0, tmp1);
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
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_hypotf4_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_hypotf4_u35kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
