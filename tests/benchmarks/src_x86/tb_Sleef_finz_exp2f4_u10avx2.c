/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_exp2f4_u10avx2128.c --function \
 *     Sleef_finz_exp2f4_u10avx2128 --headers sleef.h,ml_support_lib.h \
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
     0x1.9f5f1ap-28f, 0x1.2a31eep-75f, 0.0f, 0.0f, 0x1.8a55ap-90f, 0x1.2a7458p-29f,
     0.0f, 0.0f, 0x1.93ad6cp-53f, 0.0f, 0.0f, 0x1.a7c4fap-14f, 0.0f, 0.0f,
     0x1.ed982ep-91f, 0.0f, 0x1.997114p-12f, 0.0f, 0x1.e51a1ap-78f, 0x1.c63aaep-1f,
     0x1.aa84ecp-81f, 0x1.4d7b2ep-126f, 0.0f, 0x1.359cf6p-74f, 0.0f, 0.0f,
     0x1.fa51d6p-125f, 0x1.5c9a1p-35f, 0.0f, 0.0f, 0x1.4cadb4p-15f, 0.0f,
     0x1.89f9c2p-44f, 0x1.db7bbep-29f, 0x1.00073p-70f, 0.0f, 0.0f, 0.0f,
     0x1.cd40e6p-57f, 0.0f, 0.0f, 0.0f, 0x1.ff3e4ap-25f, 0.0f, 0.0f, 0x1.01334ep-62f,
     0x1.4e1024p-100f, 0.0f, 0.0f, 0.0f, 0x1.aa8226p-74f, 0x1.390c7p-85f,
     0x1.3180ecp-29f, 0.0f, 0.0f, 0x1.d48826p-92f, 0x1.4b70b4p-109f, 0.0f, 0.0f,
     0x1.3c2fcp-26f, 0x1.c2a3dcp-76f, 0.0f, 0x1.89dfdep-97f, 0.0f, 0.0f, 0.0f,
     0x1.f464aap-125f, 0x1.85dfdap-10f, 0x1.d24f6p-102f, 0.0f, 0x1.325ac4p-110f,
     0x1.3ca6d2p-106f, 0x1.45e91ap-36f, 0x1.60a7c6p-41f, 0.0f, 0x1.38928ep-81f, 0.0f,
     0.0f, 0.0f, 0x1.1c55dap-122f, 0.0f, 0.0f, 0.0f, 0x1.0b422ep-4f, 0x1.1fccc2p-110f,
     0x1.020894p-100f, 0x1.a19056p-32f, 0x1.f9b506p-92f, 0x1.ed5a46p-84f, 0.0f, 0.0f,
     0x1.1b18cap-43f, 0x1.914736p-17f, 0x1.7ec942p-33f, 0x1.4f529ap-13f, 0.0f,
     0x1.45f9ccp-79f, 0x1.39926ap-28f, 0.0f, 0.0f, 0x1.f3b048p-115f, 0.0f, 0.0f,
     0x1.7149b8p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1acbe6p-62f, 0x1.446cd2p-61f,
     0x1.161c52p-108f, 0x1.5961acp-66f, 0x1.8192a2p-47f, 0.0f, 0.0f, 0x1.037f7ep-87f,
     0x1.0b9be2p-40f, 0.0f, 0x1.12a2aep-14f, 0x1.4d6cbp-91f, 0.0f, 0x1.175ef2p-40f,
     0x1.2ab0a2p-19f, 0.0f, 0.0f, 0x1.c1db14p-46f, 0x1.f99b58p-76f, 0.0f, 0.0f, 0.0f,
     0x1.290e6ep-50f, 0.0f, 0x1.fa967cp-12f, 0x1.4ba674p-75f, 0x1.f17944p-40f, 0.0f,
     0x1.c9d42ep-77f, 0x1.bcb022p-42f, 0.0f, 0.0f, 0x1.e53662p-66f, 0.0f, 0.0f, 0.0f,
     0x1.4a8a44p-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f1405ap-22f, 0x1.1b2592p-112f,
     0x1.c86918p-68f, 0x1.a3a6f2p-23f, 0.0f, 0x1.b0a816p-53f, 0.0f, 0x1.3a361cp-31f,
     0.0f, 0x1.551388p-37f, 0x1.dccd62p-5f, 0.0f, 0.0f, 0x1.a49f5p-93f,
     0x1.6b1bcep-72f, 0x1.7fb6eep-63f, 0x1.574e34p-126f, 0x1.a7b39ap-84f,
     0x1.6cf7ecp-66f, 0.0f, 0.0f, 0.0f, 0x1.6b6bfp-36f, 0x1.ce2cdep-123f,
     0x1.cb67fp-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3aa546p-90f, 0.0f, 0x1.b4343cp-41f,
     0.0f, 0x1.b73664p-126f, 0.0f, 0.0f, 0x1.3f538cp-31f, 0x1.fab832p-67f, 0.0f,
     0x1.c333fap-40f, 0x1.b0cbd4p-108f, 0x1.71e852p-71f, 0.0f, 0.0f, 0x1.b4c8dp-53f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3d3baap-126f, 0x1.445d3cp-55f, 0x1.eca334p-83f,
     0x1.56a654p-37f, 0.0f, 0x1.6b35eep-58f, 0x1.bd11e4p-38f, 0x1.8c8b08p-57f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.87825ep-64f, 0x1.d0b91p-59f, 0.0f, 0x1.99d7c4p-3f,
     0x1.a1a1aap-108f, 0.0f, 0x1.39e2b4p-88f, 0.0f, 0x1.cd6f0ep-63f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.1f5f4ep-90f, 0x1.340bbcp-48f, 0x1.a6bd24p-23f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.22d1dap-51f, 0.0f, 0x1.7e9ca6p-60f, 0.0f, 0x1.47eca2p-91f,
     0x1.afbb1ap-44f, 0x1.097c78p-72f, 0x1.755dep-126f, 0x1.ed135cp-53f, 0.0f, 0.0f,
     0x1.6e82bp-92f, 0x1.8764bcp-104f, 0.0f, 0.0f, 0x1.8ed388p-8f, 0x1.e7335p-73f,
     0x1.92c0bp-38f, 0x1.2d7bc6p-84f, 0.0f, 0x1.c2f1fp-13f, 0.0f, 0.0f,
     0x1.c7d986p-97f, 0.0f, 0x1.d54788p-33f, 0x1.879332p-81f, 0.0f, 0x1.517018p-30f,
     0x1.43417ap-63f, 0x1.ab41aap-39f, 0.0f, 0.0f, 0x1.74ea38p-83f, 0x1.9596a2p-63f,
     0x1.dc501p-106f, 0x1.63c57ap-122f, 0x1.b2f596p-36f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3adf88p-87f, 0.0f, 0x1.00b836p-60f, 0x1.f96c16p-5f, 0.0f, 0x1.943cb2p-39f,
     0x1.50bf92p-7f, 0.0f, 0.0f, 0x1.6b75cp-99f, 0x1.e4f4d2p-78f, 0x1.264f08p-111f,
     0.0f, 0x1.b88a5ep-12f, 0x1.2b0ed8p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.937e96p-47f, 0x1.2c520ap-57f, 0.0f, 0.0f, 0x1.dc7f86p-123f, 0.0f,
     0x1.586246p-50f, 0x1.466fa6p-78f, 0x1.d8f426p-5f, 0.0f, 0x1.b92106p-114f, 0.0f,
     0x1.b94b8ep-85f, 0.0f, 0.0f, 0.0f, 0x1.5dc5ep-15f, 0x1.df6692p-82f, 0x1p0f,
     0x1.fbbb32p-66f, 0x1.15b1ap-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eff846p-69f,
     0x1.062c52p-33f, 0x1.b77798p-13f, 0x1.733418p-119f, 0.0f, 0.0f, 0x1p0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c13d9ep-46f, 0x1.e3d906p-55f, 0x1.ee5faep-78f, 0.0f,
     0x1.c92c26p-54f, 0.0f, 0.0f, 0.0f, 0x1.b99d8p-11f, 0x1.98c426p-106f,
     0x1.a8895cp-9f, 0x1.445d2ap-1f, 0x1.b86f04p-30f, 0x1.70efaap-32f, 0.0f, 0.0f,
     0x1.df4b4cp-18f, 0.0f, 0.0f, 0.0f, 0x1.77ff0ap-22f, 0x1.0b6644p-14f, 0.0f, 0.0f,
     0x1.fcda32p-98f, 0x1.1ea19cp-27f, 0x1.b4323p-17f, 0.0f, 0.0f, 0x1.699cfap-52f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0115aap-107f, 0.0f, 0.0f, 0.0f,
     0x1.48fbd8p-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.09a126p-15f, 0x1.c31b84p-60f,
     0x1.9119d4p-97f, 0x1.3cbe5ap-25f, 0.0f, 0x1.4bd604p-116f, 0x1.6b4ca8p-60f,
     0x1.e9859ap-124f, 0x1.1906fap-105f, 0x1.51ed4cp-21f, 0x1.8e3254p-120f, 0.0f,
     0x1.17ac6ap-88f, 0x1.83025p-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d45b54p-24f,
     0x1.ac749cp-96f, 0x1.1dad44p-64f, 0x1.28f8fap-124f, 0x1.d2b918p-99f,
     0x1.e5c156p-27f, 0.0f, 0x1.423508p-63f, 0x1.ac96ccp-63f, 0.0f, 0x1.5502a4p-35f,
     0x1.e5b1fep-91f, 0.0f, 0x1.bc4e82p-111f, 0.0f, 0.0f, 0.0f, 0x1.1947dp-118f, 0.0f,
     0.0f, 0x1.a73666p-92f, 0.0f, 0x1.f4d078p-16f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.57d81cp-87f, 0x1.a885acp-126f, 0x1.286374p-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e31658p-15f, 0.0f, 0.0f, 0x1.679366p-27f, 0x1.7ece48p-90f, 0.0f, 0.0f,
     0.0f, 0x1.d8e3d6p-70f, 0.0f, 0.0f, 0x1.0e7fe2p-82f, 0.0f, 0.0f, 0x1.2d05dap-52f,
     0x1.fbcd66p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0931b4p-21f, 0.0f, 0x1.25357ep-47f,
     0x1.02a2ap-115f, 0.0f, 0.0f, 0x1.d1ee6p-29f, 0.0f, 0x1.7b80f8p-103f, 0.0f, 0.0f,
     0x1.f38e58p-117f, 0.0f, 0x1.83f7a6p-98f, 0.0f, 0.0f, 0x1.146288p-36f,
     0x1.726616p-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dc1534p-21f, 0x1.a7f62ep-109f, 0.0f,
     0.0f, 0x1.9a6db6p-10f, 0x1.a863bep-111f, 0.0f, 0.0f, 0x1.0833d8p-110f, 0.0f,
     0x1.926b5ap-81f, 0x1.3d6e0ep-74f, 0.0f, 0.0f, 0.0f, 0x1.648a1cp-88f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.6eef24p-105f, 0x1.d2720ep-112f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9722d6p-82f, 0x1.d79024p-125f, 0.0f, 0x1.a5e28ap-16f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0bb04ep-50f, 0x1.fcdf82p-120f, 0x1.f72092p-79f, 0x1.2f47a8p-1f,
     0x1.03b7f4p-32f, 0x1.5bd228p-57f, 0x1.7a789p-72f, 0x1.5f3b04p-105f,
     0x1.2c5cd6p-125f, 0.0f, 0x1.e38016p-25f, 0x1.8f0a76p-86f, 0x1.fd3ae6p-57f,
     0x1.1807p-75f, 0x1.cc6294p-39f, 0x1.7af296p-84f, 0x1.b0d52ep-5f, 0x1.9a1f1p-124f,
     0x1.4ed9f8p-43f, 0x1.e6e60cp-85f, 0.0f, 0x1.395104p-104f, 0.0f, 0x1.c63cf4p-61f,
     0x1.83de78p-76f, 0x1.3ebd32p-40f, 0x1.f88aeep-53f, 0x1.057d66p-42f, 0.0f,
     0x1.09434cp-93f, 0x1.00e2e4p-95f, 0.0f, 0.0f, 0x1.7a2e14p-12f, 0.0f, 0.0f,
     0x1.39c8cp-69f, 0x1.8eb462p-46f, 0.0f, 0x1.e3ac7ap-13f, 0.0f, 0x1.3be49ep-63f,
     0x1.e6013ep-60f, 0x1.39602cp-119f, 0x1.6ab726p-91f, 0x1.2fb26cp-48f, 0.0f,
     0x1.e14096p-85f, 0.0f, 0x1.76eadap-108f, 0.0f, 0x1.0a6592p-91f, 0x1.fb0aacp-34f,
     0x1.7355bp-46f, 0.0f, 0.0f, 0x1.8c0a6cp-81f, 0x1.793228p-63f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d6057ep-96f, 0.0f, 0x1.163e7ap-71f, 0x1.0bd528p-19f,
     0x1.ffefdp-7f, 0x1.ecda62p-26f, 0x1.12d392p-123f, 0.0f, 0.0f, 0x1.37414ep-109f,
     0x1.b367acp-53f, 0.0f, 0x1.513054p-98f, 0x1.620a6cp-97f, 0.0f, 0x1.c4dea8p-14f,
     0.0f, 0x1.524f5ap-108f, 0x1.05c0acp-4f, 0.0f, 0x1.ae7128p-45f, 0x1.37d2acp-7f,
     0x1.47fc1ap-115f, 0.0f, 0x1.896bfep-56f, 0x1.4f2252p-103f, 0x1.83e116p-115f,
     0x1.ba89e4p-120f, 0x1.c725c4p-124f, 0x1.2d69a6p-56f, 0x1.1ff49ep-34f,
     0x1.ee7a76p-79f, 0.0f, 0x1.031796p-108f, 0x1.2c87acp-106f, 0x1.606eap-121f,
     0x1.3b49a4p-30f, 0.0f, 0.0f, 0x1.fef9c6p-4f, 0.0f, 0.0f, 0x1.cf90cep-61f, 0.0f,
     0x1.4a23dcp-16f, 0x1.25acaap-35f, 0x1.b1710ep-81f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.214c82p-58f, 0x1.2a33c6p-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8f6a6ap-102f, 0x1.1ce08ep-49f, 0.0f, 0x1.87e83ap-23f, 0x1.7e354cp-21f, 0.0f,
     0.0f, 0x1.70b29cp-6f, 0.0f, 0x1.466a76p-88f, 0.0f, 0.0f, 0.0f, 0x1.c2c2f6p-113f,
     0x1.73532cp-37f, 0x1.91ae28p-2f, 0.0f, 0x1.bbc48ep-56f, 0.0f, 0.0f, 0.0f,
     0x1.015fd6p-113f, 0.0f, 0x1.e5f42cp-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.652236p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7b313ep-43f, 0x1.6809a4p-44f,
     0x1.e44ff2p-109f, 0.0f, 0.0f, 0x1.47a522p-109f, 0.0f, 0.0f, 0x1.3ced4ap-10f,
     0.0f, 0x1.69b838p-61f, 0.0f, 0x1.384cfep-4f, 0x1.426996p-72f, 0.0f,
     0x1.bd9c64p-93f, 0x1.1aa936p-37f, 0.0f, 0x1.1f7a76p-81f, 0x1.041edcp-61f, 0.0f,
     0x1.df363cp-88f, 0x1.f37434p-20f, 0x1.681c4ep-9f, 0x1.da8338p-105f,
     0x1.343ea2p-18f, 0.0f, 0x1.814848p-18f, 0x1.3375fcp-61f, 0.0f, 0x1.bb8fe6p-16f,
     0.0f, 0.0f, 0x1.a5ee34p-1f, 0.0f, 0.0f, 0x1.daceb8p-11f, 0.0f, 0x1.a72152p-12f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f8d16ap-48f, 0x1.5ef36p-97f, 0x1.fcd14ep-46f,
     0.0f, 0.0f, 0.0f, 0x1.325468p-40f, 0.0f, 0.0f, 0.0f, 0x1.0362bp-60f,
     0x1.59c8e2p-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.55c8e8p-123f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.5d63p-60f, 0x1.5fdfp-85f, 0x1.9f497cp-97f, 0x1.b1f448p-29f,
     0x1.1110f4p-63f, 0.0f, 0.0f, 0.0f, 0x1.f6bc1ep-23f, 0x1.d54fcep-67f,
     0x1.cf938ap-87f, 0.0f, 0x1.e69c48p-95f, 0x1.da9854p-24f, 0x1.f199dep-125f,
     0x1.6eba6p-76f, 0x1.c9e8ccp-46f, 0x1.3af5a8p-108f, 0x1.c6b93p-59f, 0.0f,
     0x1.d29802p-27f, 0.0f, 0x1.cd207p-27f, 0x1.7f6974p-49f, 0x1.0ca494p-92f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.36081cp-6f, 0.0f, 0x1.0180b6p-60f, 0.0f, 0.0f, 0.0f,
     0x1.e912e6p-47f, 0x1.8474bcp-97f, 0x1.3ca736p-49f, 0x1.e74582p-124f, 0.0f,
     0x1.a94c1ap-30f, 0x1.f8cf2ap-25f, 0x1.1cb188p-33f, 0x1.ffe58ap-109f,
     0x1.8be612p-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9e5adep-27f, 0x1.ec4e52p-85f,
     0x1.c02e74p-88f, 0.0f, 0x1.2812a6p-102f, 0.0f, 0x1.0c480cp-74f, 0x1.8a791p-100f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4d99a4p-25f, 0x1.35834ap-53f,
     0x1.e0cd1ap-95f, 0x1.305afap-47f, 0x1.395c16p-68f, 0x1.2215ep-79f, 0.0f, 0.0f,
     0x1.5d8528p-110f, 0.0f, 0x1.822aacp-67f, 0x1.99ca1ap-125f, 0x1.e4143cp-112f,
     0x1.5113bp-78f, 0x1.ec6152p-21f, 0.0f, 0x1.84b3dap-48f, 0x1.412096p-59f,
     0x1.ebb18cp-41f, 0x1.30935p-49f, 0.0f, 0.0f, 0x1.54648ap-32f, 0x1.ae665ep-104f,
     0x1.e0ee16p-65f, 0x1.3cba1ep-60f, 0.0f, 0.0f, 0x1.eb7d04p-96f, 0.0f, 0.0f, 0.0f,
     0x1.ca2d02p-70f, 0.0f, 0x1.b42454p-58f, 0x1.2a5a2ap-104f, 0.0f, 0x1.7ec9dcp-28f,
     0.0f, 0.0f, 0x1.72fff2p-12f, 0x1.34684ap-16f, 0.0f, 0x1.91f078p-62f,
     0x1.5f9b2ap-102f, 0.0f, 0x1.6ee338p-26f, 0.0f, 0x1.517ea4p-53f, 0.0f,
     0x1.c5acbep-27f, 0x1.3ca672p-88f, 0x1.bb50cep-98f, 0.0f, 0x1.95fa36p-29f,
     0x1.fbf416p-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7445e4p-66f, 0x1.d50be6p-59f,
     0x1.b90656p-48f, 0.0f, 0.0f, 0x1.81a502p-66f, 0x1.8d7272p-35f, 0.0f,
     0x1.115bccp-6f, 0.0f, 0x1.26a7e8p-3f, 0x1.037e84p-106f, 0.0f, 0x1.8baecap-91f,
     0x1.73ee3ap-87f, 0x1.56b7a8p-38f, 0.0f, 0.0f, 0.0f, 0x1.5f728ap-46f, 0.0f, 0.0f,
     0x1.3315a6p-100f, 0x1.5fbce4p-85f, 0.0f, 0x1.80d542p-1f, 0.0f, 0x1.356878p-13f,
     0x1.61f6f6p-88f, 0.0f, 0.0f, 0x1.e443fp-38f, 0.0f, 0x1.0acb16p-10f,
     0x1.66af32p-106f, 0x1.8ad3dp-2f, 0x1.9bd298p-83f, 0.0f, 0.0f, 0.0f,
     0x1.a1cf74p-120f, 0x1.02d6ep-119f, 0x1.85a408p-3f, 0x1.bcc4a4p-109f, 0.0f, 0.0f,
     0x1.011b9ep-124f, 0x1.4f4e4ep-70f, 0.0f, 0x1.3f3b7cp-77f, 0.0f, 0x1.606e6ap-36f,
     0x1.7bbcaep-6f, 0x1.841c1ap-69f, 0.0f, 0x1.cac26p-125f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fed97ap-9f, 0.0f, 0x1.a85474p-37f, 0.0f, 0x1.800bbep-86f, 0.0f, 0.0f,
     0x1.33ec3cp-28f, 0.0f, 0x1.4ee186p-112f, 0.0f, 0x1.6b1aa8p-61f, 0x1.0da5fp-118f,
     0x1.766144p-31f, 0.0f, 0x1.67679ap-83f, 0.0f, 0x1.ff1b68p-60f, 0x1.a8fe6ep-46f,
     0x1.9b1998p-92f, 0.0f, 0.0f, 0x1.19f1ccp-40f, 0.0f, 0.0f, 0x1.d665ccp-24f,
     0x1.f6da0cp-6f, 0x1.5dfaa2p-120f, 0x1.eec54ep-92f, 0.0f, 0x1.ab681ep-125f,
     0x1.ee6cd8p-56f, 0.0f, 0.0f, 0.0f, 0x1.199c0cp-31f, 0x1.5a50dap-20f, 0.0f, 0.0f,
     0x1.27cbe6p-84f, 0.0f, 0x1.4bdb1ep-40f, 0x1.dcef78p-45f, 0.0f, 0x1.7156b8p-88f,
     0x1.c5ca52p-92f, 0.0f, 0x1.253b36p-95f, 0.0f, 0.0f, 0.0f, 0x1.9ed52ap-125f, 0.0f,
     0x1.4e7e2cp-62f, 0x1.09675p-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.851b7ap-48f,
     0x1.9d7cc4p-36f, 0x1.75903ep-64f, 0.0f, 0x1.a19184p-21f, 0.0f, 0x1.928124p-111f,
     0.0f, 0x1.8f96fp-62f, 0.0f, 0x1.457758p-100f, 0.0f, 0x1.e84e46p-49f,
     0x1.932a84p-100f, 0x1.2529c6p-102f, 0.0f, 0x1.842e0ep-62f, 0.0f,
     0x1.41a366p-108f, 0x1.2c6002p-69f, 0x1.4c545cp-61f, 0x1.fbd528p-28f, 0.0f, 0.0f,
     0.0f, 0x1.69d4dcp-114f, 0.0f, 0x1.65fc4cp-53f, 0.0f, 0x1.e57c2p-94f, 0.0f
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
            tmp1 = Sleef_finz_exp2f4_u10avx2128(tmp0);
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
    printf("Sleef_finz_exp2f4_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_exp2f4_u10avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
