/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_cbrtf8_u10kvx.c --function Sleef_cbrtf8_u10kvx \
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
     0x1.0220a2p-126f, 0.0f, 0x1.af49f2p-104f, 0.0f, 0x1.0a725cp-30f, 0.0f, 0.0f,
     0x1.b5d51ap-7f, 0x1.8a69cp-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ce2e7cp-19f, 0.0f, 0x1.431326p-69f, 0x1.dadf0ep-27f, 0.0f, 0x1.53e55ap-2f,
     0.0f, 0x1.a65f7p-66f, 0.0f, 0.0f, 0x1.1ee914p-94f, 0x1.fd39a2p-121f,
     0x1.cb9ddep-105f, 0.0f, 0.0f, 0x1.ec3e6ap-12f, 0x1.c2126ep-18f, 0.0f, 0.0f, 0.0f,
     0x1.7d3ac4p-7f, 0x1.fc7f2p-90f, 0.0f, 0x1.1dfc6ap-109f, 0x1.2c350ep-99f,
     0x1.c8727p-51f, 0x1.95a516p-96f, 0x1.9ee85cp-19f, 0.0f, 0.0f, 0x1.b292cep-58f,
     0.0f, 0x1.96ba6ep-26f, 0x1.c54b4ap-68f, 0x1.f29bep-38f, 0x1.455e9cp-7f, 0.0f,
     0x1.c0c95p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e165ep-53f, 0x1.14716cp-7f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.5a366ep-58f, 0x1.0f39fcp-55f, 0.0f, 0.0f, 0.0f,
     0x1.af5892p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.286fbcp-9f,
     0x1.51f434p-39f, 0.0f, 0x1.e84aacp-99f, 0.0f, 0x1.1cbe0ap-44f, 0.0f, 0.0f,
     0x1.b8e9ccp-57f, 0x1.181024p-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.139ef6p-59f,
     0x1.be365cp-13f, 0.0f, 0x1.117052p-23f, 0.0f, 0x1.2cb168p-54f, 0.0f, 0.0f,
     0x1.6c53c2p-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4a41c6p-44f, 0x1.55fbbap-96f,
     0x1.be2d16p-75f, 0.0f, 0x1.7b95fcp-102f, 0x1.b3e7dap-13f, 0.0f, 0.0f, 0.0f,
     0x1.c69d32p-109f, 0x1.cb6aeep-50f, 0x1.ffd652p-44f, 0x1.03f698p-31f, 0.0f,
     0x1.c9646ep-26f, 0.0f, 0x1.351e66p-90f, 0x1.e040c2p-106f, 0.0f, 0.0f,
     0x1.834cb6p-55f, 0x1.6ce2dep-111f, 0x1.50d1c4p-72f, 0x1.8a827p-117f, 0.0f, 0.0f,
     0.0f, 0x1.9a5e38p-34f, 0.0f, 0x1.3aecaep-88f, 0.0f, 0x1.55b608p-91f, 0.0f, 0.0f,
     0.0f, 0x1.f579bp-61f, 0.0f, 0x1.14db7ep-64f, 0.0f, 0.0f, 0x1.8765bap-76f,
     0x1.917e9cp-72f, 0.0f, 0x1.4c8158p-3f, 0.0f, 0.0f, 0.0f, 0x1.5453eap-57f,
     0x1.ef558ap-5f, 0x1.ddb0d6p-87f, 0x1.89022p-20f, 0x1.f917a8p-68f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.7cbde2p-20f, 0x1.2cf5eep-27f, 0x1.bf2814p-35f, 0.0f, 0.0f,
     0x1.1aa648p-4f, 0.0f, 0x1.48fc64p-42f, 0x1.d14554p-64f, 0.0f, 0.0f, 0.0f,
     0x1.f3d986p-65f, 0.0f, 0x1.9f529ep-37f, 0x1.a492e2p-90f, 0.0f, 0x1.1ae9aep-25f,
     0.0f, 0.0f, 0x1.fd8d94p-94f, 0x1.a94a52p-106f, 0.0f, 0.0f, 0.0f, 0x1.03f27ep-60f,
     0.0f, 0.0f, 0x1.07898ap-100f, 0x1.1bcfaep-46f, 0.0f, 0x1.c3a4c4p-85f, 0.0f,
     0x1.b749ap-63f, 0x1.07f804p-1f, 0x1.060c0ap-39f, 0x1.1fe8d6p-105f,
     0x1.63b3fp-94f, 0x1.561c06p-65f, 0.0f, 0x1p0f, 0x1.c574e8p-28f, 0.0f,
     0x1.04d99cp-43f, 0.0f, 0x1.0f9afap-30f, 0x1.64093cp-21f, 0x1.1edcp-107f,
     0x1.fe8b58p-7f, 0.0f, 0.0f, 0x1.0a2a72p-5f, 0.0f, 0.0f, 0x1.fbea22p-78f, 0.0f,
     0.0f, 0x1.f41a0ap-74f, 0x1.15f646p-102f, 0.0f, 0.0f, 0x1.b39bdp-99f, 0.0f,
     0x1.e516fap-58f, 0x1.eb1666p-51f, 0x1.0fe2a4p-70f, 0.0f, 0x1.8d650ap-11f, 0.0f,
     0.0f, 0x1.5f002ap-59f, 0.0f, 0x1.25e3d4p-75f, 0x1.d46ab6p-124f, 0.0f, 0.0f, 0.0f,
     0x1.3c263ap-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.91cb1ap-80f, 0x1.d588c4p-117f,
     0x1.3ad0dp-15f, 0.0f, 0x1.648ep-30f, 0.0f, 0.0f, 0x1.384a5ep-69f, 0.0f, 0.0f,
     0.0f, 0x1.d5068ap-75f, 0.0f, 0x1.510f78p-48f, 0.0f, 0.0f, 0.0f, 0x1.002e4cp-96f,
     0.0f, 0.0f, 0.0f, 0x1.aa1a4ap-76f, 0.0f, 0x1.da582cp-66f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ed09e2p-102f, 0x1.32db74p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.2025fcp-91f, 0.0f, 0x1.e4f5dp-5f, 0x1.f94714p-95f, 0.0f, 0.0f,
     0x1.ae27ep-5f, 0x1.b8f0b4p-115f, 0x1.e93a74p-110f, 0.0f, 0x1.579de8p-120f, 0.0f,
     0x1.6ebd86p-34f, 0.0f, 0x1.e29ep-16f, 0.0f, 0.0f, 0x1.282b82p-36f, 0.0f, 0.0f,
     0.0f, 0x1.0a8b88p-29f, 0.0f, 0x1.6beba6p-65f, 0x1.b0ec32p-59f, 0.0f, 0.0f, 0.0f,
     0x1.f2084ep-100f, 0.0f, 0.0f, 0.0f, 0x1.256eccp-13f, 0x1.24431p-32f, 0.0f,
     0x1.f1c53ep-22f, 0.0f, 0x1.9c5808p-75f, 0x1.8ec404p-117f, 0x1.84a986p-73f,
     0x1.afc58cp-69f, 0x1.4b120cp-49f, 0.0f, 0x1.fe3048p-43f, 0x1.667cbap-12f, 0.0f,
     0.0f, 0x1.7567cap-25f, 0x1.6af272p-71f, 0.0f, 0x1.e9815p-101f, 0x1.e6679p-79f,
     0x1.1bc9a4p-33f, 0x1.34e1f8p-34f, 0x1.b01a3p-95f, 0x1.1dd08p-9f,
     0x1.9eef52p-119f, 0x1.67fd6p-30f, 0.0f, 0.0f, 0x1.cf44e4p-47f, 0.0f,
     0x1.60bb16p-57f, 0.0f, 0x1.99d57ap-63f, 0x1.c7a2ep-101f, 0.0f, 0x1.590628p-29f,
     0x1.5c0b94p-86f, 0.0f, 0.0f, 0x1.f224dcp-70f, 0x1.33bd36p-115f, 0.0f,
     0x1.31132ep-44f, 0.0f, 0.0f, 0x1.b4f796p-12f, 0x1.ce22bap-122f, 0.0f, 0.0f,
     0x1.49da1ep-38f, 0.0f, 0x1.56aac8p-95f, 0x1.4a2e92p-80f, 0.0f, 0x1.173fbcp-115f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.391052p-13f, 0x1.130b36p-120f, 0.0f, 0x1.4b3414p-1f,
     0x1.f90f1ap-10f, 0x1.b20a0cp-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a2ce24p-110f,
     0x1.ac804p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f055b6p-1f, 0x1.a8a38p-34f,
     0x1.9821a2p-105f, 0x1.1d7fe6p-61f, 0x1.892abcp-1f, 0x1.ce5c5cp-35f, 0.0f, 0.0f,
     0.0f, 0x1.b92b3cp-23f, 0x1.3c4d44p-118f, 0.0f, 0x1.8955aep-11f, 0x1.5193ccp-93f,
     0x1.5a8c4cp-72f, 0.0f, 0.0f, 0.0f, 0x1.42f61ep-47f, 0x1.ceb0e2p-100f, 0.0f, 0.0f,
     0x1.110b7ap-62f, 0.0f, 0.0f, 0x1.9f9c36p-31f, 0x1.7b47c4p-45f, 0x1.a7e878p-108f,
     0x1.85d904p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4192f4p-47f, 0.0f, 0.0f, 0.0f,
     0x1.69305ep-7f, 0.0f, 0x1.935418p-42f, 0x1.e11dep-44f, 0x1.628568p-104f, 0.0f,
     0x1.d65bdep-95f, 0x1.d9d478p-51f, 0.0f, 0x1.31c8bp-29f, 0x1.8096b4p-35f,
     0x1.5d69p-65f, 0x1.d2cb56p-122f, 0x1.8d4c16p-121f, 0x1.cce312p-103f,
     0x1.54a5e4p-30f, 0x1.35c61ep-100f, 0x1.3c57f8p-95f, 0.0f, 0.0f, 0.0f,
     0x1.d8589ap-123f, 0.0f, 0.0f, 0x1.465ed8p-82f, 0.0f, 0x1.e8ab0ap-123f, 0.0f,
     0x1.5be48ap-60f, 0.0f, 0.0f, 0.0f, 0x1.b5e574p-99f, 0.0f, 0x1.f2424p-106f,
     0x1.23fac6p-59f, 0.0f, 0x1.ee1032p-72f, 0x1.f713ccp-101f, 0x1.68023ep-75f, 0.0f,
     0x1.1e136cp-50f, 0.0f, 0x1.e59932p-113f, 0.0f, 0x1.687e2cp-89f, 0x1.36d994p-88f,
     0x1.ac6e94p-66f, 0.0f, 0x1.c55a34p-120f, 0x1.c695dep-86f, 0x1.59708ep-3f,
     0x1.20a72ep-25f, 0.0f, 0x1.fc0a72p-117f, 0x1.3460e8p-43f, 0.0f, 0x1.c2653p-60f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.76afa4p-89f, 0x1.02fcd8p-18f, 0x1.bbf416p-46f, 0.0f,
     0.0f, 0.0f, 0x1.e60d18p-78f, 0.0f, 0x1.7ad918p-109f, 0.0f, 0.0f, 0.0f,
     0x1.ef64ap-71f, 0.0f, 0x1.5bab02p-77f, 0.0f, 0x1.bf91eep-53f, 0x1.8633ap-41f,
     0x1.175fbap-97f, 0x1.0ad22ep-117f, 0.0f, 0x1.a1d08p-18f, 0.0f, 0.0f,
     0x1.c7ec9ep-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.39b43cp-23f,
     0x1.426f1ap-6f, 0x1.9954e6p-102f, 0.0f, 0.0f, 0.0f, 0x1.d88426p-8f,
     0x1.e1b1p-98f, 0x1.26594p-99f, 0x1.7bc262p-2f, 0.0f, 0x1.545852p-115f,
     0x1.7f2fd2p-99f, 0x1.6ab8bap-28f, 0x1.87733ep-14f, 0.0f, 0.0f, 0.0f,
     0x1.3cc0fp-73f, 0x1.7c8c8ep-92f, 0.0f, 0x1.7f60fap-111f, 0x1.f65434p-61f, 0.0f,
     0x1.f783fcp-33f, 0.0f, 0x1.2c614ep-93f, 0x1.a9fb8ep-12f, 0x1.54b44ep-66f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.39e0ecp-126f, 0.0f, 0.0f,
     0x1.fbc872p-96f, 0x1.ab7272p-74f, 0.0f, 0x1.c72278p-71f, 0x1.af4eb4p-25f, 0.0f,
     0.0f, 0.0f, 0x1.ea9a4p-30f, 0x1.b4824cp-85f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.439e9cp-13f, 0x1.660096p-34f, 0.0f, 0.0f, 0x1.c57f1ap-12f, 0.0f,
     0x1.d001aap-17f, 0.0f, 0x1.4631ccp-73f, 0x1.04e222p-2f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7b6284p-106f, 0x1.0b8fbp-85f, 0x1.e7aeb2p-53f, 0.0f, 0x1.8c1ad4p-20f,
     0x1.b8b0a2p-14f, 0x1.6485f4p-71f, 0.0f, 0x1.6879bep-98f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4749fep-95f, 0.0f, 0.0f, 0x1.a519f8p-95f, 0x1.d9f3d2p-42f, 0x1.5c510ep-88f,
     0.0f, 0x1.1fb5fp-31f, 0.0f, 0x1.0f76d4p-82f, 0.0f, 0x1.014d2p-82f,
     0x1.a2cb86p-118f, 0x1.745b34p-74f, 0x1.90b56p-70f, 0x1.cb2814p-15f,
     0x1.daeca8p-69f, 0.0f, 0x1.a32eaap-2f, 0.0f, 0x1.6beaeep-86f, 0x1.9c1752p-63f,
     0x1.2b5e66p-65f, 0x1.8fceaep-72f, 0x1.79eb06p-51f, 0x1.b45176p-3f,
     0x1.989e1ep-53f, 0x1.f6faa6p-50f, 0x1.fee07cp-58f, 0.0f, 0x1.5470b2p-8f, 0.0f,
     0.0f, 0.0f, 0x1.bc1ff8p-96f, 0x1.fc2e0cp-16f, 0.0f, 0x1.899c34p-121f,
     0x1.f15542p-90f, 0.0f, 0.0f, 0x1.195p-91f, 0.0f, 0x1.f2536cp-29f, 0.0f, 0.0f,
     0x1.179444p-1f, 0x1.d45e6ep-101f, 0x1.be3e6ap-75f, 0.0f, 0x1.be992ep-81f,
     0x1.9b4436p-112f, 0x1.af3078p-119f, 0x1.405626p-119f, 0x1.e84858p-56f,
     0x1.5202d2p-65f, 0x1.8d63f6p-54f, 0x1.fffff2p-82f, 0x1.4afb5ep-94f,
     0x1.da0dfep-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c9c4eep-68f, 0x1.a61548p-110f,
     0x1.6e1242p-36f, 0.0f, 0x1.c651a6p-34f, 0.0f, 0x1.a8ce6ap-27f, 0x1.f109f6p-59f,
     0.0f, 0x1.e62504p-10f, 0.0f, 0x1.ccacd6p-59f, 0.0f, 0x1.713416p-2f,
     0x1.14919p-37f, 0x1.96f6c6p-73f, 0x1.efb7bp-51f, 0x1.6969a2p-84f,
     0x1.905106p-87f, 0.0f, 0x1.da85dap-65f, 0x1.2ae2b8p-111f, 0x1.797aa8p-71f, 0.0f,
     0x1.41ed52p-90f, 0x1.709492p-33f, 0x1.df194ep-46f, 0x1.9bbea6p-46f,
     0x1.3b8ffep-72f, 0.0f, 0x1.2db972p-113f, 0x1.11a94ep-48f, 0x1.ecd79p-115f,
     0x1.00dd04p-92f, 0.0f, 0.0f, 0x1.5825f8p-26f, 0x1.527a38p-33f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.2b3978p-12f, 0x1.c061c6p-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bcced2p-111f,
     0x1.9724cp-70f, 0x1.72cd7ap-54f, 0x1.4c9ff4p-98f, 0x1.e5f2b6p-40f, 0.0f, 0.0f,
     0x1.c502b2p-43f, 0.0f, 0.0f, 0x1.23c24ep-3f, 0x1.b49402p-126f, 0.0f, 0.0f,
     0x1.340edp-34f, 0x1.85618ep-9f, 0x1.9d4c18p-20f, 0x1.9ff196p-38f,
     0x1.8eb9c4p-36f, 0x1.6bb002p-21f, 0x1.25391p-27f, 0x1.398088p-16f,
     0x1.e86236p-24f, 0.0f, 0x1.c74f28p-40f, 0.0f, 0.0f, 0.0f, 0x1.bf286ap-100f,
     0x1.f23fc4p-112f, 0x1.2e4164p-80f, 0.0f, 0x1.22145p-54f, 0.0f, 0.0f, 0.0f,
     0x1.157868p-16f, 0x1.245b2cp-79f, 0.0f, 0x1.72616cp-80f, 0.0f, 0x1.c86b94p-124f,
     0.0f, 0.0f, 0x1.1acf1ap-14f, 0.0f, 0x1.3f224cp-76f, 0x1.8b1124p-8f, 0.0f,
     0x1.7fac9ep-26f, 0.0f, 0x1.ce50aep-120f, 0x1.5abe48p-53f, 0.0f, 0.0f,
     0x1.ed3e1ep-90f, 0.0f, 0x1.b9641p-41f, 0.0f, 0.0f, 0x1.eda9ep-119f, 0.0f, 0.0f,
     0x1.085abep-23f, 0x1.daad66p-102f, 0.0f, 0.0f, 0.0f, 0x1.b5b8bcp-31f, 0.0f, 0.0f,
     0x1.a4ea1p-7f, 0.0f, 0x1.6076d4p-79f, 0.0f, 0.0f, 0x1.8aa528p-103f,
     0x1.e0379ep-97f, 0.0f, 0.0f, 0.0f, 0x1.4b4348p-106f, 0x1.397008p-37f, 0.0f,
     0x1.155858p-83f, 0x1.3af204p-37f, 0.0f, 0.0f, 0.0f, 0x1.3c8e98p-60f, 0.0f,
     0x1.11982cp-28f, 0x1.e73388p-108f, 0.0f, 0x1.688ebcp-46f, 0x1.3c5cccp-81f, 0.0f,
     0x1.57c74ep-48f, 0.0f, 0x1.4ae5a4p-93f, 0x1.0b8f8ep-93f, 0x1.612422p-45f, 0.0f,
     0x1.154748p-23f, 0.0f, 0x1p0f, 0.0f, 0x1.49e82p-29f, 0.0f, 0.0f, 0x1.32cd7ep-48f,
     0x1.b08cp-73f, 0x1.55827p-32f, 0x1.cfde6ap-32f, 0.0f, 0.0f, 0x1.f7327p-46f,
     0x1.cda3bcp-56f, 0.0f, 0.0f, 0x1.33b7dep-125f, 0x1.e12dcep-64f, 0.0f,
     0x1.9aee5cp-32f, 0x1.9f5308p-71f, 0.0f, 0x1.47de2ap-56f, 0x1.835012p-57f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.cd1528p-80f, 0.0f, 0x1.50ee6ap-23f, 0.0f,
     0x1.c605b8p-111f, 0.0f, 0x1.3a1aa4p-27f, 0.0f, 0x1.e8f578p-39f, 0x1.d4490ep-24f,
     0.0f, 0x1.f8aec6p-38f, 0.0f, 0.0f, 0.0f, 0x1.f68592p-54f, 0.0f, 0.0f,
     0x1.d2f0aep-10f, 0.0f, 0x1.38597p-92f, 0x1.aa1914p-93f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9e33aep-8f, 0.0f, 0x1.c9820ap-54f, 0x1.96c818p-75f, 0x1.667a92p-75f, 0.0f,
     0.0f, 0x1.0b63cap-105f, 0.0f, 0x1.355eaep-104f, 0.0f, 0.0f, 0.0f,
     0x1.9ddff2p-103f, 0.0f, 0x1.929dep-45f, 0.0f, 0.0f, 0.0f, 0x1.ec9e76p-41f, 0.0f,
     0.0f, 0.0f, 0x1.161812p-39f, 0x1.4f740ep-42f, 0.0f, 0.0f, 0x1.edef72p-110f,
     0x1.db7bp-21f, 0x1.3c751ep-101f, 0x1.881a24p-51f, 0.0f, 0.0f, 0x1.c0bd1ap-46f,
     0.0f, 0x1.396e5ep-36f, 0x1.5021a8p-5f, 0.0f, 0x1.7add6ap-14f, 0x1.598618p-84f,
     0x1.a5bf6p-64f, 0.0f, 0.0f, 0.0f, 0x1.9297d2p-87f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7bf31ap-67f, 0.0f, 0x1.12f176p-24f, 0x1.616272p-78f, 0.0f, 0x1.0c53acp-112f,
     0.0f, 0.0f, 0x1.317aaep-24f, 0.0f, 0x1.f40f5cp-15f, 0x1.fc3312p-121f,
     0x1.12fa84p-98f, 0x1.7741f2p-24f, 0x1.74b0d4p-89f, 0.0f, 0x1.773318p-113f,
     0x1p0f, 0x1.4f5694p-76f, 0.0f, 0.0f, 0x1.2c3ae6p-59f, 0x1.13737ap-97f,
     0x1.f9bed6p-50f, 0.0f, 0x1.1f4d5p-124f, 0.0f, 0x1.4beaaap-82f, 0.0f,
     0x1.8f9bc2p-100f, 0.0f, 0x1.bb77dep-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8177c6p-93f,
     0x1.955c92p-30f, 0x1.e9383ap-124f, 0.0f, 0x1.fdc28p-4f, 0x1.da1d8ap-40f,
     0x1.cfc228p-59f, 0.0f, 0x1.9c31f4p-93f, 0.0f, 0x1.b4a2aap-94f, 0.0f,
     0x1.09e7dep-34f, 0.0f, 0.0f, 0x1.c02524p-64f, 0.0f, 0.0f, 0x1.0bae4ep-121f, 0.0f,
     0.0f, 0.0f, 0x1.01628ep-73f, 0x1.fa73b8p-48f, 0.0f, 0.0f, 0x1.482e36p-99f, 0.0f,
     0x1.607ee8p-55f, 0.0f, 0.0f, 0x1.a663ap-1f, 0x1.30d6b2p-122f, 0x1.e5997ep-72f,
     0.0f, 0.0f, 0x1.1d242cp-26f, 0.0f, 0.0f, 0.0f, 0x1.19e942p-91f, 0x1.a8a098p-96f,
     0.0f, 0x1.0fd906p-41f, 0.0f, 0x1.4675bap-25f, 0x1.8166bcp-121f, 0x1.41f8cp-72f,
     0x1.3107f8p-36f, 0x1.6cceccp-103f, 0x1.ec5a84p-28f
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
            tmp1 = Sleef_cbrtf8_u10kvx(tmp0);
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
    printf("Sleef_cbrtf8_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_cbrtf8_u10kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
