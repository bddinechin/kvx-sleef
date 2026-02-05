/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_tgammaf8_u10kvx.c --function \
 *     Sleef_finz_tgammaf8_u10kvx --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0x1.1e26fcp-121f, 0.0f, 0x1.b26a2cp-84f, 0.0f, 0x1.21d704p-10f, 0.0f,
     0.0f, 0x1.62431cp-106f, 0x1.0aa328p-41f, 0.0f, 0x1.ea1f76p-87f, 0x1.1b7ff8p-35f,
     0x1.899a78p-97f, 0x1.b82abap-30f, 0x1.385efp-67f, 0x1.ac0824p-91f,
     0x1.c75b0cp-81f, 0.0f, 0x1.f721bcp-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c42018p-122f, 0x1.c55c3ap-48f, 0x1.ccd82cp-29f, 0.0f, 0x1.933622p-21f, 0.0f,
     0x1.a3873cp-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.058e04p-3f, 0.0f, 0.0f,
     0x1.34595cp-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4bebd2p-100f, 0.0f,
     0x1.8b771ap-117f, 0x1.473cc8p-79f, 0x1.d065cep-41f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e89196p-83f, 0.0f, 0x1.db2358p-112f, 0.0f, 0x1.6412a8p-61f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b8fb08p-69f, 0x1.be49p-28f, 0.0f, 0x1.ce65a8p-99f, 0x1.ef42a6p-23f,
     0.0f, 0x1.eca01ep-44f, 0x1.561276p-9f, 0x1.67ff0ep-88f, 0x1.ff6a7ap-59f, 0.0f,
     0.0f, 0x1.d3442p-28f, 0.0f, 0.0f, 0.0f, 0x1.28fdp-61f, 0x1.bcf8eep-123f, 0.0f,
     0x1.2c5fe8p-66f, 0.0f, 0x1.f3389p-105f, 0.0f, 0x1.a8b762p-109f, 0x1.1e894cp-9f,
     0x1.e6ad38p-7f, 0x1.48b032p-55f, 0.0f, 0x1.bfbab6p-64f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e8c11ap-109f, 0.0f, 0x1.fde366p-98f, 0x1.cc5388p-15f, 0.0f, 0.0f,
     0x1.317c26p-100f, 0.0f, 0.0f, 0x1.a9a788p-5f, 0x1.6a6452p-69f, 0x1.ce506ap-50f,
     0x1.34f6bcp-104f, 0x1.be869cp-110f, 0x1.35183cp-92f, 0x1.223738p-52f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.6d9dbep-7f, 0x1p0f, 0x1.d1b81p-25f, 0x1.f624d8p-115f,
     0.0f, 0x1.ac1f4ep-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5f9b6ep-54f,
     0x1.b557ep-8f, 0.0f, 0.0f, 0x1.c8c4ecp-42f, 0.0f, 0x1.674d8ap-122f,
     0x1.8af63ap-24f, 0.0f, 0.0f, 0x1.de48d8p-88f, 0.0f, 0x1.e35f1ep-45f,
     0x1.5d18bp-10f, 0.0f, 0x1.8f6878p-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.530c82p-29f, 0x1.c79a8ep-77f, 0x1.c30faap-1f, 0x1.6df67ap-45f, 0.0f,
     0x1.1689eap-24f, 0.0f, 0x1.39adp-75f, 0x1.95e0dcp-121f, 0x1.ea68bap-113f,
     0x1.497d2ap-115f, 0x1.6140c4p-121f, 0.0f, 0.0f, 0x1.df6b7p-108f, 0x1.60207ep-6f,
     0x1.0865f4p-44f, 0x1.51daf8p-17f, 0.0f, 0x1.b47cfap-99f, 0.0f, 0.0f,
     0x1.5a789cp-82f, 0x1.7b121cp-24f, 0x1.80054ep-5f, 0.0f, 0x1.bd76eap-97f, 0.0f,
     0x1.e72702p-58f, 0x1.56454ep-13f, 0.0f, 0.0f, 0.0f, 0x1.3e0aaap-117f,
     0x1.053a4cp-55f, 0x1.00713cp-36f, 0x1.f0f226p-60f, 0x1.74fac4p-35f,
     0x1.5f272p-9f, 0.0f, 0x1.63f156p-82f, 0x1.08112ep-72f, 0x1.882422p-73f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.2604f6p-70f, 0x1.4d4392p-123f, 0x1.3bcd34p-39f, 0.0f,
     0.0f, 0x1.020002p-41f, 0x1.00d206p-19f, 0x1.8436a2p-28f, 0.0f, 0x1.aa95d6p-100f,
     0x1.26dbfcp-125f, 0.0f, 0.0f, 0x1.9181eap-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9676eep-65f, 0x1.9c4544p-13f, 0x1.ac07bap-4f, 0.0f, 0.0f, 0.0f,
     0x1.594e5ep-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.59c476p-27f, 0x1.73b3b6p-83f,
     0x1.0ef334p-110f, 0x1.6ee034p-40f, 0x1.a2998ep-5f, 0.0f, 0.0f, 0.0f,
     0x1.ccb50cp-18f, 0.0f, 0x1.ec1ccep-121f, 0.0f, 0x1.494668p-85f, 0x1.4eb022p-93f,
     0.0f, 0.0f, 0x1.376f4cp-64f, 0x1.f27fa4p-15f, 0x1.b87966p-78f, 0.0f,
     0x1.d0b422p-71f, 0.0f, 0.0f, 0x1.daf3fcp-17f, 0x1.a58f58p-123f, 0x1.02e56p-16f,
     0x1.17d6b2p-87f, 0x1.2316dap-122f, 0x1.38189ap-38f, 0x1.aab154p-32f, 0.0f, 0.0f,
     0.0f, 0x1.ee8cacp-122f, 0x1.d305a4p-124f, 0.0f, 0.0f, 0x1.f80288p-66f,
     0x1.98547cp-122f, 0x1.f227f4p-76f, 0.0f, 0.0f, 0.0f, 0x1.3c0472p-89f, 0.0f,
     0x1.4af1fep-92f, 0x1.77dc7p-68f, 0x1.62140cp-43f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.437c9p-90f, 0x1.bd4fcap-73f, 0x1.185b1cp-90f, 0.0f, 0.0f, 0x1.3bbbcep-98f,
     0.0f, 0x1.d8ba8ap-58f, 0x1.5562a8p-25f, 0.0f, 0.0f, 0x1.c784eep-34f,
     0x1.bbcb28p-14f, 0x1.5c396ap-103f, 0x1.96f93cp-117f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.fe74cap-93f, 0x1.7f969p-73f, 0x1.c1886ap-63f, 0.0f,
     0x1.345de2p-32f, 0x1.2c11bep-91f, 0x1.a0e78ap-4f, 0.0f, 0.0f, 0.0f,
     0x1.bac058p-23f, 0x1.3c43d8p-120f, 0x1.17195p-33f, 0.0f, 0.0f, 0x1.102c08p-9f,
     0.0f, 0x1.632664p-87f, 0x1.47138p-66f, 0x1.ed4724p-63f, 0x1.6d93b8p-58f, 0.0f,
     0x1.673376p-66f, 0.0f, 0x1.68f546p-49f, 0.0f, 0x1.408ee4p-69f, 0.0f,
     0x1.8057e6p-41f, 0.0f, 0.0f, 0x1.27e28ap-111f, 0.0f, 0.0f, 0.0f,
     0x1.3bfe02p-116f, 0.0f, 0x1.28635ep-66f, 0.0f, 0x1.3ffb22p-114f, 0.0f, 0.0f,
     0x1.defa56p-67f, 0.0f, 0x1.1223fep-115f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0b6d4cp-109f, 0x1.c70878p-5f, 0x1.a8364ap-86f, 0.0f, 0x1.c3c986p-21f, 0.0f,
     0x1.468ed2p-52f, 0x1.86aecap-91f, 0.0f, 0.0f, 0.0f, 0x1.ac5b2p-51f,
     0x1.8b4402p-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c22bf2p-69f, 0.0f, 0x1.ad65ccp-91f,
     0.0f, 0x1.f71f1ap-6f, 0.0f, 0.0f, 0.0f, 0x1.f6fa6ep-83f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.35db86p-68f, 0.0f, 0x1.35bcc8p-103f, 0.0f, 0x1.c12226p-18f,
     0x1.49f214p-9f, 0x1.997658p-72f, 0x1.e512ap-71f, 0.0f, 0x1.e73f4p-72f, 0.0f,
     0.0f, 0.0f, 0x1.c59f56p-72f, 0.0f, 0x1.51cd76p-100f, 0x1.23ae1ap-11f,
     0x1.fc44p-75f, 0.0f, 0x1.bb00ap-51f, 0.0f, 0x1.b81ebep-15f, 0x1.80827ep-10f,
     0.0f, 0.0f, 0x1.c796bap-107f, 0.0f, 0x1.f81968p-82f, 0.0f, 0x1.7774b6p-38f, 0.0f,
     0x1.27a17p-71f, 0.0f, 0.0f, 0x1.dbb71cp-79f, 0x1.0af816p-60f, 0x1.90c2a4p-44f,
     0x1.875902p-114f, 0x1.43a6c6p-23f, 0.0f, 0x1.060776p-108f, 0.0f, 0.0f,
     0x1.45a73p-38f, 0x1.e619aap-22f, 0.0f, 0x1.e051bp-71f, 0x1.3b9da4p-90f,
     0x1.e6cb8ep-94f, 0.0f, 0x1.441f16p-33f, 0x1.7c88e8p-99f, 0x1.6990eap-36f,
     0x1.babc5ep-45f, 0x1.c356eep-41f, 0.0f, 0.0f, 0.0f, 0x1.6708d8p-67f,
     0x1.94d8a6p-93f, 0.0f, 0.0f, 0x1.dfd2dap-10f, 0x1.c90ecap-7f, 0.0f, 0.0f,
     0x1.d60c9ep-3f, 0.0f, 0.0f, 0x1.ab3b82p-53f, 0.0f, 0.0f, 0x1.5f280cp-61f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.99b398p-45f, 0x1.054338p-17f, 0.0f, 0.0f,
     0x1.ed37b6p-14f, 0x1.c2314ap-3f, 0x1.6bb4f8p-35f, 0x1.bec62p-119f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.34afb6p-23f, 0.0f, 0.0f, 0.0f, 0x1.ab7fc4p-126f,
     0.0f, 0.0f, 0.0f, 0x1.36958p-26f, 0x1.a8bd1ep-34f, 0.0f, 0.0f, 0x1.749898p-125f,
     0.0f, 0x1.2a3bc2p-78f, 0x1.044e32p-6f, 0.0f, 0x1.f5c564p-116f, 0x1.ac5876p-98f,
     0.0f, 0.0f, 0.0f, 0x1.6348b4p-98f, 0.0f, 0x1.b769c2p-93f, 0.0f, 0.0f,
     0x1.194edp-93f, 0x1.83e8b2p-63f, 0x1.b51d08p-25f, 0.0f, 0.0f, 0x1.df7e16p-84f,
     0x1.2592fap-109f, 0.0f, 0.0f, 0.0f, 0x1.f1f83ap-94f, 0.0f, 0x1.9a30c8p-117f,
     0x1.79f96cp-25f, 0.0f, 0x1.58258cp-17f, 0x1.df40f6p-2f, 0x1.ade68ap-117f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.923df2p-38f, 0.0f, 0x1.0b4846p-38f, 0.0f, 0.0f,
     0x1.8e4d86p-23f, 0.0f, 0.0f, 0x1.0ed6e4p-51f, 0x1.e1d46ep-71f, 0x1.327b2p-71f,
     0.0f, 0x1.db0c9ep-35f, 0x1.7d9d8ap-105f, 0x1.b1b54ap-70f, 0.0f, 0.0f,
     0x1.e797f6p-28f, 0.0f, 0x1.549692p-16f, 0x1.45035ep-78f, 0.0f, 0x1.5fe01cp-76f,
     0x1.f8f0acp-55f, 0x1.920024p-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.15cfccp-12f, 0.0f, 0.0f, 0.0f, 0x1.c31e66p-71f, 0.0f, 0.0f, 0.0f,
     0x1.69156ep-70f, 0.0f, 0.0f, 0x1.8b8398p-120f, 0.0f, 0.0f, 0.0f,
     0x1.1e3ce6p-115f, 0x1.607c48p-6f, 0x1.fcea9ap-116f, 0.0f, 0x1.6d5a5p-3f, 0.0f,
     0.0f, 0x1.053af4p-105f, 0.0f, 0x1.2cbb1cp-126f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a593eap-84f, 0x1.0ee846p-80f, 0x1.57d07cp-98f, 0.0f, 0x1.f887d8p-107f,
     0x1p0f, 0.0f, 0x1.bdd78p-57f, 0x1.2b24a4p-106f, 0.0f, 0.0f, 0x1.55fbf2p-77f,
     0x1.d553e4p-115f, 0x1.e102c2p-52f, 0x1.d74dfp-38f, 0x1.7b5978p-41f, 0.0f,
     0x1.1f6856p-74f, 0x1.ec79f4p-38f, 0x1.dda8f6p-15f, 0.0f, 0x1.4e0838p-121f,
     0x1.803edep-49f, 0x1.5f74f8p-16f, 0x1.96045ep-19f, 0.0f, 0x1.476c7p-118f, 0.0f,
     0.0f, 0.0f, 0x1.a0b862p-13f, 0x1.a6d88ap-59f, 0x1.aceccap-117f, 0.0f,
     0x1.bf2e7cp-115f, 0.0f, 0.0f, 0x1.a0567ep-7f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.18949cp-40f, 0x1.34515ap-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.109dfp-92f, 0x1.a84d9ap-28f, 0.0f, 0.0f, 0x1.6aafaap-23f,
     0x1.381dfp-104f, 0.0f, 0.0f, 0.0f, 0x1.951716p-30f, 0x1.2ef526p-66f, 0.0f, 0.0f,
     0x1.17a38ep-28f, 0x1.2ad114p-75f, 0.0f, 0x1.853762p-103f, 0x1.e07918p-58f,
     0x1.99d018p-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.57a972p-28f, 0x1.920c3cp-22f, 0x1.16f076p-16f, 0.0f, 0x1.3dd6e2p-25f,
     0x1.b91684p-51f, 0x1.bec74p-126f, 0.0f, 0.0f, 0x1.092604p-92f, 0.0f,
     0x1.5462b6p-118f, 0.0f, 0.0f, 0x1.f1dd7cp-14f, 0.0f, 0.0f, 0x1.d66beap-104f,
     0.0f, 0.0f, 0x1.fe0022p-27f, 0x1.90ccbcp-101f, 0x1.449f44p-1f, 0x1.8d4a72p-17f,
     0.0f, 0x1.3cadd6p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.354158p-67f, 0x1.16c312p-58f, 0.0f, 0x1.7f9ceap-55f, 0x1.f9a7ap-105f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.14e6fp-107f, 0x1.86d98ap-45f, 0.0f, 0x1.0c0b3ap-59f,
     0x1.02a5cap-111f, 0x1.2c58bep-44f, 0x1.f028cp-48f, 0x1.08df42p-108f, 0.0f,
     0x1.78b0c2p-30f, 0.0f, 0.0f, 0x1.cbff4ap-108f, 0.0f, 0.0f, 0x1.04665p-45f, 0.0f,
     0.0f, 0.0f, 0x1.6d6fccp-39f, 0.0f, 0.0f, 0x1.15ca66p-106f, 0x1.9520b2p-12f,
     0x1.25771p-67f, 0x1.13581p-110f, 0.0f, 0.0f, 0x1.317d8p-11f, 0.0f, 0.0f,
     0x1.5e6c5ep-58f, 0x1.11dacap-7f, 0.0f, 0.0f, 0x1.b29b88p-90f, 0x1.0cb78cp-34f,
     0x1.1e7742p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.03e568p-81f, 0.0f,
     0x1.f04c06p-106f, 0x1.82331cp-64f, 0.0f, 0.0f, 0.0f, 0x1.48f652p-21f, 0.0f,
     0x1.ae7ce8p-77f, 0.0f, 0.0f, 0x1.95576p-14f, 0.0f, 0.0f, 0x1.cc5faep-116f,
     0x1.0c02aep-120f, 0x1.3e887p-4f, 0.0f, 0.0f, 0x1.20b146p-9f, 0.0f,
     0x1.6ca6e6p-23f, 0x1.bc40f2p-5f, 0x1.89ef7ap-42f, 0x1.d5c9e6p-121f,
     0x1.cc2ab4p-69f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.8f6f2cp-107f, 0.0f,
     0x1.45797cp-13f, 0x1.851566p-10f, 0.0f, 0.0f, 0.0f, 0x1.1864dp-100f,
     0x1.0c98ccp-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.132e14p-58f, 0.0f, 0x1.6701cap-47f,
     0.0f, 0x1.a57804p-19f, 0x1.30a416p-84f, 0.0f, 0.0f, 0x1.fc28c4p-68f,
     0x1.00ecc8p-15f, 0.0f, 0x1.a1626p-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dbab2ap-17f,
     0.0f, 0.0f, 0.0f, 0x1.1f538p-55f, 0x1.a473a2p-72f, 0.0f, 0.0f, 0.0f,
     0x1.4f3a52p-9f, 0.0f, 0x1.19ae0cp-116f, 0.0f, 0.0f, 0x1.c7a8ccp-26f,
     0x1.d7feep-41f, 0.0f, 0.0f, 0x1.af3f8cp-5f, 0x1.17976ap-44f, 0x1.d771a8p-110f,
     0x1.a1dd14p-113f, 0.0f, 0.0f, 0x1.bb398ap-105f, 0x1.73b2ecp-10f, 0x1.13a4a2p-86f,
     0x1.1088bep-85f, 0x1.ec094p-109f, 0.0f, 0.0f, 0.0f, 0x1.0a2176p-108f,
     0x1.4ad232p-16f, 0x1.4b3d7ap-69f, 0x1.e072p-74f, 0.0f, 0x1.650692p-95f,
     0x1.d4d204p-79f, 0x1.0187acp-58f, 0x1.64ca46p-117f, 0x1.6e277p-16f,
     0x1.f8eeeep-79f, 0x1.5042bap-22f, 0.0f, 0x1.256de2p-28f, 0x1.38f5a6p-38f,
     0x1.53480ep-29f, 0x1.be5f4ap-106f, 0.0f, 0x1.2168c2p-57f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.870c1p-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3c9bdap-48f, 0x1.7e4034p-57f,
     0x1.422e6ep-37f, 0.0f, 0.0f, 0x1.d8ca6p-1f, 0x1.42d17ap-89f, 0x1.45cb6p-75f,
     0x1.b2be26p-75f, 0x1.91f354p-70f, 0x1.8eb6bap-70f, 0x1.801c04p-58f,
     0x1.7180bcp-18f, 0.0f, 0x1.153bfap-116f, 0x1.67ec3ep-116f, 0.0f, 0x1.bf7986p-55f,
     0x1.94ef32p-67f, 0x1.4b2f94p-6f, 0.0f, 0x1.55e88ap-26f, 0.0f, 0.0f, 0.0f,
     0x1.c379aep-104f, 0x1.455eccp-42f, 0x1.facb04p-21f, 0.0f, 0x1.a13fa8p-119f,
     0x1.afef4ap-97f, 0.0f, 0.0f, 0x1.e1dc22p-47f, 0.0f, 0x1.97b19cp-32f, 0.0f,
     0x1.6da68ap-1f, 0.0f, 0x1.4a016ep-46f, 0x1.a1e76ep-95f, 0x1.dfdfb8p-111f,
     0x1.de9e18p-54f, 0x1.7b1976p-114f, 0.0f, 0x1.33219p-44f, 0.0f, 0x1.7c671ep-104f,
     0.0f, 0x1.33e728p-80f, 0x1.e1f7a8p-2f, 0.0f, 0.0f, 0x1.c31c0ap-91f, 0.0f, 0.0f,
     0x1.58cd74p-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.33ce0ep-14f, 0.0f,
     0.0f, 0.0f, 0x1.7d329ap-35f, 0.0f, 0.0f, 0.0f, 0x1.8f6916p-3f, 0x1.1c2cd6p-96f,
     0.0f, 0x1.ed7962p-57f, 0x1.b89be4p-36f, 0.0f, 0x1.d25dc6p-68f, 0x1.f0847cp-88f,
     0.0f, 0x1.638fep-55f, 0.0f, 0.0f, 0x1.ebacdap-87f, 0.0f, 0x1.b07008p-44f,
     0x1.b817a4p-56f, 0x1.74e4bap-77f, 0.0f, 0.0f, 0x1.3ffd1ap-14f, 0.0f, 0.0f, 0.0f,
     0x1.f8fd5p-47f, 0x1.e1eb6ep-27f, 0x1.45c4bep-18f, 0.0f, 0x1.6c653ap-3f, 0.0f,
     0x1.b83a42p-36f, 0x1.7de09ep-1f, 0.0f, 0.0f, 0.0f, 0x1.3ce488p-42f,
     0x1.43d016p-68f, 0x1.cd7d94p-90f, 0x1.8347ap-62f, 0x1.c741acp-1f, 0.0f,
     0x1.556e14p-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2aa714p-17f, 0x1.218c12p-36f,
     0.0f, 0.0f, 0.0f, 0x1.586e9cp-81f, 0x1.544e04p-16f, 0x1.ca026ep-77f,
     0x1.930e22p-77f, 0x1.cf4e3p-44f, 0x1.8a6562p-11f, 0.0f
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
            tmp1 = Sleef_finz_tgammaf8_u10kvx(tmp0);
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
    printf("Sleef_finz_tgammaf8_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_finz_tgammaf8_u10kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
