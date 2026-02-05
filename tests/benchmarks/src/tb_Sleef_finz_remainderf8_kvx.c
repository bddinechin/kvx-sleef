/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_remainderf8_kvx.c --function \
 *     Sleef_finz_remainderf8_kvx --arity 2 --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary32,binary32 \
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
     0.0f, 0.0f, 0x1.d8d1d8p-28f, 0x1.5ab854p-38f, 0.0f, 0.0f, 0.0f, 0x1.ea70ecp-97f,
     0.0f, 0x1.445e3p-28f, 0x1.df0538p-111f, 0x1.1ebc3p-90f, 0.0f, 0x1.85c9cep-74f,
     0x1.ee45fcp-17f, 0x1.bd5034p-39f, 0x1.354c5cp-1f, 0x1.06a642p-90f,
     0x1.36df8ep-70f, 0x1.e54b68p-86f, 0.0f, 0x1.0b1fa2p-2f, 0x1.644d76p-121f,
     0x1.b4e7fep-100f, 0x1.25abeap-11f, 0x1.78f6d2p-51f, 0x1.6725ap-124f,
     0x1.c6caaap-52f, 0.0f, 0.0f, 0x1.be4d2ep-27f, 0x1.25d44ap-83f, 0.0f,
     0x1.3e7f1cp-38f, 0x1.01b786p-87f, 0x1.de2368p-60f, 0x1.56294ap-92f, 0.0f, 0.0f,
     0x1.9c5716p-51f, 0x1.f7b874p-20f, 0.0f, 0x1.6a7b68p-99f, 0x1.4d9634p-30f,
     0x1.ae96bp-115f, 0.0f, 0x1.ea510ep-65f, 0x1.94093cp-36f, 0.0f, 0x1.24c918p-61f,
     0.0f, 0x1.4e996cp-56f, 0x1.ed8f4ep-73f, 0x1.cf93ap-83f, 0x1.6176fap-57f, 0.0f,
     0.0f, 0.0f, 0x1.f29d1p-111f, 0x1.4bc894p-68f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d56918p-109f, 0.0f, 0x1.d024d8p-106f, 0x1.895c2cp-9f, 0x1.d2f0eap-17f,
     0x1.06f2b6p-48f, 0x1.a8c394p-8f, 0x1.9ea66ap-8f, 0x1.1ed7ccp-107f, 0.0f, 0.0f,
     0x1.c0e63ep-72f, 0x1.95cf5cp-13f, 0.0f, 0.0f, 0x1.1c4272p-55f, 0.0f, 0.0f,
     0x1.bf5acp-117f, 0.0f, 0.0f, 0x1.90b71p-24f, 0x1.527c38p-45f, 0x1.304c74p-95f,
     0x1.5f158ap-78f, 0.0f, 0.0f, 0x1.88981cp-103f, 0x1.09170ep-94f, 0x1.27499ep-26f,
     0x1.111154p-62f, 0.0f, 0.0f, 0x1.9ce3e2p-59f, 0x1.ac0e04p-64f, 0.0f, 0.0f,
     0x1.2d88aep-5f, 0x1.5e2c0ap-89f, 0x1.37c8ep-93f, 0x1.9ffefep-23f,
     0x1.b05c5ap-15f, 0.0f, 0x1.a146cep-30f, 0x1.8c0e84p-21f, 0x1.3b3dbap-10f,
     0x1.7cc9b8p-65f, 0.0f, 0x1.c3e75p-25f, 0x1.d862cp-67f, 0x1.eb6c88p-40f,
     0x1.5c5cb6p-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.619b7ap-24f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e9a106p-4f, 0.0f, 0.0f, 0x1.2d0aa2p-73f, 0.0f, 0x1.e242cap-11f, 0.0f,
     0x1.84957cp-58f, 0x1.61cddep-111f, 0x1.793e9ap-31f, 0.0f, 0x1.5a17fcp-57f, 0.0f,
     0x1.9aec0ep-1f, 0x1.96ec6ap-64f, 0x1.85a06ap-109f, 0.0f, 0x1.1d3b08p-59f, 0.0f,
     0x1.c68beap-5f, 0x1.8004ap-105f, 0x1.e83dfp-34f, 0x1.4190c2p-123f, 0.0f,
     0x1.be75dep-80f, 0.0f, 0.0f, 0x1.6ca42ep-122f, 0.0f, 0x1.8b7a38p-31f,
     0x1.840b1ap-83f, 0x1.ddf2aep-25f, 0.0f, 0x1.bd1864p-73f, 0.0f, 0.0f,
     0x1.8daa94p-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e3ea72p-92f, 0.0f,
     0.0f, 0x1.28f8c6p-46f, 0x1.c39d26p-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e9db4cp-118f,
     0.0f, 0x1.240454p-82f, 0.0f, 0.0f, 0x1.682f68p-75f, 0.0f, 0x1.d88472p-15f,
     0x1.2555a6p-25f, 0x1.d7b766p-99f, 0x1.bc6d48p-71f, 0.0f, 0x1.d3759ep-117f,
     0x1.ca86eap-75f, 0.0f, 0.0f, 0.0f, 0x1.7fe1aep-103f, 0x1.9ee162p-78f, 0.0f, 0.0f,
     0.0f, 0x1.dc080ep-96f, 0.0f, 0x1.08f8ccp-77f, 0.0f, 0.0f, 0x1.9dd8fp-72f,
     0x1.c3532ep-102f, 0x1.f89074p-97f, 0x1.bc2b44p-21f, 0.0f, 0.0f, 0x1.7ea0a2p-15f,
     0x1.4f5f72p-78f, 0x1.212f3ep-9f, 0.0f, 0x1.a55cc6p-61f, 0x1.acb5c8p-70f, 0.0f,
     0.0f, 0x1.0e3654p-30f, 0x1.507a04p-34f, 0.0f, 0.0f, 0.0f, 0x1.b2cdc6p-45f,
     0x1.f1d6d6p-73f, 0.0f, 0.0f, 0x1.646c76p-6f, 0x1.845518p-19f, 0x1.515b8cp-61f,
     0x1.b52ff2p-39f, 0x1.f8f5e4p-22f, 0x1.13a028p-30f, 0x1.0fc28ap-21f, 0.0f, 0.0f,
     0.0f, 0x1.c4564ep-15f, 0x1.2f2eeap-27f, 0x1.257d6ep-25f, 0x1p0f, 0x1.a4c166p-82f,
     0x1.5dab2p-110f, 0x1.ff18a4p-57f, 0x1.9017f6p-107f, 0x1.b1e57p-113f,
     0x1.bc9b74p-40f, 0x1.4c81b2p-92f, 0.0f, 0x1.3b1df6p-93f, 0.0f, 0x1.ae8p-112f,
     0.0f, 0.0f, 0.0f, 0x1.6371acp-22f, 0x1.c927f6p-70f, 0.0f, 0x1.bbad0cp-97f,
     0x1.52af9p-3f, 0.0f, 0.0f, 0x1.db458p-57f, 0.0f, 0.0f, 0x1.d004a8p-17f, 0.0f,
     0x1.fc3832p-100f, 0x1.d7f9bcp-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.368b6p-58f,
     0.0f, 0x1.6b3322p-98f, 0x1.90c56p-75f, 0.0f, 0x1.6f481ep-103f, 0.0f,
     0x1.097d92p-79f, 0x1.ad34a8p-10f, 0x1.84e186p-108f, 0.0f, 0.0f, 0x1.2500ap-19f,
     0x1.04cc08p-125f, 0x1.49bed4p-87f, 0x1.c9991cp-105f, 0.0f, 0x1.8d90dp-77f, 0.0f,
     0.0f, 0.0f, 0x1.126b2p-9f, 0x1.6b02a8p-34f, 0.0f, 0x1.63e844p-125f, 0.0f, 0.0f,
     0x1.7ef6dcp-125f, 0.0f, 0.0f, 0x1.c82b56p-46f, 0x1.183a52p-8f, 0.0f, 0.0f,
     0x1.4d14dap-29f, 0.0f, 0x1.a3a694p-56f, 0.0f, 0.0f, 0x1.592ef4p-40f, 0.0f, 0.0f,
     0x1.fcdb36p-105f, 0.0f, 0.0f, 0x1.8de396p-76f, 0.0f, 0x1.507e0ap-91f, 0.0f, 0.0f,
     0.0f, 0x1.0e2afap-18f, 0.0f, 0.0f, 0x1.b0a9cep-101f, 0.0f, 0x1.562572p-57f, 0.0f,
     0.0f, 0x1.2dae28p-21f, 0.0f, 0.0f, 0x1.5b579ep-11f, 0.0f, 0.0f, 0x1.95ef78p-21f,
     0x1.f30ba2p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e00c92p-22f, 0.0f,
     0x1.1b5522p-10f, 0.0f, 0.0f, 0x1.cab906p-59f, 0x1.8e5a94p-116f, 0x1.e5d5bp-19f,
     0x1.13c7ap-63f, 0x1.bb9218p-63f, 0.0f, 0x1.17384ep-36f, 0.0f, 0x1.f49ceap-84f,
     0x1.563a9p-93f, 0x1.93f99cp-33f, 0x1.56134cp-9f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.00f294p-8f, 0.0f, 0.0f, 0.0f, 0x1.8760c6p-25f, 0x1.a6e4f8p-48f, 0.0f,
     0x1.b05dfep-79f, 0.0f, 0.0f, 0x1.f2b96cp-70f, 0x1.05a87ap-107f, 0.0f,
     0x1.1323a2p-78f, 0.0f, 0x1.30be28p-7f, 0x1.e81cc8p-50f, 0x1.510534p-7f,
     0x1.2cd902p-67f, 0x1.5574b6p-78f, 0x1.ac94a8p-49f, 0x1.ebeeecp-91f,
     0x1.ebf742p-43f, 0.0f, 0x1.c50126p-117f, 0x1.8b01cap-72f, 0x1.b012dap-41f,
     0x1.a4c9cp-89f, 0.0f, 0x1.3259a8p-55f, 0.0f, 0x1.88f7e6p-72f, 0.0f,
     0x1.b66b34p-95f, 0x1.2e93fap-73f, 0.0f, 0x1.63c0acp-31f, 0.0f, 0.0f, 0.0f,
     0x1.f5b7e6p-70f, 0x1.0af6ep-113f, 0.0f, 0x1.d4f61p-41f, 0.0f, 0.0f,
     0x1.4515e6p-101f, 0.0f, 0x1.392a78p-81f, 0x1.21aef6p-36f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e9d5c6p-47f, 0.0f, 0.0f, 0x1.fac49ep-31f, 0x1.eadd54p-45f, 0.0f,
     0x1.393892p-34f, 0.0f, 0x1.4f486p-99f, 0x1.34e1f4p-29f, 0.0f, 0x1.77c75cp-16f,
     0x1.7f5398p-111f, 0x1.ac5578p-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.5cd616p-86f, 0x1.400c42p-23f, 0x1.ccdc3ep-104f,
     0x1.b3f1cep-7f, 0x1.074b5ap-74f, 0x1.dcab8ep-111f, 0x1.d73386p-52f, 0.0f,
     0x1.23ce9p-115f, 0x1.f892dcp-91f, 0.0f, 0.0f, 0x1.ee36dep-62f, 0.0f,
     0x1.e8119p-33f, 0.0f, 0.0f, 0.0f, 0x1.7d61bcp-123f, 0x1.a43678p-23f,
     0x1.6c5a5p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a76d06p-115f, 0x1.4a1edp-19f, 0.0f,
     0x1.443b3cp-76f, 0x1.341c6ap-15f, 0x1.3f905ap-31f, 0x1.9b8654p-59f, 0.0f,
     0x1.de5254p-46f, 0x1.542528p-66f, 0x1.e4ab7cp-86f, 0.0f, 0x1.35aeccp-80f,
     0x1.83b1bp-17f, 0x1.747752p-72f, 0.0f, 0x1.1bbc74p-1f, 0.0f, 0x1.33d232p-17f,
     0x1.205ef6p-56f, 0.0f, 0.0f, 0.0f, 0x1.d48abep-11f, 0.0f, 0.0f, 0.0f,
     0x1.49152ep-76f, 0.0f, 0.0f, 0x1.49e92ep-74f, 0.0f, 0x1.f5d5d6p-9f,
     0x1.ed3552p-76f, 0x1.cf24b4p-80f, 0x1.f10394p-7f, 0.0f, 0x1.a23c0ep-54f,
     0x1.6113ecp-44f, 0x1.4c2edcp-86f, 0x1.6549a6p-25f, 0.0f, 0x1.7d26d2p-62f,
     0x1.f3c672p-82f, 0x1.6616ep-60f, 0x1.3395e4p-9f, 0.0f, 0.0f, 0.0f,
     0x1.1cf22ep-87f, 0x1.907c24p-20f, 0x1.90baacp-124f, 0x1.9e4202p-37f,
     0x1.01f106p-99f, 0x1.f55adap-109f, 0.0f, 0.0f, 0x1.98b084p-104f, 0.0f,
     0x1.68b6a2p-3f, 0.0f, 0x1.819d8p-47f, 0x1.27a166p-51f, 0.0f, 0x1.b7b186p-9f,
     0.0f, 0.0f, 0x1.2278a6p-121f, 0.0f, 0.0f, 0.0f, 0x1.5ae76cp-72f, 0.0f, 0.0f,
     0.0f, 0x1.a2b40ep-18f, 0.0f, 0x1.2d010cp-83f, 0.0f, 0x1.2adb2cp-11f,
     0x1.8746c4p-41f, 0x1.a8340ep-7f, 0x1.8aa85ap-86f, 0x1.281b5cp-112f, 0.0f,
     0x1.ae8492p-111f, 0x1.e825cep-53f, 0x1p0f, 0.0f, 0x1.3f9eb6p-91f, 0.0f,
     0x1.20884ap-57f, 0.0f, 0x1.a2b144p-94f, 0.0f, 0.0f, 0x1.5d31bap-61f,
     0x1.7da59p-75f, 0x1.c4e90cp-6f, 0x1.8eb4fap-14f, 0.0f, 0x1.616264p-6f,
     0x1.9d2e46p-38f, 0x1.4568cep-2f, 0x1.bcd98ap-70f, 0x1.317bbcp-45f,
     0x1.63b1f8p-28f, 0x1.96d31ep-80f, 0.0f, 0x1.0b52ap-54f, 0x1.df8ddp-118f, 0.0f,
     0.0f, 0x1.584f4cp-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.748e9ep-87f, 0x1.6cfcf6p-18f,
     0.0f, 0.0f, 0x1.4aadcp-102f, 0.0f, 0.0f, 0.0f, 0x1.10efeap-62f, 0.0f,
     0x1.318416p-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ad6faap-95f, 0.0f, 0.0f,
     0.0f, 0x1p0f, 0x1.7a0b02p-123f, 0x1.edec42p-44f, 0x1.8ec9cp-27f, 0.0f,
     0x1.5b9098p-54f, 0.0f, 0.0f, 0x1.94542ap-14f, 0.0f, 0.0f, 0.0f, 0x1.c561p-93f,
     0x1.c0c66ep-51f, 0x1.8e0a24p-112f, 0x1.d97dbep-107f, 0x1.8e5912p-91f, 0.0f,
     0x1.da9b46p-45f, 0x1.555ed6p-116f, 0.0f, 0.0f, 0.0f, 0x1.0afeccp-51f,
     0x1.c63b38p-93f, 0x1.16e326p-75f, 0.0f, 0.0f, 0x1.058f32p-83f, 0x1.c6adaep-100f,
     0x1.98f1b8p-104f, 0x1.6a848ap-102f, 0.0f, 0x1.416acap-9f, 0.0f, 0.0f,
     0x1.ae54a4p-122f, 0x1.5bf6bap-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.efc4cep-33f, 0x1.cc4736p-5f, 0.0f, 0.0f, 0x1.14d8dap-111f, 0.0f,
     0x1.2ded3ep-122f, 0.0f, 0x1.683ac2p-61f, 0x1.fa74eep-104f, 0.0f, 0x1.1143a2p-51f,
     0x1.e422b2p-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a73d28p-91f, 0x1.abe304p-125f,
     0x1.c36acep-67f, 0x1.aefa1cp-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.523c02p-10f,
     0x1.c42236p-88f, 0.0f, 0.0f, 0.0f, 0x1.de0cp-66f, 0x1.ef8672p-83f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b492f6p-62f, 0x1.3ca49p-33f, 0.0f, 0.0f, 0x1.c067b2p-119f,
     0x1.fb8cecp-59f, 0x1.1cc7ap-26f, 0x1.41720cp-47f, 0x1.c64352p-68f,
     0x1.8e9aaep-86f, 0x1.a31068p-94f, 0x1.a8f2bp-62f, 0x1.44d4a6p-116f,
     0x1.b07c74p-5f, 0x1.4e208ap-42f, 0x1.a005eap-84f, 0.0f, 0x1.82ea5ap-74f,
     0x1.a3a4a2p-30f, 0x1.0ac048p-17f, 0.0f, 0.0f, 0x1.a56666p-103f, 0x1.7b5d0cp-114f,
     0x1.de2228p-65f, 0x1.fe684p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9eb47ep-115f,
     0x1.8402a6p-75f, 0x1.51c30ep-14f, 0x1.e7bc28p-49f, 0.0f, 0x1.f070b2p-91f,
     0x1.7dc618p-28f, 0.0f, 0x1.4c841ap-45f, 0x1.8be088p-122f, 0x1.02f838p-98f, 0.0f,
     0x1.78df58p-29f, 0x1.2b762ep-77f, 0.0f, 0.0f, 0x1.6e5bfcp-113f, 0.0f, 0.0f,
     0x1.43807ep-63f, 0.0f, 0.0f, 0.0f, 0x1.3b00b4p-27f, 0.0f, 0x1p0f,
     0x1.182b2cp-20f, 0.0f, 0.0f, 0x1.dba2ap-63f, 0.0f, 0x1.8b865p-57f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.fa320ap-82f, 0.0f, 0x1.cb975ep-80f, 0x1.7945ecp-46f, 0.0f, 0.0f,
     0x1.65588ep-111f, 0.0f, 0.0f, 0x1.d178c8p-117f, 0x1.21a90cp-112f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.510652p-20f, 0x1.8def58p-61f, 0.0f, 0x1.f0620ep-101f, 0.0f,
     0x1.2d4512p-84f, 0.0f, 0.0f, 0.0f, 0x1.feddcp-51f, 0x1.1ea80ap-81f, 0.0f,
     0x1.91e618p-67f, 0.0f, 0x1.8f780cp-115f, 0.0f, 0x1.8a7d4cp-43f, 0x1.2565cp-94f,
     0x1.1b3d14p-28f, 0.0f, 0.0f, 0x1.f1e67p-87f, 0.0f, 0x1.871d2p-4f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ac21e2p-72f, 0x1.fff828p-94f, 0.0f, 0x1.261442p-124f,
     0x1.ecf8a4p-76f, 0.0f, 0.0f, 0.0f, 0x1.53c13ap-82f, 0.0f, 0x1.2d6d6ap-67f,
     0x1.7d708ep-95f, 0x1.e1bd1ap-27f, 0x1.adbc72p-103f, 0.0f, 0.0f, 0x1.05420ap-61f,
     0x1.63883p-65f, 0x1.730f9ep-92f, 0.0f, 0.0f, 0.0f, 0x1.9ef6fp-95f, 0.0f,
     0x1.439e8ep-6f, 0.0f, 0x1.8a734ep-44f, 0.0f, 0x1.3383acp-126f, 0.0f,
     0x1.d0cf0ep-49f, 0.0f, 0x1.b042c8p-23f, 0x1.1544d8p-99f, 0x1.c287p-97f,
     0x1.8e9fa4p-106f, 0x1.627678p-104f, 0x1.0d4a5cp-28f, 0x1p0f, 0x1.2e1d88p-45f,
     0.0f, 0.0f, 0x1.0616b6p-28f, 0.0f, 0.0f, 0.0f, 0x1.380738p-119f, 0.0f,
     0x1.a46ecap-61f, 0x1.553c7cp-71f, 0x1.9b5f8cp-83f, 0x1.430e76p-88f,
     0x1.f0ebd8p-50f, 0x1.bf5e32p-5f, 0x1.6e72fp-42f, 0.0f, 0x1.f15e08p-105f, 0.0f,
     0.0f, 0x1.3f42ccp-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9e1ddep-52f, 0.0f,
     0.0f, 0.0f, 0x1.4d76dap-66f, 0x1.80acecp-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.93b9f8p-36f, 0x1.63bb72p-79f, 0.0f, 0.0f, 0.0f, 0x1.34f574p-91f, 0.0f,
     0x1.cb2c12p-119f, 0.0f, 0.0f, 0x1.7214p-45f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f2ef12p-80f, 0.0f, 0x1.fbec34p-18f, 0.0f, 0x1.946aaep-71f, 0.0f, 0.0f,
     0x1.58b0e2p-74f, 0.0f, 0.0f, 0.0f, 0x1.d286a8p-118f, 0x1.aa1334p-45f,
     0x1.da2506p-51f, 0x1.7a0ebap-44f, 0x1.fb7bp-8f, 0x1.2e9ae4p-68f, 0.0f,
     0x1.52cee6p-63f, 0x1.9e7108p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e9c9eep-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.aabc96p-113f, 0x1.03fe46p-24f,
     0x1.717546p-11f, 0.0f, 0x1.894268p-113f, 0x1.e8f6a8p-68f, 0.0f, 0x1.ce707cp-71f,
     0.0f, 0.0f, 0x1.838cdcp-45f, 0x1.30a7dap-103f, 0x1.435acap-33f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.709d9ap-120f, 0.0f, 0.0f, 0x1.147e58p-73f, 0x1.619412p-62f, 0.0f,
     0x1.9d778ap-90f, 0.0f, 0x1.51836cp-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0f5fc8p-5f, 0.0f, 0.0f, 0x1.3cf51cp-53f, 0x1.aa290cp-125f, 0.0f,
     0x1.5747f8p-87f, 0x1.010e1cp-52f, 0x1.04f1bap-46f, 0x1.6af034p-108f, 0.0f,
     0x1.c56536p-4f, 0x1.3b5342p-46f, 0x1.6ede3ap-77f, 0x1.34a3b4p-86f,
     0x1.cb7b9ep-25f, 0.0f, 0x1.2bf71p-59f, 0x1.bfe14p-92f, 0.0f, 0x1.28f956p-88f,
     0x1.1646bap-11f, 0.0f, 0x1.dd81fp-115f, 0.0f, 0.0f, 0x1.6c74d4p-100f, 0.0f, 0.0f,
     0x1.5451c8p-48f, 0.0f, 0x1.b68594p-49f, 0.0f, 0x1.be04d2p-78f, 0.0f, 0.0f,
     0x1.13dfd8p-90f, 0x1.10bd68p-118f, 0.0f, 0x1.8575bap-60f, 0.0f, 0x1.faa076p-29f,
     0x1.686c04p-86f, 0.0f, 0.0f, 0x1.8aa13p-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f
};
static const float external_bench_wrapper_input_table_arg1[1008]  = {
     0x1.4501eap-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eb9252p-120f, 0x1.116e58p-10f,
     0x1.8b2248p-4f, 0.0f, 0x1.b0ca3ap-33f, 0.0f, 0.0f, 0.0f, 0x1.c7f5acp-109f, 0.0f,
     0x1.e5f094p-102f, 0x1.45b158p-107f, 0.0f, 0x1.f0001ep-5f, 0x1.b744acp-49f, 0.0f,
     0x1.4f077p-15f, 0.0f, 0x1.815afep-87f, 0.0f, 0.0f, 0x1.e18c96p-7f,
     0x1.8f7796p-78f, 0.0f, 0.0f, 0.0f, 0x1.1946b2p-37f, 0.0f, 0.0f, 0x1.540a3cp-65f,
     0x1.8eb0bcp-99f, 0.0f, 0.0f, 0.0f, 0x1.3e3418p-27f, 0.0f, 0.0f, 0.0f,
     0x1.e6c062p-103f, 0x1.10543cp-123f, 0x1.5edbd8p-113f, 0x1.64839ep-119f,
     0x1.1d7f7ep-83f, 0x1.34f4ep-117f, 0x1.f96c16p-123f, 0.0f, 0x1.8b6124p-70f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4039p-13f, 0.0f, 0.0f, 0x1.c92ddep-79f,
     0.0f, 0.0f, 0x1.e91b26p-11f, 0x1.58bb68p-116f, 0x1.9c4532p-73f, 0x1.ff1978p-21f,
     0x1.dc6516p-5f, 0x1.4b5ad2p-110f, 0.0f, 0.0f, 0.0f, 0x1.cbd352p-6f, 0.0f,
     0x1.a5ef86p-120f, 0x1.c7048p-89f, 0.0f, 0.0f, 0x1.273216p-121f, 0x1.406406p-125f,
     0x1.11961ap-34f, 0x1.a004bap-18f, 0x1.4eff52p-60f, 0.0f, 0x1.a8c9d8p-57f, 0.0f,
     0x1.827c78p-76f, 0.0f, 0x1.71310ap-77f, 0x1.58bbccp-17f, 0.0f, 0x1.ef63ep-63f,
     0x1.eefb64p-11f, 0x1.3c3b1cp-66f, 0x1.9f1054p-38f, 0x1.9ee92cp-16f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.da06bap-100f, 0.0f, 0x1.a1ade8p-16f, 0.0f, 0.0f, 0x1.072df2p-54f,
     0.0f, 0.0f, 0x1.4833b2p-46f, 0x1.e53628p-35f, 0.0f, 0x1.15b2a8p-32f,
     0x1.5a295p-99f, 0.0f, 0.0f, 0.0f, 0x1.c21ce4p-16f, 0.0f, 0.0f, 0x1.fb9e6cp-29f,
     0x1.d05884p-97f, 0.0f, 0.0f, 0x1.49281cp-107f, 0.0f, 0.0f, 0.0f, 0x1.67652ap-98f,
     0.0f, 0x1.1ee0dcp-46f, 0.0f, 0x1.b7773ap-110f, 0x1.ea466ap-69f, 0.0f,
     0x1.bf3502p-111f, 0.0f, 0.0f, 0x1.880356p-42f, 0x1.9800ep-105f, 0x1.84a71p-17f,
     0x1.2592aap-29f, 0.0f, 0.0f, 0.0f, 0x1.25142cp-9f, 0x1.3aa992p-57f, 0.0f,
     0x1.8a3ec6p-114f, 0x1.9709a8p-119f, 0.0f, 0x1.764f74p-114f, 0x1.0e1894p-66f,
     0.0f, 0x1.5df332p-66f, 0.0f, 0x1.3539p-47f, 0x1.c72c6ap-5f, 0.0f,
     0x1.49c78ep-22f, 0.0f, 0.0f, 0x1.bc2738p-11f, 0.0f, 0.0f, 0x1.5e1304p-124f, 0.0f,
     0x1.f747d4p-3f, 0.0f, 0.0f, 0.0f, 0x1.6d0604p-120f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2a3d74p-100f, 0x1.34f758p-108f, 0.0f, 0x1.a69a7cp-24f, 0x1.8b71eap-33f, 0.0f,
     0x1.5d782ep-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.570d76p-51f, 0.0f, 0x1.c4d52ep-39f,
     0.0f, 0.0f, 0x1.33847ep-37f, 0.0f, 0x1.6c666p-113f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.281502p-41f, 0.0f, 0x1.088e98p-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.35d298p-46f,
     0.0f, 0.0f, 0x1.df3074p-17f, 0.0f, 0x1.4a4acep-89f, 0x1.cd7296p-27f,
     0x1.b431fap-36f, 0.0f, 0x1.eb2f3cp-28f, 0.0f, 0x1.f8a684p-45f, 0x1.89c38ep-30f,
     0.0f, 0.0f, 0.0f, 0x1.d8403p-116f, 0.0f, 0x1.c26136p-119f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.3f34d4p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cb99eep-94f, 0.0f,
     0x1.667488p-58f, 0.0f, 0x1.f78188p-52f, 0x1.c84e24p-81f, 0x1.d5ce7cp-73f, 0.0f,
     0.0f, 0x1.ae9e12p-54f, 0x1.7d1ac8p-14f, 0x1.58a69ap-105f, 0x1.069bb6p-12f,
     0x1.0ac35cp-106f, 0x1.e7fd9ap-110f, 0.0f, 0x1.521a6p-67f, 0.0f, 0.0f,
     0x1.951796p-60f, 0.0f, 0.0f, 0x1.d09a6p-4f, 0.0f, 0x1.2d1ef2p-63f,
     0x1.ec7ac2p-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.93b62p-126f,
     0x1.930f9ep-15f, 0x1.a2f8a8p-117f, 0x1.a5638ap-67f, 0x1.10e174p-89f,
     0x1.8f887p-6f, 0x1.f98618p-69f, 0x1.302f16p-21f, 0x1.585a32p-37f,
     0x1.113bc2p-110f, 0.0f, 0.0f, 0.0f, 0x1.22f502p-40f, 0x1.7abc9p-3f, 0.0f,
     0x1.db216cp-13f, 0x1.04d304p-103f, 0x1.ff2096p-105f, 0.0f, 0.0f, 0.0f,
     0x1.90c252p-69f, 0x1.e19718p-112f, 0.0f, 0.0f, 0.0f, 0x1.00969cp-9f, 0.0f,
     0x1.9e3b36p-106f, 0.0f, 0x1.f14328p-91f, 0.0f, 0.0f, 0.0f, 0x1.80f55cp-6f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f64dfp-122f, 0x1.5dbd9ap-94f, 0.0f,
     0x1.e1a84ap-124f, 0x1.0111f2p-83f, 0.0f, 0.0f, 0x1.f542fp-90f, 0.0f,
     0x1.c56f56p-78f, 0.0f, 0x1.578bb8p-56f, 0.0f, 0x1.91bfa6p-3f, 0.0f, 0.0f,
     0x1.44d68ap-55f, 0.0f, 0x1.e948fep-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2f986cp-107f, 0x1.ddc658p-38f, 0x1.f560cap-13f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0240fp-96f, 0x1.3ec796p-44f, 0.0f, 0.0f, 0x1.dcbf66p-125f, 0.0f,
     0x1.358f58p-80f, 0.0f, 0x1.352334p-18f, 0x1.030ddcp-116f, 0.0f, 0x1.27ae32p-106f,
     0.0f, 0.0f, 0x1.21dce4p-47f, 0.0f, 0x1.d46808p-94f, 0.0f, 0.0f, 0x1.e00da2p-53f,
     0.0f, 0x1.d94deep-33f, 0x1.179d6ap-2f, 0.0f, 0.0f, 0x1.596b98p-94f,
     0x1.c05984p-99f, 0x1.5a3e4p-43f, 0.0f, 0x1.8a7a72p-97f, 0.0f, 0.0f,
     0x1.2fcb4p-109f, 0x1.ff4da8p-61f, 0x1.e469dap-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.0b113ap-121f, 0x1.15523p-5f, 0.0f, 0x1.7416ecp-24f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.8471a2p-87f, 0x1.3173acp-33f, 0x1.7608dp-45f, 0x1.a4e3eap-87f,
     0x1.03382ap-102f, 0.0f, 0x1.b58004p-37f, 0.0f, 0.0f, 0x1.1fba7cp-89f,
     0x1.4ee6d4p-73f, 0x1.39e604p-65f, 0.0f, 0x1.74c4d2p-125f, 0x1.b0b8c6p-55f,
     0x1.a1cd7cp-77f, 0.0f, 0x1.e579b8p-77f, 0.0f, 0x1.7aec62p-106f, 0.0f,
     0x1.b4f2aap-2f, 0x1.128b38p-54f, 0x1.3c279ep-27f, 0x1.17bc74p-41f,
     0x1.8f8ef6p-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ef4a98p-64f, 0.0f, 0.0f,
     0x1.105f96p-119f, 0.0f, 0x1.e09f3ap-67f, 0.0f, 0x1.8fd616p-124f, 0x1.37fe4ep-92f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f830aep-25f, 0x1.1c7884p-86f, 0.0f, 0x1.67fe3cp-34f,
     0.0f, 0x1.af4bfep-33f, 0x1.14d5f2p-3f, 0x1.2b91b4p-32f, 0x1.b43534p-105f,
     0x1.530da6p-53f, 0x1.cddf76p-85f, 0.0f, 0x1.3c1e36p-123f, 0.0f, 0x1.b4ed5cp-26f,
     0x1.c579eep-70f, 0x1.fbf61ep-54f, 0.0f, 0x1.78fb4cp-3f, 0.0f, 0x1.3af51cp-75f,
     0x1.97cd12p-94f, 0x1.f87e6p-109f, 0.0f, 0x1.b8215ap-33f, 0.0f, 0x1.6415ep-69f,
     0x1.c54d64p-122f, 0x1.301f5p-2f, 0x1.706b7p-22f, 0.0f, 0.0f, 0x1.7f4dccp-87f,
     0x1.095138p-118f, 0x1.527678p-21f, 0.0f, 0.0f, 0.0f, 0x1.5bdca4p-100f, 0.0f,
     0x1p0f, 0x1.93a9d2p-5f, 0.0f, 0x1.44c3d6p-83f, 0.0f, 0x1.16ed4cp-47f,
     0x1.c63512p-12f, 0.0f, 0x1.8d2534p-82f, 0x1.a083f6p-96f, 0.0f, 0x1.597b94p-101f,
     0x1.a8f154p-73f, 0x1.47e8ccp-89f, 0.0f, 0x1.782802p-1f, 0x1.2bd372p-69f, 0.0f,
     0x1.aea944p-26f, 0x1.767ec2p-14f, 0.0f, 0x1.97d3b4p-78f, 0x1.aab2a6p-54f, 0.0f,
     0.0f, 0x1.968bd8p-60f, 0x1.2e2c1ep-46f, 0x1.1c14d8p-14f, 0x1.8c760ap-119f, 0.0f,
     0.0f, 0x1.df226ep-118f, 0.0f, 0x1.fa2ed8p-98f, 0.0f, 0x1.751ap-67f, 0.0f,
     0x1.99c022p-38f, 0.0f, 0x1.db82e2p-19f, 0.0f, 0.0f, 0.0f, 0x1.b7febep-39f,
     0x1.5b6324p-20f, 0x1.04598p-27f, 0x1.2ededp-56f, 0x1.0557f4p-48f, 0.0f,
     0x1.f3d414p-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6eb85p-71f, 0x1.e831fap-72f, 0.0f,
     0x1.a4eae8p-112f, 0.0f, 0.0f, 0x1.9b32a6p-93f, 0.0f, 0x1.05580cp-13f,
     0x1.4b8c26p-58f, 0.0f, 0x1.d18868p-34f, 0.0f, 0.0f, 0x1.b1f938p-51f,
     0x1.89501ep-68f, 0x1.05809ap-47f, 0.0f, 0.0f, 0.0f, 0x1.84c69cp-113f,
     0x1.eb457p-52f, 0.0f, 0x1.0a4284p-19f, 0.0f, 0x1.69db5ap-61f, 0.0f,
     0x1.8147cep-14f, 0.0f, 0x1.1d0fbep-30f, 0x1.07b0c2p-108f, 0.0f, 0x1.300b0cp-73f,
     0.0f, 0.0f, 0x1.999fe2p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.08b0bcp-116f, 0.0f,
     0.0f, 0x1.8a170ep-66f, 0x1.c8b22ep-101f, 0x1.bcf75p-82f, 0.0f, 0x1.8c7eb6p-117f,
     0x1.57e6dp-101f, 0x1.96df7ep-42f, 0x1.5c105p-123f, 0.0f, 0x1.a2952ep-87f, 0.0f,
     0x1.a6ab2ap-15f, 0x1.bf5c68p-8f, 0.0f, 0x1.0e28ecp-3f, 0.0f, 0.0f,
     0x1.48d5dep-61f, 0x1.289b5p-80f, 0.0f, 0.0f, 0.0f, 0x1.e8f7c2p-108f, 0.0f,
     0x1.431a72p-82f, 0x1.736912p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.57bdfap-90f, 0x1.3af93cp-27f, 0x1.f8be58p-24f, 0x1.37665ap-101f,
     0x1.26ecfcp-11f, 0x1.28c8f6p-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8af748p-56f, 0.0f, 0.0f, 0x1.281156p-109f, 0x1.e5d2cp-54f, 0x1.025dc8p-117f,
     0.0f, 0x1.60c72p-89f, 0.0f, 0.0f, 0.0f, 0x1.380e5p-66f, 0.0f, 0x1.078188p-37f,
     0x1.245422p-72f, 0.0f, 0x1.4ff192p-85f, 0.0f, 0x1.03d144p-48f, 0.0f, 0.0f,
     0x1.8489c2p-4f, 0.0f, 0x1.47d818p-39f, 0.0f, 0x1.bc25a4p-47f, 0.0f,
     0x1.db1c2ap-84f, 0x1.429b1ap-21f, 0x1.6409dap-109f, 0.0f, 0x1.cd3b3cp-78f,
     0x1.a640dp-114f, 0.0f, 0x1.ab83c8p-101f, 0x1.380116p-57f, 0x1.7c0346p-24f, 0.0f,
     0.0f, 0.0f, 0x1.cff6cap-13f, 0x1.7c643p-76f, 0.0f, 0.0f, 0x1.600746p-83f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.66a17cp-85f, 0.0f, 0x1.ff8234p-109f, 0.0f, 0.0f, 0.0f,
     0x1.72bb64p-30f, 0x1.30e794p-4f, 0.0f, 0x1.04e1d8p-39f, 0.0f, 0x1.f37f6ep-106f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c2f80ap-100f, 0.0f, 0x1.222fbap-92f,
     0x1.03b634p-37f, 0.0f, 0x1.17d67ep-85f, 0.0f, 0x1.6eca9cp-98f, 0.0f,
     0x1.0e9a3p-110f, 0.0f, 0x1.e3cdbcp-73f, 0.0f, 0x1.2bfa4ap-115f, 0.0f,
     0x1.1a253ep-105f, 0x1.6635f2p-93f, 0.0f, 0x1.c998dap-14f, 0x1.8fbeb6p-19f, 0.0f,
     0.0f, 0.0f, 0x1.1efe24p-55f, 0x1.dd1cd4p-44f, 0x1.e9ba8ap-69f, 0.0f,
     0x1.c7ed7ap-97f, 0x1.576754p-21f, 0x1.01d792p-24f, 0.0f, 0.0f, 0x1.1291e8p-109f,
     0x1.7294fap-2f, 0.0f, 0x1.3953ep-124f, 0x1.6eb8cap-116f, 0.0f, 0.0f, 0.0f,
     0x1.fe8eaap-34f, 0x1.b1adp-8f, 0x1.006488p-89f, 0x1.d99616p-108f, 0.0f,
     0x1.238c3cp-113f, 0.0f, 0.0f, 0x1.02d7bap-79f, 0.0f, 0x1.79657cp-27f,
     0x1.be5cd4p-53f, 0.0f, 0x1.ef24a8p-14f, 0.0f, 0x1.657bc2p-47f, 0.0f,
     0x1.2e7abcp-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b445d8p-68f, 0.0f,
     0.0f, 0x1.06f734p-110f, 0x1.79f4acp-126f, 0.0f, 0x1.1f796ep-21f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.145388p-66f, 0.0f, 0.0f, 0.0f, 0x1.9b3e14p-80f,
     0x1.f00e82p-96f, 0.0f, 0x1.1267d6p-14f, 0.0f, 0x1.7ff188p-5f, 0x1.b9837ep-54f,
     0x1.2ae468p-4f, 0.0f, 0.0f, 0x1.651bbp-50f, 0x1.2ebf68p-80f, 0x1.926f58p-64f,
     0x1.9cc4eap-53f, 0.0f, 0x1.4c1066p-63f, 0.0f, 0x1.0753dcp-5f, 0.0f,
     0x1.267278p-12f, 0x1.7a605ep-14f, 0x1.8c65d4p-106f, 0.0f, 0x1.3a66p-91f,
     0x1.0eaf5p-111f, 0.0f, 0x1.6ff19ap-43f, 0x1.59fa4ep-10f, 0.0f, 0.0f, 0.0f,
     0x1.c51268p-111f, 0x1.83673ap-12f, 0.0f, 0x1.233d4cp-80f, 0x1.ccbde2p-121f,
     0x1.b87688p-46f, 0.0f, 0x1.dc257ep-90f, 0.0f, 0x1.e67df8p-93f, 0.0f,
     0x1.78b4c6p-46f, 0x1.02613ap-114f, 0.0f, 0.0f, 0.0f, 0x1.e39962p-58f,
     0x1.64244ap-90f, 0.0f, 0.0f, 0x1.b0e36ap-45f, 0x1.f42d64p-116f, 0.0f,
     0x1.d9dbcep-86f, 0x1.3ef4bep-60f, 0x1.2fa5a8p-21f, 0.0f, 0x1.fd1fb2p-16f, 0.0f,
     0x1.e15bccp-103f, 0.0f, 0x1.6b2f2ep-104f, 0.0f, 0.0f, 0x1.c6cc7ep-40f, 0.0f,
     0.0f, 0x1.ef1eb6p-99f, 0x1.f18704p-17f, 0.0f, 0x1.970cf8p-123f, 0x1.b186d2p-5f,
     0.0f, 0.0f, 0x1.beba8ep-121f, 0.0f, 0x1.024966p-102f, 0.0f, 0.0f,
     0x1.dec066p-75f, 0.0f, 0x1.49372cp-104f, 0x1.9aa82cp-125f, 0x1.a04f6p-101f,
     0x1.43bd4ep-115f, 0.0f, 0x1.459bf4p-109f, 0x1.f64a1p-16f, 0x1.e5890cp-97f,
     0x1.fecc86p-42f, 0x1.270276p-45f, 0x1.ef3ceap-114f, 0x1.f2fd3p-77f, 0.0f,
     0x1.d5961ep-83f, 0.0f, 0x1.ed0594p-103f, 0x1.a51884p-2f, 0x1.22142ep-71f,
     0x1.be1edep-117f, 0.0f, 0.0f, 0.0f, 0x1.6a937p-104f, 0.0f, 0.0f, 0x1.d07d96p-4f,
     0.0f, 0x1.9cdeb4p-85f, 0.0f, 0x1.1e68a8p-78f, 0.0f, 0x1.3c2708p-45f, 0.0f,
     0x1.891a9p-27f, 0.0f, 0x1.cf37a4p-24f, 0.0f, 0x1.73572cp-52f, 0.0f,
     0x1.111f3ap-11f, 0.0f, 0.0f, 0x1.fca53ap-99f, 0x1.62986ap-10f, 0.0f,
     0x1.bf50a6p-76f, 0.0f, 0.0f, 0.0f, 0x1.437336p-54f, 0.0f, 0.0f, 0x1.e39d94p-18f,
     0x1.a9f566p-72f, 0.0f, 0x1.fda98ap-25f, 0x1.9a9e64p-60f, 0x1.e270a4p-107f, 0.0f,
     0.0f, 0x1.94192cp-46f, 0.0f, 0.0f, 0.0f, 0x1.d662aep-108f, 0.0f, 0.0f,
     0x1.a9c29cp-106f, 0.0f, 0x1.28f222p-7f, 0x1.b3b34cp-102f, 0.0f, 0.0f,
     0x1.ff912p-98f, 0x1.6ceafep-115f, 0x1.7f01e8p-56f, 0x1.7b7e3ap-53f, 0.0f, 0.0f,
     0x1.33a47ap-48f, 0x1.c7174p-43f, 0x1.b13516p-93f, 0.0f, 0.0f, 0.0f,
     0x1.93f926p-97f, 0.0f, 0x1.9aec6p-59f, 0.0f, 0x1.c511fep-114f, 0.0f, 0.0f,
     0x1.2c19dp-60f, 0x1.33b56p-79f, 0x1.ed576ep-26f, 0x1.2c6c78p-79f,
     0x1.dd0e3ap-47f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.eb4724p-40f, 0.0f,
     0x1.4b0cfap-101f, 0.0f, 0.0f, 0.0f, 0x1.1b3e22p-36f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.30884p-47f, 0.0f, 0.0f, 0.0f,
     0x1.df39ecp-122f, 0x1.9fd3bep-44f, 0x1.1dee0ap-68f, 0.0f, 0.0f, 0x1.0e8b52p-13f,
     0x1.16e68p-25f, 0.0f, 0x1.bc4a7cp-91f, 0x1.c16ffcp-64f, 0x1.426602p-64f,
     0x1.afe0eep-16f, 0.0f, 0.0f, 0.0f, 0x1.b9c2aap-30f, 0x1.6633cep-68f, 0.0f, 0.0f,
     0x1.3b7fd6p-70f, 0.0f, 0.0f, 0x1.5a31ap-57f, 0x1.786624p-64f, 0.0f,
     0x1.ea27e6p-12f, 0x1.152ca8p-37f, 0x1.52cc88p-62f, 0.0f, 0.0f, 0.0f,
     0x1.9dcaep-123f, 0.0f, 0.0f, 0.0f, 0x1.47f684p-67f, 0.0f, 0.0f, 0.0f,
     0x1.b7abf4p-61f, 0x1.2e17bcp-59f
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
            tmp2 = Sleef_finz_remainderf8_kvx(tmp0, tmp1);
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
    printf("Sleef_finz_remainderf8_kvx %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_finz_remainderf8_kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
