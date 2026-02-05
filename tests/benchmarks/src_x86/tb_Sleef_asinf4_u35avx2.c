/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_asinf4_u35avx2128.c --function Sleef_asinf4_u35avx2128 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 4 --function-input-vector-size 4 --bench \
 *     --no-embedded-bin --target x86_avx2128
 * 
**/
#include <stdint.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float4_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float4_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0.0f, 0x1.668c8ep-33f, 0x1.46aed4p-105f, 0.0f, 0.0f, 0.0f, 0x1.0f8b84p-37f,
     0.0f, 0x1.3dcbep-105f, 0x1.fe9ad6p-22f, 0x1.7241bep-23f, 0.0f, 0x1.14847p-27f,
     0.0f, 0.0f, 0x1.9964ep-25f, 0x1.ac3ec6p-120f, 0.0f, 0x1.492056p-55f,
     0x1.3f8488p-9f, 0.0f, 0x1.3e586p-23f, 0x1.874e7cp-96f, 0x1.6a803ep-47f,
     0x1.e9a5e2p-110f, 0x1.6034e4p-116f, 0x1.b346f4p-126f, 0x1.b90f4p-12f, 0.0f, 0.0f,
     0x1.667fa6p-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.546462p-85f, 0.0f, 0.0f,
     0x1.56c22p-92f, 0.0f, 0.0f, 0x1.d261ecp-100f, 0x1.c2c0a6p-91f, 0x1.31d2d4p-38f,
     0.0f, 0x1.0d09a4p-1f, 0x1.f53f18p-90f, 0.0f, 0x1.2507bep-55f, 0.0f, 0.0f,
     0x1.6f480ap-96f, 0x1.f97cd2p-75f, 0x1.2d41c8p-29f, 0x1.2a498ap-65f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7ad9dap-15f, 0x1.3cced8p-6f, 0x1.188c68p-119f, 0.0f,
     0x1.dc9cecp-126f, 0x1.c2656p-16f, 0.0f, 0.0f, 0x1.bf8d34p-120f, 0x1.05c4bcp-28f,
     0x1.9cb3b6p-121f, 0.0f, 0.0f, 0x1.f3a586p-71f, 0x1.9fedc6p-65f, 0x1.5fdae2p-32f,
     0.0f, 0.0f, 0.0f, 0x1.baef28p-31f, 0x1.81dc28p-61f, 0.0f, 0x1.632dfcp-85f, 0.0f,
     0x1.bf7ecap-84f, 0.0f, 0.0f, 0x1.d22276p-50f, 0.0f, 0x1.a7555p-15f, 0.0f, 0.0f,
     0x1.8f5de2p-85f, 0.0f, 0x1.c7135cp-42f, 0x1.8d83bp-16f, 0x1.ec8cf6p-35f,
     0x1.84c306p-39f, 0.0f, 0.0f, 0x1.b7339ep-54f, 0x1.292ab8p-111f, 0.0f, 0.0f, 0.0f,
     0x1.faa60ap-115f, 0x1.bf3b78p-65f, 0x1.fec104p-67f, 0x1.4bf95ep-11f,
     0x1.10e5cap-67f, 0.0f, 0.0f, 0x1.33e416p-23f, 0x1.e99bc6p-124f, 0x1.bb829ap-5f,
     0x1.ad6cb6p-20f, 0x1.bc5676p-30f, 0.0f, 0x1.1203a2p-97f, 0x1.d6a5c4p-88f, 0.0f,
     0x1.f7b152p-64f, 0.0f, 0x1.e272cap-79f, 0x1.43d04ep-72f, 0x1.23885p-35f, 0.0f,
     0.0f, 0x1.73137cp-6f, 0.0f, 0x1.710ae4p-32f, 0x1.9925ep-102f, 0.0f,
     0x1.a24b9ep-91f, 0x1.4066d4p-114f, 0.0f, 0x1.16f7c4p-118f, 0.0f, 0x1.dc9756p-10f,
     0.0f, 0x1.6d2d0ap-104f, 0x1.94c0cap-70f, 0x1.06361ep-106f, 0.0f,
     0x1.9f7e06p-108f, 0x1.94ece6p-71f, 0x1.9f812p-59f, 0.0f, 0x1.9e20fp-111f, 0.0f,
     0.0f, 0.0f, 0x1.bab818p-38f, 0x1.bde76ep-9f, 0.0f, 0x1.7d3364p-54f,
     0x1.5ff09ep-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a4b734p-63f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.5e7254p-124f, 0.0f, 0.0f, 0x1.f8bcfp-48f, 0.0f, 0x1.f43e76p-102f, 0.0f,
     0x1.26a76p-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.672d72p-77f, 0x1.539f74p-115f,
     0.0f, 0x1.c0b726p-121f, 0x1.569bb6p-122f, 0x1.6d2cf4p-120f, 0x1.528d7cp-116f,
     0x1.6ec3fcp-93f, 0x1.45d606p-121f, 0x1.008ea6p-54f, 0.0f, 0x1.0c7a1ap-112f, 0.0f,
     0.0f, 0x1.5b2842p-44f, 0.0f, 0x1.ffd572p-85f, 0x1.371aacp-30f, 0x1.274d3ep-99f,
     0.0f, 0.0f, 0x1.130dbcp-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.24fea8p-86f,
     0x1.a80b1ap-8f, 0.0f, 0.0f, 0x1.07de9ap-37f, 0x1.57770cp-57f, 0x1.feaec8p-30f,
     0x1.c29c94p-52f, 0x1.1b738ep-91f, 0.0f, 0x1.9c21fcp-54f, 0.0f, 0x1.d49fep-64f,
     0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.13a378p-24f, 0x1.859cp-36f, 0x1.c9fd86p-92f, 0.0f,
     0x1.e54088p-15f, 0.0f, 0.0f, 0x1.54479cp-96f, 0x1.346decp-122f, 0x1.a1b1aap-77f,
     0.0f, 0x1.4568eep-38f, 0.0f, 0x1.36e702p-11f, 0.0f, 0.0f, 0.0f, 0x1.48e11cp-125f,
     0.0f, 0.0f, 0x1.a1c978p-38f, 0x1.534b76p-39f, 0x1.05e564p-37f, 0.0f, 0.0f, 0.0f,
     0x1.79d68cp-98f, 0.0f, 0x1.1310acp-97f, 0x1.f080c8p-57f, 0x1.e0ff4cp-110f, 0.0f,
     0x1.0438e4p-86f, 0.0f, 0x1.d4a5aep-54f, 0x1.a8ffbp-116f, 0x1.74637p-67f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.7c04fap-1f, 0x1.6b6c42p-20f, 0x1.e84804p-95f, 0.0f, 0.0f,
     0.0f, 0x1.d9135ep-75f, 0.0f, 0x1.e848ccp-103f, 0x1.bd7edcp-8f, 0.0f, 0.0f,
     0x1.35eba4p-51f, 0x1.41255ap-100f, 0x1.0708d4p-107f, 0.0f, 0x1.098e0ap-95f, 0.0f,
     0x1.bac628p-11f, 0.0f, 0x1.7d1458p-102f, 0x1.83ed6ap-86f, 0.0f, 0.0f,
     0x1.3a15a4p-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cbb3e2p-71f,
     0x1.0d811cp-58f, 0x1.e01162p-66f, 0.0f, 0.0f, 0x1.9569e6p-28f, 0x1.dfc60cp-26f,
     0.0f, 0.0f, 0.0f, 0x1.c4b83ap-33f, 0x1.fbeacap-9f, 0x1.c409fp-104f,
     0x1.60aa5cp-92f, 0x1.b140dep-115f, 0x1.393b6cp-69f, 0.0f, 0x1.a54e3ap-71f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.2d7adp-50f, 0x1.39033p-80f, 0x1.529904p-31f, 0.0f, 0.0f,
     0x1.f6ffa2p-95f, 0.0f, 0.0f, 0x1.61d4ecp-60f, 0.0f, 0x1.d4f36ep-78f, 0.0f, 0.0f,
     0x1.92557p-40f, 0.0f, 0x1.7785aep-53f, 0.0f, 0.0f, 0x1.fa489p-23f,
     0x1.749926p-50f, 0x1.1a1dfcp-13f, 0x1.bb39dep-31f, 0.0f, 0.0f, 0x1.df21e8p-106f,
     0x1.d6f85cp-97f, 0.0f, 0x1.b0c122p-53f, 0x1.09e0e8p-115f, 0.0f, 0x1.4aacd2p-58f,
     0x1.2af5eap-104f, 0x1.eb647p-118f, 0.0f, 0.0f, 0.0f, 0x1.01807ep-27f,
     0x1.1a992cp-28f, 0x1.7b4fe2p-90f, 0x1.fb5676p-66f, 0.0f, 0x1.6463d2p-38f,
     0x1.e030c2p-93f, 0x1.164dep-17f, 0x1.c2d68p-38f, 0.0f, 0x1.c5b9cp-10f, 0.0f,
     0x1.7c3a6p-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ae4c3ep-32f, 0x1.11b138p-101f, 0.0f,
     0x1.c7449cp-41f, 0.0f, 0x1.47351ap-104f, 0x1.746948p-43f, 0x1.213dap-83f, 0.0f,
     0x1.63338p-120f, 0x1.4d0522p-87f, 0.0f, 0.0f, 0x1.7d9c2p-121f, 0.0f,
     0x1.246626p-12f, 0.0f, 0x1.5fb5a8p-14f, 0x1.2838b4p-43f, 0.0f, 0x1.7c8adp-23f,
     0.0f, 0x1.71d2ap-5f, 0x1.7df98p-65f, 0.0f, 0.0f, 0.0f, 0x1.1966bap-53f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dbd81p-1f, 0.0f,
     0x1.35f6e6p-76f, 0.0f, 0x1.92e2c6p-59f, 0x1.472056p-126f, 0x1.0a4f74p-37f, 0.0f,
     0.0f, 0x1.f5d2d2p-15f, 0x1.8efa86p-43f, 0.0f, 0.0f, 0x1.953ee8p-123f, 0.0f,
     0x1.db5fe6p-27f, 0.0f, 0.0f, 0x1.095342p-48f, 0.0f, 0.0f, 0x1.79c14ep-93f,
     0x1.128f2ep-69f, 0x1.3707e2p-15f, 0.0f, 0x1.301c9ep-1f, 0.0f, 0.0f,
     0x1.e1783ap-98f, 0.0f, 0x1.c0d3c2p-14f, 0.0f, 0x1.dc094p-25f, 0.0f, 0.0f,
     0x1.4bc49cp-83f, 0.0f, 0.0f, 0.0f, 0x1.c31e56p-60f, 0x1.028476p-78f, 0.0f,
     0x1.373acep-106f, 0x1.12e4b6p-10f, 0.0f, 0x1.9d77f4p-102f, 0.0f, 0x1.4b8d36p-36f,
     0.0f, 0x1.e06c1ap-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9a0bd2p-36f, 0x1.c5446cp-100f,
     0x1.828bc6p-33f, 0.0f, 0.0f, 0x1.96c2c6p-78f, 0x1.6cb6c6p-17f, 0.0f,
     0x1.b7e008p-87f, 0x1.b9ee26p-103f, 0x1.46c946p-98f, 0.0f, 0x1.64fc6ap-64f, 0.0f,
     0x1.520a3ep-15f, 0.0f, 0x1.3653cp-118f, 0x1.6a539cp-1f, 0x1.f12dc4p-11f,
     0x1.c032dep-125f, 0.0f, 0x1.a01e1p-95f, 0.0f, 0x1.dc441ap-126f, 0.0f, 0.0f,
     0x1.01a766p-64f, 0x1.12151ap-100f, 0x1.251c4p-9f, 0.0f, 0x1.9b8478p-91f, 0.0f,
     0.0f, 0x1.48fb22p-22f, 0.0f, 0.0f, 0x1.6cd788p-119f, 0x1.12b3ecp-79f,
     0x1.359042p-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b0af5ap-9f, 0x1.36572ep-76f, 0.0f,
     0x1.4be3ccp-63f, 0x1.f0282cp-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.19fac8p-111f, 0.0f,
     0x1.0187bap-91f, 0x1.840ab6p-22f, 0.0f, 0x1.b72a6cp-78f, 0.0f, 0x1.4957a8p-94f,
     0.0f, 0.0f, 0x1.603f0ap-48f, 0x1.b785fep-72f, 0x1.c6d52cp-62f, 0x1.3d892ap-16f,
     0.0f, 0x1.e066f8p-99f, 0x1.61a2d4p-22f, 0x1.3a28bep-124f, 0x1.fde058p-114f,
     0x1.1d0582p-66f, 0.0f, 0.0f, 0x1.aed56ep-75f, 0.0f, 0x1.c14e96p-87f,
     0x1.7caae2p-87f, 0x1.8d4ed2p-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.84beeep-33f, 0x1.8245b4p-9f, 0x1.4550aep-23f,
     0x1.8cfd5ap-31f, 0.0f, 0.0f, 0x1.7bcbp-63f, 0.0f, 0.0f, 0x1.acc838p-73f, 0.0f,
     0.0f, 0x1.fe7bd8p-27f, 0.0f, 0x1.b1a328p-109f, 0x1.1d5bdep-85f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.3cdba8p-30f, 0x1.3c513p-112f, 0.0f, 0x1.b78aaep-18f, 0.0f, 0.0f, 0.0f,
     0x1.bb1b9ap-22f, 0x1.72692ap-16f, 0x1.40f966p-47f, 0x1.bfcfdep-46f, 0.0f,
     0x1.38d956p-80f, 0.0f, 0.0f, 0x1.6f644cp-29f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.421a74p-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.589e0cp-71f, 0.0f,
     0x1.ba9238p-5f, 0.0f, 0x1.5a5004p-35f, 0.0f, 0x1.dbbf62p-114f, 0x1.85f04p-111f,
     0.0f, 0x1.b60958p-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f155d4p-6f, 0.0f, 0.0f,
     0x1.1f7494p-65f, 0.0f, 0x1.825b62p-12f, 0.0f, 0x1.afdaccp-23f, 0x1.df8418p-67f,
     0.0f, 0x1.4a001ep-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.40d1acp-109f,
     0x1.3a4016p-80f, 0x1.d58f24p-63f, 0x1.b63532p-105f, 0x1.17db9p-39f,
     0x1.a10ba2p-68f, 0x1.7818ep-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c36478p-101f,
     0x1.dc3ad2p-49f, 0.0f, 0.0f, 0.0f, 0x1.332828p-44f, 0.0f, 0x1.410612p-26f, 0.0f,
     0x1.58ab22p-53f, 0.0f, 0x1.6b22eap-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.43b556p-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.34afdcp-75f, 0x1.8b9052p-123f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.4415e8p-110f, 0x1.6e03d8p-107f, 0x1.4834ep-113f, 0.0f,
     0.0f, 0.0f, 0x1.585c9cp-39f, 0.0f, 0.0f, 0x1.117676p-7f, 0x1.a6df4p-31f,
     0x1.6834acp-83f, 0.0f, 0x1.9796a6p-26f, 0x1.1341b6p-108f, 0x1.4aa39ep-40f, 0.0f,
     0x1.6dc246p-19f, 0.0f, 0.0f, 0x1.cf0152p-27f, 0.0f, 0.0f, 0x1.72b31cp-102f, 0.0f,
     0x1.afff44p-83f, 0.0f, 0x1.b21cd2p-39f, 0x1.bd8d6ap-123f, 0x1.d969a8p-115f,
     0x1.209fb8p-10f, 0x1.38bed2p-86f, 0.0f, 0x1.41c19ep-42f, 0x1.37a45ep-56f,
     0x1.8365c6p-75f, 0x1.70e2cp-55f, 0.0f, 0.0f, 0x1.20bb54p-58f, 0.0f, 0.0f,
     0x1.9050f8p-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f2e78ap-57f, 0.0f, 0.0f,
     0x1.135222p-4f, 0x1.36f00ap-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ec0f3ap-45f,
     0x1.37d9a8p-116f, 0.0f, 0x1.c99066p-74f, 0x1.a23bc2p-45f, 0x1.dfb85cp-97f, 0.0f,
     0x1.08fe5cp-8f, 0.0f, 0x1.cb162cp-3f, 0.0f, 0x1.bdef46p-13f, 0.0f,
     0x1.d71ae8p-48f, 0x1.b00bbap-37f, 0x1.d0327cp-53f, 0x1.b6c6acp-58f,
     0x1.140b1ep-2f, 0x1.0b7836p-57f, 0.0f, 0.0f, 0.0f, 0x1.5ba29ep-116f, 0.0f,
     0x1.76972p-48f, 0.0f, 0x1.6cbf8ep-105f, 0x1.8b144ep-113f, 0.0f, 0x1.687bf2p-83f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0162a8p-71f, 0.0f, 0.0f, 0x1.268e8p-83f,
     0x1.38d958p-99f, 0x1.247d6cp-59f, 0x1p0f, 0x1.5f6f82p-101f, 0x1.e2d7d4p-87f,
     0x1.bca7f6p-26f, 0x1.9acbacp-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.82156p-124f,
     0x1.4ac778p-125f, 0x1.398498p-45f, 0x1.37f97ep-108f, 0x1.93159cp-28f, 0.0f, 0.0f,
     0x1.afb356p-93f, 0.0f, 0x1.d6b3c4p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8d251p-10f, 0.0f, 0.0f, 0x1.10970ep-90f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.25dcdp-56f, 0x1.f00796p-21f, 0.0f, 0x1.f8c93p-125f, 0.0f, 0.0f, 0.0f,
     0x1.27844ep-17f, 0x1.8bdc94p-30f, 0.0f, 0x1.6ee434p-56f, 0x1.17d63cp-99f,
     0x1.47d8b4p-54f, 0.0f, 0x1.1fe5a6p-24f, 0x1.cff21ep-112f, 0.0f, 0x1.48c174p-99f,
     0.0f, 0.0f, 0x1.fbaeacp-24f, 0.0f, 0.0f, 0x1.bbb84ap-39f, 0.0f, 0.0f,
     0x1.cacbe8p-4f, 0.0f, 0x1.d9d644p-38f, 0.0f, 0x1.3a403cp-76f, 0.0f, 0.0f, 0.0f,
     0x1.f1db22p-60f, 0.0f, 0.0f, 0x1.a9b798p-112f, 0.0f, 0.0f, 0x1.36ec1p-44f, 0.0f,
     0.0f, 0x1.72af6p-121f, 0x1.41074cp-96f, 0.0f, 0x1.191e9ep-88f, 0x1.c6dad2p-24f,
     0x1.bcc35ap-118f, 0x1.023fccp-46f, 0x1.5132bep-86f, 0.0f, 0x1.384734p-60f, 0.0f,
     0x1.4305fp-41f, 0.0f, 0.0f, 0x1.7952bcp-20f, 0.0f, 0x1.f0ad14p-23f,
     0x1.af8894p-44f, 0x1.56d418p-17f, 0.0f, 0x1.db2082p-109f, 0.0f, 0.0f, 0.0f,
     0x1.8dd4acp-1f, 0.0f, 0.0f, 0x1.d11bacp-113f, 0.0f, 0x1.a1103cp-29f,
     0x1.20a1dap-57f, 0.0f, 0x1.3c3608p-91f, 0.0f, 0.0f, 0.0f, 0x1.5c39ecp-56f,
     0x1.ebd45cp-95f, 0x1.ff55aap-68f, 0.0f, 0x1.96c41ep-21f, 0x1.edde02p-38f,
     0x1.3f95ecp-74f, 0x1.22c966p-116f, 0x1.c07f52p-30f, 0x1.26c4d8p-99f, 0.0f, 0.0f,
     0x1.4bbbep-73f, 0x1.488054p-20f, 0x1.2e5ddp-115f, 0x1.690036p-54f, 0.0f, 0.0f,
     0x1.c00998p-8f, 0x1.38e2bap-2f, 0.0f, 0x1.99cf5ep-114f, 0x1.804004p-102f,
     0x1.60b9dp-59f, 0x1.a22a3ap-8f, 0x1.9832a8p-22f, 0x1.950aa8p-47f, 0x1p0f,
     0x1.68e782p-115f, 0x1.a550d2p-31f, 0.0f, 0.0f, 0x1.da84d4p-20f, 0.0f,
     0x1.85803ap-98f, 0.0f, 0.0f, 0x1.87d5ap-3f, 0x1.7fb4dcp-122f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.fb147p-52f, 0x1.706788p-46f, 0x1.38a5f6p-70f, 0x1.c46878p-93f, 0.0f,
     0x1.98e2fcp-8f, 0.0f, 0x1.64511p-14f, 0x1.802dccp-45f, 0.0f, 0.0f,
     0x1.9a35ccp-2f, 0.0f, 0x1.89828cp-79f, 0x1.39ea68p-74f, 0x1.59d36p-50f, 0.0f,
     0.0f, 0.0f, 0x1.3d9aa8p-30f, 0x1.47974ap-92f, 0x1.3179bep-60f, 0x1p0f, 0.0f,
     0x1.bc0ec8p-43f, 0x1.60e7b8p-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9cbc2p-126f,
     0x1.0175fap-84f, 0x1.3a5f6ap-88f, 0.0f, 0x1.6a6abcp-78f, 0x1.026ee4p-122f, 0.0f,
     0.0f, 0.0f, 0x1.d9bbep-77f, 0x1.ad37d8p-16f, 0x1.bad4c2p-84f, 0x1.fc80bcp-120f,
     0x1.0cd556p-120f, 0.0f, 0x1.ff5184p-88f, 0.0f, 0x1.318174p-91f, 0.0f,
     0x1.370958p-68f, 0x1.10a4dp-124f, 0.0f, 0x1.6615f4p-30f, 0x1.6384bep-72f,
     0x1.844358p-37f, 0x1.2cd0ep-37f, 0.0f, 0.0f, 0x1.ff008p-63f, 0.0f, 0x1p0f,
     0x1.6945ccp-71f, 0x1.198e62p-27f, 0x1.00ab1cp-50f, 0.0f, 0.0f, 0x1.dfd3dep-8f,
     0x1.fdbbfp-124f, 0x1.c28d58p-46f, 0x1.2a4124p-19f, 0x1.506184p-5f, 0x1.14803p-9f,
     0x1.cd3d24p-61f, 0x1.59c04p-17f, 0.0f, 0.0f, 0x1.69161ep-44f, 0.0f,
     0x1.97eb9p-45f, 0x1p0f, 0x1.374ca4p-51f, 0x1.927506p-1f
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
    
    global_bench_acc = external_bench_wrapper_cst;
    {
        uint32_t cycles_hi = 0, cycles_lo = 0;
        asm volatile (
            "cpuid\n\t"
            "rdtsc\n\t"
            "mov %%edx, %0\n\t"
            "mov %%eax, %1\n\t"
            : "=r" (cycles_hi), "=r" (cycles_lo)
            :: "%rax", "%rbx", "%rcx", "%rdx");
        tmp = ((uint64_t) cycles_hi << 32) | cycles_lo;
    };
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
            tmp1 = Sleef_asinf4_u35avx2128(tmp0);
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
    {
        uint32_t cycles_hi = 0, cycles_lo = 0;
        asm volatile (
            "cpuid\n\t"
            "rdtsc\n\t"
            "mov %%edx, %0\n\t"
            "mov %%eax, %1\n\t"
            : "=r" (cycles_hi), "=r" (cycles_lo)
            :: "%rax", "%rbx", "%rcx", "%rdx");
        tmp1 = ((uint64_t) cycles_hi << 32) | cycles_lo;
    };
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_asinf4_u35avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_asinf4_u35avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
