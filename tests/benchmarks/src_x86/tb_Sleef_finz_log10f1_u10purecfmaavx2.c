/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_log10f1_u10purecfma.c --function \
 *     Sleef_finz_log10f1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.ceeb0ap-101f, 0x1.8044ecp-15f, 0x1.b59b06p-54f, 0.0f, 0x1.d284aep-95f, 0.0f,
     0.0f, 0x1.c19614p-74f, 0x1.80d9cp-30f, 0x1.ab57p-42f, 0x1.ace202p-22f,
     0x1.933088p-62f, 0.0f, 0x1.9a749ep-90f, 0x1.e3325ap-5f, 0.0f, 0x1.0f7f9ep-37f,
     0x1.d8b82p-16f, 0.0f, 0x1.6b4052p-29f, 0x1.dfe3dp-84f, 0.0f, 0x1.7f8342p-77f,
     0.0f, 0x1.87293p-96f, 0x1.dced0cp-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8f278p-101f, 0.0f, 0.0f, 0x1.93e6b2p-99f, 0x1.198bdap-54f, 0.0f,
     0x1.3b4268p-2f, 0.0f, 0x1.b978a4p-12f, 0x1.414b2cp-59f, 0.0f, 0x1.c8d838p-106f,
     0.0f, 0.0f, 0x1.391b92p-92f, 0x1.bcb302p-78f, 0x1.3fee34p-50f, 0.0f,
     0x1.d6d7e4p-46f, 0.0f, 0.0f, 0x1.407528p-105f, 0.0f, 0.0f, 0x1.ad78d2p-57f,
     0x1.44f0e6p-125f, 0x1.92b80ep-65f, 0.0f, 0x1.5d38b6p-33f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.51bc2ap-26f, 0x1.01fef8p-90f, 0x1.1ba8d8p-118f, 0.0f, 0.0f,
     0x1.ad84b6p-42f, 0x1.dd49c8p-113f, 0.0f, 0x1.78f33ep-76f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.657a52p-106f, 0.0f, 0.0f, 0x1.50ce0ap-60f, 0.0f, 0x1.036536p-75f,
     0x1.0a8f28p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b00098p-6f, 0.0f, 0x1.0e9dc4p-39f,
     0.0f, 0x1.315a8ep-63f, 0.0f, 0.0f, 0x1.ae6298p-113f, 0x1.adfe38p-103f,
     0x1.063d3cp-80f, 0.0f, 0.0f, 0x1.1f8a68p-93f, 0x1.afef98p-94f, 0.0f, 0.0f,
     0x1.2eaa78p-11f, 0x1.bee67ep-69f, 0x1.9c6c64p-44f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c69608p-76f, 0x1.5f3a64p-46f, 0.0f, 0x1.9b9f7ep-10f, 0x1.5c72cap-84f, 0.0f,
     0x1.4612acp-5f, 0x1.125032p-110f, 0x1.33a088p-104f, 0x1.c4b4dcp-67f,
     0x1.3248c6p-95f, 0x1.643c84p-104f, 0x1.6622f4p-72f, 0x1.e4577ep-109f, 0.0f, 0.0f,
     0.0f, 0x1.4f6218p-11f, 0.0f, 0x1.9f2032p-99f, 0.0f, 0.0f, 0.0f, 0x1.fcaab8p-15f,
     0x1.7da3f6p-33f, 0.0f, 0.0f, 0x1.1cae44p-7f, 0.0f, 0x1.a9fbccp-78f,
     0x1.ab39a8p-37f, 0x1.5c8cdap-79f, 0.0f, 0x1.dd034ep-41f, 0x1.aed794p-50f,
     0x1.4de0bp-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1ae192p-67f, 0.0f,
     0x1.a15f82p-39f, 0.0f, 0x1.bf6dfp-9f, 0x1.94bcf4p-109f, 0x1.68f086p-104f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cb1ce6p-5f, 0.0f, 0x1.8da5dcp-92f,
     0x1.343bd2p-115f, 0x1.a88142p-81f, 0.0f, 0x1.3cddacp-7f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9f87c6p-54f, 0.0f, 0x1.14feacp-88f, 0x1.9f958ap-83f, 0.0f,
     0.0f, 0x1.84e43cp-114f, 0x1.f954dcp-10f, 0x1.8095dap-93f, 0.0f, 0.0f,
     0x1.17510cp-61f, 0x1.d99288p-59f, 0.0f, 0x1.156dcep-11f, 0.0f, 0x1.cd3b9p-70f,
     0.0f, 0x1.4f0f0ap-55f, 0x1.eb4e84p-46f, 0.0f, 0x1.180ecp-35f, 0.0f,
     0x1.bf2d8ap-68f, 0.0f, 0x1.48481ap-105f, 0x1.20edb4p-115f, 0x1.846be6p-33f,
     0x1.cf2f04p-117f, 0.0f, 0.0f, 0x1.8afe86p-110f, 0x1.5ee3f4p-60f,
     0x1.84f5aap-119f, 0.0f, 0.0f, 0x1.ab900ep-54f, 0x1.2280fep-77f, 0.0f,
     0x1.b1fb52p-56f, 0x1.6e7d54p-49f, 0x1.14b086p-126f, 0x1.1255p-91f, 0.0f, 0.0f,
     0x1.79e10cp-48f, 0.0f, 0.0f, 0.0f, 0x1.cdbb6ap-33f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b81962p-36f, 0x1.39d7bp-39f, 0x1.449e96p-98f, 0x1.ad3552p-89f,
     0x1.eef904p-60f, 0x1.8737ccp-93f, 0x1.0f8b1ep-124f, 0.0f, 0x1.756a1ep-122f,
     0x1.46c3e8p-106f, 0.0f, 0.0f, 0.0f, 0x1.ba7502p-126f, 0.0f, 0.0f, 0x1.7f3c2cp-8f,
     0.0f, 0x1.c7671ep-2f, 0.0f, 0x1.39cfecp-68f, 0x1.5782d2p-40f, 0x1.4ff216p-102f,
     0x1.e7f15p-44f, 0.0f, 0.0f, 0x1.03503cp-49f, 0.0f, 0.0f, 0x1.60c05ep-83f,
     0x1.92a74cp-112f, 0.0f, 0x1.289164p-15f, 0x1.b99558p-48f, 0x1.9e5fa4p-25f,
     0x1.86c1e4p-59f, 0.0f, 0x1.e4dp-19f, 0x1.2664cep-98f, 0x1.11a0dap-82f, 0.0f,
     0x1.d90112p-22f, 0x1.592fa4p-101f, 0x1.70ad1cp-123f, 0x1.385592p-121f,
     0x1.6e0d9cp-35f, 0x1.2d62ccp-51f, 0x1.df3c6ep-113f, 0x1.635aap-55f,
     0x1.bf47acp-15f, 0.0f, 0.0f, 0x1.f825a4p-81f, 0x1.8a3e2ap-41f, 0x1.a7c618p-63f,
     0.0f, 0x1.578fbcp-56f, 0.0f, 0.0f, 0.0f, 0x1.82adccp-61f, 0.0f, 0x1.b65174p-46f,
     0x1.3b22b6p-63f, 0x1.fa7d84p-40f, 0.0f, 0x1.e912d2p-30f, 0.0f, 0.0f, 0.0f,
     0x1.5d9c4ap-67f, 0x1.779cf8p-41f, 0x1.2fbd9ap-89f, 0x1.e8900ap-8f,
     0x1.bf25e2p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2e07eap-25f, 0.0f, 0.0f,
     0x1.3c218ap-13f, 0.0f, 0x1.419b32p-32f, 0.0f, 0x1.e663fcp-93f, 0.0f,
     0x1.a0c312p-71f, 0x1.b6a90cp-118f, 0.0f, 0.0f, 0.0f, 0x1.48379cp-14f, 0.0f,
     0x1.c6cc74p-88f, 0x1.c4870ep-11f, 0x1.a58e4ep-14f, 0.0f, 0.0f, 0x1.f6abccp-6f,
     0.0f, 0.0f, 0x1.d35696p-27f, 0x1.4d1afep-76f, 0x1.ac1a22p-113f, 0.0f,
     0x1.abde8ep-105f, 0x1.8c768ep-4f, 0x1.1de11cp-82f, 0x1.c91ce2p-119f,
     0x1.8b626p-11f, 0.0f, 0.0f, 0x1.bea5ccp-37f, 0.0f, 0.0f, 0x1.4aa6b6p-78f, 0.0f,
     0x1.99f074p-69f, 0.0f, 0x1.a5a65cp-21f, 0.0f, 0x1.961f78p-104f, 0.0f,
     0x1.027ed6p-95f, 0.0f, 0x1.870984p-117f, 0.0f, 0x1.572636p-116f, 0x1.36f9dp-87f,
     0x1.0906e8p-8f, 0.0f, 0x1.92d1d4p-59f, 0x1.a99378p-101f, 0x1.a2457ep-5f, 0.0f,
     0.0f, 0.0f, 0x1.76c20cp-107f, 0x1.ee2616p-73f, 0x1.277e76p-110f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b8d52ap-124f, 0x1.1b764cp-71f,
     0x1.cc521ep-8f, 0x1.acca0ep-51f, 0.0f, 0.0f, 0x1.677f7p-73f, 0x1.99e6bcp-37f,
     0x1.b158dep-6f, 0x1.57e90ap-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4a8f8cp-63f, 0x1.1191fp-51f, 0x1.b19ad6p-7f, 0x1.5e8a36p-70f, 0x1p0f, 0.0f,
     0.0f, 0x1.2a82ap-43f, 0.0f, 0.0f, 0.0f, 0x1.6c2e34p-41f, 0x1.68ec28p-88f, 0.0f,
     0x1.44b998p-58f, 0x1.fd4138p-26f, 0.0f, 0.0f, 0x1.271892p-2f, 0.0f, 0.0f,
     0x1.576182p-115f, 0x1.f7d234p-104f, 0.0f, 0.0f, 0x1.9b0bc6p-36f, 0x1.6bc0fcp-85f,
     0x1.37b454p-45f, 0x1.124018p-92f, 0x1.b812c2p-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1932f4p-32f, 0.0f, 0.0f, 0.0f, 0x1.b4bdeap-17f, 0x1.ed3844p-28f,
     0x1.cd9dacp-118f, 0x1.6d7274p-35f, 0x1.692bccp-92f, 0.0f, 0x1.b5bf5p-98f, 0.0f,
     0x1.ce7eacp-120f, 0.0f, 0x1.d5e14ap-21f, 0x1.316f22p-31f, 0.0f, 0x1.9c5e7cp-57f,
     0x1.16725cp-113f, 0.0f, 0x1.0f60ep-92f, 0x1.da883cp-79f, 0.0f, 0.0f,
     0x1.c7ae62p-83f, 0.0f, 0x1.058c22p-10f, 0.0f, 0.0f, 0x1.852a66p-24f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d7d004p-76f, 0.0f, 0x1.f42bdap-36f, 0.0f, 0.0f, 0x1.38ca4ep-32f,
     0x1.86b46ep-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4d9c4cp-17f, 0x1.1b9368p-115f,
     0.0f, 0.0f, 0.0f, 0x1.e98cbcp-31f, 0.0f, 0.0f, 0x1.a8ced6p-41f, 0x1.211634p-120f,
     0x1.5b6814p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.011cdep-67f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.177fd8p-71f, 0x1.301b92p-15f, 0x1.9cd724p-80f, 0.0f,
     0x1.bd6706p-53f, 0x1.5591bcp-80f, 0x1.96d39ap-107f, 0.0f, 0x1.eb7746p-30f, 0.0f,
     0x1.eba88ep-112f, 0x1.909044p-6f, 0x1.6a114ap-40f, 0.0f, 0x1.a4b692p-110f,
     0x1.a967a6p-92f, 0x1.8a3b66p-72f, 0x1.742c16p-122f, 0.0f, 0.0f, 0x1.445b3p-87f,
     0x1.9b05eep-18f, 0x1.72c21p-98f, 0x1.c3c3a8p-11f, 0x1.aea1eep-110f, 0.0f,
     0x1.ac8ee4p-8f, 0x1.f1b6dep-32f, 0.0f, 0x1.098c02p-65f, 0.0f, 0.0f,
     0x1.845754p-41f, 0.0f, 0x1.ccb696p-71f, 0.0f, 0x1.a883cep-90f, 0x1.d1cf88p-106f,
     0.0f, 0.0f, 0x1.82c7fcp-31f, 0.0f, 0.0f, 0x1.bfaafap-86f, 0.0f, 0x1.c28714p-88f,
     0x1p0f, 0.0f, 0.0f, 0x1.5c1d82p-121f, 0.0f, 0x1.32696p-11f, 0x1.67f126p-90f,
     0.0f, 0.0f, 0x1.01d7aep-22f, 0.0f, 0.0f, 0x1.7f474ep-40f, 0x1.91b35cp-92f,
     0x1.0173f4p-49f, 0x1.0070c4p-43f, 0x1.fc9ba4p-65f, 0x1.7dc814p-113f, 0.0f,
     0x1.ba9122p-22f, 0.0f, 0x1.e72b5p-33f, 0.0f, 0.0f, 0.0f, 0x1.340c44p-43f, 0.0f,
     0x1.ef5e1cp-8f, 0.0f, 0.0f, 0x1.724246p-68f, 0.0f, 0.0f, 0x1.914afcp-11f, 0.0f,
     0x1.26f0b8p-94f, 0.0f, 0x1.c16716p-41f, 0x1.1323a8p-41f, 0x1.e3c586p-47f,
     0x1.4ae4dep-72f, 0x1.470618p-6f, 0x1.ef7e9ep-115f, 0x1.b1589ep-41f,
     0x1.ef66b8p-65f, 0.0f, 0x1.d0c106p-64f, 0.0f, 0x1.8755a6p-74f, 0.0f,
     0x1.c30054p-76f, 0.0f, 0.0f, 0.0f, 0x1.b63c6p-68f, 0x1.5015aap-109f,
     0x1.acf79ap-6f, 0x1.699fcap-37f, 0.0f, 0x1.0603bap-66f, 0x1.96f558p-80f, 0.0f,
     0.0f, 0x1.09766p-33f, 0.0f, 0.0f, 0.0f, 0x1.7ac87ep-86f, 0x1.19c1d4p-11f,
     0x1.8cf10ap-100f, 0x1.972ca2p-66f, 0.0f, 0.0f, 0.0f, 0x1.cd9d9ap-103f, 0.0f,
     0x1.ece2e8p-61f, 0x1.e1d34ep-37f, 0x1.2146dcp-1f, 0x1.ff1322p-59f, 0.0f,
     0x1.b57032p-86f, 0.0f, 0x1.afedbap-75f, 0x1.84d3p-121f, 0.0f, 0x1.ed87d4p-17f,
     0.0f, 0.0f, 0x1.8c1e2ap-109f, 0.0f, 0.0f, 0x1.93a3a2p-48f, 0x1.964ea8p-30f,
     0x1.e1314ap-1f, 0.0f, 0x1.46da9cp-118f, 0.0f, 0x1.86eba4p-74f, 0.0f, 0.0f,
     0x1.9551a6p-80f, 0.0f, 0x1.b635dp-109f, 0x1.4f21f6p-103f, 0x1.dffcd2p-119f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.3208eep-86f, 0.0f, 0x1.b96f72p-120f, 0x1.2c45bp-26f, 0.0f,
     0x1.a7caacp-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6104e6p-124f, 0x1.06d59cp-96f,
     0x1.22169ap-105f, 0.0f, 0x1.14f888p-37f, 0x1.67e9eap-81f, 0.0f, 0x1.bc979ap-92f,
     0x1.5dddep-64f, 0.0f, 0.0f, 0x1.ca94e2p-29f, 0.0f, 0.0f, 0.0f, 0x1.2ab098p-68f,
     0x1.fce376p-125f, 0x1.59765ap-77f, 0.0f, 0x1.842d5cp-94f, 0.0f, 0x1.b87a86p-98f,
     0.0f, 0.0f, 0x1.0d98fcp-12f, 0x1.340faap-38f, 0.0f, 0x1.d6a418p-23f, 0.0f, 0.0f,
     0.0f, 0x1.e0df32p-71f, 0x1.c5b7fap-109f, 0.0f, 0.0f, 0x1.059cfp-28f, 0.0f, 0.0f,
     0x1.5330f4p-102f, 0x1.cd4e0cp-76f, 0.0f, 0x1.30d8dp-94f, 0.0f, 0.0f,
     0x1.b574b2p-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b924dcp-21f, 0.0f, 0.0f,
     0x1.66885ep-53f, 0x1.8096fp-17f, 0.0f, 0x1.a6b57p-49f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.099c76p-42f, 0x1.7be8fep-107f, 0.0f, 0.0f, 0x1.2af64ep-2f,
     0x1.622e76p-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f835cep-45f,
     0.0f, 0.0f, 0.0f, 0x1.54d9eep-74f, 0.0f, 0.0f, 0x1.afc076p-7f, 0x1.bb99fap-60f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.7eef48p-77f, 0.0f, 0.0f,
     0.0f, 0x1.f916eap-7f, 0.0f, 0x1.c4f95ap-118f, 0x1.cecefp-83f, 0.0f,
     0x1.c430ccp-74f, 0x1.b31ad6p-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d53bf6p-1f, 0.0f,
     0.0f, 0x1.2afa94p-20f, 0.0f, 0x1.a9cf4ap-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a1ce76p-42f, 0.0f, 0x1.e59ffap-4f, 0x1.f51f88p-49f,
     0.0f, 0x1.b4daep-111f, 0.0f, 0x1.13f0f2p-1f, 0x1.a767f2p-86f, 0x1.b9fc8ep-14f,
     0.0f, 0.0f, 0.0f, 0x1.703b9ap-67f, 0.0f, 0x1.c42beep-67f, 0.0f, 0x1.081b7p-70f,
     0.0f, 0x1.1d387ep-62f, 0x1.7ebaa4p-126f, 0.0f, 0.0f, 0.0f, 0x1.32f2dep-91f,
     0x1.dcf43cp-66f, 0.0f, 0.0f, 0x1.5f1494p-67f, 0x1.bfff6cp-110f, 0x1.fe3c8ep-126f,
     0.0f, 0.0f, 0x1.9d2b0ap-34f, 0x1.1ed426p-63f, 0.0f, 0x1.09ec5p-48f,
     0x1.c4f882p-35f, 0.0f, 0x1.02d6d4p-53f, 0.0f, 0.0f, 0.0f, 0x1.f74b2cp-118f,
     0x1.09db38p-55f, 0x1.70767cp-123f, 0.0f, 0x1.1f6326p-66f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.5aba38p-112f, 0.0f, 0.0f, 0.0f, 0x1.63229p-2f, 0x1.8c7a26p-3f, 0.0f,
     0x1.539988p-63f, 0.0f, 0x1.90dcd2p-16f, 0x1.4fda3ep-7f, 0x1.3677d8p-59f, 0.0f,
     0.0f, 0x1.f03dp-98f, 0.0f, 0.0f, 0x1.707ceap-88f, 0.0f, 0x1.b19b1cp-73f,
     0x1.f28e06p-71f, 0x1.87493ap-40f, 0.0f, 0.0f, 0x1.46ebb8p-76f, 0.0f, 0.0f,
     0x1.8e4792p-97f, 0.0f, 0x1.34aeb4p-73f, 0.0f, 0.0f, 0x1.6c7a96p-94f,
     0x1.82620ap-66f, 0.0f, 0x1.0596b2p-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2580dcp-88f,
     0x1.ade236p-42f, 0.0f, 0.0f, 0.0f, 0x1.dcfe64p-15f, 0x1.071864p-79f,
     0x1.5f17b2p-41f, 0.0f, 0x1.7aeed4p-55f, 0.0f, 0x1.cab0a2p-34f, 0x1.15972ep-103f,
     0x1.3dfbaap-101f, 0x1.76ee8p-44f, 0.0f, 0x1.84f3c4p-35f, 0.0f, 0x1.21101p-9f,
     0x1.e5225cp-58f, 0.0f, 0x1.132616p-106f, 0x1.8f2cc4p-118f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.4668b4p-109f, 0x1.f90548p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.78cbe6p-31f,
     0.0f, 0x1.07d35ep-56f, 0.0f, 0.0f, 0x1.c4b1b8p-83f, 0.0f, 0x1.8f489ap-66f,
     0x1.d6fb8cp-94f, 0x1.469604p-49f, 0.0f, 0.0f, 0x1.7edf54p-126f, 0.0f, 0.0f, 0.0f,
     0x1.9bd916p-112f, 0x1.ffb71ep-100f, 0x1.6c6b7ap-110f, 0x1.923158p-102f,
     0x1.4d5b64p-77f, 0.0f, 0.0f, 0x1.a5c274p-68f, 0.0f, 0x1.a364a2p-2f,
     0x1.b38862p-56f, 0x1.45760ap-99f, 0x1.bb9d7cp-15f, 0x1.82405cp-39f,
     0x1.db7ffp-54f, 0x1.42f932p-58f, 0x1.568904p-2f, 0.0f, 0.0f, 0.0f,
     0x1.0b3506p-52f, 0x1.2a8096p-33f, 0.0f, 0.0f, 0x1.4f1504p-93f, 0x1.9a7c22p-15f,
     0.0f, 0x1.1aed4cp-99f, 0.0f, 0.0f, 0x1.6d8998p-5f, 0x1.afa2aap-60f, 0.0f,
     0x1.10eb1cp-1f, 0.0f, 0x1.37d25ap-55f, 0.0f, 0x1.0181dap-82f, 0x1.e83b62p-69f,
     0.0f, 0.0f, 0.0f, 0x1.935a0cp-21f, 0.0f, 0x1.a6b13p-54f, 0.0f, 0x1.1eaf7p-5f,
     0.0f, 0.0f, 0x1.7600ap-77f, 0x1.f36cc8p-126f, 0x1.d5e2d6p-30f, 0x1.7306b4p-43f,
     0x1.cdc76p-74f, 0.0f, 0x1.7906a4p-70f, 0.0f, 0x1.fa8fdp-69f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.7417a8p-69f, 0.0f, 0.0f, 0.0f
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
            tmp1 = Sleef_finz_log10f1_u10purecfma(tmp0);
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
    printf("Sleef_finz_log10f1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_log10f1_u10purecfma bench acc %a\n", global_bench_acc);
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
