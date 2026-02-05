/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_logf8_u35kvx.c --function Sleef_finz_logf8_u35kvx \
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
     0x1.35694ep-18f, 0x1.eb30ecp-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4b7a5p-116f, 0.0f, 0.0f, 0x1.0d951ap-92f, 0x1.87c3c6p-57f, 0.0f,
     0x1.e31f0ep-66f, 0x1.e9b678p-24f, 0x1.bdaf8p-68f, 0x1.74e83cp-74f,
     0x1.4047a2p-33f, 0x1.dde914p-93f, 0x1.cff91cp-73f, 0x1.78d0c4p-88f,
     0x1.4ea052p-30f, 0.0f, 0x1.7d0bc8p-19f, 0.0f, 0.0f, 0x1.a58852p-16f, 0.0f, 0.0f,
     0x1.11e3d4p-39f, 0x1.e319d8p-38f, 0x1.415ff2p-89f, 0x1.6bbce6p-126f, 0.0f, 0.0f,
     0x1.681dap-100f, 0x1.be9746p-22f, 0x1.b231cep-21f, 0.0f, 0x1.f5d8e4p-51f, 0.0f,
     0.0f, 0x1.6b4b84p-69f, 0x1.2a993p-18f, 0.0f, 0x1.0c444p-83f, 0.0f, 0.0f,
     0x1.9420f6p-43f, 0.0f, 0x1.5cc75ap-99f, 0x1.3f97a8p-114f, 0x1.56f036p-39f, 0.0f,
     0x1.e11f12p-112f, 0x1.dd8fbep-5f, 0.0f, 0x1.7464c4p-8f, 0x1.d23f44p-69f,
     0x1.93b80ap-78f, 0.0f, 0x1.7f91ccp-78f, 0.0f, 0.0f, 0.0f, 0x1.048d48p-69f,
     0x1.9839e8p-69f, 0.0f, 0x1.bb6b08p-30f, 0x1.5048dp-23f, 0x1.691924p-82f,
     0x1.c1672ap-40f, 0x1.1bfef4p-96f, 0.0f, 0.0f, 0x1.80907ap-92f, 0.0f, 0.0f, 0.0f,
     0x1.f95ef6p-85f, 0.0f, 0x1.565758p-6f, 0.0f, 0x1.30ab0ap-73f, 0x1.a0be78p-27f,
     0x1.f795fcp-116f, 0.0f, 0x1.c239d4p-121f, 0.0f, 0.0f, 0x1.4f1a14p-110f, 0.0f,
     0x1.43d246p-70f, 0.0f, 0x1.9182eep-53f, 0.0f, 0x1.c3843ap-113f, 0.0f,
     0x1.7855a8p-74f, 0.0f, 0x1.aa6444p-79f, 0.0f, 0.0f, 0x1.e09a4ap-94f, 0.0f,
     0x1.c6d72ep-54f, 0.0f, 0x1.89ef8ep-9f, 0x1.c81624p-26f, 0.0f, 0.0f,
     0x1.be97cep-10f, 0.0f, 0.0f, 0x1.0a905ap-48f, 0.0f, 0x1.159ef8p-97f, 0.0f, 0.0f,
     0x1.6de7e2p-91f, 0x1.4c64eap-100f, 0x1.de1c7ep-122f, 0.0f, 0x1.183948p-111f,
     0.0f, 0x1.7c1a84p-77f, 0x1.ba4872p-91f, 0.0f, 0x1.4d633ep-45f, 0.0f,
     0x1.969396p-6f, 0x1.89ea24p-95f, 0.0f, 0.0f, 0x1.d94b1cp-82f, 0x1.8afa3cp-8f,
     0.0f, 0x1.0152ap-4f, 0.0f, 0x1.1378ep-71f, 0x1.d58e56p-14f, 0x1.6de00cp-22f,
     0.0f, 0x1.3382c4p-98f, 0x1.211018p-93f, 0x1.79cd5ep-124f, 0x1.ccd95ap-109f, 0.0f,
     0.0f, 0x1.f63cecp-116f, 0.0f, 0.0f, 0x1.156214p-88f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.306938p-23f, 0x1.9f91d4p-42f, 0.0f, 0x1.791c1p-25f, 0.0f,
     0x1.a57a06p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f36728p-105f, 0x1.150a58p-53f,
     0.0f, 0x1.d2f34ep-105f, 0x1.c2b01cp-108f, 0x1.5d6df4p-22f, 0.0f, 0x1.d871dp-75f,
     0.0f, 0x1.44b04ap-48f, 0x1.f29612p-31f, 0.0f, 0x1.29b808p-69f, 0x1.d5e618p-107f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.dab094p-108f, 0x1.2fb53ep-79f, 0x1.46f9b2p-98f, 0.0f,
     0.0f, 0x1.42eb2ep-56f, 0x1.fa8f1p-99f, 0x1.29791ep-75f, 0.0f, 0.0f,
     0x1.c998a6p-40f, 0.0f, 0.0f, 0.0f, 0x1.ef3d78p-72f, 0x1.0f1a9p-105f, 0.0f,
     0x1.d5e86cp-111f, 0x1.214d12p-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3ff4cp-101f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.79fd06p-36f, 0.0f, 0x1.642a6cp-43f, 0x1.e4b644p-89f, 0.0f,
     0x1.7a268ap-47f, 0.0f, 0x1.67dca2p-90f, 0.0f, 0x1.5bb736p-22f, 0.0f,
     0x1.6f8192p-89f, 0x1.e57562p-116f, 0.0f, 0x1.d2b318p-91f, 0x1.35e3f2p-77f,
     0x1.eae046p-54f, 0x1.584d2ap-50f, 0x1.9c143ep-56f, 0x1.f15e64p-17f,
     0x1.a22ac4p-107f, 0.0f, 0x1.c51ddcp-11f, 0.0f, 0x1.b583fap-90f, 0.0f,
     0x1.52fa9cp-60f, 0x1.4306c8p-107f, 0x1.7ae14cp-100f, 0x1.3819cep-29f, 0.0f,
     0x1.ceb296p-22f, 0x1.80a5cap-30f, 0.0f, 0.0f, 0x1.4d54ep-31f, 0x1.6a5f4ap-4f,
     0.0f, 0.0f, 0x1.3757bap-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.383b36p-78f, 0.0f, 0.0f,
     0x1.997b66p-106f, 0x1.67a8bap-82f, 0x1.44b29cp-88f, 0.0f, 0.0f, 0.0f,
     0x1.92bf32p-29f, 0x1.cfe008p-12f, 0.0f, 0.0f, 0.0f, 0x1.fc4524p-109f, 0.0f, 0.0f,
     0x1.291674p-61f, 0x1.64448p-98f, 0.0f, 0.0f, 0x1.0dd158p-14f, 0x1.7f9866p-109f,
     0x1.738bc2p-6f, 0.0f, 0x1.0efafcp-51f, 0x1.d5bcdcp-91f, 0x1.7b8506p-69f,
     0x1.2f0eeep-13f, 0.0f, 0x1.3000b2p-21f, 0x1.9b2788p-126f, 0.0f, 0x1.e401f4p-50f,
     0.0f, 0.0f, 0x1.7bfed4p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ec569ep-51f,
     0x1.903bb6p-8f, 0.0f, 0.0f, 0.0f, 0x1.0d7362p-86f, 0.0f, 0.0f, 0x1.0ca62ap-14f,
     0x1.470134p-39f, 0.0f, 0x1.a300c4p-34f, 0.0f, 0x1.d93244p-6f, 0x1.c6d548p-104f,
     0.0f, 0x1.c6afe8p-56f, 0.0f, 0x1.4538ccp-27f, 0x1.a1d28cp-109f, 0x1.680a8cp-105f,
     0.0f, 0x1.fc3f4cp-66f, 0x1.9f326cp-116f, 0x1.429214p-20f, 0x1.97ba7p-9f,
     0x1.86e874p-60f, 0x1.98c764p-121f, 0.0f, 0x1.4cee4cp-76f, 0x1.eb87fap-31f,
     0x1.f7d9c4p-42f, 0.0f, 0x1.16599ap-17f, 0x1.8364ap-40f, 0x1.9635fcp-31f, 0.0f,
     0.0f, 0x1.35a2d4p-125f, 0.0f, 0.0f, 0.0f, 0x1.76aaa8p-8f, 0x1.54724ep-89f, 0.0f,
     0.0f, 0x1.a899c4p-2f, 0x1.8c3772p-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.1fca02p-36f, 0.0f, 0.0f, 0.0f, 0x1.6986a2p-79f, 0x1.53d2f2p-10f, 0.0f,
     0x1.33969ep-109f, 0.0f, 0.0f, 0.0f, 0x1.350dep-60f, 0.0f, 0x1.e51a3p-53f, 0.0f,
     0.0f, 0.0f, 0x1.7951ccp-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f7fe72p-31f,
     0x1.076eaap-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.97a5f4p-68f, 0x1.584616p-71f, 0x1.bc1ed6p-26f, 0x1.c3acd4p-25f,
     0x1.1d6206p-119f, 0x1.87be7cp-49f, 0x1.d21268p-9f, 0x1.12619ap-85f,
     0x1.3e12f8p-11f, 0x1.b66e62p-109f, 0x1.80d586p-82f, 0.0f, 0x1.fe7ee6p-37f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ce6e9ep-70f, 0x1.0e5b6cp-117f, 0.0f, 0.0f, 0x1.91239ap-90f,
     0x1.293432p-38f, 0.0f, 0.0f, 0.0f, 0x1.20c6p-76f, 0x1.f579f2p-109f,
     0x1.3dbea8p-13f, 0x1.4ee866p-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2af74p-120f,
     0x1.3b226ap-23f, 0x1.da12f2p-14f, 0x1.3d27b4p-114f, 0x1.fa6036p-106f,
     0x1.b80c32p-67f, 0x1.4254c2p-37f, 0.0f, 0x1.6a3c44p-123f, 0x1.e5c458p-98f,
     0x1.e648bp-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c8377p-31f,
     0.0f, 0x1.b9d84cp-46f, 0x1.2c125ep-97f, 0x1.99b066p-78f, 0.0f, 0.0f,
     0x1.5a85fcp-122f, 0.0f, 0x1.47bc4cp-77f, 0.0f, 0x1.c1f5ecp-74f, 0x1.fc1bep-50f,
     0.0f, 0x1.ee6272p-73f, 0.0f, 0x1.cb84d2p-53f, 0x1.8bdba6p-31f, 0x1.06fb8ap-73f,
     0x1.552c0ap-88f, 0x1.c4695p-88f, 0x1.aa7e7cp-22f, 0x1.f67ffp-27f, 0.0f, 0.0f,
     0x1.213822p-34f, 0.0f, 0.0f, 0x1.929dc2p-81f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.840b46p-62f, 0.0f, 0.0f, 0x1.66369ep-52f, 0.0f, 0x1.c7e78ap-126f, 0.0f, 0.0f,
     0.0f, 0x1.47115cp-7f, 0.0f, 0x1.f99388p-84f, 0x1.33ccd4p-89f, 0x1.faf0c2p-37f,
     0x1.e1437cp-59f, 0.0f, 0x1.2bb166p-111f, 0x1.b9ffa6p-51f, 0.0f, 0x1.24c22p-41f,
     0x1.039d14p-40f, 0x1.f96a1p-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.582b08p-32f,
     0x1.557066p-41f, 0.0f, 0x1.1e82c4p-32f, 0.0f, 0.0f, 0x1.e53b96p-96f,
     0x1.b7fc0cp-19f, 0.0f, 0x1.cdc3dep-60f, 0.0f, 0x1.907e8p-85f, 0x1.07de94p-5f,
     0x1.60bfb8p-108f, 0.0f, 0x1.68712cp-116f, 0.0f, 0x1.eca9a2p-91f, 0x1.7ff89ep-7f,
     0.0f, 0.0f, 0x1.bb1c52p-85f, 0.0f, 0x1.fb43c8p-55f, 0x1.1b5ea6p-58f, 0.0f, 0.0f,
     0x1.c3c452p-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f5a5f2p-2f, 0.0f, 0.0f,
     0x1.52bc3cp-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c82638p-105f, 0x1.831dfap-67f,
     0x1.8454ep-93f, 0x1.5e2fb2p-111f, 0.0f, 0x1.9dd4dcp-2f, 0x1.2f504p-87f,
     0x1.6dfbdap-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.85b2eap-53f, 0x1p0f,
     0x1.9b25b4p-56f, 0.0f, 0x1.dd6612p-77f, 0x1.92d33ep-72f, 0x1.8d01b2p-96f,
     0x1.44f948p-79f, 0x1.f7e8fep-103f, 0x1.0ca3bap-50f, 0x1.dd7a5ep-76f, 0.0f, 0.0f,
     0x1.cfcfe4p-82f, 0x1.3c2884p-16f, 0x1.9b66bap-89f, 0x1.edac58p-60f, 0.0f,
     0x1.90972ep-88f, 0.0f, 0x1.5a4bcep-46f, 0.0f, 0x1.711d5ep-55f, 0.0f,
     0x1.b251c4p-9f, 0.0f, 0.0f, 0.0f, 0x1.f7ca7p-50f, 0x1.00b382p-63f,
     0x1.a1145cp-113f, 0x1.0aff5ap-7f, 0.0f, 0.0f, 0.0f, 0x1.655d3p-121f, 0.0f,
     0x1.6ccd68p-50f, 0.0f, 0x1.483fa8p-39f, 0x1.5856f6p-108f, 0.0f, 0.0f, 0.0f,
     0x1.60d73cp-123f, 0x1.a806cep-45f, 0x1.865cccp-7f, 0x1.52e606p-23f,
     0x1.f5caecp-85f, 0.0f, 0.0f, 0x1.3c4abcp-88f, 0.0f, 0x1.502eb2p-4f, 0.0f,
     0x1.ec12b2p-106f, 0x1.a3e21ap-19f, 0.0f, 0x1.f43aa2p-59f, 0x1.9acf0ep-29f,
     0x1.a908eep-65f, 0x1.276802p-83f, 0x1.588998p-108f, 0.0f, 0.0f, 0x1.e332fcp-6f,
     0.0f, 0.0f, 0x1.9ceeb8p-14f, 0x1.13b29ep-94f, 0x1.84762ap-116f, 0.0f, 0.0f,
     0x1.474facp-44f, 0x1.a56d16p-65f, 0.0f, 0.0f, 0.0f, 0x1.b41f5ep-34f, 0.0f, 0.0f,
     0x1.b4b494p-28f, 0.0f, 0x1.3e83ccp-19f, 0.0f, 0.0f, 0x1.04b1fcp-76f,
     0x1.9d2722p-32f, 0x1.8f62fp-113f, 0x1.81454ep-50f, 0.0f, 0.0f, 0x1.5b639p-76f,
     0x1.14a18ep-118f, 0.0f, 0.0f, 0x1.896116p-71f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bf1f1ep-123f, 0.0f, 0x1.861228p-42f, 0x1.8a2668p-18f, 0.0f, 0.0f,
     0x1.c32d3cp-45f, 0.0f, 0x1.2b7eaap-97f, 0.0f, 0.0f, 0.0f, 0x1.81c07ap-8f,
     0x1.fe8b7cp-124f, 0x1.5b08c6p-87f, 0x1.87ee66p-82f, 0x1.473e8cp-91f, 0.0f,
     0x1.fb59e4p-9f, 0x1.efb8a4p-55f, 0x1.2ad112p-76f, 0.0f, 0.0f, 0.0f,
     0x1.25fd32p-7f, 0x1.f43e8ep-119f, 0x1.247b98p-105f, 0x1.cc694ap-9f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.44bbc2p-23f, 0.0f, 0.0f, 0x1.16f39ep-56f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.00e8e6p-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.02cf04p-61f, 0.0f,
     0x1.a6627p-71f, 0x1.51930ap-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.74b87cp-124f,
     0x1.26ab22p-88f, 0.0f, 0.0f, 0.0f, 0x1.f52184p-9f, 0x1.1c38d4p-39f,
     0x1.1e800cp-72f, 0x1.45bf8cp-73f, 0.0f, 0x1.429b3ep-30f, 0x1.190c22p-117f, 0.0f,
     0x1.063e02p-70f, 0x1.e65c2p-108f, 0.0f, 0x1.d6b5f8p-78f, 0x1.a79c32p-60f,
     0x1.ed2a4ep-49f, 0x1.d80b7ep-30f, 0.0f, 0x1.35c906p-97f, 0.0f, 0.0f, 0.0f,
     0x1.45bb36p-13f, 0x1.529724p-25f, 0x1.0ef19cp-39f, 0x1.a922f2p-36f,
     0x1.9dd4fp-102f, 0.0f, 0.0f, 0.0f, 0x1.17fa96p-78f, 0x1.14bbe4p-117f, 0.0f,
     0x1.c77da6p-100f, 0.0f, 0.0f, 0.0f, 0x1.d84434p-36f, 0x1.4e6542p-53f,
     0x1.8f7cc6p-57f, 0.0f, 0x1.5cc8a8p-37f, 0.0f, 0.0f, 0x1.3920d2p-48f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.904b68p-109f, 0x1.b069a2p-126f, 0.0f,
     0x1.1b133ep-51f, 0.0f, 0.0f, 0x1.4e3aa8p-123f, 0x1.25fc6ap-106f, 0x1.81508p-26f,
     0.0f, 0x1.0b4c02p-56f, 0x1.d6b5eap-6f, 0.0f, 0.0f, 0x1.0cd166p-28f,
     0x1.5f014ep-43f, 0x1.88a1cp-117f, 0.0f, 0.0f, 0x1.8f626cp-77f, 0.0f, 0.0f, 0.0f,
     0x1.60eff6p-74f, 0x1.8f40acp-103f, 0x1.6485cep-1f, 0.0f, 0x1.308938p-5f, 0.0f,
     0x1.bbf06p-43f, 0.0f, 0x1.89995ep-3f, 0x1.225402p-38f, 0.0f, 0x1.4e9504p-24f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b701fep-43f, 0x1.fc1b62p-18f, 0.0f,
     0.0f, 0x1.4ddc0ap-40f, 0x1.bf3318p-33f, 0x1.04ee38p-112f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7b06f4p-18f, 0x1.71164cp-15f, 0.0f, 0x1.f13766p-121f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.fa10d6p-95f, 0x1.3a201p-106f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.07ec7p-16f, 0x1.3e70d2p-100f, 0x1.aa2ddap-84f, 0.0f, 0.0f, 0.0f,
     0x1.71e814p-20f, 0.0f, 0x1.d5f2ap-93f, 0x1.21bba2p-106f, 0x1.c90bfp-101f, 0.0f,
     0.0f, 0x1.0ef704p-88f, 0x1.0d3366p-15f, 0x1.333202p-60f, 0.0f, 0x1.7559d8p-96f,
     0.0f, 0x1.8d3c56p-11f, 0.0f, 0x1p0f, 0x1.59f80ep-120f, 0.0f, 0x1.5913f2p-28f,
     0x1.1f2d02p-82f, 0x1.9d13f4p-113f, 0x1.3ea1dep-52f, 0.0f, 0x1.c468a6p-55f, 0.0f,
     0x1.e5d19ap-60f, 0x1.16a9f8p-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7e06c8p-86f, 0.0f,
     0.0f, 0x1.203148p-100f, 0x1.237e8p-53f, 0.0f, 0.0f, 0x1.048e8cp-54f,
     0x1.01c0c6p-62f, 0x1.f46e08p-49f, 0.0f, 0x1.5f2ac4p-107f, 0x1.05c3ccp-125f,
     0x1.6ad766p-47f, 0x1.370556p-51f, 0.0f, 0x1.65ecb2p-27f, 0x1.b560f6p-94f, 0.0f,
     0x1.a03c34p-42f, 0x1.417732p-62f, 0.0f, 0.0f, 0x1.3082eep-37f, 0x1.7ed5b4p-28f,
     0.0f, 0x1.e508c4p-64f, 0x1.6c6d7ap-25f, 0.0f, 0.0f, 0x1.376636p-27f,
     0x1.03b3c2p-97f, 0x1.8acb72p-61f, 0x1.3f3a28p-51f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3ec5e8p-27f, 0x1.7438ecp-55f, 0x1.678806p-89f, 0x1.d0d514p-85f,
     0x1.074f3ap-33f, 0x1.6521b2p-79f, 0x1.0c099ap-66f, 0.0f, 0.0f, 0x1.e9619ep-111f,
     0.0f, 0.0f, 0.0f, 0x1.41bacap-92f, 0x1.29dd0ep-85f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e1fe6p-83f, 0x1.951094p-103f, 0.0f, 0x1.b639fcp-88f, 0.0f, 0x1.f710e8p-62f,
     0x1.4f2e92p-110f, 0x1.1b2d1p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b1acdep-91f, 0x1.315eb4p-87f, 0x1.adb2bap-19f, 0x1.3b25bcp-10f,
     0x1.f33ba4p-49f, 0x1.05c6cep-89f, 0.0f, 0x1.6d1e92p-34f, 0x1.8475fap-64f,
     0x1.cefbc2p-31f, 0x1.84211p-84f, 0x1.d3e53ep-94f, 0x1.23399ap-31f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.01f63ap-92f, 0.0f, 0.0f, 0x1.8bd3aap-122f,
     0x1.93fe8ap-48f, 0.0f, 0.0f, 0x1.81163p-18f, 0x1.93000ap-69f, 0x1.c93202p-10f,
     0.0f, 0.0f, 0.0f, 0x1.f09282p-31f, 0x1.e82c7cp-19f, 0x1.ed5838p-68f,
     0x1.bae8f8p-5f, 0x1.60b818p-90f, 0x1.447b04p-45f, 0.0f, 0.0f, 0x1.2c53cep-82f,
     0.0f, 0.0f, 0x1.c32e9p-79f, 0x1.983dcp-12f, 0x1.814148p-22f, 0.0f, 0.0f,
     0x1.5fb01p-99f, 0.0f, 0x1.43d03p-20f, 0x1.3d25ap-70f, 0x1.b0c114p-2f, 0.0f,
     0x1.bcd136p-122f, 0.0f, 0x1.f2ed54p-119f, 0x1.18b7ccp-116f, 0.0f, 0x1.142522p-8f,
     0.0f, 0x1.8e720ap-36f
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
            tmp1 = Sleef_finz_logf8_u35kvx(tmp0);
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
    printf("Sleef_finz_logf8_u35kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_finz_logf8_u35kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
