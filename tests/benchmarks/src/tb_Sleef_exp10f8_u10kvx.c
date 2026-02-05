/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_exp10f8_u10kvx.c --function Sleef_exp10f8_u10kvx \
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
     0x1.67ef4p-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9b31a6p-8f, 0x1.1da7a4p-102f, 0.0f,
     0x1.1a7f3ap-121f, 0x1.d37958p-46f, 0.0f, 0x1.62d85ep-107f, 0.0f, 0x1.19abp-115f,
     0.0f, 0x1.d06abp-9f, 0x1.a465eap-68f, 0.0f, 0x1.f4bd3p-26f, 0.0f,
     0x1.32e1a8p-12f, 0x1.458aa8p-23f, 0.0f, 0x1.4608e6p-103f, 0.0f, 0.0f,
     0x1.842a0ap-116f, 0x1.734924p-101f, 0x1.f4473cp-92f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0d316p-87f, 0x1.a864dap-58f, 0x1.5efcc6p-20f, 0.0f, 0x1.495414p-124f, 0.0f,
     0x1.3fab6ep-76f, 0x1.5fe6acp-96f, 0x1.60af56p-22f, 0x1.2d658ap-102f, 0.0f, 0.0f,
     0x1.1b4c58p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8db1d2p-51f, 0x1.2f5e24p-101f, 0.0f,
     0x1.24de5ap-37f, 0x1.8966c4p-35f, 0x1.15b0dcp-13f, 0.0f, 0x1.783b3ap-62f,
     0x1.7f16d8p-99f, 0x1.0ddd6ep-32f, 0x1.471b8cp-11f, 0.0f, 0x1.341302p-72f,
     0x1.e96c4ep-60f, 0x1.f25e04p-92f, 0.0f, 0x1.3c34cep-46f, 0x1.a82f66p-106f,
     0x1.a451b6p-56f, 0x1.8e4cf6p-15f, 0x1.f782c6p-101f, 0.0f, 0.0f, 0.0f,
     0x1.730bap-18f, 0.0f, 0.0f, 0.0f, 0x1.ebb006p-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ab8bacp-40f, 0.0f, 0.0f, 0x1.18aefcp-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.5eaaf8p-26f, 0.0f, 0x1.ad309ap-122f, 0.0f, 0.0f,
     0x1.ee8f6ap-53f, 0.0f, 0.0f, 0.0f, 0x1.79aec2p-20f, 0x1.be9492p-52f, 0.0f,
     0x1.59f9b2p-26f, 0x1.4c3874p-121f, 0x1.e6345ap-70f, 0.0f, 0x1.dbfa02p-87f,
     0x1.0abf8ep-65f, 0x1.bbfbb6p-11f, 0.0f, 0.0f, 0.0f, 0x1.1347ap-36f, 0.0f, 0.0f,
     0x1.02e66p-58f, 0.0f, 0.0f, 0.0f, 0x1.cf025p-92f, 0x1.aa9f1ep-23f, 0.0f,
     0x1.4c4388p-32f, 0.0f, 0x1.9ceacep-62f, 0.0f, 0x1.e45698p-64f, 0x1.80f3c8p-22f,
     0x1.7ae9eep-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b79492p-51f, 0x1.06a292p-73f, 0.0f,
     0x1.b2d4dap-78f, 0x1.94d21p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d1f42ap-79f, 0x1.1f4f08p-108f, 0x1.0dccd8p-101f, 0.0f, 0x1.20d4ap-32f,
     0x1.50434p-31f, 0x1.eeb6f6p-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.27b966p-35f,
     0.0f, 0x1.2db91cp-33f, 0.0f, 0x1.41aeb6p-72f, 0x1.d4e1cp-84f, 0.0f,
     0x1.2bd61cp-49f, 0.0f, 0x1.94b076p-91f, 0.0f, 0x1.6782aap-121f, 0x1.f13808p-105f,
     0x1.33cfb4p-98f, 0.0f, 0x1.ce17d2p-74f, 0.0f, 0.0f, 0.0f, 0x1.05f2d8p-83f,
     0x1.37fb7ep-61f, 0.0f, 0x1.68210ep-83f, 0.0f, 0x1.d3b7c8p-10f, 0.0f,
     0x1.0a15cp-13f, 0.0f, 0.0f, 0x1.81704cp-61f, 0x1.881278p-87f, 0x1.d0d10ep-41f,
     0.0f, 0.0f, 0x1.d2f20ep-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e037c2p-60f,
     0.0f, 0x1.1479dp-46f, 0.0f, 0x1.ca6412p-59f, 0.0f, 0.0f, 0x1.9057ep-56f, 0.0f,
     0x1.a664eap-45f, 0x1.dc4a3p-9f, 0x1.84a3f4p-36f, 0x1.aa502cp-12f, 0.0f, 0.0f,
     0x1.435314p-25f, 0x1.230314p-113f, 0.0f, 0.0f, 0.0f, 0x1.a6e428p-59f,
     0x1.f41c04p-66f, 0x1.9161e6p-95f, 0.0f, 0x1.1627d6p-10f, 0.0f, 0.0f, 0.0f,
     0x1.ddf93cp-109f, 0.0f, 0x1.b2cf82p-86f, 0.0f, 0x1.608e12p-74f, 0x1.49581p-80f,
     0x1.7a3bp-26f, 0x1.428dd8p-35f, 0.0f, 0.0f, 0x1p0f, 0x1.ba8256p-117f,
     0x1.a0428ap-2f, 0x1.12e62ep-26f, 0x1.a65ba8p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3e2494p-62f, 0x1.585dfcp-50f, 0.0f, 0x1.be190cp-123f, 0.0f, 0.0f,
     0x1.0eebe8p-3f, 0.0f, 0x1.866502p-48f, 0x1.b44e9cp-101f, 0x1.f06fc8p-102f, 0.0f,
     0x1.12aef8p-84f, 0x1.b0dd94p-95f, 0x1.b6b82ap-16f, 0.0f, 0.0f, 0.0f,
     0x1.38d352p-63f, 0x1.684beep-120f, 0.0f, 0x1.a6aa9ap-31f, 0x1.77633p-50f,
     0x1.82861ep-22f, 0x1.33a55ap-126f, 0.0f, 0.0f, 0x1.2272dp-76f, 0.0f,
     0x1.58fad2p-23f, 0.0f, 0x1.32b658p-119f, 0x1.250f98p-64f, 0x1.a0e376p-3f,
     0x1.6888d6p-27f, 0x1.5c5d2ap-126f, 0x1.db7e96p-97f, 0x1.8183aap-73f,
     0x1.f50a7ep-11f, 0.0f, 0.0f, 0x1.b59672p-9f, 0.0f, 0.0f, 0x1.8f3122p-64f, 0.0f,
     0.0f, 0.0f, 0x1.ada6b2p-47f, 0x1.b9c942p-95f, 0.0f, 0x1.36b8acp-103f,
     0x1.4fba72p-93f, 0.0f, 0x1.f876f6p-89f, 0.0f, 0.0f, 0x1.dfee68p-21f, 0.0f,
     0x1.54a602p-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.aba5ecp-100f, 0x1.58a15ep-96f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c78dcp-100f, 0.0f, 0.0f, 0x1.17fa54p-125f,
     0x1.5a1a5ep-122f, 0x1.6b573ap-110f, 0x1.f71c8ep-88f, 0x1.b9bbccp-100f, 0.0f,
     0x1.854c7ep-37f, 0.0f, 0.0f, 0.0f, 0x1.14ddbp-47f, 0x1.5416a2p-107f, 0.0f,
     0x1.3c3a8cp-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.afc576p-8f, 0x1.622c4ap-14f,
     0x1.8793ep-63f, 0x1.ee5456p-8f, 0x1.5848dep-65f, 0.0f, 0x1.801b42p-97f, 0.0f,
     0x1.db1caap-102f, 0x1.ca168ap-26f, 0x1.530cf6p-12f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.506436p-97f, 0x1.182362p-33f, 0x1.c95552p-93f, 0.0f, 0.0f, 0x1.12df7cp-66f,
     0x1.f60f3ap-45f, 0x1.d98cp-100f, 0.0f, 0x1.a29308p-117f, 0x1.aa61cep-102f, 0.0f,
     0x1.f98aep-58f, 0.0f, 0x1.4416d8p-24f, 0x1.be184cp-94f, 0x1p0f, 0.0f, 0.0f,
     0x1.9336cp-16f, 0x1.27b46cp-125f, 0x1.813252p-24f, 0x1.86b418p-38f, 0.0f,
     0x1.220a72p-77f, 0.0f, 0x1.ca320ap-58f, 0.0f, 0.0f, 0x1.4a4a1ep-52f, 0.0f,
     0x1.5cc9a8p-3f, 0.0f, 0.0f, 0.0f, 0x1.5c448p-9f, 0x1.3c239cp-17f,
     0x1.4b59c8p-60f, 0x1.f95038p-96f, 0.0f, 0.0f, 0.0f, 0x1.0d0adp-24f, 0.0f, 0.0f,
     0x1.d70958p-61f, 0.0f, 0.0f, 0.0f, 0x1.bebf02p-7f, 0.0f, 0x1.b2cf74p-15f,
     0x1.78109p-26f, 0x1.d1cc56p-55f, 0x1.5aed96p-34f, 0x1.6a542ep-119f,
     0x1.305752p-34f, 0.0f, 0x1.3d7f58p-18f, 0.0f, 0.0f, 0x1.06cd2cp-49f, 0.0f, 0.0f,
     0x1.c8a0f4p-35f, 0.0f, 0.0f, 0.0f, 0x1.70d16ap-35f, 0.0f, 0x1.158f2ap-35f,
     0x1.bc9e9cp-31f, 0x1.43a3fap-105f, 0.0f, 0x1.a6655cp-15f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6dbbf8p-3f, 0x1.096f6cp-72f, 0.0f, 0x1.e6d074p-59f, 0.0f, 0.0f, 0.0f,
     0x1.d55a1cp-39f, 0x1.e1c136p-30f, 0.0f, 0.0f, 0x1.444d78p-107f, 0x1.ef140ap-69f,
     0x1.e22cep-112f, 0x1.616b9p-20f, 0x1.fb2912p-100f, 0.0f, 0.0f, 0.0f,
     0x1.5fafbep-48f, 0x1.e710b2p-44f, 0.0f, 0x1.ddc20ep-55f, 0.0f, 0x1.182e5ep-110f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.91dc2p-79f, 0.0f, 0x1.926c8p-73f, 0x1.12a5cp-95f,
     0x1.106a2p-73f, 0.0f, 0.0f, 0.0f, 0x1.75b7e4p-73f, 0.0f, 0.0f, 0.0f,
     0x1.8d0a8ap-41f, 0.0f, 0.0f, 0x1.c454e8p-15f, 0x1.ff0fep-113f, 0.0f,
     0x1.020dc4p-22f, 0x1.c24242p-49f, 0.0f, 0.0f, 0x1.525386p-111f, 0.0f,
     0x1.837152p-28f, 0.0f, 0x1.41d2aep-122f, 0x1.25099ep-51f, 0.0f, 0.0f, 0.0f,
     0x1.a6038ep-46f, 0.0f, 0x1.3820aap-116f, 0.0f, 0x1.ff822p-121f, 0.0f,
     0x1.08a176p-87f, 0.0f, 0x1.c948acp-106f, 0x1.c2dd62p-107f, 0.0f, 0.0f,
     0x1.9574bap-95f, 0.0f, 0x1.12ed1ap-3f, 0x1.a0d238p-66f, 0x1.a6d98p-74f,
     0x1.35134cp-120f, 0x1.53978cp-113f, 0x1.c52cap-36f, 0.0f, 0x1.998b0ep-43f,
     0x1.aa3c2ep-69f, 0.0f, 0.0f, 0.0f, 0x1.c02c0ap-84f, 0.0f, 0.0f, 0.0f,
     0x1.475e14p-90f, 0x1.d7ca6p-90f, 0.0f, 0.0f, 0.0f, 0x1.f38056p-28f,
     0x1.9f6998p-59f, 0x1.ca847cp-20f, 0.0f, 0x1.1a8f08p-42f, 0.0f, 0.0f, 0.0f,
     0x1.87116ep-30f, 0.0f, 0x1.f74564p-89f, 0.0f, 0x1.4c823ep-121f, 0.0f, 0.0f,
     0x1.9d3d56p-92f, 0.0f, 0x1.27ad48p-79f, 0.0f, 0.0f, 0x1.274b6p-59f,
     0x1.71184cp-79f, 0x1.f40f06p-11f, 0x1.8a319ap-115f, 0x1.428c28p-21f, 0.0f, 0.0f,
     0x1.02f32cp-35f, 0x1.b508fcp-31f, 0.0f, 0x1.e15194p-17f, 0.0f, 0x1.307cb6p-4f,
     0x1.dcf492p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dce05ap-1f, 0.0f,
     0x1.7fe7bp-83f, 0x1.bdef54p-64f, 0.0f, 0.0f, 0.0f, 0x1.c88502p-40f, 0.0f, 0.0f,
     0x1.8b078ap-126f, 0.0f, 0x1.3ef336p-108f, 0x1.b910bap-26f, 0x1.6d2bcep-83f,
     0x1.0001aap-113f, 0.0f, 0x1.7b7e64p-4f, 0.0f, 0.0f, 0x1.2dffa8p-21f, 0.0f,
     0x1.eddc0ap-34f, 0.0f, 0.0f, 0.0f, 0x1.6438b8p-21f, 0.0f, 0.0f, 0x1.fbc7b8p-60f,
     0x1.c3d376p-15f, 0x1.a08fd8p-69f, 0.0f, 0.0f, 0x1.b907a8p-76f, 0x1.42a9ap-83f,
     0.0f, 0x1.13157ep-47f, 0.0f, 0.0f, 0x1.d54dc6p-107f, 0.0f, 0x1.39bea4p-39f,
     0x1.f1c00ap-24f, 0.0f, 0.0f, 0.0f, 0x1.1d44e8p-93f, 0x1.7cac46p-13f, 0.0f,
     0x1.acf0fap-66f, 0.0f, 0x1.f5d3d6p-3f, 0x1.9fb274p-26f, 0.0f, 0.0f, 0.0f,
     0x1.4c5138p-125f, 0x1.ab91dcp-71f, 0.0f, 0x1.59f6cap-14f, 0x1.cb4bdep-55f,
     0x1.e10ab8p-47f, 0.0f, 0.0f, 0x1.d3c136p-93f, 0x1.ed7106p-29f, 0.0f, 0.0f, 0.0f,
     0x1.4c50b8p-11f, 0x1.12386ep-64f, 0.0f, 0.0f, 0.0f, 0x1.4a2ca2p-74f,
     0x1.39752p-33f, 0x1.217284p-126f, 0.0f, 0x1.72a6e8p-66f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a3325cp-30f, 0.0f, 0.0f, 0x1.7095dp-22f, 0x1.f8e53p-30f, 0.0f, 0.0f,
     0x1.a1f954p-123f, 0x1.14bb98p-42f, 0x1.56466ep-123f, 0.0f, 0.0f, 0.0f,
     0x1.e113e2p-52f, 0x1.4e6434p-79f, 0x1.aafbfep-53f, 0x1.a2f4e2p-59f,
     0x1.f07dd2p-21f, 0x1.121d06p-67f, 0.0f, 0x1.7cf622p-74f, 0x1.6c61ccp-111f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f809b2p-64f, 0.0f, 0x1.b728b2p-14f, 0x1.347d82p-39f, 0.0f,
     0x1.cad20ep-18f, 0x1.3d097ep-76f, 0.0f, 0x1.8f40eep-5f, 0x1.1f26f4p-126f,
     0x1.3d11dp-77f, 0.0f, 0x1.1b52acp-35f, 0x1.77c0ep-112f, 0x1.737f2ep-77f, 0.0f,
     0.0f, 0.0f, 0x1.ed9046p-57f, 0.0f, 0.0f, 0x1.98afp-89f, 0x1.a1685ep-20f,
     0x1.e73066p-54f, 0x1.0a5fd6p-45f, 0x1.de5ebp-1f, 0x1.32ddf2p-26f, 0.0f,
     0x1.c1fffep-61f, 0.0f, 0.0f, 0x1.c9a2p-56f, 0x1.a70ecp-122f, 0x1.7349c4p-31f,
     0.0f, 0x1.6f80ap-20f, 0.0f, 0.0f, 0x1.3cea92p-65f, 0.0f, 0.0f, 0x1.71e6b2p-42f,
     0x1.6c9e58p-37f, 0x1.edfb32p-27f, 0.0f, 0x1.adbf8ep-94f, 0x1.34034ep-107f, 0.0f,
     0x1.fd01bp-56f, 0x1.c321b8p-122f, 0.0f, 0x1.a4d87p-4f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d4c8a8p-119f, 0.0f, 0x1.0f6a54p-116f, 0.0f, 0x1.e9872cp-54f, 0.0f,
     0x1.f5ccap-104f, 0.0f, 0x1.8279e6p-71f, 0x1.1b076p-84f, 0.0f, 0x1.cb3e0ap-26f,
     0x1.a8d12cp-12f, 0x1.cd1c12p-48f, 0x1.5254fap-82f, 0x1.65bd24p-36f,
     0x1.aea942p-66f, 0x1.ce6376p-8f, 0.0f, 0.0f, 0.0f, 0x1.05c1bep-118f, 0.0f, 0.0f,
     0x1.3d2472p-22f, 0x1.4b1fa2p-50f, 0x1.98a122p-61f, 0x1.f54d16p-124f,
     0x1.b9988ep-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a24d9ep-106f, 0.0f, 0.0f, 0x1.af6a92p-74f, 0.0f, 0.0f, 0x1.d66aep-33f,
     0x1.25324ap-5f, 0x1.5c5dbcp-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ad916ep-2f,
     0x1.32cb3p-44f, 0x1.a0679ep-94f, 0x1.d6836cp-109f, 0x1.e85dcap-76f, 0.0f,
     0x1.b8943p-95f, 0x1.20a958p-57f, 0.0f, 0.0f, 0x1.94b658p-66f, 0.0f,
     0x1.0ada16p-8f, 0x1.28fe1cp-3f, 0.0f, 0x1.295d2cp-69f, 0x1.974bcep-13f, 0.0f,
     0.0f, 0x1.f6432ep-38f, 0x1.e7a112p-116f, 0.0f, 0.0f, 0x1.f43a8cp-108f, 0.0f,
     0x1.c8ff52p-112f, 0x1.178786p-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6bba54p-50f, 0x1.7aaee6p-77f, 0x1.c4df76p-117f, 0.0f, 0x1.699622p-115f,
     0x1.1e7f06p-42f, 0x1.adcb14p-83f, 0.0f, 0x1.f9b5eap-55f, 0.0f, 0.0f,
     0x1.ce9cb4p-52f, 0x1.598032p-37f, 0x1.9fabe4p-14f, 0.0f, 0.0f, 0.0f,
     0x1.6bf6b8p-74f, 0x1.784b2ap-117f, 0.0f, 0.0f, 0.0f, 0x1.10aac8p-36f, 0.0f, 0.0f,
     0.0f, 0x1.69d826p-85f, 0.0f, 0x1.07dc48p-97f, 0x1.58da8ep-29f, 0.0f, 0.0f,
     0x1.c010c2p-97f, 0.0f, 0.0f, 0x1.6bc87ep-2f, 0.0f, 0x1.0981d4p-44f, 0.0f,
     0x1.ca4a28p-6f, 0.0f, 0x1.cc54f8p-104f, 0x1.88743cp-66f, 0x1.c7b182p-21f,
     0x1.a5847ap-70f, 0.0f, 0x1.0c715cp-117f, 0.0f, 0x1.dd14dp-111f, 0.0f, 0.0f, 0.0f,
     0x1.cc86eap-69f, 0x1.882d2ep-70f, 0x1.b16ee6p-94f, 0x1.2ab9fep-9f,
     0x1.57891cp-113f, 0x1.04e1d6p-79f, 0.0f, 0.0f, 0x1.37a10ep-28f, 0.0f,
     0x1.927af4p-13f, 0x1.cfd12p-52f, 0.0f, 0.0f, 0x1.d7835ap-12f, 0.0f,
     0x1.d80a58p-42f, 0x1.3acf9p-18f, 0.0f, 0x1.d024f6p-7f, 0.0f, 0x1.bddcep-42f,
     0x1.2a1accp-52f, 0.0f, 0x1.865c04p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.989186p-81f,
     0x1.e791d8p-27f, 0.0f, 0.0f, 0x1.6cf93ep-27f, 0.0f, 0.0f, 0x1.c6341ap-17f,
     0x1.3fcd84p-58f, 0x1.dbf99p-107f, 0.0f, 0x1.bb967p-115f, 0x1.172d28p-118f, 0.0f,
     0.0f, 0x1.63d8a6p-82f, 0x1.ea663ep-8f, 0x1.13917ep-59f, 0x1.8946a4p-65f,
     0x1.12c6bep-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d6c6dp-49f, 0.0f, 0.0f, 0.0f, 0x1.1b70aep-106f, 0.0f, 0x1.869942p-61f,
     0x1.9c43ecp-93f, 0.0f, 0.0f, 0x1.1184f8p-73f, 0.0f, 0x1.2e2816p-42f,
     0x1.3fc238p-107f, 0.0f, 0x1.3630d8p-86f, 0.0f, 0x1.b720a4p-114f, 0.0f,
     0x1.6e62cp-36f, 0x1.1b3cf6p-76f, 0x1.531102p-41f, 0x1.87cedap-120f,
     0x1.875aaap-39f, 0.0f, 0.0f, 0x1.01a6e4p-33f, 0x1.8b66cp-94f, 0.0f, 0.0f,
     0x1.910d18p-105f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.94028ep-104f,
     0x1.9813dcp-88f, 0x1.7d1e62p-25f, 0x1.11c664p-102f, 0.0f, 0x1.4ae568p-114f, 0.0f,
     0x1.cab02p-10f, 0.0f, 0x1.9a059p-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ca2596p-48f, 0.0f, 0.0f, 0x1.c1f3fap-37f, 0.0f, 0.0f, 0.0f, 0x1.ff049cp-6f,
     0x1.577a86p-36f, 0x1.1331a2p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.46813ap-87f, 0.0f,
     0x1.4887aap-81f, 0.0f, 0x1.10c3ecp-93f, 0x1.bd5afep-42f, 0.0f, 0x1.7e82aap-67f,
     0.0f, 0x1.5bbdd2p-52f, 0x1.bc4d96p-22f
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
            tmp1 = Sleef_exp10f8_u10kvx(tmp0);
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
    printf("Sleef_exp10f8_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_exp10f8_u10kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
