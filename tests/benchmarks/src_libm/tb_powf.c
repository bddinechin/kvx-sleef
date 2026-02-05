/**
 * generated using metalibm 1.1
 * sha1 git: b'"3425a70973ff93e510359b9b2fa45754ebf43279"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_powf.c --function powf --arity 2 --headers \
 *     math.h,ml_support_lib.h --input-formats binary32,binary32 --bench \
 *     --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <math.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile float external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.5122bp-25f, 0.0f, 0x1.db672p-44f, 0.0f, 0.0f, 0x1.25787ap-32f,
     0x1.84d1eep-58f, 0x1.0ccb96p-98f, 0x1.f2e08ap-20f, 0x1.75f354p-25f,
     0x1.5efce2p-72f, 0x1.cfc97p-51f, 0.0f, 0.0f, 0x1.364c86p-41f, 0x1.7d4006p-88f,
     0x1.85361p-35f, 0x1.02809ep-81f, 0x1.704ffcp-98f, 0x1.99d85ap-29f, 0.0f,
     0x1.907448p-55f, 0x1.82356ep-119f, 0.0f, 0.0f, 0.0f, 0x1.4f7846p-48f, 0.0f, 0.0f,
     0.0f, 0x1.c46c48p-39f, 0.0f, 0.0f, 0x1.c1a492p-31f, 0x1.5ec0fp-2f, 0.0f,
     0x1.1dd4d8p-48f, 0x1.3305ecp-53f, 0.0f, 0.0f, 0.0f, 0x1.88cb34p-54f, 0.0f,
     0x1.b0c2dep-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7a8cbap-116f, 0.0f, 0x1.1a42d4p-65f,
     0x1.cbd1dp-87f, 0.0f, 0.0f, 0x1.7dc7aap-1f, 0x1.1cdeecp-40f, 0.0f,
     0x1.0210cap-52f, 0.0f, 0x1.cfb3ep-84f, 0x1.aa7bd4p-44f, 0.0f, 0x1.542254p-66f,
     0.0f, 0x1.aa24fep-51f, 0.0f, 0.0f, 0x1.4a8416p-82f, 0x1.7d603cp-30f,
     0x1.b4250cp-69f, 0.0f, 0.0f, 0.0f, 0x1.023ea2p-34f, 0.0f, 0x1.87c1e4p-89f, 0.0f,
     0x1.1ab394p-27f, 0x1.989bdcp-13f, 0.0f, 0.0f, 0.0f, 0x1.f324eep-83f,
     0x1.6116acp-121f, 0.0f, 0.0f, 0x1.c75f7ap-40f, 0.0f, 0x1.00bd8ap-107f,
     0x1.4b10bcp-52f, 0x1.f0bd48p-120f, 0x1.569f36p-22f, 0.0f, 0x1.e857eap-102f,
     0x1.9b3b9cp-21f, 0x1.9f78d2p-104f, 0x1.e414e8p-83f, 0x1.067b26p-5f, 0.0f, 0.0f,
     0x1.b13a06p-82f, 0.0f, 0x1.d79616p-30f, 0.0f, 0x1.0be85p-100f, 0.0f,
     0x1.e47f6ep-125f, 0.0f, 0.0f, 0.0f, 0x1.ad867ep-78f, 0x1.85cecap-108f,
     0x1.8c47d6p-74f, 0x1.e01b92p-65f, 0x1.eae4b2p-106f, 0.0f, 0x1.f4e77ep-46f,
     0x1.914ca8p-121f, 0x1.e073a4p-24f, 0x1.ff653p-31f, 0x1.0a65b2p-74f,
     0x1.62a33ep-46f, 0.0f, 0.0f, 0x1.2063e8p-85f, 0.0f, 0x1.8e2ae6p-58f, 0.0f, 0.0f,
     0.0f, 0x1.c0da1cp-89f, 0x1.22180cp-43f, 0.0f, 0x1.41888ep-13f, 0x1.4673acp-1f,
     0x1.fe320ap-68f, 0.0f, 0x1.8dba5cp-121f, 0x1.45794ap-12f, 0x1.8244e6p-72f,
     0x1.73fb1ep-73f, 0.0f, 0.0f, 0.0f, 0x1.79a22cp-49f, 0.0f, 0x1.a787fap-122f,
     0x1.8fc2d4p-12f, 0x1.5991c8p-110f, 0.0f, 0x1.66959ap-73f, 0.0f, 0x1.2ceab4p-107f,
     0x1.a66c3ep-38f, 0x1.586ce8p-48f, 0x1.6ef666p-93f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3e65e2p-96f, 0.0f, 0x1.3e88fp-74f, 0.0f, 0x1.83c1dcp-50f, 0.0f,
     0x1.95ae52p-42f, 0.0f, 0x1.01bd8ap-69f, 0x1.c8b516p-16f, 0x1.72e094p-96f,
     0x1.75df8p-80f, 0x1.a04f98p-108f, 0x1.efd89ep-68f, 0.0f, 0.0f, 0.0f,
     0x1.b84de8p-33f, 0.0f, 0x1.1adcc4p-4f, 0x1.d940ap-114f, 0.0f, 0x1.2ef3b8p-20f,
     0.0f, 0x1.eab59ap-16f, 0.0f, 0.0f, 0.0f, 0x1.d53dcep-69f, 0.0f, 0.0f, 0.0f,
     0x1.cca0ccp-106f, 0x1.122a1cp-71f, 0x1.77d2d6p-33f, 0.0f, 0x1.298b14p-2f,
     0x1.c630a4p-61f, 0x1.5f5946p-52f, 0x1.0f4d06p-69f, 0x1.0ff434p-62f,
     0x1.149f62p-98f, 0x1.ae22f4p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e0f91p-53f, 0x1.44521ap-34f, 0.0f, 0x1.babf82p-108f, 0.0f, 0.0f, 0.0f,
     0x1.3244f6p-119f, 0.0f, 0x1.e1269ep-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.75f9e8p-17f,
     0x1.e17bp-46f, 0.0f, 0.0f, 0x1.b61a96p-4f, 0.0f, 0x1.0d4d2p-42f, 0x1.0cf9fep-19f,
     0x1.ec0d1cp-21f, 0x1.dd9e86p-28f, 0.0f, 0x1.bf16ep-34f, 0.0f, 0x1.a60c94p-30f,
     0x1.1bd89ap-113f, 0.0f, 0x1.c9e2eap-93f, 0.0f, 0x1.252eccp-120f, 0.0f, 0.0f,
     0x1.082bbep-73f, 0x1.74b55ep-83f, 0.0f, 0.0f, 0.0f, 0x1.5281d4p-93f,
     0x1.c787b8p-115f, 0.0f, 0.0f, 0.0f, 0x1.b0ba2ep-39f, 0.0f, 0.0f, 0.0f,
     0x1.4d1814p-126f, 0.0f, 0x1.8c40b6p-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f,
     0.0f, 0x1.3a3ffp-85f, 0.0f, 0x1.98911ep-99f, 0x1.6d63aep-96f, 0.0f, 0.0f, 0.0f,
     0x1.d4ab46p-7f, 0x1.f9c552p-66f, 0x1.430b04p-26f, 0.0f, 0.0f, 0.0f,
     0x1.421bdcp-58f, 0.0f, 0x1.2640aap-97f, 0.0f, 0.0f, 0x1.c0c19ap-25f, 0.0f, 0.0f,
     0x1.01d2ccp-117f, 0.0f, 0.0f, 0x1.ea4b78p-72f, 0x1.6fc55ap-116f, 0x1.4e638p-62f,
     0x1.720c9ep-107f, 0x1.285194p-123f, 0x1.fd6d92p-84f, 0x1.ed67bap-63f, 0.0f, 0.0f,
     0x1.e065a2p-6f, 0.0f, 0x1.aa4e62p-48f, 0x1.51a472p-87f, 0x1.4c8d62p-40f,
     0x1.975d9cp-94f, 0.0f, 0x1.14a44ep-115f, 0.0f, 0.0f, 0x1.9ec0fep-119f,
     0x1.db097p-63f, 0x1.92cef8p-57f, 0x1.ac4838p-62f, 0x1.1ab0c8p-112f, 0.0f,
     0x1.c34cf2p-78f, 0.0f, 0x1.34f168p-24f, 0x1.bf677ep-36f, 0x1.1df498p-115f, 0.0f,
     0x1.0a54c8p-12f, 0x1.e62ae8p-27f, 0.0f, 0x1.0de836p-125f, 0x1.837aacp-2f,
     0x1.70e2d6p-59f, 0x1.0c9cbcp-50f, 0.0f, 0x1.1d0a7ap-21f, 0x1.d7a23cp-37f,
     0x1.a7faeep-116f, 0.0f, 0x1.8dc03p-20f, 0.0f, 0x1.d94754p-101f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.13c9b4p-45f, 0x1.2cab52p-4f, 0.0f, 0x1.308cdcp-97f,
     0x1.7e628ep-14f, 0x1.bd9c66p-39f, 0.0f, 0.0f, 0x1.4751e8p-43f, 0x1.c6dc02p-45f,
     0.0f, 0x1.ad80a8p-113f, 0x1.d21876p-118f, 0.0f, 0x1.bb8b44p-13f, 0x1.e5cf16p-26f,
     0.0f, 0x1.47dc0ap-89f, 0x1.a9247cp-77f, 0x1.769be4p-103f, 0x1.b727bcp-55f, 0.0f,
     0x1.0be98p-120f, 0.0f, 0x1.95762p-82f, 0.0f, 0.0f, 0.0f, 0x1.ecdad6p-26f, 0.0f,
     0x1.58548ap-112f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.931142p-59f, 0.0f,
     0x1.6c9d68p-105f, 0x1.a0e87p-86f, 0x1.4b99p-121f, 0.0f, 0x1.e7243ep-45f, 0.0f,
     0x1.8fdcecp-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.38c64ap-25f, 0x1.841f92p-13f,
     0x1.47f0aep-60f, 0x1.a656d6p-109f, 0x1.3af57ap-83f, 0x1.94785cp-89f, 0.0f, 0.0f,
     0x1.26f8f2p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.541894p-36f, 0x1.f2f184p-2f,
     0x1.c7f89cp-108f, 0x1.2a17f4p-23f, 0x1.6ea96p-56f, 0.0f, 0.0f, 0x1.e059f2p-56f,
     0.0f, 0x1.965c84p-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c7787cp-57f, 0x1.7583eap-108f,
     0.0f, 0.0f, 0x1.7c075cp-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.aace1ap-105f,
     0x1.88d7cap-93f, 0.0f, 0x1.70bbecp-116f, 0x1.ce1a02p-33f, 0.0f, 0x1.c2d13ap-55f,
     0x1.5b756p-99f, 0.0f, 0x1.8e0efep-15f, 0x1.d5e3ap-112f, 0.0f, 0.0f, 0.0f,
     0x1.8f56p-14f, 0x1.e48fa6p-115f, 0.0f, 0.0f, 0.0f, 0x1.cc597ap-4f, 0.0f,
     0x1.721dacp-78f, 0.0f, 0x1.4f97fp-3f, 0x1.77609ep-4f, 0x1.7de242p-61f, 0.0f,
     0.0f, 0.0f, 0x1.9f2f56p-109f, 0x1.cc5d7p-115f, 0.0f, 0.0f, 0x1.93f528p-66f, 0.0f,
     0.0f, 0.0f, 0x1.327efep-119f, 0x1.77f752p-58f, 0.0f, 0.0f, 0x1.040d5ap-10f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.84498p-38f, 0x1.df396cp-17f, 0.0f, 0x1.494f1cp-95f, 0.0f,
     0x1.d61afep-63f, 0.0f, 0.0f, 0x1.f4fe8ep-96f, 0.0f, 0x1.080d98p-26f,
     0x1.a241ap-44f, 0x1.8a16e6p-52f, 0x1.86215ap-23f, 0x1.fec328p-75f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e77156p-117f, 0x1.b3d3b8p-79f, 0x1.a95ddep-99f,
     0x1.3394b4p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8ebe02p-29f, 0.0f, 0.0f,
     0x1.e123e8p-60f, 0.0f, 0x1.3f41eep-26f, 0x1.a3a14p-42f, 0x1.ba8218p-9f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a798b4p-83f, 0.0f, 0.0f, 0x1.932674p-56f, 0x1.4bb71ep-78f,
     0x1.8dcc62p-69f, 0.0f, 0x1.d34296p-67f, 0x1.931e9cp-33f, 0x1.57d76cp-113f, 0.0f,
     0.0f, 0x1.79e3bcp-103f, 0x1.fb544ap-23f, 0x1.bda202p-123f, 0.0f, 0.0f, 0.0f,
     0x1.69d1f4p-46f, 0x1.e8233cp-125f, 0x1.cb987p-112f, 0x1.1e1ddcp-84f,
     0x1.715de8p-121f, 0.0f, 0.0f, 0x1.8f1526p-63f, 0.0f, 0.0f, 0x1.06eb02p-26f, 0.0f,
     0.0f, 0x1.3df134p-76f, 0x1.3f63b2p-62f, 0.0f, 0x1.85f81cp-86f, 0x1.d9b4cep-123f,
     0.0f, 0x1.a181d4p-11f, 0x1.bbec5ep-124f, 0x1.c2785cp-44f, 0.0f, 0.0f,
     0x1.a72332p-96f, 0x1.1b06a6p-87f, 0x1.d1aee6p-106f, 0x1.868d96p-77f, 0.0f,
     0x1.3d167cp-20f, 0x1.3cea8cp-113f, 0x1.478ec2p-88f, 0.0f, 0x1.545834p-33f,
     0x1.51dc4ep-96f, 0.0f, 0.0f, 0x1.a3209cp-83f, 0x1.35addp-35f, 0x1.d5088cp-52f,
     0.0f, 0x1.14d18ep-90f, 0x1.4da5e6p-3f, 0.0f, 0x1.24f5d4p-104f, 0x1.bc322ep-37f,
     0x1.17693ep-41f, 0x1.4acfa8p-123f, 0.0f, 0x1.51b60ep-65f, 0x1.50a0dap-102f,
     0x1.7b8daap-63f, 0x1.652488p-56f, 0x1.425d98p-76f, 0.0f, 0.0f, 0.0f,
     0x1.08f454p-94f, 0.0f, 0x1.8d98b6p-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.91fd78p-74f,
     0x1.6f19f2p-100f, 0x1.f20dfp-22f, 0.0f, 0x1.de5a0cp-6f, 0x1.a52972p-78f, 0.0f,
     0x1.2ec0cap-50f, 0x1.b52b28p-43f, 0x1.bdf91cp-102f, 0x1.ff87e4p-35f,
     0x1.572338p-30f, 0x1.87933cp-104f, 0.0f, 0.0f, 0.0f, 0x1.da5346p-27f,
     0x1.16e38cp-32f, 0.0f, 0.0f, 0x1.207a7ap-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.d68b92p-97f, 0.0f, 0x1.16cc5ep-110f, 0.0f, 0x1.a3ed9ep-24f, 0.0f,
     0x1.c9d53ep-62f, 0.0f, 0x1.088f0cp-78f, 0x1.2a027p-52f, 0.0f, 0x1.8ea1bap-82f,
     0x1.ad1fbcp-42f, 0.0f, 0x1.b0cf52p-87f, 0x1.f53e4p-93f, 0x1.9607bep-53f,
     0x1.280f8ep-120f, 0x1.8c3b8ep-46f, 0x1.850492p-105f, 0.0f, 0.0f, 0.0f,
     0x1.cec99ap-118f, 0.0f, 0.0f, 0x1.e63b8ap-68f, 0.0f, 0x1.e82066p-26f,
     0x1.7773e6p-116f, 0.0f, 0.0f, 0x1.3afcaap-71f, 0.0f, 0.0f, 0x1.47d8dcp-124f,
     0x1.324032p-79f, 0x1.19bb8ep-124f, 0x1.186c6ep-49f, 0x1.9924e2p-115f,
     0x1.a5f29ap-15f, 0x1.dd55aap-62f, 0x1.117ed6p-94f, 0.0f, 0.0f, 0x1.578a18p-85f,
     0x1.ad8edep-66f, 0x1.3751e6p-11f, 0.0f, 0.0f, 0x1.956696p-69f, 0.0f,
     0x1.3bd1b8p-23f, 0.0f, 0.0f, 0x1.64d548p-70f, 0x1.48b6dcp-93f, 0.0f, 0.0f,
     0x1.de0124p-104f, 0.0f, 0.0f, 0x1.e221dp-103f, 0.0f, 0.0f, 0.0f, 0x1.f217a6p-78f,
     0x1.25b85ep-35f, 0.0f, 0.0f, 0x1.9e7a68p-120f, 0x1.bd9792p-85f, 0.0f,
     0x1.8dc2bep-63f, 0.0f, 0x1.6b23eap-44f, 0x1.22b0e2p-35f, 0.0f, 0x1.ed4df4p-96f,
     0x1.9225d4p-30f, 0x1.c7b152p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1eed94p-84f,
     0x1.a3fd4ap-39f, 0x1.3daacep-94f, 0.0f, 0x1.fbfa58p-112f, 0x1.c479a2p-107f, 0.0f,
     0.0f, 0x1.f1660ep-114f, 0.0f, 0.0f, 0x1.0e83a2p-5f, 0.0f, 0.0f, 0x1.e29e86p-4f,
     0.0f, 0.0f, 0x1.829b86p-47f, 0.0f, 0x1.75ca22p-43f, 0.0f, 0.0f, 0x1.5d6334p-110f,
     0x1.a4a7fap-101f, 0x1.5f81b2p-22f, 0.0f, 0.0f, 0.0f, 0x1.42c606p-7f, 0.0f, 0.0f,
     0x1.ee82b8p-57f, 0x1.a6c93ep-112f, 0.0f, 0x1.9f6f2ap-81f, 0x1.bcd60ap-81f, 0.0f,
     0.0f, 0.0f, 0x1.5a5986p-115f, 0.0f, 0x1.899354p-101f, 0x1.97cd12p-107f,
     0x1.c07b4ep-23f, 0x1.c43ddcp-40f, 0.0f, 0x1.856e82p-93f, 0x1.2e0304p-118f, 0.0f,
     0.0f, 0x1.a197d2p-22f, 0.0f, 0x1.9f56ap-86f, 0.0f, 0.0f, 0x1.038376p-114f, 0.0f,
     0.0f, 0x1.3d5d7ap-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.66145p-83f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.d39ba4p-1f, 0.0f, 0x1.0eee9p-23f, 0.0f, 0.0f, 0x1.8072aap-84f,
     0x1.afb646p-66f, 0.0f, 0.0f, 0x1.a7bd14p-62f, 0x1.e20a5p-77f, 0.0f, 0.0f, 0.0f,
     0x1.63b44ep-49f, 0.0f, 0x1.0a5d6p-11f, 0x1.ba97bcp-70f, 0x1.808e16p-18f, 0.0f,
     0x1.fc9318p-24f, 0.0f, 0x1.95d232p-56f, 0.0f, 0x1.401226p-67f, 0x1.519298p-104f,
     0.0f, 0x1.fa8412p-27f, 0.0f, 0x1.62a416p-70f, 0.0f, 0x1.475bf6p-124f, 0.0f,
     0x1.b7c792p-87f, 0x1.11cee4p-43f, 0.0f, 0x1.223d06p-23f, 0.0f, 0x1.a4328cp-6f,
     0x1.cc7fc8p-52f, 0x1.55b38ap-73f, 0x1.0fc5cap-21f, 0x1.aa5516p-22f, 0.0f,
     0x1.c04254p-115f, 0x1.a461fp-95f, 0x1.0ac5bap-1f, 0x1.44684ep-120f,
     0x1.b1c056p-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8fc708p-101f, 0x1.2f4046p-71f, 0.0f,
     0.0f, 0.0f, 0x1.67423ap-90f, 0x1.2d782cp-102f, 0.0f, 0.0f, 0x1.b6feb8p-9f, 0.0f,
     0x1.7aedaap-119f, 0x1.a478f2p-119f, 0x1.5dd7bep-43f, 0.0f, 0x1.db46aep-29f, 0.0f,
     0.0f, 0x1.052444p-91f, 0.0f, 0x1.16aa24p-76f, 0.0f, 0.0f, 0x1.982532p-119f,
     0x1.30808ep-120f, 0x1.94617cp-16f, 0.0f, 0.0f, 0.0f, 0x1.3912f8p-105f, 0.0f,
     0x1.18be1ap-118f, 0x1.fae82ap-8f, 0x1.f3077cp-113f, 0x1.4064d8p-100f,
     0x1.e6abf6p-42f, 0x1.01c2ep-3f, 0x1.3aff5cp-97f, 0.0f, 0.0f, 0x1.9c942ap-33f,
     0.0f, 0.0f, 0x1.987f2cp-89f, 0.0f, 0x1.619172p-8f, 0x1.725012p-54f,
     0x1.57d3bap-25f, 0x1.063a76p-126f, 0x1.04ab98p-87f, 0x1.738c2ep-87f, 0.0f, 0.0f,
     0x1.aaf724p-25f, 0.0f, 0.0f, 0.0f, 0x1.340064p-46f, 0.0f, 0.0f, 0.0f,
     0x1.07cdeep-101f, 0.0f, 0x1.5aba54p-13f, 0.0f, 0x1.011926p-83f, 0.0f,
     0x1.e3a86p-88f, 0.0f, 0.0f, 0x1.d145d4p-7f, 0x1.2b48e6p-51f, 0.0f,
     0x1.f9e14p-108f, 0x1.df077ap-76f, 0x1.1bff66p-18f, 0.0f, 0x1.b6a486p-16f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.2f8b94p-38f, 0x1.50eac6p-14f, 0.0f, 0.0f, 0.0f,
     0x1.4a77d2p-9f, 0.0f, 0x1.5386a2p-59f, 0x1.d7a46p-53f, 0x1.3bdc42p-35f,
     0x1.baa162p-110f, 0x1.5837aep-68f, 0x1.3a8acep-100f, 0.0f, 0.0f, 0.0f,
     0x1.84a3a4p-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a2307p-50f, 0.0f,
     0x1.6064c6p-124f, 0x1.44d2acp-13f, 0x1.f610bap-122f, 0x1.709e0cp-111f,
     0x1.688afcp-108f, 0x1.dc64cp-113f, 0x1.c31d6cp-26f, 0.0f, 0x1.7c3cdep-78f, 0.0f,
     0.0f, 0x1.2b8e2cp-106f, 0x1.ff5b64p-99f, 0.0f, 0.0f, 0.0f, 0x1.71efaap-18f,
     0x1.03283ep-26f, 0.0f, 0x1.e47a5ep-7f, 0.0f, 0.0f, 0x1.e5ff4ep-50f,
     0x1.3b833cp-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2a94e6p-104f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.5da542p-122f, 0x1.b8713ap-7f, 0.0f, 0x1.75278p-112f, 0x1.7ccee6p-45f,
     0.0f, 0.0f, 0.0f, 0x1.efad02p-81f, 0x1.9e2394p-73f, 0.0f, 0x1.e0ddeep-54f, 0.0f,
     0.0f, 0.0f, 0x1.867fd8p-115f, 0.0f, 0.0f, 0.0f, 0x1.f6f58cp-77f, 0x1.5d9b0cp-26f,
     0.0f, 0.0f, 0.0f, 0x1.09c93cp-35f, 0x1.522db8p-49f, 0x1.1e13a8p-62f, 0.0f,
     0x1.704366p-7f, 0x1.57e214p-3f, 0x1.0cb472p-48f
};
static const float external_bench_wrapper_input_table_arg1[1001]  = {
     0.0f, 0.0f, 0x1p0f, 0x1.d673dcp-110f, 0x1.89cae2p-101f, 0.0f, 0.0f,
     0x1.552248p-99f, 0.0f, 0x1.1d1a04p-104f, 0x1.4ee59ep-11f, 0.0f, 0.0f, 0.0f,
     0x1.9463a4p-43f, 0x1.11ace8p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b11aeep-93f,
     0x1.386bb2p-113f, 0x1.e4cf5cp-83f, 0x1.b6d676p-94f, 0.0f, 0x1.34bd4p-48f, 0.0f,
     0x1.461104p-111f, 0.0f, 0x1.574d08p-96f, 0.0f, 0.0f, 0.0f, 0x1.3c903ap-119f,
     0.0f, 0x1.e017ap-5f, 0x1.b54326p-80f, 0.0f, 0x1.a954f8p-125f, 0x1.599cbep-39f,
     0x1.9991c4p-17f, 0.0f, 0.0f, 0x1.3424e8p-15f, 0x1.6c1e1ap-31f, 0x1.5cd8a8p-13f,
     0.0f, 0.0f, 0.0f, 0x1.5e572p-84f, 0x1.a305b6p-23f, 0x1.29389ap-20f,
     0x1.3d5c2p-120f, 0.0f, 0.0f, 0x1.ce4e94p-70f, 0.0f, 0.0f, 0.0f, 0x1.537444p-8f,
     0x1.366874p-21f, 0.0f, 0.0f, 0.0f, 0x1.6b4aa8p-15f, 0x1.f1dcp-77f,
     0x1.777c38p-63f, 0x1.f548c8p-93f, 0x1.284038p-17f, 0.0f, 0.0f, 0.0f,
     0x1.fc898ap-48f, 0.0f, 0x1.027f1p-79f, 0x1.cd5996p-38f, 0x1.8967d4p-37f,
     0x1.edb36p-103f, 0.0f, 0.0f, 0x1.a58be2p-36f, 0.0f, 0.0f, 0x1.3c342cp-41f, 0.0f,
     0x1.b50ff8p-18f, 0x1.265cd4p-121f, 0.0f, 0x1.1d791p-95f, 0.0f, 0.0f,
     0x1.07c20ep-96f, 0.0f, 0.0f, 0x1.eca83cp-6f, 0.0f, 0x1.dd655ep-2f, 0.0f,
     0x1.95e186p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.514648p-102f, 0x1.e03ebp-124f, 0.0f,
     0.0f, 0x1.5b65dp-20f, 0x1.bce378p-121f, 0.0f, 0.0f, 0x1.ea09f2p-113f, 0.0f,
     0x1.459926p-34f, 0x1.dab9a6p-55f, 0.0f, 0x1.a4612cp-73f, 0.0f, 0.0f,
     0x1.2e0fp-21f, 0x1.0c6c02p-97f, 0x1.26714p-45f, 0.0f, 0.0f, 0x1.65511ep-4f,
     0x1.83e304p-111f, 0x1.fda812p-58f, 0x1.13e3a2p-67f, 0x1.e3bddep-29f, 0.0f, 0.0f,
     0x1.ac2564p-24f, 0x1.cee40cp-81f, 0x1.19c16p-18f, 0.0f, 0x1.1c223ap-80f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.8f08b6p-4f, 0.0f, 0x1.73daeap-86f, 0.0f, 0x1.ad17fep-104f,
     0x1.1a8be8p-78f, 0x1.ea83ecp-43f, 0x1.12d312p-93f, 0x1.713c42p-80f,
     0x1.f79486p-23f, 0x1.f5b0f2p-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4ab24cp-29f,
     0x1.49aeeap-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e39b12p-86f, 0.0f, 0x1.29e32ap-18f,
     0.0f, 0x1.542d16p-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.66b7ep-14f, 0x1.a8a28ap-117f,
     0.0f, 0x1.5e1226p-30f, 0.0f, 0x1.2e0b6p-45f, 0x1.0db776p-51f, 0x1.1bd778p-22f,
     0.0f, 0x1.93446cp-82f, 0.0f, 0.0f, 0x1.e9d77p-55f, 0x1.f0c37ep-95f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f1c8aep-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a807cp-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.994eacp-2f, 0.0f, 0.0f,
     0x1.2abbdap-26f, 0.0f, 0.0f, 0.0f, 0x1.8e1d34p-34f, 0.0f, 0x1.65fb16p-65f,
     0x1.2c4ba4p-13f, 0.0f, 0.0f, 0x1.7bb5fap-126f, 0.0f, 0x1.3e672ep-42f, 0.0f,
     0x1.07e614p-120f, 0x1.48bf0ep-72f, 0.0f, 0x1.71df8ep-116f, 0.0f, 0x1.558772p-61f,
     0.0f, 0.0f, 0.0f, 0x1.9eb3fep-58f, 0x1.51d208p-37f, 0x1.00b036p-122f,
     0x1.f6d83ap-87f, 0.0f, 0x1.21f778p-9f, 0.0f, 0x1.1a01bep-49f, 0x1.78ea62p-13f,
     0.0f, 0x1.311538p-85f, 0.0f, 0x1.25c91ep-35f, 0.0f, 0.0f, 0x1.e1b5c2p-93f,
     0x1.6ef9a2p-44f, 0x1.bbe8fcp-27f, 0x1.b95eecp-38f, 0.0f, 0x1.3afe72p-29f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.29632p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e4b8dp-68f,
     0.0f, 0.0f, 0.0f, 0x1.3f1b78p-23f, 0x1.cd998ap-95f, 0x1.c9cafcp-31f,
     0x1.2e21cep-83f, 0x1.4ea372p-23f, 0x1.201268p-90f, 0x1.5bcabap-103f, 0.0f,
     0x1.697d94p-113f, 0.0f, 0x1.86b2cap-5f, 0x1.cdb05ap-62f, 0.0f, 0.0f, 0.0f,
     0x1.47c1ecp-45f, 0x1.c9983ep-27f, 0x1.afdbf2p-11f, 0.0f, 0x1.5a4388p-85f,
     0x1.fd816ap-41f, 0x1.69e79ap-61f, 0.0f, 0.0f, 0x1.4cfd2p-94f, 0x1.820d6ap-52f,
     0x1.2f68ecp-95f, 0.0f, 0x1.c8938cp-18f, 0.0f, 0x1.7247f2p-32f, 0.0f, 0.0f,
     0x1.97d79p-86f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.61d762p-75f, 0.0f, 0x1.32f23ap-5f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.158b86p-76f, 0.0f, 0.0f, 0x1.baa132p-110f, 0.0f,
     0x1.1be824p-17f, 0.0f, 0.0f, 0x1.f058c6p-65f, 0.0f, 0.0f, 0.0f, 0x1.868932p-30f,
     0.0f, 0x1.d7c43ep-28f, 0.0f, 0x1.6011fap-10f, 0.0f, 0x1.57383ap-32f,
     0x1.11382p-120f, 0.0f, 0.0f, 0.0f, 0x1.194b52p-19f, 0x1.d24202p-45f,
     0x1.906b9p-110f, 0x1.89d30cp-76f, 0x1.3e1b32p-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b14414p-119f, 0.0f, 0.0f, 0.0f, 0x1.86a694p-1f, 0.0f,
     0x1.7b56d4p-77f, 0.0f, 0.0f, 0x1.fac59cp-37f, 0x1.393472p-32f, 0x1.67fbfp-81f,
     0.0f, 0.0f, 0x1.d24866p-102f, 0x1.2269dcp-30f, 0x1.097014p-60f, 0.0f, 0.0f,
     0x1.af025ap-39f, 0.0f, 0.0f, 0x1.816f48p-55f, 0x1.cd0992p-52f, 0.0f, 0.0f,
     0x1.05f8a6p-125f, 0x1.f9dc7cp-64f, 0.0f, 0.0f, 0x1.e46888p-122f,
     0x1.43bc64p-102f, 0x1.fadfb2p-66f, 0x1.99deaep-100f, 0x1.c1240cp-46f, 0.0f, 0.0f,
     0x1.5f1018p-22f, 0x1.27a9fep-123f, 0.0f, 0x1.5c572ep-79f, 0x1.f144f2p-101f,
     0x1.40bdbap-89f, 0x1.ae2024p-2f, 0x1.b4a47cp-121f, 0.0f, 0x1.d3142cp-69f, 0.0f,
     0.0f, 0x1.02487ep-54f, 0.0f, 0x1.9f050cp-10f, 0x1.a4c1dp-32f, 0.0f,
     0x1.6cd4a2p-53f, 0.0f, 0x1.042036p-93f, 0x1.8c67b2p-56f, 0.0f, 0.0f,
     0x1.c6b7e6p-87f, 0x1.ee7e18p-58f, 0.0f, 0x1.cd86acp-86f, 0x1.8ce278p-100f,
     0x1.0dd50ap-71f, 0x1.8c5144p-90f, 0.0f, 0x1.d6aa1ep-112f, 0.0f, 0.0f,
     0x1.f7ad6p-92f, 0x1.796f02p-109f, 0x1.af6adp-22f, 0x1.631a24p-66f, 0.0f, 0.0f,
     0x1.a3ad2cp-100f, 0x1.d1f6c4p-27f, 0x1.04d452p-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.0a37b8p-22f, 0x1.fa2996p-114f, 0x1.e44192p-78f, 0x1.33d81ap-80f,
     0x1.8ad2eap-86f, 0x1.ff512ep-116f, 0.0f, 0.0f, 0x1.c36da2p-23f, 0x1.917214p-30f,
     0x1.f20cf6p-71f, 0x1.0ec962p-15f, 0x1.7687a2p-122f, 0x1.7238acp-18f,
     0x1.f7f402p-86f, 0.0f, 0x1.135b6ep-44f, 0x1.9efafap-89f, 0x1.cbaafcp-30f, 0.0f,
     0x1.629b1cp-41f, 0.0f, 0.0f, 0x1.e902c8p-97f, 0x1.efe236p-99f, 0x1.7416bep-73f,
     0.0f, 0x1.ee19a8p-60f, 0x1.24a55ep-33f, 0.0f, 0x1.6fb84ep-3f, 0x1.c653cep-102f,
     0.0f, 0x1.74c7d4p-71f, 0x1.015364p-3f, 0x1.07819cp-57f, 0x1.10ee46p-78f, 0.0f,
     0x1.a656p-91f, 0.0f, 0x1.27bd22p-86f, 0.0f, 0.0f, 0x1.42c27p-92f,
     0x1.740a0cp-29f, 0x1.f33788p-112f, 0x1.56e97cp-25f, 0.0f, 0.0f, 0x1.20cb96p-24f,
     0.0f, 0x1.004106p-6f, 0.0f, 0x1.f89a4ep-71f, 0.0f, 0.0f, 0x1.5e7f38p-11f, 0.0f,
     0x1.5a19c4p-89f, 0x1.12777ep-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cc68fcp-107f,
     0x1.7dab1cp-54f, 0x1.e6226ap-54f, 0x1.c6df1cp-72f, 0.0f, 0.0f, 0x1.d16816p-60f,
     0.0f, 0x1.4ab884p-12f, 0.0f, 0x1.b05f5ep-12f, 0x1.b9154cp-101f, 0x1.a6abe8p-120f,
     0x1.d86068p-98f, 0x1.0451cap-32f, 0x1.825274p-77f, 0.0f, 0.0f, 0x1.6d4d4ap-67f,
     0x1.db3d7p-12f, 0.0f, 0.0f, 0x1.8eb71ap-40f, 0.0f, 0x1.ff351p-24f,
     0x1.cb9b36p-114f, 0.0f, 0x1.1ba5d2p-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0bb084p-14f,
     0x1.d6c648p-51f, 0.0f, 0.0f, 0x1.780c1ep-55f, 0.0f, 0.0f, 0x1.0fb34ap-45f, 0.0f,
     0.0f, 0x1.8694f6p-52f, 0x1.57778cp-96f, 0.0f, 0x1.f25f3cp-89f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.46841cp-7f, 0x1.4a0e2cp-46f, 0x1.f88484p-91f, 0x1.253a8p-99f, 0.0f,
     0x1.85a9ap-80f, 0.0f, 0.0f, 0.0f, 0x1.4a9236p-68f, 0.0f, 0x1.90795ap-34f,
     0x1.b0f09ep-52f, 0x1.b9d88ap-2f, 0x1.103936p-97f, 0.0f, 0x1.efe64cp-74f, 0.0f,
     0.0f, 0x1.d329f6p-95f, 0.0f, 0x1.707904p-117f, 0.0f, 0.0f, 0.0f, 0x1.cc9ca8p-62f,
     0x1.218a16p-14f, 0x1.7fd514p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0b5b16p-44f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3b97ap-58f, 0.0f, 0x1.4373c8p-62f,
     0x1.d4fc7ep-46f, 0.0f, 0x1.695724p-62f, 0.0f, 0.0f, 0.0f, 0x1.70a866p-69f, 0.0f,
     0x1.d5d41p-38f, 0.0f, 0x1.19383ap-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8a5238p-23f, 0.0f, 0.0f, 0.0f, 0x1.0db8f6p-14f, 0x1.d259bap-66f,
     0x1.850918p-29f, 0.0f, 0.0f, 0x1.e173eap-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.d5005ap-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.750034p-5f, 0.0f,
     0x1.32a96p-30f, 0x1.b5db3ep-9f, 0x1.c4104ep-65f, 0.0f, 0.0f, 0.0f,
     0x1.8bd688p-115f, 0.0f, 0x1.c2a5cap-94f, 0x1.7af896p-69f, 0x1.940ed2p-34f, 0.0f,
     0x1.857552p-42f, 0.0f, 0x1.8f16eep-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.60accep-89f, 0x1.75238p-120f, 0x1.77caf6p-104f, 0x1.353872p-13f, 0.0f,
     0x1.74e3b8p-122f, 0.0f, 0x1.343748p-28f, 0x1.08f58ap-19f, 0x1.747d82p-61f, 0.0f,
     0x1.6cdb4cp-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.865e18p-46f,
     0x1.c00954p-81f, 0x1.119056p-42f, 0.0f, 0.0f, 0.0f, 0x1.09df78p-121f,
     0x1.0e54ap-39f, 0.0f, 0x1.f68bdcp-102f, 0x1.77257ep-115f, 0.0f, 0x1.f96ff6p-59f,
     0x1.903e3ep-37f, 0x1.88c1f2p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6f7006p-30f,
     0x1.78bbd2p-39f, 0.0f, 0.0f, 0.0f, 0x1.6b2af4p-4f, 0x1.8e212ep-7f,
     0x1.96e716p-46f, 0x1.ff461ep-11f, 0x1.34b056p-125f, 0x1.ce0a72p-98f, 0.0f,
     0x1.978beap-47f, 0.0f, 0x1.122c18p-76f, 0x1.13b9aep-19f, 0x1.b1f1cap-83f, 0.0f,
     0x1.6c4076p-68f, 0x1.61e97ep-21f, 0x1.1bdaacp-118f, 0x1.7fd30ep-51f, 0.0f, 0.0f,
     0.0f, 0x1.331342p-88f, 0.0f, 0.0f, 0x1.0380ep-114f, 0x1.65eb26p-2f, 0.0f,
     0x1.60d418p-38f, 0x1.a1baap-35f, 0.0f, 0.0f, 0.0f, 0x1.7d3b2ep-91f, 0.0f,
     0x1.571c8ap-115f, 0x1.34cf36p-72f, 0x1.a0bc0cp-44f, 0.0f, 0x1.9fb55ep-53f, 0.0f,
     0x1.cd6b3cp-121f, 0x1.03d87ep-85f, 0x1.a8a1f2p-109f, 0.0f, 0x1.0f45fep-92f,
     0x1.658ae8p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dd23ep-101f, 0x1.959f36p-40f,
     0x1.a7b096p-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.106dc8p-122f, 0.0f, 0x1.bb6826p-61f,
     0x1.b56d4p-53f, 0x1.bb972ep-110f, 0.0f, 0x1.a915c8p-73f, 0.0f, 0x1.cd5d06p-104f,
     0x1.50e56cp-12f, 0x1.4b971p-118f, 0.0f, 0x1.b5511ap-111f, 0x1.db05cp-63f, 0.0f,
     0x1.ba315ep-63f, 0x1.f213fap-4f, 0.0f, 0x1.39305p-57f, 0.0f, 0.0f, 0.0f,
     0x1.159486p-2f, 0.0f, 0.0f, 0x1.db19f8p-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.80dfacp-101f, 0.0f, 0.0f, 0x1.ee201p-24f, 0x1.cc155ap-41f, 0x1.bd67b2p-19f,
     0x1.2022dep-121f, 0.0f, 0x1.88159ep-74f, 0.0f, 0x1.777b4ap-28f, 0x1.b5fbbap-126f,
     0.0f, 0.0f, 0.0f, 0x1.decea2p-60f, 0x1.c6552ap-54f, 0x1.d069f2p-8f,
     0x1.8aa962p-80f, 0.0f, 0x1.c021cap-13f, 0x1.11b1a6p-82f, 0x1.36735ep-95f,
     0x1.3ef568p-46f, 0.0f, 0.0f, 0.0f, 0x1.0c9d88p-4f, 0.0f, 0x1.d6543ap-27f,
     0x1.39c3b8p-114f, 0.0f, 0.0f, 0.0f, 0x1.5defcp-63f, 0.0f, 0x1.18abep-11f, 0.0f,
     0.0f, 0.0f, 0x1.3811ecp-19f, 0.0f, 0.0f, 0.0f, 0x1.9a8ffap-106f, 0.0f, 0.0f,
     0x1.108d7ep-53f, 0x1.031b98p-62f, 0.0f, 0x1.5b2422p-36f, 0.0f, 0x1.f98576p-32f,
     0x1.027032p-79f, 0.0f, 0.0f, 0x1.bcfb2p-76f, 0x1.7de76ap-90f, 0x1.b55984p-47f,
     0.0f, 0.0f, 0x1.52870ep-54f, 0x1.49f9e2p-51f, 0.0f, 0x1.17f356p-126f, 0.0f,
     0x1.9c1232p-122f, 0x1.d51552p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4cca58p-101f,
     0.0f, 0.0f, 0x1.f0cd54p-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6a7feap-124f,
     0x1.191e8p-17f, 0.0f, 0.0f, 0x1.56a7f8p-51f, 0.0f, 0.0f, 0x1.167e4cp-72f, 0.0f,
     0.0f, 0.0f, 0x1.d48aaep-119f, 0x1.64b58cp-77f, 0.0f, 0x1.327262p-59f, 0.0f,
     0x1.f268e8p-116f, 0x1.94185ep-8f, 0.0f, 0.0f, 0x1.0cfe24p-70f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3b1ac6p-101f, 0.0f,
     0x1.9c8f64p-14f, 0x1.75ae3p-17f, 0.0f, 0x1.7a95b2p-10f, 0x1.4c261cp-101f,
     0x1.42ef42p-90f, 0.0f, 0x1.7e2ee8p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.174432p-111f, 0x1.cedd2cp-95f, 0x1.93f69p-67f, 0.0f, 0.0f, 0x1.559066p-11f,
     0.0f, 0.0f, 0x1.26034cp-96f, 0x1.b3aac8p-117f, 0.0f, 0.0f, 0.0f, 0x1.c84bd4p-88f,
     0x1.d36b8ep-7f, 0x1.f430bap-88f, 0x1.141018p-53f, 0.0f, 0x1.576108p-123f, 0.0f,
     0.0f, 0.0f, 0x1.55077ap-3f, 0.0f, 0.0f, 0x1.887c4ep-91f, 0.0f, 0.0f,
     0x1.442e1cp-100f, 0x1.6854ep-11f, 0x1.9c62c6p-77f, 0.0f, 0x1.747ba4p-17f,
     0x1.147ee6p-105f, 0.0f, 0.0f, 0.0f, 0x1.d8b39ap-122f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.08f1eep-80f, 0.0f, 0.0f, 0x1.12f866p-96f, 0.0f, 0.0f, 0.0f, 0x1.686c9cp-98f,
     0.0f, 0x1.f0712ap-124f, 0.0f, 0x1.22c38ap-29f, 0x1.a82b32p-52f, 0x1.a1cca2p-22f,
     0x1.cb8aap-29f, 0.0f, 0x1.792e3p-111f, 0x1.152d18p-99f, 0.0f, 0x1.feb632p-61f,
     0x1.3ed16cp-110f, 0x1.10acaap-81f, 0x1.24babp-106f, 0.0f, 0x1.0dd7fcp-79f, 0.0f,
     0x1.de5548p-114f, 0.0f, 0.0f, 0x1.314fa4p-42f, 0.0f, 0.0f, 0x1.2ee2fap-78f, 0.0f,
     0.0f, 0x1.44a83cp-61f, 0.0f, 0x1.8727e2p-84f, 0.0f, 0x1.0b1c94p-4f,
     0x1.113404p-26f, 0.0f, 0x1.8a96d4p-22f, 0x1.299a94p-31f, 0x1.0a63a6p-13f, 0.0f,
     0x1.5e72aep-124f, 0.0f, 0x1.d56548p-97f, 0x1.449a58p-51f, 0.0f, 0.0f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    float global_bench_acc;
    int64_t timer;
    int64_t tmp;
    int32_t j;
    int64_t tmp1;
    int64_t tmp2;
    double id_tmp;
    double cpe_measure;
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = 0.0f;
    tmp = __cos_counter_num(0);
    timer = tmp;
    j = INT32_C(0);

    for (;(j < INT32_C(10000));){
        float bench_acc;
        int32_t i;
        float tmp0;
        int32_t tmp1;

        i = INT32_C(0);
        bench_acc = 0.0f;

        for (;(i < INT32_C(1001));){
            float tmp0;
            float tmp1;
            float tmp2;
            float tmp3;
            int32_t tmp4;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = external_bench_wrapper_input_table_arg1[i];
            tmp2 = powf(tmp0, tmp1);
            external_bench_wrapper_output_table[i] = tmp2;
            tmp3 = bench_acc + tmp2;
            bench_acc = tmp3;
            tmp4 = i + INT32_C(1);
            i = tmp4;
        }
        tmp0 = global_bench_acc + bench_acc;
        global_bench_acc = tmp0;
        tmp1 = j + INT32_C(1);
        j = tmp1;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10010000.0;
    printf("powf %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("powf bench acc %a\n", global_bench_acc);
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
