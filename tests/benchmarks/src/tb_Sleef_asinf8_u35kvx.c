/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_asinf8_u35kvx.c --function Sleef_asinf8_u35kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 8 --function-input-vector-size 8 --bench \
 *     --no-embedded-bin --target kv3
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
     0.0f, 0.0f, 0x1.1d960cp-60f, 0.0f, 0x1.a1270ep-113f, 0.0f, 0x1.ccd7aap-112f,
     0.0f, 0x1.644816p-113f, 0x1.90001ap-50f, 0.0f, 0x1.7f5df4p-3f, 0x1.f24f58p-108f,
     0x1.56a01p-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.39efdcp-93f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.16fee4p-118f, 0x1.a17a9ap-74f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.53363cp-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ed4b18p-22f,
     0x1.a12e06p-43f, 0.0f, 0x1.98973p-14f, 0x1.cad672p-108f, 0.0f, 0x1.cead3cp-67f,
     0.0f, 0x1.6ce612p-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b6fdd4p-86f, 0.0f,
     0x1.b098dp-5f, 0.0f, 0x1.524c2p-49f, 0.0f, 0x1.38b8a2p-3f, 0.0f, 0x1.9529d2p-50f,
     0x1.165116p-113f, 0x1.44b604p-120f, 0.0f, 0.0f, 0x1.47a862p-42f, 0x1.990ce8p-60f,
     0x1.bc895ep-19f, 0.0f, 0x1.d04accp-69f, 0x1.60d1f2p-104f, 0x1.4d56d4p-54f, 0.0f,
     0x1.da794cp-87f, 0x1.1ce296p-125f, 0x1.8def72p-47f, 0.0f, 0x1.8c6a4cp-26f,
     0x1.dcfb0ep-61f, 0x1.778e7ep-77f, 0.0f, 0x1.3f6c7ep-53f, 0x1.a253aep-15f,
     0x1.f1459ep-10f, 0.0f, 0x1.5a093ap-5f, 0x1.c6ed96p-73f, 0.0f, 0x1.cca984p-123f,
     0x1.351252p-79f, 0x1.9521f4p-90f, 0.0f, 0x1.c7be42p-68f, 0x1.c3f52ep-33f,
     0x1.448ac4p-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.93635ap-6f, 0.0f, 0x1.18cbd6p-69f,
     0.0f, 0.0f, 0.0f, 0x1.2ee91p-34f, 0.0f, 0x1.040356p-102f, 0.0f, 0.0f,
     0x1.f3a9c6p-50f, 0x1.0d9db4p-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e9c0cap-24f, 0.0f, 0x1.677de4p-117f, 0x1.ea09e2p-63f, 0x1.0816fap-120f, 0.0f,
     0.0f, 0.0f, 0x1.606778p-41f, 0.0f, 0x1.8a8f46p-4f, 0x1.c36e88p-12f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.89cf1p-39f, 0x1.5d4466p-53f, 0x1.af7ab8p-24f,
     0x1.61904ep-35f, 0x1.d1bb94p-56f, 0x1.c5d8bep-47f, 0.0f, 0x1.135e3p-62f, 0.0f,
     0.0f, 0x1.83da38p-75f, 0x1.ec0cfcp-23f, 0.0f, 0x1.11dafp-56f, 0x1.9a8c8ap-10f,
     0.0f, 0x1.3b80a2p-33f, 0x1.79ed7ap-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dc176p-58f,
     0x1.b30a74p-55f, 0.0f, 0x1.1e6f0ap-57f, 0x1.2869cep-56f, 0.0f, 0x1.84b8b8p-2f,
     0.0f, 0x1.db4f7p-51f, 0.0f, 0x1.c9957cp-2f, 0.0f, 0.0f, 0.0f, 0x1.10cb64p-19f,
     0.0f, 0.0f, 0.0f, 0x1.5e49d6p-15f, 0.0f, 0x1.5adc68p-80f, 0x1.0894aep-67f, 0.0f,
     0.0f, 0x1.07b16ap-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.642e5p-71f, 0x1.f3ed0cp-67f,
     0x1.e56432p-98f, 0.0f, 0x1.f83672p-35f, 0x1.2f44bap-49f, 0.0f, 0x1.24a44ap-31f,
     0.0f, 0x1.0aa264p-47f, 0x1.d70012p-124f, 0.0f, 0.0f, 0.0f, 0x1.9137b6p-85f, 0.0f,
     0.0f, 0x1.8aebe8p-83f, 0.0f, 0.0f, 0x1.9301e8p-45f, 0.0f, 0x1.224c36p-124f,
     0x1.3ad4e6p-58f, 0x1.589172p-32f, 0x1.fc1a26p-98f, 0x1.3dc7f6p-117f,
     0x1.0ce838p-42f, 0x1.dcadep-10f, 0.0f, 0x1.0d1d1ep-63f, 0.0f, 0.0f,
     0x1.8aa39ap-89f, 0.0f, 0x1.a62a0ap-105f, 0x1.5a757p-126f, 0.0f, 0.0f,
     0x1.e73d16p-89f, 0x1.f4c21ep-94f, 0x1.3cd738p-88f, 0.0f, 0.0f, 0x1.5b4d4cp-23f,
     0x1.523686p-7f, 0.0f, 0.0f, 0x1.fbf38p-110f, 0x1.6489d2p-97f, 0x1.80c3a6p-81f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2d3ca6p-81f, 0x1.cce9bep-73f, 0x1.ac3682p-45f,
     0.0f, 0.0f, 0x1.51ec02p-126f, 0.0f, 0x1.fefbb4p-35f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.58165cp-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5c60ccp-118f, 0.0f,
     0x1.ac265cp-26f, 0x1.1e966cp-107f, 0.0f, 0x1.db6274p-84f, 0x1.df607ep-104f,
     0x1.f2831p-120f, 0.0f, 0.0f, 0x1.486058p-94f, 0.0f, 0x1.ee673ap-122f,
     0x1.8e785ap-121f, 0.0f, 0x1.a67fdp-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.08a51p-50f, 0x1.bdabdcp-80f, 0.0f, 0x1.b9106cp-89f, 0x1.152b4p-116f, 0.0f,
     0x1.168e76p-6f, 0x1.7068f4p-86f, 0.0f, 0x1.dcbbf6p-76f, 0.0f, 0x1.7f0ab2p-23f,
     0.0f, 0x1.4d71ccp-41f, 0x1.4b988ap-103f, 0x1.e7843cp-40f, 0.0f, 0x1.4def3ap-55f,
     0.0f, 0.0f, 0x1.264cacp-6f, 0.0f, 0x1.0e2fap-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4b69eap-123f, 0.0f, 0x1.828224p-114f, 0.0f, 0x1.6b5898p-30f, 0x1.1f7cacp-55f,
     0x1.a34b44p-123f, 0.0f, 0x1.8947cep-77f, 0.0f, 0.0f, 0x1.6b8ccp-60f, 0.0f,
     0x1.6e99fp-18f, 0x1.b554a8p-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.7ec27cp-86f, 0x1.71b534p-7f, 0x1.6abb8cp-3f, 0x1.03fdaep-82f, 0.0f,
     0x1.cba8d8p-18f, 0.0f, 0x1.ba0a28p-84f, 0.0f, 0x1.ca2e94p-100f, 0x1.d995dep-99f,
     0.0f, 0x1.7453bep-66f, 0x1.474dd4p-94f, 0x1.f34fa2p-73f, 0x1.72016p-23f, 0.0f,
     0x1.5e793p-120f, 0x1.54f28p-91f, 0.0f, 0.0f, 0.0f, 0x1.25f96p-22f,
     0x1.0dc082p-30f, 0x1.0d7eb2p-115f, 0x1.48264ap-54f, 0x1.4edde2p-19f, 0.0f,
     0x1.064844p-92f, 0x1.16563ep-79f, 0.0f, 0x1.2d8064p-50f, 0x1.dbeb7p-59f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.278d2ap-56f, 0.0f, 0x1.f5b21ep-125f, 0.0f, 0x1.262044p-52f,
     0x1.1ebffap-110f, 0x1.04fddap-46f, 0.0f, 0x1.b0cd7p-48f, 0.0f, 0.0f,
     0x1.97165cp-98f, 0.0f, 0.0f, 0x1.99c08ep-76f, 0.0f, 0.0f, 0.0f, 0x1.4aff4ep-92f,
     0.0f, 0x1.fc697ep-101f, 0x1.4838b2p-10f, 0x1.1210aep-81f, 0x1.b60aeep-67f,
     0x1.376966p-105f, 0.0f, 0.0f, 0x1.8237ecp-107f, 0.0f, 0.0f, 0.0f,
     0x1.6227f6p-18f, 0.0f, 0x1.4a0c8p-124f, 0x1.0050d4p-123f, 0.0f, 0x1.e4ca96p-56f,
     0x1.07aaaep-73f, 0x1.2c0a5ep-88f, 0x1.f91694p-94f, 0.0f, 0x1.96fc24p-82f, 0.0f,
     0x1.b74e5p-4f, 0.0f, 0x1.ec1dd2p-87f, 0.0f, 0.0f, 0.0f, 0x1.8378ecp-15f, 0.0f,
     0.0f, 0x1.f2f912p-7f, 0.0f, 0.0f, 0x1.30fd28p-49f, 0.0f, 0x1.4afd5ep-52f,
     0x1.8283e2p-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8fc37cp-61f, 0.0f, 0x1.c29236p-11f,
     0x1.0c59c6p-95f, 0x1.659a4p-41f, 0x1.6853d2p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.50deeap-67f, 0x1.593eacp-23f, 0x1.8db73ep-16f, 0x1.501c12p-114f, 0.0f,
     0x1.772b4p-98f, 0.0f, 0.0f, 0x1.2cbaacp-62f, 0.0f, 0x1.10e31cp-28f,
     0x1.b0cde6p-86f, 0.0f, 0x1.c890a2p-53f, 0x1.0350e6p-5f, 0x1.786026p-20f, 0.0f,
     0x1.a28d54p-71f, 0.0f, 0.0f, 0x1.3f922ep-52f, 0.0f, 0x1.464084p-76f,
     0x1.53e7d4p-75f, 0x1.7352e4p-62f, 0.0f, 0x1.f023a4p-70f, 0.0f, 0x1.b9a6d4p-15f,
     0x1.078f18p-81f, 0.0f, 0x1.270a94p-14f, 0x1.8373e2p-30f, 0.0f, 0x1.e5ad9cp-84f,
     0x1.6c1d06p-32f, 0.0f, 0.0f, 0x1.f9b604p-121f, 0x1.baf72cp-10f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.6a51a2p-87f, 0x1.bbd486p-15f, 0.0f, 0x1.dad08p-93f, 0.0f, 0.0f,
     0x1.fb8bdcp-53f, 0x1.d6e2b4p-93f, 0x1.e9e33ap-64f, 0x1.d97dfap-60f, 0.0f,
     0x1.b19fap-75f, 0.0f, 0.0f, 0x1.fbfaaep-52f, 0.0f, 0x1.7be9e4p-115f,
     0x1.dcafdep-60f, 0x1.301368p-22f, 0.0f, 0x1.85de3ep-17f, 0.0f, 0.0f,
     0x1.6bc1acp-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8289fep-98f, 0.0f,
     0x1.1c542ap-4f, 0.0f, 0.0f, 0x1.fcacd8p-51f, 0x1.91e4bcp-2f, 0.0f,
     0x1.9fbb1ep-71f, 0x1.71514ep-92f, 0.0f, 0x1.97499ep-76f, 0x1.7b8794p-33f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.11a9b6p-115f, 0.0f, 0.0f, 0x1.a6540cp-17f, 0x1.5c8814p-2f,
     0x1.478b8p-91f, 0x1.d48abap-41f, 0.0f, 0.0f, 0x1.63b9acp-42f, 0x1.7b6bbap-27f,
     0x1.e7781cp-108f, 0x1.827f64p-43f, 0x1.03cb6cp-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a336c8p-100f, 0x1.b01be2p-107f, 0x1.b6210cp-31f, 0x1.ed55cp-64f, 0.0f, 0.0f,
     0x1.27cf1p-98f, 0x1.e4ad8ep-83f, 0x1.3c4544p-34f, 0x1.2de29ap-4f,
     0x1.1ed134p-71f, 0.0f, 0x1.f8d342p-45f, 0.0f, 0.0f, 0.0f, 0x1.174bbep-56f,
     0x1.b76d8p-72f, 0.0f, 0.0f, 0x1.e0577ap-117f, 0.0f, 0.0f, 0x1.9ffb4ep-74f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.955e8cp-72f, 0.0f, 0x1.acb116p-112f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.2aab8cp-86f, 0.0f, 0x1.e52716p-7f, 0x1.57f468p-36f, 0x1.ee6c5ep-117f,
     0.0f, 0.0f, 0x1.2ee25ep-34f, 0x1.9533bap-116f, 0x1.dd8be6p-94f, 0.0f, 0.0f,
     0x1.71c238p-79f, 0.0f, 0x1.48d75ep-76f, 0.0f, 0x1.5203e8p-74f, 0.0f, 0.0f,
     0x1.eee4f8p-25f, 0x1.59b144p-71f, 0x1.ca1f16p-30f, 0x1.d37722p-89f,
     0x1.4cb6f6p-19f, 0.0f, 0x1.5ea192p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b7c078p-105f,
     0x1.303f62p-72f, 0x1.4dad08p-48f, 0.0f, 0x1.0b4276p-71f, 0.0f, 0.0f,
     0x1.a3849ap-56f, 0x1.2353c4p-123f, 0x1.3197dcp-99f, 0.0f, 0.0f, 0x1.6197fap-17f,
     0x1.db9be4p-99f, 0x1.990692p-94f, 0.0f, 0x1.dc44bp-61f, 0.0f, 0x1.c090d4p-74f,
     0x1.2a4baap-6f, 0x1.6fe0e2p-80f, 0.0f, 0.0f, 0.0f, 0x1.42823p-79f,
     0x1.65fae8p-79f, 0x1.469866p-39f, 0x1.9d694cp-109f, 0.0f, 0x1.40c32ep-71f,
     0x1.6f09cep-2f, 0x1.05f0a8p-23f, 0x1.3b8e52p-108f, 0x1.5d8bap-20f, 0.0f,
     0x1.84fe2ep-64f, 0.0f, 0x1.127eep-94f, 0.0f, 0.0f, 0.0f, 0x1.5058e6p-88f,
     0x1.1c4abcp-64f, 0.0f, 0x1.9e46ecp-37f, 0.0f, 0.0f, 0.0f, 0x1.0d9632p-34f,
     0x1.b35234p-81f, 0x1.632e72p-115f, 0x1.42c012p-80f, 0x1.4e95p-89f,
     0x1.3a9ae2p-1f, 0.0f, 0.0f, 0x1.5eba24p-17f, 0x1.dbf95p-123f, 0.0f, 0.0f,
     0x1.d70d34p-97f, 0x1p0f, 0.0f, 0x1.df4bfcp-13f, 0.0f, 0.0f, 0.0f,
     0x1.cb355ep-51f, 0.0f, 0.0f, 0x1.f98b0ap-68f, 0x1.549aaep-104f, 0x1.75f1d6p-94f,
     0x1.b52386p-70f, 0.0f, 0x1.72f3cap-14f, 0x1.eedf9ep-69f, 0x1.8b40ep-108f, 0.0f,
     0x1.0c2262p-126f, 0x1.aa7294p-20f, 0x1.52acap-47f, 0.0f, 0.0f, 0x1.1e3d74p-79f,
     0.0f, 0.0f, 0x1.7e12cap-18f, 0.0f, 0x1.d368f8p-42f, 0x1.bb1324p-34f,
     0x1.46d052p-46f, 0x1p0f, 0x1.caf4a8p-12f, 0x1p0f, 0.0f, 0x1.a533f2p-14f, 0.0f,
     0.0f, 0x1.c4d83ep-48f, 0.0f, 0.0f, 0.0f, 0x1.7ec2p-120f, 0.0f, 0x1.7dd78cp-91f,
     0.0f, 0x1.a6b272p-60f, 0.0f, 0.0f, 0x1.912342p-79f, 0.0f, 0.0f, 0x1.e52aeap-23f,
     0.0f, 0x1.04e7fp-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f80614p-109f,
     0x1.56896ap-9f, 0x1.16f7dcp-103f, 0x1.fcf6f2p-102f, 0.0f, 0x1.b57ee2p-17f,
     0x1.a53a54p-69f, 0x1.1f03bp-62f, 0.0f, 0x1.1ff1ap-93f, 0.0f, 0.0f, 0.0f,
     0x1.2f5bd6p-77f, 0x1.cfc37ap-107f, 0.0f, 0x1.5ea96p-75f, 0.0f, 0x1.5f4f64p-11f,
     0x1.923b58p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.23340ap-91f, 0x1.7ce7c2p-2f,
     0x1.a751c6p-23f, 0x1.29d25ap-82f, 0.0f, 0x1.2f9ba2p-113f, 0.0f, 0x1.444ceep-67f,
     0.0f, 0x1.03b238p-53f, 0.0f, 0x1.25b272p-39f, 0x1.95e80ep-52f, 0x1.6aeb08p-126f,
     0x1.0d5f66p-75f, 0.0f, 0.0f, 0x1.5e5b84p-38f, 0x1.b40f4ep-119f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.92642ap-97f, 0x1.bbe458p-111f,
     0.0f, 0x1.a764ep-67f, 0x1.fe08dcp-117f, 0.0f, 0x1.8538fep-35f, 0x1.f415e4p-62f,
     0x1.2e8eaep-61f, 0x1.f479aep-14f, 0x1.601c8ap-49f, 0.0f, 0.0f, 0x1.2b6254p-66f,
     0.0f, 0x1.3495f6p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.af5158p-28f, 0.0f, 0.0f,
     0x1.d804c2p-23f, 0x1.e24dc4p-28f, 0x1.2ff6bap-36f, 0x1.ded1b2p-4f, 0.0f, 0.0f,
     0.0f, 0x1.a128f2p-58f, 0.0f, 0.0f, 0x1.612438p-12f, 0.0f, 0.0f, 0x1.b94cc8p-72f,
     0x1.0a8bdap-118f, 0.0f, 0.0f, 0x1.62c382p-75f, 0x1.8f0c0ep-44f, 0x1.1f1846p-96f,
     0.0f, 0x1.f689f8p-26f, 0x1.1ecf6ap-12f, 0.0f, 0.0f, 0x1.b84b68p-98f,
     0x1.2e59e4p-13f, 0x1.fa0188p-45f, 0.0f, 0x1.2e4d0cp-11f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9059d6p-125f, 0.0f, 0x1.651442p-91f, 0.0f, 0x1.8c2bc8p-31f, 0x1.668cb6p-84f,
     0x1.2a469ep-118f, 0x1.d096d6p-85f, 0x1.108424p-60f, 0x1.8fa018p-42f, 0.0f, 0.0f,
     0x1.5199a6p-39f, 0x1.dc86cep-22f, 0x1.75493p-21f, 0.0f, 0x1.66a9cap-115f, 0.0f,
     0x1.d0eef8p-58f, 0x1.a79d0ap-100f, 0.0f, 0x1.e217a6p-110f, 0x1.5fc6p-115f, 0.0f,
     0x1.05fd22p-25f, 0x1.e78064p-110f, 0x1.20b3eep-23f, 0x1.5f62dp-75f, 0.0f, 0.0f,
     0x1.8b1d8cp-24f, 0.0f, 0x1.8aaeeep-117f, 0x1.25b02cp-16f, 0x1.2ded8ep-101f, 0.0f,
     0.0f, 0.0f, 0x1.43e37ep-60f, 0x1.2d9b56p-77f, 0x1.27a7f2p-2f, 0x1.da9026p-27f,
     0x1.ee658ep-114f, 0.0f, 0.0f, 0x1.9a9956p-23f, 0.0f, 0x1.51dbeep-80f,
     0x1.9fa958p-66f, 0x1.44da9ep-34f, 0x1.eb9db6p-115f, 0.0f, 0x1.3d2f38p-62f,
     0x1.d880b2p-108f, 0.0f, 0x1.8c0d24p-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5436bp-63f, 0.0f, 0x1.1cde26p-37f, 0x1.2ce66cp-35f, 0.0f, 0x1.2c61bep-60f,
     0x1.c19692p-119f, 0x1.584bbap-123f, 0.0f, 0.0f, 0.0f, 0x1.c96d12p-12f,
     0x1.fc2e2ap-6f, 0x1.a44708p-108f, 0x1.10f8aap-88f, 0.0f, 0x1.a8496p-97f,
     0x1.8bed32p-119f, 0x1.4490e8p-113f, 0x1.498e66p-103f, 0x1.125642p-39f, 0.0f,
     0x1.43b50ep-79f, 0x1.52c5fp-50f, 0.0f, 0x1.e0ff2cp-118f, 0x1.70b7aap-13f, 0.0f,
     0x1.ffd6fep-83f, 0.0f, 0.0f, 0x1.c7a3dp-87f, 0.0f, 0.0f, 0.0f, 0x1.864e3ap-118f,
     0.0f, 0x1.6963fep-2f, 0.0f, 0.0f, 0x1.b10706p-26f, 0x1.9e277ap-13f,
     0x1.aa4482p-33f, 0.0f, 0.0f, 0x1.9a2df4p-68f, 0.0f, 0x1.fbd204p-29f, 0.0f,
     0x1.a4bfb4p-1f, 0x1.d742c6p-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.009c7cp-19f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.39e6e2p-43f, 0x1.71e55p-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.362d38p-121f, 0x1.a5b412p-13f, 0x1.67f674p-95f, 0x1.96411cp-42f,
     0x1.f451aap-89f, 0x1.af6ap-58f, 0.0f, 0.0f, 0x1.52331ap-35f, 0.0f,
     0x1.5f1d7cp-102f, 0x1.e7de8ap-85f, 0x1.fad8b8p-21f, 0x1.67a91cp-84f, 0.0f,
     0x1.ca0b06p-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.311abap-20f, 0x1.03bec8p-6f, 0.0f,
     0x1.dae2c6p-78f, 0.0f, 0x1.90660ap-99f, 0.0f
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
            tmp1 = Sleef_asinf8_u35kvx(tmp0);
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
    printf("Sleef_asinf8_u35kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_asinf8_u35kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
