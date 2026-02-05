/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_rintf8_kvx.c --function Sleef_finz_rintf8_kvx \
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
     0x1.5c4c7ap-70f, 0x1.a822b8p-31f, 0x1.ca181p-23f, 0x1.668034p-33f, 0.0f, 0.0f,
     0x1.1f43fep-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a9a274p-22f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e74bap-12f, 0.0f, 0.0f, 0x1.207292p-93f, 0.0f, 0.0f, 0x1p0f,
     0x1.be0408p-63f, 0.0f, 0.0f, 0x1.58759p-3f, 0x1.b10664p-87f, 0.0f, 0.0f, 0x1p0f,
     0.0f, 0x1.29e2bcp-39f, 0.0f, 0x1.91d57p-111f, 0x1.b67c2ap-105f, 0.0f, 0.0f, 0.0f,
     0x1.fef294p-39f, 0x1.0495p-48f, 0.0f, 0.0f, 0.0f, 0x1.bff6f6p-41f, 0.0f,
     0x1.fc22b6p-77f, 0x1.c307b4p-73f, 0.0f, 0x1.195816p-60f, 0x1.98d5ecp-117f, 0.0f,
     0.0f, 0.0f, 0x1.77f284p-2f, 0.0f, 0x1p0f, 0x1.454142p-59f, 0x1.185024p-79f,
     0x1.26fbacp-101f, 0.0f, 0.0f, 0x1.73b82ap-30f, 0x1.c162a2p-2f, 0x1.bc69ccp-117f,
     0x1.33528cp-50f, 0.0f, 0x1.c3477cp-96f, 0x1.16b148p-48f, 0.0f, 0x1.c2328cp-109f,
     0x1.f20decp-85f, 0x1.47179p-45f, 0.0f, 0x1.90b4aap-96f, 0.0f, 0x1.e370f6p-3f,
     0x1.335ebcp-53f, 0x1.58806ap-125f, 0.0f, 0.0f, 0x1.10af64p-90f, 0x1.c527e8p-105f,
     0x1.ec315p-77f, 0x1.8a1fdap-1f, 0x1.e68f36p-79f, 0x1.a8600ap-86f, 0.0f,
     0x1.9ce5e6p-104f, 0.0f, 0.0f, 0x1.a57322p-82f, 0.0f, 0x1.22c532p-60f,
     0x1.5914ecp-14f, 0x1.93e612p-60f, 0x1.6f9adep-94f, 0.0f, 0x1.985caap-89f,
     0x1.4f0e0ap-47f, 0x1.dba184p-97f, 0x1.23d268p-103f, 0.0f, 0x1.eb3c92p-14f,
     0x1.16790cp-36f, 0x1.a0227cp-121f, 0x1.2199fp-13f, 0.0f, 0x1.4c79e4p-115f, 0.0f,
     0.0f, 0x1.8fdb58p-93f, 0.0f, 0.0f, 0x1.4b10c8p-35f, 0x1.0b7874p-6f, 0.0f, 0.0f,
     0x1.17b14p-76f, 0.0f, 0.0f, 0x1.ade8b2p-28f, 0x1.09880ep-56f, 0.0f,
     0x1.5b2c5cp-4f, 0x1.f96d5p-32f, 0x1.c5d6aep-99f, 0x1.312472p-73f, 0.0f, 0.0f,
     0x1.34775ap-125f, 0.0f, 0.0f, 0x1.8aa832p-12f, 0.0f, 0x1.bfb916p-30f, 0.0f, 0.0f,
     0x1.bad778p-27f, 0.0f, 0x1.8a18ecp-32f, 0.0f, 0x1.077af4p-42f, 0.0f, 0.0f,
     0x1.b4352p-63f, 0x1.cfc0d4p-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f05614p-34f, 0x1.36972cp-26f, 0.0f, 0.0f, 0x1.a0c814p-99f, 0.0f, 0.0f,
     0x1.5da922p-11f, 0x1.bb5fe6p-72f, 0x1.54694cp-70f, 0x1.4d331ep-82f, 0.0f,
     0x1.a6857ap-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.105796p-25f, 0x1.c8e748p-18f,
     0x1.09e22ap-20f, 0x1.560e3ep-116f, 0x1.728c6cp-33f, 0.0f, 0.0f, 0x1.7ec3e8p-29f,
     0x1.e80fb6p-88f, 0.0f, 0.0f, 0x1.4f91a2p-24f, 0.0f, 0.0f, 0.0f, 0x1.ba3b4ap-3f,
     0.0f, 0x1.6b1942p-114f, 0.0f, 0x1.01a6bep-78f, 0x1.96c958p-21f, 0.0f, 0.0f,
     0x1.bbe23ap-71f, 0.0f, 0.0f, 0.0f, 0x1.d809e8p-90f, 0x1.21f3cep-43f,
     0x1.7314fp-8f, 0.0f, 0.0f, 0x1.ef5708p-94f, 0.0f, 0.0f, 0.0f, 0x1.6db566p-43f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.29ccc6p-104f, 0x1.dbf0cp-47f,
     0x1.ef18bp-60f, 0x1.19daa8p-27f, 0x1.b154eap-2f, 0x1.333492p-34f, 0.0f, 0.0f,
     0x1.c313aap-24f, 0.0f, 0x1.011476p-13f, 0x1.e7ebfcp-64f, 0.0f, 0x1.733a2ap-81f,
     0x1.30050cp-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0a16ap-124f, 0x1.3f176p-122f, 0.0f,
     0.0f, 0x1.231f14p-88f, 0x1.62465ap-56f, 0x1.cfa4bcp-99f, 0.0f, 0x1.8e58fep-89f,
     0.0f, 0.0f, 0x1.64b708p-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.96436cp-102f,
     0x1.1fdc24p-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.78b9e4p-106f, 0.0f,
     0.0f, 0x1.759ed6p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5a781ap-29f, 0.0f, 0.0f, 0.0f,
     0x1.cd04a4p-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eea93p-59f, 0x1.72aa82p-50f, 0.0f,
     0x1.8c3292p-35f, 0.0f, 0x1.2c0f86p-124f, 0x1.5b4328p-59f, 0.0f, 0x1.88761ap-95f,
     0.0f, 0x1.5ba832p-117f, 0.0f, 0.0f, 0x1.bf50e6p-97f, 0x1.dead38p-113f, 0.0f,
     0.0f, 0x1.fd2066p-97f, 0x1.d08252p-115f, 0.0f, 0.0f, 0.0f, 0x1.6f9dbap-43f,
     0x1p0f, 0x1.d128fp-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c514b6p-125f, 0.0f,
     0x1.5c9e92p-79f, 0x1.40de4ap-91f, 0.0f, 0x1.4be19p-61f, 0x1.6b02d4p-57f, 0.0f,
     0x1.7a2b3cp-76f, 0.0f, 0x1.b0e88cp-59f, 0.0f, 0x1.85d848p-79f, 0x1.69bc8p-13f,
     0.0f, 0x1.d2eec4p-53f, 0x1.4e8e94p-113f, 0x1.06c92cp-21f, 0x1.fc652ep-20f,
     0x1.8829b2p-48f, 0x1.3f57e8p-84f, 0.0f, 0x1.b926fep-58f, 0x1.36e22p-97f, 0.0f,
     0x1.9d8578p-60f, 0x1.e2442cp-74f, 0.0f, 0x1.dc59c4p-103f, 0x1.5a7428p-56f,
     0x1.341c64p-87f, 0x1.19413p-50f, 0.0f, 0x1.bcd97p-5f, 0.0f, 0x1.e35ee6p-16f,
     0.0f, 0.0f, 0x1.ea009p-64f, 0.0f, 0x1.02a5f2p-109f, 0x1.15489cp-13f, 0.0f,
     0x1.288c92p-63f, 0x1.23d64ep-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3d63d6p-90f, 0.0f,
     0x1.6ea8ep-69f, 0.0f, 0.0f, 0x1.f21b8ap-105f, 0.0f, 0x1.40d50cp-104f, 0.0f,
     0x1.d6d6d8p-12f, 0x1.7ea12p-26f, 0.0f, 0.0f, 0x1.a987ecp-95f, 0x1.6fc79p-45f,
     0x1.6d25dp-106f, 0.0f, 0x1.67c6c8p-105f, 0x1.8cca56p-28f, 0.0f, 0x1.f478bap-27f,
     0x1.b083d8p-35f, 0x1.71a35ep-89f, 0x1.e11eecp-62f, 0x1.8fb644p-31f, 0.0f,
     0x1.06575ep-62f, 0.0f, 0x1.5f9092p-91f, 0x1.e0a91ap-71f, 0.0f, 0.0f,
     0x1.c2bcecp-55f, 0.0f, 0.0f, 0x1.1e9304p-24f, 0x1.65d8f6p-61f, 0x1.04353p-26f,
     0.0f, 0x1.02044ep-23f, 0.0f, 0x1.4efd7ep-85f, 0x1.889a9p-109f, 0.0f, 0.0f,
     0x1.e220dcp-88f, 0x1.1342d6p-32f, 0x1.8560a2p-82f, 0x1.564722p-71f,
     0x1.0c1b2p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d7be5ap-63f,
     0x1.25a5eep-12f, 0x1.6a423p-34f, 0.0f, 0x1p0f, 0x1.078bf2p-23f, 0x1.d1cf72p-111f,
     0.0f, 0x1.5ad966p-72f, 0.0f, 0.0f, 0.0f, 0x1.3defdcp-80f, 0x1.ee20b8p-74f, 0.0f,
     0.0f, 0x1.ff24acp-110f, 0.0f, 0x1.d23658p-31f, 0x1.99c498p-20f, 0.0f,
     0x1.03afa8p-67f, 0x1.296adap-53f, 0.0f, 0x1.3a1bb6p-101f, 0x1.bf19b4p-124f, 0.0f,
     0.0f, 0.0f, 0x1.147708p-52f, 0x1.fce1e4p-36f, 0.0f, 0.0f, 0.0f, 0x1.afc9eep-21f,
     0.0f, 0.0f, 0x1.5732fp-45f, 0x1.9e1f0ep-122f, 0x1.e4ca98p-47f, 0.0f,
     0x1.18102p-68f, 0x1.4907f2p-98f, 0.0f, 0x1.38338ep-123f, 0x1.561d64p-43f,
     0x1.8e0472p-47f, 0x1.d8332cp-66f, 0.0f, 0.0f, 0x1.4e17fp-103f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e1bc66p-10f, 0x1.060f0ap-2f, 0.0f, 0x1.17595p-27f,
     0x1.50160cp-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dc99d2p-99f, 0x1.945f4p-123f,
     0.0f, 0x1.e0d2bep-19f, 0.0f, 0x1.dec308p-19f, 0.0f, 0x1.98d342p-21f,
     0x1.17c87ap-76f, 0x1.090956p-7f, 0.0f, 0x1.4058ap-44f, 0.0f, 0x1.2191dep-94f,
     0x1.7649f8p-113f, 0.0f, 0x1.54b2fap-2f, 0.0f, 0x1.dd120ep-83f, 0.0f,
     0x1.71f9dap-121f, 0x1.cfc22cp-43f, 0x1.e4e284p-28f, 0.0f, 0.0f, 0.0f,
     0x1.6d033p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ebca8ap-92f,
     0.0f, 0.0f, 0x1.2c5714p-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c54e14p-91f, 0x1.b67c22p-64f, 0.0f, 0x1.6f5d74p-49f, 0.0f, 0x1.bbab42p-52f,
     0.0f, 0x1.6297f2p-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d94e7ep-2f, 0.0f,
     0x1.c3466ep-94f, 0.0f, 0.0f, 0.0f, 0x1.ffe43ep-24f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.53cf08p-79f, 0.0f, 0x1.a54c7ep-35f, 0x1.733fbp-77f, 0x1.547efep-5f, 0.0f,
     0.0f, 0x1.3937fcp-72f, 0.0f, 0x1.6afffep-57f, 0x1p0f, 0.0f, 0.0f,
     0x1.b53adep-23f, 0x1.f511dcp-31f, 0.0f, 0x1.752938p-35f, 0x1.70d226p-16f, 0.0f,
     0.0f, 0x1.f93788p-85f, 0.0f, 0x1.fb63f4p-27f, 0.0f, 0x1.944976p-22f,
     0x1.15d354p-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.284968p-72f, 0x1.85f7acp-18f,
     0x1.3c038ap-121f, 0x1.8e32eap-36f, 0x1.f1a23cp-81f, 0.0f, 0x1.a24d76p-123f,
     0x1.8499e4p-88f, 0.0f, 0x1.73a3f2p-33f, 0x1.13a244p-31f, 0.0f, 0.0f, 0.0f,
     0x1.64092ep-80f, 0x1.bc1b5p-118f, 0x1.508928p-2f, 0x1.e589fcp-112f,
     0x1.798a7ap-5f, 0x1.ff125ep-89f, 0x1.132ae4p-66f, 0.0f, 0x1.05b39ap-89f, 0.0f,
     0x1.b2bab2p-122f, 0x1.39088ap-87f, 0.0f, 0x1.c0f94cp-107f, 0.0f,
     0x1.c7394cp-116f, 0.0f, 0x1.c2a80ep-29f, 0.0f, 0x1.3772e4p-16f, 0x1.a776e2p-18f,
     0x1.b6bb5ap-43f, 0x1.4ef492p-108f, 0x1.17cf2p-52f, 0.0f, 0.0f, 0x1.b93668p-8f,
     0x1.139274p-7f, 0x1.d759f2p-120f, 0x1.cd73ap-110f, 0.0f, 0x1.171078p-57f,
     0x1.c105d4p-61f, 0x1.9d525ap-25f, 0.0f, 0.0f, 0.0f, 0x1.1eb2f8p-90f, 0.0f,
     0x1.7dac72p-43f, 0.0f, 0.0f, 0.0f, 0x1.97237p-121f, 0x1.09f43ep-47f,
     0x1.9db4ap-90f, 0x1.1ad86ap-49f, 0.0f, 0.0f, 0x1.c3edf2p-15f, 0x1.3a43d8p-3f,
     0.0f, 0x1.a86016p-112f, 0.0f, 0x1.a3ce9ep-8f, 0.0f, 0.0f, 0x1.01a6a8p-32f,
     0x1.2dcd76p-53f, 0.0f, 0x1.e6066ap-107f, 0.0f, 0.0f, 0x1.13f5b4p-33f,
     0x1.17b0dep-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d4691ep-40f,
     0x1.02b928p-111f, 0x1.dabd18p-45f, 0x1.306efep-6f, 0x1.890f38p-30f,
     0x1.a12f42p-8f, 0.0f, 0.0f, 0x1.30c852p-78f, 0x1.97f1bp-70f, 0.0f,
     0x1.78b62ap-17f, 0.0f, 0.0f, 0x1.562ed8p-54f, 0x1.4f33dap-8f, 0x1.5f2456p-26f,
     0.0f, 0.0f, 0.0f, 0x1.fd0158p-122f, 0.0f, 0.0f, 0x1.6cd472p-66f, 0.0f, 0.0f,
     0x1.db837p-19f, 0.0f, 0x1.eb7ab6p-1f, 0x1.707904p-3f, 0x1.6f55b2p-30f,
     0x1.cc65b2p-93f, 0x1.9c19c2p-94f, 0.0f, 0.0f, 0x1.59d51ap-75f, 0.0f, 0.0f,
     0x1.637c9ep-94f, 0x1.642e16p-45f, 0.0f, 0x1.6be196p-83f, 0x1.e3e512p-97f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6ca87ep-3f, 0.0f, 0.0f, 0.0f, 0x1.1757f2p-33f, 0.0f, 0.0f, 0x1.856eaap-54f,
     0x1.51540cp-1f, 0.0f, 0x1.c48fcap-15f, 0x1.8cd5dp-5f, 0.0f, 0.0f, 0.0f,
     0x1.04b26cp-97f, 0x1.0f5fccp-92f, 0x1.1419c8p-118f, 0x1.c811d2p-61f,
     0x1.bb23cp-46f, 0.0f, 0.0f, 0x1.3cde4p-7f, 0.0f, 0.0f, 0x1.9f99fap-19f, 0.0f,
     0.0f, 0x1.b540cp-14f, 0.0f, 0x1.9a753cp-79f, 0.0f, 0x1.fa70c4p-99f, 0.0f,
     0x1.5003fap-121f, 0.0f, 0.0f, 0x1.54e1aap-38f, 0.0f, 0.0f, 0x1.f36ec4p-94f,
     0x1.5edd0ap-7f, 0x1.d6e302p-107f, 0.0f, 0.0f, 0x1.f527ccp-62f, 0x1.0fdf82p-8f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e03484p-57f, 0x1.280eaep-1f, 0x1.5bd692p-6f,
     0x1.2da002p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b976e6p-107f, 0x1.556806p-76f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.fa8e44p-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.db2e66p-55f,
     0x1.8c8916p-65f, 0x1.62f876p-116f, 0.0f, 0x1.eeb192p-78f, 0.0f, 0x1.5b19cap-43f,
     0.0f, 0.0f, 0.0f, 0x1.48af0ap-82f, 0x1.084c4ep-87f, 0x1.8adc12p-32f, 0.0f,
     0x1.5a232ep-70f, 0.0f, 0x1.4a7b64p-12f, 0.0f, 0.0f, 0.0f, 0x1.c99686p-81f, 0.0f,
     0.0f, 0x1.2dff64p-46f, 0x1.75ed8ep-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.635eap-114f,
     0x1.cbdbfcp-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ebeb24p-71f, 0x1.b4c65ap-6f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d18214p-9f, 0.0f, 0.0f, 0x1.ba6cf4p-117f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1344a8p-19f,
     0x1.97b676p-59f, 0x1.0e8692p-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.34740cp-1f,
     0.0f, 0x1.1bdfcap-20f, 0.0f, 0.0f, 0.0f, 0x1.b5f08ap-73f, 0.0f, 0.0f, 0.0f,
     0x1.c5516p-63f, 0x1.ed098ap-59f, 0x1.b63f22p-19f, 0x1.bf1b6ap-109f,
     0x1.21f83p-94f, 0.0f, 0x1.0b01b4p-63f, 0.0f, 0x1.8f78b4p-126f, 0x1.8141dp-26f,
     0.0f, 0x1.bc90b8p-111f, 0.0f, 0x1.9669dp-92f, 0.0f, 0x1.2559c8p-57f,
     0x1.e99bf4p-125f, 0.0f, 0x1.c0ec88p-84f, 0x1.a18efap-80f, 0.0f, 0x1.2efb44p-51f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9b175ep-74f, 0x1.765352p-125f, 0.0f,
     0x1.2b626p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b2f158p-8f, 0x1.6efe56p-69f,
     0.0f, 0.0f, 0.0f, 0x1.c1dd5p-106f, 0x1.5c4162p-23f, 0x1.d34376p-93f, 0.0f,
     0x1.3c8598p-98f, 0x1.7d0cc2p-40f, 0.0f, 0.0f, 0x1.e9526ep-66f, 0x1.9d9736p-32f,
     0.0f, 0x1.7273aap-117f, 0.0f, 0x1.025d7ep-69f, 0x1.1711c2p-76f, 0x1.7f7b28p-117f,
     0x1.18d0bcp-121f, 0.0f, 0.0f, 0x1.9311ccp-93f, 0x1.cb566p-100f, 0x1.9c47c4p-7f,
     0x1.201c92p-42f, 0x1.9eb0d8p-58f, 0.0f, 0x1.f13716p-104f, 0.0f, 0.0f,
     0x1.c3a01ep-43f, 0.0f, 0x1.7b3d68p-9f, 0x1.030992p-7f, 0x1.eeaff8p-117f,
     0x1.c64078p-104f, 0x1.dc9a16p-20f, 0x1.bebfe6p-46f, 0x1.daf7c4p-88f,
     0x1.3fa796p-95f, 0x1.6df06p-126f, 0x1.2d7a9p-72f, 0x1.a8ab4p-44f, 0.0f, 0.0f,
     0x1.bee5d4p-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.898c36p-49f, 0x1.a22b94p-121f,
     0x1.2cbe66p-96f, 0x1.e1157cp-61f, 0x1.5fc8c6p-33f, 0.0f, 0x1.85e39p-81f,
     0x1.3acb84p-8f, 0.0f, 0.0f, 0.0f, 0x1.0388ap-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a79332p-82f, 0.0f, 0x1.e9cd5p-65f, 0x1.40eefep-26f,
     0x1.480d62p-36f, 0x1.cf22a6p-2f, 0.0f, 0x1.531d8ep-82f, 0x1.966d4p-29f, 0.0f,
     0x1.d07db2p-83f, 0x1.7da31ap-44f, 0x1.936e66p-108f, 0x1.f4a386p-32f,
     0x1.53bad6p-21f, 0.0f, 0x1.f3791ep-4f, 0.0f, 0x1p0f, 0.0f, 0x1.1bb90ep-36f, 0.0f,
     0x1.8f305ap-30f, 0.0f, 0.0f, 0x1.f79704p-38f, 0x1.ec8e5cp-80f, 0.0f,
     0x1.710544p-40f, 0x1.5591bap-77f, 0.0f, 0.0f, 0.0f, 0x1.a64cep-103f
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
            tmp1 = Sleef_finz_rintf8_kvx(tmp0);
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
    printf("Sleef_finz_rintf8_kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_finz_rintf8_kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
