/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_floorf1_purecfma.c --function Sleef_floorf1_purecfma \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 --bench \
 *     --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile float external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.e574dcp-78f, 0.0f, 0x1.9bdf14p-74f, 0.0f, 0.0f, 0.0f, 0x1.3bb8a8p-91f,
     0x1.2bb1b4p-126f, 0.0f, 0x1.49b4dep-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b1dde4p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cc4ce2p-12f, 0.0f,
     0x1.026108p-59f, 0x1.e35842p-1f, 0.0f, 0x1.56822cp-93f, 0x1.639014p-47f,
     0x1.c37574p-6f, 0x1.5c4c8ep-31f, 0x1.f6c616p-21f, 0.0f, 0.0f, 0x1.aa6806p-48f,
     0x1.5b0efep-38f, 0.0f, 0.0f, 0.0f, 0x1.b4f0ap-75f, 0x1.d9052cp-122f,
     0x1.28a702p-71f, 0.0f, 0.0f, 0x1.6a8f1ap-104f, 0.0f, 0x1.ddcep-103f, 0.0f, 0.0f,
     0x1.b72c8cp-106f, 0.0f, 0x1.51fbfep-16f, 0x1.81cc62p-6f, 0x1.18bf7ep-83f, 0.0f,
     0.0f, 0x1.e2660cp-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.757fbp-80f,
     0x1.aea364p-86f, 0x1.bbce52p-40f, 0.0f, 0.0f, 0x1.bdce62p-27f, 0x1.b7fd78p-120f,
     0x1.ffbad2p-76f, 0x1.8b15eep-30f, 0.0f, 0x1.a8b2ccp-62f, 0.0f, 0x1.af5c62p-1f,
     0.0f, 0.0f, 0x1.c65956p-71f, 0x1.afd9a2p-36f, 0.0f, 0.0f, 0x1.64e088p-23f, 0.0f,
     0x1.5e423ep-40f, 0x1.f09f44p-59f, 0.0f, 0x1.0f737ap-63f, 0.0f, 0x1.92fadep-116f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c67efp-27f, 0x1.e64e2ap-65f,
     0x1.997fc2p-124f, 0x1.0e95c2p-71f, 0.0f, 0x1.251fc8p-3f, 0x1.00d39ap-105f, 0.0f,
     0.0f, 0.0f, 0x1.2853f4p-59f, 0.0f, 0x1.b1dda4p-112f, 0.0f, 0x1.a01f5ep-52f,
     0x1.4d2d58p-124f, 0x1.4c0ca4p-62f, 0x1.13b53ap-49f, 0.0f, 0.0f, 0x1.4a736ap-86f,
     0.0f, 0x1.169b7p-6f, 0x1.c28502p-18f, 0.0f, 0.0f, 0.0f, 0x1.683412p-99f, 0.0f,
     0x1.9b5d42p-1f, 0.0f, 0x1.503902p-41f, 0x1.50e30cp-57f, 0x1.891df8p-34f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.df2fa4p-101f, 0x1.f199fcp-79f, 0.0f, 0.0f, 0x1.e0b374p-19f,
     0x1.b7c3bap-5f, 0.0f, 0x1.a0b21ep-33f, 0x1.86f2ap-89f, 0x1.a1f1b4p-62f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.bb2dc8p-36f, 0.0f, 0.0f, 0.0f, 0x1.6a6ec6p-50f,
     0x1.79cbf2p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c4dd18p-89f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f195dap-44f, 0x1.08889cp-60f, 0.0f, 0.0f, 0x1.773e42p-125f, 0.0f,
     0.0f, 0.0f, 0x1.75642cp-72f, 0x1.7029dp-94f, 0.0f, 0x1.fecb7cp-49f, 0.0f,
     0x1.f4f58cp-57f, 0x1.71e2f6p-49f, 0x1.6696fep-106f, 0x1.98e244p-23f, 0.0f,
     0x1.e741fcp-27f, 0x1.430fbcp-26f, 0x1.58ba38p-120f, 0.0f, 0x1.cb87c2p-70f, 0.0f,
     0x1.03f3dep-109f, 0x1.fe8114p-104f, 0x1.6c24dcp-25f, 0x1.91ace2p-93f,
     0x1.e2f036p-92f, 0.0f, 0x1.ef3a8p-113f, 0x1.5e063ap-69f, 0.0f, 0x1.0cc876p-5f,
     0.0f, 0x1.75f502p-28f, 0x1.2d11d4p-99f, 0x1.afecbap-76f, 0.0f, 0x1.498596p-5f,
     0x1.a88942p-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bcd6cap-41f, 0.0f, 0.0f,
     0x1.e28f76p-25f, 0x1.39cefep-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bc4d1p-38f, 0.0f,
     0x1.8d8754p-113f, 0x1.d5750ep-103f, 0x1.00e928p-78f, 0.0f, 0x1.4c476p-92f,
     0x1.754f54p-19f, 0.0f, 0x1.9878cap-75f, 0.0f, 0.0f, 0x1.183804p-125f,
     0x1.5c9dep-9f, 0x1.5330ep-19f, 0x1.c9ac94p-66f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d07ddp-32f, 0x1.24c01ep-20f, 0.0f, 0x1.28445cp-80f, 0.0f, 0x1.39ab3ap-119f,
     0x1.d777dcp-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d8ba8ap-90f, 0.0f, 0.0f, 0x1.8e5a5cp-115f, 0.0f, 0x1.2da4c6p-83f, 0.0f, 0.0f,
     0x1.8da0e2p-110f, 0.0f, 0x1.c919bep-82f, 0x1.f487e6p-120f, 0x1.3cede6p-57f, 0.0f,
     0.0f, 0.0f, 0x1.2f4cbap-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.70dacep-35f,
     0x1.b2f0c4p-94f, 0.0f, 0x1.06daf8p-94f, 0.0f, 0.0f, 0x1.76142ep-6f, 0.0f,
     0x1.306866p-85f, 0x1.868a5p-103f, 0x1.6d54c2p-55f, 0x1.de395ep-111f,
     0x1.dc2b8cp-50f, 0x1.f1c51p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9bbff2p-65f,
     0x1.09922ep-18f, 0.0f, 0x1.c2059ap-17f, 0x1.5ac678p-32f, 0x1.76f1d8p-53f,
     0x1.7531d6p-63f, 0.0f, 0x1.c03064p-58f, 0x1.f4f65p-23f, 0.0f, 0.0f,
     0x1.fe88dcp-121f, 0.0f, 0x1.900ca8p-115f, 0.0f, 0x1.59511ap-65f, 0x1.14b4ccp-87f,
     0x1.85c55ap-97f, 0x1.008e9p-90f, 0.0f, 0.0f, 0.0f, 0x1.b812fep-69f,
     0x1.4b0054p-43f, 0.0f, 0.0f, 0x1.82380ep-1f, 0.0f, 0x1.be587cp-101f,
     0x1.aa0d48p-67f, 0.0f, 0x1.928f34p-64f, 0.0f, 0.0f, 0x1.2e7b2p-30f,
     0x1.2d6d8ap-122f, 0x1.e307a4p-6f, 0.0f, 0.0f, 0x1.849fcap-8f, 0x1.1043e2p-101f,
     0x1.4d5918p-46f, 0x1.a8f302p-80f, 0.0f, 0x1.49e888p-65f, 0x1.5b15d8p-83f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.4d1d2ap-98f, 0x1.9340eap-55f, 0.0f, 0x1.aab552p-48f,
     0x1.7c5d62p-3f, 0.0f, 0x1.d3fed4p-39f, 0.0f, 0.0f, 0x1.000e4p-72f,
     0x1.9138ap-16f, 0.0f, 0x1.5cee86p-30f, 0x1.dbc6dep-57f, 0.0f, 0.0f,
     0x1.bec95p-93f, 0x1.67d70ap-92f, 0x1.3ab652p-15f, 0.0f, 0x1.313ad6p-34f,
     0x1.ec52fcp-72f, 0x1.d0ab9p-58f, 0x1.144534p-83f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5f6b3ap-69f, 0x1.31a006p-116f, 0.0f, 0x1.001b12p-2f, 0x1.865ff2p-99f,
     0x1.499f28p-74f, 0x1.a78526p-101f, 0.0f, 0x1.a4a232p-65f, 0.0f, 0x1.75be76p-6f,
     0.0f, 0.0f, 0.0f, 0x1.3591e2p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5392eap-106f,
     0.0f, 0x1.d434b2p-101f, 0.0f, 0.0f, 0.0f, 0x1.14a21cp-35f, 0x1.dbd37p-56f, 0.0f,
     0x1.5f3902p-64f, 0x1.c88994p-3f, 0x1.961cep-25f, 0.0f, 0x1.63bea2p-9f, 0.0f,
     0.0f, 0x1.e46654p-64f, 0x1.e4d04cp-120f, 0x1.a09e06p-85f, 0.0f, 0x1.97b4cap-75f,
     0.0f, 0x1.07bacep-7f, 0x1.5b7ffap-31f, 0.0f, 0x1.d1783p-79f, 0x1.69f504p-75f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.036deep-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e0edep-90f,
     0x1.8d5a86p-95f, 0x1.a332a8p-23f, 0.0f, 0.0f, 0.0f, 0x1.986056p-114f,
     0x1.207446p-24f, 0.0f, 0x1.d83cc8p-107f, 0x1.9440d8p-29f, 0x1.c50182p-58f,
     0x1.6f8fe6p-104f, 0x1.288572p-59f, 0x1.bb1be2p-97f, 0x1.6fa40ap-62f, 0.0f,
     0x1.85d4fap-86f, 0.0f, 0x1.a94322p-99f, 0x1.a74896p-25f, 0.0f, 0x1.e28b6p-121f,
     0x1.c27d1ep-97f, 0.0f, 0.0f, 0x1.edb646p-53f, 0.0f, 0.0f, 0x1.f6fda8p-107f,
     0x1.94bd6ap-58f, 0.0f, 0x1.78997cp-14f, 0.0f, 0.0f, 0x1.a20f9cp-12f,
     0x1.8dd63p-33f, 0.0f, 0x1.8a4674p-90f, 0x1.900296p-67f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.20ca28p-17f, 0x1.24aacp-66f, 0x1.39dcb2p-56f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.2c76b6p-54f, 0x1.cbd286p-63f, 0.0f, 0x1.30daaap-90f,
     0x1.85ae4ap-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.fb4424p-100f, 0.0f, 0x1.ced55p-31f, 0x1.9a8998p-39f, 0.0f, 0.0f,
     0.0f, 0x1.c1b05p-117f, 0x1.f9314p-3f, 0x1.7463d6p-79f, 0x1.a6704ep-5f, 0.0f,
     0.0f, 0.0f, 0x1.9cc74cp-116f, 0x1.9761bep-32f, 0x1.f72714p-41f, 0.0f, 0.0f,
     0x1.6f57f6p-81f, 0x1.bdf112p-40f, 0.0f, 0.0f, 0x1.8432b6p-39f, 0x1.5cab62p-49f,
     0x1.387f2ep-55f, 0x1.2da1fcp-40f, 0.0f, 0x1.8c6b04p-12f, 0x1.807ca2p-49f,
     0x1.bcb93ep-99f, 0x1.81a12ep-29f, 0.0f, 0.0f, 0x1.7418cap-119f, 0x1.a770c2p-51f,
     0.0f, 0.0f, 0x1.8d5c6cp-81f, 0.0f, 0.0f, 0.0f, 0x1.469a54p-76f, 0.0f,
     0x1.858e66p-122f, 0.0f, 0.0f, 0x1.9dd45ep-6f, 0x1.6f4adap-43f, 0x1.08bc1p-125f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.4b56a2p-29f, 0x1.f39d3p-109f, 0x1.ae2bep-79f,
     0x1.9d625ep-34f, 0x1.f237b4p-51f, 0.0f, 0x1.530c58p-90f, 0x1.d1eebp-17f,
     0x1.343e6cp-80f, 0.0f, 0.0f, 0.0f, 0x1.51555ap-62f, 0x1.f85faep-30f, 0.0f,
     0x1.96e1b2p-118f, 0.0f, 0x1.f64678p-41f, 0x1.ec0d8p-93f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1a03fp-81f, 0x1.1850fcp-30f, 0.0f, 0.0f, 0x1.363e42p-29f, 0.0f,
     0x1.f4a216p-18f, 0.0f, 0.0f, 0x1.bb1c0ap-11f, 0x1.e24866p-121f, 0x1.aed96cp-41f,
     0x1.563342p-93f, 0.0f, 0.0f, 0x1.946558p-99f, 0.0f, 0.0f, 0.0f, 0x1.a97096p-54f,
     0x1.0602aep-10f, 0x1.87999ap-110f, 0.0f, 0.0f, 0x1.f74d38p-111f, 0.0f, 0.0f,
     0x1.c6c574p-65f, 0.0f, 0.0f, 0x1.3e10dap-43f, 0.0f, 0x1.913d6ap-110f,
     0x1.10b392p-101f, 0x1.1ed2a6p-10f, 0x1.f3b3ap-3f, 0x1.e7ff24p-66f,
     0x1.170cfcp-30f, 0x1.78984cp-107f, 0.0f, 0x1.679d38p-18f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.43889ep-45f, 0x1.cbb60cp-6f, 0x1.30a304p-19f, 0.0f, 0.0f, 0x1.4a6dd6p-50f,
     0.0f, 0x1.81c18cp-96f, 0.0f, 0x1.ccc0aap-100f, 0.0f, 0.0f, 0.0f, 0x1.993ceep-87f,
     0.0f, 0x1.aeecep-73f, 0x1.ad8e26p-52f, 0x1.f12bccp-65f, 0x1.db6aep-97f,
     0x1.3b3bep-123f, 0x1.dde0ccp-95f, 0x1.44780ep-64f, 0x1.6d20e8p-82f,
     0x1.25e038p-41f, 0x1.db549ap-51f, 0x1.c96276p-3f, 0x1.bc8a0cp-22f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d0b82cp-122f, 0x1.480bc8p-92f, 0x1.5646e2p-58f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.46c15ep-6f, 0.0f, 0x1.593edap-70f, 0.0f, 0x1.cc5ceap-119f,
     0x1.33415p-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.06bee4p-53f, 0.0f, 0.0f,
     0x1.f356f4p-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c667c4p-21f, 0x1.b4d89ap-11f,
     0x1.f85a5ap-120f, 0.0f, 0x1.6f2d02p-75f, 0x1.83e7eap-106f, 0.0f, 0x1.d096fap-91f,
     0x1.ca4528p-108f, 0.0f, 0x1.a0509p-22f, 0x1.bab296p-54f, 0.0f, 0.0f, 0.0f,
     0x1.fafb4p-47f, 0.0f, 0x1.aa2342p-23f, 0.0f, 0.0f, 0x1.f34d1p-59f,
     0x1.30dedp-123f, 0x1.ccbb0ap-72f, 0.0f, 0x1.de0e78p-14f, 0.0f, 0x1.be0034p-71f,
     0.0f, 0.0f, 0.0f, 0x1.9a91d4p-38f, 0x1.04f44p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.250ceap-107f, 0x1.86574ap-8f, 0x1.33b216p-35f, 0x1.25af18p-12f,
     0x1.0bcfap-92f, 0x1.300d4ap-17f, 0x1.b12f46p-25f, 0x1.5ac7ccp-98f,
     0x1.d4f1dcp-94f, 0x1.f23602p-123f, 0x1.b50a12p-76f, 0.0f, 0x1.70cc32p-55f,
     0x1.34dd04p-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.59449ep-10f,
     0x1.839956p-92f, 0.0f, 0.0f, 0x1.5dbda2p-121f, 0.0f, 0.0f, 0.0f, 0x1.f367f6p-28f,
     0.0f, 0x1.80f05p-31f, 0.0f, 0x1.c8e77ep-91f, 0x1.3dfceep-25f, 0x1.03824ap-37f,
     0x1.6c9c5p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b8ced8p-86f, 0x1.a9ed78p-36f,
     0x1.2fb084p-16f, 0.0f, 0x1.8bea02p-22f, 0x1.780d58p-61f, 0.0f, 0x1.6d9cfcp-49f,
     0.0f, 0x1.2e006ep-9f, 0x1.6019c8p-3f, 0x1.f5a8acp-12f, 0.0f, 0.0f, 0.0f,
     0x1.3a0e5ep-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b09f6p-31f, 0x1.b8d9aep-67f, 0.0f,
     0x1.db8afp-18f, 0x1.8e79bcp-8f, 0x1.ef5558p-38f, 0.0f, 0x1.de2a94p-52f, 0.0f,
     0.0f, 0x1.230d9ap-115f, 0.0f, 0.0f, 0x1.b7a5b6p-15f, 0x1.f8dfe6p-39f,
     0x1.d189cap-13f, 0x1.df0de4p-29f, 0.0f, 0x1.61e538p-66f, 0.0f, 0x1.56fea6p-85f,
     0.0f, 0.0f, 0.0f, 0x1.dd7df2p-115f, 0x1.46afe6p-122f, 0.0f, 0.0f,
     0x1.cc1fbcp-76f, 0x1.f9c778p-65f, 0.0f, 0.0f, 0.0f, 0x1.463368p-49f, 0.0f,
     0x1.8ea97ap-89f, 0x1.2acc9ap-93f, 0x1.bdcbd4p-55f, 0.0f, 0.0f, 0x1.a34074p-84f,
     0.0f, 0.0f, 0.0f, 0x1.173dbep-64f, 0.0f, 0x1.418beap-38f, 0.0f, 0x1.a24c1ep-58f,
     0.0f, 0.0f, 0x1.0d354ep-77f, 0x1.18d37ap-71f, 0.0f, 0x1.59b5c2p-83f,
     0x1.bc42b4p-10f, 0.0f, 0x1.87bcf2p-78f, 0.0f, 0.0f, 0x1.8080d4p-124f,
     0x1.b8aa1p-114f, 0.0f, 0x1.6b64c4p-48f, 0.0f, 0.0f, 0x1.727d4cp-14f,
     0x1.9e7b92p-38f, 0x1.b2deb6p-34f, 0.0f, 0x1.f55a82p-118f, 0.0f, 0.0f,
     0x1.cc8cp-122f, 0x1.f56c8ep-19f, 0.0f, 0x1.7f2716p-93f, 0.0f, 0.0f,
     0x1.32e37p-52f, 0x1.bc1dc2p-17f, 0.0f, 0x1.4954aep-82f, 0x1.60f6f4p-46f,
     0x1.7ce578p-25f, 0x1.027ddcp-90f, 0x1.f9a84ep-114f, 0x1.299daap-113f,
     0x1.2323bep-107f, 0x1.82a05p-111f, 0x1.84f064p-57f, 0x1.18a2e4p-71f,
     0x1.361f38p-94f, 0x1.47ab8ep-43f, 0.0f, 0.0f, 0x1.142dbp-104f, 0x1.bdbb58p-52f,
     0x1.bf14f6p-121f, 0.0f, 0.0f, 0x1.8888bp-65f, 0.0f, 0.0f, 0.0f, 0x1.4eee86p-93f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.5f7e76p-55f, 0x1.986f08p-121f, 0.0f, 0.0f, 0.0f,
     0x1.b8df4ep-43f, 0x1.a0c504p-35f, 0x1.4e46c2p-92f, 0.0f, 0x1.1dfab6p-60f,
     0x1.c770bap-5f, 0x1.c2c14cp-48f, 0.0f, 0.0f, 0x1.4efe58p-36f, 0x1.87da46p-68f,
     0.0f, 0x1.d6508ap-62f, 0x1.68fe34p-84f, 0.0f, 0.0f, 0x1.054312p-76f,
     0x1.71e6eep-11f, 0x1.c1965p-49f, 0x1.d47ebap-40f, 0x1.cddc6p-125f, 0.0f, 0.0f,
     0x1.0b55f8p-103f, 0.0f, 0.0f, 0.0f, 0x1.6403p-54f, 0.0f, 0x1.b96db4p-66f, 0.0f,
     0.0f, 0x1.a6f89p-126f, 0.0f, 0x1.900b7ap-76f, 0x1.b648cp-22f, 0x1.3b192ap-113f,
     0.0f, 0x1.996aecp-83f, 0.0f, 0x1.0ed98ep-3f, 0.0f, 0x1.d4d5fep-19f,
     0x1.0365f8p-3f, 0.0f, 0x1.5a6212p-11f, 0.0f, 0.0f, 0x1.a709b2p-74f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6a61cap-88f, 0x1.a4f612p-69f, 0x1.28f728p-5f,
     0x1.7c2e84p-40f, 0.0f, 0x1.0ff23ep-60f, 0.0f, 0x1.b0f14ep-84f, 0x1.4ab3ep-77f,
     0x1.451fe4p-90f, 0.0f, 0x1.07423ap-90f, 0x1.1fa25ap-38f, 0x1.3cf3ep-64f,
     0x1.fda8fp-20f, 0x1.67bb0cp-15f, 0x1.59137cp-59f, 0x1.b601e8p-15f,
     0x1.631882p-67f, 0x1.e1544ap-109f, 0.0f, 0x1.c3e7c4p-58f, 0.0f, 0x1.4b8ff2p-4f,
     0.0f, 0x1.71cb3ep-29f, 0.0f, 0.0f, 0x1.12b2a8p-40f, 0.0f, 0.0f, 0x1.40b73cp-40f,
     0.0f, 0x1.8e3e4cp-120f, 0x1.753b64p-126f, 0.0f, 0.0f, 0x1.1b5f9ap-110f,
     0x1.e00f8ep-114f, 0x1.56f542p-103f, 0.0f, 0.0f, 0x1.7c6c9cp-97f
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
            int32_t tmp3;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_floorf1_purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = bench_acc + tmp1;
            bench_acc = tmp2;
            tmp3 = i + INT32_C(1);
            i = tmp3;
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
    printf("Sleef_floorf1_purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_floorf1_purecfma bench acc %a\n", global_bench_acc);
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
