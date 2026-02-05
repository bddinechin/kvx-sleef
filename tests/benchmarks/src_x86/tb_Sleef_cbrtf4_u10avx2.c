/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_cbrtf4_u10avx2128.c --function Sleef_cbrtf4_u10avx2128 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 4 --function-input-vector-size 4 --bench \
 *     --no-embedded-bin --target x86_avx2128
 * 
**/
#include <stdint.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float4_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float4_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0.0f, 0x1.09b492p-102f, 0.0f, 0.0f, 0x1.1dd352p-78f, 0.0f, 0x1.b6bf7p-112f,
     0x1.66e65ap-55f, 0x1.5085dap-94f, 0.0f, 0.0f, 0x1.c9f73ep-103f, 0.0f, 0.0f,
     0x1.c68502p-17f, 0.0f, 0.0f, 0.0f, 0x1.826774p-27f, 0x1.360492p-117f, 0.0f, 0.0f,
     0x1.050d58p-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3688f6p-78f,
     0x1.18072p-76f, 0.0f, 0.0f, 0x1.068246p-58f, 0x1.d5d194p-20f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e29caep-99f, 0.0f, 0x1.3a2462p-84f, 0x1.758d8cp-106f,
     0x1.0061b2p-56f, 0x1.5bcfe2p-82f, 0x1.1cd282p-108f, 0.0f, 0.0f, 0x1.a30206p-59f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.597a0cp-125f, 0.0f, 0x1.f01ecp-62f, 0x1.c188dap-88f,
     0x1.889d0cp-60f, 0.0f, 0x1.bcc3a6p-17f, 0x1.db175ap-26f, 0x1.b11a1cp-23f,
     0x1.e653d6p-75f, 0.0f, 0x1.c42e3p-75f, 0x1.5c26e8p-44f, 0x1.22819ap-79f, 0.0f,
     0x1.aa05fcp-76f, 0.0f, 0.0f, 0x1.fdc95ap-49f, 0x1.8014cap-82f, 0x1.9682c2p-112f,
     0x1.469cb4p-66f, 0x1.cb0cdep-104f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.01112ap-29f, 0.0f, 0.0f, 0x1.a73ed6p-18f, 0.0f, 0x1.d17ac8p-95f,
     0x1.2563ap-121f, 0.0f, 0x1.1e62c2p-5f, 0.0f, 0x1.373c82p-101f, 0.0f,
     0x1.025512p-31f, 0x1.a4be5ap-21f, 0x1.a45298p-91f, 0x1.597d1ep-4f, 0.0f, 0.0f,
     0x1.333a06p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9ebcdep-77f, 0.0f,
     0x1.7641bp-60f, 0x1.2335a6p-2f, 0x1.4b1392p-65f, 0.0f, 0x1.77492ap-6f, 0.0f,
     0.0f, 0x1.607464p-90f, 0x1.baafeap-41f, 0x1.77227p-33f, 0.0f, 0.0f,
     0x1.60565ep-118f, 0.0f, 0x1.9796bep-1f, 0.0f, 0x1.5b368ap-34f, 0.0f, 0.0f, 0.0f,
     0x1.60ec04p-48f, 0.0f, 0x1.30a4c4p-116f, 0x1.63bd4p-81f, 0x1.dee1a6p-122f, 0.0f,
     0x1.85de5ap-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4fa888p-95f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c81e8p-70f, 0x1.597cfcp-74f, 0.0f, 0.0f,
     0x1.e17968p-30f, 0.0f, 0x1.e5fd72p-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.50b5bp-81f,
     0.0f, 0x1.12db6cp-105f, 0.0f, 0x1.812f86p-45f, 0x1.a5971cp-15f, 0x1.50b9acp-88f,
     0.0f, 0.0f, 0x1.55dbd6p-17f, 0.0f, 0x1p0f, 0x1.dcc41ap-81f, 0.0f, 0x1.dac4p-118f,
     0.0f, 0.0f, 0.0f, 0x1.b00966p-70f, 0x1.67443ap-35f, 0x1.ec9d86p-68f, 0.0f, 0.0f,
     0.0f, 0x1.47726ap-112f, 0x1.a18af4p-55f, 0.0f, 0.0f, 0.0f, 0x1.6bc67cp-69f,
     0x1.558abep-118f, 0x1.7b1756p-37f, 0x1.db91a4p-49f, 0x1.fb6858p-2f, 0.0f,
     0x1.d92df8p-4f, 0x1.d814d8p-63f, 0.0f, 0.0f, 0x1.e00358p-81f, 0.0f,
     0x1.d390aep-38f, 0x1.09fcep-100f, 0.0f, 0.0f, 0x1.a800dp-40f, 0.0f, 0.0f,
     0x1.39443cp-62f, 0x1.381f52p-123f, 0.0f, 0x1.c1ce0ep-93f, 0x1.8def3ap-64f,
     0x1.8ed358p-24f, 0x1.0704f8p-43f, 0.0f, 0x1.a01cbap-11f, 0x1.4bcbp-117f,
     0x1.d8d8dep-7f, 0.0f, 0x1.280056p-123f, 0x1.f08adcp-35f, 0x1.13d31ap-59f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7c954ap-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6a2762p-58f,
     0x1.9d497ep-15f, 0.0f, 0x1.5d5328p-16f, 0x1.2289ccp-47f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.d22836p-52f, 0.0f, 0.0f, 0.0f, 0x1.ea3c9p-73f, 0x1.144e4ap-16f,
     0x1.3776dep-56f, 0x1.3124c4p-84f, 0x1.69a3bcp-84f, 0x1.cc14cp-52f, 0.0f,
     0x1.6944aep-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1a18c6p-28f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.d0bd0cp-99f, 0x1.ab9624p-50f, 0.0f, 0.0f, 0x1.6bed3ap-114f, 0.0f, 0.0f,
     0x1.6d656p-92f, 0.0f, 0.0f, 0x1.4dbfc6p-46f, 0x1.ec4814p-114f, 0x1.8dfcecp-6f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6434c2p-20f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.d7e59p-86f, 0x1.3e7dbap-20f, 0x1.c48e3ep-75f, 0.0f, 0x1.8fd5b2p-45f,
     0.0f, 0.0f, 0.0f, 0x1.92d1c4p-115f, 0x1.3ce80ap-73f, 0x1.3d660cp-54f, 0.0f, 0.0f,
     0x1.c980d8p-98f, 0.0f, 0x1.546954p-12f, 0.0f, 0x1.2aaedep-79f, 0.0f,
     0x1.151488p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d7929cp-122f, 0.0f, 0.0f, 0.0f,
     0x1.395988p-60f, 0x1.df1a28p-66f, 0x1.30868ep-82f, 0x1.a5dfecp-76f, 0.0f,
     0x1.2ab0a4p-46f, 0.0f, 0.0f, 0x1.e6b7ap-70f, 0.0f, 0x1.d39e08p-65f, 0.0f,
     0x1.d6ccacp-22f, 0.0f, 0x1.4c6c8p-13f, 0x1.05219ap-37f, 0x1.00e9d2p-14f, 0.0f,
     0x1.367118p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7a205p-30f, 0.0f, 0.0f,
     0x1.95a242p-106f, 0x1.0826cep-26f, 0.0f, 0.0f, 0.0f, 0x1.03b968p-93f,
     0x1.1e0002p-108f, 0.0f, 0.0f, 0.0f, 0x1.68263ep-56f, 0x1.6f1c8ap-37f, 0.0f,
     0x1.bd9f2p-77f, 0.0f, 0x1.fa9258p-100f, 0x1.6e48dep-18f, 0.0f, 0.0f,
     0x1.c5993ep-110f, 0.0f, 0x1.19780ap-121f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9d127cp-107f, 0x1.6001f4p-50f, 0.0f, 0.0f, 0.0f, 0x1.5beedep-51f,
     0x1.f346aap-11f, 0x1.52ce08p-81f, 0x1.69d2p-33f, 0x1.7d8f0cp-2f, 0.0f,
     0x1.9af49ep-47f, 0x1.50f7bcp-125f, 0.0f, 0x1.e76028p-55f, 0x1.384cc8p-6f, 0.0f,
     0x1.c6521ep-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f15048p-77f,
     0x1.d604c6p-115f, 0x1.cd0b04p-49f, 0x1.af593p-120f, 0.0f, 0x1.42b16cp-71f, 0.0f,
     0x1.1f63f2p-46f, 0.0f, 0x1.42c45ep-50f, 0x1.8f5dfap-86f, 0x1.81d956p-108f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.476a56p-79f, 0x1.c42a6ep-69f, 0x1.ed64b2p-36f,
     0.0f, 0.0f, 0x1.7d0186p-10f, 0x1.853dc6p-11f, 0.0f, 0.0f, 0x1.5bb392p-92f,
     0x1.e59e1p-41f, 0x1.4fa6f2p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f1b8dcp-120f, 0.0f, 0x1.49c3bp-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.21c9aap-87f, 0x1.f518c6p-27f, 0x1.e09922p-90f, 0x1.7435d8p-10f,
     0x1.d34c1p-96f, 0.0f, 0x1.086b7ap-92f, 0x1.a8fc36p-39f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.6b478p-13f, 0x1.0278c4p-30f, 0x1.a779c6p-121f, 0.0f, 0.0f,
     0x1.a59482p-101f, 0.0f, 0.0f, 0x1.8b9a28p-46f, 0x1.80fc98p-43f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.79f3bep-18f, 0.0f, 0.0f, 0x1.f0a202p-85f, 0x1.a8b41p-79f, 0.0f,
     0x1.6bd252p-98f, 0x1.331966p-32f, 0x1.ee4594p-83f, 0.0f, 0.0f, 0.0f,
     0x1.e74296p-23f, 0x1.7eb3ap-64f, 0x1.3ab48ep-81f, 0.0f, 0.0f, 0x1.83f9e4p-94f,
     0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.051a5ep-44f, 0.0f, 0.0f, 0x1.00d786p-65f,
     0x1.15311cp-13f, 0x1.b4c4a4p-118f, 0.0f, 0x1.3e977p-34f, 0.0f, 0.0f,
     0x1.e1718ap-119f, 0x1.e17fdcp-37f, 0.0f, 0.0f, 0x1.4a644ap-15f, 0.0f,
     0x1.58a15cp-98f, 0.0f, 0.0f, 0.0f, 0x1.1a16a8p-55f, 0.0f, 0.0f, 0x1.46d58ap-84f,
     0x1.1341f4p-8f, 0.0f, 0.0f, 0.0f, 0x1.be7d16p-100f, 0.0f, 0.0f, 0x1.d31b18p-27f,
     0.0f, 0.0f, 0.0f, 0x1.ef737ap-52f, 0x1.f6ff56p-67f, 0.0f, 0x1.ad0882p-90f,
     0x1.8e72f6p-75f, 0x1.5f2ad2p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.089624p-50f,
     0x1.560f76p-46f, 0x1.b84548p-86f, 0x1.083596p-108f, 0.0f, 0.0f, 0x1.738bc6p-65f,
     0x1.b2b8bp-37f, 0x1.921e2p-107f, 0.0f, 0.0f, 0.0f, 0x1.c99cfp-77f, 0.0f,
     0x1.0c24b8p-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b9e4b6p-42f, 0.0f, 0.0f, 0.0f,
     0x1.c6d6b2p-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9acdp-18f, 0.0f,
     0.0f, 0x1.4c16b2p-78f, 0x1.a58adp-85f, 0.0f, 0.0f, 0x1.ffadep-90f,
     0x1.5316cep-125f, 0x1.62e02p-61f, 0x1.f697a6p-116f, 0x1.19e16p-89f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c70828p-16f, 0x1.09b152p-19f, 0.0f, 0.0f,
     0x1.1905cap-97f, 0x1.df12dp-34f, 0x1.e1811cp-86f, 0.0f, 0.0f, 0.0f,
     0x1.7f82d2p-39f, 0.0f, 0.0f, 0x1.c86c28p-52f, 0.0f, 0.0f, 0.0f, 0x1.1a68e6p-69f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e7f94ep-95f, 0.0f, 0.0f,
     0.0f, 0x1.b7efdap-103f, 0.0f, 0x1.7a852p-8f, 0.0f, 0x1.5fd00cp-48f, 0.0f,
     0x1.64a5a2p-81f, 0.0f, 0x1.15b92cp-35f, 0x1.ae0502p-56f, 0.0f, 0x1.f73092p-90f,
     0x1.8b12acp-34f, 0.0f, 0.0f, 0x1.5adc0ep-39f, 0.0f, 0x1.db0c5p-30f, 0.0f, 0.0f,
     0x1.a9cd2p-124f, 0.0f, 0.0f, 0x1.c1365ap-9f, 0x1.7ddf04p-66f, 0x1.98a156p-34f,
     0x1.5d8b72p-37f, 0.0f, 0x1.72ecfap-91f, 0.0f, 0x1.6782ep-11f, 0.0f,
     0x1.543d7cp-39f, 0x1.21d466p-79f, 0x1.6a5e66p-74f, 0x1.0786d8p-111f, 0.0f, 0.0f,
     0.0f, 0x1.e46c36p-65f, 0x1.6990b8p-18f, 0.0f, 0x1.c6cf7ep-85f, 0.0f,
     0x1.cd77d6p-63f, 0x1.0d057ap-123f, 0x1.d8904p-12f, 0x1.ac92d8p-4f, 0x1p0f, 0.0f,
     0.0f, 0x1.ee48c4p-71f, 0x1.952514p-95f, 0.0f, 0x1.fcc078p-115f, 0x1.922916p-70f,
     0x1.50504cp-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.996eacp-31f,
     0x1.11cff8p-40f, 0x1.96f742p-1f, 0x1.37cf86p-58f, 0.0f, 0x1.f05572p-6f, 0.0f,
     0.0f, 0x1.6d712cp-120f, 0x1.913214p-53f, 0x1.7a36dap-11f, 0.0f, 0.0f,
     0x1.1d7ep-15f, 0.0f, 0x1.c0829ep-24f, 0x1.e2226p-120f, 0.0f, 0.0f,
     0x1.869a24p-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3e9d3p-48f,
     0x1.6fe17ap-115f, 0x1.11fe4ap-6f, 0x1.443526p-19f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2ed558p-62f, 0.0f, 0x1.85268ap-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.210382p-112f, 0.0f, 0.0f, 0.0f, 0x1.2033bap-77f, 0x1.2a7e32p-124f, 0.0f,
     0x1.9767d2p-51f, 0x1.450b16p-71f, 0x1.70624cp-108f, 0.0f, 0.0f, 0x1.9c597p-74f,
     0x1.0b800cp-90f, 0x1.5c5484p-90f, 0.0f, 0x1.753dbp-22f, 0.0f, 0.0f, 0.0f,
     0x1.66aafp-59f, 0.0f, 0x1.eec592p-52f, 0x1.7346aap-4f, 0x1.4301aap-19f, 0.0f,
     0.0f, 0.0f, 0x1.5bcf6ap-93f, 0x1.844938p-75f, 0x1.5a2a46p-112f, 0x1.8da7f8p-18f,
     0x1.9e9e34p-65f, 0x1.91a1fp-7f, 0x1.4af31p-88f, 0.0f, 0x1.61529p-61f, 0.0f,
     0x1.a4d3cap-33f, 0.0f, 0.0f, 0x1.af0dd6p-101f, 0.0f, 0x1.a6264ap-66f, 0.0f,
     0x1.de9748p-119f, 0.0f, 0.0f, 0.0f, 0x1.b17ce2p-93f, 0x1.08f50ap-111f, 0.0f,
     0.0f, 0.0f, 0x1.590268p-69f, 0.0f, 0x1.56f3dap-57f, 0x1.063388p-9f,
     0x1.9bf92cp-56f, 0x1.9eb4eap-57f, 0x1.46ab66p-62f, 0x1.109fc2p-27f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a817cp-102f, 0x1.32039ep-120f, 0x1.1193dp-19f, 0.0f,
     0.0f, 0x1.cd0cbp-61f, 0.0f, 0.0f, 0x1.0ac7dcp-73f, 0.0f, 0.0f, 0.0f,
     0x1.45eb5cp-2f, 0.0f, 0x1.e6856ep-15f, 0x1.260cc2p-66f, 0x1.70c5dep-101f, 0.0f,
     0x1.91035p-110f, 0x1.a3e55ap-55f, 0.0f, 0.0f, 0x1.ff631p-99f, 0x1.d63822p-20f,
     0.0f, 0x1.a0d6e4p-73f, 0x1.2cb5dap-117f, 0.0f, 0x1.980e2cp-119f, 0.0f, 0.0f,
     0x1.a7f042p-115f, 0x1.4e83d2p-47f, 0x1.4eaf6ep-11f, 0x1.2bd4bap-72f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.cbc83p-16f, 0.0f, 0.0f, 0x1.23f946p-64f, 0x1.6c19b2p-52f,
     0x1.24fa5ep-62f, 0.0f, 0x1.e4a99p-11f, 0x1.0a37d8p-114f, 0.0f, 0x1.edafaep-53f,
     0x1.061e9p-126f, 0.0f, 0.0f, 0.0f, 0x1.4e89fcp-4f, 0x1.72a65cp-44f, 0.0f,
     0x1.57081cp-45f, 0.0f, 0x1.5347fcp-20f, 0.0f, 0x1.9f99fcp-67f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.aecd7ep-93f, 0.0f, 0x1.9b96dcp-59f,
     0x1.0208bp-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c40424p-97f, 0.0f, 0.0f,
     0.0f, 0x1.6591fcp-120f, 0.0f, 0x1.cd5608p-61f, 0x1.d0905cp-91f, 0x1.c933acp-16f,
     0.0f, 0x1.57247p-67f, 0.0f, 0x1.7998b2p-71f, 0.0f, 0x1.5924f4p-87f,
     0x1.8901d6p-126f, 0.0f, 0x1.02580cp-32f, 0x1.10b54p-43f, 0x1p0f, 0.0f, 0.0f,
     0.0f, 0x1.b596ecp-73f, 0.0f, 0x1.57f03cp-29f, 0x1.9ee7b6p-22f, 0x1.5c5bc2p-68f,
     0x1.a91038p-78f, 0.0f, 0.0f, 0x1.dc874ep-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6956a8p-39f, 0x1.7283f4p-4f, 0.0f, 0x1.fcfc18p-8f, 0.0f, 0.0f, 0.0f,
     0x1.ccbde4p-56f, 0x1.616d96p-39f, 0x1.9afb56p-76f, 0x1.aea99cp-42f, 0.0f,
     0x1.b05112p-67f, 0.0f, 0x1.c3844ap-104f, 0.0f, 0x1.aadadap-62f, 0.0f,
     0x1.3fb67ap-48f, 0x1.9dc99ap-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2fa23cp-80f, 0x1.cee1d2p-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.71fd3cp-96f,
     0x1.f1691ap-30f, 0.0f, 0x1.8700eap-69f, 0x1.89cccp-125f, 0x1.c03d58p-42f,
     0x1.3a461ap-95f, 0.0f, 0x1.f0585ap-50f, 0x1.e33c1cp-44f, 0x1.a88b68p-119f,
     0x1.458ca8p-97f, 0.0f, 0.0f, 0x1.910edcp-84f, 0x1.3b0384p-71f, 0x1.845cf6p-15f,
     0.0f, 0x1.6b2cacp-23f, 0.0f, 0.0f, 0x1.274256p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.86f27ep-61f, 0.0f, 0x1.a26836p-59f, 0.0f, 0x1.29e02cp-111f, 0.0f,
     0.0f, 0.0f, 0x1.d88d08p-37f, 0x1.c8fd46p-25f, 0x1.5535b2p-59f, 0x1.af64e4p-20f,
     0x1.ce0eacp-72f, 0x1.43ebp-15f, 0.0f, 0x1.eb0032p-81f, 0x1.e22312p-58f,
     0x1.5ef2aap-54f, 0x1.f9b62ep-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b06bd8p-97f, 0.0f,
     0.0f
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
    
    global_bench_acc = external_bench_wrapper_cst;
    {
        uint32_t cycles_hi = 0, cycles_lo = 0;
        asm volatile (
            "cpuid\n\t"
            "rdtsc\n\t"
            "mov %%edx, %0\n\t"
            "mov %%eax, %1\n\t"
            : "=r" (cycles_hi), "=r" (cycles_lo)
            :: "%rax", "%rbx", "%rcx", "%rdx");
        tmp = ((uint64_t) cycles_hi << 32) | cycles_lo;
    };
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
            int32_t tmp3;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_cbrtf4_u10avx2128(tmp0);
            memcpy(((ml_float4_t*)(external_bench_wrapper_output_table+ i)), &(tmp1), 16);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(4);
            i = tmp3;
        }
        tmp0 = global_bench_acc + local_acc;
        global_bench_acc = tmp0;
        tmp1 = j + INT32_C(1);
        j = tmp1;
    }
    {
        uint32_t cycles_hi = 0, cycles_lo = 0;
        asm volatile (
            "cpuid\n\t"
            "rdtsc\n\t"
            "mov %%edx, %0\n\t"
            "mov %%eax, %1\n\t"
            : "=r" (cycles_hi), "=r" (cycles_lo)
            :: "%rax", "%rbx", "%rcx", "%rdx");
        tmp1 = ((uint64_t) cycles_hi << 32) | cycles_lo;
    };
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_cbrtf4_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_cbrtf4_u10avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
