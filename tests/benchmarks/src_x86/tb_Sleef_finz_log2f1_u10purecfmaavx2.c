/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_log2f1_u10purecfma.c --function \
 *     Sleef_finz_log2f1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0x1.8d9d6p-106f, 0x1.e9395ap-73f, 0x1.4a5eb8p-114f, 0.0f, 0.0f, 0.0f,
     0x1.ff8ef6p-46f, 0x1.d1544cp-26f, 0x1.bd810ep-23f, 0x1.b11a16p-38f,
     0x1.9fa446p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ea0c52p-80f, 0x1.39727p-21f, 0.0f,
     0.0f, 0x1.6225d4p-30f, 0.0f, 0.0f, 0.0f, 0x1.090e4ep-109f, 0.0f, 0.0f,
     0x1.de78bp-13f, 0x1.00329cp-59f, 0x1.e357f4p-97f, 0.0f, 0x1.c2853ep-80f,
     0x1.b996d6p-97f, 0x1.990754p-50f, 0x1.b574ccp-112f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4e5e1ap-117f, 0x1.760278p-93f, 0x1.113f4ep-54f, 0x1.d8f218p-44f, 0.0f,
     0x1.f7c94cp-87f, 0x1.eb4bfcp-2f, 0x1.da3c86p-17f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9bbeap-50f, 0.0f, 0.0f, 0x1.0cdb76p-92f, 0.0f, 0x1.2e7094p-88f,
     0x1.b009ecp-53f, 0x1.81e9ecp-106f, 0x1.c0318ep-97f, 0x1.01a3bcp-42f,
     0x1.40f316p-19f, 0.0f, 0x1.ef65bcp-2f, 0.0f, 0x1.74db88p-15f, 0x1.600d02p-91f,
     0x1.c8777ap-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a1249cp-72f, 0x1.8273aap-117f,
     0x1.c7958p-67f, 0.0f, 0.0f, 0x1.e36344p-11f, 0.0f, 0.0f, 0x1.6f2a32p-5f, 0.0f,
     0x1.f6ea14p-107f, 0.0f, 0.0f, 0x1.5966a4p-85f, 0.0f, 0.0f, 0x1.836f6ep-4f,
     0x1.ae56dp-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.56a5d4p-61f, 0.0f,
     0x1.73cc56p-30f, 0x1.7a1d06p-46f, 0.0f, 0.0f, 0.0f, 0x1.fe2b34p-126f,
     0x1.4c6b98p-106f, 0x1.f13284p-56f, 0.0f, 0.0f, 0x1.55ae36p-80f, 0x1.a8fa14p-115f,
     0x1.f38888p-115f, 0.0f, 0x1.087f7cp-76f, 0.0f, 0.0f, 0x1.f4c5d2p-117f,
     0x1.7c4948p-4f, 0x1.c34428p-119f, 0.0f, 0x1.d04f68p-64f, 0.0f, 0x1.07243ep-45f,
     0.0f, 0.0f, 0x1.d2fe2ep-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.34f7b4p-55f, 0x1.429316p-72f, 0x1.75c008p-51f, 0.0f, 0x1.744cdp-66f, 0.0f,
     0x1.8b304p-44f, 0.0f, 0x1.7b83p-91f, 0x1.05012ep-50f, 0x1.a7fe12p-48f, 0.0f,
     0.0f, 0.0f, 0x1.5130b4p-5f, 0x1.e84bccp-17f, 0.0f, 0x1.27afb6p-107f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.56119ap-73f, 0x1.d96f8cp-63f, 0.0f, 0x1.7673c2p-2f,
     0x1.2cabe2p-57f, 0x1.1efcp-51f, 0.0f, 0x1.f914acp-52f, 0.0f, 0x1.46142p-104f,
     0.0f, 0x1.36cd5ep-38f, 0x1.b2fa4p-38f, 0.0f, 0x1.96de76p-21f, 0x1.13e0bp-67f,
     0.0f, 0x1.a384ap-104f, 0.0f, 0x1.b81172p-6f, 0x1.0edc48p-46f, 0x1.8439c8p-23f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.608c64p-69f,
     0x1.86333ap-116f, 0.0f, 0x1.11d81cp-16f, 0.0f, 0x1.df17fp-82f, 0x1.809afcp-72f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.fe8058p-2f, 0.0f, 0.0f, 0.0f, 0x1p0f,
     0x1.9e8bacp-95f, 0.0f, 0.0f, 0x1.4fe4cep-47f, 0.0f, 0x1.56953ap-5f,
     0x1.473a58p-33f, 0x1.da7dccp-5f, 0x1.894186p-106f, 0x1.a5f36ap-49f,
     0x1.9fbec8p-19f, 0.0f, 0x1.b49678p-3f, 0x1.c3cabap-37f, 0x1.d9ed7ap-68f,
     0x1.2dfb8cp-63f, 0.0f, 0x1.6cb48p-75f, 0x1.6e127p-51f, 0.0f, 0x1.31dea2p-82f,
     0.0f, 0x1.f78c1cp-55f, 0.0f, 0.0f, 0x1.402c86p-59f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4cdb8cp-7f, 0x1.9aee96p-82f, 0x1.4a7308p-1f, 0x1.55318ap-38f,
     0x1.8b9e5ep-83f, 0x1.84dbe2p-44f, 0.0f, 0x1.a8166cp-57f, 0.0f, 0.0f,
     0x1.e8da42p-37f, 0.0f, 0x1.1c509ep-67f, 0.0f, 0x1.4bddfap-71f, 0.0f,
     0x1.03e0c6p-122f, 0x1.7b15cp-6f, 0x1.22eabep-61f, 0.0f, 0.0f, 0x1.6b6284p-124f,
     0.0f, 0x1.3725d4p-30f, 0x1.ccbedp-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.55424ep-80f, 0x1.9d7564p-10f, 0x1.19a776p-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.1c3be2p-103f, 0x1.75acc4p-57f, 0x1.ad5b9ap-24f,
     0x1.8b9a8ep-116f, 0x1.324344p-102f, 0x1.6a77fp-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.19d20ap-60f, 0.0f, 0.0f, 0.0f, 0x1.31cc4p-20f, 0x1.6599f8p-54f,
     0x1.4c250ap-125f, 0.0f, 0x1.8fe3p-38f, 0x1p0f, 0.0f, 0.0f, 0x1.dab23ap-116f,
     0x1.ca4b74p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ff3cc2p-58f, 0x1.7d784p-20f,
     0x1.90cbf4p-77f, 0.0f, 0.0f, 0x1p0f, 0x1.262028p-12f, 0x1.52ac8ap-40f,
     0x1.95c366p-54f, 0x1.93024ap-20f, 0.0f, 0.0f, 0x1.581be2p-105f, 0x1.a716c8p-9f,
     0.0f, 0x1.6235dep-25f, 0.0f, 0x1.3d91bp-3f, 0x1.811d54p-23f, 0x1.9028f2p-80f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.2e371p-122f, 0.0f, 0.0f, 0x1.83f384p-46f,
     0x1.a61e16p-120f, 0.0f, 0.0f, 0.0f, 0x1.deb90ap-32f, 0x1.adc02ap-80f, 0.0f, 0.0f,
     0.0f, 0x1.49661cp-73f, 0.0f, 0.0f, 0x1.028a92p-13f, 0.0f, 0x1.4c28a6p-52f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9ab94ap-7f, 0.0f, 0x1.81c18p-4f,
     0.0f, 0.0f, 0x1.6d401cp-8f, 0.0f, 0.0f, 0.0f, 0x1.303098p-30f, 0x1.fe025p-61f,
     0.0f, 0x1.059158p-41f, 0x1.007358p-42f, 0.0f, 0.0f, 0x1.511e4ap-119f, 0.0f,
     0x1.650ef6p-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f183f6p-7f, 0x1.37b1b8p-97f, 0.0f,
     0x1.5761fp-5f, 0.0f, 0.0f, 0x1.79cae4p-114f, 0x1.a61b82p-100f, 0x1.74f96cp-54f,
     0x1.461fccp-32f, 0.0f, 0x1.5fb2dp-2f, 0.0f, 0x1.a1b34ep-11f, 0x1.1bad4ep-80f,
     0x1.c1a588p-60f, 0.0f, 0.0f, 0x1.90c698p-23f, 0.0f, 0.0f, 0x1.edcc7ep-69f, 0.0f,
     0x1.1fd3f4p-3f, 0x1.836912p-67f, 0.0f, 0x1.7811ecp-68f, 0.0f, 0.0f, 0.0f,
     0x1.3ce21ap-90f, 0x1.9c4ddp-61f, 0.0f, 0x1.1761f6p-36f, 0x1.b02b48p-121f,
     0x1.b5272p-66f, 0x1.54e676p-121f, 0.0f, 0.0f, 0x1.18032cp-105f, 0x1.314ac8p-5f,
     0x1.899bc8p-2f, 0x1.ebe4p-81f, 0.0f, 0x1.0335b6p-69f, 0x1.1fd352p-60f,
     0x1.71d98cp-108f, 0.0f, 0x1.e177ep-107f, 0.0f, 0.0f, 0x1.f564bap-45f,
     0x1.5374e4p-30f, 0x1.4076d6p-56f, 0.0f, 0x1.f27216p-30f, 0.0f, 0x1.e3953cp-76f,
     0.0f, 0.0f, 0.0f, 0x1.0caaf4p-78f, 0x1.0ef208p-63f, 0.0f, 0.0f, 0x1.2e608cp-10f,
     0.0f, 0x1.38b14ep-34f, 0.0f, 0x1.8a953cp-1f, 0x1.5503bap-121f, 0x1.76d1eap-53f,
     0x1.7723ep-120f, 0.0f, 0x1.53525ap-75f, 0x1.343fbp-102f, 0.0f, 0x1.bfdfe6p-11f,
     0.0f, 0.0f, 0x1.5e4dc6p-123f, 0.0f, 0.0f, 0x1.d1387p-107f, 0x1.787c2ap-51f,
     0x1.703a7cp-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5a567ap-90f, 0x1.93656ep-10f,
     0.0f, 0x1.fa438p-81f, 0x1.8e35cp-110f, 0x1.ba2f82p-46f, 0.0f, 0.0f, 0.0f,
     0x1.30e286p-33f, 0x1.02350cp-106f, 0.0f, 0.0f, 0x1.680732p-35f, 0x1.aecd54p-38f,
     0.0f, 0.0f, 0.0f, 0x1.821d42p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.edb338p-29f,
     0x1.6f1572p-46f, 0.0f, 0x1.3d5b46p-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ea9ad4p-40f,
     0x1.692eaep-113f, 0.0f, 0x1.de56acp-50f, 0.0f, 0x1.5b232ep-29f, 0x1.52f2bep-50f,
     0.0f, 0x1.b35fb6p-81f, 0x1.86f3d6p-57f, 0x1.fb7cfp-47f, 0.0f, 0.0f, 0.0f,
     0x1.5fda3ep-36f, 0.0f, 0x1.f27d3cp-25f, 0x1.de7a68p-8f, 0x1.712378p-16f,
     0x1.1240b8p-4f, 0x1.0d9eep-24f, 0.0f, 0.0f, 0x1.4c3d82p-100f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.efd18ap-4f, 0.0f, 0.0f, 0x1.b579f6p-79f, 0.0f,
     0x1.b5fa06p-18f, 0.0f, 0.0f, 0.0f, 0x1.949de6p-124f, 0x1.6f7bcep-42f,
     0x1.26cb8ap-2f, 0.0f, 0x1.5596bap-52f, 0x1.5184f2p-60f, 0x1.a5634ep-12f, 0.0f,
     0.0f, 0.0f, 0x1.66967cp-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.0b3f46p-24f, 0.0f, 0x1.2219f6p-111f, 0x1.f4311ap-8f, 0.0f, 0.0f,
     0x1.3157c4p-102f, 0.0f, 0.0f, 0x1.f052ecp-16f, 0x1.7f0494p-47f, 0.0f, 0.0f,
     0x1.58260ap-7f, 0x1.fe58cap-2f, 0x1.e09a8cp-6f, 0x1.0a24ap-4f, 0.0f,
     0x1.0e0f8p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.167beap-110f, 0x1.070d5p-82f, 0.0f,
     0x1.56be82p-73f, 0.0f, 0x1.56cd42p-49f, 0.0f, 0x1.aef6d6p-107f, 0.0f, 0.0f,
     0x1.d864eap-8f, 0x1.b2f91cp-5f, 0x1.0eb52p-64f, 0.0f, 0.0f, 0x1.3a56d6p-57f,
     0x1.5a07c2p-1f, 0.0f, 0x1.169bb4p-19f, 0x1.f932c2p-83f, 0.0f, 0.0f,
     0x1.8eb5bap-109f, 0.0f, 0x1.13d03ap-22f, 0.0f, 0.0f, 0x1.179df6p-73f, 0.0f, 0.0f,
     0x1.2b7164p-7f, 0.0f, 0x1.dd2992p-67f, 0.0f, 0.0f, 0.0f, 0x1.4d458ap-7f,
     0x1.50a3c8p-104f, 0.0f, 0.0f, 0.0f, 0x1.9a4e5p-83f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.29115p-41f, 0x1.d2fd3p-15f, 0.0f, 0x1.ca43e8p-120f, 0x1.71b314p-47f, 0.0f,
     0.0f, 0x1.f73bap-97f, 0.0f, 0x1.8e205p-76f, 0.0f, 0x1.b96936p-121f,
     0x1.2a3deep-91f, 0x1.1839aap-107f, 0x1.c17df4p-11f, 0x1.b945a2p-124f,
     0x1.5bb5a6p-87f, 0x1.9b75f8p-3f, 0.0f, 0.0f, 0.0f, 0x1.cc1576p-42f,
     0x1.b31b64p-10f, 0.0f, 0x1.506fbcp-109f, 0.0f, 0x1.3bd73ap-66f, 0x1.79768cp-19f,
     0x1.0804bp-89f, 0.0f, 0x1.4674c4p-112f, 0.0f, 0.0f, 0x1.f28104p-106f,
     0x1.d208acp-109f, 0.0f, 0.0f, 0x1.8e4b04p-9f, 0.0f, 0.0f, 0x1.6f8e4ep-41f,
     0x1.0fe4bap-62f, 0.0f, 0.0f, 0.0f, 0x1.bb820ap-26f, 0.0f, 0x1.d7ca7p-72f,
     0x1.ff4b3p-121f, 0.0f, 0x1.e058a4p-15f, 0x1.07253ep-89f, 0x1.b49a72p-101f,
     0x1.7e5a08p-112f, 0x1.98d728p-64f, 0.0f, 0.0f, 0.0f, 0x1.70a63cp-2f, 0.0f, 0.0f,
     0x1.c5944ap-106f, 0.0f, 0.0f, 0x1.1e896ap-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.0bf362p-112f, 0.0f, 0x1.4579f4p-38f, 0x1.55a502p-97f, 0.0f,
     0x1.a018b4p-61f, 0.0f, 0.0f, 0x1.46ff88p-77f, 0x1.404532p-75f, 0.0f, 0.0f,
     0x1.471856p-20f, 0x1.f9425cp-80f, 0.0f, 0x1.590854p-57f, 0.0f, 0.0f, 0.0f,
     0x1.abe4fap-97f, 0.0f, 0x1.e90ab6p-92f, 0.0f, 0.0f, 0x1.a8529ep-9f,
     0x1.2fd698p-40f, 0x1.4fc6a6p-43f, 0x1.25d2bp-118f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e3ccd4p-95f, 0x1.598d62p-38f, 0.0f, 0.0f, 0x1.e18e6ap-14f, 0x1.60e1cep-37f,
     0x1.8467e4p-47f, 0.0f, 0.0f, 0.0f, 0x1.a67ef6p-118f, 0.0f, 0x1.7e8f34p-65f,
     0x1.50dd32p-64f, 0.0f, 0.0f, 0x1.f0f936p-72f, 0x1.425b9ep-110f, 0x1.52486p-25f,
     0.0f, 0x1.306568p-33f, 0x1.a15d58p-94f, 0x1.6a6a0ep-45f, 0.0f, 0x1.0c9d4p-68f,
     0x1.ce1acep-103f, 0x1.b53642p-112f, 0x1.1094a8p-38f, 0x1.73c0f2p-66f,
     0x1.728726p-20f, 0.0f, 0.0f, 0x1.9d690ap-38f, 0x1.2d6c66p-22f, 0.0f,
     0x1.81fc94p-84f, 0x1.a0d084p-43f, 0x1.78fe6ep-62f, 0.0f, 0x1.1e6cfcp-49f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9ef504p-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6ee5b6p-100f,
     0.0f, 0x1.0a115ep-105f, 0x1.801402p-43f, 0x1.680a7p-84f, 0.0f, 0.0f,
     0x1.918e44p-116f, 0.0f, 0.0f, 0x1.3db55ep-126f, 0.0f, 0x1.7765e8p-91f,
     0x1.eda47ap-105f, 0.0f, 0x1.a43e78p-122f, 0.0f, 0.0f, 0.0f, 0x1.868aap-47f,
     0x1.577f4ap-64f, 0.0f, 0x1.fa804p-80f, 0.0f, 0.0f, 0.0f, 0x1.4405p-5f, 0.0f,
     0.0f, 0.0f, 0x1.1a64bp-15f, 0x1.c05cdep-76f, 0.0f, 0x1.2ab206p-100f,
     0x1.ab563ep-26f, 0.0f, 0x1.8dc64ap-79f, 0x1.6c4fc6p-11f, 0x1.e7ccfap-47f, 0.0f,
     0x1.24a0ccp-109f, 0x1.043ffp-37f, 0.0f, 0x1.89d554p-119f, 0.0f, 0x1.45082ep-7f,
     0.0f, 0x1.9336f8p-40f, 0.0f, 0.0f, 0x1.3645acp-3f, 0.0f, 0x1p0f, 0.0f, 0.0f,
     0x1.98395p-48f, 0.0f, 0.0f, 0x1.2dba96p-78f, 0x1.60273ep-78f, 0x1.28e6dap-8f,
     0x1.48cb4ep-38f, 0x1.05272p-45f, 0.0f, 0.0f, 0x1.dafcb6p-90f, 0.0f,
     0x1.32d7f2p-101f, 0x1.a9a16cp-70f, 0.0f, 0.0f, 0.0f, 0x1.8efb62p-119f,
     0x1.47444ap-17f, 0.0f, 0.0f, 0.0f, 0x1.b49156p-30f, 0x1.97be14p-60f, 0.0f, 0.0f,
     0x1.87b4c4p-83f, 0.0f, 0.0f, 0.0f, 0x1.0e6dfcp-95f, 0.0f, 0.0f, 0x1.f087d2p-114f,
     0.0f, 0.0f, 0x1.5a8ae4p-103f, 0x1.919bd6p-125f, 0x1.72fc84p-100f, 0.0f, 0.0f,
     0x1.1e7acp-106f, 0.0f, 0x1.2310a6p-112f, 0x1.61b16p-22f, 0.0f, 0.0f,
     0x1.936178p-48f, 0.0f, 0.0f, 0x1.ac1624p-99f, 0.0f, 0x1.4bd66ep-18f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.21083p-23f, 0.0f, 0x1.f9220cp-66f, 0x1.c7ad1ap-115f,
     0x1.d266c4p-14f, 0x1.9b00c8p-9f, 0.0f, 0.0f, 0x1.facba2p-32f, 0x1.b3aafcp-55f,
     0x1.3d13eap-44f, 0.0f, 0x1.32fdb6p-21f, 0x1.99e7acp-23f, 0.0f, 0.0f,
     0x1.f72b98p-17f, 0.0f, 0.0f, 0x1.b71becp-106f, 0x1.a156a6p-15f, 0x1.d2618cp-7f,
     0x1.492f12p-7f, 0.0f, 0.0f, 0x1.70f046p-19f, 0x1.fe7f38p-16f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.8d2e0ap-105f, 0x1.befdc4p-14f, 0.0f, 0x1.47537p-4f,
     0x1.5ae212p-125f, 0x1.fc7adcp-40f, 0.0f, 0x1.c3ee8ep-33f, 0x1.b47fc6p-71f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b6fb4ep-56f, 0.0f, 0.0f, 0.0f, 0x1.1658bep-102f, 0.0f,
     0x1.cb955p-9f, 0x1.319cep-119f, 0x1.d7b8f6p-96f, 0x1.def0c2p-7f, 0x1.b188e8p-11f,
     0.0f, 0.0f, 0x1.de6d2p-31f, 0.0f, 0.0f, 0.0f, 0x1.a9c34p-101f, 0.0f, 0.0f,
     0x1.ac3b32p-89f, 0.0f, 0x1.95195p-120f, 0x1.0f50dp-21f, 0x1.2d9392p-125f,
     0x1.52886ap-32f, 0x1.5b2b0ap-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.dcd382p-58f, 0x1.eb02c6p-29f, 0x1.55c4fep-104f, 0.0f, 0x1.42a042p-26f,
     0x1.8859d4p-57f, 0.0f, 0x1.dd6efp-11f, 0x1.ee1292p-74f, 0x1.698f3ap-77f, 0.0f,
     0x1.694d84p-109f, 0.0f, 0x1.982b94p-125f, 0.0f, 0.0f, 0x1.d11d86p-54f,
     0x1.e89e42p-29f, 0x1.cd9c06p-85f, 0x1.8defa2p-28f, 0.0f, 0x1.ea816ep-107f, 0.0f,
     0x1.b868a4p-51f, 0.0f, 0.0f, 0.0f
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
            tmp1 = Sleef_finz_log2f1_u10purecfma(tmp0);
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
    printf("Sleef_finz_log2f1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_log2f1_u10purecfma bench acc %a\n", global_bench_acc);
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
