/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_frfrexpf4_avx2128.c --function Sleef_frfrexpf4_avx2128 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 4 --function-input-vector-size 4 --bench \
 *     --no-embedded-bin --target x86_avx2128
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
     0.0f, 0x1.780a0ep-42f, 0.0f, 0.0f, 0x1.500fa6p-96f, 0x1.6dfddap-79f,
     0x1.d5702cp-112f, 0x1.ebf6a2p-44f, 0.0f, 0.0f, 0x1.42f574p-9f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.28d006p-116f, 0x1.fa1964p-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.903adcp-44f, 0x1.8d1b7cp-124f, 0x1.93136ep-78f, 0.0f, 0x1.ebc35ap-27f,
     0.0f, 0.0f, 0x1p0f, 0x1.00b4bap-15f, 0x1.b092cap-86f, 0x1.ad78e4p-100f, 0.0f,
     0x1.d5e132p-17f, 0.0f, 0x1.1b99bep-51f, 0.0f, 0x1.c69e5ap-114f, 0x1.3c2a72p-56f,
     0.0f, 0x1.7abd4ap-14f, 0.0f, 0.0f, 0x1.afed72p-60f, 0.0f, 0x1.9529d4p-11f,
     0x1.361ap-90f, 0.0f, 0.0f, 0.0f, 0x1.d99976p-96f, 0x1.5d22dp-14f,
     0x1.600594p-73f, 0.0f, 0x1.1b640ap-74f, 0x1.8d1e1ap-34f, 0.0f, 0x1.e12d06p-54f,
     0x1.ba5104p-109f, 0x1.ec0c8p-117f, 0x1.3b73a6p-82f, 0x1.9a2e66p-34f,
     0x1.937b02p-80f, 0x1.11260ap-23f, 0x1.75394p-26f, 0x1.cb2e36p-80f, 0.0f,
     0x1.e97da8p-75f, 0x1.c5b944p-74f, 0.0f, 0x1.a4c8cep-43f, 0.0f, 0.0f,
     0x1.aa1a02p-102f, 0x1.3e68p-117f, 0.0f, 0.0f, 0x1.199414p-35f, 0x1.042e7cp-126f,
     0.0f, 0x1.31385cp-111f, 0.0f, 0x1.8e36b6p-123f, 0.0f, 0x1.1bf0c6p-104f,
     0x1.6bed76p-41f, 0.0f, 0x1.d11d12p-54f, 0.0f, 0.0f, 0x1.a06066p-50f,
     0x1.851b8ep-37f, 0x1.70b1dep-108f, 0.0f, 0x1.4938c8p-76f, 0x1.e89222p-97f,
     0x1.662ccep-109f, 0.0f, 0x1.be282p-123f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e08314p-108f, 0.0f, 0x1.94ff8ap-26f, 0x1.433d46p-92f, 0x1p0f, 0.0f, 0.0f,
     0x1.f29b4cp-59f, 0.0f, 0.0f, 0.0f, 0x1.bee914p-8f, 0.0f, 0x1.c61728p-48f,
     0x1.aa5feap-115f, 0.0f, 0.0f, 0.0f, 0x1.50b01ap-7f, 0x1.b8be2p-1f,
     0x1.8c9126p-44f, 0x1.60b8e8p-43f, 0x1.83482p-26f, 0.0f, 0x1.fa13b4p-77f, 0.0f,
     0.0f, 0x1.248958p-63f, 0x1.f1751ep-109f, 0.0f, 0x1.ce0da6p-11f, 0.0f,
     0x1.1968aap-55f, 0.0f, 0.0f, 0.0f, 0x1.d07516p-32f, 0.0f, 0x1.5c6686p-38f, 0.0f,
     0.0f, 0x1.34c6fcp-57f, 0x1.091b74p-19f, 0x1.504524p-14f, 0.0f, 0x1.9202a2p-25f,
     0.0f, 0x1.bcf894p-92f, 0x1.0bafa4p-83f, 0.0f, 0x1.88a86cp-32f, 0x1.c1c904p-71f,
     0x1.b11ce4p-113f, 0x1.aded82p-17f, 0x1.e48d48p-117f, 0x1.ba493ep-83f,
     0x1.c96deep-62f, 0.0f, 0x1.d0c702p-42f, 0.0f, 0x1.c9d87cp-37f, 0x1.a9f4e4p-87f,
     0.0f, 0x1.1823ap-16f, 0x1.d9727ap-121f, 0x1.bd395ep-19f, 0.0f, 0.0f,
     0x1.5d1562p-74f, 0x1.89deep-51f, 0x1.141b38p-44f, 0.0f, 0x1.1129bep-6f,
     0x1.ce40bp-15f, 0x1.e8bd5ep-27f, 0.0f, 0.0f, 0.0f, 0x1.2d6434p-79f,
     0x1.d484a6p-6f, 0x1.1a812ap-54f, 0x1.e6b4f8p-112f, 0.0f, 0x1.a14866p-17f,
     0x1.2ce3bap-73f, 0.0f, 0x1.121476p-28f, 0.0f, 0x1.6ed17ap-125f, 0.0f, 0.0f,
     0x1p0f, 0.0f, 0x1.d3625ap-86f, 0x1.81bd3ap-104f, 0x1.8aaf1ap-122f, 0.0f, 0.0f,
     0x1.f49ac8p-103f, 0.0f, 0.0f, 0x1.e6be8cp-26f, 0x1.242146p-125f, 0x1.d3040cp-61f,
     0x1.6bf7a6p-77f, 0.0f, 0.0f, 0x1.ce7304p-99f, 0.0f, 0x1.621aa4p-119f, 0.0f,
     0x1.0f6db2p-13f, 0x1.c87038p-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7874bcp-101f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cf14p-77f, 0.0f, 0.0f, 0x1.4da47ap-39f,
     0.0f, 0x1p0f, 0.0f, 0x1.0528dap-55f, 0.0f, 0.0f, 0.0f, 0x1.3eee46p-48f,
     0x1.06a5b8p-5f, 0.0f, 0.0f, 0x1.d6504ap-126f, 0x1.f4adcap-103f, 0x1.594be8p-103f,
     0x1.65e122p-76f, 0.0f, 0x1.be4d12p-51f, 0x1.8d57b8p-103f, 0x1.085212p-104f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.cbb468p-52f, 0.0f, 0x1.db5404p-3f, 0x1.1c2852p-83f,
     0x1.43eb98p-116f, 0.0f, 0x1.b21044p-97f, 0x1.27819ep-112f, 0.0f, 0x1.685f9cp-47f,
     0x1.aca02p-85f, 0x1.0bf60ep-69f, 0.0f, 0.0f, 0.0f, 0x1.c1b88cp-67f,
     0x1.2ea1p-17f, 0x1.dca9b8p-5f, 0.0f, 0.0f, 0x1.5132e4p-8f, 0x1.8e96b6p-85f,
     0x1.108a0ep-90f, 0x1.ae502ap-21f, 0x1.38103ap-19f, 0.0f, 0x1.399abep-17f,
     0x1.bd0d62p-29f, 0.0f, 0x1.16c678p-16f, 0.0f, 0x1.dc435ap-122f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.7a9e0ap-104f, 0.0f, 0x1.9c2e2cp-36f, 0.0f, 0.0f, 0x1.33673ep-109f,
     0x1.68b538p-29f, 0x1.51978p-96f, 0.0f, 0x1.7ec95cp-60f, 0x1.242192p-67f,
     0x1.16a3b6p-18f, 0x1.ecede8p-8f, 0x1.8904ep-23f, 0x1.8336dap-54f,
     0x1.0d75b8p-80f, 0x1.353b66p-104f, 0x1.697096p-66f, 0.0f, 0x1.311254p-74f, 0.0f,
     0.0f, 0x1.f97aa4p-64f, 0x1.23d776p-45f, 0.0f, 0.0f, 0.0f, 0x1.1c13a8p-15f,
     0x1.4ef3a4p-39f, 0.0f, 0.0f, 0x1.0024dcp-47f, 0x1.b1ed1p-2f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ff81ccp-126f, 0.0f, 0.0f, 0x1.1025a8p-13f, 0.0f, 0.0f, 0.0f,
     0x1.1c89aap-110f, 0x1.dfd9cap-8f, 0x1.dfed48p-35f, 0.0f, 0.0f, 0x1.15d8cap-95f,
     0x1.5e6906p-80f, 0.0f, 0x1.8c1d5ep-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bab23ap-100f, 0x1.866c72p-113f, 0x1.7c7362p-115f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e73266p-14f, 0x1.7f7c08p-45f, 0.0f, 0x1.3bb61ap-4f, 0.0f, 0x1.26467ep-103f,
     0.0f, 0x1.2a732ap-109f, 0x1.4184f8p-30f, 0.0f, 0x1.77acaap-95f, 0x1.1a6b16p-63f,
     0.0f, 0.0f, 0x1.27679cp-121f, 0x1.a0b402p-66f, 0.0f, 0x1.9d088cp-104f,
     0x1.dc0d16p-39f, 0x1.8dda7cp-109f, 0.0f, 0.0f, 0.0f, 0x1.610fp-68f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ed12b2p-77f, 0.0f, 0x1.474a24p-42f, 0.0f, 0x1.802396p-27f,
     0.0f, 0x1.702472p-39f, 0.0f, 0x1.cb7f38p-83f, 0.0f, 0x1.9f90b8p-126f, 0.0f,
     0x1.9241bap-34f, 0x1.dce67cp-77f, 0.0f, 0.0f, 0.0f, 0x1.8d513p-23f, 0.0f, 0.0f,
     0x1.9467eap-79f, 0x1.b6cdf2p-101f, 0.0f, 0.0f, 0.0f, 0x1.8d0276p-59f, 0.0f,
     0x1.7e9136p-9f, 0.0f, 0.0f, 0x1.ea1cp-68f, 0.0f, 0x1.3e5b3ep-35f,
     0x1.eda87cp-24f, 0x1.933fd4p-18f, 0x1.208542p-34f, 0.0f, 0.0f, 0.0f,
     0x1.0939eap-26f, 0x1.904368p-106f, 0.0f, 0.0f, 0x1.2f40b6p-68f, 0x1.72b31cp-1f,
     0x1.efe5fp-62f, 0x1.e2673ap-19f, 0.0f, 0.0f, 0.0f, 0x1.9ea1d2p-39f,
     0x1.5bc96p-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.61d71ap-45f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2b9354p-121f, 0x1.c76d42p-51f, 0x1.75a2d8p-79f, 0x1p0f, 0x1.5826eap-98f,
     0x1.de4396p-61f, 0.0f, 0x1.992914p-74f, 0x1.eaff0ep-52f, 0x1.1877b2p-21f, 0.0f,
     0.0f, 0x1.cacc3ap-114f, 0.0f, 0.0f, 0x1.e0312ep-29f, 0.0f, 0x1.cb1918p-11f, 0.0f,
     0x1.dbca84p-9f, 0x1.426054p-62f, 0x1.414f38p-115f, 0.0f, 0.0f, 0x1.32c7b8p-57f,
     0.0f, 0.0f, 0.0f, 0x1.5eef9ep-59f, 0.0f, 0.0f, 0.0f, 0x1.d13fb2p-81f, 0.0f, 0.0f,
     0x1.390da6p-108f, 0x1.a1afe6p-92f, 0.0f, 0x1.08845ep-87f, 0x1.6ffbbcp-69f, 0.0f,
     0x1.4052c6p-84f, 0x1.d318b6p-23f, 0.0f, 0.0f, 0x1.76af4ap-38f, 0.0f, 0.0f,
     0x1.0a7de4p-87f, 0x1.1de7dcp-47f, 0.0f, 0x1.c94626p-39f, 0x1.f336e2p-102f,
     0x1.26c73ep-65f, 0x1.ad5p-60f, 0.0f, 0.0f, 0x1.f0ff08p-98f, 0.0f, 0.0f,
     0x1.d57b52p-94f, 0.0f, 0x1.85e5b4p-69f, 0.0f, 0x1.9859b2p-56f, 0.0f, 0.0f,
     0x1.fbe6d6p-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.924722p-99f, 0.0f, 0x1.2dd232p-7f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.35d556p-66f, 0x1.191fdep-83f, 0x1.ab4332p-62f, 0.0f,
     0x1.64c87cp-65f, 0.0f, 0x1.48cfb8p-85f, 0.0f, 0.0f, 0.0f, 0x1.0a2c54p-45f, 0.0f,
     0x1.d95e9ap-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ad909ap-52f, 0x1.9146bep-38f,
     0x1.b8e042p-63f, 0.0f, 0x1.122944p-73f, 0.0f, 0x1.782dc8p-33f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.54e0d4p-4f, 0.0f, 0.0f, 0x1.77e67cp-98f, 0x1.7b4008p-17f,
     0x1.42cb7cp-14f, 0.0f, 0.0f, 0x1.ec5c46p-66f, 0.0f, 0x1.b2f71ep-116f,
     0x1.ec0d36p-104f, 0.0f, 0.0f, 0.0f, 0x1.de5404p-91f, 0x1.d5de38p-44f,
     0x1.3f29eap-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.53a43ep-27f, 0.0f,
     0x1.d2dea8p-28f, 0.0f, 0x1.e44dp-67f, 0.0f, 0x1.44b8fcp-48f, 0x1.dffefcp-22f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b685e4p-66f, 0.0f, 0.0f, 0.0f, 0x1.551ecep-115f,
     0x1.14ca8ep-64f, 0.0f, 0x1.70bb7p-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.05187p-24f, 0.0f, 0x1.feeda2p-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.faeb56p-37f, 0x1.daa79ep-28f, 0.0f, 0x1.0761a4p-5f, 0.0f, 0x1.cb4152p-35f,
     0.0f, 0.0f, 0x1.035282p-40f, 0.0f, 0.0f, 0x1.862ce2p-24f, 0.0f, 0x1p0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ae0bdp-1f, 0.0f, 0.0f, 0x1.1d279p-81f, 0.0f, 0x1p0f,
     0x1.83eceep-76f, 0x1.5f2276p-106f, 0x1.c70f72p-94f, 0x1.e9d55ap-125f, 0.0f,
     0x1.3523fcp-6f, 0.0f, 0.0f, 0x1.63ccdp-46f, 0x1.8aedfap-109f, 0x1.7f7566p-33f,
     0x1.84cbf2p-80f, 0x1.c072fcp-109f, 0x1.adc784p-26f, 0.0f, 0x1.b4578ep-107f,
     0x1.79a11p-11f, 0.0f, 0.0f, 0x1.8b649cp-117f, 0x1.0644aep-71f, 0x1.87ad26p-19f,
     0x1.e29c78p-43f, 0x1.a9fb46p-30f, 0x1.fbbe8ep-116f, 0.0f, 0x1.7c202p-71f,
     0x1.4e9f8ep-94f, 0.0f, 0x1.90318cp-11f, 0x1.88bb02p-101f, 0x1.2e44bap-54f, 0.0f,
     0x1.142138p-63f, 0.0f, 0.0f, 0x1.39d99ap-93f, 0.0f, 0x1.8bf8e6p-73f,
     0x1.043be8p-76f, 0.0f, 0x1.89d70ep-48f, 0x1.2b1386p-125f, 0x1.50b5ccp-94f,
     0x1.528c56p-67f, 0.0f, 0x1.c5c9b4p-30f, 0.0f, 0.0f, 0x1.c5785p-24f, 0.0f,
     0x1.333ba2p-119f, 0.0f, 0x1.87750ap-85f, 0x1.6e5592p-125f, 0.0f,
     0x1.cd2b42p-102f, 0x1.18c336p-2f, 0.0f, 0.0f, 0.0f, 0x1.0f77bap-38f,
     0x1.9348d6p-66f, 0x1.3c147p-123f, 0x1.8cc6dp-12f, 0.0f, 0.0f, 0x1.90b92ep-109f,
     0.0f, 0x1.12ca5ep-124f, 0.0f, 0x1.7f0c42p-70f, 0.0f, 0.0f, 0x1.3a9f86p-82f,
     0x1.1f0ec4p-13f, 0.0f, 0.0f, 0x1.bfa058p-92f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cbdbcep-58f, 0x1.d53c72p-20f, 0x1.89d3cep-29f, 0x1.ff2554p-33f, 0.0f, 0.0f,
     0x1.c4aaf6p-112f, 0.0f, 0.0f, 0.0f, 0x1.54d24ep-29f, 0x1.84ff4p-3f, 0.0f, 0.0f,
     0.0f, 0x1.d45b76p-97f, 0.0f, 0x1.b7e64p-97f, 0x1.f69e7p-104f, 0.0f,
     0x1.8430f2p-56f, 0.0f, 0x1.0bc416p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4a1c08p-41f, 0.0f, 0x1.ba68ecp-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.187b68p-112f, 0x1.fc7232p-88f, 0x1.29e456p-12f, 0x1.df9f28p-16f,
     0x1.bf353cp-68f, 0x1.e40452p-34f, 0.0f, 0x1.bd1bf4p-40f, 0x1.cc5402p-65f,
     0x1.a7d06cp-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.12c6e8p-105f, 0x1.dd26bap-20f,
     0.0f, 0x1.160cf8p-9f, 0x1.d47feap-16f, 0.0f, 0.0f, 0x1.07e8ap-30f, 0.0f, 0.0f,
     0x1.30d6bp-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fd7fecp-106f,
     0x1.e86c78p-57f, 0.0f, 0x1.b81a4p-79f, 0x1.da07dcp-108f, 0.0f, 0x1.9036d8p-96f,
     0x1.ca1bcap-119f, 0x1.9e104ap-92f, 0.0f, 0.0f, 0x1.dfe646p-24f, 0.0f,
     0x1.1d6238p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.de2c7ap-53f, 0.0f, 0.0f, 0.0f,
     0x1.5629b6p-45f, 0x1.b6c454p-107f, 0x1.158348p-46f, 0x1.55250ap-68f,
     0x1.c456dep-11f, 0.0f, 0.0f, 0x1.2aeb44p-43f, 0.0f, 0x1.0c957ap-22f,
     0x1.179aa6p-119f, 0.0f, 0.0f, 0x1.ca3042p-7f, 0x1.aac556p-32f, 0x1.017bap-53f,
     0x1.ee52a6p-102f, 0.0f, 0x1.dee99ap-16f, 0.0f, 0x1.718f96p-17f, 0x1.e103a2p-95f,
     0.0f, 0.0f, 0x1.54cd1p-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8c14fp-126f,
     0x1.0a94a2p-92f, 0.0f, 0.0f, 0x1.a2e9a6p-41f, 0.0f, 0x1.430bep-52f, 0.0f,
     0x1.82e33p-29f, 0.0f, 0.0f, 0.0f, 0x1.62bdb4p-16f, 0x1.11d45ep-57f,
     0x1.05c26ap-72f, 0x1.ad0404p-39f, 0.0f, 0x1.9df07cp-118f, 0x1.f042dp-51f,
     0x1.b669e4p-86f, 0x1.076b2ep-72f, 0.0f, 0x1.20273p-66f, 0x1.2e938cp-12f,
     0x1.c0badp-6f, 0.0f, 0.0f, 0x1.9e7e8p-106f, 0.0f, 0.0f, 0x1.15226ap-80f, 0.0f,
     0x1.f3ab5ep-11f, 0x1.8e08d8p-73f, 0x1.ad704ep-78f, 0.0f, 0x1.8afb16p-1f, 0.0f,
     0x1.0f8296p-16f, 0x1.3e72f4p-123f, 0.0f, 0x1.0d48a4p-77f, 0.0f, 0x1.eb08dap-120f,
     0x1.4a774ep-69f, 0.0f, 0x1.f3a59cp-59f, 0x1.ae3402p-111f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2774e6p-125f, 0.0f, 0x1.edd982p-106f, 0.0f, 0x1.1cd8acp-33f, 0.0f, 0.0f,
     0x1.c3c812p-14f, 0.0f, 0.0f, 0.0f, 0x1.b0446p-124f, 0.0f, 0.0f, 0x1.c3142ep-21f,
     0.0f, 0.0f, 0x1.578504p-84f, 0.0f, 0x1.effc1p-104f, 0.0f, 0x1.90e51p-80f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ae55c2p-108f, 0.0f,
     0.0f, 0x1.168cbep-44f, 0.0f, 0.0f, 0.0f, 0x1.48115ap-35f, 0x1.daeaeap-18f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.53e748p-55f, 0x1.891e1ep-93f, 0x1.fc24b6p-90f, 0.0f,
     0x1.c3c9c2p-35f, 0x1.86f3d8p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.de2dfep-25f, 0x1.ae386ep-9f, 0x1.786be4p-7f, 0.0f, 0x1.e5467p-16f, 0.0f,
     0x1.b7b926p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.676464p-115f, 0x1.990efcp-2f, 0.0f,
     0x1.ab2266p-121f, 0x1.277386p-37f, 0x1.53ba22p-39f, 0.0f, 0x1.de3f2ep-73f, 0.0f,
     0x1.43f416p-46f, 0.0f, 0.0f, 0x1.679f3ap-119f, 0.0f, 0.0f, 0x1.3a386ep-74f, 0.0f,
     0x1.f647bcp-42f, 0.0f, 0.0f, 0.0f, 0x1.f1a32cp-21f, 0.0f, 0.0f, 0x1.e5a4fcp-31f,
     0x1.db4918p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1db864p-50f, 0x1.2df5p-2f, 0x1.1178dp-33f, 0x1.2ead12p-11f
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
            tmp1 = Sleef_frfrexpf4_avx2128(tmp0);
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
    printf("Sleef_frfrexpf4_avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_frfrexpf4_avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
