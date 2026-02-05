/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_ceilf8_kvx.c --function Sleef_ceilf8_kvx --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary32 --vector-size 8 \
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
     0x1.5820e6p-13f, 0x1.3a399p-123f, 0.0f, 0x1.102962p-46f, 0.0f, 0x1p0f, 0.0f,
     0.0f, 0x1.94e3ep-24f, 0x1.666d7ap-97f, 0x1.6c5fc2p-114f, 0x1.6d2d68p-17f, 0.0f,
     0.0f, 0.0f, 0x1.4a9e1p-103f, 0.0f, 0x1.e316bp-1f, 0.0f, 0.0f, 0x1.955c84p-20f,
     0x1.077636p-50f, 0x1.636b44p-73f, 0.0f, 0.0f, 0.0f, 0x1.eb360cp-37f, 0.0f,
     0x1.fc197ep-84f, 0x1.491a0cp-43f, 0.0f, 0x1.bdb0aep-118f, 0.0f, 0x1.150db6p-108f,
     0x1.f0772ap-126f, 0x1.8bc72ep-111f, 0x1.0d14dap-110f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.326f14p-113f, 0x1.d3b91cp-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a62802p-73f, 0.0f, 0.0f, 0x1.c3f0f8p-16f, 0x1.cad0aap-53f, 0x1.dcbf4cp-42f,
     0x1.702c56p-40f, 0x1.f0da7ep-59f, 0x1.a2f0fep-38f, 0x1.545202p-70f,
     0x1.c665p-24f, 0x1.506ce8p-11f, 0x1.e00dfp-44f, 0x1.346d72p-99f, 0.0f,
     0x1.d59aa6p-4f, 0.0f, 0x1.3102a8p-96f, 0x1.f6bbdcp-107f, 0x1.e04af4p-85f,
     0x1.42e446p-90f, 0.0f, 0x1.19705ap-124f, 0x1.f181a8p-89f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ec2acep-56f, 0x1.c72a06p-124f, 0.0f, 0.0f, 0.0f, 0x1.ce4946p-42f,
     0x1.e26c78p-93f, 0x1.9b70ecp-27f, 0.0f, 0.0f, 0x1.e96996p-44f, 0.0f,
     0x1.4d2d64p-59f, 0x1.c2f54p-24f, 0.0f, 0.0f, 0x1.015adp-22f, 0x1.d8222ap-9f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.4e82dcp-37f, 0x1.325282p-1f, 0.0f, 0x1.863ceap-18f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0871b6p-26f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.7f2952p-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.56df8ap-79f, 0x1.13e37cp-88f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5ed5p-75f, 0x1.76241ep-100f, 0x1.e396bp-110f,
     0.0f, 0x1.35beb6p-94f, 0x1.64c47cp-25f, 0x1.5e5deap-26f, 0x1.f36daep-110f,
     0x1.067c4ap-26f, 0x1.e8702ep-109f, 0x1.853488p-61f, 0x1.920038p-15f,
     0x1.1d2e68p-17f, 0x1.3e2e04p-49f, 0x1.39f938p-23f, 0x1.f61d8ap-86f,
     0x1.942116p-104f, 0x1.763972p-19f, 0x1.99b65p-43f, 0x1.7c5352p-73f, 0.0f, 0.0f,
     0x1.488p-85f, 0x1.6afe0ap-50f, 0.0f, 0x1.574716p-100f, 0.0f, 0.0f, 0.0f,
     0x1.47e93ep-52f, 0.0f, 0.0f, 0.0f, 0x1.1b2cd8p-115f, 0.0f, 0.0f, 0x1.126b84p-12f,
     0.0f, 0x1.e8f85ap-7f, 0.0f, 0x1.6bc7e4p-90f, 0x1.66d658p-47f, 0x1.206998p-101f,
     0.0f, 0x1.ca359cp-91f, 0.0f, 0x1.d9afbep-60f, 0.0f, 0.0f, 0x1.dc43e8p-75f,
     0x1.535618p-92f, 0x1.510c1ap-64f, 0.0f, 0.0f, 0x1.bfe00ap-96f, 0x1.2b1d2cp-118f,
     0x1.7824cap-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d43b1cp-59f, 0.0f, 0x1.c55ef4p-41f,
     0x1.723f72p-19f, 0.0f, 0x1.a5cd8p-113f, 0.0f, 0.0f, 0.0f, 0x1.8edda4p-47f, 0.0f,
     0.0f, 0x1.c7aff6p-66f, 0x1.7c47d8p-102f, 0.0f, 0x1.483a2cp-109f, 0x1.2a2d88p-68f,
     0x1.a8c7fp-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.15d8a8p-54f,
     0x1.e7b62cp-31f, 0x1.cb2554p-37f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.d84832p-51f,
     0.0f, 0.0f, 0x1.428b2p-115f, 0.0f, 0.0f, 0.0f, 0x1.db3e06p-84f, 0x1.0a0f1ap-96f,
     0x1.63e92ap-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d27f04p-110f,
     0x1.040c9cp-13f, 0x1.abd7dp-22f, 0.0f, 0.0f, 0.0f, 0x1.f596a8p-56f, 0.0f,
     0x1.fc0a7p-77f, 0.0f, 0x1.86d674p-21f, 0x1.cef946p-54f, 0x1.4c87a4p-102f,
     0x1.1f434cp-41f, 0x1.8f1b18p-15f, 0x1.4d078p-119f, 0.0f, 0.0f, 0.0f,
     0x1.e73e26p-79f, 0.0f, 0x1.616b0ep-101f, 0.0f, 0x1.ebbfaap-72f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.02702cp-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.28bbcp-82f, 0.0f,
     0x1.9ea4d4p-75f, 0.0f, 0.0f, 0.0f, 0x1.da984ap-57f, 0.0f, 0x1.6f59bcp-46f, 0.0f,
     0x1.b5623p-21f, 0x1.aadb0ep-62f, 0x1.eca12cp-101f, 0.0f, 0x1.dfa9cp-116f,
     0x1.d8823cp-105f, 0.0f, 0x1.993f68p-13f, 0.0f, 0.0f, 0x1.1a32ep-4f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ffc656p-110f, 0.0f, 0.0f, 0x1.90a394p-114f,
     0x1.aa5bfep-26f, 0.0f, 0x1.3fde8cp-23f, 0.0f, 0.0f, 0x1.33797p-120f, 0.0f, 0.0f,
     0x1.bf93aep-90f, 0x1.3d413p-99f, 0x1.40c512p-59f, 0.0f, 0x1.15241ap-8f,
     0x1.204ed2p-15f, 0.0f, 0.0f, 0x1.8e56eap-84f, 0x1.e37ae6p-112f, 0.0f, 0.0f,
     0x1.6b701p-34f, 0.0f, 0.0f, 0x1.95f408p-121f, 0.0f, 0x1.fe9354p-102f, 0.0f, 0.0f,
     0x1.0fa668p-103f, 0.0f, 0.0f, 0x1.ee0b38p-89f, 0x1.31b956p-122f, 0.0f,
     0x1.8b6f48p-106f, 0x1.a972f8p-39f, 0x1.4a087ap-35f, 0.0f, 0.0f, 0x1.0b8212p-78f,
     0x1.bde094p-77f, 0.0f, 0x1.5a7f46p-54f, 0.0f, 0.0f, 0.0f, 0x1.8eeeaep-85f, 0.0f,
     0.0f, 0x1.74546cp-64f, 0x1.c04c26p-18f, 0.0f, 0.0f, 0x1.f1504ap-52f,
     0x1.4fd2e6p-12f, 0.0f, 0.0f, 0.0f, 0x1.e781ecp-15f, 0x1.31d57ep-94f, 0.0f,
     0x1.266beap-106f, 0x1.17974ap-77f, 0.0f, 0x1.50e42p-98f, 0.0f, 0x1.58e712p-62f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d8ebfcp-111f,
     0x1.4176ap-114f, 0x1.19ee54p-74f, 0x1.1161a2p-83f, 0x1.f4f2bap-71f, 0.0f, 0.0f,
     0.0f, 0x1.a26ad2p-44f, 0.0f, 0x1.ee5514p-69f, 0x1.19b854p-109f, 0.0f,
     0x1.f5c3dp-26f, 0x1.b3f604p-101f, 0.0f, 0x1.8229e6p-37f, 0x1.81518p-4f, 0.0f,
     0x1.7a9932p-88f, 0x1.d6062cp-19f, 0x1.871ffep-117f, 0x1.757286p-53f,
     0x1.2beccp-104f, 0x1.a84046p-93f, 0x1p0f, 0.0f, 0x1.4c627cp-86f, 0.0f,
     0x1.5b4696p-94f, 0.0f, 0x1.47c234p-60f, 0.0f, 0x1.260f38p-45f, 0.0f, 0.0f,
     0x1.28f78p-100f, 0.0f, 0.0f, 0x1.c7bf76p-123f, 0.0f, 0.0f, 0.0f, 0x1.4ed002p-2f,
     0.0f, 0x1.3cd3b6p-110f, 0x1.d36f76p-121f, 0.0f, 0x1.02a394p-40f, 0.0f,
     0x1.03691p-94f, 0.0f, 0x1.9860f4p-9f, 0x1.a849e4p-98f, 0.0f, 0.0f,
     0x1.9d991ep-125f, 0.0f, 0x1.684998p-79f, 0.0f, 0.0f, 0x1.d70736p-37f,
     0x1.f553ap-26f, 0x1.39686ap-28f, 0.0f, 0.0f, 0.0f, 0x1.f4f9bep-63f,
     0x1.2c69cap-47f, 0.0f, 0.0f, 0x1.84c75cp-59f, 0x1.95af4cp-65f, 0.0f,
     0x1.a58a74p-6f, 0.0f, 0.0f, 0.0f, 0x1.d6a7ep-17f, 0x1.9c7d4ep-85f,
     0x1.b7d25ep-67f, 0.0f, 0x1.8bfa24p-1f, 0x1.93a556p-78f, 0x1.00dbb4p-4f,
     0x1.20510cp-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a08ea4p-105f, 0.0f,
     0x1.abd448p-84f, 0x1.f08ap-67f, 0x1.b893p-37f, 0.0f, 0x1.ae8444p-60f,
     0x1.505f3p-11f, 0x1.6c3bf6p-36f, 0.0f, 0.0f, 0.0f, 0x1.a76e88p-81f,
     0x1.5cd454p-3f, 0.0f, 0.0f, 0x1.a0a804p-37f, 0.0f, 0x1.7c23bp-63f, 0.0f, 0.0f,
     0x1.4d4fdp-49f, 0x1.eb7272p-62f, 0x1.80e7bep-90f, 0.0f, 0.0f, 0x1.869e36p-104f,
     0x1.fcf308p-115f, 0.0f, 0.0f, 0x1.ee63b2p-48f, 0x1p0f, 0.0f, 0x1.928516p-1f,
     0x1.9ba884p-55f, 0.0f, 0x1.5efa86p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9c61d2p-43f,
     0.0f, 0.0f, 0x1.9fc1bep-54f, 0.0f, 0.0f, 0.0f, 0x1.1583fap-95f, 0.0f, 0.0f,
     0x1.1043b4p-77f, 0x1.66d284p-98f, 0x1.51fce8p-28f, 0x1.e4499ep-74f,
     0x1.51f754p-116f, 0.0f, 0x1.b79734p-77f, 0x1.b920e8p-56f, 0.0f, 0.0f,
     0x1.4b85d2p-85f, 0x1.583872p-94f, 0.0f, 0.0f, 0x1.b46ebep-43f, 0x1.e529cap-114f,
     0.0f, 0.0f, 0x1.0e100ep-19f, 0.0f, 0.0f, 0.0f, 0x1.35db42p-30f, 0x1.2b8d2cp-40f,
     0.0f, 0.0f, 0x1.29de24p-69f, 0x1.6fcb5ap-102f, 0x1.64d2cp-63f, 0x1.0736f8p-48f,
     0.0f, 0.0f, 0x1.3ca49cp-99f, 0.0f, 0.0f, 0.0f, 0x1.45aaaep-107f, 0x1.dd0316p-56f,
     0.0f, 0.0f, 0x1.9028bap-89f, 0.0f, 0.0f, 0.0f, 0x1.23b5a2p-92f, 0x1.dfaf76p-111f,
     0.0f, 0x1.cc0094p-46f, 0x1.622f5p-37f, 0.0f, 0x1.e11848p-14f, 0.0f, 0.0f,
     0x1.3be0f2p-55f, 0x1.68dffcp-68f, 0x1.d0b6e8p-27f, 0.0f, 0.0f, 0.0f,
     0x1.918a32p-122f, 0x1.57161ep-68f, 0x1.87febcp-120f, 0.0f, 0.0f, 0x1.b4484ep-81f,
     0.0f, 0.0f, 0.0f, 0x1.044632p-67f, 0.0f, 0x1.704972p-49f, 0x1.8ff20ap-3f,
     0x1.0c6eaep-23f, 0x1.0cd688p-114f, 0x1.08cc1cp-78f, 0x1.debbf4p-13f,
     0x1.667d9cp-107f, 0x1.dc3ba4p-23f, 0x1.825816p-60f, 0.0f, 0.0f, 0.0f,
     0x1.adf346p-111f, 0x1.c926e4p-9f, 0x1.bb3396p-36f, 0.0f, 0.0f, 0x1.466ecp-6f,
     0.0f, 0x1.511d4ep-100f, 0x1.ab5606p-53f, 0.0f, 0.0f, 0.0f, 0x1.059e1ap-41f,
     0x1.dd3792p-99f, 0x1p0f, 0x1.ed364ep-57f, 0.0f, 0.0f, 0x1.73c32cp-18f,
     0x1.1d7df2p-76f, 0.0f, 0x1.86f5acp-125f, 0.0f, 0x1.c5e6d4p-39f, 0.0f,
     0x1.01a45cp-25f, 0x1.013274p-76f, 0.0f, 0.0f, 0.0f, 0x1.acd832p-83f,
     0x1.9dd094p-46f, 0.0f, 0x1.be151ap-74f, 0.0f, 0x1.442662p-66f, 0.0f, 0.0f,
     0x1.0183bcp-23f, 0.0f, 0x1.dc9644p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ef9642p-115f,
     0x1.8ad5f6p-28f, 0x1.3f459p-100f, 0x1.98f1d2p-116f, 0x1.97adap-6f, 0.0f, 0.0f,
     0x1.6a425p-94f, 0.0f, 0.0f, 0x1.cb93fp-102f, 0.0f, 0.0f, 0x1.94ecccp-124f, 0.0f,
     0x1.d65d14p-122f, 0.0f, 0.0f, 0.0f, 0x1.594a56p-32f, 0x1.83a892p-73f, 0.0f, 0.0f,
     0x1.7786aap-90f, 0x1.7d267p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3d8032p-75f, 0.0f,
     0.0f, 0x1.a79decp-103f, 0x1.432ab4p-99f, 0x1.9f4abep-73f, 0x1.ea9866p-118f, 0.0f,
     0.0f, 0x1.4141bap-41f, 0x1.9580bp-84f, 0x1.d4156cp-107f, 0x1.4d6ecep-1f, 0.0f,
     0x1.38fbe4p-121f, 0.0f, 0.0f, 0x1.79a028p-42f, 0.0f, 0.0f, 0x1.8e7b22p-53f, 0.0f,
     0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.41a6ecp-94f,
     0x1.2425ep-2f, 0.0f, 0.0f, 0x1.1a5d56p-82f, 0x1.e847bap-112f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.2923fp-30f, 0.0f, 0x1.2a4aeep-85f, 0.0f, 0x1.caa3c8p-89f,
     0.0f, 0x1.c64e92p-14f, 0x1.edc15p-78f, 0.0f, 0x1.e16432p-5f, 0.0f, 0.0f,
     0x1.b1259cp-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.937c2ep-16f, 0x1.cf6d2ap-67f,
     0x1.769ff6p-25f, 0x1.c41386p-96f, 0x1.d1d89ep-16f, 0x1.d4f114p-71f,
     0x1.d4494cp-66f, 0.0f, 0.0f, 0x1.2f9e14p-24f, 0.0f, 0x1.d0c698p-73f, 0.0f,
     0x1.0bed2ap-62f, 0.0f, 0x1.af2e12p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b9978p-86f,
     0x1.31317ep-125f, 0.0f, 0.0f, 0x1.3914e8p-10f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.56f796p-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ef9068p-122f, 0.0f,
     0x1.962966p-96f, 0.0f, 0.0f, 0.0f, 0x1.0dc66cp-77f, 0.0f, 0.0f, 0.0f,
     0x1.0ecec6p-27f, 0x1.9e07d8p-125f, 0x1.9dec2cp-10f, 0.0f, 0.0f, 0x1.02d7a8p-94f,
     0x1.0e8f82p-37f, 0x1.034cc2p-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e61af8p-20f, 0x1.4aefc2p-126f, 0x1.d48fcap-67f, 0x1.4dfe12p-48f,
     0x1.e253d4p-101f, 0x1.a213acp-63f, 0.0f, 0x1.753314p-42f, 0.0f, 0x1.005376p-33f,
     0.0f, 0x1.d21de6p-3f, 0.0f, 0.0f, 0.0f, 0x1.c69652p-114f, 0x1.c552c2p-84f,
     0x1.7b3622p-59f, 0.0f, 0x1.3e5106p-79f, 0x1.6769b6p-119f, 0.0f, 0x1.27521ep-95f,
     0.0f, 0.0f, 0.0f, 0x1.ef601ap-92f, 0x1.3263c6p-95f, 0.0f, 0.0f, 0x1.651b54p-21f,
     0.0f, 0.0f, 0.0f, 0x1.a0656p-41f, 0x1.b20e14p-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.95c024p-65f, 0x1.92f7d4p-65f, 0.0f, 0.0f, 0x1.c26eb8p-63f,
     0x1.df00cep-31f, 0.0f, 0.0f, 0x1.4821p-113f, 0.0f, 0x1.ecb282p-34f,
     0x1.9d28b8p-73f, 0x1.970136p-15f, 0.0f, 0x1.31c51ep-91f, 0x1.44b34p-28f, 0.0f,
     0x1.3c99ap-16f, 0x1.dd85fcp-119f, 0x1.e2448ep-23f, 0x1.591682p-74f,
     0x1.215d8cp-90f, 0.0f, 0x1.44a4cap-119f, 0x1.f4026ap-73f, 0.0f, 0x1.14a1cp-54f,
     0.0f, 0x1.523924p-113f, 0.0f, 0.0f, 0.0f, 0x1.b967eap-39f, 0x1.344712p-28f, 0.0f,
     0x1.a92708p-121f, 0.0f, 0.0f, 0x1.590eb2p-103f, 0x1.101e12p-2f, 0x1.cc62d2p-104f,
     0.0f, 0x1.af9fdep-2f, 0.0f, 0.0f, 0x1.ab2e12p-59f, 0.0f, 0x1.88fa7ep-75f, 0.0f,
     0.0f, 0x1.b2d574p-4f, 0x1.fa2baap-2f, 0x1.7cdbfep-14f, 0.0f, 0x1.fea032p-94f,
     0x1.c80708p-111f, 0.0f, 0x1.4b9462p-99f, 0x1.f1e09ep-98f, 0x1.51dd88p-106f,
     0x1.a15f6ep-21f, 0.0f, 0x1.3dc7c8p-66f, 0.0f, 0.0f, 0x1.018c56p-79f,
     0x1.78fc04p-9f, 0.0f, 0.0f, 0x1.da76cp-113f, 0.0f, 0x1.b8847p-27f, 0.0f,
     0x1.f30628p-34f, 0.0f, 0.0f, 0x1.3ab7fap-8f, 0.0f, 0x1.6791a8p-5f, 0.0f, 0.0f,
     0x1.f2f3d4p-23f, 0.0f, 0x1.da73b6p-88f, 0.0f, 0x1.0b7e88p-104f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b51bfcp-97f, 0x1.f222a2p-96f, 0.0f, 0x1.120824p-60f,
     0.0f, 0x1.250c6ap-123f, 0x1.572136p-110f, 0x1.fd5d48p-71f, 0.0f,
     0x1.ca98dep-120f, 0x1.5bdbe2p-119f, 0x1.9e8c4ep-97f, 0.0f, 0.0f, 0.0f,
     0x1.f1a4d8p-12f, 0.0f, 0.0f, 0.0f, 0x1.c847bap-110f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b04eeap-101f, 0.0f, 0.0f, 0x1.75942p-83f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.147052p-102f, 0.0f, 0.0f, 0x1.4a649p-55f,
     0x1.a37e34p-15f, 0x1.9b123p-30f, 0.0f, 0x1.54aca4p-52f, 0x1.ecb2e8p-42f,
     0x1.587666p-54f, 0.0f, 0x1.1c3e5p-90f, 0x1.08dacap-33f, 0x1.e0c3a2p-104f, 0.0f,
     0x1.88196p-7f, 0.0f, 0x1.780e82p-38f, 0.0f, 0x1.8fd4b4p-107f, 0.0f, 0.0f, 0.0f,
     0x1.037f36p-31f, 0.0f, 0x1.759166p-110f, 0.0f, 0.0f, 0x1.7b2f98p-14f, 0.0f,
     0x1.3d52e6p-99f, 0x1.fb45bp-66f, 0x1.28ffaep-2f, 0x1.af416ep-99f,
     0x1.b7c3c4p-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e90278p-100f, 0.0f
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
            tmp1 = Sleef_ceilf8_kvx(tmp0);
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
    printf("Sleef_ceilf8_kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_ceilf8_kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
