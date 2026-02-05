/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_cbrtf1_u10purecfma.c --function \
 *     Sleef_finz_cbrtf1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0.0f, 0x1.49baf6p-26f, 0x1.16a9b8p-24f, 0.0f, 0x1.fa8d7cp-30f, 0.0f, 0.0f,
     0x1.b0d828p-62f, 0x1.6ba7b8p-34f, 0.0f, 0.0f, 0x1.151f34p-72f, 0x1.028f68p-54f,
     0.0f, 0x1.f6ad9p-126f, 0.0f, 0x1.3e9942p-55f, 0.0f, 0.0f, 0x1.dcc2b4p-92f, 0.0f,
     0x1.072c8p-109f, 0x1.a69a3ap-45f, 0.0f, 0x1.dea9aep-117f, 0x1.259f7ap-36f,
     0x1.faf482p-111f, 0.0f, 0x1.aefe7p-17f, 0x1.af9bb4p-20f, 0.0f, 0x1.38ae5p-60f,
     0.0f, 0.0f, 0.0f, 0x1.cbe146p-70f, 0x1.af8f8cp-97f, 0x1.e45e16p-42f,
     0x1.fae8c6p-118f, 0.0f, 0x1.89f236p-88f, 0.0f, 0x1.f4f86ap-84f, 0.0f, 0.0f, 0.0f,
     0x1.462822p-85f, 0x1.12c756p-67f, 0.0f, 0.0f, 0x1.907d2ap-62f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ae7554p-113f, 0.0f, 0x1.467a8cp-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.c26e4ep-58f, 0.0f, 0x1.a895c2p-117f, 0x1.ed253ep-55f, 0.0f,
     0x1.5e3458p-36f, 0.0f, 0.0f, 0x1.8919a8p-74f, 0.0f, 0.0f, 0x1.84741cp-12f,
     0x1.90c11ep-113f, 0x1.b40ea4p-1f, 0.0f, 0.0f, 0.0f, 0x1.c3d998p-84f,
     0x1.b9b46ep-105f, 0x1.dccbe6p-55f, 0x1.802dbp-82f, 0.0f, 0.0f, 0.0f,
     0x1.48acap-66f, 0.0f, 0x1.655b1p-31f, 0.0f, 0.0f, 0.0f, 0x1.b932cep-88f, 0.0f,
     0x1.836c6cp-87f, 0.0f, 0x1.c401bap-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.92ef6p-72f, 0.0f, 0.0f, 0.0f, 0x1.3c58aap-90f, 0x1.cbf1aep-88f, 0.0f,
     0x1.f841d2p-19f, 0x1.13b39ep-38f, 0x1.ee298p-30f, 0.0f, 0.0f, 0.0f,
     0x1.05ebbap-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.de33c6p-81f,
     0x1.afee98p-87f, 0.0f, 0x1.c77726p-29f, 0.0f, 0x1.780a54p-46f, 0.0f,
     0x1.8b9cap-101f, 0.0f, 0x1.337d9ap-99f, 0.0f, 0x1.81b1bep-55f, 0.0f, 0.0f, 0.0f,
     0x1.a2d19p-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0fa7bap-84f, 0.0f, 0.0f,
     0x1.878a34p-60f, 0.0f, 0x1.32bc78p-58f, 0x1.c0d588p-51f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.cc85bcp-70f, 0x1.5fbd9ep-1f, 0x1.03a63ep-10f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3427cap-80f, 0x1.9c5134p-95f, 0x1.3f210ap-56f, 0.0f, 0x1.217f7cp-62f,
     0x1.bbf0bp-27f, 0.0f, 0x1.ac187ap-37f, 0x1.6cd834p-94f, 0x1.9f5a74p-4f,
     0x1.e71ceep-85f, 0.0f, 0.0f, 0x1.e096f4p-85f, 0x1.63249p-47f, 0x1.27c1b2p-75f,
     0.0f, 0x1.339022p-120f, 0x1.5e954p-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0ff2cap-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3bb3b8p-72f, 0.0f, 0x1.bd3f0ep-92f,
     0.0f, 0.0f, 0.0f, 0x1.91669p-18f, 0.0f, 0x1.54451cp-11f, 0x1.68f36ap-14f, 0.0f,
     0x1.26458ep-112f, 0x1.ce42acp-76f, 0x1.a67ea8p-75f, 0.0f, 0x1.e5db5ap-87f, 0.0f,
     0.0f, 0.0f, 0x1.eedfc2p-53f, 0.0f, 0x1.09d74ep-73f, 0.0f, 0x1.e4b58ep-43f,
     0x1.388f22p-20f, 0x1.a306f6p-97f, 0x1.3df6a6p-116f, 0x1.ed9866p-117f, 0.0f, 0.0f,
     0.0f, 0x1.75719p-4f, 0x1.4a7cc2p-18f, 0.0f, 0.0f, 0x1.ed080ap-11f,
     0x1.58f27ep-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.11dc6p-69f, 0x1.31b97p-84f,
     0x1.3436cep-94f, 0.0f, 0x1.a808cp-39f, 0x1.77c2cap-95f, 0x1.54cc6ap-42f, 0.0f,
     0x1.ba3098p-32f, 0.0f, 0x1.3cea64p-71f, 0x1.edb05cp-69f, 0x1.f4630ep-90f, 0.0f,
     0x1.cb703ap-65f, 0x1.d1e3eap-29f, 0.0f, 0x1.f31aecp-53f, 0.0f, 0.0f,
     0x1.f3edbep-13f, 0.0f, 0.0f, 0x1.92e9a6p-3f, 0x1.77f222p-12f, 0x1.6cf4e6p-24f,
     0x1.81498p-87f, 0x1.cc5424p-1f, 0.0f, 0.0f, 0x1.94c3a2p-89f, 0.0f,
     0x1.9fd5bcp-39f, 0.0f, 0.0f, 0x1.8fc482p-32f, 0x1.a03d6ep-104f, 0x1.787804p-115f,
     0.0f, 0x1.04d97p-76f, 0x1.9ec512p-2f, 0x1.96370cp-57f, 0.0f, 0.0f, 0.0f,
     0x1.af379p-36f, 0x1.0c2748p-61f, 0x1.7750bcp-124f, 0x1.25c0a4p-110f,
     0x1.f4c1f4p-52f, 0x1.fb4cc2p-116f, 0.0f, 0.0f, 0x1.982796p-4f, 0x1.0476a2p-56f,
     0.0f, 0x1.ad9f72p-108f, 0.0f, 0.0f, 0.0f, 0x1.ba380cp-10f, 0.0f, 0x1.d796e4p-4f,
     0.0f, 0x1.3fbd0cp-79f, 0.0f, 0.0f, 0x1.13269p-77f, 0x1.d95a8cp-29f, 0.0f, 0.0f,
     0x1.e7c738p-66f, 0.0f, 0x1.80af0cp-23f, 0.0f, 0.0f, 0x1.b860bap-25f,
     0x1.dadda6p-100f, 0x1.4ef91cp-99f, 0.0f, 0x1.4da01ep-106f, 0x1.3a2c9ep-84f,
     0x1.a7c09p-105f, 0x1.22eadap-64f, 0.0f, 0.0f, 0x1.d46ef4p-45f, 0x1.45d36cp-65f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f6077p-85f, 0.0f, 0.0f, 0x1.5cd6f6p-73f, 0.0f,
     0x1.83ba5ep-48f, 0x1.3c497ep-121f, 0.0f, 0x1.f49a1p-28f, 0.0f, 0.0f,
     0x1.76da26p-39f, 0x1.f9cda4p-76f, 0x1.9328dep-32f, 0.0f, 0.0f, 0x1.8ecdccp-42f,
     0x1.dac128p-84f, 0x1.033416p-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8074b2p-31f,
     0x1.d4b92p-107f, 0x1.5654f4p-33f, 0.0f, 0x1.21fae6p-110f, 0x1.88dec8p-42f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bca406p-110f, 0x1.7170d2p-99f, 0.0f, 0.0f,
     0x1.bd30fep-1f, 0x1.542188p-60f, 0.0f, 0.0f, 0.0f, 0x1.aa27f6p-96f,
     0x1.17e892p-10f, 0.0f, 0.0f, 0.0f, 0x1.685a44p-51f, 0.0f, 0x1.a0f304p-47f,
     0x1.fc6e8ep-39f, 0.0f, 0x1.b3b1a6p-119f, 0x1.11f2d8p-29f, 0.0f, 0x1.2b498p-93f,
     0.0f, 0x1.3f0bep-37f, 0.0f, 0x1.107296p-35f, 0.0f, 0x1.ed6f1p-118f,
     0x1.c62a4cp-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d46776p-36f, 0.0f, 0x1.20f02p-15f,
     0.0f, 0x1.da57a2p-42f, 0x1.8bbd66p-66f, 0x1.83adcap-33f, 0x1.db0a66p-68f, 0.0f,
     0.0f, 0x1.ea4b14p-51f, 0x1.e5a426p-30f, 0x1.90bf54p-32f, 0x1.b0e9a4p-120f, 0.0f,
     0.0f, 0x1.974d76p-116f, 0x1.f2ebc8p-112f, 0x1.f554cap-18f, 0.0f, 0.0f, 0.0f,
     0x1.b0e428p-95f, 0x1.8d63acp-59f, 0x1.69a8e2p-63f, 0.0f, 0.0f, 0x1.45b7d8p-78f,
     0x1.91d2c4p-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6c4492p-53f, 0x1.800382p-7f,
     0.0f, 0.0f, 0.0f, 0x1.05695ep-65f, 0.0f, 0x1.9cc508p-40f, 0x1.738d02p-28f,
     0x1.afbed6p-46f, 0x1.58b21p-99f, 0.0f, 0x1.5ba588p-75f, 0x1.f130fap-71f, 0.0f,
     0x1.c56b8cp-80f, 0.0f, 0.0f, 0.0f, 0x1.c0578cp-46f, 0x1.186fb8p-67f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.088f16p-19f, 0.0f, 0.0f, 0.0f, 0x1.2e15a6p-40f, 0x1.21f43ep-88f,
     0x1.8612a4p-52f, 0.0f, 0x1.07860ep-7f, 0.0f, 0x1.a4c41cp-25f, 0.0f,
     0x1.7ca74p-104f, 0x1.ed8a88p-84f, 0.0f, 0x1.05cc5p-20f, 0.0f, 0x1.ba8bf8p-87f,
     0x1.0b8d5ep-113f, 0.0f, 0x1.1c0b32p-45f, 0.0f, 0.0f, 0x1.ab3c72p-66f,
     0x1.5d304ep-23f, 0.0f, 0x1.65588p-86f, 0x1.73f38ap-116f, 0.0f, 0.0f,
     0x1.2a6436p-20f, 0.0f, 0x1.0b5248p-108f, 0x1.1709f4p-81f, 0.0f, 0.0f,
     0x1.fcd7e8p-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.229ad2p-18f, 0x1.d59854p-16f,
     0x1.6bef76p-66f, 0x1.5a1d9ap-85f, 0x1.26a322p-98f, 0x1.eb8fbcp-102f, 0.0f,
     0x1.e5c2cep-120f, 0x1.42dce8p-125f, 0.0f, 0.0f, 0.0f, 0x1.c595f8p-33f, 0.0f,
     0.0f, 0x1.c1b0eep-74f, 0.0f, 0.0f, 0.0f, 0x1.6df8eap-47f, 0x1.3a6104p-115f, 0.0f,
     0x1.46d138p-77f, 0x1.a4900cp-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bcfd7ap-70f,
     0x1.4807bp-45f, 0x1.35fea4p-52f, 0x1.b3984p-102f, 0.0f, 0x1.a4a9aep-46f, 0.0f,
     0x1.7c9e28p-12f, 0x1.de5a92p-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e5aeep-117f, 0.0f, 0x1.ba855cp-96f, 0x1.752164p-97f, 0.0f, 0x1.cbf46p-63f,
     0x1.fcc406p-110f, 0x1.837fa8p-73f, 0x1.06013p-10f, 0.0f, 0.0f, 0x1.3026fcp-72f,
     0x1.c35f3ep-96f, 0x1.92d5bcp-100f, 0.0f, 0x1.d4d03p-84f, 0.0f, 0x1.48e7ap-41f,
     0x1.6ac7dcp-34f, 0.0f, 0.0f, 0.0f, 0x1.d61772p-10f, 0.0f, 0.0f, 0x1.618c1cp-111f,
     0x1.d5b77p-105f, 0.0f, 0.0f, 0x1.58a07p-91f, 0.0f, 0.0f, 0x1.a6e73cp-27f,
     0x1.27a5eap-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b62868p-18f,
     0x1.12222ep-118f, 0x1.28a03p-6f, 0.0f, 0.0f, 0x1.2d7ccap-104f, 0.0f,
     0x1.ed528cp-54f, 0.0f, 0x1.f69cdap-90f, 0x1.739c1p-124f, 0.0f, 0.0f,
     0x1.6a6402p-74f, 0.0f, 0.0f, 0x1.e351b4p-85f, 0.0f, 0x1.86e17cp-92f, 0.0f, 0.0f,
     0x1.b511eap-120f, 0.0f, 0.0f, 0.0f, 0x1.4057a8p-94f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b6f984p-115f, 0.0f, 0.0f, 0.0f, 0x1.c3cd08p-47f, 0x1.24b3eep-122f,
     0x1.6a735p-115f, 0x1.bdf90cp-9f, 0.0f, 0.0f, 0x1.cec5d8p-35f, 0.0f,
     0x1.4929ep-14f, 0x1.195e7cp-114f, 0x1.9a1c9p-49f, 0.0f, 0x1.5f08a2p-48f,
     0x1.a5c76cp-122f, 0.0f, 0x1.d13c48p-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5ae318p-126f, 0x1.59b4bep-19f, 0x1.70de56p-31f, 0.0f, 0.0f, 0.0f,
     0x1.9a9f5ap-74f, 0.0f, 0.0f, 0x1.2a0deap-96f, 0.0f, 0x1.cebc42p-38f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.dccebep-16f, 0.0f, 0.0f, 0x1.3b863p-83f, 0.0f, 0.0f, 0.0f,
     0x1.8ccb64p-78f, 0.0f, 0x1.5940dp-107f, 0x1.a778ccp-24f, 0.0f, 0x1.ead23cp-62f,
     0x1.18ac42p-55f, 0x1.114dfep-120f, 0x1.704516p-125f, 0x1.153514p-35f,
     0x1.695366p-43f, 0.0f, 0x1.6f2932p-61f, 0.0f, 0x1.f97dc6p-75f, 0x1.75d4eap-118f,
     0x1.cf93b8p-102f, 0x1.833438p-111f, 0.0f, 0x1.45b64p-14f, 0x1.a7d35ep-24f, 0.0f,
     0.0f, 0x1.51cd86p-104f, 0.0f, 0x1.c6080ap-73f, 0x1.443826p-71f, 0x1.e05b22p-54f,
     0.0f, 0.0f, 0x1.58ced2p-113f, 0x1.fd8facp-54f, 0x1.acb3f2p-103f, 0.0f, 0.0f,
     0x1.b53038p-124f, 0.0f, 0x1.cbc00cp-6f, 0.0f, 0x1.a5b634p-108f, 0x1.683752p-126f,
     0.0f, 0x1.322f2cp-78f, 0x1.6a7ebp-58f, 0x1.d27068p-113f, 0.0f, 0x1.447a24p-103f,
     0x1.2e82c2p-38f, 0x1.adf856p-83f, 0x1.8e5574p-124f, 0x1.90dcb6p-93f,
     0x1.ec64dp-71f, 0x1.8a6404p-18f, 0x1.5e89b2p-33f, 0x1.2ad0cp-39f, 0x1.e14866p-4f,
     0x1.276d6ep-19f, 0.0f, 0x1.7ccd0cp-65f, 0.0f, 0.0f, 0x1.89b5e2p-111f,
     0x1.2e5e98p-8f, 0x1.c3e14ep-101f, 0.0f, 0x1.9a0b56p-39f, 0x1.2ff95ep-123f,
     0x1.8eb304p-77f, 0.0f, 0x1.ad648ap-30f, 0.0f, 0x1.28c6fp-107f, 0.0f,
     0x1.8044b4p-6f, 0.0f, 0x1.666874p-21f, 0x1.bf1534p-56f, 0.0f, 0.0f, 0.0f, 0x1p0f,
     0.0f, 0x1.f63f98p-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.93d788p-115f, 0.0f, 0.0f, 0x1.808c8ap-123f, 0x1.e9e678p-73f, 0.0f, 0.0f,
     0.0f, 0x1.bc0efep-96f, 0x1.9a2612p-77f, 0x1.9f3806p-76f, 0.0f, 0.0f,
     0x1.31f96p-62f, 0x1.2705fep-81f, 0.0f, 0x1.c72e66p-10f, 0x1.44edd2p-92f,
     0x1.b63924p-88f, 0x1.cfdb1cp-48f, 0.0f, 0x1.eb428cp-8f, 0x1.cacacep-118f, 0.0f,
     0x1.fc9828p-16f, 0.0f, 0x1.5c50b8p-102f, 0.0f, 0.0f, 0x1.72af84p-120f,
     0x1.1286f2p-66f, 0x1.0562b4p-22f, 0x1.ac9858p-47f, 0.0f, 0x1.2098e6p-100f, 0.0f,
     0.0f, 0.0f, 0x1.2d82dep-95f, 0x1.f219p-11f, 0x1.5593c6p-114f, 0.0f,
     0x1.4471eap-111f, 0x1.0ed428p-99f, 0x1.b275fep-46f, 0.0f, 0.0f, 0.0f,
     0x1.6e8b78p-84f, 0x1.3dc72ap-110f, 0.0f, 0x1.abad78p-89f, 0.0f, 0.0f, 0.0f,
     0x1.99a702p-113f, 0x1.3a4e6p-86f, 0.0f, 0x1.753138p-62f, 0x1.3333bep-2f,
     0x1.ea1752p-22f, 0x1.07a4p-124f, 0x1.b9ba46p-124f, 0.0f, 0x1.de6feap-108f,
     0x1.06a744p-60f, 0.0f, 0x1.fbc76cp-31f, 0.0f, 0.0f, 0x1.200448p-76f,
     0x1.2c79f8p-50f, 0x1.76dd6ep-98f, 0x1.096666p-23f, 0.0f, 0x1.7ed922p-79f,
     0x1.8d03d8p-101f, 0x1.f52baap-37f, 0.0f, 0x1.f73164p-76f, 0x1.e0c532p-36f,
     0x1.49247ep-112f, 0x1.5e6438p-97f, 0x1.0288aap-101f, 0.0f, 0x1.75bbaap-63f,
     0x1.2bec2p-93f, 0x1.aa19ecp-45f, 0.0f, 0.0f, 0x1.2deedcp-91f, 0.0f,
     0x1.050aeep-74f, 0x1.b7f0eep-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2a54b4p-41f, 0.0f,
     0x1.6d7afcp-99f, 0.0f, 0.0f, 0.0f, 0x1.43cbe6p-102f, 0.0f, 0x1.935674p-30f,
     0x1.6c75e2p-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.62d3a4p-67f, 0.0f,
     0x1.2b18f6p-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6e675p-11f, 0x1.a166ep-34f,
     0x1.b1cefp-120f, 0x1.406b0ep-60f, 0x1.c7c78cp-67f, 0.0f, 0.0f, 0x1.e7dfdep-50f,
     0x1.2c84b4p-36f, 0x1.234b5p-65f, 0x1.6c3bf6p-12f, 0.0f, 0x1.b1e8d2p-126f, 0.0f,
     0x1.03f984p-11f, 0.0f, 0.0f, 0x1.dd0ebap-82f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c62d84p-34f, 0x1.59d806p-42f, 0.0f, 0x1.3b3c4ap-95f, 0x1.49c0ep-3f,
     0x1.b868dap-67f, 0.0f, 0.0f, 0.0f, 0x1.407b34p-67f, 0x1.195622p-69f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.115dcp-100f, 0.0f, 0.0f, 0.0f, 0x1.2444bap-70f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.2f85c2p-119f, 0.0f, 0x1.14a4dap-31f, 0x1.31a17p-51f, 0.0f,
     0x1.eb6288p-31f, 0x1.7c0004p-70f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.037af4p-93f, 0.0f, 0x1.3524a6p-37f, 0x1.dc032ap-93f, 0x1.c673f2p-102f, 0.0f,
     0x1.3f070ap-21f, 0.0f, 0x1.a64b48p-31f, 0x1.65da5p-86f, 0x1.db747p-60f, 0.0f,
     0.0f, 0.0f, 0x1.19d2ccp-4f, 0.0f, 0x1.e6b26ep-10f, 0x1.dcce62p-117f, 0.0f,
     0x1.1ff9aap-57f, 0.0f, 0x1.7ee984p-43f, 0x1.3cf99ep-122f, 0.0f, 0.0f, 0.0f,
     0x1.652ce8p-70f, 0x1.2a250ep-26f, 0.0f, 0x1.fb487ap-101f, 0x1.0372cp-7f, 0.0f,
     0.0f, 0.0f, 0x1.278228p-31f, 0.0f, 0x1.255d74p-108f, 0.0f, 0.0f, 0.0f,
     0x1.d3913ep-39f, 0.0f, 0x1.dd1f76p-116f, 0.0f, 0x1.d7cf44p-60f, 0x1.cb04aap-49f,
     0x1.acdcaap-102f, 0.0f, 0.0f, 0x1.0dec4ep-9f, 0x1.51e5e8p-97f, 0x1.bf3ad6p-86f,
     0x1.fb5e44p-109f, 0.0f, 0.0f, 0x1.a5330cp-2f, 0x1.eb7044p-43f, 0.0f,
     0x1.ae5a6ep-37f, 0x1.695738p-96f, 0x1.e24a4p-74f, 0.0f, 0x1.0ee292p-90f, 0.0f,
     0x1.0099ap-68f, 0x1.083b34p-44f
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
            tmp1 = Sleef_finz_cbrtf1_u10purecfma(tmp0);
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
    printf("Sleef_finz_cbrtf1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_cbrtf1_u10purecfma bench acc %a\n", global_bench_acc);
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
