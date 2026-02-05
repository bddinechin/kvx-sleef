/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_exp2f1_u35purecfma.c --function \
 *     Sleef_finz_exp2f1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0.0f, 0x1.8f78a2p-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.af8ec2p-71f, 0.0f,
     0x1.ea925ep-92f, 0x1.9ddffp-121f, 0.0f, 0x1.ed96ccp-87f, 0x1.c8d6f6p-74f,
     0x1.28c5d8p-51f, 0x1.ae404ap-126f, 0x1.abd5p-102f, 0.0f, 0.0f, 0.0f,
     0x1.6f9b2ap-109f, 0.0f, 0.0f, 0.0f, 0x1.a4bd34p-67f, 0.0f, 0x1.cfa3bcp-94f, 0.0f,
     0x1.be1178p-111f, 0x1.802192p-7f, 0x1.cf22ecp-23f, 0x1.8b16eap-46f, 0.0f, 0.0f,
     0x1.627cep-99f, 0.0f, 0.0f, 0x1.4d1976p-50f, 0.0f, 0x1.995afcp-88f,
     0x1.055f08p-36f, 0x1.e82306p-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b63724p-70f, 0x1.dc5b08p-23f, 0.0f, 0.0f, 0x1.18760cp-103f, 0.0f,
     0x1.72876ap-4f, 0x1.22f6dp-34f, 0x1.283438p-78f, 0.0f, 0x1.45d2b8p-72f,
     0x1.7f5feep-42f, 0.0f, 0x1.f1f3c4p-21f, 0.0f, 0.0f, 0x1.23864cp-56f, 0.0f,
     0x1.d1a55ap-70f, 0.0f, 0x1.3526dp-106f, 0x1.14b9bap-45f, 0.0f, 0x1.aeb30ap-64f,
     0.0f, 0x1.2515fp-13f, 0x1.fd1f5ap-56f, 0x1.003236p-80f, 0x1.369892p-49f,
     0x1.4b45e4p-104f, 0.0f, 0x1.ec279ap-22f, 0x1.e3897p-73f, 0.0f, 0x1.dfa4e2p-41f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0e1db8p-94f, 0x1.52e13ep-59f, 0.0f,
     0x1.2305e4p-114f, 0.0f, 0x1.8e50eep-18f, 0.0f, 0x1.fa1e4ep-5f, 0x1.0d61a4p-76f,
     0x1.4c77d6p-2f, 0x1.d605a6p-64f, 0x1.575d1ap-45f, 0.0f, 0.0f, 0x1.0218b6p-102f,
     0x1.d800dap-76f, 0x1.6deeb4p-31f, 0x1.e55fbep-72f, 0x1.1845d8p-104f, 0.0f,
     0x1.d06d4ep-71f, 0.0f, 0x1.35db62p-20f, 0.0f, 0.0f, 0.0f, 0x1.3bb2ap-68f, 0.0f,
     0x1.b6f18p-101f, 0x1.24dc44p-73f, 0.0f, 0x1.830bacp-41f, 0x1.478908p-119f, 0.0f,
     0.0f, 0x1.c00272p-68f, 0x1.6cce14p-27f, 0.0f, 0.0f, 0x1.d9b01cp-116f,
     0x1.acf87ap-86f, 0.0f, 0.0f, 0.0f, 0x1.f6a122p-69f, 0.0f, 0x1.083c94p-41f, 0.0f,
     0x1.76297ep-16f, 0x1.d8e01cp-58f, 0x1.e3e8cap-121f, 0.0f, 0.0f, 0x1.375fa4p-6f,
     0x1.b684f6p-121f, 0.0f, 0.0f, 0.0f, 0x1.4e3502p-24f, 0x1.04e13ep-39f, 0.0f, 0.0f,
     0x1.bf1ed6p-105f, 0.0f, 0x1.4d772ap-19f, 0x1.2e9af8p-88f, 0x1.d591e6p-71f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.540f26p-100f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.fe6dfp-21f, 0.0f, 0.0f, 0x1.7db708p-111f, 0x1.76a248p-38f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0391bcp-126f, 0x1.35f24cp-47f, 0x1.cdd6cp-46f,
     0x1.76e988p-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.df0d5ap-46f, 0.0f, 0x1.ec4deap-84f,
     0x1.a8655cp-66f, 0x1.e7da14p-74f, 0.0f, 0x1.fc796ep-40f, 0.0f, 0x1.29d514p-105f,
     0x1.ec619ep-5f, 0.0f, 0x1.b9d79p-22f, 0.0f, 0.0f, 0x1.e719cap-118f,
     0x1.a25a8p-59f, 0x1.de33d4p-123f, 0.0f, 0x1.3fdce8p-40f, 0.0f, 0x1.4f013cp-29f,
     0.0f, 0.0f, 0x1.23d1fp-19f, 0.0f, 0.0f, 0x1.d77dd6p-43f, 0.0f, 0.0f, 0.0f,
     0x1.051b06p-64f, 0.0f, 0x1.b8c0f8p-23f, 0.0f, 0x1.4339d4p-58f, 0.0f,
     0x1.369c82p-100f, 0.0f, 0.0f, 0x1.828c98p-39f, 0.0f, 0.0f, 0x1.7159bap-120f,
     0x1.c1344p-96f, 0x1.255a82p-62f, 0.0f, 0.0f, 0.0f, 0x1.934bcep-54f, 0.0f,
     0x1.8f91ecp-57f, 0.0f, 0x1.4ccdd2p-14f, 0.0f, 0x1.b59bep-95f, 0x1.9b0088p-113f,
     0.0f, 0x1.c0cb52p-108f, 0x1.8024f6p-7f, 0x1.d4d7d8p-26f, 0x1.a4d074p-48f, 0.0f,
     0x1.b71aa4p-62f, 0x1.a2d076p-3f, 0x1.af59b4p-77f, 0.0f, 0x1.d31fd6p-75f,
     0x1.a477aap-52f, 0x1.e6ee4ep-108f, 0x1.17297ep-10f, 0.0f, 0.0f, 0x1.5dd434p-56f,
     0.0f, 0.0f, 0x1.e935acp-18f, 0x1.7b555cp-56f, 0.0f, 0.0f, 0x1.a4e45p-67f,
     0x1.d80724p-89f, 0.0f, 0x1.737be4p-26f, 0.0f, 0x1.3a0c2p-13f, 0x1.26aba6p-85f,
     0.0f, 0x1.36979ap-1f, 0.0f, 0x1.0fc5c4p-105f, 0x1.254456p-56f, 0.0f,
     0x1.48daf8p-99f, 0x1.0d32e8p-47f, 0.0f, 0.0f, 0x1.f9118ep-3f, 0x1.885ep-34f,
     0x1.ca0bfcp-55f, 0x1.62d3d4p-79f, 0x1.5df32ap-5f, 0x1.c09992p-48f,
     0x1.8ae5bcp-98f, 0x1.1e53a4p-41f, 0.0f, 0x1.352572p-57f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.76ccap-1f, 0.0f, 0.0f, 0.0f, 0x1.2e941p-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.325f84p-14f, 0.0f, 0x1.1cc052p-2f, 0x1.a62192p-66f, 0.0f, 0.0f,
     0x1.d5d7bcp-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b5288p-1f, 0x1.fc6138p-72f,
     0.0f, 0x1.a1f8c2p-39f, 0.0f, 0x1.84140ep-58f, 0.0f, 0x1.8c3624p-91f, 0.0f,
     0x1.287878p-14f, 0.0f, 0.0f, 0.0f, 0x1.a060eap-36f, 0x1.0949ccp-60f,
     0x1.f1d144p-55f, 0x1.b67dfep-71f, 0.0f, 0x1.2b3c0cp-1f, 0x1.d80cp-11f,
     0x1.ef2fbp-93f, 0.0f, 0.0f, 0x1.aac5b4p-11f, 0.0f, 0.0f, 0x1.d2cf08p-108f,
     0x1.0d70fp-33f, 0x1.3ce57cp-31f, 0.0f, 0.0f, 0.0f, 0x1.66f676p-118f,
     0x1.77d3b8p-99f, 0x1.db797ap-107f, 0.0f, 0x1.953814p-59f, 0.0f, 0.0f,
     0x1.de1ca2p-78f, 0.0f, 0.0f, 0x1.78e64cp-116f, 0x1.299b82p-68f, 0.0f, 0.0f,
     0x1.a8c8acp-16f, 0x1.cc9cb8p-107f, 0x1.855234p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b96322p-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0ea00ep-26f, 0.0f,
     0x1.fe730ep-101f, 0x1.8dd60ep-119f, 0.0f, 0.0f, 0.0f, 0x1.e76eecp-71f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7fc296p-41f, 0.0f, 0x1.dfecb8p-38f, 0x1.cf3e88p-43f,
     0x1.a98822p-18f, 0.0f, 0x1.e7c47cp-2f, 0.0f, 0x1.8d695ap-75f, 0x1.4eea18p-112f,
     0.0f, 0.0f, 0x1.d265fep-7f, 0x1.e1b36ep-97f, 0x1.ab0f3cp-16f, 0x1.456f84p-97f,
     0x1.405456p-110f, 0x1.50befp-25f, 0x1.3d7ddcp-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.33fec4p-68f, 0x1.069c16p-89f, 0.0f, 0.0f, 0x1.562bep-3f, 0x1.d2502ap-105f,
     0.0f, 0x1.81745p-25f, 0.0f, 0x1.0d9904p-10f, 0.0f, 0x1.93bb0ap-82f,
     0x1.2072b2p-68f, 0.0f, 0.0f, 0.0f, 0x1.df49e6p-30f, 0.0f, 0x1.1d19aep-16f, 0.0f,
     0.0f, 0x1.3dae38p-26f, 0x1.6e8f6ep-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fa49c4p-98f, 0.0f, 0.0f, 0x1.4e6p-120f, 0x1.8efa0ap-55f, 0x1.68ac56p-77f,
     0.0f, 0.0f, 0x1.860574p-76f, 0.0f, 0.0f, 0x1.e1016ap-15f, 0.0f, 0.0f,
     0x1.f48ab2p-87f, 0.0f, 0.0f, 0x1.ebe77ap-116f, 0.0f, 0x1.aceeacp-56f, 0.0f,
     0x1.eb6312p-7f, 0x1.d5ab22p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.20d9c8p-71f, 0.0f,
     0.0f, 0x1.0d35fep-21f, 0.0f, 0.0f, 0.0f, 0x1.3e653ap-32f, 0x1.f344a6p-44f, 0.0f,
     0x1.f7f32ep-70f, 0x1.c9c13cp-126f, 0x1.b09fap-53f, 0.0f, 0.0f, 0x1.8ddc12p-16f,
     0.0f, 0x1.3f0ebcp-46f, 0x1.9f170ap-16f, 0x1.b14da6p-59f, 0x1.ae727p-84f,
     0x1.763e1cp-123f, 0.0f, 0x1.bddf56p-7f, 0.0f, 0.0f, 0.0f, 0x1.d2c004p-36f, 0.0f,
     0.0f, 0.0f, 0x1.1328a4p-65f, 0.0f, 0x1.0a25bap-126f, 0.0f, 0x1.2e50dep-82f,
     0x1.47a612p-2f, 0x1.0ae6b2p-11f, 0x1.e414f6p-101f, 0.0f, 0x1.e2c212p-99f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.021304p-45f, 0x1.5e70acp-114f, 0.0f, 0x1.e6acep-34f, 0.0f,
     0x1.2eaf74p-98f, 0x1.876efp-7f, 0.0f, 0x1.651468p-98f, 0.0f, 0.0f,
     0x1.0deaeep-61f, 0.0f, 0.0f, 0x1.d5f362p-40f, 0.0f, 0.0f, 0x1.17aab2p-73f, 0.0f,
     0.0f, 0x1.6ea252p-83f, 0.0f, 0.0f, 0x1.e7c5f2p-25f, 0x1.7d757ep-34f,
     0x1.f3db12p-29f, 0x1.3b93d6p-44f, 0.0f, 0x1.8c46e4p-58f, 0x1.d75362p-85f, 0.0f,
     0.0f, 0.0f, 0x1.6141a4p-36f, 0x1.044e96p-118f, 0x1.a3b946p-115f, 0x1.d5c2eap-79f,
     0x1.f1b11p-88f, 0x1.b7c736p-62f, 0.0f, 0x1.80d6p-9f, 0.0f, 0x1.adf228p-10f, 0.0f,
     0x1.99a894p-69f, 0x1.b27892p-120f, 0x1.1dfdd8p-70f, 0.0f, 0x1.9b75ecp-123f,
     0x1.2e8366p-39f, 0x1.370fc6p-100f, 0x1.2bd774p-97f, 0.0f, 0x1.3421b2p-66f,
     0x1.7fe638p-84f, 0.0f, 0x1.2b76f2p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a9de7p-15f, 0x1.f4fce8p-12f, 0.0f, 0x1.8bac2cp-13f, 0x1.ffc45ap-49f,
     0x1.c83cdep-47f, 0x1.4b6912p-6f, 0.0f, 0x1.943e56p-119f, 0.0f, 0x1.9e8102p-75f,
     0.0f, 0x1.0ae148p-102f, 0x1.abfac2p-105f, 0x1.1feb98p-89f, 0x1.76308p-114f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6f931cp-103f, 0.0f, 0x1.2a64ap-111f,
     0.0f, 0x1.a456fcp-120f, 0.0f, 0.0f, 0.0f, 0x1.ae6558p-11f, 0x1.ce45c4p-33f, 0.0f,
     0x1.afffaap-58f, 0.0f, 0x1.751afap-72f, 0x1.6e7f7ep-103f, 0.0f, 0x1.899cd4p-94f,
     0x1.87836p-36f, 0.0f, 0.0f, 0x1.af0544p-60f, 0x1.d21132p-117f, 0.0f, 0.0f,
     0x1.fa395p-7f, 0.0f, 0.0f, 0x1.9cd47p-84f, 0x1.afd08ap-37f, 0.0f, 0.0f, 0.0f,
     0x1.1577f8p-68f, 0x1.b5d534p-100f, 0x1.09de62p-71f, 0.0f, 0.0f, 0x1.d8933ap-14f,
     0x1.e122dap-14f, 0x1.d0964p-42f, 0.0f, 0x1.9bd066p-35f, 0.0f, 0x1.3326dcp-53f,
     0x1.11994ap-95f, 0x1.0ce91p-43f, 0x1.1ea74ap-17f, 0.0f, 0x1.3d3aacp-77f,
     0x1.55376ap-103f, 0.0f, 0x1.fcfd6ep-53f, 0x1.95640ap-87f, 0x1.ca024cp-22f, 0.0f,
     0x1.fbe01cp-22f, 0.0f, 0x1.09b8f8p-43f, 0.0f, 0.0f, 0x1.cda818p-36f, 0.0f, 0.0f,
     0x1.f61e76p-84f, 0x1.385c94p-54f, 0x1.c607f4p-37f, 0x1.d1c8eep-109f, 0.0f,
     0x1.3bf708p-12f, 0x1.521e14p-20f, 0x1.fbc162p-70f, 0x1.6bd44p-59f, 0.0f, 0.0f,
     0x1.6eb276p-41f, 0.0f, 0x1.ff45dcp-109f, 0x1.ed86fcp-99f, 0x1.15b69ep-91f, 0.0f,
     0.0f, 0x1.fb66f6p-15f, 0.0f, 0x1.b5ae58p-17f, 0x1.90fb2p-98f, 0.0f,
     0x1.4679bep-87f, 0.0f, 0x1.c94506p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fd214p-19f, 0.0f, 0.0f, 0.0f, 0x1.383d16p-81f, 0x1.9c7c2ep-16f,
     0x1.aad48p-6f, 0.0f, 0x1.8112d8p-88f, 0.0f, 0.0f, 0x1.2c2e4ap-8f,
     0x1.e16e8cp-58f, 0x1.bc92fep-115f, 0.0f, 0x1.fc1fdp-90f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1fbf58p-7f, 0x1.7c9b9p-107f, 0.0f, 0x1.ea443cp-14f,
     0x1.627402p-104f, 0.0f, 0x1.534138p-112f, 0x1.47d3fcp-123f, 0.0f, 0.0f,
     0x1.deec72p-37f, 0.0f, 0.0f, 0x1.d489aep-65f, 0.0f, 0.0f, 0x1.3d3c0ep-19f,
     0x1.a1023cp-23f, 0x1.134176p-97f, 0x1.9e2d68p-11f, 0.0f, 0x1.b37ap-93f,
     0x1.361ed8p-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2a0c24p-112f,
     0x1.ef6b12p-62f, 0.0f, 0.0f, 0x1.b24db4p-43f, 0.0f, 0x1.7d9554p-21f,
     0x1.e97212p-45f, 0.0f, 0x1.c101b6p-36f, 0x1.23f79ap-53f, 0.0f, 0x1.4bf038p-111f,
     0x1.ba95c8p-49f, 0.0f, 0x1.59dca2p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.374b72p-43f, 0.0f, 0.0f, 0x1.ccf67p-35f, 0.0f, 0x1.39f2aep-103f, 0.0f,
     0x1.8d4874p-88f, 0.0f, 0x1.841b34p-117f, 0.0f, 0.0f, 0x1.16307cp-92f, 0.0f, 0.0f,
     0x1.74a576p-44f, 0.0f, 0x1.dfaa7ep-101f, 0.0f, 0.0f, 0x1.dc04d8p-19f,
     0x1.2988f4p-60f, 0.0f, 0x1.bd54acp-124f, 0x1.98f65p-2f, 0x1.374d08p-103f,
     0x1.a7907ep-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c51cf8p-29f, 0.0f,
     0x1.9b7ffep-99f, 0x1.bc8978p-38f, 0.0f, 0x1.53af46p-2f, 0x1.dec06ap-59f, 0.0f,
     0x1.78fc74p-37f, 0x1.823216p-47f, 0x1.0ecb64p-41f, 0x1.8fce6p-49f,
     0x1.041254p-29f, 0x1.7fb41ap-102f, 0.0f, 0x1.683328p-29f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.13ff3cp-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0479cap-66f, 0.0f, 0x1.60a47ap-24f,
     0x1.0b5d4cp-91f, 0x1.35e0e6p-105f, 0.0f, 0x1.91359p-85f, 0.0f, 0.0f, 0.0f,
     0x1.1972d4p-23f, 0x1.16e146p-19f, 0.0f, 0x1.b8428ep-71f, 0x1.f2b96cp-30f, 0.0f,
     0.0f, 0.0f, 0x1.d2982ap-93f, 0.0f, 0.0f, 0.0f, 0x1.9ffd0ap-110f,
     0x1.b73dbap-110f, 0.0f, 0.0f, 0x1.dc285ap-121f, 0.0f, 0x1.b3966p-96f, 0.0f, 0.0f,
     0.0f, 0x1.398ee8p-25f, 0x1.525546p-53f, 0.0f, 0.0f, 0.0f, 0x1.d110d6p-63f,
     0x1.1fdf4ap-70f, 0x1.fbf5ep-88f, 0x1.a94692p-72f, 0.0f, 0.0f, 0.0f,
     0x1.476d58p-61f, 0.0f, 0x1.1eaf3p-89f, 0x1.a6636p-24f, 0.0f, 0.0f,
     0x1.f4cb7p-121f, 0.0f, 0x1.dcdf4ap-8f, 0.0f, 0.0f, 0x1.ec8042p-7f, 0.0f, 0.0f,
     0x1.604ceap-69f, 0x1.773db4p-15f, 0x1.ebb1a2p-45f, 0x1.222376p-31f, 0.0f, 0.0f,
     0.0f, 0x1.94e8ecp-117f, 0.0f, 0x1.7cf2eep-70f, 0.0f, 0.0f, 0.0f, 0x1.6a844p-4f,
     0.0f, 0x1.845fbcp-115f, 0.0f, 0.0f, 0x1.dca69cp-95f, 0x1.960246p-16f,
     0x1.f263cp-62f, 0.0f, 0x1.5e889cp-27f, 0.0f, 0x1.912362p-117f, 0.0f,
     0x1.a0ea76p-90f, 0x1.2026d4p-50f, 0x1.0e40bap-4f, 0x1.3e12dep-99f,
     0x1.73c638p-22f, 0x1.6b0d9ap-19f, 0x1.daf9d2p-90f, 0.0f, 0.0f, 0x1p0f,
     0x1.03b602p-4f, 0.0f, 0.0f, 0.0f, 0x1.3160bp-54f, 0x1.72d384p-25f, 0.0f,
     0x1.1b0202p-25f, 0.0f, 0x1.108c08p-16f, 0.0f, 0x1.3adc56p-85f, 0.0f, 0.0f,
     0x1.7f92fep-103f, 0x1.6f974p-68f, 0x1.9bccfcp-51f, 0.0f, 0x1.1e94bcp-101f, 0.0f,
     0x1.92cbccp-82f, 0x1.32c2ep-40f, 0x1.e5be6ep-36f, 0.0f, 0x1.73df36p-117f,
     0x1.ec19d4p-56f, 0.0f, 0x1.eade82p-90f, 0.0f, 0x1.f59c2ep-43f, 0.0f,
     0x1.324178p-108f, 0.0f, 0.0f, 0x1.717ef2p-31f, 0x1.f79f7ep-107f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1bfabap-9f, 0.0f, 0.0f, 0.0f, 0x1.6954cap-93f, 0x1.7ee63p-107f,
     0x1.1fb7b2p-53f, 0.0f, 0x1.4e0cc4p-58f, 0x1.43746ap-56f, 0x1.83bfa6p-71f,
     0x1.716e34p-120f, 0x1.b6ad08p-84f, 0x1.8a965cp-67f, 0x1.4164cp-37f, 0.0f,
     0x1.99bb4cp-32f, 0.0f, 0x1.0bf2ecp-94f, 0.0f, 0.0f, 0.0f, 0x1.ee68ep-17f,
     0x1.11b0f8p-6f, 0x1.deef36p-25f, 0.0f, 0.0f, 0.0f, 0x1.74fc96p-89f, 0.0f,
     0x1.5b95b2p-116f, 0.0f, 0.0f, 0.0f, 0x1.2802a2p-14f, 0.0f, 0.0f, 0x1p0f
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
            tmp1 = Sleef_finz_exp2f1_u35purecfma(tmp0);
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
    printf("Sleef_finz_exp2f1_u35purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_exp2f1_u35purecfma bench acc %a\n", global_bench_acc);
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
