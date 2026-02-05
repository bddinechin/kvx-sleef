/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_lgammaf8_u10kvx.c --function \
 *     Sleef_finz_lgammaf8_u10kvx --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0.0f, 0x1.25158ap-29f, 0x1.9824c8p-43f, 0.0f, 0x1.97d4eep-57f,
     0x1.2e7db2p-47f, 0.0f, 0.0f, 0x1.5cd05cp-80f, 0x1.22b318p-95f, 0x1.2bc6cap-111f,
     0.0f, 0.0f, 0.0f, 0x1.0e8988p-45f, 0.0f, 0.0f, 0x1.2b63fep-39f, 0.0f, 0.0f,
     0x1.b93e82p-117f, 0x1.d909bp-87f, 0.0f, 0.0f, 0x1.a5ab5ep-39f, 0x1.ac5cdcp-68f,
     0.0f, 0x1.90e8fp-36f, 0x1.1538dep-13f, 0.0f, 0.0f, 0x1.82cf4ap-16f, 0.0f, 0x1p0f,
     0.0f, 0x1.22c2aap-91f, 0.0f, 0.0f, 0x1.9a228ap-14f, 0x1.adf55ep-118f,
     0x1.5dc6bp-3f, 0x1.77f046p-59f, 0.0f, 0.0f, 0x1.9179p-112f, 0.0f, 0.0f, 0.0f,
     0x1.05d138p-113f, 0x1.92bf2cp-63f, 0.0f, 0x1.ed5dfcp-90f, 0.0f, 0x1.f99e76p-4f,
     0.0f, 0x1.10682ep-10f, 0x1.63b574p-102f, 0x1.1283aap-15f, 0x1.9ef74cp-55f, 0.0f,
     0.0f, 0.0f, 0x1.42c044p-70f, 0x1.1d4182p-7f, 0.0f, 0.0f, 0x1.f39bb6p-1f, 0.0f,
     0.0f, 0x1.5a35e4p-60f, 0x1.1b3916p-64f, 0x1.c3ad84p-111f, 0x1.6154a8p-44f,
     0x1.585a84p-68f, 0x1.41086p-7f, 0x1.41d6fap-57f, 0.0f, 0.0f, 0x1.40504ep-101f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c95b72p-125f,
     0x1.a1bb8p-55f, 0x1.94027p-51f, 0x1.d33092p-25f, 0.0f, 0x1.bf7f1p-75f, 0.0f,
     0x1.5ae966p-71f, 0x1.961acp-115f, 0x1.43b1fp-61f, 0x1.af5082p-33f, 0.0f,
     0x1.1056e6p-26f, 0.0f, 0x1.17c44ap-37f, 0x1.21732p-115f, 0.0f, 0x1.e2ee1cp-12f,
     0x1.2599c8p-61f, 0.0f, 0.0f, 0x1.5ebca6p-12f, 0x1.adb846p-103f, 0.0f,
     0x1.25400ep-88f, 0.0f, 0x1.d7e7bap-88f, 0x1.174bp-56f, 0.0f, 0x1.c06008p-5f,
     0.0f, 0x1.7f7d7p-9f, 0.0f, 0x1.0750e4p-49f, 0x1.fcc1d4p-107f, 0.0f, 0.0f,
     0x1.dad2c4p-74f, 0.0f, 0.0f, 0x1.7ee9fcp-107f, 0.0f, 0.0f, 0x1.395e4p-116f, 0.0f,
     0.0f, 0x1.d47a7ep-7f, 0.0f, 0x1.b2e804p-73f, 0x1.bbe176p-19f, 0x1.66499ap-93f,
     0x1.362032p-64f, 0.0f, 0x1.e70b3ap-96f, 0x1.5ee494p-101f, 0.0f, 0.0f,
     0x1.cb93d2p-8f, 0x1.f4f444p-40f, 0.0f, 0.0f, 0x1.6d88c4p-108f, 0x1.a8b27p-57f,
     0.0f, 0.0f, 0.0f, 0x1.d67fdcp-14f, 0.0f, 0x1.642906p-79f, 0x1.52c48ep-75f,
     0x1.cc7e28p-25f, 0x1.0a0696p-83f, 0x1.7972f2p-60f, 0.0f, 0x1.251c2p-98f, 0.0f,
     0.0f, 0.0f, 0x1.54e666p-3f, 0.0f, 0.0f, 0x1.cd979p-68f, 0x1.b3afe6p-65f,
     0x1.7eb838p-94f, 0x1.bbcb86p-92f, 0.0f, 0x1.38fc88p-115f, 0.0f, 0.0f,
     0x1.bda2ccp-105f, 0.0f, 0.0f, 0x1.19acdap-62f, 0x1.2f4cb2p-80f, 0x1.266bfep-45f,
     0.0f, 0x1.0be2f2p-23f, 0.0f, 0x1.f836bcp-39f, 0x1.67286ap-107f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.d99c88p-119f, 0x1.ca2188p-41f, 0x1.5d56dp-90f, 0x1.301dfp-86f, 0.0f,
     0.0f, 0x1.17046cp-80f, 0x1.eb6392p-100f, 0.0f, 0x1.f826a8p-66f, 0.0f,
     0x1.b9dd84p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c1937ap-90f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5dcf7cp-46f, 0.0f, 0.0f, 0x1.59cab2p-54f, 0x1.4f18d4p-8f, 0x1.28062p-10f,
     0.0f, 0x1.7cb316p-110f, 0.0f, 0x1.a6f822p-61f, 0x1.93f012p-71f, 0.0f, 0.0f, 0.0f,
     0x1.9c103p-71f, 0.0f, 0x1.bbc05ap-75f, 0x1.4dc6cp-9f, 0.0f, 0x1.9195a6p-19f,
     0x1.b3a922p-6f, 0.0f, 0x1.bcb4eap-77f, 0x1.380d34p-87f, 0x1.c82fdp-13f,
     0x1.3b9de8p-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f00e5cp-125f, 0x1.aa7088p-36f, 0x1.5db674p-23f, 0.0f, 0x1.20875ep-12f,
     0x1.3257f2p-123f, 0x1.12732p-114f, 0.0f, 0x1.c629eap-69f, 0x1.219c9p-67f,
     0x1.6a0e02p-58f, 0x1.3de398p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e6e61cp-51f,
     0x1.db2394p-74f, 0.0f, 0.0f, 0x1.053dccp-1f, 0x1.d62a6ep-90f, 0.0f, 0.0f,
     0x1.582c1p-115f, 0.0f, 0.0f, 0x1.fe0a36p-122f, 0.0f, 0.0f, 0x1.32cd42p-111f,
     0.0f, 0.0f, 0.0f, 0x1.82db2ap-93f, 0x1.e7fb58p-19f, 0x1.55c774p-41f, 0.0f,
     0x1.47b712p-107f, 0x1.54fe98p-118f, 0x1.cfa00cp-14f, 0.0f, 0.0f, 0x1.d9d28cp-88f,
     0x1.ff525cp-114f, 0x1.603a7ep-3f, 0x1.6d6606p-114f, 0.0f, 0x1.c087d6p-95f, 0.0f,
     0x1.48fa3ap-101f, 0.0f, 0.0f, 0x1.24a29p-70f, 0.0f, 0x1.a3544ep-67f, 0.0f,
     0x1.a7c798p-51f, 0x1.76d646p-107f, 0.0f, 0x1.a4824p-98f, 0.0f, 0x1.2b5a0ep-72f,
     0x1.e9077cp-102f, 0x1.286cd2p-58f, 0.0f, 0.0f, 0x1.44601cp-109f, 0x1.92a55ep-20f,
     0.0f, 0x1.d6119p-49f, 0x1p0f, 0.0f, 0.0f, 0x1.f934d4p-38f, 0.0f, 0x1.7e05ecp-73f,
     0.0f, 0x1.f1135cp-94f, 0x1.5353fap-75f, 0.0f, 0.0f, 0.0f, 0x1.267bb8p-90f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1ffc52p-10f, 0x1.76de24p-1f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.6670e6p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.07dbd4p-97f, 0.0f,
     0x1.b92572p-36f, 0.0f, 0x1.652bcap-86f, 0.0f, 0x1.2f8ee6p-63f, 0x1.99cac2p-52f,
     0.0f, 0x1.03be24p-95f, 0.0f, 0.0f, 0x1.d6162ap-86f, 0x1.c5def6p-76f,
     0x1.a0916ap-38f, 0.0f, 0x1.afed22p-105f, 0x1.2e5616p-30f, 0x1.49aa6cp-34f,
     0x1.ed182cp-39f, 0x1.14216p-121f, 0.0f, 0.0f, 0x1.7fdf3ep-18f, 0x1.c1c1ep-26f,
     0x1.5dc6b4p-20f, 0.0f, 0.0f, 0x1.32383ep-60f, 0.0f, 0.0f, 0.0f, 0x1.39bd9ap-77f,
     0x1.360b1p-39f, 0.0f, 0x1.58fc1ap-2f, 0.0f, 0.0f, 0x1.f29756p-49f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e65476p-33f, 0x1.92fb0cp-25f, 0.0f, 0.0f, 0.0f, 0x1.a96f5ap-4f,
     0.0f, 0.0f, 0x1.d83e5p-108f, 0x1.83056ep-11f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3ba0c4p-22f, 0x1.4d4806p-91f, 0.0f, 0x1.586a88p-50f, 0.0f, 0x1.26e27ap-89f,
     0x1.e2c508p-43f, 0.0f, 0.0f, 0.0f, 0x1.85659p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.be72f2p-55f, 0x1.fcba46p-120f, 0.0f, 0.0f, 0.0f, 0x1.67399cp-59f, 0.0f,
     0x1.7e4156p-64f, 0.0f, 0x1.ddbd9ap-69f, 0x1.9d62d2p-30f, 0x1.da94fep-36f,
     0x1.73704ap-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d4d9c8p-93f, 0x1.dc1f58p-97f,
     0x1.87864ap-67f, 0x1.9f9866p-17f, 0.0f, 0.0f, 0.0f, 0x1.55084cp-88f, 0.0f, 0.0f,
     0x1.00a98ap-91f, 0.0f, 0x1.3d65ep-46f, 0.0f, 0x1.1f7094p-32f, 0x1.bf0ff8p-107f,
     0.0f, 0.0f, 0x1.3aa20cp-117f, 0.0f, 0x1.c3d19ap-45f, 0x1.0c4df4p-106f, 0.0f,
     0.0f, 0x1.06dde8p-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3b64c6p-11f, 0x1.5d0d06p-81f,
     0x1.376ebcp-68f, 0x1.f70eecp-28f, 0x1.e9b5dcp-72f, 0.0f, 0.0f, 0x1.7aad2cp-118f,
     0x1.adb24ep-59f, 0.0f, 0x1.59e1f2p-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a1db6p-109f, 0.0f, 0x1.7d4dc4p-6f, 0x1.5ff90ap-23f, 0x1.7ca7a8p-94f,
     0x1.4eb136p-8f, 0x1.826df2p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.329b78p-63f, 0.0f,
     0x1.42b348p-25f, 0x1.a917cep-122f, 0x1.0c6d7p-80f, 0x1.5dd7e4p-48f, 0.0f, 0.0f,
     0x1.bcfb8ap-110f, 0.0f, 0x1.d51f3cp-8f, 0x1.087fcep-117f, 0.0f, 0x1.a9b24ep-4f,
     0x1.51066ap-80f, 0x1.b6f50ap-103f, 0.0f, 0x1.24a732p-3f, 0x1.b689ecp-73f, 0.0f,
     0x1.6806bep-2f, 0.0f, 0x1.38ad3p-25f, 0.0f, 0.0f, 0x1.837fb6p-86f,
     0x1.407d76p-101f, 0x1.b7e378p-122f, 0x1.34161p-12f, 0x1.dfb2c8p-72f, 0.0f,
     0x1.fec1f2p-95f, 0x1.c8da04p-69f, 0x1.b41b06p-94f, 0x1.c7001cp-50f,
     0x1.0379e2p-5f, 0.0f, 0.0f, 0.0f, 0x1.e241a2p-94f, 0.0f, 0x1.80151ap-44f,
     0x1.52df9ap-21f, 0.0f, 0x1.31d052p-65f, 0x1.6f1decp-69f, 0.0f, 0.0f,
     0x1.dc9f2cp-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f5f6e6p-48f, 0.0f, 0.0f, 0.0f,
     0x1.93b61ap-10f, 0.0f, 0x1.782778p-107f, 0x1.932fccp-30f, 0x1.3b39ecp-101f, 0.0f,
     0.0f, 0x1.d2abc2p-53f, 0x1.0fea66p-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a09d62p-28f,
     0.0f, 0x1.1f08c6p-108f, 0x1.33aa4cp-71f, 0x1.0d295ap-103f, 0x1.974e5cp-87f,
     0x1.183e4cp-72f, 0.0f, 0x1.0f67ap-55f, 0x1.81007p-39f, 0.0f, 0x1.d6c3f8p-35f,
     0x1.165656p-51f, 0.0f, 0x1.b69c22p-101f, 0x1.fe3024p-36f, 0.0f, 0.0f,
     0x1.4f55c4p-42f, 0x1.c02b12p-102f, 0x1.25dcbcp-86f, 0.0f, 0x1.c2927cp-118f, 0.0f,
     0.0f, 0x1.8ac0a8p-36f, 0.0f, 0.0f, 0x1.fe971ep-73f, 0x1.5f8034p-77f, 0.0f,
     0x1.12adfp-87f, 0x1.78c1c2p-107f, 0.0f, 0.0f, 0x1.343fccp-111f, 0x1.99548p-29f,
     0.0f, 0.0f, 0x1.015ce8p-7f, 0x1.fe1dc8p-118f, 0x1.90cd34p-122f, 0x1.a9b768p-55f,
     0.0f, 0.0f, 0x1.f1eaf6p-9f, 0x1.b8f9bp-105f, 0.0f, 0.0f, 0.0f, 0x1.c10556p-13f,
     0x1.47979ep-22f, 0.0f, 0x1.9be688p-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8e2618p-24f,
     0x1.8e6dap-86f, 0.0f, 0.0f, 0x1.d076c6p-91f, 0.0f, 0.0f, 0.0f, 0x1.55e6c2p-124f,
     0x1.0010b2p-93f, 0.0f, 0x1.224bccp-8f, 0x1.e9085cp-8f, 0x1.383c48p-118f, 0.0f,
     0.0f, 0.0f, 0x1.5a8e7ap-111f, 0.0f, 0x1.cb47c6p-50f, 0.0f, 0x1.3c0484p-53f,
     0x1.e5fa76p-31f, 0x1.991474p-58f, 0.0f, 0x1.1963dp-9f, 0x1.581414p-80f,
     0x1.2157aap-9f, 0.0f, 0x1.81bd5p-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3bb6acp-63f, 0x1.81813ep-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f,
     0x1.34d012p-8f, 0x1.5289d8p-126f, 0.0f, 0x1.b12bf4p-28f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.12c58ep-83f, 0.0f, 0.0f, 0x1.7be788p-26f, 0.0f, 0.0f,
     0x1.cabdd8p-96f, 0.0f, 0x1.6dbceep-54f, 0.0f, 0x1.77d2cep-104f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.85e7c6p-72f, 0.0f, 0.0f, 0x1.8fb66ap-61f, 0.0f, 0.0f, 0x1.1e46f4p-30f,
     0.0f, 0x1.166438p-99f, 0x1.191fb4p-16f, 0x1.24fd0cp-9f, 0.0f, 0x1.a3b81p-6f,
     0x1.b2958ap-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.88476p-70f,
     0x1.42c996p-28f, 0x1.aa0d8ep-117f, 0x1.0c2e14p-42f, 0x1.90394p-122f,
     0x1.fb0242p-115f, 0.0f, 0.0f, 0x1.a1f7fp-101f, 0.0f, 0.0f, 0x1.006924p-123f,
     0x1.857082p-95f, 0x1.92e696p-46f, 0.0f, 0x1.011d94p-1f, 0x1.f7b79ep-66f,
     0x1.7ae14p-11f, 0x1.cdcf6p-109f, 0.0f, 0x1.6943a6p-60f, 0.0f, 0x1.b1ec72p-71f,
     0x1.9cfe54p-14f, 0.0f, 0.0f, 0x1.11bf96p-63f, 0.0f, 0.0f, 0x1.6094p-60f,
     0x1.2b9968p-113f, 0x1.03c826p-56f, 0x1.50b946p-54f, 0.0f, 0x1.220ac4p-9f,
     0x1.d0ac24p-63f, 0.0f, 0x1.14b6f2p-101f, 0x1.28a1b4p-69f, 0.0f, 0x1.597c8ep-96f,
     0x1.bdd896p-71f, 0.0f, 0x1.7638dap-102f, 0x1.c6dc94p-118f, 0x1.b1b5ccp-71f, 0.0f,
     0.0f, 0.0f, 0x1.5be94ep-36f, 0x1.e93468p-54f, 0x1p0f, 0.0f, 0.0f, 0.0f,
     0x1.d4cdccp-21f, 0.0f, 0.0f, 0x1.97cd78p-76f, 0x1.42680ep-72f, 0x1.250e1ep-109f,
     0x1.e0d94cp-47f, 0.0f, 0.0f, 0.0f, 0x1.bb9f6ep-14f, 0x1.f9a0f4p-37f,
     0x1.901eb2p-45f, 0x1.88a698p-108f, 0x1.a71bap-64f, 0x1.2e04bcp-102f, 0.0f,
     0x1.d3a096p-77f, 0x1.426838p-93f, 0.0f, 0x1.9fd3a6p-81f, 0x1.304ea2p-29f, 0.0f,
     0x1.0928dep-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.07482p-30f, 0x1.c8d59ep-97f, 0.0f,
     0x1.daa532p-13f, 0.0f, 0x1.b9bd5ap-38f, 0.0f, 0x1.c7829ap-62f, 0x1.7291bp-5f,
     0x1.3b1144p-12f, 0.0f, 0.0f, 0x1.2c3428p-124f, 0.0f, 0.0f, 0.0f, 0x1.806d08p-37f,
     0x1.df464ep-25f, 0.0f, 0x1.172fd8p-68f, 0.0f, 0.0f, 0x1.2dcb92p-123f,
     0x1.2e4bcp-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3af362p-82f, 0.0f, 0x1.a171p-47f,
     0x1.1286cp-19f, 0.0f, 0.0f, 0x1.06634p-13f, 0x1.218cfep-95f, 0x1.3b923cp-75f,
     0x1.4b4f4p-107f, 0x1.b31524p-29f, 0.0f, 0x1.94b8d6p-67f, 0x1.f51792p-21f, 0.0f,
     0.0f, 0.0f, 0x1.3d9c7p-31f, 0.0f, 0x1.9dea72p-89f, 0.0f, 0x1.641c28p-102f,
     0x1.f11fp-49f, 0x1.449636p-54f, 0x1.f9f77ap-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.85623cp-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.04a398p-8f, 0.0f,
     0x1.f83888p-1f, 0x1.28766ap-61f, 0.0f, 0.0f, 0x1.5d127ap-84f, 0x1.68bb44p-73f,
     0x1.05b506p-65f, 0x1.5cb098p-43f, 0x1.a3b544p-3f, 0x1.140b98p-124f,
     0x1.34ef74p-62f, 0.0f, 0.0f, 0x1.112782p-76f, 0x1.c469cp-8f, 0.0f, 0.0f, 0.0f,
     0x1.caf77p-111f, 0.0f, 0x1.0026e6p-40f, 0.0f, 0x1.87604p-67f, 0.0f, 0.0f,
     0x1.40ea7ap-32f, 0x1.2e4c6ep-68f, 0x1p0f, 0x1.5a417ap-2f, 0.0f, 0.0f, 0x1p0f,
     0x1.d46726p-85f, 0x1.bc5e9cp-63f, 0.0f, 0x1.b77ff2p-26f, 0x1.96f8e8p-85f, 0.0f,
     0.0f, 0x1.c552c6p-25f, 0.0f, 0x1.f66a64p-40f, 0x1.44c2dp-30f, 0x1.fa71b2p-71f,
     0x1.0a3fb4p-110f, 0x1.089ff6p-101f, 0x1.28d33ap-50f, 0x1.fa977p-24f,
     0x1.2aca5cp-75f, 0x1.776e96p-36f, 0.0f, 0x1.611ac6p-51f, 0x1.94c594p-95f, 0.0f,
     0x1.a8ab82p-26f, 0x1.038034p-72f, 0x1.c12d9cp-88f, 0x1.61064cp-25f,
     0x1.d12604p-61f, 0.0f, 0.0f, 0x1.bbf1acp-77f, 0x1.b7d34ap-120f, 0x1.06b3b2p-103f,
     0x1.04af6cp-72f, 0.0f, 0.0f, 0x1.f3c9bcp-62f, 0.0f, 0.0f, 0x1.4ebdbep-71f, 0.0f,
     0.0f, 0x1.20e108p-56f, 0x1.8754cp-62f, 0x1.fadd16p-52f, 0.0f, 0.0f, 0.0f,
     0x1.cb861p-7f, 0x1.a8c5a6p-85f, 0.0f, 0.0f, 0x1.61dad4p-119f, 0.0f,
     0x1.2fe53ap-120f, 0x1.26ff16p-6f, 0x1.99d37ep-16f, 0.0f, 0x1.c573a8p-89f, 0.0f,
     0.0f, 0.0f, 0x1.b25fe8p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3f225ap-88f, 0.0f,
     0x1.6f30bap-114f, 0.0f, 0x1.f1cc4ap-115f, 0.0f, 0x1.3dd1c2p-95f, 0x1.e04164p-21f,
     0x1.747ad8p-109f, 0x1.b5f728p-27f, 0x1.ab642ep-45f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5e030ep-60f, 0.0f, 0x1.65b834p-105f, 0.0f, 0.0f, 0x1.81176cp-112f, 0.0f,
     0x1.259952p-29f, 0x1.a5c95ep-55f, 0x1.e9adb2p-74f, 0.0f, 0.0f, 0x1.e7a094p-85f,
     0.0f, 0x1.201baep-65f, 0.0f, 0.0f, 0.0f, 0x1.0754cep-113f, 0x1.b61bc4p-100f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e177aap-29f, 0x1.f9c2c6p-38f, 0.0f, 0.0f
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
            tmp1 = Sleef_finz_lgammaf8_u10kvx(tmp0);
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
    printf("Sleef_finz_lgammaf8_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_finz_lgammaf8_u10kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
