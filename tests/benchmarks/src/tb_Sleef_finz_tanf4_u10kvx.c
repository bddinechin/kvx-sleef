/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_tanf4_u10kvx.c --function Sleef_finz_tanf4_u10kvx \
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
     0.0f, 0.0f, 0x1.d3d72p-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.222692p-89f,
     0.0f, 0x1.42426cp-59f, 0x1.5704d4p-85f, 0x1.981564p-29f, 0.0f, 0x1.77a76cp-124f,
     0.0f, 0.0f, 0x1.a4cf6ep-43f, 0.0f, 0x1.488ce4p-96f, 0x1p0f, 0x1.a35372p-118f,
     0x1.1fde8cp-117f, 0x1.c7d0b2p-119f, 0.0f, 0.0f, 0.0f, 0x1.271094p-36f,
     0x1.e6fb96p-64f, 0.0f, 0x1.8d28dap-52f, 0x1.efbb24p-21f, 0.0f, 0.0f,
     0x1.29c3aep-102f, 0x1.9bd0d4p-31f, 0x1.eec128p-66f, 0.0f, 0x1.a981f8p-43f,
     0x1.539102p-30f, 0.0f, 0x1.468232p-105f, 0x1.348d0ep-20f, 0x1.2111e2p-42f,
     0x1.606198p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4cd858p-59f, 0x1.93d818p-4f,
     0x1.526bc8p-102f, 0x1.13cfb8p-52f, 0x1.d20f1ap-120f, 0x1.1f622ap-74f, 0.0f,
     0x1.4f7ec8p-13f, 0.0f, 0.0f, 0.0f, 0x1.1c90eep-70f, 0.0f, 0x1.30c328p-10f,
     0x1.cd44fep-102f, 0x1.592adap-43f, 0.0f, 0x1.9dac3ap-66f, 0x1.dc04f6p-5f, 0.0f,
     0x1.598a78p-61f, 0x1.890506p-21f, 0x1.35658p-16f, 0x1.b90ef6p-55f,
     0x1.357668p-75f, 0x1.e06954p-21f, 0x1.299a5cp-107f, 0.0f, 0x1.3dce6cp-38f, 0.0f,
     0x1.77375p-70f, 0x1.aa5a84p-10f, 0x1.e95938p-113f, 0.0f, 0x1.1eef68p-28f,
     0x1.89b1f8p-97f, 0x1.15794cp-84f, 0.0f, 0x1.b36ab6p-121f, 0.0f, 0x1.9a7482p-64f,
     0x1.ae9a1cp-73f, 0x1.507c34p-34f, 0.0f, 0x1.43c82p-104f, 0.0f, 0x1.26cf5ep-46f,
     0x1.94c508p-125f, 0x1.6db7aep-52f, 0x1.8f01dcp-60f, 0x1.d84274p-41f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.00eb2ep-109f, 0x1.29d2d4p-58f, 0x1.166ceep-117f, 0.0f,
     0x1.079f48p-115f, 0x1.ae59aep-79f, 0x1.798adcp-24f, 0.0f, 0x1.caae9cp-93f,
     0x1.59c8dcp-69f, 0x1.324fd6p-125f, 0x1.df5c7cp-84f, 0x1.13eaf8p-48f,
     0x1.8b2fe6p-41f, 0x1.c03b04p-82f, 0.0f, 0x1.12143p-91f, 0x1.3d2d84p-3f,
     0x1.5e4362p-30f, 0.0f, 0x1.2d61cp-80f, 0x1.674fccp-14f, 0.0f, 0x1.607c94p-97f,
     0.0f, 0.0f, 0.0f, 0x1.bb657p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c7e1c2p-31f, 0.0f, 0.0f, 0.0f, 0x1.35339ep-114f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2a58bp-83f, 0x1.d0e48cp-73f, 0x1.030a4ep-119f, 0.0f, 0x1.2f1946p-55f,
     0x1.fd4c4ap-103f, 0x1.9aaebep-13f, 0.0f, 0.0f, 0x1.1f599ep-90f, 0.0f,
     0x1.5bcf44p-10f, 0x1.b7370cp-20f, 0x1.b1999ep-89f, 0.0f, 0.0f, 0.0f,
     0x1.897b2ap-119f, 0x1.03c3e8p-3f, 0.0f, 0x1.8acdd4p-23f, 0.0f, 0.0f,
     0x1.68214p-73f, 0.0f, 0x1.5aa6b8p-75f, 0x1.43fb8cp-126f, 0.0f, 0x1.f0b814p-1f,
     0x1.a929ccp-90f, 0x1.2da7cp-69f, 0.0f, 0.0f, 0x1.1b7916p-87f, 0.0f, 0.0f, 0.0f,
     0x1.2e1b82p-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.475c82p-78f, 0.0f,
     0x1.b951a6p-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8ef6cap-99f, 0x1.9b6534p-39f,
     0x1.6ef7aap-89f, 0x1.be81e6p-51f, 0.0f, 0.0f, 0x1.6e54b8p-101f, 0.0f, 0.0f,
     0x1.08cc1cp-41f, 0x1.5fdc3ep-38f, 0x1.7c6b3ap-37f, 0x1.c41002p-109f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a573f8p-62f, 0x1.d4bdd8p-57f, 0x1.b62feep-82f,
     0x1.e2bf5p-111f, 0x1.aeed1ap-104f, 0.0f, 0x1.516f02p-78f, 0.0f, 0x1.a27218p-85f,
     0.0f, 0.0f, 0x1.95dbc6p-60f, 0x1.6dcf9p-12f, 0.0f, 0.0f, 0x1.1ef84ep-27f,
     0x1.3f81d4p-85f, 0x1.fcdcacp-57f, 0.0f, 0.0f, 0x1.64665ep-56f, 0x1.54e8fap-125f,
     0x1.881568p-48f, 0.0f, 0.0f, 0x1.cbabf4p-110f, 0.0f, 0x1.916bd8p-34f,
     0x1.1a538p-21f, 0x1.372af6p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9ab08p-103f, 0.0f,
     0x1.f4d60ap-105f, 0x1.cfaa52p-95f, 0.0f, 0x1.f6732ap-85f, 0.0f, 0.0f,
     0x1.dc02d4p-9f, 0.0f, 0x1.217ad4p-68f, 0x1.87576cp-22f, 0x1.cf5bcep-46f,
     0x1.0b1e52p-9f, 0x1.93f9dp-28f, 0.0f, 0.0f, 0x1.4876a8p-18f, 0x1.9c21d8p-18f,
     0.0f, 0.0f, 0x1.d25ac8p-75f, 0x1.6d5746p-84f, 0.0f, 0.0f, 0x1.9013f6p-52f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b61e26p-53f, 0x1.0ed87p-123f, 0x1.f28434p-29f, 0.0f,
     0x1.c57382p-44f, 0.0f, 0x1.fd93fp-22f, 0.0f, 0x1.304764p-64f, 0.0f,
     0x1.f2ab96p-58f, 0x1.171a4ap-73f, 0x1.7aa79ep-76f, 0x1.d0ecfcp-15f,
     0x1.15280cp-100f, 0x1.4d1f7cp-39f, 0.0f, 0x1.eb576ap-46f, 0.0f, 0x1.4aa3bcp-2f,
     0x1.c3024ap-71f, 0x1.d6843ap-71f, 0.0f, 0.0f, 0x1.c49388p-30f, 0x1.a61b68p-38f,
     0x1.dc29cap-103f, 0x1.57d506p-25f, 0x1.840c74p-10f, 0x1.94fd6p-71f,
     0x1.07de8cp-22f, 0.0f, 0x1.088e7cp-126f, 0x1.097156p-57f, 0.0f, 0x1.05c10cp-120f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f8f3ap-39f, 0x1.3c717ep-37f, 0x1.221232p-28f,
     0.0f, 0.0f, 0.0f, 0x1.09ad9cp-45f, 0x1.1feb02p-23f, 0x1.485d5p-73f,
     0x1.ed34ap-50f, 0x1.7944bcp-97f, 0.0f, 0x1.8c7d38p-41f, 0x1.379fb2p-123f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.30a81p-96f, 0x1.24c9f2p-76f, 0x1.e8fde2p-81f, 0.0f, 0.0f,
     0x1.92523ep-119f, 0.0f, 0x1.363862p-12f, 0x1.00ce42p-76f, 0.0f, 0x1.bb897ap-59f,
     0x1.d1be6cp-68f, 0x1.74a2dep-15f, 0x1.c27de8p-48f, 0.0f, 0.0f, 0.0f,
     0x1.51bc5cp-26f, 0x1.3ff876p-74f, 0x1.90ad9ap-126f, 0x1.a3b3bcp-8f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b8bc78p-65f, 0x1.4db8d4p-86f, 0x1.df76b2p-30f, 0.0f, 0.0f,
     0.0f, 0x1.362612p-107f, 0.0f, 0.0f, 0x1.3542cep-37f, 0.0f, 0x1.da32f8p-104f,
     0x1.12995p-74f, 0.0f, 0x1.a4b35ep-60f, 0x1.73dff4p-47f, 0x1.83919cp-119f, 0.0f,
     0x1.e53326p-31f, 0x1.89d7dap-83f, 0.0f, 0x1.dd217p-53f, 0x1.b7f632p-61f, 0.0f,
     0x1.8055f2p-40f, 0.0f, 0x1.3c7fa6p-96f, 0.0f, 0.0f, 0x1.b7f74p-7f, 0.0f, 0.0f,
     0.0f, 0x1.d837dcp-24f, 0x1.f308bep-43f, 0x1.543bf2p-122f, 0x1.fb54fep-34f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.0918aep-49f, 0x1.0a5e32p-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.86ffp-71f, 0x1.93f438p-89f, 0.0f, 0.0f, 0x1.64125ap-67f, 0x1.75668p-24f,
     0x1.1e28f2p-81f, 0x1.c31724p-38f, 0.0f, 0x1.f0f292p-13f, 0.0f, 0.0f,
     0x1.721806p-11f, 0x1.173452p-81f, 0x1.879302p-63f, 0.0f, 0x1.d43ebcp-41f,
     0x1.069d2cp-50f, 0x1.60d1ecp-6f, 0x1.ea223cp-60f, 0x1.acece6p-14f, 0.0f, 0.0f,
     0x1.5e343ap-21f, 0x1.0d6a8cp-19f, 0x1.e847e8p-62f, 0.0f, 0x1.8f07c6p-1f,
     0x1.09e31p-56f, 0x1.eda4d2p-40f, 0x1.3bffb8p-123f, 0.0f, 0x1.24fb18p-55f,
     0x1.c14f98p-79f, 0.0f, 0x1.11acccp-101f, 0.0f, 0x1.fb6d0ep-14f, 0x1.ae07f6p-91f,
     0x1.9c6742p-6f, 0x1.193abcp-124f, 0.0f, 0x1.27d7bap-29f, 0.0f, 0x1.2f8dc6p-98f,
     0.0f, 0.0f, 0x1.846594p-100f, 0.0f, 0x1.70e002p-96f, 0x1.fe4406p-64f, 0.0f,
     0x1.06c8c4p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8cf93ap-28f, 0x1.a11408p-8f, 0.0f,
     0.0f, 0.0f, 0x1.a88a4ep-53f, 0x1.b54042p-120f, 0x1.56cfd6p-53f, 0.0f,
     0x1.6a5afp-125f, 0.0f, 0x1.554662p-109f, 0.0f, 0.0f, 0.0f, 0x1.2e7858p-28f,
     0x1.de1284p-79f, 0x1.5a97d4p-40f, 0.0f, 0x1.6426d8p-16f, 0x1.52b4b4p-65f,
     0x1.51839ep-97f, 0x1.8c80c8p-79f, 0.0f, 0x1.4f946cp-119f, 0.0f, 0x1.9b1a04p-52f,
     0.0f, 0x1.d05452p-108f, 0x1.ccdc76p-111f, 0x1.1f9322p-111f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.09547cp-115f, 0.0f, 0.0f, 0.0f, 0x1.2d259p-36f, 0.0f,
     0x1.db939p-16f, 0x1.8bb932p-13f, 0.0f, 0x1.07cdbp-83f, 0x1.084726p-119f,
     0x1.fe1ce2p-55f, 0.0f, 0x1.45a376p-63f, 0x1.a90dbep-52f, 0x1.be22eep-35f,
     0x1.9a9bfap-31f, 0x1.753202p-102f, 0x1.47c3cep-12f, 0.0f, 0x1.ac599p-85f,
     0x1.96df36p-20f, 0.0f, 0.0f, 0.0f, 0x1.27545p-94f, 0x1.47fe7p-17f, 0.0f, 0.0f,
     0x1.b22718p-29f, 0x1.2d7286p-66f, 0x1.5357c6p-124f, 0x1.c18de2p-69f,
     0x1.f28536p-110f, 0x1.8e7b7cp-18f, 0.0f, 0.0f, 0x1.7fe4cp-2f, 0.0f,
     0x1.24f01p-15f, 0x1.1bfc66p-6f, 0x1.866272p-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.554478p-59f, 0.0f, 0.0f, 0x1.d45ed4p-6f, 0.0f, 0x1.78857ep-93f,
     0x1.0f8b98p-85f, 0x1.aea7ep-113f, 0.0f, 0x1.989294p-12f, 0x1.9423f6p-121f, 0.0f,
     0x1.d497dcp-112f, 0.0f, 0.0f, 0.0f, 0x1.8ff64p-37f, 0x1.078574p-19f,
     0x1.4b12d8p-14f, 0x1.b3b668p-18f, 0x1.48194p-118f, 0.0f, 0x1.110f8ap-113f,
     0x1.873b4ep-54f, 0x1.87d3b2p-78f, 0x1.2175dcp-93f, 0x1.844668p-23f,
     0x1.51f172p-66f, 0.0f, 0x1.a2fbap-39f, 0x1.b5738ep-6f, 0.0f, 0.0f, 0.0f,
     0x1.2b4042p-43f, 0.0f, 0x1.ab250cp-125f, 0x1.a4ae3p-107f, 0x1.62153p-30f, 0.0f,
     0x1.3f302ap-17f, 0x1.36b8bep-125f, 0x1.81efdep-54f, 0.0f, 0x1.aa839cp-95f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a80316p-90f, 0.0f, 0x1.4d15fap-11f,
     0x1.174cf2p-40f, 0.0f, 0x1.74b10cp-74f, 0x1.fdb0b4p-97f, 0.0f, 0x1.6de448p-51f,
     0.0f, 0x1.787ba2p-71f, 0x1.23bf42p-107f, 0.0f, 0x1.1a8b92p-53f, 0x1.aa978ap-45f,
     0.0f, 0x1.92c704p-126f, 0.0f, 0x1.1c86f2p-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e4ed5ap-107f, 0.0f, 0x1p0f, 0x1.7296e6p-58f, 0x1.84830cp-9f, 0.0f,
     0.0f, 0.0f, 0x1.8964c2p-64f, 0.0f, 0x1.844c1p-41f, 0x1.87e75ep-69f, 0.0f, 0.0f,
     0x1.d6a7b8p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a968b4p-42f,
     0x1.31be22p-104f, 0.0f, 0x1.08ca42p-11f, 0.0f, 0x1.adc378p-34f, 0x1.88f0bep-73f,
     0x1.683024p-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.85664ep-42f, 0x1.87d496p-100f, 0.0f,
     0x1.3adfd4p-90f, 0x1.8c1738p-124f, 0x1.faf8bep-62f, 0x1.d65f12p-25f, 0.0f,
     0x1.d9a0d8p-99f, 0x1.becb64p-63f, 0.0f, 0.0f, 0x1.2df56cp-2f, 0x1.e13172p-49f,
     0x1.d12aa2p-126f, 0x1.cabc88p-55f, 0.0f, 0x1.1aef88p-59f, 0x1.c1c6p-111f,
     0x1.1a5e4cp-110f, 0x1.b1ebdcp-97f, 0.0f, 0x1.c4d72p-119f, 0x1.97a904p-109f,
     0x1.156a46p-86f, 0.0f, 0x1.3103bp-83f, 0.0f, 0.0f, 0x1.a6119p-58f,
     0x1.5e8dbcp-35f, 0x1.c00eaap-52f, 0.0f, 0x1.54b508p-121f, 0x1.a64f96p-32f, 0.0f,
     0.0f, 0x1.8da5c6p-9f, 0x1.b2b28ap-125f, 0.0f, 0x1.5a99d8p-87f, 0.0f,
     0x1.199b5ap-4f, 0x1.350262p-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.73b7cep-16f, 0.0f,
     0.0f, 0x1.db8a5p-47f, 0x1.ab84ecp-19f, 0x1.d76a4cp-69f, 0.0f, 0.0f,
     0x1.37df44p-114f, 0x1.3c8642p-92f, 0x1.8c6c14p-24f, 0x1p0f, 0.0f,
     0x1.d9f97ep-13f, 0.0f, 0.0f, 0x1.d40296p-69f, 0x1.e631cap-95f, 0x1.64c09ep-89f,
     0x1.453ecp-76f, 0.0f, 0x1.02bc8cp-82f, 0.0f, 0x1.568b3ep-5f, 0x1.475a28p-73f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.42a85ep-43f, 0x1.5c1b4ap-84f, 0.0f, 0x1.b27aa4p-37f,
     0x1.ccffdep-38f, 0.0f, 0.0f, 0.0f, 0x1.4ae4a6p-53f, 0.0f, 0.0f, 0.0f,
     0x1.031842p-101f, 0x1.6f6fbep-2f, 0x1.213f6cp-92f, 0.0f, 0.0f, 0.0f,
     0x1.7341d6p-6f, 0x1.a9c932p-117f, 0.0f, 0x1.899192p-122f, 0x1.a73036p-93f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.4a17a6p-102f, 0x1.1f49a6p-119f, 0x1.9f70a6p-117f,
     0x1.fcf67cp-39f, 0.0f, 0.0f, 0x1.e1ee54p-29f, 0.0f, 0x1p0f, 0x1.c286fcp-16f,
     0.0f, 0x1.81490ap-101f, 0.0f, 0x1.230056p-111f, 0x1.d72ab8p-8f, 0.0f,
     0x1.557f4cp-13f, 0.0f, 0x1.009cep-3f, 0x1.f5a95ap-81f, 0x1.d73426p-65f,
     0x1.8cc078p-75f, 0x1.ac6feep-87f, 0.0f, 0.0f, 0.0f, 0x1.fce1e8p-121f, 0.0f,
     0x1.76c16ap-3f, 0x1.0daf22p-91f, 0.0f, 0.0f, 0x1.24a83p-5f, 0x1.73f994p-89f,
     0.0f, 0x1.97d15cp-49f, 0x1.3b39dp-89f, 0.0f, 0x1.961012p-109f, 0x1.f85678p-82f,
     0.0f, 0.0f, 0x1.299e0cp-94f, 0.0f, 0.0f, 0x1.c6bbcap-6f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.9f4ad2p-2f, 0x1.855cc2p-40f, 0x1.a7897p-33f, 0.0f,
     0x1.3648f4p-45f, 0x1.ea5c3cp-36f, 0x1.65588p-4f, 0x1.59b99ep-65f, 0x1.d1088p-75f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3ba24cp-24f, 0x1.f0d2b6p-19f, 0.0f,
     0.0f, 0.0f, 0x1.8dd4dap-83f, 0x1.cf15f6p-81f, 0.0f, 0x1.4cfa98p-87f,
     0x1.096a0ep-90f, 0x1.fe531p-90f, 0x1.d6a98p-55f, 0x1.748ce2p-53f, 0.0f, 0.0f,
     0x1.04d446p-24f, 0x1.6edbe8p-61f, 0.0f, 0.0f, 0x1.edc196p-114f, 0x1.308bccp-119f,
     0x1.e55766p-20f, 0.0f, 0x1.baa13ap-4f, 0x1.35b2bap-62f, 0x1.da1748p-20f,
     0x1.58fde8p-96f, 0.0f, 0.0f, 0x1.cf18eap-95f, 0.0f, 0x1.ca7c5ap-73f,
     0x1.0df47cp-24f, 0x1.bd491p-96f, 0x1.5a24e6p-54f, 0.0f, 0x1.12d972p-97f,
     0x1.db635p-33f, 0x1.801816p-69f, 0.0f, 0.0f, 0x1.1c51e2p-20f, 0.0f,
     0x1.8edcep-19f, 0x1.2ccc7cp-21f, 0x1.e1e8f2p-51f, 0x1.4467aep-102f, 0.0f, 0.0f,
     0x1.cce5cep-69f, 0.0f, 0x1.768e54p-3f, 0.0f, 0.0f, 0x1.a6f51ep-73f, 0.0f, 0.0f,
     0x1.affdb4p-123f, 0x1.740c84p-55f, 0x1.22121ep-99f, 0.0f, 0.0f, 0x1.d0c268p-18f,
     0x1.b6cd38p-55f, 0.0f, 0x1.3d08a8p-5f, 0x1.ceee02p-78f, 0x1.e88c52p-116f,
     0x1.baeffp-24f, 0x1.58dd0ep-27f, 0.0f, 0.0f, 0x1.202e0cp-101f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.2e722cp-85f, 0x1.4ce52p-78f, 0.0f, 0x1.f84bbcp-54f, 0.0f, 0.0f, 0.0f,
     0x1.395d16p-126f, 0x1.8e054p-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.60f892p-11f, 0x1.54f25p-88f, 0.0f, 0.0f, 0x1.24c35p-66f, 0.0f,
     0x1.22f116p-96f, 0x1.dbec28p-89f, 0.0f, 0.0f, 0x1.26242ep-42f, 0x1.c6a768p-120f,
     0x1.deb474p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f40778p-24f, 0x1.ec893cp-73f, 0.0f,
     0.0f, 0x1.3e865p-20f, 0x1.13e36ep-104f, 0x1.68616p-22f, 0.0f, 0x1.678456p-78f,
     0.0f, 0x1.c501c6p-52f, 0x1.c77c04p-47f, 0.0f, 0x1.d492ap-111f, 0.0f,
     0x1.5edf88p-125f, 0.0f, 0.0f, 0x1.93c8b4p-122f, 0x1.f21bb8p-70f, 0.0f,
     0x1.4db198p-13f, 0x1.5e681p-35f, 0x1.8a154ap-48f, 0.0f, 0x1.fb5d5p-31f,
     0x1.52f4e8p-53f, 0.0f, 0x1.9b542cp-121f, 0.0f, 0.0f, 0x1.220482p-44f,
     0x1.6ea626p-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.81188p-63f, 0x1.48b73p-100f,
     0.0f, 0x1.665f74p-90f, 0x1.122bc2p-2f, 0x1.d0c912p-105f, 0x1.7ebe9ap-78f, 0.0f,
     0x1.2657bap-122f, 0.0f
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
            tmp1 = Sleef_finz_tanf4_u10kvx(tmp0);
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
    printf("Sleef_finz_tanf4_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_tanf4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
