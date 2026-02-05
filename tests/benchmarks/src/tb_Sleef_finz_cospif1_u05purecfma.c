/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_cospif1_u05purecfma.c --function \
 *     Sleef_finz_cospif1_u05purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0.0f, 0x1.2c68d4p-94f, 0x1.1a6a62p-36f, 0.0f, 0.0f, 0x1.5aeb5cp-120f,
     0x1.d006e6p-39f, 0x1.280c8cp-8f, 0x1.e5d478p-49f, 0x1.89f59cp-90f, 0x1p0f,
     0x1.bc31c2p-84f, 0x1.caa382p-108f, 0.0f, 0x1.eca574p-5f, 0x1.3693c4p-108f, 0.0f,
     0x1.0b77c2p-60f, 0.0f, 0x1.69a2e6p-55f, 0.0f, 0x1.044b94p-29f, 0x1.67a2f4p-85f,
     0.0f, 0.0f, 0x1.af931ap-85f, 0.0f, 0x1.86e31cp-37f, 0x1.97a39ap-92f, 0.0f, 0.0f,
     0x1.6168eap-44f, 0x1.ec704ep-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2affb8p-119f,
     0.0f, 0x1.afb05p-107f, 0.0f, 0.0f, 0x1.2b1f5ap-80f, 0x1.375cd2p-23f,
     0x1.95870ap-84f, 0x1.0029aap-91f, 0x1.791116p-71f, 0x1.5d1974p-42f,
     0x1.861436p-14f, 0.0f, 0.0f, 0.0f, 0x1.62a286p-84f, 0x1.ce6e54p-15f,
     0x1.95e61ap-121f, 0x1.4aba76p-75f, 0x1.b2a69p-109f, 0x1.640334p-116f,
     0x1.240078p-101f, 0.0f, 0x1.0aad5ap-26f, 0x1.287cb2p-79f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.4a9f7ep-69f, 0.0f, 0.0f, 0x1.6cec12p-47f, 0x1.dadd3cp-86f, 0.0f, 0.0f,
     0x1.8cf136p-31f, 0.0f, 0x1.ab5ed2p-37f, 0x1.4a4a5p-124f, 0.0f, 0x1.3bf59p-95f,
     0x1.093fa8p-83f, 0x1.559e7ap-76f, 0.0f, 0.0f, 0.0f, 0x1.29d832p-88f,
     0x1.bce976p-115f, 0x1.0b3b04p-23f, 0x1.16e45cp-84f, 0.0f, 0.0f, 0.0f,
     0x1.20195cp-78f, 0x1.17e5fcp-71f, 0.0f, 0x1.50dc24p-38f, 0x1.de1082p-45f, 0.0f,
     0x1.d1b228p-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7c849p-105f, 0x1.f970cep-84f,
     0x1.212bc2p-43f, 0.0f, 0x1.ae0e0ep-65f, 0x1.b9abfep-61f, 0x1.cd10b8p-94f, 0.0f,
     0.0f, 0x1.8b50aep-47f, 0x1.30fadap-79f, 0.0f, 0x1.ac2064p-82f, 0.0f,
     0x1.a409ecp-24f, 0.0f, 0.0f, 0.0f, 0x1.3116eap-25f, 0.0f, 0.0f, 0x1.1b5f64p-33f,
     0.0f, 0x1.e1954p-93f, 0.0f, 0.0f, 0x1.7cbadcp-116f, 0.0f, 0.0f, 0.0f,
     0x1.810882p-87f, 0x1.d7ea7p-118f, 0x1.09976ap-35f, 0.0f, 0x1.2e9d9cp-29f, 0.0f,
     0x1.3b6fa8p-67f, 0x1.bd96eep-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.437eb2p-118f, 0.0f, 0.0f, 0x1.d59a36p-81f, 0x1.62ffaap-101f,
     0x1.9d015cp-93f, 0x1.67394ep-15f, 0.0f, 0x1.097086p-46f, 0x1.2ed30ap-67f, 0.0f,
     0.0f, 0.0f, 0x1.a0057ep-11f, 0.0f, 0x1.cdc566p-25f, 0x1.b1ab1ep-70f,
     0x1.219b2ep-54f, 0.0f, 0x1.38f222p-77f, 0x1.30941p-28f, 0x1.b3d0e2p-73f,
     0x1.cf2ee4p-67f, 0x1.0b2e02p-44f, 0x1.c002aap-2f, 0.0f, 0.0f, 0x1.8776b2p-90f,
     0x1.03ce46p-104f, 0.0f, 0x1.db1p-119f, 0x1.bf66ap-28f, 0x1.063924p-88f, 0.0f,
     0.0f, 0x1.05f8c8p-113f, 0.0f, 0x1.a778ecp-104f, 0x1.b3cca2p-37f, 0x1.3606fp-58f,
     0.0f, 0x1.9a71bap-102f, 0x1.78298p-77f, 0x1.17e8bp-118f, 0x1.4152c2p-9f,
     0x1.e0285cp-112f, 0.0f, 0.0f, 0x1.f30c8cp-95f, 0x1.b45016p-81f, 0.0f, 0.0f,
     0x1.b322p-89f, 0x1.25d2fap-103f, 0x1.2c755ap-50f, 0.0f, 0.0f, 0.0f,
     0x1.7e0944p-57f, 0x1.ec8f96p-122f, 0.0f, 0x1.5dcc88p-104f, 0x1.f8bfd6p-69f, 0.0f,
     0.0f, 0.0f, 0x1.b4c1b6p-58f, 0x1.dbaeap-59f, 0.0f, 0x1.050a98p-93f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.13cc7ap-55f, 0x1.9d81d4p-80f,
     0x1.1e4fb6p-42f, 0x1.227c54p-126f, 0.0f, 0x1.06166ap-122f, 0x1.b36348p-36f,
     0x1.3356c4p-40f, 0x1.183cccp-115f, 0x1.6a0bap-68f, 0.0f, 0x1.4e8d82p-81f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3f9df2p-97f, 0.0f, 0x1.4bdb7ep-85f, 0x1.dd0f02p-115f,
     0.0f, 0x1.a0c8aep-48f, 0.0f, 0x1.1ae8c6p-67f, 0x1.f0634ep-123f, 0.0f, 0.0f, 0.0f,
     0x1.510ad4p-90f, 0x1.6e13a8p-46f, 0.0f, 0.0f, 0x1.028a4ap-13f, 0.0f,
     0x1.669916p-37f, 0.0f, 0.0f, 0.0f, 0x1.7d0734p-19f, 0.0f, 0x1.8a5946p-24f, 0.0f,
     0x1.506a7ep-64f, 0.0f, 0.0f, 0x1.bc913ap-28f, 0x1.07c9aap-23f, 0.0f, 0.0f, 0.0f,
     0x1.29120ep-99f, 0.0f, 0.0f, 0x1.73ef7ap-48f, 0x1.4f7bc4p-56f, 0.0f, 0.0f,
     0x1.38e992p-109f, 0.0f, 0x1.6ba5e6p-75f, 0.0f, 0x1.405b42p-76f, 0x1.2dcdd2p-30f,
     0x1.08aafap-23f, 0.0f, 0x1.d269eep-14f, 0x1.c9908ep-116f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ba211ep-86f, 0.0f, 0x1.7afbc4p-62f, 0x1.8a3b8cp-43f, 0.0f,
     0x1.ee46f6p-23f, 0x1.41d9b4p-111f, 0x1.76252cp-114f, 0.0f, 0x1.a7336ap-28f,
     0x1.81e1bep-7f, 0x1.0c509ap-42f, 0.0f, 0x1.1f58b2p-84f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.65204p-103f, 0.0f, 0x1.e58acep-55f, 0.0f, 0x1.25484ap-37f, 0.0f,
     0x1.fd700ep-8f, 0.0f, 0x1.abc2b8p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3f46dcp-123f,
     0.0f, 0x1.504066p-75f, 0x1.4737eep-16f, 0x1.7723b4p-11f, 0.0f, 0.0f,
     0x1.8e326cp-19f, 0.0f, 0.0f, 0x1.14d61p-58f, 0.0f, 0.0f, 0x1.95504cp-84f, 0.0f,
     0x1.703b1ap-55f, 0.0f, 0x1.976cep-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.989a06p-29f, 0.0f, 0x1.d3c62p-1f, 0x1.1f8db8p-105f, 0.0f, 0.0f,
     0x1.5ecbeep-45f, 0.0f, 0.0f, 0x1.1399ccp-35f, 0x1.79b732p-86f, 0x1.c3f7e8p-119f,
     0.0f, 0x1.dacfd2p-103f, 0x1.c405dcp-62f, 0x1.968b4p-53f, 0x1.2c46fp-61f,
     0x1.9a9604p-90f, 0.0f, 0.0f, 0x1.1f95eep-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.1b7f7cp-125f, 0.0f, 0x1.4dc444p-77f, 0x1.1e3ae4p-56f, 0.0f, 0.0f, 0.0f,
     0x1.ef0e14p-50f, 0.0f, 0x1.45cf8cp-79f, 0.0f, 0x1.a2c1cp-16f, 0.0f, 0.0f, 0.0f,
     0x1.5882b6p-85f, 0x1.3095ep-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.80114cp-109f,
     0x1.57ed4ep-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cab18cp-100f, 0x1.60ca06p-10f,
     0x1.fd294p-45f, 0x1.a77a66p-1f, 0.0f, 0.0f, 0x1.63b5d6p-20f, 0.0f, 0.0f,
     0x1.58fea2p-44f, 0x1.4bfcfap-23f, 0.0f, 0x1.78f50ep-37f, 0.0f, 0x1.771c0ap-110f,
     0.0f, 0.0f, 0x1.4487bcp-83f, 0.0f, 0x1.4caa84p-22f, 0.0f, 0.0f, 0x1.505954p-54f,
     0.0f, 0x1.6fe90ep-23f, 0.0f, 0.0f, 0x1.63b704p-65f, 0.0f, 0x1.cd5cf2p-92f,
     0x1.c3f708p-42f, 0.0f, 0.0f, 0.0f, 0x1.9cbc0ap-51f, 0x1.b8b796p-80f, 0.0f,
     0x1.de9326p-58f, 0x1.9bf5fcp-90f, 0.0f, 0.0f, 0x1.3ac936p-37f, 0x1.576d4ap-8f,
     0x1.49fc76p-126f, 0x1.3cc77p-110f, 0.0f, 0.0f, 0.0f, 0x1.57750ep-2f, 0.0f, 0.0f,
     0x1.0fee9ep-23f, 0.0f, 0x1.b6c198p-105f, 0.0f, 0x1.cfc836p-25f, 0x1.41a978p-49f,
     0.0f, 0x1.468d3ap-51f, 0x1.c9a878p-57f, 0.0f, 0.0f, 0.0f, 0x1.81e524p-70f,
     0x1.b3bd3ep-8f, 0x1.32bf2ep-83f, 0.0f, 0x1.8d076p-15f, 0x1.fd6e12p-29f,
     0x1.5146a2p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bcb85cp-17f, 0x1.2fe28ap-86f, 0.0f,
     0x1.fe238p-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f2b712p-108f, 0.0f, 0.0f, 0.0f,
     0x1.c45282p-38f, 0.0f, 0.0f, 0x1.9b5212p-23f, 0x1.b314b8p-104f, 0.0f,
     0x1.ef898ap-75f, 0x1.39d7cep-36f, 0.0f, 0.0f, 0x1.b776cap-95f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.3e23p-114f, 0.0f, 0x1.78fb7ap-101f, 0.0f, 0.0f, 0x1.c75e9cp-101f,
     0.0f, 0x1.548758p-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bb26fep-66f,
     0.0f, 0.0f, 0x1.d273ap-83f, 0x1.6cb3c4p-73f, 0x1.022332p-106f, 0x1.12d7eap-75f,
     0x1.af47acp-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6d9ff4p-70f, 0.0f, 0x1.945746p-35f,
     0.0f, 0.0f, 0.0f, 0x1.84db66p-88f, 0.0f, 0x1.27793p-87f, 0.0f, 0.0f,
     0x1.8f7d68p-124f, 0x1.aa1bd8p-67f, 0x1.17fa1p-51f, 0x1.32a024p-71f,
     0x1.8bbf24p-96f, 0.0f, 0x1.b4720ep-86f, 0x1.c39b14p-75f, 0.0f, 0.0f,
     0x1.9b0824p-113f, 0.0f, 0.0f, 0x1.2fff92p-17f, 0.0f, 0x1.9b1742p-111f,
     0x1.9b7ec6p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eb050ap-35f, 0x1.03160ap-110f,
     0.0f, 0x1.23686ap-23f, 0x1.2a3a82p-80f, 0x1.a12fb2p-22f, 0x1.a5c9bep-80f, 0.0f,
     0x1.8f6baep-9f, 0x1.bc5faap-85f, 0x1.d8c0bcp-109f, 0.0f, 0x1.88f39cp-97f, 0.0f,
     0x1.e975dcp-80f, 0.0f, 0x1.403004p-38f, 0.0f, 0.0f, 0x1.d976e6p-25f, 0.0f,
     0x1.5fa0bap-60f, 0x1.7d395p-22f, 0.0f, 0x1.f5cdd4p-40f, 0x1.fb74dcp-46f,
     0x1.afdba2p-93f, 0x1.c38c68p-89f, 0x1.555444p-85f, 0x1.abc25ep-52f, 0.0f, 0.0f,
     0x1.c7dc2ep-47f, 0.0f, 0x1.91e2c4p-41f, 0x1.75f0b2p-102f, 0x1.4e4554p-102f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d13d6ep-28f, 0.0f, 0x1.756c94p-121f,
     0x1.5399b4p-121f, 0x1.1adac2p-118f, 0x1.1b4dd6p-82f, 0.0f, 0.0f, 0x1.d4169cp-92f,
     0x1.7cfa18p-84f, 0.0f, 0x1.dee162p-38f, 0.0f, 0x1.5856bcp-72f, 0.0f,
     0x1.0aaed4p-59f, 0.0f, 0x1p0f, 0x1.063776p-39f, 0x1.647b4cp-39f, 0.0f,
     0x1.b5f8ecp-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.938adap-63f,
     0x1.a6067ap-88f, 0x1.ec62b4p-76f, 0x1.165d5cp-55f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8cf6d6p-58f, 0x1.3b1432p-113f, 0.0f, 0.0f, 0.0f, 0x1.c346aap-95f,
     0x1.0af5a6p-60f, 0.0f, 0.0f, 0x1.f31274p-72f, 0x1.dac92cp-5f, 0x1.ab5ffcp-107f,
     0.0f, 0x1.ad457ap-91f, 0.0f, 0.0f, 0x1.b9eceep-69f, 0.0f, 0.0f, 0.0f,
     0x1.a17bb6p-6f, 0.0f, 0.0f, 0x1.cc90e6p-113f, 0x1.a533ecp-102f, 0.0f, 0.0f,
     0x1.3c8f36p-69f, 0.0f, 0x1.e2951p-72f, 0x1.6e173cp-80f, 0x1.bf0522p-117f, 0.0f,
     0.0f, 0.0f, 0x1.00bed8p-52f, 0.0f, 0.0f, 0x1.01b544p-72f, 0.0f, 0x1.68f0dep-5f,
     0x1.130e24p-122f, 0x1.73c66ap-125f, 0x1.d53142p-74f, 0x1.365d72p-17f, 0.0f, 0.0f,
     0x1.f57ed6p-92f, 0x1.831c1ep-77f, 0.0f, 0.0f, 0.0f, 0x1.c546c8p-18f,
     0x1.9be18ap-42f, 0x1.634616p-109f, 0x1.6472d4p-27f, 0.0f, 0x1.72dd66p-117f,
     0x1.5a2e08p-31f, 0x1.b93816p-18f, 0.0f, 0x1.35bccp-53f, 0.0f, 0x1.0d1f0cp-30f,
     0.0f, 0x1.62dfa4p-30f, 0.0f, 0x1.6353f6p-119f, 0x1.cfe9e4p-18f, 0x1.1fafbap-117f,
     0x1.457f1ep-81f, 0.0f, 0.0f, 0x1.6badbp-37f, 0x1.318604p-24f, 0x1.b935c4p-22f,
     0.0f, 0x1.0a764p-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9c757ep-80f,
     0x1.15a542p-118f, 0x1.11ff24p-60f, 0.0f, 0.0f, 0x1.ffb362p-82f, 0.0f, 0.0f, 0.0f,
     0x1.9cbap-100f, 0x1.343cbcp-103f, 0.0f, 0.0f, 0x1.e9c746p-80f, 0.0f,
     0x1.7abc9cp-39f, 0.0f, 0x1.5e7272p-118f, 0.0f, 0.0f, 0.0f, 0x1.b72dcp-121f, 0.0f,
     0.0f, 0.0f, 0x1.1c3488p-4f, 0.0f, 0.0f, 0x1.dd3292p-69f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3b7b1p-99f, 0.0f, 0x1.84c9dp-83f, 0.0f,
     0x1.59ac36p-84f, 0x1.63d1b4p-37f, 0x1.943c0ap-75f, 0x1.cf9ef8p-44f, 0.0f,
     0x1.4566eep-5f, 0.0f, 0.0f, 0x1.8d7e9ep-28f, 0x1.5d0b9p-116f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.5909e8p-15f, 0x1.64fcbp-99f, 0x1.f0f5ap-109f, 0x1.0a4f2ap-14f,
     0x1.fb80ccp-112f, 0x1.1a061ap-11f, 0x1.66dfcp-24f, 0x1.eba802p-110f, 0.0f,
     0x1.98a9eep-84f, 0.0f, 0.0f, 0.0f, 0x1.9ab814p-90f, 0x1.1f4d74p-21f,
     0x1.db93d2p-44f, 0x1.a6ff8cp-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3f9e88p-18f, 0.0f,
     0.0f, 0x1.df1b98p-24f, 0x1.042c18p-34f, 0.0f, 0x1.3800bcp-36f, 0.0f, 0.0f, 0.0f,
     0x1.85bbb6p-79f, 0x1.626b8ep-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1f2186p-52f,
     0x1.78441ap-7f, 0x1.b3ae32p-40f, 0.0f, 0.0f, 0x1.d4a93ep-42f, 0x1.c650cap-87f,
     0x1.fcd5bap-28f, 0.0f, 0x1.142a16p-39f, 0x1.52914p-16f, 0x1.3c04fep-15f, 0.0f,
     0.0f, 0.0f, 0x1.7db0fep-18f, 0x1.8333d8p-71f, 0.0f, 0x1.51029ap-124f, 0.0f, 0.0f,
     0x1.438e72p-94f, 0.0f, 0x1.fe3d58p-65f, 0x1.9f80f8p-78f, 0.0f, 0.0f, 0.0f,
     0x1.57138cp-87f, 0.0f, 0x1.d8e062p-125f, 0x1.5461fep-89f, 0x1.32c86p-6f,
     0x1.4e9c02p-122f, 0x1.1c0422p-106f, 0.0f, 0x1.5c9642p-41f, 0x1.7eed4ap-1f,
     0x1.eebb82p-84f, 0x1.91a618p-9f, 0.0f, 0.0f, 0x1.84ebccp-116f, 0.0f,
     0x1.3ef5p-42f, 0x1.d4213ep-75f, 0x1.3f285cp-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0fdcd6p-124f, 0x1.b183bcp-41f, 0.0f, 0x1.c9e99ep-24f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f1df2cp-30f, 0x1.e65f34p-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.8e56acp-44f, 0.0f, 0.0f, 0x1.a7bbe6p-105f, 0x1.175454p-29f,
     0x1.705cf8p-57f, 0x1.f95076p-97f, 0.0f, 0x1.9c04fep-99f, 0x1.525de2p-32f,
     0x1.8d56fap-39f, 0x1.d8fbe8p-96f, 0x1.8f4a6ap-126f, 0x1.c39818p-122f,
     0x1.b87508p-8f, 0x1.797c0ap-67f, 0x1.5576a4p-113f, 0.0f, 0.0f, 0x1.173838p-80f,
     0.0f, 0.0f, 0x1.2f38cp-55f, 0.0f, 0x1.a5eaaep-37f, 0.0f, 0.0f, 0x1.56046ep-23f,
     0x1.785fe4p-110f, 0.0f, 0x1.fa9b8cp-85f, 0x1.1f77f8p-7f, 0x1.48d08cp-23f, 0.0f,
     0x1.b5e1e6p-33f, 0x1.dbf13ap-111f, 0.0f, 0.0f, 0x1.6876ccp-44f, 0x1.b5f2b6p-10f,
     0.0f, 0.0f, 0x1.81e7dep-57f, 0.0f, 0.0f, 0x1.d844a6p-3f, 0x1.5d038cp-103f, 0.0f,
     0.0f, 0x1.5aa014p-26f, 0x1.ef494cp-28f, 0x1.7ca91cp-49f, 0.0f, 0.0f,
     0x1.35f76cp-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b6db04p-70f, 0x1.6e9c48p-70f,
     0.0f, 0.0f, 0x1.358b5cp-67f, 0x1.d75c5cp-122f, 0.0f, 0x1.f3c352p-5f, 0.0f,
     0x1.726446p-84f, 0x1.4527b4p-103f, 0x1.2b58f8p-8f, 0x1.6f2508p-4f,
     0x1.fd7facp-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6a339ep-31f, 0.0f,
     0x1.11907cp-66f, 0.0f, 0.0f, 0x1.795208p-119f, 0x1.8ab98ep-46f, 0x1.22963ep-4f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.4dde6cp-67f, 0.0f, 0x1.98b35p-76f, 0x1.7a85dp-85f,
     0.0f
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
            tmp1 = Sleef_finz_cospif1_u05purecfma(tmp0);
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
    printf("Sleef_finz_cospif1_u05purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_cospif1_u05purecfma bench acc %a\n", global_bench_acc);
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
