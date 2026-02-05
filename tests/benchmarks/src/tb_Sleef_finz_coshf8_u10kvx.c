/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_coshf8_u10kvx.c --function \
 *     Sleef_finz_coshf8_u10kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 8 --function-input-vector-size \
 *     8 --bench --no-embedded-bin --target kv3
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
     0.0f, 0x1.e0a45p-2f, 0x1.cad784p-72f, 0x1.d475bcp-40f, 0.0f, 0.0f, 0.0f,
     0x1.8dd894p-69f, 0x1.6b893cp-47f, 0.0f, 0x1.3f7252p-60f, 0x1.5434fcp-85f,
     0x1.6e684p-80f, 0x1.09d892p-16f, 0x1.b56f8p-61f, 0.0f, 0x1.44cf1cp-112f,
     0x1.d943fcp-54f, 0x1.36e404p-71f, 0x1.9e080cp-27f, 0.0f, 0.0f, 0x1.416db8p-86f,
     0x1.281a88p-64f, 0.0f, 0.0f, 0.0f, 0x1.1d0c4ep-42f, 0x1.0cb3bap-78f, 0.0f, 0.0f,
     0x1.320f12p-26f, 0x1.7b8f14p-28f, 0x1.397abp-16f, 0.0f, 0x1.a4a25ap-11f,
     0x1.423726p-103f, 0x1.36c5ep-105f, 0.0f, 0x1.21605p-89f, 0.0f, 0.0f,
     0x1.4acf44p-110f, 0.0f, 0x1.63d74cp-5f, 0.0f, 0.0f, 0x1.adc7dcp-96f,
     0x1.e356d2p-55f, 0x1.7a5fcep-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dac1bap-19f, 0.0f,
     0.0f, 0x1.4dcf7ap-57f, 0.0f, 0x1.9bf9acp-77f, 0x1.233b9p-31f, 0.0f, 0.0f, 0.0f,
     0x1.0b771ap-96f, 0.0f, 0.0f, 0x1.449e9cp-81f, 0.0f, 0x1.739f5cp-60f,
     0x1.9c65e4p-26f, 0x1.c5868p-121f, 0x1.1d21dp-105f, 0x1.408cbcp-4f,
     0x1.a99e4ep-71f, 0.0f, 0.0f, 0x1.78c314p-36f, 0.0f, 0x1.2deac4p-60f,
     0x1.3e09a8p-87f, 0.0f, 0.0f, 0x1.f76008p-104f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4ab2eap-117f, 0.0f, 0x1.931fc6p-119f, 0.0f, 0x1.5768d4p-126f, 0.0f,
     0x1.6a180ep-35f, 0.0f, 0x1.1516a4p-116f, 0x1.ed994ap-20f, 0.0f, 0x1.9ac802p-41f,
     0x1.ccc9ap-86f, 0.0f, 0.0f, 0.0f, 0x1.a65e3ap-10f, 0x1.111cf8p-12f, 0.0f,
     0x1.1f90b8p-84f, 0x1.2bbcbep-90f, 0x1.ae5912p-65f, 0x1.f55f74p-72f, 0.0f, 0.0f,
     0x1p0f, 0x1.268c2ap-91f, 0x1.59df12p-12f, 0.0f, 0x1.8f9ec4p-35f, 0.0f, 0.0f,
     0.0f, 0x1.480932p-106f, 0x1.703ba2p-103f, 0.0f, 0x1.145b84p-97f, 0.0f,
     0x1.59030ep-79f, 0x1.def5c4p-2f, 0.0f, 0.0f, 0x1.1f7ap-113f, 0x1.5e5284p-41f,
     0x1.ec25eap-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.746ac8p-39f, 0x1.cc7268p-42f,
     0.0f, 0x1.ce49bap-31f, 0x1.2cc1a4p-2f, 0x1.ef61aep-5f, 0x1.607536p-114f,
     0x1.c71532p-88f, 0x1.3b0938p-107f, 0x1.80240ep-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b2875ap-79f, 0x1.8e687p-107f, 0.0f, 0.0f, 0.0f, 0x1.e594a4p-29f, 0.0f, 0.0f,
     0.0f, 0x1.a311fp-84f, 0.0f, 0x1.7f67dcp-67f, 0.0f, 0x1.6cea4ap-113f, 0x1p0f,
     0.0f, 0x1.5f4b5cp-90f, 0x1.380c22p-32f, 0.0f, 0.0f, 0x1.f93166p-21f,
     0x1.0a140cp-63f, 0.0f, 0x1.cc6be2p-42f, 0x1.ad6ce2p-77f, 0x1.2f713cp-119f,
     0x1.4778fep-9f, 0.0f, 0x1.d6f6ap-14f, 0x1.4fabbp-111f, 0x1.a3a35ep-58f, 0.0f,
     0x1.664fdcp-43f, 0x1.604e68p-16f, 0x1.8d6b66p-4f, 0x1.c2d19ap-33f,
     0x1.475e44p-101f, 0x1.a2f174p-104f, 0x1.531d82p-23f, 0x1.6b0384p-111f,
     0x1.47499ep-81f, 0x1p0f, 0x1.a39958p-82f, 0x1.2ca03cp-80f, 0.0f, 0x1.94193ap-78f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.fe3a98p-87f, 0x1.1a0172p-53f, 0x1.24e99ep-103f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8b4d2p-115f, 0.0f, 0.0f, 0x1.65669ep-90f,
     0x1.8ec8cep-62f, 0x1.2abaf4p-65f, 0.0f, 0.0f, 0x1.dd8e96p-113f, 0.0f,
     0x1.ce268ap-97f, 0x1.a30df4p-109f, 0x1.11d886p-89f, 0.0f, 0x1.225f34p-14f, 0.0f,
     0x1.1a2934p-37f, 0.0f, 0x1.9059e8p-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.065ac6p-62f, 0x1.a0914ap-2f, 0x1.794f5ep-10f, 0x1.491e4cp-50f,
     0x1.72a836p-24f, 0.0f, 0x1.07bf5ep-99f, 0x1.6eb1bap-1f, 0x1.cf993p-1f, 0.0f,
     0x1.e92c32p-21f, 0.0f, 0.0f, 0.0f, 0x1.10abfp-62f, 0.0f, 0x1.02fb18p-19f, 0.0f,
     0x1.9e16a6p-55f, 0x1.ce86acp-45f, 0.0f, 0x1.0207d2p-24f, 0.0f, 0x1.e8c404p-54f,
     0.0f, 0x1.c1a00ap-55f, 0x1.27720cp-7f, 0.0f, 0x1.489134p-39f, 0x1.729efep-82f,
     0x1.de7904p-77f, 0x1.31c4bep-11f, 0.0f, 0x1.fb785cp-116f, 0.0f, 0x1.c2269cp-20f,
     0x1.f3799p-59f, 0x1.887e06p-46f, 0.0f, 0x1.1ae354p-96f, 0x1.8bfb04p-67f,
     0x1.f53c2ap-123f, 0.0f, 0x1.5572a6p-39f, 0.0f, 0.0f, 0x1.a7ea12p-95f, 0.0f,
     0x1.0a3a7ep-21f, 0.0f, 0x1.7d72f2p-56f, 0.0f, 0.0f, 0x1.2d19f6p-7f,
     0x1.681c22p-88f, 0.0f, 0x1.fc8b72p-24f, 0x1.cd8662p-18f, 0x1.90959p-58f, 0.0f,
     0x1.be956ap-12f, 0x1.e184e4p-2f, 0x1.ac4dd8p-4f, 0.0f, 0x1.f18f9ep-27f, 0.0f,
     0x1.b0586ap-99f, 0.0f, 0.0f, 0x1.b9e53cp-83f, 0x1.60a86ep-11f, 0.0f, 0.0f,
     0x1.c68376p-6f, 0.0f, 0x1.a2df14p-88f, 0x1.5660ap-98f, 0.0f, 0.0f, 0.0f,
     0x1.18843cp-55f, 0x1.9c1114p-86f, 0.0f, 0x1.a95646p-60f, 0.0f, 0x1.a8188p-22f,
     0x1.4021a6p-98f, 0x1.c69cbp-89f, 0.0f, 0x1.3224d8p-98f, 0.0f, 0.0f,
     0x1.122a96p-109f, 0.0f, 0.0f, 0x1.a793a6p-78f, 0x1.fd34dep-57f, 0.0f,
     0x1.64e1f8p-102f, 0.0f, 0x1.44fa04p-1f, 0.0f, 0.0f, 0.0f, 0x1.de9c4ap-103f,
     0x1.e5d1bcp-34f, 0x1.b5eccep-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e32a06p-62f, 0x1.4e35d2p-97f, 0.0f, 0x1.13fce4p-11f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f28db8p-57f, 0x1.d0e75ap-52f, 0.0f, 0x1.950f22p-25f, 0x1.48d904p-104f,
     0x1.5f5af6p-100f, 0.0f, 0x1.12551ap-55f, 0.0f, 0x1.9e5104p-109f, 0.0f, 0.0f,
     0x1.22921ap-123f, 0x1.be4308p-49f, 0.0f, 0.0f, 0x1.ac838ap-68f, 0x1.12fcbp-120f,
     0.0f, 0x1.58211ap-46f, 0.0f, 0x1.01a8c8p-13f, 0x1.faa7dep-56f, 0.0f, 0.0f,
     0x1.79827ep-56f, 0x1.0439ccp-60f, 0x1.30c67ap-16f, 0.0f, 0.0f, 0.0f,
     0x1.a756f6p-78f, 0.0f, 0.0f, 0x1.0a5242p-14f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9dfa62p-83f, 0.0f, 0x1.8a517cp-121f, 0.0f, 0.0f, 0x1.3d8076p-100f, 0.0f,
     0x1.f4463cp-74f, 0.0f, 0x1.c96c5p-29f, 0.0f, 0.0f, 0.0f, 0x1.e6ab6ep-17f,
     0x1.92bbd8p-83f, 0.0f, 0x1.b9ff48p-3f, 0x1.0942d4p-63f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ba7938p-105f, 0.0f, 0x1.3c6e4ap-15f, 0x1.631292p-71f, 0x1.3e7616p-17f,
     0x1.e2ec98p-23f, 0x1.873f32p-75f, 0x1.ab57d6p-125f, 0x1.936994p-75f,
     0x1.ba7ad4p-78f, 0x1.307dd4p-34f, 0.0f, 0x1.e0fcacp-15f, 0x1.6d4334p-69f,
     0x1.58393cp-26f, 0x1.19c08p-112f, 0x1.f4db46p-93f, 0x1.af2ce2p-36f,
     0x1.867aacp-77f, 0.0f, 0x1.6bc9a2p-15f, 0x1p0f, 0x1.714412p-85f, 0.0f, 0.0f,
     0x1.a69c8ep-20f, 0x1.7c6ffcp-103f, 0.0f, 0x1.eef4bep-126f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.f97a3ep-54f, 0x1.a686b2p-39f,
     0x1.dd4e4cp-106f, 0x1.c59852p-14f, 0.0f, 0x1.1aabaap-57f, 0x1.986b12p-45f, 0.0f,
     0x1.6e7bccp-115f, 0.0f, 0x1.feae92p-3f, 0x1.8900fep-117f, 0x1.8031ecp-100f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b04914p-55f, 0x1.8c1cb6p-94f, 0.0f,
     0x1.ea08d8p-67f, 0x1.90c8f2p-35f, 0x1.4251fap-103f, 0x1.c2a58cp-20f, 0.0f,
     0x1.7ed36cp-16f, 0x1.f6f7e8p-56f, 0x1.30255p-71f, 0x1.33ba9ap-86f,
     0x1.1bd076p-58f, 0.0f, 0x1.275efep-12f, 0x1.a4b1b8p-75f, 0x1.9cf0d6p-41f, 0.0f,
     0.0f, 0x1.dfc5c6p-102f, 0x1.8f6a34p-89f, 0x1.674a2ap-5f, 0x1.1e92bap-125f,
     0x1.a07308p-88f, 0x1.00c16cp-102f, 0x1.219d08p-29f, 0.0f, 0x1.84cf1cp-13f,
     0x1.86f29p-21f, 0.0f, 0.0f, 0x1.3a7dc4p-95f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.24313cp-62f, 0x1.6f5c1ap-2f, 0.0f, 0x1.6e4346p-62f, 0.0f, 0x1.113b3ep-16f,
     0x1.985042p-2f, 0x1.645732p-121f, 0.0f, 0x1.a0646ep-51f, 0.0f, 0.0f,
     0x1.b05082p-52f, 0x1.3f4048p-4f, 0x1.a9a02p-61f, 0.0f, 0x1.27705ep-39f,
     0x1.4517fp-59f, 0.0f, 0.0f, 0x1.2ce19cp-114f, 0.0f, 0x1.2a20ccp-16f, 0.0f,
     0x1.e0d75cp-100f, 0x1p0f, 0.0f, 0.0f, 0x1.039228p-73f, 0.0f, 0x1.9807a2p-22f,
     0x1.d29a94p-30f, 0x1.fc987cp-9f, 0.0f, 0.0f, 0.0f, 0x1.6d4116p-38f, 0.0f,
     0x1.2ec218p-54f, 0.0f, 0x1.8d03c6p-78f, 0.0f, 0x1.b0866cp-39f, 0x1.897c5ap-84f,
     0x1.5d3dccp-48f, 0x1.e7c262p-49f, 0.0f, 0.0f, 0.0f, 0x1.7a1cd4p-47f,
     0x1.c4fa0ap-58f, 0.0f, 0x1.5ca2dcp-55f, 0x1p0f, 0.0f, 0x1.525422p-20f,
     0x1.dd488ep-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.be4e4cp-23f,
     0x1.a30f6ep-25f, 0x1.99c3a6p-23f, 0x1.388f62p-43f, 0.0f, 0x1.5c00a2p-110f,
     0x1.5f1c0cp-71f, 0x1.a2a84cp-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e544bap-22f, 0.0f, 0x1.86bd68p-22f, 0x1.24a514p-107f, 0x1.919f54p-67f, 0.0f,
     0.0f, 0.0f, 0x1.27cae4p-44f, 0.0f, 0x1.a86cfp-11f, 0.0f, 0.0f, 0x1.bc00e2p-64f,
     0x1.885982p-74f, 0.0f, 0x1.ec359cp-114f, 0x1.698e0ap-15f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f0e04cp-51f, 0.0f, 0x1.2ecb02p-36f, 0.0f, 0x1.9e6a02p-95f,
     0x1.ebdc66p-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8df7cap-101f, 0.0f,
     0x1.6d7b94p-40f, 0.0f, 0x1.5e6d5ap-31f, 0.0f, 0x1.b4fe2ap-120f, 0.0f,
     0x1.6f43dep-70f, 0.0f, 0x1.b9fac6p-53f, 0.0f, 0x1.239844p-78f, 0x1.87456ep-31f,
     0x1.5ae66cp-105f, 0x1.f015d8p-126f, 0.0f, 0x1.af1978p-69f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.4b5adep-14f, 0x1.9e2fa6p-31f, 0.0f, 0x1.eb862ep-75f, 0x1.e2cd66p-88f,
     0x1.c6fa6p-68f, 0.0f, 0x1.14ec46p-119f, 0.0f, 0x1.e01afp-24f, 0.0f,
     0x1.7f6a18p-110f, 0x1.010c66p-46f, 0.0f, 0x1.6e113ep-72f, 0x1.b4b63p-84f,
     0x1.891f6ep-44f, 0x1.354e28p-31f, 0x1.89084cp-39f, 0x1.5a0348p-95f,
     0x1.247aa6p-98f, 0x1.f4932ep-48f, 0.0f, 0x1.c686a6p-4f, 0x1.0cd86ap-113f,
     0x1.e2035p-45f, 0x1.966bd4p-57f, 0.0f, 0x1.eee708p-5f, 0x1.705da6p-89f, 0.0f,
     0.0f, 0.0f, 0x1.a98064p-25f, 0x1.ae4202p-55f, 0.0f, 0x1.e01f7ap-125f, 0.0f,
     0x1.2a9018p-37f, 0x1.8e553ap-69f, 0.0f, 0x1.370e4ap-88f, 0x1.c7747p-20f, 0.0f,
     0x1.946ddcp-75f, 0x1.bd9b62p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.429138p-3f,
     0x1.98a35ap-83f, 0x1.0cf2a2p-116f, 0.0f, 0.0f, 0x1.856d98p-41f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b9842ap-15f, 0x1.2df202p-67f, 0x1.3e605ap-57f, 0x1.7eadcp-84f,
     0x1.af972cp-43f, 0x1.662ab6p-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.600e7ep-15f,
     0x1.0ef6c8p-6f, 0x1.5512c8p-88f, 0.0f, 0.0f, 0x1.0d0e44p-41f, 0x1.1ab2aep-102f,
     0x1.4182ccp-6f, 0.0f, 0x1.ebf76ep-126f, 0.0f, 0x1.50a92cp-117f, 0x1.0adc94p-39f,
     0x1.780b2p-3f, 0.0f, 0.0f, 0.0f, 0x1.2c6532p-119f, 0.0f, 0x1.98c744p-71f, 0.0f,
     0x1.5c1f36p-4f, 0x1.7e2a9ep-71f, 0x1.86f33ep-121f, 0.0f, 0x1.ce686ap-1f,
     0x1.6e8ab6p-20f, 0x1.41baap-94f, 0.0f, 0.0f, 0x1.63ad7p-54f, 0x1.8c5898p-72f,
     0x1.88ee5ap-95f, 0.0f, 0.0f, 0.0f, 0x1.beb4ecp-5f, 0x1.9e55bap-97f,
     0x1.e18e46p-102f, 0x1.10ebc6p-3f, 0x1.792fd8p-1f, 0x1.498f4ep-16f, 0.0f, 0.0f,
     0.0f, 0x1.47de52p-54f, 0x1.d95256p-61f, 0x1.b84e0ep-28f, 0.0f, 0.0f,
     0x1.403dacp-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.33cdacp-100f, 0x1.14340ap-10f,
     0x1.f157e8p-27f, 0x1.cb30fcp-61f, 0x1.8df8e2p-85f, 0x1.c70eacp-98f,
     0x1.d125a2p-22f, 0x1.88db4ep-91f, 0x1.66949p-120f, 0x1.7f33b8p-111f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.527df6p-52f, 0x1.50b814p-105f, 0x1.b5ed82p-7f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.2afccep-54f, 0.0f, 0.0f, 0x1.265c8ep-16f, 0x1.51d56ep-22f,
     0x1.c27882p-97f, 0.0f, 0.0f, 0x1.5c2976p-14f, 0.0f, 0.0f, 0x1.6aaea6p-88f,
     0x1.675dcp-120f, 0x1.330b6cp-113f, 0.0f, 0x1.bdbb8p-71f, 0x1.da44e2p-84f,
     0x1.17abb2p-75f, 0.0f, 0.0f, 0.0f, 0x1.223136p-1f, 0x1.f88772p-44f,
     0x1.c91e74p-91f, 0.0f, 0x1.db0e6ep-42f, 0.0f, 0x1.bb6344p-17f, 0x1.3955c2p-17f,
     0x1.b17bfp-43f, 0.0f, 0x1.3fef18p-10f, 0x1.ee5f58p-115f, 0x1p0f, 0x1.750916p-30f,
     0x1.5ef04ep-43f, 0.0f, 0x1.30385ep-53f, 0x1.4f4c1p-55f, 0.0f, 0.0f,
     0x1.c4ed5cp-106f, 0x1.074314p-111f, 0.0f, 0x1.14c16cp-80f, 0x1.8d6688p-61f,
     0x1.353a96p-100f, 0x1.052128p-81f, 0.0f, 0x1.c376bap-59f, 0x1.6bfe82p-101f, 0.0f,
     0x1.ce127cp-67f, 0.0f, 0.0f, 0x1.e52cbp-101f, 0.0f, 0.0f, 0x1.2edc48p-89f,
     0x1.373cdp-112f, 0x1.e076dcp-84f, 0.0f, 0x1.3e56d8p-47f, 0.0f, 0x1.8100b4p-109f,
     0.0f, 0.0f, 0.0f, 0x1.8c6edcp-22f, 0x1.a5cc24p-35f, 0x1.badb08p-65f,
     0x1.6f135ep-41f, 0x1.c740a2p-91f, 0x1.43b69ep-125f, 0x1.364cp-11f, 0.0f, 0.0f,
     0x1.ce636p-120f, 0x1.7bf5ap-4f, 0x1.ca5844p-57f, 0x1.36a972p-85f,
     0x1.dec224p-27f, 0x1.77894cp-16f, 0.0f, 0x1.f41e68p-3f, 0x1.806f9cp-26f, 0.0f,
     0.0f, 0x1.b8ffdcp-41f, 0.0f, 0x1.4ca504p-1f, 0x1p0f, 0x1.609514p-64f,
     0x1.32dfaap-35f, 0.0f, 0x1.0e9c9cp-106f, 0x1.268cc4p-73f, 0x1.70d38ap-84f,
     0x1.954528p-45f, 0x1.ad4602p-29f, 0.0f, 0x1.cfc57ap-67f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ec7804p-106f, 0.0f, 0x1.ba9856p-16f, 0x1.dedb86p-105f, 0x1.ad4ce4p-39f,
     0x1.0b93c8p-68f, 0.0f, 0.0f, 0x1.65567cp-75f, 0.0f, 0.0f, 0.0f, 0x1.d5329ep-14f,
     0.0f, 0x1.8caf26p-6f, 0.0f, 0.0f, 0x1.5d8e86p-24f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7898d4p-88f, 0x1.73495cp-95f, 0x1.35d9e8p-126f, 0x1.4cc18ep-79f, 0.0f,
     0x1.288a7p-67f, 0x1.70706ap-83f, 0x1.66ccfep-102f, 0.0f, 0x1.93b8cap-72f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.57fd2cp-98f, 0.0f, 0.0f, 0.0f, 0x1.67ff5p-7f,
     0x1.81ff4ep-52f, 0.0f, 0.0f, 0x1.3f00d4p-31f, 0x1.28a616p-109f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.5203eep-74f, 0x1.0f813p-52f, 0x1.d05e34p-32f, 0.0f,
     0x1.f39b1ep-36f, 0x1.8e339ap-116f, 0.0f, 0x1.e01094p-14f, 0.0f, 0.0f,
     0x1.a46804p-2f, 0x1.80c74p-101f, 0.0f, 0x1.275136p-74f, 0x1.19938ap-9f, 0.0f,
     0x1.456d2ep-53f, 0x1.ffda88p-44f, 0x1.e94a96p-70f, 0x1.b95d32p-72f, 0.0f,
     0x1.f29498p-126f, 0x1.8439d8p-81f, 0x1.55f822p-5f, 0x1.079feep-77f,
     0x1.15de62p-58f, 0x1.8ecfb8p-92f, 0x1.f8f132p-45f, 0.0f, 0x1.156de6p-108f, 0.0f,
     0.0f, 0x1.c0741p-83f, 0.0f, 0.0f, 0.0f, 0x1.baa78ep-45f, 0.0f, 0x1.ab7decp-80f,
     0.0f, 0x1.64dce8p-79f, 0.0f, 0.0f, 0x1.e7b246p-50f, 0x1.0e7e26p-74f, 0.0f,
     0x1.f36db4p-26f, 0.0f, 0x1.55d1aap-53f, 0.0f, 0x1.b32e46p-4f, 0x1.42c4bap-47f,
     0x1.d8a8e2p-71f, 0.0f, 0x1.4ee1c4p-20f, 0.0f
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
            tmp1 = Sleef_finz_coshf8_u10kvx(tmp0);
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
    printf("Sleef_finz_coshf8_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_finz_coshf8_u10kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
