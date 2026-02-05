/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_roundf1_purecfma.c --function Sleef_roundf1_purecfma \
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
     0.0f, 0.0f, 0x1.c03d3cp-114f, 0.0f, 0x1.80fdcap-108f, 0x1.8f82fep-16f, 0.0f,
     0.0f, 0x1.0ad112p-18f, 0x1.3ccbfep-15f, 0x1.b4b416p-100f, 0x1.9ccc3ap-69f, 0.0f,
     0.0f, 0x1.bd5038p-116f, 0x1.156952p-47f, 0.0f, 0x1.06b444p-35f, 0.0f,
     0x1.13be3ep-21f, 0.0f, 0.0f, 0x1.ccc2ccp-46f, 0x1.f26d34p-33f, 0.0f, 0.0f,
     0x1.71e534p-73f, 0x1.4af184p-36f, 0x1.bb7006p-52f, 0.0f, 0.0f, 0x1.39b316p-66f,
     0x1.25119ep-83f, 0.0f, 0.0f, 0.0f, 0x1.f000e8p-123f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.7f5892p-81f, 0.0f, 0.0f, 0x1.1da85ep-77f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bb27f4p-80f, 0x1.a2536ep-31f, 0.0f, 0x1.606018p-9f, 0.0f, 0.0f,
     0x1.c9f14ap-104f, 0.0f, 0x1.d57ccep-1f, 0.0f, 0.0f, 0x1.516bep-100f, 0.0f, 0.0f,
     0x1.25198ap-90f, 0.0f, 0.0f, 0x1.959e0ep-80f, 0.0f, 0.0f, 0x1.d7da8ep-40f, 0.0f,
     0x1.c02f0ep-59f, 0x1.dd0496p-119f, 0.0f, 0x1.3a65d6p-48f, 0.0f, 0x1.aa04f2p-45f,
     0x1.420908p-91f, 0.0f, 0x1.a80d64p-2f, 0.0f, 0x1.289fecp-3f, 0x1.18e17p-102f,
     0.0f, 0x1.da9afap-9f, 0.0f, 0x1.11328p-74f, 0x1.07c768p-96f, 0.0f,
     0x1.47f346p-87f, 0.0f, 0x1.6040c4p-6f, 0.0f, 0x1.16cf22p-12f, 0.0f, 0.0f,
     0x1.0741c4p-123f, 0.0f, 0.0f, 0.0f, 0x1.20adcep-123f, 0x1.dd94c6p-36f, 0.0f,
     0x1.6294f6p-59f, 0x1.a4627ap-6f, 0x1.b81a02p-105f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9cf6b2p-100f, 0x1.14e1p-79f, 0x1.f2e742p-33f, 0x1.3962cep-123f, 0.0f, 0.0f,
     0.0f, 0x1.68071ap-24f, 0.0f, 0.0f, 0x1.07076p-113f, 0.0f, 0.0f, 0.0f,
     0x1.f06a4cp-18f, 0x1.a1a3ap-81f, 0.0f, 0.0f, 0.0f, 0x1.57b496p-46f, 0.0f,
     0x1.2da904p-79f, 0x1.1fd144p-84f, 0.0f, 0.0f, 0x1.8d34fep-26f, 0x1.b37878p-19f,
     0.0f, 0x1.ff89eep-73f, 0.0f, 0x1.e6e15ap-3f, 0.0f, 0.0f, 0x1.7c556p-50f, 0.0f,
     0.0f, 0x1.703068p-8f, 0x1.fdb2dcp-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d5ee92p-5f,
     0.0f, 0.0f, 0x1.aa8b3ap-73f, 0.0f, 0.0f, 0.0f, 0x1.86f26cp-7f, 0x1.4effb4p-91f,
     0.0f, 0x1.d2dd16p-71f, 0x1.d970fep-115f, 0x1.c2e40ap-3f, 0x1.780cap-87f,
     0x1.7fbd6ap-71f, 0.0f, 0x1.689e5ep-96f, 0.0f, 0x1.e7d0c2p-106f, 0x1.d2132ap-2f,
     0x1.f7332p-26f, 0x1.5861ccp-58f, 0.0f, 0x1.9887a2p-20f, 0.0f, 0.0f, 0.0f,
     0x1.cebbdap-119f, 0.0f, 0x1.9b99dcp-26f, 0x1.5e0f4cp-58f, 0x1.2643b8p-61f, 0.0f,
     0x1.e373e6p-60f, 0x1.54a848p-88f, 0x1.29dab8p-94f, 0x1.72705ap-6f,
     0x1.69105cp-10f, 0x1.c8cbacp-115f, 0.0f, 0x1.f9b2ecp-21f, 0.0f, 0x1.1aa41cp-23f,
     0x1.270c86p-19f, 0x1.abd7b6p-12f, 0.0f, 0.0f, 0x1.05baacp-59f, 0.0f,
     0x1.fc5d72p-21f, 0x1.db5ae6p-85f, 0x1.e2c614p-86f, 0.0f, 0.0f, 0.0f,
     0x1.8127eap-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7ddbdp-110f, 0.0f, 0x1.5ad568p-63f,
     0.0f, 0.0f, 0.0f, 0x1.21239ep-109f, 0x1.bdcfeep-29f, 0.0f, 0x1.d4d016p-7f,
     0x1.756d7p-23f, 0x1.f26078p-90f, 0.0f, 0x1.7f2dd6p-109f, 0.0f, 0x1.389238p-99f,
     0.0f, 0x1.284ebcp-88f, 0.0f, 0.0f, 0.0f, 0x1.21f3fp-111f, 0.0f, 0x1p0f, 0.0f,
     0x1.007cecp-11f, 0.0f, 0.0f, 0x1.8f7028p-54f, 0x1.bb8474p-67f, 0x1.79bcbp-97f,
     0x1.9ee5cap-94f, 0.0f, 0.0f, 0.0f, 0x1.a156ap-85f, 0x1.a3e3a2p-80f, 0.0f,
     0x1.40f58p-67f, 0x1.44b33ep-28f, 0x1.850ea4p-97f, 0.0f, 0x1.6863d2p-100f, 0.0f,
     0x1.b0c892p-10f, 0x1.039ap-39f, 0x1.ad5174p-90f, 0x1.531c6ep-12f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f16c6cp-125f, 0.0f, 0x1.dbbb8ep-87f, 0x1.1ca316p-102f, 0.0f,
     0x1.c99754p-71f, 0.0f, 0x1.098fc2p-104f, 0x1.802e5ep-92f, 0.0f, 0x1.45e41p-30f,
     0.0f, 0x1.53e268p-35f, 0x1.69d7aap-42f, 0x1.02e136p-55f, 0.0f, 0x1.356f78p-41f,
     0x1.95f6ccp-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.353466p-14f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.651e94p-112f, 0.0f, 0.0f, 0x1.908e1p-54f, 0.0f,
     0x1.649f68p-23f, 0x1.2c2604p-1f, 0.0f, 0x1.d4f96ep-26f, 0x1.e56736p-96f, 0.0f,
     0.0f, 0.0f, 0x1.ddeefcp-99f, 0.0f, 0x1.3e2318p-108f, 0x1.ae4a04p-115f,
     0x1.824e2ap-49f, 0.0f, 0.0f, 0x1.b4d00cp-57f, 0x1.3808bp-100f, 0x1.4df268p-99f,
     0x1.6cc1a4p-53f, 0x1.694264p-104f, 0.0f, 0.0f, 0.0f, 0x1.8c0c2cp-30f, 0.0f, 0.0f,
     0.0f, 0x1.0f3872p-125f, 0.0f, 0.0f, 0.0f, 0x1.c8679ep-15f, 0.0f, 0x1.c4b19ap-99f,
     0.0f, 0x1.5d3984p-111f, 0x1.7e8ebp-91f, 0x1.44f82ep-97f, 0x1.070f2p-125f,
     0x1.a650acp-109f, 0.0f, 0.0f, 0x1.8b11b8p-49f, 0.0f, 0x1.e25982p-60f,
     0x1.2667cap-115f, 0x1.ba5086p-44f, 0x1.530bdp-118f, 0x1.ad9baap-34f,
     0x1.717052p-100f, 0x1.7fdd2ap-37f, 0.0f, 0x1.8a0968p-74f, 0x1.3b599ep-79f, 0.0f,
     0x1.d220cp-51f, 0x1.2b852cp-121f, 0x1.a4e9p-6f, 0x1.1eacb2p-77f, 0.0f,
     0x1.9f6ee4p-11f, 0x1.569c7ep-124f, 0.0f, 0.0f, 0x1.d1ef92p-35f, 0.0f,
     0x1.e1cbbcp-123f, 0.0f, 0x1.5e427p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f4c4c4p-25f, 0x1.84d1bep-53f, 0x1.669c58p-106f, 0.0f, 0.0f, 0x1.8ebf7ep-112f,
     0.0f, 0.0f, 0.0f, 0x1.df44eap-16f, 0x1.f72ff4p-36f, 0x1.874b5ap-82f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2b82a8p-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.18903p-76f, 0x1.e7a2cep-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4428fp-91f,
     0.0f, 0x1.8247ap-27f, 0.0f, 0x1.65c698p-125f, 0x1.7b2d2ap-76f, 0.0f,
     0x1.f44b9ep-31f, 0x1.bae0b6p-42f, 0.0f, 0.0f, 0.0f, 0x1.7fe45cp-72f, 0.0f, 0.0f,
     0x1.0e7e62p-54f, 0x1.c95f4p-75f, 0.0f, 0x1.a84af2p-97f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e6724p-49f, 0.0f, 0x1.4f6d1p-124f, 0.0f, 0x1p0f, 0.0f,
     0x1.ca9844p-16f, 0.0f, 0x1.ee8eaap-114f, 0x1.ed21e4p-75f, 0.0f, 0x1.c2faep-104f,
     0x1.1e5a48p-15f, 0x1.ceed4ap-116f, 0.0f, 0.0f, 0.0f, 0x1.d82df6p-26f,
     0x1.f85894p-90f, 0x1.135c22p-9f, 0x1.e026dp-118f, 0.0f, 0.0f, 0.0f,
     0x1.6a1ca8p-90f, 0x1.b4db64p-76f, 0.0f, 0x1.4077b6p-73f, 0.0f, 0.0f, 0.0f,
     0x1.eeb4b6p-74f, 0x1.4eb298p-122f, 0.0f, 0x1.28b19ap-75f, 0x1.9a656cp-77f, 0.0f,
     0.0f, 0x1.988cb6p-42f, 0.0f, 0.0f, 0x1.201578p-69f, 0.0f, 0x1.6d174cp-48f, 0.0f,
     0.0f, 0.0f, 0x1.2ab378p-35f, 0.0f, 0x1.2bae8ap-117f, 0x1.fb5574p-52f, 0.0f,
     0x1.2b89dep-41f, 0.0f, 0.0f, 0x1.b3a804p-101f, 0x1.91b666p-90f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.9ab8bp-82f, 0.0f, 0x1.5210eep-92f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e7c668p-39f, 0.0f, 0x1.38ecdep-71f, 0.0f, 0x1.6ac6p-50f, 0.0f,
     0x1.9aadbap-61f, 0x1.675414p-25f, 0x1.9443p-125f, 0.0f, 0.0f, 0.0f,
     0x1.c4e394p-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.aad2b2p-108f, 0.0f, 0.0f,
     0x1.d0d66ap-62f, 0x1.d520a6p-125f, 0x1.2952d8p-33f, 0x1.fd97d2p-15f,
     0x1.5a1bdep-47f, 0x1.69d656p-17f, 0.0f, 0x1.cc9ee2p-69f, 0.0f, 0x1.ae67ep-109f,
     0.0f, 0x1.8cb8ep-67f, 0x1.d4e244p-50f, 0x1.a61a8ep-33f, 0x1.e7d0d6p-48f,
     0x1.49b68p-32f, 0x1.5df14ap-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d1536ap-49f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.0f68p-14f, 0x1.c0095p-121f, 0x1.d3e164p-51f,
     0x1.88223ep-9f, 0x1.99394p-89f, 0.0f, 0x1.ac9356p-101f, 0x1.1e23p-23f,
     0x1.c33748p-102f, 0x1.f27b08p-90f, 0x1.cd894p-85f, 0.0f, 0.0f, 0x1.0f8b5cp-14f,
     0.0f, 0x1.17654ep-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9acabap-87f, 0.0f, 0.0f, 0.0f,
     0x1.393002p-59f, 0.0f, 0x1.e64884p-77f, 0.0f, 0.0f, 0.0f, 0x1.4f9794p-58f, 0.0f,
     0.0f, 0.0f, 0x1.a9a7d2p-112f, 0.0f, 0x1.cd7bfep-115f, 0.0f, 0.0f,
     0x1.19430ap-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b56228p-61f, 0x1.d54a82p-70f,
     0.0f, 0x1.c1dd82p-115f, 0x1.f81fdep-3f, 0.0f, 0x1.fca0fcp-97f, 0.0f,
     0x1.2dfe8p-8f, 0x1.6e5d06p-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9672cp-6f,
     0x1.e26a66p-94f, 0x1.fc6b4p-103f, 0.0f, 0x1.1acd4cp-54f, 0.0f, 0x1.a7277ep-111f,
     0x1.29cb6ep-112f, 0.0f, 0x1.e747dap-117f, 0x1.88e6d8p-41f, 0.0f, 0x1.76ff3p-59f,
     0.0f, 0.0f, 0x1.969c9cp-7f, 0x1.9ef25p-62f, 0.0f, 0.0f, 0x1.16a824p-89f,
     0x1.a0eafcp-58f, 0x1.8dffeep-112f, 0.0f, 0x1.02b17p-115f, 0.0f, 0.0f,
     0x1.430c0ep-35f, 0x1.a30aaap-102f, 0x1.3ed714p-1f, 0.0f, 0x1.0de754p-102f,
     0x1.4ad38cp-98f, 0.0f, 0.0f, 0x1.2360c2p-77f, 0.0f, 0.0f, 0x1.b122c4p-10f, 0.0f,
     0x1.67a736p-51f, 0.0f, 0.0f, 0x1.a72a5ep-94f, 0x1.567cecp-121f, 0x1.361306p-116f,
     0.0f, 0.0f, 0.0f, 0x1.2de6dp-79f, 0.0f, 0.0f, 0x1.4c2876p-44f, 0.0f, 0.0f, 0.0f,
     0x1.bb6c06p-66f, 0.0f, 0.0f, 0x1.ea85f4p-80f, 0x1.c2103cp-57f, 0.0f,
     0x1.2a5d22p-3f, 0x1.39cee6p-97f, 0x1.1670b6p-110f, 0.0f, 0.0f, 0x1.76c8d8p-92f,
     0x1.00884cp-111f, 0x1.9cd678p-94f, 0x1.7caf0ap-37f, 0.0f, 0x1.048292p-94f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f21996p-94f, 0.0f, 0.0f, 0x1.bc8be6p-74f,
     0x1.8cc078p-5f, 0x1.83c866p-59f, 0x1.942ceap-124f, 0.0f, 0.0f, 0.0f,
     0x1.c3e356p-58f, 0x1.b8d468p-16f, 0.0f, 0x1.d5c69ap-76f, 0x1.dfdd1p-68f,
     0x1.19293p-60f, 0.0f, 0.0f, 0x1.c4515ep-37f, 0x1.8213p-120f, 0x1.fc67eap-98f,
     0.0f, 0.0f, 0x1.4853b4p-32f, 0x1.2e75ap-25f, 0x1.446e0ap-77f, 0x1.c327b2p-69f,
     0x1.bac302p-85f, 0.0f, 0x1.ee1838p-96f, 0.0f, 0.0f, 0x1.4d5c1p-104f, 0.0f, 0.0f,
     0.0f, 0x1.9c1deap-118f, 0x1.fb483p-104f, 0x1.ab3cdep-9f, 0.0f, 0.0f,
     0x1.e23bap-27f, 0x1.f3e28cp-28f, 0.0f, 0x1.22576p-60f, 0x1.d669a6p-102f,
     0x1.61806ep-87f, 0x1.3366b2p-116f, 0x1.bba012p-92f, 0.0f, 0x1.bf86dp-113f, 0.0f,
     0.0f, 0x1.a15194p-32f, 0x1.4a0902p-31f, 0.0f, 0x1.a4d186p-117f, 0x1.73dc5ep-25f,
     0x1.357476p-49f, 0x1.230c9ep-75f, 0.0f, 0x1.a6ecaap-59f, 0x1.7f62bep-57f,
     0x1.fe6cecp-2f, 0x1.cd1eeep-52f, 0.0f, 0.0f, 0.0f, 0x1.1e0d0cp-3f, 0.0f,
     0x1.8ea5bep-2f, 0.0f, 0x1.31f18p-14f, 0x1.3344p-62f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.26fe6ap-93f, 0.0f, 0x1.86a514p-15f, 0x1.2f849p-98f, 0.0f, 0x1.e6ab9p-13f,
     0.0f, 0x1.9370bp-94f, 0x1.a2b0dcp-89f, 0x1.fa0946p-87f, 0x1.632212p-86f, 0.0f,
     0.0f, 0.0f, 0x1.38cb96p-40f, 0.0f, 0x1.fe011ep-3f, 0.0f, 0x1.5636p-120f,
     0x1.0c2746p-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4244f6p-22f, 0.0f,
     0x1.d09b1ep-51f, 0x1.fcbaeep-6f, 0x1.c19deap-120f, 0x1.aef0a2p-63f,
     0x1.f3d4ccp-125f, 0.0f, 0x1.1f82bep-50f, 0x1.02f702p-70f, 0x1.f4c9c2p-104f, 0.0f,
     0x1.4374f8p-109f, 0.0f, 0.0f, 0.0f, 0x1.36a848p-52f, 0.0f, 0x1.828a0cp-14f,
     0x1.e4dfe6p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.700a8ap-15f, 0.0f, 0.0f,
     0x1.adfd6p-89f, 0x1.147a7ep-110f, 0x1.ea2a0ep-68f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7e4f5p-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e0b6d4p-75f, 0x1.10b6aap-67f, 0.0f, 0x1.011d0ep-56f, 0.0f, 0.0f,
     0x1.e345dcp-120f, 0x1.823b96p-89f, 0x1.22726ap-125f, 0.0f, 0.0f, 0x1.2c8aep-112f,
     0x1.5c600cp-11f, 0.0f, 0.0f, 0x1.b82592p-79f, 0x1.bbeabp-13f, 0x1.83c08ap-96f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e3ce5ap-28f, 0.0f, 0x1.a48f88p-85f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.6a19f8p-108f, 0.0f, 0x1.ce94e2p-81f, 0x1.90f77cp-58f,
     0x1.f25b1p-55f, 0x1.78bebap-7f, 0.0f, 0.0f, 0x1.fd1104p-11f, 0x1.9cce6ep-108f,
     0x1.2add98p-111f, 0x1.34a084p-19f, 0.0f, 0.0f, 0x1.f74924p-122f, 0.0f,
     0x1.84e064p-17f, 0x1.e96112p-62f, 0x1.b3fa54p-81f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.21cb3cp-116f, 0x1.59ec5cp-103f, 0.0f, 0x1.d76454p-84f, 0x1.a878a8p-61f,
     0x1.ddfa3ep-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ec9092p-102f, 0x1.1f59d6p-124f,
     0.0f, 0x1.c49244p-83f, 0x1.853a5ap-120f, 0.0f, 0.0f, 0x1.913188p-52f, 0.0f, 0.0f,
     0x1.824fa6p-22f, 0.0f, 0x1.7ae65ep-8f, 0x1.c8c9dp-75f, 0.0f, 0x1.fb9fbep-66f,
     0.0f, 0.0f, 0x1.deba8ap-15f, 0.0f, 0.0f, 0x1.fe046ep-109f, 0x1.0526acp-37f,
     0x1.0f1fc6p-66f, 0x1.381b16p-73f, 0x1.ae4e12p-20f, 0.0f, 0x1.c6d302p-123f,
     0x1.98b252p-25f, 0.0f, 0.0f, 0x1.1e6368p-120f, 0x1.7e300cp-40f, 0x1.403f3cp-76f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.bd361ap-34f, 0.0f, 0.0f, 0x1.aada1ep-23f, 0.0f, 0.0f,
     0x1.ce8786p-70f, 0.0f, 0.0f, 0x1.b1007ap-11f, 0.0f, 0x1.46705cp-35f,
     0x1.4175eep-23f, 0.0f, 0x1.fedb68p-69f, 0x1.700cf6p-87f, 0.0f, 0x1.ff9958p-117f,
     0.0f, 0x1.97ae4ep-73f, 0x1.d6e2e2p-67f, 0.0f, 0x1.be6fe2p-94f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.77e566p-61f, 0x1.223902p-95f, 0.0f, 0x1.7f553p-123f, 0x1.0d69b2p-41f,
     0x1.f29218p-55f, 0.0f, 0x1.02cb82p-43f, 0x1.62c86cp-24f, 0x1.451bdep-5f, 0.0f,
     0.0f, 0.0f, 0x1.bf1356p-78f, 0.0f, 0.0f, 0x1.1f2edep-19f, 0.0f, 0.0f, 0.0f,
     0x1.883c9cp-124f, 0.0f, 0.0f, 0x1.9085bcp-31f, 0.0f, 0.0f, 0x1.cdd0a2p-58f, 0.0f,
     0x1.cd1d84p-23f, 0x1.ea7adep-62f, 0x1.a218cp-30f, 0x1.b3be8ep-116f,
     0x1.79d47ap-85f, 0.0f, 0x1.071b18p-78f, 0.0f, 0.0f, 0.0f
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
            tmp1 = Sleef_roundf1_purecfma(tmp0);
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
    printf("Sleef_roundf1_purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_roundf1_purecfma bench acc %a\n", global_bench_acc);
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
