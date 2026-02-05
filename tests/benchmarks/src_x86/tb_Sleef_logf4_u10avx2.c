/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_logf4_u10avx2128.c --function Sleef_logf4_u10avx2128 --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary32 --vector-size 4 \
 *     --function-input-vector-size 4 --bench --no-embedded-bin --target \
 *     x86_avx2128
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
     0.0f, 0.0f, 0.0f, 0x1.1ecba6p-77f, 0x1.b1d6c6p-30f, 0x1.9ef09ep-108f, 0.0f,
     0x1.ded922p-93f, 0.0f, 0x1.caa062p-122f, 0x1.7b9898p-3f, 0x1.e2f3bcp-88f, 0.0f,
     0x1.0916e8p-72f, 0.0f, 0x1.f6bffap-91f, 0.0f, 0x1.9fa752p-96f, 0.0f, 0.0f, 0.0f,
     0x1.a75f26p-44f, 0.0f, 0x1.50b58cp-112f, 0x1.407bb2p-54f, 0x1.cb0c0ap-13f, 0.0f,
     0x1.dd408ep-12f, 0.0f, 0x1.e13e8p-30f, 0x1.4c509ap-23f, 0.0f, 0x1.05616ep-80f,
     0x1.a54bfp-25f, 0.0f, 0x1.7ccdecp-37f, 0.0f, 0.0f, 0x1.8aac6ep-125f,
     0x1.5c30cp-42f, 0x1.3d543cp-116f, 0.0f, 0x1.5ecef2p-57f, 0x1.0e825p-29f, 0.0f,
     0.0f, 0.0f, 0x1.5073fcp-45f, 0x1.25f3d6p-67f, 0x1.49d4f6p-67f, 0x1.3de27ap-80f,
     0x1.912caap-75f, 0.0f, 0x1.e922bcp-85f, 0x1.03p-20f, 0x1.77f45p-2f, 0.0f,
     0x1.eaccc8p-78f, 0.0f, 0x1.9aa76ep-49f, 0.0f, 0x1.13235cp-66f, 0x1.41e2b8p-13f,
     0x1.5df9e2p-62f, 0.0f, 0.0f, 0x1.d58bbap-60f, 0.0f, 0.0f, 0.0f, 0x1.351732p-13f,
     0.0f, 0x1.79d4e2p-84f, 0x1.0c87d6p-20f, 0.0f, 0.0f, 0.0f, 0x1.8074fap-28f,
     0x1.527834p-56f, 0.0f, 0.0f, 0x1.f161fep-105f, 0x1.b7dc4cp-80f, 0.0f, 0.0f,
     0x1.128e66p-59f, 0x1.c299fcp-30f, 0x1.5d2364p-9f, 0.0f, 0.0f, 0x1.6f0e2p-25f,
     0x1.2df8cap-57f, 0x1.991c0cp-102f, 0.0f, 0.0f, 0x1.52abb6p-21f, 0x1.57468p-97f,
     0x1.dc10bep-85f, 0.0f, 0.0f, 0x1.fec0ecp-25f, 0.0f, 0.0f, 0x1.fc1c74p-66f, 0.0f,
     0.0f, 0x1.d2c284p-67f, 0.0f, 0x1.1cfeeap-82f, 0.0f, 0x1.69c3cep-100f, 0.0f, 0.0f,
     0x1.fb4f2cp-93f, 0.0f, 0.0f, 0x1.87edecp-84f, 0.0f, 0x1.d8fb66p-18f,
     0x1.2c8aa4p-54f, 0x1.6d3a34p-27f, 0x1.cf59a8p-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.04429ap-102f, 0.0f, 0.0f, 0x1.3cecb2p-45f, 0.0f, 0x1.6a773cp-30f,
     0x1.9ef6ecp-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cfeb46p-16f, 0.0f,
     0x1.ea454cp-27f, 0.0f, 0x1.00619ap-40f, 0x1.0d33a2p-22f, 0.0f, 0.0f,
     0x1.8aea56p-74f, 0.0f, 0x1.df973ep-87f, 0.0f, 0.0f, 0x1.10380ap-24f,
     0x1.ddafc2p-12f, 0x1.880266p-32f, 0.0f, 0.0f, 0x1.70dc3p-87f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.3d053ep-111f, 0.0f, 0x1.117094p-54f, 0.0f, 0x1.756b54p-109f,
     0x1.f9d528p-6f, 0.0f, 0x1.d0b792p-40f, 0.0f, 0x1.3afc2cp-122f, 0x1.6cf768p-96f,
     0x1.d8f6b4p-62f, 0x1.ca4ad2p-89f, 0.0f, 0.0f, 0x1.c21232p-46f, 0x1p0f,
     0x1.f03472p-114f, 0.0f, 0x1.09eab8p-79f, 0.0f, 0x1.67392p-42f, 0.0f, 0.0f,
     0x1.041ecep-71f, 0.0f, 0.0f, 0.0f, 0x1.54aa46p-88f, 0.0f, 0.0f, 0x1.aa1ae8p-86f,
     0x1.bea7e2p-15f, 0x1.284062p-27f, 0.0f, 0.0f, 0.0f, 0x1.eddcbp-106f, 0.0f,
     0x1.a54958p-112f, 0x1.13143p-92f, 0.0f, 0x1.9a2ed6p-1f, 0.0f, 0.0f,
     0x1.86e998p-13f, 0x1.15974cp-117f, 0.0f, 0.0f, 0x1.30a056p-111f, 0x1.ac775ap-89f,
     0x1.8f8ee2p-69f, 0x1.b3d60cp-105f, 0.0f, 0.0f, 0x1.0fcf7p-78f, 0.0f,
     0x1.b0eea2p-65f, 0x1.441fc6p-56f, 0.0f, 0x1.33254ap-73f, 0x1.6e2b34p-34f, 0.0f,
     0x1.c2d30ap-83f, 0.0f, 0x1.76f99cp-113f, 0.0f, 0x1.d91bdp-59f, 0.0f, 0.0f,
     0x1.5cebbp-11f, 0x1.eee93cp-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b4b18ap-102f,
     0x1.131aep-94f, 0.0f, 0.0f, 0.0f, 0x1.cb96acp-80f, 0x1.7bd692p-62f, 0.0f, 0.0f,
     0x1.16658ep-35f, 0.0f, 0.0f, 0x1.537c3cp-107f, 0x1.03f67cp-3f, 0x1.09b9a8p-36f,
     0.0f, 0x1.388182p-106f, 0x1.eb1888p-53f, 0x1.fe854ap-30f, 0.0f, 0x1.b0e7b2p-4f,
     0.0f, 0.0f, 0x1p0f, 0x1.582f12p-47f, 0x1.a94788p-59f, 0x1.bef3a6p-23f, 0.0f,
     0.0f, 0.0f, 0x1.9d9ee6p-80f, 0.0f, 0.0f, 0x1.9ec8c2p-24f, 0x1.e98856p-7f,
     0x1.6da83ep-44f, 0x1.d30648p-112f, 0.0f, 0x1.e83cdep-42f, 0.0f, 0x1.9de188p-99f,
     0x1.cb3b3ep-33f, 0x1.f59e7p-33f, 0x1.521cfcp-107f, 0x1.9abe5p-96f,
     0x1.c40418p-89f, 0.0f, 0x1.e061e4p-71f, 0x1.d5e096p-22f, 0.0f, 0x1.74d77p-118f,
     0x1.99b8fp-35f, 0x1.04f1bcp-54f, 0.0f, 0x1.26ed8ep-37f, 0x1.30a602p-58f, 0.0f,
     0x1.85ad84p-106f, 0.0f, 0x1.bb723ap-57f, 0x1.ff0d3p-14f, 0.0f, 0.0f, 0.0f,
     0x1.122d9p-78f, 0.0f, 0x1.8daf4ap-123f, 0.0f, 0x1.3b7572p-120f, 0.0f,
     0x1.079c7cp-16f, 0.0f, 0x1.3ae5a6p-5f, 0.0f, 0.0f, 0x1.5af9c2p-70f,
     0x1.b6ecep-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7eedf8p-54f, 0.0f, 0x1.61cd8cp-3f,
     0.0f, 0.0f, 0x1.5d968cp-92f, 0.0f, 0x1.b14078p-108f, 0x1.1af04ap-122f,
     0x1.8c6d26p-61f, 0.0f, 0.0f, 0x1.40244ap-9f, 0x1.703df8p-3f, 0x1.4f0d3ap-19f,
     0.0f, 0x1p0f, 0x1.479474p-55f, 0.0f, 0x1.e6174cp-60f, 0.0f, 0x1.50d8aap-110f,
     0x1.fd0eecp-100f, 0.0f, 0.0f, 0.0f, 0x1.e51808p-94f, 0x1.916528p-125f,
     0x1.5e314p-124f, 0.0f, 0x1.e07de2p-84f, 0x1.13347p-19f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.165a72p-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cc4e32p-56f,
     0x1.3e5454p-62f, 0x1.875646p-70f, 0x1.281e12p-15f, 0x1.d9cdf2p-33f, 0.0f,
     0x1.734fbp-40f, 0x1.21bef6p-102f, 0.0f, 0x1.670b3ep-56f, 0x1.de0d0ap-88f,
     0x1.8be998p-31f, 0.0f, 0.0f, 0x1.80b3b2p-91f, 0.0f, 0x1.9f650ap-98f,
     0x1.60fa48p-47f, 0.0f, 0.0f, 0x1.e0e26ap-83f, 0.0f, 0.0f, 0x1.6ee42cp-121f, 0.0f,
     0.0f, 0.0f, 0x1.2e611ap-85f, 0.0f, 0.0f, 0.0f, 0x1.996e92p-69f, 0x1.08deaep-102f,
     0x1.726658p-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.927a4ap-2f, 0.0f,
     0x1.2de084p-53f, 0.0f, 0x1.e0e3c2p-50f, 0.0f, 0.0f, 0.0f, 0x1.57716ep-110f,
     0x1.e17f9p-2f, 0.0f, 0x1.979096p-78f, 0x1.169ec8p-86f, 0.0f, 0x1.36913p-95f,
     0.0f, 0.0f, 0.0f, 0x1.61646cp-89f, 0.0f, 0.0f, 0.0f, 0x1.2d0d6p-114f,
     0x1.d821bcp-83f, 0.0f, 0x1.d03cdcp-11f, 0.0f, 0x1.c84feep-94f, 0x1.94e8eap-83f,
     0.0f, 0x1.8323dap-107f, 0.0f, 0.0f, 0x1.6c2d6p-10f, 0x1.0a428p-39f,
     0x1.805c3cp-18f, 0.0f, 0.0f, 0x1.bcbe86p-1f, 0x1.3a43a4p-56f, 0x1.925474p-124f,
     0.0f, 0.0f, 0x1.c4add6p-1f, 0x1.028dfcp-63f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f,
     0x1.dfc7eep-7f, 0x1.8ac78ep-78f, 0x1.de1baap-40f, 0.0f, 0.0f, 0x1.f81cf6p-11f,
     0x1.6458eap-29f, 0.0f, 0.0f, 0x1.9ff552p-125f, 0x1.85b9acp-90f, 0.0f,
     0x1.4f4398p-7f, 0x1.81141cp-106f, 0.0f, 0.0f, 0.0f, 0x1.5f0266p-39f, 0.0f,
     0x1.6bc426p-98f, 0x1.c0ac8ep-51f, 0x1.e47b02p-25f, 0.0f, 0.0f, 0x1.8b2544p-121f,
     0.0f, 0x1.9cfa4ep-27f, 0x1.821fbcp-95f, 0x1.75f20ap-66f, 0x1.73dd5ap-54f,
     0x1.056a92p-98f, 0x1.55b12cp-19f, 0x1.f643fcp-107f, 0x1.684ceap-26f, 0.0f, 0.0f,
     0x1.b15092p-2f, 0.0f, 0x1.94e868p-48f, 0x1.a70dccp-59f, 0x1.0fd2cep-39f, 0.0f,
     0x1.43d36ep-49f, 0.0f, 0x1.1cf51ap-113f, 0.0f, 0.0f, 0x1.64c47p-44f, 0.0f,
     0x1.236666p-76f, 0x1.7f34d6p-35f, 0x1.2ca7b8p-70f, 0x1.474ea6p-38f, 0.0f,
     0x1.fb8bfep-61f, 0.0f, 0x1.3248e4p-87f, 0x1.fd8a88p-122f, 0.0f, 0x1.e698c2p-89f,
     0.0f, 0x1.bfbc8cp-69f, 0x1p0f, 0x1.4d2856p-53f, 0.0f, 0.0f, 0x1.95c55ep-18f,
     0x1.dfcd98p-111f, 0x1.72d94ep-3f, 0x1.0cb15cp-19f, 0x1.024fb8p-107f,
     0x1.7686aep-80f, 0.0f, 0x1.913674p-92f, 0.0f, 0.0f, 0.0f, 0x1.e6d63cp-40f, 0.0f,
     0x1.13342ep-40f, 0.0f, 0.0f, 0x1.221422p-52f, 0.0f, 0.0f, 0.0f, 0x1.335f4ap-70f,
     0.0f, 0x1.b28816p-58f, 0x1.9d69d6p-7f, 0.0f, 0.0f, 0x1.1a66e6p-86f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b90c0ap-29f, 0x1.9bd6e4p-81f, 0.0f, 0.0f, 0x1.a5b808p-74f,
     0.0f, 0.0f, 0.0f, 0x1.04f284p-66f, 0x1.b9f0a4p-120f, 0.0f, 0.0f, 0x1.5fd41ap-15f,
     0x1.2764eep-91f, 0x1.cbef58p-20f, 0x1.e08a7ap-113f, 0.0f, 0x1.612bbap-4f,
     0x1.2f982ep-34f, 0.0f, 0x1.5e0b6p-107f, 0x1.7eaf3ap-80f, 0.0f, 0.0f,
     0x1.a75ee8p-76f, 0x1.8b9942p-36f, 0.0f, 0x1p0f, 0x1.73c7aep-5f, 0.0f,
     0x1.16cd2cp-65f, 0.0f, 0x1.bf9764p-36f, 0x1.c506dp-29f, 0x1.be3ad8p-86f, 0.0f,
     0x1.76e27p-9f, 0.0f, 0x1.c0202ep-108f, 0x1.0a6cfep-17f, 0x1.f19254p-110f, 0.0f,
     0x1.2f8d24p-106f, 0x1.9a9954p-99f, 0x1.0d561p-119f, 0.0f, 0x1.52880cp-5f,
     0x1.37f1ap-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ae8248p-126f, 0.0f,
     0.0f, 0x1.8cfd94p-2f, 0.0f, 0x1.bcf32cp-94f, 0.0f, 0.0f, 0x1.a88f84p-51f, 0.0f,
     0x1.2df752p-55f, 0.0f, 0.0f, 0x1.49c9eap-119f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0a106cp-84f, 0x1.15f57ep-36f, 0x1.f660aep-16f, 0x1.b02556p-57f,
     0x1.f2d07ep-118f, 0x1.d6cf18p-23f, 0x1.02ef56p-13f, 0x1.771c1ap-20f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.94e372p-64f, 0.0f, 0.0f, 0.0f, 0x1.3d4424p-104f, 0x1.d44152p-99f,
     0.0f, 0x1.c003b2p-97f, 0x1.0d3dacp-103f, 0.0f, 0.0f, 0x1.31320cp-79f,
     0x1.c226e6p-41f, 0.0f, 0.0f, 0.0f, 0x1.28a86ep-55f, 0x1.2e605ep-112f,
     0x1.28ea2ep-33f, 0x1.674464p-6f, 0x1.f20e6ap-85f, 0x1.953942p-37f, 0.0f,
     0x1.9fad1ep-106f, 0x1.0aa6ccp-114f, 0.0f, 0x1.78ab38p-48f, 0.0f, 0x1.68e818p-47f,
     0.0f, 0x1.13432cp-26f, 0x1.744094p-104f, 0x1.4c0c9ap-94f, 0.0f, 0.0f,
     0x1.fbaecap-23f, 0.0f, 0x1.ed9de8p-92f, 0.0f, 0x1.ff49ecp-39f, 0.0f,
     0x1.1601f8p-46f, 0x1.575ff2p-5f, 0x1.6f7e9ap-49f, 0.0f, 0x1.b18feap-81f,
     0x1.2e9406p-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e5b686p-119f, 0.0f,
     0x1.46315p-45f, 0.0f, 0.0f, 0.0f, 0x1.6bb0eep-7f, 0.0f, 0.0f, 0x1.29a136p-79f,
     0.0f, 0.0f, 0x1.f5508cp-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a325c8p-25f, 0.0f, 0x1.575e6ep-69f, 0.0f, 0.0f,
     0.0f, 0x1.67fe7p-108f, 0x1.50125ap-23f, 0.0f, 0x1.946508p-39f, 0x1.539ae6p-124f,
     0.0f, 0.0f, 0x1.1df104p-39f, 0.0f, 0.0f, 0x1.abef2ep-103f, 0x1.79991p-61f,
     0x1.4be862p-19f, 0x1.fff172p-59f, 0.0f, 0.0f, 0x1.f5592cp-63f, 0.0f,
     0x1.37049ap-17f, 0x1.7ff90ap-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.43653ap-37f,
     0x1.18d7e8p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.080b4cp-96f, 0x1.781a7ep-103f,
     0.0f, 0x1.16e782p-94f, 0.0f, 0.0f, 0x1.9a7756p-39f, 0.0f, 0x1.5c5f8ap-110f, 0.0f,
     0x1.3318dcp-22f, 0.0f, 0x1.d802e8p-57f, 0.0f, 0.0f, 0x1.4213e2p-13f, 0.0f,
     0x1.c037d4p-100f, 0x1.8574ep-62f, 0.0f, 0.0f, 0x1.58b8b2p-123f, 0.0f, 0.0f,
     0x1.aef728p-7f, 0x1.d4971ap-39f, 0x1.484ceep-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.563358p-10f, 0x1.d48f9cp-120f, 0.0f, 0.0f, 0x1.44f22p-72f,
     0x1.c2c79ep-3f, 0x1.f6221ap-40f, 0x1.0f0596p-13f, 0x1.69a6bcp-110f,
     0x1.b0daf6p-8f, 0.0f, 0.0f, 0x1.cb8994p-39f, 0x1.b78212p-4f, 0x1.33d362p-60f,
     0x1.1cae54p-9f, 0x1.440654p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0d07d4p-8f,
     0.0f, 0.0f, 0x1.40584ap-68f, 0.0f, 0.0f, 0x1.9a9382p-37f, 0x1.98cf9ap-18f,
     0x1.686f58p-23f, 0x1.9a2fb4p-77f, 0x1.288b9ap-25f, 0x1.e4e208p-55f, 0.0f,
     0x1.7a9836p-35f, 0.0f, 0.0f, 0.0f, 0x1.79b97ep-51f, 0.0f, 0x1.a2e28cp-71f, 0.0f,
     0.0f, 0x1.79c548p-80f, 0.0f, 0.0f, 0x1.dd5074p-69f, 0.0f, 0.0f, 0.0f,
     0x1.6b82d6p-80f, 0x1.d51646p-79f, 0x1.5eca2p-91f, 0.0f, 0x1.344e46p-108f, 0.0f,
     0x1.17659cp-82f, 0x1.2094e4p-79f, 0x1.557978p-4f, 0x1.72ed08p-14f, 0.0f, 0.0f,
     0x1.847fb6p-65f, 0.0f, 0x1.cc4244p-61f, 0x1.a36e52p-42f, 0.0f, 0x1.8507b4p-93f,
     0x1.7e2ac2p-4f, 0x1.ad5ce8p-52f, 0x1.21355cp-101f, 0.0f, 0.0f, 0x1.3a533ap-13f,
     0.0f, 0.0f, 0.0f, 0x1.586a18p-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3527bap-47f, 0.0f,
     0.0f, 0.0f, 0x1.a30a76p-102f, 0x1.d3f312p-115f, 0.0f, 0x1.333612p-91f,
     0x1.3b7582p-77f, 0.0f, 0.0f, 0x1.870cfcp-25f, 0.0f, 0x1.d84fd2p-41f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.355dc2p-18f, 0x1.d9ca7p-82f, 0.0f, 0x1.32eeb6p-34f, 0.0f,
     0x1.1106a6p-55f, 0x1.2174f2p-37f, 0x1.66aea6p-11f, 0x1.debb36p-18f, 0.0f, 0.0f,
     0x1.1e986ap-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d5fdacp-35f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cbfb38p-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.297b9cp-119f,
     0x1.25d888p-106f, 0x1.5ce166p-74f, 0.0f, 0.0f, 0.0f, 0x1.063cfep-31f,
     0x1.1cb1cep-48f, 0x1.1cb5bcp-98f, 0.0f, 0x1.f43654p-51f, 0x1.2e496ap-26f,
     0x1.c97184p-28f, 0x1.c29732p-95f, 0x1.431edep-23f, 0x1.07c6aep-91f, 0.0f, 0.0f,
     0x1.f51f4ep-76f, 0x1.aa3266p-92f, 0x1.71c2f2p-58f, 0.0f, 0x1.2ba836p-51f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.1362aap-95f, 0.0f, 0.0f, 0x1.3b2b82p-112f, 0.0f,
     0x1.357f3ep-30f, 0x1.efc864p-38f, 0x1.20d7fcp-82f, 0.0f, 0x1.abbe66p-23f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a4d55cp-13f, 0.0f, 0x1.1e865ap-72f, 0.0f,
     0x1.bd327p-98f, 0.0f, 0x1.9d561ep-91f, 0.0f, 0.0f, 0.0f, 0x1.6891d8p-66f, 0.0f,
     0x1.9f4dbp-102f, 0.0f, 0x1.a2523p-38f, 0.0f, 0.0f, 0.0f, 0x1.24e328p-85f, 0.0f,
     0.0f, 0x1.971bfp-70f, 0x1.4f4254p-17f, 0x1.bd580cp-123f, 0.0f, 0x1.0d0242p-12f,
     0x1.6cfa8p-38f, 0x1p0f, 0.0f, 0x1.7d49fep-38f, 0.0f, 0x1.a779c8p-108f,
     0x1.ad7744p-18f, 0.0f, 0x1.f9b596p-29f, 0x1.ead1eep-92f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.9d5556p-117f, 0.0f
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
            tmp1 = Sleef_logf4_u10avx2128(tmp0);
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
    printf("Sleef_logf4_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_logf4_u10avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
