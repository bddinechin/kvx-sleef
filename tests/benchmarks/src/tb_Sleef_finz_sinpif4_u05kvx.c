/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sinpif4_u05kvx.c --function \
 *     Sleef_finz_sinpif4_u05kvx --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0x1.f1c23ap-3f, 0x1.48d1cp-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1fa96ep-77f,
     0.0f, 0.0f, 0x1.6b51fep-112f, 0x1.73cd18p-107f, 0x1.63ba4cp-37f, 0x1.b6342cp-10f,
     0.0f, 0x1.baceeap-115f, 0x1.34ca0ep-71f, 0.0f, 0x1.8d7588p-100f, 0x1.7b094ap-42f,
     0x1.2cca26p-17f, 0.0f, 0x1.520d94p-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c5e02p-23f,
     0x1.8728a6p-3f, 0.0f, 0x1.cdd7b2p-53f, 0.0f, 0x1.25a17cp-64f, 0.0f,
     0x1.d1bb94p-100f, 0x1.371556p-101f, 0.0f, 0x1.e1cb04p-1f, 0.0f, 0.0f, 0.0f,
     0x1.dd4e2ap-42f, 0.0f, 0x1.8c3a9cp-67f, 0x1.725bb2p-101f, 0x1.6fb7c2p-43f,
     0x1.aeed42p-67f, 0.0f, 0x1.3f1eaap-126f, 0.0f, 0x1.443bf6p-28f, 0x1.519a08p-108f,
     0x1.cda65p-17f, 0.0f, 0x1.bf55e6p-76f, 0.0f, 0x1.9e3c54p-63f, 0.0f,
     0x1.048916p-125f, 0.0f, 0x1.fdea24p-126f, 0.0f, 0.0f, 0x1.8fde6ap-9f,
     0x1.f75b1cp-59f, 0.0f, 0x1.e5434ep-109f, 0x1.51f152p-29f, 0x1.8408a8p-67f,
     0x1.331c3p-42f, 0x1.0bafa2p-83f, 0.0f, 0.0f, 0.0f, 0x1.d1dbap-17f, 0.0f,
     0x1.fdbb58p-52f, 0x1.08f926p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.94cd58p-91f,
     0x1.c09e9cp-109f, 0x1.24f1e2p-48f, 0.0f, 0x1.2c99c4p-83f, 0x1.5df0bap-38f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.83834ep-9f, 0x1.a41116p-10f, 0.0f,
     0x1.8bba84p-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e1ce2cp-35f, 0.0f, 0.0f, 0.0f,
     0x1.43511p-120f, 0x1.0f8238p-82f, 0x1.816a48p-85f, 0x1.45152p-110f,
     0x1.7af372p-120f, 0x1.fc0bb2p-46f, 0x1.ae18c2p-93f, 0.0f, 0.0f, 0x1p0f,
     0x1.fd18b8p-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.af66aep-34f, 0.0f,
     0x1.ae971p-79f, 0x1.97624cp-24f, 0x1.16f03p-20f, 0.0f, 0x1.ed19d8p-35f,
     0x1.0a087ep-17f, 0x1.322c32p-3f, 0x1.30203ap-26f, 0x1.00a6d2p-103f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.fbca44p-117f, 0.0f, 0x1.43103ep-101f, 0x1.092dbap-74f,
     0x1.e7554ep-78f, 0x1.d913f6p-66f, 0x1.7e3f6p-117f, 0x1.36b802p-46f, 0.0f, 0.0f,
     0x1.7b611ep-11f, 0x1.933368p-7f, 0x1.f0bccap-117f, 0.0f, 0x1.7ffedep-120f,
     0x1p0f, 0.0f, 0x1.6b66c4p-61f, 0x1.6bca2p-22f, 0x1.c401ecp-41f, 0x1.761de2p-15f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c16ee2p-83f, 0.0f, 0.0f, 0x1.997126p-97f,
     0x1.f9811ep-66f, 0.0f, 0.0f, 0.0f, 0x1.98e7dap-4f, 0.0f, 0.0f, 0.0f,
     0x1.0c1b0ap-38f, 0.0f, 0.0f, 0x1.3030dcp-40f, 0x1.4fae14p-84f, 0x1.eb6382p-46f,
     0x1.dc3bbap-8f, 0x1.f66682p-62f, 0x1.647dcep-110f, 0x1.8d29a8p-97f,
     0x1.a74fd6p-75f, 0x1.0ddeaap-2f, 0.0f, 0x1.fcc5b8p-34f, 0x1.93d63cp-88f, 0.0f,
     0x1.0df726p-123f, 0x1.32f3eap-55f, 0x1.29d5f8p-61f, 0.0f, 0x1.0bc214p-36f,
     0x1.846d66p-57f, 0x1.60d616p-27f, 0.0f, 0x1.f74dcep-116f, 0.0f, 0.0f,
     0x1.46928ap-18f, 0x1.40b0d8p-11f, 0.0f, 0.0f, 0x1.2fd446p-20f, 0.0f, 0.0f,
     0x1.f6662ap-125f, 0.0f, 0.0f, 0x1.a624f4p-108f, 0.0f, 0.0f, 0.0f,
     0x1.5bc656p-90f, 0x1.48654ap-38f, 0x1.ca931cp-111f, 0x1.ff64e6p-13f, 0.0f,
     0x1.ffcbfep-51f, 0.0f, 0x1.a8857ap-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.0e7d6cp-18f, 0x1.01c63p-22f, 0x1.bf7986p-48f, 0x1.ab69ap-20f, 0.0f,
     0x1.e78584p-92f, 0.0f, 0x1.ede1b8p-126f, 0.0f, 0.0f, 0x1.a606b6p-17f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.58a17ep-66f, 0.0f, 0.0f, 0.0f, 0x1.5e77b8p-125f, 0.0f,
     0x1.031986p-113f, 0x1.22f074p-78f, 0.0f, 0x1.2d7248p-71f, 0.0f, 0.0f,
     0x1.06cedp-49f, 0x1.2a65c6p-56f, 0x1.d3189ep-91f, 0.0f, 0.0f, 0x1.c29a8ep-122f,
     0x1.2c82ep-4f, 0.0f, 0x1.f0afb4p-84f, 0.0f, 0x1.8437e4p-64f, 0.0f, 0.0f, 0.0f,
     0x1.451d76p-103f, 0x1.7c6b56p-90f, 0x1.5bef1ep-27f, 0x1.06b878p-79f,
     0x1.73cb92p-111f, 0x1.8381e4p-39f, 0x1.b99c5ap-109f, 0x1.432ec4p-55f,
     0x1.9e985cp-87f, 0x1.6be5c4p-6f, 0x1.fcdf68p-37f, 0x1.fba348p-11f,
     0x1.55935ap-15f, 0x1.e656b6p-56f, 0x1.1b1d6ep-2f, 0x1.10776cp-125f, 0.0f,
     0x1.c25372p-42f, 0x1.f44e9cp-104f, 0.0f, 0x1.4fe4eep-51f, 0.0f, 0x1.500722p-29f,
     0x1.34b9c6p-75f, 0.0f, 0x1.d49784p-11f, 0.0f, 0.0f, 0x1.5fc0b8p-35f, 0.0f,
     0x1.0d40e8p-114f, 0x1.66632p-110f, 0x1.d91fb6p-13f, 0.0f, 0x1.c5c806p-79f,
     0x1.a1836p-20f, 0.0f, 0x1.d2152ep-24f, 0x1.da4ccep-64f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9fa3e2p-33f, 0x1.91521ep-113f, 0x1.6af556p-28f, 0x1.9a90cep-40f, 0.0f, 0.0f,
     0.0f, 0x1.6a6608p-111f, 0x1.7a8ab6p-122f, 0x1.78208cp-42f, 0.0f, 0.0f,
     0x1.bdd7e6p-7f, 0x1.8fe758p-9f, 0x1.8ef5fcp-111f, 0.0f, 0x1.619896p-6f,
     0x1.231a6ap-82f, 0x1.9597dp-71f, 0x1.a76792p-52f, 0.0f, 0x1.e786b6p-35f, 0.0f,
     0x1.18d73cp-117f, 0x1.94b66ap-11f, 0x1.ed71a4p-46f, 0x1.c3a3fcp-31f,
     0x1.50c98cp-91f, 0x1.e45d18p-72f, 0x1.8eb55p-112f, 0.0f, 0x1.aa6216p-60f,
     0x1.e25bdp-107f, 0.0f, 0x1.1c4a7ep-23f, 0x1.249338p-65f, 0.0f, 0x1.538eacp-1f,
     0x1.09f6f8p-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9d6948p-61f, 0.0f, 0x1.a25978p-102f,
     0.0f, 0x1.a7042p-105f, 0x1.24cbfp-11f, 0x1.e0417cp-45f, 0x1.b11c78p-12f, 0.0f,
     0.0f, 0.0f, 0x1.54ab02p-108f, 0x1.9bec7ep-92f, 0.0f, 0x1.86d916p-121f,
     0x1.349776p-48f, 0.0f, 0x1.067278p-18f, 0x1.2c1816p-121f, 0.0f, 0.0f, 0.0f,
     0x1.b88886p-26f, 0x1.b38912p-111f, 0x1.d33922p-61f, 0x1.9e6228p-86f, 0.0f,
     0x1.730778p-56f, 0.0f, 0x1.80db86p-119f, 0.0f, 0.0f, 0.0f, 0x1.891394p-37f,
     0x1.85fca4p-119f, 0.0f, 0x1.c70d4ep-18f, 0x1.aa163cp-56f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4580bp-113f, 0.0f, 0.0f, 0.0f, 0x1.594f0ap-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.10f1a2p-54f, 0.0f, 0.0f, 0x1.4e0ap-53f, 0.0f, 0x1.7cb292p-79f,
     0x1.099032p-32f, 0.0f, 0.0f, 0x1.77375ep-105f, 0x1.f6acacp-108f, 0x1.f9395p-54f,
     0.0f, 0x1.667adp-125f, 0.0f, 0x1.eb71c8p-37f, 0x1.856c68p-5f, 0.0f, 0.0f,
     0x1.b9a2a4p-99f, 0x1.3a687ep-3f, 0.0f, 0x1.387986p-82f, 0.0f, 0.0f, 0.0f,
     0x1.c63064p-30f, 0.0f, 0x1.6e93eap-69f, 0x1.92b56ep-118f, 0x1.39812ap-9f, 0.0f,
     0x1.ed4e0ap-101f, 0x1.ed5a62p-15f, 0.0f, 0x1.cf362ep-8f, 0.0f, 0.0f,
     0x1.c9f3cep-102f, 0.0f, 0.0f, 0.0f, 0x1.a1398cp-95f, 0x1.9b83a2p-55f, 0.0f, 0.0f,
     0x1.44f1bp-6f, 0x1.689bfp-120f, 0x1.87b632p-124f, 0x1.d573ecp-63f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.5f85dp-74f, 0.0f, 0x1.3eeb92p-98f, 0.0f, 0x1.b983c8p-71f, 0.0f,
     0.0f, 0.0f, 0x1.07f53ep-47f, 0x1.f8922ep-117f, 0x1.608bfep-53f, 0.0f,
     0x1.f4f804p-86f, 0.0f, 0x1.4d5cfep-29f, 0.0f, 0.0f, 0x1.d5cd3p-109f, 0.0f, 0.0f,
     0x1.ecfbd8p-88f, 0.0f, 0.0f, 0.0f, 0x1.0157cep-51f, 0.0f, 0.0f, 0x1.c81342p-19f,
     0x1.c77404p-73f, 0.0f, 0x1.cec73cp-68f, 0x1.d6b572p-68f, 0x1.4c79f6p-10f, 0.0f,
     0.0f, 0x1.dabac8p-97f, 0.0f, 0x1.326596p-31f, 0.0f, 0x1.61854ap-52f, 0.0f, 0.0f,
     0x1.07aef6p-37f, 0x1.f6e2b2p-78f, 0x1.d1089p-103f, 0.0f, 0x1.443d02p-12f,
     0x1.2b4e26p-69f, 0x1.4931a2p-10f, 0.0f, 0x1.2e03fcp-89f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f0f176p-72f, 0x1.ff5336p-2f, 0x1.2c0c4p-6f, 0.0f,
     0x1.c69da2p-33f, 0.0f, 0x1.692bd6p-51f, 0x1.ab109p-79f, 0x1.827ca4p-11f, 0.0f,
     0.0f, 0x1.25fe38p-34f, 0x1.7cc50cp-31f, 0x1.83042ap-52f, 0x1.f6ddb2p-49f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b2293cp-59f, 0.0f, 0.0f, 0.0f,
     0x1.b228cep-120f, 0x1.a795a8p-70f, 0x1.1d191ep-14f, 0x1.a874fcp-1f,
     0x1.0e88f6p-33f, 0.0f, 0x1.0db3a8p-28f, 0x1.f2ca94p-120f, 0x1.db763ep-95f, 0.0f,
     0x1.17ad22p-20f, 0x1.5a5c4cp-29f, 0.0f, 0x1.e3bb22p-19f, 0x1.0bafa2p-3f, 0.0f,
     0.0f, 0x1.8e8dd6p-53f, 0.0f, 0.0f, 0x1.4c580cp-1f, 0x1.3876c2p-121f, 0.0f,
     0x1.0df5d8p-48f, 0x1.6ef32cp-114f, 0.0f, 0x1.8421fp-10f, 0x1.19bef4p-76f, 0.0f,
     0x1.63ff24p-124f, 0x1.3a758ep-85f, 0x1.fa843ap-57f, 0x1.5ba45cp-49f, 0.0f, 0.0f,
     0x1.b13678p-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7481b2p-111f, 0x1.c49ea8p-41f,
     0.0f, 0.0f, 0x1.de4db8p-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.20f83ap-15f, 0.0f, 0.0f,
     0x1.31e6ecp-98f, 0x1.5726b2p-46f, 0.0f, 0x1.616c2ap-3f, 0x1p0f, 0x1.3d15fep-103f,
     0.0f, 0x1.5fffb6p-39f, 0x1.07c74cp-43f, 0.0f, 0x1.04c106p-14f, 0x1.a0ebdep-75f,
     0x1.4eb762p-6f, 0.0f, 0x1.64f99cp-61f, 0.0f, 0x1.ea6dc4p-120f, 0.0f,
     0x1.85ca4p-90f, 0.0f, 0.0f, 0x1.c5516ep-42f, 0x1.871812p-57f, 0.0f,
     0x1.2263c4p-106f, 0x1.e3d7bap-5f, 0x1.cc7ba8p-60f, 0x1.ed06ap-75f, 0.0f, 0.0f,
     0x1.07c4b2p-31f, 0.0f, 0x1.99d922p-37f, 0x1.21c90ep-120f, 0.0f, 0.0f,
     0x1.bd2a4p-85f, 0x1.cd65a6p-121f, 0.0f, 0x1.ac46dap-3f, 0.0f, 0x1.436096p-88f,
     0.0f, 0x1.6d4782p-102f, 0x1.582756p-118f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a1c67ap-126f, 0.0f, 0x1.ba6ecp-37f, 0x1.d2cd46p-103f, 0x1.07fp-58f,
     0x1.172aap-77f, 0x1.15fadap-45f, 0x1.060608p-93f, 0x1.6933d6p-126f,
     0x1.df2c18p-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eecee8p-12f,
     0x1.20b46ep-43f, 0x1.10a87cp-2f, 0.0f, 0.0f, 0x1.6fc098p-14f, 0x1.ab2708p-76f,
     0.0f, 0x1.2378c8p-29f, 0.0f, 0x1.56074ap-79f, 0x1.cc546ap-8f, 0x1.8ffe0ep-46f,
     0x1.961fecp-16f, 0.0f, 0.0f, 0x1.51afb4p-60f, 0x1.1d5c78p-109f, 0x1.7a81aep-100f,
     0x1.516e86p-116f, 0x1.22e51p-102f, 0x1.56b3b2p-86f, 0x1.6f28c4p-41f,
     0x1.d9840cp-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5e716p-104f, 0.0f,
     0x1.9e8c42p-98f, 0x1.b44b46p-53f, 0.0f, 0x1.e1fdacp-36f, 0.0f, 0x1.fab96cp-80f,
     0x1p0f, 0.0f, 0x1.5cf90cp-118f, 0x1.2b047cp-97f, 0.0f, 0x1.685084p-114f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f1bf02p-98f, 0x1.f1f9aap-74f, 0.0f, 0.0f, 0.0f,
     0x1.05ccap-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e9e06ep-93f, 0.0f, 0x1.be4f08p-27f,
     0x1.7aca28p-115f, 0x1.725dbp-5f, 0.0f, 0x1.e15da2p-30f, 0x1.2a131ap-28f,
     0x1.e4820cp-96f, 0x1.01f59ap-99f, 0.0f, 0.0f, 0x1.6e5aa4p-85f, 0x1.53f8b8p-55f,
     0x1.64fd4cp-42f, 0.0f, 0.0f, 0x1.005e6ap-123f, 0x1.ec06dcp-1f, 0.0f,
     0x1.5d4e08p-5f, 0.0f, 0x1.8d5a8cp-26f, 0.0f, 0.0f, 0x1.bb076ep-51f,
     0x1.29151p-5f, 0x1.e127a6p-109f, 0.0f, 0.0f, 0x1.18207ap-70f, 0x1.28f122p-94f,
     0x1.4b9ae4p-116f, 0x1.3f2648p-111f, 0x1.9db8a2p-72f, 0x1.68d32ap-102f, 0.0f,
     0.0f, 0x1.951caap-112f, 0x1.a9dde4p-12f, 0x1.e9e448p-59f, 0.0f, 0x1.6f8beap-38f,
     0.0f, 0.0f, 0x1.e9a7c8p-92f, 0x1.c95196p-4f, 0x1.5c06bp-80f, 0.0f, 0.0f,
     0x1.2f3a52p-74f, 0x1.e218e8p-81f, 0.0f, 0x1.5b9cbcp-113f, 0.0f, 0x1.6fe28ap-3f,
     0.0f, 0x1.0ad654p-54f, 0.0f, 0.0f, 0x1.9c38d8p-62f, 0x1.d900cap-1f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.54bf46p-9f, 0.0f, 0.0f, 0x1.2e6dccp-123f, 0x1.92b264p-108f, 0.0f,
     0x1.edf296p-27f, 0x1.f7a806p-20f, 0.0f, 0.0f, 0x1.9ea236p-64f, 0x1.2bda62p-55f,
     0.0f, 0x1.dd851ep-19f, 0x1.da8a46p-84f, 0.0f, 0x1.b0d3dcp-30f, 0.0f,
     0x1.2305ep-14f, 0.0f, 0.0f, 0x1.9232aep-29f, 0.0f, 0x1.2bd8eep-59f, 0.0f,
     0x1.df0014p-103f, 0.0f, 0x1.4110e2p-45f, 0x1.0172acp-62f, 0x1.24ff8cp-77f, 0.0f,
     0.0f, 0.0f, 0x1.d702d4p-125f, 0.0f, 0.0f, 0x1.f69d46p-89f, 0.0f, 0.0f,
     0x1.eaf05ep-89f, 0.0f, 0.0f, 0x1.64573p-125f, 0.0f, 0.0f, 0.0f, 0x1.d46d7cp-117f,
     0x1.87f248p-122f, 0.0f, 0.0f, 0.0f, 0x1.760a74p-51f, 0x1.324d36p-20f, 0.0f, 0.0f,
     0x1.3f2f54p-54f, 0x1.f66912p-12f, 0x1.443ae6p-115f, 0x1.a8ae76p-109f,
     0x1.150ef4p-125f, 0.0f, 0.0f, 0.0f, 0x1.f72f2ep-75f, 0.0f, 0.0f, 0x1.45511ep-62f,
     0.0f, 0.0f, 0x1.bb08ap-126f, 0x1.b515cap-70f, 0x1.831a58p-47f, 0x1.2ce172p-49f,
     0x1.4a696cp-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9e2a0ap-8f, 0.0f, 0.0f,
     0x1.48ea7ep-111f, 0x1.7c38f6p-122f, 0x1.fc2caap-94f, 0x1.c70224p-46f, 0.0f,
     0x1.7978eep-47f, 0.0f, 0x1.ecb35ep-110f, 0.0f, 0x1.5b7a14p-122f, 0.0f,
     0x1.695ab8p-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bb2f46p-16f, 0.0f, 0.0f,
     0.0f, 0x1.1a219ap-53f, 0x1.2d14c8p-83f, 0.0f, 0x1.574a12p-83f, 0.0f, 0.0f,
     0x1.b8055p-42f, 0x1.fbae56p-63f, 0.0f, 0.0f, 0.0f, 0x1.1d7d8p-121f,
     0x1.2e7e5cp-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.625ca6p-35f, 0x1.5870acp-36f, 0.0f,
     0.0f, 0.0f, 0x1.3f082ap-51f, 0.0f, 0.0f, 0x1.36ffbp-87f, 0x1.b31aa8p-22f,
     0x1.479da6p-38f, 0.0f, 0.0f, 0x1.087bdcp-97f, 0.0f, 0.0f, 0.0f, 0x1.da3ec2p-30f,
     0x1.f07072p-125f, 0.0f, 0x1.f798b4p-116f, 0.0f, 0.0f, 0x1.201cb4p-32f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.fdd06p-52f, 0x1.65e854p-118f, 0.0f, 0.0f, 0x1.900fd8p-58f,
     0.0f, 0x1.0de298p-13f, 0x1.663b12p-67f, 0.0f, 0.0f, 0x1.05bfacp-44f,
     0x1.6ec7d4p-48f, 0x1.5b84d4p-72f, 0.0f, 0x1.28dabp-88f, 0.0f, 0x1.6c1c3cp-69f,
     0x1.fab118p-66f, 0.0f, 0.0f, 0x1.08e28ep-20f, 0.0f, 0x1.142d6ap-114f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.844f44p-89f, 0.0f, 0x1.7bcac2p-70f, 0x1.4aba28p-114f, 0.0f, 0.0f,
     0.0f, 0x1.0f75e8p-86f, 0x1.df9884p-111f, 0x1.da867ep-56f, 0x1.699c38p-52f, 0.0f,
     0.0f, 0.0f, 0x1.006eap-89f, 0.0f, 0.0f, 0x1.4e5dep-69f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a178f4p-107f, 0x1.6a607p-48f, 0.0f, 0.0f, 0.0f, 0x1.dbdf22p-45f,
     0x1.688ae8p-110f, 0.0f, 0.0f, 0x1.5c0162p-78f
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
            tmp1 = Sleef_finz_sinpif4_u05kvx(tmp0);
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
    printf("Sleef_finz_sinpif4_u05kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_sinpif4_u05kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
