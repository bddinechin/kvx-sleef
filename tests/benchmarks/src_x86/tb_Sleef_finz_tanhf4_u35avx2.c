/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_tanhf4_u35avx2128.c --function \
 *     Sleef_finz_tanhf4_u35avx2128 --headers sleef.h,ml_support_lib.h \
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
     0x1.48c124p-100f, 0.0f, 0.0f, 0x1.bb7ad2p-90f, 0x1.8857c6p-21f, 0x1.21ffcp-122f,
     0.0f, 0x1.0f881ep-10f, 0x1.a2ca32p-97f, 0x1.d13436p-62f, 0x1.1e4336p-65f,
     0x1.4300ep-111f, 0.0f, 0.0f, 0x1.a394a4p-72f, 0.0f, 0x1.8a1a34p-83f, 0.0f, 0.0f,
     0x1.9f7abcp-11f, 0x1.c14d8p-31f, 0x1.484c4ep-98f, 0x1.88f81ep-99f, 0.0f, 0.0f,
     0x1.e627ccp-90f, 0.0f, 0x1.b4995ep-110f, 0x1.2b55bp-116f, 0x1.63ee3cp-15f, 0.0f,
     0.0f, 0x1.7f6e8p-13f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.d62a56p-104f,
     0x1.7eb886p-114f, 0x1.98786ap-20f, 0.0f, 0x1.7ff082p-47f, 0.0f, 0.0f, 0.0f,
     0x1.4aeda8p-77f, 0x1.177a4p-68f, 0x1.3702e4p-54f, 0x1.0dc9a4p-12f,
     0x1.5ddca8p-88f, 0x1.7f5c86p-45f, 0x1.25ac5cp-71f, 0x1.efbd02p-12f,
     0x1.d96918p-90f, 0x1.24c40ep-8f, 0x1.2e661ep-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.818a6ap-10f, 0x1.499086p-33f, 0x1.41afaep-126f, 0.0f, 0.0f, 0x1.56a8a4p-47f,
     0x1.80aadp-115f, 0x1.0cd0b2p-8f, 0.0f, 0.0f, 0x1.5b282ap-15f, 0x1.0b3cf4p-80f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.65ea1cp-119f, 0x1.f4f7bp-19f, 0x1.827dd4p-10f,
     0x1.a76fc6p-82f, 0.0f, 0.0f, 0.0f, 0x1.5cd002p-54f, 0x1.e533eep-47f,
     0x1.81f0d6p-5f, 0.0f, 0x1.4374a2p-30f, 0.0f, 0x1.b0f8fp-109f, 0x1.c9cbe6p-111f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f48c5p-45f, 0x1.7972c6p-38f, 0.0f, 0x1.a1ff92p-48f,
     0x1.720ff2p-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.796b1ap-96f, 0x1.7e1936p-113f, 0.0f,
     0x1.14a4f2p-25f, 0x1.b79f4cp-1f, 0x1.7a8e1ep-19f, 0.0f, 0.0f, 0.0f,
     0x1.3b9524p-74f, 0.0f, 0.0f, 0.0f, 0x1.63b1d8p-33f, 0x1.38063cp-121f, 0.0f, 0.0f,
     0x1.2b201cp-108f, 0x1.c87406p-3f, 0x1.a83352p-49f, 0.0f, 0.0f, 0x1.b5e4fap-33f,
     0x1.e0ccaep-22f, 0x1.1ea944p-2f, 0x1.b7613ep-112f, 0x1.95e814p-38f, 0.0f,
     0x1.f86cdep-11f, 0.0f, 0x1.565d1p-116f, 0.0f, 0.0f, 0x1.021da2p-104f,
     0x1.4e2d96p-14f, 0x1.8fc446p-111f, 0.0f, 0.0f, 0.0f, 0x1.e3a70ep-53f, 0.0f, 0.0f,
     0.0f, 0x1.c686b2p-50f, 0.0f, 0x1.1a90ap-43f, 0.0f, 0.0f, 0.0f, 0x1.1ba70ap-100f,
     0.0f, 0x1.4f11cp-112f, 0x1.98a6f4p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.159d22p-7f, 0x1.8d3564p-9f, 0.0f, 0.0f, 0.0f, 0x1.98befap-56f, 0.0f,
     0x1.4c3318p-9f, 0.0f, 0.0f, 0.0f, 0x1.946e0ep-126f, 0.0f, 0x1.d73596p-52f,
     0x1.a2e322p-26f, 0x1.96a8a4p-116f, 0.0f, 0.0f, 0x1.625d72p-104f, 0x1.126832p-85f,
     0x1.18f324p-62f, 0.0f, 0x1.eb2748p-24f, 0.0f, 0x1.d24bdap-13f, 0x1.7b21c4p-47f,
     0x1.ac2426p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7eaff2p-101f, 0.0f, 0x1.2957aap-17f,
     0.0f, 0x1.efefacp-119f, 0x1.872b7p-38f, 0.0f, 0x1.c453e2p-105f, 0.0f,
     0x1.68038ep-81f, 0x1.5e17bap-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d8595p-1f,
     0x1.740b7cp-79f, 0.0f, 0x1.289b46p-74f, 0x1.d1e1fep-92f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.8a5b44p-61f, 0.0f, 0x1.70736ap-17f, 0x1.4f40e6p-36f,
     0x1.986668p-13f, 0.0f, 0x1.741288p-105f, 0x1.4f2dc8p-40f, 0x1.c2adf6p-8f, 0.0f,
     0.0f, 0.0f, 0x1.a0268cp-113f, 0x1.0671e6p-16f, 0x1.0307d2p-24f, 0x1.323c5ap-120f,
     0x1.0f6cdap-98f, 0.0f, 0x1.bb271p-115f, 0x1.4ae658p-65f, 0.0f, 0.0f,
     0x1.bf66dap-36f, 0.0f, 0x1.5fb218p-48f, 0.0f, 0x1.7e7c28p-41f, 0x1.b6f38cp-65f,
     0x1.61a91p-64f, 0x1.ace522p-7f, 0.0f, 0.0f, 0x1.0f57bep-31f, 0.0f, 0.0f,
     0x1.37ba0ep-81f, 0x1.a411a2p-3f, 0.0f, 0.0f, 0x1.290344p-54f, 0x1.8df05cp-20f,
     0.0f, 0x1.c6a6fcp-38f, 0x1.1d648cp-102f, 0x1.fa24d6p-26f, 0x1.7b633ap-24f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.63ba1ep-69f, 0x1.177024p-6f, 0x1.5628acp-58f, 0.0f, 0.0f,
     0.0f, 0x1.d6b6aep-90f, 0x1.1d333ap-26f, 0x1.b962a2p-104f, 0.0f, 0.0f,
     0x1.82a058p-116f, 0.0f, 0x1.6a765cp-9f, 0.0f, 0x1.f9ada4p-5f, 0.0f,
     0x1.8d218ap-5f, 0.0f, 0x1.0910e6p-47f, 0x1p0f, 0.0f, 0.0f, 0.0f,
     0x1.581a0ap-107f, 0x1.827b1ep-119f, 0.0f, 0x1.1ccb0ap-126f, 0.0f,
     0x1.6c1084p-112f, 0.0f, 0.0f, 0.0f, 0x1.aa23ap-87f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.86f70ep-10f, 0.0f, 0x1.192714p-9f, 0.0f, 0.0f, 0x1.b89d3p-39f, 0.0f,
     0x1.ea1088p-31f, 0.0f, 0x1.28a652p-73f, 0.0f, 0x1.43daacp-84f, 0.0f, 0.0f,
     0x1.fb66eap-45f, 0.0f, 0.0f, 0x1.e8a9f4p-73f, 0.0f, 0.0f, 0.0f, 0x1.d87e0ep-2f,
     0x1.8aa212p-30f, 0.0f, 0.0f, 0.0f, 0x1.8d78bp-3f, 0x1.ce5e96p-81f, 0.0f, 0.0f,
     0x1.02333ep-35f, 0x1.05deeap-72f, 0x1.70e5bp-77f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.821c7ap-96f, 0x1.249c44p-85f, 0.0f, 0x1.aaff48p-34f, 0.0f, 0.0f,
     0x1.ec72b6p-72f, 0x1.bb24a6p-17f, 0x1.f4aaeep-2f, 0.0f, 0x1p0f, 0.0f, 0.0f,
     0x1.5b7f86p-22f, 0x1.bb1f3cp-20f, 0x1.0aee96p-113f, 0x1.9e195ep-92f,
     0x1.821d1ep-105f, 0.0f, 0x1.c70c26p-125f, 0.0f, 0x1.7acceep-82f,
     0x1.57a97ep-113f, 0x1.c139dp-7f, 0x1.93c628p-122f, 0x1.09d08cp-111f, 0.0f,
     0x1.8ad3f2p-8f, 0x1.c8390cp-46f, 0.0f, 0.0f, 0.0f, 0x1.fe370ep-64f, 0.0f,
     0x1.9434ecp-69f, 0.0f, 0.0f, 0.0f, 0x1.c51cdep-86f, 0x1.99bc5cp-80f, 0.0f,
     0x1.379218p-62f, 0x1.51401ep-4f, 0.0f, 0.0f, 0.0f, 0x1.9fb7bp-60f, 0.0f,
     0x1.dbb3f6p-69f, 0x1.8223cap-83f, 0.0f, 0.0f, 0.0f, 0x1.014af4p-109f,
     0x1.2e54b4p-51f, 0x1.db0f86p-95f, 0x1.dd795ep-74f, 0x1.429fb2p-32f,
     0x1.0a0cd4p-18f, 0x1.470012p-56f, 0.0f, 0.0f, 0x1.5eb212p-6f, 0x1.2af664p-72f,
     0.0f, 0x1.78f3aep-46f, 0.0f, 0.0f, 0.0f, 0x1.0cc92p-30f, 0.0f, 0.0f,
     0x1.70a8b6p-125f, 0x1.560f5ep-95f, 0x1.bac352p-42f, 0.0f, 0.0f, 0.0f,
     0x1.9c6702p-44f, 0.0f, 0.0f, 0.0f, 0x1.37ae3cp-77f, 0x1.5f0498p-86f,
     0x1.d7a57p-48f, 0x1.fbd3a8p-79f, 0.0f, 0.0f, 0x1.99d758p-4f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.265668p-39f, 0.0f, 0x1.f4fd8p-48f, 0.0f, 0.0f,
     0.0f, 0x1.7001a4p-36f, 0x1.42c0dep-37f, 0.0f, 0x1.5d732cp-33f, 0x1.4ed27p-91f,
     0.0f, 0.0f, 0.0f, 0x1.6ce102p-74f, 0.0f, 0x1.df51a6p-43f, 0x1.87b988p-87f, 0.0f,
     0.0f, 0x1.19f22cp-61f, 0.0f, 0.0f, 0x1.15c0ccp-65f, 0.0f, 0.0f, 0.0f,
     0x1.b479bep-120f, 0x1.efcb24p-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ffa072p-13f,
     0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.512d18p-11f, 0x1.399b7ap-57f, 0.0f,
     0x1.e0e54ep-50f, 0.0f, 0.0f, 0x1.c03c9ep-81f, 0.0f, 0x1.4650d2p-106f,
     0x1.c3dfd6p-73f, 0x1.dcc8bp-43f, 0x1.81a5c8p-1f, 0.0f, 0x1.a4561ap-39f, 0.0f,
     0x1.2076fcp-111f, 0.0f, 0x1.731c22p-55f, 0x1.4ab3dap-49f, 0.0f, 0x1.df218p-76f,
     0x1.905d26p-73f, 0x1.ca82e2p-13f, 0x1.bd5dc2p-49f, 0x1.52871ep-3f,
     0x1.647302p-70f, 0.0f, 0.0f, 0x1.82bacep-55f, 0x1.dc5508p-28f, 0x1.1bad9p-48f,
     0.0f, 0.0f, 0.0f, 0x1.2a2f52p-43f, 0x1.0a63f6p-67f, 0.0f, 0x1.0f8ad8p-101f, 0.0f,
     0.0f, 0.0f, 0x1.6539eep-65f, 0.0f, 0.0f, 0x1.7eefeep-91f, 0x1.66186ap-18f, 0.0f,
     0x1.dc8258p-98f, 0.0f, 0x1.013de4p-114f, 0x1.aec3aep-69f, 0x1.1468dp-55f,
     0x1.798a7p-75f, 0x1.2776bp-19f, 0.0f, 0x1.3fa7aep-23f, 0x1.cfa5c2p-75f,
     0x1.b80a8ep-28f, 0.0f, 0x1.54726p-111f, 0.0f, 0.0f, 0x1.b8ab56p-81f,
     0x1.850d18p-117f, 0x1.d473cep-67f, 0.0f, 0x1.c0a33p-122f, 0.0f, 0x1.d5ee18p-68f,
     0x1.5a7d5p-24f, 0x1.84e284p-52f, 0.0f, 0x1.7e5a8ap-85f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fbeef2p-107f, 0x1.39801ap-112f, 0.0f, 0x1.6b1176p-25f, 0x1.405814p-65f, 0.0f,
     0.0f, 0.0f, 0x1.4ec7dp-30f, 0.0f, 0x1.6a8f8ap-85f, 0x1.3ed2d4p-24f, 0.0f,
     0x1.9e73b8p-8f, 0.0f, 0x1.5ed2c4p-104f, 0x1.d08292p-124f, 0.0f, 0x1.a3932ap-80f,
     0x1.dac49ap-107f, 0x1.9602dp-70f, 0x1.7b1dbp-60f, 0x1.a43d34p-34f,
     0x1.049c82p-50f, 0x1.e3ba4ap-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a1b6c2p-10f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f1c87cp-79f, 0x1.fcb1f8p-99f,
     0x1.3a8f44p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.85d01ap-50f, 0.0f, 0.0f, 0.0f,
     0x1.2f714ap-38f, 0.0f, 0x1.d8368p-56f, 0x1.833ca8p-49f, 0.0f, 0.0f,
     0x1.f4e0e8p-27f, 0.0f, 0.0f, 0.0f, 0x1.1557aap-57f, 0x1.74ee9cp-77f, 0x1p0f,
     0x1.1ba4aap-16f, 0.0f, 0x1.419008p-105f, 0.0f, 0.0f, 0.0f, 0x1.052c62p-123f,
     0x1.f35f1ep-117f, 0x1.e62f88p-20f, 0x1.7b7b2ep-117f, 0.0f, 0.0f, 0x1.f13514p-72f,
     0.0f, 0.0f, 0.0f, 0x1.9e61c2p-116f, 0x1.4d075p-112f, 0x1.b114ccp-90f,
     0x1.8f8dbcp-7f, 0x1.350f2ep-102f, 0.0f, 0x1.835f06p-106f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3fb3dep-54f, 0x1.bab082p-73f, 0.0f, 0x1.0ceacep-31f, 0x1.01ae64p-99f, 0.0f,
     0x1.168f18p-31f, 0x1.3d50d4p-25f, 0x1p0f, 0x1.8081ap-84f, 0.0f, 0x1.aa0d96p-23f,
     0.0f, 0.0f, 0x1.128dc8p-32f, 0x1.0af22ap-8f, 0x1.9b06f4p-73f, 0x1.499a18p-82f,
     0x1.43583cp-118f, 0x1.617d5p-15f, 0x1.7a4478p-99f, 0x1.ba9fc6p-58f,
     0x1.5bd64ap-67f, 0x1.372c56p-79f, 0.0f, 0.0f, 0x1.c8e472p-64f, 0x1.8f5d18p-99f,
     0.0f, 0.0f, 0.0f, 0x1.a81cdep-123f, 0.0f, 0.0f, 0.0f, 0x1.764d3ap-41f,
     0x1.e97d9cp-3f, 0x1.eaee58p-91f, 0x1.be6e46p-19f, 0x1.c28fcap-120f,
     0x1.f45682p-80f, 0x1.75ff58p-48f, 0.0f, 0.0f, 0x1.d18058p-36f, 0x1.cf0f44p-63f,
     0x1.b5fee8p-16f, 0.0f, 0x1.022a62p-99f, 0.0f, 0.0f, 0.0f, 0x1.540386p-89f, 0.0f,
     0x1.aa24dep-83f, 0x1.c1a23ep-22f, 0x1.24d16p-27f, 0.0f, 0x1.57b2d4p-118f, 0.0f,
     0x1.162c96p-4f, 0.0f, 0.0f, 0.0f, 0x1.01884cp-118f, 0x1.3aba82p-105f, 0.0f, 0.0f,
     0x1.bd43aap-64f, 0x1.989f72p-44f, 0x1.fd071ep-59f, 0.0f, 0.0f, 0x1.2bf25cp-93f,
     0x1.63e726p-90f, 0x1.a42e9p-110f, 0.0f, 0x1.675c6ap-44f, 0.0f, 0x1.520f34p-89f,
     0.0f, 0x1.0d6cf2p-12f, 0x1.434b8ep-95f, 0.0f, 0.0f, 0x1.45b2eep-62f,
     0x1.efcc76p-15f, 0.0f, 0.0f, 0x1.9b0726p-65f, 0.0f, 0x1.a22f86p-53f,
     0x1.2dd6eep-117f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.5249d4p-93f,
     0x1.b32f12p-27f, 0.0f, 0x1.ff9feap-34f, 0x1.7137f6p-115f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.36397ep-115f, 0x1.188e5ep-79f, 0.0f, 0.0f, 0x1.692996p-103f, 0.0f,
     0x1.3f9c6ep-116f, 0.0f, 0.0f, 0x1.7b6daap-35f, 0x1.217ccp-104f, 0.0f,
     0x1.9ec8d2p-100f, 0x1.e93b12p-42f, 0x1.1fc1p-32f, 0x1.0f7c52p-86f,
     0x1.dcb154p-88f, 0x1.b98032p-37f, 0.0f, 0x1.c5111cp-93f, 0x1.63ef0ap-55f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.bddcbap-84f, 0.0f, 0.0f, 0x1.677e7p-96f, 0x1.4815c6p-4f,
     0x1.5b685cp-13f, 0x1.4d41dp-68f, 0.0f, 0x1.467206p-64f, 0.0f, 0x1.f54c2ap-81f,
     0x1.63f37cp-89f, 0x1.4635fap-54f, 0x1.8457e2p-75f, 0x1.5441b6p-58f,
     0x1.64b51ep-36f, 0x1.438a1ep-21f, 0x1.d2bdc8p-47f, 0x1.f70d6cp-120f, 0.0f,
     0x1.556f96p-105f, 0x1.43737cp-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.179c0ap-60f,
     0x1.b1128p-36f, 0.0f, 0.0f, 0x1.c2e402p-21f, 0x1.f78f2p-88f, 0x1.9638e6p-64f,
     0x1.e47208p-52f, 0.0f, 0x1.ff2332p-86f, 0.0f, 0.0f, 0x1.26371cp-59f, 0.0f,
     0x1.bfe558p-76f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.ddfd1ep-38f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.006b62p-69f, 0.0f, 0x1.c8ebaep-10f, 0x1.e5d8d4p-10f, 0.0f,
     0x1.ed303p-118f, 0x1.a5d9e8p-86f, 0x1.915eb2p-68f, 0.0f, 0x1.ee27dap-110f,
     0x1.b6de76p-121f, 0x1.e82fc8p-29f, 0.0f, 0.0f, 0x1.de81aap-6f, 0x1.60b978p-36f,
     0.0f, 0.0f, 0.0f, 0x1.62340ep-74f, 0.0f, 0x1.0bcc56p-124f, 0.0f, 0.0f,
     0x1.fcde8ap-25f, 0x1.8b6a68p-26f, 0x1.4f1a4ep-10f, 0x1.0c9402p-22f,
     0x1.eec9aap-100f, 0x1.e53dacp-112f, 0x1.69fb4cp-79f, 0.0f, 0x1.51d36ep-96f,
     0x1.27597cp-55f, 0.0f, 0.0f, 0.0f, 0x1.e37fd8p-30f, 0x1.a731aep-31f,
     0x1.c9bf26p-115f, 0.0f, 0.0f, 0.0f, 0x1.a82b6ep-93f, 0.0f, 0.0f, 0x1.7fd072p-63f,
     0x1.cabbd8p-67f, 0.0f, 0.0f, 0.0f, 0x1.832a24p-18f, 0x1.f4db8cp-11f,
     0x1.f4ab64p-23f, 0.0f, 0.0f, 0x1.5af2d6p-28f, 0.0f, 0x1.de9312p-99f, 0.0f,
     0x1.bf3f38p-77f, 0x1p0f, 0.0f, 0x1.350f28p-34f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.00ba6p-66f, 0.0f, 0x1.6bae4ep-93f, 0x1.299576p-23f, 0.0f, 0x1.89a568p-76f,
     0.0f, 0.0f, 0x1.b00cfep-43f, 0x1.6a6954p-126f, 0x1.854764p-35f, 0.0f,
     0x1.89ee64p-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c5a782p-102f, 0x1.09e92cp-46f, 0.0f,
     0x1.1e695p-73f, 0.0f, 0x1.f364fep-38f, 0x1.51c22p-10f, 0.0f, 0.0f, 0.0f,
     0x1.e7bf8cp-39f, 0.0f, 0x1.7507a4p-57f, 0x1.084cacp-60f, 0x1.9d49d2p-57f, 0.0f,
     0x1.5058e2p-16f, 0.0f, 0.0f, 0x1.0f2b46p-1f, 0x1.8c77aap-119f, 0x1.67fc3ap-59f,
     0x1.9dda88p-8f, 0.0f, 0.0f, 0x1.188934p-4f, 0.0f, 0x1.3fca1cp-87f,
     0x1.e663eep-65f, 0x1.9d427ap-61f, 0x1.5dcc92p-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.8ee5fep-74f, 0.0f, 0.0f, 0x1.492074p-21f, 0x1.3c9548p-117f, 0.0f, 0.0f,
     0x1.049a84p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4d5414p-40f, 0x1.f2dfp-3f,
     0x1.9d4a0ap-8f, 0x1.841a12p-41f, 0x1.3cf3d4p-104f, 0x1.a1afbap-75f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1a3554p-36f, 0.0f, 0x1.4e93dap-23f, 0x1.7078e6p-72f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.eec0a2p-116f, 0.0f, 0x1.1161d8p-11f, 0.0f, 0.0f, 0x1.644ap-1f,
     0.0f, 0x1.9e85b6p-72f, 0.0f, 0.0f, 0.0f, 0x1.995cc6p-122f, 0.0f, 0.0f,
     0x1.05796ap-9f, 0x1.96b338p-54f, 0.0f, 0x1.193164p-72f, 0x1.beaf6ep-54f
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
            tmp1 = Sleef_finz_tanhf4_u35avx2128(tmp0);
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
    printf("Sleef_finz_tanhf4_u35avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_tanhf4_u35avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
