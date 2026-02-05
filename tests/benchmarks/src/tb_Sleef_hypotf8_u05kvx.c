/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_hypotf8_u05kvx.c --function Sleef_hypotf8_u05kvx \
 *     --arity 2 --headers sleef.h,ml_support_lib.h --input-formats \
 *     binary32,binary32 --vector-size 8 --function-input-vector-size 8 \
 *     --bench --no-embedded-bin --target kv3
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
     0x1.3cebfcp-51f, 0.0f, 0.0f, 0x1.26ecap-76f, 0.0f, 0x1.017764p-24f,
     0x1.946dd2p-83f, 0x1.334848p-20f, 0x1.2baa78p-108f, 0x1.fdc612p-34f,
     0x1.dcd80ap-81f, 0.0f, 0x1.ea46ep-46f, 0x1.1a684cp-111f, 0.0f, 0x1.de0e52p-43f,
     0.0f, 0x1.7855c8p-50f, 0x1.7f0c96p-38f, 0.0f, 0.0f, 0x1.797fap-23f, 0.0f, 0.0f,
     0.0f, 0x1.e76514p-32f, 0.0f, 0x1.8dd6acp-108f, 0.0f, 0.0f, 0.0f, 0x1.0a0bbp-99f,
     0x1.2d9764p-19f, 0.0f, 0x1.2a6ba8p-109f, 0x1.5df646p-80f, 0x1.e7199p-94f, 0.0f,
     0x1.f0bbeep-51f, 0.0f, 0x1.cb1f0ap-103f, 0x1.615936p-49f, 0x1.336b6p-63f, 0.0f,
     0x1.2e5086p-51f, 0x1.2064a4p-47f, 0x1.56126ep-91f, 0x1.75d144p-105f, 0.0f,
     0x1.692e38p-52f, 0.0f, 0x1.9795f6p-82f, 0.0f, 0.0f, 0.0f, 0x1.c9b6f2p-9f, 0.0f,
     0x1.3df27cp-67f, 0x1.f74696p-116f, 0.0f, 0x1.f66cdp-120f, 0.0f, 0.0f,
     0x1.40cbeep-124f, 0.0f, 0.0f, 0.0f, 0x1.413624p-24f, 0.0f, 0x1.d0eac4p-66f,
     0x1.59d66ap-86f, 0.0f, 0x1.fd91p-29f, 0x1.c3bad4p-30f, 0.0f, 0x1.16bbdp-125f,
     0x1.4beadap-34f, 0.0f, 0x1.5b99e4p-74f, 0x1.1da144p-61f, 0x1.7bceaap-12f,
     0x1.a6d6eep-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d39cap-40f, 0.0f,
     0x1.6aee08p-82f, 0x1.ad1e2cp-60f, 0x1.b61e52p-46f, 0.0f, 0.0f, 0x1.22288ap-58f,
     0x1.5d550ep-94f, 0x1.7dcddap-99f, 0.0f, 0x1.f959d4p-14f, 0x1.092352p-7f,
     0x1.43c03p-25f, 0.0f, 0.0f, 0.0f, 0x1.f06598p-46f, 0.0f, 0.0f, 0x1.9f3c96p-60f,
     0x1.67ca5cp-9f, 0.0f, 0x1.33475cp-27f, 0x1.4e9fp-35f, 0.0f, 0.0f,
     0x1.085272p-35f, 0.0f, 0.0f, 0x1.fcf8c4p-62f, 0x1.09954p-46f, 0.0f,
     0x1.e0b436p-30f, 0.0f, 0.0f, 0x1.aeb08ap-5f, 0x1.207fe2p-5f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.27095cp-31f, 0x1.8e87cp-84f, 0.0f,
     0x1.81ca96p-106f, 0.0f, 0x1.2ca026p-14f, 0.0f, 0x1.22d69cp-94f, 0.0f,
     0x1.8b189ap-30f, 0.0f, 0.0f, 0x1.ab563cp-35f, 0.0f, 0x1.d34ccp-43f,
     0x1.13af44p-95f, 0.0f, 0.0f, 0x1.f1171ap-90f, 0x1.29d972p-43f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.7ff9eep-54f, 0x1.bd35ecp-95f, 0.0f, 0.0f, 0x1.6403ecp-16f, 0.0f, 0.0f,
     0x1.3b09a6p-32f, 0.0f, 0.0f, 0x1.72e954p-118f, 0x1.8338p-92f, 0x1.06229p-114f,
     0x1.891806p-72f, 0x1.60671p-9f, 0.0f, 0x1.6ecfcp-103f, 0x1.c71a28p-31f, 0.0f,
     0x1.aceb14p-114f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.a8786p-74f, 0x1.d1f4fep-56f,
     0.0f, 0.0f, 0.0f, 0x1.87977ep-49f, 0.0f, 0.0f, 0x1.6b547ep-66f, 0x1.8b50e2p-4f,
     0x1.38275ep-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bf1748p-11f, 0.0f, 0.0f,
     0x1.9ce6f6p-89f, 0x1.581ee6p-41f, 0x1.ba57fp-34f, 0x1.03eaa6p-120f,
     0x1.1e98cp-96f, 0.0f, 0.0f, 0x1.f4163ep-110f, 0.0f, 0x1.571e14p-15f,
     0x1.53dcd8p-30f, 0.0f, 0.0f, 0x1.875cdp-74f, 0.0f, 0.0f, 0.0f, 0x1.377dcp-37f,
     0.0f, 0x1.9df2fap-9f, 0.0f, 0x1.d15c5ap-29f, 0x1.aaa948p-85f, 0.0f,
     0x1.e0c02ep-4f, 0x1.144a98p-3f, 0.0f, 0x1.ea47c8p-58f, 0x1.a29cfap-73f, 0.0f,
     0x1.cccf14p-49f, 0.0f, 0.0f, 0x1.d39f8cp-19f, 0x1.07e6cp-3f, 0.0f,
     0x1.fa164ep-123f, 0x1.2c073ap-102f, 0x1.e2a0a8p-53f, 0.0f, 0x1.9b784ap-14f, 0.0f,
     0x1.c6642p-2f, 0x1.1ef736p-77f, 0.0f, 0x1.426146p-49f, 0x1.715818p-33f, 0.0f,
     0x1.848a1ep-42f, 0.0f, 0.0f, 0x1.7c78b6p-80f, 0x1.22c0ap-117f, 0x1.7beedap-110f,
     0.0f, 0x1.bbb7c8p-76f, 0.0f, 0x1.bac496p-33f, 0.0f, 0.0f, 0.0f, 0x1.489d4ap-75f,
     0.0f, 0.0f, 0x1.7609fap-14f, 0.0f, 0x1.12f53ep-113f, 0.0f, 0x1.25361ap-98f,
     0x1.d655dep-78f, 0.0f, 0x1.c0eec8p-12f, 0.0f, 0.0f, 0.0f, 0x1.b394f4p-70f,
     0x1.b74daap-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ffcb56p-84f, 0.0f, 0.0f,
     0x1.947b3cp-36f, 0.0f, 0x1.2374a8p-95f, 0.0f, 0.0f, 0.0f, 0x1.50f792p-9f, 0.0f,
     0x1.625228p-35f, 0x1.fcabcap-24f, 0.0f, 0.0f, 0x1.6d86e4p-40f, 0x1.ee9596p-70f,
     0x1.5cf7bep-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ffb87ep-86f,
     0x1.86dd9ap-99f, 0.0f, 0x1.d84ee4p-125f, 0x1.bf0e3p-117f, 0x1.93263ap-83f,
     0x1.2b2f1p-76f, 0x1.a0d948p-67f, 0.0f, 0.0f, 0x1.eae1e4p-117f, 0.0f,
     0x1.7888f8p-88f, 0.0f, 0x1.ebbfd8p-88f, 0x1.74c3f2p-117f, 0.0f, 0x1.7669d6p-114f,
     0x1.19722p-45f, 0x1.53e15p-47f, 0x1.3aa0cep-65f, 0x1.57c582p-120f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.cdb97ep-48f, 0.0f, 0x1.9ff308p-12f, 0x1.f67544p-50f, 0.0f,
     0x1.a5573cp-34f, 0.0f, 0.0f, 0.0f, 0x1.b0de34p-28f, 0x1.978ee8p-59f, 0.0f,
     0x1.7fdd6cp-47f, 0.0f, 0x1.a0eb9p-64f, 0.0f, 0.0f, 0x1.2d8184p-88f, 0.0f, 0.0f,
     0x1.39002cp-57f, 0x1.4e1b4ap-28f, 0.0f, 0x1.01717ap-89f, 0x1.989232p-71f, 0.0f,
     0x1.c9e4c4p-110f, 0.0f, 0.0f, 0.0f, 0x1.ac97d4p-83f, 0.0f, 0x1.ae2d56p-123f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.1aa0e8p-88f, 0x1.3eaa6ep-16f, 0x1.a3d26ap-86f,
     0x1.0845b8p-11f, 0.0f, 0x1.c4045cp-37f, 0x1.705e3cp-25f, 0.0f, 0.0f,
     0x1.c8dfbcp-64f, 0x1.b0deaap-72f, 0x1.2193f4p-84f, 0x1.db4688p-53f,
     0x1.e6c156p-83f, 0.0f, 0x1.0b4d9ep-86f, 0x1.7eef52p-101f, 0.0f, 0.0f,
     0x1.2ef144p-117f, 0.0f, 0.0f, 0x1.48aae4p-108f, 0.0f, 0x1.f9c51ep-34f,
     0x1.c67ee4p-86f, 0x1.bac428p-19f, 0.0f, 0x1.eb67f8p-83f, 0x1p0f,
     0x1.badda4p-114f, 0.0f, 0.0f, 0x1.aa7e98p-4f, 0x1.fc3814p-104f, 0x1.0db4f2p-118f,
     0x1.286802p-89f, 0x1.8b825ep-72f, 0.0f, 0.0f, 0x1.2736dcp-28f, 0.0f, 0.0f,
     0x1.d7df6ep-82f, 0.0f, 0.0f, 0x1.fac83ap-124f, 0x1.1aa632p-103f, 0x1.6e79aap-15f,
     0x1.962c74p-4f, 0x1.0a2dd2p-96f, 0.0f, 0.0f, 0x1.38b336p-108f, 0x1.470082p-113f,
     0x1.ec69d4p-107f, 0x1.6624a6p-81f, 0.0f, 0x1.61a02cp-63f, 0.0f, 0.0f,
     0x1.2b74c2p-69f, 0x1.145bbcp-12f, 0.0f, 0x1.17590ep-123f, 0x1.5318cp-69f, 0.0f,
     0x1.20535ep-119f, 0.0f, 0x1.a1a5cep-52f, 0x1.26e70ap-71f, 0.0f, 0x1.0a2ec8p-91f,
     0.0f, 0x1.7ab034p-11f, 0x1.2d544ap-32f, 0x1.e3ba02p-62f, 0x1.bbd996p-22f, 0.0f,
     0x1.b581b8p-41f, 0x1.03a968p-82f, 0.0f, 0x1.c96946p-60f, 0x1.b4ad6ap-37f,
     0x1.57e298p-121f, 0.0f, 0.0f, 0x1.cf7d5ep-23f, 0x1.dbab6p-8f, 0x1.a308b8p-89f,
     0x1.e6a856p-27f, 0x1.09c884p-45f, 0x1.422864p-50f, 0x1.83df46p-120f,
     0x1.d23674p-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c7cf0cp-26f, 0x1.d65d9ap-62f, 0.0f,
     0x1.071ebap-19f, 0x1.199f6cp-30f, 0.0f, 0.0f, 0x1.389faep-2f, 0.0f, 0.0f,
     0x1.3037b8p-93f, 0.0f, 0x1.06d28cp-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ea259p-28f, 0.0f, 0x1.34ede2p-5f, 0.0f,
     0x1.6d62fcp-103f, 0.0f, 0x1.c4b4acp-3f, 0.0f, 0.0f, 0.0f, 0x1.c2a5fep-82f,
     0x1.81d282p-63f, 0x1.682c56p-45f, 0.0f, 0x1.15e42ap-91f, 0.0f, 0x1.26a288p-125f,
     0x1.c5374cp-36f, 0x1.071dc2p-55f, 0x1.2c2e32p-35f, 0x1.a29a44p-42f,
     0x1.db773p-4f, 0x1.5bdd5ap-126f, 0.0f, 0x1.a39636p-11f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.29111cp-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0977c4p-10f,
     0.0f, 0x1.002174p-26f, 0.0f, 0x1.86444ep-73f, 0x1.38644cp-76f, 0x1.1cb448p-94f,
     0x1.97e998p-28f, 0x1.517f02p-61f, 0x1.fc974ep-52f, 0x1.666778p-12f, 0.0f,
     0x1.5eda96p-90f, 0x1.fd1f9ap-41f, 0.0f, 0x1.91cd5ap-19f, 0x1p0f, 0.0f,
     0x1.e5410ap-65f, 0.0f, 0x1.8eb42ep-11f, 0.0f, 0.0f, 0x1.0336e8p-110f,
     0x1.08ac6cp-84f, 0x1.6f7a08p-44f, 0.0f, 0x1.93a148p-115f, 0.0f, 0.0f, 0.0f,
     0x1.5c1fbap-86f, 0.0f, 0x1.754b0ap-91f, 0x1.54110ep-18f, 0.0f, 0x1.698a8ap-92f,
     0.0f, 0.0f, 0x1.ca1becp-40f, 0x1.7230aap-111f, 0x1.8797cp-57f, 0x1.6561f6p-66f,
     0.0f, 0.0f, 0x1.4dc2a4p-66f, 0x1.63a732p-62f, 0x1.ae1dfp-114f, 0x1.841f36p-18f,
     0x1.28dffap-5f, 0x1.bf76f4p-98f, 0.0f, 0.0f, 0.0f, 0x1.554b3p-116f, 0.0f,
     0x1.67183ap-80f, 0.0f, 0x1.919244p-114f, 0.0f, 0.0f, 0x1.c94c14p-46f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.613744p-64f, 0.0f, 0x1.9facf6p-74f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9bc738p-78f, 0.0f, 0x1.ac3852p-79f, 0.0f, 0x1.6a70f8p-68f,
     0.0f, 0x1.17d94cp-2f, 0.0f, 0x1.276d4cp-29f, 0.0f, 0.0f, 0x1.899c66p-71f,
     0x1.3135dap-57f, 0x1.3a2df4p-24f, 0.0f, 0x1.6ca4ecp-85f, 0x1.3af4bep-94f, 0.0f,
     0.0f, 0x1.5e69cep-124f, 0.0f, 0.0f, 0x1.ffb796p-126f, 0x1.14783ap-56f, 0.0f,
     0x1.dd58c8p-56f, 0.0f, 0.0f, 0x1.45d834p-91f, 0x1.062478p-18f, 0.0f,
     0x1.e1f952p-22f, 0.0f, 0.0f, 0x1.fb3ed6p-21f, 0.0f, 0.0f, 0x1.e8ac14p-61f, 0.0f,
     0.0f, 0x1.a6e6aep-32f, 0.0f, 0x1.53a8dep-39f, 0.0f, 0.0f, 0x1.99d138p-38f, 0.0f,
     0.0f, 0x1.4356bcp-94f, 0.0f, 0x1.dd8b3p-10f, 0x1.f16436p-104f, 0.0f,
     0x1.225234p-85f, 0x1.68a86cp-88f, 0x1.ce37ap-14f, 0.0f, 0x1.643b5p-112f,
     0x1.a8f6b4p-72f, 0.0f, 0x1.85e72ap-36f, 0x1.9669b6p-117f, 0.0f, 0.0f, 0.0f,
     0x1.4fcfa2p-16f, 0.0f, 0x1.f0b526p-57f, 0x1.6dc4p-73f, 0x1.ca661p-51f,
     0x1.d0364ap-122f, 0.0f, 0x1.6bb322p-92f, 0.0f, 0x1.b46b58p-109f, 0.0f, 0.0f,
     0x1.0800dep-3f, 0x1.5871c4p-24f, 0.0f, 0x1.d1d56cp-98f, 0x1.27cf2p-10f, 0.0f,
     0x1.bfdec2p-56f, 0.0f, 0.0f, 0x1.e9fb5ep-26f, 0x1.59e938p-93f, 0x1.1c5904p-34f,
     0x1.887c28p-14f, 0x1.729c2ap-96f, 0.0f, 0.0f, 0.0f, 0x1.b7021ap-114f,
     0x1.ac21b4p-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7d5f9cp-88f, 0.0f, 0.0f, 0.0f,
     0x1.ea2d9p-125f, 0.0f, 0.0f, 0x1.ef003ap-82f, 0x1.054da4p-82f, 0x1.cec142p-74f,
     0.0f, 0x1.9962f8p-48f, 0x1.91561p-19f, 0x1.54f734p-117f, 0x1.17478ep-38f,
     0x1.36b494p-91f, 0x1.e4d37ap-95f, 0x1.c232b2p-108f, 0.0f, 0x1.5d78e2p-36f, 0.0f,
     0.0f, 0.0f, 0x1.bf7d44p-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.edc56ap-110f, 0x1.504a1cp-95f, 0.0f, 0.0f, 0x1.8175cp-15f, 0x1.874836p-56f,
     0x1.a62bf2p-85f, 0.0f, 0.0f, 0x1.5df5ccp-95f, 0x1.df9ecap-12f, 0.0f,
     0x1.feb2fep-16f, 0.0f, 0x1.23b15ap-52f, 0.0f, 0x1.82f6dcp-67f, 0x1.0aaf16p-78f,
     0x1.62b6dep-61f, 0x1.7f6456p-78f, 0.0f, 0.0f, 0x1.7b4bep-9f, 0.0f, 0x1p0f, 0.0f,
     0.0f, 0.0f, 0x1.5a442p-93f, 0.0f, 0.0f, 0.0f, 0x1.4df7acp-107f, 0.0f,
     0x1.74bc0ap-32f, 0x1.efa2a4p-66f, 0x1.5e0e1p-36f, 0x1.3f5d5ap-23f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c35afap-40f, 0x1.4fe30cp-45f, 0x1.25d156p-27f, 0.0f,
     0x1.6aee24p-120f, 0x1.fded34p-47f, 0.0f, 0.0f, 0.0f, 0x1.a82996p-36f, 0.0f,
     0x1.a4c9b2p-40f, 0.0f, 0.0f, 0x1.89b906p-58f, 0.0f, 0x1.90fb7cp-89f,
     0x1.cd7a4cp-114f, 0x1.cd95d2p-65f, 0x1.3c1118p-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.5bf148p-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cda4dep-116f,
     0x1.c6eba8p-123f, 0.0f, 0.0f, 0.0f, 0x1.17be46p-24f, 0.0f, 0.0f,
     0x1.d89ff8p-119f, 0.0f, 0x1.476ec2p-61f, 0x1.a55f96p-100f, 0.0f, 0.0f,
     0x1.e01f2cp-84f, 0.0f, 0.0f, 0x1.b05674p-59f, 0.0f, 0.0f, 0x1.9b0cbep-90f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.0824ep-118f, 0x1.770264p-111f, 0.0f, 0.0f, 0x1.bc4e8cp-33f,
     0x1.3902eap-38f, 0x1.84f7cep-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.99ca56p-45f, 0.0f,
     0x1.cb52e8p-4f, 0.0f, 0x1.82b4b8p-17f, 0.0f, 0.0f, 0x1.f3065ap-120f,
     0x1.e2f29p-124f, 0x1.e1632cp-33f, 0x1.f0899ap-103f, 0.0f, 0x1.c342dap-13f, 0.0f,
     0x1.425dp-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c30638p-100f,
     0x1.f7b512p-42f, 0x1.f814bep-62f, 0x1.1b38e2p-74f, 0x1.8a2d0cp-43f, 0.0f, 0.0f,
     0.0f, 0x1.fb5b1cp-35f, 0.0f, 0x1.cb6b14p-86f, 0x1.5175e8p-97f, 0.0f, 0.0f,
     0x1.c739dep-100f, 0x1.d98478p-62f, 0x1.6dcddp-1f, 0x1.d08472p-74f, 0.0f,
     0x1.051f04p-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.60c718p-54f, 0x1.300c1ep-54f, 0x1.253a04p-77f, 0x1.f8a5bp-12f, 0.0f, 0.0f,
     0x1.777354p-3f, 0.0f, 0.0f, 0x1.c0685ep-61f, 0x1.b20782p-11f, 0x1.51f2p-97f,
     0x1.5b23acp-21f, 0.0f, 0.0f, 0.0f, 0x1.700af6p-101f, 0x1.c2a31ap-116f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c6bafep-102f, 0.0f, 0x1.271c8p-40f, 0.0f,
     0x1.427958p-55f, 0x1.518626p-100f, 0x1.98622p-66f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e7b95ep-62f, 0.0f, 0.0f, 0x1.00603cp-26f, 0.0f, 0.0f, 0x1.f46b02p-23f,
     0x1.f153e2p-6f, 0x1.352368p-58f, 0.0f, 0x1.fd247ep-33f, 0.0f, 0x1.da0326p-68f,
     0x1.0d4a8p-62f, 0.0f, 0x1.cdcap-121f, 0.0f, 0x1.51c424p-17f, 0x1.11940ap-90f,
     0.0f, 0x1.2beb2cp-57f, 0x1.a69082p-33f, 0.0f, 0x1.7691aep-19f, 0x1.50f0b4p-80f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.de8ee2p-75f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b67b1ep-64f, 0.0f, 0x1.1eebf4p-14f, 0x1.4116f2p-39f, 0.0f, 0.0f,
     0x1.1114e2p-87f, 0.0f, 0.0f, 0.0f, 0x1.f5a3a2p-33f, 0x1.eb73aap-12f, 0.0f,
     0x1.762074p-70f, 0x1.ecf396p-77f, 0.0f, 0x1.d3225cp-4f, 0x1.4a0a38p-76f,
     0x1.4e6fecp-48f, 0x1.16c542p-83f, 0x1.256eccp-23f, 0x1.1c4c2cp-93f, 0.0f, 0.0f,
     0x1.ed3616p-117f, 0.0f, 0x1.77d4aap-45f, 0.0f, 0x1.70385ep-74f, 0x1.43ae2cp-55f,
     0x1.093ee2p-95f, 0.0f, 0.0f, 0.0f, 0x1.f3b9b6p-110f, 0x1.62b6aap-79f,
     0x1.beef2p-73f, 0.0f, 0.0f, 0.0f
};
static const float external_bench_wrapper_input_table_arg1[1008]  = {
     0.0f, 0x1.56b0b6p-30f, 0.0f, 0x1.40b8a4p-48f, 0x1.0f9c42p-65f, 0x1.1dc1b4p-116f,
     0x1.c8bf5p-79f, 0x1.59892ep-93f, 0.0f, 0x1.17b7c2p-31f, 0.0f, 0.0f,
     0x1.2f4f98p-49f, 0x1.15d34ap-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fadbfp-34f,
     0x1.d28418p-6f, 0.0f, 0x1.4bef9ap-72f, 0x1.f4d1d6p-12f, 0.0f, 0x1.b50b9p-32f,
     0x1.6f492cp-26f, 0x1.ff2a6ep-76f, 0.0f, 0.0f, 0x1.5259dap-53f, 0.0f,
     0x1.8b4278p-103f, 0x1.9f4af4p-54f, 0.0f, 0.0f, 0x1.3299c6p-72f, 0.0f,
     0x1.c4c18p-53f, 0.0f, 0.0f, 0.0f, 0x1.98e88p-98f, 0x1.50be0cp-86f,
     0x1.333792p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.442772p-7f, 0x1.9321acp-107f,
     0x1.4ccf1ep-124f, 0x1.5bd9c4p-3f, 0.0f, 0.0f, 0.0f, 0x1.6164ecp-6f,
     0x1.64731ap-8f, 0.0f, 0.0f, 0x1.ae01f8p-35f, 0x1.537e0ap-82f, 0.0f, 0.0f, 0.0f,
     0x1.0df7ccp-74f, 0.0f, 0x1.13ffbp-27f, 0x1.12af1cp-98f, 0x1.35beaap-84f, 0.0f,
     0.0f, 0.0f, 0x1.414afp-59f, 0x1.b1bfd8p-53f, 0.0f, 0.0f, 0x1.d2987ep-99f,
     0x1.186acp-124f, 0x1.98e9f6p-94f, 0x1.d62068p-75f, 0.0f, 0x1.83984ap-8f,
     0x1.8806e6p-24f, 0x1.1dfed2p-75f, 0.0f, 0x1.062b0ep-22f, 0.0f, 0x1.639734p-116f,
     0x1.6979fep-48f, 0x1.2fdd3cp-74f, 0x1.7e6c76p-7f, 0.0f, 0x1.54cc04p-95f, 0.0f,
     0x1.c2c9ccp-94f, 0x1.6c9626p-48f, 0x1.4b9214p-2f, 0.0f, 0x1.8543eep-110f, 0.0f,
     0.0f, 0x1.ee765cp-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b5d91p-23f,
     0x1.a72ea6p-112f, 0x1.70c392p-24f, 0.0f, 0x1.0ff2dep-48f, 0.0f, 0x1.00c42ep-80f,
     0x1.d72422p-99f, 0x1.5e622ap-9f, 0.0f, 0.0f, 0x1.a73be4p-91f, 0x1.4a6812p-4f,
     0.0f, 0x1.87382ap-108f, 0x1.9761aep-113f, 0.0f, 0.0f, 0x1.0baed4p-73f,
     0x1.9753bcp-116f, 0x1.a78e4cp-38f, 0x1.6a9ef8p-9f, 0.0f, 0x1.f941aep-46f,
     0x1.6e8812p-114f, 0x1.e8ebd6p-23f, 0x1.34f984p-30f, 0x1.4f9f6ep-39f,
     0x1.2c4e12p-66f, 0.0f, 0x1.6acc9cp-100f, 0x1.edf104p-94f, 0.0f, 0.0f,
     0x1.a51032p-35f, 0.0f, 0x1.17594cp-78f, 0x1.69ee46p-122f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.073bc2p-69f, 0.0f, 0x1.5c6086p-34f, 0x1.b493eap-7f,
     0x1.4613d8p-26f, 0.0f, 0.0f, 0x1.281bccp-2f, 0.0f, 0.0f, 0.0f, 0x1.bdecacp-57f,
     0x1.57fedp-82f, 0.0f, 0x1.03b398p-30f, 0.0f, 0.0f, 0x1.e7bdap-101f,
     0x1.a4a5dap-76f, 0x1.20fd22p-114f, 0x1.9ce47p-94f, 0x1.502d3p-92f,
     0x1.96117ep-97f, 0.0f, 0x1.dfa696p-75f, 0x1.98a42cp-94f, 0.0f, 0x1.c5af7ep-84f,
     0x1.341b8p-27f, 0.0f, 0.0f, 0x1.5f100cp-95f, 0x1.3a76ap-95f, 0.0f, 0.0f,
     0x1.345adep-84f, 0.0f, 0x1.d7ef36p-54f, 0.0f, 0.0f, 0.0f, 0x1.3e1f7p-96f,
     0x1.01335p-93f, 0x1.cd6af6p-24f, 0.0f, 0x1.084c0ap-85f, 0x1.2f979ep-88f,
     0x1.e6a956p-116f, 0x1.f5e942p-22f, 0x1.b5d15p-28f, 0x1.fa1196p-7f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.c11f22p-126f, 0.0f, 0x1.60b562p-110f, 0.0f, 0.0f, 0.0f,
     0x1.2031c6p-60f, 0.0f, 0x1.0d7292p-1f, 0x1.1de3e2p-61f, 0.0f, 0.0f,
     0x1.40d4f4p-65f, 0x1.49046ep-41f, 0.0f, 0.0f, 0.0f, 0x1.41e9cap-57f,
     0x1.46f13ap-38f, 0.0f, 0x1.19f108p-9f, 0.0f, 0x1.75a78ep-28f, 0x1.6a67cep-13f,
     0.0f, 0.0f, 0x1.40af5ep-3f, 0.0f, 0.0f, 0.0f, 0x1.4affbcp-113f, 0.0f, 0.0f, 0.0f,
     0x1.3b3eecp-47f, 0.0f, 0x1.6973aep-32f, 0x1.25d3fcp-53f, 0.0f, 0x1.644296p-105f,
     0.0f, 0x1.3abd4p-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f7421cp-60f, 0.0f,
     0x1.be1ad8p-30f, 0.0f, 0.0f, 0.0f, 0x1.8adacep-123f, 0.0f, 0x1.f4e534p-54f,
     0x1.0ee02cp-112f, 0x1.d0dbb4p-94f, 0.0f, 0.0f, 0x1.723a98p-33f, 0.0f, 0.0f,
     0x1.92ee38p-90f, 0.0f, 0x1.36d30cp-42f, 0.0f, 0x1.e78a46p-69f, 0.0f,
     0x1.b6fc12p-81f, 0.0f, 0x1.277cdap-93f, 0.0f, 0.0f, 0x1.18f148p-90f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a9f28cp-3f, 0.0f, 0x1.f7debep-50f, 0x1.0d9b7cp-49f, 0.0f,
     0x1.ea0162p-49f, 0x1.e22ad6p-32f, 0.0f, 0.0f, 0x1.3f32fp-91f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.2be3e8p-117f, 0.0f, 0.0f, 0x1.be79bep-86f, 0.0f, 0.0f,
     0x1.95244ep-124f, 0.0f, 0.0f, 0.0f, 0x1.f5bd9ep-12f, 0x1.30071cp-122f,
     0x1.c90136p-109f, 0.0f, 0x1.9fd216p-45f, 0x1.bbb224p-64f, 0x1.db9956p-35f,
     0x1.442eeap-5f, 0x1.0950b4p-48f, 0x1.6872aep-38f, 0x1.23c6b2p-107f,
     0x1.c735a6p-86f, 0x1.b1f94ep-30f, 0.0f, 0.0f, 0x1.6e5666p-124f, 0x1.bf767ap-94f,
     0.0f, 0x1.6314fap-117f, 0.0f, 0x1.dcb8dp-32f, 0x1.ccb1b6p-120f, 0.0f, 0.0f,
     0x1.cc72b4p-92f, 0.0f, 0x1.668244p-31f, 0.0f, 0.0f, 0x1.4a16eap-77f,
     0x1.f32418p-10f, 0x1.a61428p-93f, 0x1.002c88p-46f, 0.0f, 0.0f, 0.0f,
     0x1.13b1dap-2f, 0x1.7472c8p-57f, 0x1.18a1b4p-125f, 0.0f, 0x1.8a867p-120f,
     0x1.45cf8cp-113f, 0x1.7e4b1ep-41f, 0x1.c2ace8p-117f, 0x1.691bb6p-14f,
     0x1.170b68p-126f, 0x1.8b94c4p-115f, 0x1.13a9cp-83f, 0x1.6712eap-64f,
     0x1.31c5eap-6f, 0x1.4eb884p-70f, 0.0f, 0.0f, 0.0f, 0x1.a7f6c6p-118f,
     0x1.5bb924p-15f, 0.0f, 0.0f, 0.0f, 0x1.0fa43ep-22f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ecb7a8p-8f, 0x1.dffcap-22f, 0.0f, 0.0f, 0x1.370acep-8f, 0x1.237534p-89f,
     0.0f, 0x1.bafe0cp-67f, 0x1.520272p-15f, 0x1.4dcb0ep-71f, 0x1.c44272p-80f, 0.0f,
     0x1.644742p-115f, 0x1.bb473cp-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.db475cp-100f, 0x1.5b3136p-59f, 0x1.b6be76p-76f, 0.0f, 0.0f, 0x1.35141ap-22f,
     0x1.68d018p-5f, 0.0f, 0x1.12f386p-6f, 0.0f, 0.0f, 0.0f, 0x1.393536p-33f,
     0x1.2199a6p-7f, 0.0f, 0.0f, 0x1.6ed0e2p-52f, 0.0f, 0.0f, 0x1.a23cbap-90f, 0.0f,
     0x1.ed4eep-91f, 0x1.0555e6p-92f, 0x1.19a726p-95f, 0x1.dae9cep-44f,
     0x1.cd659ep-77f, 0x1.8b39aap-111f, 0.0f, 0.0f, 0x1.8f563ep-68f, 0.0f,
     0x1.ffe156p-114f, 0.0f, 0.0f, 0x1.7113fp-111f, 0x1.698c6p-34f, 0.0f,
     0x1.cb5422p-59f, 0x1.5e60cap-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.840068p-81f,
     0x1.f61e44p-20f, 0.0f, 0x1.990312p-55f, 0x1.cee432p-125f, 0.0f, 0x1.ede6aap-48f,
     0.0f, 0.0f, 0x1.d5e20ap-47f, 0.0f, 0x1.d5c97ap-114f, 0.0f, 0.0f,
     0x1.5408aep-122f, 0.0f, 0x1.014f9cp-117f, 0x1.8b0e18p-114f, 0x1.233924p-126f,
     0x1.a16ce6p-107f, 0x1.e5945cp-121f, 0.0f, 0.0f, 0x1.30b93ep-122f, 0.0f,
     0x1.ba0a7ep-80f, 0.0f, 0x1.1d5a94p-89f, 0x1.043cccp-123f, 0.0f, 0x1.225a08p-97f,
     0.0f, 0x1.060dc4p-77f, 0x1.7384ep-3f, 0x1.030f56p-12f, 0.0f, 0x1.0da81ap-31f,
     0.0f, 0.0f, 0x1.8e1322p-12f, 0x1.f08176p-72f, 0x1.1c9e86p-98f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e74708p-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cbb69ap-28f,
     0x1.b700eep-49f, 0x1.178544p-104f, 0x1.0f2a4p-32f, 0x1.f963d4p-112f,
     0x1.fe9926p-86f, 0.0f, 0x1.979e2ap-91f, 0.0f, 0x1.20b28ep-27f, 0.0f,
     0x1.c9d9e4p-108f, 0.0f, 0x1.d89bbep-31f, 0.0f, 0x1.c65b84p-29f, 0x1.f95e98p-48f,
     0x1p0f, 0.0f, 0.0f, 0x1.972fdap-82f, 0x1.6c3a8p-26f, 0x1.858486p-101f, 0.0f,
     0.0f, 0x1.071c06p-121f, 0.0f, 0x1.fba7eep-24f, 0.0f, 0x1.fe80e2p-50f,
     0x1.aa1e16p-41f, 0x1.650dfcp-66f, 0.0f, 0x1.0a322p-64f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6e1e8ep-53f,
     0.0f, 0x1.9ee4dep-63f, 0.0f, 0.0f, 0.0f, 0x1.c6457ap-85f, 0x1.7c1ea2p-85f,
     0x1.0bdef8p-78f, 0x1.97d724p-14f, 0x1.88b182p-15f, 0.0f, 0.0f, 0x1.1b252ap-32f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.fc4bcep-60f, 0x1.9793fp-106f, 0.0f, 0.0f,
     0x1.5f696ap-8f, 0x1.d26226p-52f, 0x1.f3355ap-39f, 0.0f, 0.0f, 0.0f,
     0x1.ce7588p-100f, 0.0f, 0x1.617c9cp-28f, 0x1.e36316p-7f, 0x1.5deeb2p-8f,
     0x1.0c4d1ap-96f, 0.0f, 0x1.515d26p-2f, 0.0f, 0x1.cd01bep-59f, 0.0f, 0.0f,
     0x1.118a5cp-85f, 0.0f, 0.0f, 0x1.48075ep-87f, 0.0f, 0.0f, 0x1.13d94ap-28f, 0.0f,
     0x1.5b97eep-18f, 0x1.29efc4p-90f, 0x1.a29484p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.eb844ep-29f, 0x1.0ba288p-124f, 0x1.f7663ap-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.996028p-124f, 0x1.d176a6p-24f, 0.0f, 0x1.e76b62p-55f, 0x1.c248c8p-71f,
     0x1.52f362p-56f, 0x1.d77992p-110f, 0x1.a7e834p-98f, 0x1.65ed0cp-119f, 0.0f, 0.0f,
     0.0f, 0x1.66484ap-82f, 0x1.78e25p-82f, 0.0f, 0x1.4f3828p-116f, 0x1.6db642p-116f,
     0x1.1bbee2p-115f, 0x1.d3171cp-104f, 0x1.884066p-39f, 0.0f, 0.0f, 0x1.157802p-46f,
     0.0f, 0x1.0dea88p-36f, 0.0f, 0.0f, 0.0f, 0x1.f4520ep-61f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.1f7642p-5f, 0.0f, 0.0f, 0x1.0eabf8p-81f,
     0x1.320144p-102f, 0x1.d9d34p-90f, 0.0f, 0x1.3b15a2p-91f, 0x1.5f3346p-109f,
     0x1.89f134p-20f, 0x1.790e64p-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0a593ap-49f,
     0x1.3392bp-73f, 0x1.441614p-4f, 0x1.cc7172p-65f, 0.0f, 0.0f, 0x1.a27526p-60f,
     0.0f, 0.0f, 0.0f, 0x1.2f3972p-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d60f26p-22f, 0.0f,
     0x1.34d6bcp-16f, 0.0f, 0x1.be70b2p-69f, 0x1.854a2ap-90f, 0x1.1715e2p-72f,
     0x1.f2b24ep-103f, 0x1.a0cd9p-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.19997ap-40f,
     0x1.80a74p-108f, 0x1.c45668p-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d0ad54p-22f, 0x1.96ca92p-93f, 0.0f, 0x1.c2ccd6p-29f, 0.0f, 0.0f,
     0x1.326f98p-26f, 0.0f, 0.0f, 0.0f, 0x1.447e4ep-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a6fd04p-33f, 0.0f, 0.0f, 0x1.bc6faep-12f, 0.0f, 0.0f, 0x1.542748p-57f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.19cc7ep-54f, 0.0f, 0x1.58eeb2p-93f,
     0x1.684f24p-91f, 0.0f, 0.0f, 0.0f, 0x1.fcb81ap-64f, 0.0f, 0x1.7587bap-82f,
     0x1.9f3bc4p-5f, 0x1.ef019cp-125f, 0.0f, 0x1.dbbae8p-101f, 0x1.90a4bcp-16f,
     0x1.43d64ap-28f, 0.0f, 0.0f, 0x1.30168ap-114f, 0x1.9f2bcap-30f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.3245ep-13f, 0.0f, 0x1.87776ap-35f, 0.0f, 0.0f, 0.0f,
     0x1.57ff02p-98f, 0x1.e02586p-8f, 0x1.bd8848p-41f, 0.0f, 0.0f, 0.0f,
     0x1.e953cep-22f, 0.0f, 0.0f, 0x1p0f, 0x1.954ffap-94f, 0.0f, 0x1.6c332ap-91f,
     0.0f, 0x1.533326p-77f, 0.0f, 0x1.a1e3cp-1f, 0.0f, 0.0f, 0.0f, 0x1.27a92ep-105f,
     0x1.9b39dcp-118f, 0.0f, 0x1.9780dp-53f, 0x1.5686acp-11f, 0x1.f3732ap-2f,
     0x1.09938ep-100f, 0.0f, 0x1.659076p-19f, 0x1.b2741ap-75f, 0.0f, 0x1.064aa6p-77f,
     0x1.356888p-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.92b02p-59f, 0x1.316208p-88f,
     0x1.4e03e6p-101f, 0x1.a8e1d4p-50f, 0x1.c6e7aap-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.0a9c0ep-110f, 0x1.450efp-94f, 0.0f,
     0x1.29260ap-35f, 0.0f, 0.0f, 0.0f, 0x1.6cc1d4p-16f, 0x1.e4a79cp-10f, 0.0f,
     0x1.bd64c6p-91f, 0x1.ebf06cp-27f, 0.0f, 0.0f, 0x1.d9b068p-33f, 0.0f,
     0x1.c0590ep-103f, 0.0f, 0.0f, 0x1.50ca3ap-76f, 0x1.1ea6c2p-12f, 0x1.c71b8ep-116f,
     0.0f, 0.0f, 0x1.313e1cp-87f, 0.0f, 0x1.292a66p-69f, 0x1.3b4ee8p-25f, 0.0f,
     0x1.d9e78ap-23f, 0x1.0b8154p-105f, 0.0f, 0x1.a4ef76p-76f, 0x1.59d47ap-115f, 0.0f,
     0x1.510024p-105f, 0x1.8df7dep-100f, 0.0f, 0.0f, 0x1.883216p-43f, 0.0f,
     0x1.1f0d86p-71f, 0x1.81a99cp-89f, 0x1.b71236p-51f, 0x1.7b06c6p-67f,
     0x1.d3328cp-74f, 0.0f, 0.0f, 0.0f, 0x1.cfbad8p-124f, 0x1.fd6254p-87f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.439fa4p-8f, 0x1.d95f9ep-69f, 0.0f, 0.0f, 0.0f,
     0x1.17cb76p-122f, 0.0f, 0x1.517a6p-100f, 0.0f, 0x1.c8579ap-92f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e78f48p-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.298c44p-112f, 0.0f,
     0x1.6ecb04p-99f, 0.0f, 0x1.aa1d74p-57f, 0.0f, 0x1.23288ep-13f, 0.0f, 0.0f, 0.0f,
     0x1.9aef94p-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fd187p-19f, 0.0f,
     0x1.9f897cp-91f, 0x1.b6075p-116f, 0x1.ea1f1p-114f, 0.0f, 0x1.756d98p-16f,
     0x1.7f813cp-5f, 0.0f, 0x1.a612ccp-10f, 0x1.a8b208p-12f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.61f9p-21f, 0x1.f8f074p-7f, 0x1.a4dac8p-15f, 0x1.6e7594p-34f, 0.0f,
     0x1.fa7da6p-80f, 0x1.c2ad8p-32f, 0x1.4be15ep-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.7af606p-12f, 0x1.379176p-22f, 0.0f, 0.0f, 0x1.ba8da4p-52f,
     0x1.f6d3f2p-29f, 0x1.fdb7b6p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c80434p-14f,
     0x1.7985e2p-14f, 0x1.a639p-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.53230ep-48f,
     0x1.50f614p-108f, 0.0f, 0x1.de7d36p-96f, 0x1.54d44cp-117f, 0.0f,
     0x1.180b72p-110f, 0.0f, 0.0f, 0x1.087b58p-106f, 0.0f, 0x1.0dbc06p-60f, 0.0f,
     0x1.24c554p-38f, 0x1.62578ep-4f, 0.0f, 0.0f, 0.0f, 0x1.2755cep-89f,
     0x1.637758p-89f, 0.0f, 0x1.833cap-122f, 0.0f, 0.0f, 0.0f, 0x1.e275b4p-89f, 0.0f,
     0x1.7db3fep-61f, 0.0f, 0.0f, 0.0f, 0x1.dc8384p-7f, 0.0f, 0x1.8b8a32p-81f,
     0x1.a277c4p-31f, 0.0f, 0x1.a48112p-68f, 0x1.d6130cp-59f, 0x1.fd9452p-6f, 0.0f,
     0x1.dcb1cap-22f, 0x1.a2c304p-58f, 0.0f, 0x1.9c53c2p-49f, 0.0f, 0.0f,
     0x1.599af2p-64f, 0.0f, 0x1.98404p-47f, 0x1.68a88ap-72f, 0.0f, 0x1.71e6a6p-73f,
     0.0f, 0.0f, 0x1.28a042p-78f, 0x1.6a801p-52f, 0x1.4bc20ep-72f, 0.0f,
     0x1.cdbf8cp-125f, 0.0f, 0.0f, 0.0f, 0x1.21803cp-47f, 0x1.2d1008p-51f
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
            ml_float8_t tmp3;
            int32_t tmp4;

            memcpy(&tmp0, ((ml_float8_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            memcpy(&tmp1, ((ml_float8_t*)(external_bench_wrapper_input_table_arg1+ i)), 32);
            tmp2 = Sleef_hypotf8_u05kvx(tmp0, tmp1);
            memcpy(((ml_float8_t*)(external_bench_wrapper_output_table+ i)), &(tmp2), 32);
            tmp3 = local_acc + tmp2;
            local_acc = tmp3;
            tmp4 = i + INT32_C(8);
            i = tmp4;
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
    printf("Sleef_hypotf8_u05kvx %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_hypotf8_u05kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
