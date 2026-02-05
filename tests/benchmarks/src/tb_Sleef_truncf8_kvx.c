/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_truncf8_kvx.c --function Sleef_truncf8_kvx --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary32 --vector-size 8 \
 *     --function-input-vector-size 8 --bench --no-embedded-bin --target kv3
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
     0.0f, 0x1.dea3e4p-64f, 0x1.7e1858p-46f, 0.0f, 0.0f, 0.0f, 0x1.4e8ae8p-29f, 0.0f,
     0x1.324f74p-118f, 0.0f, 0.0f, 0x1.25cb6cp-106f, 0x1.d4240cp-11f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ceef12p-67f, 0.0f, 0.0f, 0x1.9782c8p-4f, 0.0f, 0.0f, 0.0f,
     0x1.781794p-67f, 0x1.164b34p-62f, 0x1.8b967cp-97f, 0x1.50638ap-99f,
     0x1.85d2f4p-118f, 0x1.9e177cp-24f, 0x1.a98d1cp-114f, 0.0f, 0x1.1e6cd8p-126f,
     0x1.5e563ap-26f, 0x1.598d32p-37f, 0.0f, 0x1.47711cp-11f, 0.0f, 0x1.593c7cp-21f,
     0x1.1a9836p-52f, 0x1.850674p-43f, 0x1.93b84p-85f, 0.0f, 0.0f, 0x1.4bb96cp-40f,
     0x1.578ac6p-106f, 0.0f, 0x1.f0ab3p-103f, 0x1.92223p-119f, 0x1.68e96ap-100f,
     0x1.bd5242p-80f, 0.0f, 0x1.ae53a4p-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.17df3ep-93f, 0.0f, 0.0f, 0.0f, 0x1.4609e4p-29f, 0x1.d827ecp-100f,
     0x1.a897b6p-100f, 0.0f, 0.0f, 0x1.163134p-12f, 0.0f, 0x1.b7e44ep-116f,
     0x1.17060ep-47f, 0x1.0c1b92p-99f, 0.0f, 0x1.f5f90cp-6f, 0.0f, 0.0f,
     0x1.ef5bbap-20f, 0.0f, 0x1.14368ep-89f, 0x1.40b446p-8f, 0.0f, 0x1.6bfdeap-124f,
     0.0f, 0x1p0f, 0.0f, 0x1p0f, 0x1.bf87a6p-34f, 0.0f, 0x1.2bf30cp-77f,
     0x1.f75352p-18f, 0x1.a8c8acp-12f, 0.0f, 0.0f, 0.0f, 0x1.f197e4p-37f, 0.0f,
     0x1.3b73d2p-40f, 0x1.132fa4p-34f, 0x1.172724p-96f, 0x1.f67554p-10f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bf325cp-53f, 0x1.f8a66ap-37f, 0.0f,
     0x1.07593p-15f, 0x1.85adc2p-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.905a16p-43f, 0.0f,
     0x1.616d3p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.68a3cp-71f, 0x1.eb3eaap-116f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c6475ap-24f, 0.0f, 0x1.8995bp-4f,
     0x1.94318ap-39f, 0x1.e8eac2p-2f, 0.0f, 0x1.30ec0cp-98f, 0x1.55768ap-90f, 0.0f,
     0.0f, 0x1.803dp-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bd5c5cp-41f, 0.0f, 0.0f,
     0x1.ac8cp-74f, 0.0f, 0x1.48b16ep-26f, 0x1.13aad2p-78f, 0x1.adb8fap-13f,
     0x1.5eb47ep-90f, 0.0f, 0.0f, 0.0f, 0x1.ebe8b8p-27f, 0x1.80643ap-73f,
     0x1.eeb1b6p-119f, 0x1.be38bap-54f, 0.0f, 0x1.b8a80cp-29f, 0.0f, 0x1.9a4adcp-61f,
     0x1.fbc70cp-94f, 0x1.78e3ecp-40f, 0x1.eb192ap-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4cfafep-119f, 0x1.9a69a4p-37f, 0.0f, 0.0f, 0.0f, 0x1.54a7aap-103f,
     0x1.2e92dcp-104f, 0x1.ce9414p-74f, 0.0f, 0x1.52a8ecp-70f, 0.0f, 0x1.df8e02p-35f,
     0.0f, 0x1.3801dp-7f, 0.0f, 0.0f, 0x1.74cb46p-123f, 0x1.fdcc5ep-109f,
     0x1.5f8a4p-51f, 0x1.0e671cp-24f, 0x1.dcfe9ap-65f, 0.0f, 0.0f, 0x1.ca5e3ep-27f,
     0x1.fe50bcp-49f, 0x1.5d077p-112f, 0.0f, 0.0f, 0.0f, 0x1.4f8bf2p-5f, 0.0f, 0.0f,
     0.0f, 0x1.64c7ap-21f, 0.0f, 0.0f, 0x1.5c9ce4p-26f, 0x1.c0196p-119f, 0.0f, 0.0f,
     0x1.846d9ap-21f, 0x1.fd5b5cp-20f, 0x1.4b6aep-87f, 0.0f, 0x1.f04c3p-68f, 0.0f,
     0.0f, 0x1.ccfb14p-126f, 0x1.a2b1ecp-76f, 0x1.fa40c4p-105f, 0x1.58861ap-105f,
     0x1.993ad4p-2f, 0x1.9affecp-70f, 0.0f, 0.0f, 0x1.340ba8p-29f, 0x1.58fa3cp-85f,
     0x1p0f, 0.0f, 0.0f, 0x1.5eb564p-77f, 0.0f, 0x1.a674a4p-97f, 0.0f,
     0x1.a60a76p-67f, 0x1.6bcac4p-55f, 0x1.79e71cp-15f, 0x1.d77986p-36f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1c5a9ap-8f, 0x1.b795ccp-100f, 0x1.61c108p-109f, 0x1.17f568p-7f,
     0.0f, 0.0f, 0.0f, 0x1.c8486cp-67f, 0x1.4884a8p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.4ca376p-88f, 0x1.c2e83ap-126f, 0.0f, 0x1.282ffp-105f, 0x1.142596p-9f,
     0.0f, 0x1.72d45cp-14f, 0x1.520998p-57f, 0.0f, 0x1.f3c2c6p-98f, 0.0f,
     0x1.2b4c74p-37f, 0.0f, 0.0f, 0x1.1c5a6p-34f, 0x1.5118e6p-64f, 0.0f, 0.0f,
     0x1.7ba8c6p-77f, 0.0f, 0.0f, 0x1.fbc7eep-125f, 0.0f, 0.0f, 0x1.d9c07ap-47f, 0.0f,
     0x1.57af4cp-77f, 0x1.952bf6p-91f, 0.0f, 0x1.d9c3ap-103f, 0.0f, 0x1.c914ecp-115f,
     0.0f, 0.0f, 0x1.d655f4p-61f, 0x1.cf9822p-13f, 0x1p0f, 0.0f, 0.0f, 0.0f,
     0x1.a614dep-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2154f6p-77f, 0.0f, 0x1.e7026cp-14f,
     0x1.e0c0a6p-108f, 0.0f, 0x1.9048e4p-100f, 0x1.b21d52p-22f, 0x1.9cee68p-44f,
     0x1.2dce68p-99f, 0x1.b6eb52p-34f, 0x1.ca517ep-113f, 0.0f, 0x1.bf20bp-104f,
     0x1.35b226p-67f, 0.0f, 0x1.e1d458p-72f, 0x1.e793ap-85f, 0.0f, 0x1.1e704ap-112f,
     0x1.4929fp-115f, 0x1.edfdaap-55f, 0.0f, 0.0f, 0x1.632a04p-32f, 0.0f,
     0x1.7d2016p-42f, 0x1.2ed1cep-100f, 0x1.9d0bdap-34f, 0.0f, 0.0f, 0.0f,
     0x1.a678cep-18f, 0.0f, 0x1.f7b05cp-99f, 0x1.e8743p-69f, 0x1.8f7318p-21f,
     0x1.e4bc9cp-32f, 0x1.9cca8p-122f, 0x1.b4acccp-71f, 0.0f, 0.0f, 0.0f,
     0x1.52271ep-125f, 0.0f, 0x1.7dcceap-27f, 0x1.456858p-72f, 0x1.097058p-96f, 0.0f,
     0.0f, 0x1.159b4cp-125f, 0x1.55bf9ep-78f, 0x1.5c71bap-119f, 0x1.1391dp-52f,
     0x1.4d1544p-43f, 0.0f, 0x1.e2a36p-29f, 0x1.a55fap-77f, 0x1.e2040ap-111f, 0.0f,
     0x1.2f1b3cp-89f, 0x1.c303p-40f, 0.0f, 0.0f, 0x1.245a04p-65f, 0x1.ec0df8p-106f,
     0x1.ef1374p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fe07a4p-64f, 0.0f, 0x1.7abf1ap-15f,
     0x1.bd746cp-46f, 0x1.7ffda4p-96f, 0x1.667368p-20f, 0.0f, 0x1.3ac01p-47f, 0.0f,
     0x1.a5f64ep-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bcb0aap-73f, 0x1.7862cep-51f, 0.0f,
     0x1.518efp-66f, 0.0f, 0x1.50a20cp-12f, 0x1.166614p-49f, 0x1.fd3cc8p-61f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d486b4p-27f, 0x1.6e8abp-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a47452p-87f, 0.0f, 0x1.2729bp-30f, 0x1.724974p-22f, 0x1.0160ccp-87f,
     0x1.ef124cp-104f, 0.0f, 0x1.8dd22ep-65f, 0.0f, 0.0f, 0x1.869744p-46f,
     0x1.8955f6p-122f, 0.0f, 0x1.1bfb32p-30f, 0x1.63e58ep-65f, 0.0f, 0.0f,
     0x1.19fb12p-53f, 0x1.0cad78p-26f, 0.0f, 0x1.e60c98p-91f, 0x1.2a6ffcp-55f,
     0x1.64228ap-21f, 0.0f, 0.0f, 0x1.029b16p-30f, 0.0f, 0x1.7d004p-3f,
     0x1.019498p-6f, 0x1.e0640cp-81f, 0.0f, 0x1.479514p-91f, 0.0f, 0.0f,
     0x1.30494ap-16f, 0.0f, 0x1.2cff26p-77f, 0x1.696f84p-80f, 0x1.f79baap-54f,
     0x1.70d6bp-94f, 0x1.0b42a6p-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.255be2p-118f, 0x1.e4213ap-53f, 0.0f, 0.0f, 0.0f, 0x1.c65038p-126f, 0.0f,
     0x1.4cc5dp-60f, 0x1.4a24e8p-68f, 0x1.188574p-11f, 0x1.ec0668p-54f,
     0x1.07ddacp-54f, 0.0f, 0x1.af523p-59f, 0.0f, 0x1.c09124p-78f, 0x1.ea72p-112f,
     0x1.81b772p-118f, 0x1.4c478cp-52f, 0.0f, 0x1.c6ab8cp-119f, 0x1.0b7edep-12f,
     0x1.a9495ep-74f, 0x1.1876bp-89f, 0.0f, 0x1.a261fep-18f, 0x1.742fdp-110f,
     0x1.8ea244p-48f, 0x1.2d644cp-95f, 0.0f, 0x1.5ec8d4p-19f, 0x1.0919aep-2f, 0.0f,
     0x1.ef56c2p-48f, 0.0f, 0x1.128056p-104f, 0x1.0bbb7cp-117f, 0x1.dabc78p-93f, 0.0f,
     0x1.a250d6p-8f, 0x1.e1c41ep-38f, 0x1.0235f4p-9f, 0.0f, 0x1.e571c2p-1f,
     0x1.9576aep-44f, 0.0f, 0.0f, 0.0f, 0x1.7f93acp-103f, 0.0f, 0x1.375fe4p-60f, 0.0f,
     0x1.5d42fap-7f, 0x1.ff761ep-117f, 0x1.9223f4p-65f, 0.0f, 0.0f, 0x1.29324p-48f,
     0x1.480a6p-77f, 0.0f, 0x1.3e22b4p-44f, 0x1.9ed8c4p-60f, 0.0f, 0x1p0f,
     0x1.0f50c8p-71f, 0.0f, 0.0f, 0.0f, 0x1.f390acp-44f, 0x1.829f92p-55f,
     0x1.5b62cap-115f, 0x1.fe014ep-78f, 0.0f, 0.0f, 0.0f, 0x1.e73c4p-48f,
     0x1.adde5ap-46f, 0x1.642c32p-3f, 0x1.6988d8p-82f, 0x1.74f7e2p-99f, 0.0f,
     0x1.063958p-46f, 0x1.ceef8ap-95f, 0x1.b07e42p-69f, 0x1.dcd018p-14f, 0.0f, 0.0f,
     0x1.03bfd2p-8f, 0x1.b3cd46p-10f, 0.0f, 0x1.3236bep-112f, 0.0f, 0x1.320004p-10f,
     0x1.f1864p-90f, 0x1.0b910ep-85f, 0x1.e66ef8p-60f, 0x1.ada786p-32f,
     0x1.e1a612p-100f, 0.0f, 0.0f, 0x1.05eca6p-7f, 0x1.fbbbb2p-100f, 0.0f,
     0x1.af7934p-119f, 0.0f, 0x1.2d1f9p-31f, 0.0f, 0x1.92e7dp-42f, 0.0f,
     0x1.03a02ep-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4a4f28p-8f, 0.0f,
     0x1.096744p-68f, 0.0f, 0x1.dfde52p-61f, 0x1.05a39ep-45f, 0x1.4b2058p-57f, 0.0f,
     0x1.ea387p-113f, 0.0f, 0.0f, 0.0f, 0x1.67c528p-123f, 0.0f, 0x1.08878cp-117f,
     0x1.e9cbfep-74f, 0x1.44f86cp-24f, 0.0f, 0.0f, 0x1.403b9ap-123f, 0x1.edfc4p-10f,
     0x1.ffbdfcp-100f, 0x1.0cadb4p-4f, 0.0f, 0.0f, 0x1.416978p-56f, 0.0f,
     0x1.9bf1b4p-54f, 0x1.1b4752p-49f, 0x1.0cf12ep-84f, 0.0f, 0.0f, 0x1.69d5a6p-74f,
     0x1.39b8fcp-25f, 0.0f, 0.0f, 0.0f, 0x1.73b2fp-91f, 0.0f, 0x1.8a7b5p-67f, 0.0f,
     0.0f, 0x1.71f55ep-8f, 0x1.260a1ep-125f, 0.0f, 0x1.88ef8ep-38f, 0.0f,
     0x1.f84838p-36f, 0.0f, 0x1.ec6cd8p-104f, 0x1.c602b8p-31f, 0x1.088dc6p-21f,
     0x1.c0fb04p-109f, 0x1.d55db6p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b51382p-60f,
     0.0f, 0x1.aafecep-114f, 0x1.ae2b86p-31f, 0x1.8c9ebap-41f, 0x1.7cc4d2p-39f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e71d04p-85f, 0x1.d1325ap-110f, 0x1.af7a3ep-78f,
     0.0f, 0x1.ba0bfap-98f, 0.0f, 0x1.44227ap-48f, 0x1.0e85bcp-18f, 0x1.0e005cp-81f,
     0x1.5d425p-103f, 0x1.9dc452p-97f, 0.0f, 0x1.5510a2p-7f, 0.0f, 0x1.85406ap-62f,
     0x1.fa8736p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.85dc24p-106f, 0x1.ad3188p-10f,
     0x1.dc6992p-58f, 0.0f, 0x1.1bb1aep-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d6392ep-115f,
     0.0f, 0x1.8f4bccp-56f, 0x1.9439ecp-78f, 0x1.8dc99ap-84f, 0x1.96812ap-90f,
     0x1.8814e4p-111f, 0x1.f36bdep-107f, 0x1.b4f456p-95f, 0x1.5c3fp-6f, 0.0f, 0.0f,
     0.0f, 0x1.13d0f4p-78f, 0x1.3cb752p-114f, 0.0f, 0x1.e29774p-4f, 0.0f,
     0x1.46a8fap-114f, 0.0f, 0.0f, 0.0f, 0x1.bce21cp-40f, 0x1.be2112p-40f,
     0x1.a4fc02p-94f, 0.0f, 0x1.d0b78cp-87f, 0x1.d7248ap-109f, 0.0f, 0x1.02bad2p-108f,
     0x1.342614p-41f, 0.0f, 0x1.968698p-56f, 0x1.36fecp-125f, 0.0f, 0.0f, 0.0f,
     0x1.6fd68cp-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.30aee8p-37f, 0.0f, 0.0f,
     0x1.80e35p-95f, 0x1.ed426cp-96f, 0x1.d66d64p-56f, 0.0f, 0x1.0ff9d8p-116f, 0.0f,
     0.0f, 0x1.d9fc5p-24f, 0.0f, 0.0f, 0x1.d6a406p-46f, 0.0f, 0.0f, 0.0f,
     0x1.674ac2p-86f, 0x1.96797cp-25f, 0.0f, 0.0f, 0x1.b4dd6ep-50f, 0.0f,
     0x1.49314ep-87f, 0x1.e72be4p-58f, 0x1.e04f9ap-76f, 0.0f, 0.0f, 0.0f,
     0x1.e8c426p-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.447fdcp-106f, 0.0f,
     0x1.fbb4c8p-15f, 0.0f, 0.0f, 0x1.d38b0cp-84f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e92e76p-43f, 0x1.da90b2p-100f, 0x1.86c0bap-10f, 0x1.75815cp-42f, 0.0f, 0.0f,
     0x1.cdb10ap-119f, 0x1.b2dcf8p-69f, 0.0f, 0.0f, 0x1.e869d2p-41f, 0x1.94e46p-80f,
     0x1.7e2bacp-73f, 0x1.5d8888p-93f, 0x1.9334c8p-123f, 0.0f, 0x1.5aadfcp-70f, 0.0f,
     0x1.0cf95ap-28f, 0.0f, 0x1.e15becp-100f, 0x1.7eb374p-106f, 0.0f, 0.0f,
     0x1.2232eep-33f, 0.0f, 0.0f, 0.0f, 0x1.ec1576p-29f, 0x1.cb3b1ap-72f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.792abcp-69f, 0.0f, 0.0f, 0x1.0b2b66p-11f, 0.0f,
     0x1.01ff16p-89f, 0.0f, 0.0f, 0x1.cd4f26p-90f, 0.0f, 0.0f, 0x1.b41c6cp-106f, 0.0f,
     0x1.c6a64cp-29f, 0x1.84d474p-45f, 0.0f, 0.0f, 0x1.fbefcp-94f, 0.0f,
     0x1.4c6f74p-83f, 0.0f, 0.0f, 0x1.348e3cp-111f, 0.0f, 0.0f, 0x1.5b1742p-118f,
     0x1.62ebbep-53f, 0x1.1b423ep-82f, 0.0f, 0x1.c70e6cp-22f, 0x1.336c1p-37f, 0.0f,
     0x1.274e46p-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c4a538p-12f, 0.0f, 0x1.6f4a7ap-36f,
     0.0f, 0.0f, 0x1.c8b3cp-118f, 0.0f, 0x1.9e9772p-92f, 0x1.0c6d86p-101f, 0.0f,
     0x1.e1171ap-110f, 0.0f, 0.0f, 0x1.e51552p-53f, 0.0f, 0.0f, 0x1.da808ep-97f, 0.0f,
     0x1.718968p-58f, 0x1.2584f8p-22f, 0.0f, 0.0f, 0x1.2f8934p-79f, 0x1.5c037ap-78f,
     0x1.a861a2p-119f, 0x1.e8462ep-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6c09b6p-105f, 0x1.3239a4p-67f, 0x1.b68412p-123f, 0.0f, 0.0f, 0.0f,
     0x1.e94fbp-70f, 0.0f, 0x1.c19992p-61f, 0x1.ecb346p-11f, 0x1.e9ae7p-13f, 0.0f,
     0x1.3f9d84p-23f, 0x1.f15046p-65f, 0.0f, 0.0f, 0.0f, 0x1.d20164p-81f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b195b8p-26f, 0.0f, 0x1.094c46p-19f, 0x1.570594p-20f,
     0x1.518508p-55f, 0x1.9f4b96p-48f, 0x1.fcd72cp-42f, 0x1.d469eap-43f, 0.0f,
     0x1.edece4p-33f, 0x1.eb29fap-42f, 0.0f, 0.0f, 0x1.851674p-7f, 0.0f, 0.0f, 0.0f,
     0x1.13416p-74f, 0x1.175f44p-14f, 0.0f, 0x1.04b388p-36f, 0.0f, 0x1.58e8bep-99f,
     0.0f, 0.0f, 0x1.ff657ep-43f, 0x1.41c3e8p-55f, 0.0f, 0x1.62bb5cp-69f,
     0x1.6ec6c4p-32f, 0x1.dd0c5cp-64f, 0x1.8c9e8cp-55f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.72e8cep-109f, 0.0f, 0.0f, 0.0f, 0x1.4fc3e8p-48f, 0x1.6960bcp-32f,
     0x1.8a5cacp-114f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.1a9e06p-60f, 0.0f, 0.0f, 0.0f,
     0x1.b35446p-57f, 0x1.7b2dbp-41f, 0x1.668362p-97f, 0.0f, 0.0f, 0x1.499514p-81f,
     0x1.834b4cp-43f, 0x1.793f18p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5e76d8p-63f,
     0.0f, 0x1.0497c6p-23f, 0x1.6fa3dp-56f, 0x1.1701f4p-88f, 0.0f, 0.0f,
     0x1.239454p-20f, 0x1.d3db8cp-24f, 0.0f, 0.0f, 0x1.4db5dep-56f, 0x1.cf048cp-117f,
     0.0f, 0x1.e72912p-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.98c3d2p-2f, 0x1.0a6aa2p-112f,
     0x1.1135b6p-95f, 0x1.65b42p-36f, 0.0f, 0.0f, 0x1.40c928p-41f, 0.0f,
     0x1.e2f8f8p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.791104p-48f, 0.0f,
     0x1.3ed1aap-26f, 0.0f, 0.0f, 0x1.9e6e9ap-57f, 0.0f, 0x1.4a89dep-28f, 0.0f,
     0x1.46293cp-43f, 0x1.9db24ap-9f, 0x1.0159bp-13f, 0.0f, 0x1.bd528cp-61f, 0.0f,
     0x1.4599d6p-66f, 0.0f, 0x1.1ef4ecp-94f, 0.0f, 0x1.052ca2p-59f
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
            tmp1 = Sleef_truncf8_kvx(tmp0);
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
    printf("Sleef_truncf8_kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_truncf8_kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
