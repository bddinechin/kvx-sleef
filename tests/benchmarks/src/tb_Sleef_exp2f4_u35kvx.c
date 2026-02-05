/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_exp2f4_u35kvx.c --function Sleef_exp2f4_u35kvx \
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
     0.0f, 0.0f, 0.0f, 0x1.2859b4p-27f, 0.0f, 0x1.f84144p-41f, 0x1.5442e8p-78f,
     0x1.5efdfap-96f, 0x1.26b5c2p-86f, 0x1.ca21c8p-58f, 0.0f, 0x1.0d660ep-20f, 0.0f,
     0.0f, 0x1p0f, 0x1.9abcbap-63f, 0x1.309adap-13f, 0.0f, 0x1.ff1872p-107f,
     0x1.0264fp-24f, 0x1.b240e8p-85f, 0.0f, 0x1.bf1118p-74f, 0x1.cf7a68p-119f,
     0x1.3c3188p-99f, 0x1.ea143cp-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2fbefap-105f,
     0x1.757164p-122f, 0x1.2c09aap-31f, 0x1.ee617ep-124f, 0.0f, 0x1.12b1ccp-23f, 0.0f,
     0x1.8566a4p-51f, 0.0f, 0x1.9a0f1cp-90f, 0.0f, 0x1.fb8d9cp-34f, 0x1.0fd3cap-118f,
     0.0f, 0x1.6030f6p-89f, 0x1.305092p-110f, 0x1.1d6366p-63f, 0.0f, 0x1.b11bfap-99f,
     0x1.641accp-64f, 0x1.58182ep-23f, 0x1.bbce72p-104f, 0x1.869a4ep-58f,
     0x1.26208cp-55f, 0x1.b7a9dap-65f, 0.0f, 0x1.1acdcp-94f, 0x1.4a25f8p-6f, 0.0f,
     0.0f, 0.0f, 0x1.709d2ep-65f, 0x1.3023b4p-69f, 0.0f, 0x1.6c7dcp-98f,
     0x1.f9c384p-102f, 0.0f, 0x1.79d4p-22f, 0x1.b3b9a2p-105f, 0.0f, 0.0f,
     0x1.42bf16p-105f, 0x1.e88762p-55f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f,
     0x1.ae1a16p-125f, 0x1.532978p-26f, 0.0f, 0.0f, 0.0f, 0x1.183d14p-91f, 0.0f,
     0x1.7d5818p-107f, 0x1.96d646p-69f, 0.0f, 0x1.5bd0d8p-107f, 0x1.20b5fap-106f,
     0.0f, 0.0f, 0.0f, 0x1.e18ee2p-10f, 0.0f, 0x1.c56ba4p-16f, 0.0f, 0x1.9e713p-16f,
     0x1.38c878p-40f, 0x1.56b81ap-15f, 0x1.ff6af2p-24f, 0x1.7c70f6p-47f,
     0x1.b4738ep-43f, 0x1.772bcep-21f, 0.0f, 0.0f, 0x1.c5169cp-17f, 0.0f, 0.0f, 0.0f,
     0x1.0c8576p-99f, 0x1.71f95ap-38f, 0.0f, 0x1.b82dfcp-42f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1debbap-122f, 0x1.5d47b4p-94f, 0x1.007cacp-70f, 0.0f, 0.0f,
     0x1.d2d368p-75f, 0x1.b1816p-88f, 0x1.901116p-18f, 0.0f, 0x1.f8f7d2p-109f,
     0x1.95696p-101f, 0x1.ab56d6p-8f, 0.0f, 0x1.f8be36p-2f, 0.0f, 0x1.ecaadp-85f,
     0x1.c6b756p-12f, 0.0f, 0.0f, 0.0f, 0x1.7df496p-97f, 0x1.41961ap-109f,
     0x1.1d2456p-120f, 0x1.d8eb4ap-88f, 0.0f, 0x1.704486p-108f, 0.0f, 0x1.5848acp-81f,
     0x1.4d7fc2p-18f, 0x1.0adb1ap-94f, 0x1.b94fcp-58f, 0x1.63205cp-23f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.8cf22ep-100f, 0.0f, 0.0f, 0x1.e2cadep-111f, 0x1.456f42p-92f,
     0.0f, 0x1.c0f49ap-37f, 0.0f, 0.0f, 0.0f, 0x1.495c36p-83f, 0x1.a3463ap-67f,
     0x1.275fbep-98f, 0x1.c0d33p-104f, 0x1.824b82p-19f, 0x1.3624ap-64f,
     0x1.16903ap-119f, 0.0f, 0x1.a7006ap-30f, 0x1.d7253ep-121f, 0.0f, 0x1.3fa304p-10f,
     0x1.89058ep-118f, 0x1.4f52bap-36f, 0.0f, 0.0f, 0.0f, 0x1.085ca4p-3f,
     0x1.4d129cp-30f, 0x1.81cbbap-101f, 0.0f, 0.0f, 0.0f, 0x1.ead45cp-101f, 0.0f,
     0.0f, 0.0f, 0x1.2e4baep-84f, 0.0f, 0.0f, 0.0f, 0x1.b13a3ep-27f, 0x1.b33798p-30f,
     0x1.6aa22ep-40f, 0.0f, 0x1.ffc062p-98f, 0x1.b3ab14p-102f, 0x1.ae92a6p-126f, 0.0f,
     0.0f, 0.0f, 0x1.b0a0aep-49f, 0.0f, 0x1.9c671cp-101f, 0x1.a676c6p-125f, 0.0f,
     0x1.b105d4p-106f, 0.0f, 0x1.602912p-36f, 0x1.611c54p-98f, 0x1.3c029cp-15f,
     0x1.ecc1f4p-120f, 0.0f, 0x1.b7dd5p-78f, 0.0f, 0x1.b39be6p-126f, 0x1.cc766ep-115f,
     0x1.412e62p-46f, 0.0f, 0x1.f01198p-7f, 0.0f, 0.0f, 0x1.8c8778p-125f, 0.0f, 0.0f,
     0x1.45aae4p-36f, 0x1.00533ap-83f, 0.0f, 0.0f, 0x1.6897fep-79f, 0.0f, 0.0f,
     0x1.d7c2fep-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.16301cp-74f, 0.0f, 0.0f,
     0x1.71ce4p-57f, 0.0f, 0.0f, 0.0f, 0x1.7a522ap-92f, 0x1.4b7524p-18f,
     0x1.e4d84cp-62f, 0x1.58e3ecp-50f, 0x1.443ff4p-61f, 0x1.ed692ap-56f, 0.0f,
     0x1.882742p-119f, 0x1.196ca8p-80f, 0x1.ed27eep-79f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9358eap-67f, 0.0f, 0.0f, 0.0f, 0x1.c1f0bap-115f, 0x1.a139fp-64f,
     0x1.65cf9p-54f, 0x1.885c4cp-83f, 0x1.91dbbcp-15f, 0x1.54488p-69f,
     0x1.6307cep-81f, 0.0f, 0x1.c77824p-45f, 0x1.3a138ep-2f, 0.0f, 0.0f, 0.0f,
     0x1.76b75ap-88f, 0x1.a7b2e4p-21f, 0.0f, 0x1.df8f92p-82f, 0x1.e78b2cp-19f,
     0x1.f0a636p-11f, 0.0f, 0.0f, 0x1.315e2ap-107f, 0.0f, 0x1.03ac7ep-68f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4d570cp-115f, 0x1.815a7p-8f, 0.0f, 0x1.8c2404p-114f,
     0x1.10518p-5f, 0.0f, 0x1.cb727p-37f, 0x1.023986p-34f, 0x1.e61558p-31f,
     0x1.2a016cp-57f, 0.0f, 0.0f, 0.0f, 0x1.371a76p-18f, 0.0f, 0x1.312e84p-80f,
     0x1.f299d4p-19f, 0.0f, 0x1.756a94p-5f, 0.0f, 0.0f, 0.0f, 0x1.e4f8f2p-112f,
     0x1.821e2p-110f, 0.0f, 0x1.9a0cf2p-125f, 0.0f, 0.0f, 0.0f, 0x1.521006p-53f,
     0x1.3cb338p-111f, 0.0f, 0x1.e9654cp-7f, 0.0f, 0x1.f1fdbcp-123f, 0x1.deef04p-62f,
     0x1.c13b7ap-112f, 0.0f, 0.0f, 0x1.bdd2e4p-98f, 0.0f, 0x1.c548fp-20f, 0.0f,
     0x1.71b294p-108f, 0.0f, 0x1.d6b5c4p-67f, 0.0f, 0x1.a00168p-22f, 0.0f,
     0x1.8d9cdap-56f, 0x1.7458c2p-13f, 0x1.54541ep-34f, 0x1.004612p-1f, 0.0f,
     0x1.238b4cp-98f, 0.0f, 0x1.04759ap-120f, 0.0f, 0x1.fb242cp-18f, 0.0f, 0.0f,
     0x1.3f783ap-96f, 0.0f, 0x1.d02094p-13f, 0.0f, 0x1.e217d4p-48f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.411b98p-33f, 0x1.a22a5p-105f, 0x1.3b7c58p-2f, 0x1.05491cp-3f,
     0x1.2dcdfap-68f, 0x1.0b1c36p-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2b0798p-53f, 0.0f, 0x1.73558ep-33f, 0.0f, 0x1.584684p-43f, 0.0f,
     0x1.5acdb8p-90f, 0.0f, 0.0f, 0x1.42110cp-56f, 0x1.839162p-47f, 0x1.4a17p-109f,
     0x1.0f999p-2f, 0.0f, 0.0f, 0x1.07955ap-9f, 0.0f, 0x1.2b0becp-81f, 0.0f, 0.0f,
     0.0f, 0x1.38930ep-111f, 0.0f, 0x1.e3f474p-71f, 0x1.77f608p-95f, 0.0f,
     0x1.0a6232p-99f, 0.0f, 0.0f, 0x1.e1568cp-83f, 0x1.ff1cc6p-110f, 0.0f,
     0x1.bf99a2p-113f, 0.0f, 0x1.4f05b2p-110f, 0x1.70b884p-44f, 0.0f, 0.0f, 0.0f,
     0x1.c7a7b4p-7f, 0x1.7bbb9ap-101f, 0.0f, 0x1.9378e4p-4f, 0x1.21ad7p-56f,
     0x1.2ffbb4p-8f, 0.0f, 0.0f, 0x1.d05cfp-57f, 0x1.ecad96p-13f, 0.0f, 0.0f,
     0x1.90914ep-45f, 0x1.31e88ap-45f, 0.0f, 0.0f, 0x1.d187b4p-10f, 0x1.c38d5p-82f,
     0.0f, 0x1.777598p-11f, 0x1.10cae2p-2f, 0x1.fd9e22p-41f, 0.0f, 0x1.21a73cp-43f,
     0.0f, 0.0f, 0x1.977dep-83f, 0x1.7fe144p-89f, 0x1.59ffcp-125f, 0x1.36d1c4p-7f,
     0x1.a2930ap-108f, 0.0f, 0.0f, 0.0f, 0x1.bfdc74p-38f, 0x1.4c5f9p-76f,
     0x1.600d32p-15f, 0x1.d46948p-64f, 0.0f, 0.0f, 0x1.474216p-60f, 0x1.b5a984p-19f,
     0x1.92f234p-31f, 0x1.0e6de4p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d18a0ap-58f,
     0x1.8f64fep-23f, 0x1.3a75p-92f, 0.0f, 0x1.018b6cp-3f, 0.0f, 0.0f,
     0x1.12bd7ap-35f, 0x1.c94a38p-6f, 0x1.1d85ap-91f, 0.0f, 0.0f, 0.0f,
     0x1.63e76ep-5f, 0.0f, 0.0f, 0.0f, 0x1.84349ap-5f, 0x1.399b46p-16f,
     0x1.3fd9cap-116f, 0x1.075522p-58f, 0.0f, 0.0f, 0x1.d5fe6cp-39f, 0x1.8f9d3ep-86f,
     0.0f, 0x1.a480a6p-52f, 0x1.1a8e1cp-91f, 0.0f, 0x1.b3cfap-38f, 0.0f, 0.0f, 0.0f,
     0x1.b2b2p-110f, 0.0f, 0x1.f3125ep-29f, 0.0f, 0.0f, 0x1.700c8ep-115f,
     0x1.89e868p-31f, 0.0f, 0x1.9f4c06p-42f, 0.0f, 0.0f, 0.0f, 0x1.19ffa4p-53f, 0.0f,
     0x1.34993p-69f, 0.0f, 0.0f, 0x1.724ceap-77f, 0.0f, 0.0f, 0.0f, 0x1.7423a2p-72f,
     0.0f, 0x1.ee3902p-84f, 0x1.263556p-83f, 0.0f, 0x1.9d67eap-122f, 0.0f,
     0x1.0b2378p-48f, 0x1.839b78p-74f, 0x1.60bb1p-110f, 0.0f, 0x1.ce27b4p-4f,
     0x1.44eda4p-68f, 0x1.dc2c5cp-29f, 0.0f, 0x1.dd41b6p-62f, 0x1.7af0eap-10f,
     0x1.e01eb6p-12f, 0x1.9066d4p-106f, 0x1.20f102p-24f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5b0456p-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a104d6p-104f, 0x1p0f, 0.0f,
     0x1.7656bcp-88f, 0x1p0f, 0.0f, 0x1.ef211p-27f, 0x1.5c2f7ep-51f, 0x1.5bf3cep-56f,
     0x1.695f14p-21f, 0x1.b03b76p-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d2c5ccp-4f,
     0x1.2f8eaap-57f, 0.0f, 0.0f, 0.0f, 0x1.8d0f9ep-8f, 0.0f, 0.0f, 0.0f,
     0x1.6a5b48p-105f, 0x1.b99db4p-9f, 0.0f, 0x1.c299ap-20f, 0x1.837a9ep-49f,
     0x1.4e63bep-39f, 0x1.15b61p-79f, 0.0f, 0x1.3241a8p-119f, 0x1.8f2d88p-94f, 0.0f,
     0x1.2d834ap-102f, 0x1.1de5d8p-102f, 0x1.110564p-19f, 0.0f, 0.0f, 0x1.738696p-3f,
     0x1.05c93p-118f, 0.0f, 0.0f, 0.0f, 0x1.69f85ep-103f, 0.0f, 0.0f, 0x1.8f99fap-37f,
     0x1.965a3cp-70f, 0.0f, 0.0f, 0.0f, 0x1.d801c2p-39f, 0.0f, 0.0f, 0x1.3e1e82p-84f,
     0x1.0ade3ep-84f, 0.0f, 0x1.c2ad1ap-55f, 0.0f, 0x1.8bcb2p-36f, 0x1.df1da4p-126f,
     0x1.b34f46p-54f, 0.0f, 0x1.d685b6p-121f, 0x1.7ca42p-13f, 0x1.d0f574p-87f, 0.0f,
     0.0f, 0x1.792a28p-57f, 0.0f, 0x1.342146p-25f, 0x1.51a2d2p-14f, 0x1.349caap-93f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.33e786p-119f, 0x1.277cb4p-44f,
     0.0f, 0.0f, 0x1.0be98p-40f, 0x1.16dc46p-23f, 0.0f, 0x1.efa31cp-111f, 0.0f, 0.0f,
     0.0f, 0x1.7e5874p-116f, 0x1.477bb4p-66f, 0.0f, 0x1.992d0ep-5f, 0.0f, 0.0f, 0.0f,
     0x1.282f84p-49f, 0x1.72d79ep-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.94ab04p-82f,
     0x1.960598p-91f, 0.0f, 0x1.83515p-68f, 0x1.40061ap-47f, 0x1.602af2p-1f,
     0x1.a778cep-51f, 0.0f, 0x1.54caccp-99f, 0.0f, 0.0f, 0x1.22d1e2p-67f,
     0x1.b1dbf6p-87f, 0.0f, 0.0f, 0x1.3b180cp-66f, 0x1.623338p-66f, 0.0f, 0.0f, 0.0f,
     0x1.20ff6cp-41f, 0.0f, 0x1.4aeb56p-84f, 0x1.e1c434p-83f, 0x1.6faf3p-115f, 0.0f,
     0.0f, 0x1.2fd2c2p-96f, 0.0f, 0x1.bd39bp-41f, 0.0f, 0x1.c28976p-28f, 0.0f,
     0x1.4abad8p-45f, 0.0f, 0.0f, 0x1.f728eap-99f, 0.0f, 0x1.8ed8e2p-55f, 0.0f, 0.0f,
     0x1.93ecd8p-100f, 0.0f, 0.0f, 0x1.a5f66p-57f, 0.0f, 0x1.461e72p-51f,
     0x1.d135e6p-98f, 0.0f, 0x1.a995dp-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a72dd6p-46f, 0.0f, 0x1.97746cp-32f, 0.0f, 0.0f, 0x1.30cbf8p-43f, 0.0f,
     0x1.51e6c6p-29f, 0.0f, 0x1.41a7f4p-53f, 0x1.c13422p-114f, 0x1.604b38p-37f, 0.0f,
     0x1.c49c12p-28f, 0.0f, 0x1.fa6aa2p-46f, 0x1.3c699cp-2f, 0x1.7533cp-28f,
     0x1.79302cp-41f, 0.0f, 0x1.438918p-95f, 0.0f, 0x1.dfe8c8p-121f, 0.0f, 0.0f,
     0x1.48ae28p-11f, 0.0f, 0.0f, 0.0f, 0x1.77a11ep-45f, 0.0f, 0x1.8cad1ep-24f,
     0x1.217bf6p-78f, 0.0f, 0.0f, 0x1.62809p-22f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4a46e2p-85f, 0.0f, 0x1.75e46p-115f, 0x1.e57ce6p-102f, 0x1.db68d6p-22f,
     0x1.125aap-12f, 0.0f, 0.0f, 0x1.0f9b7ep-72f, 0.0f, 0x1.0081b2p-25f,
     0x1.2a4c28p-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cb6552p-110f, 0x1.ad5886p-84f,
     0x1.747698p-49f, 0.0f, 0.0f, 0.0f, 0x1.d06efep-28f, 0.0f, 0x1.b6fe1cp-60f, 0.0f,
     0.0f, 0.0f, 0x1.1ecc1ap-123f, 0.0f, 0.0f, 0x1.de8cbcp-70f, 0x1.d25cf8p-31f, 0.0f,
     0.0f, 0x1.7b09dp-42f, 0.0f, 0x1.bbde96p-82f, 0x1.eaff5ep-111f, 0x1.152b42p-115f,
     0.0f, 0x1.b1f742p-61f, 0.0f, 0x1.0783d2p-56f, 0.0f, 0x1.89c7f4p-44f, 0.0f,
     0x1.ebcdcep-119f, 0x1.836052p-81f, 0.0f, 0.0f, 0.0f, 0x1.b61eep-95f, 0.0f,
     0x1.a17f1p-37f, 0x1.de1b88p-18f, 0x1.d7f096p-81f, 0x1.f0d806p-50f, 0.0f,
     0x1.5a47d6p-103f, 0.0f, 0x1.414afp-88f, 0.0f, 0x1.8e3112p-91f, 0.0f, 0.0f, 0.0f,
     0x1.a55eeep-56f, 0.0f, 0x1.bb60bcp-55f, 0x1.ea647ep-78f, 0x1.47c4d4p-13f,
     0x1.1eb21p-117f, 0.0f, 0x1.d7aae8p-66f, 0.0f, 0.0f, 0x1.84b474p-92f,
     0x1.7765b6p-103f, 0x1.7d8feep-60f, 0.0f, 0.0f, 0x1.208abep-122f, 0.0f, 0.0f,
     0.0f, 0x1.c51bb2p-4f, 0x1.3eb86ep-97f, 0.0f, 0x1.ebe488p-26f, 0.0f,
     0x1.2a4e7ep-86f, 0x1.92f9a2p-6f, 0x1.a23f14p-3f, 0.0f, 0x1.bbf3p-1f, 0.0f,
     0x1.3dce0ep-40f, 0.0f, 0.0f, 0.0f, 0x1.83e2d4p-4f, 0x1.ac0e3ap-89f, 0.0f, 0.0f,
     0.0f, 0x1.264afap-62f, 0x1.fb4e8ap-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2ffc34p-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fded1cp-26f, 0x1.1c30c2p-84f, 0.0f,
     0.0f, 0x1.49202ap-10f, 0x1.f5cce6p-11f, 0.0f, 0.0f, 0.0f, 0x1.36531ep-101f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.401a24p-42f, 0.0f, 0.0f, 0.0f, 0x1.952fb4p-27f, 0.0f,
     0x1.bc230ap-13f, 0.0f, 0.0f, 0x1.760f38p-107f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.45bb48p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0defa6p-39f, 0x1.b11d32p-39f,
     0x1.8d58d6p-120f, 0x1.22df7cp-35f, 0x1.7da1bep-115f, 0.0f, 0.0f, 0x1.5180eep-60f,
     0x1.c6aef6p-113f, 0x1.97cc64p-3f, 0.0f, 0.0f, 0x1.91d65cp-40f, 0x1.495a02p-77f,
     0x1.154e1p-24f, 0.0f, 0x1.1a8e5ep-33f, 0x1.73ef3cp-18f, 0x1.b805aep-12f,
     0x1.a2023cp-103f, 0.0f, 0x1.57506p-117f, 0x1.d5071cp-106f, 0.0f, 0x1.19d06ap-91f,
     0.0f, 0.0f, 0x1.7f137cp-99f, 0.0f, 0.0f, 0x1.b5c336p-1f, 0.0f, 0.0f,
     0x1.39731p-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3c52f6p-86f,
     0.0f, 0x1.14a974p-114f, 0.0f, 0.0f, 0x1.78c15p-6f, 0.0f, 0.0f, 0.0f,
     0x1.fad11cp-90f, 0.0f, 0x1.8ba6b8p-56f, 0x1.c27a8p-7f, 0.0f, 0.0f, 0.0f,
     0x1.b5cccap-118f, 0x1.cf4c0ap-112f, 0x1.a5f4dp-19f, 0.0f, 0x1.e1cc36p-14f, 0.0f,
     0x1.310c8ep-7f, 0x1.0e1968p-26f, 0x1.159584p-34f, 0x1.b9de66p-54f, 0.0f,
     0x1.ca0fc8p-51f, 0x1.8d9d82p-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f91432p-50f,
     0.0f, 0x1.e07ccep-65f, 0.0f, 0.0f, 0.0f, 0x1.8c2e56p-11f, 0x1.4c2ee8p-82f,
     0x1.9dd6a8p-30f, 0x1.88586ep-39f, 0.0f, 0x1.40e422p-2f, 0x1.77a91cp-45f, 0.0f,
     0.0f, 0x1.a38fe4p-123f, 0x1.a45faap-124f, 0x1.ded3b4p-111f, 0.0f,
     0x1.4870ccp-72f, 0x1.c0a386p-69f, 0.0f, 0.0f, 0.0f, 0.0f
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
            tmp1 = Sleef_exp2f4_u35kvx(tmp0);
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
    printf("Sleef_exp2f4_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_exp2f4_u35kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
