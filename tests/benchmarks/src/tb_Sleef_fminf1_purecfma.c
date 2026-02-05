/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_fminf1_purecfma.c --function Sleef_fminf1_purecfma \
 *     --arity 2 --headers sleef.h,ml_support_lib.h --input-formats \
 *     binary32,binary32 --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile float external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.b55ef6p-86f, 0.0f, 0.0f, 0.0f, 0x1.f3997ep-124f, 0.0f, 0x1.803ac4p-81f,
     0x1.78737ep-4f, 0x1.bb838ap-34f, 0.0f, 0x1.8453dp-7f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.08863ep-11f, 0x1.d80a5ap-93f, 0x1.ea8ca8p-64f, 0x1.7b31a8p-15f,
     0x1.2799acp-37f, 0.0f, 0x1.0ac72ap-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.41e874p-102f, 0.0f, 0x1.458f6p-18f, 0.0f,
     0x1.5f33d4p-84f, 0x1.d11412p-20f, 0x1.e06a72p-120f, 0.0f, 0x1.ba6d62p-117f, 0.0f,
     0.0f, 0.0f, 0x1.9a2676p-96f, 0x1.a1b21ep-88f, 0x1.0abebcp-30f, 0.0f, 0.0f,
     0x1.b4381p-64f, 0x1.303f56p-27f, 0x1.304f44p-59f, 0x1.982e04p-37f,
     0x1.429ef2p-5f, 0.0f, 0x1.cc477ep-57f, 0x1.ffaf34p-11f, 0.0f, 0x1.314018p-61f,
     0x1.d8385ep-88f, 0.0f, 0x1.92d96p-106f, 0x1.80d896p-100f, 0x1.82e834p-76f, 0.0f,
     0x1.04091ap-64f, 0x1.895cf6p-103f, 0x1.3188d6p-23f, 0x1.c54da8p-63f,
     0x1.1a028cp-38f, 0x1.b16cfap-98f, 0.0f, 0x1.e4408cp-87f, 0.0f, 0.0f, 0.0f,
     0x1p0f, 0.0f, 0x1.b1af4p-83f, 0.0f, 0x1.c82f5cp-25f, 0x1.990c96p-116f, 0.0f,
     0x1.0502ep-2f, 0.0f, 0x1.2d60fap-80f, 0.0f, 0x1.a2355p-68f, 0x1.407c5p-76f,
     0x1.020eaap-57f, 0x1.404d6p-68f, 0.0f, 0x1.a6f9dep-119f, 0.0f, 0x1.438e84p-123f,
     0x1.4c1eacp-53f, 0x1.a336dep-55f, 0.0f, 0x1.3188d6p-22f, 0.0f, 0x1.027522p-26f,
     0.0f, 0.0f, 0.0f, 0x1.e80592p-40f, 0.0f, 0x1.a00ef4p-70f, 0.0f, 0.0f,
     0x1.ceae1ep-58f, 0x1.d02cep-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.30b8bep-18f,
     0.0f, 0x1.5d70d8p-80f, 0.0f, 0.0f, 0x1.ae573ap-30f, 0.0f, 0x1.ca8c94p-68f,
     0x1.cf6b12p-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2cc5dap-33f,
     0x1.897f82p-8f, 0x1.361bd2p-86f, 0x1.383d74p-30f, 0x1.0be9cep-83f,
     0x1.86c206p-45f, 0.0f, 0x1.ba9676p-40f, 0.0f, 0x1.c1731ap-91f, 0x1.594756p-53f,
     0.0f, 0.0f, 0x1.38388p-30f, 0x1.81389p-59f, 0.0f, 0x1.4c765ap-3f,
     0x1.acdb28p-97f, 0x1.ec765ap-50f, 0x1.189892p-7f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7f368ap-21f, 0.0f, 0x1.31cdb2p-67f, 0x1.4c7576p-102f, 0x1.2a7548p-11f,
     0x1.68d052p-84f, 0.0f, 0.0f, 0.0f, 0x1.7251b6p-42f, 0x1.f2f002p-124f,
     0x1.f9df98p-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.84e576p-1f,
     0x1.853f1ep-8f, 0.0f, 0.0f, 0x1p0f, 0x1.dc3b12p-20f, 0.0f, 0.0f, 0x1.cf68dp-24f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.29f9d6p-45f, 0.0f,
     0.0f, 0x1.3ad4ccp-47f, 0.0f, 0.0f, 0x1.9b5c14p-3f, 0.0f, 0x1.15d20ep-36f, 0.0f,
     0x1.e9ba3cp-112f, 0.0f, 0x1.7118e4p-99f, 0x1.be13fep-62f, 0.0f, 0x1.925d6cp-20f,
     0x1.f433f6p-7f, 0.0f, 0.0f, 0.0f, 0x1.766f6p-1f, 0.0f, 0x1.af5cfap-26f, 0.0f,
     0x1.807f06p-126f, 0.0f, 0.0f, 0x1.6285fap-17f, 0.0f, 0x1.3d26eap-84f,
     0x1.2965dcp-87f, 0x1.d36d5ap-62f, 0.0f, 0.0f, 0.0f, 0x1.1bf2bep-56f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.31e732p-23f, 0x1.e6b1e2p-30f, 0.0f, 0x1.95d61p-77f,
     0x1.11184cp-103f, 0x1.2e5b9ep-46f, 0x1.0fa2ecp-103f, 0x1.66a0c4p-113f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.52c072p-104f, 0.0f, 0x1.dd3d26p-98f, 0.0f, 0x1.79f3bp-17f,
     0x1.8ee026p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.18260ap-84f, 0.0f, 0x1.c4d0a4p-41f, 0x1.b65da8p-26f, 0.0f, 0.0f, 0.0f,
     0x1.e0dd84p-82f, 0.0f, 0.0f, 0.0f, 0x1.526c0cp-30f, 0.0f, 0.0f, 0.0f,
     0x1.3af77cp-57f, 0x1.5a17bep-91f, 0x1.be009cp-116f, 0.0f, 0.0f, 0.0f,
     0x1.a2bd3cp-77f, 0x1.618178p-95f, 0x1.637f2ap-22f, 0.0f, 0x1.e33202p-14f, 0.0f,
     0x1.8dbd74p-5f, 0.0f, 0.0f, 0x1.8a3ac6p-118f, 0.0f, 0x1.b0dd34p-126f,
     0x1.7be676p-72f, 0x1.82ffecp-58f, 0.0f, 0x1.f33e62p-105f, 0x1.4aadf2p-70f, 0.0f,
     0x1.605754p-122f, 0.0f, 0x1.884232p-58f, 0x1.ed83b4p-98f, 0x1.4ae78cp-20f, 0.0f,
     0.0f, 0x1.2ddb34p-46f, 0x1.2e5aa4p-44f, 0.0f, 0x1.07d056p-21f, 0x1.d28c34p-108f,
     0.0f, 0x1.e3ae3ep-117f, 0.0f, 0x1.f93f3ep-124f, 0.0f, 0.0f, 0x1.5882cep-55f,
     0.0f, 0x1.fd8884p-1f, 0x1.70ce12p-6f, 0x1.e90802p-23f, 0x1.e15becp-83f, 0.0f,
     0.0f, 0.0f, 0x1.285b0ap-99f, 0x1.de3ceap-79f, 0x1.e85b96p-36f, 0.0f,
     0x1.2c31c2p-109f, 0x1.5ee264p-28f, 0x1.286c76p-7f, 0.0f, 0.0f, 0x1.ce3b06p-121f,
     0x1.706896p-117f, 0x1.ce8334p-125f, 0.0f, 0.0f, 0x1.a4d1d2p-121f, 0.0f,
     0x1.3550fcp-56f, 0.0f, 0x1.8fe138p-79f, 0.0f, 0x1.c96efcp-104f, 0.0f, 0.0f,
     0x1.0bbd74p-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a82504p-71f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2bfb52p-69f, 0x1.4a2fb8p-65f, 0.0f, 0.0f, 0x1.b4ae36p-19f, 0x1.b77554p-50f,
     0x1.ab6564p-79f, 0.0f, 0.0f, 0x1.4b4e7p-68f, 0x1.f7ad8ap-122f, 0x1.c82b6cp-68f,
     0.0f, 0x1.7f2322p-43f, 0x1.b9c9b2p-112f, 0x1.9cc0bcp-69f, 0x1.a2e404p-39f, 0.0f,
     0x1.d5d696p-70f, 0.0f, 0.0f, 0x1.50557cp-58f, 0.0f, 0x1.f0d308p-93f, 0.0f, 0.0f,
     0x1.85845p-56f, 0.0f, 0.0f, 0.0f, 0x1.9d28aep-109f, 0x1.a8e214p-27f, 0.0f,
     0x1.2d6decp-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9eb542p-7f, 0.0f, 0x1.0a007ap-10f,
     0x1.16a526p-31f, 0.0f, 0x1.5f97fep-67f, 0x1.debc86p-96f, 0.0f, 0x1.d7ef2cp-35f,
     0.0f, 0x1.dfc986p-8f, 0x1.e35018p-1f, 0x1.2af74ap-41f, 0x1.03fb2ap-14f, 0.0f,
     0x1.8fb1fap-49f, 0x1.4d744ep-64f, 0x1.16489ep-3f, 0x1.a75814p-12f, 0.0f,
     0x1.c85dc8p-4f, 0x1.be46a2p-116f, 0x1.57df02p-1f, 0x1.45043cp-21f,
     0x1.6ca07p-50f, 0x1.c4233ep-70f, 0x1.c3cb3ep-70f, 0.0f, 0x1.01041ap-1f,
     0x1.67fe5p-124f, 0x1.4ebca8p-88f, 0x1.74acf2p-35f, 0.0f, 0.0f, 0x1.6b8bf6p-107f,
     0x1.8b52a6p-48f, 0.0f, 0x1.a5f22cp-6f, 0.0f, 0.0f, 0.0f, 0x1.2438a6p-3f,
     0x1.aa4016p-4f, 0.0f, 0.0f, 0x1.1a7a04p-27f, 0x1.6ca21cp-89f, 0x1.60eebep-103f,
     0.0f, 0x1.1edad8p-68f, 0.0f, 0.0f, 0x1.5e8a28p-36f, 0.0f, 0x1.78ac6ep-90f, 0.0f,
     0x1.6dba22p-79f, 0x1.2e04cp-125f, 0.0f, 0x1.6dce08p-84f, 0.0f, 0.0f, 0.0f,
     0x1.93c764p-45f, 0x1.56c082p-47f, 0x1.caa12cp-67f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c06ddp-41f, 0x1.546c88p-70f, 0x1.7faab8p-52f, 0x1.78bf74p-91f,
     0x1.50cf1cp-25f, 0.0f, 0.0f, 0x1.89651p-30f, 0x1.43c3fcp-43f, 0x1.6984b8p-24f,
     0x1.206a36p-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.63138ep-6f, 0x1.7fa8fep-75f,
     0x1.439032p-71f, 0x1.734792p-51f, 0.0f, 0x1.f03b2cp-87f, 0.0f, 0x1.5293d2p-86f,
     0x1.120dfep-22f, 0x1.4eef68p-79f, 0.0f, 0x1.a57a5ap-39f, 0.0f, 0x1.6f6026p-99f,
     0.0f, 0x1.0888e4p-57f, 0.0f, 0x1.1365fcp-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c53f2ap-122f, 0x1.d984a2p-18f, 0x1.880c9p-86f, 0.0f, 0x1.8045e2p-108f,
     0x1.bc725ep-26f, 0.0f, 0x1.a9305ep-45f, 0.0f, 0x1.fc901ep-27f, 0.0f,
     0x1.1980aap-97f, 0x1.09878ap-12f, 0.0f, 0.0f, 0x1.2f4e4p-123f, 0x1.f316ap-34f,
     0x1.c17p-125f, 0x1.a2a0ep-47f, 0x1.48b92p-37f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.af027p-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e2bd0ap-80f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8ba06ap-34f, 0x1.9bb54cp-74f, 0x1.840084p-8f, 0.0f, 0x1.a5d278p-102f, 0.0f,
     0x1.bc545p-77f, 0.0f, 0.0f, 0x1.9ec4dcp-27f, 0x1.a22ffap-10f, 0.0f,
     0x1.7b19a2p-79f, 0.0f, 0.0f, 0x1.1c7698p-108f, 0x1.f10c5ap-86f, 0.0f,
     0x1.38186ap-102f, 0.0f, 0x1.29ceccp-96f, 0x1.925b54p-93f, 0x1.6431bep-21f, 0.0f,
     0x1.42f8ap-59f, 0x1.f77feep-67f, 0x1.67dea8p-52f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e5423ap-38f, 0.0f, 0x1.670194p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5657bap-57f, 0x1.8b5d7ap-58f, 0x1.aa37f8p-27f, 0x1.23e2bcp-103f, 0.0f,
     0x1.cc3126p-2f, 0x1.f452e8p-46f, 0.0f, 0x1.a34244p-61f, 0x1.22eca6p-22f,
     0x1.d25e14p-69f, 0.0f, 0.0f, 0.0f, 0x1.18f6ep-34f, 0.0f, 0x1.d8fad2p-92f, 0.0f,
     0.0f, 0.0f, 0x1.9cf81ap-29f, 0.0f, 0x1.6b496ep-97f, 0.0f, 0x1.851bbcp-126f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b7cff4p-43f, 0x1.3e89fap-67f, 0.0f, 0x1.a48dbap-88f,
     0x1.b77c52p-51f, 0x1.dd82c6p-32f, 0x1.d23354p-106f, 0x1.163b6cp-74f, 0.0f, 0.0f,
     0x1.3fb0fp-29f, 0.0f, 0.0f, 0.0f, 0x1.d5d57p-33f, 0x1.96abccp-113f, 0.0f, 0.0f,
     0x1.ec27d4p-48f, 0.0f, 0.0f, 0.0f, 0x1.3e61a8p-49f, 0x1.3a805ap-18f, 0.0f, 0.0f,
     0.0f, 0x1.30ff92p-39f, 0.0f, 0x1.e56dd2p-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7322bep-101f, 0.0f, 0.0f, 0x1.c26fd8p-94f, 0.0f, 0x1.05336ep-11f,
     0x1.b5a8fep-119f, 0x1.bc5494p-48f, 0x1.299028p-49f, 0.0f, 0.0f, 0.0f,
     0x1.96ef38p-109f, 0.0f, 0.0f, 0.0f, 0x1.0a3eacp-88f, 0.0f, 0.0f,
     0x1.ad01f8p-104f, 0.0f, 0.0f, 0x1.397716p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.8bd148p-123f, 0x1.95875ep-124f, 0x1.aa7df4p-84f, 0x1.44636ep-38f, 0.0f,
     0.0f, 0x1.ce4adcp-89f, 0.0f, 0.0f, 0x1.ced878p-64f, 0x1.10487p-106f,
     0x1.07d474p-121f, 0.0f, 0.0f, 0x1.205c44p-9f, 0.0f, 0x1.5636c8p-9f,
     0x1.0ee7f6p-98f, 0x1.3cd0eep-7f, 0x1.781222p-115f, 0x1.c8b60ep-113f, 0.0f, 0.0f,
     0x1.9bb446p-23f, 0x1.1727ccp-9f, 0x1.55257cp-92f, 0x1.35538ap-8f, 0.0f, 0.0f,
     0x1.92fbp-110f, 0x1.207308p-95f, 0.0f, 0x1.0374e6p-28f, 0.0f, 0x1.7d89d2p-8f,
     0.0f, 0.0f, 0.0f, 0x1.680ea6p-98f, 0x1.53a732p-37f, 0.0f, 0x1.705f78p-24f, 0.0f,
     0x1.91bca4p-46f, 0x1.6ef578p-58f, 0x1.678e2p-59f, 0x1.7f4758p-123f, 0.0f,
     0x1.dd5a58p-29f, 0x1.4e73c2p-61f, 0.0f, 0.0f, 0x1.568d44p-100f, 0.0f,
     0x1.cc30dep-97f, 0x1.e08c5ap-35f, 0.0f, 0x1.5a0824p-110f, 0.0f, 0.0f,
     0x1.e50be4p-47f, 0x1.1f12dcp-36f, 0.0f, 0x1.3c1192p-113f, 0x1.9bdd2ep-64f,
     0x1.392e16p-27f, 0x1.89008ap-114f, 0x1.83a7cp-48f, 0.0f, 0x1.739da8p-77f, 0.0f,
     0.0f, 0.0f, 0x1.def362p-26f, 0.0f, 0x1.af1acep-96f, 0x1.78e35ep-21f, 0.0f,
     0x1.280c24p-52f, 0.0f, 0x1.6bd3aep-45f, 0x1.b05236p-93f, 0.0f, 0x1.16fad2p-49f,
     0x1.40b966p-71f, 0x1.b7d96ep-88f, 0x1.1b593p-58f, 0.0f, 0.0f, 0x1.97587ap-38f,
     0x1.e5c96ep-39f, 0x1.ae6a26p-68f, 0.0f, 0.0f, 0.0f, 0x1.060ef2p-16f,
     0x1.e52c8cp-6f, 0x1.53b65cp-21f, 0.0f, 0x1.e0b32ap-55f, 0.0f, 0x1.89c9e4p-20f,
     0.0f, 0.0f, 0x1.a35316p-121f, 0x1.4595a6p-123f, 0x1.e1545cp-123f, 0x1.46847p-18f,
     0x1.75c02ep-81f, 0x1.6851c2p-47f, 0x1.6a31eep-111f, 0x1.1812ap-56f, 0.0f,
     0x1.5fd86p-71f, 0x1.2a1cfap-67f, 0.0f, 0x1.1b715ep-97f, 0x1.57fd74p-60f,
     0x1.a4b32ap-60f, 0x1.2baf5ap-81f, 0.0f, 0x1.b9b092p-117f, 0.0f, 0x1.0592c8p-38f,
     0.0f, 0.0f, 0.0f, 0x1.37fd62p-10f, 0x1.b2c0f6p-57f, 0x1.304c9cp-41f,
     0x1.0363f2p-95f, 0.0f, 0x1.3451b8p-46f, 0x1.834be8p-99f, 0x1.84fe9ap-86f,
     0x1.2f2058p-66f, 0.0f, 0x1.a77302p-54f, 0x1.cc708cp-123f, 0x1.5a636ap-10f, 0.0f,
     0x1.2952acp-69f, 0x1.90cf46p-79f, 0x1.555d8ap-124f, 0x1.7ae184p-36f, 0.0f,
     0x1.f8a26ap-114f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.67c7bcp-49f, 0x1.c93e62p-120f,
     0.0f, 0.0f, 0x1.b3aac8p-1f, 0.0f, 0.0f, 0.0f, 0x1.fa8f4ap-101f, 0x1.71401ap-115f,
     0.0f, 0.0f, 0.0f, 0x1.167d28p-110f, 0x1.645f1ep-18f, 0.0f, 0x1.fbf88ep-34f, 0.0f,
     0x1.0ed9aep-121f, 0x1.bb9a2ep-90f, 0.0f, 0x1.6bda9ep-9f, 0x1.0e5706p-106f, 0.0f,
     0.0f, 0.0f, 0x1.da493cp-36f, 0.0f, 0x1.54be28p-31f, 0x1.74e7c4p-123f, 0.0f,
     0x1.08e278p-69f, 0.0f, 0x1.e9344ap-59f, 0.0f, 0.0f, 0.0f, 0x1.086ba2p-9f,
     0x1.c0a552p-93f, 0.0f, 0.0f, 0x1.ef6122p-1f, 0x1.017228p-8f, 0x1.39df76p-14f,
     0x1.4dbde6p-42f, 0.0f, 0.0f, 0x1.6d4038p-122f, 0.0f, 0x1.171c22p-65f, 0.0f,
     0x1.4db374p-55f, 0x1.693ac4p-77f, 0x1.574208p-42f, 0.0f, 0.0f, 0x1.361e3p-12f,
     0x1.cdc1fap-47f, 0x1.f0b3bap-20f, 0x1.54a09ap-10f, 0.0f, 0.0f, 0x1.4d727p-122f,
     0x1.f9c39p-41f, 0x1.07351ep-118f, 0x1.fd295ep-16f, 0x1.971a82p-31f, 0.0f,
     0x1.7c43f8p-120f, 0.0f, 0.0f, 0.0f, 0x1.d2e0dcp-80f, 0x1.520564p-106f, 0.0f,
     0.0f, 0.0f, 0x1.7f368ep-24f, 0x1.6e7794p-76f, 0.0f, 0.0f, 0x1.cd9edap-82f,
     0x1.d8b0f8p-124f, 0x1.b886cap-116f, 0x1.b9819cp-1f, 0.0f, 0x1.c0953ap-40f, 0.0f,
     0x1.dc87bep-66f, 0.0f, 0x1.d447a8p-19f, 0.0f, 0.0f, 0.0f, 0x1.f78e2ep-4f,
     0x1.27a458p-26f, 0.0f, 0.0f, 0x1.c647b8p-59f, 0.0f, 0x1.19fda8p-123f,
     0x1.478fbap-118f, 0x1.36d46p-28f, 0.0f, 0.0f, 0x1.1a1e9ap-9f, 0x1.b02fe6p-70f,
     0x1.12e0fap-112f, 0x1.6e91d2p-5f, 0.0f, 0.0f, 0x1.2d60acp-101f, 0.0f,
     0x1.ff2ee2p-54f, 0.0f, 0x1.c2cbd2p-110f, 0.0f, 0.0f, 0x1.bbddap-53f,
     0x1.5d46f4p-74f, 0.0f, 0x1.65fff8p-122f, 0.0f, 0.0f, 0x1.200332p-111f, 0.0f,
     0x1.5f1a46p-43f, 0x1.24aebap-99f, 0x1.2f8f4cp-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f1019ap-112f, 0.0f, 0x1.ce444p-27f, 0x1.02b6eap-24f, 0.0f, 0.0f, 0.0f,
     0x1.7bafd2p-124f, 0.0f, 0x1.281238p-82f, 0x1.91a682p-105f, 0x1.508f2ap-41f, 0.0f,
     0x1.e0aa44p-125f, 0.0f, 0.0f, 0x1.1746ecp-123f, 0x1.16139p-102f, 0.0f, 0.0f,
     0.0f, 0x1.9d8b24p-12f, 0x1.354aep-34f, 0x1.24a2acp-124f, 0x1.b2b9d4p-19f,
     0x1.d09078p-37f, 0.0f, 0.0f, 0x1.eb9338p-70f, 0.0f, 0x1.0191eap-104f, 0.0f,
     0x1.21ccacp-75f, 0x1.7e23ccp-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5161e2p-68f,
     0x1.5e7af2p-71f, 0x1.8a630cp-68f, 0.0f, 0.0f, 0x1.5ba6cep-126f, 0.0f
};
static const float external_bench_wrapper_input_table_arg1[1001]  = {
     0.0f, 0x1.894f8ep-15f, 0x1.446fcap-50f, 0.0f, 0x1.23e198p-26f, 0x1.88facp-76f,
     0x1.199088p-47f, 0.0f, 0.0f, 0x1.49233ep-126f, 0.0f, 0x1.1ae0a4p-70f,
     0x1.056eeap-80f, 0.0f, 0x1.2db648p-121f, 0x1.9a7f5p-19f, 0x1.ed6f12p-89f, 0.0f,
     0.0f, 0x1.edfb22p-11f, 0x1.dc37b4p-121f, 0.0f, 0x1.b522a8p-37f, 0x1.d6da68p-36f,
     0.0f, 0.0f, 0x1.ae26cep-23f, 0.0f, 0x1.2a7ca6p-6f, 0.0f, 0x1.3c27f6p-42f, 0.0f,
     0x1.61d2ecp-124f, 0.0f, 0.0f, 0.0f, 0x1.ad5508p-82f, 0x1.b36d74p-91f, 0.0f, 0.0f,
     0x1.6d5856p-57f, 0.0f, 0.0f, 0.0f, 0x1.8d0dd4p-116f, 0.0f, 0x1.a5076p-82f, 0.0f,
     0.0f, 0.0f, 0x1.dc269p-77f, 0.0f, 0x1.7531e2p-21f, 0x1.2fb892p-43f,
     0x1.5db728p-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.45c2fep-35f, 0.0f,
     0x1.938deap-101f, 0x1.2c3e0ep-28f, 0.0f, 0x1.05d5bep-88f, 0.0f, 0x1.f818c2p-30f,
     0.0f, 0x1.ce213ep-123f, 0.0f, 0.0f, 0x1.45983ap-1f, 0x1.5ea8p-44f,
     0x1.3f2faap-27f, 0x1.92f436p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a51998p-119f,
     0x1.38accap-6f, 0.0f, 0.0f, 0x1.22c1e8p-32f, 0.0f, 0x1.cf0bp-116f,
     0x1.fe3e4cp-87f, 0.0f, 0.0f, 0.0f, 0x1.2ca532p-83f, 0.0f, 0x1.fbb706p-23f, 0.0f,
     0x1.b8b694p-107f, 0x1.461b34p-124f, 0x1.f32deap-68f, 0.0f, 0.0f, 0x1.43d4a4p-31f,
     0.0f, 0.0f, 0.0f, 0x1.98b07ep-80f, 0.0f, 0x1.0a56cap-97f, 0x1.0e072ap-126f,
     0x1.11d782p-21f, 0.0f, 0x1.9cf23p-4f, 0x1.816c78p-68f, 0.0f, 0x1.ed1636p-23f,
     0x1.2b136ap-37f, 0.0f, 0x1.8cab34p-58f, 0x1.91b3p-41f, 0x1.beb42p-110f,
     0x1.845fd8p-109f, 0x1.8df948p-26f, 0.0f, 0x1.f7d612p-121f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.0b823ap-114f, 0x1.05106ep-82f, 0x1.70108ep-55f, 0x1.161818p-126f, 0.0f,
     0x1.82344ep-2f, 0x1.4af07ap-11f, 0.0f, 0.0f, 0x1.e8bca6p-31f, 0.0f, 0.0f,
     0x1.d67932p-52f, 0x1.87627ep-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5cec5cp-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1b0756p-43f, 0.0f, 0x1.baf766p-57f,
     0.0f, 0x1.1d772cp-50f, 0.0f, 0.0f, 0x1.8030bap-66f, 0x1.2d3b3p-16f, 0.0f,
     0x1.a34b1cp-88f, 0.0f, 0x1.9a4d2p-58f, 0.0f, 0.0f, 0.0f, 0x1.cfdc6ap-54f, 0.0f,
     0.0f, 0.0f, 0x1.1ba696p-118f, 0x1.d1d254p-83f, 0.0f, 0.0f, 0x1.f474ep-3f, 0.0f,
     0x1p0f, 0x1.99d62ep-29f, 0.0f, 0.0f, 0.0f, 0x1.6d653ap-25f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.48e8ep-21f, 0x1.ab2fbap-82f, 0.0f, 0.0f, 0x1.b6988ep-58f, 0.0f,
     0x1.fe3c6ap-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b7423cp-67f, 0.0f,
     0x1.a6ba28p-19f, 0.0f, 0.0f, 0x1.c0b0eap-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e3ab5p-6f, 0x1.351a76p-122f, 0x1.2dd86cp-94f, 0x1.cd1066p-1f,
     0x1.b8682p-84f, 0x1.8bbf76p-8f, 0.0f, 0.0f, 0x1.ee5e18p-26f, 0.0f,
     0x1.95f72cp-116f, 0x1.4f3164p-39f, 0x1.56ed3p-50f, 0x1.1ebed4p-55f,
     0x1.8c805ep-61f, 0x1.51f832p-68f, 0.0f, 0x1.99df62p-117f, 0x1.ca006p-52f, 0.0f,
     0.0f, 0.0f, 0x1.73d44p-68f, 0.0f, 0x1.c8e272p-112f, 0x1.c895bep-39f,
     0x1.a82196p-27f, 0.0f, 0x1.091c58p-78f, 0x1.f78d3p-77f, 0x1.da0c02p-97f,
     0x1.a49276p-28f, 0.0f, 0x1.0d067ap-25f, 0.0f, 0x1.f45ff2p-89f, 0x1.63e47ep-19f,
     0x1.181e1ep-124f, 0.0f, 0x1.159eacp-51f, 0.0f, 0x1.89c23ap-81f, 0.0f, 0.0f,
     0x1.3b71f2p-43f, 0.0f, 0.0f, 0x1.ff3158p-90f, 0.0f, 0x1.bb334cp-94f,
     0x1.da25f6p-52f, 0x1.4ab2f4p-27f, 0.0f, 0.0f, 0x1.4b2e02p-74f, 0x1.24fa7p-64f,
     0.0f, 0x1.5950eap-81f, 0.0f, 0x1.8ea4p-72f, 0.0f, 0x1.3f1bdp-77f,
     0x1.07b534p-80f, 0.0f, 0x1.fd1a7ep-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.766bf4p-107f, 0.0f, 0x1.ff8522p-25f, 0x1.ce077cp-10f,
     0x1.7326fap-123f, 0.0f, 0x1.ea4014p-76f, 0.0f, 0.0f, 0x1.46de38p-115f, 0.0f,
     0.0f, 0.0f, 0x1.a92c92p-62f, 0x1.5ae19ap-93f, 0.0f, 0.0f, 0x1.a5db28p-117f,
     0x1.222eb8p-6f, 0.0f, 0x1.3fba82p-11f, 0.0f, 0x1.155884p-42f, 0x1.e5ec44p-87f,
     0.0f, 0x1.f6de3cp-24f, 0.0f, 0x1.92e822p-7f, 0x1.cd05e4p-51f, 0x1.717c76p-98f,
     0x1.9c108cp-98f, 0.0f, 0.0f, 0x1.1c0b66p-45f, 0x1.ed9886p-18f, 0x1.5dbf28p-26f,
     0.0f, 0.0f, 0x1.77f86ap-103f, 0.0f, 0.0f, 0x1.480d9ap-3f, 0.0f, 0.0f,
     0x1.1fe752p-62f, 0x1.0fb9b8p-80f, 0x1.23fb18p-73f, 0x1.74d706p-51f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.2b3126p-36f, 0x1.483186p-119f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.380404p-116f, 0.0f, 0x1.1c5842p-75f, 0x1.6a06acp-8f, 0x1.8bbea2p-89f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.2b1338p-17f, 0.0f, 0x1.fda76ep-114f, 0.0f, 0.0f,
     0.0f, 0x1.61b5eep-101f, 0x1.d0cf0ap-114f, 0.0f, 0.0f, 0x1.b22726p-120f, 0.0f,
     0x1.98e4cap-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.09a0bap-94f, 0.0f, 0x1.9b2ab6p-86f,
     0x1.0ef4bep-22f, 0x1.155dfep-79f, 0x1.851f14p-86f, 0x1.2496dcp-119f, 0.0f, 0.0f,
     0x1.9eca9p-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b1cf84p-50f, 0x1.15ce18p-41f,
     0x1.a711aep-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d30176p-32f, 0.0f,
     0x1.e75fa2p-11f, 0.0f, 0x1.33e4f8p-27f, 0x1.50504cp-12f, 0.0f, 0.0f, 0.0f,
     0x1.574d92p-5f, 0.0f, 0.0f, 0x1.05585p-124f, 0x1.80680ep-124f, 0.0f,
     0x1.dfaed2p-105f, 0x1.708cccp-84f, 0x1.17a64ep-111f, 0x1.b4151p-110f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.8bc4c6p-107f, 0x1.b01256p-20f, 0.0f, 0x1.59993ap-118f,
     0x1.ffe5b4p-85f, 0x1.de45f8p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6bd716p-31f,
     0x1.a41fep-120f, 0x1.adc4d8p-44f, 0x1.bc051ep-58f, 0.0f, 0x1.da8eap-72f, 0.0f,
     0.0f, 0x1.38078ep-113f, 0x1.07d0acp-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.54c942p-7f, 0.0f, 0.0f, 0.0f, 0x1.4ff65p-52f, 0x1.0d6d4ep-79f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.0b22cp-22f, 0x1.c37748p-69f, 0x1.86be88p-118f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.10afa8p-29f, 0x1.2b2f54p-116f, 0x1.f344a8p-106f, 0.0f, 0.0f,
     0.0f, 0x1.735482p-13f, 0x1.cc12d8p-98f, 0x1.b85cc2p-68f, 0.0f, 0.0f,
     0x1.772aep-4f, 0.0f, 0.0f, 0x1.d6b562p-43f, 0x1.c1cc9p-24f, 0.0f,
     0x1.8d6864p-39f, 0x1.8c563p-52f, 0x1.ee63c8p-124f, 0x1.5657ep-115f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c3d634p-14f, 0x1.8efad4p-96f, 0x1.5d476ap-109f,
     0x1.18f376p-45f, 0x1.d68c2cp-15f, 0x1.049c14p-112f, 0.0f, 0x1.970edp-7f,
     0x1.d06084p-123f, 0x1.e10cf4p-80f, 0x1.5c581ep-45f, 0x1.1f5678p-11f, 0.0f,
     0x1.84930ap-48f, 0.0f, 0x1.12a61ep-60f, 0x1.2ba4e8p-10f, 0.0f, 0x1.432414p-76f,
     0.0f, 0.0f, 0x1.c92b9p-56f, 0.0f, 0x1.f80d9ap-22f, 0x1.52f576p-38f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.38b2b8p-111f, 0.0f, 0x1.aa5594p-124f, 0.0f,
     0x1.c56cd8p-115f, 0x1.4cad98p-83f, 0.0f, 0.0f, 0.0f, 0x1.1f592ep-36f,
     0x1.4505d8p-96f, 0x1.3b1ca6p-17f, 0.0f, 0x1.40a544p-56f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.417314p-48f, 0.0f, 0.0f, 0x1.8cf13p-110f, 0.0f, 0x1.8fc44ep-50f, 0.0f,
     0x1.46861cp-116f, 0x1.48159ap-40f, 0x1.c0a624p-27f, 0.0f, 0x1.74691p-55f, 0.0f,
     0x1.6b1e5p-79f, 0x1.051fd8p-21f, 0x1.1cb6c2p-111f, 0x1.7f645cp-18f,
     0x1.74102cp-51f, 0.0f, 0x1.e34818p-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5f3b1p-32f,
     0x1.4a10f6p-21f, 0x1.a41e1ep-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e7d08cp-10f,
     0.0f, 0x1.fba88ap-31f, 0.0f, 0x1.f62d6ep-81f, 0.0f, 0x1.dfaed2p-8f, 0.0f, 0.0f,
     0.0f, 0x1.3fbb5cp-98f, 0x1.07afa6p-106f, 0x1.548f6cp-16f, 0.0f, 0x1.514f04p-96f,
     0x1.ad98fcp-60f, 0.0f, 0x1.5f99fcp-65f, 0.0f, 0x1.a5595cp-62f, 0.0f, 0.0f,
     0x1.e91234p-52f, 0.0f, 0x1.c4757ep-32f, 0.0f, 0.0f, 0x1.d5e548p-69f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c98c64p-52f, 0.0f, 0.0f, 0x1.bb39cap-9f,
     0.0f, 0x1.8e91c8p-37f, 0.0f, 0.0f, 0x1.1b3bdap-44f, 0x1.ab2b5ep-2f, 0.0f,
     0x1.0cc1dep-117f, 0x1.112314p-96f, 0x1.f01438p-3f, 0.0f, 0x1.733feep-55f,
     0x1.a5afa6p-118f, 0x1.b80356p-41f, 0x1.87ccf2p-83f, 0x1.426faap-43f,
     0x1.7de99cp-124f, 0.0f, 0.0f, 0x1.f73fccp-23f, 0x1.f1af3p-114f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ba536ap-25f, 0.0f, 0x1.cf7c0ap-117f, 0x1.707ee8p-21f, 0x1.39ae5ep-19f,
     0.0f, 0x1.2ff7d6p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f393d4p-28f,
     0x1.2623c8p-83f, 0x1.a20072p-104f, 0x1.a424f6p-19f, 0.0f, 0.0f, 0x1.a9f23ap-51f,
     0x1.3ce016p-102f, 0.0f, 0x1.ee5d86p-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8f30e4p-3f,
     0x1.7609e2p-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.429ab6p-46f, 0x1.f2f46p-12f, 0.0f,
     0x1.ef1248p-74f, 0x1.fb0e8ep-110f, 0x1.219ea4p-126f, 0.0f, 0.0f, 0x1.bc7cfcp-90f,
     0.0f, 0x1.8a211ap-68f, 0x1.ab246p-28f, 0.0f, 0x1.e3c3f4p-55f, 0.0f, 0.0f,
     0x1.14696p-69f, 0.0f, 0.0f, 0x1.e21e0ap-85f, 0x1.10a424p-14f, 0.0f, 0.0f, 0.0f,
     0x1.a5e28ep-105f, 0x1.b265c8p-48f, 0x1.47a806p-35f, 0.0f, 0.0f, 0x1.a2a058p-91f,
     0x1.fc5b22p-95f, 0x1.950b86p-54f, 0x1.c12796p-86f, 0x1.3c904cp-97f, 0.0f,
     0x1.b54edp-57f, 0x1.040888p-114f, 0x1.d8b7cp-11f, 0.0f, 0x1.d3d3a4p-84f, 0.0f,
     0.0f, 0.0f, 0x1.069a4p-102f, 0.0f, 0.0f, 0x1.e0d5a6p-124f, 0.0f, 0x1.0a8308p-16f,
     0x1.9c4984p-81f, 0.0f, 0.0f, 0x1.7115f6p-11f, 0x1.30e3ap-29f, 0.0f,
     0x1.5cc91ap-51f, 0x1.f33504p-115f, 0x1.b1635ap-125f, 0.0f, 0.0f, 0x1.f0e4ap-14f,
     0x1.921a78p-73f, 0x1.a60ac8p-95f, 0.0f, 0.0f, 0.0f, 0x1.dd3484p-105f,
     0x1.702152p-96f, 0x1.33d88ap-76f, 0x1.a8b08ap-92f, 0.0f, 0.0f, 0x1.300a3p-73f,
     0x1.0e23ccp-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9d5266p-86f, 0x1.e20f72p-68f,
     0x1.9b39c8p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.66f2bcp-16f, 0.0f, 0.0f,
     0x1.21ae8p-18f, 0x1.e27768p-113f, 0.0f, 0x1.a112c2p-1f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f706f8p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.382eecp-91f, 0x1.309f8cp-108f,
     0.0f, 0.0f, 0.0f, 0x1.2f0a0cp-42f, 0.0f, 0.0f, 0x1.3f0a96p-7f, 0x1.0fb5cp-49f,
     0.0f, 0.0f, 0x1.20b998p-77f, 0.0f, 0x1.9cbb4cp-75f, 0x1.7535ap-43f, 0.0f, 0.0f,
     0.0f, 0x1.096354p-29f, 0x1.277244p-87f, 0x1.1fa302p-107f, 0.0f, 0x1.9cfac8p-54f,
     0.0f, 0.0f, 0x1.6dcbdep-101f, 0x1.440116p-55f, 0x1.6395bp-48f, 0x1.c48416p-125f,
     0x1.81e836p-107f, 0.0f, 0x1.ce6cd4p-54f, 0x1.b8de4ap-4f, 0x1.ab6468p-122f, 0.0f,
     0.0f, 0.0f, 0x1.a6dd5ep-88f, 0x1.41f40ep-13f, 0.0f, 0.0f, 0x1.31bdbap-32f, 0.0f,
     0.0f, 0x1.31b71p-73f, 0x1.1c1918p-9f, 0.0f, 0.0f, 0x1.5119a8p-46f, 0.0f, 0.0f,
     0.0f, 0x1.0f7482p-41f, 0x1.0d4d46p-2f, 0x1.50c0f2p-4f, 0x1.be4f8ep-52f,
     0x1.6301bp-83f, 0.0f, 0.0f, 0x1.272274p-13f, 0x1.218e78p-101f, 0.0f,
     0x1.e4cb4cp-33f, 0x1.f4892p-56f, 0.0f, 0.0f, 0x1.96b92cp-3f, 0x1.5263b4p-60f,
     0x1.a85a1ap-61f, 0.0f, 0.0f, 0x1.d97dd8p-89f, 0x1.586da6p-9f, 0x1.446e24p-83f,
     0.0f, 0x1.778886p-125f, 0.0f, 0x1.ccedf8p-40f, 0.0f, 0.0f, 0x1.404054p-73f,
     0x1.73829ep-119f, 0x1.ba379ap-115f, 0.0f, 0x1.d3b29p-54f, 0.0f, 0x1.45681p-28f,
     0.0f, 0.0f, 0.0f, 0x1.5e227ep-92f, 0.0f, 0x1.8d8582p-52f, 0.0f, 0.0f,
     0x1.14b13cp-64f, 0x1.3b80b8p-44f, 0.0f, 0x1.775808p-116f, 0x1.74bab4p-60f,
     0x1.ea47ecp-113f, 0x1.553888p-49f, 0.0f, 0.0f, 0x1.7c2f66p-89f, 0x1.63bce8p-97f,
     0.0f, 0x1.e22f4ep-78f, 0x1.06425cp-6f, 0x1.7c1f64p-89f, 0x1.02e74ap-114f,
     0x1.af4666p-102f, 0.0f, 0.0f, 0x1.2cc9d6p-103f, 0.0f, 0.0f, 0x1.6f4f4cp-77f,
     0x1.7d3cap-58f, 0x1.e1e08p-119f, 0x1.da814ep-34f, 0x1.c81628p-74f, 0.0f, 0.0f,
     0.0f, 0x1.9c06e4p-64f, 0.0f, 0.0f, 0.0f, 0x1.32c71ep-106f, 0.0f,
     0x1.55e1eap-115f, 0x1.e84f38p-45f, 0.0f, 0.0f, 0.0f, 0x1.dd1faep-90f,
     0x1.686f18p-105f, 0x1.d0c168p-110f, 0x1.f93f5ep-68f, 0x1.acf522p-96f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.9d61f2p-33f, 0.0f, 0.0f, 0x1.bc75fp-100f, 0.0f,
     0x1.1ca5ap-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.92b0dcp-60f, 0x1.f36ea6p-121f, 0.0f,
     0.0f, 0x1.406e18p-50f, 0x1.15ca5ep-111f, 0.0f, 0.0f, 0x1.8fcecp-122f, 0.0f,
     0x1.912bf4p-51f, 0x1.bc0f66p-54f, 0.0f, 0.0f, 0.0f, 0x1.cfab1p-110f,
     0x1.69a986p-102f, 0x1.a23932p-62f, 0x1.14e692p-27f, 0.0f, 0x1.4df5eap-29f,
     0x1.1a514cp-2f, 0.0f, 0.0f, 0x1.b66dcp-54f, 0.0f, 0.0f, 0x1.96cdap-54f,
     0x1.ce9df4p-16f, 0.0f, 0x1.a478ep-79f, 0x1.7798cep-19f, 0x1.2e3a24p-79f,
     0x1.908396p-72f, 0x1.f4951p-72f, 0x1.436b08p-45f, 0.0f, 0x1.efac3ap-25f, 0.0f,
     0.0f, 0x1.7e1294p-3f, 0x1.c8a24cp-19f, 0x1.42eebep-78f, 0x1.40d6f6p-73f, 0.0f,
     0x1.fa298p-112f, 0.0f, 0x1.692092p-68f, 0x1.7dd7f2p-54f, 0.0f, 0.0f,
     0x1.ca2f3ep-23f, 0x1.06972p-9f, 0x1.0f73ccp-112f, 0x1.ba35a8p-68f, 0.0f,
     0x1.63ea36p-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6edcfcp-8f, 0.0f, 0x1.1609c2p-96f,
     0.0f, 0x1.e1e66p-55f, 0x1.f4f28ap-18f, 0.0f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    float global_bench_acc;
    int64_t timer;
    int64_t tmp;
    int32_t j;
    int64_t tmp1;
    int64_t tmp2;
    double id_tmp;
    double cpe_measure;
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = 0.0f;
    tmp = __cos_counter_num(0);
    timer = tmp;
    j = INT32_C(0);

    for (;(j < INT32_C(10000));){
        float bench_acc;
        int32_t i;
        float tmp0;
        int32_t tmp1;

        i = INT32_C(0);
        bench_acc = 0.0f;

        for (;(i < INT32_C(1001));){
            float tmp0;
            float tmp1;
            float tmp2;
            float tmp3;
            int32_t tmp4;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = external_bench_wrapper_input_table_arg1[i];
            tmp2 = Sleef_fminf1_purecfma(tmp0, tmp1);
            external_bench_wrapper_output_table[i] = tmp2;
            tmp3 = bench_acc + tmp2;
            bench_acc = tmp3;
            tmp4 = i + INT32_C(1);
            i = tmp4;
        }
        tmp0 = global_bench_acc + bench_acc;
        global_bench_acc = tmp0;
        tmp1 = j + INT32_C(1);
        j = tmp1;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_fminf1_purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_fminf1_purecfma bench acc %a\n", global_bench_acc);
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
