/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_ceilf1_purecfma.c --function Sleef_ceilf1_purecfma \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 --bench \
 *     --no-embedded-bin --target kv3
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
     0.0f, 0x1.56386p-92f, 0x1.9a84c6p-41f, 0.0f, 0x1.24483cp-69f, 0.0f, 0.0f, 0.0f,
     0x1.b5ec66p-46f, 0x1.f3eff4p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6840aep-34f,
     0.0f, 0.0f, 0.0f, 0x1.670756p-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.988fdp-106f,
     0x1.c32118p-92f, 0x1.ef45fp-28f, 0x1.382fbap-89f, 0x1.74f2dep-24f, 0.0f,
     0x1.0515b8p-22f, 0.0f, 0.0f, 0x1.7284bcp-9f, 0.0f, 0x1.f49c4cp-31f,
     0x1.648eaep-15f, 0x1.932ae8p-23f, 0.0f, 0x1.e31268p-22f, 0x1.68c78p-6f, 0.0f,
     0x1.861b68p-34f, 0x1.547f7cp-104f, 0.0f, 0.0f, 0x1.f7cf68p-45f, 0x1.ab3f1ap-4f,
     0.0f, 0x1.167f2p-26f, 0.0f, 0x1.0d3784p-65f, 0x1.d29028p-37f, 0x1.86181p-120f,
     0x1.6b1202p-78f, 0.0f, 0x1.512c7ap-56f, 0.0f, 0x1.0d2232p-25f, 0x1.655894p-51f,
     0.0f, 0x1.b69378p-78f, 0.0f, 0x1.85114p-79f, 0x1.16f25ep-57f, 0x1.84e448p-17f,
     0x1.96ba1cp-101f, 0x1.1aab52p-72f, 0x1.eda47cp-16f, 0x1.f25824p-109f,
     0x1.1ebc0ep-120f, 0.0f, 0x1.f9326ep-118f, 0.0f, 0x1.1771f6p-68f, 0.0f, 0.0f,
     0.0f, 0x1.cf16d2p-77f, 0x1.1adddp-111f, 0.0f, 0x1.e08392p-32f, 0x1.4f9086p-4f,
     0.0f, 0x1.d41034p-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.35d642p-98f,
     0.0f, 0.0f, 0.0f, 0x1.ff0984p-37f, 0.0f, 0.0f, 0x1.f37fdap-73f, 0.0f, 0.0f,
     0x1.0213fep-63f, 0x1.cf932p-75f, 0.0f, 0x1.01bab2p-4f, 0.0f, 0x1.a660f2p-38f,
     0.0f, 0x1.da9406p-29f, 0x1.df6924p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6553dcp-43f, 0.0f, 0x1.b6937ep-11f, 0.0f, 0x1.670f04p-120f, 0.0f,
     0x1.d2212ap-36f, 0.0f, 0.0f, 0x1.9472p-82f, 0x1.827748p-23f, 0.0f,
     0x1.d660bp-22f, 0.0f, 0x1.3c6b5ep-90f, 0x1.94fb4ap-33f, 0x1.11f364p-26f, 0.0f,
     0.0f, 0x1.2495f2p-126f, 0.0f, 0x1.d492fcp-78f, 0x1.0ccfb2p-54f, 0x1.fc6578p-83f,
     0.0f, 0.0f, 0x1.431c82p-72f, 0.0f, 0x1.f6c55p-58f, 0.0f, 0.0f, 0x1.7f4258p-103f,
     0x1.e27aa8p-54f, 0x1.9b6a66p-114f, 0x1.0ae346p-55f, 0x1.45a9aep-79f,
     0x1.104bcp-42f, 0.0f, 0x1.0cbccep-3f, 0.0f, 0.0f, 0x1.0b4972p-117f,
     0x1.da58cp-112f, 0x1.75973ap-96f, 0x1.bf1278p-18f, 0x1.0ab02ep-26f, 0.0f, 0.0f,
     0x1.683b4ep-114f, 0x1.59722p-31f, 0.0f, 0.0f, 0.0f, 0x1.a2a87ap-20f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1p0f, 0x1.229e9ap-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e4cb98p-27f,
     0x1.0c5abap-41f, 0x1.e3ab2ep-10f, 0x1.a220c4p-35f, 0x1.a948a6p-77f,
     0x1.84311p-18f, 0.0f, 0x1.74529ap-23f, 0x1.6da648p-18f, 0.0f, 0x1.3b71a2p-107f,
     0x1.10d82ep-2f, 0.0f, 0.0f, 0x1.5a3b16p-27f, 0.0f, 0.0f, 0.0f, 0x1.34c0a8p-15f,
     0x1.11eea8p-73f, 0x1.e7840ep-78f, 0x1.8465e8p-62f, 0x1.6ca7f4p-120f,
     0x1.8a973p-3f, 0.0f, 0.0f, 0.0f, 0x1.df3ed2p-58f, 0.0f, 0.0f, 0x1.ef7862p-101f,
     0x1.97798ap-115f, 0x1.de3202p-87f, 0x1.c0acd6p-20f, 0.0f, 0x1.ed9188p-109f, 0.0f,
     0.0f, 0.0f, 0x1.e61254p-123f, 0.0f, 0x1.9e743p-106f, 0x1.309612p-10f,
     0x1.cdb74cp-85f, 0x1.86dd7cp-27f, 0x1.35161p-73f, 0x1.679d2ap-116f,
     0x1.a1a3a4p-9f, 0x1.82bb56p-117f, 0x1.f12bfp-64f, 0x1.8023c4p-105f, 0.0f, 0.0f,
     0x1.22a6c2p-112f, 0.0f, 0x1.d82f2cp-115f, 0x1.d9823cp-32f, 0.0f, 0x1.240896p-99f,
     0x1.2c2eccp-78f, 0x1.e463d4p-81f, 0x1.f6c072p-81f, 0.0f, 0x1.e6f3f4p-79f,
     0x1.205004p-83f, 0x1.2f5fp-103f, 0x1.277496p-88f, 0x1.44f4e4p-124f, 0.0f,
     0x1.3cf53cp-60f, 0x1.0ae7a8p-90f, 0.0f, 0x1.e8ab4ap-69f, 0x1.8cb0acp-90f,
     0x1.f85864p-98f, 0x1.853e6cp-38f, 0x1.38817ap-8f, 0x1.e2a63ap-126f,
     0x1.c13f76p-65f, 0x1.08f2b6p-122f, 0x1.2601cep-42f, 0x1.38bc86p-15f, 0.0f, 0.0f,
     0x1.df26f4p-49f, 0.0f, 0.0f, 0x1.6d8ed4p-87f, 0.0f, 0x1.85b9e8p-113f,
     0x1.c81f06p-10f, 0.0f, 0.0f, 0x1.ea47dep-86f, 0x1.1b38c2p-7f, 0.0f,
     0x1.164f1cp-110f, 0x1.a2932cp-104f, 0.0f, 0x1.ffbcdep-66f, 0.0f, 0x1.60229ap-37f,
     0x1.24507ap-108f, 0.0f, 0x1.7cd34ap-22f, 0.0f, 0x1.adb1fap-2f, 0x1.eccba8p-111f,
     0.0f, 0x1.cd325cp-98f, 0.0f, 0x1.ae00bap-73f, 0.0f, 0x1.681e5ep-75f, 0.0f,
     0x1.de0d7p-80f, 0.0f, 0x1.a35caap-67f, 0x1.1e725ep-64f, 0x1.d7997p-101f,
     0x1.804166p-84f, 0.0f, 0x1.d30cd2p-53f, 0x1.b8896ap-49f, 0x1.5ea316p-92f, 0.0f,
     0.0f, 0.0f, 0x1.710aeap-98f, 0x1.8c113cp-27f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4ecb8p-91f, 0.0f, 0x1.14a8bep-67f, 0x1.a66f4ep-95f, 0.0f, 0.0f, 0.0f,
     0x1.6deb3ap-79f, 0x1.1da07ep-62f, 0.0f, 0x1.547338p-38f, 0.0f, 0.0f, 0.0f,
     0x1.3fb1bp-12f, 0.0f, 0x1.ce011cp-116f, 0.0f, 0x1.9be6c8p-4f, 0x1.566052p-126f,
     0x1.4b1494p-24f, 0x1.1e760cp-118f, 0x1.a58d22p-40f, 0.0f, 0x1.b0cc72p-87f, 0.0f,
     0.0f, 0.0f, 0x1.b1ce86p-26f, 0.0f, 0x1.90b6bcp-31f, 0.0f, 0x1.ae2a92p-75f, 0.0f,
     0x1.a16a76p-69f, 0x1.5c8e96p-39f, 0.0f, 0.0f, 0x1.c33442p-3f, 0.0f,
     0x1.6ae966p-96f, 0.0f, 0x1.b0f63p-70f, 0.0f, 0x1.bb6a6cp-83f, 0.0f,
     0x1.9cf5a8p-37f, 0.0f, 0x1.7f09ccp-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0c2416p-4f, 0.0f, 0x1.b86d8ap-70f, 0.0f, 0x1.6368bp-24f, 0x1.0c28d4p-10f,
     0.0f, 0x1.296aep-60f, 0x1.fd0f4ep-26f, 0.0f, 0x1.e69e16p-69f, 0x1.bdbd08p-121f,
     0x1.57a46cp-55f, 0.0f, 0x1.5e143p-108f, 0.0f, 0x1.936ddp-51f, 0x1.e29254p-96f,
     0x1.1a7254p-105f, 0.0f, 0x1.647accp-62f, 0x1.055da4p-57f, 0x1.9eb0dep-4f,
     0x1.3c301p-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c4e67cp-73f, 0x1.c49a98p-6f, 0.0f,
     0x1.2adf58p-116f, 0.0f, 0x1.eecdbap-36f, 0.0f, 0.0f, 0.0f, 0x1.93a2e4p-13f,
     0x1.5b29cap-95f, 0.0f, 0.0f, 0x1.89d9aep-15f, 0x1.d12f08p-85f, 0.0f, 0.0f,
     0x1.7fba2ap-30f, 0x1.61f758p-63f, 0.0f, 0x1.df7eaap-28f, 0.0f, 0.0f, 0.0f,
     0x1.601f9p-19f, 0x1.ed9eb6p-68f, 0x1.6c5e88p-65f, 0.0f, 0x1.51cdcap-110f,
     0x1.aeaa1cp-22f, 0x1.7fad6ap-34f, 0x1.734b4ep-19f, 0.0f, 0x1.6da452p-40f, 0.0f,
     0x1.1abadp-4f, 0x1.7c463cp-18f, 0x1.41359ap-104f, 0.0f, 0.0f, 0.0f,
     0x1.d3319cp-95f, 0.0f, 0x1.e5fffp-44f, 0.0f, 0x1.b2c18ap-7f, 0x1.979ae6p-123f,
     0x1.0d056ep-125f, 0x1.a17b5p-56f, 0x1.98ff96p-12f, 0x1.4f5232p-108f,
     0x1.cc6368p-96f, 0x1.407582p-31f, 0x1.ec4c4cp-44f, 0.0f, 0x1.3a9cfp-85f, 0.0f,
     0x1.b8737ap-9f, 0x1.daf9b2p-48f, 0x1.5592f8p-56f, 0x1.1b66bp-31f, 0.0f, 0.0f,
     0x1.3cf392p-31f, 0.0f, 0x1.976e2p-65f, 0x1.dd3058p-35f, 0x1.85a96p-41f,
     0x1.cd343p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cf6854p-116f, 0x1.0799a2p-1f,
     0x1.1a6336p-94f, 0x1.ef6614p-11f, 0.0f, 0.0f, 0.0f, 0x1.fc9512p-38f,
     0x1.100426p-72f, 0.0f, 0x1.01e33p-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8c6608p-43f,
     0.0f, 0x1.ec4bfep-45f, 0.0f, 0.0f, 0x1.47e53ap-60f, 0x1.4809fap-123f, 0.0f, 0.0f,
     0x1.f31d46p-125f, 0.0f, 0.0f, 0.0f, 0x1.13143ap-67f, 0.0f, 0x1.d10094p-98f, 0.0f,
     0x1.d7806p-5f, 0.0f, 0x1.4eb86ep-74f, 0x1.e5218ap-44f, 0.0f, 0x1.cbecp-7f,
     0x1.df55ccp-47f, 0.0f, 0.0f, 0.0f, 0x1.d4a3b8p-116f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7259a8p-56f, 0.0f, 0x1.e66404p-39f, 0x1.f4e212p-26f, 0x1.4c8eb2p-105f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.6d313ep-60f, 0x1.e1beb8p-55f, 0x1.b86cfp-96f,
     0x1.1e423ep-121f, 0x1.4d2148p-21f, 0x1.f54dc2p-26f, 0.0f, 0x1.74ada6p-75f, 0.0f,
     0x1.49cea4p-34f, 0.0f, 0x1.260558p-112f, 0x1.021ffcp-18f, 0.0f, 0x1.c87d62p-122f,
     0.0f, 0x1.026a3ep-124f, 0x1.12fe58p-2f, 0.0f, 0x1.385622p-94f, 0.0f,
     0x1.723644p-53f, 0x1.88513p-81f, 0x1.f971d6p-54f, 0.0f, 0.0f, 0x1.8a34bep-11f,
     0x1.77041cp-81f, 0x1.7bc066p-58f, 0x1.0f714ep-102f, 0.0f, 0.0f, 0x1.f5ed42p-63f,
     0x1.64cd8p-2f, 0x1.4d52d8p-83f, 0.0f, 0x1.f23ef4p-117f, 0x1.51266cp-45f, 0.0f,
     0x1.bb3da2p-75f, 0.0f, 0.0f, 0x1.07bf54p-95f, 0.0f, 0.0f, 0x1.738818p-43f,
     0x1.83c728p-46f, 0.0f, 0x1.0b362p-22f, 0.0f, 0x1.b58dd8p-84f, 0.0f, 0.0f,
     0x1.15cacep-70f, 0x1.129be4p-7f, 0.0f, 0x1.a3844p-61f, 0x1.134a94p-26f,
     0x1.3e5122p-105f, 0x1.f29c3ap-51f, 0.0f, 0.0f, 0x1.7b09f6p-100f, 0.0f,
     0x1.87ede4p-33f, 0x1.96d564p-47f, 0.0f, 0x1.a970bcp-44f, 0x1.b4cfe2p-24f,
     0x1.b3eb0ap-35f, 0.0f, 0.0f, 0x1.bd932p-113f, 0x1.b58b4cp-18f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e5d75p-68f, 0x1.a85122p-88f, 0.0f, 0.0f,
     0.0f, 0x1.a60dap-43f, 0.0f, 0.0f, 0x1.a060b8p-123f, 0.0f, 0.0f, 0.0f,
     0x1.e3518ep-115f, 0.0f, 0.0f, 0x1.559a0ep-124f, 0.0f, 0.0f, 0x1.e271c6p-101f,
     0x1.eeeb56p-12f, 0x1.f61c84p-15f, 0.0f, 0x1.1a9844p-76f, 0.0f, 0x1.3f92d6p-57f,
     0.0f, 0.0f, 0x1.350a1cp-45f, 0x1.e6c1ccp-117f, 0.0f, 0x1.3759p-38f, 0.0f,
     0x1.392cf4p-20f, 0.0f, 0.0f, 0x1.f5de48p-42f, 0x1.bde054p-7f, 0x1.89fb48p-22f,
     0x1.e5b32ep-75f, 0.0f, 0x1.3b4b7ep-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f05d38p-23f, 0.0f, 0x1.4ed37p-33f, 0x1.e85f24p-74f, 0.0f, 0.0f,
     0x1.b39912p-3f, 0x1.892bc2p-10f, 0x1.ebb23ap-10f, 0x1.347212p-91f, 0.0f,
     0x1.d1034ep-88f, 0x1.9e481ep-122f, 0x1.195cap-22f, 0x1.97c5ecp-70f, 0.0f,
     0x1.591baep-61f, 0.0f, 0x1.081842p-8f, 0.0f, 0x1.da22a8p-67f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.d4dfc8p-6f, 0.0f, 0x1.a45a14p-44f, 0.0f, 0.0f, 0.0f, 0x1.c6e9eap-68f,
     0.0f, 0.0f, 0.0f, 0x1.63b0a2p-97f, 0.0f, 0.0f, 0x1.b7034ep-24f, 0x1.6e4adp-18f,
     0.0f, 0x1.7ececep-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f593bap-21f, 0x1.f0ed64p-93f,
     0x1.91fdbp-25f, 0.0f, 0.0f, 0x1.bee564p-52f, 0x1.d6539cp-113f, 0.0f, 0.0f, 0.0f,
     0x1.1634a8p-2f, 0.0f, 0.0f, 0.0f, 0x1.13f4e4p-74f, 0x1.4499ap-111f, 0.0f, 0.0f,
     0x1.7431f2p-22f, 0.0f, 0x1.651c7cp-73f, 0x1.11921cp-14f, 0.0f, 0x1.10c776p-24f,
     0.0f, 0x1.3ed168p-106f, 0x1.93fd2p-120f, 0.0f, 0x1.b58c4p-42f, 0x1.4b09cep-82f,
     0.0f, 0x1.78c92ep-54f, 0x1.d6b11ep-24f, 0.0f, 0x1.7116e4p-14f, 0.0f, 0x1p0f,
     0.0f, 0x1.d7e824p-25f, 0x1.d1bd42p-53f, 0x1.a268aap-81f, 0x1.7c291cp-117f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.621502p-22f, 0x1.2854e6p-69f, 0x1.32ae3cp-28f, 0.0f,
     0x1.c60488p-94f, 0.0f, 0.0f, 0.0f, 0x1.5a0a7p-24f, 0.0f, 0.0f, 0x1.db817ep-53f,
     0x1.11462ap-119f, 0x1.082d52p-105f, 0x1.9440f4p-31f, 0x1.f26fd6p-70f,
     0x1.3adbbp-23f, 0x1.439628p-102f, 0x1.672612p-52f, 0x1.50e20ap-37f, 0.0f,
     0x1.50762ap-107f, 0.0f, 0x1.a9885p-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ace5dep-41f,
     0.0f, 0.0f, 0x1.e0a734p-50f, 0x1.2e88d4p-1f, 0x1.50f95p-105f, 0.0f, 0.0f, 0.0f,
     0x1.309d6ap-63f, 0x1.810df2p-40f, 0x1.9e6fbep-7f, 0x1.9bf57p-21f, 0.0f, 0.0f,
     0.0f, 0x1.8a6766p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.01e0d2p-9f, 0.0f,
     0x1.ca611cp-75f, 0.0f, 0.0f, 0.0f, 0x1.24358cp-37f, 0x1.969ae6p-97f, 0.0f, 0.0f,
     0.0f, 0x1.b4a5c4p-77f, 0.0f, 0x1.6a8cp-2f, 0.0f, 0x1.c8f662p-25f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.9cad08p-8f, 0.0f, 0.0f, 0x1.71988ep-77f, 0.0f, 0x1.62bcb6p-15f,
     0x1.9ced0ep-112f, 0x1.a7188p-28f, 0x1.3680aep-25f, 0x1.19a3dcp-66f,
     0x1.5d06dcp-44f, 0x1.15959ep-55f, 0x1.00739ep-23f, 0x1.d7bff8p-112f,
     0x1.8383dp-96f, 0.0f, 0.0f, 0x1.90241ap-52f, 0.0f, 0x1.2dd3e8p-68f, 0.0f, 0.0f,
     0x1.1019d6p-107f, 0x1.50345ap-3f, 0.0f, 0.0f, 0x1.524114p-9f, 0x1.e375ap-60f,
     0.0f, 0x1.5e3812p-50f, 0.0f, 0x1.03d0b8p-22f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ea89fap-11f, 0.0f, 0x1.e6301ap-73f, 0x1.e4c95cp-124f, 0.0f, 0.0f, 0.0f,
     0x1.328974p-75f, 0x1.48f0bp-5f, 0.0f, 0x1.c82436p-27f, 0x1.c5883ep-108f, 0.0f,
     0.0f, 0x1.e56372p-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bc245ap-81f, 0x1.e80b88p-34f,
     0x1.7306b4p-74f, 0.0f, 0.0f, 0x1.133dcep-61f, 0.0f, 0.0f, 0x1.50fb6p-56f,
     0x1.dfa124p-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.74777ap-8f, 0.0f, 0.0f,
     0x1.bbd3aep-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.be8308p-2f, 0.0f,
     0x1.9285fp-18f, 0.0f, 0.0f, 0.0f, 0x1.4d39b4p-102f, 0x1.d32ap-36f, 0x1.6bd83p-5f,
     0x1.34201cp-88f, 0.0f, 0.0f, 0x1.7f1dccp-85f, 0.0f, 0x1.eb7542p-19f,
     0x1.4fd4dep-59f, 0x1.aff946p-35f, 0.0f, 0x1.0163aep-39f, 0.0f, 0.0f,
     0x1.d5ec0ep-125f, 0x1.36e92ep-49f, 0x1.5bcb18p-50f, 0.0f, 0x1.9deffcp-111f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.07441p-56f, 0x1.0f7376p-58f, 0.0f, 0x1.700c94p-89f,
     0.0f, 0x1.70155ap-34f, 0.0f, 0x1.222236p-82f, 0x1.2d308ep-74f, 0.0f, 0.0f,
     0x1.33486cp-112f, 0x1.6f0c2p-21f, 0.0f, 0.0f, 0.0f, 0x1.799c52p-61f,
     0x1.c1daccp-11f, 0.0f, 0x1.d8d544p-9f, 0x1p0f, 0.0f, 0.0f, 0x1.075a3cp-75f,
     0x1.80a0f4p-49f, 0.0f, 0x1.e3063cp-31f, 0.0f, 0x1.dc80eap-45f, 0.0f, 0.0f,
     0x1.b06a14p-120f, 0x1.e6630cp-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9d1fb4p-68f,
     0x1.bfc3d2p-73f, 0x1.dceebcp-67f, 0.0f, 0.0f, 0.0f, 0x1.35a756p-89f,
     0x1.4dab9cp-104f, 0.0f, 0x1.b8ad6ap-109f, 0.0f, 0.0f, 0.0f, 0x1.e2e812p-4f,
     0x1.0b3766p-15f, 0x1.3540f6p-56f, 0x1.a1bep-106f, 0x1.6d16f8p-5f, 0.0f,
     0x1.e03c9p-54f, 0.0f, 0x1.db503ap-6f, 0x1.9f4862p-4f, 0.0f, 0.0f, 0.0f,
     0x1.527eaap-70f, 0x1.908258p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f
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
            tmp1 = Sleef_ceilf1_purecfma(tmp0);
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
    printf("Sleef_ceilf1_purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_ceilf1_purecfma bench acc %a\n", global_bench_acc);
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
