/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_fabsf8_kvx.c --function Sleef_fabsf8_kvx --headers \
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
     0x1.ab22f2p-88f, 0.0f, 0x1.ce3eb8p-15f, 0x1.4b82d4p-16f, 0x1.7bf42p-115f,
     0x1.dc7116p-8f, 0x1.5c42e4p-69f, 0x1.363a0ep-68f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5f4e5p-66f, 0x1.619dp-30f, 0x1.2f5eep-84f, 0.0f, 0x1.79912ap-48f,
     0x1.1c58e8p-64f, 0x1.767f6ep-66f, 0.0f, 0x1.2f261ep-19f, 0.0f, 0x1.80bc1ap-19f,
     0.0f, 0x1.21675cp-11f, 0.0f, 0x1.6976d4p-118f, 0.0f, 0.0f, 0.0f, 0x1.867476p-12f,
     0x1.9a7dbep-46f, 0x1.6df68ep-86f, 0.0f, 0.0f, 0x1.cc7296p-74f, 0x1.e5d218p-71f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ac1a2p-112f, 0x1.0a1904p-28f, 0.0f,
     0.0f, 0x1.48e1c4p-35f, 0x1.7645cep-92f, 0.0f, 0x1.239c42p-43f, 0.0f,
     0x1.e23dccp-38f, 0x1.97a984p-43f, 0.0f, 0.0f, 0x1.794408p-115f, 0x1.9abde4p-118f,
     0x1.3bd5cp-90f, 0.0f, 0.0f, 0x1.a56a3cp-66f, 0.0f, 0x1.b16a72p-103f,
     0x1.30c4d4p-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6bab4ap-30f, 0x1.72bc6p-62f, 0.0f,
     0x1.38914ap-2f, 0.0f, 0x1.4257e8p-30f, 0.0f, 0.0f, 0x1.7ef9a4p-51f, 0.0f,
     0x1.f98114p-42f, 0.0f, 0x1.f7f98p-125f, 0x1.839522p-104f, 0.0f, 0x1.c96b7cp-115f,
     0x1.45f8bp-70f, 0.0f, 0x1.660408p-80f, 0.0f, 0.0f, 0.0f, 0x1.01e2cep-46f, 0.0f,
     0.0f, 0x1.59f084p-85f, 0x1.539666p-119f, 0.0f, 0.0f, 0x1.3c3f7p-60f,
     0x1.e291e4p-111f, 0.0f, 0x1.cb83d4p-49f, 0.0f, 0.0f, 0.0f, 0x1.4d89eap-99f,
     0x1.ea467ep-20f, 0x1.04b30ep-28f, 0.0f, 0x1.c33e5cp-50f, 0x1.d43eccp-111f,
     0x1.b58e4p-50f, 0.0f, 0x1.84598cp-11f, 0.0f, 0x1.08cf64p-10f, 0.0f,
     0x1.a6b7e2p-77f, 0x1.e4c764p-11f, 0x1.0e97f6p-29f, 0.0f, 0x1.5bb75ap-6f, 0.0f,
     0x1.1eb4fp-58f, 0.0f, 0x1.0ead5cp-49f, 0.0f, 0x1.81ed36p-46f, 0x1.cfe208p-53f,
     0x1.46adeep-100f, 0.0f, 0.0f, 0x1.b76ebap-71f, 0.0f, 0.0f, 0x1.6286e8p-124f,
     0x1.1e344ap-81f, 0x1.df1374p-123f, 0x1.e68068p-82f, 0x1.c69f28p-79f,
     0x1.9fb34ap-80f, 0x1.b31596p-86f, 0x1.3c1eaep-86f, 0.0f, 0x1.750712p-54f,
     0x1.5d66a2p-34f, 0x1.9a4ad4p-126f, 0.0f, 0.0f, 0x1.53dc32p-112f, 0.0f, 0.0f,
     0x1.9a0c2cp-86f, 0x1p0f, 0x1.d550bap-57f, 0.0f, 0x1.fd036ap-2f, 0x1.f210f8p-125f,
     0x1.d12228p-27f, 0.0f, 0.0f, 0.0f, 0x1.401ad2p-124f, 0x1.668214p-110f, 0.0f,
     0.0f, 0x1.ccd8e4p-91f, 0.0f, 0x1.0cc788p-98f, 0x1.580338p-110f, 0x1.943702p-124f,
     0.0f, 0.0f, 0.0f, 0x1.6a5da8p-126f, 0.0f, 0.0f, 0.0f, 0x1.e43b9cp-55f,
     0x1.921e76p-74f, 0.0f, 0x1.f8dac4p-60f, 0x1.241c9ep-104f, 0.0f, 0.0f, 0.0f,
     0x1p0f, 0.0f, 0x1.89611cp-113f, 0x1.ede59cp-23f, 0.0f, 0.0f, 0x1.77b21ap-68f,
     0x1.b35078p-61f, 0.0f, 0x1.d39578p-63f, 0x1.a154d2p-73f, 0.0f, 0.0f,
     0x1.a82d86p-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.377532p-120f, 0x1.3fc0bap-116f,
     0.0f, 0x1.733026p-55f, 0.0f, 0.0f, 0x1.672d88p-10f, 0.0f, 0x1.ab6052p-10f,
     0x1.c72c74p-16f, 0x1.57d3b2p-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e5eb7ap-58f, 0x1.7dce88p-74f, 0x1.a4aaep-79f, 0.0f, 0.0f, 0.0f,
     0x1.23cb24p-72f, 0x1.9b3f16p-83f, 0.0f, 0x1.aa887p-120f, 0x1.df7a46p-49f,
     0x1.77b292p-74f, 0.0f, 0.0f, 0x1.7f5a26p-84f, 0x1.ab9474p-66f, 0.0f,
     0x1.6fa842p-6f, 0x1.b9a09p-9f, 0x1.23419p-54f, 0.0f, 0.0f, 0.0f, 0x1.c34a74p-31f,
     0.0f, 0.0f, 0x1.784dbep-120f, 0.0f, 0x1.5ca0c8p-108f, 0x1.051fa2p-43f,
     0x1.456596p-65f, 0x1.b0d61ep-28f, 0x1.a32ec4p-103f, 0.0f, 0.0f, 0.0f,
     0x1.ad6218p-11f, 0x1.69150ep-92f, 0.0f, 0x1.118a8cp-112f, 0x1.94f95ep-60f,
     0x1.a459bap-66f, 0x1.c3816cp-19f, 0x1.44295ep-65f, 0.0f, 0.0f, 0x1.b7edeap-77f,
     0.0f, 0x1.8d726cp-66f, 0x1.66796ap-123f, 0x1.b7e512p-65f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.46ac84p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e0dfdp-117f, 0x1.d351c8p-91f,
     0x1.7b6c52p-27f, 0x1.dc96ccp-121f, 0.0f, 0.0f, 0.0f, 0x1.42904cp-42f,
     0x1.0c9664p-4f, 0.0f, 0.0f, 0x1.5ee9cap-11f, 0.0f, 0x1.19ad5p-94f, 0.0f,
     0x1.4d5beep-29f, 0x1.55ebfp-99f, 0x1.1e81e4p-60f, 0x1.c852d8p-27f,
     0x1.7bb4a8p-35f, 0x1.89052ap-30f, 0.0f, 0x1.4921c6p-95f, 0x1.e15652p-107f,
     0x1.ec043ep-91f, 0.0f, 0.0f, 0.0f, 0x1.0b191ep-124f, 0.0f, 0.0f, 0x1.b6e464p-63f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.9f1b8ap-26f, 0.0f, 0x1.b75336p-120f, 0.0f, 0.0f,
     0.0f, 0x1.681d6ep-114f, 0x1.b1c91cp-110f, 0x1.50819ap-94f, 0x1.6d1a3ap-86f,
     0x1.3f5d1ap-32f, 0x1.ce879cp-31f, 0x1.fe6f0cp-12f, 0.0f, 0.0f, 0.0f,
     0x1.06bf24p-35f, 0.0f, 0x1.5cbdbap-96f, 0x1.ee770ep-110f, 0.0f, 0x1.810828p-79f,
     0.0f, 0x1.dd0eaep-20f, 0x1.3c5694p-44f, 0x1.20294cp-34f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.834e34p-27f, 0.0f, 0.0f, 0x1.c9b77cp-106f, 0.0f,
     0x1.7bef6cp-110f, 0x1.50562p-21f, 0x1.b961a8p-79f, 0.0f, 0x1.b74676p-8f,
     0x1.63a4ep-24f, 0x1.498b2ap-8f, 0x1.ecb35ap-7f, 0x1.412d5cp-124f,
     0x1.ff9704p-48f, 0x1.a3e8d2p-16f, 0.0f, 0.0f, 0x1.4f04c4p-17f, 0.0f,
     0x1.a5fe98p-84f, 0x1.d54598p-48f, 0x1.9bbe32p-90f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8933dcp-97f, 0x1.41871cp-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.46d79ap-108f,
     0.0f, 0.0f, 0x1.88411p-67f, 0x1.8c06cp-21f, 0.0f, 0x1.8623d4p-101f,
     0x1.a6ed6ap-6f, 0x1.7cbd82p-79f, 0.0f, 0x1.7117fap-117f, 0.0f, 0x1.082758p-32f,
     0.0f, 0x1.1a423cp-26f, 0.0f, 0.0f, 0x1.027e5ep-37f, 0.0f, 0x1p0f, 0.0f,
     0x1.c6d122p-112f, 0x1.03a7a4p-43f, 0.0f, 0.0f, 0.0f, 0x1.29a89cp-70f, 0.0f, 0.0f,
     0.0f, 0x1.720cf4p-5f, 0.0f, 0.0f, 0.0f, 0x1.f6c9p-28f, 0x1.4ef4c6p-20f,
     0x1.bda84ap-45f, 0x1.26d846p-27f, 0x1.15b828p-87f, 0.0f, 0.0f, 0x1.f0e1ccp-59f,
     0x1.dfbd2ap-53f, 0x1.d7cd86p-66f, 0.0f, 0.0f, 0x1.e4e568p-34f, 0x1.6f29aap-75f,
     0x1.e5fba4p-58f, 0.0f, 0.0f, 0x1.80af74p-63f, 0x1.ca6264p-72f, 0x1.539e66p-113f,
     0x1.f63beep-106f, 0.0f, 0.0f, 0.0f, 0x1.ce1434p-111f, 0.0f, 0x1.ec0178p-80f,
     0x1.c1f56ep-114f, 0x1.d6d4ap-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.91485p-3f, 0.0f,
     0x1.5ca2a2p-51f, 0.0f, 0.0f, 0x1.606e1ap-126f, 0.0f, 0.0f, 0.0f, 0x1.2270ap-125f,
     0x1.3db7b2p-3f, 0.0f, 0x1.440df6p-33f, 0.0f, 0x1.72b28p-32f, 0x1.59dc86p-65f,
     0.0f, 0.0f, 0x1.6bcefcp-80f, 0.0f, 0x1.db1ca4p-78f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.752722p-122f, 0x1.360a26p-106f, 0.0f, 0x1.43005ep-123f, 0.0f,
     0x1.4ba7fcp-121f, 0.0f, 0x1.699edcp-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.760dcep-20f,
     0.0f, 0.0f, 0x1.30478ap-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.0aee66p-29f, 0.0f, 0x1.67a006p-121f, 0x1.8115fp-94f, 0x1.d74c28p-84f,
     0.0f, 0x1.d79234p-81f, 0.0f, 0.0f, 0.0f, 0x1.2aaabap-20f, 0x1.d8fa92p-94f, 0.0f,
     0x1.656044p-101f, 0.0f, 0x1.2d99eep-85f, 0x1.443cd2p-36f, 0.0f, 0x1.fac922p-23f,
     0.0f, 0.0f, 0.0f, 0x1.bd21c2p-10f, 0.0f, 0x1.635cb2p-124f, 0.0f, 0x1.ede9b4p-2f,
     0x1.991d7p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f7a95ap-62f, 0x1.fe3cf6p-93f,
     0x1.f78296p-52f, 0x1.c47fep-122f, 0.0f, 0x1.6d9f8cp-125f, 0x1.b7fef2p-119f,
     0x1.94ef02p-31f, 0.0f, 0.0f, 0.0f, 0x1.887fd8p-14f, 0.0f, 0.0f, 0x1.6ae8d2p-43f,
     0.0f, 0.0f, 0x1.9a489ep-50f, 0.0f, 0x1.b7de66p-84f, 0x1.6c663ep-61f,
     0x1.33811p-89f, 0.0f, 0x1.970cc8p-91f, 0.0f, 0x1.038d5p-107f, 0.0f, 0.0f, 0.0f,
     0x1.36c952p-41f, 0x1.87cc46p-44f, 0.0f, 0x1.739272p-18f, 0x1.abf776p-34f,
     0x1.6551dep-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.42f32ap-57f, 0.0f, 0.0f,
     0x1.72496ap-110f, 0x1.05d37p-31f, 0x1.72d7e6p-88f, 0x1.21e3b6p-117f, 0.0f,
     0x1.eb794ep-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cca04cp-10f, 0.0f, 0.0f, 0.0f,
     0x1.2afea2p-52f, 0x1.ec9208p-84f, 0x1.8697a6p-91f, 0x1.e0d778p-79f,
     0x1.c518d2p-61f, 0x1.d4a5aap-40f, 0.0f, 0.0f, 0x1.ec7c8p-20f, 0x1.77f562p-99f,
     0x1.eb7fc4p-56f, 0x1.e45bep-106f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.bd6f64p-90f,
     0.0f, 0x1.b5d024p-38f, 0x1.ca54e6p-109f, 0x1.e7eefep-24f, 0x1.d1e6eap-34f,
     0x1.f3a6bp-26f, 0x1.19d03ep-98f, 0.0f, 0x1.e550fap-79f, 0.0f, 0x1.82ca64p-25f,
     0.0f, 0x1.94238ep-52f, 0x1.fbf2p-66f, 0x1.6dc38cp-57f, 0x1.6ba886p-7f,
     0x1.f327bp-107f, 0x1.50fbccp-106f, 0x1.0155bp-45f, 0x1.fdecf4p-25f, 0.0f, 0.0f,
     0x1.49c67cp-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.137bf6p-124f, 0x1.b50408p-120f,
     0x1.a2cfb2p-121f, 0.0f, 0x1.a4f382p-56f, 0.0f, 0x1.a2394ap-7f, 0.0f, 0.0f,
     0x1.db107ep-9f, 0x1.12f992p-69f, 0.0f, 0.0f, 0.0f, 0x1.c1d28ap-19f, 0.0f, 0.0f,
     0.0f, 0x1.d74148p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.78b2f4p-11f, 0x1.fb1bdp-120f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3a731ap-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c3876p-7f,
     0x1.354dfp-86f, 0.0f, 0.0f, 0x1.c9d804p-70f, 0.0f, 0x1.655a16p-97f,
     0x1.7dced8p-64f, 0x1.e431dep-104f, 0x1.437faep-56f, 0x1.d37faap-101f, 0.0f,
     0x1.fe7f88p-14f, 0x1.9accaap-1f, 0x1.2f910ep-81f, 0.0f, 0.0f, 0.0f,
     0x1.f120acp-53f, 0.0f, 0.0f, 0x1.aae488p-66f, 0.0f, 0.0f, 0x1.b857c4p-126f,
     0x1.444332p-92f, 0x1.5af52ap-11f, 0.0f, 0.0f, 0x1.20d812p-13f, 0.0f, 0.0f,
     0x1.259ae8p-54f, 0.0f, 0.0f, 0x1.b45b4ap-89f, 0.0f, 0x1.50560ap-93f,
     0x1.873c88p-84f, 0x1.1ea418p-96f, 0x1.676dp-59f, 0.0f, 0.0f, 0x1.5fe4e6p-3f,
     0.0f, 0x1.517516p-99f, 0x1.1669dep-87f, 0.0f, 0x1.c2195cp-10f, 0.0f,
     0x1.f79606p-1f, 0x1.af2f88p-119f, 0x1.ec57c8p-6f, 0x1.e56614p-20f, 0.0f, 0.0f,
     0.0f, 0x1.18de4p-42f, 0.0f, 0.0f, 0.0f, 0x1.7b081cp-61f, 0x1.b73852p-54f, 0.0f,
     0x1.4c4aacp-41f, 0x1.cd1e12p-40f, 0.0f, 0.0f, 0.0f, 0x1.33148cp-24f,
     0x1.6c92a2p-3f, 0x1.2ad99ap-121f, 0.0f, 0x1.f9a2b6p-8f, 0.0f, 0x1.051ef6p-25f,
     0x1.b69bfap-18f, 0x1.1fb2d8p-49f, 0x1.f5080ap-49f, 0.0f, 0.0f, 0x1.17b24cp-47f,
     0x1.7a1b6ep-84f, 0.0f, 0x1.d1595ep-66f, 0x1.d47eeep-26f, 0.0f, 0x1.e8004ep-21f,
     0x1.e2b5e2p-81f, 0x1.99d48ap-53f, 0x1.aede7ep-75f, 0.0f, 0x1.754c7ep-42f, 0.0f,
     0x1.20b6ap-53f, 0x1.aacbccp-29f, 0x1.c2245cp-121f, 0x1.653d4p-75f,
     0x1.4d91aap-27f, 0x1.48676p-67f, 0x1.8af726p-97f, 0.0f, 0x1.1f38d8p-90f,
     0x1.c079f4p-120f, 0.0f, 0x1.cf44a2p-43f, 0x1.b27b8ap-38f, 0.0f, 0x1.d97d7p-86f,
     0.0f, 0.0f, 0x1.453088p-27f, 0.0f, 0.0f, 0.0f, 0x1.deed04p-84f, 0x1.569d52p-40f,
     0x1.f7b8b8p-88f, 0.0f, 0.0f, 0.0f, 0x1.76676ap-1f, 0x1.7e01f8p-115f, 0.0f,
     0x1.571b84p-2f, 0.0f, 0.0f, 0x1.dc3e84p-16f, 0x1.c094d8p-65f, 0x1.2598a8p-42f,
     0x1.0e4fbp-2f, 0.0f, 0.0f, 0.0f, 0x1.722f8cp-57f, 0.0f, 0.0f, 0x1.752dbcp-118f,
     0.0f, 0.0f, 0.0f, 0x1.b51e44p-80f, 0.0f, 0.0f, 0.0f, 0x1.920d72p-48f, 0.0f,
     0x1.1eff08p-105f, 0x1.211514p-89f, 0.0f, 0.0f, 0.0f, 0x1.a7705p-107f,
     0x1.7a89a4p-65f, 0.0f, 0x1.10a84ep-54f, 0x1.cbe08cp-85f, 0.0f, 0.0f,
     0x1.b69584p-28f, 0.0f, 0.0f, 0.0f, 0x1.5dc61cp-56f, 0x1.28996cp-11f,
     0x1.5744c6p-101f, 0x1.5318d4p-21f, 0x1.547dc6p-82f, 0x1.8dffbp-107f, 0.0f, 0.0f,
     0x1.12313ep-40f, 0.0f, 0x1.3f43cap-95f, 0x1.37bf2ap-126f, 0x1.8939cap-56f,
     0x1.c22ed6p-10f, 0.0f, 0x1.3f2c86p-44f, 0x1.724b52p-36f, 0.0f, 0x1.8de1f2p-63f,
     0x1.03f172p-9f, 0x1.9b3f7ep-111f, 0x1.c85984p-7f, 0x1.47b2ap-26f,
     0x1.67f3a4p-54f, 0x1.b50e48p-122f, 0x1.e17f0ap-32f, 0x1.1056eap-15f,
     0x1.8a6062p-103f, 0x1.d36818p-35f, 0x1.bad12cp-97f, 0x1.c3f984p-47f,
     0x1.e3f01ep-87f, 0x1.d90d5ep-3f, 0x1.29385ep-35f, 0x1.522182p-109f, 0.0f, 0.0f,
     0x1.664574p-88f, 0x1.a4541cp-66f, 0x1.c258ecp-82f, 0.0f, 0x1.eac38p-4f, 0.0f,
     0x1.913936p-85f, 0.0f, 0x1.75ba36p-10f, 0x1.1c1176p-85f, 0.0f, 0.0f,
     0x1.97ff2cp-61f, 0x1.073f2ap-110f, 0x1.7a630ep-25f, 0.0f, 0.0f, 0.0f,
     0x1.3e808ap-21f, 0x1.953302p-64f, 0.0f, 0.0f, 0.0f, 0x1.ef826ap-98f, 0.0f,
     0x1.6872fap-110f, 0x1.1cf5p-29f, 0.0f, 0.0f, 0.0f, 0x1.f1e608p-1f, 0.0f,
     0x1.e9980ap-65f, 0x1.c6bbap-101f, 0x1.b269a8p-72f, 0x1.1f23ccp-89f,
     0x1.f1925ap-76f, 0x1.79329ap-19f, 0x1.063c3cp-21f, 0x1.5da354p-36f,
     0x1.d553cp-110f, 0x1.2616dp-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8fa5ap-66f, 0.0f, 0.0f, 0x1.8d4d8p-87f, 0x1.78aa8ap-29f, 0x1.5bdf36p-33f,
     0.0f, 0.0f, 0.0f, 0x1.c0855p-7f, 0.0f, 0x1.5c3026p-80f, 0x1.5d9f22p-1f,
     0x1.39d612p-54f, 0x1.139acep-115f, 0.0f, 0.0f, 0x1.56382p-68f, 0.0f, 0.0f, 0.0f,
     0x1.e2e178p-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7fb964p-12f, 0.0f,
     0x1.68351ap-83f, 0.0f, 0x1.9a99e8p-94f, 0.0f, 0x1.03b45cp-91f, 0x1.cdf83ep-100f,
     0.0f, 0x1.4a457ep-17f, 0.0f, 0x1.4d13e2p-72f, 0x1.4553b6p-114f, 0.0f, 0.0f, 0.0f,
     0x1.542c8ap-108f, 0x1.4f9f3p-36f, 0x1.24c33ap-18f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.24526ap-119f, 0.0f, 0.0f, 0.0f, 0x1.1bb894p-93f, 0.0f, 0.0f, 0.0f,
     0x1.7874f2p-72f, 0.0f, 0x1.b6019ap-93f, 0.0f, 0x1.d2a998p-15f, 0.0f, 0.0f,
     0x1.7147acp-33f, 0.0f, 0.0f, 0.0f, 0x1.e9a6d2p-90f, 0x1.270b06p-101f, 0.0f, 0.0f,
     0.0f, 0x1.36c4a2p-93f, 0x1.93fdf6p-93f, 0x1.0bb056p-102f, 0x1.c9041p-12f,
     0x1.59eea4p-77f, 0x1.cac65ep-97f, 0x1.9de9c2p-8f, 0x1.01859ap-25f,
     0x1.907f1ap-72f, 0x1.f8ff7ap-34f, 0.0f, 0.0f
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
            tmp1 = Sleef_fabsf8_kvx(tmp0);
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
    printf("Sleef_fabsf8_kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_fabsf8_kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
