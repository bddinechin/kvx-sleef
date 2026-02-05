/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_tanhf4_u35kvx.c --function \
 *     Sleef_finz_tanhf4_u35kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 4 --function-input-vector-size \
 *     4 --bench --no-embedded-bin --target kv3
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
     0.0f, 0.0f, 0x1.fa345p-115f, 0.0f, 0.0f, 0x1.00bb2ep-15f, 0.0f, 0x1.bee3fep-36f,
     0x1.7c5e3p-14f, 0x1.d603b4p-38f, 0x1.6b2e04p-2f, 0.0f, 0.0f, 0.0f,
     0x1.1d1d5ap-30f, 0x1.0398bep-22f, 0x1.e0f632p-12f, 0x1.f2366ep-24f,
     0x1.ec2e9ap-10f, 0x1.4f31a6p-74f, 0x1.2fd1eep-59f, 0x1.24fac4p-43f,
     0x1.8fbc76p-121f, 0x1.e0544cp-108f, 0.0f, 0x1.636cap-59f, 0x1.2ee8ecp-11f, 0.0f,
     0.0f, 0x1.41d688p-17f, 0x1.34cbf6p-78f, 0x1.a1b014p-69f, 0x1.0d9f9ap-78f, 0.0f,
     0x1.243f0ep-15f, 0x1.c06eep-31f, 0.0f, 0x1.abae2cp-96f, 0.0f, 0x1.453778p-6f,
     0.0f, 0x1.0f9eccp-101f, 0x1.cf7964p-5f, 0.0f, 0x1.b84546p-115f, 0.0f,
     0x1.6035d2p-31f, 0.0f, 0x1.ee26bap-18f, 0.0f, 0.0f, 0x1.11549cp-9f,
     0x1.a1eb6ep-86f, 0x1.1e8bd2p-89f, 0.0f, 0x1.5c3256p-95f, 0x1.00f4e4p-21f,
     0x1.417068p-27f, 0x1.6c55acp-80f, 0x1.b4222cp-122f, 0x1.60432cp-22f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4cd14cp-81f, 0x1.730adep-115f, 0.0f, 0x1.02d0dp-93f, 0.0f,
     0x1.ee71b2p-26f, 0x1.5d5056p-5f, 0x1.54c44p-59f, 0x1.073d1ep-48f,
     0x1.2c681ep-100f, 0x1.7106d6p-120f, 0x1.8d942p-51f, 0.0f, 0x1.65ebf2p-31f, 0.0f,
     0.0f, 0x1.71536p-38f, 0.0f, 0x1.57b638p-103f, 0.0f, 0x1.c1cc4cp-112f, 0.0f,
     0x1.9e155p-25f, 0x1.60018p-88f, 0x1.480836p-49f, 0x1.f51ab2p-67f, 0.0f,
     0x1.750a7cp-88f, 0x1.3c28b6p-46f, 0x1.d8fceep-55f, 0.0f, 0.0f, 0x1.58745ep-91f,
     0.0f, 0x1.bf323ep-37f, 0x1.9d4f56p-4f, 0x1.26b3d8p-70f, 0.0f, 0x1.301876p-4f,
     0x1.eb763p-92f, 0.0f, 0.0f, 0x1.0bfdaap-38f, 0x1.84792ap-30f, 0x1.7bc20ap-117f,
     0x1.bd9014p-19f, 0x1.e7966ep-76f, 0x1.8d540ep-35f, 0x1.1e9f7p-86f,
     0x1.3f183ap-111f, 0.0f, 0.0f, 0x1.037f72p-44f, 0x1.2622aap-89f, 0x1.4bbd6ap-88f,
     0x1.0caafep-21f, 0x1.ecf724p-45f, 0x1.1e3394p-71f, 0x1.81f512p-20f, 0.0f, 0.0f,
     0.0f, 0x1.4ed3eep-83f, 0.0f, 0x1.67322ep-69f, 0.0f, 0.0f, 0x1.494ca2p-4f,
     0x1.057282p-119f, 0x1.51594ap-111f, 0x1.51b032p-122f, 0x1.cde76ap-69f,
     0x1.0a10bcp-23f, 0x1.800abep-101f, 0x1.984ac6p-76f, 0x1.6e9aeap-54f, 0.0f,
     0x1.39f714p-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.daa4a6p-50f,
     0x1.7f907p-44f, 0.0f, 0x1.7534e6p-87f, 0.0f, 0.0f, 0x1.5f15p-32f,
     0x1.d65922p-82f, 0.0f, 0x1.cd31d4p-87f, 0.0f, 0x1.dd7022p-121f, 0x1.ddb3a8p-37f,
     0x1.9f1916p-96f, 0x1.b79614p-115f, 0.0f, 0x1.0a3eeep-83f, 0.0f, 0x1.ce111p-86f,
     0.0f, 0x1.6868f2p-29f, 0x1.03cf96p-95f, 0x1.5480b6p-25f, 0x1.c8805ep-106f, 0.0f,
     0x1.cc2024p-60f, 0x1.631e84p-118f, 0x1.dc676p-67f, 0x1.38b942p-45f, 0.0f, 0.0f,
     0.0f, 0x1.20d2ecp-34f, 0.0f, 0x1.572912p-107f, 0x1.eb1b7ep-4f, 0.0f, 0.0f,
     0x1.0cc5f2p-23f, 0x1.f55ed2p-10f, 0.0f, 0x1.6babdcp-100f, 0x1.531948p-68f,
     0x1.d244e2p-23f, 0x1p0f, 0x1.e44ccp-90f, 0x1.b1557ap-43f, 0x1.ecda3cp-2f,
     0x1.c7ba6p-97f, 0.0f, 0x1.e03946p-21f, 0x1.3305cp-120f, 0.0f, 0x1.157bc2p-87f,
     0x1.4442a2p-53f, 0.0f, 0x1.8907a4p-42f, 0.0f, 0x1.cd7eeap-102f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.742d12p-100f, 0x1.78867p-85f, 0x1.19fefap-97f, 0x1.baa092p-114f,
     0x1.2b6422p-33f, 0x1.417b1cp-35f, 0.0f, 0.0f, 0.0f, 0x1.e77cp-97f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.341878p-124f, 0.0f, 0.0f, 0x1.5cc36cp-34f, 0.0f,
     0x1.5d21eep-117f, 0x1.87828cp-6f, 0x1.59ac72p-15f, 0x1.5dd0aep-8f, 0.0f, 0.0f,
     0x1.6b3988p-97f, 0x1.4c5c18p-70f, 0x1.e35922p-31f, 0.0f, 0x1.6e58cp-25f,
     0x1.9988dap-3f, 0.0f, 0x1.6b567cp-42f, 0x1.74d4aep-109f, 0x1.87f1e6p-119f,
     0x1.85f8a6p-83f, 0x1.0cae9ep-10f, 0x1.9b9d08p-21f, 0x1.ad15bap-24f,
     0x1.d96304p-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1367ap-39f, 0.0f, 0.0f,
     0.0f, 0x1.ca2644p-58f, 0x1.eb76bep-36f, 0.0f, 0.0f, 0x1.da8564p-19f, 0.0f,
     0x1.5e7ecp-15f, 0x1.b7a22p-80f, 0x1.ef739ep-78f, 0x1.46b28ap-125f, 0.0f,
     0x1.2ea84cp-69f, 0.0f, 0x1.02b9b4p-26f, 0x1.1b0346p-26f, 0.0f, 0x1.e23ccap-26f,
     0.0f, 0x1.57c98cp-111f, 0x1.4bd446p-84f, 0x1.e125a4p-116f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.114522p-95f, 0.0f, 0x1.fd9af6p-7f, 0x1.760bd8p-42f, 0.0f,
     0x1.4c6fd4p-26f, 0.0f, 0x1.af6eep-59f, 0x1.c8ad6p-89f, 0.0f, 0.0f, 0.0f,
     0x1.e0090ep-63f, 0x1.0d03dep-120f, 0x1.d38748p-83f, 0x1.665104p-53f,
     0x1.029f1p-26f, 0.0f, 0.0f, 0.0f, 0x1.59adc4p-56f, 0x1.be2f04p-56f,
     0x1.9bffd2p-106f, 0x1.104f7cp-75f, 0x1.d66858p-44f, 0x1.a58fep-53f,
     0x1.b95978p-12f, 0x1.09697cp-100f, 0.0f, 0x1.f478f4p-92f, 0x1.95f9eep-92f,
     0x1.a2dd1ap-8f, 0x1.106964p-75f, 0.0f, 0x1.fa197cp-108f, 0.0f, 0x1.b5388p-10f,
     0x1.b6975cp-70f, 0.0f, 0x1.d1c048p-46f, 0.0f, 0x1.0b0b3ep-17f, 0.0f,
     0x1.0abd16p-126f, 0x1.73047cp-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7e05fep-21f,
     0x1.ef2f4ep-31f, 0.0f, 0x1.1c1a68p-94f, 0x1.29658ap-91f, 0x1.3bd1bep-77f, 0.0f,
     0x1.e1427ep-106f, 0.0f, 0x1.352238p-98f, 0x1.1cd6bep-60f, 0x1.b3aa3ep-1f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3bf646p-84f, 0x1.50cadap-46f, 0x1.6849a2p-12f, 0.0f,
     0x1.b08ep-85f, 0.0f, 0x1.e37cbap-48f, 0x1.885b74p-113f, 0x1.a16462p-92f, 0.0f,
     0x1.94de3cp-89f, 0.0f, 0.0f, 0x1.3b611ep-92f, 0x1.c6e8c8p-61f, 0.0f,
     0x1.bc5b06p-110f, 0.0f, 0.0f, 0x1.11880ap-105f, 0x1.e5486ap-120f,
     0x1.1bb996p-53f, 0.0f, 0x1.32e11cp-48f, 0x1.b4f81p-124f, 0x1.b6e174p-35f,
     0x1.6dba96p-120f, 0x1.9a73fcp-65f, 0x1.44a6fap-76f, 0.0f, 0x1.16155cp-3f,
     0x1.30cc0ap-53f, 0.0f, 0x1.421ad4p-39f, 0x1.ff030ep-107f, 0x1.ed9b6cp-65f, 0.0f,
     0x1.7c6b9p-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.023db2p-120f, 0x1.9edafp-80f, 0.0f,
     0x1.f3f7bcp-73f, 0x1.cbeddp-95f, 0.0f, 0.0f, 0x1.324892p-1f, 0x1.855488p-97f,
     0.0f, 0x1.e0c4eep-64f, 0x1.214efap-93f, 0x1.c5d3c6p-95f, 0.0f, 0x1.5ca20cp-64f,
     0x1.fc0bd4p-116f, 0.0f, 0x1.5a5e66p-72f, 0.0f, 0.0f, 0x1.6b0d24p-100f, 0.0f,
     0x1.6d84f6p-55f, 0x1.868c9cp-33f, 0.0f, 0x1.c88e1ep-103f, 0.0f, 0x1.549feep-2f,
     0x1.378578p-27f, 0.0f, 0.0f, 0x1.aade1cp-63f, 0x1.1e2e66p-107f, 0.0f,
     0x1.4afa64p-43f, 0.0f, 0x1.8f990ap-47f, 0x1.3c3ebep-102f, 0.0f, 0.0f,
     0x1.9e371ep-64f, 0x1.b257e2p-11f, 0.0f, 0.0f, 0x1.85472ep-70f, 0x1.62cb72p-51f,
     0.0f, 0x1.f2e136p-39f, 0x1.648d4p-46f, 0x1.a6ae66p-124f, 0x1.0273bp-23f,
     0x1.5d0818p-63f, 0x1.b66106p-80f, 0x1.617784p-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c9a04cp-30f, 0x1.b53266p-30f, 0x1.07aa5cp-51f, 0x1.6e2492p-64f, 0.0f,
     0.0f, 0x1.a0427p-39f, 0x1.f26254p-104f, 0x1.a4bddep-41f, 0x1.c70d6p-77f,
     0x1.abc858p-101f, 0x1.ac2eap-13f, 0.0f, 0.0f, 0.0f, 0x1.5db638p-12f,
     0x1.0a2cdcp-57f, 0x1.bea0e4p-67f, 0.0f, 0.0f, 0x1.e9d4c2p-49f, 0.0f,
     0x1.7d6278p-44f, 0.0f, 0x1.7e9b64p-25f, 0x1.b6357ap-18f, 0.0f, 0x1.20baf8p-70f,
     0x1.0a8ab6p-104f, 0.0f, 0x1.6ecb32p-19f, 0x1.a76958p-55f, 0x1.8cd0e6p-11f,
     0x1.f839c8p-117f, 0x1.16ac9ap-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3e5666p-59f,
     0x1.1ac4fcp-41f, 0.0f, 0.0f, 0.0f, 0x1.09b33ap-92f, 0x1.ea9998p-54f, 0.0f,
     0x1.40ca7p-52f, 0.0f, 0.0f, 0x1.f3a158p-94f, 0.0f, 0.0f, 0x1.636726p-35f, 0.0f,
     0.0f, 0x1.e71ac4p-45f, 0.0f, 0.0f, 0x1.087e44p-42f, 0.0f, 0x1.6ba27ep-106f, 0.0f,
     0x1.83f542p-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.238e7p-28f, 0x1.4bcbfcp-19f,
     0x1.f7699p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4a8aa2p-59f, 0.0f,
     0x1.c6f178p-115f, 0x1.cbc394p-20f, 0.0f, 0x1.4ba87ep-34f, 0.0f, 0.0f, 0.0f,
     0x1.da8332p-93f, 0x1.fe33c2p-114f, 0x1.4ba684p-41f, 0x1.e10648p-63f,
     0x1.3a5e5ep-121f, 0x1.657226p-85f, 0.0f, 0.0f, 0x1.1a68d6p-30f, 0x1.6e04ecp-110f,
     0x1.03c71p-83f, 0x1.55338ap-94f, 0.0f, 0.0f, 0x1.3c4dd8p-62f, 0.0f,
     0x1.09de04p-8f, 0x1.c35e7p-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dd4ecap-94f,
     0x1.0bfab2p-2f, 0.0f, 0.0f, 0x1.dbab24p-84f, 0.0f, 0x1.62e876p-122f, 0.0f, 0.0f,
     0x1.eec766p-70f, 0.0f, 0.0f, 0.0f, 0x1.18bdaap-21f, 0.0f, 0x1.734ae4p-82f,
     0x1.6d5a16p-9f, 0.0f, 0.0f, 0x1.d1971cp-44f, 0.0f, 0.0f, 0x1.ab9b68p-34f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.123f06p-28f, 0x1.5f23fp-81f, 0x1.d47abap-80f,
     0x1.63f5bcp-78f, 0x1.c3bdbp-86f, 0.0f, 0x1.beb3d8p-113f, 0.0f, 0x1.f69956p-65f,
     0x1.a9a9c4p-20f, 0x1.a4bc96p-91f, 0.0f, 0.0f, 0x1.307b24p-111f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.bd9c38p-48f, 0x1.e8a61ep-66f, 0x1.808d12p-26f, 0x1.5aef6cp-102f,
     0x1.b28d94p-101f, 0.0f, 0x1.f7446ap-40f, 0x1.18fd78p-53f, 0.0f, 0.0f, 0.0f,
     0x1.a1a2bcp-10f, 0x1.c5329p-96f, 0x1.5f56f4p-67f, 0.0f, 0x1.b348b2p-8f, 0.0f,
     0x1.6083a4p-16f, 0x1.700d3cp-20f, 0.0f, 0x1.a872f2p-47f, 0.0f, 0x1.7e357ap-78f,
     0x1.177796p-108f, 0x1.9e72acp-1f, 0x1.f5939ap-23f, 0x1.050c5ep-65f, 0.0f,
     0x1.4a4294p-30f, 0x1.4a31d2p-33f, 0x1.3ec4dp-25f, 0x1.a46b34p-37f,
     0x1.912964p-2f, 0x1.15a282p-47f, 0.0f, 0.0f, 0.0f, 0x1.bbfa76p-59f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.68a3c4p-89f, 0.0f, 0x1.21598ap-36f, 0.0f, 0x1.a3464cp-47f,
     0.0f, 0x1.4faa6cp-19f, 0.0f, 0x1.292e44p-40f, 0x1.082836p-16f, 0.0f,
     0x1.b8a146p-79f, 0x1.7b0a56p-11f, 0.0f, 0x1.2829b8p-121f, 0x1p0f, 0.0f, 0.0f,
     0x1.9ce6b6p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.05b9ccp-21f, 0x1.8211fap-88f,
     0.0f, 0x1.ad447p-85f, 0x1.21418ap-84f, 0x1.ce209ep-54f, 0.0f, 0.0f,
     0x1.a7e548p-72f, 0.0f, 0x1.cf21e8p-102f, 0x1.674e48p-79f, 0.0f, 0x1.bad2d4p-78f,
     0.0f, 0.0f, 0x1.b24278p-25f, 0x1.cbfa12p-96f, 0.0f, 0.0f, 0x1p0f, 0.0f,
     0x1.0808d4p-6f, 0.0f, 0.0f, 0x1.d522a2p-100f, 0x1.9b8862p-39f, 0x1.e0081ep-17f,
     0x1.b12f34p-97f, 0.0f, 0x1.e78f9cp-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.99553p-124f, 0x1.523d0cp-63f, 0x1.47044cp-41f, 0x1.5c6bcp-26f, 0.0f,
     0x1.e6b266p-111f, 0.0f, 0x1.1a8c24p-47f, 0.0f, 0x1.66383cp-44f, 0.0f, 0.0f,
     0x1.132be2p-96f, 0.0f, 0.0f, 0x1.fa116ep-6f, 0.0f, 0x1.c808f6p-57f,
     0x1.2dca44p-5f, 0x1.529868p-60f, 0.0f, 0.0f, 0x1.f832cap-106f, 0.0f, 0.0f, 0.0f,
     0x1.45c42ep-10f, 0.0f, 0.0f, 0.0f, 0x1.dfe664p-52f, 0x1.96aaep-62f, 0.0f, 0.0f,
     0.0f, 0x1.7f6c86p-43f, 0.0f, 0x1.2204bap-72f, 0.0f, 0x1.bc05fp-33f,
     0x1.b73a1p-44f, 0.0f, 0x1.22f8c6p-53f, 0.0f, 0x1.f2470cp-8f, 0x1.5cd17ep-67f,
     0.0f, 0x1.0fa44ep-97f, 0x1.cd6454p-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8f85ap-58f,
     0x1.98ea74p-74f, 0.0f, 0.0f, 0x1.350964p-109f, 0.0f, 0.0f, 0x1.722998p-9f,
     0x1.7548d8p-49f, 0x1.e53bb6p-98f, 0x1.28581ep-26f, 0.0f, 0x1.baf34cp-44f,
     0x1.86d43cp-60f, 0.0f, 0.0f, 0.0f, 0x1.5b8a04p-115f, 0.0f, 0x1.bee73cp-75f,
     0x1.88f04p-6f, 0.0f, 0x1.cbf5a8p-66f, 0.0f, 0x1.78a026p-117f, 0x1.f20d84p-17f,
     0x1.2eedc8p-115f, 0x1.aeff4cp-121f, 0x1.6cf36ap-99f, 0.0f, 0.0f, 0x1.c5853cp-80f,
     0.0f, 0.0f, 0x1.edba14p-25f, 0x1.78ac5p-6f, 0.0f, 0.0f, 0x1.9c9f78p-113f,
     0x1.417dap-116f, 0.0f, 0x1.e7c068p-55f, 0x1.d451p-99f, 0.0f, 0.0f,
     0x1.ddff48p-65f, 0x1.314558p-107f, 0x1.4e023ap-6f, 0.0f, 0x1.60bac6p-56f, 0.0f,
     0.0f, 0x1.ba313cp-18f, 0.0f, 0x1.dce1cep-72f, 0x1.b3d03ap-18f, 0x1.ff9792p-8f,
     0.0f, 0.0f, 0x1.4fa9cp-48f, 0x1.25a0bep-49f, 0x1.2151aep-73f, 0x1.47407ap-3f,
     0x1.de6f3p-54f, 0x1.642494p-33f, 0x1.65235cp-24f, 0.0f, 0x1.6d06b2p-3f,
     0x1.4be95cp-121f, 0.0f, 0x1.391204p-81f, 0.0f, 0x1.552f94p-12f, 0x1.8ded58p-41f,
     0x1.7675fcp-101f, 0.0f, 0.0f, 0.0f, 0x1.6a66c2p-100f, 0.0f, 0x1.83be32p-70f,
     0.0f, 0.0f, 0x1.43dcbap-49f, 0x1.383d5cp-75f, 0x1.eac8c6p-25f, 0x1.a98c8ap-42f,
     0x1.00b65ap-123f, 0.0f, 0x1.ff3e1ap-68f, 0.0f, 0.0f, 0x1.ba2064p-80f, 0.0f,
     0x1.e60ffcp-113f, 0x1.99172p-112f, 0x1.357386p-112f, 0x1.b8b776p-6f, 0.0f, 0.0f,
     0x1.d62d68p-100f, 0x1.0fa8a2p-113f, 0x1.a1b4d4p-113f, 0x1.4b97b8p-120f, 0.0f,
     0.0f, 0x1.ed1796p-71f, 0x1.96ab44p-82f, 0x1.386a3ep-9f, 0.0f, 0.0f, 0.0f,
     0x1.16db2p-22f, 0.0f, 0x1.f548fp-74f, 0x1.c8411cp-119f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7a959ep-5f, 0.0f, 0.0f, 0.0f, 0x1.097b6cp-58f, 0x1.c50806p-75f, 0.0f,
     0x1.22e36ep-36f, 0.0f, 0x1.9c0a9ap-69f, 0x1.39b0ccp-3f, 0x1.aebf9p-55f, 0.0f,
     0.0f, 0x1.bb0c8ep-39f, 0x1.0e4a16p-86f, 0x1.aab1e4p-107f, 0.0f, 0.0f, 0.0f,
     0x1.b837acp-25f, 0x1.d0b116p-47f, 0x1.0f532p-69f, 0x1.7231c4p-50f, 0.0f,
     0x1.7c426ep-21f, 0x1.92986ep-66f, 0.0f, 0.0f, 0x1.108d92p-36f, 0x1.552c3p-50f,
     0.0f, 0x1.92cea2p-81f, 0x1.48313p-36f, 0x1.e612p-3f, 0x1.ded978p-18f,
     0x1.5d4cccp-122f, 0.0f, 0x1.18741ap-80f, 0.0f, 0.0f, 0.0f, 0x1.8c414p-10f, 0.0f,
     0.0f, 0x1.40ca58p-53f, 0.0f, 0x1.c6a4dep-37f, 0x1.3e4d04p-26f, 0.0f,
     0x1.ea74bp-90f, 0x1.50f6p-9f, 0x1.f82e32p-80f, 0x1.7b65d6p-43f, 0x1.0fc136p-65f,
     0.0f, 0.0f, 0x1.2dcd7ep-67f, 0.0f, 0x1.14607cp-111f, 0x1.bfd68cp-74f,
     0x1.0b88ep-118f, 0x1.24d81p-63f, 0x1.b260ecp-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f2527ap-33f, 0.0f, 0.0f, 0.0f, 0x1.7c7ceap-2f, 0x1.3caa5ep-80f,
     0x1.1fe756p-96f, 0.0f, 0.0f, 0x1.2f4d4ap-6f, 0x1.aacb84p-50f, 0.0f, 0.0f,
     0x1.2f2372p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.109396p-43f, 0.0f,
     0.0f, 0.0f, 0x1.e9a28cp-34f, 0.0f, 0.0f, 0x1.383b24p-23f, 0.0f, 0x1.a57b8ep-67f,
     0x1.b6de6ep-92f, 0.0f, 0x1p0f, 0x1.6b4246p-118f, 0x1.6b0db4p-56f,
     0x1.1740bcp-16f, 0x1.85f56cp-41f, 0x1.0bfdeap-22f, 0.0f, 0x1.963102p-51f, 0.0f,
     0.0f
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
            tmp1 = Sleef_finz_tanhf4_u35kvx(tmp0);
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
    printf("Sleef_finz_tanhf4_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_tanhf4_u35kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
