/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_finz_modff8_kvx.c --function Sleef_finz_modff8_kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 4 --function-input-vector-size 4 --precision sleef_sf2 \
 *     --bench --no-embedded-bin --target kv3
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
     0x1.05cf68p-41f, 0.0f, 0.0f, 0.0f, 0x1.a888b2p-114f, 0x1.824fd6p-57f,
     0x1.631776p-33f, 0x1.a00aep-56f, 0.0f, 0.0f, 0.0f, 0x1.b81a34p-101f, 0.0f,
     0x1.907e5p-53f, 0x1.b2457cp-17f, 0.0f, 0.0f, 0x1.f2e5a6p-8f, 0.0f,
     0x1.beff3cp-37f, 0x1.32519ep-44f, 0x1.636d86p-112f, 0.0f, 0x1.ea08c2p-118f, 0.0f,
     0.0f, 0.0f, 0x1.5e5258p-125f, 0x1.eedb24p-117f, 0.0f, 0x1.41d3cap-44f, 0.0f,
     0x1.da0388p-87f, 0.0f, 0x1.6ac2e4p-88f, 0x1.940d6cp-121f, 0.0f, 0x1.77ec9ep-101f,
     0x1.8c888p-3f, 0.0f, 0.0f, 0x1.34e568p-33f, 0.0f, 0.0f, 0x1.7da99ep-49f,
     0x1.0f220ap-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5cd208p-40f, 0x1.efd03cp-71f,
     0x1.83341p-94f, 0.0f, 0x1.872ebp-8f, 0.0f, 0.0f, 0x1.721012p-2f,
     0x1.7883dcp-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.633152p-67f, 0.0f,
     0x1.9aaefp-81f, 0x1.e174acp-74f, 0.0f, 0.0f, 0.0f, 0x1.6b0512p-88f, 0.0f,
     0x1.50290cp-109f, 0.0f, 0.0f, 0.0f, 0x1.3fb46ep-87f, 0x1.04a08p-33f,
     0x1.647e52p-34f, 0x1.fb81bcp-32f, 0x1.bdeb8p-88f, 0x1.e8be42p-21f, 0.0f,
     0x1.266c04p-97f, 0x1.fe5d4p-62f, 0x1.e60d86p-24f, 0x1.6f01dap-88f, 0.0f, 0.0f,
     0x1.d37c4ap-69f, 0x1.c8a76cp-76f, 0.0f, 0x1.20565cp-119f, 0x1.971abap-37f, 0.0f,
     0.0f, 0.0f, 0x1.3e6f7p-79f, 0.0f, 0x1.ac3e78p-15f, 0x1.ba225ep-125f,
     0x1.abb2d6p-112f, 0x1.cdd906p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.940066p-1f,
     0.0f, 0.0f, 0x1.377de2p-123f, 0x1.73242ep-88f, 0.0f, 0x1.010564p-80f, 0.0f, 0.0f,
     0x1.57e51ap-25f, 0.0f, 0x1.d6f73ap-39f, 0x1.0a9516p-71f, 0.0f, 0.0f, 0.0f,
     0x1.b1e112p-58f, 0x1.d01314p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c8a964p-59f, 0.0f, 0.0f, 0x1.e0b55ep-23f, 0x1.aa8078p-55f, 0.0f, 0.0f, 0.0f,
     0x1.c78ffcp-23f, 0x1.32b576p-100f, 0x1.efa776p-17f, 0x1.62c77ap-104f, 0.0f, 0.0f,
     0x1.3e9b24p-117f, 0x1.4a812p-85f, 0.0f, 0x1.2ae09p-38f, 0x1.a38c36p-67f,
     0x1.471b36p-64f, 0x1.c7ab68p-120f, 0x1.9d20f4p-111f, 0x1.0d5fcp-82f,
     0x1.1077aap-62f, 0x1.a301fap-50f, 0.0f, 0x1.30b04cp-121f, 0x1.155532p-55f,
     0x1.1081d2p-43f, 0x1.d7071ep-89f, 0x1.0d3cf4p-36f, 0x1.77d2b8p-41f,
     0x1.c387bp-100f, 0x1.b36a9cp-102f, 0.0f, 0x1.2c399cp-99f, 0.0f, 0x1.8b19fp-105f,
     0x1.f31994p-84f, 0x1.5ac36cp-14f, 0.0f, 0x1.3a2874p-108f, 0.0f, 0x1.d5517cp-84f,
     0.0f, 0.0f, 0x1.b6e6d6p-71f, 0x1.aac0aap-71f, 0x1.f28dbp-20f, 0x1.7e1fcep-86f,
     0.0f, 0.0f, 0x1.b0024ap-70f, 0.0f, 0.0f, 0.0f, 0x1.2446aep-7f, 0.0f, 0.0f,
     0x1.fa2134p-85f, 0.0f, 0x1.aa9706p-14f, 0x1.55a8e4p-124f, 0x1.a221e6p-36f,
     0x1.949cc4p-95f, 0x1.131e4ap-52f, 0x1.92dfbcp-1f, 0.0f, 0.0f, 0x1.a25accp-69f,
     0.0f, 0x1.427a2p-100f, 0x1.87db6cp-20f, 0x1.d61032p-17f, 0x1.ec81eap-18f, 0.0f,
     0.0f, 0x1.b1d45cp-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eb6366p-86f, 0x1.5022ep-115f,
     0x1.515cd2p-82f, 0x1.ec4b3ep-70f, 0.0f, 0.0f, 0.0f, 0x1.f01becp-100f,
     0x1.642076p-96f, 0.0f, 0x1.eb4aacp-98f, 0x1.ea2c54p-75f, 0.0f, 0x1.715fd8p-117f,
     0x1.a7ce66p-25f, 0.0f, 0x1.cbeffap-47f, 0.0f, 0x1.7b4d06p-100f, 0.0f, 0.0f, 0.0f,
     0x1.4e11dap-82f, 0x1.2a9fa8p-108f, 0.0f, 0.0f, 0x1.86007p-57f, 0x1.a48a9ap-73f,
     0x1.3b85f6p-43f, 0.0f, 0.0f, 0.0f, 0x1.1070fap-66f, 0.0f, 0x1.ef173ep-103f,
     0x1.147514p-115f, 0x1.7c228ap-56f, 0x1.73824cp-85f, 0x1.e435a8p-84f, 0.0f,
     0x1.e1bdf4p-61f, 0.0f, 0x1.ed8146p-97f, 0.0f, 0.0f, 0x1.390aep-119f, 0.0f, 0.0f,
     0x1.2c6d6ap-40f, 0x1.f10948p-105f, 0x1.2d96fap-56f, 0x1.8e570ep-90f, 0.0f, 0.0f,
     0x1.5f773ap-80f, 0x1.e6cc76p-53f, 0x1.1340d2p-113f, 0.0f, 0x1.0c26a2p-101f, 0.0f,
     0.0f, 0x1.f32e6ap-27f, 0.0f, 0x1.2dc84ap-54f, 0x1.b23ba2p-88f, 0x1.9de738p-40f,
     0.0f, 0.0f, 0.0f, 0x1.65bedep-58f, 0x1.d6e432p-4f, 0.0f, 0x1.926704p-37f, 0.0f,
     0.0f, 0x1.833216p-70f, 0x1.09699cp-124f, 0x1.6dca82p-44f, 0.0f, 0x1.5ddf54p-92f,
     0.0f, 0.0f, 0.0f, 0x1.deb8ep-79f, 0.0f, 0.0f, 0x1.2fd33ep-39f, 0x1.fb81e8p-19f,
     0x1.15208ep-28f, 0.0f, 0.0f, 0x1.94770ap-92f, 0x1.a6780ap-56f, 0.0f,
     0x1.0b1d0ep-91f, 0.0f, 0x1.4e971ap-20f, 0.0f, 0.0f, 0x1.cd2342p-13f, 0.0f, 0.0f,
     0.0f, 0x1.dffcfep-17f, 0.0f, 0x1.eaf172p-78f, 0.0f, 0x1.88d84p-56f,
     0x1.af1a64p-110f, 0x1.47d2f2p-72f, 0x1.0d2d26p-59f, 0.0f, 0.0f, 0.0f,
     0x1.79bb8ap-92f, 0.0f, 0.0f, 0x1.bd4f3cp-106f, 0.0f, 0.0f, 0x1.0fdd76p-35f, 0.0f,
     0x1.f10eb8p-84f, 0x1.de738ep-29f, 0x1.d6aae6p-63f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0ec3bap-106f, 0x1.b5d132p-97f, 0x1.fc7c2ep-95f, 0.0f, 0.0f, 0x1.baabb6p-32f,
     0.0f, 0.0f, 0x1.7e202p-64f, 0.0f, 0x1.c91e7p-61f, 0x1.eef2f6p-27f,
     0x1.ba1444p-40f, 0x1.185376p-65f, 0.0f, 0x1.c4d50ep-106f, 0.0f, 0x1.66a5dep-82f,
     0x1.e21cacp-7f, 0x1.c7ce3cp-62f, 0x1.c2b1a8p-30f, 0x1.472eb6p-76f,
     0x1.40e3d2p-5f, 0.0f, 0.0f, 0x1.49894ap-75f, 0.0f, 0x1.92e772p-34f, 0.0f,
     0x1.d7b0ap-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6cdc1ep-95f, 0x1.19dc48p-33f, 0.0f,
     0.0f, 0x1.4c1038p-90f, 0x1.42238ap-5f, 0.0f, 0.0f, 0x1.e997b4p-116f, 0.0f, 0.0f,
     0x1.6da35ep-101f, 0x1.d818fp-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.dc741cp-115f, 0x1.b50f8cp-112f, 0x1.868c1p-91f, 0.0f, 0x1.bb1198p-103f, 0.0f,
     0.0f, 0x1.0ebf5ep-99f, 0x1.bfa4bep-118f, 0x1.1a9bbap-21f, 0.0f, 0.0f,
     0x1.906206p-75f, 0.0f, 0x1.79209ep-35f, 0x1.e7a108p-114f, 0.0f, 0.0f,
     0x1.87f6f2p-15f, 0x1.481438p-55f, 0x1.79f3bep-105f, 0.0f, 0.0f, 0x1.845bd6p-102f,
     0x1.9565f8p-53f, 0.0f, 0.0f, 0x1.647736p-11f, 0.0f, 0.0f, 0x1.f14f3cp-71f,
     0x1.05d24p-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9add9p-72f, 0.0f, 0x1.b943dap-52f,
     0.0f, 0.0f, 0x1.10f90ap-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.56a922p-59f,
     0x1.fff4fep-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.71c296p-8f, 0.0f, 0.0f,
     0x1.08261ep-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4737d2p-106f, 0.0f,
     0.0f, 0x1.efd01ap-31f, 0x1.aa58a4p-116f, 0.0f, 0.0f, 0.0f, 0x1.b364eap-43f,
     0x1.f2a59cp-39f, 0x1.63ff2ep-36f, 0x1.a01968p-47f, 0x1.bd2918p-97f,
     0x1.d0c112p-9f, 0x1.a145ecp-113f, 0.0f, 0x1.618b66p-121f, 0x1.18cc68p-90f,
     0x1.453c22p-106f, 0.0f, 0x1.7905e2p-97f, 0x1.5db29cp-78f, 0.0f, 0.0f,
     0x1.4c7406p-100f, 0x1.8f876ep-49f, 0x1.1178f4p-42f, 0.0f, 0.0f, 0.0f,
     0x1.1fe358p-69f, 0.0f, 0x1.511d96p-77f, 0x1.a85348p-38f, 0.0f, 0.0f,
     0x1.9ef4f2p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.90080cp-58f, 0x1.44bce2p-38f,
     0x1.f6176ep-5f, 0x1.fe582cp-93f, 0x1.bd4178p-87f, 0x1.ef1534p-118f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.abd05ap-3f, 0x1.f5b494p-44f, 0.0f, 0.0f, 0x1.86a1ep-119f,
     0x1.b60b18p-20f, 0x1.01143cp-70f, 0x1.5b5e5ap-107f, 0.0f, 0x1.2b265cp-7f, 0.0f,
     0x1.50b324p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.207f4cp-100f, 0x1.b6a9ap-124f, 0x1.ade70ap-13f, 0x1.232d7cp-113f,
     0x1.28d6d4p-52f, 0x1.8dc04ap-120f, 0.0f, 0x1.54d4aap-98f, 0.0f, 0x1.251afap-20f,
     0x1.956e9cp-62f, 0x1.11bd7ap-123f, 0.0f, 0.0f, 0x1.e96b7ap-55f, 0.0f,
     0x1.a27888p-73f, 0x1.4cc9bp-84f, 0x1.b77b44p-116f, 0.0f, 0x1.14011ep-115f,
     0x1.282f16p-103f, 0x1.0381bp-30f, 0x1.3832fep-10f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8235bap-19f, 0x1.bbd2cp-17f, 0.0f, 0x1.de144ep-88f, 0.0f, 0.0f, 0.0f,
     0x1.a80f4ep-82f, 0x1.349c08p-81f, 0x1.683446p-27f, 0x1.2f3344p-19f, 0.0f, 0.0f,
     0x1.569394p-50f, 0.0f, 0x1.28c964p-78f, 0x1.eaeba4p-21f, 0.0f, 0.0f,
     0x1.b6395p-75f, 0x1.72ae8ap-48f, 0.0f, 0x1.856aa6p-105f, 0.0f, 0x1.3432e4p-79f,
     0.0f, 0x1.188cc8p-49f, 0.0f, 0.0f, 0x1.02e00cp-44f, 0.0f, 0.0f, 0x1.c1a9a6p-54f,
     0.0f, 0.0f, 0x1.284184p-6f, 0x1.1139cp-14f, 0x1.dd5026p-15f, 0x1.b4a1d8p-44f,
     0x1.d519b8p-96f, 0x1.e9e35cp-56f, 0x1.ba5f2ap-126f, 0.0f, 0.0f, 0.0f,
     0x1.efd6f6p-80f, 0.0f, 0.0f, 0.0f, 0x1.216004p-72f, 0.0f, 0x1.e8be48p-26f,
     0x1.2a4db8p-79f, 0x1.beb006p-23f, 0x1.ffde66p-2f, 0.0f, 0x1.9c3f58p-61f, 0.0f,
     0.0f, 0x1.9244bcp-17f, 0.0f, 0x1.8c95c6p-25f, 0x1.dd5182p-75f, 0.0f,
     0x1.c58cc6p-24f, 0.0f, 0.0f, 0x1.34117ap-72f, 0x1.6c6216p-81f, 0x1.bee5b2p-24f,
     0x1.036cd2p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7da76p-97f, 0.0f, 0x1.6d4a5ep-93f,
     0x1.8d666ep-65f, 0.0f, 0.0f, 0x1.0442bap-13f, 0.0f, 0.0f, 0.0f, 0x1.421b22p-81f,
     0.0f, 0x1.a6c35p-61f, 0.0f, 0x1.6cb85ep-107f, 0.0f, 0x1.b2c5cep-53f,
     0x1.25405ap-13f, 0x1.194354p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.445468p-54f, 0.0f,
     0.0f, 0x1.182718p-33f, 0.0f, 0x1.ca4f02p-117f, 0.0f, 0x1.48bb62p-15f, 0.0f, 0.0f,
     0x1.c7b7b6p-77f, 0.0f, 0x1.011b4ap-18f, 0.0f, 0x1.d17698p-42f, 0x1.a8421ap-37f,
     0x1.d9bdb4p-108f, 0.0f, 0x1.0c7b82p-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.245b84p-47f, 0.0f, 0x1.1b1446p-19f, 0x1.ef0b38p-21f, 0.0f, 0x1.23f7d8p-83f,
     0x1.d78d9ep-68f, 0x1.1f00c8p-118f, 0x1.7064f8p-27f, 0.0f, 0.0f, 0x1.208daap-37f,
     0x1.1c6adap-21f, 0x1.2e64fep-47f, 0x1.bb613p-107f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3dbb34p-6f, 0.0f, 0x1.7e7f26p-80f, 0.0f, 0x1.775f94p-88f, 0x1.f89052p-1f,
     0.0f, 0x1.e5d866p-117f, 0.0f, 0x1.0305cep-100f, 0x1.4512cep-69f,
     0x1.357f26p-122f, 0x1.a150bep-117f, 0.0f, 0x1.4ba396p-10f, 0x1.cbf1bap-33f, 0.0f,
     0x1.52fb74p-12f, 0x1.412caap-2f, 0.0f, 0x1.ffed98p-31f, 0x1.56f54p-116f, 0.0f,
     0.0f, 0.0f, 0x1.8de33ep-39f, 0.0f, 0x1.ad74f4p-18f, 0.0f, 0x1.0619cap-11f, 0.0f,
     0x1.08770ap-53f, 0.0f, 0x1.cddef8p-101f, 0.0f, 0.0f, 0.0f, 0x1.9ee698p-121f,
     0.0f, 0.0f, 0x1.3085fp-120f, 0.0f, 0x1.7343p-100f, 0x1.e8a8dap-20f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.33bf4p-87f, 0x1.07de12p-51f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b23af2p-28f, 0.0f, 0.0f, 0x1.a713f4p-82f, 0.0f, 0x1.d6429ep-113f,
     0x1.a34956p-31f, 0.0f, 0x1.28b3fp-69f, 0x1.f13796p-88f, 0x1.92b0dcp-45f,
     0x1.ce3854p-106f, 0.0f, 0x1.faae4cp-1f, 0x1.de604p-107f, 0x1.7d56d2p-76f,
     0x1.4d47cep-55f, 0.0f, 0.0f, 0x1.20d1a6p-90f, 0.0f, 0x1.108b16p-28f,
     0x1.b72282p-80f, 0x1.8e49f6p-87f, 0x1.4cf1a2p-64f, 0x1.a39c62p-106f,
     0x1.5cc27ap-117f, 0x1.315ed4p-24f, 0.0f, 0x1.81a46ep-70f, 0.0f, 0x1.e43aa2p-27f,
     0x1.dd2552p-58f, 0x1.661336p-41f, 0x1.c559eap-43f, 0x1.b674b2p-41f,
     0x1.433b98p-98f, 0.0f, 0x1p0f, 0x1.f717fap-24f, 0.0f, 0.0f, 0x1.c30604p-105f,
     0.0f, 0x1.6342f4p-115f, 0x1.56226ep-4f, 0.0f, 0.0f, 0x1.3372f8p-78f,
     0x1.ada9ep-103f, 0x1.4385aep-21f, 0.0f, 0x1.f6c60ep-91f, 0.0f, 0x1.a4206ep-75f,
     0.0f, 0x1.b99738p-68f, 0x1.655b12p-58f, 0.0f, 0.0f, 0x1.867e66p-79f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.cde57ap-101f, 0x1.a8992cp-116f, 0.0f, 0x1.0b494ap-106f, 0.0f,
     0x1.2c8d3ap-87f, 0x1.55ed4cp-91f, 0x1.a0ccacp-68f, 0.0f, 0.0f, 0x1.c3ed3cp-109f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2a01c4p-1f, 0x1.47cbap-3f, 0x1.c360c6p-32f,
     0.0f, 0x1.ceb3d4p-113f, 0.0f, 0x1.401a4ap-29f, 0x1.342b82p-4f, 0.0f, 0.0f,
     0x1.73bcf6p-80f, 0.0f, 0x1.a0b804p-108f, 0x1.04e40cp-122f, 0.0f,
     0x1.f57666p-111f, 0x1.32ee44p-3f, 0.0f, 0.0f, 0x1.4e4c24p-101f, 0.0f,
     0x1.c1f3f8p-94f, 0.0f, 0x1.0a3dcap-81f, 0x1.cec93ep-91f, 0.0f, 0.0f, 0.0f,
     0x1.bd608p-42f, 0.0f, 0x1.214e38p-65f, 0x1.f25b3p-86f, 0.0f, 0x1.68c532p-64f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7bf8ccp-12f, 0x1.48ac1ep-117f,
     0x1.e712ap-108f, 0.0f, 0.0f, 0x1.6c9f74p-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.34835cp-23f, 0.0f, 0x1.d97cb6p-6f, 0x1.deadeap-31f, 0.0f, 0x1.dd6d7ap-97f,
     0x1.ac431cp-112f, 0x1.8ad1b6p-42f, 0x1.bed088p-90f, 0.0f, 0.0f, 0x1.dbf3eep-26f,
     0.0f, 0x1.20d526p-126f, 0x1.746988p-100f, 0x1.57ca38p-30f, 0x1.fff3f8p-84f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.327398p-13f, 0x1.4bfa58p-118f, 0.0f, 0x1.8f9976p-22f,
     0.0f, 0x1.bb4c2p-113f, 0x1.3a4874p-22f, 0x1p0f, 0x1.278412p-24f, 0x1.0cd7eep-40f,
     0.0f, 0.0f, 0.0f, 0x1.71b54ep-106f, 0.0f, 0.0f, 0x1.79c70cp-7f, 0x1.791ddap-8f,
     0.0f, 0.0f, 0x1.c48676p-121f, 0x1.3e0a54p-45f, 0x1.9038cap-37f, 0.0f,
     0x1.74b376p-25f, 0x1.31ad8p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5cd96cp-61f, 0.0f,
     0x1.b89428p-90f, 0.0f, 0x1.0eefdap-77f, 0.0f, 0x1.aef68cp-59f, 0.0f,
     0x1.09c1f2p-88f, 0x1.2061fep-91f, 0x1.c35506p-7f, 0.0f, 0.0f, 0x1.96ca58p-106f,
     0.0f, 0.0f, 0x1.79bacep-103f, 0.0f, 0.0f, 0x1.e7c614p-76f, 0x1.a3dfb6p-32f,
     0x1.69858p-82f, 0x1.d040aep-90f, 0.0f, 0x1.0b53bp-106f, 0.0f, 0x1.fcea7ap-21f,
     0x1.7f2a78p-98f, 0x1.fdc336p-108f, 0.0f, 0x1.67e8bap-98f, 0x1.fd86e4p-89f, 0.0f,
     0.0f, 0x1.aa5754p-104f, 0x1.c0297p-119f, 0.0f, 0x1.bdb4ap-12f, 0x1.2005a6p-97f,
     0.0f, 0.0f, 0.0f, 0x1.db9adp-81f, 0.0f, 0.0f, 0.0f, 0x1.e951e8p-109f, 0.0f, 0.0f,
     0x1.ce61c4p-15f, 0x1.07cee2p-116f, 0.0f, 0.0f, 0.0f, 0x1.60628ap-102f,
     0x1.8d3b62p-26f, 0.0f, 0x1.9114e8p-7f, 0.0f
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
            tmp1 = Sleef_finz_modff8_kvx(tmp0);
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
    printf("Sleef_finz_modff8_kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_modff8_kvx bench acc {.x=[%a, %a, %a, %a], .y=[%a, %a, %a, %a]}\n", global_bench_acc.x[0], global_bench_acc.x[1], global_bench_acc.x[2], global_bench_acc.x[3], global_bench_acc.y[0], global_bench_acc.y[1], global_bench_acc.y[2], global_bench_acc.y[3]);
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
