/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_fmaxf8_kvx.c --function Sleef_fmaxf8_kvx --arity 2 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32,binary32 \
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
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3a1d08p-3f, 0.0f, 0.0f, 0.0f, 0x1.821f6cp-54f,
     0x1.2a4c74p-74f, 0.0f, 0.0f, 0.0f, 0x1.fdd7d2p-3f, 0x1.2caaap-76f, 0.0f, 0.0f,
     0x1.c9e8ecp-22f, 0x1.4cb338p-82f, 0x1.cc8874p-111f, 0.0f, 0x1.7af052p-96f,
     0x1.f9968ap-87f, 0.0f, 0.0f, 0.0f, 0x1.b91462p-15f, 0.0f, 0x1.69e1fap-35f,
     0x1.20bef6p-75f, 0.0f, 0.0f, 0x1.36ad5p-72f, 0x1.efd342p-90f, 0x1.ff80c8p-17f,
     0x1.a21342p-96f, 0x1.af6be8p-107f, 0x1.32e352p-90f, 0x1.cb577ap-6f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.77588cp-3f, 0.0f, 0x1.48824cp-54f, 0x1.ddf368p-22f,
     0x1.a869d2p-57f, 0.0f, 0x1.5b97c2p-33f, 0.0f, 0.0f, 0.0f, 0x1.666d3ep-102f, 0.0f,
     0x1.25b552p-91f, 0x1.5844acp-32f, 0x1.c43e88p-25f, 0.0f, 0.0f, 0x1.446806p-5f,
     0x1.102706p-50f, 0.0f, 0x1.fdcb36p-2f, 0x1.5db51ap-36f, 0x1.e64394p-32f, 0.0f,
     0x1.bb628ap-23f, 0x1.9d03fcp-77f, 0.0f, 0.0f, 0x1.93aa32p-18f, 0.0f, 0.0f, 0.0f,
     0x1.7d4d0cp-6f, 0x1.1401dap-8f, 0.0f, 0.0f, 0.0f, 0x1.fba72p-75f,
     0x1.e4e532p-79f, 0.0f, 0x1.424cd8p-12f, 0x1.d6b49ap-104f, 0.0f, 0.0f, 0.0f,
     0x1.e06e9ep-125f, 0.0f, 0.0f, 0x1.5f137ap-16f, 0.0f, 0.0f, 0.0f,
     0x1.5a1b16p-116f, 0x1.ef068ep-8f, 0x1.ca6cf4p-125f, 0x1.f4c816p-101f,
     0x1.7275fep-87f, 0x1.dcc2f8p-107f, 0.0f, 0x1.9a06f4p-33f, 0.0f, 0x1.9b7858p-90f,
     0.0f, 0x1.2def5cp-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4cbbc4p-22f, 0.0f,
     0x1.cb93dap-47f, 0.0f, 0.0f, 0x1.f41c8cp-47f, 0x1.a2ef4ep-49f, 0.0f, 0.0f,
     0x1.45c8f2p-16f, 0.0f, 0x1.88861ep-106f, 0x1.defab6p-110f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.6ea236p-28f, 0.0f, 0.0f, 0.0f, 0x1.800508p-4f, 0.0f,
     0x1.87a4dcp-124f, 0.0f, 0.0f, 0.0f, 0x1.c2915ep-79f, 0x1.8aa13cp-8f,
     0x1.d74f32p-93f, 0.0f, 0x1.7ff75p-24f, 0.0f, 0x1.c4d236p-84f, 0.0f,
     0x1.0562ep-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fd0dccp-55f,
     0x1.f7415ep-117f, 0x1.4b8afp-1f, 0x1.4763d4p-56f, 0.0f, 0x1.56a94ep-110f, 0.0f,
     0.0f, 0.0f, 0x1.5036f6p-88f, 0.0f, 0x1.1dbe22p-103f, 0.0f, 0x1.f5402p-59f, 0.0f,
     0x1.3e54c6p-96f, 0.0f, 0x1.e4b75ap-71f, 0.0f, 0.0f, 0x1.d1ba3p-2f,
     0x1.4efc58p-120f, 0x1.835e9ep-112f, 0x1.4e396ap-28f, 0.0f, 0x1.b1f54ep-101f,
     0x1.29c2bap-114f, 0.0f, 0x1.20ee9p-26f, 0.0f, 0x1.dfecdp-25f, 0x1.2d1e86p-100f,
     0x1.1231a8p-64f, 0x1.951cc4p-102f, 0x1.f8239ap-49f, 0x1.655a8ep-76f, 0.0f, 0.0f,
     0x1.35bf52p-57f, 0.0f, 0x1.d9641ap-35f, 0.0f, 0.0f, 0x1.3d7fc4p-107f,
     0x1.b4ff1cp-22f, 0.0f, 0.0f, 0x1.e7bae6p-66f, 0.0f, 0.0f, 0.0f, 0x1.bf3322p-58f,
     0.0f, 0x1.6792fp-41f, 0x1.99695cp-90f, 0x1.10b0bcp-36f, 0.0f, 0.0f, 0.0f,
     0x1.27b694p-6f, 0x1.b48e1p-122f, 0.0f, 0x1.335494p-99f, 0.0f, 0.0f,
     0x1.8c95e8p-13f, 0x1.4df742p-47f, 0x1.ec06e6p-122f, 0x1.984652p-58f,
     0x1.3324cap-14f, 0x1.3cb9dp-44f, 0x1.31297ap-111f, 0.0f, 0.0f, 0.0f,
     0x1.82c56ap-88f, 0.0f, 0x1.14d7d2p-124f, 0.0f, 0.0f, 0.0f, 0x1.e9028p-102f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d1f7d4p-32f, 0x1.24526cp-63f, 0x1.7c4756p-62f, 0.0f,
     0x1.c18ef6p-33f, 0.0f, 0.0f, 0.0f, 0x1.d2ae06p-4f, 0x1.1ddaa8p-105f,
     0x1.c068d4p-46f, 0.0f, 0.0f, 0x1.daf982p-79f, 0.0f, 0x1.18a5fcp-61f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f76eaap-32f, 0x1.420422p-43f, 0x1.e890d2p-106f, 0.0f,
     0x1.2ff8dcp-52f, 0x1.9faee2p-96f, 0.0f, 0x1.32949ep-36f, 0x1.c2dd72p-38f,
     0x1.5c9526p-10f, 0.0f, 0.0f, 0x1.f4205cp-24f, 0.0f, 0.0f, 0.0f, 0x1.3d5d96p-80f,
     0.0f, 0x1.598eecp-98f, 0x1.e46deep-21f, 0.0f, 0.0f, 0.0f, 0x1.f47d22p-18f, 0.0f,
     0x1.6e722ap-10f, 0x1.d39558p-40f, 0.0f, 0x1.605baep-33f, 0x1.54a26cp-5f, 0.0f,
     0x1.e4fc52p-115f, 0.0f, 0x1.fa2164p-14f, 0.0f, 0.0f, 0.0f, 0x1.77366cp-34f,
     0x1.6b4278p-27f, 0x1.c21446p-104f, 0x1.e8d9d4p-78f, 0x1.2f97c8p-47f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.bb0d56p-42f, 0x1.683cdcp-107f, 0x1.d6886ep-61f, 0x1.1b399ep-57f,
     0x1.041418p-19f, 0.0f, 0x1.66be5ap-33f, 0x1.3db462p-51f, 0.0f, 0.0f,
     0x1.046cb6p-100f, 0x1.9f5018p-5f, 0x1.1a6276p-19f, 0.0f, 0.0f, 0.0f,
     0x1.ff0a1ep-66f, 0.0f, 0.0f, 0x1.e14fc2p-126f, 0x1.a23874p-88f, 0x1.916938p-31f,
     0x1p0f, 0.0f, 0.0f, 0x1.d9aa7p-118f, 0x1.52ed5ep-1f, 0x1.91db0cp-1f, 0.0f,
     0x1.bb04c2p-25f, 0x1.5fdfdep-7f, 0x1.37c032p-82f, 0.0f, 0x1.c00098p-71f, 0.0f,
     0.0f, 0x1.b9cb06p-48f, 0.0f, 0x1.07cffep-81f, 0.0f, 0.0f, 0x1.f4833p-41f,
     0x1.fb2392p-41f, 0x1.0c9926p-11f, 0x1.825bc2p-58f, 0.0f, 0x1.d52f6ap-103f,
     0x1.4c4094p-55f, 0x1.4eabc4p-104f, 0x1.628b44p-52f, 0x1.904bb2p-120f, 0.0f, 0.0f,
     0x1.d2aa98p-59f, 0x1.493bfp-39f, 0x1.9f6f54p-23f, 0.0f, 0.0f, 0x1.b66e8p-75f,
     0x1.248cdp-49f, 0x1.0c35e8p-56f, 0x1.da6d78p-104f, 0x1.c54258p-3f,
     0x1.20438cp-9f, 0x1.30de86p-56f, 0.0f, 0.0f, 0.0f, 0x1.2eb39ep-3f,
     0x1.298598p-26f, 0x1.730e04p-120f, 0x1.2fafbep-70f, 0.0f, 0.0f, 0.0f,
     0x1.f18394p-120f, 0x1.cce1dcp-125f, 0x1.f2e586p-57f, 0x1.820f84p-10f, 0.0f,
     0x1.6fe548p-111f, 0.0f, 0x1.98195ep-58f, 0x1.0d7b72p-103f, 0.0f, 0.0f,
     0x1.a8b152p-22f, 0.0f, 0.0f, 0.0f, 0x1.612af6p-30f, 0x1.c996aap-26f, 0.0f, 0.0f,
     0x1.541b86p-106f, 0.0f, 0.0f, 0x1.fec64ep-62f, 0x1.227fap-75f, 0x1.5ede7ap-67f,
     0.0f, 0x1.536d58p-54f, 0.0f, 0x1.61334ep-98f, 0.0f, 0.0f, 0x1.39fbeap-112f,
     0x1.fe4f64p-99f, 0x1.281982p-94f, 0x1.243cfcp-121f, 0.0f, 0x1.b5ea3ap-100f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.010e6ep-100f, 0x1.8efc6ep-79f, 0.0f,
     0x1.fa2924p-10f, 0x1.743254p-45f, 0.0f, 0.0f, 0x1.848242p-110f, 0x1.72d5f6p-94f,
     0.0f, 0x1.28bab8p-61f, 0.0f, 0x1.a1abd6p-97f, 0.0f, 0.0f, 0x1.bc3584p-44f,
     0x1.bbe3a8p-84f, 0.0f, 0x1.e88cbap-52f, 0x1.6d3b0cp-48f, 0x1.83367ap-111f, 0.0f,
     0x1.31bed6p-28f, 0x1.893b08p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.41fec2p-103f, 0x1.f7c8fep-70f, 0x1.36a93ap-103f, 0.0f, 0x1.6b4d7p-5f, 0.0f,
     0x1.6834fcp-49f, 0x1.617ed6p-36f, 0.0f, 0x1.04fc7cp-69f, 0x1.2e26fcp-114f, 0.0f,
     0x1.127128p-35f, 0.0f, 0x1.f95be8p-83f, 0x1.76b07cp-61f, 0x1.d723b6p-13f,
     0x1.dac32ap-107f, 0.0f, 0x1.1be9ecp-19f, 0x1.502826p-14f, 0x1.77b14ep-92f, 0.0f,
     0.0f, 0x1.86e538p-97f, 0.0f, 0x1.a19726p-21f, 0.0f, 0.0f, 0.0f, 0x1.7e6edap-76f,
     0.0f, 0.0f, 0x1.3794e2p-17f, 0.0f, 0x1.45fb14p-39f, 0.0f, 0x1.55b7a4p-61f,
     0x1.9dcca2p-109f, 0.0f, 0x1.dfecf8p-6f, 0x1.43427p-66f, 0.0f, 0x1.ebe754p-93f,
     0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.7abd26p-25f, 0x1.a90c52p-95f, 0.0f,
     0x1.6d7ae2p-18f, 0x1.6d4bp-13f, 0x1.e180b4p-25f, 0x1.712dc6p-110f,
     0x1.95c5cep-40f, 0x1.382802p-76f, 0x1p0f, 0x1.ffb9ep-71f, 0.0f, 0x1.5a0998p-121f,
     0x1.9164e6p-100f, 0x1.f78b2ap-81f, 0x1.e20868p-71f, 0x1.9a794p-55f, 0.0f,
     0x1.8969p-83f, 0x1.6391b6p-21f, 0x1.31eeb6p-61f, 0.0f, 0x1.79a96cp-110f, 0.0f,
     0x1.c1b702p-114f, 0x1.8ded38p-11f, 0x1.521d18p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ceb5aap-54f, 0x1.192878p-68f, 0x1.567d54p-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c05a3cp-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cac27ep-29f, 0.0f,
     0x1.82d0a2p-83f, 0.0f, 0x1.273124p-71f, 0.0f, 0.0f, 0x1.9b3028p-56f, 0.0f, 0.0f,
     0.0f, 0x1.37bc38p-90f, 0x1.8fb7b4p-120f, 0.0f, 0x1.ba9598p-25f, 0.0f, 0.0f, 0.0f,
     0x1.246fccp-49f, 0x1.815c6ep-120f, 0.0f, 0.0f, 0x1.1f466cp-40f, 0x1.c0942cp-44f,
     0.0f, 0.0f, 0.0f, 0x1.ebd222p-63f, 0x1.273234p-1f, 0x1.6c54b6p-49f, 0x1p0f, 0.0f,
     0x1.bc1178p-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ecb518p-100f, 0x1.dac53cp-25f,
     0.0f, 0.0f, 0x1.5f0ab8p-121f, 0.0f, 0x1.0f948ap-33f, 0x1.bd9cb4p-5f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d8413p-17f, 0x1.1401aap-72f, 0.0f, 0x1.459394p-67f,
     0x1.3ee9fep-82f, 0.0f, 0.0f, 0x1.ac15a4p-120f, 0.0f, 0x1.9613fap-9f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.4a2ca6p-25f, 0x1.104f22p-10f, 0x1.22f89ep-117f, 0.0f, 0.0f,
     0x1.77cff2p-18f, 0.0f, 0x1.d3665p-41f, 0.0f, 0x1.61e0aap-94f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c82776p-22f, 0.0f, 0.0f, 0x1.1db3acp-77f, 0.0f, 0.0f, 0.0f,
     0x1.1c38f8p-93f, 0x1.b922fap-65f, 0.0f, 0.0f, 0x1.da88b4p-42f, 0x1.c6fcc2p-78f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.85e9fep-53f, 0.0f, 0x1.3136ep-15f, 0x1.3be5d4p-21f,
     0x1.bd2a8ep-83f, 0x1.a75322p-58f, 0.0f, 0.0f, 0x1.a3eb94p-22f, 0x1.8992bap-54f,
     0.0f, 0x1.94522cp-23f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.6f60f8p-114f, 0.0f, 0.0f,
     0x1.b11f9ep-105f, 0.0f, 0.0f, 0x1.c03e8p-84f, 0.0f, 0x1.f208aep-27f, 0.0f, 0.0f,
     0.0f, 0x1p0f, 0.0f, 0x1.41f12ep-19f, 0.0f, 0x1.8b328p-126f, 0.0f,
     0x1.07ec56p-85f, 0x1.a2e7b8p-110f, 0x1.ff11c4p-100f, 0x1.e4b4aap-7f,
     0x1.b4fa4ap-87f, 0x1.769826p-52f, 0x1.63c0b4p-31f, 0.0f, 0x1.1511ccp-75f,
     0x1.b9ec32p-71f, 0x1.da4dd8p-7f, 0x1.8bce9ep-106f, 0.0f, 0x1.a5b55ap-120f, 0.0f,
     0x1.73aa48p-22f, 0.0f, 0x1.360658p-62f, 0x1.cc556cp-37f, 0.0f, 0.0f,
     0x1.7e41ecp-100f, 0.0f, 0x1.9b94e8p-8f, 0x1.be3e62p-63f, 0x1.d83fa4p-76f, 0.0f,
     0.0f, 0x1.976652p-76f, 0x1.be9324p-3f, 0x1.7abb1ap-48f, 0x1.6a338p-73f,
     0x1.51ca76p-39f, 0.0f, 0x1.ada4p-28f, 0.0f, 0x1.79cd06p-113f, 0.0f,
     0x1.325a34p-52f, 0x1.cf991ep-13f, 0.0f, 0x1.85924ap-115f, 0x1.9cc99ep-49f, 0.0f,
     0x1.c41496p-84f, 0x1.ea7d48p-83f, 0.0f, 0x1.c03b3ap-57f, 0x1.c6ca36p-29f,
     0x1.6154aep-110f, 0x1.0e897cp-31f, 0x1.6aa6bcp-30f, 0.0f, 0x1.29493ap-34f, 0.0f,
     0x1.2a0892p-7f, 0.0f, 0.0f, 0x1.b2bae6p-85f, 0.0f, 0.0f, 0x1.36b4c2p-114f, 0.0f,
     0x1.5117c6p-106f, 0.0f, 0x1.1cbd9cp-106f, 0.0f, 0x1.5d36acp-56f, 0.0f,
     0x1.0a32aap-88f, 0x1.cdffcp-25f, 0x1.e7fa2ep-119f, 0x1.9fd9dap-19f, 0.0f, 0.0f,
     0.0f, 0x1.09c5b8p-91f, 0x1.796992p-67f, 0.0f, 0x1.1d8716p-46f, 0.0f,
     0x1.979c28p-102f, 0x1.25febp-88f, 0.0f, 0.0f, 0x1.f26e9ap-97f, 0x1.9cfd1ap-82f,
     0.0f, 0x1.bb0a52p-11f, 0x1.4d869ap-29f, 0.0f, 0x1.66638p-30f, 0x1.1ce7bep-40f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ea82d4p-113f, 0x1.bf269cp-50f, 0x1.91133ap-5f,
     0x1.b165c2p-46f, 0x1.c5371ap-63f, 0.0f, 0.0f, 0.0f, 0x1.9e637ap-107f,
     0x1.3f7072p-26f, 0x1.0db456p-92f, 0x1.cc6176p-1f, 0x1.ffc262p-22f, 0.0f, 0.0f,
     0x1.3c9d14p-119f, 0.0f, 0.0f, 0x1.edeef6p-124f, 0.0f, 0.0f, 0x1.0fc42ap-41f,
     0.0f, 0x1.84c362p-40f, 0x1.f060bp-46f, 0x1.7770aap-89f, 0.0f, 0x1.d04402p-95f,
     0.0f, 0.0f, 0x1.cc0dbep-126f, 0x1.a3ee9ep-63f, 0.0f, 0x1.7efec4p-17f, 0.0f, 0.0f,
     0x1.98f74ap-105f, 0.0f, 0.0f, 0.0f, 0x1.325becp-64f, 0x1.1f07ecp-93f,
     0x1.90b87ep-57f, 0.0f, 0x1.4c49dap-118f, 0x1.16395ap-98f, 0x1.5f3df2p-18f,
     0x1.eeb80ep-119f, 0.0f, 0x1.abb848p-48f, 0x1.bb0feap-21f, 0x1.05abdp-89f, 0.0f,
     0x1.76beb2p-65f, 0x1.649566p-117f, 0x1.a98002p-107f, 0.0f, 0x1.25cb1ep-113f,
     0.0f, 0.0f, 0x1.0c45fcp-27f, 0x1.74db1ep-27f, 0.0f, 0.0f, 0.0f, 0x1.4de89ep-61f,
     0.0f, 0.0f, 0x1.97b468p-72f, 0x1.e39b54p-42f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a3325ap-17f, 0.0f, 0.0f, 0x1.2e5f32p-7f, 0.0f, 0x1.8e5ffep-95f,
     0x1.adf8e6p-47f, 0.0f, 0.0f, 0.0f, 0x1.d3c88ap-19f, 0x1.52bb7ep-28f, 0.0f,
     0x1.e7f5b6p-112f, 0x1.5a80aep-39f, 0.0f, 0.0f, 0x1.e7d83cp-40f, 0.0f,
     0x1.f7efb4p-52f, 0x1.2bc33p-28f, 0.0f, 0x1.ca4cf6p-43f, 0x1.c0a118p-96f,
     0x1.a28f36p-52f, 0x1.83f108p-18f, 0x1.f1dea2p-60f, 0x1.aaa772p-33f,
     0x1.013024p-35f, 0.0f, 0.0f, 0.0f, 0x1.db2e66p-95f, 0.0f, 0.0f, 0x1.68c472p-122f,
     0.0f, 0.0f, 0.0f, 0x1.5e5f9ap-39f, 0.0f, 0x1.ff9562p-23f, 0x1.3395aep-95f,
     0x1.6744c4p-42f, 0.0f, 0x1.580a1cp-86f, 0.0f, 0x1.29af06p-80f, 0x1.4bfa3ep-47f,
     0x1.c2556ap-123f, 0x1.ff8554p-90f, 0x1.9c76a2p-86f, 0x1.d4fe34p-42f,
     0x1.9d2bf8p-105f, 0x1.cf3f94p-103f, 0.0f, 0x1.8f233ap-5f, 0.0f, 0x1.a26702p-24f,
     0x1.b75896p-124f, 0.0f, 0x1.7264d4p-120f, 0x1.9e2b4cp-29f, 0x1.0ae906p-93f, 0.0f,
     0.0f, 0x1.15d922p-33f, 0.0f, 0.0f, 0.0f, 0x1.53c7p-3f, 0.0f, 0.0f, 0.0f,
     0x1.81470ep-7f, 0x1.5fdb8p-90f, 0.0f, 0x1.6c59bcp-70f, 0x1.ee7ac8p-4f, 0.0f,
     0x1.b23362p-60f, 0x1.0430cp-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f3cb3cp-63f,
     0x1.959116p-27f, 0x1.e253dep-18f, 0.0f, 0x1.30eb1p-124f, 0x1.3a24fep-60f,
     0x1.981bb2p-14f, 0.0f, 0x1.718e1ep-111f, 0x1.fb41aep-124f, 0x1.a8f88cp-94f, 0.0f,
     0x1.a32806p-61f, 0x1.94b75cp-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7e08eep-47f,
     0.0f, 0x1.b6dcfp-79f, 0x1.59d8aap-27f, 0.0f, 0x1.603b12p-19f, 0.0f,
     0x1.23bac6p-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4e5dfep-57f, 0.0f,
     0x1.955944p-13f, 0x1.2ee8bep-101f, 0x1.508f08p-29f, 0.0f, 0x1.8e330cp-2f, 0.0f,
     0x1.9f1caep-107f, 0x1.e9c3fap-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.277574p-87f,
     0.0f, 0x1.d9504ep-104f, 0.0f, 0.0f, 0x1.72de86p-75f, 0.0f, 0.0f, 0x1.019e1ap-18f,
     0.0f, 0x1.5a6f6cp-52f, 0x1.85c872p-117f, 0x1.768e46p-87f, 0.0f, 0x1.79393ap-125f,
     0x1.b5176ep-121f, 0.0f, 0.0f, 0.0f, 0x1.b7ea34p-24f, 0.0f, 0.0f, 0x1.eaf04ap-56f,
     0x1.f0dc82p-31f
};
static const float external_bench_wrapper_input_table_arg1[1008]  = {
     0.0f, 0.0f, 0.0f, 0x1.53fc4p-67f, 0x1.61466p-47f, 0.0f, 0x1.cb87bep-53f, 0.0f,
     0.0f, 0.0f, 0x1.9ceda6p-119f, 0.0f, 0x1.4ca424p-71f, 0x1.fbae18p-35f,
     0x1.5b64p-77f, 0x1.f11f98p-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.25db18p-6f, 0.0f,
     0x1.4390dep-40f, 0.0f, 0x1.906d8ep-122f, 0x1.42f9c4p-77f, 0.0f, 0.0f,
     0x1.69c8eep-102f, 0x1.3196bap-54f, 0.0f, 0x1.447aaap-10f, 0x1.1b79e8p-48f,
     0x1.b7e17p-95f, 0.0f, 0x1.2a207ep-34f, 0x1.ffcb26p-55f, 0.0f, 0x1.f87954p-37f,
     0x1.30eecap-2f, 0x1.beae58p-30f, 0.0f, 0.0f, 0x1.04bbc6p-124f, 0x1.60112p-38f,
     0.0f, 0x1.89828ep-14f, 0x1.facb4p-100f, 0x1.b8b996p-15f, 0x1.c0ca62p-104f, 0.0f,
     0.0f, 0x1.d2d858p-75f, 0.0f, 0x1.9de346p-51f, 0x1.c5e972p-45f, 0.0f,
     0x1.749a04p-53f, 0.0f, 0.0f, 0x1.e3945ep-74f, 0x1.b0b494p-35f, 0.0f,
     0x1.11fb24p-48f, 0x1.7ad5d8p-124f, 0.0f, 0.0f, 0.0f, 0x1.fad63ap-65f, 0.0f, 0.0f,
     0x1.8cc8eep-122f, 0x1.86fc1p-60f, 0x1.2a5228p-88f, 0.0f, 0.0f, 0x1.f0d61ep-48f,
     0.0f, 0.0f, 0x1.5dc55ep-101f, 0x1.6146fcp-44f, 0x1.5e984p-56f, 0.0f, 0.0f, 0.0f,
     0x1.1919acp-87f, 0.0f, 0.0f, 0x1.8c008ep-20f, 0x1.9b9952p-106f, 0.0f,
     0x1.e6c43cp-123f, 0x1.11924cp-60f, 0.0f, 0.0f, 0x1.6879b6p-81f, 0x1.2d7af4p-106f,
     0x1.9c46eap-29f, 0x1.f5169ep-46f, 0x1.00aa72p-119f, 0x1.4895c2p-74f, 0.0f, 0.0f,
     0x1.bf070cp-65f, 0x1.4bab62p-18f, 0x1.99199ep-43f, 0x1.0eac62p-123f,
     0x1.39247p-66f, 0.0f, 0.0f, 0x1.e9310ap-91f, 0x1.494bb6p-2f, 0x1.d02eecp-103f,
     0x1.de5824p-112f, 0.0f, 0x1.d79a2cp-61f, 0.0f, 0x1.12074p-112f, 0x1.bee13cp-75f,
     0.0f, 0x1.ffc9eap-56f, 0.0f, 0.0f, 0x1.c9832ap-92f, 0x1.770ef2p-60f,
     0x1.6cb4e4p-77f, 0.0f, 0.0f, 0x1.1b1ca4p-8f, 0x1.b59deep-37f, 0.0f, 0.0f,
     0x1.101fc8p-49f, 0x1.7660a4p-44f, 0x1.3500b6p-83f, 0x1.22acf6p-116f, 0.0f,
     0x1.889cp-36f, 0x1.187938p-121f, 0.0f, 0x1.5a8146p-110f, 0x1.5dc50cp-110f,
     0x1.7e15bcp-42f, 0x1.c1a4e6p-51f, 0x1.be8a0cp-4f, 0x1.712758p-85f, 0.0f,
     0x1.b886b8p-25f, 0.0f, 0.0f, 0x1.4ebab4p-6f, 0.0f, 0x1.985434p-83f,
     0x1.884d6cp-14f, 0.0f, 0.0f, 0.0f, 0x1.1031d8p-96f, 0.0f, 0.0f, 0x1.912feap-76f,
     0.0f, 0.0f, 0x1.eccbbcp-81f, 0.0f, 0x1.f2d2d8p-1f, 0x1.c0cbc4p-65f, 0.0f, 0.0f,
     0.0f, 0x1.eb3b1cp-117f, 0x1.dc6c08p-28f, 0.0f, 0.0f, 0x1.9da586p-87f, 0.0f,
     0x1.922eb6p-84f, 0x1.41697ap-71f, 0x1.97f128p-24f, 0x1.a0564ep-35f,
     0x1.eba8bap-35f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.1ada7ap-10f, 0.0f,
     0x1.2e4728p-61f, 0.0f, 0x1.75324ap-112f, 0x1.0376a6p-1f, 0x1.426e84p-57f,
     0x1.d596ep-32f, 0.0f, 0x1.e5b536p-73f, 0.0f, 0.0f, 0.0f, 0x1.8d85ccp-60f,
     0x1.a91feap-71f, 0.0f, 0x1.e6692p-10f, 0x1.ae4e74p-86f, 0.0f, 0.0f, 0.0f,
     0x1.718224p-92f, 0.0f, 0.0f, 0.0f, 0x1.6fba4p-122f, 0x1.debc2cp-49f, 0.0f,
     0x1.6a5416p-120f, 0x1.7f643ap-12f, 0.0f, 0.0f, 0x1.8269ecp-17f, 0x1.6f86d6p-34f,
     0.0f, 0.0f, 0.0f, 0x1.9b314p-126f, 0x1.f5af8ap-107f, 0x1.3b9da8p-104f,
     0x1.b31f4ap-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9afdc6p-57f, 0.0f, 0x1.7077b6p-90f,
     0x1.f6d5f8p-102f, 0.0f, 0.0f, 0.0f, 0x1.2cf1acp-85f, 0x1.772fa2p-92f, 0.0f, 0.0f,
     0x1.1a5f6cp-77f, 0x1.230a88p-61f, 0x1.b3137p-89f, 0x1.181f8cp-21f,
     0x1.218438p-5f, 0.0f, 0x1.eb598p-5f, 0x1.f4055ep-116f, 0x1.48cda2p-20f,
     0x1.dc19f2p-116f, 0x1.0e3fa4p-15f, 0x1.8f0cap-70f, 0.0f, 0x1.57fa2ap-82f, 0.0f,
     0.0f, 0x1.00d842p-82f, 0.0f, 0.0f, 0x1.a33b7ap-2f, 0.0f, 0.0f, 0.0f,
     0x1.dd8bdap-27f, 0x1.70b9cap-86f, 0x1.4e5e58p-52f, 0.0f, 0x1.3c8a7p-82f,
     0x1.6ce762p-93f, 0.0f, 0.0f, 0.0f, 0x1.5ebeccp-88f, 0x1.71dcfp-78f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.86137p-117f, 0x1.0ac684p-36f, 0.0f, 0x1.1177e8p-16f, 0.0f,
     0x1.6adfap-61f, 0x1.ed5e26p-31f, 0.0f, 0x1.eafd08p-31f, 0x1.b7b99ap-52f,
     0x1.5f63eap-78f, 0x1.c6cbb6p-9f, 0.0f, 0x1.ff267cp-107f, 0.0f, 0x1.874fb6p-44f,
     0.0f, 0.0f, 0.0f, 0x1.447bp-119f, 0x1.81422ap-99f, 0x1.8e43d4p-116f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fe1e26p-119f, 0.0f, 0.0f,
     0x1.0a0c0ep-125f, 0x1.93258ap-116f, 0.0f, 0x1.853c8cp-72f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ef94f2p-113f, 0x1.aee438p-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b08feap-97f, 0.0f, 0x1.1849ap-88f, 0x1.b62212p-78f, 0x1.4d88eep-28f,
     0x1.23b1f2p-126f, 0.0f, 0x1.e213c8p-29f, 0.0f, 0.0f, 0.0f, 0x1.a9f412p-103f,
     0x1.7d902p-49f, 0x1.c282bap-90f, 0.0f, 0x1.393cbp-68f, 0.0f, 0.0f,
     0x1.ce9c46p-44f, 0x1.c66dd4p-65f, 0x1.c8835ap-100f, 0.0f, 0x1.21ab46p-110f,
     0x1.750d9ap-118f, 0.0f, 0x1.f4cebp-99f, 0.0f, 0x1.a2be78p-50f, 0.0f,
     0x1.1566d2p-126f, 0x1.141e78p-105f, 0.0f, 0.0f, 0x1.4d04b8p-38f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9bd932p-33f, 0x1.ea50a8p-47f, 0.0f, 0.0f, 0x1.83f14ap-45f,
     0.0f, 0x1.053bcp-33f, 0x1.6c6a0ep-81f, 0.0f, 0x1.71e318p-58f, 0.0f,
     0x1.967e9ap-81f, 0x1.a7946p-104f, 0x1.abd11cp-12f, 0x1.63fb8ep-114f, 0.0f,
     0x1.04795ap-68f, 0.0f, 0x1.55983ap-36f, 0x1.25d428p-62f, 0.0f, 0.0f,
     0x1.2c25fep-109f, 0x1.275518p-20f, 0.0f, 0x1.a6d48ep-24f, 0.0f, 0.0f,
     0x1.a98e8cp-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5f7944p-85f, 0.0f,
     0x1.cd62bcp-4f, 0x1.a00e92p-72f, 0.0f, 0.0f, 0.0f, 0x1.06f036p-112f, 0.0f,
     0x1.4dd79p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fedcep-71f, 0.0f, 0x1.a9e5dap-71f,
     0x1.07b234p-12f, 0x1.060e78p-14f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ff817ap-119f, 0.0f, 0.0f, 0.0f, 0x1.eccc8p-8f, 0x1.823b06p-49f, 0.0f,
     0.0f, 0x1.820e96p-37f, 0x1.ad52ccp-88f, 0x1.56a0fep-91f, 0x1.3be50cp-8f, 0.0f,
     0x1.d659bap-39f, 0x1.cf5832p-104f, 0x1.c90bf4p-117f, 0x1.461354p-30f,
     0x1.c4399ep-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c00bf6p-81f, 0x1.d75ad8p-56f, 0.0f,
     0.0f, 0x1.3b2e82p-96f, 0x1.34dfb2p-81f, 0x1.2a7c46p-4f, 0.0f, 0x1.728ce8p-107f,
     0x1.9aa3b4p-124f, 0x1.975966p-7f, 0.0f, 0.0f, 0x1.681c32p-120f, 0x1.630bcep-116f,
     0x1.d402fep-4f, 0x1.300318p-87f, 0.0f, 0x1.7e1886p-58f, 0.0f, 0.0f, 0.0f,
     0x1.a85102p-111f, 0.0f, 0x1.b64752p-90f, 0.0f, 0.0f, 0x1.ea05a8p-66f,
     0x1.4e977ep-41f, 0x1.5a49d6p-36f, 0x1.e7a34cp-50f, 0x1.bf6384p-104f,
     0x1.06df02p-56f, 0x1.1ea2eep-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.04315ap-53f, 0x1.312ca8p-97f, 0.0f, 0.0f, 0x1.7fcfb4p-52f, 0.0f, 0.0f,
     0x1.ec6e12p-102f, 0x1.1803e4p-2f, 0x1.63ccd4p-98f, 0.0f, 0x1.41f89ep-89f, 0.0f,
     0x1.895becp-57f, 0.0f, 0x1.da29e8p-8f, 0.0f, 0.0f, 0x1.e45356p-93f,
     0x1.521b58p-84f, 0.0f, 0.0f, 0x1.07b07p-107f, 0x1.cc659p-73f, 0x1.cddbfep-85f,
     0x1.576bcap-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.995cf8p-83f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.8b188cp-105f, 0x1.0b5096p-80f, 0x1.efdafcp-29f, 0.0f,
     0x1.a96cc6p-43f, 0.0f, 0x1.a20334p-119f, 0.0f, 0.0f, 0x1.e5af7ap-86f,
     0x1.256e2p-20f, 0x1.a1ba14p-122f, 0x1.744dbep-85f, 0x1.88f10cp-102f,
     0x1.06bf84p-88f, 0x1.7003aep-4f, 0.0f, 0.0f, 0x1.0f281p-64f, 0.0f,
     0x1.f64a1ap-116f, 0x1.a046a2p-3f, 0x1.c0f4acp-12f, 0x1p0f, 0.0f, 0x1.bbc5fp-76f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a21184p-89f, 0.0f, 0x1.111344p-18f, 0.0f,
     0x1.5664f8p-106f, 0x1.43b392p-57f, 0x1.15350ap-33f, 0.0f, 0x1.92c942p-17f,
     0x1.fe7002p-9f, 0.0f, 0x1.9c0f88p-119f, 0.0f, 0x1.615a3cp-86f, 0x1.813936p-76f,
     0x1.17012ap-125f, 0.0f, 0.0f, 0.0f, 0x1.b3c9aap-65f, 0x1.2d8684p-49f, 0.0f,
     0x1.9d73c2p-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.13d1a8p-20f, 0x1.5b95c8p-26f, 0.0f,
     0.0f, 0x1.d71ap-123f, 0.0f, 0.0f, 0x1.5dd22ep-42f, 0x1.f1d1e8p-56f,
     0x1.228fdp-69f, 0x1.097782p-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8f069cp-93f, 0.0f,
     0.0f, 0.0f, 0x1.50c8e2p-38f, 0x1.e75e26p-71f, 0.0f, 0.0f, 0.0f, 0x1.156e56p-58f,
     0.0f, 0x1.861256p-97f, 0x1.3bd886p-101f, 0x1.82bc1ap-61f, 0x1.a8a412p-22f,
     0x1.bbda5cp-92f, 0.0f, 0x1.20486ep-118f, 0.0f, 0x1.32e78ep-96f, 0x1.956ff2p-78f,
     0.0f, 0x1.e6b20ap-49f, 0.0f, 0x1.972074p-31f, 0.0f, 0.0f, 0x1.cda596p-107f,
     0x1.0212cep-80f, 0.0f, 0x1.f43312p-40f, 0.0f, 0.0f, 0x1.ed33d4p-23f,
     0x1.dfeb9ap-5f, 0.0f, 0x1.95c0aep-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d3775ep-77f,
     0x1.98493ep-11f, 0x1.19313cp-97f, 0x1.6d25a2p-59f, 0.0f, 0x1.0e4abcp-14f, 0.0f,
     0.0f, 0.0f, 0x1.ca84bp-7f, 0x1.144e1p-39f, 0x1p0f, 0x1.f0b2a4p-83f,
     0x1.1248e2p-113f, 0.0f, 0.0f, 0x1.4c634cp-27f, 0x1.dcd8c6p-72f, 0.0f,
     0x1.9a7726p-55f, 0x1.9bd7aep-32f, 0.0f, 0x1.afff86p-111f, 0.0f, 0.0f, 0.0f,
     0x1.a0c988p-53f, 0.0f, 0.0f, 0x1.cebedep-103f, 0x1.850ac6p-20f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.8d253cp-51f, 0.0f, 0.0f, 0x1.854846p-20f, 0x1.573404p-107f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b48f1cp-2f, 0x1.cf7138p-14f, 0x1.cccdep-126f,
     0x1.3b5f92p-32f, 0x1.e72764p-82f, 0x1.1df998p-114f, 0x1.b923dp-37f,
     0x1.2a893ep-3f, 0.0f, 0x1.3a92eap-86f, 0.0f, 0x1.a55f4ep-122f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.da980ep-44f, 0x1.f08bfap-49f, 0x1.899b64p-44f, 0x1.46bb4p-42f,
     0x1.d10cc4p-121f, 0x1.1a4d8ep-73f, 0.0f, 0.0f, 0x1.07699cp-30f, 0x1.8b2646p-55f,
     0.0f, 0x1.a747c2p-46f, 0.0f, 0x1.c513ep-37f, 0x1.3f6794p-81f, 0.0f,
     0x1.cf5942p-79f, 0x1.742f9cp-45f, 0.0f, 0.0f, 0.0f, 0x1.22b172p-94f, 0.0f,
     0x1.29bbecp-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9e8bep-64f, 0x1.21d7ep-4f,
     0x1.b1a18p-63f, 0x1.6bf73ap-15f, 0x1.ef144p-28f, 0x1.39aa2ep-54f,
     0x1.0a7e1ep-25f, 0x1.aec172p-120f, 0x1.b2b9f2p-38f, 0.0f, 0x1.d53f3ep-10f, 0.0f,
     0x1.fd2426p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.99fafap-7f, 0x1.8ecc78p-94f,
     0x1.0c5c36p-78f, 0.0f, 0x1.86cfd8p-3f, 0x1.deb5c8p-51f, 0.0f, 0x1.8d4cf6p-45f,
     0.0f, 0x1.c6f406p-27f, 0.0f, 0x1.759792p-99f, 0.0f, 0x1.e6595ep-62f,
     0x1.ac4c02p-111f, 0x1.29525cp-71f, 0.0f, 0.0f, 0x1.c6bcbcp-19f, 0.0f,
     0x1.56569cp-42f, 0x1.b3f24ep-119f, 0x1.08477ep-112f, 0x1.747a52p-119f,
     0x1.a0651ep-30f, 0x1.93c134p-38f, 0x1.fb89a4p-107f, 0x1.198252p-44f,
     0x1.c9201ap-11f, 0.0f, 0x1.4e80a8p-55f, 0.0f, 0x1.1d918ap-110f, 0.0f, 0.0f, 0.0f,
     0x1.862f8cp-119f, 0x1.9c35aap-102f, 0.0f, 0.0f, 0x1.5c04b8p-56f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c22e1p-32f, 0x1.6a02e8p-99f, 0x1.5871c2p-87f, 0.0f,
     0x1.b644f6p-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3d5342p-59f, 0x1.33f4f6p-35f,
     0x1.af6904p-14f, 0.0f, 0x1.dedfe4p-100f, 0.0f, 0x1.37866p-73f, 0x1.70f02p-66f,
     0x1.d37078p-97f, 0.0f, 0.0f, 0.0f, 0x1.08080ap-24f, 0.0f, 0x1.6546bap-105f, 0.0f,
     0.0f, 0x1.c9966ep-76f, 0.0f, 0x1.3c4052p-24f, 0.0f, 0.0f, 0x1.e02e4ap-45f,
     0x1.b2f738p-87f, 0.0f, 0x1.19da7cp-77f, 0.0f, 0x1.dc2d3cp-70f, 0.0f,
     0x1.26983cp-5f, 0.0f, 0x1.b406a4p-66f, 0.0f, 0x1.f6bbc2p-49f, 0x1.f7c8f4p-126f,
     0.0f, 0x1.750ap-18f, 0x1.f18fp-38f, 0.0f, 0x1.449974p-86f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.28a544p-16f, 0.0f, 0x1.8e2936p-77f, 0.0f,
     0x1.388a28p-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7a4582p-44f,
     0x1.cc88d6p-85f, 0x1.112d7ap-13f, 0.0f, 0x1.4b46p-98f, 0.0f, 0x1.6928c2p-58f,
     0x1.cf412cp-108f, 0x1.a5b4d6p-37f, 0x1.d45a84p-106f, 0.0f, 0x1.77ecc4p-5f,
     0x1.10d0e6p-85f, 0.0f, 0x1.e4a09ep-96f, 0.0f, 0.0f, 0x1.a79836p-9f, 0.0f,
     0x1.a404cep-122f, 0x1.f01fe6p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b4993p-15f, 0.0f, 0x1.4526ccp-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a957ccp-109f, 0x1.d5f9eap-73f, 0.0f, 0x1.b29256p-97f, 0x1.6a4ae8p-1f,
     0x1.1622ccp-75f, 0.0f, 0x1.4a5b2cp-91f, 0.0f, 0x1.059888p-65f, 0.0f,
     0x1.6d32aap-95f, 0x1.4f2beep-56f, 0x1.2fdee8p-88f, 0x1.92f6f6p-24f, 0.0f,
     0x1.f832e6p-104f, 0x1.585902p-61f, 0x1.707178p-110f, 0.0f, 0.0f,
     0x1.efeb92p-106f, 0.0f, 0.0f, 0.0f, 0x1.69a0aap-109f, 0.0f, 0.0f,
     0x1.74be6ep-39f, 0x1.54e6p-111f, 0x1.d00e2ep-85f, 0x1.a68f4cp-108f,
     0x1.bbdfaap-15f, 0x1.d24608p-47f, 0.0f, 0x1.1025c4p-93f, 0x1.f0418cp-17f, 0.0f,
     0.0f, 0x1.c787bp-103f, 0x1.663cf6p-28f, 0.0f, 0x1.fdcc08p-88f, 0.0f, 0.0f, 0.0f,
     0x1.34ffbcp-55f, 0x1.a4e02cp-67f, 0.0f, 0.0f, 0.0f, 0x1.e159e2p-126f,
     0x1.796ab8p-50f, 0.0f, 0x1.6038eap-81f, 0.0f, 0.0f, 0x1.3e1226p-124f,
     0x1.bfe54ap-57f, 0x1.b59deep-17f, 0.0f, 0.0f, 0x1.3dbea6p-62f, 0.0f,
     0x1.1cf9e2p-36f, 0x1.414c2ep-1f, 0.0f, 0x1.9b58d8p-120f, 0.0f, 0.0f, 0.0f,
     0x1.314a08p-80f, 0.0f, 0x1.2208p-94f, 0.0f, 0.0f, 0x1.a2f632p-1f,
     0x1.9bb6bep-61f, 0.0f, 0x1.c22892p-23f, 0.0f, 0x1.ba102ep-63f, 0.0f,
     0x1.3f75c8p-26f, 0.0f, 0.0f, 0.0f, 0x1.03390ap-23f, 0x1.c5fc94p-79f,
     0x1.f7a586p-42f, 0x1.8e50e8p-104f, 0x1.df528ap-14f, 0x1.9acf96p-81f, 0.0f,
     0x1.c98712p-42f, 0x1.f62d96p-23f, 0.0f, 0.0f, 0.0f, 0x1.cb22bp-68f, 0.0f,
     0x1.7b30dp-102f, 0.0f
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
            tmp2 = Sleef_fmaxf8_kvx(tmp0, tmp1);
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
    printf("Sleef_fmaxf8_kvx %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_fmaxf8_kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
