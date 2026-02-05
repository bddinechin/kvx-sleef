/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_copysignf8_kvx.c --function \
 *     Sleef_finz_copysignf8_kvx --arity 2 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32,binary32 --vector-size 8 \
 *     --function-input-vector-size 8 --bench --no-embedded-bin --target kv3
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
     0x1.34c14ap-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2bf528p-34f, 0x1.0cdd9ap-29f,
     0x1.d8999cp-100f, 0.0f, 0x1.ff7f2ap-17f, 0.0f, 0x1.5dcd62p-15f, 0.0f,
     0x1.165a14p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.90bd54p-98f,
     0x1.887238p-50f, 0x1.02afa6p-102f, 0.0f, 0.0f, 0.0f, 0x1.923004p-3f, 0.0f, 0.0f,
     0x1.971d2ap-115f, 0x1.9c7bdep-62f, 0x1.cf9cc4p-93f, 0.0f, 0x1.cef7cep-88f, 0.0f,
     0x1.baee2ap-116f, 0x1.f6b6f6p-6f, 0x1.828882p-87f, 0.0f, 0.0f, 0x1.bb239p-74f,
     0x1.c1a478p-36f, 0x1.b4f172p-67f, 0.0f, 0.0f, 0x1.15a5f8p-24f, 0.0f,
     0x1.2d967p-8f, 0.0f, 0.0f, 0x1.7a1accp-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.00970ep-71f, 0.0f, 0.0f, 0x1.34f412p-31f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.af1f84p-38f, 0x1.7fa86ap-113f, 0x1.4e8a5p-26f, 0.0f, 0.0f, 0.0f,
     0x1.b906c6p-2f, 0x1.8173d8p-48f, 0.0f, 0x1.f0d708p-107f, 0x1.e3152ap-116f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d4fbcep-48f, 0.0f, 0.0f, 0x1.d40426p-122f,
     0.0f, 0x1.181e1ap-121f, 0x1.ee2da4p-80f, 0x1.00593cp-38f, 0.0f, 0x1.7138a6p-19f,
     0x1.b0b80ap-68f, 0x1.30dab6p-33f, 0.0f, 0.0f, 0x1.c4169cp-31f, 0.0f,
     0x1.07d2cap-37f, 0x1.b5a2d8p-63f, 0x1.1a75bcp-115f, 0.0f, 0.0f, 0.0f,
     0x1.a0ea92p-123f, 0.0f, 0x1.8ac704p-114f, 0x1.4e71d2p-63f, 0x1.d890c4p-99f,
     0x1.35edecp-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d0d818p-44f, 0x1.f43324p-49f, 0.0f,
     0.0f, 0x1.36f726p-85f, 0x1.b5f8bep-85f, 0x1.01197cp-91f, 0x1.8b0e04p-55f,
     0x1.9b0d14p-70f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.3f7888p-16f, 0x1.975702p-90f,
     0.0f, 0.0f, 0x1.808736p-61f, 0.0f, 0.0f, 0x1.304426p-102f, 0x1.411bdp-111f, 0.0f,
     0x1.4726bep-94f, 0x1.157984p-97f, 0.0f, 0.0f, 0.0f, 0x1.16cae6p-6f, 0.0f,
     0x1.5c82e2p-5f, 0.0f, 0x1.80ed7ep-17f, 0x1.f31372p-4f, 0x1.02d9d2p-50f, 0.0f,
     0.0f, 0x1.0dd3d8p-107f, 0x1.5b5c54p-95f, 0.0f, 0.0f, 0x1.47b826p-113f,
     0x1.6e2ea6p-104f, 0.0f, 0x1.8f135cp-112f, 0.0f, 0x1.399cp-53f, 0x1.268014p-104f,
     0.0f, 0x1.4245dp-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2d6ca2p-121f, 0x1.adb4e8p-116f,
     0.0f, 0x1.6627e2p-121f, 0.0f, 0x1.a94b3cp-118f, 0.0f, 0.0f, 0x1.910d52p-109f,
     0x1.61dfdcp-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.01d09p-113f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.0ae114p-58f, 0.0f, 0x1.f84e38p-16f, 0x1.87f8acp-92f,
     0x1.77d2acp-90f, 0.0f, 0.0f, 0.0f, 0x1.c06bcap-44f, 0x1.326a2ep-9f,
     0x1.078254p-4f, 0x1.74a232p-94f, 0.0f, 0x1.1ac286p-29f, 0.0f, 0x1.edc4f8p-40f,
     0x1.d74dfp-41f, 0x1.823a4ap-92f, 0x1.5b5508p-98f, 0x1.01c3b8p-21f, 0.0f, 0.0f,
     0x1.0248eep-23f, 0.0f, 0x1.e94cbap-20f, 0.0f, 0x1.e3273p-123f, 0.0f, 0.0f,
     0x1.b8f19cp-84f, 0.0f, 0x1.de0eaap-57f, 0x1.e88cp-92f, 0x1.f25cc8p-87f, 0.0f,
     0x1.5a1e0cp-85f, 0.0f, 0x1.b67446p-109f, 0x1.eceb16p-102f, 0x1.54ef4cp-18f, 0.0f,
     0.0f, 0x1.420ddp-73f, 0.0f, 0x1.b6681cp-5f, 0.0f, 0.0f, 0.0f, 0x1.0ee6dp-11f,
     0x1.95891ap-106f, 0x1.4970eep-63f, 0x1.8bf3ecp-24f, 0.0f, 0.0f, 0x1.6ac9c6p-62f,
     0x1.135eccp-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.901d0ep-78f, 0.0f,
     0x1.9eb2acp-49f, 0x1.2ca91ap-82f, 0.0f, 0x1.a595bep-87f, 0x1.b2d09ap-52f, 0.0f,
     0x1.aa40f8p-11f, 0x1.cdd548p-21f, 0.0f, 0.0f, 0x1.fffa24p-78f, 0.0f, 0.0f,
     0x1.b23796p-112f, 0.0f, 0x1.50ef58p-95f, 0.0f, 0.0f, 0x1.83c2c4p-126f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.441462p-60f, 0x1.3f2ee6p-84f, 0x1.5aebf2p-6f,
     0x1.eb4ff8p-66f, 0x1.5f3b84p-113f, 0.0f, 0.0f, 0.0f, 0x1.855caap-16f, 0.0f,
     0x1.b47f92p-78f, 0x1.34c982p-33f, 0x1.70aaa2p-103f, 0x1.77228ap-25f, 0.0f,
     0x1.dc2de6p-61f, 0x1.b2eb96p-35f, 0.0f, 0.0f, 0x1.6bc114p-125f, 0x1.2ee0cep-121f,
     0.0f, 0.0f, 0x1.ba7456p-8f, 0.0f, 0x1.3998dep-32f, 0x1.10dcp-74f,
     0x1.05932cp-119f, 0x1.39ae74p-94f, 0x1.a48386p-9f, 0x1.9e284ap-81f,
     0x1.bbc3dep-73f, 0x1.ff11bep-91f, 0.0f, 0.0f, 0x1.ab6146p-85f, 0x1.28e05p-33f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.0b2776p-34f, 0.0f, 0.0f, 0.0f, 0x1.efef9p-29f,
     0x1.1104c2p-109f, 0x1.e85bb4p-9f, 0x1.521704p-74f, 0.0f, 0x1.1d00f8p-105f, 0.0f,
     0.0f, 0x1.2a6208p-60f, 0x1.17b4c6p-109f, 0x1.5708f6p-119f, 0x1.29fa7cp-55f,
     0x1.247632p-118f, 0x1.60fbbap-12f, 0x1.b21f5ap-116f, 0.0f, 0x1.caa44p-50f, 0.0f,
     0x1.bb751ep-65f, 0x1p0f, 0x1.90bff4p-81f, 0x1.62ca7cp-1f, 0.0f, 0x1.4e5032p-64f,
     0x1.33f2a8p-51f, 0x1.7fa26p-32f, 0x1.277fe8p-64f, 0x1.c8993ep-124f, 0.0f, 0.0f,
     0.0f, 0x1.b8e99ap-6f, 0x1.95a56p-40f, 0.0f, 0x1.ff20aep-95f, 0x1.ecd934p-24f,
     0.0f, 0x1.2e155p-74f, 0x1.f5c012p-78f, 0x1.d96c42p-2f, 0x1.c40482p-49f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ece212p-28f, 0x1.e344e8p-87f, 0x1.2d1f08p-64f,
     0x1.3d9ec2p-36f, 0.0f, 0x1.d0532p-69f, 0x1.fabeacp-123f, 0x1.bd267ap-88f, 0.0f,
     0.0f, 0x1.1cb9c6p-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.edbd5ap-34f, 0x1p0f, 0.0f,
     0x1.144a94p-51f, 0x1.96b7dap-9f, 0x1.df73e2p-16f, 0.0f, 0.0f, 0x1.5adadcp-21f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e77a4ap-53f, 0x1.e35416p-10f,
     0x1.137bfp-87f, 0.0f, 0.0f, 0x1.8f3e46p-58f, 0.0f, 0x1.5779a6p-94f,
     0x1.aef636p-72f, 0x1.a7a1fap-77f, 0.0f, 0.0f, 0x1.44a776p-54f, 0.0f,
     0x1.858fb8p-70f, 0.0f, 0.0f, 0x1.07b57p-18f, 0x1.68f6ap-104f, 0x1.ecd91p-95f,
     0.0f, 0x1.e295ecp-81f, 0x1.2c7edep-16f, 0x1.965d64p-63f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.9fc4a6p-104f, 0x1p0f, 0.0f, 0x1.c07abap-78f, 0.0f,
     0x1.6ef856p-123f, 0x1.fe579cp-51f, 0x1.b1018ep-71f, 0.0f, 0x1.bb76f4p-6f,
     0x1.a4321ep-1f, 0x1.555c58p-79f, 0.0f, 0.0f, 0x1.179a9ep-102f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ec2974p-123f, 0x1.2a8712p-5f, 0x1.43970cp-94f, 0.0f, 0x1.c3477ep-37f,
     0x1.fd80dp-75f, 0.0f, 0x1.462c96p-72f, 0x1.2b56c4p-116f, 0x1.eeabfp-11f,
     0x1.824b72p-75f, 0x1.0e6eaep-39f, 0.0f, 0x1.78d9f6p-105f, 0.0f, 0x1.3007a2p-111f,
     0.0f, 0x1.a6ffd6p-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0683b6p-59f, 0x1.172c92p-78f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.45bafap-105f, 0x1.5e223ap-44f, 0x1.4f9118p-13f,
     0x1.828a84p-125f, 0.0f, 0x1.379e6ap-29f, 0x1.d42becp-117f, 0x1.9d9976p-18f,
     0x1.f8a47ap-25f, 0x1.16447ap-31f, 0x1.f7cb36p-4f, 0x1.c5034ep-119f, 0.0f, 0.0f,
     0x1.310882p-1f, 0.0f, 0.0f, 0x1.5987f6p-14f, 0x1.df3b0ap-8f, 0x1.1391dep-70f,
     0.0f, 0x1.79748ap-51f, 0.0f, 0x1.28d458p-7f, 0.0f, 0.0f, 0x1.18c892p-4f,
     0x1.31e114p-115f, 0.0f, 0x1.ca4b88p-121f, 0x1.0430e4p-85f, 0x1.cf788ap-86f,
     0x1.75e9ccp-58f, 0.0f, 0.0f, 0.0f, 0x1.5fdbcep-85f, 0x1.f541fep-32f,
     0x1.4f1f04p-22f, 0x1.fba8aep-123f, 0x1.174718p-40f, 0.0f, 0.0f, 0x1.0659c2p-77f,
     0.0f, 0x1.5c3572p-116f, 0x1.e8f504p-54f, 0.0f, 0.0f, 0.0f, 0x1.95012cp-102f,
     0.0f, 0x1.03c03ap-51f, 0x1.11787ep-17f, 0.0f, 0x1.0995cp-61f, 0.0f,
     0x1.afa48cp-100f, 0.0f, 0x1.352906p-68f, 0.0f, 0x1.75aae8p-41f, 0.0f,
     0x1.8ecdbap-124f, 0x1.4bafdcp-74f, 0x1.f977bap-38f, 0x1.3c1bbep-112f, 0.0f,
     0x1.a62684p-123f, 0.0f, 0.0f, 0.0f, 0x1.7ddab8p-14f, 0.0f, 0.0f, 0.0f,
     0x1.078756p-54f, 0.0f, 0.0f, 0x1.22ea18p-84f, 0.0f, 0.0f, 0.0f, 0x1.c50c8p-8f,
     0.0f, 0x1.266174p-28f, 0x1.5c6824p-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.855d14p-40f,
     0.0f, 0x1.2ea756p-31f, 0.0f, 0x1.dcb0a4p-114f, 0x1.a629b8p-96f, 0x1.d0115cp-98f,
     0.0f, 0.0f, 0x1.facc18p-85f, 0.0f, 0.0f, 0x1.e8b128p-44f, 0x1.ade6d4p-111f,
     0x1.08444p-109f, 0x1.677894p-62f, 0x1.9dc306p-14f, 0x1.242fep-72f, 0.0f,
     0x1.2e9e84p-63f, 0.0f, 0x1.a31ed8p-47f, 0.0f, 0.0f, 0.0f, 0x1.451c46p-49f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e3bbbp-97f, 0x1.3ea3eep-106f, 0.0f, 0.0f,
     0x1.38332p-104f, 0x1.6607f6p-96f, 0x1.ae5666p-22f, 0.0f, 0x1.c42e86p-22f,
     0x1.f211a8p-46f, 0.0f, 0x1.3a9f3ep-96f, 0x1.762cf4p-57f, 0.0f, 0x1.8eebe8p-71f,
     0x1.ee0deep-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1675ep-105f, 0x1.eca0cap-76f,
     0x1.655faep-126f, 0.0f, 0x1.f0f51cp-120f, 0x1.d45958p-60f, 0.0f, 0x1.727fc8p-37f,
     0.0f, 0x1.b77e7ep-75f, 0.0f, 0x1.cd5bb4p-71f, 0x1.ad9df6p-74f, 0x1.81a4d8p-120f,
     0.0f, 0x1.93d952p-27f, 0.0f, 0.0f, 0.0f, 0x1.03a336p-15f, 0x1.32952p-121f,
     0x1.0aaea4p-12f, 0.0f, 0.0f, 0x1.bd0184p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c09b6ap-63f, 0x1.34a20ap-111f, 0.0f, 0x1.db3bdcp-3f, 0x1.46e766p-14f, 0.0f,
     0x1.229ba2p-109f, 0.0f, 0x1.67279p-104f, 0.0f, 0.0f, 0.0f, 0x1.f85c5p-28f, 0.0f,
     0.0f, 0x1.d45526p-33f, 0.0f, 0x1.6a2c78p-108f, 0x1.cfd5eap-30f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9669b4p-122f, 0x1.04f144p-51f, 0x1.a4a126p-107f,
     0x1.5ae55cp-65f, 0x1.6a0e64p-55f, 0x1.c441fp-126f, 0x1.a92aeap-35f, 0.0f, 0.0f,
     0x1.d93ddap-64f, 0x1.8a311ap-15f, 0.0f, 0.0f, 0x1.53081p-68f, 0x1.029d3ap-12f,
     0x1.5bffd2p-5f, 0x1.2a76b2p-56f, 0x1.433252p-97f, 0x1.90b1dcp-23f, 0.0f, 0.0f,
     0.0f, 0x1.4da1aap-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.442306p-97f, 0.0f, 0.0f,
     0x1.db7114p-64f, 0.0f, 0x1.dda882p-89f, 0.0f, 0.0f, 0x1.441c1cp-89f,
     0x1.1c9faep-49f, 0x1.d6cd08p-10f, 0x1.575392p-99f, 0.0f, 0x1.faf702p-78f, 0.0f,
     0.0f, 0.0f, 0x1.4c605ep-52f, 0x1.7aac3ep-113f, 0.0f, 0.0f, 0x1.e1b532p-113f,
     0x1.738da6p-121f, 0x1.c03b54p-43f, 0x1.8da5d2p-92f, 0.0f, 0x1.58ad64p-55f, 0.0f,
     0x1.dc68a4p-66f, 0x1.3bede2p-36f, 0.0f, 0x1.cecfc6p-28f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.09cb36p-1f, 0.0f, 0.0f, 0x1.9e4c0ap-107f, 0x1.8226d8p-18f, 0.0f, 0.0f,
     0x1.2b9602p-30f, 0.0f, 0.0f, 0x1.ea7a68p-76f, 0x1.96feeap-55f, 0.0f, 0.0f, 0.0f,
     0x1.5389cp-112f, 0x1.98a9c4p-34f, 0.0f, 0x1.d8345ap-113f, 0x1.cf2e04p-22f,
     0x1.87f34ep-107f, 0.0f, 0x1.25d75p-94f, 0.0f, 0.0f, 0x1.fc12cap-113f,
     0x1.6a3d82p-26f, 0.0f, 0x1.782e2ep-9f, 0.0f, 0.0f, 0x1.ac005ep-71f,
     0x1.341dcp-3f, 0x1.8d6744p-89f, 0.0f, 0.0f, 0.0f, 0x1.dc4e9cp-82f,
     0x1.cbd364p-67f, 0x1.97efa4p-106f, 0.0f, 0x1.98b4e6p-123f, 0.0f, 0.0f,
     0x1.942aa8p-78f, 0.0f, 0x1.ca369ap-17f, 0.0f, 0x1.a0c63ep-8f, 0.0f, 0.0f,
     0x1.73b0e6p-47f, 0.0f, 0.0f, 0.0f, 0x1.c6a84p-73f, 0.0f, 0x1.c1c32p-82f,
     0x1.3aea6cp-44f, 0x1.695468p-50f, 0x1.50cdd4p-63f, 0x1.9f9328p-14f,
     0x1.be91f6p-86f, 0.0f, 0x1.0ba696p-125f, 0.0f, 0.0f, 0x1.203f36p-37f, 0.0f,
     0x1.27312cp-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eae6cap-44f, 0x1.59d6dp-43f,
     0x1.0c252p-71f, 0.0f, 0.0f, 0x1.3f1f96p-116f, 0.0f, 0x1.516398p-53f,
     0x1.b1a4bep-51f, 0x1.3954eap-58f, 0x1.851976p-19f, 0x1.6a4a06p-112f, 0.0f,
     0x1.a7952p-3f, 0.0f, 0.0f, 0x1.2a3f7ap-34f, 0x1.f2e3d4p-68f, 0x1.6b90fp-75f,
     0.0f, 0x1.fa31bcp-104f, 0x1.052c42p-27f, 0x1.e01f68p-13f, 0x1.a7c62ep-80f,
     0x1.e7ca52p-71f, 0x1.594a84p-114f, 0x1.e14e7ep-62f, 0x1.d616dap-80f,
     0x1.986d8ap-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d8a4d6p-85f, 0.0f, 0.0f, 0.0f,
     0x1.3fc126p-16f, 0.0f, 0.0f, 0x1.a2f7a6p-22f, 0x1.12422ap-89f, 0x1.d7a782p-4f,
     0x1.883034p-57f, 0x1.7375dap-37f, 0x1.674938p-13f, 0x1.436738p-87f,
     0x1.e1c286p-119f, 0x1.3f3bb8p-103f, 0.0f, 0x1.097df2p-85f, 0.0f, 0x1.7c3898p-77f,
     0x1.09b3cp-114f, 0.0f, 0x1.5d2e9ep-13f, 0.0f, 0.0f, 0x1.98506cp-75f, 0.0f,
     0x1.4d1ce8p-83f, 0x1.e9d8f4p-104f, 0x1.dbc3ep-60f, 0.0f, 0x1.47aac6p-27f, 0.0f,
     0.0f, 0.0f, 0x1.2527bep-15f, 0.0f, 0.0f, 0.0f, 0x1.77146p-102f, 0x1.a49184p-91f,
     0x1.c7edfep-51f, 0x1.0ece6ep-8f, 0x1.bf37c6p-108f, 0.0f, 0x1.09aedep-54f,
     0x1.a718eep-50f, 0.0f, 0x1.8b7a22p-6f, 0.0f, 0x1.3d58c8p-5f, 0x1.c8b298p-26f,
     0.0f, 0.0f, 0.0f, 0x1.b29754p-63f, 0x1.5f2ad4p-58f, 0x1.10378ap-58f,
     0x1.5835a8p-71f, 0x1.2b969ep-49f, 0x1.f8ba76p-69f, 0x1.70fe78p-40f,
     0x1.9cf668p-46f, 0x1.3a356ep-74f, 0x1.84d148p-27f, 0x1.23a1p-50f,
     0x1.160188p-106f, 0.0f, 0x1.9bf968p-66f, 0.0f, 0x1.e2eff6p-96f, 0.0f, 0.0f,
     0x1.73c9e4p-114f, 0.0f, 0x1.2d818ep-116f, 0.0f, 0x1.850536p-12f, 0x1.f53242p-94f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f197f2p-19f, 0.0f, 0.0f, 0.0f, 0x1.c4a612p-15f, 0.0f,
     0x1.7d0c12p-30f, 0.0f, 0x1.1539eep-124f, 0.0f, 0.0f, 0.0f, 0x1.95f84cp-13f,
     0x1.81c192p-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.52df4cp-118f, 0x1.6f7baep-45f, 0.0f,
     0x1.49f908p-103f, 0x1.a029c2p-71f, 0x1.493836p-83f, 0.0f, 0x1.1ab6ecp-34f,
     0x1.79a202p-48f, 0.0f, 0x1.1ad33ap-16f, 0.0f, 0x1.37fc1ep-46f, 0.0f,
     0x1.565698p-46f, 0x1.f6aee4p-61f, 0.0f, 0x1.4ac214p-14f, 0x1.ed9364p-85f, 0.0f,
     0x1.3049ep-63f, 0.0f, 0.0f, 0.0f, 0x1.384674p-17f, 0.0f, 0x1.ab14acp-2f,
     0x1.7c966cp-94f, 0x1.c397d8p-8f, 0x1.f7d0bcp-25f, 0x1.f1d16cp-19f,
     0x1.040142p-24f, 0.0f, 0x1.e95f72p-92f, 0.0f, 0x1.ad01c2p-73f, 0x1.bee646p-31f,
     0.0f, 0x1.782e4p-94f, 0x1.023854p-92f, 0.0f, 0x1.fafc24p-75f, 0x1.89a70cp-21f,
     0x1.eba552p-13f, 0x1.98a898p-40f, 0.0f, 0x1.6805e4p-13f, 0x1.18ce2p-41f,
     0x1.bbf4d6p-114f, 0x1.b50738p-106f, 0.0f, 0.0f, 0.0f, 0x1.56017p-98f,
     0x1.69a1f6p-64f, 0.0f, 0x1.eae232p-38f, 0x1.db385cp-79f, 0x1.8e52b2p-77f,
     0x1.d1d0f4p-16f, 0x1.a3da28p-101f
};
static const float external_bench_wrapper_input_table_arg1[1008]  = {
     0x1.36a4ccp-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c11c8p-93f, 0x1.42748p-22f, 0.0f,
     0x1p0f, 0.0f, 0.0f, 0x1.c5735ap-102f, 0.0f, 0x1.364c24p-103f, 0x1.cd49eep-99f,
     0.0f, 0x1.f70bdcp-88f, 0.0f, 0.0f, 0.0f, 0x1.f697eep-125f, 0x1.af788ep-92f,
     0x1.906324p-108f, 0.0f, 0.0f, 0.0f, 0x1.d10f44p-52f, 0.0f, 0.0f, 0x1.975e5ep-25f,
     0.0f, 0x1.636cbp-6f, 0x1.1c7a92p-29f, 0.0f, 0.0f, 0x1.175c66p-19f,
     0x1.a53c46p-40f, 0x1.de30eap-13f, 0.0f, 0x1.a21f1p-48f, 0.0f, 0.0f,
     0x1.d03b68p-44f, 0x1.01a5a4p-22f, 0x1.bc7714p-108f, 0.0f, 0.0f, 0x1.d05352p-39f,
     0.0f, 0.0f, 0x1.404abep-83f, 0.0f, 0x1.83df5ep-78f, 0x1p0f, 0.0f, 0.0f,
     0x1.d70eacp-116f, 0x1.76e274p-88f, 0x1.f71aap-47f, 0x1.f5802p-103f,
     0x1.d7e912p-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e0147ep-26f, 0.0f,
     0x1.d7ec18p-108f, 0.0f, 0.0f, 0x1.edbb96p-74f, 0.0f, 0x1.7dc16ep-26f,
     0x1.d66f84p-14f, 0.0f, 0.0f, 0.0f, 0x1.e43daap-96f, 0x1.62989ap-61f, 0.0f,
     0x1.0a3c18p-53f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.947e4ep-19f,
     0x1.496eccp-117f, 0x1.e281dp-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0a435cp-77f,
     0x1.c1371ep-3f, 0.0f, 0x1.419272p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.be01bp-49f,
     0x1.42eb68p-32f, 0x1.163064p-19f, 0.0f, 0x1.e3a2c6p-94f, 0.0f, 0.0f,
     0x1.e2d966p-42f, 0.0f, 0.0f, 0x1.b29264p-112f, 0.0f, 0.0f, 0x1.e3c64cp-79f,
     0x1.8433e2p-115f, 0.0f, 0x1.a131f2p-18f, 0x1.f3f412p-31f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.42601p-28f, 0.0f, 0x1.3d79fp-82f, 0x1.527916p-74f, 0.0f,
     0x1.7120c6p-79f, 0x1.59375ep-37f, 0x1.c3152ep-17f, 0x1.1fcbeap-68f,
     0x1.6e0c76p-65f, 0x1.51af64p-50f, 0x1.1176bp-78f, 0x1.c88d58p-13f, 0.0f, 0.0f,
     0.0f, 0x1.8aabdp-125f, 0x1.3f9a32p-1f, 0x1.201c9cp-116f, 0.0f, 0x1.c69e62p-78f,
     0x1.a3b496p-44f, 0x1.27229p-70f, 0x1.b9baeap-25f, 0x1.8f22p-32f, 0.0f,
     0x1.11381cp-57f, 0.0f, 0x1.48843cp-36f, 0.0f, 0x1.f83c38p-69f, 0x1.867e92p-109f,
     0x1.569bc2p-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.22965ap-104f, 0.0f,
     0x1.1e2a96p-123f, 0x1.50dc36p-42f, 0.0f, 0.0f, 0x1.16e59p-98f, 0.0f, 0.0f,
     0x1.e2199ep-89f, 0.0f, 0x1.740a34p-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c4210ap-126f,
     0x1.5f0e96p-114f, 0x1.27eee8p-9f, 0x1.89c272p-30f, 0.0f, 0x1.ec2cfep-38f, 0.0f,
     0.0f, 0x1.6807d8p-20f, 0x1.e49e06p-93f, 0x1.f9e776p-75f, 0x1.5b274ep-33f,
     0x1.306a8p-34f, 0.0f, 0.0f, 0.0f, 0x1.aeeb46p-66f, 0x1.c75714p-41f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.23e8acp-121f, 0.0f, 0.0f, 0x1.d5a15cp-19f,
     0x1.ef26dcp-49f, 0.0f, 0.0f, 0x1.f6abcp-75f, 0.0f, 0.0f, 0x1.390b28p-23f,
     0x1.d0b7ap-14f, 0.0f, 0x1.0997d2p-93f, 0x1.22107p-55f, 0.0f, 0.0f,
     0x1.dcde62p-106f, 0x1.4d8762p-63f, 0x1.f9709ep-31f, 0x1.9563dcp-87f,
     0x1.fbd39cp-112f, 0x1.03b5e6p-99f, 0x1.72210ap-59f, 0x1.b686fep-101f,
     0x1.670cb8p-49f, 0x1.2e4ef2p-110f, 0x1.471a2ep-33f, 0.0f, 0x1.62ed18p-106f,
     0x1.b873d2p-20f, 0x1.6fc1dep-78f, 0x1.338314p-104f, 0.0f, 0x1.511d94p-91f, 0.0f,
     0x1.3e4d7p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e8c89ep-12f, 0x1.473246p-113f, 0.0f,
     0x1.1a2e7cp-27f, 0x1.4c086cp-58f, 0x1.dc4efap-40f, 0.0f, 0.0f, 0.0f,
     0x1.64abccp-63f, 0.0f, 0.0f, 0x1.7ca6bp-93f, 0.0f, 0x1.e1ebap-86f, 0.0f, 0.0f,
     0.0f, 0x1.b523cep-35f, 0.0f, 0.0f, 0x1.63dd34p-89f, 0.0f, 0.0f, 0x1.d0309ap-93f,
     0x1.d5ff42p-112f, 0.0f, 0x1.2f6caep-98f, 0x1.7f481ap-68f, 0x1.676168p-35f, 0.0f,
     0x1.1c03d2p-35f, 0x1.6a247cp-5f, 0x1.bae312p-95f, 0x1.9b97f6p-94f, 0.0f, 0.0f,
     0.0f, 0x1.22135ep-9f, 0x1.a71bd2p-33f, 0x1.e590c4p-13f, 0x1.95e788p-42f,
     0x1.102cbp-126f, 0x1.afa04p-4f, 0.0f, 0.0f, 0x1.2e681p-73f, 0x1.40b3f4p-45f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6a050ap-35f, 0.0f, 0x1.e27a42p-51f,
     0x1.6e2b5cp-96f, 0.0f, 0x1.673ecap-107f, 0.0f, 0x1.42dbecp-56f, 0x1.59c492p-57f,
     0.0f, 0.0f, 0x1.5c406ep-10f, 0.0f, 0x1.439978p-94f, 0x1.2ee696p-98f, 0.0f, 0.0f,
     0.0f, 0x1.347ddep-32f, 0x1.b5f732p-30f, 0.0f, 0.0f, 0x1.b59c56p-100f, 0.0f,
     0x1.d5c5e6p-126f, 0x1.743184p-99f, 0x1.9eba6ep-104f, 0x1.802d08p-109f,
     0x1.e1b5d4p-94f, 0.0f, 0x1p0f, 0x1.c249d4p-48f, 0.0f, 0.0f, 0x1.b9c83p-113f,
     0.0f, 0x1.0e9822p-10f, 0.0f, 0.0f, 0x1.9e857cp-7f, 0x1.111ee8p-42f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d0f32p-112f, 0x1.76b6ccp-62f, 0x1.c749aep-49f, 0.0f,
     0x1.6a2b52p-60f, 0x1.75d6aep-94f, 0.0f, 0x1.6ff3d8p-43f, 0x1.1ad7cep-36f,
     0x1.3e90f2p-124f, 0x1p0f, 0x1.9bb778p-21f, 0.0f, 0.0f, 0x1.9558acp-67f, 0.0f,
     0.0f, 0x1.9d2f58p-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bfc00ap-46f,
     0x1.510a9p-108f, 0.0f, 0x1.7d34fap-102f, 0.0f, 0.0f, 0x1.e8d998p-59f, 0.0f,
     0x1.7dc452p-119f, 0x1.894d64p-6f, 0x1.03c384p-46f, 0x1.fb7572p-6f,
     0x1.b9afacp-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ebb34ap-116f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9c4854p-19f, 0x1.4482ccp-23f, 0.0f, 0.0f, 0x1.2308c4p-90f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.04c7aap-82f, 0.0f, 0x1.471a18p-121f, 0x1.25f3f2p-81f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.284f96p-28f, 0x1.803886p-28f, 0.0f, 0.0f,
     0x1.2722d6p-52f, 0x1.3c3f9cp-22f, 0.0f, 0.0f, 0x1.5e761p-1f, 0.0f, 0.0f,
     0x1.9456cp-52f, 0x1.5dafbap-45f, 0.0f, 0x1.4cc056p-85f, 0.0f, 0x1.df05d4p-12f,
     0.0f, 0x1.c632a2p-67f, 0x1.beab0cp-108f, 0.0f, 0x1.c40b6p-109f, 0.0f, 0.0f,
     0x1.d74d74p-110f, 0x1.0d045cp-102f, 0.0f, 0.0f, 0x1.58f314p-87f, 0x1.5ae45cp-52f,
     0x1.b766fep-36f, 0x1.27e73p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.972444p-56f, 0.0f,
     0x1.2dd5d4p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.40857p-107f, 0x1.481fe4p-121f,
     0x1.ec2816p-66f, 0.0f, 0.0f, 0.0f, 0x1.1fba38p-87f, 0.0f, 0x1.8a9576p-122f,
     0x1.d2fd8ep-118f, 0x1.ce5378p-92f, 0.0f, 0x1.c91786p-87f, 0.0f, 0x1.a32e94p-32f,
     0x1.eb316p-36f, 0x1.16ee9p-39f, 0x1.8de6dap-46f, 0x1.d307b4p-51f, 0.0f, 0.0f,
     0.0f, 0x1.088c82p-5f, 0.0f, 0.0f, 0x1.25f40cp-105f, 0x1.7100c6p-84f, 0.0f,
     0x1.725e48p-2f, 0.0f, 0.0f, 0.0f, 0x1.90c1b6p-73f, 0.0f, 0x1.e28ac8p-21f, 0.0f,
     0x1.50db74p-64f, 0x1.a047bep-13f, 0.0f, 0.0f, 0.0f, 0x1.f13d88p-91f, 0.0f,
     0x1.2ccdeep-69f, 0x1.181cc6p-21f, 0.0f, 0x1.7b95ep-115f, 0x1.f2e22ep-38f,
     0x1.2b4008p-116f, 0.0f, 0.0f, 0.0f, 0x1.6cc706p-18f, 0.0f, 0x1.81953ep-95f,
     0x1.2fb668p-9f, 0x1.4761dap-1f, 0.0f, 0x1.ad071p-81f, 0x1.e124acp-50f,
     0x1.13526ap-80f, 0x1.041b46p-91f, 0.0f, 0x1.7d7bd8p-56f, 0x1.d05f82p-104f, 0.0f,
     0.0f, 0.0f, 0x1.9c93b6p-97f, 0x1.bc7404p-19f, 0x1.e651bep-107f, 0.0f,
     0x1.ae4624p-98f, 0x1.d5803ep-12f, 0.0f, 0.0f, 0.0f, 0x1.bdd32cp-24f, 0.0f,
     0x1.f9bf74p-81f, 0x1.00a5ap-48f, 0x1.8e3164p-64f, 0.0f, 0.0f, 0x1.aa6ec8p-24f,
     0x1.4f7678p-81f, 0x1.e7f122p-92f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1p0f, 0.0f,
     0x1.85e81ep-16f, 0.0f, 0.0f, 0x1.790a2ap-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.6de1fap-21f, 0.0f, 0.0f, 0x1.a670cep-86f, 0x1.c6b988p-5f,
     0x1.ab4f92p-111f, 0x1.48085cp-81f, 0.0f, 0x1.796cb4p-52f, 0.0f, 0.0f, 0.0f,
     0x1.d1760cp-9f, 0.0f, 0x1.e05a4p-108f, 0x1.35facp-2f, 0x1.3e2694p-108f, 0.0f,
     0x1.e6a9f2p-25f, 0.0f, 0.0f, 0.0f, 0x1.7187bp-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b2893ep-98f, 0.0f, 0.0f, 0x1.61ed0ep-90f,
     0.0f, 0x1.c23692p-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c2a37ep-51f,
     0x1.ed450ep-6f, 0x1.4b9b44p-67f, 0.0f, 0x1.ea72bep-49f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3d9ed2p-40f, 0.0f, 0.0f, 0x1.55b4d8p-48f, 0.0f, 0x1.7f3874p-115f,
     0x1.614c06p-2f, 0.0f, 0.0f, 0x1.51d2c6p-109f, 0.0f, 0.0f, 0.0f, 0x1.8371dp-11f,
     0.0f, 0.0f, 0.0f, 0x1.4d430ap-118f, 0x1.e9203ap-79f, 0.0f, 0.0f,
     0x1.24ca24p-126f, 0.0f, 0.0f, 0x1.ccb7bep-59f, 0x1.81ba04p-121f, 0.0f,
     0x1.1958f6p-88f, 0x1.da855cp-38f, 0.0f, 0.0f, 0x1.b59658p-34f, 0.0f,
     0x1.3ac2dap-84f, 0.0f, 0.0f, 0x1.281cb8p-89f, 0x1.38164ep-54f, 0x1.480ac8p-1f,
     0.0f, 0x1.dc0624p-114f, 0.0f, 0.0f, 0x1.6537d4p-108f, 0.0f, 0.0f,
     0x1.6d2fa4p-126f, 0.0f, 0.0f, 0x1.5c1c96p-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c1c1dp-50f, 0.0f, 0.0f, 0x1.9c5546p-58f, 0x1.4e738cp-13f, 0.0f,
     0x1.61b71ep-7f, 0x1.3d8de6p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8ea32ap-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b72ffep-14f, 0x1.3bd746p-23f, 0.0f,
     0.0f, 0.0f, 0x1.c1b2d8p-19f, 0.0f, 0.0f, 0x1.962472p-59f, 0.0f, 0x1.92fbfcp-33f,
     0x1.7cd808p-50f, 0x1.a7742p-53f, 0.0f, 0x1.678f74p-82f, 0x1.c5da76p-117f, 0.0f,
     0.0f, 0.0f, 0x1.0e99b4p-72f, 0.0f, 0.0f, 0x1.fac5c8p-14f, 0.0f, 0x1.421a6p-95f,
     0x1.7c1574p-64f, 0.0f, 0.0f, 0x1.ee7f9ep-97f, 0x1.852944p-14f, 0x1.171e28p-34f,
     0.0f, 0.0f, 0.0f, 0x1.13582cp-115f, 0.0f, 0x1.347be2p-44f, 0x1.fc2a68p-94f, 0.0f,
     0.0f, 0x1.56eefp-51f, 0x1.5c884cp-53f, 0.0f, 0.0f, 0.0f, 0x1.6d976p-41f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.db745cp-106f, 0x1.e0e87ep-3f, 0x1.f030bep-85f, 0.0f,
     0.0f, 0.0f, 0x1.712a38p-53f, 0x1.ec85fep-111f, 0.0f, 0x1.d891c4p-39f,
     0x1.60836ep-36f, 0.0f, 0x1.a9d08ep-88f, 0.0f, 0x1.ba513p-112f, 0.0f, 0.0f,
     0x1.85d7a8p-96f, 0x1.0c2e38p-62f, 0x1.76bd72p-74f, 0x1.a6b748p-99f,
     0x1.4b5fep-76f, 0x1.6cccc4p-82f, 0x1.b78456p-113f, 0.0f, 0x1.369a02p-46f, 0.0f,
     0x1.59fff4p-65f, 0.0f, 0x1.352382p-122f, 0.0f, 0x1.fbdc2p-44f, 0x1.353f1p-68f,
     0x1.a0c116p-34f, 0x1.2f2e9cp-86f, 0x1.204ep-91f, 0.0f, 0.0f, 0x1.e4074ap-59f,
     0.0f, 0x1.51d74ap-84f, 0.0f, 0.0f, 0.0f, 0x1.3d2a66p-73f, 0.0f, 0.0f,
     0x1.d9d1fp-88f, 0x1.b91a1cp-34f, 0x1.245f3ep-72f, 0x1.c71c92p-89f,
     0x1.2d9ac6p-43f, 0.0f, 0.0f, 0x1.26c474p-69f, 0.0f, 0.0f, 0x1.8fa0e4p-74f, 0.0f,
     0.0f, 0x1.883e62p-47f, 0.0f, 0x1.401adap-70f, 0x1.08de9cp-58f, 0.0f, 0.0f, 0.0f,
     0x1.ae2afcp-11f, 0.0f, 0x1.53295ap-59f, 0.0f, 0x1.3776bap-8f, 0x1.db39a8p-102f,
     0x1.3bd03ap-126f, 0x1.612e7cp-35f, 0x1.d973bap-22f, 0x1.03e5dcp-63f,
     0x1.4a4498p-113f, 0x1.bbaf58p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5c14ecp-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c91088p-41f, 0x1.e823fp-48f,
     0x1.5a2706p-88f, 0.0f, 0.0f, 0.0f, 0x1.062942p-44f, 0.0f, 0.0f, 0.0f,
     0x1.d7f04p-4f, 0x1.8c8caep-59f, 0x1.75b9dcp-39f, 0.0f, 0x1.ace4e6p-6f, 0.0f,
     0x1.2429p-63f, 0x1.9d7d5ap-105f, 0.0f, 0.0f, 0x1.26358cp-111f, 0x1.f9ab4ep-51f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.077912p-12f, 0x1.94f1c2p-98f, 0.0f, 0x1.ff73ep-23f,
     0.0f, 0.0f, 0x1.d41b5ep-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.83312p-89f,
     0x1.af63cap-86f, 0.0f, 0x1.a77606p-90f, 0.0f, 0x1.923832p-117f, 0.0f,
     0x1.192852p-48f, 0x1.783a98p-11f, 0x1.3bc00ep-95f, 0.0f, 0x1.da49f8p-116f, 0.0f,
     0x1.4d13d6p-48f, 0.0f, 0.0f, 0x1.963ac2p-46f, 0x1.ed8812p-78f, 0x1.f4d14ep-93f,
     0x1.13f944p-84f, 0x1.a5c6e8p-113f, 0.0f, 0x1.7d6fap-61f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5afacap-108f, 0.0f, 0.0f, 0.0f, 0x1.14ab6ep-13f, 0x1.a14f3cp-108f,
     0x1.a86c68p-57f, 0.0f, 0x1.91c4eap-78f, 0.0f, 0x1.5753d4p-41f, 0.0f, 0.0f,
     0x1.4ba06ap-31f, 0.0f, 0x1.fe666ep-23f, 0x1.1ff3b6p-51f, 0x1.99a2cap-30f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5fc4eap-50f, 0.0f, 0.0f, 0.0f,
     0x1.32d6e8p-79f, 0.0f, 0x1.4d3d48p-101f, 0.0f, 0x1.c1e6cp-27f, 0x1.594dd2p-25f,
     0x1.501676p-103f, 0.0f, 0.0f, 0x1.ed5722p-75f, 0.0f, 0x1.926546p-30f, 0.0f, 0.0f,
     0x1.96af94p-103f, 0.0f, 0x1.0381aap-104f, 0x1.854052p-5f, 0x1.0fad1ap-75f, 0.0f,
     0x1.57955ep-32f, 0.0f, 0x1.1e6366p-41f, 0.0f, 0.0f, 0x1.f0448ap-10f, 0.0f,
     0x1.edcc46p-116f, 0.0f, 0x1.ef763ep-76f, 0x1.459d3p-115f, 0.0f, 0x1.d2b21cp-119f,
     0.0f, 0.0f, 0x1.1f7a1p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8088e6p-18f, 0x1.af0beep-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5f9558p-38f, 0.0f, 0.0f, 0x1.c6b45p-50f, 0.0f, 0.0f, 0x1.07f7eap-46f,
     0x1.4a797cp-85f, 0.0f, 0.0f, 0x1.05f77ep-72f, 0x1.a0e778p-87f, 0.0f, 0.0f,
     0x1.78e6dcp-55f, 0.0f, 0.0f, 0x1.ce150ap-29f, 0.0f, 0x1.4e307cp-4f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.1048e4p-18f, 0x1.a07a2p-88f, 0.0f, 0.0f,
     0x1.16af36p-126f, 0.0f, 0x1.9f885p-116f, 0x1.6ba094p-83f
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
            tmp2 = Sleef_finz_copysignf8_kvx(tmp0, tmp1);
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
    printf("Sleef_finz_copysignf8_kvx %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_finz_copysignf8_kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
