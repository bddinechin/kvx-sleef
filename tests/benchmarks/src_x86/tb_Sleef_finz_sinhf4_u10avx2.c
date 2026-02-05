/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sinhf4_u10avx2128.c --function \
 *     Sleef_finz_sinhf4_u10avx2128 --headers sleef.h,ml_support_lib.h \
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
     0x1.8419cap-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f84b6ep-48f, 0x1.d44348p-98f,
     0.0f, 0.0f, 0x1.64802ap-117f, 0.0f, 0.0f, 0.0f, 0x1.0d5e8cp-6f, 0x1.8b60ccp-5f,
     0x1.89c1dap-47f, 0.0f, 0x1.f0613ep-104f, 0.0f, 0.0f, 0x1.905ddp-119f, 0.0f,
     0x1.3362f4p-3f, 0.0f, 0x1.a8d04ap-111f, 0x1.436b7p-34f, 0x1.9694d4p-88f,
     0x1.56551cp-7f, 0x1.e71ff8p-48f, 0x1.d9d34p-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c5b96cp-25f, 0x1.9de57p-62f, 0x1.f19b9p-22f, 0x1.2e307ap-16f, 0.0f,
     0x1.44c224p-103f, 0.0f, 0.0f, 0x1.f0aedap-53f, 0x1.7737e8p-47f, 0x1.dda9d6p-78f,
     0.0f, 0x1.03dbd8p-112f, 0.0f, 0x1.fc1048p-47f, 0x1.2b79f4p-64f, 0x1.0e8304p-26f,
     0.0f, 0x1p0f, 0x1.ab5a8cp-68f, 0x1.6fdc9cp-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.33dae2p-50f, 0.0f, 0x1.0293a8p-10f, 0x1.fc17c2p-17f,
     0x1.f82162p-25f, 0.0f, 0x1.ad4c06p-116f, 0x1.1ddc72p-100f, 0x1.9fc3b4p-64f,
     0x1.a0991cp-81f, 0.0f, 0x1.59d5d6p-20f, 0.0f, 0.0f, 0x1.96d27ap-101f,
     0x1.f4acccp-13f, 0.0f, 0x1.18c34ap-66f, 0.0f, 0x1.5faa0cp-103f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1p0f, 0x1.1fb17p-58f, 0.0f, 0.0f, 0x1.833d58p-14f, 0.0f,
     0x1.642602p-80f, 0x1.d7ffc2p-74f, 0.0f, 0.0f, 0.0f, 0x1.719c14p-68f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.be9224p-38f, 0.0f, 0.0f, 0x1.8bf3dep-9f, 0.0f, 0x1.a4bfb6p-10f,
     0x1.f71ff2p-89f, 0x1.f2cc04p-1f, 0.0f, 0x1.342ef2p-110f, 0x1.371144p-61f,
     0x1.62b856p-84f, 0x1.13864ep-69f, 0x1.20a8d6p-88f, 0.0f, 0.0f, 0x1.c24f56p-75f,
     0x1.13e326p-6f, 0.0f, 0.0f, 0.0f, 0x1.428c58p-7f, 0.0f, 0x1.9ba59ep-64f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a7960ep-52f, 0x1.bf6be2p-2f, 0x1.e64abp-116f,
     0.0f, 0x1.b1808ep-93f, 0x1.864044p-34f, 0x1.bc73b4p-117f, 0x1.710ef2p-35f,
     0x1.b39806p-64f, 0x1.ccfc5cp-92f, 0.0f, 0x1.0c326p-72f, 0x1.a8adcp-113f,
     0x1.26990cp-103f, 0.0f, 0x1.b725a4p-20f, 0.0f, 0x1.5545f6p-65f, 0x1.6c0378p-46f,
     0.0f, 0.0f, 0.0f, 0x1.01644ap-73f, 0x1.84c8d8p-115f, 0.0f, 0.0f, 0x1.1a1e04p-24f,
     0.0f, 0.0f, 0x1.afb356p-98f, 0.0f, 0.0f, 0x1.a34248p-95f, 0.0f, 0.0f,
     0x1.b418bcp-91f, 0.0f, 0.0f, 0x1.9ab3bcp-69f, 0x1.0cbbbap-3f, 0.0f,
     0x1.900a04p-70f, 0x1.46c1acp-7f, 0x1.ab391ap-76f, 0.0f, 0x1.3c6ff2p-45f,
     0x1.8f718cp-10f, 0x1.60b0c2p-16f, 0x1.9c3268p-36f, 0.0f, 0.0f, 0x1.c8b172p-73f,
     0x1.430f36p-7f, 0.0f, 0x1.b3f234p-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bc666ep-81f, 0.0f, 0x1.665d56p-3f, 0x1.499968p-113f, 0x1.30a032p-28f,
     0x1.42ed94p-43f, 0x1.e292fp-98f, 0.0f, 0x1.96e09ep-65f, 0.0f, 0.0f, 0.0f,
     0x1.d90c5ap-107f, 0.0f, 0.0f, 0x1.614218p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.150c64p-65f, 0x1.3724dp-14f, 0x1.feb678p-80f, 0.0f, 0.0f, 0.0f,
     0x1.53b1f4p-71f, 0x1.880bb8p-107f, 0.0f, 0.0f, 0x1.5a14f8p-13f, 0.0f,
     0x1.1329b8p-52f, 0x1.b0a36cp-12f, 0x1.e1269ap-49f, 0.0f, 0x1.405e68p-28f,
     0x1.146582p-77f, 0x1.a7b968p-103f, 0x1.2dbe32p-84f, 0x1.7e7306p-77f, 0.0f,
     0x1.bb9598p-7f, 0.0f, 0x1.8b9916p-57f, 0.0f, 0x1.9e07d4p-44f, 0x1.5e5366p-46f,
     0x1.69ce16p-55f, 0x1.309f8ap-98f, 0.0f, 0.0f, 0.0f, 0x1.f8e61cp-104f,
     0x1.443f8p-41f, 0.0f, 0x1.5097p-99f, 0.0f, 0.0f, 0x1.ab7d0ep-16f,
     0x1.364c8ap-106f, 0x1.2b7da2p-61f, 0x1.57050ep-58f, 0x1.dcc5a2p-82f,
     0x1.3e310cp-28f, 0.0f, 0x1.8c036ap-69f, 0x1.955886p-96f, 0.0f, 0x1.194276p-29f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a4e66ap-7f, 0x1.500302p-73f, 0.0f, 0x1p0f, 0.0f,
     0.0f, 0x1.91f55p-29f, 0.0f, 0x1.638f68p-18f, 0x1.5606fp-80f, 0.0f, 0.0f,
     0x1.7c0ee4p-50f, 0x1.6937bap-106f, 0x1.cc141cp-52f, 0x1.9a7af4p-78f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cea26ep-46f, 0x1.90c6f2p-4f, 0x1.4ff906p-66f,
     0x1.6e4a36p-22f, 0x1.6f71f6p-6f, 0.0f, 0.0f, 0x1.605bb4p-57f, 0.0f,
     0x1.8b5d9p-61f, 0.0f, 0x1.03ec18p-16f, 0.0f, 0.0f, 0x1.4caaf6p-6f, 0.0f,
     0x1.5c031cp-108f, 0x1.6e3b9cp-43f, 0.0f, 0x1.9f30d4p-100f, 0.0f, 0.0f,
     0x1.44fd34p-97f, 0.0f, 0x1.8b9fep-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9b6078p-103f, 0x1.e09886p-99f, 0.0f, 0.0f, 0x1.a93bf8p-118f,
     0x1.f708bcp-115f, 0.0f, 0x1.3a0d48p-63f, 0x1.8ddfb2p-66f, 0.0f, 0x1.e99a0ep-103f,
     0x1.049c3p-116f, 0x1.c7d9acp-100f, 0x1.28c258p-85f, 0x1.b30e2ep-68f,
     0x1.e35ccep-110f, 0.0f, 0.0f, 0x1.4ab9ap-16f, 0x1.e39552p-87f, 0x1.289e02p-110f,
     0.0f, 0x1.144bf6p-117f, 0.0f, 0x1.c4dcaap-82f, 0.0f, 0x1.ac46fp-28f,
     0x1.7c98b6p-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8b99e4p-73f, 0x1.f3ee86p-96f,
     0.0f, 0x1.b8dff6p-125f, 0x1.fadd36p-79f, 0x1.f23ea8p-85f, 0.0f, 0.0f, 0.0f,
     0x1.6e53bp-42f, 0.0f, 0x1.ab4bb2p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c038cep-110f,
     0.0f, 0.0f, 0x1.1d0e5ep-2f, 0x1.79de5p-19f, 0x1.c80b3ep-33f, 0x1.d0421p-15f,
     0.0f, 0.0f, 0x1.20c25cp-1f, 0x1.07c0b6p-53f, 0x1.f57eb2p-75f, 0x1.7b26d6p-9f,
     0.0f, 0x1.c37b44p-120f, 0.0f, 0x1.a22e5p-58f, 0.0f, 0x1.e4bc74p-7f,
     0x1.045c4ep-14f, 0.0f, 0x1.e57db6p-125f, 0x1.aedbd8p-14f, 0.0f, 0.0f, 0.0f,
     0x1.0b1b26p-104f, 0x1.e03cc4p-98f, 0.0f, 0.0f, 0.0f, 0x1.1c94e4p-8f,
     0x1.5fbb5cp-24f, 0.0f, 0.0f, 0x1.97e992p-119f, 0x1.949996p-86f, 0x1.60c00ep-119f,
     0x1.8ee926p-51f, 0x1.672c36p-45f, 0x1.ca25cap-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.faddcep-44f, 0.0f, 0x1.31efcp-45f, 0x1.fe1094p-14f, 0.0f, 0.0f,
     0x1.85631cp-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.70bbfep-69f, 0.0f, 0.0f,
     0x1.acc806p-38f, 0x1.2d030cp-26f, 0.0f, 0.0f, 0x1.ec9bdep-29f, 0.0f,
     0x1.0e2dbcp-11f, 0.0f, 0.0f, 0x1.f90062p-82f, 0x1p0f, 0x1.a02b7ep-40f,
     0x1.5d698cp-30f, 0x1.49ad0ep-16f, 0.0f, 0x1.1cd86p-32f, 0x1.18594ap-115f, 0.0f,
     0x1.b441fap-79f, 0.0f, 0.0f, 0x1.ad34e8p-119f, 0x1.f22f66p-25f, 0.0f, 0.0f,
     0x1.3354dep-82f, 0.0f, 0.0f, 0x1.f3d428p-11f, 0.0f, 0x1.a39bbap-28f,
     0x1.9bf25ap-90f, 0.0f, 0x1.774752p-111f, 0.0f, 0x1.6a26p-107f, 0x1.007c5p-15f,
     0.0f, 0.0f, 0.0f, 0x1.58132ep-6f, 0.0f, 0.0f, 0x1.23502ap-81f, 0x1.4214d6p-27f,
     0x1.2ba6acp-11f, 0x1.3bd2cep-24f, 0.0f, 0.0f, 0.0f, 0x1.1c031p-77f, 0.0f, 0.0f,
     0.0f, 0x1.f3b7dap-58f, 0x1.87f016p-23f, 0x1.0d37fp-40f, 0x1.cb1adep-31f,
     0x1.ca2812p-64f, 0.0f, 0x1.fee33p-93f, 0.0f, 0x1.a7d37ap-24f, 0x1.a76be2p-24f,
     0.0f, 0.0f, 0x1.7664bep-116f, 0x1.2a857p-101f, 0.0f, 0x1.1c4c44p-121f, 0.0f,
     0x1.0b9a1ap-15f, 0x1.278924p-125f, 0x1.2595dp-110f, 0x1.770c2cp-82f,
     0x1.88e5eep-20f, 0x1.d3ddccp-27f, 0x1.c69214p-113f, 0.0f, 0x1.504786p-47f,
     0x1.e3c7fp-15f, 0x1.000378p-82f, 0x1.b251dp-17f, 0x1.2ab1d6p-33f,
     0x1.056174p-62f, 0x1.674df2p-13f, 0.0f, 0.0f, 0x1.1d84c6p-83f, 0x1.b90774p-95f,
     0x1.64301cp-38f, 0x1.0d55dp-65f, 0.0f, 0x1.9890cep-21f, 0x1.1cdde6p-14f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.787ca8p-34f, 0.0f, 0.0f, 0x1.686fd6p-93f,
     0x1.00273ap-103f, 0.0f, 0.0f, 0x1.62b70cp-104f, 0.0f, 0x1.7d4726p-19f, 0.0f,
     0.0f, 0x1.75cad8p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bf8fdap-41f, 0x1.996664p-76f,
     0x1.7414f4p-125f, 0x1.58b8a4p-4f, 0.0f, 0x1.bbea5p-79f, 0x1.0668dcp-41f,
     0x1.c88e8p-73f, 0x1.7fcf3ap-51f, 0x1.93103ep-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a985c2p-82f, 0x1.00be18p-4f, 0x1.b9a5dap-117f, 0x1.7863f8p-81f,
     0x1.98775ap-31f, 0x1.04869ep-71f, 0.0f, 0x1.33d068p-94f, 0.0f, 0x1.bed43p-54f,
     0.0f, 0.0f, 0x1.117328p-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c04d7p-69f, 0x1.055652p-113f, 0.0f, 0.0f, 0x1.f876b4p-72f, 0x1.922d3p-98f,
     0.0f, 0.0f, 0x1.00c1bep-72f, 0x1.4be75ap-66f, 0x1.f934dap-30f, 0x1.09f906p-88f,
     0x1.364c1cp-107f, 0.0f, 0x1.34733cp-63f, 0x1.05b2fep-101f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.2c05bap-116f, 0x1.365fdcp-51f, 0x1.33ec2cp-13f,
     0x1.f1a11p-17f, 0x1.fa0aaap-14f, 0x1.ea5156p-110f, 0.0f, 0x1.21179p-10f,
     0x1.830ab4p-1f, 0.0f, 0x1.f45dcp-48f, 0x1.96b666p-87f, 0.0f, 0.0f,
     0x1.b77cbcp-93f, 0x1.3d038cp-79f, 0x1.eecf5ap-20f, 0x1.fe1aa6p-56f, 0.0f,
     0x1.23cb0cp-120f, 0x1.bea198p-115f, 0x1.ee846cp-93f, 0x1.2a4286p-70f,
     0x1.778716p-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.711a76p-77f, 0x1.3a798ap-111f,
     0x1.ba8b4ep-25f, 0.0f, 0x1.51101p-61f, 0.0f, 0.0f, 0x1.994448p-16f,
     0x1.b258d8p-59f, 0x1.296478p-118f, 0x1.04f70cp-22f, 0.0f, 0.0f, 0.0f,
     0x1.53727p-2f, 0.0f, 0.0f, 0.0f, 0x1.35f944p-102f, 0x1.6c7adap-111f,
     0x1.de12aep-15f, 0x1.501deep-107f, 0x1.738156p-8f, 0.0f, 0x1.9439e8p-75f,
     0x1.1c5faep-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dcc3a4p-44f, 0x1.8e6892p-102f,
     0x1.1e6a96p-52f, 0.0f, 0.0f, 0x1.4dd376p-14f, 0x1.f9588ap-58f, 0.0f, 0.0f,
     0x1.9086c6p-58f, 0x1.15178ap-116f, 0x1.bf015cp-102f, 0.0f, 0.0f, 0.0f,
     0x1.9a18eap-30f, 0.0f, 0x1.05abfep-58f, 0.0f, 0x1.1714aep-110f, 0.0f,
     0x1.945eccp-21f, 0x1.f4d39ep-76f, 0.0f, 0.0f, 0x1.f0c822p-47f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.580994p-103f, 0x1.5f6efap-9f, 0.0f, 0.0f, 0x1.3ca02p-49f, 0.0f, 0.0f,
     0.0f, 0x1.17b566p-74f, 0.0f, 0x1.9c12d8p-41f, 0x1.36e2bap-80f, 0x1.3338b2p-67f,
     0x1.b9fe5ep-43f, 0x1.db1048p-112f, 0.0f, 0.0f, 0x1.76200ep-102f, 0x1.c00912p-20f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.894ba8p-41f, 0x1.2b4c9ep-111f,
     0x1.651af6p-62f, 0x1.a9c016p-64f, 0.0f, 0x1.91cf6ep-3f, 0x1.92f684p-5f, 0.0f,
     0.0f, 0x1.8491cep-112f, 0.0f, 0.0f, 0x1.8c11dp-69f, 0.0f, 0.0f, 0x1.2a46b4p-119f,
     0x1.2d1aa6p-118f, 0.0f, 0.0f, 0.0f, 0x1.cb0426p-109f, 0x1.babb82p-42f, 0.0f,
     0.0f, 0x1.1cd2aap-33f, 0.0f, 0x1.94ab44p-52f, 0x1.b0e826p-105f, 0x1.bf3cfcp-16f,
     0.0f, 0x1.6500f8p-16f, 0x1.3a1004p-56f, 0x1.3d2fccp-70f, 0.0f, 0.0f,
     0x1.e7d8bep-73f, 0.0f, 0x1.e7aa18p-79f, 0x1.573d0ep-25f, 0.0f, 0x1p0f, 0.0f,
     0.0f, 0x1.48dfc4p-125f, 0x1.15fcbp-118f, 0x1.2084aap-60f, 0x1.196a34p-40f, 0.0f,
     0.0f, 0.0f, 0x1.de39b4p-121f, 0x1.009cecp-79f, 0x1.956b72p-26f, 0.0f, 0.0f,
     0x1.0e9414p-31f, 0x1.779a6ap-3f, 0x1.104f8ep-35f, 0x1.802f2cp-49f,
     0x1.ee067ap-99f, 0x1.4de5d2p-86f, 0x1.a85668p-39f, 0x1.028e5ap-47f,
     0x1.9f1feep-16f, 0x1.a66924p-112f, 0x1.6960e6p-26f, 0.0f, 0x1.52c6dap-82f, 0.0f,
     0.0f, 0x1.c022d6p-64f, 0x1.a42aaep-33f, 0.0f, 0x1.3df46ap-118f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ba229cp-118f, 0x1.ef532p-98f, 0x1.14b41p-95f,
     0x1.8978a6p-116f, 0x1.bbe356p-62f, 0.0f, 0.0f, 0.0f, 0x1.ea7dc8p-126f,
     0x1.a15ddep-54f, 0x1.3e40a2p-92f, 0x1.0ff8dp-69f, 0.0f, 0x1.cb45fep-123f, 0.0f,
     0x1.134d42p-123f, 0x1.15e4c2p-79f, 0x1.5ab4f8p-122f, 0x1.f0f42p-79f, 0.0f,
     0x1.82bd48p-24f, 0x1.4fbadep-74f, 0x1p0f, 0x1.bf1e5ap-38f, 0.0f, 0x1.8cb4fep-92f,
     0x1.67b716p-96f, 0x1.54e744p-114f, 0x1.85c7f6p-5f, 0.0f, 0x1.b91cfap-47f,
     0x1.dd40cp-13f, 0.0f, 0.0f, 0x1.996642p-19f, 0.0f, 0.0f, 0x1.ddd08cp-48f,
     0x1.ef98c2p-61f, 0x1.28f6c6p-18f, 0.0f, 0x1.36751p-22f, 0.0f, 0.0f,
     0x1.5eb406p-84f, 0x1.2b882p-76f, 0x1.f6cb7ap-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.7f6be2p-50f, 0.0f, 0.0f, 0.0f, 0x1.2ae31p-123f, 0x1.816afap-106f, 0.0f,
     0x1.c7b4c4p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1a373ep-92f,
     0x1.ed2348p-55f, 0.0f, 0x1.d2785ap-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.24b8fcp-59f,
     0x1.aa60d2p-103f, 0.0f, 0x1.da5bb6p-117f, 0.0f, 0.0f, 0x1.6655dep-35f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fd9358p-108f, 0x1.00aaacp-72f, 0.0f,
     0.0f, 0.0f, 0x1.dc9a6cp-37f, 0.0f, 0.0f, 0x1.d5814ap-39f, 0x1.9afb76p-35f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3203dcp-66f, 0x1.be0664p-69f, 0x1.53f4bcp-45f, 0.0f,
     0.0f, 0x1.d063cp-54f, 0.0f, 0x1.201ed6p-3f, 0x1p0f, 0.0f, 0.0f, 0x1.c57506p-109f,
     0.0f, 0x1.dbd668p-2f, 0.0f, 0x1.5ba97cp-47f, 0x1.e543fap-34f, 0x1.ff904cp-126f,
     0.0f, 0.0f, 0x1.b6b30ep-45f, 0.0f, 0x1.b820d8p-125f, 0x1.8da4f8p-23f, 0.0f,
     0x1.e41972p-110f, 0x1.790808p-40f, 0x1.8662bcp-2f, 0.0f, 0x1.5b21aap-72f,
     0x1.787d22p-103f, 0x1.df804cp-82f, 0x1.2a1a14p-80f, 0.0f, 0.0f, 0.0f,
     0x1.a108f8p-99f, 0.0f, 0x1.f2325ap-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d21196p-94f, 0.0f, 0.0f, 0.0f, 0x1.ae8f34p-31f, 0x1.e65e68p-122f,
     0x1.3d41f4p-72f, 0.0f, 0x1.dfc406p-40f, 0.0f, 0x1.a2a05cp-68f, 0.0f, 0.0f,
     0x1.ce79ep-12f, 0.0f, 0x1.1f505ep-111f, 0x1.4a4f3ep-95f, 0.0f, 0x1.fc897ap-65f,
     0x1.c1e7ep-11f, 0x1.80367p-14f, 0.0f, 0.0f, 0x1.adfe2cp-9f, 0x1.a42b9ap-98f,
     0.0f, 0.0f, 0x1.57e27p-52f, 0.0f, 0x1.0a7652p-77f, 0x1.41efc2p-35f,
     0x1.6ebeaap-102f, 0.0f, 0.0f, 0.0f, 0x1.bb5ae2p-20f, 0.0f, 0.0f, 0x1.e20b16p-46f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.984f26p-34f, 0.0f, 0.0f
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
            tmp1 = Sleef_finz_sinhf4_u10avx2128(tmp0);
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
    printf("Sleef_finz_sinhf4_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_sinhf4_u10avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
