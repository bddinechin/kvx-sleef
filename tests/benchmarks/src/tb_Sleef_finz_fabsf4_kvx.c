/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_fabsf4_kvx.c --function Sleef_finz_fabsf4_kvx \
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
     0x1.0ab1ccp-74f, 0x1.24df74p-72f, 0x1.5a02a8p-87f, 0.0f, 0.0f, 0.0f,
     0x1.360af6p-23f, 0.0f, 0x1.45f174p-88f, 0x1.ea5f54p-47f, 0x1.dc90a4p-60f,
     0x1.94697cp-28f, 0x1.ebd14ep-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.50d9dap-124f,
     0x1.ff5d5p-16f, 0.0f, 0x1.4581aep-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.19dc2cp-44f, 0x1.74902cp-33f, 0x1.ffcba2p-49f, 0.0f, 0.0f, 0.0f,
     0x1.73815p-120f, 0.0f, 0x1.bb6d48p-125f, 0x1.0ae89cp-100f, 0.0f, 0x1.fcb566p-13f,
     0.0f, 0x1.d0195cp-122f, 0x1.76e9cap-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.376d8ap-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b95d04p-76f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c5a452p-116f, 0x1.dfffbep-96f, 0.0f, 0.0f, 0.0f, 0x1.19cf52p-94f,
     0x1.437af4p-14f, 0x1.71d4fp-104f, 0x1.8fd19cp-102f, 0.0f, 0.0f, 0x1.624582p-11f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.08096ap-23f, 0x1.b5e76ap-30f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.6bf756p-49f, 0x1.96557ap-111f, 0.0f, 0.0f, 0x1.38a878p-20f, 0.0f,
     0x1.3c4fecp-10f, 0x1.c15e6ep-10f, 0x1.f59756p-10f, 0.0f, 0x1.a1231ap-17f,
     0x1.e0d87ep-115f, 0.0f, 0.0f, 0x1.13a752p-1f, 0.0f, 0.0f, 0x1.05000cp-67f, 0.0f,
     0x1.aea1fp-122f, 0.0f, 0.0f, 0x1.d9e988p-104f, 0.0f, 0.0f, 0.0f, 0x1.621faap-67f,
     0x1.46a568p-19f, 0.0f, 0x1.188158p-15f, 0.0f, 0.0f, 0x1.f3727ap-38f,
     0x1.66e06cp-82f, 0x1.8db97ep-100f, 0x1.598ffap-41f, 0.0f, 0.0f, 0.0f,
     0x1.61ed64p-126f, 0.0f, 0x1.92c38ep-27f, 0.0f, 0x1.b30404p-88f, 0x1.e0aa78p-116f,
     0.0f, 0x1.6ed2c4p-93f, 0x1.a9c5cap-113f, 0x1.2449c2p-107f, 0x1.738ffep-37f, 0.0f,
     0.0f, 0x1.808b56p-73f, 0x1.f11922p-88f, 0x1.b70e36p-99f, 0.0f, 0.0f,
     0x1.d1c8p-53f, 0.0f, 0.0f, 0x1.059c6cp-17f, 0.0f, 0x1.869864p-29f, 0.0f,
     0x1.38fd5p-42f, 0.0f, 0x1.e5d254p-105f, 0.0f, 0x1.7a28e8p-39f, 0x1.463fccp-15f,
     0x1.bb61dap-23f, 0x1.9361dep-77f, 0.0f, 0.0f, 0x1.cb88f6p-109f, 0.0f, 0.0f,
     0x1.7f55fep-1f, 0x1.731276p-57f, 0x1.0ec76p-40f, 0.0f, 0x1.d9e61cp-80f,
     0x1.4e1dbep-34f, 0x1.73b704p-77f, 0.0f, 0x1.ec579p-37f, 0.0f, 0.0f,
     0x1.61da54p-65f, 0.0f, 0x1.8885d8p-9f, 0x1.95077cp-102f, 0.0f, 0x1.bcf37cp-119f,
     0.0f, 0.0f, 0.0f, 0x1.11dc24p-22f, 0.0f, 0.0f, 0.0f, 0x1.92fcc8p-126f, 0.0f,
     0.0f, 0x1.b7f43ep-102f, 0.0f, 0x1.5d15b2p-72f, 0.0f, 0x1.c40964p-23f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a86164p-94f, 0x1.f0096cp-19f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.059c88p-59f, 0.0f, 0x1.dd7824p-15f, 0.0f, 0.0f, 0.0f, 0x1.5850d2p-74f, 0.0f,
     0x1.5c7d7ep-107f, 0.0f, 0x1.174f1cp-3f, 0x1.d5ca74p-76f, 0x1.3e8ccep-62f,
     0x1.f760fep-76f, 0.0f, 0.0f, 0x1.1959e4p-45f, 0x1.7ab1cap-116f, 0.0f,
     0x1.6cf81cp-64f, 0.0f, 0x1.17f164p-100f, 0.0f, 0x1.aaa7dp-27f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.6f126cp-3f, 0x1.24474ap-51f, 0x1.1714a8p-98f, 0x1.4fb2eep-106f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.27ac16p-27f, 0.0f, 0.0f,
     0x1.8f3d08p-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9b1f6cp-81f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7271ccp-114f, 0.0f, 0.0f, 0x1.3b46bep-107f,
     0x1.fa4754p-42f, 0x1.65ca28p-124f, 0x1.1fb92cp-42f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.464816p-27f, 0x1.9851fp-108f, 0.0f, 0.0f, 0x1.0fcf3ep-42f, 0.0f, 0.0f,
     0x1.a6e2dep-115f, 0x1.a622f2p-51f, 0.0f, 0x1.0d5e9ap-78f, 0.0f, 0x1.d862fp-102f,
     0x1.6a199cp-29f, 0x1.0415ep-90f, 0x1.45b75cp-94f, 0.0f, 0.0f, 0x1.6210ap-38f,
     0x1.b744c8p-84f, 0.0f, 0x1.6b2f0ap-4f, 0x1.2afcc4p-48f, 0x1.c7dac4p-15f, 0.0f,
     0.0f, 0x1.d35802p-63f, 0.0f, 0x1.6816c2p-96f, 0.0f, 0.0f, 0.0f, 0x1p0f,
     0x1.292528p-41f, 0.0f, 0x1.081c42p-21f, 0x1.d9d96p-1f, 0x1.f7f70cp-42f,
     0x1.a1c168p-40f, 0.0f, 0x1.8b3e6ap-38f, 0.0f, 0x1.1910cep-14f, 0x1.4f0d36p-17f,
     0x1.31e09ap-47f, 0.0f, 0.0f, 0.0f, 0x1.e2b852p-59f, 0.0f, 0x1.cde734p-51f,
     0x1.4db63p-12f, 0x1.219ffp-114f, 0x1.28393ep-99f, 0.0f, 0.0f, 0.0f,
     0x1.b3531ap-63f, 0x1.155e54p-20f, 0x1.d9c1bp-55f, 0.0f, 0x1.7dc3ep-89f, 0.0f,
     0.0f, 0.0f, 0x1.861ep-67f, 0.0f, 0.0f, 0x1.d9b8c4p-44f, 0.0f, 0.0f,
     0x1.48fb2ep-62f, 0.0f, 0x1.d2dffap-119f, 0.0f, 0.0f, 0.0f, 0x1.d28064p-122f,
     0x1.e5416ap-9f, 0x1.433dd4p-82f, 0.0f, 0.0f, 0.0f, 0x1.fe6f38p-125f,
     0x1.fe1daap-3f, 0.0f, 0x1.09e958p-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4a55a8p-27f, 0.0f, 0.0f, 0.0f, 0x1.08458ap-105f, 0.0f, 0.0f, 0x1.6293aap-16f,
     0x1.867b06p-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b27a5ep-22f, 0.0f, 0.0f,
     0x1.31ac72p-17f, 0.0f, 0x1.b91034p-81f, 0x1.35f3f2p-66f, 0.0f, 0x1.d2cfp-32f,
     0x1.956c34p-28f, 0x1.571b82p-55f, 0.0f, 0x1.d07018p-31f, 0.0f, 0.0f, 0.0f,
     0x1.024c92p-6f, 0.0f, 0.0f, 0x1.298eb2p-65f, 0x1.8da40cp-117f, 0x1.5e6cb2p-119f,
     0x1.fc355cp-66f, 0x1.95c502p-9f, 0.0f, 0.0f, 0x1.96edcap-66f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.4f7b1ap-4f, 0.0f, 0x1.4bcd32p-58f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.af50e2p-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4585fap-69f, 0x1.4d2072p-47f,
     0x1.fe7734p-12f, 0.0f, 0x1.ef484ep-84f, 0x1.da3f9cp-77f, 0x1.53d634p-109f, 0.0f,
     0.0f, 0.0f, 0x1.d3dcf2p-19f, 0x1.3ad0aap-43f, 0x1.a713ccp-27f, 0x1.0382fcp-80f,
     0.0f, 0x1.69d1e8p-18f, 0.0f, 0x1.1edc26p-82f, 0.0f, 0x1.ed022cp-1f, 0.0f, 0.0f,
     0.0f, 0x1.702672p-46f, 0.0f, 0x1.7ac60ap-7f, 0.0f, 0x1.64f42p-124f, 0.0f, 0.0f,
     0x1.fc5f66p-59f, 0x1.c34e5ap-67f, 0x1.27b754p-72f, 0x1.2c33dp-108f,
     0x1.640d96p-102f, 0x1.986adcp-24f, 0x1.9d0be4p-62f, 0x1.8613p-55f,
     0x1.870194p-68f, 0.0f, 0.0f, 0.0f, 0x1.eb9978p-64f, 0.0f, 0.0f, 0x1.0aff32p-69f,
     0x1.e1bfdep-116f, 0x1.e98d34p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ff7af2p-45f, 0.0f,
     0x1.6a2d1ap-35f, 0.0f, 0x1.efe65cp-73f, 0x1.16fa1ap-64f, 0x1.e584aep-49f,
     0x1.595262p-59f, 0x1.bba34ap-112f, 0.0f, 0.0f, 0x1.b975e2p-113f, 0.0f, 0.0f,
     0.0f, 0x1.0b039p-12f, 0.0f, 0x1.24081ap-14f, 0.0f, 0x1.a20a98p-123f, 0.0f, 0.0f,
     0.0f, 0x1.b9e4dap-9f, 0.0f, 0x1.8c58ep-16f, 0.0f, 0.0f, 0x1.0737f4p-60f, 0.0f,
     0x1.1feb32p-57f, 0.0f, 0x1.5fdecp-24f, 0x1.ba27fcp-56f, 0x1.432474p-83f,
     0x1.1c186p-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cae9aap-11f,
     0x1.609246p-22f, 0.0f, 0x1.479ed2p-43f, 0x1.9d5992p-55f, 0.0f, 0.0f,
     0x1.cc549ep-117f, 0.0f, 0x1.63b2ecp-33f, 0.0f, 0.0f, 0.0f, 0x1.da6172p-96f, 0.0f,
     0.0f, 0x1.3034e4p-42f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.5bed74p-80f,
     0x1.7d778cp-9f, 0x1.d63f48p-70f, 0.0f, 0x1.07b37p-108f, 0.0f, 0.0f,
     0x1.3de25cp-48f, 0.0f, 0x1.1f9d9cp-120f, 0x1.7f9e9cp-72f, 0.0f, 0.0f, 0.0f,
     0x1.81570cp-102f, 0x1.4ff4c2p-3f, 0x1.3d597ep-22f, 0.0f, 0x1.8d620ap-103f,
     0x1.a1413cp-45f, 0.0f, 0.0f, 0.0f, 0x1.50cd68p-34f, 0.0f, 0.0f, 0.0f,
     0x1.8d2256p-51f, 0.0f, 0x1.7f0334p-4f, 0x1.0bf5dap-103f, 0.0f, 0x1.159d3p-126f,
     0.0f, 0.0f, 0x1.d89952p-13f, 0.0f, 0x1.738768p-97f, 0.0f, 0.0f, 0x1.8e76bep-70f,
     0.0f, 0x1.e35ee8p-84f, 0x1.c2bffep-108f, 0x1.24afe4p-77f, 0x1.408b08p-34f, 0.0f,
     0x1.ce539ep-81f, 0x1.c8788ep-31f, 0.0f, 0.0f, 0x1.c29072p-84f, 0x1.1db8c8p-97f,
     0x1.2d6266p-87f, 0x1.230d5ep-17f, 0x1.2fd974p-98f, 0.0f, 0.0f, 0x1.16ccep-48f,
     0.0f, 0.0f, 0x1.31c978p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.528f2cp-52f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.436a0ep-51f, 0x1.c13e02p-21f, 0.0f, 0x1.144c3ap-72f, 0.0f,
     0x1.d126bp-23f, 0x1.5f0b3p-92f, 0.0f, 0x1.c61336p-21f, 0.0f, 0x1.d08528p-51f,
     0x1.cfac0ap-92f, 0.0f, 0x1.e52634p-111f, 0.0f, 0x1.9351c4p-76f, 0.0f, 0.0f,
     0x1.f6d1b2p-42f, 0x1.31e67p-105f, 0x1.7d8488p-111f, 0.0f, 0.0f, 0.0f,
     0x1.6b51cp-101f, 0.0f, 0x1.a7202p-43f, 0x1.b0673ep-51f, 0.0f, 0x1.cf0d78p-87f,
     0.0f, 0x1.15eb26p-99f, 0x1.38f2ecp-101f, 0x1.dfa296p-29f, 0.0f, 0x1.9137cp-1f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d12994p-77f, 0x1.9f85bp-117f, 0.0f,
     0x1.73589p-15f, 0.0f, 0.0f, 0x1.ec98dep-55f, 0x1.7c6968p-38f, 0x1.548254p-98f,
     0.0f, 0x1.a07aaap-111f, 0x1.672bb2p-4f, 0.0f, 0x1.eb44ccp-83f, 0x1.4d8bf6p-49f,
     0.0f, 0.0f, 0x1.04b8aep-119f, 0.0f, 0.0f, 0x1.641856p-9f, 0.0f, 0x1.91bc66p-114f,
     0x1.65fc32p-28f, 0x1.c1584ep-19f, 0.0f, 0x1.d840c4p-71f, 0.0f, 0.0f, 0.0f,
     0x1.7c449cp-113f, 0x1.b62986p-29f, 0x1.a6fab8p-112f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.30ac5ep-75f, 0x1.3e59cap-119f, 0x1.3d6d9ep-62f, 0.0f, 0.0f,
     0x1.c8756ep-60f, 0x1.93e9eap-71f, 0.0f, 0x1.e5dc3ep-122f, 0x1.f0ba68p-78f, 0.0f,
     0.0f, 0.0f, 0x1.3bb3b2p-21f, 0.0f, 0x1.b82aap-50f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.427bfap-32f, 0.0f, 0.0f, 0x1.d969e4p-114f, 0x1.ff1bbap-59f, 0x1.77eab6p-44f,
     0.0f, 0.0f, 0x1.638626p-22f, 0x1.4d7502p-95f, 0x1.9a48d6p-73f, 0x1.15b294p-47f,
     0x1.2cd17ep-48f, 0x1.ad8a94p-34f, 0x1.e1fcb2p-65f, 0.0f, 0.0f, 0x1.0069bap-122f,
     0.0f, 0.0f, 0x1.bb4e2ap-49f, 0x1.2b964ap-70f, 0.0f, 0x1.012ecp-94f, 0.0f,
     0x1.3003e2p-124f, 0x1.75eb8ap-1f, 0x1.f87074p-46f, 0x1.8c0d8p-126f,
     0x1.98ff92p-36f, 0.0f, 0x1.dd3aecp-71f, 0.0f, 0x1.10446p-109f, 0x1.38995ap-101f,
     0.0f, 0x1.693378p-6f, 0x1.48b64cp-100f, 0x1.cfd15ep-120f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.49b61ep-46f, 0x1.002288p-46f, 0.0f, 0.0f, 0x1.6c1cb4p-106f, 0.0f, 0.0f,
     0x1.71cd6cp-4f, 0.0f, 0.0f, 0.0f, 0x1.60933ap-30f, 0x1.c14b8cp-20f,
     0x1.db5804p-12f, 0.0f, 0x1.469206p-68f, 0x1.0dcf76p-26f, 0x1.cea772p-69f, 0.0f,
     0x1.2328d8p-104f, 0x1.ab57bp-126f, 0x1.dd09d6p-36f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.903e14p-85f, 0.0f, 0.0f, 0.0f, 0x1.752dccp-96f, 0x1.c8ae8p-122f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a3d04cp-120f, 0.0f, 0x1.cc7432p-30f, 0.0f, 0.0f, 0.0f,
     0x1.5c0a8ap-118f, 0.0f, 0x1.b635cp-65f, 0x1.077ccap-28f, 0x1.baa6e4p-5f,
     0x1.217bd8p-32f, 0x1.635ed2p-7f, 0x1.eda8b4p-82f, 0x1.691072p-63f, 0.0f, 0.0f,
     0.0f, 0x1.5da8b6p-35f, 0x1.5d48cap-32f, 0x1.dff9ap-29f, 0x1.05646ep-29f,
     0x1.71ccf8p-12f, 0x1.12c9cp-65f, 0x1.c4b8acp-112f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.738472p-77f, 0.0f, 0.0f, 0x1.083accp-114f, 0x1.166d64p-14f, 0.0f,
     0x1.f76066p-15f, 0x1.e4e728p-76f, 0x1.28974cp-43f, 0x1.86ac22p-32f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.03e006p-11f, 0.0f, 0x1.e1082ep-16f, 0x1.278676p-26f, 0.0f,
     0x1.d5d94p-5f, 0.0f, 0x1.f6aad8p-42f, 0x1.dfbfc6p-77f, 0x1.4c2764p-75f,
     0x1.01ee1ap-38f, 0.0f, 0.0f, 0x1.b0fd08p-67f, 0x1.4f9772p-70f, 0.0f,
     0x1.68ab3ep-2f, 0x1.24eb9ap-3f, 0.0f, 0x1.8c1ab8p-61f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ff5442p-95f, 0.0f, 0.0f, 0.0f, 0x1.5e8c9ep-79f, 0.0f, 0x1.1b0258p-63f,
     0x1.8871aep-67f, 0.0f, 0.0f, 0x1.4db3b2p-54f, 0x1.ff149ap-22f, 0x1.10a75ap-77f,
     0x1.1a268ep-23f, 0x1.85fe92p-108f, 0x1.dc1798p-4f, 0x1.ec03bap-105f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e81464p-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e3c8c8p-68f,
     0.0f, 0.0f, 0x1.2b4a36p-35f, 0x1.ba917p-82f, 0x1.cd44bcp-108f, 0x1.ee4eap-112f,
     0x1.9e5da8p-26f, 0.0f, 0x1.957d0ep-90f, 0x1.e319fep-104f, 0.0f, 0.0f,
     0x1.d6ce66p-97f, 0x1.2b00fap-56f, 0.0f, 0x1.c5a0c6p-9f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.be594ep-83f, 0x1.0a80c6p-71f, 0.0f, 0.0f, 0x1.80b0e8p-23f, 0x1.0eee3ep-99f,
     0x1.3778e6p-99f, 0x1.9497bcp-99f, 0.0f, 0.0f, 0x1.90338p-78f, 0.0f,
     0x1.c9da3ep-63f, 0.0f, 0.0f, 0.0f, 0x1.9c3306p-121f, 0.0f, 0x1.d96528p-35f,
     0x1.cdc8d4p-89f, 0x1.e827ccp-34f, 0.0f, 0.0f, 0x1.853dfp-83f, 0.0f,
     0x1.8d0e14p-104f, 0x1.d6d144p-120f, 0x1.9d8e8cp-32f, 0.0f, 0.0f, 0.0f,
     0x1.df04b2p-114f, 0x1.c56d72p-66f, 0x1.e7165ep-89f, 0.0f, 0.0f, 0x1.31448ep-59f,
     0.0f, 0x1.b0b2b2p-45f, 0x1.a38ca6p-33f, 0x1.250bb8p-13f, 0.0f, 0x1.ea06c2p-119f,
     0x1.76ba8ep-76f, 0x1.cf4506p-112f, 0x1.b3ed5ap-80f, 0.0f, 0.0f, 0x1.7222bep-36f,
     0.0f, 0.0f, 0.0f, 0x1.300fa4p-73f, 0x1.870ab8p-70f, 0.0f, 0x1.4d101ep-4f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.70b782p-4f, 0x1.da9b82p-7f, 0x1.86af4cp-101f,
     0x1.45bcd6p-34f, 0.0f, 0x1.d51b3ep-53f, 0.0f, 0.0f, 0x1.c06e86p-58f,
     0x1.4d923ep-42f, 0x1.822f76p-1f, 0.0f, 0x1.eff3e4p-68f, 0.0f, 0x1.f0614ep-62f,
     0.0f, 0.0f, 0x1.72bbf6p-61f, 0.0f, 0.0f, 0x1.8f75b4p-41f, 0x1.0ed436p-80f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.0e0b0cp-24f, 0x1.199352p-17f, 0x1.0bb686p-61f, 0.0f, 0.0f,
     0x1.55d5b6p-96f, 0.0f, 0x1.a76c4ap-95f, 0x1.14245p-99f, 0.0f, 0.0f, 0.0f,
     0x1.a67338p-7f, 0x1.76db1p-9f, 0.0f, 0.0f, 0.0f, 0.0f
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
            tmp1 = Sleef_finz_fabsf4_kvx(tmp0);
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
    printf("Sleef_finz_fabsf4_kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_fabsf4_kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
