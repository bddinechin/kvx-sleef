/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sincosf4_u10avx2128.c --function \
 *     Sleef_finz_sincosf4_u10avx2128 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 4 --function-input-vector-size \
 *     4 --precision sleef_sf2 --bench --no-embedded-bin --target x86_avx2128
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <string.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef___m128_2 external_bench_wrapper_cst = {.x = {0.0f, 0.0f, 0.0f, 0.0f},.y = {0.0f, 0.0f, 0.0f, 0.0f}};
static const Sleef___m128_2 external_bench_wrapper_cst1 = {.x = {0.0f, 0.0f, 0.0f, 0.0f},.y = {0.0f, 0.0f, 0.0f, 0.0f}};
volatile Sleef___m128_2 external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0.0f, 0x1.13a724p-113f, 0.0f, 0.0f, 0.0f, 0x1.7de994p-36f, 0x1.caf32cp-40f,
     0x1.d8dfcap-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0acaeap-47f, 0x1.93ed48p-8f, 0.0f,
     0x1.016152p-32f, 0x1.fd6df4p-35f, 0.0f, 0x1.ad590ap-126f, 0x1.743bbap-121f, 0.0f,
     0.0f, 0.0f, 0x1.515424p-120f, 0x1.93f1fep-88f, 0x1.fc6474p-124f, 0.0f,
     0x1.c5d606p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d17ee4p-110f,
     0x1.ba81b6p-11f, 0.0f, 0x1.6cdf64p-103f, 0x1.490076p-4f, 0x1.a4fedep-32f,
     0x1.95e418p-3f, 0.0f, 0x1.f4b8eep-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0c8784p-31f,
     0.0f, 0x1.237c8ap-91f, 0x1.986642p-34f, 0x1.fcaefap-91f, 0.0f, 0x1.5a4c02p-62f,
     0.0f, 0x1.85369ap-65f, 0.0f, 0x1.db2246p-11f, 0x1.7ff512p-92f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.23d6a6p-17f, 0x1.ebbea2p-50f, 0.0f, 0.0f, 0.0f, 0x1.b0479cp-66f, 0.0f,
     0.0f, 0.0f, 0x1.294dfcp-87f, 0x1.063b96p-33f, 0x1.ed63d4p-21f, 0.0f,
     0x1.920382p-39f, 0x1.76c384p-111f, 0x1.578efcp-89f, 0.0f, 0.0f, 0.0f,
     0x1.c7d1f6p-91f, 0.0f, 0x1.acd824p-57f, 0.0f, 0.0f, 0.0f, 0x1.8c89a4p-55f, 0.0f,
     0.0f, 0x1.86a41cp-45f, 0.0f, 0x1.cb809cp-44f, 0.0f, 0.0f, 0x1.31f602p-120f,
     0x1.3b72fp-25f, 0x1.debc02p-107f, 0x1.cf0484p-115f, 0.0f, 0x1.7a9ebap-120f, 0.0f,
     0.0f, 0x1.aeea0cp-92f, 0.0f, 0x1.0bf66ap-38f, 0.0f, 0x1.de932cp-27f, 0.0f,
     0x1.4c18f4p-49f, 0x1.0254eap-60f, 0x1.67624ep-60f, 0.0f, 0.0f, 0x1.da150cp-52f,
     0x1.2ab568p-86f, 0x1.1644e4p-126f, 0x1.943cf8p-70f, 0.0f, 0.0f, 0x1.9cd2b8p-24f,
     0x1.f650c4p-20f, 0.0f, 0.0f, 0x1.903e2ep-7f, 0.0f, 0x1.936176p-15f,
     0x1.f19f72p-92f, 0x1.d3020ap-119f, 0.0f, 0.0f, 0x1.13cba2p-15f, 0.0f, 0.0f, 0.0f,
     0x1.778a54p-45f, 0x1.2de672p-15f, 0x1.ba186p-108f, 0x1.7be906p-83f, 0.0f, 0.0f,
     0x1.b04016p-94f, 0x1.7d0ad4p-7f, 0x1.ea792ap-44f, 0.0f, 0.0f, 0.0f,
     0x1.4fad2cp-90f, 0x1.77dc4ap-71f, 0x1.d6cf56p-86f, 0x1.866822p-77f,
     0x1.de05e2p-96f, 0.0f, 0x1.492bb6p-121f, 0x1.13d56cp-12f, 0.0f, 0.0f,
     0x1.3f37f6p-21f, 0.0f, 0x1.37c28ep-57f, 0.0f, 0.0f, 0x1.3a2fdep-109f,
     0x1.b07164p-111f, 0x1.d95f68p-110f, 0x1.0c9532p-26f, 0.0f, 0x1.f09938p-14f,
     0x1.14a4bep-69f, 0.0f, 0x1.3654b8p-81f, 0x1.6f9792p-74f, 0x1.3c1c4ap-34f,
     0x1.ecfc8ep-71f, 0x1.d692bcp-24f, 0x1.e9e6f6p-68f, 0.0f, 0x1.3cb1bep-10f, 0.0f,
     0.0f, 0.0f, 0x1.8dd1cap-26f, 0x1.5d05f6p-87f, 0.0f, 0.0f, 0.0f, 0x1.dabae8p-76f,
     0x1.cdb9e4p-28f, 0x1.349aa6p-33f, 0.0f, 0x1.7d8ff6p-113f, 0.0f, 0.0f,
     0x1.729c7p-20f, 0x1.f64984p-123f, 0.0f, 0x1.68569p-112f, 0x1.92b666p-62f,
     0x1.15f4b8p-15f, 0x1.915496p-103f, 0.0f, 0x1.70b4acp-110f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c8dfdep-78f, 0.0f, 0.0f, 0x1.2532dep-38f, 0.0f,
     0x1.859058p-99f, 0.0f, 0.0f, 0.0f, 0x1.7f5454p-93f, 0.0f, 0x1.355afp-7f, 0.0f,
     0.0f, 0.0f, 0x1.6ef618p-109f, 0.0f, 0x1.c7a95cp-121f, 0.0f, 0.0f,
     0x1.c2c356p-123f, 0x1.91dbf4p-88f, 0.0f, 0x1.b0f3aap-37f, 0x1.04da4p-92f, 0.0f,
     0.0f, 0x1.271598p-109f, 0x1.042622p-28f, 0.0f, 0x1.7e3844p-31f, 0x1.cf4c4p-5f,
     0.0f, 0x1.0047cp-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7caf3ep-118f, 0.0f,
     0x1.5673cep-115f, 0.0f, 0.0f, 0x1.71380ap-44f, 0.0f, 0x1.fa4b04p-44f,
     0x1.f36f38p-66f, 0.0f, 0x1.de1314p-13f, 0x1.2d81a6p-51f, 0x1p0f, 0.0f, 0.0f,
     0x1.d3d2f8p-33f, 0x1.0ec636p-112f, 0.0f, 0x1.fbf40ap-39f, 0.0f, 0.0f, 0.0f,
     0x1.507a24p-7f, 0.0f, 0x1.f9dca4p-43f, 0x1.2108dap-75f, 0x1.73c01ap-82f, 0.0f,
     0x1.b5eabap-59f, 0x1.0ab03ap-41f, 0x1.68561p-98f, 0.0f, 0x1.35fca8p-113f, 0.0f,
     0.0f, 0.0f, 0x1.469cap-17f, 0.0f, 0x1.b776dap-115f, 0x1.eda5d8p-110f,
     0x1.7d266cp-39f, 0x1.0addf8p-20f, 0.0f, 0.0f, 0x1.7769e6p-85f, 0.0f,
     0x1.f2fea4p-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.28bdfp-74f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.73c10cp-40f, 0.0f, 0x1.7a778cp-107f, 0x1.d6d9d4p-73f, 0.0f,
     0x1.a20198p-82f, 0.0f, 0.0f, 0x1.f95d52p-47f, 0.0f, 0.0f, 0.0f, 0x1.c53e92p-39f,
     0.0f, 0.0f, 0x1.c5aa4p-85f, 0.0f, 0.0f, 0.0f, 0x1.7dfd7ep-63f, 0x1.6e68dp-25f,
     0.0f, 0.0f, 0.0f, 0x1.1d98a2p-34f, 0.0f, 0.0f, 0x1.6cf4b4p-10f, 0.0f, 0.0f, 0.0f,
     0x1.020d7ap-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f4773ap-56f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f6a7dp-75f, 0x1.52e354p-47f, 0x1.02e9aep-20f, 0x1.33fc12p-1f,
     0x1.ed65bcp-21f, 0x1.1166ap-35f, 0x1.66d5acp-44f, 0x1.cf3542p-48f,
     0x1.9b3684p-71f, 0x1.ca2758p-91f, 0.0f, 0x1.d631a8p-82f, 0.0f, 0x1.24f146p-113f,
     0x1.5b62bep-3f, 0.0f, 0x1.a6ebeap-36f, 0.0f, 0x1.c19012p-115f, 0x1.312acep-24f,
     0.0f, 0x1.8b6822p-22f, 0x1.7af88ap-106f, 0x1.ed3084p-25f, 0x1.54caaap-114f,
     0x1.6f315ep-28f, 0.0f, 0x1.e71a34p-74f, 0.0f, 0x1.e6fde8p-96f, 0.0f,
     0x1.a11ecap-86f, 0.0f, 0x1.622878p-46f, 0.0f, 0x1.c024c8p-37f, 0.0f,
     0x1.0fdc5cp-88f, 0x1.00cf06p-32f, 0.0f, 0x1.23a82ep-93f, 0x1.39f826p-74f,
     0x1.540d78p-98f, 0.0f, 0.0f, 0x1.0150ep-13f, 0x1.b79998p-67f, 0.0f,
     0x1.311e0ep-85f, 0.0f, 0x1.0570eap-55f, 0.0f, 0x1.59cf1ep-31f, 0.0f,
     0x1.7b05dep-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b59d42p-24f, 0.0f, 0.0f,
     0x1.0d883ep-49f, 0x1.1a0b3ep-59f, 0.0f, 0.0f, 0x1.ee34cap-99f, 0.0f, 0.0f,
     0x1.76773p-24f, 0x1.effc66p-17f, 0x1.9372ccp-57f, 0x1.fe15bap-2f, 0.0f,
     0x1.bb8af6p-92f, 0x1.d578ccp-68f, 0.0f, 0.0f, 0x1.5cec7p-45f, 0.0f,
     0x1.c9e25ep-74f, 0.0f, 0x1.a74b1ap-76f, 0.0f, 0x1.c1a4bp-67f, 0.0f,
     0x1.d2bfd4p-28f, 0x1.65d10cp-109f, 0x1.bca72ap-98f, 0.0f, 0.0f, 0x1.0cc99p-92f,
     0x1.6879cep-93f, 0x1.81d54ap-65f, 0.0f, 0.0f, 0.0f, 0x1.ff6c2cp-124f, 0.0f, 0.0f,
     0x1.1cc956p-87f, 0.0f, 0x1.415538p-109f, 0x1.6028dep-62f, 0x1.10cc54p-29f,
     0x1.46da14p-109f, 0.0f, 0.0f, 0.0f, 0x1.1e691p-45f, 0x1.3213a4p-105f,
     0x1.caa0a4p-113f, 0x1.ee53cp-20f, 0.0f, 0.0f, 0x1.765adap-97f, 0x1.501d0ep-4f,
     0x1.990374p-59f, 0x1.82e356p-54f, 0x1.52de2p-4f, 0x1.d099c8p-87f,
     0x1.c73344p-45f, 0x1.aacadcp-99f, 0x1.a9d49ep-32f, 0x1.0769fp-53f, 0.0f,
     0x1.9f72dap-11f, 0.0f, 0x1.3529f2p-49f, 0.0f, 0.0f, 0x1.e1b5dcp-116f, 0.0f, 0.0f,
     0x1.aed11ap-77f, 0.0f, 0.0f, 0.0f, 0x1.8c1c3cp-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.76d6fp-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a77a62p-120f,
     0.0f, 0x1.fce6a8p-112f, 0x1.ccc7d4p-18f, 0x1.a6d09cp-1f, 0.0f, 0.0f,
     0x1.fdbe5p-88f, 0.0f, 0.0f, 0x1.8faaacp-26f, 0x1.2727d6p-30f, 0.0f,
     0x1.0d1dbep-121f, 0.0f, 0x1.617f22p-35f, 0x1.151dacp-75f, 0x1.66977cp-17f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.997076p-111f, 0x1.d687dap-60f, 0.0f, 0x1.c196bcp-14f, 0.0f,
     0x1.a4b154p-76f, 0.0f, 0x1.02a5c4p-75f, 0x1.d0a5b4p-91f, 0.0f, 0x1.ea4c9p-8f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a57154p-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4f127ap-85f, 0x1.589ea4p-98f,
     0x1.1e94b2p-12f, 0.0f, 0.0f, 0x1.cdd3fcp-23f, 0x1.cd3678p-72f, 0x1.28550ep-111f,
     0x1.5b9d94p-121f, 0.0f, 0.0f, 0x1.3b07b6p-103f, 0x1.946764p-121f,
     0x1.624c68p-41f, 0.0f, 0.0f, 0x1.5c145cp-59f, 0x1.7f7d06p-96f, 0x1.3a0848p-54f,
     0.0f, 0.0f, 0.0f, 0x1.69fce6p-1f, 0x1.475c86p-122f, 0x1.a80a96p-57f, 0.0f,
     0x1.4b944p-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f98572p-68f, 0.0f, 0x1.a7966ap-120f,
     0x1.06ed86p-41f, 0.0f, 0.0f, 0x1.dfebe8p-37f, 0x1.4ee974p-37f, 0.0f,
     0x1.06b23cp-21f, 0x1.f49126p-100f, 0.0f, 0.0f, 0x1.fcf18p-15f, 0.0f,
     0x1.3bd1ccp-11f, 0.0f, 0x1.f320d6p-14f, 0.0f, 0.0f, 0.0f, 0x1.3b6f7ep-1f,
     0x1.052e36p-125f, 0.0f, 0x1.6b191ep-64f, 0x1.fa4adp-90f, 0x1.334ccap-36f,
     0x1.e38dd6p-96f, 0.0f, 0x1.08b32ep-95f, 0x1.4bb306p-6f, 0.0f, 0x1.e14e44p-32f,
     0.0f, 0x1.c737a6p-97f, 0x1.1623dep-6f, 0.0f, 0x1.d08c9p-56f, 0x1.64e852p-108f,
     0x1.d8ba52p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1a57d4p-123f, 0.0f, 0.0f,
     0x1.4a3028p-59f, 0.0f, 0x1.43cb3ap-97f, 0x1.3fc258p-59f, 0x1.e5302ep-45f, 0.0f,
     0x1.bacd76p-10f, 0.0f, 0.0f, 0x1.2e490cp-83f, 0.0f, 0.0f, 0.0f, 0x1.8e2536p-102f,
     0.0f, 0x1.6ce1ep-79f, 0.0f, 0x1.90f8e8p-115f, 0x1.31d94p-43f, 0x1.cbc7eap-73f,
     0.0f, 0.0f, 0x1.70bb72p-88f, 0.0f, 0.0f, 0x1.b814dcp-75f, 0x1.22bb54p-29f,
     0x1.15ab28p-70f, 0.0f, 0x1.2f619ep-29f, 0.0f, 0x1.01ce8ap-119f, 0x1.594d62p-80f,
     0x1.efc468p-37f, 0.0f, 0x1.a395dep-72f, 0x1.5b10aap-107f, 0x1.4e6d3ap-99f, 0.0f,
     0x1.ac327ep-50f, 0.0f, 0.0f, 0x1.895b18p-35f, 0x1.d9024ep-94f, 0.0f, 0.0f,
     0x1.6a4e92p-92f, 0x1.02f028p-7f, 0.0f, 0.0f, 0.0f, 0x1.e6b2ecp-51f, 0.0f,
     0x1.4ce664p-87f, 0.0f, 0x1.1b925ap-2f, 0x1.35f03ap-75f, 0.0f, 0x1.fab1d2p-55f,
     0x1.e4d008p-44f, 0.0f, 0x1.fc3bfcp-120f, 0x1.6f3946p-10f, 0.0f, 0.0f,
     0x1.19f4f8p-112f, 0.0f, 0.0f, 0x1.39c39cp-120f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bc7fb6p-63f, 0.0f, 0x1.975e62p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bdef12p-70f, 0x1.a12e74p-75f, 0.0f, 0x1.e31838p-33f, 0x1.4acd5ep-106f,
     0x1.c33c7ep-73f, 0.0f, 0x1.cfc7d4p-51f, 0.0f, 0x1.a186b4p-94f, 0.0f, 0.0f, 0.0f,
     0x1.32c1bcp-8f, 0.0f, 0.0f, 0x1.28505p-25f, 0x1.2f714ep-84f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f8dd3p-96f, 0.0f, 0x1.d5d72ep-119f, 0x1.cf274cp-97f,
     0x1.c993b2p-57f, 0x1.05387p-122f, 0x1.6a2afap-27f, 0x1.8366bap-63f, 0.0f,
     0x1.e32616p-46f, 0.0f, 0x1.bb76f6p-96f, 0x1.036ec4p-49f, 0.0f, 0x1.ec33c6p-25f,
     0x1.6780f8p-21f, 0x1.238b84p-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7ee50ap-106f, 0.0f, 0.0f, 0.0f, 0x1.5db236p-31f, 0x1.bab536p-76f,
     0x1.e25986p-94f, 0.0f, 0.0f, 0.0f, 0x1.631db6p-100f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e4d11ep-111f, 0x1.773ccp-5f, 0.0f, 0.0f, 0x1.db1076p-93f, 0.0f,
     0x1.cfa2acp-72f, 0x1.17268cp-91f, 0x1.52b1d8p-73f, 0x1.f09d94p-117f,
     0x1.e4d8bp-60f, 0.0f, 0x1p0f, 0.0f, 0x1.d99cfcp-48f, 0x1.2ea174p-32f,
     0x1.2f0d7ep-45f, 0.0f, 0x1.3e6eacp-75f, 0x1.8a101cp-105f, 0.0f, 0x1.36f5acp-77f,
     0x1.7f125ep-47f, 0.0f, 0x1.28d662p-42f, 0x1.fba1b2p-100f, 0.0f, 0x1.d08736p-108f,
     0x1.4d4244p-72f, 0x1.d555b8p-31f, 0.0f, 0.0f, 0x1.64d126p-76f, 0.0f,
     0x1.950788p-16f, 0x1.96ef9ap-23f, 0.0f, 0.0f, 0x1.dd0302p-23f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.47494ep-62f, 0.0f, 0.0f, 0x1.33fc2p-61f, 0.0f, 0x1.ce4b3ap-19f, 0.0f,
     0x1.aedeb6p-103f, 0.0f, 0.0f, 0.0f, 0x1.0dcc06p-3f, 0.0f, 0x1.c9905p-88f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b33356p-45f, 0.0f, 0x1.be89c4p-72f,
     0.0f, 0.0f, 0x1.99b52ep-40f, 0x1.4d03d2p-5f, 0x1.eaf71p-54f, 0x1.b4aabap-76f,
     0.0f, 0x1.b98366p-107f, 0x1.4897d6p-111f, 0x1.fbddbp-34f, 0.0f, 0.0f, 0.0f,
     0x1.b202e4p-101f, 0x1.2c41a2p-69f, 0x1.85acdcp-60f, 0x1.b3fdecp-67f,
     0x1.e84ae2p-96f, 0.0f, 0x1.6668f8p-28f, 0x1.c0c7fep-41f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7095f4p-83f, 0.0f, 0x1.0b6648p-4f, 0.0f, 0.0f, 0x1.9199d2p-94f,
     0x1.944098p-50f, 0x1.5356acp-125f, 0x1.939474p-27f, 0.0f, 0x1.6ccddap-75f, 0.0f,
     0x1.62b564p-9f, 0.0f, 0.0f, 0x1.93a02ep-81f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b4579ap-39f, 0.0f, 0.0f, 0x1.308b26p-106f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a24b58p-14f, 0.0f, 0x1.8daaap-65f, 0.0f, 0x1.f8066p-44f, 0.0f,
     0x1.5fd73ap-115f, 0x1.776992p-20f, 0.0f, 0x1.ec3f42p-39f, 0x1.59dffp-125f,
     0x1.c7e2b4p-57f, 0.0f, 0x1.32c0b2p-71f, 0.0f, 0.0f, 0.0f, 0x1.9290d6p-70f, 0.0f,
     0.0f, 0x1.65441ap-11f, 0x1.6726f4p-59f, 0.0f, 0.0f, 0.0f, 0x1.044ff8p-84f, 0.0f,
     0x1.8b54cp-66f, 0x1.660f38p-86f, 0x1.045c2p-47f, 0.0f, 0.0f, 0x1.633c0ep-27f,
     0.0f, 0.0f, 0x1.34e0ecp-110f, 0.0f, 0x1.d59298p-118f, 0.0f, 0x1.523138p-69f,
     0.0f, 0.0f, 0.0f, 0x1.be1a44p-85f, 0.0f, 0x1.70c572p-87f, 0.0f, 0x1.afaba4p-89f,
     0x1.c76224p-75f, 0.0f, 0x1.fd658ep-25f, 0.0f, 0x1.1c4e92p-9f, 0.0f,
     0x1.04443cp-53f, 0.0f, 0x1.13fccep-60f, 0x1.bec37p-25f, 0x1.9792b6p-108f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9d2fe8p-22f, 0x1.e85bbcp-14f, 0x1.897f3cp-35f, 0.0f, 0.0f,
     0.0f, 0x1.dffc58p-46f, 0x1.73940ep-59f, 0.0f, 0x1.65aa26p-96f, 0x1.858b56p-9f,
     0x1.ed0d28p-8f, 0.0f, 0x1.482668p-95f, 0.0f, 0x1.2771a8p-10f, 0.0f,
     0x1.af55e4p-95f, 0x1.1c36f6p-123f, 0x1.55b004p-1f, 0.0f, 0.0f, 0x1.8b9ceap-1f,
     0.0f, 0.0f, 0x1.567c3cp-101f, 0x1.528618p-17f, 0x1.db715ap-66f, 0.0f,
     0x1.040bb2p-46f, 0x1.ea228ep-1f, 0.0f, 0.0f, 0x1.cfc5bcp-112f, 0x1.a8557cp-96f,
     0.0f, 0x1.b4d514p-37f, 0.0f, 0x1.9128aep-69f, 0x1.544eap-34f, 0x1.a076ep-103f,
     0.0f, 0x1.65ab6p-96f, 0x1.107edap-121f, 0.0f, 0x1.543b4cp-121f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef___m128_2 global_bench_acc;
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
        Sleef___m128_2 local_acc;
        int32_t i;
        ml_float4_t tmp0;
        ml_float4_t tmp1;
        ml_float4_t tmp2;
        ml_float4_t tmp3;
        ml_float4_t tmp4;
        ml_float4_t tmp5;
        Sleef___m128_2 tmp6;
        int32_t tmp7;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1004));){
            ml_float4_t tmp0;
            Sleef___m128_2 tmp1;
            ml_float4_t tmp2;
            ml_float4_t tmp3;
            ml_float4_t tmp4;
            ml_float4_t tmp5;
            ml_float4_t tmp6;
            ml_float4_t tmp7;
            Sleef___m128_2 tmp8;
            int32_t tmp9;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_finz_sincosf4_u10avx2128(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = local_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = local_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef___m128_2) {.x=tmp4, .y=tmp7});
            local_acc = tmp8;
            tmp9 = i + INT32_C(4);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = local_acc.x;
        tmp2 = tmp0 + tmp1;
        tmp3 = global_bench_acc.y;
        tmp4 = local_acc.y;
        tmp5 = tmp3 + tmp4;
        tmp6 = ((Sleef___m128_2) {.x=tmp2, .y=tmp5});
        global_bench_acc = tmp6;
        tmp7 = j + INT32_C(1);
        j = tmp7;
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
    printf("Sleef_finz_sincosf4_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_sincosf4_u10avx2128 bench acc {.x=[%a, %a, %a, %a], .y=[%a, %a, %a, %a]}\n", global_bench_acc.x[0], global_bench_acc.x[1], global_bench_acc.x[2], global_bench_acc.x[3], global_bench_acc.y[0], global_bench_acc.y[1], global_bench_acc.y[2], global_bench_acc.y[3]);
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
