/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_asinhf4_u10avx2128.c --function \
 *     Sleef_finz_asinhf4_u10avx2128 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 4 --function-input-vector-size \
 *     4 --bench --no-embedded-bin --target x86_avx2128
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
     0x1.357a54p-11f, 0.0f, 0.0f, 0x1.eb91f8p-92f, 0x1.9c370cp-4f, 0.0f, 0.0f,
     0x1.ca38bap-19f, 0x1.5a6a12p-17f, 0.0f, 0.0f, 0x1.439678p-104f, 0.0f, 0.0f,
     0x1.115f74p-23f, 0x1.86386p-85f, 0.0f, 0x1.659f9cp-28f, 0.0f, 0x1.7df59ap-106f,
     0.0f, 0.0f, 0x1.27f14ap-3f, 0x1.7b655p-7f, 0x1.854bap-60f, 0.0f, 0.0f,
     0x1.3b39fp-64f, 0x1.cb8a1p-97f, 0x1.c800ecp-43f, 0x1.35d432p-90f,
     0x1.b14d74p-109f, 0.0f, 0x1.603566p-77f, 0.0f, 0x1.21574p-97f, 0x1.eb2b34p-24f,
     0x1.1f80d4p-124f, 0.0f, 0x1.f085e4p-111f, 0x1.a48a12p-46f, 0.0f, 0x1.eb2c9p-125f,
     0x1.6bcc3ap-101f, 0.0f, 0x1.207ee2p-92f, 0x1.946d38p-65f, 0.0f, 0.0f,
     0x1.20405p-41f, 0.0f, 0x1.9a235p-70f, 0.0f, 0x1.ab4772p-12f, 0x1.277e6ap-78f,
     0x1.9ffe7ep-38f, 0x1.f729dap-5f, 0x1.efe878p-77f, 0x1.31215p-49f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.4bf18p-7f, 0x1.733686p-20f, 0.0f, 0x1.fa835ep-28f,
     0x1.c9ffeap-96f, 0x1.2d607cp-34f, 0x1.2052f4p-117f, 0x1.30d6fp-34f, 0.0f,
     0x1.870726p-98f, 0x1.10d3dp-21f, 0.0f, 0.0f, 0.0f, 0x1.240f78p-5f, 0.0f,
     0x1.8f535p-47f, 0.0f, 0x1.c51a0ap-122f, 0.0f, 0.0f, 0.0f, 0x1.885a5p-51f,
     0x1.2c73d4p-25f, 0x1.47d888p-105f, 0.0f, 0.0f, 0.0f, 0x1.af66dap-31f,
     0x1.ca68bap-109f, 0.0f, 0.0f, 0x1.2dd6fap-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4141bcp-88f, 0.0f, 0x1.16dc1ap-114f, 0.0f, 0.0f, 0x1.835236p-48f, 0.0f, 0.0f,
     0x1.d14bd8p-87f, 0.0f, 0x1.48b2b6p-32f, 0x1.930d54p-27f, 0.0f, 0.0f,
     0x1.7663c6p-66f, 0.0f, 0.0f, 0x1.82d9cap-28f, 0x1.60be1ap-27f, 0x1.53da12p-17f,
     0x1.51ee38p-113f, 0.0f, 0x1.788cb4p-16f, 0.0f, 0x1.6b80a8p-26f, 0.0f, 0.0f, 0.0f,
     0x1.ebd0b4p-112f, 0.0f, 0x1.c502a2p-46f, 0.0f, 0x1.879d4ep-83f, 0.0f,
     0x1.eff0c6p-12f, 0x1.e03fccp-91f, 0x1.0a4ff2p-6f, 0.0f, 0.0f, 0x1.35d67ap-2f,
     0.0f, 0x1.3596dp-18f, 0.0f, 0x1.8208b6p-59f, 0x1.61bb7ep-76f, 0x1.76382p-112f,
     0x1.fc7a4cp-96f, 0.0f, 0.0f, 0x1.499312p-97f, 0x1.c30a1ap-115f, 0x1.a7449p-1f,
     0.0f, 0.0f, 0x1.bc6b6p-7f, 0x1.521b26p-18f, 0.0f, 0x1.21929ap-63f, 0.0f, 0.0f,
     0.0f, 0x1.76151p-7f, 0x1.6cc04cp-47f, 0.0f, 0x1.4bfecap-41f, 0x1.659cdep-52f,
     0x1.4085d4p-100f, 0x1.b75112p-51f, 0.0f, 0.0f, 0.0f, 0x1.c090fep-23f,
     0x1.b300a8p-14f, 0.0f, 0.0f, 0x1.3a6118p-10f, 0.0f, 0x1.148682p-2f, 0.0f,
     0x1.4b416p-114f, 0x1.197994p-102f, 0.0f, 0.0f, 0x1.765716p-99f, 0.0f, 0.0f,
     0x1.cc0c9ep-31f, 0x1.6ca15ap-98f, 0.0f, 0.0f, 0x1.86de78p-44f, 0x1.a3c0d6p-19f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c293e2p-47f, 0.0f, 0x1.47ea2cp-105f,
     0x1.d09d4ap-97f, 0x1.d23d46p-7f, 0.0f, 0x1.03d8cp-83f, 0x1.c32362p-23f,
     0x1.067c2cp-38f, 0.0f, 0.0f, 0x1.144416p-61f, 0.0f, 0.0f, 0.0f, 0x1.47f52ap-84f,
     0.0f, 0.0f, 0x1.9bb678p-44f, 0x1.cd0734p-66f, 0x1.0609cp-65f, 0.0f, 0.0f,
     0x1.64153cp-80f, 0.0f, 0x1.fa799cp-6f, 0x1.5ebf64p-44f, 0x1.2f64bp-83f,
     0x1.fc7016p-54f, 0x1.1e254cp-12f, 0.0f, 0x1.982d52p-49f, 0.0f, 0x1.056cb2p-102f,
     0.0f, 0x1.7da032p-65f, 0.0f, 0x1.9ae2bap-40f, 0x1.f8ae5ep-71f, 0.0f,
     0x1.f4977p-40f, 0x1.a41374p-120f, 0.0f, 0.0f, 0.0f, 0x1.e457c4p-17f,
     0x1.98c3b4p-5f, 0.0f, 0.0f, 0.0f, 0x1.c97ce4p-118f, 0x1.0a5e54p-48f, 0.0f, 0.0f,
     0x1.7f37a6p-87f, 0.0f, 0x1.2c1888p-71f, 0.0f, 0x1.f95e82p-7f, 0.0f,
     0x1.ecc64ep-13f, 0.0f, 0x1.0cb48cp-86f, 0.0f, 0x1.eb5066p-63f, 0x1.ae214ep-2f,
     0x1.b584dep-72f, 0.0f, 0x1.17d1f4p-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e18b5ap-44f, 0.0f, 0x1.b988b4p-73f, 0x1.eaa62ep-76f, 0x1.04ce88p-66f, 0.0f,
     0.0f, 0x1.ae61f2p-52f, 0.0f, 0.0f, 0x1.d49cc6p-78f, 0x1.4573a4p-73f,
     0x1.1d84d4p-86f, 0x1.5ddaap-84f, 0x1.8b764p-114f, 0.0f, 0x1.acb696p-18f,
     0x1.6289c4p-50f, 0x1.7150dp-100f, 0x1.3c9e14p-26f, 0x1.955504p-36f, 0.0f, 0.0f,
     0.0f, 0x1.73a672p-98f, 0x1.86894ep-117f, 0.0f, 0.0f, 0.0f, 0x1.a3a0bp-105f, 0.0f,
     0.0f, 0x1.bda18ap-8f, 0x1.03368cp-26f, 0x1.cf89bp-126f, 0x1.7cda0cp-113f,
     0x1.2f404ap-28f, 0x1.2bf3e4p-22f, 0.0f, 0x1.80eb0ep-85f, 0x1.fcde16p-36f, 0.0f,
     0x1.daaecep-5f, 0x1.d98de4p-58f, 0x1.1b3768p-87f, 0x1.1817dcp-74f,
     0x1.af623cp-18f, 0x1.7ba854p-61f, 0x1.35996cp-12f, 0.0f, 0x1.8dfbccp-63f, 0.0f,
     0.0f, 0.0f, 0x1.3efb6p-119f, 0.0f, 0.0f, 0x1.f25b6p-110f, 0x1.ed6632p-1f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.1d0742p-78f, 0x1.ffe9a8p-115f, 0.0f, 0x1.a59002p-30f,
     0x1.46d6bep-45f, 0.0f, 0x1.c9a668p-19f, 0.0f, 0x1.b2ef26p-111f, 0x1.caeb3ep-74f,
     0.0f, 0x1.0e2ce2p-44f, 0x1.7d6c24p-31f, 0.0f, 0x1.132ae8p-14f, 0.0f,
     0x1.982c04p-85f, 0.0f, 0.0f, 0x1.99e954p-21f, 0x1.e0589cp-85f, 0x1.d5a04ap-48f,
     0.0f, 0x1.b61be6p-106f, 0.0f, 0.0f, 0x1.594eaap-17f, 0.0f, 0.0f, 0x1.4415fp-28f,
     0x1.09d224p-14f, 0x1.9b7bc4p-44f, 0.0f, 0.0f, 0x1.fbd9ap-110f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.145c3ep-65f, 0.0f, 0.0f, 0x1.f00a7ep-8f, 0x1.0dcf54p-48f, 0.0f, 0.0f,
     0x1.c2743p-68f, 0.0f, 0.0f, 0x1.04f9dap-44f, 0x1.6f8ceep-33f, 0.0f, 0.0f,
     0x1.2881f4p-29f, 0.0f, 0.0f, 0x1.afd96cp-114f, 0.0f, 0.0f, 0.0f,
     0x1.4784e6p-119f, 0.0f, 0.0f, 0x1.2fe8f2p-59f, 0.0f, 0x1.f288ap-120f, 0.0f,
     0x1.e8d202p-85f, 0x1.28627ep-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7ae132p-22f,
     0x1.e9683p-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b6b92ap-104f, 0x1.ebbe2ap-40f,
     0.0f, 0x1.94c6bp-29f, 0.0f, 0.0f, 0x1.c33048p-5f, 0x1.282c16p-90f, 0.0f,
     0x1.1f6a48p-110f, 0.0f, 0x1.248eeap-66f, 0.0f, 0x1.c1bd32p-82f, 0x1.3a38b2p-47f,
     0x1.4ca4bp-23f, 0x1.c68416p-95f, 0x1.6e30d2p-86f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a5f508p-44f, 0x1.84ae36p-124f, 0.0f, 0.0f, 0x1.ef4324p-72f, 0x1.eb1a78p-90f,
     0x1.6ebfccp-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.56619cp-65f, 0.0f, 0.0f,
     0x1.fd060ap-46f, 0.0f, 0x1.049542p-45f, 0.0f, 0x1.add496p-49f, 0x1.2e448ap-102f,
     0.0f, 0x1.b7565ap-70f, 0.0f, 0.0f, 0x1.4a2c8cp-59f, 0x1.1a15d8p-69f,
     0x1.6b1c5cp-112f, 0.0f, 0x1.b025cep-78f, 0.0f, 0x1.5fb7acp-12f, 0x1.1e0beap-100f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.14f35p-82f, 0.0f, 0x1.932a42p-27f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e484eep-19f, 0x1.5ae4f4p-114f, 0.0f, 0.0f, 0x1.8b5f42p-86f, 0.0f,
     0x1.393026p-87f, 0.0f, 0.0f, 0x1.4822cep-118f, 0x1.9209e8p-42f, 0x1.62b1c8p-17f,
     0x1.1a18bcp-94f, 0.0f, 0x1.f497f4p-27f, 0x1.3d552cp-8f, 0.0f, 0x1.f3a76cp-6f,
     0.0f, 0x1.410016p-120f, 0x1.a51b64p-48f, 0.0f, 0x1.a8c8dep-118f, 0.0f,
     0x1.dabb86p-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.71e516p-114f, 0x1.2c7d2p-86f, 0.0f,
     0.0f, 0.0f, 0x1.5529f2p-41f, 0.0f, 0x1.2d9c98p-78f, 0x1.e7f796p-66f,
     0x1.7b5cdcp-62f, 0x1.9ab3dcp-1f, 0.0f, 0x1.b9b90ep-59f, 0x1.fc8d7ep-65f,
     0x1.960ccp-81f, 0x1.596792p-26f, 0x1.ce907p-65f, 0x1.b4d1d4p-67f, 0.0f,
     0x1.a4ad42p-76f, 0x1.ddda6p-42f, 0.0f, 0x1.1a0eaep-26f, 0.0f, 0.0f, 0.0f,
     0x1.a77112p-48f, 0x1.439566p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9afa5p-84f, 0.0f, 0.0f, 0x1.fc534cp-38f, 0.0f, 0.0f, 0.0f, 0x1.d68b4ap-40f,
     0x1.359156p-77f, 0x1.34f6dep-111f, 0x1.ba4f76p-107f, 0.0f, 0x1.d49f5ap-74f, 0.0f,
     0x1.2311d6p-116f, 0.0f, 0.0f, 0x1.421c82p-115f, 0.0f, 0x1.9272aep-8f,
     0x1.ba2192p-106f, 0.0f, 0x1.3de964p-20f, 0.0f, 0.0f, 0x1.e4d952p-4f, 0.0f, 0.0f,
     0.0f, 0x1.ecfa4p-112f, 0x1.9b3acp-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.12be54p-50f,
     0x1.864dfp-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.064dep-2f, 0x1.86069ep-26f,
     0x1.bcbb22p-79f, 0.0f, 0.0f, 0x1.e13f5p-53f, 0x1.4b19ap-58f, 0x1.c67e4cp-33f,
     0x1.08b624p-48f, 0.0f, 0.0f, 0x1.0cc56ap-7f, 0.0f, 0.0f, 0.0f, 0x1.6ec196p-72f,
     0.0f, 0x1.5eadcap-32f, 0x1.107648p-122f, 0x1.eb081ap-119f, 0x1.01b84ap-99f,
     0x1.6d395p-58f, 0.0f, 0x1.d28704p-52f, 0x1.a971fep-72f, 0.0f, 0x1.0382cep-73f,
     0x1.d22a32p-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1de5ccp-103f, 0.0f, 0x1.ab9dep-26f,
     0.0f, 0.0f, 0x1.c5d224p-117f, 0x1.0858bcp-21f, 0x1.e51c5cp-107f, 0x1.6abfc8p-73f,
     0.0f, 0.0f, 0x1.370afcp-59f, 0.0f, 0.0f, 0x1.f7a6f4p-23f, 0x1.a69a9cp-114f, 0.0f,
     0.0f, 0x1.8318d2p-98f, 0.0f, 0.0f, 0x1.21fe54p-111f, 0.0f, 0.0f, 0x1.b4d66cp-56f,
     0.0f, 0.0f, 0x1.4084ap-65f, 0x1.aecd4p-17f, 0x1.046238p-57f, 0.0f,
     0x1.cd3938p-91f, 0x1.92874ap-78f, 0.0f, 0.0f, 0.0f, 0x1.a876b2p-72f,
     0x1.22d9ap-14f, 0.0f, 0.0f, 0.0f, 0x1.61e2c8p-65f, 0x1.57da1p-90f, 0.0f,
     0x1.b5405ap-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.55f756p-99f, 0.0f,
     0x1.b8e1c2p-29f, 0x1.d8a902p-30f, 0.0f, 0x1.a1c544p-56f, 0x1.0543fcp-121f,
     0x1.f6a944p-69f, 0x1.57016cp-95f, 0x1.e3f576p-68f, 0x1.ee363cp-77f, 0.0f,
     0x1.db0db8p-87f, 0x1.100e58p-106f, 0x1.7c0314p-102f, 0.0f, 0x1.c57bb8p-16f,
     0x1.b97216p-100f, 0x1.1ee0a6p-109f, 0x1.d2b992p-76f, 0x1.16fc46p-51f,
     0x1.4b74f8p-46f, 0.0f, 0.0f, 0x1.a97118p-82f, 0x1.3ce13ap-54f, 0.0f,
     0x1.dc3404p-66f, 0x1.ef6246p-23f, 0.0f, 0x1.b27f5ep-15f, 0x1.62c2dap-23f, 0.0f,
     0x1.121068p-23f, 0.0f, 0x1.fba2d6p-26f, 0.0f, 0x1.27f234p-101f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1p0f, 0x1.03a17ep-10f, 0x1.098a6ep-77f, 0x1.58375ep-121f,
     0x1.9b7098p-52f, 0.0f, 0.0f, 0.0f, 0x1.e1ce14p-63f, 0x1.f2eeecp-21f,
     0x1.cbaa74p-93f, 0x1.69be7ap-97f, 0.0f, 0.0f, 0x1.35f0fap-60f, 0.0f, 0.0f,
     0x1.94e20ep-74f, 0x1.8ec51cp-3f, 0x1.4c473ep-110f, 0.0f, 0x1.24ba48p-24f,
     0x1.07fbf6p-60f, 0x1.33c804p-39f, 0.0f, 0.0f, 0.0f, 0x1.940e8ep-64f,
     0x1.eede9cp-38f, 0x1.59c9cep-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.41df76p-65f,
     0x1.09938ap-39f, 0x1.3dbb42p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b64b7p-88f,
     0x1.8d2c8ap-11f, 0.0f, 0x1.077b84p-80f, 0.0f, 0x1.fea998p-38f, 0.0f,
     0x1.f91958p-43f, 0.0f, 0x1.822cd4p-72f, 0x1.79737p-116f, 0x1.55c948p-51f, 0.0f,
     0.0f, 0x1.26705p-58f, 0x1.00c182p-21f, 0.0f, 0x1.7216cap-83f, 0.0f, 0.0f,
     0x1.f638fep-90f, 0x1.8a0144p-103f, 0.0f, 0x1p0f, 0x1.e0a1c6p-13f, 0.0f, 0.0f,
     0x1.b07afap-5f, 0.0f, 0.0f, 0x1.64d264p-39f, 0x1.6ebafcp-15f, 0x1.aa1b46p-4f,
     0x1.009452p-82f, 0.0f, 0.0f, 0.0f, 0x1.8e423cp-106f, 0x1.01e56ap-7f,
     0x1.ec90cep-88f, 0x1.bd454cp-118f, 0.0f, 0x1.83377cp-38f, 0x1.eb50e8p-98f,
     0x1.60a9dap-118f, 0.0f, 0x1.cc38d8p-74f, 0x1.a2551ap-61f, 0x1.ae6e0ep-3f,
     0x1.097facp-126f, 0x1.907a62p-5f, 0x1.7cc00ep-16f, 0x1.30bc7ap-123f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9a46a2p-120f, 0x1.854e34p-126f, 0.0f, 0.0f,
     0x1.185174p-77f, 0.0f, 0x1.89bf18p-53f, 0.0f, 0.0f, 0.0f, 0x1.ec82f4p-79f, 0.0f,
     0.0f, 0x1.505afp-27f, 0x1.b95ecp-67f, 0x1.5c06fp-40f, 0x1.3602a6p-42f,
     0x1.9b431ep-74f, 0x1.52e7dp-46f, 0x1.890c98p-47f, 0.0f, 0x1.b9bf44p-103f,
     0x1.617fa6p-50f, 0x1.30848cp-1f, 0x1.bc7018p-61f, 0x1.dd102ep-78f,
     0x1.69c31p-75f, 0x1.83f534p-34f, 0x1.69e596p-63f, 0x1.a137dp-22f, 0.0f, 0.0f,
     0x1.9a457p-56f, 0.0f, 0x1.0d547cp-85f, 0.0f, 0x1.1b2998p-101f, 0.0f, 0.0f,
     0x1.71c79ap-91f, 0.0f, 0x1.1edc2p-38f, 0x1.819c6cp-14f, 0x1.3850bp-72f, 0.0f,
     0x1.652d6ep-73f, 0x1.a4332ep-101f, 0.0f, 0x1.5c5aeap-100f, 0x1.d24a26p-46f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.29e3bcp-93f, 0.0f, 0.0f, 0x1.4c29f4p-43f, 0x1.13c702p-121f,
     0.0f, 0x1.66e6eep-24f, 0x1.b541dep-112f, 0.0f, 0x1.118edep-30f, 0x1.9f92eap-46f,
     0x1.958768p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.80accap-122f, 0x1.a57d96p-30f,
     0x1.788b18p-107f, 0.0f, 0.0f, 0.0f, 0x1.7560bp-53f, 0.0f, 0x1.dc11ep-8f,
     0x1.396658p-74f, 0.0f, 0x1.85fe96p-91f, 0.0f, 0.0f, 0x1.e2ea14p-57f,
     0x1.27b33p-111f, 0x1.a18e54p-70f, 0x1.1c95bcp-74f, 0x1.cbc7f6p-6f, 0.0f, 0.0f,
     0.0f, 0x1.e64118p-64f, 0.0f, 0.0f, 0x1.352bbap-10f, 0x1.4c9c3p-80f, 0.0f, 0.0f,
     0.0f, 0x1.2370eap-15f, 0x1.80e83cp-16f, 0x1.4e264cp-27f, 0.0f, 0.0f, 0.0f,
     0x1.dfbdc2p-32f, 0.0f, 0.0f, 0x1.23b182p-94f, 0x1.887676p-123f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ce576ep-41f, 0x1.d002a6p-26f, 0x1.1db5b8p-75f, 0x1.2816e4p-23f,
     0x1.c85a48p-122f, 0.0f, 0.0f, 0x1.d3fc7cp-33f, 0.0f, 0x1.fb28a8p-121f,
     0x1.4b117ap-85f, 0x1.fb6faap-100f, 0x1.e1d5f4p-95f, 0x1.eb4e6p-23f, 0.0f, 0.0f,
     0x1.9f7268p-8f, 0x1.ba0454p-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8f5bdcp-126f, 0.0f,
     0.0f, 0.0f, 0x1.ca9a38p-77f, 0.0f, 0x1.92cbb2p-124f, 0x1.674a1cp-31f, 0.0f, 0.0f,
     0.0f, 0x1.ab44cp-64f, 0.0f, 0x1.4daef8p-53f, 0.0f, 0.0f, 0x1.fb152cp-95f,
     0x1.00b55p-74f, 0.0f, 0x1.69e64ep-99f, 0x1.b6b438p-49f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9089a2p-47f, 0.0f, 0x1.0f73d2p-124f,
     0x1.1c8cccp-89f, 0x1.c5a95ep-60f, 0x1.2bb65p-50f, 0x1.3817e8p-21f, 0.0f, 0.0f,
     0x1.ad8642p-108f, 0.0f, 0.0f, 0.0f, 0x1.45b82p-25f, 0.0f, 0x1.3cbf04p-14f,
     0x1.2f45ap-92f, 0x1.9e76acp-54f, 0x1p0f, 0x1.fb4cd2p-6f, 0.0f, 0.0f, 0.0f
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
            tmp1 = Sleef_finz_asinhf4_u10avx2128(tmp0);
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
    printf("Sleef_finz_asinhf4_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_asinhf4_u10avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
