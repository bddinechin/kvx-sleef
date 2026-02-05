/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_frfrexpf8_kvx.c --function Sleef_frfrexpf8_kvx \
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
     0.0f, 0.0f, 0x1.4a576ep-113f, 0.0f, 0x1.efbddap-9f, 0x1.50ca6cp-119f,
     0x1.bd2ff2p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fbcf4p-112f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.00dcc2p-51f, 0.0f, 0x1.c1f294p-2f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.012cf8p-90f, 0x1.6bda02p-92f, 0.0f, 0.0f, 0x1.858846p-4f, 0.0f, 0.0f,
     0x1.01e5bap-9f, 0.0f, 0x1.e76fc4p-68f, 0x1.fc1ccap-38f, 0.0f, 0.0f,
     0x1.ea32b2p-6f, 0.0f, 0.0f, 0x1.89e8dp-40f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.710af6p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d8cd34p-40f,
     0x1.1aa5dcp-54f, 0x1.f541ccp-76f, 0.0f, 0x1.872da2p-51f, 0x1.dc27e2p-96f, 0.0f,
     0x1.d958a2p-94f, 0x1.709f06p-23f, 0x1.886f6ap-58f, 0x1.6ed91p-114f, 0.0f,
     0x1.453d04p-4f, 0.0f, 0x1.df3f24p-17f, 0.0f, 0.0f, 0x1.2b671ep-50f, 0.0f,
     0x1.5fddeap-120f, 0.0f, 0x1.2d417p-9f, 0.0f, 0.0f, 0x1.d28414p-36f, 0.0f, 0.0f,
     0x1.40ab18p-33f, 0x1.74244ep-33f, 0.0f, 0.0f, 0x1.94a94ep-117f, 0.0f,
     0x1.ef4a82p-122f, 0.0f, 0x1.963394p-102f, 0.0f, 0x1.3bcc76p-97f, 0.0f, 0.0f,
     0x1.50123ep-87f, 0.0f, 0x1.cf164cp-72f, 0x1.e0e45ap-80f, 0x1.f93622p-8f, 0.0f,
     0.0f, 0.0f, 0x1.4114a6p-102f, 0x1.fc2fdcp-118f, 0x1.a0ed22p-33f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.f906ap-112f, 0x1.02b9d6p-48f, 0.0f,
     0x1.b4aaecp-126f, 0x1.e513cep-53f, 0x1.c421f4p-46f, 0x1.1d1532p-66f, 0.0f,
     0x1.849f9ep-76f, 0.0f, 0x1.15744cp-39f, 0x1.a3469ap-123f, 0x1.454f9p-43f,
     0x1.2d0d22p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1847f4p-121f, 0.0f, 0.0f,
     0x1.f8530ap-48f, 0.0f, 0x1.16321cp-14f, 0x1.aadcfcp-8f, 0.0f, 0x1.6e4814p-24f,
     0.0f, 0x1.db0948p-62f, 0x1.952a3ep-43f, 0x1.51321ap-29f, 0x1.f95a8ep-89f,
     0x1.5166d6p-2f, 0x1.d358dcp-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cc57e4p-59f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.cef3c6p-6f, 0x1.74bd7ep-113f, 0x1.6fdc5ap-33f,
     0x1.b91e58p-27f, 0.0f, 0.0f, 0x1.c267e6p-12f, 0x1.e664acp-83f, 0x1.e34a1ep-42f,
     0x1.ed43ecp-30f, 0x1.e5bcfp-95f, 0x1.b54bbap-34f, 0x1.6de3eap-123f, 0.0f,
     0x1.05bcecp-24f, 0.0f, 0.0f, 0.0f, 0x1.4fbd16p-113f, 0x1.d6f04cp-57f, 0.0f, 0.0f,
     0x1p0f, 0x1.876bbp-19f, 0x1.64d796p-22f, 0x1.7a116cp-78f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.80577cp-84f, 0x1.7e3fcp-101f, 0.0f, 0x1.dd90aap-30f, 0x1.2636a2p-108f,
     0x1.84ed4cp-74f, 0x1.a5f63ep-104f, 0.0f, 0x1.401a94p-34f, 0.0f, 0.0f,
     0x1.05dafep-7f, 0.0f, 0.0f, 0x1.c6280ep-86f, 0x1.8ed9f2p-112f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c3f27ep-70f, 0.0f, 0.0f, 0x1.73497p-17f, 0x1.8a6a62p-64f, 0.0f,
     0x1.1010bp-99f, 0.0f, 0x1.39988ap-36f, 0.0f, 0.0f, 0.0f, 0x1.b72f28p-56f,
     0x1.6822ccp-29f, 0x1.ad152ap-25f, 0x1.c3757ep-23f, 0x1.42ebcp-125f, 0.0f, 0.0f,
     0x1.ebf716p-54f, 0.0f, 0.0f, 0x1.e4d29ap-25f, 0x1.2344aep-55f, 0x1.3176e4p-65f,
     0.0f, 0x1.ebf1e4p-68f, 0x1.209be8p-2f, 0x1.f58088p-105f, 0x1.42bb5ap-96f, 0.0f,
     0x1.1bf08ap-34f, 0.0f, 0x1.3094e4p-117f, 0x1.fcc446p-10f, 0.0f, 0x1.82c018p-123f,
     0.0f, 0x1.becfbp-94f, 0.0f, 0x1.f08b4ap-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ae81fp-50f, 0x1.b21d1ap-13f, 0x1.b1063cp-94f, 0.0f, 0x1.348754p-52f, 0.0f,
     0.0f, 0x1.e202b8p-71f, 0.0f, 0.0f, 0x1.3a742p-3f, 0.0f, 0x1.1f8c58p-85f,
     0x1.23e374p-81f, 0x1.6146f8p-102f, 0x1.c09d86p-23f, 0.0f, 0.0f, 0x1.3fd562p-59f,
     0x1.1739bep-124f, 0.0f, 0.0f, 0x1.d9c972p-96f, 0.0f, 0x1.f7c83ap-14f, 0.0f, 0.0f,
     0x1.145a64p-38f, 0x1.905deap-33f, 0x1.1674d2p-107f, 0.0f, 0.0f, 0x1.6ebbb2p-33f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3184d2p-10f, 0.0f, 0.0f, 0.0f, 0x1.c7d4dap-31f, 0x1.f4666ap-91f,
     0x1.f08594p-83f, 0x1.52e4ecp-55f, 0x1.728a9ap-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3dec64p-105f, 0x1.33703cp-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.094946p-20f, 0.0f,
     0.0f, 0.0f, 0x1.571292p-12f, 0.0f, 0x1.480ddp-61f, 0.0f, 0x1.ffa744p-126f,
     0x1.beab9ap-26f, 0.0f, 0.0f, 0.0f, 0x1.8b883ep-51f, 0.0f, 0x1.8b18b6p-103f, 0.0f,
     0x1.54aff8p-14f, 0x1.e40c8ep-56f, 0.0f, 0.0f, 0x1.50865ep-19f, 0.0f,
     0x1.d44f16p-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ed410cp-94f, 0.0f,
     0x1.9786d4p-53f, 0.0f, 0.0f, 0x1.92361cp-36f, 0.0f, 0.0f, 0.0f, 0x1.850b76p-6f,
     0x1.4cb0a6p-91f, 0x1.b0a8eap-68f, 0x1.862928p-81f, 0x1.16db88p-74f,
     0x1.357d44p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b28dfep-22f,
     0x1.a59a54p-38f, 0.0f, 0.0f, 0.0f, 0x1.a0ab7cp-48f, 0x1.f21196p-61f, 0.0f,
     0x1.37095cp-105f, 0x1.a4ea4p-49f, 0x1.bf8574p-111f, 0.0f, 0x1.a41378p-117f,
     0x1.f180b6p-59f, 0.0f, 0x1.0b0ce6p-61f, 0x1.109df4p-108f, 0x1.58cf8ep-1f, 0.0f,
     0.0f, 0x1.9089dp-45f, 0x1.63bcf6p-27f, 0.0f, 0.0f, 0x1.f4a6dp-109f, 0.0f, 0.0f,
     0x1.7d16b2p-94f, 0x1.b81b04p-120f, 0.0f, 0.0f, 0x1.68c79ep-75f, 0.0f,
     0x1.f7acb2p-46f, 0x1.0bec32p-24f, 0x1.01513ep-51f, 0.0f, 0x1.af3d76p-90f,
     0x1.3d4d3p-74f, 0.0f, 0x1.1bcfa2p-17f, 0.0f, 0x1.35d132p-91f, 0.0f, 0.0f,
     0x1.53b5c6p-43f, 0x1.24f032p-14f, 0x1.19959ep-35f, 0x1.906ca6p-6f,
     0x1.f04178p-84f, 0x1.9585e8p-27f, 0x1.0dc42p-13f, 0.0f, 0.0f, 0x1.25c1dap-96f,
     0.0f, 0.0f, 0x1.799f7p-16f, 0.0f, 0.0f, 0.0f, 0x1.47f186p-103f, 0.0f,
     0x1.bc5edap-85f, 0x1.99e27p-62f, 0x1.cfe5a4p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.bfb89ep-35f, 0x1.30fb04p-88f, 0x1.094bdap-45f,
     0x1.1fcb1ap-114f, 0.0f, 0.0f, 0x1.757276p-102f, 0.0f, 0.0f, 0x1.6a2866p-76f,
     0.0f, 0.0f, 0.0f, 0x1.90af44p-126f, 0.0f, 0.0f, 0.0f, 0x1.cf8506p-104f,
     0x1.ff5354p-107f, 0x1.92c9cep-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3d2c86p-6f,
     0x1.159be2p-95f, 0x1.cd3408p-53f, 0x1.fd806ap-70f, 0.0f, 0x1.bd3e5ep-94f,
     0x1.7e6a18p-120f, 0.0f, 0x1.c1cc9cp-99f, 0.0f, 0.0f, 0x1.3904cep-122f, 0.0f,
     0x1.101032p-4f, 0.0f, 0.0f, 0.0f, 0x1.00466p-62f, 0x1.49894cp-125f,
     0x1.b93a58p-105f, 0x1.40f4aep-12f, 0.0f, 0x1.81bafep-77f, 0x1.91d88ep-76f, 0.0f,
     0.0f, 0x1.b89ea6p-17f, 0x1.5df09ep-54f, 0x1.15b2e6p-54f, 0.0f, 0x1.54dd2p-83f,
     0.0f, 0.0f, 0.0f, 0x1.c3067ep-72f, 0.0f, 0x1.b7eb6cp-34f, 0x1.2c22d4p-47f,
     0x1.85caa2p-45f, 0x1.75e72cp-33f, 0.0f, 0.0f, 0.0f, 0x1.5f5e34p-105f, 0.0f,
     0x1.d6a9eap-62f, 0x1.709952p-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.25b322p-122f, 0.0f,
     0.0f, 0x1.846efcp-89f, 0x1.794ad8p-82f, 0x1.b8ca8ep-75f, 0.0f, 0x1.b71fep-101f,
     0.0f, 0.0f, 0.0f, 0x1.5845b8p-28f, 0.0f, 0x1.4ff2eap-44f, 0x1.591fd4p-88f, 0.0f,
     0x1.913ce2p-96f, 0.0f, 0.0f, 0x1.16de96p-32f, 0x1.9b1228p-99f, 0x1.6797bap-115f,
     0.0f, 0.0f, 0.0f, 0x1.f17612p-87f, 0x1.2eea44p-119f, 0x1.c36774p-82f, 0.0f,
     0x1.54915ep-64f, 0x1.76c1ap-48f, 0x1.e4b0dap-74f, 0.0f, 0.0f, 0x1.b09c16p-4f,
     0.0f, 0.0f, 0x1.60a1dp-56f, 0x1.ff0ddp-105f, 0.0f, 0x1.d065ecp-105f, 0.0f,
     0x1.9a31b6p-24f, 0.0f, 0x1.b76cccp-73f, 0x1.a47858p-89f, 0.0f, 0.0f, 0.0f,
     0x1.dc633cp-18f, 0.0f, 0.0f, 0x1.1edea2p-110f, 0x1.5baffep-2f, 0.0f,
     0x1.cb5986p-4f, 0x1.c7a01ap-72f, 0.0f, 0x1.9ed0d4p-57f, 0.0f, 0x1.a54964p-50f,
     0x1.ac4b7ap-104f, 0x1.a9e298p-1f, 0x1.7ab55ep-40f, 0x1.9b2eccp-34f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.20461cp-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1f7e9cp-43f, 0.0f,
     0.0f, 0.0f, 0x1.e3ad36p-31f, 0x1.1fd0c4p-8f, 0x1.6137e6p-31f, 0x1.ae0666p-3f,
     0.0f, 0x1.44f7ap-121f, 0x1.420db4p-30f, 0x1.bafedp-8f, 0.0f, 0.0f,
     0x1.009b62p-46f, 0x1.2c47ap-87f, 0x1.7405aap-85f, 0x1.71c938p-90f,
     0x1.fcb33ep-46f, 0x1.0a1396p-99f, 0x1.ef9456p-95f, 0.0f, 0.0f, 0x1.63102ap-68f,
     0x1.a1f302p-26f, 0.0f, 0.0f, 0.0f, 0x1.9afbfcp-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.29a5eep-87f, 0.0f, 0x1.30a868p-87f, 0x1.875278p-39f, 0.0f, 0.0f,
     0x1.775aecp-121f, 0x1.883e2cp-29f, 0x1.b0d2acp-49f, 0x1.4591c4p-72f, 0.0f,
     0x1.3a72fep-72f, 0.0f, 0x1.407c62p-81f, 0x1.8cc80ap-15f, 0.0f, 0.0f, 0.0f,
     0x1.332dfp-4f, 0.0f, 0x1.3a44dap-115f, 0.0f, 0.0f, 0.0f, 0x1.43e6eep-116f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.3a7614p-55f, 0x1.9d8bf8p-104f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a0f82ap-98f, 0.0f, 0.0f, 0.0f, 0x1.251612p-60f, 0.0f, 0.0f,
     0.0f, 0x1.4f554ap-37f, 0x1.a489b4p-123f, 0x1.589a56p-73f, 0x1.b7e9dcp-32f, 0.0f,
     0x1.e2d05ep-34f, 0.0f, 0x1.931636p-19f, 0.0f, 0x1.1ade6p-52f, 0.0f,
     0x1.dd8f2cp-65f, 0.0f, 0x1.24ea6ap-67f, 0.0f, 0x1.f34134p-4f, 0.0f,
     0x1.a881eep-90f, 0.0f, 0x1.09a6dep-96f, 0x1.cd2296p-112f, 0x1.21e034p-98f, 0.0f,
     0.0f, 0x1.fd9ab2p-39f, 0x1.af985p-119f, 0.0f, 0.0f, 0x1.ac9d32p-58f,
     0x1.8d0748p-106f, 0x1.93df1ap-104f, 0.0f, 0.0f, 0.0f, 0x1.b6c93ep-53f, 0x1p0f,
     0.0f, 0x1.50f68ap-82f, 0.0f, 0x1.97b42p-28f, 0.0f, 0x1.d3d74p-98f,
     0x1.c05c6ap-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.96f49p-22f, 0.0f, 0x1.a1f316p-47f,
     0.0f, 0x1.551b5ap-113f, 0.0f, 0.0f, 0x1.1149p-83f, 0.0f, 0x1.e4bda8p-53f,
     0x1.32d67p-18f, 0.0f, 0x1.a1f9cp-49f, 0x1.611d4ap-119f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.836524p-85f, 0x1.538fecp-5f, 0.0f, 0x1.69a61cp-111f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fe8f6cp-109f, 0.0f, 0x1.8de614p-68f, 0.0f, 0.0f, 0.0f, 0x1.620f4p-107f,
     0x1.6b3f1cp-106f, 0.0f, 0.0f, 0x1.183b14p-54f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f7a418p-76f, 0x1.abe63cp-65f, 0x1.9a3p-54f, 0.0f, 0.0f, 0x1.6c881cp-98f,
     0.0f, 0.0f, 0.0f, 0x1.f6356ep-123f, 0x1.410c32p-105f, 0x1.ff8b62p-93f, 0.0f,
     0x1.25b9a6p-83f, 0x1.6f8bb2p-86f, 0x1.e40a12p-94f, 0.0f, 0.0f, 0x1.71beb8p-82f,
     0x1.e20cc2p-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5e62c8p-34f,
     0x1.7a1578p-122f, 0x1.83bee4p-107f, 0.0f, 0x1.27e084p-125f, 0.0f,
     0x1.8f733cp-26f, 0.0f, 0x1.2fd6fp-94f, 0.0f, 0.0f, 0.0f, 0x1.09ea4p-100f,
     0x1.193da2p-7f, 0.0f, 0.0f, 0.0f, 0x1.064192p-37f, 0.0f, 0x1.282888p-20f, 0.0f,
     0x1.843c68p-108f, 0x1.9d9b3ap-49f, 0x1.246fc4p-8f, 0x1.d8a824p-8f,
     0x1.9f8726p-114f, 0.0f, 0.0f, 0x1.447b7p-90f, 0x1.c0535cp-90f, 0x1.28b606p-8f,
     0.0f, 0x1.5b64b6p-89f, 0x1.46096ep-50f, 0.0f, 0x1.2f0436p-3f, 0x1.bba318p-122f,
     0x1.8e096ep-66f, 0x1.4f36f6p-46f, 0x1.ba045cp-90f, 0.0f, 0.0f, 0.0f,
     0x1.87e9e4p-46f, 0.0f, 0x1.4b6348p-80f, 0x1.abadfp-126f, 0.0f, 0x1.e5f562p-77f,
     0.0f, 0x1.8e61c2p-28f, 0x1.6f0e5ap-92f, 0.0f, 0x1.3f32fap-46f, 0.0f, 0.0f, 0.0f,
     0x1.84bdf4p-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c926acp-120f,
     0x1.4a2d9p-61f, 0x1.70d854p-1f, 0.0f, 0x1.ddb81ep-58f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e7d80cp-20f, 0x1.2dd22ap-96f, 0x1.a52d0cp-31f, 0.0f, 0.0f,
     0x1.148c3ap-51f, 0x1.f3f6c4p-36f, 0x1.66ec6ap-18f, 0x1.39819p-72f,
     0x1.9d48bep-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.00ae8ep-18f, 0x1.6cec26p-108f, 0.0f,
     0x1.69b7c6p-99f, 0x1.74794ap-13f, 0x1.9401ccp-105f, 0x1.4e30ep-125f, 0.0f,
     0x1.6289c6p-89f, 0x1.f404f2p-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a36a66p-119f, 0.0f,
     0.0f, 0x1.faf658p-125f, 0x1.de99dep-112f, 0.0f, 0.0f, 0.0f, 0x1.1077d8p-74f,
     0.0f, 0x1.9457fap-13f, 0x1.eaf3bap-28f, 0.0f, 0x1.2d86bcp-14f, 0.0f,
     0x1.65052cp-53f, 0x1.66a734p-8f, 0.0f, 0x1.1a4d4ep-115f, 0x1.6bdf22p-38f,
     0x1.a7e66ap-119f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.7d92bcp-87f, 0x1.86cd0ap-78f,
     0x1.f1f114p-112f, 0x1.a7e2p-108f, 0.0f, 0x1.cc03bep-80f, 0x1.941e8ep-4f, 0.0f,
     0x1.7ae8dep-75f, 0x1.82fe74p-47f, 0x1.da1d1ap-12f, 0.0f, 0.0f, 0x1.0973eep-84f,
     0x1.b219a4p-120f, 0x1.a3dc56p-4f, 0x1.36b9ep-9f, 0.0f, 0.0f, 0x1.fbf11cp-71f,
     0x1.94c58ep-105f, 0.0f, 0.0f, 0.0f, 0x1.7a743ap-107f, 0x1.f5c7b2p-104f,
     0x1.7200b6p-100f, 0x1.7e5a0cp-42f, 0.0f, 0.0f, 0x1.4732ecp-60f, 0.0f, 0.0f, 0.0f,
     0x1.33627cp-21f, 0x1.42f008p-57f, 0.0f, 0x1.7097b4p-47f, 0x1.e1aaecp-125f,
     0x1.66e12ap-103f, 0x1.436644p-121f, 0x1.ed8d0ap-62f, 0.0f, 0x1.2dc424p-106f,
     0x1.083bdap-26f, 0.0f, 0.0f, 0x1.1a4386p-78f, 0x1.edb4ccp-4f, 0.0f,
     0x1.7956cep-46f, 0x1.c01908p-99f, 0.0f, 0.0f, 0x1.424fe2p-88f, 0x1.931f0ep-58f,
     0x1.2a3ff2p-33f, 0x1.0a5eb6p-17f, 0x1.1a0a1ep-119f, 0.0f, 0x1.8ea3e8p-37f,
     0x1.989538p-103f, 0x1.be1c34p-83f, 0.0f, 0.0f, 0x1.f5473ap-75f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e13c6cp-116f, 0.0f, 0.0f, 0x1.f61cccp-74f, 0x1.1a5c06p-33f,
     0x1.45c6ep-3f, 0.0f, 0.0f, 0x1.b83382p-5f, 0x1.76f88cp-60f, 0.0f,
     0x1.668e3cp-97f, 0x1.77448cp-93f, 0x1.e6ac0ap-67f, 0x1.43e67ep-47f, 0.0f,
     0x1.9e256ep-47f, 0.0f, 0.0f, 0x1.fe4dd2p-82f, 0x1.bdc312p-84f, 0x1.6f52f4p-106f,
     0x1.d6a308p-27f, 0x1.6989a6p-17f
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
            tmp1 = Sleef_frfrexpf8_kvx(tmp0);
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
    printf("Sleef_frfrexpf8_kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_frfrexpf8_kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
