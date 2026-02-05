/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_modff1_purecfma.c --function Sleef_modff1_purecfma \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --precision sleef_sf2 --bench --no-embedded-bin --target x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <xmmintrin.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef_float_2 external_bench_wrapper_cst = {.x = 0.0f, .y = 0.0f};
static const Sleef_float_2 external_bench_wrapper_cst1 = {.x = 0.0f, .y = 0.0f};
volatile Sleef_float_2 external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0.0f, 0x1.4fe052p-79f, 0.0f, 0x1.9d7782p-83f, 0.0f, 0x1.bbede8p-38f, 0.0f,
     0x1.8494a8p-25f, 0.0f, 0x1.2f9e86p-51f, 0x1.35343ep-115f, 0x1.249bdcp-121f,
     0x1.c06acp-7f, 0x1.c5c238p-118f, 0x1.f913acp-118f, 0x1.7598fep-114f, 0.0f, 0.0f,
     0.0f, 0x1.c5cddap-91f, 0.0f, 0x1.384f58p-75f, 0x1.c5f22ep-40f, 0.0f,
     0x1.df051ep-120f, 0.0f, 0x1.31822p-71f, 0.0f, 0x1.9fcccep-98f, 0x1.6e7dep-52f,
     0x1.168016p-10f, 0.0f, 0.0f, 0x1.1f6b7ep-71f, 0.0f, 0x1.10f0dcp-109f, 0.0f, 0.0f,
     0x1.ca3ab8p-48f, 0x1.6e8c4ep-102f, 0.0f, 0.0f, 0.0f, 0x1.4235a6p-60f, 0.0f,
     0x1.4ed06p-65f, 0x1.3baafap-112f, 0.0f, 0x1.df0532p-50f, 0x1.f99216p-50f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.00f09ap-109f,
     0x1.bb243p-87f, 0x1.f32952p-88f, 0x1.5d206cp-77f, 0x1.c2382ap-39f,
     0x1.034218p-29f, 0x1.acf154p-86f, 0x1.a216b2p-106f, 0x1.85d504p-26f,
     0x1.ada654p-107f, 0x1.442858p-90f, 0.0f, 0.0f, 0x1.e7dc46p-50f, 0.0f,
     0x1.824cdp-69f, 0.0f, 0.0f, 0x1.379f98p-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.52ead8p-109f, 0x1.f95adap-121f, 0.0f, 0.0f, 0x1.cbc31ep-107f, 0.0f, 0.0f,
     0x1.b4cde2p-20f, 0x1.8fdb76p-64f, 0x1.48904p-29f, 0x1.5cb932p-55f,
     0x1.63e174p-100f, 0.0f, 0.0f, 0.0f, 0x1.0c2bfp-91f, 0.0f, 0.0f, 0x1.0241a2p-111f,
     0x1.28161cp-72f, 0x1.16eaecp-89f, 0.0f, 0x1.b56844p-103f, 0x1.68d28ap-111f, 0.0f,
     0.0f, 0.0f, 0x1.106baap-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1a6a62p-107f, 0.0f,
     0.0f, 0x1.0cc69p-30f, 0.0f, 0x1.98104p-118f, 0x1.d9902ep-109f, 0.0f,
     0x1.cc7508p-36f, 0.0f, 0x1.225b54p-69f, 0.0f, 0.0f, 0x1.24067ap-17f, 0.0f,
     0x1.57775p-6f, 0x1.d7322ep-114f, 0.0f, 0.0f, 0x1.bfb97ap-78f, 0x1.ac9a1ap-90f,
     0.0f, 0x1.cdc3acp-15f, 0x1.6dff3cp-89f, 0x1.0fb328p-104f, 0x1.c05ceap-48f,
     0x1.97e16ap-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fabb3cp-75f, 0x1.7368b4p-122f,
     0.0f, 0x1.a4d70cp-106f, 0x1.5b37fp-11f, 0.0f, 0x1.8fb5e8p-41f, 0x1.37d318p-94f,
     0x1.26262cp-28f, 0.0f, 0x1.ea3114p-70f, 0x1.1a054cp-50f, 0.0f, 0x1p0f,
     0x1.8971dcp-3f, 0.0f, 0x1.3ad3e8p-119f, 0.0f, 0x1.7cd2aep-1f, 0x1.adf648p-123f,
     0x1.a263eep-17f, 0x1.acb254p-54f, 0x1.35f1p-79f, 0x1.147bc8p-54f, 0.0f,
     0x1.13ffd2p-122f, 0x1.a8f25ep-32f, 0.0f, 0.0f, 0x1.4c972cp-10f, 0x1.93dff4p-46f,
     0x1.8d74c2p-8f, 0x1.78e272p-2f, 0.0f, 0x1.6100c8p-9f, 0.0f, 0x1.b5ee06p-120f,
     0.0f, 0x1.836832p-30f, 0.0f, 0x1.1cb872p-124f, 0.0f, 0.0f, 0x1.159c22p-43f, 0.0f,
     0x1.76f2b4p-77f, 0.0f, 0.0f, 0x1.a38406p-69f, 0x1.7fdcf4p-34f, 0x1.e81794p-64f,
     0.0f, 0x1.df0776p-22f, 0x1.cdd018p-126f, 0x1.108886p-76f, 0x1.45159ep-7f, 0.0f,
     0.0f, 0x1.974108p-122f, 0x1.559af8p-126f, 0.0f, 0.0f, 0x1.ac4becp-28f,
     0x1.4affbcp-27f, 0x1.f8852p-60f, 0x1.3c47dap-12f, 0.0f, 0.0f, 0x1.51570ep-31f,
     0.0f, 0x1.27a048p-70f, 0x1.4b5524p-108f, 0.0f, 0x1.7ec0bp-75f, 0.0f,
     0x1.d0608ap-21f, 0.0f, 0x1.9aab8p-2f, 0x1.7bea38p-48f, 0x1.0b0108p-18f, 0.0f,
     0x1.0ff58ap-92f, 0x1.10bac2p-115f, 0.0f, 0.0f, 0x1.2b18eep-32f, 0x1.3c1712p-78f,
     0x1.3ab60cp-2f, 0.0f, 0x1.ac4936p-46f, 0.0f, 0x1.584c2cp-126f, 0x1.090cbep-28f,
     0x1.48b354p-115f, 0x1.3e7bcap-82f, 0.0f, 0.0f, 0x1.8772cap-89f, 0.0f,
     0x1.ad3784p-105f, 0x1.28c43p-36f, 0x1.81fd64p-21f, 0x1.350cdap-54f,
     0x1.e3f17ap-56f, 0x1p0f, 0.0f, 0x1.33ddd6p-86f, 0.0f, 0x1.d1686p-119f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e276p-82f, 0.0f, 0x1.98b4dcp-14f, 0.0f, 0.0f,
     0x1.58670ap-80f, 0x1.aac948p-63f, 0.0f, 0x1.3eeb62p-124f, 0.0f, 0.0f,
     0x1.7fedep-48f, 0x1.128564p-88f, 0x1.14e552p-78f, 0x1.4ca65ep-24f,
     0x1.89f396p-69f, 0x1.f7ef3ap-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2e67c6p-70f,
     0x1.1039dap-94f, 0x1.96c6dep-103f, 0x1.0a5ce8p-111f, 0.0f, 0x1.ba2d78p-70f,
     0x1.143dcap-85f, 0x1.675fbap-64f, 0x1.1a588p-109f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.914c74p-52f, 0x1.467bb6p-20f, 0x1.4f87bp-2f, 0.0f, 0.0f, 0x1.c98fe2p-61f,
     0.0f, 0x1.53287cp-5f, 0x1.cee37cp-79f, 0.0f, 0x1.16a162p-17f, 0x1.e8bc14p-119f,
     0x1.09ffeap-125f, 0x1.6f70e2p-74f, 0x1.75eac6p-18f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d2f328p-38f, 0x1.e9493ap-81f, 0.0f, 0x1.0142f2p-74f, 0.0f, 0.0f,
     0x1.466362p-111f, 0.0f, 0x1.069178p-61f, 0x1.57fddp-24f, 0.0f, 0x1.8c94a2p-41f,
     0x1.bbd874p-106f, 0.0f, 0.0f, 0x1.36171cp-81f, 0x1.f47e06p-69f, 0.0f, 0x1p0f,
     0x1.275e46p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fb3cc4p-51f,
     0x1.f9038cp-94f, 0x1.5eeaf4p-2f, 0x1.3d6792p-10f, 0x1.e07158p-111f, 0.0f, 0.0f,
     0x1.f62d74p-113f, 0.0f, 0x1.9eab5p-37f, 0x1.e85daep-19f, 0x1.4a132p-105f, 0.0f,
     0.0f, 0x1.05c0cp-71f, 0x1.df6832p-19f, 0x1.083738p-12f, 0.0f, 0x1.2457c6p-83f,
     0.0f, 0x1p0f, 0.0f, 0x1.5fdcf8p-40f, 0x1.ad143p-85f, 0.0f, 0x1p0f,
     0x1.199986p-101f, 0x1.418e2p-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2d277ep-107f,
     0x1.f2c92p-69f, 0x1.93785p-105f, 0.0f, 0.0f, 0x1.81bbcp-17f, 0x1.d4c088p-107f,
     0x1.40b95ep-112f, 0x1.d9a95ep-106f, 0.0f, 0.0f, 0.0f, 0x1.54fe2ap-8f,
     0x1.eaaf56p-110f, 0x1.9b52d2p-49f, 0.0f, 0x1.19497p-79f, 0.0f, 0x1.995966p-104f,
     0x1.3d6aa4p-70f, 0.0f, 0x1.8b06aap-11f, 0x1.2f906p-25f, 0x1.07c448p-117f, 0.0f,
     0x1.45df1cp-71f, 0.0f, 0x1.309e6ap-116f, 0x1.b28748p-76f, 0.0f, 0x1.b0563cp-38f,
     0.0f, 0x1.09c7cap-33f, 0x1.9db6dp-23f, 0x1.b9400ap-67f, 0x1.249b1ap-122f,
     0x1.35f86ep-13f, 0x1.3be2bcp-113f, 0x1.275464p-43f, 0x1.20402cp-71f, 0.0f,
     0x1.5eac22p-125f, 0x1.4a6f7ep-77f, 0.0f, 0x1.85ea34p-51f, 0x1.aee92p-37f, 0.0f,
     0.0f, 0x1.eb3edcp-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a898fap-43f, 0.0f, 0.0f, 0.0f,
     0x1.ac3d2cp-108f, 0x1.848b28p-3f, 0x1.1320cep-37f, 0.0f, 0x1.fc4d28p-65f, 0.0f,
     0.0f, 0x1.c73342p-14f, 0.0f, 0x1.4a906ep-117f, 0x1.a43d3p-17f, 0.0f, 0.0f,
     0x1.ffe648p-4f, 0.0f, 0x1.3e3d94p-3f, 0.0f, 0.0f, 0x1.b38c16p-71f, 0.0f,
     0x1.f75abep-10f, 0.0f, 0x1.99afeep-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.058aeap-113f,
     0.0f, 0x1.1b0eb6p-99f, 0.0f, 0.0f, 0x1.01468ap-92f, 0.0f, 0x1.167d7cp-106f,
     0x1.582ceap-14f, 0.0f, 0.0f, 0.0f, 0x1.74ee9p-42f, 0.0f, 0.0f, 0x1.1c0d3ep-57f,
     0x1.fb3846p-124f, 0x1.b4c2dap-49f, 0x1.7d55d6p-7f, 0.0f, 0x1.a97ecp-42f,
     0x1.3e62f6p-10f, 0.0f, 0x1.4b335ap-54f, 0.0f, 0x1.7a4b6ap-121f, 0x1.af0606p-80f,
     0x1.4192bep-104f, 0x1.81acccp-86f, 0x1.2af96cp-94f, 0.0f, 0.0f, 0x1.a5e374p-23f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d2a78p-14f, 0.0f, 0.0f, 0x1.e7fecap-85f,
     0x1.21ab2cp-115f, 0.0f, 0x1.ee057cp-28f, 0x1.9f2d56p-68f, 0.0f, 0.0f, 0.0f,
     0x1.ab2ce8p-47f, 0.0f, 0x1.89cdbap-78f, 0.0f, 0.0f, 0x1.bb138ep-41f, 0.0f,
     0x1.a1898cp-67f, 0.0f, 0.0f, 0.0f, 0x1.106e5p-98f, 0x1.2b6eecp-26f,
     0x1.021322p-64f, 0x1.3ecd14p-39f, 0.0f, 0.0f, 0.0f, 0x1.7c785cp-86f, 0.0f, 0.0f,
     0.0f, 0x1.06ecccp-111f, 0x1.f87474p-76f, 0x1.fb4df2p-42f, 0x1.38882ep-70f, 0.0f,
     0x1.9dd31ep-115f, 0x1.ae01cp-79f, 0.0f, 0x1.c0491p-59f, 0.0f, 0.0f,
     0x1.6e5aaep-107f, 0x1.f38e9cp-41f, 0.0f, 0.0f, 0x1.ffc81cp-4f, 0.0f,
     0x1.f37804p-52f, 0.0f, 0.0f, 0x1.03384cp-69f, 0x1.e1e9eep-109f, 0.0f,
     0x1.7773d6p-35f, 0.0f, 0.0f, 0.0f, 0x1.df1102p-83f, 0x1.2dabc8p-99f, 0.0f,
     0x1.57415ep-49f, 0.0f, 0.0f, 0.0f, 0x1.98bb06p-4f, 0x1.e3f572p-35f, 0.0f, 0.0f,
     0x1.d4fd3cp-112f, 0x1.6efaf2p-117f, 0x1.c24c28p-84f, 0x1.cf2deep-45f,
     0x1.afbb0ap-4f, 0.0f, 0x1.b744ecp-65f, 0.0f, 0x1.3bb1d4p-109f, 0x1.7a08dep-56f,
     0.0f, 0.0f, 0.0f, 0x1.d53cecp-102f, 0x1.9eea48p-14f, 0.0f, 0.0f, 0x1.31573p-114f,
     0x1.569228p-6f, 0x1.528e96p-63f, 0.0f, 0x1.80fc44p-7f, 0x1.adefe2p-36f, 0.0f,
     0x1.4a4e2ep-51f, 0x1.1d5d5cp-24f, 0.0f, 0.0f, 0x1.d01806p-71f, 0.0f,
     0x1.41fc82p-65f, 0.0f, 0.0f, 0.0f, 0x1.f5c49ep-93f, 0x1.53ce54p-71f, 0.0f,
     0x1.9f895ep-21f, 0x1.e1f396p-53f, 0x1.846b2p-35f, 0.0f, 0.0f, 0x1.6c51c4p-83f,
     0x1.256914p-12f, 0x1.a243f4p-5f, 0.0f, 0x1.580b2ap-51f, 0.0f, 0x1.253f6p-14f,
     0.0f, 0.0f, 0x1.7e4916p-87f, 0x1.7534d6p-52f, 0.0f, 0x1.96600ap-72f,
     0x1.bdbdaap-111f, 0x1.db7f64p-64f, 0.0f, 0.0f, 0x1.746e9ep-42f, 0x1.27fe9cp-126f,
     0.0f, 0.0f, 0x1.3aa102p-65f, 0.0f, 0x1.0fe14cp-112f, 0.0f, 0.0f, 0.0f,
     0x1.825cdap-33f, 0.0f, 0x1.9f8c28p-3f, 0x1.f0cdfap-45f, 0x1.36b40ep-72f,
     0x1.e38a9cp-83f, 0x1.7496b6p-120f, 0.0f, 0x1.6f02cep-71f, 0x1.083c42p-41f,
     0x1.65da9ep-39f, 0.0f, 0x1.9bea3ep-107f, 0x1.9ebedep-68f, 0.0f, 0.0f,
     0x1.f4c5cp-124f, 0.0f, 0.0f, 0.0f, 0x1.d6ab7ap-86f, 0x1.01c4cp-34f,
     0x1.061f96p-112f, 0.0f, 0.0f, 0x1.0979aep-19f, 0x1.0a1e4cp-61f, 0.0f,
     0x1.82b7eep-37f, 0.0f, 0x1.1c6deap-20f, 0x1.b9e93cp-18f, 0x1.c8535cp-37f,
     0x1.b454f4p-77f, 0x1.ffd74ap-82f, 0.0f, 0x1.0b53b6p-40f, 0x1.c33e1ep-74f,
     0x1.cca75ep-86f, 0.0f, 0x1.c1da4cp-122f, 0x1.00d2ecp-52f, 0x1.c9ce24p-109f,
     0x1.fd9afep-119f, 0.0f, 0.0f, 0x1.ebb8cep-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c695d2p-36f, 0x1.41b7fcp-40f, 0x1.86ee48p-120f, 0x1.34f554p-85f, 0.0f,
     0x1.320d4ep-17f, 0x1.7d88cap-83f, 0x1.c23c7ap-6f, 0.0f, 0.0f, 0.0f,
     0x1.45da6ep-89f, 0x1.860ed8p-71f, 0.0f, 0.0f, 0.0f, 0x1.f3149p-27f,
     0x1.ec69f4p-74f, 0x1.ebc8c4p-46f, 0.0f, 0.0f, 0x1.7d8b56p-27f, 0x1.30e924p-73f,
     0.0f, 0.0f, 0.0f, 0x1.e1a982p-23f, 0.0f, 0x1.bdfa82p-25f, 0x1.85e5c8p-39f,
     0x1.328e6p-93f, 0.0f, 0.0f, 0x1.e0941ep-82f, 0x1.30b3dcp-56f, 0.0f,
     0x1.c0230ap-122f, 0x1.f398bap-2f, 0.0f, 0.0f, 0x1.618046p-1f, 0.0f,
     0x1.5e020ap-71f, 0.0f, 0x1.de82bcp-69f, 0x1.b21f4ep-7f, 0x1.48c59ep-83f, 0x1p0f,
     0.0f, 0.0f, 0x1.f7295cp-40f, 0.0f, 0x1.f62b4ap-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.9070e6p-8f, 0x1.da680cp-89f, 0.0f, 0.0f, 0x1.c70508p-106f,
     0x1.1b4cacp-29f, 0x1.47eaf8p-107f, 0x1.f8e2f2p-72f, 0x1.deb3a8p-9f, 0.0f,
     0x1.c44cp-126f, 0.0f, 0.0f, 0x1p0f, 0x1.0b0e22p-18f, 0.0f, 0x1.601c3ap-97f,
     0x1.955e54p-16f, 0.0f, 0x1.edc1dp-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b177c8p-11f, 0x1.b10af2p-121f, 0.0f, 0.0f, 0x1.dc39bcp-69f, 0x1.d60796p-25f,
     0.0f, 0x1.9c6d92p-62f, 0.0f, 0.0f, 0x1.3b1efp-63f, 0x1.f1db14p-122f, 0.0f, 0.0f,
     0x1.e5321ep-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.adbbd2p-51f, 0.0f, 0x1.8b2f36p-123f,
     0x1.5315eap-76f, 0x1.bf4e16p-97f, 0x1.5ca1fp-88f, 0.0f, 0x1.774516p-81f,
     0x1.2be8e6p-31f, 0x1.b4ddeep-20f, 0.0f, 0x1.1c29aep-90f, 0.0f, 0.0f,
     0x1.1f466p-23f, 0x1.f2ee6ep-74f, 0.0f, 0x1.ee60bcp-26f, 0.0f, 0.0f,
     0x1.b2cc08p-86f, 0.0f, 0x1.ca73e2p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c8e1bp-106f, 0x1.3670b6p-73f, 0x1.94f792p-84f, 0x1.79873cp-16f,
     0x1.b18244p-73f, 0x1.917938p-22f, 0x1.ec318ep-9f, 0.0f, 0x1.866338p-109f,
     0x1.7ec708p-49f, 0.0f, 0x1.4d3484p-25f, 0x1.d7382cp-11f, 0x1.8800b8p-16f, 0.0f,
     0.0f, 0.0f, 0x1.4891cp-123f, 0.0f, 0.0f, 0x1.085aa4p-87f, 0x1.21a18ap-78f,
     0x1.79d2d6p-25f, 0.0f, 0x1.a1b97cp-107f, 0.0f, 0.0f, 0x1.4d1562p-21f, 0.0f, 0.0f,
     0.0f, 0x1.3d088cp-32f, 0x1.7cee0ap-110f, 0x1.bb3176p-82f, 0x1.526ac6p-16f,
     0x1.b2e684p-114f, 0x1.f2ee52p-16f, 0x1.3d084cp-97f, 0.0f, 0x1.57af88p-101f, 0.0f,
     0x1.4dca0cp-8f, 0.0f, 0.0f, 0x1.57b2f4p-53f, 0.0f, 0x1.20b80cp-92f,
     0x1.12e1p-34f, 0x1.9d28d4p-89f, 0x1.77d468p-79f, 0x1.62e0aep-42f,
     0x1.9cf4f6p-27f, 0.0f, 0x1.7fb3d2p-35f, 0.0f, 0x1.885be6p-101f, 0x1.58b5d4p-52f,
     0x1.9680dcp-31f, 0x1.bdd32p-105f, 0.0f, 0.0f, 0.0f, 0x1.0494b8p-106f,
     0x1.e81552p-87f, 0x1.43f354p-22f, 0x1.c0bddp-52f, 0.0f, 0x1.0f8172p-92f,
     0x1.d0c54cp-51f, 0x1.ab953ap-57f, 0.0f, 0.0f, 0.0f, 0x1.80218ep-113f, 0.0f, 0.0f,
     0.0f, 0x1.cd7e4ep-6f, 0.0f, 0.0f, 0x1.e397f8p-84f, 0x1.51c21ep-1f,
     0x1.ffe09cp-56f, 0.0f, 0x1.5e8bap-116f, 0.0f, 0x1.6a8fp-23f, 0x1.ce2144p-13f,
     0x1.6f7262p-48f, 0.0f, 0x1.6b9388p-1f, 0.0f, 0x1.674d4ep-93f, 0.0f,
     0x1.329524p-49f, 0x1.ad53d4p-35f, 0.0f, 0x1.9aae02p-11f, 0.0f, 0.0f, 0.0f,
     0x1.8e569p-48f, 0x1.9b7b0ap-58f, 0x1.8c22p-80f, 0x1.fe7906p-38f, 0x1.9836a2p-46f,
     0x1.cabb2cp-85f, 0x1.bda2a4p-7f, 0x1.26c6eap-35f, 0.0f, 0x1.f8eff6p-28f, 0.0f,
     0x1.ed9f54p-8f, 0.0f, 0x1.a4408ap-125f, 0x1.46e6c4p-52f, 0x1.86c938p-43f, 0.0f,
     0.0f, 0.0f, 0x1.c99a7ep-81f, 0.0f, 0.0f, 0x1.2ebd7cp-8f, 0.0f, 0x1.4f1262p-51f,
     0x1.07d6b8p-20f, 0x1.e24e8p-109f, 0x1.607fe2p-73f, 0x1.11ac9cp-92f, 0.0f, 0.0f,
     0x1.fdf93ap-52f, 0.0f, 0x1.2f7e8ep-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2ad132p-104f,
     0x1.6f945ap-55f, 0.0f, 0x1p0f, 0x1.2056a8p-126f, 0.0f, 0.0f, 0x1.bb32bp-78f,
     0x1.a68becp-8f, 0.0f, 0.0f, 0.0f, 0x1.aeadf8p-45f, 0.0f, 0.0f, 0x1.b3d47ap-33f,
     0x1.d3c4aap-126f, 0x1.3602cap-29f, 0.0f, 0.0f, 0.0f, 0x1.20f0c4p-60f,
     0x1.b7a1aep-80f, 0.0f, 0x1.d8da9p-63f, 0x1.7ba0e6p-65f, 0.0f, 0x1.091534p-30f,
     0x1.6aa85ep-115f, 0x1.36e4e6p-47f, 0x1.1f8f9cp-98f, 0.0f, 0.0f, 0.0f,
     0x1.d03216p-120f, 0.0f, 0.0f, 0x1.b9ebbap-8f, 0x1.157ea8p-70f, 0.0f,
     0x1.1e400cp-9f, 0x1.4b3322p-9f, 0.0f, 0x1.110114p-122f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef_float_2 global_bench_acc;
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
        Sleef_float_2 bench_acc;
        int32_t i;
        float tmp0;
        float tmp1;
        __m128 carg;
        __m128 carg1;
        __m128 carg2;
        float tmp2;
        float tmp3;
        float tmp4;
        __m128 carg3;
        __m128 carg4;
        __m128 carg5;
        float tmp5;
        Sleef_float_2 tmp6;
        int32_t tmp7;

        i = INT32_C(0);
        bench_acc = external_bench_wrapper_cst1;

        for (;(i < INT32_C(1001));){
            float tmp0;
            Sleef_float_2 tmp1;
            float tmp2;
            float tmp3;
            __m128 carg;
            __m128 carg1;
            __m128 carg2;
            float tmp4;
            float tmp5;
            float tmp6;
            __m128 carg3;
            __m128 carg4;
            __m128 carg5;
            float tmp7;
            Sleef_float_2 tmp8;
            int32_t tmp9;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_modff1_purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = bench_acc.x;
            tmp3 = tmp1.x;
            carg = _mm_set_ss(tmp2);
            carg1 = _mm_set_ss(tmp3);
            carg2 = _mm_add_ss(carg, carg1);
            tmp4 = _mm_cvtss_f32(carg2);
            tmp5 = bench_acc.y;
            tmp6 = tmp1.y;
            carg3 = _mm_set_ss(tmp5);
            carg4 = _mm_set_ss(tmp6);
            carg5 = _mm_add_ss(carg3, carg4);
            tmp7 = _mm_cvtss_f32(carg5);
            tmp8 = ((Sleef_float_2) {.x=tmp4, .y=tmp7});
            bench_acc = tmp8;
            tmp9 = i + INT32_C(1);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = bench_acc.x;
        carg = _mm_set_ss(tmp0);
        carg1 = _mm_set_ss(tmp1);
        carg2 = _mm_add_ss(carg, carg1);
        tmp2 = _mm_cvtss_f32(carg2);
        tmp3 = global_bench_acc.y;
        tmp4 = bench_acc.y;
        carg3 = _mm_set_ss(tmp3);
        carg4 = _mm_set_ss(tmp4);
        carg5 = _mm_add_ss(carg3, carg4);
        tmp5 = _mm_cvtss_f32(carg5);
        tmp6 = ((Sleef_float_2) {.x=tmp2, .y=tmp5});
        global_bench_acc = tmp6;
        tmp7 = j + INT32_C(1);
        j = tmp7;
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
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_modff1_purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_modff1_purecfma bench acc {.x=%a, .y=%a}\n", global_bench_acc.x, global_bench_acc.y );
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
