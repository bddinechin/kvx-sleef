/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_asinhf4_u10kvx.c --function \
 *     Sleef_finz_asinhf4_u10kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 4 --function-input-vector-size \
 *     4 --bench --no-embedded-bin --target kv3
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
     0x1.0e812ap-1f, 0.0f, 0x1.c363b6p-92f, 0x1.50f2d8p-106f, 0.0f, 0.0f,
     0x1.e4d3a8p-123f, 0x1.c1fa7p-6f, 0x1.5e454p-92f, 0.0f, 0x1.93d50ep-37f,
     0x1.c6012ep-58f, 0x1.592878p-106f, 0x1.892b9cp-85f, 0.0f, 0.0f, 0x1.4426bap-120f,
     0x1.9dc402p-79f, 0.0f, 0.0f, 0x1.efac08p-4f, 0x1.c4d046p-68f, 0.0f,
     0x1.bff2ecp-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1c808ap-43f, 0.0f, 0x1.e2f792p-115f,
     0x1.2b8f64p-55f, 0x1.5bff72p-81f, 0x1.bcd164p-63f, 0.0f, 0x1.a58dp-99f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e25204p-48f, 0.0f, 0x1.8f90e6p-115f, 0.0f,
     0x1.f6576p-113f, 0.0f, 0x1.cd2d68p-20f, 0x1.7bd22ep-78f, 0.0f, 0x1.4b5c5p-90f,
     0x1.585462p-57f, 0x1.cf9b32p-87f, 0x1.f4bea2p-63f, 0x1.bf9b6cp-43f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.12c39ap-9f, 0.0f, 0x1.223e7p-104f, 0.0f, 0.0f,
     0x1.99f75cp-120f, 0x1.8a8bb6p-109f, 0x1.8d5db6p-46f, 0x1.ba89d6p-12f,
     0x1.a27138p-66f, 0x1.8ef62cp-107f, 0.0f, 0.0f, 0x1.213b7p-63f, 0.0f, 0.0f, 0.0f,
     0x1.cbb77ep-8f, 0.0f, 0x1.bbea9ep-41f, 0x1.39b264p-36f, 0x1.ed50aep-74f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.31200ep-125f, 0x1.7d5ba8p-51f, 0.0f, 0x1.b10ae4p-8f,
     0.0f, 0.0f, 0x1.429b8cp-58f, 0x1.e1388p-66f, 0x1.b7a90cp-41f, 0x1.2b7e66p-50f,
     0x1.5ea598p-117f, 0x1.1e04bap-29f, 0x1.1139d8p-59f, 0x1.a46106p-22f, 0.0f, 0.0f,
     0.0f, 0x1.8839ap-31f, 0x1.e39eecp-26f, 0x1.d3b2cap-70f, 0.0f, 0x1.4d6108p-14f,
     0x1.daabccp-7f, 0x1.be2bcp-46f, 0.0f, 0.0f, 0x1.556cc4p-42f, 0x1.d5c2d2p-100f,
     0x1.31acaap-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.aeb58cp-94f, 0.0f, 0x1.ccb7eap-12f,
     0.0f, 0.0f, 0.0f, 0x1.aa36c2p-21f, 0x1.f6ea56p-96f, 0x1.04395ap-86f,
     0x1.260e72p-19f, 0x1.5a989ep-7f, 0x1.d3a8fcp-23f, 0.0f, 0x1.598baap-22f,
     0x1.bf20bap-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1p0f, 0x1.269828p-54f, 0.0f,
     0x1.c2f826p-45f, 0x1.f57404p-119f, 0x1.e6d704p-14f, 0x1.1b1302p-122f,
     0x1.9f7e3p-24f, 0.0f, 0.0f, 0.0f, 0x1.d1293p-72f, 0x1.36490cp-125f,
     0x1.84e38p-108f, 0.0f, 0.0f, 0x1.557ec6p-56f, 0.0f, 0x1.f43fp-27f, 0.0f, 0.0f,
     0.0f, 0x1.b1d912p-82f, 0.0f, 0.0f, 0.0f, 0x1.62476p-16f, 0.0f, 0x1.fe3a02p-11f,
     0x1.9df6c6p-114f, 0.0f, 0x1.dbecc2p-102f, 0.0f, 0.0f, 0.0f, 0x1.a341b4p-109f,
     0x1.a0a3dep-126f, 0x1.bfc0b6p-120f, 0.0f, 0x1.edf08cp-84f, 0x1.bcc9e8p-1f, 0.0f,
     0x1.cea7b8p-72f, 0.0f, 0.0f, 0.0f, 0x1.040f9p-117f, 0.0f, 0.0f, 0x1.3c443ap-120f,
     0x1p0f, 0x1.5cd2bp-47f, 0x1.030c56p-39f, 0x1.f7c4f8p-114f, 0x1.595eb6p-80f, 0.0f,
     0x1.d35f4cp-106f, 0.0f, 0x1.0798acp-89f, 0x1.f655f8p-102f, 0.0f,
     0x1.ecd742p-121f, 0.0f, 0.0f, 0.0f, 0x1.1719ecp-17f, 0x1.93e1dcp-9f,
     0x1.c84b52p-78f, 0.0f, 0.0f, 0.0f, 0x1.781f7ep-11f, 0.0f, 0.0f, 0.0f,
     0x1.c9167p-8f, 0x1.5a3f9p-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fe51b6p-108f,
     0x1.8446f6p-30f, 0.0f, 0.0f, 0.0f, 0x1.2ad7aap-4f, 0x1.3e8758p-84f, 0.0f,
     0x1.0f5868p-17f, 0.0f, 0x1.c1f9f4p-2f, 0.0f, 0.0f, 0x1.b3bfcep-28f, 0.0f, 0.0f,
     0.0f, 0x1.b59efap-112f, 0.0f, 0.0f, 0x1.446f4cp-11f, 0.0f, 0x1.6a636ap-50f,
     0x1.f0ac16p-97f, 0x1.63e04p-43f, 0x1.6e2cdep-23f, 0.0f, 0.0f, 0.0f,
     0x1.c4bee8p-22f, 0.0f, 0.0f, 0x1.837e5ap-111f, 0x1.76daeep-44f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.8158dep-65f, 0.0f, 0x1.289c1ap-113f, 0x1.ce488cp-82f, 0x1.73c3e4p-59f,
     0x1.6025f6p-104f, 0x1.7d486ap-117f, 0x1.f9c74ep-65f, 0x1.d77242p-47f,
     0x1.1dda7p-60f, 0x1.867422p-30f, 0x1.7d11bap-94f, 0x1.5242dp-110f,
     0x1.819228p-105f, 0x1.c85e6cp-23f, 0x1.e56aa4p-61f, 0.0f, 0.0f, 0x1.94a324p-121f,
     0.0f, 0x1.aa5f52p-92f, 0.0f, 0x1.455d64p-17f, 0x1.cd62e8p-89f, 0x1.8ef0c8p-4f,
     0.0f, 0.0f, 0.0f, 0x1.74aedep-20f, 0.0f, 0x1.b9019p-103f, 0x1.2f7494p-62f, 0.0f,
     0x1.a0817ap-117f, 0.0f, 0x1.d52dep-17f, 0x1.2c1edep-120f, 0x1.98d7dep-97f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.093b7ap-6f, 0x1.c8490ep-1f, 0.0f, 0x1.ba45a4p-110f,
     0x1.01be4ap-45f, 0x1.317bdep-60f, 0x1.f215e4p-52f, 0.0f, 0x1.5c8dd4p-56f,
     0x1.2a5482p-26f, 0x1.b1f67ap-8f, 0.0f, 0.0f, 0x1.b4c5b4p-59f, 0.0f,
     0x1.ea9baap-30f, 0.0f, 0x1.7b052ap-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.573e28p-35f,
     0.0f, 0.0f, 0x1.acc25ep-28f, 0x1.ad5d02p-44f, 0x1.489194p-123f, 0x1.f24fe4p-71f,
     0.0f, 0.0f, 0.0f, 0x1.e64384p-102f, 0x1.b777a2p-1f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1e54fp-34f, 0x1.975d04p-33f, 0x1.9b0412p-44f, 0x1.73f288p-113f, 0.0f,
     0x1.42835ep-42f, 0.0f, 0.0f, 0x1.0f9c6ap-29f, 0.0f, 0x1.82aap-45f, 0.0f,
     0x1.081d3cp-85f, 0x1.51e69ep-121f, 0.0f, 0x1.e6cef2p-91f, 0x1.fe3dcap-78f,
     0x1.8194f6p-70f, 0.0f, 0.0f, 0.0f, 0x1.8026eep-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.84722ap-114f, 0x1.6cc6f8p-116f, 0.0f, 0x1.5d38b8p-90f, 0x1.095ep-124f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.df942p-56f, 0x1.592ba2p-82f, 0x1.ecd95ep-7f,
     0x1.ca7c26p-93f, 0x1.9384f6p-34f, 0.0f, 0.0f, 0.0f, 0x1.0d1ffp-56f, 0x1p0f,
     0x1.b9f912p-44f, 0x1p0f, 0x1.0672aap-45f, 0x1.352116p-118f, 0.0f,
     0x1.7ad9f6p-85f, 0x1.e3c0a6p-50f, 0.0f, 0.0f, 0x1.bca2ap-58f, 0x1.7a88b6p-89f,
     0x1.7bb5aep-117f, 0.0f, 0x1.c25ddep-105f, 0x1.b3166ep-42f, 0x1.0935d6p-113f,
     0.0f, 0x1.6517f6p-59f, 0x1.c440dcp-88f, 0x1.80731ap-104f, 0.0f, 0x1.cce6cp-56f,
     0.0f, 0.0f, 0x1.2d9c12p-35f, 0.0f, 0x1.467258p-62f, 0.0f, 0.0f, 0.0f,
     0x1.9a638p-57f, 0.0f, 0x1.b5cap-77f, 0.0f, 0x1.07cc1ep-88f, 0x1.e3f174p-112f,
     0.0f, 0.0f, 0x1.efa4d6p-116f, 0.0f, 0x1.45f964p-94f, 0x1.ee9a44p-73f,
     0x1.c604acp-61f, 0.0f, 0x1.1616bap-61f, 0x1.c3320ap-66f, 0x1.c6adfcp-53f, 0.0f,
     0.0f, 0x1.da2b12p-70f, 0x1.b5c884p-72f, 0.0f, 0.0f, 0x1.de1c84p-101f, 0.0f,
     0x1.3037a2p-84f, 0.0f, 0x1.6fef8p-125f, 0x1.305daap-26f, 0.0f, 0x1.1d2d7cp-114f,
     0.0f, 0.0f, 0x1.dca0eep-124f, 0.0f, 0x1.7ff5c8p-76f, 0.0f, 0.0f, 0x1.bf9972p-11f,
     0.0f, 0x1.1c2c1cp-33f, 0.0f, 0.0f, 0x1.dfbeecp-66f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.512d64p-102f, 0.0f, 0x1.803f4ep-83f, 0x1.cff7a4p-106f, 0.0f, 0x1.97019p-35f,
     0.0f, 0x1.bf1bcap-82f, 0.0f, 0x1.6ba9bcp-103f, 0x1.0ae39cp-35f, 0x1.c37e4ap-35f,
     0x1.4c8264p-74f, 0.0f, 0.0f, 0.0f, 0x1.681b7ap-13f, 0x1.a0160cp-15f, 0.0f, 0.0f,
     0.0f, 0x1.9376b2p-96f, 0.0f, 0.0f, 0x1.7f5d34p-21f, 0.0f, 0.0f, 0x1.413f66p-27f,
     0.0f, 0x1.b10f68p-21f, 0.0f, 0.0f, 0x1.e18f26p-83f, 0x1.01a9c6p-109f,
     0x1.259cecp-5f, 0.0f, 0.0f, 0.0f, 0x1.d13f84p-57f, 0.0f, 0.0f, 0x1.548824p-120f,
     0.0f, 0.0f, 0.0f, 0x1.93d202p-96f, 0x1.5ee1fap-41f, 0.0f, 0.0f, 0.0f,
     0x1.ca6144p-57f, 0x1.e67106p-9f, 0.0f, 0x1.bd40eep-48f, 0.0f, 0.0f, 0.0f,
     0x1.a2c3ep-64f, 0.0f, 0x1.9a42eep-92f, 0.0f, 0x1.9b47f8p-2f, 0x1.f4af78p-9f,
     0.0f, 0x1.6c0038p-102f, 0x1.d52f36p-40f, 0x1.18471p-89f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.fb7c26p-87f, 0x1.49f06p-122f, 0x1.378a86p-2f, 0.0f, 0.0f,
     0x1.799c5ep-103f, 0.0f, 0x1.ccc10cp-54f, 0.0f, 0x1.508baap-32f, 0x1.bd8056p-48f,
     0.0f, 0x1.d1e508p-86f, 0x1.7465aap-113f, 0x1.54b54cp-110f, 0x1.ff4dap-95f,
     0x1.1ac558p-18f, 0x1.d62afp-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.585f4p-46f,
     0x1.e826p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ba12ep-48f, 0x1.97a05cp-106f,
     0.0f, 0x1.3e67f4p-61f, 0.0f, 0x1.7cde14p-42f, 0.0f, 0x1.aac77ap-16f,
     0x1.f6cea4p-70f, 0.0f, 0x1.af2b5ep-8f, 0.0f, 0.0f, 0.0f, 0x1.1a6004p-82f, 0.0f,
     0x1.7d6584p-85f, 0.0f, 0.0f, 0x1.1edf48p-34f, 0x1.9d6516p-36f, 0.0f, 0.0f, 0.0f,
     0x1.a6658ep-91f, 0x1.8a59dp-68f, 0.0f, 0x1.bd155ap-122f, 0.0f, 0.0f,
     0x1.00a198p-98f, 0x1.0dd642p-89f, 0x1.69fa58p-3f, 0.0f, 0.0f, 0.0f,
     0x1.30944ep-41f, 0x1.71f266p-57f, 0x1.ceccecp-86f, 0x1.72763ep-87f,
     0x1.984d64p-4f, 0x1.7319f4p-112f, 0.0f, 0.0f, 0.0f, 0x1.50d5bap-47f, 0.0f,
     0x1.670dccp-46f, 0x1.ccd3dep-94f, 0.0f, 0.0f, 0x1.e04e48p-1f, 0x1.3b0b78p-125f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f141e6p-18f, 0.0f, 0x1.9aaaf2p-20f, 0.0f,
     0x1.c7018ap-13f, 0x1.435804p-101f, 0.0f, 0.0f, 0.0f, 0x1.f28d34p-55f, 0.0f,
     0x1.b55924p-83f, 0.0f, 0x1.7f04dcp-67f, 0.0f, 0x1.3ae9eep-43f, 0.0f, 0.0f,
     0x1.2bc54ap-81f, 0x1.ce6d5ep-113f, 0x1.cc3fd6p-99f, 0x1.c32a92p-84f,
     0x1.372ap-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.abca5cp-83f, 0.0f, 0x1.e807e2p-25f,
     0.0f, 0x1.01bdd4p-80f, 0x1.efd0c6p-28f, 0x1.863df2p-102f, 0x1.4d4ba2p-77f, 0.0f,
     0.0f, 0x1.fae18ep-44f, 0x1.3800ep-111f, 0x1.96e624p-84f, 0x1.aaa642p-36f,
     0x1.02a826p-102f, 0x1.acfeacp-48f, 0x1.86746cp-35f, 0.0f, 0.0f, 0.0f,
     0x1.b645f4p-97f, 0.0f, 0x1.4c2142p-40f, 0x1.5f9386p-21f, 0.0f, 0x1.691d3cp-68f,
     0x1.47b808p-30f, 0.0f, 0x1.ec1894p-114f, 0.0f, 0.0f, 0x1.fe0eccp-97f,
     0x1.cc0124p-116f, 0.0f, 0x1.c4dbep-87f, 0.0f, 0x1.8576a4p-71f, 0.0f, 0.0f,
     0x1.1d7caep-109f, 0.0f, 0x1.93d0d4p-90f, 0.0f, 0.0f, 0x1.79973ep-73f, 0.0f, 0.0f,
     0x1.938dacp-36f, 0.0f, 0x1.8de588p-73f, 0.0f, 0.0f, 0.0f, 0x1.f998dap-50f,
     0x1.3086ap-61f, 0.0f, 0x1.1d728cp-91f, 0x1.03f562p-88f, 0x1.2fb476p-8f, 0.0f,
     0x1.87a0dep-20f, 0.0f, 0x1.53c4d2p-112f, 0x1.f5cfe6p-15f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e0748ap-23f, 0.0f, 0.0f, 0x1p0f, 0x1.6e8ebp-1f, 0x1p0f, 0x1p0f,
     0x1.4bc852p-45f, 0x1.b52c6p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.568b54p-55f,
     0x1.34501ep-25f, 0.0f, 0x1.4f5e74p-23f, 0.0f, 0.0f, 0.0f, 0x1.390d12p-11f, 0.0f,
     0.0f, 0x1.361cacp-5f, 0x1.7da802p-122f, 0.0f, 0.0f, 0x1.3970eap-106f, 0.0f,
     0x1.44f32cp-80f, 0x1.479e9ep-28f, 0.0f, 0x1.017898p-45f, 0.0f, 0x1.d939fcp-21f,
     0x1.d9625cp-23f, 0x1.41acep-74f, 0.0f, 0.0f, 0x1.01839ap-85f, 0x1.3dfd3ep-85f,
     0x1.605722p-10f, 0x1.678232p-49f, 0x1.d15b14p-31f, 0.0f, 0x1.125c08p-40f, 0.0f,
     0.0f, 0x1.e2b4c4p-30f, 0x1.2fa1a4p-45f, 0.0f, 0.0f, 0x1.8da112p-5f, 0.0f,
     0x1.bcff26p-80f, 0x1.22e20ap-101f, 0.0f, 0.0f, 0x1.5985dep-112f, 0x1.2afbcp-99f,
     0.0f, 0x1.dd2198p-2f, 0x1.07d7cap-42f, 0.0f, 0x1.f4c0f6p-60f, 0x1.76b882p-105f,
     0x1.e38362p-67f, 0x1.e2885cp-50f, 0x1.396a5ap-81f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.21c16p-52f, 0.0f, 0x1.69fee8p-86f, 0.0f, 0.0f, 0x1.44db28p-115f, 0.0f,
     0x1.1fcecap-44f, 0x1.bedb2p-54f, 0x1.036dcep-55f, 0.0f, 0x1.bd230ap-44f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.35abbap-97f, 0.0f, 0x1.277006p-74f,
     0x1.c38984p-35f, 0.0f, 0.0f, 0.0f, 0x1.f753e4p-35f, 0x1.519146p-20f, 0.0f,
     0x1.505284p-19f, 0x1.c9f97ep-12f, 0.0f, 0x1.1c8e02p-21f, 0x1.bea062p-68f, 0.0f,
     0x1.ec14fp-93f, 0x1.6e38a2p-10f, 0x1.374a9p-61f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f,
     0x1.865ed4p-30f, 0.0f, 0x1.f42c02p-116f, 0x1.16b18ap-117f, 0x1.f43dc2p-123f,
     0.0f, 0x1.0a3df8p-125f, 0.0f, 0x1.b25b24p-24f, 0.0f, 0.0f, 0x1.b2e86cp-16f,
     0x1.3e44ecp-102f, 0.0f, 0.0f, 0x1.6077a8p-115f, 0x1.4f01eep-101f, 0.0f,
     0x1.fd2776p-7f, 0.0f, 0x1.54c2e4p-8f, 0x1.a3f3ecp-13f, 0x1.8f8312p-66f,
     0x1.5df3cp-124f, 0.0f, 0x1.d833fcp-86f, 0x1.a926d2p-65f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.449b78p-103f, 0x1.19fbd4p-74f, 0x1.8fa982p-115f, 0.0f, 0.0f,
     0x1.d8328ep-18f, 0.0f, 0x1.28d45ep-54f, 0.0f, 0.0f, 0x1.5e1b46p-125f, 0.0f, 0.0f,
     0.0f, 0x1.8ba99p-81f, 0.0f, 0x1.a2df3ap-112f, 0.0f, 0x1.c6cbp-33f, 0.0f, 0.0f,
     0.0f, 0x1.b1ac3ep-119f, 0x1.81a73ep-49f, 0.0f, 0.0f, 0x1.5c7aa8p-62f,
     0x1.fca66ap-39f, 0.0f, 0.0f, 0x1.5c87p-41f, 0.0f, 0x1.a0afb6p-32f,
     0x1.164342p-111f, 0x1.6c909ap-45f, 0x1.15f2p-7f, 0.0f, 0.0f, 0.0f,
     0x1.08c5b4p-76f, 0x1.726cf2p-17f, 0x1.5ae02cp-83f, 0.0f, 0x1.17ae8ep-45f,
     0x1.a80302p-119f, 0.0f, 0x1.216408p-118f, 0.0f, 0.0f, 0.0f, 0x1.814cfp-5f, 0.0f,
     0.0f, 0x1.c4c448p-38f, 0x1.6c0446p-17f, 0.0f, 0x1.a23c4cp-2f, 0.0f, 0.0f,
     0x1.d671ep-108f, 0.0f, 0x1.6383fcp-104f, 0.0f, 0x1.2036f6p-3f, 0x1.a2f758p-47f,
     0x1.867a62p-121f, 0x1.ba4774p-100f, 0x1.ca8d62p-16f, 0.0f, 0.0f,
     0x1.472f06p-123f, 0.0f, 0x1.7752dap-34f, 0x1.5feef2p-65f, 0.0f, 0x1.a7a95p-21f,
     0.0f, 0x1.5e7cdap-85f, 0x1.623de4p-57f, 0x1.5d221ep-5f, 0.0f, 0x1.376b3ap-125f,
     0.0f, 0.0f, 0x1.35fd16p-56f, 0.0f, 0x1.fdb07ep-112f, 0.0f, 0x1.c9bc44p-50f,
     0x1.17d6ccp-78f, 0x1.8e3a92p-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d6a72p-26f, 0.0f, 0.0f, 0x1.5a033p-94f, 0.0f, 0x1.32a0d2p-80f,
     0x1.0f9882p-38f, 0x1.e8a67p-49f, 0.0f, 0x1.1876a2p-69f, 0x1.c83d0cp-54f, 0.0f,
     0x1.1fcb72p-22f, 0.0f, 0x1.971888p-63f, 0.0f, 0.0f, 0.0f, 0x1.eb7d56p-31f, 0.0f,
     0x1.03166ap-16f, 0x1.e5cfb2p-57f, 0x1.44f0ap-1f, 0.0f, 0.0f, 0x1.37e346p-113f,
     0.0f, 0.0f, 0x1.1250ccp-27f, 0x1.2351a2p-13f, 0.0f, 0x1.3cfd7ep-108f,
     0x1.845d0ap-4f, 0.0f, 0x1.eb5406p-106f, 0x1.ba45e8p-37f, 0.0f, 0.0f
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
            int32_t tmp3;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_finz_asinhf4_u10kvx(tmp0);
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
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_finz_asinhf4_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_asinhf4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
