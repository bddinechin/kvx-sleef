/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_cosf8_u35kvx.c --function Sleef_cosf8_u35kvx --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary32 --vector-size 8 \
 *     --function-input-vector-size 8 --bench --no-embedded-bin --target kv3
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
     0x1.68f6fep-57f, 0x1.602aa8p-63f, 0.0f, 0x1.0110bcp-34f, 0.0f, 0.0f, 0.0f,
     0x1.b1bd8cp-21f, 0.0f, 0x1.9a29a6p-102f, 0x1.389942p-7f, 0x1.96b7ep-59f,
     0x1.c15dbcp-94f, 0.0f, 0x1.0137ccp-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.17e1bcp-104f, 0.0f, 0.0f, 0x1.7cf79ap-108f, 0x1.82896ap-80f, 0.0f,
     0x1.e34f3ep-120f, 0x1.531124p-62f, 0x1.247b1ap-41f, 0.0f, 0x1.94e1aap-87f, 0.0f,
     0x1.cdcb64p-95f, 0x1.3ecd44p-81f, 0.0f, 0x1.9e708ap-102f, 0x1.316428p-69f,
     0x1.309058p-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.013596p-38f,
     0x1p0f, 0.0f, 0x1.edc73p-86f, 0x1.4e932ap-64f, 0x1.f10694p-93f, 0.0f, 0.0f,
     0x1.3810cp-100f, 0x1.68ccc4p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8221acp-16f, 0x1.a8a64cp-117f, 0x1.576936p-93f, 0x1.e3b034p-46f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.2e8a8p-33f, 0.0f, 0.0f, 0x1.6a3c2ep-98f, 0x1.5deda2p-94f, 0.0f,
     0.0f, 0x1.efacacp-113f, 0.0f, 0.0f, 0.0f, 0x1.41f0a8p-38f, 0.0f, 0x1.6af23ep-21f,
     0x1.b91c0cp-35f, 0x1.b2e64cp-114f, 0x1.af6948p-81f, 0.0f, 0x1.d5821ep-105f, 0.0f,
     0x1.b2b0c8p-105f, 0x1.eddb42p-60f, 0x1.8d9302p-103f, 0x1.6b5496p-45f,
     0x1.d15eb6p-53f, 0.0f, 0.0f, 0x1.9ce278p-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d91bd8p-39f, 0x1.176204p-3f, 0x1.5b11e4p-35f, 0.0f, 0x1.f5c138p-104f, 0.0f,
     0.0f, 0x1.00e99p-57f, 0x1.271c0ap-28f, 0x1.8d952ep-51f, 0.0f, 0x1.98d0e6p-52f,
     0x1.51104p-40f, 0.0f, 0.0f, 0x1.b565cap-71f, 0.0f, 0x1.3ce45cp-125f,
     0x1.bcc358p-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9ceae6p-39f, 0x1.4bcb92p-110f,
     0x1.3ea764p-88f, 0x1.5b80dp-73f, 0.0f, 0.0f, 0x1.4d2072p-123f, 0.0f, 0.0f,
     0x1.ae6dd6p-49f, 0x1.64d5dp-60f, 0.0f, 0x1.3e6df2p-27f, 0x1.57df48p-77f,
     0x1.eb523ep-116f, 0.0f, 0.0f, 0x1.238e9p-110f, 0.0f, 0x1.78c04ep-76f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.3c5f22p-72f, 0x1.ad345ap-62f, 0.0f, 0x1.105e7ap-49f, 0.0f,
     0.0f, 0x1.b677fcp-65f, 0x1.9b6ceap-23f, 0x1.ba17f6p-59f, 0x1.bb3c2p-103f, 0.0f,
     0.0f, 0x1.fa38d8p-73f, 0.0f, 0x1.5210f6p-26f, 0x1.2ddc74p-84f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a98d38p-122f, 0.0f, 0.0f, 0x1.2a1bp-101f, 0.0f, 0x1.0d3634p-124f,
     0x1.acefbap-72f, 0x1.9a0adp-10f, 0x1.544ddap-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6b121cp-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d423d8p-19f, 0.0f, 0.0f,
     0x1.1f13ccp-40f, 0x1.eb838ep-34f, 0.0f, 0.0f, 0x1.c77e54p-33f, 0.0f, 0.0f,
     0x1.298c4cp-86f, 0.0f, 0x1.a41dd8p-77f, 0.0f, 0x1.39ae6p-29f, 0x1.73f32p-31f,
     0.0f, 0x1.3037d2p-9f, 0x1.6703b8p-91f, 0x1.225c78p-110f, 0.0f, 0x1.ea3256p-117f,
     0.0f, 0.0f, 0x1.35b1dcp-110f, 0x1.a9bc5ep-102f, 0.0f, 0.0f, 0.0f,
     0x1.7c581ep-124f, 0x1.15639ap-74f, 0.0f, 0x1.b75d4p-100f, 0.0f, 0x1.261088p-81f,
     0.0f, 0x1.1a055ep-90f, 0x1.4aa12cp-42f, 0.0f, 0x1.86e23cp-48f, 0x1.19b17p-105f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f562e8p-64f, 0x1p0f, 0.0f, 0x1.107fbep-89f, 0.0f,
     0.0f, 0x1.8aa748p-8f, 0x1.c35792p-90f, 0.0f, 0x1.0155aep-118f, 0x1.e4c364p-24f,
     0.0f, 0.0f, 0x1.2b345p-12f, 0.0f, 0x1.cad5d2p-100f, 0.0f, 0x1.d36938p-49f, 0.0f,
     0.0f, 0x1.e08e3ep-4f, 0x1.ae378cp-71f, 0.0f, 0x1.2e9786p-93f, 0.0f, 0.0f,
     0x1.d0ee7cp-35f, 0x1.53fb0ap-112f, 0.0f, 0x1.de5936p-83f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6f33dap-21f, 0.0f, 0.0f, 0x1.34a69p-93f, 0.0f, 0x1.d573ecp-99f,
     0x1.309016p-86f, 0x1.aa1d1cp-27f, 0x1.3a6598p-72f, 0.0f, 0.0f, 0x1.89164p-116f,
     0.0f, 0x1.468dbap-68f, 0.0f, 0x1.dec4ap-72f, 0x1.2e5e12p-52f, 0x1.0ee936p-68f,
     0.0f, 0x1.4ec358p-41f, 0.0f, 0x1.ac56c8p-45f, 0x1.8fc4b4p-70f, 0.0f, 0.0f,
     0x1.5914a4p-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7e0b22p-91f, 0.0f, 0.0f,
     0x1.13c982p-31f, 0x1.3a3a0cp-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ce63aep-86f, 0.0f, 0x1.c9e72ep-115f, 0x1.475054p-109f, 0x1.75269cp-85f,
     0x1.112eacp-106f, 0.0f, 0x1.0c6e26p-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c95b24p-36f, 0x1.a5af58p-72f, 0.0f, 0x1.a8f614p-58f, 0.0f,
     0x1.f02a82p-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cd675cp-43f, 0x1.f1cc9ep-10f,
     0x1.883758p-102f, 0x1.b4343ap-27f, 0x1.c79b78p-16f, 0x1.11047ap-59f,
     0x1.4419c8p-79f, 0.0f, 0.0f, 0x1.71134cp-32f, 0x1.63bef6p-19f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.04d52p-99f, 0x1.819aep-63f, 0.0f, 0.0f, 0x1.c380d6p-14f,
     0x1.3a96ep-109f, 0.0f, 0.0f, 0x1.5d35e4p-71f, 0x1.5a18dcp-4f, 0.0f, 0.0f,
     0x1.57b604p-126f, 0.0f, 0x1.2f88dep-99f, 0.0f, 0.0f, 0.0f, 0x1.b166dp-38f,
     0x1.f698b4p-102f, 0x1.27ecccp-10f, 0x1.45bf18p-5f, 0x1.bd16f4p-28f, 0.0f,
     0x1.75403ap-63f, 0x1.875c74p-22f, 0.0f, 0.0f, 0x1.90a2dap-23f, 0x1.e4b6bep-90f,
     0.0f, 0x1.125a4ap-52f, 0x1.b923cep-96f, 0.0f, 0.0f, 0.0f, 0x1.e1f476p-76f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.2e4a8ap-118f, 0.0f, 0.0f, 0.0f, 0x1.834c5ep-70f,
     0.0f, 0x1.0e6952p-13f, 0.0f, 0x1.52db0cp-101f, 0x1.b65e66p-37f, 0.0f,
     0x1.306a8ep-57f, 0x1.9d7372p-49f, 0x1.3c1bc4p-77f, 0x1.3cc314p-9f, 0.0f,
     0x1.0f0908p-5f, 0x1.f55338p-93f, 0.0f, 0x1.be674ap-48f, 0x1.7fbfc4p-42f, 0.0f,
     0.0f, 0.0f, 0x1.6be526p-54f, 0x1.67c44ap-26f, 0.0f, 0x1.cb6a1ep-20f,
     0x1.420ba6p-115f, 0x1.81c5b2p-74f, 0.0f, 0.0f, 0.0f, 0x1.c7d862p-86f,
     0x1.3cf708p-45f, 0.0f, 0x1.ce1642p-54f, 0x1.1dc2a4p-93f, 0x1.c9fa08p-9f, 0.0f,
     0.0f, 0x1.425402p-103f, 0.0f, 0x1.a11266p-123f, 0.0f, 0.0f, 0x1.c82beep-102f,
     0x1.709b98p-61f, 0x1.c06262p-81f, 0x1.e2141ep-59f, 0.0f, 0x1.134f82p-79f,
     0x1.5c05f4p-24f, 0x1.e3fb9p-23f, 0x1.2df92ap-79f, 0x1.b05fe8p-66f,
     0x1.7080cap-121f, 0.0f, 0.0f, 0x1.fad854p-75f, 0x1.fc90fep-20f, 0x1.56bf48p-42f,
     0.0f, 0x1.8430dp-116f, 0.0f, 0.0f, 0x1.8c529cp-28f, 0.0f, 0.0f, 0x1.8c194ap-31f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dbd5d8p-4f, 0.0f, 0x1.a54ef6p-86f, 0.0f,
     0.0f, 0x1.0b6ffep-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7fd09ep-50f, 0.0f,
     0x1.ce3ef8p-53f, 0x1.2d8d84p-99f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.477acep-47f,
     0.0f, 0x1.58595ap-115f, 0x1.8ec3acp-35f, 0.0f, 0.0f, 0x1.b5a2bap-59f,
     0x1.19c9cep-116f, 0x1.44f836p-1f, 0.0f, 0x1.5968bp-10f, 0x1.3208c4p-79f, 0.0f,
     0.0f, 0.0f, 0x1.b0b4d4p-59f, 0x1.374edp-71f, 0.0f, 0x1.7d8bdcp-83f, 0.0f,
     0x1.59e9cap-75f, 0.0f, 0x1.976e22p-40f, 0x1.d64f2ap-102f, 0x1.470028p-101f, 0.0f,
     0.0f, 0x1.bab872p-23f, 0x1.fb2648p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6519d2p-10f,
     0x1.9b0412p-18f, 0x1.7a6f8p-110f, 0.0f, 0.0f, 0x1.972f8ap-111f, 0.0f, 0.0f,
     0x1.ce9c38p-124f, 0.0f, 0x1.46196p-80f, 0.0f, 0.0f, 0x1.422f26p-47f, 0.0f, 0.0f,
     0x1p0f, 0x1.0c695cp-89f, 0.0f, 0x1.5918e6p-60f, 0x1.564f76p-105f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.63fe6cp-86f, 0.0f, 0x1.62bf7cp-111f, 0x1.dc11fap-43f,
     0x1.2190a8p-88f, 0.0f, 0x1.07332p-81f, 0x1.a29344p-80f, 0x1.beb3cep-119f,
     0x1.316958p-63f, 0x1.0b94fep-68f, 0x1.58f8ap-122f, 0.0f, 0.0f, 0x1.5d5666p-120f,
     0.0f, 0.0f, 0.0f, 0x1.93fc9ep-20f, 0.0f, 0x1.104504p-42f, 0x1.f5da74p-118f, 0.0f,
     0.0f, 0.0f, 0x1.d8d698p-114f, 0x1.89def2p-60f, 0x1.cb17ep-120f, 0x1.28c7dap-96f,
     0x1.20914cp-19f, 0x1.2f87c4p-99f, 0x1.1c9684p-43f, 0.0f, 0x1.6bba6cp-64f, 0.0f,
     0.0f, 0x1.5d0c82p-41f, 0x1.100a9p-28f, 0.0f, 0.0f, 0x1.ff33cp-44f,
     0x1.dd30f6p-27f, 0x1.a38102p-27f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.69bac2p-76f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c0e046p-47f, 0x1.0be93ap-6f, 0x1.d6cd9cp-19f,
     0.0f, 0.0f, 0x1.610e3cp-77f, 0x1.596b3cp-42f, 0x1.9918f8p-28f, 0.0f,
     0x1.bbee06p-53f, 0x1.19e142p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.288af8p-83f,
     0x1.f08b76p-124f, 0.0f, 0x1.bb387cp-53f, 0x1.047468p-87f, 0x1.577c24p-99f,
     0x1.553c16p-44f, 0.0f, 0x1.cdd1acp-32f, 0.0f, 0x1.390ec8p-72f, 0.0f, 0.0f,
     0x1.ff45f4p-102f, 0x1.9368aep-37f, 0x1.be8b82p-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f7cf4ap-26f, 0.0f, 0x1.4c8a9ap-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1a98e2p-81f, 0x1.b2e228p-31f,
     0x1.fbbdp-60f, 0x1.6b7104p-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a877bep-40f,
     0x1.23d8bap-52f, 0.0f, 0x1.f9c6f2p-78f, 0x1.886564p-67f, 0x1.08fe42p-120f, 0.0f,
     0x1.9d8d3cp-8f, 0.0f, 0x1.00c03ap-85f, 0x1.50c38cp-62f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.3b458cp-30f, 0x1.97180ep-37f, 0x1.657528p-93f, 0x1.9364d6p-28f,
     0.0f, 0x1.cb45f2p-29f, 0x1.90f9ecp-42f, 0.0f, 0.0f, 0x1.0e2914p-17f, 0.0f, 0.0f,
     0x1.2ae71p-64f, 0x1.385cd6p-8f, 0x1.edc90cp-83f, 0.0f, 0.0f, 0.0f,
     0x1.f0ae6ap-123f, 0.0f, 0.0f, 0x1.b7c2dap-54f, 0x1.efa176p-77f, 0x1.dcf556p-37f,
     0x1p0f, 0.0f, 0x1.20bc5cp-85f, 0x1.20eb8cp-73f, 0x1.8d6e74p-85f, 0x1.9dc98ap-39f,
     0x1.51750cp-30f, 0x1.34b86ap-24f, 0.0f, 0x1.ef96ccp-44f, 0.0f, 0x1.45a974p-51f,
     0.0f, 0x1.f29beap-6f, 0.0f, 0.0f, 0x1.73e31cp-88f, 0.0f, 0x1.974806p-52f, 0.0f,
     0x1.ce4de8p-102f, 0x1.c70dcp-95f, 0.0f, 0.0f, 0x1.af0f8p-105f, 0.0f,
     0x1.260fc8p-82f, 0x1.1b83fcp-69f, 0x1.e89d3ep-44f, 0x1.4e7deap-94f,
     0x1.eb266ap-125f, 0x1.8bb15cp-94f, 0x1.8378d6p-88f, 0.0f, 0.0f, 0.0f,
     0x1.f2dd9p-40f, 0x1.0bd2fcp-113f, 0x1.b645f4p-102f, 0x1.4c29aap-71f, 0.0f,
     0x1.481cfep-60f, 0x1.498d4cp-88f, 0.0f, 0.0f, 0x1.d9435p-83f, 0.0f,
     0x1.06d502p-13f, 0x1.834bb2p-104f, 0.0f, 0.0f, 0x1.52653ap-13f, 0.0f,
     0x1.ba9d88p-59f, 0x1.ad16fep-109f, 0x1.0058fcp-96f, 0.0f, 0x1.18a69p-106f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.4e1d76p-116f, 0x1.9cd602p-73f, 0.0f, 0.0f, 0.0f,
     0x1.cde0c4p-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eb6d52p-100f, 0.0f, 0.0f,
     0x1.241f1ap-118f, 0.0f, 0.0f, 0x1.d3bee2p-36f, 0.0f, 0x1.586c18p-59f,
     0x1.9b65p-57f, 0.0f, 0x1.ab7c5p-86f, 0x1.46de86p-110f, 0.0f, 0.0f, 0.0f,
     0x1.d166c6p-26f, 0.0f, 0x1.971e38p-86f, 0x1.746e82p-73f, 0.0f, 0.0f, 0.0f,
     0x1.368632p-73f, 0.0f, 0.0f, 0x1.710dcap-40f, 0x1.1886dp-23f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.699c72p-99f, 0x1.ac1cdep-11f, 0x1.07f136p-82f, 0.0f,
     0x1.f854c2p-52f, 0x1.c1bd0cp-108f, 0.0f, 0x1.cf980ep-115f, 0x1.293af8p-120f,
     0.0f, 0x1.4a6bfep-116f, 0x1.71b79p-50f, 0.0f, 0x1.fd3f32p-87f, 0.0f,
     0x1.253e9ap-87f, 0.0f, 0.0f, 0.0f, 0x1.85bb46p-103f, 0x1.cea85ap-81f,
     0x1.88896cp-18f, 0.0f, 0x1.1f51p-56f, 0.0f, 0x1.54450cp-6f, 0x1.193072p-109f,
     0.0f, 0x1.5bf9f8p-9f, 0.0f, 0.0f, 0x1.799fdap-45f, 0x1.7f3162p-45f,
     0x1.4f6258p-78f, 0x1.4ba40ap-101f, 0x1.6bf70cp-27f, 0x1.f536f6p-44f,
     0x1.534faep-43f, 0x1.28c6f8p-113f, 0.0f, 0x1.f7ed7cp-22f, 0.0f, 0x1.704e96p-46f,
     0.0f, 0.0f, 0x1.d3d2f6p-54f, 0x1.21a70ep-23f, 0.0f, 0x1.db1122p-29f,
     0x1.0ce762p-117f, 0x1.3f8f3ep-106f, 0.0f, 0x1.51003cp-16f, 0.0f, 0x1.b9b48ap-21f,
     0x1.794b9ap-24f, 0.0f, 0x1.b6ad5p-22f, 0.0f, 0x1.3a93dap-114f, 0.0f, 0.0f,
     0x1.dafe1cp-45f, 0x1.6e7e1p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f3c19p-40f,
     0x1.9bb304p-86f, 0.0f, 0x1.c66ebp-26f, 0x1.c6fd52p-31f, 0x1.d198eap-84f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8b01fcp-15f, 0x1.308af4p-51f, 0.0f,
     0.0f, 0.0f, 0x1.75b042p-114f, 0.0f, 0.0f, 0x1.f01188p-9f, 0.0f, 0x1.5f85a4p-60f,
     0x1.6a8046p-96f, 0.0f, 0.0f, 0x1.04a0bep-25f, 0.0f, 0x1.2321c4p-33f, 0.0f, 0.0f,
     0.0f, 0x1.3aaadap-94f, 0.0f, 0.0f, 0.0f, 0x1.17caf4p-43f, 0x1.43223cp-117f,
     0x1.f50402p-88f, 0x1.8e9c2ap-78f, 0x1.7f29a8p-125f, 0.0f, 0.0f, 0x1.282f88p-22f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4947e6p-98f, 0.0f, 0x1.c22faap-83f, 0.0f,
     0x1.3e7e1ap-69f, 0.0f, 0x1.79873ep-21f, 0x1.e41fa4p-103f, 0x1.df4cb4p-94f,
     0x1.ba1eb4p-6f, 0.0f, 0x1.1225eep-10f, 0x1.d7b42ap-99f, 0x1.c2386ep-14f,
     0x1.cdc444p-30f, 0x1.0a011ap-29f, 0.0f, 0x1.a80fdcp-69f, 0.0f, 0x1.dcee5ap-123f,
     0x1.3a4704p-14f, 0x1.43dd4cp-109f, 0.0f, 0x1.c8897cp-26f, 0.0f, 0.0f,
     0x1.fbe3bcp-74f, 0.0f, 0.0f, 0x1.095dd8p-24f, 0x1.5cf4f2p-40f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.90ec4cp-85f, 0.0f, 0.0f, 0.0f, 0x1.657f4ap-63f, 0x1.4d72a6p-44f,
     0x1.3108e4p-30f, 0x1.68700cp-41f, 0x1.7d010ap-115f, 0x1.ec7648p-94f,
     0x1.2878a4p-89f, 0.0f, 0.0f, 0x1.0d6bf8p-124f, 0.0f, 0x1.f13de2p-96f,
     0x1.d147c6p-126f, 0x1.72edfcp-118f, 0x1.f7464ap-107f, 0.0f, 0.0f,
     0x1.eda544p-119f, 0x1.f8fcb4p-126f, 0x1.6eff46p-7f, 0.0f, 0x1.9920d4p-83f,
     0x1.2ce708p-79f, 0.0f, 0x1.9f1feap-3f, 0x1.9bdb54p-70f, 0x1.c3e5f2p-121f,
     0x1.6d15a4p-121f, 0.0f, 0x1.0b4faep-95f, 0.0f, 0.0f, 0x1.cada9p-89f, 0.0f, 0.0f,
     0.0f, 0x1.aaf862p-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.368088p-1f, 0.0f, 0.0f
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
            tmp1 = Sleef_cosf8_u35kvx(tmp0);
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
    printf("Sleef_cosf8_u35kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_cosf8_u35kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
