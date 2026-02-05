/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_exp10f4_u35kvx.c --function Sleef_exp10f4_u35kvx \
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
     0.0f, 0.0f, 0.0f, 0x1.0dd0eap-93f, 0.0f, 0x1.2b10f6p-56f, 0x1.4fdc9ep-11f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.6023aap-24f, 0x1.1f6c0ap-63f, 0x1.cf4f2ep-33f, 0.0f,
     0x1.625c34p-109f, 0x1.643838p-59f, 0x1.29c06ap-122f, 0x1.778a1ap-25f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b5da98p-22f, 0.0f, 0.0f, 0.0f,
     0x1.2bb99cp-118f, 0.0f, 0x1.052f52p-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f4bbacp-101f, 0x1.585dacp-14f, 0x1.f6521cp-47f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a57f64p-87f, 0.0f, 0.0f, 0x1.019092p-31f, 0x1.f6d94cp-21f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4b5594p-119f, 0.0f, 0x1.2d6a2ep-50f, 0x1.a8800cp-43f, 0.0f,
     0x1.6db0c8p-74f, 0x1.76723cp-5f, 0.0f, 0x1.dc753ap-73f, 0x1.22b12cp-19f, 0.0f,
     0x1.23a966p-122f, 0x1.ec3886p-11f, 0.0f, 0x1.e83284p-42f, 0x1.e6c0dcp-12f, 0.0f,
     0.0f, 0.0f, 0x1.314064p-114f, 0.0f, 0x1.119304p-26f, 0x1.e522ccp-112f, 0.0f,
     0.0f, 0x1.faddb2p-9f, 0x1.793d08p-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a23ep-79f,
     0.0f, 0.0f, 0x1.38554ep-85f, 0.0f, 0x1.1a6e8ap-91f, 0.0f, 0.0f, 0.0f,
     0x1.8eecp-61f, 0x1.e798f2p-65f, 0x1.e6a37cp-45f, 0.0f, 0x1.5b5da2p-14f,
     0x1.cc22d6p-91f, 0x1.077c06p-10f, 0x1.b4e014p-13f, 0x1.5b280cp-20f,
     0x1.38b868p-116f, 0.0f, 0x1.a4f0aap-125f, 0.0f, 0x1.c7e534p-76f, 0.0f,
     0x1.6b01c2p-103f, 0x1.9f013ep-83f, 0.0f, 0x1.722bcep-16f, 0x1.6e8792p-48f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.31b98ep-1f, 0.0f, 0x1.26999p-96f, 0.0f,
     0x1.b09afp-106f, 0.0f, 0x1.b8181ep-114f, 0x1.d3181cp-68f, 0x1.91cf1p-37f,
     0x1.44c0e4p-84f, 0.0f, 0x1.849af8p-57f, 0x1.b250a2p-15f, 0x1.b881cp-28f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c4b5ecp-12f, 0x1.47cbb4p-109f, 0x1.9d0772p-85f,
     0x1.2e299cp-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eca4d6p-90f, 0x1.f443f4p-87f, 0.0f,
     0.0f, 0x1.860ba6p-48f, 0.0f, 0.0f, 0.0f, 0x1.29467p-49f, 0.0f, 0.0f,
     0x1.906664p-22f, 0x1.4b2ecep-93f, 0x1.aa2254p-122f, 0x1.b44d64p-25f,
     0x1.f8ca62p-69f, 0x1.5d9f1ap-39f, 0.0f, 0x1.07b1cp-9f, 0.0f, 0.0f, 0.0f,
     0x1.f3e2ecp-120f, 0.0f, 0.0f, 0x1.62b528p-76f, 0.0f, 0.0f, 0x1.db1c2cp-97f,
     0x1.d755p-38f, 0.0f, 0.0f, 0.0f, 0x1.73ca94p-104f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cf51e4p-55f, 0x1.bac476p-14f, 0x1.9bb012p-83f, 0x1.08f6cp-33f,
     0x1.651fbep-23f, 0.0f, 0x1.ec3e1ap-110f, 0x1.dcf516p-54f, 0.0f, 0x1.580ef4p-87f,
     0.0f, 0x1.2555b4p-26f, 0x1p0f, 0x1.60df4cp-61f, 0x1.b6658ap-76f, 0x1.ddaf16p-23f,
     0x1.7e1e1ep-12f, 0.0f, 0.0f, 0x1.71afb6p-24f, 0.0f, 0x1.73a908p-85f, 0.0f, 0.0f,
     0.0f, 0x1.5a9f68p-50f, 0.0f, 0.0f, 0x1.811b94p-6f, 0x1.3fbd12p-85f, 0.0f,
     0x1.e0ca0ep-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c462cap-112f, 0.0f, 0.0f,
     0x1.11f348p-92f, 0.0f, 0.0f, 0.0f, 0x1.2ab18p-20f, 0x1.250a26p-1f, 0.0f,
     0x1.d5037ep-74f, 0x1.4da9eap-95f, 0.0f, 0.0f, 0x1.e49ae4p-82f, 0x1.0652ep-10f,
     0x1.d4fd7cp-103f, 0x1.d50c2ap-26f, 0x1.f9d5f8p-71f, 0.0f, 0.0f, 0x1.a597dap-6f,
     0x1.7992b6p-72f, 0.0f, 0x1.155dfp-71f, 0x1.a29e4ap-47f, 0x1.c3ea46p-43f, 0.0f,
     0x1.d357e6p-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.20d9cep-80f, 0.0f, 0x1.278138p-81f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a16ecap-62f, 0x1.7cd576p-88f, 0.0f, 0x1.d43c7ep-55f,
     0x1.b01692p-9f, 0.0f, 0x1.2e579ap-7f, 0x1.4ddb8ap-69f, 0.0f, 0x1.a89c86p-9f,
     0x1.3d159ap-77f, 0x1.0ce8c4p-23f, 0x1.8a2152p-15f, 0x1.65ebap-61f, 0.0f, 0.0f,
     0.0f, 0x1.667d86p-109f, 0.0f, 0x1.c0ecb4p-61f, 0x1.ceb5dap-22f, 0x1.e2f7cep-66f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.2e1818p-39f, 0x1.6b9056p-118f, 0.0f, 0x1.0d488cp-18f,
     0x1.8352cp-91f, 0x1.832d84p-3f, 0x1.994806p-66f, 0.0f, 0.0f, 0x1.0ebbdap-103f,
     0x1.609f9cp-34f, 0x1.394014p-116f, 0x1.4836f2p-116f, 0.0f, 0.0f, 0.0f,
     0x1.59c304p-40f, 0.0f, 0x1.c4a6bap-116f, 0x1.e80d68p-101f, 0x1.5db986p-6f, 0.0f,
     0.0f, 0.0f, 0x1.81e90ap-95f, 0x1.49a902p-10f, 0.0f, 0.0f, 0x1.dc71c6p-104f, 0.0f,
     0x1.fb346p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7affb4p-55f,
     0x1.6afcb2p-45f, 0.0f, 0x1.1cc262p-11f, 0x1.a6e05cp-22f, 0.0f, 0x1.a1db76p-14f,
     0.0f, 0.0f, 0.0f, 0x1.0e9f42p-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8c7bf8p-16f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.c1a17ep-118f, 0x1.3dfe22p-67f, 0.0f,
     0x1.7934e6p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a204acp-78f, 0.0f,
     0x1.53626ap-1f, 0.0f, 0.0f, 0x1.37469p-2f, 0x1.f9bb3p-39f, 0x1.31a876p-52f,
     0x1.5b245ep-102f, 0x1.04f066p-65f, 0x1.a5a9b4p-24f, 0.0f, 0.0f, 0x1.7c3638p-11f,
     0x1.6f2e48p-100f, 0x1.860164p-34f, 0.0f, 0x1.f194a2p-67f, 0x1.d5dc68p-56f, 0.0f,
     0x1.251574p-111f, 0.0f, 0.0f, 0.0f, 0x1.c16d7ap-42f, 0.0f, 0x1.4e5722p-123f,
     0.0f, 0.0f, 0.0f, 0x1.8423dcp-4f, 0.0f, 0x1.aa3ad6p-12f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c02f48p-86f, 0x1.537618p-81f, 0x1.c69ad6p-29f, 0x1.590bbap-44f, 0.0f,
     0x1.9b9f5p-28f, 0.0f, 0.0f, 0.0f, 0x1.bbfb1ap-108f, 0x1.e4826cp-11f,
     0x1.90d06p-50f, 0.0f, 0x1.c8a68ap-70f, 0.0f, 0x1.b34b3p-89f, 0x1.7f0928p-37f,
     0x1.fe2d16p-13f, 0x1.c8425ap-108f, 0x1.b8bee6p-5f, 0x1.6c4bbap-97f, 0.0f, 0.0f,
     0x1.cd23dap-70f, 0x1.aa8a8ep-111f, 0x1.92c61ep-114f, 0x1.86dd3p-74f,
     0x1.2fc29p-80f, 0.0f, 0x1.966b6p-103f, 0x1.202f8ap-90f, 0x1.0a0dbep-125f, 0.0f,
     0.0f, 0.0f, 0x1.145cdep-24f, 0x1.29c74ep-105f, 0.0f, 0x1.472032p-49f,
     0x1.61716p-20f, 0x1.f3aaf4p-111f, 0x1.3c97eap-48f, 0x1.a195e4p-103f,
     0x1.06655cp-21f, 0x1.bf5012p-116f, 0x1.08b30ep-49f, 0x1.165c16p-96f,
     0x1.15c938p-83f, 0x1.5025fp-63f, 0x1.4201c4p-75f, 0x1.738e6p-73f, 0.0f,
     0x1.a94a8p-104f, 0.0f, 0.0f, 0x1.64f04p-35f, 0x1.ad3aa4p-110f, 0.0f,
     0x1.8caf98p-120f, 0.0f, 0x1.f24274p-62f, 0x1.ece7e4p-18f, 0.0f, 0x1.8a753ap-93f,
     0x1.a37f2p-71f, 0.0f, 0x1.031cc4p-46f, 0.0f, 0.0f, 0x1.b802ecp-51f,
     0x1.ea7a16p-108f, 0x1.62b4eap-125f, 0x1.e8c1acp-123f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6b7416p-48f, 0x1.427136p-88f, 0x1.07a796p-11f, 0.0f, 0x1.018f5cp-110f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.75dd08p-1f, 0x1.b4b0f8p-125f, 0.0f, 0x1.9120cp-79f,
     0x1.6a543ep-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8a599ap-104f, 0.0f,
     0.0f, 0x1.f918f2p-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.93bbf2p-34f, 0.0f,
     0x1.85a398p-55f, 0.0f, 0x1.1a49d8p-117f, 0x1.a4cc44p-126f, 0.0f, 0.0f, 0.0f,
     0x1.7ed4fcp-67f, 0.0f, 0x1.330946p-67f, 0x1.4934ep-30f, 0x1.91d418p-119f,
     0x1.da8524p-17f, 0x1.78004p-71f, 0.0f, 0x1.e468d2p-60f, 0.0f, 0x1.ed7f5ep-73f,
     0x1.3a3dcp-70f, 0x1.2992e6p-117f, 0x1.b0efp-21f, 0.0f, 0x1.596d7cp-79f,
     0x1.f763b4p-121f, 0x1.eb97p-95f, 0.0f, 0.0f, 0x1.e3b2b8p-44f, 0x1.89094p-108f,
     0.0f, 0x1.e75906p-26f, 0.0f, 0x1.31c588p-83f, 0.0f, 0x1.b57d06p-52f, 0.0f, 0.0f,
     0x1.d7cedep-122f, 0.0f, 0.0f, 0x1.8de2b8p-111f, 0.0f, 0.0f, 0x1.4fc932p-112f,
     0x1.17ef3ap-16f, 0.0f, 0x1.7d5e52p-84f, 0x1.396154p-74f, 0x1.94a884p-89f,
     0x1.4eb4a8p-119f, 0.0f, 0.0f, 0x1.83c6a4p-105f, 0x1.de62cp-104f, 0x1.337dep-1f,
     0x1.13a50ap-7f, 0x1.57cc86p-99f, 0x1.691038p-44f, 0.0f, 0.0f, 0x1.be2652p-27f,
     0.0f, 0.0f, 0x1.36074p-19f, 0x1.48d538p-53f, 0.0f, 0.0f, 0x1.259434p-113f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.eca3aap-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.aed5e8p-42f, 0.0f, 0x1.7b4852p-109f, 0.0f, 0.0f, 0.0f,
     0x1.02f3b6p-3f, 0x1.7a752ep-50f, 0.0f, 0.0f, 0x1.b2b002p-42f, 0x1.81ea9cp-37f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ff8fa6p-11f, 0x1.4849ecp-122f, 0x1.fc7a12p-123f,
     0.0f, 0x1.79793cp-2f, 0x1.6ab48ep-8f, 0.0f, 0x1.033acp-62f, 0.0f,
     0x1.82c56ap-93f, 0.0f, 0x1.f31d84p-93f, 0x1.1c8f6cp-8f, 0x1.d972eap-4f, 0.0f,
     0x1.93811p-53f, 0.0f, 0x1.26052ep-52f, 0x1.e7588ep-45f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.94a7e6p-121f, 0x1.2e02bap-51f, 0.0f, 0.0f, 0x1.6c5112p-19f, 0.0f,
     0x1.90f028p-2f, 0.0f, 0x1.02e876p-93f, 0.0f, 0x1.6e8fa8p-64f, 0x1.6e385cp-21f,
     0x1.f3b898p-1f, 0x1.90d07ep-125f, 0.0f, 0x1.398334p-56f, 0x1.239294p-121f, 0.0f,
     0.0f, 0.0f, 0x1.74fd66p-80f, 0x1.5ecb28p-19f, 0.0f, 0x1.458646p-123f, 0.0f, 0.0f,
     0.0f, 0x1.5b16e6p-17f, 0.0f, 0.0f, 0.0f, 0x1.965924p-39f, 0.0f, 0x1.7249c8p-79f,
     0.0f, 0x1.bf70bp-25f, 0.0f, 0.0f, 0x1.8e8bdcp-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.115f84p-42f, 0.0f, 0.0f, 0x1.f58d4p-79f,
     0.0f, 0.0f, 0x1.c20c1ep-71f, 0x1.24d85p-49f, 0.0f, 0.0f, 0x1.7d91bep-87f,
     0x1.d16b38p-9f, 0x1.3bb4a6p-81f, 0x1.311214p-101f, 0.0f, 0x1.64f7dep-54f,
     0x1.4e1384p-117f, 0x1.e05fe2p-3f, 0x1.6f097cp-57f, 0x1.a92768p-53f,
     0x1.e613fcp-84f, 0x1.ec355p-82f, 0.0f, 0.0f, 0.0f, 0x1.a9786ep-114f, 0.0f,
     0x1.198066p-117f, 0x1.67226ap-7f, 0x1.5e081ap-85f, 0x1.b9e26ap-61f,
     0x1.c73c6ep-82f, 0x1.2275dp-117f, 0.0f, 0x1.e2007ap-77f, 0.0f, 0.0f, 0.0f,
     0x1.d1a0cep-24f, 0.0f, 0x1.92133p-103f, 0x1.18282ep-19f, 0.0f, 0.0f,
     0x1.f40686p-32f, 0x1.01ea8cp-96f, 0.0f, 0x1.05b446p-98f, 0.0f, 0x1.98188cp-111f,
     0x1.b945a8p-81f, 0x1.3c0852p-99f, 0.0f, 0x1.a27dap-51f, 0.0f, 0.0f,
     0x1.4f8f32p-41f, 0.0f, 0x1.8702fap-78f, 0.0f, 0x1.dc68f8p-8f, 0x1.930c3p-20f,
     0x1.7c6fcep-80f, 0.0f, 0.0f, 0x1.a6373cp-115f, 0.0f, 0x1.b3ff8ep-56f, 0.0f, 0.0f,
     0x1.ce7546p-78f, 0.0f, 0x1.4e67cep-32f, 0x1.d51864p-14f, 0x1.65fa08p-71f,
     0x1.85e9c2p-93f, 0.0f, 0x1.e21dbcp-123f, 0x1.37b1fcp-55f, 0x1.fee7fap-99f, 0.0f,
     0.0f, 0x1.9aa448p-117f, 0x1.6a9fb2p-25f, 0.0f, 0x1.d30be8p-11f, 0x1.03e82ep-77f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.868b48p-36f, 0.0f, 0x1.979faep-106f, 0.0f,
     0x1.907746p-23f, 0.0f, 0.0f, 0x1.2ee2acp-17f, 0.0f, 0x1.dc6a4ep-104f, 0.0f,
     0x1.904adcp-42f, 0.0f, 0x1.7ddf16p-71f, 0.0f, 0.0f, 0x1.cf0eecp-29f, 0.0f,
     0x1.b03fd6p-106f, 0.0f, 0x1.7a8308p-114f, 0x1.cab39ep-109f, 0x1.63aa22p-104f,
     0.0f, 0.0f, 0x1.d8e13ep-53f, 0x1.22829p-67f, 0x1.94efcap-74f, 0x1.0046cp-72f,
     0.0f, 0x1.744926p-71f, 0.0f, 0x1.1eae94p-58f, 0.0f, 0.0f, 0x1.2bfeccp-115f,
     0x1.22f7bep-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f26434p-74f, 0x1.f50906p-93f,
     0x1.8431a4p-64f, 0x1.bf8f68p-19f, 0x1.8c4a58p-86f, 0.0f, 0x1.77d0fap-8f, 0.0f,
     0x1.6b7d98p-48f, 0x1.7a1af6p-64f, 0.0f, 0x1.130f3cp-76f, 0.0f, 0.0f,
     0x1.97310ap-68f, 0.0f, 0x1.bea728p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b8239p-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.36790cp-33f, 0.0f, 0x1.60ee2cp-78f,
     0x1.cec9e4p-60f, 0.0f, 0.0f, 0x1.e9f27ep-1f, 0.0f, 0x1.bd41bep-14f, 0.0f, 0.0f,
     0.0f, 0x1.3a9e66p-90f, 0x1.017d18p-46f, 0.0f, 0x1.559ddcp-105f, 0.0f, 0.0f,
     0x1.6befap-31f, 0x1.3a9d4p-122f, 0x1.8df534p-60f, 0x1.d14728p-114f,
     0x1.1a0d3cp-53f, 0x1.1b31f8p-14f, 0x1.1c887cp-107f, 0.0f, 0.0f, 0.0f,
     0x1.87b92ap-51f, 0x1.ea1d7p-104f, 0x1.99ec0ep-75f, 0x1.2566aep-58f,
     0x1.d5f434p-107f, 0x1.00026cp-22f, 0.0f, 0.0f, 0x1.e17db6p-23f, 0.0f, 0.0f, 0.0f,
     0x1.b3df9ap-41f, 0x1.819cbap-126f, 0.0f, 0.0f, 0x1.24e8d8p-61f, 0.0f,
     0x1.c7c6bcp-65f, 0.0f, 0x1.6055b6p-34f, 0x1.46d44cp-2f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.61f016p-120f, 0x1p0f, 0x1.65503p-119f, 0.0f,
     0x1.8f59cap-31f, 0.0f, 0.0f, 0.0f, 0x1.4608dp-38f, 0x1.160f56p-39f,
     0x1.c40862p-30f, 0x1.39935cp-71f, 0x1.c4547ap-104f, 0.0f, 0x1.23e59cp-6f, 0.0f,
     0.0f, 0x1.54fc1ap-28f, 0x1.33331cp-100f, 0x1.187c6ap-50f, 0x1.d93608p-32f, 0.0f,
     0.0f, 0x1.af6fd8p-75f, 0.0f, 0x1.12b544p-104f, 0x1.da0888p-4f, 0x1.1a3a98p-104f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0b107ap-20f, 0.0f, 0x1.e14f42p-118f,
     0x1.0d8ca6p-21f, 0.0f, 0x1.a7bf6cp-64f, 0.0f, 0.0f, 0.0f, 0x1.d121fcp-94f, 0.0f,
     0x1.ebd88p-84f, 0x1.6c9d4ap-36f, 0x1.2a2d2ep-70f, 0x1.4f8be8p-16f,
     0x1.ea658p-94f, 0.0f, 0x1.c56e9ap-6f, 0.0f, 0.0f, 0.0f, 0x1.a58014p-19f,
     0x1.b2902cp-99f, 0x1.d26d1ap-63f, 0x1.263fecp-26f, 0x1.0cc79ap-115f,
     0x1.7bb41ap-63f, 0x1.0c5c5cp-58f, 0.0f, 0x1.cc5522p-65f, 0.0f, 0x1.259478p-66f,
     0x1.98bcbep-74f, 0x1.28233ep-82f, 0.0f, 0x1.f0623p-79f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8f9c52p-105f, 0x1.d553a2p-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9f7524p-3f, 0x1.15c51ap-96f, 0.0f, 0.0f, 0x1.bbea64p-123f, 0.0f, 0.0f, 0.0f,
     0x1.91b174p-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c12dcap-43f, 0x1.c388c6p-4f, 0.0f,
     0.0f, 0x1.43dbeep-30f, 0.0f, 0x1.d62948p-109f, 0x1.50fdc2p-94f, 0.0f, 0.0f,
     0x1.170c46p-37f, 0x1.613758p-69f, 0x1.418416p-3f, 0.0f
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
            tmp1 = Sleef_exp10f4_u35kvx(tmp0);
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
    printf("Sleef_exp10f4_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_exp10f4_u35kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
