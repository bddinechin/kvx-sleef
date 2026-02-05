/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_asinf4_u10kvx.c --function Sleef_asinf4_u10kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 4 --function-input-vector-size 4 --bench \
 *     --no-embedded-bin --target kv3
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
     0x1.a110e6p-18f, 0x1.e21556p-98f, 0.0f, 0.0f, 0x1.216234p-117f, 0x1.7377b6p-56f,
     0x1.9d899ap-57f, 0.0f, 0.0f, 0x1.6f8abep-96f, 0x1.9c5854p-80f, 0.0f, 0.0f, 0.0f,
     0x1.0d458ep-91f, 0x1.cb010ep-6f, 0.0f, 0x1.ebd194p-51f, 0.0f, 0x1.abbabcp-40f,
     0x1.c245b8p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0e8a0ap-38f, 0x1.eff49cp-110f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a7bb78p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.925c6p-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9b49aep-15f,
     0.0f, 0.0f, 0x1.63c73ep-82f, 0.0f, 0.0f, 0.0f, 0x1.d3ffdcp-57f, 0.0f,
     0x1.09c8eep-19f, 0.0f, 0x1.aeb5ap-55f, 0x1.e8e86cp-47f, 0.0f, 0.0f,
     0x1.c16394p-34f, 0.0f, 0x1.025a7ap-49f, 0x1.3ccbb2p-126f, 0.0f, 0x1.f4dbap-26f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.116cfcp-89f, 0x1.7f5364p-53f, 0.0f, 0.0f, 0.0f,
     0x1.4f722cp-54f, 0.0f, 0x1.e23d06p-100f, 0x1.87657ep-13f, 0x1.70a392p-106f,
     0x1.bb0d38p-70f, 0x1.d5105cp-34f, 0x1.b059fep-47f, 0x1.584ae4p-27f,
     0x1.c67a6p-62f, 0x1.ee364p-81f, 0.0f, 0x1.eaf3eep-1f, 0.0f, 0.0f, 0.0f,
     0x1.f94042p-108f, 0.0f, 0.0f, 0.0f, 0x1.af399ep-75f, 0.0f, 0.0f, 0.0f,
     0x1.2e8086p-69f, 0.0f, 0.0f, 0x1.464086p-65f, 0.0f, 0x1.5b912p-123f, 0.0f,
     0x1.8948b4p-46f, 0.0f, 0x1.6c5bd8p-79f, 0.0f, 0x1.fb977ap-109f, 0x1.8123bap-82f,
     0.0f, 0.0f, 0.0f, 0x1.7912b4p-25f, 0x1.6110fcp-45f, 0.0f, 0x1.393dd6p-28f, 0.0f,
     0x1.4a997ep-80f, 0.0f, 0.0f, 0x1.c3ba82p-70f, 0.0f, 0x1.f4213ap-1f, 0.0f, 0.0f,
     0.0f, 0x1.9146d4p-126f, 0.0f, 0.0f, 0x1.28a326p-40f, 0x1.2cc124p-34f,
     0x1.ef6eaep-52f, 0x1.f4c968p-13f, 0x1.1f8738p-53f, 0x1.93d3ap-122f, 0.0f,
     0x1.5cf71ap-96f, 0x1.ea2966p-31f, 0x1.ddcfeap-91f, 0.0f, 0.0f, 0x1.6e340cp-79f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7b9856p-47f, 0x1.c5c5fcp-44f, 0x1.bf8552p-58f, 0.0f,
     0.0f, 0x1.7856dap-40f, 0.0f, 0.0f, 0x1.6894fcp-64f, 0.0f, 0.0f, 0.0f,
     0x1.967c7cp-79f, 0.0f, 0.0f, 0x1.425e48p-117f, 0x1.59dcbp-89f, 0x1.0a74b6p-80f,
     0x1.d048c4p-111f, 0x1.25ea42p-95f, 0x1.34af3ap-34f, 0x1.b112aap-119f,
     0x1.bb0702p-39f, 0x1.3308eep-106f, 0.0f, 0.0f, 0x1.a41d9cp-30f, 0x1.38d112p-1f,
     0x1.429cc4p-95f, 0.0f, 0x1.5a6784p-90f, 0x1.6a80fcp-44f, 0x1.9544b8p-119f, 0.0f,
     0x1.cdd99cp-46f, 0x1.1803c2p-95f, 0.0f, 0x1p0f, 0.0f, 0x1.3c23f6p-74f,
     0x1.70e2a4p-114f, 0x1.7070fcp-124f, 0.0f, 0x1.267baep-72f, 0x1.c607ccp-59f,
     0x1.29472p-46f, 0.0f, 0.0f, 0x1.bb5ac6p-20f, 0.0f, 0x1.3dd86ap-86f, 0.0f, 0.0f,
     0x1.f48ae4p-68f, 0.0f, 0x1.245fbap-63f, 0x1.f001d8p-32f, 0.0f, 0.0f,
     0x1.31f108p-112f, 0.0f, 0.0f, 0x1.d75c02p-73f, 0.0f, 0.0f, 0x1.82ab16p-40f,
     0x1.b98ebp-121f, 0x1.bb5f2ap-118f, 0.0f, 0x1.bc2316p-10f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.fe2c4ap-45f, 0x1.8d0974p-81f, 0.0f, 0x1.373e9cp-45f, 0.0f, 0x1p0f,
     0.0f, 0.0f, 0.0f, 0x1.f737a8p-12f, 0.0f, 0.0f, 0x1.adf772p-24f, 0.0f,
     0x1.def2cap-116f, 0x1.ba964p-81f, 0x1.db711ep-105f, 0x1.aee332p-5f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ad00aap-124f, 0.0f, 0x1.ce1226p-47f, 0x1.86348ep-105f,
     0x1.b83f7p-30f, 0x1.e9e0d4p-49f, 0.0f, 0.0f, 0x1.32cb6ap-118f, 0.0f, 0.0f,
     0x1.6ffd3ap-55f, 0x1.9d8ef2p-5f, 0x1.76c42ep-101f, 0x1.ff5386p-96f, 0.0f, 0.0f,
     0x1.048ddep-19f, 0x1.0a2186p-52f, 0.0f, 0.0f, 0x1.68e60ep-107f, 0.0f,
     0x1.2d033p-77f, 0.0f, 0.0f, 0x1.6d1032p-63f, 0x1.7f0498p-11f, 0x1.2a0092p-23f,
     0.0f, 0.0f, 0x1.b4b6eap-92f, 0x1.44f1dep-2f, 0x1.1c0d48p-91f, 0x1.35de26p-80f,
     0x1.30a69ep-77f, 0.0f, 0x1.162c3ap-110f, 0x1.84e366p-26f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f61e24p-13f, 0x1.c3f142p-58f, 0.0f, 0x1.f8afbcp-102f, 0.0f, 0.0f, 0.0f,
     0x1.e57148p-94f, 0x1.4c83ccp-45f, 0x1.266906p-43f, 0x1.d86a56p-28f, 0.0f, 0.0f,
     0x1.308938p-117f, 0.0f, 0.0f, 0x1.6f5764p-53f, 0x1.70921ap-8f, 0x1.542e9cp-106f,
     0.0f, 0.0f, 0x1.5677e6p-85f, 0x1.7be1ap-82f, 0.0f, 0x1.3e548ep-108f,
     0x1.a7e438p-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b4400cp-69f, 0.0f, 0x1.0f4a6ap-114f, 0.0f, 0x1.16931cp-64f, 0.0f,
     0x1.b6ff9ap-42f, 0x1.2f7928p-49f, 0.0f, 0x1.d3c29ap-88f, 0.0f, 0x1.f8aa8ap-80f,
     0x1.b681f8p-25f, 0x1.d6a8dap-47f, 0x1.95afbcp-14f, 0x1.ed9eeap-23f,
     0x1.714c3ap-38f, 0x1.f1b0dp-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.428e1p-58f,
     0x1.82f02p-64f, 0x1.0fbd4ap-42f, 0.0f, 0.0f, 0x1.e97ca4p-78f, 0.0f,
     0x1.63f9e2p-77f, 0.0f, 0x1.50e0ap-65f, 0.0f, 0.0f, 0x1.0f5b06p-39f, 0.0f, 0x1p0f,
     0.0f, 0.0f, 0x1.5027c8p-22f, 0x1.90eb7cp-11f, 0.0f, 0x1.3f27ep-99f, 0.0f,
     0x1.90d888p-116f, 0.0f, 0x1.6126fcp-28f, 0x1.d3f13ep-112f, 0.0f, 0x1.26234ap-10f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0f5672p-75f, 0x1.30c5b8p-70f, 0.0f,
     0x1.7bd674p-74f, 0.0f, 0.0f, 0x1.835378p-53f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4b6044p-80f, 0.0f, 0x1.c2b03ap-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.faa8aep-78f,
     0.0f, 0x1.3a0552p-24f, 0x1.bfde4p-113f, 0.0f, 0.0f, 0x1.5cd834p-112f, 0.0f,
     0x1.b6e28cp-91f, 0x1.af467cp-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.412572p-32f,
     0x1.a5736ap-121f, 0x1.806896p-31f, 0.0f, 0.0f, 0x1.439be6p-124f, 0.0f, 0.0f,
     0x1.23d602p-45f, 0.0f, 0.0f, 0x1.fdcbd2p-38f, 0.0f, 0x1.75f48ap-85f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a8aad4p-110f, 0.0f, 0x1.315abap-80f, 0x1.880158p-42f,
     0x1.7686c4p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.76529p-11f, 0x1.eac574p-69f, 0.0f,
     0x1.8a1b6ap-38f, 0.0f, 0x1.e21abap-101f, 0.0f, 0.0f, 0.0f, 0x1.a083fp-52f, 0.0f,
     0x1.f77854p-75f, 0x1.5c2752p-43f, 0.0f, 0.0f, 0x1.1eba42p-43f, 0x1.ddc8e2p-75f,
     0.0f, 0x1.843b3p-92f, 0.0f, 0x1.1e15cap-90f, 0.0f, 0x1.6ddbc6p-12f, 0.0f, 0.0f,
     0.0f, 0x1.5f0d42p-85f, 0x1.f4760ep-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dfa81ep-116f,
     0x1.8cfe0ap-50f, 0.0f, 0x1.4e016cp-52f, 0x1.41ad44p-29f, 0x1.59c82ap-50f, 0.0f,
     0x1.c2886ep-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.74874cp-99f, 0.0f, 0.0f,
     0x1.e5da22p-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.72721ap-100f, 0x1.6a41aap-26f,
     0x1.2ba3c8p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.516208p-53f, 0.0f, 0.0f, 0x1.880bb4p-80f, 0x1.8ee90ep-40f, 0x1.a5a85p-67f,
     0.0f, 0.0f, 0x1.113528p-90f, 0x1.33303ep-70f, 0.0f, 0.0f, 0.0f, 0x1.256b74p-87f,
     0.0f, 0.0f, 0.0f, 0x1.239a1cp-122f, 0.0f, 0x1.939accp-80f, 0.0f, 0.0f,
     0x1.b5e7e2p-49f, 0x1.e16692p-58f, 0.0f, 0.0f, 0x1.9afa82p-88f, 0x1.35ec46p-115f,
     0.0f, 0x1.a3a392p-53f, 0x1.8342f6p-21f, 0x1.58f222p-89f, 0.0f, 0x1.ea0de4p-101f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7e3232p-115f, 0x1.fdd04cp-27f, 0.0f,
     0.0f, 0x1.b6a11cp-96f, 0x1.9fc9a6p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3d0c3cp-29f,
     0.0f, 0.0f, 0.0f, 0x1.41d322p-92f, 0.0f, 0.0f, 0x1.a210c8p-81f, 0.0f,
     0x1.46d826p-73f, 0x1.719d84p-58f, 0x1.905256p-12f, 0.0f, 0x1.be74fep-34f, 0.0f,
     0x1.c4b246p-82f, 0.0f, 0x1.f7a678p-36f, 0.0f, 0x1.2e2652p-75f, 0.0f, 0.0f,
     0x1.fd39c2p-101f, 0.0f, 0x1.3ca7aep-35f, 0x1.bd3bf4p-33f, 0x1.2ebaf4p-15f, 0.0f,
     0x1.f2e012p-107f, 0.0f, 0.0f, 0x1.141bd4p-17f, 0.0f, 0x1.b78a32p-112f, 0.0f,
     0x1.a6150ep-81f, 0x1.31019cp-46f, 0.0f, 0.0f, 0x1.aaab5p-102f, 0.0f,
     0x1.54366ep-20f, 0x1.a19fb4p-35f, 0x1.a8b244p-88f, 0.0f, 0x1.3b2b24p-92f,
     0x1.6bcdf8p-28f, 0x1.e61d6p-83f, 0.0f, 0.0f, 0x1.5b6c78p-42f, 0x1.d165a2p-2f,
     0x1.3988bap-77f, 0.0f, 0x1.733e6p-51f, 0x1.4addaap-119f, 0.0f, 0x1.1d3bfcp-47f,
     0.0f, 0x1.3a0cc2p-101f, 0.0f, 0.0f, 0x1.01b77p-121f, 0.0f, 0x1.e9fd0ep-4f,
     0x1.7a52a8p-59f, 0x1.ece79cp-81f, 0x1.af8ac6p-3f, 0x1.55ea52p-30f,
     0x1.9ea57p-126f, 0x1.1a58e8p-85f, 0x1.c6107p-64f, 0.0f, 0x1.29306p-123f, 0.0f,
     0x1.3e639ep-52f, 0x1.56a7c4p-25f, 0x1.cdae84p-117f, 0.0f, 0x1.5cebe4p-115f, 0.0f,
     0x1.c80dacp-3f, 0.0f, 0x1.e9c9f2p-38f, 0.0f, 0x1.57ab82p-4f, 0x1.2ce298p-105f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7e6656p-93f, 0.0f, 0.0f, 0x1.81d88ep-102f, 0.0f,
     0.0f, 0x1.418c3ep-122f, 0x1.a84b34p-102f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d7ae78p-79f, 0x1.4287ccp-24f, 0.0f, 0.0f, 0x1.0ab7bap-70f, 0x1.396688p-45f,
     0.0f, 0x1.4e6676p-15f, 0.0f, 0.0f, 0x1.9e8f3cp-39f, 0x1.5b8ea8p-50f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.717e7cp-123f, 0x1.0273a8p-30f, 0.0f, 0x1.22262p-21f, 0.0f,
     0x1.313f08p-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ef29eep-16f, 0x1.7cfdbp-87f,
     0x1p0f, 0x1.7b356p-57f, 0.0f, 0.0f, 0x1.ef6c64p-106f, 0x1.d08c9cp-61f, 0.0f,
     0x1.f5d5acp-38f, 0.0f, 0.0f, 0x1.51f60cp-118f, 0x1.b6517ap-103f, 0.0f,
     0x1.734562p-100f, 0.0f, 0.0f, 0x1.45508ep-104f, 0.0f, 0.0f, 0x1.ec892p-93f,
     0x1.8f517p-116f, 0x1.188afcp-78f, 0x1.a53a46p-20f, 0x1.4bcb4cp-70f,
     0x1.e92ffp-2f, 0x1.949e28p-49f, 0.0f, 0.0f, 0.0f, 0x1.2c40cep-113f,
     0x1.653824p-112f, 0.0f, 0x1.81b644p-78f, 0x1.f5392cp-106f, 0.0f, 0.0f, 0.0f,
     0x1.8baf8ap-119f, 0x1.026a5cp-68f, 0x1.1456e4p-118f, 0x1.97eb08p-71f,
     0x1.df0f92p-78f, 0.0f, 0x1.0ef9aap-54f, 0.0f, 0x1.fdf5f4p-97f, 0.0f, 0.0f, 0.0f,
     0x1.c00b3ep-4f, 0x1.5fa952p-85f, 0x1.f1487ap-98f, 0x1.10f5f6p-6f,
     0x1.1be6b6p-90f, 0x1.87c224p-112f, 0.0f, 0.0f, 0.0f, 0x1.23ce98p-1f,
     0x1.4182f6p-106f, 0x1.41b9b4p-100f, 0x1.7eaab6p-66f, 0x1.53a5d4p-75f, 0.0f,
     0x1.f4e33ap-25f, 0x1.ed729p-93f, 0x1.75af6p-97f, 0x1.b7126ep-112f,
     0x1.97e138p-87f, 0x1.d2e824p-9f, 0x1.d4764cp-7f, 0.0f, 0x1.46153ep-99f,
     0x1.7806bp-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cc7834p-86f, 0.0f, 0x1.5cc354p-59f,
     0x1.1d0f0ep-63f, 0.0f, 0x1.7226a8p-18f, 0x1.239d88p-118f, 0.0f, 0x1.3d5b72p-80f,
     0.0f, 0x1.10bffap-72f, 0.0f, 0x1.d1b17p-91f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b7bcb6p-98f, 0.0f, 0x1.26b28ep-99f, 0.0f, 0x1.6c012ep-59f, 0.0f,
     0x1.865ffcp-121f, 0.0f, 0x1.a322b8p-125f, 0x1.14f9fap-119f, 0.0f, 0.0f,
     0x1.6d2d86p-59f, 0.0f, 0.0f, 0x1.657adep-31f, 0x1.97ce54p-6f, 0x1.169474p-28f,
     0.0f, 0.0f, 0x1.b94636p-4f, 0x1.c89fep-123f, 0x1p0f, 0x1.2213f4p-9f, 0.0f, 0.0f,
     0x1.7249bep-75f, 0.0f, 0x1.d5794ap-21f, 0x1.59f442p-3f, 0.0f, 0x1.c26564p-41f,
     0.0f, 0x1.cebc1cp-30f, 0x1.43175ap-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6613b4p-43f, 0.0f, 0x1.0be218p-109f, 0x1.a49504p-113f, 0.0f, 0x1.2fffd6p-49f,
     0x1.1c7b8ap-65f, 0x1.fde9a2p-88f, 0x1.3747a6p-88f, 0x1.9aeed8p-60f,
     0x1.8b63f2p-84f, 0.0f, 0x1.069b1p-1f, 0.0f, 0x1.d5f8fap-100f, 0.0f,
     0x1.6042ep-100f, 0x1.83334ep-51f, 0x1.d5ab22p-125f, 0.0f, 0x1.75ae3p-29f, 0.0f,
     0x1.400494p-86f, 0x1.9ec29ep-60f, 0.0f, 0.0f, 0x1.851b8ap-106f, 0.0f,
     0x1.984efcp-119f, 0x1.32d63cp-20f, 0x1.13ce7ap-23f, 0.0f, 0x1.feaa6p-74f,
     0x1.6d653ep-80f, 0.0f, 0.0f, 0x1.5781b2p-36f, 0x1.21ad5p-121f, 0.0f,
     0x1.06cc88p-65f, 0x1.aa33c8p-24f, 0x1.9a1be8p-120f, 0.0f, 0x1.c6106ep-111f, 0.0f,
     0x1.0f8fdap-43f, 0.0f, 0x1.4a4d2ap-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.58fc74p-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e0a666p-15f, 0x1.d943ep-28f,
     0.0f, 0.0f, 0x1.9cf6f4p-30f, 0x1.53e324p-53f, 0.0f, 0.0f, 0.0f, 0x1.5a2f44p-3f,
     0.0f, 0x1.149dccp-99f, 0.0f, 0.0f, 0.0f, 0x1.79a75cp-101f, 0x1.0e199cp-40f,
     0x1.2dd786p-101f, 0x1.c64afep-25f, 0x1.b7a39p-111f, 0x1.c9b4cp-120f,
     0x1.9bff2cp-112f, 0x1.60dc0cp-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.425568p-114f,
     0.0f, 0x1.6165cep-67f, 0x1.12185ap-71f, 0x1.7d5688p-51f, 0x1.b99234p-33f,
     0x1.1227bp-72f, 0x1.bef156p-48f, 0x1.ff5ba6p-23f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.707abep-13f, 0x1.ffed0cp-86f, 0.0f, 0x1.42c3d8p-88f, 0x1.b02182p-81f, 0.0f,
     0x1.0d1856p-6f, 0.0f, 0x1.7eecdap-68f, 0x1.084772p-77f, 0.0f, 0x1.cad3a4p-65f,
     0x1.ab298ep-112f, 0.0f, 0.0f, 0x1.ba01ep-18f, 0x1.61c068p-97f, 0.0f,
     0x1.e9a3bap-12f, 0.0f, 0.0f, 0.0f, 0x1.9239bp-6f, 0x1.6be55ap-64f,
     0x1.b7e858p-121f, 0.0f, 0x1.8f7ed2p-61f, 0.0f, 0x1.cc56cp-13f, 0.0f,
     0x1.6d322ep-109f, 0x1.90adc2p-101f, 0.0f, 0x1.baf562p-22f, 0x1.e639fp-32f, 0.0f,
     0x1.70e02ep-33f, 0.0f, 0x1.ae2a3ep-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dcb75ap-36f,
     0x1.d386b8p-67f, 0x1.00d1bp-72f, 0.0f, 0.0f, 0x1.030af8p-86f, 0x1.11ea32p-78f,
     0x1.1f0c72p-6f, 0.0f, 0x1.01cbf2p-109f, 0x1.8d88a4p-105f, 0x1.028586p-51f, 0.0f,
     0x1.03587ap-58f, 0x1.062c16p-39f, 0x1.94e70cp-61f, 0x1.83d1cp-114f,
     0x1.1f70dap-121f, 0.0f, 0x1.d80e1ep-115f, 0.0f, 0.0f, 0.0f, 0x1.f772cap-72f,
     0x1.08aa3ap-120f, 0x1.c26688p-27f, 0x1.bd520ep-20f, 0x1.6f12eep-22f,
     0x1.3edc54p-35f, 0.0f, 0.0f, 0.0f, 0x1.8164f6p-74f
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
            tmp1 = Sleef_asinf4_u10kvx(tmp0);
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
    printf("Sleef_asinf4_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_asinf4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
