/**
 * generated using metalibm 1.1
 * sha1 git: b'"3425a70973ff93e510359b9b2fa45754ebf43279"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_acoshf.c --function acoshf --headers math.h,ml_support_lib.h \
 *     --input-formats binary32 --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <math.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile float external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.8b05bap-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.be35cap-100f, 0x1.a214eap-26f, 0.0f, 0.0f, 0x1.67ccc4p-119f,
     0x1.48808cp-105f, 0.0f, 0x1.a8a35ep-61f, 0.0f, 0x1.62a8c4p-38f, 0x1.0d0746p-43f,
     0.0f, 0.0f, 0x1.7433c6p-80f, 0x1.401908p-24f, 0x1.a8e7fep-109f, 0.0f,
     0x1.c94e56p-61f, 0.0f, 0x1.2ca434p-61f, 0.0f, 0.0f, 0.0f, 0x1.43dd8ap-17f, 0.0f,
     0x1.b0176ep-87f, 0x1.874f6ep-22f, 0x1.a8ba7ap-64f, 0.0f, 0x1.167d2ep-87f, 0.0f,
     0.0f, 0.0f, 0x1.52b436p-22f, 0.0f, 0.0f, 0x1.66ac04p-83f, 0x1.01364p-89f,
     0x1.34e7d2p-45f, 0x1.411b98p-70f, 0x1.06a296p-67f, 0.0f, 0.0f, 0x1.8d64b2p-88f,
     0x1.7b4984p-13f, 0.0f, 0x1.78fe54p-94f, 0x1.6b6bd4p-108f, 0.0f, 0.0f,
     0x1.2d874cp-90f, 0.0f, 0x1.d9edcp-70f, 0x1.ba0b62p-55f, 0x1.fe387p-5f,
     0x1.3e5d4ap-77f, 0x1.e1dbb6p-75f, 0.0f, 0.0f, 0.0f, 0x1.95ad2cp-36f, 0.0f, 0.0f,
     0x1.7bd26cp-30f, 0x1p0f, 0x1.25e176p-86f, 0x1.bd9becp-100f, 0x1.7a8042p-80f,
     0.0f, 0.0f, 0x1.c7da16p-66f, 0.0f, 0x1.d9af06p-112f, 0.0f, 0x1.d9d7bep-105f,
     0x1.5eb28ep-44f, 0.0f, 0x1.c6b61ep-8f, 0x1.8ef55p-18f, 0.0f, 0x1.69fae6p-15f,
     0x1.14f372p-15f, 0.0f, 0.0f, 0.0f, 0x1.1d6576p-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.44e83ep-36f, 0x1.84f84ap-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3e5ebap-97f, 0x1.3bfddcp-57f, 0.0f, 0.0f, 0x1.d6bf88p-116f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.9e41f4p-86f, 0.0f, 0.0f, 0.0f, 0x1.750e96p-57f, 0x1.c4be1ap-112f,
     0x1.efff0cp-48f, 0x1.874776p-26f, 0.0f, 0x1.3f148p-77f, 0x1.2f7f2ap-57f, 0.0f,
     0.0f, 0x1.d9a1ap-18f, 0.0f, 0.0f, 0.0f, 0x1.a399c2p-86f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.490b76p-38f, 0.0f, 0x1.9893dcp-59f, 0.0f, 0x1.a7531cp-69f, 0.0f,
     0x1.91f3f8p-99f, 0x1.4a6244p-16f, 0.0f, 0x1.82e91ap-117f, 0.0f, 0x1.ef8b88p-89f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.76aae6p-23f, 0x1.fa1a3cp-17f, 0x1.b622ccp-31f,
     0x1.61ef1cp-13f, 0x1.1775fcp-82f, 0x1.35714p-118f, 0.0f, 0.0f, 0x1.214d2ep-34f,
     0x1.36fe2ap-20f, 0x1.0cb294p-92f, 0.0f, 0x1.9f6638p-71f, 0x1.0ac8f2p-90f,
     0x1.de9f18p-70f, 0x1.c382e8p-110f, 0.0f, 0x1.fea3bep-113f, 0.0f, 0x1.696db2p-55f,
     0.0f, 0x1.d8c1acp-30f, 0.0f, 0x1.500936p-96f, 0x1.763c5ap-17f, 0x1.652dccp-55f,
     0x1.b87a84p-107f, 0.0f, 0x1.a7c196p-52f, 0.0f, 0.0f, 0x1.a79f9ap-18f,
     0x1.9b0cfcp-85f, 0.0f, 0x1.9ec0ccp-85f, 0.0f, 0.0f, 0x1.261454p-105f, 0.0f,
     0x1.8764e2p-6f, 0.0f, 0x1.77823p-31f, 0.0f, 0.0f, 0x1.9b4062p-97f,
     0x1.a837b2p-56f, 0x1.34cb06p-45f, 0x1.90b394p-42f, 0x1.929046p-37f,
     0x1.4ae668p-109f, 0.0f, 0.0f, 0x1.1e700ap-94f, 0.0f, 0.0f, 0x1.497c14p-70f,
     0x1.280962p-52f, 0x1.faf90ap-36f, 0.0f, 0x1.ad7bfp-51f, 0x1.4b8f38p-94f,
     0x1.52f5dp-64f, 0x1.da79b4p-122f, 0.0f, 0.0f, 0x1.579d16p-91f, 0x1.ba396cp-19f,
     0.0f, 0.0f, 0x1.d9df68p-65f, 0.0f, 0.0f, 0x1.82dccap-92f, 0.0f, 0x1.0fe3fap-9f,
     0x1.b175f8p-13f, 0x1.e253f8p-22f, 0.0f, 0x1.397e54p-62f, 0.0f, 0x1.e0cc14p-34f,
     0x1.cdfb6p-59f, 0.0f, 0x1.54b27ap-88f, 0.0f, 0.0f, 0x1.9e5b68p-52f,
     0x1.9e93bcp-2f, 0x1.f108bep-86f, 0x1.67c69ep-104f, 0x1.3eb602p-78f,
     0x1.78b48ap-27f, 0.0f, 0x1.c9fe4p-103f, 0x1.a4117p-102f, 0x1.5584ccp-111f, 0.0f,
     0x1.25a938p-75f, 0.0f, 0x1.e28024p-61f, 0x1.4227dep-22f, 0x1.48e00ap-28f, 0.0f,
     0x1.8a8672p-124f, 0x1.cb7c7ep-68f, 0x1.647d3p-17f, 0.0f, 0x1.cc0976p-7f, 0.0f,
     0x1.8bba5ap-120f, 0.0f, 0x1.76735p-13f, 0x1.5d0c62p-25f, 0.0f, 0.0f, 0.0f,
     0x1.d7e482p-41f, 0.0f, 0x1.a0e8d8p-21f, 0x1.e4fe08p-88f, 0x1.7282aep-6f, 0.0f,
     0x1.f0a7cap-87f, 0x1.22d214p-59f, 0x1.e306c8p-108f, 0x1.876e58p-39f,
     0x1.ce2e36p-39f, 0.0f, 0.0f, 0.0f, 0x1.33f542p-30f, 0x1.8fd232p-91f, 0.0f, 0.0f,
     0x1.a02adap-16f, 0x1.9706fep-66f, 0x1.32f6e8p-41f, 0.0f, 0.0f, 0.0f,
     0x1.37c726p-73f, 0.0f, 0x1.912c22p-74f, 0.0f, 0.0f, 0x1.b778e4p-77f, 0.0f, 0.0f,
     0x1.094abcp-74f, 0x1.9a7544p-22f, 0.0f, 0.0f, 0.0f, 0x1.9cfc1ep-74f, 0.0f, 0.0f,
     0x1.3e11bep-19f, 0.0f, 0.0f, 0x1.76925p-123f, 0.0f, 0.0f, 0x1.8375fep-117f,
     0x1.9b40eap-10f, 0.0f, 0x1.6d1076p-18f, 0x1.fad808p-43f, 0.0f, 0x1.0b0ddep-108f,
     0x1.b83412p-37f, 0x1.7fc3d4p-84f, 0.0f, 0.0f, 0.0f, 0x1.da1674p-41f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.78b696p-80f, 0.0f, 0x1.8f8a16p-15f, 0.0f, 0.0f, 0x1.345c5cp-77f,
     0.0f, 0.0f, 0.0f, 0x1.9cf5d2p-30f, 0x1.64e096p-22f, 0.0f, 0x1.e29b4ap-100f,
     0x1.d29c8cp-94f, 0x1.547742p-89f, 0.0f, 0.0f, 0x1.9c72b4p-67f, 0x1.30b328p-113f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0a7164p-80f, 0x1.e32fa6p-101f, 0.0f,
     0x1.7bd316p-54f, 0.0f, 0.0f, 0x1.04339ap-51f, 0x1.7128b6p-29f, 0.0f, 0.0f, 0.0f,
     0x1.ed1ffp-16f, 0.0f, 0x1.6d89f2p-23f, 0.0f, 0.0f, 0x1.c4a502p-49f, 0.0f,
     0x1.a3d968p-36f, 0x1.705454p-119f, 0x1.97b238p-66f, 0x1.37db4ap-13f, 0.0f, 0.0f,
     0x1.49f7e6p-43f, 0.0f, 0x1.85bc5ap-112f, 0x1.64ef6cp-56f, 0.0f, 0x1.67e59ap-17f,
     0x1.06f9fap-119f, 0x1.95d7c8p-62f, 0.0f, 0x1.3e4de2p-98f, 0x1.5dbdcep-5f, 0.0f,
     0x1.a545aap-70f, 0.0f, 0.0f, 0.0f, 0x1.10af8ep-73f, 0x1.5d2298p-96f,
     0x1.5659dp-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.76ac0ep-4f, 0x1.d514cap-94f,
     0x1.efce6ap-57f, 0.0f, 0x1.715bfep-122f, 0x1.a04db6p-17f, 0.0f, 0.0f, 0.0f,
     0x1.dea274p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dd59e4p-73f, 0x1.694ae4p-67f,
     0.0f, 0.0f, 0x1.16f91p-93f, 0.0f, 0x1.922d3ap-1f, 0.0f, 0x1.99126p-20f,
     0x1.61e54ep-112f, 0.0f, 0x1.e716dcp-46f, 0.0f, 0.0f, 0.0f, 0x1.5e5f7p-5f, 0.0f,
     0x1.f92d0cp-77f, 0x1.09aa9ep-58f, 0x1.3954fp-94f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ce5744p-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2c513ep-4f, 0x1.f0a028p-10f,
     0x1.ebd582p-63f, 0x1.a8f37ep-45f, 0x1.c86448p-29f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.856dap-19f, 0.0f, 0x1.a0edecp-8f, 0x1.7d52dap-3f, 0x1.ee138cp-66f, 0.0f,
     0x1.de3a74p-89f, 0x1.7bc224p-35f, 0.0f, 0.0f, 0.0f, 0x1.fb9f6ap-120f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d916ecp-45f, 0.0f, 0.0f,
     0x1.c25f9ep-112f, 0x1.21972p-65f, 0.0f, 0x1.93cf3p-64f, 0x1.b59b3ap-80f, 0.0f,
     0x1.c61b86p-100f, 0x1.5957e6p-60f, 0x1.8c16b6p-39f, 0x1.f843cep-9f,
     0x1.5f9cbp-49f, 0x1.382cep-12f, 0x1.d46c5ap-101f, 0x1.5eda58p-14f, 0.0f,
     0x1.b6d732p-119f, 0.0f, 0.0f, 0x1.4338bep-70f, 0.0f, 0x1.0a3f14p-11f, 0.0f, 0.0f,
     0x1.042412p-28f, 0.0f, 0.0f, 0.0f, 0x1.cd2356p-86f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bc8e36p-80f, 0x1.730a7ep-106f, 0.0f, 0.0f, 0x1.8e19e8p-5f, 0.0f, 0.0f,
     0x1.2c7ba8p-60f, 0.0f, 0x1.35fbd4p-54f, 0x1.1df212p-120f, 0x1.6251eap-124f,
     0x1.1201a2p-104f, 0.0f, 0.0f, 0x1.9b10bcp-55f, 0x1.df4db2p-29f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.8d902cp-25f, 0x1.6ed634p-34f, 0.0f, 0.0f, 0.0f, 0x1.265d26p-100f, 0.0f,
     0x1.4f46f6p-41f, 0x1.be5c44p-116f, 0.0f, 0x1.5ec168p-25f, 0x1.edb366p-124f,
     0x1.6a53c2p-19f, 0x1.cbbdd6p-101f, 0.0f, 0x1.f7dbb6p-11f, 0x1.369f48p-45f,
     0x1.4b1a58p-104f, 0.0f, 0x1.d70ccap-56f, 0x1.b3ea14p-80f, 0.0f, 0.0f, 0.0f,
     0x1.57913p-40f, 0x1.1acb78p-73f, 0.0f, 0.0f, 0.0f, 0x1.a134e2p-108f, 0.0f,
     0x1.c7141p-62f, 0x1.da6b16p-71f, 0.0f, 0.0f, 0x1.ede5d4p-87f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.066596p-60f, 0.0f, 0.0f, 0x1.a562a8p-46f, 0x1.d612d6p-46f,
     0x1.18896p-51f, 0x1.7fcebep-60f, 0.0f, 0x1.cc8f12p-49f, 0.0f, 0x1.d45254p-16f,
     0.0f, 0x1.d7148cp-22f, 0.0f, 0x1.9cb2d6p-71f, 0x1.dfa73p-4f, 0.0f, 0.0f, 0.0f,
     0x1.365eaap-83f, 0.0f, 0x1.971fbcp-42f, 0x1.8ac9c2p-15f, 0x1.cc847ap-84f, 0.0f,
     0.0f, 0.0f, 0x1.f03bcap-32f, 0x1.017028p-36f, 0x1.2d38dap-9f, 0.0f,
     0x1.1565a2p-68f, 0.0f, 0.0f, 0x1.7e7c9p-5f, 0.0f, 0x1.20150cp-64f,
     0x1.054b1p-98f, 0.0f, 0x1.ae9d7ep-37f, 0x1.879bdap-97f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.897d52p-75f, 0.0f, 0.0f, 0x1.e7b72ep-92f, 0.0f, 0x1.18cfe8p-103f,
     0x1.c84738p-95f, 0.0f, 0x1.65d308p-88f, 0.0f, 0.0f, 0x1.f4777cp-87f,
     0x1.0aeb38p-93f, 0x1.674bb4p-105f, 0x1.bd0424p-86f, 0.0f, 0.0f, 0x1.54171p-49f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.55c026p-70f, 0.0f, 0.0f, 0.0f,
     0x1.0e8c7ap-38f, 0x1.285de6p-91f, 0.0f, 0x1.9b2b4p-124f, 0x1.115a28p-98f,
     0x1.d817ccp-113f, 0x1.e3fa04p-17f, 0x1.0c817cp-39f, 0x1.a203p-6f,
     0x1.aadf8cp-108f, 0x1.3afae6p-61f, 0x1.dc4faep-51f, 0x1.7f8282p-78f, 0.0f,
     0x1.3c9d72p-1f, 0x1.6780ecp-58f, 0x1.2f5cbep-13f, 0x1.4d736cp-32f,
     0x1.99bdaap-124f, 0.0f, 0.0f, 0x1.96c7d6p-4f, 0x1.01a8b6p-108f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.334da4p-116f, 0.0f, 0x1.ad9264p-103f,
     0x1.5bbae8p-30f, 0.0f, 0.0f, 0.0f, 0x1.a4e75cp-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.7a8168p-81f, 0x1.98f82ep-21f, 0x1.8787a6p-124f, 0x1.3e0f1p-15f,
     0.0f, 0x1.589538p-44f, 0x1.09da96p-90f, 0.0f, 0.0f, 0.0f, 0x1.eb54eep-5f,
     0x1.7423ecp-74f, 0.0f, 0.0f, 0x1.2dfc56p-28f, 0x1.7120c2p-83f, 0.0f,
     0x1.b3c8c4p-97f, 0.0f, 0x1.bc7024p-87f, 0x1.ac141p-91f, 0.0f, 0.0f,
     0x1.3f5216p-26f, 0.0f, 0x1.8ffd04p-82f, 0.0f, 0.0f, 0x1.98f2e4p-21f,
     0x1.5d403ap-18f, 0.0f, 0.0f, 0.0f, 0x1.3d888cp-6f, 0x1.63ce72p-71f,
     0x1.caded8p-85f, 0.0f, 0.0f, 0x1.1a4c78p-123f, 0.0f, 0x1.a31168p-110f,
     0x1.e1b36ap-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.72ccbp-124f, 0x1.25a67ep-19f,
     0x1.abc25ep-57f, 0x1.c77b58p-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.78653cp-117f,
     0.0f, 0x1.392aacp-99f, 0.0f, 0.0f, 0x1.25a466p-124f, 0x1.2ac1b8p-34f,
     0x1.aa8dc2p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.718bbap-94f, 0.0f, 0x1.521fecp-118f,
     0.0f, 0.0f, 0.0f, 0x1.60322ep-120f, 0.0f, 0.0f, 0x1.bc1fa4p-114f, 0.0f,
     0x1.618426p-106f, 0x1.9e2ad6p-53f, 0.0f, 0.0f, 0.0f, 0x1.336ee8p-22f,
     0x1.2d4c2ap-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c43c0cp-6f, 0x1.a7fc42p-103f,
     0x1.942dap-96f, 0x1.74f076p-35f, 0x1.64904ap-94f, 0.0f, 0x1.ba23acp-11f,
     0x1.3e626cp-62f, 0x1.1a4e98p-27f, 0.0f, 0x1.66cfeep-87f, 0x1.80973ep-93f,
     0x1.94a922p-46f, 0x1.60292p-9f, 0x1.c2ea04p-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e154a2p-90f, 0.0f, 0.0f, 0x1.1adf42p-42f, 0x1.a05a6p-54f, 0x1.a6f4f8p-40f,
     0.0f, 0.0f, 0x1.98f206p-4f, 0.0f, 0x1.7044eep-100f, 0x1.79dca8p-42f,
     0x1.e798bcp-123f, 0.0f, 0x1.18f222p-99f, 0x1.f789eap-64f, 0x1.2309f6p-83f,
     0x1.2d387cp-122f, 0x1.27dc96p-4f, 0x1.4b6522p-41f, 0.0f, 0.0f, 0x1.abce48p-14f,
     0.0f, 0.0f, 0x1.91d202p-116f, 0.0f, 0x1.d2335ep-81f, 0x1.2f34c4p-19f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.09840cp-46f, 0x1.62f6fp-119f, 0x1.346c06p-52f, 0.0f, 0.0f,
     0.0f, 0x1.9d3518p-124f, 0x1.d059fap-64f, 0.0f, 0.0f, 0x1.366cap-84f,
     0x1.f0cd1ap-14f, 0.0f, 0.0f, 0x1.d3a5dap-90f, 0x1.2b109p-115f, 0.0f, 0.0f,
     0x1.a1cc68p-47f, 0.0f, 0x1.dc837cp-5f, 0x1.f209eep-23f, 0x1.6f5d6cp-65f, 0x1p0f,
     0x1.a9579ap-85f, 0.0f, 0x1.41a2a8p-44f, 0.0f, 0.0f, 0x1.6460fp-55f,
     0x1.d9631cp-23f, 0.0f, 0.0f, 0x1.dd2064p-73f, 0x1.c848d6p-5f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e603c6p-102f, 0.0f, 0.0f, 0x1.299582p-30f,
     0x1.1785dp-45f, 0x1.01fda8p-118f, 0x1.2d743ap-64f, 0x1.9f1bfep-120f, 0.0f,
     0x1.76edbp-104f, 0.0f, 0x1.7837b4p-117f, 0x1.1df2b2p-118f, 0.0f, 0x1.56bf64p-21f,
     0.0f, 0.0f, 0.0f, 0x1.0d1fcp-46f, 0.0f, 0x1.8bc956p-45f, 0.0f, 0x1.db3cb8p-64f,
     0x1.9a4f4ap-52f, 0.0f, 0x1.ca9b0ep-46f, 0x1.3181fp-45f, 0.0f, 0.0f,
     0x1.f4705ap-77f, 0x1.390604p-18f, 0.0f, 0.0f, 0.0f, 0x1.3273f6p-3f,
     0x1.c7d028p-81f, 0.0f, 0.0f, 0.0f, 0x1.39c05ep-122f, 0x1.1a3176p-51f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.0f8c06p-92f, 0x1.9e38d2p-29f, 0.0f, 0x1.f99b18p-55f,
     0x1.7e189cp-80f, 0.0f, 0x1.b92f4ap-74f, 0.0f, 0x1.060ddep-119f, 0x1.fc2736p-69f,
     0x1.bfe9fcp-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.569596p-48f, 0.0f,
     0x1.492366p-79f, 0x1.f4cc64p-24f, 0x1.28c91ap-6f, 0.0f, 0.0f, 0.0f,
     0x1.686932p-8f, 0.0f, 0.0f, 0x1.c6ea4cp-88f, 0x1.d6c688p-79f, 0x1.4587ccp-117f,
     0.0f, 0.0f, 0x1.111fccp-1f, 0.0f, 0x1.522e1ap-17f, 0x1.f43266p-57f,
     0x1.6022ap-117f, 0.0f, 0x1.77de42p-6f, 0x1.3b7fd4p-9f, 0.0f, 0x1.6a7fap-74f,
     0.0f, 0.0f, 0x1.fb2a6ap-8f, 0x1.e8463ep-42f, 0x1.2c5fcp-36f, 0x1.5aaa4p-88f,
     0.0f, 0x1.c489d6p-39f, 0.0f, 0.0f, 0.0f, 0x1.5ce10cp-126f, 0.0f, 0.0f,
     0x1.eed03cp-62f, 0.0f, 0x1.c0488ap-17f, 0x1.e174dp-21f, 0.0f, 0.0f,
     0x1.74d1bep-36f, 0.0f, 0x1.582e78p-5f, 0.0f, 0x1.ecc514p-40f, 0x1.48643ap-35f
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
            int32_t tmp3;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = acoshf(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = bench_acc + tmp1;
            bench_acc = tmp2;
            tmp3 = i + INT32_C(1);
            i = tmp3;
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
    printf("acoshf %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("acoshf bench acc %a\n", global_bench_acc);
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
