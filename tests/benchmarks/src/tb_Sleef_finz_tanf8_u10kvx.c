/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_tanf8_u10kvx.c --function Sleef_finz_tanf8_u10kvx \
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
     0.0f, 0x1.17134ap-59f, 0x1.da3bcap-40f, 0x1.6bfe34p-102f, 0.0f, 0.0f, 0.0f,
     0x1.7e1b4p-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.967428p-8f, 0.0f, 0.0f,
     0x1.774c02p-25f, 0.0f, 0x1.28c29p-27f, 0x1.6a7ebep-45f, 0.0f, 0x1.4f0d28p-2f,
     0x1.86d91ep-66f, 0x1.2fe1fcp-24f, 0x1.5b69fap-74f, 0x1.20df1cp-124f, 0.0f, 0.0f,
     0x1.f9797p-124f, 0x1.a4e712p-54f, 0.0f, 0x1.ccb108p-26f, 0.0f, 0x1.fd6e7ep-44f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.300fb8p-5f, 0.0f, 0.0f, 0.0f, 0x1.9d2c6p-122f,
     0x1.3cd9b2p-66f, 0.0f, 0x1.f4a03ep-61f, 0x1.3cdae8p-121f, 0x1.c8a57ap-89f, 0.0f,
     0.0f, 0x1.a99088p-119f, 0x1.c7e0f6p-24f, 0.0f, 0x1.6fdecap-60f, 0.0f,
     0x1.d546a6p-75f, 0.0f, 0.0f, 0.0f, 0x1.457652p-112f, 0.0f, 0.0f, 0.0f,
     0x1.8f50ccp-79f, 0x1.aac44ap-11f, 0.0f, 0.0f, 0x1.7c4804p-86f, 0x1.30327p-24f,
     0x1.2e6938p-89f, 0x1.0a2f1cp-14f, 0x1.abe458p-77f, 0x1.7f3a16p-9f, 0.0f, 0.0f,
     0.0f, 0x1.a7274ap-4f, 0x1.1c2cd4p-101f, 0.0f, 0x1.9accfp-54f, 0x1.5b7c92p-70f,
     0x1.785fccp-29f, 0.0f, 0x1p0f, 0x1.402bd8p-104f, 0.0f, 0x1.7e50e8p-56f, 0.0f,
     0x1.09c00ep-103f, 0x1.d5dc88p-87f, 0.0f, 0.0f, 0.0f, 0x1.12dbfap-26f,
     0x1.7111a4p-8f, 0.0f, 0.0f, 0x1.c9ed5p-19f, 0x1.4e6a2ap-83f, 0.0f,
     0x1.980552p-116f, 0x1.f18dc6p-93f, 0x1.302982p-27f, 0.0f, 0x1.2ccba4p-79f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.87cbf2p-51f, 0x1.916962p-106f, 0x1.9e11aap-82f,
     0x1.ca1778p-45f, 0x1.f4fe88p-30f, 0.0f, 0.0f, 0x1.215a74p-30f, 0.0f, 0.0f,
     0x1.75d054p-78f, 0.0f, 0.0f, 0x1.8a8dacp-69f, 0x1.ecec56p-72f, 0x1.2192aep-74f,
     0x1.7f19cep-29f, 0x1.65b38ep-35f, 0.0f, 0.0f, 0x1.00018ap-43f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.84922ep-8f, 0x1.7d7302p-11f,
     0.0f, 0x1.a52ddap-20f, 0x1.a4c44ep-119f, 0x1p0f, 0x1.1aa876p-83f, 0.0f, 0.0f,
     0x1.461394p-7f, 0.0f, 0x1.3f329ap-79f, 0x1.ebcbap-93f, 0.0f, 0x1.9c6ffap-47f,
     0x1.732c7p-15f, 0.0f, 0x1.43a77cp-113f, 0x1.69d99p-52f, 0x1.7457dcp-60f,
     0x1.4a9d52p-59f, 0.0f, 0.0f, 0.0f, 0x1.34c1cep-12f, 0.0f, 0.0f, 0x1.2440cp-87f,
     0x1.20d63ap-69f, 0.0f, 0x1.c97c26p-57f, 0.0f, 0x1.e314b4p-113f, 0.0f, 0.0f, 0.0f,
     0x1.c3150ap-18f, 0.0f, 0x1.66e0d8p-96f, 0.0f, 0.0f, 0x1.a3df6ap-86f, 0.0f, 0.0f,
     0x1.7ee486p-76f, 0.0f, 0.0f, 0x1.d4156p-90f, 0.0f, 0x1.2bcdbcp-24f,
     0x1.fc9f34p-5f, 0.0f, 0.0f, 0.0f, 0x1.51f814p-72f, 0.0f, 0x1.302e74p-126f,
     0x1.b96e04p-112f, 0x1.9f5a8ap-115f, 0.0f, 0x1.e77898p-2f, 0.0f, 0x1.def238p-74f,
     0x1.bfd00ap-39f, 0x1.eb6004p-15f, 0x1.6cfbb4p-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7d2a72p-114f, 0x1.79f034p-19f, 0x1.7c78a6p-31f, 0.0f, 0.0f, 0.0f,
     0x1.0363fap-45f, 0x1.6d67fcp-95f, 0x1.f41ef4p-2f, 0x1.a7ad46p-70f,
     0x1.6ad37cp-74f, 0.0f, 0.0f, 0x1.2f7aap-90f, 0.0f, 0x1.a2329ep-84f, 0.0f, 0.0f,
     0x1.ca557p-72f, 0x1.81cb6ap-47f, 0.0f, 0.0f, 0x1.c12feap-114f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.5cea34p-100f, 0x1.f60df8p-122f, 0.0f, 0x1.a5315ap-66f, 0.0f,
     0x1.14c042p-79f, 0x1.8aa2bap-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1bc4dep-79f,
     0.0f, 0.0f, 0.0f, 0x1.7f251ep-107f, 0x1.6853dep-27f, 0x1.a9145p-2f,
     0x1.82edd2p-20f, 0.0f, 0.0f, 0.0f, 0x1.c58beep-60f, 0x1.e3b726p-24f,
     0x1.a9d352p-3f, 0x1.2aa4e6p-112f, 0.0f, 0x1.449172p-61f, 0.0f, 0x1.a07e84p-93f,
     0.0f, 0x1.c5a35cp-28f, 0x1.bccc46p-106f, 0.0f, 0x1.599592p-6f, 0.0f, 0.0f,
     0x1.6e718ap-115f, 0.0f, 0x1.e8d16ap-15f, 0x1.bb25aep-54f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.06c126p-93f, 0x1.62f6c4p-17f, 0x1.667da2p-105f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1973a4p-11f, 0.0f, 0.0f, 0x1.f3deeap-1f, 0.0f, 0x1.77727ap-29f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.5eb046p-91f, 0x1.cf797p-44f, 0x1.77c022p-51f, 0.0f,
     0x1.661f38p-40f, 0x1.08bb9ep-79f, 0.0f, 0x1.57762ep-87f, 0x1.9af8d8p-13f, 0.0f,
     0.0f, 0x1.0841d2p-24f, 0.0f, 0.0f, 0.0f, 0x1.09e072p-7f, 0.0f, 0x1.466a34p-74f,
     0.0f, 0x1.152604p-60f, 0x1.2f6efep-31f, 0x1.fba66cp-52f, 0x1.6cafaep-23f,
     0x1.3e956ep-57f, 0x1.2428a2p-67f, 0x1.eb735ep-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ed7ad2p-83f, 0.0f, 0.0f, 0x1.550f2p-27f, 0x1.4de2ap-87f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c11f38p-111f, 0x1.05055ap-50f, 0x1.2281dcp-4f, 0.0f, 0.0f,
     0.0f, 0x1.dd4c52p-77f, 0x1.08f988p-47f, 0.0f, 0.0f, 0x1.c6c576p-12f, 0.0f,
     0x1.e61632p-124f, 0x1.7a3666p-49f, 0.0f, 0.0f, 0.0f, 0x1.1be0a6p-38f, 0.0f,
     0x1.6fae1ap-108f, 0.0f, 0x1.b7306ap-114f, 0.0f, 0x1.8641ap-12f, 0x1.a94c08p-104f,
     0x1.1f1206p-20f, 0.0f, 0.0f, 0x1.bf5a1p-114f, 0x1.e0c38cp-18f, 0x1.6678b6p-116f,
     0x1.f0108ap-109f, 0x1.97a29ep-17f, 0.0f, 0x1.bbba52p-97f, 0x1.03acfp-92f,
     0x1.4c3696p-2f, 0.0f, 0x1.7dbf3cp-90f, 0x1.1f87bep-47f, 0.0f, 0.0f,
     0x1.f76afp-16f, 0x1.c2d05ap-30f, 0x1.d3ea4ep-90f, 0.0f, 0.0f, 0x1.f900dcp-120f,
     0x1.50ca96p-17f, 0x1.974064p-116f, 0x1.b2b5b4p-53f, 0.0f, 0.0f, 0.0f,
     0x1.451f72p-56f, 0x1.32a61cp-28f, 0x1.7799f4p-99f, 0.0f, 0x1.4ae458p-12f,
     0x1.4680cp-114f, 0.0f, 0.0f, 0x1.5ab23ap-1f, 0.0f, 0.0f, 0.0f, 0x1.06dcf4p-86f,
     0x1.e88ea2p-58f, 0x1.3beb1ep-45f, 0x1.fb79c6p-47f, 0.0f, 0x1.87b32ep-126f,
     0x1.6e2f7p-34f, 0.0f, 0.0f, 0x1.aec486p-82f, 0x1.530ceap-59f, 0x1.677ff6p-94f,
     0x1.8c25c4p-72f, 0.0f, 0.0f, 0x1.dc9bf6p-118f, 0.0f, 0x1.847ac8p-106f, 0.0f,
     0.0f, 0x1.2dc0bep-106f, 0.0f, 0x1.0e9034p-125f, 0x1.5f902p-63f, 0.0f,
     0x1.ba9a16p-63f, 0x1.5b7d48p-67f, 0.0f, 0.0f, 0.0f, 0x1.789614p-22f,
     0x1.ea7a7ep-90f, 0x1.aef158p-7f, 0.0f, 0x1.951a36p-53f, 0.0f, 0x1.b5da06p-118f,
     0.0f, 0x1.126c32p-62f, 0x1.8392e2p-7f, 0.0f, 0.0f, 0x1.4eb128p-90f,
     0x1.b352f4p-67f, 0.0f, 0x1.a11d68p-93f, 0.0f, 0x1.82e224p-57f, 0x1.d190cap-29f,
     0.0f, 0x1.d21606p-90f, 0.0f, 0.0f, 0.0f, 0x1.339bfp-120f, 0x1.7bb29ap-101f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6a13e8p-71f, 0.0f, 0.0f, 0.0f, 0x1.91e868p-32f,
     0x1.399b1ep-40f, 0x1.902e4p-99f, 0.0f, 0x1.f9c32cp-21f, 0.0f, 0x1.268d98p-85f,
     0.0f, 0x1.b2af8p-86f, 0.0f, 0x1.142628p-64f, 0x1.daa9cp-61f, 0.0f,
     0x1.43385p-69f, 0.0f, 0.0f, 0x1.964d0cp-104f, 0.0f, 0x1.990074p-13f, 0.0f,
     0x1.757b5ap-25f, 0x1.ae825cp-67f, 0x1.7dab26p-45f, 0.0f, 0.0f, 0x1.de0914p-93f,
     0.0f, 0.0f, 0x1.a87e98p-8f, 0.0f, 0x1.7a6bcp-36f, 0x1.cd6fc2p-23f,
     0x1.e260d4p-51f, 0.0f, 0.0f, 0.0f, 0x1.874a8ep-66f, 0.0f, 0x1.44fa6ap-47f,
     0x1.a2f49ep-108f, 0x1.d9185ep-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fa3feep-79f,
     0x1.3ac9b4p-28f, 0.0f, 0x1.92c522p-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.3890ecp-58f, 0x1.188f4cp-74f, 0x1.b3c7c4p-79f, 0x1.b89ae4p-108f, 0.0f,
     0.0f, 0.0f, 0x1.e12092p-17f, 0x1.99e432p-36f, 0x1.072efp-70f, 0x1.fbe70ap-34f,
     0.0f, 0.0f, 0.0f, 0x1.9734c4p-67f, 0.0f, 0.0f, 0.0f, 0x1.d46caap-99f, 0.0f,
     0x1.8d8894p-110f, 0.0f, 0.0f, 0.0f, 0x1.8390eep-8f, 0.0f, 0x1.1f830ap-41f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.4c6286p-6f, 0x1.7816b4p-64f, 0.0f, 0x1.c5f1b2p-32f,
     0.0f, 0x1.eb1d14p-25f, 0x1.a7a11ep-20f, 0x1.8f6abp-93f, 0.0f, 0x1.6224eep-30f,
     0.0f, 0.0f, 0x1.ea6572p-77f, 0x1.6e7baep-116f, 0x1.ad70d6p-66f, 0.0f,
     0x1.18d1bep-71f, 0.0f, 0.0f, 0x1.529252p-33f, 0x1.53e2eap-120f, 0.0f, 0.0f,
     0x1.be153ap-78f, 0.0f, 0x1.47745ep-38f, 0.0f, 0.0f, 0.0f, 0x1.63c65ep-119f,
     0x1.416a96p-112f, 0.0f, 0x1.c96408p-60f, 0.0f, 0x1.496e9p-76f, 0.0f,
     0x1.a2bbeap-41f, 0x1.294e3p-25f, 0x1.aec54ap-77f, 0x1.9497d8p-82f, 0.0f,
     0x1.7022c4p-14f, 0x1.4e8adp-92f, 0x1.276d6ep-75f, 0x1.089de2p-109f,
     0x1.0c82bcp-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7f8626p-81f,
     0x1.d3db7ap-6f, 0x1.6d97c6p-37f, 0x1.d93386p-115f, 0.0f, 0x1.37da8p-62f, 0.0f,
     0x1.cc110ap-104f, 0x1.443e1cp-101f, 0.0f, 0x1.a727eep-122f, 0x1.d27202p-88f,
     0x1.8dd23ep-35f, 0.0f, 0.0f, 0.0f, 0x1.1eafe6p-74f, 0.0f, 0.0f, 0x1.781884p-26f,
     0.0f, 0x1.1d0e38p-20f, 0.0f, 0.0f, 0x1.222294p-79f, 0.0f, 0x1.6834ecp-20f, 0.0f,
     0x1.3bf8fcp-22f, 0.0f, 0.0f, 0.0f, 0x1.db7d0ap-100f, 0.0f, 0.0f, 0x1.fe6ea2p-54f,
     0.0f, 0.0f, 0.0f, 0x1.15e5e6p-109f, 0.0f, 0x1.9f6536p-2f, 0.0f, 0x1.839564p-105f,
     0.0f, 0.0f, 0x1.1771d6p-22f, 0.0f, 0x1.cb0d4ap-17f, 0x1.5459f8p-90f, 0.0f,
     0x1.5217ep-99f, 0.0f, 0x1.2a762ep-8f, 0x1.6a32fap-90f, 0.0f, 0.0f,
     0x1.e20c2cp-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.990086p-48f, 0.0f,
     0x1.a4bc58p-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d46284p-10f, 0x1.4f9a7ep-42f, 0.0f,
     0x1.ee9042p-83f, 0.0f, 0.0f, 0x1.9490c8p-77f, 0x1.a103c2p-28f, 0x1.16aa76p-76f,
     0.0f, 0.0f, 0x1.197802p-5f, 0.0f, 0.0f, 0x1.b3d19cp-4f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b007fap-102f, 0x1.9559cap-53f, 0.0f, 0x1.ff4a8ep-71f, 0.0f,
     0x1.e41ca6p-11f, 0.0f, 0.0f, 0.0f, 0x1.b16a6ap-48f, 0.0f, 0x1.b03512p-70f,
     0x1.55637cp-110f, 0.0f, 0.0f, 0.0f, 0x1.358c92p-85f, 0x1.928a54p-76f,
     0x1.4e666p-83f, 0x1.670566p-30f, 0x1.7a5b38p-19f, 0x1.82c488p-52f, 0.0f, 0.0f,
     0x1.2d7a7p-30f, 0x1.546094p-1f, 0.0f, 0.0f, 0.0f, 0x1.f6424ap-77f,
     0x1.65e088p-112f, 0x1.d1cb64p-115f, 0x1.d47a62p-36f, 0x1.a7c2d8p-25f, 0.0f,
     0x1.4db362p-10f, 0.0f, 0.0f, 0.0f, 0x1.ac8014p-102f, 0.0f, 0x1.31bdd8p-6f,
     0x1.bca142p-51f, 0.0f, 0.0f, 0.0f, 0x1.8e4a3ep-83f, 0x1.e3852cp-63f, 0.0f,
     0x1.f306fp-45f, 0x1.8455e6p-70f, 0x1.4f71b8p-33f, 0x1.6c8b02p-111f, 0.0f, 0.0f,
     0.0f, 0x1.72216ap-27f, 0.0f, 0.0f, 0.0f, 0x1.16f06p-78f, 0x1.90b47cp-106f,
     0x1.ed09ap-99f, 0.0f, 0.0f, 0x1.f02a2p-53f, 0.0f, 0.0f, 0.0f, 0x1.37625ap-25f,
     0x1.bda8e4p-126f, 0x1.19dc5ap-36f, 0x1.080f68p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e33d92p-103f, 0.0f, 0x1.784b26p-119f, 0x1.467d2ap-28f,
     0x1.92bb68p-30f, 0x1.2c3e06p-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b11a78p-96f, 0.0f, 0x1.0cc42ap-114f, 0.0f, 0.0f, 0.0f,
     0x1.5fdee2p-104f, 0x1.15bdaap-64f, 0.0f, 0x1.f43c3cp-59f, 0x1.910ba2p-32f,
     0x1.77b5fap-115f, 0.0f, 0x1.63ea72p-53f, 0x1.222cfep-58f, 0x1.21f83ap-109f, 0.0f,
     0x1.850584p-72f, 0x1p0f, 0.0f, 0x1.e919dep-119f, 0x1.916868p-124f,
     0x1.78ccd2p-122f, 0x1.fa4808p-88f, 0.0f, 0x1.69a84p-49f, 0x1.7ec554p-82f, 0.0f,
     0x1.392e2ep-13f, 0x1.84147cp-23f, 0x1.979d76p-112f, 0x1.15e042p-28f, 0.0f,
     0x1.45f96ep-101f, 0x1.54bd82p-92f, 0x1.dbf2d4p-55f, 0.0f, 0x1.6c45e4p-91f,
     0x1.1c7e9cp-114f, 0.0f, 0.0f, 0x1.095bc4p-35f, 0.0f, 0x1.10d49ep-35f,
     0x1.c2f0a8p-89f, 0x1.0ccfd6p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.06c822p-117f,
     0x1.596388p-86f, 0x1.dbacc8p-125f, 0x1.939f4cp-9f, 0.0f, 0x1.204a7ap-97f,
     0x1.6aaa92p-109f, 0x1.c58778p-91f, 0x1.126162p-54f, 0.0f, 0.0f, 0x1.a3ccd8p-17f,
     0x1.1014aap-25f, 0.0f, 0x1.c4c5e6p-66f, 0.0f, 0.0f, 0.0f, 0x1.3f1a4p-47f,
     0x1.f824e2p-75f, 0x1.2abfb2p-89f, 0x1.8c90dcp-89f, 0.0f, 0.0f, 0x1.8d1ca6p-52f,
     0.0f, 0.0f, 0x1.5a2db6p-58f, 0x1.c97dap-88f, 0x1.ba474ep-99f, 0.0f,
     0x1.a854b8p-80f, 0.0f, 0x1.4c6bfp-39f, 0x1.13939cp-2f, 0x1.d519bep-105f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.97fbfap-26f, 0x1.95025ep-116f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7318b2p-93f, 0.0f, 0.0f, 0x1.962c36p-108f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.08640ep-30f, 0x1.ed546p-33f, 0.0f, 0.0f, 0.0f,
     0x1.467c2ap-96f, 0.0f, 0x1.def72cp-38f, 0x1.39dfc8p-49f, 0x1.800284p-87f, 0.0f,
     0x1.78c5bep-110f, 0.0f, 0.0f, 0x1.486d34p-79f, 0.0f, 0.0f, 0.0f, 0x1.d66b52p-11f,
     0x1.68bdd8p-91f, 0.0f, 0.0f, 0x1.995386p-35f, 0x1.409c4cp-9f, 0.0f,
     0x1.f0536cp-95f, 0.0f, 0x1.8e2fe6p-62f, 0.0f, 0x1.208e3ep-47f, 0x1.6e41b4p-117f,
     0.0f, 0.0f, 0x1.cec38cp-37f, 0.0f, 0x1.743006p-122f, 0.0f, 0x1.606af8p-25f, 0.0f,
     0x1.09e5fep-50f, 0.0f, 0x1.bb8da2p-76f, 0.0f, 0.0f, 0x1.6ff10ap-65f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bfaecp-55f, 0x1.d74b1ap-107f, 0x1.257b6ep-43f,
     0x1.daec5ep-10f, 0x1.a2bb46p-108f, 0.0f, 0x1.403314p-86f, 0x1.c6c06p-45f,
     0x1.0e51fp-6f, 0x1.5c1234p-8f, 0.0f, 0.0f, 0x1.6239eap-99f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.67cd42p-11f, 0.0f, 0.0f, 0x1.c774aep-83f, 0x1.d005fcp-80f, 0.0f,
     0.0f, 0.0f, 0x1.ec5daep-121f, 0x1.a2f966p-93f, 0.0f, 0x1.ad8e12p-36f,
     0x1.131ff8p-115f, 0x1.7afffep-96f, 0.0f, 0.0f, 0x1.1fe658p-78f, 0x1.cd3032p-123f,
     0.0f, 0.0f, 0.0f, 0x1.3cdacap-6f, 0.0f, 0x1.16766cp-19f, 0x1.28654cp-92f
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
            tmp1 = Sleef_finz_tanf8_u10kvx(tmp0);
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
    printf("Sleef_finz_tanf8_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_finz_tanf8_u10kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
