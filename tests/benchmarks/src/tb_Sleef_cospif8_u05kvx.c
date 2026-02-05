/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_cospif8_u05kvx.c --function Sleef_cospif8_u05kvx \
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
     0x1.7da8c4p-49f, 0.0f, 0.0f, 0x1.181c28p-111f, 0.0f, 0x1.8c3816p-102f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.938192p-117f, 0x1.f6587ap-59f,
     0x1.f251d4p-55f, 0x1.9f056ap-107f, 0x1.c0732ep-8f, 0.0f, 0x1.b6d8eap-36f, 0.0f,
     0.0f, 0x1.d2926p-53f, 0x1.38b64p-49f, 0.0f, 0x1.4bbedcp-44f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.22fe28p-50f, 0x1.278efap-79f, 0x1.566798p-61f, 0x1.7a25cep-8f,
     0x1.6af1fcp-96f, 0x1.1b577ap-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.04c7a6p-45f,
     0.0f, 0.0f, 0x1.f99f5cp-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.89c884p-36f,
     0x1.15fadap-82f, 0.0f, 0.0f, 0x1.a35faep-116f, 0.0f, 0x1.b8837ap-31f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.04e6bp-20f, 0.0f, 0.0f, 0x1.545df8p-106f,
     0.0f, 0x1.b9642ap-60f, 0.0f, 0.0f, 0x1.d4817ap-25f, 0x1.e3d818p-53f, 0.0f,
     0x1.f814a4p-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.de0eb4p-81f, 0x1.e2db42p-40f,
     0.0f, 0x1.26886ap-41f, 0.0f, 0x1.cee812p-109f, 0x1.201334p-67f, 0.0f,
     0x1.151fap-85f, 0x1.648f36p-102f, 0x1.ecf94p-88f, 0.0f, 0x1.66b072p-81f,
     0x1.53a9aap-65f, 0.0f, 0.0f, 0x1.772516p-1f, 0x1.8c04e2p-58f, 0x1.83e92p-65f,
     0x1.8a6466p-96f, 0.0f, 0x1.c29cc4p-52f, 0.0f, 0x1.8922cep-37f, 0.0f,
     0x1.7a5582p-19f, 0.0f, 0x1.fe3102p-74f, 0x1.ea526ep-28f, 0x1.de8806p-84f, 0.0f,
     0.0f, 0.0f, 0x1.97a19cp-108f, 0x1.304c02p-46f, 0.0f, 0x1.7d3504p-42f,
     0x1.93fdfcp-105f, 0x1.2d102ap-74f, 0.0f, 0.0f, 0x1.2d6a0ep-18f, 0x1.f05bdp-52f,
     0.0f, 0x1.914f06p-112f, 0x1.9649c4p-49f, 0x1.5db11cp-9f, 0x1.8b6ec6p-56f,
     0x1.9eb0ap-62f, 0.0f, 0x1.12f126p-25f, 0x1.d016b2p-14f, 0.0f, 0x1.5ec3eep-76f,
     0x1.a3a474p-86f, 0x1.e936c8p-10f, 0x1.df2ff6p-96f, 0x1.d7bd44p-109f,
     0x1.349b26p-61f, 0x1.de459cp-49f, 0.0f, 0x1.efb26ap-18f, 0.0f, 0x1.481f1ap-98f,
     0.0f, 0.0f, 0.0f, 0x1.6dd58p-93f, 0.0f, 0.0f, 0x1.936cap-67f, 0.0f, 0.0f, 0.0f,
     0x1.563b2ep-58f, 0.0f, 0.0f, 0x1.6b7fdp-31f, 0x1.115fe8p-77f, 0x1.4d9e52p-44f,
     0.0f, 0.0f, 0.0f, 0x1.34d478p-42f, 0.0f, 0x1.e7dc7cp-73f, 0.0f, 0.0f, 0.0f,
     0x1.d2866ep-55f, 0x1.36462ap-34f, 0x1.39d8b6p-47f, 0x1.d3dfc4p-66f, 0.0f,
     0x1.6c9cap-4f, 0.0f, 0x1.599a38p-79f, 0.0f, 0.0f, 0x1.e93e5cp-118f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.cb07a6p-19f, 0.0f, 0.0f, 0.0f, 0x1.103708p-120f, 0.0f,
     0.0f, 0.0f, 0x1.a46efp-21f, 0x1.36eb18p-78f, 0x1.f81c26p-61f, 0x1.b27b52p-100f,
     0x1.99be3cp-44f, 0x1.626b1cp-85f, 0x1.48c966p-125f, 0x1.ac77ep-108f,
     0x1.82fdfcp-84f, 0x1.2f750ap-38f, 0x1.a963dcp-61f, 0x1.9d3f12p-35f,
     0x1.71a4c6p-50f, 0x1.03474ep-4f, 0.0f, 0.0f, 0x1.1fe9b6p-53f, 0x1.44aa8ep-108f,
     0x1.5b0c44p-36f, 0.0f, 0.0f, 0x1.2f3572p-120f, 0x1.309a74p-73f, 0.0f,
     0x1.5d650cp-106f, 0x1.c0054ep-118f, 0.0f, 0x1.f7481cp-60f, 0.0f, 0.0f, 0.0f,
     0x1.1134aap-39f, 0x1.a72ed2p-59f, 0x1.08c922p-7f, 0.0f, 0x1.0cbf6cp-25f,
     0x1.32221ep-43f, 0.0f, 0x1.02f09ep-42f, 0.0f, 0x1.c70dp-40f, 0.0f,
     0x1.a3e578p-64f, 0x1.199c8p-75f, 0x1.6e0b0cp-118f, 0.0f, 0.0f, 0x1.4f50cap-100f,
     0x1.d88cf8p-74f, 0.0f, 0.0f, 0.0f, 0x1.04314ap-27f, 0.0f, 0.0f, 0x1.dc6f44p-51f,
     0x1.e63036p-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6f8122p-124f, 0x1.0e72fap-96f,
     0.0f, 0x1.878568p-34f, 0x1.e3918p-87f, 0x1.8a6e46p-89f, 0.0f, 0.0f, 0.0f,
     0x1.aa449ep-78f, 0x1.5918b6p-120f, 0x1.47212p-59f, 0.0f, 0.0f, 0x1.5e1062p-38f,
     0x1.cb47e4p-114f, 0.0f, 0x1.d4026ap-3f, 0x1.fab942p-46f, 0x1.48ebap-25f, 0.0f,
     0x1.c36e32p-75f, 0.0f, 0x1.358cbep-30f, 0x1.a75f0ap-63f, 0x1.e39bccp-77f, 0.0f,
     0x1.992868p-35f, 0.0f, 0x1.337a52p-90f, 0x1.807e6ep-68f, 0.0f, 0.0f, 0.0f,
     0x1.10f486p-33f, 0.0f, 0.0f, 0.0f, 0x1.abe9dep-112f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a82fbp-63f, 0.0f, 0x1.1649fep-90f, 0x1.a9c94p-34f, 0x1.139ff6p-109f,
     0.0f, 0.0f, 0x1.cf2a26p-93f, 0.0f, 0x1.ea7474p-99f, 0.0f, 0x1.f69786p-86f,
     0x1.fa7ebep-103f, 0.0f, 0.0f, 0x1.bbf11ep-73f, 0x1.696ffp-69f, 0x1.1a5938p-24f,
     0.0f, 0x1.a0910ap-40f, 0.0f, 0x1.3c68a4p-33f, 0.0f, 0x1.323742p-45f, 0.0f,
     0x1.35002cp-90f, 0x1.a7eceep-11f, 0.0f, 0x1.bb4eeap-70f, 0.0f, 0x1.2a5692p-11f,
     0.0f, 0x1.c2ece6p-120f, 0.0f, 0x1.d93b7ap-61f, 0x1.c91036p-11f, 0.0f, 0.0f, 0.0f,
     0x1.158c54p-91f, 0x1.e09346p-36f, 0.0f, 0x1.be1c82p-65f, 0.0f, 0.0f, 0.0f,
     0x1.b39718p-38f, 0x1.1a7296p-82f, 0x1.bc5f42p-95f, 0x1.13b3f4p-90f,
     0x1.e087c6p-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.acd122p-21f, 0x1.89ea46p-69f,
     0x1.ee4d3cp-91f, 0.0f, 0.0f, 0x1.5f08fep-79f, 0x1.97c4ecp-68f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c8a5a8p-92f, 0x1.503f26p-10f, 0.0f, 0x1.21bb24p-54f, 0.0f, 0.0f,
     0x1.c33db4p-121f, 0x1.d2feap-101f, 0x1.34cbcep-99f, 0x1.2dbc7ap-42f, 0.0f, 0.0f,
     0x1.7524eap-88f, 0x1.5be83ap-38f, 0.0f, 0x1.88af22p-113f, 0x1.c9e4aep-2f, 0.0f,
     0x1.c5e978p-85f, 0x1.8e93d2p-126f, 0x1.ab453cp-17f, 0x1.09b8aep-42f, 0.0f,
     0x1.7a52bcp-73f, 0.0f, 0x1.4c9524p-57f, 0.0f, 0x1.a02818p-62f, 0x1.36d4f6p-102f,
     0x1.e87ef8p-76f, 0.0f, 0.0f, 0x1.30649ap-123f, 0x1.e14f98p-57f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.4d916ap-7f, 0x1.fc1df4p-83f, 0x1.f33d3ap-78f, 0.0f,
     0x1.fcf7aep-54f, 0x1.499464p-49f, 0x1.24fa3ap-89f, 0x1.11126ap-55f, 0.0f,
     0x1.8e4edap-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.77fd4ap-9f, 0x1.e7102p-74f,
     0.0f, 0.0f, 0x1.175adp-110f, 0x1.2bd56ep-109f, 0.0f, 0.0f, 0x1.f8856ep-115f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2f9d52p-66f, 0x1.7f2276p-98f, 0x1.58fc52p-126f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c59aa6p-62f, 0x1.433118p-40f,
     0x1.8e838ap-102f, 0x1.60b794p-43f, 0x1.bdf9p-79f, 0.0f, 0x1.ba57ccp-113f, 0.0f,
     0x1.4ce696p-29f, 0x1.c1bdc4p-115f, 0x1.67ba58p-5f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a9eab4p-81f, 0.0f, 0x1.b17af6p-57f, 0.0f, 0.0f, 0x1.107bdcp-102f, 0.0f, 0.0f,
     0x1.1bcd58p-34f, 0x1.8f76bep-91f, 0x1.997beep-41f, 0.0f, 0.0f, 0x1.87b9c8p-80f,
     0x1.b5491ep-31f, 0.0f, 0x1.dbc49cp-59f, 0x1.84e5ccp-95f, 0x1.cd8966p-55f, 0.0f,
     0.0f, 0.0f, 0x1.63ece6p-123f, 0.0f, 0.0f, 0x1.31aa5ap-60f, 0x1.3483cap-59f,
     0x1.f9b278p-65f, 0.0f, 0x1.d3db66p-18f, 0.0f, 0.0f, 0x1.f95606p-1f,
     0x1.fa2f4cp-5f, 0x1.855cf4p-49f, 0x1.cb7386p-29f, 0x1.052a3ep-26f,
     0x1.50535ap-99f, 0.0f, 0.0f, 0x1.3cfb78p-9f, 0.0f, 0x1.c59772p-51f,
     0x1.c64b14p-84f, 0.0f, 0x1.51577cp-104f, 0.0f, 0.0f, 0x1.01af2cp-41f, 0.0f, 0.0f,
     0.0f, 0x1.c60018p-53f, 0.0f, 0x1.f4f85p-100f, 0x1.181706p-89f, 0x1.182d86p-34f,
     0.0f, 0.0f, 0.0f, 0x1.1750e6p-119f, 0x1.9456f6p-53f, 0.0f, 0.0f, 0x1.ef5a5ep-88f,
     0.0f, 0x1.af4ec4p-60f, 0.0f, 0x1.2338a6p-30f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d9b87cp-71f, 0x1.4f4f16p-43f, 0x1.d9bb84p-104f, 0x1.6082d6p-64f, 0.0f,
     0x1.149daap-53f, 0x1.3451bcp-10f, 0.0f, 0x1.b724acp-98f, 0x1.4e06a4p-97f, 0.0f,
     0x1.a62e98p-80f, 0.0f, 0x1.b1f902p-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b7143ep-110f,
     0.0f, 0.0f, 0.0f, 0x1.e7cfb4p-43f, 0x1.a92496p-125f, 0x1.e3e38cp-79f, 0.0f,
     0x1.b2a4fp-20f, 0x1.8f66f8p-38f, 0.0f, 0x1.db9c5ap-54f, 0x1.656568p-14f, 0.0f,
     0x1.9130d8p-89f, 0x1.1d6b34p-113f, 0.0f, 0.0f, 0.0f, 0x1.a91bacp-14f, 0.0f, 0.0f,
     0x1.5f4f3ep-97f, 0.0f, 0x1.3d98d6p-38f, 0x1.91d304p-19f, 0.0f, 0.0f,
     0x1.ba473ap-96f, 0x1.0cd7a4p-1f, 0x1.8b5b98p-24f, 0x1.b37a7cp-125f, 0.0f,
     0x1.9c4a5p-38f, 0.0f, 0.0f, 0.0f, 0x1.d01208p-119f, 0x1.5712bp-4f,
     0x1.d75e94p-99f, 0.0f, 0x1.cf4742p-28f, 0.0f, 0.0f, 0x1.0b9f4cp-104f,
     0x1.db7618p-118f, 0.0f, 0.0f, 0x1.12d864p-55f, 0.0f, 0x1.7e6524p-99f,
     0x1.4cc8eep-109f, 0.0f, 0x1.518e7cp-67f, 0.0f, 0.0f, 0.0f, 0x1.445d8ap-30f,
     0x1.891e58p-76f, 0x1.503e3ep-84f, 0.0f, 0.0f, 0.0f, 0x1.f3584ap-5f,
     0x1.20870cp-74f, 0x1.56e3f6p-41f, 0x1.b73e6cp-76f, 0x1.6f8278p-35f, 0.0f, 0.0f,
     0x1.c05666p-1f, 0x1.7da66cp-1f, 0x1.c7a6eap-8f, 0x1.eabcecp-96f, 0x1.1a4f24p-7f,
     0.0f, 0.0f, 0x1.b84754p-54f, 0.0f, 0x1.a05388p-54f, 0x1.4839dcp-99f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f237fep-126f, 0.0f, 0x1.a70c32p-18f, 0x1.4d63fcp-31f,
     0.0f, 0x1.3284d4p-111f, 0x1.3ced72p-105f, 0x1.5e895ap-81f, 0x1.24722p-11f,
     0x1.5ad284p-90f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.0f443p-49f, 0x1.5fffbep-54f,
     0x1.cec6d4p-11f, 0x1.689a0ep-119f, 0x1.373628p-91f, 0x1.2d02a6p-19f,
     0x1.6a1212p-109f, 0.0f, 0x1.f391acp-110f, 0.0f, 0.0f, 0.0f, 0x1.ed4b08p-34f,
     0.0f, 0.0f, 0.0f, 0x1.e34364p-28f, 0.0f, 0x1.0fdep-85f, 0x1.57efbep-79f,
     0x1.d6e0dcp-7f, 0.0f, 0.0f, 0x1.091b86p-55f, 0.0f, 0.0f, 0x1.ace65ap-66f,
     0x1.fb4912p-75f, 0x1.2eaaep-125f, 0.0f, 0.0f, 0x1.5f5f0cp-28f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e7ca18p-92f, 0x1.13ef5ap-22f, 0.0f, 0x1.28699ap-1f, 0.0f,
     0x1.4cf31ep-13f, 0x1.387e38p-36f, 0.0f, 0x1.11ef8p-56f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.230bdp-79f, 0x1.d9c6e4p-61f, 0.0f, 0.0f, 0.0f,
     0x1.bc95dap-15f, 0x1.9a79b4p-74f, 0x1.855f6p-73f, 0x1.80c1acp-8f,
     0x1.415d8cp-63f, 0x1.bc74a8p-46f, 0x1.5ef1dap-89f, 0x1.4efba8p-76f,
     0x1.e1aa68p-34f, 0.0f, 0x1.68850ep-42f, 0.0f, 0x1.199e82p-32f, 0.0f,
     0x1.7e7f4cp-14f, 0.0f, 0x1.3531a6p-116f, 0x1.dd59dp-39f, 0x1.7f4d52p-107f,
     0x1.dd7c38p-50f, 0x1.0bb37p-99f, 0x1.4685bp-14f, 0x1.65998ap-24f,
     0x1.fbcb8ep-88f, 0.0f, 0.0f, 0x1.18abc4p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.dbfffap-90f, 0x1.f60d1ep-31f, 0x1.6b4198p-42f, 0.0f, 0.0f, 0.0f,
     0x1.8e08cp-14f, 0.0f, 0x1.2e1ee2p-89f, 0x1.a4226ap-77f, 0x1.196df4p-44f, 0.0f,
     0x1.d4a3e6p-39f, 0x1.ef252ep-14f, 0x1.b9399ap-77f, 0x1.ce4052p-76f, 0.0f, 0.0f,
     0x1.7a6b08p-113f, 0x1.6d386ep-82f, 0.0f, 0.0f, 0.0f, 0x1.08cf92p-62f,
     0x1.7f1feap-27f, 0x1.02c404p-37f, 0x1.43f52cp-73f, 0x1.86f28cp-86f,
     0x1.a3715ep-110f, 0.0f, 0x1.f65518p-121f, 0.0f, 0x1.e5c6dp-102f, 0x1.ca0412p-90f,
     0.0f, 0x1.905b88p-64f, 0x1.a3df48p-108f, 0x1.ecf24ep-15f, 0x1.f3d01cp-109f, 0.0f,
     0.0f, 0x1.24a0cp-11f, 0x1.7e6646p-101f, 0.0f, 0.0f, 0x1.f9f75p-119f,
     0x1.93eecep-38f, 0x1.7f06ep-88f, 0.0f, 0x1.3f822cp-58f, 0.0f, 0x1.9a41eep-52f,
     0.0f, 0x1.023a74p-95f, 0x1.7a89ep-9f, 0x1.13e2c8p-4f, 0x1.2532b8p-85f,
     0x1.3e8afcp-119f, 0x1.411deap-48f, 0.0f, 0x1.034cd8p-78f, 0x1.142b3p-65f,
     0x1.285146p-60f, 0.0f, 0.0f, 0x1.e594b2p-85f, 0x1.aa0652p-43f, 0x1.ec2c02p-88f,
     0.0f, 0.0f, 0x1.4d2228p-9f, 0.0f, 0.0f, 0x1.874cc2p-74f, 0.0f, 0x1.1c38fap-101f,
     0x1.6f0a9p-88f, 0x1.77dc6ep-6f, 0x1.84db94p-87f, 0x1.0d514ap-37f, 0.0f, 0.0f,
     0.0f, 0x1.2b93dep-82f, 0x1.df6c7p-66f, 0.0f, 0.0f, 0x1.6d90aap-93f, 0.0f, 0.0f,
     0x1.ac146ep-64f, 0.0f, 0.0f, 0x1.3fb52p-94f, 0.0f, 0x1.e28d48p-124f, 0.0f,
     0x1.1cf854p-57f, 0.0f, 0.0f, 0x1.5cf408p-90f, 0.0f, 0x1.ac4762p-119f,
     0x1.cdb86ap-74f, 0x1.ef8532p-74f, 0x1.645d6ep-64f, 0x1.11f9a8p-105f,
     0x1.3c0f7p-52f, 0.0f, 0.0f, 0x1.58a0e2p-94f, 0x1.f8f75ap-50f, 0x1.eae49cp-49f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1db91p-23f, 0x1.ffa584p-63f, 0x1.b9424cp-46f,
     0x1.8c5a5ap-112f, 0x1.fd8b2cp-125f, 0x1.de0f58p-73f, 0.0f, 0.0f, 0x1.de321ep-37f,
     0.0f, 0x1.b26feap-95f, 0x1.90ee54p-98f, 0.0f, 0x1.48b49cp-30f, 0.0f,
     0x1.263ddp-77f, 0x1.efcc5p-121f, 0x1.1c1322p-36f, 0.0f, 0x1.ba2056p-50f, 0.0f,
     0.0f, 0x1.755a9cp-77f, 0x1.2ebbep-46f, 0x1.3636b6p-20f, 0x1.711a02p-110f, 0.0f,
     0x1.d3cdf6p-3f, 0x1.44d52ep-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8465fap-34f, 0x1.9da402p-70f, 0.0f, 0x1.f88512p-110f, 0.0f, 0x1.ef371p-115f,
     0.0f, 0.0f, 0x1.22041cp-113f, 0x1.ec4fd6p-63f, 0x1.e3ef7ep-107f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.fc6efcp-106f, 0x1.5a2af6p-62f, 0x1.b97c08p-102f, 0.0f, 0.0f,
     0.0f, 0x1.7856e4p-34f, 0x1.66492p-2f, 0x1.fbac98p-109f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c3e2aep-76f, 0x1.1fb524p-4f, 0.0f, 0x1.2ecd34p-34f, 0.0f, 0.0f,
     0x1.7eb6bep-70f, 0x1.d9abbp-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3a367cp-86f, 0x1.d2ecc6p-108f, 0.0f, 0x1.b163cep-81f, 0x1.b308c6p-54f,
     0x1.b3eb8ap-71f, 0x1.bf17fep-114f, 0x1.419506p-5f, 0x1.08b34ep-100f,
     0x1.c8f718p-51f, 0.0f, 0x1.053f08p-90f, 0x1.d67a2ep-111f, 0x1.370adcp-6f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.2c18d8p-93f, 0x1.75f85ep-95f, 0x1.1b554ep-3f, 0.0f,
     0x1.e59a9p-67f, 0x1.a448aap-6f, 0x1.3aa4d2p-50f, 0x1.57ab14p-74f, 0.0f,
     0x1.736e2cp-38f, 0x1.5f18c6p-69f, 0.0f, 0.0f, 0x1.ad7198p-88f, 0.0f,
     0x1.51942ep-67f, 0.0f, 0x1.eb45d6p-126f, 0.0f, 0x1.2fb31ap-63f, 0.0f, 0.0f,
     0x1.0b2c96p-9f, 0x1.b5d3e6p-5f, 0.0f, 0.0f, 0x1.2580ep-124f, 0.0f, 0.0f,
     0x1.c9793cp-22f, 0.0f, 0.0f, 0.0f, 0x1.46a1b2p-37f, 0x1.9c2108p-50f, 0.0f, 0.0f,
     0x1.bd4e52p-35f, 0x1.7e1e16p-66f, 0x1.213c3cp-69f, 0.0f, 0x1.b3a866p-16f, 0.0f,
     0x1.4b35dap-37f, 0.0f, 0x1.6507f8p-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.98acccp-24f,
     0x1.431756p-42f
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
            tmp1 = Sleef_cospif8_u05kvx(tmp0);
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
    printf("Sleef_cospif8_u05kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_cospif8_u05kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
