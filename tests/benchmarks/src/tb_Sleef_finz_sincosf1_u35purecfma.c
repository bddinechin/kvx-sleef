/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sincosf1_u35purecfma.c --function \
 *     Sleef_finz_sincosf1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0x1.04839cp-126f, 0.0f, 0x1.e529aap-87f, 0.0f, 0x1.60bcp-85f, 0.0f, 0.0f,
     0.0f, 0x1.ec75p-104f, 0.0f, 0x1.3032f4p-22f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fc70eep-109f, 0.0f, 0x1.c30d1cp-15f, 0.0f, 0x1.f41b6ap-50f, 0.0f, 0.0f,
     0x1.7e70aap-97f, 0.0f, 0.0f, 0.0f, 0x1.ab6fd6p-42f, 0x1.1044b8p-32f, 0.0f, 0.0f,
     0.0f, 0x1.8505a2p-79f, 0x1.1a3edep-108f, 0.0f, 0.0f, 0x1.013066p-15f, 0.0f,
     0x1.10f5d8p-79f, 0.0f, 0.0f, 0.0f, 0x1.85e79p-38f, 0x1.864528p-35f, 0.0f,
     0x1.7c196ep-65f, 0x1.eae72p-24f, 0x1.8b4faap-51f, 0x1.093e58p-69f,
     0x1.f26388p-54f, 0x1.fcc552p-117f, 0x1.af440ep-28f, 0.0f, 0x1.4bd6aap-66f, 0.0f,
     0.0f, 0x1.698adap-82f, 0x1.f66752p-58f, 0.0f, 0x1.44a52ap-77f, 0.0f,
     0x1.e6d39cp-45f, 0x1.927948p-90f, 0.0f, 0x1.9571bep-121f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4a0898p-121f, 0x1.8f3b02p-28f, 0.0f, 0x1.81b9b2p-126f, 0.0f,
     0.0f, 0x1.aa796p-93f, 0x1.f60fe4p-63f, 0.0f, 0x1.187be8p-121f, 0x1.c6c5ep-67f,
     0x1.d1e9a8p-106f, 0x1.144e6ep-20f, 0x1.0297eep-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.62e6p-60f, 0x1.d62f04p-61f, 0.0f, 0.0f, 0x1.c3c234p-10f, 0.0f, 0.0f,
     0x1.a65f16p-9f, 0.0f, 0x1.a0a50ap-73f, 0x1.2cd8ecp-12f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.1e654ap-27f, 0x1p0f, 0.0f, 0x1.22b338p-29f, 0x1.37a2f8p-42f,
     0x1.ec116p-126f, 0x1.7b0c6p-79f, 0.0f, 0x1.e3f70cp-1f, 0.0f, 0x1.e4f83ap-12f,
     0x1.70d132p-18f, 0.0f, 0x1.a94ed6p-10f, 0.0f, 0x1.7849c2p-58f, 0.0f, 0.0f,
     0x1.6da99cp-34f, 0x1.a73dd8p-122f, 0x1.5f8628p-30f, 0x1.6c0f9ap-25f, 0.0f, 0.0f,
     0x1.f3f59ap-5f, 0x1.8fda42p-43f, 0x1.81f662p-16f, 0x1.c6d68ap-19f,
     0x1.505208p-75f, 0x1.cac844p-78f, 0.0f, 0x1.f61d9cp-120f, 0x1.cbb196p-21f, 0.0f,
     0.0f, 0.0f, 0x1.a5909p-115f, 0.0f, 0x1.a319a6p-89f, 0.0f, 0x1.666672p-86f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ee290ap-8f, 0.0f, 0x1.f19cc2p-19f, 0.0f, 0x1.5866ecp-89f,
     0.0f, 0x1.de5272p-9f, 0.0f, 0x1.36e97cp-32f, 0.0f, 0.0f, 0x1.e5829p-94f,
     0x1.e2976ep-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f398fp-49f,
     0x1.2d5994p-1f, 0x1.0ecedep-47f, 0x1.aa19fap-79f, 0x1.3daa6ep-75f,
     0x1.16327ap-122f, 0.0f, 0.0f, 0x1.1de21ap-70f, 0x1.6996a2p-20f, 0x1.085cbap-36f,
     0.0f, 0x1.bef196p-39f, 0.0f, 0x1.40cb8cp-71f, 0x1.100c32p-81f, 0x1.821c26p-37f,
     0x1.18a032p-122f, 0x1.be6c88p-116f, 0.0f, 0.0f, 0.0f, 0x1.4c7caap-11f,
     0x1.164adp-50f, 0.0f, 0x1.a02aa8p-90f, 0.0f, 0x1.24b566p-112f, 0x1.7bb902p-79f,
     0x1.932cd6p-1f, 0.0f, 0x1.2792bp-114f, 0.0f, 0x1.1cf35ap-19f, 0.0f,
     0x1.a60caap-82f, 0x1.140c24p-101f, 0x1.fa7768p-55f, 0.0f, 0.0f, 0x1.42bd52p-121f,
     0x1.d50384p-73f, 0x1.ef8cfcp-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ebf57cp-52f,
     0x1.d95516p-122f, 0x1.e737fp-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.070e26p-34f, 0.0f,
     0.0f, 0x1.98b426p-123f, 0x1.bb25e2p-112f, 0.0f, 0x1.2f55c4p-103f,
     0x1.97adb8p-77f, 0.0f, 0x1.344b02p-97f, 0x1.2c6a32p-119f, 0.0f, 0x1.14adecp-91f,
     0.0f, 0.0f, 0x1.72e348p-120f, 0.0f, 0.0f, 0x1.7f0dep-47f, 0x1.fe3ea8p-50f, 0.0f,
     0.0f, 0x1.3dc4fp-49f, 0.0f, 0.0f, 0.0f, 0x1.fe3ddcp-46f, 0x1.facd2ap-3f, 0.0f,
     0x1.0287p-90f, 0x1.9ac0d4p-22f, 0x1.60e47ep-49f, 0x1.fe40fap-115f, 0.0f, 0.0f,
     0x1.573c56p-89f, 0x1.860b4ep-88f, 0x1.e76264p-83f, 0.0f, 0.0f, 0.0f,
     0x1.e8b92p-58f, 0x1.293adp-126f, 0.0f, 0x1.c9866cp-73f, 0.0f, 0.0f, 0.0f,
     0x1.bd78d2p-72f, 0x1.912e8ep-125f, 0x1.d27e2ep-45f, 0x1.130d8ep-73f, 0.0f, 0.0f,
     0x1.acc6d2p-59f, 0.0f, 0.0f, 0.0f, 0x1.c0f904p-1f, 0.0f, 0.0f, 0.0f,
     0x1.4c2ca2p-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.330faep-97f, 0.0f,
     0x1.54da0ep-89f, 0.0f, 0x1.77476ap-14f, 0x1.840766p-6f, 0.0f, 0x1.534994p-118f,
     0.0f, 0x1.d9b9fp-118f, 0.0f, 0.0f, 0x1.feb02p-122f, 0.0f, 0.0f, 0x1.6b16bap-25f,
     0x1.362558p-59f, 0.0f, 0.0f, 0x1.106ea4p-20f, 0.0f, 0.0f, 0.0f, 0x1.bb9a7cp-35f,
     0x1.1febd2p-120f, 0.0f, 0.0f, 0.0f, 0x1.fa8482p-98f, 0.0f, 0x1.18ff56p-107f,
     0x1.4c9948p-73f, 0x1.dfc594p-65f, 0x1.1726dcp-70f, 0.0f, 0x1.0545a2p-121f,
     0x1.850f1ap-54f, 0.0f, 0.0f, 0x1.4a2712p-34f, 0.0f, 0x1.df4b7p-41f, 0.0f, 0.0f,
     0x1.989f9ap-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8fa706p-17f, 0.0f, 0.0f,
     0x1.99c27cp-86f, 0.0f, 0.0f, 0x1.990fc6p-27f, 0.0f, 0x1.400a72p-117f,
     0x1.9ac5f6p-38f, 0x1.6ff9b2p-20f, 0.0f, 0x1.a19cfap-78f, 0x1.e9befcp-78f,
     0x1.2548c4p-103f, 0.0f, 0x1.8d76b2p-114f, 0.0f, 0.0f, 0.0f, 0x1.bf3cfap-35f,
     0x1.757bfap-2f, 0x1.ee05b4p-88f, 0x1.bb7c7ap-41f, 0x1.73547ap-39f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f87f4cp-39f, 0x1.de0a34p-62f, 0.0f, 0x1.416394p-17f,
     0x1.7463aap-122f, 0x1.8cfc3cp-6f, 0.0f, 0x1.3cb77p-27f, 0x1.f1bfeap-2f,
     0x1.43b47cp-18f, 0x1.32cbe2p-112f, 0.0f, 0.0f, 0x1.0a1664p-69f, 0x1.bd3c4cp-49f,
     0x1.5a5534p-113f, 0.0f, 0.0f, 0x1.26983cp-107f, 0.0f, 0x1.4307bcp-49f, 0.0f,
     0x1.ca16ep-25f, 0x1.78e81p-56f, 0x1.09d284p-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.96b452p-9f, 0x1.464a2cp-120f, 0x1.3105d6p-25f, 0x1.0ecde6p-115f,
     0x1.d8a8b4p-48f, 0x1.619806p-6f, 0.0f, 0x1.6eeaeap-92f, 0x1.0ffb48p-80f, 0.0f,
     0.0f, 0x1.4bbbfep-10f, 0x1.a654a6p-47f, 0x1.acf64ep-74f, 0x1.eaa2a2p-68f, 0.0f,
     0x1.8a0f0ep-75f, 0x1.550d1ap-53f, 0x1.7ab8e2p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cf2cb8p-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c800e8p-96f,
     0x1.3c7b36p-41f, 0.0f, 0x1.762352p-109f, 0x1.656e1p-78f, 0x1.0e4efep-118f, 0.0f,
     0.0f, 0x1.e25fb8p-113f, 0.0f, 0x1.e8cb8p-78f, 0x1.a563f8p-88f, 0x1.ced77ep-116f,
     0.0f, 0x1.a6c7fap-6f, 0x1.3f3544p-54f, 0x1.db3a4p-88f, 0.0f, 0.0f,
     0x1.855128p-10f, 0x1.d2c112p-48f, 0x1.0ae1eep-49f, 0.0f, 0x1.208ebp-65f,
     0x1.1f39a4p-34f, 0x1.31d232p-120f, 0.0f, 0x1.c587cep-60f, 0x1.cfd496p-108f,
     0x1.abd7dp-13f, 0.0f, 0.0f, 0.0f, 0x1.c9ce58p-45f, 0x1.544c94p-111f, 0.0f, 0.0f,
     0x1.2e0be2p-104f, 0x1.c282dep-29f, 0x1.c4e8cap-18f, 0x1.7ee2cep-126f,
     0x1.6ea19ap-39f, 0x1.241fbap-83f, 0.0f, 0x1.b84f6p-69f, 0x1.4827b2p-125f, 0.0f,
     0x1.8bfd6p-6f, 0.0f, 0x1.1047e2p-80f, 0.0f, 0x1.639e92p-87f, 0.0f,
     0x1.c1ec98p-32f, 0.0f, 0.0f, 0x1.58c154p-119f, 0.0f, 0x1.fca62p-96f,
     0x1.82f764p-65f, 0.0f, 0.0f, 0x1.de070ep-74f, 0x1.f30482p-100f, 0.0f, 0.0f,
     0x1.5c79ccp-15f, 0x1p0f, 0.0f, 0.0f, 0x1.83e886p-100f, 0.0f, 0x1.3e6882p-23f,
     0x1.edbcf8p-29f, 0x1.8976p-1f, 0.0f, 0.0f, 0x1.5d9e2ep-56f, 0.0f,
     0x1.0ed4eap-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.47c5d8p-45f, 0x1.33cc54p-37f,
     0.0f, 0x1.3b34fep-101f, 0x1.a11024p-100f, 0x1.b4146ep-30f, 0.0f, 0x1.093ecp-58f,
     0.0f, 0.0f, 0x1.34db7p-120f, 0.0f, 0x1.17e07ap-80f, 0x1.59a09ap-78f,
     0x1.afbfb2p-36f, 0x1.bfc758p-34f, 0x1.c6a36ap-18f, 0x1.7a4b2ap-1f, 0.0f,
     0x1.325ecap-123f, 0x1.c1fc32p-25f, 0x1.d02f7ap-47f, 0.0f, 0.0f, 0.0f,
     0x1.e198fcp-114f, 0.0f, 0x1.0fbbdcp-103f, 0x1.21139p-125f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.cdc9e2p-27f, 0x1.56890cp-97f, 0.0f, 0.0f, 0.0f, 0x1.2d564ep-74f,
     0.0f, 0.0f, 0x1.baa2acp-13f, 0x1.d3ce42p-50f, 0x1.700b2ep-118f, 0x1.e7b676p-51f,
     0x1.bb7886p-35f, 0.0f, 0.0f, 0.0f, 0x1.d7f746p-61f, 0x1.dcfa1p-47f,
     0x1.4c9fe6p-96f, 0x1.cdfd9ep-111f, 0x1.c43b68p-40f, 0.0f, 0.0f, 0x1.fac11ap-85f,
     0x1.b332e8p-122f, 0x1.38e306p-95f, 0x1.7dd22p-42f, 0x1.3edc2cp-108f, 0.0f,
     0x1.c67faap-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.98134p-38f,
     0x1.ca812cp-101f, 0x1.6ed0ep-106f, 0x1.93edfap-87f, 0x1.09c274p-74f,
     0x1.7e9876p-121f, 0x1.41f21ap-114f, 0x1.7f7ffp-43f, 0x1.da78p-41f,
     0x1.a65242p-100f, 0x1.9623eap-119f, 0x1.1684e8p-39f, 0.0f, 0x1.903964p-13f, 0.0f,
     0.0f, 0.0f, 0x1.068c04p-56f, 0.0f, 0x1.fe8adap-122f, 0x1p0f, 0.0f, 0.0f,
     0x1.0718dep-30f, 0.0f, 0x1.d1d8bp-62f, 0.0f, 0.0f, 0x1.955226p-8f, 0.0f,
     0x1.c93d1ep-90f, 0x1.1bcc58p-109f, 0x1.980dcap-29f, 0.0f, 0.0f, 0.0f,
     0x1.6d9738p-72f, 0x1.9639d4p-1f, 0x1.de2176p-116f, 0x1.01ec82p-51f, 0.0f,
     0x1.092f9ap-64f, 0x1.56d26ap-118f, 0.0f, 0x1.96ba3p-6f, 0x1.58e2aep-82f,
     0x1.38b4fep-42f, 0.0f, 0.0f, 0x1.33a9e8p-119f, 0x1.720342p-118f, 0x1.97ff2p-17f,
     0x1.6ce01cp-65f, 0.0f, 0.0f, 0.0f, 0x1.961e82p-118f, 0.0f, 0x1.4f69e6p-25f, 0.0f,
     0x1.d5525p-111f, 0x1.9d8cd6p-101f, 0.0f, 0x1.f0de54p-113f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.989a38p-125f, 0.0f, 0.0f, 0x1.91a354p-11f, 0.0f, 0.0f, 0x1.e61484p-15f,
     0.0f, 0.0f, 0.0f, 0x1.a5ad4ep-35f, 0x1.cfa084p-90f, 0.0f, 0.0f, 0x1.4923ccp-76f,
     0.0f, 0x1.f10eb6p-100f, 0.0f, 0x1.bf333ep-80f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1e61b6p-1f, 0.0f, 0.0f, 0x1.b12afcp-124f, 0x1.bd72ap-115f, 0x1.793b4ap-110f,
     0x1.e53936p-32f, 0.0f, 0x1.c5aacp-23f, 0x1.2c4248p-81f, 0.0f, 0.0f,
     0x1.4b9014p-116f, 0.0f, 0x1.f7d2b4p-61f, 0x1.56d84cp-16f, 0x1.d4a1e8p-120f, 0.0f,
     0.0f, 0.0f, 0x1.03091p-16f, 0x1.289b86p-64f, 0x1.c80c18p-18f, 0x1.4823f6p-60f,
     0x1.da8754p-80f, 0x1.77da9p-77f, 0x1.3dd168p-108f, 0x1.2db89ap-34f, 0.0f,
     0x1.4249d2p-83f, 0.0f, 0x1.4bb322p-109f, 0x1.259fe4p-90f, 0x1.36e7d6p-44f,
     0x1.93e956p-56f, 0.0f, 0x1.7887fap-52f, 0x1.087bcp-106f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.18ea3ep-29f, 0x1.c30912p-125f, 0x1.8c05a4p-57f, 0.0f, 0.0f,
     0x1.d83e2cp-22f, 0.0f, 0x1.8d9896p-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dff2c8p-30f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e6d49ep-21f, 0x1.ca4648p-30f, 0.0f, 0x1.49ee22p-103f,
     0x1.aa0fa2p-60f, 0.0f, 0.0f, 0x1.fa5f7ap-105f, 0.0f, 0x1.bbf4a6p-124f,
     0x1.f87d52p-99f, 0.0f, 0x1.e128f8p-104f, 0x1.66614ep-7f, 0.0f, 0x1.4f5b16p-12f,
     0x1.46b72p-37f, 0.0f, 0.0f, 0x1.0a8e68p-98f, 0x1.cb8f86p-31f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f12824p-26f, 0.0f, 0.0f, 0x1.9de836p-62f, 0.0f, 0.0f,
     0x1.d8a4d8p-36f, 0x1.9801e2p-78f, 0x1.5c82f8p-61f, 0x1.cfe716p-12f,
     0x1.8e2e7ap-26f, 0.0f, 0x1.afacdap-103f, 0.0f, 0x1.cf526ep-17f, 0.0f, 0.0f,
     0x1.2a4f2ep-63f, 0x1.a75fa6p-40f, 0x1.ecafc6p-119f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cee69p-10f, 0x1.46888ep-82f, 0x1.aff88ap-8f, 0x1.e03d8ap-10f, 0x1.53e83p-45f,
     0.0f, 0x1.6cdcdep-37f, 0.0f, 0.0f, 0.0f, 0x1.c401a6p-15f, 0.0f, 0.0f, 0.0f,
     0x1.a25734p-122f, 0x1.0b181ep-22f, 0x1.bdceap-41f, 0x1.510322p-7f,
     0x1.78eb76p-38f, 0.0f, 0x1.02383cp-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6e1114p-82f,
     0.0f, 0x1.83d896p-62f, 0.0f, 0.0f, 0.0f, 0x1.42bd3p-9f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b005b2p-68f, 0x1.de8886p-37f, 0.0f, 0x1.4de97cp-55f, 0.0f, 0.0f,
     0x1.afd92ap-114f, 0x1.cad90ep-9f, 0.0f, 0x1.db810ap-2f, 0x1.9b305cp-27f,
     0x1.3a32f8p-35f, 0.0f, 0x1.02bd1cp-103f, 0.0f, 0.0f, 0.0f, 0x1.82adbep-13f,
     0x1.37cc8ap-14f, 0.0f, 0x1.b0e57p-51f, 0.0f, 0.0f, 0x1.42d764p-94f, 0.0f,
     0x1.5481a6p-88f, 0.0f, 0x1.f2b10ep-74f, 0.0f, 0.0f, 0x1.fa99b4p-45f, 0.0f,
     0x1.a05ceap-116f, 0x1.368046p-79f, 0x1.d238p-116f, 0x1.fdec06p-14f,
     0x1.46bb6p-95f, 0x1.820152p-8f, 0x1.7eb3fcp-30f, 0x1.e8b514p-40f, 0x1.c7792p-4f,
     0.0f, 0.0f, 0x1.2388ecp-20f, 0x1.cbadcap-2f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8dce3ep-114f, 0x1.1b82a2p-52f, 0.0f, 0x1.d064a8p-119f, 0.0f, 0x1.139414p-30f,
     0x1.1e71ep-51f, 0.0f, 0x1.84117p-8f, 0x1.114c32p-91f, 0x1.fc5b2ep-29f, 0.0f,
     0.0f, 0.0f, 0x1.294a7ep-126f, 0x1.b607aap-56f, 0.0f, 0.0f, 0x1.004ab8p-102f,
     0.0f, 0.0f, 0.0f, 0x1.b9e068p-124f, 0x1.579894p-28f, 0x1.5d22e2p-31f,
     0x1.fbf8dap-124f, 0.0f, 0.0f, 0x1.5c27bap-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e56ce2p-101f, 0.0f, 0x1.558e82p-56f, 0x1.59c50ep-25f,
     0x1.60b26p-88f, 0x1.d25c58p-1f, 0x1.21bf7cp-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.2ab7b4p-4f, 0x1.260e46p-100f, 0.0f, 0x1.483fe4p-123f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.87e2a4p-31f, 0x1.72076ep-75f, 0x1.6a456cp-89f,
     0.0f, 0x1.8b7484p-8f, 0x1.ee577ep-21f, 0x1.1cd352p-17f, 0x1.9c1206p-126f,
     0x1.ca4b4cp-38f, 0.0f, 0x1.cf5396p-56f, 0x1.fae89cp-120f, 0x1.435138p-12f, 0.0f,
     0x1.1d655cp-113f, 0.0f, 0.0f, 0x1.028ba4p-60f, 0.0f, 0.0f, 0x1.9435dp-36f, 0.0f,
     0.0f, 0x1.081a98p-63f, 0x1.4a6962p-81f, 0x1.cdf496p-121f, 0.0f, 0.0f, 0.0f,
     0x1.14bb38p-66f, 0x1.b9f764p-5f, 0.0f, 0.0f, 0x1.ea1058p-18f, 0x1.f715f6p-51f,
     0.0f, 0x1.74dbfp-70f, 0x1.cf958ep-104f, 0.0f, 0x1.991efep-64f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.644a3ap-80f, 0.0f, 0.0f, 0x1.b70762p-64f, 0.0f, 0x1.91806cp-8f,
     0x1.e0e268p-120f, 0x1.907e04p-103f, 0.0f, 0.0f, 0.0f, 0x1.07231ap-119f, 0.0f,
     0.0f, 0x1.f36dbp-83f, 0x1.ebf67cp-81f, 0x1.394404p-111f
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
            tmp1 = Sleef_finz_sincosf1_u35purecfma(tmp0);
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
    printf("Sleef_finz_sincosf1_u35purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_sincosf1_u35purecfma bench acc {.x=%a, .y=%a}\n", global_bench_acc.x, global_bench_acc.y );
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
