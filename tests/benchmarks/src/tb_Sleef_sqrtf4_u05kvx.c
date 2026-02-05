/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sqrtf4_u05kvx.c --function Sleef_sqrtf4_u05kvx \
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
     0x1.fbb4f8p-61f, 0x1.89c772p-48f, 0x1.98af0cp-105f, 0.0f, 0.0f, 0.0f,
     0x1.97a15ep-8f, 0.0f, 0x1.49c3acp-41f, 0x1.00027ep-73f, 0x1.a7165cp-7f,
     0x1.1ac086p-119f, 0x1.6f1ae6p-124f, 0.0f, 0.0f, 0.0f, 0x1.ec49a4p-43f, 0.0f,
     0x1.ecb0ep-41f, 0x1.a3be92p-81f, 0x1.4174eep-4f, 0x1.9e0e9cp-60f,
     0x1.5b4ee4p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a0acc6p-75f, 0x1.33bcaap-12f, 0.0f,
     0x1.6ac554p-44f, 0x1.e8b4dp-71f, 0x1.13356p-30f, 0.0f, 0x1.653d36p-57f,
     0x1.49829p-83f, 0x1.82d12p-56f, 0.0f, 0x1.c451d2p-69f, 0.0f, 0.0f,
     0x1.efa3f8p-67f, 0x1.c8e55ep-108f, 0x1.8e91e8p-13f, 0x1.325b66p-90f, 0.0f, 0.0f,
     0x1.b5d8ecp-62f, 0.0f, 0.0f, 0x1.603614p-97f, 0.0f, 0x1.24bf94p-87f,
     0x1.47e206p-24f, 0x1.782e1p-102f, 0.0f, 0x1.1e558cp-47f, 0.0f, 0x1.01981ep-89f,
     0.0f, 0x1.115728p-16f, 0x1.ebc946p-44f, 0.0f, 0x1.91acdp-89f, 0x1.e4aedep-33f,
     0.0f, 0x1.9c2ae8p-106f, 0.0f, 0x1.4aba0ep-82f, 0.0f, 0.0f, 0x1.87ab5p-111f,
     0x1.3222ap-100f, 0x1.971c54p-24f, 0.0f, 0x1.0c55dcp-28f, 0x1.40a962p-22f, 0.0f,
     0x1.a9b21p-96f, 0.0f, 0x1.003302p-58f, 0x1.3fc366p-6f, 0x1.b5df7p-126f,
     0x1.a8e1d2p-20f, 0x1.239f5ep-107f, 0.0f, 0x1.71e3dap-6f, 0.0f, 0.0f, 0.0f,
     0x1.3c74ecp-76f, 0.0f, 0.0f, 0x1.75d842p-102f, 0x1.80c03ap-71f, 0.0f,
     0x1.52d20ap-56f, 0.0f, 0.0f, 0.0f, 0x1.61c5b6p-39f, 0x1.f809d4p-90f,
     0x1.f49758p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0e5e4p-50f, 0x1.eccbb4p-74f,
     0x1.04ba0ap-86f, 0x1.0d0252p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.02829ap-59f,
     0x1.9c158p-18f, 0.0f, 0x1.179674p-44f, 0x1.94c5aap-115f, 0x1.2cb68p-16f,
     0x1.559584p-35f, 0x1.33e97ap-49f, 0x1.7bcf3cp-119f, 0.0f, 0x1.2f3864p-18f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.0a62a4p-80f, 0x1.e36118p-94f, 0.0f, 0x1.8e8616p-114f,
     0.0f, 0x1.d2e924p-35f, 0.0f, 0x1.157c78p-53f, 0.0f, 0.0f, 0.0f, 0x1.f1c402p-114f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.097f92p-49f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f8040ep-30f, 0x1p0f, 0x1.6e255ap-116f, 0.0f,
     0x1.5dc454p-74f, 0.0f, 0x1.c496ecp-6f, 0.0f, 0.0f, 0x1.27c1dcp-3f, 0x1.2cc4p-33f,
     0.0f, 0.0f, 0.0f, 0x1.f8f926p-102f, 0.0f, 0x1.7a2a8ep-66f, 0x1.17273ep-34f, 0.0f,
     0x1.9c8436p-16f, 0x1.02ba2ep-99f, 0x1.0be7bp-82f, 0x1.8dc7bap-114f, 0.0f, 0.0f,
     0x1.ec2e88p-63f, 0x1.6f474cp-33f, 0.0f, 0x1.b8c50cp-38f, 0x1.e1ab7p-5f,
     0x1.99d5eep-60f, 0.0f, 0x1.0c6f2cp-66f, 0.0f, 0x1.bc8d1ep-103f, 0.0f,
     0x1.a7c694p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a46026p-91f, 0x1.2ec952p-65f, 0.0f,
     0x1.b2c57cp-57f, 0.0f, 0.0f, 0x1.0d6b0ep-43f, 0.0f, 0.0f, 0x1.d2f056p-40f,
     0x1.4e7d1ap-112f, 0x1.dcad8ep-114f, 0x1.2829bp-29f, 0x1.b46c9p-75f, 0.0f, 0.0f,
     0.0f, 0x1.ae2f72p-123f, 0.0f, 0x1.5046aap-116f, 0.0f, 0x1.803e78p-42f,
     0x1.b05c1ep-35f, 0x1.243928p-33f, 0x1.09621ep-101f, 0x1.1e5a4cp-39f,
     0x1.5723dp-94f, 0x1.2c23aap-46f, 0.0f, 0x1.41d256p-48f, 0.0f, 0.0f,
     0x1.4cfbb6p-37f, 0x1.a2fcf4p-37f, 0x1.aee626p-24f, 0x1.881882p-78f, 0.0f,
     0x1.6e5538p-20f, 0x1.e838e4p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.eb59dap-31f, 0x1.04c27p-41f, 0x1.ea0dacp-105f, 0.0f, 0x1.a4c654p-52f, 0.0f,
     0.0f, 0x1.910ed4p-12f, 0x1.ef2008p-78f, 0.0f, 0x1.96d09ap-98f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.40b21ep-51f, 0x1.6a71bp-91f, 0.0f, 0.0f, 0x1.700c6ep-111f,
     0.0f, 0.0f, 0x1.83ceacp-117f, 0x1.69f2e2p-59f, 0.0f, 0x1.c7afdep-118f, 0.0f,
     0.0f, 0.0f, 0x1.c2d258p-34f, 0x1.c3c99ep-37f, 0.0f, 0.0f, 0x1.9be9fep-78f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d2e58ep-83f, 0x1.afd1d6p-19f, 0.0f, 0.0f, 0x1.6ec5e6p-73f,
     0x1.2c67f4p-37f, 0x1.2ea03p-14f, 0x1.c54cf6p-122f, 0x1.fff4fep-111f, 0.0f, 0.0f,
     0.0f, 0x1.e8c2bp-71f, 0x1.f4782ap-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f85f12p-11f, 0x1.115364p-84f, 0x1.2a50b8p-43f, 0x1.2e0572p-88f, 0.0f, 0.0f,
     0x1.8b733p-3f, 0.0f, 0x1.fe914ap-89f, 0x1.a6f048p-36f, 0x1.989adap-14f, 0.0f,
     0x1.b9a23cp-2f, 0.0f, 0x1.b35262p-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ef18bcp-113f,
     0.0f, 0x1.012a88p-10f, 0.0f, 0.0f, 0x1.6e2f8cp-15f, 0x1.16be12p-41f, 0.0f,
     0x1.af9a4ap-11f, 0x1.e61d76p-98f, 0x1.00f06cp-126f, 0.0f, 0.0f, 0x1.347856p-99f,
     0x1.8c48a6p-92f, 0x1.ea44bep-78f, 0.0f, 0x1.03763ep-103f, 0.0f, 0.0f, 0.0f,
     0x1.cab6ap-79f, 0.0f, 0x1.ed6bc6p-89f, 0x1.7ca384p-48f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.2a6f84p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6c7d7p-75f,
     0x1.2fac0ep-3f, 0.0f, 0.0f, 0x1.76cf74p-9f, 0x1.68e306p-48f, 0.0f,
     0x1.03342ep-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.298adp-102f, 0.0f,
     0x1.df871ep-125f, 0x1.d8352cp-23f, 0x1.2faf0cp-89f, 0.0f, 0x1.85ef8ep-98f,
     0x1.f1ef68p-49f, 0.0f, 0.0f, 0x1.5ee5a4p-12f, 0.0f, 0.0f, 0x1.bed406p-105f,
     0x1.74ac84p-80f, 0x1.17678ap-118f, 0x1.2e85bap-88f, 0x1.47ec3ap-118f, 0.0f,
     0x1.1c398ap-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.51339p-82f, 0.0f,
     0x1.37f854p-11f, 0x1.497524p-94f, 0x1.9122f2p-64f, 0x1.67075ap-6f, 0.0f,
     0x1.7706f8p-45f, 0.0f, 0.0f, 0x1.2f0e2ap-20f, 0x1.2d3902p-46f, 0x1.8f93d8p-91f,
     0x1.098a58p-95f, 0x1.4cfae8p-118f, 0.0f, 0.0f, 0x1.f26876p-102f, 0x1.c937bcp-95f,
     0.0f, 0.0f, 0.0f, 0x1.fa360cp-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.946768p-52f, 0.0f, 0x1.f8bd7p-114f, 0.0f, 0x1.834d02p-61f,
     0x1.4ae282p-112f, 0.0f, 0x1.7d5fc6p-105f, 0.0f, 0x1.19afa6p-41f,
     0x1.7c9d6cp-110f, 0x1.523b38p-6f, 0.0f, 0.0f, 0x1.0221aep-86f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.3bd9c6p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a92d5p-122f, 0.0f, 0x1.8a14fcp-24f, 0x1.8273b2p-17f, 0x1.0cba2cp-77f,
     0x1.7a3886p-4f, 0x1.4ccf92p-40f, 0.0f, 0.0f, 0.0f, 0x1.2eccfep-88f, 0.0f, 0.0f,
     0.0f, 0x1.3ee62ap-44f, 0x1.ed301cp-95f, 0x1.b5d1e4p-38f, 0x1.59c346p-55f, 0.0f,
     0x1.c6bc58p-43f, 0.0f, 0.0f, 0.0f, 0x1.9948acp-36f, 0.0f, 0x1.ac83aap-36f, 0.0f,
     0x1.f6a70cp-7f, 0x1.e4e254p-102f, 0x1.eadc96p-5f, 0.0f, 0.0f, 0x1.b91758p-19f,
     0.0f, 0.0f, 0x1.33ec18p-11f, 0x1.c07292p-44f, 0x1.173004p-61f, 0.0f, 0.0f, 0.0f,
     0x1.e6cc06p-109f, 0x1.a63442p-9f, 0.0f, 0x1.c1c24p-75f, 0x1.1f2a4ep-112f,
     0x1.247cc2p-32f, 0.0f, 0x1.457e18p-125f, 0x1.3f8458p-101f, 0.0f, 0.0f,
     0x1.510ed4p-119f, 0x1.9ab724p-38f, 0x1.610dp-41f, 0x1.75ca1cp-108f,
     0x1.61acacp-115f, 0.0f, 0.0f, 0x1.976e48p-69f, 0x1.61026ap-47f, 0.0f, 0.0f, 0.0f,
     0x1.46658ep-118f, 0x1.65df36p-28f, 0x1.24b9d2p-75f, 0x1.bd052p-89f,
     0x1.8253d8p-108f, 0x1.409bb6p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4241d2p-39f,
     0x1.6a5278p-58f, 0x1.961172p-21f, 0x1.ea5cb2p-101f, 0x1.1d0c26p-85f,
     0x1.01bdcep-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a9e3d2p-42f, 0x1.2f5786p-50f, 0.0f,
     0.0f, 0x1.de59bcp-96f, 0x1.6f8632p-58f, 0x1p0f, 0x1.b9bd46p-34f, 0.0f,
     0x1.c38f5ap-43f, 0.0f, 0x1.2b5dfep-26f, 0x1.52df78p-53f, 0.0f, 0.0f, 0x1p0f,
     0.0f, 0.0f, 0.0f, 0x1.55735p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1f022p-108f,
     0x1.994fd2p-89f, 0.0f, 0.0f, 0.0f, 0x1.ff406p-45f, 0.0f, 0.0f, 0.0f,
     0x1.6332c2p-40f, 0x1.c3d95p-7f, 0x1.787c5p-35f, 0x1.83e038p-33f, 0.0f, 0.0f,
     0.0f, 0x1.5ba648p-37f, 0.0f, 0x1.4385f4p-20f, 0.0f, 0.0f, 0x1.420284p-81f,
     0x1.fb7fe6p-49f, 0x1.57961ep-7f, 0x1.e3ec76p-73f, 0.0f, 0x1.5a1ebep-30f,
     0x1.5683ap-32f, 0x1.b042bp-89f, 0x1.b831bep-91f, 0x1.113b44p-14f, 0.0f, 0.0f,
     0x1.f8573cp-20f, 0x1.17a5b8p-46f, 0x1.1e230cp-28f, 0x1.aa57dp-123f,
     0x1.45f74cp-16f, 0x1.27d084p-53f, 0x1.539468p-52f, 0.0f, 0x1.dbfbe6p-36f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a22fa6p-113f,
     0.0f, 0.0f, 0.0f, 0x1.f2e3b8p-22f, 0.0f, 0.0f, 0.0f, 0x1.9a3184p-119f, 0.0f,
     0x1.f1b986p-95f, 0.0f, 0.0f, 0x1.6121d2p-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.021202p-38f, 0x1.70f0e8p-53f, 0.0f, 0.0f, 0x1.0ac6f4p-15f, 0x1.fe682ep-23f,
     0.0f, 0.0f, 0x1.528956p-12f, 0.0f, 0x1.82c05ap-20f, 0.0f, 0x1.249c3cp-120f, 0.0f,
     0x1.63b5e2p-82f, 0x1.99986cp-37f, 0.0f, 0x1.d752d8p-99f, 0x1.18f0d6p-122f,
     0x1.f08b94p-52f, 0x1.91cc7ep-120f, 0.0f, 0x1.607ed6p-43f, 0x1.9f959p-4f,
     0x1.0a2052p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ea621cp-106f, 0x1.d7923ap-7f,
     0x1.2a6a3ep-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dbd614p-106f,
     0x1.66cfb6p-56f, 0x1.db66acp-82f, 0.0f, 0x1.51ec32p-48f, 0.0f, 0x1.39498ep-56f,
     0x1.d775dp-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b83bbcp-122f, 0.0f, 0.0f,
     0x1.8a5088p-120f, 0.0f, 0x1.3d9f54p-71f, 0x1.69a2acp-125f, 0.0f, 0.0f,
     0x1.bbf7b4p-84f, 0x1.901ea8p-116f, 0x1.7cc156p-65f, 0x1.d96322p-86f,
     0x1.ce977p-113f, 0.0f, 0.0f, 0x1.e412f6p-108f, 0.0f, 0x1.053f4p-54f,
     0x1.a71f7ep-70f, 0.0f, 0.0f, 0x1.486518p-73f, 0x1.e93e16p-122f, 0x1.5235f2p-78f,
     0x1.fe6d64p-100f, 0x1.216378p-3f, 0x1.8d20f6p-53f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2f34c6p-29f, 0.0f, 0x1.07d0a2p-105f, 0.0f, 0.0f, 0x1.91684cp-32f, 0.0f, 0.0f,
     0x1.9900b6p-17f, 0.0f, 0x1.2b99eap-77f, 0x1.a0732ap-123f, 0x1.ea6e6ap-89f,
     0x1.4c533ep-49f, 0x1.720a42p-81f, 0x1.4b80ap-90f, 0.0f, 0x1.1f5e1ap-41f,
     0x1.8c98bp-30f, 0.0f, 0x1.b3429p-106f, 0x1.357e0cp-11f, 0x1.d4cef4p-78f,
     0x1.efba3ap-23f, 0.0f, 0x1.9d9ea6p-86f, 0.0f, 0.0f, 0.0f, 0x1.f9b7fep-91f, 0.0f,
     0.0f, 0x1.e97676p-108f, 0x1.e9b0ap-54f, 0.0f, 0x1.3917a8p-121f, 0x1.587fe4p-54f,
     0x1.21999p-122f, 0.0f, 0.0f, 0x1.883274p-10f, 0x1.343454p-77f, 0x1p0f, 0.0f,
     0x1.154a8cp-39f, 0.0f, 0x1.c72448p-76f, 0x1.3c4048p-91f, 0.0f, 0x1.bb8e24p-16f,
     0.0f, 0x1.affacep-35f, 0x1.2ba1b2p-13f, 0x1.cd2f8p-41f, 0x1.804f9cp-89f,
     0x1.c16f58p-86f, 0.0f, 0.0f, 0x1.f05e64p-78f, 0x1.b62886p-51f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.6bbb52p-90f, 0x1.222d3cp-63f, 0.0f, 0x1.cd5b2cp-22f, 0.0f, 0.0f,
     0x1.81154ap-109f, 0x1.5c69d4p-66f, 0.0f, 0x1.41d6fcp-111f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.84f2c6p-88f, 0x1.77f9dcp-42f, 0.0f, 0x1.d21654p-45f, 0x1.1b50e8p-65f,
     0x1.f55e5p-61f, 0.0f, 0x1.b1a228p-27f, 0.0f, 0x1.4ef45cp-28f, 0.0f, 0.0f, 0.0f,
     0x1.10ed4ep-11f, 0.0f, 0.0f, 0x1.4cb39ep-60f, 0.0f, 0.0f, 0.0f, 0x1.bb95bcp-4f,
     0x1.4f814ap-93f, 0.0f, 0x1.7b0722p-28f, 0x1.2eeb72p-77f, 0x1.c12436p-36f, 0.0f,
     0x1.06d8a2p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f0c19ep-29f,
     0x1.dda8c2p-118f, 0.0f, 0.0f, 0x1.a39114p-38f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4687b8p-96f, 0x1.04095ep-6f, 0x1.483dc8p-120f, 0.0f, 0.0f, 0x1.9cf6f4p-47f,
     0x1.52ddecp-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.55efdp-47f, 0.0f,
     0x1.3eac4ep-80f, 0.0f, 0.0f, 0.0f, 0x1.2bee4cp-103f, 0.0f, 0x1.58c73p-25f,
     0x1.cc4ce2p-42f, 0.0f, 0x1.bc4688p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.546dccp-35f,
     0x1.f5a97ep-9f, 0x1.46b222p-49f, 0x1.cebe8ap-62f, 0.0f, 0.0f, 0x1.a48a78p-1f,
     0x1.63bde4p-81f, 0.0f, 0.0f, 0.0f, 0x1.bb0ea8p-62f, 0x1.524226p-36f,
     0x1.b26166p-73f, 0x1.a0d4ap-98f, 0.0f, 0.0f, 0.0f, 0x1.c3324cp-123f, 0.0f, 0.0f,
     0x1.6b88dp-35f, 0.0f, 0x1.9d1dap-123f, 0x1.acec38p-78f, 0x1.7432b4p-56f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.1c78aep-108f, 0.0f, 0x1.3deadep-69f, 0.0f,
     0x1.01b9d6p-2f, 0x1.078294p-51f, 0.0f, 0.0f, 0.0f, 0x1.39b766p-119f, 0.0f,
     0x1.a27c4ap-107f, 0x1.240076p-101f, 0.0f, 0x1.5ea83ep-48f, 0.0f, 0x1.4cbe9ep-58f,
     0x1.60ddcep-40f, 0.0f, 0.0f, 0.0f, 0x1.f25e18p-8f, 0x1.08d4acp-26f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4cda5cp-52f, 0x1.581fcep-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bac256p-13f, 0x1.98e3b4p-65f, 0x1.3b0136p-61f, 0.0f, 0x1.71d76cp-72f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c2d49ap-63f, 0.0f, 0x1.399acap-84f, 0x1.e2f63ep-12f, 0.0f,
     0x1.03d6c2p-58f, 0x1.e38df2p-89f, 0x1.fa7ffp-74f, 0x1.e4ac6p-36f, 0x1.4f5e48p-7f,
     0.0f, 0x1.b64bb2p-88f, 0.0f, 0x1.48a74p-5f, 0x1.2a2d5ep-126f, 0.0f,
     0x1.7e9282p-1f, 0x1.3b7c8p-22f, 0.0f, 0x1.d434bcp-14f, 0x1.7b6e44p-84f,
     0x1.86492cp-33f, 0.0f, 0.0f, 0.0f, 0x1.5f359ep-8f, 0.0f, 0x1.ef7ff4p-115f, 0.0f,
     0.0f, 0x1.267e44p-116f, 0x1.788af6p-11f, 0.0f, 0x1.f670f4p-77f, 0.0f, 0.0f,
     0x1.7acep-74f, 0x1.de9738p-84f, 0x1.ffb9dp-101f, 0.0f, 0x1.f720f8p-86f,
     0x1.4083p-86f, 0x1.ced22p-12f, 0.0f, 0.0f, 0x1.03cdbep-45f, 0x1.1676dep-78f,
     0x1.b46388p-114f, 0.0f, 0x1.582466p-68f, 0.0f, 0.0f, 0x1.96328cp-68f, 0.0f,
     0x1.55ebep-11f, 0.0f, 0x1.9216ep-40f
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
            tmp1 = Sleef_sqrtf4_u05kvx(tmp0);
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
    printf("Sleef_sqrtf4_u05kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_sqrtf4_u05kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
