/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_fabsf4_avx2128.c --function Sleef_finz_fabsf4_avx2128 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 4 --function-input-vector-size 4 --bench \
 *     --no-embedded-bin --target x86_avx2128
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
     0x1.c8752cp-100f, 0x1.cf3becp-117f, 0x1.80b2cp-98f, 0x1.6dde18p-36f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.458102p-65f, 0x1.3340b2p-75f, 0.0f, 0x1.be9b2ep-34f,
     0x1.af779cp-86f, 0.0f, 0x1.c09504p-92f, 0x1.93e692p-53f, 0x1.141ebep-85f, 0.0f,
     0.0f, 0x1.d9bcdap-44f, 0.0f, 0x1.d8be1cp-15f, 0.0f, 0.0f, 0x1.5ee2dep-61f,
     0x1.abf16ap-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d7d26cp-86f, 0x1.9aeap-67f,
     0.0f, 0.0f, 0x1.d269bp-91f, 0x1.4a692cp-84f, 0.0f, 0x1.49737p-35f, 0.0f,
     0x1.640c2ep-85f, 0x1.e5bbfcp-109f, 0.0f, 0x1.40c3a4p-95f, 0x1.21362cp-68f, 0.0f,
     0.0f, 0x1.72f152p-96f, 0x1.04f154p-29f, 0x1.e70c18p-101f, 0.0f, 0.0f, 0.0f,
     0x1.b11adep-36f, 0x1.13ec62p-49f, 0.0f, 0.0f, 0x1.efac64p-44f, 0x1.81b15p-89f,
     0.0f, 0x1.a1b008p-107f, 0x1.6abc06p-85f, 0x1.ec762p-64f, 0.0f, 0x1.144e4ap-119f,
     0x1.68a1cap-4f, 0.0f, 0.0f, 0x1.56ee5ep-12f, 0.0f, 0x1.8d4c56p-124f,
     0x1.1d1fep-54f, 0.0f, 0x1.c0bff8p-29f, 0.0f, 0x1.f1a86p-69f, 0.0f, 0x1.7929p-1f,
     0x1.c89f6ep-30f, 0x1.f0158ap-73f, 0x1.05ef24p-65f, 0x1.ae039ap-55f,
     0x1.9269bp-14f, 0x1.10e3e6p-85f, 0.0f, 0x1.93efbp-95f, 0x1.f630a4p-107f, 0.0f,
     0.0f, 0x1.d8b014p-5f, 0.0f, 0.0f, 0x1.21b106p-55f, 0x1.58f31p-43f, 0.0f,
     0x1.c6887cp-69f, 0x1.f87df4p-26f, 0x1.c5b654p-67f, 0x1.f8914p-11f, 0.0f,
     0x1.5141aep-57f, 0x1.684286p-82f, 0.0f, 0x1.7c4b6cp-75f, 0.0f, 0x1.36fa5cp-29f,
     0x1.ecb4fp-107f, 0.0f, 0x1.1f6618p-94f, 0x1.1494f4p-79f, 0x1.e5124p-74f, 0.0f,
     0.0f, 0x1.968b22p-21f, 0x1.972b6cp-27f, 0.0f, 0.0f, 0x1.19e1dap-11f,
     0x1.915a82p-19f, 0x1.cd4afp-125f, 0.0f, 0x1p0f, 0.0f, 0x1.b3f278p-54f,
     0x1.29af62p-39f, 0.0f, 0.0f, 0x1.861512p-122f, 0x1.b11b2p-43f, 0x1.3ce7d4p-104f,
     0x1.1cf9d4p-99f, 0.0f, 0.0f, 0x1.8b689p-106f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3973b8p-82f, 0x1.ec9544p-58f, 0x1.88474ep-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4ec65p-105f, 0.0f, 0x1.753f06p-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.7712bcp-12f, 0x1.4df6e8p-73f, 0.0f, 0.0f, 0.0f, 0x1.ea071ep-67f,
     0x1.e4e204p-21f, 0x1.4dedb8p-60f, 0x1.9888cp-23f, 0x1.086f06p-19f,
     0x1.75ea5cp-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c0086ap-60f, 0x1.23a3f6p-39f,
     0.0f, 0.0f, 0.0f, 0x1.86d162p-83f, 0.0f, 0x1.8643acp-37f, 0.0f, 0.0f,
     0x1.3fb294p-88f, 0x1.b869e4p-47f, 0.0f, 0x1.347432p-32f, 0x1.e6f64p-61f,
     0x1.8a9e7p-54f, 0x1.06b1aap-107f, 0x1.ab2caap-12f, 0x1.281066p-110f, 0.0f, 0.0f,
     0.0f, 0x1.4394a4p-91f, 0x1.f3a9fep-74f, 0.0f, 0x1.36a88cp-41f, 0.0f,
     0x1.68707p-58f, 0.0f, 0x1.821d4ap-33f, 0.0f, 0x1.f66d84p-36f, 0x1.c8b3eap-64f,
     0x1.8fd096p-74f, 0x1.e6d86ap-37f, 0.0f, 0.0f, 0x1.7a9c4cp-58f, 0.0f, 0.0f,
     0x1.eaf404p-126f, 0x1.6ede0cp-53f, 0x1.87209ep-94f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a7728cp-88f, 0.0f, 0x1.6f1f1ap-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f,
     0.0f, 0.0f, 0x1.3b6a84p-35f, 0.0f, 0.0f, 0.0f, 0x1.73f8c6p-8f, 0.0f, 0.0f,
     0x1.131d0ap-79f, 0x1.c47a7p-32f, 0x1.a05cfcp-50f, 0.0f, 0.0f, 0.0f,
     0x1.070e4p-47f, 0.0f, 0x1.494062p-34f, 0x1.84a0a2p-47f, 0.0f, 0.0f,
     0x1.2a864cp-88f, 0x1.1c2506p-88f, 0x1.9ee248p-64f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.248226p-46f, 0x1.068b28p-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0b595cp-45f,
     0x1.37f53p-75f, 0.0f, 0.0f, 0.0f, 0x1.06654cp-74f, 0x1.343cdep-20f, 0.0f, 0.0f,
     0x1.e4b1cp-19f, 0x1.55a574p-13f, 0x1.00f75ep-24f, 0.0f, 0x1.88471ep-117f, 0.0f,
     0.0f, 0x1.34be66p-102f, 0.0f, 0.0f, 0x1.5f702ap-72f, 0.0f, 0.0f, 0x1.72e986p-73f,
     0.0f, 0x1.af0c6ap-12f, 0.0f, 0x1.4cd852p-85f, 0.0f, 0x1.aeb1bap-38f,
     0x1.329c1ap-34f, 0x1.5aa242p-112f, 0.0f, 0.0f, 0x1.dafddap-58f, 0.0f,
     0x1.697b3ap-61f, 0x1.c5ee66p-119f, 0.0f, 0x1.012c58p-12f, 0.0f, 0x1.2acf76p-113f,
     0.0f, 0x1.71de1ap-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fe0014p-75f, 0.0f,
     0.0f, 0x1.1bfc26p-23f, 0x1.80bf88p-1f, 0x1p0f, 0x1.c92f54p-58f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.96e912p-20f, 0.0f, 0x1.38e316p-103f, 0.0f, 0.0f,
     0x1.2f40e8p-109f, 0x1.a610b8p-89f, 0x1.dfddeep-24f, 0.0f, 0x1.edff84p-102f, 0.0f,
     0x1.edc266p-65f, 0x1.ed28a2p-94f, 0x1.1e6f48p-21f, 0.0f, 0.0f, 0.0f,
     0x1.6d6cbp-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f64898p-81f, 0.0f,
     0x1.19a974p-109f, 0x1.9aff3ep-63f, 0x1.7a411cp-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e5cb74p-51f, 0.0f, 0.0f, 0x1.2b7efp-18f, 0.0f, 0.0f, 0x1.1a3deap-80f,
     0x1.80e74ep-15f, 0x1.4c107p-112f, 0.0f, 0.0f, 0x1.b58638p-21f, 0x1.971364p-79f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f2f932p-12f, 0.0f, 0x1.f517ep-20f,
     0x1.24bdaap-88f, 0x1.849ec4p-85f, 0x1.720f3ep-42f, 0x1.945f08p-103f, 0.0f, 0.0f,
     0x1p0f, 0x1.3758d4p-18f, 0.0f, 0.0f, 0x1.2a5ff4p-44f, 0x1.ea642cp-111f, 0.0f,
     0x1.638454p-4f, 0x1.1dab36p-47f, 0x1.6d11dcp-58f, 0.0f, 0x1.b42858p-89f, 0.0f,
     0.0f, 0x1.c06db4p-60f, 0x1.2d2fd8p-81f, 0.0f, 0x1.3d368ap-52f, 0.0f,
     0x1.9b9b88p-47f, 0.0f, 0x1.d49336p-23f, 0.0f, 0.0f, 0x1.ec7a74p-84f, 0.0f,
     0x1.9940d6p-35f, 0x1.369ed6p-68f, 0.0f, 0x1.765e2p-106f, 0x1.ef0aa6p-63f,
     0x1.cd2b1cp-91f, 0x1.6352f6p-100f, 0x1.6d3a5ap-49f, 0x1.51c6d4p-121f, 0.0f, 0.0f,
     0x1.594e6ep-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cedef4p-17f, 0.0f,
     0x1.b8ba9ep-105f, 0x1.d9056cp-27f, 0.0f, 0.0f, 0.0f, 0x1.983ffep-91f, 0.0f, 0.0f,
     0.0f, 0x1.9d7748p-60f, 0.0f, 0x1.2521f4p-80f, 0.0f, 0x1.5b8358p-69f,
     0x1.da869cp-98f, 0x1.15578p-18f, 0.0f, 0x1.cd8d1p-36f, 0.0f, 0x1.9f0bdcp-15f,
     0x1.470f02p-76f, 0.0f, 0.0f, 0.0f, 0x1.feffa6p-62f, 0.0f, 0x1.7e255cp-71f,
     0x1.dda452p-71f, 0x1.b33458p-125f, 0x1.0ce02cp-45f, 0x1.59769ap-86f, 0.0f,
     0x1.62f0fep-29f, 0.0f, 0x1.106fdcp-69f, 0x1.7e4694p-40f, 0.0f, 0x1.163746p-117f,
     0x1.07e04ep-59f, 0x1.b2720ap-73f, 0x1.e6b52cp-94f, 0.0f, 0x1.0c5c8p-94f,
     0x1.026f46p-32f, 0.0f, 0x1.7c7d1cp-41f, 0.0f, 0x1.dccf56p-106f, 0.0f,
     0x1.0325e8p-113f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.35d652p-17f, 0.0f, 0x1p0f,
     0x1.8c36f2p-78f, 0.0f, 0.0f, 0x1.fef038p-52f, 0.0f, 0x1.5fd7a8p-89f,
     0x1.984254p-123f, 0.0f, 0x1.014eb6p-45f, 0x1.6041ccp-43f, 0.0f, 0x1.ac8ec6p-40f,
     0.0f, 0x1.22e15p-87f, 0x1.912846p-44f, 0.0f, 0.0f, 0x1.4e9ac8p-60f, 0.0f,
     0x1.27edfp-6f, 0.0f, 0.0f, 0x1.967fep-59f, 0x1.2fc3cep-126f, 0.0f, 0.0f, 0.0f,
     0x1.57da56p-123f, 0x1.78be8ep-67f, 0.0f, 0.0f, 0.0f, 0x1.ecdb1p-103f,
     0x1.eddf2p-84f, 0.0f, 0.0f, 0x1.2a69aap-47f, 0.0f, 0.0f, 0.0f, 0x1.2d4b6ap-65f,
     0x1.de76bp-48f, 0x1.38629ap-67f, 0x1.7dddb2p-64f, 0.0f, 0x1p0f, 0.0f,
     0x1.eb5b3p-21f, 0.0f, 0x1.c1980ap-6f, 0x1.4a54acp-87f, 0x1.06d58p-24f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.8cf9eap-114f, 0x1.14a6dp-90f, 0.0f, 0x1.b175c6p-36f,
     0x1.3f1a0ep-6f, 0.0f, 0x1.9fe01p-27f, 0.0f, 0x1.b6c886p-34f, 0x1.f5124ep-105f,
     0x1.53eacp-119f, 0.0f, 0x1.9d913ep-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.30ce6ap-81f,
     0.0f, 0.0f, 0x1.2c0498p-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e3fe7ap-105f, 0.0f, 0.0f, 0x1.ec1bfep-100f, 0x1.f5f116p-120f, 0.0f, 0.0f,
     0.0f, 0x1.83be9cp-65f, 0.0f, 0x1.f0cd8cp-38f, 0x1.f7c93ap-106f, 0x1.00a98ep-34f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.8c361cp-33f, 0x1.b5c5dap-121f, 0.0f, 0.0f,
     0x1.f64902p-55f, 0x1.de9238p-29f, 0x1.d67f18p-25f, 0.0f, 0.0f, 0x1.e6f6b6p-79f,
     0.0f, 0.0f, 0.0f, 0x1.bd819ep-93f, 0x1.384066p-33f, 0.0f, 0.0f, 0x1.584322p-50f,
     0x1.c82fbep-82f, 0.0f, 0x1.d29b84p-1f, 0x1.8fc55p-40f, 0.0f, 0x1.fa5168p-75f,
     0.0f, 0.0f, 0x1.dcb492p-89f, 0.0f, 0x1.42168cp-10f, 0x1.0877fp-66f,
     0x1.b16d22p-42f, 0x1.a0fa38p-125f, 0x1.4ece14p-111f, 0.0f, 0x1.28b4dcp-123f,
     0x1.ad414cp-122f, 0x1.b77966p-15f, 0.0f, 0.0f, 0x1p0f, 0x1.78853cp-104f,
     0x1.c15a74p-75f, 0.0f, 0.0f, 0x1.15e4dcp-42f, 0x1.2cdd3cp-71f, 0x1.1bd5aep-102f,
     0x1.d6d514p-103f, 0x1.bd774ap-82f, 0x1.c478a4p-94f, 0x1.ed03d8p-120f, 0.0f,
     0x1.73b6dp-18f, 0x1.2ff2eap-20f, 0x1.bb2ec8p-78f, 0x1.55a3bcp-90f,
     0x1.78192ap-121f, 0x1.bc15aep-97f, 0.0f, 0.0f, 0.0f, 0x1.522b78p-98f,
     0x1.2eebfcp-97f, 0.0f, 0.0f, 0x1.bbcd66p-51f, 0x1.9e68b4p-91f, 0x1.8b70a6p-20f,
     0x1.b72a06p-17f, 0x1.2c0c94p-87f, 0x1.696dcep-42f, 0.0f, 0.0f, 0x1.2ea36cp-102f,
     0.0f, 0x1.0d5722p-21f, 0x1.49d9bp-84f, 0.0f, 0.0f, 0.0f, 0x1.d79b3ap-64f, 0.0f,
     0.0f, 0x1.8380cap-126f, 0x1.8d428p-21f, 0x1.1565fp-121f, 0x1.c03ca6p-26f, 0.0f,
     0x1.9bab8cp-111f, 0.0f, 0x1.552044p-65f, 0x1.bf4548p-93f, 0.0f, 0x1.c08f4ep-103f,
     0x1.86177ap-27f, 0x1.799a78p-73f, 0x1.4e555ap-108f, 0.0f, 0x1.9aaa1cp-120f, 0.0f,
     0x1.f0ad3p-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5c9a0cp-91f, 0x1.37bf5ep-103f,
     0x1.31e202p-50f, 0.0f, 0x1.e4533cp-81f, 0.0f, 0x1.03205cp-117f, 0x1.f45dfap-99f,
     0x1.ba802p-97f, 0x1.8fcc7cp-77f, 0x1.878b16p-34f, 0x1.9d0818p-28f,
     0x1.c46c5ap-38f, 0.0f, 0x1.25e862p-75f, 0.0f, 0x1.d46cbp-81f, 0.0f,
     0x1.b79e16p-90f, 0x1.b0dcp-97f, 0x1.25eb88p-85f, 0.0f, 0x1.ddb37cp-110f,
     0x1.aa039ap-121f, 0x1.3dc3bcp-113f, 0x1.28b9a8p-100f, 0.0f, 0x1.fa0e84p-61f,
     0x1.75f19ap-32f, 0.0f, 0.0f, 0x1.b9339ep-53f, 0.0f, 0.0f, 0x1.16ab54p-98f, 0.0f,
     0x1.3f39eap-42f, 0.0f, 0x1.82537ap-80f, 0.0f, 0x1.a11e5p-38f, 0x1.f7c7eap-40f,
     0x1.1db194p-120f, 0.0f, 0x1.1f4c66p-125f, 0.0f, 0x1.1c2f3p-10f, 0.0f,
     0x1.31bf1ep-94f, 0.0f, 0x1.6472dap-17f, 0x1.e717bcp-81f, 0.0f, 0x1.14faa2p-122f,
     0.0f, 0.0f, 0.0f, 0x1.098d98p-101f, 0.0f, 0.0f, 0.0f, 0x1.196a06p-34f, 0.0f,
     0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.91215p-43f, 0x1.fb2f88p-88f, 0x1.3b4dcp-24f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.473546p-30f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b6d67p-45f, 0x1.d21b72p-69f, 0.0f, 0.0f, 0.0f, 0x1.6c3866p-30f, 0x1p0f, 0.0f,
     0x1p0f, 0x1.1f1614p-5f, 0x1.31e7dcp-28f, 0x1.86cb1cp-117f, 0x1.3f52cp-119f,
     0x1.1140fp-67f, 0.0f, 0x1.05e39ap-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7725e8p-72f, 0.0f, 0x1.ead754p-96f, 0x1.9108a4p-118f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.95ae5p-14f, 0x1.e1977cp-55f, 0.0f, 0.0f, 0x1.c519ep-45f, 0x1.1ff9dp-99f,
     0x1.d958bcp-44f, 0.0f, 0x1.254afcp-121f, 0.0f, 0.0f, 0.0f, 0x1.bcbeb6p-30f, 0.0f,
     0.0f, 0x1.be3adep-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0cb112p-88f, 0.0f,
     0x1.92af6p-62f, 0.0f, 0x1.d37beep-86f, 0.0f, 0x1.d53bb8p-110f, 0.0f, 0.0f, 0.0f,
     0x1.8b17c6p-57f, 0x1.22bb14p-61f, 0x1.b3faep-7f, 0.0f, 0.0f, 0x1.9f67f2p-5f,
     0.0f, 0.0f, 0x1.55f18p-44f, 0x1.25ad12p-16f, 0x1.0ced04p-4f, 0x1.4bd49cp-126f,
     0.0f, 0x1.d07f28p-53f, 0.0f, 0.0f, 0x1.55a098p-118f, 0.0f, 0.0f, 0.0f,
     0x1.979a28p-36f, 0.0f, 0.0f, 0.0f, 0x1.a9b2b4p-92f, 0x1.8349d6p-7f,
     0x1.a5cbdep-31f, 0.0f, 0x1.846844p-12f, 0x1.629dacp-110f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.116356p-92f, 0x1.03ffb6p-17f, 0.0f, 0x1.f96712p-26f, 0.0f, 0.0f,
     0x1.5c1fd8p-59f, 0x1.28defep-118f, 0x1.daa4fap-69f, 0x1.88fdfep-101f,
     0x1.b979eap-112f, 0.0f, 0x1.ba8aaep-23f, 0x1.628d3p-87f, 0x1.42891ap-91f,
     0x1.9aa33ap-87f, 0.0f, 0x1.11c124p-24f, 0.0f, 0x1.695c8ap-74f, 0x1.ae498p-121f,
     0.0f, 0.0f, 0x1.ce258cp-28f, 0.0f, 0.0f, 0.0f, 0x1.1b0f7cp-67f, 0.0f, 0.0f, 0.0f,
     0x1.a2bf9p-119f, 0x1.5adf8cp-67f, 0.0f, 0.0f, 0.0f, 0x1.cbd37ap-74f,
     0x1.ef0d5ap-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.91dbb2p-95f, 0.0f, 0.0f, 0.0f,
     0x1.4f34c4p-68f, 0.0f, 0x1.d16bfap-114f, 0.0f, 0x1.09955ap-27f, 0x1.62c4c4p-8f,
     0.0f, 0x1.1a0fcp-93f, 0.0f, 0x1.e39e14p-82f, 0.0f, 0x1.ba4e48p-11f,
     0x1.20a336p-14f, 0.0f, 0.0f, 0x1.e3d8eep-92f, 0x1.add8c2p-53f, 0x1.a0ac4ep-13f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.675fbep-111f, 0x1.5b39a4p-25f, 0.0f, 0.0f,
     0x1.912ef6p-26f, 0x1.98e278p-42f, 0x1.3f641p-5f, 0.0f, 0.0f, 0x1.847b9p-60f,
     0.0f, 0x1.ef8ffcp-11f, 0.0f, 0x1.fefa38p-105f, 0x1.1c618ep-41f, 0x1.5cb354p-74f,
     0x1.70df9p-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.53dcfp-62f, 0.0f, 0x1.259b16p-47f,
     0x1.e6fec8p-64f, 0x1.f0b922p-3f, 0.0f, 0.0f, 0x1.e1786p-86f, 0.0f,
     0x1.ea2534p-45f, 0.0f, 0.0f, 0x1.a0126cp-17f, 0.0f, 0.0f, 0x1.49d2e8p-45f, 0.0f,
     0x1.bc3c02p-116f, 0.0f, 0.0f, 0.0f, 0x1.78dee4p-102f, 0.0f, 0x1.0706b2p-78f,
     0.0f, 0x1.4227b4p-123f, 0x1.b9f8ecp-22f, 0x1.7e38p-98f, 0.0f, 0.0f,
     0x1.e14452p-34f, 0.0f, 0.0f, 0.0f, 0x1.c9abd2p-92f, 0.0f, 0.0f, 0x1.c82c66p-82f,
     0x1.bb51bap-125f, 0.0f, 0.0f
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
            tmp1 = Sleef_finz_fabsf4_avx2128(tmp0);
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
    printf("Sleef_finz_fabsf4_avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_fabsf4_avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
