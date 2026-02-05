/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_finz_modff1_purecfma.c --function \
 *     Sleef_finz_modff1_purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --precision sleef_sf2 --bench \
 *     --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef_float_2 external_bench_wrapper_cst = {.x = 0.0f, .y = 0.0f};
static const Sleef_float_2 external_bench_wrapper_cst1 = {.x = 0.0f, .y = 0.0f};
volatile Sleef_float_2 external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0.0f, 0.0f, 0x1.7b58c4p-18f, 0.0f, 0x1.21e10cp-13f, 0.0f, 0.0f, 0x1.0d1d3cp-87f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9169c4p-93f, 0x1.2548aap-122f, 0.0f,
     0x1.67f73cp-71f, 0x1.bdb934p-9f, 0.0f, 0.0f, 0.0f, 0x1.f69eb6p-98f,
     0x1.6448cp-5f, 0x1.177a5ep-90f, 0.0f, 0x1.d7278cp-26f, 0.0f, 0x1.42cbcap-35f,
     0.0f, 0x1.02cc94p-65f, 0.0f, 0.0f, 0x1.1aee22p-89f, 0.0f, 0x1.6894a6p-93f,
     0x1.210de8p-75f, 0x1.50896cp-81f, 0.0f, 0x1.5387dep-110f, 0.0f, 0.0f,
     0x1.bc1c2ap-25f, 0.0f, 0.0f, 0.0f, 0x1.b3912p-83f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.88e9dp-101f, 0x1.37bacp-55f, 0x1.881bacp-53f, 0x1.d04748p-124f, 0.0f, 0.0f,
     0x1.a3bf44p-73f, 0x1.2ec9b6p-10f, 0.0f, 0.0f, 0x1.6600dp-13f, 0x1.8733eap-76f,
     0x1.c049aap-45f, 0.0f, 0.0f, 0.0f, 0x1.fe708ap-116f, 0x1.545aecp-57f, 0.0f,
     0x1.872b76p-110f, 0x1.045faep-57f, 0x1.192cdep-40f, 0x1.073082p-12f, 0.0f, 0.0f,
     0.0f, 0x1.f20fb6p-91f, 0x1.b96ca6p-51f, 0x1.d67cacp-62f, 0x1.f0e904p-39f,
     0x1.0af7b8p-66f, 0.0f, 0x1.c8bef4p-24f, 0.0f, 0x1.dc8cb4p-33f, 0.0f,
     0x1.b34ca4p-45f, 0x1.e2a746p-33f, 0.0f, 0x1.ffd1f2p-110f, 0x1.a5271cp-72f,
     0x1.0dc19ep-22f, 0x1.d00b62p-6f, 0x1.04c0b2p-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2d967ap-79f, 0.0f, 0x1.20f7f2p-42f, 0.0f, 0x1.c5230ap-92f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.0cbb9ep-55f, 0.0f, 0.0f, 0x1.deeb58p-94f, 0.0f, 0.0f, 0.0f,
     0x1.8b472p-87f, 0.0f, 0x1.41d6f8p-15f, 0x1.9077b8p-79f, 0x1.902ff2p-93f,
     0x1.c19c18p-106f, 0x1.9cf7aap-34f, 0x1.becd7ap-23f, 0.0f, 0.0f, 0x1.d38ee2p-57f,
     0.0f, 0.0f, 0.0f, 0x1.e84a98p-15f, 0x1.88a886p-85f, 0x1.ed8d9p-80f,
     0x1.13cca2p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.15ad48p-32f, 0.0f, 0x1.3b8c68p-11f,
     0x1.6be082p-94f, 0.0f, 0x1.d69a0cp-53f, 0.0f, 0x1.8e68b4p-93f, 0x1.6ac644p-98f,
     0x1.e8a94ap-125f, 0.0f, 0.0f, 0x1.473f6p-60f, 0x1.687bcp-121f, 0x1.a09eccp-51f,
     0x1.58f80ap-8f, 0.0f, 0x1.25653cp-78f, 0x1.d4d9ecp-19f, 0.0f, 0x1.1aab8cp-120f,
     0.0f, 0x1.880acep-109f, 0x1.0f0092p-75f, 0x1.08d934p-29f, 0x1.5878acp-49f,
     0x1.591438p-79f, 0.0f, 0.0f, 0x1.a10d56p-54f, 0.0f, 0x1.5a893cp-67f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7c4262p-1f, 0.0f, 0.0f, 0.0f, 0x1.7a62dp-5f,
     0x1.4e7a4p-108f, 0.0f, 0.0f, 0.0f, 0x1.58c2dcp-22f, 0x1.82f414p-96f,
     0x1.80d60cp-18f, 0.0f, 0x1.e1331cp-80f, 0.0f, 0x1.a9361ap-58f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b981bep-42f, 0x1.1d876ep-72f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cb7f4cp-4f, 0.0f, 0.0f, 0x1.05b95cp-107f, 0x1.7ac152p-60f, 0x1.b3627ap-81f,
     0x1.40abd2p-41f, 0.0f, 0.0f, 0x1.feb0dep-68f, 0x1.484a62p-40f, 0x1.90e84ep-77f,
     0.0f, 0x1.0a4b4cp-110f, 0x1.e6adc2p-90f, 0.0f, 0x1.ba02dp-52f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.0424c6p-43f, 0.0f, 0.0f, 0x1.391612p-39f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9abafap-7f, 0.0f, 0.0f, 0x1.392784p-4f, 0x1.a6a25p-40f, 0x1.a744b4p-123f,
     0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.cd50cep-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.da1dap-21f,
     0.0f, 0.0f, 0x1.51be9ap-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.df4ed2p-62f,
     0x1.c460fep-25f, 0.0f, 0.0f, 0x1.38285p-13f, 0.0f, 0x1.532b74p-27f, 0.0f,
     0x1.993d04p-22f, 0.0f, 0x1.7bba9ap-84f, 0x1.d59f64p-22f, 0x1.0d703ap-112f,
     0x1.d38ab8p-113f, 0.0f, 0x1.64f64ep-98f, 0x1.870816p-113f, 0.0f, 0.0f, 0.0f,
     0x1.0ecd8ap-72f, 0x1.08d87ap-115f, 0x1.566918p-74f, 0.0f, 0.0f, 0.0f,
     0x1.ede33p-109f, 0x1.400dd8p-106f, 0x1.6982e8p-87f, 0.0f, 0x1.17ffep-14f,
     0x1.3e9418p-12f, 0x1.f245f2p-98f, 0x1.ebc5c8p-51f, 0.0f, 0.0f, 0.0f,
     0x1.8431a6p-46f, 0x1.d7111ep-102f, 0x1.29381ep-110f, 0x1.096f74p-75f,
     0x1.34b468p-41f, 0.0f, 0x1.834f2ap-50f, 0x1.3a9bb8p-77f, 0x1.ebf7aep-63f,
     0x1.8d7b1p-62f, 0x1.6072b4p-42f, 0.0f, 0x1.067ebp-64f, 0x1.98e78p-45f, 0.0f,
     0.0f, 0x1.637b1ep-18f, 0.0f, 0.0f, 0.0f, 0x1.787582p-8f, 0.0f, 0x1.cceca6p-36f,
     0x1.18ed0ap-9f, 0.0f, 0x1.f745fcp-76f, 0x1.de47dap-30f, 0.0f, 0x1.3ee1c8p-20f,
     0x1.fedaa2p-80f, 0.0f, 0.0f, 0x1.fa8f6ep-125f, 0.0f, 0.0f, 0x1.6dfb9cp-87f,
     0x1.bfb33ep-15f, 0.0f, 0.0f, 0x1.3e8b04p-76f, 0.0f, 0x1.157632p-27f,
     0x1.c3b8e2p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0ae02ap-123f, 0.0f,
     0.0f, 0.0f, 0x1.c816d2p-85f, 0.0f, 0.0f, 0.0f, 0x1.1e4cb2p-69f, 0.0f, 0.0f,
     0x1.d99164p-27f, 0x1.d1c91p-117f, 0.0f, 0x1.e1bcd8p-2f, 0x1.ecaa34p-32f,
     0x1.e03e92p-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.09fe92p-56f,
     0.0f, 0x1.f3268ap-68f, 0.0f, 0x1.cffc06p-45f, 0.0f, 0.0f, 0x1.842454p-80f, 0.0f,
     0x1.8ff162p-53f, 0x1.a238cep-52f, 0.0f, 0.0f, 0.0f, 0x1.419b6cp-60f,
     0x1.e25e4p-118f, 0.0f, 0x1.9e026p-50f, 0x1.00aa04p-110f, 0x1.752db8p-94f,
     0x1.d09244p-5f, 0x1.a50b54p-54f, 0x1.23e59ap-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.0fc8bep-24f, 0.0f, 0.0f, 0.0f, 0x1.f8d06cp-95f, 0.0f, 0x1.ba0804p-67f,
     0.0f, 0.0f, 0x1.2a85d4p-118f, 0.0f, 0.0f, 0x1.2aa09ep-104f, 0x1.413394p-123f,
     0.0f, 0x1.e5ba08p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a4f96ap-26f, 0.0f,
     0x1.2cc544p-78f, 0x1.383254p-65f, 0.0f, 0x1.6cee6ep-23f, 0.0f, 0x1.2c0eacp-103f,
     0.0f, 0.0f, 0.0f, 0x1.8b3d88p-7f, 0x1.8b938p-71f, 0x1.96951cp-123f,
     0x1.0c7498p-75f, 0.0f, 0.0f, 0x1.64bd1ap-5f, 0x1.3b0ffp-58f, 0.0f,
     0x1.249146p-50f, 0.0f, 0x1.42f404p-46f, 0.0f, 0.0f, 0.0f, 0x1.83a7eep-119f,
     0x1.8138aep-111f, 0.0f, 0.0f, 0x1.c5dd2cp-30f, 0x1.7bf63p-11f, 0x1.3f299ep-121f,
     0.0f, 0.0f, 0.0f, 0x1.e8bb2ep-75f, 0.0f, 0x1.475e76p-7f, 0.0f, 0x1.883892p-87f,
     0x1.e748dep-118f, 0x1.83706p-26f, 0.0f, 0.0f, 0x1.788562p-35f, 0x1.cc71c8p-87f,
     0.0f, 0.0f, 0.0f, 0x1.cb4392p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e3980ep-92f,
     0x1.9573c8p-17f, 0.0f, 0.0f, 0x1.413794p-15f, 0x1.49452ap-107f, 0.0f,
     0x1.622974p-107f, 0x1.5d54b6p-111f, 0x1.ed2cfap-75f, 0.0f, 0x1.85087ap-87f,
     0x1.e16b02p-60f, 0.0f, 0x1.0c8e26p-95f, 0.0f, 0x1.c3bd44p-29f, 0x1.5c8c7ap-43f,
     0.0f, 0x1.3eda3p-29f, 0x1.331594p-37f, 0.0f, 0x1.fa99eap-81f, 0x1.617034p-39f,
     0x1.289056p-1f, 0.0f, 0x1.0387c8p-41f, 0.0f, 0.0f, 0x1.6a9222p-41f,
     0x1.9b0fbap-9f, 0.0f, 0.0f, 0x1.3b485ap-42f, 0x1.3b3d68p-11f, 0.0f,
     0x1.e6432cp-59f, 0.0f, 0.0f, 0x1.1f0a4ep-110f, 0x1.7169dep-51f, 0x1.602194p-18f,
     0x1.84f91ep-111f, 0x1.9ad1c2p-30f, 0.0f, 0x1.5a860ep-23f, 0.0f, 0.0f, 0.0f,
     0x1.6de33ep-25f, 0.0f, 0x1.b0c03ep-23f, 0x1.d58f06p-49f, 0x1.486b98p-108f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.fd0aa6p-121f, 0x1.70e2f4p-20f, 0.0f, 0x1.7349cap-112f,
     0x1.cdc94ep-7f, 0x1.c9067ap-44f, 0x1.c71224p-92f, 0x1.570494p-96f, 0.0f,
     0x1.70dd6ap-99f, 0x1.937888p-120f, 0.0f, 0x1.60cfe8p-24f, 0.0f, 0.0f,
     0x1.4a9946p-103f, 0.0f, 0x1.39efc6p-96f, 0x1.f1905p-28f, 0.0f, 0.0f,
     0x1.b846p-105f, 0.0f, 0x1.62c0f4p-48f, 0x1.daecc4p-5f, 0.0f, 0x1.f8719ep-108f,
     0x1.59cf2cp-42f, 0x1.83570ap-92f, 0.0f, 0.0f, 0x1.610a7ep-101f, 0.0f,
     0x1.3086f4p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.66c3dep-122f, 0.0f,
     0x1.fdf1bcp-42f, 0x1.48335p-65f, 0x1.f9f43p-117f, 0x1.86759p-109f, 0.0f,
     0x1.fff302p-86f, 0.0f, 0x1.3057f4p-67f, 0x1.c8df0ap-118f, 0x1.d86facp-40f,
     0x1.c969acp-84f, 0x1.8ffb7ap-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.96870ap-75f,
     0x1.427cd6p-69f, 0.0f, 0x1.a8740ep-94f, 0x1.da949ep-91f, 0.0f, 0x1.10dbbp-96f,
     0x1.9eb0fap-47f, 0.0f, 0x1.43b44ap-99f, 0x1.39f676p-44f, 0x1.ef846ep-81f, 0.0f,
     0.0f, 0x1.9773bep-122f, 0x1.44b994p-70f, 0.0f, 0x1.dc8c8p-43f, 0x1.39ed86p-114f,
     0.0f, 0.0f, 0x1.0bdd94p-75f, 0.0f, 0x1.2e447p-88f, 0x1.ca3d96p-26f,
     0x1.f97922p-7f, 0.0f, 0.0f, 0.0f, 0x1.07a4dep-59f, 0.0f, 0.0f, 0x1.9d30fcp-71f,
     0x1.7d153p-82f, 0.0f, 0.0f, 0.0f, 0x1.556fa8p-75f, 0.0f, 0x1.6e9bfp-95f,
     0x1.02862p-57f, 0.0f, 0x1.030f3cp-21f, 0.0f, 0x1.f31236p-107f, 0x1.4ed878p-10f,
     0x1.a0085ap-90f, 0x1.f0dc0cp-16f, 0.0f, 0.0f, 0x1.f1275p-14f, 0x1.1e40e4p-20f,
     0.0f, 0x1.29d05cp-79f, 0.0f, 0x1.59f65ep-43f, 0.0f, 0x1.4dc5c6p-126f, 0.0f, 0.0f,
     0x1.3336aap-34f, 0x1.2a1fe4p-73f, 0x1.b02ebap-108f, 0x1.cc4738p-64f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3cead8p-18f, 0.0f, 0.0f, 0x1.1c598p-3f,
     0.0f, 0x1.04f6aep-35f, 0.0f, 0.0f, 0x1.cd153ap-2f, 0x1.7f43acp-14f,
     0x1.98e7aap-126f, 0.0f, 0.0f, 0x1.b330e8p-117f, 0.0f, 0x1.ca36e6p-20f, 0.0f,
     0.0f, 0x1.830b98p-60f, 0x1.46ccdp-121f, 0x1.c2d5aep-78f, 0x1.b1043p-90f,
     0x1.6bf0bp-66f, 0.0f, 0x1.dbd204p-62f, 0x1.8bdcccp-76f, 0.0f, 0x1.bfe232p-65f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.05a96ep-24f, 0x1.6eb02ep-45f,
     0x1.49633ap-41f, 0x1.80fb9p-95f, 0.0f, 0x1.70a2eep-9f, 0x1.0961f2p-114f,
     0x1.dba972p-60f, 0x1.6e66aep-32f, 0.0f, 0.0f, 0.0f, 0x1.268ea2p-41f,
     0x1.fdf5dp-61f, 0x1.0fbbeap-3f, 0.0f, 0.0f, 0.0f, 0x1.c53fb2p-107f,
     0x1.03b97ep-3f, 0.0f, 0.0f, 0x1.58a2f2p-25f, 0.0f, 0x1.e40236p-18f, 0.0f,
     0x1.04d432p-125f, 0x1.dca598p-115f, 0.0f, 0x1.1994cp-87f, 0x1.bc357cp-126f, 0.0f,
     0.0f, 0x1.53cbccp-56f, 0x1.8d9ba2p-76f, 0.0f, 0x1.64326cp-40f, 0x1.57edcap-123f,
     0x1.1ae2e4p-97f, 0.0f, 0.0f, 0x1.3ddb5ap-1f, 0x1.cbf73cp-29f, 0x1.4119fep-65f,
     0.0f, 0.0f, 0x1.741f8p-48f, 0.0f, 0x1.42c6dp-64f, 0x1.f4b108p-51f,
     0x1.ed9238p-39f, 0x1.8e47a8p-61f, 0.0f, 0x1.6f4788p-103f, 0x1.23a394p-101f,
     0x1.950982p-23f, 0x1.9bc142p-113f, 0x1.763802p-86f, 0x1.8092aep-19f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.c7ce0ap-110f, 0.0f, 0x1.e71bccp-18f, 0.0f, 0x1.07b5acp-37f,
     0x1.9bbfa2p-81f, 0.0f, 0x1.f28508p-65f, 0x1.8dd386p-78f, 0.0f, 0x1.c8cf54p-78f,
     0.0f, 0x1.78cdecp-76f, 0.0f, 0x1.547514p-115f, 0.0f, 0x1.4cc6a4p-12f,
     0x1.6fe294p-70f, 0.0f, 0.0f, 0x1.27bac8p-70f, 0x1.bd6722p-112f, 0x1.1612cep-3f,
     0.0f, 0x1.b40742p-55f, 0x1.836c2ap-40f, 0x1.3b087ep-110f, 0x1.95e504p-12f, 0.0f,
     0x1.19be8ep-22f, 0x1.1254c4p-79f, 0x1.fe2c94p-67f, 0x1.f00b3ap-83f,
     0x1.a3e058p-43f, 0.0f, 0.0f, 0x1.b0e2a6p-96f, 0x1.7a5d8p-16f, 0.0f,
     0x1.97b7a6p-17f, 0x1.1d91acp-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4d6a66p-37f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.3c469ap-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4ae056p-40f,
     0.0f, 0.0f, 0.0f, 0x1.ec7194p-46f, 0x1.a97ae2p-45f, 0x1p0f, 0x1.771d8ep-112f,
     0.0f, 0x1.357124p-83f, 0.0f, 0.0f, 0.0f, 0x1.cf90aap-126f, 0x1.1e5744p-39f, 0.0f,
     0x1.53f662p-117f, 0x1.751b9ap-26f, 0x1.790538p-41f, 0x1.d1d40cp-44f,
     0x1.04ee1ep-89f, 0.0f, 0x1.b5afe8p-115f, 0x1p0f, 0.0f, 0.0f, 0x1.75a346p-93f,
     0x1.d0fbeap-28f, 0x1.c245f8p-82f, 0x1.617d0cp-38f, 0.0f, 0.0f, 0x1.c0560ep-107f,
     0x1.6dc4a4p-106f, 0x1.955ecep-27f, 0.0f, 0.0f, 0x1.4ea83ep-57f, 0.0f,
     0x1.c25f48p-5f, 0.0f, 0x1.e17676p-93f, 0x1.954278p-24f, 0x1.79aae2p-89f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.41661ap-123f, 0x1.a0a9cep-78f,
     0x1.98c93ep-100f, 0x1.7dae7cp-90f, 0.0f, 0.0f, 0.0f, 0x1.425242p-97f, 0.0f, 0.0f,
     0x1.9f14ecp-94f, 0x1.a51c44p-64f, 0.0f, 0x1.fb5d98p-70f, 0x1.6d0e54p-78f, 0.0f,
     0x1.cea2f6p-52f, 0x1.40ccc2p-116f, 0.0f, 0x1.01b6bap-15f, 0x1.573f1ep-6f,
     0x1.7252fep-67f, 0.0f, 0x1.ce0e9ep-120f, 0.0f, 0.0f, 0x1.d86516p-85f, 0.0f, 0.0f,
     0x1.c8c9d4p-110f, 0.0f, 0x1.04554ep-43f, 0x1.bd561ep-85f, 0.0f, 0.0f,
     0x1.39de98p-126f, 0.0f, 0x1.8400c6p-5f, 0x1.5562ccp-38f, 0.0f, 0x1.892feep-35f,
     0x1.5d9faep-117f, 0x1.ab762p-118f, 0.0f, 0.0f, 0.0f, 0x1.cd88fcp-45f, 0.0f, 0.0f,
     0x1.bda07p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3b69eep-107f, 0.0f,
     0x1.cde5e2p-33f, 0x1.22d0ecp-8f, 0.0f, 0x1.b899dcp-19f, 0x1.ba0402p-126f, 0.0f,
     0.0f, 0x1.d77dd8p-95f, 0x1.2e9c0ap-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f19fcp-123f, 0x1.bccc8p-47f, 0x1.645e92p-80f, 0x1.20bb06p-13f, 0.0f,
     0x1.bc15eep-124f, 0.0f, 0x1.6fe7a6p-79f, 0.0f, 0x1.5ac658p-23f, 0x1.3e2e7p-33f,
     0x1.80f90cp-96f, 0.0f, 0x1.91952p-123f, 0.0f, 0x1.eed2d2p-42f, 0.0f, 0.0f, 0.0f,
     0x1.403b74p-2f, 0.0f, 0.0f, 0x1.6955bp-66f, 0.0f, 0x1.b3267ep-4f, 0.0f,
     0x1.bd0958p-33f, 0.0f, 0.0f, 0x1.ed4124p-93f, 0.0f, 0.0f, 0x1.b9144ap-109f, 0.0f,
     0.0f, 0.0f, 0x1.4f0426p-101f, 0x1.4f9092p-89f, 0x1.8a17b6p-105f, 0.0f, 0.0f,
     0x1.9a0cdcp-57f, 0x1.9ccad4p-100f, 0x1.38306cp-19f, 0x1.d3d79p-52f, 0.0f, 0.0f,
     0x1.4de2e6p-33f, 0.0f, 0.0f, 0x1.f0019ap-67f, 0.0f, 0.0f, 0.0f, 0x1.05e818p-21f,
     0.0f, 0x1.d7dfaap-73f, 0x1.ab31a6p-81f, 0x1.8285a8p-109f, 0.0f, 0x1.eea19p-34f,
     0x1.6fe4e2p-40f, 0.0f, 0x1.7fb338p-95f, 0x1.3fd982p-77f, 0x1.260ddep-50f
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
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = external_bench_wrapper_cst;
    tmp = __cos_counter_num(0);
    timer = tmp;
    j = INT32_C(0);

    for (;(j < INT32_C(10000));){
        Sleef_float_2 bench_acc;
        int32_t i;
        float tmp0;
        float tmp1;
        float tmp2;
        float tmp3;
        float tmp4;
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
            float tmp4;
            float tmp5;
            float tmp6;
            float tmp7;
            Sleef_float_2 tmp8;
            int32_t tmp9;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_finz_modff1_purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = bench_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = bench_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef_float_2) {.x=tmp4, .y=tmp7});
            bench_acc = tmp8;
            tmp9 = i + INT32_C(1);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = bench_acc.x;
        tmp2 = tmp0 + tmp1;
        tmp3 = global_bench_acc.y;
        tmp4 = bench_acc.y;
        tmp5 = tmp3 + tmp4;
        tmp6 = ((Sleef_float_2) {.x=tmp2, .y=tmp5});
        global_bench_acc = tmp6;
        tmp7 = j + INT32_C(1);
        j = tmp7;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_finz_modff1_purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_modff1_purecfma bench acc {.x=%a, .y=%a}\n", global_bench_acc.x, global_bench_acc.y );
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
