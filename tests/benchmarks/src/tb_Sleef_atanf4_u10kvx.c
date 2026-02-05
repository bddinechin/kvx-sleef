/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_atanf4_u10kvx.c --function Sleef_atanf4_u10kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
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
     0x1.715b6ep-70f, 0.0f, 0x1.df9e5p-15f, 0x1.99667ap-76f, 0x1.ceaf6p-29f, 0.0f,
     0.0f, 0x1.53ace4p-84f, 0x1p0f, 0x1.7e902ep-22f, 0x1.feaa3cp-65f, 0x1.52cea4p-47f,
     0x1.7db17ep-97f, 0.0f, 0x1.ef2baap-96f, 0x1.08c06ap-98f, 0.0f, 0x1.46a9a6p-86f,
     0x1.242fe4p-85f, 0x1.912c12p-50f, 0x1.245bbcp-96f, 0x1.6a05f4p-49f,
     0x1.ccbb16p-98f, 0.0f, 0.0f, 0.0f, 0x1.1e7686p-28f, 0.0f, 0x1.d6954ap-119f, 0.0f,
     0x1.1a7c34p-26f, 0x1.f6374ap-58f, 0x1.2c8162p-76f, 0.0f, 0x1.9a0068p-81f,
     0x1.f5b9dcp-102f, 0x1.eb81e4p-51f, 0x1.0ac682p-43f, 0.0f, 0x1.6dc7d4p-37f, 0.0f,
     0x1.e53d3ap-62f, 0x1.f5d7d6p-103f, 0x1.8284acp-39f, 0.0f, 0x1.309f4ap-49f,
     0x1.ff901ap-14f, 0x1.5af3b4p-60f, 0x1.0be22ap-39f, 0x1.028f8p-35f, 0x1p0f, 0.0f,
     0x1.dedf8ep-110f, 0.0f, 0.0f, 0x1.578fd6p-24f, 0x1.9d56d6p-65f, 0.0f,
     0x1.0fe574p-24f, 0x1.b9ccfcp-78f, 0x1.953556p-76f, 0x1.b6ea1ap-31f,
     0x1.6aa3fap-51f, 0.0f, 0x1.dbc2ep-32f, 0x1.6e4f0ap-50f, 0.0f, 0x1.5477dp-72f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d44446p-5f, 0x1.22b632p-120f, 0x1.a669d8p-98f,
     0.0f, 0x1.8777f2p-61f, 0x1.55a49ep-74f, 0.0f, 0x1.8ebdeep-99f, 0x1.c0dbe8p-65f,
     0.0f, 0x1.10e354p-126f, 0x1.e91ed8p-2f, 0x1.7bc8e2p-68f, 0.0f, 0.0f, 0.0f,
     0x1.40b4a8p-8f, 0x1.1b29f8p-40f, 0x1.30c40ep-34f, 0.0f, 0.0f, 0.0f,
     0x1.c7adc6p-26f, 0x1.07a1e8p-16f, 0.0f, 0.0f, 0x1.099a4ep-98f, 0x1.16dd52p-115f,
     0x1.0f4826p-113f, 0.0f, 0x1.37a262p-17f, 0x1.be8d18p-2f, 0.0f, 0.0f,
     0x1.aade6cp-101f, 0x1.c86618p-108f, 0x1.0ccb5ap-124f, 0x1.1991dcp-76f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.263caap-44f, 0x1.8ab122p-59f,
     0x1.87d534p-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bc8254p-69f,
     0x1.813f92p-9f, 0x1.28497p-57f, 0.0f, 0.0f, 0.0f, 0x1.58badp-4f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.6926dp-8f, 0x1.f544f4p-43f, 0x1.397372p-64f, 0.0f,
     0x1.77fd3cp-116f, 0x1.5ec0fap-4f, 0.0f, 0.0f, 0x1.82da36p-60f, 0.0f,
     0x1.8795c4p-99f, 0.0f, 0.0f, 0.0f, 0x1.a5c3f8p-93f, 0.0f, 0.0f, 0.0f,
     0x1.31336ap-9f, 0x1.cae148p-69f, 0x1.5243p-83f, 0x1.4ccap-35f, 0x1.bd442cp-15f,
     0.0f, 0.0f, 0.0f, 0x1.18fafcp-16f, 0x1.265988p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ae1238p-11f, 0.0f, 0x1.77b15cp-25f, 0x1.f98442p-58f, 0x1.10d0dp-13f,
     0x1.c59f16p-52f, 0.0f, 0x1.08b24cp-59f, 0x1.740b52p-18f, 0x1.6aa69ap-13f,
     0x1.155cf4p-113f, 0x1.f84518p-126f, 0x1.323858p-10f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.97531ap-75f, 0.0f, 0x1.0aec78p-3f, 0.0f, 0x1.1f95ep-42f, 0.0f, 0.0f,
     0x1.924366p-72f, 0x1.210daap-34f, 0x1.84407p-6f, 0.0f, 0x1.a691bep-20f, 0.0f,
     0x1.fb584ep-55f, 0x1.84a1eap-35f, 0x1.6987b2p-40f, 0x1.fd0ee6p-98f, 0.0f, 0.0f,
     0x1.5b1fa6p-52f, 0x1.059a36p-31f, 0.0f, 0.0f, 0.0f, 0x1.2b1a46p-122f,
     0x1.48bee4p-82f, 0.0f, 0x1.eb380ep-39f, 0x1.eab422p-71f, 0.0f, 0.0f,
     0x1.914e66p-19f, 0.0f, 0x1.e4405cp-95f, 0.0f, 0x1.616144p-83f, 0.0f, 0.0f,
     0x1.10ca52p-92f, 0.0f, 0x1.41f15ap-66f, 0x1.ff44f8p-28f, 0.0f, 0.0f, 0.0f,
     0x1.0452dap-19f, 0x1.827fa4p-87f, 0x1.cf857ep-88f, 0.0f, 0x1.9a946p-39f, 0.0f,
     0x1p0f, 0x1.751892p-36f, 0.0f, 0.0f, 0.0f, 0x1.da9e5p-28f, 0.0f,
     0x1.95273ep-106f, 0x1.0037eap-41f, 0x1.681422p-52f, 0x1.1d993p-66f, 0.0f,
     0x1.05ef08p-16f, 0x1.f1210cp-95f, 0x1.6e5c38p-105f, 0x1.b4be5cp-106f,
     0x1.0d6052p-76f, 0x1.d6b8bap-79f, 0.0f, 0x1.8578eap-103f, 0x1.d185cap-36f, 0.0f,
     0.0f, 0x1.44974ap-20f, 0x1.c50ffap-60f, 0.0f, 0x1.5e524ap-90f, 0.0f,
     0x1.2a3054p-83f, 0.0f, 0x1.8a7e6cp-20f, 0.0f, 0x1.6d413ap-61f, 0x1.e3905ep-101f,
     0.0f, 0x1.736aa6p-124f, 0x1.dd5e5ep-25f, 0x1.48ee9cp-52f, 0.0f, 0.0f,
     0x1.aaaedp-59f, 0.0f, 0x1.d3244cp-47f, 0.0f, 0x1.1c039ap-25f, 0x1.3713d2p-88f,
     0.0f, 0x1.8c7948p-31f, 0x1.fe7cb6p-24f, 0.0f, 0x1.034b5cp-106f, 0x1.e840e8p-50f,
     0.0f, 0x1.fdc06p-104f, 0x1.5df36ap-116f, 0.0f, 0x1.a8e734p-51f, 0x1.05462p-89f,
     0x1.304a74p-82f, 0x1p0f, 0x1.742998p-2f, 0x1.b4781ap-9f, 0x1.2412a2p-101f,
     0x1.9c23d8p-117f, 0x1.6dffb2p-118f, 0.0f, 0.0f, 0x1.c80c2p-102f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ab4066p-106f, 0x1.e4c7cep-8f,
     0x1.3a4464p-124f, 0.0f, 0x1.49b202p-83f, 0x1.147894p-91f, 0x1.d0a44cp-18f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1501c4p-52f, 0.0f, 0.0f, 0x1.c96d2cp-14f,
     0.0f, 0.0f, 0x1.a00932p-94f, 0x1.e9c1d6p-18f, 0x1.7b5618p-20f, 0.0f,
     0x1.0c16f4p-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4d24f2p-60f,
     0x1.8749fep-30f, 0.0f, 0.0f, 0.0f, 0x1.516e46p-118f, 0x1.ccb1bp-72f, 0.0f,
     0x1.6aaf7cp-103f, 0x1.c3489ep-10f, 0x1.b44b9cp-114f, 0x1.a2b178p-104f,
     0x1.fdf5d8p-113f, 0.0f, 0x1.01bdb4p-36f, 0x1.e1119ep-114f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.559718p-86f, 0.0f, 0.0f, 0x1.2c378ap-119f, 0x1.b804eep-125f, 0.0f,
     0.0f, 0x1.bd3c36p-55f, 0.0f, 0x1.d7af4p-2f, 0x1.34661p-14f, 0x1.0f650ap-10f,
     0x1.d9794ap-26f, 0x1.2ca754p-117f, 0.0f, 0.0f, 0x1.b4aadep-36f, 0.0f,
     0x1.e2189ap-37f, 0x1.98b954p-78f, 0.0f, 0.0f, 0x1.18c9ecp-89f, 0x1.b9fd94p-30f,
     0.0f, 0x1.e4e72cp-74f, 0.0f, 0x1.47b2bcp-63f, 0x1.1bba7cp-108f, 0x1.b0bb88p-108f,
     0x1.202d5cp-112f, 0x1.45e358p-2f, 0.0f, 0x1.bdde28p-74f, 0.0f, 0x1.1f06ap-44f,
     0x1.60f4f6p-121f, 0x1.a1c802p-2f, 0.0f, 0x1.956be6p-66f, 0x1.e47adcp-8f, 0.0f,
     0x1.91b838p-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9030f8p-49f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.cb1e18p-62f, 0.0f, 0x1.866f56p-46f,
     0x1.9f99d6p-14f, 0.0f, 0x1.756ab6p-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.129e32p-59f, 0.0f, 0.0f, 0.0f, 0x1.b3edc6p-15f, 0.0f, 0x1.3a8f9ap-74f,
     0x1.cc9b8p-10f, 0x1.103bfp-61f, 0x1.30db56p-71f, 0x1.7ac4ep-6f, 0.0f, 0x1p0f,
     0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.15d0e8p-15f, 0x1.c557aap-40f, 0x1.aa95eep-49f,
     0.0f, 0.0f, 0.0f, 0x1.afd8e4p-114f, 0x1.2fdfc8p-59f, 0x1.f48dbcp-112f,
     0x1.3ba556p-7f, 0x1.969842p-45f, 0.0f, 0x1.1ea1a6p-54f, 0x1.0d9a3p-70f,
     0x1.c7fba2p-91f, 0x1.229c08p-14f, 0x1.ec5c2ap-91f, 0.0f, 0x1.aaaeaap-115f,
     0x1.5e3a8ep-34f, 0.0f, 0.0f, 0x1.c813cap-7f, 0x1.ab73dp-1f, 0x1.cfcd9p-44f,
     0x1.81f708p-33f, 0.0f, 0.0f, 0.0f, 0x1.96f7ep-111f, 0.0f, 0.0f, 0x1.c60f58p-115f,
     0x1.aef5dcp-20f, 0x1.81533ep-124f, 0x1.487a6cp-103f, 0.0f, 0x1.72bc34p-103f,
     0x1.aa43e4p-7f, 0.0f, 0.0f, 0x1.583e86p-12f, 0.0f, 0x1.c54a4cp-60f,
     0x1.09e7c8p-59f, 0.0f, 0.0f, 0x1.372ae6p-69f, 0.0f, 0x1.870d5ep-88f, 0.0f, 0.0f,
     0.0f, 0x1.fbcccp-38f, 0.0f, 0x1.45ab72p-14f, 0x1.34e81ap-83f, 0.0f, 0.0f, 0.0f,
     0x1.9d7588p-87f, 0.0f, 0.0f, 0x1.482b28p-59f, 0x1.dc839ep-46f, 0.0f,
     0x1.b82c94p-126f, 0.0f, 0.0f, 0.0f, 0x1.07cfbp-69f, 0x1.2d2878p-112f,
     0x1.c254e4p-26f, 0x1.4137ccp-49f, 0x1.09150ep-51f, 0.0f, 0.0f, 0x1.a6fd08p-126f,
     0.0f, 0x1.60871ap-27f, 0x1.0a71cep-2f, 0x1.3d5d3cp-59f, 0.0f, 0.0f,
     0x1.514fdcp-27f, 0x1.a24442p-25f, 0.0f, 0.0f, 0x1.e42666p-19f, 0.0f,
     0x1.3bcc2ep-10f, 0x1.d455p-125f, 0x1.0ade1p-121f, 0x1.737ae4p-8f, 0.0f,
     0x1.daa404p-120f, 0.0f, 0x1.441178p-124f, 0x1.8515fep-3f, 0.0f, 0.0f, 0.0f,
     0x1.860abp-34f, 0x1.3ef998p-47f, 0x1.88f92ep-58f, 0.0f, 0x1.114bb8p-18f, 0.0f,
     0.0f, 0x1.425dccp-64f, 0x1.112418p-53f, 0.0f, 0x1.4cd1bap-56f, 0.0f, 0.0f,
     0x1.4d3feep-48f, 0.0f, 0x1.304718p-111f, 0x1.b90f0ep-36f, 0x1p0f, 0.0f, 0.0f,
     0x1.2b065ap-113f, 0.0f, 0x1.0b61e2p-8f, 0.0f, 0x1.d6f0ecp-99f, 0x1.3f43f6p-86f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bea7a8p-30f, 0x1.2fe2b4p-63f, 0.0f,
     0x1.b9cbep-7f, 0x1.74fb8p-75f, 0x1.f54d86p-117f, 0x1.0726acp-79f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.71e956p-84f, 0x1.d2f9a8p-6f, 0x1.38d644p-55f, 0x1.86bdc2p-25f,
     0.0f, 0x1.352ee8p-112f, 0x1.561208p-25f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cabe9ap-114f, 0x1.69658p-88f, 0x1.9968fcp-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.132dcep-100f, 0.0f, 0.0f, 0x1.2ccb52p-61f, 0.0f, 0x1.3b46cp-14f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.bc076cp-116f, 0.0f, 0.0f, 0.0f, 0x1.c16714p-36f,
     0x1.e496c8p-31f, 0x1.5cdcacp-64f, 0x1.9da5acp-24f, 0x1.b791p-62f,
     0x1.b054a6p-121f, 0.0f, 0x1.0a91aep-41f, 0x1.072ca2p-106f, 0.0f, 0.0f, 0.0f,
     0x1.c7abdap-29f, 0x1.eaf3d6p-122f, 0.0f, 0x1.666e4p-61f, 0.0f, 0x1.0d9bfap-4f,
     0x1.589142p-42f, 0x1.235612p-54f, 0.0f, 0.0f, 0x1.0c9508p-22f, 0x1.f82e32p-65f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.deedp-53f, 0.0f, 0x1.4048f6p-5f, 0x1.9e1246p-103f,
     0x1.65bb7cp-61f, 0.0f, 0x1.b4acb6p-57f, 0.0f, 0x1.37efcep-88f, 0x1.1c9fa2p-22f,
     0.0f, 0x1.784b26p-90f, 0.0f, 0x1.1c03b4p-103f, 0x1.52c5dp-2f, 0.0f, 0.0f,
     0x1.b5bde4p-99f, 0x1.9b8748p-89f, 0.0f, 0x1.e24c92p-33f, 0.0f, 0x1.eda204p-27f,
     0x1.3ad234p-99f, 0x1.9f5aap-25f, 0x1.edef5p-4f, 0.0f, 0x1.518f36p-100f, 0.0f,
     0.0f, 0.0f, 0x1.cb7348p-72f, 0x1.ef80ep-7f, 0.0f, 0x1.891c0ap-110f, 0.0f, 0.0f,
     0x1.371e22p-77f, 0x1.b8670ep-71f, 0x1.71685ap-78f, 0.0f, 0x1.c7232p-94f, 0.0f,
     0.0f, 0x1.bf8a78p-87f, 0x1.28cffcp-90f, 0.0f, 0.0f, 0x1.d3daf8p-70f,
     0x1.3a0656p-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c69f54p-16f, 0.0f, 0x1.83a696p-100f,
     0x1.597fdap-73f, 0x1.961eep-34f, 0.0f, 0x1.8b12fp-113f, 0x1.04e5b2p-60f, 0.0f,
     0x1.68d42cp-33f, 0.0f, 0x1.e70858p-4f, 0.0f, 0x1.96d80ap-81f, 0.0f, 0.0f,
     0x1.c91168p-33f, 0.0f, 0x1.3ea694p-68f, 0x1.42020cp-19f, 0.0f, 0.0f,
     0x1.e534ccp-107f, 0x1.631bb2p-16f, 0x1.e9dac4p-117f, 0x1.7be802p-74f,
     0x1.9a1038p-96f, 0.0f, 0.0f, 0x1.7d9e6cp-31f, 0.0f, 0x1.c8c46cp-31f,
     0x1.f8edaap-123f, 0.0f, 0.0f, 0x1.7ef618p-110f, 0x1.328b1cp-84f, 0x1.1d1dd2p-56f,
     0.0f, 0x1.054feap-17f, 0.0f, 0x1.0fb1c8p-21f, 0x1.923d4p-73f, 0.0f, 0.0f, 0.0f,
     0x1.b06222p-124f, 0x1.5418d6p-104f, 0x1.3cd554p-41f, 0x1.5e1854p-42f, 0.0f,
     0x1.5f735ap-8f, 0x1.439fa2p-104f, 0.0f, 0.0f, 0x1.e95ca2p-82f, 0.0f,
     0x1.29f63ep-44f, 0x1.89272ep-116f, 0x1.7b2da2p-75f, 0x1.bca2d8p-82f,
     0x1.3eb8p-32f, 0.0f, 0x1.030ba8p-77f, 0.0f, 0x1.049a8cp-9f, 0x1.40c124p-23f,
     0.0f, 0.0f, 0x1.31ea5ap-8f, 0.0f, 0x1.5bb466p-19f, 0.0f, 0.0f, 0x1.edb0c4p-88f,
     0x1.9c5d42p-11f, 0.0f, 0x1.aa9e16p-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.638366p-47f, 0.0f, 0x1.6a73e8p-93f, 0x1.b71dfep-78f, 0x1.8f147p-34f,
     0x1.261c36p-77f, 0x1.e47816p-43f, 0x1.4250a6p-86f, 0.0f, 0.0f, 0.0f,
     0x1.05d034p-33f, 0x1.045686p-110f, 0x1.74dba6p-90f, 0x1.9439fp-102f,
     0x1.4cd88p-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1880d2p-6f, 0.0f, 0x1.41195ep-57f,
     0x1.3fd0a8p-25f, 0x1.a138ccp-124f, 0x1.16279cp-65f, 0x1.865416p-28f,
     0x1.94f8dap-27f, 0.0f, 0x1.a6e90ap-100f, 0x1.fb1226p-123f, 0x1.52dae4p-36f, 0.0f,
     0x1.5fe924p-102f, 0x1.b6d6b2p-38f, 0.0f, 0x1.a01d24p-114f, 0x1.95e7b6p-62f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fd342ep-72f, 0x1.93acaap-48f, 0x1.0c1b8ep-24f,
     0.0f, 0x1.57fedcp-50f, 0x1.649bc2p-81f, 0x1.8147c2p-103f, 0x1.a7ab2p-68f,
     0x1.f3b432p-53f, 0.0f, 0.0f, 0x1.aa7daep-120f, 0x1.88e08ap-75f, 0.0f, 0.0f,
     0x1.85cd36p-26f, 0.0f, 0.0f, 0x1.882368p-99f, 0.0f, 0.0f, 0.0f, 0x1.1b2476p-124f,
     0.0f, 0x1.4253e6p-12f, 0x1.31b946p-14f, 0x1.6cd64p-1f, 0.0f, 0.0f,
     0x1.007b76p-123f, 0.0f, 0.0f, 0x1.8a5eaep-47f, 0.0f, 0.0f, 0x1.6715dep-34f,
     0x1.7b169cp-121f, 0x1.55b1dcp-117f, 0.0f, 0x1.3f7b94p-120f, 0x1.83f7bp-16f,
     0x1.10fe48p-101f, 0.0f, 0x1.8e8172p-72f, 0x1.988cc2p-121f, 0.0f, 0.0f,
     0x1.373ff6p-50f, 0.0f, 0x1.e7a35ep-95f, 0x1.1d473p-39f, 0x1.8d155p-66f,
     0x1.33b4aep-15f, 0.0f, 0.0f, 0x1.fb117cp-104f, 0.0f, 0x1.a7e7d8p-73f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f495a2p-101f, 0.0f, 0.0f, 0x1.8c94dp-18f, 0x1.737692p-103f,
     0.0f, 0x1.793c14p-82f, 0.0f, 0.0f, 0x1.77c3b2p-30f, 0.0f, 0x1.fcbf8cp-38f,
     0x1.41705cp-32f, 0.0f, 0.0f, 0x1.8fbb2p-115f, 0x1.a0d62p-68f, 0x1.3c69ecp-32f,
     0x1.09c2p-85f, 0x1.a3d2f6p-5f, 0.0f, 0.0f, 0x1.dbb8bap-114f, 0x1.590ac4p-18f,
     0.0f, 0.0f, 0x1.e89ebep-21f, 0x1.94e1cep-17f, 0.0f, 0.0f, 0x1.b37ef2p-43f,
     0x1.d10256p-27f, 0x1.745daap-54f, 0.0f, 0.0f, 0.0f, 0x1.dc81f6p-63f, 0.0f, 0.0f,
     0.0f, 0x1.181232p-65f, 0.0f, 0x1.91edacp-24f, 0.0f, 0x1.fba4d8p-26f, 0.0f, 0.0f,
     0x1.c0f932p-38f, 0x1.265878p-115f, 0x1.15196cp-84f, 0.0f, 0x1.9c13d2p-79f,
     0x1.e32a56p-41f, 0x1.c88bap-70f, 0x1.99a7b6p-100f, 0.0f, 0.0f, 0x1.3e9c5ep-17f,
     0x1.c99076p-51f, 0.0f, 0.0f, 0x1.10ec68p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3d5402p-97f, 0x1.70824ap-116f, 0.0f, 0x1.a4fe38p-98f, 0x1.b29662p-28f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.143e4p-37f, 0x1.e47c58p-35f, 0x1.d80052p-47f, 0.0f,
     0x1.df734p-22f, 0.0f, 0.0f, 0.0f, 0x1.27deep-47f, 0.0f, 0.0f, 0.0f,
     0x1.f3d46cp-70f, 0.0f, 0.0f, 0x1.601b48p-38f, 0.0f, 0x1.7e9ea6p-46f, 0.0f,
     0x1.125e8ap-5f, 0.0f
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
            int32_t tmp3;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_atanf4_u10kvx(tmp0);
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
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_atanf4_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_atanf4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
