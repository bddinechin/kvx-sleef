/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_fmaxf8_kvx.c --function Sleef_finz_fmaxf8_kvx \
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
     0.0f, 0x1.6fb778p-60f, 0.0f, 0x1.b08b5cp-118f, 0x1.ea2f1p-104f, 0.0f,
     0x1.c62fcap-69f, 0x1.669a84p-60f, 0.0f, 0.0f, 0.0f, 0x1.54c212p-18f, 0.0f,
     0x1.fd2a7ap-118f, 0.0f, 0.0f, 0x1.8f439cp-81f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2d5fb2p-121f, 0x1.6b2948p-120f, 0x1.e0f0c4p-22f, 0.0f, 0.0f, 0x1.86fe32p-58f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.736908p-103f, 0x1.bd7d28p-106f, 0.0f,
     0x1.0935a8p-67f, 0x1.6b255p-17f, 0x1.39e6e6p-126f, 0.0f, 0x1.a0d0e6p-58f,
     0x1.faa7cp-2f, 0.0f, 0.0f, 0x1.682b1p-6f, 0x1.25f236p-111f, 0.0f, 0.0f,
     0x1.8d957p-126f, 0x1.77b8dep-98f, 0.0f, 0.0f, 0x1.5d1622p-42f, 0x1.13ae72p-64f,
     0.0f, 0x1.650d4ep-109f, 0x1.d2f0d6p-2f, 0x1.333edcp-90f, 0.0f, 0.0f,
     0x1.cc764ap-37f, 0.0f, 0.0f, 0x1.03013cp-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ac0ab8p-105f, 0x1.b803bap-110f, 0.0f, 0x1.de7ae2p-89f, 0.0f,
     0x1.c2f762p-107f, 0x1.0065ccp-4f, 0x1.76b76p-58f, 0x1.825c3ep-58f, 0.0f, 0.0f,
     0.0f, 0x1.89dd6ep-64f, 0x1.b9d34ep-71f, 0.0f, 0.0f, 0.0f, 0x1.aeb2c4p-94f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.72602ap-117f, 0.0f, 0x1.2806dep-36f, 0x1.9a71a6p-77f,
     0x1.47a37ep-111f, 0.0f, 0x1.cf33fcp-119f, 0.0f, 0x1.67e01p-70f, 0.0f,
     0x1.0ce624p-103f, 0.0f, 0.0f, 0x1.355ff4p-70f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.48decep-74f, 0x1.dba404p-4f, 0.0f, 0.0f, 0x1.0c727ap-122f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.6cc95ep-116f, 0.0f, 0.0f, 0.0f, 0x1.761c06p-97f, 0x1.e341a6p-126f,
     0.0f, 0x1.5458cp-61f, 0.0f, 0.0f, 0x1.3307a2p-102f, 0x1.182e42p-33f,
     0x1.1176f8p-42f, 0.0f, 0x1.def3a2p-46f, 0x1.4b9ac4p-79f, 0x1.f7f652p-63f,
     0x1.262506p-78f, 0x1.49bfc2p-46f, 0x1.9e0562p-100f, 0x1.86310ap-66f,
     0x1.f9da8ap-92f, 0.0f, 0x1.81a284p-122f, 0x1.b42f22p-53f, 0.0f, 0x1.2e8c14p-24f,
     0x1.dc1fbp-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3b3236p-59f, 0.0f, 0.0f,
     0x1.bc1e18p-113f, 0.0f, 0x1.3038d6p-39f, 0x1.060bd8p-43f, 0x1.59c058p-36f,
     0x1.f3a518p-57f, 0x1.e3de7ep-98f, 0.0f, 0x1.b4845p-22f, 0.0f, 0x1.9ffa7ap-114f,
     0x1.6fdbbep-79f, 0x1.7c2fe6p-40f, 0.0f, 0x1.1ef16ep-64f, 0x1p0f, 0.0f, 0.0f,
     0x1.64c5c6p-87f, 0.0f, 0.0f, 0.0f, 0x1.6580fep-79f, 0x1.7a175cp-20f,
     0x1.9288d4p-11f, 0x1.7e3452p-59f, 0.0f, 0x1.e1d19ep-9f, 0x1.542098p-20f,
     0x1.eda708p-7f, 0.0f, 0.0f, 0x1.cad0bp-82f, 0.0f, 0.0f, 0.0f, 0x1.d8ef54p-122f,
     0.0f, 0x1.a72f0ap-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.52c858p-79f,
     0x1.8990ecp-107f, 0x1.3c8c9ap-90f, 0x1.0c461cp-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.04fb7p-75f, 0x1.7b1d58p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5f906p-23f, 0.0f, 0x1.599c14p-39f, 0x1.a750fcp-96f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.aaba22p-20f, 0x1.ac0768p-114f, 0x1.fee216p-125f, 0.0f,
     0x1.3b5656p-18f, 0x1.f57c9cp-33f, 0.0f, 0x1.69bbf6p-34f, 0.0f, 0x1.fd99fep-83f,
     0.0f, 0x1.f05ceap-24f, 0x1.aa8d08p-60f, 0x1.8df164p-53f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1d1e98p-108f, 0.0f, 0x1.94e27cp-101f, 0x1.25fe6ep-51f, 0x1.459232p-21f,
     0x1.9e51d8p-96f, 0.0f, 0.0f, 0.0f, 0x1.5553d4p-18f, 0.0f, 0.0f, 0x1.08f3eap-59f,
     0x1.5d5f96p-4f, 0x1.6bbf54p-16f, 0x1.88103p-93f, 0.0f, 0.0f, 0x1.0aaba8p-107f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b2105ap-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6d49fcp-12f,
     0x1.7b821ep-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d65fecp-13f, 0x1.3d9f26p-43f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.49cc3p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.53e638p-35f, 0.0f, 0.0f, 0x1.5b5da6p-5f, 0x1.d8318cp-46f, 0.0f,
     0x1.95fa7cp-62f, 0.0f, 0x1.62ebdcp-61f, 0.0f, 0.0f, 0.0f, 0x1.fec772p-29f,
     0x1.b1b4aep-100f, 0.0f, 0.0f, 0x1.25d58ap-112f, 0x1.6a1c14p-49f,
     0x1.5f57d2p-111f, 0.0f, 0.0f, 0x1.c17c38p-21f, 0.0f, 0.0f, 0x1.371948p-8f,
     0x1.96c6ap-115f, 0x1.998264p-108f, 0.0f, 0x1.0bfa16p-9f, 0x1.5e01fcp-40f, 0.0f,
     0x1.dd40d8p-54f, 0.0f, 0.0f, 0.0f, 0x1.82f552p-24f, 0x1.e08018p-88f,
     0x1.de72eep-45f, 0x1.1bcf22p-8f, 0x1.742198p-97f, 0.0f, 0x1.47ef5cp-50f,
     0x1.734da8p-30f, 0x1.38c58ep-88f, 0.0f, 0x1.cd94f8p-97f, 0.0f, 0x1.3d1ddcp-47f,
     0.0f, 0x1.3e8a5ep-122f, 0.0f, 0x1.c25008p-103f, 0x1.94b19cp-125f,
     0x1.de6012p-81f, 0.0f, 0x1.229bccp-93f, 0x1.05e6e4p-29f, 0x1.b6035cp-106f,
     0x1.979378p-46f, 0x1.8d52dep-64f, 0x1.116828p-61f, 0x1.be21e6p-73f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.32d258p-15f, 0.0f, 0x1.46175ep-20f, 0.0f, 0.0f,
     0x1.6f81b4p-119f, 0x1.088a56p-26f, 0.0f, 0.0f, 0x1.9bf096p-16f, 0x1.026b04p-18f,
     0.0f, 0x1.4f27ecp-106f, 0x1.a869e6p-89f, 0x1.2d9e72p-27f, 0x1.ac444ep-122f,
     0x1.60f588p-72f, 0.0f, 0x1.626fe6p-63f, 0.0f, 0x1.3b906cp-87f, 0x1.21f616p-20f,
     0.0f, 0x1.c723e2p-23f, 0x1.5cf0d6p-91f, 0.0f, 0.0f, 0x1.7f3f5ap-122f,
     0x1.54307cp-5f, 0.0f, 0.0f, 0x1.0f7d36p-64f, 0x1.7e6efep-75f, 0.0f, 0.0f,
     0x1.0b529cp-7f, 0x1.2aee3ap-78f, 0x1.7ab18ap-24f, 0x1.e339bep-15f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b1cd28p-91f, 0x1.f7599ep-113f, 0x1.6935ep-98f,
     0x1.c62c4p-65f, 0.0f, 0x1.abe116p-77f, 0x1.9b0ddep-108f, 0x1.ee0b54p-28f,
     0x1.86ede6p-110f, 0x1.1513b8p-102f, 0.0f, 0x1.2de002p-23f, 0x1.a8941p-51f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.63305ap-107f, 0.0f, 0x1.c7015ap-117f, 0.0f, 0.0f, 0.0f,
     0x1.e80ca6p-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.775a38p-59f, 0.0f, 0.0f,
     0x1.f2f226p-49f, 0x1.a66d6p-69f, 0x1.5c6b5p-5f, 0.0f, 0.0f, 0x1.2e369ep-85f,
     0x1.704f2ep-5f, 0x1.2d8f2p-4f, 0x1.8f48fcp-103f, 0.0f, 0.0f, 0x1.7e50b4p-70f,
     0.0f, 0.0f, 0x1.8a57d8p-107f, 0x1.afdba6p-50f, 0x1.7ef97ap-104f, 0.0f,
     0x1.e1b75ap-81f, 0x1.a7ca8ep-40f, 0x1.c6e42ep-60f, 0.0f, 0.0f, 0.0f,
     0x1.8e91a2p-80f, 0x1.b929ep-76f, 0.0f, 0.0f, 0x1.5cb698p-27f, 0.0f, 0.0f,
     0x1.d52b52p-2f, 0.0f, 0x1.3525eap-58f, 0x1.a2a596p-120f, 0.0f, 0x1.12773ep-118f,
     0.0f, 0x1.072038p-16f, 0x1.306ce4p-85f, 0.0f, 0x1.1f64bp-104f, 0.0f, 0.0f,
     0x1.4e898p-22f, 0x1.666276p-20f, 0.0f, 0x1.90415p-15f, 0.0f, 0x1.55d24cp-1f,
     0x1.fda32ep-17f, 0x1.6e6508p-88f, 0.0f, 0x1.e856cp-6f, 0x1.f0dde8p-67f,
     0x1.9d718ap-123f, 0x1.4d0b8p-65f, 0x1.18c664p-61f, 0x1.b16576p-88f, 0.0f,
     0x1.aac4dp-107f, 0.0f, 0.0f, 0x1.2bb36p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.12dd38p-15f, 0.0f, 0.0f, 0.0f, 0x1.aea36p-82f, 0.0f, 0x1.5667ecp-93f, 0.0f,
     0x1.e437f6p-61f, 0.0f, 0x1.478e1ap-118f, 0x1.694beap-95f, 0.0f, 0.0f,
     0x1.4536c6p-74f, 0.0f, 0.0f, 0x1.c0c114p-53f, 0x1.1c20dap-85f, 0x1.5fa7bp-116f,
     0.0f, 0x1.76fd26p-1f, 0.0f, 0x1.e35e38p-117f, 0.0f, 0x1.1d7c2p-76f,
     0x1.cae186p-56f, 0.0f, 0x1.3dd6f8p-86f, 0x1.51755ep-15f, 0x1.ef77a8p-124f,
     0x1.eecaccp-50f, 0x1.955166p-34f, 0.0f, 0x1.9b81bap-92f, 0x1.b89fd2p-120f, 0.0f,
     0.0f, 0.0f, 0x1.3cb304p-29f, 0x1.1a08fcp-85f, 0.0f, 0x1.afffdep-112f,
     0x1.e4d254p-107f, 0x1.af2edap-124f, 0x1.0b2ffep-26f, 0.0f, 0x1.4f69dcp-64f, 0.0f,
     0.0f, 0x1.d4d43ap-75f, 0x1.78ee3ap-83f, 0.0f, 0.0f, 0x1.9af09ap-86f, 0.0f,
     0x1.2017c8p-66f, 0x1.2edc16p-92f, 0x1.5e2f52p-35f, 0x1.85bdcep-98f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.8aec68p-80f, 0x1.45b306p-33f, 0.0f, 0.0f, 0x1.c2f27cp-30f, 0.0f,
     0x1.69809cp-49f, 0.0f, 0x1.56d37ap-105f, 0.0f, 0.0f, 0x1.00ddd6p-63f,
     0x1.0462a4p-53f, 0x1.6a0858p-116f, 0x1.d067d8p-74f, 0x1.e5201ap-93f, 0.0f, 0.0f,
     0x1.d3b0a4p-57f, 0x1.418ce6p-92f, 0.0f, 0x1.e3b93ep-86f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5e16c2p-63f, 0x1.fc7338p-26f, 0.0f, 0x1.53ef0ap-102f, 0.0f, 0.0f,
     0x1.d0fd74p-111f, 0x1.1b8f22p-12f, 0.0f, 0.0f, 0x1.3a11d8p-116f, 0.0f,
     0x1.0e0f28p-7f, 0x1.6539e4p-42f, 0.0f, 0.0f, 0.0f, 0x1.05d65ap-37f, 0.0f,
     0x1.72173ap-115f, 0x1.b695ep-46f, 0.0f, 0x1.c081eep-15f, 0.0f, 0.0f,
     0x1.9c039ep-27f, 0x1.c16124p-72f, 0x1.bbe1cp-3f, 0.0f, 0.0f, 0x1.76dc0ap-27f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ecda68p-95f, 0x1.1ec51ep-7f, 0x1.0eaaf8p-84f, 0.0f,
     0.0f, 0.0f, 0x1.9712e8p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1cccd4p-74f,
     0.0f, 0.0f, 0x1.5666e6p-94f, 0.0f, 0x1.290e0cp-98f, 0x1.61064ap-5f,
     0x1.a98cbep-25f, 0.0f, 0x1.aa4584p-10f, 0.0f, 0.0f, 0x1.fe55bap-13f,
     0x1.f706fcp-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cc0fc2p-59f, 0x1.7217e2p-37f, 0.0f,
     0x1.c01e2cp-83f, 0.0f, 0x1.f8271ep-45f, 0x1.09d67cp-113f, 0.0f, 0.0f, 0.0f,
     0x1.043106p-41f, 0x1.9d9b66p-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.860fdap-57f, 0.0f, 0x1.bcb89cp-126f, 0x1.9ec326p-73f, 0.0f, 0.0f, 0.0f,
     0x1.50a22p-76f, 0.0f, 0x1.2f975cp-53f, 0x1.fe93ccp-94f, 0x1.2a5008p-34f, 0.0f,
     0x1.579278p-68f, 0.0f, 0x1.3fc352p-19f, 0.0f, 0x1.6668cp-39f, 0x1.f1cf2ep-66f,
     0.0f, 0x1.9b2e6ep-17f, 0x1.0a3b68p-8f, 0.0f, 0.0f, 0x1.774874p-51f,
     0x1.c1e544p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a054a6p-46f, 0x1.f90e94p-88f,
     0.0f, 0x1.5ce56p-29f, 0x1.431cf2p-21f, 0.0f, 0x1.82d9fap-112f, 0.0f, 0.0f, 0.0f,
     0x1.09610ep-51f, 0.0f, 0x1.7c49dcp-91f, 0.0f, 0x1.ff48e6p-92f, 0x1.890f26p-78f,
     0x1.b0bafap-26f, 0.0f, 0x1.e2beb6p-13f, 0x1.26e6aap-29f, 0x1.423a12p-99f, 0.0f,
     0x1.72b3cap-53f, 0.0f, 0x1.0007dep-17f, 0.0f, 0.0f, 0x1.fe6aa4p-83f, 0.0f,
     0x1.9c62c2p-82f, 0.0f, 0.0f, 0x1.a30aeap-63f, 0x1.8d5776p-57f, 0.0f,
     0x1.bbb7cep-21f, 0x1.d7544p-99f, 0.0f, 0x1.670d32p-125f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.940eap-6f, 0x1.b2627p-122f, 0x1.56405cp-51f, 0x1.27e502p-43f,
     0x1.d4e4eap-19f, 0x1.633246p-19f, 0x1.cecdb8p-62f, 0x1.f9b0a4p-119f, 0.0f, 0.0f,
     0x1.25bc34p-105f, 0.0f, 0x1.65bc2ep-82f, 0.0f, 0x1.90cbb6p-113f, 0.0f, 0.0f,
     0x1.388ddap-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9c59fap-20f,
     0x1.1314fap-42f, 0x1.72632ap-24f, 0x1.b9294ap-39f, 0.0f, 0x1.6e692ap-61f,
     0x1.bac4dp-13f, 0x1.3377c4p-104f, 0.0f, 0x1.320356p-67f, 0x1.2ce22ep-74f, 0.0f,
     0x1.ca0bf8p-45f, 0.0f, 0.0f, 0.0f, 0x1.051ddp-52f, 0x1p0f, 0x1.987d62p-68f, 0.0f,
     0.0f, 0.0f, 0x1.e3f6d4p-106f, 0.0f, 0x1.30771ap-65f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.401c88p-51f, 0x1.1811dp-116f, 0x1.fcd85ap-85f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.57094cp-6f, 0x1.61ec32p-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4ed338p-66f, 0.0f,
     0.0f, 0x1.21c282p-20f, 0.0f, 0.0f, 0x1.ea6ep-5f, 0.0f, 0.0f, 0x1.cbcffp-81f,
     0x1.6ead26p-122f, 0.0f, 0.0f, 0x1.6f8d26p-90f, 0.0f, 0.0f, 0x1.e07d66p-49f,
     0x1.c34012p-98f, 0.0f, 0x1.ec1c76p-18f, 0.0f, 0.0f, 0x1.b61534p-40f, 0.0f,
     0x1.78bb4cp-28f, 0x1.cb092cp-21f, 0.0f, 0x1.c416cep-67f, 0.0f, 0x1.533ebcp-69f,
     0x1.b36a5p-68f, 0x1.1b26c6p-9f, 0x1.5fba16p-16f, 0x1.59a038p-36f,
     0x1.e2f944p-125f, 0.0f, 0x1.fb408p-30f, 0x1.2f3224p-115f, 0x1.b499b6p-60f, 0.0f,
     0x1.bf6c68p-24f, 0x1.c67bf6p-51f, 0.0f, 0x1.8085e6p-50f, 0x1.5ac1bap-106f, 0.0f,
     0.0f, 0.0f, 0x1.74485ep-101f, 0x1.e0d4cp-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.82662p-116f, 0.0f, 0x1.a7ac5ap-39f, 0.0f, 0.0f, 0x1.d8575ep-14f, 0.0f,
     0.0f, 0x1.059c1ep-4f, 0.0f, 0x1.5f68e6p-79f, 0x1.b14192p-74f, 0x1.1c5156p-116f,
     0.0f, 0x1.67132p-5f, 0.0f, 0x1.bd3224p-122f, 0x1.884ef8p-30f, 0.0f,
     0x1.0c8ca6p-4f, 0.0f, 0x1.ae91fcp-106f, 0.0f, 0x1.78cefep-83f, 0.0f,
     0x1.2f20eep-72f, 0x1.e0291cp-56f, 0.0f, 0x1.d9b3ccp-30f, 0.0f, 0x1.bbeff2p-79f,
     0x1.07d904p-107f, 0x1.5229aep-118f, 0x1.929132p-5f, 0.0f, 0x1.393b2ep-122f, 0.0f,
     0.0f, 0x1.75b0a4p-92f, 0x1.c207c2p-72f, 0x1.11c694p-125f, 0x1.e43c8ap-47f,
     0x1.3cacep-103f, 0x1.f1a04ap-126f, 0.0f, 0x1.cdb842p-106f, 0x1.aab354p-48f,
     0x1.54495ep-90f, 0x1.a11f28p-26f, 0x1.1c66acp-85f, 0.0f, 0x1.244b2p-41f,
     0x1.7d633p-122f, 0.0f, 0.0f, 0.0f, 0x1.b68a9ep-106f, 0x1.19b884p-62f, 0.0f,
     0x1.13009ep-13f, 0.0f, 0x1.d33c3ep-56f, 0x1.895ac6p-13f, 0x1.da8768p-70f,
     0x1.96b1e6p-3f, 0.0f, 0x1.c844eep-116f, 0.0f, 0.0f, 0.0f, 0x1.c1275ap-9f,
     0x1.ffd3p-8f, 0.0f, 0.0f, 0x1.110642p-72f, 0.0f, 0.0f, 0x1.f92816p-5f,
     0x1.8d298ep-84f, 0x1.400e14p-56f, 0x1.b36d74p-91f, 0.0f, 0x1.d0c0dcp-22f, 0.0f,
     0.0f, 0x1.24e726p-50f, 0.0f, 0x1.77068ep-44f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.96ad06p-32f, 0.0f, 0.0f, 0x1.8028d8p-53f, 0x1.950e12p-56f, 0x1.6d902p-95f,
     0.0f, 0x1.4f63ap-119f, 0x1.0e3ef8p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ab430cp-89f, 0.0f, 0.0f, 0x1.fe363ap-114f, 0.0f, 0x1.f32292p-39f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.84aae2p-77f, 0.0f, 0x1.8b328ep-3f, 0x1.b740b2p-117f,
     0x1.b177ap-104f, 0.0f, 0x1.be7e44p-5f, 0.0f, 0x1.eccd06p-62f, 0x1.093344p-115f,
     0x1.6def54p-46f, 0.0f, 0.0f
};
static const float external_bench_wrapper_input_table_arg1[1008]  = {
     0x1.2904fap-60f, 0.0f, 0.0f, 0x1.145b7p-63f, 0x1.8699c6p-38f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b9c0ccp-103f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c65348p-6f, 0x1.770ae8p-65f, 0x1.35553ap-19f, 0.0f, 0x1.eeb678p-28f,
     0x1.981024p-119f, 0.0f, 0.0f, 0x1.3e54dap-21f, 0x1.778ed6p-38f, 0x1.778004p-36f,
     0x1.147646p-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b82202p-53f, 0.0f, 0.0f, 0x1p0f,
     0x1.f6627ap-15f, 0x1.5d72b8p-47f, 0.0f, 0.0f, 0x1.b9fc1ep-47f, 0.0f, 0.0f,
     0x1.5ce13ep-106f, 0.0f, 0x1.a5175ep-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.76b19ep-54f, 0.0f, 0.0f, 0x1.e048bep-39f, 0x1.f199e6p-61f, 0.0f,
     0x1.d5ecc8p-99f, 0x1.ce53eap-116f, 0x1.d755c6p-35f, 0x1.b71d48p-105f, 0.0f,
     0x1.41aa06p-107f, 0x1.79253ep-76f, 0x1.802deap-78f, 0.0f, 0.0f, 0x1.351bfep-81f,
     0x1.41512ep-124f, 0.0f, 0x1.a6b61cp-85f, 0.0f, 0x1.7472cep-92f, 0.0f, 0.0f, 0.0f,
     0x1.c701bcp-28f, 0x1.467d5ap-82f, 0x1.7c64c6p-57f, 0x1.90ee5ap-120f, 0.0f,
     0x1.ebb36cp-67f, 0x1.585832p-122f, 0.0f, 0x1.9df9acp-123f, 0x1.be9836p-29f,
     0x1.decf3ap-115f, 0x1.a08c14p-99f, 0.0f, 0.0f, 0x1.c21576p-110f, 0x1.095eep-8f,
     0.0f, 0.0f, 0x1.639cf6p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dfaa9p-85f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.3e14a8p-126f, 0.0f, 0x1.b8538p-72f, 0x1.c00224p-31f, 0.0f,
     0x1.00c56cp-96f, 0.0f, 0x1.2f6f76p-1f, 0x1.0324ep-111f, 0.0f, 0x1.ac1f52p-31f,
     0.0f, 0x1.a1819ap-10f, 0.0f, 0x1.687a72p-88f, 0x1.c598fap-126f, 0x1.ad179p-23f,
     0.0f, 0.0f, 0x1.beb4bep-58f, 0x1.e80d5cp-55f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a7ee32p-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e507e8p-12f, 0x1.95479ap-85f,
     0x1.972c9ap-35f, 0x1.47fb72p-100f, 0x1.c0392cp-26f, 0x1.39ee28p-23f, 0.0f,
     0x1.d9e2fep-46f, 0.0f, 0.0f, 0x1.57a5dap-51f, 0x1.a44edp-93f, 0x1.2d41b6p-22f,
     0.0f, 0x1.163cfep-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.52139p-57f, 0x1.183afap-13f,
     0.0f, 0x1.04c1p-56f, 0.0f, 0.0f, 0x1.c13328p-76f, 0x1.d958d8p-102f,
     0x1.0872ccp-123f, 0.0f, 0x1.4d4a56p-31f, 0x1.695886p-69f, 0x1.f936eap-6f, 0.0f,
     0x1.35c9ecp-55f, 0x1.8154acp-86f, 0.0f, 0.0f, 0x1.db8bc6p-45f, 0.0f, 0.0f, 0.0f,
     0x1.2d068p-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.2a17c4p-31f,
     0x1.adac84p-109f, 0x1.651268p-8f, 0.0f, 0x1.f1343cp-37f, 0x1.d8c4b2p-10f,
     0x1.d57044p-62f, 0x1p0f, 0x1.d6b046p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e217c4p-51f,
     0x1.47c8f6p-85f, 0.0f, 0x1.42d5e6p-45f, 0x1.8820c6p-38f, 0.0f, 0.0f, 0.0f,
     0x1.6c2b92p-63f, 0x1.031a54p-73f, 0x1.51e296p-25f, 0x1.20dec6p-90f,
     0x1.665eeap-105f, 0.0f, 0x1.11037ap-55f, 0.0f, 0x1.28c88p-74f, 0x1.f94732p-13f,
     0x1.ee8e5cp-4f, 0x1.c0e7b6p-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1c59e8p-26f, 0x1.d8c272p-82f, 0.0f, 0.0f, 0.0f, 0x1.de80b6p-53f,
     0.0f, 0.0f, 0x1.296068p-26f, 0x1.e5b0d2p-61f, 0.0f, 0x1.c8ae9ep-44f,
     0x1.f20ff6p-121f, 0.0f, 0.0f, 0x1.7c06a2p-40f, 0x1.8db164p-51f, 0.0f, 0.0f, 0.0f,
     0x1.b407d6p-83f, 0.0f, 0.0f, 0x1.e257p-111f, 0.0f, 0x1.9a8828p-67f,
     0x1.fda62p-101f, 0.0f, 0.0f, 0.0f, 0x1.cc463ap-77f, 0x1.8e3a7ap-18f,
     0x1.350b22p-118f, 0x1.0620eep-47f, 0x1.7445c2p-50f, 0x1.db47c2p-8f,
     0x1.17478ep-16f, 0x1.a6cbfcp-45f, 0.0f, 0x1.8b3fd8p-41f, 0x1.2c6c66p-2f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.6447aap-39f, 0x1.a7258ap-62f, 0x1.a19a64p-117f, 0.0f, 0.0f,
     0x1.9d4c12p-102f, 0.0f, 0x1.3e6fc8p-38f, 0.0f, 0x1.e44d26p-104f,
     0x1.83e95cp-102f, 0.0f, 0x1.cbd068p-58f, 0.0f, 0x1.02a192p-29f, 0x1.005626p-64f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.185282p-49f, 0x1.8818fep-67f, 0.0f, 0.0f,
     0x1.688facp-86f, 0.0f, 0.0f, 0x1.5d7c7p-20f, 0x1.270328p-93f, 0x1.25804p-45f,
     0x1.4454cp-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.86c962p-88f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.45c79ap-90f, 0x1.474aa4p-14f, 0.0f, 0x1.9e9d74p-101f, 0x1.f2ef1p-9f,
     0.0f, 0.0f, 0x1.0a4c9p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c72e6ep-36f, 0.0f,
     0.0f, 0x1.dbe82ep-66f, 0x1.771932p-23f, 0.0f, 0.0f, 0x1.980354p-105f, 0.0f,
     0x1.c808b2p-40f, 0x1.07295ep-80f, 0x1.6443a2p-21f, 0.0f, 0.0f, 0x1.2afcb6p-45f,
     0.0f, 0.0f, 0x1.35846cp-71f, 0x1.e3b2dcp-19f, 0.0f, 0x1.80b7aap-73f,
     0x1.8c5e0cp-112f, 0x1.99b312p-87f, 0x1.a0dbb2p-22f, 0.0f, 0x1.8a109ep-40f,
     0x1.5a97fcp-44f, 0x1.3f1d3cp-94f, 0.0f, 0x1.b0df5p-109f, 0x1.24423ap-114f,
     0x1.9792b2p-91f, 0.0f, 0x1.26d8a2p-126f, 0x1.80a70ep-27f, 0.0f, 0.0f,
     0x1.c1934p-118f, 0.0f, 0x1.05c286p-83f, 0.0f, 0x1.2a42e4p-105f, 0x1.32b4f6p-97f,
     0.0f, 0x1.b8087p-62f, 0x1.ef63b2p-60f, 0.0f, 0.0f, 0x1.17b5d2p-43f,
     0x1.bb299p-46f, 0.0f, 0.0f, 0.0f, 0x1.0effa4p-85f, 0x1.7d4ee6p-81f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.9d9ba8p-70f, 0.0f, 0.0f, 0.0f, 0x1.a5107p-67f, 0x1.e04c34p-24f,
     0.0f, 0.0f, 0x1.6d6196p-15f, 0x1.1075d6p-26f, 0x1.9fc1b8p-84f, 0x1.02b3bp-110f,
     0.0f, 0.0f, 0x1.3be64p-31f, 0.0f, 0x1.32700ep-84f, 0x1.f27096p-63f,
     0x1.83b058p-94f, 0x1.c79d9p-3f, 0.0f, 0x1.31de1cp-52f, 0.0f, 0.0f,
     0x1.4a571p-77f, 0.0f, 0.0f, 0x1.ed4e34p-94f, 0.0f, 0x1.485422p-125f,
     0x1.1b5d82p-62f, 0.0f, 0x1.4e3beep-123f, 0.0f, 0.0f, 0.0f, 0x1.5be42ep-39f,
     0x1.d633f2p-34f, 0x1.d04f64p-24f, 0x1.3b4d3p-89f, 0.0f, 0.0f, 0x1.7ed3fep-3f,
     0x1.ec90dep-30f, 0x1.0831f8p-56f, 0.0f, 0.0f, 0x1.8d146ep-103f, 0x1.fed4d6p-109f,
     0x1.fff7aep-77f, 0.0f, 0x1.27d03p-35f, 0.0f, 0x1.ccc1ccp-94f, 0.0f, 0.0f,
     0x1.611d4p-25f, 0.0f, 0.0f, 0x1.eb737ap-33f, 0.0f, 0x1.ce7088p-100f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b83eap-2f, 0.0f, 0.0f, 0x1.10229p-56f, 0.0f, 0x1.12b7d8p-74f,
     0x1.a32c32p-80f, 0.0f, 0.0f, 0.0f, 0x1.1975cap-125f, 0x1.7a0282p-53f, 0.0f,
     0x1.a7ff5p-70f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.b8eb2p-52f, 0x1.ce21f8p-122f,
     0x1.a42c94p-38f, 0x1.7cd9a8p-100f, 0x1.2f3f72p-32f, 0.0f, 0.0f, 0x1.f3731p-63f,
     0x1.2ca672p-43f, 0.0f, 0.0f, 0x1.b86c1ep-17f, 0x1.bf1f66p-104f, 0x1.1dd284p-86f,
     0x1.72174ap-108f, 0x1.5959e4p-89f, 0x1.aa812p-94f, 0x1.7276cap-11f,
     0x1.424adep-122f, 0.0f, 0x1.5ecbdap-115f, 0.0f, 0x1.a81afcp-21f, 0x1.095442p-96f,
     0.0f, 0x1.c9713p-81f, 0.0f, 0.0f, 0.0f, 0x1.09b0eep-93f, 0x1.e50362p-77f, 0.0f,
     0x1.edaf16p-1f, 0x1.e3a576p-102f, 0x1.6faffp-96f, 0x1.c27e7ep-21f,
     0x1.571f94p-48f, 0x1.c157dp-33f, 0.0f, 0x1.5cd596p-57f, 0x1.b732bp-32f,
     0x1.876e14p-8f, 0.0f, 0x1.fd5998p-56f, 0x1.c3c1d2p-120f, 0x1.60e0bcp-119f,
     0x1.09d59ap-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1eaa52p-32f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.22a6ap-11f, 0x1.707384p-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.746206p-8f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f3e6bep-106f, 0x1.c6a24ap-15f, 0.0f, 0.0f,
     0x1.06a9cep-96f, 0x1.b41a94p-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ca5fdep-27f, 0.0f,
     0.0f, 0.0f, 0x1.baac54p-28f, 0.0f, 0.0f, 0x1.11a7ccp-13f, 0x1.4be932p-57f,
     0x1.315c9p-120f, 0x1.6f656ep-119f, 0.0f, 0.0f, 0.0f, 0x1.894d8ap-15f, 0.0f,
     0x1.80c4e4p-61f, 0.0f, 0x1.63323cp-30f, 0x1.12fd0ep-17f, 0.0f, 0.0f,
     0x1.7aacccp-57f, 0x1.2bd4b2p-126f, 0.0f, 0.0f, 0.0f, 0x1.11ccb6p-96f,
     0x1.f23a84p-116f, 0x1.c07672p-76f, 0x1.0f34a8p-22f, 0x1.28db0cp-2f, 0.0f,
     0x1.3cc0cp-24f, 0x1.89dfb2p-3f, 0x1.294478p-121f, 0.0f, 0x1.fbdc08p-36f, 0.0f,
     0x1.f19162p-30f, 0x1.970a28p-4f, 0x1.acf80cp-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.18649cp-126f, 0.0f, 0.0f, 0.0f, 0x1.4f4a58p-11f, 0.0f, 0x1.9c69d2p-125f,
     0x1.0cfa36p-83f, 0x1.a0d1e4p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2424acp-103f, 0.0f, 0.0f, 0.0f, 0x1.4b55e6p-22f, 0.0f, 0.0f, 0.0f,
     0x1.a13cc6p-20f, 0.0f, 0.0f, 0x1.916a6ap-85f, 0x1.aa9788p-25f, 0.0f,
     0x1.e208e2p-101f, 0x1.680f6ep-5f, 0x1.df5fe4p-29f, 0x1.4df426p-97f,
     0x1.e01f4p-91f, 0x1.bb392ep-94f, 0x1.b8787cp-49f, 0.0f, 0x1.7348a8p-91f, 0.0f,
     0x1.d73e12p-29f, 0x1.61ee2p-36f, 0.0f, 0x1.669018p-17f, 0.0f, 0x1.72db4ap-66f,
     0x1.6935aep-21f, 0x1.b9688p-14f, 0x1.443a0ap-50f, 0.0f, 0.0f, 0.0f,
     0x1.a68e86p-111f, 0.0f, 0.0f, 0x1.cc00b8p-94f, 0.0f, 0.0f, 0x1.2db154p-32f,
     0x1.6f377ep-33f, 0x1.e84f38p-66f, 0x1.24bc5ap-88f, 0x1.d9ec46p-98f,
     0x1.eedb7p-23f, 0.0f, 0.0f, 0.0f, 0x1.0f28e2p-68f, 0x1.72cb68p-74f,
     0x1.eeb0eep-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.16912cp-125f,
     0x1.f81256p-113f, 0.0f, 0x1.ef07e6p-9f, 0x1.d30e24p-121f, 0.0f, 0x1.ec5d5ep-114f,
     0.0f, 0.0f, 0.0f, 0x1.eb318ap-12f, 0x1.f15e88p-76f, 0x1.15bac4p-66f,
     0x1.f5af1cp-24f, 0x1.83ec44p-97f, 0x1.5d4bb6p-33f, 0.0f, 0x1.f34194p-34f,
     0x1.c33918p-76f, 0.0f, 0.0f, 0.0f, 0x1.50e1e4p-61f, 0x1.58c266p-64f, 0.0f, 0.0f,
     0x1.a3342ap-85f, 0x1.51d868p-66f, 0.0f, 0.0f, 0x1.c65a66p-48f, 0x1.7ef57cp-43f,
     0x1.c09024p-76f, 0x1.cbe938p-59f, 0.0f, 0x1.9ce542p-1f, 0.0f, 0.0f, 0.0f,
     0x1.ed4034p-125f, 0.0f, 0x1.cdd68ap-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f0f83ap-47f, 0x1.2d884p-44f, 0x1.bef02cp-18f, 0.0f, 0.0f, 0x1.e7ed1ap-37f,
     0x1.3507p-61f, 0x1.ec4986p-52f, 0x1.257354p-24f, 0x1.c5a05ap-15f,
     0x1.a9b73cp-12f, 0x1.72a786p-20f, 0x1.319822p-35f, 0x1.a691acp-21f, 0.0f,
     0x1.ab790cp-116f, 0x1.03de5ep-91f, 0x1.569ab6p-4f, 0.0f, 0x1.da7698p-34f,
     0x1.376b0ap-52f, 0x1.494ae8p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1710dcp-79f,
     0x1.8fb7b8p-96f, 0.0f, 0x1.561bb8p-96f, 0.0f, 0.0f, 0x1.d63fa8p-83f,
     0x1.c04e06p-65f, 0x1.4c15acp-123f, 0.0f, 0x1.d9845ep-114f, 0x1.f60a9cp-119f,
     0x1.af3c84p-47f, 0x1.ccc1f4p-38f, 0x1.355764p-3f, 0.0f, 0x1.6730a6p-37f,
     0x1.fe4af6p-72f, 0.0f, 0.0f, 0x1.e609eap-66f, 0x1.97aebap-110f, 0x1.fa77f8p-113f,
     0x1.392f48p-20f, 0.0f, 0.0f, 0x1.e20cbep-101f, 0x1.71af4cp-9f, 0.0f, 0.0f,
     0x1.66a4dcp-46f, 0.0f, 0x1.311f9ep-26f, 0.0f, 0.0f, 0x1.7cbbbp-100f, 0.0f,
     0x1.98c612p-30f, 0.0f, 0x1.5cc2a2p-100f, 0.0f, 0.0f, 0x1.acbd62p-110f,
     0x1.f5c2a4p-125f, 0x1.3ff9bep-79f, 0x1.82b61ap-10f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7efbf4p-122f, 0.0f, 0x1.b46222p-95f, 0x1.02e448p-67f, 0x1.0db1d8p-35f,
     0x1.72f662p-18f, 0.0f, 0x1.9432a2p-80f, 0x1.476892p-104f, 0.0f, 0x1.496e88p-92f,
     0x1.28a284p-121f, 0x1.3723dcp-9f, 0.0f, 0.0f, 0.0f, 0x1.536548p-6f, 0.0f, 0.0f,
     0x1.0297bcp-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.89666p-92f, 0x1.ed7324p-119f, 0.0f,
     0x1.69ccd8p-65f, 0x1.35329ap-117f, 0.0f, 0.0f, 0.0f, 0x1.c9e39ap-6f, 0.0f, 0.0f,
     0x1.c606f4p-123f, 0.0f, 0x1.974418p-56f, 0x1.3f7062p-76f, 0.0f, 0.0f,
     0x1.5678e6p-76f, 0.0f, 0x1.481c2ap-47f, 0.0f, 0x1.29dc08p-71f, 0.0f,
     0x1.4a3e32p-12f, 0x1.a03a5ep-46f, 0x1.7128cep-39f, 0.0f, 0.0f, 0x1.ba9704p-109f,
     0x1.fea716p-116f, 0.0f, 0x1.fd6134p-23f, 0.0f, 0.0f, 0x1.9d4396p-118f,
     0x1.eab412p-81f, 0x1.b23024p-67f, 0.0f, 0.0f, 0x1.7f9f36p-2f, 0x1.63821p-88f,
     0x1.4bf7dap-94f, 0.0f, 0x1.c8f79ap-36f, 0.0f, 0.0f, 0x1.4c9f4cp-121f, 0.0f, 0.0f,
     0.0f, 0x1.e28928p-120f, 0.0f, 0x1.e19e9ap-38f, 0x1.376d44p-49f, 0.0f, 0.0f,
     0x1.8036b6p-104f, 0x1.cd0a86p-120f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f,
     0x1.fab13ep-7f, 0.0f, 0x1.360398p-100f, 0x1.5c439ep-36f, 0x1.82f3eap-114f, 0.0f,
     0.0f, 0x1.a53cc2p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1e768cp-17f, 0.0f,
     0x1.9d947cp-58f, 0.0f, 0x1.f0f6eap-98f, 0x1.a9653ap-118f, 0.0f, 0x1.7bcf96p-30f,
     0.0f, 0x1.174dd6p-102f, 0x1.346292p-114f, 0.0f, 0x1.a4b2d2p-55f, 0x1.a0185p-91f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.68102ap-19f, 0.0f, 0x1.db0fd2p-62f, 0x1.28edbcp-7f,
     0.0f, 0.0f, 0.0f, 0x1.f981e6p-84f, 0.0f, 0x1.6c9c14p-48f, 0.0f, 0x1.409128p-112f,
     0x1.d742a2p-46f, 0x1.c72036p-101f, 0x1.c5a3dp-6f, 0.0f, 0.0f, 0x1.fa3b44p-58f,
     0x1.47279p-47f, 0x1.700e5cp-113f, 0x1.1eec9cp-18f, 0.0f, 0.0f, 0x1.3c6132p-98f,
     0.0f, 0x1.da2d8ap-120f, 0x1.2c38dep-104f, 0.0f, 0x1.59ba12p-25f, 0.0f, 0.0f,
     0x1.7a557p-73f, 0.0f, 0x1.a2ba5p-56f, 0.0f, 0x1.3813eap-109f, 0.0f,
     0x1.b89c3p-111f, 0.0f, 0x1.985a9cp-42f, 0x1.28acb2p-116f, 0.0f, 0.0f, 0.0f,
     0x1.6d1858p-97f, 0.0f, 0x1.3b4afap-49f, 0.0f, 0x1.29b356p-49f, 0.0f,
     0x1.45224p-44f, 0x1.376db4p-100f, 0.0f, 0.0f, 0x1.70deap-38f, 0.0f,
     0x1.cc7d7cp-99f, 0x1.8d19d6p-85f, 0x1.ede6fcp-96f, 0x1.937f92p-105f, 0.0f,
     0x1.2c8f74p-25f, 0x1.6ep-110f, 0.0f, 0.0f, 0x1.094c02p-121f, 0.0f,
     0x1.c95044p-81f, 0x1.11b57cp-76f, 0x1.ca2d7p-65f, 0x1.63576ep-102f,
     0x1.90eb0ep-78f, 0x1.188552p-33f, 0x1.86408cp-30f, 0x1.a3f0ccp-44f, 0.0f,
     0x1.3119f2p-28f, 0x1.57055ap-99f, 0.0f, 0x1.2ac572p-21f, 0x1.407a54p-73f,
     0x1.3bde6p-117f, 0x1.121e16p-29f, 0x1.26f47p-110f, 0x1.3794c4p-51f,
     0x1.b18cd6p-84f, 0x1.0a2c36p-126f, 0.0f, 0.0f, 0x1.a4ac6cp-44f, 0.0f, 0.0f, 0.0f,
     0x1.d4a2ap-56f, 0.0f, 0x1.c532a8p-92f, 0.0f, 0.0f
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
            tmp2 = Sleef_finz_fmaxf8_kvx(tmp0, tmp1);
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
    printf("Sleef_finz_fmaxf8_kvx %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_finz_fmaxf8_kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
