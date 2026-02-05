/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_logf1_u35purecfma.c --function \
 *     Sleef_finz_logf1_u35purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile float external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.a23e7ap-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b6f6c2p-6f, 0x1.4bd0eap-113f,
     0x1.9c82ap-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dd87ecp-34f, 0.0f,
     0x1.79426cp-117f, 0x1.5c5dap-73f, 0x1.49b8d4p-82f, 0.0f, 0x1.964e84p-44f,
     0x1.755b86p-39f, 0.0f, 0.0f, 0x1.fe6ed8p-8f, 0x1.5a816ep-38f, 0x1.bae66ep-39f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8130eep-29f, 0x1.8b34ecp-87f, 0.0f,
     0x1.58ae7ap-98f, 0x1.fee454p-41f, 0x1.606e3ep-99f, 0.0f, 0x1.3ab8b2p-104f, 0.0f,
     0x1.9fc83p-12f, 0x1.a71d04p-3f, 0x1.440a54p-99f, 0.0f, 0.0f, 0.0f,
     0x1.eec55p-68f, 0.0f, 0.0f, 0x1.c2450ap-68f, 0.0f, 0x1.febc5p-120f, 0.0f, 0.0f,
     0x1.73e032p-53f, 0.0f, 0x1.71cfd6p-36f, 0.0f, 0.0f, 0x1.46924p-116f,
     0x1.60c7b2p-88f, 0.0f, 0.0f, 0.0f, 0x1.c5fc44p-35f, 0.0f, 0.0f, 0x1.217bbap-11f,
     0x1.968e86p-22f, 0x1.3fc7fep-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.343316p-117f, 0x1.d95d3cp-31f, 0x1.e125a6p-91f, 0.0f, 0x1.19cdfcp-13f, 0.0f,
     0.0f, 0x1.0fc8d8p-47f, 0x1.148b46p-79f, 0.0f, 0x1.5120dap-63f, 0x1.b3d0ap-13f,
     0x1.654de2p-63f, 0.0f, 0.0f, 0x1.969d96p-40f, 0x1.429b28p-78f, 0x1.b2e1e2p-48f,
     0.0f, 0x1.63911p-29f, 0.0f, 0x1.6d656ap-17f, 0x1.115e68p-12f, 0x1.2fb964p-67f,
     0x1.86de52p-126f, 0.0f, 0x1.664704p-1f, 0.0f, 0.0f, 0x1.5a7ad8p-117f, 0.0f,
     0x1.1e414cp-27f, 0.0f, 0x1.383e86p-92f, 0x1.231c3ep-107f, 0.0f, 0.0f,
     0x1.ca1fe2p-125f, 0x1.7093f4p-121f, 0x1.829b8cp-63f, 0.0f, 0x1.182268p-100f,
     0.0f, 0.0f, 0x1.221a12p-32f, 0.0f, 0.0f, 0.0f, 0x1.31bdcep-61f, 0.0f,
     0x1.cdd3b8p-67f, 0x1.a5d6eap-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e11ebap-115f, 0x1.b7de06p-119f, 0x1.2aeb04p-38f, 0.0f, 0x1.96473ap-104f,
     0x1.38f792p-25f, 0x1.25621p-112f, 0x1.888e14p-98f, 0x1.54c3c6p-34f,
     0x1.5948d6p-119f, 0.0f, 0x1.2563aep-9f, 0x1.3f831p-123f, 0x1.8aadc4p-17f,
     0x1.a229eap-116f, 0x1.69feaep-117f, 0x1.9cacfep-50f, 0x1.aee64ap-110f,
     0x1.781edap-10f, 0.0f, 0x1.1919e8p-34f, 0.0f, 0x1.c30634p-28f, 0.0f, 0.0f,
     0x1.881ab8p-125f, 0.0f, 0x1.a5b3cep-51f, 0x1.497008p-57f, 0.0f, 0x1.5be81ep-14f,
     0.0f, 0.0f, 0x1.700932p-98f, 0.0f, 0.0f, 0x1.1cfc7cp-125f, 0.0f, 0x1.f7c1bp-119f,
     0x1.1b2392p-10f, 0.0f, 0.0f, 0x1.f14f58p-106f, 0.0f, 0.0f, 0.0f, 0x1.e51cb8p-67f,
     0.0f, 0x1.dc9fc6p-73f, 0x1.3ee532p-41f, 0.0f, 0x1.711deep-54f, 0x1.6e190ap-45f,
     0x1.46598ap-111f, 0.0f, 0x1.37546ep-101f, 0x1.a1d986p-83f, 0x1.50eff4p-68f,
     0x1.0dde06p-48f, 0x1.3fe46ap-95f, 0.0f, 0x1.e1d492p-126f, 0.0f, 0x1.90f91ap-47f,
     0x1.a1cd6cp-72f, 0.0f, 0.0f, 0x1.6a171cp-112f, 0.0f, 0x1.39ace6p-75f, 0.0f,
     0x1p0f, 0x1.1912eap-49f, 0x1.3f6f44p-70f, 0x1.ce75aap-38f, 0x1.b2feb4p-58f, 0.0f,
     0x1.cc45ep-54f, 0.0f, 0.0f, 0x1.358ae6p-83f, 0.0f, 0.0f, 0x1.836a68p-56f, 0.0f,
     0x1.9a935p-53f, 0.0f, 0x1.68e6ep-5f, 0.0f, 0x1.48d5dap-96f, 0.0f,
     0x1.285548p-53f, 0x1.68e27p-120f, 0.0f, 0x1.09dd9cp-36f, 0.0f, 0x1.16f4aap-58f,
     0.0f, 0.0f, 0.0f, 0x1.6650e2p-26f, 0x1.90d01p-98f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c81ec2p-7f, 0.0f, 0x1.7d2fd8p-95f, 0x1.26d4dap-124f, 0.0f, 0.0f, 0.0f,
     0x1.9ab41ap-96f, 0.0f, 0.0f, 0x1.77684ap-12f, 0x1.fb5996p-47f, 0.0f,
     0x1.63bdf2p-73f, 0.0f, 0.0f, 0.0f, 0x1.380e66p-99f, 0x1.5549fep-63f,
     0x1.0f85bcp-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ea212cp-11f,
     0x1.162d1ap-19f, 0.0f, 0x1.59ab88p-46f, 0x1.a2b1f8p-12f, 0x1.13c224p-70f, 0.0f,
     0.0f, 0x1.ae84f6p-14f, 0x1.e27cp-126f, 0.0f, 0.0f, 0x1.ad9aa2p-12f,
     0x1.314d24p-41f, 0x1.5c099cp-14f, 0.0f, 0x1.8bc892p-41f, 0.0f, 0x1.26efb2p-101f,
     0.0f, 0.0f, 0x1.7e5e32p-96f, 0x1.a545bap-91f, 0.0f, 0.0f, 0.0f, 0x1.cdad1ep-28f,
     0.0f, 0.0f, 0x1.ea7012p-18f, 0x1.9f4b5ap-24f, 0x1.b9658ep-121f, 0x1.f903e8p-62f,
     0x1.9f3becp-96f, 0.0f, 0x1.04f5dep-10f, 0.0f, 0x1.3c2e46p-11f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.7ee5e4p-97f, 0x1.774296p-49f, 0x1.8df77ap-32f, 0x1.dc73bep-26f,
     0x1.53545cp-25f, 0x1.2d3768p-65f, 0x1.ed246cp-27f, 0x1.f9e5a2p-21f,
     0x1.665dd8p-33f, 0x1.ae67fcp-101f, 0x1.7f9df2p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.4a6d2p-77f, 0.0f, 0x1.147b1p-68f, 0x1.af1314p-20f, 0.0f, 0.0f,
     0x1.162b5cp-9f, 0x1.3f3fb2p-103f, 0.0f, 0x1.4da0f4p-58f, 0x1.2d2e4cp-4f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c4d1cap-107f, 0.0f, 0x1.e7245ap-53f, 0x1.ce9aeep-51f,
     0.0f, 0x1.6f3cd8p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.10ca76p-33f, 0x1.632fb2p-72f, 0.0f, 0.0f, 0x1.87aa2ap-72f, 0.0f,
     0x1.6bff08p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2c467ep-85f, 0.0f,
     0x1.34f0b8p-89f, 0x1.bcefc8p-36f, 0.0f, 0x1.31a0c8p-27f, 0x1.7dafa6p-8f, 0.0f,
     0x1.8ec3e8p-80f, 0x1.f408ccp-19f, 0.0f, 0x1.a3200cp-96f, 0x1.a024acp-65f,
     0x1.5a7dc2p-62f, 0.0f, 0.0f, 0x1.3ac072p-58f, 0.0f, 0.0f, 0x1.a2c234p-56f,
     0x1.891f32p-120f, 0.0f, 0.0f, 0x1.dc3ab8p-30f, 0x1.300fd8p-105f, 0.0f, 0.0f,
     0.0f, 0x1.69fadp-35f, 0.0f, 0x1.635b42p-44f, 0.0f, 0x1.6a16dap-20f, 0.0f,
     0x1.3c20aap-78f, 0x1.da7ef6p-73f, 0.0f, 0x1.23d762p-92f, 0x1.ec49c2p-6f,
     0x1.18327ep-124f, 0x1.bbed6ep-51f, 0x1.cf710cp-106f, 0.0f, 0x1.024792p-31f,
     0x1.312228p-44f, 0x1.82057cp-75f, 0.0f, 0.0f, 0.0f, 0x1.cca238p-41f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e5ea54p-32f, 0.0f, 0.0f, 0.0f, 0x1.b6e654p-125f,
     0x1.521a48p-116f, 0.0f, 0x1.490528p-53f, 0x1.4d2aa2p-16f, 0.0f, 0x1.46c97ap-99f,
     0x1.738118p-27f, 0x1.9d4b76p-95f, 0.0f, 0x1.a7a83cp-1f, 0.0f, 0x1.f0eca2p-10f,
     0.0f, 0.0f, 0x1.8f19bep-124f, 0x1.7c2854p-86f, 0x1.25c116p-125f, 0x1.0dd384p-75f,
     0x1.c58da8p-56f, 0x1.4368b8p-74f, 0x1.9c6556p-120f, 0x1.bb9194p-102f, 0.0f,
     0x1.679f2cp-118f, 0.0f, 0x1.aff536p-76f, 0.0f, 0x1.1e9c9cp-18f, 0.0f,
     0x1.971c26p-65f, 0.0f, 0x1.781456p-27f, 0.0f, 0x1.e1532p-88f, 0.0f,
     0x1.28c6ccp-123f, 0.0f, 0x1.63795ep-92f, 0.0f, 0.0f, 0x1.2f08cp-84f, 0.0f,
     0x1.dcdeb2p-67f, 0x1.90fc04p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cc857ap-66f, 0.0f,
     0.0f, 0x1.d1768ap-82f, 0.0f, 0.0f, 0.0f, 0x1.3f2d72p-69f, 0.0f, 0.0f, 0.0f,
     0x1.72c812p-36f, 0x1.5c3f28p-95f, 0.0f, 0.0f, 0x1.f5729ep-61f, 0.0f, 0.0f,
     0x1.d3ab0cp-86f, 0.0f, 0x1.8f46bep-81f, 0x1.de49c4p-88f, 0.0f, 0.0f,
     0x1.e7dd74p-61f, 0.0f, 0.0f, 0.0f, 0x1.d3fcbp-80f, 0.0f, 0x1.04f294p-101f, 0.0f,
     0.0f, 0x1.83126ep-22f, 0.0f, 0x1.80c752p-101f, 0x1.caae9ep-78f, 0x1.d280dep-69f,
     0.0f, 0.0f, 0x1.8b544cp-17f, 0x1.2e7bcap-80f, 0x1.b9476cp-5f, 0x1.6ba99ap-116f,
     0.0f, 0.0f, 0x1.801cp-61f, 0x1.28cce8p-101f, 0.0f, 0.0f, 0x1.3ef582p-117f,
     0x1.6498b2p-124f, 0x1.30e46ep-53f, 0.0f, 0x1.9c44fep-60f, 0.0f, 0x1.0f672ep-97f,
     0.0f, 0.0f, 0x1.fd4864p-89f, 0.0f, 0x1.78bf66p-51f, 0.0f, 0x1.b8aeacp-19f, 0.0f,
     0.0f, 0x1.583cb8p-84f, 0.0f, 0x1.af44b8p-29f, 0x1.a4bd86p-101f, 0x1.3d86dep-60f,
     0x1.222742p-53f, 0x1.94ff3ep-81f, 0x1.2d5146p-117f, 0x1.fc1512p-62f,
     0x1.f54518p-107f, 0.0f, 0x1.27c53cp-101f, 0x1.b6a72ep-82f, 0x1.65a8e4p-113f,
     0x1.e4ab28p-53f, 0.0f, 0x1.0d15eap-63f, 0x1.b45adcp-112f, 0.0f, 0.0f, 0.0f,
     0x1.fdc646p-78f, 0.0f, 0.0f, 0x1.362c28p-80f, 0x1.91697cp-81f, 0.0f, 0.0f, 0.0f,
     0x1.71e49cp-54f, 0.0f, 0x1.408f56p-83f, 0.0f, 0x1.891e1ep-94f, 0.0f,
     0x1.c036e2p-100f, 0x1.fbfdc8p-28f, 0x1.b62c7cp-25f, 0.0f, 0.0f, 0.0f,
     0x1.a69a34p-91f, 0x1.a8054cp-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f7ff96p-29f, 0.0f, 0x1.699caep-48f, 0.0f, 0x1.887772p-95f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.3b3444p-28f, 0x1.677482p-90f, 0.0f, 0x1.b9d0dcp-41f, 0x1.1a2afap-2f,
     0x1.73d364p-47f, 0x1.98b99cp-85f, 0.0f, 0x1.6e1d6ep-34f, 0.0f, 0x1.0b85f2p-46f,
     0.0f, 0x1.2b356ep-49f, 0.0f, 0.0f, 0.0f, 0x1.fe9712p-18f, 0.0f, 0.0f,
     0x1.437242p-116f, 0.0f, 0x1.ac5eaap-80f, 0.0f, 0x1.63848cp-45f, 0x1.8db468p-74f,
     0x1.67a44ep-116f, 0.0f, 0.0f, 0x1.b04fcep-53f, 0x1.88a358p-67f, 0.0f, 0.0f, 0.0f,
     0x1.0046f8p-74f, 0x1.fde8c4p-68f, 0.0f, 0x1.2332fp-5f, 0x1.8e2cbcp-3f, 0.0f,
     0x1.918984p-113f, 0x1.374a6cp-52f, 0x1.d52a3ap-73f, 0.0f, 0x1.3369bap-122f, 0.0f,
     0x1.3ac0a4p-1f, 0.0f, 0.0f, 0x1.1e2deap-124f, 0.0f, 0x1.70bb7p-36f,
     0x1.12b9ep-46f, 0.0f, 0.0f, 0x1.c00e5ep-26f, 0x1.4d5d5ap-82f, 0x1.3587aep-71f,
     0.0f, 0x1.b0bce4p-80f, 0x1.adbcd4p-15f, 0x1.eaed46p-72f, 0.0f, 0x1.5c74dcp-118f,
     0.0f, 0.0f, 0x1.928e88p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.30b26p-76f, 0.0f,
     0.0f, 0.0f, 0x1.d0c1bp-50f, 0x1.2cbcb8p-106f, 0x1.9e50cep-104f, 0x1.ea4cbap-81f,
     0x1.9795c4p-48f, 0x1.0c7fbcp-53f, 0x1.ec8b3cp-106f, 0x1.5ae768p-112f,
     0x1.6f2838p-83f, 0.0f, 0x1.d9ce9p-112f, 0x1.9109b4p-72f, 0.0f, 0.0f,
     0x1.632936p-81f, 0x1.b84bf2p-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f,
     0x1.cc4004p-30f, 0x1.3a3d16p-5f, 0x1.682bp-80f, 0.0f, 0x1.7eb978p-121f,
     0x1.a86bb4p-57f, 0x1.417c9cp-69f, 0x1.6066d8p-122f, 0x1.1de644p-19f, 0.0f, 0.0f,
     0.0f, 0x1.b8759cp-109f, 0.0f, 0x1.2a2fa6p-112f, 0.0f, 0x1.d2e028p-71f, 0.0f,
     0x1.76336cp-44f, 0x1.629c2ep-80f, 0.0f, 0.0f, 0x1.cc8e54p-59f, 0x1.4f9ff2p-41f,
     0x1.d536cep-51f, 0x1.f374f2p-47f, 0.0f, 0.0f, 0.0f, 0x1.b0fep-98f, 0.0f,
     0x1.fdb87p-72f, 0.0f, 0x1.35528p-64f, 0x1.0f7dbcp-12f, 0x1.ee9526p-42f,
     0x1.3a256cp-81f, 0x1.b35202p-60f, 0x1.733396p-100f, 0.0f, 0x1.751be6p-123f,
     0x1.39b6f8p-20f, 0.0f, 0.0f, 0x1.d963dep-72f, 0.0f, 0.0f, 0x1.1f8ecp-42f,
     0x1.b37382p-124f, 0.0f, 0x1.3e83ep-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0a6e54p-90f, 0.0f, 0x1.394a0ap-120f, 0x1.d5338p-68f, 0.0f, 0.0f,
     0x1.13dbf8p-105f, 0.0f, 0.0f, 0x1.1f5ef6p-99f, 0.0f, 0x1.1e0cbp-41f, 0.0f,
     0x1.a0d896p-2f, 0.0f, 0.0f, 0.0f, 0x1.1d21ccp-57f, 0x1.cd0a1ep-67f,
     0x1.49ed7ap-42f, 0x1p0f, 0.0f, 0.0f, 0x1.ecfe66p-8f, 0.0f, 0x1.8bd326p-53f, 0.0f,
     0.0f, 0x1.9e6f1cp-84f, 0x1.f3d3b8p-17f, 0.0f, 0x1.82946ap-30f, 0.0f,
     0x1.dda366p-59f, 0x1.ee069p-72f, 0.0f, 0.0f, 0x1.5ab11ap-1f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.31485p-16f, 0.0f, 0x1.fb6072p-47f, 0.0f, 0x1.1c24fp-49f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4384e6p-93f, 0.0f, 0.0f, 0x1.0d8ff4p-84f, 0.0f,
     0x1.0bd5e4p-56f, 0x1.78b94ep-46f, 0x1.f32f12p-95f, 0.0f, 0x1.52b5fap-7f,
     0x1.d1a884p-53f, 0x1.e1f272p-18f, 0.0f, 0x1.e2baa6p-124f, 0.0f, 0x1.b72e44p-77f,
     0.0f, 0x1.963c6cp-113f, 0x1.e33eep-102f, 0x1.7a4204p-17f, 0x1.0950e4p-47f,
     0x1.b79a8ep-58f, 0.0f, 0x1.f0c16cp-13f, 0x1.98ff6cp-120f, 0x1.59786ep-8f, 0.0f,
     0.0f, 0.0f, 0x1.8acd9ep-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bb8f08p-61f, 0.0f,
     0.0f, 0x1.1695dep-15f, 0x1.0f57ap-39f, 0.0f, 0x1.456ba2p-126f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.93fc7cp-42f, 0.0f, 0x1.bbe572p-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.501368p-125f, 0x1.c40052p-1f, 0x1.3dc2d8p-50f, 0.0f, 0.0f,
     0x1.0a9d5ep-65f, 0x1.86e6d4p-104f, 0.0f, 0.0f, 0x1.d2b136p-126f, 0.0f, 0.0f,
     0x1.32ec7p-77f, 0x1.a10e8ep-74f, 0x1.0e8e46p-59f, 0.0f, 0x1.6c311cp-24f, 0.0f,
     0x1.08d6c2p-34f, 0x1.1b1bfap-9f, 0x1.fffc12p-68f, 0x1.90cb66p-55f,
     0x1.17e582p-104f, 0.0f, 0x1.8d9422p-80f, 0.0f, 0.0f, 0.0f, 0x1.04e0aep-61f, 0.0f,
     0.0f, 0x1.6b43cp-76f, 0x1.9eec28p-75f, 0x1.565004p-1f, 0x1.acc098p-34f, 0.0f,
     0x1.1c5e4ap-18f, 0x1.c16e2ep-71f, 0x1.6d6278p-14f, 0.0f, 0x1.1c2358p-15f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.88a9p-2f, 0x1.88a894p-29f, 0x1.44dfbap-97f, 0.0f,
     0.0f, 0x1.f3943p-80f, 0.0f, 0x1.7fdb5cp-18f, 0x1.d033eap-12f, 0x1.be1fe2p-49f,
     0.0f, 0x1.0493ep-30f, 0x1.10fe4ep-50f, 0x1.658896p-27f, 0.0f, 0x1.43bbe8p-64f,
     0.0f, 0.0f, 0x1.66468p-125f, 0.0f, 0.0f, 0.0f, 0x1.540b5ap-8f, 0.0f, 0.0f,
     0x1.a27e08p-33f, 0x1.efe366p-74f, 0x1.f2d2a8p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.962b06p-8f, 0.0f, 0x1.147c3cp-61f, 0x1.107876p-63f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bb3154p-96f, 0.0f, 0.0f, 0x1.bca218p-78f, 0x1.76b15p-61f, 0.0f,
     0x1.bbddc2p-72f, 0x1.491ddap-113f, 0.0f, 0x1.fd5752p-70f, 0x1.1ea12cp-43f, 0.0f,
     0.0f, 0x1.710256p-38f, 0.0f, 0.0f, 0.0f, 0x1.a82666p-35f, 0x1.e95016p-43f,
     0x1.828576p-7f, 0.0f, 0.0f, 0x1.57d782p-53f, 0x1.65ccfp-46f, 0x1.2ba918p-50f,
     0x1.b49cbap-69f, 0.0f, 0x1.e4b9fcp-115f, 0x1.c09edp-29f, 0.0f, 0.0f,
     0x1.444566p-22f, 0x1.869b6cp-115f, 0x1.a21e52p-124f, 0x1.d07814p-29f,
     0x1.c2bfbap-115f, 0x1.5b4944p-90f, 0x1.286eb4p-88f, 0x1.7db39cp-125f, 0.0f, 0.0f,
     0.0f, 0x1.61408cp-50f, 0x1.7b0bf2p-31f, 0.0f
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
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = 0.0f;
    tmp = __cos_counter_num(0);
    timer = tmp;
    j = INT32_C(0);

    for (;(j < INT32_C(10000));){
        float bench_acc;
        int32_t i;
        float tmp0;
        int32_t tmp1;

        i = INT32_C(0);
        bench_acc = 0.0f;

        for (;(i < INT32_C(1001));){
            float tmp0;
            float tmp1;
            float tmp2;
            int32_t tmp3;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_finz_logf1_u35purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = bench_acc + tmp1;
            bench_acc = tmp2;
            tmp3 = i + INT32_C(1);
            i = tmp3;
        }
        tmp0 = global_bench_acc + bench_acc;
        global_bench_acc = tmp0;
        tmp1 = j + INT32_C(1);
        j = tmp1;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_finz_logf1_u35purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_logf1_u35purecfma bench acc %a\n", global_bench_acc);
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
