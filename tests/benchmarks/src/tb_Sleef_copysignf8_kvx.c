/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_copysignf8_kvx.c --function Sleef_copysignf8_kvx \
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
     0x1.93aca2p-41f, 0.0f, 0x1.ae77bp-42f, 0x1.063646p-21f, 0.0f, 0.0f,
     0x1.1cd17cp-121f, 0.0f, 0x1.3b591ep-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d3a78cp-65f,
     0.0f, 0x1.0c00f6p-74f, 0.0f, 0x1.3fbb8ap-18f, 0.0f, 0.0f, 0x1.a7ed5cp-22f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.146442p-79f, 0x1.d77bfp-10f, 0.0f, 0.0f, 0x1.37968ap-100f,
     0.0f, 0.0f, 0x1p0f, 0x1.cd6978p-124f, 0x1.757dacp-87f, 0.0f, 0.0f,
     0x1.bc92c4p-36f, 0x1.e5ed5p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ff1104p-64f, 0x1.d4a656p-68f, 0.0f, 0x1.74f8b4p-67f, 0x1.50c52cp-2f, 0.0f,
     0.0f, 0x1.e7890ap-93f, 0.0f, 0.0f, 0x1.ba0fe2p-66f, 0.0f, 0x1.358032p-70f,
     0x1.c55a84p-59f, 0.0f, 0x1.533a0ap-22f, 0x1.c59b1p-70f, 0x1.fe5ccep-24f,
     0x1.8b4c7ep-113f, 0.0f, 0.0f, 0.0f, 0x1.bae8f8p-82f, 0x1.0a5398p-108f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f715a4p-116f, 0.0f, 0x1.250eaep-103f,
     0x1.d3349ep-32f, 0x1.7da78p-5f, 0.0f, 0x1.b80338p-99f, 0x1.1322f2p-4f,
     0x1.33544p-92f, 0.0f, 0x1.162dacp-97f, 0x1.b0613cp-77f, 0.0f, 0x1.1ea85ep-122f,
     0x1.593382p-76f, 0.0f, 0x1.e8a19ep-10f, 0.0f, 0.0f, 0x1.4cf68ap-53f, 0.0f, 0.0f,
     0.0f, 0x1.e2cb9p-109f, 0x1.6cbbdep-67f, 0.0f, 0.0f, 0x1.681a72p-87f, 0x1p0f,
     0.0f, 0.0f, 0.0f, 0x1.b92f4ap-85f, 0.0f, 0.0f, 0x1.c6552ap-54f, 0x1.dd53cep-72f,
     0x1.9e2c3ep-49f, 0.0f, 0x1.0ee67ep-24f, 0.0f, 0x1.b31f38p-73f, 0x1.4a26ap-16f,
     0.0f, 0.0f, 0x1.8282ecp-75f, 0.0f, 0x1.93241cp-9f, 0x1.f54872p-11f,
     0x1.56ba6cp-43f, 0.0f, 0.0f, 0.0f, 0x1.bd3646p-24f, 0x1.4e4ba4p-61f,
     0x1.33aae8p-119f, 0x1.64ce8ap-62f, 0x1.7be85p-79f, 0.0f, 0.0f, 0x1.a1ab3p-74f,
     0.0f, 0.0f, 0x1.518ea2p-97f, 0.0f, 0x1.92fbd8p-32f, 0x1.f9a55cp-113f, 0.0f,
     0x1.032936p-55f, 0.0f, 0x1.49825ep-81f, 0x1.791e92p-88f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ceffe2p-38f, 0x1.a029a2p-6f, 0.0f, 0x1.21d48cp-64f, 0x1.db4268p-73f, 0.0f,
     0x1.92f2fp-2f, 0.0f, 0.0f, 0x1.b217dp-28f, 0.0f, 0.0f, 0x1.515a32p-28f, 0.0f,
     0x1.0dfap-63f, 0x1.44ff46p-49f, 0.0f, 0.0f, 0x1.0b0b88p-20f, 0.0f,
     0x1.ac2596p-5f, 0.0f, 0.0f, 0.0f, 0x1.7b0a56p-97f, 0x1.e5126ep-5f, 0.0f, 0.0f,
     0.0f, 0x1.b8540ap-48f, 0x1.76a838p-93f, 0.0f, 0.0f, 0.0f, 0x1.b4e44cp-107f, 0.0f,
     0x1.76669cp-108f, 0.0f, 0.0f, 0x1.947052p-66f, 0.0f, 0.0f, 0.0f, 0x1.4f7c6p-106f,
     0x1.6bd24ap-36f, 0.0f, 0x1.af6f16p-56f, 0.0f, 0.0f, 0x1.94504p-37f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1cdb5cp-107f, 0x1.7a429ep-122f,
     0x1.643c96p-78f, 0.0f, 0.0f, 0.0f, 0x1.12e7fep-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.2977acp-112f, 0x1.ca1586p-51f, 0.0f, 0x1.4c33b6p-83f, 0x1.730aeep-92f,
     0x1.b23946p-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.83d5d4p-120f, 0.0f,
     0x1.f9037ep-21f, 0.0f, 0.0f, 0x1.1d4c1cp-7f, 0x1.8b6aa2p-124f, 0x1.224706p-113f,
     0x1.43fa8ap-43f, 0x1.5693b6p-105f, 0x1.2b6752p-82f, 0.0f, 0.0f, 0x1.c39244p-119f,
     0.0f, 0x1.f4890ap-108f, 0x1.b060b4p-113f, 0x1.e9a6eap-12f, 0x1.80a34cp-43f,
     0x1.d9afcep-97f, 0.0f, 0x1.344f76p-53f, 0x1.681792p-109f, 0.0f, 0x1.3d8b24p-70f,
     0x1.254c7ap-38f, 0.0f, 0x1.84988ep-50f, 0x1.e35a86p-123f, 0.0f, 0x1.3f89ccp-111f,
     0.0f, 0.0f, 0x1.5d3d22p-49f, 0.0f, 0.0f, 0x1.a02612p-97f, 0.0f, 0.0f,
     0x1.e0825ap-75f, 0.0f, 0x1.d69e48p-117f, 0.0f, 0x1.9d422cp-31f, 0.0f, 0.0f,
     0x1.25a9bap-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.28e042p-94f, 0x1.1b523ap-116f,
     0x1.f9fa36p-21f, 0x1.ea66c2p-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2f164ap-42f,
     0x1.e626a2p-61f, 0.0f, 0x1.85c13ap-22f, 0x1.d35c7p-3f, 0.0f, 0.0f,
     0x1.afb438p-30f, 0.0f, 0x1.c740d8p-92f, 0x1.01c586p-73f, 0.0f, 0.0f, 0.0f,
     0x1.902b44p-69f, 0.0f, 0.0f, 0.0f, 0x1.f1ccccp-110f, 0x1.8c3726p-55f, 0.0f, 0.0f,
     0x1.c80e12p-95f, 0.0f, 0x1.46c26cp-88f, 0.0f, 0.0f, 0x1.1cb7aap-48f, 0.0f,
     0x1.389308p-121f, 0.0f, 0x1.9f096ap-66f, 0.0f, 0x1.c0cde6p-83f, 0.0f, 0.0f,
     0x1.80ffd4p-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.87a532p-61f, 0.0f,
     0x1.1f743ap-50f, 0x1.e6f652p-33f, 0x1.15267ep-83f, 0.0f, 0x1.e324fcp-78f,
     0x1.789922p-87f, 0.0f, 0x1.12f2fp-5f, 0x1.a91f9p-49f, 0x1.31ab48p-34f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ee8b76p-116f, 0x1.417e9ap-69f, 0.0f, 0.0f, 0x1.2a0fcep-68f,
     0.0f, 0x1.f8061cp-72f, 0x1.d9d18p-2f, 0.0f, 0x1.9811ecp-106f, 0x1.7dfacep-70f,
     0x1.ec0dbp-29f, 0x1.8c7d7cp-37f, 0.0f, 0.0f, 0x1.05a5cep-121f, 0.0f,
     0x1.3a5fc8p-4f, 0.0f, 0x1.64aa8p-84f, 0x1.a25e7p-69f, 0x1.17217cp-4f, 0.0f,
     0x1.0edd18p-47f, 0x1.9db2f6p-9f, 0x1.9228bep-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.830f5ep-94f, 0.0f, 0x1.51beb6p-35f, 0.0f, 0x1p0f, 0.0f, 0x1.0b23e8p-81f,
     0x1.f8b964p-108f, 0x1.cb2efp-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.68a18p-109f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.4ca502p-78f, 0x1.de5a2ap-126f, 0.0f, 0x1.e4721ap-97f,
     0x1.9f0d0cp-64f, 0.0f, 0.0f, 0x1.354f96p-69f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f4ed5ap-47f, 0.0f, 0x1.00ad36p-106f, 0.0f, 0.0f, 0.0f, 0x1.228e1cp-55f, 0.0f,
     0.0f, 0x1.6368dap-80f, 0x1.776bfap-117f, 0.0f, 0.0f, 0x1.93693p-70f,
     0x1.fdae2ap-85f, 0x1.3160bcp-54f, 0x1.a33272p-13f, 0x1.cba266p-10f,
     0x1.9f1ea6p-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e63dfcp-124f, 0.0f, 0x1.c481dap-89f,
     0.0f, 0x1.e65f26p-10f, 0.0f, 0.0f, 0x1.154c3ap-36f, 0.0f, 0.0f, 0x1.a44608p-90f,
     0x1.5ff742p-112f, 0.0f, 0x1.673dap-123f, 0x1.75b24ap-60f, 0x1.ff2ebcp-100f, 0.0f,
     0.0f, 0x1.71d4c2p-109f, 0x1.cda6fap-36f, 0x1.1fa00ep-90f, 0.0f, 0.0f,
     0x1.985a8cp-69f, 0.0f, 0x1.3babf2p-78f, 0.0f, 0.0f, 0.0f, 0x1.3f84fap-33f,
     0x1.76fcdap-3f, 0x1.88bbcap-92f, 0.0f, 0.0f, 0x1.69b80cp-63f, 0x1.915d9cp-119f,
     0.0f, 0x1.830c36p-35f, 0x1.986eb2p-88f, 0x1.6e9298p-72f, 0x1.b81de2p-47f, 0.0f,
     0x1.070162p-22f, 0.0f, 0.0f, 0x1.a6cd7ap-57f, 0.0f, 0.0f, 0x1.ec6132p-69f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a61beap-91f, 0.0f, 0x1.893bb2p-43f, 0.0f, 0.0f,
     0x1.c5ab64p-17f, 0x1.eb8eb6p-77f, 0.0f, 0.0f, 0.0f, 0x1.9a9968p-62f, 0.0f,
     0x1.3c6b0ep-20f, 0.0f, 0.0f, 0x1.4dbdeap-102f, 0x1.b9c73cp-114f, 0.0f,
     0x1.4b1518p-66f, 0x1.9d9674p-14f, 0x1.a86d8cp-82f, 0.0f, 0x1.a303f2p-30f, 0.0f,
     0x1.994fd6p-33f, 0.0f, 0.0f, 0.0f, 0x1.218244p-49f, 0x1.c9449ep-73f,
     0x1.7fb7cep-45f, 0x1.77588ap-109f, 0.0f, 0.0f, 0x1.473662p-42f, 0.0f,
     0x1.78016ap-108f, 0x1.c4c1f8p-82f, 0x1.95c36cp-19f, 0x1.e9c3bap-36f,
     0x1.ef3c66p-37f, 0x1.cba224p-29f, 0x1.d0aa94p-79f, 0.0f, 0.0f, 0x1.18112ap-25f,
     0.0f, 0.0f, 0.0f, 0x1.da2f1ap-7f, 0.0f, 0x1.2d21bap-30f, 0.0f, 0x1.a33baap-19f,
     0.0f, 0.0f, 0x1.36310ep-86f, 0x1.ec790cp-41f, 0.0f, 0.0f, 0.0f, 0x1.add90ap-2f,
     0x1.f663d6p-118f, 0.0f, 0x1.e09f1cp-26f, 0.0f, 0.0f, 0.0f, 0x1.a95f6ap-92f, 0.0f,
     0x1.af48dcp-111f, 0x1.0e7612p-46f, 0.0f, 0x1.3b8ba2p-51f, 0x1.a6e058p-26f, 0.0f,
     0x1.d4e13ep-18f, 0.0f, 0x1.a5310ap-12f, 0.0f, 0x1.f07cfap-56f, 0.0f, 0.0f, 0.0f,
     0x1.c3368ap-124f, 0.0f, 0x1.a75ab6p-115f, 0.0f, 0x1.11bc14p-32f, 0x1.943f3cp-94f,
     0.0f, 0.0f, 0x1.ca0e8p-43f, 0x1.a382bcp-117f, 0x1.a70eeap-90f, 0x1.069d46p-59f,
     0x1.6e4784p-31f, 0x1.7a7348p-98f, 0.0f, 0.0f, 0x1.ccdc8p-57f, 0x1.95fc7p-61f,
     0.0f, 0.0f, 0.0f, 0x1.a6297ap-76f, 0x1.cdc60ap-6f, 0x1.428b78p-38f,
     0x1.96691cp-40f, 0x1.faf6d2p-101f, 0.0f, 0.0f, 0x1.8d4aep-114f, 0.0f,
     0x1.c6aaf6p-39f, 0.0f, 0x1.de058p-122f, 0.0f, 0.0f, 0x1.95d34p-10f,
     0x1.bfe7e4p-100f, 0x1.481cfap-92f, 0x1.57e5c4p-63f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ae9cd6p-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.79e048p-120f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.37be08p-126f, 0.0f, 0x1.a90a96p-115f, 0x1.6f6594p-35f,
     0.0f, 0.0f, 0x1.0f3f4cp-116f, 0.0f, 0x1.cb2978p-19f, 0.0f, 0x1.77afa4p-39f, 0.0f,
     0x1.37cbcep-47f, 0x1.7a1fe4p-112f, 0.0f, 0.0f, 0x1.2c4ffcp-53f, 0x1.cb4c26p-68f,
     0x1.646cfap-112f, 0.0f, 0x1.f8bbf6p-66f, 0.0f, 0x1p0f, 0.0f, 0.0f,
     0x1.b62c4p-78f, 0.0f, 0x1.f6b8c8p-61f, 0x1.0afc52p-98f, 0.0f, 0x1.7be6ap-125f,
     0.0f, 0x1.6ef56cp-84f, 0x1.acd6d8p-54f, 0x1.5755dcp-68f, 0x1.cbe5b8p-87f,
     0x1.6e02cp-81f, 0x1.d89376p-110f, 0.0f, 0.0f, 0x1.88051p-63f, 0x1.92f05ap-96f,
     0.0f, 0x1.ae1a2p-64f, 0x1.924338p-122f, 0x1.044eaap-53f, 0x1.42dffcp-15f,
     0x1.dba6bcp-73f, 0x1.e9c496p-47f, 0x1.6f4a9ep-104f, 0x1.e7652ap-82f, 0.0f, 0.0f,
     0x1.5b5f7p-6f, 0x1.2b387cp-72f, 0x1.215184p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cd513cp-97f, 0.0f, 0x1.4dc96ep-80f, 0x1.3c9678p-81f, 0x1.7e4e82p-20f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d7dc1ep-54f, 0x1.23d56ep-40f, 0x1.1c5782p-70f,
     0x1.926fdp-125f, 0x1.14a2f4p-8f, 0x1.a00e48p-54f, 0.0f, 0.0f, 0x1.bcf074p-121f,
     0x1.325abcp-117f, 0x1.20b522p-79f, 0.0f, 0x1.4c9644p-47f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4fbfbcp-84f, 0.0f, 0x1.e764f6p-119f, 0x1.7d740cp-93f, 0.0f, 0.0f,
     0x1.0c8b82p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e4505ap-84f, 0.0f, 0.0f,
     0x1.1a368ep-55f, 0.0f, 0.0f, 0.0f, 0x1.fd54b6p-101f, 0.0f, 0.0f, 0.0f,
     0x1.eeb6c4p-102f, 0x1.f7a762p-89f, 0x1.0be95ep-100f, 0.0f, 0x1.28eca6p-25f,
     0x1.f8871p-107f, 0x1.f47736p-116f, 0x1.9c7b7ep-108f, 0x1.9ede7ap-59f,
     0x1.fe8cb4p-12f, 0x1.54dc6ap-102f, 0.0f, 0x1.67152ap-50f, 0.0f, 0.0f,
     0x1.e75254p-59f, 0x1.a970e2p-94f, 0x1.ca4652p-37f, 0x1.1ff148p-117f,
     0x1.d55874p-101f, 0.0f, 0x1.b92318p-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.73a6aep-122f, 0x1.9b35eep-3f, 0.0f, 0.0f, 0x1.69ea14p-60f, 0.0f, 0.0f,
     0x1.30a3e8p-49f, 0x1.189504p-16f, 0x1.bfe596p-78f, 0.0f, 0.0f, 0x1.4051b4p-6f,
     0x1.3ca126p-38f, 0x1.fc4ef8p-5f, 0x1.5b3864p-65f, 0.0f, 0.0f, 0.0f,
     0x1.bf8aap-89f, 0x1.c144b2p-123f, 0.0f, 0x1.cc8fdp-56f, 0.0f, 0x1.227a58p-122f,
     0x1.a00736p-119f, 0.0f, 0.0f, 0.0f, 0x1.7490cep-52f, 0.0f, 0.0f, 0x1.73dee4p-98f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.74daa8p-116f, 0x1.b9845p-69f, 0.0f,
     0.0f, 0x1.26687ap-119f, 0x1.e0e93cp-51f, 0x1.137c54p-71f, 0x1.acb97p-59f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1d5032p-89f, 0.0f, 0.0f, 0x1.229622p-24f, 0.0f,
     0x1.7084b4p-118f, 0x1.84355ep-68f, 0x1.2bcfe4p-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.363ce2p-106f, 0x1.7d5eb8p-6f, 0.0f, 0.0f, 0.0f, 0x1.33b9bcp-116f, 0.0f,
     0x1.555112p-113f, 0x1.445c66p-52f, 0x1.404284p-46f, 0.0f, 0.0f, 0x1.f6977cp-68f,
     0x1.623d58p-116f, 0.0f, 0.0f, 0x1.75b76ep-102f, 0x1.5482b4p-27f, 0.0f,
     0x1.7c5a8ep-53f, 0x1.7e3274p-114f, 0x1.92f42ap-64f, 0x1.c08126p-121f, 0.0f,
     0x1p0f, 0x1.adacc8p-103f, 0.0f, 0x1.2095d2p-7f, 0.0f, 0.0f, 0x1.4d34b2p-117f,
     0.0f, 0x1.436c4cp-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9b2578p-9f, 0.0f,
     0.0f, 0x1.3fa54ep-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.476c2p-40f, 0.0f,
     0x1.2353e6p-121f, 0x1.7ec95p-49f, 0x1.f0b15cp-83f, 0x1.603c48p-13f,
     0x1.b58dc6p-45f, 0.0f, 0x1.28de9ep-19f, 0x1.8929bp-5f, 0.0f, 0x1.01447ap-100f,
     0x1.d5d874p-59f, 0.0f, 0.0f, 0x1.0094acp-53f, 0.0f, 0x1.54f6dap-96f, 0.0f, 0.0f,
     0x1.94f0ap-53f, 0x1.d44b08p-118f, 0x1.bc5e2p-123f, 0.0f, 0.0f, 0x1.38735ep-93f,
     0x1.49ec3ap-110f, 0x1.775468p-67f, 0.0f, 0x1.8edc1p-71f, 0x1.7d955ep-109f,
     0x1.47d09p-35f, 0.0f, 0x1.9afdb4p-67f, 0x1.9f218ap-103f, 0.0f, 0.0f,
     0x1.96e75cp-36f, 0.0f, 0.0f, 0x1.84c858p-104f, 0.0f, 0x1.f16b56p-33f,
     0x1.c9233ap-28f, 0.0f, 0x1.75aeb4p-50f, 0.0f, 0.0f, 0.0f, 0x1.e30dc4p-49f,
     0x1.abaa5ep-99f, 0x1.74d24cp-88f, 0x1.4f3fe4p-66f, 0x1.239e62p-98f, 0.0f, 0.0f,
     0x1.147ae8p-95f, 0x1.b6e594p-83f, 0x1.cc6d2ap-16f, 0x1.809bfp-17f,
     0x1.4d2aeep-63f, 0x1.9c13ep-78f, 0x1.fdd44cp-59f, 0x1.734a9ep-69f, 0.0f, 0.0f,
     0x1.143f44p-81f, 0x1.c9b9dcp-24f, 0.0f, 0x1.f60266p-28f, 0.0f, 0.0f,
     0x1.41e60cp-79f, 0.0f, 0x1.9d73aap-70f, 0.0f, 0x1.29357ap-55f, 0.0f, 0.0f, 0.0f,
     0x1.a3f13ap-31f, 0.0f, 0x1.061652p-109f, 0x1.85a242p-122f, 0.0f, 0x1.5f8ff8p-74f,
     0.0f, 0.0f, 0x1.f546f2p-103f, 0x1.c532e8p-69f, 0.0f, 0x1.351c1ep-99f,
     0x1.46d786p-11f, 0.0f, 0.0f, 0x1.8a952ap-125f, 0.0f, 0.0f, 0x1.c01c4cp-17f, 0.0f,
     0x1.1c827p-34f, 0.0f, 0x1.6f4d74p-55f, 0.0f, 0x1.d8f29p-5f, 0.0f,
     0x1.37b98cp-35f, 0.0f, 0x1.bbfa6p-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b54a24p-40f, 0x1.d18396p-73f, 0x1.005642p-17f, 0x1.460618p-111f, 0.0f,
     0x1.0360a2p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f
};
static const float external_bench_wrapper_input_table_arg1[1008]  = {
     0.0f, 0x1.7f80bap-42f, 0x1.155d62p-97f, 0.0f, 0.0f, 0x1.81d3c4p-74f,
     0x1.12bf6p-112f, 0.0f, 0.0f, 0x1.659adap-91f, 0x1.bcbc74p-36f, 0.0f, 0.0f,
     0x1.61316ep-67f, 0.0f, 0x1.7a1adp-89f, 0x1.eef8dp-11f, 0x1.0a2356p-97f,
     0x1.6ab7p-50f, 0.0f, 0x1.668266p-8f, 0x1.5f9898p-112f, 0x1.f556fap-23f, 0.0f,
     0x1.bb8146p-106f, 0x1.63da26p-86f, 0x1.af9e9cp-3f, 0x1.96af92p-39f, 0.0f,
     0x1.719cap-93f, 0x1.a55e0cp-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a25b16p-53f,
     0x1.2d7612p-101f, 0.0f, 0.0f, 0x1.b1d20cp-105f, 0.0f, 0.0f, 0x1.b7a8e2p-56f,
     0x1.1c0a6ap-48f, 0x1.e6b448p-39f, 0x1.5f541ep-106f, 0x1.0f2136p-107f,
     0x1.ea4104p-97f, 0x1.8a97cp-39f, 0.0f, 0x1.b88808p-64f, 0.0f, 0x1.1d2dbcp-64f,
     0.0f, 0x1.65440ap-35f, 0x1.426b9ap-8f, 0.0f, 0x1.7ee88p-2f, 0.0f,
     0x1.4daa7cp-42f, 0x1.94289ep-6f, 0.0f, 0.0f, 0.0f, 0x1.9fc75ep-82f, 0.0f,
     0x1.e4329ap-117f, 0x1.1cc60ap-76f, 0x1.0bdff2p-11f, 0.0f, 0.0f, 0.0f,
     0x1.176962p-44f, 0.0f, 0.0f, 0x1.8d7b3p-67f, 0.0f, 0x1.30152p-65f,
     0x1.a080d8p-91f, 0.0f, 0x1.b31882p-13f, 0x1.f3b03p-93f, 0x1.375044p-124f, 0.0f,
     0.0f, 0.0f, 0x1.f17608p-28f, 0x1.f8bc5p-75f, 0x1.62e104p-101f, 0x1.fbb95p-61f,
     0x1.96f214p-63f, 0.0f, 0x1.e30a4cp-96f, 0x1.db9a3ep-4f, 0.0f, 0.0f,
     0x1.6308fp-5f, 0.0f, 0.0f, 0x1.f745bp-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f26a22p-122f, 0x1.8bd85ap-75f, 0.0f, 0x1.435a42p-42f, 0x1.1f5066p-90f,
     0x1.d6853ep-14f, 0.0f, 0x1.ac80eep-98f, 0x1.61761p-46f, 0x1.c0169ep-2f, 0.0f,
     0x1.6d2c6cp-14f, 0x1.aa01p-66f, 0x1.4af9p-107f, 0x1.d6dcacp-84f, 0.0f,
     0x1.c2757ep-115f, 0.0f, 0x1.f4f00ep-7f, 0.0f, 0x1.61bdf8p-59f, 0.0f,
     0x1.a7dc8ep-29f, 0x1.cd3028p-83f, 0.0f, 0.0f, 0x1.2c1ad4p-118f, 0x1.11b8b2p-49f,
     0x1.239494p-29f, 0.0f, 0x1.f5664ep-124f, 0.0f, 0.0f, 0x1.829172p-108f,
     0x1.d249p-80f, 0x1.f8dfdep-73f, 0x1.dd2686p-115f, 0x1.115dfcp-92f,
     0x1.121ac2p-108f, 0.0f, 0x1.5b3d48p-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.5a2156p-113f, 0x1.be0cdp-55f, 0.0f, 0x1.52aa04p-63f,
     0x1.0ef1fap-40f, 0x1.86deaap-79f, 0.0f, 0x1.dd4cdep-65f, 0x1.e1a14ap-3f, 0.0f,
     0x1.3189p-124f, 0.0f, 0x1.dcbc6ap-5f, 0.0f, 0x1.1f7832p-59f, 0x1.8ec4a4p-112f,
     0.0f, 0.0f, 0.0f, 0x1.c0bc12p-9f, 0x1.7cb844p-30f, 0x1.98e0a4p-126f,
     0x1.fa0c24p-104f, 0x1.9fb57ep-13f, 0.0f, 0.0f, 0x1.271546p-8f, 0.0f, 0.0f,
     0x1.86f168p-107f, 0x1.303efap-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3f4f98p-5f,
     0x1.e7f37ep-125f, 0x1.f64fbcp-43f, 0x1.7360e4p-43f, 0x1.7386fcp-90f, 0.0f,
     0x1.7b028p-54f, 0x1.57c85ap-23f, 0x1.af5c88p-54f, 0.0f, 0x1.3db172p-36f,
     0x1.9dd8dep-76f, 0x1.b2f1f2p-37f, 0x1.4401b6p-56f, 0.0f, 0x1.7717fep-93f, 0.0f,
     0.0f, 0.0f, 0x1.3191bcp-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bb826ep-62f, 0.0f, 0x1.3dbb8ap-102f, 0x1.9c538ap-61f, 0.0f, 0.0f, 0.0f,
     0x1.a0a798p-94f, 0x1.c37d4cp-17f, 0x1.75e9cp-42f, 0.0f, 0.0f, 0x1.fa5164p-43f,
     0x1.56088ap-46f, 0.0f, 0.0f, 0x1.ced3b4p-38f, 0.0f, 0x1.97ea8ap-113f,
     0x1.643f1p-42f, 0x1.e6da82p-69f, 0x1.e0117ap-117f, 0x1.e642c2p-27f, 0.0f,
     0x1.42dd9cp-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ae1656p-125f, 0.0f, 0.0f,
     0x1.8535b8p-7f, 0x1.5f7458p-57f, 0x1.81f92cp-109f, 0x1.190d64p-85f, 0.0f,
     0x1.c1dc3p-69f, 0x1.7742e6p-36f, 0.0f, 0.0f, 0x1.fe6c4p-93f, 0.0f,
     0x1.a213d8p-72f, 0.0f, 0x1.958c22p-30f, 0x1.9dd24ep-99f, 0x1.24fa28p-13f, 0.0f,
     0.0f, 0x1.8cf9c2p-58f, 0.0f, 0.0f, 0x1.d4f30cp-69f, 0.0f, 0.0f, 0x1.3045ecp-15f,
     0.0f, 0x1.34de3ap-96f, 0.0f, 0.0f, 0x1.6c836p-115f, 0.0f, 0x1.8343cep-111f,
     0x1.a2e6eap-122f, 0.0f, 0x1.b5dc3p-112f, 0.0f, 0x1.0ca7a4p-86f, 0.0f,
     0x1.50672cp-8f, 0.0f, 0x1.e34bb4p-103f, 0.0f, 0x1.3959ep-38f, 0x1.147ee2p-37f,
     0x1.b028fcp-101f, 0x1.dee1a4p-72f, 0x1.b66b84p-109f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a76022p-44f, 0x1.1f4c42p-78f, 0.0f, 0x1.c949bep-105f, 0.0f, 0.0f,
     0x1.a39cfap-91f, 0x1.c6143ep-113f, 0x1.5c9ef4p-124f, 0x1.68b8p-33f, 0.0f, 0.0f,
     0x1.ca7f4cp-104f, 0x1.2b758cp-5f, 0.0f, 0.0f, 0.0f, 0x1.aed17cp-120f, 0.0f,
     0x1.3436cp-33f, 0x1p0f, 0.0f, 0.0f, 0x1.b50362p-8f, 0.0f, 0x1.2044bcp-23f,
     0x1.11386ep-31f, 0x1.4509d8p-4f, 0x1.7e03d6p-10f, 0.0f, 0x1.e977e4p-20f,
     0x1.f774fp-122f, 0.0f, 0x1.2e8ddp-3f, 0.0f, 0x1.2173a6p-39f, 0x1.6c7c8p-100f,
     0x1.e78bb4p-26f, 0.0f, 0x1.c791eep-51f, 0.0f, 0x1.af68dep-38f, 0.0f, 0.0f,
     0x1.04fbdap-22f, 0.0f, 0.0f, 0x1.8f3c62p-56f, 0.0f, 0.0f, 0x1.0ea04p-37f, 0.0f,
     0x1.76b846p-123f, 0x1.f96db4p-33f, 0x1.9df6b2p-16f, 0x1.7769bep-21f, 0.0f,
     0x1.ff49ep-72f, 0x1.a0e052p-22f, 0.0f, 0x1.c9bdp-24f, 0x1.6474dep-66f, 0.0f,
     0.0f, 0x1.e04408p-1f, 0x1.9d6984p-61f, 0x1.1d6ceep-111f, 0.0f, 0.0f,
     0x1.ec6264p-89f, 0x1.29ff72p-73f, 0x1.f424a6p-31f, 0x1.9148f4p-65f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.593ea4p-44f, 0.0f, 0x1.48cc8cp-124f, 0x1.5daafp-19f,
     0x1.e70edcp-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d49d0cp-78f, 0x1.3bbecap-93f,
     0x1.2acf16p-35f, 0x1.b7c444p-118f, 0x1.bd4b6ep-95f, 0.0f, 0x1.b5df88p-61f, 0.0f,
     0x1.6fdbd4p-13f, 0.0f, 0.0f, 0x1.3efb24p-100f, 0.0f, 0.0f, 0x1.d50e3cp-52f,
     0x1.a84fc2p-89f, 0x1.c418cp-16f, 0.0f, 0x1.e5886cp-109f, 0x1.a276eep-81f, 0.0f,
     0x1.91608cp-60f, 0x1.ccb2e8p-30f, 0.0f, 0x1.df6d1cp-91f, 0.0f, 0.0f, 0.0f,
     0x1.3b3c36p-85f, 0.0f, 0x1.928462p-60f, 0x1.976afep-31f, 0x1.40924ep-94f, 0.0f,
     0x1.2c4cf8p-99f, 0.0f, 0.0f, 0.0f, 0x1.9945cp-54f, 0.0f, 0x1.ad2862p-16f, 0.0f,
     0.0f, 0x1.9b4312p-80f, 0x1.ff8a78p-91f, 0x1.524b86p-74f, 0x1.adbd44p-63f, 0.0f,
     0x1.53cbf6p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8c6404p-23f, 0.0f,
     0x1.bd255ep-69f, 0x1.8da2a6p-52f, 0x1.e970e4p-95f, 0x1.1579f2p-76f,
     0x1.f8f4fcp-78f, 0x1.f221f6p-48f, 0x1.750d7p-75f, 0.0f, 0.0f, 0.0f,
     0x1.dc36bp-46f, 0x1.0e210ep-122f, 0x1.7f17acp-40f, 0.0f, 0.0f, 0x1.124bacp-6f,
     0x1.b1604p-119f, 0x1.b73684p-75f, 0.0f, 0x1.f3e59ap-93f, 0x1.fb3b5ep-88f, 0.0f,
     0.0f, 0x1.ed57f6p-15f, 0.0f, 0x1.be4ef6p-26f, 0x1.c661bcp-37f, 0x1p0f, 0.0f,
     0x1.9d8292p-40f, 0x1.07614p-103f, 0x1.54533ap-30f, 0.0f, 0x1.d1d92ap-87f,
     0x1.d643e8p-73f, 0x1.da7822p-28f, 0.0f, 0x1.2a79e6p-118f, 0.0f, 0x1.9bbae8p-105f,
     0x1.bdec6ap-42f, 0.0f, 0.0f, 0x1.0dbeecp-67f, 0.0f, 0.0f, 0x1.cc063ep-111f,
     0x1.f8716ap-122f, 0.0f, 0x1.efe24ap-50f, 0x1.1af91cp-96f, 0x1.6317eep-85f,
     0x1.ac3aaep-118f, 0.0f, 0.0f, 0x1.3a646ep-121f, 0x1.c3b3b4p-55f, 0.0f,
     0x1.fdfap-57f, 0x1.b70f38p-5f, 0.0f, 0x1.26d13cp-98f, 0x1.df4882p-96f, 0.0f,
     0x1.e57954p-80f, 0.0f, 0x1.bf7f1cp-123f, 0.0f, 0.0f, 0.0f, 0x1.7b041ep-93f, 0.0f,
     0.0f, 0.0f, 0x1.bb1c1ap-121f, 0.0f, 0x1.a2d0e6p-123f, 0.0f, 0x1.43959p-85f,
     0x1.0f26b4p-92f, 0x1.2a5a2ap-114f, 0.0f, 0x1.6dc2aep-37f, 0.0f, 0x1.027dacp-62f,
     0x1.2d2726p-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7b72eap-84f,
     0x1.042636p-121f, 0.0f, 0.0f, 0x1.03b4b6p-16f, 0.0f, 0.0f, 0x1.bc7e3cp-78f,
     0x1.3db7b8p-48f, 0x1.aae4bcp-13f, 0x1.fc1f2ap-126f, 0.0f, 0x1.31b792p-72f,
     0x1.2e0718p-20f, 0x1.bbd65cp-43f, 0x1.7344aap-126f, 0.0f, 0.0f, 0x1.7cd364p-10f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b57b6cp-106f, 0x1.614c26p-38f, 0x1.cfc86ap-20f,
     0x1.27ea1cp-122f, 0.0f, 0x1.c12d2p-105f, 0.0f, 0x1.10f34p-27f, 0x1.0ff92cp-80f,
     0x1.41228p-118f, 0x1.542706p-14f, 0.0f, 0x1.9b0286p-59f, 0.0f, 0x1.9c4446p-45f,
     0x1.06e364p-11f, 0.0f, 0.0f, 0.0f, 0x1.52c782p-81f, 0.0f, 0x1.bb2d26p-32f,
     0x1.4848b8p-12f, 0x1.66addap-41f, 0x1.44c82ap-106f, 0x1.e28d16p-81f, 0.0f,
     0x1.290a38p-8f, 0.0f, 0x1.a0a72ap-62f, 0x1.136c02p-19f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e8e5fap-82f, 0.0f, 0.0f, 0.0f, 0x1.58e67p-114f, 0.0f, 0.0f,
     0x1.228d22p-122f, 0.0f, 0.0f, 0x1.4827e6p-78f, 0x1.a4f198p-42f, 0x1.96ff4ep-111f,
     0x1.5e9f02p-110f, 0.0f, 0x1.edeb5ep-117f, 0x1.c0e8cap-54f, 0x1.0f6336p-60f, 0.0f,
     0x1.27a7ccp-9f, 0.0f, 0x1.ea1b42p-47f, 0x1.856364p-107f, 0x1.fa9e4ap-5f, 0.0f,
     0x1.523f28p-96f, 0x1.b2142p-2f, 0x1.98f0b2p-62f, 0.0f, 0x1.a79cbap-54f,
     0x1.a7c168p-4f, 0x1.6f50a6p-82f, 0x1.a0c1bcp-123f, 0x1.72491p-102f, 0.0f,
     0x1.184a06p-124f, 0.0f, 0x1.771432p-96f, 0x1.f91a1ep-27f, 0.0f, 0x1.9f6b5ap-85f,
     0x1.b23ffcp-126f, 0x1.28df2p-81f, 0x1.a94146p-38f, 0.0f, 0x1.7ffe16p-84f,
     0x1.b88cc2p-80f, 0x1.8929e4p-110f, 0.0f, 0.0f, 0.0f, 0x1.f5f13ep-84f,
     0x1.46d11cp-6f, 0x1.a314c2p-117f, 0.0f, 0.0f, 0x1.aac7bp-110f, 0.0f,
     0x1.6cfc3cp-103f, 0x1.ac5e54p-48f, 0.0f, 0.0f, 0x1.6e4be8p-126f, 0.0f,
     0x1.bbd5f6p-55f, 0.0f, 0.0f, 0.0f, 0x1.cfa134p-124f, 0.0f, 0x1.1e822cp-59f,
     0x1.159c8cp-34f, 0x1.7984a2p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f3f988p-122f,
     0x1.82c05cp-99f, 0.0f, 0.0f, 0.0f, 0x1.f3d202p-27f, 0.0f, 0x1.7b0788p-40f,
     0x1.560a6ep-31f, 0x1.5cc8dep-55f, 0.0f, 0.0f, 0x1.f38038p-98f, 0.0f,
     0x1.188be2p-119f, 0.0f, 0.0f, 0x1.4d6b4ep-18f, 0x1.52c23ap-79f, 0x1.c1a5eap-70f,
     0x1.ec935ap-95f, 0x1.8a80bep-74f, 0.0f, 0.0f, 0x1.85c56p-73f, 0.0f,
     0x1.9ae75cp-123f, 0.0f, 0x1.a6b4e4p-9f, 0x1.753f02p-114f, 0.0f, 0x1.be858p-44f,
     0.0f, 0.0f, 0x1.2215c4p-37f, 0.0f, 0.0f, 0x1.2299b2p-100f, 0.0f,
     0x1.790136p-103f, 0x1.8c3d94p-99f, 0.0f, 0x1.dce85ap-10f, 0.0f, 0.0f,
     0x1.ffe1e6p-31f, 0x1.765678p-12f, 0x1.818cd4p-28f, 0.0f, 0x1.414184p-126f, 0.0f,
     0.0f, 0.0f, 0x1.193c5cp-116f, 0.0f, 0.0f, 0x1.4e6fd6p-59f, 0x1.a28712p-52f, 0.0f,
     0x1.ed3f3p-31f, 0.0f, 0x1.e8832ap-9f, 0x1.ffebd8p-46f, 0x1.9224ecp-31f,
     0x1.e02ebp-30f, 0x1.59db96p-96f, 0.0f, 0.0f, 0x1.9f7dep-63f, 0x1.e2555p-113f,
     0.0f, 0.0f, 0x1.47b47p-52f, 0.0f, 0.0f, 0x1.c2e034p-65f, 0.0f, 0.0f,
     0x1.7474fep-78f, 0x1.cb9298p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.970006p-91f,
     0x1.3f97b2p-118f, 0.0f, 0x1.c900bap-55f, 0x1.2ae164p-50f, 0x1.1d06c8p-117f,
     0x1.79e5cep-10f, 0.0f, 0x1.10579ap-7f, 0.0f, 0x1.992daap-37f, 0.0f,
     0x1.e2e4dap-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7231e2p-55f,
     0x1.5c9814p-94f, 0x1.d04ae4p-88f, 0.0f, 0.0f, 0x1.bda84ap-14f, 0x1.89725p-81f,
     0x1.3b3d92p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.64bb92p-16f, 0x1.4df694p-122f,
     0.0f, 0x1.4d168ep-2f, 0x1.288022p-89f, 0.0f, 0x1.93761p-3f, 0x1.368b8ep-32f,
     0.0f, 0x1.077cb2p-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9fd7a6p-7f, 0x1.8575ep-76f,
     0x1.0f8c74p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6c5da4p-64f, 0.0f, 0x1.d5a846p-75f,
     0.0f, 0x1.a1ef18p-9f, 0x1.5b715ep-92f, 0x1.40e1c4p-19f, 0x1.387e0cp-36f,
     0x1.2c955ap-29f, 0.0f, 0x1.41f2cp-74f, 0x1.81fa7cp-121f, 0x1.ba9b04p-43f,
     0x1.46a97p-28f, 0.0f, 0.0f, 0x1.2223c6p-5f, 0.0f, 0x1.be929p-42f, 0.0f,
     0x1.e20a4p-108f, 0.0f, 0.0f, 0x1.168b84p-121f, 0x1.1bd51cp-104f,
     0x1.1d2e62p-111f, 0x1.ce6464p-32f, 0.0f, 0x1.305422p-41f, 0.0f, 0.0f,
     0x1.6c9048p-63f, 0.0f, 0x1.20c88ep-23f, 0x1.e2dbbap-70f, 0x1.e534acp-76f,
     0x1.eca2p-92f, 0.0f, 0x1.b3c018p-48f, 0x1.d22f56p-101f, 0.0f, 0x1.003674p-58f,
     0.0f, 0.0f, 0x1.a41764p-103f, 0.0f, 0.0f, 0x1.55bfdp-13f, 0x1.b9cdeap-111f,
     0x1.b4adcp-99f, 0x1.a5b4c4p-9f, 0.0f, 0x1.de74fep-33f, 0.0f, 0x1.64338cp-60f,
     0.0f, 0x1.f52a64p-79f, 0.0f, 0x1.0d778ep-6f, 0x1.bb0e26p-114f, 0.0f,
     0x1.39f12p-59f, 0x1.ecb49ep-38f, 0x1.b736ap-18f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6df3bep-88f, 0x1.9b65b8p-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ba1ec6p-78f, 0.0f,
     0.0f, 0x1.a3fde6p-95f, 0.0f, 0x1.ffa78ep-121f, 0x1.325e4cp-55f, 0x1.09e1e2p-39f,
     0.0f, 0x1.6c9f08p-23f, 0.0f, 0x1.b02f32p-90f, 0x1.f553e2p-28f, 0x1.4e2d08p-79f,
     0x1.6ee8e8p-13f, 0.0f, 0.0f, 0x1.9d657p-61f, 0x1.7651a8p-68f, 0.0f,
     0x1.43b272p-76f, 0.0f, 0x1.b3b864p-56f, 0.0f, 0.0f, 0x1.1a64p-115f,
     0x1.a2823p-45f, 0x1.576e86p-102f, 0x1.4ff7ep-3f, 0x1.79b476p-27f, 0.0f, 0.0f,
     0.0f, 0x1.848864p-28f, 0x1.c5fe14p-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.22bf3cp-100f, 0.0f, 0x1.d38a6ap-112f, 0.0f,
     0.0f, 0.0f, 0x1.a9d68p-108f, 0.0f, 0.0f, 0.0f, 0x1.f856dcp-8f, 0.0f, 0.0f,
     0x1.1cbcap-70f, 0x1.9a0a42p-83f, 0x1.d9c3d2p-93f, 0x1.8a5ba4p-105f, 0.0f, 0.0f,
     0x1.bdfd22p-98f, 0x1.da845cp-9f, 0.0f, 0.0f, 0x1.867b06p-103f, 0.0f, 0.0f,
     0x1.f0becap-94f, 0x1.f08612p-90f, 0x1.7fc02ep-88f, 0.0f, 0x1.45ae4ap-41f,
     0x1.8641acp-111f, 0x1.08c68cp-92f, 0.0f, 0x1.00ad3cp-107f, 0x1.32d782p-69f, 0.0f,
     0x1.18ff16p-45f, 0x1.51d47ap-31f, 0.0f, 0x1.c90ed2p-37f, 0.0f, 0x1.84d424p-104f,
     0x1.9140c4p-30f, 0x1.94a92ep-91f, 0x1.793ec8p-123f, 0.0f, 0.0f, 0x1.bbfcp-78f,
     0.0f, 0x1.e8051ep-21f, 0.0f, 0.0f, 0x1.a1cc5cp-87f, 0.0f, 0.0f, 0x1.57d7c6p-104f,
     0.0f, 0x1.dc9832p-2f, 0.0f, 0x1.1ef558p-10f, 0x1.9709b8p-36f, 0.0f,
     0x1.b378aep-25f, 0x1.40c844p-73f, 0x1.09e93p-38f, 0x1.76763ap-98f,
     0x1.4ae8ecp-78f, 0.0f, 0x1.477882p-57f, 0.0f, 0x1.fcc29ep-85f, 0.0f,
     0x1.ccd058p-87f, 0x1.87d378p-116f
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
            tmp2 = Sleef_copysignf8_kvx(tmp0, tmp1);
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
    printf("Sleef_copysignf8_kvx %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_copysignf8_kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
