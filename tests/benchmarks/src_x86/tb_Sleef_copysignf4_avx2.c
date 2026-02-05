/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_copysignf4_avx2128.c --function Sleef_copysignf4_avx2128 \
 *     --arity 2 --headers sleef.h,ml_support_lib.h --input-formats \
 *     binary32,binary32 --vector-size 4 --function-input-vector-size 4 \
 *     --bench --no-embedded-bin --target x86_avx2128
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
     0x1.296184p-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c86fp-23f, 0x1.a554b4p-9f,
     0x1.7d12bap-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9e280cp-89f, 0.0f, 0.0f, 0.0f,
     0x1.5faef6p-44f, 0.0f, 0x1.5dc186p-21f, 0.0f, 0x1.daa4aap-27f, 0.0f,
     0x1.4b9254p-11f, 0x1.02bf1cp-43f, 0x1.35d0eep-39f, 0x1.043e02p-62f, 0.0f,
     0x1.3a6bc4p-2f, 0.0f, 0x1.b3422p-67f, 0x1.d3e87ep-6f, 0x1.595b56p-76f,
     0x1.fe3368p-125f, 0x1.2f473ep-101f, 0x1.46efa6p-79f, 0.0f, 0x1.7d0ee6p-68f,
     0x1.acd52p-121f, 0x1.a7991p-116f, 0.0f, 0x1.b56904p-60f, 0.0f, 0x1.55ad08p-102f,
     0x1.5ef5c2p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a7285ep-39f, 0.0f, 0.0f,
     0x1.03ed0cp-80f, 0x1.9cb14ap-112f, 0.0f, 0x1.8f5a6cp-120f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.4165f4p-4f, 0x1.26a874p-7f, 0x1.84c4cp-119f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f3f1d8p-83f, 0.0f, 0x1.04ff7ep-112f, 0.0f, 0.0f, 0x1.d0f214p-8f,
     0x1.41bf0ap-52f, 0x1.0fd508p-82f, 0.0f, 0.0f, 0x1.49e22p-4f, 0x1.8c1a5ep-78f,
     0x1.fbadacp-82f, 0x1.686c3p-56f, 0.0f, 0x1.dbd7eep-109f, 0.0f, 0.0f,
     0x1.f34d6cp-18f, 0.0f, 0.0f, 0x1.dbb462p-122f, 0.0f, 0x1.bd4e32p-34f, 0.0f, 0.0f,
     0.0f, 0x1.5c2b26p-106f, 0x1.20068ep-60f, 0.0f, 0.0f, 0.0f, 0x1.24686ep-4f, 0.0f,
     0.0f, 0x1.015af8p-123f, 0x1.398ae6p-88f, 0x1.c0f4cep-44f, 0x1.ae1f8ep-5f,
     0x1.0ed35ap-81f, 0x1.1934f8p-68f, 0x1.ae193ap-25f, 0.0f, 0x1.7fe2f4p-47f,
     0x1.5fa62ep-76f, 0.0f, 0x1.c84f3p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0f8748p-1f,
     0x1.928264p-93f, 0x1.6faf3p-112f, 0x1.9fa3bep-1f, 0x1.1fdcdp-104f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d1ddaep-123f, 0x1.4bf59cp-19f, 0.0f, 0.0f,
     0x1.2e2692p-76f, 0.0f, 0x1.140e6ap-88f, 0.0f, 0x1.0b3232p-59f, 0.0f,
     0x1.338c8ep-57f, 0.0f, 0.0f, 0.0f, 0x1.402f22p-75f, 0.0f, 0x1.b5b06cp-76f, 0.0f,
     0.0f, 0.0f, 0x1.d030dap-7f, 0x1.151d76p-6f, 0.0f, 0x1.771a4ep-46f,
     0x1.887e8ep-28f, 0x1.5f0a58p-8f, 0x1.d6cdd2p-99f, 0x1.a1f17cp-109f,
     0x1.144eep-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4961cep-40f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.282a0cp-67f, 0.0f, 0x1.01fb7ep-97f,
     0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.09521cp-43f, 0x1.ddf078p-15f, 0.0f,
     0x1.8fb8c6p-84f, 0.0f, 0x1.bc0718p-66f, 0x1.bf7d1cp-112f, 0.0f, 0.0f,
     0x1.f8f2p-63f, 0x1.f7ce28p-89f, 0.0f, 0.0f, 0x1.bdf4b4p-120f, 0.0f, 0.0f,
     0x1.f7ac9ep-20f, 0x1.99319p-59f, 0.0f, 0x1.702aa6p-42f, 0x1.82366ep-82f,
     0x1.c1f388p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2c2932p-17f, 0.0f, 0.0f,
     0x1.cea36cp-54f, 0x1.9fb592p-51f, 0.0f, 0x1.980c6p-86f, 0x1.a0f4cp-85f,
     0x1.9ab598p-51f, 0.0f, 0x1.a9795ap-47f, 0.0f, 0x1.25531cp-72f, 0x1.df142ap-120f,
     0x1.f9a6ecp-35f, 0x1.3ab1cap-18f, 0x1.e2a7fep-84f, 0.0f, 0.0f, 0.0f,
     0x1.098b5ap-91f, 0.0f, 0x1.4f7bdcp-11f, 0x1.2897f4p-100f, 0x1.8336fcp-28f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.cb158cp-10f, 0.0f, 0x1.dbad18p-121f, 0.0f, 0x1.47ab72p-35f,
     0x1.f6199ap-37f, 0.0f, 0.0f, 0.0f, 0x1.4e98acp-85f, 0x1.0776f2p-89f, 0.0f, 0.0f,
     0.0f, 0x1.5b5d86p-6f, 0x1.e8072cp-14f, 0x1.7ad9p-10f, 0.0f, 0.0f,
     0x1.ce5e36p-93f, 0.0f, 0x1.802b72p-106f, 0x1.f868c4p-98f, 0x1.8f21bap-74f, 0.0f,
     0.0f, 0x1.2b75aap-54f, 0.0f, 0x1.0db9b6p-109f, 0x1.88bf2ap-53f, 0.0f,
     0x1.46f098p-61f, 0.0f, 0.0f, 0x1.459cdcp-46f, 0x1.e6152ep-3f, 0.0f, 0.0f, 0.0f,
     0x1.6cc7bap-50f, 0x1.69630ep-105f, 0x1.d12d14p-20f, 0.0f, 0x1.99f596p-25f,
     0x1.c86a1p-95f, 0x1.2ff30ep-91f, 0.0f, 0x1.0bbcdcp-8f, 0x1.a1e70cp-54f, 0.0f,
     0x1.58e5e8p-21f, 0.0f, 0.0f, 0.0f, 0x1.c8db2ep-19f, 0.0f, 0x1.1d3018p-72f,
     0x1.4705d6p-112f, 0x1.790896p-120f, 0.0f, 0x1.e99d72p-76f, 0.0f, 0.0f, 0.0f,
     0x1.449cd2p-14f, 0.0f, 0.0f, 0.0f, 0x1.1c6d4ep-100f, 0.0f, 0x1.59f904p-2f,
     0x1.bdfe3ap-63f, 0.0f, 0x1.c93d3p-92f, 0.0f, 0x1.065166p-57f, 0x1.aebe8cp-95f,
     0.0f, 0x1.1fdca8p-62f, 0.0f, 0x1.139be4p-12f, 0.0f, 0x1.61c4ccp-79f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.0c837ap-111f, 0x1.a5f56p-56f, 0.0f, 0x1.4409f4p-83f,
     0x1.06d1fap-65f, 0.0f, 0.0f, 0x1.9a0f4p-59f, 0x1.0b582cp-7f, 0x1.fa463ep-45f,
     0x1.5cdc78p-39f, 0x1.dbe62p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5e6704p-16f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.8099acp-20f, 0.0f, 0.0f, 0x1.1e95ecp-99f, 0.0f, 0.0f,
     0x1.45faaap-102f, 0x1.736ad8p-2f, 0.0f, 0x1.bc3274p-123f, 0x1.b7bb3ep-12f, 0.0f,
     0x1.c6111cp-102f, 0.0f, 0x1.dc5604p-110f, 0.0f, 0.0f, 0x1.6770aap-30f, 0.0f,
     0x1.4bf98p-103f, 0x1.e21edp-88f, 0.0f, 0x1.1fbf92p-12f, 0.0f, 0.0f, 0.0f,
     0x1.026be8p-53f, 0x1.9c2cc4p-105f, 0x1.ff6eb6p-98f, 0x1.9f5b38p-70f,
     0x1.c860cep-47f, 0x1.f28c8ap-15f, 0x1.c3f208p-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5adb24p-66f, 0.0f, 0x1.720536p-1f, 0.0f, 0x1.bcb9b4p-100f, 0x1.52dee6p-37f,
     0.0f, 0x1.c7c51p-90f, 0x1.92f014p-45f, 0x1.167386p-28f, 0x1.01f688p-18f,
     0x1.7001bap-14f, 0.0f, 0x1.81968ap-107f, 0x1.13a742p-109f, 0.0f, 0.0f,
     0x1.8f7a64p-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a909dp-124f, 0.0f, 0.0f,
     0x1.36b1cep-74f, 0x1.ef4626p-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ba7dcep-124f,
     0x1.01be84p-123f, 0.0f, 0.0f, 0x1.15b224p-63f, 0x1.fa2794p-16f, 0x1.87dbeap-48f,
     0.0f, 0x1.0f04fep-71f, 0x1.b41b5cp-32f, 0.0f, 0.0f, 0x1.92226ep-113f, 0.0f,
     0x1.b8fa58p-60f, 0.0f, 0x1.8a55eep-41f, 0x1.3c35d2p-27f, 0x1.89adaep-60f,
     0x1.95fb02p-122f, 0x1.313d64p-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.97455cp-28f,
     0.0f, 0.0f, 0x1.456a88p-61f, 0.0f, 0x1.4126bep-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b0a466p-54f, 0.0f, 0x1.6c919ap-76f, 0.0f, 0.0f, 0.0f, 0x1.2ebca4p-62f,
     0.0f, 0x1.966d0ep-66f, 0x1.840e7ep-111f, 0.0f, 0x1.582e3ep-63f, 0x1.6853dep-39f,
     0x1.fa18dep-114f, 0x1.6bea5cp-23f, 0x1.1049bap-65f, 0.0f, 0x1.e5047cp-119f,
     0x1.69fa58p-118f, 0.0f, 0.0f, 0x1.4d366cp-112f, 0.0f, 0x1.e59082p-36f, 0.0f,
     0x1.be84f4p-61f, 0.0f, 0x1.c574f6p-34f, 0x1.fe9826p-22f, 0x1.b1ba8cp-115f,
     0x1.aca6b6p-46f, 0.0f, 0.0f, 0x1.e7b78ap-116f, 0x1.867518p-123f, 0.0f,
     0x1.744a0ap-89f, 0.0f, 0x1.3d2a5ap-87f, 0x1.37a05ap-18f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e2dc62p-59f, 0.0f, 0x1p0f, 0x1.e3ad78p-67f, 0.0f, 0x1.2d5c26p-45f,
     0x1.5fc5e6p-62f, 0.0f, 0.0f, 0.0f, 0x1.782d34p-95f, 0.0f, 0.0f, 0.0f,
     0x1.02ab3cp-122f, 0.0f, 0.0f, 0x1.aa75c4p-72f, 0x1.50f244p-24f, 0x1.62088ap-116f,
     0.0f, 0x1.b065acp-12f, 0.0f, 0x1.6255e8p-49f, 0x1.4aadc2p-83f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.dee444p-104f, 0x1.00f638p-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.964794p-104f, 0.0f, 0x1.9012e4p-17f, 0x1.4b4becp-30f, 0x1.3674f2p-68f,
     0x1p0f, 0.0f, 0x1.15ef06p-49f, 0.0f, 0.0f, 0.0f, 0x1.18331ep-77f,
     0x1.3772c8p-28f, 0x1.828c5ep-94f, 0x1.04f646p-19f, 0.0f, 0x1.6b1bd6p-98f, 0.0f,
     0x1.1b883ap-26f, 0x1.4e4dfep-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d871cap-69f,
     0x1.7d9e92p-119f, 0.0f, 0x1.8ee9fcp-65f, 0.0f, 0x1.48a382p-43f, 0.0f,
     0x1.14b562p-94f, 0x1.5e6f7ap-107f, 0.0f, 0.0f, 0x1.c17f6ep-27f, 0.0f,
     0x1.644bdp-38f, 0x1.f02f08p-82f, 0x1.c008aap-60f, 0.0f, 0.0f, 0.0f,
     0x1.fd018ap-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.25a21p-3f, 0x1.94f87ep-41f, 0x1.59c7b6p-108f, 0x1.f09966p-22f,
     0x1.1e1864p-94f, 0x1.d2b634p-64f, 0.0f, 0x1.5da89p-19f, 0x1.f82d92p-107f, 0.0f,
     0.0f, 0x1.8be736p-25f, 0x1.2bb5c8p-124f, 0x1.4ed8acp-37f, 0x1.793368p-118f,
     0x1.52e8a8p-117f, 0.0f, 0.0f, 0.0f, 0x1.027694p-63f, 0x1.2b3f9ap-71f, 0.0f,
     0x1.7d1d3ep-118f, 0x1.1b0cf4p-15f, 0.0f, 0x1.32211ap-124f, 0.0f,
     0x1.bf10c8p-110f, 0.0f, 0x1.21e35ap-122f, 0.0f, 0x1.97181p-1f, 0.0f,
     0x1.43e5fcp-110f, 0.0f, 0x1.df89d6p-5f, 0x1.ececbap-84f, 0.0f, 0.0f,
     0x1.40d206p-49f, 0.0f, 0.0f, 0.0f, 0x1.89646ap-15f, 0x1.3a749p-22f,
     0x1.920878p-118f, 0x1.083a46p-22f, 0x1.add90ep-26f, 0x1.4320ep-46f, 0.0f, 0.0f,
     0x1.f060d2p-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.636b72p-45f,
     0x1.a8fdc4p-49f, 0x1.1cbdb6p-70f, 0.0f, 0.0f, 0x1.aeb988p-90f, 0x1.2be4eep-16f,
     0.0f, 0.0f, 0.0f, 0x1.2f81d6p-84f, 0.0f, 0x1.aa22b8p-10f, 0.0f, 0.0f,
     0x1.64007ap-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.544fep-39f, 0x1.af4dfap-119f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.907e16p-10f, 0.0f, 0x1.38213p-85f, 0x1.18e8bep-95f,
     0x1.68bdd8p-36f, 0.0f, 0x1.c49a6ep-50f, 0x1.b3f25ep-123f, 0.0f, 0x1.cd56ap-25f,
     0x1.95c96p-86f, 0.0f, 0.0f, 0.0f, 0x1.f60c7ap-92f, 0.0f, 0x1.5fe45ap-33f,
     0x1.5ba67p-81f, 0x1.d16746p-25f, 0.0f, 0x1.38818ap-3f, 0x1.af18b4p-64f,
     0x1.455e76p-99f, 0x1.258636p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fad10ap-101f, 0x1.1a6d8cp-98f, 0x1.c218e6p-2f, 0x1.4f454ap-56f,
     0x1.024ecep-73f, 0x1.f01d24p-90f, 0x1.ce7ff8p-71f, 0.0f, 0.0f, 0x1.7e29c2p-21f,
     0x1.b1825ap-2f, 0.0f, 0.0f, 0x1.78fdf4p-93f, 0.0f, 0.0f, 0x1.edd488p-1f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3175d2p-94f, 0.0f, 0.0f, 0x1.a4a61ap-46f,
     0.0f, 0x1.87cbbp-41f, 0.0f, 0.0f, 0x1.4d535p-41f, 0x1.452076p-39f, 0.0f,
     0x1.29c40ap-7f, 0x1.798de8p-115f, 0x1.87bb8ep-82f, 0x1.63ce4ep-45f,
     0x1.3ae4e8p-108f, 0.0f, 0x1.152442p-126f, 0.0f, 0.0f, 0x1.cf19d4p-48f,
     0x1.e510e8p-70f, 0.0f, 0x1.88c5b6p-81f, 0.0f, 0.0f, 0.0f, 0x1.31fb38p-17f, 0.0f,
     0x1.a0f18cp-36f, 0.0f, 0x1.a80b44p-30f, 0x1.1c2cfcp-45f, 0x1.e94b54p-64f,
     0x1.6eba5cp-83f, 0.0f, 0x1.580bfp-80f, 0x1.e45b78p-105f, 0x1.46e5p-24f, 0.0f,
     0.0f, 0x1.c3e334p-107f, 0.0f, 0x1.0cd01ep-16f, 0x1.b39d92p-16f, 0.0f,
     0x1.974b22p-68f, 0.0f, 0.0f, 0.0f, 0x1.bca612p-67f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d8db9cp-94f, 0.0f, 0x1.7798cap-107f, 0x1.5a3228p-24f, 0x1.d65d44p-36f, 0.0f,
     0.0f, 0x1.1f33e6p-41f, 0.0f, 0.0f, 0x1.151358p-17f, 0.0f, 0.0f, 0x1.725658p-59f,
     0x1.734f6ep-19f, 0x1.f2fa8cp-112f, 0x1.a56d54p-95f, 0.0f, 0x1.43c8ep-43f, 0.0f,
     0x1.0407b6p-84f, 0x1.ee17c8p-31f, 0.0f, 0.0f, 0.0f, 0x1.6d4518p-94f,
     0x1.1a0038p-57f, 0x1.c96fap-45f, 0.0f, 0.0f, 0.0f, 0x1.8c409cp-7f, 0.0f,
     0x1.90cf3cp-78f, 0x1.9788e6p-11f, 0x1.4e7072p-113f, 0.0f, 0x1.a90308p-85f, 0.0f,
     0.0f, 0.0f, 0x1.efb766p-50f, 0.0f, 0x1.0212bp-80f, 0.0f, 0x1.03da08p-120f, 0.0f,
     0x1.49797p-65f, 0.0f, 0x1.a30b0ep-38f, 0.0f, 0x1.cf2ccap-43f, 0x1.3ed2f6p-63f,
     0x1.0267b6p-54f, 0x1.d906c2p-19f, 0.0f, 0x1.85f1cap-109f, 0x1.f4ae06p-44f,
     0x1.18717ep-106f, 0x1.76281ep-121f, 0x1.ae5362p-18f, 0x1.e4fe52p-18f,
     0x1.12aa84p-65f, 0.0f, 0x1.698184p-63f, 0x1.f4a81ep-102f, 0.0f, 0.0f,
     0x1.0da8aap-13f, 0x1.563db6p-21f, 0x1.3c17a8p-66f, 0x1.8a66dcp-80f,
     0x1.9e121ap-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8fef1cp-74f,
     0x1.0e1522p-50f, 0x1.3c825cp-30f, 0x1.4d2f9p-76f, 0x1.fdc1d6p-118f, 0.0f, 0.0f,
     0.0f, 0x1.fcaceap-25f, 0.0f, 0.0f, 0.0f, 0x1.8f73bep-68f, 0x1.22fa8ap-54f,
     0x1.603bf8p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f16e3ep-67f,
     0x1.6d1fbap-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.980a96p-49f, 0.0f,
     0x1.ccd038p-47f, 0x1.4eb50cp-18f, 0x1.e83222p-47f, 0x1.afa76ep-42f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d39798p-83f, 0.0f, 0.0f, 0x1.1f63d6p-79f, 0x1.75ef68p-81f, 0.0f,
     0.0f, 0x1.6c3b24p-105f, 0.0f, 0.0f, 0x1.843328p-72f, 0.0f, 0x1.698f14p-100f,
     0.0f, 0x1.7104bp-36f, 0x1.6ae2c6p-7f, 0.0f, 0x1.0db212p-87f, 0.0f,
     0x1.253612p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4145b8p-23f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.2aa632p-77f, 0.0f, 0x1.6a0c46p-36f, 0x1.96fae4p-73f, 0x1.615fd8p-37f,
     0.0f, 0.0f, 0.0f, 0x1.14d706p-40f, 0.0f, 0.0f, 0x1.42caeep-122f,
     0x1.3f44a8p-117f, 0x1.31c83ep-91f, 0x1.2d44c8p-92f, 0.0f, 0x1.404168p-77f, 0.0f,
     0.0f, 0x1.2943b4p-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f28bdcp-19f, 0x1.fccdacp-39f,
     0x1.727bbep-61f, 0.0f, 0x1.f177ap-27f, 0.0f, 0x1.256536p-57f, 0.0f, 0.0f, 0.0f,
     0x1.5d73aep-102f, 0x1.19246cp-104f, 0x1.a35d3cp-46f, 0.0f, 0x1.a58c28p-105f,
     0x1.cb702cp-116f, 0x1.4f5b5ap-21f, 0x1.86a42ap-89f, 0x1.9c6b5ap-107f,
     0x1.537146p-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2635d4p-41f, 0.0f, 0.0f,
     0x1.9ce20cp-26f, 0.0f, 0x1.37c028p-14f, 0x1.757558p-95f, 0x1.a4af82p-90f, 0.0f,
     0x1.8d4aap-60f, 0x1.efe7e4p-70f, 0.0f, 0x1.4df37cp-20f, 0x1.18c192p-12f,
     0x1.096428p-114f, 0.0f, 0x1.0dfe86p-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.940ef4p-8f,
     0.0f
};
static const float external_bench_wrapper_input_table_arg1[1004]  = {
     0x1.6a6a2ep-116f, 0.0f, 0x1.596f7ep-45f, 0.0f, 0.0f, 0x1.f24ffp-37f, 0.0f,
     0x1.ef973cp-30f, 0.0f, 0x1.29555cp-115f, 0.0f, 0.0f, 0x1.3242eap-97f,
     0x1.7523f8p-27f, 0x1.062ec8p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e27162p-53f,
     0x1.8915dep-125f, 0x1.53adf8p-122f, 0x1.b9d9acp-36f, 0x1.ef41ep-21f,
     0x1.3aa8fap-52f, 0.0f, 0x1.cb64bcp-4f, 0.0f, 0.0f, 0x1.c53f1cp-31f,
     0x1.c11a5ep-47f, 0x1.0b042p-105f, 0x1.caf7a4p-66f, 0x1.e7435ep-18f, 0.0f,
     0x1.a1600ap-18f, 0x1.29d674p-123f, 0.0f, 0.0f, 0x1.0757aep-94f, 0x1.ab15ap-120f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7b2f64p-80f, 0.0f, 0x1.2b35e8p-25f, 0.0f, 0.0f,
     0x1.c46e3p-4f, 0.0f, 0.0f, 0.0f, 0x1.1fd7a6p-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d67342p-29f, 0.0f, 0.0f, 0x1.37006ep-79f, 0.0f, 0.0f, 0.0f, 0x1.e87cdcp-57f,
     0x1.e3bba2p-60f, 0x1.3d54e8p-52f, 0.0f, 0x1.744cc2p-70f, 0x1.d37a9cp-5f,
     0x1.21ec32p-28f, 0x1.1fc0fep-33f, 0x1.f3ce74p-62f, 0x1.68c18cp-13f, 0.0f,
     0x1.2aad64p-64f, 0.0f, 0x1.0fcc7ep-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.478882p-107f, 0x1.7bba92p-38f, 0x1.3ba852p-122f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.be754ap-78f, 0.0f, 0.0f, 0x1.a34dccp-69f, 0x1.ef3ffp-32f, 0.0f,
     0x1.ce202ep-96f, 0.0f, 0x1.4ceb86p-100f, 0x1.66cbc8p-7f, 0x1.3cf5f4p-6f, 0.0f,
     0.0f, 0.0f, 0x1.b65304p-67f, 0x1.1a0484p-90f, 0.0f, 0.0f, 0x1.9a9eaep-116f,
     0x1.cf0b5cp-36f, 0.0f, 0.0f, 0x1.06d6a8p-64f, 0x1.81ccbp-55f, 0x1.68152cp-78f,
     0x1.546426p-68f, 0x1.6c5616p-42f, 0x1.6ee7ecp-18f, 0.0f, 0x1.6cc828p-96f, 0.0f,
     0x1.26abc6p-5f, 0x1.bbe0d4p-29f, 0x1.2e005cp-75f, 0x1.09dfd6p-1f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3629bep-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f313dep-55f, 0x1.0abeaap-108f, 0.0f, 0x1.a8b878p-1f, 0x1.41148ap-102f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7bf10ap-19f, 0.0f, 0x1.86ad62p-49f, 0.0f,
     0x1.0abdeap-11f, 0x1.585854p-20f, 0.0f, 0x1.07bd2ep-75f, 0x1.31fadep-62f, 0.0f,
     0x1.338172p-88f, 0.0f, 0x1.0ac3cap-98f, 0x1.79127ep-15f, 0.0f, 0x1.d83ccep-119f,
     0.0f, 0.0f, 0.0f, 0x1.17b8dp-117f, 0.0f, 0x1.38d3b2p-100f, 0.0f, 0.0f,
     0x1.c8c4aap-78f, 0x1.5b863ep-5f, 0x1.cc6536p-23f, 0.0f, 0x1.30076p-3f,
     0x1.587efep-39f, 0x1.d1b56ap-40f, 0.0f, 0x1.44b714p-67f, 0x1.c94c7ap-36f, 0.0f,
     0x1.dfd738p-67f, 0x1.82ddf4p-34f, 0x1.0718f6p-119f, 0.0f, 0x1.3f069ep-121f, 0.0f,
     0.0f, 0x1.f192e2p-60f, 0x1.9290dcp-51f, 0x1.e5678ap-115f, 0x1.91f894p-90f, 0.0f,
     0x1.60859ep-126f, 0x1.68999p-29f, 0.0f, 0.0f, 0.0f, 0x1.db3fap-116f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.673378p-68f, 0.0f, 0x1.e8c27ap-90f, 0x1.077974p-47f,
     0x1.97f726p-74f, 0x1.4cc89ap-35f, 0.0f, 0.0f, 0.0f, 0x1.433834p-69f, 0.0f,
     0x1.067b14p-48f, 0x1.6bc556p-61f, 0x1.be445p-78f, 0x1.fed2cep-89f,
     0x1.de62acp-26f, 0.0f, 0x1.d11916p-7f, 0x1.d3d0e6p-6f, 0x1.c748d2p-106f,
     0x1.022p-13f, 0.0f, 0.0f, 0x1.ff4ef8p-15f, 0.0f, 0.0f, 0x1.c6f51p-93f, 0.0f,
     0x1.ffb606p-121f, 0x1.7ed99cp-96f, 0x1.ec8174p-71f, 0.0f, 0.0f, 0x1.d2fe62p-26f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9688dcp-1f, 0x1.93bf4p-74f, 0x1.364202p-109f,
     0x1.b68ea2p-66f, 0.0f, 0x1.c39f4cp-100f, 0x1.e5b9cep-106f, 0.0f, 0.0f,
     0x1.ab9b58p-101f, 0x1.f94034p-37f, 0.0f, 0x1.7e95a8p-1f, 0.0f, 0.0f,
     0x1.68bfp-41f, 0x1.14a0eep-18f, 0.0f, 0x1.0c27cap-114f, 0.0f, 0x1.9424f4p-52f,
     0x1.10beep-74f, 0.0f, 0.0f, 0x1.006ae8p-58f, 0x1.453376p-16f, 0x1.96048ep-108f,
     0.0f, 0x1.c8f698p-24f, 0.0f, 0.0f, 0.0f, 0x1.9e5264p-102f, 0x1.2564dep-26f,
     0x1.89167cp-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.822ae2p-32f, 0.0f,
     0x1.f1a89p-86f, 0x1.8e1696p-38f, 0.0f, 0.0f, 0.0f, 0x1.4281a4p-110f, 0.0f, 0.0f,
     0x1.e4515ep-26f, 0x1.99d5c4p-48f, 0.0f, 0x1.2c17cep-97f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b6232p-2f, 0.0f, 0.0f, 0x1.f37886p-77f, 0x1.430878p-47f, 0x1.25c4bcp-118f,
     0.0f, 0x1.526b2cp-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8dc524p-20f, 0.0f, 0.0f,
     0x1.1bebep-11f, 0.0f, 0x1.dfe98ap-62f, 0x1.cd5a78p-71f, 0.0f, 0.0f,
     0x1.5ef3e4p-16f, 0x1.bdeadcp-115f, 0x1.761138p-6f, 0.0f, 0x1.50ac12p-51f,
     0x1.e5e6f8p-12f, 0x1.16d6a8p-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e2fb1ap-111f,
     0x1.4c1922p-119f, 0.0f, 0x1.ad7372p-46f, 0x1.8cf25ep-61f, 0x1.a8a33ap-78f, 0.0f,
     0.0f, 0x1.5e08dap-16f, 0x1.47f0fp-56f, 0x1.0131a8p-99f, 0x1.3ead42p-113f, 0.0f,
     0x1.a7fd4p-4f, 0x1.88131ap-63f, 0x1.8c0598p-126f, 0.0f, 0x1.a79ae6p-124f, 0.0f,
     0.0f, 0.0f, 0x1.23ee2p-105f, 0.0f, 0x1.b2c704p-88f, 0x1.e2d24ap-92f, 0.0f, 0.0f,
     0x1.71b1eep-37f, 0.0f, 0x1.73db3ep-30f, 0.0f, 0x1.b3e5ccp-71f, 0x1.20dd4ep-93f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.5a0ea4p-85f, 0.0f, 0.0f, 0x1.a48db2p-79f, 0.0f, 0.0f,
     0.0f, 0x1.97ddep-77f, 0.0f, 0x1.438a64p-8f, 0x1.b2450ep-29f, 0x1.ff9ba8p-98f,
     0x1.da66d8p-47f, 0x1.1259d4p-113f, 0.0f, 0.0f, 0x1.457bf4p-115f, 0.0f, 0.0f,
     0x1.af488cp-30f, 0x1.80fc4p-39f, 0.0f, 0x1.fe8038p-88f, 0.0f, 0x1.daabaep-89f,
     0.0f, 0x1.5bb57ep-118f, 0x1.008842p-25f, 0x1.d7ccb8p-27f, 0x1.3858cp-109f,
     0x1.c600b4p-51f, 0.0f, 0.0f, 0x1.9f82e4p-14f, 0x1.2f2e12p-67f, 0x1.02c25cp-11f,
     0.0f, 0.0f, 0x1.0382d6p-105f, 0x1.43ceb2p-46f, 0.0f, 0.0f, 0x1.eee50ap-63f,
     0x1.fc7416p-80f, 0.0f, 0.0f, 0.0f, 0x1.5f1618p-55f, 0x1.b174a4p-114f, 0.0f, 0.0f,
     0x1.9c3f32p-117f, 0.0f, 0x1.f96924p-4f, 0x1.bf80cp-106f, 0x1.997aeap-82f,
     0x1.d652ap-39f, 0x1.bf1bd6p-73f, 0.0f, 0.0f, 0.0f, 0x1.fee476p-93f, 0.0f, 0.0f,
     0.0f, 0x1.f27916p-59f, 0x1.90858ep-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3e69eep-108f, 0x1.fb4cep-63f, 0.0f, 0x1.ec2a7p-65f, 0x1.6e12acp-99f, 0.0f,
     0x1.1ca76p-113f, 0.0f, 0x1.bfbb08p-100f, 0.0f, 0.0f, 0x1.8eaf3p-92f, 0.0f, 0.0f,
     0x1.ef56c2p-76f, 0x1.2b167ep-85f, 0.0f, 0.0f, 0x1.fefab8p-31f, 0.0f, 0.0f,
     0x1.2e36c4p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.899004p-69f, 0.0f, 0.0f, 0.0f,
     0x1.14ee76p-64f, 0.0f, 0.0f, 0x1.ad574ap-86f, 0x1.95ad2p-3f, 0x1.7c26fep-14f,
     0x1.b62478p-7f, 0.0f, 0x1.384ec6p-71f, 0.0f, 0x1.bfd4d2p-86f, 0.0f,
     0x1.3d6a08p-47f, 0.0f, 0.0f, 0x1.a9e254p-72f, 0.0f, 0x1.8188eap-25f,
     0x1.f0a75p-56f, 0x1.8c4292p-4f, 0x1.5e8c3ap-22f, 0.0f, 0.0f, 0x1.ce978ap-16f,
     0x1.e15b34p-74f, 0.0f, 0x1.82e1f4p-92f, 0.0f, 0.0f, 0x1.7dd9a6p-4f, 0.0f,
     0x1.ab21fp-104f, 0.0f, 0x1.1b6f68p-116f, 0x1.894f3p-1f, 0x1.149824p-31f,
     0x1.b3549p-34f, 0x1.463c68p-79f, 0x1.1278aep-32f, 0x1.3eacc2p-83f, 0.0f,
     0x1.be8bf8p-118f, 0x1.86a528p-106f, 0.0f, 0.0f, 0x1.f155ccp-90f, 0x1.817dfp-39f,
     0.0f, 0x1.0e274ap-91f, 0.0f, 0.0f, 0x1.a2d068p-75f, 0x1.0bfb16p-7f, 0.0f,
     0x1.40b038p-53f, 0.0f, 0.0f, 0x1.4fcd8ap-58f, 0.0f, 0.0f, 0x1.c44c5cp-107f, 0.0f,
     0x1.afbcd2p-2f, 0.0f, 0x1.f1bc3p-38f, 0x1.27801ap-79f, 0.0f, 0x1.402fdp-41f,
     0x1.b25dbap-91f, 0x1.09ada4p-15f, 0x1.6d2b18p-39f, 0x1.3bea32p-19f,
     0x1.85d812p-124f, 0x1.74394ap-43f, 0.0f, 0.0f, 0x1.aa2efcp-47f, 0x1.b7dd38p-80f,
     0.0f, 0.0f, 0x1.4795f4p-58f, 0x1.4021f8p-86f, 0x1.a2f5f2p-66f, 0x1.088d92p-46f,
     0x1.f9c7bcp-44f, 0.0f, 0.0f, 0.0f, 0x1.10284ap-72f, 0x1.13abf2p-76f, 0.0f,
     0x1.012bc6p-11f, 0x1.139624p-53f, 0.0f, 0x1.c8126ep-104f, 0x1.314c78p-36f,
     0x1.351d64p-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5ab81p-32f, 0.0f, 0x1.ed731ep-62f,
     0x1.86affp-18f, 0x1.ce8474p-47f, 0x1.257372p-23f, 0x1.347bcap-60f, 0x1p0f,
     0x1.85fbb2p-87f, 0x1.9c17fcp-103f, 0.0f, 0.0f, 0x1.56613ap-24f, 0.0f,
     0x1.9c4ad6p-98f, 0x1.c5428ep-36f, 0x1.3bc1bcp-80f, 0x1.dfdb68p-91f,
     0x1.9c6b0ap-55f, 0x1.14a884p-12f, 0.0f, 0x1.e8a15cp-35f, 0x1.de7e14p-39f, 0.0f,
     0.0f, 0x1.62d952p-44f, 0.0f, 0x1.8a543ap-123f, 0x1.27b34ap-98f, 0.0f,
     0x1.083344p-68f, 0.0f, 0x1.7e0faep-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.38adp-16f, 0x1.0ee688p-11f, 0x1.d912d4p-114f, 0.0f, 0.0f, 0.0f,
     0x1.59434ep-3f, 0.0f, 0.0f, 0.0f, 0x1.a0545p-29f, 0.0f, 0.0f, 0x1.b29f94p-61f,
     0x1.5e8dd4p-38f, 0.0f, 0.0f, 0x1.2b904ep-10f, 0.0f, 0x1.f42a7ap-47f, 0.0f,
     0x1.14802cp-101f, 0x1.6d8718p-8f, 0x1.0ac3aap-36f, 0x1.9df678p-5f,
     0x1.dd25a6p-77f, 0x1.ccc558p-34f, 0x1.4e7e6ap-71f, 0.0f, 0x1.bdb14ep-37f, 0.0f,
     0x1.b7d73cp-34f, 0x1.3c8a3p-116f, 0x1.ea9e1p-39f, 0.0f, 0.0f, 0x1.5778e6p-40f,
     0x1.9e205p-45f, 0x1.b1eefep-116f, 0.0f, 0x1.a53feep-90f, 0x1.c8b756p-24f, 0.0f,
     0x1.b335e4p-36f, 0.0f, 0.0f, 0x1.52bf68p-76f, 0.0f, 0x1.09e94p-39f,
     0x1.1994a6p-31f, 0x1.9b983p-101f, 0x1.e7250ap-113f, 0.0f, 0x1.61fcfep-126f,
     0x1.d65344p-93f, 0.0f, 0x1.e253ecp-58f, 0x1.1f5132p-101f, 0.0f, 0.0f, 0.0f,
     0x1.33c2e8p-5f, 0x1.3a7d08p-51f, 0.0f, 0.0f, 0x1.1aa224p-96f, 0.0f,
     0x1.41e10ap-100f, 0.0f, 0x1.ce1c1ap-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d2e15cp-63f, 0.0f, 0x1.79f436p-90f, 0x1.a43a3ap-11f, 0x1.54f8d2p-21f,
     0x1.bddf2ep-117f, 0.0f, 0.0f, 0x1.5078ccp-95f, 0.0f, 0x1.d82f9p-21f, 0.0f, 0.0f,
     0x1.1d44e4p-113f, 0x1.cd4858p-107f, 0.0f, 0.0f, 0.0f, 0x1.c3a1a2p-17f, 0.0f,
     0.0f, 0x1.00ca76p-75f, 0.0f, 0.0f, 0x1.df6932p-61f, 0.0f, 0x1.6a12d2p-91f, 0.0f,
     0.0f, 0x1.a4ba16p-119f, 0x1.726fbep-42f, 0.0f, 0x1.b8749ap-85f, 0.0f,
     0x1.f8888ep-61f, 0x1.773d76p-96f, 0x1.5a03aap-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.42f562p-101f, 0x1.42bd74p-85f, 0x1.0f272ep-108f,
     0x1.429f2ap-113f, 0.0f, 0x1.cd9e7cp-15f, 0x1.f3718cp-93f, 0.0f, 0x1.70863ep-88f,
     0.0f, 0.0f, 0x1.ae7bfcp-78f, 0x1.5ea076p-103f, 0.0f, 0x1.995072p-97f,
     0x1.2b1014p-92f, 0x1.da19acp-24f, 0x1.84c48ep-33f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e5e142p-15f, 0x1.4e159p-97f, 0.0f, 0.0f, 0x1.de56a8p-8f, 0x1.264d6cp-51f,
     0x1.8e1064p-42f, 0x1.992002p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.08c6eep-65f, 0.0f,
     0x1.ae2782p-5f, 0x1.51c422p-124f, 0.0f, 0x1.4b50ccp-58f, 0.0f, 0.0f,
     0x1.8c451ep-84f, 0x1.82ee7cp-54f, 0x1.1efb2cp-96f, 0x1.bcc5c2p-70f,
     0x1.b50decp-108f, 0x1.47004p-60f, 0x1.1eda64p-77f, 0.0f, 0x1.ae7042p-36f, 0.0f,
     0x1.35dc6ep-13f, 0.0f, 0x1.3132fep-15f, 0x1.7dfa46p-28f, 0x1.df99f8p-45f, 0.0f,
     0x1.471d9ep-97f, 0.0f, 0x1.f5f1fap-4f, 0.0f, 0.0f, 0.0f, 0x1.672d6cp-23f,
     0x1.1f82ccp-102f, 0.0f, 0.0f, 0.0f, 0x1.da618p-70f, 0.0f, 0x1.7bde6ep-99f, 0.0f,
     0.0f, 0x1.c9ac24p-121f, 0.0f, 0x1.d00f08p-4f, 0.0f, 0x1.010664p-69f, 0.0f, 0.0f,
     0.0f, 0x1.ab01e6p-54f, 0.0f, 0.0f, 0.0f, 0x1.d2195ep-23f, 0.0f, 0x1.a796dp-116f,
     0.0f, 0.0f, 0x1.02a3e4p-85f, 0.0f, 0.0f, 0.0f, 0x1.5a9926p-92f, 0x1.6fd9d4p-5f,
     0.0f, 0.0f, 0.0f, 0x1.dc7b22p-55f, 0x1.edf9c2p-24f, 0x1.e60476p-45f,
     0x1.3ed452p-117f, 0.0f, 0x1.8bbd12p-60f, 0.0f, 0.0f, 0.0f, 0x1.0982a2p-97f, 0.0f,
     0.0f, 0x1.93c6ep-82f, 0x1p0f, 0x1.dbd28ep-125f, 0.0f, 0x1.6a88eep-2f,
     0x1.46c142p-109f, 0.0f, 0x1.69bb1p-77f, 0x1.73895ep-56f, 0.0f, 0x1.92dee6p-87f,
     0x1.8d2e8p-126f, 0.0f, 0x1.5e5a8ep-16f, 0x1.71885ep-95f, 0x1.bc758ep-13f,
     0x1.ebad8ep-17f, 0x1.901f06p-57f, 0x1.838de8p-108f, 0x1.7ce7dcp-67f, 0.0f, 0.0f,
     0x1.e72448p-14f, 0x1.c05272p-121f, 0.0f, 0.0f, 0.0f, 0x1.28be2p-21f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d8167p-71f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2bd30ap-28f, 0.0f, 0.0f, 0x1.86a57ap-124f, 0x1.937464p-12f, 0x1.ad7f6ap-98f,
     0.0f, 0.0f, 0x1.ef4164p-26f, 0x1.7b7538p-41f, 0x1.b3c7bep-83f, 0.0f, 0.0f,
     0x1.b8bb2ep-11f, 0.0f, 0.0f, 0x1.c4b52cp-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c6660ap-7f, 0x1.4b4218p-47f, 0.0f, 0.0f, 0.0f, 0x1.5bd58ap-55f,
     0x1.922008p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5f71fep-64f, 0x1.073616p-59f, 0.0f,
     0x1.41f1d8p-78f, 0x1.18b626p-28f, 0.0f, 0.0f, 0x1.4e1842p-65f, 0.0f,
     0x1.1f677cp-60f, 0x1.1af0e2p-116f, 0.0f, 0x1.7420ep-42f, 0x1.84acb2p-99f, 0.0f,
     0.0f, 0x1.88fc34p-94f, 0x1.404566p-43f, 0x1.ca73ap-77f, 0.0f, 0x1.370422p-47f,
     0x1.f3812ep-51f, 0.0f, 0.0f, 0x1.ab067p-108f, 0x1.63023ep-105f, 0.0f, 0.0f,
     0x1.e93cd6p-123f, 0.0f, 0.0f, 0x1.d3008ap-92f, 0x1.227bc6p-1f, 0x1.8a6a0cp-119f,
     0x1.97d892p-114f, 0x1.8a0302p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ea0724p-25f, 0.0f,
     0.0f, 0x1.669cb8p-34f, 0x1.0cda18p-17f, 0x1.bc2664p-121f, 0x1.bd436p-44f, 0.0f,
     0.0f, 0x1.db04aap-49f, 0.0f, 0.0f, 0.0f, 0x1.9ec13ep-23f, 0x1.41e24p-84f, 0.0f,
     0x1.1dc7fap-100f, 0x1.e3432ep-122f, 0x1.561c58p-106f, 0.0f, 0.0f,
     0x1.4f0cbap-42f, 0.0f, 0.0f, 0x1.bc20d6p-18f, 0.0f, 0.0f, 0x1.a644c6p-81f, 0.0f,
     0.0f, 0x1.8c0fe6p-80f, 0x1.215aecp-30f, 0x1.af18ccp-1f, 0x1.847c2p-14f,
     0x1.0d10aep-33f, 0.0f
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
            ml_float4_t tmp3;
            int32_t tmp4;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            memcpy(&tmp1, ((ml_float4_t*)(external_bench_wrapper_input_table_arg1+ i)), 16);
            tmp2 = Sleef_copysignf4_avx2128(tmp0, tmp1);
            memcpy(((ml_float4_t*)(external_bench_wrapper_output_table+ i)), &(tmp2), 16);
            tmp3 = local_acc + tmp2;
            local_acc = tmp3;
            tmp4 = i + INT32_C(4);
            i = tmp4;
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
    printf("Sleef_copysignf4_avx2128 %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_copysignf4_avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
