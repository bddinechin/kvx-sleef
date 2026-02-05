/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_logf1_u35purecfma.c --function \
 *     Sleef_finz_logf1_u35purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --bench --no-embedded-bin --target x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <xmmintrin.h>
#include <stdio.h>
#include <inttypes.h>


volatile float external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0.0f, 0x1.37e576p-78f, 0x1.463132p-79f, 0.0f, 0x1.3fbe96p-12f, 0.0f,
     0x1.77fa4ep-83f, 0.0f, 0.0f, 0x1.1f3784p-109f, 0x1.ceac86p-112f, 0x1.3a9242p-93f,
     0.0f, 0.0f, 0x1.1e65bap-26f, 0x1.4944d8p-93f, 0x1.083cc6p-65f, 0.0f,
     0x1.f9e2ecp-40f, 0x1.b3116p-36f, 0.0f, 0x1.fca64cp-68f, 0x1.898328p-17f,
     0x1.35f418p-28f, 0x1.62b22ep-58f, 0x1.bcee2cp-112f, 0x1.6df7dp-116f,
     0x1.ac1bccp-114f, 0.0f, 0x1.a5ddc4p-7f, 0x1.6ae642p-29f, 0x1.2b6294p-45f,
     0x1.48c82ap-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.166806p-52f, 0.0f, 0.0f,
     0x1.db48a8p-71f, 0x1.8d3a18p-17f, 0x1.e4b424p-42f, 0.0f, 0x1.538656p-59f, 0.0f,
     0x1.7ffde2p-117f, 0x1.a6caeap-49f, 0x1.ca4526p-57f, 0.0f, 0.0f, 0.0f,
     0x1.d55d1ap-95f, 0x1.dcd7f6p-21f, 0.0f, 0.0f, 0x1.327bf4p-15f, 0.0f, 0.0f,
     0x1.46846cp-56f, 0x1.6b1372p-14f, 0x1.4860d8p-63f, 0.0f, 0.0f, 0x1.d3144ep-123f,
     0.0f, 0x1.465b16p-114f, 0x1.f8a37ep-3f, 0.0f, 0x1.1fb412p-58f, 0.0f,
     0x1.25fd44p-83f, 0x1.3beabp-84f, 0.0f, 0x1.be4732p-71f, 0.0f, 0.0f,
     0x1.94485ep-126f, 0x1.3acfbcp-104f, 0x1.79e7aap-103f, 0.0f, 0.0f,
     0x1.be4c3cp-27f, 0.0f, 0.0f, 0.0f, 0x1.0f4482p-112f, 0x1.daf08p-1f, 0.0f,
     0x1.fddf88p-70f, 0.0f, 0x1.ba2feep-4f, 0x1.40dd8p-83f, 0.0f, 0x1.4c6794p-92f,
     0x1.3ed78p-18f, 0.0f, 0.0f, 0.0f, 0x1.eebdb6p-47f, 0.0f, 0.0f, 0x1.425452p-76f,
     0x1.174402p-27f, 0.0f, 0x1.e25ac8p-91f, 0.0f, 0.0f, 0x1.d5e974p-93f,
     0x1.c9b6ap-1f, 0x1.21eea8p-7f, 0x1.93dcd4p-64f, 0.0f, 0x1.6520f8p-116f,
     0x1.422634p-82f, 0.0f, 0x1.b71eaap-25f, 0x1.5e85acp-62f, 0.0f, 0x1.51cf72p-18f,
     0x1.786fap-99f, 0x1.5164eep-37f, 0x1.31631ep-17f, 0x1.58cf18p-106f,
     0x1.9ccce6p-44f, 0.0f, 0x1.a9b032p-23f, 0.0f, 0x1.0f15acp-46f, 0x1.ab3ec8p-91f,
     0x1.165254p-121f, 0.0f, 0x1.65d642p-83f, 0.0f, 0.0f, 0x1.48ccp-75f,
     0x1.8906e2p-56f, 0x1.e6077cp-25f, 0x1.1e5b8cp-98f, 0.0f, 0x1.700a08p-44f,
     0x1.f8c5a4p-96f, 0.0f, 0x1.e17e32p-40f, 0.0f, 0x1.3c861ep-58f, 0x1.5a461p-112f,
     0.0f, 0.0f, 0x1.0729a4p-53f, 0.0f, 0x1.c586f6p-75f, 0x1.123414p-116f,
     0x1.8ab4a2p-82f, 0x1.1ec6ecp-55f, 0x1.636e4ap-94f, 0x1.0958fap-11f,
     0x1.8916fep-25f, 0x1.e961ap-41f, 0.0f, 0x1.5139aap-39f, 0x1.ac7d66p-23f, 0.0f,
     0x1.b7a1d4p-37f, 0x1p0f, 0.0f, 0x1.0242c2p-3f, 0.0f, 0.0f, 0x1.5ac538p-103f,
     0.0f, 0x1.e49b98p-117f, 0x1.8bc3cap-87f, 0x1.5ba37ep-12f, 0.0f, 0x1.e9b64ep-97f,
     0x1.548e44p-83f, 0.0f, 0.0f, 0x1.0a5c8p-109f, 0x1.315d7cp-59f, 0.0f, 0.0f,
     0x1.03d33ep-6f, 0.0f, 0.0f, 0x1.3b67bep-6f, 0.0f, 0x1.775112p-63f,
     0x1.b6ab56p-55f, 0.0f, 0x1.a76342p-60f, 0x1.b24218p-16f, 0x1.74589p-45f, 0.0f,
     0.0f, 0x1.24b6d6p-74f, 0.0f, 0x1.546662p-12f, 0.0f, 0x1.98fc68p-85f,
     0x1.59135ap-55f, 0.0f, 0x1.e4cb86p-118f, 0x1.21846cp-92f, 0x1.8180acp-25f, 0.0f,
     0.0f, 0x1.b267d6p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1ea7d8p-85f, 0.0f,
     0x1.ceee5ap-96f, 0x1.8dfffap-3f, 0.0f, 0.0f, 0x1.c6b48p-92f, 0.0f,
     0x1.9ad47ap-47f, 0.0f, 0x1.2eed82p-58f, 0.0f, 0x1.323a12p-30f, 0x1.9005a6p-4f,
     0x1.a9c314p-32f, 0x1.363d6p-104f, 0x1.11356cp-92f, 0x1.f3c7e4p-67f, 0.0f,
     0x1.76399p-54f, 0x1.0155e4p-49f, 0.0f, 0x1.252faep-113f, 0.0f, 0x1.89e144p-71f,
     0.0f, 0x1.205b2cp-47f, 0.0f, 0x1.b977cp-87f, 0.0f, 0x1.052d52p-61f, 0.0f,
     0x1.9685c4p-38f, 0x1.50707p-116f, 0x1.68754cp-40f, 0x1.bfcbe4p-88f, 0.0f,
     0x1.c8a1b8p-104f, 0x1.478f4ap-110f, 0.0f, 0x1.ca4784p-75f, 0.0f, 0.0f,
     0x1.a33588p-58f, 0x1.340a0ep-87f, 0.0f, 0.0f, 0x1.26891ep-97f, 0x1.0e260cp-91f,
     0.0f, 0x1.628e52p-72f, 0.0f, 0.0f, 0.0f, 0x1.b75ebcp-79f, 0x1.a433c4p-14f, 0.0f,
     0.0f, 0.0f, 0x1.bd855ep-57f, 0.0f, 0.0f, 0x1.128fd8p-90f, 0x1.01f77cp-31f, 0.0f,
     0x1.4f1f2cp-40f, 0.0f, 0x1.78f56ap-50f, 0.0f, 0x1.b31eeep-2f, 0.0f, 0.0f,
     0x1.b5a5aap-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d87d18p-26f, 0.0f,
     0x1.05b93cp-106f, 0x1.db4eacp-108f, 0x1.cdc9d4p-15f, 0.0f, 0.0f, 0x1.0086f4p-77f,
     0.0f, 0x1.6ab44ep-25f, 0.0f, 0.0f, 0.0f, 0x1.7ab706p-95f, 0x1.a44ac8p-41f,
     0x1.28bbdcp-111f, 0x1.4ba166p-43f, 0.0f, 0.0f, 0x1.0ec07p-80f, 0x1.f62e2ap-54f,
     0.0f, 0x1.60d09p-37f, 0.0f, 0x1.c1bd72p-4f, 0x1.2e9458p-103f, 0x1.bc47cep-54f,
     0x1.fb9c26p-83f, 0x1.0e163p-68f, 0.0f, 0x1.52ac08p-47f, 0.0f, 0.0f, 0.0f,
     0x1.364312p-73f, 0x1.c1e49cp-89f, 0x1.b4dae2p-108f, 0x1.9424e6p-43f, 0.0f, 0.0f,
     0x1.e46362p-103f, 0x1.251ddp-78f, 0x1.87d318p-27f, 0.0f, 0.0f, 0x1.75c3b4p-75f,
     0.0f, 0x1.fb9bp-56f, 0.0f, 0x1.b38d3p-115f, 0.0f, 0x1.b4ab2cp-24f,
     0x1.3f72acp-113f, 0.0f, 0x1.8b3f86p-38f, 0.0f, 0.0f, 0.0f, 0x1.f90d4cp-84f, 0.0f,
     0.0f, 0x1.dc7454p-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e2a328p-126f,
     0x1.83c20ap-32f, 0x1.77aaaep-41f, 0x1.14ee94p-99f, 0.0f, 0x1.32554ep-49f, 0.0f,
     0x1.869abep-113f, 0.0f, 0x1.0ae178p-104f, 0.0f, 0.0f, 0x1.9c0f9ap-21f, 0.0f,
     0x1.735422p-72f, 0x1.5257a4p-55f, 0x1.938e86p-25f, 0x1.136366p-32f,
     0x1.a1f432p-59f, 0.0f, 0x1.54a47cp-45f, 0x1.1befp-70f, 0.0f, 0x1.baa294p-68f,
     0x1.2e5b12p-68f, 0x1.a7dfaap-112f, 0.0f, 0.0f, 0x1.159bbp-55f, 0.0f, 0.0f, 0.0f,
     0x1.71bc0cp-45f, 0x1.4b7812p-25f, 0.0f, 0x1.f3e968p-61f, 0x1.51a3dap-44f,
     0x1.04af76p-6f, 0.0f, 0x1.bb8634p-39f, 0.0f, 0.0f, 0.0f, 0x1.c603e6p-80f,
     0x1.22c1aap-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dbaf68p-41f, 0.0f, 0.0f,
     0x1.f1d2e8p-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f78eb8p-68f, 0x1.b1ee3ap-98f,
     0x1.a3665ep-104f, 0x1.2d8ee6p-38f, 0.0f, 0.0f, 0.0f, 0x1.136b26p-55f,
     0x1.4b003ep-63f, 0.0f, 0.0f, 0x1.fac656p-88f, 0.0f, 0.0f, 0x1.307e14p-87f,
     0x1.cdbe3ep-103f, 0x1.ebbaf2p-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.33a79cp-48f,
     0.0f, 0x1.bda15ap-59f, 0x1.715eacp-9f, 0.0f, 0x1.3692f4p-1f, 0.0f,
     0x1.a12cacp-13f, 0x1.545256p-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.97342ep-34f, 0.0f, 0.0f, 0.0f, 0x1.0646ccp-10f, 0x1.e885c8p-109f,
     0x1.ddfb42p-55f, 0.0f, 0x1.1b6a02p-86f, 0.0f, 0x1.797a62p-29f, 0.0f,
     0x1.df6b2p-114f, 0x1.380792p-24f, 0.0f, 0x1.0981f8p-107f, 0.0f, 0.0f,
     0x1.602d2ap-126f, 0x1.792168p-88f, 0.0f, 0x1.6a4192p-113f, 0.0f, 0.0f,
     0x1.c25842p-87f, 0x1.003f3cp-85f, 0.0f, 0x1.4bc094p-43f, 0.0f, 0x1p0f,
     0x1.1b203cp-121f, 0x1.522e6ap-48f, 0x1.5970acp-111f, 0.0f, 0.0f, 0x1.084b38p-11f,
     0x1.66ac62p-65f, 0x1.2e172p-8f, 0x1.cd8b92p-113f, 0x1.94a4bcp-78f,
     0x1.1b07d4p-33f, 0x1.c37a88p-66f, 0x1.6660aap-103f, 0.0f, 0x1.151fecp-24f, 0.0f,
     0x1.9983eep-33f, 0.0f, 0.0f, 0x1.7d3f6ap-82f, 0x1.e0b724p-125f, 0x1.ce6df4p-4f,
     0.0f, 0.0f, 0x1.35d94ap-19f, 0x1p0f, 0x1.0bd68p-85f, 0.0f, 0.0f, 0.0f,
     0x1.c4cc9ap-64f, 0x1.f96a12p-37f, 0x1.f94de6p-99f, 0.0f, 0x1.bbaf06p-115f, 0.0f,
     0.0f, 0.0f, 0x1.d934fap-7f, 0.0f, 0.0f, 0x1.f3ee8ap-56f, 0.0f, 0.0f,
     0x1.fb82a2p-76f, 0.0f, 0.0f, 0x1.6cc0aap-60f, 0x1.0c9dd2p-30f, 0x1.f0f396p-55f,
     0x1.8f6b0ep-83f, 0x1.4e7b5ap-105f, 0.0f, 0x1.a5dc8ep-84f, 0.0f, 0x1.c9625ap-120f,
     0x1.837b52p-32f, 0.0f, 0x1.6ce26p-98f, 0x1.e5ae5ap-79f, 0.0f, 0x1.7ac38ap-52f,
     0.0f, 0x1.11fc3cp-100f, 0.0f, 0.0f, 0.0f, 0x1.c736ccp-113f, 0.0f, 0.0f, 0.0f,
     0x1.7bfa6p-9f, 0.0f, 0x1p0f, 0.0f, 0x1.6af18cp-84f, 0x1.ac8516p-108f,
     0x1.8a771ap-76f, 0.0f, 0x1.ff90eap-73f, 0.0f, 0.0f, 0x1.6779bcp-88f, 0.0f,
     0x1.d5da72p-32f, 0x1.eb14dep-2f, 0x1.af7552p-75f, 0.0f, 0.0f, 0.0f,
     0x1.3be0acp-72f, 0.0f, 0x1.7488fcp-89f, 0.0f, 0.0f, 0.0f, 0x1.88e452p-118f,
     0x1.391238p-102f, 0.0f, 0x1.6db908p-32f, 0x1.170a12p-3f, 0x1.1dc6dap-102f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.709166p-12f, 0x1.00cbcp-17f, 0.0f, 0x1.5c153ap-126f,
     0.0f, 0x1.70502ap-48f, 0.0f, 0x1.eebc42p-95f, 0.0f, 0x1.d963bap-53f, 0.0f,
     0x1.a75d7ap-56f, 0x1.11fafcp-93f, 0x1.95116ap-8f, 0.0f, 0x1.1e8d66p-124f, 0.0f,
     0.0f, 0x1.2b0362p-13f, 0.0f, 0.0f, 0x1.a490f2p-41f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4a257ap-38f, 0x1.550db6p-9f, 0x1.63eec8p-116f, 0.0f, 0x1.59f968p-58f,
     0x1.4e38acp-88f, 0.0f, 0x1.a79216p-76f, 0.0f, 0.0f, 0x1.1ebbd2p-50f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.169362p-101f, 0x1.46a1a2p-6f, 0.0f, 0x1.b75b16p-2f,
     0x1.bc20cap-93f, 0x1.14dfa6p-102f, 0x1.2963a4p-89f, 0x1.18a746p-59f, 0.0f,
     0x1.5d2142p-1f, 0.0f, 0x1.e2e046p-108f, 0.0f, 0.0f, 0x1.faa43cp-25f,
     0x1.03347p-57f, 0.0f, 0.0f, 0x1.37ec82p-84f, 0.0f, 0x1.1ff808p-77f,
     0x1.ff586ep-76f, 0.0f, 0x1.fb2e58p-124f, 0x1.f7f61ap-84f, 0.0f, 0x1.310fep-83f,
     0x1.bdc204p-80f, 0x1.5daf06p-19f, 0x1.db332ap-40f, 0.0f, 0x1.5f213ap-61f,
     0x1.ac1a9p-116f, 0.0f, 0.0f, 0x1.9c6e64p-34f, 0.0f, 0x1.dfd70ap-24f,
     0x1.335202p-40f, 0x1.0db102p-18f, 0.0f, 0x1.f34caep-117f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.29e65p-72f, 0.0f, 0x1.6ffc3ap-41f, 0x1.e4503cp-47f, 0.0f, 0x1.6916bep-40f,
     0x1.69a882p-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.425276p-37f, 0x1.95857ap-17f, 0.0f, 0.0f, 0x1.43cbd4p-82f, 0x1.2ec788p-3f,
     0.0f, 0.0f, 0.0f, 0x1.d82154p-2f, 0.0f, 0.0f, 0x1.930cd4p-13f, 0.0f,
     0x1.e5a06cp-18f, 0.0f, 0.0f, 0.0f, 0x1.9363f6p-2f, 0.0f, 0x1.0d6ad4p-116f, 0.0f,
     0.0f, 0x1.668d22p-52f, 0x1.33af4p-94f, 0x1.f020dcp-21f, 0x1.b49ebep-28f,
     0x1.5b9d6cp-32f, 0.0f, 0.0f, 0x1.5a0c8ep-53f, 0x1.d87046p-3f, 0.0f,
     0x1.884c6p-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a8882p-52f, 0.0f, 0.0f, 0.0f, 0x1.45efbp-59f, 0x1.3cc8f2p-5f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.83fddap-2f, 0.0f, 0.0f, 0x1.1ee2b4p-68f,
     0.0f, 0x1.65f59ap-52f, 0x1.4a634ap-39f, 0x1.115dc6p-117f, 0.0f, 0x1.f80ed4p-106f,
     0.0f, 0x1.f03368p-112f, 0.0f, 0x1.5df0b8p-91f, 0.0f, 0x1.79d72cp-122f,
     0x1.aae602p-74f, 0.0f, 0.0f, 0x1.134a66p-10f, 0x1.cc16a8p-116f, 0x1.868fbap-58f,
     0x1.f77294p-22f, 0x1.c9bc78p-11f, 0x1.49e64ap-96f, 0x1.efb128p-37f,
     0x1.96fa7ap-10f, 0x1.134f44p-16f, 0.0f, 0.0f, 0.0f, 0x1.892852p-120f, 0.0f,
     0x1.b07d4p-50f, 0x1.aa4426p-76f, 0x1.5d5cd8p-53f, 0.0f, 0.0f, 0.0f,
     0x1.d62384p-73f, 0.0f, 0.0f, 0x1.2598c8p-45f, 0x1.e36ef2p-43f, 0.0f,
     0x1.ce618p-120f, 0.0f, 0x1.ff52e6p-21f, 0x1.00aa4cp-51f, 0x1.0a5f74p-29f, 0.0f,
     0x1.1c9696p-49f, 0x1.050818p-111f, 0.0f, 0.0f, 0x1p0f, 0x1.3eef5p-3f, 0.0f, 0.0f,
     0.0f, 0x1.f1c298p-75f, 0x1.fd61b4p-92f, 0.0f, 0.0f, 0x1.acd102p-86f, 0.0f, 0.0f,
     0x1.ed5426p-34f, 0x1.383c4ep-47f, 0.0f, 0.0f, 0x1.2a506ap-68f, 0x1.f9a4bap-118f,
     0.0f, 0x1.308cbcp-54f, 0x1.9bed16p-110f, 0.0f, 0x1.56d8c4p-44f, 0.0f, 0.0f,
     0x1.66078cp-26f, 0x1.945578p-52f, 0x1.949626p-85f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.833a28p-63f, 0.0f, 0x1.640cbp-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.333c36p-109f, 0.0f, 0.0f, 0x1.ffcffap-45f, 0x1.b9760ap-82f, 0x1.5edd1ap-102f,
     0x1.92a0dcp-73f, 0x1.dff718p-22f, 0x1.02afb8p-19f, 0.0f, 0x1.927b5ap-58f, 0.0f,
     0x1.259caep-38f, 0.0f, 0.0f, 0x1.601086p-35f, 0x1.c6ec68p-54f, 0x1.9c5b64p-112f,
     0.0f, 0.0f, 0x1.478234p-74f, 0x1.efc898p-69f, 0.0f, 0x1.d82332p-102f, 0.0f,
     0x1.929c12p-67f, 0.0f, 0x1.038802p-12f, 0x1.216a2ap-97f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.dee278p-32f, 0x1.6babf4p-113f, 0x1.d9aa5ap-26f, 0x1.038e5cp-104f, 0.0f,
     0x1.0a5966p-49f, 0x1.c3626cp-45f, 0.0f, 0x1.87db8ap-119f, 0x1.b9bda6p-5f,
     0x1.54239p-48f, 0.0f, 0x1.8c5462p-26f, 0.0f, 0x1.5022ap-33f, 0x1.297b4cp-63f,
     0.0f, 0.0f, 0x1.af0d84p-106f, 0.0f, 0.0f, 0x1.1a263ep-92f, 0.0f, 0x1.8199a2p-86f,
     0x1.b635b4p-19f, 0x1.2304cap-46f, 0.0f, 0.0f, 0x1.d38e66p-31f, 0x1.0f9c38p-89f,
     0.0f, 0x1.939548p-25f, 0x1.8c53e4p-102f, 0.0f, 0x1.795714p-103f, 0x1.dbb46cp-24f,
     0x1.a835ep-48f, 0.0f, 0x1.bff16ap-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.00aaf8p-33f, 0.0f, 0.0f, 0x1.a6db36p-30f, 0x1.d13c7ap-82f, 0.0f, 0.0f, 0.0f,
     0x1.86a224p-85f, 0x1.959a34p-28f, 0x1.aca4acp-83f, 0.0f, 0.0f, 0x1.ea5cbcp-50f,
     0x1.49e7b4p-53f, 0.0f, 0.0f, 0x1.873f72p-53f, 0.0f, 0x1.d1bc04p-74f, 0.0f, 0.0f,
     0x1.ebb018p-106f, 0x1.cf7d08p-108f, 0x1.e8758ap-39f, 0.0f, 0.0f, 0x1.3ace5ap-92f,
     0x1.f69d6ap-30f, 0x1.94517ap-117f, 0x1.0ad802p-14f, 0x1.b9882p-59f,
     0x1.2a031p-49f, 0x1.f98266p-60f, 0.0f, 0x1.a0f60ap-59f, 0x1.876eacp-47f, 0.0f,
     0x1.2ea8a2p-102f, 0.0f, 0.0f, 0x1.f9b89p-10f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0678b2p-122f, 0.0f, 0x1.ffd0ccp-62f, 0x1.87717ap-123f, 0.0f, 0x1.b6d908p-70f,
     0x1.8f0818p-48f, 0x1.2b97d2p-15f, 0x1.6af7eap-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b900c6p-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8c70ecp-2f, 0x1.3f4588p-118f,
     0x1.510e6ep-112f, 0.0f, 0.0f, 0.0f, 0x1.d88dfp-58f
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
    
    global_bench_acc = 0.0f;
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
        float bench_acc;
        int32_t i;
        __m128 carg;
        __m128 carg1;
        __m128 carg2;
        float tmp0;
        int32_t tmp1;

        i = INT32_C(0);
        bench_acc = 0.0f;

        for (;(i < INT32_C(1001));){
            float tmp0;
            float tmp1;
            __m128 carg;
            __m128 carg1;
            __m128 carg2;
            float tmp2;
            int32_t tmp3;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_finz_logf1_u35purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            carg = _mm_set_ss(bench_acc);
            carg1 = _mm_set_ss(tmp1);
            carg2 = _mm_add_ss(carg, carg1);
            tmp2 = _mm_cvtss_f32(carg2);
            bench_acc = tmp2;
            tmp3 = i + INT32_C(1);
            i = tmp3;
        }
        carg = _mm_set_ss(global_bench_acc);
        carg1 = _mm_set_ss(bench_acc);
        carg2 = _mm_add_ss(carg, carg1);
        tmp0 = _mm_cvtss_f32(carg2);
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
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_finz_logf1_u35purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_logf1_u35purecfma bench acc %a\n", global_bench_acc);
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
