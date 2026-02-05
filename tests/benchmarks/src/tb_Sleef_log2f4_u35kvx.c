/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_log2f4_u35kvx.c --function Sleef_log2f4_u35kvx \
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
     0x1.aa12fcp-74f, 0x1.5335b6p-126f, 0x1.f354fep-53f, 0x1.b0babp-94f, 0.0f, 0.0f,
     0.0f, 0x1.d9be14p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c2144ep-36f, 0.0f,
     0x1.e15b64p-109f, 0.0f, 0x1.34187ap-89f, 0x1.5c67a4p-108f, 0x1.bddfap-19f, 0.0f,
     0.0f, 0x1.41b83ep-35f, 0.0f, 0.0f, 0x1.398b24p-25f, 0x1.417ba4p-110f,
     0x1.4f128p-65f, 0.0f, 0.0f, 0x1.b81552p-27f, 0.0f, 0x1.fe4348p-123f,
     0x1.a115ccp-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dbe056p-53f, 0x1.c55abcp-67f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f8p-103f, 0.0f, 0x1.246e04p-45f, 0x1.fbc97p-49f,
     0x1.be878p-11f, 0x1.42095cp-117f, 0.0f, 0x1.3fada6p-29f, 0.0f, 0.0f,
     0x1.2caebp-54f, 0x1.45726p-42f, 0x1.5c9634p-109f, 0.0f, 0x1.a3837cp-85f,
     0x1.f906d4p-26f, 0.0f, 0x1.a916fp-77f, 0.0f, 0.0f, 0.0f, 0x1.7f7cap-5f,
     0x1.461cep-41f, 0.0f, 0x1.642b9p-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c54a9ep-83f, 0.0f, 0x1.d87e38p-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.05a272p-21f, 0.0f, 0x1.4f5d3ap-99f, 0x1.9c986ep-30f, 0.0f, 0x1.895ebp-87f,
     0.0f, 0x1.6ce3cep-29f, 0x1.b51b0ap-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.daf2a4p-97f,
     0.0f, 0.0f, 0.0f, 0x1.9b72c6p-18f, 0.0f, 0x1.0ad1dep-108f, 0x1.2471d4p-12f,
     0x1.67b392p-58f, 0x1.815cdep-124f, 0.0f, 0.0f, 0x1.d339a8p-89f, 0.0f,
     0x1.2044f8p-25f, 0.0f, 0x1.ae8758p-85f, 0.0f, 0x1.0d0d16p-8f, 0.0f, 0.0f,
     0x1.c9faf8p-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.94bb36p-102f, 0.0f, 0x1.0c32aap-118f, 0x1.e98ee6p-10f, 0x1.792c92p-79f,
     0x1.d8c744p-62f, 0x1.2560e4p-39f, 0.0f, 0x1.ece786p-26f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ba755cp-89f, 0.0f, 0x1.7951cap-25f, 0.0f, 0x1.e3458ep-54f, 0x1.126224p-117f,
     0.0f, 0.0f, 0x1.4c6542p-33f, 0.0f, 0x1.38cb6ep-61f, 0x1.9b43fap-36f,
     0x1.6e06b6p-30f, 0x1.277714p-20f, 0x1.3609d2p-98f, 0x1.8aab8p-63f,
     0x1.03ed1p-19f, 0x1.a647c2p-84f, 0x1.26f6ep-19f, 0x1.980d5p-52f, 0.0f,
     0x1.047578p-11f, 0.0f, 0.0f, 0x1.5f51bep-40f, 0x1.f11538p-22f, 0x1.ed8248p-45f,
     0.0f, 0x1.7cd968p-123f, 0x1.25b2d2p-5f, 0.0f, 0x1.6d3072p-69f, 0.0f, 0.0f,
     0x1.3bee56p-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fbc60ep-27f,
     0x1.7dc39p-58f, 0.0f, 0x1.6c8efap-78f, 0x1.fcbc78p-4f, 0.0f, 0.0f,
     0x1.82acd2p-89f, 0.0f, 0x1.82c13ap-49f, 0.0f, 0x1.05e9ccp-61f, 0.0f,
     0x1.83b3c4p-104f, 0x1.de15dcp-22f, 0x1.e76cc2p-106f, 0.0f, 0.0f, 0x1.83168ep-42f,
     0.0f, 0.0f, 0x1.bdec6ap-57f, 0x1.91ebaep-25f, 0x1.6370ecp-73f, 0.0f, 0.0f, 0.0f,
     0x1.dc4548p-38f, 0x1.c498d6p-35f, 0.0f, 0.0f, 0x1.28c922p-27f, 0x1.39a27cp-119f,
     0x1.f1b634p-4f, 0.0f, 0x1.72a8cp-50f, 0.0f, 0.0f, 0x1.e43984p-31f, 0.0f, 0.0f,
     0.0f, 0x1.054e36p-107f, 0x1.27a376p-39f, 0.0f, 0x1.ff9f5ap-116f, 0x1.a672p-106f,
     0x1.4c203cp-109f, 0.0f, 0.0f, 0x1.41610ep-53f, 0x1.ad5fe8p-60f, 0.0f,
     0x1.bbd2fap-4f, 0.0f, 0x1.3de5dep-86f, 0.0f, 0.0f, 0x1.b159e6p-7f,
     0x1.5bc428p-7f, 0.0f, 0.0f, 0x1.bad6a2p-7f, 0.0f, 0x1.64fcbap-78f, 0.0f,
     0x1.ed709cp-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dc214cp-29f, 0.0f, 0.0f, 0.0f,
     0x1.0e54dap-84f, 0.0f, 0.0f, 0.0f, 0x1.5dde08p-35f, 0.0f, 0x1.4c7b68p-12f,
     0x1.ff9836p-108f, 0.0f, 0.0f, 0.0f, 0x1.37c402p-52f, 0x1.f4df2ap-102f,
     0x1.857e7ep-45f, 0.0f, 0.0f, 0x1.d1d69p-80f, 0x1.3bc994p-100f, 0.0f, 0.0f,
     0x1.fa5bp-120f, 0x1.3097cap-102f, 0.0f, 0.0f, 0x1.ec8b8ap-9f, 0.0f,
     0x1.d0beccp-89f, 0x1.1e51dp-48f, 0x1.68665ap-38f, 0.0f, 0.0f, 0x1.325b1ap-98f,
     0.0f, 0.0f, 0.0f, 0x1.c68916p-15f, 0x1.1b9488p-7f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.94943ap-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.12b23ap-77f, 0x1.512afcp-102f, 0.0f,
     0x1.d9cb8ep-28f, 0x1.012e9ep-67f, 0.0f, 0x1.e8083p-73f, 0.0f, 0.0f,
     0x1.e12f4ep-48f, 0x1.94be1ep-11f, 0.0f, 0x1.667a7ep-62f, 0x1.af6c14p-1f,
     0x1.0d2cbp-2f, 0x1.caa664p-38f, 0.0f, 0x1.6ad7cap-3f, 0x1.3e9ed2p-43f, 0.0f,
     0.0f, 0x1.321daap-50f, 0x1.42c84cp-104f, 0.0f, 0x1.a942fep-29f, 0.0f, 0.0f, 0.0f,
     0x1.9df3bep-96f, 0.0f, 0x1.4bcd4ap-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7d0354p-13f,
     0.0f, 0x1.d0d788p-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7cd79ap-66f,
     0x1.54f912p-108f, 0x1.2f8df6p-65f, 0.0f, 0x1.877f02p-33f, 0x1.12863p-94f,
     0x1.fae546p-8f, 0.0f, 0.0f, 0x1.3493f8p-97f, 0x1.25da04p-84f, 0x1.12ad2cp-79f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ae0496p-19f, 0.0f,
     0x1.26b384p-78f, 0.0f, 0x1.b953cep-16f, 0x1.8df9ecp-105f, 0.0f, 0x1.0b64dp-72f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.89dbeap-34f, 0.0f, 0x1.602c24p-29f, 0.0f, 0.0f,
     0x1.680fd8p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.793162p-9f, 0x1.352dd8p-62f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b62318p-10f, 0.0f, 0.0f, 0x1.66f73p-15f,
     0.0f, 0x1.eb1a0ep-38f, 0.0f, 0x1.df4776p-92f, 0.0f, 0x1.726464p-83f, 0.0f, 0.0f,
     0x1.d4d5f4p-70f, 0x1.c3d736p-21f, 0x1.b66c62p-11f, 0x1.9f6668p-120f,
     0x1.24ea8cp-113f, 0.0f, 0.0f, 0x1.2222bap-23f, 0.0f, 0.0f, 0x1.5bf5dap-98f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.770e2ep-26f, 0.0f, 0x1.a2ec08p-26f, 0.0f, 0x1.68b638p-33f,
     0x1.4d3f7p-52f, 0x1.86b3bep-50f, 0.0f, 0.0f, 0x1.c8f91p-92f, 0.0f,
     0x1.ffb4acp-121f, 0.0f, 0x1.5bef0ep-83f, 0.0f, 0x1.5cef3cp-38f, 0.0f, 0.0f,
     0x1.c9c7f6p-17f, 0x1.22010ap-6f, 0x1.c6c288p-7f, 0x1.7748a4p-81f,
     0x1.f00f52p-13f, 0x1.383a2ap-10f, 0x1.151426p-125f, 0x1.11f70ep-100f, 0.0f, 0.0f,
     0x1.71e944p-80f, 0x1.820894p-42f, 0x1.02114cp-59f, 0x1.c5735ep-101f, 0.0f,
     0x1.4909aep-15f, 0x1.cba388p-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.32849p-53f, 0.0f,
     0.0f, 0x1.c9d368p-18f, 0x1.ec2508p-66f, 0x1.665626p-64f, 0x1.64ce3ep-78f, 0.0f,
     0.0f, 0.0f, 0x1.6f175ep-74f, 0x1.ea0d7ap-98f, 0x1.590e7ep-41f, 0.0f,
     0x1.da86dp-50f, 0x1.788b2p-77f, 0x1.1d330cp-110f, 0.0f, 0x1.b200aap-5f,
     0x1.0321cp-27f, 0x1.96801ap-98f, 0x1.ff3cacp-121f, 0x1.22f046p-61f,
     0x1.64084ep-85f, 0.0f, 0.0f, 0.0f, 0x1.6d0c02p-18f, 0x1.ed6a7ep-122f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e733dcp-104f, 0x1.655282p-14f, 0x1.3d331ep-87f, 0.0f,
     0x1.f7995cp-8f, 0x1.c3646ep-119f, 0.0f, 0.0f, 0x1.243808p-108f, 0.0f, 0.0f,
     0x1.22453ep-30f, 0.0f, 0x1.736e8p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c0a20ap-110f, 0.0f, 0.0f, 0x1.63a796p-23f, 0.0f, 0.0f, 0x1.64705p-80f, 0.0f,
     0x1.a32d0ap-121f, 0.0f, 0x1.ee842ap-118f, 0x1.85b1eap-13f, 0.0f, 0.0f,
     0x1.1e1f5cp-9f, 0x1.016b08p-60f, 0x1.0a20ep-71f, 0.0f, 0x1.d7a07cp-65f,
     0x1.f07996p-107f, 0x1.8e4364p-122f, 0.0f, 0x1.e449bep-30f, 0x1.31550ep-124f,
     0x1.a34ab8p-114f, 0.0f, 0x1.2e3ffcp-59f, 0.0f, 0.0f, 0x1.35f72ep-9f,
     0x1.76c9ap-4f, 0.0f, 0x1.a215d8p-87f, 0x1.cc0862p-30f, 0.0f, 0x1.9687eap-50f,
     0x1.5de752p-123f, 0.0f, 0.0f, 0x1.29f71cp-43f, 0.0f, 0x1.921b2ep-84f, 0.0f,
     0x1.8c8218p-30f, 0.0f, 0x1.a453aep-57f, 0.0f, 0.0f, 0x1.57bbd8p-105f,
     0x1.7f0578p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8f25e6p-22f, 0.0f, 0.0f,
     0.0f, 0x1.27edaap-20f, 0.0f, 0x1.168fa2p-57f, 0x1.e3acbcp-51f, 0x1.cf26ccp-40f,
     0.0f, 0.0f, 0x1.67698p-75f, 0.0f, 0.0f, 0.0f, 0x1.55c024p-15f, 0x1.74669ep-79f,
     0x1.a84604p-40f, 0x1.57e5p-100f, 0.0f, 0.0f, 0.0f, 0x1.c64816p-31f,
     0x1.30cb36p-91f, 0.0f, 0.0f, 0x1.351568p-68f, 0x1.fb4b76p-114f, 0x1.0455a6p-76f,
     0x1.487a78p-62f, 0x1.d1a842p-60f, 0x1.dc8bd8p-71f, 0.0f, 0.0f, 0x1.0adc9cp-30f,
     0.0f, 0x1.70ace2p-110f, 0.0f, 0.0f, 0x1.c516d2p-13f, 0.0f, 0x1.71d264p-105f,
     0x1.d1e36ep-54f, 0x1.f94db4p-1f, 0x1.95a046p-43f, 0.0f, 0.0f, 0x1.1a725ap-118f,
     0x1.e7c1eep-111f, 0x1.25668ap-87f, 0x1.965faep-24f, 0x1.36019cp-23f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d3e4b8p-74f, 0x1.f4160ap-100f, 0x1.e48e18p-46f, 0.0f, 0.0f,
     0x1.c31026p-115f, 0.0f, 0x1.3b6ca2p-103f, 0x1.48a31ep-49f, 0x1.e1ca16p-42f,
     0x1.7d137ap-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.564ebap-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7ea9bp-126f,
     0x1.a7f9d2p-71f, 0.0f, 0x1.c291bap-35f, 0.0f, 0x1.5ea716p-96f, 0.0f,
     0x1.dd6b14p-19f, 0.0f, 0x1.1452fp-42f, 0.0f, 0x1.3a018cp-33f, 0x1.c7ca12p-112f,
     0.0f, 0x1.b0605p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6d411cp-58f, 0.0f,
     0x1.43babap-112f, 0.0f, 0.0f, 0x1.999174p-46f, 0x1.0cbb9cp-64f, 0x1.3eb958p-99f,
     0x1.63ba72p-107f, 0.0f, 0x1.7e4764p-72f, 0.0f, 0x1.b0979ap-62f, 0x1.88e19p-35f,
     0.0f, 0x1.dc9e0cp-98f, 0x1.a24606p-50f, 0.0f, 0.0f, 0.0f, 0x1.4b0edap-80f, 0.0f,
     0.0f, 0.0f, 0x1.9e75b2p-57f, 0x1.eeeb2ap-108f, 0.0f, 0.0f, 0x1.4149aap-126f,
     0.0f, 0.0f, 0x1.08cd0ep-106f, 0x1.747782p-36f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ee46f4p-102f, 0.0f, 0x1.0385bap-120f, 0.0f, 0.0f, 0x1.70e31p-70f,
     0x1.e7e3f4p-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4915eap-77f, 0x1.515986p-87f, 0x1.052cdcp-115f, 0x1.549e4cp-116f,
     0x1.780d1cp-113f, 0x1.814b0ep-42f, 0.0f, 0x1.405c48p-25f, 0.0f, 0.0f,
     0x1.d357cap-114f, 0.0f, 0x1.1c3c5ap-82f, 0.0f, 0.0f, 0x1.1ce474p-21f,
     0x1.ca70f6p-106f, 0x1.53bb9cp-20f, 0x1.5a2178p-14f, 0x1.e22a96p-66f,
     0x1.3c5348p-2f, 0.0f, 0.0f, 0x1.357ca8p-45f, 0x1.913c5ap-37f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.630fa4p-63f, 0x1.ea2c92p-41f, 0.0f, 0x1.899512p-49f, 0.0f,
     0x1.ac8d0cp-25f, 0x1.cb215ap-89f, 0.0f, 0x1.45dfe8p-17f, 0.0f, 0.0f,
     0x1.e463f2p-109f, 0x1.728bdep-88f, 0x1.3926b8p-67f, 0.0f, 0.0f, 0x1.935c2ap-90f,
     0.0f, 0x1.f26ec2p-11f, 0.0f, 0x1.bf3e1ep-16f, 0x1.31ab4p-96f, 0x1.369b5cp-95f,
     0x1.d29e0cp-7f, 0.0f, 0x1.9069fep-102f, 0x1.18e014p-14f, 0.0f, 0x1.ab828ap-119f,
     0.0f, 0x1.6a188ep-40f, 0.0f, 0.0f, 0x1.49f0ep-45f, 0.0f, 0.0f, 0x1.7a08eap-62f,
     0x1.44449p-91f, 0.0f, 0.0f, 0x1.0f91a4p-6f, 0x1.9be8ecp-67f, 0.0f, 0.0f, 0.0f,
     0x1.2245cp-100f, 0x1.c7a59ep-124f, 0x1.847a3cp-99f, 0.0f, 0x1.ff2df4p-21f,
     0x1.9e39f6p-54f, 0x1.0e7896p-72f, 0.0f, 0x1.275a0ap-66f, 0.0f, 0.0f,
     0x1.418548p-41f, 0.0f, 0x1.cb2ca4p-111f, 0x1.f701fep-37f, 0.0f, 0.0f,
     0x1.16f7p-49f, 0.0f, 0x1.5e92a2p-79f, 0x1.679cc4p-41f, 0.0f, 0.0f,
     0x1.864d24p-41f, 0x1.762942p-111f, 0.0f, 0x1.aab484p-56f, 0x1.8b8b8p-7f,
     0x1.824baap-98f, 0.0f, 0x1.e91dd8p-51f, 0x1.d9ce8p-12f, 0.0f, 0x1.2eb20ap-3f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.16004p-5f, 0x1.7cfd6p-95f,
     0x1.334cdap-117f, 0x1.fae072p-44f, 0x1.e8fd9ap-122f, 0.0f, 0.0f,
     0x1.d73cb4p-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f73354p-123f,
     0x1.af481cp-13f, 0x1.b3b1cap-25f, 0x1.600eaep-5f, 0x1.5ff8b6p-115f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.7f45dap-51f, 0.0f, 0x1.909534p-53f, 0.0f, 0.0f,
     0x1.e84dccp-4f, 0.0f, 0.0f, 0.0f, 0x1.966578p-5f, 0.0f, 0.0f, 0.0f,
     0x1.4e5756p-94f, 0.0f, 0.0f, 0x1.44cec6p-107f, 0.0f, 0.0f, 0.0f, 0x1.00400ap-50f,
     0.0f, 0x1.82045p-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0cba76p-104f,
     0x1.c6f054p-102f, 0x1.d1961p-25f, 0x1.27c532p-88f, 0.0f, 0x1.ceeb86p-30f,
     0x1.b5c2fep-77f, 0.0f, 0x1.ce5bfcp-25f, 0x1.a10964p-123f, 0x1.daf33cp-39f, 0.0f,
     0x1.bf3ce6p-94f, 0.0f, 0.0f, 0x1.ff29bep-90f, 0.0f, 0x1.7d7256p-25f,
     0x1.be21dcp-75f, 0x1.a56f12p-26f, 0x1.039c66p-104f, 0x1.2c2da6p-66f, 0.0f, 0.0f,
     0x1.d201aep-114f, 0x1.b806d2p-39f, 0.0f, 0x1.afe7b8p-122f, 0x1.9ed5fep-121f,
     0.0f, 0x1.a4852ap-19f, 0.0f, 0x1.f2dd54p-111f, 0.0f, 0.0f, 0x1.4a297cp-53f, 0.0f,
     0.0f, 0.0f, 0x1.567cfep-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.debd16p-55f,
     0x1.6469a2p-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1dd93ep-45f, 0.0f,
     0.0f, 0.0f, 0x1.2316d4p-62f, 0x1.184a74p-95f, 0.0f, 0.0f, 0.0f, 0x1.931b5ap-57f,
     0x1.d36fc6p-44f, 0x1.0b3194p-86f, 0.0f, 0x1.0efe66p-23f, 0.0f, 0x1.8b46aap-11f,
     0.0f, 0x1.1484b4p-93f, 0x1.6b279ap-18f, 0x1.8f5202p-93f, 0.0f, 0.0f, 0.0f,
     0x1.bcee8ep-109f, 0.0f, 0x1.033fbp-13f, 0.0f, 0x1.729408p-105f, 0.0f,
     0x1.ce57a8p-27f, 0.0f, 0x1.8d5fb6p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.afe2cp-96f,
     0x1.0a48c2p-17f, 0x1.41d6c8p-18f, 0x1.06b638p-121f, 0.0f, 0.0f, 0x1.ee269p-96f,
     0.0f, 0x1.97b91ap-98f, 0.0f, 0.0f, 0x1.badcbep-29f, 0.0f, 0x1.e05cep-112f, 0.0f,
     0x1.968174p-48f, 0x1.66a9f4p-117f, 0x1.05e6b8p-49f, 0.0f, 0x1.e45aecp-3f, 0.0f
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
            tmp1 = Sleef_log2f4_u35kvx(tmp0);
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
    printf("Sleef_log2f4_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_log2f4_u35kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
