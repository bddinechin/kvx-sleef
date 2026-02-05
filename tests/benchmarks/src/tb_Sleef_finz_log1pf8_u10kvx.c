/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_log1pf8_u10kvx.c --function \
 *     Sleef_finz_log1pf8_u10kvx --headers sleef.h,ml_support_lib.h \
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
     0x1.c918a6p-116f, 0x1.9faef6p-65f, 0x1.dc9606p-58f, 0x1.24e52ep-51f,
     0x1.474744p-106f, 0.0f, 0x1.0cd358p-8f, 0.0f, 0.0f, 0.0f, 0x1.a73d4ap-74f,
     0x1.b135b2p-51f, 0x1.99c1f2p-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.84f1f4p-12f,
     0.0f, 0x1.c7b7e6p-24f, 0.0f, 0x1.af0abcp-114f, 0x1.87f374p-23f, 0x1.20b5a8p-113f,
     0.0f, 0x1.87db02p-83f, 0.0f, 0x1.baae7p-71f, 0.0f, 0x1.3b75b4p-118f, 0.0f, 0.0f,
     0.0f, 0x1.00bf3p-69f, 0.0f, 0x1.1a7e82p-58f, 0.0f, 0.0f, 0.0f, 0x1.34a4cap-104f,
     0.0f, 0x1.95a75ap-23f, 0.0f, 0.0f, 0x1.3511dep-68f, 0.0f, 0.0f, 0x1.733316p-33f,
     0x1.41802ep-90f, 0x1.348872p-101f, 0x1.c18e46p-89f, 0x1.6ff02cp-114f, 0.0f, 0.0f,
     0x1.5e899ap-69f, 0x1.ad02e6p-65f, 0x1.104fb4p-70f, 0x1.33f54cp-115f, 0.0f,
     0x1.78621p-84f, 0x1.58d6f8p-100f, 0.0f, 0.0f, 0x1.f27352p-6f, 0.0f,
     0x1.a6eaa8p-49f, 0.0f, 0x1.554548p-18f, 0x1.3c1dep-119f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2533fcp-119f, 0.0f, 0x1.40dbf2p-120f, 0.0f, 0x1.cf0e74p-40f, 0x1.c7c978p-82f,
     0.0f, 0.0f, 0x1.d61a58p-44f, 0x1.2024f8p-107f, 0.0f, 0x1.a0141p-28f,
     0x1.1dc8a8p-71f, 0.0f, 0x1.cc4c9p-121f, 0.0f, 0x1.8b389p-61f, 0x1.d2402ap-22f,
     0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2095dap-79f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f973c6p-25f, 0x1.5edf4p-26f, 0x1.763882p-103f, 0.0f,
     0x1.8e6e9ep-97f, 0x1.bfcf92p-26f, 0x1.18e49ep-20f, 0.0f, 0x1.a5843p-117f,
     0x1.068166p-70f, 0x1.0a0414p-87f, 0.0f, 0.0f, 0x1.1d3ba2p-29f, 0x1.c59894p-78f,
     0.0f, 0.0f, 0x1.0b4c84p-105f, 0x1.5dbe48p-62f, 0.0f, 0x1.2b838ap-106f,
     0x1.28d022p-21f, 0x1.fff01ap-90f, 0.0f, 0x1.df729cp-119f, 0.0f, 0x1.98b866p-67f,
     0x1.f85a56p-90f, 0x1.5fe0fep-84f, 0.0f, 0.0f, 0x1.20a89ep-123f, 0x1.42fd56p-6f,
     0.0f, 0.0f, 0x1.63ea5p-44f, 0x1.935a08p-42f, 0.0f, 0.0f, 0x1.d3b21cp-62f,
     0x1.91e5cap-26f, 0x1.236674p-4f, 0.0f, 0.0f, 0x1.9eaf58p-27f, 0.0f,
     0x1.d162f2p-89f, 0x1.c3121p-122f, 0x1.17641ep-109f, 0x1.8943c4p-57f, 0.0f, 0.0f,
     0x1.627fd2p-73f, 0.0f, 0x1.67befcp-39f, 0.0f, 0.0f, 0x1.2df2e6p-106f,
     0x1.652aacp-40f, 0.0f, 0x1.126cd2p-30f, 0.0f, 0x1.d8beaap-26f, 0.0f,
     0x1.980d46p-86f, 0x1.d35a1ap-51f, 0.0f, 0x1.bcb59ap-50f, 0.0f, 0x1.fd2968p-75f,
     0x1.15ce56p-11f, 0x1.703692p-89f, 0x1.98e5b4p-115f, 0.0f, 0.0f, 0x1.bf376ap-17f,
     0x1.834406p-11f, 0x1.19884ap-125f, 0x1.16e972p-64f, 0x1.3776e2p-82f, 0.0f,
     0x1.2be888p-118f, 0x1.5addcep-69f, 0x1.7f8826p-103f, 0x1.ba0486p-44f, 0.0f, 0.0f,
     0.0f, 0x1.6f93e8p-66f, 0.0f, 0.0f, 0x1.3573bp-19f, 0x1.274616p-57f,
     0x1.cbec5ep-35f, 0.0f, 0.0f, 0x1.ac701ep-22f, 0.0f, 0x1.6e5034p-39f, 0.0f, 0.0f,
     0x1.383adep-112f, 0.0f, 0x1.d1aa18p-95f, 0.0f, 0x1.cdec8ap-29f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.eb057ep-93f, 0x1.b7ea2p-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c6844ap-20f, 0.0f, 0x1.7732ep-112f, 0x1.ca986ep-7f, 0x1.03a06p-21f,
     0x1.bde388p-92f, 0x1.325fep-21f, 0.0f, 0x1.1f6282p-68f, 0x1.5d0ff6p-91f,
     0x1.ca1332p-59f, 0.0f, 0x1.1c4e08p-40f, 0.0f, 0.0f, 0.0f, 0x1.1adee4p-122f, 0.0f,
     0x1.2df05ap-24f, 0x1.e2f74ap-93f, 0x1.70b4bp-10f, 0x1.abb20cp-94f,
     0x1.ad530cp-24f, 0x1.f51508p-43f, 0x1.1146c2p-119f, 0x1.3d911ep-16f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.5e80eep-97f, 0x1.7cad34p-101f, 0.0f, 0.0f, 0x1.aa9f2ep-59f,
     0.0f, 0.0f, 0x1.c76cacp-108f, 0.0f, 0x1.4fa538p-69f, 0x1.e454ep-109f,
     0x1.638772p-59f, 0x1.c885b8p-59f, 0.0f, 0x1.30ca16p-54f, 0x1.c514d2p-7f,
     0x1.22b664p-55f, 0x1.e9317p-84f, 0x1.9ef192p-61f, 0.0f, 0x1.21bad4p-65f,
     0x1.c7ad94p-35f, 0x1.b66e7p-113f, 0x1.4b63p-70f, 0.0f, 0.0f, 0x1.9f01fap-66f,
     0x1.f12cc6p-18f, 0x1.1978ap-54f, 0x1.12262ap-38f, 0x1.bf5e34p-80f, 0.0f,
     0x1.d88bf6p-47f, 0x1.67783ep-84f, 0.0f, 0.0f, 0x1.83493ep-56f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.be06acp-17f, 0x1.63bb2ap-32f, 0x1.1407b4p-53f, 0x1.cb811ap-112f, 0.0f,
     0.0f, 0.0f, 0x1.45fc94p-110f, 0.0f, 0x1.606fbcp-72f, 0.0f, 0.0f, 0.0f,
     0x1.7cfb9cp-32f, 0.0f, 0x1.4c0f5cp-30f, 0x1.36e1f6p-7f, 0x1.cb646ap-96f,
     0x1.0b317ap-93f, 0x1.10f776p-103f, 0.0f, 0.0f, 0x1.34a5fep-27f, 0.0f,
     0x1.a12bfp-31f, 0x1.3af608p-104f, 0x1.99c83cp-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.073e32p-108f, 0.0f, 0x1.63bf94p-91f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ff7b42p-75f, 0x1.0912dp-84f, 0x1.321c26p-37f, 0x1.b61dacp-49f, 0.0f, 0.0f,
     0x1.12615ap-64f, 0.0f, 0x1.3033aep-97f, 0x1.8e252p-123f, 0.0f, 0.0f,
     0x1.4d7f6p-14f, 0.0f, 0.0f, 0x1.af4efcp-114f, 0x1.ddee4ep-44f, 0.0f, 0.0f,
     0x1.44b106p-77f, 0x1.8d1a78p-108f, 0x1.9ea544p-123f, 0x1.6c650cp-68f, 0.0f,
     0x1.494c04p-4f, 0x1.6c99fcp-69f, 0x1.501cecp-18f, 0x1.9bd5fap-104f, 0.0f, 0.0f,
     0x1.d1162ep-76f, 0x1.316812p-44f, 0.0f, 0x1.9ceabap-18f, 0.0f, 0x1.8650b4p-89f,
     0x1.c5f2d6p-2f, 0.0f, 0x1.31fa96p-27f, 0x1.1227eap-124f, 0x1.b268cap-125f, 0.0f,
     0x1.e4ef26p-48f, 0x1.76fff4p-117f, 0x1.6ddbfap-100f, 0.0f, 0x1.85485ep-22f,
     0x1.778e1ep-120f, 0.0f, 0x1.f0f0c4p-42f, 0.0f, 0.0f, 0x1.147354p-91f, 0.0f, 0.0f,
     0.0f, 0x1.627e32p-85f, 0.0f, 0.0f, 0.0f, 0x1.0c711ep-19f, 0.0f, 0x1.283dd6p-121f,
     0.0f, 0x1.74a328p-57f, 0.0f, 0x1.31cbf4p-66f, 0x1.0953e2p-35f, 0.0f, 0.0f,
     0x1.36e6ccp-48f, 0.0f, 0x1.5c900ap-13f, 0.0f, 0.0f, 0x1.4d4e46p-49f, 0.0f,
     0x1.a847dp-71f, 0x1.e02cdep-96f, 0.0f, 0.0f, 0x1.8ec812p-7f, 0x1.f9775p-121f,
     0.0f, 0x1.2bceb6p-61f, 0x1.a19e8ap-34f, 0x1.2bb4c6p-122f, 0x1.ca47eap-62f,
     0x1.ce8d7p-109f, 0.0f, 0x1.78534ap-51f, 0.0f, 0x1.d5ed14p-7f, 0x1.55e7cp-8f,
     0.0f, 0.0f, 0.0f, 0x1.3d88f4p-92f, 0x1.5983d4p-17f, 0.0f, 0x1.fc88b4p-20f,
     0x1.9505dcp-103f, 0x1.bb7782p-77f, 0.0f, 0.0f, 0.0f, 0x1.136c3p-39f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.09be14p-87f, 0x1.cc7fe6p-34f, 0.0f, 0.0f, 0.0f,
     0x1.15693p-11f, 0x1.513a4p-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6be34p-47f, 0.0f,
     0x1.7ee704p-11f, 0x1.458daap-100f, 0x1.ca26a8p-77f, 0x1.91f078p-32f,
     0x1.8fe9ap-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.45799p-58f, 0.0f,
     0x1.7c76b2p-48f, 0.0f, 0.0f, 0x1.b479ccp-54f, 0.0f, 0x1.155334p-71f, 0.0f,
     0x1.e11636p-21f, 0x1.dbcd6ep-55f, 0x1.e5ab58p-40f, 0.0f, 0.0f, 0x1.757c62p-11f,
     0.0f, 0.0f, 0.0f, 0x1.e12fep-44f, 0x1.25b5f6p-92f, 0.0f, 0.0f, 0.0f,
     0x1.46e44p-69f, 0x1.7610e4p-99f, 0x1.3323a2p-62f, 0.0f, 0.0f, 0x1.1a163ap-123f,
     0.0f, 0x1.e6bb12p-26f, 0.0f, 0x1.21b26p-39f, 0x1.777488p-52f, 0.0f,
     0x1.b1960cp-95f, 0.0f, 0x1.809038p-116f, 0x1.d16512p-58f, 0x1.26b456p-45f,
     0x1.bf2554p-59f, 0x1.c87684p-9f, 0x1.81215ep-20f, 0.0f, 0x1.ee51b6p-31f,
     0x1.b93b52p-85f, 0x1p0f, 0x1.595a8ap-25f, 0x1.b2e8f8p-79f, 0x1.bc5788p-91f, 0.0f,
     0x1.6c0182p-33f, 0.0f, 0x1.e35b04p-86f, 0x1.dc2bdcp-96f, 0.0f, 0.0f,
     0x1.7baf4ap-99f, 0.0f, 0x1.64bf02p-22f, 0x1.8fe754p-69f, 0.0f, 0x1.e1677ep-79f,
     0.0f, 0x1.d9497p-5f, 0x1.91cf16p-31f, 0x1.86451cp-47f, 0x1.bd219ap-58f, 0.0f,
     0x1.5282bap-107f, 0x1.4903cp-88f, 0.0f, 0x1.561b3ap-52f, 0x1.a4bf84p-81f, 0.0f,
     0.0f, 0.0f, 0x1.9d7134p-86f, 0x1.d22546p-49f, 0x1.86391cp-114f, 0.0f,
     0x1.9fcb56p-67f, 0x1.443a3cp-56f, 0.0f, 0.0f, 0x1.7fa514p-56f, 0x1.19467ep-71f,
     0.0f, 0.0f, 0x1.6c8234p-66f, 0x1.b9b1d8p-104f, 0x1.5e6188p-63f, 0x1.0f38d6p-81f,
     0.0f, 0x1.79ec86p-126f, 0x1.49a3ep-82f, 0.0f, 0x1.7e573p-75f, 0.0f, 0.0f,
     0x1.5507cap-56f, 0x1.516492p-70f, 0x1.b3b59ep-108f, 0.0f, 0.0f, 0x1.a1124ap-85f,
     0x1.141d7cp-10f, 0.0f, 0x1.44c456p-18f, 0x1.5b429ep-34f, 0.0f, 0.0f,
     0x1.4b704ap-22f, 0x1.4e3e54p-81f, 0x1.a8ec46p-47f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bd2b26p-86f, 0x1.2b009cp-123f, 0x1.977464p-101f, 0.0f, 0.0f, 0x1.c0cb8ep-65f,
     0.0f, 0x1.afb8eap-7f, 0x1.e95d66p-48f, 0x1.3d636p-109f, 0x1.8a73cep-37f, 0.0f,
     0.0f, 0.0f, 0x1.68b8dep-47f, 0.0f, 0x1.8938dep-95f, 0.0f, 0.0f, 0.0f,
     0x1.6d1bfap-19f, 0.0f, 0x1.03b552p-45f, 0x1.c78c7p-27f, 0x1.1feaeep-19f, 0.0f,
     0x1.0bd658p-88f, 0.0f, 0.0f, 0x1.56a606p-120f, 0.0f, 0.0f, 0x1.a2e846p-81f, 0.0f,
     0x1.4858cp-70f, 0.0f, 0x1.a3b35ep-124f, 0.0f, 0.0f, 0x1.65daeep-104f, 0.0f, 0.0f,
     0x1.76d736p-125f, 0x1.fbc31cp-39f, 0.0f, 0x1.68ac4cp-34f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f4b024p-112f, 0x1.17f21ap-39f, 0.0f, 0x1.8db4f2p-36f, 0.0f, 0.0f,
     0.0f, 0x1.63363ep-59f, 0x1.accdf4p-95f, 0.0f, 0x1.6b8a74p-60f, 0.0f, 0.0f,
     0x1.a317dp-39f, 0.0f, 0x1.7eb154p-124f, 0.0f, 0x1.2afed4p-92f, 0.0f,
     0x1.5df204p-39f, 0.0f, 0x1.5bca88p-18f, 0x1.ae243ap-62f, 0.0f, 0x1.1e9d54p-65f,
     0x1.fdff34p-108f, 0.0f, 0x1.852292p-81f, 0.0f, 0.0f, 0x1.825762p-40f,
     0x1.f0797ap-69f, 0.0f, 0.0f, 0x1.4a7332p-62f, 0.0f, 0.0f, 0x1.edde42p-17f,
     0x1.f78552p-13f, 0x1.073584p-103f, 0x1.63d42p-18f, 0x1.6104bp-96f, 0.0f, 0.0f,
     0.0f, 0x1.94dc36p-37f, 0x1.65265cp-94f, 0x1.e6acc2p-104f, 0.0f, 0.0f, 0.0f,
     0x1.b8b4b8p-9f, 0x1.7b3956p-35f, 0.0f, 0.0f, 0x1.3e2392p-82f, 0x1.b3992ap-44f,
     0x1.01ea44p-14f, 0x1.82930ep-75f, 0x1.722956p-14f, 0.0f, 0x1.1d1ce4p-91f,
     0x1.8052ap-75f, 0x1.4f717ep-113f, 0x1.d2d39cp-123f, 0x1.140874p-54f, 0.0f, 0.0f,
     0.0f, 0x1.f6298p-2f, 0x1.bdaea6p-39f, 0.0f, 0x1.742adp-83f, 0x1.a6d278p-11f,
     0.0f, 0.0f, 0x1.a257d6p-96f, 0x1.f85858p-61f, 0x1.b4d394p-62f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.7f66b2p-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.732fc6p-66f,
     0x1.4ecd3ap-11f, 0.0f, 0x1.c93d48p-86f, 0x1.80c6fap-64f, 0.0f, 0.0f, 0.0f,
     0x1.fb797p-23f, 0.0f, 0.0f, 0.0f, 0x1.538dacp-111f, 0x1.434de4p-32f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.3f0a48p-101f, 0.0f, 0.0f, 0x1.15493p-63f, 0.0f, 0x1.6c4ef8p-39f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6bee46p-22f, 0x1.7040c8p-96f, 0.0f,
     0x1.9492fcp-59f, 0x1.6e5102p-2f, 0.0f, 0x1.e058fap-118f, 0x1.83927ap-95f, 0.0f,
     0x1.1da878p-37f, 0.0f, 0x1.4320b6p-99f, 0x1.79b56ap-75f, 0.0f, 0.0f,
     0x1.9cef52p-112f, 0.0f, 0x1.8521a6p-86f, 0x1.113dbap-95f, 0.0f, 0.0f,
     0x1.c2b3f2p-8f, 0.0f, 0.0f, 0x1.c9ef6cp-82f, 0x1p0f, 0x1.3bee26p-53f, 0.0f,
     0x1.8ac8cp-119f, 0.0f, 0.0f, 0x1p0f, 0x1.44e3d2p-53f, 0x1.defd96p-77f,
     0x1.23a0acp-84f, 0x1.54e7f4p-101f, 0.0f, 0x1.f4affap-108f, 0.0f, 0x1.57d512p-16f,
     0x1.4518c2p-5f, 0.0f, 0.0f, 0.0f, 0x1.d4c69ep-73f, 0.0f, 0x1.65331cp-118f,
     0x1.2de636p-82f, 0.0f, 0.0f, 0.0f, 0x1.8edff2p-15f, 0.0f, 0.0f, 0x1.2ce364p-105f,
     0.0f, 0x1.c17a26p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.08c3d6p-91f, 0.0f,
     0x1.f6e46cp-104f, 0.0f, 0.0f, 0.0f, 0x1.7e2d64p-77f, 0x1.9fd2cap-96f, 0.0f,
     0x1.00bf2ep-89f, 0x1.18265ap-44f, 0x1.957b4p-84f, 0.0f, 0x1.73ffacp-30f,
     0x1.2353c8p-90f, 0x1.97e4f6p-91f, 0x1.d66de8p-50f, 0x1.53d1c4p-63f,
     0x1.c8e282p-18f, 0.0f, 0.0f, 0.0f, 0x1.4aa37ep-70f, 0.0f, 0.0f, 0.0f,
     0x1.f7da7p-49f, 0.0f, 0.0f, 0.0f, 0x1.e54922p-40f, 0x1.9542aap-54f, 0.0f, 0.0f,
     0x1.85d6f8p-45f, 0.0f, 0x1.b034ap-76f, 0x1.fc0c2ap-108f, 0.0f, 0.0f,
     0x1.b8f136p-124f, 0.0f, 0x1.2edc42p-7f, 0x1.6f83ccp-102f, 0x1.27b43cp-54f,
     0x1.990ea6p-106f, 0.0f, 0x1.862a54p-56f, 0x1.4ed0c8p-16f, 0x1.bddb4ap-39f,
     0x1.bb674cp-97f, 0.0f, 0.0f, 0.0f, 0x1.fcf96ap-59f, 0.0f, 0x1.846578p-74f, 0.0f,
     0.0f, 0x1.324bd6p-39f, 0.0f, 0.0f, 0x1.96af94p-49f, 0.0f, 0.0f, 0x1.8b35eep-25f,
     0x1.a39034p-82f, 0.0f, 0.0f, 0.0f, 0x1.588506p-1f, 0x1.4a5778p-76f,
     0x1.cd220ap-58f, 0x1.65fe06p-58f, 0x1.6c8ac2p-30f, 0x1.b7daf6p-90f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3d6cc2p-57f, 0.0f, 0.0f, 0x1.b8a038p-32f,
     0x1.662ddap-23f, 0x1.14c98cp-126f, 0x1.2952c8p-94f, 0x1.8383e2p-44f, 0.0f,
     0x1.df3cd6p-96f, 0.0f, 0.0f, 0x1.b0482ep-79f, 0.0f, 0.0f, 0x1.6b01fcp-3f, 0.0f,
     0x1.18f02p-17f, 0x1.752b78p-51f, 0x1.0b7ae6p-87f, 0.0f, 0x1.f27e18p-57f,
     0x1.03d638p-35f, 0x1.89fafcp-72f, 0.0f, 0x1.8f75e6p-84f, 0x1.94431p-109f, 0.0f,
     0.0f, 0x1.697a3p-60f, 0.0f, 0x1.ff1a8cp-99f, 0.0f, 0.0f, 0.0f, 0x1.b9afb4p-126f,
     0.0f, 0.0f, 0x1.55e73ep-61f, 0x1.27f9a4p-78f, 0.0f, 0x1.099f9cp-32f,
     0x1.b49f2ep-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ea8f6p-37f, 0x1.6f9b2p-57f,
     0.0f, 0x1.44f3ccp-116f, 0x1.39e376p-72f, 0x1.38390cp-34f, 0x1.20c11ep-79f,
     0x1.00f578p-122f, 0x1.461da2p-50f, 0.0f, 0x1.66738p-55f, 0.0f, 0.0f,
     0x1.2f6916p-120f, 0.0f, 0.0f, 0x1.ebede8p-103f, 0x1.f2ea3cp-100f, 0.0f, 0.0f,
     0x1.67edcap-97f, 0.0f, 0.0f, 0x1.7a3c74p-86f, 0.0f, 0x1.bcb446p-44f, 0.0f, 0.0f,
     0x1.e6db46p-92f, 0x1.2226b4p-125f, 0.0f, 0.0f, 0.0f, 0x1.7ebbcap-49f,
     0x1.10f192p-69f, 0x1.534eecp-99f, 0x1.28631cp-36f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1dc9e2p-69f, 0x1.66507p-123f, 0x1.e4d22p-94f, 0.0f, 0x1.58fa48p-63f,
     0x1.d2c11ap-94f, 0x1.6b45d4p-36f, 0.0f, 0.0f, 0x1.0d7726p-82f, 0.0f, 0.0f,
     0x1.5be0fap-121f, 0x1.57892p-119f
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
            tmp1 = Sleef_finz_log1pf8_u10kvx(tmp0);
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
    printf("Sleef_finz_log1pf8_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_finz_log1pf8_u10kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
