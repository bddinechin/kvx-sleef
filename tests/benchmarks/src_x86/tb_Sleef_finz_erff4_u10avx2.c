/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_erff4_u10avx2128.c --function Sleef_finz_erff4_u10avx2128 \
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
     0x1.60da5ap-30f, 0.0f, 0.0f, 0.0f, 0x1.ae94cep-3f, 0x1.bfdcp-19f,
     0x1.a93238p-95f, 0.0f, 0.0f, 0.0f, 0x1.546a28p-88f, 0x1.af5844p-117f,
     0x1.afeb78p-53f, 0x1.06521cp-20f, 0x1.39f4ep-8f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.99d85p-16f, 0x1.9721f8p-43f, 0.0f, 0.0f, 0.0f, 0x1.eea54ep-67f,
     0x1.119b6cp-95f, 0x1.9fd1b8p-55f, 0x1.8af012p-116f, 0x1.f09bp-101f, 0.0f,
     0x1.75b092p-109f, 0.0f, 0.0f, 0x1.f919ep-49f, 0x1.969a76p-89f, 0x1.4cc338p-55f,
     0.0f, 0.0f, 0x1.281916p-100f, 0x1.498eap-10f, 0x1.28b08ap-7f, 0x1.d0413ap-47f,
     0.0f, 0x1.682a7ap-35f, 0.0f, 0x1.841b0cp-76f, 0.0f, 0x1.de06d2p-65f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f4f7cep-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.95845ep-80f,
     0x1.3c4a76p-38f, 0.0f, 0.0f, 0x1.485d76p-109f, 0x1.3795f4p-89f, 0x1.189c08p-100f,
     0.0f, 0x1.b453d8p-89f, 0.0f, 0x1.3bcfe6p-30f, 0x1.327df4p-73f, 0.0f, 0.0f,
     0x1.c6b504p-37f, 0x1.341448p-72f, 0.0f, 0.0f, 0x1.73b6b8p-94f, 0x1.956f28p-37f,
     0x1.bba0d6p-115f, 0.0f, 0x1.26efa8p-40f, 0.0f, 0x1.80279ap-24f, 0x1.fd03fep-29f,
     0x1.623dccp-90f, 0.0f, 0.0f, 0x1.1fac98p-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ffdea2p-71f, 0x1.5d9d34p-96f, 0.0f, 0x1.400774p-7f, 0.0f,
     0x1.362808p-103f, 0x1.8c7d38p-102f, 0.0f, 0x1.275b82p-3f, 0x1.59dc76p-16f, 0.0f,
     0.0f, 0x1.082522p-118f, 0.0f, 0x1.f1060ep-28f, 0x1.83eee6p-110f,
     0x1.d7cc0ep-102f, 0x1.d4cf4cp-84f, 0.0f, 0.0f, 0x1.5bf178p-112f, 0.0f,
     0x1.98e63cp-99f, 0.0f, 0x1p0f, 0.0f, 0x1.330b66p-103f, 0x1.350b06p-62f, 0.0f,
     0x1.cb7be2p-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e836ccp-1f, 0x1.d3ce8cp-114f, 0.0f,
     0x1.0bffb4p-50f, 0.0f, 0x1.561bb2p-116f, 0x1.f295c8p-88f, 0x1.f73142p-65f,
     0x1.69c332p-3f, 0.0f, 0x1.ff75acp-118f, 0.0f, 0.0f, 0.0f, 0x1.3fbf6p-67f, 0.0f,
     0.0f, 0.0f, 0x1.45d8f2p-81f, 0.0f, 0.0f, 0x1.6a7acp-49f, 0.0f, 0.0f,
     0x1.7f254p-59f, 0x1.4368c6p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9003dap-12f,
     0x1.fdfec2p-68f, 0x1.bac1f6p-75f, 0.0f, 0.0f, 0x1.2d75ap-74f, 0.0f,
     0x1.9402c8p-57f, 0x1.14515ap-46f, 0.0f, 0x1.022a38p-96f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.65ede6p-104f, 0.0f, 0x1.d1e004p-83f, 0x1.10e9ap-11f, 0.0f, 0.0f, 0.0f,
     0x1.127e72p-2f, 0.0f, 0.0f, 0.0f, 0x1.91714ap-32f, 0.0f, 0.0f, 0.0f,
     0x1.a644d4p-44f, 0.0f, 0x1.66311ap-20f, 0x1.e74d52p-33f, 0.0f, 0.0f,
     0x1.806bf2p-64f, 0.0f, 0.0f, 0x1.7c2abep-103f, 0.0f, 0x1.549c6ep-117f,
     0x1.6a6332p-70f, 0x1.5eeeb4p-113f, 0.0f, 0.0f, 0x1.549dep-121f, 0x1.2bf188p-15f,
     0.0f, 0.0f, 0x1.e1849cp-94f, 0x1.f9a36p-40f, 0.0f, 0.0f, 0x1.807fb8p-7f, 0.0f,
     0.0f, 0.0f, 0x1.970c14p-79f, 0x1.0ec49p-68f, 0x1.26a3c8p-29f, 0.0f,
     0x1.24986cp-114f, 0.0f, 0.0f, 0x1.3c3ac6p-43f, 0x1.b9f0b2p-82f, 0x1.8ef7f4p-47f,
     0x1.029e3ap-10f, 0x1.c5ea58p-69f, 0x1.039d58p-117f, 0.0f, 0.0f, 0x1.06b97ap-21f,
     0x1.b3e266p-30f, 0x1.2ab39ep-81f, 0.0f, 0.0f, 0x1.32a92p-4f, 0x1.e65456p-124f,
     0.0f, 0.0f, 0.0f, 0x1.04541ep-22f, 0.0f, 0x1.e0ca1ep-6f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.fc0978p-10f, 0.0f, 0x1.b9e8e2p-113f, 0x1.e90342p-25f, 0.0f,
     0.0f, 0x1.f963dp-119f, 0x1.840328p-23f, 0.0f, 0x1.e12636p-124f, 0x1.cc5dfap-124f,
     0x1.7341b8p-52f, 0.0f, 0x1.74c774p-14f, 0.0f, 0.0f, 0.0f, 0x1.4265dep-107f, 0.0f,
     0.0f, 0.0f, 0x1.580d4ep-119f, 0.0f, 0.0f, 0x1.8941d2p-79f, 0x1.731d02p-41f, 0.0f,
     0x1.8dc322p-76f, 0x1.9f2e6ep-121f, 0x1.4d88ep-51f, 0.0f, 0x1.df5d88p-27f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ada95ap-60f, 0x1.6274b4p-66f, 0.0f, 0.0f, 0x1.f6b74ap-13f,
     0x1.7012ap-95f, 0.0f, 0x1.e5c112p-60f, 0x1.a42602p-23f, 0x1.548a38p-35f,
     0x1.0a03f2p-66f, 0x1.457ae6p-102f, 0x1.3d4934p-108f, 0x1.373a62p-86f, 0.0f, 0.0f,
     0x1.359776p-7f, 0.0f, 0x1.f8564ap-27f, 0.0f, 0x1.230f1cp-47f, 0x1.fdd388p-11f,
     0.0f, 0.0f, 0x1.1983dep-2f, 0.0f, 0x1.fc4e62p-124f, 0x1.7f89f2p-33f,
     0x1.6757eap-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7bc436p-34f, 0.0f, 0x1.c68ecap-125f,
     0x1.1f5c8cp-4f, 0.0f, 0.0f, 0.0f, 0x1.422ce4p-81f, 0x1.ad0f64p-50f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e5ec4ep-48f, 0.0f, 0x1.89c69p-100f, 0.0f, 0.0f, 0x1.20d438p-18f,
     0x1.6aa5ecp-84f, 0x1.f8796p-121f, 0.0f, 0.0f, 0.0f, 0x1.33c472p-112f, 0.0f, 0.0f,
     0.0f, 0x1.3d1dcep-33f, 0x1.fedac2p-80f, 0.0f, 0.0f, 0x1.432a1p-91f,
     0x1.542936p-7f, 0x1.79ce7ap-11f, 0x1.ec93a8p-87f, 0.0f, 0x1.6b7082p-20f, 0.0f,
     0x1.a540eep-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e2693ep-74f,
     0.0f, 0.0f, 0x1.ec34cap-53f, 0.0f, 0.0f, 0x1.96b8cep-85f, 0.0f, 0.0f,
     0x1.8e6e5ep-5f, 0.0f, 0x1.edd396p-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.da5a94p-47f,
     0.0f, 0x1.886434p-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.43b80ap-72f, 0.0f, 0.0f,
     0.0f, 0x1.7bd762p-113f, 0.0f, 0x1.b0a8b6p-47f, 0x1.5c41dap-21f, 0x1.c8df14p-55f,
     0x1.294f2p-55f, 0.0f, 0x1.a4cd34p-121f, 0.0f, 0.0f, 0x1.bcd0e4p-17f, 0.0f, 0.0f,
     0.0f, 0x1.51e46cp-62f, 0x1.aebb5ap-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2da94ap-52f, 0x1.a2f72p-35f, 0.0f, 0x1.84bf22p-32f, 0.0f, 0x1.e6c998p-62f,
     0.0f, 0.0f, 0.0f, 0x1.dc4578p-80f, 0x1.01f554p-91f, 0.0f, 0.0f, 0x1.788a78p-63f,
     0.0f, 0.0f, 0x1.c495d8p-43f, 0x1.106196p-111f, 0x1.18c54ep-90f, 0x1.b1cad6p-64f,
     0x1.53675p-51f, 0x1.d97034p-47f, 0.0f, 0x1.2d6cf8p-115f, 0x1.0f5514p-68f,
     0x1.7b9474p-34f, 0x1.0730cep-63f, 0.0f, 0x1.5d5f5p-6f, 0.0f, 0.0f,
     0x1.2f029cp-28f, 0.0f, 0.0f, 0x1.276d4ep-101f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c52a46p-51f, 0x1.fb239ep-57f, 0.0f, 0x1p0f, 0x1.5d1902p-97f, 0x1.8714bp-74f,
     0.0f, 0x1.f01eb2p-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.129bcap-98f, 0.0f, 0.0f,
     0x1.d8fed4p-61f, 0.0f, 0x1.3f3542p-22f, 0.0f, 0x1.88b856p-25f, 0x1.cc7774p-101f,
     0x1.06fcf8p-122f, 0x1.070dp-81f, 0x1.56c334p-120f, 0x1.185f12p-86f, 0.0f,
     0x1.a3a6p-118f, 0.0f, 0.0f, 0x1.952842p-5f, 0x1.3fd09ep-126f, 0x1.0654dcp-122f,
     0x1.6dfb5cp-20f, 0x1.e8afb8p-74f, 0.0f, 0.0f, 0.0f, 0x1.89723ep-60f, 0.0f, 0.0f,
     0x1.8f468p-117f, 0x1.d7b5dep-54f, 0x1.2480dep-20f, 0.0f, 0.0f, 0.0f,
     0x1.1bec08p-7f, 0.0f, 0.0f, 0x1.4c134cp-61f, 0.0f, 0x1.8c824p-87f,
     0x1.ed1484p-71f, 0x1.67ba8p-25f, 0.0f, 0x1.99186ep-72f, 0.0f, 0.0f, 0.0f,
     0x1.27981ep-22f, 0.0f, 0x1.7c7138p-13f, 0x1.88c866p-114f, 0x1.a9645ap-60f, 0.0f,
     0x1.3419b6p-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.39e6ep-126f, 0.0f,
     0x1.cf19dap-16f, 0x1.053656p-77f, 0.0f, 0x1.752eaep-95f, 0x1.f47112p-3f, 0.0f,
     0x1.6f2bfep-14f, 0x1.29d54ep-7f, 0.0f, 0.0f, 0x1.2e66p-5f, 0.0f, 0.0f, 0.0f,
     0x1.b6f82ep-123f, 0.0f, 0x1.5b2a56p-68f, 0x1.3d127ep-12f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3298acp-101f, 0.0f, 0.0f, 0x1.c724c2p-36f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.379526p-95f, 0.0f, 0x1.b83c98p-70f, 0x1.540254p-25f, 0.0f, 0x1.eb77c4p-72f,
     0x1.936736p-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dc60ccp-18f, 0.0f,
     0x1.80b1p-71f, 0.0f, 0x1.f88bc2p-94f, 0x1.788332p-114f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7e9e1ep-22f, 0.0f, 0x1.115cdep-68f, 0.0f, 0x1.34e47cp-112f, 0.0f, 0.0f,
     0x1.d820cp-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c24396p-94f, 0.0f,
     0x1.2db8ep-100f, 0.0f, 0.0f, 0x1.362992p-41f, 0x1.63efb4p-55f, 0x1.2f21bap-43f,
     0.0f, 0x1.cf3706p-57f, 0x1.92d8b4p-99f, 0.0f, 0x1.c348acp-70f, 0x1.7e7fb6p-53f,
     0.0f, 0x1.8676ap-61f, 0x1.5e56c8p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.d0faf6p-58f, 0.0f, 0x1.a670d6p-71f, 0x1.702aaap-77f, 0x1.a117fap-104f,
     0.0f, 0.0f, 0x1.84415ep-99f, 0.0f, 0x1.a8fb7p-26f, 0x1.707334p-124f, 0.0f,
     0x1.1fc496p-28f, 0.0f, 0x1.b9cc44p-94f, 0.0f, 0x1.37159ep-61f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.9d44eep-1f, 0.0f, 0x1.2040fap-31f, 0.0f, 0x1.f7b33ep-9f,
     0x1.3aaecep-120f, 0.0f, 0.0f, 0.0f, 0x1.ef1136p-51f, 0x1.995f3cp-87f, 0.0f, 0.0f,
     0x1.73f43ap-122f, 0x1.b6dd04p-46f, 0.0f, 0x1.b1f984p-44f, 0x1.68d10cp-112f,
     0x1.39e284p-40f, 0x1.39190ep-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.005f06p-91f,
     0x1.fe8632p-98f, 0.0f, 0.0f, 0x1.5af622p-47f, 0x1.b9f488p-55f, 0x1.810d5cp-100f,
     0.0f, 0.0f, 0x1.9aa9dcp-94f, 0x1.a7aacep-82f, 0.0f, 0x1.000dep-97f,
     0x1.f843b8p-36f, 0.0f, 0x1.1e7e02p-125f, 0.0f, 0.0f, 0.0f, 0x1.a1d8c8p-8f, 0.0f,
     0x1.1264e8p-6f, 0x1.3ee58ep-4f, 0x1.25152ap-117f, 0x1.8ebd72p-85f, 0.0f, 0.0f,
     0x1.161c8cp-5f, 0x1.dcadcep-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c5fe8ep-125f,
     0x1.fb6e38p-51f, 0x1.fcb18ep-112f, 0.0f, 0.0f, 0x1.292a14p-4f, 0x1.3bcd16p-113f,
     0.0f, 0x1.e6c25ep-9f, 0.0f, 0x1.95fe28p-81f, 0x1.a5d4ecp-49f, 0.0f,
     0x1.8d1ed4p-31f, 0x1.d74a66p-79f, 0x1.30f272p-84f, 0.0f, 0.0f, 0x1.1b6754p-70f,
     0.0f, 0.0f, 0x1.c274bep-119f, 0.0f, 0x1.7cc22cp-29f, 0.0f, 0.0f, 0x1.96bd82p-80f,
     0.0f, 0.0f, 0x1.e1fe8cp-85f, 0.0f, 0x1.c1ca44p-68f, 0x1.ba9f7cp-71f, 0.0f, 0.0f,
     0.0f, 0x1.22eea6p-19f, 0.0f, 0x1.20ae8p-40f, 0.0f, 0.0f, 0.0f, 0x1.889ec6p-78f,
     0.0f, 0.0f, 0x1.f262aap-42f, 0x1.f6be88p-110f, 0x1.a0fb96p-93f, 0.0f, 0.0f,
     0x1.8f5b34p-113f, 0x1.56c10ap-19f, 0x1.774edap-102f, 0x1.27e71p-32f,
     0x1.13fc32p-77f, 0x1.e952fp-22f, 0x1.ce3486p-123f, 0.0f, 0x1.a3df34p-9f, 0.0f,
     0.0f, 0x1.4f0d36p-35f, 0.0f, 0.0f, 0.0f, 0x1.95ec8cp-42f, 0x1.160778p-25f,
     0x1.9ac1a6p-29f, 0.0f, 0x1.95151p-100f, 0.0f, 0x1.5a3e6p-104f, 0x1.293da4p-103f,
     0.0f, 0.0f, 0x1.3d9c92p-45f, 0x1.cc8fe2p-106f, 0x1.850c1ap-27f, 0x1.2dab52p-78f,
     0.0f, 0.0f, 0x1.d07f2cp-107f, 0.0f, 0x1.04829ep-29f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c76e86p-47f, 0.0f, 0x1.bfd61ep-117f, 0.0f, 0x1.86907ap-26f, 0.0f,
     0x1.efb8fcp-113f, 0x1.5130bep-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c52e18p-120f,
     0.0f, 0.0f, 0x1.231ad8p-3f, 0x1.d94994p-19f, 0.0f, 0.0f, 0.0f, 0x1.14052ap-10f,
     0x1.33fe3ap-59f, 0.0f, 0.0f, 0.0f, 0x1.ca901p-61f, 0.0f, 0x1.2beda4p-117f, 0.0f,
     0x1.cf8f1ep-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.935fb6p-30f, 0.0f, 0.0f,
     0x1.de9a04p-115f, 0.0f, 0x1.98b1d8p-61f, 0.0f, 0x1.3d3cdap-72f, 0x1.6cccdep-86f,
     0x1.b8f442p-98f, 0.0f, 0x1.71980ep-90f, 0x1.a72a3ap-83f, 0x1.5c21f8p-19f, 0.0f,
     0x1.2fd9b8p-36f, 0x1.0a6d14p-102f, 0.0f, 0x1.b09bf6p-22f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.869e18p-112f, 0x1.a5fb3ap-16f, 0x1.1cfda2p-121f, 0.0f, 0x1.eb9d0ap-58f,
     0.0f, 0x1.4d3076p-30f, 0x1.30b758p-11f, 0.0f, 0x1.49a8c4p-6f, 0.0f,
     0x1.80705cp-74f, 0.0f, 0.0f, 0x1.679188p-75f, 0.0f, 0x1.08ff1cp-87f, 0.0f,
     0x1.e90ae6p-78f, 0x1.ff6e52p-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.be29ccp-65f, 0.0f,
     0.0f, 0.0f, 0x1.f53e98p-94f, 0.0f, 0x1.03f282p-123f, 0x1.8190dep-42f,
     0x1.93a8f6p-120f, 0x1.a79d86p-3f, 0x1.78252cp-49f, 0.0f, 0.0f, 0x1.7c76d2p-90f,
     0x1.cc8338p-41f, 0x1.b7ef98p-63f, 0.0f, 0x1.c01bep-9f, 0.0f, 0.0f,
     0x1.f54712p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.23c66p-30f, 0x1.f28f8p-90f, 0.0f,
     0x1.e750ap-53f, 0x1.f55516p-117f, 0.0f, 0x1.2eba04p-89f, 0x1.d393dap-92f,
     0x1.72e6b2p-2f, 0x1.371eb4p-100f, 0.0f, 0.0f, 0x1.fa6346p-24f, 0x1.3a6f8ep-91f,
     0x1.1884b8p-26f, 0x1.85148p-40f, 0x1.f8418p-122f, 0.0f, 0.0f, 0x1.b7c6fp-50f,
     0.0f, 0.0f, 0x1.eba1dcp-3f, 0x1.c9b886p-48f, 0.0f, 0x1.bf6b18p-46f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.0d7ca2p-19f, 0.0f, 0x1.5d4556p-8f, 0.0f, 0x1.4faef6p-89f,
     0x1.18d1cp-126f, 0.0f, 0x1.859402p-66f, 0x1.94d2fcp-75f, 0x1.2e9786p-82f, 0.0f,
     0x1.11ea62p-47f, 0x1.0d918ep-54f, 0.0f, 0.0f, 0x1.14baccp-43f, 0x1.0d6902p-84f,
     0.0f, 0.0f, 0x1.5b75e4p-86f, 0x1.542a5cp-8f, 0x1.558162p-101f, 0.0f,
     0x1.df750cp-59f, 0x1.179d0cp-81f, 0.0f, 0x1.7a89b4p-16f, 0.0f, 0x1.79b272p-58f,
     0.0f, 0x1.7496d6p-20f, 0.0f, 0.0f, 0x1.fedb0ep-31f, 0x1.25d98p-9f,
     0x1.d87f62p-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.499438p-23f,
     0.0f, 0x1.8d90c4p-22f, 0.0f, 0.0f, 0x1.8affp-122f, 0.0f, 0x1.090de2p-46f,
     0x1.d98d6ap-6f, 0.0f, 0.0f, 0x1.327056p-110f, 0.0f, 0x1.fe7c76p-46f,
     0x1.b02bdap-39f, 0x1.2f4396p-60f, 0.0f, 0.0f, 0x1.3380cep-41f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.dbb376p-32f, 0x1.75871ep-113f, 0.0f, 0.0f, 0x1.ed7314p-97f,
     0x1.feaf6ap-15f, 0.0f, 0x1.1d6fa2p-111f, 0x1.b813dp-115f
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
            tmp1 = Sleef_finz_erff4_u10avx2128(tmp0);
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
    printf("Sleef_finz_erff4_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_erff4_u10avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
