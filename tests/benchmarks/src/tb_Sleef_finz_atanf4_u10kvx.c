/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_atanf4_u10kvx.c --function \
 *     Sleef_finz_atanf4_u10kvx --headers sleef.h,ml_support_lib.h \
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
     0x1.b5eb02p-60f, 0.0f, 0x1.56fe44p-39f, 0.0f, 0.0f, 0x1.f10ac4p-91f,
     0x1.7191d4p-119f, 0.0f, 0x1.d76902p-121f, 0.0f, 0.0f, 0x1.9b9e16p-121f, 0.0f,
     0x1.3db6f8p-16f, 0x1.079ebp-11f, 0x1.d90dfcp-6f, 0.0f, 0x1.7433c4p-39f, 0.0f,
     0x1.50feb6p-104f, 0x1.1395dap-5f, 0x1.dc0d24p-4f, 0.0f, 0.0f, 0x1.cd7c3ap-18f,
     0.0f, 0.0f, 0x1.6ab448p-79f, 0.0f, 0.0f, 0x1.a5118ap-60f, 0x1.8fd9fcp-46f,
     0x1.c1ba7p-10f, 0x1.56b6e2p-59f, 0x1.2b7114p-41f, 0x1.b81d32p-53f,
     0x1.831db8p-88f, 0x1.88709cp-33f, 0.0f, 0x1.1925d6p-29f, 0x1.352b2ap-102f, 0.0f,
     0x1.65f8bep-25f, 0.0f, 0x1.1357f4p-65f, 0x1.da12aap-43f, 0x1.14a764p-36f,
     0x1.27247p-17f, 0x1.7d0304p-19f, 0.0f, 0.0f, 0x1.861d6ap-59f, 0x1.96a97ap-69f,
     0.0f, 0.0f, 0.0f, 0x1.27674ap-25f, 0x1.e1d266p-59f, 0.0f, 0.0f, 0.0f,
     0x1.3b813cp-45f, 0.0f, 0.0f, 0x1.a2d82cp-118f, 0.0f, 0.0f, 0x1.4208a2p-63f,
     0x1.c4daa2p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.75c9bep-30f,
     0x1.be968p-99f, 0.0f, 0.0f, 0x1p0f, 0x1.c561d2p-35f, 0.0f, 0.0f, 0x1.3cd346p-86f,
     0x1.2f7136p-65f, 0x1.56b3bcp-105f, 0x1.8f2c64p-115f, 0.0f, 0.0f, 0x1.b60cfep-76f,
     0x1.923532p-22f, 0x1.9378dcp-97f, 0.0f, 0x1.30ae24p-86f, 0x1.aee186p-88f, 0.0f,
     0x1.14f18ep-2f, 0.0f, 0.0f, 0.0f, 0x1.2725bap-62f, 0.0f, 0.0f, 0x1.ea2676p-57f,
     0x1.7bc394p-121f, 0x1.b86deap-67f, 0x1.d56f6p-111f, 0.0f, 0.0f, 0.0f,
     0x1.f3c5cep-50f, 0x1.92abep-56f, 0.0f, 0.0f, 0x1.031206p-17f, 0.0f,
     0x1.3b9ab2p-70f, 0.0f, 0.0f, 0x1.c7d5acp-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.164954p-6f, 0.0f, 0.0f, 0.0f, 0x1.ec80c6p-8f, 0x1.a342bap-66f, 0.0f, 0.0f,
     0.0f, 0x1.f50646p-44f, 0x1.d49732p-109f, 0x1.02f0aap-81f, 0x1.81a7a6p-72f,
     0x1.1edf74p-2f, 0x1.48e39p-18f, 0.0f, 0x1.f23268p-36f, 0.0f, 0.0f, 0.0f,
     0x1.5ac8e2p-115f, 0.0f, 0x1.f02632p-117f, 0.0f, 0.0f, 0.0f, 0x1.a20e22p-102f,
     0x1.b2cf8ep-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ddb18ep-100f, 0.0f, 0.0f, 0.0f,
     0x1.9dd3d2p-115f, 0x1.c25164p-81f, 0x1.86c6f4p-108f, 0.0f, 0x1.460c06p-122f,
     0x1.2c5fdap-93f, 0x1.0be57ep-85f, 0x1.1c23d6p-106f, 0x1.d90e8p-81f,
     0x1.5292bcp-119f, 0.0f, 0.0f, 0.0f, 0x1.2c1fcep-10f, 0.0f, 0.0f, 0x1.4e0902p-15f,
     0x1.f141aep-95f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.8019f4p-83f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.19f686p-14f, 0x1.8a30dep-80f, 0x1.9320d4p-12f,
     0x1.6b8f74p-78f, 0x1.40ca72p-102f, 0x1.dff75ep-98f, 0x1.88cdc8p-52f, 0.0f,
     0x1.7a82fp-115f, 0x1.daf8f4p-16f, 0x1.02c6d4p-124f, 0.0f, 0x1.c22aacp-13f, 0.0f,
     0.0f, 0.0f, 0x1.5b20a2p-91f, 0.0f, 0x1.aac65p-25f, 0.0f, 0.0f, 0.0f,
     0x1.0bbad4p-68f, 0.0f, 0x1.6e0ccap-115f, 0x1.f471fcp-100f, 0.0f, 0x1.675b6cp-42f,
     0.0f, 0x1.83a47p-95f, 0x1.6d1674p-57f, 0.0f, 0x1.8f7b44p-76f, 0.0f,
     0x1.d202f2p-7f, 0x1.9d7fa2p-20f, 0.0f, 0.0f, 0x1.556ebcp-57f, 0.0f,
     0x1.03dd42p-63f, 0x1.4eda48p-103f, 0x1.46fb94p-94f, 0.0f, 0.0f, 0x1.9a6f9cp-58f,
     0.0f, 0x1.bb3af6p-36f, 0x1.82db3cp-73f, 0x1.dd98f2p-13f, 0.0f, 0.0f,
     0x1.bb41b8p-52f, 0.0f, 0.0f, 0x1.ba04fcp-53f, 0x1.7af6acp-34f, 0.0f,
     0x1.8365d6p-77f, 0x1.ae7b84p-53f, 0.0f, 0.0f, 0x1.6df20ap-74f, 0.0f,
     0x1.e0d59ep-97f, 0.0f, 0x1.c4b23cp-115f, 0x1.4a9238p-110f, 0.0f, 0x1.2abcfp-96f,
     0.0f, 0.0f, 0x1.f55b92p-56f, 0x1.6cae2p-15f, 0.0f, 0x1p0f, 0.0f, 0x1.3d15bep-49f,
     0x1.d895c4p-102f, 0.0f, 0x1.0426dcp-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6ec47ep-112f, 0x1.37e7aap-26f, 0.0f, 0x1.2573a4p-60f, 0.0f, 0x1.fb0c3p-70f,
     0.0f, 0.0f, 0x1.bec674p-42f, 0x1.3e2ea8p-33f, 0x1.68732ap-12f, 0x1.dd0e86p-116f,
     0.0f, 0x1.ceb6eap-120f, 0.0f, 0.0f, 0x1.5641b4p-77f, 0x1.cca6fcp-74f, 0.0f,
     0x1.5e756ep-44f, 0.0f, 0x1.ba094ep-37f, 0x1.25041ap-110f, 0.0f, 0.0f,
     0x1.a2d9bap-77f, 0x1.927374p-104f, 0.0f, 0.0f, 0.0f, 0x1.4c2b82p-63f,
     0x1.f3c524p-13f, 0x1.3cb018p-66f, 0.0f, 0x1.b76474p-13f, 0.0f, 0.0f,
     0x1.9c4e46p-29f, 0x1.10f50ap-8f, 0x1.81570ep-75f, 0.0f, 0x1.f079aap-75f,
     0x1.dc6f08p-44f, 0x1.fbebep-85f, 0.0f, 0x1.e972ccp-42f, 0.0f, 0.0f,
     0x1.687f42p-116f, 0.0f, 0x1.98f1dcp-13f, 0.0f, 0x1.cd00cp-19f, 0.0f,
     0x1.4270a8p-22f, 0x1.3f7946p-71f, 0.0f, 0.0f, 0x1.2ac4dep-98f, 0x1.b4a05cp-115f,
     0x1.0e6f14p-54f, 0.0f, 0.0f, 0x1.2e48fep-85f, 0x1.3e0286p-48f, 0.0f,
     0x1.e12232p-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.89a59ep-61f, 0x1.13cd52p-36f, 0.0f,
     0x1.562a0cp-47f, 0.0f, 0.0f, 0.0f, 0x1.07c9fap-126f, 0.0f, 0x1.253f9p-60f,
     0x1.055756p-25f, 0.0f, 0.0f, 0x1.9dd812p-7f, 0x1.e3253ap-14f, 0x1.efd0f4p-64f,
     0x1.fa2f6ap-23f, 0x1.09f182p-98f, 0x1.64969p-50f, 0x1.beda88p-116f,
     0x1.36fac6p-67f, 0x1.4cb30cp-91f, 0.0f, 0x1.2e8292p-61f, 0x1.976c6cp-21f,
     0x1.c24abep-96f, 0x1.aad964p-106f, 0.0f, 0.0f, 0x1.f993a8p-126f, 0.0f,
     0x1.3aa2d6p-47f, 0x1.d725d2p-38f, 0x1.c40786p-125f, 0.0f, 0.0f, 0.0f,
     0x1.3755ecp-101f, 0.0f, 0x1.5b1366p-41f, 0.0f, 0x1.6ab58cp-52f, 0x1.7d8414p-20f,
     0.0f, 0x1.5ab848p-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b50018p-51f, 0.0f, 0.0f, 0.0f, 0x1.0c8a1cp-108f, 0.0f, 0x1.96ca98p-88f,
     0x1.9b441ap-53f, 0.0f, 0x1.7f06a2p-71f, 0.0f, 0x1.d38ef6p-107f, 0.0f,
     0x1.11dce6p-116f, 0.0f, 0.0f, 0x1.44914ep-81f, 0x1.1b66aep-112f, 0x1.92d43ep-12f,
     0x1.898a6ap-124f, 0.0f, 0x1.d113dep-83f, 0.0f, 0x1.0e8b52p-48f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.17401p-54f, 0.0f, 0x1.f909fp-103f, 0.0f, 0x1.74188p-119f, 0.0f,
     0x1.f6b324p-93f, 0x1.2d7e38p-40f, 0x1.6df83cp-72f, 0x1.fcda36p-107f, 0.0f, 0.0f,
     0x1.5f7e1ap-98f, 0x1.c9c2e8p-90f, 0x1.988664p-20f, 0.0f, 0.0f, 0x1.b4b1cep-31f,
     0.0f, 0.0f, 0x1.d6d8bap-20f, 0.0f, 0x1.de0d3cp-8f, 0x1.47bebp-57f,
     0x1.fb294cp-109f, 0x1.af5764p-9f, 0x1.f3670ap-92f, 0x1.d19582p-3f, 0.0f, 0.0f,
     0.0f, 0x1.3d2966p-108f, 0x1.0c81dcp-15f, 0x1.23fc0ep-119f, 0x1.c5315ep-90f,
     0x1.7475bep-108f, 0x1.e3db62p-33f, 0.0f, 0.0f, 0x1.27470ep-66f, 0.0f, 0.0f, 0.0f,
     0x1.0917f4p-12f, 0x1.34a164p-36f, 0.0f, 0x1.a76c38p-25f, 0x1.17b9b8p-101f,
     0x1.8f2e5cp-95f, 0x1.ec4c7p-96f, 0.0f, 0.0f, 0.0f, 0x1.27d0dp-93f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.64913cp-115f, 0x1.132bc2p-97f, 0x1.e9f5d4p-105f, 0x1.5317bap-19f,
     0.0f, 0.0f, 0x1.7f31b6p-121f, 0.0f, 0x1.3a1c26p-28f, 0.0f, 0.0f, 0x1.9f615ep-1f,
     0x1.65f404p-93f, 0.0f, 0x1.2f17f4p-72f, 0.0f, 0x1.4f17a2p-99f, 0.0f,
     0x1.ec3a9p-123f, 0.0f, 0x1.c4b0a2p-60f, 0.0f, 0x1.f69578p-21f, 0.0f, 0.0f,
     0x1.15b5bp-7f, 0x1.d0c792p-7f, 0x1.8beae6p-7f, 0x1.051a32p-123f, 0x1.981878p-13f,
     0.0f, 0x1.4db6fcp-95f, 0x1.83e1a8p-50f, 0.0f, 0x1.5142dp-77f, 0x1.294704p-82f,
     0x1.ebd10ap-118f, 0x1.8e2a3ap-3f, 0x1.a7c45ap-109f, 0.0f, 0x1.d10fcep-80f, 0.0f,
     0x1.88d0c8p-19f, 0.0f, 0x1.89ce9p-28f, 0.0f, 0x1.b70c8cp-106f, 0.0f, 0.0f,
     0x1.76bfdap-80f, 0.0f, 0x1.073dccp-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.96f3aep-19f, 0.0f, 0x1.489a22p-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.13412ap-107f, 0.0f, 0x1.64699p-56f, 0x1.267fcep-81f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.13b65ep-93f, 0x1.678964p-113f, 0.0f, 0x1.52a4f4p-30f, 0.0f,
     0x1.c64c0cp-97f, 0.0f, 0.0f, 0x1.d5737ap-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e074dcp-3f, 0x1.6c6d4cp-106f, 0x1.b19288p-7f, 0x1.fe3066p-114f,
     0x1.6e8128p-101f, 0x1.93250ep-115f, 0x1.3abf7cp-7f, 0.0f, 0.0f, 0.0f,
     0x1.99f65ep-67f, 0.0f, 0x1.7c6e7cp-26f, 0x1.4e5a96p-106f, 0x1.4dae7cp-27f,
     0x1.7c3926p-112f, 0.0f, 0.0f, 0x1.38de46p-55f, 0x1.667096p-16f, 0x1.cd33f4p-21f,
     0x1.0f1eeap-109f, 0x1.8dc9b2p-100f, 0.0f, 0x1.a65f8ep-13f, 0.0f, 0x1.3e8912p-13f,
     0.0f, 0.0f, 0x1.1996fcp-75f, 0.0f, 0.0f, 0x1.dc2cb6p-83f, 0x1.a34de8p-36f,
     0x1.24496ep-87f, 0.0f, 0x1.896d2ep-83f, 0x1.f2d1e8p-14f, 0x1.7c1e9ep-68f,
     0x1.1ff11p-30f, 0x1.9450cap-118f, 0x1.00a3a2p-9f, 0x1.a301p-13f, 0x1.eedb9ap-92f,
     0x1.67d022p-111f, 0.0f, 0.0f, 0.0f, 0x1.29375cp-89f, 0.0f, 0x1.4456f6p-94f, 0.0f,
     0x1.23378ap-65f, 0x1.1643c8p-71f, 0x1.90b27ap-3f, 0.0f, 0x1.95909p-98f,
     0x1.a6deb2p-17f, 0x1.7a4ffep-74f, 0.0f, 0x1.5b2674p-46f, 0x1.e51b0ap-14f, 0.0f,
     0x1.d9d9c2p-12f, 0.0f, 0.0f, 0x1.d592fep-72f, 0.0f, 0x1.bd9e36p-19f, 0.0f, 0.0f,
     0x1.c2d76ap-110f, 0x1.f3fec6p-18f, 0x1.d4fc36p-63f, 0x1.bf4746p-73f,
     0x1.1c9bd4p-47f, 0.0f, 0x1.bf1b4p-61f, 0.0f, 0x1.c96facp-89f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.8e273cp-33f, 0x1.d1a17cp-76f, 0.0f, 0.0f, 0x1.8d319p-25f,
     0x1.c63394p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.716e06p-79f, 0.0f, 0x1.39b17ep-113f,
     0x1.47ee4cp-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.543384p-99f, 0.0f, 0x1.c988fcp-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1f5abp-50f, 0.0f, 0x1.209164p-47f, 0.0f, 0.0f, 0.0f, 0x1.899824p-2f, 0.0f,
     0x1.8eed06p-107f, 0x1.30314ep-73f, 0.0f, 0.0f, 0x1.32480cp-37f, 0x1.42b42ep-58f,
     0x1.e4ef84p-31f, 0x1.45f2cp-93f, 0.0f, 0x1.28fd6ep-40f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0d0b66p-65f, 0.0f, 0.0f, 0.0f, 0x1.c6fc3ep-106f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.7e9896p-33f, 0x1.f1ffb2p-39f, 0x1.87f108p-35f, 0x1.b0e2a8p-99f, 0.0f,
     0x1.d97b62p-118f, 0x1.8e2298p-15f, 0x1.9d17f6p-49f, 0x1.b08bc4p-66f, 0.0f, 0.0f,
     0x1.48efb6p-62f, 0.0f, 0.0f, 0x1.69f8dap-81f, 0.0f, 0x1.3ee1cp-104f,
     0x1.27262p-16f, 0x1.c3f56ep-100f, 0.0f, 0x1.d5e1dp-2f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b10c02p-48f, 0x1.c44b26p-6f, 0x1.5eb364p-95f, 0x1.8cdc36p-79f, 0.0f, 0.0f,
     0x1.5bb73cp-104f, 0.0f, 0.0f, 0x1.3ae22ep-33f, 0x1.299658p-81f, 0.0f,
     0x1.fa4a0ap-4f, 0x1.9ac292p-18f, 0x1.f7d8c4p-107f, 0.0f, 0x1.083308p-118f,
     0x1.565eap-106f, 0.0f, 0x1.7ea98ep-49f, 0.0f, 0.0f, 0x1.6c3e88p-71f, 0.0f,
     0x1.84d56cp-102f, 0x1.03f776p-57f, 0.0f, 0x1.626d52p-81f, 0x1.a9db7cp-52f,
     0x1.2803b4p-14f, 0x1.208abep-88f, 0.0f, 0x1.c61bbep-7f, 0.0f, 0x1.d2923cp-25f,
     0.0f, 0.0f, 0.0f, 0x1.eac3ecp-71f, 0.0f, 0x1.5bbc58p-111f, 0.0f, 0.0f,
     0x1.e9f522p-86f, 0x1.ccd3bp-110f, 0.0f, 0x1.713a82p-5f, 0x1.41519ap-72f,
     0x1.1f649ap-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cf16dp-109f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.6211dap-31f, 0x1.cb599p-81f, 0.0f, 0x1.8d777ep-30f, 0.0f,
     0x1.4b5a32p-14f, 0.0f, 0.0f, 0x1.a41cecp-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3e64e4p-119f, 0x1.1aeb7p-97f, 0.0f, 0x1.ce556ep-88f, 0.0f, 0x1.93eabcp-124f,
     0.0f, 0x1.289d1p-83f, 0x1.10e6dap-55f, 0.0f, 0.0f, 0x1.c6c0eap-121f, 0.0f,
     0x1.c42762p-47f, 0x1.7704ep-99f, 0x1.d830bep-9f, 0x1.d96d54p-65f, 0.0f,
     0x1.0ae9a4p-46f, 0x1.3c1cbcp-62f, 0x1.ce103cp-48f, 0x1.2c1da8p-75f,
     0x1.71e0dp-4f, 0x1.f07006p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0dcefep-37f,
     0.0f, 0x1.75f53p-44f, 0.0f, 0.0f, 0.0f, 0x1.87b70ep-62f, 0x1.7bbed4p-90f, 0.0f,
     0.0f, 0x1.051de8p-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d8853cp-59f, 0.0f, 0.0f,
     0x1.21df74p-96f, 0.0f, 0.0f, 0x1.f22978p-110f, 0x1.d1475p-99f, 0.0f,
     0x1.a4a4bap-109f, 0.0f, 0x1.6e78dp-15f, 0.0f, 0x1.80042p-22f, 0x1.a604c6p-22f,
     0x1.9020dap-57f, 0x1.7741cap-6f, 0x1.6bcdf8p-46f, 0x1.178f78p-112f, 0.0f, 0.0f,
     0x1.8dc57cp-77f, 0x1.17bcfcp-41f, 0x1.18c75cp-83f, 0.0f, 0x1.da6da4p-17f,
     0x1.301ec8p-23f, 0x1.2fc1bep-114f, 0x1.5d1434p-46f, 0x1.6dc50ep-124f, 0.0f, 0.0f,
     0x1.5f49a6p-84f, 0x1.853162p-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c79cf8p-92f,
     0x1.a54b86p-6f, 0x1.91dab4p-95f, 0x1.ed06a6p-6f, 0.0f, 0x1.20e708p-20f,
     0x1.190794p-55f, 0x1.b4726cp-42f, 0x1.aa48fap-36f, 0.0f, 0.0f, 0.0f,
     0x1.d34578p-8f, 0.0f, 0.0f, 0x1.823078p-95f, 0.0f, 0.0f, 0x1.eb7dd4p-7f, 0.0f,
     0.0f, 0x1.fa63ccp-63f, 0.0f, 0.0f, 0x1.dc0666p-24f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2ab784p-6f, 0x1.ed3c9p-49f, 0x1p0f, 0x1.efc784p-98f, 0x1.a49d38p-10f, 0.0f,
     0.0f, 0x1.e7345p-90f, 0.0f, 0x1.cf2bf6p-103f, 0.0f, 0x1.490ea4p-116f, 0.0f, 0.0f,
     0x1.2241a4p-17f, 0.0f, 0x1.dabc3ap-76f, 0.0f, 0.0f, 0x1.8fe252p-84f,
     0x1.6b26dcp-90f, 0x1.c8018ep-18f, 0x1.f97258p-116f, 0x1.a515a2p-19f, 0.0f,
     0x1.117274p-70f, 0.0f, 0.0f, 0x1.3dd174p-99f, 0x1.355536p-61f, 0.0f,
     0x1.cc408p-65f, 0x1.95228p-126f, 0x1.da163p-78f, 0.0f, 0x1.f8e988p-22f, 0.0f,
     0.0f, 0x1.7ab58p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d11632p-73f, 0.0f,
     0x1.4d7e16p-85f, 0.0f, 0x1.870b9cp-44f, 0.0f, 0x1.9c728cp-55f, 0.0f,
     0x1.bd59cap-34f, 0.0f, 0x1.308842p-95f, 0x1.d48a4ep-5f, 0.0f, 0x1.dfb754p-9f,
     0.0f, 0x1.e72bb6p-122f, 0x1.8a94b8p-114f
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
            tmp1 = Sleef_finz_atanf4_u10kvx(tmp0);
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
    printf("Sleef_finz_atanf4_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_atanf4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
