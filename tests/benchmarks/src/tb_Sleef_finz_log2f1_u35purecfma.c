/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_log2f1_u35purecfma.c --function \
 *     Sleef_finz_log2f1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0x1.bdcd5cp-93f, 0.0f, 0.0f, 0x1.d95c14p-71f, 0.0f, 0x1.612dbep-106f,
     0.0f, 0.0f, 0.0f, 0x1.51c1dap-48f, 0x1.025e78p-64f, 0.0f, 0x1.8fcbe8p-58f, 0.0f,
     0x1.d4b9e8p-83f, 0x1.1049f6p-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d31fe4p-11f, 0.0f,
     0.0f, 0.0f, 0x1.29c628p-77f, 0x1.e77ae4p-105f, 0.0f, 0.0f, 0x1.2e9e8ap-62f, 0.0f,
     0.0f, 0.0f, 0x1.ff51e4p-119f, 0x1.85072cp-28f, 0.0f, 0.0f, 0x1.6f0c3ep-91f,
     0x1.b37774p-47f, 0.0f, 0.0f, 0x1.f8dbe2p-15f, 0x1.6b9164p-83f, 0x1.d105b8p-23f,
     0.0f, 0x1.deb9a4p-11f, 0.0f, 0x1.c62e68p-7f, 0.0f, 0x1.822eaep-72f,
     0x1.72b02ap-55f, 0.0f, 0x1.f6c91p-120f, 0x1.c3c6a6p-110f, 0x1.9cb506p-118f, 0.0f,
     0x1.c0a732p-19f, 0x1.cdfd7ep-48f, 0x1.f81ecp-64f, 0.0f, 0x1.5dce8ap-104f,
     0x1.e29788p-111f, 0x1.280a28p-122f, 0x1.63ec82p-42f, 0x1.05d648p-74f, 0.0f, 0.0f,
     0.0f, 0x1.c113c4p-91f, 0.0f, 0x1.3bf616p-40f, 0x1.6ab17cp-60f, 0.0f,
     0x1.84a22ap-120f, 0.0f, 0.0f, 0x1.3645f6p-43f, 0.0f, 0x1.08f52cp-95f, 0.0f,
     0x1.7686dep-9f, 0x1.546996p-34f, 0x1.ce006ep-97f, 0.0f, 0x1.1d233ap-60f,
     0x1.538a9cp-25f, 0x1.a607cep-54f, 0.0f, 0x1.16af2ap-37f, 0.0f, 0x1.ca8e04p-99f,
     0x1.ca3beap-76f, 0.0f, 0x1.11e756p-40f, 0x1.7372e8p-16f, 0.0f, 0.0f, 0.0f,
     0x1.a460ccp-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.37f4bep-112f, 0x1.5cf23p-7f,
     0x1.2b1148p-64f, 0x1.0c3174p-109f, 0.0f, 0.0f, 0x1.986e66p-95f, 0.0f,
     0x1.d43b6ap-124f, 0.0f, 0x1.507efep-25f, 0.0f, 0.0f, 0x1.9dbf96p-118f, 0.0f,
     0x1.c51f7ap-88f, 0x1.8a6f7p-9f, 0.0f, 0x1.9a957p-61f, 0.0f, 0x1.1f82fcp-68f,
     0x1.8cdbdcp-81f, 0.0f, 0x1.198242p-22f, 0x1.07fc6cp-98f, 0.0f, 0x1.0562d4p-103f,
     0.0f, 0x1.ce39b2p-51f, 0x1.a49968p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4753a2p-111f, 0.0f, 0.0f, 0x1.aecd82p-85f, 0.0f, 0x1.05fdf2p-107f,
     0x1.e0f65ep-66f, 0x1.e9a1d4p-26f, 0x1.d7f53p-95f, 0x1.58023cp-102f,
     0x1.48961cp-58f, 0.0f, 0.0f, 0.0f, 0x1.97e81ep-96f, 0.0f, 0x1.5721cp-40f, 0.0f,
     0.0f, 0.0f, 0x1.ba60cep-93f, 0.0f, 0.0f, 0x1.6560d2p-120f, 0.0f, 0.0f,
     0x1.b4fa5ep-94f, 0.0f, 0x1.640efap-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eaa91cp-1f,
     0x1.793da4p-112f, 0.0f, 0x1.440744p-118f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d0cff2p-107f, 0.0f, 0x1.dce8a8p-2f, 0.0f, 0.0f, 0.0f, 0x1.4971f8p-48f,
     0x1.a6a2b6p-59f, 0.0f, 0.0f, 0x1.a744dp-2f, 0x1.398deap-13f, 0.0f, 0.0f,
     0x1.fb7984p-93f, 0x1.9581f4p-68f, 0.0f, 0x1.f5184p-53f, 0.0f, 0x1.0e7096p-6f,
     0x1.c1888cp-50f, 0x1.09872ap-57f, 0.0f, 0.0f, 0x1.a3020ap-82f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4063ap-77f, 0.0f, 0.0f, 0x1.c62c34p-106f, 0x1.14a9dcp-23f, 0.0f,
     0x1.9b8276p-54f, 0.0f, 0.0f, 0x1.5e3a6cp-52f, 0.0f, 0x1.9c794p-125f,
     0x1.b6ad4ap-46f, 0x1.acf496p-16f, 0x1.cd2858p-119f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cfb238p-63f, 0x1.2c4ba4p-124f, 0.0f, 0.0f, 0x1.ac8f2p-40f, 0x1.b172a4p-76f,
     0.0f, 0.0f, 0x1.b4a844p-37f, 0x1.113afp-49f, 0x1.07ff6ep-91f, 0x1.31b78ep-40f,
     0.0f, 0x1.f008d2p-1f, 0x1.4ec26ep-23f, 0.0f, 0.0f, 0x1.3463dp-111f,
     0x1.3e4428p-29f, 0.0f, 0.0f, 0x1.801bc4p-103f, 0.0f, 0.0f, 0x1.387192p-78f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.4d3392p-103f, 0.0f, 0x1.b9dcbep-89f, 0.0f, 0x1.bbd356p-50f,
     0.0f, 0x1.56caaap-77f, 0.0f, 0x1.c42358p-22f, 0x1.1c116ep-62f, 0x1.7444b6p-70f,
     0x1.7ac6fcp-110f, 0.0f, 0.0f, 0x1.f8a264p-61f, 0.0f, 0x1.c24cb2p-35f,
     0x1.a1b10ep-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.82c48cp-119f,
     0.0f, 0x1.144298p-67f, 0x1.370c8cp-104f, 0x1.d35684p-15f, 0x1.b4d32cp-16f, 0.0f,
     0x1.d4864ep-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d425a6p-96f, 0x1.a8af32p-16f,
     0x1.f7d936p-112f, 0.0f, 0x1.c1434ap-27f, 0.0f, 0x1.626778p-35f, 0.0f, 0.0f,
     0x1.9c13e4p-11f, 0x1.49660cp-10f, 0.0f, 0.0f, 0x1.a44ab2p-72f, 0.0f,
     0x1.69ff58p-53f, 0x1.ca0976p-115f, 0.0f, 0.0f, 0x1.b1ef02p-100f, 0.0f,
     0x1.c6741ap-104f, 0x1.c400aep-86f, 0x1.fda47ap-124f, 0.0f, 0.0f, 0x1.5ba1fap-74f,
     0x1.123932p-16f, 0.0f, 0.0f, 0x1.251aeap-19f, 0x1.0e71a2p-32f, 0x1.82a1aep-109f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.8b2f54p-27f, 0.0f, 0x1.e35e6p-114f, 0.0f,
     0x1.de399p-37f, 0x1.f9c306p-98f, 0x1.f40206p-70f, 0.0f, 0x1.bd7144p-119f,
     0x1.c507bep-87f, 0x1.15cffap-91f, 0x1.f600dcp-115f, 0x1.9d74bp-60f, 0.0f, 0.0f,
     0x1.18f2ecp-82f, 0x1.6a0e2ap-77f, 0.0f, 0x1.6f095p-96f, 0x1.a4d068p-67f,
     0x1.995b02p-55f, 0.0f, 0x1.a4b4c4p-9f, 0x1.49f27p-61f, 0x1.2e62dp-103f,
     0x1.c7997cp-13f, 0x1.49d122p-61f, 0.0f, 0x1.27595cp-16f, 0.0f, 0x1.f5fd14p-124f,
     0x1.52737cp-22f, 0x1.de0424p-30f, 0.0f, 0x1.a2ba52p-44f, 0x1.72e99ap-1f,
     0x1.67beb6p-36f, 0.0f, 0.0f, 0x1.ecb344p-14f, 0.0f, 0.0f, 0x1.f27354p-83f,
     0x1.0eb856p-10f, 0.0f, 0x1.c4d8ecp-7f, 0.0f, 0.0f, 0.0f, 0x1.fe07f8p-50f, 0.0f,
     0x1.722534p-110f, 0.0f, 0x1.d386cep-20f, 0x1.1af66ep-55f, 0x1.cb4234p-71f,
     0x1.43ec74p-53f, 0.0f, 0x1.cce02ep-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c34076p-31f,
     0.0f, 0.0f, 0x1.8c941p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0fbee8p-58f, 0.0f, 0.0f,
     0x1.ea71d8p-114f, 0x1.457be6p-111f, 0.0f, 0x1.c49c4ep-34f, 0.0f, 0x1.b32d76p-27f,
     0x1.7ba93ep-9f, 0.0f, 0x1.897fcp-105f, 0.0f, 0x1.65b198p-37f, 0x1.1844d2p-98f,
     0.0f, 0x1.461f86p-71f, 0.0f, 0.0f, 0x1.2dd3dp-11f, 0.0f, 0.0f, 0x1.cfbeaap-75f,
     0.0f, 0x1.4d09fcp-12f, 0.0f, 0x1.6d605p-34f, 0.0f, 0x1.af3668p-77f, 0.0f,
     0x1.b1da2ep-88f, 0x1.6c3bb2p-97f, 0.0f, 0.0f, 0x1.553f68p-76f, 0.0f,
     0x1.778482p-81f, 0x1.6f35b2p-5f, 0x1.4cf28ep-76f, 0x1.2a0be2p-87f, 0.0f, 0.0f,
     0.0f, 0x1.d5206ap-86f, 0.0f, 0.0f, 0x1.3daaf2p-15f, 0x1.de943ap-82f,
     0x1.43a61ep-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7aab4cp-21f, 0.0f, 0.0f,
     0x1.147adcp-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8f2d7ap-26f, 0.0f, 0.0f,
     0x1.9b82a2p-47f, 0.0f, 0.0f, 0x1.baff34p-8f, 0x1.51c7fcp-32f, 0.0f, 0.0f,
     0x1.ed5378p-17f, 0x1.6063e8p-50f, 0x1.8f7966p-18f, 0x1.e0eb4ap-35f, 0.0f, 0.0f,
     0x1.8404ap-32f, 0x1.2b426ep-115f, 0.0f, 0.0f, 0.0f, 0x1.749154p-75f, 0x1p0f,
     0.0f, 0x1.27551ep-93f, 0x1.271f44p-18f, 0x1.69fddp-105f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.41775cp-44f, 0x1.85467ep-72f, 0.0f, 0x1.2c3466p-29f, 0x1.573b54p-45f,
     0x1.5ed9f6p-60f, 0.0f, 0x1.a58e8cp-39f, 0.0f, 0x1.576f6ap-18f, 0.0f,
     0x1.becca8p-54f, 0.0f, 0x1.f10d06p-14f, 0x1.6defcp-100f, 0x1.7d8d42p-69f, 0.0f,
     0x1.ed868cp-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eb6b7cp-120f, 0x1.b19b6cp-2f,
     0x1.02f77ap-80f, 0x1.cc2e06p-75f, 0x1.dd147ep-92f, 0x1.93c108p-62f, 0.0f,
     0x1.d4e99cp-110f, 0x1.7f0be2p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0e764p-13f,
     0x1.2d4c9ap-49f, 0x1.3bbfc6p-97f, 0x1.51da84p-7f, 0x1.40124ep-67f,
     0x1.f6873cp-89f, 0.0f, 0.0f, 0x1.3f8fb4p-32f, 0.0f, 0.0f, 0x1.8af9a6p-22f,
     0x1.b208ep-109f, 0x1.9fe38ap-72f, 0x1.feaeacp-114f, 0x1.3af86ep-48f, 0.0f,
     0x1.556ap-43f, 0x1.ac3faap-33f, 0.0f, 0.0f, 0x1.76386ap-100f, 0.0f,
     0x1.418d9cp-101f, 0x1.3b0906p-9f, 0x1.3417e8p-32f, 0x1.7c290ep-19f, 0.0f, 0.0f,
     0x1.ff29d8p-33f, 0x1.f795f2p-7f, 0.0f, 0x1.c73a3p-5f, 0x1.37ce3ep-44f,
     0x1.fbe39ep-94f, 0.0f, 0x1.fa1068p-119f, 0.0f, 0x1.2556fcp-45f, 0.0f, 0.0f,
     0x1.9b6526p-45f, 0.0f, 0x1.c75578p-6f, 0.0f, 0x1.31bf1cp-105f, 0x1.7536e6p-43f,
     0.0f, 0.0f, 0x1.e369c2p-76f, 0.0f, 0x1.bf9e7p-125f, 0x1.90de04p-70f,
     0x1.8cbae4p-90f, 0x1.6f452cp-18f, 0x1.3c4b3ap-87f, 0x1.65d2b4p-1f,
     0x1.610df4p-18f, 0x1.7c5faap-125f, 0x1.88828ep-113f, 0.0f, 0.0f, 0.0f,
     0x1.20e572p-58f, 0x1.5481e2p-95f, 0.0f, 0.0f, 0x1.ed8002p-26f, 0.0f,
     0x1.f25452p-106f, 0x1.4d9f8ap-64f, 0x1.d7d7dcp-106f, 0x1.e89a88p-93f,
     0x1.049fe4p-78f, 0.0f, 0x1.857b7ap-5f, 0.0f, 0x1.2c9494p-77f, 0x1.9627fp-25f,
     0.0f, 0x1.0adebp-102f, 0.0f, 0.0f, 0.0f, 0x1.02f862p-63f, 0x1.422c6ep-115f, 0.0f,
     0.0f, 0x1.1284dcp-94f, 0x1.954254p-14f, 0x1.d5d55cp-108f, 0x1.759fdcp-30f, 0.0f,
     0x1.08f474p-11f, 0.0f, 0x1.842e6ap-91f, 0x1.916aaap-111f, 0.0f, 0.0f, 0.0f,
     0x1.00f8aap-6f, 0x1.d49edap-30f, 0.0f, 0x1.d1661ep-63f, 0.0f, 0x1.4d936cp-6f,
     0x1.be5e3cp-6f, 0.0f, 0.0f, 0x1.8e032p-115f, 0x1.4ae7f2p-18f, 0.0f,
     0x1.725b08p-40f, 0.0f, 0x1.511716p-48f, 0.0f, 0.0f, 0x1.5a6908p-47f,
     0x1.c3ca7p-52f, 0x1.336cd6p-62f, 0x1.9b1bd6p-63f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fede62p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.996768p-10f, 0.0f,
     0x1.c1b8bcp-17f, 0.0f, 0x1.2b0decp-28f, 0.0f, 0x1.33c012p-118f, 0.0f,
     0x1.a2aedap-21f, 0x1.26da36p-91f, 0x1.227274p-15f, 0.0f, 0x1.3d31eep-59f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.29484cp-19f, 0x1.13a208p-19f, 0.0f,
     0x1.3d6ef2p-82f, 0x1.78a79p-44f, 0x1.ecba86p-70f, 0x1.81d538p-105f,
     0x1.bda7aep-23f, 0.0f, 0x1.fbb90ep-91f, 0.0f, 0x1.b4b008p-80f, 0x1.a6afb4p-10f,
     0x1.f4eb2ep-113f, 0.0f, 0x1.55f334p-20f, 0x1.ef099p-112f, 0.0f, 0x1.57c38cp-82f,
     0.0f, 0.0f, 0x1.f07da2p-2f, 0.0f, 0x1.78aed8p-103f, 0.0f, 0x1.3ed00cp-46f,
     0x1.d95f98p-4f, 0.0f, 0.0f, 0.0f, 0x1.30e65ap-7f, 0.0f, 0.0f, 0.0f,
     0x1.0bb6b2p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.be9128p-37f, 0.0f,
     0x1.2f6802p-12f, 0.0f, 0x1.ad3bdcp-35f, 0x1.16a13ep-56f, 0x1.56f432p-116f,
     0x1.2d036cp-20f, 0x1.cb9494p-65f, 0x1.79d9e6p-102f, 0.0f, 0x1.3d5c26p-24f, 0.0f,
     0.0f, 0.0f, 0x1.9c60b2p-18f, 0x1.55cd26p-21f, 0x1.2a82fcp-71f, 0x1.879716p-15f,
     0x1.84febap-106f, 0.0f, 0.0f, 0x1.0d76e6p-117f, 0.0f, 0.0f, 0x1.a3518ap-112f,
     0.0f, 0x1.f8642p-5f, 0.0f, 0.0f, 0.0f, 0x1.41a1d4p-87f, 0x1.dfd17ap-9f, 0.0f,
     0x1.ff8e06p-43f, 0x1.b60084p-123f, 0x1.4ee094p-62f, 0.0f, 0x1.9570eap-31f,
     0x1.9eb57ep-90f, 0x1.509c2ap-74f, 0.0f, 0x1.de8d1ap-98f, 0x1.6b3f84p-86f,
     0x1.a65c46p-72f, 0x1.54c468p-34f, 0.0f, 0x1.d50d84p-51f, 0.0f, 0.0f,
     0x1.52f0c4p-23f, 0x1.98a222p-115f, 0.0f, 0.0f, 0x1.a99a0ep-109f, 0.0f,
     0x1.7561d6p-27f, 0.0f, 0x1.b46d18p-17f, 0x1.df7ea2p-71f, 0.0f, 0x1.6cec04p-58f,
     0x1.ca7502p-42f, 0.0f, 0.0f, 0.0f, 0x1.775cfp-119f, 0x1.258fe8p-82f,
     0x1.6a3678p-31f, 0x1.5a5afcp-85f, 0x1.7dcd86p-18f, 0x1.54f3dcp-69f, 0x1p0f, 0.0f,
     0x1.8046ecp-34f, 0x1.467786p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.16d742p-28f, 0.0f, 0x1.0368f6p-76f, 0x1.3710bp-27f, 0x1.b5185ep-42f,
     0x1.d43ccap-73f, 0.0f, 0.0f, 0x1.213714p-111f, 0x1.df89aap-107f,
     0x1.b51d5ep-103f, 0x1.35612ap-41f, 0.0f, 0.0f, 0x1.02bab4p-103f, 0x1.5bf642p-10f,
     0x1.f33dc8p-41f, 0.0f, 0.0f, 0x1.637c5p-32f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e631b2p-31f, 0.0f, 0x1.639c1cp-63f, 0.0f, 0.0f, 0.0f, 0x1.7571c6p-18f, 0.0f,
     0x1.6b974cp-112f, 0.0f, 0x1.3c46ecp-110f, 0x1.33e3fcp-75f, 0x1.0a0ce6p-44f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.568b36p-28f, 0.0f, 0.0f, 0.0f, 0x1.b9516p-100f,
     0x1.de32e2p-119f, 0x1.6d6abcp-22f, 0x1.1f9adp-107f, 0.0f, 0x1.f2ef56p-31f, 0.0f,
     0.0f, 0.0f, 0x1.04902p-19f, 0x1.88aae8p-52f, 0x1.c12a6ap-73f, 0x1.c69542p-109f,
     0.0f, 0x1.ec9adap-13f, 0.0f, 0x1.315184p-65f, 0x1.99e188p-88f, 0.0f, 0.0f,
     0x1.d8418cp-65f, 0x1.a81a9ep-42f, 0.0f, 0.0f, 0x1.388de4p-5f, 0.0f, 0.0f,
     0x1.99fe98p-99f, 0x1.b68fd6p-17f, 0.0f, 0x1.20a5d4p-16f, 0.0f, 0x1.1b2144p-52f,
     0x1.33f92ep-124f, 0x1.2cf296p-118f, 0x1.ceac4cp-98f, 0x1.24f0aap-29f,
     0x1.4fdaaap-72f, 0.0f, 0x1.9b7a2ap-34f, 0.0f, 0.0f, 0x1.4a23f6p-12f,
     0x1.5fc7a4p-116f, 0.0f, 0x1.9f642p-33f, 0x1.1ee2c4p-32f, 0.0f, 0.0f,
     0x1.f19486p-121f, 0.0f, 0x1.322116p-68f, 0x1.472f62p-112f, 0x1.01966p-77f, 0.0f,
     0.0f, 0x1.d4f062p-13f, 0.0f, 0.0f, 0.0f, 0x1.086a64p-87f, 0.0f, 0.0f, 0.0f,
     0x1.d57e4ap-50f, 0x1.9d266cp-40f, 0x1.62b3a2p-96f, 0x1.4856f2p-82f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.dd3a7ap-12f, 0.0f, 0x1.16ae7p-100f, 0.0f, 0x1.3aa35ap-89f,
     0.0f, 0.0f, 0.0f, 0x1.7377cp-27f, 0.0f, 0x1.7060a4p-122f, 0.0f, 0.0f,
     0x1.91af64p-40f, 0x1.f33e6p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.da4ff8p-6f,
     0x1.9648fp-93f, 0x1.23f872p-101f, 0.0f, 0x1.af3026p-20f, 0.0f, 0.0f,
     0x1.a5141ap-68f, 0x1.9b08ecp-5f, 0.0f, 0.0f, 0x1.b5a3d4p-60f, 0.0f,
     0x1.19625ep-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e7202p-62f, 0x1.979bb6p-126f, 0.0f, 0x1.544516p-117f, 0x1.28a1e2p-33f, 0.0f,
     0.0f, 0x1.125ec4p-63f, 0.0f, 0x1.5767bep-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5d0c0ap-32f, 0x1.2cc1fp-113f, 0.0f, 0x1.3aadccp-85f, 0x1.31cc54p-26f, 0.0f,
     0x1.dda84p-92f, 0.0f, 0x1.c28458p-19f, 0x1.44a85cp-33f, 0.0f, 0x1p0f,
     0x1.82ce5cp-25f, 0.0f
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
            tmp1 = Sleef_finz_log2f1_u35purecfma(tmp0);
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
    printf("Sleef_finz_log2f1_u35purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_log2f1_u35purecfma bench acc %a\n", global_bench_acc);
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
