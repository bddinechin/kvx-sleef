/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_frfrexpf4_kvx.c --function Sleef_frfrexpf4_kvx \
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
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.02d706p-110f, 0x1.2c9ceep-83f, 0x1.4eb286p-24f,
     0.0f, 0.0f, 0x1.93956ap-57f, 0.0f, 0.0f, 0x1.a29134p-112f, 0x1.40265ep-10f,
     0x1.f4d3f2p-83f, 0.0f, 0x1.929ff4p-60f, 0.0f, 0.0f, 0x1.5f4142p-5f, 0.0f, 0.0f,
     0x1.d72ae6p-66f, 0x1.701734p-52f, 0x1.4bf3f6p-13f, 0.0f, 0x1.24dabep-44f, 0.0f,
     0x1.b2212ep-19f, 0x1.073d44p-36f, 0x1.45afc8p-31f, 0x1.a81a46p-40f,
     0x1.508504p-93f, 0x1.b505acp-97f, 0x1.d394aap-116f, 0x1.55f8c4p-121f,
     0x1.e68248p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.49ea78p-77f, 0x1.bd6e74p-93f, 0.0f,
     0.0f, 0.0f, 0x1.6e43d4p-103f, 0.0f, 0x1.1eed26p-7f, 0.0f, 0.0f, 0x1.a0ee06p-64f,
     0x1.9a2454p-3f, 0.0f, 0.0f, 0x1.565e1cp-45f, 0.0f, 0.0f, 0x1.fd76c4p-43f,
     0x1.20f2b8p-124f, 0.0f, 0x1.b268a6p-108f, 0.0f, 0x1.7090fap-93f, 0.0f,
     0x1.df12fp-110f, 0.0f, 0.0f, 0x1.5c554p-33f, 0x1.3ee22p-19f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.fa562ep-37f, 0x1.cf0f2cp-15f, 0x1.f2765cp-120f, 0.0f,
     0x1.aecc4p-5f, 0x1.42aa54p-121f, 0x1.4c6dcp-65f, 0x1.bf1aa8p-114f,
     0x1.fa33eap-82f, 0.0f, 0.0f, 0.0f, 0x1.9651bcp-93f, 0x1.8e045p-65f,
     0x1.66913ap-40f, 0.0f, 0.0f, 0.0f, 0x1.8d0e14p-6f, 0x1.b202f4p-26f,
     0x1.af0b72p-55f, 0.0f, 0.0f, 0x1.c76302p-6f, 0.0f, 0x1.6046b2p-117f,
     0x1.60fab8p-57f, 0.0f, 0x1.b14e08p-35f, 0.0f, 0x1.bda4b8p-110f, 0.0f, 0.0f,
     0x1.e1216ep-79f, 0.0f, 0x1.8eae6ap-33f, 0x1.dffa9ap-101f, 0x1.da3c2ep-115f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a8e236p-74f, 0.0f, 0x1.df0762p-4f, 0x1.429e76p-22f,
     0x1.da94fp-125f, 0x1.05a658p-100f, 0x1.d19ac2p-81f, 0x1.f3d85ep-64f,
     0x1.e20806p-64f, 0x1.fb52cap-54f, 0x1.9af4acp-115f, 0x1.c3d3cp-121f, 0.0f,
     0x1.572f68p-43f, 0.0f, 0.0f, 0.0f, 0x1.6ca904p-45f, 0.0f, 0x1.bb47fap-112f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1c9368p-60f, 0x1.260956p-62f,
     0x1.50f76cp-29f, 0.0f, 0x1p0f, 0x1.e3d26ap-5f, 0.0f, 0x1.b7fb2cp-105f,
     0x1.7b3b5cp-48f, 0.0f, 0.0f, 0x1.8fdb86p-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2b206p-45f, 0.0f, 0x1.64d1f4p-90f, 0.0f, 0.0f, 0.0f, 0x1.4fe0cap-50f,
     0x1.914cccp-124f, 0.0f, 0.0f, 0x1.2c6f1p-95f, 0.0f, 0x1.bd21c4p-40f,
     0x1.8c66cp-95f, 0.0f, 0x1.91860ep-70f, 0x1.b3a94ap-94f, 0x1.ae15fep-56f, 0.0f,
     0x1.7fa6fap-64f, 0x1.f32d22p-61f, 0x1.a16d7ep-24f, 0x1.35943ep-62f, 0.0f,
     0x1.c5ca4p-115f, 0.0f, 0.0f, 0x1.4364bap-27f, 0x1.d3c48ep-45f, 0x1.81216ep-37f,
     0x1.270824p-115f, 0x1.b3ef14p-86f, 0x1.26861cp-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b04aap-12f, 0x1.1264e6p-40f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.35285cp-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e135d4p-92f, 0.0f, 0.0f,
     0x1.2ac66ap-43f, 0x1.47f77cp-17f, 0.0f, 0x1.7f8b9p-95f, 0x1.830b06p-19f,
     0x1.9bc3dcp-112f, 0x1.7d854cp-125f, 0.0f, 0x1.90701ap-78f, 0x1.839084p-122f,
     0x1.cff3ep-118f, 0.0f, 0.0f, 0.0f, 0x1.e05b44p-97f, 0.0f, 0x1.9f5c18p-120f, 0.0f,
     0x1.297dc4p-101f, 0.0f, 0.0f, 0.0f, 0x1.b35a58p-7f, 0x1.805654p-29f, 0.0f, 0.0f,
     0x1.f5dd1p-59f, 0.0f, 0x1.1bbe76p-93f, 0.0f, 0.0f, 0.0f, 0x1.5aec9p-10f,
     0x1.511194p-34f, 0x1.ad2e16p-28f, 0.0f, 0.0f, 0.0f, 0x1.3914ccp-42f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.8997bap-2f, 0x1.9556ap-97f, 0.0f, 0.0f, 0.0f, 0x1.379beap-72f,
     0.0f, 0x1.565eeap-36f, 0x1.b6d406p-15f, 0x1p0f, 0.0f, 0x1.e4cfdap-119f,
     0x1.7c8fb2p-33f, 0x1.7837c6p-72f, 0.0f, 0x1.ab285ep-45f, 0.0f, 0x1.3faeccp-81f,
     0.0f, 0.0f, 0x1.52ee94p-95f, 0.0f, 0x1.bb45a8p-122f, 0x1.8bc652p-108f,
     0x1.abfcaap-111f, 0x1.15d9ecp-36f, 0.0f, 0.0f, 0.0f, 0x1.30863ap-14f,
     0x1.4f077cp-70f, 0x1.8b8982p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1d396cp-124f, 0x1.7a36ap-51f, 0.0f, 0x1.3d1556p-52f, 0x1.91e99cp-38f, 0.0f,
     0.0f, 0.0f, 0x1.31dac6p-120f, 0.0f, 0x1.14781ep-111f, 0x1.c13736p-42f, 0.0f,
     0x1.545898p-17f, 0.0f, 0x1.76bcf8p-45f, 0.0f, 0x1.c7e4a6p-115f, 0x1.923d9p-107f,
     0.0f, 0x1.05168p-79f, 0.0f, 0x1.6da6fep-61f, 0x1.a61b98p-8f, 0x1.00188ep-88f,
     0x1.4cf6b8p-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d5ce9p-22f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c4aa36p-73f, 0.0f, 0x1.5260cep-95f, 0x1.27c468p-32f,
     0x1.f810bap-57f, 0x1.0d2eaap-43f, 0x1.00eccep-26f, 0x1.bc3bcap-117f,
     0x1.c09c8cp-9f, 0x1.c1fb3cp-116f, 0.0f, 0x1.a34b78p-100f, 0x1.562d7cp-102f,
     0x1.4c7b5ap-23f, 0.0f, 0x1.860d84p-43f, 0x1.396e4ep-46f, 0.0f, 0.0f, 0.0f,
     0x1.4b61c8p-90f, 0.0f, 0x1.1ee57ep-46f, 0.0f, 0x1.7be4b2p-106f, 0.0f,
     0x1.0e9c28p-14f, 0x1p0f, 0x1.d112dep-73f, 0.0f, 0x1.a24394p-56f, 0.0f,
     0x1.3d837ap-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d440e6p-5f, 0x1.97ede4p-8f, 0.0f,
     0x1.760f9p-45f, 0.0f, 0.0f, 0x1.cd5f78p-90f, 0x1.7bdad6p-5f, 0.0f,
     0x1.6bdb92p-76f, 0x1.d7c32ep-47f, 0x1.acd8f4p-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.454b44p-28f, 0.0f, 0.0f, 0x1.88166cp-35f, 0x1.564c76p-114f, 0x1.bc0a4ep-82f,
     0.0f, 0.0f, 0x1.3101cap-51f, 0x1.f0d0b6p-37f, 0.0f, 0x1.65db94p-3f, 0.0f,
     0x1.a8778ep-122f, 0x1.7e153p-21f, 0x1.b21e4ep-6f, 0.0f, 0x1.826044p-15f, 0.0f,
     0x1.36b0cap-104f, 0x1.3c9416p-36f, 0x1.d7ba26p-25f, 0x1.48336ep-10f, 0.0f,
     0x1.2e12e6p-25f, 0x1.810c18p-50f, 0x1.d28ab2p-103f, 0.0f, 0x1.10beep-19f,
     0x1.d96b02p-34f, 0x1.ff239ep-32f, 0x1.5d8516p-98f, 0.0f, 0.0f, 0.0f,
     0x1.e51604p-37f, 0x1.ff4efep-42f, 0x1.7253e4p-23f, 0x1.6ffc5cp-9f,
     0x1.2b8822p-73f, 0x1.4b16dp-104f, 0.0f, 0x1.2c00eep-126f, 0x1.57cdaap-13f, 0.0f,
     0.0f, 0.0f, 0x1.57ffa6p-84f, 0x1.bc9e58p-118f, 0x1.990176p-45f, 0x1.d7c1ccp-4f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.165d9ap-117f, 0x1.25d116p-2f, 0.0f, 0.0f,
     0x1.dc5fe2p-83f, 0.0f, 0x1.9d9208p-103f, 0x1.5313ap-63f, 0x1.34a172p-47f,
     0x1.eb60b4p-119f, 0.0f, 0.0f, 0x1.cbc2a6p-94f, 0x1.3ed738p-59f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.3e89cap-18f, 0x1.33c4a4p-45f, 0.0f, 0.0f, 0.0f, 0x1.72a962p-52f,
     0.0f, 0x1.eaf312p-90f, 0.0f, 0x1.faaeb8p-98f, 0.0f, 0x1.bd645ap-76f,
     0x1.81ca86p-124f, 0x1.808ep-56f, 0x1.8d0af6p-79f, 0.0f, 0x1.751cdcp-39f, 0.0f,
     0.0f, 0x1.5d0662p-120f, 0x1.2d781ap-2f, 0.0f, 0.0f, 0.0f, 0x1.87ffbp-97f, 0.0f,
     0.0f, 0x1.ae54fp-37f, 0.0f, 0.0f, 0.0f, 0x1.c1ee4cp-93f, 0.0f, 0.0f,
     0x1.6af69cp-117f, 0.0f, 0x1.179cc4p-85f, 0x1.7f001ap-67f, 0.0f, 0x1.e9671p-37f,
     0x1.f55ffp-64f, 0x1.f1a494p-96f, 0x1.ce8858p-86f, 0x1.700ce6p-122f,
     0x1.76befap-9f, 0.0f, 0x1.f470bap-85f, 0.0f, 0x1.e7f8cp-78f, 0x1.36a922p-19f,
     0.0f, 0.0f, 0x1.e8c54ap-87f, 0x1.d81652p-49f, 0x1.f0eb3ep-15f, 0.0f,
     0x1.4967d4p-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.84688p-48f, 0.0f, 0.0f,
     0x1.fea1f8p-125f, 0x1.1a7048p-58f, 0x1.2f08c4p-25f, 0.0f, 0.0f, 0.0f,
     0x1.3d2c2ep-122f, 0.0f, 0x1.0065eep-93f, 0x1.2f8cc6p-117f, 0x1.0cd9e4p-12f, 0.0f,
     0.0f, 0x1.9d7792p-43f, 0.0f, 0.0f, 0x1.788654p-106f, 0.0f, 0x1.3a2d3ap-2f,
     0x1.dd545ap-18f, 0.0f, 0.0f, 0x1.0cf47ap-2f, 0x1.106b46p-27f, 0.0f,
     0x1.7de21ap-90f, 0.0f, 0.0f, 0x1.45b4acp-83f, 0x1.ecc49ep-56f, 0x1.299808p-88f,
     0.0f, 0x1.d9ada2p-27f, 0x1.aa342ap-99f, 0.0f, 0x1.98f92p-123f, 0.0f, 0.0f,
     0x1.24d6fep-17f, 0x1.f7ddccp-73f, 0x1.d7722cp-102f, 0x1.c4cb8p-2f, 0.0f,
     0x1.c00166p-39f, 0x1.753926p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d5b3b2p-58f, 0x1.5a4d64p-126f, 0x1.3e1032p-41f, 0x1.b33c62p-8f,
     0x1.a6c018p-25f, 0.0f, 0.0f, 0x1.1b1442p-11f, 0x1.6df13p-1f, 0x1.3ade0ep-84f,
     0x1.a66f6p-20f, 0.0f, 0x1.e251f2p-29f, 0.0f, 0.0f, 0x1.222306p-52f,
     0x1.8fead6p-95f, 0x1.e40cb6p-89f, 0x1.05902ap-70f, 0x1.c1a868p-5f, 0.0f,
     0x1.21e74ep-95f, 0x1.b3c8dap-3f, 0x1.3e16ecp-50f, 0x1.48238cp-55f, 0.0f,
     0x1.a5138ap-1f, 0x1.001e2cp-112f, 0.0f, 0x1.f178d6p-75f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.046512p-63f, 0x1.5f4d6p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.812fb2p-48f,
     0x1.d2f02ep-16f, 0x1.d1af0cp-35f, 0.0f, 0x1.dc3be8p-50f, 0x1.3fb4c4p-37f,
     0x1.6c057ap-88f, 0x1.eb13bcp-4f, 0x1.3407ap-1f, 0x1.364b66p-68f, 0.0f, 0.0f,
     0.0f, 0x1.6fd1dcp-84f, 0x1.d84ebp-38f, 0x1.70823ep-86f, 0.0f, 0x1.620096p-6f,
     0.0f, 0x1.2d7bdep-33f, 0x1.5a6b3ap-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.16a3aep-10f,
     0x1.f37236p-72f, 0x1.a9d9f6p-11f, 0.0f, 0.0f, 0x1.32b0d8p-88f, 0.0f,
     0x1.96a666p-27f, 0x1.96da24p-87f, 0.0f, 0x1.26998ep-75f, 0.0f, 0x1.c88a24p-46f,
     0x1.41e956p-2f, 0x1.9de324p-24f, 0x1.b5e9d4p-43f, 0.0f, 0x1.0bb534p-109f, 0.0f,
     0.0f, 0x1.4d7c82p-92f, 0x1.a87f3ap-104f, 0.0f, 0x1.fe1154p-91f, 0x1.398396p-77f,
     0x1.44baecp-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a9e7ecp-36f, 0x1.c3d356p-29f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.8cedc4p-57f, 0x1.f40544p-108f, 0x1.69fadap-68f, 0.0f,
     0x1.509d02p-9f, 0x1.2c9cb2p-8f, 0.0f, 0.0f, 0x1.e879d8p-89f, 0.0f,
     0x1.de556ep-26f, 0x1.4284fap-90f, 0.0f, 0x1.c25d72p-125f, 0.0f, 0.0f, 0.0f,
     0x1.b9822p-8f, 0x1.2396aep-21f, 0x1.7e0358p-82f, 0x1.a55666p-102f,
     0x1.d2b79cp-18f, 0x1.782e7cp-3f, 0.0f, 0.0f, 0.0f, 0x1.3408fep-3f,
     0x1.e12d28p-39f, 0x1.293e3ap-41f, 0x1.75d776p-43f, 0x1.13902ep-84f,
     0x1.709cf4p-62f, 0.0f, 0.0f, 0x1.38862p-49f, 0.0f, 0.0f, 0.0f, 0x1.25feb2p-10f,
     0x1.4d6afep-36f, 0.0f, 0.0f, 0x1.c357aep-12f, 0.0f, 0.0f, 0.0f, 0x1.82483ep-47f,
     0.0f, 0.0f, 0x1.9ae674p-34f, 0x1.11a95ep-88f, 0.0f, 0x1.aa3afap-7f,
     0x1.8d3d18p-71f, 0.0f, 0.0f, 0x1.cd83bap-93f, 0x1.a6261ep-67f, 0x1.872f9cp-4f,
     0.0f, 0x1.46a22cp-114f, 0.0f, 0.0f, 0.0f, 0x1.eef644p-49f, 0x1.980e34p-54f,
     0x1.bab50ap-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4f6b56p-84f, 0x1.600068p-79f,
     0x1.d5fe7p-90f, 0.0f, 0.0f, 0x1.ca5dcap-92f, 0.0f, 0.0f, 0x1.a4094ap-26f, 0.0f,
     0x1.9b48ccp-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0e616cp-61f, 0x1.7e5908p-115f,
     0x1.bea728p-58f, 0x1.6bf07cp-14f, 0.0f, 0x1.738778p-30f, 0.0f, 0x1.a23594p-107f,
     0x1.117c7cp-34f, 0.0f, 0x1.971e2cp-68f, 0x1.bc91c2p-45f, 0x1.07f2d4p-113f,
     0x1.0cd0d2p-123f, 0.0f, 0x1.3c139cp-119f, 0.0f, 0.0f, 0x1.1389eap-2f,
     0x1.6536c6p-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f49702p-100f, 0x1.cbbddcp-52f, 0.0f,
     0x1.54eb98p-13f, 0x1.d57c72p-89f, 0.0f, 0x1.89331ep-30f, 0.0f, 0.0f,
     0x1.ca4c06p-76f, 0.0f, 0.0f, 0.0f, 0x1.a93eb4p-21f, 0x1.b59612p-110f,
     0x1.cbbc6ap-31f, 0.0f, 0.0f, 0.0f, 0x1.ecf9f8p-96f, 0x1.b95efap-116f, 0.0f,
     0x1.f31772p-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cc69eap-14f, 0x1.7f1d02p-74f,
     0x1.13e6a2p-40f, 0x1.197b6ep-87f, 0.0f, 0x1.e829f2p-54f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.864e08p-119f, 0.0f, 0.0f, 0x1.11a3aep-76f, 0.0f, 0x1.03d3a8p-96f,
     0x1.245d6ep-123f, 0x1.99a9e8p-114f, 0x1.3b6b34p-55f, 0x1.cc2914p-54f, 0.0f, 0.0f,
     0x1.092f8p-12f, 0x1.ebc674p-123f, 0.0f, 0x1.5c534ep-40f, 0x1.1063e6p-119f, 0.0f,
     0.0f, 0.0f, 0x1.5ca1fap-13f, 0x1.938c88p-17f, 0.0f, 0x1.5d81e6p-20f,
     0x1.106c7ep-100f, 0.0f, 0x1.92d498p-100f, 0.0f, 0x1.bc8088p-118f,
     0x1.da8f06p-45f, 0.0f, 0x1.3915f6p-65f, 0x1.45d75p-60f, 0x1.2c50d6p-6f,
     0x1.eda982p-94f, 0x1.098b3p-95f, 0.0f, 0x1.454db8p-52f, 0.0f, 0x1.368a7p-27f,
     0.0f, 0x1.ec70c6p-11f, 0x1.e42f48p-69f, 0x1.645032p-13f, 0x1.1d0806p-76f, 0.0f,
     0.0f, 0.0f, 0x1.ff3decp-124f, 0.0f, 0.0f, 0x1.d0f2cp-126f, 0x1.d68e8ep-110f,
     0x1.3cf1c2p-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.61d8ccp-53f,
     0x1.207aeap-12f, 0x1.0643bap-51f, 0x1.6b7718p-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.72bcbep-57f, 0x1.f5bd26p-24f, 0x1.6bb8cap-117f, 0.0f, 0x1.a10bf4p-70f, 0.0f,
     0.0f, 0.0f, 0x1.86427ep-49f, 0x1.b498fap-56f, 0.0f, 0.0f, 0x1.fc38p-72f, 0.0f,
     0.0f, 0x1.60d13cp-105f, 0x1.74df08p-96f, 0.0f, 0x1.2823a2p-86f, 0x1.b1f544p-78f,
     0x1.920b96p-123f, 0.0f, 0.0f, 0x1.24e8bp-96f, 0x1.66b408p-67f, 0.0f, 0.0f, 0.0f,
     0x1.4a6d34p-82f, 0.0f, 0x1.574b02p-96f, 0x1.cfd528p-77f, 0x1.07182cp-17f, 0.0f,
     0.0f, 0.0f, 0x1.dd5f68p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.00c24p-50f,
     0x1.5a94cep-81f, 0x1.22cb3ap-96f, 0.0f, 0.0f, 0x1.260c2cp-111f, 0x1.415748p-3f,
     0x1.3718e4p-83f, 0.0f, 0.0f, 0.0f, 0x1.e7eb02p-85f, 0x1.5baca8p-7f, 0.0f, 0.0f,
     0x1.f09942p-96f, 0.0f, 0x1.74a986p-113f, 0x1.8b159cp-38f, 0.0f, 0x1.ff16eep-78f,
     0x1.21df54p-91f, 0x1.1c5792p-35f, 0.0f, 0.0f, 0x1.ddbe62p-48f, 0x1.5bad2ep-118f,
     0.0f, 0x1.c1348ep-84f, 0.0f, 0x1.b8dd46p-16f, 0x1.93430ep-120f, 0x1.e66862p-67f,
     0x1.49f4c8p-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.25aac8p-31f, 0x1.7be9bep-3f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.042a88p-15f, 0.0f, 0.0f, 0.0f, 0x1.d4d5acp-78f,
     0x1.79c802p-118f, 0x1.c6dc2p-9f, 0.0f, 0x1.603c3ep-64f, 0.0f, 0x1.6c5cfap-61f,
     0.0f, 0x1.38c716p-26f, 0x1.ea6ac8p-46f, 0x1.83d8e8p-89f, 0.0f, 0x1.0fe6c6p-92f
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
            tmp1 = Sleef_frfrexpf4_kvx(tmp0);
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
    printf("Sleef_frfrexpf4_kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_frfrexpf4_kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
