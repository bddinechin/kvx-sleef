/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_powf8_u10kvx.c --function Sleef_finz_powf8_u10kvx \
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
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.db091p-104f, 0x1.0be338p-1f, 0.0f, 0.0f, 0.0f,
     0x1.08d38cp-9f, 0.0f, 0.0f, 0.0f, 0x1.67bd74p-116f, 0.0f, 0x1.f11058p-13f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.1f38e2p-32f, 0.0f, 0x1.d50d44p-18f, 0.0f, 0x1.dd08d8p-16f,
     0x1.dd2b0cp-15f, 0.0f, 0x1.53c4fp-44f, 0.0f, 0x1.e43d9ep-110f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.640b88p-31f, 0x1.7f108ap-122f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.920baep-116f, 0x1.53fd9ap-91f, 0.0f, 0x1.444418p-18f, 0x1.3d159ep-54f, 0.0f,
     0x1.658386p-94f, 0.0f, 0x1.bce17p-91f, 0x1.ed940cp-89f, 0x1.1b9a7ap-9f,
     0x1.368e56p-103f, 0x1.f16ebep-55f, 0.0f, 0x1.d3590ep-85f, 0x1.fe1b7p-21f, 0.0f,
     0x1.fe9ccep-43f, 0x1.95c336p-49f, 0x1.617d9p-106f, 0x1.7675dp-99f, 0.0f, 0.0f,
     0.0f, 0x1.171174p-59f, 0x1.f6cf28p-21f, 0.0f, 0.0f, 0.0f, 0x1.25cf4p-41f, 0.0f,
     0.0f, 0.0f, 0x1.65a62p-122f, 0x1.ed6f58p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.251258p-47f, 0x1p0f, 0.0f, 0x1.1bc1ccp-28f, 0.0f, 0x1.356706p-1f,
     0x1.0d147cp-94f, 0x1.52b5e2p-23f, 0x1.ab5cp-3f, 0.0f, 0.0f, 0.0f,
     0x1.57ab5ep-116f, 0x1.f1445ap-114f, 0.0f, 0.0f, 0.0f, 0x1.c13b08p-36f,
     0x1.951b8p-31f, 0.0f, 0x1.20ebfp-71f, 0.0f, 0x1.5011b6p-113f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.bc68fep-61f, 0.0f, 0.0f, 0.0f, 0x1.5d668cp-111f, 0.0f, 0.0f,
     0x1.941d08p-5f, 0x1.5488e6p-110f, 0x1.9013dep-86f, 0.0f, 0.0f, 0.0f,
     0x1.a8314p-43f, 0x1.b5c8f6p-27f, 0.0f, 0.0f, 0x1.7f439p-119f, 0.0f,
     0x1.a6e6dap-3f, 0x1.62a412p-78f, 0.0f, 0x1.7e982ap-15f, 0x1.fc60fap-58f,
     0x1.edf86ap-33f, 0x1.fc7ba2p-52f, 0.0f, 0x1.15615ap-19f, 0.0f, 0.0f,
     0x1.beced8p-60f, 0.0f, 0x1.9f068ap-5f, 0x1p0f, 0x1.447334p-73f, 0x1.58571ep-68f,
     0.0f, 0.0f, 0x1.e87feap-119f, 0.0f, 0.0f, 0x1.aec9cp-109f, 0.0f, 0.0f,
     0x1.f8c7bap-20f, 0x1.84c2f2p-119f, 0x1.6623bap-51f, 0x1.be250ep-72f, 0.0f,
     0x1.07a82ep-85f, 0x1.735fa2p-75f, 0x1.e549b8p-53f, 0.0f, 0x1.83d32p-105f,
     0x1.a1decp-56f, 0x1.c779a6p-5f, 0x1.9291c8p-64f, 0x1.af3c1cp-98f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.480c6p-108f, 0x1.82bcccp-1f, 0.0f, 0x1.9dc26ep-24f, 0.0f,
     0x1.b3bc3ep-70f, 0x1.f5ea02p-124f, 0x1.18b234p-52f, 0x1.c9646ep-19f,
     0x1.b420bap-93f, 0x1.724dd4p-58f, 0.0f, 0x1.f3613cp-39f, 0.0f, 0.0f, 0.0f,
     0x1.0f60f4p-121f, 0x1.f2a476p-84f, 0.0f, 0.0f, 0x1.7754d6p-58f, 0x1.cb1492p-111f,
     0.0f, 0x1.549cecp-53f, 0.0f, 0x1.5ba01ap-74f, 0.0f, 0.0f, 0x1.55a38ap-123f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.49002p-44f, 0.0f, 0.0f, 0.0f, 0x1.28bf1p-77f, 0.0f,
     0x1.3c56cap-73f, 0x1.c22ddcp-58f, 0x1.3888b2p-122f, 0.0f, 0x1.016abp-94f,
     0x1.629a2ap-90f, 0.0f, 0.0f, 0.0f, 0x1.313c0ap-90f, 0.0f, 0.0f, 0x1.ed50a8p-109f,
     0.0f, 0.0f, 0x1.eae41ap-8f, 0x1.32935ap-68f, 0x1.f3a048p-74f, 0x1.b91f6p-21f,
     0.0f, 0.0f, 0x1.42a3ep-35f, 0.0f, 0.0f, 0x1.d8372ap-116f, 0.0f, 0x1.340e4p-80f,
     0x1.8e8d0cp-84f, 0.0f, 0.0f, 0.0f, 0x1.311bcep-111f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.736762p-110f, 0.0f, 0.0f, 0.0f, 0x1.1a1f68p-16f, 0x1.5bf8acp-68f, 0.0f, 0.0f,
     0x1.737f3ap-99f, 0x1.1f6edp-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e2aca8p-92f,
     0x1.df6372p-82f, 0x1.2c33bp-56f, 0.0f, 0.0f, 0x1.b20f18p-118f, 0x1.b9769ap-62f,
     0.0f, 0x1.45ca6p-5f, 0.0f, 0.0f, 0x1.13d23ep-72f, 0.0f, 0x1.407c2ap-101f, 0.0f,
     0.0f, 0x1.cdc2cp-13f, 0.0f, 0x1.56c424p-113f, 0.0f, 0x1.0c068p-60f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ab103cp-14f, 0x1.1d419p-83f, 0.0f, 0x1.efa83ap-109f,
     0x1.5f54acp-8f, 0.0f, 0.0f, 0x1.f671e6p-88f, 0.0f, 0x1.6dd474p-108f,
     0x1.c4bbd4p-90f, 0x1.9a8fbep-13f, 0.0f, 0.0f, 0.0f, 0x1.e2425p-74f, 0.0f, 0.0f,
     0x1.9f45aep-67f, 0.0f, 0.0f, 0x1.263a68p-77f, 0x1.9a22b4p-75f, 0x1.70521p-46f,
     0.0f, 0.0f, 0x1.f3a15ap-96f, 0x1.8277a8p-111f, 0.0f, 0.0f, 0x1.4f6092p-121f,
     0x1.9e7c18p-90f, 0x1.47b456p-14f, 0.0f, 0x1.a3dd96p-82f, 0.0f, 0.0f, 0.0f,
     0x1.68a9cap-90f, 0x1.679c1ep-70f, 0.0f, 0.0f, 0x1.bd9374p-18f, 0.0f,
     0x1.08deccp-10f, 0.0f, 0.0f, 0x1.7b9dfap-52f, 0.0f, 0x1.741acp-91f, 0.0f, 0.0f,
     0x1.185a6p-18f, 0.0f, 0.0f, 0x1.af3458p-26f, 0.0f, 0x1.f111f4p-67f,
     0x1.c536ep-108f, 0x1.b956cep-101f, 0x1.1e4112p-40f, 0x1.a74fd4p-43f,
     0x1.748e5ep-37f, 0.0f, 0x1.c5dda2p-68f, 0x1.d1da02p-90f, 0.0f, 0.0f,
     0x1.b65cc2p-87f, 0x1.cd0af2p-85f, 0.0f, 0x1.5bcc08p-2f, 0x1.79d1a2p-124f,
     0x1.8ac62ap-89f, 0x1.e56568p-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b1d462p-88f, 0.0f, 0.0f, 0x1.f4e8f2p-22f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9003fep-19f, 0.0f, 0.0f, 0.0f, 0x1.5ee2c2p-54f, 0x1.0e2ea2p-62f, 0.0f,
     0x1.eeee16p-4f, 0x1.534e1cp-113f, 0.0f, 0x1.e6af22p-18f, 0.0f, 0x1.9dec5ep-34f,
     0x1.c09dd2p-35f, 0x1.ff401p-90f, 0.0f, 0x1.baffcep-47f, 0x1.e37bd8p-108f, 0.0f,
     0x1.d472e6p-12f, 0x1.aefa72p-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b74d0ap-109f, 0.0f,
     0.0f, 0x1.8cb3f6p-77f, 0x1.3ad958p-29f, 0.0f, 0x1.2245dap-99f, 0.0f,
     0x1.a0e3c6p-32f, 0x1.d720aap-77f, 0x1.a4f0e6p-5f, 0.0f, 0x1.492234p-86f, 0.0f,
     0.0f, 0.0f, 0x1.582b26p-113f, 0x1.7cfc08p-6f, 0x1.20e006p-56f, 0x1.ab8d3ep-28f,
     0x1.1c2ba4p-112f, 0.0f, 0x1.a448b6p-36f, 0x1.310236p-36f, 0x1.06be9ep-57f, 0.0f,
     0x1.9280acp-32f, 0x1.dd2a3ep-118f, 0x1.1bfd4cp-50f, 0x1.6a789ep-122f, 0.0f,
     0x1.cf2e94p-9f, 0.0f, 0.0f, 0x1.1f0dbap-84f, 0.0f, 0x1.75d7ap-119f,
     0x1.dfad9ap-25f, 0.0f, 0x1.bdc1ap-19f, 0x1.18c4e2p-17f, 0.0f, 0x1.1d866ep-77f,
     0x1.5eebc2p-86f, 0.0f, 0x1.b0f488p-61f, 0.0f, 0.0f, 0x1.142222p-95f,
     0x1.88ea1p-81f, 0.0f, 0.0f, 0x1.deb766p-62f, 0x1.0a63dep-47f, 0.0f,
     0x1.741fe2p-94f, 0x1.a2d624p-38f, 0x1.566772p-58f, 0.0f, 0.0f, 0.0f,
     0x1.d59fa8p-34f, 0.0f, 0.0f, 0x1.7b0c64p-36f, 0.0f, 0x1.a9b128p-50f, 0.0f,
     0x1.5cdf6p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.399e6cp-67f, 0x1.f380f2p-61f,
     0x1.392364p-56f, 0.0f, 0x1.ed4df4p-45f, 0x1.b2fa6ap-121f, 0x1.4d02bap-122f,
     0x1.36291ap-21f, 0.0f, 0.0f, 0.0f, 0x1.e24a82p-100f, 0x1.c815a6p-116f, 0.0f,
     0x1.a529acp-52f, 0x1.3e1538p-39f, 0x1.d4d0e8p-45f, 0.0f, 0x1.72f77ap-53f, 0.0f,
     0.0f, 0x1.78d458p-41f, 0.0f, 0.0f, 0.0f, 0x1.7c6bdep-5f, 0x1.5849dp-77f, 0.0f,
     0x1.fe94f2p-69f, 0x1.c481c6p-97f, 0.0f, 0.0f, 0x1.cfe6a6p-122f, 0.0f, 0.0f,
     0x1.042cf6p-26f, 0x1.9279e2p-4f, 0x1.313258p-113f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.781318p-21f, 0.0f, 0x1.492792p-16f, 0.0f, 0x1.db8e6p-83f, 0.0f, 0.0f,
     0x1.bda45ep-92f, 0.0f, 0.0f, 0x1.953128p-73f, 0x1.e988e2p-103f, 0.0f,
     0x1.f07ed8p-39f, 0.0f, 0x1.2433bcp-73f, 0x1.041d3ep-46f, 0x1.279d42p-32f,
     0x1.82474cp-116f, 0x1.1197a8p-12f, 0x1.d1b5dep-77f, 0x1.3a1daap-108f, 0.0f, 0.0f,
     0x1.d058ccp-102f, 0x1.1743e2p-73f, 0.0f, 0x1.307daep-21f, 0.0f, 0x1.27c0d2p-87f,
     0x1.969a78p-86f, 0.0f, 0.0f, 0.0f, 0x1.934ed2p-75f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f84d54p-80f, 0x1.b1a578p-90f, 0x1.335e0cp-12f, 0x1.b83f28p-65f,
     0x1.ec27e6p-118f, 0.0f, 0x1.d775b6p-54f, 0.0f, 0.0f, 0.0f, 0x1.ff2512p-114f,
     0x1.a7f64ep-95f, 0x1.8dfe54p-11f, 0.0f, 0x1.88d076p-4f, 0.0f, 0x1.b56292p-114f,
     0.0f, 0.0f, 0.0f, 0x1.29a862p-91f, 0x1.f8cb62p-19f, 0x1.b72a6ap-31f,
     0x1.3bce6p-31f, 0x1.1ee06ap-57f, 0.0f, 0x1.5b629cp-62f, 0.0f, 0x1.f6b53p-115f,
     0.0f, 0.0f, 0x1.a31c6ap-85f, 0.0f, 0.0f, 0x1.f73acap-108f, 0x1.1f1438p-76f, 0.0f,
     0x1.6b91c6p-26f, 0.0f, 0.0f, 0x1.260cd8p-88f, 0x1.a00d9ep-69f, 0x1.1ccaccp-124f,
     0.0f, 0x1.7bfbd2p-30f, 0.0f, 0x1.e053bcp-27f, 0.0f, 0x1.d46852p-38f,
     0x1.809d66p-61f, 0.0f, 0.0f, 0x1.c29bd4p-88f, 0.0f, 0x1.c22a32p-19f, 0.0f,
     0x1.8acc28p-100f, 0.0f, 0.0f, 0.0f, 0x1.42f33p-23f, 0.0f, 0.0f, 0x1.68f478p-111f,
     0.0f, 0x1.788b9ap-46f, 0x1.fe86ccp-29f, 0.0f, 0.0f, 0x1.3296eep-106f, 0.0f,
     0x1.6e2182p-31f, 0.0f, 0x1.65925cp-37f, 0x1.d00e26p-61f, 0.0f, 0.0f,
     0x1.008e02p-16f, 0x1.3ad88ap-113f, 0x1p0f, 0x1.3809ecp-20f, 0x1.1a18ccp-93f,
     0x1.6d72bcp-38f, 0x1.d59786p-47f, 0.0f, 0x1.e9f9e8p-33f, 0x1.899d7p-51f, 0.0f,
     0x1p0f, 0.0f, 0.0f, 0x1.5b4c7ep-25f, 0x1.7cd564p-70f, 0x1.422b7ep-32f,
     0x1.818554p-87f, 0.0f, 0x1.d1764ap-120f, 0x1.b78b8p-41f, 0x1.27cd3cp-10f, 0.0f,
     0x1.733814p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fc419cp-67f, 0x1.7dda04p-104f,
     0x1.a47f74p-88f, 0x1.6d06fp-95f, 0x1.4e1ac4p-23f, 0x1.e2aa74p-28f, 0.0f, 0.0f,
     0x1.ceee74p-47f, 0x1.a7da6p-117f, 0x1.f5c8fp-83f, 0.0f, 0x1.e402c4p-44f,
     0x1.68fe5p-125f, 0x1.68adf4p-58f, 0x1.41c764p-84f, 0x1.15d92p-40f,
     0x1.136b12p-49f, 0x1.98df38p-122f, 0.0f, 0.0f, 0x1.f89d06p-117f, 0x1.a8fb8cp-12f,
     0.0f, 0x1.3a44b8p-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fed7d6p-51f,
     0x1.fe81bcp-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d69cccp-117f, 0x1.86cfb4p-26f, 0.0f, 0.0f, 0x1.c2bd5p-70f, 0x1.b29f06p-96f,
     0.0f, 0x1.7b225cp-52f, 0.0f, 0x1.432b7cp-65f, 0x1.bec3eap-70f, 0x1.356aa6p-48f,
     0.0f, 0.0f, 0x1.318ab8p-115f, 0.0f, 0x1.7b3cf2p-14f, 0.0f, 0.0f, 0.0f,
     0x1.ee744ap-107f, 0x1.54d27ep-77f, 0.0f, 0x1.7f7ep-66f, 0.0f, 0x1.30947cp-23f,
     0.0f, 0.0f, 0.0f, 0x1.9c4fc4p-16f, 0x1.556278p-114f, 0x1.a1c546p-108f,
     0x1.fadf6ep-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6d4f6ap-51f,
     0x1.f4697cp-26f, 0.0f, 0x1.2a3f5cp-14f, 0x1.a610c4p-122f, 0x1.aec41ep-40f, 0.0f,
     0.0f, 0x1.b0f70ep-10f, 0.0f, 0x1.f4b3f8p-114f, 0.0f, 0x1.f9c3b2p-104f,
     0x1.43307ap-49f, 0.0f, 0x1.3eade8p-85f, 0.0f, 0.0f, 0.0f, 0x1.fe3db2p-100f, 0.0f,
     0x1.07bbccp-118f, 0x1.ec6806p-14f, 0x1.4795cep-126f, 0.0f, 0.0f,
     0x1.fe31fcp-110f, 0x1.84d76p-116f, 0x1.9084b6p-82f, 0.0f, 0x1.189494p-113f, 0.0f,
     0.0f, 0x1.c5872p-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b864cep-125f, 0.0f, 0.0f,
     0x1.d2c39ap-85f, 0x1.761ab2p-106f, 0x1.1b486ep-31f, 0.0f, 0x1.8485dcp-10f,
     0x1.2a191cp-13f, 0x1.755a88p-53f, 0.0f, 0x1.3838f6p-77f, 0x1.39dfdcp-126f,
     0x1.22cb3ep-22f, 0x1.35a322p-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.189f88p-32f,
     0x1.ce0208p-77f, 0x1.28c3bcp-12f, 0x1.fb7156p-59f, 0.0f, 0x1.910924p-126f,
     0x1.5864ep-31f, 0.0f, 0x1.a968cep-116f, 0x1.159e2ep-71f, 0.0f, 0.0f, 0.0f,
     0x1.15244ep-79f, 0.0f, 0.0f, 0x1.d9991p-53f, 0x1.2befe4p-43f, 0x1.914a44p-114f,
     0x1.93d43ap-57f, 0.0f, 0x1.461712p-100f, 0x1.a39c24p-95f, 0.0f, 0x1.57c318p-111f,
     0x1.f9cc9cp-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c068eep-22f, 0.0f, 0x1.2e9754p-55f,
     0x1.7feebap-10f, 0.0f, 0x1.b4d544p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.72e86cp-16f, 0.0f, 0x1.3e701cp-63f, 0.0f, 0.0f, 0x1.a9ea92p-75f,
     0x1.84ecd8p-110f, 0x1.6fdb5cp-119f, 0x1.5af54ap-2f, 0.0f, 0.0f, 0x1.a70a04p-20f,
     0x1.549f88p-84f, 0x1.025734p-1f, 0x1.91a978p-28f, 0.0f, 0x1.34d45cp-18f,
     0x1.6969c6p-17f, 0x1.1d4fp-44f, 0.0f, 0x1.971476p-112f, 0x1.4731c6p-100f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f81ep-59f, 0.0f, 0x1.9b4c58p-1f,
     0x1.c09cb8p-77f, 0x1.305a76p-29f, 0x1.6490dp-83f, 0.0f, 0x1.433528p-88f, 0.0f,
     0x1.2f0e84p-39f, 0.0f, 0.0f, 0x1.443ec8p-18f, 0x1.3dee26p-68f, 0.0f, 0.0f,
     0x1.5eb36ep-56f, 0.0f, 0.0f, 0x1.9dd22p-82f, 0.0f, 0x1.2137fap-39f,
     0x1.7a10fp-63f, 0.0f, 0x1.a49aap-86f, 0x1.53dc36p-108f, 0.0f, 0.0f,
     0x1.4e299cp-52f, 0.0f, 0x1.78151p-50f, 0x1.59be6ap-45f, 0x1.7f0e1ep-38f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.dc746ep-37f, 0.0f, 0.0f, 0x1.c99ebcp-15f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a9484ap-115f, 0.0f, 0x1.b00534p-24f, 0.0f, 0.0f, 0x1.f3e008p-42f,
     0x1.b6359ap-97f, 0x1.c1d6a4p-94f, 0.0f, 0x1.61c9cap-67f, 0x1.6b1648p-39f, 0.0f,
     0x1.c91aa2p-70f, 0x1.67e254p-91f, 0x1.971a14p-21f, 0x1.4429b8p-63f,
     0x1.7e70bcp-4f, 0.0f, 0x1.06e7acp-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bd42acp-106f,
     0x1.614c3ap-68f, 0.0f, 0.0f, 0x1.bbfec2p-77f, 0.0f, 0x1.1ab086p-90f, 0.0f, 0.0f,
     0x1.b7234ap-63f, 0.0f, 0.0f, 0x1.b81216p-74f, 0x1.b7d0fcp-44f, 0.0f,
     0x1.d4af9p-124f, 0x1.8072b2p-119f, 0.0f, 0.0f, 0.0f, 0x1.0944b8p-19f,
     0x1.be1a9ep-98f, 0.0f, 0.0f, 0.0f, 0x1.8d2d38p-89f, 0.0f, 0x1.4cf1e4p-95f, 0.0f,
     0x1.e02a44p-13f, 0.0f, 0x1.e6cad2p-117f, 0.0f, 0.0f, 0x1.6b1c6ep-42f,
     0x1.a9c582p-82f, 0.0f, 0x1.1585eap-117f, 0x1.b2b65p-97f, 0.0f, 0x1.efc1ep-71f,
     0x1.cc9212p-94f, 0x1.5a193ep-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3737bep-122f, 0x1.7e0672p-116f, 0x1.07fba8p-14f, 0x1.1a4574p-112f, 0.0f,
     0x1.6c13d6p-37f, 0x1.e821c4p-1f, 0x1.97ad0ep-48f, 0x1.6766c4p-58f,
     0x1.c9b554p-61f, 0.0f, 0x1.11a33cp-110f, 0x1.7dce42p-32f, 0x1.6272f2p-37f, 0.0f,
     0x1.87e3fep-11f, 0x1.ce7bcp-97f, 0.0f, 0x1.96ca22p-96f, 0x1.112c14p-43f,
     0x1.a620e4p-55f, 0.0f, 0x1.da9518p-81f, 0.0f, 0x1.b6494ep-55f
};
static const float external_bench_wrapper_input_table_arg1[1008]  = {
     0x1.642602p-122f, 0.0f, 0x1.fd0bdcp-122f, 0x1.d7338p-62f, 0.0f, 0.0f, 0.0f,
     0x1.2faa3ep-85f, 0.0f, 0x1.a6bf06p-102f, 0x1.92e166p-33f, 0x1.a2c366p-71f,
     0x1.15cb98p-30f, 0x1.f8df6ep-86f, 0.0f, 0x1.2235fep-76f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.51130cp-15f, 0.0f, 0x1.0ef97p-120f, 0.0f, 0.0f, 0x1.ed63c4p-57f, 0.0f,
     0.0f, 0x1.c2e5bep-73f, 0.0f, 0x1.b4754ap-102f, 0.0f, 0.0f, 0.0f,
     0x1.da2beap-111f, 0x1.cdbeecp-34f, 0x1.519d8ap-76f, 0x1.4d7636p-65f,
     0x1.eb662ap-78f, 0x1.151ad8p-71f, 0x1.2957a6p-16f, 0x1.39a94ap-50f,
     0x1.0024a4p-7f, 0x1.9c6298p-86f, 0x1.75c474p-53f, 0x1.f5eb9cp-54f,
     0x1.276408p-100f, 0x1.fd6364p-22f, 0x1.b04a54p-50f, 0x1.c51bep-120f, 0.0f,
     0x1.8c0676p-64f, 0.0f, 0.0f, 0x1.622618p-85f, 0.0f, 0.0f, 0x1.f4e172p-84f,
     0x1.d54bcp-10f, 0.0f, 0x1.964afp-109f, 0x1.c5a398p-71f, 0.0f, 0x1.bfa644p-73f,
     0x1.d99188p-54f, 0x1.c1a6b8p-65f, 0x1.9daf2p-14f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.39c2cep-74f, 0x1.deec8ep-110f, 0.0f, 0x1.5068cp-92f, 0x1.71de88p-85f, 0.0f,
     0.0f, 0.0f, 0x1.06a8cep-36f, 0x1.2d157cp-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c7957ep-56f, 0x1.3a15cap-100f, 0.0f, 0x1.7244a2p-32f, 0.0f,
     0x1.0f8756p-70f, 0x1.7e122ep-82f, 0.0f, 0x1.026cc6p-30f, 0x1.c07ecep-11f,
     0x1.cee1fcp-50f, 0x1.2a2f74p-110f, 0.0f, 0x1.c53d56p-35f, 0.0f, 0.0f, 0.0f,
     0x1.64b3a8p-9f, 0.0f, 0x1.eba108p-39f, 0x1.0ced4p-125f, 0x1.cf65ccp-24f,
     0x1.d4ec5ep-16f, 0x1.6a5772p-63f, 0.0f, 0.0f, 0x1.ae7e44p-83f, 0x1.73e6d8p-9f,
     0x1.bba04ep-79f, 0.0f, 0x1.6dc322p-49f, 0x1.a2bc88p-15f, 0x1.fafef6p-105f, 0.0f,
     0.0f, 0x1.5dc844p-76f, 0.0f, 0.0f, 0.0f, 0x1.e11a3cp-3f, 0x1.87ade8p-84f,
     0x1.7a7cb4p-28f, 0x1.8cbe26p-65f, 0.0f, 0.0f, 0x1.8c1d1ap-17f, 0x1.9f27e8p-125f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c3aff4p-22f, 0.0f, 0x1.a8076p-91f, 0.0f,
     0x1.8905f2p-72f, 0x1.86226cp-45f, 0x1.0eab8cp-120f, 0x1.302c1ep-115f, 0.0f,
     0x1.6e0a6ap-2f, 0.0f, 0.0f, 0x1.bc8806p-43f, 0.0f, 0x1.c23b1ep-101f,
     0x1.b0348ap-63f, 0.0f, 0.0f, 0.0f, 0x1.f46bd6p-58f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.573856p-54f, 0x1.bdbc12p-86f, 0.0f, 0.0f, 0x1.410bf2p-121f, 0x1.e23fe6p-87f,
     0x1.d164bap-92f, 0x1.669422p-120f, 0.0f, 0x1.150196p-43f, 0.0f, 0x1.dfcdd4p-92f,
     0.0f, 0x1.7a168p-109f, 0x1.b2e892p-19f, 0.0f, 0x1.8e7d78p-35f, 0x1.c5e5f8p-54f,
     0.0f, 0x1.44e0d6p-87f, 0x1.2328a6p-46f, 0x1.a15726p-86f, 0x1p0f, 0.0f, 0.0f,
     0.0f, 0x1.eceea8p-81f, 0.0f, 0.0f, 0.0f, 0x1.82358ap-25f, 0x1.00060cp-76f,
     0x1.8016cep-42f, 0x1.ba73a4p-62f, 0x1.b25d12p-123f, 0x1.5a9adap-79f, 0.0f,
     0x1.8a73d6p-54f, 0.0f, 0.0f, 0.0f, 0x1.fb1844p-14f, 0.0f, 0.0f, 0.0f,
     0x1.81141ep-121f, 0x1.a484cp-75f, 0.0f, 0.0f, 0x1.a5e87ep-109f, 0.0f,
     0x1.685334p-118f, 0.0f, 0.0f, 0.0f, 0x1.1df366p-51f, 0x1.145c4cp-41f,
     0x1.dac15ep-24f, 0x1.cc68eap-6f, 0.0f, 0.0f, 0.0f, 0x1.02c966p-84f, 0.0f, 0.0f,
     0x1.76b024p-69f, 0x1.0dfcbcp-27f, 0.0f, 0x1.ac5d2p-11f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1791a4p-41f, 0x1.46f4a6p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.07e148p-72f,
     0x1.8d5a5p-28f, 0.0f, 0x1.5270b6p-54f, 0x1.deeeb6p-44f, 0.0f, 0x1.cbdc28p-84f,
     0x1.d6ae9ap-25f, 0x1.56bfa6p-35f, 0x1.63f21p-83f, 0x1.cf90b6p-47f,
     0x1.b57e7cp-66f, 0.0f, 0x1.75a04cp-15f, 0x1.563996p-9f, 0x1.bd050cp-103f,
     0x1.1278fap-56f, 0.0f, 0x1.1e123p-90f, 0x1.e57d3p-87f, 0x1.80e332p-54f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a48708p-13f, 0.0f, 0x1.94453cp-23f,
     0x1.1b07cap-40f, 0x1.c8d1e2p-18f, 0.0f, 0.0f, 0.0f, 0x1.73e258p-90f, 0.0f, 0.0f,
     0x1.04e84p-22f, 0.0f, 0x1.13a3dep-99f, 0x1.b2806ap-73f, 0x1.6f8a04p-51f, 0.0f,
     0x1.3d421p-85f, 0.0f, 0x1.a936ecp-56f, 0x1.7f5ad4p-109f, 0x1.69009cp-49f, 0.0f,
     0x1.60929cp-44f, 0x1.17f458p-120f, 0.0f, 0.0f, 0.0f, 0x1.1de4b2p-55f,
     0x1.0f0b0ep-62f, 0x1.64d822p-111f, 0x1.45d592p-28f, 0x1.8327f8p-109f,
     0x1.96f438p-13f, 0.0f, 0.0f, 0x1.01f3e8p-4f, 0x1.fa0262p-13f, 0.0f,
     0x1.2bcb16p-78f, 0x1.5308dep-57f, 0x1.020cfcp-121f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d267dcp-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c8369ep-6f, 0x1.bfb1e8p-73f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.bb2392p-42f, 0x1.97ed1cp-100f, 0x1.b0d42cp-90f,
     0x1.b3ef86p-67f, 0.0f, 0x1.b8c8dp-80f, 0x1.5113f4p-78f, 0.0f, 0x1.da249cp-105f,
     0.0f, 0x1.425068p-43f, 0x1.647cf8p-83f, 0x1.fbf932p-24f, 0.0f, 0x1.f68f62p-8f,
     0.0f, 0x1.07c34ap-112f, 0.0f, 0.0f, 0x1.2e1008p-112f, 0.0f, 0x1.4c1086p-83f,
     0x1.bf733ap-80f, 0x1.1e6354p-122f, 0.0f, 0.0f, 0.0f, 0x1.a32b4ep-107f, 0.0f,
     0.0f, 0.0f, 0x1.6c2842p-48f, 0.0f, 0x1.b9b412p-114f, 0x1p0f, 0x1.770568p-90f,
     0x1.ec4b32p-91f, 0.0f, 0x1.46e2a2p-95f, 0.0f, 0.0f, 0x1.369558p-96f,
     0x1.73d0a2p-89f, 0.0f, 0.0f, 0.0f, 0x1.a5fd5cp-9f, 0.0f, 0x1.5f909ap-121f, 0.0f,
     0x1p0f, 0.0f, 0x1.2f802cp-63f, 0x1.b2a484p-89f, 0x1.21254ep-90f, 0x1.da604p-94f,
     0x1.f22b66p-38f, 0.0f, 0x1.ac4754p-99f, 0.0f, 0x1.876362p-4f, 0.0f,
     0x1.5e70dep-30f, 0x1.cbf2b2p-42f, 0.0f, 0x1.870822p-50f, 0x1.8e940ap-90f,
     0x1.f33a2p-79f, 0.0f, 0.0f, 0x1.f889a6p-77f, 0.0f, 0.0f, 0x1.f1f5acp-59f, 0.0f,
     0.0f, 0x1.49d186p-36f, 0.0f, 0.0f, 0x1.e743cap-14f, 0.0f, 0x1.b49e66p-102f,
     0x1.bdf5ecp-98f, 0.0f, 0.0f, 0.0f, 0x1.d45b0ap-112f, 0.0f, 0.0f, 0x1.1463f2p-12f,
     0x1.6d4ebap-29f, 0x1.ca61c8p-47f, 0.0f, 0.0f, 0x1.c33154p-53f, 0.0f,
     0x1.4e15fap-101f, 0x1.1d1dbcp-49f, 0.0f, 0x1.e95486p-30f, 0x1.17a0fep-9f, 0.0f,
     0.0f, 0x1.8ae26cp-38f, 0x1.800588p-6f, 0x1.93b3dp-61f, 0x1.8a3a9cp-113f,
     0x1.657feep-20f, 0.0f, 0x1.37540ap-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bfd1b4p-110f, 0x1.08ef14p-54f, 0x1.eacc6ap-37f, 0.0f, 0x1.3840dap-70f,
     0x1.49b6ccp-24f, 0.0f, 0x1.68b58ep-89f, 0.0f, 0.0f, 0x1.8ba83p-106f,
     0x1.7461bap-103f, 0x1.851af6p-101f, 0x1.c8502p-88f, 0x1.881778p-74f, 0.0f,
     0x1.57c682p-23f, 0.0f, 0x1.458ed2p-104f, 0x1.29981p-119f, 0.0f, 0x1.7c78eep-80f,
     0x1.4c2fcp-80f, 0x1.3aeb62p-93f, 0x1.61b21ap-23f, 0.0f, 0.0f, 0x1.dbabd8p-119f,
     0x1.9c68a4p-47f, 0.0f, 0x1.7fabf8p-12f, 0x1.5bb6aap-37f, 0.0f, 0.0f, 0.0f,
     0x1.2e4296p-46f, 0x1.2090aep-7f, 0.0f, 0x1.19ce56p-73f, 0.0f, 0.0f,
     0x1.43dcacp-53f, 0x1.a028f2p-5f, 0x1.252644p-90f, 0x1.e2e62ep-118f, 0.0f,
     0x1.64fe4ap-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a9c8a6p-40f, 0.0f, 0x1.8c8d2ep-71f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f4a44ap-108f, 0.0f, 0x1.f7b536p-67f, 0.0f,
     0x1.fab2f8p-21f, 0.0f, 0.0f, 0x1.ebe89ep-29f, 0x1.0cdfc4p-51f, 0x1.c5d4b4p-80f,
     0x1.547fap-102f, 0x1.b9aedcp-6f, 0x1.fe729p-106f, 0x1.9b2778p-78f,
     0x1.bbb7fap-81f, 0x1.099d8ap-21f, 0x1.7275dap-110f, 0.0f, 0.0f, 0x1.b5106p-43f,
     0.0f, 0x1.b947f8p-23f, 0.0f, 0.0f, 0.0f, 0x1.edc3a6p-72f, 0.0f, 0x1.7bcd5cp-24f,
     0x1.e63e7ep-26f, 0.0f, 0.0f, 0x1.fe0e8cp-29f, 0.0f, 0.0f, 0.0f, 0x1.6f96ep-83f,
     0.0f, 0.0f, 0x1.d6070ap-53f, 0x1.bd1b9ap-72f, 0x1.76f17p-23f, 0x1.054ad2p-108f,
     0x1.ea461ep-55f, 0.0f, 0.0f, 0.0f, 0x1.7f64fp-23f, 0x1.aa4d0cp-16f, 0.0f,
     0x1.7f3df2p-117f, 0x1.5383dp-95f, 0.0f, 0x1.e4ea52p-111f, 0x1.75201ep-104f, 0.0f,
     0x1.b6c9cap-45f, 0x1.f3ded6p-106f, 0.0f, 0.0f, 0x1.626572p-74f, 0x1.29b9acp-23f,
     0x1.4a3c8ap-92f, 0.0f, 0x1.9e02ap-35f, 0.0f, 0.0f, 0.0f, 0x1.0e932ep-61f, 0.0f,
     0x1.bb3f28p-21f, 0.0f, 0x1.df2754p-10f, 0.0f, 0x1.02e812p-53f, 0x1.836514p-22f,
     0x1.f56b64p-115f, 0x1.2f3e3p-50f, 0.0f, 0.0f, 0x1.72660ep-113f, 0.0f, 0.0f,
     0x1.b2b4ecp-37f, 0x1.de7ec2p-50f, 0.0f, 0x1.3bebe2p-92f, 0.0f, 0x1.afabaap-22f,
     0.0f, 0.0f, 0x1.9db612p-40f, 0.0f, 0x1.2eb8acp-3f, 0x1.d5c0dp-51f,
     0x1.3754cep-78f, 0.0f, 0x1.82ca2ep-92f, 0x1.cc3248p-103f, 0.0f, 0.0f, 0.0f,
     0x1.5658bcp-24f, 0x1.059382p-15f, 0.0f, 0x1.9af7fap-34f, 0x1.ddac3ap-59f,
     0x1.cc9e04p-50f, 0.0f, 0.0f, 0x1.e2693p-12f, 0x1.d8c46p-56f, 0x1.0ca426p-108f,
     0.0f, 0x1.6bd4b6p-32f, 0x1.78da2p-72f, 0.0f, 0x1.88b99ap-86f, 0.0f, 0.0f,
     0x1.574884p-35f, 0x1.26a1cap-27f, 0x1.ea17cp-85f, 0.0f, 0x1.ed057ep-36f,
     0x1.669886p-101f, 0x1.798824p-4f, 0.0f, 0x1.a6c794p-39f, 0.0f, 0x1.a749dcp-27f,
     0.0f, 0.0f, 0x1.b96a0ap-68f, 0x1.7ac244p-64f, 0x1.45aef8p-125f, 0x1.16c05cp-32f,
     0.0f, 0.0f, 0x1.b3779ap-65f, 0.0f, 0x1.9c9bbap-58f, 0x1.aa503cp-20f,
     0x1.fa273cp-68f, 0x1.cda8ep-13f, 0.0f, 0x1.06c93cp-41f, 0x1.1b0ca2p-34f, 0.0f,
     0x1.18ba4p-101f, 0x1.b40012p-10f, 0.0f, 0x1.dfb9ecp-69f, 0.0f, 0.0f,
     0x1.304362p-70f, 0x1.9b0afp-23f, 0x1.a3c0dep-22f, 0.0f, 0x1.e54dc4p-27f,
     0x1.fc0722p-9f, 0x1.97f29cp-17f, 0x1.3fd83ep-9f, 0x1.4bc6c6p-46f, 0.0f, 0.0f,
     0.0f, 0x1.3ca666p-22f, 0x1.b5da68p-21f, 0.0f, 0x1.a2072cp-116f, 0.0f, 0.0f,
     0x1.6a453ap-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.be49d6p-115f, 0x1.00adeep-28f,
     0x1.191decp-49f, 0x1.4d6ee2p-88f, 0.0f, 0.0f, 0x1.9adf1p-15f, 0.0f,
     0x1.097e5p-52f, 0x1.74a01ep-117f, 0x1.98857ep-74f, 0.0f, 0x1.312fa6p-38f, 0.0f,
     0.0f, 0x1.9433fcp-59f, 0x1.e0d57ep-13f, 0x1.a76302p-4f, 0x1.2be812p-115f,
     0x1.bb8452p-12f, 0x1.70988p-82f, 0.0f, 0.0f, 0.0f, 0x1.431ebap-67f, 0.0f,
     0x1.ce9a7p-86f, 0x1.4701fcp-16f, 0x1.8e674ep-91f, 0.0f, 0.0f, 0.0f,
     0x1.3209cp-51f, 0x1.71a2acp-122f, 0.0f, 0x1.1d964cp-52f, 0.0f, 0.0f, 0.0f,
     0x1.bc6ac4p-126f, 0.0f, 0.0f, 0.0f, 0x1.1bb4f4p-105f, 0x1.373e66p-16f,
     0x1.c4fe8ep-88f, 0x1.65afep-68f, 0x1.11da98p-17f, 0x1.f7a52ep-76f,
     0x1.f10e86p-51f, 0x1.640306p-6f, 0.0f, 0.0f, 0.0f, 0x1.019fdcp-48f, 0.0f,
     0x1.4637e4p-26f, 0.0f, 0.0f, 0.0f, 0x1.51e712p-17f, 0.0f, 0.0f, 0x1.64c65cp-23f,
     0.0f, 0.0f, 0x1.e97204p-101f, 0x1.57f9a8p-34f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3d63fap-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5cb8ecp-92f, 0.0f, 0x1.899ff2p-96f,
     0x1.1233aep-121f, 0x1.f1b92p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e0b822p-88f, 0.0f,
     0.0f, 0x1.f0c8f4p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.85973cp-10f, 0.0f, 0.0f,
     0x1.c89162p-110f, 0.0f, 0x1.560a8p-41f, 0x1.ad8842p-30f, 0.0f, 0x1.de943p-122f,
     0x1.84fp-30f, 0.0f, 0x1.f81e8cp-4f, 0.0f, 0x1.c27316p-110f, 0x1.0f8902p-7f,
     0x1.5048aap-38f, 0.0f, 0x1.71dc1ep-89f, 0x1.c38754p-113f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5642f2p-6f, 0x1.253f8ep-83f, 0x1.ef8f64p-42f, 0.0f, 0x1.9d5cf2p-6f,
     0x1.72ae24p-66f, 0.0f, 0.0f, 0.0f, 0x1.240036p-104f, 0x1.ca5e6ap-70f,
     0x1.e1599ep-117f, 0.0f, 0.0f, 0x1.202e1ap-58f, 0.0f, 0x1.10b15p-69f,
     0x1.efb2cep-6f, 0x1.5d7776p-104f, 0.0f, 0.0f, 0x1.66cd2p-17f, 0x1.b934f8p-29f,
     0.0f, 0x1.955f48p-13f, 0.0f, 0x1.4a014cp-91f, 0x1.7e80c6p-3f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f8d248p-81f, 0x1.249eb4p-102f, 0.0f, 0x1.96154p-3f, 0.0f,
     0.0f, 0.0f, 0x1.45134ep-77f, 0.0f, 0.0f, 0x1.7a912p-44f, 0x1.07ed7p-74f,
     0x1.143172p-93f, 0.0f, 0x1.8c2f38p-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2ad6f6p-96f,
     0.0f, 0x1.eb1028p-35f, 0.0f, 0x1.027bfp-78f, 0x1.2acb2ep-27f, 0.0f,
     0x1.e0b65p-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4a80e4p-80f, 0x1.2e73dap-25f,
     0x1.6f93f4p-92f, 0x1.4dcc34p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f9debcp-94f, 0.0f,
     0x1.4e71c4p-48f, 0x1.fe9d42p-124f, 0.0f, 0.0f, 0x1.04d36ep-14f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.696ef6p-97f, 0x1.edc02p-42f, 0.0f, 0x1.1bdf2ap-96f, 0x1.357bep-23f,
     0x1.603b5ap-95f, 0.0f, 0x1.216cbep-110f, 0x1.fb7f32p-27f, 0x1.107c4ap-34f,
     0x1.c99e8cp-79f, 0.0f, 0x1.dce994p-91f, 0x1.589efp-75f, 0x1.ae481p-123f, 0.0f,
     0x1.803446p-88f, 0.0f, 0.0f, 0x1.8584dp-24f, 0x1.1e3878p-110f, 0x1.71448ep-64f,
     0.0f, 0.0f, 0x1.cd96f6p-120f, 0x1.457026p-18f, 0.0f, 0x1.bd768p-56f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.4421f6p-75f, 0x1.614d7p-29f, 0x1.fa682ap-2f, 0.0f,
     0x1.91b2d4p-63f, 0x1.81b866p-45f, 0x1.56cd5cp-16f, 0.0f, 0x1.6a6dc4p-81f,
     0x1.621322p-30f, 0x1.e883bp-68f, 0.0f, 0.0f, 0x1.3fa878p-2f, 0x1.8a6d8ep-12f,
     0.0f, 0.0f, 0x1.ae4d64p-55f, 0.0f, 0x1.a2441ep-97f, 0x1.fee2d6p-60f,
     0x1.a4cd6ap-75f, 0x1.329044p-38f, 0x1.0680cp-2f, 0.0f, 0x1.820eb2p-23f, 0.0f,
     0x1.371a4p-73f, 0x1.5233c2p-103f, 0.0f, 0x1.ae8054p-28f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b4ab36p-10f, 0x1.3b42bp-95f, 0x1.5c15bp-104f, 0.0f,
     0x1.d3a464p-57f, 0.0f, 0x1.64066ep-48f, 0x1.360088p-5f, 0x1.466aa8p-38f, 0.0f,
     0.0f, 0.0f, 0x1.4d18bp-89f, 0x1.b2f146p-8f, 0.0f, 0.0f, 0.0f, 0x1.0e6d7cp-70f,
     0.0f, 0.0f, 0.0f, 0x1.c24c36p-92f, 0.0f, 0.0f, 0x1.661138p-6f, 0.0f,
     0x1.48bcc6p-107f, 0x1.cd772ep-20f, 0.0f, 0x1.eda612p-43f, 0.0f, 0x1.c2f004p-47f,
     0x1.8cbc2p-113f, 0x1.b910b8p-86f, 0x1.a24306p-67f, 0x1.8b0ff6p-65f,
     0x1.4c3faap-10f, 0x1.17e36ap-15f, 0x1.ebb7aap-100f, 0.0f, 0x1.58623cp-51f, 0.0f,
     0.0f, 0x1.8e63d2p-102f, 0.0f, 0x1.9d6caep-54f, 0x1.d4f148p-13f, 0.0f, 0.0f,
     0x1.a3c4fep-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f
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
            tmp2 = Sleef_finz_powf8_u10kvx(tmp0, tmp1);
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
    printf("Sleef_finz_powf8_u10kvx %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_finz_powf8_u10kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
