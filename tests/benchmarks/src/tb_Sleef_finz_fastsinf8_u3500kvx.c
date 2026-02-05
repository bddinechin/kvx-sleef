/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_fastsinf8_u3500kvx.c --function \
 *     Sleef_finz_fastsinf8_u3500kvx --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0.0f, 0x1.02720ep-10f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.978dd4p-10f, 0.0f,
     0.0f, 0x1.86079cp-119f, 0x1.cacd12p-15f, 0.0f, 0x1.cda1fep-6f, 0.0f,
     0x1.f662a4p-94f, 0.0f, 0x1.9a299p-125f, 0x1.29d27ep-95f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.410574p-81f, 0.0f, 0x1.9dbdfep-111f, 0x1.8aadecp-34f, 0x1.751ccp-59f, 0.0f,
     0.0f, 0.0f, 0x1.e3894p-53f, 0.0f, 0.0f, 0x1.924d74p-46f, 0.0f, 0.0f, 0.0f,
     0x1.177f78p-28f, 0x1.1a18ecp-95f, 0x1.91a2e6p-113f, 0x1.0f8afcp-4f,
     0x1.ed4c98p-122f, 0.0f, 0.0f, 0x1.2252f2p-93f, 0.0f, 0.0f, 0.0f, 0x1.5d0e04p-15f,
     0.0f, 0.0f, 0x1.f31296p-89f, 0x1.87613ap-6f, 0x1.0d8eeep-106f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e22248p-27f, 0x1.4d22e8p-33f, 0x1.4b8272p-97f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.3bb14p-107f, 0.0f, 0x1.0106dcp-84f, 0x1.da59dcp-29f,
     0x1.5ef096p-34f, 0x1.de802ep-110f, 0x1.2ea65p-11f, 0x1.c664d4p-81f,
     0x1.1e557ep-52f, 0x1.19e49p-32f, 0.0f, 0x1.62670ep-86f, 0.0f, 0x1.54f864p-11f,
     0x1.7ce172p-102f, 0.0f, 0.0f, 0x1.f40ed6p-120f, 0.0f, 0.0f, 0.0f, 0x1.8b188p-42f,
     0x1.120112p-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8fae36p-26f, 0x1.288b7ep-66f, 0.0f,
     0.0f, 0.0f, 0x1.ce365ep-46f, 0.0f, 0x1.aa5868p-102f, 0x1.92908ap-59f,
     0x1.069f76p-77f, 0x1.92d6dap-96f, 0x1.bddcbp-85f, 0.0f, 0x1.a72938p-113f,
     0x1.108ad4p-49f, 0x1.eb5d8cp-53f, 0x1.9134a6p-126f, 0x1.058286p-68f,
     0x1.1a7e9p-122f, 0.0f, 0.0f, 0.0f, 0x1.2e8f3ep-7f, 0.0f, 0x1.afc18p-95f, 0.0f,
     0x1.4becf8p-125f, 0x1.9afca4p-28f, 0x1.94d07cp-95f, 0x1.dc50a8p-94f,
     0x1.0c434cp-63f, 0x1.3a9216p-31f, 0x1.5c146ep-22f, 0x1.093284p-15f,
     0x1.edf0d8p-31f, 0x1.50b884p-89f, 0.0f, 0x1.4bd3bcp-20f, 0.0f, 0x1.ae694ep-59f,
     0x1.4ae9cep-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a0c0d2p-68f, 0.0f, 0.0f,
     0x1.4eeaa8p-7f, 0x1.e2ca86p-116f, 0x1.6b5bb8p-32f, 0.0f, 0x1.6c792ep-90f,
     0x1.9b5f18p-69f, 0x1.2e23ccp-12f, 0x1.10c23ap-16f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c35f0ap-122f, 0.0f, 0.0f, 0.0f, 0x1.3ec5ap-6f, 0.0f, 0.0f, 0.0f,
     0x1.1e8f2ap-55f, 0x1.373bcep-40f, 0x1.47b868p-45f, 0x1.bdfbbap-102f,
     0x1.7932fcp-98f, 0.0f, 0.0f, 0x1.0ec9ccp-3f, 0x1.0033fep-116f, 0x1.b2a6bp-119f,
     0.0f, 0.0f, 0x1.32bd52p-77f, 0.0f, 0x1.71297cp-113f, 0x1.34e38cp-23f,
     0x1.33478cp-2f, 0.0f, 0x1.5c7f08p-25f, 0x1.f7a7p-26f, 0x1.6b377cp-123f,
     0x1.415a08p-97f, 0.0f, 0x1.83c57ap-93f, 0x1.6d132ap-119f, 0.0f, 0.0f, 0.0f,
     0x1.7dd016p-33f, 0x1.80e6bap-38f, 0x1.0df382p-120f, 0.0f, 0x1.d5e66ap-108f,
     0x1.8ec13p-36f, 0.0f, 0x1.abd8e4p-103f, 0x1.b3c868p-32f, 0x1.0933f4p-85f, 0.0f,
     0.0f, 0.0f, 0x1.4aa38ep-53f, 0.0f, 0.0f, 0x1.a3bb8ep-13f, 0.0f, 0x1.672314p-18f,
     0.0f, 0.0f, 0x1.4b6fc6p-104f, 0x1.9387f4p-98f, 0x1.af0266p-58f, 0x1.90030ap-45f,
     0.0f, 0x1.88ff82p-100f, 0.0f, 0.0f, 0x1.54e8c8p-114f, 0x1.74e2ap-46f, 0.0f,
     0x1.d916bcp-64f, 0.0f, 0x1.ed1e16p-123f, 0x1.4572eep-80f, 0x1.1c0e16p-45f, 0.0f,
     0x1.cb700cp-28f, 0x1.603e66p-4f, 0x1.a1be02p-120f, 0x1.8d375cp-67f, 0.0f, 0.0f,
     0.0f, 0x1.7c6496p-10f, 0.0f, 0x1.c32c3ep-47f, 0.0f, 0x1.f52e72p-65f, 0.0f,
     0x1.e06dfcp-13f, 0.0f, 0x1.e008aep-111f, 0x1.b0a024p-20f, 0x1.dc68bep-57f,
     0x1.54532p-47f, 0x1.079a2p-19f, 0x1.990f1cp-118f, 0x1.38edcp-62f, 0.0f, 0.0f,
     0x1.b81a98p-119f, 0x1.7b17d4p-48f, 0x1.a660bep-10f, 0x1.f53b88p-16f, 0.0f,
     0x1.8aa7bcp-61f, 0.0f, 0.0f, 0x1.be83acp-28f, 0x1.3a9056p-72f, 0.0f,
     0x1.3bab58p-76f, 0x1.8c346ap-20f, 0x1.389db8p-43f, 0x1.3238fap-109f,
     0x1.9a27cp-7f, 0x1.352d02p-96f, 0x1.753854p-24f, 0x1.13145ep-95f,
     0x1.2b7e28p-55f, 0x1.fbef1ep-66f, 0x1.8194c6p-28f, 0.0f, 0x1.3ae1a8p-96f, 0.0f,
     0.0f, 0x1.f2cc5ep-89f, 0.0f, 0.0f, 0.0f, 0x1.bec438p-117f, 0.0f, 0x1.dcac9p-79f,
     0.0f, 0.0f, 0x1.c7b26p-99f, 0.0f, 0.0f, 0.0f, 0x1.1a2198p-112f, 0x1.17a7bep-42f,
     0.0f, 0.0f, 0x1.215ea4p-112f, 0.0f, 0.0f, 0x1.9008e8p-80f, 0x1.f5d8e6p-115f,
     0.0f, 0.0f, 0x1.0b1ccep-119f, 0.0f, 0x1.be32d8p-22f, 0x1.a2e54ep-121f,
     0x1.101378p-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7342ecp-98f, 0.0f, 0x1.9d606p-14f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.91891cp-3f, 0.0f, 0.0f, 0x1.8a6058p-111f, 0.0f,
     0x1.11d0dcp-86f, 0x1.772f0ep-10f, 0x1.b8fc74p-18f, 0.0f, 0x1.379bfap-52f,
     0x1.f2ed76p-43f, 0.0f, 0.0f, 0x1.25e824p-21f, 0.0f, 0.0f, 0x1.762b5p-13f,
     0x1.f85cfcp-90f, 0.0f, 0x1.903cccp-52f, 0.0f, 0.0f, 0.0f, 0x1.ca226p-38f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f7ac0ep-19f, 0x1.a6c9dp-8f, 0x1.4802a4p-3f,
     0x1.f5a068p-27f, 0x1.52c6e6p-62f, 0x1.232502p-57f, 0x1.185f3cp-33f, 0.0f,
     0x1.b4da44p-84f, 0.0f, 0x1.7bb8bcp-106f, 0.0f, 0x1.a0eed6p-63f, 0.0f, 0.0f,
     0x1.a6394ap-20f, 0.0f, 0x1.b9f874p-63f, 0.0f, 0x1.6e9e84p-99f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.3ac6b6p-76f, 0.0f, 0.0f, 0x1.5cf018p-114f, 0x1.82eefep-47f,
     0x1.78f48ap-126f, 0x1.723324p-35f, 0x1.6a934cp-121f, 0.0f, 0x1.7a34bp-24f,
     0x1.0cc696p-33f, 0.0f, 0x1.1a403ap-85f, 0x1.55fe9cp-44f, 0x1.241dbp-12f,
     0x1.9fb16ep-84f, 0.0f, 0.0f, 0x1.04d546p-40f, 0x1.1f8bbp-61f, 0x1.ce0828p-115f,
     0x1.df146p-12f, 0x1.d736e6p-92f, 0x1.d3f2a4p-30f, 0.0f, 0.0f, 0x1.e8a576p-97f,
     0x1.07c782p-14f, 0x1.3e27a6p-119f, 0x1.14cd04p-65f, 0x1p0f, 0x1.fffd3p-116f,
     0x1.d146ep-65f, 0x1.ae253p-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.06c53ep-126f, 0.0f,
     0.0f, 0x1.b85216p-97f, 0x1.4d59dap-66f, 0x1.5118c2p-51f, 0x1.d300b4p-110f,
     0x1.bd8882p-44f, 0x1.0be4b6p-119f, 0x1.febf38p-37f, 0.0f, 0x1.31d7f6p-19f,
     0x1.19f696p-15f, 0x1.74c16ep-8f, 0x1.ddf50ep-123f, 0.0f, 0x1.420e92p-52f, 0.0f,
     0.0f, 0x1.7c903ep-43f, 0x1.516cdep-2f, 0.0f, 0.0f, 0x1.cbf4a4p-52f,
     0x1.0b15ep-64f, 0.0f, 0.0f, 0x1.fa0b94p-3f, 0x1.2f844p-17f, 0.0f,
     0x1.4d600ap-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.45258cp-52f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.7119b8p-96f, 0x1.3c57a2p-22f, 0.0f, 0.0f, 0x1.ee7482p-124f,
     0x1.fd51c6p-51f, 0x1.523c02p-99f, 0.0f, 0.0f, 0.0f, 0x1.506424p-112f, 0.0f,
     0x1.a6bea6p-40f, 0x1.498eep-61f, 0.0f, 0.0f, 0x1.6e502cp-117f, 0.0f, 0.0f,
     0x1.d62966p-83f, 0x1.c519d4p-3f, 0x1.b3f296p-30f, 0.0f, 0.0f, 0x1.84100ep-125f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.502924p-50f, 0x1.8a27e8p-56f, 0x1.d90876p-88f,
     0x1.d27476p-116f, 0x1.9a504ap-69f, 0.0f, 0x1.ee0bb6p-113f, 0.0f, 0x1.674ac6p-79f,
     0.0f, 0.0f, 0x1.015d9p-98f, 0x1.47ec06p-27f, 0.0f, 0x1.3d1b7ap-77f,
     0x1.873506p-56f, 0x1.1d886p-24f, 0.0f, 0x1.8517ap-55f, 0.0f, 0.0f,
     0x1.eb39dcp-124f, 0.0f, 0.0f, 0.0f, 0x1.0e6792p-71f, 0.0f, 0x1.02ad1ap-69f, 0.0f,
     0.0f, 0.0f, 0x1.d40ae8p-23f, 0x1.28f762p-31f, 0.0f, 0.0f, 0x1.f1f80ap-7f, 0.0f,
     0.0f, 0x1.c54696p-111f, 0x1.8c3f54p-88f, 0.0f, 0x1.7f2768p-71f, 0x1.532b16p-92f,
     0.0f, 0x1.919222p-69f, 0x1.56b73p-7f, 0x1.f31fe6p-71f, 0x1.83786cp-105f, 0.0f,
     0x1.29ed88p-32f, 0x1.2c5cf2p-97f, 0.0f, 0x1.d8b17p-27f, 0.0f, 0x1.f7bbd8p-53f,
     0.0f, 0x1.e9d918p-99f, 0.0f, 0x1.d760c8p-28f, 0x1.053bdap-99f, 0.0f, 0.0f,
     0x1.16f538p-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.04ff92p-53f, 0x1.d3f25ap-40f,
     0.0f, 0x1.ae990cp-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.68e54p-42f, 0x1.c2da16p-14f, 0x1.7ba29p-116f, 0x1.b60f8ap-34f, 0.0f,
     0x1.63ae2ep-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.16cbaap-2f, 0x1.2801fp-118f,
     0x1.fdf0e2p-41f, 0x1.d845dp-47f, 0.0f, 0x1.4dedaep-46f, 0.0f, 0.0f, 0.0f,
     0x1.287598p-50f, 0.0f, 0x1.ec434cp-66f, 0x1.2ea5c4p-38f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fbc59cp-22f, 0.0f, 0x1.63b9f8p-90f, 0x1.7e9652p-121f, 0.0f, 0x1.d59a44p-26f,
     0x1.6e39e6p-96f, 0x1.ba3446p-94f, 0.0f, 0x1.3b78aep-114f, 0.0f, 0.0f, 0.0f,
     0x1.da1c46p-33f, 0.0f, 0x1.faebf4p-84f, 0x1.1f9176p-81f, 0.0f, 0x1.aa63cp-89f,
     0x1.1519ccp-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.af03f2p-117f, 0.0f, 0x1.ad44ccp-95f,
     0.0f, 0x1.29925ep-121f, 0.0f, 0.0f, 0x1.26471p-23f, 0x1.8ca41ep-89f,
     0x1.a74a24p-52f, 0.0f, 0.0f, 0x1.b22e72p-66f, 0x1.af1568p-94f, 0x1.fa67f2p-20f,
     0x1.81ce1cp-83f, 0x1.8a15eep-3f, 0.0f, 0x1.c9737cp-51f, 0.0f, 0x1.41c388p-12f,
     0.0f, 0x1.5e057ap-115f, 0x1.67e9b2p-58f, 0x1.e91158p-94f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.2da3f8p-125f, 0.0f, 0.0f, 0.0f, 0x1.b4bbeap-65f, 0x1.7dda78p-79f,
     0.0f, 0.0f, 0x1.2eac5cp-55f, 0.0f, 0x1.67e1c4p-87f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.225dfp-58f, 0.0f, 0x1.f60ffcp-19f, 0x1.d2207ep-40f, 0x1.b594e4p-43f,
     0x1.ed2238p-24f, 0.0f, 0.0f, 0x1.8cb87cp-106f, 0x1.2359bap-53f, 0.0f,
     0x1.eaa62ap-126f, 0.0f, 0.0f, 0.0f, 0x1.e0541cp-1f, 0x1.716544p-61f,
     0x1.833036p-32f, 0x1.c412bep-105f, 0.0f, 0x1.24d112p-82f, 0x1.e0a33cp-16f, 0.0f,
     0x1.7fdf18p-6f, 0.0f, 0x1.715b9p-37f, 0.0f, 0x1.fd7facp-24f, 0x1.163d92p-63f,
     0.0f, 0x1.6a4666p-47f, 0.0f, 0.0f, 0.0f, 0x1.ddd7fp-61f, 0x1.e836d2p-84f, 0.0f,
     0x1.eef4fap-14f, 0x1.5432d2p-24f, 0x1.91b38ap-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9eb274p-18f, 0.0f, 0x1.bb2fdep-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f,
     0.0f, 0x1.be8b9p-37f, 0x1.a6f9dep-41f, 0x1.0f11fp-16f, 0x1.83a976p-50f, 0.0f,
     0.0f, 0x1.a34246p-62f, 0.0f, 0x1.e28b5cp-39f, 0.0f, 0.0f, 0x1.eefe8p-112f, 0.0f,
     0x1.67de2ap-113f, 0.0f, 0.0f, 0x1.57eec6p-22f, 0.0f, 0.0f, 0.0f, 0x1.c2e51cp-23f,
     0x1.abb5e2p-12f, 0x1.e9cafp-68f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.64060ap-71f, 0.0f,
     0x1.34276cp-66f, 0x1.8e32bap-13f, 0.0f, 0x1.e6030ep-45f, 0.0f, 0x1.ba48d2p-111f,
     0x1.4c3bbap-23f, 0x1.77eb5ap-105f, 0x1.de4a3cp-38f, 0x1.b3187ap-13f, 0.0f, 0.0f,
     0x1.499e0ep-46f, 0.0f, 0.0f, 0.0f, 0x1.ea47f4p-96f, 0.0f, 0.0f, 0x1.6575e6p-87f,
     0x1.a1fe34p-79f, 0x1.68782ep-32f, 0.0f, 0x1.b42556p-17f, 0.0f, 0x1.dd6b8ap-35f,
     0.0f, 0x1.a8d908p-90f, 0.0f, 0.0f, 0x1.05573ap-67f, 0.0f, 0.0f, 0x1.94f002p-43f,
     0.0f, 0x1.e849a6p-124f, 0.0f, 0x1.aa035p-88f, 0x1.82a3b6p-20f, 0.0f, 0.0f,
     0x1.d719ccp-65f, 0.0f, 0.0f, 0.0f, 0x1.f54d4cp-125f, 0.0f, 0.0f,
     0x1.0140e6p-107f, 0x1.3e5174p-122f, 0.0f, 0.0f, 0.0f, 0x1.9e3b26p-117f, 0.0f,
     0x1.c2096p-94f, 0x1.5250a4p-106f, 0x1.791bf2p-42f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.74db24p-110f, 0.0f, 0.0f, 0x1.b88512p-64f, 0x1.04eba2p-2f, 0x1.f32a3ap-67f,
     0.0f, 0.0f, 0x1.b9a226p-16f, 0x1.dbc6a2p-51f, 0.0f, 0.0f, 0x1.da7542p-120f,
     0x1.6d872ep-99f, 0x1.3fd868p-60f, 0.0f, 0x1.6b046p-31f, 0.0f, 0.0f, 0.0f,
     0x1.05faf4p-13f, 0x1.0c082ap-119f, 0.0f, 0.0f, 0x1.94fe7ap-42f, 0x1.9d72aap-74f,
     0.0f, 0.0f, 0x1.2a5cb8p-126f, 0.0f, 0.0f, 0.0f, 0x1.0ca686p-3f, 0x1.0a320ap-68f,
     0.0f, 0.0f, 0.0f, 0x1.465368p-39f, 0.0f, 0x1.fc91c8p-36f, 0x1.e8d41p-112f, 0.0f,
     0.0f, 0.0f, 0x1.c2241p-100f, 0x1.7cef5p-116f, 0.0f, 0x1.101648p-98f, 0.0f,
     0x1.605b98p-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.76c62ep-102f,
     0x1.ab57e4p-33f, 0x1.b811b4p-98f, 0.0f, 0x1.977d54p-80f, 0x1.f23c4ap-15f, 0.0f,
     0x1.5ec2bap-26f, 0x1.c102aep-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1eaafap-74f,
     0x1.9985acp-7f, 0.0f, 0.0f, 0x1.c7796p-107f, 0.0f, 0.0f, 0x1.e7f0d8p-14f,
     0x1.fd34c8p-124f, 0.0f, 0.0f, 0.0f, 0x1.85258cp-53f, 0.0f, 0x1.558568p-7f,
     0x1.26d646p-23f, 0.0f, 0x1.14e91p-51f, 0x1.791338p-93f, 0x1.156a4ap-2f,
     0x1.7c414cp-117f, 0.0f, 0x1.98168ep-37f, 0x1.2b4302p-97f, 0.0f, 0.0f, 0.0f,
     0x1.bad2a2p-28f, 0x1.ba7cbep-64f, 0.0f, 0.0f, 0x1.1995a2p-110f, 0x1.e48fcp-46f,
     0x1.daf65ap-65f, 0x1.415da6p-10f, 0x1.cd1c78p-48f, 0.0f, 0x1.ad2f28p-110f, 0.0f,
     0x1.856e26p-100f, 0x1.5757cep-44f, 0x1.16a16ep-102f, 0x1.8baa46p-29f,
     0x1.d1f4eep-11f, 0.0f, 0x1.5445b6p-125f, 0.0f, 0.0f, 0.0f, 0x1.5cf69ap-80f,
     0x1.cfa98ep-55f, 0.0f, 0x1.7402f8p-3f, 0.0f, 0.0f, 0.0f, 0x1.9edd9ep-58f, 0.0f,
     0.0f, 0.0f, 0x1.ed7d04p-65f, 0x1.c8ae72p-11f, 0x1.a409bep-70f, 0.0f, 0.0f,
     0x1.7f5a42p-29f, 0x1.846d28p-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.68ed7ap-104f, 0.0f, 0x1.857812p-8f, 0x1.d767f4p-69f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d1aa9cp-52f, 0.0f, 0x1.80e67cp-100f, 0.0f, 0x1.90802ap-17f, 0.0f,
     0x1.af031p-90f, 0x1.44f042p-36f, 0x1.83106ap-85f, 0.0f, 0x1.d7b648p-90f, 0.0f,
     0x1.8cf43p-45f, 0.0f, 0.0f, 0x1.6d0352p-124f, 0.0f, 0.0f, 0x1.240b3ep-118f, 0.0f,
     0x1.960216p-93f, 0x1.dd2654p-65f, 0x1.256566p-84f, 0.0f, 0x1.cb4246p-39f,
     0x1.a2531ap-59f, 0.0f, 0.0f, 0x1.615584p-99f, 0x1.a8f884p-51f, 0.0f, 0.0f, 0.0f,
     0x1.db93dp-71f, 0x1.66e63ap-66f, 0x1.7b4734p-37f, 0x1.2866f2p-51f,
     0x1.0f9414p-59f, 0x1.cab376p-79f, 0x1.05cd5ep-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.958718p-37f, 0.0f, 0x1.03f582p-97f, 0x1.8d297ep-5f, 0x1.e0c31p-79f,
     0x1.1f48fap-11f, 0x1.d48a48p-40f, 0.0f, 0x1.1f91d6p-114f, 0x1.dddeacp-120f
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
            tmp1 = Sleef_finz_fastsinf8_u3500kvx(tmp0);
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
    printf("Sleef_finz_fastsinf8_u3500kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_finz_fastsinf8_u3500kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
