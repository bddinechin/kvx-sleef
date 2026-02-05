/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sincosf8_u10kvx.c --function \
 *     Sleef_finz_sincosf8_u10kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 4 --function-input-vector-size \
 *     4 --precision sleef_sf2 --bench --no-embedded-bin --target kv3
 *
 */
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <string.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef_float32x8_t_2 external_bench_wrapper_cst = {.x = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f},.y = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f}};
static const Sleef_float32x8_t_2 external_bench_wrapper_cst1 = {.x = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f},.y = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f}};
volatile Sleef_float32x8_t_2 external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0.0f, 0.0f, 0x1.4b2b08p-45f, 0x1.8a3e16p-76f, 0.0f, 0.0f, 0x1.4c667p-88f, 0.0f,
     0.0f, 0x1.01bd54p-107f, 0.0f, 0x1.0c1926p-117f, 0x1p0f, 0.0f, 0.0f,
     0x1.19d71ap-51f, 0.0f, 0x1.f7acf4p-121f, 0x1.83994cp-114f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.895812p-92f, 0.0f, 0.0f, 0x1.f64354p-40f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.258608p-6f, 0.0f, 0.0f, 0x1.f1843ep-112f, 0x1.382838p-39f, 0.0f,
     0.0f, 0x1.14580cp-67f, 0x1.d6a71ep-10f, 0.0f, 0x1.bf4428p-118f, 0x1.4d6178p-38f,
     0x1.afc044p-102f, 0.0f, 0x1.50dc72p-87f, 0.0f, 0.0f, 0x1.5f62f2p-92f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6578bp-16f, 0x1.687344p-41f, 0.0f,
     0.0f, 0.0f, 0x1.c94cbap-63f, 0.0f, 0x1.0eea2cp-8f, 0x1.90e318p-81f, 0.0f,
     0x1.e230bep-49f, 0.0f, 0.0f, 0x1.bc175ap-125f, 0x1.6b9efep-116f, 0.0f,
     0x1.23911ap-23f, 0x1.885908p-122f, 0.0f, 0x1.c01ceep-68f, 0x1.45a164p-109f,
     0x1.c93d8ap-20f, 0.0f, 0x1.1d1cbcp-116f, 0x1.6e64e6p-47f, 0x1.86823cp-2f,
     0x1.b921f4p-66f, 0x1.b40648p-96f, 0x1.563306p-98f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bd0ee2p-120f, 0.0f, 0x1.87c04ap-100f, 0.0f, 0x1.88260ap-7f, 0.0f,
     0x1.f1e4b6p-98f, 0x1.603c82p-84f, 0.0f, 0x1.13537cp-105f, 0.0f, 0x1.612fecp-37f,
     0x1.2ac77cp-15f, 0.0f, 0.0f, 0x1.5ec35p-119f, 0.0f, 0.0f, 0x1.13967ep-78f, 0.0f,
     0.0f, 0x1.893ef2p-15f, 0.0f, 0x1.718a4ap-11f, 0.0f, 0x1.48249cp-75f,
     0x1.a0bfa8p-29f, 0.0f, 0.0f, 0x1.da8ef8p-96f, 0x1.2ccaf2p-72f, 0x1.c18f8p-105f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e64fa4p-78f, 0.0f, 0x1.ad3084p-16f, 0.0f, 0.0f,
     0x1.96bf2p-43f, 0.0f, 0x1.2a37fep-41f, 0x1.6ff0f2p-76f, 0x1.b39586p-66f,
     0x1.d8b726p-10f, 0.0f, 0.0f, 0x1.774a4cp-50f, 0x1.12be6cp-47f, 0x1.dfd22ap-100f,
     0x1.5f9992p-84f, 0.0f, 0x1.a63d62p-89f, 0x1.7611aap-9f, 0x1.be8c72p-44f,
     0x1.5704ep-48f, 0.0f, 0x1.41f71ep-56f, 0x1.5a61e2p-105f, 0x1.71de76p-66f,
     0x1.62745cp-106f, 0x1.5cfd7cp-42f, 0x1.80e8dep-20f, 0.0f, 0x1.38164cp-69f,
     0x1.ee60e2p-118f, 0x1.20beaap-50f, 0.0f, 0.0f, 0x1.e242cap-35f, 0x1.3fbf14p-34f,
     0x1.7996dep-60f, 0.0f, 0.0f, 0x1.150234p-71f, 0.0f, 0.0f, 0x1.742df8p-80f,
     0x1.4fbefp-29f, 0x1.1174bep-57f, 0x1.738766p-89f, 0.0f, 0x1.3bb7c8p-95f, 0.0f,
     0x1.b6f4c8p-44f, 0x1.c5b3e4p-99f, 0.0f, 0x1.d50354p-12f, 0.0f, 0x1.373d0ep-68f,
     0x1p0f, 0x1.293202p-18f, 0.0f, 0.0f, 0x1.7f1836p-108f, 0x1.1d28fp-74f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.1f6e64p-62f, 0.0f, 0x1.09833p-59f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.759d6p-39f, 0x1.156e2cp-120f, 0.0f, 0x1.b8a132p-49f, 0.0f, 0.0f, 0.0f,
     0x1.17cf08p-94f, 0x1.774eb4p-85f, 0x1.c15602p-5f, 0x1.f3a6dep-70f,
     0x1.88db56p-123f, 0x1.2e2d0cp-11f, 0x1.c0e5fp-9f, 0x1.8b378ep-8f, 0.0f, 0.0f,
     0x1.bb9f6cp-76f, 0x1.f9957ap-103f, 0.0f, 0x1.575bdap-44f, 0x1.047066p-85f, 0.0f,
     0.0f, 0x1.3d374p-1f, 0.0f, 0x1p0f, 0.0f, 0x1.8ddac2p-73f, 0.0f, 0.0f,
     0x1.748a08p-41f, 0x1.53e9c8p-87f, 0x1.a72662p-52f, 0x1.6317fp-42f, 0.0f, 0.0f,
     0x1.32d9e2p-85f, 0.0f, 0x1.411e9cp-46f, 0x1.11917cp-102f, 0.0f, 0x1.83b194p-27f,
     0.0f, 0x1.0f2a16p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5c886cp-91f, 0.0f,
     0x1.a61772p-61f, 0x1.84df78p-16f, 0x1.7dc3f4p-105f, 0x1.aabc66p-96f,
     0x1.f1414ep-102f, 0x1.94e1ecp-58f, 0x1.5f38c4p-34f, 0.0f, 0x1.40b39ap-83f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d82cep-32f, 0.0f, 0.0f, 0.0f, 0x1.82b812p-71f,
     0x1.08708cp-108f, 0x1.e3e324p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.61cc0cp-4f,
     0x1.61cccp-49f, 0x1.77e1b2p-76f, 0x1.3393b4p-63f, 0x1.a3f96p-87f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.73533ep-49f, 0x1.e8bc58p-82f, 0.0f, 0.0f, 0x1.97591p-69f,
     0x1.e9dcecp-109f, 0.0f, 0x1.5f5954p-71f, 0.0f, 0.0f, 0.0f, 0x1.a5c9ap-34f,
     0x1.6869dep-88f, 0.0f, 0x1.3d77dcp-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b2955cp-106f, 0x1.6e8dfp-6f, 0x1.074a92p-67f, 0x1.5d00e4p-102f,
     0x1.108f7ap-117f, 0x1.213596p-85f, 0x1.4a01cep-81f, 0.0f, 0x1.802f38p-25f,
     0x1.9d76e8p-92f, 0x1.62cb36p-36f, 0x1.5ee8dep-33f, 0x1.d39f28p-125f,
     0x1.a0c1d4p-65f, 0x1.656d4cp-45f, 0x1.6bd3bep-62f, 0.0f, 0x1.50045ep-39f,
     0x1.cb6a5ep-108f, 0.0f, 0x1.5642a4p-85f, 0.0f, 0x1.53a9fap-53f, 0.0f,
     0x1.8e64dp-69f, 0x1.9ab1b6p-126f, 0.0f, 0x1.38e4fp-55f, 0.0f, 0.0f,
     0x1.83e99ap-101f, 0.0f, 0.0f, 0x1.da2444p-76f, 0.0f, 0x1.f77e7cp-53f, 0.0f,
     0x1.45ce82p-6f, 0.0f, 0x1.122532p-11f, 0x1.44bcf6p-54f, 0x1.d5b358p-51f,
     0x1.33492p-46f, 0x1.eba6b6p-40f, 0x1.87a4e4p-71f, 0x1.6a05dap-125f,
     0x1.1fcd4ep-52f, 0.0f, 0x1.68751p-47f, 0x1.3d2b3cp-110f, 0x1.7b6b94p-93f, 0.0f,
     0x1.222d6p-54f, 0.0f, 0x1.e7703p-5f, 0x1.ab1d7p-11f, 0x1.44e312p-73f,
     0x1.b70e24p-118f, 0.0f, 0x1.cf785p-62f, 0.0f, 0x1.3f79c8p-47f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.6c80a2p-14f, 0.0f, 0x1.912194p-46f, 0x1.3a2a9cp-11f, 0.0f,
     0x1.e232cp-25f, 0x1.8fad5p-119f, 0.0f, 0x1.772d1ap-29f, 0x1.15390ep-21f, 0.0f,
     0.0f, 0x1.f986fp-48f, 0.0f, 0x1.441a84p-97f, 0x1.080168p-108f, 0.0f,
     0x1.65a1d8p-79f, 0.0f, 0.0f, 0x1.ed130ep-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.21725cp-54f, 0x1.9f5224p-25f, 0.0f, 0.0f, 0x1.62589p-114f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7f917cp-72f, 0.0f, 0x1.418fa6p-62f, 0x1.3d3b5p-34f,
     0.0f, 0.0f, 0.0f, 0x1.b2fffp-25f, 0.0f, 0.0f, 0x1.c7c46cp-31f, 0.0f, 0.0f,
     0x1.b94912p-83f, 0x1.a327aap-89f, 0x1.7af09ap-36f, 0.0f, 0x1.427a74p-116f, 0.0f,
     0x1.90a0bap-100f, 0.0f, 0.0f, 0x1.c9d28p-85f, 0.0f, 0.0f, 0x1.ec3c16p-55f,
     0x1.1e79fp-42f, 0x1.d5f27p-19f, 0x1.259182p-23f, 0x1.20393ep-53f, 0x1.637fc2p-2f,
     0.0f, 0.0f, 0x1.2d0904p-74f, 0x1.07ffbap-126f, 0.0f, 0.0f, 0x1.fd6564p-78f, 0.0f,
     0x1.39781ap-12f, 0.0f, 0x1.c83eb4p-102f, 0x1.33a38p-100f, 0.0f, 0.0f, 0.0f,
     0x1.44d47ep-15f, 0x1.423c1cp-9f, 0.0f, 0.0f, 0x1.15401cp-23f, 0.0f, 0.0f,
     0x1.702ccap-41f, 0x1.c4076p-73f, 0x1.d2feb6p-48f, 0x1.7e486cp-99f, 0.0f,
     0x1.c2306cp-28f, 0x1.f15452p-41f, 0.0f, 0.0f, 0.0f, 0x1.61d052p-114f, 0.0f, 0.0f,
     0x1.7fba94p-52f, 0x1.164a18p-47f, 0x1.d4aecp-15f, 0x1.ca84a2p-105f,
     0x1.c6ff9ap-67f, 0x1.d864e6p-58f, 0.0f, 0x1.f76e2ap-56f, 0x1.0f2ad8p-101f, 0.0f,
     0x1.93f522p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4b6bfp-48f, 0x1.7c87dcp-66f, 0.0f,
     0.0f, 0x1.1908cep-121f, 0.0f, 0x1.33389ep-108f, 0.0f, 0x1.2018dap-94f, 0.0f,
     0x1.0e472p-38f, 0.0f, 0.0f, 0x1.82d5dep-37f, 0x1.857008p-13f, 0.0f,
     0x1.8e2b86p-117f, 0.0f, 0x1.28933p-26f, 0.0f, 0x1.b1c2e2p-54f, 0.0f, 0.0f, 0.0f,
     0x1.34c20cp-44f, 0x1.c2193p-15f, 0.0f, 0x1.a2ea68p-40f, 0x1.c975p-69f, 0.0f,
     0.0f, 0x1.9fb192p-8f, 0.0f, 0.0f, 0x1.64380ep-14f, 0x1.8acbacp-97f,
     0x1.a6f1d2p-119f, 0.0f, 0.0f, 0x1.8a68dap-20f, 0x1.f210f8p-86f, 0.0f,
     0x1.eddeb4p-52f, 0.0f, 0.0f, 0.0f, 0x1.0be814p-90f, 0.0f, 0.0f, 0x1.e4442ap-35f,
     0.0f, 0.0f, 0x1.8827bap-58f, 0.0f, 0.0f, 0x1.f451a2p-71f, 0.0f, 0x1.eca038p-80f,
     0x1.02945ap-46f, 0x1.79fb76p-102f, 0.0f, 0.0f, 0.0f, 0x1.91a5b2p-19f,
     0x1.f2f06cp-98f, 0.0f, 0x1.5a38dep-103f, 0.0f, 0x1.0c370cp-102f, 0x1.414dd8p-78f,
     0x1.73b642p-104f, 0x1.42d9p-69f, 0.0f, 0x1.cce21cp-63f, 0x1.3e0c1cp-81f, 0.0f,
     0.0f, 0x1.77fa64p-14f, 0x1.963e76p-47f, 0x1.43362p-100f, 0x1.83c008p-31f, 0.0f,
     0.0f, 0.0f, 0x1.c43e44p-33f, 0x1.fc7abcp-124f, 0x1.b2d68ap-69f, 0x1.eb36e6p-13f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.be6b3p-62f, 0x1.511c9p-27f, 0x1.cda3c6p-60f,
     0x1.0a723p-30f, 0.0f, 0x1.719372p-116f, 0.0f, 0.0f, 0x1.ba9cdcp-29f,
     0x1.d694d2p-87f, 0.0f, 0x1.13d03p-78f, 0x1p0f, 0x1.4ded3ap-67f, 0x1.94bfcp-106f,
     0x1.b31d3p-44f, 0.0f, 0.0f, 0x1.e5012ep-69f, 0.0f, 0x1.6969bcp-82f, 0.0f,
     0x1.e326cep-97f, 0.0f, 0.0f, 0x1.caee4p-123f, 0.0f, 0x1.d862c6p-90f,
     0x1.327d94p-103f, 0x1.19244p-125f, 0x1.9750c8p-108f, 0.0f, 0.0f, 0.0f,
     0x1.c8348ap-2f, 0x1.4aa4b4p-81f, 0x1.32f16cp-92f, 0x1.366e6p-107f,
     0x1.cc0e2ep-26f, 0x1.1baf34p-124f, 0.0f, 0x1.a160bep-36f, 0x1.2d0a3ep-107f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.37496ep-52f, 0x1.65342ep-31f, 0.0f,
     0x1.44f824p-73f, 0.0f, 0x1.fcf89ap-39f, 0x1.7fbdb2p-66f, 0x1.e937dap-120f,
     0x1.0ded4ep-71f, 0.0f, 0.0f, 0x1.87badep-58f, 0.0f, 0.0f, 0x1.9d368ep-89f,
     0x1.6c7bp-119f, 0.0f, 0x1.ec95d8p-46f, 0x1.5ab958p-119f, 0.0f, 0x1.99444ap-103f,
     0x1.bf1d98p-16f, 0x1.43055p-31f, 0x1.9810b6p-115f, 0x1.79ad7ap-30f,
     0x1.a8e698p-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8039b6p-73f, 0x1.d9e0b8p-125f,
     0x1.a368ecp-118f, 0.0f, 0x1.b863bep-54f, 0x1.56cf18p-82f, 0x1.4dbe72p-103f,
     0x1.785536p-105f, 0x1.9793c8p-74f, 0x1.ba801p-33f, 0x1.f3fb56p-28f, 0.0f,
     0x1.e1884ap-94f, 0.0f, 0x1.129002p-21f, 0.0f, 0.0f, 0.0f, 0x1.1ca782p-34f, 0.0f,
     0.0f, 0x1.b2268ep-82f, 0.0f, 0.0f, 0x1.930cc2p-99f, 0.0f, 0x1.be8ec8p-29f,
     0x1.b60f38p-111f, 0x1.92108ep-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cc23cap-104f,
     0.0f, 0x1.1361f8p-28f, 0x1.7aa34p-62f, 0x1.3e7dd2p-71f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.69ce14p-99f, 0x1.757fcap-32f, 0.0f, 0x1.9660acp-47f, 0x1.4b10bcp-36f,
     0x1.5aedfap-8f, 0x1.437e16p-20f, 0.0f, 0x1.94a68ap-21f, 0.0f, 0x1.354c02p-68f,
     0x1.46b9a6p-94f, 0x1.54d5bap-90f, 0x1.1bfa66p-63f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f4c742p-39f, 0x1.c5e6b6p-66f, 0x1.d0e938p-27f, 0.0f, 0x1.da313ep-17f, 0x1p0f,
     0.0f, 0.0f, 0x1.e82df2p-121f, 0x1.6a313cp-114f, 0.0f, 0x1.c0693ap-82f,
     0x1.f5f0bp-1f, 0x1.500b1cp-28f, 0x1.7e569ep-82f, 0.0f, 0x1.c853e4p-101f, 0.0f,
     0x1.f238b6p-3f, 0.0f, 0x1.7e8f6p-75f, 0.0f, 0.0f, 0x1.9bd898p-16f,
     0x1.3c823p-120f, 0.0f, 0.0f, 0x1.28ddc2p-39f, 0x1.b27502p-45f, 0x1.181f4p-39f,
     0.0f, 0x1.46599p-124f, 0x1.cbb8d2p-90f, 0x1.8a23ep-12f, 0x1.334f9ap-8f,
     0x1.31c27cp-32f, 0.0f, 0.0f, 0x1.5ace7cp-119f, 0.0f, 0x1.55685ep-26f,
     0x1.d5bc1ap-67f, 0x1.840a46p-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5a7f06p-13f, 0.0f, 0x1.934044p-115f, 0.0f, 0x1.6fbd7ap-61f, 0x1.f9b43cp-25f,
     0x1.e4ecb8p-64f, 0x1.c43d84p-95f, 0.0f, 0x1.ab29f8p-123f, 0.0f, 0.0f,
     0x1.c62544p-57f, 0x1.149c6ep-2f, 0.0f, 0x1.188cf6p-13f, 0.0f, 0x1.c850bcp-90f,
     0x1.19500cp-17f, 0.0f, 0x1.d435ecp-15f, 0.0f, 0x1.3a83fap-38f, 0.0f,
     0x1.df4cecp-9f, 0.0f, 0.0f, 0.0f, 0x1.588326p-75f, 0x1.a1a9p-37f, 0.0f,
     0x1.4b144cp-45f, 0x1.6d2a26p-42f, 0.0f, 0.0f, 0.0f, 0x1.30d02cp-109f, 0.0f,
     0x1.26614ep-19f, 0.0f, 0x1.83341ep-87f, 0x1.26b32ep-26f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f2a498p-23f, 0x1.ad3e9ep-115f, 0x1.5f2512p-33f, 0.0f, 0x1.a64caep-82f,
     0x1.5ba07ep-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1d5dd8p-43f, 0.0f, 0.0f,
     0x1.6fed8cp-68f, 0x1.896f92p-112f, 0x1.6ea642p-31f, 0x1.e75026p-24f, 0.0f, 0.0f,
     0x1.23827ep-95f, 0x1.39cad8p-88f, 0x1.87b0fep-15f, 0x1.49b318p-49f, 0.0f,
     0x1.ddde0ep-41f, 0.0f, 0x1.fe8342p-90f, 0x1.20a28cp-106f, 0.0f, 0x1.c00db8p-58f,
     0x1.50e3f8p-18f, 0x1.46a158p-69f, 0x1.07c578p-95f, 0x1.148bcap-117f, 0.0f, 0.0f,
     0x1.5a35b4p-20f, 0.0f, 0x1.4fcfbap-68f, 0.0f, 0.0f, 0.0f, 0x1.6fcb6cp-60f,
     0x1.5c9ed8p-85f, 0.0f, 0.0f, 0x1.92259cp-54f, 0.0f, 0x1.4b4cdp-45f,
     0x1.c7d808p-100f, 0.0f, 0x1.b42e4cp-68f, 0.0f, 0.0f, 0.0f, 0x1.e342dcp-68f,
     0x1.e9deecp-21f, 0x1.cf90f8p-31f, 0x1.ad4d9ep-74f, 0.0f, 0.0f, 0x1.c5fb4cp-67f,
     0.0f, 0x1.417202p-84f, 0x1.9ca40ep-101f, 0.0f, 0x1.8818dap-43f, 0.0f,
     0x1.9de382p-70f, 0.0f, 0x1.e8fa8ap-43f, 0x1.b3b64p-12f, 0.0f, 0.0f, 0.0f,
     0x1.b140f4p-73f, 0x1.1bdefep-23f, 0.0f, 0x1.e68e28p-97f, 0x1.d50cdcp-7f, 0.0f,
     0x1.0b533ep-35f, 0.0f, 0.0f, 0.0f, 0x1.0af62p-51f, 0.0f, 0.0f, 0.0f,
     0x1.9aef38p-38f, 0.0f, 0x1.e429ep-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.25ff82p-14f,
     0.0f, 0.0f, 0x1.a432a4p-107f, 0x1.a35132p-93f, 0x1.162cfep-14f, 0.0f,
     0x1.58e4d8p-65f, 0.0f, 0x1.9db5bp-6f, 0x1.a32848p-73f, 0x1.b64bdap-33f, 0.0f,
     0x1.0eab6p-18f, 0x1.652e4p-123f, 0.0f, 0x1.aeffacp-64f, 0.0f, 0x1.6acb7cp-98f,
     0.0f, 0x1.c79d94p-8f, 0x1.27a494p-105f, 0x1.a247ep-99f, 0.0f, 0.0f, 0.0f,
     0x1.c26912p-112f, 0x1.bb604p-75f, 0x1.926d22p-94f, 0x1.4b695cp-50f, 0.0f,
     0x1.c63016p-70f, 0x1.1e2f54p-106f, 0x1.6602fcp-55f, 0.0f, 0x1.b8c59cp-56f, 0.0f,
     0x1.ace19p-114f, 0.0f, 0.0f, 0.0f, 0x1.9faebcp-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.df54p-22f, 0.0f, 0.0f, 0.0f, 0x1.0dfa3cp-117f, 0.0f, 0.0f, 0x1.95d436p-85f,
     0.0f, 0x1.1df6d6p-90f, 0.0f, 0.0f, 0.0f, 0x1.b299bcp-109f, 0.0f, 0.0f,
     0x1.5bd624p-68f, 0x1.6f7d04p-51f, 0x1.1c585cp-52f, 0.0f, 0x1.a47a04p-1f,
     0x1.864a32p-6f, 0x1.6a043ap-108f, 0x1.0a26ccp-44f, 0.0f, 0x1.a7c306p-60f, 0.0f,
     0.0f, 0x1.967dacp-29f, 0.0f, 0x1.94a09cp-84f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef_float32x8_t_2 global_bench_acc;
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
        Sleef_float32x8_t_2 local_acc;
        int32_t i;
        ml_float8_t tmp0;
        ml_float8_t tmp1;
        ml_float8_t tmp2;
        ml_float8_t tmp3;
        ml_float8_t tmp4;
        ml_float8_t tmp5;
        Sleef_float32x8_t_2 tmp6;
        int32_t tmp7;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1004));){
            ml_float8_t tmp0;
            Sleef_float32x8_t_2 tmp1;
            ml_float8_t tmp2;
            ml_float8_t tmp3;
            ml_float8_t tmp4;
            ml_float8_t tmp5;
            ml_float8_t tmp6;
            ml_float8_t tmp7;
            Sleef_float32x8_t_2 tmp8;
            int32_t tmp9;

            memcpy(&tmp0, ((ml_float8_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            tmp1 = Sleef_finz_sincosf8_u10kvx(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = local_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = local_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef_float32x8_t_2) {.x=tmp4, .y=tmp7});
            local_acc = tmp8;
            tmp9 = i + INT32_C(8);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = local_acc.x;
        tmp2 = tmp0 + tmp1;
        tmp3 = global_bench_acc.y;
        tmp4 = local_acc.y;
        tmp5 = tmp3 + tmp4;
        tmp6 = ((Sleef_float32x8_t_2) {.x=tmp2, .y=tmp5});
        global_bench_acc = tmp6;
        tmp7 = j + INT32_C(1);
        j = tmp7;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_finz_sincosf8_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_sincosf8_u10kvx bench acc {.x=[%a, %a, %a, %a], .y=[%a, %a, %a, %a]}\n", global_bench_acc.x[0], global_bench_acc.x[1], global_bench_acc.x[2], global_bench_acc.x[3], global_bench_acc.y[0], global_bench_acc.y[1], global_bench_acc.y[2], global_bench_acc.y[3]);
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
