/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_sincospif8_u05kvx.c --function Sleef_sincospif8_u05kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 4 --function-input-vector-size 4 --precision sleef_sf2 \
 *     --bench --no-embedded-bin --target kv3
 *
 */
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <string.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef_float32x8_t_2 external_bench_wrapper_cst = {.x = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f},.y = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f}};
static const Sleef_float32x8_t_2 external_bench_wrapper_cst1 = {.x = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f},.y = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f}};
volatile Sleef_float32x8_t_2 external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0x1.2f00e6p-49f, 0.0f, 0x1.582228p-88f, 0.0f, 0x1.c279dp-25f, 0x1.707a76p-61f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.87077ep-17f, 0x1.c2e96cp-1f, 0.0f, 0.0f,
     0x1.01ab9p-81f, 0.0f, 0x1.1971e4p-28f, 0x1.50b84cp-59f, 0.0f, 0.0f,
     0x1.029e3p-65f, 0.0f, 0x1.49daaap-50f, 0x1.f5ef86p-77f, 0.0f, 0.0f,
     0x1.de5d98p-125f, 0x1.0c2ebp-122f, 0x1.d70174p-27f, 0.0f, 0x1.9949f2p-77f,
     0x1.1bf842p-94f, 0.0f, 0.0f, 0x1.2ceb3ap-113f, 0.0f, 0x1.a0bb06p-120f,
     0x1.8e5faep-66f, 0.0f, 0x1.e5ccdep-4f, 0x1.b010dep-61f, 0.0f, 0.0f,
     0x1.1ba6b4p-100f, 0.0f, 0.0f, 0x1.57cbf4p-80f, 0.0f, 0x1.9c0524p-113f,
     0x1.071ceep-108f, 0.0f, 0x1.291094p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.5888dep-120f, 0x1.b08256p-34f, 0.0f, 0x1.489276p-70f, 0x1.b92a8ap-80f,
     0x1.886b38p-49f, 0.0f, 0x1.5a85aep-78f, 0x1.9d69aap-23f, 0.0f, 0.0f,
     0x1.8804bep-51f, 0.0f, 0.0f, 0x1.827928p-63f, 0x1.314da4p-16f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.34197ep-112f, 0x1.a8d7dp-106f, 0.0f, 0x1.a8f468p-72f, 0x1.a8978ap-107f,
     0x1.57853cp-29f, 0.0f, 0x1.12b408p-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f4897p-34f,
     0x1.f0486p-42f, 0x1.84be3ep-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f9e878p-99f, 0.0f,
     0x1.2799b6p-122f, 0.0f, 0x1.e0e19p-118f, 0x1.f1a246p-50f, 0.0f, 0.0f,
     0x1.9cadd6p-56f, 0.0f, 0.0f, 0x1.123ad8p-76f, 0x1.4937b2p-58f, 0.0f, 0.0f,
     0x1.4e2db4p-2f, 0.0f, 0.0f, 0x1.bc5d7cp-111f, 0x1.eb5faap-7f, 0.0f,
     0x1.7159b8p-78f, 0x1.ab4288p-62f, 0x1.75afbcp-14f, 0.0f, 0x1.870758p-41f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9893f4p-2f, 0x1.3ff92ap-29f, 0x1.3263dap-94f, 0.0f,
     0x1.eacfd2p-84f, 0.0f, 0.0f, 0x1.d054acp-102f, 0.0f, 0x1.c7d0a8p-84f, 0.0f, 0.0f,
     0x1.2de6a2p-112f, 0.0f, 0.0f, 0.0f, 0x1.171b36p-123f, 0.0f, 0x1.a923fp-28f, 0.0f,
     0.0f, 0x1.8a206p-95f, 0.0f, 0.0f, 0x1.37d17p-86f, 0.0f, 0x1.a36cb8p-40f, 0.0f,
     0x1.14c7bp-65f, 0x1.8fa9bep-50f, 0x1.fdfcbcp-23f, 0x1.46d4c4p-45f,
     0x1.9180b6p-113f, 0x1.5772dap-39f, 0.0f, 0.0f, 0x1.95f326p-98f, 0.0f,
     0x1.b0546cp-117f, 0.0f, 0.0f, 0.0f, 0x1.35a73cp-4f, 0x1.40b5a8p-99f,
     0x1.e45a64p-93f, 0x1.b573b6p-9f, 0.0f, 0.0f, 0x1.e6689ep-86f, 0x1.b5103p-3f,
     0.0f, 0x1.18c1bep-16f, 0.0f, 0x1.66952p-1f, 0.0f, 0x1.600488p-47f,
     0x1.6cfc9ep-2f, 0.0f, 0x1.f3066p-40f, 0x1.e1d95p-52f, 0x1.acbd74p-121f, 0.0f,
     0x1.20965ep-119f, 0x1.b1174p-81f, 0x1.420c04p-110f, 0x1.0fbfaep-29f,
     0x1.46125p-48f, 0x1.cb473ap-34f, 0.0f, 0.0f, 0.0f, 0x1.8610cp-82f, 0.0f,
     0x1.c69ee8p-121f, 0.0f, 0.0f, 0.0f, 0x1.997616p-108f, 0x1.106fa4p-97f,
     0x1.504a74p-83f, 0.0f, 0x1.43252ap-7f, 0x1.6a61fp-22f, 0.0f, 0x1.4cfcap-85f,
     0.0f, 0.0f, 0.0f, 0x1.747454p-23f, 0.0f, 0.0f, 0x1.747c72p-94f, 0.0f,
     0x1.38f13cp-70f, 0x1.fdeebap-85f, 0.0f, 0x1.8775fp-65f, 0.0f, 0x1.fa5e84p-10f,
     0.0f, 0x1.f0da3ap-63f, 0x1.9bdcbcp-17f, 0x1.f5c77ep-46f, 0x1.626d6p-20f,
     0x1.eb7224p-6f, 0x1.b535ccp-47f, 0.0f, 0x1.088254p-102f, 0.0f, 0.0f,
     0x1.234388p-27f, 0.0f, 0x1.ffe658p-52f, 0.0f, 0.0f, 0x1.e7fc48p-86f,
     0x1.5c4c9cp-87f, 0x1.7ca12ap-126f, 0.0f, 0x1.6f3cd4p-15f, 0.0f, 0x1.f29d5cp-122f,
     0.0f, 0.0f, 0x1.9f704p-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cdecaep-67f, 0.0f, 0.0f,
     0x1.2a3232p-9f, 0x1.00766ap-27f, 0.0f, 0x1.be2c86p-120f, 0x1.b00f5ap-54f,
     0x1.db7564p-7f, 0.0f, 0x1.e1a402p-54f, 0x1.cd8828p-14f, 0.0f, 0x1.42bec2p-64f,
     0.0f, 0.0f, 0x1.56c02cp-118f, 0x1.fa134p-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3fe3c2p-16f, 0x1.e151dcp-48f, 0.0f, 0x1.256542p-74f, 0x1.009774p-59f, 0.0f,
     0x1.593488p-35f, 0x1.8c4d7ap-126f, 0.0f, 0x1.33e82ep-70f, 0.0f, 0x1.05f634p-10f,
     0x1.89f802p-11f, 0x1.aa116ap-57f, 0x1.f0c004p-43f, 0.0f, 0.0f, 0x1.517ad8p-60f,
     0.0f, 0x1.7743dcp-75f, 0.0f, 0x1.9313c8p-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.72acc2p-44f, 0.0f, 0.0f, 0x1.237f0ep-47f, 0x1.446624p-77f, 0.0f, 0.0f, 0.0f,
     0x1.6606dp-92f, 0x1.fc9c18p-68f, 0.0f, 0x1.ef5d92p-7f, 0.0f, 0x1.f82374p-62f,
     0.0f, 0.0f, 0.0f, 0x1.4f87c6p-115f, 0x1.567bf2p-76f, 0x1.915b6ap-58f, 0.0f, 0.0f,
     0x1.e6fbecp-114f, 0.0f, 0.0f, 0x1.7035ep-64f, 0.0f, 0x1.7f347p-85f, 0.0f, 0.0f,
     0.0f, 0x1.a2286cp-30f, 0.0f, 0x1.a1a97cp-32f, 0.0f, 0x1.1c6024p-6f,
     0x1.8105acp-72f, 0x1.e39e52p-107f, 0.0f, 0.0f, 0.0f, 0x1.406f34p-16f, 0.0f, 0.0f,
     0.0f, 0x1.cfccfp-14f, 0x1.15042p-105f, 0x1.d67176p-110f, 0x1.2fbf0ep-111f,
     0x1.4e32aap-6f, 0x1.a154e6p-25f, 0x1.94485cp-49f, 0.0f, 0.0f, 0x1.e53e44p-73f,
     0x1.10373ep-91f, 0x1.d9fep-70f, 0x1.de9b5cp-90f, 0.0f, 0.0f, 0x1.d1706ap-25f,
     0x1.e1a39p-124f, 0x1.f49d02p-48f, 0x1.4db2eep-76f, 0.0f, 0.0f, 0.0f,
     0x1.5e7e5ap-109f, 0x1.65576ep-50f, 0x1.e47bf6p-30f, 0x1.1c28fep-55f, 0.0f,
     0x1.7ecc2cp-112f, 0x1.8a3e5p-53f, 0x1.349ap-8f, 0x1.5e58f2p-6f, 0.0f, 0.0f, 0.0f,
     0x1.4baf18p-36f, 0.0f, 0x1.60c504p-111f, 0.0f, 0x1.d9965cp-7f, 0.0f,
     0x1.ecdb3ep-33f, 0.0f, 0x1.4a531p-27f, 0x1.322d9ap-36f, 0.0f, 0x1.83e59cp-33f,
     0x1.82188cp-13f, 0x1.b7e8f8p-59f, 0x1.a8da98p-93f, 0.0f, 0x1.2d660ep-40f, 0.0f,
     0x1.942bacp-48f, 0.0f, 0.0f, 0x1.b310d4p-49f, 0x1.449f94p-55f, 0x1.98bcp-107f,
     0x1.963788p-46f, 0x1.df7edep-19f, 0.0f, 0.0f, 0x1.4dc86ap-25f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f11a68p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cc39dcp-21f, 0x1.49e1ap-41f,
     0.0f, 0.0f, 0.0f, 0x1.c31edep-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cf3884p-60f, 0.0f,
     0.0f, 0x1.218f2cp-93f, 0.0f, 0x1.ba894p-122f, 0x1.fb3632p-20f, 0x1.2e63c8p-41f,
     0.0f, 0x1.9c0b2p-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.403482p-62f, 0x1.e1088ep-34f,
     0.0f, 0.0f, 0.0f, 0x1.eefe3cp-107f, 0.0f, 0x1.4ed38ep-60f, 0x1.decc8ep-123f,
     0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.44c7cap-28f, 0x1.d5d56ap-62f, 0x1.911e76p-60f,
     0.0f, 0x1.9b6df2p-87f, 0.0f, 0x1.0bedap-93f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9de856p-78f, 0x1.7ca346p-88f, 0x1.920a26p-124f, 0x1.d4455ep-116f, 0.0f,
     0x1.852374p-51f, 0x1.1c7f06p-55f, 0x1.af25b4p-44f, 0x1.6a050cp-32f, 0.0f, 0.0f,
     0.0f, 0x1.5f8e78p-41f, 0x1.37d6fp-66f, 0.0f, 0.0f, 0.0f, 0x1.0cffc8p-12f, 0.0f,
     0.0f, 0x1.27caccp-112f, 0x1.d1a9dp-92f, 0.0f, 0x1.a5fdf4p-103f, 0x1.0c0cbep-54f,
     0x1.58e4eap-30f, 0x1.8988aep-96f, 0.0f, 0.0f, 0.0f, 0x1.37e7d8p-3f,
     0x1.13e234p-51f, 0x1.77679cp-103f, 0x1.e8101ep-59f, 0.0f, 0x1.f5b2acp-15f, 0.0f,
     0.0f, 0x1.f8825ep-35f, 0x1.9c2874p-12f, 0x1.6f4732p-7f, 0x1.8719a2p-112f, 0.0f,
     0x1.94bf06p-94f, 0x1.ea63d6p-122f, 0x1.80cbbep-121f, 0x1.9ede08p-105f, 0.0f,
     0x1.3b4d5cp-124f, 0x1.1f1cd6p-8f, 0.0f, 0.0f, 0x1.211494p-91f, 0x1.2d01bap-113f,
     0x1.7ed73p-17f, 0.0f, 0x1.41377cp-66f, 0x1.b8d4c8p-67f, 0.0f, 0.0f,
     0x1.cf88e4p-106f, 0.0f, 0x1.7082fp-103f, 0.0f, 0x1.8140c6p-121f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.fa55aep-101f, 0x1.830768p-33f, 0.0f, 0.0f, 0x1.748ae6p-23f,
     0x1.23917ep-90f, 0x1.f0903ap-101f, 0x1.21089ap-26f, 0x1.e18adep-102f,
     0x1.744892p-123f, 0x1.a138c4p-18f, 0x1.b1930cp-31f, 0x1.9935eep-124f, 0.0f,
     0x1.51159p-86f, 0x1.a6871ap-106f, 0.0f, 0x1.6d2966p-83f, 0x1.b8697p-22f, 0.0f,
     0.0f, 0x1.effdc2p-12f, 0.0f, 0x1.55fa6ep-58f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0b4c84p-65f, 0x1.d93d94p-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c1fcdp-98f, 0.0f,
     0.0f, 0x1.5eb80ap-95f, 0x1.0d596ap-91f, 0x1.ac8a96p-36f, 0.0f, 0x1.c84dd4p-18f,
     0.0f, 0.0f, 0x1.e6db54p-109f, 0x1.2fba4cp-9f, 0x1.58f83p-116f, 0x1.c7f3f4p-74f,
     0.0f, 0x1.bffd32p-30f, 0x1.c6042ap-91f, 0.0f, 0.0f, 0x1.1ec7bep-25f, 0.0f, 0.0f,
     0.0f, 0x1.63dd28p-54f, 0x1.af1aeap-62f, 0x1.20317cp-12f, 0x1.62305p-17f, 0.0f,
     0.0f, 0x1.8ec6fap-44f, 0.0f, 0x1.4ef93ap-12f, 0.0f, 0x1.e57b48p-58f, 0.0f, 0.0f,
     0.0f, 0x1.1a25e4p-46f, 0.0f, 0x1.3e0d0ap-39f, 0.0f, 0x1.fef39p-99f, 0.0f,
     0x1.b7a84ep-94f, 0x1.7d12cp-88f, 0.0f, 0x1.691dd4p-55f, 0x1.f46a0ep-124f,
     0x1.be6cc2p-26f, 0x1.e748f8p-76f, 0.0f, 0x1.cf4ep-96f, 0.0f, 0x1.b87342p-99f,
     0x1.a59b92p-81f, 0x1.41ee44p-73f, 0x1.072da8p-68f, 0.0f, 0.0f, 0.0f,
     0x1.fc33aap-115f, 0x1.234fd4p-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7c5f64p-86f,
     0.0f, 0.0f, 0x1.139476p-11f, 0x1.715478p-17f, 0.0f, 0.0f, 0.0f, 0x1.150a4ep-29f,
     0.0f, 0x1.b6816ap-55f, 0x1.e6e6p-17f, 0.0f, 0.0f, 0x1.f3e50ap-99f,
     0x1.70a564p-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.885b46p-40f,
     0x1.0b4facp-112f, 0x1.722ba4p-70f, 0x1.e1a5a6p-66f, 0.0f, 0x1.766da6p-55f,
     0x1.e8b254p-52f, 0.0f, 0x1.28cf2ep-62f, 0.0f, 0.0f, 0x1.e93d3p-102f, 0.0f,
     0x1.61fe7cp-111f, 0x1.a521a6p-45f, 0x1.f000c8p-65f, 0x1.f27e7ap-34f,
     0x1.b657f4p-71f, 0.0f, 0.0f, 0x1.db53p-48f, 0x1.b4d122p-20f, 0x1.3cf32p-116f,
     0x1.ff8ef6p-41f, 0.0f, 0x1.30ce62p-32f, 0x1.a52ea4p-111f, 0.0f, 0x1.83b474p-12f,
     0x1.6c127ap-68f, 0x1.ba1e3ap-39f, 0x1.4fb5cp-59f, 0.0f, 0x1.d439fp-93f,
     0x1.02ae98p-63f, 0x1.a23cfp-46f, 0x1.52a142p-29f, 0x1.bdab46p-43f,
     0x1.39531ap-7f, 0x1.84b52p-113f, 0.0f, 0.0f, 0x1.5534fcp-71f, 0x1.9314d4p-125f,
     0x1.405c42p-29f, 0.0f, 0x1.6a5a8ap-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e83a3cp-88f,
     0.0f, 0.0f, 0.0f, 0x1.c340b8p-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.047484p-55f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8d53e8p-21f, 0.0f, 0x1.87dd7cp-36f,
     0.0f, 0.0f, 0.0f, 0x1.ea8e78p-40f, 0.0f, 0x1.813a7p-37f, 0.0f, 0.0f, 0.0f,
     0x1.b77352p-36f, 0.0f, 0x1p0f, 0x1.5b9a7ap-21f, 0.0f, 0.0f, 0x1.c28aeep-8f,
     0x1.264122p-119f, 0.0f, 0.0f, 0x1.774acap-103f, 0x1.baa794p-45f, 0x1.5a3ff2p-71f,
     0x1.7b2b42p-83f, 0.0f, 0x1.0f7e06p-53f, 0.0f, 0x1.00501cp-88f, 0x1.ac18aep-36f,
     0x1.169a4ep-60f, 0x1.310896p-122f, 0x1.939b1cp-47f, 0.0f, 0x1.fcdb1ap-96f,
     0x1.935dfp-101f, 0x1.4380fep-26f, 0.0f, 0.0f, 0x1.06c2e6p-1f, 0.0f, 0.0f,
     0x1.070882p-51f, 0x1.43825ap-8f, 0.0f, 0x1.eed4b6p-22f, 0x1.424ebp-23f,
     0x1.faba72p-27f, 0.0f, 0x1.c0f64ep-62f, 0.0f, 0x1.3fdd42p-57f, 0x1.ae898ap-73f,
     0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.96c73ep-74f, 0.0f, 0x1.6bc7aap-120f,
     0x1.cb156p-63f, 0x1.fd2f3cp-99f, 0x1.ba98cap-85f, 0x1.0f685ep-119f, 0.0f, 0.0f,
     0x1.11e5d8p-67f, 0x1.b33faap-76f, 0x1.66e798p-88f, 0x1.32fd88p-62f, 0.0f, 0.0f,
     0x1.5f586cp-55f, 0x1.698fe6p-60f, 0.0f, 0.0f, 0.0f, 0x1.731098p-60f,
     0x1.35120cp-75f, 0.0f, 0x1.686d84p-49f, 0.0f, 0x1.03b8d6p-42f, 0.0f,
     0x1.f65c9p-57f, 0x1.bd45bcp-87f, 0.0f, 0.0f, 0x1.a0a6ccp-91f, 0x1.c2fe32p-109f,
     0x1.e14524p-7f, 0.0f, 0x1.0c79dcp-49f, 0x1.f62676p-49f, 0.0f, 0x1.9e18dap-70f,
     0x1.25af7p-57f, 0x1.7f26b2p-31f, 0.0f, 0x1.0adb7ap-29f, 0x1.f671p-76f,
     0x1.1f01b8p-125f, 0.0f, 0.0f, 0.0f, 0x1.c70e78p-44f, 0.0f, 0x1.ede52ap-44f,
     0x1.5eca7cp-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5f173ap-126f, 0x1.7a7aep-85f, 0.0f,
     0x1.8c6aecp-75f, 0x1.100acep-44f, 0x1.c7c72p-44f, 0x1.67c846p-88f, 0.0f, 0.0f,
     0.0f, 0x1.706092p-13f, 0x1.82b712p-72f, 0.0f, 0x1.7d016p-4f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.539c76p-116f, 0.0f, 0.0f, 0x1.22d5d8p-16f, 0.0f,
     0.0f, 0.0f, 0x1.de26dcp-28f, 0.0f, 0x1.37c006p-38f, 0.0f, 0x1.a34806p-107f, 0.0f,
     0.0f, 0.0f, 0x1.bcd77ap-1f, 0.0f, 0x1.5c37ap-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ea07fp-47f, 0x1.6c3e7cp-7f, 0x1.7bfa5ep-46f, 0.0f,
     0x1.66a2b6p-74f, 0.0f, 0.0f, 0x1.5072b6p-6f, 0x1.721832p-118f, 0.0f,
     0x1.ad4512p-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ea96cep-93f,
     0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.addb72p-112f, 0.0f, 0.0f, 0x1.dff236p-52f,
     0x1.23a4p-111f, 0x1.12b9ep-16f, 0.0f, 0x1.7fe966p-42f, 0.0f, 0x1.9892eep-92f,
     0x1.00ff9p-30f, 0x1.6fa78p-6f, 0x1.0d813ap-18f, 0x1.22b6e8p-16f, 0x1.4e1d1p-90f,
     0x1.3e3dc4p-8f, 0x1.142be6p-105f, 0x1.9e1ebap-106f, 0.0f, 0.0f, 0.0f,
     0x1.23956cp-10f, 0.0f, 0x1.d6a734p-22f, 0x1.896a9ap-121f, 0x1.7c98a6p-25f,
     0x1.829c4ep-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3b234ap-89f, 0x1.3c82aep-35f, 0.0f,
     0.0f, 0x1.b530dp-84f, 0.0f, 0.0f, 0.0f, 0x1.e893e2p-95f, 0x1.31d528p-66f, 0.0f,
     0x1.041cdp-115f, 0x1.36352cp-1f, 0.0f, 0x1.c0f066p-27f, 0x1.a4fb2p-44f, 0.0f,
     0x1.479602p-25f, 0.0f, 0.0f, 0.0f, 0x1.de4p-68f, 0.0f, 0x1.3a4e7ep-63f, 0.0f,
     0x1.7ce042p-35f, 0x1.4df4bcp-121f, 0x1.d3657ap-35f, 0x1.9d87d2p-90f,
     0x1.e4a86ap-55f, 0x1.694d0ep-125f, 0.0f, 0.0f, 0.0f, 0x1.10255cp-119f,
     0x1.f2f738p-49f, 0x1.48cca8p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b04fdep-23f, 0.0f, 0.0f, 0.0f, 0x1.de9ffap-7f, 0x1.6a558ep-16f, 0.0f, 0.0f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef_float32x8_t_2 global_bench_acc;
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
        Sleef_float32x8_t_2 local_acc;
        int32_t i;
        ml_float8_t tmp0;
        ml_float8_t tmp1;
        ml_float8_t tmp2;
        ml_float8_t tmp3;
        ml_float8_t tmp4;
        ml_float8_t tmp5;
        Sleef_float32x8_t_2 tmp6;
        int32_t tmp7;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1004));){
            ml_float8_t tmp0;
            Sleef_float32x8_t_2 tmp1;
            ml_float8_t tmp2;
            ml_float8_t tmp3;
            ml_float8_t tmp4;
            ml_float8_t tmp5;
            ml_float8_t tmp6;
            ml_float8_t tmp7;
            Sleef_float32x8_t_2 tmp8;
            int32_t tmp9;

            memcpy(&tmp0, ((ml_float8_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            tmp1 = Sleef_sincospif8_u05kvx(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = local_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = local_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef_float32x8_t_2) {.x=tmp4, .y=tmp7});
            local_acc = tmp8;
            tmp9 = i + INT32_C(8);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = local_acc.x;
        tmp2 = tmp0 + tmp1;
        tmp3 = global_bench_acc.y;
        tmp4 = local_acc.y;
        tmp5 = tmp3 + tmp4;
        tmp6 = ((Sleef_float32x8_t_2) {.x=tmp2, .y=tmp5});
        global_bench_acc = tmp6;
        tmp7 = j + INT32_C(1);
        j = tmp7;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_sincospif8_u05kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_sincospif8_u05kvx bench acc {.x=[%a, %a, %a, %a], .y=[%a, %a, %a, %a]}\n", global_bench_acc.x[0], global_bench_acc.x[1], global_bench_acc.x[2], global_bench_acc.x[3], global_bench_acc.y[0], global_bench_acc.y[1], global_bench_acc.y[2], global_bench_acc.y[3]);
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
