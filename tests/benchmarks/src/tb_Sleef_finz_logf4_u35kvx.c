/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_logf4_u35kvx.c --function Sleef_finz_logf4_u35kvx \
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
     0.0f, 0.0f, 0x1.bf8c46p-96f, 0x1.f3776ap-40f, 0.0f, 0x1.3a2b52p-22f, 0.0f, 0.0f,
     0.0f, 0x1.085c04p-123f, 0x1.ad9ce2p-9f, 0.0f, 0x1.d9157p-83f, 0.0f,
     0x1.5e9ep-35f, 0.0f, 0x1.4f20eep-62f, 0x1.78e4bap-67f, 0x1.03a80cp-38f,
     0x1.857e96p-88f, 0.0f, 0.0f, 0x1.f8784cp-39f, 0.0f, 0x1.5c2e88p-19f, 0.0f, 0.0f,
     0.0f, 0x1.714da2p-21f, 0.0f, 0x1.fef2ep-20f, 0.0f, 0x1.00701ep-63f,
     0x1.355a3cp-48f, 0x1.cde51ep-36f, 0x1.670ae2p-60f, 0.0f, 0x1.b45f96p-26f,
     0x1.a31f54p-80f, 0.0f, 0x1.3702cap-43f, 0.0f, 0x1.7c2254p-118f, 0x1.3330f2p-5f,
     0.0f, 0x1.5ccfd6p-124f, 0.0f, 0.0f, 0x1.a42604p-15f, 0x1.ed3c04p-34f, 0.0f,
     0x1.ef459ap-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ef4d62p-26f, 0x1.ea5d3ap-89f,
     0x1.da3a48p-3f, 0.0f, 0x1.39460cp-109f, 0.0f, 0.0f, 0.0f, 0x1.6b1bf2p-20f, 0.0f,
     0.0f, 0x1.ebe634p-78f, 0.0f, 0x1.e1ac42p-126f, 0.0f, 0.0f, 0.0f, 0x1.2d055ap-57f,
     0.0f, 0x1.7b1aa2p-72f, 0x1.20ca5cp-56f, 0.0f, 0.0f, 0x1.81a31ap-78f, 0.0f,
     0x1.1f4cbep-106f, 0x1.a4057cp-30f, 0.0f, 0x1.8e2a56p-50f, 0x1.e2bed4p-10f, 0.0f,
     0x1.4db59p-80f, 0.0f, 0x1.287b04p-78f, 0x1.1f327p-50f, 0.0f, 0x1.1ed696p-79f,
     0x1.7afb7ap-22f, 0.0f, 0x1.22c2e8p-38f, 0x1.7f4904p-65f, 0.0f, 0x1.126ffp-14f,
     0x1.6c26b8p-70f, 0.0f, 0x1.a42928p-104f, 0x1.05b944p-59f, 0x1.8186aap-27f, 0.0f,
     0.0f, 0.0f, 0x1.8418b8p-55f, 0x1.9c0578p-117f, 0x1.77dea6p-51f, 0x1.87a73p-5f,
     0x1.ac5c98p-116f, 0.0f, 0x1.9bfe44p-111f, 0.0f, 0x1.ff272ep-14f,
     0x1.bfa3d2p-104f, 0x1.b800ecp-29f, 0x1.24555ap-63f, 0.0f, 0.0f, 0x1.6dbc9p-121f,
     0x1.9f6fb6p-94f, 0.0f, 0.0f, 0x1.fdc1fcp-22f, 0.0f, 0.0f, 0x1.1d4ad2p-31f,
     0x1.d36aa4p-43f, 0.0f, 0.0f, 0x1.fb524p-56f, 0x1.0443c8p-52f, 0x1.2d835ap-114f,
     0.0f, 0x1.42e3a8p-113f, 0.0f, 0x1.861bcp-33f, 0x1.2d036p-67f, 0x1.9c7074p-82f,
     0.0f, 0x1.89423cp-41f, 0x1.f0028ap-92f, 0x1.7d853ep-40f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.577c14p-64f, 0.0f, 0.0f, 0.0f, 0x1.99b904p-83f, 0.0f, 0x1.5945bp-104f, 0.0f,
     0.0f, 0x1.faf6f4p-76f, 0.0f, 0x1.4a0a8p-65f, 0.0f, 0x1.68e19ap-120f,
     0x1.e8cd6ep-71f, 0x1.cafb9ap-4f, 0.0f, 0.0f, 0x1.4e13b2p-37f, 0.0f, 0.0f, 0.0f,
     0x1.ba7f64p-42f, 0x1.fe6746p-74f, 0x1.acaa4cp-109f, 0x1.389518p-17f,
     0x1.c9f09ep-7f, 0x1.b9e6acp-53f, 0x1.44cc96p-42f, 0x1.3ccebep-10f,
     0x1.41997p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.62bd72p-78f, 0x1.8fba88p-56f,
     0x1.33ee1p-7f, 0x1.05fa0ep-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f423f8p-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.aac5c4p-11f, 0.0f, 0.0f, 0.0f,
     0x1.bfe4a2p-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.711ca6p-104f,
     0x1.9d551ep-82f, 0x1.9f7422p-10f, 0x1.c9f9ccp-72f, 0.0f, 0x1.6d8fep-34f,
     0x1.e7b69ap-101f, 0x1.3d2b14p-27f, 0x1.1b81e6p-61f, 0x1.cd3374p-63f,
     0x1.68b23p-25f, 0.0f, 0x1.9c1f0ep-88f, 0x1.12669cp-44f, 0x1.73fdf4p-68f, 0.0f,
     0.0f, 0x1.598cccp-122f, 0.0f, 0x1.a4dd46p-53f, 0x1.c0a44ep-104f, 0x1.142dd4p-12f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5e2248p-12f, 0x1.ca76eap-106f, 0x1.05d46ep-36f,
     0x1.c844dap-45f, 0.0f, 0.0f, 0x1.1bf324p-15f, 0.0f, 0x1.ea5d44p-33f,
     0x1.a456fap-83f, 0x1.c90a5ep-28f, 0.0f, 0x1.b88b76p-78f, 0x1.499712p-56f,
     0x1.323bcep-33f, 0.0f, 0.0f, 0x1.844256p-55f, 0x1.40af1p-75f, 0.0f, 0.0f, 0.0f,
     0x1.d6cd38p-67f, 0x1.6c6caep-44f, 0x1.7ad82cp-48f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bcc5f6p-110f, 0.0f, 0x1.72e468p-91f, 0.0f, 0x1.af51eap-37f, 0.0f, 0.0f,
     0x1.b93904p-12f, 0.0f, 0x1.f0b52ep-11f, 0x1.edb35cp-102f, 0.0f, 0x1.e7a03cp-62f,
     0x1.8f336ep-39f, 0x1.6f5bbep-118f, 0x1.f1f67p-3f, 0x1.7221ccp-37f, 0.0f, 0.0f,
     0x1.b6b5a8p-81f, 0.0f, 0x1.212d2ep-31f, 0x1.df40d4p-80f, 0x1.208292p-107f,
     0x1.43297p-77f, 0x1.1eb2acp-81f, 0.0f, 0x1.b9dceap-63f, 0.0f, 0x1.26d75ep-28f,
     0x1.8009bep-49f, 0x1.cef29cp-5f, 0x1.b6042ep-24f, 0x1.5aaa1ap-32f, 0.0f, 0.0f,
     0.0f, 0x1.f51d48p-116f, 0.0f, 0x1.e167d8p-1f, 0x1.9a98cep-14f, 0x1.f15156p-50f,
     0.0f, 0x1.c77662p-55f, 0.0f, 0x1.a4940cp-77f, 0.0f, 0x1.efa1fp-6f, 0.0f,
     0x1.41c28cp-102f, 0.0f, 0.0f, 0.0f, 0x1.90b1cep-52f, 0.0f, 0.0f, 0x1.093c92p-65f,
     0.0f, 0.0f, 0x1.331f3p-113f, 0.0f, 0x1.8dec6ep-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.784808p-88f, 0.0f, 0.0f, 0x1.c4934p-84f, 0.0f, 0x1.156068p-117f, 0.0f,
     0x1.95d3e2p-116f, 0.0f, 0.0f, 0x1.0e26d8p-92f, 0x1.7b764p-46f, 0x1.77992ap-79f,
     0.0f, 0x1.72e6e8p-87f, 0x1.c149dp-95f, 0x1.b33464p-49f, 0x1.efda6ep-88f, 0.0f,
     0.0f, 0x1.9b081ep-123f, 0.0f, 0.0f, 0x1.6295cep-43f, 0.0f, 0.0f, 0.0f,
     0x1.9ac354p-68f, 0x1.aaa5cap-87f, 0x1.9a9718p-20f, 0.0f, 0x1.6c2fe6p-58f,
     0x1.b3d6c8p-96f, 0.0f, 0.0f, 0.0f, 0x1.fe83c6p-122f, 0.0f, 0.0f, 0x1.b951e8p-97f,
     0.0f, 0.0f, 0.0f, 0x1.3b8b9ep-47f, 0.0f, 0x1.b42e2cp-49f, 0x1.e2bd3p-95f,
     0x1.e8c6b4p-90f, 0x1.c68f38p-75f, 0.0f, 0.0f, 0.0f, 0x1.cc7124p-53f, 0.0f,
     0x1.486094p-88f, 0.0f, 0x1.3f104ap-113f, 0.0f, 0.0f, 0x1.d73e7ep-111f, 0.0f,
     0x1.b7495ep-84f, 0.0f, 0.0f, 0x1.a15854p-112f, 0x1.e46966p-89f, 0x1.e079a8p-115f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.519d4ep-123f, 0.0f, 0.0f, 0x1.bb7c78p-126f, 0.0f,
     0.0f, 0.0f, 0x1.feb566p-85f, 0x1.da3d52p-82f, 0.0f, 0.0f, 0x1.65f2eap-49f, 0.0f,
     0x1.5f95cap-22f, 0x1.45b5fcp-59f, 0x1.20d67ap-121f, 0x1.88c7fp-105f,
     0x1.fe7384p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ed1d04p-124f, 0.0f, 0x1.ff9892p-109f,
     0x1.8cc2e4p-73f, 0.0f, 0x1.1f4478p-124f, 0.0f, 0x1.971422p-91f, 0.0f,
     0x1.947afcp-119f, 0x1.2cedb2p-102f, 0.0f, 0x1.914eaep-90f, 0x1.065c56p-63f,
     0x1.c6c27cp-28f, 0x1.ef28dep-15f, 0.0f, 0x1.c093b8p-56f, 0.0f, 0.0f, 0.0f,
     0x1.fa8b52p-104f, 0x1.71f1dcp-22f, 0x1.d97284p-52f, 0.0f, 0x1.e9f7bap-4f, 0.0f,
     0.0f, 0.0f, 0x1.077034p-46f, 0x1.f13a5ap-126f, 0x1p0f, 0x1.41ab1p-72f,
     0x1.125bc4p-86f, 0x1.6d7004p-47f, 0x1.4ef83p-23f, 0.0f, 0.0f, 0x1.30d834p-38f,
     0x1.c227b8p-9f, 0x1.17947ap-17f, 0.0f, 0.0f, 0x1.e4bb3cp-115f, 0x1.36274ep-90f,
     0.0f, 0x1.350c48p-14f, 0x1.0764a8p-75f, 0x1.83afbep-8f, 0.0f, 0x1.256076p-9f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dfd2bp-37f, 0x1.7f602p-103f,
     0x1.53f7e8p-79f, 0.0f, 0x1.9e0654p-125f, 0.0f, 0x1.4e9108p-116f, 0.0f,
     0x1.e2a524p-88f, 0x1.f9147ep-86f, 0.0f, 0x1.466ab2p-87f, 0x1.6c6b5ep-63f,
     0x1.fec6e4p-100f, 0.0f, 0x1.c2c3p-21f, 0x1.2b3a44p-33f, 0.0f, 0.0f,
     0x1.70faa4p-37f, 0x1.8b1bdp-43f, 0x1.417534p-77f, 0x1.c398dcp-94f, 0.0f,
     0x1.aefb94p-120f, 0x1.aa568cp-111f, 0x1.c4c896p-69f, 0x1.928738p-7f,
     0x1.717a32p-50f, 0x1.e31eap-117f, 0x1.b885bep-37f, 0x1.0c4c98p-23f,
     0x1.0ea28p-69f, 0x1.bf0a82p-29f, 0.0f, 0.0f, 0x1.930e98p-125f, 0.0f,
     0x1.15350cp-73f, 0.0f, 0x1.e8b23ap-24f, 0.0f, 0.0f, 0x1.20efe2p-108f,
     0x1.3d692ep-52f, 0x1.ac083ap-63f, 0x1.e5d0d6p-107f, 0x1.25e2fcp-50f,
     0x1.b96612p-18f, 0.0f, 0.0f, 0x1.9d5798p-90f, 0.0f, 0.0f, 0x1.215bbp-65f,
     0x1.479204p-70f, 0x1.625a0ap-37f, 0.0f, 0x1.ed1ac6p-56f, 0.0f, 0x1.ac6c2p-81f,
     0.0f, 0x1.66f294p-3f, 0.0f, 0.0f, 0x1.4bb564p-77f, 0x1.9d8b06p-119f, 0.0f, 0.0f,
     0x1.c1cad2p-9f, 0x1.ceeb24p-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.958276p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1be44ap-36f, 0.0f, 0.0f,
     0x1.960254p-102f, 0x1.4882a8p-34f, 0.0f, 0x1.aac202p-7f, 0x1.2a356p-68f,
     0x1.06c986p-34f, 0.0f, 0x1.2a68ccp-75f, 0x1.dd5188p-110f, 0x1.d2d73cp-14f, 0.0f,
     0x1.71a138p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.80b8eap-120f, 0.0f,
     0x1.8cfe8p-60f, 0.0f, 0.0f, 0.0f, 0x1.496bd2p-13f, 0.0f, 0x1.4ffd5ep-71f,
     0x1.7edadcp-99f, 0x1.6e5836p-71f, 0x1.bba41cp-78f, 0.0f, 0x1.114766p-68f, 0.0f,
     0x1.818218p-119f, 0.0f, 0x1.9189fp-75f, 0.0f, 0.0f, 0x1.df1a02p-14f,
     0x1.b4dc2cp-59f, 0.0f, 0x1.68118cp-96f, 0.0f, 0.0f, 0.0f, 0x1.026c06p-83f,
     0x1.af16b6p-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e5fd16p-98f, 0x1.18cf08p-7f,
     0x1.c2a2bp-22f, 0x1.c3c298p-86f, 0x1.5657eap-53f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b0d002p-105f, 0x1.8342d4p-77f, 0x1.ea3968p-30f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.06e8cep-107f, 0.0f, 0x1.226d84p-79f, 0.0f, 0.0f, 0.0f, 0x1.ce2568p-9f,
     0x1.2196b4p-57f, 0x1.43b39ap-42f, 0.0f, 0.0f, 0x1.a5ca12p-40f, 0x1.b03bdp-17f,
     0.0f, 0.0f, 0x1.ce61c8p-5f, 0.0f, 0x1.102674p-26f, 0x1.bb1e5ap-5f, 0.0f,
     0x1.bafb4ep-2f, 0x1.a8eca8p-2f, 0x1.c3621p-18f, 0.0f, 0x1.47306p-15f, 0.0f,
     0x1.5e3404p-1f, 0x1.4e24fap-88f, 0.0f, 0.0f, 0x1.8edc1p-32f, 0.0f,
     0x1.62dbccp-100f, 0x1p0f, 0x1.6a5a54p-90f, 0.0f, 0.0f, 0x1.27d5ep-48f, 0.0f,
     0x1.f10ae4p-9f, 0.0f, 0x1.98efb4p-113f, 0x1.c92a64p-53f, 0x1.d7204ap-123f, 0.0f,
     0.0f, 0x1.ab5e2ep-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2a0a2cp-1f, 0.0f, 0.0f,
     0x1.0af066p-60f, 0.0f, 0x1.d9ef86p-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1cca42p-89f, 0.0f, 0x1.083f5cp-101f, 0.0f, 0.0f, 0x1.a26ff2p-77f,
     0x1.0e05f6p-60f, 0.0f, 0x1.a04574p-64f, 0x1.854138p-27f, 0x1.ce26p-73f, 0.0f,
     0x1.bb536ap-4f, 0x1.d4dd4ep-126f, 0.0f, 0.0f, 0x1.b4ea52p-119f, 0x1.33517ep-115f,
     0x1.b2644ap-6f, 0.0f, 0x1.37a5cap-51f, 0x1.400a1ep-110f, 0x1.8e24d6p-104f, 0.0f,
     0x1.06cba8p-100f, 0.0f, 0x1.d23f48p-11f, 0.0f, 0.0f, 0x1.4bffbp-67f, 0.0f, 0.0f,
     0.0f, 0x1.a6afdp-109f, 0.0f, 0.0f, 0x1.355c4p-25f, 0.0f, 0.0f, 0x1.b53a72p-46f,
     0.0f, 0x1.82482cp-38f, 0.0f, 0x1.700f94p-24f, 0x1.9df5c2p-16f, 0.0f,
     0x1.6b8c8p-11f, 0.0f, 0.0f, 0.0f, 0x1.b8c2p-3f, 0x1.053bb6p-103f, 0.0f,
     0x1.d6bac4p-91f, 0.0f, 0x1.110a9p-105f, 0.0f, 0.0f, 0x1.73b74p-30f, 0.0f,
     0x1.a7e2bep-99f, 0x1.c7a236p-25f, 0.0f, 0x1.13b118p-111f, 0.0f, 0.0f,
     0x1.f4582cp-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ab046cp-6f,
     0.0f, 0x1.42e3e6p-57f, 0.0f, 0x1.ed2722p-122f, 0.0f, 0.0f, 0x1.0948a8p-19f,
     0x1.df74eep-108f, 0.0f, 0x1.b5869p-69f, 0.0f, 0x1.1d4f38p-26f, 0.0f, 0.0f,
     0x1.898986p-57f, 0x1.6fbf8ap-65f, 0.0f, 0x1.e4858p-16f, 0.0f, 0x1.1c7394p-37f,
     0x1.e06a14p-73f, 0x1.546676p-80f, 0x1.fe4298p-22f, 0x1.a82142p-86f,
     0x1.002d84p-5f, 0.0f, 0x1.9fda3ap-11f, 0x1p0f, 0x1.66c2cep-44f, 0x1.36ad18p-119f,
     0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b19e22p-126f,
     0x1.0b43acp-14f, 0.0f, 0x1.6dee46p-30f, 0x1.28e5bcp-73f, 0.0f, 0.0f,
     0x1.1d6506p-21f, 0x1.8373fcp-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fcf2bep-120f, 0.0f,
     0x1.59ab6cp-70f, 0x1.a1362p-95f, 0.0f, 0x1.9c6404p-98f, 0.0f, 0.0f,
     0x1.fb369ap-83f, 0x1.6d616ep-62f, 0.0f, 0x1.9846b6p-96f, 0.0f, 0x1.ed5e04p-22f,
     0.0f, 0x1.1d34p-4f, 0x1.526c82p-94f, 0x1.9fea36p-61f, 0.0f, 0x1.b9a4f2p-16f,
     0x1.199b08p-33f, 0x1.e23788p-24f, 0.0f, 0.0f, 0x1.4698cap-113f, 0x1.0661fep-15f,
     0x1.f18f8ap-61f, 0.0f, 0x1.c2c2d4p-96f, 0.0f, 0.0f, 0.0f, 0x1.b85e56p-48f,
     0x1.901616p-16f, 0x1.0f213cp-23f, 0.0f, 0.0f, 0x1.ec5306p-83f, 0x1.e3113p-45f,
     0.0f, 0.0f, 0x1.22cb4ep-97f, 0x1.63c69ep-76f, 0.0f, 0.0f, 0.0f, 0x1.983b7cp-56f,
     0x1.483bd4p-97f, 0x1.c6840ap-82f, 0.0f, 0x1.95a814p-51f, 0.0f, 0x1.3506b4p-118f,
     0.0f, 0x1.fd476ep-95f, 0.0f, 0x1.af998ep-12f, 0.0f, 0.0f, 0x1.bba5f4p-125f,
     0x1.24edbcp-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0a6d8cp-121f, 0x1.bf00bep-80f,
     0x1.6ec1f2p-15f, 0.0f, 0.0f, 0x1.87cfc8p-5f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.63aef4p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a32cd6p-89f, 0x1.28ebeap-67f, 0.0f,
     0.0f, 0x1.dffcdep-89f, 0.0f, 0x1.1e72fep-82f, 0.0f, 0x1.52842ap-38f, 0.0f,
     0x1.cff9c8p-18f, 0.0f, 0x1p0f, 0.0f, 0x1.75d38p-1f, 0x1.2c9922p-22f,
     0x1.4cd0f2p-14f, 0.0f, 0.0f, 0x1.f9cd1p-44f, 0x1.99520ap-52f, 0x1.d832cap-40f,
     0x1.25c2d8p-34f, 0x1.b8ef2ap-92f, 0.0f, 0.0f, 0x1.dca54ep-7f, 0x1.105afap-125f,
     0x1.2a91e8p-72f, 0x1.8a2ba6p-126f, 0.0f, 0x1.d3f194p-81f, 0x1.c38ecep-111f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.570756p-16f, 0x1.eb3862p-63f, 0.0f, 0x1.c63918p-126f,
     0x1.779cc2p-61f, 0.0f, 0.0f, 0.0f, 0x1.7ee5bap-67f, 0x1.9060cap-86f,
     0x1.59a144p-94f, 0x1.9e2462p-55f, 0.0f, 0.0f, 0x1.c5b72cp-91f, 0.0f, 0.0f,
     0x1.1ac97p-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.363bdap-104f, 0.0f, 0.0f,
     0x1.4d633ep-72f, 0.0f, 0x1.ac6c4ep-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1723a2p-76f, 0x1.4e50b8p-78f, 0x1.30bd06p-104f, 0.0f, 0x1.264212p-27f, 0.0f,
     0x1.d72eap-68f, 0x1.2489bp-83f, 0.0f, 0.0f, 0.0f, 0x1.519856p-5f, 0.0f,
     0x1.88461p-72f
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
            tmp1 = Sleef_finz_logf4_u35kvx(tmp0);
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
    printf("Sleef_finz_logf4_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_logf4_u35kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
