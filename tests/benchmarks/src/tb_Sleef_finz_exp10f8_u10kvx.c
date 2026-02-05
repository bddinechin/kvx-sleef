/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_exp10f8_u10kvx.c --function \
 *     Sleef_finz_exp10f8_u10kvx --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6a1e64p-59f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.abeb4p-2f, 0x1.1691f6p-69f, 0.0f, 0x1.45724p-39f, 0.0f,
     0x1.1b34cap-101f, 0x1.8b6c32p-109f, 0.0f, 0x1.4e81bp-15f, 0x1.43a7cap-115f, 0.0f,
     0x1.7eb5c4p-60f, 0x1.eb8ddcp-82f, 0.0f, 0x1.dfa694p-89f, 0.0f, 0x1.d02e98p-34f,
     0x1.3ca33ap-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.460ac6p-9f, 0x1.ea8a28p-51f,
     0x1.a12a6ap-50f, 0.0f, 0.0f, 0x1.8a8cap-17f, 0.0f, 0x1.a33e22p-90f,
     0x1.898f9p-123f, 0x1.559e6ep-11f, 0x1.69fa62p-75f, 0.0f, 0.0f, 0x1.afde7ep-59f,
     0x1.b0f894p-13f, 0x1.3e1f9p-101f, 0.0f, 0x1.365cbep-12f, 0.0f, 0.0f,
     0x1.e080cp-78f, 0.0f, 0x1.6e83cp-106f, 0.0f, 0.0f, 0.0f, 0x1.9cf9eep-54f, 0.0f,
     0x1.a20e24p-111f, 0x1.ec34dp-42f, 0x1.4bf9aap-101f, 0.0f, 0x1.8ada84p-113f,
     0x1.cd4334p-110f, 0.0f, 0.0f, 0x1.89a202p-84f, 0x1.414b2cp-49f, 0x1.14174ep-80f,
     0.0f, 0x1.594aeep-121f, 0x1.953fe6p-77f, 0x1.d3025p-75f, 0x1.e2a46ep-48f,
     0x1.374d38p-91f, 0x1.330ff4p-50f, 0.0f, 0x1.f8667cp-85f, 0x1.5c596ap-70f,
     0x1.daf40ap-21f, 0.0f, 0x1.75bd08p-120f, 0.0f, 0x1.515762p-107f, 0.0f, 0.0f,
     0.0f, 0x1.aad89p-75f, 0x1.919108p-21f, 0x1.fc3186p-25f, 0.0f, 0x1.cc32eap-56f,
     0x1.8fbed4p-89f, 0.0f, 0.0f, 0x1.9ad43ap-59f, 0x1.b860f6p-74f, 0x1.f38654p-80f,
     0.0f, 0x1.c830fp-92f, 0x1.72e9b4p-70f, 0x1.cc5a1p-18f, 0x1.14ce44p-106f, 0.0f,
     0x1.a07cc4p-6f, 0.0f, 0.0f, 0.0f, 0x1.176bacp-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e8bf44p-71f, 0.0f, 0.0f, 0x1.d88b08p-67f, 0x1.d225a4p-60f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9e635cp-56f, 0.0f, 0x1.ed6406p-79f, 0.0f,
     0.0f, 0x1.6249fp-117f, 0x1.535a62p-124f, 0x1.ee29e8p-65f, 0.0f, 0x1.06e4f4p-101f,
     0x1.138aap-93f, 0x1.5450a4p-13f, 0.0f, 0.0f, 0.0f, 0x1.7eb2bep-22f,
     0x1.013c8p-88f, 0x1.05a0a2p-9f, 0x1.62a2d6p-15f, 0.0f, 0x1.b0964ap-99f, 0.0f,
     0x1.23e5d4p-73f, 0x1.249f5p-57f, 0x1.4762d2p-120f, 0.0f, 0x1.98620ap-76f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1dbd3ap-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d8e176p-105f, 0.0f, 0x1.ef660cp-110f, 0x1.74ccd4p-125f, 0x1.39ab82p-32f,
     0x1.cba298p-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.53f3e8p-79f, 0x1.4d05b8p-44f, 0.0f,
     0x1.65802p-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.50a87ap-52f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d34638p-16f, 0.0f, 0x1.a2a04ep-92f, 0.0f, 0x1.d7d8ccp-59f, 0.0f,
     0x1.7e1ab6p-56f, 0.0f, 0.0f, 0x1.aa88d8p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.84075cp-115f, 0.0f, 0x1.edb3d2p-20f, 0.0f, 0.0f, 0x1.81abb2p-30f, 0.0f,
     0x1.552b6cp-80f, 0x1.08d5e6p-12f, 0x1.7a0d8ap-69f, 0x1.6dd6a4p-95f,
     0x1.594a72p-65f, 0x1.b46bb8p-22f, 0x1.23f1ccp-69f, 0.0f, 0x1.db5a7ap-24f, 0.0f,
     0x1.b4063p-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.37726ap-3f, 0.0f,
     0.0f, 0x1.eb84b2p-40f, 0.0f, 0x1.2617eap-63f, 0.0f, 0.0f, 0x1.188c2ep-85f,
     0x1.3e1148p-20f, 0x1.c9238ep-42f, 0x1.f884fp-14f, 0.0f, 0x1.e01582p-112f,
     0x1.6c5a5cp-6f, 0x1.f20d4ep-62f, 0.0f, 0.0f, 0x1.f96518p-6f, 0.0f,
     0x1.539178p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.323e0ep-116f, 0.0f, 0.0f, 0.0f,
     0x1.4623c2p-15f, 0x1.763a76p-51f, 0.0f, 0x1.7c24bp-13f, 0.0f, 0x1.3376cp-76f,
     0.0f, 0.0f, 0.0f, 0x1.3b2dc4p-66f, 0.0f, 0.0f, 0.0f, 0x1.1ea9f2p-9f,
     0x1.fc8f54p-122f, 0.0f, 0x1.b631ap-47f, 0.0f, 0x1.06adp-84f, 0x1.a28d9p-12f,
     0.0f, 0.0f, 0x1.0f112ap-37f, 0.0f, 0.0f, 0x1.4b9918p-73f, 0.0f, 0.0f,
     0x1.c3f0ccp-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a6870cp-78f, 0.0f, 0x1.0550aep-97f,
     0x1.b203c2p-119f, 0.0f, 0.0f, 0x1.ec0b7p-120f, 0x1.f77864p-107f, 0.0f,
     0x1.0a7372p-17f, 0.0f, 0x1.ff9c1cp-80f, 0.0f, 0.0f, 0.0f, 0x1.9175a6p-81f,
     0x1.fcbcecp-96f, 0.0f, 0x1.821004p-77f, 0.0f, 0x1.0239c2p-13f, 0.0f, 0.0f,
     0x1.b598cp-117f, 0x1.b30e7ep-94f, 0.0f, 0x1.c6a80ap-71f, 0.0f, 0.0f,
     0x1.368dbap-51f, 0.0f, 0.0f, 0x1.f0694cp-114f, 0x1.98a8d6p-27f, 0x1.9f3968p-88f,
     0.0f, 0x1.b00574p-12f, 0x1.5d6112p-113f, 0x1.84a0f4p-16f, 0.0f, 0.0f,
     0x1.9fe44cp-35f, 0x1.37d7c8p-96f, 0x1.8dd82ap-90f, 0.0f, 0.0f, 0.0f,
     0x1.dab168p-30f, 0.0f, 0x1.a6a85p-61f, 0x1.0221b8p-13f, 0.0f, 0.0f, 0.0f,
     0x1.8165cap-32f, 0x1.f3a9aep-71f, 0x1.bc60a2p-81f, 0.0f, 0x1.3ced4cp-32f, 0.0f,
     0.0f, 0.0f, 0x1p0f, 0x1.0c09dap-103f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.581216p-60f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.250424p-101f, 0x1.4dcbbcp-30f, 0.0f,
     0x1.bad4bp-102f, 0x1.22d9d2p-54f, 0x1.26ace2p-79f, 0x1.f43f5ep-74f, 0.0f,
     0x1.01592p-40f, 0x1.283378p-118f, 0.0f, 0x1.e4582p-61f, 0.0f, 0.0f, 0.0f,
     0x1.127114p-63f, 0x1.79a40ap-52f, 0.0f, 0x1.7de866p-99f, 0.0f, 0x1.cb69aep-9f,
     0.0f, 0.0f, 0.0f, 0x1.13e95ep-9f, 0x1.4a213ep-79f, 0x1.6cbf22p-111f,
     0x1.b783b6p-92f, 0x1.e71d26p-44f, 0x1.d2a5a6p-92f, 0x1.a7dbf8p-112f, 0.0f, 0.0f,
     0x1.d2096cp-106f, 0.0f, 0x1.26d694p-13f, 0x1.c3ccb6p-102f, 0x1.9fe3f4p-92f,
     0x1.03ffbap-119f, 0x1.5151bep-114f, 0x1.6c86e4p-26f, 0x1.98915ap-124f,
     0x1.e1dc2ep-65f, 0x1.ab9506p-62f, 0x1.a60346p-51f, 0x1.92b5f6p-18f, 0.0f,
     0x1.f5b03ap-41f, 0.0f, 0x1.18b45cp-53f, 0x1.477c9p-69f, 0x1.92800cp-76f, 0.0f,
     0x1.41a0a8p-104f, 0x1.320e88p-26f, 0.0f, 0x1.d618ecp-13f, 0x1.d6c358p-65f,
     0x1.0f16a6p-49f, 0.0f, 0x1.6812bp-88f, 0.0f, 0x1.e6561ep-57f, 0.0f,
     0x1.1b396cp-43f, 0.0f, 0x1.acb65cp-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.15879cp-106f, 0x1.9adeb8p-13f, 0x1.7e6f0ep-32f, 0x1.c1b6eap-56f, 0.0f, 0.0f,
     0x1.300cbep-94f, 0.0f, 0.0f, 0x1.abc0c6p-38f, 0.0f, 0.0f, 0.0f, 0x1.9216b4p-112f,
     0.0f, 0.0f, 0x1.e10042p-91f, 0x1.bf6368p-102f, 0.0f, 0.0f, 0x1.50f76ep-55f, 0.0f,
     0x1.ff0414p-82f, 0x1.d9530ep-26f, 0.0f, 0x1.06d764p-58f, 0.0f, 0x1.e84cacp-58f,
     0x1.f20bc4p-37f, 0x1.5c4858p-90f, 0.0f, 0.0f, 0.0f, 0x1.969ab6p-120f, 0.0f,
     0x1.917bb2p-76f, 0x1.4c34b4p-82f, 0.0f, 0.0f, 0x1.636768p-31f, 0x1.933eep-16f,
     0.0f, 0x1.2ffae8p-71f, 0.0f, 0x1.0afd98p-104f, 0.0f, 0x1.08d04p-18f, 0.0f,
     0x1.244eacp-92f, 0.0f, 0.0f, 0x1.395186p-120f, 0x1.e54114p-81f, 0x1.2e66fp-104f,
     0.0f, 0.0f, 0.0f, 0x1.3d9c9p-64f, 0x1.39beep-87f, 0.0f, 0.0f, 0x1.7b756cp-124f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.31c7d6p-121f, 0.0f, 0.0f, 0x1.be26c2p-25f,
     0x1.c841a6p-120f, 0x1.abd0eep-30f, 0.0f, 0x1.2f4834p-107f, 0x1.4454fap-105f,
     0x1.79b1ap-103f, 0x1.2af0cep-60f, 0x1.174e48p-20f, 0.0f, 0.0f, 0x1.b7721p-41f,
     0x1.a24028p-15f, 0x1.adca4p-84f, 0x1.f81148p-39f, 0x1.07f666p-38f, 0.0f,
     0x1.6681fp-25f, 0.0f, 0.0f, 0.0f, 0x1.9c7e36p-32f, 0.0f, 0.0f, 0.0f,
     0x1.6cc744p-45f, 0.0f, 0x1.eb369p-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b77d2ep-104f, 0.0f, 0.0f, 0x1.164dc2p-60f, 0.0f, 0x1.4aaccep-72f,
     0x1.b1b97p-94f, 0.0f, 0.0f, 0.0f, 0x1.e5504ep-63f, 0x1.800fbp-84f,
     0x1.b0f6acp-18f, 0x1.48cfccp-9f, 0.0f, 0x1.4baaa4p-45f, 0.0f, 0.0f, 0.0f,
     0x1.78be5ep-86f, 0.0f, 0.0f, 0x1.a9b2cap-102f, 0.0f, 0x1.79e48cp-117f,
     0x1.8302fap-50f, 0.0f, 0x1.b2e814p-76f, 0x1.eeb3ap-57f, 0x1.868948p-101f, 0.0f,
     0x1.b7ce7p-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7891e6p-103f, 0x1.7989p-11f,
     0x1.e95d16p-93f, 0.0f, 0x1.bfbda2p-55f, 0.0f, 0.0f, 0x1.976d5ep-26f, 0.0f, 0.0f,
     0x1.525116p-1f, 0x1.948666p-102f, 0x1.18309ap-122f, 0.0f, 0x1.61d3d2p-17f, 0.0f,
     0x1.45ca44p-77f, 0x1.e32e08p-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a1ff74p-7f,
     0x1.e79c6ep-66f, 0x1.72494cp-90f, 0.0f, 0x1.fa1644p-45f, 0.0f, 0x1.ffe6fcp-49f,
     0.0f, 0x1.516f64p-6f, 0.0f, 0x1.c947fap-9f, 0x1.d1907p-120f, 0.0f,
     0x1.2fc7e4p-15f, 0x1.0c0a0ep-12f, 0x1.dcac3p-5f, 0x1.95e24cp-81f, 0.0f, 0.0f,
     0x1.04123cp-22f, 0.0f, 0x1.34e012p-126f, 0x1.0b3164p-101f, 0x1.1b4a66p-26f,
     0x1.0f4904p-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.90be5cp-82f, 0.0f, 0x1.106a0cp-12f,
     0.0f, 0x1.e65bd8p-29f, 0.0f, 0x1.244636p-76f, 0.0f, 0.0f, 0x1.28c6bcp-112f, 0.0f,
     0x1.4db1aap-13f, 0.0f, 0x1.d872f8p-62f, 0x1.545182p-18f, 0x1.63b696p-75f,
     0x1.7d81f4p-126f, 0x1.9bce0ap-114f, 0.0f, 0x1.7f2144p-61f, 0.0f, 0x1.ee85fp-17f,
     0.0f, 0x1.e96e44p-106f, 0x1.e242b2p-59f, 0x1.2bf41ap-36f, 0x1.7b17f6p-97f, 0.0f,
     0.0f, 0x1.a7ab1ep-44f, 0x1.47f606p-122f, 0x1.8b9d86p-42f, 0x1.74fbc8p-61f,
     0x1.648204p-108f, 0.0f, 0.0f, 0x1.0358e6p-71f, 0x1.a73dbp-102f, 0.0f,
     0x1.dff518p-75f, 0.0f, 0.0f, 0x1.9c53p-4f, 0x1.8cee0ep-118f, 0.0f, 0.0f,
     0x1.4495bep-2f, 0.0f, 0x1.78a63ap-6f, 0.0f, 0.0f, 0x1.b9e4fp-75f, 0.0f, 0.0f,
     0.0f, 0x1.74f616p-105f, 0.0f, 0x1.5453bap-12f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7e9586p-32f, 0x1.4e928ep-59f, 0x1.96a84p-40f, 0x1.ab506ap-27f, 0.0f,
     0x1.2ebc72p-103f, 0x1.a9b006p-20f, 0.0f, 0.0f, 0x1.4efb2p-101f, 0.0f,
     0x1.5aec1p-92f, 0x1.5cfa8ap-25f, 0x1.5b569ap-1f, 0.0f, 0.0f, 0x1.b13c76p-60f,
     0.0f, 0x1.c96832p-39f, 0x1.03f6bcp-10f, 0.0f, 0x1.e0a8e6p-24f, 0x1.72f56ep-102f,
     0x1.13ea32p-80f, 0x1.4bc0fep-70f, 0.0f, 0x1.229384p-46f, 0.0f, 0.0f,
     0x1.9644fp-29f, 0.0f, 0.0f, 0.0f, 0x1.088844p-116f, 0.0f, 0x1.6f6d8cp-24f,
     0x1.f19504p-28f, 0.0f, 0x1.26683ep-82f, 0x1.db349ep-121f, 0x1.d4b9b6p-95f, 0.0f,
     0.0f, 0x1.c08aeep-40f, 0x1.87ee54p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f52154p-93f,
     0x1.84d00ap-99f, 0x1.c5227ap-76f, 0x1.993d04p-53f, 0.0f, 0.0f, 0.0f,
     0x1.52688ep-79f, 0x1.db1f4ep-67f, 0x1.2efee8p-63f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6c2cf2p-117f, 0x1.131484p-104f, 0x1.225b68p-120f, 0x1.149764p-41f, 0.0f,
     0.0f, 0.0f, 0x1.45ce4cp-9f, 0x1.7e2572p-13f, 0.0f, 0.0f, 0x1.e2a58ep-15f,
     0x1.cd5dfcp-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f1eb54p-98f, 0.0f, 0x1.6ea594p-106f,
     0.0f, 0x1.d68c5cp-85f, 0.0f, 0x1.a76ebp-86f, 0x1.985884p-24f, 0.0f, 0.0f, 0.0f,
     0x1.f5aa1ep-25f, 0.0f, 0x1.bd8aacp-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fea358p-18f,
     0x1.37eafap-67f, 0x1.3cb062p-92f, 0x1.e697dcp-103f, 0x1.8a417ep-10f,
     0x1.115858p-113f, 0.0f, 0x1.685562p-57f, 0x1.95cbe4p-72f, 0.0f, 0.0f,
     0x1.7735acp-5f, 0x1.86e0f2p-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.268cd2p-105f, 0x1.430d94p-13f, 0x1.41c23ap-8f, 0x1.692de8p-107f, 0.0f, 0.0f,
     0x1.2b368ap-60f, 0.0f, 0x1.58089cp-121f, 0x1.f325c4p-39f, 0.0f, 0.0f,
     0x1.e00902p-97f, 0.0f, 0x1.36a1f2p-115f, 0x1.483552p-60f, 0x1.133dccp-106f,
     0x1.945098p-85f, 0.0f, 0.0f, 0x1.9ce9cp-68f, 0.0f, 0.0f, 0x1.c3272ap-112f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ed6f62p-36f, 0.0f, 0x1.8a8e32p-94f, 0x1.df97f8p-90f,
     0x1.a4033cp-17f, 0x1.e03f3cp-125f, 0x1.d4256p-4f, 0.0f, 0.0f, 0.0f,
     0x1.181c0cp-37f, 0x1.6ac136p-41f, 0.0f, 0.0f, 0x1.41a958p-18f, 0x1.d953dep-102f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.33b386p-92f, 0.0f, 0.0f,
     0x1.a3cd12p-31f, 0.0f, 0x1.f65b9cp-35f, 0.0f, 0x1.677358p-20f, 0.0f,
     0x1.eca10ap-73f, 0x1.e35c66p-53f, 0.0f, 0x1.7eacd8p-16f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.8ab0eap-17f, 0x1.bb9f3ep-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.00a2b2p-35f,
     0.0f, 0x1.e2d4a6p-31f, 0.0f, 0x1.2cd2d8p-20f, 0.0f, 0x1.3e8894p-27f,
     0x1.ac9208p-101f, 0x1.a29538p-100f, 0x1.c9b07ep-69f, 0.0f, 0x1.3fecfp-114f, 0.0f,
     0.0f, 0.0f, 0x1.963602p-84f, 0.0f, 0x1.e468a4p-95f, 0x1.b4276cp-80f, 0.0f,
     0x1.2ae8ccp-97f, 0x1.9bff94p-46f, 0x1.5a747ap-17f, 0x1.c92aecp-81f, 0.0f, 0.0f,
     0.0f, 0x1.733e1p-3f, 0x1.817588p-38f, 0x1.65463cp-73f, 0.0f, 0.0f,
     0x1.a150c6p-3f, 0x1.a937d6p-79f, 0x1.f70bcap-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.abdf16p-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5ddfdap-78f,
     0x1.24229ap-31f, 0.0f, 0.0f, 0x1.fc529ep-87f, 0x1.3a95eep-113f, 0.0f, 0.0f,
     0x1.dfeeaap-39f, 0.0f, 0x1.89cc98p-40f, 0x1.35b03ap-12f, 0x1.152c1ap-8f,
     0x1.59f2c8p-18f, 0x1.b2087ap-10f, 0.0f, 0.0f, 0.0f, 0x1.7a248ap-17f,
     0x1.62512ap-124f, 0.0f, 0.0f, 0.0f, 0x1.bf7a68p-112f, 0.0f, 0.0f, 0.0f,
     0x1.7f2086p-94f, 0x1.c064e6p-123f, 0x1.a691bap-21f, 0x1.b64bd4p-25f, 0.0f,
     0x1.0ffcfcp-7f, 0.0f, 0x1.97678cp-70f, 0x1.99134ep-74f, 0.0f, 0x1.9f6decp-69f,
     0.0f, 0x1.24d92cp-45f, 0.0f, 0.0f, 0x1.209202p-19f, 0.0f, 0x1.8b3f0cp-99f,
     0x1.b1bc12p-47f, 0.0f, 0x1.a2045p-73f, 0.0f, 0x1.95e984p-62f, 0x1.292c34p-112f,
     0x1.0dd176p-16f, 0.0f, 0x1.df76a4p-64f, 0.0f, 0x1.8f0a86p-31f, 0.0f,
     0x1.182dccp-7f, 0.0f, 0.0f, 0.0f, 0x1.c30952p-27f, 0.0f, 0x1.98b91ap-115f, 0.0f,
     0x1.8b121ep-59f, 0x1.0fb52ep-36f, 0.0f, 0.0f
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
            tmp1 = Sleef_finz_exp10f8_u10kvx(tmp0);
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
    printf("Sleef_finz_exp10f8_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_finz_exp10f8_u10kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
