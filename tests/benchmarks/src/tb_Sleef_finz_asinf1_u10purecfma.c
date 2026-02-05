/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_asinf1_u10purecfma.c --function \
 *     Sleef_finz_asinf1_u10purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile float external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.670da2p-89f, 0x1.20b352p-95f, 0x1.74f03p-31f, 0x1.6c093ap-89f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.958a56p-54f, 0.0f, 0x1.f313ccp-43f, 0x1.a9abe6p-43f,
     0x1.884304p-16f, 0x1.26321cp-93f, 0x1.e5a0a4p-57f, 0.0f, 0x1.0ef658p-73f,
     0x1.99488ap-48f, 0.0f, 0x1.1a657cp-26f, 0x1.785f28p-96f, 0x1.9c25fep-117f, 0.0f,
     0.0f, 0x1.7cf3aap-58f, 0.0f, 0x1.19d032p-91f, 0.0f, 0.0f, 0x1.e678e2p-95f, 0.0f,
     0.0f, 0x1.f0a6d6p-42f, 0.0f, 0.0f, 0x1.8a56acp-109f, 0.0f, 0.0f, 0x1.e866ccp-73f,
     0x1.834ae4p-66f, 0.0f, 0.0f, 0x1.a83738p-2f, 0.0f, 0.0f, 0x1.5dfc3ap-26f, 0.0f,
     0.0f, 0x1.26be04p-91f, 0x1.295b9cp-3f, 0x1.3a9a6ap-73f, 0x1.2fa53ap-71f,
     0x1.449952p-30f, 0.0f, 0x1.e6869ep-43f, 0.0f, 0.0f, 0.0f, 0x1.1643bp-5f, 0.0f,
     0x1.395698p-70f, 0x1.668142p-118f, 0x1.492188p-46f, 0x1.bd26aep-81f,
     0x1.8dc694p-64f, 0.0f, 0x1.69af9p-112f, 0x1.d9ec5ap-79f, 0x1.348b06p-38f, 0.0f,
     0.0f, 0x1.574a7ap-92f, 0x1.ab930ap-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f4058cp-40f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7a4002p-8f, 0.0f, 0x1.83e1d6p-31f,
     0x1.64691ep-45f, 0x1.52c07ap-20f, 0x1.49eeb4p-80f, 0x1.54ff8ep-30f,
     0x1.494bb4p-26f, 0x1.0b446cp-40f, 0x1.1e73bep-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.61e0a6p-120f, 0.0f, 0x1.e877dep-43f, 0.0f, 0.0f, 0.0f, 0x1.7da0cp-106f, 0.0f,
     0x1.9128cp-110f, 0x1.2f91fp-67f, 0.0f, 0x1.12761ap-36f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4d394ep-10f, 0x1.90e58ep-126f, 0.0f, 0x1.edbba2p-65f, 0x1.6b189cp-5f,
     0x1.da8b0ep-110f, 0.0f, 0x1.6a5b4cp-21f, 0.0f, 0x1.6ab6d8p-113f, 0.0f, 0.0f,
     0x1.851f34p-67f, 0.0f, 0x1.158eaap-26f, 0.0f, 0x1.2c5ed4p-109f, 0x1.801cc6p-34f,
     0x1.a8a87ap-50f, 0.0f, 0x1.8de3d8p-63f, 0.0f, 0x1.daa41ap-72f, 0x1.772ad6p-16f,
     0x1.73d5cap-63f, 0x1.368eeap-60f, 0x1.0a7762p-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ee2d2ap-38f, 0.0f, 0.0f, 0x1.893a52p-122f, 0.0f, 0x1.33f248p-14f,
     0x1.7a8f6p-113f, 0x1.eabf44p-117f, 0.0f, 0x1.c3c282p-29f, 0.0f, 0.0f,
     0x1.ab49a4p-5f, 0.0f, 0x1.ff519cp-58f, 0x1.890e16p-50f, 0x1.674926p-117f, 0.0f,
     0.0f, 0x1.719f08p-97f, 0x1.8c1056p-26f, 0x1.98348cp-116f, 0.0f, 0x1.468bb2p-31f,
     0x1.10c332p-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ed30ecp-11f, 0.0f,
     0x1.f91ef8p-78f, 0x1.4ba84p-121f, 0.0f, 0x1.b386c8p-72f, 0x1.df4b7ep-73f,
     0x1.5b580cp-106f, 0.0f, 0x1.491f68p-65f, 0.0f, 0.0f, 0x1.a47202p-8f, 0.0f,
     0x1.fddc9p-75f, 0.0f, 0x1.30ccd8p-44f, 0.0f, 0.0f, 0.0f, 0x1.b45e6ep-8f, 0.0f,
     0x1.493accp-87f, 0x1.db54fap-34f, 0.0f, 0x1.3f7dcp-13f, 0.0f, 0x1.fb59cep-109f,
     0.0f, 0x1.b46ac2p-117f, 0.0f, 0x1.688cc8p-30f, 0x1.618606p-95f, 0x1.08ffecp-16f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.747ep-109f, 0x1.abdffep-39f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.557ed2p-61f, 0.0f, 0x1.b948bcp-123f, 0.0f, 0.0f, 0x1.5cf598p-92f,
     0x1.754804p-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8a27fp-19f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a64e22p-76f, 0x1.089fcap-10f, 0.0f, 0.0f, 0.0f, 0x1.c223eep-72f, 0.0f,
     0x1.4f9188p-21f, 0.0f, 0x1.13afacp-27f, 0.0f, 0.0f, 0.0f, 0x1.311d68p-1f,
     0x1.801d36p-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.af26fp-61f, 0.0f,
     0x1.9b687cp-58f, 0x1.9643fap-18f, 0x1.de651p-83f, 0x1.20d642p-99f,
     0x1.ddfefcp-24f, 0.0f, 0.0f, 0x1.1d28dcp-123f, 0.0f, 0x1.15bc38p-111f,
     0x1.41d1a6p-40f, 0x1.0787a6p-84f, 0.0f, 0x1.6e6a0ap-73f, 0x1.44ffb4p-72f,
     0x1.7c363ap-16f, 0.0f, 0.0f, 0x1.7863d4p-72f, 0.0f, 0.0f, 0x1.1e00d2p-76f, 0.0f,
     0x1.16e586p-31f, 0.0f, 0x1.20eb3cp-54f, 0.0f, 0x1.4b7486p-91f, 0x1.9d2fa2p-75f,
     0x1.05ffa6p-60f, 0.0f, 0.0f, 0.0f, 0x1.2b8228p-88f, 0.0f, 0.0f, 0x1.bbcb2ap-20f,
     0x1.d48cd6p-29f, 0x1.7b0292p-30f, 0x1.af20c8p-60f, 0x1.7693e2p-86f,
     0x1.71d2ap-29f, 0x1.79e2f8p-72f, 0.0f, 0x1.3ba84p-29f, 0.0f, 0.0f, 0.0f,
     0x1.003e2p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8d8c9ap-70f,
     0x1.53ccap-118f, 0x1.22229cp-84f, 0x1.bc3e12p-41f, 0x1.e20c6cp-111f, 0.0f,
     0x1.43e0b4p-95f, 0x1.83006p-20f, 0x1.f191e6p-99f, 0.0f, 0x1.3cb578p-28f, 0.0f,
     0x1.184364p-53f, 0.0f, 0.0f, 0x1.8bc524p-108f, 0x1.0a1618p-125f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d371d4p-14f, 0x1.f826b4p-60f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b0857cp-102f, 0.0f, 0.0f, 0x1.bd2a58p-62f, 0x1.3eb2aap-112f,
     0.0f, 0x1.3fb79cp-38f, 0.0f, 0.0f, 0.0f, 0x1.c06aaep-61f, 0.0f, 0x1.cd9362p-5f,
     0.0f, 0.0f, 0x1.5eb3bap-53f, 0.0f, 0x1.c485a8p-13f, 0.0f, 0x1.c53a84p-118f,
     0x1.7677d4p-112f, 0x1.5b1a7cp-64f, 0.0f, 0x1.07d63ep-80f, 0x1.ca008p-27f,
     0x1.e45b0ap-58f, 0.0f, 0x1.4fad2cp-20f, 0x1.e8039ep-115f, 0x1.73314ap-96f, 0.0f,
     0x1.492fbp-63f, 0x1.c1a064p-73f, 0x1.51157cp-65f, 0x1.b544bap-48f,
     0x1.67af0cp-19f, 0x1.3e096ap-7f, 0.0f, 0x1.359b92p-87f, 0.0f, 0.0f,
     0x1.41cc52p-2f, 0.0f, 0.0f, 0x1.0f4d0ap-80f, 0x1.f5f2cap-48f, 0x1.123188p-100f,
     0x1.983b2cp-5f, 0x1.953518p-88f, 0.0f, 0x1.06c984p-3f, 0.0f, 0x1.208836p-91f,
     0.0f, 0x1.3ecac4p-95f, 0.0f, 0x1.3d7442p-123f, 0.0f, 0x1.6998bp-9f,
     0x1.10addep-19f, 0x1.d7d0ccp-29f, 0.0f, 0.0f, 0x1.ff6904p-53f, 0x1.35fc5cp-32f,
     0.0f, 0x1.ffbf1ap-7f, 0x1.716ad8p-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.948ebcp-99f,
     0.0f, 0.0f, 0x1.8f4382p-62f, 0.0f, 0.0f, 0.0f, 0x1.dfb30ep-32f, 0.0f, 0.0f,
     0x1.e5c974p-121f, 0.0f, 0x1.faba5cp-91f, 0x1.600b12p-35f, 0x1.86d4aap-29f, 0.0f,
     0x1.ab1cfep-68f, 0.0f, 0x1.152568p-76f, 0.0f, 0x1.92fa7ep-6f, 0x1.675f28p-7f,
     0x1.2149ep-41f, 0x1.596156p-51f, 0.0f, 0.0f, 0.0f, 0x1.74458cp-56f,
     0x1.27d9eap-24f, 0x1.642c54p-57f, 0.0f, 0x1.7006c4p-113f, 0.0f, 0x1.570b52p-85f,
     0.0f, 0x1.ebdad2p-71f, 0x1.8bebd8p-77f, 0x1.69ad16p-31f, 0x1.e50768p-111f, 0.0f,
     0.0f, 0x1.2253bcp-82f, 0x1.555566p-126f, 0.0f, 0x1.8983a6p-89f, 0x1.4308e2p-37f,
     0.0f, 0x1.1c7e9p-4f, 0x1.6bef6p-1f, 0.0f, 0x1.77c62ap-91f, 0.0f, 0.0f, 0.0f,
     0x1.d6a80ep-25f, 0x1.9efe8p-87f, 0.0f, 0.0f, 0x1.19c086p-54f, 0x1p0f,
     0x1.be8fbcp-87f, 0.0f, 0x1.98f19cp-34f, 0x1.3a3aa8p-3f, 0.0f, 0.0f,
     0x1.2f69dep-87f, 0x1.aac718p-92f, 0x1.9e219cp-106f, 0.0f, 0x1.af917ep-28f,
     0x1.dc72c8p-72f, 0x1.e51234p-37f, 0.0f, 0.0f, 0x1.3eff02p-81f, 0x1.d76014p-6f,
     0x1.43ecbcp-106f, 0.0f, 0.0f, 0.0f, 0x1.1e0f4ep-18f, 0.0f, 0x1.221fe8p-87f,
     0x1.eb2522p-124f, 0.0f, 0.0f, 0x1.7791cep-123f, 0x1.721af8p-92f, 0.0f, 0.0f,
     0x1.91d1e8p-4f, 0.0f, 0x1.e23f36p-3f, 0x1.2f75fap-18f, 0x1.b552cep-34f, 0.0f,
     0x1.58a82p-95f, 0.0f, 0.0f, 0.0f, 0x1.f8cbf4p-60f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1d841ep-97f, 0.0f, 0.0f, 0.0f, 0x1.3f5042p-72f, 0x1.b70e08p-79f,
     0x1.43c414p-101f, 0.0f, 0x1.84825p-94f, 0.0f, 0x1.1d33ecp-16f, 0.0f, 0.0f,
     0x1.05f59p-99f, 0.0f, 0x1.21b388p-79f, 0.0f, 0.0f, 0.0f, 0x1.6a3158p-70f, 0.0f,
     0x1.9aefe6p-54f, 0x1.dde1bp-50f, 0.0f, 0x1.0bb04ep-63f, 0.0f, 0x1.091be8p-103f,
     0x1.0d2d88p-28f, 0x1.99aee4p-47f, 0.0f, 0x1.4b044ap-83f, 0.0f, 0x1.50a9dep-94f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.0c2784p-22f, 0.0f, 0.0f, 0.0f, 0x1.ee805ep-33f,
     0x1.c66036p-4f, 0.0f, 0x1.9fe312p-111f, 0.0f, 0x1.81eb8cp-103f, 0.0f, 0.0f,
     0x1.c37406p-21f, 0x1.61561cp-14f, 0.0f, 0x1.30d8cp-65f, 0.0f, 0x1.a0b8b6p-34f,
     0.0f, 0x1.85822ap-73f, 0x1.94562ep-9f, 0x1.c5bf4p-45f, 0.0f, 0x1.1e1d4ap-98f,
     0.0f, 0.0f, 0x1.0d63d2p-120f, 0.0f, 0x1.9e11f8p-107f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f14e2ap-46f, 0x1.f98c4ap-100f, 0x1.ceba36p-62f, 0x1.a00c86p-26f,
     0x1.a6e7f4p-84f, 0.0f, 0x1.5370cap-111f, 0x1p0f, 0x1.ccce62p-44f, 0.0f, 0.0f,
     0.0f, 0x1.3094e8p-13f, 0.0f, 0x1.836538p-91f, 0x1.ed5be6p-94f, 0.0f,
     0x1.476d4ap-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d733bep-107f,
     0x1.045d26p-28f, 0x1.9d6928p-15f, 0x1.c5c1eap-45f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.160a28p-36f, 0.0f, 0.0f, 0.0f, 0x1.944144p-116f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6fcfe2p-114f, 0x1.bcc70ep-52f, 0x1.78944ap-46f, 0.0f, 0x1.debe82p-51f, 0.0f,
     0x1.23e714p-81f, 0.0f, 0.0f, 0x1.279bacp-24f, 0x1.1ed56ap-110f, 0x1.f5204cp-71f,
     0.0f, 0x1.1dcdc4p-71f, 0x1.55bdeep-53f, 0.0f, 0.0f, 0x1.1f7f96p-123f,
     0x1.ec382cp-63f, 0x1.b79f5p-37f, 0.0f, 0.0f, 0x1.a5b2aap-94f, 0x1.8973cep-110f,
     0.0f, 0x1.090612p-31f, 0x1.35cbd4p-7f, 0x1.7feab6p-48f, 0x1.6f320ep-113f,
     0x1.a6b3e4p-38f, 0x1.d72894p-35f, 0.0f, 0.0f, 0x1.f065ap-86f, 0.0f, 0.0f, 0.0f,
     0x1.00673cp-72f, 0x1.73f7d6p-53f, 0.0f, 0x1.00e59ep-40f, 0x1.3d03fep-67f, 0.0f,
     0.0f, 0x1.49c57ap-122f, 0.0f, 0x1.bb01b6p-16f, 0.0f, 0.0f, 0.0f, 0x1.21cce8p-20f,
     0x1.967e7ep-72f, 0x1.17f4b4p-71f, 0.0f, 0.0f, 0x1.927728p-19f, 0.0f,
     0x1.7134b2p-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.39383cp-86f, 0.0f, 0.0f, 0x1.2b1d88p-58f, 0.0f, 0x1.e2f85ap-68f,
     0x1.6a058cp-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.497616p-120f, 0.0f,
     0x1.110d36p-16f, 0.0f, 0.0f, 0.0f, 0x1.1bee48p-111f, 0.0f, 0x1.0efe2ap-2f, 0.0f,
     0.0f, 0x1.08d694p-107f, 0.0f, 0.0f, 0x1.96674p-84f, 0x1.782256p-50f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.cd7ca8p-68f, 0.0f, 0x1.28538ap-89f, 0x1.6d4aaap-87f,
     0x1.dfdabp-90f, 0x1.68c908p-124f, 0.0f, 0.0f, 0x1.7480ecp-91f, 0x1.3b436p-27f,
     0x1.f56494p-57f, 0.0f, 0.0f, 0.0f, 0x1.888f64p-97f, 0.0f, 0x1.11db12p-46f,
     0x1.8a766ep-13f, 0x1.44b6c8p-21f, 0x1.a1b678p-113f, 0x1.989974p-52f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.12dc36p-35f, 0x1.4e381p-54f, 0x1.c41322p-12f,
     0x1.671136p-6f, 0x1.a72f0cp-103f, 0.0f, 0x1.a3839cp-110f, 0.0f, 0.0f, 0.0f,
     0x1.6dee6p-59f, 0x1.ab01b4p-76f, 0x1.323ecap-76f, 0.0f, 0x1.541f58p-82f,
     0x1.a00c82p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.967dc8p-101f, 0x1.b3bc28p-25f,
     0x1.66261cp-98f, 0x1.074a0ap-125f, 0.0f, 0x1.38a0a4p-115f, 0x1.af6ac8p-82f, 0.0f,
     0x1.04ec0ap-7f, 0x1.57d856p-110f, 0x1.5ec808p-64f, 0x1.3450d2p-81f,
     0x1.1b67e6p-50f, 0.0f, 0.0f, 0x1.e3a30ep-73f, 0x1.f816a6p-50f, 0x1.cfaa86p-85f,
     0.0f, 0x1.9bd48p-112f, 0x1.006b3ep-15f, 0.0f, 0x1.ab7cfcp-8f, 0x1.3c1bb8p-40f,
     0.0f, 0.0f, 0.0f, 0x1.60b6bcp-109f, 0.0f, 0x1.8adf9cp-39f, 0x1.8a0dfp-117f,
     0x1.af2a24p-109f, 0.0f, 0x1.d2325cp-100f, 0.0f, 0x1.b60096p-8f, 0x1.e782ccp-119f,
     0.0f, 0x1.31d9p-55f, 0x1.84b13ap-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b715f2p-102f,
     0x1.ff4378p-32f, 0x1.0292bap-74f, 0x1.44c9aap-25f, 0.0f, 0.0f, 0.0f,
     0x1.013224p-28f, 0x1.75a78ep-77f, 0.0f, 0x1.09a3d8p-87f, 0x1.796d04p-93f,
     0x1.2e55b4p-40f, 0.0f, 0x1.dfcd8cp-66f, 0x1.30542cp-76f, 0x1.e478aap-110f,
     0x1.faceap-89f, 0x1.28062p-68f, 0.0f, 0.0f, 0x1.ffe7eep-70f, 0.0f,
     0x1.bbbaf6p-104f, 0x1.8edc02p-118f, 0x1.9bce1ap-9f, 0x1.040bdcp-14f, 0.0f,
     0x1.595b36p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f71dc6p-70f, 0x1.d2c6c2p-55f,
     0.0f, 0x1.56e77ep-89f, 0x1.cd3636p-85f, 0x1.90abf2p-32f, 0x1.468fdap-59f, 0.0f,
     0x1.fef546p-23f, 0x1.370cc4p-43f, 0.0f, 0x1.f51bcp-67f, 0.0f, 0.0f, 0.0f,
     0x1.9cb6ep-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8fcc94p-41f, 0x1.54e8b8p-13f,
     0x1.d182f6p-124f, 0.0f, 0.0f, 0x1.a23544p-4f, 0.0f, 0x1.18fadap-37f, 0.0f,
     0x1.c007eep-33f, 0.0f, 0x1.ba4474p-98f, 0x1.b8532p-19f, 0x1.a6c9ap-69f,
     0x1.3371d2p-108f, 0.0f, 0x1.4a619ap-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2a48f6p-18f,
     0.0f, 0x1.4e94a2p-125f, 0.0f, 0x1.0aeb0ap-46f, 0x1.55b618p-20f, 0.0f, 0.0f, 0.0f,
     0x1.fb6cc4p-43f, 0x1.d36ec4p-65f, 0.0f, 0x1.06a6e6p-103f, 0.0f, 0.0f, 0.0f,
     0x1.fc03dcp-39f, 0.0f, 0x1.936a88p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b73222p-92f, 0.0f, 0.0f, 0x1.f06fa4p-117f, 0.0f, 0.0f, 0.0f, 0x1.e0ac06p-28f,
     0.0f, 0x1.da8b8p-4f, 0x1.1a705cp-50f, 0x1.940f86p-18f, 0x1.036a9ap-87f, 0.0f,
     0x1.766d1cp-29f, 0x1.eaafaep-122f, 0.0f, 0x1.ac1feap-7f, 0.0f, 0.0f,
     0x1.639c4ep-54f, 0.0f, 0.0f, 0x1.d54f52p-70f, 0x1.fdb008p-91f, 0x1.176956p-123f,
     0.0f, 0.0f, 0x1.94e90ap-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a43cb2p-35f,
     0.0f, 0.0f, 0x1.2ba562p-37f, 0x1.46f178p-38f, 0x1.0ef664p-59f, 0.0f, 0.0f,
     0x1.a70cb8p-25f, 0x1.389188p-20f, 0.0f, 0x1.5ec846p-75f, 0x1.c601fcp-63f, 0.0f,
     0x1.367e04p-11f, 0x1.a4a2eap-80f, 0x1.42062ep-92f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.22e90ap-114f, 0x1.281542p-99f, 0.0f, 0.0f, 0x1.74aacp-108f, 0.0f, 0.0f,
     0x1.d5885ep-67f, 0x1.5284d6p-123f, 0x1.4d0474p-16f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7fc094p-81f, 0.0f, 0x1.dd965cp-24f, 0.0f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    float global_bench_acc;
    int64_t timer;
    int64_t tmp;
    int32_t j;
    int64_t tmp1;
    int64_t tmp2;
    double id_tmp;
    double cpe_measure;
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = 0.0f;
    tmp = __cos_counter_num(0);
    timer = tmp;
    j = INT32_C(0);

    for (;(j < INT32_C(10000));){
        float bench_acc;
        int32_t i;
        float tmp0;
        int32_t tmp1;

        i = INT32_C(0);
        bench_acc = 0.0f;

        for (;(i < INT32_C(1001));){
            float tmp0;
            float tmp1;
            float tmp2;
            int32_t tmp3;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_finz_asinf1_u10purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = bench_acc + tmp1;
            bench_acc = tmp2;
            tmp3 = i + INT32_C(1);
            i = tmp3;
        }
        tmp0 = global_bench_acc + bench_acc;
        global_bench_acc = tmp0;
        tmp1 = j + INT32_C(1);
        j = tmp1;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_finz_asinf1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_asinf1_u10purecfma bench acc %a\n", global_bench_acc);
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
