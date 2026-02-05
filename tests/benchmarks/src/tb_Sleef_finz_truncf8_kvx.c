/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_truncf8_kvx.c --function Sleef_finz_truncf8_kvx \
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
     0x1.5d622cp-20f, 0.0f, 0x1.d5c5cap-19f, 0x1.0ec8fap-43f, 0x1.bd92cp-121f,
     0x1.f17ffep-31f, 0.0f, 0.0f, 0.0f, 0x1.354652p-89f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.afe9dap-114f, 0.0f, 0.0f, 0x1.fa812cp-80f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2e2c7ap-102f, 0x1.62571ap-63f, 0.0f, 0.0f, 0x1.cffc38p-55f, 0.0f,
     0x1.387c62p-34f, 0x1.55a9d8p-46f, 0x1.0dbbd2p-29f, 0x1.4e6b5ep-32f,
     0x1.25d46p-89f, 0x1.1d7468p-32f, 0.0f, 0.0f, 0x1.7328p-94f, 0x1.2bf358p-119f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.fc9c06p-84f, 0.0f, 0x1.0b4cf2p-30f, 0.0f,
     0x1.baae8cp-47f, 0x1.ffdc42p-100f, 0.0f, 0x1.dbcafep-81f, 0.0f, 0.0f, 0.0f,
     0x1.143534p-37f, 0.0f, 0x1.9b3664p-120f, 0x1.3a041p-10f, 0.0f, 0.0f,
     0x1.956012p-76f, 0x1.361218p-94f, 0.0f, 0.0f, 0.0f, 0x1.d25a32p-83f,
     0x1.74ceccp-16f, 0x1.e605c2p-3f, 0x1.75ca84p-37f, 0.0f, 0x1.a0d8bp-75f,
     0x1.b95ab4p-10f, 0x1.33f9ap-28f, 0.0f, 0x1.2c96dcp-2f, 0.0f, 0x1.426b72p-52f,
     0x1.88d48ep-17f, 0x1.e8bb5p-82f, 0.0f, 0.0f, 0.0f, 0x1.acbbbep-115f, 0.0f,
     0x1.0a6c2ap-76f, 0x1.0caa86p-104f, 0.0f, 0x1.e480f6p-16f, 0.0f, 0x1.ed426cp-82f,
     0.0f, 0.0f, 0.0f, 0x1.1d99cap-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d9904ep-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3aba16p-124f, 0x1.ea3c08p-57f,
     0x1.c9b89ep-15f, 0x1.feae38p-95f, 0.0f, 0x1.85cee8p-126f, 0.0f, 0.0f,
     0x1.f5fb34p-85f, 0.0f, 0.0f, 0x1.07660ep-28f, 0.0f, 0x1.6a3b76p-55f,
     0x1.d0c06cp-123f, 0x1.ab4e98p-60f, 0.0f, 0x1.c3301cp-103f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.733454p-42f, 0x1.06236cp-23f, 0x1.d65f2ep-93f, 0.0f,
     0x1.a2b10ep-15f, 0.0f, 0.0f, 0.0f, 0x1.a6a17ap-117f, 0x1.002ea2p-45f, 0.0f,
     0x1.d266dp-7f, 0.0f, 0.0f, 0x1.9f2fdcp-121f, 0x1.1a7a1p-48f, 0.0f, 0.0f,
     0x1.593424p-119f, 0x1.5b7ceap-122f, 0x1.c5bb86p-70f, 0.0f, 0x1.7c47ecp-42f,
     0x1.6d0ae4p-36f, 0x1.a00a5ep-55f, 0x1.d22b7cp-85f, 0.0f, 0x1.efb39ap-31f, 0.0f,
     0.0f, 0x1.cdbbeep-114f, 0x1.68617cp-41f, 0.0f, 0.0f, 0x1.0a32b4p-46f, 0.0f,
     0x1.845206p-65f, 0x1.0ab7b6p-69f, 0.0f, 0.0f, 0x1.e5375p-113f, 0x1.a248bap-64f,
     0.0f, 0x1.064a38p-38f, 0.0f, 0x1.36a58p-79f, 0x1.f2b568p-48f, 0x1.7a0cfp-80f,
     0x1.a0e0dep-18f, 0.0f, 0x1.6ddfa4p-126f, 0x1.35c6ap-100f, 0x1.74eb3ap-42f, 0.0f,
     0x1.9bccap-45f, 0.0f, 0x1.43aa44p-64f, 0x1.fa3568p-76f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4cf5bep-96f, 0x1.94c7f4p-23f, 0.0f, 0.0f, 0.0f, 0x1.2b3262p-17f, 0.0f, 0.0f,
     0.0f, 0x1.ccdcb2p-109f, 0x1.37df6p-15f, 0x1.aac76cp-62f, 0.0f, 0.0f,
     0x1.65c688p-114f, 0.0f, 0.0f, 0x1.1e74f8p-27f, 0x1.4d148ap-44f, 0x1.7bdafap-113f,
     0x1.c18b5p-54f, 0x1.18c8dep-67f, 0x1.30292p-109f, 0.0f, 0.0f, 0x1.1fa70ep-15f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3adee4p-24f, 0x1.33c9acp-40f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.15b6c2p-32f, 0.0f, 0.0f, 0.0f, 0x1.fe894p-31f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d4bbb2p-13f, 0x1.89da7cp-111f, 0x1.1b7632p-61f, 0.0f, 0.0f,
     0x1.67f228p-75f, 0x1.a06d2ep-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f7c4fcp-98f, 0.0f, 0x1.e5e2dap-91f, 0.0f, 0x1.47a8fcp-66f,
     0x1.007304p-76f, 0x1.ee5964p-111f, 0.0f, 0.0f, 0.0f, 0x1.114aa4p-20f, 0.0f,
     0x1.d4af32p-42f, 0.0f, 0.0f, 0x1.ba7c48p-108f, 0x1.c6602ap-30f, 0x1.fadb6p-121f,
     0x1.8e82d8p-12f, 0x1.7dcb08p-2f, 0.0f, 0x1.8267d2p-96f, 0x1.d112c2p-100f,
     0x1.9338fep-116f, 0.0f, 0x1.8e014cp-5f, 0x1.9684ap-105f, 0x1.4d8588p-20f,
     0x1.1a0046p-25f, 0.0f, 0.0f, 0x1.966c78p-78f, 0.0f, 0x1.c1392ap-97f,
     0x1.8d4284p-92f, 0x1.9dd654p-122f, 0x1.c8c1ap-102f, 0x1.c2caeap-35f,
     0x1.1cc99ap-4f, 0.0f, 0x1.355056p-78f, 0x1.47fc8cp-120f, 0x1.1e173ep-115f, 0.0f,
     0.0f, 0.0f, 0x1.5d1dd2p-52f, 0.0f, 0x1.1afbc4p-78f, 0x1.254a94p-79f,
     0x1.67ec74p-57f, 0x1.a1f73p-61f, 0.0f, 0x1.53896ep-62f, 0x1.6d4042p-48f,
     0x1.0dcd84p-8f, 0x1.b73466p-2f, 0x1.7ba67p-36f, 0x1.6f5b6p-40f, 0x1.8002p-25f,
     0x1.4af452p-69f, 0x1.605d28p-126f, 0x1.144e6ap-60f, 0.0f, 0x1.11d372p-4f, 0.0f,
     0.0f, 0x1.5a8f9ap-29f, 0.0f, 0x1.f0b7fep-61f, 0x1.c976cap-35f, 0.0f, 0.0f,
     0x1.18674cp-114f, 0.0f, 0x1.5f78c8p-124f, 0.0f, 0x1.6cc82ep-117f,
     0x1.62009ep-92f, 0x1.46936p-112f, 0x1.6e086ep-105f, 0x1.2f5f56p-46f,
     0x1.4fc5dep-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.819b5ep-76f, 0.0f, 0x1.35d684p-43f,
     0.0f, 0x1.f8ec48p-117f, 0x1.e77152p-48f, 0.0f, 0.0f, 0.0f, 0x1.61b62ep-70f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.14bd8cp-37f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.3c182p-65f,
     0x1.2f49a6p-23f, 0x1.6de1bap-24f, 0x1.a8688ep-16f, 0x1.dfca7ap-42f,
     0x1.1e60acp-3f, 0.0f, 0x1.9bb438p-95f, 0.0f, 0.0f, 0.0f, 0x1.307f8ep-86f, 0.0f,
     0x1.3d8e5p-38f, 0x1.bd754ep-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.41ef12p-87f, 0.0f,
     0x1.45f068p-60f, 0x1.a0e5bp-38f, 0x1.dd9694p-67f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7ca5d4p-88f, 0x1.f10c76p-45f, 0x1.87f97cp-118f, 0x1.1b67aep-67f,
     0x1.f50accp-112f, 0.0f, 0.0f, 0.0f, 0x1.dff35ep-96f, 0x1.651322p-5f,
     0x1.d818cp-117f, 0x1.b372f2p-35f, 0x1.b07d0ap-58f, 0.0f, 0.0f, 0.0f, 0x1p0f,
     0x1.04eeb8p-93f, 0.0f, 0.0f, 0x1.cf626p-92f, 0.0f, 0.0f, 0x1.1ae07ap-65f,
     0x1.66eec2p-76f, 0x1.eeee2p-12f, 0.0f, 0.0f, 0x1.8e8672p-4f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b292c4p-53f, 0x1.9b204p-32f, 0.0f, 0.0f, 0x1.db5fc2p-104f,
     0x1.6b8792p-67f, 0x1.bb853ep-67f, 0x1.4ee102p-123f, 0x1.668f26p-91f,
     0x1.58c392p-109f, 0.0f, 0x1.1593p-14f, 0x1.973dd6p-43f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ee1a7ap-27f, 0.0f, 0.0f, 0.0f, 0x1.b50a86p-56f, 0.0f, 0x1.50e292p-113f,
     0.0f, 0.0f, 0x1.e2f83p-54f, 0.0f, 0x1.84347p-59f, 0.0f, 0x1.015a32p-78f, 0.0f,
     0.0f, 0x1.6a0e8p-19f, 0x1.276978p-96f, 0x1.8d38b2p-116f, 0x1.7d62bep-7f, 0.0f,
     0x1.daaaaep-88f, 0.0f, 0x1.68a682p-57f, 0.0f, 0x1.f60d44p-67f, 0.0f,
     0x1.db177ep-24f, 0.0f, 0x1.a4c74cp-96f, 0x1.91f466p-20f, 0.0f, 0.0f,
     0x1.63ccf4p-27f, 0x1.7534d2p-118f, 0.0f, 0.0f, 0x1.89683ap-61f, 0.0f, 0.0f, 0.0f,
     0x1.f8ce78p-6f, 0x1.56e286p-43f, 0.0f, 0x1.30ee54p-65f, 0x1.98e352p-42f,
     0x1.4efdb8p-74f, 0x1.24637cp-121f, 0.0f, 0x1.e5842ep-83f, 0x1.f86fa8p-104f, 0.0f,
     0x1.eb148ap-45f, 0x1.5eea56p-33f, 0.0f, 0x1.2551cep-19f, 0x1.917828p-87f,
     0x1.757722p-77f, 0.0f, 0.0f, 0x1.e1c21ep-8f, 0x1.0e18acp-18f, 0x1.333344p-74f,
     0x1.378fa4p-30f, 0x1.8cf584p-90f, 0x1.aff8cap-81f, 0x1.9b94a2p-54f, 0.0f,
     0x1.f33624p-86f, 0x1.6065a6p-26f, 0.0f, 0.0f, 0.0f, 0x1.f9f384p-9f,
     0x1.8d929ep-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.529ab6p-112f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.339de4p-101f, 0x1.bf1d86p-61f, 0.0f, 0x1.37e3b4p-105f, 0.0f,
     0x1.e1aeb6p-85f, 0x1.9ce856p-69f, 0x1.e329e6p-85f, 0.0f, 0.0f, 0x1.5d67c2p-78f,
     0.0f, 0.0f, 0x1.75834p-72f, 0x1.b2d788p-71f, 0.0f, 0x1.a5eb74p-25f,
     0x1.1d49dap-117f, 0.0f, 0.0f, 0.0f, 0x1.4f8d3ep-116f, 0.0f, 0.0f,
     0x1.984ab4p-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1d740ep-50f, 0x1.03c0b6p-11f, 0.0f,
     0.0f, 0.0f, 0x1.5f519ep-15f, 0x1.5e86d4p-36f, 0x1.013108p-123f, 0x1.4650fp-31f,
     0.0f, 0x1p0f, 0x1.92e15ap-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.012abap-37f, 0.0f,
     0.0f, 0.0f, 0x1.0abe66p-97f, 0x1.15def4p-95f, 0.0f, 0x1.2dd292p-10f,
     0x1.8a07acp-5f, 0x1.18e208p-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.47e24cp-119f, 0.0f,
     0.0f, 0x1.4a60ccp-28f, 0.0f, 0x1.0d0b6p-87f, 0.0f, 0x1.233044p-111f, 0.0f,
     0x1.d4e9p-48f, 0x1.a1ed42p-44f, 0.0f, 0.0f, 0x1.aed538p-98f, 0x1.bbc4eep-111f,
     0x1.edb782p-63f, 0.0f, 0.0f, 0x1.6344b8p-12f, 0x1.5be3bcp-48f, 0x1.24ffbp-20f,
     0.0f, 0.0f, 0x1.e32e52p-97f, 0x1.a3a9cap-41f, 0x1.9f2dep-118f, 0x1.a9c17cp-60f,
     0.0f, 0.0f, 0.0f, 0x1.28836ep-122f, 0.0f, 0.0f, 0.0f, 0x1.5533dp-20f, 0.0f,
     0x1.91ebd2p-41f, 0x1.0a68fap-70f, 0.0f, 0.0f, 0.0f, 0x1.949f6ap-52f,
     0x1.47348ep-85f, 0.0f, 0.0f, 0x1.68ebe4p-82f, 0.0f, 0.0f, 0.0f, 0x1.bd2576p-78f,
     0.0f, 0.0f, 0x1.446c26p-49f, 0.0f, 0x1.0e983p-125f, 0.0f, 0.0f, 0x1.fa593ap-13f,
     0.0f, 0.0f, 0x1.7cb412p-53f, 0x1.a97f8cp-55f, 0.0f, 0x1.85de1ap-17f, 0.0f,
     0x1.85e794p-6f, 0x1.72c708p-49f, 0.0f, 0x1.0cc94ep-54f, 0x1.722c92p-9f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.04babap-19f, 0.0f, 0x1.8b988p-29f, 0x1.a1a088p-21f,
     0.0f, 0x1.b201c2p-66f, 0.0f, 0x1.98b7bp-9f, 0x1.a2ce2ep-3f, 0x1.e591e2p-17f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.68d6p-119f, 0x1.7e4b6ap-82f, 0.0f,
     0x1.235948p-26f, 0x1.9f19f6p-80f, 0x1.d1f96ep-100f, 0x1.95db44p-83f,
     0x1.953da6p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e0a38ep-122f, 0.0f,
     0x1.ff8096p-29f, 0x1.f3e6ap-99f, 0x1.bfa8c2p-116f, 0.0f, 0.0f, 0x1.c8749ep-65f,
     0x1.511c02p-1f, 0.0f, 0.0f, 0x1.d63d28p-103f, 0.0f, 0x1.04f1f8p-5f, 0.0f,
     0x1.ce0f06p-26f, 0.0f, 0.0f, 0.0f, 0x1.6dc5fp-114f, 0.0f, 0.0f, 0x1.1740e8p-117f,
     0.0f, 0.0f, 0x1.a4d8c2p-105f, 0.0f, 0.0f, 0x1.649e22p-26f, 0.0f, 0x1.add82ep-68f,
     0x1.44328ap-78f, 0x1.45a068p-68f, 0.0f, 0x1.12ca7cp-92f, 0.0f, 0x1.6ca5b4p-16f,
     0x1.866f1p-25f, 0.0f, 0x1.018116p-85f, 0.0f, 0x1.344476p-113f, 0.0f,
     0x1.92811p-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9a9f3ep-26f,
     0x1.7a7302p-51f, 0.0f, 0.0f, 0.0f, 0x1.0ac444p-19f, 0x1.f9618p-12f, 0.0f, 0.0f,
     0.0f, 0x1.b05ffcp-81f, 0x1.72d2aap-117f, 0.0f, 0x1.5ab94p-19f, 0.0f,
     0x1.0ff4c6p-29f, 0x1.d3f348p-85f, 0.0f, 0x1.8cc114p-122f, 0.0f, 0x1.2445fcp-81f,
     0x1.822696p-15f, 0x1.5a737ep-74f, 0x1.3f58d4p-99f, 0.0f, 0.0f, 0x1.63521cp-19f,
     0x1.57caf8p-5f, 0.0f, 0.0f, 0x1.8cb9dep-78f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c2b18p-88f, 0x1.dc7c9ap-36f, 0x1.36451p-97f, 0x1.7fad54p-113f, 0.0f, 0.0f,
     0x1.e29a38p-56f, 0x1.5f3e7p-105f, 0x1.0c6054p-39f, 0.0f, 0x1.9b4ee8p-35f,
     0x1.2026c6p-22f, 0.0f, 0.0f, 0x1.b8725ep-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.de9ab8p-46f, 0x1.28088p-46f, 0.0f, 0.0f, 0x1.86367p-98f, 0.0f,
     0x1.1df138p-42f, 0.0f, 0.0f, 0x1.8e8432p-89f, 0x1.6d0ccep-124f, 0x1.9d1ed4p-80f,
     0x1.da08b2p-93f, 0x1.ed37e8p-122f, 0x1.b6232ap-75f, 0x1.4c52fp-124f, 0.0f,
     0x1.c88262p-70f, 0x1.29f7fep-77f, 0.0f, 0x1.037fdp-10f, 0x1.a3ff4cp-44f, 0.0f,
     0.0f, 0x1.98562ap-92f, 0.0f, 0.0f, 0.0f, 0x1.158fbp-66f, 0x1.7abaecp-57f, 0.0f,
     0.0f, 0.0f, 0x1.10a256p-22f, 0x1.bace22p-117f, 0x1.3b6968p-112f, 0x1.f1219cp-22f,
     0x1.cb8b58p-74f, 0.0f, 0x1.5b2f94p-84f, 0x1.bb17d4p-116f, 0x1.b77376p-89f,
     0x1.f3fd0ep-14f, 0.0f, 0x1.ea42e2p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5a388ep-89f, 0x1.7885ecp-21f, 0.0f, 0.0f, 0x1.1e2d18p-101f, 0x1.df4238p-83f,
     0.0f, 0.0f, 0x1.c50792p-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4574e2p-120f,
     0.0f, 0x1.19d55p-125f, 0x1.531458p-45f, 0.0f, 0.0f, 0x1.74eafap-38f, 0.0f,
     0x1.f56c96p-22f, 0.0f, 0.0f, 0x1.2fe13p-90f, 0.0f, 0.0f, 0.0f, 0x1.7d1586p-77f,
     0x1.a7bcbep-83f, 0x1.86d9d8p-77f, 0.0f, 0x1.025ccp-4f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b7df6cp-61f, 0.0f, 0x1.c2bb88p-68f, 0x1p0f, 0x1.70604cp-20f, 0.0f, 0.0f,
     0x1.ea9ddep-32f, 0x1.4c2c7cp-70f, 0x1.ea5a4ep-19f, 0x1.b2c2bep-21f, 0.0f,
     0x1.75a67ap-47f, 0x1.64b71p-94f, 0.0f, 0.0f, 0x1.144aeep-102f, 0.0f, 0.0f,
     0x1.23924ap-116f, 0x1.711d6p-66f, 0.0f, 0.0f, 0x1.88905ap-118f, 0x1.f048cap-11f,
     0x1.8ad908p-78f, 0x1.04b734p-111f, 0.0f, 0.0f, 0x1.c8e1f2p-52f, 0.0f,
     0x1.a494f4p-125f, 0.0f, 0.0f, 0x1.db93d2p-16f, 0.0f, 0.0f, 0.0f, 0x1.7d4c02p-39f,
     0.0f, 0.0f, 0x1.7306dep-6f, 0x1.4d0354p-66f, 0x1.123304p-64f, 0.0f,
     0x1.255b6ap-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.132f32p-2f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.84e4b6p-116f, 0.0f, 0x1.dd94bep-39f, 0.0f, 0.0f, 0x1.70d96cp-72f, 0.0f,
     0x1.1faf06p-117f, 0x1.ff7c38p-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e5232p-90f, 0x1.dbd6fp-27f, 0x1.0a13b4p-57f, 0.0f, 0x1.e5efe2p-108f,
     0x1.a529e2p-82f, 0.0f, 0x1.9b8deap-94f, 0.0f, 0x1.e08ee2p-109f, 0x1.05ee52p-70f,
     0.0f, 0x1.5a7e04p-37f, 0.0f, 0.0f, 0.0f, 0x1.863f7ap-53f, 0.0f, 0x1.7a7522p-109f,
     0.0f, 0x1.a08c8ap-17f, 0x1.ecfc7ap-103f, 0.0f, 0x1.8fc452p-41f, 0.0f, 0.0f, 0.0f,
     0x1.7636c8p-112f, 0.0f, 0x1.7257eep-86f, 0x1.a06436p-74f, 0.0f, 0.0f, 0.0f,
     0x1.23fa48p-12f, 0.0f, 0.0f, 0x1.71a7d2p-85f, 0.0f, 0x1.952276p-102f,
     0x1.dada7ep-121f, 0.0f, 0x1.6af7cp-80f, 0.0f, 0x1.e481a2p-122f, 0x1.84a988p-97f,
     0x1.7276bep-39f, 0x1.c82c6ep-70f, 0x1.1baebap-31f, 0x1.d4f2f8p-38f, 0.0f,
     0x1.5eaa5ep-87f
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
            tmp1 = Sleef_finz_truncf8_kvx(tmp0);
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
    printf("Sleef_finz_truncf8_kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_finz_truncf8_kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
