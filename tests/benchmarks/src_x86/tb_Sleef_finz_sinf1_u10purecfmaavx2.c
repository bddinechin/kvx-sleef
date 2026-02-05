/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sinf1_u10purecfma.c --function \
 *     Sleef_finz_sinf1_u10purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --bench --no-embedded-bin --target x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <xmmintrin.h>
#include <stdio.h>
#include <inttypes.h>


volatile float external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.4b0d0cp-74f, 0.0f, 0.0f, 0x1.6ddc9ap-42f, 0.0f, 0x1.8ba59ep-37f,
     0x1.b61de6p-67f, 0x1.714c9ep-36f, 0.0f, 0x1.a4e76ap-50f, 0x1.0652ccp-72f,
     0x1.55a726p-67f, 0x1.60123cp-41f, 0x1.fab94ap-53f, 0.0f, 0x1.99aad2p-64f,
     0x1.6c7dcp-53f, 0x1.ff70b2p-93f, 0.0f, 0x1.a70b08p-72f, 0x1.980ffp-15f,
     0x1.3bbc86p-99f, 0.0f, 0x1.133bfep-44f, 0.0f, 0.0f, 0x1.162938p-11f, 0.0f,
     0x1.e3c296p-123f, 0x1.32e80ap-110f, 0.0f, 0x1.cc3c3ap-11f, 0x1.8eb266p-47f, 0.0f,
     0.0f, 0.0f, 0x1.eeddccp-45f, 0.0f, 0x1.ede714p-117f, 0.0f, 0.0f, 0.0f,
     0x1.0c670cp-53f, 0x1.c1224ap-91f, 0x1.22ab3ep-14f, 0x1.ad74c4p-21f,
     0x1.82dfdp-100f, 0.0f, 0x1.c485c4p-96f, 0.0f, 0x1.a5ccbp-13f, 0.0f, 0.0f,
     0x1.732188p-115f, 0.0f, 0.0f, 0.0f, 0x1.23a6fap-95f, 0.0f, 0x1.9c101ap-1f,
     0x1.03ec3ep-85f, 0x1.77158cp-107f, 0x1.38008ap-44f, 0x1.6bf1cap-73f,
     0x1.fbf3bp-85f, 0.0f, 0x1.69f8e2p-105f, 0.0f, 0.0f, 0x1.559938p-61f,
     0x1.eda65p-97f, 0x1.ccfda6p-67f, 0x1.7da8b4p-109f, 0x1.42f442p-80f,
     0x1.48654ep-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fcf926p-115f, 0x1.666a8ap-37f,
     0.0f, 0x1.e49798p-76f, 0x1.61ed5ep-78f, 0x1.149d18p-89f, 0x1.24257ep-109f, 0.0f,
     0x1.e48d18p-41f, 0.0f, 0x1.42bb46p-115f, 0.0f, 0x1.aa5cecp-53f, 0x1.30f5c4p-115f,
     0.0f, 0x1.dde25ap-22f, 0x1.840ceep-47f, 0.0f, 0.0f, 0.0f, 0x1.9e572ep-44f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d296c4p-121f, 0.0f, 0.0f, 0x1.d0c4e2p-44f, 0x1.23ad1ap-9f,
     0.0f, 0.0f, 0x1.92f7dp-96f, 0.0f, 0x1.1ee812p-29f, 0x1.c11558p-26f,
     0x1.5502d4p-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0bbcf8p-104f, 0x1.74cdf6p-122f,
     0x1.a6ab7ap-79f, 0x1.6814fcp-34f, 0.0f, 0x1.7ee352p-50f, 0x1.1663d8p-38f, 0.0f,
     0.0f, 0x1.d0135ep-109f, 0.0f, 0x1.d4fce2p-5f, 0x1.1a897p-60f, 0.0f,
     0x1.0381c8p-75f, 0x1.ab42p-88f, 0x1.0be7f6p-16f, 0.0f, 0x1.10ada2p-75f,
     0x1.c160c8p-62f, 0x1.428028p-117f, 0.0f, 0x1.755fbp-38f, 0x1.c74b14p-112f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f2a3b8p-34f, 0.0f, 0x1.d8b516p-99f, 0.0f, 0.0f,
     0x1.ba03f4p-73f, 0x1p0f, 0x1.1d112cp-31f, 0.0f, 0.0f, 0.0f, 0x1.536b12p-4f,
     0x1.d5cca6p-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0f7ddap-103f,
     0x1.a19e3cp-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.20266ep-42f, 0x1.44d7e8p-53f, 0.0f,
     0.0f, 0x1.19c9dcp-114f, 0.0f, 0x1.d57d18p-113f, 0.0f, 0x1.4c2f5p-1f,
     0x1.f1f0e2p-108f, 0.0f, 0x1.d90e2ep-49f, 0x1.46a0aep-54f, 0.0f, 0x1.e2d3b6p-121f,
     0.0f, 0.0f, 0x1.32cc72p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c85bf4p-2f,
     0x1.07142ep-83f, 0x1.647456p-34f, 0.0f, 0.0f, 0.0f, 0x1.4dab4ep-30f, 0.0f,
     0x1.2363eep-106f, 0.0f, 0x1.f1a15ep-74f, 0.0f, 0.0f, 0x1.9bf214p-101f,
     0x1.faf9ecp-82f, 0.0f, 0.0f, 0x1.ff6392p-78f, 0.0f, 0x1.0f1d6ap-43f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e0b3b8p-27f, 0.0f, 0.0f, 0x1.dd2f12p-3f, 0.0f, 0.0f,
     0x1.eb3a4p-87f, 0.0f, 0x1.006262p-110f, 0x1.e22448p-9f, 0.0f, 0.0f, 0.0f,
     0x1.7eca0ap-102f, 0x1.b146fep-5f, 0x1.9c3a8ep-69f, 0.0f, 0x1.195654p-97f,
     0x1.ac11cp-7f, 0.0f, 0x1.6afb6cp-112f, 0.0f, 0.0f, 0.0f, 0x1.f4d812p-70f, 0.0f,
     0.0f, 0x1.4170e4p-100f, 0.0f, 0.0f, 0.0f, 0x1.062dd8p-81f, 0x1.9880b8p-117f,
     0.0f, 0.0f, 0x1.f10164p-40f, 0.0f, 0.0f, 0x1.245ae6p-27f, 0x1.af103cp-124f, 0.0f,
     0.0f, 0.0f, 0x1.f36632p-125f, 0.0f, 0.0f, 0x1.29c1f4p-108f, 0x1.03b992p-48f,
     0.0f, 0.0f, 0x1.f51d36p-50f, 0.0f, 0.0f, 0x1.4bf8e8p-44f, 0x1.77599ep-120f, 0.0f,
     0.0f, 0.0f, 0x1.f51cf6p-45f, 0.0f, 0x1.f32f7ep-15f, 0.0f, 0.0f, 0x1.7d12c8p-30f,
     0.0f, 0x1.cca5bcp-84f, 0.0f, 0x1.0561f4p-27f, 0x1.c4d00ap-110f, 0x1.195eep-6f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.38e3a8p-117f, 0x1.2b85cap-96f, 0.0f,
     0x1.4c88c4p-53f, 0.0f, 0.0f, 0x1.75da0ap-24f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c5b876p-27f, 0.0f, 0x1.b1b8fcp-83f, 0.0f, 0.0f, 0.0f, 0x1.9de76p-2f,
     0x1.34b0aap-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5266a4p-105f, 0.0f, 0x1.989ef8p-1f,
     0.0f, 0x1.af1a58p-91f, 0x1.aab046p-65f, 0.0f, 0.0f, 0x1.98aba6p-124f,
     0x1.41ac84p-46f, 0.0f, 0.0f, 0x1.b05432p-126f, 0x1.ac58c4p-126f, 0x1.822638p-26f,
     0x1.21b236p-113f, 0x1.e967aap-70f, 0.0f, 0x1.aae8f8p-91f, 0x1.f49a8cp-60f,
     0x1.2e4adep-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fcc0ep-36f, 0.0f,
     0x1.a8b46ep-2f, 0x1.a49f62p-23f, 0.0f, 0x1.fd0ef4p-90f, 0.0f, 0x1.a9266ep-15f,
     0x1.e4fde8p-65f, 0x1.e81488p-33f, 0x1.3f8856p-37f, 0.0f, 0x1.e59996p-68f,
     0x1.d0b69p-14f, 0x1.215cd2p-42f, 0x1.f2205ap-107f, 0.0f, 0x1.32e4bap-31f,
     0x1.ce8cf8p-34f, 0x1.a6f6c4p-87f, 0.0f, 0.0f, 0x1.f13a66p-126f, 0.0f,
     0x1.cc9934p-37f, 0.0f, 0x1.89080ap-79f, 0x1.4e6ba8p-57f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.fc1f0ep-56f, 0.0f, 0.0f, 0x1.954a3ep-66f, 0.0f, 0.0f, 0.0f,
     0x1.511efp-67f, 0.0f, 0x1.7bc48ep-36f, 0x1.c91504p-118f, 0x1.74201ep-83f,
     0x1.82fa44p-36f, 0x1.b835c6p-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a3718ep-92f,
     0.0f, 0.0f, 0x1.26915ep-50f, 0.0f, 0x1.945314p-95f, 0.0f, 0.0f, 0x1.543f46p-22f,
     0x1.36ec2p-124f, 0.0f, 0x1.d8734p-79f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.da725ep-95f, 0x1.19005ep-11f, 0x1.75e624p-25f, 0x1.ae531cp-97f, 0.0f,
     0x1.2bde74p-50f, 0x1.12cdcep-17f, 0x1.726ceap-78f, 0.0f, 0x1.8baa84p-57f,
     0x1.5fb5fap-120f, 0x1.8cda6ap-69f, 0.0f, 0x1.3e8ec4p-56f, 0.0f, 0.0f,
     0x1.52c2cap-1f, 0.0f, 0x1.a42fb4p-90f, 0x1.faa02cp-65f, 0.0f, 0.0f,
     0x1.ac2e7ap-4f, 0.0f, 0.0f, 0x1.6adcc2p-78f, 0x1.bce3a4p-103f, 0x1.b909bp-125f,
     0x1.479044p-28f, 0.0f, 0x1.ead8acp-87f, 0x1.a018e6p-80f, 0.0f, 0.0f, 0.0f,
     0x1.1f836p-55f, 0.0f, 0x1.351ad2p-13f, 0x1.acefe4p-99f, 0x1.2f5e5ep-40f,
     0x1.ed534p-50f, 0.0f, 0.0f, 0x1.7488ep-79f, 0x1.9b073ap-97f, 0x1.e66e82p-24f,
     0x1.2b90d2p-125f, 0.0f, 0.0f, 0.0f, 0x1.8b1f22p-41f, 0x1.4705eap-18f, 0.0f, 0.0f,
     0.0f, 0x1.569108p-10f, 0x1.f6a8eap-119f, 0.0f, 0x1.ba7b8ep-13f, 0x1.b7f86cp-53f,
     0x1.6e7132p-53f, 0.0f, 0x1.8b18eep-11f, 0.0f, 0x1.350c3ep-20f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.3906ep-84f, 0x1.bfc386p-59f, 0x1.f18afcp-121f, 0.0f, 0.0f,
     0x1.cafddcp-105f, 0.0f, 0.0f, 0x1.fbbbb6p-17f, 0.0f, 0.0f, 0.0f, 0x1.2dd604p-35f,
     0x1.584c34p-44f, 0.0f, 0x1.42637p-101f, 0x1.b503aep-86f, 0x1.170524p-68f, 0.0f,
     0x1.29441ap-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2fed4ap-1f, 0x1.7ca61ep-72f,
     0x1.2372b4p-53f, 0x1.33d62cp-28f, 0x1.3fa818p-5f, 0.0f, 0.0f, 0x1.a43fp-36f,
     0x1.e03722p-32f, 0x1.6e75a6p-112f, 0x1.5a2ffap-93f, 0.0f, 0.0f, 0x1.c2107ep-116f,
     0x1.ed30bep-83f, 0x1.0f79d2p-41f, 0.0f, 0x1.40809p-46f, 0.0f, 0.0f,
     0x1.6064fcp-112f, 0x1.0bbp-46f, 0x1.3f0032p-96f, 0x1.04d736p-97f, 0.0f, 0.0f,
     0x1.09a412p-118f, 0x1.8e08cap-84f, 0.0f, 0x1.365732p-40f, 0.0f, 0.0f,
     0x1.3b3e6cp-63f, 0.0f, 0x1.eca222p-114f, 0.0f, 0x1.9934d8p-33f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.fc2eb2p-86f, 0.0f, 0x1.9ef5bep-61f, 0x1.8b47a2p-85f,
     0x1.817362p-32f, 0x1.812c12p-110f, 0x1.0cd3ecp-99f, 0x1.3bc29ep-68f,
     0x1.317beep-49f, 0x1.81d3c4p-8f, 0.0f, 0x1.708134p-75f, 0.0f, 0.0f,
     0x1.a6dec4p-60f, 0.0f, 0x1.bd8d6p-111f, 0.0f, 0.0f, 0x1.044324p-28f,
     0x1.8fe06ap-5f, 0x1.6a0a4ap-62f, 0x1.12b508p-28f, 0.0f, 0.0f, 0x1.ac8da2p-28f,
     0.0f, 0x1.80dcb6p-69f, 0x1.5ff4cep-74f, 0x1.1100cap-63f, 0x1.ea0db2p-25f, 0.0f,
     0x1.153c48p-118f, 0.0f, 0x1.113b88p-114f, 0.0f, 0x1.86cdeep-122f, 0.0f, 0.0f,
     0x1.919f42p-115f, 0x1.8f89d6p-15f, 0x1.fcf826p-29f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.743d4cp-24f, 0.0f, 0.0f, 0.0f, 0x1.00aa3cp-58f, 0.0f, 0x1.0c6ab2p-121f,
     0x1.2428dep-12f, 0.0f, 0x1.08b2d4p-22f, 0.0f, 0.0f, 0.0f, 0x1.66dcd2p-100f, 0.0f,
     0.0f, 0x1.861e2cp-121f, 0.0f, 0x1.99dba4p-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.aa9ffcp-23f, 0x1.d5f1f4p-62f, 0.0f, 0x1.06e7a8p-3f, 0.0f,
     0x1.a110ecp-3f, 0.0f, 0.0f, 0x1.ed45aap-111f, 0.0f, 0.0f, 0x1.509938p-110f,
     0x1.7a3e18p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.428e1ap-16f,
     0x1.10dfa2p-97f, 0.0f, 0x1.7d11fcp-66f, 0x1.e95278p-11f, 0.0f, 0x1.59fccp-73f,
     0x1.657064p-109f, 0x1.411894p-72f, 0x1.c74d8ep-113f, 0x1.2606cep-64f, 0.0f, 0.0f,
     0x1.62d1dcp-37f, 0x1.7dd69p-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.610a54p-21f,
     0.0f, 0.0f, 0x1.5c4486p-6f, 0x1.491ea6p-39f, 0.0f, 0.0f, 0.0f, 0x1.da5402p-68f,
     0x1.4d82eap-95f, 0x1.da96e4p-20f, 0x1.96b4b2p-57f, 0.0f, 0.0f, 0x1.2aa90ep-79f,
     0x1.f979f2p-68f, 0.0f, 0.0f, 0x1.8335d4p-83f, 0x1.1075bcp-7f, 0x1.2f582ep-51f,
     0.0f, 0x1.3bfe22p-32f, 0.0f, 0.0f, 0.0f, 0x1.03a38p-12f, 0x1.49867ap-21f, 0.0f,
     0x1.4cb898p-81f, 0x1.d22ff2p-30f, 0.0f, 0.0f, 0.0f, 0x1.5f3386p-34f,
     0x1.8a53fap-83f, 0x1.3d980cp-42f, 0x1.75b548p-35f, 0x1.3b347ap-63f,
     0x1.8346c6p-101f, 0.0f, 0x1.5d5454p-21f, 0x1.d385bp-114f, 0x1.811b1ep-52f,
     0x1.5adf4p-91f, 0x1.2369ecp-118f, 0x1p0f, 0x1.65c292p-118f, 0.0f,
     0x1.d3ce5cp-58f, 0x1.285bcap-30f, 0x1.0ec6ecp-91f, 0x1.27a4f2p-80f, 0.0f,
     0x1.a441ecp-1f, 0.0f, 0x1.4912ecp-102f, 0.0f, 0x1.bcc836p-17f, 0x1.9af638p-99f,
     0x1.7a9704p-45f, 0.0f, 0.0f, 0x1.0bb62p-48f, 0.0f, 0.0f, 0x1.4bc6e6p-98f,
     0x1.a39cb4p-55f, 0x1.0e063ap-115f, 0.0f, 0.0f, 0x1.bf0d78p-36f, 0.0f,
     0x1.a7a0e8p-20f, 0.0f, 0.0f, 0x1.38aa5cp-58f, 0.0f, 0.0f, 0x1.0986d2p-53f,
     0x1.10f8d2p-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.12caa8p-37f, 0.0f, 0x1.624254p-58f,
     0x1.81e362p-108f, 0x1.e5b884p-10f, 0x1.e922bap-113f, 0.0f, 0.0f, 0.0f,
     0x1.ebbac6p-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.52e05ep-113f, 0x1.e6197cp-5f, 0x1.566012p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b9acep-102f, 0x1.ef2b88p-117f, 0x1.a18f7p-43f, 0x1.1498dp-112f,
     0x1.79f0ecp-115f, 0.0f, 0.0f, 0x1.62c436p-35f, 0.0f, 0x1.95c6acp-39f,
     0x1.0f3106p-38f, 0x1.c2cc72p-25f, 0x1.9f6f4ep-90f, 0.0f, 0.0f, 0.0f,
     0x1.08b9bp-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c90ae6p-116f, 0.0f,
     0x1.b49f24p-118f, 0.0f, 0.0f, 0x1.d0a4ap-31f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2b10dcp-18f, 0.0f, 0x1.5bb88ep-45f, 0.0f, 0.0f, 0x1.b871b8p-66f,
     0x1.9fff3ap-113f, 0.0f, 0x1.91e758p-8f, 0x1.a02776p-20f, 0x1.156e32p-74f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c6b09ap-110f, 0.0f, 0.0f, 0.0f, 0x1.da5db2p-100f, 0.0f,
     0.0f, 0x1.61a782p-23f, 0x1.b4fa3cp-74f, 0.0f, 0.0f, 0x1.0e8d12p-50f,
     0x1.6e5622p-76f, 0.0f, 0.0f, 0.0f, 0x1.726e5ep-126f, 0.0f, 0.0f, 0x1.eb8f04p-60f,
     0x1.53742p-57f, 0x1.b08f5cp-21f, 0.0f, 0x1.0243ccp-69f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.9ab906p-2f, 0x1.8dacc2p-94f, 0.0f, 0.0f, 0x1.ad459p-51f,
     0x1.8f13bap-18f, 0.0f, 0x1.8ed52cp-122f, 0x1.a0eb72p-111f, 0x1.78933ep-94f,
     0x1.8e1fe2p-16f, 0x1.948c7ep-66f, 0x1.4160e6p-87f, 0.0f, 0.0f, 0x1.080712p-56f,
     0x1.6d9894p-34f, 0x1.6cd326p-45f, 0.0f, 0.0f, 0.0f, 0x1.362ab4p-42f, 0.0f,
     0x1.528282p-7f, 0x1.6fdfecp-13f, 0.0f, 0x1.9d83b4p-91f, 0x1.f9cbdp-23f,
     0x1.b9dc44p-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4df862p-105f, 0.0f, 0.0f,
     0x1.ab2d12p-106f, 0.0f, 0.0f, 0x1.afb58ap-112f, 0x1.6e957p-45f, 0.0f,
     0x1.b8bb84p-107f, 0x1.dc6ae8p-15f, 0x1.1caa5p-114f, 0.0f, 0x1.21f426p-69f, 0.0f,
     0x1.ca6c02p-115f, 0.0f, 0.0f, 0x1.23e186p-126f, 0x1.3bc34ep-51f, 0x1.1664a2p-73f,
     0x1.fe376cp-90f, 0x1.305a92p-50f, 0.0f, 0.0f, 0x1.ebada6p-4f, 0x1.b8a73p-43f,
     0x1.0d678p-35f, 0x1.93c9bap-34f, 0x1.494e3cp-39f, 0.0f, 0.0f, 0.0f,
     0x1.c7a54cp-64f, 0.0f, 0x1.b82a6p-60f, 0x1.18852ap-8f, 0x1.013e36p-3f,
     0x1.3e7c34p-69f, 0.0f, 0x1.5bedf8p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e84c02p-59f,
     0.0f, 0x1.e5591ep-8f, 0x1.d00dfcp-71f, 0.0f, 0.0f, 0x1.21525p-97f, 0.0f,
     0x1.bce37ep-73f, 0.0f, 0.0f, 0x1.25d64ep-20f, 0.0f, 0.0f, 0.0f, 0x1.cce36cp-19f,
     0x1.38c4fep-103f, 0x1.a347f4p-50f, 0x1.014654p-6f, 0x1.4026cap-4f,
     0x1.f58672p-47f, 0.0f, 0x1.332424p-5f, 0x1.8e471ep-98f, 0.0f, 0.0f, 0.0f,
     0x1.086fd8p-47f, 0.0f, 0x1.806b28p-118f, 0x1.20224p-66f, 0x1.586d7ep-58f, 0.0f,
     0x1p0f, 0x1.ccb74p-42f, 0x1.277c18p-109f, 0x1.fc5b34p-118f, 0x1.c68eecp-99f,
     0x1.1ec412p-104f, 0.0f, 0x1.9ec194p-112f, 0.0f, 0.0f, 0x1.2c7558p-26f,
     0x1.fcbfeep-28f, 0.0f, 0.0f, 0x1.f324c2p-69f, 0x1.5fa754p-11f, 0.0f,
     0x1.ab8f1ep-2f, 0x1.0809b4p-118f, 0.0f, 0x1.b6705ap-98f, 0.0f, 0.0f,
     0x1.edd44ap-117f, 0.0f, 0x1.6a4482p-4f, 0x1.b07c4cp-124f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8680ecp-44f, 0x1.94343p-90f, 0.0f, 0.0f, 0x1.c694dcp-61f, 0.0f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    float global_bench_acc;
    int64_t timer;
    int64_t tmp;
    int32_t j;
    int64_t tmp1;
    int64_t tmp2;
    double id_tmp;
    double cpe_measure;
    
    global_bench_acc = 0.0f;
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
        float bench_acc;
        int32_t i;
        __m128 carg;
        __m128 carg1;
        __m128 carg2;
        float tmp0;
        int32_t tmp1;

        i = INT32_C(0);
        bench_acc = 0.0f;

        for (;(i < INT32_C(1001));){
            float tmp0;
            float tmp1;
            __m128 carg;
            __m128 carg1;
            __m128 carg2;
            float tmp2;
            int32_t tmp3;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_finz_sinf1_u10purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            carg = _mm_set_ss(bench_acc);
            carg1 = _mm_set_ss(tmp1);
            carg2 = _mm_add_ss(carg, carg1);
            tmp2 = _mm_cvtss_f32(carg2);
            bench_acc = tmp2;
            tmp3 = i + INT32_C(1);
            i = tmp3;
        }
        carg = _mm_set_ss(global_bench_acc);
        carg1 = _mm_set_ss(bench_acc);
        carg2 = _mm_add_ss(carg, carg1);
        tmp0 = _mm_cvtss_f32(carg2);
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
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_finz_sinf1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_sinf1_u10purecfma bench acc %a\n", global_bench_acc);
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
