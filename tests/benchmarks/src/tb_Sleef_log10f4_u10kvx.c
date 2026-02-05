/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_log10f4_u10kvx.c --function Sleef_log10f4_u10kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 4 --function-input-vector-size 4 --bench \
 *     --no-embedded-bin --target kv3
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
     0x1.a5e31cp-51f, 0x1.36e7c6p-20f, 0.0f, 0.0f, 0x1.2648cep-126f, 0x1.8ea5c2p-32f,
     0x1.fcd4bap-3f, 0x1.d29fd2p-47f, 0.0f, 0x1.891a38p-2f, 0.0f, 0.0f, 0.0f, 0x1p0f,
     0x1.a8846p-121f, 0.0f, 0.0f, 0x1.dacd2ap-89f, 0.0f, 0.0f, 0.0f, 0x1.8b802ep-6f,
     0x1.a9017ep-23f, 0x1.cf59fap-65f, 0x1.8f98c6p-41f, 0.0f, 0x1.bd2986p-88f,
     0x1.b0eabp-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b0c0b4p-24f, 0.0f,
     0x1.c793c4p-9f, 0x1.b490e8p-119f, 0.0f, 0x1.3826a6p-37f, 0.0f, 0.0f,
     0x1.2dab36p-106f, 0x1.611158p-54f, 0x1.9b35dp-59f, 0.0f, 0.0f, 0x1.b167ecp-65f,
     0x1.2c33a8p-77f, 0x1.700fa6p-65f, 0x1.15be5p-8f, 0x1.3ced4cp-61f,
     0x1.b3167cp-96f, 0.0f, 0x1.768846p-96f, 0x1.6d2be4p-32f, 0x1.d33b52p-66f, 0.0f,
     0x1.efb2e8p-82f, 0x1.233cb6p-78f, 0x1.bbd846p-36f, 0.0f, 0.0f, 0.0f,
     0x1.7f3c08p-9f, 0.0f, 0x1.417e4cp-9f, 0x1.c2b62p-116f, 0x1.703f76p-60f, 0.0f,
     0.0f, 0x1.6b87dcp-88f, 0.0f, 0x1.5b7194p-84f, 0x1.a64d04p-14f, 0.0f, 0.0f,
     0x1.ee476ep-32f, 0x1.102e0ep-95f, 0x1.7a064p-83f, 0x1.e3fcdap-57f,
     0x1.90c334p-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.52ecc2p-28f, 0.0f,
     0.0f, 0x1.a62faep-105f, 0x1.d43c96p-65f, 0x1.abcb02p-97f, 0x1.d3b68ep-32f,
     0x1.940b6cp-59f, 0x1.8413f8p-117f, 0x1.b7a37p-28f, 0x1.5009dcp-120f, 0.0f,
     0x1.ff4ebep-31f, 0x1.be1b56p-51f, 0x1.9a840cp-103f, 0.0f, 0x1.190c4cp-55f, 0.0f,
     0x1.582fc6p-123f, 0.0f, 0.0f, 0x1.2dfbdcp-9f, 0x1.cd0f4ap-86f, 0x1.b22dcap-55f,
     0.0f, 0x1.dc21ep-121f, 0x1.855bd2p-87f, 0.0f, 0x1.ca6776p-102f, 0x1.869528p-27f,
     0.0f, 0x1.16e00cp-71f, 0.0f, 0.0f, 0.0f, 0x1.a32044p-31f, 0.0f, 0x1.35c3eep-108f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.6f5a18p-27f, 0x1.5a004ep-97f, 0x1.3c370ep-83f, 0.0f,
     0x1.abaaa2p-102f, 0x1.c7b092p-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c0a754p-96f, 0.0f, 0.0f, 0x1.bc0e9p-91f, 0.0f, 0.0f, 0.0f, 0x1.cdf3f4p-109f,
     0x1.52d49ep-27f, 0.0f, 0.0f, 0x1.b99b56p-2f, 0x1.a0acaap-21f, 0.0f, 0.0f,
     0x1.518882p-25f, 0x1.a201dcp-92f, 0x1.274bcp-122f, 0x1.ac31f4p-92f,
     0x1.1548f4p-75f, 0.0f, 0x1.b37a48p-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.729db4p-124f,
     0x1.ee4532p-51f, 0x1.ef362p-120f, 0x1.8a3798p-50f, 0.0f, 0.0f, 0x1.9d4f58p-125f,
     0x1.68af3p-103f, 0x1.134b38p-122f, 0.0f, 0x1.4d17aap-65f, 0x1.5a72acp-72f,
     0x1.8da66cp-100f, 0.0f, 0x1.1e8db4p-34f, 0x1.a36a4cp-85f, 0.0f, 0x1.0e81c2p-87f,
     0x1.95b906p-83f, 0x1.f49484p-12f, 0.0f, 0.0f, 0x1.5681dap-32f, 0x1.0384f4p-60f,
     0x1.a68052p-60f, 0.0f, 0.0f, 0x1.3ac4d6p-73f, 0.0f, 0x1.decd54p-70f, 0.0f, 0.0f,
     0.0f, 0x1.d2b46ap-96f, 0x1.7784ccp-27f, 0.0f, 0x1.0a14e4p-88f, 0x1.0273dep-125f,
     0.0f, 0x1.91e372p-98f, 0.0f, 0.0f, 0x1.c0d988p-97f, 0x1.18f9bap-92f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.16aca6p-113f, 0x1.67254cp-126f, 0.0f, 0x1.b7e4dcp-91f, 0.0f,
     0.0f, 0.0f, 0x1.eacaf4p-104f, 0x1.4b94bcp-89f, 0.0f, 0x1.80006cp-119f,
     0x1.4b0d3p-93f, 0x1.a520dcp-16f, 0.0f, 0x1.a0a2p-7f, 0.0f, 0x1.374174p-34f, 0.0f,
     0x1.530c6ep-28f, 0.0f, 0x1.f3c2ap-19f, 0.0f, 0x1.a9923ap-96f, 0x1.1d5be6p-58f,
     0.0f, 0x1.ab423p-74f, 0.0f, 0.0f, 0.0f, 0x1.6e8642p-46f, 0.0f, 0x1.72880ap-15f,
     0.0f, 0x1.bf31d6p-73f, 0x1.4ba572p-54f, 0.0f, 0.0f, 0x1.d78974p-34f, 0.0f, 0.0f,
     0x1.7365e8p-41f, 0.0f, 0x1.d60d7ap-30f, 0x1.31e0e6p-120f, 0x1.916d2ep-17f,
     0x1.a6c416p-125f, 0x1.65be4ap-8f, 0.0f, 0.0f, 0x1.813996p-2f, 0x1.f044bp-109f,
     0x1.35fbd2p-112f, 0.0f, 0.0f, 0.0f, 0x1.5ba2p-39f, 0.0f, 0x1.90d40ap-92f,
     0x1.12f846p-82f, 0x1.9fa844p-126f, 0.0f, 0x1.7c4a8cp-21f, 0.0f, 0.0f,
     0x1.88c496p-31f, 0x1.58aedp-45f, 0x1.62bfbep-5f, 0.0f, 0.0f, 0x1.cdc18p-122f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b8464p-36f, 0.0f, 0.0f, 0.0f, 0x1.7778c2p-90f,
     0x1.2a69e8p-100f, 0.0f, 0x1.2f1d9ap-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8c39a4p-4f,
     0x1.849af4p-2f, 0x1.58e144p-125f, 0x1.f848b6p-77f, 0x1.08a35ep-15f,
     0x1.f2bfeep-76f, 0.0f, 0.0f, 0.0f, 0x1.0bc8b2p-53f, 0.0f, 0.0f, 0x1.e15ab4p-98f,
     0.0f, 0x1.051f14p-1f, 0x1.010de8p-116f, 0.0f, 0.0f, 0x1.c7afb6p-125f, 0.0f,
     0x1.646772p-87f, 0.0f, 0.0f, 0x1.1d2446p-78f, 0x1.7983bp-21f, 0x1.8e12b4p-59f,
     0x1.9e3a62p-92f, 0x1.53bcf4p-19f, 0x1.5788b2p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.76879p-107f, 0.0f, 0x1.99a114p-112f, 0x1.82901ap-35f, 0.0f,
     0x1.a73e5ep-42f, 0.0f, 0x1.094e74p-80f, 0.0f, 0.0f, 0.0f, 0x1.4ac4d4p-109f, 0.0f,
     0x1.2d8ad8p-68f, 0x1.4b4a82p-6f, 0.0f, 0x1.88654p-114f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.fcd1b8p-71f, 0.0f, 0x1.c27ca8p-51f, 0x1.902914p-35f,
     0x1.186516p-82f, 0.0f, 0x1.a8e4b2p-76f, 0x1.c7e5eap-79f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0d3d2ap-121f, 0.0f, 0x1.8471c8p-111f, 0.0f, 0x1.515094p-68f, 0x1.2f3f44p-73f,
     0x1.a232cp-64f, 0.0f, 0.0f, 0.0f, 0x1.51a44ap-40f, 0x1.e8e2eap-63f, 0.0f,
     0x1.a08da4p-25f, 0.0f, 0.0f, 0.0f, 0x1.c95928p-10f, 0.0f, 0.0f, 0.0f,
     0x1.01283cp-45f, 0x1.41715ep-88f, 0.0f, 0x1.6ced4cp-90f, 0x1.57719ap-70f, 0.0f,
     0x1.5948fep-115f, 0.0f, 0.0f, 0.0f, 0x1.0851d4p-68f, 0x1.fece9ap-35f,
     0x1.727374p-104f, 0.0f, 0.0f, 0x1.bc3c9ap-21f, 0.0f, 0.0f, 0x1.5cbc08p-6f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.0b670ap-114f, 0x1.9f649p-57f, 0.0f, 0x1.70a614p-82f, 0.0f,
     0.0f, 0x1.44560cp-69f, 0x1.5ea192p-87f, 0.0f, 0x1.7ef404p-24f, 0x1.71440ap-109f,
     0x1.ed6f04p-15f, 0x1.0c9bd2p-93f, 0x1.85f918p-123f, 0.0f, 0x1.8c8a66p-53f, 0.0f,
     0.0f, 0.0f, 0x1.774c8p-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2aa53ep-122f,
     0x1.480016p-65f, 0x1.85732p-94f, 0x1.d24b18p-1f, 0x1.b5b24cp-101f,
     0x1.11c848p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1b41f6p-96f, 0x1.7d62b6p-98f,
     0x1.40809cp-108f, 0.0f, 0.0f, 0.0f, 0x1.71b3c6p-48f, 0x1.4aae3ap-91f, 0.0f, 0.0f,
     0x1.b6f5eap-17f, 0.0f, 0.0f, 0x1.aee6d6p-29f, 0.0f, 0x1.0685fcp-113f, 0.0f, 0.0f,
     0.0f, 0x1.39aaf4p-72f, 0.0f, 0x1.50ac22p-21f, 0.0f, 0.0f, 0x1.3bb4eap-126f, 0.0f,
     0x1.a7310ep-84f, 0.0f, 0x1.2a662ep-89f, 0x1.74586cp-106f, 0.0f, 0.0f,
     0x1.42f60cp-57f, 0x1.dfc26p-3f, 0x1.6c0312p-100f, 0.0f, 0.0f, 0x1.5c5edep-115f,
     0x1.2dbba4p-42f, 0.0f, 0.0f, 0x1.9908e4p-117f, 0x1.f70ad6p-4f, 0.0f,
     0x1.15573p-56f, 0x1.88736cp-115f, 0x1.9c262cp-75f, 0x1.62016ap-3f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.79aea6p-78f, 0x1.1a460ap-57f, 0.0f, 0x1.a6bcd8p-19f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.5ab2bp-27f, 0x1.72ee0ep-99f, 0x1.af6d2ep-50f,
     0x1.101afp-45f, 0.0f, 0x1.1e0eap-91f, 0x1.52b5c6p-19f, 0x1.6c0d5ep-87f, 0.0f,
     0.0f, 0.0f, 0x1.feb986p-68f, 0.0f, 0x1.6863dap-114f, 0.0f, 0x1.cf27fcp-97f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.fce0b6p-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8ae82ep-89f,
     0x1.f2cfaap-81f, 0.0f, 0x1.cc16a8p-70f, 0.0f, 0.0f, 0x1.5f3208p-99f, 0.0f, 0.0f,
     0.0f, 0x1.53e276p-102f, 0.0f, 0x1.50fcdep-124f, 0x1.ad80acp-44f, 0.0f,
     0x1.633362p-71f, 0x1.2d9686p-46f, 0x1.2ae82cp-46f, 0x1.551d68p-41f,
     0x1.4ce164p-103f, 0.0f, 0x1.79aebp-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e5fe9p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.320334p-21f, 0x1.5af142p-80f,
     0x1.111b2p-34f, 0.0f, 0x1.2b3ec8p-99f, 0x1.9f873cp-12f, 0.0f, 0x1.2c61eep-58f,
     0x1.a95724p-65f, 0.0f, 0x1.452068p-125f, 0.0f, 0x1.63f07ap-19f, 0.0f,
     0x1.24b18p-55f, 0.0f, 0.0f, 0.0f, 0x1.f4725cp-124f, 0x1.31fd94p-117f,
     0x1.4873c2p-30f, 0.0f, 0x1.747786p-14f, 0x1.035c02p-21f, 0x1.212fc2p-92f, 0.0f,
     0.0f, 0.0f, 0x1.241548p-52f, 0.0f, 0.0f, 0.0f, 0x1.47995cp-55f, 0.0f,
     0x1.9ddc68p-33f, 0x1.f32dfcp-120f, 0.0f, 0.0f, 0x1.e546bep-64f, 0x1.65427ap-28f,
     0x1.c6477ep-64f, 0.0f, 0x1.77a4ecp-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.af6eacp-94f, 0.0f, 0x1.46374p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ee1f42p-61f, 0.0f, 0.0f, 0.0f, 0x1.e4a72ep-64f, 0x1.909f74p-94f,
     0x1.dfa6c8p-16f, 0.0f, 0x1.fc789ep-49f, 0.0f, 0x1.d76b7ep-97f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f907e8p-33f, 0x1.272a58p-10f, 0x1.9d6ac6p-82f, 0.0f,
     0x1.0d1616p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4e54bp-40f,
     0x1.0adc7p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0bac62p-98f, 0.0f, 0.0f, 0.0f,
     0x1.0c466p-113f, 0.0f, 0.0f, 0x1.d320e8p-72f, 0x1.ab20aap-106f, 0x1.2d05e6p-100f,
     0x1.e76e2p-5f, 0x1.9bcefap-5f, 0x1.627beap-56f, 0x1.cb250ep-73f, 0x1.988e6ap-17f,
     0x1.4b56c2p-75f, 0x1.56295p-39f, 0.0f, 0.0f, 0.0f, 0x1.28a65ap-46f,
     0x1.65e4aap-80f, 0x1.1b0704p-80f, 0x1.a8364ep-66f, 0.0f, 0.0f, 0x1.cdbe24p-35f,
     0x1.213254p-17f, 0x1.713cfcp-51f, 0.0f, 0x1.428b2ep-5f, 0.0f, 0.0f,
     0x1.f809b4p-35f, 0.0f, 0.0f, 0.0f, 0x1.15e4bcp-99f, 0x1.3448aap-105f, 0.0f,
     0x1.c79086p-57f, 0.0f, 0x1.3ee87p-80f, 0x1.9be0a8p-120f, 0.0f, 0.0f, 0.0f,
     0x1.5bb552p-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d386e4p-96f, 0.0f, 0x1.f7621ep-120f,
     0x1.6f07f6p-112f, 0x1.2d6e92p-107f, 0x1.0eff3p-124f, 0.0f, 0.0f, 0.0f,
     0x1.9bfd3ep-75f, 0x1.31f39cp-79f, 0.0f, 0.0f, 0x1.c73492p-113f, 0.0f,
     0x1.e6c4aep-77f, 0x1.1da7ep-33f, 0x1.89f718p-68f, 0.0f, 0.0f, 0.0f,
     0x1.95d95cp-99f, 0.0f, 0x1.92a056p-117f, 0x1.71c9c6p-51f, 0x1.106f32p-34f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ad177ap-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.de2a64p-34f, 0.0f, 0x1.93d9c4p-38f, 0x1.46d156p-123f, 0.0f, 0x1.c4a8eep-58f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.df1p-65f, 0.0f, 0x1.508f9p-36f,
     0x1.0670c4p-99f, 0.0f, 0.0f, 0.0f, 0x1.f0575ep-16f, 0.0f, 0.0f, 0.0f,
     0x1.607a5ep-108f, 0.0f, 0x1.9b5ea6p-46f, 0.0f, 0x1.ca889cp-103f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.98822p-115f, 0.0f, 0x1.018b4ep-59f, 0x1.ec207p-77f, 0.0f,
     0.0f, 0x1.46db1ep-113f, 0x1.59eb92p-70f, 0x1.4c9c12p-97f, 0.0f, 0x1.48d202p-98f,
     0.0f, 0x1.43b16p-101f, 0.0f, 0.0f, 0x1.b393e6p-9f, 0x1.4d9208p-53f, 0.0f, 0.0f,
     0x1.250286p-54f, 0x1.9d889p-64f, 0x1.92d37ap-42f, 0x1.383916p-12f, 0.0f,
     0x1.11c974p-20f, 0x1.915d32p-27f, 0x1.7b6364p-85f, 0x1.f54582p-56f,
     0x1.fc42bap-38f, 0.0f, 0x1.4f8f98p-37f, 0.0f, 0.0f, 0x1.9edf36p-17f, 0.0f,
     0x1.3fe99p-105f, 0.0f, 0.0f, 0x1.c7b16cp-21f, 0x1.46f738p-123f, 0x1.eb9ce8p-19f,
     0x1.7875f8p-93f, 0x1.cade12p-31f, 0x1.e8b682p-65f, 0.0f, 0x1p0f, 0.0f, 0.0f,
     0x1.b22a42p-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a86f1ap-120f, 0x1.3468bcp-3f,
     0x1.4b79dp-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.08bd74p-22f, 0.0f, 0.0f,
     0x1.8029fap-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2a353p-78f, 0x1.cb840ap-77f,
     0x1.d392ap-15f, 0.0f, 0x1.69b57p-56f, 0.0f, 0.0f, 0x1.02e2eap-68f,
     0x1.0e3eb4p-45f, 0x1.94770ap-124f, 0.0f, 0x1.38cb14p-25f, 0x1.d09992p-16f,
     0x1.145974p-53f, 0x1.094bd6p-7f, 0x1.464d08p-12f, 0x1.89cabcp-10f, 0.0f, 0.0f,
     0x1.331d6p-89f, 0x1.a56212p-72f, 0x1.5777eep-39f, 0x1.5f15e6p-122f,
     0x1.c12474p-118f, 0.0f, 0x1.59a522p-75f, 0x1.88b7f8p-64f, 0x1.7305ap-111f,
     0x1.a0df32p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d1cea4p-4f, 0.0f, 0.0f,
     0x1.6e6624p-99f, 0x1.92a65ap-91f, 0x1.def792p-120f, 0.0f, 0x1.c03e1ep-79f,
     0x1.84727p-92f, 0.0f, 0.0f, 0.0f, 0x1.f5e1aap-10f, 0.0f, 0x1.a2a566p-98f, 0.0f,
     0x1.ba4368p-75f, 0x1.0c680cp-31f, 0x1.d77762p-65f, 0x1.ec677ep-83f,
     0x1.fa61p-110f, 0.0f, 0x1.145cf4p-71f, 0.0f, 0x1.eb8b44p-3f, 0x1.84c0d4p-89f,
     0.0f, 0.0f, 0.0f, 0x1.8881bp-8f, 0.0f, 0x1.efcf2p-98f, 0.0f, 0x1.34bae8p-111f,
     0.0f, 0x1.a7000cp-38f, 0x1.efbep-24f, 0x1.77a47p-76f, 0x1.b0bebep-22f, 0.0f,
     0.0f, 0x1.776276p-31f, 0.0f, 0x1.3fb85ap-121f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6f2684p-114f, 0.0f, 0.0f, 0x1.9f26b6p-96f, 0x1.283fecp-75f, 0.0f,
     0x1.f643acp-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f90538p-5f, 0x1.f1114cp-39f,
     0.0f, 0x1.c05dd4p-28f, 0x1.595f42p-105f, 0.0f, 0.0f, 0.0f, 0x1.f96dep-88f, 0.0f,
     0.0f, 0x1.d44d7p-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.14c60ap-36f, 0.0f, 0.0f,
     0x1.8b6cap-47f, 0x1.38a45p-37f, 0x1.aa7074p-81f, 0.0f, 0x1.08a012p-30f, 0.0f,
     0x1.6b33fcp-29f, 0.0f, 0.0f, 0.0f, 0x1.cb849ap-2f, 0.0f, 0x1.ff8ffp-126f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2c1686p-73f, 0x1.e3019ap-53f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c96514p-114f, 0x1.1c467ap-101f, 0x1.c80096p-77f,
     0x1.bde12ap-76f, 0.0f, 0.0f
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
            tmp1 = Sleef_log10f4_u10kvx(tmp0);
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
    printf("Sleef_log10f4_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_log10f4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
