/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_acosf8_u35kvx.c --function \
 *     Sleef_finz_acosf8_u35kvx --headers sleef.h,ml_support_lib.h \
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
     0x1.fca206p-92f, 0x1.42b55cp-11f, 0x1.71de94p-6f, 0x1.e37fa8p-88f,
     0x1.551f5ep-28f, 0x1.b72dbep-40f, 0x1.3e10cp-21f, 0.0f, 0.0f, 0x1.e4f5d2p-110f,
     0x1.f90ff8p-14f, 0x1.09160ep-52f, 0x1.05d3e6p-40f, 0.0f, 0x1.d89cdap-11f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.952f86p-63f, 0x1.36c406p-101f, 0.0f, 0x1.01efecp-92f, 0.0f,
     0x1.103ae6p-113f, 0.0f, 0.0f, 0x1.37b53cp-42f, 0x1.11807p-53f, 0x1.eacdaap-35f,
     0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.7f6d62p-68f, 0x1.6aa31ap-45f, 0.0f,
     0.0f, 0x1.dfd7dap-40f, 0.0f, 0.0f, 0x1.ade45cp-88f, 0.0f, 0.0f, 0.0f,
     0x1.8f6c4p-30f, 0.0f, 0x1.d5b614p-74f, 0x1.7b668ep-44f, 0x1.148fbep-118f, 0.0f,
     0.0f, 0x1.9097e8p-25f, 0x1.58f26ep-104f, 0.0f, 0.0f, 0x1.cb1728p-64f,
     0x1.122a8cp-31f, 0x1.1d622ap-100f, 0x1.671dc2p-39f, 0.0f, 0x1.51b5fap-103f,
     0x1.db373cp-102f, 0.0f, 0x1.763d1p-124f, 0.0f, 0x1.d9c72cp-78f, 0x1.c62408p-2f,
     0.0f, 0x1.d849bp-124f, 0.0f, 0x1.433896p-80f, 0x1.933acp-9f, 0.0f,
     0x1.2ad716p-105f, 0.0f, 0.0f, 0x1.e90a5ep-88f, 0x1.4339b2p-97f, 0x1.ec7dp-70f,
     0.0f, 0.0f, 0x1.257beap-8f, 0x1.0694ecp-15f, 0.0f, 0x1.2754a2p-86f, 0.0f, 0.0f,
     0x1.6d3c0ap-93f, 0x1.c05ba2p-36f, 0.0f, 0.0f, 0x1.9f4736p-105f, 0x1.85963ap-53f,
     0.0f, 0x1.3121ccp-24f, 0.0f, 0.0f, 0x1.149a3cp-120f, 0x1.f77834p-59f, 0.0f,
     0x1.97396cp-113f, 0.0f, 0x1.f1bc84p-98f, 0.0f, 0.0f, 0.0f, 0x1.3051ep-68f,
     0x1.35da94p-34f, 0x1.73817ep-116f, 0.0f, 0.0f, 0x1.8ec4e2p-75f, 0.0f,
     0x1.819024p-5f, 0x1.525e8p-92f, 0x1.9cb414p-29f, 0x1.d8e698p-96f,
     0x1.07e4e8p-81f, 0x1.bcb9b6p-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a14a3ap-82f, 0.0f, 0.0f, 0.0f, 0x1.d91ea6p-120f, 0.0f, 0x1.29edacp-1f, 0.0f,
     0.0f, 0.0f, 0x1.99fa4p-51f, 0x1.d8191cp-100f, 0.0f, 0x1.4a350cp-87f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.679af2p-41f, 0.0f, 0x1.9206aap-27f, 0.0f, 0x1.759968p-76f,
     0x1.8184e2p-75f, 0.0f, 0.0f, 0.0f, 0x1.2a7ccp-68f, 0x1.7a4574p-6f, 0.0f,
     0x1.d2733ap-91f, 0x1.f71ae2p-72f, 0x1.c798ccp-75f, 0.0f, 0x1.43b02cp-67f,
     0x1.7c4bap-38f, 0.0f, 0.0f, 0x1.ba1134p-97f, 0.0f, 0.0f, 0.0f, 0x1.74e0f6p-32f,
     0x1.7f5cf2p-79f, 0x1.040a16p-117f, 0x1.2837ccp-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c480e2p-25f, 0.0f, 0.0f, 0x1.64a31ap-113f, 0x1.f5f038p-86f, 0.0f,
     0x1.84aa9cp-18f, 0x1.c39cd6p-69f, 0x1.6daf0cp-109f, 0x1.b04cc2p-85f,
     0x1.ac2acep-2f, 0x1.079ab2p-41f, 0.0f, 0x1.20d504p-97f, 0x1.4d4b6ap-39f,
     0x1.5c48c2p-26f, 0x1.5afd32p-77f, 0.0f, 0.0f, 0x1.be6916p-54f, 0.0f,
     0x1.56aa4ap-57f, 0.0f, 0.0f, 0x1.a1533ep-93f, 0x1.d34b88p-15f, 0x1.551cbp-10f,
     0x1.e236f6p-80f, 0.0f, 0.0f, 0.0f, 0x1.4292eep-77f, 0.0f, 0x1.d74c38p-89f, 0.0f,
     0.0f, 0.0f, 0x1.c080ccp-55f, 0.0f, 0.0f, 0.0f, 0x1.212dd8p-99f, 0x1.c98dccp-96f,
     0.0f, 0x1.1b2982p-124f, 0.0f, 0x1.ddde66p-35f, 0x1.c6246cp-17f, 0.0f,
     0x1.2bc928p-6f, 0x1.49c684p-51f, 0x1.800274p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.163f1ap-13f, 0x1.42f478p-74f, 0x1.5bf72ap-121f, 0.0f, 0.0f, 0x1.c1fdb2p-13f,
     0x1.2af44ap-31f, 0x1.d1b2c6p-11f, 0.0f, 0x1.b96498p-125f, 0.0f, 0x1.35d79p-87f,
     0.0f, 0x1.7fb314p-9f, 0x1.94208ep-108f, 0.0f, 0.0f, 0x1.6ed402p-96f,
     0x1.d56e6p-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.12490ap-105f, 0.0f,
     0.0f, 0x1.ffc0e6p-41f, 0x1.58a6ap-68f, 0x1.46d9aep-54f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.eb9124p-6f, 0.0f, 0x1.55c434p-4f, 0x1.14ec8ep-113f, 0.0f,
     0x1.308f94p-24f, 0.0f, 0.0f, 0x1.c83d84p-48f, 0x1.951594p-73f, 0.0f,
     0x1.236f7ap-8f, 0.0f, 0.0f, 0x1.8a50e6p-82f, 0.0f, 0x1.cda55ap-125f,
     0x1.78ba4ap-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e89bf8p-55f, 0x1.5ca3ep-18f,
     0x1.821cfcp-53f, 0x1.028772p-8f, 0.0f, 0.0f, 0.0f, 0x1.68f27ap-5f,
     0x1.2c40c4p-1f, 0x1.a8a038p-110f, 0x1.4643bap-32f, 0.0f, 0x1.06173p-81f, 0.0f,
     0.0f, 0x1.1b6c7p-4f, 0.0f, 0.0f, 0x1.49e52p-63f, 0.0f, 0x1.b71feap-40f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bda9d8p-75f,
     0.0f, 0.0f, 0.0f, 0x1.6703eap-123f, 0x1.9e732ep-126f, 0.0f, 0x1.fac188p-87f,
     0.0f, 0.0f, 0.0f, 0x1.67cb8ep-98f, 0.0f, 0x1.36eec4p-11f, 0.0f, 0.0f,
     0x1.d1e4c6p-120f, 0.0f, 0.0f, 0.0f, 0x1.af5124p-107f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d2b90cp-116f, 0.0f, 0.0f, 0.0f, 0x1.c7d244p-92f, 0.0f, 0.0f, 0x1.20101ep-85f,
     0x1.47cdb2p-54f, 0x1.668436p-47f, 0.0f, 0.0f, 0.0f, 0x1.497e46p-105f, 0.0f, 0.0f,
     0.0f, 0x1.6ddebep-48f, 0x1.51c378p-92f, 0.0f, 0x1p0f, 0x1.582078p-123f,
     0x1.35d03ep-70f, 0x1.813e5ap-74f, 0.0f, 0x1.feb26ep-75f, 0x1.3ad778p-65f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fe1d68p-98f, 0x1.7f08d4p-67f, 0.0f,
     0.0f, 0.0f, 0x1.3303e8p-55f, 0x1.fdb02ep-118f, 0.0f, 0x1.1718ap-62f,
     0x1.bd7a4ep-91f, 0x1.88117p-123f, 0.0f, 0x1.582dc8p-10f, 0x1.c4d2eap-33f, 0.0f,
     0.0f, 0.0f, 0x1.b0b004p-118f, 0x1.d9aaacp-65f, 0x1.258edcp-32f, 0x1.95d72ap-35f,
     0x1.b0a59ap-36f, 0.0f, 0x1.d769fep-9f, 0x1.5681ap-67f, 0x1.dcca62p-73f, 0.0f,
     0x1.d1ed66p-68f, 0.0f, 0x1.77db18p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7f325p-48f, 0x1.6d395ep-63f, 0x1.d8b74p-125f, 0.0f, 0.0f, 0x1.1b6c4cp-32f,
     0x1.e436f8p-107f, 0.0f, 0x1.0698e2p-13f, 0.0f, 0.0f, 0x1.1c372cp-26f,
     0x1.e8df9p-70f, 0.0f, 0.0f, 0x1.7fab44p-60f, 0x1.21fb44p-123f, 0.0f, 0.0f, 0.0f,
     0x1.6b54dep-98f, 0.0f, 0.0f, 0.0f, 0x1.cc861ap-98f, 0x1.7e2246p-12f,
     0x1.11aba4p-20f, 0x1.5983b8p-99f, 0.0f, 0x1.8c34f2p-88f, 0x1.d0a622p-100f,
     0x1.23886ap-103f, 0.0f, 0x1.7481p-101f, 0x1.ff788p-9f, 0.0f, 0x1.dea04p-120f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f6b06ap-51f, 0.0f, 0x1.61d8c6p-106f, 0.0f, 0.0f,
     0x1.4541dcp-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c73588p-47f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.297fd6p-94f, 0x1.ec1f78p-98f, 0x1.c8b4bap-16f, 0.0f, 0.0f,
     0x1.78d6b2p-34f, 0.0f, 0x1.390f6p-41f, 0.0f, 0.0f, 0x1.8ca8ecp-52f,
     0x1.d6eef4p-32f, 0.0f, 0x1.b0fcfp-76f, 0x1.c70726p-43f, 0x1.4849dep-123f, 0x1p0f,
     0x1.3482e6p-53f, 0x1.423d3cp-75f, 0.0f, 0x1.c5a50ap-80f, 0.0f, 0x1.472b22p-111f,
     0.0f, 0x1.1567cap-108f, 0x1.d89c8ap-101f, 0x1.4824b2p-110f, 0x1.dc5baap-120f,
     0x1.ee277p-115f, 0.0f, 0x1.f340a2p-89f, 0x1.da506cp-32f, 0x1.6d1b9ap-56f, 0.0f,
     0.0f, 0x1.0ebbacp-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.12e21ep-12f, 0x1.85d8fap-108f,
     0.0f, 0.0f, 0x1.136fc4p-80f, 0x1.afe2d6p-119f, 0x1.5b78b4p-71f, 0.0f,
     0x1.c60c5cp-67f, 0.0f, 0x1.334bbcp-2f, 0x1.1fe7ccp-82f, 0x1.54ccd8p-20f, 0.0f,
     0.0f, 0x1.16e3fcp-101f, 0.0f, 0.0f, 0x1.0948dcp-64f, 0x1.12ce94p-113f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.656204p-33f, 0.0f, 0x1.a270a8p-38f,
     0.0f, 0x1.111e6cp-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8372d8p-9f, 0.0f,
     0x1.677494p-64f, 0.0f, 0.0f, 0x1.a267cap-121f, 0x1.ba3a54p-93f, 0x1.34ae8cp-10f,
     0.0f, 0x1.2a38b4p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8e29ecp-117f,
     0x1.eb4dc2p-92f, 0x1.62cd82p-63f, 0x1.349e0ap-111f, 0.0f, 0x1.cb40bap-14f,
     0x1.8d6ceep-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.de2a48p-32f, 0x1.3d32fep-62f, 0.0f,
     0.0f, 0x1.482434p-10f, 0.0f, 0x1.ce150ap-29f, 0x1.f8a614p-44f, 0x1.b89ab6p-38f,
     0x1.e077c2p-5f, 0x1.7d3536p-8f, 0x1.1c249ep-114f, 0.0f, 0x1.0a581ap-116f, 0.0f,
     0.0f, 0.0f, 0x1.057072p-30f, 0x1.ced93cp-72f, 0x1.f46344p-111f, 0.0f,
     0x1.0d3fb4p-125f, 0x1.1e534cp-88f, 0.0f, 0x1.9fb0a6p-28f, 0.0f, 0.0f,
     0x1.4946c2p-32f, 0.0f, 0x1.6e6cc2p-23f, 0.0f, 0.0f, 0x1.d3902ap-125f, 0.0f,
     0x1.9c1308p-62f, 0x1.62af24p-24f, 0.0f, 0.0f, 0x1.4388d8p-125f, 0.0f, 0.0f,
     0x1.90ae6p-73f, 0.0f, 0x1.5ccf74p-103f, 0.0f, 0x1.38849ep-50f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.8d8dfap-52f, 0x1.1ceeaep-9f, 0.0f, 0.0f, 0x1.20a5d4p-7f,
     0.0f, 0x1.e4c40cp-122f, 0x1.82a5b4p-44f, 0x1.e2ee0ap-2f, 0.0f, 0x1.808db6p-14f,
     0.0f, 0x1.3f8a2ap-33f, 0x1.2f3cc4p-12f, 0x1.489c86p-39f, 0x1.2edbf6p-111f,
     0x1.e14a6ep-3f, 0x1.672f52p-59f, 0x1.f0795cp-20f, 0x1.40e228p-86f,
     0x1.21f0ecp-74f, 0x1p0f, 0x1.e6a25ap-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8417ep-54f,
     0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.b14e12p-111f, 0.0f, 0x1.482c98p-5f, 0.0f,
     0.0f, 0x1.65790ep-41f, 0.0f, 0x1.0c2672p-115f, 0.0f, 0.0f, 0.0f,
     0x1.23bc68p-108f, 0.0f, 0.0f, 0.0f, 0x1.3902d4p-16f, 0.0f, 0.0f, 0.0f,
     0x1.b89874p-14f, 0x1.71dfbep-40f, 0x1.779934p-29f, 0.0f, 0.0f, 0x1.1060bap-95f,
     0x1.988e86p-95f, 0.0f, 0x1.f4c7p-10f, 0x1.460adcp-9f, 0x1.84126cp-117f,
     0x1.a27a7cp-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.72d0bcp-16f, 0.0f,
     0x1.e13fc4p-55f, 0.0f, 0.0f, 0x1.10462ap-2f, 0.0f, 0x1.b0a684p-47f,
     0x1.07a11cp-9f, 0x1.cc5292p-32f, 0x1.311422p-24f, 0x1.3db746p-68f, 0.0f,
     0x1.eb0ba6p-110f, 0x1.a065d8p-91f, 0x1.e782c8p-54f, 0x1.e56e6p-45f, 0.0f,
     0x1.1cd8eep-20f, 0.0f, 0x1.9b0f62p-118f, 0.0f, 0.0f, 0x1.be3a98p-19f,
     0x1.7a25e8p-17f, 0x1.634a12p-74f, 0x1.85a39ep-3f, 0x1.0ba75ap-100f, 0.0f, 0.0f,
     0x1.5fd8ap-66f, 0.0f, 0x1.289adap-35f, 0x1.4dadfp-64f, 0x1.2fca4p-122f,
     0x1.36eb88p-73f, 0x1.503f74p-39f, 0x1.7d77c6p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c22fb6p-66f, 0x1.a6b41ap-124f, 0x1.ba0368p-46f, 0x1.ab2214p-27f, 0.0f, 0.0f,
     0.0f, 0x1.967036p-33f, 0x1.6ccaaap-85f, 0x1.9b36d6p-81f, 0.0f, 0.0f, 0.0f,
     0x1.0f2342p-25f, 0.0f, 0x1.421ff6p-31f, 0x1.adbf64p-101f, 0x1.9f494cp-117f,
     0x1.6a156p-41f, 0x1.4badfap-20f, 0x1.6bb728p-57f, 0x1.c3df3p-42f,
     0x1.b87862p-105f, 0.0f, 0.0f, 0.0f, 0x1.37fa4ep-80f, 0.0f, 0.0f, 0.0f, 0x1p0f,
     0x1.0bc3ccp-15f, 0x1.1f24f4p-116f, 0x1.3a9c14p-70f, 0x1.b21572p-94f,
     0x1.82eba8p-49f, 0.0f, 0x1.34e808p-116f, 0x1.f45762p-69f, 0.0f, 0.0f,
     0x1.bb2bbep-124f, 0.0f, 0.0f, 0x1.9fa66p-32f, 0x1.93e2bap-87f, 0x1.87dc7ep-38f,
     0.0f, 0x1.d4dc7p-57f, 0x1.580f86p-67f, 0.0f, 0x1.504694p-94f, 0.0f,
     0x1.92558ep-105f, 0x1.a632ccp-22f, 0.0f, 0.0f, 0x1.ca0468p-47f, 0x1.95b174p-64f,
     0.0f, 0x1.2f5378p-109f, 0x1.9d44f2p-114f, 0x1.ffc442p-103f, 0x1.f22d96p-106f,
     0.0f, 0.0f, 0.0f, 0x1.2e0d32p-73f, 0.0f, 0x1.f0258ap-38f, 0.0f, 0.0f,
     0x1.bb2a68p-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3e60c4p-109f,
     0x1.dde54ep-114f, 0.0f, 0x1.5f01f4p-126f, 0.0f, 0x1.516a56p-121f,
     0x1.062bb2p-77f, 0x1.17e23ap-28f, 0x1.ff64fap-71f, 0x1.dc2f42p-54f,
     0x1.7f536p-37f, 0.0f, 0.0f, 0.0f, 0x1.190868p-29f, 0.0f, 0.0f, 0.0f,
     0x1.7e8026p-61f, 0x1.f93f34p-120f, 0x1.15c56ep-1f, 0.0f, 0x1.9ff404p-11f, 0.0f,
     0x1.32fda4p-104f, 0.0f, 0x1.3ef6f8p-39f, 0.0f, 0.0f, 0x1.7aae4cp-14f,
     0x1.dec98p-97f, 0x1.4b5b3ap-111f, 0x1.cb86bp-87f, 0x1.058134p-49f,
     0x1.402fd8p-63f, 0x1.1fa906p-101f, 0x1.69f0dap-105f, 0x1.3103dap-91f, 0.0f,
     0x1.552fcp-8f, 0x1.25361ep-103f, 0x1.7cdad4p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.95d31cp-123f, 0.0f, 0.0f, 0x1.26a73ep-22f, 0.0f, 0.0f, 0x1.8c5706p-54f,
     0x1.cdab96p-51f, 0x1.8b7786p-5f, 0x1.802cc2p-31f, 0x1.3745fep-75f, 0.0f,
     0x1.bcea6p-42f, 0x1.0c487ep-117f, 0.0f, 0.0f, 0x1.c4899ep-58f, 0x1.29132cp-86f,
     0x1.5d8368p-87f, 0x1.02f52ap-19f, 0x1.7eb0c8p-39f, 0x1.e5c1a4p-120f,
     0x1.4f1284p-9f, 0.0f, 0x1.b0ba7p-32f, 0x1.ad7e2ep-5f, 0x1.0dc52cp-41f, 0.0f,
     0x1.6da38ep-47f, 0x1.20caf4p-44f, 0.0f, 0x1.e9f81p-119f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.2d7036p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.280ep-15f,
     0x1.c87b24p-34f, 0.0f, 0x1.b8d5d4p-76f, 0.0f, 0x1.245bb6p-112f, 0x1.6eda02p-63f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.6979dp-58f, 0.0f, 0.0f, 0x1.fe97bcp-97f,
     0x1.7eef14p-100f, 0x1.75efe2p-40f, 0x1.7f69dep-126f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.707e72p-78f, 0x1.30cea8p-118f, 0x1.675e7ep-44f, 0x1.6a3068p-89f,
     0x1.8fb72ep-100f, 0x1.72b40ep-13f, 0x1.528b1ep-61f, 0.0f, 0x1.1c3d66p-30f,
     0x1.b8c6bp-101f, 0x1.586bbp-86f, 0.0f, 0x1.e10118p-113f, 0x1.816744p-76f,
     0x1.896c04p-98f, 0x1.6cb16ap-114f, 0.0f, 0x1.a4984cp-70f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.377748p-87f, 0x1.ba583cp-33f, 0.0f, 0x1.2edd48p-7f, 0.0f, 0.0f, 0.0f,
     0x1.9a5ed8p-72f, 0.0f, 0x1.25d244p-83f, 0.0f, 0.0f, 0x1.f941b8p-125f,
     0x1.621b88p-59f, 0.0f, 0x1.8fb10ep-74f, 0.0f, 0.0f, 0.0f, 0x1.de6ee2p-92f, 0.0f,
     0x1.c8ce8ep-123f, 0.0f, 0.0f, 0x1.8343dap-112f, 0.0f, 0.0f, 0.0f,
     0x1.6cf988p-89f, 0x1.c6ffb2p-80f, 0x1.a8bf5ep-56f, 0.0f, 0x1.005eap-7f, 0.0f,
     0.0f, 0.0f, 0x1.45049ap-5f, 0x1.ec07c6p-74f, 0.0f, 0x1.002ae6p-49f, 0.0f,
     0x1.057c7cp-71f, 0x1.d6907ep-9f, 0.0f
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
            tmp1 = Sleef_finz_acosf8_u35kvx(tmp0);
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
    printf("Sleef_finz_acosf8_u35kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_finz_acosf8_u35kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
