/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_tanf8_u10kvx.c --function Sleef_tanf8_u10kvx --headers \
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
     0.0f, 0x1.9f9382p-93f, 0x1.73c22ep-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c9528p-23f,
     0.0f, 0.0f, 0.0f, 0x1.21b62cp-64f, 0x1.a2de78p-12f, 0.0f, 0.0f, 0.0f,
     0x1.86aa9ep-41f, 0x1.9169dap-42f, 0x1.8c1p-53f, 0x1.9d578ap-13f, 0x1.65d17cp-20f,
     0x1.c53efep-34f, 0.0f, 0x1.d82d02p-125f, 0x1.29f598p-34f, 0.0f, 0.0f,
     0x1.64ecf4p-123f, 0.0f, 0.0f, 0x1.08cc5ap-27f, 0x1.99a0dap-111f, 0x1.f9fbc4p-42f,
     0x1.6b3874p-56f, 0.0f, 0x1.d423e2p-35f, 0x1.d08bfcp-39f, 0x1.154d94p-80f, 0.0f,
     0.0f, 0.0f, 0x1.217c4cp-121f, 0.0f, 0x1.b95d0ap-85f, 0.0f, 0.0f, 0x1.dbbecp-109f,
     0.0f, 0.0f, 0x1.29d9cp-3f, 0x1.de014cp-85f, 0.0f, 0.0f, 0.0f, 0x1.c9541ap-21f,
     0x1.384688p-34f, 0.0f, 0x1.96768cp-29f, 0.0f, 0.0f, 0.0f, 0x1.c7ef12p-27f,
     0x1.66da9ap-16f, 0.0f, 0x1.8021d8p-6f, 0.0f, 0.0f, 0x1.0aa74p-46f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.3d0b02p-1f, 0x1.e6ecb4p-66f, 0x1.4526cep-68f, 0x1.19656cp-66f,
     0.0f, 0.0f, 0x1.830d9cp-65f, 0x1.b8a00ep-52f, 0x1.60c0cep-116f, 0x1.b4621ap-71f,
     0.0f, 0x1.f41d8p-73f, 0.0f, 0.0f, 0x1.3578cap-21f, 0.0f, 0x1.ded9ecp-24f,
     0x1.f94938p-65f, 0x1.55eab6p-85f, 0x1.eeec72p-101f, 0x1.e0ed48p-96f, 0.0f, 0.0f,
     0x1.fd63f6p-111f, 0.0f, 0.0f, 0.0f, 0x1.ecab2p-22f, 0x1.30c08ep-123f,
     0x1.cd4e1cp-111f, 0x1.75b384p-107f, 0.0f, 0.0f, 0x1.be2b4cp-69f, 0.0f,
     0x1.66455ap-74f, 0.0f, 0x1.8228e2p-61f, 0x1.8f6fe6p-81f, 0x1.1d75dap-82f, 0.0f,
     0.0f, 0.0f, 0x1.0aa75p-94f, 0x1.c3955ep-120f, 0x1.29e676p-34f, 0x1.cbcfe8p-35f,
     0x1.3e3b0cp-12f, 0.0f, 0.0f, 0x1.3a1f46p-63f, 0.0f, 0.0f, 0x1.2f4704p-20f, 0.0f,
     0.0f, 0.0f, 0x1.c94006p-24f, 0.0f, 0x1.d6b4f4p-4f, 0.0f, 0.0f, 0.0f,
     0x1.4b73d2p-7f, 0x1.f29976p-90f, 0.0f, 0.0f, 0x1.72fc3ap-39f, 0.0f, 0.0f,
     0x1.ff9d04p-31f, 0.0f, 0x1.27f998p-113f, 0.0f, 0.0f, 0x1.d91216p-63f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.9a08d8p-41f, 0x1.7dbf7ep-120f, 0.0f, 0x1.32780ap-56f,
     0x1.545e16p-19f, 0x1.7d402ap-40f, 0.0f, 0.0f, 0x1.f53938p-37f, 0x1.a7a80cp-20f,
     0.0f, 0.0f, 0x1.3a8114p-13f, 0.0f, 0x1.8092a4p-86f, 0.0f, 0.0f, 0x1.bf80c8p-126f,
     0x1.8357d4p-53f, 0x1.11a778p-36f, 0x1.6023dp-28f, 0x1.a8bf8cp-113f, 0.0f,
     0x1.1b180cp-70f, 0x1.f6d0f8p-74f, 0.0f, 0x1.8c0cd8p-49f, 0x1.2e83e6p-38f, 0.0f,
     0.0f, 0.0f, 0x1.e40484p-109f, 0x1.960a66p-33f, 0x1.4b0de4p-66f, 0x1.850e7p-93f,
     0.0f, 0.0f, 0x1.40ffe6p-21f, 0.0f, 0.0f, 0.0f, 0x1.7d83d6p-111f, 0x1.a0de1cp-90f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.07633cp-115f,
     0x1.8317f4p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1b2076p-126f, 0x1.9b3d3cp-96f,
     0x1.2dc4e8p-96f, 0.0f, 0.0f, 0x1.62f9a8p-126f, 0.0f, 0.0f, 0x1.d4ab5p-84f,
     0x1.52d9d2p-59f, 0x1.f6300ep-120f, 0x1.276f92p-59f, 0x1.d8be94p-107f, 0.0f,
     0x1.8677c6p-61f, 0x1.38a69ep-81f, 0x1.4026d6p-74f, 0.0f, 0.0f, 0x1.fb0a4ap-69f,
     0x1.a99d7ap-125f, 0x1.aff3e6p-120f, 0x1.eb608p-42f, 0x1.11ceb6p-85f,
     0x1.dc6edap-85f, 0x1.e2771ep-31f, 0x1.656952p-100f, 0x1.e9e09p-51f, 0.0f, 0.0f,
     0x1.bc1544p-95f, 0x1.42008p-77f, 0x1.360aep-106f, 0x1.6e23e2p-18f,
     0x1.3e8846p-83f, 0x1.ba95c8p-78f, 0.0f, 0x1.1c0222p-69f, 0.0f, 0x1.42eccep-25f,
     0.0f, 0.0f, 0.0f, 0x1.1b1a92p-93f, 0.0f, 0x1.8fbcd4p-7f, 0x1.965d7ap-107f,
     0x1.ed4616p-18f, 0.0f, 0.0f, 0x1.0cb7d2p-2f, 0x1.eb0e5cp-3f, 0.0f, 0.0f, 0.0f,
     0x1.c0be5cp-39f, 0x1.cea5b8p-35f, 0x1.83842cp-93f, 0x1.cf340cp-87f, 0.0f,
     0x1.32218ep-58f, 0x1.dcbc38p-80f, 0x1.806158p-23f, 0x1.49c78ap-19f, 0.0f,
     0x1.350176p-112f, 0x1.7c6086p-8f, 0.0f, 0.0f, 0x1.77488cp-89f, 0.0f,
     0x1.f03828p-42f, 0.0f, 0x1.2eb52ap-1f, 0.0f, 0x1.68a8b8p-23f, 0.0f,
     0x1.c66be6p-79f, 0x1.6fa76p-95f, 0.0f, 0x1.41d6a6p-18f, 0.0f, 0x1.59e0cep-16f,
     0.0f, 0x1.0bda4ep-52f, 0x1.a4ad7p-59f, 0x1.2e34dep-53f, 0.0f, 0.0f,
     0x1.b68ae6p-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a8e6d6p-29f, 0.0f,
     0x1.03a84p-124f, 0x1.26d8bep-34f, 0.0f, 0.0f, 0.0f, 0x1.74bb36p-116f,
     0x1.731682p-17f, 0x1.9aed8ep-31f, 0x1.a558cp-35f, 0x1.9b0c46p-33f, 0.0f, 0.0f,
     0x1.812264p-92f, 0x1.b679fep-84f, 0x1.418c5ep-91f, 0.0f, 0x1.2c769cp-43f, 0.0f,
     0x1.945bdp-16f, 0x1.3cb53p-74f, 0x1.50184ap-79f, 0x1.0a17dap-56f,
     0x1.b4194ap-40f, 0.0f, 0x1.bd6d62p-67f, 0.0f, 0x1.c0d6d2p-60f, 0.0f, 0.0f, 0.0f,
     0x1.04dc76p-85f, 0x1.e154dap-94f, 0x1.17bc82p-75f, 0.0f, 0.0f, 0x1.f9d0f2p-53f,
     0.0f, 0x1.d5cc3p-118f, 0.0f, 0x1.4f0b0ep-4f, 0.0f, 0.0f, 0x1.b9924cp-50f, 0.0f,
     0.0f, 0x1.ff6346p-91f, 0.0f, 0.0f, 0x1.6167c6p-10f, 0x1.92252ap-89f, 0.0f,
     0x1.b70822p-125f, 0x1.e2fad6p-19f, 0x1.5a8046p-10f, 0.0f, 0.0f, 0x1.f8b7e2p-12f,
     0.0f, 0x1.f788e2p-108f, 0.0f, 0.0f, 0.0f, 0x1.968982p-18f, 0x1.9f1eb6p-97f, 0.0f,
     0.0f, 0.0f, 0x1.6c86eap-9f, 0x1.53c78ap-21f, 0x1.7c276p-98f, 0x1.9f8a26p-29f,
     0x1.11ada4p-65f, 0x1.86eb9ap-93f, 0.0f, 0.0f, 0x1.22cf92p-40f, 0x1.8d0d78p-79f,
     0x1.bc7edep-92f, 0.0f, 0x1.489a5ep-101f, 0.0f, 0x1.060182p-100f, 0x1.5998dp-51f,
     0x1.2746e6p-46f, 0x1.9cec4ep-9f, 0.0f, 0.0f, 0x1.b3edbap-78f, 0x1.76f7cep-17f,
     0.0f, 0.0f, 0x1.cab4fep-46f, 0x1.a9753ap-28f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c2ca3cp-44f, 0.0f, 0.0f, 0.0f, 0x1.44055p-113f, 0x1.30a47cp-12f,
     0x1.06f9d4p-8f, 0.0f, 0x1.9ba5e8p-91f, 0.0f, 0.0f, 0x1.2b3532p-54f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.c78046p-77f, 0x1.f71224p-16f, 0.0f, 0.0f, 0x1.6e295ap-6f, 0.0f,
     0.0f, 0.0f, 0x1.e3da72p-85f, 0.0f, 0x1.66318ap-116f, 0.0f, 0x1.88dd9cp-6f, 0.0f,
     0x1.aeedcep-85f, 0x1.0c7234p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.17eaeap-31f, 0.0f, 0x1.bf2c92p-101f, 0x1.45c392p-78f, 0x1.941b48p-89f, 0.0f,
     0.0f, 0x1.be3f1cp-77f, 0x1.f9d822p-11f, 0.0f, 0x1.3ab912p-112f, 0x1.a6290ap-9f,
     0x1.6e6a64p-51f, 0.0f, 0.0f, 0.0f, 0x1.4a7c52p-118f, 0.0f, 0.0f, 0.0f,
     0x1.d00d8p-53f, 0.0f, 0x1.679eeap-61f, 0x1.d3a1ap-68f, 0x1.0b2fc8p-108f,
     0x1.728bbap-92f, 0x1.ba62b6p-16f, 0.0f, 0x1.97d83cp-58f, 0.0f, 0x1.46f5b6p-126f,
     0x1.462ab6p-42f, 0x1.0b915ep-81f, 0x1.c1f5p-69f, 0x1.643f14p-57f, 0.0f, 0.0f,
     0x1.50a42ep-6f, 0.0f, 0x1.117a3ap-51f, 0.0f, 0.0f, 0.0f, 0x1.e57e72p-21f,
     0x1.35519p-119f, 0x1.12c90ep-124f, 0x1.952ec6p-103f, 0x1.4254e8p-84f,
     0x1.8e6366p-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.30bfccp-93f, 0.0f,
     0.0f, 0x1.c6a268p-25f, 0.0f, 0x1.205d06p-125f, 0x1.4d3362p-85f, 0x1.53fbeep-126f,
     0x1.8adbc4p-91f, 0x1.233514p-17f, 0.0f, 0x1.1b9902p-24f, 0x1.38bc6ap-57f, 0.0f,
     0x1.3968cp-11f, 0x1.44c858p-83f, 0x1.0a378ap-79f, 0.0f, 0.0f, 0x1.fa0b26p-30f,
     0x1.679106p-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4d51bp-65f, 0x1.b88b28p-80f,
     0x1.51ea94p-3f, 0x1.1d9bfap-43f, 0x1.e102dp-43f, 0.0f, 0x1.86a92ap-37f,
     0x1.ff3e44p-102f, 0.0f, 0.0f, 0.0f, 0x1.60c872p-112f, 0.0f, 0x1.4bc288p-52f,
     0.0f, 0x1.d4dfa4p-23f, 0.0f, 0.0f, 0x1.a3d5cap-103f, 0x1.82518ep-74f,
     0x1.75ce62p-13f, 0.0f, 0.0f, 0x1.529a82p-73f, 0x1.aa205p-96f, 0x1.177926p-84f,
     0.0f, 0.0f, 0x1.f7a3dep-19f, 0x1.849822p-14f, 0x1.0875bap-26f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ec14e8p-30f, 0x1.0b0a9p-107f, 0x1.ff875p-101f, 0x1.d54366p-3f,
     0.0f, 0x1.98e828p-68f, 0.0f, 0x1.715bf6p-94f, 0.0f, 0x1.17172ap-35f, 0.0f, 0.0f,
     0.0f, 0x1.1d4c8ap-74f, 0.0f, 0.0f, 0x1.71121ep-82f, 0x1.5b93e4p-96f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.82f5ccp-16f, 0.0f, 0x1.8fe264p-54f, 0.0f, 0x1.205696p-76f,
     0x1.9a71fp-71f, 0.0f, 0x1.ed3b62p-109f, 0x1.5fc746p-101f, 0x1.17663p-90f,
     0x1.8a837ap-56f, 0x1.84e806p-90f, 0.0f, 0x1.5a306ep-116f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.175d8cp-123f, 0.0f, 0x1.95e9d2p-33f, 0x1.0c1284p-40f, 0.0f, 0.0f,
     0x1.cadb84p-103f, 0.0f, 0.0f, 0.0f, 0x1.1d408p-100f, 0.0f, 0x1.2de9b2p-101f,
     0.0f, 0.0f, 0x1.4e1a02p-10f, 0.0f, 0.0f, 0x1.a4dd2ep-51f, 0x1.d9cebcp-125f,
     0x1.c0722ep-113f, 0x1.5b5272p-60f, 0.0f, 0x1.5333b4p-123f, 0.0f, 0.0f,
     0x1.4e35bcp-27f, 0x1.348766p-24f, 0x1.6e368ep-103f, 0x1.990618p-40f, 0.0f, 0.0f,
     0x1.48a362p-108f, 0x1.3fb1f2p-48f, 0.0f, 0x1.0a3d46p-95f, 0x1.2701b6p-36f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.76751cp-52f, 0.0f, 0x1.bb0a9ap-61f, 0x1.6109bp-101f, 0.0f,
     0.0f, 0x1.b2ae66p-62f, 0x1.74253ap-7f, 0x1.a35c66p-83f, 0x1.0b50b2p-38f,
     0x1.692e66p-29f, 0x1.4a3e96p-19f, 0.0f, 0x1.e7bcdep-10f, 0x1.4998f8p-77f, 0.0f,
     0x1.50157cp-125f, 0x1.755872p-8f, 0x1.d25fe4p-58f, 0x1.d099fcp-60f, 0x1p0f, 0.0f,
     0x1.82818p-25f, 0x1.a6b6e6p-118f, 0.0f, 0.0f, 0.0f, 0x1.9fcebap-26f, 0.0f,
     0x1.f240b4p-14f, 0x1.09d6b8p-113f, 0x1.8cda36p-18f, 0.0f, 0x1.a86a62p-34f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.af781cp-3f, 0.0f, 0x1.68ffb6p-46f, 0x1.a24458p-24f, 0.0f,
     0.0f, 0x1.0643fap-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bf8284p-88f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.2f759p-76f, 0x1.e85f3cp-10f, 0x1.2cb3d6p-18f, 0x1.4afccep-15f,
     0x1.60f3c8p-35f, 0x1.dcdd8cp-11f, 0.0f, 0x1.2fa6d8p-65f, 0.0f, 0.0f, 0.0f,
     0x1.947b24p-54f, 0.0f, 0.0f, 0x1.805ef6p-112f, 0.0f, 0.0f, 0x1.c993dcp-123f,
     0.0f, 0.0f, 0x1.dfac64p-101f, 0.0f, 0.0f, 0x1.c7b414p-35f, 0.0f, 0x1.4b6f3ep-2f,
     0.0f, 0x1.de8a1ap-100f, 0x1.af9c68p-117f, 0x1.8db81cp-95f, 0x1.40e62ep-121f,
     0x1.083cdcp-29f, 0x1.d9e638p-61f, 0.0f, 0x1.236b4cp-95f, 0.0f, 0.0f,
     0x1.73c336p-51f, 0x1.a2f2aap-13f, 0x1.42ca52p-113f, 0x1.b252e6p-74f, 0.0f,
     0x1.e5bcf6p-109f, 0x1.616a3ap-55f, 0x1.af6d76p-50f, 0x1.f7cfd8p-34f, 0.0f,
     0x1.aab892p-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0bbe8ep-65f, 0x1.f0daccp-30f,
     0x1.cab7e4p-63f, 0.0f, 0x1.8fc57cp-121f, 0.0f, 0.0f, 0x1.332638p-51f,
     0x1.664bbp-43f, 0.0f, 0x1.4a365p-51f, 0.0f, 0.0f, 0x1.6113ccp-106f,
     0x1.228cb4p-7f, 0x1.c10cb4p-7f, 0.0f, 0x1.3874d4p-117f, 0x1.9ccbbp-41f, 0.0f,
     0x1.292e06p-94f, 0x1.f58f88p-107f, 0.0f, 0.0f, 0x1.c9e58ap-5f, 0.0f,
     0x1.4d6c2ap-2f, 0x1.16ac86p-28f, 0.0f, 0.0f, 0x1.3819b4p-42f, 0.0f,
     0x1.7b46b8p-97f, 0.0f, 0x1.59612ep-10f, 0.0f, 0.0f, 0x1.3526bep-15f,
     0x1.1ab3dap-37f, 0.0f, 0x1.f213e4p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.705b46p-65f,
     0.0f, 0x1.6ebc2p-115f, 0x1.0e88cep-54f, 0.0f, 0.0f, 0x1.0c7564p-88f,
     0x1.2f3a04p-81f, 0x1.eb98eep-16f, 0.0f, 0.0f, 0.0f, 0x1.4b587p-39f,
     0x1.378ceep-113f, 0x1.71ef22p-112f, 0x1.a8549cp-41f, 0.0f, 0x1.b23f4cp-8f,
     0x1.99669ap-69f, 0x1.63677ap-106f, 0x1.45261p-109f, 0x1.f08a36p-76f,
     0x1.bd8798p-62f, 0x1.81b0cap-77f, 0x1.d7a27p-8f, 0x1.2b1f5ep-35f,
     0x1.24168ep-10f, 0x1.9d97bcp-4f, 0.0f, 0x1.636d6cp-17f, 0.0f, 0x1.39a05p-123f,
     0x1.56a5eap-124f, 0x1.f67bc2p-119f, 0.0f, 0x1.de5caap-66f, 0x1.50b72cp-9f,
     0x1.3b3744p-16f, 0.0f, 0.0f, 0x1.d84df6p-45f, 0.0f, 0.0f, 0x1.1ce18ap-104f, 0.0f,
     0x1.bb3348p-47f, 0x1.71adf8p-18f, 0x1.3516c4p-105f, 0.0f, 0x1.0ca092p-58f,
     0x1.701c08p-16f, 0.0f, 0x1.41e748p-70f, 0.0f, 0.0f, 0x1.4514c8p-99f,
     0x1.f076a8p-62f, 0.0f, 0x1.39b08ep-83f, 0.0f, 0.0f, 0x1.6273c4p-64f,
     0x1.322094p-57f, 0.0f, 0.0f, 0.0f, 0x1.da40bp-54f, 0.0f, 0x1.6aac32p-31f, 0.0f,
     0x1.50221cp-2f, 0.0f, 0x1.c636a8p-88f, 0.0f, 0x1.c3c1c8p-71f, 0x1.1ca6fap-30f,
     0x1.c6bfb6p-86f, 0x1.ffe098p-15f, 0x1.71ed52p-98f, 0x1.219d64p-102f,
     0x1.d01e14p-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eb2fb4p-45f, 0x1.3d4616p-14f, 0.0f,
     0.0f, 0x1.729a0ep-49f, 0.0f, 0x1.bbbc2p-114f, 0.0f, 0x1.6f340cp-18f, 0.0f, 0.0f,
     0x1.91ce26p-101f, 0x1.71d714p-32f, 0x1.3dc426p-22f, 0x1.72babcp-40f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.48c724p-65f, 0.0f, 0.0f, 0x1.41d47ep-49f, 0x1.4a2a98p-114f,
     0x1.a63d18p-23f, 0.0f, 0.0f, 0x1.11af4cp-70f, 0x1.4abf38p-117f, 0.0f,
     0x1.b91c7ap-125f, 0.0f, 0x1.720e3p-76f, 0x1.b3c838p-75f, 0x1.7117acp-11f,
     0x1.9a2bd2p-38f, 0.0f, 0x1.9cb0c8p-47f, 0x1.644244p-9f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d1c682p-57f, 0.0f, 0.0f, 0x1.5144f6p-105f, 0.0f, 0x1.bab7ccp-115f,
     0x1.184982p-73f, 0x1.9c2fa4p-17f, 0.0f, 0x1.29a3fap-100f, 0.0f, 0x1.e54f28p-126f,
     0.0f, 0x1.ca83bep-80f, 0x1.e59f94p-54f, 0x1.ea8674p-35f, 0x1.cac9dep-19f, 0.0f,
     0x1.fdf11cp-105f, 0.0f, 0x1.919c42p-106f, 0x1.52eabcp-101f, 0.0f, 0x1.4fb52p-99f,
     0x1.c9ff0ap-113f, 0.0f, 0.0f, 0.0f, 0x1.b35e2ep-86f, 0x1.174c76p-112f, 0.0f,
     0x1.4610b2p-63f, 0.0f, 0.0f, 0.0f, 0x1.bf3f6cp-96f, 0x1.c41fe8p-77f, 0.0f, 0.0f,
     0.0f, 0x1.56edep-62f, 0x1.b3f6d4p-45f, 0x1.8ee514p-9f, 0.0f, 0.0f, 0.0f,
     0x1.c83c2cp-8f, 0x1.c45b2ap-110f, 0.0f, 0x1.90af64p-76f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3b8ad6p-36f, 0x1.c633e6p-126f, 0.0f, 0x1.699958p-61f, 0.0f, 0.0f,
     0x1.efeb3p-41f, 0x1.3d59bep-61f, 0x1.9679fep-60f, 0.0f, 0.0f, 0.0f,
     0x1.45e7dap-57f, 0.0f, 0.0f, 0.0f, 0x1.87e93ap-121f, 0x1.d7254ap-78f, 0.0f, 0.0f,
     0x1.67754cp-14f, 0x1.9c31acp-19f, 0x1.be3a26p-124f, 0x1.7466d4p-109f, 0.0f, 0.0f,
     0.0f, 0x1.d8fd7ap-40f, 0x1.0ac7b2p-104f, 0.0f, 0.0f, 0.0f, 0x1.cf5e6p-77f
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
            tmp1 = Sleef_tanf8_u10kvx(tmp0);
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
    printf("Sleef_tanf8_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_tanf8_u10kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
