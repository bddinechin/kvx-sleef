/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_rintf1_purecfma.c --function \
 *     Sleef_finz_rintf1_purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --bench --no-embedded-bin --target kv3
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
     0.0f, 0.0f, 0.0f, 0x1.852c24p-35f, 0x1.3d13e6p-50f, 0x1.8a77e6p-1f, 0.0f,
     0x1.631dfep-21f, 0.0f, 0.0f, 0x1.e8fd5ep-115f, 0.0f, 0.0f, 0x1.f43936p-108f,
     0x1.43711cp-68f, 0.0f, 0x1.ce3f0cp-7f, 0.0f, 0x1.a95acap-108f, 0x1.7af122p-22f,
     0.0f, 0x1.07f3dap-68f, 0x1.d37e7p-77f, 0.0f, 0.0f, 0x1.dd38e4p-66f,
     0x1.b2e01p-72f, 0x1.0c237ap-71f, 0x1.346d4ap-16f, 0.0f, 0x1.9afe54p-61f,
     0x1.ed1248p-64f, 0x1.83c00cp-54f, 0.0f, 0.0f, 0x1.8d774ap-114f, 0x1.26ddf2p-109f,
     0x1.ca88e8p-74f, 0.0f, 0.0f, 0x1.c9b416p-29f, 0x1.f53f5ap-62f, 0.0f,
     0x1.b099c2p-63f, 0x1.05cd7cp-116f, 0x1.a4c05ap-7f, 0.0f, 0x1.2db9e6p-101f, 0.0f,
     0x1.89718p-53f, 0.0f, 0x1.d882ecp-1f, 0x1.168ac4p-11f, 0.0f, 0x1.90164p-29f,
     0x1.4a9234p-83f, 0x1.ba133p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c17d26p-118f,
     0x1.852b76p-123f, 0x1.fe0492p-93f, 0.0f, 0.0f, 0x1.ba9deep-80f, 0x1.9e6c8ep-64f,
     0.0f, 0.0f, 0.0f, 0x1.d01f52p-63f, 0x1.a91a34p-72f, 0x1.0ab784p-16f,
     0x1.96ab08p-8f, 0x1.831116p-124f, 0.0f, 0.0f, 0.0f, 0x1.3309eap-45f, 0.0f,
     0x1.c7a10cp-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1baf5ep-90f, 0.0f,
     0x1.3110ap-5f, 0.0f, 0.0f, 0x1.9e8b14p-23f, 0x1.b766c4p-61f, 0.0f,
     0x1.9aefdp-107f, 0.0f, 0x1.50f298p-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fef668p-82f, 0.0f, 0x1.ab0c3p-13f, 0.0f, 0.0f, 0x1.4577c2p-75f,
     0x1.f80088p-61f, 0.0f, 0.0f, 0.0f, 0x1.e8ec5cp-58f, 0.0f, 0x1.f8cfccp-85f, 0.0f,
     0.0f, 0.0f, 0x1.3b344p-95f, 0x1.e684a6p-112f, 0x1.af145ap-4f, 0x1.016494p-60f,
     0x1.e1e91ep-40f, 0.0f, 0.0f, 0.0f, 0x1.103c8ep-41f, 0.0f, 0.0f, 0x1.30b6ep-114f,
     0.0f, 0.0f, 0x1.b3adcep-116f, 0x1.84a66ap-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.384932p-110f, 0.0f, 0.0f, 0.0f, 0x1.bbd956p-9f, 0.0f, 0.0f,
     0x1.41fdb2p-58f, 0x1.c8c3e8p-29f, 0.0f, 0x1.4acb7ap-98f, 0.0f, 0.0f,
     0x1.af23c2p-43f, 0x1.a94014p-122f, 0.0f, 0x1.11f52p-99f, 0x1.e493f8p-42f,
     0x1.a70176p-88f, 0x1.12212ap-14f, 0.0f, 0x1.7d217ap-113f, 0x1.e97428p-47f, 0.0f,
     0.0f, 0x1.bcd9dap-123f, 0.0f, 0x1.75e144p-80f, 0.0f, 0x1.3e42fap-43f,
     0x1.87df88p-48f, 0x1.374efp-90f, 0x1.71649ep-26f, 0x1.dbbc92p-124f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.3a0cfap-2f, 0x1.56b80ep-124f, 0.0f, 0.0f, 0.0f, 0x1.5c4e0ep-69f,
     0.0f, 0x1.662fc2p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bf073ap-57f, 0.0f, 0.0f,
     0x1.f9555cp-4f, 0x1.90cd84p-56f, 0x1.7298cp-46f, 0x1.6fe9dcp-99f, 0x1.f41edp-35f,
     0x1.dea75cp-96f, 0x1.05cf94p-104f, 0x1.83f382p-88f, 0.0f, 0.0f, 0.0f,
     0x1.e41b8ap-84f, 0.0f, 0x1.f75f46p-112f, 0x1.81586ep-68f, 0.0f, 0x1.3c26fp-37f,
     0.0f, 0x1.de05fep-84f, 0x1.e99ffep-82f, 0x1.e87244p-26f, 0.0f, 0.0f,
     0x1.956b22p-47f, 0x1.f5f3c8p-56f, 0x1.36d578p-103f, 0.0f, 0x1.29cffep-58f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.43ddbp-26f, 0.0f, 0.0f, 0.0f, 0x1.30ab32p-89f,
     0x1.ceb00ep-4f, 0.0f, 0.0f, 0x1.a9f4dep-25f, 0x1.6b9cbp-92f, 0x1.49aaap-67f,
     0.0f, 0.0f, 0x1.cb518p-16f, 0.0f, 0.0f, 0.0f, 0x1.793676p-62f, 0x1.c80df2p-69f,
     0x1.85c18cp-97f, 0x1.193dc8p-79f, 0x1.85b792p-36f, 0x1.69f4dcp-97f,
     0x1.640b88p-98f, 0x1.a06ff6p-20f, 0x1.68616cp-68f, 0x1.44b7c6p-116f, 0.0f, 0.0f,
     0x1.60533cp-73f, 0.0f, 0x1.2d3064p-91f, 0x1.5c4704p-13f, 0x1.533d82p-124f, 0.0f,
     0.0f, 0x1.f9be2ap-70f, 0x1.1f0f5cp-1f, 0.0f, 0x1.5aa37ep-6f, 0x1.c6d47ep-55f,
     0x1.291ff6p-20f, 0x1.1c6926p-54f, 0x1.ac4662p-98f, 0.0f, 0x1.623c1cp-87f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ca31aep-76f, 0x1.7f99eep-29f, 0.0f, 0x1.be87b6p-58f, 0.0f,
     0.0f, 0x1.c26e06p-26f, 0.0f, 0x1.0c8dcap-122f, 0x1.20469ap-26f, 0.0f, 0.0f,
     0x1.7cef8cp-81f, 0.0f, 0x1.e9eb9ap-7f, 0.0f, 0.0f, 0.0f, 0x1.042dfp-101f,
     0x1.023808p-66f, 0.0f, 0x1.285d1p-45f, 0x1.b82e5p-12f, 0.0f, 0x1.2128fp-115f,
     0.0f, 0x1.4d7e08p-36f, 0.0f, 0x1.6e78b2p-106f, 0.0f, 0x1.10e8dp-45f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f14f8p-121f, 0x1.54d028p-126f, 0x1.117f46p-98f, 0x1.c48662p-5f,
     0.0f, 0x1.06b5e6p-27f, 0.0f, 0x1.9ca7eep-8f, 0x1.6fa79ep-97f, 0x1.540ed8p-100f,
     0.0f, 0.0f, 0x1.1f8026p-65f, 0.0f, 0x1.af53a6p-118f, 0.0f, 0.0f, 0x1.347b92p-77f,
     0.0f, 0.0f, 0x1.0659eep-104f, 0.0f, 0x1.d65742p-74f, 0.0f, 0.0f, 0.0f,
     0x1.e66374p-19f, 0x1.5b7bc6p-124f, 0.0f, 0x1.9bd0bep-111f, 0x1.9362fp-85f,
     0x1.a20a9ap-73f, 0.0f, 0x1.41578ep-24f, 0.0f, 0x1.85571ep-80f, 0x1.e7a786p-108f,
     0x1.ce836ep-63f, 0.0f, 0x1.2e58c8p-111f, 0.0f, 0x1.619a8ap-60f, 0x1.d7993ep-48f,
     0x1.d368ap-125f, 0.0f, 0x1.835cf6p-64f, 0x1.6033b6p-71f, 0.0f, 0.0f,
     0x1.3cc32p-71f, 0x1.6e6a22p-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f0bb2cp-9f, 0.0f,
     0x1.0967b6p-75f, 0x1.df7ff6p-35f, 0x1.a4271ep-110f, 0.0f, 0x1.61aa32p-105f, 0.0f,
     0x1.6aec1ep-99f, 0.0f, 0.0f, 0.0f, 0x1.577acp-75f, 0x1.a776d2p-90f,
     0x1.b61444p-31f, 0x1.25e0eap-112f, 0x1.7bcfap-3f, 0x1.da751ep-20f, 0.0f, 0.0f,
     0x1.67cd04p-99f, 0.0f, 0x1.939dd8p-89f, 0.0f, 0x1.ff19cap-72f, 0.0f, 0.0f,
     0x1.dbdb3ap-123f, 0.0f, 0.0f, 0x1.95adfap-110f, 0.0f, 0.0f, 0x1.6dde6cp-116f,
     0.0f, 0x1.802c5cp-8f, 0.0f, 0.0f, 0x1.fac79ap-53f, 0x1.2386b2p-60f, 0.0f, 0.0f,
     0x1.f233dep-57f, 0.0f, 0x1.79576ap-31f, 0.0f, 0x1.24b772p-75f, 0x1.efbf54p-50f,
     0x1.2819aap-109f, 0.0f, 0x1.2451dep-122f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.51ef52p-83f, 0x1.01a6b8p-51f, 0.0f, 0x1.75cb0cp-113f, 0x1.33c25ap-44f,
     0x1.7f90dap-29f, 0.0f, 0x1.ffde9cp-60f, 0x1.91fccap-101f, 0x1.f0bd3ap-54f,
     0x1.0f2f9p-17f, 0x1.aee8bap-13f, 0x1.915ef6p-70f, 0x1.a24b52p-108f,
     0x1.74d2a8p-60f, 0.0f, 0x1.f3075p-87f, 0x1.f2e4f2p-126f, 0x1.315c56p-55f, 0.0f,
     0.0f, 0x1.469b4ep-62f, 0x1.cb5a7ep-14f, 0.0f, 0x1.8d7c44p-99f, 0x1.500342p-7f,
     0.0f, 0.0f, 0x1.f70a14p-54f, 0.0f, 0.0f, 0x1.140b58p-123f, 0x1.9997b2p-95f,
     0x1.ff5f4p-22f, 0x1.a39d82p-5f, 0.0f, 0x1.a66a56p-27f, 0.0f, 0.0f,
     0x1.d9a5f6p-75f, 0x1.70b2fep-27f, 0x1.9e085ep-6f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b566d2p-78f, 0.0f,
     0x1.8a40cap-55f, 0.0f, 0.0f, 0x1.504582p-116f, 0x1.52e348p-84f, 0.0f, 0.0f,
     0x1.96c5d4p-105f, 0x1.868a36p-72f, 0.0f, 0x1.d8880ap-122f, 0x1.6274f8p-51f,
     0x1.521de6p-2f, 0x1.667858p-126f, 0x1.228c22p-67f, 0.0f, 0.0f, 0x1.0c5fdcp-68f,
     0.0f, 0.0f, 0x1.4004f8p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.62b792p-36f,
     0.0f, 0.0f, 0x1.82344ep-14f, 0.0f, 0x1.01d0e8p-5f, 0x1.0fc10ep-24f, 0.0f,
     0x1.0d7ea6p-115f, 0.0f, 0x1.8c8c6p-112f, 0x1.287c08p-60f, 0.0f, 0x1.b6f538p-115f,
     0x1.260e06p-14f, 0x1.ccc704p-111f, 0.0f, 0.0f, 0.0f, 0x1.16a506p-71f, 0.0f,
     0x1.5d5d02p-124f, 0x1.b22b18p-40f, 0x1.6efb2ep-47f, 0x1.819f1ap-30f, 0.0f,
     0x1.b1cce6p-46f, 0x1.7f723p-66f, 0x1.f31322p-121f, 0x1.b7017ap-88f,
     0x1.c3a26cp-84f, 0x1.e566bcp-56f, 0.0f, 0.0f, 0x1.d33c56p-72f, 0x1.09f24cp-109f,
     0.0f, 0x1.e48f0ap-107f, 0.0f, 0.0f, 0x1.fbbc0ep-43f, 0.0f, 0x1.ae8386p-21f, 0.0f,
     0.0f, 0x1.3eb4ep-62f, 0x1.75c98cp-93f, 0x1.860bd2p-73f, 0x1.77d3e4p-122f, 0.0f,
     0x1.adbb12p-87f, 0x1.73a47p-117f, 0x1.80b51cp-89f, 0x1.3c4d44p-103f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.14352p-20f, 0.0f, 0x1.31ba58p-42f, 0.0f, 0x1.6560dp-97f,
     0x1.d5f49ep-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1b8c8ep-67f, 0x1.fe737cp-11f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2c4f76p-77f,
     0x1.8da6ecp-125f, 0x1.82c8c8p-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.772398p-8f,
     0x1.14c6f6p-108f, 0x1.b97342p-109f, 0x1.c6bcf6p-61f, 0x1.61d16cp-79f, 0.0f,
     0x1.2eff28p-70f, 0x1.634dcap-29f, 0.0f, 0.0f, 0x1.1e9616p-46f, 0x1.226ebcp-85f,
     0.0f, 0x1.3212p-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.df41f6p-89f, 0x1.134832p-106f,
     0x1.c045bep-16f, 0.0f, 0x1.137812p-102f, 0.0f, 0x1.001dfcp-75f, 0.0f, 0.0f,
     0x1.e3ec2cp-16f, 0.0f, 0x1.85068ep-105f, 0.0f, 0x1.80fa04p-125f, 0x1.7e0e0cp-89f,
     0.0f, 0.0f, 0x1.a6d56ap-51f, 0.0f, 0x1.d4304ap-81f, 0x1.3d6d7p-34f, 0.0f,
     0x1.6ff768p-118f, 0.0f, 0x1.fe49d8p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.13bc4cp-101f, 0x1.676e62p-104f, 0x1.4bc28ep-68f, 0x1.0d349cp-30f, 0.0f,
     0x1.766a38p-25f, 0x1.9514cap-67f, 0.0f, 0x1.849c04p-40f, 0x1.fca89p-43f, 0.0f,
     0.0f, 0x1.6a90d8p-13f, 0.0f, 0.0f, 0x1.1bd71cp-120f, 0x1.4cdddap-58f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f7826p-85f, 0.0f, 0.0f, 0.0f, 0x1.b56548p-104f, 0x1.2e682p-67f,
     0x1.a0ce88p-10f, 0x1.4d02fcp-42f, 0x1.cf9e88p-83f, 0x1.49cb72p-96f, 0.0f,
     0x1.592fc6p-19f, 0.0f, 0.0f, 0x1.c1220cp-40f, 0x1.d3106cp-74f, 0x1.8854dp-93f,
     0.0f, 0.0f, 0.0f, 0x1.72129p-80f, 0x1.fa0604p-6f, 0x1.ece93p-95f, 0.0f, 0.0f,
     0x1.053d0ap-30f, 0x1.29d23cp-115f, 0.0f, 0x1.929944p-111f, 0x1.f73c18p-58f, 0.0f,
     0.0f, 0x1.85be46p-45f, 0.0f, 0x1.d1673ep-111f, 0.0f, 0x1.6c1682p-118f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.71bb1p-83f, 0x1.f98392p-103f, 0x1.3d91bp-3f, 0.0f,
     0.0f, 0.0f, 0x1.35bd0ep-48f, 0.0f, 0.0f, 0.0f, 0x1.88d444p-124f,
     0x1.61a594p-123f, 0x1.577812p-41f, 0x1.dc0828p-44f, 0.0f, 0.0f, 0.0f,
     0x1.9517dep-53f, 0.0f, 0x1.310df4p-124f, 0x1.0a4522p-51f, 0.0f, 0x1p0f, 0.0f,
     0.0f, 0x1.f60548p-37f, 0.0f, 0.0f, 0.0f, 0x1.febbap-95f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.9c9a94p-80f, 0x1.cb8cecp-106f, 0.0f, 0x1.8db8a2p-47f, 0x1.9b1612p-80f,
     0x1.ce4c9ap-10f, 0x1.e6183cp-95f, 0.0f, 0x1.874538p-6f, 0.0f, 0.0f,
     0x1.edb248p-110f, 0x1.01234ep-101f, 0.0f, 0.0f, 0x1.eaab16p-73f, 0.0f, 0.0f,
     0x1.6d4dbcp-124f, 0.0f, 0.0f, 0.0f, 0x1.44a568p-89f, 0x1.817a64p-73f, 0.0f,
     0x1.21317cp-70f, 0x1.613a5p-16f, 0x1.015734p-12f, 0x1.6be188p-8f,
     0x1.858fecp-71f, 0x1.9f95d8p-43f, 0x1.3a28cap-72f, 0x1.30fe62p-55f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a8caf8p-86f, 0x1.912356p-91f, 0x1.930b3cp-17f, 0.0f,
     0x1.4fe3ccp-109f, 0.0f, 0.0f, 0.0f, 0x1.3a3dc6p-75f, 0x1.752ddap-126f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.4ed8e2p-117f, 0.0f, 0x1.f49d5cp-18f, 0.0f, 0.0f, 0.0f,
     0x1.7c8d06p-38f, 0.0f, 0.0f, 0.0f, 0x1.16396cp-25f, 0.0f, 0x1.b4fe34p-58f, 0.0f,
     0x1.3c654ep-66f, 0.0f, 0x1.eb57fp-41f, 0.0f, 0.0f, 0.0f, 0x1.df35fp-12f, 0.0f,
     0x1.2deeb6p-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.91cfbep-49f, 0x1.62fe8cp-91f,
     0.0f, 0.0f, 0x1.a2017p-2f, 0x1.cbc7f2p-51f, 0x1.4982dp-59f, 0.0f, 0.0f, 0.0f,
     0x1.5c90f2p-80f, 0x1.fb0d6ap-3f, 0.0f, 0.0f, 0x1.eb7f5ap-111f, 0.0f, 0.0f,
     0x1.aff6f6p-79f, 0x1.773114p-68f, 0x1.4654e4p-34f, 0x1.6e127cp-105f,
     0x1.89736cp-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bdb7b8p-17f, 0.0f, 0x1.14dadcp-65f,
     0x1.29ddb4p-55f, 0.0f, 0x1.50f9e8p-117f, 0x1.baeb3ep-16f, 0.0f, 0x1.09a598p-5f,
     0x1.76a26ep-77f, 0.0f, 0x1.5b8dep-27f, 0.0f, 0x1.e204ep-56f, 0.0f,
     0x1.510cb2p-80f, 0.0f, 0x1.500a2cp-97f, 0x1.00b572p-123f, 0x1.1fb98ep-21f, 0.0f,
     0x1.1a9148p-26f, 0.0f, 0x1.009d2cp-114f, 0.0f, 0.0f, 0.0f, 0x1.e5983cp-102f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5afb66p-100f, 0.0f, 0x1.330a56p-58f,
     0x1.91b74ap-108f, 0.0f, 0.0f, 0x1.f2b828p-110f, 0.0f, 0.0f, 0.0f,
     0x1.0d379ap-84f, 0.0f, 0.0f, 0.0f, 0x1.7dd1c4p-86f, 0.0f, 0.0f, 0.0f,
     0x1.58a8cp-26f, 0.0f, 0x1.c7e7a4p-40f, 0.0f, 0x1.1e76ep-120f, 0x1.ac19acp-43f,
     0x1.585a8p-6f, 0.0f, 0x1.95f8aap-52f, 0.0f, 0.0f, 0x1.54eb1p-94f,
     0x1.e1c306p-81f, 0x1.372982p-48f, 0x1.a37382p-41f, 0.0f, 0x1.44a8bap-57f, 0.0f,
     0.0f, 0x1.254ba6p-76f, 0x1.b9cd2ep-38f, 0x1.465ec2p-83f, 0x1.b8ec9cp-34f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.97e748p-88f, 0.0f, 0x1.689c2cp-6f, 0.0f, 0x1.68889p-123f,
     0x1.b5c606p-115f, 0.0f, 0.0f, 0x1.60febp-15f, 0.0f, 0x1.a2e66ep-44f, 0.0f, 0.0f,
     0x1.034d6p-44f, 0.0f, 0x1.21f4a8p-41f, 0.0f, 0.0f, 0x1.1ce80ep-44f, 0.0f, 0.0f,
     0x1.cc6b28p-112f, 0.0f, 0.0f, 0x1.9f5ceap-68f, 0.0f, 0.0f, 0x1.d9fa9ep-75f, 0.0f,
     0.0f, 0.0f, 0x1.d7a5f6p-16f, 0x1.1d7eeep-77f, 0.0f, 0.0f, 0x1.df4e46p-37f, 0.0f,
     0x1.5e1e68p-89f, 0x1.d3d702p-104f, 0x1.d3acb6p-34f, 0x1.caeb7ep-100f,
     0x1.d90b9p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e7e118p-83f, 0.0f, 0x1.fc2b4ep-51f,
     0x1.7632dap-53f, 0x1.16c99p-16f, 0.0f, 0x1.cf355ap-60f, 0.0f, 0.0f,
     0x1.ed0d2cp-93f, 0x1.951d02p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.956ab2p-122f,
     0x1.0697fap-4f, 0x1.442492p-71f, 0.0f, 0x1.6595aap-2f, 0x1.ed6938p-19f,
     0x1.1b3152p-28f, 0.0f, 0.0f, 0x1.3ad942p-30f, 0x1.9eab34p-31f, 0x1.ad4644p-18f,
     0.0f, 0x1.cb605cp-125f
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
            tmp1 = Sleef_finz_rintf1_purecfma(tmp0);
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
    printf("Sleef_finz_rintf1_purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_rintf1_purecfma bench acc %a\n", global_bench_acc);
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
