/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sqrtf8_u05kvx.c --function Sleef_sqrtf8_u05kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 8 --function-input-vector-size 8 --bench \
 *     --no-embedded-bin --target kv3
 *
 */
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float8_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float8_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1008];
static const float external_bench_wrapper_input_table_arg0[1008]  = {
     0.0f, 0x1.cc34bcp-7f, 0x1.25d46ep-21f, 0.0f, 0x1.0c8b64p-71f, 0.0f,
     0x1.af623cp-8f, 0.0f, 0x1.7a843cp-98f, 0.0f, 0x1.c99492p-75f, 0.0f,
     0x1.8be5f4p-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0a3b6ep-25f, 0.0f, 0.0f,
     0x1.6de9bp-46f, 0x1.a36e18p-77f, 0x1.46ab92p-93f, 0.0f, 0.0f, 0.0f,
     0x1.6387ep-85f, 0.0f, 0.0f, 0.0f, 0x1.5d4fcap-87f, 0x1.551f7ap-87f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.9ca06ap-60f, 0.0f, 0x1.f7c3bap-30f, 0x1.e86c24p-26f, 0.0f,
     0x1.3c15eap-124f, 0x1.bb58acp-84f, 0x1.1174b6p-32f, 0x1.01f4b6p-38f,
     0x1.267daep-93f, 0x1.cf7af4p-80f, 0.0f, 0x1.2e28c4p-56f, 0.0f, 0x1.0f2598p-47f,
     0.0f, 0x1.d13abep-124f, 0.0f, 0.0f, 0x1.20bbdp-75f, 0x1.0ed866p-70f,
     0x1.5d0308p-104f, 0.0f, 0x1.76df9ap-39f, 0x1.f6c9e6p-68f, 0.0f, 0x1.a5153ap-89f,
     0x1.9f4742p-28f, 0x1.80692p-54f, 0x1.1e9782p-121f, 0x1.5c1244p-64f, 0.0f, 0.0f,
     0x1.b17226p-41f, 0x1.98f644p-62f, 0x1.2bf34cp-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.153d76p-73f, 0x1.365e22p-102f, 0.0f, 0.0f, 0x1.259ec4p-44f, 0.0f, 0.0f, 0.0f,
     0x1.4598f2p-101f, 0x1.193e08p-38f, 0.0f, 0x1.797cbcp-111f, 0x1.6a208ep-30f, 0.0f,
     0x1.0343f2p-22f, 0x1.2f4ebap-76f, 0.0f, 0x1.8e45e4p-8f, 0x1.1f8dbap-122f,
     0x1.012ecp-34f, 0x1.bb6f74p-49f, 0.0f, 0x1.ecb048p-118f, 0x1.10c316p-71f,
     0x1.fe26f2p-21f, 0.0f, 0x1.93e812p-46f, 0x1.25d4a6p-42f, 0.0f, 0.0f,
     0x1.bcd79p-92f, 0.0f, 0.0f, 0x1.b4f83cp-101f, 0x1.4b41f2p-92f, 0.0f, 0.0f,
     0x1.ba9efcp-24f, 0.0f, 0x1.1fda92p-95f, 0x1.a35d7ap-124f, 0.0f, 0x1.7adbc4p-20f,
     0.0f, 0x1.b5f5fep-67f, 0.0f, 0.0f, 0.0f, 0x1.0df3dep-77f, 0x1.2a4f6ap-94f, 0.0f,
     0x1.05e862p-13f, 0x1.17c308p-120f, 0x1.8ee168p-18f, 0.0f, 0.0f, 0.0f,
     0x1.288114p-78f, 0x1.4f46a4p-22f, 0.0f, 0.0f, 0.0f, 0x1.441bdp-1f,
     0x1.020702p-95f, 0x1.34c676p-87f, 0.0f, 0.0f, 0x1.0c6cc4p-82f, 0.0f,
     0x1.a0a1d8p-16f, 0.0f, 0.0f, 0.0f, 0x1.ac64bep-15f, 0.0f, 0x1.0d4cep-65f, 0.0f,
     0x1.e53f72p-23f, 0x1.ec12bp-17f, 0.0f, 0.0f, 0x1.cb7238p-4f, 0x1.669084p-121f,
     0.0f, 0.0f, 0x1.ff76p-17f, 0.0f, 0.0f, 0.0f, 0x1.a01b8ep-124f, 0x1.d7261p-68f,
     0x1.d6244p-113f, 0x1.48978ap-35f, 0x1.520facp-10f, 0x1.0c264ep-57f,
     0x1.bbf8cep-30f, 0.0f, 0.0f, 0x1.4008c8p-111f, 0.0f, 0x1.261abp-8f, 0.0f, 0.0f,
     0x1.c1f574p-2f, 0x1.defe66p-56f, 0x1.d79d68p-108f, 0.0f, 0.0f, 0x1.07fa22p-61f,
     0.0f, 0.0f, 0x1.b3a97p-65f, 0x1.670d9ep-70f, 0.0f, 0x1.35b84ap-113f, 0.0f, 0.0f,
     0x1.3e42a2p-100f, 0.0f, 0x1.9fd3b2p-31f, 0x1.ea6c24p-91f, 0x1.59f7ecp-90f, 0.0f,
     0.0f, 0x1.596f18p-63f, 0x1.4e6ea4p-56f, 0x1.d38614p-124f, 0.0f, 0x1.3ffafp-114f,
     0.0f, 0x1.ee3178p-17f, 0x1.086ac4p-38f, 0x1.5e7b72p-120f, 0x1.263ca4p-9f, 0.0f,
     0x1.cc3a3ap-70f, 0x1.072778p-39f, 0x1.dd6bf8p-83f, 0.0f, 0x1.afe77ep-1f,
     0x1.813e42p-44f, 0x1.6e95f2p-20f, 0.0f, 0x1.bacffap-80f, 0.0f, 0.0f, 0.0f,
     0x1.d9b32cp-8f, 0.0f, 0x1.6d943cp-100f, 0.0f, 0x1.8d227cp-90f, 0.0f, 0.0f,
     0x1.8c683ep-99f, 0x1.c9a838p-88f, 0.0f, 0x1.609b9cp-37f, 0.0f, 0.0f, 0.0f,
     0x1.74fdfep-122f, 0.0f, 0x1.721bc4p-73f, 0.0f, 0.0f, 0x1.129b52p-63f, 0.0f, 0.0f,
     0.0f, 0x1.192612p-74f, 0x1.e1bfep-110f, 0x1.67a58ap-22f, 0x1p0f,
     0x1.4c79cep-113f, 0.0f, 0x1.80a17cp-3f, 0x1.f307eep-9f, 0.0f, 0.0f, 0.0f,
     0x1.a3729ep-108f, 0x1.da9b4ep-68f, 0x1.a19466p-48f, 0x1.6ddfcap-116f, 0.0f,
     0x1.b832a4p-18f, 0x1.51276ep-32f, 0x1.0f5f5ap-39f, 0x1.f1a57cp-47f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.5ec3c2p-32f, 0x1.b47526p-100f, 0x1.f2ceacp-122f, 0.0f, 0.0f,
     0x1.b2e0bap-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.979396p-120f, 0.0f,
     0x1.8426ecp-14f, 0.0f, 0.0f, 0.0f, 0x1.f9c2c6p-112f, 0.0f, 0.0f, 0x1.dc4642p-53f,
     0x1.ac433ep-39f, 0.0f, 0x1.41c9b4p-32f, 0x1.5460fcp-18f, 0.0f, 0x1.c2b5bep-46f,
     0.0f, 0x1.ee9228p-84f, 0x1.0087dcp-81f, 0x1.65680ap-68f, 0x1.04afdap-124f,
     0x1.87b39p-1f, 0.0f, 0x1.ad03c6p-98f, 0.0f, 0x1.2222d8p-39f, 0.0f,
     0x1.57187p-101f, 0x1.fe3b5cp-9f, 0x1.f53e6ap-36f, 0.0f, 0.0f, 0x1.d11adep-55f,
     0x1.b66dc8p-110f, 0x1.a10408p-32f, 0.0f, 0x1.c9a9a8p-3f, 0.0f, 0.0f, 0.0f,
     0x1.75177ep-66f, 0x1.944f74p-9f, 0.0f, 0.0f, 0.0f, 0x1.617e6cp-4f,
     0x1.534778p-111f, 0x1.b7983p-87f, 0x1.f2c62p-102f, 0x1.aa88cep-36f,
     0x1.a5e712p-110f, 0.0f, 0x1.795188p-66f, 0x1.33bc9ep-25f, 0.0f, 0x1.a01a7cp-67f,
     0.0f, 0.0f, 0x1.fc882ap-113f, 0x1.6e8228p-95f, 0.0f, 0x1.03aadcp-54f, 0.0f,
     0x1.80143p-80f, 0x1.5e0f8p-28f, 0x1p0f, 0.0f, 0x1.076628p-67f, 0.0f,
     0x1.2b129cp-72f, 0x1.40b232p-42f, 0.0f, 0x1.4a1384p-86f, 0x1.1ab598p-57f,
     0x1.c9ecb6p-76f, 0.0f, 0.0f, 0x1.0a0f7p-4f, 0x1.167128p-64f, 0.0f,
     0x1.54f0eep-122f, 0x1.c28a4ep-10f, 0x1.3d7adap-93f, 0x1.0397fcp-4f, 0.0f, 0.0f,
     0x1.aac12ap-65f, 0.0f, 0.0f, 0x1.ed5d1cp-7f, 0.0f, 0x1.4e0288p-113f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ef1954p-56f, 0.0f, 0.0f, 0.0f, 0x1.b592b8p-60f, 0x1.dad62ap-13f,
     0x1.325b2ap-17f, 0.0f, 0x1.9ecd98p-52f, 0x1.aa48eap-14f, 0x1.05a2b4p-19f,
     0x1.c55be8p-52f, 0x1.b630dap-26f, 0x1.92aeaap-22f, 0x1.1261e4p-16f,
     0x1.70a5e6p-79f, 0.0f, 0x1.e80abcp-50f, 0.0f, 0x1.4c582p-86f, 0.0f,
     0x1.b041ap-90f, 0.0f, 0x1.e9440ep-93f, 0x1.d34f4p-100f, 0x1.bdb82p-103f,
     0x1.7d6d8ep-52f, 0.0f, 0.0f, 0.0f, 0x1.6cdc88p-76f, 0x1.647708p-116f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.030758p-35f, 0.0f, 0x1.843578p-29f, 0x1.64a74ep-8f, 0.0f, 0.0f,
     0.0f, 0x1.6427fep-72f, 0x1.abd0eep-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a60d92p-96f, 0.0f, 0x1.d81648p-103f, 0x1.bc62ep-15f, 0x1.0d9cd6p-102f, 0.0f,
     0x1.94e856p-98f, 0x1.6b7c98p-18f, 0.0f, 0.0f, 0x1.0e2aecp-80f, 0x1.677faap-89f,
     0.0f, 0.0f, 0.0f, 0x1.61df62p-67f, 0.0f, 0x1.5e4d3cp-72f, 0x1.8ee302p-73f, 0.0f,
     0.0f, 0.0f, 0x1.178f12p-9f, 0.0f, 0x1.05d4f6p-69f, 0x1.264744p-90f,
     0x1.e842e2p-90f, 0x1.2266c2p-30f, 0x1.302e56p-35f, 0.0f, 0x1.88fe8ep-17f, 0.0f,
     0.0f, 0.0f, 0x1.b21a7ap-45f, 0x1.0fd666p-11f, 0x1.b2ac04p-6f, 0x1.e8809ap-117f,
     0.0f, 0x1.0979ep-39f, 0.0f, 0x1.e72566p-38f, 0.0f, 0x1.fea9f2p-46f, 0.0f, 0.0f,
     0.0f, 0x1.4a4754p-122f, 0.0f, 0x1.1c4104p-34f, 0.0f, 0.0f, 0.0f, 0x1.065dfp-56f,
     0.0f, 0x1.f4d81ap-97f, 0x1.a790ecp-68f, 0x1.550ccep-28f, 0x1.a9b3b2p-76f, 0.0f,
     0.0f, 0x1.3e12d8p-37f, 0x1.82a14ap-79f, 0x1.a5bf84p-57f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.374204p-81f, 0x1.f27c4cp-91f, 0.0f, 0x1.a2539ap-21f, 0x1.bd2fd8p-16f,
     0x1.ec7b88p-48f, 0x1.5194fap-92f, 0x1.f402d2p-63f, 0.0f, 0x1.13ef86p-15f, 0.0f,
     0x1.a7cfc6p-78f, 0.0f, 0x1.218f98p-25f, 0.0f, 0x1.38c95ep-62f, 0x1.cb8c6ap-110f,
     0x1.507f6ep-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e41b08p-122f, 0x1.e93dfp-15f,
     0x1.546ec4p-56f, 0.0f, 0x1.34a7f4p-40f, 0.0f, 0x1.3ded88p-13f, 0x1.01d7eap-27f,
     0x1.b870fcp-52f, 0x1.c7b23ep-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d94426p-11f,
     0x1.7facp-118f, 0.0f, 0x1.b1fb1ap-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.76ae42p-116f, 0x1.0435fep-97f, 0.0f, 0.0f, 0x1.2e6826p-53f, 0x1.29bb02p-30f,
     0.0f, 0x1.da32eep-105f, 0x1.8c8ceep-30f, 0.0f, 0.0f, 0.0f, 0x1.3f8fcap-86f, 0.0f,
     0x1.0ea166p-28f, 0.0f, 0x1.783948p-91f, 0x1.ba4d26p-104f, 0.0f, 0.0f,
     0x1.7f1dap-76f, 0x1.3becb6p-59f, 0.0f, 0.0f, 0x1.60b702p-41f, 0x1.9171cp-110f,
     0.0f, 0x1.36425ap-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fa5b48p-66f, 0x1.35c78p-86f,
     0x1.1bb266p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.66dbaep-108f, 0.0f, 0.0f, 0.0f,
     0x1.50c9cap-84f, 0.0f, 0x1.b3ebd8p-22f, 0.0f, 0.0f, 0x1.988c3ep-16f, 0.0f,
     0x1.18ee76p-72f, 0x1.463972p-28f, 0x1.d0fc46p-31f, 0.0f, 0.0f, 0x1.1e664p-34f,
     0x1.bf02d8p-86f, 0.0f, 0x1.60db86p-63f, 0.0f, 0x1.fa301cp-9f, 0x1.01f9fp-74f,
     0.0f, 0.0f, 0x1.ae1ed2p-5f, 0x1.ba129cp-1f, 0.0f, 0.0f, 0.0f, 0x1.47e4b2p-114f,
     0.0f, 0.0f, 0x1.ace048p-125f, 0x1.e13b08p-26f, 0x1.b43ad2p-67f, 0x1.f2e268p-41f,
     0x1.a4dcb6p-9f, 0.0f, 0x1.d90fdp-46f, 0x1.9b147ep-36f, 0x1.1a75f2p-119f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.794b5p-11f, 0x1.b4590ep-52f, 0.0f, 0.0f, 0.0f,
     0x1.bbc16ep-20f, 0x1.d8bdfep-126f, 0x1.d36db2p-108f, 0x1.636876p-44f,
     0x1.3da9b6p-124f, 0x1.2ff80cp-53f, 0.0f, 0x1.553288p-119f, 0x1.15347cp-79f, 0.0f,
     0x1.6213fp-51f, 0.0f, 0x1.c07ab6p-65f, 0x1.d7c0c4p-88f, 0x1.fa3be4p-77f, 0.0f,
     0x1.f3a426p-102f, 0.0f, 0x1.7e0546p-26f, 0.0f, 0x1.0ecfbep-22f, 0.0f,
     0x1.b63e3cp-46f, 0.0f, 0.0f, 0x1.ec8106p-8f, 0.0f, 0.0f, 0x1.3c7164p-16f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.206a2p-7f, 0x1.05d5bp-78f, 0x1.fa2bcp-100f,
     0x1.73492ep-51f, 0x1.4051f2p-76f, 0.0f, 0x1.f66282p-68f, 0x1.291b6ap-27f,
     0x1.7659ecp-66f, 0.0f, 0x1.d91d0ap-36f, 0.0f, 0x1.44967p-58f, 0x1.318e0ep-29f,
     0x1.127ebcp-79f, 0.0f, 0x1.4fec4p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1c48d6p-6f,
     0x1.de8576p-17f, 0x1.847dbp-84f, 0.0f, 0.0f, 0x1.1ee964p-43f, 0.0f,
     0x1.0cc51p-47f, 0.0f, 0x1.b5ace4p-98f, 0.0f, 0x1.3892bap-95f, 0x1.ef10aep-71f,
     0.0f, 0.0f, 0x1.e22fbp-16f, 0.0f, 0.0f, 0x1.16c758p-1f, 0x1.3c9486p-3f, 0.0f,
     0.0f, 0x1.bf24f2p-77f, 0x1.82367p-54f, 0.0f, 0.0f, 0x1.340ad4p-37f,
     0x1.bcf492p-87f, 0.0f, 0.0f, 0x1.9c8bb4p-47f, 0.0f, 0x1.d1bc58p-75f, 0.0f,
     0x1.487fa2p-41f, 0x1.e92dcep-21f, 0x1.5dfc6cp-33f, 0.0f, 0x1.b1beb4p-103f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b9af5ap-107f, 0x1.18eedcp-13f,
     0x1.578788p-39f, 0x1.7047b2p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1d18fap-116f,
     0x1.f0ed8ap-43f, 0x1.848a1ep-45f, 0x1.92faep-7f, 0.0f, 0x1.064424p-4f,
     0x1.885bdap-87f, 0x1.62daap-106f, 0.0f, 0x1.aa0d3p-114f, 0.0f, 0.0f,
     0x1.66c7c2p-110f, 0x1.ec73ccp-118f, 0.0f, 0x1.f91fbep-74f, 0x1.bcbaaap-20f, 0.0f,
     0.0f, 0x1.da5cf6p-33f, 0.0f, 0.0f, 0x1.98969ep-84f, 0x1.6939c4p-112f, 0.0f,
     0x1.7b1424p-40f, 0x1.385f54p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.7d15fap-14f, 0.0f, 0x1.79401ep-11f, 0.0f, 0.0f, 0x1.32ee8ep-71f, 0.0f,
     0.0f, 0.0f, 0x1.8246d2p-30f, 0.0f, 0.0f, 0x1.e67dcp-40f, 0x1.81501ep-3f,
     0x1.5e59fcp-84f, 0x1.d34342p-122f, 0x1.bcb6fep-13f, 0.0f, 0.0f, 0.0f,
     0x1.5a7966p-40f, 0x1.ec659ep-27f, 0x1.6805cp-16f, 0x1.ab643ap-87f, 0.0f, 0.0f,
     0x1.f81b9cp-94f, 0x1.f6cfbp-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4989cap-74f,
     0x1.2bd40ep-75f, 0x1.f8b22p-36f, 0.0f, 0x1.3ba92p-101f, 0x1.fc37bap-61f,
     0x1.ad48acp-2f, 0x1.ad4a8cp-74f, 0.0f, 0x1.9b162ep-23f, 0.0f, 0x1.5e086ap-76f,
     0x1.258688p-29f, 0.0f, 0.0f, 0x1.1e7022p-59f, 0x1.0998e8p-46f, 0x1.8545dap-23f,
     0x1.0fafbcp-90f, 0.0f, 0x1.b6cb8ap-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.47fd1cp-42f, 0x1.9d09ep-54f, 0.0f, 0x1.2cbf3ep-85f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cd6c2ep-21f, 0.0f, 0x1.f00c28p-70f, 0.0f, 0x1.3e05b8p-31f, 0.0f,
     0x1.19fec4p-56f, 0x1.49050cp-26f, 0x1.e22894p-22f, 0.0f, 0x1.801276p-85f, 0.0f,
     0.0f, 0x1.5c07dcp-44f, 0x1.af43d4p-113f, 0.0f, 0x1.10037ap-98f, 0.0f,
     0x1.965b92p-91f, 0.0f, 0.0f, 0x1.fc77eep-76f, 0x1.1453dap-16f, 0.0f,
     0x1.172522p-38f, 0.0f, 0.0f, 0x1.8f36bap-49f, 0.0f, 0x1.6d88a4p-89f, 0.0f,
     0x1.ea2d72p-32f, 0.0f, 0x1.9c3996p-23f, 0.0f, 0.0f, 0x1.88deb8p-109f,
     0x1.1547f2p-81f, 0x1.3c6386p-67f, 0x1.0800f2p-8f, 0x1.917ecep-109f,
     0x1.77b18ep-6f, 0.0f, 0.0f, 0x1.405b12p-41f, 0x1.16f2c8p-1f, 0x1.24db08p-83f,
     0x1.9f2e36p-108f, 0x1.fe71bcp-55f, 0x1.dd8c66p-42f, 0x1.0e63p-123f, 0.0f, 0.0f,
     0.0f, 0x1.96581ap-119f, 0x1.faadccp-111f, 0x1.d34e92p-35f, 0.0f, 0x1.b35eb6p-95f,
     0x1.86191cp-19f, 0.0f, 0x1.281626p-68f, 0.0f, 0x1.39c402p-73f, 0.0f,
     0x1.6bfec4p-6f, 0.0f, 0.0f, 0x1.45bef4p-76f, 0x1.80df8ep-87f, 0.0f, 0.0f,
     0x1.a7f36ep-91f, 0x1.df8ca8p-74f, 0x1.c6bb02p-125f, 0x1.321f24p-9f,
     0x1.0497bp-59f, 0x1.f975dap-20f, 0x1.8bedd2p-41f, 0x1.bab3dp-104f,
     0x1.c14fbap-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cf0d24p-96f, 0x1.511512p-91f,
     0x1.9e5d3ep-11f, 0.0f, 0.0f, 0x1.6c6efap-74f, 0.0f, 0.0f, 0x1.538e8cp-56f,
     0x1.094686p-57f, 0.0f, 0.0f, 0x1.d0c2eap-101f, 0x1.d1f42p-108f, 0.0f,
     0x1.8910b2p-37f, 0x1.cfeaap-2f, 0.0f, 0.0f, 0.0f, 0x1.2176b8p-92f,
     0x1.9feb7p-45f, 0x1.dc9f9cp-76f, 0.0f, 0x1.d3db76p-3f, 0x1.ce5992p-110f,
     0x1.eb9084p-106f, 0x1.e15c3ap-126f, 0.0f, 0x1.dddad6p-62f, 0x1.673c6ap-33f,
     0x1.29f07ap-102f, 0x1.7fc3e6p-124f, 0.0f, 0x1.904c98p-33f, 0x1.5409cap-46f, 0.0f,
     0x1.10f188p-23f, 0.0f, 0.0f, 0.0f, 0x1.f62e78p-72f, 0x1.bec43p-31f,
     0x1.f1229p-13f, 0.0f, 0x1.660c2p-11f, 0.0f, 0x1.134c16p-39f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.5ea8d8p-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2789fp-4f,
     0x1.86355p-20f, 0x1.5bc2dep-31f, 0x1.98a1a2p-87f, 0x1.d1700ep-83f,
     0x1.b7a434p-19f, 0.0f, 0x1.d34816p-94f, 0.0f, 0.0f, 0x1.324e6ep-18f,
     0x1.6098bep-34f, 0x1.64172ap-96f, 0.0f, 0.0f, 0.0f, 0x1.326d22p-16f,
     0x1.6bd796p-85f, 0.0f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_float8_t global_bench_acc;
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
        ml_float8_t local_acc;
        int32_t i;
        ml_float8_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1008));){
            ml_float8_t tmp0;
            ml_float8_t tmp1;
            ml_float8_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_float8_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            tmp1 = Sleef_sqrtf8_u05kvx(tmp0);
            memcpy(((ml_float8_t*)(external_bench_wrapper_output_table+ i)), &(tmp1), 32);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(8);
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
    cpe_measure = id_tmp / 10080000.0;
    printf("Sleef_sqrtf8_u05kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_sqrtf8_u05kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
