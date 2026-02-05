/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_fastcosf8_u3500kvx.c --function \
 *     Sleef_finz_fastcosf8_u3500kvx --headers sleef.h,ml_support_lib.h \
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
     0x1.1000dcp-98f, 0x1p0f, 0x1.0e2032p-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b419bcp-16f, 0.0f, 0.0f, 0x1.da31dap-16f, 0x1.e662a2p-99f, 0.0f,
     0x1.755966p-30f, 0x1.e95ecap-5f, 0.0f, 0.0f, 0x1.d77c9p-126f, 0.0f,
     0x1.150bbep-76f, 0.0f, 0.0f, 0x1.3d1fd4p-125f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6f5c46p-34f, 0x1.60314ep-24f, 0x1.22ed9ap-3f, 0.0f, 0.0f, 0x1.e6fd0ap-103f,
     0x1.2f05ecp-5f, 0.0f, 0.0f, 0x1.89152cp-96f, 0.0f, 0x1.3388d6p-42f, 0.0f, 0.0f,
     0.0f, 0x1.4d5824p-29f, 0x1.021fd4p-91f, 0.0f, 0.0f, 0x1.f62118p-74f, 0.0f, 0.0f,
     0.0f, 0x1.dee92cp-114f, 0x1.c9a984p-89f, 0.0f, 0.0f, 0x1.34fb04p-96f, 0.0f, 0.0f,
     0x1.ba2e1ep-39f, 0.0f, 0x1.48704p-20f, 0.0f, 0x1.289bc4p-64f, 0x1.5a91dcp-61f,
     0.0f, 0x1.d1c4fcp-70f, 0x1.366b56p-13f, 0.0f, 0.0f, 0x1.bdc92p-18f,
     0x1.45043p-47f, 0x1.a78822p-122f, 0.0f, 0x1.3ebe52p-79f, 0.0f, 0x1.3ee67cp-39f,
     0.0f, 0x1.2e626ep-38f, 0.0f, 0.0f, 0.0f, 0x1.199acep-123f, 0x1.c8135ap-55f, 0.0f,
     0.0f, 0.0f, 0x1.af1502p-107f, 0.0f, 0.0f, 0x1.1a7f28p-17f, 0x1.55b0b4p-45f,
     0x1.181c7cp-95f, 0.0f, 0x1.606f7ap-10f, 0.0f, 0.0f, 0.0f, 0x1.4214fep-93f,
     0x1.2e371ap-117f, 0.0f, 0x1.76ea38p-66f, 0x1.579d4ep-111f, 0.0f, 0.0f,
     0x1.94ccb8p-82f, 0.0f, 0x1.d6c1bp-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d39aep-64f,
     0x1.01df9p-36f, 0x1.53c05p-10f, 0x1.f459dp-49f, 0.0f, 0.0f, 0x1.92d1ep-36f, 0.0f,
     0.0f, 0x1.bc9fb8p-65f, 0.0f, 0x1.79f6bep-45f, 0.0f, 0x1.79fb94p-23f,
     0x1.ca0568p-13f, 0x1.e5bba6p-20f, 0.0f, 0x1.878b8p-24f, 0.0f, 0.0f,
     0x1.ec0cdcp-55f, 0x1.92c84p-100f, 0x1.85c5ep-20f, 0x1.aa854ep-118f,
     0x1.504a18p-26f, 0x1.1d1d94p-46f, 0x1.dc3072p-22f, 0x1.b37dcp-112f,
     0x1.0d9c4ap-20f, 0x1.875ea2p-67f, 0x1.29eb58p-63f, 0x1.9eb09ap-13f,
     0x1.cdd512p-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bb1f9p-87f,
     0.0f, 0x1.47491cp-105f, 0x1.52bc36p-72f, 0.0f, 0.0f, 0x1.e42bcap-89f, 0.0f,
     0x1.14ec9p-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ef9368p-101f,
     0.0f, 0x1.d2fa3p-118f, 0.0f, 0x1.408bfp-11f, 0.0f, 0x1.6529fep-3f,
     0x1.cec076p-44f, 0.0f, 0x1.1a8e22p-57f, 0x1.47680ap-15f, 0.0f, 0x1.b82722p-53f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.8db308p-20f, 0x1.73ecb6p-122f, 0.0f, 0.0f,
     0x1.6b2b16p-82f, 0x1.07d58p-50f, 0x1.8dbd3p-92f, 0.0f, 0x1.88da96p-46f,
     0x1.09674cp-54f, 0.0f, 0x1.b10448p-98f, 0.0f, 0x1.82671ep-21f, 0.0f, 0.0f,
     0x1.9a73d2p-45f, 0.0f, 0x1.4745bep-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.72ad98p-100f,
     0x1.45f776p-82f, 0.0f, 0x1.f53a92p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.69277p-46f,
     0.0f, 0x1.e7ab56p-87f, 0.0f, 0.0f, 0x1.10692p-99f, 0x1.ec9a44p-65f,
     0x1.46514cp-66f, 0.0f, 0.0f, 0.0f, 0x1.91da2cp-98f, 0x1.3ec1a2p-29f, 0.0f, 0.0f,
     0.0f, 0x1.8b6e5ap-112f, 0.0f, 0x1.ba6266p-107f, 0.0f, 0.0f, 0x1.adf484p-97f,
     0.0f, 0.0f, 0x1.754dccp-85f, 0.0f, 0x1.585cb6p-89f, 0x1.29e124p-108f, 0.0f,
     0x1.22424cp-93f, 0.0f, 0x1.7f234p-112f, 0.0f, 0x1.5c0792p-61f, 0x1.edcd42p-106f,
     0x1.6bfb8p-88f, 0.0f, 0.0f, 0x1.b8137ep-44f, 0.0f, 0.0f, 0x1.cdb9bep-4f, 0.0f,
     0.0f, 0x1.8297cp-21f, 0x1.ebdb24p-74f, 0x1.a7b09ap-89f, 0.0f, 0.0f, 0.0f,
     0x1.8aab88p-83f, 0x1.d26cc6p-26f, 0x1.01c3p-16f, 0.0f, 0.0f, 0x1.39c6f4p-34f,
     0x1.e80f94p-86f, 0x1.ea6364p-29f, 0x1.0ea596p-110f, 0x1.8eca52p-103f,
     0x1.30a178p-84f, 0x1.e2ac36p-89f, 0x1.74d0f4p-47f, 0.0f, 0x1.c99784p-15f,
     0x1.0da338p-15f, 0x1.b3ce56p-7f, 0.0f, 0x1.62dce6p-36f, 0x1.dca7dcp-124f, 0.0f,
     0.0f, 0x1.f4a252p-101f, 0.0f, 0.0f, 0x1.0c9604p-87f, 0x1.cfa28p-24f,
     0x1.590c9ep-101f, 0.0f, 0x1.c8cb64p-24f, 0.0f, 0x1.13b6c6p-82f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4b430ap-58f, 0.0f, 0x1.044bfep-68f, 0.0f,
     0x1.a25c92p-7f, 0.0f, 0.0f, 0x1.441b8ap-7f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fa86bp-104f, 0x1.3fcf0ep-37f, 0.0f, 0.0f, 0x1.b4be68p-116f, 0.0f,
     0x1.f0d582p-75f, 0x1.c21148p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bc2f36p-29f,
     0x1.3e0aeap-74f, 0x1.dc5134p-33f, 0x1.cd6b64p-51f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8ed23cp-19f, 0.0f, 0x1.83e588p-74f, 0.0f, 0x1.0049fep-23f, 0.0f,
     0x1.a70dbap-96f, 0.0f, 0.0f, 0.0f, 0x1.08889ap-32f, 0.0f, 0.0f, 0x1.63879ep-40f,
     0.0f, 0.0f, 0x1.5ec526p-63f, 0x1.b1c74ap-30f, 0x1.d1fe4cp-51f, 0x1.6ae1cap-2f,
     0.0f, 0.0f, 0.0f, 0x1.463602p-96f, 0x1.26c4b4p-64f, 0.0f, 0.0f, 0.0f,
     0x1.9fb6c4p-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.30c1cap-108f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.85af64p-80f, 0.0f, 0x1.caccep-125f, 0.0f, 0x1.19aacap-20f,
     0x1.7da95ap-69f, 0.0f, 0.0f, 0.0f, 0x1.89e3fp-122f, 0.0f, 0.0f, 0.0f,
     0x1.43cb3cp-44f, 0x1.4049acp-81f, 0x1.305712p-78f, 0.0f, 0x1.cb586p-34f, 0.0f,
     0x1.766aacp-40f, 0.0f, 0x1.ba0734p-71f, 0x1.86de7cp-49f, 0x1.8b2e58p-43f,
     0x1.e8460ap-97f, 0.0f, 0.0f, 0.0f, 0x1.6c9c98p-31f, 0.0f, 0.0f, 0.0f,
     0x1.b26feep-96f, 0.0f, 0x1.e6a302p-55f, 0.0f, 0x1.d9bd32p-121f, 0.0f,
     0x1.39ab5ap-41f, 0x1.5546d2p-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3dba82p-104f,
     0.0f, 0.0f, 0x1.7e7874p-55f, 0x1.904c4ap-24f, 0x1.86bf7ep-105f, 0.0f,
     0x1.47114ap-8f, 0.0f, 0x1.079094p-72f, 0x1.c0a43ap-120f, 0x1.d514e2p-57f,
     0x1.349dfp-54f, 0.0f, 0.0f, 0x1.aa7384p-100f, 0x1.9bca56p-41f, 0.0f, 0.0f, 0.0f,
     0x1.e1ee82p-121f, 0x1.7d7558p-126f, 0.0f, 0.0f, 0.0f, 0x1.a7c578p-125f, 0.0f,
     0x1.04e8bcp-104f, 0x1.f50498p-13f, 0x1.3c17aep-15f, 0.0f, 0x1.62b50ap-34f, 0.0f,
     0x1.74012ep-26f, 0x1.5d5ce4p-61f, 0.0f, 0.0f, 0.0f, 0x1.e03a04p-28f, 0.0f, 0.0f,
     0x1.263aaep-74f, 0.0f, 0.0f, 0x1.8cf9fep-36f, 0x1.c6dc9ep-35f, 0.0f, 0.0f, 0.0f,
     0x1.92627p-113f, 0.0f, 0.0f, 0.0f, 0x1.f74a26p-62f, 0x1p0f, 0x1.2a20cp-74f, 0.0f,
     0x1.f1346p-23f, 0.0f, 0.0f, 0x1.06056ep-48f, 0x1.9a1bacp-99f, 0.0f,
     0x1.acdc6cp-121f, 0x1.1d5f12p-105f, 0.0f, 0x1.f1dc06p-99f, 0x1.e5a88p-58f, 0.0f,
     0x1.63836cp-39f, 0x1.989ab6p-94f, 0x1p0f, 0.0f, 0.0f, 0x1.7dae8ap-29f, 0.0f,
     0x1.f3d8fap-7f, 0x1.410ff8p-100f, 0x1.886618p-48f, 0x1.80fb18p-51f, 0.0f, 0.0f,
     0x1.2fec14p-22f, 0x1p0f, 0.0f, 0x1.8f559ap-94f, 0x1.a7f1fap-106f,
     0x1.9a88f4p-102f, 0x1.e63cbcp-108f, 0x1.dc01eap-93f, 0x1.08f4f2p-47f,
     0x1.483548p-81f, 0x1.38882cp-6f, 0x1.ba9cb4p-57f, 0.0f, 0x1.31a192p-90f,
     0x1.38c0bep-94f, 0.0f, 0x1p0f, 0x1.8c52dp-99f, 0x1.e32f34p-10f, 0x1.6738b2p-16f,
     0.0f, 0.0f, 0x1.e6b79cp-89f, 0.0f, 0x1.007c36p-101f, 0.0f, 0.0f, 0x1.16bef6p-27f,
     0x1.3d0296p-87f, 0x1.4c494ap-17f, 0.0f, 0.0f, 0x1.16599ap-44f, 0.0f,
     0x1.d1cc2cp-116f, 0x1.d58b6p-92f, 0x1.57fc68p-88f, 0.0f, 0x1.c08c22p-112f,
     0x1.6c0288p-76f, 0.0f, 0.0f, 0x1.0551b2p-11f, 0x1.78676ap-116f, 0x1.552352p-97f,
     0.0f, 0x1.87dd5ap-11f, 0x1.f014acp-63f, 0x1.cad91cp-35f, 0.0f, 0.0f, 0.0f,
     0x1.04f24p-33f, 0.0f, 0x1.c7478ep-98f, 0x1.fcadbap-49f, 0x1.2103e2p-61f,
     0x1.b58876p-114f, 0x1.3dbebcp-66f, 0.0f, 0.0f, 0x1.28472cp-110f, 0x1.21f3c4p-20f,
     0x1.bd57a4p-51f, 0.0f, 0x1.2a88b6p-64f, 0.0f, 0x1.245c3cp-106f, 0x1.316efcp-82f,
     0x1.45c69ap-118f, 0x1.188d9p-32f, 0.0f, 0.0f, 0x1p0f, 0x1.ef129p-67f,
     0x1.ee1654p-40f, 0x1.c5445ap-14f, 0x1.54a324p-122f, 0.0f, 0x1.e0adp-34f, 0.0f,
     0x1.cbf664p-46f, 0.0f, 0.0f, 0x1.842436p-81f, 0x1.9e26b8p-61f, 0x1.a0d718p-36f,
     0x1.3091f2p-104f, 0x1.5ef83cp-96f, 0.0f, 0.0f, 0x1.e7fdc4p-105f, 0x1.b11aa6p-50f,
     0.0f, 0x1.f1c38cp-117f, 0x1.640f12p-78f, 0x1.1af6d4p-92f, 0x1.96d94ep-91f,
     0x1.b3bb56p-103f, 0x1.0b6bd8p-20f, 0x1.70f1ecp-88f, 0x1.d7258ap-38f, 0.0f, 0.0f,
     0x1.423c72p-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2e55bep-1f, 0.0f, 0x1.a1e7bap-107f,
     0x1.2fd26ep-109f, 0.0f, 0.0f, 0.0f, 0x1.1d8872p-12f, 0x1.1bb13ep-77f, 0.0f,
     0x1.40c06ap-107f, 0.0f, 0.0f, 0.0f, 0x1.0a403cp-71f, 0.0f, 0.0f, 0x1.b892d8p-49f,
     0.0f, 0.0f, 0x1.db7eb2p-119f, 0x1.22acccp-61f, 0.0f, 0x1.56582p-85f, 0.0f, 0.0f,
     0x1p0f, 0.0f, 0.0f, 0x1.a155d4p-16f, 0x1.d0a042p-77f, 0x1.276888p-111f, 0.0f,
     0.0f, 0x1.69e7a2p-57f, 0.0f, 0.0f, 0.0f, 0x1.a8109p-98f, 0x1.9709fep-97f, 0.0f,
     0x1.c7c242p-65f, 0x1.0fb624p-3f, 0x1.f26784p-96f, 0.0f, 0.0f, 0.0f,
     0x1.3bdf3p-126f, 0.0f, 0.0f, 0x1.8fb13p-100f, 0.0f, 0.0f, 0.0f, 0x1.65f814p-63f,
     0x1.4d72ap-12f, 0x1.194dfp-56f, 0.0f, 0x1.c721fep-101f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9b03b6p-126f, 0.0f, 0x1.66298cp-117f, 0x1.b235fp-117f, 0x1.02c96ep-119f,
     0x1.466788p-111f, 0.0f, 0.0f, 0x1.5a6aa8p-116f, 0.0f, 0x1.1a014cp-69f,
     0x1.28dc7ap-90f, 0.0f, 0.0f, 0x1.1087ecp-106f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.215312p-3f, 0.0f, 0.0f, 0x1.edab12p-70f, 0x1.b64b5p-115f, 0x1.4978aap-91f,
     0x1.bcffa6p-121f, 0.0f, 0.0f, 0.0f, 0x1.29b5e8p-115f, 0x1.7a4b56p-122f, 0.0f,
     0x1.d83c08p-93f, 0x1.69bbbp-45f, 0x1.d9971cp-15f, 0x1.6f783ap-37f, 0.0f, 0.0f,
     0.0f, 0x1.6f58dcp-68f, 0x1.b7587ep-10f, 0x1.1b47f8p-30f, 0x1.395664p-72f, 0.0f,
     0.0f, 0x1.af92fep-44f, 0x1.5d9c7ap-61f, 0x1.b4dd42p-30f, 0x1.39f352p-58f, 0.0f,
     0.0f, 0x1.9c73dep-116f, 0x1.a49662p-82f, 0x1.2cc6b6p-69f, 0.0f, 0x1.f26894p-109f,
     0.0f, 0.0f, 0.0f, 0x1.80d48ep-45f, 0x1.35510ap-86f, 0x1.54c65p-84f,
     0x1.07ab86p-120f, 0.0f, 0.0f, 0.0f, 0x1.ccc772p-49f, 0x1.0b118ep-51f, 0.0f,
     0x1.705896p-85f, 0x1.8ee912p-3f, 0x1.4f660cp-102f, 0x1.d8fe72p-124f, 0.0f,
     0x1.ecddfap-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3ed39p-55f, 0x1.c6a406p-34f,
     0x1.ecf3cap-74f, 0x1.773298p-116f, 0.0f, 0.0f, 0.0f, 0x1.a32d62p-27f, 0.0f, 0.0f,
     0.0f, 0x1.2237aap-30f, 0.0f, 0x1.e547c4p-126f, 0x1.9513ecp-5f, 0x1.d7bdcep-52f,
     0x1.35f60cp-46f, 0.0f, 0x1.004814p-68f, 0.0f, 0x1.df787ep-46f, 0x1.63e758p-113f,
     0.0f, 0x1.0eaddcp-107f, 0x1.9e584cp-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.232e4p-25f, 0x1.03ff3p-46f, 0x1.35d0b6p-124f, 0.0f, 0x1.4b91f6p-31f,
     0x1.d1c724p-113f, 0.0f, 0x1.33feap-98f, 0x1.c673bap-36f, 0.0f, 0x1.5529a4p-60f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7c581cp-21f, 0.0f, 0x1.af5558p-56f,
     0x1.b1c7a6p-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f7b99ap-33f,
     0.0f, 0x1.6c8a24p-7f, 0.0f, 0.0f, 0x1.544994p-68f, 0x1.a353acp-106f,
     0x1.f383dcp-70f, 0x1.f67e04p-85f, 0x1.6a9222p-43f, 0x1.f424dep-35f, 0.0f, 0.0f,
     0x1.557b9p-81f, 0.0f, 0x1.6d3b1ap-1f, 0x1.8c51aap-42f, 0x1.0c867cp-59f,
     0x1.7603f4p-40f, 0x1.97cbc2p-38f, 0.0f, 0.0f, 0x1.1d38bap-53f, 0x1.9e6824p-63f,
     0.0f, 0.0f, 0.0f, 0x1.5928aep-93f, 0.0f, 0x1.450e3ep-112f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.84fd74p-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.01d156p-6f, 0x1.a33696p-113f,
     0x1.46c532p-72f, 0x1.f2ddc6p-34f, 0x1.2a5b14p-119f, 0.0f, 0x1.1b2894p-24f,
     0x1.e53c94p-31f, 0.0f, 0.0f, 0.0f, 0x1.7de424p-28f, 0x1.49ef5ap-107f, 0.0f,
     0x1.673ba8p-78f, 0x1.773b16p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.899eeep-46f,
     0x1.c0faa4p-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d9247p-31f, 0.0f, 0.0f,
     0x1.ab54f2p-73f, 0.0f, 0x1.36314ep-80f, 0x1.c9e922p-117f, 0.0f, 0x1.b10928p-12f,
     0.0f, 0x1.c5b17cp-60f, 0x1.1cd744p-79f, 0.0f, 0x1.cb368ep-41f, 0x1.ba332ap-87f,
     0.0f, 0.0f, 0x1.9b15a8p-12f, 0x1.e2e1b6p-76f, 0x1.731a0ap-56f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.1e279ep-13f, 0.0f, 0.0f, 0x1.0f47dap-72f, 0.0f, 0x1.e4103cp-125f,
     0x1.898148p-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8dc0c4p-124f,
     0x1.502592p-105f, 0x1.3a8eacp-100f, 0.0f, 0x1.90ae32p-77f, 0.0f, 0x1.321ea2p-23f,
     0.0f, 0.0f, 0.0f, 0x1.563d88p-3f, 0.0f, 0x1.c88p-106f, 0.0f, 0x1.f6619ap-33f,
     0.0f, 0x1.6cf286p-6f, 0x1.5bc5ap-26f, 0.0f, 0.0f, 0.0f, 0x1.1aee4ap-108f, 0.0f,
     0.0f, 0x1.a6a47ap-105f, 0.0f, 0x1.7e7b98p-74f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3cd44ap-6f, 0.0f, 0.0f, 0x1.b22b16p-20f, 0.0f, 0x1.39d3bcp-90f,
     0x1.55842ep-44f, 0x1p0f, 0.0f, 0.0f, 0x1.523288p-80f, 0x1.b1888ep-122f,
     0x1.97556p-118f, 0x1.050b6ep-97f, 0.0f, 0.0f, 0x1.e979dep-47f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.0e58d2p-81f, 0x1.88994ap-77f, 0x1.c0f292p-31f, 0x1.78f53p-83f,
     0x1.9c417cp-125f, 0.0f, 0x1.445b56p-44f, 0x1.ee9de4p-124f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.fe7acep-97f, 0x1.6fd9ecp-102f, 0x1.4e5a64p-65f,
     0x1.c1cf76p-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2fbc4ep-20f, 0x1.bc864cp-123f,
     0x1.72dfa8p-121f, 0x1.407b1ap-53f, 0.0f, 0x1.702752p-26f, 0x1.b27d1ap-51f, 0.0f,
     0x1.2d99f2p-61f, 0x1.75792p-116f, 0x1.1da7c4p-112f
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
            tmp1 = Sleef_finz_fastcosf8_u3500kvx(tmp0);
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
    printf("Sleef_finz_fastcosf8_u3500kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_finz_fastcosf8_u3500kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
