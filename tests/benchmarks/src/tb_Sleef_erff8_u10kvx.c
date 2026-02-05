/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_erff8_u10kvx.c --function Sleef_erff8_u10kvx --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary32 --vector-size 8 \
 *     --function-input-vector-size 8 --bench --no-embedded-bin --target kv3
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
     0x1.319548p-103f, 0.0f, 0x1.f27852p-56f, 0x1.cdaf74p-90f, 0x1.8b14ecp-27f,
     0x1.86ad76p-104f, 0x1.1dd3b8p-111f, 0.0f, 0.0f, 0x1.546888p-69f, 0x1.9a961cp-95f,
     0x1.abc68ap-123f, 0x1.1e9c9cp-34f, 0.0f, 0.0f, 0x1.49b28p-52f, 0.0f,
     0x1.0d6948p-125f, 0.0f, 0.0f, 0x1.c33c12p-115f, 0x1.cf2a84p-48f, 0.0f,
     0x1.773b86p-100f, 0x1.bae3d4p-116f, 0.0f, 0x1.b9f3cp-16f, 0x1.fb88dp-54f,
     0x1.c8cb86p-13f, 0x1.3ab05ap-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f88b0ap-88f,
     0x1.3d470ep-118f, 0x1.25fa0ap-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ad4c68p-16f, 0x1.4d8422p-39f, 0x1.a0d33ep-18f, 0x1.141638p-96f, 0.0f,
     0x1.cfad34p-48f, 0x1.0c20ep-26f, 0x1.3f9656p-33f, 0.0f, 0x1.717f1p-6f,
     0x1.0c379cp-20f, 0.0f, 0x1.d0b3f2p-86f, 0.0f, 0x1.343018p-101f, 0.0f,
     0x1.330edep-97f, 0x1.8f6d58p-31f, 0x1.ad32acp-55f, 0x1.dca0dap-18f,
     0x1.dfc0cep-116f, 0.0f, 0x1.d8bc7ap-122f, 0x1p0f, 0x1.80dccep-100f,
     0x1.e94104p-81f, 0x1.1a9b6cp-26f, 0x1.d64466p-2f, 0.0f, 0x1.4a99ap-34f, 0.0f,
     0.0f, 0x1.1af22p-71f, 0x1.641088p-36f, 0.0f, 0x1.75f25ep-48f, 0.0f,
     0x1.3e8486p-69f, 0.0f, 0x1.8127d6p-126f, 0x1.38ddfep-38f, 0x1.d92a84p-108f, 0.0f,
     0.0f, 0x1.96c36p-94f, 0x1.8aca82p-69f, 0x1p0f, 0x1.2d6bb4p-94f, 0.0f,
     0x1.de5048p-33f, 0x1.e3bce2p-67f, 0.0f, 0x1.d9222p-120f, 0x1.22e712p-25f,
     0x1.f41a68p-124f, 0x1.31993ap-72f, 0x1.b1af5p-77f, 0.0f, 0.0f, 0x1.678ccap-62f,
     0x1.8b025p-66f, 0x1.9e51f4p-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.144406p-59f,
     0x1.0f55aep-75f, 0.0f, 0.0f, 0x1.356b1cp-50f, 0x1.171f4ep-3f, 0.0f,
     0x1.1136b4p-36f, 0.0f, 0x1.44e8d8p-52f, 0x1.f1cea4p-52f, 0x1.a74c48p-103f, 0.0f,
     0.0f, 0x1.cd37b4p-72f, 0x1.74b768p-91f, 0x1.68852p-112f, 0.0f, 0x1.1d864p-74f,
     0.0f, 0x1.70d48ap-119f, 0x1.c72ec8p-122f, 0x1.bb5ffp-99f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.95495p-79f, 0x1.14f9b2p-82f, 0x1.10cb66p-36f, 0x1.9d9582p-57f,
     0x1.1400bcp-83f, 0.0f, 0x1.618f5ep-92f, 0x1.2118b8p-4f, 0x1.adc562p-20f,
     0x1.e3cf78p-50f, 0.0f, 0x1.45bc46p-20f, 0x1.d542a6p-118f, 0.0f, 0.0f, 0.0f,
     0x1.ef24fp-106f, 0x1.b61bf2p-116f, 0x1.7bc1ap-116f, 0x1.87186ap-91f, 0.0f,
     0x1.401caep-122f, 0.0f, 0x1.4f9f4cp-55f, 0x1.37ea1p-46f, 0x1.1d3eep-117f,
     0x1.0f60bcp-25f, 0.0f, 0.0f, 0.0f, 0x1.4b8796p-60f, 0x1.472b6p-44f, 0.0f, 0.0f,
     0x1.d6ea6p-16f, 0.0f, 0x1.b59a96p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8fe2a4p-94f,
     0.0f, 0x1.d0c6d6p-50f, 0x1.a33022p-43f, 0.0f, 0x1.d19db8p-109f, 0x1.0fc146p-3f,
     0x1.e303f2p-102f, 0.0f, 0x1.1d8284p-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8ede9ap-22f, 0.0f, 0.0f, 0.0f, 0x1.729e68p-83f, 0x1.b3e7cp-54f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.68fceap-74f, 0.0f, 0.0f, 0x1.292bdcp-41f, 0.0f, 0.0f,
     0x1.4ed46ap-26f, 0.0f, 0x1.114aa6p-55f, 0.0f, 0x1.8bc958p-38f, 0.0f,
     0x1.0d5bb8p-88f, 0.0f, 0x1.00bb6p-111f, 0x1.205b16p-74f, 0x1.f9b944p-95f,
     0x1.26ecdap-10f, 0x1.9a8226p-11f, 0x1.0ada8cp-47f, 0x1.14ea64p-2f, 0.0f,
     0x1.58ce4ap-4f, 0x1.2c8dp-106f, 0.0f, 0.0f, 0.0f, 0x1.dfb2b2p-85f, 0.0f,
     0x1.8c801cp-85f, 0x1.871cfp-65f, 0x1.4b8a3ep-19f, 0.0f, 0x1.2a73bp-75f,
     0x1.448b4ap-14f, 0x1.615f7cp-113f, 0.0f, 0x1.c642c4p-88f, 0.0f, 0.0f, 0.0f,
     0x1.858bf2p-52f, 0.0f, 0.0f, 0.0f, 0x1.85cd72p-126f, 0.0f, 0x1.913872p-65f, 0.0f,
     0x1.0bc7fp-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.98b06p-105f, 0.0f, 0x1.ff4c04p-16f,
     0.0f, 0.0f, 0x1.084c3ep-13f, 0x1.199f4ep-72f, 0.0f, 0x1.a564d6p-9f,
     0x1.4d9d74p-9f, 0.0f, 0.0f, 0x1.402404p-116f, 0x1.745166p-54f, 0x1.be8b8ap-88f,
     0x1.1e450cp-16f, 0x1.c47512p-43f, 0.0f, 0x1.3a72b2p-42f, 0x1.24a732p-105f, 0.0f,
     0x1.5efb76p-43f, 0x1.035ed6p-105f, 0x1.8c207ap-81f, 0.0f, 0x1.93d4cap-55f, 0.0f,
     0x1.7dd698p-8f, 0.0f, 0.0f, 0x1.acb896p-86f, 0.0f, 0x1.90bd92p-34f, 0.0f,
     0x1.dbfa88p-12f, 0x1.121d46p-56f, 0.0f, 0x1.e2d3e8p-23f, 0x1.e93e5p-66f, 0.0f,
     0.0f, 0x1.668c3ep-2f, 0.0f, 0x1.639ae2p-46f, 0x1.111ebap-56f, 0x1.6e22aep-83f,
     0.0f, 0x1.3d79eep-29f, 0.0f, 0x1.71ced2p-106f, 0x1.f9349cp-59f, 0.0f, 0.0f,
     0x1.a799b4p-101f, 0.0f, 0x1.6fb4aap-82f, 0x1.c6514p-116f, 0x1.05cd72p-29f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.8039dcp-59f, 0x1.c2f73cp-83f, 0.0f, 0.0f, 0x1.e1c03ap-93f,
     0x1.ccfad8p-55f, 0x1.e52bd6p-104f, 0x1.b4b4eap-62f, 0.0f, 0.0f, 0x1.d0b7aep-19f,
     0.0f, 0.0f, 0.0f, 0x1.6ef14cp-41f, 0x1.6b0558p-57f, 0.0f, 0x1.a0f5f6p-31f,
     0x1.e23758p-71f, 0x1.007612p-41f, 0x1.f4f4bap-24f, 0x1.6c5526p-6f,
     0x1.788926p-45f, 0.0f, 0.0f, 0x1.28c2f2p-84f, 0x1.7142a2p-23f, 0.0f,
     0x1.5cac98p-108f, 0.0f, 0x1.3c5146p-74f, 0x1.49cbcp-125f, 0.0f, 0.0f, 0.0f,
     0x1.549632p-34f, 0.0f, 0.0f, 0.0f, 0x1.8220ep-109f, 0x1.ff83fcp-105f,
     0x1.fb885p-103f, 0x1.e3a14cp-55f, 0.0f, 0.0f, 0x1.97c846p-104f, 0.0f,
     0x1.f566e4p-117f, 0x1.21d372p-93f, 0x1.a758c4p-33f, 0x1.99f40ap-58f, 0.0f,
     0x1.c383b8p-84f, 0.0f, 0x1.a7117ap-117f, 0x1.841be8p-48f, 0x1.88ec5ap-114f,
     0x1.839fbap-34f, 0x1.ca1fd2p-21f, 0.0f, 0x1.b4001p-30f, 0x1.44114ap-88f, 0.0f,
     0.0f, 0x1.729474p-24f, 0.0f, 0x1.b552cep-64f, 0x1.1e79dep-67f, 0x1.818516p-39f,
     0.0f, 0x1.d84a1ep-42f, 0.0f, 0x1.f1054cp-67f, 0.0f, 0.0f, 0.0f, 0x1.e5b132p-21f,
     0x1.ac22ecp-108f, 0.0f, 0x1.07097p-3f, 0.0f, 0.0f, 0.0f, 0x1.1ea124p-82f, 0.0f,
     0x1.c10ea2p-33f, 0.0f, 0x1.0f50eap-118f, 0x1.4315b6p-89f, 0x1.dd728p-17f,
     0x1.409914p-11f, 0.0f, 0x1.bc1eap-107f, 0x1.4d2018p-82f, 0x1.89792p-89f,
     0x1.e6f7fp-6f, 0.0f, 0.0f, 0.0f, 0x1.abe9dcp-82f, 0.0f, 0.0f, 0.0f,
     0x1.a23862p-120f, 0.0f, 0x1.4eb3bep-21f, 0.0f, 0.0f, 0x1.6c8898p-7f,
     0x1.8821b6p-79f, 0.0f, 0x1.875306p-87f, 0x1.2010a2p-119f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.71afc2p-105f, 0.0f, 0.0f, 0x1.d06a78p-7f,
     0x1.8bd88p-13f, 0x1.5a8d82p-81f, 0x1.224e94p-40f, 0.0f, 0.0f, 0x1.1c6554p-3f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.78ab38p-11f, 0x1.eb300ep-126f, 0.0f, 0.0f,
     0x1.6903cep-47f, 0x1.fcc686p-76f, 0.0f, 0x1.c4b9f8p-99f, 0.0f, 0x1.10aee2p-36f,
     0x1.4d5118p-121f, 0x1.216da4p-125f, 0.0f, 0.0f, 0x1.2d41fap-81f, 0x1.7b687ap-67f,
     0.0f, 0.0f, 0x1.255a9ap-105f, 0.0f, 0x1.c5c492p-97f, 0.0f, 0x1.1d882ep-85f, 0.0f,
     0x1.de3b2p-6f, 0x1.705962p-69f, 0x1.e0eee8p-78f, 0x1.f9b308p-48f, 0.0f,
     0x1.f8f7aap-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.13246ap-113f, 0.0f, 0.0f,
     0x1.3a372cp-121f, 0.0f, 0x1.15b7ep-73f, 0.0f, 0.0f, 0x1.b540bp-24f, 0.0f,
     0x1.c1069cp-102f, 0x1.aa6294p-100f, 0x1.e07a16p-118f, 0x1.10faa6p-48f,
     0x1.fb20aap-96f, 0x1.fcaa48p-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.627b14p-104f,
     0x1.b2a1fap-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.76adaep-75f,
     0.0f, 0.0f, 0x1.e05f82p-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7dd4dp-36f, 0.0f, 0.0f,
     0.0f, 0x1.648a3cp-118f, 0.0f, 0x1.b3ddb6p-31f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e3039p-66f, 0.0f, 0.0f, 0x1.438c3cp-32f, 0x1.ffed9cp-116f, 0.0f, 0.0f,
     0x1.0d29e8p-67f, 0x1.8c5cdep-107f, 0.0f, 0.0f, 0x1.4a7334p-105f,
     0x1.859b72p-101f, 0x1.c3341ep-29f, 0.0f, 0.0f, 0.0f, 0x1.33f724p-74f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.72144p-105f, 0.0f, 0x1.450caap-40f, 0.0f, 0x1.792ba2p-115f,
     0x1.94d27p-126f, 0.0f, 0x1.7eba98p-60f, 0.0f, 0x1.96b572p-38f, 0.0f,
     0x1.0496cep-81f, 0x1.1a4bcap-1f, 0x1.39debp-42f, 0.0f, 0.0f, 0x1.6bd6d4p-35f,
     0x1.d08a0cp-29f, 0.0f, 0x1.1c5152p-103f, 0.0f, 0x1.3d7e28p-46f, 0x1.512e7ep-115f,
     0x1.b53d82p-86f, 0x1.c1e0a8p-68f, 0x1.b05104p-108f, 0.0f, 0.0f, 0.0f,
     0x1.f7ccecp-57f, 0x1.b4361ep-14f, 0.0f, 0x1.4ad784p-120f, 0x1.944244p-100f, 0.0f,
     0.0f, 0x1.c76f3p-4f, 0.0f, 0.0f, 0x1.a2fafp-77f, 0x1.8ebcf4p-122f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4e6ffep-36f, 0x1.8611acp-6f, 0.0f, 0x1.f3874ap-113f, 0.0f, 0.0f,
     0x1.dbf6c4p-104f, 0x1.ae4716p-45f, 0x1.dead6cp-114f, 0x1.8714dap-8f, 0.0f,
     0x1.f4b9b4p-121f, 0.0f, 0x1.4c099ep-75f, 0.0f, 0x1.c11a02p-109f, 0.0f,
     0x1.bf392p-46f, 0x1.e5dc74p-98f, 0x1.e67d0cp-117f, 0x1.19f02ep-64f, 0.0f, 0.0f,
     0.0f, 0x1.2a3c5ap-91f, 0.0f, 0.0f, 0x1.408e9ep-39f, 0x1.5834c6p-26f, 0x1p0f,
     0x1.abfad4p-97f, 0x1.a7e25p-107f, 0.0f, 0x1.8c521p-15f, 0.0f, 0x1.089fd2p-6f,
     0.0f, 0.0f, 0x1.c4e8cep-92f, 0x1.07ab82p-126f, 0x1.410d72p-118f,
     0x1.aaa8aap-122f, 0.0f, 0x1.c7fa6p-69f, 0.0f, 0x1.8c583cp-37f, 0x1.ae3012p-125f,
     0x1.c3b2ccp-111f, 0x1.5aecfp-112f, 0x1.5ff3dcp-50f, 0.0f, 0.0f, 0x1.5f93acp-46f,
     0x1.e1165cp-74f, 0x1.311014p-84f, 0x1.b9f2e2p-46f, 0.0f, 0x1.4e3aa6p-70f,
     0x1.e9099p-8f, 0x1.d2cd5cp-82f, 0.0f, 0x1.548b62p-83f, 0x1.e5f126p-76f, 0.0f,
     0.0f, 0.0f, 0x1.04daf2p-97f, 0x1.65d696p-90f, 0x1.a4056ap-89f, 0.0f,
     0x1.ffa6ccp-56f, 0x1.63013ap-4f, 0.0f, 0.0f, 0.0f, 0x1.18f8f8p-73f, 0.0f, 0.0f,
     0x1.746836p-75f, 0x1.9f9544p-116f, 0.0f, 0x1.ad830ep-85f, 0.0f, 0.0f, 0.0f,
     0x1.7d36f2p-109f, 0x1.6c6fe8p-17f, 0x1.008f8ep-57f, 0.0f, 0.0f, 0x1.05ed82p-114f,
     0.0f, 0x1.57bac4p-99f, 0x1.26166p-94f, 0.0f, 0x1.816e54p-86f, 0x1.a66c14p-11f,
     0x1.9ef48p-80f, 0.0f, 0x1.f5179ep-116f, 0x1.0468a4p-58f, 0.0f, 0.0f,
     0x1.9ee592p-81f, 0.0f, 0.0f, 0x1.c0dc7ep-6f, 0.0f, 0.0f, 0x1.0e31acp-38f,
     0x1.198c2ep-57f, 0x1.1a01fcp-11f, 0x1.a6dc3ep-57f, 0x1.c00abep-104f, 0.0f, 0.0f,
     0.0f, 0x1.3a9ap-101f, 0.0f, 0x1.274052p-95f, 0.0f, 0.0f, 0x1.827a34p-69f, 0.0f,
     0x1.38fceep-78f, 0x1.a6776p-81f, 0x1.1c249cp-44f, 0.0f, 0.0f, 0x1.1d8742p-23f,
     0x1.7f8516p-76f, 0.0f, 0x1.d02afep-82f, 0.0f, 0x1.0184e4p-77f, 0x1.3619e4p-51f,
     0.0f, 0.0f, 0x1.729b72p-108f, 0x1.86d24ep-126f, 0x1.3f16cap-72f, 0.0f,
     0x1.6b43eap-15f, 0x1.aad1bp-38f, 0x1.8652fcp-15f, 0x1.4985e2p-35f,
     0x1.9f2fa8p-22f, 0.0f, 0.0f, 0x1.a2ef0ep-120f, 0x1.ca1242p-13f, 0.0f, 0.0f, 0.0f,
     0x1.b11cbcp-16f, 0.0f, 0x1.915474p-48f, 0x1.d29534p-75f, 0.0f, 0.0f,
     0x1.cde29p-32f, 0x1.438f0ap-100f, 0.0f, 0.0f, 0x1.6ce8e4p-29f, 0x1.7d077ap-58f,
     0.0f, 0x1.2536a4p-45f, 0.0f, 0.0f, 0x1.bd8b74p-83f, 0.0f, 0x1.576664p-39f,
     0x1.64ae18p-110f, 0.0f, 0x1.22bb68p-34f, 0.0f, 0x1.ece02p-36f, 0.0f,
     0x1.75491ap-104f, 0x1.75896p-119f, 0x1.1c6db8p-22f, 0x1.0eaae6p-82f, 0.0f,
     0x1.aa7f5p-82f, 0.0f, 0x1.af95f8p-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.607a8ap-19f,
     0x1.a708eap-97f, 0.0f, 0.0f, 0x1.480a94p-3f, 0x1.9dfe3p-39f, 0.0f,
     0x1.880e8cp-66f, 0x1.e33db2p-109f, 0x1.18dcf8p-98f, 0.0f, 0x1.73708cp-121f, 0.0f,
     0x1.0fc17ap-49f, 0.0f, 0.0f, 0x1.4fcd0cp-51f, 0.0f, 0.0f, 0.0f, 0x1.1a0a76p-77f,
     0.0f, 0x1.6c61aap-61f, 0x1.c4d152p-30f, 0.0f, 0x1.987c7ap-2f, 0.0f, 0.0f,
     0x1.a05acap-2f, 0x1.d280ep-21f, 0x1.eca248p-78f, 0x1.361838p-124f,
     0x1.e443eep-96f, 0x1.a9c5bap-88f, 0x1.070426p-59f, 0.0f, 0x1.75d1f4p-102f,
     0x1.ddf6a4p-109f, 0.0f, 0.0f, 0x1.574e5cp-18f, 0.0f, 0x1.0ea438p-94f, 0.0f,
     0x1.aa7b9ep-86f, 0x1.4856bep-32f, 0.0f, 0.0f, 0x1.64979cp-105f, 0x1.983272p-20f,
     0x1.2a507ap-81f, 0x1.6f184cp-66f, 0.0f, 0.0f, 0x1.4c3652p-64f, 0.0f,
     0x1.24aee4p-78f, 0.0f, 0.0f, 0x1.128174p-24f, 0.0f, 0.0f, 0x1.14a6fp-93f, 0.0f,
     0.0f, 0.0f, 0x1.5f7becp-78f, 0.0f, 0.0f, 0.0f, 0x1.7dac36p-112f, 0x1.7bbc2ep-83f,
     0.0f, 0x1.1b542cp-123f, 0x1.5e8f6ap-110f, 0x1.e17e14p-63f, 0.0f,
     0x1.2e706cp-119f, 0.0f, 0x1.791932p-38f, 0.0f, 0.0f, 0.0f, 0x1.db88b4p-92f,
     0x1.14cd18p-94f, 0x1.d005d4p-62f, 0x1.987b3ep-52f, 0.0f, 0.0f, 0x1.a29e9cp-107f,
     0.0f, 0.0f, 0x1.676038p-22f, 0.0f, 0x1.bc2ebap-39f, 0x1.1d596p-108f, 0.0f,
     0x1.d1bef4p-66f, 0x1.41712ep-94f, 0.0f, 0x1.caf1fp-67f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.db3924p-125f, 0.0f, 0x1.c278fep-98f, 0.0f, 0x1.f16612p-72f, 0x1.bd135p-55f,
     0.0f, 0x1.e0d37cp-9f, 0.0f, 0.0f, 0x1.b40aacp-7f, 0.0f, 0x1.7cb066p-119f, 0.0f,
     0.0f, 0.0f, 0x1.16a868p-32f, 0x1.ba7f1ep-62f, 0.0f, 0.0f, 0.0f, 0x1.5400bap-90f,
     0.0f, 0.0f, 0.0f, 0x1.6c32d4p-109f, 0x1.03b782p-26f, 0x1.24655cp-23f,
     0x1.14313ep-40f, 0x1.1ad47ap-5f, 0.0f, 0x1.67e11p-95f, 0.0f, 0x1.47d76ep-101f,
     0.0f, 0x1.a48c22p-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.610d3ap-19f, 0.0f, 0.0f,
     0x1.50fbd2p-32f, 0.0f, 0.0f, 0.0f, 0x1.05e1b4p-104f, 0x1.5f4c4cp-71f, 0.0f, 0.0f,
     0x1.ce3c36p-126f, 0x1.7a3534p-59f, 0.0f, 0x1.dbd2dep-17f, 0.0f, 0.0f, 0.0f,
     0x1.ea7cf2p-58f, 0.0f, 0.0f, 0.0f, 0x1.c3b78ep-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.2dcae4p-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.18c368p-41f, 0x1.45aab6p-77f, 0.0f, 0.0f, 0x1.34cbbap-59f, 0x1.4c1d4p-54f,
     0x1.5f4c9ap-118f, 0x1.c8fc88p-102f, 0x1.556ce4p-72f, 0x1.f6943cp-62f, 0.0f,
     0x1.e2b0e4p-91f, 0x1.d257b6p-85f, 0x1.7fa274p-101f, 0x1.57c06cp-81f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d6db2cp-84f, 0.0f, 0x1.02e18ap-60f, 0x1.d3c2dep-18f,
     0x1.ba48d8p-66f, 0x1.c4c046p-106f, 0x1.259818p-48f, 0.0f
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
            tmp1 = Sleef_erff8_u10kvx(tmp0);
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
    printf("Sleef_erff8_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_erff8_u10kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
