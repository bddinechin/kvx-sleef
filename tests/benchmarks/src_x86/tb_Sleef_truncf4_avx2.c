/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_truncf4_avx2128.c --function Sleef_truncf4_avx2128 --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary32 --vector-size 4 \
 *     --function-input-vector-size 4 --bench --no-embedded-bin --target \
 *     x86_avx2128
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
     0x1.59a7c4p-24f, 0.0f, 0.0f, 0x1.0b82d4p-42f, 0x1.6680dp-114f, 0x1.279eccp-124f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.04f88ap-111f, 0.0f, 0.0f, 0x1.485218p-105f,
     0.0f, 0x1.aa6d04p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8b913ep-48f, 0x1.e99fbep-42f,
     0.0f, 0.0f, 0x1.24f754p-83f, 0x1.87fd8p-19f, 0.0f, 0.0f, 0.0f, 0x1.e475b2p-55f,
     0x1.c2c594p-20f, 0x1.26206p-52f, 0x1.282512p-106f, 0x1.6fe2a2p-85f,
     0x1.b6f72cp-118f, 0.0f, 0x1.45ebe6p-66f, 0x1.1a272ap-113f, 0.0f, 0x1.77feecp-80f,
     0.0f, 0x1.5f88a2p-84f, 0x1.bb4a02p-86f, 0x1.476524p-20f, 0.0f, 0.0f,
     0x1.580a32p-8f, 0x1.b1f514p-38f, 0x1.bbb664p-60f, 0x1.1d6b06p-34f,
     0x1.1f2c4ep-68f, 0.0f, 0x1.8e3838p-123f, 0x1.b31b16p-95f, 0.0f, 0x1.9e7adcp-122f,
     0.0f, 0x1.d426f4p-75f, 0.0f, 0x1.23097p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ba0e26p-120f, 0.0f, 0x1.f246fap-76f, 0.0f, 0x1.6520d6p-116f,
     0x1.0f304ap-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f3e9e6p-72f, 0.0f, 0x1.a63058p-10f,
     0x1.6031eep-23f, 0.0f, 0x1.81427p-61f, 0x1.c3bc5ap-117f, 0.0f, 0x1.b3c758p-97f,
     0x1.2e1578p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f9d6d6p-109f,
     0x1.d763p-117f, 0x1.3cee8ap-103f, 0.0f, 0.0f, 0.0f, 0x1.cfeb9ep-124f,
     0x1.30408ap-53f, 0.0f, 0x1.fb0f54p-25f, 0.0f, 0x1.70231p-119f, 0.0f, 0.0f,
     0x1.96c338p-46f, 0x1.1970c8p-70f, 0.0f, 0x1.74e416p-105f, 0x1.91ffb6p-79f, 0.0f,
     0.0f, 0x1.89624cp-8f, 0.0f, 0.0f, 0x1.3914a2p-78f, 0x1.04e2dcp-10f,
     0x1.edfb1ep-45f, 0.0f, 0.0f, 0.0f, 0x1.6ed9c8p-38f, 0x1.050c46p-125f,
     0x1.8404fcp-88f, 0.0f, 0.0f, 0x1.cae92p-83f, 0.0f, 0x1.842d2cp-1f,
     0x1.18070ap-16f, 0x1.c6c9b6p-7f, 0x1.ebacecp-56f, 0x1.cc2a64p-48f, 0.0f,
     0x1.383592p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.54faacp-77f, 0x1.86799ep-82f,
     0.0f, 0x1.ebc6eep-99f, 0x1.55bf3ep-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ad3dap-46f,
     0x1.4108fp-35f, 0x1.19eafap-48f, 0x1.55db0cp-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.31f81ep-96f, 0x1.168878p-10f, 0x1.e5540cp-92f, 0x1.e8e456p-30f, 0.0f, 0.0f,
     0x1.e17c12p-28f, 0x1.358304p-44f, 0x1.af0dfp-29f, 0.0f, 0.0f, 0x1.696072p-21f,
     0.0f, 0x1.675306p-27f, 0.0f, 0.0f, 0x1.1ba918p-125f, 0x1.640b5ep-11f, 0.0f, 0.0f,
     0x1.257894p-11f, 0.0f, 0.0f, 0x1.2afdep-43f, 0x1.f0a302p-60f, 0x1.db03b6p-16f,
     0x1.2aeb32p-62f, 0.0f, 0x1.bb52d8p-34f, 0.0f, 0x1.768192p-40f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.2dc60ep-8f, 0.0f, 0x1.5340fep-82f, 0.0f, 0x1.c220bap-112f, 0.0f,
     0x1.b9147p-124f, 0.0f, 0.0f, 0x1.7822b8p-73f, 0x1.0b213ep-99f, 0.0f, 0.0f,
     0x1.645014p-103f, 0.0f, 0x1.ed140cp-66f, 0x1.7ae4ep-118f, 0x1.f6a68cp-109f, 0.0f,
     0x1.9c0a56p-37f, 0x1.ef13cap-29f, 0.0f, 0x1.ae28d6p-7f, 0x1.98cd54p-61f,
     0x1.9847ecp-85f, 0.0f, 0.0f, 0x1.349ce2p-2f, 0.0f, 0.0f, 0x1.2bd98ep-54f, 0.0f,
     0x1.9f97aap-9f, 0.0f, 0x1.be20d6p-4f, 0x1.67b6dcp-39f, 0.0f, 0x1.3f2f84p-71f,
     0x1.8f09c2p-37f, 0.0f, 0x1.62072ap-32f, 0.0f, 0x1.1216c2p-51f, 0.0f, 0.0f,
     0x1.1fd308p-40f, 0.0f, 0x1.c2c7bcp-19f, 0.0f, 0x1.58a096p-74f, 0x1.f03d3cp-32f,
     0x1.346456p-88f, 0x1.1be6e8p-95f, 0x1.9be726p-11f, 0x1.3d5668p-13f, 0.0f,
     0x1.ce816p-111f, 0x1.418e64p-54f, 0.0f, 0x1.162a06p-67f, 0.0f, 0.0f,
     0x1.ba38fcp-28f, 0x1.ea6f2p-6f, 0.0f, 0x1.d553eep-18f, 0x1.6c87bp-78f, 0.0f,
     0.0f, 0x1.6f9fd2p-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d5f09ep-123f,
     0.0f, 0.0f, 0x1.efb1dp-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5b3672p-52f,
     0.0f, 0x1.05f6d8p-21f, 0x1.fbccdcp-121f, 0x1.644684p-25f, 0x1.6beb6ep-78f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7f136p-93f, 0x1.f7a606p-55f, 0.0f, 0.0f, 0.0f,
     0x1.34380cp-37f, 0x1.64f228p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.338daap-16f,
     0x1.d48906p-35f, 0x1.b48aeap-108f, 0x1.01b572p-67f, 0.0f, 0.0f, 0.0f,
     0x1.6c8c02p-9f, 0.0f, 0x1.08541p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e8a54p-30f, 0x1.aab3ep-14f, 0x1.7a037p-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.0635ecp-78f, 0.0f, 0.0f, 0x1.3ec734p-99f, 0.0f, 0.0f,
     0x1.7a9254p-35f, 0x1.25a9f8p-117f, 0x1.20e7b4p-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.860a0ep-82f, 0.0f, 0x1.bed3e2p-116f, 0.0f, 0x1.150b6cp-55f, 0x1.3ad1ecp-12f,
     0.0f, 0.0f, 0x1.8ec1e8p-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bd249ep-45f, 0x1.70c6fcp-44f, 0.0f, 0.0f, 0x1.e0728cp-95f, 0.0f,
     0x1.728e66p-67f, 0.0f, 0.0f, 0x1.c2917p-87f, 0x1.98acaap-122f, 0x1.633e16p-91f,
     0.0f, 0x1.ccae7ep-33f, 0x1.c88034p-96f, 0x1.e3210ap-9f, 0x1.af5a44p-14f,
     0x1.18df8ap-86f, 0x1.e78326p-4f, 0x1.0e788ep-12f, 0x1.5b1442p-82f, 0.0f,
     0x1.d948cp-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a7363p-1f, 0x1.d182f8p-97f, 0.0f,
     0x1.38749ep-121f, 0x1.5087bep-72f, 0x1.37c49ep-55f, 0.0f, 0.0f, 0x1.e9091ep-124f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.1fbe6ap-125f, 0.0f, 0x1.019c3ap-6f, 0x1.c8aeaap-31f,
     0x1.64347p-65f, 0x1.0c4748p-49f, 0.0f, 0x1.21e456p-15f, 0x1.3f0bf6p-66f,
     0x1.a425fep-85f, 0.0f, 0.0f, 0.0f, 0x1.836282p-108f, 0x1.2795cep-8f, 0.0f,
     0x1.e89f86p-64f, 0.0f, 0.0f, 0x1.ebcc84p-8f, 0.0f, 0x1.3a25fap-86f,
     0x1.e7a928p-77f, 0x1.eeae38p-57f, 0x1.a45d86p-81f, 0.0f, 0x1.a3ef6ap-101f,
     0x1.be4102p-6f, 0.0f, 0x1.65358cp-98f, 0.0f, 0.0f, 0.0f, 0x1.f0587cp-116f,
     0x1.19db12p-3f, 0x1.a85d2ap-75f, 0.0f, 0.0f, 0.0f, 0x1.87e1eap-22f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a48e7cp-75f, 0.0f, 0.0f, 0.0f, 0x1.1c2604p-105f,
     0x1.1106f2p-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f69e3ep-53f, 0x1.a5f77ep-35f,
     0x1.1f6864p-84f, 0x1.bd69ecp-120f, 0.0f, 0x1.f8f13ap-20f, 0.0f, 0x1.263426p-55f,
     0.0f, 0.0f, 0x1.3ea886p-107f, 0x1.b6460ap-53f, 0x1.80fe9cp-17f, 0.0f,
     0x1.6b6012p-75f, 0x1.7a529ep-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1bcdfep-61f, 0x1.fc0b86p-22f, 0.0f, 0x1.4eda0cp-85f, 0x1.142be4p-68f,
     0x1.49aa3p-48f, 0.0f, 0x1.782782p-75f, 0.0f, 0x1p0f, 0.0f, 0x1.32189ep-71f, 0.0f,
     0x1.c70b92p-64f, 0.0f, 0x1.ad0aaep-125f, 0.0f, 0x1.6669b6p-50f, 0x1.5e021ap-76f,
     0.0f, 0x1.8d876ep-103f, 0.0f, 0x1.5853aap-109f, 0.0f, 0x1.0c157ep-81f, 0.0f,
     0x1.239126p-8f, 0x1.ce9486p-97f, 0.0f, 0x1.8207d2p-107f, 0.0f, 0.0f, 0.0f,
     0x1.fc0dd8p-113f, 0.0f, 0x1.93e5b4p-92f, 0x1.a4d718p-38f, 0.0f, 0x1.cd23b2p-85f,
     0.0f, 0.0f, 0x1.9fdceap-95f, 0x1.7d66fp-4f, 0.0f, 0.0f, 0x1.f37d38p-114f,
     0x1.2bf46ep-44f, 0.0f, 0.0f, 0x1.ee51aap-103f, 0x1.c764b2p-9f, 0.0f,
     0x1.7866d4p-32f, 0x1.28d4b6p-103f, 0x1.5853cp-106f, 0x1.3ae45ep-89f, 0.0f,
     0x1.6771bcp-90f, 0.0f, 0x1.107aa2p-40f, 0x1.ccab66p-56f, 0.0f, 0x1.36651ep-22f,
     0x1.5dd482p-65f, 0.0f, 0x1.99506p-103f, 0.0f, 0.0f, 0x1.167bep-32f, 0.0f, 0.0f,
     0x1.b73bd8p-62f, 0.0f, 0x1.58cc64p-58f, 0x1.4747c6p-56f, 0.0f, 0x1.f51d0cp-47f,
     0.0f, 0x1.bb596cp-76f, 0x1.ad3b5p-50f, 0.0f, 0.0f, 0x1.6de4d4p-57f,
     0x1.02af8cp-4f, 0.0f, 0.0f, 0x1.3db278p-93f, 0.0f, 0x1.1d060ap-58f,
     0x1.3097bap-12f, 0x1.2d2542p-24f, 0x1.c4aa5p-80f, 0x1.c58e7cp-31f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.1d58fap-83f, 0.0f, 0.0f, 0x1.cfe184p-118f,
     0x1.42b4d6p-60f, 0x1.0bcf14p-111f, 0x1.19d262p-38f, 0.0f, 0.0f, 0.0f,
     0x1.45c79ap-101f, 0.0f, 0.0f, 0.0f, 0x1.7116d6p-103f, 0x1.aea46ep-4f, 0.0f, 0.0f,
     0x1.a13b88p-126f, 0x1.56aafp-57f, 0.0f, 0x1.42edfap-63f, 0.0f, 0.0f,
     0x1.af800cp-80f, 0.0f, 0x1.875024p-60f, 0.0f, 0x1.4fd8ap-24f, 0.0f, 0.0f,
     0x1.225694p-60f, 0x1.808496p-107f, 0.0f, 0.0f, 0.0f, 0x1.7ece36p-48f, 0.0f,
     0x1.187accp-14f, 0.0f, 0x1.d4392ep-97f, 0.0f, 0x1.dbdd1cp-91f, 0.0f,
     0x1.c8b0cp-37f, 0.0f, 0.0f, 0x1.4424c8p-83f, 0x1.3a677p-87f, 0.0f, 0.0f, 0.0f,
     0x1.fff4e8p-108f, 0x1.9dc42cp-118f, 0.0f, 0.0f, 0x1.1d221cp-59f, 0x1.4f8e12p-86f,
     0.0f, 0.0f, 0x1.911ed2p-49f, 0x1.ebe2d4p-105f, 0x1.0c955ep-72f, 0x1.e96648p-120f,
     0.0f, 0x1.4a1e6cp-113f, 0x1.8229cap-8f, 0.0f, 0.0f, 0x1.0fe9c4p-29f,
     0x1.06e2a4p-105f, 0.0f, 0x1.b863fap-106f, 0x1.c7f2cap-40f, 0x1.d9311cp-66f, 0.0f,
     0x1.2aa576p-108f, 0.0f, 0x1.28f00cp-94f, 0x1.3af272p-79f, 0.0f, 0.0f,
     0x1.96de64p-3f, 0x1.c2b7dap-38f, 0x1.bcadacp-4f, 0x1.0e4ffcp-33f, 0.0f,
     0x1.53c5aap-123f, 0.0f, 0.0f, 0x1.fdd1dp-95f, 0x1.88733ap-104f, 0.0f, 0.0f,
     0x1.e4323ep-44f, 0x1.abcff4p-95f, 0.0f, 0x1.43e118p-52f, 0x1.31b224p-65f,
     0x1.13f92p-23f, 0.0f, 0x1.d3893ep-109f, 0x1.fa1a9ep-69f, 0x1.3b5178p-97f,
     0x1.0cb58ep-20f, 0x1.a89da8p-119f, 0x1.71978ep-105f, 0x1.78f88ap-4f,
     0x1.c3e6cp-84f, 0x1.40a2ccp-32f, 0x1.20cab2p-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3f560ep-110f, 0x1.9a5b24p-36f, 0x1.f55326p-70f, 0.0f, 0x1.57d528p-80f,
     0x1.933d6cp-3f, 0x1.c5f9f2p-69f, 0.0f, 0x1.927848p-9f, 0x1.6c43f4p-25f,
     0x1.fceaaep-123f, 0x1.d67e78p-51f, 0.0f, 0.0f, 0.0f, 0x1.6d5a0cp-75f, 0.0f,
     0x1.48fe98p-97f, 0x1.009ba2p-116f, 0.0f, 0.0f, 0x1.e0e8d6p-32f, 0x1.777bf8p-64f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f851bcp-35f, 0x1.235aa8p-36f, 0x1.73e23ep-23f, 0.0f,
     0x1.b1aabcp-107f, 0x1.edb5c6p-61f, 0.0f, 0.0f, 0.0f, 0x1.c8163ap-68f, 0.0f,
     0x1.c5641ep-49f, 0x1.4ef834p-95f, 0x1.553d58p-26f, 0x1.56b6b8p-64f,
     0x1.4be256p-79f, 0x1.f91c0ep-67f, 0x1.658034p-74f, 0x1.76f3fep-105f, 0.0f, 0.0f,
     0.0f, 0x1.25393p-85f, 0x1.63a058p-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.784076p-92f, 0x1.ec8c1ep-5f, 0x1.a7a644p-2f, 0.0f, 0.0f, 0.0f,
     0x1.f1590ep-43f, 0.0f, 0.0f, 0x1.67cf82p-71f, 0.0f, 0x1.6374dp-57f, 0.0f, 0.0f,
     0x1.cbbd1p-29f, 0.0f, 0.0f, 0x1.da5158p-105f, 0.0f, 0x1.926e4ap-80f, 0.0f,
     0x1.46e286p-86f, 0.0f, 0.0f, 0.0f, 0x1.70f5ecp-108f, 0x1.2aeaeep-73f,
     0x1.db82e6p-115f, 0.0f, 0.0f, 0x1.ebd346p-103f, 0.0f, 0x1.531e6p-68f,
     0x1.65922p-65f, 0.0f, 0.0f, 0x1.d69552p-75f, 0x1.2d9c3cp-63f, 0x1.182b7p-72f,
     0.0f, 0.0f, 0x1.a1a2c2p-107f, 0.0f, 0x1.2381dap-62f, 0.0f, 0x1.8d3f0ep-85f, 0.0f,
     0x1.65a84cp-122f, 0x1.979a1ap-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ed06b4p-80f, 0.0f,
     0x1.960044p-72f, 0.0f, 0x1.e2fb76p-45f, 0x1.547f04p-106f, 0.0f, 0.0f,
     0x1.8b10fcp-112f, 0x1.3fd8e8p-83f, 0.0f, 0.0f, 0x1.ab4cccp-94f, 0x1.662b9ap-44f,
     0x1.a03b88p-22f, 0x1.b2c1ep-91f, 0.0f, 0x1.3566acp-102f, 0.0f, 0x1.e9f162p-10f,
     0.0f, 0x1.53a722p-116f, 0x1.907066p-103f, 0x1.458d4ep-7f, 0x1.79311p-95f,
     0x1.76cd1p-78f, 0.0f, 0x1.2cbap-75f, 0.0f, 0.0f, 0.0f, 0x1.25d05ep-123f,
     0x1.820946p-31f, 0x1.bc38d4p-31f, 0x1.4c3aap-10f, 0.0f, 0x1.046c56p-102f, 0.0f,
     0.0f, 0x1.c540bep-51f, 0x1.4fc44cp-113f, 0.0f, 0.0f, 0.0f, 0x1.ccd1bcp-56f,
     0x1.151accp-95f, 0x1.c26c0ep-45f, 0.0f, 0.0f, 0.0f, 0x1.cdfaeep-85f,
     0x1.381b28p-60f, 0x1.05815ep-3f, 0.0f, 0.0f, 0x1.327c92p-41f, 0x1.559ac8p-93f,
     0.0f, 0.0f, 0.0f, 0x1.95c424p-48f, 0.0f, 0x1.167786p-4f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.1adf9cp-9f, 0.0f, 0x1.0f27e8p-76f, 0x1.f387a2p-66f,
     0.0f, 0x1.028efcp-94f, 0x1.908cbap-2f, 0.0f, 0x1.9f6c92p-48f, 0.0f,
     0x1.9da1ecp-5f, 0.0f, 0x1.178524p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c0cebap-40f, 0x1.f8f2d8p-18f, 0x1.c09838p-35f, 0x1p0f, 0x1.dd0c7ap-57f,
     0x1.4b5d4ap-98f, 0.0f, 0.0f, 0.0f, 0x1.f6aa0cp-17f, 0.0f, 0.0f, 0.0f,
     0x1.9dc8ap-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.52f234p-53f, 0x1.c44c6ap-43f, 0.0f,
     0.0f, 0x1.1b22e8p-67f, 0.0f, 0x1.e45c58p-4f, 0x1.07bb88p-65f, 0x1.63efa8p-46f,
     0x1.4c86fp-54f, 0x1.9bad32p-50f, 0.0f, 0.0f, 0.0f, 0x1.fc1808p-60f, 0.0f,
     0x1.19dc8cp-65f, 0.0f, 0x1.25e884p-107f, 0x1.196b84p-20f, 0x1.cab154p-84f, 0.0f,
     0.0f, 0x1.90480cp-108f, 0x1.751e84p-62f, 0x1.ad5656p-67f, 0.0f, 0.0f,
     0x1.ae3ccep-19f, 0x1.2e18ap-85f, 0.0f, 0.0f, 0x1.f2f9aap-56f, 0x1.0a59e8p-63f,
     0x1.a6c57ap-66f, 0x1.e7385p-6f, 0x1.0a5e2ap-19f, 0x1.dca592p-82f, 0.0f,
     0x1.bc0872p-39f, 0.0f, 0x1.e3f704p-82f, 0.0f, 0x1.81301ap-97f, 0.0f, 0.0f,
     0x1.b67804p-24f, 0.0f, 0.0f, 0x1.4af44ep-29f, 0x1.5475c2p-18f, 0.0f,
     0x1.a4229ap-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9f9d46p-7f, 0x1.0d27dcp-108f,
     0x1.cef652p-52f, 0.0f, 0.0f, 0.0f, 0x1.38b226p-22f, 0x1.f0ab6ap-52f, 0x1p0f,
     0.0f, 0.0f, 0x1.de4876p-21f, 0x1.1d5024p-102f, 0x1.51ba7cp-98f, 0x1.f2b38ep-8f,
     0.0f, 0.0f, 0x1.61eee8p-33f, 0x1.fa321ep-105f, 0x1.7c62c6p-5f, 0.0f, 0.0f, 0.0f,
     0x1.1d99fcp-109f, 0.0f, 0x1.dfbeb4p-48f, 0x1.b3320cp-75f, 0.0f, 0x1.8cfc92p-125f,
     0x1.74bf4p-98f, 0x1.3ea428p-36f, 0x1.5a7334p-122f
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
            tmp1 = Sleef_truncf4_avx2128(tmp0);
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
    printf("Sleef_truncf4_avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_truncf4_avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
