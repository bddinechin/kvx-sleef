/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_lgammaf8_u10kvx.c --function Sleef_lgammaf8_u10kvx \
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
     0.0f, 0x1.ab1b58p-19f, 0x1.3cffb2p-9f, 0.0f, 0x1.701632p-98f, 0.0f, 0.0f,
     0x1.6c82e6p-61f, 0x1.aa458ep-47f, 0.0f, 0x1.4d3ee2p-41f, 0x1.e75502p-38f,
     0x1.7ca1ep-102f, 0.0f, 0.0f, 0.0f, 0x1.a99b94p-84f, 0x1.9b091ep-54f,
     0x1.97a42ep-98f, 0x1.d0af1ap-39f, 0x1.454d82p-101f, 0x1.d42a52p-106f,
     0x1.9fd75p-17f, 0x1.3afa3ep-16f, 0x1.ff268ap-30f, 0x1.d73d94p-89f,
     0x1.8d0578p-49f, 0.0f, 0x1.e8d8c2p-126f, 0x1.5f01bep-4f, 0.0f, 0x1.a61696p-41f,
     0.0f, 0.0f, 0x1.5f001p-23f, 0x1p0f, 0x1.13ed46p-6f, 0x1.084606p-24f, 0.0f, 0.0f,
     0x1.33c2cep-24f, 0.0f, 0.0f, 0x1.c0f7cap-42f, 0x1.e9c2f8p-46f, 0.0f,
     0x1.b1e8eep-2f, 0.0f, 0x1.39928p-97f, 0x1.be5cf2p-24f, 0x1.752e4p-57f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.72fbep-89f, 0x1.078426p-111f, 0.0f, 0.0f,
     0x1.3805ccp-30f, 0.0f, 0x1.328474p-27f, 0.0f, 0x1.63b0b8p-77f, 0x1.186592p-80f,
     0.0f, 0x1.e6f70ap-62f, 0.0f, 0x1.2768c6p-45f, 0x1.6d61a6p-41f, 0.0f, 0.0f, 0.0f,
     0x1.91af32p-17f, 0.0f, 0.0f, 0x1.cf43acp-10f, 0.0f, 0.0f, 0.0f, 0x1.6a99dap-118f,
     0x1.1929dcp-113f, 0.0f, 0.0f, 0x1.87cd22p-14f, 0.0f, 0.0f, 0.0f,
     0x1.bf3ec6p-112f, 0.0f, 0.0f, 0.0f, 0x1.d25f4p-119f, 0.0f, 0.0f, 0x1.dd4626p-26f,
     0x1.5c6346p-103f, 0.0f, 0x1.b9b906p-126f, 0x1.afc79ap-67f, 0x1.ea8c22p-12f,
     0x1.7cb216p-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9fe862p-58f,
     0x1.0f3626p-105f, 0.0f, 0.0f, 0x1.d806cep-57f, 0x1.aa1168p-44f, 0x1.7299fap-37f,
     0x1.0e9ee6p-65f, 0.0f, 0x1.04b138p-25f, 0.0f, 0x1.438cf8p-75f, 0.0f,
     0x1.28d19ap-120f, 0.0f, 0x1.5515eep-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.37a15cp-5f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6a5e98p-120f, 0x1.471d9ap-115f, 0.0f, 0.0f,
     0x1.e1556p-50f, 0.0f, 0.0f, 0.0f, 0x1.c44b4cp-9f, 0x1.f8fdd4p-78f,
     0x1.4ef898p-61f, 0.0f, 0.0f, 0x1.fcf9eap-78f, 0x1.df0b6cp-50f, 0x1.23e834p-116f,
     0x1.83ab98p-26f, 0.0f, 0x1.2a51dp-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3c0afep-119f,
     0x1.55589p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.32714p-35f, 0x1.a52bf8p-112f,
     0x1.f288a4p-17f, 0x1.72c8fcp-125f, 0.0f, 0x1.d4ec0cp-23f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.6159ep-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5a51b4p-100f,
     0x1.0860fap-91f, 0x1.a9ea5ap-32f, 0x1.c9069p-60f, 0.0f, 0x1.e455p-49f,
     0x1.8e306ap-40f, 0x1.1e354cp-35f, 0.0f, 0.0f, 0.0f, 0x1.806f1p-52f, 0.0f,
     0x1.3e8d2p-84f, 0x1.bdae5p-29f, 0x1.2fc15ap-59f, 0x1.89a2f4p-36f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.11c8b4p-38f, 0.0f, 0x1.41682cp-119f, 0x1.1f17bap-5f,
     0x1.527e82p-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a5847p-105f, 0.0f,
     0x1.e50486p-29f, 0.0f, 0x1.6689dcp-54f, 0x1.b13da2p-38f, 0x1.760624p-84f, 0.0f,
     0.0f, 0.0f, 0x1.e5cda2p-99f, 0x1.19be8cp-113f, 0.0f, 0x1.2985b4p-73f, 0.0f,
     0x1.c17e1ap-45f, 0.0f, 0x1.6884eep-23f, 0.0f, 0x1.8f7218p-103f, 0.0f,
     0x1.2df846p-61f, 0x1.c0e168p-72f, 0x1.f5c5cp-85f, 0x1.2fc2bap-121f, 0.0f, 0.0f,
     0x1.aedb86p-34f, 0.0f, 0x1.28f792p-29f, 0x1.80aed4p-26f, 0x1.37c33ep-103f, 0.0f,
     0.0f, 0x1.ba2582p-118f, 0x1.341576p-66f, 0x1.e987f8p-92f, 0x1.688092p-106f,
     0x1.c8b846p-59f, 0x1.887462p-112f, 0.0f, 0.0f, 0x1.5c53c2p-90f, 0x1.7afe3ap-109f,
     0x1.8ed6dcp-50f, 0.0f, 0.0f, 0x1.000d44p-93f, 0.0f, 0x1.2caf7ap-79f,
     0x1.411ad4p-69f, 0.0f, 0x1.5bfacap-63f, 0x1.164bbep-46f, 0x1.25464ap-12f, 0.0f,
     0x1.021566p-6f, 0.0f, 0.0f, 0x1.6bcf68p-92f, 0.0f, 0.0f, 0.0f, 0x1.a741dap-60f,
     0.0f, 0.0f, 0x1.470f7ep-42f, 0.0f, 0x1.8f0226p-77f, 0x1.e9e6acp-72f, 0.0f,
     0x1.c5de52p-97f, 0x1.dd7edp-106f, 0x1.c5545ap-67f, 0x1.40a9dcp-12f,
     0x1.276e5cp-94f, 0.0f, 0x1.f2ffp-105f, 0.0f, 0x1.b5f672p-112f, 0.0f,
     0x1.d13f5ep-12f, 0x1.fdfe7ap-70f, 0x1.efa29p-4f, 0x1.f02392p-64f, 0.0f, 0.0f,
     0x1.116138p-6f, 0x1.2909aap-14f, 0.0f, 0.0f, 0x1.d913ep-103f, 0x1.ece654p-107f,
     0.0f, 0.0f, 0x1.c51f52p-101f, 0x1.451fdep-116f, 0x1.add274p-102f,
     0x1.be3d06p-66f, 0.0f, 0x1.6b796ap-2f, 0x1.d0a922p-125f, 0.0f, 0.0f,
     0x1.5c8c22p-41f, 0x1.d68ee8p-18f, 0.0f, 0.0f, 0x1.21067cp-116f, 0x1.140a24p-84f,
     0.0f, 0x1.4559dcp-56f, 0.0f, 0x1.560acap-63f, 0.0f, 0.0f, 0.0f, 0x1.267dcep-73f,
     0x1.00cc86p-112f, 0.0f, 0x1.14509p-126f, 0x1.dc6b64p-47f, 0.0f, 0x1.0fe8dp-108f,
     0x1.491c2cp-3f, 0x1.02ec2ap-18f, 0x1.7663f4p-36f, 0.0f, 0.0f, 0x1.73ec7cp-25f,
     0.0f, 0x1.3e8326p-75f, 0x1.459bp-109f, 0.0f, 0.0f, 0x1.4ae2f4p-106f, 0.0f,
     0x1.50dd16p-93f, 0.0f, 0.0f, 0.0f, 0x1.20a94cp-92f, 0x1.69005cp-33f, 0.0f, 0.0f,
     0x1.fd431cp-47f, 0x1.bd9dbep-56f, 0.0f, 0x1.ae8cecp-105f, 0x1.671e7ap-90f,
     0x1.70bebp-123f, 0.0f, 0x1.194574p-86f, 0.0f, 0.0f, 0x1.05d8aap-49f, 0.0f,
     0x1.6916eap-32f, 0.0f, 0x1.8ec8a6p-43f, 0x1.a574f8p-17f, 0.0f, 0.0f,
     0x1.f376c2p-83f, 0x1.7335e6p-11f, 0.0f, 0.0f, 0x1.e5086ep-7f, 0.0f,
     0x1.f212bap-24f, 0x1.6f432ap-44f, 0.0f, 0x1.eb440ep-48f, 0.0f, 0x1.0313bep-112f,
     0x1.f4f8fap-28f, 0x1.3298dep-84f, 0.0f, 0.0f, 0x1.055e02p-42f, 0.0f,
     0x1.3e23dep-37f, 0x1.b474a8p-14f, 0x1.d3c5f6p-46f, 0.0f, 0x1.720fcep-41f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.71d566p-3f, 0x1.a2181cp-66f, 0x1.bb37aap-86f,
     0x1.ed266ep-81f, 0x1.59cbe6p-37f, 0.0f, 0x1.d38294p-51f, 0.0f, 0.0f,
     0x1.4a3ee6p-101f, 0.0f, 0.0f, 0x1.2a9754p-65f, 0x1.922382p-8f, 0x1.8d82bep-73f,
     0x1.1ff1fep-13f, 0x1.174184p-84f, 0x1.6bb56cp-44f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d01f2ep-120f, 0x1.daefdp-16f, 0x1.03e31ap-111f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e76e1p-87f, 0.0f, 0x1.5827f8p-50f, 0.0f, 0.0f, 0x1.d79356p-80f,
     0x1.8a7a8ap-105f, 0x1.1d1622p-14f, 0x1.75846p-92f, 0.0f, 0x1.0b92a2p-116f,
     0x1.1ba44ap-106f, 0.0f, 0x1.4c3f5ap-117f, 0x1.86df36p-48f, 0x1.86dd82p-21f,
     0x1.b318a4p-58f, 0.0f, 0x1.228e16p-3f, 0x1.f4ad94p-90f, 0.0f, 0x1.1622a6p-116f,
     0.0f, 0.0f, 0x1.f70d9ap-116f, 0x1.1f5e2p-98f, 0.0f, 0.0f, 0x1.3aee3p-13f,
     0x1.cc45d8p-42f, 0x1.a2f41p-16f, 0x1.7e908p-71f, 0.0f, 0x1.c44fp-122f,
     0x1.5c4c9ep-80f, 0x1.52bd44p-78f, 0.0f, 0.0f, 0x1.e9f908p-26f, 0x1.f95b6p-81f,
     0x1.332e54p-72f, 0.0f, 0x1.3e8424p-116f, 0x1.420ab4p-54f, 0x1.d2a9p-84f, 0.0f,
     0x1.8a2b98p-38f, 0.0f, 0.0f, 0x1.06c7dep-14f, 0x1.af5f5ap-85f, 0.0f, 0.0f,
     0x1.f5089p-41f, 0.0f, 0x1.d04ffap-34f, 0x1.0a7e08p-6f, 0x1.372bbp-31f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.703bc6p-70f, 0.0f, 0.0f, 0x1.ac4cecp-50f, 0.0f,
     0x1.d6f856p-31f, 0.0f, 0.0f, 0x1.063462p-69f, 0x1.bef648p-91f, 0x1.acfc84p-104f,
     0x1.9b95acp-38f, 0.0f, 0x1.204cf8p-25f, 0x1.198f12p-12f, 0x1.49c2cep-15f, 0.0f,
     0.0f, 0x1.6c9294p-52f, 0x1.37ee2ep-80f, 0.0f, 0x1.2a1796p-72f, 0.0f, 0.0f,
     0x1.88b9f8p-77f, 0x1.ac920ap-24f, 0.0f, 0x1.b7527p-79f, 0.0f, 0x1.740c26p-124f,
     0.0f, 0x1.7cc136p-125f, 0.0f, 0x1.70bae8p-91f, 0x1.2ce88p-126f, 0x1.017db6p-43f,
     0x1.e7d39p-65f, 0x1.19ec56p-106f, 0x1.49696ep-107f, 0x1.8f545cp-75f, 0.0f, 0.0f,
     0.0f, 0x1.c666f4p-80f, 0.0f, 0x1.087294p-18f, 0.0f, 0.0f, 0x1.c16c46p-94f, 0.0f,
     0x1.0c5fecp-103f, 0x1.93599p-110f, 0.0f, 0x1.efa72p-114f, 0.0f, 0.0f,
     0x1.f71a52p-26f, 0.0f, 0.0f, 0x1.bd94dcp-67f, 0x1.273e1ap-22f, 0x1.64e284p-75f,
     0x1.4477fcp-7f, 0.0f, 0x1.a2a63ep-64f, 0x1.274f3cp-61f, 0.0f, 0x1.5ea0ap-17f,
     0.0f, 0x1.b1cec4p-76f, 0.0f, 0.0f, 0x1.538c9ap-20f, 0.0f, 0x1.6dd8d6p-19f,
     0x1.415248p-103f, 0x1.eb8b9p-89f, 0.0f, 0.0f, 0x1.32e074p-121f, 0x1.e3697p-77f,
     0x1.1633ecp-71f, 0x1.22df5ep-49f, 0.0f, 0.0f, 0x1.dc6bbp-82f, 0x1.7563acp-124f,
     0.0f, 0x1.ffb396p-109f, 0x1.cda7d4p-109f, 0x1.1f5e2ep-65f, 0.0f, 0x1.233348p-44f,
     0x1.03aea4p-75f, 0x1.f939f6p-86f, 0x1.8c416ep-42f, 0x1.eb89bap-115f, 0.0f,
     0x1p0f, 0.0f, 0x1.619d12p-13f, 0x1.d4fe4cp-111f, 0x1.be9168p-64f,
     0x1.e01beep-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d6771p-19f, 0.0f, 0.0f,
     0x1.12340cp-88f, 0x1.59e882p-109f, 0x1.4a8c28p-76f, 0x1.d26026p-45f, 0.0f, 0.0f,
     0.0f, 0x1.02f068p-47f, 0x1.3cd76cp-33f, 0.0f, 0x1.126d12p-48f, 0.0f, 0.0f,
     0x1.1c98bp-98f, 0x1.e1c3d2p-107f, 0x1.79063ap-17f, 0x1.0e8c36p-33f,
     0x1.333d7ep-103f, 0.0f, 0x1.6b52c4p-76f, 0x1.42fdbep-23f, 0x1.dae556p-113f, 0.0f,
     0.0f, 0.0f, 0x1.999a02p-77f, 0.0f, 0.0f, 0.0f, 0x1.d1052ap-101f, 0.0f, 0.0f,
     0x1.97b956p-82f, 0.0f, 0.0f, 0x1.9fbfc4p-119f, 0x1.bf6c56p-95f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a65a9ap-28f, 0x1.80810ep-4f, 0x1.068406p-92f, 0x1.24363ap-102f, 0.0f,
     0x1.4eccb2p-126f, 0x1.a0e728p-117f, 0.0f, 0.0f, 0.0f, 0x1.d4d782p-51f, 0.0f,
     0x1.fedb0cp-114f, 0x1.770f32p-123f, 0x1.4c534ep-11f, 0x1.5fc262p-86f,
     0x1.6c4872p-50f, 0.0f, 0x1.13a3cp-116f, 0x1.7b9738p-58f, 0x1.9497bap-114f, 0.0f,
     0x1.956e14p-43f, 0.0f, 0.0f, 0.0f, 0x1.11204cp-69f, 0x1.d3bb62p-22f, 0.0f, 0.0f,
     0.0f, 0x1.dfcd92p-37f, 0.0f, 0.0f, 0x1.dcc8fep-16f, 0x1.85e05ep-101f, 0.0f,
     0x1.fd7696p-13f, 0.0f, 0.0f, 0x1.53bbb4p-22f, 0.0f, 0x1.dc83c8p-107f, 0.0f,
     0x1.2eb35p-61f, 0.0f, 0x1.3f4898p-108f, 0.0f, 0x1.0b648ep-32f, 0.0f, 0.0f,
     0x1.744a36p-30f, 0x1.d0b058p-54f, 0.0f, 0x1.61eed2p-73f, 0x1.3711ap-50f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.fb11dap-96f, 0x1.1cbfecp-5f, 0.0f, 0.0f, 0x1.d02c12p-107f,
     0x1.3b886cp-11f, 0x1.946852p-83f, 0x1.f54b1ep-41f, 0.0f, 0x1.1df318p-25f, 0.0f,
     0x1.b5493ep-39f, 0x1.1911a4p-76f, 0x1.d3cebep-28f, 0.0f, 0.0f, 0x1.4c66a4p-125f,
     0x1.9a83d8p-59f, 0x1.d1478ep-20f, 0x1.32efa2p-121f, 0.0f, 0.0f, 0x1.6ff8d4p-21f,
     0.0f, 0x1.cab7ap-117f, 0.0f, 0.0f, 0x1.d96d0ap-78f, 0x1.9b0bbap-24f,
     0x1.910608p-89f, 0x1.9aa05p-17f, 0.0f, 0.0f, 0x1.803c1ap-51f, 0.0f,
     0x1.72282ep-97f, 0x1.765b38p-120f, 0x1.ddd598p-1f, 0x1.a237fap-81f, 0.0f,
     0x1.bec96ap-19f, 0x1.9071e6p-34f, 0x1.1d71c6p-42f, 0.0f, 0.0f, 0x1.b5b7ep-107f,
     0x1.4e698cp-82f, 0x1.b073a4p-30f, 0.0f, 0x1.eeb66cp-4f, 0.0f, 0x1.29f676p-8f,
     0.0f, 0x1.0ad61ap-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f,
     0x1.bc270cp-60f, 0x1.864104p-27f, 0.0f, 0.0f, 0x1.94d172p-5f, 0x1.7584f2p-75f,
     0x1.5920bap-16f, 0x1.fb0f1ep-95f, 0x1.bd92a4p-110f, 0x1.e6c412p-56f,
     0x1.ca4932p-15f, 0.0f, 0x1.576ff2p-105f, 0.0f, 0x1.d1fc26p-2f, 0.0f, 0.0f, 0.0f,
     0x1.85e9f8p-120f, 0x1.bb3b6p-34f, 0.0f, 0.0f, 0x1.06300cp-31f, 0.0f,
     0x1.4dfb18p-81f, 0.0f, 0.0f, 0.0f, 0x1.da9f1ep-111f, 0x1.62f89ap-14f,
     0x1.25d29ep-71f, 0x1.5fe978p-106f, 0x1.66e3a8p-51f, 0.0f, 0.0f, 0x1.a8e63ep-34f,
     0.0f, 0.0f, 0.0f, 0x1.8eacc2p-75f, 0.0f, 0x1.2314aep-31f, 0x1.79cfc4p-53f, 0.0f,
     0x1.9a02ap-116f, 0.0f, 0x1.3aec04p-27f, 0x1.9fcd1ap-47f, 0x1.25b88p-68f,
     0x1.445d9ap-125f, 0x1.b26d34p-20f, 0.0f, 0x1.b69ef6p-22f, 0.0f, 0x1.afbe18p-44f,
     0.0f, 0x1.e8c3f6p-120f, 0.0f, 0.0f, 0x1.985352p-50f, 0.0f, 0x1.0a64d2p-52f, 0.0f,
     0x1.8e6456p-43f, 0.0f, 0x1.ad7934p-98f, 0x1.e4d09ap-105f, 0x1.d7ae96p-51f, 0.0f,
     0x1.b1eaa6p-12f, 0.0f, 0x1.48488ap-41f, 0.0f, 0x1.777dbep-113f, 0.0f,
     0x1.0376bcp-108f, 0.0f, 0.0f, 0.0f, 0x1.bcd1ecp-52f, 0x1.4fe0fep-113f,
     0x1.c0ad6ap-96f, 0.0f, 0.0f, 0x1.1fdee6p-19f, 0x1.d65424p-29f, 0.0f,
     0x1.b7eda4p-51f, 0x1.e6cd54p-69f, 0x1.ca6abp-60f, 0.0f, 0x1.3437ep-3f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.dd4cbep-11f, 0.0f, 0x1.b537f6p-110f, 0.0f, 0.0f,
     0x1.1cc338p-81f, 0.0f, 0x1.6e8f7p-48f, 0x1.85f282p-37f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.7ac86ep-112f, 0x1.f79be6p-61f, 0.0f, 0x1.65c7d6p-26f, 0x1.dd0a26p-32f,
     0x1.2e4102p-81f, 0.0f, 0x1.f907a6p-80f, 0x1.87551cp-115f, 0x1.852404p-125f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.08df42p-85f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.99ec44p-8f, 0.0f, 0x1.958836p-124f, 0x1.5c276p-74f, 0.0f, 0.0f,
     0x1.0a86dcp-5f, 0.0f, 0.0f, 0x1.00f716p-126f, 0x1.c15ccep-57f, 0x1.a24b66p-45f,
     0.0f, 0x1.047ed2p-28f, 0.0f, 0.0f, 0x1.d0eeacp-23f, 0x1.24af3ep-4f,
     0x1.8999f2p-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.94ab4ap-16f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.7c6a3cp-95f, 0x1.1b2a6ap-106f, 0.0f, 0x1.bee758p-2f,
     0x1.9e1dfp-50f, 0.0f, 0x1.21b828p-34f, 0.0f, 0x1.d06a2ep-4f, 0.0f, 0.0f, 0.0f,
     0x1.7d499cp-95f, 0.0f, 0x1.795692p-38f, 0.0f, 0.0f, 0x1.559c84p-110f,
     0x1.174e7p-60f, 0x1.e172d4p-64f, 0x1.11719cp-66f, 0x1.d123e6p-89f,
     0x1.0718d2p-7f, 0x1.320d58p-19f, 0x1.466976p-37f, 0.0f, 0x1.c692a2p-102f, 0.0f,
     0x1.a4c3fp-42f, 0x1.794bd6p-8f, 0x1.4638d2p-68f, 0x1.87baacp-126f, 0.0f, 0.0f,
     0.0f, 0x1.c67276p-19f, 0x1.f38a0ep-46f, 0.0f, 0x1.4d1c16p-62f, 0x1.7b31d6p-84f,
     0x1.db9702p-52f, 0x1.a31ec2p-24f, 0x1.01c674p-93f, 0.0f, 0x1.87b5cap-21f,
     0x1.8f91a6p-50f, 0.0f, 0x1.c84df6p-84f, 0.0f, 0x1.9bb648p-80f, 0.0f,
     0x1.a57706p-113f, 0.0f, 0x1.1583c2p-62f, 0.0f, 0x1.dca532p-57f, 0x1.a4c514p-92f,
     0.0f, 0.0f, 0.0f, 0x1.b94acap-17f, 0.0f, 0x1.e52fcp-16f, 0.0f, 0x1.6b8ddcp-90f,
     0x1.18b64cp-103f, 0x1.2b4282p-49f, 0.0f, 0x1.d8746p-19f, 0x1.c500dap-46f, 0.0f,
     0x1.35f39ap-27f, 0.0f, 0x1.aa1132p-15f, 0x1.051562p-67f, 0x1.c7ec58p-30f, 0.0f
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
            tmp1 = Sleef_lgammaf8_u10kvx(tmp0);
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
    printf("Sleef_lgammaf8_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_lgammaf8_u10kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
