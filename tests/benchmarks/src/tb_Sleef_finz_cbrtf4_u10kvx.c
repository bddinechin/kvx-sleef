/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_cbrtf4_u10kvx.c --function \
 *     Sleef_finz_cbrtf4_u10kvx --headers sleef.h,ml_support_lib.h \
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
     0x1.deda26p-86f, 0.0f, 0.0f, 0.0f, 0x1.acf1f6p-83f, 0.0f, 0.0f, 0x1.69598p-63f,
     0.0f, 0.0f, 0x1.887b34p-121f, 0.0f, 0.0f, 0.0f, 0x1.303216p-92f, 0x1.4470bp-105f,
     0x1.3f2502p-7f, 0.0f, 0x1.7874e4p-72f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bbc602p-44f, 0.0f, 0.0f, 0.0f, 0x1.313eaap-97f, 0x1.65beb4p-116f,
     0x1.2068e2p-41f, 0.0f, 0x1.d5a35ep-36f, 0x1.8a57b8p-87f, 0x1.244f86p-21f,
     0x1.8c76d6p-10f, 0.0f, 0x1.d6b1dep-96f, 0x1.e74fa2p-112f, 0x1.57284ep-96f,
     0x1.be4d26p-39f, 0x1.5af18p-50f, 0x1.a34576p-97f, 0x1.940b1ap-1f, 0x1p0f, 0.0f,
     0.0f, 0x1.49da4ap-107f, 0x1.8d1d46p-31f, 0x1.0a848ap-62f, 0.0f, 0x1.66e47cp-92f,
     0x1.0c435ep-14f, 0.0f, 0x1.b98ad8p-41f, 0x1.efc39p-106f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.8a8b88p-17f, 0.0f, 0x1.22ce46p-103f, 0x1.b2a254p-116f,
     0x1.f4000ep-115f, 0x1.91eab4p-28f, 0x1.83653ep-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.df958ap-86f, 0.0f, 0x1.b4fdfap-75f, 0x1.5a5976p-2f,
     0x1.e83d6ep-85f, 0x1.d6bbap-4f, 0x1.14be0ep-12f, 0.0f, 0x1.4aa63ap-120f, 0.0f,
     0.0f, 0x1.b3c8ecp-94f, 0.0f, 0.0f, 0.0f, 0x1.eb1f74p-89f, 0x1.921b0ap-1f,
     0x1.b4c148p-104f, 0.0f, 0.0f, 0x1.8e7fe8p-65f, 0.0f, 0x1.15849p-5f, 0.0f,
     0x1.8b740ep-39f, 0.0f, 0x1.c1441ep-98f, 0.0f, 0.0f, 0.0f, 0x1.33dc74p-54f, 0.0f,
     0x1.65c4e8p-32f, 0.0f, 0x1.c90f4ep-122f, 0x1.4e9a36p-54f, 0x1p0f, 0x1.cd2ffp-85f,
     0x1.bc5584p-73f, 0x1.38eb3ep-90f, 0x1.f50224p-66f, 0x1.8866eep-47f,
     0x1.bf106p-62f, 0.0f, 0x1.d2fba4p-76f, 0.0f, 0.0f, 0x1.d5eaaap-99f, 0.0f,
     0x1.77fc84p-91f, 0x1.378c0cp-23f, 0.0f, 0x1.0b6e16p-66f, 0x1.580bcap-52f, 0.0f,
     0x1.b62fb4p-109f, 0.0f, 0x1.aa629p-89f, 0.0f, 0.0f, 0.0f, 0x1.2ddeb6p-100f, 0.0f,
     0x1.309b68p-45f, 0.0f, 0.0f, 0x1.ee5b7ap-28f, 0.0f, 0.0f, 0.0f, 0x1.4d3d36p-123f,
     0x1p0f, 0.0f, 0.0f, 0x1.838778p-48f, 0x1.f755ecp-101f, 0x1.04fceep-105f,
     0x1.8b97bcp-70f, 0.0f, 0x1.9c3e36p-41f, 0.0f, 0x1.4a5108p-28f, 0.0f, 0x1p0f,
     0x1.cef494p-3f, 0x1.1b098ap-125f, 0.0f, 0.0f, 0.0f, 0x1.1988e8p-113f,
     0x1.114d84p-126f, 0x1.63847p-69f, 0x1.ef25a6p-4f, 0.0f, 0x1.d2c636p-9f,
     0x1.06715ep-103f, 0x1.f54a5ep-58f, 0x1.acf62ap-101f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.7679e8p-12f, 0x1.fff56p-62f, 0x1.c709a8p-123f, 0x1.c88e38p-81f, 0.0f,
     0x1.36feecp-49f, 0.0f, 0.0f, 0x1.1e1deap-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fc2076p-82f, 0.0f, 0x1.605cbp-97f, 0.0f, 0x1.17bdp-27f, 0x1.6d5c5ap-90f,
     0.0f, 0x1.57121p-94f, 0.0f, 0x1.1ac328p-4f, 0x1.d32b72p-57f, 0x1.820cd2p-73f,
     0.0f, 0x1.70291p-79f, 0x1.4c7b12p-75f, 0x1.e37118p-18f, 0.0f, 0x1.a3dbe2p-18f,
     0.0f, 0x1.91408p-33f, 0.0f, 0x1.af9f8cp-17f, 0.0f, 0.0f, 0x1.20f2eap-94f,
     0x1.ba734p-26f, 0.0f, 0x1.f8709p-95f, 0x1.e92fb6p-23f, 0.0f, 0.0f, 0.0f,
     0x1.922ad4p-126f, 0x1.233484p-25f, 0.0f, 0.0f, 0x1.fba528p-99f, 0.0f,
     0x1.aa80ecp-16f, 0x1.0616p-30f, 0.0f, 0x1.33a876p-121f, 0.0f, 0x1.6e22bcp-12f,
     0.0f, 0x1.926ac6p-125f, 0.0f, 0.0f, 0x1.5a0664p-99f, 0x1.bfc41cp-10f,
     0x1.63a344p-78f, 0.0f, 0.0f, 0x1.596e16p-62f, 0x1.a6f6a4p-114f, 0x1.76f1ep-51f,
     0x1.e40d5cp-20f, 0x1.bb5548p-12f, 0x1.224086p-55f, 0x1.2b58e2p-43f,
     0x1.a3bbfcp-63f, 0.0f, 0x1.35e7cp-7f, 0.0f, 0.0f, 0.0f, 0x1.828828p-13f, 0.0f,
     0x1.c6fd2ap-47f, 0x1.ab87fap-123f, 0.0f, 0.0f, 0.0f, 0x1.0797a6p-44f,
     0x1.ad7576p-28f, 0x1.5bc3dap-60f, 0.0f, 0x1.48d414p-103f, 0x1.9c377ep-28f,
     0x1.7acf4cp-59f, 0x1.e280fp-105f, 0.0f, 0.0f, 0x1.d3a27p-34f, 0x1.7fc872p-32f,
     0.0f, 0x1.5c8de2p-116f, 0x1.c44212p-71f, 0x1.8084a4p-114f, 0.0f,
     0x1.ad33a2p-103f, 0.0f, 0x1.76eac6p-12f, 0x1.71919cp-121f, 0x1.63f632p-101f,
     0x1.60e49p-118f, 0x1.47917ep-92f, 0x1.bb4172p-118f, 0x1.29acd6p-125f,
     0x1.5cacb2p-29f, 0x1.928da2p-16f, 0x1.8f98eap-50f, 0.0f, 0x1.9f3338p-34f,
     0x1.1f9996p-26f, 0x1.c248eap-111f, 0x1.81fa8p-121f, 0x1.391012p-67f,
     0x1.265decp-11f, 0x1.d7d48ep-114f, 0x1.55b0a8p-28f, 0.0f, 0.0f, 0.0f,
     0x1.0bb1cp-26f, 0.0f, 0x1.196faap-70f, 0x1.02d3eap-115f, 0.0f, 0x1.90ab26p-73f,
     0x1.fe754cp-82f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.6b886p-114f, 0.0f,
     0x1.107124p-81f, 0.0f, 0x1.d3a752p-22f, 0x1.19c79ep-42f, 0.0f, 0x1.9ab436p-72f,
     0x1.ec4caap-126f, 0x1.8920dep-95f, 0.0f, 0x1.e27244p-28f, 0.0f, 0x1.8aaa5ep-46f,
     0x1.d6d79cp-12f, 0x1.ba757ep-23f, 0.0f, 0.0f, 0x1.c96ec8p-110f, 0.0f,
     0x1.81a458p-108f, 0.0f, 0x1.3e2812p-108f, 0.0f, 0x1.6b24ccp-55f, 0x1.f5821cp-34f,
     0.0f, 0.0f, 0x1.49775ep-56f, 0x1.7aa786p-109f, 0x1.13dbeap-90f, 0x1.a4c75cp-121f,
     0x1.3f4bb4p-25f, 0.0f, 0.0f, 0x1.413a8p-7f, 0x1.46fa5ap-65f, 0x1.27e8f4p-55f,
     0.0f, 0x1.ae0608p-37f, 0x1.c442a4p-52f, 0x1.c8f1dp-86f, 0x1.f06c48p-26f, 0.0f,
     0.0f, 0.0f, 0x1.11c4ep-73f, 0x1.d95b4ap-70f, 0.0f, 0.0f, 0x1.8f3ff2p-25f,
     0x1.0de6cep-101f, 0x1.f055p-78f, 0.0f, 0.0f, 0.0f, 0x1.791edcp-61f, 0.0f, 0.0f,
     0x1.704d26p-3f, 0.0f, 0.0f, 0x1.acf494p-9f, 0x1.3844bep-31f, 0.0f,
     0x1.329d76p-52f, 0x1.25d5dap-123f, 0x1.52da8ep-57f, 0x1.adaa28p-87f,
     0x1.c881ep-106f, 0.0f, 0x1.99706p-102f, 0.0f, 0x1.d7b64ap-119f, 0.0f,
     0x1.827b46p-122f, 0.0f, 0x1.0e3aaep-126f, 0x1.6aa1ep-50f, 0.0f, 0.0f,
     0x1.60e82cp-4f, 0.0f, 0x1.e73896p-56f, 0x1.5ab07p-32f, 0.0f, 0x1.07e9bep-114f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b94fbcp-57f, 0.0f, 0.0f, 0x1.ed7804p-116f, 0.0f,
     0x1.4a6bbcp-18f, 0.0f, 0x1.6dbf7ap-43f, 0x1.1624c6p-7f, 0x1.e1bd28p-94f,
     0x1.4676d4p-46f, 0.0f, 0x1.0ec2dep-99f, 0x1.e27d3p-78f, 0x1.e958f6p-39f,
     0x1.89fe36p-84f, 0x1.3aa874p-99f, 0x1.dacf9p-19f, 0x1.9d0f42p-75f, 0.0f, 0.0f,
     0x1.0c8f2cp-52f, 0x1.438d28p-64f, 0x1.d83328p-89f, 0x1.2d06cp-87f,
     0x1.4e22fp-25f, 0x1.9fcc24p-45f, 0.0f, 0x1.a38148p-74f, 0x1.dad234p-93f, 0.0f,
     0x1.12e48cp-52f, 0x1.1142a6p-108f, 0x1.57e4d6p-20f, 0x1.389e26p-16f,
     0x1.10a228p-89f, 0.0f, 0x1.9856bp-20f, 0x1.cf5378p-61f, 0.0f, 0x1.a5a316p-51f,
     0x1.c7178ep-108f, 0.0f, 0x1.f5c436p-45f, 0x1.060f9ap-52f, 0.0f, 0x1.c60f04p-22f,
     0.0f, 0x1.7ae8ep-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d94e8p-23f, 0x1.1d7994p-67f,
     0.0f, 0x1.436c2cp-26f, 0x1.903872p-45f, 0x1.0d7fcap-32f, 0x1.2f18ep-116f, 0.0f,
     0.0f, 0x1.f44322p-26f, 0x1.2d361ap-118f, 0.0f, 0x1.e03496p-122f, 0.0f, 0.0f,
     0.0f, 0x1.a0b4a6p-114f, 0x1.faad8ep-78f, 0.0f, 0x1.e70306p-22f, 0.0f,
     0x1.5e716ep-38f, 0x1.7b8738p-40f, 0x1.bcdef6p-17f, 0.0f, 0x1.ce8dbap-112f, 0.0f,
     0.0f, 0x1.42b34ap-25f, 0x1.18bbbcp-26f, 0x1.12e49ep-25f, 0x1.34d526p-78f,
     0x1.b9a756p-7f, 0.0f, 0.0f, 0x1.d1244cp-125f, 0x1.006676p-30f, 0x1.3c7dc6p-105f,
     0.0f, 0x1.8afb2p-3f, 0x1.7e9e16p-100f, 0x1.ae2b3p-70f, 0x1.816abep-92f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a19e5cp-75f, 0x1.a45c02p-103f, 0x1.d51ebcp-3f,
     0x1.0805aap-92f, 0.0f, 0x1.00e08ep-56f, 0.0f, 0.0f, 0x1.89ba94p-122f,
     0x1.d31fdep-54f, 0x1.e1543p-38f, 0x1.6d7cbep-14f, 0.0f, 0.0f, 0x1.7837dep-35f,
     0x1.3d934ep-42f, 0.0f, 0.0f, 0x1.138b48p-67f, 0x1.34c2ep-9f, 0x1.4564dap-95f,
     0.0f, 0.0f, 0x1.94f844p-63f, 0.0f, 0.0f, 0.0f, 0x1.2c0026p-11f, 0x1.8cf524p-79f,
     0.0f, 0x1.71b71p-39f, 0x1.4da42ap-21f, 0x1.2dc7fep-21f, 0.0f, 0x1.21a16ap-22f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.cfaea4p-89f, 0.0f, 0x1.069de6p-62f, 0.0f,
     0x1.2b42b8p-95f, 0.0f, 0x1.84972cp-37f, 0x1.f9427cp-46f, 0.0f, 0x1.ff626ep-5f,
     0.0f, 0x1.fad4c4p-105f, 0.0f, 0.0f, 0.0f, 0x1.7d33b8p-110f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a22f74p-116f, 0.0f, 0.0f, 0x1.812538p-97f, 0x1.ab6f78p-70f,
     0x1.19598cp-74f, 0x1.17b538p-123f, 0x1.1f65dcp-42f, 0x1.82481ap-108f, 0.0f, 0.0f,
     0x1.ae4df4p-21f, 0.0f, 0x1.dc7d06p-91f, 0.0f, 0.0f, 0x1.ea3b96p-47f,
     0x1.22d28p-50f, 0.0f, 0.0f, 0x1.35bfbcp-25f, 0.0f, 0x1.94d696p-13f,
     0x1.20455cp-85f, 0x1.0bb9e8p-99f, 0x1.84ae0cp-76f, 0x1.c66bd2p-117f,
     0x1.cff83p-6f, 0.0f, 0x1.16f9a6p-2f, 0.0f, 0.0f, 0.0f, 0x1.e08cb4p-79f, 0.0f,
     0.0f, 0x1.352356p-35f, 0.0f, 0.0f, 0x1.7a7c1cp-10f, 0.0f, 0x1.3dae2p-102f,
     0x1.e1e106p-99f, 0.0f, 0x1.976f2p-103f, 0.0f, 0x1.6760cp-121f, 0x1.80363cp-63f,
     0.0f, 0x1.118b48p-40f, 0.0f, 0x1.502f4ap-92f, 0x1.e8dca4p-48f, 0.0f,
     0x1.6b87bap-117f, 0.0f, 0x1.802f9p-18f, 0x1.a592dep-118f, 0x1.be4318p-108f, 0.0f,
     0x1.b22f14p-40f, 0.0f, 0.0f, 0.0f, 0x1.d78992p-2f, 0x1.398c1cp-28f, 0.0f,
     0x1.54786p-40f, 0.0f, 0.0f, 0x1.b9b012p-27f, 0.0f, 0x1.6d92a2p-78f, 0.0f,
     0x1.d18ac8p-53f, 0.0f, 0.0f, 0x1.6a407ap-61f, 0.0f, 0.0f, 0x1.a7de2ap-43f,
     0x1.530bf8p-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e2a50ap-91f, 0.0f,
     0x1.69d30cp-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7c5562p-82f, 0x1.4f32cp-81f,
     0x1.7ed44ep-20f, 0x1.05172ap-87f, 0x1.33a3fap-37f, 0x1.a60ed6p-56f,
     0x1.f82b52p-24f, 0.0f, 0x1.a5a1f4p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9cf1bap-34f, 0.0f, 0.0f, 0x1.2dd1e8p-114f, 0.0f, 0x1.313dc6p-20f, 0.0f, 0.0f,
     0.0f, 0x1.91c08cp-96f, 0x1.576418p-101f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.72230cp-104f, 0.0f, 0.0f, 0x1.31825ap-10f, 0.0f, 0x1.76f22cp-124f, 0.0f,
     0x1.c7e53cp-118f, 0x1.c8736cp-37f, 0x1.dfc1ep-68f, 0.0f, 0x1.0e91dp-13f, 0.0f,
     0.0f, 0x1.cb9b2ep-53f, 0x1.23a3c6p-27f, 0.0f, 0.0f, 0.0f, 0x1.c2e842p-17f,
     0x1.170b7ap-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.752d0cp-86f, 0.0f, 0.0f,
     0x1.e123eep-106f, 0.0f, 0x1.f4e40cp-115f, 0.0f, 0x1.72b5bap-43f, 0x1.eb3ecp-115f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.20a34cp-21f, 0.0f, 0.0f, 0x1.c8f776p-4f,
     0x1.1ac586p-37f, 0x1.a10b1cp-84f, 0.0f, 0x1.16754ap-34f, 0.0f, 0.0f,
     0x1.ff2d16p-101f, 0x1.92acdcp-94f, 0x1.e85fa4p-11f, 0x1.042486p-107f, 0.0f, 0.0f,
     0.0f, 0x1.353b26p-46f, 0x1.784112p-33f, 0x1.daf758p-21f, 0x1.3a3332p-32f,
     0x1.c68dap-43f, 0x1.ee4974p-105f, 0x1.9b3afap-8f, 0x1.d7192cp-66f,
     0x1.4439fcp-83f, 0.0f, 0x1.1d349cp-65f, 0.0f, 0.0f, 0x1.6aa7d2p-53f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.42ffccp-78f, 0.0f, 0x1.50658p-53f, 0x1.2f09cap-105f,
     0x1.a16d3cp-41f, 0x1.0492p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.178c1cp-52f,
     0x1.06e33ap-72f, 0.0f, 0.0f, 0.0f, 0x1.eb3d42p-123f, 0x1.e56d58p-86f, 0.0f, 0.0f,
     0x1.33a90ep-74f, 0.0f, 0.0f, 0x1.eb5ad2p-14f, 0x1.828234p-67f, 0.0f, 0.0f, 0.0f,
     0x1.7e3ec2p-61f, 0.0f, 0x1.8779cep-110f, 0x1.33aad4p-66f, 0x1.9e2b3p-124f,
     0x1.09a7a6p-92f, 0.0f, 0.0f, 0x1.9201ap-102f, 0x1.2c3274p-21f, 0x1.b8df4ap-120f,
     0x1.19882ep-119f, 0.0f, 0x1.db46ap-117f, 0x1.22b652p-43f, 0x1.f104bap-104f, 0.0f,
     0.0f, 0x1.246266p-50f, 0x1.7d9602p-32f, 0.0f, 0x1.4fd75ep-54f, 0x1.19364p-102f,
     0.0f, 0.0f, 0.0f, 0x1.d2b9fap-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ef2f8cp-20f,
     0x1.6a08ecp-75f, 0.0f, 0x1.cacddp-86f, 0x1.d444a6p-55f, 0.0f, 0.0f, 0.0f,
     0x1.d77b6cp-89f, 0x1.4673dcp-32f, 0.0f, 0.0f, 0x1.a4ee8ap-112f, 0.0f, 0.0f, 0.0f,
     0x1.83e75cp-90f, 0.0f, 0x1.58f8e4p-11f, 0.0f, 0x1.b7fe8ap-57f, 0.0f, 0.0f,
     0x1.c58466p-94f, 0.0f, 0.0f, 0x1.0e8c7ap-121f, 0.0f, 0.0f, 0x1.0ecc5ep-39f, 0.0f,
     0.0f, 0x1.ba1e7cp-49f, 0.0f, 0.0f, 0x1.c52d82p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c8c2dcp-65f, 0x1.2e5efcp-15f, 0x1.dd0688p-23f, 0x1.6a9f3ep-37f, 0.0f,
     0x1.64274cp-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.946f62p-59f,
     0x1.fe950cp-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.867e88p-105f, 0.0f, 0x1.c00168p-9f,
     0x1p0f, 0x1.0f2ceep-79f, 0.0f, 0x1.211dp-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fd741ap-33f, 0.0f, 0.0f, 0.0f, 0x1.71b96p-91f, 0x1.a1e76p-62f,
     0x1.1d8774p-120f, 0x1.b72ad4p-122f, 0x1.8cdad8p-37f, 0.0f, 0x1.83452p-10f, 0.0f,
     0x1.a0f8dep-27f, 0x1.69e512p-40f, 0x1.92508cp-69f, 0x1.510cbep-48f, 0.0f, 0.0f,
     0x1.6a3252p-115f, 0.0f, 0x1.75887ap-20f, 0x1.64e43cp-81f, 0.0f, 0x1.62db5cp-41f,
     0.0f, 0.0f, 0.0f, 0x1.205bf2p-67f, 0x1.c5163p-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1df768p-49f, 0.0f, 0x1.eb2ba2p-47f, 0x1.1cf448p-103f, 0x1.9c2164p-110f, 0.0f,
     0.0f, 0x1.f73b72p-97f, 0x1.27579cp-91f, 0x1.178202p-35f, 0x1.1d6a92p-123f, 0.0f,
     0x1.2a18d6p-28f, 0.0f, 0x1.0ff11ep-19f, 0x1.829b0ap-67f, 0.0f, 0x1.54c588p-126f,
     0x1.a652c2p-116f, 0x1.bdd394p-40f, 0x1.6fbc1cp-109f, 0.0f, 0.0f, 0.0f,
     0x1.37b28ap-93f, 0x1.562e0cp-20f, 0.0f, 0.0f, 0x1.3240f8p-84f, 0x1.58388ap-94f,
     0x1.4deabp-49f, 0x1.1dd2c2p-66f, 0x1.5cdcf2p-104f, 0x1.d56712p-25f, 0.0f,
     0x1.8cb172p-106f, 0x1.40f176p-82f, 0.0f, 0.0f, 0x1.b4a9cp-12f, 0.0f, 0.0f,
     0x1.1d6344p-17f, 0x1.eff1d8p-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.347882p-79f,
     0x1.2e7d4p-123f, 0.0f, 0x1.172a0cp-84f, 0.0f, 0x1.64b9a6p-3f, 0.0f, 0.0f,
     0x1.30c8bp-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e79bc4p-105f, 0x1.84c918p-27f,
     0x1.0909eap-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f
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
            tmp1 = Sleef_finz_cbrtf4_u10kvx(tmp0);
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
    printf("Sleef_finz_cbrtf4_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_cbrtf4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
