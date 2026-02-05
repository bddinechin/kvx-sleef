/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_erfcf4_u15avx2128.c --function \
 *     Sleef_finz_erfcf4_u15avx2128 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 4 --function-input-vector-size \
 *     4 --bench --no-embedded-bin --target x86_avx2128
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
     0x1.1821c4p-30f, 0x1.a389b2p-94f, 0x1.a6b99p-32f, 0x1.21d03p-126f,
     0x1.4a1f66p-22f, 0x1.1b0b34p-18f, 0x1.19aa7cp-90f, 0x1.947bc8p-108f,
     0x1.80cceap-12f, 0x1.00049p-16f, 0x1.a51e3cp-113f, 0.0f, 0x1.8b1348p-72f,
     0x1.5fc2b8p-19f, 0x1.ed1f9ep-56f, 0x1.ee413ap-109f, 0.0f, 0x1.f6a034p-98f,
     0x1.4bbd16p-84f, 0.0f, 0x1.3d90d4p-82f, 0x1.d9f81cp-11f, 0.0f, 0x1.ddcc3p-120f,
     0x1.ad9a68p-17f, 0x1.9df7cp-14f, 0x1.cf5676p-102f, 0x1.c7135ep-59f, 0.0f,
     0x1.0cd42ap-30f, 0.0f, 0.0f, 0x1.febfep-17f, 0x1.cbab1ep-87f, 0x1.38b3fap-38f,
     0x1.866afap-105f, 0x1.37c85p-7f, 0x1.28799ap-14f, 0x1.6fe094p-75f,
     0x1.293d62p-11f, 0.0f, 0x1.61429cp-112f, 0x1.3f5d32p-2f, 0x1.99487ap-71f,
     0x1.102858p-126f, 0.0f, 0x1.cdef4ap-113f, 0.0f, 0x1.2c161cp-82f, 0.0f,
     0x1.84038p-47f, 0.0f, 0x1.48964ep-39f, 0x1.c4fcf4p-115f, 0x1.6fa32ap-87f,
     0x1.7fdbb2p-63f, 0x1.65455ap-100f, 0x1.f8268cp-101f, 0x1.954e6ep-97f, 0.0f,
     0x1.7058dcp-45f, 0x1.9477fcp-68f, 0x1.62dc68p-113f, 0.0f, 0.0f, 0.0f,
     0x1.89e762p-106f, 0.0f, 0x1.7a489cp-13f, 0x1.f87a26p-4f, 0x1.685f96p-56f, 0.0f,
     0x1.84854p-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2de34ep-42f, 0x1.5cd3dep-105f,
     0x1.b5d88cp-3f, 0.0f, 0.0f, 0x1.95bc7ep-50f, 0x1.3f9588p-2f, 0.0f,
     0x1.e42034p-1f, 0x1.358576p-125f, 0x1.7cb6e4p-122f, 0.0f, 0.0f, 0x1.93d5b6p-93f,
     0.0f, 0x1.30e2aep-107f, 0.0f, 0x1.3498c2p-110f, 0.0f, 0x1.d4459ap-48f,
     0x1.be5a24p-57f, 0.0f, 0.0f, 0.0f, 0x1.425686p-89f, 0x1p0f, 0x1.3fdd12p-79f,
     0x1.535a92p-34f, 0x1.3d6668p-40f, 0.0f, 0.0f, 0x1.6458dep-109f, 0x1.9c5bp-10f,
     0x1.b35ffp-51f, 0.0f, 0x1.6f344p-57f, 0x1.8776f2p-111f, 0.0f, 0.0f, 0.0f,
     0x1.6822ep-29f, 0.0f, 0x1.6ffe3ep-41f, 0x1.4b2f7p-125f, 0.0f, 0x1.93efaep-88f,
     0x1.3024dp-52f, 0.0f, 0x1.cf5c2p-79f, 0x1.9d0efp-84f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.390aaap-66f, 0x1.4f49c4p-25f, 0x1.78e6fep-126f, 0x1.f966aep-125f,
     0x1.04306p-125f, 0x1.11bbccp-75f, 0x1.ef5a72p-20f, 0x1.21d708p-16f,
     0x1.70dfb2p-4f, 0.0f, 0x1.2f0d66p-51f, 0x1.37c65p-47f, 0.0f, 0x1.79174ap-111f,
     0x1.2ed43cp-126f, 0x1.69194ep-120f, 0x1.3edc5p-79f, 0x1.ba849p-27f, 0.0f,
     0x1.1ca2f4p-79f, 0x1.6198dap-27f, 0.0f, 0.0f, 0.0f, 0x1.1168cp-68f,
     0x1.d070eep-20f, 0.0f, 0x1.507f04p-4f, 0.0f, 0.0f, 0.0f, 0x1.0d5c5p-107f,
     0x1.7ce392p-87f, 0.0f, 0.0f, 0x1.7dce3ep-50f, 0x1.cb1af4p-104f, 0.0f,
     0x1.17c468p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6986f6p-36f, 0.0f, 0.0f, 0.0f,
     0x1.f0f8f2p-43f, 0.0f, 0.0f, 0.0f, 0x1.ab87cap-65f, 0.0f, 0.0f, 0.0f,
     0x1.687f26p-98f, 0x1.79344ap-86f, 0.0f, 0.0f, 0x1.4b63bcp-60f, 0.0f,
     0x1.b95c9ap-111f, 0.0f, 0x1.d1b76ap-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e992a6p-47f, 0.0f, 0.0f, 0x1.ab35dcp-107f, 0.0f, 0.0f, 0.0f,
     0x1.542998p-114f, 0.0f, 0.0f, 0x1.dcb5d8p-81f, 0x1.f7c8bep-8f, 0x1.6308e6p-18f,
     0.0f, 0x1.cf7ap-122f, 0.0f, 0x1.390a36p-28f, 0x1.bf4fdcp-51f, 0x1.e44526p-9f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.4145ap-45f, 0x1.c5595ap-49f, 0.0f, 0x1.766a22p-62f,
     0.0f, 0.0f, 0.0f, 0x1.496ca6p-70f, 0x1.005a1ep-86f, 0.0f, 0.0f, 0.0f,
     0x1.8eb48ep-81f, 0x1.d02568p-66f, 0.0f, 0x1.8b20e6p-41f, 0x1.af9828p-7f,
     0x1.feea1cp-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f5b4ep-87f, 0.0f, 0.0f,
     0x1.68eb48p-16f, 0.0f, 0.0f, 0x1.8eff64p-109f, 0.0f, 0x1.cc55b2p-61f, 0.0f,
     0x1.bf8c52p-96f, 0.0f, 0x1.ffc0eap-85f, 0.0f, 0x1.92252p-74f, 0x1.b85d2ep-53f,
     0x1.9f4862p-105f, 0.0f, 0.0f, 0x1.dc8cb6p-26f, 0x1.f47478p-12f, 0x1.97f49cp-12f,
     0x1.56db2ap-64f, 0x1.e4fdcp-70f, 0.0f, 0x1.00e43p-11f, 0.0f, 0x1.924646p-108f,
     0x1.12d09ap-103f, 0x1.3fbe46p-17f, 0x1.8db8e8p-26f, 0.0f, 0.0f, 0.0f,
     0x1.5df4a8p-33f, 0.0f, 0x1.dd68cp-39f, 0.0f, 0x1.eff482p-42f, 0x1.e4e9dep-47f,
     0x1.21bc88p-57f, 0.0f, 0x1.c5e8f2p-122f, 0x1.202fbep-107f, 0.0f, 0x1.d10d32p-8f,
     0.0f, 0.0f, 0x1.307604p-35f, 0.0f, 0.0f, 0x1.efc464p-110f, 0.0f, 0x1.34f636p-28f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5c4028p-37f, 0x1.084bacp-118f, 0x1.f469a4p-81f,
     0.0f, 0x1.9c0deep-126f, 0x1.1bdac6p-55f, 0.0f, 0.0f, 0x1.2893c6p-25f, 0.0f,
     0x1.573deap-97f, 0.0f, 0x1.c2b39ep-31f, 0x1.49eb66p-31f, 0x1.4868fp-12f,
     0x1.b1eda2p-57f, 0x1.d3c286p-53f, 0.0f, 0x1.ba7642p-19f, 0.0f, 0x1.ca47d2p-89f,
     0x1.cc5b04p-92f, 0x1.0d2be2p-105f, 0x1.9d2a58p-41f, 0.0f, 0x1.32f55p-22f, 0.0f,
     0.0f, 0.0f, 0x1.3c60e8p-122f, 0x1.10bd9ap-108f, 0.0f, 0x1.0bbc64p-23f, 0.0f,
     0.0f, 0.0f, 0x1.8890b8p-30f, 0.0f, 0.0f, 0x1.6b60f6p-42f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f9fc2ap-48f, 0x1.3149bap-89f, 0x1.f4bd6cp-71f, 0.0f, 0x1.ced068p-23f,
     0x1.2dc242p-123f, 0x1.c2e064p-86f, 0.0f, 0.0f, 0x1.03ff56p-36f, 0.0f,
     0x1.898e4ap-119f, 0.0f, 0x1.cd3252p-57f, 0x1.90dfcp-4f, 0.0f, 0x1.f566acp-21f,
     0x1.0307p-93f, 0.0f, 0x1.607f54p-9f, 0.0f, 0.0f, 0.0f, 0x1.6247b8p-83f,
     0x1.c7b55p-32f, 0x1.7ae1d6p-14f, 0.0f, 0.0f, 0x1.79cbfcp-40f, 0.0f,
     0x1.b697d6p-27f, 0.0f, 0x1.55ca3p-39f, 0.0f, 0x1.2709ecp-89f, 0.0f,
     0x1.a62acp-26f, 0.0f, 0.0f, 0.0f, 0x1.13c95p-23f, 0.0f, 0.0f, 0.0f,
     0x1.dc765ep-3f, 0.0f, 0.0f, 0.0f, 0x1.a5424ap-6f, 0.0f, 0.0f, 0x1.79821cp-55f,
     0x1.d33c5cp-32f, 0.0f, 0.0f, 0.0f, 0x1.8c9264p-77f, 0.0f, 0.0f, 0.0f,
     0x1.2898dap-97f, 0x1.faa0ecp-8f, 0.0f, 0.0f, 0.0f, 0x1.0c3aap-64f, 0.0f, 0.0f,
     0.0f, 0x1.7bb154p-114f, 0x1.2d52acp-56f, 0.0f, 0x1.4465b8p-2f, 0.0f, 0.0f,
     0x1.9c80eep-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b1e1eep-60f, 0.0f, 0x1.5613d8p-113f,
     0x1.b61faap-95f, 0x1.62f04ep-40f, 0.0f, 0.0f, 0.0f, 0x1.38533ap-123f, 0x1p0f,
     0.0f, 0.0f, 0x1.74b788p-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.32d466p-109f, 0.0f,
     0x1.379164p-62f, 0x1.15e142p-42f, 0.0f, 0x1.f8310ap-42f, 0.0f, 0x1.ffc998p-111f,
     0.0f, 0.0f, 0.0f, 0x1.aed7ep-21f, 0x1.089ccp-14f, 0x1.542e7ap-26f,
     0x1.b7a5bp-72f, 0.0f, 0.0f, 0x1.213d12p-1f, 0.0f, 0x1.10ac2ep-103f,
     0x1.b6f6fp-126f, 0.0f, 0.0f, 0x1.e60b8ep-84f, 0x1.8de578p-65f, 0.0f, 0.0f, 0.0f,
     0x1.3e00a8p-64f, 0.0f, 0.0f, 0x1.e0903p-123f, 0.0f, 0x1.d02164p-74f, 0.0f,
     0x1.3af5bcp-93f, 0x1.28f102p-106f, 0x1.92f542p-80f, 0.0f, 0x1.6e95b2p-4f, 0.0f,
     0.0f, 0x1.78ccfep-35f, 0x1.43968ep-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.24c63ep-123f, 0.0f, 0x1.d0035ep-121f, 0x1.ebbf8p-2f, 0x1.dc12c8p-110f,
     0x1.18dcb2p-109f, 0.0f, 0x1.5c099cp-31f, 0x1.4901d6p-28f, 0x1.c0911p-8f, 0.0f,
     0x1.dd0bap-97f, 0.0f, 0.0f, 0x1.cd94eap-115f, 0x1.1a3898p-20f, 0x1.d5e6b4p-9f,
     0x1.89ce0ep-100f, 0x1.03e7d4p-12f, 0x1.9b5092p-14f, 0.0f, 0x1.d3ef46p-63f,
     0x1.fd3d84p-11f, 0x1.57a5e6p-100f, 0.0f, 0x1.e374c6p-123f, 0.0f, 0x1.31e054p-20f,
     0x1.713d7ep-88f, 0.0f, 0x1.27c66p-58f, 0.0f, 0x1.55bc56p-104f, 0x1.1ef2bp-106f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.596634p-72f, 0x1.11219ep-33f, 0.0f, 0x1.c2102p-12f,
     0x1.f6b5dep-88f, 0x1.c0622ap-112f, 0.0f, 0.0f, 0x1.5bfcdap-118f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b868p-15f, 0x1.381dd4p-53f, 0x1.705af2p-79f, 0.0f,
     0x1.5557d2p-34f, 0x1.4d7f68p-96f, 0.0f, 0x1.bfec22p-62f, 0x1.d7543ap-14f, 0.0f,
     0.0f, 0x1.c3c132p-76f, 0x1.38518cp-114f, 0x1.c97f5ap-45f, 0x1.62e33cp-16f,
     0x1.9bbb8ep-108f, 0.0f, 0.0f, 0x1.b02aap-84f, 0x1.c376f8p-52f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.49d132p-70f, 0x1.6316f6p-52f, 0x1.dc1972p-125f, 0.0f, 0x1.6ef55ap-105f,
     0x1.dd8206p-66f, 0.0f, 0.0f, 0x1.a241aap-48f, 0x1.c79c7cp-90f, 0.0f, 0.0f,
     0x1.e01ee2p-80f, 0x1.c8475ap-66f, 0.0f, 0.0f, 0x1.1154dp-97f, 0.0f,
     0x1.2b94a4p-77f, 0.0f, 0.0f, 0x1.f3e1b4p-33f, 0.0f, 0.0f, 0x1.31fd8ep-105f, 0.0f,
     0.0f, 0.0f, 0x1.4c1962p-74f, 0x1.26ecap-22f, 0x1.9a98a4p-35f, 0x1.ad481p-69f,
     0x1.04f44cp-61f, 0x1.b119f8p-23f, 0.0f, 0x1.4c036cp-58f, 0.0f, 0x1.7d58dcp-60f,
     0x1.29e336p-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f,
     0.0f, 0.0f, 0x1.6765e4p-45f, 0.0f, 0.0f, 0x1.f7b8d8p-11f, 0.0f, 0x1.c90216p-22f,
     0.0f, 0x1.30404ep-74f, 0.0f, 0.0f, 0.0f, 0x1.aa883ep-52f, 0.0f, 0x1.d468b8p-39f,
     0.0f, 0x1.022102p-43f, 0x1.85b1c8p-40f, 0x1.148d08p-40f, 0.0f, 0.0f, 0.0f,
     0x1.175ce4p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0dc0f6p-16f,
     0x1.c0382p-4f, 0x1.0dc0fp-113f, 0x1.1577eep-14f, 0x1.6ef6c6p-87f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.4036dcp-126f, 0x1.79a7f2p-75f, 0.0f, 0x1.126dbcp-59f,
     0x1.6e45f2p-116f, 0x1.7865dcp-115f, 0.0f, 0x1.70b46p-76f, 0x1.8ac168p-111f,
     0x1.42c854p-70f, 0x1.d9c796p-45f, 0.0f, 0x1.89bcd8p-9f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.4eec2ap-107f, 0x1.53f5d4p-54f, 0.0f, 0.0f,
     0x1.8c394ep-83f, 0x1.0c96d8p-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.92dba2p-96f,
     0x1.e0fac8p-5f, 0x1.fcaddp-114f, 0x1.207ce6p-25f, 0x1.1531c6p-117f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.18e7b8p-106f, 0x1.ddb2dcp-46f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f5fe5ap-81f, 0x1.6866bp-71f, 0x1.725b72p-23f,
     0x1.e00afcp-121f, 0x1.3fc074p-33f, 0.0f, 0x1.79a0b4p-93f, 0x1.b13726p-44f,
     0x1.0dea92p-52f, 0x1.51d22ep-66f, 0.0f, 0.0f, 0x1.71f976p-18f, 0x1.38632ap-123f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e8a7fep-102f, 0.0f, 0.0f, 0x1.ce332cp-126f,
     0x1.11bfbp-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.471b4p-115f, 0.0f, 0x1.83078cp-102f,
     0x1.d6a08ap-60f, 0x1.15733ep-121f, 0.0f, 0x1.b33262p-49f, 0.0f, 0x1.f376a4p-70f,
     0x1.4854fap-42f, 0.0f, 0.0f, 0.0f, 0x1.7a2c58p-44f, 0x1.f18b08p-11f,
     0x1.b58bc8p-82f, 0x1.86195ap-101f, 0.0f, 0x1.94ba1ep-112f, 0x1.48ea36p-91f,
     0x1.0ac254p-46f, 0.0f, 0.0f, 0.0f, 0x1.e3000cp-7f, 0.0f, 0x1.2c0afcp-66f,
     0x1.5b78fap-107f, 0x1.3923f4p-25f, 0.0f, 0.0f, 0x1.a8ab28p-81f, 0x1.bd8c6cp-94f,
     0x1.8c1968p-9f, 0x1.bd51acp-102f, 0x1.63bbb8p-20f, 0.0f, 0.0f, 0.0f,
     0x1.9d2414p-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.206eeep-121f, 0.0f, 0.0f, 0.0f,
     0x1.8a8358p-3f, 0x1.083fdep-53f, 0x1.d88526p-79f, 0.0f, 0.0f, 0x1.d1a96p-7f,
     0x1.ef53f6p-58f, 0x1.bcc7aep-45f, 0x1.98d342p-118f, 0.0f, 0x1.1faf26p-54f,
     0x1.2cc81ap-10f, 0.0f, 0x1.e27112p-120f, 0.0f, 0x1.dae262p-18f, 0x1.f621c4p-124f,
     0x1.d2d2c2p-77f, 0.0f, 0.0f, 0.0f, 0x1.616b68p-94f, 0x1.97e54ep-57f,
     0x1.7bc81ap-113f, 0x1.d772ccp-120f, 0.0f, 0x1.143cfep-101f, 0x1.70f94ap-83f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.060ae6p-52f, 0.0f, 0.0f, 0.0f, 0x1.bdaca6p-57f, 0.0f,
     0x1.71ffc4p-123f, 0.0f, 0x1.0a9506p-68f, 0x1.f8611p-110f, 0x1.640ccep-109f,
     0x1.aa61acp-126f, 0.0f, 0x1.8b249cp-21f, 0x1.207002p-109f, 0.0f, 0x1.0ea698p-15f,
     0.0f, 0.0f, 0.0f, 0x1.e49d92p-20f, 0x1.da4aa6p-87f, 0x1.189924p-111f, 0.0f,
     0x1.f86974p-37f, 0.0f, 0x1.194ccep-111f, 0.0f, 0x1.fa2568p-107f, 0x1.76e036p-87f,
     0.0f, 0x1.121ae4p-48f, 0x1.61e47p-80f, 0.0f, 0x1.55916cp-25f, 0.0f,
     0x1.f70b2ep-112f, 0x1.05ccep-13f, 0.0f, 0.0f, 0x1.67481ap-65f, 0.0f,
     0x1.4fa9d8p-66f, 0x1.7a4416p-43f, 0x1.8697a6p-121f, 0.0f, 0.0f, 0x1.6efe88p-69f,
     0.0f, 0.0f, 0x1.3f82acp-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7c61dep-122f, 0.0f,
     0.0f, 0x1.bdb184p-118f, 0x1.b69bdap-33f, 0.0f, 0x1.39479ap-50f, 0x1.afe778p-74f,
     0.0f, 0x1.7c2192p-36f, 0x1.233bf8p-14f, 0x1.ad3d9p-19f, 0x1.eae83ep-79f, 0.0f,
     0x1.8fb2e2p-15f, 0.0f, 0.0f, 0x1.5aeb68p-102f, 0x1.350f7cp-100f, 0.0f, 0.0f,
     0x1.1b12a6p-67f, 0.0f, 0x1.ed9bcap-72f, 0.0f, 0x1.667b26p-6f, 0.0f, 0.0f, 0.0f,
     0x1.9d2a42p-65f, 0x1.3dc014p-21f, 0x1.deb764p-41f, 0.0f, 0x1.d51e8p-117f, 0.0f,
     0x1.d96b92p-64f, 0x1.db2bdap-75f, 0x1.5f37b2p-73f, 0.0f, 0x1.9752ccp-18f, 0.0f,
     0x1.c1b9a4p-92f, 0x1.ca6a4ap-7f, 0.0f, 0.0f, 0x1.00517cp-62f, 0.0f,
     0x1.5bf626p-10f, 0.0f, 0.0f, 0x1.ea243ep-54f, 0.0f, 0.0f, 0x1.8b9ddcp-97f, 0.0f,
     0.0f, 0x1.27594ap-61f, 0x1.646d9cp-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dc068ap-93f,
     0x1.9fb3b2p-28f, 0.0f, 0x1.702c14p-44f, 0.0f, 0x1.d0b422p-82f, 0.0f,
     0x1.7bbe62p-27f, 0x1.9407ccp-56f, 0x1.76a19ap-61f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.54e786p-10f, 0.0f, 0.0f, 0.0f, 0x1.49b4d6p-39f, 0x1.c0f1eep-72f, 0.0f,
     0x1.3b8f1cp-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.12306p-43f, 0.0f,
     0x1.9a9466p-42f, 0.0f, 0.0f, 0.0f, 0x1.ddd44ap-56f, 0.0f, 0x1.a3984p-38f, 0.0f,
     0.0f, 0.0f, 0x1.0bab7ep-55f, 0x1.1eb1eap-90f, 0x1.ddd844p-89f, 0x1.620442p-114f,
     0x1.1314eep-97f, 0.0f, 0x1.b1ebf4p-125f, 0x1.6bb422p-5f, 0x1.a442e4p-107f,
     0x1.3cd25ap-29f, 0.0f, 0.0f, 0x1.0c3278p-100f, 0.0f, 0.0f, 0x1.48ab78p-15f, 0.0f,
     0.0f, 0x1.56fc1cp-73f, 0.0f, 0x1.00b9b4p-32f, 0x1.915586p-122f, 0x1.1fc6a4p-50f
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
            tmp1 = Sleef_finz_erfcf4_u15avx2128(tmp0);
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
    printf("Sleef_finz_erfcf4_u15avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_erfcf4_u15avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
