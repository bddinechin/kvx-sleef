/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_acoshf4_u10kvx.c --function \
 *     Sleef_finz_acoshf4_u10kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 4 --function-input-vector-size \
 *     4 --bench --no-embedded-bin --target kv3
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
     0x1.925578p-35f, 0x1.618f7p-25f, 0.0f, 0x1.185ed6p-9f, 0x1.07cf4ap-110f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.df7bacp-16f, 0x1.063a04p-91f, 0.0f, 0.0f, 0x1.e6f906p-83f,
     0.0f, 0.0f, 0x1.5147c4p-44f, 0x1.9b5ba2p-14f, 0x1.d47978p-120f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.90ddb8p-41f, 0x1.b2a7dap-45f, 0.0f,
     0x1.a1cb48p-117f, 0.0f, 0x1.85793cp-8f, 0x1.24d77cp-126f, 0x1.6c1a86p-10f, 0.0f,
     0.0f, 0x1.5c9e96p-10f, 0.0f, 0x1.93355p-117f, 0.0f, 0x1.e2b1aap-11f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.1727eap-49f, 0x1.dff7acp-123f, 0x1.9c2fc6p-54f, 0.0f,
     0x1.9e264cp-3f, 0.0f, 0.0f, 0.0f, 0x1.d76e12p-23f, 0x1.0e3724p-125f,
     0x1.128a38p-24f, 0x1.756902p-29f, 0.0f, 0x1.b32d24p-38f, 0.0f, 0x1.5086eap-92f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2aaf3ap-119f, 0x1.321d7p-40f, 0.0f,
     0x1.31c11ep-118f, 0.0f, 0.0f, 0.0f, 0x1.214fb6p-14f, 0x1.c34d0ep-58f,
     0x1.cc4d4ep-4f, 0.0f, 0x1.91ac5ep-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eeeceap-100f,
     0x1.928064p-52f, 0x1.964da4p-65f, 0.0f, 0.0f, 0x1.08874ep-57f, 0.0f, 0.0f, 0.0f,
     0x1.c6a10cp-64f, 0x1.0eff6cp-37f, 0x1.f42688p-22f, 0x1.daa4c8p-11f,
     0x1.ee05f8p-104f, 0x1.1a132ap-94f, 0.0f, 0x1.ed42d2p-81f, 0x1.77bc4p-97f,
     0x1.046f78p-24f, 0.0f, 0x1.399c3ep-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7a9d26p-113f,
     0.0f, 0.0f, 0x1.859502p-79f, 0.0f, 0x1.7b5f56p-70f, 0x1.963714p-3f,
     0x1.0dfb6p-64f, 0x1.6ae714p-121f, 0x1.9619f4p-57f, 0.0f, 0.0f, 0x1.31f1b6p-55f,
     0.0f, 0x1.b047bap-94f, 0x1.cf9b3ep-99f, 0x1.e11396p-18f, 0.0f, 0x1.d485b6p-90f,
     0.0f, 0.0f, 0x1.639ff6p-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c9688cp-40f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a3bf8ap-86f, 0x1.0d14fcp-8f, 0x1.9a8592p-76f,
     0x1.0a4756p-78f, 0.0f, 0x1.08a5c2p-57f, 0x1.d887p-63f, 0.0f, 0x1.fb01e8p-42f,
     0x1.62c176p-62f, 0x1.227f12p-42f, 0x1.49fc0ep-2f, 0.0f, 0x1.125f6p-2f,
     0x1.c05f24p-84f, 0.0f, 0x1.1095ccp-79f, 0x1.68258cp-10f, 0.0f, 0.0f,
     0x1.594744p-102f, 0x1.851214p-107f, 0x1.42db7ap-62f, 0x1.861d66p-32f,
     0x1.d07682p-98f, 0x1.8a1074p-23f, 0x1.0a2e7ep-63f, 0x1.5e917ep-28f,
     0x1.9e5c5ap-82f, 0.0f, 0.0f, 0x1.328cc2p-23f, 0x1.cf3954p-1f, 0x1.ed73e2p-115f,
     0.0f, 0x1.0138cp-62f, 0x1.154066p-90f, 0.0f, 0x1.fcf42ep-24f, 0.0f,
     0x1.e1f18ep-55f, 0x1.c89a04p-68f, 0.0f, 0x1.67b8fp-78f, 0.0f, 0.0f, 0.0f,
     0x1.de46e2p-13f, 0x1.8d3b8p-78f, 0.0f, 0x1.60c87cp-125f, 0.0f, 0x1.9ed916p-99f,
     0.0f, 0x1.f94d7cp-29f, 0x1.c7f0bep-95f, 0.0f, 0x1.96a7eep-45f, 0x1.1df166p-62f,
     0.0f, 0.0f, 0.0f, 0x1.02afbcp-121f, 0.0f, 0.0f, 0x1.9d8936p-38f, 0x1p0f,
     0x1.24ea94p-120f, 0x1.0eb3c8p-90f, 0x1.11b85cp-68f, 0x1.7921dp-126f,
     0x1.b2a0aep-48f, 0x1.408d94p-101f, 0.0f, 0.0f, 0x1.fb96c2p-43f, 0.0f, 0.0f,
     0x1.7dce7ep-22f, 0x1.8a2d58p-87f, 0x1.4cea1p-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.992a1cp-23f, 0x1.8877bap-21f, 0.0f, 0.0f, 0.0f, 0x1.0f92p-27f, 0.0f,
     0x1.b56d9ep-115f, 0x1.3f1b44p-87f, 0.0f, 0.0f, 0.0f, 0x1.42c392p-52f,
     0x1.f5c856p-120f, 0x1.ad9c9ep-15f, 0x1.97c7p-93f, 0.0f, 0x1.fb21cep-123f, 0.0f,
     0.0f, 0.0f, 0x1.8d1078p-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3a567ep-17f,
     0x1.c5e2b4p-22f, 0.0f, 0x1.44a3ccp-20f, 0x1.e89208p-9f, 0x1.cf655ap-45f,
     0x1.9a7464p-3f, 0x1.3bea42p-105f, 0.0f, 0x1.05f742p-92f, 0.0f, 0x1.b3e96cp-109f,
     0x1.73143cp-25f, 0x1.4a8b24p-121f, 0.0f, 0x1.6ef45ep-115f, 0x1.8adae4p-93f, 0.0f,
     0x1.b24e78p-39f, 0x1.0ef19cp-21f, 0x1.2b17aep-81f, 0.0f, 0.0f, 0x1.97d7bcp-109f,
     0x1.d715bp-122f, 0.0f, 0x1.5cbed6p-68f, 0.0f, 0x1.c41deep-43f, 0x1.edcc48p-7f,
     0x1.2d385ap-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f77526p-106f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e0610ep-88f, 0x1.80475p-22f, 0x1.2b4124p-65f, 0.0f, 0x1.0adc6ap-13f, 0.0f,
     0x1.d41b2ep-40f, 0x1.aabc88p-41f, 0x1.3220bap-20f, 0x1.6a3dp-35f,
     0x1.a70748p-108f, 0x1.993eeap-44f, 0x1.485b3p-38f, 0.0f, 0.0f, 0.0f,
     0x1.28f682p-1f, 0.0f, 0.0f, 0.0f, 0x1.c5b71p-2f, 0x1.848cb2p-45f,
     0x1.7f244ap-120f, 0x1.ca237ap-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.81338cp-77f, 0x1.9d38eap-74f, 0.0f, 0x1.46ea92p-27f, 0x1.baf5b6p-29f,
     0x1.cb2d6ep-24f, 0.0f, 0x1.120d76p-28f, 0x1.a29cb6p-44f, 0x1.b06766p-77f,
     0x1.a95c8p-98f, 0x1.1c2e8ap-88f, 0x1.3a515ep-53f, 0x1.d1055ep-57f,
     0x1.4e04b8p-7f, 0.0f, 0.0f, 0x1.7228cp-90f, 0x1.077f92p-20f, 0.0f,
     0x1.5c215p-114f, 0.0f, 0x1.00acacp-19f, 0x1.2153d8p-1f, 0x1.44e046p-113f, 0.0f,
     0.0f, 0x1.0bd268p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2a2bf6p-81f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.52741ep-33f, 0.0f, 0x1.afcbcap-103f, 0x1.ae7c64p-107f,
     0x1.b227cp-69f, 0x1.15272p-92f, 0x1.488e4p-42f, 0.0f, 0.0f, 0.0f, 0x1.7a7b6p-21f,
     0x1.0dbf78p-12f, 0.0f, 0.0f, 0.0f, 0x1.94290cp-59f, 0.0f, 0x1.36a33ep-56f, 0.0f,
     0x1.80ad88p-90f, 0.0f, 0x1.778fdp-47f, 0.0f, 0.0f, 0x1.9002a8p-78f,
     0x1.a52dd4p-37f, 0x1.b29ef8p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.200df4p-23f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.fd83aap-2f, 0.0f, 0x1.36cfa8p-8f, 0x1.d6118p-107f, 0.0f,
     0x1.141416p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bebed2p-8f, 0.0f, 0.0f, 0.0f,
     0x1.9af37ap-3f, 0x1.2268fp-27f, 0x1.1e9558p-95f, 0.0f, 0x1.cf11bp-6f, 0.0f,
     0x1.96b2cep-63f, 0x1.ebf46cp-69f, 0x1.7f2b34p-125f, 0.0f, 0x1.e9cdc6p-9f, 0.0f,
     0x1.aa85c2p-47f, 0.0f, 0.0f, 0x1.c3a07ep-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d96ff4p-57f, 0.0f, 0x1.ecd656p-25f, 0x1.412638p-51f, 0x1.6be95cp-118f,
     0x1.5fe64cp-72f, 0x1.ade942p-54f, 0x1.023624p-79f, 0x1.0ca83cp-66f, 0.0f,
     0x1.1d240cp-81f, 0.0f, 0x1.991c64p-58f, 0x1.caeacp-73f, 0x1.795c52p-105f, 0.0f,
     0x1.89832ep-23f, 0.0f, 0x1.c32d56p-89f, 0.0f, 0x1.439eeap-68f, 0.0f,
     0x1.adf9b4p-98f, 0x1.abaf6ap-26f, 0x1.386dcap-96f, 0.0f, 0x1.141ecep-110f,
     0x1.75a31ap-38f, 0x1.389626p-53f, 0x1.d44cb8p-60f, 0.0f, 0x1.01737cp-52f,
     0x1.c3fb4cp-79f, 0.0f, 0x1.4aade6p-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bba828p-104f,
     0.0f, 0x1.abc41ap-26f, 0x1.3fd446p-11f, 0x1.a1acacp-12f, 0.0f, 0.0f,
     0x1.4ab2ep-27f, 0.0f, 0x1.bfc97ap-90f, 0x1.e7d674p-53f, 0.0f, 0x1.adba8p-28f,
     0x1.7e4fdep-45f, 0x1.284f38p-39f, 0x1.c8155ap-2f, 0.0f, 0x1.5c3096p-71f, 0.0f,
     0.0f, 0.0f, 0x1.987fecp-50f, 0x1.43001ap-123f, 0x1.cfc416p-107f, 0x1.facf64p-17f,
     0x1.002c06p-111f, 0x1.8bcf4cp-18f, 0x1.a086c6p-52f, 0x1.61cad4p-52f,
     0x1.91a7cap-37f, 0x1.ed8c28p-60f, 0.0f, 0.0f, 0x1.d18266p-109f, 0x1.f313p-83f,
     0.0f, 0x1.fae5b6p-59f, 0.0f, 0x1.26055p-39f, 0x1.2c49dcp-124f, 0.0f, 0.0f, 0.0f,
     0x1.64bb94p-19f, 0.0f, 0x1.fa3ccp-7f, 0.0f, 0.0f, 0x1.0fefe8p-90f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.aa81e6p-39f, 0x1.46429ap-41f, 0.0f, 0x1.2409bap-99f, 0.0f,
     0x1.ba62f4p-95f, 0.0f, 0x1.3b04bcp-11f, 0x1.0d5582p-106f, 0x1.e78ceep-8f,
     0x1.d91822p-15f, 0.0f, 0.0f, 0x1.ef0526p-83f, 0.0f, 0x1.b7e814p-115f,
     0x1.7b73ccp-31f, 0.0f, 0.0f, 0.0f, 0x1.4aece2p-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.554b8ap-94f, 0x1.a37378p-69f, 0.0f, 0.0f, 0x1.b83e86p-26f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e4f7e2p-21f, 0.0f, 0.0f, 0x1.53c43ep-18f, 0.0f, 0.0f, 0.0f,
     0x1.ebfe96p-122f, 0x1.d5a86cp-42f, 0.0f, 0x1.92ad1ap-15f, 0x1.14883p-86f, 0.0f,
     0x1.bd008ep-8f, 0x1.f2989cp-17f, 0x1.6f9876p-57f, 0.0f, 0x1.b2f4c6p-107f, 0.0f,
     0x1.2e132ap-82f, 0.0f, 0.0f, 0.0f, 0x1.6a54e6p-88f, 0x1.0e1968p-67f, 0.0f,
     0x1.9d7766p-60f, 0x1.38793ap-95f, 0.0f, 0x1.3915b2p-117f, 0x1.a48902p-66f,
     0x1.7fa9c2p-90f, 0x1.809b9ep-89f, 0x1.14ce5ap-34f, 0.0f, 0.0f, 0x1.1ddbf4p-7f,
     0.0f, 0x1.bae352p-74f, 0.0f, 0.0f, 0x1.15afd2p-49f, 0x1.a93d2cp-93f,
     0x1.adf504p-71f, 0x1.4c391ap-13f, 0x1.da8ad4p-100f, 0x1.7c5984p-60f,
     0x1.4e4fdap-2f, 0.0f, 0x1.bff8a4p-60f, 0x1.8b03a4p-113f, 0x1.e63c66p-11f,
     0x1.af815p-54f, 0x1.f89faep-80f, 0.0f, 0.0f, 0x1.f2baeap-96f, 0x1.b4f126p-14f,
     0.0f, 0.0f, 0x1.ce5496p-89f, 0x1.da6cbep-3f, 0x1.6b562ep-117f, 0x1.978c54p-125f,
     0.0f, 0x1.780cf6p-62f, 0.0f, 0.0f, 0.0f, 0x1.669016p-32f, 0.0f, 0.0f,
     0x1.d51b14p-33f, 0x1.c0f34ap-74f, 0x1.64fe82p-41f, 0x1.7440a6p-96f, 0.0f, 0.0f,
     0x1.59d45cp-108f, 0.0f, 0x1.c03f02p-48f, 0.0f, 0.0f, 0.0f, 0x1.693b1ap-8f,
     0x1.b13504p-72f, 0x1.0ef6cap-103f, 0x1.a2939cp-48f, 0.0f, 0x1.94bb3p-60f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c23f8cp-116f, 0x1.e7c628p-120f, 0x1.d35dbcp-99f, 0.0f,
     0x1.64ad5ap-70f, 0x1.05ab16p-102f, 0x1.0ee4b4p-10f, 0.0f, 0.0f, 0x1.782de6p-10f,
     0.0f, 0x1.9f311ap-62f, 0x1.43e00cp-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0d382p-44f,
     0x1.b98a2ap-81f, 0.0f, 0.0f, 0x1.6c86ccp-79f, 0x1.267decp-115f, 0.0f,
     0x1.bcae96p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7388a2p-65f, 0x1.18dcep-40f,
     0x1.84bdd6p-92f, 0.0f, 0.0f, 0x1.4bf378p-72f, 0.0f, 0.0f, 0.0f, 0x1.0c398cp-40f,
     0x1.53806p-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d19a18p-87f, 0.0f, 0.0f, 0.0f,
     0x1.3b17a4p-125f, 0.0f, 0x1.aa7f1ap-78f, 0x1.25e6e8p-52f, 0.0f, 0x1.77a2dcp-93f,
     0x1.b872e4p-92f, 0.0f, 0x1.5159cp-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.762494p-57f,
     0x1.1f88aap-25f, 0.0f, 0x1.3bcb2ap-53f, 0x1.42957ep-83f, 0.0f, 0.0f,
     0x1.2944ep-16f, 0.0f, 0.0f, 0.0f, 0x1.8df34ap-45f, 0x1.418a7p-48f,
     0x1.f5d388p-83f, 0x1.da5a1ap-6f, 0x1.f8341ep-114f, 0.0f, 0.0f, 0x1.c35dp-67f,
     0x1.72c286p-69f, 0.0f, 0.0f, 0.0f, 0x1.4e0f5cp-104f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.535ae6p-98f, 0x1.6e8898p-83f, 0x1.f72e2ap-8f, 0x1.c30916p-7f, 0.0f, 0.0f,
     0x1.fa438cp-86f, 0x1.e6a346p-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.350738p-56f, 0x1.1097ap-86f, 0x1.a14a2p-74f, 0x1.36dd88p-38f,
     0x1.37366ap-122f, 0x1.b4b30cp-28f, 0.0f, 0x1.988b54p-89f, 0x1.a1ab38p-2f, 0.0f,
     0x1.fb026cp-43f, 0.0f, 0.0f, 0x1.2cc5b6p-77f, 0.0f, 0.0f, 0.0f, 0x1.53127ap-91f,
     0x1.9d37b8p-116f, 0.0f, 0.0f, 0.0f, 0x1.405966p-15f, 0x1.5fca08p-24f, 0.0f,
     0x1.ea678p-93f, 0x1.9b635ap-18f, 0x1.305096p-35f, 0x1.44e526p-123f, 0.0f,
     0x1.8fa984p-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8109f8p-37f,
     0x1.f45f94p-92f, 0x1.38ffc4p-24f, 0.0f, 0x1.a76e92p-11f, 0.0f, 0x1.9c0466p-16f,
     0x1.0f1986p-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.518936p-78f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4aa726p-112f, 0x1.c46f7p-5f, 0.0f, 0.0f,
     0x1.365cd8p-34f, 0.0f, 0x1.092b2ap-4f, 0x1.9b32bp-81f, 0.0f, 0x1.6b2c36p-79f,
     0.0f, 0.0f, 0.0f, 0x1.e791acp-78f, 0x1.d64eb6p-24f, 0.0f, 0.0f, 0x1.3bdee6p-13f,
     0x1p0f, 0.0f, 0.0f, 0x1.f345e4p-76f, 0x1.ac9feep-54f, 0.0f, 0.0f,
     0x1.c03e9ap-64f, 0x1.4c608ep-119f, 0.0f, 0x1.a0132ap-50f, 0x1.4e0d0cp-14f,
     0x1.39607ep-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.872cb6p-50f, 0x1.1f1a9cp-126f,
     0x1.7c7f68p-85f, 0x1.d392bp-75f, 0x1.4b3acep-117f, 0x1.c029c6p-33f,
     0x1.50709ap-113f, 0x1.ac1a8p-107f, 0x1.1424dcp-36f, 0.0f, 0x1.e18c56p-87f, 0.0f,
     0x1.78862ap-80f, 0.0f, 0x1.0514ccp-81f, 0x1.e37ac2p-64f, 0x1.b13658p-48f, 0.0f,
     0.0f, 0x1.c8e55ap-83f, 0x1.186fccp-92f, 0.0f, 0x1.d6aaep-20f, 0.0f,
     0x1.ebe3d4p-57f, 0x1.f439bap-24f, 0.0f, 0.0f, 0x1.044d94p-111f, 0x1.5d1e46p-39f,
     0.0f, 0x1.ec99c6p-10f, 0x1.24e16cp-73f, 0x1.24c83cp-39f, 0x1.f62e7cp-13f,
     0x1.6d0be4p-90f, 0x1.465832p-117f, 0.0f, 0x1.da0116p-44f, 0x1.6aa584p-79f,
     0x1.8c57fep-85f, 0.0f, 0.0f, 0x1.634064p-72f, 0x1.3d833cp-105f, 0x1.fee4a4p-51f,
     0.0f, 0.0f, 0x1.b6447ap-57f, 0x1.c6d3dap-39f, 0x1.4e3686p-114f, 0.0f, 0.0f, 0.0f,
     0x1.dfbccp-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fca21ep-24f, 0.0f, 0x1.9e5406p-104f,
     0x1.2bc2fcp-26f, 0.0f, 0.0f, 0x1.28f5b4p-10f, 0x1.c4ef58p-34f, 0.0f, 0.0f,
     0x1.9c4d82p-20f, 0.0f, 0x1.131114p-26f, 0.0f, 0.0f, 0x1.c29584p-125f, 0.0f,
     0x1.9a7264p-67f, 0x1.85d576p-6f, 0x1.38ac3p-32f, 0x1.35204p-39f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ecb1c6p-118f, 0.0f, 0x1.c4c6e6p-56f, 0.0f, 0.0f, 0.0f,
     0x1.e3ac6cp-94f, 0.0f, 0.0f, 0x1.314032p-14f, 0.0f, 0x1.897244p-27f,
     0x1.2450ccp-121f, 0x1.df3582p-115f, 0.0f, 0.0f, 0x1.78cd4ep-41f,
     0x1.e5f756p-113f, 0.0f, 0.0f, 0.0f, 0x1.fbe702p-33f, 0x1.74e15ep-12f,
     0x1.40225ap-21f, 0.0f, 0.0f, 0x1.44599p-42f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.34e63p-99f, 0x1.c6380ep-31f, 0.0f, 0.0f, 0.0f, 0x1.3eacd2p-21f, 0.0f, 0.0f,
     0.0f, 0x1.2cac8p-125f, 0x1.3a5cf4p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.12964p-83f,
     0.0f, 0.0f, 0x1.7c6a34p-63f, 0.0f, 0x1.41d7e4p-93f, 0.0f, 0x1.a67448p-53f, 0.0f,
     0.0f, 0x1.cb9844p-19f, 0x1.5d3602p-4f, 0.0f
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
            tmp1 = Sleef_finz_acoshf4_u10kvx(tmp0);
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
    printf("Sleef_finz_acoshf4_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_acoshf4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
