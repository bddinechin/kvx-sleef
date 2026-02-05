/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_acoshf8_u10kvx.c --function \
 *     Sleef_finz_acoshf8_u10kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 8 --function-input-vector-size \
 *     8 --bench --no-embedded-bin --target kv3
 *
 */
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float8_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float8_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1008];
static const float external_bench_wrapper_input_table_arg0[1008]  = {
     0x1.954b16p-6f, 0.0f, 0.0f, 0x1.bb41f8p-88f, 0x1.77ed2ap-8f, 0x1.15643cp-87f,
     0x1.8f6554p-105f, 0.0f, 0x1.ab7536p-89f, 0.0f, 0.0f, 0x1.f6c31ep-6f,
     0x1.230aep-69f, 0.0f, 0.0f, 0x1.821a16p-6f, 0.0f, 0.0f, 0x1.0315fap-94f,
     0x1.460f26p-67f, 0x1.2398b8p-115f, 0x1.50d5eep-114f, 0x1.8da78cp-126f,
     0x1.356a04p-31f, 0x1.8ddb3ep-125f, 0x1.660202p-54f, 0.0f, 0x1.dd036ap-9f, 0.0f,
     0x1.c9463cp-7f, 0x1.8dddf6p-63f, 0x1.6fb3b6p-91f, 0.0f, 0x1.112e64p-17f,
     0x1.5e653cp-36f, 0x1.abee4ap-8f, 0.0f, 0x1.30fa12p-25f, 0x1.36aae8p-38f,
     0x1.9f177p-6f, 0.0f, 0.0f, 0x1.27294ep-108f, 0x1.9566dep-27f, 0x1.5f3906p-112f,
     0x1.b55ecp-85f, 0x1.f34a1cp-27f, 0.0f, 0.0f, 0x1.e93e78p-114f, 0x1.418386p-110f,
     0x1.5790bap-41f, 0x1.5fd6e4p-73f, 0x1.155894p-31f, 0.0f, 0x1.6c39b4p-43f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.265ef2p-92f, 0.0f, 0.0f, 0.0f, 0x1.5738c6p-121f, 0.0f,
     0.0f, 0x1.11b43cp-59f, 0.0f, 0x1.7882bap-108f, 0x1.18dc76p-73f, 0x1.6dee22p-93f,
     0x1.e1750ep-45f, 0.0f, 0x1.4c639ap-22f, 0x1.c48f72p-100f, 0.0f, 0x1p0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.2430d4p-54f, 0.0f, 0.0f, 0x1.f14e68p-65f, 0.0f,
     0x1.45bd7p-48f, 0.0f, 0.0f, 0.0f, 0x1.6783f6p-4f, 0.0f, 0x1.c0e62p-11f, 0.0f,
     0.0f, 0x1.15f3p-109f, 0x1.86223ap-75f, 0x1.538d8ep-64f, 0x1.e55fb8p-73f, 0.0f,
     0x1.20ee24p-13f, 0.0f, 0.0f, 0x1.10d3ccp-76f, 0.0f, 0x1.51f6c8p-66f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9b7aap-8f, 0x1.e67538p-102f, 0.0f, 0.0f, 0x1.693954p-70f,
     0.0f, 0x1.8ccf76p-85f, 0x1.3afc5cp-68f, 0.0f, 0.0f, 0x1.374388p-73f,
     0x1.59aae4p-103f, 0.0f, 0x1.ff09p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fadbc2p-47f,
     0x1.b1cf0cp-29f, 0.0f, 0x1.1c096ap-126f, 0x1.dede8cp-32f, 0.0f, 0x1.b3486p-99f,
     0.0f, 0.0f, 0x1.b2fbb4p-69f, 0.0f, 0x1.d96cf4p-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5debfap-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5e81e8p-92f, 0.0f, 0.0f, 0.0f,
     0x1.8c056ep-109f, 0.0f, 0x1.c66fb8p-125f, 0.0f, 0.0f, 0x1.969b4cp-102f, 0.0f,
     0x1.b5341p-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5e046cp-80f, 0.0f, 0x1.1eb72ap-14f,
     0.0f, 0.0f, 0x1.9acc64p-12f, 0x1.271672p-47f, 0.0f, 0x1.f8909ep-5f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c881bap-111f, 0.0f, 0x1.4705d2p-85f, 0.0f, 0x1.054fe8p-23f,
     0.0f, 0.0f, 0.0f, 0x1.f6f9dep-59f, 0x1.d71a04p-42f, 0x1.d8736ap-47f,
     0x1.e4e288p-33f, 0x1.57c1cep-27f, 0x1.9bb7d4p-82f, 0x1.25014ap-77f,
     0x1.929714p-44f, 0.0f, 0x1.492c94p-101f, 0x1.559112p-16f, 0x1.f64cfep-110f,
     0x1.2ffb9p-25f, 0.0f, 0.0f, 0.0f, 0x1.739004p-87f, 0.0f, 0x1.13e9e4p-111f,
     0x1.4392bcp-108f, 0x1.32aa2cp-32f, 0.0f, 0.0f, 0x1.59197p-49f, 0x1.d07238p-126f,
     0x1.ba613ep-110f, 0x1.90e136p-12f, 0.0f, 0.0f, 0.0f, 0x1.8a69dcp-70f, 0.0f, 0.0f,
     0.0f, 0x1.9ad6fp-13f, 0.0f, 0.0f, 0x1.75071ap-96f, 0x1.4361a6p-101f,
     0x1.db03dep-34f, 0x1.90adfp-13f, 0x1.ddfe96p-12f, 0.0f, 0.0f, 0x1.c4040ep-10f,
     0.0f, 0x1.6086aap-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2cdb3ep-45f,
     0x1.f8d88cp-71f, 0.0f, 0x1.c98c2p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d4aa8p-42f, 0.0f, 0.0f, 0x1.34a44ep-51f, 0.0f, 0.0f, 0x1.418a8cp-101f,
     0x1.7431b4p-80f, 0x1.0b61c4p-99f, 0.0f, 0.0f, 0x1.df7886p-121f, 0x1.1206dep-112f,
     0x1.7cbabap-114f, 0.0f, 0x1.d2ea04p-53f, 0x1.458966p-98f, 0x1.2f1396p-95f, 0.0f,
     0.0f, 0x1.9d513ap-92f, 0.0f, 0.0f, 0.0f, 0x1.6cc03cp-2f, 0x1.df906ep-88f, 0.0f,
     0x1.c76f4ap-65f, 0x1.70b652p-6f, 0x1.7bce5ap-88f, 0.0f, 0.0f, 0x1.25f6a6p-21f,
     0.0f, 0x1.7487a8p-116f, 0x1.49cc76p-48f, 0.0f, 0.0f, 0x1.b9a69ap-81f, 0x1p0f,
     0x1.2702fp-49f, 0x1.fbab8ap-35f, 0x1.0325bp-118f, 0x1.6c630cp-58f, 0.0f,
     0x1.865adp-106f, 0x1.6e3878p-78f, 0x1.4904fcp-53f, 0x1.9d42a8p-81f, 0.0f,
     0x1.9e9f8p-41f, 0x1.0a7d2cp-71f, 0.0f, 0.0f, 0x1.9f0c7cp-46f, 0.0f, 0.0f, 0.0f,
     0x1.de2d9cp-11f, 0x1.663e1cp-55f, 0x1.e751f2p-86f, 0.0f, 0x1.ab7efp-22f,
     0x1.48194ep-45f, 0x1.9246ep-66f, 0.0f, 0.0f, 0x1.237b76p-109f, 0.0f, 0.0f, 0.0f,
     0x1.743352p-85f, 0x1.61b76p-6f, 0x1.abfa6ep-104f, 0.0f, 0.0f, 0.0f,
     0x1.c8593cp-72f, 0x1.75dabep-23f, 0.0f, 0x1.2ff496p-11f, 0.0f, 0x1.d5201p-27f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b20e3cp-22f, 0x1.328c36p-99f, 0.0f,
     0x1.294ec2p-82f, 0x1.fc7f46p-66f, 0x1.e457b2p-18f, 0x1.1bb3d4p-5f, 0.0f,
     0x1.4c2f6cp-18f, 0.0f, 0x1.53c304p-10f, 0.0f, 0x1.b12b26p-77f, 0.0f,
     0x1.117982p-26f, 0.0f, 0.0f, 0.0f, 0x1.6a2fc4p-21f, 0x1.8f60f6p-74f, 0.0f,
     0x1.9c933cp-11f, 0x1.9ba38ep-91f, 0x1.0a7586p-71f, 0.0f, 0x1.1d9562p-59f, 0.0f,
     0x1.33bab6p-105f, 0.0f, 0.0f, 0x1.e642aep-95f, 0.0f, 0x1.795122p-38f, 0.0f,
     0x1.28502ep-37f, 0.0f, 0x1.1c7282p-90f, 0.0f, 0x1.72dc6p-103f, 0.0f,
     0x1.57b1e8p-65f, 0.0f, 0x1.75dfe4p-19f, 0x1.16c108p-13f, 0x1.2d2c5ep-92f,
     0x1.a94d1ep-56f, 0x1.654c92p-97f, 0.0f, 0x1.162f3ap-35f, 0.0f, 0.0f, 0.0f,
     0x1.15f266p-13f, 0.0f, 0x1.4e86c4p-64f, 0x1.5c36f2p-30f, 0.0f, 0x1.a0128cp-12f,
     0x1.4950d4p-76f, 0x1.7bd9fep-67f, 0x1.2fe948p-12f, 0x1.d941ap-10f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ffd6a6p-15f, 0.0f, 0x1.401218p-103f,
     0.0f, 0x1.2558ap-30f, 0x1.fa842ap-49f, 0x1.151bap-121f, 0.0f, 0x1.cc7feap-10f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.63137ap-28f, 0.0f, 0.0f, 0x1.e5276p-21f,
     0x1.9f5bc2p-120f, 0.0f, 0x1.337382p-41f, 0.0f, 0x1.7139dep-102f, 0.0f, 0.0f,
     0x1.001feap-10f, 0.0f, 0x1.87df8ep-67f, 0x1.d74c9ap-67f, 0.0f, 0x1.07dbb2p-80f,
     0.0f, 0.0f, 0x1.bf08fcp-11f, 0x1.1b371cp-92f, 0.0f, 0.0f, 0x1.c451ap-13f,
     0x1.2ed32p-96f, 0.0f, 0x1.61be14p-12f, 0.0f, 0x1.b9445p-34f, 0.0f,
     0x1.f1a9ecp-29f, 0x1.624daep-63f, 0x1.967d18p-110f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.69a31cp-98f, 0x1.729fp-13f, 0x1.4229a2p-21f, 0x1.d5e246p-72f, 0.0f, 0x1p0f,
     0x1.bd31cep-18f, 0x1.70a88ap-110f, 0x1.5c004p-35f, 0.0f, 0.0f, 0x1.9c2d7ap-36f,
     0x1.c0c838p-93f, 0x1.d7268ap-42f, 0.0f, 0.0f, 0.0f, 0x1.d663bap-35f,
     0x1.52082ep-25f, 0x1.1ea266p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.26cb7cp-69f,
     0x1.c2def2p-118f, 0x1.265108p-55f, 0.0f, 0x1.1d55f8p-16f, 0x1.b9dbf2p-12f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.0618bcp-38f, 0.0f, 0x1.8cff64p-32f, 0.0f, 0.0f,
     0x1.0e7552p-37f, 0x1.881294p-67f, 0x1.9bb70cp-88f, 0.0f, 0x1.f8839ep-119f,
     0x1.2e2f7cp-92f, 0x1.5188c4p-57f, 0x1.d5a64p-86f, 0.0f, 0x1.d3cc56p-8f,
     0x1.821a62p-74f, 0.0f, 0x1.cd1648p-115f, 0.0f, 0.0f, 0x1.b65882p-11f, 0.0f, 0.0f,
     0x1.3c56a6p-58f, 0x1.8a58a2p-18f, 0x1.db481ep-84f, 0.0f, 0x1.5a62dap-118f, 0.0f,
     0.0f, 0x1.68629p-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.285e4ep-44f, 0.0f, 0.0f, 0.0f,
     0x1.204534p-26f, 0.0f, 0x1.208232p-117f, 0x1.cec69p-110f, 0.0f, 0.0f,
     0x1.78052ep-20f, 0.0f, 0.0f, 0x1.787cbp-125f, 0x1.b390bcp-44f, 0.0f,
     0x1.d8e662p-17f, 0x1.0e7108p-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fccb76p-120f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.df6dc2p-38f, 0.0f, 0.0f, 0x1.17e63cp-104f,
     0x1.2232aap-34f, 0x1.d2ce1ap-81f, 0x1.010d28p-50f, 0x1.ea13dap-116f,
     0x1.06f902p-20f, 0.0f, 0x1.c08814p-1f, 0x1.51bda4p-117f, 0x1.e75042p-94f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d6421p-84f, 0x1.feadecp-16f, 0x1.0971a2p-123f,
     0x1.12951ep-115f, 0x1.1a554ap-20f, 0x1.3321d4p-103f, 0x1.478c7ap-5f, 0.0f,
     0x1.874f68p-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b84722p-84f, 0x1.46ceb6p-19f,
     0x1.7a996p-24f, 0.0f, 0x1.01bf84p-9f, 0.0f, 0x1.a72b08p-66f, 0.0f,
     0x1.87e7aep-36f, 0.0f, 0x1.52fdbep-36f, 0.0f, 0x1.1772dap-114f, 0.0f,
     0x1.decc44p-27f, 0.0f, 0x1.dc5cc4p-101f, 0.0f, 0x1.c75b1cp-23f, 0.0f,
     0x1.6f9c1p-23f, 0x1.203d62p-27f, 0x1.616b24p-54f, 0x1.afc908p-53f,
     0x1.b55ed2p-34f, 0.0f, 0x1.6a4ce2p-103f, 0x1.7560aap-39f, 0.0f, 0.0f,
     0x1.6f2dcp-68f, 0.0f, 0.0f, 0.0f, 0x1.2878a4p-37f, 0x1.d83fa4p-81f, 0.0f,
     0x1.5db84ep-23f, 0.0f, 0.0f, 0x1.6587a6p-50f, 0x1.a4e33p-66f, 0.0f,
     0x1.8f8356p-28f, 0.0f, 0x1.516726p-46f, 0x1.32669ap-119f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.2ae718p-108f, 0x1.5f88fp-30f, 0.0f, 0x1.0a9c0ep-107f, 0.0f,
     0x1.cb593cp-85f, 0.0f, 0x1.152ca2p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f45336p-21f, 0.0f, 0.0f, 0x1.b2cd7ep-41f, 0x1.0eef24p-70f, 0x1.13e972p-108f,
     0x1.eba056p-117f, 0.0f, 0x1.546f8p-46f, 0x1.03eaaep-42f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3ee2f4p-93f, 0x1.af454ep-35f, 0.0f, 0.0f, 0x1.9ac0e6p-73f, 0.0f, 0.0f,
     0x1.33029p-25f, 0x1.66eb96p-7f, 0.0f, 0x1.1beaeep-44f, 0x1.701764p-38f,
     0x1.441932p-79f, 0.0f, 0x1.7ded58p-29f, 0.0f, 0.0f, 0x1.f2039p-74f, 0.0f, 0.0f,
     0x1.cd5884p-114f, 0.0f, 0x1.01a83p-33f, 0.0f, 0.0f, 0x1.b909e4p-95f, 0.0f,
     0x1.f4f036p-117f, 0.0f, 0x1.0c4b2ep-55f, 0.0f, 0x1.c5121ep-1f, 0x1.7e948ep-27f,
     0x1.9f3568p-21f, 0.0f, 0x1.7bc8ccp-21f, 0x1.285c3p-93f, 0x1.2cc02ep-39f,
     0x1.52de1cp-28f, 0x1.94eaaep-103f, 0x1.8e5c3cp-61f, 0x1.aa1cf2p-47f, 0.0f,
     0x1.80d03cp-44f, 0x1.334464p-79f, 0.0f, 0x1.9d6a3ap-88f, 0x1.a3a67ap-104f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.aadf5ap-53f, 0x1.e33488p-9f, 0.0f, 0x1.7a5134p-48f,
     0.0f, 0.0f, 0x1.6cc99ap-56f, 0x1.9468bap-125f, 0x1.aa6fe4p-48f, 0.0f, 0.0f,
     0x1.1a9106p-50f, 0x1p0f, 0.0f, 0x1.1d1d26p-74f, 0x1.0b048p-87f, 0x1.efa184p-108f,
     0.0f, 0x1.ca0502p-56f, 0.0f, 0x1.90efb6p-123f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1819fcp-60f, 0x1.c19562p-14f, 0.0f, 0x1.2ac0dcp-124f, 0x1.e3ca22p-83f,
     0x1.087aeep-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5a50bp-89f, 0x1.f6c7d4p-65f,
     0.0f, 0x1.c8ef7p-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.947432p-111f,
     0x1.bf4fbp-112f, 0.0f, 0x1.f7badp-16f, 0x1.9f2908p-11f, 0.0f, 0x1.749ecp-99f,
     0.0f, 0.0f, 0x1.b75dbp-111f, 0x1.3f7d16p-26f, 0.0f, 0.0f, 0.0f, 0x1.fc8ce2p-13f,
     0x1.a43f32p-59f, 0.0f, 0.0f, 0.0f, 0x1.6f67f4p-37f, 0.0f, 0.0f, 0x1.1ef95p-49f,
     0.0f, 0.0f, 0x1.6ea3ep-13f, 0.0f, 0.0f, 0.0f, 0x1.fe4428p-87f, 0x1.a6e19cp-10f,
     0.0f, 0x1.f33dd8p-27f, 0x1.1c509p-113f, 0.0f, 0x1.b19ac6p-65f, 0x1.bb23e2p-91f,
     0.0f, 0x1.e25abep-34f, 0.0f, 0x1.42c356p-105f, 0x1.5a1c92p-65f, 0x1.e128fap-97f,
     0.0f, 0.0f, 0x1.3bb1a6p-115f, 0x1.d38efap-13f, 0.0f, 0.0f, 0.0f, 0x1.cf6fp-40f,
     0.0f, 0x1.420532p-90f, 0x1.bcabd2p-76f, 0x1.a817d6p-43f, 0.0f, 0x1.e16572p-82f,
     0.0f, 0x1.876f84p-96f, 0x1.790eacp-16f, 0.0f, 0x1.8c661p-53f, 0x1.ab345cp-41f,
     0x1.d640c8p-47f, 0x1.3233fap-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.63279cp-30f, 0.0f,
     0x1.ce127cp-29f, 0x1.e3b786p-68f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f,
     0x1.1f052ap-114f, 0.0f, 0x1.8509e4p-46f, 0x1.8b9684p-119f, 0x1.f523dcp-61f, 0.0f,
     0x1.8c1aap-70f, 0.0f, 0.0f, 0x1.43411ep-11f, 0x1.082eap-124f, 0x1.2675d6p-46f,
     0x1.21de0cp-81f, 0x1.f719c8p-58f, 0.0f, 0.0f, 0.0f, 0x1.b543bep-119f, 0.0f,
     0x1.65f55ap-1f, 0x1.7c74cap-19f, 0x1.565924p-119f, 0.0f, 0.0f, 0x1.33b772p-126f,
     0x1.38116ap-20f, 0.0f, 0x1.8b80bp-82f, 0.0f, 0.0f, 0.0f, 0x1.a73bc2p-30f, 0x1p0f,
     0x1.163d56p-103f, 0.0f, 0x1.f34ddep-84f, 0x1.74d6ccp-80f, 0.0f, 0x1.b9dc5cp-31f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fc6414p-126f, 0x1p0f, 0.0f,
     0x1.334da2p-52f, 0.0f, 0x1.232eeap-36f, 0x1.442284p-115f, 0.0f, 0.0f, 0.0f,
     0x1.8d8112p-56f, 0x1.52be12p-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.74e114p-62f, 0.0f,
     0x1.418246p-8f, 0.0f, 0.0f, 0x1.15479ap-88f, 0.0f, 0x1.982cc4p-100f, 0.0f,
     0x1.875c8p-69f, 0x1.19396ep-112f, 0x1.2c4e18p-44f, 0.0f, 0.0f, 0x1.ca6856p-20f,
     0x1.eeba34p-38f, 0x1.8383b8p-73f, 0.0f, 0x1.ce0f78p-83f, 0x1.1938ccp-18f, 0.0f,
     0x1.f631f8p-58f, 0.0f, 0.0f, 0x1.8fc3fep-41f, 0.0f, 0x1.e01368p-35f, 0.0f, 0.0f,
     0x1.0fd99ep-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.087f24p-96f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.752aap-1f, 0.0f, 0.0f, 0x1.7ee8f6p-40f, 0x1.cc7d24p-114f, 0x1.083a98p-125f,
     0x1.dbbde4p-84f, 0x1.4e6244p-38f, 0x1.f1b7a4p-17f, 0x1.a68894p-81f,
     0x1.9a8ca6p-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5d6dcep-92f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f8b67p-26f, 0x1.e85e92p-83f,
     0x1.b37a0ep-62f, 0x1.266834p-39f, 0x1.4c714cp-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.dc415p-7f, 0x1.3ef3eep-2f, 0x1.312e9cp-43f, 0x1.6b532ep-14f, 0.0f, 0.0f,
     0x1.f90c32p-53f, 0x1.a8762ap-94f, 0x1.9172c4p-31f, 0.0f, 0.0f, 0.0f,
     0x1.ef0df8p-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9146dcp-71f,
     0x1.ba9cc6p-75f, 0x1.f68c48p-95f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_float8_t global_bench_acc;
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
        ml_float8_t local_acc;
        int32_t i;
        ml_float8_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1008));){
            ml_float8_t tmp0;
            ml_float8_t tmp1;
            ml_float8_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_float8_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            tmp1 = Sleef_finz_acoshf8_u10kvx(tmp0);
            memcpy(((ml_float8_t*)(external_bench_wrapper_output_table+ i)), &(tmp1), 32);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(8);
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
    cpe_measure = id_tmp / 10080000.0;
    printf("Sleef_finz_acoshf8_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_finz_acoshf8_u10kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
