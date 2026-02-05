/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_log10f4_u10kvx.c --function \
 *     Sleef_finz_log10f4_u10kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 4 --function-input-vector-size \
 *     4 --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float4_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float4_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0x1.922332p-19f, 0.0f, 0x1.d26d62p-88f, 0x1.2d8df8p-70f, 0.0f, 0x1.02233ep-111f,
     0x1.19c6f4p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4b27dap-28f, 0x1.aa24b2p-37f,
     0x1.133024p-54f, 0.0f, 0x1.3d5d86p-114f, 0.0f, 0x1.95a5d4p-119f, 0x1.cb9bc2p-3f,
     0x1.caaa36p-115f, 0x1.4deb5cp-84f, 0.0f, 0x1.75ada6p-14f, 0.0f, 0x1.73a716p-122f,
     0.0f, 0x1.27ea88p-108f, 0x1.d3f62ap-63f, 0x1.b81548p-125f, 0x1.a4790ep-29f, 0.0f,
     0x1.3c961ep-115f, 0x1.c6b24ap-28f, 0.0f, 0.0f, 0x1.fe887ap-56f, 0.0f,
     0x1.7d66aep-47f, 0.0f, 0x1.f1e0b2p-81f, 0.0f, 0.0f, 0x1.47bcdep-111f,
     0x1.5853e2p-119f, 0.0f, 0x1.d1bf66p-28f, 0x1.e04db8p-68f, 0x1.0c84ep-103f, 0.0f,
     0x1.950304p-20f, 0x1.9579aep-61f, 0x1.73d812p-67f, 0.0f, 0.0f, 0.0f,
     0x1.d4f7bap-30f, 0x1.598e6ep-40f, 0.0f, 0x1.3d6dbep-123f, 0x1.2ef1b6p-101f, 0.0f,
     0x1.fa5a5ep-99f, 0.0f, 0x1.3212a2p-18f, 0.0f, 0x1.68badap-62f, 0x1.8ae0dap-101f,
     0x1.f101bp-115f, 0x1.b3a33p-1f, 0.0f, 0.0f, 0x1.73d248p-94f, 0x1.d213b8p-96f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ec64f2p-35f, 0x1.adf026p-16f, 0x1.3072bap-109f, 0.0f,
     0x1.b407dap-38f, 0x1.f33364p-64f, 0x1.29c524p-11f, 0.0f, 0x1.3db16ep-57f, 0.0f,
     0.0f, 0.0f, 0x1.8ebaacp-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.74ef6p-118f,
     0x1.e57dfap-98f, 0.0f, 0.0f, 0x1.f9db62p-79f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cf3e26p-108f, 0.0f, 0x1.b57f1ep-29f, 0.0f, 0x1.f283e6p-39f, 0x1.0f1cb4p-116f,
     0x1.881d6ap-51f, 0x1.b052dap-95f, 0x1.86cf98p-107f, 0x1.b94b6ep-106f, 0.0f,
     0x1.dd581p-103f, 0x1.d2168cp-34f, 0x1.cb36f8p-35f, 0x1.067306p-118f,
     0x1.a7be0ap-21f, 0x1.4c172ep-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dff50ep-95f, 0.0f,
     0.0f, 0.0f, 0x1.650feep-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9b4a5ap-106f,
     0x1.8a7d7ep-19f, 0.0f, 0x1.8cf6fcp-58f, 0x1.07a51p-37f, 0x1.da5a04p-59f, 0.0f,
     0x1.13c77cp-103f, 0x1.ea1454p-99f, 0x1.6a1672p-85f, 0x1.2706f4p-20f,
     0x1.eb84eep-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b2c3c2p-49f, 0x1.35593ep-71f,
     0x1.ef026p-117f, 0.0f, 0.0f, 0x1.d5b378p-96f, 0.0f, 0x1.73a826p-59f, 0.0f, 0.0f,
     0x1p0f, 0x1.5ec636p-29f, 0.0f, 0x1.353cf8p-30f, 0x1.a27ac2p-120f,
     0x1.5eaa5p-100f, 0x1.ebdd7p-105f, 0x1.2a1462p-118f, 0x1.3d54ecp-2f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.bda1c8p-3f, 0x1.87baap-106f, 0x1.82900ap-94f,
     0x1.eff28p-25f, 0.0f, 0.0f, 0x1.d6519ep-92f, 0.0f, 0x1.b7fd4p-86f,
     0x1.e689aap-28f, 0x1.445c88p-49f, 0.0f, 0x1.7b59aap-20f, 0x1.21d56ep-68f, 0.0f,
     0.0f, 0.0f, 0x1.dc1ec8p-78f, 0x1.0e64f8p-74f, 0x1.7f5228p-109f, 0x1.1e0fbp-73f,
     0x1.18ff06p-124f, 0x1.5b7696p-113f, 0x1.350e92p-52f, 0.0f, 0.0f, 0x1.0f9406p-89f,
     0x1.0d803ep-61f, 0x1.a8a77p-95f, 0x1.f7d15p-95f, 0.0f, 0.0f, 0.0f,
     0x1.cdd2fp-118f, 0.0f, 0.0f, 0x1.5c161ep-41f, 0.0f, 0.0f, 0.0f, 0x1.3a4056p-5f,
     0.0f, 0.0f, 0x1.17364ap-67f, 0x1.822b1ap-102f, 0x1.ff785cp-57f, 0x1.ee82fap-109f,
     0.0f, 0x1.331718p-15f, 0.0f, 0.0f, 0x1.893092p-2f, 0x1.42a7f4p-67f, 0.0f,
     0x1.360e4cp-108f, 0x1.989414p-13f, 0x1.a319bep-12f, 0.0f, 0x1.008bb8p-75f, 0.0f,
     0x1.732cc6p-54f, 0.0f, 0x1.a0820cp-47f, 0x1.380f76p-51f, 0x1.3ff22cp-48f,
     0x1.df73eap-87f, 0.0f, 0.0f, 0.0f, 0x1.cf4b7cp-38f, 0x1.07e87ep-60f,
     0x1.011e06p-60f, 0.0f, 0.0f, 0x1.7e8928p-123f, 0x1.5ab2dep-69f, 0.0f, 0.0f,
     0x1.a7cdap-10f, 0x1.6aa4f4p-69f, 0.0f, 0x1.f1337cp-73f, 0.0f, 0.0f,
     0x1.f04a94p-58f, 0x1.eabebap-12f, 0x1.c93522p-5f, 0x1.414afap-10f,
     0x1.f0a8dcp-29f, 0.0f, 0.0f, 0x1.c2e126p-94f, 0.0f, 0.0f, 0.0f, 0x1.2863acp-42f,
     0.0f, 0x1.3eb988p-61f, 0.0f, 0.0f, 0.0f, 0x1.828d02p-60f, 0.0f, 0.0f,
     0x1.d7aae8p-36f, 0x1.7f99c2p-25f, 0x1.1ed1fp-27f, 0x1.56d5dp-108f,
     0x1.b8c4b8p-9f, 0x1.9dffaap-87f, 0x1.f69beap-94f, 0x1.3d4172p-49f,
     0x1.849a2cp-22f, 0x1.dd073p-40f, 0x1.79c8e6p-126f, 0.0f, 0x1.bf1a04p-45f,
     0x1.6f60cap-15f, 0.0f, 0.0f, 0.0f, 0x1.6d85aap-51f, 0x1.75f6fap-81f,
     0x1.43de3p-120f, 0x1.6de974p-50f, 0.0f, 0.0f, 0.0f, 0x1.18dd8ap-24f,
     0x1.e81164p-108f, 0.0f, 0.0f, 0x1.3a92b8p-63f, 0x1.ea8c16p-61f, 0.0f,
     0x1.d8d2c4p-10f, 0.0f, 0.0f, 0.0f, 0x1.f67f98p-113f, 0x1.5f5418p-77f, 0x1p0f,
     0.0f, 0x1.df0374p-108f, 0.0f, 0x1.09c1dp-90f, 0.0f, 0x1.01a8b4p-118f,
     0x1.72c148p-15f, 0x1.039cf6p-118f, 0x1.591a8ep-85f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0455a4p-114f, 0x1.39ed48p-87f, 0x1.789864p-87f, 0x1.139bfcp-88f,
     0x1.1e486p-12f, 0.0f, 0x1.6fb202p-47f, 0.0f, 0x1.1947fcp-2f, 0x1.358ebap-116f,
     0.0f, 0.0f, 0x1.2eee16p-48f, 0.0f, 0.0f, 0.0f, 0x1.4e84c6p-21f, 0.0f, 0.0f, 0.0f,
     0x1.2d3de8p-61f, 0.0f, 0.0f, 0.0f, 0x1.688426p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.71c7fep-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.68b342p-78f,
     0x1.bd84d4p-20f, 0x1.583a8ap-72f, 0x1.77aa86p-122f, 0x1.bfeb28p-22f,
     0x1.afbde2p-66f, 0.0f, 0.0f, 0.0f, 0x1.c98ea6p-70f, 0.0f, 0x1.a44c2p-58f,
     0x1.c4b7a2p-108f, 0x1.ff4908p-14f, 0.0f, 0x1.f21d14p-113f, 0.0f, 0x1.e06a98p-44f,
     0x1.dbc5c4p-117f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.d6401cp-4f, 0.0f,
     0x1.42468cp-56f, 0x1.15f05ep-10f, 0x1.bd222ep-19f, 0.0f, 0.0f, 0.0f,
     0x1.75b094p-69f, 0x1.c3d9f6p-105f, 0.0f, 0.0f, 0x1.1dc99p-51f, 0x1.716328p-53f,
     0.0f, 0.0f, 0x1.df8084p-83f, 0x1.0dc73p-39f, 0.0f, 0x1.1a6eap-49f, 0.0f,
     0x1.742ab2p-12f, 0x1.4c1b8cp-73f, 0x1.a04426p-26f, 0x1.b6c7c8p-76f,
     0x1.66c432p-123f, 0x1.1120eep-92f, 0.0f, 0.0f, 0.0f, 0x1.87d2c2p-22f, 0.0f,
     0x1.e4c00ep-110f, 0x1.1d089ep-66f, 0x1.adecf4p-12f, 0.0f, 0.0f, 0.0f,
     0x1.66eb32p-107f, 0.0f, 0x1.7f3594p-25f, 0.0f, 0x1.999c46p-105f, 0x1.8514a6p-95f,
     0.0f, 0.0f, 0x1.70992cp-97f, 0x1.301984p-87f, 0.0f, 0.0f, 0x1.cb6c9cp-121f,
     0x1.2a2a96p-121f, 0.0f, 0x1.d048c8p-43f, 0.0f, 0.0f, 0.0f, 0x1.4264fp-20f, 0.0f,
     0x1.6947b6p-73f, 0x1.3138bp-94f, 0x1.e3f712p-17f, 0.0f, 0x1.e80618p-112f,
     0x1.94ac9p-5f, 0.0f, 0x1.dcedccp-113f, 0x1.f5ff68p-64f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bfdbbcp-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fee2d8p-1f,
     0x1.a7e572p-93f, 0.0f, 0x1.f79268p-84f, 0x1.55dfa4p-51f, 0.0f, 0.0f,
     0x1.7621b4p-115f, 0x1.d57a88p-75f, 0x1.7ac018p-52f, 0.0f, 0x1.c18566p-28f,
     0x1.c16286p-21f, 0x1.c7078ep-114f, 0.0f, 0x1.73a418p-15f, 0x1.3158c4p-68f,
     0x1.af73f6p-61f, 0.0f, 0.0f, 0x1.ab510ep-1f, 0x1.85948ep-81f, 0.0f,
     0x1.32b3aap-85f, 0x1.4ae5bcp-75f, 0x1.822eacp-108f, 0.0f, 0.0f, 0.0f,
     0x1.fec03ep-72f, 0x1.5fb632p-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8482f2p-120f,
     0x1.281788p-20f, 0.0f, 0.0f, 0x1.8e5246p-72f, 0.0f, 0x1.2ca6eap-39f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.551a3p-113f, 0.0f, 0.0f, 0.0f, 0x1.5b42bcp-68f,
     0x1.486984p-101f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.70d4b4p-26f, 0.0f,
     0x1.3e5914p-84f, 0x1.6a84cp-121f, 0.0f, 0.0f, 0x1.27788ap-119f, 0x1.98277ap-63f,
     0.0f, 0x1.e86dacp-95f, 0x1.8128d8p-21f, 0.0f, 0.0f, 0x1.ff12bap-116f,
     0x1.091612p-10f, 0x1.173118p-82f, 0.0f, 0x1.98b798p-9f, 0x1.736becp-95f,
     0x1.dacd2ep-44f, 0x1.b3cb04p-23f, 0x1.af4d62p-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.64d5f8p-96f, 0x1.cf2e7p-13f, 0.0f, 0.0f,
     0x1.5b68e6p-95f, 0x1.b71456p-67f, 0.0f, 0x1.1a039ep-74f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.75d6d6p-26f, 0x1.74e518p-55f, 0.0f, 0.0f, 0x1.123f7cp-102f, 0.0f,
     0x1.a8e73ep-36f, 0.0f, 0.0f, 0x1.b85a72p-86f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6cccc4p-20f, 0.0f, 0x1.b5e1a2p-107f, 0.0f, 0x1.c6eb3cp-55f, 0x1.3022a2p-108f,
     0.0f, 0.0f, 0x1.8fcaa2p-102f, 0x1.9e0a4p-114f, 0x1.ebb5d6p-87f, 0.0f,
     0x1.74ab14p-80f, 0.0f, 0x1.0a4dbap-121f, 0x1p0f, 0.0f, 0x1.c16b9cp-54f,
     0x1.8b0126p-97f, 0.0f, 0.0f, 0x1.ff967p-85f, 0x1.1cbb3ep-123f, 0.0f,
     0x1.cf7adap-2f, 0x1.4e2f54p-66f, 0.0f, 0x1.854f36p-29f, 0.0f, 0x1.5add1p-47f,
     0x1.2d030cp-87f, 0.0f, 0x1.bfeef2p-33f, 0x1.beb03p-103f, 0x1.1552c4p-53f, 0.0f,
     0x1.a9c838p-28f, 0.0f, 0x1.5fde1p-108f, 0.0f, 0.0f, 0.0f, 0x1.d4d5d2p-88f,
     0x1.32fc8ap-25f, 0.0f, 0.0f, 0x1.2a5c58p-67f, 0.0f, 0.0f, 0x1.2d853ep-126f, 0.0f,
     0.0f, 0.0f, 0x1.44a096p-32f, 0x1.428248p-103f, 0x1.e6a278p-33f, 0x1.e2d28ep-38f,
     0.0f, 0x1.ac4ca2p-75f, 0.0f, 0.0f, 0x1.89c798p-80f, 0x1.54f50ep-111f,
     0x1.6d0a08p-77f, 0.0f, 0.0f, 0.0f, 0x1.1bee82p-59f, 0x1.53eeeap-52f,
     0x1.03366p-69f, 0.0f, 0x1.733ae6p-106f, 0x1.deebc8p-82f, 0.0f, 0.0f,
     0x1.01c56ap-3f, 0x1.35c0ap-52f, 0.0f, 0.0f, 0.0f, 0x1.32743ep-103f, 0.0f, 0.0f,
     0x1.2a9c32p-17f, 0.0f, 0x1.286b72p-78f, 0x1.a1ac08p-4f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.555d1p-98f, 0x1.9548e4p-88f, 0x1.213c4cp-3f, 0.0f, 0x1.aa3a74p-22f, 0.0f,
     0x1.91ec0cp-11f, 0x1.203f3cp-85f, 0.0f, 0.0f, 0x1.f2f63ap-56f, 0.0f,
     0x1.cd9568p-58f, 0x1.db68b2p-92f, 0.0f, 0.0f, 0x1.b672b2p-16f, 0x1.c04acap-81f,
     0x1.c1836ap-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5faddep-80f, 0.0f,
     0x1.9e392ap-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c39a4ap-7f, 0x1.4315f6p-91f, 0.0f,
     0.0f, 0x1.34d46ep-99f, 0x1.90bdb2p-91f, 0x1.cd383ep-33f, 0.0f, 0.0f, 0.0f,
     0x1.94502ep-4f, 0x1.99c4b6p-107f, 0x1.3cfea2p-74f, 0.0f, 0x1.f88aa4p-12f,
     0x1.1006ep-37f, 0.0f, 0.0f, 0x1.9daecap-106f, 0x1.882cc6p-50f, 0x1.87b99ep-61f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.041a02p-122f, 0.0f, 0.0f, 0.0f,
     0x1.56c9acp-8f, 0x1.569348p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3347c6p-47f,
     0x1.ebf06p-3f, 0x1.45b776p-75f, 0.0f, 0.0f, 0x1.7f57ap-82f, 0.0f, 0.0f,
     0x1.3c5064p-14f, 0.0f, 0.0f, 0.0f, 0x1.e6e3cap-41f, 0.0f, 0.0f, 0x1.4405e4p-51f,
     0.0f, 0x1.909654p-98f, 0.0f, 0.0f, 0.0f, 0x1.156942p-42f, 0x1.aa7a12p-36f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0571a8p-107f, 0.0f, 0.0f, 0x1.73d362p-32f,
     0x1.699d02p-22f, 0.0f, 0x1.a30f8ep-103f, 0.0f, 0x1.0cb7dap-3f, 0x1.32a12ep-14f,
     0.0f, 0.0f, 0x1.315eep-70f, 0x1.f1a988p-62f, 0x1.c4fd1ap-120f, 0x1.a05b68p-111f,
     0x1.167552p-93f, 0x1.44a84p-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.67cd14p-29f, 0.0f, 0.0f, 0x1.546e72p-18f, 0x1.5dd548p-24f, 0.0f, 0.0f,
     0x1.5addbap-110f, 0x1.6becbcp-61f, 0.0f, 0x1.54629cp-80f, 0.0f, 0.0f,
     0x1.5ff574p-14f, 0x1.e4b7p-119f, 0x1.b45498p-125f, 0x1.e34366p-66f, 0.0f,
     0x1.c50284p-19f, 0.0f, 0x1.c5e8a8p-61f, 0.0f, 0x1.75a814p-73f, 0x1.1a5b9ep-53f,
     0.0f, 0.0f, 0x1.8a8a08p-23f, 0.0f, 0.0f, 0x1.68dd3p-94f, 0x1.af5a94p-108f,
     0x1.e77136p-49f, 0.0f, 0.0f, 0x1.ea6aaap-47f, 0x1.c126c4p-7f, 0x1.6a6924p-20f,
     0x1.4abddcp-92f, 0.0f, 0.0f, 0x1.f75a28p-58f, 0x1.3e50f2p-101f, 0.0f, 0.0f,
     0x1.5dd3bcp-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7bd9b2p-70f, 0.0f,
     0x1.ae5122p-84f, 0.0f, 0x1.aacd22p-13f, 0x1.0bb872p-83f, 0x1.06b65cp-10f,
     0x1.8f7204p-110f, 0.0f, 0.0f, 0x1.45db8cp-29f, 0x1.7abde8p-2f, 0x1.04a9f2p-92f,
     0x1.0b9db6p-90f, 0x1.bdf09ap-24f, 0.0f, 0x1.558acap-61f, 0x1.7ba1bp-71f, 0.0f,
     0x1.326e7ep-96f, 0.0f, 0.0f, 0x1.c536dcp-58f, 0x1.0aa288p-22f, 0x1.a55b04p-2f,
     0.0f, 0.0f, 0x1.748c3ep-80f, 0.0f, 0x1.63800ep-99f, 0x1.b171f6p-104f,
     0x1.62477cp-110f, 0x1.943cf4p-43f, 0x1.4d70a8p-42f, 0x1.2eac6ap-84f, 0.0f, 0.0f,
     0x1.a12258p-8f, 0x1.58abcep-62f, 0x1.8943fcp-102f, 0.0f, 0x1.83a56ep-126f,
     0x1.40bd08p-31f, 0.0f, 0.0f, 0x1.ac422ap-64f, 0.0f, 0x1.061eb4p-62f,
     0x1.c18872p-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.458e7cp-38f, 0.0f, 0x1.8fd97p-54f,
     0x1.483738p-19f, 0.0f, 0.0f, 0x1.ac3ad2p-66f, 0x1.99c0dp-26f, 0x1.c6a0ccp-66f,
     0.0f, 0x1.673d2ap-7f, 0x1.06b22cp-58f, 0.0f, 0x1.fb8d48p-2f, 0x1.2d0e56p-105f,
     0.0f, 0x1.c49e5p-123f, 0x1.6266a4p-32f, 0.0f, 0x1.33a78ep-7f, 0.0f, 0.0f,
     0x1.b3f932p-43f, 0x1.b80212p-84f, 0.0f, 0x1.c2e0cp-61f, 0.0f, 0.0f, 0x1p0f,
     0x1.bfb72cp-67f, 0x1.db5964p-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.601de4p-123f,
     0x1.e94a6ep-62f, 0x1.9ce24ep-25f, 0.0f, 0.0f, 0x1.45cbfep-44f, 0x1.b5c9a8p-117f,
     0.0f, 0x1.bacd84p-53f, 0x1.5cd9ccp-90f, 0.0f, 0.0f, 0.0f, 0x1.25378p-26f,
     0x1.66c162p-54f, 0.0f, 0.0f, 0x1.041244p-2f, 0x1.09a1fcp-17f, 0.0f,
     0x1.cb204p-66f, 0x1.361784p-19f, 0.0f, 0x1.4899f6p-15f, 0.0f, 0.0f,
     0x1.21790ap-6f, 0x1.168e78p-100f, 0x1.f36c86p-74f, 0x1.f98af2p-96f, 0.0f,
     0x1.a71094p-100f, 0x1.d541cp-83f, 0x1.696416p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.498814p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.980a3cp-106f, 0.0f, 0x1.cca538p-77f, 0.0f, 0.0f, 0x1.7db2bp-68f,
     0x1.db996p-123f, 0x1.965a4p-15f, 0.0f, 0x1.c399e8p-111f, 0.0f, 0x1.11e63ap-91f,
     0x1.87c672p-57f, 0x1.56ce14p-11f, 0x1.da57d6p-25f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_float4_t global_bench_acc;
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
        ml_float4_t local_acc;
        int32_t i;
        ml_float4_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1004));){
            ml_float4_t tmp0;
            ml_float4_t tmp1;
            ml_float4_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_finz_log10f4_u10kvx(tmp0);
            memcpy(((ml_float4_t*)(external_bench_wrapper_output_table+ i)), &(tmp1), 16);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(4);
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
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_finz_log10f4_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_log10f4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
