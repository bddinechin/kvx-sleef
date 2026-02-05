/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_atanhf8_u10kvx.c --function Sleef_atanhf8_u10kvx \
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
     0x1.7e654ap-11f, 0x1.ada8c6p-116f, 0x1.c94d9cp-51f, 0x1.8c44e6p-124f,
     0x1.94052cp-63f, 0.0f, 0x1.6347cep-3f, 0.0f, 0.0f, 0x1.73a816p-51f,
     0x1.9dea38p-112f, 0x1.5f66b4p-105f, 0.0f, 0.0f, 0x1.a6f16p-103f, 0x1.e9bcf8p-28f,
     0x1.940b54p-52f, 0x1.8fcd64p-112f, 0x1.70fc4cp-88f, 0.0f, 0x1.d7014p-104f,
     0x1.490aa8p-68f, 0x1.77f7bp-46f, 0.0f, 0.0f, 0x1.9894bcp-119f, 0.0f, 0.0f,
     0x1.35357p-64f, 0x1.2523cap-125f, 0x1.05873p-112f, 0.0f, 0x1.af1adep-57f, 0.0f,
     0x1.ed19a4p-116f, 0.0f, 0x1.589984p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.777d24p-69f,
     0x1.78b382p-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.011fcep-80f, 0.0f, 0x1.7bb41cp-93f,
     0x1.177ef8p-121f, 0.0f, 0.0f, 0x1p0f, 0x1.d975c6p-122f, 0.0f, 0x1.7b4966p-5f,
     0x1.abf1p-56f, 0x1.174812p-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.816bap-34f, 0.0f,
     0.0f, 0.0f, 0x1.31cc08p-36f, 0x1.515a6p-88f, 0x1.7e26c4p-74f, 0x1.58cdccp-77f,
     0x1.7a9adp-48f, 0x1.325d12p-56f, 0.0f, 0x1.3a3cc2p-110f, 0.0f, 0x1.404fc2p-37f,
     0x1.504c9ep-95f, 0x1.2fce7cp-30f, 0x1.53e178p-55f, 0x1.53079cp-65f, 0.0f, 0.0f,
     0.0f, 0x1.ac9702p-67f, 0x1.4b76ap-46f, 0x1.5205fcp-82f, 0.0f, 0.0f,
     0x1.80f25ep-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5ae7e6p-117f, 0.0f, 0x1.205c9p-49f,
     0x1.2d7f3ap-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.462ed6p-121f, 0x1.765742p-22f,
     0x1.c544a4p-53f, 0.0f, 0x1.6c38f2p-30f, 0x1.223e4ap-39f, 0.0f, 0.0f,
     0x1.c8d64ap-116f, 0.0f, 0x1.0cb8fep-48f, 0x1.1dcabap-87f, 0.0f, 0.0f,
     0x1.010e12p-22f, 0x1.04b922p-68f, 0x1.699d22p-67f, 0x1.71ff4ep-17f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4c40a6p-30f, 0x1.789a4p-123f, 0.0f, 0x1.fcdf72p-95f,
     0x1.a4314ap-85f, 0.0f, 0x1p0f, 0x1.5d914ep-31f, 0.0f, 0.0f, 0.0f,
     0x1.92e9f8p-30f, 0x1.0797d8p-64f, 0x1.1b608cp-92f, 0.0f, 0x1p0f, 0.0f, 0.0f,
     0x1.20cab6p-51f, 0.0f, 0x1.e9b07ap-50f, 0x1.b95e6ap-86f, 0x1.993598p-119f, 0.0f,
     0x1.725102p-123f, 0.0f, 0x1.720018p-18f, 0x1.fab728p-84f, 0x1.bea5a2p-99f, 0.0f,
     0.0f, 0x1.0abc5ap-31f, 0x1.73fb24p-123f, 0x1.4102e8p-119f, 0.0f, 0x1.a5132ep-76f,
     0.0f, 0x1.5658ap-23f, 0.0f, 0.0f, 0x1.addf1p-97f, 0x1.0a144p-84f, 0.0f, 0.0f,
     0.0f, 0x1.36c44cp-84f, 0x1.5ca8e2p-45f, 0x1.e6f8b8p-4f, 0.0f, 0x1.2148dcp-103f,
     0x1.48aa46p-109f, 0x1.c84c32p-12f, 0.0f, 0.0f, 0x1.b4b44ap-9f, 0x1.3a74fp-92f,
     0x1.7530f2p-67f, 0.0f, 0.0f, 0.0f, 0x1.d3fe88p-88f, 0x1.4aa35cp-43f,
     0x1.a29ddp-103f, 0x1.d214e6p-15f, 0x1.43eca6p-115f, 0x1.edbf42p-47f, 0.0f,
     0x1.20d3a6p-50f, 0x1.206cf6p-5f, 0x1.f42b7p-84f, 0x1.739446p-10f, 0.0f,
     0x1.931becp-41f, 0x1.bac2ep-35f, 0x1.1e46e8p-10f, 0.0f, 0x1.7b197p-67f, 0.0f,
     0x1.36638cp-91f, 0x1.5cc71cp-41f, 0.0f, 0.0f, 0x1.6ffd38p-54f, 0x1.4532d8p-48f,
     0x1.631fcep-93f, 0.0f, 0x1.1604e6p-68f, 0.0f, 0.0f, 0.0f, 0x1.7a79ccp-123f,
     0x1.26ec5ep-75f, 0.0f, 0x1.b8bb3ep-87f, 0x1.43931cp-19f, 0x1.ab3a22p-47f, 0.0f,
     0.0f, 0x1.5dd628p-51f, 0x1.00138ap-29f, 0.0f, 0x1.a09e6ep-49f, 0.0f,
     0x1.d4bf58p-28f, 0.0f, 0x1.4c001p-20f, 0.0f, 0.0f, 0x1.590c98p-3f, 0.0f, 0.0f,
     0.0f, 0x1.a512ccp-89f, 0x1.052feap-90f, 0x1.227d04p-107f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.afbfecp-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.49f7ecp-90f, 0.0f,
     0x1.fde428p-73f, 0x1.dcdaa6p-17f, 0x1.71947ap-87f, 0x1.fd8e5p-2f,
     0x1.d466d8p-108f, 0.0f, 0.0f, 0.0f, 0x1.656914p-27f, 0x1.475e1p-22f, 0.0f,
     0x1.259156p-72f, 0.0f, 0x1.d95b7ep-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a03152p-38f, 0.0f, 0x1.246fd8p-28f, 0.0f, 0.0f, 0x1.a8ce2ap-10f, 0.0f,
     0.0f, 0x1.998d42p-58f, 0.0f, 0x1.697e1ep-41f, 0x1.d99a4cp-112f, 0.0f, 0.0f, 0.0f,
     0x1.f4f5a2p-65f, 0x1.bf78e2p-108f, 0x1.9d88e2p-14f, 0x1.8f1e72p-124f, 0.0f, 0.0f,
     0x1.38c4c8p-38f, 0x1.09a04cp-82f, 0x1.551cd2p-83f, 0x1.6a4e3p-118f,
     0x1.cd8694p-76f, 0x1.7e71a8p-9f, 0.0f, 0x1.2c757p-103f, 0.0f, 0.0f,
     0x1.4075e2p-19f, 0.0f, 0x1.eea5aep-66f, 0.0f, 0x1.3432acp-35f, 0x1.81f6bcp-22f,
     0x1.6130e2p-81f, 0.0f, 0.0f, 0.0f, 0x1.914d7ap-93f, 0x1.dfd714p-20f, 0.0f,
     0x1.8e8cp-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e9bb7ap-53f,
     0x1.c38a5cp-62f, 0.0f, 0.0f, 0x1.dd855cp-2f, 0x1.6761e4p-110f, 0.0f,
     0x1.3b55a6p-88f, 0.0f, 0x1.0bd024p-54f, 0x1.223826p-16f, 0.0f, 0x1.e330dcp-48f,
     0x1.8711d4p-90f, 0.0f, 0x1.177c1ap-104f, 0.0f, 0x1.96d3fcp-125f, 0x1.cf3d6cp-75f,
     0x1.064ae4p-90f, 0x1.9eff6ep-86f, 0x1.82d5aep-117f, 0x1.33e6dcp-66f, 0.0f, 0.0f,
     0x1.e910cep-126f, 0.0f, 0x1.e78dbap-87f, 0x1.87ef6p-32f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1p0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5fba2p-33f, 0x1.1b4bc2p-101f,
     0x1.820bbp-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0c20bep-48f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.50f648p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d22b0ep-65f, 0.0f,
     0x1.c0a548p-12f, 0x1.14ed9ep-17f, 0.0f, 0.0f, 0x1.acd0dep-64f, 0.0f, 0.0f,
     0x1.9ed368p-77f, 0x1.3dfccp-54f, 0x1.f10a72p-34f, 0.0f, 0x1.ca47bep-83f, 0.0f,
     0x1.2960ap-44f, 0.0f, 0.0f, 0x1.f15cb8p-46f, 0x1.2a715ap-126f, 0x1.a5282ap-61f,
     0x1.4db36cp-86f, 0x1.495c02p-13f, 0.0f, 0.0f, 0x1.83e496p-92f, 0x1.4fe8f2p-53f,
     0x1.4228ep-45f, 0.0f, 0.0f, 0x1.f4ea36p-112f, 0x1.a3855ep-48f, 0.0f,
     0x1.7a4608p-96f, 0.0f, 0.0f, 0x1.a09e36p-79f, 0x1.5956a2p-10f, 0.0f,
     0x1.1e5392p-108f, 0x1.2e37c6p-39f, 0.0f, 0.0f, 0x1.4d08b8p-95f, 0x1.ea9688p-106f,
     0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.8bb3bep-108f, 0.0f, 0.0f, 0x1.c76898p-118f,
     0x1.a43f6ap-109f, 0.0f, 0x1.57c82p-33f, 0.0f, 0x1.04f65ep-118f, 0x1.e5fd66p-95f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9fea38p-120f, 0x1.0fd19cp-77f,
     0x1.00853cp-81f, 0x1.fa63f4p-11f, 0x1.ab2c9p-51f, 0x1.94288cp-103f,
     0x1.bb2f88p-67f, 0.0f, 0.0f, 0x1.fe8b92p-77f, 0x1.221df2p-117f, 0.0f, 0.0f,
     0x1.6c9c06p-46f, 0x1.e866cp-65f, 0.0f, 0x1.5416p-91f, 0x1.3b3ff4p-20f,
     0x1.c4caacp-95f, 0x1.d22b06p-19f, 0.0f, 0.0f, 0.0f, 0x1.57f3p-87f, 0.0f,
     0x1.b82dc6p-110f, 0x1.0aa4p-86f, 0.0f, 0x1.beda38p-94f, 0.0f, 0x1.d33708p-117f,
     0x1.a1dc3cp-72f, 0.0f, 0.0f, 0x1.726fcap-125f, 0x1.ec6bd2p-120f, 0.0f, 0x1p0f,
     0.0f, 0x1.3125aap-106f, 0.0f, 0x1.d3d3bp-112f, 0x1.9e850ap-98f, 0.0f,
     0x1.856ab2p-44f, 0.0f, 0x1.67a4eep-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.17de78p-92f,
     0x1p0f, 0.0f, 0x1.b1c7b8p-88f, 0.0f, 0.0f, 0.0f, 0x1.675c0ap-12f,
     0x1.55b25cp-119f, 0x1.748332p-3f, 0.0f, 0x1.b785a8p-18f, 0.0f, 0.0f,
     0x1.0c5e82p-60f, 0.0f, 0x1.6dc048p-52f, 0x1.c100e6p-97f, 0.0f, 0x1.fdd97ep-116f,
     0x1.cd94ecp-9f, 0x1.da5a52p-25f, 0.0f, 0.0f, 0x1.4ca27ap-124f, 0x1.e4e9d2p-92f,
     0x1.811d9ap-11f, 0.0f, 0.0f, 0x1.bbcadap-62f, 0.0f, 0x1.ae3b14p-79f,
     0x1.220d64p-37f, 0.0f, 0x1.3f5166p-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fcc258p-4f, 0.0f, 0x1.e9fc5p-92f, 0x1.fbad4p-17f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.5ed43p-69f, 0x1.9999bap-90f, 0.0f, 0x1.5a4706p-59f,
     0.0f, 0.0f, 0x1.bfd16p-60f, 0.0f, 0x1.17a108p-82f, 0.0f, 0x1.9def22p-123f,
     0x1.babd08p-26f, 0x1.85ce5p-106f, 0x1.26feap-3f, 0x1.1799b6p-80f,
     0x1.fe1a6cp-55f, 0x1.64a496p-119f, 0.0f, 0x1.b309b2p-96f, 0x1.3674d6p-24f,
     0x1.a972c8p-73f, 0.0f, 0.0f, 0x1.0f308cp-86f, 0.0f, 0x1.fcf38ap-121f,
     0x1.515ccp-26f, 0x1.02974p-120f, 0x1.620578p-117f, 0x1.4924dcp-110f,
     0x1.93cf56p-111f, 0.0f, 0x1.b2cb92p-79f, 0.0f, 0x1.f277f2p-34f, 0x1.23e0dcp-57f,
     0.0f, 0.0f, 0.0f, 0x1.4cb588p-114f, 0x1.85c656p-83f, 0x1.690a76p-83f,
     0x1.dd502cp-28f, 0x1.d5362ap-98f, 0x1.2a7c2p-63f, 0x1.93af5ep-86f,
     0x1.fc9116p-61f, 0x1.51a0fcp-60f, 0x1.192d5cp-84f, 0.0f, 0.0f, 0x1.4d3872p-21f,
     0.0f, 0x1.06c856p-49f, 0.0f, 0x1.0e5e0cp-115f, 0.0f, 0.0f, 0x1.490abcp-97f, 0.0f,
     0.0f, 0x1.821c22p-57f, 0x1.f4c0ecp-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.61923ap-101f,
     0.0f, 0.0f, 0.0f, 0x1.7ea4bep-112f, 0x1.32845cp-81f, 0x1.d0cd66p-105f,
     0x1.e5ebb8p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c69868p-113f, 0x1.b9cfc6p-85f,
     0x1.e2c52p-122f, 0.0f, 0.0f, 0x1.43e2f6p-73f, 0x1.ab6cc8p-71f, 0.0f, 0x1p0f,
     0x1.95c4fap-83f, 0x1.12e748p-70f, 0.0f, 0x1.ef3114p-74f, 0.0f, 0x1.f7edp-3f,
     0.0f, 0x1.ebd1dp-36f, 0.0f, 0.0f, 0.0f, 0x1.79eca8p-44f, 0x1.7dec7ep-115f, 0.0f,
     0.0f, 0x1.07e08cp-91f, 0.0f, 0x1.2defcep-2f, 0.0f, 0x1.bf41bep-117f,
     0x1.733f2ep-25f, 0.0f, 0x1.3455a8p-103f, 0x1.729b4p-99f, 0.0f, 0x1.b0269cp-39f,
     0x1.407c7ep-114f, 0.0f, 0.0f, 0x1.4ee0f6p-62f, 0.0f, 0x1.8b7ab4p-28f,
     0x1.6f588ep-125f, 0x1.aaf4bep-48f, 0x1.8f4df2p-48f, 0x1.755edcp-7f,
     0x1.c621fap-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.19b10cp-121f, 0.0f,
     0x1.676588p-104f, 0x1.d3d82ep-122f, 0x1.813bacp-31f, 0.0f, 0.0f, 0.0f,
     0x1.57e7f2p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.43e918p-67f, 0x1.b0d52ap-122f, 0.0f,
     0.0f, 0x1.5b0c5p-30f, 0.0f, 0x1.51266p-57f, 0x1.caadcp-91f, 0x1.51bedp-9f,
     0x1.e1d8fcp-21f, 0x1.03402cp-62f, 0.0f, 0x1.f7a0bp-94f, 0.0f, 0x1.47633ep-19f,
     0.0f, 0x1.f083bep-24f, 0x1.814866p-39f, 0.0f, 0.0f, 0.0f, 0x1.2edeep-95f,
     0x1.9864fp-58f, 0.0f, 0x1.8812aap-113f, 0.0f, 0x1.114aacp-125f, 0.0f, 0.0f,
     0x1.3742a8p-36f, 0.0f, 0x1.77f11ap-26f, 0.0f, 0x1.8b95a6p-80f, 0x1.0044p-115f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ae79a8p-76f, 0x1.c4aa7p-25f, 0x1.2707e6p-68f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.86bb68p-112f, 0.0f, 0x1.6c93dcp-39f, 0x1.eab89ep-92f,
     0.0f, 0x1.bc0c18p-98f, 0.0f, 0.0f, 0.0f, 0x1.90f934p-29f, 0.0f, 0x1.cb9d9cp-32f,
     0.0f, 0.0f, 0.0f, 0x1.9ff266p-49f, 0.0f, 0x1.634a36p-28f, 0x1.587ab6p-73f,
     0x1.e136ep-116f, 0.0f, 0x1.a7f52p-83f, 0.0f, 0.0f, 0x1.edb46ep-53f,
     0x1.4bbfe8p-39f, 0.0f, 0x1.e30626p-34f, 0x1.7cedaep-86f, 0.0f, 0x1.a82646p-121f,
     0x1.f6b9c4p-105f, 0x1.d28e78p-21f, 0x1.b368a4p-107f, 0.0f, 0x1.7f4dd4p-123f,
     0.0f, 0.0f, 0x1.3c0cb6p-116f, 0.0f, 0x1.149e2ap-87f, 0x1.28bb48p-7f,
     0x1.49f036p-95f, 0x1.91dfc6p-67f, 0x1.1f5cbap-16f, 0.0f, 0.0f, 0x1.8bea2cp-112f,
     0x1.569b4cp-117f, 0.0f, 0x1.ead9a4p-9f, 0.0f, 0x1.a935b6p-99f, 0.0f,
     0x1.500e1cp-65f, 0x1.9bdfe4p-85f, 0x1.71e012p-45f, 0.0f, 0x1.3c0368p-125f,
     0x1.b4be34p-113f, 0.0f, 0x1.ed4912p-77f, 0x1.509984p-54f, 0x1.b78b0ep-19f,
     0x1.4888a6p-47f, 0x1.f32d76p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4249eap-118f,
     0.0f, 0x1.c5fea2p-87f, 0x1.abe574p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.01a862p-78f,
     0.0f, 0x1.8bac0ap-63f, 0.0f, 0x1.e74e24p-1f, 0.0f, 0.0f, 0x1.415eaep-104f,
     0x1.f216a2p-91f, 0.0f, 0x1.2b714ep-98f, 0x1.0a0634p-47f, 0x1.f3e504p-71f,
     0x1.a7c96p-50f, 0x1.79a7aap-52f, 0.0f, 0x1.dd54ep-70f, 0.0f, 0.0f, 0.0f,
     0x1.941636p-10f, 0.0f, 0.0f, 0.0f, 0x1.8f6bf8p-31f, 0.0f, 0x1.63c6c4p-54f,
     0x1.a1ccep-18f, 0x1.0c6072p-14f, 0.0f, 0.0f, 0x1.4c4cdep-13f, 0.0f, 0.0f,
     0x1.88338cp-8f, 0.0f, 0x1.b116b8p-2f, 0x1.6d84aap-121f, 0.0f, 0x1.a13eecp-87f,
     0.0f, 0x1.044714p-113f, 0x1.34d2fcp-59f, 0x1.2c6b5p-13f, 0x1.dc3d8cp-9f,
     0x1.d62716p-119f, 0x1.b94ccap-36f, 0.0f, 0x1.031426p-1f, 0x1.37aa9ep-125f, 0.0f,
     0.0f, 0.0f, 0x1.5d65b2p-54f, 0.0f, 0.0f, 0x1.85b0b4p-12f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.58d0aep-38f, 0.0f, 0.0f, 0.0f, 0x1.48838p-68f,
     0x1.599bc6p-86f, 0x1.fde5e2p-101f, 0x1.ac7468p-61f, 0.0f, 0.0f, 0x1.3811p-109f,
     0x1.3d133ep-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.810186p-121f,
     0.0f, 0x1.d69276p-25f, 0.0f, 0.0f, 0x1.57aef8p-2f, 0.0f, 0x1.d37e6ap-6f,
     0x1.a17138p-1f, 0x1.df84a6p-38f, 0x1.ee40fap-76f, 0x1.4fae4cp-15f,
     0x1.6f688cp-71f, 0x1.a48404p-42f, 0.0f, 0.0f, 0x1.d24d44p-54f, 0.0f, 0.0f,
     0x1.9054eap-98f, 0.0f, 0x1.90d77ap-53f, 0x1.602276p-87f, 0.0f, 0.0f,
     0x1.042cc8p-3f, 0x1.774a8ap-89f, 0.0f, 0.0f, 0x1.c2c306p-76f, 0.0f, 0.0f, 0.0f,
     0x1.68f73ap-77f, 0.0f, 0x1.2cb888p-5f, 0x1.f378e6p-74f, 0x1.f3d686p-45f, 0.0f,
     0x1.1bfe8ap-115f, 0.0f, 0.0f, 0.0f, 0x1.c4a3ccp-116f, 0x1.af4f74p-97f,
     0x1.65ca1ep-108f, 0x1.77eaa8p-61f, 0.0f, 0x1.0fffep-89f, 0.0f, 0.0f, 0.0f,
     0x1.b4172p-36f, 0x1.ac205ep-25f, 0x1.61e5acp-116f, 0x1.5749dep-16f,
     0x1.9a25p-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f34e96p-65f,
     0x1.6e9f8ap-110f, 0x1.182b86p-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.caf9eap-80f, 0.0f,
     0x1.3e54bep-77f, 0x1.9f3a6ep-3f, 0x1.0f044p-101f, 0x1.617fb6p-72f, 0.0f,
     0x1.2e3ed8p-59f, 0.0f, 0.0f, 0x1.8dd4d4p-111f, 0.0f, 0x1.77bc1ep-98f,
     0x1.1f5ac8p-9f, 0.0f, 0.0f, 0x1.8637eep-61f, 0x1.b2a666p-112f, 0x1.cbc04ap-77f,
     0.0f, 0x1.10426cp-17f, 0.0f, 0x1.56e66ap-30f, 0.0f, 0.0f, 0x1.21357cp-15f,
     0x1.a319fep-2f, 0.0f, 0x1.1fb1ccp-117f, 0.0f, 0x1.9dcba8p-62f, 0x1.deb8f8p-19f,
     0.0f, 0.0f, 0x1.6d3b9ep-89f
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
            tmp1 = Sleef_atanhf8_u10kvx(tmp0);
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
    printf("Sleef_atanhf8_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_atanhf8_u10kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
