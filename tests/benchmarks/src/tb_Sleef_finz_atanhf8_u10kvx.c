/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_atanhf8_u10kvx.c --function \
 *     Sleef_finz_atanhf8_u10kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 8 --function-input-vector-size \
 *     8 --bench --no-embedded-bin --target kv3
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
     0.0f, 0.0f, 0.0f, 0x1.212c54p-18f, 0x1.8ec398p-26f, 0.0f, 0x1.1e03a2p-35f, 0.0f,
     0x1.76bdbep-76f, 0x1.f5bb46p-45f, 0x1.1fed3p-14f, 0x1.e746cep-84f, 0.0f, 0.0f,
     0.0f, 0x1.567ad2p-91f, 0x1.5b78cap-66f, 0x1.420334p-60f, 0x1.1d92eap-85f,
     0x1.217108p-15f, 0.0f, 0.0f, 0x1.9b8484p-114f, 0.0f, 0.0f, 0x1.86d33p-92f,
     0x1.60777ap-121f, 0x1.8428aep-80f, 0.0f, 0x1.8d9e54p-87f, 0x1.8db7fcp-52f, 0.0f,
     0x1.064a78p-53f, 0.0f, 0x1.767f8ap-52f, 0.0f, 0x1.49157ap-78f, 0x1.0f26b8p-40f,
     0.0f, 0x1.c9bc94p-20f, 0.0f, 0x1.4a12cep-46f, 0x1.2d8e2cp-100f, 0x1.3f6e7ap-37f,
     0x1.931f52p-2f, 0x1.c3ac48p-56f, 0.0f, 0.0f, 0.0f, 0x1.772a6ap-62f, 0.0f, 0.0f,
     0x1.ce047ep-48f, 0x1.785054p-22f, 0x1.9be124p-1f, 0.0f, 0.0f, 0x1.45a3fp-12f,
     0x1.6bba12p-25f, 0x1.3998p-16f, 0.0f, 0x1.66e814p-49f, 0.0f, 0x1.d6f442p-119f,
     0.0f, 0x1.bea6f4p-109f, 0.0f, 0.0f, 0x1.684224p-28f, 0.0f, 0x1.2f4552p-115f,
     0x1.6aa3b6p-59f, 0.0f, 0x1.beb13ep-76f, 0.0f, 0x1.66a5c8p-73f, 0.0f,
     0x1.23f366p-87f, 0x1.125804p-93f, 0x1.495ccep-67f, 0.0f, 0x1.5477f4p-4f, 0.0f,
     0.0f, 0x1.f832dp-4f, 0.0f, 0x1.79e93ep-27f, 0.0f, 0.0f, 0x1.2277ap-36f,
     0x1.92a244p-26f, 0.0f, 0x1.96cf1cp-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d2d906p-15f,
     0.0f, 0x1.dc1cfp-123f, 0.0f, 0x1.e6157ep-41f, 0x1.0e07c2p-88f, 0.0f,
     0x1.5f94d8p-84f, 0.0f, 0x1.36800cp-56f, 0.0f, 0.0f, 0.0f, 0x1.a53072p-111f,
     0x1.1ab46ep-39f, 0.0f, 0x1.94972ap-72f, 0.0f, 0x1.104784p-110f, 0x1.8712c2p-67f,
     0x1.97b458p-72f, 0x1.6eda38p-19f, 0x1.aaff86p-114f, 0.0f, 0.0f, 0.0f,
     0x1.a768c8p-61f, 0.0f, 0x1.837ba8p-7f, 0.0f, 0x1.5ee622p-47f, 0.0f,
     0x1.72974p-80f, 0x1.717e84p-114f, 0x1.2fd8d2p-115f, 0x1.e4358ap-79f,
     0x1.dbfec2p-82f, 0x1.2b7b68p-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4a24fap-32f,
     0x1.bb1fe2p-5f, 0.0f, 0x1.4ac19ep-39f, 0.0f, 0.0f, 0x1p0f, 0x1.c765fap-60f, 0.0f,
     0.0f, 0x1.da4f9ep-1f, 0x1.bdf784p-78f, 0.0f, 0.0f, 0x1.e504p-117f,
     0x1.5b36e2p-28f, 0x1.5b1376p-113f, 0.0f, 0.0f, 0x1.b39daep-78f, 0.0f, 0.0f,
     0x1.5cdfcep-35f, 0x1.905aeep-18f, 0x1.3d2d58p-99f, 0.0f, 0x1.c28918p-95f, 0.0f,
     0x1.10c1bep-86f, 0x1.fc4f0cp-86f, 0x1.dc5f54p-83f, 0x1.a947aep-112f, 0.0f,
     0x1.7aad86p-94f, 0x1.5c70fep-26f, 0x1.518d8ep-27f, 0.0f, 0x1.4d1314p-34f, 0.0f,
     0x1.c6a0cep-22f, 0x1.ee9c86p-99f, 0.0f, 0.0f, 0x1p0f, 0x1.f5736cp-40f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.75f3a8p-36f, 0.0f, 0x1.03cd86p-34f, 0.0f, 0x1.80635ep-109f,
     0x1.410b6ep-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8f2a4ap-98f,
     0x1.f90156p-13f, 0x1.b523e2p-5f, 0x1.18055ap-32f, 0x1.7b9f34p-71f, 0.0f,
     0x1.80d762p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f00a7ap-5f, 0.0f, 0x1.d9eaa6p-119f,
     0.0f, 0x1.1effa4p-31f, 0x1.4f0aaap-8f, 0.0f, 0.0f, 0x1.216e4ap-26f, 0.0f,
     0x1.550cdep-83f, 0x1.fcb14p-53f, 0.0f, 0.0f, 0x1.8420e8p-47f, 0x1.c0f84ep-56f,
     0.0f, 0.0f, 0x1.c657d8p-101f, 0x1.bdf84cp-121f, 0x1.23a4e8p-31f, 0.0f,
     0x1.5daa0cp-1f, 0x1.f7446ep-26f, 0x1.b0d85p-78f, 0x1.7bf1bap-123f, 0.0f, 0.0f,
     0.0f, 0x1.4a478ap-9f, 0x1.dbc4b6p-2f, 0x1.b232f4p-77f, 0.0f, 0x1.7e8158p-118f,
     0x1.2f25e4p-97f, 0x1.d1572p-90f, 0x1.82d76cp-26f, 0.0f, 0.0f, 0x1.c49faep-102f,
     0.0f, 0x1.287322p-89f, 0x1.4ecc04p-39f, 0.0f, 0x1.02d684p-38f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.c00bc6p-114f, 0.0f, 0.0f, 0x1.9c6d14p-109f, 0x1.d6e692p-106f,
     0.0f, 0x1.3c94fep-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b7f19ep-78f, 0.0f, 0.0f,
     0.0f, 0x1.da9b32p-50f, 0x1.438976p-64f, 0x1.cd45c4p-72f, 0x1.68b6f4p-14f,
     0x1.c978c8p-65f, 0x1.319b4cp-116f, 0x1.ec1dbcp-88f, 0.0f, 0x1.5958dap-29f,
     0x1.d5b16ep-91f, 0x1.aa98c8p-59f, 0.0f, 0x1.03fd2cp-53f, 0.0f, 0x1.8ea5fep-75f,
     0x1.d155a4p-121f, 0x1.ce6876p-95f, 0.0f, 0x1.afd344p-93f, 0.0f, 0.0f,
     0x1.3467fep-3f, 0.0f, 0.0f, 0x1.421ad4p-112f, 0x1.fa3a0cp-13f, 0x1.c7d79cp-47f,
     0.0f, 0.0f, 0x1.b29cfep-51f, 0.0f, 0.0f, 0x1.61b106p-24f, 0.0f, 0.0f,
     0x1.72dfe6p-104f, 0.0f, 0.0f, 0x1.27b36ep-102f, 0.0f, 0x1.e5142ep-19f, 0.0f,
     0.0f, 0x1.edd9b2p-125f, 0x1.697436p-21f, 0x1.9e8b5ep-19f, 0x1.c34b04p-89f,
     0x1p0f, 0x1.eeb032p-38f, 0x1.4b91aap-39f, 0x1.4eca78p-91f, 0.0f,
     0x1.5e3a6ap-100f, 0x1.b77154p-114f, 0x1.58fc62p-104f, 0x1.a3563ep-105f,
     0x1.1408b2p-37f, 0x1.9f32cap-32f, 0x1.604264p-72f, 0x1.0207f6p-115f,
     0x1.135cc6p-19f, 0x1.9deec6p-21f, 0x1.cde5c8p-35f, 0x1.72e4f2p-52f,
     0x1.dd1d5cp-106f, 0.0f, 0x1.1e885p-114f, 0x1.28adbep-92f, 0x1.d10fb4p-115f, 0.0f,
     0x1.59203p-122f, 0.0f, 0x1.4a6b0ep-86f, 0x1.966ddp-35f, 0x1p0f, 0.0f,
     0x1.e585d4p-47f, 0.0f, 0x1.bb49e4p-112f, 0x1.61bbdep-45f, 0.0f, 0x1.b2ed38p-72f,
     0.0f, 0.0f, 0.0f, 0x1.82c428p-113f, 0.0f, 0.0f, 0x1.ae4784p-50f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.c1e09ap-16f, 0.0f, 0.0f, 0x1.35de08p-19f, 0.0f, 0x1.3b30d2p-103f,
     0.0f, 0x1.0154dp-82f, 0.0f, 0x1.2c6708p-115f, 0x1.1bc172p-100f, 0x1.20ae4ep-77f,
     0x1.191172p-81f, 0.0f, 0.0f, 0x1.120046p-37f, 0x1.c316fcp-10f, 0.0f, 0.0f,
     0x1.1190cp-48f, 0x1.b218c8p-116f, 0.0f, 0x1.ebf73ep-71f, 0.0f, 0.0f,
     0x1.d8bc9p-105f, 0x1.0fef84p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fa3a1ap-85f,
     0x1.a136f8p-70f, 0x1.671362p-59f, 0.0f, 0x1.b7a5ep-98f, 0.0f, 0x1.9d5d4ep-85f,
     0.0f, 0.0f, 0x1.5c7384p-122f, 0x1.46dc28p-96f, 0x1.657bbep-22f, 0x1.df54fcp-65f,
     0x1.7751cep-121f, 0.0f, 0x1.fc51bp-89f, 0.0f, 0.0f, 0x1.0b70eap-57f, 0.0f,
     0x1.32d6aap-106f, 0x1.9fd376p-37f, 0x1.541e18p-98f, 0.0f, 0.0f, 0x1.cab2p-70f,
     0x1.44199ap-10f, 0.0f, 0x1.d6a408p-86f, 0x1.ddbe9p-53f, 0x1.9adbd8p-70f, 0.0f,
     0x1.d46016p-125f, 0.0f, 0x1.7dd22ap-126f, 0.0f, 0x1.222514p-5f, 0.0f, 0.0f, 0.0f,
     0x1.2aadc8p-36f, 0x1.723f5ep-106f, 0x1.7af3fep-45f, 0.0f, 0.0f, 0x1.b2b5fap-27f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e980c2p-73f, 0x1.e4e2c6p-42f, 0x1.bcc0ep-36f, 0.0f,
     0.0f, 0x1.3a1cbep-125f, 0x1.add678p-73f, 0.0f, 0.0f, 0x1.d84c7p-80f, 0.0f,
     0x1.aba2dap-18f, 0.0f, 0x1.f2bd48p-106f, 0x1.551986p-25f, 0x1.853dcp-34f,
     0x1.a49812p-34f, 0.0f, 0x1.a10508p-16f, 0x1.14cc02p-2f, 0.0f, 0x1.3a5482p-39f,
     0.0f, 0x1.ddae3cp-124f, 0.0f, 0x1.42ce6ep-50f, 0.0f, 0.0f, 0.0f, 0x1.eb8f12p-56f,
     0.0f, 0x1.f8e088p-22f, 0.0f, 0.0f, 0x1.21517ep-62f, 0.0f, 0x1.fb011ep-124f, 0.0f,
     0x1.0011f8p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e6c036p-82f,
     0x1.cbbf22p-6f, 0x1.28eb6ep-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e638eep-58f, 0.0f, 0x1.2ab29ep-69f, 0.0f, 0x1.1fc11cp-84f, 0.0f,
     0x1.d14998p-42f, 0.0f, 0.0f, 0x1.163566p-10f, 0.0f, 0x1.522358p-31f,
     0x1.bb5838p-9f, 0x1.2c4f6ep-52f, 0.0f, 0x1.4c1c0ep-46f, 0.0f, 0.0f, 0.0f,
     0x1.e6b97cp-75f, 0.0f, 0x1.544feep-117f, 0x1.9a1976p-76f, 0x1.1ff372p-23f, 0.0f,
     0x1.26d206p-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4e7d8cp-76f, 0.0f, 0.0f,
     0x1.eba4cep-1f, 0x1.116a2cp-58f, 0.0f, 0.0f, 0.0f, 0x1.7307a6p-28f,
     0x1.6cd18ep-121f, 0x1.d9d46ep-104f, 0x1.65ae78p-4f, 0x1.a603f2p-52f, 0.0f,
     0x1.181fdp-16f, 0x1.69a822p-49f, 0x1.50d47ep-124f, 0x1.7f133cp-8f,
     0x1.6396b2p-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d5ad28p-26f, 0x1.0de6d2p-84f,
     0x1.ac2c76p-111f, 0x1.dffd54p-47f, 0.0f, 0x1.d90df2p-63f, 0.0f, 0x1.915cbp-21f,
     0x1.677e74p-95f, 0.0f, 0x1.158108p-57f, 0x1.404cb2p-3f, 0x1.735cf6p-19f,
     0x1.a2640cp-74f, 0x1.d242c6p-30f, 0x1.a4f1c2p-76f, 0x1.9c6c04p-86f,
     0x1.a148a8p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.91db08p-113f, 0.0f, 0.0f,
     0x1.1b0ed4p-122f, 0x1.2021ep-95f, 0.0f, 0x1.d27462p-81f, 0.0f, 0.0f,
     0x1.7acab4p-102f, 0.0f, 0.0f, 0.0f, 0x1.bc62a2p-24f, 0.0f, 0x1.5919e2p-48f,
     0x1.6f22b2p-107f, 0.0f, 0.0f, 0x1.6b15a8p-86f, 0.0f, 0x1.3c542ap-120f, 0.0f,
     0x1.5f4d04p-84f, 0x1.72439ep-95f, 0.0f, 0.0f, 0x1.530864p-63f, 0x1.6c16f4p-115f,
     0.0f, 0.0f, 0x1.237a44p-126f, 0x1.1213eep-52f, 0.0f, 0x1.264f32p-19f, 0.0f,
     0x1.b1300ap-100f, 0x1.24d2a2p-74f, 0x1.b6631ep-81f, 0x1.6084e2p-86f,
     0x1.b1450cp-110f, 0.0f, 0.0f, 0x1.6e0a0ap-95f, 0.0f, 0x1.be225p-116f,
     0x1.2e4772p-53f, 0.0f, 0x1.39bff8p-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2ccec2p-41f, 0x1.eb87acp-24f, 0x1.4ccb8p-121f, 0x1.678454p-80f,
     0x1.da708cp-117f, 0x1.3c56a4p-61f, 0.0f, 0x1.675ce8p-57f, 0.0f, 0x1.0f7c34p-32f,
     0.0f, 0x1.4b4652p-69f, 0.0f, 0x1.195342p-2f, 0x1p0f, 0.0f, 0x1.157ddap-113f,
     0.0f, 0x1.aef87p-17f, 0x1.c6d0c4p-37f, 0x1.ec09ap-33f, 0x1.b03cf4p-3f,
     0x1.bc89acp-3f, 0.0f, 0x1.ad2beap-4f, 0x1.f28f08p-55f, 0.0f, 0x1.697652p-33f,
     0.0f, 0.0f, 0x1.5d1266p-26f, 0.0f, 0x1.9a2ce8p-41f, 0x1.3fd08p-97f,
     0x1.ca98ap-55f, 0x1.486868p-122f, 0.0f, 0x1.518e04p-103f, 0.0f, 0.0f,
     0x1.88ceap-11f, 0x1.104e52p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2b886ap-92f,
     0.0f, 0.0f, 0x1.96ce1p-69f, 0.0f, 0x1.0f3794p-34f, 0x1.f8b314p-46f, 0.0f,
     0x1.be97aep-68f, 0x1.2d4b36p-115f, 0.0f, 0x1.400722p-109f, 0.0f, 0x1.2926b4p-21f,
     0.0f, 0x1.712c7ep-52f, 0.0f, 0.0f, 0.0f, 0x1.7c012ep-78f, 0.0f, 0.0f,
     0x1.81af26p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.494ddep-79f, 0.0f, 0.0f, 0.0f, 0x1.348caep-39f, 0.0f, 0x1.cba39ap-102f, 0.0f,
     0x1.c57474p-103f, 0x1.31e7d2p-122f, 0.0f, 0.0f, 0x1.f6e424p-18f, 0.0f,
     0x1.81bab4p-89f, 0.0f, 0.0f, 0x1.dbed46p-6f, 0.0f, 0.0f, 0.0f, 0x1.db614ap-85f,
     0x1.b579b4p-51f, 0x1.da452ep-110f, 0x1.d44978p-52f, 0.0f, 0.0f, 0.0f,
     0x1.fbc834p-103f, 0x1.65f2e6p-50f, 0x1.ec9d7cp-4f, 0x1.1e37b6p-81f, 0.0f,
     0x1.28ca8ep-85f, 0.0f, 0x1.3fa412p-69f, 0.0f, 0.0f, 0.0f, 0x1.480f54p-82f, 0.0f,
     0x1.7db5ep-111f, 0.0f, 0x1.e6018ep-31f, 0.0f, 0.0f, 0.0f, 0x1.b974d8p-34f, 0.0f,
     0x1.9db0bep-95f, 0x1.44e79p-52f, 0.0f, 0.0f, 0x1.10af82p-33f, 0.0f,
     0x1.6e7814p-95f, 0.0f, 0.0f, 0.0f, 0x1.a4480ap-106f, 0.0f, 0x1.cf9ddcp-117f,
     0.0f, 0.0f, 0x1.a89af4p-59f, 0x1.a6708ap-118f, 0.0f, 0x1.c70bb6p-71f, 0.0f, 0.0f,
     0x1.adc108p-89f, 0.0f, 0.0f, 0.0f, 0x1.6a3526p-11f, 0.0f, 0.0f, 0.0f,
     0x1.c2d584p-89f, 0.0f, 0.0f, 0x1.3fbaf2p-107f, 0.0f, 0.0f, 0x1.cde486p-39f,
     0x1.f36378p-102f, 0.0f, 0.0f, 0x1.502328p-101f, 0x1.769622p-95f, 0.0f, 0.0f,
     0x1.5c7088p-74f, 0.0f, 0x1.11e192p-126f, 0x1.e39e66p-68f, 0.0f, 0x1.e3c0a6p-94f,
     0.0f, 0x1.14bd66p-118f, 0x1.f13bb4p-124f, 0x1.7d3c8p-20f, 0x1.17ba84p-50f,
     0x1.2e48b8p-71f, 0.0f, 0x1.757faap-109f, 0.0f, 0x1.4bcf38p-117f, 0x1.782804p-26f,
     0x1.32f7eep-99f, 0.0f, 0x1.c985b2p-23f, 0.0f, 0.0f, 0.0f, 0x1.e9625ep-6f, 0.0f,
     0.0f, 0.0f, 0x1.12b9a2p-14f, 0x1.67795ap-90f, 0.0f, 0x1.dfa688p-113f,
     0x1.a3e04p-112f, 0.0f, 0x1.63eacap-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3f6f6ap-10f, 0.0f, 0.0f, 0.0f, 0x1.02a45ap-122f, 0x1.23bca2p-54f,
     0x1.0cffccp-66f, 0x1.863bbp-65f, 0.0f, 0x1.f6c30ep-96f, 0.0f, 0x1.575214p-60f,
     0x1.43b9e2p-30f, 0x1.09b8e2p-23f, 0x1.512f56p-89f, 0.0f, 0.0f, 0x1.9ca4aap-52f,
     0.0f, 0.0f, 0x1.b13d98p-54f, 0.0f, 0x1.cf9aeap-60f, 0.0f, 0.0f, 0.0f,
     0x1.12d21p-90f, 0x1.acb90cp-44f, 0x1.c21684p-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.17d24ap-68f, 0x1.51db72p-12f, 0.0f, 0.0f, 0.0f, 0x1.86fafap-24f, 0.0f, 0.0f,
     0.0f, 0x1.6b4434p-108f, 0x1.1626aap-99f, 0x1.31aaeap-45f, 0x1.15592cp-46f, 0.0f,
     0.0f, 0x1.b2998ap-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c65712p-53f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b9d598p-31f, 0x1.f570c4p-9f, 0x1.edc6fap-48f, 0x1.e7716cp-7f, 0.0f,
     0x1.88b09ap-21f, 0.0f, 0x1.91b192p-58f, 0x1.4367dcp-16f, 0x1.65f234p-57f, 0.0f,
     0x1.206e6ep-79f, 0.0f, 0x1.97074ap-53f, 0x1.209cd4p-113f, 0.0f, 0.0f,
     0x1.9070b2p-60f, 0x1.6c55aep-27f, 0.0f, 0.0f, 0.0f, 0x1.5a5f36p-31f,
     0x1.c6fe44p-9f, 0.0f, 0.0f, 0x1.3677d2p-57f, 0x1.7043eep-61f, 0.0f, 0.0f,
     0x1.0d7d78p-92f, 0x1.31957ap-22f, 0x1.e50014p-8f, 0x1.3a0454p-113f,
     0x1.74f9e6p-55f, 0.0f, 0.0f, 0x1.e6b0f8p-22f, 0x1.6de8e6p-123f, 0.0f, 0.0f,
     0x1.c230d2p-21f, 0.0f, 0x1p0f, 0x1.f76d9ap-82f, 0x1.06078ep-124f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e58a84p-23f, 0.0f, 0.0f, 0x1.4c2968p-34f, 0.0f, 0x1.c5975p-55f,
     0x1.185068p-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9bc48ep-26f, 0.0f, 0.0f,
     0x1.b0d774p-8f, 0.0f, 0x1.60819p-82f, 0x1.4c60eap-88f, 0.0f, 0.0f, 0.0f,
     0x1.b9d612p-15f, 0.0f, 0x1.e32564p-6f, 0.0f, 0.0f, 0.0f, 0x1.2bbb46p-93f, 0.0f,
     0x1.b77f54p-76f, 0x1.296804p-29f, 0x1.fe3d2ep-21f, 0.0f, 0x1.568f9cp-91f, 0.0f,
     0x1.920054p-125f, 0.0f, 0x1.2860fep-59f, 0x1.22869ep-67f, 0.0f, 0.0f, 0.0f,
     0x1.27377cp-28f, 0x1.0e85eep-36f, 0.0f, 0x1.8b1f74p-58f, 0x1.b839b2p-63f,
     0x1.dbc192p-86f, 0x1.08e87ap-80f, 0.0f, 0.0f, 0x1.12ef4p-66f
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
            tmp1 = Sleef_finz_atanhf8_u10kvx(tmp0);
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
    printf("Sleef_finz_atanhf8_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_finz_atanhf8_u10kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
