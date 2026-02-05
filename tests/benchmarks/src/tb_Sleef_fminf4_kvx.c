/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_fminf4_kvx.c --function Sleef_fminf4_kvx --arity 2 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32,binary32 \
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
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e8f1e4p-51f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.eb2f72p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.30e6d6p-77f,
     0x1.4ed914p-14f, 0.0f, 0x1.bfa4acp-58f, 0x1.a7ab64p-92f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3d5ed6p-30f, 0x1.c76974p-13f, 0x1.e63a08p-43f, 0.0f, 0.0f, 0x1.734d2ap-5f,
     0x1.bf0e2ep-44f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.b62e62p-71f, 0x1.09521ap-9f, 0.0f,
     0x1.daa626p-118f, 0x1.6d7f52p-69f, 0x1.7fe46p-80f, 0x1.e4a95cp-57f, 0.0f,
     0x1.ba593ep-93f, 0x1.ff7bp-60f, 0x1.22c328p-108f, 0.0f, 0x1.258f32p-64f, 0.0f,
     0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1d4fb2p-116f, 0.0f,
     0x1.09ea6p-98f, 0.0f, 0.0f, 0x1.b1e57ep-98f, 0.0f, 0x1.1e2a8ap-64f, 0.0f,
     0x1.7c4504p-9f, 0.0f, 0.0f, 0x1.bc2f06p-115f, 0.0f, 0.0f, 0x1.eeb8e4p-99f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.85df04p-67f, 0x1.2f7fdep-13f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3a8ab2p-76f, 0.0f, 0.0f, 0.0f, 0x1.48565cp-58f, 0.0f, 0.0f, 0.0f,
     0x1.ee77f4p-107f, 0.0f, 0x1.dfed5cp-55f, 0x1.17472ap-115f, 0x1.de4c72p-54f,
     0x1.df556ap-82f, 0x1.44186ep-117f, 0.0f, 0x1.45279ep-74f, 0.0f, 0x1.e9815p-13f,
     0.0f, 0.0f, 0.0f, 0x1.28e5dap-10f, 0x1.b3f0ecp-86f, 0.0f, 0x1.7353cp-26f,
     0x1.823e9p-27f, 0x1.e3bbcap-41f, 0.0f, 0x1.54b51ap-102f, 0x1.bdb552p-88f,
     0x1.aa99bep-55f, 0.0f, 0x1.fa485p-94f, 0x1.958eacp-110f, 0.0f, 0.0f,
     0x1.aa2b2ep-104f, 0x1.d73e7ap-37f, 0.0f, 0.0f, 0x1.61003p-106f, 0.0f, 0.0f,
     0x1.0ce7a8p-68f, 0.0f, 0x1.67def8p-44f, 0x1.3855ccp-63f, 0x1.5d5724p-57f, 0.0f,
     0x1.359244p-90f, 0x1.24bd4ap-89f, 0.0f, 0x1.7aebd4p-115f, 0x1.ba8382p-1f, 0.0f,
     0x1.50db64p-49f, 0.0f, 0x1.1f6ccp-59f, 0x1.e4f51p-22f, 0.0f, 0x1.3d9a1p-28f,
     0.0f, 0x1.aceep-45f, 0x1.cd213ap-73f, 0x1.d42b76p-126f, 0x1.2588d6p-61f, 0.0f,
     0x1.ce79e2p-82f, 0.0f, 0x1.acee84p-93f, 0x1.4d498cp-57f, 0.0f, 0x1.9f084cp-19f,
     0x1.4b156p-69f, 0x1.d90acep-56f, 0.0f, 0x1.840476p-82f, 0x1.4a586p-36f,
     0x1.7eccecp-100f, 0x1.705fdp-64f, 0x1.a2a8c6p-12f, 0x1.572a82p-103f, 0.0f,
     0x1.296606p-71f, 0x1.6386e6p-119f, 0.0f, 0x1.fd118p-33f, 0x1.4177bp-20f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.cf74p-70f, 0x1.a87cf8p-121f, 0x1.388be2p-97f,
     0x1.d3519cp-36f, 0x1.26bc5ep-87f, 0x1.d71ep-103f, 0x1.cf4a78p-117f,
     0x1.7c898ep-123f, 0.0f, 0.0f, 0x1.1fb918p-23f, 0x1.16b04ap-72f, 0.0f, 0.0f, 0.0f,
     0x1.b74f8p-112f, 0.0f, 0x1.c2f208p-43f, 0.0f, 0.0f, 0x1.6a31d8p-51f, 0.0f,
     0x1.bb18bap-10f, 0.0f, 0x1.7a9a86p-14f, 0.0f, 0x1.8747b4p-80f, 0x1.9fbc1ep-4f,
     0.0f, 0x1.8607ecp-17f, 0.0f, 0x1.6945fcp-77f, 0x1.287be8p-32f, 0x1.90507ap-21f,
     0.0f, 0.0f, 0.0f, 0x1.53b632p-91f, 0.0f, 0.0f, 0.0f, 0x1.0dfeacp-55f,
     0x1.f23e6cp-91f, 0x1.2904eap-97f, 0.0f, 0x1.ba811p-103f, 0.0f, 0.0f,
     0x1.863e98p-53f, 0.0f, 0x1.e2398cp-103f, 0.0f, 0x1.6638bcp-88f, 0x1.383ff8p-105f,
     0x1.42a1eap-4f, 0x1.75f29p-62f, 0x1.dc16a8p-121f, 0x1.59d56ap-24f,
     0x1.3a4526p-10f, 0x1.7782a8p-96f, 0.0f, 0x1.a24f2p-25f, 0.0f, 0x1.e60d6ep-54f,
     0.0f, 0.0f, 0x1.607a2p-119f, 0x1.8dba9cp-46f, 0x1.474bbp-118f, 0.0f,
     0x1.b71c2cp-26f, 0x1.58c38p-46f, 0.0f, 0.0f, 0.0f, 0x1.921ac4p-54f,
     0x1.f53954p-18f, 0.0f, 0x1.c43cc6p-75f, 0.0f, 0.0f, 0x1.e7f0e8p-1f, 0.0f,
     0x1.f47352p-6f, 0.0f, 0.0f, 0x1.d78ff4p-4f, 0x1.e28b8cp-34f, 0.0f,
     0x1.b66d4p-30f, 0x1.16ba6ap-26f, 0x1.74eeaep-29f, 0.0f, 0x1.d4b69ep-11f,
     0x1.4339d4p-40f, 0.0f, 0x1.0b95acp-119f, 0x1.0bf08p-85f, 0x1.256e02p-24f, 0.0f,
     0x1.8ab04ep-13f, 0x1.b8985cp-115f, 0x1.2c3102p-89f, 0.0f, 0x1.3d41b2p-120f,
     0x1.321e6p-126f, 0.0f, 0x1.4ead24p-73f, 0x1.4c079p-8f, 0x1.85932p-49f, 0.0f,
     0.0f, 0x1.d1c224p-63f, 0.0f, 0.0f, 0.0f, 0x1.a1683cp-15f, 0.0f, 0x1.2ddba2p-92f,
     0.0f, 0.0f, 0.0f, 0x1.13846cp-124f, 0x1.3d6ee4p-76f, 0.0f, 0x1.34231p-78f,
     0x1.f964aep-86f, 0.0f, 0x1.96fe22p-9f, 0x1.da7b44p-57f, 0x1.1bb974p-16f, 0.0f,
     0.0f, 0.0f, 0x1.51a3a2p-54f, 0.0f, 0x1.b140ep-46f, 0.0f, 0x1.59e68p-18f, 0.0f,
     0.0f, 0.0f, 0x1.d14c84p-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.95cb6ep-19f,
     0x1.eb6cb4p-66f, 0x1.d8a738p-12f, 0x1.da0afcp-77f, 0x1.7e1b5ep-38f, 0.0f, 0.0f,
     0.0f, 0x1.f9d884p-59f, 0x1.00c30cp-65f, 0x1.e673eep-93f, 0.0f, 0x1.848494p-66f,
     0x1.87b026p-79f, 0x1.23f746p-116f, 0x1.6b2148p-75f, 0x1.8164e4p-69f,
     0x1.face1cp-112f, 0x1.33660cp-39f, 0x1.78d484p-75f, 0x1.30956ep-80f,
     0x1.4f39b2p-119f, 0.0f, 0x1.7b902p-23f, 0x1.82f756p-60f, 0x1.cffe8cp-124f, 0.0f,
     0.0f, 0x1.2148f6p-17f, 0.0f, 0x1.ca8b78p-119f, 0.0f, 0x1.a6234ap-105f,
     0x1.e1e0f2p-62f, 0x1.ab856ep-67f, 0.0f, 0.0f, 0x1.9b86e2p-106f, 0x1.4f7d94p-86f,
     0x1.628afp-38f, 0x1.3031f4p-120f, 0x1.141f68p-58f, 0x1.2a92f8p-40f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.0c624p-72f, 0.0f, 0x1.324536p-82f, 0x1.19601p-79f,
     0.0f, 0.0f, 0x1.dfca76p-19f, 0x1.498666p-74f, 0.0f, 0.0f, 0x1.fbb17ep-47f,
     0x1.492e32p-72f, 0x1.21401cp-49f, 0x1.303416p-85f, 0.0f, 0.0f, 0x1.ba6516p-7f,
     0.0f, 0.0f, 0x1.abe588p-63f, 0.0f, 0x1.e3b986p-108f, 0x1.2f3c8cp-67f,
     0x1.8a9248p-63f, 0x1.f5205ep-13f, 0.0f, 0x1.15fdfep-64f, 0x1.1787fap-8f, 0.0f,
     0.0f, 0x1.71bap-110f, 0x1.e280b4p-53f, 0x1.3fd21ap-16f, 0.0f, 0x1.bc0e86p-92f,
     0.0f, 0.0f, 0x1.0e2c64p-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.20f312p-104f,
     0x1.1cc2ecp-58f, 0x1.88b5b6p-32f, 0x1.c02222p-74f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.71ebf2p-47f, 0x1.e8b95cp-74f, 0x1.d236d8p-109f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ee6862p-23f, 0x1.259cb8p-72f, 0.0f, 0.0f, 0.0f, 0x1.c75fdep-74f, 0.0f,
     0x1.d8ed7cp-61f, 0x1.5ecd68p-64f, 0x1.60bf86p-80f, 0.0f, 0x1.0acadep-98f,
     0x1.9c0aap-84f, 0.0f, 0.0f, 0x1.c07eb4p-96f, 0.0f, 0.0f, 0x1.59c03cp-56f, 0.0f,
     0x1.4d40bap-49f, 0x1.cee578p-111f, 0x1.dfba8ep-81f, 0.0f, 0.0f, 0x1.60d68cp-41f,
     0.0f, 0.0f, 0x1.d653e6p-109f, 0.0f, 0x1.e6310ep-12f, 0x1.b8067cp-2f,
     0x1.e5c2b4p-85f, 0x1.5aeb5cp-85f, 0x1.da819p-56f, 0.0f, 0x1.1ca334p-40f, 0.0f,
     0x1.54efcap-62f, 0x1.df4f7p-104f, 0.0f, 0x1.b19532p-47f, 0x1.82f996p-83f,
     0x1.e0004ap-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3988cep-52f, 0x1.ab0636p-115f, 0.0f,
     0.0f, 0x1.701b36p-1f, 0.0f, 0x1.1782dp-63f, 0x1.ce303ep-20f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.477082p-122f, 0x1.8a1262p-19f, 0.0f, 0x1.01409ap-1f, 0.0f,
     0x1.134c86p-75f, 0.0f, 0.0f, 0.0f, 0x1.30f164p-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.8ad8fap-35f, 0x1.bd3b8p-15f, 0x1.d7cdacp-56f, 0x1.73ffb8p-68f,
     0x1.8f4b7ap-106f, 0.0f, 0x1.98ad0ap-5f, 0x1.a81156p-44f, 0.0f, 0.0f, 0.0f,
     0x1.13275p-34f, 0x1.666d9ep-93f, 0x1.2e1508p-36f, 0x1.eeda16p-88f,
     0x1.f94f98p-24f, 0.0f, 0x1.fed666p-101f, 0x1.a32a2cp-105f, 0.0f, 0x1.a283f2p-63f,
     0x1.e72828p-72f, 0.0f, 0.0f, 0.0f, 0x1.dd7156p-9f, 0.0f, 0.0f, 0x1.5ceb2cp-2f,
     0.0f, 0.0f, 0.0f, 0x1.1609p-6f, 0x1.a83c4p-85f, 0.0f, 0x1.7fbc32p-46f,
     0x1.49e3dap-114f, 0x1.bceaaap-66f, 0x1.9ff194p-39f, 0.0f, 0x1.074a7ap-103f, 0.0f,
     0.0f, 0x1.75a45cp-45f, 0.0f, 0x1.7addeep-73f, 0.0f, 0.0f, 0x1.de0746p-39f,
     0x1.626c3cp-4f, 0.0f, 0x1.7f7818p-110f, 0x1.8afb3ap-80f, 0.0f, 0x1.30021p-4f,
     0.0f, 0x1.3c3eecp-18f, 0.0f, 0.0f, 0x1.79d154p-122f, 0x1.e2d834p-3f, 0.0f, 0.0f,
     0x1.5e271ep-81f, 0.0f, 0.0f, 0x1.df05acp-28f, 0.0f, 0x1.26bcd8p-64f, 0.0f, 0.0f,
     0x1.52847ap-90f, 0x1.4e0598p-37f, 0x1.aa396cp-125f, 0x1.90714ap-113f,
     0x1.095528p-70f, 0x1.916932p-20f, 0x1.17c392p-111f, 0x1p0f, 0.0f,
     0x1.c1226cp-112f, 0.0f, 0.0f, 0.0f, 0x1.da68b8p-75f, 0x1.dcf8dap-95f,
     0x1.58de28p-88f, 0x1.de142p-7f, 0.0f, 0x1.a53264p-96f, 0x1.69f1cp-65f,
     0x1.4863a6p-123f, 0x1.18950ep-36f, 0x1.d7993ap-36f, 0x1.b76016p-20f,
     0x1.cc289ap-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.00858p-37f,
     0x1.b39732p-41f, 0x1.a41f7cp-120f, 0.0f, 0.0f, 0x1.cfc8c6p-80f, 0.0f,
     0x1.2932dcp-34f, 0x1.78adacp-109f, 0.0f, 0.0f, 0x1.06327cp-21f, 0.0f, 0.0f, 0.0f,
     0x1.5a7312p-35f, 0x1.e1bcd2p-79f, 0x1.17e6d6p-107f, 0.0f, 0.0f, 0x1.22a60cp-4f,
     0.0f, 0.0f, 0.0f, 0x1.05018ap-41f, 0.0f, 0x1.e395p-61f, 0.0f, 0x1.372af2p-102f,
     0x1.5affe2p-103f, 0x1.bdfa84p-85f, 0x1.2ee294p-23f, 0x1.242c5ap-27f, 0.0f,
     0x1.075f42p-1f, 0x1.b09808p-30f, 0.0f, 0.0f, 0.0f, 0x1.1a494p-15f,
     0x1.6384bap-48f, 0x1.055612p-10f, 0x1.e7bf94p-27f, 0.0f, 0x1.b04e82p-79f,
     0x1.eda2d6p-125f, 0x1.e768cap-121f, 0.0f, 0x1.e66832p-24f, 0.0f,
     0x1.7e61dep-113f, 0.0f, 0.0f, 0.0f, 0x1.011c7p-14f, 0x1.a9e9d6p-55f,
     0x1.ac6908p-26f, 0.0f, 0x1.66639cp-58f, 0.0f, 0x1.d31146p-53f, 0x1.d5150cp-67f,
     0.0f, 0.0f, 0x1.87323ep-78f, 0x1.d36fc4p-72f, 0x1.a11254p-113f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.0d351p-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4f469ep-79f, 0x1.4947fp-76f, 0x1p0f, 0x1.7f7df8p-110f, 0x1.3dc938p-74f,
     0x1.829132p-47f, 0.0f, 0x1.274bf4p-73f, 0.0f, 0.0f, 0.0f, 0x1.bd58ecp-102f,
     0x1.11b6ecp-126f, 0x1.a9fc38p-122f, 0x1.716eb6p-35f, 0.0f, 0x1.c38114p-56f, 0.0f,
     0x1.82f018p-124f, 0x1.2deec2p-65f, 0x1.6cb0aap-58f, 0.0f, 0x1.ff48d8p-69f, 0.0f,
     0x1.b1cebap-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.656726p-71f, 0x1.dacd48p-50f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b13206p-18f, 0.0f, 0x1.056ad6p-9f, 0x1.b3f5aep-103f,
     0.0f, 0.0f, 0x1.c69a36p-77f, 0.0f, 0x1.76c434p-7f, 0.0f, 0x1.110228p-64f,
     0x1.bd285ep-119f, 0x1.809d94p-57f, 0.0f, 0x1.e45f72p-11f, 0x1.eb584cp-109f,
     0x1.f5ea72p-25f, 0x1.1ed108p-57f, 0.0f, 0x1.3c131cp-69f, 0x1.025d56p-56f, 0.0f,
     0x1.637098p-94f, 0x1.6debf6p-1f, 0x1.f84b98p-32f, 0.0f, 0x1.774b72p-106f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5ac9e2p-53f, 0.0f, 0.0f, 0x1.5ad5fap-73f,
     0x1.7aa024p-104f, 0.0f, 0.0f, 0x1.1e8646p-108f, 0x1.3c69fep-80f, 0.0f, 0.0f,
     0.0f, 0x1.fd1aa2p-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e7414ap-33f,
     0x1.862d62p-89f, 0x1.8ffe1ep-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ba671ep-13f, 0.0f, 0x1.2326c6p-74f, 0x1.b2e8cep-51f, 0.0f, 0.0f,
     0x1.16a184p-105f, 0.0f, 0x1.1d1f4ep-56f, 0.0f, 0x1.466d46p-72f, 0x1.a48e22p-39f,
     0.0f, 0x1.ae2efp-8f, 0x1.25ccfcp-26f, 0.0f, 0.0f, 0x1.ab638ep-79f, 0.0f,
     0x1.3641p-44f, 0.0f, 0x1.af7ea8p-23f, 0.0f, 0.0f, 0x1.b47c54p-106f,
     0x1.2ebcfep-11f, 0.0f, 0.0f, 0.0f, 0x1.2fe1f8p-55f, 0x1.560198p-126f, 0.0f, 0.0f,
     0x1.a2868ep-81f, 0x1.18cab6p-21f, 0x1.8547ep-72f, 0.0f, 0.0f, 0x1.cf1708p-111f,
     0x1.44367ap-39f, 0.0f, 0x1.eae95cp-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bf267cp-34f,
     0.0f, 0x1.6c469ap-15f, 0x1.018204p-89f, 0.0f, 0x1.0d9ca4p-103f, 0x1.112208p-70f,
     0.0f, 0.0f, 0x1.4f559ep-13f, 0.0f, 0.0f, 0x1.47fffap-71f, 0x1.4f0876p-21f,
     0x1.f2d9e6p-120f, 0x1.68791cp-73f, 0x1.2d10f4p-19f, 0.0f, 0.0f, 0x1.24e934p-43f,
     0x1.c2216ap-107f, 0x1.26fadcp-33f, 0.0f, 0.0f, 0.0f, 0x1.00ecd6p-49f, 0.0f,
     0x1.32cf3p-108f, 0.0f, 0.0f, 0.0f, 0x1.01cd6cp-117f, 0.0f, 0x1.1678ecp-123f,
     0x1.2cd7a8p-53f, 0.0f, 0x1.8a792ep-71f, 0x1.f7a92ap-73f, 0.0f, 0x1.2cf68p-77f,
     0.0f, 0x1.3e143p-2f, 0x1.b6184ep-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5136bap-70f, 0x1.c5a5ccp-13f, 0.0f, 0x1.49c0acp-99f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.54a632p-74f, 0x1.898912p-37f, 0x1.c064eep-13f, 0x1.47224ap-29f, 0.0f, 0.0f,
     0x1.aba64ep-5f, 0.0f, 0x1.03e2fp-37f, 0x1.790024p-51f, 0.0f, 0.0f,
     0x1.569c68p-65f, 0x1.f80134p-48f, 0.0f, 0x1.9aab76p-91f, 0x1.7acb54p-36f,
     0x1.c2e0acp-60f, 0x1.892f34p-61f, 0x1.e77fa8p-6f, 0.0f, 0x1.541e2cp-92f, 0.0f,
     0x1.d868f2p-54f, 0.0f, 0x1.15297ep-55f, 0x1.b60e8ep-48f, 0.0f, 0.0f,
     0x1.0f6b9ap-37f, 0.0f, 0x1.c23e4ep-38f, 0.0f, 0.0f, 0x1.5e6f06p-108f, 0.0f,
     0x1.f64718p-90f, 0x1.c190e6p-117f, 0.0f, 0.0f, 0.0f, 0x1.522564p-121f, 0.0f,
     0x1.42f40cp-54f, 0.0f, 0.0f, 0.0f, 0x1.ce8deep-117f, 0x1.2cadb8p-32f, 0.0f, 0.0f,
     0.0f, 0x1.193ccp-111f, 0x1.e01e92p-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b80a1p-55f,
     0x1.c790fep-12f, 0x1.35209ep-50f, 0.0f, 0x1.b080fp-122f, 0x1.566d46p-103f, 0.0f,
     0x1.d729dcp-125f, 0x1.0eef1p-16f, 0x1.b42636p-114f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8cb874p-119f, 0.0f, 0x1.526704p-104f, 0x1.539926p-119f, 0.0f, 0.0f,
     0x1.05e96ep-60f, 0.0f, 0x1.418b76p-120f, 0x1.70b47ep-114f, 0.0f,
     0x1.5079cap-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4f8ed4p-88f, 0x1.096884p-96f,
     0.0f, 0x1.35e16ep-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e7729ep-87f, 0.0f,
     0x1.65cfb8p-42f, 0x1.8e55e6p-88f, 0x1.d0cf34p-40f, 0.0f, 0.0f, 0x1.d9e9e4p-7f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b03e8ap-6f, 0.0f, 0.0f
};
static const float external_bench_wrapper_input_table_arg1[1004]  = {
     0.0f, 0x1.ccf178p-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4424c8p-16f,
     0x1.688274p-124f, 0.0f, 0.0f, 0.0f, 0x1.fbbb2ep-22f, 0x1.967958p-10f, 0.0f, 0.0f,
     0.0f, 0x1.8183b8p-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ceb4aap-42f, 0x1.105d6ep-117f, 0.0f, 0.0f, 0.0f, 0x1.c21084p-37f,
     0x1.47adeap-90f, 0.0f, 0x1.50308p-85f, 0x1.320222p-44f, 0x1.55ba7cp-89f,
     0x1.7c9794p-126f, 0x1.72a876p-61f, 0x1.ce300ep-98f, 0x1.4aa3dp-42f,
     0x1.f4650ap-63f, 0x1.e5ec1ep-21f, 0x1.f7d452p-3f, 0x1.66e546p-57f,
     0x1.02f16ap-105f, 0x1.892d2cp-104f, 0x1.74083cp-74f, 0.0f, 0x1.1899e4p-9f, 0.0f,
     0x1.23eea2p-76f, 0.0f, 0.0f, 0x1.6bf0ep-6f, 0.0f, 0.0f, 0x1.9dbd46p-43f, 0.0f,
     0x1.77a56ap-56f, 0.0f, 0x1.699892p-80f, 0x1.9eee12p-79f, 0x1.0a3a4ep-14f, 0.0f,
     0.0f, 0x1.8ea1dcp-103f, 0.0f, 0.0f, 0x1.3a70aap-106f, 0x1.c72dc4p-61f, 0.0f,
     0.0f, 0x1.194c64p-107f, 0.0f, 0.0f, 0.0f, 0x1.edc6a2p-100f, 0x1.71d12ep-9f,
     0x1.816826p-115f, 0.0f, 0.0f, 0.0f, 0x1.7db84p-52f, 0.0f, 0x1.3f4d18p-35f,
     0x1.ba04cep-18f, 0.0f, 0x1.8af412p-86f, 0x1.a8940ap-73f, 0x1.63bbdep-53f,
     0x1.75e1acp-31f, 0.0f, 0x1.a989d6p-37f, 0x1.27505cp-121f, 0.0f, 0x1.7f057ap-2f,
     0x1.74e0c2p-104f, 0.0f, 0.0f, 0x1.a67692p-46f, 0x1.cebae2p-53f, 0.0f, 0.0f,
     0x1.331f7ap-108f, 0.0f, 0.0f, 0x1.cfb64ap-6f, 0x1.3135e4p-21f, 0x1.bb871p-117f,
     0x1.68083p-107f, 0x1.6f72cep-57f, 0.0f, 0x1.18e854p-53f, 0.0f, 0x1.0adffep-117f,
     0x1.05ab2ep-80f, 0.0f, 0.0f, 0x1.1a367ap-16f, 0x1.9c13c8p-39f, 0.0f, 0.0f, 0.0f,
     0x1.674954p-53f, 0.0f, 0x1.08e49p-92f, 0x1.2982dp-87f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bb0014p-102f, 0x1.dbaa76p-40f, 0x1.6c5f5cp-57f, 0x1.16bep-77f, 0.0f,
     0x1.5eb5ecp-21f, 0.0f, 0x1p0f, 0x1.ea3d14p-68f, 0.0f, 0x1.f05caep-6f,
     0x1.cfa866p-71f, 0.0f, 0.0f, 0.0f, 0x1.2f554ep-8f, 0x1.fd4204p-28f, 0.0f, 0.0f,
     0x1.200648p-26f, 0.0f, 0x1.b15496p-54f, 0x1.781d7ap-110f, 0x1.6f6a98p-84f, 0.0f,
     0x1.01b068p-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ef5e2cp-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.11df5ap-84f, 0x1.d00eeep-121f,
     0.0f, 0x1.f68e92p-121f, 0.0f, 0x1.9d8e0ep-110f, 0x1.f922aep-118f, 0.0f,
     0x1.308fc6p-98f, 0.0f, 0.0f, 0x1.2af3bap-2f, 0x1.49451ap-101f, 0.0f, 0.0f,
     0x1.c9a95p-22f, 0x1.93a6c2p-47f, 0.0f, 0.0f, 0x1.b857bap-59f, 0x1.8a3414p-51f,
     0.0f, 0x1.593daep-10f, 0x1.eb971ep-7f, 0x1.e2bf1cp-111f, 0.0f, 0x1.0b4efp-36f,
     0x1.542bd8p-94f, 0.0f, 0.0f, 0x1.cb6b0ep-50f, 0x1.e62c8cp-116f, 0.0f,
     0x1.85d908p-90f, 0.0f, 0x1.9e55fep-110f, 0.0f, 0x1.4c3f26p-71f, 0x1.5138dep-76f,
     0.0f, 0x1.95ec52p-22f, 0x1.a58adap-20f, 0.0f, 0x1.5ed58ep-66f, 0x1.cf5486p-28f,
     0x1.319e64p-44f, 0x1.d47d64p-82f, 0.0f, 0x1.8b3dd6p-65f, 0.0f, 0x1.126ddp-72f,
     0x1.bd9504p-111f, 0.0f, 0.0f, 0.0f, 0x1.bb6944p-84f, 0x1.340afap-73f,
     0x1.cf771ep-93f, 0x1.123e16p-72f, 0x1.acff54p-45f, 0.0f, 0x1.e49e4p-44f, 0.0f,
     0.0f, 0x1.113e7ep-113f, 0.0f, 0.0f, 0x1.b48214p-108f, 0x1.9e554ap-92f, 0.0f,
     0.0f, 0.0f, 0x1.34195ap-111f, 0x1.819aa2p-35f, 0.0f, 0x1.7e3e96p-114f,
     0x1.fabaep-7f, 0x1.d6e844p-118f, 0.0f, 0.0f, 0.0f, 0x1.b2021cp-46f,
     0x1.0c5a3ep-59f, 0x1.40890ap-87f, 0.0f, 0.0f, 0x1.8163dap-105f, 0.0f,
     0x1.cd6aacp-66f, 0x1.d30e98p-14f, 0x1.5218a4p-31f, 0.0f, 0x1.625e86p-41f, 0.0f,
     0x1.f05534p-10f, 0.0f, 0.0f, 0.0f, 0x1.ad74c4p-57f, 0.0f, 0.0f, 0x1.6fd738p-54f,
     0.0f, 0.0f, 0.0f, 0x1.311c1ep-21f, 0x1.e38a26p-41f, 0.0f, 0.0f, 0.0f,
     0x1.2d692ep-31f, 0.0f, 0.0f, 0.0f, 0x1.f31fa4p-32f, 0.0f, 0x1.892568p-115f,
     0x1.5e1644p-25f, 0.0f, 0.0f, 0x1.13dea8p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f95d0ep-20f, 0x1.22a3ecp-88f, 0x1.97ab92p-65f, 0x1.3ad29ep-74f,
     0x1.934c3ap-103f, 0.0f, 0.0f, 0x1.37ab42p-75f, 0x1.3ce9ecp-62f, 0.0f, 0.0f,
     0x1.8b7676p-14f, 0x1.c1d71ep-47f, 0x1.910884p-54f, 0x1.d2f132p-115f,
     0x1.cc929p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6983b2p-69f, 0x1.b26ef2p-115f,
     0x1.e7b484p-68f, 0x1.ced5fp-86f, 0x1.89f6b2p-17f, 0.0f, 0x1.290c42p-44f,
     0x1.93dc16p-23f, 0.0f, 0x1.bdc2a4p-43f, 0x1.5d689ep-92f, 0.0f, 0x1.7e62cp-117f,
     0.0f, 0x1.8036c8p-2f, 0x1.ffcc1ap-111f, 0x1.44c8c4p-102f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.405e8ap-50f, 0x1.78ec7cp-24f, 0x1.030156p-116f, 0.0f, 0x1.e7324ap-5f,
     0x1.44f43ap-92f, 0.0f, 0x1.cb0f5ep-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ad0614p-74f, 0x1.e4434p-28f, 0.0f, 0x1.26ae74p-46f, 0.0f, 0.0f,
     0x1.6183d4p-33f, 0.0f, 0.0f, 0x1.5fa4fep-99f, 0.0f, 0.0f, 0.0f, 0x1.9ed406p-102f,
     0.0f, 0x1.031ef6p-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3956d2p-67f, 0.0f,
     0x1.5f0c6ap-17f, 0x1.1e9828p-14f, 0.0f, 0x1.dd5666p-26f, 0x1.dd61bcp-96f,
     0x1.d33614p-9f, 0.0f, 0x1.9fe618p-2f, 0.0f, 0.0f, 0.0f, 0x1.d4e452p-61f,
     0x1.8b2bfep-86f, 0x1.789136p-4f, 0x1.01fd1ep-53f, 0x1.e8654ap-97f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.56315ap-62f, 0x1.cb529ep-116f, 0.0f, 0.0f, 0.0f, 0x1.ca4cd2p-6f,
     0.0f, 0.0f, 0.0f, 0x1.8b11f6p-80f, 0.0f, 0.0f, 0x1.6e022ep-111f, 0.0f, 0x1p0f,
     0x1.a00f5ep-18f, 0.0f, 0x1.39d696p-39f, 0x1.6c1bcap-41f, 0.0f, 0x1.eb56bp-114f,
     0x1.2d2cp-121f, 0x1.cd0356p-76f, 0x1.5a99d2p-16f, 0x1.15d9d6p-15f,
     0x1.9cd49cp-9f, 0.0f, 0x1.5a53d2p-98f, 0x1.46da54p-4f, 0.0f, 0.0f,
     0x1.d94feep-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.78bb64p-37f, 0x1.bae672p-24f, 0.0f,
     0.0f, 0x1.52340cp-72f, 0.0f, 0x1.faab48p-27f, 0.0f, 0.0f, 0.0f, 0x1.960b64p-74f,
     0.0f, 0x1.0c75ecp-58f, 0x1.30d91cp-84f, 0x1.22bc76p-111f, 0x1.381e3ap-40f, 0.0f,
     0x1.f42e48p-122f, 0.0f, 0x1.d47c88p-44f, 0x1.0de102p-2f, 0.0f, 0.0f, 0.0f,
     0x1.06dc7ep-32f, 0.0f, 0.0f, 0.0f, 0x1.b7481ep-21f, 0.0f, 0x1.7ea4dp-100f,
     0x1.0566fep-62f, 0.0f, 0x1.1b085ep-45f, 0.0f, 0.0f, 0x1.3cd524p-33f,
     0x1.90529cp-23f, 0x1.248c38p-116f, 0.0f, 0.0f, 0x1.aa9014p-114f, 0x1.9ae644p-78f,
     0.0f, 0.0f, 0x1.e02c86p-45f, 0x1.f99442p-21f, 0x1.e569f4p-106f, 0x1.727a2p-116f,
     0x1.fb7adep-115f, 0.0f, 0.0f, 0x1.c0f324p-1f, 0x1.a13c04p-6f, 0x1.62831cp-74f,
     0.0f, 0x1.a6c40ap-126f, 0x1.261428p-121f, 0x1.8acfcep-100f, 0.0f, 0.0f, 0.0f,
     0x1.b3b0eap-53f, 0x1.536f36p-44f, 0.0f, 0x1.cd4df8p-35f, 0.0f, 0.0f, 0.0f,
     0x1.2b2cf6p-47f, 0x1.04c5cep-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3f8382p-7f, 0.0f,
     0.0f, 0.0f, 0x1.ef5bdep-5f, 0.0f, 0x1.22d464p-111f, 0x1.ec52b6p-102f, 0.0f,
     0x1.ccc90ep-24f, 0.0f, 0.0f, 0.0f, 0x1.ebbb8ep-51f, 0.0f, 0.0f, 0x1.f7f4f2p-90f,
     0.0f, 0.0f, 0.0f, 0x1.eeabbp-36f, 0.0f, 0.0f, 0x1.d5d3c6p-53f, 0x1.ded8ap-83f,
     0x1.fd8dap-57f, 0.0f, 0x1.a7012cp-50f, 0.0f, 0.0f, 0.0f, 0x1.2937fep-22f,
     0x1.919ea6p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2fdbccp-5f,
     0.0f, 0x1.e80fbp-9f, 0.0f, 0x1.6f0e82p-59f, 0x1.88e1bap-35f, 0.0f, 0.0f,
     0x1.807cdap-22f, 0.0f, 0.0f, 0.0f, 0x1.bb8bd8p-125f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.56b502p-82f, 0x1.c6a87p-126f, 0.0f, 0x1.5f3c36p-80f,
     0x1.4dca0ep-84f, 0x1.430e64p-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8422a2p-122f,
     0x1.563be4p-35f, 0x1.707628p-79f, 0.0f, 0x1.4b2f9p-45f, 0.0f, 0x1.f7af56p-57f,
     0x1.bfc2ep-2f, 0x1.8942bep-81f, 0.0f, 0.0f, 0.0f, 0x1.d7639ap-84f,
     0x1.58bb5ep-26f, 0.0f, 0x1.3bf84p-10f, 0x1.449c78p-38f, 0x1.ef584ap-44f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.45a984p-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c3f366p-121f, 0.0f, 0x1.6ffb18p-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9857c4p-27f,
     0.0f, 0.0f, 0x1.d9ac34p-87f, 0.0f, 0.0f, 0x1.bc0f96p-67f, 0.0f, 0x1.d458e2p-100f,
     0.0f, 0x1.577feap-78f, 0x1.82762ep-76f, 0x1.733e82p-61f, 0.0f, 0x1.e1ba6ep-4f,
     0x1.e7e06ap-96f, 0x1p0f, 0x1.a40518p-87f, 0.0f, 0x1.328708p-44f, 0x1.29ed8ap-95f,
     0x1.d06d0cp-65f, 0.0f, 0x1.dd5228p-76f, 0x1.9cd9fap-64f, 0.0f, 0.0f,
     0x1.a7fad6p-65f, 0x1.4224ccp-85f, 0x1.f84666p-84f, 0.0f, 0.0f, 0x1.ee0b92p-48f,
     0x1.4ad3eap-13f, 0x1.c659d6p-96f, 0x1.997d58p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.265db8p-116f, 0.0f, 0x1.45b98ep-11f, 0.0f, 0x1.92e9e8p-13f, 0.0f,
     0x1.8340dap-65f, 0.0f, 0.0f, 0x1.2fcf58p-2f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.60b1eap-56f, 0x1.a33c32p-20f, 0.0f, 0x1.b31382p-13f, 0.0f, 0x1.20e94ap-101f,
     0.0f, 0x1.1ed9d2p-121f, 0x1.8f741ep-12f, 0x1.934378p-123f, 0x1.0aadfap-65f, 0.0f,
     0.0f, 0x1.0c09d8p-110f, 0.0f, 0x1.b55188p-18f, 0x1.e72f5cp-100f, 0x1.c76dd4p-39f,
     0.0f, 0x1.cda2ep-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bdc1b4p-90f, 0.0f,
     0x1.aef164p-125f, 0.0f, 0x1.dced78p-76f, 0x1.0b0d28p-89f, 0.0f, 0x1.289e22p-16f,
     0.0f, 0x1.f5b09cp-50f, 0x1.476068p-67f, 0.0f, 0x1.cac5fep-39f, 0.0f,
     0x1.8c03a6p-46f, 0x1.176dcep-64f, 0.0f, 0.0f, 0x1.6060b6p-39f, 0.0f,
     0x1.4dd7eep-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.86f9d6p-4f, 0.0f, 0x1.48feecp-54f,
     0x1.0ea01cp-102f, 0x1.c4d964p-109f, 0x1.5aea52p-63f, 0.0f, 0.0f, 0.0f,
     0x1.db1064p-111f, 0x1.105ac8p-123f, 0x1.f6be4ap-98f, 0x1.3fc19ap-36f,
     0x1.9f8166p-8f, 0x1.805af2p-36f, 0x1.71fe86p-93f, 0.0f, 0x1.79d358p-61f,
     0x1.d003bep-16f, 0.0f, 0.0f, 0.0f, 0x1.1e59c6p-120f, 0x1p0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.88502ap-119f, 0.0f, 0x1.dad498p-46f, 0.0f, 0x1.53ac54p-43f, 0.0f,
     0x1.7c4bf6p-123f, 0x1.9bbc0cp-75f, 0.0f, 0.0f, 0x1.3c66f4p-11f, 0x1.d322e6p-49f,
     0.0f, 0.0f, 0.0f, 0x1.fd552ap-43f, 0.0f, 0.0f, 0.0f, 0x1.8d6276p-40f,
     0x1.224808p-57f, 0.0f, 0.0f, 0.0f, 0x1.b8776p-36f, 0x1.d85e34p-30f,
     0x1.507bb8p-29f, 0x1.b0cc9p-63f, 0.0f, 0x1.52445p-19f, 0.0f, 0x1.9b9fc2p-53f,
     0x1.223ac6p-30f, 0x1.e8463ep-50f, 0.0f, 0x1.72fc5ap-49f, 0.0f, 0x1.2e48c2p-35f,
     0x1.c71c82p-121f, 0x1.35f608p-58f, 0x1.620d1ap-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.86c10ep-32f, 0.0f, 0x1.eb29d6p-84f, 0.0f, 0x1.82b99ap-92f,
     0x1.787ac8p-91f, 0.0f, 0.0f, 0x1.9d476ap-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c3c802p-30f, 0x1.44be12p-34f, 0.0f, 0x1.7aa216p-71f, 0x1.073fcap-26f, 0.0f,
     0.0f, 0x1.6e3d4ep-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b6823ap-83f, 0.0f,
     0.0f, 0.0f, 0x1.c540dap-93f, 0x1.703282p-35f, 0.0f, 0.0f, 0x1.e8d0fcp-25f, 0.0f,
     0x1.7846b2p-80f, 0x1.6c4p-120f, 0x1.9cd8dp-42f, 0x1.2539c4p-114f, 0x1.992d4p-51f,
     0.0f, 0.0f, 0.0f, 0x1.07a3bap-2f, 0.0f, 0x1.e42ac4p-74f, 0.0f, 0x1.35dc82p-6f,
     0.0f, 0.0f, 0.0f, 0x1.c7b496p-114f, 0.0f, 0.0f, 0.0f, 0x1.66ff42p-87f,
     0x1.98c0b2p-57f, 0.0f, 0.0f, 0x1.d9df86p-71f, 0x1.e7735cp-51f, 0x1.de6082p-120f,
     0.0f, 0x1.abf496p-105f, 0.0f, 0x1.ca0566p-8f, 0x1.19f7cp-92f, 0.0f,
     0x1.a3a5e2p-5f, 0.0f, 0x1.d76c76p-84f, 0.0f, 0.0f, 0.0f, 0x1.8a9eccp-76f, 0.0f,
     0x1.dfa2p-2f, 0x1.f3e5b6p-46f, 0x1.8b3caep-33f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.879016p-99f, 0.0f, 0x1.e0a52cp-86f, 0x1.fd9e9cp-15f, 0.0f, 0x1.ff4908p-56f,
     0.0f, 0.0f, 0x1.a20df6p-54f, 0x1.f002acp-48f, 0x1.5dce74p-96f, 0.0f,
     0x1.5b191p-76f, 0x1.7943e8p-94f, 0x1.d22e5cp-47f, 0.0f, 0.0f, 0.0f,
     0x1.8cfa08p-4f, 0.0f, 0x1.2e787ap-2f, 0x1.db21d8p-44f, 0.0f, 0x1.2a35fap-87f,
     0x1.60cf26p-30f, 0x1.d1fe6ap-122f, 0x1.d270d4p-109f, 0.0f, 0x1.4e79bp-103f,
     0x1.0c1c14p-33f, 0.0f, 0x1.5a7b1p-93f, 0.0f, 0x1.62b94p-33f, 0.0f,
     0x1.1b4204p-84f, 0x1.bec77ep-68f, 0x1.a32ed8p-81f, 0x1.8a17cap-86f, 0.0f,
     0x1.69b214p-79f, 0x1.e282bap-75f, 0.0f, 0.0f, 0.0f, 0x1.3adc3ap-118f,
     0x1.61a38ap-46f, 0.0f, 0x1.dca702p-92f, 0x1.3a4a8ep-34f, 0.0f, 0x1.760948p-124f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e6186ep-104f, 0x1.6fc0d8p-66f, 0x1.da6704p-8f, 0.0f,
     0.0f, 0.0f, 0x1.da8068p-11f, 0x1.4626fap-99f, 0.0f, 0.0f, 0x1.e04072p-109f, 0.0f,
     0x1.06318ep-24f, 0.0f, 0x1.ac9d1ap-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.394a8ep-118f,
     0.0f, 0.0f, 0x1.ca718p-107f, 0x1.0a3296p-28f, 0.0f, 0.0f, 0x1.cc8484p-9f, 0.0f,
     0x1.b14b2ap-58f, 0x1.314606p-46f, 0x1.b256b2p-49f, 0.0f, 0.0f, 0x1.fa48e6p-108f,
     0.0f, 0.0f, 0x1.0facbp-104f, 0x1.9aaf5p-96f, 0x1.3d9bep-34f, 0x1.040f0ap-38f,
     0x1.423642p-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6fb684p-79f,
     0x1.102f7cp-52f, 0.0f, 0x1.a7b216p-81f, 0x1.f8ea9cp-79f, 0x1.04520ep-4f,
     0x1.53f8cep-52f, 0.0f, 0.0f, 0x1.f34332p-105f, 0x1.19fffp-18f, 0x1.71f87p-57f,
     0x1.c37102p-13f, 0x1.153828p-86f, 0.0f, 0.0f, 0x1.b4e5ep-77f, 0.0f, 0.0f,
     0x1.95734cp-54f, 0.0f
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
            ml_float4_t tmp3;
            int32_t tmp4;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            memcpy(&tmp1, ((ml_float4_t*)(external_bench_wrapper_input_table_arg1+ i)), 16);
            tmp2 = Sleef_fminf4_kvx(tmp0, tmp1);
            memcpy(((ml_float4_t*)(external_bench_wrapper_output_table+ i)), &(tmp2), 16);
            tmp3 = local_acc + tmp2;
            local_acc = tmp3;
            tmp4 = i + INT32_C(4);
            i = tmp4;
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
    printf("Sleef_fminf4_kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_fminf4_kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
