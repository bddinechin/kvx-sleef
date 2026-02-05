/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_hypotf8_u35kvx.c --function \
 *     Sleef_finz_hypotf8_u35kvx --arity 2 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32,binary32 --vector-size 8 \
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
     0.0f, 0x1.67df5cp-32f, 0.0f, 0x1.81dbc4p-87f, 0x1.7352e8p-42f, 0.0f,
     0x1.12dab4p-14f, 0.0f, 0.0f, 0x1.6028cap-64f, 0.0f, 0.0f, 0x1.b80f44p-84f, 0.0f,
     0.0f, 0.0f, 0x1.f52454p-10f, 0.0f, 0.0f, 0.0f, 0x1.df6b68p-125f, 0x1.1850eep-29f,
     0x1.d8636ep-88f, 0.0f, 0x1.95deb8p-61f, 0x1.833c98p-12f, 0.0f, 0.0f,
     0x1.030d04p-40f, 0.0f, 0.0f, 0.0f, 0x1.0d882ap-101f, 0x1.0af86ap-98f, 0.0f, 0.0f,
     0x1.301106p-34f, 0x1.39d7ap-14f, 0.0f, 0x1.315aecp-101f, 0x1.3c36aap-39f, 0.0f,
     0.0f, 0x1.7ee4e8p-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.34f14ap-112f,
     0x1.1972eap-90f, 0x1.8455fap-42f, 0.0f, 0.0f, 0x1.8b8abcp-18f, 0.0f,
     0x1.1bb07ap-97f, 0x1.811c48p-1f, 0.0f, 0.0f, 0.0f, 0x1.d6b112p-38f,
     0x1.b0e8b8p-70f, 0x1.7ef594p-115f, 0.0f, 0.0f, 0.0f, 0x1.700d8cp-66f, 0.0f, 0.0f,
     0.0f, 0x1.8d1d36p-105f, 0x1.5d02f2p-12f, 0.0f, 0x1.c93924p-83f, 0x1.afa072p-43f,
     0.0f, 0x1.8dfd32p-87f, 0x1.cbb23p-64f, 0x1.cb6332p-124f, 0x1.8ba948p-69f, 0.0f,
     0x1.313a94p-92f, 0x1.95e0fcp-85f, 0x1.afc82cp-99f, 0.0f, 0x1.c9b31ap-7f, 0.0f,
     0.0f, 0.0f, 0x1.b6ab14p-45f, 0.0f, 0x1.82c3dap-27f, 0x1.836e9ep-69f,
     0x1.b3a46p-1f, 0x1.c1bcaap-116f, 0x1.f03366p-8f, 0.0f, 0.0f, 0x1.8a98aap-69f,
     0.0f, 0x1.8b9f1p-97f, 0x1.679f8p-59f, 0x1.ca12e8p-28f, 0x1.141cp-3f, 0.0f,
     0x1.dcd16ap-58f, 0x1.264d2cp-125f, 0x1.f25f56p-14f, 0.0f, 0x1.b17cb8p-113f,
     0x1.429108p-84f, 0x1.42c33p-20f, 0.0f, 0x1.94325p-83f, 0x1.3fa10cp-66f, 0.0f,
     0x1.e49d6p-10f, 0.0f, 0x1.639e82p-92f, 0.0f, 0x1.7167aap-78f, 0x1.82d1fp-39f,
     0x1.cf009ep-21f, 0x1.6d3176p-103f, 0.0f, 0x1.c963aap-34f, 0.0f, 0.0f,
     0x1.04ea9cp-101f, 0x1.4ff1cap-55f, 0x1.80f32cp-68f, 0x1.5f06a4p-117f,
     0x1.7e29aap-9f, 0x1.52fbaap-98f, 0x1.b7757ep-45f, 0x1.c5785p-84f,
     0x1.cbf506p-66f, 0x1.af7d24p-21f, 0x1.711eep-13f, 0.0f, 0x1.5532ep-42f,
     0x1.f85204p-45f, 0.0f, 0x1.1351eap-104f, 0.0f, 0.0f, 0.0f, 0x1.430b3ap-88f,
     0x1.aadd82p-122f, 0.0f, 0x1.a82ce4p-35f, 0x1.c666fp-26f, 0.0f, 0x1.74eaacp-71f,
     0x1.c9da84p-40f, 0.0f, 0.0f, 0.0f, 0x1.155fap-66f, 0x1.a3ca58p-113f,
     0x1.0ad20cp-73f, 0x1.113f2ap-114f, 0x1.63dab2p-53f, 0x1.67b8fp-95f, 0.0f, 0.0f,
     0x1.834c0cp-34f, 0.0f, 0.0f, 0x1.555a32p-39f, 0x1.c428e6p-91f, 0.0f, 0.0f,
     0x1.0daaaap-92f, 0.0f, 0x1.c7b39cp-51f, 0x1.18a3fep-20f, 0.0f, 0x1.353d44p-44f,
     0.0f, 0x1.1225ap-53f, 0x1.15cf36p-17f, 0.0f, 0x1.b1d2cap-11f, 0.0f,
     0x1.84bde2p-26f, 0x1.bef3e8p-10f, 0.0f, 0.0f, 0x1.87f0eap-36f, 0x1.13dce8p-111f,
     0x1.0692d4p-77f, 0.0f, 0x1.e9a486p-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.92dde8p-48f,
     0.0f, 0x1.0ec9ccp-68f, 0x1.09e202p-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.5eb792p-92f, 0x1.24fbecp-52f, 0.0f, 0.0f, 0.0f, 0x1.37900ap-28f,
     0x1p0f, 0x1.2bbe0ep-50f, 0.0f, 0x1.29797p-58f, 0.0f, 0x1.0682bcp-124f, 0.0f,
     0.0f, 0.0f, 0x1.c51c5ep-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7a8522p-95f,
     0.0f, 0.0f, 0.0f, 0x1.e48afep-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7f78fap-123f, 0x1.9b84ep-22f, 0x1.3f19bp-61f, 0.0f, 0.0f, 0.0f,
     0x1.a5e068p-5f, 0x1.be413cp-88f, 0.0f, 0.0f, 0x1.91a124p-52f, 0.0f, 0.0f,
     0x1.9d2bp-2f, 0.0f, 0x1.3a775ep-110f, 0.0f, 0x1.efdb32p-6f, 0.0f, 0.0f,
     0x1.fe2dep-6f, 0.0f, 0x1.13b3dcp-31f, 0x1.ca1b4ap-2f, 0x1.dcd8bap-121f, 0.0f,
     0x1.c2bb68p-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d0709p-32f,
     0.0f, 0x1.b0a09cp-105f, 0.0f, 0x1.da77e6p-78f, 0x1.a777cap-73f, 0.0f,
     0x1.5ce774p-58f, 0x1.b3b2fcp-121f, 0.0f, 0x1.da2a6p-56f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ad375cp-84f, 0x1.c133fcp-5f, 0x1.977fe4p-73f, 0.0f,
     0x1.2051c8p-20f, 0.0f, 0x1.c1cef6p-91f, 0x1.1175d8p-97f, 0.0f, 0.0f,
     0x1.eb5444p-36f, 0x1.5a6268p-11f, 0.0f, 0x1.9bde52p-95f, 0x1.e3a946p-91f, 0.0f,
     0x1.59d99p-112f, 0.0f, 0.0f, 0x1.0c221ep-60f, 0.0f, 0x1.b24116p-49f, 0.0f,
     0x1.720a3cp-42f, 0.0f, 0.0f, 0x1.165e88p-98f, 0x1.8a6794p-78f, 0x1.c26b16p-84f,
     0x1.5a2568p-10f, 0.0f, 0x1.8b8e0ap-119f, 0x1.a5c3b2p-66f, 0x1.a568e4p-119f, 0.0f,
     0.0f, 0.0f, 0x1.af075ap-18f, 0.0f, 0.0f, 0x1.0d0d6cp-92f, 0.0f, 0.0f,
     0x1.efe774p-21f, 0.0f, 0x1.8d257cp-81f, 0.0f, 0.0f, 0.0f, 0x1.16c722p-37f,
     0x1.67c9f6p-22f, 0.0f, 0x1.e9c4a8p-71f, 0x1.5b5552p-124f, 0x1.065a06p-108f, 0.0f,
     0x1.42aap-33f, 0.0f, 0.0f, 0.0f, 0x1.869d2p-79f, 0x1.58f356p-41f,
     0x1.11b9c2p-84f, 0.0f, 0.0f, 0x1.315374p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d45f4ep-55f, 0.0f, 0.0f, 0x1.04ef1p-7f, 0.0f, 0.0f, 0x1.687548p-63f, 0.0f,
     0x1.45368cp-43f, 0.0f, 0x1.eeee9p-107f, 0x1.bdae7cp-9f, 0.0f, 0x1.e955b2p-11f,
     0.0f, 0.0f, 0x1.fd90bep-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5d1a9p-54f,
     0x1.dccbbap-45f, 0x1.f2be32p-40f, 0x1.a469d2p-101f, 0x1.eba6p-93f, 0.0f, 0.0f,
     0.0f, 0x1.982ceap-23f, 0x1.8dbfc4p-49f, 0x1.be3382p-47f, 0.0f, 0.0f, 0.0f,
     0x1.d23faep-13f, 0x1.2b042cp-101f, 0.0f, 0x1.b0c4p-107f, 0.0f, 0x1.5c4cf2p-17f,
     0x1.0c1ecp-65f, 0.0f, 0.0f, 0x1.49bd48p-12f, 0x1.f64698p-15f, 0.0f,
     0x1.17b61p-39f, 0x1.8c3796p-113f, 0.0f, 0x1.6de5aep-63f, 0x1.264d2ap-103f,
     0x1.19f946p-16f, 0x1.156956p-45f, 0.0f, 0x1.d7cd04p-17f, 0x1.93989ep-53f, 0.0f,
     0.0f, 0.0f, 0x1.c0e688p-48f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.01e438p-80f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.1bf06ap-2f, 0.0f, 0x1.7317eap-35f, 0x1.3af4cp-4f,
     0.0f, 0x1.630992p-18f, 0.0f, 0x1.74849cp-121f, 0.0f, 0.0f, 0.0f,
     0x1.09f856p-126f, 0x1.8b7eaep-23f, 0x1.01670ep-55f, 0x1.07da8cp-30f,
     0x1.95676p-84f, 0x1.54cc3cp-1f, 0x1.6b4d82p-62f, 0.0f, 0x1.b69ef8p-69f, 0.0f,
     0x1.8b787ap-90f, 0x1.0e659cp-99f, 0x1.712274p-38f, 0.0f, 0x1.71270ep-18f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3c3d9cp-48f, 0x1.8c376ap-50f, 0x1.bbfed6p-1f,
     0x1.4a8c66p-14f, 0x1.f8f56cp-96f, 0.0f, 0x1.210036p-88f, 0x1.918c94p-51f,
     0x1.53f792p-52f, 0.0f, 0.0f, 0x1.4f757ep-108f, 0.0f, 0x1.36db2p-98f,
     0x1.8361b4p-8f, 0x1.51e02p-27f, 0x1.6f00bep-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f3f39ep-62f, 0x1.0ff77p-18f, 0.0f, 0x1.db8c7ep-115f, 0x1.28207ap-30f,
     0.0f, 0x1.53f458p-105f, 0.0f, 0x1.056b3ep-56f, 0x1.028dc4p-59f, 0x1.e76c86p-78f,
     0x1.a3bd76p-86f, 0.0f, 0x1.783a9cp-1f, 0x1.ead69cp-2f, 0.0f, 0x1.4590acp-107f,
     0.0f, 0x1.d464d8p-75f, 0.0f, 0x1.292d9p-100f, 0x1.95a45ap-15f, 0x1.c2e4fep-21f,
     0x1.ee8c0ap-79f, 0x1.245f2ap-26f, 0x1.8bc0b6p-72f, 0x1.ca3ea6p-18f, 0.0f,
     0x1.bfb0eap-48f, 0x1.4af66cp-35f, 0x1.ec10e4p-123f, 0.0f, 0.0f, 0.0f,
     0x1.057d62p-86f, 0x1.f66648p-105f, 0x1.898882p-63f, 0x1.38eba8p-93f,
     0x1.f25d76p-116f, 0x1.37169ap-8f, 0.0f, 0x1.f83132p-5f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.4b823cp-105f, 0.0f, 0x1.0b36a2p-51f, 0.0f, 0x1.daf19p-19f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.34da0ep-106f, 0x1.69a898p-68f, 0.0f, 0x1.467214p-106f, 0.0f,
     0x1.41db1ap-19f, 0.0f, 0.0f, 0x1.212012p-118f, 0.0f, 0x1.f90a42p-68f,
     0x1.3c19ep-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dfb99ep-64f, 0x1.2e988cp-13f,
     0x1.6a91fp-104f, 0.0f, 0x1.2e6a48p-88f, 0.0f, 0x1.8a9b8ap-79f, 0x1.017ea2p-7f,
     0x1.3a3ae6p-22f, 0.0f, 0x1.dd2e9p-115f, 0.0f, 0x1.8ace1cp-82f, 0.0f,
     0x1.1aea3ep-42f, 0.0f, 0x1.326ceap-23f, 0.0f, 0.0f, 0x1.6b3772p-52f, 0.0f, 0.0f,
     0x1.67284ep-112f, 0x1.6d76bep-14f, 0x1.9a7484p-35f, 0x1.1ec988p-60f, 0.0f, 0.0f,
     0.0f, 0x1.e6ca6cp-31f, 0x1.cab624p-47f, 0x1.879332p-38f, 0x1.e24402p-76f,
     0x1.d17084p-27f, 0.0f, 0x1.45f1dap-118f, 0x1.5942fp-89f, 0.0f, 0.0f, 0.0f,
     0x1p0f, 0.0f, 0x1.61dc1ap-48f, 0x1.12017cp-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.95a2aap-95f, 0.0f, 0x1p0f, 0.0f, 0x1.7fb036p-62f, 0x1.0ebedap-93f, 0.0f,
     0x1.bc5878p-95f, 0.0f, 0.0f, 0x1.5ae662p-15f, 0.0f, 0.0f, 0x1.9c2464p-112f,
     0x1.71ce16p-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.066be6p-82f, 0x1.bc7d86p-5f, 0.0f,
     0.0f, 0.0f, 0x1.92107cp-37f, 0.0f, 0.0f, 0.0f, 0x1.96f574p-60f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.80f52p-15f, 0x1.f60114p-13f, 0.0f, 0.0f, 0.0f,
     0x1.e56bb6p-88f, 0.0f, 0x1.28712cp-44f, 0.0f, 0x1.11db7cp-80f, 0x1.e720e4p-121f,
     0.0f, 0x1.4c9ccep-4f, 0x1.fef9acp-37f, 0.0f, 0x1.99c0b2p-16f, 0.0f, 0.0f,
     0x1.f67614p-102f, 0.0f, 0x1.c56674p-122f, 0.0f, 0.0f, 0x1.fa5f92p-87f,
     0x1.71ba64p-60f, 0.0f, 0x1.7e0c94p-72f, 0.0f, 0.0f, 0x1.7bd54p-41f, 0.0f, 0.0f,
     0x1.16e398p-14f, 0.0f, 0.0f, 0x1.640e52p-1f, 0x1.23ab7ap-32f, 0x1.d0369p-65f,
     0.0f, 0.0f, 0x1.e01132p-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dc93acp-98f,
     0x1.c98b5cp-107f, 0.0f, 0.0f, 0x1.5e8948p-103f, 0x1.0b7de8p-109f, 0.0f, 0.0f,
     0.0f, 0x1.89fbfep-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.244bb2p-12f, 0.0f,
     0x1.79503ap-111f, 0.0f, 0x1.b9108ap-2f, 0.0f, 0.0f, 0x1.7a093p-53f,
     0x1.ad8ecep-73f, 0x1.54d594p-82f, 0x1.f234c8p-62f, 0.0f, 0x1.3b8cdp-126f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.4490fap-85f, 0x1.098df8p-74f, 0x1.d5a0a4p-23f,
     0x1.36f78cp-120f, 0.0f, 0x1.029414p-41f, 0.0f, 0x1.7bec1ep-25f, 0x1.e0d798p-107f,
     0x1.2129aep-37f, 0x1.0339acp-18f, 0.0f, 0x1.b7f116p-97f, 0.0f, 0x1.b785bap-123f,
     0x1.90e446p-116f, 0x1.1b93f2p-114f, 0.0f, 0x1.da100ep-24f, 0x1.1213bep-26f,
     0x1.55a3dcp-10f, 0x1.c22d18p-23f, 0.0f, 0.0f, 0x1.7c4b7ep-98f, 0.0f, 0.0f,
     0x1.43fbd8p-110f, 0x1.dcc03ap-30f, 0.0f, 0.0f, 0.0f, 0x1.aa5b98p-62f,
     0x1.e9a6ep-50f, 0x1.be0098p-74f, 0.0f, 0x1.ed890ep-1f, 0x1.544842p-119f,
     0x1.dbca18p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.933cdap-4f, 0x1.f64e58p-103f,
     0x1.17306cp-46f, 0x1.da6b4ep-114f, 0.0f, 0x1.bca5c2p-67f, 0x1.b749aap-10f,
     0x1.ccd76p-57f, 0x1.80424cp-12f, 0.0f, 0x1.da538ap-123f, 0x1.ed31eep-16f,
     0x1.400fbap-113f, 0.0f, 0x1.7f5e52p-21f, 0.0f, 0.0f, 0x1.cbdb84p-5f, 0.0f, 0.0f,
     0x1.6a9a36p-38f, 0x1.e0286cp-77f, 0.0f, 0x1.19c65p-106f, 0x1.cc10e2p-94f,
     0x1.153bfp-73f, 0.0f, 0x1.613654p-115f, 0.0f, 0x1.cd07c2p-22f, 0.0f, 0.0f, 0.0f,
     0x1.a08426p-120f, 0.0f, 0.0f, 0.0f, 0x1.a96f06p-14f, 0x1.fffc5cp-43f,
     0x1.486538p-78f, 0x1.3636f6p-92f, 0.0f, 0.0f, 0x1.61338cp-96f, 0.0f,
     0x1.02e70ep-106f, 0x1.4581bep-84f, 0x1.ef325cp-17f, 0.0f, 0x1.27ccp-49f,
     0x1.01cf6ep-105f, 0x1.ce6248p-60f, 0x1.4453d6p-53f, 0.0f, 0.0f, 0.0f,
     0x1.e75c88p-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5f9ab6p-14f, 0.0f,
     0x1.bb464cp-56f, 0.0f, 0.0f, 0x1.b74ffp-29f, 0x1.f82b3ap-86f, 0.0f, 0.0f, 0.0f,
     0x1.6ca618p-5f, 0.0f, 0x1.32591cp-14f, 0x1.d48476p-17f, 0.0f, 0x1.30c4aep-100f,
     0x1.4ebbeap-103f, 0x1.f0549ap-82f, 0x1.ca4fb6p-46f, 0x1.050d12p-90f, 0.0f,
     0x1.c44668p-68f, 0.0f, 0.0f, 0.0f, 0x1.63d32ap-84f, 0x1.ed1392p-19f, 0.0f,
     0x1.ac27ccp-42f, 0.0f, 0.0f, 0.0f, 0x1.6e1914p-121f, 0.0f, 0.0f, 0.0f,
     0x1.c5d6dp-18f, 0x1.fb12bcp-123f, 0.0f, 0x1.807fc8p-74f, 0x1.a81834p-43f,
     0x1.47308cp-77f, 0x1.4e2c88p-80f, 0.0f, 0x1.d11962p-82f, 0x1.478af8p-110f,
     0x1.b8b3c6p-3f, 0.0f, 0.0f, 0.0f, 0x1.60e0fcp-109f, 0.0f, 0.0f, 0.0f,
     0x1.5e880cp-56f, 0x1.df4cbep-46f, 0.0f, 0x1.978c88p-72f, 0x1.dac1cep-126f,
     0x1.22c654p-17f, 0x1.7a02cp-15f, 0x1.46dc9ap-70f, 0x1.70c58p-70f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.da5f74p-9f, 0x1.e63714p-34f, 0.0f, 0x1.0748c4p-47f,
     0x1.51cee6p-69f, 0.0f, 0x1.4c761ep-34f, 0x1.a986d8p-97f, 0x1.22180ap-119f,
     0x1.fcce6p-35f, 0.0f, 0x1.f1007p-50f, 0x1.39bef6p-28f, 0.0f, 0x1.ac778cp-42f,
     0.0f, 0.0f, 0x1.6e9df4p-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.70b5ap-36f,
     0x1.fc258p-33f, 0x1.8cea16p-56f, 0x1.3efa92p-33f, 0x1.5d3b1p-2f,
     0x1.578628p-117f, 0x1.c208bp-8f, 0.0f, 0x1.91e884p-72f, 0.0f, 0.0f, 0.0f,
     0x1.4b57d4p-118f, 0.0f, 0x1.b9cec4p-84f, 0x1.80c5aep-68f, 0.0f, 0.0f,
     0x1.8c5b6ep-87f, 0.0f, 0.0f, 0x1.ee7ae6p-99f, 0.0f, 0x1.4ba3dep-18f, 0.0f, 0.0f,
     0.0f, 0x1.9c593ap-7f, 0.0f, 0.0f, 0x1.7a1744p-23f, 0x1.4433aep-87f,
     0x1.3be902p-19f, 0.0f, 0x1.de554ep-61f, 0x1.dca8bcp-33f, 0x1.5fc6dcp-19f, 0.0f,
     0x1.3b5eaap-6f, 0.0f, 0.0f, 0.0f, 0x1.b91cb8p-85f, 0x1.556016p-111f,
     0x1.588328p-72f, 0x1.f647ap-85f, 0.0f, 0x1.96e6fap-41f, 0.0f, 0x1.e1d9c6p-4f,
     0x1.f60428p-28f, 0.0f, 0x1.89127p-40f, 0x1.55dc9p-6f, 0x1.b8db7ap-40f, 0.0f,
     0.0f, 0.0f, 0x1.2f577ap-94f, 0x1.232d6p-92f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.04fb3p-17f, 0x1.7d65e4p-107f, 0.0f, 0x1.5cc944p-29f, 0.0f, 0.0f,
     0x1.cf102ep-107f, 0x1.fb9ca4p-57f, 0.0f, 0.0f, 0x1.8d1406p-88f, 0.0f,
     0x1.3fa9a4p-118f, 0x1.3bb3b2p-15f, 0.0f, 0.0f, 0x1.138566p-116f, 0.0f, 0.0f,
     0.0f, 0x1.25583ep-33f, 0x1.f13bcep-50f, 0.0f, 0.0f
};
static const float external_bench_wrapper_input_table_arg1[1008]  = {
     0x1.45577p-40f, 0.0f, 0x1.685564p-64f, 0x1.31e648p-126f, 0.0f, 0x1.7dee72p-75f,
     0x1.318a98p-123f, 0x1.f71a14p-46f, 0x1.2b8366p-26f, 0x1.4d78p-10f,
     0x1.82f2e6p-105f, 0x1.45829ep-82f, 0.0f, 0.0f, 0x1.6b2484p-66f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.69ba22p-70f, 0.0f, 0x1.cfecdp-16f, 0x1.eb50cep-34f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.095394p-39f, 0x1.93f08cp-66f, 0x1.857622p-38f, 0.0f,
     0x1.0d2c08p-5f, 0.0f, 0x1.c1207cp-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.12a4e4p-68f, 0x1.58678cp-56f, 0.0f, 0x1.93867p-48f, 0x1.ce20bep-54f,
     0x1.b60bap-100f, 0x1.18d458p-70f, 0x1.a5a816p-72f, 0.0f, 0.0f, 0.0f,
     0x1.4d4d46p-105f, 0.0f, 0.0f, 0x1.46707ep-70f, 0x1.2effep-97f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a76ebcp-32f, 0x1.68525ap-39f, 0x1.c8779p-90f, 0x1.43275ep-48f,
     0x1.a07cdap-77f, 0x1.4f2508p-66f, 0x1.dad436p-121f, 0.0f, 0x1.407b38p-103f,
     0x1.4d94f8p-52f, 0x1.5b9282p-121f, 0.0f, 0x1.0494e4p-49f, 0.0f, 0x1.e3075ep-46f,
     0x1.71adacp-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.55fb5cp-7f, 0.0f, 0.0f,
     0.0f, 0x1.e7ab68p-79f, 0x1.a9b184p-100f, 0.0f, 0x1.73b7c2p-40f, 0x1.b14cb4p-97f,
     0x1.57759ap-111f, 0x1.0d06bap-54f, 0.0f, 0x1.5602c2p-76f, 0x1.ff175p-57f,
     0x1.1ec36cp-70f, 0x1.f6bdfcp-20f, 0.0f, 0x1.ebb18ep-107f, 0.0f, 0x1.157f3ep-77f,
     0x1.66d81ep-87f, 0.0f, 0x1.cf02d4p-65f, 0.0f, 0x1.36c89ep-42f, 0x1.486b4p-68f,
     0.0f, 0x1.6edbcp-6f, 0.0f, 0x1.d05086p-106f, 0.0f, 0x1.932e2cp-94f,
     0x1.0a1f9cp-26f, 0.0f, 0.0f, 0x1.e7bbep-57f, 0.0f, 0x1.7d7626p-12f,
     0x1.3998a8p-36f, 0x1.0bccd8p-93f, 0x1.02069ep-38f, 0x1.099172p-85f,
     0x1.cef606p-51f, 0x1.0f4c14p-99f, 0x1.41811ep-20f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.afcacep-12f, 0.0f, 0x1.e9ad1p-35f, 0.0f, 0x1.7ca7b2p-10f, 0x1.ab27fap-8f,
     0.0f, 0.0f, 0x1.1b316cp-5f, 0.0f, 0x1.4d16a2p-80f, 0.0f, 0x1.f2b4dcp-38f,
     0x1.cd4f12p-30f, 0x1.2797fap-91f, 0x1.accd8ap-36f, 0x1.e20066p-90f,
     0x1.956e3cp-13f, 0.0f, 0.0f, 0x1.89fcdep-14f, 0x1.46a8c4p-39f, 0x1.b01e5ep-95f,
     0x1.e67494p-96f, 0x1.59f276p-98f, 0x1.271808p-89f, 0.0f, 0.0f, 0x1.ba3106p-50f,
     0.0f, 0x1.ca4204p-84f, 0.0f, 0.0f, 0x1.36a736p-8f, 0x1.dfd4f8p-119f,
     0x1.4af728p-85f, 0x1.48dfbep-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eaafaap-14f,
     0x1.a9aeb8p-93f, 0x1.3b0862p-69f, 0x1.8c080cp-49f, 0x1.9f786p-103f, 0.0f, 0.0f,
     0x1.d5885ap-21f, 0.0f, 0x1.e02c2cp-121f, 0.0f, 0x1.80807p-113f, 0x1.4efc8ep-58f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b7910cp-50f, 0.0f, 0x1.013484p-89f, 0x1.641ed8p-81f,
     0x1.3844dcp-69f, 0.0f, 0x1.ef144ep-88f, 0x1.4ff29ap-91f, 0.0f, 0.0f,
     0x1.225176p-61f, 0x1.0393b6p-14f, 0x1.cc604p-107f, 0x1.e9ff34p-69f,
     0x1.78c5fcp-58f, 0x1.1e2b56p-65f, 0x1.9b205cp-60f, 0x1.57dd66p-70f, 0.0f, 0.0f,
     0x1.1cf878p-7f, 0x1.5506aap-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3d345p-24f, 0x1.188278p-119f, 0x1.748e92p-109f, 0x1.671514p-107f, 0x1p0f,
     0.0f, 0x1.dd34fep-68f, 0x1.1b777p-8f, 0.0f, 0x1.5e60acp-73f, 0.0f, 0.0f, 0.0f,
     0x1.a022fp-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.943444p-3f, 0.0f, 0x1.065af2p-35f,
     0.0f, 0.0f, 0x1.95765ep-33f, 0.0f, 0x1.fec08p-107f, 0.0f, 0x1.22d3bap-68f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.5c2b3p-29f, 0x1.68903ap-11f, 0.0f, 0x1.de3d2ep-42f,
     0.0f, 0x1.9c9c2cp-71f, 0x1.269932p-51f, 0x1.4e304p-64f, 0.0f, 0x1.414aeep-6f,
     0x1.ee9f74p-7f, 0x1.e182fcp-74f, 0x1.9f3948p-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f3cce4p-93f, 0x1.4691cp-57f, 0x1.07cadep-47f, 0x1.f18fbp-88f, 0.0f,
     0x1.074062p-47f, 0.0f, 0x1.71d64ep-39f, 0.0f, 0x1.e8226cp-18f, 0.0f, 0.0f, 0.0f,
     0x1.df8af2p-9f, 0.0f, 0x1.04e72ap-4f, 0.0f, 0x1.e4b544p-111f, 0x1.e94ed6p-41f,
     0x1p0f, 0x1.6e5bf8p-79f, 0.0f, 0.0f, 0x1.502d34p-19f, 0x1.a50c12p-108f, 0.0f,
     0.0f, 0x1.c270bep-88f, 0x1.8261c2p-31f, 0x1.42068cp-1f, 0x1.752b82p-83f,
     0x1.c2a3cp-111f, 0.0f, 0.0f, 0x1.187324p-111f, 0.0f, 0x1.855ee6p-111f,
     0x1.0a5704p-32f, 0.0f, 0.0f, 0x1.a00282p-64f, 0x1.927f74p-84f, 0.0f,
     0x1.309d44p-28f, 0.0f, 0.0f, 0x1.6013d2p-38f, 0.0f, 0x1.16d31cp-7f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.06f7a4p-93f, 0x1p0f, 0.0f, 0x1.e190f4p-79f, 0.0f, 0.0f,
     0x1.447f7ap-71f, 0x1.e173a6p-104f, 0.0f, 0x1.84b182p-65f, 0.0f, 0.0f, 0.0f,
     0x1.e70c14p-28f, 0x1.0adbe4p-95f, 0.0f, 0.0f, 0x1.229ca2p-59f, 0x1.b65986p-76f,
     0.0f, 0x1.988312p-28f, 0.0f, 0x1.2307e6p-55f, 0x1.e85258p-119f, 0x1.3a9e76p-105f,
     0x1.e4fa6cp-23f, 0.0f, 0.0f, 0x1.abca36p-74f, 0x1.bcbf08p-113f, 0.0f,
     0x1.deb8a4p-112f, 0x1.385e2p-67f, 0x1.46471p-30f, 0x1.074252p-6f,
     0x1.60a9fap-60f, 0x1.85d418p-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6da6b4p-97f,
     0x1.0f9598p-72f, 0x1.4fad56p-4f, 0x1.828424p-82f, 0x1.722674p-113f,
     0x1.98c9c2p-9f, 0.0f, 0.0f, 0x1.0960acp-20f, 0.0f, 0x1.9e47f4p-10f,
     0x1.fd681cp-2f, 0x1.24671ap-32f, 0.0f, 0.0f, 0.0f, 0x1.f4caacp-100f,
     0x1.ab50d8p-4f, 0x1.cbeb9ep-111f, 0.0f, 0x1.d18112p-81f, 0x1.8d0362p-19f,
     0x1.2a446cp-43f, 0.0f, 0.0f, 0x1.71b57ap-108f, 0.0f, 0.0f, 0x1.ec0dfep-53f, 0.0f,
     0.0f, 0x1.0cf09ep-13f, 0x1.cb1864p-118f, 0x1.472e8ap-51f, 0x1.efd5eep-23f, 0.0f,
     0x1.8e9a6p-97f, 0.0f, 0x1.19ec5ep-74f, 0.0f, 0x1.e92f36p-10f, 0.0f,
     0x1.f0bc9cp-126f, 0x1.cbb11ap-102f, 0x1.0e7724p-92f, 0x1.8a3f66p-18f,
     0x1.a2cef4p-6f, 0.0f, 0x1.d96a8ep-98f, 0x1.b93e12p-47f, 0.0f, 0x1.db4afcp-126f,
     0.0f, 0x1.00c48ep-5f, 0x1.8ca36ap-50f, 0.0f, 0.0f, 0x1.16ae6ep-125f, 0.0f,
     0x1.dec546p-81f, 0x1.d8480cp-101f, 0.0f, 0x1.bdf942p-64f, 0.0f, 0.0f,
     0x1.a387c6p-40f, 0.0f, 0x1.da7b12p-24f, 0x1.ceead8p-20f, 0x1.fe57f2p-25f, 0.0f,
     0x1.74fbf2p-110f, 0x1.298e76p-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.60ea8ap-77f, 0x1.8fd708p-120f, 0x1.bead4p-1f,
     0x1.b68484p-10f, 0.0f, 0.0f, 0.0f, 0x1.7576b2p-16f, 0x1.d80466p-53f, 0.0f, 0.0f,
     0x1.3a8124p-41f, 0x1.46b796p-57f, 0x1.7dc8ccp-104f, 0x1.1f1de4p-118f, 0.0f,
     0x1.59e0acp-17f, 0x1.9e28bap-83f, 0x1.276fccp-122f, 0.0f, 0.0f, 0x1.13be9p-115f,
     0x1.5b5888p-108f, 0.0f, 0.0f, 0x1.edacb2p-115f, 0.0f, 0.0f, 0x1.da355ep-96f,
     0x1.5531bep-81f, 0.0f, 0.0f, 0x1.c32406p-86f, 0.0f, 0x1.5c2b58p-59f,
     0x1.c949f2p-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.db8558p-72f, 0.0f,
     0x1.154354p-69f, 0x1.ae2f9p-36f, 0x1.b02f86p-40f, 0x1.617cf4p-94f,
     0x1.a43d32p-111f, 0.0f, 0.0f, 0.0f, 0x1.adf95cp-90f, 0.0f, 0.0f, 0.0f,
     0x1.eee4f2p-38f, 0x1.6d395ep-86f, 0x1.3bed9ap-81f, 0x1.8ff20cp-83f,
     0x1.ba8c88p-31f, 0x1.8ad5ep-73f, 0x1.c9f466p-25f, 0x1.7de016p-37f, 0.0f,
     0x1.2c315ap-118f, 0x1.d422cap-110f, 0x1.232f38p-46f, 0x1.09a35ep-86f, 0.0f, 0.0f,
     0x1.1a0912p-9f, 0x1.96eccp-55f, 0.0f, 0x1.4f74c8p-83f, 0.0f, 0x1.447214p-104f,
     0x1.8dc9c8p-21f, 0.0f, 0x1.4a7fa6p-61f, 0.0f, 0.0f, 0x1.b89f5ep-92f,
     0x1.707784p-125f, 0.0f, 0x1.c1ec18p-63f, 0x1.9a3d58p-26f, 0.0f, 0.0f,
     0x1.af605ap-94f, 0x1.8985b6p-2f, 0.0f, 0.0f, 0x1.c041b4p-68f, 0.0f,
     0x1.734014p-1f, 0x1.7500eep-92f, 0x1.91a8fp-121f, 0.0f, 0.0f, 0x1.6ace26p-93f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f30ef6p-32f, 0.0f, 0x1.b95e88p-32f, 0.0f,
     0x1.06fd42p-71f, 0x1.6b3b18p-38f, 0.0f, 0.0f, 0.0f, 0x1.6076e2p-119f,
     0x1.616b9p-7f, 0x1.758e72p-20f, 0x1.17c994p-1f, 0x1.8b1ac4p-33f, 0.0f, 0.0f,
     0x1.cb7e94p-54f, 0.0f, 0.0f, 0x1.04100cp-118f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.44c052p-45f, 0x1.07a78p-102f, 0.0f, 0x1.86abdap-96f, 0x1.51327cp-15f, 0.0f,
     0x1.783deap-84f, 0.0f, 0.0f, 0x1.811c88p-18f, 0.0f, 0x1.5d2094p-27f, 0.0f,
     0x1.516744p-80f, 0x1p0f, 0.0f, 0x1.f5714p-67f, 0x1.fa42a2p-41f, 0x1.89477cp-125f,
     0.0f, 0x1.5a8182p-29f, 0x1.93457p-93f, 0.0f, 0x1.d9f9f4p-92f, 0.0f,
     0x1.838e08p-40f, 0x1.fbf10ep-20f, 0.0f, 0x1.f81a1ep-10f, 0.0f, 0x1.b74f22p-95f,
     0x1.9f7a96p-42f, 0.0f, 0x1.cdc17ep-50f, 0x1.268fbep-42f, 0.0f, 0x1.878a1cp-96f,
     0x1.bb3d88p-120f, 0.0f, 0.0f, 0x1.c889d2p-57f, 0x1.30199cp-98f, 0.0f, 0.0f,
     0x1.19c21cp-58f, 0x1.0d0854p-90f, 0.0f, 0.0f, 0x1.f4dbap-111f, 0.0f,
     0x1.31d7bap-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9c7806p-43f, 0x1.0d88fcp-82f, 0.0f,
     0.0f, 0x1.f82e7ep-23f, 0.0f, 0x1.64e786p-32f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e8147cp-35f, 0x1.c93986p-1f, 0x1.093844p-32f, 0.0f, 0.0f, 0.0f,
     0x1.0f2b5p-37f, 0.0f, 0.0f, 0x1.497ap-46f, 0.0f, 0x1.694c3ep-96f, 0x1.03a7ap-86f,
     0x1.855726p-31f, 0x1.00e07cp-118f, 0.0f, 0.0f, 0.0f, 0x1.6b07f8p-52f,
     0x1.da980cp-93f, 0.0f, 0.0f, 0.0f, 0x1.1527f8p-84f, 0x1.250ba8p-113f, 0.0f, 0.0f,
     0x1.1a9b5ep-4f, 0x1.c8c7ecp-95f, 0.0f, 0x1.153826p-45f, 0x1.2df9e2p-27f,
     0x1.b128cap-84f, 0.0f, 0x1.eca9ccp-28f, 0x1.42a1fp-81f, 0.0f, 0.0f,
     0x1.bd9c3cp-106f, 0x1.88361ep-1f, 0x1.694768p-81f, 0x1.ef4f42p-12f, 0.0f,
     0x1.dda478p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.75507ap-43f,
     0x1.e6d91ap-6f, 0x1.9af8c6p-13f, 0x1.4a1fcp-54f, 0.0f, 0x1.7896aep-55f,
     0x1.8f80a6p-11f, 0.0f, 0.0f, 0x1.b63c2ep-105f, 0x1.5cb324p-43f, 0x1.d945f4p-104f,
     0x1.e7274ep-36f, 0.0f, 0x1.b7733ep-89f, 0x1.13d868p-93f, 0x1.f17b8cp-38f,
     0x1.1200cap-109f, 0x1.e188ccp-30f, 0.0f, 0x1.edb648p-126f, 0x1.296e74p-106f,
     0x1.c4553ep-110f, 0.0f, 0x1.051d62p-60f, 0.0f, 0x1.e277d6p-38f, 0.0f,
     0x1.2ce126p-25f, 0.0f, 0x1.5503fcp-102f, 0x1.71753p-110f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.55f5b4p-53f, 0x1.0deb82p-88f, 0.0f, 0x1.1fa958p-37f, 0.0f, 0x1.0a2248p-30f,
     0.0f, 0x1.33a9eap-89f, 0x1.dfbb3ep-68f, 0x1.b6c84cp-61f, 0.0f, 0.0f,
     0x1.e554c6p-64f, 0.0f, 0x1.b57318p-125f, 0.0f, 0x1.73e224p-96f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.65d1bep-74f, 0x1.9d74f2p-43f, 0.0f, 0x1.f89b8ap-11f,
     0x1.1eb50ep-24f, 0.0f, 0x1.c6de6ep-34f, 0.0f, 0x1.b87bdep-3f, 0x1.946e3ep-64f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.43b08cp-45f, 0x1.e89cf4p-16f, 0x1.b5aee8p-122f,
     0x1.54e8f2p-57f, 0.0f, 0x1.558cdap-87f, 0x1.55050ep-117f, 0x1.e4d63p-54f,
     0x1.26ef82p-55f, 0.0f, 0.0f, 0.0f, 0x1.acb3e2p-116f, 0x1.59d488p-102f, 0.0f,
     0x1.fc510cp-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.70d342p-97f, 0x1.78499cp-117f, 0.0f,
     0.0f, 0x1.a8f12ep-84f, 0x1.76da52p-82f, 0x1.5b16ep-40f, 0x1.736dc8p-25f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b61c4p-85f, 0.0f, 0x1.271a4cp-116f, 0x1.4a1626p-86f,
     0x1.aaca8ep-71f, 0.0f, 0x1.880a7p-82f, 0.0f, 0.0f, 0x1.36cf0ep-66f,
     0x1.51033ep-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.7ec5c4p-37f,
     0x1.3d2d02p-48f, 0.0f, 0x1.5fe184p-90f, 0.0f, 0x1.67221ap-22f, 0x1.9c496cp-10f,
     0.0f, 0x1.612dc8p-117f, 0.0f, 0.0f, 0x1.f37b2cp-109f, 0x1.c1a0a6p-120f, 0.0f,
     0.0f, 0x1.600f8cp-111f, 0.0f, 0.0f, 0x1.1d1f72p-14f, 0.0f, 0x1.15b35ep-92f,
     0x1.079e4p-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4dec4cp-27f, 0x1.b89b62p-108f, 0.0f,
     0x1.30dde4p-15f, 0x1.ec4d48p-36f, 0.0f, 0.0f, 0x1.c6bd4p-46f, 0x1.e4838ep-53f,
     0x1.605186p-66f, 0x1.fb36ep-78f, 0.0f, 0.0f, 0.0f, 0x1.baf086p-69f,
     0x1.34029p-40f, 0x1.25e76ap-54f, 0.0f, 0.0f, 0.0f, 0x1.e69f7cp-96f,
     0x1.63bf68p-29f, 0x1.a7bbbap-3f, 0x1.642684p-32f, 0.0f, 0x1.12f42ap-11f, 0x1p0f,
     0.0f, 0.0f, 0.0f, 0x1.58e126p-7f, 0.0f, 0x1.8046p-34f, 0.0f, 0x1.b6a236p-39f,
     0x1.87e4f2p-9f, 0x1.3dcb8p-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.52b26ep-125f,
     0x1.868926p-104f, 0x1.0742a4p-32f, 0.0f, 0x1.8fb31cp-105f, 0x1.50309ep-88f,
     0x1.16a22ap-80f, 0.0f, 0x1.d32f1ep-77f, 0.0f, 0x1.97db2p-74f, 0.0f, 0.0f,
     0x1.651be2p-32f, 0.0f, 0.0f, 0.0f, 0x1.1d27b2p-74f, 0.0f, 0x1.17cfeep-119f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3a340ep-73f, 0.0f, 0.0f, 0.0f,
     0x1.78448ep-103f, 0x1.246fecp-58f, 0.0f, 0x1.760d46p-24f, 0.0f, 0.0f, 0.0f,
     0x1.c359fep-74f, 0x1.4202b8p-14f, 0x1.d2a6aep-65f, 0.0f, 0x1.cbf522p-110f,
     0x1.dd89c6p-22f, 0x1.27811ep-90f, 0x1.e940a4p-110f, 0x1.7fd892p-18f,
     0x1.204794p-35f, 0x1.0a67d6p-79f, 0.0f, 0.0f, 0x1.ed6ac2p-14f, 0x1.50870ap-97f,
     0.0f, 0.0f, 0x1.bda314p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.354beap-117f,
     0x1.db0014p-113f, 0x1.eef99p-86f, 0x1.765cd8p-57f, 0.0f, 0.0f, 0.0f,
     0x1.7eeb5ep-50f, 0.0f, 0x1.197316p-66f, 0.0f, 0x1.9c0d88p-105f, 0x1.168c06p-74f,
     0x1.d58a5cp-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7f6b58p-70f, 0x1.e3d06ep-92f, 0.0f,
     0x1.c4e0e4p-110f, 0.0f, 0x1.2031ep-30f, 0.0f, 0x1.73e832p-104f, 0x1.c7f21ep-78f,
     0x1.758f9ep-2f, 0x1.8b72b6p-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0af58p-7f,
     0x1.78ef58p-117f, 0.0f, 0x1.bbaaecp-94f, 0x1.cbadf4p-109f, 0.0f, 0x1.73c11ep-78f,
     0x1.86f592p-112f, 0.0f, 0x1.7e5728p-97f, 0.0f, 0x1.0aaec8p-71f, 0x1.2b2cc6p-43f,
     0x1.4174f4p-110f, 0x1.67f6b4p-22f, 0x1.980666p-96f, 0x1.ea5c44p-104f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.968388p-66f, 0x1.8b2bfep-98f, 0x1.6219cep-52f, 0x1.4ac1fep-20f
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
            tmp2 = Sleef_finz_hypotf8_u35kvx(tmp0, tmp1);
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
    printf("Sleef_finz_hypotf8_u35kvx %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_finz_hypotf8_u35kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
