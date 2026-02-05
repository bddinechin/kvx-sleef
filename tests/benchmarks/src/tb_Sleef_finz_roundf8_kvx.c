/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_roundf8_kvx.c --function Sleef_finz_roundf8_kvx \
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
     0x1.87240ap-8f, 0.0f, 0x1.80b91p-30f, 0x1.3c41bp-79f, 0.0f, 0.0f,
     0x1.0e287ep-30f, 0.0f, 0.0f, 0.0f, 0x1.3eaef8p-122f, 0.0f, 0.0f, 0x1.3a4f3ep-12f,
     0.0f, 0.0f, 0.0f, 0x1.54615cp-122f, 0.0f, 0x1.b877eap-103f, 0.0f,
     0x1.56c6cep-102f, 0x1.f0aacep-120f, 0x1.44457p-78f, 0x1.ae3032p-51f, 0.0f,
     0x1.b1ca3p-28f, 0x1.c1c266p-111f, 0.0f, 0x1.cd8b06p-26f, 0.0f, 0x1.d99d6cp-117f,
     0x1.78752cp-6f, 0.0f, 0.0f, 0x1.8a53d2p-27f, 0x1.eacbc2p-92f, 0x1.cf6fep-26f,
     0.0f, 0x1.8356dp-67f, 0x1.42a372p-58f, 0x1.6f3d32p-15f, 0x1.52c68ap-24f, 0.0f,
     0.0f, 0x1.105e24p-16f, 0.0f, 0x1.c0cb48p-8f, 0x1.86ff0cp-41f, 0x1.e5482p-7f,
     0.0f, 0x1.53addcp-104f, 0.0f, 0.0f, 0x1.f1ee7ap-93f, 0x1.57ad9ap-53f,
     0x1.d8135ap-51f, 0x1.f3a2e8p-113f, 0x1.b1b4dp-7f, 0x1.4ca606p-125f,
     0x1.0ff22ep-42f, 0x1.4f5834p-4f, 0.0f, 0.0f, 0x1.a5443cp-39f, 0x1.e5efeap-120f,
     0x1.138324p-5f, 0.0f, 0x1.7c3bfep-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e9d6cap-96f,
     0x1.6220fep-23f, 0x1.721156p-121f, 0x1.2e7e9ep-76f, 0x1.65e346p-5f,
     0x1.b0b88cp-57f, 0.0f, 0.0f, 0x1.0b0072p-114f, 0x1.54ff3ep-63f, 0.0f,
     0x1.dd1158p-52f, 0x1.b1359ap-119f, 0.0f, 0.0f, 0x1.686488p-53f, 0x1p0f, 0.0f,
     0x1.ed055p-61f, 0.0f, 0.0f, 0x1.2d2852p-43f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a8a4ecp-36f, 0.0f, 0x1.19995p-61f, 0x1.317db8p-100f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.df2fa2p-49f, 0.0f, 0x1.cfb29p-47f, 0.0f, 0.0f, 0x1.19a04p-113f, 0.0f,
     0x1.29d766p-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c850aap-89f,
     0x1.28f67ep-87f, 0.0f, 0x1.79ab68p-88f, 0x1.c93982p-100f, 0x1.a67832p-107f, 0.0f,
     0.0f, 0.0f, 0x1.b03f04p-110f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.1e7524p-119f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3475eep-28f, 0.0f, 0.0f, 0.0f, 0x1.4b00dcp-102f,
     0.0f, 0.0f, 0.0f, 0x1.95f07ap-56f, 0.0f, 0x1.7543bp-116f, 0x1.f9d57cp-74f, 0.0f,
     0.0f, 0.0f, 0x1.17506ap-59f, 0x1.c22626p-67f, 0x1.880532p-112f, 0x1.e5a242p-88f,
     0.0f, 0x1.3c2fb2p-121f, 0x1.6524d4p-62f, 0x1.b6309p-64f, 0x1.4bccc6p-59f,
     0x1.9ad5b4p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.89eecap-44f, 0.0f, 0.0f,
     0.0f, 0x1.a8d9f4p-5f, 0.0f, 0x1.2a1e12p-21f, 0.0f, 0x1.d67708p-110f,
     0x1.eb28b8p-67f, 0.0f, 0x1.3ed2fcp-12f, 0.0f, 0.0f, 0.0f, 0x1.f5e216p-86f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.caed02p-73f, 0.0f, 0x1.2b770ep-76f, 0x1.c29de2p-95f,
     0x1.438462p-125f, 0x1.24eb8p-98f, 0x1.ecdbd4p-50f, 0x1.d80adap-11f, 0.0f,
     0x1.04855p-110f, 0.0f, 0.0f, 0.0f, 0x1.753638p-115f, 0x1.30436ap-43f,
     0x1.5fd392p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f9e3e6p-107f, 0x1.c6aec8p-68f,
     0x1.83ffd8p-92f, 0.0f, 0.0f, 0.0f, 0x1.f4a7fap-9f, 0.0f, 0x1.2076f4p-19f, 0.0f,
     0x1.d51962p-39f, 0.0f, 0.0f, 0x1.e6b994p-75f, 0.0f, 0x1.1ea346p-73f,
     0x1.14a04p-14f, 0x1.5d37f6p-97f, 0x1.3b90eap-52f, 0.0f, 0.0f, 0.0f,
     0x1.dc8d88p-19f, 0.0f, 0.0f, 0x1.5de6cp-62f, 0x1.19be88p-114f, 0.0f, 0.0f, 0.0f,
     0x1.d784e4p-32f, 0x1.a8ed68p-64f, 0.0f, 0x1.39e73cp-117f, 0x1.ac442ep-107f,
     0x1.c8f1fap-1f, 0.0f, 0.0f, 0.0f, 0x1.7bbd1ap-80f, 0x1.056538p-70f,
     0x1.43972p-71f, 0x1.3a644ep-62f, 0.0f, 0x1.82bffap-21f, 0.0f, 0x1.f58c16p-70f,
     0.0f, 0.0f, 0.0f, 0x1.d5cbeap-16f, 0x1.942656p-68f, 0x1.7929ccp-101f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6fd5e6p-97f, 0.0f, 0x1.060adap-23f, 0.0f,
     0x1.f4e776p-8f, 0x1.50deccp-25f, 0.0f, 0.0f, 0x1.d9f6f6p-112f, 0.0f,
     0x1.e0f4dcp-75f, 0x1.77878cp-115f, 0.0f, 0x1.c5b8ep-91f, 0.0f, 0x1.40e8a6p-92f,
     0.0f, 0x1.a37656p-108f, 0.0f, 0.0f, 0x1.ba60aap-21f, 0.0f, 0x1.93a38p-44f,
     0x1.d6ab8ep-36f, 0x1.3e228cp-33f, 0.0f, 0x1.488186p-83f, 0x1.f23b92p-1f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.221758p-117f, 0x1.11ac5ap-125f, 0.0f, 0.0f,
     0x1.f6b23ap-92f, 0x1.212b26p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a881cep-48f,
     0x1.becafap-57f, 0x1.5544f8p-44f, 0x1.260c1p-94f, 0.0f, 0x1.c8a15ep-83f,
     0x1.5571f2p-77f, 0x1.66f4ccp-61f, 0x1.cb99eap-59f, 0.0f, 0.0f, 0x1.94ad28p-91f,
     0x1.b433c4p-117f, 0x1.37289p-92f, 0.0f, 0x1.09544ep-86f, 0.0f, 0x1.2c33ep-68f,
     0.0f, 0.0f, 0x1.9beb0ap-117f, 0.0f, 0.0f, 0x1.4af9aap-84f, 0.0f, 0.0f,
     0x1.f7385p-19f, 0x1.b68e06p-39f, 0x1.8f0b12p-21f, 0x1.6f3a32p-103f, 0.0f,
     0x1.fd27a6p-30f, 0.0f, 0x1.e45de8p-57f, 0.0f, 0.0f, 0.0f, 0x1.7ce36cp-124f,
     0x1.55ea9ap-55f, 0x1.c694c4p-1f, 0.0f, 0.0f, 0x1.de93f4p-109f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.6305c4p-34f, 0.0f, 0x1.01b46p-3f, 0.0f, 0x1.8981fep-87f, 0.0f,
     0x1.c24374p-63f, 0.0f, 0.0f, 0.0f, 0x1.1b1752p-121f, 0x1.3789eep-12f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.1be772p-7f, 0.0f, 0.0f, 0x1.77caaep-106f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.1110e6p-90f, 0.0f, 0x1.8db3d8p-32f, 0x1.e580fep-97f,
     0x1.3720f8p-35f, 0.0f, 0.0f, 0x1.f84feap-107f, 0.0f, 0.0f, 0x1.caa184p-11f, 0.0f,
     0x1.ed1e82p-104f, 0x1.1017e8p-106f, 0x1.dafd04p-87f, 0x1.d12a7cp-79f,
     0x1.6903c4p-110f, 0x1.8d7ad4p-2f, 0.0f, 0.0f, 0.0f, 0x1.42f544p-91f, 0.0f, 0.0f,
     0x1.6f58fap-4f, 0.0f, 0.0f, 0x1.5f81b8p-18f, 0x1.3c85c4p-124f, 0.0f,
     0x1.e1cb2ap-1f, 0x1.074632p-105f, 0.0f, 0x1.d69182p-126f, 0.0f, 0x1.f902aap-92f,
     0x1.177662p-98f, 0.0f, 0x1.5a48e4p-58f, 0x1.4bd66ep-13f, 0.0f, 0x1.88c2ap-125f,
     0x1.e98a8p-69f, 0x1.2975bcp-49f, 0.0f, 0.0f, 0x1.cec2ap-9f, 0x1.cba412p-4f, 0.0f,
     0x1.d4154ep-118f, 0x1.4a0092p-6f, 0.0f, 0x1.db571p-34f, 0x1.e3ac96p-4f, 0.0f,
     0.0f, 0x1.d4d70ap-33f, 0.0f, 0x1.b614b2p-17f, 0.0f, 0x1.b3e7dp-121f, 0.0f,
     0x1.6fc232p-69f, 0x1.000e7ep-122f, 0.0f, 0x1.f9ccaap-37f, 0x1.b8f9e4p-126f, 0.0f,
     0x1.983f5ap-92f, 0.0f, 0x1.d22862p-27f, 0x1.077ca4p-47f, 0.0f, 0x1.24621p-75f,
     0.0f, 0x1.1375fep-27f, 0x1.068db2p-90f, 0.0f, 0.0f, 0x1.57c4d4p-11f, 0.0f,
     0x1.1d6636p-116f, 0x1.d88b7ap-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b79514p-99f,
     0.0f, 0x1.ff7aacp-42f, 0x1.52091cp-111f, 0x1.76f75ap-72f, 0x1.f70614p-124f, 0.0f,
     0.0f, 0.0f, 0x1.c05856p-101f, 0.0f, 0x1.a70a0ep-80f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.c06e36p-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.43c906p-113f,
     0x1.970a6p-1f, 0x1.f84778p-12f, 0x1.df8d5ep-26f, 0.0f, 0x1.133de6p-98f,
     0x1.b13a8ep-69f, 0.0f, 0x1.17d1ccp-117f, 0.0f, 0.0f, 0x1.530f18p-14f,
     0x1.e19e1ap-10f, 0x1.727c66p-90f, 0.0f, 0.0f, 0.0f, 0x1.d3e8e6p-36f, 0.0f,
     0x1.1fd246p-47f, 0.0f, 0x1.2d8ba4p-85f, 0x1.8c4b18p-19f, 0x1.fedee4p-1f,
     0x1.f05a1ep-118f, 0x1.e2f904p-67f, 0x1.39a542p-11f, 0x1.954aaep-115f, 0.0f,
     0x1.742ac6p-109f, 0.0f, 0.0f, 0x1.651ba4p-52f, 0.0f, 0x1.01c5dcp-107f, 0.0f,
     0x1.11c82cp-36f, 0x1.3e0fccp-126f, 0.0f, 0x1.3653e8p-91f, 0.0f, 0.0f,
     0x1.f68a86p-14f, 0x1.1243bcp-120f, 0x1.f53adp-101f, 0x1.b36958p-64f,
     0x1.63c96ep-72f, 0.0f, 0x1.60b88p-15f, 0.0f, 0x1.7a58c6p-77f, 0.0f,
     0x1.a0bb3ep-110f, 0x1.f36da6p-120f, 0x1.f72332p-65f, 0x1.df5364p-34f, 0.0f,
     0x1.c4953cp-12f, 0x1.988b64p-121f, 0.0f, 0x1.fa7008p-100f, 0.0f, 0.0f,
     0x1.4ca80cp-19f, 0x1.30f5bap-27f, 0.0f, 0.0f, 0.0f, 0x1.eb9058p-54f,
     0x1.cdae5p-61f, 0.0f, 0.0f, 0x1.e026b2p-91f, 0x1.c9829ep-85f, 0x1.26002ap-53f,
     0.0f, 0x1.538d4cp-54f, 0x1.d6c38cp-62f, 0.0f, 0.0f, 0.0f, 0x1.97d5e2p-107f, 0.0f,
     0.0f, 0x1.bde2d4p-121f, 0x1.1164bp-5f, 0.0f, 0x1.f5cafap-108f, 0.0f,
     0x1.06c19p-43f, 0x1.20a02ep-68f, 0x1.0ad194p-122f, 0.0f, 0x1.5dcbcep-121f,
     0x1.76c95p-45f, 0x1.370a7cp-29f, 0.0f, 0x1.b5e416p-51f, 0x1.8c9ep-111f, 0.0f,
     0x1.2dc642p-4f, 0.0f, 0x1.3ce248p-46f, 0.0f, 0x1.39371ap-116f, 0x1.d420eap-97f,
     0.0f, 0x1.5aa32ap-122f, 0x1.2aebccp-22f, 0.0f, 0x1.bec0cep-92f, 0.0f,
     0x1.999a3p-107f, 0.0f, 0x1.2e7738p-16f, 0.0f, 0.0f, 0x1.9ae0b8p-122f,
     0x1.972156p-115f, 0x1.7cbc22p-121f, 0.0f, 0x1.8a69d4p-94f, 0x1.2fdb0ep-71f, 0.0f,
     0x1.bda3a4p-104f, 0.0f, 0.0f, 0x1.bbb7p-91f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.95e93cp-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.df50cep-38f, 0.0f, 0x1.cf0caep-26f,
     0.0f, 0.0f, 0x1.9a93b2p-107f, 0x1.5abdd4p-39f, 0.0f, 0x1.74ee6p-9f,
     0x1.19f182p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.831158p-65f,
     0x1.97b9fep-58f, 0.0f, 0.0f, 0x1.7af24ap-45f, 0x1.3938eep-76f, 0x1.acc32ap-70f,
     0x1.c971fep-80f, 0.0f, 0.0f, 0.0f, 0x1.965306p-107f, 0.0f, 0.0f, 0x1.a02ae6p-17f,
     0x1.b6f4acp-122f, 0x1.b0afbep-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e37e9ap-46f, 0x1.640368p-96f, 0.0f, 0.0f, 0x1.5c0a1p-49f, 0.0f,
     0x1.1b16ecp-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.75f95p-16f, 0.0f,
     0x1.1e8176p-35f, 0.0f, 0.0f, 0.0f, 0x1.564066p-2f, 0x1.95ad6cp-32f,
     0x1.7c20d6p-27f, 0x1.623ad2p-113f, 0.0f, 0.0f, 0x1.f7181p-108f, 0.0f,
     0x1.e648b4p-2f, 0x1.6cc73ep-77f, 0x1.ddf0cp-37f, 0x1.fe2434p-16f, 0.0f,
     0x1.4cd2c4p-93f, 0.0f, 0.0f, 0.0f, 0x1.40a898p-106f, 0x1.02615ep-120f, 0.0f,
     0x1.539c64p-58f, 0.0f, 0x1.fccbe4p-40f, 0.0f, 0x1.03d6bep-109f, 0x1.b4c02cp-31f,
     0.0f, 0x1.f4371ap-104f, 0x1.cdfad2p-22f, 0x1.1b6edp-67f, 0x1.e74a24p-74f,
     0x1.5b41ecp-70f, 0x1.4348b4p-54f, 0.0f, 0x1.138c84p-19f, 0.0f, 0x1.c7e9bcp-115f,
     0.0f, 0.0f, 0.0f, 0x1.b41be4p-29f, 0x1.5016a6p-52f, 0x1.f1eea2p-9f,
     0x1.6c4b4ep-52f, 0x1.3e75f4p-108f, 0x1.192dfep-60f, 0x1.eeb3acp-34f, 0.0f,
     0x1.0a0b8ep-124f, 0.0f, 0x1.3ce3aep-79f, 0.0f, 0x1.ac80bap-115f, 0.0f, 0.0f,
     0x1.4e608ep-84f, 0.0f, 0x1.05346ep-23f, 0x1.c04796p-76f, 0x1.a54748p-101f,
     0x1.05476cp-109f, 0.0f, 0.0f, 0x1.d580b4p-79f, 0.0f, 0x1.8373cp-58f, 0.0f,
     0x1.59fecap-1f, 0.0f, 0.0f, 0x1.2b65fap-30f, 0x1.a9d502p-55f, 0.0f, 0.0f,
     0x1.3521b4p-2f, 0x1.f6c60cp-75f, 0.0f, 0.0f, 0x1.03c7aep-78f, 0x1.ca6388p-2f,
     0.0f, 0x1.762dbcp-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3195f2p-44f, 0.0f,
     0x1.d4fa9p-16f, 0x1.a74c38p-50f, 0x1.d6e8e4p-23f, 0x1.39479cp-13f,
     0x1.cbf9acp-61f, 0.0f, 0x1.cb8ec2p-46f, 0x1.e1bd12p-50f, 0x1.405904p-121f,
     0x1.7f1c36p-59f, 0x1.92d3c6p-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.20c67ep-40f,
     0x1.991ff4p-123f, 0x1.61174cp-31f, 0x1.9ee592p-121f, 0.0f, 0.0f,
     0x1.28f73cp-117f, 0.0f, 0x1.d99c3cp-83f, 0.0f, 0x1.224536p-51f, 0x1.8b493ep-77f,
     0.0f, 0.0f, 0x1.852fbep-77f, 0x1.75463ep-3f, 0x1.b1579p-27f, 0.0f, 0.0f,
     0x1.e6a29ap-90f, 0.0f, 0.0f, 0x1.1b3ebp-29f, 0.0f, 0x1.ee223p-47f, 0.0f,
     0x1.0e163ep-81f, 0.0f, 0x1.a680f2p-66f, 0x1.bc3e64p-48f, 0.0f, 0.0f, 0x1p0f,
     0x1.78b8d2p-62f, 0x1.4fd162p-64f, 0x1.8e1264p-1f, 0x1.d2d264p-47f,
     0x1.a87892p-75f, 0.0f, 0x1.7834a8p-84f, 0x1.25cccep-126f, 0x1.97f33cp-22f, 0.0f,
     0x1.2cfbdp-112f, 0x1.902f7ep-89f, 0.0f, 0.0f, 0.0f, 0x1.a9e218p-102f, 0.0f,
     0x1.8b603p-14f, 0x1.1937fp-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3e48e4p-105f,
     0x1.985e2ep-72f, 0x1.2037f4p-19f, 0x1.ba0694p-57f, 0x1.3cc48ep-120f,
     0x1.f30b68p-117f, 0.0f, 0x1.298a58p-56f, 0.0f, 0.0f, 0x1.3b122ep-102f, 0.0f,
     0.0f, 0x1.0f4214p-52f, 0x1.a6f8cep-4f, 0.0f, 0.0f, 0x1.225866p-118f, 0.0f,
     0x1.79e732p-124f, 0.0f, 0x1.1fb20cp-40f, 0x1.5dd658p-74f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8094b8p-105f, 0.0f, 0x1.923d66p-10f, 0.0f, 0x1.787252p-117f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4c9524p-52f, 0x1.bdf8c4p-44f, 0.0f, 0.0f, 0x1.67cc64p-101f,
     0x1.5699f2p-22f, 0.0f, 0.0f, 0.0f, 0x1.ba92c8p-32f, 0.0f, 0x1.9d4576p-67f, 0.0f,
     0.0f, 0x1.5af346p-63f, 0x1.c144b4p-84f, 0.0f, 0.0f, 0x1.aeb2bap-104f,
     0x1.494c36p-90f, 0.0f, 0x1.4a226p-108f, 0.0f, 0x1.b908e8p-12f, 0x1.8caf42p-40f,
     0x1.fcf08cp-87f, 0x1.66c82ap-24f, 0x1.f6a074p-56f, 0x1.0f647ap-47f, 0.0f,
     0x1.d4c5c2p-37f, 0x1.b3fddep-82f, 0x1.3d4c28p-116f, 0x1.81185cp-34f,
     0x1.63d6a6p-93f, 0x1.3f806p-64f, 0x1.10a0a2p-64f, 0x1.a5c6b2p-66f,
     0x1.6a19eap-93f, 0x1.f00fcap-113f, 0.0f, 0x1.61f824p-125f, 0.0f, 0.0f, 0.0f,
     0x1.1e0df4p-67f, 0.0f, 0.0f, 0x1.347cf6p-64f, 0.0f, 0x1.6c923ep-119f,
     0x1.e60e9p-126f, 0.0f, 0.0f, 0x1.e78a4cp-116f, 0x1.70dc2ep-109f, 0x1.a73572p-12f,
     0x1.199974p-116f, 0.0f, 0x1.0b3a86p-122f, 0.0f, 0.0f, 0x1.3f5acep-96f,
     0x1.e34422p-56f, 0x1.76f7b8p-38f, 0x1p0f, 0.0f, 0x1.9158c2p-58f, 0x1.181714p-65f,
     0x1.9c86fap-90f, 0.0f, 0x1.a3e2fp-122f, 0x1.2e42cap-35f, 0.0f, 0x1.7eb574p-12f,
     0.0f, 0x1.fdbe22p-61f, 0x1.3be3dep-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.521cbp-83f, 0x1.47b536p-110f, 0x1.1962c2p-18f, 0x1.63153p-43f,
     0x1.1e5414p-90f, 0.0f, 0x1.5eaa08p-85f, 0.0f, 0.0f, 0x1.7fb81p-106f, 0.0f, 0.0f,
     0x1.840a94p-38f, 0.0f, 0x1.c5e676p-122f, 0.0f, 0.0f, 0x1.40bddcp-75f, 0.0f, 0.0f,
     0.0f, 0x1.195ap-48f, 0x1.0b2adcp-34f, 0.0f, 0.0f, 0x1.ac1a78p-84f, 0.0f, 0.0f
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
            tmp1 = Sleef_finz_roundf8_kvx(tmp0);
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
    printf("Sleef_finz_roundf8_kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_finz_roundf8_kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
