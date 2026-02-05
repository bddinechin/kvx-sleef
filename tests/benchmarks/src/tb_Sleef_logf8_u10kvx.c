/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_logf8_u10kvx.c --function Sleef_logf8_u10kvx --headers \
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
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.98c29ep-124f, 0x1.a39988p-87f,
     0x1.ad8cbp-91f, 0x1.e94dp-36f, 0.0f, 0x1.87ab34p-120f, 0x1.cdfe56p-84f,
     0x1.d9c35ap-100f, 0.0f, 0x1.2a6608p-29f, 0.0f, 0.0f, 0.0f, 0x1.0619f2p-117f,
     0x1.2a7d6cp-24f, 0x1.a6e37ap-109f, 0x1.311e62p-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f22466p-89f, 0x1.17d0bcp-95f, 0x1p0f, 0x1.b0f71p-115f, 0x1.2f2d2p-51f,
     0.0f, 0x1.e4e1bcp-16f, 0.0f, 0x1.3889a2p-72f, 0x1.765a3cp-4f, 0x1.563312p-48f,
     0x1.fdf4bep-36f, 0.0f, 0.0f, 0x1.1b3dbap-13f, 0x1.6e0cdap-41f, 0x1.380b38p-76f,
     0x1.606a26p-81f, 0x1.17e2b2p-35f, 0.0f, 0x1.2b535ap-27f, 0x1.101bdp-13f, 0.0f,
     0x1.d89b06p-62f, 0.0f, 0.0f, 0.0f, 0x1.4666dcp-90f, 0.0f, 0x1.159bbep-98f,
     0x1.ad551ep-71f, 0.0f, 0x1.b6afdap-93f, 0.0f, 0x1.c89162p-111f, 0x1.6f03fap-42f,
     0.0f, 0.0f, 0x1.6343eep-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.366938p-72f, 0.0f,
     0x1.775816p-29f, 0.0f, 0x1.063b8p-116f, 0.0f, 0.0f, 0x1.610704p-29f,
     0x1.88c35p-92f, 0x1.d86138p-54f, 0.0f, 0x1.c2a45ep-26f, 0.0f, 0.0f,
     0x1.8883cep-9f, 0.0f, 0.0f, 0x1.79838ep-98f, 0.0f, 0.0f, 0x1.7af33ep-93f, 0.0f,
     0x1.8d14f2p-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a9fbc8p-32f, 0x1.7a4baap-35f,
     0.0f, 0x1.4b6dfp-4f, 0x1.965662p-100f, 0.0f, 0x1.8ae8ccp-109f, 0x1.7ecadep-20f,
     0.0f, 0x1.033f6ap-26f, 0x1.f5e91ap-119f, 0x1.d45b4p-11f, 0.0f, 0x1.a10d1ep-9f,
     0x1.c1e0c8p-9f, 0x1.24a838p-90f, 0.0f, 0x1.fd0f2ep-77f, 0x1.14bb18p-117f, 0.0f,
     0.0f, 0x1.7fed5ep-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.91f1aep-46f, 0x1.04426p-73f,
     0x1.68b952p-109f, 0.0f, 0x1.7168eap-117f, 0x1.e851ecp-36f, 0x1.d9e8c6p-15f, 0.0f,
     0.0f, 0.0f, 0x1.a42b14p-84f, 0x1.ba586ep-15f, 0.0f, 0x1.86f422p-39f, 0.0f,
     0x1.dd08e2p-6f, 0x1.b9df1ep-17f, 0x1.a6b1dap-75f, 0.0f, 0x1.b164e8p-92f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.7327dp-108f, 0x1.cd8e72p-18f, 0.0f, 0x1.1fb554p-14f,
     0x1.49cfe6p-22f, 0x1.64fb7cp-92f, 0x1p0f, 0.0f, 0x1.a64cccp-29f, 0.0f,
     0x1.84ddccp-81f, 0.0f, 0.0f, 0.0f, 0x1.f8cbe8p-103f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.bc902ap-73f, 0x1.effa28p-115f, 0.0f, 0x1.19a898p-22f, 0x1.f01866p-32f,
     0x1.b7c7a2p-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.34476ap-86f, 0.0f,
     0x1.6742f4p-58f, 0x1.d352f6p-58f, 0.0f, 0x1.45b5ap-96f, 0x1.d9c44ep-125f, 0.0f,
     0.0f, 0.0f, 0x1.3d8a52p-81f, 0x1.30de6ep-103f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cda094p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a9e0ccp-86f, 0x1.ff25c6p-94f,
     0.0f, 0.0f, 0.0f, 0x1.4a2f8ap-101f, 0x1.9c30dp-111f, 0.0f, 0.0f, 0x1.0e173ap-78f,
     0x1.49eef8p-75f, 0x1.4cf222p-56f, 0.0f, 0.0f, 0x1.c4b08ap-77f, 0.0f, 0.0f,
     0x1.8dd648p-88f, 0.0f, 0.0f, 0.0f, 0x1.51f55ap-56f, 0x1.dfcd48p-32f,
     0x1.926e9p-5f, 0x1.59fc16p-104f, 0x1.ef3fdap-37f, 0x1.b1d3c6p-90f, 0.0f, 0.0f,
     0.0f, 0x1.3c061ap-121f, 0.0f, 0x1.d834dap-43f, 0x1.009f7ep-83f, 0x1.cd95acp-98f,
     0.0f, 0.0f, 0x1.ab258ep-86f, 0.0f, 0x1.b49618p-114f, 0.0f, 0x1.2c63fap-46f, 0.0f,
     0.0f, 0x1.fb6bf4p-68f, 0.0f, 0.0f, 0x1.7009c6p-28f, 0x1.aaba22p-76f,
     0x1.cc081p-6f, 0x1.034074p-126f, 0.0f, 0x1.c1270ep-43f, 0.0f, 0x1.e4d738p-105f,
     0x1.7ac9e6p-13f, 0x1.61f3aap-11f, 0x1.ac4b64p-16f, 0.0f, 0x1.661656p-97f,
     0x1.64eef2p-100f, 0.0f, 0x1.42fec2p-47f, 0x1.93c508p-39f, 0.0f, 0.0f,
     0x1.b4247p-47f, 0x1.f27f56p-121f, 0x1.48b694p-2f, 0.0f, 0x1.67390ep-63f, 0.0f,
     0.0f, 0x1.79fa5cp-85f, 0x1.5a14b8p-126f, 0x1.a6185p-55f, 0x1.244a3ep-97f,
     0x1.52d672p-87f, 0.0f, 0x1.62fe12p-107f, 0.0f, 0x1.0cb32p-13f, 0x1.74d7d6p-12f,
     0.0f, 0.0f, 0x1.95010cp-94f, 0x1.e88dcap-75f, 0.0f, 0x1.25cd46p-15f,
     0x1.e3c902p-23f, 0x1.f6ca9ep-95f, 0.0f, 0x1.69c64ep-65f, 0.0f, 0.0f,
     0x1.2358fep-12f, 0.0f, 0.0f, 0x1.f2864p-44f, 0.0f, 0x1.3cbd16p-33f, 0.0f,
     0x1.d2312ep-25f, 0x1.2fd08ap-100f, 0x1.be23dcp-14f, 0x1.0ea532p-79f, 0.0f,
     0x1.4f835p-104f, 0x1.98794p-76f, 0.0f, 0.0f, 0x1.64d3bep-44f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b38396p-74f, 0.0f, 0.0f,
     0x1.64e364p-8f, 0.0f, 0.0f, 0.0f, 0x1.546a96p-11f, 0.0f, 0x1.a35ffep-118f,
     0x1.701956p-27f, 0x1.abcdb8p-18f, 0.0f, 0.0f, 0x1.b51286p-71f, 0x1.44aef8p-99f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.0a073ep-85f, 0x1.ffad4cp-59f, 0x1.74d43p-94f,
     0x1.0b1a4cp-11f, 0x1.be883ep-70f, 0x1.4d5466p-68f, 0x1.547c78p-62f,
     0x1.0e1036p-111f, 0x1.d7fdaep-8f, 0.0f, 0x1.e550e6p-83f, 0.0f, 0.0f,
     0x1.7f7fc2p-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e63c6ep-109f, 0x1.ff49cp-76f,
     0x1.96412p-107f, 0x1.0c5f02p-122f, 0x1.7d68cep-22f, 0x1.3aa274p-72f, 0.0f, 0.0f,
     0.0f, 0x1.f4b09cp-111f, 0.0f, 0.0f, 0x1.af1ea2p-32f, 0x1.d63968p-33f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b9e59ep-30f, 0x1.1b15cap-94f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.0746fp-40f, 0.0f, 0.0f, 0.0f, 0x1.cacf4ep-106f, 0.0f, 0x1.f9f64cp-106f,
     0.0f, 0x1.77a30cp-38f, 0.0f, 0.0f, 0x1.6ab67cp-73f, 0.0f, 0.0f, 0.0f,
     0x1.acec08p-29f, 0.0f, 0.0f, 0x1.bae5ap-18f, 0x1.0b0a32p-71f, 0x1p0f, 0.0f,
     0x1.6620dcp-125f, 0.0f, 0.0f, 0x1.827c36p-118f, 0.0f, 0.0f, 0x1.dde49cp-57f,
     0x1.db379p-9f, 0.0f, 0x1.e232f8p-125f, 0.0f, 0.0f, 0x1.719836p-109f,
     0x1.5339b4p-52f, 0x1.69bf56p-18f, 0x1.a9a1e2p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c1aa18p-93f, 0x1.fe6646p-97f, 0.0f, 0x1.fbc0ecp-113f, 0x1.eed55cp-117f,
     0.0f, 0x1.9d3c14p-23f, 0x1.6fad18p-78f, 0x1.d23128p-93f, 0x1.42be42p-52f,
     0x1.e38564p-68f, 0x1.7e6cap-71f, 0.0f, 0x1.387772p-68f, 0x1.de3a68p-76f,
     0x1.1c0714p-54f, 0.0f, 0x1.1f0afep-53f, 0x1.ff5c0ap-110f, 0.0f, 0x1.be71ecp-4f,
     0x1.591766p-26f, 0x1.612e9p-54f, 0x1.ebfdc6p-66f, 0x1.ba1c66p-55f, 0.0f,
     0x1.9ed04p-51f, 0x1.ab1248p-107f, 0x1.b2bff4p-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0b2e2cp-47f, 0x1.25227cp-80f, 0x1.a253ecp-13f, 0.0f, 0x1.e9782p-124f, 0.0f,
     0x1.ff18dep-26f, 0.0f, 0.0f, 0x1.65ebaep-123f, 0x1.94a7c6p-46f, 0x1.249c5cp-64f,
     0x1.939774p-2f, 0.0f, 0x1.3c6a54p-5f, 0.0f, 0.0f, 0.0f, 0x1.fa3b08p-125f, 0.0f,
     0x1.e863fap-104f, 0.0f, 0x1.002abap-42f, 0.0f, 0x1.27325ep-79f, 0.0f, 0.0f,
     0x1.585ee4p-18f, 0.0f, 0x1.570252p-57f, 0x1.23af82p-74f, 0.0f, 0.0f,
     0x1.0cd702p-111f, 0x1.f376ccp-18f, 0x1.69bb26p-62f, 0.0f, 0x1.0ada5ap-6f, 0.0f,
     0.0f, 0x1.20ec96p-76f, 0.0f, 0.0f, 0x1.2a782ap-58f, 0.0f, 0x1.4d9478p-119f, 0.0f,
     0x1.05b62p-47f, 0.0f, 0.0f, 0x1.25cd1ap-38f, 0x1.9e3dd2p-6f, 0.0f, 0.0f,
     0x1.dfc6eap-57f, 0.0f, 0.0f, 0x1.2d6d46p-16f, 0x1.b348a6p-14f, 0x1.b373a8p-107f,
     0x1.9b5968p-2f, 0.0f, 0x1.bfff28p-29f, 0.0f, 0x1.7429eep-69f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.db27b8p-66f, 0.0f, 0.0f, 0.0f, 0x1.304a3ep-97f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.390fep-68f, 0x1.1e4b8ep-28f, 0x1.d95f7cp-20f, 0x1.5a0226p-56f,
     0x1.9845e6p-16f, 0x1.f0b296p-93f, 0.0f, 0x1.d7ea32p-117f, 0x1.47d1e2p-35f,
     0x1.4ad282p-62f, 0x1.0f24dcp-32f, 0.0f, 0.0f, 0.0f, 0x1.2c0c06p-63f,
     0x1.95b01p-35f, 0x1.f5462p-26f, 0x1.db980ap-45f, 0.0f, 0x1.1778c2p-8f, 0.0f,
     0.0f, 0x1.52fe92p-103f, 0x1.b5af54p-14f, 0.0f, 0x1.2cf358p-78f, 0x1.50a9a4p-99f,
     0.0f, 0.0f, 0x1.9e86f4p-19f, 0.0f, 0x1.9bd424p-124f, 0x1.fc517ap-100f, 0.0f,
     0.0f, 0.0f, 0x1.95d11ap-47f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f,
     0x1.8c3bfcp-89f, 0x1.030722p-49f, 0.0f, 0x1.bd8574p-57f, 0x1.f699c6p-21f,
     0x1.6e521ep-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.90d97ap-10f, 0x1.b9263ep-53f,
     0x1.b9cc3ap-13f, 0x1.1a9b26p-66f, 0.0f, 0.0f, 0x1.1bc88cp-91f, 0.0f,
     0x1.d0208ep-72f, 0.0f, 0x1.ae6deap-80f, 0.0f, 0x1.9d1768p-108f, 0x1.88c7eap-28f,
     0.0f, 0x1.c2b59ep-40f, 0x1.23de64p-31f, 0x1.ba2cap-112f, 0x1.fad24ap-7f, 0.0f,
     0.0f, 0.0f, 0x1.44cd3p-17f, 0x1.f39208p-119f, 0x1.c26e74p-6f, 0.0f,
     0x1.a57034p-113f, 0x1.01115p-24f, 0x1.1697f8p-81f, 0.0f, 0x1.a0990ap-88f, 0x1p0f,
     0.0f, 0x1.3600eep-110f, 0x1.608718p-8f, 0x1.514326p-49f, 0x1.caf62ap-20f, 0.0f,
     0x1.b67de6p-109f, 0.0f, 0x1.77dd42p-21f, 0.0f, 0.0f, 0x1.fcba82p-31f,
     0x1.42d07p-99f, 0x1.88d43p-11f, 0x1.815206p-42f, 0.0f, 0x1.b49b6cp-85f,
     0x1.0a3ef2p-93f, 0x1.f48e84p-30f, 0.0f, 0x1.9f6eb4p-1f, 0x1.766106p-125f, 0.0f,
     0x1.c597dcp-57f, 0x1.6302a2p-13f, 0.0f, 0x1.aefd32p-81f, 0x1.fc49fp-70f,
     0x1.3c1fd6p-113f, 0.0f, 0x1.85b8aep-19f, 0x1.dc1768p-101f, 0x1.77e1cep-53f,
     0x1.c27694p-70f, 0x1.54e954p-7f, 0x1.34fe92p-18f, 0.0f, 0x1.3c0816p-2f,
     0x1.766fa8p-36f, 0x1.99a262p-67f, 0x1.2029b8p-92f, 0x1.7bceccp-31f,
     0x1.d076a6p-4f, 0.0f, 0x1.ccb0d8p-125f, 0.0f, 0.0f, 0.0f, 0x1.caa16ep-5f,
     0x1.416f46p-52f, 0.0f, 0.0f, 0x1.8ae43ap-95f, 0.0f, 0.0f, 0.0f, 0x1.2690dcp-14f,
     0.0f, 0x1.17b05p-4f, 0x1.013b6ep-13f, 0.0f, 0x1.1d79dp-83f, 0x1.f18f68p-101f,
     0.0f, 0.0f, 0x1.046268p-75f, 0.0f, 0x1.c838dp-4f, 0x1.95554ap-69f,
     0x1.5d893ap-51f, 0x1.373106p-125f, 0x1.0d1a54p-33f, 0.0f, 0x1.6771bcp-22f,
     0x1.e71fc6p-88f, 0.0f, 0.0f, 0.0f, 0x1.5f7b7ep-7f, 0x1.7e5836p-21f,
     0x1.8a0a0cp-20f, 0.0f, 0.0f, 0x1.cbc608p-18f, 0.0f, 0.0f, 0x1.4a5cdp-67f,
     0x1.d88f78p-62f, 0x1.2c9eb6p-124f, 0.0f, 0.0f, 0.0f, 0x1.066ca4p-108f,
     0x1.f01176p-21f, 0.0f, 0.0f, 0x1.c529c6p-1f, 0.0f, 0x1.d100ep-5f, 0.0f, 0.0f,
     0x1.62cee4p-103f, 0x1.3628d6p-7f, 0.0f, 0.0f, 0.0f, 0x1.de356ap-120f, 0.0f, 0.0f,
     0.0f, 0x1.3b3858p-80f, 0.0f, 0x1.d08c9cp-42f, 0.0f, 0.0f, 0x1.f4b06ep-33f, 0.0f,
     0.0f, 0x1.a77c8p-15f, 0.0f, 0.0f, 0x1.8daf7ap-118f, 0x1.80ed7ep-13f, 0.0f, 0.0f,
     0x1.69485p-119f, 0x1.d38f1ap-124f, 0.0f, 0x1.141a7ap-94f, 0.0f, 0.0f,
     0x1.433914p-25f, 0.0f, 0x1.74c6dap-5f, 0.0f, 0x1.8455d8p-26f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.8ff5f4p-19f, 0x1.b84e3p-59f, 0x1.4eab9ap-24f, 0x1.7bda6p-13f,
     0x1.d492ecp-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7f907p-85f, 0x1.639388p-98f,
     0x1.832e54p-75f, 0.0f, 0.0f, 0x1.f34a84p-27f, 0x1.79972p-103f, 0x1.beaf06p-24f,
     0x1.724c64p-62f, 0.0f, 0x1.78de62p-103f, 0.0f, 0x1.51dfa2p-102f, 0x1.bb9c16p-63f,
     0x1.b1add4p-98f, 0x1.7ac0b4p-95f, 0x1.95de16p-115f, 0.0f, 0x1.417bc2p-8f,
     0x1.901c6p-4f, 0.0f, 0.0f, 0x1.ffc8fep-83f, 0.0f, 0x1.373308p-44f, 0.0f, 0.0f,
     0x1.4d98f8p-41f, 0x1.5ca542p-4f, 0x1.283ceap-125f, 0.0f, 0.0f, 0x1.048934p-39f,
     0.0f, 0x1.c97166p-2f, 0x1.1b7d8p-50f, 0x1.f0ffcap-74f, 0x1.694bd6p-101f,
     0x1.ac22e2p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.819c56p-86f,
     0x1.048f74p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4a45dap-76f,
     0x1.1a804cp-110f, 0x1.767b24p-76f, 0.0f, 0x1.97eb46p-109f, 0x1.d20936p-96f,
     0x1.a7c5ap-70f, 0x1.c16336p-90f, 0x1.d23abcp-46f, 0x1.ef599ep-40f, 0.0f,
     0x1.808212p-100f, 0.0f, 0x1.c8b2ecp-83f, 0x1.469d92p-21f, 0.0f, 0x1.d7d0d8p-68f,
     0.0f, 0x1.2eb034p-28f, 0x1.807cp-50f, 0.0f, 0.0f, 0x1.3811b6p-5f, 0.0f,
     0x1.bed22ep-86f, 0.0f, 0.0f, 0x1.54349ap-22f, 0.0f, 0.0f, 0.0f, 0x1.3d9dbap-80f,
     0x1.b247bap-4f, 0x1.4d28c2p-76f, 0.0f, 0x1.be8b02p-42f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.3dcd82p-59f, 0x1.75ab42p-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.41dac6p-75f,
     0x1.a7640ep-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.28444ep-126f, 0.0f, 0x1.1c9c3ap-8f,
     0x1.17b418p-38f, 0x1.2bc5f4p-26f, 0.0f, 0x1.a70128p-45f, 0x1.1335b2p-7f,
     0x1.d926d8p-1f, 0.0f, 0x1.0b4858p-126f, 0x1.222ab6p-87f, 0x1.1fc398p-68f,
     0x1.e668cep-63f, 0x1.d44824p-93f, 0.0f, 0.0f, 0x1.1a0facp-49f, 0x1.ec2886p-42f,
     0x1.6849c4p-113f, 0x1.9f910ap-79f, 0.0f, 0x1.538a2ap-3f, 0.0f, 0x1p0f,
     0x1.a6e772p-23f, 0x1.b7cf62p-68f, 0.0f, 0x1.28cbdep-9f, 0.0f, 0x1.f28d6p-55f,
     0.0f, 0.0f, 0x1.a01914p-116f, 0x1.8a4db8p-122f, 0x1.b5eff2p-48f, 0x1.23b1bp-12f,
     0x1.e33528p-57f, 0.0f, 0.0f, 0x1.8cbffep-75f, 0.0f, 0x1p0f, 0x1.8c8996p-6f, 0.0f,
     0.0f, 0x1.4ee34ep-37f, 0.0f, 0.0f, 0x1.ee92ap-31f, 0.0f, 0x1.89aep-117f, 0.0f,
     0.0f, 0x1.96d53ep-44f, 0.0f, 0x1.92ab78p-79f, 0x1.a8feap-105f, 0.0f, 0.0f, 0.0f,
     0x1.113a04p-102f, 0x1.f1570cp-99f, 0x1.d06ab2p-103f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.833fc6p-65f, 0.0f, 0.0f, 0.0f, 0x1.584cp-101f, 0x1.f891c4p-58f,
     0.0f, 0.0f, 0x1.70b77cp-77f, 0x1.7bc07p-9f, 0x1.c507dap-120f, 0.0f, 0.0f,
     0x1.73fb8ap-67f, 0x1.1c3e1p-41f, 0x1.30f374p-37f, 0.0f, 0.0f, 0x1.29a9d4p-16f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a353f2p-121f, 0.0f,
     0x1.5f54a2p-11f, 0x1p0f, 0x1.479f6ap-34f, 0x1.67efa6p-70f, 0x1.5ab6d6p-111f,
     0x1.9972c6p-59f, 0.0f, 0.0f, 0x1.2be89p-47f, 0x1.18a22ap-52f, 0x1.a05fdep-62f,
     0x1.d795acp-119f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.296312p-98f
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
            tmp1 = Sleef_logf8_u10kvx(tmp0);
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
    printf("Sleef_logf8_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_logf8_u10kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
