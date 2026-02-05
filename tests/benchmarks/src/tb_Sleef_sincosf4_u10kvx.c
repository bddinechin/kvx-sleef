/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_sincosf4_u10kvx.c --function Sleef_sincosf4_u10kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 4 --function-input-vector-size 4 --precision sleef_sf2 \
 *     --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <string.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef_float32x4_t_2 external_bench_wrapper_cst = {.x = {0.0f, 0.0f, 0.0f, 0.0f},.y = {0.0f, 0.0f, 0.0f, 0.0f}};
static const Sleef_float32x4_t_2 external_bench_wrapper_cst1 = {.x = {0.0f, 0.0f, 0.0f, 0.0f},.y = {0.0f, 0.0f, 0.0f, 0.0f}};
volatile Sleef_float32x4_t_2 external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0.0f, 0.0f, 0x1.daf20cp-92f, 0x1.1cbbb4p-83f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0b113cp-35f, 0.0f, 0.0f, 0x1.28b0fp-106f, 0x1.f6edf6p-94f, 0.0f,
     0x1.185caap-5f, 0.0f, 0x1.783d0ep-25f, 0x1.8b5abp-84f, 0.0f, 0.0f, 0.0f,
     0x1.9bda6cp-79f, 0.0f, 0x1.b4f042p-49f, 0.0f, 0.0f, 0.0f, 0x1.a38716p-79f, 0.0f,
     0x1.7fdb12p-53f, 0.0f, 0x1.0cc28ap-24f, 0x1.17a95cp-27f, 0x1.035d8ep-125f, 0.0f,
     0x1.ba9fc4p-101f, 0.0f, 0x1.fea0d2p-68f, 0.0f, 0.0f, 0.0f, 0x1.c3376ep-19f,
     0x1.36ef9ep-62f, 0x1.8d7008p-74f, 0x1.2a7904p-113f, 0x1.4b373cp-61f, 0.0f,
     0x1.2d053ep-109f, 0x1.b82b6ap-82f, 0x1.4610aep-82f, 0.0f, 0x1.84af62p-7f, 0.0f,
     0.0f, 0x1.a6adccp-12f, 0x1.c4985ap-68f, 0x1.07d28ep-14f, 0.0f, 0x1.9f277p-99f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.be392cp-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2a94dcp-48f,
     0x1.01df3cp-70f, 0.0f, 0.0f, 0x1.e07932p-10f, 0x1.8d7172p-39f, 0x1.12027cp-46f,
     0.0f, 0.0f, 0.0f, 0x1.0a883ep-6f, 0.0f, 0x1.b2c24ep-117f, 0.0f, 0x1.4f4984p-41f,
     0x1.5049d6p-52f, 0.0f, 0x1.3eceb4p-124f, 0.0f, 0.0f, 0.0f, 0x1.2788dcp-4f,
     0x1.191006p-74f, 0x1.b0d708p-75f, 0x1.169c2cp-35f, 0.0f, 0.0f, 0x1.d00628p-99f,
     0.0f, 0.0f, 0.0f, 0x1.8fb84p-18f, 0.0f, 0x1.0cbfcp-31f, 0.0f, 0x1.629c9ap-29f,
     0x1.41c3c8p-49f, 0x1.4e9b9ap-12f, 0x1.9ec488p-53f, 0x1.3710bep-37f, 0.0f,
     0x1.bd8864p-15f, 0.0f, 0x1.997fp-89f, 0.0f, 0x1.08b512p-9f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e42adcp-60f, 0x1.14294cp-56f, 0x1.5500b6p-53f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.39a452p-126f, 0x1.ee304ap-119f, 0.0f, 0x1.360caep-121f, 0.0f, 0.0f,
     0x1.3e29e6p-93f, 0.0f, 0x1.3ae51ep-118f, 0x1.584e2p-48f, 0.0f, 0.0f, 0.0f,
     0x1.c1891ap-102f, 0.0f, 0x1.7f16b6p-118f, 0x1.0b3d6ep-92f, 0x1.98d7cep-38f,
     0x1.866fcp-46f, 0.0f, 0.0f, 0x1.6628d8p-53f, 0x1.1fbf96p-62f, 0x1.fe3ea6p-126f,
     0.0f, 0.0f, 0.0f, 0x1.62c7cep-4f, 0x1.806724p-114f, 0x1.c3c656p-93f,
     0x1.199c5ap-8f, 0.0f, 0x1.21caeep-47f, 0x1.c45bfep-100f, 0x1.bf97e4p-71f,
     0x1.e88de2p-61f, 0.0f, 0x1p0f, 0.0f, 0x1.5e2fb6p-114f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.adbff8p-2f, 0.0f, 0.0f, 0x1.95c92p-22f, 0.0f, 0x1.499fbcp-41f,
     0.0f, 0x1.e8b454p-94f, 0x1.6dd01ap-101f, 0x1.02ebf6p-17f, 0x1.c5b614p-81f, 0.0f,
     0.0f, 0x1.9c96bcp-84f, 0.0f, 0.0f, 0x1.0c9b7ap-43f, 0x1.d568ecp-51f,
     0x1.580cb8p-82f, 0x1.f8252ap-6f, 0.0f, 0x1.6a1042p-32f, 0x1.4f26fcp-61f, 0.0f,
     0.0f, 0x1.c561d6p-34f, 0x1.7a15cep-84f, 0x1.a5a64p-100f, 0.0f, 0.0f, 0.0f,
     0x1.e7be28p-75f, 0x1.8aeceep-93f, 0x1.70784cp-24f, 0.0f, 0x1.c16856p-49f,
     0x1.99e1a6p-58f, 0.0f, 0x1.08268ap-117f, 0x1.a80edap-106f, 0.0f, 0.0f,
     0x1.0e3b7cp-100f, 0.0f, 0x1.3a0feep-56f, 0x1.5c9bf6p-18f, 0x1.5ee51ap-91f, 0.0f,
     0.0f, 0.0f, 0x1.654612p-98f, 0x1.8a1dfp-28f, 0x1.133a04p-20f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c2d7f4p-115f, 0x1.d59588p-74f, 0.0f, 0x1.cd0d06p-48f,
     0x1.d23cd8p-105f, 0.0f, 0.0f, 0.0f, 0x1.296644p-96f, 0.0f, 0.0f, 0x1.25957p-116f,
     0.0f, 0x1.5cae48p-113f, 0x1.173c6ep-49f, 0x1.d3e3e6p-5f, 0x1.3c49c6p-49f,
     0x1.7d2a68p-88f, 0.0f, 0.0f, 0.0f, 0x1.de07e4p-57f, 0x1.06bc18p-24f, 0.0f, 0.0f,
     0.0f, 0x1.8e3a84p-41f, 0x1.d80c9cp-15f, 0.0f, 0x1.dcbacp-106f, 0.0f, 0.0f, 0.0f,
     0x1.c8007p-32f, 0x1.e8e2c2p-102f, 0.0f, 0.0f, 0.0f, 0x1.ba3bb4p-17f,
     0x1.b7f2c6p-68f, 0.0f, 0.0f, 0x1.d83d52p-13f, 0x1.1df852p-16f, 0x1.71debp-30f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.95556cp-3f, 0x1.c226bep-14f, 0.0f, 0.0f,
     0x1.c41222p-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6e1f34p-82f, 0.0f, 0.0f,
     0x1.7b6f7cp-121f, 0x1.fe87cp-10f, 0.0f, 0.0f, 0x1.575ef6p-19f, 0.0f,
     0x1.ec313cp-16f, 0.0f, 0x1.ea305p-87f, 0.0f, 0x1.d1d45ap-6f, 0x1.03676ep-32f,
     0x1.05b4c8p-118f, 0x1.97a43ep-17f, 0.0f, 0x1.bf9e28p-88f, 0x1.183c7ap-29f, 0.0f,
     0x1.0bbeeep-65f, 0x1.0aee98p-115f, 0.0f, 0.0f, 0x1.eca8b2p-97f, 0x1.85997ep-10f,
     0.0f, 0x1.b2b066p-110f, 0.0f, 0.0f, 0x1.ee26b6p-109f, 0x1.53b6e6p-108f,
     0x1.456e52p-6f, 0x1.23a984p-20f, 0.0f, 0.0f, 0.0f, 0x1.2d4e16p-33f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e11d7ap-20f, 0x1.ab5562p-100f, 0.0f, 0.0f, 0x1.40471p-26f, 0.0f,
     0.0f, 0x1.5d982ep-8f, 0.0f, 0x1.5b1272p-81f, 0x1.ac869cp-48f, 0.0f, 0.0f,
     0x1.766e0ep-80f, 0.0f, 0.0f, 0.0f, 0x1.899b8p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3b2012p-102f, 0x1.2dafe6p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.72f3c4p-121f,
     0.0f, 0x1.ab0912p-16f, 0.0f, 0x1.f961cep-80f, 0x1.30f21ap-113f, 0x1.b2c5bcp-97f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.71f01p-86f, 0.0f, 0.0f, 0x1.7f6016p-65f,
     0x1.d1bdeep-78f, 0.0f, 0.0f, 0x1.f072a6p-5f, 0.0f, 0x1.ada26ap-77f, 0.0f,
     0x1.b71c0ap-48f, 0.0f, 0x1.3a275cp-84f, 0x1.d801a6p-122f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.0eb214p-70f, 0x1.f1d0a8p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a00a1ep-29f, 0.0f, 0x1.d51b54p-73f, 0.0f, 0x1.2349e8p-71f,
     0x1.ca2c72p-64f, 0x1.891cf2p-116f, 0.0f, 0x1.8fda82p-55f, 0x1.0ca0a2p-89f, 0.0f,
     0x1.56ba06p-63f, 0x1.d342bap-125f, 0.0f, 0x1.2a6e1p-108f, 0x1.17352ep-55f,
     0x1.c5b95ep-107f, 0.0f, 0.0f, 0.0f, 0x1.7722ccp-113f, 0x1.f3b18p-31f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.228982p-85f, 0x1.3fa608p-112f, 0.0f,
     0x1.6b879p-93f, 0x1.5fa80ep-95f, 0x1.eff8ap-106f, 0x1.42a9dap-37f,
     0x1.af092ep-19f, 0x1.92cc0cp-121f, 0x1.0937cap-114f, 0x1.1fd9c6p-7f, 0.0f, 0.0f,
     0.0f, 0x1.1e2d04p-95f, 0.0f, 0x1.82f32cp-46f, 0x1.688c4cp-25f, 0x1.ae8878p-99f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.84c8dcp-85f, 0x1.1a604cp-56f, 0.0f, 0x1.e398aap-68f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.055ff2p-89f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4b2378p-108f, 0x1.00fdfep-77f, 0.0f, 0.0f,
     0.0f, 0x1.06121ap-67f, 0.0f, 0x1.f64c54p-126f, 0x1.dc7e76p-22f, 0x1.7cf19p-95f,
     0.0f, 0x1.a31536p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.e5c5e2p-53f,
     0x1.61c64cp-46f, 0x1.c8fe92p-104f, 0.0f, 0x1.9c3ba4p-37f, 0.0f, 0.0f,
     0x1.dcfcdap-106f, 0x1.408158p-39f, 0x1.ca6222p-126f, 0.0f, 0.0f, 0x1.170202p-93f,
     0x1.424c68p-13f, 0x1.b49704p-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.69ffd4p-81f, 0x1.fc7d8ep-59f, 0x1.9a7eb4p-84f, 0.0f, 0x1.970ebep-65f, 0.0f,
     0x1.d6f92ap-89f, 0.0f, 0x1.354aacp-105f, 0x1.6cf766p-103f, 0x1.2880aap-90f,
     0x1.15bap-121f, 0x1.f2d406p-122f, 0x1.a64852p-64f, 0.0f, 0x1.349ebep-27f,
     0x1.4b1a7ap-115f, 0x1.e33bdep-89f, 0.0f, 0.0f, 0x1.6ba8ap-63f, 0.0f,
     0x1.7b7b64p-119f, 0.0f, 0.0f, 0.0f, 0x1.5b036ap-112f, 0x1.c56844p-47f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9e3c48p-86f, 0.0f, 0.0f, 0.0f, 0x1.df4b18p-11f, 0.0f,
     0x1.3ecd34p-79f, 0.0f, 0x1.67e242p-46f, 0.0f, 0x1.fec59ap-126f, 0x1.b570a6p-116f,
     0x1.cf14acp-118f, 0x1.731cbp-53f, 0x1.c10bfap-37f, 0.0f, 0x1.c0a526p-14f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.60b2bep-58f, 0.0f, 0.0f, 0x1.5e9ad2p-71f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.75c666p-92f, 0x1.7eccb2p-9f, 0x1.6c9c2ep-1f, 0x1.e62218p-27f,
     0x1.30da32p-92f, 0x1.47460ap-91f, 0x1.5c696ap-31f, 0x1.f129eep-59f, 0.0f, 0.0f,
     0.0f, 0x1.8de084p-20f, 0x1.95c476p-103f, 0.0f, 0x1.99df8ep-50f, 0x1.f091d6p-101f,
     0.0f, 0.0f, 0.0f, 0x1.9ddb8cp-53f, 0x1.301a16p-42f, 0.0f, 0.0f, 0x1.c56316p-30f,
     0.0f, 0x1.3c8b78p-14f, 0x1.592f18p-78f, 0x1.ab807ep-50f, 0x1p0f, 0x1.f3b8ccp-17f,
     0.0f, 0.0f, 0x1.8d72dap-40f, 0x1.b7eb3p-48f, 0.0f, 0x1.bd15fcp-65f,
     0x1.15f62p-11f, 0.0f, 0x1.d86eb8p-12f, 0.0f, 0x1.009ab8p-72f, 0.0f,
     0x1.e81dc4p-14f, 0x1.da68ecp-29f, 0x1.b45426p-102f, 0.0f, 0x1.265b1cp-75f,
     0x1.eb5a2ep-68f, 0.0f, 0x1.5dcd76p-33f, 0x1.c86bfep-35f, 0.0f, 0x1p0f,
     0x1.e27224p-34f, 0.0f, 0.0f, 0x1.4baabp-31f, 0x1.05e8d2p-2f, 0.0f,
     0x1.86455ap-21f, 0x1.cd07cep-59f, 0.0f, 0x1.c06bfap-38f, 0x1.1f225p-31f,
     0x1.c27e08p-79f, 0.0f, 0.0f, 0.0f, 0x1.1f4caap-56f, 0.0f, 0x1.058994p-7f, 0.0f,
     0.0f, 0.0f, 0x1.65bae4p-22f, 0x1.b9502cp-60f, 0x1.f1bb94p-32f, 0x1.a0e0b4p-103f,
     0x1.2234c2p-97f, 0x1.67b2fcp-33f, 0x1.3c808p-118f, 0.0f, 0x1.355e9p-2f,
     0x1.446996p-122f, 0x1p0f, 0.0f, 0x1.f97472p-7f, 0x1.8a069ep-24f, 0.0f,
     0x1.b0277ep-122f, 0x1.77238cp-100f, 0.0f, 0x1.8dcc64p-90f, 0.0f, 0x1.e5d5c6p-61f,
     0.0f, 0.0f, 0.0f, 0x1.67330cp-51f, 0x1.3ec5a8p-81f, 0.0f, 0x1.36de6cp-69f,
     0x1.a38c24p-109f, 0x1.6fcdep-2f, 0x1.cee09ap-50f, 0x1.b1854p-7f, 0x1.c2cef6p-37f,
     0x1.b602bp-114f, 0.0f, 0x1p0f, 0x1.440382p-27f, 0x1.27fe2ep-120f, 0x1.065f94p-1f,
     0.0f, 0x1.eb5f96p-87f, 0x1.7e9af8p-94f, 0x1.8c3cacp-121f, 0.0f, 0.0f,
     0x1.e1e8e4p-53f, 0x1.e59fc2p-116f, 0.0f, 0x1.377d0ep-64f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ab1276p-5f, 0.0f, 0x1.34062ep-75f, 0.0f, 0.0f, 0.0f, 0x1.267946p-36f, 0.0f,
     0x1.03a654p-56f, 0.0f, 0x1.b67b4ep-126f, 0x1.cbd34ap-65f, 0.0f, 0x1.a72156p-86f,
     0.0f, 0x1.d17368p-121f, 0.0f, 0x1.d92168p-71f, 0.0f, 0x1.856a44p-30f, 0.0f, 0.0f,
     0x1.0d2f9ap-62f, 0.0f, 0x1.f275aap-58f, 0.0f, 0.0f, 0.0f, 0x1.93a796p-42f,
     0x1.04a568p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1d2c06p-24f, 0x1.e5f708p-125f,
     0.0f, 0.0f, 0.0f, 0x1.33588cp-35f, 0x1.9453c4p-81f, 0x1.6dd7c4p-76f,
     0x1.a9cd12p-124f, 0.0f, 0.0f, 0x1.59b588p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e8cc78p-89f, 0x1.e881fcp-15f, 0.0f, 0x1.2204a6p-5f,
     0x1.b3ab6ep-99f, 0.0f, 0x1.0958p-26f, 0x1.480fb4p-4f, 0x1.f0bedcp-79f,
     0x1.68ef68p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.987e3p-111f, 0x1.b4d754p-19f, 0.0f,
     0.0f, 0x1.99cb48p-80f, 0x1.86c9a8p-117f, 0x1.ed087ep-106f, 0.0f, 0.0f,
     0x1.1efb2cp-45f, 0.0f, 0.0f, 0x1.b09a7cp-103f, 0.0f, 0.0f, 0x1.286cc8p-31f,
     0x1.8ea394p-23f, 0.0f, 0x1.11c35ep-120f, 0x1.c07f08p-82f, 0x1.f2d7a4p-118f, 0.0f,
     0.0f, 0x1.b9a62p-109f, 0x1.175d7p-124f, 0.0f, 0x1.d53f2ap-73f, 0x1.0c4108p-59f,
     0x1.d164e8p-39f, 0.0f, 0.0f, 0x1.5b7226p-37f, 0.0f, 0x1.89e84p-91f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.6bf878p-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.27225cp-111f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e64e9p-116f, 0x1.00742cp-27f, 0x1.08a25cp-98f, 0.0f, 0.0f,
     0x1.4731e6p-9f, 0.0f, 0.0f, 0x1.6e5896p-49f, 0.0f, 0.0f, 0x1.a9bcd2p-7f, 0.0f,
     0.0f, 0x1.42f7e4p-123f, 0x1.4eb1d4p-37f, 0x1.b3650ep-36f, 0.0f, 0x1.58ad42p-85f,
     0.0f, 0.0f, 0.0f, 0x1.ac94f2p-107f, 0.0f, 0.0f, 0x1.0d7b42p-78f, 0x1.2964ap-92f,
     0x1.366246p-38f, 0.0f, 0x1.852a78p-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d0f012p-38f, 0x1.d277c2p-52f, 0x1.efa0f6p-12f, 0.0f, 0.0f, 0x1.452352p-38f,
     0x1.559b5p-47f, 0x1.e26ep-19f, 0x1.e4ca08p-118f, 0x1.b82c6ap-68f,
     0x1.c1e4d8p-44f, 0.0f, 0x1.a06b3ep-45f, 0.0f, 0x1.94e052p-119f, 0x1.38d126p-126f,
     0x1.3a692cp-121f, 0.0f, 0x1.141b1ap-70f, 0.0f, 0.0f, 0x1.6488b8p-64f, 0.0f, 0.0f,
     0.0f, 0x1.b01c94p-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a5f902p-43f, 0.0f,
     0x1.9408a2p-46f, 0x1.6d8e72p-107f, 0.0f, 0.0f, 0x1.86a56ap-66f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.255e2cp-97f, 0x1.e35126p-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c5bc38p-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5aabc2p-76f,
     0x1.555faap-19f, 0.0f, 0.0f, 0.0f, 0x1.9c30d4p-106f, 0x1.f170fcp-72f, 0.0f, 0.0f,
     0x1.ab3778p-39f, 0x1.685686p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.524d62p-14f, 0.0f,
     0x1.8563cap-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.13585p-9f, 0x1.9add58p-93f,
     0.0f, 0x1.b9ace2p-101f, 0.0f, 0.0f, 0x1.e735d2p-33f, 0.0f, 0x1.670cc8p-19f, 0.0f,
     0.0f, 0.0f, 0x1.e72a4cp-97f, 0x1.2fd116p-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.4bf7ep-109f, 0.0f, 0.0f, 0x1.0e5d3ep-37f, 0.0f, 0.0f, 0x1.a94f6p-117f,
     0x1.1863aep-2f, 0.0f, 0x1.a2824ep-113f, 0x1.52c726p-42f, 0.0f, 0x1.61d898p-17f,
     0.0f, 0x1.121738p-50f, 0.0f, 0.0f, 0x1.8f9bdp-120f, 0x1.28374cp-99f,
     0x1.992092p-90f, 0x1.18b51ep-60f, 0.0f, 0.0f, 0x1.0d76fap-62f, 0x1.badf6ap-36f,
     0.0f, 0.0f, 0x1.8b03a2p-40f, 0.0f, 0x1.b325a4p-39f, 0.0f, 0x1.24877ap-100f, 0.0f,
     0x1.d259fep-85f, 0x1.f353c2p-85f, 0x1.afb762p-56f, 0.0f, 0.0f, 0x1.1e7f16p-125f,
     0x1.8dced2p-75f, 0.0f, 0.0f, 0x1.4434dep-28f, 0.0f, 0x1.55f208p-120f, 0.0f,
     0x1.463286p-21f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef_float32x4_t_2 global_bench_acc;
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
        Sleef_float32x4_t_2 local_acc;
        int32_t i;
        ml_float4_t tmp0;
        ml_float4_t tmp1;
        ml_float4_t tmp2;
        ml_float4_t tmp3;
        ml_float4_t tmp4;
        ml_float4_t tmp5;
        Sleef_float32x4_t_2 tmp6;
        int32_t tmp7;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1004));){
            ml_float4_t tmp0;
            Sleef_float32x4_t_2 tmp1;
            ml_float4_t tmp2;
            ml_float4_t tmp3;
            ml_float4_t tmp4;
            ml_float4_t tmp5;
            ml_float4_t tmp6;
            ml_float4_t tmp7;
            Sleef_float32x4_t_2 tmp8;
            int32_t tmp9;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_sincosf4_u10kvx(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = local_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = local_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef_float32x4_t_2) {.x=tmp4, .y=tmp7});
            local_acc = tmp8;
            tmp9 = i + INT32_C(4);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = local_acc.x;
        tmp2 = tmp0 + tmp1;
        tmp3 = global_bench_acc.y;
        tmp4 = local_acc.y;
        tmp5 = tmp3 + tmp4;
        tmp6 = ((Sleef_float32x4_t_2) {.x=tmp2, .y=tmp5});
        global_bench_acc = tmp6;
        tmp7 = j + INT32_C(1);
        j = tmp7;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_sincosf4_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_sincosf4_u10kvx bench acc {.x=[%a, %a, %a, %a], .y=[%a, %a, %a, %a]}\n", global_bench_acc.x[0], global_bench_acc.x[1], global_bench_acc.x[2], global_bench_acc.x[3], global_bench_acc.y[0], global_bench_acc.y[1], global_bench_acc.y[2], global_bench_acc.y[3]);
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
