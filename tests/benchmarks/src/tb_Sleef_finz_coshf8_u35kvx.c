/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_coshf8_u35kvx.c --function \
 *     Sleef_finz_coshf8_u35kvx --headers sleef.h,ml_support_lib.h \
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
     0x1.a75044p-77f, 0x1.bf65fap-6f, 0x1.e0b8a8p-112f, 0.0f, 0.0f, 0x1.fc8026p-75f,
     0x1.762388p-125f, 0x1.df926ap-80f, 0.0f, 0.0f, 0x1.25e548p-89f, 0x1.0b1e04p-63f,
     0x1.8b784ap-82f, 0.0f, 0.0f, 0x1.3900cp-18f, 0.0f, 0x1.aef5f4p-52f, 0.0f, 0.0f,
     0x1.d102b2p-113f, 0x1.e518ap-13f, 0x1.0633f8p-5f, 0x1.c4c35ep-70f,
     0x1.a6f854p-63f, 0x1.6df56ap-50f, 0.0f, 0.0f, 0x1.5e75dep-17f, 0x1.a68d42p-69f,
     0.0f, 0x1.0ed0a2p-1f, 0x1.dbef06p-18f, 0x1.d65214p-54f, 0x1.55aa58p-126f,
     0x1.003578p-34f, 0.0f, 0.0f, 0x1.1cd512p-124f, 0x1.a83924p-104f, 0.0f,
     0x1.8c97f6p-81f, 0x1.14c9d8p-28f, 0.0f, 0x1.eeb016p-48f, 0.0f, 0x1.458064p-30f,
     0x1.cb0a4cp-44f, 0x1.1d6062p-70f, 0.0f, 0.0f, 0.0f, 0x1.f5b50ep-99f,
     0x1.81025ap-91f, 0x1.d70be2p-13f, 0.0f, 0.0f, 0x1.c42186p-64f, 0x1.fc7b48p-105f,
     0x1.058584p-97f, 0x1.61feeap-122f, 0.0f, 0.0f, 0x1.1cadcap-30f, 0.0f, 0.0f,
     0x1.82e1b4p-60f, 0.0f, 0.0f, 0.0f, 0x1.c8bff4p-111f, 0.0f, 0x1.3c706cp-58f,
     0x1.348718p-46f, 0.0f, 0x1.a51ac8p-40f, 0x1.b23036p-112f, 0.0f, 0x1.149548p-39f,
     0x1.ae0a1ap-26f, 0.0f, 0x1.84121cp-23f, 0.0f, 0.0f, 0.0f, 0x1.1656b6p-57f, 0.0f,
     0.0f, 0.0f, 0x1.bd7674p-35f, 0.0f, 0x1.a06456p-72f, 0x1.15da28p-126f, 0.0f,
     0x1.a534a2p-21f, 0.0f, 0x1.616b68p-100f, 0.0f, 0x1.840decp-40f, 0.0f,
     0x1.d57342p-118f, 0x1.f063fcp-52f, 0.0f, 0.0f, 0.0f, 0x1.cc011ep-64f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.fc4beep-6f, 0x1.c6b47cp-16f, 0.0f, 0x1.88d6fp-77f,
     0x1.03b592p-72f, 0x1.3a1a62p-104f, 0x1.24f6ecp-65f, 0.0f, 0.0f, 0x1.75957ap-26f,
     0x1.dda4a6p-105f, 0x1.7216ccp-120f, 0.0f, 0x1.4bd12cp-27f, 0x1.3f9c8cp-98f, 0.0f,
     0.0f, 0.0f, 0x1.11bcb8p-126f, 0.0f, 0.0f, 0.0f, 0x1.edf278p-38f, 0x1.8b47p-41f,
     0.0f, 0.0f, 0.0f, 0x1.384f3p-29f, 0.0f, 0.0f, 0.0f, 0x1.d0cabep-15f,
     0x1.731bf8p-25f, 0x1.15b60ap-85f, 0x1.81b188p-90f, 0x1.d4aeeap-99f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.364f9cp-36f, 0x1.09c508p-107f, 0.0f, 0x1.a107cp-67f,
     0x1.774278p-5f, 0x1.6cf3d6p-121f, 0x1.9a5554p-47f, 0.0f, 0.0f, 0x1.94d79p-110f,
     0.0f, 0x1.236536p-16f, 0.0f, 0x1.b277ep-8f, 0x1.24af82p-23f, 0x1.cf0a46p-25f,
     0x1.ec937ep-20f, 0.0f, 0x1.60a476p-88f, 0.0f, 0.0f, 0.0f, 0x1.8cd202p-3f, 0.0f,
     0.0f, 0x1.a18abep-4f, 0x1.b9a6fp-14f, 0x1.50cddp-30f, 0.0f, 0.0f, 0x1.0c6c4p-78f,
     0x1.5e8a9cp-27f, 0x1.6164f4p-18f, 0x1.80d474p-3f, 0x1.dbd0cap-91f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ea96dap-79f, 0x1.8c0b5cp-14f, 0.0f, 0.0f, 0x1.3081e6p-26f,
     0x1.fa43dap-53f, 0.0f, 0.0f, 0x1.0e51bp-22f, 0x1.6253dep-84f, 0.0f, 0.0f, 0.0f,
     0x1.9c783cp-93f, 0x1.61c564p-96f, 0x1.a445cap-6f, 0.0f, 0x1.1e265ep-75f,
     0x1.fca03p-90f, 0.0f, 0.0f, 0.0f, 0x1.c6ff02p-73f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.258796p-5f, 0.0f, 0.0f, 0x1.d04556p-42f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.00fb16p-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c07c06p-82f,
     0x1.936334p-49f, 0x1.d3224ap-120f, 0.0f, 0.0f, 0x1.5f0726p-13f, 0.0f,
     0x1.76842ap-37f, 0.0f, 0.0f, 0x1.99ef4ap-63f, 0x1.a14b58p-71f, 0x1.1b013cp-75f,
     0x1.732b18p-13f, 0x1.486d6cp-94f, 0.0f, 0.0f, 0x1.c891d2p-23f, 0.0f,
     0x1.9dcf34p-8f, 0x1p0f, 0x1.f5fdd4p-57f, 0.0f, 0x1.819bfap-19f, 0.0f, 0.0f, 0.0f,
     0x1.1faeb8p-91f, 0x1.e13b6cp-38f, 0.0f, 0.0f, 0.0f, 0x1.a2686ep-115f, 0.0f,
     0x1.987d0ep-20f, 0.0f, 0.0f, 0.0f, 0x1.c9a03p-63f, 0x1.509aa8p-1f, 0.0f, 0.0f,
     0x1.d29038p-29f, 0x1.f2b54ap-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7bfd8ap-48f,
     0x1.2a717cp-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d8afep-100f, 0.0f, 0.0f,
     0x1.6d878p-104f, 0x1.a8f1c4p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4125e2p-96f,
     0x1.7bf4bep-87f, 0x1.e8b32cp-69f, 0x1.3a58fcp-92f, 0x1.79ad6p-103f, 0.0f,
     0x1.74a5e8p-62f, 0.0f, 0.0f, 0x1.0d547p-92f, 0.0f, 0x1.ec073cp-4f,
     0x1.dae90cp-116f, 0.0f, 0.0f, 0.0f, 0x1.5cc31ep-25f, 0.0f, 0.0f, 0.0f,
     0x1.da85eap-91f, 0.0f, 0x1.3f6b3ep-43f, 0x1.d29cecp-72f, 0x1.c658d6p-5f, 0.0f,
     0x1.776f6ep-37f, 0x1.b4f64cp-124f, 0.0f, 0x1.8e337ep-76f, 0.0f, 0x1.ab155cp-65f,
     0x1.cc6928p-22f, 0x1.7a3e18p-25f, 0.0f, 0x1.95355cp-73f, 0x1.c71f24p-90f, 0.0f,
     0x1.31586cp-75f, 0.0f, 0x1.392394p-103f, 0x1.c3ec9ap-86f, 0x1.7e6366p-105f, 0.0f,
     0.0f, 0x1.1189acp-110f, 0x1.656cd8p-106f, 0x1.ee696ep-43f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.922ceap-107f, 0x1.672bfcp-11f,
     0.0f, 0x1.17ac5ep-123f, 0x1.d76764p-75f, 0x1.0ae33ep-40f, 0x1.26937ap-64f,
     0x1.b230a6p-34f, 0x1.20c1ap-10f, 0x1.cfe8dap-98f, 0.0f, 0x1.b80446p-77f,
     0x1.fef06ap-16f, 0x1.2b74dep-12f, 0x1.0bf59p-14f, 0.0f, 0.0f, 0x1.b86bcap-101f,
     0.0f, 0.0f, 0x1.9824c6p-38f, 0.0f, 0.0f, 0x1.3c319ep-16f, 0.0f, 0.0f, 0.0f,
     0x1.b90d56p-2f, 0x1.2d8274p-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ba6c3ep-41f, 0.0f,
     0x1.c482e8p-77f, 0x1.d1b632p-89f, 0.0f, 0.0f, 0x1.c7f88p-111f, 0x1.c15a62p-45f,
     0x1.371108p-34f, 0x1.bedcd6p-40f, 0x1.8e1c98p-70f, 0x1.6510ap-9f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bbf61p-19f, 0.0f, 0.0f, 0x1.30d4fap-25f, 0.0f,
     0.0f, 0x1.24c6f8p-62f, 0.0f, 0x1.dc251ap-80f, 0.0f, 0.0f, 0x1.eb5fbcp-95f, 0.0f,
     0x1.63486ap-57f, 0x1.4ac7b6p-98f, 0.0f, 0x1.37f782p-28f, 0.0f, 0x1.a9cec4p-25f,
     0x1.55cfc6p-85f, 0.0f, 0x1.23a63ap-56f, 0x1.f02082p-56f, 0x1.8d1826p-43f, 0.0f,
     0x1.695fc4p-125f, 0.0f, 0x1.5cff5cp-92f, 0.0f, 0.0f, 0x1.d9bc4p-115f, 0.0f, 0.0f,
     0.0f, 0x1.1486c2p-93f, 0.0f, 0x1.42a29ap-109f, 0x1.5495fp-15f, 0x1.028c96p-107f,
     0.0f, 0.0f, 0.0f, 0x1.af427p-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.492414p-16f, 0x1.d295cap-1f, 0.0f, 0.0f, 0x1.d466dap-78f, 0x1.e3fa14p-101f,
     0x1.dffe1p-66f, 0.0f, 0.0f, 0.0f, 0x1.723db6p-57f, 0.0f, 0.0f, 0.0f,
     0x1.20e008p-79f, 0x1.8a22bcp-100f, 0x1.a1159cp-14f, 0x1.9eb3d6p-77f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.59ad06p-25f, 0.0f, 0.0f, 0x1.879ebep-125f, 0x1.21eef6p-7f,
     0.0f, 0x1.15be4p-39f, 0x1.6f2b04p-71f, 0.0f, 0x1.de9f9ep-16f, 0.0f,
     0x1.07fcb2p-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.de87d4p-92f, 0.0f, 0x1.316ab6p-54f,
     0x1.6fe342p-83f, 0x1.9e0f12p-101f, 0x1.3e316p-80f, 0.0f, 0.0f, 0x1.d1d76p-20f,
     0x1.a9ea44p-111f, 0x1.25debap-36f, 0x1.45afe8p-46f, 0.0f, 0x1.b14b4cp-56f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.374abap-47f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.079a52p-102f, 0.0f, 0x1.b8624cp-61f, 0x1.9463cp-9f, 0x1.322aaap-94f,
     0x1.f1632ep-30f, 0x1.da7ed4p-111f, 0.0f, 0.0f, 0.0f, 0x1.156db6p-121f,
     0x1.bf0f6p-3f, 0x1.aa3e3ep-104f, 0.0f, 0x1.4d974ep-105f, 0.0f, 0x1.9306b6p-38f,
     0x1.321256p-8f, 0x1.dbee6ep-126f, 0x1.913752p-46f, 0x1.a22a9p-62f, 0.0f,
     0x1.004648p-66f, 0.0f, 0.0f, 0x1.645af2p-111f, 0.0f, 0.0f, 0x1.553388p-34f,
     0x1.0deb74p-85f, 0x1.293b8ap-55f, 0x1.9b5346p-103f, 0.0f, 0.0f, 0x1.7f2e06p-2f,
     0.0f, 0.0f, 0x1.39367p-65f, 0.0f, 0x1.83518ep-45f, 0x1.f25d72p-8f, 0.0f,
     0x1.60806ep-77f, 0x1.77a7e6p-110f, 0.0f, 0.0f, 0x1.0e0fecp-52f, 0.0f, 0.0f,
     0x1.c35802p-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.af24fp-63f,
     0x1.5b26cep-80f, 0x1.de394p-42f, 0x1.3be95cp-115f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.49697ep-123f, 0.0f, 0x1.abc7bcp-22f, 0x1.72f194p-105f, 0.0f, 0.0f,
     0x1.770c36p-78f, 0x1.39bd3ep-66f, 0x1.cdfd42p-16f, 0x1.e7047cp-72f,
     0x1.cea0d4p-109f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.651658p-89f, 0x1.ebcbd6p-9f,
     0x1.47b15p-77f, 0.0f, 0x1.b896fp-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.846106p-1f,
     0x1.8b73ap-85f, 0x1.e985ep-86f, 0x1.def2a4p-64f, 0x1.3835bap-65f, 0.0f,
     0x1.400954p-80f, 0x1.2c82f6p-81f, 0.0f, 0x1.8777aap-81f, 0x1.7cc38ep-82f,
     0x1.ed936p-15f, 0.0f, 0x1.6677b6p-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.415b36p-66f, 0x1.fa3edcp-21f, 0.0f, 0.0f, 0x1.6c86ccp-71f,
     0x1.1cb214p-124f, 0.0f, 0.0f, 0x1.b6691p-87f, 0.0f, 0x1.52d68p-59f, 0.0f,
     0x1.c30324p-82f, 0x1.9e3dc8p-27f, 0.0f, 0x1.58529cp-96f, 0.0f, 0.0f,
     0x1.dc53a2p-62f, 0x1.5f521ap-102f, 0x1.4b062ep-81f, 0x1.0aa20ep-80f,
     0x1.2ee604p-55f, 0x1.c5e40cp-115f, 0.0f, 0.0f, 0.0f, 0x1.f0318cp-75f, 0.0f, 0.0f,
     0x1.0170b2p-35f, 0x1.a8bb44p-78f, 0x1.d3342cp-84f, 0x1.31996ap-53f, 0.0f, 0.0f,
     0x1.1d5064p-122f, 0x1.7bc01cp-47f, 0x1.5ca65ap-42f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4991e2p-104f, 0x1.579dfap-98f, 0.0f, 0x1.3c5aa8p-72f, 0x1p0f, 0x1.ba395p-91f,
     0x1.2ce566p-116f, 0x1.b0925cp-85f, 0x1.21aff2p-117f, 0.0f, 0x1.9cac98p-110f,
     0.0f, 0x1.77ea5ep-35f, 0.0f, 0x1.38d2d4p-112f, 0.0f, 0x1.f3e824p-91f,
     0x1.7a9738p-9f, 0.0f, 0x1.41663cp-25f, 0x1.747394p-29f, 0.0f, 0.0f, 0.0f,
     0x1.9d71ep-105f, 0.0f, 0x1.cf09dap-90f, 0x1.f28facp-10f, 0.0f, 0x1.3cc25cp-85f,
     0x1.cf1e98p-36f, 0.0f, 0.0f, 0x1.1cf68p-11f, 0x1p0f, 0.0f, 0x1.795f9ap-4f, 0.0f,
     0x1.af09cp-118f, 0.0f, 0x1.5350e6p-117f, 0x1.37c25ap-76f, 0x1.91f012p-108f,
     0x1.a17a16p-107f, 0x1.dde52ep-116f, 0x1.360de2p-122f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3228c2p-109f, 0.0f, 0x1.7f4516p-46f, 0x1.da823ep-111f, 0x1.53943ap-69f,
     0x1.9a1a2p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fa3f3ap-109f, 0.0f, 0x1.643b92p-51f,
     0x1.24a622p-122f, 0x1.fc9b12p-55f, 0.0f, 0x1.2a2a94p-96f, 0.0f, 0.0f,
     0x1.8de084p-104f, 0x1.bd2994p-76f, 0x1.a1a536p-123f, 0x1.d4dd46p-113f, 0.0f,
     0x1.6bfa2ep-68f, 0.0f, 0x1.a0ad38p-56f, 0x1.5f8018p-37f, 0.0f, 0x1.a7ddacp-74f,
     0.0f, 0.0f, 0x1.f59e64p-43f, 0x1.36fbacp-118f, 0.0f, 0.0f, 0x1.71520cp-6f,
     0x1.b388e8p-84f, 0.0f, 0.0f, 0.0f, 0x1.74ef9ep-5f, 0x1.9a7b26p-21f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f7eb74p-115f, 0x1.de3bf4p-22f, 0x1.d21598p-76f, 0x1.45ceb6p-123f,
     0.0f, 0x1p0f, 0x1.c3de9p-123f, 0x1.cb293ap-16f, 0x1.20f75ep-126f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ba86dep-13f, 0.0f, 0.0f, 0x1.fa5678p-47f,
     0x1.d0b968p-76f, 0x1.4fce0ep-72f, 0.0f, 0.0f, 0x1p0f, 0x1.0b3a48p-60f, 0.0f,
     0x1.bf1bfep-80f, 0.0f, 0x1.8c462ap-120f, 0x1.7f323cp-116f, 0x1.3e30bap-122f,
     0.0f, 0x1.8fb21cp-115f, 0.0f, 0.0f, 0x1.ddd53ep-69f, 0x1.693e76p-17f, 0.0f, 0.0f,
     0x1.1dfef8p-97f, 0.0f, 0x1.db8c68p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bb8318p-95f,
     0x1.993de2p-14f, 0x1.4c922ep-125f, 0.0f, 0.0f, 0x1.f9356p-78f, 0.0f,
     0x1.85b562p-120f, 0.0f, 0x1.26d2eap-53f, 0.0f, 0.0f, 0x1.c2744p-114f,
     0x1.8edd6p-64f, 0x1.425494p-67f, 0.0f, 0x1.328fd6p-93f, 0.0f, 0x1.b38682p-83f,
     0x1.378ebep-125f, 0x1.f00b18p-28f, 0.0f, 0.0f, 0x1.865674p-83f, 0x1.ff154ap-115f,
     0x1.7e24dep-92f, 0x1.27a228p-30f, 0x1.be1f0ap-22f, 0x1.6bdf0cp-90f, 0.0f,
     0x1.a9b48ep-120f, 0.0f, 0.0f, 0x1.f03be2p-39f, 0.0f, 0x1.9d68f4p-118f,
     0x1.6438cp-2f, 0x1.45333ep-63f, 0.0f, 0x1.a0bd5ep-20f, 0.0f, 0x1.50ae42p-7f,
     0x1.dd1124p-97f, 0x1.d852a6p-58f, 0x1.93d49p-97f, 0x1.bd0f9p-7f, 0.0f,
     0x1.acb26ap-89f, 0x1.32e41p-30f, 0.0f, 0.0f, 0.0f, 0x1.0b16eap-13f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ac6662p-10f, 0x1.566e5cp-23f, 0x1.138dccp-95f, 0.0f, 0.0f,
     0.0f, 0x1.3436a6p-6f, 0x1.f5c562p-58f, 0.0f, 0x1.05cd12p-90f, 0.0f, 0.0f, 0.0f,
     0x1.25b1a6p-33f, 0x1.b34c28p-106f, 0x1.fd12e2p-96f, 0x1.eafdb6p-27f, 0.0f, 0.0f,
     0x1.2bb33p-42f, 0x1.091afcp-16f, 0x1.b116c6p-28f, 0x1.18975ep-108f, 0.0f, 0.0f,
     0x1.2f9052p-40f, 0x1.2bd89ap-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7fe04ap-40f, 0.0f, 0x1.6cf49ap-56f, 0.0f, 0.0f, 0.0f, 0x1.5e1396p-77f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4b83fp-124f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ac422ep-28f, 0.0f, 0.0f, 0.0f, 0x1.982274p-107f, 0x1.399ef8p-104f,
     0x1.da871ep-125f, 0x1.15adcap-100f, 0.0f, 0.0f, 0x1.a0c4p-80f, 0.0f,
     0x1.e51c8cp-99f, 0.0f, 0x1.46a572p-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f89d16p-125f,
     0.0f, 0x1.55a968p-83f, 0.0f, 0x1.86522ap-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0644e4p-49f, 0x1.7a080ep-56f, 0.0f, 0x1.9b30bp-107f, 0.0f, 0x1.13d3ap-96f,
     0.0f, 0x1.3043fcp-6f, 0.0f, 0x1.660fa8p-101f, 0x1.a185c4p-74f, 0.0f, 0.0f,
     0x1.d53c28p-9f, 0x1.bb9d76p-6f, 0x1.409162p-36f, 0.0f, 0.0f, 0x1.0a20d6p-92f,
     0.0f, 0.0f, 0x1.b5f53ep-12f, 0x1.059de2p-37f, 0x1.cad7ecp-2f, 0x1.1554d4p-30f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7d2194p-68f, 0.0f, 0.0f, 0.0f, 0x1.e76112p-97f,
     0x1.d21174p-58f, 0x1.7afdb8p-115f, 0x1.9e652ep-14f, 0x1.c21bf8p-112f, 0.0f, 0.0f,
     0.0f, 0x1.3c58acp-71f, 0x1.baa1eep-96f, 0.0f, 0x1.2d96bp-55f, 0x1.a8449ap-49f,
     0x1.ab9668p-76f, 0.0f
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
            tmp1 = Sleef_finz_coshf8_u35kvx(tmp0);
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
    printf("Sleef_finz_coshf8_u35kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_finz_coshf8_u35kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
