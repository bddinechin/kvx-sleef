/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_erff1_u10purecfma.c --function \
 *     Sleef_finz_erff1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.7bfa26p-116f, 0.0f, 0x1.6b6ffap-111f, 0x1.1b5708p-79f, 0x1.7bcf4cp-117f,
     0x1.7a797ap-113f, 0.0f, 0.0f, 0x1.b0a7a8p-1f, 0x1.fc9a58p-77f, 0.0f,
     0x1.4554eap-118f, 0x1.3daee4p-73f, 0x1.f711bcp-117f, 0.0f, 0x1.53726ap-30f, 0.0f,
     0.0f, 0x1.8b682p-64f, 0.0f, 0.0f, 0x1.7d7af8p-122f, 0x1.f467aap-64f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.beb6dcp-91f, 0x1.7d48b4p-120f, 0x1.171e48p-5f,
     0x1.666fcap-13f, 0.0f, 0.0f, 0.0f, 0x1.f2c962p-16f, 0.0f, 0x1.11d6f4p-39f,
     0x1.04c276p-103f, 0x1.b85928p-47f, 0x1.fa8c9ap-50f, 0.0f, 0.0f, 0.0f,
     0x1.363256p-51f, 0x1.d9ecc2p-41f, 0.0f, 0.0f, 0x1.f7855cp-30f, 0x1.1e8c62p-97f,
     0x1.9a7adap-87f, 0x1.b5a9d2p-126f, 0x1.8a82ecp-33f, 0x1.1b8ff8p-46f,
     0x1.5469b8p-6f, 0x1.6ce458p-50f, 0x1.545684p-76f, 0.0f, 0.0f, 0.0f,
     0x1.2bbcaep-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.97b188p-47f, 0.0f,
     0x1.ee258cp-81f, 0x1.34d75ap-29f, 0x1.a24716p-23f, 0.0f, 0x1.3b69f6p-122f,
     0x1.52dce8p-119f, 0x1.21f4ccp-98f, 0.0f, 0.0f, 0x1.c940a6p-96f, 0.0f,
     0x1.431bfap-4f, 0.0f, 0.0f, 0x1.6887cap-31f, 0.0f, 0x1.86a16cp-84f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.0f89a2p-53f, 0.0f, 0x1.868d5p-41f, 0.0f, 0x1.3caad2p-41f,
     0.0f, 0x1.7c09p-57f, 0.0f, 0x1.72a016p-45f, 0x1.f758a2p-94f, 0x1.85c8e8p-86f,
     0x1.0becbep-65f, 0.0f, 0.0f, 0.0f, 0x1.31b74ap-58f, 0.0f, 0.0f, 0x1.219d3ap-110f,
     0.0f, 0x1.d0c8dep-24f, 0.0f, 0x1.9a56e4p-83f, 0x1.189204p-64f, 0x1.99c304p-97f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.51234ep-14f, 0x1.e60d64p-53f, 0.0f, 0x1.00ae36p-125f,
     0.0f, 0.0f, 0x1.a5dac6p-85f, 0x1.285cdp-69f, 0.0f, 0.0f, 0.0f, 0x1.e904e6p-72f,
     0x1.218f3ap-11f, 0.0f, 0x1.47fbap-71f, 0x1.a2e27ap-15f, 0x1.adbc04p-94f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1a71f2p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.350b7ap-3f, 0.0f, 0.0f, 0.0f, 0x1.e16434p-15f, 0x1.605af6p-112f,
     0x1.4b3034p-4f, 0x1.c4033p-7f, 0.0f, 0.0f, 0.0f, 0x1.12a8a6p-59f,
     0x1.28ce58p-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3cf5ap-93f, 0x1.8fe4b4p-13f, 0.0f,
     0x1.db19a4p-115f, 0.0f, 0x1.a2fdd2p-113f, 0.0f, 0x1.e21f7ep-67f, 0.0f,
     0x1.0e0b2p-43f, 0x1.c9478cp-79f, 0.0f, 0.0f, 0x1.833908p-14f, 0x1.84f1f8p-91f,
     0x1.39ad0ap-30f, 0.0f, 0x1.3dc436p-119f, 0.0f, 0x1.c04d84p-67f, 0.0f, 0.0f, 0.0f,
     0x1.52ef54p-75f, 0.0f, 0.0f, 0x1.89334cp-101f, 0x1.1418bp-29f, 0.0f,
     0x1.2d245ep-68f, 0.0f, 0x1.c530c4p-124f, 0.0f, 0x1.baba0ap-69f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.914a54p-22f, 0x1.940676p-90f, 0x1.e42212p-84f, 0.0f,
     0x1.b7bc1ep-11f, 0.0f, 0x1.ea2c28p-34f, 0x1.84463p-101f, 0x1.e71e3ep-21f,
     0x1.86bbe2p-73f, 0x1.59e636p-87f, 0.0f, 0x1.7feb8cp-77f, 0x1.babc68p-103f, 0.0f,
     0.0f, 0x1.60e424p-76f, 0x1.f5748ep-31f, 0x1.c6e25ep-58f, 0.0f, 0.0f, 0x1p0f,
     0x1.48b254p-116f, 0x1.8fc194p-111f, 0.0f, 0x1.0cc996p-59f, 0x1.23589cp-3f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.64ca0ap-101f, 0x1.631b88p-42f, 0.0f, 0.0f, 0.0f,
     0x1.50ecb4p-117f, 0x1.56052ap-45f, 0x1.c7c756p-58f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5a1348p-98f, 0.0f, 0.0f, 0x1.eab1dcp-14f, 0x1.17961ep-2f, 0.0f, 0.0f,
     0x1.546dbcp-10f, 0x1.4a277cp-17f, 0x1.6d331cp-25f, 0x1.c6f69cp-78f,
     0x1.32e0e8p-47f, 0.0f, 0x1.b68b8cp-107f, 0x1.79e5bcp-4f, 0.0f, 0x1.33a74ap-89f,
     0x1.602f54p-92f, 0x1.7173e8p-112f, 0.0f, 0x1.a7a06cp-96f, 0x1.c1152p-118f, 0.0f,
     0x1.e2acaap-12f, 0.0f, 0x1.146d2ep-36f, 0x1.def60cp-18f, 0x1.6623b4p-72f, 0.0f,
     0x1.0cc9dap-107f, 0x1.fe15aap-61f, 0x1.1135fep-26f, 0x1.9ac1b6p-125f,
     0x1.557becp-62f, 0.0f, 0x1.7e6ad6p-99f, 0.0f, 0x1.f6a6e6p-39f, 0x1.7056e8p-36f,
     0x1.e65922p-106f, 0.0f, 0x1.ee7f14p-77f, 0.0f, 0x1.9a5582p-81f, 0x1.02397cp-6f,
     0.0f, 0x1.0c8daep-30f, 0.0f, 0.0f, 0x1.c6b09ap-83f, 0.0f, 0x1.b9e7fap-38f, 0.0f,
     0.0f, 0x1.ce0a5ap-90f, 0.0f, 0.0f, 0.0f, 0x1.a0962p-87f, 0.0f, 0.0f,
     0x1.f75796p-58f, 0x1.6c00e8p-16f, 0x1.d812f6p-66f, 0x1.38f526p-87f, 0.0f,
     0x1.d98f38p-22f, 0x1.0439bap-123f, 0x1.77b8ep-25f, 0x1.7ef8dep-107f, 0.0f, 0.0f,
     0x1.12c778p-34f, 0x1.243a66p-79f, 0.0f, 0x1.3cde0ep-18f, 0x1.a8e17ep-58f, 0.0f,
     0x1.70dfdap-64f, 0.0f, 0.0f, 0x1.831fp-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.97a994p-63f, 0.0f, 0.0f, 0.0f, 0x1.5f9ec8p-124f, 0x1.66066cp-106f, 0.0f,
     0x1.dc5f88p-32f, 0x1.6a2866p-37f, 0x1.f3708ep-45f, 0.0f, 0x1.526688p-54f,
     0x1.f14118p-126f, 0x1.32f5e2p-18f, 0.0f, 0x1.656e4p-97f, 0.0f, 0x1.480904p-70f,
     0x1.f55a56p-104f, 0x1.e69758p-124f, 0.0f, 0x1p0f, 0x1.403db6p-75f,
     0x1.e0bb4p-116f, 0x1.fde162p-28f, 0.0f, 0x1.b9a682p-108f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.217526p-28f, 0x1.160bf4p-47f, 0.0f, 0x1.8dc0ep-73f,
     0x1.089504p-73f, 0x1.edcdfep-68f, 0x1.d2da96p-117f, 0.0f, 0.0f, 0.0f,
     0x1.e557ap-29f, 0.0f, 0x1.d5346cp-86f, 0.0f, 0.0f, 0x1.2030ep-17f,
     0x1.86595ep-122f, 0.0f, 0x1.d5bf1ep-74f, 0x1.4317d8p-45f, 0x1.8c3efcp-7f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a4487p-47f, 0x1.a7193ap-115f, 0x1.e370e6p-60f, 0.0f,
     0x1.2a6f1p-117f, 0x1.c52e66p-31f, 0x1.39613ap-45f, 0.0f, 0x1.57c102p-95f,
     0x1.217f8ap-108f, 0x1.b5a86ep-9f, 0x1.652b54p-37f, 0x1.5027e2p-71f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fdca42p-10f, 0x1.c99ba4p-35f,
     0x1.4e87fp-122f, 0x1.c1a2acp-30f, 0.0f, 0.0f, 0x1.72f53ap-1f, 0.0f,
     0x1.3a0822p-73f, 0x1.b775dep-69f, 0.0f, 0.0f, 0.0f, 0x1.d6ece2p-43f, 0.0f,
     0x1.755ed8p-23f, 0x1.b2708cp-25f, 0x1.c7e49ap-56f, 0x1.46dd66p-81f,
     0x1.414fep-97f, 0x1.1addfcp-26f, 0x1.fd8734p-24f, 0x1.1e3c88p-86f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.6981b2p-110f, 0.0f, 0x1.75b03ap-125f, 0.0f, 0x1.9b517p-62f, 0.0f,
     0.0f, 0.0f, 0x1.90ebeap-91f, 0x1.81cfdp-26f, 0x1.314fb4p-31f, 0.0f, 0.0f,
     0x1.062a42p-42f, 0.0f, 0x1.15873ap-119f, 0x1.dd1cfp-54f, 0.0f, 0x1.75c062p-4f,
     0x1.a1237p-72f, 0.0f, 0x1.f4152ep-116f, 0x1.1dd2bep-73f, 0.0f, 0.0f,
     0x1.f1817p-45f, 0.0f, 0x1.b99c5cp-95f, 0x1.849fc4p-55f, 0.0f, 0x1.4e38a4p-20f,
     0x1.b88cb8p-24f, 0.0f, 0x1.9f2e22p-91f, 0.0f, 0x1.7dc8cap-12f, 0.0f, 0.0f, 0.0f,
     0x1.8f9a72p-61f, 0.0f, 0.0f, 0x1.8907aep-81f, 0.0f, 0x1.d9d7aep-41f,
     0x1.13a598p-85f, 0.0f, 0.0f, 0x1.7b92bep-26f, 0x1.07b17p-14f, 0.0f,
     0x1.9819d4p-92f, 0.0f, 0x1.d5cb96p-43f, 0x1.834a64p-123f, 0x1.40ed5cp-68f,
     0x1.21cbb2p-110f, 0x1.fd8f92p-104f, 0.0f, 0x1.b6c058p-118f, 0.0f, 0.0f,
     0x1.7999cep-112f, 0x1.7c686ep-87f, 0x1.2b60b4p-23f, 0.0f, 0.0f, 0x1.e9b408p-68f,
     0.0f, 0x1.8119aap-115f, 0x1.c77062p-12f, 0x1.df27fp-4f, 0x1.80aa22p-76f,
     0x1.2a7cbep-73f, 0.0f, 0x1.969482p-36f, 0x1.3b1accp-95f, 0.0f, 0x1.2f1602p-41f,
     0x1.072b8cp-18f, 0.0f, 0.0f, 0x1.e27e1cp-41f, 0x1.2aa90ep-48f, 0.0f,
     0x1.d53486p-65f, 0x1.8ab65p-30f, 0x1.341dcep-66f, 0x1.fc7a1ep-126f,
     0x1.17a692p-53f, 0.0f, 0x1.1a83dap-61f, 0x1.2be79cp-86f, 0.0f, 0x1.f8bceep-104f,
     0x1.2500bp-19f, 0x1.e2018p-96f, 0x1.55d2ccp-117f, 0.0f, 0x1.325124p-31f,
     0x1.aa8f92p-71f, 0x1.4724fcp-35f, 0.0f, 0x1.369838p-91f, 0.0f, 0x1.42445ap-78f,
     0.0f, 0x1.1a513cp-75f, 0x1.3cc8b6p-103f, 0.0f, 0x1.e7c17cp-8f, 0x1.39cc2cp-92f,
     0x1.9941f2p-27f, 0x1.c07d4p-109f, 0x1.0bcacep-36f, 0.0f, 0x1.4fe48cp-116f, 0.0f,
     0x1.fbde8p-109f, 0.0f, 0x1.6716aep-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ea8d0ep-38f, 0.0f, 0x1.e16a2ep-27f, 0.0f, 0.0f, 0x1.0cc1e8p-47f, 0.0f,
     0x1.9c2264p-64f, 0.0f, 0.0f, 0.0f, 0x1.4bb1ccp-38f, 0x1.09a62ep-39f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.de4d1p-2f, 0x1.e2b3c4p-107f, 0.0f, 0.0f, 0.0f, 0x1.6cc82ap-124f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bca556p-109f, 0.0f, 0.0f, 0.0f,
     0x1.337e42p-122f, 0x1.4ad4a6p-36f, 0.0f, 0x1.71fe1ep-24f, 0.0f, 0x1.4d062p-9f,
     0.0f, 0.0f, 0x1.6d697p-77f, 0.0f, 0x1.1314c4p-97f, 0.0f, 0.0f, 0x1.8f5566p-10f,
     0.0f, 0.0f, 0x1.c51c0ep-13f, 0.0f, 0.0f, 0.0f, 0x1.c39adp-93f, 0x1.f94b7cp-74f,
     0x1.aea422p-54f, 0.0f, 0.0f, 0.0f, 0x1.647a5p-107f, 0.0f, 0.0f, 0x1.9c23a4p-11f,
     0x1.293152p-64f, 0.0f, 0.0f, 0x1.ef7d5cp-70f, 0x1.2ca774p-112f, 0x1.a025bcp-91f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f5fce4p-9f, 0x1.07d6b2p-49f, 0.0f,
     0x1.70502ap-8f, 0.0f, 0.0f, 0.0f, 0x1.3a0fe6p-101f, 0.0f, 0x1.48b636p-113f, 0.0f,
     0x1.acdd0cp-47f, 0x1.44d31p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e98f44p-40f,
     0.0f, 0.0f, 0x1.81e392p-118f, 0.0f, 0x1.c825fcp-42f, 0.0f, 0x1.a3cb18p-64f,
     0x1.a889dap-113f, 0x1.22fd48p-9f, 0x1.58e74cp-102f, 0x1.bd140ap-32f, 0.0f, 0.0f,
     0.0f, 0x1.d0f90ap-111f, 0.0f, 0x1.22276ep-117f, 0.0f, 0x1.bb263ap-9f, 0.0f, 0.0f,
     0x1.e7fd8cp-101f, 0.0f, 0.0f, 0.0f, 0x1.a7b7bep-116f, 0x1.3190cap-76f,
     0x1.9cfa9cp-115f, 0.0f, 0.0f, 0.0f, 0x1.6fd35cp-101f, 0.0f, 0x1.189a1p-115f,
     0.0f, 0.0f, 0.0f, 0x1.be0134p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.655c1ap-39f,
     0.0f, 0.0f, 0x1.89e89p-70f, 0x1.7abd26p-53f, 0.0f, 0x1.cc8dc2p-41f,
     0x1.0e4d64p-17f, 0x1.17755cp-11f, 0x1.c2a1aap-101f, 0x1.039da2p-122f, 0.0f,
     0x1.c7d13ep-54f, 0.0f, 0.0f, 0x1.61e6f6p-105f, 0.0f, 0.0f, 0x1.a5be9p-41f, 0.0f,
     0x1.c5c118p-14f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.afbd4ep-102f, 0x1.b7e73cp-88f,
     0x1.3c32c6p-40f, 0.0f, 0.0f, 0x1.d57ad8p-62f, 0.0f, 0.0f, 0x1.44e98ep-46f, 0.0f,
     0.0f, 0x1.b9e304p-8f, 0x1.0add3p-78f, 0.0f, 0x1.9d3006p-29f, 0x1.31d7eep-126f,
     0x1.07b726p-70f, 0.0f, 0.0f, 0x1.7bf574p-123f, 0.0f, 0.0f, 0x1.771164p-55f, 0.0f,
     0.0f, 0x1.748162p-107f, 0x1.ad5a56p-21f, 0.0f, 0.0f, 0x1.0a457p-92f, 0.0f, 0.0f,
     0.0f, 0x1.d4955ep-3f, 0x1.c3468p-96f, 0.0f, 0.0f, 0x1.be58ep-46f,
     0x1.73f67ep-37f, 0x1.8914dcp-45f, 0.0f, 0x1.8b0604p-13f, 0x1.c0474p-38f, 0.0f,
     0x1.95a9f8p-104f, 0.0f, 0.0f, 0x1.392eb6p-77f, 0x1.4d5642p-8f, 0x1.741c9p-67f,
     0.0f, 0.0f, 0x1.a111f2p-75f, 0x1p0f, 0.0f, 0.0f, 0x1.2a111ep-55f,
     0x1.be6a88p-53f, 0x1.0318a4p-92f, 0.0f, 0x1.51bc5cp-125f, 0.0f, 0.0f, 0.0f,
     0x1.29dbe2p-58f, 0x1.c560cap-53f, 0.0f, 0x1.c1ea0cp-108f, 0.0f, 0x1.389a3p-84f,
     0x1.4f33fp-107f, 0x1.80df36p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.86ff3ap-24f,
     0x1.bf69c4p-40f, 0x1.dbdf78p-10f, 0.0f, 0.0f, 0x1.18893cp-91f, 0x1.16b5dep-54f,
     0x1.c20eeap-48f, 0x1.ad06aep-26f, 0x1.3a1136p-37f, 0x1.cad246p-11f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.590e8p-111f, 0x1.851386p-74f, 0.0f, 0x1.33ee3ep-117f, 0.0f,
     0x1.24e0bep-113f, 0.0f, 0.0f, 0.0f, 0x1.f44f8p-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.4d8fbp-100f, 0.0f, 0x1.273adap-104f, 0x1.fa6ce6p-105f,
     0x1.bc5796p-117f, 0x1.5481eap-77f, 0x1.0689p-34f, 0.0f, 0x1.ddac4ep-84f, 0.0f,
     0.0f, 0x1.5e2ccp-63f, 0.0f, 0x1.c94c68p-60f, 0.0f, 0x1.327246p-34f,
     0x1.fb2ad8p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a789eap-62f, 0.0f,
     0x1.3856cap-102f, 0.0f, 0x1.31f1fp-85f, 0.0f, 0x1.06aae2p-5f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e91974p-75f, 0.0f, 0x1.1e9ab2p-114f, 0x1.81e62cp-31f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.1bfb96p-96f, 0.0f, 0.0f, 0.0f, 0x1.62dd08p-107f, 0.0f, 0x1.a83d2ep-18f,
     0.0f, 0x1.034754p-24f, 0.0f, 0x1.f1eb2ap-10f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.184d9ep-73f, 0.0f, 0x1.49e262p-87f, 0x1.e87f0cp-94f, 0x1.7c35bcp-60f,
     0x1.d00114p-76f, 0.0f, 0x1.ef4e24p-72f, 0.0f, 0.0f, 0x1.4b4c9ap-36f, 0.0f,
     0x1.7f82d6p-110f, 0.0f, 0x1.f760acp-84f, 0.0f, 0x1.11733ep-118f, 0x1.a9a9e2p-37f,
     0x1.8a572p-69f, 0x1.949e08p-113f, 0x1.997356p-120f, 0.0f, 0x1.a9358cp-15f,
     0x1.1a6e94p-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.da858ap-1f, 0.0f,
     0x1.1b7e52p-72f, 0x1.adecaep-8f, 0x1.38e962p-60f, 0x1.f5f1e4p-42f,
     0x1.052e6ap-16f, 0.0f, 0x1.42a89ep-60f, 0.0f, 0x1.1ccaep-93f, 0x1.c7689cp-21f,
     0.0f, 0x1.ca5ff6p-89f, 0x1.b13074p-36f, 0x1.ea517cp-122f, 0.0f, 0x1.1f0664p-49f,
     0x1.edb32ep-84f, 0x1.578a3ep-101f, 0.0f, 0x1.3d0692p-71f, 0x1.afbb6p-122f,
     0x1.6d71eap-67f, 0x1.2c00fap-51f, 0.0f, 0.0f, 0x1.e18b4ap-19f, 0x1.b6b97p-74f,
     0.0f, 0x1.7f360cp-82f, 0.0f, 0.0f, 0x1.d83f16p-112f, 0x1.0476eap-1f, 0.0f,
     0x1.d41d2p-51f, 0x1.77fd8ep-22f, 0x1.8b852cp-121f, 0.0f, 0x1.1fa476p-84f,
     0x1.7ad55p-46f, 0x1.e54a2p-114f, 0.0f, 0.0f, 0x1.eed1e2p-34f, 0.0f, 0.0f,
     0x1.6fcabap-58f, 0x1.0a5014p-17f, 0x1.f0a7d6p-25f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f9937ep-13f, 0x1.7fbfc4p-55f, 0x1.216522p-111f, 0.0f, 0x1.8ceceep-116f, 0.0f,
     0x1.9f6412p-32f, 0x1.92ea02p-41f, 0.0f, 0.0f, 0x1.dd58a6p-101f, 0x1.763c98p-19f,
     0.0f, 0.0f, 0.0f, 0x1.78760ap-37f
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
            tmp1 = Sleef_finz_erff1_u10purecfma(tmp0);
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
    printf("Sleef_finz_erff1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_erff1_u10purecfma bench acc %a\n", global_bench_acc);
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
