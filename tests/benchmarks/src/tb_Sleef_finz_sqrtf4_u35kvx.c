/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sqrtf4_u35kvx.c --function \
 *     Sleef_finz_sqrtf4_u35kvx --headers sleef.h,ml_support_lib.h \
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
     0x1.833e54p-23f, 0x1.59504cp-53f, 0x1.dfd92ep-48f, 0.0f, 0x1.6390c4p-108f,
     0x1.4a851ap-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cd214cp-74f, 0x1.2f79ccp-86f, 0.0f,
     0.0f, 0x1.a19de4p-27f, 0.0f, 0x1.66b128p-110f, 0x1.78691cp-117f, 0.0f,
     0x1.9dcefcp-17f, 0.0f, 0.0f, 0.0f, 0x1.4aeb38p-62f, 0x1.a520a6p-27f, 0.0f,
     0x1.272a5ap-4f, 0x1.6800ap-53f, 0x1.24b71ap-119f, 0x1.665f34p-78f, 0.0f,
     0x1.0c338ep-44f, 0x1.c4b20ep-88f, 0x1.eb3adp-92f, 0x1.29f552p-26f,
     0x1.a6435ap-5f, 0.0f, 0.0f, 0x1.2c0facp-16f, 0x1.3a676cp-76f, 0x1.010832p-50f,
     0x1.39c3bp-68f, 0.0f, 0x1.8e4644p-92f, 0.0f, 0x1.b177p-23f, 0x1.906f46p-9f, 0.0f,
     0x1.044f38p-31f, 0x1.f90dfap-45f, 0x1.6369fap-8f, 0x1.d21fbp-55f, 0.0f,
     0x1.418228p-91f, 0.0f, 0x1.970f3cp-106f, 0.0f, 0x1.f67bep-52f, 0x1.6f24f8p-37f,
     0.0f, 0x1.67102cp-20f, 0x1.207ac6p-67f, 0.0f, 0x1.bdf9bep-87f, 0.0f, 0.0f,
     0x1.57720cp-93f, 0x1.fda4c6p-97f, 0.0f, 0.0f, 0.0f, 0x1.ec4576p-41f, 0.0f, 0.0f,
     0.0f, 0x1.3e27p-92f, 0x1.222afp-98f, 0x1.5f57c6p-59f, 0x1.f04e6ep-30f, 0.0f,
     0x1.9fd89ap-48f, 0x1.ff0242p-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3447c2p-78f,
     0x1.ac2122p-65f, 0.0f, 0x1.0f84a6p-95f, 0x1.40babcp-12f, 0.0f, 0x1.c41becp-19f,
     0.0f, 0x1.c1be8cp-88f, 0.0f, 0x1.f84dacp-31f, 0.0f, 0x1.8de5f8p-12f,
     0x1.5f2d3ap-113f, 0.0f, 0x1.f5eb98p-26f, 0.0f, 0x1.ed72bcp-36f, 0x1.ab7c72p-107f,
     0x1.584a3cp-45f, 0x1.c487d8p-2f, 0x1.6d471cp-67f, 0x1.c68994p-95f,
     0x1.4fcd0ap-67f, 0x1.51d8d6p-42f, 0x1.129da2p-2f, 0.0f, 0x1.4f3364p-47f,
     0x1.74a11cp-69f, 0.0f, 0.0f, 0x1.3b578p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d3fabp-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1986dep-25f, 0x1.20ac7cp-125f,
     0.0f, 0x1.3ab74ap-69f, 0x1.2e1766p-69f, 0.0f, 0.0f, 0x1.e480d2p-57f, 0.0f,
     0x1.c02d66p-85f, 0.0f, 0x1.b1353cp-60f, 0.0f, 0.0f, 0.0f, 0x1.3a99cap-126f, 0.0f,
     0x1.da5bcap-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a5492ap-10f, 0x1.58988cp-121f, 0.0f, 0x1.fde544p-21f, 0.0f, 0x1.097deep-99f,
     0.0f, 0x1.0648fp-15f, 0x1.b5f6eap-12f, 0.0f, 0x1.dcce2p-30f, 0x1.7f0aa6p-23f,
     0x1.9eb10cp-5f, 0.0f, 0x1.e97572p-60f, 0x1.5f582ap-48f, 0.0f, 0x1.f35922p-50f,
     0.0f, 0.0f, 0x1.82cdaap-15f, 0x1.337e5p-29f, 0.0f, 0.0f, 0x1.1f4cb4p-80f,
     0x1.97cc8cp-22f, 0.0f, 0x1.a225e8p-7f, 0.0f, 0.0f, 0x1.532108p-86f, 0.0f,
     0x1.321c2p-22f, 0x1.83dcd2p-77f, 0.0f, 0x1.1c24f8p-40f, 0x1.4a1ec2p-100f,
     0x1.6feeecp-47f, 0x1.2f5024p-87f, 0x1.ecbc96p-65f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.444b94p-62f, 0.0f, 0.0f, 0.0f, 0x1.530b38p-51f, 0x1.232dc2p-67f,
     0x1.08af18p-126f, 0.0f, 0.0f, 0x1.098e0ep-1f, 0.0f, 0.0f, 0x1.8c1b5p-89f, 0.0f,
     0x1.1466cep-67f, 0.0f, 0x1.1107bap-105f, 0x1.74ad2cp-47f, 0.0f, 0x1.0822f2p-14f,
     0x1.471aa4p-48f, 0.0f, 0x1.0b9ebep-125f, 0x1.1b479ep-102f, 0.0f, 0.0f, 0.0f,
     0x1.40a772p-53f, 0x1.a5eefcp-2f, 0x1.ea2faep-23f, 0.0f, 0.0f, 0x1.487fdap-72f,
     0x1.cf48a6p-112f, 0.0f, 0.0f, 0x1.922ca2p-7f, 0.0f, 0.0f, 0.0f, 0x1.c1373p-61f,
     0x1.2eb2c2p-103f, 0.0f, 0x1.0f4f26p-88f, 0x1.a7c406p-1f, 0.0f, 0x1.f8883p-93f,
     0x1.62453cp-117f, 0.0f, 0x1.fc7f6ap-1f, 0.0f, 0.0f, 0x1.edaf8cp-9f, 0.0f, 0.0f,
     0x1.62bf44p-36f, 0x1.b5febep-43f, 0.0f, 0x1.ffd0b4p-53f, 0.0f, 0x1.21374p-90f,
     0x1.6f1dap-75f, 0x1.13fc6p-84f, 0x1.3e0366p-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b54e86p-126f, 0.0f, 0.0f, 0x1.851b62p-69f, 0x1.fddcfcp-57f, 0.0f,
     0x1.28cbc4p-24f, 0x1.2cac1ap-86f, 0.0f, 0x1.95f514p-108f, 0x1.0b09f8p-114f, 0.0f,
     0x1.a09ebep-70f, 0.0f, 0.0f, 0.0f, 0x1.aefd74p-51f, 0.0f, 0x1.c0c972p-54f,
     0x1.6097dcp-74f, 0x1.aec314p-27f, 0.0f, 0x1.63dd3p-46f, 0x1.2efa18p-27f,
     0x1.6bacf8p-42f, 0.0f, 0x1.a78814p-52f, 0.0f, 0x1.0e502ap-4f, 0x1.393dfp-14f,
     0x1.1a174p-27f, 0x1.60b3fcp-22f, 0.0f, 0.0f, 0x1.a6aa8ep-66f, 0.0f, 0.0f,
     0x1.6842b8p-111f, 0x1.ab6844p-53f, 0x1.656688p-91f, 0x1.a774fep-31f, 0.0f,
     0x1.102a22p-55f, 0.0f, 0x1.92ab22p-26f, 0.0f, 0x1.55a85ap-122f, 0.0f, 0.0f,
     0x1.0874cap-52f, 0x1.9b25bap-18f, 0x1.e0a89p-17f, 0.0f, 0x1.fc6384p-50f, 0.0f,
     0.0f, 0x1.b97aa6p-18f, 0x1.2ff3c4p-70f, 0.0f, 0x1.707b5ap-102f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.701312p-31f, 0x1.9613b6p-12f, 0x1.a6f454p-68f, 0x1.39ebfap-34f, 0.0f,
     0x1.c93428p-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.823b12p-85f, 0x1.9f4506p-40f,
     0x1.f935dcp-76f, 0x1.cd3a7ep-18f, 0.0f, 0.0f, 0.0f, 0x1.cf7d22p-13f, 0.0f,
     0x1.258b5ap-18f, 0x1.2e089cp-17f, 0.0f, 0.0f, 0x1.91caecp-84f, 0.0f, 0.0f, 0.0f,
     0x1.1af9eep-20f, 0.0f, 0.0f, 0x1.932c5ap-106f, 0.0f, 0x1.b84adep-103f, 0.0f,
     0x1.e820e4p-71f, 0x1.a4520ep-24f, 0.0f, 0.0f, 0x1.6028c6p-20f, 0.0f,
     0x1.864682p-82f, 0x1.cb8a5ap-16f, 0x1.3611fp-7f, 0.0f, 0.0f, 0x1.d00bc4p-94f,
     0x1.70f718p-15f, 0x1.bea8c4p-51f, 0x1.9d27e2p-51f, 0x1.e7ceep-124f, 0.0f,
     0x1.f86b52p-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bad58ep-30f, 0.0f, 0.0f,
     0x1.009eb6p-58f, 0.0f, 0x1.1bbe4ep-35f, 0x1.f1457p-18f, 0x1.2d26bp-62f, 0.0f,
     0x1.bc6786p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6f43cep-24f, 0.0f,
     0x1.690326p-52f, 0.0f, 0x1.08285p-112f, 0.0f, 0x1.75519ap-43f, 0.0f,
     0x1.162c8ep-21f, 0x1.e8cf54p-48f, 0x1.43dfbap-99f, 0.0f, 0x1.580518p-113f,
     0x1p0f, 0x1.d8d688p-57f, 0.0f, 0.0f, 0.0f, 0x1.c903fap-65f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c62358p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.54323ep-95f, 0.0f,
     0x1.25b78p-119f, 0.0f, 0x1.0a6becp-98f, 0x1.9c81cep-98f, 0.0f, 0.0f, 0.0f,
     0x1.987186p-45f, 0.0f, 0x1.f9cad4p-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f2468ap-50f,
     0.0f, 0x1.455d0ap-102f, 0x1.9aef6p-112f, 0.0f, 0x1.acf3bep-40f, 0x1.7299d6p-115f,
     0x1.5b0ee6p-71f, 0x1.0dfb62p-126f, 0.0f, 0.0f, 0x1.7445e4p-78f, 0x1.f8e9b4p-72f,
     0x1.55dacp-5f, 0x1.68e9f2p-82f, 0x1.6cc0f8p-91f, 0.0f, 0.0f, 0x1.c9fecap-95f,
     0.0f, 0.0f, 0.0f, 0x1.904ab4p-14f, 0x1.21301cp-9f, 0.0f, 0x1.6c538p-3f,
     0x1.7c2a64p-74f, 0x1.28311cp-107f, 0x1.9ddc5ap-51f, 0x1.9fad3ep-5f,
     0x1.a3227p-90f, 0x1.93a282p-60f, 0.0f, 0.0f, 0x1.a67186p-4f, 0.0f,
     0x1.71293ap-5f, 0x1.73f97ep-69f, 0.0f, 0x1.53fdd8p-60f, 0.0f, 0x1.2509a2p-12f,
     0.0f, 0.0f, 0x1.5e8accp-29f, 0x1.8dfe0ap-100f, 0.0f, 0.0f, 0x1.409a28p-84f, 0.0f,
     0.0f, 0x1.805de6p-42f, 0x1.4c6dfap-71f, 0x1.c33b02p-109f, 0.0f, 0.0f,
     0x1.ba0168p-77f, 0x1.ba54c8p-30f, 0x1.d1b538p-65f, 0.0f, 0x1.0f457cp-103f, 0.0f,
     0.0f, 0x1.8451c4p-107f, 0x1.37e314p-5f, 0.0f, 0.0f, 0x1.e7c894p-30f,
     0x1.2d6d54p-123f, 0x1.be412ep-63f, 0.0f, 0x1.0b9132p-34f, 0.0f, 0x1.9018eap-8f,
     0.0f, 0x1.585dd8p-108f, 0x1.1d3698p-123f, 0x1.68da14p-30f, 0.0f, 0.0f,
     0x1.0f24dep-102f, 0.0f, 0.0f, 0x1.ce8046p-19f, 0.0f, 0.0f, 0x1.56e6a8p-117f,
     0x1.49ff1ep-26f, 0x1.f4ea3cp-52f, 0x1.2e30e6p-82f, 0x1.cfb294p-100f,
     0x1.17aaaep-16f, 0.0f, 0x1p0f, 0.0f, 0x1.6ce9cap-40f, 0x1.5c6848p-47f, 0.0f,
     0x1.adc868p-99f, 0.0f, 0x1.a018a6p-25f, 0x1.47f744p-4f, 0.0f, 0.0f,
     0x1.5a161p-38f, 0x1.20fcf4p-125f, 0x1.671ad8p-35f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9a1a44p-10f, 0x1.8b6b7p-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f06094p-61f,
     0x1.c45bd6p-1f, 0x1.7ec59cp-71f, 0.0f, 0.0f, 0.0f, 0x1.fc826ep-42f, 0.0f, 0.0f,
     0x1.c840e4p-59f, 0x1.c082e4p-36f, 0x1.2bee88p-89f, 0x1.0603acp-83f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.2ba592p-106f, 0x1.dc398ap-32f, 0x1.ceaa32p-62f, 0x1.1198a2p-84f,
     0.0f, 0.0f, 0x1.9bbd98p-67f, 0x1.a7f242p-107f, 0x1.33b5ep-45f, 0.0f,
     0x1.a8fac6p-44f, 0x1.178c56p-60f, 0.0f, 0x1.599748p-118f, 0x1.70999ep-65f,
     0x1.45872ap-13f, 0x1.0189c2p-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9fe09cp-25f,
     0x1.83fe0cp-92f, 0.0f, 0x1.7988e2p-62f, 0.0f, 0.0f, 0.0f, 0x1.af4614p-14f,
     0x1.43513cp-23f, 0.0f, 0x1.835dfp-80f, 0x1.fdf116p-108f, 0.0f, 0x1.4aeddap-97f,
     0.0f, 0x1.5ecb46p-71f, 0x1.88bb7cp-11f, 0.0f, 0x1.792502p-29f, 0x1.e6acb4p-50f,
     0x1.0d29bcp-90f, 0.0f, 0x1.614358p-95f, 0x1.9e2fe2p-72f, 0.0f, 0.0f, 0.0f,
     0x1.1bf99cp-24f, 0.0f, 0.0f, 0x1.66964ep-28f, 0x1.27b706p-7f, 0x1.6ff0b2p-41f,
     0x1.0baaacp-73f, 0.0f, 0.0f, 0x1.04e73ep-110f, 0.0f, 0.0f, 0.0f, 0x1.02f6d2p-73f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ce331ep-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.fbbc78p-36f, 0.0f, 0x1.ff979ep-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e2eedep-40f, 0.0f, 0.0f, 0.0f, 0x1.13c66ap-30f, 0.0f, 0.0f,
     0x1.c29434p-124f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.871c04p-119f, 0.0f, 0.0f,
     0.0f, 0x1.627c44p-42f, 0.0f, 0x1.096258p-96f, 0x1.0529ecp-84f, 0x1.c959e8p-14f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.fd81cp-86f, 0x1.6b1c98p-22f, 0.0f, 0x1.04a7c2p-119f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0040eap-79f, 0x1.bda854p-4f, 0x1.49bbcep-102f,
     0.0f, 0x1.887a2ap-108f, 0x1.a86c06p-36f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3314dap-108f, 0.0f, 0x1.cffb6p-30f, 0.0f, 0.0f, 0x1.c0f882p-9f, 0.0f,
     0x1.af8af4p-87f, 0.0f, 0x1.328eaep-41f, 0.0f, 0x1.ffc56ep-110f, 0x1.773558p-110f,
     0.0f, 0x1.4c7548p-72f, 0x1.c12ca4p-1f, 0.0f, 0.0f, 0x1.5b34e8p-120f, 0.0f, 0.0f,
     0x1.edf696p-88f, 0.0f, 0.0f, 0x1.3ffab4p-109f, 0x1.26e06cp-2f, 0.0f,
     0x1.c26ad2p-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bb16d6p-102f, 0x1.906c2p-49f,
     0x1.fad7p-50f, 0.0f, 0x1.2d9c6cp-53f, 0x1.7e9f88p-76f, 0x1.389778p-101f,
     0x1.44d35ap-55f, 0x1.76fa82p-24f, 0x1.851f0ep-112f, 0x1.c269a2p-57f, 0.0f,
     0x1.73f8f2p-81f, 0x1.5f2cb8p-114f, 0x1.b5a6ap-7f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.095e8cp-11f, 0x1.333158p-7f, 0x1.004d42p-110f, 0x1.2c3e32p-6f,
     0x1.712232p-125f, 0.0f, 0x1.5d36c2p-116f, 0x1.2bc32ap-116f, 0.0f, 0x1.0867bp-50f,
     0.0f, 0x1.7bac64p-98f, 0x1.74b436p-22f, 0.0f, 0x1.7a13fp-83f, 0x1.5b629cp-120f,
     0x1.4a1f4cp-52f, 0.0f, 0.0f, 0x1.0d8a04p-65f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.64bcc6p-99f, 0.0f, 0x1.ef1f16p-115f, 0x1.40828p-92f, 0x1.5a975ep-96f, 0.0f,
     0.0f, 0x1.ce0f82p-12f, 0.0f, 0x1.05ddep-118f, 0x1.b46c3ap-106f, 0.0f, 0.0f, 0.0f,
     0x1.6f3204p-122f, 0x1.bcc79ap-83f, 0x1.7d7b3ap-44f, 0.0f, 0.0f, 0x1.1c66e4p-27f,
     0.0f, 0x1.2d1c1p-110f, 0x1.394676p-4f, 0.0f, 0.0f, 0.0f, 0x1.2f969ap-105f,
     0x1.c01e76p-99f, 0x1.dd317p-25f, 0x1.5ad084p-39f, 0x1.f1ef64p-92f,
     0x1.15021cp-48f, 0.0f, 0.0f, 0x1.f6da4cp-54f, 0x1.dec82ap-84f, 0.0f, 0.0f,
     0x1.523c6ap-32f, 0x1.a5f8fp-99f, 0.0f, 0.0f, 0x1.5bbcecp-5f, 0x1.29a026p-37f,
     0.0f, 0x1.a5ad28p-85f, 0.0f, 0.0f, 0x1.68e632p-29f, 0x1.99d4dp-94f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.68b51p-123f, 0.0f, 0x1.0cfee2p-63f, 0x1.59c478p-10f,
     0x1.191ef8p-9f, 0x1.7a6d44p-92f, 0.0f, 0x1.2adedp-31f, 0.0f, 0.0f,
     0x1.76eac4p-51f, 0x1.1e6e76p-24f, 0x1.4aca36p-85f, 0x1.0f9e6cp-23f,
     0x1.231f9cp-45f, 0x1.62487ep-109f, 0x1.02879ep-126f, 0.0f, 0x1.090c82p-96f,
     0x1.6800fap-109f, 0x1.d5fba2p-126f, 0x1.7af49ap-33f, 0.0f, 0x1.cfc1fcp-107f,
     0x1.7e2238p-41f, 0.0f, 0x1.97776cp-62f, 0.0f, 0x1.5ddbc2p-68f, 0.0f,
     0x1.7ebbe8p-104f, 0.0f, 0x1.e2b08p-91f, 0x1.c43fp-85f, 0x1.5a8b62p-2f,
     0x1.d5ad2ep-4f, 0.0f, 0x1.b0917p-46f, 0.0f, 0x1.51aa6ep-99f, 0.0f,
     0x1.ade86ep-3f, 0.0f, 0.0f, 0x1.05179p-107f, 0.0f, 0.0f, 0x1.386c9cp-83f, 0.0f,
     0x1.135d4ap-29f, 0x1.1fb2d6p-6f, 0x1.abebe6p-80f, 0x1.38f3ep-97f, 0x1.4f768p-37f,
     0x1.fe4444p-90f, 0.0f, 0.0f, 0.0f, 0x1.54cfa6p-6f, 0x1.1e112cp-126f,
     0x1.9219a6p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.db1b88p-72f,
     0x1.86dffap-119f, 0.0f, 0.0f, 0x1.20fd1cp-56f, 0x1.cb7252p-93f, 0x1.81d8c6p-17f,
     0x1.2f1298p-61f, 0x1.dd946ep-59f, 0.0f, 0x1.2c8d42p-77f, 0x1.9d2fe2p-55f,
     0x1.527068p-124f, 0.0f, 0.0f, 0x1.5d6092p-62f, 0.0f, 0.0f, 0.0f, 0x1.bdb292p-54f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.14ab68p-55f,
     0.0f, 0x1.fce494p-18f, 0x1.647566p-20f, 0x1.3c2b18p-113f, 0x1.ac55dep-34f, 0.0f,
     0x1.79733ap-54f, 0x1.d2c43ep-32f, 0x1.c80dd4p-85f, 0.0f, 0x1.b978d4p-125f,
     0x1.a1a318p-34f, 0x1.f3e294p-1f, 0x1.627086p-108f, 0x1.6cc38ep-8f,
     0x1.57670ap-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.958142p-107f,
     0.0f, 0.0f, 0.0f, 0x1.02e582p-45f, 0x1.4fb6f2p-48f, 0x1.47889cp-50f, 0.0f,
     0x1.ee4c26p-43f, 0x1.de5b62p-19f, 0x1.c0978cp-115f, 0x1.3d9114p-101f, 0.0f,
     0x1.b2d686p-37f, 0.0f, 0x1.cd14e6p-35f, 0x1.f6311p-98f, 0.0f, 0.0f,
     0x1.4f68a2p-98f, 0x1p0f, 0x1.ffa9bep-64f, 0x1.76a8f8p-8f, 0.0f, 0.0f,
     0x1.c1301p-94f, 0.0f, 0.0f, 0x1.965f46p-54f, 0.0f, 0x1.179678p-51f, 0.0f, 0.0f,
     0x1.5c7f78p-25f, 0x1.89089p-111f, 0.0f, 0.0f
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
            tmp1 = Sleef_finz_sqrtf4_u35kvx(tmp0);
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
    printf("Sleef_finz_sqrtf4_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_sqrtf4_u35kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
