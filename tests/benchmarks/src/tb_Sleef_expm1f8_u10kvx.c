/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_expm1f8_u10kvx.c --function Sleef_expm1f8_u10kvx \
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
     0x1.dc33dap-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.58b4dep-70f, 0x1.b30542p-55f,
     0.0f, 0x1.cc5e66p-53f, 0x1.bb143ap-46f, 0x1.451914p-14f, 0x1.fe035p-18f, 0.0f,
     0.0f, 0.0f, 0x1.4520a2p-72f, 0x1.1a0004p-20f, 0.0f, 0x1.60dca4p-24f,
     0x1.61ac22p-23f, 0x1.58181ep-70f, 0.0f, 0.0f, 0.0f, 0x1.e1a9fp-73f,
     0x1.e52fb4p-112f, 0x1.2495p-56f, 0.0f, 0x1.2b34c6p-99f, 0x1.f7929p-69f, 0.0f,
     0x1.191706p-4f, 0x1.558e3ap-72f, 0x1.1315eap-114f, 0.0f, 0x1.9f014ap-65f,
     0x1.46e02ep-45f, 0x1.952d92p-99f, 0x1.f3784p-104f, 0x1.08a3cp-34f, 0.0f,
     0x1.1015bp-125f, 0.0f, 0x1.226a52p-60f, 0.0f, 0.0f, 0.0f, 0x1.5aa21ap-111f,
     0x1.c7a4p-51f, 0x1.394828p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.366d34p-102f,
     0.0f, 0.0f, 0.0f, 0x1.32aecep-122f, 0x1.6704aep-48f, 0x1.bb424cp-32f, 0.0f, 0.0f,
     0x1.266256p-46f, 0.0f, 0.0f, 0x1.f88354p-3f, 0.0f, 0x1.d38b86p-61f, 0.0f,
     0x1.cfeb6ep-32f, 0.0f, 0x1.9f171cp-83f, 0.0f, 0.0f, 0x1.cea8ecp-86f,
     0x1.392d34p-98f, 0x1.f507f2p-17f, 0x1.be7376p-122f, 0.0f, 0x1.f406d6p-11f, 0.0f,
     0.0f, 0.0f, 0x1.80957ep-73f, 0x1.9e4916p-42f, 0x1.39572p-11f, 0.0f,
     0x1.736b42p-72f, 0x1.75be54p-3f, 0.0f, 0x1.67fff8p-111f, 0x1.1f33bcp-57f,
     0x1.7ac0c4p-45f, 0.0f, 0.0f, 0.0f, 0x1.1fd29p-82f, 0.0f, 0x1.e79882p-110f,
     0x1.0a5b94p-111f, 0x1.08a5a4p-29f, 0.0f, 0x1.f778fp-105f, 0x1.544e96p-89f, 0.0f,
     0x1.6900f8p-113f, 0.0f, 0.0f, 0x1.b44b3ap-28f, 0x1.f0a61ep-62f, 0x1.6ff01ap-96f,
     0x1.9c6ae8p-115f, 0x1.8f837cp-2f, 0x1.c53678p-62f, 0.0f, 0x1.0f6412p-54f,
     0x1.1f3d82p-3f, 0.0f, 0x1.da410ap-64f, 0.0f, 0.0f, 0.0f, 0x1.fbe16ap-5f,
     0x1.aba9aap-13f, 0x1.24981cp-65f, 0x1.9347bcp-82f, 0x1.6ce2b2p-13f, 0.0f,
     0x1.ce944ep-64f, 0.0f, 0.0f, 0x1.e103ecp-106f, 0.0f, 0x1.fbe602p-110f, 0.0f,
     0x1.c26d94p-57f, 0.0f, 0x1.89409ep-109f, 0x1.37b35ep-47f, 0.0f, 0.0f, 0.0f,
     0x1.69b52ep-119f, 0.0f, 0.0f, 0.0f, 0x1.a82d92p-34f, 0.0f, 0x1.93cdbcp-117f,
     0x1.62057ep-26f, 0.0f, 0.0f, 0x1p0f, 0x1.61f3d2p-56f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.757cp-31f, 0x1.f694acp-33f, 0x1.492c62p-111f, 0.0f,
     0x1.0fd22ap-63f, 0x1.1dd14p-69f, 0x1.d9657cp-32f, 0x1.d06cdcp-81f, 0.0f, 0.0f,
     0x1.f2160ep-31f, 0.0f, 0.0f, 0x1.c3df2ap-15f, 0.0f, 0x1.f0b374p-121f,
     0x1.d23bbcp-73f, 0x1.fb49aep-14f, 0.0f, 0x1.d1c762p-126f, 0x1.2f4ba6p-17f, 0.0f,
     0.0f, 0x1p0f, 0x1.6d562ap-16f, 0.0f, 0.0f, 0.0f, 0x1.70b772p-112f, 0.0f, 0.0f,
     0.0f, 0x1.9e09b8p-116f, 0x1.37af06p-91f, 0x1.5b71a8p-51f, 0.0f, 0.0f,
     0x1.35041cp-73f, 0x1.074bdep-36f, 0.0f, 0.0f, 0x1.5e442cp-7f, 0x1.605034p-97f,
     0.0f, 0x1.dfe09ap-63f, 0.0f, 0.0f, 0.0f, 0x1.b610dp-54f, 0.0f, 0.0f,
     0x1.87c1a8p-21f, 0x1.f3a3c4p-115f, 0x1.9cfafp-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.db4f88p-113f, 0.0f, 0x1.9b0dcp-76f, 0x1.c3f5d8p-115f, 0x1.774b86p-66f,
     0x1.f6b162p-97f, 0.0f, 0.0f, 0x1.6da4b6p-113f, 0x1.4e7818p-16f, 0x1.4e923ep-9f,
     0x1.98521p-34f, 0x1.b7276p-64f, 0x1.7dfdb8p-42f, 0x1.c8e49p-32f, 0.0f,
     0x1.f67758p-40f, 0x1.ee27a4p-102f, 0x1.73ce22p-102f, 0x1.c0cc6p-31f,
     0x1.70541p-105f, 0.0f, 0.0f, 0.0f, 0x1.b441aap-74f, 0.0f, 0x1.a8891p-31f, 0.0f,
     0x1.50f3cap-49f, 0.0f, 0x1.88cd76p-85f, 0x1.b42f0ap-43f, 0.0f, 0x1.b6a598p-5f,
     0.0f, 0x1.fbab64p-39f, 0.0f, 0.0f, 0x1.d1248ap-83f, 0.0f, 0x1.13149p-19f, 0.0f,
     0x1.e6d07ep-93f, 0x1.d60e4cp-57f, 0x1.01900ap-41f, 0x1.eb6ecp-60f, 0.0f,
     0x1.56c8bp-73f, 0x1.58d942p-35f, 0.0f, 0.0f, 0.0f, 0x1.de419cp-96f,
     0x1.6b93fep-27f, 0x1.034798p-17f, 0x1.83135ap-2f, 0x1.38c68ep-70f,
     0x1.4beea6p-54f, 0x1.85797p-32f, 0.0f, 0.0f, 0.0f, 0x1.921284p-53f,
     0x1.21df08p-35f, 0x1.1a8b42p-56f, 0.0f, 0x1.dacbcep-27f, 0.0f, 0x1.cabee4p-26f,
     0x1.d35fe6p-61f, 0.0f, 0.0f, 0x1.73f1cp-6f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.425636p-34f, 0.0f, 0.0f, 0x1.c6352p-38f, 0.0f, 0x1.d9d4f4p-107f,
     0x1.ad0726p-65f, 0x1.f46424p-26f, 0x1.3abb5p-33f, 0x1.61bb0ep-109f,
     0x1.0b25dp-33f, 0x1.5aafa4p-107f, 0x1.d526aap-87f, 0.0f, 0.0f, 0x1.2d3852p-7f,
     0.0f, 0.0f, 0x1.7d7028p-77f, 0.0f, 0x1.5cfb78p-116f, 0.0f, 0.0f, 0.0f,
     0x1.471a74p-29f, 0.0f, 0.0f, 0.0f, 0x1.f405e8p-93f, 0x1.ae56cp-22f,
     0x1.3fe7ccp-118f, 0x1.46a02cp-40f, 0x1.4666a4p-17f, 0x1.c2d8aap-62f,
     0x1.53c278p-96f, 0.0f, 0x1.320a6cp-97f, 0x1.e54e16p-19f, 0x1.303af2p-84f,
     0x1.c6c626p-53f, 0.0f, 0.0f, 0.0f, 0x1.fabf48p-15f, 0x1.27964cp-107f,
     0x1.ec6f46p-68f, 0.0f, 0x1.d8dedp-100f, 0.0f, 0.0f, 0x1.81f49cp-77f,
     0x1.ac59c4p-16f, 0x1.f525aap-46f, 0.0f, 0x1.297686p-4f, 0.0f, 0x1.3e7888p-34f,
     0x1.d574cp-81f, 0x1.346bfcp-9f, 0.0f, 0.0f, 0x1.6f0efcp-4f, 0.0f,
     0x1.a0048ap-22f, 0x1.fc7e9cp-41f, 0x1.d72bdep-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.6671a2p-105f, 0.0f, 0x1.442796p-4f, 0.0f, 0x1.79286p-29f, 0.0f,
     0x1.d663c6p-31f, 0.0f, 0x1.7447f6p-71f, 0x1.b4bbb2p-108f, 0x1.682dc6p-113f,
     0x1.b3ca54p-63f, 0x1.b5d8c2p-47f, 0.0f, 0.0f, 0.0f, 0x1.7afbcp-116f,
     0x1.39972ap-124f, 0x1.08d9p-98f, 0.0f, 0.0f, 0x1.562182p-74f, 0.0f,
     0x1.855f52p-46f, 0x1.e1884ap-72f, 0.0f, 0x1.765f7ep-99f, 0.0f, 0.0f,
     0x1.1a368ap-115f, 0.0f, 0x1.3406fap-26f, 0x1.a2d12ep-105f, 0.0f,
     0x1.585c56p-125f, 0.0f, 0x1.3d3d0ap-64f, 0.0f, 0.0f, 0.0f, 0x1.c0709p-44f,
     0x1.f1b03ap-56f, 0x1.e6baaep-123f, 0.0f, 0x1.aec41p-14f, 0x1.726722p-64f, 0.0f,
     0x1.17daap-40f, 0x1.f34212p-77f, 0.0f, 0x1.562a1ap-21f, 0.0f, 0x1.a9ed9ap-51f,
     0.0f, 0x1.f0232cp-12f, 0x1.f5f7f8p-96f, 0.0f, 0x1.628be6p-41f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.fe1b78p-119f, 0x1.bb5fdep-65f, 0.0f, 0.0f, 0x1.ee7336p-101f, 0.0f,
     0x1.6431d4p-70f, 0.0f, 0.0f, 0x1.b9a47cp-40f, 0.0f, 0x1.18ab62p-47f, 0.0f,
     0x1.4ace48p-102f, 0.0f, 0.0f, 0x1.c9d782p-33f, 0x1.a35d96p-63f, 0x1.d99c84p-34f,
     0x1.c0f7d4p-64f, 0.0f, 0x1.82ad1ep-100f, 0x1.e6860ap-10f, 0x1.8074bp-42f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.8faadep-90f, 0x1.01ad74p-80f, 0x1.9626c6p-95f,
     0x1.389cc6p-35f, 0.0f, 0x1.833cb4p-6f, 0.0f, 0.0f, 0x1.ca5aa6p-55f,
     0x1.9a3ce4p-99f, 0.0f, 0x1.b22a3ep-32f, 0x1.5d4bb4p-89f, 0.0f, 0.0f, 0.0f,
     0x1.c4f80ep-110f, 0x1.f42fa6p-123f, 0x1.2e22cep-69f, 0x1.ececep-117f, 0.0f, 0.0f,
     0x1.0bf204p-83f, 0.0f, 0x1.b9a47ap-117f, 0x1.0d4984p-29f, 0x1.bc4696p-58f, 0.0f,
     0x1.552c78p-39f, 0.0f, 0x1.80136ep-58f, 0.0f, 0x1.9f9d34p-83f, 0x1.eab13ap-14f,
     0x1.084a08p-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2cb65p-73f, 0x1.b2366ep-60f, 0.0f,
     0.0f, 0.0f, 0x1.fce104p-92f, 0.0f, 0x1.cc0ee8p-56f, 0x1.45215p-99f, 0.0f, 0.0f,
     0.0f, 0x1.3f8032p-35f, 0x1.b0697cp-92f, 0.0f, 0x1.fc6dd4p-68f, 0x1.9b822ap-50f,
     0x1.df514ap-32f, 0.0f, 0.0f, 0.0f, 0x1.156a0cp-115f, 0.0f, 0x1.bdebbap-94f, 0.0f,
     0.0f, 0.0f, 0x1.cf48a2p-5f, 0x1.dd991p-69f, 0x1.4e5faep-114f, 0x1.2e51eep-87f,
     0x1.d4e6fp-1f, 0.0f, 0x1.48d1a8p-113f, 0x1.027486p-51f, 0x1.09369ap-27f,
     0x1.a92fc2p-26f, 0.0f, 0x1.3d8c82p-101f, 0.0f, 0.0f, 0x1.79ba9ep-91f,
     0x1.4d89acp-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.93ad32p-106f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.6685e6p-82f, 0x1.81930ep-33f, 0x1.54de36p-123f, 0.0f, 0.0f,
     0x1.1d70cp-68f, 0x1.52b47ep-20f, 0.0f, 0.0f, 0x1.63516ep-112f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.128df2p-35f, 0.0f, 0.0f, 0.0f, 0x1.e8add4p-70f, 0.0f, 0x1.84787p-117f,
     0.0f, 0x1.82c498p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5ad14ap-58f,
     0x1.087f0ep-67f, 0x1.7d3c78p-49f, 0x1.3d247ap-112f, 0.0f, 0x1.cda514p-19f,
     0x1.b9f54cp-35f, 0.0f, 0.0f, 0.0f, 0x1.7133e6p-113f, 0.0f, 0.0f, 0.0f,
     0x1.954e68p-76f, 0.0f, 0.0f, 0x1.d56c56p-63f, 0.0f, 0x1.fe5f4cp-122f, 0.0f,
     0x1.d2052cp-100f, 0.0f, 0x1.9b7634p-34f, 0.0f, 0.0f, 0x1.5e8224p-41f,
     0x1.9999aap-121f, 0x1.e15d8ep-72f, 0.0f, 0x1.bad9dp-58f, 0x1.2c39cap-116f,
     0x1.8e9fa2p-4f, 0x1.50302ap-32f, 0.0f, 0.0f, 0x1.dfdc66p-4f, 0x1.4003dap-115f,
     0x1.dc4c56p-43f, 0x1.3b594p-86f, 0.0f, 0x1.b488bp-47f, 0x1.6670fep-31f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.568ee8p-46f, 0x1.b6b844p-36f, 0x1.d685dcp-103f,
     0x1.1ea806p-126f, 0.0f, 0.0f, 0x1.cdada6p-35f, 0x1.e59a46p-77f, 0x1.ccad56p-115f,
     0.0f, 0x1.03a63p-101f, 0x1.b8e00ap-93f, 0.0f, 0.0f, 0.0f, 0x1.554456p-68f, 0.0f,
     0x1.43ed9p-80f, 0.0f, 0x1.dcd448p-65f, 0x1.8d485ep-123f, 0.0f, 0.0f,
     0x1.8c280ep-63f, 0.0f, 0.0f, 0x1.37cb6cp-13f, 0x1.78486ep-83f, 0x1.726b48p-35f,
     0x1.b3e17ap-89f, 0.0f, 0x1.834d6ap-85f, 0x1.5bfa74p-31f, 0.0f, 0x1.28ab1p-58f,
     0.0f, 0x1.f2dcccp-54f, 0x1.3f261cp-119f, 0.0f, 0.0f, 0x1.bb7f8p-95f,
     0x1.677bbp-51f, 0.0f, 0x1.f0f13ap-42f, 0.0f, 0x1.68b57cp-99f, 0x1.78e8acp-20f,
     0.0f, 0.0f, 0x1.2f236ep-24f, 0x1.e26596p-40f, 0.0f, 0.0f, 0x1.f00232p-29f, 0.0f,
     0x1.3b0fe6p-36f, 0x1.2e9d0ep-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f50836p-9f, 0x1.2c877p-35f, 0x1.9e0986p-4f, 0x1.82b676p-32f,
     0x1.fa72eep-124f, 0x1.93f712p-114f, 0x1.e1fcbp-107f, 0x1.aaeabcp-62f,
     0x1.7b8c2ap-62f, 0x1.78d1ep-125f, 0.0f, 0x1.e1188cp-95f, 0.0f, 0.0f,
     0x1.da6b8cp-67f, 0x1.b482b6p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.03ba52p-110f, 0.0f,
     0x1.740b76p-87f, 0.0f, 0x1.112d18p-29f, 0.0f, 0x1.96cdc8p-48f, 0.0f,
     0x1.cb20e6p-85f, 0x1.afbe14p-88f, 0x1.41cbe6p-13f, 0.0f, 0x1.3c9976p-27f, 0.0f,
     0.0f, 0x1.5c2bcep-10f, 0x1.428bb8p-24f, 0.0f, 0x1.bbe982p-34f, 0x1.f8ca26p-42f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3e6fd6p-103f, 0x1.624044p-63f, 0.0f, 0.0f,
     0x1.f82838p-14f, 0.0f, 0.0f, 0x1.22600ap-47f, 0x1.915cfap-58f, 0.0f,
     0x1.7fa2b2p-76f, 0.0f, 0x1.485f1p-122f, 0.0f, 0.0f, 0.0f, 0x1.757cc2p-81f,
     0x1.3ba6eap-14f, 0x1.cd7d2ep-73f, 0x1.f76e62p-105f, 0x1.0bcb96p-36f, 0.0f, 0.0f,
     0x1.5e526ap-120f, 0.0f, 0.0f, 0x1.388e1ap-5f, 0x1p0f, 0x1.bbfe12p-105f,
     0x1.c2cd6ep-121f, 0.0f, 0x1.e1c87cp-87f, 0.0f, 0x1.c5fdc6p-41f, 0x1.ee503p-3f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ee7bfp-124f, 0.0f, 0.0f, 0.0f, 0x1.36f106p-89f,
     0x1.e7df82p-82f, 0x1.82a2c8p-78f, 0.0f, 0.0f, 0.0f, 0x1.1fa5aap-3f,
     0x1.a8e5b8p-15f, 0x1.1c76e4p-78f, 0.0f, 0.0f, 0x1.d671f8p-107f, 0x1.54e12ep-47f,
     0.0f, 0.0f, 0x1.bc8ffap-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e56da4p-116f,
     0x1.60a82ap-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5dc0d6p-81f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e413dap-97f, 0x1.721184p-108f, 0x1.4ce31p-2f, 0.0f, 0x1p0f, 0.0f,
     0x1.92885ep-58f, 0x1.042612p-9f, 0.0f, 0x1.d11e0ep-87f, 0x1p0f, 0x1.adf32ap-17f,
     0x1.c9dc6ap-38f, 0x1.d8db42p-96f, 0.0f, 0x1.b56572p-99f, 0.0f, 0.0f, 0.0f,
     0x1.b6089p-87f, 0x1.317a68p-68f, 0.0f, 0x1.723174p-27f, 0x1.308fd4p-108f, 0.0f,
     0.0f, 0x1.ec22e6p-66f, 0x1.411eb8p-125f, 0.0f, 0x1.4bb866p-17f, 0.0f,
     0x1.53fa4ap-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.62b46ep-14f, 0x1.9c32bap-46f,
     0x1.9e97bcp-40f, 0.0f, 0.0f, 0x1.04967ap-56f, 0x1.5fae2p-81f, 0.0f, 0.0f, 0.0f,
     0x1.8e7048p-54f, 0.0f, 0.0f, 0x1.c7d19cp-100f, 0.0f, 0.0f, 0x1.90ea7p-96f,
     0x1.9f9234p-95f, 0x1.aa2cc4p-28f, 0.0f, 0x1.76069ep-7f, 0.0f, 0x1.c2e9dp-90f,
     0x1.c32f92p-52f, 0.0f, 0.0f, 0.0f, 0x1.56dca6p-13f, 0.0f, 0x1.34d28cp-1f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.13c5acp-55f, 0x1.4b21e8p-45f, 0x1.0b2bb4p-98f, 0.0f,
     0x1.20a65ep-125f, 0.0f, 0x1.cd9b1p-85f, 0x1.0129cep-70f, 0x1.efb7ecp-65f, 0.0f,
     0x1.8641dcp-61f, 0.0f, 0x1.c4ab9ep-111f, 0.0f, 0.0f, 0.0f, 0x1.d2d74cp-34f,
     0x1.e51c92p-20f, 0x1.8eb9e6p-73f, 0.0f, 0x1.dfec66p-104f, 0.0f, 0x1.3aa42p-18f,
     0x1.3fa71ap-99f, 0x1.27fedap-31f, 0x1.5fcd28p-63f, 0x1.c38692p-86f, 0.0f,
     0x1.2ab4p-123f, 0.0f, 0.0f, 0x1.fa4b4p-11f, 0x1.831b5ap-4f, 0.0f, 0.0f, 0.0f,
     0x1.fcc83ep-74f, 0x1.f07fa4p-33f, 0.0f, 0.0f, 0x1.50074cp-103f, 0.0f, 0.0f, 0.0f,
     0x1.3c73c4p-34f, 0x1.9adf56p-82f, 0.0f, 0x1.869d5ap-40f, 0x1.4323e6p-98f, 0.0f,
     0.0f, 0.0f, 0x1.541232p-74f, 0.0f, 0.0f, 0x1.cf7dcap-95f, 0x1.5a93b8p-52f,
     0x1.07cc2cp-12f, 0x1.8a34f6p-37f, 0x1.f765e6p-48f, 0x1.e11b12p-80f,
     0x1.f23dcp-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.47eb04p-6f, 0x1.1b6ab6p-73f,
     0x1.46a7ecp-75f, 0.0f, 0x1.00addp-116f, 0x1.c36edep-74f, 0x1.c6b524p-94f, 0.0f,
     0x1.623b8p-18f, 0x1.9b76bcp-125f, 0x1.4ada0ep-6f, 0.0f, 0x1.535e5ep-126f,
     0x1.a9b2bcp-37f, 0x1.b01fa4p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.108fe4p-38f, 0.0f,
     0.0f, 0x1.965b86p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.67ae9cp-9f, 0.0f,
     0x1.61f878p-11f, 0.0f, 0.0f, 0.0f, 0x1.a6ba8ep-13f, 0x1.cbf6dcp-73f,
     0x1.cf4f0ap-84f, 0.0f, 0x1.0f2a82p-65f, 0x1.5f85f2p-13f, 0x1.d64f92p-97f, 0.0f,
     0x1.04e532p-27f, 0.0f, 0x1.a83c6ap-63f, 0.0f, 0x1.678684p-84f, 0x1.f188bp-23f,
     0x1.ac2554p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c4b59ap-24f, 0x1.07f17p-80f,
     0x1.94dcecp-55f, 0x1.99f9bap-12f, 0x1.24b0f8p-31f, 0x1.b19cacp-24f
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
            tmp1 = Sleef_expm1f8_u10kvx(tmp0);
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
    printf("Sleef_expm1f8_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_expm1f8_u10kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
