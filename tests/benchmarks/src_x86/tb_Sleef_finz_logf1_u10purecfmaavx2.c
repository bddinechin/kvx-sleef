/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_logf1_u10purecfma.c --function \
 *     Sleef_finz_logf1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.e765d6p-74f, 0x1.1a9ca4p-17f, 0.0f, 0x1.00154ep-126f, 0x1.a0c592p-95f,
     0x1.03c60ap-115f, 0x1.d2f852p-7f, 0x1.b9e8aep-86f, 0x1.d7414ep-51f, 0.0f, 0.0f,
     0.0f, 0x1.4c0dcp-16f, 0x1.7d7b72p-31f, 0.0f, 0x1.347eccp-21f, 0x1.690a4ap-7f,
     0x1.f7515ep-87f, 0.0f, 0.0f, 0x1.384f1cp-8f, 0x1.c04858p-119f, 0.0f,
     0x1.b08d64p-97f, 0.0f, 0.0f, 0x1.514e2ap-51f, 0x1.128d2ap-3f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9596d4p-123f, 0.0f, 0.0f, 0x1.6468c2p-121f,
     0.0f, 0x1.4a2bbap-41f, 0.0f, 0x1.8fb788p-64f, 0x1.a22fe6p-35f, 0x1.6100eap-26f,
     0x1.2fad5cp-116f, 0.0f, 0x1.8d55d6p-4f, 0x1.a42bf8p-59f, 0x1.392d8cp-122f, 0.0f,
     0x1.dec3f2p-4f, 0x1.2a2b8cp-75f, 0.0f, 0.0f, 0.0f, 0x1.caabd4p-115f,
     0x1.7feea8p-39f, 0x1.540f2cp-12f, 0x1.97debep-87f, 0x1.0cd27ap-19f, 0.0f,
     0x1.d0a6b4p-117f, 0x1.baee1p-104f, 0.0f, 0x1.2c48ep-82f, 0.0f, 0x1.f2d084p-26f,
     0x1.c09da2p-77f, 0.0f, 0.0f, 0x1.4a4c66p-10f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9c5d62p-66f, 0.0f, 0.0f, 0x1.325c1p-84f, 0.0f, 0x1.f5bba8p-109f,
     0x1.28269cp-44f, 0.0f, 0.0f, 0x1.06dc3ap-35f, 0x1.81c3ap-52f, 0x1.c96b34p-44f,
     0.0f, 0x1.01fc2ep-10f, 0x1.c2f714p-119f, 0x1.7fb356p-39f, 0x1.9fd604p-20f, 0.0f,
     0x1.33bc88p-41f, 0.0f, 0x1.49ed3cp-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.07a2fep-95f,
     0.0f, 0.0f, 0.0f, 0x1.390dc6p-102f, 0x1.ac023p-3f, 0.0f, 0.0f, 0x1.285f7cp-84f,
     0x1.c6a5a8p-85f, 0x1.072e6p-54f, 0.0f, 0.0f, 0.0f, 0x1.7d331p-27f,
     0x1.62107cp-113f, 0.0f, 0x1.253786p-89f, 0x1.5ab414p-82f, 0x1.1fb18ep-49f, 0.0f,
     0x1.b59bf4p-81f, 0.0f, 0x1.5ee238p-17f, 0.0f, 0.0f, 0x1.6121c8p-73f, 0.0f,
     0x1.75518ep-73f, 0x1.38b104p-65f, 0x1.a5df18p-52f, 0.0f, 0x1.87c6acp-70f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ac7e1cp-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ae66e8p-54f,
     0.0f, 0.0f, 0x1.9eed8cp-122f, 0.0f, 0.0f, 0x1.af5488p-98f, 0x1.96cf92p-119f,
     0x1.03e926p-102f, 0x1.81d84cp-44f, 0x1.20468ep-10f, 0.0f, 0x1.a6e5bp-18f,
     0x1.92551ap-38f, 0.0f, 0x1.47dfe6p-89f, 0x1.fedad4p-5f, 0x1.2fae24p-58f,
     0x1.ed618cp-36f, 0x1.32ff9cp-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.792bap-31f,
     0x1.cf10d4p-116f, 0x1.f2b444p-102f, 0.0f, 0x1.6d5f1ap-119f, 0.0f,
     0x1.8aae8ap-102f, 0x1.7035d2p-11f, 0.0f, 0.0f, 0.0f, 0x1.59703p-70f,
     0x1.d1cc4ep-17f, 0.0f, 0x1.84ca96p-91f, 0x1.fcf32p-42f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b7f5a6p-49f, 0x1.10346p-31f, 0x1.9a0ed6p-91f, 0x1.7f7208p-48f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f0bb04p-104f,
     0x1.c7b35ep-115f, 0.0f, 0.0f, 0x1.94599ap-96f, 0.0f, 0.0f, 0x1.e89276p-16f, 0.0f,
     0x1.e9a77ep-87f, 0x1.0b633ap-119f, 0.0f, 0.0f, 0.0f, 0x1.bc5546p-75f, 0.0f, 0.0f,
     0x1.32ac2p-118f, 0x1.e51c16p-119f, 0.0f, 0x1.4129e6p-64f, 0x1.ffaa92p-102f,
     0x1.ad74bcp-101f, 0.0f, 0x1.c93538p-75f, 0x1.ea427cp-93f, 0x1.1b851cp-27f, 0.0f,
     0.0f, 0x1.9122e8p-5f, 0x1.c5bb7cp-27f, 0.0f, 0x1.b2ae78p-78f, 0.0f,
     0x1.3c338p-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.95472ap-31f, 0x1.5260fcp-118f, 0.0f,
     0x1.9317ecp-34f, 0.0f, 0.0f, 0x1.85cbfep-3f, 0.0f, 0.0f, 0x1.1d52bap-10f, 0.0f,
     0x1.8fd2b2p-74f, 0.0f, 0.0f, 0x1.c6bfeap-69f, 0x1.9ebe8ep-111f, 0x1.399968p-57f,
     0.0f, 0x1.2e9e92p-83f, 0.0f, 0x1.bc647p-117f, 0x1.29ddfep-91f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4c431p-55f, 0.0f, 0x1.54951ep-29f, 0.0f, 0.0f, 0x1.db7d2ep-65f,
     0x1.71797cp-76f, 0x1.53684ep-121f, 0.0f, 0x1.d5e124p-68f, 0x1.802366p-68f,
     0x1.6ec41ap-120f, 0.0f, 0.0f, 0x1.dbf12p-59f, 0.0f, 0x1.ae2bb2p-13f,
     0x1.6c8546p-87f, 0.0f, 0.0f, 0x1.32b0aap-53f, 0x1.de645ep-118f, 0.0f, 0.0f,
     0x1.98a416p-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bb74c6p-45f, 0x1.8117a8p-92f,
     0x1.d6588cp-47f, 0x1.b9accap-66f, 0x1.a9aa88p-14f, 0.0f, 0x1.ac2406p-92f,
     0x1.2bd7ep-90f, 0x1.315318p-44f, 0.0f, 0x1.4d1cdcp-79f, 0x1.024d92p-116f,
     0x1.95dce8p-73f, 0x1.8a099ap-50f, 0.0f, 0.0f, 0.0f, 0x1.7a3706p-101f,
     0x1.1cc74ap-122f, 0x1.db6762p-101f, 0.0f, 0x1.c43afcp-15f, 0x1.4c73bp-16f, 0.0f,
     0.0f, 0x1.b8165cp-120f, 0.0f, 0.0f, 0.0f, 0x1.69a832p-89f, 0x1.647efp-123f, 0.0f,
     0x1.d4188cp-66f, 0x1.60d7fep-112f, 0x1.bd6e64p-108f, 0x1.55c4bcp-108f,
     0x1.7a3bap-55f, 0x1.7cc496p-89f, 0.0f, 0x1.c9872ap-19f, 0.0f, 0x1.05299ap-82f,
     0.0f, 0x1.ff4f58p-13f, 0.0f, 0x1.5f8eb2p-41f, 0.0f, 0x1.4c676cp-121f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.596586p-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1aa348p-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b33936p-120f, 0x1.f76182p-125f, 0x1.08472p-10f, 0x1.2ac838p-73f, 0.0f,
     0x1.cc6396p-56f, 0x1.f1bb08p-4f, 0.0f, 0.0f, 0.0f, 0x1.f2f774p-120f,
     0x1.0b33dcp-89f, 0.0f, 0.0f, 0x1.2cd888p-103f, 0x1.310c7ap-83f, 0x1.a490e2p-81f,
     0.0f, 0.0f, 0x1.7f5b5ap-72f, 0x1.c2cac2p-10f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.52c7e6p-100f, 0.0f, 0x1.deac7ap-49f, 0x1.3a809ep-87f, 0.0f, 0.0f,
     0x1.cd1882p-22f, 0x1.cda64ep-38f, 0x1.08d6e6p-69f, 0.0f, 0x1.2828bep-121f, 0.0f,
     0x1.f70232p-30f, 0x1.726c2ap-68f, 0.0f, 0.0f, 0.0f, 0x1.75b73ep-4f,
     0x1.ad15a2p-2f, 0.0f, 0x1.c31b9ep-125f, 0x1.a5a0cep-37f, 0x1.79e51ep-104f,
     0x1.5f5a58p-91f, 0x1.6807f4p-80f, 0x1.13fc9p-78f, 0.0f, 0x1.4b2d6ep-109f, 0.0f,
     0.0f, 0.0f, 0x1.bcfd88p-97f, 0x1.2099c4p-44f, 0x1.0deb36p-103f, 0x1.05abfp-8f,
     0x1.d72c8p-11f, 0.0f, 0x1.254312p-65f, 0.0f, 0x1.6e041ap-101f, 0x1.ea50dcp-91f,
     0x1.c5b17ep-98f, 0.0f, 0.0f, 0x1.6fc366p-49f, 0x1.958422p-15f, 0x1.f885f6p-64f,
     0x1.e6a8c8p-21f, 0x1.05c734p-83f, 0x1.bd75f8p-37f, 0x1.324806p-117f,
     0x1.41bd08p-58f, 0x1.036d54p-43f, 0.0f, 0x1.0aed76p-38f, 0x1.96fe8ep-29f,
     0x1.98697p-95f, 0x1.c03d86p-27f, 0x1.836b46p-86f, 0x1.ca2faap-46f, 0.0f,
     0x1.3528e2p-113f, 0.0f, 0x1.682668p-118f, 0.0f, 0x1.e8a762p-14f, 0.0f,
     0x1.c26a7p-78f, 0x1.6b62ep-49f, 0x1.412da6p-119f, 0x1.d314a2p-11f,
     0x1.828e8ep-35f, 0.0f, 0x1.4c539ap-57f, 0.0f, 0.0f, 0x1.92d29ep-124f, 0.0f, 0.0f,
     0.0f, 0x1.b7bf3cp-120f, 0.0f, 0.0f, 0x1.eb87cp-78f, 0x1.a94646p-119f,
     0x1.53b14ap-99f, 0x1.f0bc1p-72f, 0.0f, 0.0f, 0x1.b0bdbcp-88f, 0x1.cb3d44p-39f,
     0x1.9d7602p-14f, 0.0f, 0x1.ef6b7ap-75f, 0.0f, 0x1.79ec28p-99f, 0x1.b35fdap-63f,
     0x1.9720bcp-126f, 0.0f, 0x1.1e7d02p-52f, 0.0f, 0.0f, 0x1.3a6e6p-10f, 0.0f, 0.0f,
     0.0f, 0x1.fa8aaep-5f, 0x1.e3c59cp-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.aef8c6p-85f, 0x1.c8a9dap-75f, 0.0f, 0x1.7b4ba4p-122f, 0x1.91b778p-84f,
     0x1.1b3b12p-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2ed492p-101f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.33e6cp-5f, 0.0f, 0x1.b223cep-63f, 0x1.c705p-57f,
     0x1.2c77a8p-86f, 0.0f, 0x1.d69ae2p-33f, 0x1.d1d816p-62f, 0x1.f07ea8p-115f,
     0x1.7cb0a4p-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.22d79cp-117f, 0.0f,
     0x1.e8497p-10f, 0x1.a941c6p-91f, 0x1.d48248p-48f, 0.0f, 0.0f, 0.0f,
     0x1.a0f9b4p-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5bc39cp-80f, 0x1.fc9dap-113f,
     0x1.ff6d7cp-115f, 0x1.fb42eap-63f, 0.0f, 0x1.481ecap-8f, 0.0f, 0x1.41ad02p-48f,
     0x1.261128p-61f, 0x1.815668p-31f, 0.0f, 0.0f, 0.0f, 0x1.182744p-46f,
     0x1.26be8p-70f, 0x1.8b4a1ep-110f, 0.0f, 0x1.fe4bbep-80f, 0.0f, 0.0f, 0.0f,
     0x1.d16432p-32f, 0.0f, 0.0f, 0x1.749c9p-105f, 0.0f, 0x1.b40544p-99f,
     0x1.d8ac2ep-14f, 0x1.3763dap-126f, 0.0f, 0.0f, 0x1.e343d2p-35f, 0x1.91a71ep-109f,
     0.0f, 0.0f, 0.0f, 0x1.155f14p-11f, 0x1.d0e758p-41f, 0x1.9220fp-110f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.dabfa4p-116f, 0x1.4df53cp-20f, 0.0f, 0x1.6935aep-125f, 0.0f,
     0.0f, 0x1.c86cap-26f, 0.0f, 0.0f, 0x1.c86d2p-92f, 0.0f, 0.0f, 0.0f,
     0x1.12893ap-79f, 0.0f, 0.0f, 0x1.cd78c4p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9ed2f8p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e947e4p-115f, 0.0f, 0x1.a1a86p-5f,
     0x1.e42692p-49f, 0.0f, 0x1.10d6c2p-8f, 0x1.35b248p-32f, 0.0f, 0x1.16ad5ep-112f,
     0x1.bda712p-110f, 0.0f, 0.0f, 0x1.1540eep-9f, 0.0f, 0.0f, 0x1.b21872p-59f, 0.0f,
     0x1.9045acp-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c458a2p-82f, 0x1.eb17a4p-121f,
     0x1.7b7374p-126f, 0.0f, 0x1.5e1876p-121f, 0.0f, 0x1.4eb3cp-89f, 0x1.3370ccp-71f,
     0.0f, 0x1.a9fa8ep-105f, 0x1.70c9aap-48f, 0.0f, 0.0f, 0x1.29a0b2p-74f,
     0x1.a153c8p-61f, 0.0f, 0x1.25c6e8p-79f, 0.0f, 0x1.9feaa6p-94f, 0x1.ec0328p-43f,
     0.0f, 0x1.404da6p-123f, 0x1.14e8c6p-42f, 0x1.a0bad2p-101f, 0.0f, 0.0f, 0.0f,
     0x1.8913e4p-118f, 0.0f, 0x1.fa9d1p-28f, 0x1.7c58aep-18f, 0x1.b83e4ap-39f,
     0x1.2a2618p-75f, 0.0f, 0.0f, 0.0f, 0x1.fc5d4p-119f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.91680ep-100f, 0.0f, 0x1.2b049cp-110f, 0x1.6d9f8ap-27f, 0.0f, 0x1.d6c998p-98f,
     0.0f, 0x1.3f067p-9f, 0.0f, 0x1.4b2d2p-105f, 0x1.450ff6p-45f, 0x1.cd3b0cp-24f,
     0.0f, 0x1.960a56p-32f, 0x1.07b906p-30f, 0x1.5fdc2ap-18f, 0x1.4afdcep-93f, 0.0f,
     0.0f, 0x1.476b4ap-14f, 0.0f, 0.0f, 0.0f, 0x1.a34caap-84f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d302c4p-86f, 0x1.b3d1acp-53f, 0x1.bf2512p-64f, 0.0f,
     0x1.356166p-28f, 0x1.c95828p-100f, 0.0f, 0x1.c4c3eap-97f, 0x1.00a06p-2f,
     0x1.c04138p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e71f2ep-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a302acp-90f, 0.0f,
     0x1.0f3082p-107f, 0.0f, 0.0f, 0x1.1783cep-17f, 0x1.85ed8ep-122f,
     0x1.b5af08p-119f, 0.0f, 0x1.8e116ap-13f, 0.0f, 0.0f, 0x1.b5b9ccp-18f, 0.0f,
     0x1.59be82p-124f, 0.0f, 0x1.0a3266p-105f, 0.0f, 0.0f, 0.0f, 0x1.48b258p-87f,
     0.0f, 0x1.f838f8p-92f, 0.0f, 0.0f, 0x1.fa6b38p-39f, 0x1.895f62p-58f,
     0x1.5552c4p-55f, 0.0f, 0x1.e7b3a8p-64f, 0.0f, 0.0f, 0x1.a6dea4p-62f, 0.0f, 0.0f,
     0.0f, 0x1.d01576p-41f, 0x1.c7be4ep-60f, 0.0f, 0.0f, 0.0f, 0x1.3cfd04p-76f, 0.0f,
     0x1.9ff052p-103f, 0x1.ce2d58p-120f, 0.0f, 0.0f, 0x1.8e8ea2p-12f, 0x1.08edf2p-36f,
     0.0f, 0.0f, 0x1.00bd26p-79f, 0.0f, 0.0f, 0x1.4d2ae4p-41f, 0.0f, 0x1.0e30dcp-58f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.656c06p-19f, 0x1.3611cap-102f, 0.0f, 0.0f, 0.0f,
     0x1.429e3cp-97f, 0x1.72216p-100f, 0x1.b6529p-104f, 0x1.93c92cp-124f, 0.0f,
     0x1.e35538p-39f, 0x1.769158p-89f, 0.0f, 0x1.5e42bap-66f, 0x1.d995p-15f, 0.0f,
     0x1.61419cp-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0f6eeap-62f,
     0x1.90c05ep-109f, 0.0f, 0x1.a1ca72p-122f, 0x1.2fe29cp-27f, 0.0f, 0x1.016454p-60f,
     0x1.8ee49cp-11f, 0.0f, 0x1.28bd22p-66f, 0.0f, 0.0f, 0.0f, 0x1.9be094p-22f,
     0x1.9915d4p-88f, 0x1.f62d44p-121f, 0.0f, 0.0f, 0x1.0a4bd6p-6f, 0x1.01168ap-49f,
     0.0f, 0x1.a4f78ep-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c8ed8ep-59f, 0x1.cd059ap-75f, 0.0f, 0.0f, 0x1.5be84ep-58f, 0.0f, 0.0f, 0.0f,
     0x1.15f28p-29f, 0x1.ba4514p-114f, 0.0f, 0x1.ea3aaap-60f, 0x1.8e248ap-101f,
     0x1.339ec6p-92f, 0.0f, 0.0f, 0x1.ba735p-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.cd6fb2p-17f, 0.0f, 0.0f, 0.0f, 0x1.c5c458p-42f, 0.0f, 0x1.a39a7ap-13f,
     0x1.80bc84p-58f, 0x1.0bb75cp-13f, 0x1.3836bp-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.60d13cp-115f, 0x1.a571e4p-28f, 0.0f, 0.0f, 0x1.cb9dc2p-92f, 0.0f,
     0x1.f0067p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.96d338p-21f, 0.0f,
     0x1.59b208p-96f, 0x1.96ccdp-105f, 0.0f, 0x1.188c8cp-11f, 0x1.f9099ap-124f,
     0x1.9ac7f2p-1f, 0x1.7f872ep-92f, 0x1.0f368ep-16f, 0x1.3a04dep-117f, 0.0f, 0.0f,
     0.0f, 0x1.afcaf8p-30f, 0.0f, 0x1.dc2acap-2f, 0.0f, 0x1.610c72p-1f, 0.0f, 0.0f,
     0.0f, 0x1.ffa764p-100f, 0.0f, 0x1.587418p-18f, 0.0f, 0x1.100354p-32f, 0.0f, 0.0f,
     0x1.6788ep-83f, 0x1.7bc93cp-14f, 0x1.40f6bp-87f, 0x1.2b8032p-123f,
     0x1.b0e8bcp-84f, 0.0f, 0.0f, 0x1.b87a52p-97f, 0.0f, 0x1.1ac658p-50f, 0.0f, 0.0f,
     0x1.14486ep-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.08c774p-88f, 0.0f, 0.0f,
     0x1.c7d9b2p-52f, 0.0f, 0.0f, 0x1.34d14p-58f, 0.0f, 0x1.914e4cp-106f, 0.0f, 0.0f,
     0x1.b136f2p-80f, 0.0f, 0x1.e2a234p-35f, 0x1.a8ef7ep-14f, 0x1.23333ap-46f, 0.0f,
     0.0f, 0.0f, 0x1.b5cd66p-26f, 0.0f, 0.0f, 0x1.c92434p-54f, 0.0f, 0x1.807956p-112f,
     0.0f, 0.0f, 0x1.7ed684p-64f, 0.0f, 0.0f, 0.0f, 0x1.e3a876p-116f, 0x1.0d06bcp-56f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dfbf6ep-71f, 0x1.b427p-108f,
     0x1.82bedcp-59f, 0x1.e1dac2p-20f, 0.0f, 0.0f, 0x1.6062d6p-122f
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
            tmp1 = Sleef_finz_logf1_u10purecfma(tmp0);
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
    printf("Sleef_finz_logf1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_logf1_u10purecfma bench acc %a\n", global_bench_acc);
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
