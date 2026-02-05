/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_lgammaf1_u10purecfma.c --function \
 *     Sleef_lgammaf1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.9e495ep-20f, 0x1.3fb89p-69f, 0.0f, 0x1.39b8f4p-115f, 0.0f, 0x1.f87716p-57f,
     0.0f, 0.0f, 0x1.5b33fp-79f, 0x1.2bd4fep-25f, 0.0f, 0x1.94ebf4p-34f,
     0x1.a339dap-118f, 0x1.79835cp-3f, 0.0f, 0x1.751a38p-81f, 0.0f, 0.0f,
     0x1.131d56p-15f, 0.0f, 0x1.59c432p-100f, 0x1.ce6dc4p-11f, 0x1.a714e8p-42f,
     0x1.6f525ep-21f, 0x1.ef747ep-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.eef628p-78f, 0x1.3a0aeap-55f, 0.0f, 0x1.76e26ap-30f, 0.0f, 0x1.fc56bep-111f,
     0.0f, 0x1.a424eep-3f, 0.0f, 0x1.82a4eep-39f, 0x1.555dd4p-53f, 0.0f,
     0x1.84c18cp-99f, 0.0f, 0.0f, 0x1.069bb4p-116f, 0.0f, 0x1.e224f2p-103f, 0.0f,
     0x1.fc71c4p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.49ddcp-36f,
     0x1.9c69fcp-77f, 0x1.404e36p-7f, 0.0f, 0x1.335726p-31f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b31a58p-124f, 0.0f, 0x1.49ee36p-86f, 0.0f, 0.0f, 0.0f, 0x1.25a974p-74f,
     0x1.8e168ep-6f, 0x1.34ab66p-62f, 0x1.8fe506p-51f, 0.0f, 0.0f, 0.0f,
     0x1.22cdcep-67f, 0x1.dc3bd4p-30f, 0x1.bfd8c2p-89f, 0x1.b80c02p-22f,
     0x1.42321ap-15f, 0.0f, 0x1.134666p-111f, 0x1.028946p-11f, 0.0f, 0x1.4c91bp-36f,
     0x1.fa9452p-16f, 0x1.abaee2p-83f, 0x1.6e72a2p-18f, 0.0f, 0x1.430ff8p-109f, 0.0f,
     0.0f, 0.0f, 0x1.28b102p-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.edb4f2p-36f, 0.0f,
     0x1.cbc98cp-51f, 0x1.a677b2p-65f, 0.0f, 0x1.b7d4d4p-39f, 0x1.210a98p-58f, 0.0f,
     0x1.caad2ap-31f, 0.0f, 0x1.8d930cp-74f, 0.0f, 0.0f, 0x1.67c7b8p-32f, 0.0f,
     0x1.b9319ap-68f, 0x1.d66faap-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.870286p-66f, 0.0f, 0.0f, 0x1.0d662ep-5f, 0x1.4459aap-21f,
     0.0f, 0.0f, 0x1.cd1f9ap-76f, 0.0f, 0.0f, 0x1.7085ecp-8f, 0x1.d05c92p-82f,
     0x1.286d9cp-75f, 0x1.e0a234p-26f, 0x1.c02df8p-75f, 0x1.605b8cp-99f,
     0x1.ad14cp-112f, 0x1.a2feep-34f, 0x1.ee0a9ep-113f, 0.0f, 0.0f, 0x1.8cb966p-51f,
     0x1.04d7dap-57f, 0.0f, 0x1.7197b6p-89f, 0x1.78cee4p-48f, 0x1.d42eccp-108f,
     0x1.edbbcp-124f, 0.0f, 0.0f, 0x1.a7b4ep-119f, 0x1.3b7c16p-14f, 0.0f,
     0x1.839a96p-57f, 0.0f, 0.0f, 0x1.fbbb96p-27f, 0x1.4a54f8p-126f, 0.0f, 0.0f,
     0x1.273d14p-1f, 0x1.f62d96p-20f, 0x1.5b1dc2p-4f, 0.0f, 0x1.0761b6p-88f,
     0x1.6cb29ap-7f, 0x1.c86feap-108f, 0.0f, 0.0f, 0x1.867776p-32f, 0x1.8716ecp-122f,
     0x1.4a6a1cp-97f, 0.0f, 0.0f, 0x1.4a676cp-8f, 0.0f, 0x1.3b51f6p-28f, 0.0f,
     0x1.3c336ep-118f, 0x1.19a84p-78f, 0x1.2f2a1ep-92f, 0x1.fc6402p-37f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.60aaep-70f, 0x1.2bdf28p-73f, 0x1.382bacp-15f, 0.0f,
     0.0f, 0x1.e6fcep-41f, 0x1.fbbb2p-101f, 0x1.8c77fep-66f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.da35c4p-96f, 0.0f, 0.0f, 0x1.bcc0cep-68f, 0x1.22513p-2f, 0x1.b4c5f2p-16f,
     0x1.d0cf8ep-123f, 0x1.bade98p-66f, 0x1.332fe4p-70f, 0x1.f3ff1cp-32f, 0.0f,
     0x1.1d9034p-68f, 0x1.e57042p-42f, 0x1.b44c12p-111f, 0x1.e820d8p-119f, 0.0f,
     0x1.9f357ep-21f, 0x1.03b79p-50f, 0.0f, 0x1.a23f16p-13f, 0x1.e672c8p-6f,
     0x1.9efafep-51f, 0.0f, 0.0f, 0.0f, 0x1.96ad0ep-95f, 0.0f, 0x1.c7e56ap-13f,
     0x1.cb823ep-93f, 0.0f, 0.0f, 0x1.9ade0ap-72f, 0x1.278716p-114f, 0x1.fbe91ap-121f,
     0.0f, 0.0f, 0x1.8688fcp-51f, 0.0f, 0x1.c1bfcep-19f, 0x1.67fe52p-109f, 0.0f, 0.0f,
     0.0f, 0x1.991b52p-48f, 0.0f, 0x1.f332b2p-91f, 0.0f, 0x1.184ceep-6f,
     0x1.27913cp-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3ad376p-104f, 0x1.8d236ap-49f,
     0x1.a20facp-117f, 0.0f, 0.0f, 0.0f, 0x1.3b76e8p-88f, 0x1.7dee9ep-96f, 0.0f, 0.0f,
     0x1.be183ep-114f, 0x1.9cf1c4p-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a2724p-87f, 0.0f,
     0.0f, 0x1.aa1b5cp-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.054b84p-74f,
     0x1.41a22cp-73f, 0.0f, 0.0f, 0x1.44987cp-103f, 0x1.d57772p-65f, 0.0f, 0.0f,
     0x1.780558p-110f, 0x1.29ac5cp-97f, 0.0f, 0.0f, 0x1.beb3cep-91f, 0.0f,
     0x1.92d09ap-124f, 0.0f, 0.0f, 0x1.5db628p-94f, 0x1.8723d4p-71f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.6a1712p-109f, 0.0f, 0x1.e2660ep-101f, 0.0f, 0.0f, 0x1.48a65cp-72f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.9021f6p-87f, 0x1.8bd952p-51f, 0.0f, 0x1.bc406cp-53f,
     0.0f, 0.0f, 0x1.b0d1b4p-109f, 0x1.56ec54p-26f, 0x1.8665fp-106f, 0.0f, 0.0f,
     0x1.76b414p-119f, 0.0f, 0x1.24b41cp-126f, 0x1.4d02a6p-104f, 0.0f, 0.0f,
     0x1.e94ccep-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e1bebep-109f, 0.0f, 0.0f, 0.0f,
     0x1.39ce2ap-125f, 0x1.404d34p-121f, 0x1.5ef8fcp-6f, 0x1.ef8dd6p-70f, 0.0f, 0.0f,
     0.0f, 0x1.904658p-61f, 0.0f, 0.0f, 0x1.eae3fep-61f, 0x1.d8f3bap-103f, 0.0f,
     0x1.4bd462p-60f, 0.0f, 0x1.98e766p-69f, 0.0f, 0x1.4cedc8p-35f, 0.0f,
     0x1.1dbd32p-37f, 0x1.db1ab8p-31f, 0.0f, 0x1.b1f1d6p-48f, 0.0f, 0x1.4bbe8ap-37f,
     0.0f, 0x1.91abbep-50f, 0.0f, 0.0f, 0.0f, 0x1.4f569ep-32f, 0x1.77e73ep-123f, 0.0f,
     0x1.94556p-36f, 0.0f, 0.0f, 0.0f, 0x1.c4b4eap-66f, 0x1.ac3e72p-103f,
     0x1.bcc2cp-46f, 0x1.ec325ap-36f, 0x1.b7c002p-45f, 0x1.573116p-109f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.8a8b5ep-101f, 0x1.844fe2p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.8d0912p-32f, 0x1.eea868p-20f, 0x1.d578cep-119f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e67656p-49f, 0x1.d4efb8p-34f, 0.0f, 0x1.950b3ap-41f,
     0x1.e27d7cp-19f, 0.0f, 0x1.d77f54p-16f, 0.0f, 0x1.ce9352p-65f, 0x1.8f4736p-122f,
     0.0f, 0.0f, 0.0f, 0x1.a11606p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0a4d0ep-3f, 0.0f,
     0.0f, 0.0f, 0x1.33b6fcp-107f, 0x1.0c2e2ap-107f, 0.0f, 0.0f, 0.0f,
     0x1.2ce4f8p-29f, 0.0f, 0.0f, 0x1.16ba66p-68f, 0.0f, 0.0f, 0x1.13cde2p-78f, 0.0f,
     0x1.e3325ap-42f, 0x1.e13108p-120f, 0x1.a57cd8p-71f, 0x1.0fb3bep-113f, 0.0f,
     0x1.fd3fd4p-123f, 0.0f, 0.0f, 0x1.069536p-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.33a472p-119f, 0.0f, 0.0f, 0x1.42c02cp-30f, 0.0f, 0.0f, 0x1.c161eep-74f,
     0x1.ce3b3p-23f, 0x1.672124p-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d05498p-63f,
     0x1.d76628p-25f, 0.0f, 0x1.0e7336p-19f, 0x1.0c0f44p-43f, 0x1.a24d7cp-114f,
     0x1.aca228p-80f, 0.0f, 0.0f, 0x1.f1b374p-68f, 0x1.49f00ap-92f, 0.0f,
     0x1.254624p-37f, 0.0f, 0x1.ec2284p-32f, 0x1.4bf292p-26f, 0.0f, 0x1.7d357ap-25f,
     0x1.f2b0e6p-55f, 0.0f, 0x1.dfa7f2p-41f, 0.0f, 0x1.611da2p-85f, 0.0f,
     0x1.7f73d4p-97f, 0x1.310f62p-32f, 0x1.06b0acp-100f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.17be52p-96f, 0x1.81260ap-66f, 0x1.ee9b8cp-68f, 0.0f, 0x1.aa32aep-81f,
     0x1.d9a49cp-125f, 0.0f, 0x1.b32004p-59f, 0x1.b0fb46p-13f, 0x1.01ac1p-70f, 0.0f,
     0.0f, 0x1.d43c1ap-57f, 0x1.29c212p-60f, 0.0f, 0.0f, 0x1.6e9cecp-48f,
     0x1.27a33cp-37f, 0x1.e470bcp-10f, 0x1.fc286cp-25f, 0x1.2c404ep-77f, 0.0f, 0.0f,
     0x1.8595f4p-126f, 0.0f, 0.0f, 0x1.eacf9ep-110f, 0.0f, 0x1.227786p-88f,
     0x1.97ee98p-44f, 0.0f, 0x1.a91e72p-107f, 0.0f, 0.0f, 0x1.d90b24p-53f,
     0x1.949c7ep-123f, 0.0f, 0x1.c0c4cep-15f, 0.0f, 0x1.2163acp-82f, 0.0f, 0.0f, 0.0f,
     0x1.aa7e16p-65f, 0x1.3a2a28p-49f, 0.0f, 0x1.1ac602p-68f, 0.0f, 0.0f, 0.0f,
     0x1.f52228p-34f, 0.0f, 0x1.7ee414p-2f, 0x1.53dd8cp-100f, 0x1.e977f8p-1f, 0.0f,
     0.0f, 0x1.d0b6ecp-69f, 0x1.4136f2p-110f, 0.0f, 0x1.1c9f4p-99f, 0.0f, 0.0f,
     0x1.d76212p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2a1f86p-93f, 0x1.87d914p-27f, 0.0f,
     0x1.c262bp-115f, 0x1.17a638p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1a95a2p-126f,
     0.0f, 0x1.a6a05cp-90f, 0x1.9545e8p-124f, 0.0f, 0x1.535cfep-26f, 0x1.a353b2p-66f,
     0.0f, 0x1.0440ep-57f, 0x1.19600ep-29f, 0.0f, 0x1.503a5ep-109f, 0.0f,
     0x1.d3103cp-61f, 0.0f, 0.0f, 0x1.6c82c2p-113f, 0x1.64983ap-40f, 0.0f,
     0x1.63a5a4p-91f, 0.0f, 0.0f, 0x1.2c7f04p-62f, 0.0f, 0.0f, 0x1p0f, 0.0f,
     0x1.856444p-22f, 0x1p0f, 0.0f, 0x1.61cbecp-122f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c3bc48p-107f, 0.0f, 0.0f, 0x1.4198e6p-37f, 0.0f, 0x1.49ea6cp-83f,
     0x1.b2ba34p-37f, 0.0f, 0.0f, 0x1.9bb92cp-68f, 0.0f, 0x1.790d46p-1f,
     0x1.8fe8b8p-34f, 0.0f, 0.0f, 0x1.70a3d6p-103f, 0x1.c569b8p-118f, 0.0f, 0.0f,
     0x1.bc984ep-84f, 0x1.1cae2cp-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1f2feep-113f,
     0x1.972a5cp-36f, 0x1.e59b1cp-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.82b90ep-55f, 0x1.be72bcp-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.96b954p-102f, 0.0f,
     0x1.79ed2cp-38f, 0x1.cafdfep-98f, 0.0f, 0x1.5d15f4p-19f, 0x1.b7d5cep-30f,
     0x1.9b1f16p-120f, 0.0f, 0x1.8e3316p-20f, 0x1.ded4c8p-8f, 0x1.2f0842p-60f, 0.0f,
     0x1.16134p-83f, 0.0f, 0.0f, 0x1.afe304p-57f, 0.0f, 0x1.74fc2p-73f, 0.0f,
     0x1.d71518p-119f, 0.0f, 0.0f, 0.0f, 0x1.50f68cp-93f, 0x1.dce4f6p-124f, 0.0f,
     0x1.d57bc4p-16f, 0x1.eebf6ep-97f, 0x1.4c3418p-42f, 0x1.82552p-80f,
     0x1.610f2p-42f, 0.0f, 0.0f, 0x1.2597d6p-91f, 0x1.ee20c8p-50f, 0x1.4ffc5ep-82f,
     0.0f, 0x1.fdbdp-62f, 0x1.8482ccp-10f, 0x1.01fa3ap-83f, 0x1.aceebp-13f,
     0x1.dce1eep-86f, 0x1.afaca8p-66f, 0.0f, 0.0f, 0x1.875acap-52f, 0x1p0f, 0.0f,
     0x1.a95f28p-20f, 0.0f, 0.0f, 0x1.d571bcp-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0e2f22p-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.391a2ep-95f,
     0x1.b4313ap-95f, 0x1.453d1ep-38f, 0.0f, 0.0f, 0x1.fb0a3cp-31f, 0x1.ff2ap-22f,
     0.0f, 0x1.982fcap-106f, 0.0f, 0x1.48a072p-65f, 0.0f, 0x1.b0de3p-38f,
     0x1.4a9a4p-93f, 0.0f, 0.0f, 0.0f, 0x1.bb9d0cp-26f, 0.0f, 0x1.bc482cp-10f,
     0x1.fbbbf8p-89f, 0.0f, 0.0f, 0x1.65f0d4p-52f, 0.0f, 0.0f, 0x1.0cd3cep-21f,
     0x1.63573p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.65223p-86f, 0x1.352d4ap-63f,
     0x1.4077e8p-105f, 0x1.cef102p-106f, 0.0f, 0.0f, 0x1.7de61p-60f, 0.0f,
     0x1.761d5ep-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4e4338p-104f, 0x1.78d2d6p-35f,
     0.0f, 0x1.4152f2p-10f, 0.0f, 0x1.3adc2ap-105f, 0x1.7df58cp-72f, 0.0f,
     0x1.83b15ap-96f, 0x1.5cb86ap-123f, 0.0f, 0x1.5f247cp-86f, 0x1.1e6cbap-68f, 0.0f,
     0.0f, 0x1.4cb752p-99f, 0.0f, 0.0f, 0x1.335feap-62f, 0x1.12844p-8f,
     0x1.28e2cap-12f, 0.0f, 0.0f, 0.0f, 0x1.153a38p-66f, 0.0f, 0x1.f53bcep-116f, 0.0f,
     0x1.7aabaap-118f, 0x1.183488p-121f, 0x1.7ddefp-45f, 0.0f, 0.0f, 0x1.fcfc88p-122f,
     0x1.93d072p-55f, 0x1.a9950cp-51f, 0.0f, 0x1.d187e4p-77f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.281e3p-117f, 0.0f, 0x1.92cb1ap-71f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7e8902p-72f, 0.0f, 0x1.4c7568p-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a0e378p-104f, 0.0f, 0.0f, 0x1.c79f3cp-65f, 0x1.44757p-60f,
     0x1.5c41p-117f, 0x1.513b74p-73f, 0.0f, 0.0f, 0.0f, 0x1.12656ap-42f,
     0x1.e21676p-96f, 0x1.44620ap-11f, 0.0f, 0.0f, 0x1.1e5c1p-22f, 0x1.22a1e6p-119f,
     0x1.79fa94p-95f, 0.0f, 0x1.265cdcp-13f, 0.0f, 0x1.445906p-56f, 0.0f,
     0x1.e236fap-99f, 0.0f, 0.0f, 0.0f, 0x1.855c94p-21f, 0x1.49da76p-18f, 0.0f,
     0x1.dd36c6p-93f, 0x1.e9cc18p-52f, 0x1.4ffa4cp-126f, 0.0f, 0.0f, 0x1.bbd552p-51f,
     0.0f, 0.0f, 0x1.9a6414p-72f, 0.0f, 0x1.7e018cp-114f, 0x1.e26416p-26f,
     0x1.66df54p-98f, 0x1.c6df4ep-70f, 0x1.5aebeep-94f, 0.0f, 0.0f, 0x1.089p-89f,
     0x1.b2f5c2p-31f, 0x1.0ad36ep-61f, 0x1.3d66aep-38f, 0x1.aaed84p-54f,
     0x1.5b6276p-30f, 0x1.d19f5ep-92f, 0x1.fde986p-108f, 0.0f, 0x1.e8fe9p-50f,
     0x1.95caeep-103f, 0x1.81c8dep-52f, 0x1.88b82p-77f, 0x1.8701ep-70f,
     0x1.54d0ecp-23f, 0x1.7a9a0cp-38f, 0x1.8805d8p-45f, 0x1.efdb24p-84f, 0.0f,
     0x1.2ba12ep-5f, 0.0f, 0x1.98d598p-56f, 0x1.a1c1e2p-47f, 0x1.2e9a8ep-117f,
     0x1.17e8cp-26f, 0x1.cc2e12p-51f, 0.0f, 0x1.a7416cp-56f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.43602cp-103f, 0x1.e8784p-123f, 0x1.5cac6p-1f, 0x1.9225b4p-51f,
     0x1.9c34d2p-123f, 0.0f, 0x1.9a6abcp-122f, 0x1.94ad86p-122f, 0.0f,
     0x1.2b5948p-90f, 0.0f, 0x1.cf7b76p-84f, 0.0f, 0.0f, 0x1.e30236p-25f, 0.0f,
     0x1.8c7b2cp-88f, 0x1.105e0ep-53f, 0.0f, 0x1.c7cb02p-8f, 0.0f, 0x1p0f,
     0x1.0882f8p-47f, 0x1.991fp-28f, 0x1.d01614p-99f, 0.0f, 0x1.4b8c0ap-119f, 0.0f,
     0x1.f36e8p-104f, 0.0f, 0x1.aa187cp-65f, 0.0f, 0.0f, 0x1.3e7f46p-71f, 0.0f, 0.0f,
     0x1.945564p-67f, 0x1.2538aep-40f, 0.0f, 0.0f, 0x1.28da84p-10f, 0x1.1ae816p-111f,
     0x1.26c724p-69f, 0x1.6632dap-102f, 0.0f, 0x1.ce3446p-126f, 0.0f, 0.0f,
     0x1.4e0fb6p-33f, 0.0f, 0x1.9cff38p-96f, 0.0f, 0.0f, 0x1.33f17p-111f,
     0x1.735ee8p-24f, 0.0f, 0.0f, 0.0f, 0x1.b7dcdp-12f, 0x1.246e02p-34f,
     0x1.bc56cep-3f, 0.0f, 0x1.8c1388p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e3063p-44f, 0x1.6e0e5cp-92f, 0.0f, 0.0f, 0x1.dee16ep-54f, 0.0f, 0.0f,
     0x1.10263p-59f, 0x1.030aecp-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.11bdf6p-17f,
     0x1.48c092p-57f, 0x1.93c4bep-97f, 0.0f, 0.0f
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
            tmp1 = Sleef_lgammaf1_u10purecfma(tmp0);
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
    printf("Sleef_lgammaf1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_lgammaf1_u10purecfma bench acc %a\n", global_bench_acc);
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
