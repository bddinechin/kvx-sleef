/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_log2f4_u10avx2128.c --function Sleef_log2f4_u10avx2128 \
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
     0x1.2c17cep-68f, 0.0f, 0.0f, 0.0f, 0x1.31206p-123f, 0x1.6d2b6ep-98f,
     0x1.f06c68p-69f, 0.0f, 0.0f, 0x1.bc5ed4p-102f, 0.0f, 0x1.563222p-6f,
     0x1.40d766p-1f, 0x1.9887b6p-121f, 0x1.3603e2p-106f, 0.0f, 0.0f, 0.0f,
     0x1.9128b2p-63f, 0.0f, 0x1.37382cp-51f, 0x1.75637ap-44f, 0.0f, 0x1.43f1e4p-43f,
     0x1.858506p-112f, 0x1.64cb98p-103f, 0.0f, 0x1.58d99ap-89f, 0.0f, 0x1.a9b10ap-40f,
     0.0f, 0x1.40e56ep-65f, 0.0f, 0x1.491332p-113f, 0.0f, 0x1.455764p-17f,
     0x1.0983p-59f, 0x1.77a3fap-52f, 0.0f, 0x1.c4485ap-13f, 0.0f, 0x1.f286acp-106f,
     0x1.e52e64p-52f, 0.0f, 0x1.b825c4p-87f, 0x1.f9dd4ep-90f, 0x1.7e6242p-122f, 0.0f,
     0.0f, 0x1.22415ap-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a06e78p-104f,
     0x1.843c3ap-46f, 0.0f, 0x1.e274a2p-84f, 0x1.bce708p-35f, 0.0f, 0x1.b8e848p-121f,
     0.0f, 0x1.994248p-15f, 0.0f, 0x1.bd1762p-100f, 0x1.57c64p-88f, 0x1.3efcap-121f,
     0x1.ce9c3p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f7947ap-39f, 0x1.1eabb2p-79f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.30c948p-5f, 0x1.843128p-45f, 0x1.e461d4p-50f, 0.0f,
     0x1.662352p-3f, 0x1.a2da38p-58f, 0x1.716b46p-42f, 0x1.8fa1e4p-111f,
     0x1.7d0ba6p-95f, 0x1.d1cf0ep-74f, 0.0f, 0x1.7231f8p-70f, 0.0f, 0.0f,
     0x1.98175p-36f, 0.0f, 0x1.010cb6p-119f, 0x1.58812p-67f, 0x1.dfe522p-74f, 0.0f,
     0x1.34def8p-62f, 0x1.9e6a16p-22f, 0.0f, 0x1.b455cp-47f, 0.0f, 0.0f, 0.0f,
     0x1.02847p-42f, 0.0f, 0x1.b49028p-100f, 0x1.296af2p-22f, 0.0f, 0x1.c572d4p-112f,
     0.0f, 0x1.8b519ep-116f, 0.0f, 0x1.8d81bap-45f, 0.0f, 0x1.fb09aep-73f, 0.0f, 0.0f,
     0.0f, 0x1.2fb55ep-120f, 0x1.ae47c8p-47f, 0x1.e2b202p-9f, 0.0f, 0x1.7a2d9ap-72f,
     0.0f, 0.0f, 0x1.625612p-12f, 0.0f, 0x1.d52e7cp-41f, 0x1.9e6c04p-36f, 0.0f, 0.0f,
     0x1.eb977p-123f, 0x1.6d6c6p-44f, 0.0f, 0x1.e00b38p-54f, 0x1.fb2386p-92f, 0.0f,
     0x1.6dd73ep-12f, 0x1.49693ep-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f,
     0.0f, 0.0f, 0.0f, 0x1.d9b44ap-71f, 0x1.ce1c38p-64f, 0.0f, 0.0f, 0x1.6c8376p-101f,
     0x1.c2417ap-8f, 0x1.f86feap-38f, 0.0f, 0x1.6febep-97f, 0x1.86a92ap-125f, 0.0f,
     0x1.19d3e8p-121f, 0.0f, 0.0f, 0x1.6c740cp-111f, 0.0f, 0.0f, 0x1.d64a9cp-48f,
     0x1.81658ep-49f, 0x1.8d9664p-72f, 0x1.610bc6p-27f, 0.0f, 0x1.a54598p-115f,
     0x1.0eeb7ap-71f, 0x1.e2bcbap-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5ff2d4p-79f, 0x1.9032b6p-1f, 0x1.3e673cp-77f, 0x1.31d5e8p-16f, 0.0f,
     0x1.7ff982p-31f, 0x1.1ce07ep-83f, 0x1.604fdp-46f, 0x1.9e97bap-111f,
     0x1.61223cp-40f, 0.0f, 0.0f, 0.0f, 0x1.05564cp-34f, 0x1.36b0bcp-90f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e9438p-59f, 0x1.02cd88p-70f, 0x1.db97bep-77f, 0x1.a31bfp-2f,
     0.0f, 0x1.0b0488p-101f, 0x1.2ffeap-41f, 0.0f, 0.0f, 0x1.09b544p-62f,
     0x1.d86aa4p-82f, 0x1.b053dap-117f, 0x1.5c1e5ap-16f, 0.0f, 0.0f, 0x1.569442p-64f,
     0.0f, 0x1.d33a06p-37f, 0x1.bcd8p-23f, 0x1.f32f84p-59f, 0x1.66c3f2p-118f,
     0x1.be0b58p-52f, 0.0f, 0.0f, 0x1.da01b2p-29f, 0.0f, 0.0f, 0x1.ccd3fep-3f, 0.0f,
     0x1.886d3ep-105f, 0.0f, 0.0f, 0.0f, 0x1.ff3246p-123f, 0x1.2cba7cp-67f,
     0x1.e44094p-56f, 0x1.ca9a2p-41f, 0x1.0c9edcp-110f, 0x1.e10de8p-7f,
     0x1.17dcdap-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3fb71ep-22f, 0.0f,
     0x1.e4e71ep-49f, 0.0f, 0x1.7d74cp-46f, 0x1.cbbf2p-35f, 0x1.5e12b2p-110f, 0.0f,
     0.0f, 0x1.ebe40cp-68f, 0x1.3d9282p-97f, 0.0f, 0x1.59db1ap-57f, 0.0f,
     0x1.b44d24p-89f, 0.0f, 0x1.2c24f8p-21f, 0.0f, 0x1.7d308ep-57f, 0.0f,
     0x1.595e3p-54f, 0x1.240476p-87f, 0x1.063596p-91f, 0.0f, 0x1.fc18dep-81f,
     0x1.d1ef3ap-96f, 0.0f, 0.0f, 0x1.e6f4b2p-65f, 0x1.e98f1ap-20f, 0x1.e8562p-84f,
     0.0f, 0x1.d4a32cp-35f, 0x1.b05e84p-110f, 0x1.e81814p-76f, 0.0f, 0x1.20553p-80f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ed541ep-103f, 0x1.516ca4p-20f, 0.0f,
     0x1.666638p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2c54a6p-92f, 0.0f,
     0x1.9f1bf8p-101f, 0.0f, 0.0f, 0.0f, 0x1.30bbf4p-36f, 0x1.98334p-48f, 0.0f,
     0x1.191d62p-52f, 0x1.a76e9ap-21f, 0x1.c5515cp-68f, 0.0f, 0x1.39108cp-125f,
     0x1.19f204p-120f, 0.0f, 0x1.0131acp-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ebca8p-82f,
     0.0f, 0.0f, 0x1.d438aep-104f, 0.0f, 0.0f, 0x1.2dc31ep-60f, 0x1.225da4p-115f,
     0.0f, 0x1.a3c4c8p-44f, 0.0f, 0x1.6cdfe6p-108f, 0.0f, 0.0f, 0x1.fcda64p-19f,
     0x1.ddd32cp-47f, 0x1.f0c3b2p-10f, 0.0f, 0x1p0f, 0x1.1e71eap-23f, 0x1.862eb6p-64f,
     0x1.76cc1ep-88f, 0x1.72d602p-124f, 0.0f, 0.0f, 0x1.b32c06p-21f, 0x1.32d936p-88f,
     0.0f, 0x1.8175a4p-71f, 0x1.eb2cf8p-77f, 0x1.82aa82p-86f, 0.0f, 0x1.aa1b3cp-50f,
     0.0f, 0x1.1bb74p-29f, 0x1.7d89a2p-16f, 0x1.84edeap-22f, 0x1.8d2796p-86f, 0.0f,
     0x1.7751p-71f, 0x1.d40bp-42f, 0x1.879f5ap-101f, 0.0f, 0.0f, 0x1.71776cp-117f,
     0x1.174cf6p-27f, 0.0f, 0x1.b717ap-39f, 0.0f, 0x1.c7b77p-125f, 0x1.f16cap-14f,
     0x1.d37286p-124f, 0.0f, 0.0f, 0x1.111e7ep-39f, 0x1.02223p-124f, 0x1.603d02p-33f,
     0.0f, 0.0f, 0.0f, 0x1.825a6cp-118f, 0.0f, 0.0f, 0.0f, 0x1.542e04p-10f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f2eea8p-115f, 0x1.cb0f8ep-2f, 0.0f, 0.0f,
     0x1.e18e1ep-89f, 0.0f, 0x1.cb7026p-5f, 0x1.dcb6f8p-120f, 0x1.9a7f52p-86f,
     0x1.590054p-20f, 0x1.7d6dd6p-98f, 0.0f, 0x1.4b2ffcp-80f, 0x1.fee1ecp-43f, 0.0f,
     0x1.b51522p-29f, 0x1.15f048p-77f, 0x1.084086p-34f, 0x1.e81c44p-106f, 0.0f,
     0x1.c961cap-32f, 0.0f, 0x1.ba44bep-93f, 0x1.d1d74ep-7f, 0.0f, 0x1.6ce0ep-45f,
     0.0f, 0.0f, 0x1.cb2474p-1f, 0x1.dbf5cep-125f, 0x1.a91884p-17f, 0.0f, 0.0f,
     0x1.13ac7ap-40f, 0.0f, 0x1.ffbed4p-104f, 0x1.fb35cep-40f, 0x1.9d2f8ep-88f, 0.0f,
     0x1.5964e6p-95f, 0.0f, 0x1.8d7bccp-15f, 0.0f, 0x1.4cc354p-89f, 0.0f, 0.0f,
     0x1.68ccccp-2f, 0x1.33d312p-84f, 0x1.68ee84p-88f, 0x1.cb33c8p-8f, 0.0f,
     0x1.58a9c4p-26f, 0x1.0fbf6ap-122f, 0x1.089aa4p-101f, 0x1.4e1be2p-125f,
     0x1.959934p-111f, 0.0f, 0x1.b3c7ep-4f, 0.0f, 0.0f, 0.0f, 0x1.f10bb2p-52f,
     0x1.a7c82ep-67f, 0x1.ca83dp-116f, 0.0f, 0x1.369a18p-80f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c6643ap-30f, 0x1.1270aap-93f, 0.0f, 0x1.384508p-109f, 0.0f, 0x1.9bc6dap-89f,
     0x1.055b86p-90f, 0.0f, 0x1.6ca9bcp-83f, 0x1.1cbf8ep-10f, 0.0f, 0x1.754abcp-37f,
     0.0f, 0.0f, 0.0f, 0x1.7ede6p-44f, 0x1.a7af96p-119f, 0.0f, 0x1.38acep-73f,
     0x1.b2428ep-62f, 0.0f, 0.0f, 0x1.72b9d8p-38f, 0.0f, 0.0f, 0x1.826eap-121f, 0.0f,
     0.0f, 0.0f, 0x1.ca7f5ep-106f, 0x1.f63874p-32f, 0.0f, 0.0f, 0x1.9e633cp-13f,
     0x1.f386cep-73f, 0x1.1302dp-71f, 0x1.8b3694p-52f, 0x1.c2be26p-30f, 0.0f, 0.0f,
     0x1.e5393cp-91f, 0.0f, 0x1.d3bcf2p-93f, 0.0f, 0x1.0a288p-71f, 0.0f, 0.0f,
     0x1.ef84eap-66f, 0x1.c87c7cp-35f, 0.0f, 0.0f, 0x1.5f0dd2p-66f, 0.0f,
     0x1.90873ep-72f, 0x1.0ba61p-43f, 0.0f, 0x1.762fe4p-62f, 0x1.817626p-39f,
     0x1.6100aep-104f, 0.0f, 0x1.d6e4cap-123f, 0x1.13a642p-28f, 0x1.f10a56p-124f,
     0.0f, 0.0f, 0x1.18fc4p-79f, 0.0f, 0x1.3a1244p-55f, 0.0f, 0x1.df3654p-11f, 0.0f,
     0x1.5f9f8ap-105f, 0.0f, 0x1.7c2bd8p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6929a4p-24f, 0.0f, 0x1.4dec14p-104f, 0.0f, 0.0f, 0x1.e21de4p-7f, 0.0f, 0.0f,
     0x1.c66baep-108f, 0x1.dfe246p-122f, 0.0f, 0x1.ccce72p-66f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.594efcp-94f, 0x1.6c9c74p-95f, 0x1.c84e66p-96f,
     0x1.2703bep-4f, 0x1.79c7aep-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1b38b4p-81f,
     0.0f, 0x1.1f7f3ep-23f, 0.0f, 0x1.598aap-57f, 0x1.2c1d22p-95f, 0.0f,
     0x1.812486p-99f, 0x1.767a08p-45f, 0.0f, 0.0f, 0x1.b97526p-83f, 0.0f, 0.0f,
     0x1.27fe9ap-75f, 0x1.01f5c4p-115f, 0x1.a2296cp-44f, 0x1.13952ap-66f, 0.0f, 0.0f,
     0x1.33ea0cp-112f, 0x1.5be5eep-6f, 0x1.ac980ep-40f, 0.0f, 0x1.744a12p-80f,
     0x1.f4179ep-30f, 0x1.ac2e08p-32f, 0.0f, 0.0f, 0x1.86145ap-97f, 0x1.a6cd5ap-64f,
     0x1.74fceep-95f, 0.0f, 0x1.21198cp-38f, 0.0f, 0.0f, 0.0f, 0x1.28c254p-25f, 0.0f,
     0x1.4f737ep-82f, 0.0f, 0.0f, 0x1.51a74cp-99f, 0.0f, 0.0f, 0.0f, 0x1.4bb6c4p-116f,
     0x1.778542p-65f, 0x1.efc7b6p-18f, 0x1.729734p-42f, 0.0f, 0.0f, 0x1.092f2ep-27f,
     0x1.d43e32p-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d9129ep-32f, 0.0f, 0.0f,
     0x1.e38db8p-114f, 0x1.58862ap-111f, 0x1.ee73f2p-92f, 0x1.172086p-18f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.5e505ep-65f, 0x1.2cd6e2p-53f, 0.0f, 0x1.80b48ap-43f,
     0x1.75edccp-72f, 0.0f, 0.0f, 0x1.d1495cp-13f, 0x1.4f8f8ap-41f, 0x1.cb844p-109f,
     0x1.f106e6p-26f, 0.0f, 0x1.b6d796p-109f, 0.0f, 0.0f, 0x1.c18bp-126f,
     0x1.a10fc6p-54f, 0x1.3bff84p-74f, 0x1.e0555cp-119f, 0x1.79370ap-85f, 0.0f, 0.0f,
     0x1.bfbb3ep-109f, 0x1.5d2c8cp-27f, 0x1.479e98p-2f, 0.0f, 0.0f, 0x1.1e984p-8f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f57648p-2f, 0x1.a3a7c4p-27f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.38c2c2p-40f, 0.0f, 0x1.4f980cp-31f, 0.0f,
     0x1.d6ffcp-8f, 0x1.2b926ap-17f, 0.0f, 0x1.cb3e46p-97f, 0.0f, 0.0f,
     0x1.e69cfcp-67f, 0x1.ae1f78p-113f, 0.0f, 0x1.c367bp-9f, 0x1.ba912ep-60f,
     0x1.a19b34p-95f, 0x1.2c189p-28f, 0x1.e5ef38p-102f, 0x1.6f1dap-124f,
     0x1.8e79fep-19f, 0.0f, 0.0f, 0x1.0f4132p-112f, 0x1.d84a7ep-44f, 0x1.ed4f4cp-112f,
     0.0f, 0.0f, 0x1.51af6ap-81f, 0x1.2b1abep-69f, 0x1.911d04p-1f, 0x1.cc4d1cp-55f,
     0.0f, 0.0f, 0.0f, 0x1.a69dccp-57f, 0.0f, 0.0f, 0x1.d9fba8p-17f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e24f1ap-39f, 0x1.06bddap-110f, 0x1.d7e05ep-64f, 0.0f, 0.0f,
     0x1.b1e934p-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.42e19ep-57f, 0.0f, 0.0f,
     0x1.efc91p-55f, 0x1.c409dap-14f, 0.0f, 0x1.696b42p-79f, 0.0f, 0.0f, 0.0f,
     0x1.993baap-17f, 0x1.3c8318p-21f, 0.0f, 0.0f, 0x1.8efb94p-84f, 0x1.b17324p-100f,
     0.0f, 0x1.968892p-67f, 0.0f, 0x1.a1f9a4p-31f, 0x1.5942c4p-27f, 0x1.d69a86p-93f,
     0.0f, 0.0f, 0x1.dc5e46p-112f, 0.0f, 0x1.de10ep-31f, 0x1.632d16p-11f, 0.0f, 0.0f,
     0.0f, 0x1.8915aap-8f, 0.0f, 0.0f, 0x1.c24e52p-107f, 0x1.38bb54p-35f, 0.0f,
     0x1.a68b18p-29f, 0.0f, 0x1.905acp-32f, 0x1.0778d2p-114f, 0.0f, 0.0f,
     0x1.4c519ep-44f, 0x1.14920ep-103f, 0.0f, 0x1.5c38d2p-119f, 0x1.7c5acep-29f, 0.0f,
     0x1.2a4ca6p-76f, 0x1.fa2722p-72f, 0x1.6c4618p-109f, 0x1.fafd12p-12f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.7c8212p-81f, 0x1.aafebep-94f, 0.0f, 0x1.bf75ep-112f, 0.0f,
     0x1.89efap-22f, 0x1.ccb29p-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1beeeep-10f, 0.0f,
     0x1.5656e4p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3606bp-47f, 0x1.4425d2p-74f, 0x1.3c8124p-81f, 0.0f, 0x1.e619ep-9f,
     0x1.098022p-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e43caap-94f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c30302p-99f, 0x1.bdf5dap-13f, 0x1.dbc60cp-52f, 0.0f, 0.0f,
     0x1.cc770ap-9f, 0.0f, 0x1.f33d48p-31f, 0.0f, 0x1.3ceb18p-3f, 0.0f, 0.0f,
     0x1.26002p-87f, 0x1.a8ac74p-84f, 0x1.72bf0ap-34f, 0.0f, 0x1.74ad94p-63f, 0.0f,
     0x1.16df64p-28f, 0x1.fce588p-53f, 0.0f, 0.0f, 0x1.8d0512p-112f, 0.0f, 0.0f,
     0x1.771996p-51f, 0.0f, 0x1.fdb002p-99f, 0.0f, 0x1.4e4dcap-72f, 0.0f,
     0x1.5aef6cp-74f, 0x1.a0097ep-74f, 0x1.7d472p-11f, 0x1.492f84p-108f,
     0x1.6dd804p-7f, 0x1.8af68ep-117f, 0x1.762314p-124f, 0x1.5639bap-58f,
     0x1.d6ec24p-109f, 0.0f, 0x1.41e49cp-74f, 0.0f, 0x1.47b9aap-120f, 0.0f, 0.0f,
     0x1.95c49p-90f, 0x1.11a996p-18f, 0x1.75b45ep-96f, 0.0f, 0.0f, 0.0f,
     0x1.5ca33ep-32f, 0x1.eaf188p-105f, 0.0f, 0x1.7a0cd2p-56f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.0721b2p-105f, 0x1.f688f8p-17f, 0x1.11f7c6p-44f, 0.0f, 0x1.e5a5c4p-89f,
     0.0f, 0x1.aed7bp-21f, 0x1.95e9f2p-85f, 0.0f, 0.0f, 0x1.b89c48p-51f,
     0x1.124fecp-58f, 0x1.02d94ap-53f, 0x1.6d7184p-25f, 0x1.6724dp-12f, 0.0f,
     0x1.4d746ep-13f, 0x1.c5fb9cp-32f, 0x1.6741d6p-117f, 0x1.86eff2p-28f, 0.0f,
     0x1.9503c4p-13f, 0.0f, 0x1.bdc946p-34f, 0x1.8f0686p-88f, 0x1.a6715p-20f,
     0x1.de095p-36f, 0x1.12e73cp-89f, 0x1.a341dp-98f, 0.0f, 0x1.f2ecbep-12f,
     0x1.a325d2p-85f, 0x1.34c62p-14f, 0x1.760f42p-32f, 0.0f, 0.0f, 0.0f,
     0x1.3b709ep-100f, 0.0f, 0x1.b62b74p-126f, 0.0f, 0x1.832ba2p-110f, 0.0f, 0.0f,
     0x1.af335ep-15f, 0x1.563ebp-38f, 0.0f, 0x1.dd4632p-95f, 0x1.735138p-20f,
     0x1.5af65cp-47f, 0.0f, 0x1.b2590ap-109f, 0.0f, 0x1.5966fap-97f, 0x1.9c2ac2p-43f,
     0.0f, 0x1.7aa7e2p-112f, 0.0f, 0.0f, 0x1.54a48cp-84f, 0x1.a2c9bep-53f,
     0x1.8a1612p-13f, 0x1.e61f5ep-17f, 0x1.aae7b2p-35f, 0x1.a0cd3ep-73f, 0.0f, 0.0f,
     0x1.ce55eap-26f, 0.0f, 0.0f, 0.0f, 0x1.ed12aep-106f, 0x1.04ad22p-16f, 0.0f,
     0x1.827d0ep-85f, 0x1.e440f6p-52f, 0x1.dad7e4p-76f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d90756p-98f, 0x1.efeacep-111f, 0x1.bc80f2p-94f, 0x1.855004p-45f,
     0x1.5d66eap-46f, 0.0f, 0.0f, 0.0f, 0x1.a5f602p-90f, 0.0f, 0x1.1bef1p-20f,
     0x1.0e82c2p-15f, 0.0f, 0x1.a68144p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4c415p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.96cfap-16f, 0x1.96df64p-91f,
     0x1.e33a1p-45f, 0.0f, 0.0f, 0x1.9a8afep-19f, 0.0f, 0x1.e05e54p-54f
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
            tmp1 = Sleef_log2f4_u10avx2128(tmp0);
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
    printf("Sleef_log2f4_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_log2f4_u10avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
