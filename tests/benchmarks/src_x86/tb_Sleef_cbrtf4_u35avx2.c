/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_cbrtf4_u35avx2128.c --function Sleef_cbrtf4_u35avx2128 \
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
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2147c8p-13f, 0.0f, 0.0f, 0.0f, 0x1.5a909p-97f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b5aaacp-95f, 0x1.bf2c84p-75f,
     0x1.b82ca4p-114f, 0.0f, 0.0f, 0x1.0baf6cp-25f, 0.0f, 0.0f, 0x1.c987b2p-95f,
     0x1.7f51d8p-47f, 0x1.b3f34ep-125f, 0x1.39ca36p-101f, 0x1.51fcf6p-36f,
     0x1.55bb08p-30f, 0.0f, 0.0f, 0.0f, 0x1.2aa9b6p-52f, 0.0f, 0x1.cf852cp-112f, 0.0f,
     0.0f, 0x1.0911dep-62f, 0.0f, 0x1.306b6ap-26f, 0.0f, 0x1.0f2e68p-122f,
     0x1.409826p-38f, 0.0f, 0x1.666bb8p-59f, 0.0f, 0x1.b7ed88p-71f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ac2c58p-36f, 0.0f, 0x1.ae2124p-109f, 0x1.0682e6p-117f,
     0x1.c5f284p-31f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.197fc2p-95f, 0.0f, 0.0f,
     0.0f, 0x1.979c8p-112f, 0.0f, 0x1.acf1f6p-122f, 0x1.08279p-24f, 0x1.052c28p-35f,
     0x1.78971ap-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ab42cap-43f, 0x1.c0a2a2p-98f,
     0x1.59801ep-60f, 0x1.395f5p-59f, 0x1.3e5d28p-53f, 0x1.93b536p-90f,
     0x1.22eff8p-58f, 0.0f, 0x1.bd5d94p-42f, 0x1.f9a42p-124f, 0.0f, 0x1.7be7b6p-67f,
     0x1.1dd966p-15f, 0x1p0f, 0x1.3472cap-61f, 0.0f, 0.0f, 0x1.ac3336p-81f, 0.0f,
     0x1.38127ep-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4ba3bp-60f, 0.0f, 0.0f,
     0x1.d7820cp-9f, 0x1.c7ca42p-6f, 0.0f, 0x1.ce703ep-109f, 0.0f, 0x1.224046p-61f,
     0.0f, 0x1.29eca8p-97f, 0x1.3c2564p-25f, 0.0f, 0.0f, 0.0f, 0x1.cf734cp-36f,
     0x1.cece7cp-97f, 0.0f, 0.0f, 0.0f, 0x1.98833ap-47f, 0x1.5ded68p-25f,
     0x1.0e19fep-46f, 0x1.8a7458p-96f, 0x1.2ed404p-28f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.91cb88p-28f, 0.0f, 0.0f, 0x1.6ea3fcp-84f, 0x1.ea8ae6p-17f, 0x1.d684eep-15f,
     0.0f, 0.0f, 0x1.c185ccp-81f, 0x1.fb89c4p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.63027ap-76f, 0.0f, 0x1.5af6bp-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4fb894p-111f, 0.0f, 0.0f, 0x1.7603ecp-3f, 0x1.644f5ep-40f, 0x1.f889c2p-33f,
     0.0f, 0.0f, 0.0f, 0x1.5de5fep-1f, 0.0f, 0x1.735a2ap-60f, 0x1.c0391ap-114f,
     0x1.addcfap-121f, 0x1.638718p-22f, 0x1.7703f8p-71f, 0x1.6b402ap-51f,
     0x1.4fa89cp-50f, 0.0f, 0x1.641d68p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.43e21ep-10f, 0x1.dc4878p-20f, 0.0f, 0.0f, 0x1.96b782p-62f, 0.0f,
     0x1.cfd6ccp-19f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.d7a8d8p-18f, 0.0f, 0x1.ab9f3ap-1f,
     0.0f, 0x1.1d718ap-45f, 0.0f, 0.0f, 0x1.6b264cp-118f, 0x1.d1a3bp-1f, 0.0f, 0.0f,
     0x1.25bfc6p-60f, 0.0f, 0x1.3167bep-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f36996p-15f, 0.0f, 0.0f, 0x1.89c2c6p-22f, 0.0f, 0x1.8d0de2p-82f,
     0x1.4fd4cap-110f, 0x1.c3daaep-123f, 0x1.d8a588p-37f, 0.0f, 0.0f, 0.0f,
     0x1.88b0ap-93f, 0x1.fd86c8p-108f, 0.0f, 0.0f, 0.0f, 0x1.47eaccp-86f,
     0x1.a97c04p-58f, 0.0f, 0.0f, 0x1.f262f2p-54f, 0x1.66517cp-25f, 0x1.c91abep-40f,
     0x1.19edd8p-69f, 0x1.cc56b6p-114f, 0.0f, 0.0f, 0.0f, 0x1.45ee66p-48f, 0.0f, 0.0f,
     0.0f, 0x1.6a79a2p-24f, 0.0f, 0x1.110244p-122f, 0.0f, 0x1.2e6ecep-38f,
     0x1.c9bfe2p-110f, 0.0f, 0.0f, 0x1.5fe32cp-94f, 0.0f, 0.0f, 0x1.6e2ffcp-88f,
     0x1.681afap-72f, 0.0f, 0.0f, 0.0f, 0x1.221e6ep-48f, 0x1.0b4f1cp-92f,
     0x1.4f465p-27f, 0.0f, 0.0f, 0.0f, 0x1.572932p-65f, 0.0f, 0x1.a2737p-83f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.2a6d34p-126f, 0x1.0d9e58p-78f, 0x1.96d68ap-24f,
     0x1.1979bap-77f, 0x1.08cfb8p-56f, 0x1.769d0cp-88f, 0.0f, 0.0f, 0.0f,
     0x1.4aaa8ap-52f, 0x1.f3128ap-24f, 0.0f, 0.0f, 0.0f, 0x1.2568e6p-115f, 0.0f,
     0x1.c3cfdp-57f, 0.0f, 0.0f, 0.0f, 0x1.801f74p-123f, 0.0f, 0.0f, 0x1.36120ep-41f,
     0.0f, 0.0f, 0x1.abd6bp-82f, 0.0f, 0.0f, 0.0f, 0x1.668cbcp-42f, 0x1.7f1e24p-107f,
     0.0f, 0.0f, 0x1.437674p-63f, 0x1.6ce22ep-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e9a3bep-17f, 0.0f, 0x1.949d0ap-30f, 0.0f, 0x1.f94114p-101f, 0.0f, 0.0f,
     0x1.b03f6ep-20f, 0x1.b650fcp-84f, 0x1.92f4c8p-25f, 0x1.8514d6p-37f, 0.0f, 0.0f,
     0x1.635d0ep-40f, 0.0f, 0.0f, 0x1.9cc476p-3f, 0.0f, 0x1.a27a0ep-64f, 0.0f,
     0x1.532306p-5f, 0x1.e0d42cp-113f, 0x1.aba49cp-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.48785ep-28f, 0.0f, 0.0f, 0.0f, 0x1.78c30ep-56f, 0.0f, 0x1.2089aep-113f,
     0x1.825e6cp-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e1fb58p-103f, 0x1.dd9ce2p-121f,
     0.0f, 0x1.17a7bcp-100f, 0.0f, 0x1.5c80cep-89f, 0.0f, 0x1.5be1eap-30f,
     0x1.a8fb7ap-38f, 0.0f, 0.0f, 0x1.270606p-94f, 0x1.f433dep-92f, 0.0f,
     0x1.bddccap-12f, 0x1.476e6cp-67f, 0x1.372b34p-36f, 0x1.657e8ap-98f,
     0x1.767758p-101f, 0.0f, 0x1.a9ded6p-29f, 0.0f, 0.0f, 0x1.5064b4p-43f, 0.0f, 0.0f,
     0.0f, 0x1.e55e2ap-21f, 0.0f, 0x1.f9ba62p-124f, 0x1.21f57ep-103f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.fe8cb2p-97f, 0x1.5966ecp-124f, 0.0f, 0x1.a78b2ap-10f,
     0x1.adc818p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dc33d2p-42f, 0.0f, 0.0f, 0.0f,
     0x1.697c56p-3f, 0.0f, 0x1.9b0648p-75f, 0x1.03779p-84f, 0.0f, 0.0f,
     0x1.17cb66p-99f, 0.0f, 0x1.052f54p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ab62ecp-94f, 0.0f, 0.0f, 0.0f, 0x1.a20e1ep-84f, 0.0f, 0x1.978e1ep-125f, 0.0f,
     0.0f, 0x1.6710c8p-1f, 0.0f, 0x1.d0c902p-4f, 0x1.67b0ep-27f, 0.0f,
     0x1.d57e7ap-80f, 0x1.dc91bap-98f, 0x1.75d004p-50f, 0.0f, 0x1.72dd22p-39f,
     0x1.5cc32ap-2f, 0.0f, 0x1.7d91cep-42f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.e8649p-85f,
     0.0f, 0x1.8a5b14p-99f, 0x1.277908p-95f, 0.0f, 0x1.b967fcp-44f, 0.0f,
     0x1.87adb2p-96f, 0.0f, 0.0f, 0.0f, 0x1.30183ap-113f, 0x1.256ffp-69f, 0.0f,
     0x1.89180ep-16f, 0.0f, 0.0f, 0x1.c5cf52p-39f, 0x1.0525b2p-113f, 0x1.6c1f2p-91f,
     0.0f, 0.0f, 0x1.205f48p-12f, 0x1.e35ea2p-119f, 0.0f, 0x1.42ed7ep-110f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b9bd3p-125f, 0.0f, 0.0f,
     0x1.4d42bap-117f, 0x1.a38976p-85f, 0.0f, 0.0f, 0x1.5fa49cp-99f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.4c5e46p-108f, 0x1.c437b6p-65f, 0x1.cff594p-85f, 0x1.e591f6p-51f,
     0x1.6b9316p-46f, 0.0f, 0.0f, 0.0f, 0x1.526274p-104f, 0x1.732e0ap-57f, 0.0f,
     0x1.b6127p-89f, 0.0f, 0x1.03b1d2p-119f, 0.0f, 0x1.a2f89ep-33f, 0.0f,
     0x1.fdf58p-25f, 0.0f, 0x1.320c9ep-67f, 0.0f, 0x1.d5510ap-88f, 0.0f,
     0x1.dda0e2p-46f, 0x1.9ac798p-51f, 0.0f, 0x1.d812d6p-57f, 0.0f, 0x1p0f,
     0x1.f5ff92p-85f, 0.0f, 0.0f, 0x1.40675cp-16f, 0.0f, 0.0f, 0x1.f9eba2p-21f, 0.0f,
     0x1.dac06ep-70f, 0.0f, 0.0f, 0x1.470a5ap-124f, 0x1.5ff022p-106f, 0x1.b845dp-116f,
     0x1.f98998p-116f, 0x1.be48eap-50f, 0x1.cc591ep-2f, 0.0f, 0.0f, 0x1.c136bep-110f,
     0x1.0fcd4cp-117f, 0x1.f30a08p-68f, 0x1.465e78p-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.16eb02p-28f, 0.0f, 0x1.bcfae4p-74f, 0x1.fa5cd8p-25f, 0.0f, 0x1.c850e8p-121f,
     0x1.ae3a8ep-7f, 0x1.2a8aecp-70f, 0x1.3adfap-62f, 0x1.985dbep-85f, 0x1p0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.09ea2cp-86f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b9ae8cp-5f, 0x1.9ceffep-77f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8a2edcp-100f, 0x1.ba8a1ep-3f, 0.0f, 0.0f,
     0x1.f39d12p-118f, 0.0f, 0x1.2b7534p-58f, 0.0f, 0x1.489f3cp-49f, 0x1.0e2ffap-92f,
     0.0f, 0x1.0e7356p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c7bbf8p-50f, 0.0f, 0.0f,
     0x1.4ea07ep-40f, 0x1.a520ep-37f, 0.0f, 0x1.7257fap-125f, 0.0f, 0x1.95ee34p-22f,
     0.0f, 0x1.d3e746p-21f, 0x1.2e2df6p-62f, 0x1.74f5b2p-108f, 0.0f, 0x1.0290e6p-98f,
     0x1.28692cp-66f, 0.0f, 0x1.924314p-102f, 0x1.be5de6p-83f, 0x1.7e641p-53f, 0.0f,
     0x1.12d9c4p-119f, 0x1.608722p-109f, 0x1.593f24p-91f, 0x1.77c8bp-23f, 0.0f,
     0x1.915f4ap-64f, 0.0f, 0x1.8c8bdep-23f, 0x1.ef8794p-34f, 0x1.d6c84ep-71f,
     0x1.5b01c4p-90f, 0x1.483358p-81f, 0x1.fecac8p-57f, 0x1.e5b6a8p-37f,
     0x1.a09b6ep-5f, 0.0f, 0.0f, 0.0f, 0x1.21e2fap-60f, 0.0f, 0.0f, 0.0f,
     0x1.6f3806p-28f, 0x1.8e8d6p-14f, 0.0f, 0.0f, 0x1.df3096p-111f, 0.0f,
     0x1.8dd85ap-22f, 0x1.8cd336p-70f, 0.0f, 0.0f, 0x1.a54878p-108f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.30958ap-64f, 0x1.f609p-98f, 0.0f, 0.0f, 0x1.173c3ap-79f,
     0x1.d0ab82p-68f, 0x1.8ff418p-63f, 0.0f, 0.0f, 0.0f, 0x1.bcff0ap-39f,
     0x1.c4ac96p-20f, 0.0f, 0x1.4c46a4p-15f, 0x1.9c1272p-75f, 0.0f, 0x1.369358p-30f,
     0.0f, 0.0f, 0.0f, 0x1.2e61f8p-43f, 0.0f, 0x1.426514p-111f, 0.0f,
     0x1.c35844p-118f, 0x1.ed363ap-55f, 0x1.7a7ef4p-95f, 0x1.ed6774p-48f, 0.0f,
     0x1.2ce01p-38f, 0x1.08addap-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.627898p-4f, 0.0f, 0x1.f880fcp-112f, 0.0f, 0.0f, 0.0f, 0x1.ef1294p-38f, 0.0f,
     0x1.571fdap-51f, 0.0f, 0.0f, 0x1.ebbf36p-39f, 0.0f, 0x1.9a48f6p-94f, 0.0f,
     0x1.8415c2p-23f, 0x1.3f5df8p-10f, 0.0f, 0.0f, 0x1.fc2958p-108f, 0x1.638a5cp-6f,
     0x1.4a5654p-60f, 0x1.7f2cb4p-34f, 0x1.8dfffep-121f, 0.0f, 0x1.8ad70cp-80f,
     0x1.87ce14p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0633aep-70f, 0x1.1e06a6p-50f,
     0x1.0cd092p-94f, 0.0f, 0x1.0e4738p-117f, 0x1.a36f64p-20f, 0x1.12bfc8p-88f, 0.0f,
     0x1.b6f77cp-81f, 0.0f, 0x1.802902p-111f, 0.0f, 0x1.98644ep-24f, 0.0f,
     0x1.aabdccp-14f, 0x1.5700acp-112f, 0.0f, 0x1.425f86p-120f, 0.0f,
     0x1.146ffcp-117f, 0.0f, 0x1.b221b6p-62f, 0.0f, 0x1.62cdb2p-47f, 0.0f,
     0x1.e26d62p-8f, 0.0f, 0.0f, 0x1.527242p-97f, 0.0f, 0.0f, 0x1.bd84d6p-91f,
     0x1.e95432p-39f, 0.0f, 0.0f, 0x1.1a483ep-10f, 0x1.5f4376p-78f, 0x1.34fd66p-8f,
     0.0f, 0x1.526e9cp-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3bf6ccp-68f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.be4f26p-82f, 0x1.3e895p-103f, 0.0f, 0.0f, 0.0f, 0x1.60572ap-36f, 0.0f,
     0.0f, 0x1.c45628p-26f, 0.0f, 0x1.31259ap-33f, 0x1.e67fbp-12f, 0.0f, 0.0f, 0.0f,
     0x1.7fb0bcp-9f, 0.0f, 0.0f, 0x1.7d9238p-36f, 0.0f, 0x1.f567fcp-50f, 0.0f, 0.0f,
     0x1.16651cp-65f, 0x1.e11d88p-51f, 0x1.209494p-35f, 0x1.7132c2p-123f,
     0x1.a39ffp-120f, 0x1.0ed45cp-29f, 0.0f, 0x1.f6355ap-61f, 0x1.9c06cep-37f,
     0x1.130912p-63f, 0x1.51efbap-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c9e8d2p-15f, 0x1.036deep-17f, 0x1.070c3ep-102f, 0.0f, 0.0f,
     0x1.7da5dap-42f, 0x1.a366ecp-97f, 0x1.3db382p-30f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.549958p-90f, 0.0f, 0x1.61a61ep-47f, 0x1.30299ep-63f, 0x1.80ea36p-4f, 0.0f,
     0.0f, 0.0f, 0x1.8539c6p-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2b63fcp-39f,
     0.0f, 0x1.8b9c9cp-79f, 0x1.b3a91ep-45f, 0x1.24cd5ap-42f, 0x1.48cc62p-3f,
     0x1.c77c8cp-86f, 0x1.c55b5ap-68f, 0.0f, 0x1.f36184p-63f, 0.0f, 0x1.c4de98p-45f,
     0.0f, 0.0f, 0x1.bae794p-102f, 0x1.d92892p-77f, 0.0f, 0.0f, 0x1.df27e8p-90f,
     0x1.1f4096p-101f, 0.0f, 0.0f, 0.0f, 0x1.b3e40cp-73f, 0x1.8696f2p-105f, 0.0f,
     0.0f, 0x1.135376p-9f, 0x1.6dd98ep-27f, 0.0f, 0x1.befc3ap-33f, 0x1.05eea8p-85f,
     0x1.dbcb32p-99f, 0x1.006138p-50f, 0.0f, 0x1.003592p-121f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.99e99cp-77f, 0.0f, 0x1.a3531cp-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.593ffap-6f,
     0.0f, 0x1.628592p-66f, 0x1.fc36f6p-51f, 0.0f, 0.0f, 0x1.b5b446p-39f, 0.0f, 0.0f,
     0.0f, 0x1.635cd4p-66f, 0x1.cb9aa6p-81f, 0.0f, 0x1.5b589ep-117f, 0.0f, 0.0f,
     0x1.825b7cp-80f, 0x1.911058p-11f, 0.0f, 0x1.d846e8p-53f, 0x1.e5d24ep-93f,
     0x1.d5d7a8p-103f, 0x1.f79bc4p-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2cc746p-41f, 0x1.ec7b76p-28f, 0.0f, 0x1.237b68p-101f, 0.0f, 0.0f, 0.0f,
     0x1.fef06p-3f, 0.0f, 0.0f, 0.0f, 0x1.af0b82p-78f, 0x1.3dd212p-36f, 0.0f,
     0x1.97a624p-92f, 0.0f, 0x1.e6b41p-79f, 0x1.d6b96cp-43f, 0.0f, 0.0f,
     0x1.be6366p-20f, 0x1.7ac1a8p-66f, 0x1.4d95a8p-110f, 0.0f, 0.0f, 0x1.1ed23ap-112f,
     0x1.0020fep-75f, 0x1.a6dc1ap-109f, 0.0f, 0x1.4aa5b4p-123f, 0.0f, 0.0f,
     0x1.79c532p-21f, 0x1.a9fb5ap-13f, 0.0f, 0x1.35f3b4p-53f, 0x1.92d9b4p-108f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.03a142p-124f, 0x1.bf1b4p-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.29b044p-44f, 0.0f, 0x1.2eb5aep-48f, 0x1.e8095cp-91f, 0.0f, 0x1.feebaep-110f,
     0x1.2d2626p-84f, 0x1.c9f17ap-19f, 0x1.95583ap-6f, 0x1.2e7b0ap-98f, 0.0f,
     0x1.ca6d1p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2b3eecp-114f, 0.0f, 0.0f,
     0x1.b148eep-53f, 0x1.814d54p-71f, 0x1.8eaac2p-51f, 0.0f, 0.0f, 0.0f,
     0x1.9cd482p-70f, 0.0f, 0.0f, 0x1.af25dep-15f, 0x1p0f
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
            tmp1 = Sleef_cbrtf4_u35avx2128(tmp0);
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
    printf("Sleef_cbrtf4_u35avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_cbrtf4_u35avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
