/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sqrtf4_avx2128.c --function Sleef_finz_sqrtf4_avx2128 \
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
     0.0f, 0x1.71b972p-93f, 0x1.ed665p-60f, 0.0f, 0x1.f2edap-8f, 0x1.8ff006p-117f,
     0x1.8f5de2p-67f, 0x1.2276fap-76f, 0.0f, 0x1.597e6p-74f, 0x1.e07864p-53f,
     0x1.74ff64p-102f, 0x1.a45836p-91f, 0.0f, 0.0f, 0x1.84803ap-45f, 0x1.8e92eap-45f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1d5d9p-28f, 0x1.b1bdb2p-32f, 0.0f,
     0.0f, 0x1.456a98p-66f, 0.0f, 0x1.25e69p-13f, 0x1.1264c6p-101f, 0.0f,
     0x1.a0c6e4p-74f, 0.0f, 0.0f, 0.0f, 0x1.3959a4p-72f, 0x1.f67fe6p-66f,
     0x1.4f6aeap-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0ebab2p-75f, 0x1.60ea68p-34f, 0.0f,
     0x1.fc87a6p-48f, 0x1.6ec702p-55f, 0.0f, 0.0f, 0x1.f8147ap-35f, 0.0f,
     0x1.f3068p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c96bdcp-6f, 0.0f, 0.0f,
     0x1.949b9ep-30f, 0.0f, 0.0f, 0x1.8017c4p-66f, 0.0f, 0x1.a3e638p-99f,
     0x1.0722eap-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.12eb54p-123f,
     0.0f, 0.0f, 0x1.2f9fecp-1f, 0x1.e61e5p-82f, 0.0f, 0x1.6c8b4ep-46f,
     0x1.7b2c98p-32f, 0x1.c9f926p-111f, 0.0f, 0.0f, 0.0f, 0x1.f80f1ap-37f, 0.0f,
     0x1.8ed5eap-100f, 0.0f, 0x1.3f2338p-89f, 0.0f, 0x1.30f57ep-22f, 0.0f, 0.0f, 0.0f,
     0x1.4c069p-89f, 0.0f, 0x1.18e6e2p-105f, 0x1.3e3ac6p-4f, 0x1.f99078p-63f, 0.0f,
     0x1.2f5488p-98f, 0x1.3e57f2p-53f, 0x1.0bc13ap-3f, 0x1.cd822cp-16f,
     0x1.09a432p-108f, 0x1.1460fap-24f, 0x1.b1978cp-99f, 0x1.51afa2p-22f,
     0x1.dac5bcp-67f, 0x1.1c347p-16f, 0.0f, 0x1.93f1f6p-36f, 0.0f, 0.0f, 0.0f,
     0x1.0f33b4p-7f, 0x1.544144p-80f, 0x1.0847acp-71f, 0.0f, 0x1.d9a79p-80f,
     0x1.d415bap-40f, 0x1.fea666p-96f, 0x1.44a5f6p-32f, 0x1.4bd08cp-93f, 0.0f,
     0x1.53ad26p-12f, 0.0f, 0x1.179252p-66f, 0.0f, 0.0f, 0.0f, 0x1.8cbb9ap-78f, 0.0f,
     0x1.c4d6eap-117f, 0.0f, 0x1.0dd6eap-110f, 0.0f, 0x1.680892p-86f, 0.0f,
     0x1.b84764p-42f, 0x1.fcfbcap-109f, 0x1.0a23dp-123f, 0x1.d13dd2p-79f,
     0x1.7b19ap-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6fd208p-20f, 0x1.f45808p-105f, 0.0f,
     0x1.564062p-112f, 0.0f, 0x1.022488p-106f, 0.0f, 0x1.611da4p-4f, 0.0f, 0.0f,
     0x1.f1fc94p-22f, 0.0f, 0x1.215774p-92f, 0.0f, 0.0f, 0.0f, 0x1.5f1d5ap-98f, 0.0f,
     0.0f, 0.0f, 0x1.d2942ep-3f, 0x1.32bbd2p-91f, 0x1.de23acp-113f, 0.0f, 0.0f, 0.0f,
     0x1.d891b2p-67f, 0x1.7cf0f6p-76f, 0x1.6abfbp-65f, 0.0f, 0x1.9f6028p-20f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.1759dp-66f, 0.0f, 0x1.08dc8cp-120f, 0x1.e36476p-28f,
     0x1.9c9724p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4bf9d2p-87f,
     0x1.6d4616p-82f, 0.0f, 0.0f, 0x1.d5726ap-22f, 0.0f, 0x1.0207cap-12f, 0.0f,
     0x1.daaaa8p-5f, 0.0f, 0.0f, 0x1.419252p-26f, 0.0f, 0x1.8bce0ap-33f,
     0x1.4c778ep-83f, 0x1.31670cp-5f, 0x1.d625c2p-46f, 0x1.0d80f4p-15f,
     0x1.b9b74p-73f, 0.0f, 0x1.620cf2p-13f, 0x1.ebadfp-105f, 0x1.af0b86p-59f, 0.0f,
     0x1.fb9c7ap-108f, 0.0f, 0x1.9fccfp-38f, 0.0f, 0x1.d956acp-60f, 0x1.8846e6p-6f,
     0x1.db9dc8p-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d23172p-37f, 0x1.8ebfbp-8f, 0x1.6b5682p-63f, 0x1.2a532cp-108f,
     0x1.b4ce06p-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e9b3f8p-4f, 0.0f,
     0x1.20d7e2p-70f, 0x1.dab2dap-98f, 0.0f, 0.0f, 0x1.3b790cp-63f, 0x1.10fda2p-99f,
     0x1.ec8d78p-110f, 0.0f, 0x1.efbaacp-126f, 0x1.7cd876p-65f, 0.0f, 0.0f, 0.0f,
     0x1.e1d2d2p-95f, 0.0f, 0.0f, 0x1.3cf972p-21f, 0x1.444cap-109f, 0x1.5e2ap-82f,
     0x1.bf8aa2p-4f, 0.0f, 0x1.75198ep-111f, 0.0f, 0.0f, 0x1.67b9c6p-21f,
     0x1.d7387ep-19f, 0x1.41421p-68f, 0x1.427bcep-58f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.311e1p-32f, 0.0f, 0x1.d15ab4p-93f, 0x1.7ea86ep-32f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.4946f4p-35f, 0.0f, 0x1.7d6c2ap-31f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.62fde8p-21f, 0.0f, 0.0f, 0x1.5f71dap-22f, 0x1.1062f4p-93f, 0.0f, 0.0f,
     0x1.3b22f6p-82f, 0.0f, 0x1.30c61cp-122f, 0x1.2d269cp-54f, 0.0f, 0x1.dfb32p-71f,
     0.0f, 0.0f, 0x1.b48bdap-121f, 0.0f, 0x1.bad338p-54f, 0x1.8f5a18p-12f,
     0x1.7dd28p-17f, 0x1.940596p-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.dcc086p-34f, 0x1.17ef56p-80f, 0x1.f37058p-32f, 0x1.4767ecp-11f,
     0x1.0ed788p-52f, 0x1.89e7eep-32f, 0.0f, 0x1.b3aa16p-80f, 0x1.821366p-61f, 0.0f,
     0x1.5a00d2p-26f, 0.0f, 0x1.04f776p-78f, 0x1.75a18p-116f, 0x1.1a89e8p-77f, 0.0f,
     0x1.e6b85ep-59f, 0.0f, 0x1.06d3acp-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.df5f3p-15f,
     0.0f, 0x1.0d0d9ap-26f, 0.0f, 0.0f, 0x1.311deap-102f, 0x1.c4b3d4p-84f, 0.0f,
     0x1.963d6ep-7f, 0x1.f48516p-79f, 0x1.fdfc98p-61f, 0x1.b4b6fcp-46f, 0.0f, 0.0f,
     0x1.6bb614p-93f, 0.0f, 0.0f, 0x1.3547d8p-38f, 0.0f, 0x1.f47dc2p-25f,
     0x1.247a76p-105f, 0x1.4bff6p-119f, 0.0f, 0.0f, 0x1.3ced08p-78f, 0x1.1cb12p-11f,
     0x1.1857cp-122f, 0x1.ea9fdp-14f, 0x1.cd6078p-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.34e674p-82f, 0x1.8e7fc8p-14f, 0.0f, 0x1.74d502p-57f, 0.0f, 0.0f,
     0x1.ab59b6p-48f, 0x1.e73768p-76f, 0x1.1e2c26p-84f, 0x1.43f406p-9f, 0.0f,
     0x1.f03cf4p-34f, 0.0f, 0.0f, 0.0f, 0x1.230192p-57f, 0x1.33ac0cp-71f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5e777ep-31f, 0.0f, 0x1.1bb336p-45f, 0.0f,
     0x1.35a118p-10f, 0.0f, 0x1.85eb76p-112f, 0.0f, 0x1.ec31e6p-55f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.6be728p-37f, 0x1.c71d1ep-101f, 0x1.007958p-107f,
     0x1.000d48p-119f, 0.0f, 0.0f, 0x1.8ab9bap-4f, 0x1.1492b2p-17f, 0.0f, 0.0f, 0.0f,
     0x1.6bb2c8p-80f, 0x1.79da8ap-42f, 0.0f, 0x1.747568p-26f, 0x1.de1566p-67f,
     0x1.055d8p-69f, 0x1.e01eeep-72f, 0.0f, 0x1.0b1cdp-83f, 0.0f, 0.0f,
     0x1.12c7dcp-108f, 0.0f, 0x1.f1306ap-76f, 0.0f, 0x1.5cbb18p-11f, 0x1.f7f34cp-4f,
     0x1.b302c4p-118f, 0x1.6268aap-25f, 0x1.67b3e2p-83f, 0x1.4406b6p-7f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e33a68p-58f, 0.0f, 0.0f, 0.0f, 0x1.a6b5e4p-56f,
     0x1.01dccap-50f, 0x1.99d822p-83f, 0.0f, 0x1.e6f85ep-117f, 0x1.911dfap-91f, 0.0f,
     0x1.c2296ep-105f, 0.0f, 0x1.07c382p-88f, 0.0f, 0.0f, 0.0f, 0x1.6b5572p-100f,
     0x1.77ee2p-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cc64a4p-3f,
     0x1.83617ep-115f, 0.0f, 0.0f, 0x1.2770c2p-116f, 0x1.b1296p-121f, 0.0f, 0.0f,
     0x1.d31532p-103f, 0x1.8a6c9ep-46f, 0.0f, 0x1.6fb9c2p-121f, 0.0f,
     0x1.8413ecp-108f, 0x1.cbd788p-62f, 0x1.cadbcep-81f, 0x1.394954p-24f,
     0x1.e04bp-11f, 0.0f, 0x1.733528p-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0201eap-40f, 0.0f, 0.0f, 0x1.0f967ep-108f, 0x1.a83fd4p-118f, 0x1.6f18f8p-76f,
     0.0f, 0x1.deeadp-97f, 0.0f, 0x1.36cdcp-95f, 0.0f, 0x1.55f6fp-82f,
     0x1.c1ff06p-70f, 0.0f, 0.0f, 0.0f, 0x1.d20f3p-72f, 0.0f, 0x1.c32548p-12f, 0.0f,
     0.0f, 0x1.a7fd9p-80f, 0.0f, 0x1.bb4a92p-69f, 0.0f, 0.0f, 0x1.0180bp-67f,
     0x1.50924ap-21f, 0x1.bbe982p-113f, 0.0f, 0.0f, 0x1.797d64p-122f, 0x1.9d89d4p-58f,
     0x1.e05466p-101f, 0.0f, 0.0f, 0.0f, 0x1.15a9f4p-1f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5f941ep-27f, 0x1.90fcaap-3f, 0x1.063cfp-50f, 0.0f, 0x1.5e4726p-53f,
     0x1.3ea148p-92f, 0x1.a874b2p-39f, 0.0f, 0x1.982c46p-98f, 0.0f, 0.0f, 0.0f,
     0x1.c76e8ap-75f, 0.0f, 0.0f, 0.0f, 0x1.7915a4p-26f, 0x1.07103p-61f,
     0x1.0e3744p-103f, 0.0f, 0x1.2f40f8p-6f, 0.0f, 0.0f, 0x1.61c7d8p-87f, 0.0f, 0.0f,
     0x1.34c54p-92f, 0x1.b3aceap-85f, 0.0f, 0x1.0482a8p-74f, 0x1.175956p-110f, 0.0f,
     0.0f, 0.0f, 0x1.25c41cp-91f, 0x1.ec7c82p-122f, 0x1.cd51e8p-3f, 0x1.663a88p-21f,
     0.0f, 0x1.9c0e1cp-66f, 0x1.ad2cb2p-2f, 0.0f, 0x1.e9cb24p-80f, 0x1.8f1b2p-105f,
     0x1.b57d34p-83f, 0x1.fb4a62p-110f, 0.0f, 0x1.809822p-101f, 0x1.f0d39ap-66f, 0.0f,
     0x1.429848p-37f, 0x1.d20b48p-27f, 0x1.6535bp-91f, 0.0f, 0x1.56155ep-4f,
     0x1.9341acp-105f, 0.0f, 0x1.c143d4p-14f, 0x1.bc6ecp-93f, 0.0f, 0.0f,
     0x1.84353ap-103f, 0x1.83382ap-82f, 0.0f, 0.0f, 0x1.14fce2p-103f, 0.0f,
     0x1.69a79ap-52f, 0x1.c22efp-25f, 0.0f, 0.0f, 0.0f, 0x1.e8d6fap-119f,
     0x1.402464p-81f, 0x1.15c2c8p-29f, 0x1.0ff8f6p-111f, 0.0f, 0x1.8c5924p-87f,
     0x1.fa2208p-111f, 0x1.b947fep-91f, 0x1.130f2cp-42f, 0.0f, 0x1.20474p-101f,
     0x1.9e4752p-21f, 0.0f, 0x1.e75042p-96f, 0.0f, 0.0f, 0x1.22fcb2p-104f, 0.0f,
     0x1.2ce688p-22f, 0.0f, 0x1.8ce4f4p-82f, 0.0f, 0.0f, 0x1.29dbcep-30f,
     0x1.2091c4p-96f, 0.0f, 0.0f, 0x1.88efecp-1f, 0.0f, 0x1.9fca62p-2f,
     0x1.9493ccp-4f, 0.0f, 0x1.1e0792p-122f, 0.0f, 0x1.0c580ap-125f, 0x1.b93f5ap-106f,
     0x1.5decf2p-98f, 0.0f, 0x1.f0e77cp-121f, 0x1.59a982p-10f, 0.0f, 0x1.51744cp-2f,
     0.0f, 0x1.81103ap-54f, 0x1.91fc7cp-76f, 0.0f, 0.0f, 0x1.02ec5cp-117f,
     0x1.2767e4p-23f, 0.0f, 0.0f, 0x1.f71542p-103f, 0x1.dbe2cap-108f, 0x1.cb7fcap-49f,
     0x1.e41b6ep-41f, 0x1.5adb8cp-38f, 0x1.10a52ap-4f, 0.0f, 0.0f, 0x1.b27726p-126f,
     0x1.1123dep-118f, 0.0f, 0x1.b8481ep-64f, 0.0f, 0.0f, 0.0f, 0x1.146f66p-66f, 0.0f,
     0x1.1bb834p-78f, 0x1.319a64p-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7a0714p-82f, 0x1.43d3p-109f, 0x1.71a4c4p-96f, 0x1.1e7114p-101f,
     0x1.0fd7bp-111f, 0x1.90b10ep-79f, 0x1.9e6254p-55f, 0x1.5b5e12p-80f, 0.0f, 0.0f,
     0x1.385756p-82f, 0.0f, 0.0f, 0x1.361e12p-96f, 0.0f, 0x1.20789p-73f,
     0x1.f0789p-37f, 0.0f, 0x1.21fa1ap-72f, 0.0f, 0x1.fe2626p-4f, 0x1.e06b46p-30f,
     0.0f, 0.0f, 0.0f, 0x1.6a7784p-38f, 0x1.74ed22p-116f, 0.0f, 0.0f, 0x1.1d866p-99f,
     0.0f, 0.0f, 0x1.2c2ef8p-53f, 0x1.48c07cp-77f, 0x1.6a2b2ap-48f, 0.0f,
     0x1.e1525p-115f, 0x1.6ed6e6p-98f, 0.0f, 0x1.ebc2fep-29f, 0.0f, 0.0f, 0.0f,
     0x1.a6e39cp-38f, 0x1.616e6cp-46f, 0x1.e2630ap-123f, 0x1.0fcddep-62f, 0.0f,
     0x1.e6181p-125f, 0.0f, 0x1.463f48p-60f, 0.0f, 0x1.eaae78p-121f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.adcf3p-92f, 0.0f, 0x1.89a15p-72f, 0.0f, 0x1.1330cep-126f, 0.0f, 0.0f,
     0.0f, 0x1.df1058p-12f, 0.0f, 0.0f, 0.0f, 0x1.644eb2p-71f, 0.0f, 0x1.21bcf4p-96f,
     0x1.c967fcp-4f, 0x1.84eeeep-110f, 0.0f, 0x1.2f0c1p-52f, 0x1.53d64cp-68f, 0.0f,
     0.0f, 0x1.a28416p-54f, 0x1.da9d2p-43f, 0x1.dc8feep-68f, 0.0f, 0x1.b002bep-116f,
     0.0f, 0x1.de8f0ep-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.55cc62p-43f, 0.0f, 0.0f,
     0x1.511514p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.56d3dap-31f, 0x1.52bcc4p-36f,
     0.0f, 0x1.2fd462p-90f, 0.0f, 0x1.f3f60ap-95f, 0.0f, 0.0f, 0x1.5239fcp-25f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.248294p-12f, 0.0f, 0.0f, 0x1.7a0988p-74f, 0x1.2b2658p-74f,
     0x1p0f, 0.0f, 0.0f, 0x1.426fd4p-102f, 0x1.a70e44p-110f, 0.0f, 0.0f,
     0x1.aced26p-95f, 0x1.a96b62p-90f, 0x1.7f8d4ep-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.81e314p-32f, 0x1.dd3ed4p-26f, 0x1.98bc28p-48f, 0.0f, 0.0f,
     0x1.73f082p-81f, 0x1.0419f8p-14f, 0.0f, 0x1.e00d84p-125f, 0x1.3f65aap-107f, 0.0f,
     0.0f, 0x1.d9b0d6p-93f, 0.0f, 0x1.5e1d6ap-101f, 0.0f, 0.0f, 0x1.f81cc6p-117f,
     0x1.43950ap-60f, 0x1.c07546p-121f, 0x1.ac04e2p-53f, 0x1.61403p-24f,
     0x1.9ed106p-40f, 0x1.3f5778p-48f, 0.0f, 0x1.3cda5ep-2f, 0x1.25bc18p-43f, 0.0f,
     0.0f, 0.0f, 0x1.c56a6p-59f, 0x1.7ef2d8p-57f, 0x1.80e13cp-125f, 0.0f,
     0x1.d059d4p-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e03f2ep-91f, 0.0f, 0.0f, 0.0f,
     0x1.7519aap-41f, 0.0f, 0x1.0fdp-29f, 0.0f, 0x1.c4fc42p-39f, 0x1.437e0ap-107f,
     0x1.2c847ep-46f, 0.0f, 0x1.13e63cp-114f, 0x1.7b23bp-41f, 0x1.81029cp-32f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.fcaa58p-1f, 0x1.6d6524p-11f, 0.0f, 0x1.c95598p-25f, 0.0f,
     0x1.567f6p-72f, 0.0f, 0x1.b257f4p-93f, 0.0f, 0.0f, 0x1.4a0cbp-97f,
     0x1.fa6808p-82f, 0.0f, 0x1.90e34p-110f, 0.0f, 0.0f, 0x1.06e3p-78f,
     0x1.0225ccp-81f, 0x1.e82bbap-126f, 0x1.6cda3p-40f, 0.0f, 0.0f, 0x1.369d7p-57f,
     0x1.c2f672p-77f, 0x1.df33dp-62f, 0x1.e3beaap-53f, 0.0f, 0.0f, 0x1.a63d5ep-110f,
     0.0f, 0.0f, 0.0f, 0x1.6395a8p-107f, 0.0f, 0.0f, 0x1.f8ba94p-14f, 0x1.f25c36p-52f,
     0x1.a0e696p-123f, 0.0f, 0.0f, 0x1.68769ap-33f, 0x1.52ac06p-105f,
     0x1.c829a2p-106f, 0.0f, 0x1.1fd09ap-118f, 0x1.ba51bcp-85f, 0x1.0b29ccp-23f,
     0x1.4c57e2p-43f, 0x1.cd58b8p-115f, 0.0f, 0x1.c259a2p-78f, 0x1.fd4484p-5f, 0.0f,
     0x1.2f3b3cp-43f, 0x1.48b9ccp-93f, 0.0f, 0x1.7fe55ap-1f, 0.0f, 0x1.fecde2p-113f,
     0x1.b2acb8p-16f, 0x1.85568ep-80f, 0x1.229c32p-74f, 0.0f, 0x1.183b36p-40f,
     0x1.63b08ep-48f, 0.0f, 0.0f, 0x1.be5ce2p-61f, 0x1.206302p-64f, 0.0f,
     0x1.f2dc48p-77f, 0.0f, 0x1.75baaap-98f, 0x1.ba8df2p-1f, 0.0f, 0.0f,
     0x1.97a23cp-15f, 0.0f, 0x1.e250aap-38f, 0.0f, 0.0f, 0x1.9cd7f4p-61f,
     0x1.42443ep-61f, 0x1.964cf6p-14f, 0x1.63fcbap-102f, 0.0f, 0.0f, 0.0f,
     0x1.f17528p-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5528a2p-99f,
     0x1.da6c64p-65f, 0x1.e593cep-33f, 0x1p0f, 0x1.e5d2aap-43f, 0x1.cd3996p-115f,
     0.0f, 0x1.815562p-1f, 0x1.7e62eep-79f
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
            tmp1 = Sleef_finz_sqrtf4_avx2128(tmp0);
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
    printf("Sleef_finz_sqrtf4_avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_sqrtf4_avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
