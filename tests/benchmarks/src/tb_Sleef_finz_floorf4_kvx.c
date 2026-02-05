/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_floorf4_kvx.c --function Sleef_finz_floorf4_kvx \
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
     0x1.852daap-65f, 0.0f, 0.0f, 0x1.376e56p-76f, 0.0f, 0x1.fa587ep-105f,
     0x1.f41832p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6dc652p-26f, 0x1.d55738p-115f,
     0x1.3eb9b2p-80f, 0x1.ab95f6p-26f, 0.0f, 0.0f, 0x1.14baep-77f, 0x1.9a945p-37f,
     0.0f, 0.0f, 0x1.2ff6aap-15f, 0.0f, 0.0f, 0x1.5e8fdcp-17f, 0x1.b0c8ecp-45f,
     0x1.5bc7e6p-118f, 0.0f, 0.0f, 0.0f, 0x1.9c12d4p-87f, 0.0f, 0x1.b910b2p-119f,
     0.0f, 0.0f, 0.0f, 0x1.324cdcp-67f, 0.0f, 0x1.a0a894p-112f, 0x1p0f,
     0x1.24ea74p-50f, 0x1.40d84p-22f, 0.0f, 0x1.54f222p-123f, 0.0f, 0x1.7f6752p-46f,
     0x1.5f4aa8p-72f, 0x1.38f23cp-28f, 0x1.cd25c6p-123f, 0.0f, 0.0f, 0x1.0e172ap-46f,
     0.0f, 0x1.aac7e4p-61f, 0.0f, 0x1.ca5b02p-123f, 0x1.abbdbep-108f, 0.0f,
     0x1.bbb8fep-7f, 0.0f, 0x1.9fa67p-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d83aap-38f, 0.0f, 0x1.734368p-69f, 0x1.540ddp-99f, 0x1.7602e6p-51f,
     0x1.fc5b94p-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ce8188p-54f, 0.0f, 0.0f, 0.0f,
     0x1.d03832p-55f, 0.0f, 0.0f, 0x1.34c7a4p-28f, 0x1.1422c2p-82f, 0.0f,
     0x1.e3174ap-105f, 0x1.cd301p-67f, 0x1.df6f2p-26f, 0x1.a70352p-98f,
     0x1.dce674p-113f, 0.0f, 0x1.931604p-25f, 0x1.d7e408p-11f, 0.0f, 0x1.670d2ap-50f,
     0x1.f24cf6p-89f, 0.0f, 0.0f, 0x1.379e9ep-58f, 0.0f, 0.0f, 0x1.71fa58p-62f, 0.0f,
     0x1.71ff7ap-34f, 0.0f, 0x1.c9a27ep-79f, 0x1.dd4cfcp-82f, 0.0f, 0x1.8fe1ecp-74f,
     0x1.29f8bp-116f, 0x1.c21b1p-89f, 0x1.c17956p-47f, 0.0f, 0x1.eda05cp-121f, 0.0f,
     0x1.8ed964p-7f, 0x1.898834p-52f, 0x1.f67b42p-108f, 0x1.b3325cp-81f, 0.0f,
     0x1.20910ep-16f, 0.0f, 0x1.84768ep-33f, 0.0f, 0x1.952008p-58f, 0.0f,
     0x1.d7ce42p-57f, 0.0f, 0x1.caa67ap-50f, 0x1.4c74e8p-104f, 0.0f, 0x1.145896p-87f,
     0x1.9d18d8p-36f, 0x1.51ebdcp-16f, 0x1.68230ep-54f, 0x1.fa4a5p-91f,
     0x1.ff5868p-78f, 0.0f, 0.0f, 0x1.af4df6p-79f, 0.0f, 0.0f, 0x1.5d1ffp-47f, 0.0f,
     0x1.38ab62p-41f, 0x1.43178p-94f, 0x1.214374p-125f, 0.0f, 0x1.6673e6p-33f,
     0x1.3ce00ap-45f, 0x1.338efap-57f, 0x1.de7012p-6f, 0x1.90f1e6p-108f, 0.0f, 0.0f,
     0.0f, 0x1.afb60cp-67f, 0x1.4b792ep-24f, 0x1.003efp-120f, 0.0f, 0x1.7abd92p-36f,
     0x1.b5b09ap-80f, 0x1.69b868p-105f, 0x1.47bd66p-64f, 0x1.c4fe12p-112f, 0.0f, 0.0f,
     0x1.1eff2cp-49f, 0.0f, 0x1.4a8c4p-44f, 0x1.9792f8p-81f, 0x1.b4285ap-9f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b1c2bp-78f, 0x1.ceee64p-62f, 0.0f, 0x1.aa68acp-81f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e84d78p-109f, 0x1.9bf2f6p-23f, 0x1.a2feeep-62f,
     0x1.ed46f4p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4674e6p-38f, 0.0f, 0x1.e1a92ap-43f,
     0x1.47d93ep-112f, 0x1.e122fep-56f, 0.0f, 0.0f, 0x1.1d9ccep-74f, 0x1.157a1p-105f,
     0x1.61e22cp-95f, 0x1.5791c6p-84f, 0.0f, 0x1.164738p-83f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.397976p-45f, 0x1.6dbac2p-50f, 0x1.be81bap-114f, 0.0f, 0x1.d57064p-78f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.8da26cp-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.32fc1cp-14f,
     0.0f, 0x1.f60c7ep-39f, 0.0f, 0.0f, 0.0f, 0x1.73345p-76f, 0x1.b98e32p-55f,
     0x1.89b38cp-31f, 0.0f, 0x1.560b34p-121f, 0x1.2043f6p-91f, 0.0f, 0.0f, 0.0f,
     0x1.e18e88p-6f, 0.0f, 0x1.7dc424p-57f, 0x1.cbc47ap-12f, 0.0f, 0x1.d92904p-36f,
     0x1.295edep-103f, 0x1.976ad8p-51f, 0x1.36b5f4p-87f, 0x1.27608p-94f,
     0x1.befb12p-19f, 0.0f, 0x1.4cce42p-24f, 0x1.ff348ep-67f, 0.0f, 0x1.6533p-114f,
     0.0f, 0x1.8e88b4p-60f, 0.0f, 0x1.db00dap-99f, 0.0f, 0x1.76c3a2p-72f,
     0x1.a6560ap-35f, 0x1.29e6cp-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2b3812p-106f, 0.0f,
     0.0f, 0x1.2c390ap-45f, 0x1.898b3cp-63f, 0.0f, 0.0f, 0.0f, 0x1.cd3becp-80f, 0.0f,
     0.0f, 0.0f, 0x1.aaad72p-123f, 0x1.4ded7cp-24f, 0.0f, 0.0f, 0x1.ab5d94p-71f, 0.0f,
     0x1.7a7102p-97f, 0.0f, 0x1.98e808p-124f, 0.0f, 0.0f, 0.0f, 0x1.5982b6p-104f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.0ef99ap-86f, 0x1.94c912p-125f, 0x1.784668p-58f, 0.0f,
     0.0f, 0x1.30f96cp-60f, 0x1.0cf9bcp-111f, 0.0f, 0x1.f490d2p-93f, 0.0f,
     0x1.8482ecp-48f, 0.0f, 0x1.6c4d32p-40f, 0.0f, 0x1.e86eep-26f, 0.0f,
     0x1.7ec59ep-123f, 0x1.a27de8p-77f, 0x1.2f0294p-22f, 0x1.dbe838p-20f,
     0x1.8fa506p-76f, 0x1.50d444p-39f, 0x1.a07418p-87f, 0x1.2833e8p-91f,
     0x1.3b595p-77f, 0.0f, 0x1.53ca06p-43f, 0x1.644228p-84f, 0x1.24695ap-115f, 0.0f,
     0.0f, 0x1.594beep-32f, 0x1.b59596p-24f, 0x1.9eef3ap-1f, 0x1.69e152p-64f,
     0x1.f13ce6p-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5870a4p-70f,
     0.0f, 0x1.e63474p-46f, 0x1.0c85bcp-31f, 0x1.32505cp-33f, 0x1.b41142p-10f,
     0x1.be4f06p-117f, 0x1.14bb0ap-31f, 0x1.4266b6p-58f, 0x1.33cebap-119f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3162fp-126f, 0x1.2b2b34p-50f, 0.0f, 0.0f,
     0x1.b0d314p-85f, 0x1.1c50eap-108f, 0.0f, 0x1.8206fep-93f, 0x1.86c554p-24f,
     0x1.9a922cp-78f, 0x1.727f5cp-116f, 0.0f, 0.0f, 0x1.410592p-41f, 0.0f, 0.0f,
     0x1.28bfa2p-36f, 0.0f, 0x1.5121fep-4f, 0x1.cabed8p-18f, 0x1.38ac96p-115f,
     0x1.77f15ap-62f, 0.0f, 0x1.80cc64p-102f, 0x1.fbf29ap-126f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.586f3ap-68f, 0x1.3171dep-36f, 0x1.8e28c4p-28f, 0x1.4204f6p-100f,
     0x1.9e0986p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d0377cp-100f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cc41a2p-13f, 0x1.fafa12p-13f, 0.0f, 0.0f, 0.0f,
     0x1.484aecp-119f, 0.0f, 0.0f, 0.0f, 0x1.d0602ep-17f, 0.0f, 0x1.a504bep-14f,
     0x1.b1de7cp-41f, 0.0f, 0.0f, 0x1.edf0aep-101f, 0x1.42341p-74f, 0.0f, 0.0f,
     0x1.012dcp-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b2eef8p-119f,
     0x1.719394p-40f, 0x1.9d5c6p-75f, 0x1.f9c6bp-36f, 0x1.82808ap-97f,
     0x1.0915a4p-70f, 0x1.b3b21p-101f, 0x1.b0a582p-54f, 0.0f, 0x1.1f10a6p-18f,
     0x1.bfcb4ap-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.046988p-124f, 0.0f,
     0x1.2fc236p-118f, 0x1.ae203ep-106f, 0x1.f27664p-94f, 0x1.584908p-102f,
     0x1.1e9f06p-103f, 0.0f, 0x1.93316p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fbcebp-53f,
     0x1.276f4cp-122f, 0.0f, 0.0f, 0x1.4bf638p-46f, 0.0f, 0.0f, 0.0f, 0x1.f10436p-83f,
     0.0f, 0.0f, 0.0f, 0x1.a5a842p-41f, 0x1.1e6be4p-91f, 0.0f, 0.0f, 0x1.7739p-104f,
     0x1.9beefp-80f, 0x1.96ffbcp-42f, 0x1.2078b2p-61f, 0x1.869632p-116f, 0.0f, 0.0f,
     0x1.57ead6p-22f, 0.0f, 0.0f, 0x1.ddc3bcp-124f, 0.0f, 0.0f, 0x1.64a336p-41f, 0.0f,
     0x1.546b74p-8f, 0x1.d40752p-100f, 0.0f, 0.0f, 0.0f, 0x1.0ab42p-6f,
     0x1.61a108p-22f, 0.0f, 0x1.41ed54p-29f, 0x1.e471ap-121f, 0x1.2df8dep-118f,
     0x1.28cd86p-25f, 0x1.3fceb8p-39f, 0.0f, 0x1.527ebcp-36f, 0.0f, 0x1.62e73cp-69f,
     0.0f, 0.0f, 0x1.85f33ap-12f, 0.0f, 0x1.37f70cp-14f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e7c896p-107f, 0x1.303004p-29f, 0.0f, 0x1.797496p-92f, 0x1.6f667p-83f,
     0x1.c4ee8ap-86f, 0x1.ad93fcp-51f, 0.0f, 0.0f, 0.0f, 0x1.625b8cp-1f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.548e46p-18f, 0.0f, 0.0f, 0x1.ccd378p-115f, 0.0f,
     0.0f, 0x1.ebfa5ap-37f, 0x1.cc155ap-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.800482p-55f, 0x1.e6a664p-103f, 0.0f, 0.0f, 0.0f, 0x1.ccdc94p-50f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.5a807ep-18f, 0x1.e18698p-123f, 0x1.cfa854p-100f, 0.0f,
     0.0f, 0x1.d449e8p-31f, 0x1.e0e27cp-101f, 0x1.993fbap-14f, 0x1.f45714p-110f, 0.0f,
     0x1.4be572p-12f, 0.0f, 0.0f, 0x1.fec9f8p-28f, 0.0f, 0.0f, 0.0f, 0x1.68ed76p-99f,
     0x1.286572p-6f, 0.0f, 0x1.802888p-64f, 0x1.444a78p-38f, 0x1.d926b2p-73f, 0.0f,
     0x1.6a10cp-118f, 0.0f, 0x1.5e8f4p-115f, 0x1.45248cp-100f, 0x1.32df1cp-38f, 0.0f,
     0.0f, 0x1.14143p-103f, 0.0f, 0x1.43a868p-101f, 0x1.2a56a6p-46f, 0.0f,
     0x1.d119cp-79f, 0x1.b6326ep-95f, 0x1.73769ap-84f, 0.0f, 0.0f, 0x1.afffcep-108f,
     0.0f, 0.0f, 0x1.d3e1ep-100f, 0.0f, 0.0f, 0x1.474af4p-73f, 0x1p0f, 0.0f,
     0x1.73bc76p-12f, 0.0f, 0x1.2742fap-69f, 0x1.380b82p-112f, 0.0f, 0.0f, 0.0f,
     0x1.a5bba4p-81f, 0x1.a30186p-83f, 0x1.6b19d2p-80f, 0x1.5be888p-3f, 0.0f,
     0x1.fdfec6p-97f, 0x1.12a382p-57f, 0.0f, 0.0f, 0x1.d6a41ap-9f, 0x1.2bde88p-5f,
     0.0f, 0x1.16c976p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d37358p-92f, 0.0f,
     0x1.39d60cp-43f, 0.0f, 0x1.aa3872p-25f, 0.0f, 0x1.41707cp-21f, 0.0f,
     0x1.da39a2p-16f, 0x1.87076p-2f, 0x1.f518dap-106f, 0.0f, 0.0f, 0x1.533c6p-80f,
     0x1.d5ee42p-92f, 0.0f, 0x1.aa048cp-117f, 0x1.10256ap-53f, 0x1.e7e74ap-113f, 0.0f,
     0.0f, 0x1.24a16cp-67f, 0x1.faa62p-89f, 0x1.061e76p-11f, 0x1.84b68ap-10f, 0.0f,
     0x1.bd5d88p-45f, 0.0f, 0x1.67f15ep-6f, 0x1.e94adep-101f, 0.0f, 0.0f,
     0x1.52430ap-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.687f98p-18f, 0.0f, 0.0f, 0.0f,
     0x1.2dae58p-10f, 0x1.f6e50ep-82f, 0.0f, 0x1.d4e25cp-6f, 0x1.b00c1cp-86f, 0.0f,
     0x1.03431p-84f, 0.0f, 0x1.0e302ap-48f, 0x1.c53c6p-88f, 0x1.49049p-81f,
     0x1.14371cp-93f, 0.0f, 0.0f, 0x1.d46e02p-57f, 0.0f, 0.0f, 0x1.da5e4ep-7f, 0.0f,
     0.0f, 0x1.cc3acp-69f, 0x1.463616p-98f, 0x1.738564p-125f, 0x1.4cf3ecp-115f, 0.0f,
     0x1.4689c4p-70f, 0.0f, 0.0f, 0.0f, 0x1.905f2ap-125f, 0.0f, 0x1.853d2cp-38f,
     0x1.6f0a74p-42f, 0.0f, 0x1.3c176ep-46f, 0x1.d5c3c8p-63f, 0x1.44026p-4f, 0.0f,
     0x1.216cd4p-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.02c76ap-29f,
     0x1.3ef042p-78f, 0x1.f18862p-13f, 0x1.d02c24p-117f, 0x1.7f2c1ep-119f,
     0x1.8bcc3ap-31f, 0.0f, 0x1.8ec046p-5f, 0.0f, 0x1.d461a6p-63f, 0.0f, 0.0f, 0.0f,
     0x1.9c742ep-115f, 0.0f, 0x1.8069dp-46f, 0x1.a4ef5ap-114f, 0x1.ffedb2p-69f,
     0x1.d1a65ep-60f, 0.0f, 0x1.74a412p-80f, 0x1.55f62ap-76f, 0x1.1b6b5cp-117f,
     0x1.5320b4p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e5fc62p-94f,
     0x1.d925d2p-119f, 0.0f, 0x1.3eaa7ep-85f, 0.0f, 0x1.0f1cdcp-13f, 0.0f, 0.0f, 0.0f,
     0x1.ee584ap-5f, 0x1.eff1ccp-75f, 0x1.651f8p-59f, 0.0f, 0.0f, 0.0f,
     0x1.7d9774p-84f, 0x1.a2f2d4p-37f, 0.0f, 0.0f, 0x1.e77b3ap-84f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a8a5b6p-77f, 0.0f, 0x1.88956ap-22f, 0x1.da0e68p-86f, 0x1.f5c8ccp-116f,
     0.0f, 0x1.a7eaaap-43f, 0x1.8333b8p-4f, 0x1.c687fcp-45f, 0.0f, 0.0f, 0.0f,
     0x1.f1095p-100f, 0.0f, 0.0f, 0.0f, 0x1.f5d812p-105f, 0.0f, 0x1.8ff8eep-119f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.4a75aap-70f, 0x1.b00c1ep-86f, 0x1.ff9584p-47f,
     0x1.fa3d16p-95f, 0x1.08668cp-103f, 0x1.6ab114p-55f, 0x1.dd7d86p-63f,
     0x1.8be386p-13f, 0.0f, 0x1.9f15ecp-107f, 0.0f, 0x1.0f47p-14f, 0.0f,
     0x1.ec9e9cp-14f, 0.0f, 0.0f, 0x1.e9ecd6p-24f, 0x1.4e81b8p-102f, 0.0f,
     0x1.87a308p-24f, 0.0f, 0.0f, 0.0f, 0x1.ae4b64p-73f, 0.0f, 0.0f, 0x1.bfaf6ep-55f,
     0x1.ffadcep-12f, 0.0f, 0x1.5cce2ep-3f, 0x1.9e158ap-28f, 0.0f, 0x1.3d38dp-2f,
     0x1.68fcfcp-35f, 0.0f, 0.0f, 0.0f, 0x1.eee23ep-55f, 0x1.c59498p-85f,
     0x1.038b56p-31f, 0x1.4ddc46p-22f, 0.0f, 0x1.c6497p-25f, 0x1.680c38p-68f, 0.0f,
     0.0f, 0x1.c2d74cp-9f, 0.0f, 0.0f, 0x1.f43b96p-43f, 0x1.6bd6d4p-94f, 0.0f, 0.0f,
     0x1.e4ea9cp-119f, 0.0f, 0.0f, 0x1.7630b2p-4f, 0x1.4cf2ccp-94f, 0x1.da511p-14f,
     0x1.830afp-73f, 0x1.6c6ac4p-62f, 0x1.dff8a4p-80f, 0x1.40702p-16f, 0.0f,
     0x1.ff8e1ep-125f, 0x1.46ee4p-80f, 0.0f, 0x1.eb708ep-4f, 0.0f, 0x1.171c54p-40f,
     0.0f, 0x1.3341d2p-66f, 0x1.05d096p-3f, 0x1.98db5ap-61f, 0x1.f2577ep-2f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.54ce4cp-92f, 0x1.04893p-22f, 0.0f, 0x1.1c8a56p-117f,
     0x1.7e0662p-91f, 0.0f, 0x1.db258cp-17f, 0x1.b5dfbcp-7f, 0x1.daef3cp-2f, 0.0f,
     0.0f, 0x1.62241cp-122f, 0x1.2e644ap-122f, 0.0f, 0x1.22c83ap-109f, 0.0f, 0.0f,
     0.0f, 0x1.eabc12p-56f, 0x1.719c8cp-46f, 0x1.0bebc8p-93f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4328f6p-27f, 0.0f, 0x1.4252ccp-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3eefc8p-89f, 0x1.e175b8p-97f, 0x1.cd0024p-43f, 0x1.82b45cp-37f, 0.0f, 0.0f,
     0x1.1591b6p-88f, 0x1.7cf97ap-49f, 0x1.77af0cp-44f, 0x1.3a7b86p-50f,
     0x1.4edcdap-32f, 0.0f, 0.0f, 0x1.ce0606p-51f, 0x1.04cbdep-61f, 0x1.b52ab2p-8f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.11797ep-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d1616cp-39f,
     0x1.db29acp-10f, 0.0f, 0x1.88f7d8p-76f, 0x1.0a0582p-77f, 0x1.b5a8fap-65f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.8029cep-74f, 0.0f, 0.0f, 0x1.04283p-126f, 0x1.a412aep-58f,
     0x1.1b110ap-95f, 0x1.0c8d6p-68f, 0x1.9a46e6p-118f, 0x1.d5944p-89f, 0.0f, 0.0f,
     0x1.3bc1c2p-64f, 0.0f, 0x1.f8163ap-12f, 0x1.d1e10cp-8f, 0x1.e496c4p-125f, 0.0f,
     0x1.657212p-30f, 0.0f, 0.0f, 0x1.e853d2p-120f, 0.0f, 0x1.eab54cp-65f,
     0x1.39d63ep-93f, 0x1.aec3ep-124f, 0x1.b608e4p-116f, 0.0f, 0x1.c5e212p-25f,
     0x1.b811d4p-11f, 0x1.46871cp-26f, 0x1.277264p-95f, 0.0f, 0x1.7db772p-43f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9b409ep-102f, 0.0f, 0x1.b14d7p-104f, 0x1.7a7136p-75f, 0.0f,
     0x1.d25588p-14f, 0.0f, 0x1.e349c2p-4f, 0.0f, 0x1.678cd4p-47f, 0x1.df1eccp-3f,
     0.0f, 0.0f, 0x1.157e8p-35f, 0.0f, 0.0f, 0x1.3f278p-49f, 0x1.ec3bd4p-114f, 0.0f,
     0.0f, 0x1.000f62p-67f, 0.0f
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
            tmp1 = Sleef_finz_floorf4_kvx(tmp0);
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
    printf("Sleef_finz_floorf4_kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_floorf4_kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
