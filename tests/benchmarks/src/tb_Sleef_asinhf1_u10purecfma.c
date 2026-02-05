/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_asinhf1_u10purecfma.c --function \
 *     Sleef_asinhf1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.8a1f58p-48f, 0.0f, 0x1.7172eap-18f, 0.0f, 0x1.c495dap-123f, 0.0f, 0.0f,
     0x1.316e1ep-11f, 0.0f, 0.0f, 0x1.3f749p-48f, 0.0f, 0x1.8e9914p-19f, 0.0f,
     0x1.a98094p-16f, 0.0f, 0x1.fc0cf2p-31f, 0.0f, 0x1.927a16p-69f, 0x1.fa9b88p-32f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.defd36p-33f, 0.0f, 0.0f,
     0x1.3dbdeap-15f, 0.0f, 0.0f, 0.0f, 0x1.063bcp-119f, 0x1.e07b0ep-34f, 0x1p0f,
     0.0f, 0x1.5a7a38p-42f, 0x1.6b0acep-57f, 0x1.643448p-60f, 0.0f, 0x1.5747fep-123f,
     0x1.79ee4ep-91f, 0.0f, 0x1.551474p-123f, 0.0f, 0x1.6d5d4cp-115f, 0x1.b4737ap-77f,
     0x1.805fe2p-41f, 0x1.d4ed9ep-40f, 0x1.52333ep-48f, 0.0f, 0x1.6e483ap-19f, 0.0f,
     0.0f, 0.0f, 0x1.1ab01ap-92f, 0x1.2e05ccp-116f, 0.0f, 0x1.d8b25cp-97f,
     0x1.94eee6p-113f, 0x1.312ef6p-118f, 0.0f, 0.0f, 0x1.3ca6eep-13f, 0x1.a14ebep-5f,
     0x1.c998cap-59f, 0x1.5a32a6p-103f, 0x1.5429f8p-45f, 0x1.310d4cp-82f,
     0x1.20814ap-53f, 0x1.ba0e26p-13f, 0x1.603efep-29f, 0x1.d0c9cp-107f,
     0x1.3a64aap-91f, 0x1.abe68cp-44f, 0x1.3e7ca4p-99f, 0x1.daeaa2p-20f,
     0x1.0bfc22p-121f, 0x1.53f3b2p-120f, 0x1.ba04e2p-22f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1p0f, 0x1.fff324p-19f, 0x1.0e3252p-1f, 0.0f, 0x1.d42dap-84f, 0.0f, 0.0f, 0.0f,
     0x1.7f343cp-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b590ccp-100f, 0x1.808724p-57f, 0x1.7c1554p-103f, 0x1.b7c2fep-62f, 0.0f, 0.0f,
     0x1.91cf48p-94f, 0.0f, 0x1.e078b2p-112f, 0x1.2b4866p-72f, 0x1.77c354p-51f,
     0x1.6c5c3cp-60f, 0.0f, 0.0f, 0.0f, 0x1.f8f7a6p-60f, 0.0f, 0x1.dcef48p-43f,
     0x1.dc4cfep-101f, 0.0f, 0.0f, 0x1.f26966p-8f, 0.0f, 0x1.18afcep-47f,
     0x1.2d9e1ap-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c009f2p-46f,
     0.0f, 0x1.5d2ecp-8f, 0x1.2156cep-25f, 0.0f, 0x1.8d764p-43f, 0x1.3aae3cp-21f,
     0x1.1ea916p-126f, 0.0f, 0.0f, 0x1.b9a91p-40f, 0x1.7ce4a2p-39f, 0.0f,
     0x1.c5fa5ap-90f, 0.0f, 0x1.e37f46p-13f, 0x1.b57e6cp-16f, 0.0f, 0x1.104decp-118f,
     0.0f, 0.0f, 0x1.839e38p-58f, 0.0f, 0.0f, 0.0f, 0x1.84988cp-1f, 0.0f,
     0x1.42861ep-56f, 0.0f, 0x1.b1d478p-117f, 0x1.d0f42p-70f, 0x1.b7d8bep-3f,
     0x1.90cb7ep-60f, 0x1.865582p-64f, 0.0f, 0x1.4b351ep-75f, 0.0f, 0x1.6e55a4p-66f,
     0.0f, 0x1.21ef5ap-85f, 0x1.01cdd6p-19f, 0x1.be6b32p-27f, 0x1.585adcp-85f,
     0x1.53dd3cp-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1e06bcp-115f, 0.0f,
     0x1.b23b34p-81f, 0x1.a5330cp-118f, 0.0f, 0.0f, 0.0f, 0x1.cac572p-123f, 0.0f,
     0.0f, 0x1.b8ac06p-96f, 0.0f, 0x1.cc7e84p-44f, 0x1.787d48p-118f, 0x1.d9308ap-48f,
     0x1.0f36cp-22f, 0.0f, 0x1.f47132p-93f, 0x1.28d994p-117f, 0x1.8c7ed4p-53f,
     0x1.d4db12p-27f, 0x1.0fcff8p-111f, 0.0f, 0.0f, 0.0f, 0x1.d96908p-95f,
     0x1.dc2328p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5d92fp-2f, 0.0f, 0x1.45fa2cp-55f,
     0x1.8ffbfp-109f, 0.0f, 0x1.3429d8p-39f, 0x1.c36acep-55f, 0x1.00d47ap-115f, 0.0f,
     0x1.075834p-41f, 0.0f, 0.0f, 0.0f, 0x1.c7591p-52f, 0.0f, 0.0f, 0.0f,
     0x1.ca50ccp-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2f0202p-63f, 0x1.493bb6p-86f,
     0x1.1e3e72p-50f, 0.0f, 0x1.56afb6p-78f, 0.0f, 0x1.1f3124p-75f, 0x1.1e38fap-34f,
     0x1.8bc19cp-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fb337ep-42f, 0.0f, 0.0f, 0.0f,
     0x1.266fdep-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.272b16p-16f, 0x1.1dbc48p-3f,
     0x1.071dbp-103f, 0.0f, 0.0f, 0x1.0d9402p-100f, 0.0f, 0x1.7ffc2cp-39f, 0.0f,
     0x1.4815a2p-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e8f68ap-121f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.103e24p-112f, 0x1.a3a3ap-60f, 0.0f, 0.0f, 0x1.7f9062p-33f,
     0x1.3d3506p-26f, 0.0f, 0.0f, 0x1.dec32ap-110f, 0x1.de63dep-20f, 0.0f, 0.0f,
     0x1.78f32cp-99f, 0x1.fbbb1cp-15f, 0x1.8e024cp-119f, 0x1.87bfbcp-89f,
     0x1.bdd1eap-20f, 0.0f, 0.0f, 0.0f, 0x1.1c24b8p-89f, 0x1.d9c522p-90f, 0.0f,
     0x1.b1f3ecp-101f, 0.0f, 0x1.8b4bb4p-108f, 0x1p0f, 0.0f, 0.0f, 0x1.d1d1dcp-121f,
     0.0f, 0x1.5abe0cp-28f, 0x1p0f, 0x1.5987d6p-79f, 0.0f, 0.0f, 0x1.8237cap-73f,
     0x1.157c7ep-90f, 0x1.944c7ep-59f, 0x1.494716p-112f, 0.0f, 0.0f, 0x1.45327cp-4f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a5b7bcp-109f, 0.0f, 0x1.f847d8p-25f,
     0.0f, 0x1.08dea2p-14f, 0x1.229396p-5f, 0.0f, 0x1.69bc74p-120f, 0.0f, 0.0f,
     0x1.3d8d12p-6f, 0x1.835f7cp-10f, 0x1.8721d2p-9f, 0.0f, 0x1.5bd06p-4f,
     0x1.b43738p-38f, 0.0f, 0.0f, 0x1.0a0b5cp-41f, 0x1.9c303ap-26f, 0x1.85e3p-27f,
     0.0f, 0.0f, 0x1.7468cp-50f, 0x1.7c6d34p-100f, 0x1.f3f59ep-107f, 0x1.a88116p-85f,
     0.0f, 0.0f, 0.0f, 0x1.e828fcp-55f, 0.0f, 0x1.076b9cp-25f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.606f04p-116f, 0x1.cb569ep-5f,
     0x1.5b41c2p-46f, 0x1.69132cp-90f, 0x1.d41ec2p-109f, 0x1.0862cp-35f, 0.0f, 0.0f,
     0.0f, 0x1.e03b1cp-112f, 0x1.fde9aep-65f, 0x1.16182ap-12f, 0x1.2c0efep-43f, 0.0f,
     0.0f, 0x1.9d7e8cp-13f, 0x1.b39946p-117f, 0.0f, 0x1.d01efep-70f, 0.0f,
     0x1.5d619cp-44f, 0x1.9a7936p-98f, 0.0f, 0.0f, 0x1.684f8ep-81f, 0x1.d60d64p-16f,
     0x1.034ae4p-61f, 0x1.7e9808p-30f, 0x1.8d08f8p-70f, 0x1.917fdap-95f,
     0x1.6a7356p-8f, 0x1.8de758p-56f, 0.0f, 0x1.21f1e6p-55f, 0.0f, 0x1.03c0b6p-117f,
     0x1.249c44p-123f, 0x1.55c13cp-13f, 0.0f, 0.0f, 0x1.2b6d42p-4f, 0.0f, 0.0f, 0.0f,
     0x1.4ede38p-119f, 0x1.6bd372p-90f, 0x1.afb8bcp-25f, 0x1.b979fap-113f,
     0x1.6fd4b2p-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.186208p-109f, 0.0f,
     0x1.e5d07p-45f, 0.0f, 0.0f, 0.0f, 0x1.23fd76p-124f, 0.0f, 0x1.ed8e72p-10f,
     0x1.f8e60cp-29f, 0x1.0b0fdap-61f, 0x1.180c1cp-20f, 0.0f, 0x1p0f, 0.0f,
     0x1.da9e92p-107f, 0x1.44ac26p-119f, 0.0f, 0.0f, 0.0f, 0x1.4efa0ep-71f, 0.0f,
     0x1.b9090cp-75f, 0x1.8dc3b4p-80f, 0.0f, 0.0f, 0x1.ce48a4p-46f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ff8f66p-18f, 0.0f, 0.0f, 0x1.f960b8p-45f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a2f36ep-75f, 0x1.e39114p-90f, 0x1.b1d01ep-52f, 0.0f, 0x1.8bcdc8p-103f,
     0x1.c756d8p-23f, 0x1.31312cp-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.147a08p-74f, 0.0f, 0x1.17a9e6p-109f, 0x1.631134p-42f, 0.0f, 0x1.0ea8a8p-25f,
     0x1.021a5ap-7f, 0x1.b69e46p-3f, 0.0f, 0x1.54bc4cp-28f, 0x1.b77c0ep-108f,
     0x1.0802c2p-82f, 0.0f, 0x1.6ebb38p-64f, 0.0f, 0x1.0b375cp-12f, 0x1.922778p-114f,
     0x1.18d9d2p-119f, 0.0f, 0x1.67527ep-20f, 0.0f, 0x1.710738p-3f, 0x1.c1039ap-54f,
     0.0f, 0x1.fb99b4p-5f, 0.0f, 0x1.99e112p-89f, 0x1.06c212p-75f, 0x1.211376p-84f,
     0.0f, 0x1.5b075ep-19f, 0x1.0e7064p-79f, 0x1.3869fep-22f, 0.0f, 0x1.54504ap-18f,
     0.0f, 0x1.7e91f6p-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.57fd4ap-110f, 0x1.40e24ep-14f,
     0.0f, 0x1.8bd6cp-79f, 0.0f, 0.0f, 0.0f, 0x1.f6d97ap-101f, 0.0f, 0x1.951328p-122f,
     0x1.8e4d0cp-46f, 0.0f, 0x1.94327cp-37f, 0.0f, 0x1.072026p-65f, 0.0f,
     0x1.1dfdcap-113f, 0x1.3cddb2p-104f, 0.0f, 0x1.a1165ap-78f, 0x1.15faf6p-72f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e80f72p-12f,
     0x1.d2be82p-47f, 0.0f, 0x1.cee008p-65f, 0.0f, 0x1.fccde8p-73f, 0x1.a787c8p-57f,
     0.0f, 0.0f, 0x1.950ae6p-71f, 0.0f, 0x1.64449p-34f, 0x1.e1988cp-115f,
     0x1.0f6c84p-28f, 0x1.fa4924p-117f, 0.0f, 0x1.9b327cp-41f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6772ep-13f, 0.0f, 0.0f, 0.0f, 0x1.0d8246p-42f, 0.0f, 0.0f, 0x1.db85aep-65f,
     0x1.f7e1a2p-94f, 0x1.6fc542p-53f, 0x1.b72b0ep-125f, 0x1.41d27ap-24f,
     0x1.1a869ap-93f, 0x1.5cb152p-68f, 0x1.26bbbep-45f, 0x1.99fe7cp-2f,
     0x1.54568cp-46f, 0x1.fe5fd8p-68f, 0x1.dd26e4p-105f, 0x1.fae7bap-49f,
     0x1.916df6p-34f, 0x1.d7d4e2p-79f, 0.0f, 0x1.4b0792p-6f, 0x1.704d8ap-105f,
     0x1.a4622ep-116f, 0x1.5a4296p-22f, 0.0f, 0x1.71c42ep-61f, 0.0f, 0.0f,
     0x1.510d9p-57f, 0x1.a4ea82p-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d8f7fep-63f,
     0x1.f01124p-19f, 0x1.f55caep-44f, 0x1.d7b712p-111f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7f5392p-3f, 0x1.295232p-27f, 0x1.e7fc1cp-93f, 0.0f, 0x1.c8d922p-37f, 0.0f,
     0x1.5e1144p-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ff3e4ep-71f, 0.0f, 0.0f,
     0x1.45367ap-73f, 0.0f, 0.0f, 0x1.2d4908p-11f, 0x1.66ebccp-22f, 0x1.c22704p-39f,
     0.0f, 0.0f, 0x1.f5285ap-88f, 0.0f, 0x1.c136cp-59f, 0.0f, 0.0f, 0x1.e2d15p-69f,
     0x1.a9332cp-38f, 0x1.685f02p-13f, 0.0f, 0.0f, 0.0f, 0x1.c902ap-65f,
     0x1.a18a54p-126f, 0.0f, 0x1.e245ecp-27f, 0x1.cc2de6p-83f, 0.0f, 0.0f, 0.0f,
     0x1.d298e8p-121f, 0.0f, 0x1.b34bfep-16f, 0.0f, 0x1.fa61bap-8f, 0.0f, 0.0f, 0.0f,
     0x1.582086p-69f, 0.0f, 0.0f, 0x1.dea082p-18f, 0.0f, 0x1.594584p-31f,
     0x1.e30ba6p-43f, 0.0f, 0.0f, 0x1.bcc114p-42f, 0.0f, 0x1.4f3d76p-50f, 0.0f,
     0x1.3c61dcp-18f, 0.0f, 0.0f, 0x1.b3c784p-87f, 0x1.9c0e1p-68f, 0x1.3cf908p-61f,
     0x1.6217f4p-29f, 0.0f, 0x1.e3e68ep-124f, 0x1.0c0ffcp-88f, 0x1.6faa4ep-28f, 0.0f,
     0.0f, 0.0f, 0x1.be4e4p-119f, 0x1.4e8544p-14f, 0x1.7811ccp-124f, 0.0f,
     0x1.b584ap-31f, 0x1.305ap-110f, 0x1.edc5dcp-35f, 0.0f, 0x1.97dc74p-75f, 0.0f,
     0.0f, 0x1.579b44p-56f, 0x1.8081dp-122f, 0.0f, 0x1.56dad6p-13f, 0.0f,
     0x1.33e90cp-11f, 0x1.f6b5cp-2f, 0x1.63aaa2p-23f, 0.0f, 0x1.e9e444p-90f,
     0x1.ee9044p-34f, 0x1.267e4cp-85f, 0x1.a3a77ep-20f, 0x1.2d159cp-62f,
     0x1.74c106p-70f, 0.0f, 0.0f, 0.0f, 0x1.d18c08p-85f, 0.0f, 0.0f, 0.0f,
     0x1.e8c3cap-114f, 0.0f, 0x1.8a1676p-63f, 0.0f, 0x1.18b80cp-78f, 0x1.8cb80ap-107f,
     0x1.069d44p-73f, 0x1.6d07bcp-79f, 0x1.5d8584p-116f, 0.0f, 0x1.2245cap-61f, 0.0f,
     0x1.186e6ap-98f, 0x1.33ceccp-65f, 0.0f, 0.0f, 0x1.588f66p-91f, 0x1.d3a362p-63f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.2ec076p-55f, 0x1.8f3596p-33f, 0.0f, 0x1.2b278ap-17f,
     0.0f, 0.0f, 0x1.b2fa0cp-24f, 0x1.380c46p-87f, 0.0f, 0x1.ef18b8p-53f,
     0x1.9a833ap-41f, 0.0f, 0x1.413a3ap-125f, 0.0f, 0x1.1374a8p-92f, 0x1.ab00cp-35f,
     0x1.86daa8p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f105dap-93f, 0x1.4b707cp-88f,
     0x1.3b504ap-117f, 0.0f, 0.0f, 0x1.db37b8p-16f, 0x1.08ff6cp-8f, 0x1.f2664cp-95f,
     0.0f, 0x1.1003e6p-20f, 0.0f, 0x1.7c6e76p-13f, 0x1.766decp-105f, 0x1.7e8b4cp-22f,
     0x1.d83d32p-107f, 0.0f, 0x1.40600ep-15f, 0.0f, 0.0f, 0.0f, 0x1.2d09bcp-59f,
     0x1.e8f53p-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2c4b52p-78f, 0x1.59339p-56f, 0.0f, 0x1.e5a62ap-17f, 0.0f, 0.0f,
     0x1.045faap-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.14446cp-96f, 0x1.8a0eeap-60f,
     0x1.1bb728p-44f, 0x1.eb8088p-17f, 0.0f, 0.0f, 0.0f, 0x1.9ec14cp-81f,
     0x1.04351ep-59f, 0.0f, 0.0f, 0x1.09ee9cp-123f, 0x1.fbc1c6p-9f, 0.0f, 0.0f,
     0x1.c0c948p-106f, 0x1.cfc31ap-24f, 0x1.16bf04p-76f, 0x1.94f95p-30f, 0.0f,
     0x1.5b86dep-96f, 0.0f, 0.0f, 0x1.85410cp-6f, 0x1.d41404p-117f, 0x1.a8fbap-65f,
     0x1.37eac6p-57f, 0x1.594e1ep-53f, 0x1.1f28dcp-97f, 0x1.00b9a6p-70f, 0.0f, 0.0f,
     0x1.7d428p-25f, 0.0f, 0x1.41c5dap-72f, 0.0f, 0x1.9d1796p-21f, 0x1.077412p-21f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.2d714p-60f, 0.0f, 0x1.463e9ap-82f, 0x1.837444p-90f,
     0.0f, 0.0f, 0x1.8e98f6p-97f, 0.0f, 0.0f, 0x1.3fc7d8p-109f, 0.0f, 0x1.9fb2c2p-58f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ac5c8p-65f, 0.0f, 0x1.b9457ap-3f, 0.0f, 0.0f,
     0x1.56fbd8p-57f, 0x1.1f938p-102f, 0.0f, 0x1.54f05p-21f, 0.0f, 0x1.79977p-37f,
     0x1.c3ff76p-23f, 0.0f, 0.0f, 0.0f, 0x1.de34f2p-70f, 0.0f, 0x1.6ebf4ap-52f,
     0x1.b77346p-37f, 0.0f, 0.0f, 0x1.1ad51cp-88f, 0.0f, 0.0f, 0x1.63fcb4p-102f,
     0x1.46a664p-124f, 0.0f, 0.0f, 0x1.62ee8cp-115f, 0x1.8298cep-112f,
     0x1.f7b954p-70f, 0.0f, 0x1.8bd2d8p-44f, 0x1.8ef84p-116f, 0.0f, 0.0f, 0.0f,
     0x1.45483p-13f, 0x1.c8b0dep-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2f0048p-93f, 0x1.3c8242p-84f, 0x1.a0515ep-86f, 0.0f, 0.0f, 0.0f,
     0x1.56166ep-111f, 0x1.108be8p-50f, 0x1.daa4dcp-31f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c40024p-88f, 0x1.455b44p-92f, 0.0f, 0.0f, 0.0f, 0x1.b4e0f6p-73f, 0.0f,
     0x1.7217d4p-47f, 0x1.040056p-96f, 0.0f, 0x1.1506c4p-25f, 0x1.df7544p-59f,
     0x1.f2c77p-78f, 0x1.210c12p-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a5c236p-126f, 0.0f, 0x1p0f, 0.0f, 0x1.403554p-3f, 0.0f, 0.0f,
     0x1.654296p-69f, 0.0f, 0x1.b6c7e2p-112f, 0x1.296248p-98f, 0x1.3bc5c8p-101f, 0.0f,
     0x1.d0f1dap-126f, 0x1.c43e08p-64f, 0.0f, 0.0f, 0.0f, 0x1.c644a8p-14f, 0.0f,
     0x1.8a7faep-61f, 0.0f, 0.0f, 0x1.453dbcp-66f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3517a8p-126f, 0x1.539a6ap-42f, 0x1.e6d74ep-93f, 0x1.695244p-57f,
     0x1.4e7adp-52f, 0.0f, 0x1.5a47dp-19f, 0x1.ac8272p-89f, 0x1.9b2244p-48f, 0.0f,
     0x1.02162cp-5f, 0x1.972b76p-75f, 0x1.70c46ep-23f, 0x1.d9d2eep-115f,
     0x1.72e568p-98f, 0.0f, 0.0f, 0.0f, 0x1.8b3a26p-73f, 0x1.0e32dep-32f,
     0x1.e199dap-27f, 0x1.fbeaacp-52f, 0.0f
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
            tmp1 = Sleef_asinhf1_u10purecfma(tmp0);
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
    printf("Sleef_asinhf1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_asinhf1_u10purecfma bench acc %a\n", global_bench_acc);
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
