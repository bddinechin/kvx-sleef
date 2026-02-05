/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_log2f1_u35purecfma.c --function \
 *     Sleef_log2f1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.a51da4p-63f, 0x1.b48642p-87f, 0.0f, 0.0f, 0x1.2bf8a8p-70f, 0x1.d6fbd6p-96f,
     0.0f, 0.0f, 0x1.bb1d4ap-105f, 0.0f, 0x1.a329d8p-59f, 0.0f, 0x1.d557dep-53f, 0.0f,
     0x1.680ecap-48f, 0x1.6227c2p-33f, 0x1.165172p-110f, 0x1.0f53e8p-54f,
     0x1.814aa6p-87f, 0x1.f318fep-65f, 0.0f, 0x1.c90b76p-118f, 0x1.22df0cp-120f, 0.0f,
     0x1.e114eep-111f, 0x1.e0fe5ap-103f, 0.0f, 0x1.ea159cp-45f, 0x1.89d2cp-57f,
     0x1.31f204p-70f, 0.0f, 0x1.a4cdp-70f, 0x1.72253ap-12f, 0x1.5538dap-45f, 0.0f,
     0.0f, 0.0f, 0x1.c65ae8p-33f, 0x1.e735acp-77f, 0.0f, 0x1.958974p-12f,
     0x1.6ca676p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bde978p-43f, 0.0f, 0x1.b3627cp-57f,
     0.0f, 0x1.8a07cep-79f, 0.0f, 0x1.3cdd6cp-109f, 0.0f, 0.0f, 0.0f, 0x1.068ddep-65f,
     0.0f, 0.0f, 0x1.6e1464p-74f, 0x1.abe782p-14f, 0x1.0406acp-85f, 0x1.d43fp-14f,
     0.0f, 0x1.2c28aep-8f, 0.0f, 0x1.6c6bdp-121f, 0x1.ea50bap-95f, 0.0f, 0.0f,
     0x1.7d550ap-18f, 0.0f, 0x1.aa774cp-3f, 0.0f, 0x1.042516p-119f, 0.0f,
     0x1.a8601ep-116f, 0x1.3eb32ep-25f, 0x1.9245b6p-108f, 0.0f, 0.0f, 0x1.16b48p-47f,
     0.0f, 0x1.733c04p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.64fc0ap-54f, 0.0f, 0.0f, 0.0f,
     0x1.5d4d18p-85f, 0x1.f912ep-89f, 0.0f, 0x1.71017cp-112f, 0x1.9de1c2p-18f, 0.0f,
     0x1.de19b2p-58f, 0x1.8048fcp-90f, 0.0f, 0x1.808dbep-122f, 0.0f, 0x1.17e9d6p-75f,
     0x1.5cc75ep-94f, 0.0f, 0x1.f8a8dap-3f, 0x1.350028p-36f, 0x1.4472acp-16f, 0.0f,
     0.0f, 0x1.d4a09ap-23f, 0x1.ec9976p-4f, 0.0f, 0x1.384126p-115f, 0.0f,
     0x1.24fb4ep-122f, 0.0f, 0x1.1356ecp-120f, 0.0f, 0x1.ea5f28p-63f, 0x1.f6024cp-3f,
     0.0f, 0x1.4adc4ap-63f, 0x1.857f86p-80f, 0x1.cd45c4p-88f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.99f49p-77f, 0x1.56e00cp-23f, 0x1.ef161p-4f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b8007cp-64f, 0x1.2146a2p-47f, 0.0f, 0x1.e8a0cp-53f, 0x1.b0fa76p-20f,
     0.0f, 0x1.8ca2bcp-57f, 0x1.6df97p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.69d044p-77f, 0x1.1e161ap-41f, 0.0f, 0.0f, 0x1.eeebeep-116f, 0.0f, 0.0f,
     0x1.2fe12cp-34f, 0.0f, 0.0f, 0x1.09217ep-115f, 0x1.974486p-88f, 0.0f,
     0x1.bae5cap-8f, 0x1.d36eaap-86f, 0x1.7130e4p-14f, 0x1.b55ef2p-46f,
     0x1.7950b4p-30f, 0.0f, 0.0f, 0x1.282de8p-6f, 0.0f, 0x1.c0e94ep-44f,
     0x1.8ca5c4p-121f, 0.0f, 0x1.ce02e6p-28f, 0.0f, 0.0f, 0x1.729178p-84f, 0.0f, 0.0f,
     0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.62ce66p-64f, 0x1.76b52ap-100f, 0.0f, 0.0f,
     0x1.5e706cp-73f, 0.0f, 0.0f, 0x1.ac8888p-20f, 0.0f, 0.0f, 0.0f, 0x1.762d32p-47f,
     0x1.090e6ep-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.703ba4p-15f, 0.0f,
     0x1.13579ap-53f, 0x1.2fd6a8p-15f, 0x1.b91848p-88f, 0.0f, 0.0f, 0.0f,
     0x1.7a7fc6p-72f, 0x1.a8a05ap-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.822cfp-92f, 0.0f, 0.0f, 0x1.f22b2ap-48f,
     0x1.f8dac2p-62f, 0x1.a65e9cp-80f, 0.0f, 0x1.e97858p-26f, 0x1.e94532p-67f, 0.0f,
     0x1.cc581ep-102f, 0x1.b03908p-100f, 0x1.ab3f2ap-16f, 0x1.6b0a2ep-4f,
     0x1.10166ap-43f, 0x1.424b48p-21f, 0.0f, 0x1.d63c38p-60f, 0x1.662474p-67f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fdda5p-114f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.94e502p-16f, 0x1.091a82p-82f, 0x1.bb49ccp-112f, 0.0f, 0.0f, 0x1.9d1496p-27f,
     0x1.daafcep-61f, 0x1.e589c8p-81f, 0x1.3aae2ap-7f, 0x1.84bcd8p-116f,
     0x1.2bdc08p-57f, 0.0f, 0.0f, 0x1.07dd2p-42f, 0x1.73e692p-82f, 0.0f, 0.0f,
     0x1.9b08cp-12f, 0.0f, 0x1.6dc61cp-102f, 0.0f, 0.0f, 0.0f, 0x1.2f5b7p-60f,
     0x1.38e198p-14f, 0x1.d2625ep-24f, 0x1.241412p-17f, 0.0f, 0.0f, 0.0f,
     0x1.eec71ap-59f, 0x1.6b9a8cp-104f, 0x1.c37c72p-107f, 0x1.f4d0e4p-12f, 0.0f,
     0x1.6efe1p-69f, 0.0f, 0x1.0d12bp-6f, 0x1.d0980ap-30f, 0x1.0e9804p-66f, 0.0f,
     0x1.b23adp-74f, 0x1.22259ep-108f, 0.0f, 0x1.ba5df4p-111f, 0.0f, 0x1.8cb09p-67f,
     0x1.d4487ap-85f, 0x1.7bcf54p-102f, 0.0f, 0x1.5308ep-58f, 0x1.ee97f8p-19f, 0.0f,
     0.0f, 0x1.7f00d6p-26f, 0.0f, 0x1.9c651p-28f, 0x1.529a76p-68f, 0.0f,
     0x1.830126p-33f, 0.0f, 0.0f, 0x1.8ff168p-20f, 0x1.dbf106p-24f, 0x1.9a93cp-90f,
     0x1.a7c9e2p-44f, 0.0f, 0x1.d581acp-125f, 0x1.7cc532p-6f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.605014p-49f, 0x1.85d7f4p-59f, 0.0f, 0.0f, 0.0f,
     0x1.57864p-4f, 0x1p0f, 0x1.772eeap-71f, 0x1.428c7p-100f, 0x1.aa070cp-101f,
     0x1.7f28a2p-15f, 0x1.e2f23ep-1f, 0x1.d96dacp-13f, 0x1.4dbc4cp-115f, 0.0f,
     0x1.590848p-119f, 0.0f, 0.0f, 0x1.b1494ep-6f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.26315cp-2f, 0x1.24f54ep-75f, 0.0f, 0.0f, 0x1.c36976p-6f, 0x1.73886p-50f,
     0x1.943656p-19f, 0x1.2d411p-25f, 0x1.c0cf66p-30f, 0x1.6c4786p-70f,
     0x1.607dccp-106f, 0x1.def974p-87f, 0.0f, 0x1.fd3128p-115f, 0.0f, 0.0f,
     0x1.c6f94cp-109f, 0.0f, 0x1.8cf13p-110f, 0.0f, 0.0f, 0x1.d71d1p-78f,
     0x1.c128d8p-123f, 0x1.73ad52p-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.417672p-61f, 0.0f, 0.0f, 0x1.e35da8p-24f, 0.0f, 0.0f, 0.0f,
     0x1.679c78p-96f, 0x1.f1bf6ap-107f, 0x1.c700dep-36f, 0x1.2cd8ccp-22f,
     0x1.866594p-74f, 0.0f, 0x1.867c32p-82f, 0x1.b7a3b4p-118f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.951f94p-19f, 0x1.8706eep-34f, 0x1.f4d7b4p-64f, 0x1.449b2p-81f, 0.0f, 0.0f,
     0x1.519812p-13f, 0x1.2d4c08p-123f, 0.0f, 0.0f, 0x1.2b92e6p-104f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8818ap-86f, 0.0f, 0.0f, 0x1.a6ef74p-33f,
     0x1.b9f7dcp-101f, 0x1.769432p-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a0c152p-94f, 0x1.26403ap-34f, 0x1.79aafep-54f, 0x1.68dc5ep-12f, 0.0f, 0.0f,
     0x1.100f1ep-43f, 0x1.69991ap-69f, 0.0f, 0x1.8a6dp-123f, 0.0f, 0.0f,
     0x1.0308e8p-2f, 0x1.86610cp-4f, 0x1.4ce268p-51f, 0.0f, 0.0f, 0.0f,
     0x1.0dee0cp-77f, 0x1.c1522ep-61f, 0x1.c86854p-4f, 0.0f, 0x1.abec0cp-10f, 0.0f,
     0.0f, 0x1.66c9f2p-114f, 0x1.967ef2p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.01146cp-27f,
     0x1.505d46p-32f, 0.0f, 0x1.ae0e3ap-110f, 0x1.cd838p-24f, 0x1.cbb2c2p-50f,
     0x1.776d44p-49f, 0x1.41444cp-46f, 0.0f, 0x1.caa50cp-67f, 0x1.7814aep-123f,
     0x1.85d506p-14f, 0x1.3e2b18p-117f, 0.0f, 0.0f, 0x1.4073eap-14f, 0.0f, 0.0f,
     0x1.c8710cp-15f, 0.0f, 0.0f, 0x1.32defap-85f, 0.0f, 0x1.9162b6p-83f,
     0x1.134b58p-108f, 0x1.6a14a6p-42f, 0x1.89c0d4p-19f, 0x1.ce20e6p-20f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8a35ecp-65f, 0.0f, 0.0f, 0x1.5603acp-81f,
     0x1.0044dep-51f, 0.0f, 0x1.6c1acp-64f, 0.0f, 0x1.26f2cp-53f, 0.0f, 0.0f, 0.0f,
     0x1.d7b21p-112f, 0.0f, 0.0f, 0x1.2d75a4p-91f, 0.0f, 0.0f, 0x1.b20282p-75f, 0.0f,
     0x1.fe04b2p-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.94117cp-107f, 0.0f, 0x1.a0118cp-32f,
     0x1.db119p-17f, 0x1.1ec16p-72f, 0x1.097422p-71f, 0x1.19b932p-3f, 0.0f, 0.0f,
     0.0f, 0x1.4ecbbap-98f, 0x1.e2b412p-59f, 0x1.c61e3cp-65f, 0.0f, 0.0f,
     0x1.1012bap-31f, 0.0f, 0.0f, 0.0f, 0x1.6e3cc4p-97f, 0.0f, 0x1.a28a42p-31f, 0.0f,
     0.0f, 0x1.2f1b94p-91f, 0.0f, 0x1.b6af3ap-60f, 0x1.b7a186p-59f, 0x1.44c52cp-63f,
     0.0f, 0.0f, 0x1.8e8deep-97f, 0.0f, 0.0f, 0.0f, 0x1.711c06p-19f, 0.0f, 0x1p0f,
     0x1.05c88ep-37f, 0x1.aeeb1ep-124f, 0x1.0d34c2p-18f, 0x1.649314p-14f,
     0x1.4c3f26p-16f, 0.0f, 0x1.1f5fdep-27f, 0.0f, 0x1.66020ep-14f, 0x1.b831b8p-100f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ed0cfcp-51f, 0x1.d1435ep-23f, 0.0f, 0.0f,
     0x1.9c870ep-115f, 0.0f, 0.0f, 0.0f, 0x1.6be0c6p-8f, 0x1.0078e2p-30f,
     0x1.5d4944p-79f, 0x1.5f79c4p-105f, 0.0f, 0x1.8b6828p-91f, 0x1.46911ep-83f,
     0x1.79a954p-60f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.c383e8p-6f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.7a3136p-125f, 0.0f, 0x1.732b1ep-90f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.80405cp-24f, 0x1.d01acp-47f, 0.0f, 0.0f, 0x1.1b6e0ap-66f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.12bddep-13f, 0.0f, 0x1.cd6f4ep-62f, 0.0f, 0x1.79bfdap-86f, 0.0f,
     0x1.9eb162p-123f, 0.0f, 0.0f, 0x1.49ff16p-92f, 0x1.206bb2p-47f, 0x1.2e196ap-60f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5d0cf6p-70f, 0.0f,
     0x1.42edd2p-94f, 0x1.7059dcp-48f, 0x1.ae1b7cp-37f, 0.0f, 0x1.6e7498p-110f,
     0x1.12964cp-21f, 0.0f, 0.0f, 0x1.5cee52p-38f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ffa712p-126f, 0.0f, 0x1.733714p-21f, 0x1.1429c6p-1f, 0x1.8019dcp-83f,
     0x1.67254ap-74f, 0x1.89f4f4p-53f, 0x1.d215cp-88f, 0.0f, 0x1.ea50c6p-55f,
     0x1.8f29fap-83f, 0x1.67fba6p-68f, 0.0f, 0x1.ba9a3ep-108f, 0.0f, 0x1.680e2ap-114f,
     0x1.b7b30ap-40f, 0x1.7522e8p-52f, 0.0f, 0.0f, 0x1.148732p-41f, 0x1p0f,
     0x1.d31046p-42f, 0.0f, 0x1.5025fp-9f, 0x1.9fda62p-7f, 0.0f, 0.0f,
     0x1.7c837ap-33f, 0.0f, 0.0f, 0.0f, 0x1.6935cap-107f, 0x1.2ac148p-95f,
     0x1.9f715ep-32f, 0x1.c73ec8p-87f, 0x1.b02184p-106f, 0x1.f5dac8p-85f, 0.0f,
     0x1.8dad0ep-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.83713ep-5f, 0.0f, 0x1.a5b5fap-6f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a44b2cp-63f, 0x1.61920cp-123f, 0x1.f7b7f4p-95f, 0.0f,
     0.0f, 0.0f, 0x1.17abfcp-27f, 0x1.e4afaep-58f, 0x1.8bda8ap-47f, 0.0f, 0.0f,
     0x1.36a5b4p-73f, 0x1.929fd4p-101f, 0x1.72130ep-39f, 0.0f, 0x1.328e16p-124f,
     0x1.af2a98p-67f, 0x1.24a356p-99f, 0x1.ac033cp-93f, 0.0f, 0.0f, 0x1.af9de2p-40f,
     0x1.d5df2cp-122f, 0x1.2396fep-47f, 0x1.66430ep-125f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f45fcep-109f, 0x1p0f, 0x1.84e392p-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.2b0908p-7f, 0x1.2b532cp-22f, 0x1.7ea54ep-118f, 0.0f, 0x1.4aedap-49f,
     0.0f, 0x1.376a2p-56f, 0.0f, 0.0f, 0x1.28f41ap-11f, 0.0f, 0x1.216164p-32f, 0.0f,
     0.0f, 0x1.b7d8e8p-104f, 0x1.9b8f3ep-28f, 0x1.0962c4p-83f, 0x1.a8812ep-21f,
     0x1.8e3fbcp-104f, 0.0f, 0x1.7f532ep-90f, 0x1.08c266p-112f, 0x1.fee4e6p-68f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.55af72p-43f, 0.0f, 0x1.454088p-44f, 0x1.afa10ap-66f, 0.0f,
     0.0f, 0.0f, 0x1.667fd2p-72f, 0x1.de694ap-7f, 0.0f, 0x1.869998p-108f,
     0x1.6305dp-14f, 0.0f, 0x1.c060d4p-111f, 0x1.e19a2p-2f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3e2cc8p-49f, 0x1.69c4c2p-36f, 0.0f, 0.0f, 0x1.386106p-34f, 0x1.2d2ea4p-31f,
     0x1.ced198p-3f, 0.0f, 0.0f, 0x1.29b15ap-106f, 0x1p0f, 0.0f, 0x1.250c72p-71f,
     0x1.b03618p-106f, 0.0f, 0.0f, 0x1.186108p-23f, 0.0f, 0.0f, 0x1.c29b1ap-44f, 0.0f,
     0x1.45d45p-42f, 0.0f, 0x1.a0f944p-85f, 0x1.717d7ep-37f, 0x1.37751p-81f, 0.0f,
     0.0f, 0.0f, 0x1.e912a6p-32f, 0x1.4c36bap-19f, 0x1.76c31p-79f, 0.0f,
     0x1.b5f3d6p-83f, 0.0f, 0.0f, 0.0f, 0x1.f5585p-81f, 0x1.5299dep-25f,
     0x1.eea696p-28f, 0x1.41f9d6p-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0b77b6p-108f,
     0x1.1d2292p-3f, 0x1.046f9p-50f, 0x1.aff60cp-14f, 0.0f, 0.0f, 0x1.171e4p-10f,
     0.0f, 0x1.69ff6ep-58f, 0x1.6ff9e8p-82f, 0.0f, 0x1p0f, 0x1.332b22p-86f,
     0x1.06e902p-104f, 0.0f, 0x1.e3e1c6p-80f, 0x1.4177eap-6f, 0x1.2e93ecp-124f, 0.0f,
     0x1.795d46p-19f, 0x1.c1e3fep-32f, 0x1.d5927cp-84f, 0x1.2d4efap-87f, 0.0f,
     0x1.64c63ap-38f, 0x1.a48b5ep-70f, 0x1.b9953ap-86f, 0x1.a0f4c8p-96f,
     0x1.12c638p-24f, 0.0f, 0.0f, 0x1.add556p-123f, 0x1.bffc28p-27f, 0x1.7bd83cp-90f,
     0x1.dc1f7ap-62f, 0x1.5fc708p-71f, 0.0f, 0x1.e8e3d6p-11f, 0x1.b3c206p-42f,
     0x1.b76532p-38f, 0.0f, 0x1.3fa08ap-112f, 0.0f, 0x1.c2b2eep-123f, 0x1.6f9962p-31f,
     0x1.6ceb4cp-54f, 0x1.daf3ep-4f, 0.0f, 0.0f, 0x1.4884dp-44f, 0.0f,
     0x1.ca18ecp-109f, 0x1.e3cd8ep-27f, 0.0f, 0x1.a0273ap-83f, 0x1.c5ead8p-53f, 0.0f,
     0x1.51e0ep-111f, 0.0f, 0x1.be84f4p-59f, 0x1.3bc5aep-119f, 0x1.f434f2p-51f, 0.0f,
     0.0f, 0x1.cda2b6p-44f, 0x1.55ad4p-55f, 0.0f, 0x1.4d55eep-108f, 0x1.a17cc4p-94f,
     0x1.3561aep-97f, 0.0f, 0.0f, 0.0f, 0x1.b5b0c6p-62f, 0.0f, 0x1.afca18p-95f,
     0x1.f2f90cp-11f, 0x1.d48c38p-2f, 0x1.9465cap-49f, 0x1.61962p-113f,
     0x1.24e5fap-67f, 0.0f, 0.0f, 0x1.db9acep-68f, 0.0f, 0.0f, 0x1.f29ca4p-82f,
     0x1.6a92p-109f, 0.0f, 0.0f, 0x1.8bc204p-22f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e33b48p-123f, 0x1.b1fb94p-94f, 0x1.a78fcap-30f, 0x1.689432p-116f,
     0x1.3447aap-115f, 0.0f, 0.0f, 0x1.33a5e6p-105f, 0x1.88a2a4p-102f, 0.0f,
     0x1.44025p-9f, 0x1.5c2a66p-76f, 0x1.4787aap-69f, 0.0f, 0.0f, 0x1.8546a6p-117f,
     0.0f, 0x1.ee6b34p-33f, 0x1.fa7f34p-64f, 0.0f, 0x1.4fb874p-42f, 0x1.7f464cp-46f,
     0.0f, 0.0f, 0x1.69601ap-49f, 0.0f, 0x1.4fd0f2p-118f, 0.0f, 0x1.8deccap-12f,
     0x1.6d287ep-99f, 0x1.249682p-59f, 0x1.5373aap-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c5e4e2p-58f, 0.0f, 0x1.42911cp-34f, 0x1.77af26p-14f, 0.0f, 0.0f,
     0x1.aad77ap-1f, 0x1.39455ap-65f, 0.0f, 0x1.945dd8p-46f, 0x1.beed24p-102f,
     0x1.1776ccp-86f, 0.0f, 0x1.1be4dp-106f, 0.0f, 0x1.9c6c9ap-52f, 0x1.96e0eep-87f,
     0x1.09ef28p-93f, 0.0f, 0x1.7fea2cp-125f, 0x1.141268p-111f, 0x1.e1b9aep-58f,
     0x1.d81004p-87f, 0x1.22045p-60f, 0x1.5a1562p-25f, 0x1.2aa22ep-124f,
     0x1.07b9ecp-8f, 0.0f
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
            tmp1 = Sleef_log2f1_u35purecfma(tmp0);
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
    printf("Sleef_log2f1_u35purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_log2f1_u35purecfma bench acc %a\n", global_bench_acc);
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
