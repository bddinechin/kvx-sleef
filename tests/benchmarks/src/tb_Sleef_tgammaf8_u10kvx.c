/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_tgammaf8_u10kvx.c --function Sleef_tgammaf8_u10kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 8 --function-input-vector-size 8 --bench \
 *     --no-embedded-bin --target kv3
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
     0.0f, 0.0f, 0.0f, 0x1.0fc0fep-19f, 0.0f, 0x1.da56f2p-62f, 0x1.72f07ep-16f, 0.0f,
     0.0f, 0.0f, 0x1.6a6d88p-119f, 0x1.bb59aep-110f, 0.0f, 0.0f, 0x1.3ab1ep-43f, 0.0f,
     0x1.35d13ap-24f, 0x1.2e2204p-107f, 0x1.544208p-54f, 0x1.2b94p-9f,
     0x1.5dc96ep-87f, 0x1.63012cp-71f, 0x1.c0f374p-110f, 0.0f, 0x1.0e30e4p-26f,
     0x1.f6d3aep-33f, 0x1.08633cp-100f, 0x1.91111cp-71f, 0x1.2d8774p-95f, 0.0f,
     0x1.0a5dfep-33f, 0x1.4447d8p-65f, 0.0f, 0.0f, 0.0f, 0x1.ddeaacp-110f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ddb96ep-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.290f46p-71f, 0x1.00926p-69f, 0x1.7f527p-123f, 0.0f, 0.0f, 0x1.ec167p-38f,
     0.0f, 0.0f, 0x1.0d387cp-28f, 0x1p0f, 0x1.0aaa34p-81f, 0x1.bae156p-70f, 0.0f,
     0.0f, 0x1.258808p-93f, 0x1.88ca6p-11f, 0x1.bae416p-59f, 0x1.8b422ap-111f,
     0x1.01b9b2p-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0cc89cp-89f, 0.0f,
     0x1.732592p-124f, 0x1.2419a8p-31f, 0.0f, 0x1.355f4p-110f, 0x1.593f5ep-85f, 0.0f,
     0.0f, 0x1.caf43ap-4f, 0x1.211b9p-64f, 0.0f, 0x1.b3dedep-2f, 0.0f,
     0x1.a3ec0cp-10f, 0x1.6f4adcp-97f, 0.0f, 0x1.79d8c8p-74f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7b446p-34f, 0.0f, 0x1.d318cp-2f, 0x1.147c0ep-102f, 0x1.8a948ap-38f,
     0x1.1cc6cap-125f, 0x1.74e40cp-105f, 0x1.51470ap-8f, 0.0f, 0x1.e4c6ccp-117f, 0.0f,
     0.0f, 0x1.b34992p-22f, 0.0f, 0x1.e53234p-15f, 0x1.0e3a18p-93f, 0.0f, 0.0f, 0.0f,
     0x1.1798fp-51f, 0x1.101296p-2f, 0x1.cd3824p-17f, 0.0f, 0x1.5e9a48p-16f,
     0x1.53ca92p-25f, 0x1.e65772p-109f, 0.0f, 0.0f, 0x1.385dd4p-6f, 0x1.e2a8fep-88f,
     0.0f, 0x1.3eee2cp-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cdd4f4p-41f, 0x1.a8ed7ap-45f,
     0x1.75778cp-40f, 0.0f, 0x1.a72e52p-79f, 0x1.0f52cp-39f, 0x1.059d52p-49f,
     0x1.cba326p-57f, 0.0f, 0x1.0eb1acp-15f, 0.0f, 0x1.029056p-101f, 0x1.9d4108p-29f,
     0.0f, 0.0f, 0x1.235b6cp-119f, 0x1.b4f36ap-102f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0fe0eap-87f, 0.0f, 0x1.b0b22ap-116f, 0x1.ffa65ap-76f, 0x1.9f2afp-95f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.6e983cp-120f, 0x1.6a7722p-109f, 0x1.6c8024p-2f, 0.0f,
     0x1.627a08p-118f, 0x1.e5e816p-49f, 0x1p0f, 0x1.ada334p-62f, 0x1.075bf4p-22f,
     0.0f, 0.0f, 0x1.20c1dap-114f, 0x1.b8a192p-82f, 0x1.474d66p-37f, 0.0f, 0.0f,
     0x1.6d95b8p-123f, 0.0f, 0.0f, 0x1.f7de68p-76f, 0.0f, 0.0f, 0x1.fe326ap-25f, 0.0f,
     0x1p0f, 0x1.c9797ep-60f, 0.0f, 0x1.c1a77ep-54f, 0.0f, 0x1.308cb2p-87f,
     0x1.7d6aep-68f, 0.0f, 0.0f, 0x1.4611dep-28f, 0x1.db0234p-25f, 0x1.71c726p-35f,
     0.0f, 0.0f, 0x1.8dd64cp-75f, 0.0f, 0.0f, 0x1.ace70ap-5f, 0x1.d14358p-93f, 0.0f,
     0x1.188474p-6f, 0x1.54b8bep-71f, 0.0f, 0x1.43509p-43f, 0.0f, 0.0f,
     0x1.08187cp-49f, 0x1.5f658ap-96f, 0x1.286d12p-105f, 0.0f, 0x1.a5c7b6p-88f,
     0x1.61e6ccp-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6259d2p-108f, 0x1.690922p-11f, 0.0f,
     0.0f, 0.0f, 0x1.5ab4d6p-66f, 0x1.a21c2ap-49f, 0.0f, 0.0f, 0x1.2e992ap-16f, 0.0f,
     0x1.82603cp-33f, 0x1.e52ab8p-67f, 0.0f, 0.0f, 0x1.e44128p-85f, 0x1.b68614p-59f,
     0x1.c5b1aep-24f, 0x1.c6b1c8p-91f, 0x1.a0a644p-4f, 0.0f, 0.0f, 0.0f,
     0x1.3c6c3ap-93f, 0x1.2fc3a6p-92f, 0.0f, 0.0f, 0x1.ec768ep-32f, 0.0f, 0.0f,
     0x1.ae318ap-106f, 0x1.10f874p-38f, 0.0f, 0x1.a6ccb2p-116f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.1240eep-121f, 0.0f, 0x1.a3287cp-104f, 0x1.ff52ep-43f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.bac564p-20f, 0.0f, 0x1.b0cc4cp-72f, 0x1.f58eacp-48f, 0.0f,
     0.0f, 0x1.89f90ep-116f, 0.0f, 0x1.269d16p-94f, 0x1.f9a002p-53f, 0x1.955ef2p-104f,
     0x1.71a554p-96f, 0.0f, 0.0f, 0x1.6e47d6p-106f, 0x1.98a19cp-23f, 0.0f,
     0x1.d52de4p-28f, 0x1.d6e798p-98f, 0x1.b26948p-39f, 0.0f, 0x1.4a6dbp-105f, 0.0f,
     0.0f, 0x1.0295a6p-36f, 0x1.a130ap-36f, 0x1.b62dbp-12f, 0x1.6da038p-66f, 0.0f,
     0x1.ab73f6p-118f, 0.0f, 0.0f, 0x1.845c7p-35f, 0x1.3eef32p-64f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.3ca1aep-95f, 0.0f, 0x1.7d931ap-57f, 0x1.34bacep-19f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.49af5ep-30f, 0x1.8a783cp-47f,
     0x1.9aa7dcp-58f, 0x1.e5fb76p-94f, 0.0f, 0x1.b6c98ap-54f, 0.0f, 0x1.c823dcp-109f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b73a82p-25f, 0.0f, 0x1.273d7cp-112f, 0x1.e138ccp-92f,
     0x1.07aa04p-4f, 0x1.d4fc58p-60f, 0x1.eae4d6p-119f, 0x1.c01998p-11f,
     0x1.7f533ap-50f, 0x1.2c256p-16f, 0.0f, 0.0f, 0x1.248156p-100f, 0x1.101fa2p-121f,
     0.0f, 0x1.ba752ep-43f, 0x1.7cf1cp-91f, 0.0f, 0x1.c007b4p-98f, 0.0f,
     0x1.8d2af4p-117f, 0x1.9dbc44p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bf4e8p-60f, 0x1.e19652p-17f, 0.0f, 0x1.332682p-103f, 0.0f, 0.0f,
     0x1.ebe632p-79f, 0.0f, 0.0f, 0x1.045fecp-95f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2ecb1p-26f, 0.0f, 0x1.16883ep-97f, 0.0f, 0.0f, 0x1.25dae4p-10f, 0.0f, 0.0f,
     0x1.fa183ep-9f, 0.0f, 0.0f, 0x1.8ea0ep-54f, 0.0f, 0.0f, 0x1.11eab2p-103f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.035bf6p-23f, 0.0f, 0.0f, 0.0f, 0x1.e04ca6p-91f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d4c368p-79f, 0.0f, 0x1.bff7bcp-50f, 0.0f, 0x1.94fc02p-64f,
     0x1.11933p-21f, 0x1.060472p-80f, 0.0f, 0.0f, 0x1.c955d2p-35f, 0x1.c53a9cp-89f,
     0.0f, 0x1.ad90d4p-42f, 0.0f, 0x1.bddbc6p-64f, 0.0f, 0.0f, 0.0f, 0x1.50726ep-76f,
     0.0f, 0x1.21ee7p-54f, 0.0f, 0.0f, 0x1.c8fceap-69f, 0x1.67d02p-47f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c824cap-83f, 0x1.fbbb14p-119f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.67a046p-13f, 0x1.e51acp-22f, 0x1.60d4f4p-58f,
     0x1.d3f67ep-112f, 0.0f, 0x1.a9583ap-21f, 0x1.8555aep-46f, 0x1.eb5cd4p-42f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.653594p-123f, 0.0f, 0x1.01b274p-34f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.679bdp-71f, 0x1.302d9ep-123f, 0.0f, 0x1.49b83cp-88f, 0.0f,
     0x1.f2ea24p-111f, 0x1.6ba37ap-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cf7562p-116f, 0x1.0c7758p-119f, 0x1.b54168p-88f, 0.0f, 0x1.96e8c6p-119f,
     0.0f, 0x1.38daep-36f, 0x1.f5f8c6p-26f, 0.0f, 0.0f, 0x1.3c5db4p-7f,
     0x1.7bc7aep-25f, 0.0f, 0x1.6f14bap-119f, 0x1.b36168p-40f, 0x1.ccdc82p-33f, 0.0f,
     0.0f, 0.0f, 0x1.d70c04p-36f, 0x1.38571ep-25f, 0x1.921e76p-24f, 0.0f,
     0x1.f7e75ep-117f, 0x1.641ea8p-97f, 0x1.6f2934p-31f, 0x1.a7c2fep-56f,
     0x1.c14bdap-90f, 0x1.7d1d74p-15f, 0x1.2f1d9ap-122f, 0x1.f88d5ep-126f, 0.0f, 0.0f,
     0x1.08703cp-37f, 0.0f, 0.0f, 0.0f, 0x1.06c664p-117f, 0x1.b0ea86p-83f,
     0x1.9b5154p-95f, 0x1.5c739ap-113f, 0x1.48481ep-43f, 0.0f, 0x1.997266p-76f,
     0x1.63492ap-27f, 0.0f, 0.0f, 0x1.7b7df2p-58f, 0.0f, 0.0f, 0.0f, 0x1.69f70ep-36f,
     0x1.28f322p-6f, 0.0f, 0.0f, 0.0f, 0x1.ef6a42p-59f, 0.0f, 0.0f, 0x1.ac8e16p-18f,
     0x1.bac19ep-43f, 0.0f, 0x1.eb81b6p-83f, 0.0f, 0x1.9a85dep-85f, 0.0f, 0.0f, 0.0f,
     0x1.b7f24p-15f, 0.0f, 0.0f, 0x1.a36b06p-116f, 0x1.146896p-4f, 0x1.b7f70cp-120f,
     0x1.4f0586p-63f, 0.0f, 0x1.ff5f72p-72f, 0.0f, 0.0f, 0x1.21e5d8p-82f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d09c04p-29f, 0x1.22beecp-10f, 0x1.c13382p-39f, 0x1.23093ap-122f,
     0.0f, 0.0f, 0.0f, 0x1.2fe6f8p-51f, 0.0f, 0x1.4f7362p-80f, 0x1p0f, 0.0f, 0.0f,
     0x1.8ed064p-77f, 0x1.208474p-106f, 0x1.49c614p-117f, 0x1.ed6fecp-41f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.59f2dcp-92f, 0x1.52f718p-107f, 0x1.418dd4p-49f, 0x1.1bdbaep-81f,
     0x1.9915b4p-66f, 0.0f, 0x1.95602ep-82f, 0.0f, 0x1.1ef4d2p-23f, 0x1.31a256p-92f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b5859ap-76f, 0x1.383aacp-27f, 0.0f,
     0x1.3586c2p-36f, 0x1.2f7e5ap-59f, 0.0f, 0.0f, 0.0f, 0x1.6f6154p-49f, 0.0f,
     0x1.68b048p-109f, 0x1.84ffc6p-32f, 0x1.f1fa5ap-96f, 0.0f, 0.0f, 0x1.ca5ddcp-72f,
     0x1.26f564p-65f, 0.0f, 0.0f, 0.0f, 0x1.15cfcp-35f, 0x1.b8a674p-97f, 0.0f,
     0x1.22d526p-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3313b6p-67f, 0.0f, 0.0f,
     0x1.c5e57ap-30f, 0.0f, 0.0f, 0x1.77bc6p-121f, 0x1.937a12p-101f, 0x1.b4c0f2p-21f,
     0.0f, 0x1.c57ce8p-28f, 0x1.e5956p-38f, 0x1.8570a6p-53f, 0x1.6ccb38p-14f, 0.0f,
     0x1.20eb1ep-35f, 0.0f, 0.0f, 0x1.8da2a6p-36f, 0.0f, 0x1.ef09dcp-112f,
     0x1.be66bep-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.43126ap-79f, 0x1.b9654ap-100f,
     0x1.66098cp-86f, 0x1.717928p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c043a2p-100f,
     0x1.9261e6p-53f, 0x1.638554p-8f, 0.0f, 0x1.2e7914p-7f, 0x1.a04cbap-48f,
     0x1.0e236ep-71f, 0x1.ee0daap-106f, 0.0f, 0x1.9aaa5p-118f, 0x1.ae4072p-53f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.70745ap-72f, 0.0f, 0x1.52b742p-36f, 0.0f, 0x1.5b3c64p-81f,
     0x1.c405c8p-21f, 0.0f, 0.0f, 0.0f, 0x1.87bfbep-88f, 0.0f, 0.0f, 0x1.960b86p-37f,
     0x1.64d4d6p-103f, 0x1.a4a4aep-86f, 0x1.1b496p-83f, 0.0f, 0x1.e6724ep-79f,
     0x1.d9809ep-58f, 0x1.08fa98p-91f, 0.0f, 0x1.9fe84ap-119f, 0x1.6aab1ep-121f,
     0x1.406c34p-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a1de06p-18f, 0x1.4272bap-116f,
     0x1.d21d34p-27f, 0x1.285e7p-63f, 0.0f, 0.0f, 0x1.3b2784p-1f, 0x1.8d2b5ap-49f,
     0.0f, 0.0f, 0x1.415744p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.38beb4p-29f,
     0x1.a43d52p-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d1ce3ap-100f, 0.0f, 0.0f,
     0x1.134bcep-19f, 0x1.b4fe5ap-48f, 0x1.3bd604p-23f, 0.0f, 0.0f, 0x1.59d11ep-49f,
     0x1.503cap-27f, 0x1.a58146p-104f, 0.0f, 0.0f, 0x1.187142p-53f, 0x1.0733f4p-11f,
     0.0f, 0x1.13b73ap-122f, 0x1.080e12p-73f, 0.0f, 0x1.28b078p-47f, 0.0f, 0.0f, 0.0f,
     0x1.52c4bap-105f, 0.0f, 0.0f, 0.0f, 0x1.52a79cp-8f, 0.0f, 0.0f, 0.0f,
     0x1.2992c6p-7f, 0x1.43c7e4p-83f, 0x1.7699dap-64f, 0.0f, 0x1.537c88p-28f,
     0x1.df0968p-48f, 0.0f, 0.0f, 0x1.486fb2p-87f, 0x1.e5695ap-105f, 0x1.50ab58p-45f,
     0x1.751a5ep-81f, 0.0f, 0x1.4278a4p-112f, 0.0f, 0.0f, 0x1.b8475p-32f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4ba364p-13f, 0.0f, 0.0f, 0.0f, 0x1.1e2e2cp-26f,
     0.0f, 0.0f, 0x1.da375p-9f, 0x1.950bd2p-5f, 0.0f, 0.0f, 0x1.d9570cp-47f, 0.0f,
     0.0f, 0x1.2eb45ep-113f, 0.0f, 0.0f, 0.0f, 0x1.f5a968p-32f, 0x1.1e3098p-125f,
     0.0f, 0.0f, 0x1.42998p-107f, 0.0f, 0x1.bd7bf6p-50f, 0x1.48e172p-80f, 0.0f, 0.0f,
     0x1.c6f874p-9f, 0x1.d0fe14p-30f, 0x1.ba414ap-35f, 0x1.26ea6ep-25f, 0.0f,
     0x1.63a6fcp-72f, 0.0f, 0x1.a0c206p-57f, 0x1.8dec32p-15f, 0.0f, 0x1.c3884p-61f,
     0.0f, 0x1.3e235ap-82f, 0x1.7a6222p-95f, 0x1.462c18p-40f, 0x1.d14b1cp-96f,
     0x1.837f1cp-35f, 0x1.dffdp-88f, 0x1.28bcf2p-124f, 0x1.736bdap-3f,
     0x1.705578p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ae5ec2p-113f, 0.0f, 0.0f,
     0x1.4af3dcp-71f, 0.0f, 0.0f, 0x1.6e1a3ep-39f, 0x1.067ddep-26f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.be3fa2p-117f, 0x1.0a3d08p-51f, 0x1.8939eap-86f, 0.0f, 0.0f,
     0x1.fc429p-6f, 0.0f, 0.0f, 0x1.a6476cp-67f, 0x1.d2d1a4p-83f, 0x1.269bb6p-44f,
     0.0f, 0x1.d100e6p-29f, 0.0f, 0.0f, 0x1.99fdeep-5f, 0.0f, 0x1.a04daap-21f,
     0x1.10b02ep-49f, 0x1.3dc46ap-112f, 0x1.bcd9bp-29f, 0x1.6225a8p-3f,
     0x1.0adbe4p-29f, 0x1.6c1ec8p-33f, 0.0f, 0x1.098ceep-12f, 0x1.8c11b8p-18f, 0.0f,
     0x1.ad0cbcp-38f, 0x1.c09782p-121f, 0x1.31ff22p-54f, 0.0f, 0x1.23c1acp-110f, 0.0f,
     0.0f, 0x1.5b76fcp-91f, 0x1.81fecp-93f, 0x1.74ab32p-24f, 0.0f, 0.0f,
     0x1.f87536p-33f, 0x1.b0cb26p-24f, 0x1.291a4ep-111f, 0x1.885bdcp-34f, 0.0f,
     0x1.360c4cp-118f, 0.0f, 0x1.c8b276p-5f, 0x1.79f4eep-100f, 0.0f, 0x1.81dc68p-66f,
     0x1.eac4e4p-123f, 0.0f, 0.0f, 0.0f, 0x1.193732p-98f, 0.0f, 0.0f, 0x1.bd6be2p-40f,
     0x1.01df5cp-124f, 0.0f, 0x1.c6dd14p-41f, 0x1.234b86p-8f, 0x1.16388ap-60f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.69cbf4p-35f, 0x1.e64492p-110f, 0x1.dfe8bp-38f, 0.0f,
     0x1.3a2db6p-95f, 0x1.221cf6p-7f, 0x1.498836p-52f, 0.0f, 0.0f, 0x1.f024aep-9f,
     0x1.f839aap-52f, 0x1.1cf9dp-103f, 0x1.e3f0ccp-97f, 0x1.b1f3d2p-64f, 0.0f, 0.0f,
     0x1.56f652p-99f, 0.0f, 0x1.8f38aep-31f, 0.0f, 0x1.365964p-66f, 0x1.e3b594p-87f,
     0x1.483e46p-16f, 0x1.a415a4p-1f, 0.0f, 0x1.2efd1ep-119f, 0x1.7e982ap-91f, 0.0f,
     0x1.eaa7a4p-46f, 0x1.8df83ap-89f, 0x1.f64eb4p-78f, 0.0f, 0x1.03df84p-36f, 0.0f,
     0.0f, 0.0f, 0x1.81943cp-40f, 0.0f, 0x1.345ebp-28f, 0x1.31fd0ap-118f, 0.0f,
     0x1.75c6dcp-73f, 0x1.1e181p-20f, 0x1.04166ap-83f, 0x1.f38912p-56f,
     0x1.4b5662p-28f, 0.0f, 0x1.65be16p-8f, 0x1.37e664p-32f, 0.0f, 0x1.a1e03p-85f,
     0.0f, 0.0f, 0x1.a2081p-48f, 0x1.e67bcep-115f, 0x1.88a1ccp-44f, 0x1.5d0344p-115f,
     0.0f, 0x1.e3832ap-74f, 0x1.189816p-22f, 0.0f, 0x1.a68e7p-29f, 0x1.5afd0cp-36f,
     0.0f, 0x1.2bb208p-16f, 0.0f, 0.0f, 0.0f, 0x1.76443p-66f, 0x1.7fdadep-83f, 0.0f,
     0x1.820eeap-115f, 0.0f, 0x1.a9a3e2p-85f, 0x1.d982ap-86f, 0x1.be44fep-116f, 0.0f,
     0x1.6bb0a6p-85f, 0x1.804202p-120f, 0x1.02fap-36f, 0x1.5ad9bep-2f, 0.0f,
     0x1.f11b8ap-93f, 0.0f, 0x1.a5c44p-5f, 0x1.91b016p-40f, 0.0f, 0x1.e9a2ep-122f,
     0.0f, 0.0f, 0.0f, 0x1.71d24ep-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.da95e6p-17f, 0.0f
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
            tmp1 = Sleef_tgammaf8_u10kvx(tmp0);
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
    printf("Sleef_tgammaf8_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_tgammaf8_u10kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
