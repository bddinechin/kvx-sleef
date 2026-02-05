/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_coshf1_u35purecfma.c --function \
 *     Sleef_coshf1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.082d5p-12f, 0.0f, 0x1.aba3c4p-12f, 0.0f, 0x1.31ab1p-33f, 0x1.69cd8ep-47f,
     0x1.a41326p-116f, 0x1.33c7d8p-81f, 0x1.0f166cp-119f, 0x1.6044cap-36f,
     0x1.832efp-62f, 0x1p0f, 0x1.d38942p-20f, 0.0f, 0x1.66bbecp-3f, 0x1.72ac6ep-84f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.458782p-82f, 0.0f, 0x1.d2c14ap-125f, 0.0f,
     0x1.0e39f6p-57f, 0.0f, 0x1.9c9a6ep-85f, 0.0f, 0x1.936424p-40f, 0x1.d77b1p-93f,
     0.0f, 0.0f, 0.0f, 0x1.8f2dd4p-124f, 0x1.d6486p-107f, 0x1.45d732p-7f, 0.0f,
     0x1.65d7ep-123f, 0.0f, 0.0f, 0x1.979622p-35f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d1bb78p-98f, 0x1.a84ff4p-72f, 0x1.788b8cp-17f, 0x1.60977p-9f,
     0x1.a92f3ep-107f, 0.0f, 0x1.6156fap-63f, 0x1.111ad6p-67f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.314ecap-55f, 0x1.dd6582p-20f, 0.0f, 0.0f, 0x1.0ec436p-29f, 0x1.c59832p-33f,
     0.0f, 0.0f, 0.0f, 0x1.31fa3ep-78f, 0x1.dd5aa2p-92f, 0x1.361128p-87f, 0.0f,
     0x1.832638p-59f, 0x1.638a06p-111f, 0.0f, 0.0f, 0.0f, 0x1.ef04acp-77f,
     0x1.c835c2p-114f, 0x1.e473c2p-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bc677ap-36f, 0.0f,
     0x1.3be9ep-88f, 0.0f, 0x1.23960ap-126f, 0x1.b473dcp-61f, 0x1.28747ep-34f, 0.0f,
     0x1.554e0cp-77f, 0x1.1d02c8p-108f, 0x1.5c4ad8p-45f, 0x1.2a61e8p-37f,
     0x1.8cda0ap-22f, 0x1.18a2f4p-117f, 0x1.c21998p-20f, 0x1.9c929p-2f, 0.0f,
     0x1.59f80ep-74f, 0x1.588696p-4f, 0x1.715b74p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.756a32p-46f, 0x1.0f4524p-3f, 0.0f, 0x1.42efap-107f, 0x1.026962p-123f,
     0.0f, 0.0f, 0.0f, 0x1.2b4ed6p-16f, 0.0f, 0.0f, 0.0f, 0x1.0977d6p-116f, 0.0f,
     0.0f, 0x1.caadd2p-60f, 0.0f, 0x1.6f8c04p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3c983ep-88f, 0.0f, 0.0f, 0x1.0551ccp-17f, 0.0f, 0.0f, 0x1.460826p-29f, 0.0f,
     0x1.d542b4p-105f, 0.0f, 0x1.4b8cdp-10f, 0x1.22857p-112f, 0.0f, 0.0f,
     0x1.d64878p-65f, 0.0f, 0.0f, 0x1.c62a72p-33f, 0.0f, 0.0f, 0.0f, 0x1.508f8cp-119f,
     0x1.fa6c62p-107f, 0.0f, 0x1.9d1c5cp-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.81376ap-76f, 0.0f, 0x1.f6c5a2p-79f, 0.0f, 0x1.35a236p-78f, 0x1.d86cap-50f,
     0.0f, 0x1.d4997p-47f, 0x1.52c0cep-122f, 0x1.30284cp-25f, 0x1.0dda94p-66f,
     0x1.53ff18p-35f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.c24e2ap-84f, 0.0f, 0.0f,
     0x1.d7644ep-105f, 0x1.85163cp-44f, 0x1.0a47f2p-11f, 0.0f, 0.0f, 0x1.4aa538p-94f,
     0.0f, 0x1.738ab8p-120f, 0.0f, 0.0f, 0.0f, 0x1.5c76dcp-16f, 0x1.c2e062p-21f,
     0x1.ec86acp-47f, 0x1.7ef866p-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3e48fp-122f,
     0x1.7d4d2cp-72f, 0x1.c1f04ap-107f, 0.0f, 0.0f, 0x1.c7d494p-74f, 0.0f,
     0x1.ad415p-79f, 0x1.cc3f98p-81f, 0.0f, 0.0f, 0x1.2cdee4p-87f, 0.0f, 0.0f,
     0x1.cbb0dap-20f, 0x1.936d5ap-52f, 0x1.c74ff8p-116f, 0.0f, 0.0f, 0x1.cc3f74p-104f,
     0x1.846e48p-74f, 0.0f, 0x1.f2a628p-55f, 0.0f, 0.0f, 0x1.6a431p-119f,
     0x1.8e4a46p-117f, 0.0f, 0x1.90ba06p-116f, 0.0f, 0.0f, 0x1.55c7e2p-84f,
     0x1.760412p-88f, 0x1.6a0878p-93f, 0.0f, 0.0f, 0.0f, 0x1.e9c086p-93f, 0.0f,
     0x1.7ca1acp-116f, 0.0f, 0x1.cd7ee4p-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b4dfc6p-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4d8a54p-121f, 0.0f,
     0x1.e15c82p-37f, 0x1.b9eff6p-115f, 0x1.eb0414p-71f, 0x1.950b92p-30f,
     0x1.e236d4p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5deca4p-74f, 0x1.1ec4dp-120f, 0.0f,
     0x1.1759a2p-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e888p-61f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.39482ap-111f, 0x1.35d206p-84f, 0.0f, 0x1.ed855ap-120f, 0x1.e6461ep-63f,
     0.0f, 0x1.803f48p-59f, 0x1.442838p-3f, 0.0f, 0x1.8aa6f2p-74f, 0.0f,
     0x1.0f28dp-2f, 0.0f, 0x1.84d97p-29f, 0.0f, 0x1.6092bap-52f, 0.0f, 0.0f,
     0x1.3d5ea4p-45f, 0x1.c1f41ep-34f, 0.0f, 0.0f, 0x1.948912p-1f, 0x1.95d434p-52f,
     0.0f, 0.0f, 0x1.17e5e2p-38f, 0.0f, 0x1.a7b7c8p-59f, 0.0f, 0.0f, 0.0f,
     0x1.5e122p-21f, 0.0f, 0.0f, 0.0f, 0x1.449838p-55f, 0.0f, 0x1.ad6478p-12f, 0.0f,
     0x1.f44036p-42f, 0.0f, 0x1.c4b07cp-12f, 0.0f, 0x1.5a754cp-97f, 0.0f,
     0x1.c6b40ep-13f, 0.0f, 0.0f, 0x1.dec4c2p-116f, 0x1.358848p-21f, 0x1.51cd54p-76f,
     0x1.6f143p-58f, 0.0f, 0x1.23726p-65f, 0.0f, 0x1.32be3ep-62f, 0.0f, 0.0f,
     0x1.4f7ccap-70f, 0.0f, 0.0f, 0x1.093572p-8f, 0x1.afccd4p-22f, 0.0f, 0.0f, 0.0f,
     0x1.7a3c7cp-5f, 0x1.28aa1p-7f, 0x1.408a18p-52f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e80c3ep-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e831a6p-2f,
     0x1.108e7cp-82f, 0.0f, 0x1.f7d8b8p-70f, 0x1.f66aaap-29f, 0.0f, 0x1.e7834ap-26f,
     0.0f, 0.0f, 0.0f, 0x1.b54c78p-85f, 0.0f, 0x1.a26e16p-51f, 0.0f, 0.0f, 0.0f,
     0x1.28316p-70f, 0x1.b6051p-118f, 0x1.c1b8ep-85f, 0x1.9f9dd2p-122f,
     0x1.99397ap-109f, 0x1.e914f8p-3f, 0.0f, 0.0f, 0.0f, 0x1.79a332p-61f,
     0x1.eff842p-44f, 0.0f, 0x1.f25f48p-65f, 0x1.0f3bf4p-89f, 0x1.01a8fcp-65f, 0.0f,
     0.0f, 0x1.42f8b8p-125f, 0.0f, 0x1.d53e24p-122f, 0.0f, 0.0f, 0x1.cf6068p-55f,
     0x1.e857e8p-2f, 0.0f, 0.0f, 0x1.51b55p-39f, 0.0f, 0x1.78200ap-123f, 0.0f,
     0x1.7c3572p-31f, 0x1.f19d36p-66f, 0x1.991e2p-102f, 0.0f, 0x1.4bab76p-74f,
     0x1.9c9f7p-86f, 0x1.2a70c4p-36f, 0x1.4e314cp-12f, 0x1.ce89a2p-43f,
     0x1.8b23d4p-111f, 0x1.151484p-115f, 0.0f, 0x1.72fa6ap-97f, 0.0f, 0.0f,
     0x1.ca898cp-126f, 0x1p0f, 0x1.c2a09cp-25f, 0.0f, 0x1.c791a6p-5f, 0.0f,
     0x1.04d832p-31f, 0x1.27a466p-52f, 0x1.5042cap-115f, 0x1.31bf96p-60f, 0.0f, 0.0f,
     0.0f, 0x1.a66d6ep-21f, 0.0f, 0x1.5caeeep-42f, 0.0f, 0.0f, 0x1.9025b6p-120f,
     0x1.915c66p-100f, 0x1.0917c2p-65f, 0x1.2804c4p-62f, 0x1.e9c108p-38f, 0.0f,
     0x1p0f, 0.0f, 0x1.6d9a66p-97f, 0.0f, 0x1.c869a6p-7f, 0x1.2d00d6p-91f, 0.0f,
     0x1p0f, 0x1.139ccap-39f, 0x1.494f4ep-102f, 0.0f, 0.0f, 0x1.afc24ap-51f,
     0x1.441f32p-59f, 0.0f, 0.0f, 0.0f, 0x1.db3d84p-17f, 0x1.3b62f6p-87f, 0.0f,
     0x1.6db1ecp-99f, 0x1.7c8498p-73f, 0x1.9df754p-13f, 0.0f, 0x1.e49198p-91f,
     0x1.49ccc2p-4f, 0x1.017efep-53f, 0.0f, 0x1.66f5f6p-88f, 0x1.2b21eap-43f, 0.0f,
     0x1.de744p-45f, 0.0f, 0.0f, 0x1.165c7ap-55f, 0x1.e9780ap-49f, 0.0f,
     0x1.4f5fap-48f, 0.0f, 0.0f, 0x1.adce08p-75f, 0.0f, 0x1.0839eap-32f,
     0x1.1d95ccp-15f, 0.0f, 0x1.415308p-20f, 0.0f, 0x1.5ced28p-36f, 0x1.188eecp-19f,
     0.0f, 0x1.a8329cp-100f, 0.0f, 0.0f, 0.0f, 0x1.5ef798p-13f, 0x1.0b355ep-26f,
     0x1.315772p-51f, 0.0f, 0.0f, 0x1.72848cp-41f, 0x1.c1f06p-1f, 0x1.1591aep-73f,
     0x1.d15462p-61f, 0.0f, 0x1.2b48bep-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.02d9e8p-32f, 0.0f, 0x1.1b6916p-118f, 0.0f, 0x1.ba5cdap-92f, 0x1.29ecb2p-99f,
     0x1.3406d4p-35f, 0.0f, 0x1.64eb34p-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0c198ap-24f,
     0x1.8e81fp-94f, 0.0f, 0x1.b752fap-65f, 0.0f, 0x1.b0cfd2p-96f, 0.0f,
     0x1.271a72p-110f, 0x1.fa1514p-46f, 0.0f, 0x1.a19f3cp-95f, 0.0f, 0.0f,
     0x1.d4712ap-5f, 0.0f, 0x1.f9c4f8p-53f, 0.0f, 0x1.5da42p-2f, 0x1.332a4p-44f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.42793ap-96f, 0.0f, 0x1.4d471ep-109f, 0.0f,
     0x1.5e7992p-44f, 0x1.98d5e8p-75f, 0.0f, 0x1.8bac56p-13f, 0x1.19e188p-106f, 0.0f,
     0x1.37876cp-41f, 0x1.55d4dp-64f, 0x1.f55efap-95f, 0.0f, 0x1.250e76p-32f,
     0x1.b3da3p-47f, 0.0f, 0x1.bc4552p-94f, 0.0f, 0.0f, 0x1.50fbe8p-33f,
     0x1.cc2266p-17f, 0.0f, 0x1.4ea364p-45f, 0x1.93f18p-111f, 0x1.7e0a7ep-6f, 0.0f,
     0.0f, 0x1.f8971p-19f, 0x1.b0bc02p-97f, 0x1.dcae22p-14f, 0.0f, 0.0f,
     0x1.d454d2p-72f, 0.0f, 0.0f, 0x1.5f06b2p-47f, 0x1.15dc2cp-35f, 0x1.2064e8p-112f,
     0x1.60f3aap-125f, 0.0f, 0x1.57e186p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3aaf48p-12f, 0x1.228ddap-32f, 0x1.399edep-100f, 0.0f, 0x1.43711ap-69f, 0.0f,
     0.0f, 0x1.e054c6p-1f, 0x1.5c2852p-106f, 0.0f, 0x1.b31958p-85f, 0.0f, 0.0f,
     0x1.2381bp-17f, 0.0f, 0.0f, 0.0f, 0x1.65e9b6p-24f, 0x1.e64f12p-21f,
     0x1.cd5462p-88f, 0.0f, 0x1.5bb442p-68f, 0x1.bd7e1p-27f, 0.0f, 0x1.2dd51ep-26f,
     0.0f, 0x1.f7f0d6p-81f, 0x1.6652bap-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.af66d8p-17f, 0.0f, 0.0f, 0.0f, 0x1.39f51ap-81f, 0.0f, 0x1p0f, 0.0f,
     0x1.c6b9ecp-101f, 0x1.863088p-43f, 0x1.5817c2p-50f, 0.0f, 0x1.6cb3b8p-82f,
     0x1.c4466ep-97f, 0x1.58f2ap-91f, 0.0f, 0.0f, 0x1.e3ae4ep-79f, 0x1.4c894p-124f,
     0x1.a5043cp-97f, 0x1.e73a6ap-53f, 0x1.b84ab8p-99f, 0.0f, 0.0f, 0x1.104524p-113f,
     0.0f, 0x1.dff522p-75f, 0.0f, 0.0f, 0x1.7a894ap-124f, 0.0f, 0.0f, 0x1.a07818p-20f,
     0.0f, 0x1.0f56ep-63f, 0.0f, 0x1.bfd3dp-8f, 0x1.5b7bc4p-92f, 0.0f, 0.0f,
     0x1.47b6p-7f, 0x1.212b3p-13f, 0.0f, 0x1.0612ccp-25f, 0x1.e144ap-76f, 0.0f, 0.0f,
     0x1.de3446p-30f, 0.0f, 0x1.b7c4b2p-30f, 0.0f, 0x1.b2dc6ap-71f, 0.0f, 0.0f,
     0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.89e338p-78f, 0.0f, 0x1.e30754p-103f,
     0x1.5f7a96p-97f, 0x1.c825eep-66f, 0.0f, 0.0f, 0x1.7e89cap-123f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.35f4c8p-49f, 0.0f, 0x1.341882p-7f, 0x1.dca046p-72f, 0.0f, 0.0f,
     0x1.426b56p-64f, 0.0f, 0.0f, 0x1.198858p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5e0f0ap-69f, 0x1.dc95d2p-114f, 0.0f, 0.0f,
     0.0f, 0x1.60ac44p-94f, 0.0f, 0x1.ff6b0ep-46f, 0x1.537abep-30f, 0.0f, 0.0f, 0.0f,
     0x1.cc78d4p-6f, 0x1.a73102p-48f, 0.0f, 0x1.98cbacp-39f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e8c618p-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1d55f2p-111f, 0.0f, 0.0f,
     0x1.b27dbap-78f, 0x1.2da3c6p-47f, 0.0f, 0x1.ca7a48p-106f, 0x1.59bd46p-47f,
     0x1.e0321ap-27f, 0x1.a69476p-4f, 0.0f, 0x1.29a73p-104f, 0x1.5640ep-119f, 0.0f,
     0x1.eb9896p-98f, 0x1.882378p-126f, 0.0f, 0x1.bc4504p-78f, 0x1.e0a646p-77f, 0.0f,
     0x1.53f6f2p-122f, 0.0f, 0.0f, 0x1.7a82a8p-94f, 0x1.15adcap-5f, 0.0f, 0.0f,
     0x1.c7965ap-35f, 0.0f, 0.0f, 0x1.b07506p-12f, 0x1.5abb56p-94f, 0x1.bd5d42p-75f,
     0x1.379d5ap-76f, 0x1.c49912p-121f, 0x1.46c194p-98f, 0x1.93779ep-9f,
     0x1.1ed034p-62f, 0.0f, 0.0f, 0.0f, 0x1.cdfa36p-58f, 0x1.1ddb0ap-1f,
     0x1.2eb13p-52f, 0.0f, 0.0f, 0x1.82a36ap-100f, 0x1.d2d5p-93f, 0.0f,
     0x1.8c9e66p-85f, 0.0f, 0x1.b987d2p-30f, 0.0f, 0.0f, 0.0f, 0x1.863e36p-49f,
     0x1.e2c712p-18f, 0x1.dfb24ap-41f, 0x1.a62a6cp-15f, 0.0f, 0.0f, 0x1.b6f0e2p-43f,
     0x1.8f6bcp-43f, 0.0f, 0.0f, 0x1.3ebefep-125f, 0.0f, 0x1.8bd208p-24f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.56cb9cp-41f, 0x1.499c1ap-124f, 0x1.3f79d2p-34f,
     0x1.c2ef74p-51f, 0x1.037bd6p-34f, 0x1.ec90dp-95f, 0x1.d27fc2p-42f, 0.0f, 0.0f,
     0x1.9653a4p-105f, 0.0f, 0x1.adb066p-90f, 0x1.8d50fcp-82f, 0.0f, 0x1.d97a4ep-93f,
     0x1.45f89ap-85f, 0x1.3c6994p-13f, 0x1.9628e4p-76f, 0.0f, 0.0f, 0x1.db79fp-26f,
     0x1.8842c4p-95f, 0.0f, 0.0f, 0x1.774ee2p-37f, 0x1.71811ep-39f, 0x1.7b8d7ap-71f,
     0.0f, 0x1p0f, 0x1.bb91e2p-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dcbeap-44f, 0.0f,
     0x1.ab2106p-30f, 0.0f, 0x1.ef10d8p-7f, 0.0f, 0.0f, 0.0f, 0x1.ea7f56p-84f, 0.0f,
     0x1.a44794p-118f, 0x1.6b2bd2p-15f, 0x1.476722p-6f, 0.0f, 0.0f, 0.0f,
     0x1.cb826cp-100f, 0x1.c586e6p-11f, 0x1.fe75cep-2f, 0.0f, 0x1.7b4dfcp-81f,
     0x1.2803e8p-4f, 0.0f, 0.0f, 0x1.b958dep-3f, 0.0f, 0.0f, 0.0f, 0x1.8767eap-60f,
     0x1.952e5ap-73f, 0.0f, 0x1.af035ep-122f, 0x1.e4bab4p-22f, 0x1.66dbp-104f,
     0x1.2a0fbcp-1f, 0x1.5f1df8p-42f, 0x1.ca481ep-57f, 0.0f, 0.0f, 0x1.724cb8p-97f,
     0x1.9edbbap-96f, 0.0f, 0x1.b342ccp-60f, 0x1.ddc14ep-100f, 0.0f, 0x1.2cc4dep-21f,
     0x1.66e17ap-19f, 0.0f, 0x1.e72adp-126f, 0x1.90cc6p-13f, 0.0f, 0x1.8da6c2p-35f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0e456cp-25f, 0x1.34f32cp-71f, 0x1.aa1e18p-108f,
     0.0f, 0.0f, 0.0f, 0x1.f6a1acp-76f, 0x1.85e676p-54f, 0.0f, 0x1.e76f0ap-97f,
     0x1.62063ep-59f, 0x1.238ep-121f, 0.0f, 0.0f, 0x1.f7f942p-95f, 0.0f,
     0x1.d7c36ep-72f, 0.0f, 0x1.b4f8ap-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a95d7ep-87f,
     0.0f, 0.0f, 0x1.bf3824p-45f, 0x1.3b625cp-92f, 0x1.7152ep-107f, 0.0f,
     0x1.fefd58p-26f, 0x1.3a4bdp-37f, 0x1.b3625ap-39f, 0.0f, 0x1.446024p-12f, 0.0f,
     0.0f, 0x1.97ac7cp-4f, 0.0f, 0x1.c8e63p-69f, 0x1.6c7a4ep-64f, 0.0f,
     0x1.1a3ae8p-94f, 0x1.684f84p-31f, 0x1.03fa68p-45f, 0.0f, 0x1.34c80ap-58f, 0.0f,
     0.0f, 0x1.f03e6ep-103f, 0x1.054dc4p-77f, 0.0f, 0.0f, 0.0f, 0x1.752c3ep-107f,
     0x1.1b0232p-25f, 0x1.496248p-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.db4a58p-6f,
     0.0f, 0x1.b653acp-105f, 0.0f, 0x1.f52e4ep-10f, 0x1.33ace8p-71f, 0x1.a055acp-125f,
     0x1.fe5528p-117f, 0x1.a96b96p-12f, 0x1.b399bp-13f, 0.0f, 0x1.288f3ap-26f,
     0x1.6c4fcep-14f, 0.0f, 0x1.c0c238p-60f, 0.0f, 0x1.d31c78p-55f, 0x1.23cb7ap-118f,
     0.0f
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
            tmp1 = Sleef_coshf1_u35purecfma(tmp0);
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
    printf("Sleef_coshf1_u35purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_coshf1_u35purecfma bench acc %a\n", global_bench_acc);
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
