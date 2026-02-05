/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_atan2f8_u10kvx.c --function Sleef_atan2f8_u10kvx \
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
     0x1.7adfa6p-63f, 0x1.9e125p-36f, 0x1.23dd6ap-4f, 0.0f, 0.0f, 0.0f,
     0x1.d9719ep-18f, 0.0f, 0.0f, 0x1.e4c32ep-13f, 0.0f, 0x1.0fdbccp-60f, 0.0f,
     0x1.9ca05ep-54f, 0.0f, 0.0f, 0x1.72f66ap-6f, 0x1.1ff878p-30f, 0x1.709dc2p-80f,
     0x1.fd01a8p-38f, 0.0f, 0x1.4d69bep-61f, 0.0f, 0x1.6e9262p-39f, 0x1.af3f9cp-115f,
     0x1.f61ae4p-50f, 0.0f, 0.0f, 0x1.48d6d8p-56f, 0.0f, 0x1.a15f1cp-43f,
     0x1.63054ep-111f, 0x1.d1ba56p-121f, 0.0f, 0x1.c3ec4ep-47f, 0.0f, 0.0f,
     0x1.1d333ap-77f, 0.0f, 0.0f, 0x1.68f4f2p-118f, 0.0f, 0.0f, 0x1.87c318p-28f,
     0x1.13a9dap-51f, 0x1.a52cc4p-98f, 0.0f, 0.0f, 0x1.aa92a4p-56f, 0.0f,
     0x1.06760cp-96f, 0x1.c05248p-53f, 0.0f, 0x1.0ac748p-122f, 0.0f, 0.0f,
     0x1.327f54p-97f, 0x1.32f9a2p-13f, 0x1.84dd66p-76f, 0.0f, 0.0f, 0x1.9997f8p-41f,
     0x1.2d063cp-37f, 0x1.04c18ap-26f, 0x1.cdc6fep-16f, 0x1.5105aep-15f, 0.0f, 0.0f,
     0x1.c709fap-70f, 0x1.fcb04ap-29f, 0x1.58046cp-92f, 0.0f, 0.0f, 0x1.9459a8p-24f,
     0.0f, 0x1.c646a4p-13f, 0x1.eef6aap-85f, 0x1.ca5e78p-14f, 0x1.80ecdep-60f,
     0x1.e82f8p-29f, 0.0f, 0.0f, 0x1.b9ede4p-50f, 0.0f, 0x1.26ee26p-11f,
     0x1.53e202p-118f, 0.0f, 0.0f, 0x1.d0e43ep-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.373d3ep-91f, 0x1.dc59b6p-103f, 0x1.ae6dbep-27f, 0x1.fd23e8p-104f, 0.0f,
     0x1.dc488cp-65f, 0.0f, 0x1.ac9eecp-84f, 0.0f, 0x1.fc4c7cp-32f, 0x1.b5082p-89f,
     0.0f, 0.0f, 0x1.f2d034p-96f, 0x1.62fbe6p-41f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.07528ep-24f, 0.0f, 0.0f, 0x1.c46d2cp-86f, 0.0f, 0x1.aef36cp-18f, 0.0f,
     0x1.b630bcp-6f, 0.0f, 0.0f, 0x1.ad2044p-65f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2288bcp-28f, 0.0f, 0.0f, 0x1.2f5d16p-50f, 0x1.75ded2p-72f, 0.0f, 0.0f, 0.0f,
     0x1.176e06p-46f, 0x1.2d0e5p-86f, 0x1.6ae828p-66f, 0.0f, 0x1.e73692p-122f,
     0x1.aac724p-69f, 0x1.71dcccp-27f, 0.0f, 0.0f, 0.0f, 0x1.abcf54p-20f, 0.0f,
     0x1.c7bc84p-71f, 0x1.78aae6p-33f, 0x1.c69d7cp-34f, 0.0f, 0x1.94ec3ap-33f, 0.0f,
     0x1.66f796p-33f, 0x1.eb8a9cp-102f, 0x1.7c9f28p-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.332688p-94f, 0x1.910394p-6f, 0.0f, 0x1.5dbda8p-52f, 0.0f, 0x1.c5a18cp-122f,
     0x1.c37236p-119f, 0.0f, 0x1.dbb71p-74f, 0.0f, 0.0f, 0x1.f3e55p-37f,
     0x1.8d182ep-18f, 0.0f, 0x1.98866ap-2f, 0.0f, 0.0f, 0.0f, 0x1.e6d332p-45f,
     0x1.aab688p-1f, 0x1.d0836ep-46f, 0.0f, 0x1.3d9daap-63f, 0.0f, 0.0f, 0.0f,
     0x1.5e031ep-103f, 0x1.f7641ap-44f, 0x1.485498p-104f, 0.0f, 0x1.2eaa58p-18f,
     0x1.0d345p-47f, 0.0f, 0x1.210596p-83f, 0x1.d4af9ep-123f, 0.0f, 0x1.e04dccp-38f,
     0x1.9084ecp-107f, 0.0f, 0x1.b49b26p-88f, 0.0f, 0.0f, 0.0f, 0x1.2662f6p-36f, 0.0f,
     0.0f, 0x1.e113e8p-7f, 0.0f, 0.0f, 0x1.919aa4p-85f, 0x1.f2558p-74f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.0a95aep-43f, 0x1.85674p-59f, 0x1.630a14p-86f, 0.0f, 0.0f,
     0x1.b1e362p-117f, 0.0f, 0.0f, 0x1.c4cce4p-46f, 0x1.35e56cp-113f, 0x1.8b19f8p-55f,
     0.0f, 0.0f, 0x1.ff9104p-117f, 0x1.0192a4p-47f, 0x1.a5dc42p-12f, 0x1.576fdap-51f,
     0.0f, 0x1.df9ea6p-75f, 0.0f, 0x1.9a75d4p-56f, 0x1.369488p-117f, 0x1.375b76p-2f,
     0x1.66434ap-44f, 0.0f, 0.0f, 0x1.e21056p-53f, 0.0f, 0x1.2378d2p-70f,
     0x1.5b45a6p-107f, 0.0f, 0x1.d3dd4ep-14f, 0x1.17cb7ap-99f, 0.0f, 0x1.4eafap-51f,
     0x1.557046p-102f, 0x1.37790cp-38f, 0x1.b5fd44p-71f, 0.0f, 0x1.907984p-76f, 0.0f,
     0x1.0d29b6p-93f, 0x1.bc8698p-9f, 0.0f, 0x1.f939f8p-101f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9805dap-113f, 0.0f, 0x1.be97d4p-22f, 0.0f, 0.0f, 0.0f, 0x1.36a60ap-123f,
     0.0f, 0x1.0f31ecp-98f, 0x1.1bf7c2p-22f, 0.0f, 0.0f, 0x1.d5c1aap-35f, 0.0f, 0.0f,
     0.0f, 0x1.23dc1ap-65f, 0x1.4e26bap-18f, 0x1.cecbd4p-4f, 0x1.f7499ap-77f, 0.0f,
     0.0f, 0x1.accc32p-79f, 0x1.a81e68p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ec7722p-57f,
     0.0f, 0.0f, 0x1.99d4bep-7f, 0.0f, 0x1.af7f3cp-112f, 0x1.addfb4p-63f, 0.0f, 0.0f,
     0x1.d5d982p-78f, 0x1.40af2cp-64f, 0x1.c36954p-7f, 0.0f, 0x1.c40804p-69f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.13c36ep-122f, 0x1.b8461ep-96f, 0x1.cced96p-94f,
     0x1.d9bd9ap-65f, 0x1.b6e092p-89f, 0.0f, 0x1.26967ep-21f, 0x1.ec5086p-99f, 0.0f,
     0x1.46e4b2p-45f, 0x1.c32498p-27f, 0.0f, 0.0f, 0x1.2013fap-9f, 0x1.4e068p-76f,
     0.0f, 0x1.b0859ap-96f, 0.0f, 0x1.2061eep-16f, 0x1.3b97p-87f, 0x1.ffca1ep-58f,
     0.0f, 0x1.585b7ep-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0b5c16p-14f,
     0x1.c6706p-79f, 0x1.6e732ep-63f, 0x1.775192p-19f, 0.0f, 0x1.117334p-59f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a699cp-107f, 0.0f, 0.0f, 0x1.2ac1d2p-44f, 0.0f, 0.0f, 0.0f,
     0x1.68a6p-77f, 0.0f, 0.0f, 0.0f, 0x1.041a94p-71f, 0.0f, 0x1.59d24p-35f,
     0x1.b65ea6p-115f, 0x1.643a5cp-51f, 0x1.35391ap-55f, 0.0f, 0.0f, 0x1.b983bcp-100f,
     0.0f, 0x1.c6f22ep-21f, 0x1.3cfa64p-19f, 0x1.ef92eep-8f, 0.0f, 0x1.3693d8p-62f,
     0x1.b2ea7p-72f, 0.0f, 0x1.791a5cp-70f, 0x1.b9256ep-93f, 0x1.93a8e2p-118f, 0.0f,
     0x1.33e884p-119f, 0.0f, 0.0f, 0.0f, 0x1.11c2bap-108f, 0x1.01ac1ep-59f, 0.0f,
     0x1.9e066cp-99f, 0x1.a9f6d6p-99f, 0.0f, 0x1.112522p-121f, 0x1.12a102p-13f, 0.0f,
     0.0f, 0x1.d9f388p-122f, 0.0f, 0.0f, 0x1.c3a288p-11f, 0x1.8ffd16p-30f, 0.0f, 0.0f,
     0.0f, 0x1.f2c906p-24f, 0.0f, 0x1.b50642p-12f, 0.0f, 0x1.f00ff6p-27f,
     0x1.91a4acp-8f, 0x1.e2a508p-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f7481p-6f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f61d48p-74f, 0x1.6a1868p-83f, 0x1.3104dcp-43f, 0.0f, 0.0f,
     0x1.602954p-78f, 0.0f, 0x1.f9090ep-71f, 0.0f, 0x1.1560fep-85f, 0x1.6abba6p-59f,
     0x1.e65856p-28f, 0x1.413dc8p-126f, 0x1.41c70ap-43f, 0x1.2c6e4p-68f,
     0x1.140a4ap-56f, 0.0f, 0x1.16584ep-33f, 0x1.ab51e4p-89f, 0x1.4fa45ep-35f, 0.0f,
     0x1.9a4b4p-104f, 0.0f, 0x1.8d9ddap-22f, 0.0f, 0x1.24881cp-126f, 0x1.16f652p-110f,
     0.0f, 0x1.b6b78p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3d0c78p-72f, 0.0f,
     0x1.4b9fccp-101f, 0x1p0f, 0x1.4cfeccp-90f, 0.0f, 0.0f, 0x1.5fce96p-20f, 0.0f,
     0.0f, 0x1.9618aap-3f, 0.0f, 0.0f, 0x1.75f11ap-26f, 0.0f, 0x1.693cdep-109f, 0.0f,
     0x1.34f532p-42f, 0x1.be764p-44f, 0x1.543132p-99f, 0x1.326534p-14f, 0.0f, 0.0f,
     0x1.b6958ep-30f, 0x1.a35e6p-22f, 0x1.9295b6p-32f, 0.0f, 0.0f, 0.0f,
     0x1.4c2d5ep-121f, 0.0f, 0x1.17e526p-78f, 0x1.0e963cp-122f, 0.0f, 0x1.e1ebc8p-65f,
     0.0f, 0x1.d2cf28p-117f, 0.0f, 0x1.c18af4p-47f, 0x1.d8cb92p-107f, 0x1.e47fccp-5f,
     0.0f, 0x1.0b24d4p-58f, 0.0f, 0.0f, 0.0f, 0x1.adf2e8p-44f, 0.0f, 0x1.186ebep-34f,
     0.0f, 0x1.82840ep-70f, 0x1.e30adcp-64f, 0.0f, 0x1.1a8ceep-20f, 0.0f,
     0x1.33bc2ap-9f, 0x1.8b8df4p-94f, 0.0f, 0x1.711f1cp-43f, 0x1.9674p-18f,
     0x1.90b3c8p-70f, 0.0f, 0.0f, 0x1.a3a45p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6d1294p-91f, 0.0f, 0x1.10c952p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.791b66p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c6eb2ap-61f,
     0.0f, 0.0f, 0x1.9c16a4p-123f, 0.0f, 0x1.59b1f6p-119f, 0x1.71a65ep-28f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ecbf4p-21f, 0.0f, 0x1.897c2ep-78f, 0.0f,
     0x1.e25222p-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bd4de8p-114f, 0.0f,
     0x1.117ebep-53f, 0x1.e3589p-59f, 0.0f, 0x1.e79e66p-59f, 0x1.3ebe72p-31f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.87e2bcp-101f, 0x1.9a25f4p-56f, 0.0f,
     0x1.853dccp-125f, 0x1.207f82p-19f, 0x1.3ca0b6p-1f, 0x1.87aaa2p-70f,
     0x1.0fcdfcp-53f, 0.0f, 0x1.22124ep-64f, 0x1.df67fcp-9f, 0.0f, 0x1.8fc78ap-14f,
     0x1.3726c8p-95f, 0x1.a478bap-57f, 0.0f, 0x1.20973ep-42f, 0.0f, 0x1.46073p-62f,
     0x1.246306p-81f, 0.0f, 0x1.7197p-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0fb946p-93f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b88454p-24f, 0.0f, 0.0f, 0.0f, 0x1.5d267ep-50f,
     0x1.4f21bp-10f, 0.0f, 0x1.bf8248p-95f, 0x1.2cf0cp-48f, 0.0f, 0.0f, 0x1p0f, 0.0f,
     0.0f, 0.0f, 0x1.610798p-98f, 0x1.ed8cb4p-93f, 0x1.4937c2p-51f, 0.0f,
     0x1.210422p-114f, 0x1.ac372p-115f, 0.0f, 0x1.e6781ap-70f, 0x1.b4a304p-100f, 0.0f,
     0x1.547a22p-30f, 0.0f, 0x1.f7b3fap-34f, 0x1.11d3e8p-14f, 0x1.62de1p-17f,
     0x1.85895ep-22f, 0.0f, 0.0f, 0x1.abb60cp-26f, 0.0f, 0.0f, 0x1.9c6a5p-35f,
     0x1.3d470ep-45f, 0.0f, 0x1.c67468p-86f, 0x1.c513b6p-67f, 0x1.b1e11ep-24f, 0.0f,
     0.0f, 0.0f, 0x1.443aa4p-30f, 0.0f, 0x1.ebfdd8p-9f, 0.0f, 0x1.79868ep-102f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.98769ep-81f, 0x1.884a24p-80f,
     0x1.50ba06p-50f, 0.0f, 0x1.bdbf6ep-70f, 0.0f, 0x1.163f9ep-7f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a57916p-11f, 0x1.b29176p-29f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d20706p-28f, 0x1.dbab94p-51f, 0.0f, 0x1.890c2cp-18f, 0x1.90bea4p-75f,
     0x1.51407p-123f, 0x1.a880bap-95f, 0.0f, 0x1.3a47ecp-61f, 0.0f, 0x1.4a82a6p-114f,
     0.0f, 0.0f, 0x1.b1acc4p-24f, 0.0f, 0.0f, 0x1.fdc9d4p-86f, 0x1.4aa2c8p-55f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f88fdcp-109f, 0x1.100faap-45f, 0x1.7caf3cp-25f,
     0x1.47e74p-10f, 0.0f, 0x1.9c77d8p-35f, 0.0f, 0x1.c8f5f6p-99f, 0x1.e0a2ecp-125f,
     0.0f, 0x1.1e81e2p-48f, 0x1.6a21c4p-48f, 0.0f, 0.0f, 0.0f, 0x1.13fbbcp-67f, 0.0f,
     0x1.f50b0ap-21f, 0x1.093bbap-100f, 0x1.2fb97cp-90f, 0x1.ccc1bap-69f,
     0x1.2216cep-25f, 0x1.5e164cp-5f, 0.0f, 0x1.3f1312p-10f, 0x1.51336ap-35f, 0.0f,
     0.0f, 0x1.460778p-120f, 0.0f, 0.0f, 0x1.96c6fap-121f, 0x1.01c506p-50f, 0.0f,
     0.0f, 0x1.0efadcp-33f, 0x1.2892b4p-71f, 0x1.7bee36p-41f, 0x1.a6a016p-42f, 0.0f,
     0.0f, 0.0f, 0x1.85ce0cp-85f, 0x1.afe6a8p-31f, 0.0f, 0x1.7ecf1p-85f, 0.0f,
     0x1.56da1ap-11f, 0x1.123d32p-63f, 0x1.f55de2p-108f, 0x1.93c376p-79f, 0.0f, 0.0f,
     0x1.8ba43ep-37f, 0x1.8e0aep-59f, 0.0f, 0x1.ac50bep-30f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.09892ep-24f, 0x1.2b937p-27f, 0x1.05b47cp-119f,
     0x1.1a931ap-34f, 0.0f, 0.0f, 0.0f, 0x1.05e056p-13f, 0x1.e22526p-19f,
     0x1.e039dep-50f, 0.0f, 0x1.6b128ap-86f, 0x1.ec37fap-112f, 0x1.db40ccp-69f,
     0x1.7d327ap-49f, 0x1.3d5902p-69f, 0.0f, 0x1.bab664p-95f, 0x1p0f, 0.0f,
     0x1.db69b2p-91f, 0.0f, 0x1.0dc37ep-31f, 0x1.836d9ep-77f, 0.0f, 0x1.4d0634p-124f,
     0.0f, 0.0f, 0x1.d7bd14p-15f, 0.0f, 0.0f, 0x1.155cf2p-122f, 0.0f, 0.0f, 0.0f,
     0x1.74d46ep-60f, 0.0f, 0x1.8e6038p-98f, 0.0f, 0x1.a480c8p-45f, 0.0f, 0.0f,
     0x1.9a822ep-49f, 0x1.c6954ep-9f, 0.0f, 0.0f, 0.0f, 0x1.9de0e6p-30f, 0.0f,
     0x1.eaebbap-33f, 0.0f, 0x1.220e72p-81f, 0x1.0d5646p-72f, 0x1.0cd7bp-52f, 0.0f,
     0x1.562faep-53f, 0x1.6f7bacp-84f, 0x1.003272p-89f, 0x1.31aefp-90f, 0.0f,
     0x1.0b90f8p-120f, 0x1.2237dep-51f, 0.0f, 0.0f, 0x1.ef45f8p-99f, 0x1.79ff94p-9f,
     0.0f, 0x1.9cb71ep-103f, 0x1.63d796p-54f, 0.0f, 0x1.4b79f8p-79f, 0x1.5f4fc4p-11f,
     0.0f, 0x1.c962cap-56f, 0x1.4ea372p-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.681276p-92f, 0x1.3cec66p-31f, 0x1.4d4448p-100f, 0.0f, 0.0f, 0x1.8ef6aep-89f,
     0.0f, 0x1.05fb8cp-25f, 0.0f, 0x1.c7128ap-105f, 0x1.2f0aaap-125f,
     0x1.bfe08cp-102f, 0x1.d30498p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.256ffp-54f, 0.0f, 0x1.f0076ap-56f, 0x1.cb53f8p-65f, 0x1.22dbfep-28f, 0.0f,
     0x1.abcda2p-101f, 0.0f, 0x1.1db548p-88f, 0.0f, 0.0f, 0.0f, 0x1.dd705cp-41f, 0.0f,
     0.0f, 0x1.c7beb4p-45f, 0.0f, 0x1.fd9942p-5f, 0x1.54254ap-45f, 0.0f, 0.0f,
     0x1.927c5cp-15f, 0x1.d61c2ap-76f, 0.0f, 0.0f, 0.0f, 0x1.54ed38p-49f, 0.0f, 0.0f,
     0x1.37905ep-90f, 0x1.b5555ap-30f, 0.0f, 0x1.f1751ap-88f, 0x1.e55234p-27f,
     0x1.a1686cp-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e88fa6p-55f, 0.0f, 0.0f,
     0x1.1eee3p-93f, 0x1.ee2c44p-25f, 0x1.0fbd5p-68f, 0x1.26e6aep-17f,
     0x1.78f632p-87f, 0x1.a415a4p-17f, 0x1.321c9ap-18f, 0.0f, 0.0f, 0.0f,
     0x1.64a852p-105f, 0x1.0f4988p-63f, 0x1.430b9cp-113f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.16942cp-60f, 0x1.97522cp-57f, 0.0f, 0x1.d0cdb4p-96f, 0.0f, 0x1.bb36ep-54f,
     0x1.64f894p-115f, 0.0f, 0x1.3c3048p-84f, 0x1.3bc6aap-63f, 0.0f, 0x1.95d18p-64f,
     0x1.361418p-98f, 0.0f, 0.0f, 0.0f, 0x1.3c2794p-69f, 0x1.9b167ap-45f, 0.0f,
     0x1.3e16c6p-57f, 0.0f, 0.0f, 0x1.268448p-15f, 0x1.4c33e4p-28f, 0.0f,
     0x1.285028p-46f, 0.0f, 0x1.55f824p-68f, 0.0f, 0x1.e92096p-1f, 0.0f,
     0x1.64986ep-111f, 0x1.b5f85ep-94f, 0x1.6b75b2p-103f, 0x1.9bc158p-124f, 0.0f,
     0x1.b3f3a8p-20f, 0x1.ab05bap-118f, 0x1.fc2ac8p-46f, 0.0f, 0x1.35d83ep-63f,
     0x1.55828ap-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a5c05p-61f, 0x1.d99512p-40f,
     0.0f, 0.0f, 0.0f, 0x1.c38eccp-96f, 0x1.c29ad8p-101f, 0.0f, 0.0f, 0.0f,
     0x1.309164p-41f, 0x1.3eb6b8p-52f, 0.0f, 0x1.87d0bep-22f, 0x1.8f8256p-46f, 0.0f,
     0x1.36f974p-66f, 0.0f, 0x1.74d4eap-98f, 0.0f, 0x1.350278p-54f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.79de64p-89f, 0.0f
};
static const float external_bench_wrapper_input_table_arg1[1008]  = {
     0x1.daf1ep-74f, 0x1.2accc6p-64f, 0.0f, 0x1.be325ap-26f, 0.0f, 0.0f,
     0x1.fed91ep-55f, 0x1.81020ap-93f, 0x1.54c1d4p-23f, 0x1.1114e2p-32f, 0.0f, 0.0f,
     0x1.ee5db6p-38f, 0x1.efa1fcp-80f, 0.0f, 0x1.571bf4p-119f, 0.0f, 0.0f,
     0x1.836856p-82f, 0.0f, 0.0f, 0.0f, 0x1.aa4d6p-91f, 0x1.30b60ep-96f, 0.0f, 0.0f,
     0x1.a2971p-109f, 0.0f, 0x1.53c794p-76f, 0.0f, 0.0f, 0x1.338aap-83f,
     0x1.7fb01ep-74f, 0x1.2122dp-76f, 0.0f, 0.0f, 0.0f, 0x1.39223ap-65f,
     0x1.9f40cp-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b66824p-108f, 0x1.6fb772p-83f, 0.0f,
     0.0f, 0.0f, 0x1.be2d84p-78f, 0x1.a9f52ap-31f, 0.0f, 0x1.aff042p-1f, 0.0f, 0.0f,
     0.0f, 0x1.ebef6cp-119f, 0.0f, 0x1.0f8098p-62f, 0x1.6db6d2p-59f, 0x1.385fe8p-50f,
     0x1.37e67ap-111f, 0x1.5eadccp-9f, 0x1.0231b2p-62f, 0.0f, 0x1.61e654p-23f, 0.0f,
     0.0f, 0x1.3a32eep-36f, 0.0f, 0x1.e465dcp-46f, 0.0f, 0x1.a8b894p-72f,
     0x1.56488p-76f, 0x1.539a8p-48f, 0.0f, 0.0f, 0x1.743e88p-42f, 0x1.ddcbap-123f,
     0.0f, 0x1.6c3e36p-67f, 0.0f, 0.0f, 0x1.bc0c94p-9f, 0x1.1c22eep-33f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e47e0ep-42f, 0x1.86fc4ep-68f, 0x1.d2af58p-92f, 0.0f, 0.0f,
     0x1.805d16p-9f, 0x1.23e6b2p-15f, 0.0f, 0.0f, 0x1.b94b8p-55f, 0x1.5eac6p-92f,
     0x1.5ed194p-45f, 0x1.ab8d3ep-46f, 0.0f, 0x1.14239p-87f, 0.0f, 0.0f, 0.0f,
     0x1.3ba95cp-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.abdc62p-104f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.d75964p-73f, 0x1.33a79ep-116f, 0x1.cf3b9ep-106f, 0x1.8c814ep-16f, 0.0f,
     0.0f, 0x1.ca6202p-114f, 0.0f, 0.0f, 0x1.a4fee8p-15f, 0x1.cacc1p-102f, 0.0f, 0.0f,
     0x1.3d7b22p-76f, 0.0f, 0x1.864ca6p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.414214p-34f, 0.0f, 0x1.e1a95p-105f, 0x1.01470cp-74f, 0x1.2c81a8p-126f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9057aep-69f, 0.0f, 0.0f, 0x1.f14d54p-20f,
     0x1.c8a168p-92f, 0x1.ce8ecep-82f, 0.0f, 0.0f, 0x1.667436p-3f, 0.0f,
     0x1.f12f18p-19f, 0.0f, 0x1.ab5424p-100f, 0.0f, 0x1p0f, 0x1.69079ap-38f, 0.0f,
     0.0f, 0.0f, 0x1.4a3e3ep-90f, 0.0f, 0x1.d82d48p-47f, 0x1.a7054ap-51f,
     0x1.036944p-19f, 0.0f, 0x1.79c7fap-102f, 0.0f, 0x1.6592dap-109f, 0.0f,
     0x1.bda908p-107f, 0.0f, 0.0f, 0x1.a5fabep-126f, 0x1.5a73a8p-67f,
     0x1.f49376p-118f, 0x1.656a04p-48f, 0x1.f5602ep-105f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b2298cp-34f, 0.0f, 0x1.3fdb3p-43f, 0.0f, 0x1.c4237ep-79f, 0.0f,
     0.0f, 0x1.f95e4ep-88f, 0x1.054d76p-62f, 0.0f, 0x1.60994ep-102f, 0.0f,
     0x1.8be852p-38f, 0.0f, 0.0f, 0x1.f443d8p-4f, 0.0f, 0x1.f71744p-77f, 0.0f,
     0x1.a444bep-110f, 0.0f, 0x1.88ec56p-21f, 0x1.135268p-51f, 0x1.9852cep-12f, 0.0f,
     0x1.91f598p-124f, 0x1.524322p-52f, 0.0f, 0.0f, 0x1.da1ff6p-6f, 0x1.66004p-99f,
     0.0f, 0x1.fe1e88p-125f, 0x1.f41dfap-67f, 0.0f, 0.0f, 0x1.814d7ap-70f,
     0x1.1842b8p-48f, 0x1.499078p-116f, 0.0f, 0.0f, 0x1.0600dp-31f, 0x1.6f39b6p-114f,
     0.0f, 0x1.f761fep-105f, 0.0f, 0x1.db9f3p-67f, 0.0f, 0.0f, 0.0f, 0x1.7ed68ap-44f,
     0x1.177cfap-95f, 0x1.dffe96p-22f, 0.0f, 0.0f, 0.0f, 0x1.b7f0cep-38f, 0.0f, 0.0f,
     0x1.68367p-10f, 0.0f, 0x1.978f24p-116f, 0x1.4f035ap-67f, 0x1.4eadcep-57f, 0.0f,
     0x1.219b54p-58f, 0.0f, 0x1.5f494ep-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f52f68p-37f, 0x1.a66ac2p-112f, 0.0f, 0.0f, 0x1.01fb6cp-82f, 0x1.3daf9ap-114f,
     0x1.d6f336p-42f, 0.0f, 0x1.6a6238p-50f, 0x1.6408d4p-57f, 0x1.6d172ap-97f,
     0x1.788638p-46f, 0x1.2880f4p-87f, 0x1.dab68ap-50f, 0.0f, 0x1.bcd0e6p-27f,
     0x1.82412ap-13f, 0x1.a75788p-110f, 0.0f, 0.0f, 0x1.70762ap-51f, 0.0f, 0.0f,
     0x1.4d65d8p-10f, 0x1.9db9e6p-96f, 0.0f, 0x1.ec5272p-22f, 0x1.3f4da8p-124f,
     0x1.6af208p-59f, 0x1.572038p-51f, 0.0f, 0.0f, 0.0f, 0x1.9366dp-125f, 0.0f,
     0x1.df5bb2p-122f, 0.0f, 0x1.e09ea6p-115f, 0x1.7f3528p-92f, 0.0f, 0.0f,
     0x1.952862p-102f, 0.0f, 0x1.cfe944p-120f, 0.0f, 0.0f, 0x1.11e42ap-85f, 0.0f,
     0x1.b2807ap-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.183c7cp-91f, 0.0f, 0.0f,
     0x1.a5c8a2p-117f, 0x1.cbc032p-17f, 0.0f, 0.0f, 0.0f, 0x1.86608ap-9f, 0.0f,
     0x1.01e90ap-123f, 0.0f, 0x1.799d8ap-3f, 0x1.6d5d44p-66f, 0.0f, 0x1.493adep-14f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.5f61bap-109f, 0.0f, 0.0f, 0x1.728ec2p-119f,
     0x1.81fc1cp-106f, 0.0f, 0x1.b6c8dcp-109f, 0x1.42abecp-14f, 0.0f, 0.0f, 0.0f,
     0x1.997212p-69f, 0.0f, 0x1.1fd208p-59f, 0.0f, 0x1.c3e97p-117f, 0.0f,
     0x1.26194p-38f, 0.0f, 0.0f, 0x1.9c6d62p-23f, 0x1.78c7cap-45f, 0x1.e4f91cp-53f,
     0x1.bfc238p-30f, 0x1.989caep-119f, 0.0f, 0x1.c667a8p-41f, 0x1.f4758cp-11f,
     0x1.a9a34ep-77f, 0x1.853adcp-107f, 0.0f, 0.0f, 0x1.ef757cp-126f, 0.0f,
     0x1.cbde86p-35f, 0.0f, 0x1.2b995cp-64f, 0.0f, 0.0f, 0x1.b1a2e4p-48f,
     0x1.625dp-126f, 0.0f, 0.0f, 0x1.f84166p-44f, 0.0f, 0x1.7ea166p-65f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.48ee8p-72f, 0x1.7a9d78p-79f,
     0.0f, 0.0f, 0.0f, 0x1.a777p-58f, 0.0f, 0x1.53e8aep-124f, 0x1.e7cbeep-73f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.def7f2p-15f, 0x1.0dec5cp-107f, 0.0f, 0.0f,
     0x1.797246p-113f, 0.0f, 0x1.f2fb8ep-73f, 0x1.88a75ep-21f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a4534cp-13f, 0x1.b012c8p-53f, 0.0f, 0.0f, 0.0f, 0x1.42bc6cp-30f,
     0x1.88f0e8p-9f, 0x1.3e944cp-126f, 0.0f, 0x1.d7a7cap-31f, 0.0f, 0.0f,
     0x1.7426ecp-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dd1e38p-105f, 0.0f,
     0x1.6b906ep-70f, 0.0f, 0x1.cb8f12p-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ef64a6p-56f, 0.0f, 0.0f, 0.0f, 0x1.697a1ap-14f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.85c0ep-94f, 0x1.884dep-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.18289ap-88f, 0.0f, 0.0f, 0.0f, 0x1.1b79d2p-59f, 0x1.f0b162p-69f,
     0x1.1c5c78p-47f, 0x1.cc3522p-74f, 0.0f, 0x1.f9a9f4p-95f, 0.0f, 0.0f,
     0x1.cfd666p-40f, 0x1.03f6a6p-97f, 0x1.840d74p-10f, 0x1.36427ap-45f,
     0x1.633ba8p-105f, 0.0f, 0x1.b1efd6p-63f, 0.0f, 0x1.ff2a02p-51f, 0x1.a24d44p-37f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4c0c2ap-7f, 0.0f, 0x1.84dabp-111f,
     0x1.b0e19ep-112f, 0.0f, 0.0f, 0x1.bdccaep-76f, 0.0f, 0x1.a098a6p-87f, 0.0f,
     0x1.d243acp-85f, 0.0f, 0.0f, 0.0f, 0x1.1255c6p-24f, 0x1.bc45fep-28f, 0.0f, 0.0f,
     0x1.d40e9ep-65f, 0x1p0f, 0x1.578ce4p-15f, 0.0f, 0x1.0f147cp-49f, 0.0f,
     0x1.3a98b6p-55f, 0x1.d07dfp-41f, 0x1p0f, 0x1.2e1dc6p-69f, 0x1.267ef8p-122f,
     0x1.91d106p-62f, 0x1.76d61ap-60f, 0.0f, 0.0f, 0.0f, 0x1.81c7bcp-56f,
     0x1.1337f6p-12f, 0x1.bb5262p-86f, 0x1.c1289ap-18f, 0.0f, 0.0f, 0x1.08a1aep-24f,
     0.0f, 0.0f, 0x1.3ba6c8p-98f, 0x1.244c9ep-32f, 0x1.090888p-24f, 0x1.e73e54p-25f,
     0.0f, 0.0f, 0x1.920e32p-41f, 0x1.c5da72p-120f, 0x1.2bcf26p-18f, 0x1.4392bap-41f,
     0x1.3e1754p-30f, 0x1.27f594p-43f, 0.0f, 0x1.bc0784p-105f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.949cep-25f, 0.0f, 0x1.f2741p-4f, 0.0f, 0.0f, 0x1.df65c6p-96f,
     0x1.621p-22f, 0x1.c9a5cep-58f, 0x1.386224p-21f, 0x1.bb9adap-72f, 0x1.087bbep-62f,
     0x1.cf89dep-85f, 0.0f, 0.0f, 0x1.7c6d3ap-76f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c85f34p-23f, 0x1.1bbbb4p-103f, 0x1.820912p-4f, 0x1.81ac1cp-104f, 0.0f,
     0x1.daf438p-80f, 0x1.12172ap-14f, 0x1.ee81d2p-32f, 0x1.2f068p-58f, 0.0f, 0.0f,
     0.0f, 0x1.83e694p-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d25a66p-23f, 0.0f,
     0x1.3b7c08p-90f, 0.0f, 0x1.bdf53p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f7eeccp-63f,
     0.0f, 0.0f, 0x1.952a1p-97f, 0x1.5475d6p-72f, 0x1.f46f96p-29f, 0x1.af2116p-124f,
     0x1.6bb91ap-116f, 0.0f, 0.0f, 0x1.aeb9f4p-68f, 0.0f, 0x1.922076p-118f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d4f9aap-30f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.649fc4p-74f, 0x1.368072p-46f, 0.0f,
     0x1.f09ef6p-34f, 0.0f, 0.0f, 0x1.dbb77p-75f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8cfd4cp-104f, 0.0f, 0x1.a3ce9ep-83f, 0x1.8b7566p-71f, 0.0f, 0x1.dae22cp-5f,
     0.0f, 0.0f, 0x1.50511cp-11f, 0x1.1d46ep-98f, 0.0f, 0.0f, 0x1.3aaa3cp-88f,
     0x1.c71836p-111f, 0x1.4c9706p-93f, 0.0f, 0x1.586ec8p-33f, 0x1.cf5a9cp-55f,
     0x1.a7de7ap-87f, 0x1.e7b534p-67f, 0x1.16e6dp-124f, 0.0f, 0.0f, 0x1.84046p-47f,
     0x1.86ef22p-49f, 0x1.cc3244p-72f, 0.0f, 0.0f, 0.0f, 0x1.0835f8p-59f,
     0x1.eaf04p-85f, 0x1.5ba1cep-15f, 0x1.ee453ep-31f, 0x1.7b35dcp-94f,
     0x1.51c834p-99f, 0.0f, 0x1.08cf86p-121f, 0x1.ee9a96p-26f, 0x1.27fcc2p-40f, 0.0f,
     0.0f, 0x1.238abep-85f, 0x1.ee2408p-61f, 0.0f, 0x1.4cc434p-75f, 0x1.18ea84p-19f,
     0.0f, 0.0f, 0x1.3288eep-35f, 0.0f, 0x1.69a2fp-53f, 0.0f, 0.0f, 0.0f,
     0x1.413b74p-21f, 0.0f, 0.0f, 0.0f, 0x1.e60a5ap-71f, 0x1.c3293cp-101f, 0.0f,
     0x1.f99aep-55f, 0.0f, 0x1.f6b5b4p-78f, 0x1.0981c6p-68f, 0.0f, 0x1.b34588p-38f,
     0x1.18d164p-30f, 0x1.d5943cp-9f, 0x1.6b13e4p-111f, 0x1.be3028p-91f,
     0x1.216e6cp-99f, 0.0f, 0.0f, 0x1.6c8016p-120f, 0x1.e81af4p-28f, 0.0f, 0.0f,
     0x1.9413fcp-5f, 0.0f, 0x1.94538ep-97f, 0x1.c61a28p-20f, 0.0f, 0.0f,
     0x1.cbf764p-109f, 0x1.91c22cp-22f, 0x1.28b28ap-32f, 0x1.7e0efp-119f, 0.0f,
     0x1.505484p-51f, 0x1.2e3be4p-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4037e6p-118f,
     0x1.e80f72p-63f, 0.0f, 0x1.73b682p-79f, 0x1.a3a7cep-21f, 0.0f, 0.0f,
     0x1.397ef6p-19f, 0.0f, 0.0f, 0x1.ced36ap-69f, 0.0f, 0x1.52846ep-59f,
     0x1.d838f2p-23f, 0x1.56b8a6p-49f, 0x1.183ea8p-83f, 0.0f, 0x1.6a53ap-16f,
     0x1.118d98p-80f, 0.0f, 0.0f, 0x1.d1aa6ap-59f, 0x1.da4d3cp-58f, 0.0f, 0.0f, 0.0f,
     0x1.1f9d52p-30f, 0x1.96a596p-57f, 0x1.d10cap-33f, 0x1.5f9934p-103f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.609a8p-49f, 0x1.77d04cp-104f, 0.0f, 0x1.c90b3cp-41f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3115dcp-104f, 0.0f, 0x1.e4fe6ep-95f, 0.0f, 0.0f,
     0.0f, 0x1.6efff2p-113f, 0.0f, 0.0f, 0x1.204832p-102f, 0.0f, 0x1.b2fc8cp-43f,
     0.0f, 0x1.d2d25p-124f, 0x1.4bb7fcp-31f, 0.0f, 0x1.6f1a32p-59f, 0.0f,
     0x1.4c3774p-48f, 0.0f, 0.0f, 0.0f, 0x1.7a81cp-121f, 0x1.ff430ap-34f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.708f7cp-122f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.8a5c92p-120f, 0x1.a9c31cp-32f, 0x1.be75d2p-115f, 0.0f, 0.0f, 0.0f,
     0x1.3af4f2p-101f, 0.0f, 0x1.2f0aeap-95f, 0x1.977d58p-35f, 0.0f, 0.0f,
     0x1.b07edp-16f, 0.0f, 0.0f, 0x1.6273p-12f, 0.0f, 0x1.bc8254p-87f,
     0x1.098fccp-106f, 0.0f, 0.0f, 0x1.02fba8p-114f, 0x1.3c81fp-52f, 0.0f,
     0x1.e3a876p-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.08a25cp-91f, 0x1.899bf2p-51f,
     0.0f, 0x1.bcf096p-101f, 0.0f, 0x1.5ee9fap-67f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b115ep-7f, 0x1.431bbap-2f, 0x1.f99a32p-114f, 0.0f, 0.0f, 0x1.aba7aep-76f,
     0.0f, 0x1.039604p-120f, 0x1.841e0ep-25f, 0.0f, 0.0f, 0.0f, 0x1.e51e6cp-115f,
     0.0f, 0.0f, 0.0f, 0x1.8ff638p-121f, 0x1.9bced4p-97f, 0x1.c84b2ep-103f,
     0x1.0875e6p-54f, 0x1.129dfcp-29f, 0.0f, 0x1.44349ap-59f, 0.0f, 0x1.07b86ep-17f,
     0.0f, 0x1.4fb968p-23f, 0x1.4ef216p-55f, 0.0f, 0.0f, 0x1.da5ae6p-72f,
     0x1.91bccep-34f, 0x1.d522f2p-30f, 0.0f, 0x1.e995a4p-113f, 0x1.4300fp-2f, 0.0f,
     0.0f, 0x1.54a542p-77f, 0x1.a1db2cp-102f, 0x1.ed17ccp-98f, 0.0f, 0x1.168294p-49f,
     0.0f, 0.0f, 0x1.680854p-55f, 0.0f, 0x1.e84b74p-74f, 0x1.d40264p-104f, 0.0f,
     0x1.46b92ap-54f, 0.0f, 0x1.a542fap-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1edc76p-86f,
     0x1.9edec6p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ddc404p-90f, 0x1.312c08p-17f, 0.0f,
     0.0f, 0x1.bd6458p-103f, 0x1.5709b4p-62f, 0x1.d889ap-74f, 0x1.51f39ep-108f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.768ac2p-2f, 0.0f, 0.0f, 0.0f, 0x1.92c41ap-44f, 0.0f,
     0.0f, 0x1.01c178p-79f, 0.0f, 0.0f, 0x1.cb7cdep-53f, 0x1.b0cf9p-119f,
     0x1.30ba7ap-19f, 0x1.de6cep-20f, 0x1.db9244p-106f, 0x1.b323b8p-1f,
     0x1.a02156p-16f, 0.0f, 0x1.b9cfe2p-12f, 0.0f, 0x1.1283e4p-76f, 0x1.346724p-33f,
     0x1.85e24p-63f, 0.0f, 0x1.ed042ep-101f, 0x1.45a3fcp-120f, 0x1.2a7d3cp-70f, 0.0f,
     0.0f, 0.0f, 0x1.5e083p-117f, 0x1.3c0484p-102f, 0x1.77cea8p-94f, 0x1.ddd716p-104f,
     0.0f, 0x1.1f84b6p-95f, 0.0f, 0.0f, 0x1.a2c0fap-61f, 0.0f, 0x1.f8723ep-95f,
     0x1.338a3ap-52f, 0x1.3679f2p-103f, 0.0f, 0.0f, 0x1.ac5f7cp-14f, 0.0f,
     0x1.01608p-113f, 0x1.93ad72p-52f, 0.0f, 0.0f, 0x1.0548cap-14f, 0x1.67b01ap-36f,
     0.0f, 0.0f, 0x1.6aeba4p-45f, 0x1.de8344p-2f, 0x1.012268p-12f, 0x1.0f9904p-105f,
     0x1.1627bap-102f, 0x1.6abaeap-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6af58p-5f,
     0x1.3fba3ep-100f, 0x1.c3073cp-7f, 0x1.6e5e3ep-80f, 0.0f, 0x1.16250ep-18f
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
            tmp2 = Sleef_atan2f8_u10kvx(tmp0, tmp1);
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
    printf("Sleef_atan2f8_u10kvx %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_atan2f8_u10kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
