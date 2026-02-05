/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_atanf4_u35avx2128.c --function \
 *     Sleef_finz_atanf4_u35avx2128 --headers sleef.h,ml_support_lib.h \
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
     0x1.d4c07ep-73f, 0x1.e13a5ap-121f, 0x1.f88b0cp-103f, 0.0f, 0x1.e04974p-103f,
     0.0f, 0x1.81f41ep-90f, 0.0f, 0x1.43d09ap-33f, 0x1.e230d8p-63f, 0x1.c5625p-12f,
     0.0f, 0.0f, 0x1.09c112p-71f, 0x1.64205ep-98f, 0x1.b951dep-102f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.279dc4p-88f, 0.0f, 0.0f, 0x1.4093c8p-15f, 0.0f, 0.0f,
     0x1.ca3c0ap-20f, 0.0f, 0x1.301de6p-30f, 0.0f, 0.0f, 0x1.0b0f1p-119f,
     0x1.6ae368p-59f, 0.0f, 0x1.60fc26p-4f, 0.0f, 0.0f, 0x1.37bedep-44f, 0.0f,
     0x1.214da2p-1f, 0.0f, 0x1.aa59p-14f, 0x1.ec2b36p-46f, 0x1.fab614p-104f, 0.0f,
     0.0f, 0x1.e26ec6p-39f, 0x1.83e7f8p-56f, 0.0f, 0x1.358e78p-30f, 0x1.b1f442p-6f,
     0x1.31f9b6p-102f, 0.0f, 0.0f, 0x1.68722cp-125f, 0.0f, 0x1.d70632p-72f,
     0x1.700fc4p-110f, 0x1.9bc912p-78f, 0x1.f599bep-35f, 0x1.2408aep-38f,
     0x1.a55c0ap-105f, 0x1.79d8ep-105f, 0x1.e49866p-91f, 0.0f, 0.0f, 0x1.f9f3ep-43f,
     0x1.045c86p-3f, 0x1.e23a02p-51f, 0.0f, 0x1.490cap-54f, 0.0f, 0x1.59117ap-33f,
     0x1.2bc254p-74f, 0.0f, 0x1.e3b2acp-27f, 0.0f, 0x1.ae5294p-121f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c167acp-40f, 0.0f, 0.0f, 0x1.53a56ep-117f, 0.0f, 0x1.fb920ap-58f, 0.0f,
     0x1.440338p-118f, 0x1.d4ced4p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.dca402p-120f, 0.0f, 0x1.2e556cp-63f, 0.0f, 0x1.228462p-114f, 0x1.df2558p-18f,
     0.0f, 0.0f, 0x1.050c18p-28f, 0.0f, 0.0f, 0x1.31166ap-3f, 0x1.c9697cp-119f,
     0x1.7a583p-22f, 0x1.470b34p-36f, 0x1.145bfep-5f, 0x1.b5e45cp-85f,
     0x1.5970cep-17f, 0.0f, 0x1.1de29ep-101f, 0.0f, 0.0f, 0x1.8ef7c2p-63f,
     0x1.2155bep-96f, 0x1.ed9fe4p-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a0254ep-31f,
     0x1.07c7bep-28f, 0.0f, 0.0f, 0.0f, 0x1.0a4cbap-55f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b4e822p-83f, 0x1.792cc4p-108f, 0x1.41caecp-88f, 0x1.8a2bbcp-60f,
     0x1.f3e222p-102f, 0.0f, 0x1.985148p-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.00d31p-64f,
     0.0f, 0x1.bddee2p-44f, 0x1.1801a6p-121f, 0x1.8606b4p-28f, 0.0f, 0x1.805d7p-26f,
     0.0f, 0x1.7a72dep-125f, 0.0f, 0x1.9fa6e2p-21f, 0.0f, 0x1.2b8f9p-51f, 0.0f, 0.0f,
     0x1.14ee2cp-1f, 0x1.c2791cp-65f, 0.0f, 0.0f, 0x1.d40b76p-121f, 0.0f, 0.0f, 0.0f,
     0x1.3f4f08p-46f, 0x1.957104p-98f, 0.0f, 0.0f, 0x1.4f2ab4p-68f, 0x1.f66bd2p-15f,
     0.0f, 0.0f, 0x1.e18f84p-97f, 0.0f, 0x1.653b2ep-96f, 0x1.cdf006p-78f,
     0x1.dae5fp-7f, 0x1.fac64p-92f, 0.0f, 0x1.917b54p-70f, 0.0f, 0x1.5ec518p-118f,
     0.0f, 0x1.e1befcp-86f, 0x1.8f7d82p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.15479ep-35f,
     0.0f, 0.0f, 0x1.e6a86ep-94f, 0.0f, 0x1.ad4efp-17f, 0x1.c18302p-66f,
     0x1.9cc9bp-103f, 0.0f, 0.0f, 0x1.889be6p-60f, 0.0f, 0x1.daf2acp-9f, 0.0f,
     0x1.6ee0ep-114f, 0x1.1e99cep-32f, 0.0f, 0.0f, 0x1.bfe5p-99f, 0.0f,
     0x1.151ba2p-37f, 0.0f, 0.0f, 0.0f, 0x1.2e7436p-112f, 0x1.213c5p-38f,
     0x1.6a89dap-90f, 0.0f, 0x1.3e84f8p-78f, 0x1.3ded4p-50f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e74e0ap-120f, 0x1.d2a04ep-36f, 0x1.b304dap-118f, 0.0f, 0x1.8e0f8p-112f, 0.0f,
     0x1.272c22p-113f, 0x1.ccafa6p-94f, 0.0f, 0.0f, 0x1.957376p-29f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a2623p-58f, 0x1.2eb99ap-43f, 0x1.227718p-5f, 0x1.fdda6cp-20f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6c7c98p-33f, 0x1.c181a4p-99f, 0.0f,
     0x1.582c3cp-101f, 0x1.cd0dap-97f, 0x1.e8d498p-80f, 0x1.79cfdp-87f,
     0x1.026cf2p-5f, 0.0f, 0.0f, 0x1.ca449ap-23f, 0x1.d1102cp-54f, 0x1.f70cbcp-51f,
     0.0f, 0.0f, 0.0f, 0x1.a7da0ep-64f, 0.0f, 0.0f, 0x1.696a8cp-15f, 0.0f,
     0x1.22d706p-47f, 0x1.f94b7cp-73f, 0x1.01c9dep-16f, 0.0f, 0.0f, 0x1.01764ap-49f,
     0x1.da6bd8p-90f, 0x1.54bb78p-21f, 0x1.aa8efcp-34f, 0.0f, 0x1.5a3d2ap-23f,
     0x1.d89dap-79f, 0.0f, 0x1.e24ff4p-115f, 0.0f, 0.0f, 0.0f, 0x1.ecb04ep-122f,
     0x1.df15fcp-119f, 0x1.d07a8cp-51f, 0x1.37c80ap-113f, 0x1.2adecp-112f,
     0x1.6f32a6p-111f, 0x1.36898ap-53f, 0.0f, 0x1.0b8566p-76f, 0.0f, 0x1.a8fa38p-84f,
     0.0f, 0x1.c2c8bap-11f, 0.0f, 0x1.e5aa4cp-123f, 0x1.e9f81ep-113f, 0.0f, 0.0f,
     0x1.63c978p-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3ac554p-101f, 0x1.b9b382p-64f,
     0x1.17ef66p-65f, 0x1.affe2p-77f, 0x1.1f394ep-100f, 0x1.55330cp-57f,
     0x1.371c98p-30f, 0x1.eb6cf6p-91f, 0x1.e23792p-72f, 0.0f, 0.0f, 0.0f,
     0x1.04dc16p-4f, 0x1.f1956ap-99f, 0x1.0cc67ap-125f, 0x1.f5ebaep-81f, 0.0f,
     0x1.4a0a18p-120f, 0.0f, 0x1.67126cp-47f, 0.0f, 0.0f, 0.0f, 0x1.7de888p-122f,
     0x1.c4c58p-42f, 0.0f, 0.0f, 0x1.ec7d2ep-81f, 0.0f, 0.0f, 0x1.0d259cp-97f, 0.0f,
     0x1.6eb656p-120f, 0x1.570e9ap-49f, 0.0f, 0x1.78ce0ap-19f, 0.0f, 0x1.5cf9ep-71f,
     0x1.41a974p-126f, 0x1.ded47cp-24f, 0.0f, 0.0f, 0x1.ea6742p-78f, 0x1.e8ef28p-84f,
     0x1.34a46ap-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cd8ee8p-20f, 0.0f, 0.0f,
     0x1.34c77p-94f, 0x1.f624f4p-7f, 0x1.2cee3ep-121f, 0.0f, 0x1.420456p-44f, 0.0f,
     0x1.3dfbb8p-81f, 0x1.9819c6p-49f, 0.0f, 0.0f, 0x1.a1b4a2p-73f, 0.0f,
     0x1.7dade8p-62f, 0.0f, 0x1.a8b2f6p-68f, 0x1.f675b4p-3f, 0.0f, 0x1.bddda8p-50f,
     0.0f, 0.0f, 0x1.ae2d3ep-122f, 0.0f, 0.0f, 0x1.097e2ep-109f, 0x1.db6c12p-14f,
     0x1.10095ep-44f, 0.0f, 0x1.9cee8ep-34f, 0x1.7484cp-99f, 0x1.6f346ep-113f,
     0x1.212e3ap-112f, 0x1.5d5ae6p-73f, 0x1.37b81cp-102f, 0x1.186088p-74f,
     0x1.35b58ap-62f, 0x1.89264p-56f, 0.0f, 0.0f, 0.0f, 0x1.82c7a8p-89f,
     0x1.769764p-51f, 0x1.96da0ap-44f, 0.0f, 0x1.db7cdap-21f, 0x1.ffd9p-117f,
     0x1.acfce4p-80f, 0x1.24748p-44f, 0x1.d9c31ap-96f, 0.0f, 0x1.86021cp-62f, 0.0f,
     0.0f, 0x1.22ad22p-11f, 0x1.dc7caap-41f, 0x1.96835cp-50f, 0.0f, 0x1.1cdb5ap-97f,
     0x1.82707ap-73f, 0.0f, 0x1.4ececap-85f, 0x1.ae7a34p-120f, 0x1.17c4p-117f,
     0x1.d57956p-50f, 0x1.fa98fep-27f, 0x1.9e5346p-28f, 0x1.c6a54cp-113f,
     0x1.94a8f4p-95f, 0.0f, 0.0f, 0x1.e9dbe8p-2f, 0.0f, 0.0f, 0.0f, 0x1.a9766p-6f,
     0.0f, 0x1.446f7p-35f, 0.0f, 0.0f, 0.0f, 0x1.61cd04p-124f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c29e5ep-73f, 0x1.b0c32p-78f, 0x1.35d1bcp-112f, 0x1.3f658ap-29f,
     0x1.f5ec1cp-93f, 0x1.b2b3ep-8f, 0x1.a0285p-72f, 0x1.78d9a4p-121f,
     0x1.264384p-37f, 0.0f, 0x1.8d6994p-77f, 0x1.47fcc2p-63f, 0x1.dece74p-84f, 0.0f,
     0x1.52b968p-79f, 0x1.7696c2p-111f, 0.0f, 0x1.2f9902p-101f, 0.0f, 0x1.6169p-73f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.2178bp-18f, 0.0f, 0.0f, 0.0f, 0x1.0320ap-48f, 0.0f,
     0.0f, 0.0f, 0x1.5064p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9c2b7ap-126f, 0.0f,
     0.0f, 0x1.432deap-83f, 0x1.1dc1b2p-60f, 0.0f, 0.0f, 0x1.72e88cp-47f, 0.0f, 0.0f,
     0x1.4d7e1cp-82f, 0x1.9e75bp-28f, 0.0f, 0.0f, 0x1.6e3b2p-37f, 0x1.16d618p-81f,
     0.0f, 0x1.d44a56p-123f, 0.0f, 0x1.c406d4p-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.1c396p-27f, 0.0f, 0.0f, 0x1.88c2dap-52f, 0x1.bd6ccap-51f, 0.0f,
     0x1.4ae1b8p-114f, 0.0f, 0.0f, 0.0f, 0x1.05f928p-35f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c0119ap-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5c2d54p-9f, 0x1.fad364p-29f,
     0x1.153054p-90f, 0x1.5fdc66p-71f, 0.0f, 0x1.3fce1cp-45f, 0x1.98b52ap-42f, 0.0f,
     0.0f, 0x1.f1980ep-97f, 0x1.8fdac2p-11f, 0x1.20e812p-73f, 0.0f, 0.0f,
     0x1.5eed1cp-30f, 0.0f, 0.0f, 0x1.b0f64p-16f, 0x1.ec888ap-59f, 0.0f,
     0x1.fac96cp-62f, 0.0f, 0x1.1e2544p-75f, 0.0f, 0x1.bdd2dap-43f, 0x1.44b2cp-8f,
     0x1.b863a2p-69f, 0.0f, 0x1.32bb36p-109f, 0.0f, 0.0f, 0.0f, 0x1.1b1f44p-57f, 0.0f,
     0x1.5fe424p-77f, 0x1.534afp-122f, 0.0f, 0x1.b62d0ap-106f, 0.0f, 0x1.5ea11cp-47f,
     0.0f, 0x1.62bb02p-59f, 0x1.d3d50cp-35f, 0x1.89acb4p-81f, 0x1.516a64p-77f,
     0x1.881b72p-88f, 0.0f, 0x1.e77352p-21f, 0x1.28566ep-81f, 0x1.0e807cp-119f,
     0x1.c2214cp-65f, 0x1.aee3ap-74f, 0.0f, 0x1.8a626ep-125f, 0x1.6e62f2p-20f,
     0x1.3d0332p-4f, 0x1.0474dep-49f, 0.0f, 0x1.5e2236p-70f, 0.0f, 0x1.f535c2p-16f,
     0.0f, 0x1.843b9cp-85f, 0.0f, 0.0f, 0.0f, 0x1.2a873ap-50f, 0.0f, 0x1.5a2b78p-73f,
     0.0f, 0x1.f8c926p-2f, 0.0f, 0x1.285ddap-91f, 0x1.4a5ba8p-59f, 0.0f,
     0x1.e91d66p-115f, 0x1.e56aa6p-102f, 0x1.c136d2p-92f, 0x1.4da348p-78f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.010faap-124f, 0x1.7a3b0cp-74f,
     0x1.3c5294p-27f, 0x1.53ef9p-28f, 0x1.51326ap-85f, 0.0f, 0.0f, 0x1.88b518p-98f,
     0x1.025edap-20f, 0.0f, 0.0f, 0.0f, 0x1.111878p-93f, 0x1.e14e56p-95f, 0.0f,
     0x1.0c92ep-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.aee6a6p-117f, 0.0f, 0.0f,
     0x1.d31d86p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5ef15ep-11f, 0x1.e2e1f8p-76f, 0.0f,
     0x1.532752p-35f, 0x1.f13336p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e95fa8p-6f, 0x1.3b3582p-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.afbb6ap-68f, 0.0f, 0x1.7d7792p-126f, 0.0f, 0.0f, 0x1.bad556p-65f,
     0x1.4007a4p-84f, 0.0f, 0x1.22370ep-45f, 0x1.cb9ec4p-10f, 0x1.2518b4p-113f, 0.0f,
     0x1.1a8f84p-54f, 0x1.9af644p-90f, 0.0f, 0x1.c14292p-61f, 0x1.0eccc8p-52f, 0.0f,
     0x1.b72e42p-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.222c8cp-89f, 0.0f, 0.0f,
     0x1.da6b7ep-76f, 0x1.994f2ap-92f, 0x1.cfa29ap-84f, 0x1.c5abcap-12f, 0.0f, 0.0f,
     0.0f, 0x1.678d14p-77f, 0x1.b5226p-40f, 0.0f, 0x1.5929c2p-11f, 0x1.5ba89ep-23f,
     0x1.be3f3ap-24f, 0.0f, 0x1.73c6d6p-109f, 0x1p0f, 0.0f, 0.0f, 0x1.71198ep-94f,
     0x1.fcb79cp-97f, 0x1.f8aa8ap-45f, 0x1.05d3e4p-10f, 0x1.309d7cp-111f,
     0x1.22babp-57f, 0x1.52f78p-2f, 0x1.b2829cp-42f, 0x1.ac5ec6p-47f, 0.0f, 0.0f,
     0x1.d124f6p-18f, 0.0f, 0x1.dfa9c2p-49f, 0x1.94f114p-115f, 0.0f, 0.0f, 0.0f,
     0x1.a4caf6p-1f, 0x1.9204ccp-83f, 0.0f, 0x1.d5b00cp-23f, 0x1.f43e34p-79f,
     0x1.9e5dp-86f, 0x1.08f476p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.131d3p-86f,
     0x1.de20aep-9f, 0.0f, 0x1.ad491ep-62f, 0x1.7ce61ap-62f, 0x1.1ccb24p-122f, 0.0f,
     0.0f, 0x1.a97528p-15f, 0x1.7b03fp-59f, 0.0f, 0x1.31abd8p-26f, 0x1.a252f8p-124f,
     0.0f, 0.0f, 0x1.f62276p-107f, 0.0f, 0.0f, 0x1.97780cp-23f, 0.0f, 0.0f, 0.0f,
     0x1.8c4b4p-3f, 0.0f, 0x1.393daep-12f, 0.0f, 0x1.b41e44p-113f, 0.0f,
     0x1.440478p-27f, 0x1.29602ap-60f, 0.0f, 0x1.f4ce16p-98f, 0x1.ecd10cp-89f,
     0x1.40c46cp-58f, 0x1.0c51dcp-87f, 0x1.18e21p-81f, 0x1.9fc95p-61f, 0x1.91699p-39f,
     0.0f, 0x1.03f884p-98f, 0x1.0f8b2p-82f, 0x1.830fecp-46f, 0x1.7b72fp-41f, 0.0f,
     0x1.bbcadcp-105f, 0.0f, 0x1.148464p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d72b8ep-13f,
     0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.37bbd8p-1f, 0x1.6752a4p-15f, 0.0f, 0x1.070354p-61f,
     0x1.bbb9dep-3f, 0x1.7f6f94p-10f, 0x1.13ba92p-85f, 0x1.aaf37ap-63f,
     0x1.961ddap-31f, 0.0f, 0.0f, 0x1.f7146cp-16f, 0.0f, 0.0f, 0.0f, 0x1.66b8fep-125f,
     0x1.4bb3dcp-66f, 0.0f, 0.0f, 0x1.20b082p-53f, 0.0f, 0.0f, 0x1.9d7a1ep-38f,
     0x1.c37ef8p-113f, 0x1.8983f6p-36f, 0x1.55929p-39f, 0.0f, 0x1.617628p-63f, 0.0f,
     0.0f, 0.0f, 0x1.2f9602p-77f, 0x1.9f56aap-9f, 0.0f, 0.0f, 0x1.b2984cp-98f, 0x1p0f,
     0x1.f983a2p-5f, 0x1.9fad3p-18f, 0.0f, 0.0f, 0x1.22444ap-84f, 0x1.8201c8p-57f,
     0x1.1b6804p-7f, 0.0f, 0.0f, 0x1.41c038p-23f, 0x1.49f4bep-12f, 0x1.abd4ccp-39f,
     0x1.612096p-76f, 0x1.1e1e1ep-124f, 0.0f, 0x1.1ecf76p-49f, 0x1.a44e76p-2f,
     0x1.35bae6p-14f, 0x1.a993f6p-5f, 0.0f, 0x1.897efcp-2f, 0x1.f94384p-115f, 0.0f,
     0x1.9fceccp-121f, 0.0f, 0.0f, 0x1.cdb7e8p-78f, 0.0f, 0.0f, 0x1.53de12p-54f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.12f722p-109f, 0x1.4e4d96p-63f, 0.0f, 0x1.72fb8ep-115f,
     0x1.64d7ep-53f, 0x1.f2d438p-125f, 0.0f, 0x1.85934ep-23f, 0.0f, 0.0f,
     0x1.6bc5acp-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.723be6p-83f,
     0x1.8db244p-42f, 0x1p0f, 0.0f, 0.0f, 0x1.f7271ap-123f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.48c6p-125f, 0.0f, 0x1.7f5bbp-116f, 0.0f, 0.0f, 0x1.c66b2p-56f, 0.0f, 0.0f,
     0x1.b1449ep-22f, 0.0f, 0.0f, 0x1.0f80cp-9f, 0.0f, 0.0f, 0x1.b2f27ap-37f,
     0x1.60ee4ap-31f, 0.0f, 0.0f, 0x1.8ce784p-88f, 0x1.044074p-112f, 0.0f, 0.0f, 0.0f,
     0x1.52690ap-8f, 0x1.5c495ep-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3c2218p-81f,
     0.0f, 0.0f, 0x1.dd79e6p-29f, 0x1.b18092p-9f, 0.0f, 0.0f, 0.0f, 0x1.30060ep-120f,
     0x1.8343c8p-115f, 0.0f, 0x1.ef1fdcp-43f, 0x1.3a501cp-7f, 0x1.436842p-86f,
     0x1.07a7a6p-15f, 0.0f, 0x1.6bda2ep-10f, 0x1.87251p-28f, 0x1.aac2f4p-42f,
     0x1.3d9788p-102f, 0x1.5471bep-36f, 0.0f, 0.0f, 0x1.41d3d6p-113f, 0x1.eb3e38p-23f,
     0x1.8907ap-78f, 0x1.b4c286p-91f, 0.0f, 0x1.9e079ep-29f, 0x1.d3571ep-12f, 0.0f,
     0x1.d01202p-64f, 0x1.53c196p-110f, 0.0f, 0.0f, 0x1.c5bd26p-80f, 0.0f,
     0x1.e5ded4p-4f, 0.0f, 0x1.738c14p-69f, 0x1.e42fbcp-125f, 0x1.aba8b2p-91f,
     0x1.ab390ep-121f, 0x1.9660a8p-93f, 0x1.3d9f22p-48f, 0.0f, 0.0f, 0x1.e1aa6ap-6f,
     0.0f, 0x1.a420b4p-116f, 0.0f, 0x1.cf4dc8p-55f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f2c356p-23f, 0.0f, 0x1.83d2d4p-88f, 0x1.1aa178p-39f, 0.0f, 0x1.e84f9cp-44f,
     0.0f, 0.0f, 0x1.98a6f4p-2f, 0x1.9529e8p-82f
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
            tmp1 = Sleef_finz_atanf4_u35avx2128(tmp0);
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
    printf("Sleef_finz_atanf4_u35avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_atanf4_u35avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
