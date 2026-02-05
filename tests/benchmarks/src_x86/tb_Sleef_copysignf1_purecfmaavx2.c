/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_copysignf1_purecfma.c --function \
 *     Sleef_copysignf1_purecfma --arity 2 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32,binary32 --bench --no-embedded-bin --target \
 *     x86_sse2
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
     0x1.d08f7p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.be7bb2p-1f, 0.0f,
     0x1.45ce5cp-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a280c8p-20f, 0.0f,
     0.0f, 0x1.b19714p-4f, 0x1.8c7f46p-6f, 0.0f, 0x1.519564p-56f, 0x1.6fde1ap-15f,
     0.0f, 0.0f, 0.0f, 0x1.997ca6p-56f, 0x1.a10b32p-29f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.960a9p-78f, 0.0f, 0x1.d7f5fcp-42f, 0.0f, 0x1.e826fap-89f, 0.0f, 0.0f,
     0x1.149bcep-2f, 0x1.82003cp-22f, 0.0f, 0.0f, 0x1.450b2p-61f, 0x1.c89a4cp-39f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.1cbdc4p-6f, 0x1.417166p-74f, 0x1.67eca6p-64f,
     0x1.597c88p-91f, 0x1.4b4062p-82f, 0.0f, 0.0f, 0.0f, 0x1.4c0acep-115f, 0.0f, 0.0f,
     0x1.ef5fp-100f, 0x1.9c510cp-45f, 0.0f, 0.0f, 0x1.a81d3cp-125f, 0.0f,
     0x1.6ea95ep-91f, 0.0f, 0.0f, 0x1.cdca14p-41f, 0x1.ee1dcep-46f, 0x1.d7111p-51f,
     0x1.dea526p-23f, 0.0f, 0x1.751514p-5f, 0x1.85e904p-47f, 0x1.064c1p-24f,
     0x1.39c276p-76f, 0x1.53c6aap-82f, 0x1.7acc4ap-32f, 0x1.1a6302p-76f, 0.0f, 0.0f,
     0x1.67885ap-80f, 0.0f, 0x1.6a4a56p-102f, 0x1.3b6a4p-102f, 0x1.c53fdcp-97f,
     0x1.59c85ap-106f, 0x1.2c4e5p-124f, 0.0f, 0x1.a2f2e6p-61f, 0.0f, 0x1.c8302ap-96f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0ab632p-52f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.706968p-23f, 0x1.ad1cf8p-73f, 0.0f, 0x1.05a86cp-32f, 0.0f, 0x1.d875f8p-66f,
     0.0f, 0x1.9789dep-64f, 0x1.5be82cp-68f, 0x1.9bccf4p-123f, 0.0f, 0x1.b6331p-126f,
     0.0f, 0x1.82292p-60f, 0x1.bbcdc8p-75f, 0.0f, 0x1.5d93fep-59f, 0.0f,
     0x1.65b61p-36f, 0x1.9e822ep-52f, 0x1.23ceb2p-6f, 0.0f, 0x1.7906dap-38f,
     0x1.c5f718p-78f, 0.0f, 0.0f, 0x1.d75a22p-44f, 0x1.61309p-110f, 0x1.6b15aap-66f,
     0.0f, 0x1.1cbc78p-8f, 0x1.f780a8p-66f, 0x1.f1df06p-105f, 0x1.062b3p-32f,
     0x1.3f12p-125f, 0x1.bc85dap-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c1d884p-126f,
     0x1.0b802ap-76f, 0.0f, 0.0f, 0x1.2f2726p-3f, 0.0f, 0.0f, 0x1.38b5p-122f, 0.0f,
     0x1.f374b8p-23f, 0x1.1df1f4p-2f, 0x1.9326eep-14f, 0x1.82c0a2p-65f,
     0x1.f250f4p-34f, 0.0f, 0.0f, 0x1.c881dcp-85f, 0.0f, 0x1.27e1ap-96f,
     0x1.f6b58ap-28f, 0x1.5d9762p-76f, 0.0f, 0x1.01a0bep-16f, 0.0f, 0x1.63fc2p-67f,
     0x1.74370ep-38f, 0x1.8ef2b6p-22f, 0x1.a81dfap-96f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.00481ep-18f, 0.0f, 0x1.7283fcp-91f, 0x1.3a0282p-79f, 0x1.d6e416p-24f,
     0x1.5f78ecp-43f, 0x1.f2c99ep-100f, 0.0f, 0x1.86ac26p-26f, 0.0f, 0x1.91ab1ap-72f,
     0x1.e9e008p-43f, 0x1.dd6e8ep-82f, 0.0f, 0.0f, 0.0f, 0x1.dc604cp-94f,
     0x1.c45d6ep-87f, 0x1.03ed48p-73f, 0.0f, 0.0f, 0.0f, 0x1.c8ecfp-96f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.952d9cp-4f, 0x1.1ac1cep-59f, 0x1.666056p-102f, 0.0f,
     0x1.b98a76p-84f, 0x1.3b980cp-22f, 0x1.3ba81ap-93f, 0.0f, 0x1.930226p-114f,
     0x1.2b3b44p-124f, 0.0f, 0x1.d86efap-35f, 0x1.4c2b78p-74f, 0.0f, 0.0f,
     0x1.40c818p-18f, 0x1.651beep-19f, 0x1.aecf96p-43f, 0.0f, 0x1.28b624p-1f,
     0x1.1be028p-53f, 0.0f, 0.0f, 0x1.e83866p-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.110c4ap-31f, 0.0f, 0x1.36c0dp-31f, 0.0f, 0x1.63320ep-74f, 0x1.8740fp-48f,
     0.0f, 0x1.642c1cp-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7bfae6p-50f, 0.0f,
     0x1.f56d6ep-106f, 0.0f, 0x1.89361cp-7f, 0x1.702f52p-93f, 0x1.707628p-80f, 0.0f,
     0x1.7e86eap-121f, 0x1.7928c6p-51f, 0x1.9576fcp-32f, 0x1.4b92bp-13f,
     0x1.cf6cap-95f, 0x1.1bdd2ep-48f, 0x1.03f234p-121f, 0x1.141d5p-114f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.51b5c2p-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a7c1bcp-19f,
     0x1.f42b5p-37f, 0x1.017c6cp-24f, 0.0f, 0x1.870c26p-47f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.164d2cp-46f, 0.0f, 0.0f, 0.0f, 0x1.de175ep-51f, 0.0f, 0.0f,
     0x1.74d56cp-86f, 0.0f, 0x1.53e2eep-120f, 0.0f, 0.0f, 0x1.342a0ap-106f,
     0x1.751c02p-116f, 0x1.703016p-111f, 0.0f, 0x1.ad517p-111f, 0x1.817f62p-96f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.8151bap-123f, 0x1.912696p-107f, 0.0f, 0.0f,
     0x1.5a42b6p-60f, 0x1.212ab8p-61f, 0.0f, 0x1.fd6732p-38f, 0x1.9110a8p-88f, 0.0f,
     0x1.fd0d68p-51f, 0x1.79fc3ep-51f, 0.0f, 0.0f, 0.0f, 0x1.fb7e1cp-116f,
     0x1.50dfd8p-45f, 0x1.f4e166p-65f, 0.0f, 0.0f, 0x1.1f328ep-15f, 0x1.ca9946p-78f,
     0.0f, 0.0f, 0x1.5ba3b4p-10f, 0x1.fb09eep-11f, 0x1.ffcc72p-46f, 0x1.5b7a52p-120f,
     0x1.e4938ep-115f, 0.0f, 0.0f, 0x1.e920ecp-86f, 0.0f, 0x1.1cc3f8p-123f, 0x1p0f,
     0.0f, 0x1.2eb8a4p-110f, 0x1.39611p-117f, 0x1.f71268p-27f, 0x1.691ddap-38f, 0.0f,
     0.0f, 0.0f, 0x1.f4ede2p-55f, 0x1.6f9762p-120f, 0x1.526814p-126f, 0.0f,
     0x1.1d71cep-53f, 0.0f, 0.0f, 0x1.b26f9ap-89f, 0x1.9147f4p-53f, 0x1.69644cp-107f,
     0x1.44312ep-68f, 0.0f, 0x1.0cc5dcp-43f, 0.0f, 0.0f, 0x1.d5b8dp-124f, 0.0f, 0.0f,
     0x1.897232p-63f, 0.0f, 0x1.4a8658p-114f, 0x1.34e048p-46f, 0.0f, 0.0f,
     0x1.ecbaa2p-14f, 0.0f, 0x1.11410ap-20f, 0.0f, 0x1.ad96b6p-57f, 0x1.9d50dep-35f,
     0x1.146998p-74f, 0x1.7cf948p-111f, 0x1.50f5d4p-17f, 0x1.8b925ap-118f, 0.0f, 0.0f,
     0x1.b5ab9ep-83f, 0x1.48ed3ap-112f, 0x1.d0af26p-20f, 0x1.3ba378p-96f, 0.0f,
     0x1.b6ba28p-92f, 0x1.238abep-88f, 0x1.61ebe4p-107f, 0.0f, 0x1.bfbap-72f,
     0x1.6be054p-30f, 0x1.49ff0ap-89f, 0.0f, 0.0f, 0.0f, 0x1.35a802p-108f, 0.0f,
     0x1.5be234p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ce528p-117f, 0x1.13e1d2p-64f, 0x1.0c704p-50f, 0x1.a01dacp-86f, 0.0f,
     0.0f, 0x1.707624p-45f, 0.0f, 0.0f, 0.0f, 0x1.5bd84cp-94f, 0x1.ef5ceap-64f,
     0x1.2f13e4p-8f, 0x1.1e543cp-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.84386ep-119f, 0.0f,
     0.0f, 0x1.d2418ep-125f, 0.0f, 0.0f, 0x1.91aaf4p-31f, 0.0f, 0.0f, 0x1.0b6d32p-24f,
     0x1.dbadep-57f, 0x1.b3cc74p-32f, 0.0f, 0x1.a006f6p-73f, 0x1.b387cap-84f, 0x1p0f,
     0.0f, 0x1.fb88f4p-47f, 0x1.1ec2c2p-16f, 0.0f, 0x1.c2749ap-93f, 0x1.1720cp-78f,
     0.0f, 0x1.8fe6d4p-79f, 0.0f, 0x1.172e7cp-71f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e512a6p-120f, 0.0f, 0x1.68618cp-10f, 0.0f, 0x1.d26ce8p-94f, 0x1.af304ap-54f,
     0x1.bda8a8p-112f, 0x1.954f72p-86f, 0x1.5c1fb6p-19f, 0.0f, 0x1.b4ac08p-90f, 0.0f,
     0.0f, 0.0f, 0x1.a183dap-66f, 0.0f, 0x1.6d9dccp-27f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.aab14ep-109f, 0x1.a43b2ep-107f, 0x1.6bb92ep-100f, 0.0f, 0x1.ad55a8p-124f,
     0.0f, 0x1.517aeap-96f, 0.0f, 0x1.d5da28p-31f, 0.0f, 0x1.60afe4p-90f, 0.0f,
     0x1.68d886p-30f, 0.0f, 0x1.3391ccp-85f, 0.0f, 0x1.2b26c4p-80f, 0.0f,
     0x1.20e1f6p-12f, 0x1.e57128p-79f, 0.0f, 0x1.a1c4fp-3f, 0x1.41b46cp-88f, 0.0f,
     0.0f, 0.0f, 0x1.1882ap-105f, 0.0f, 0.0f, 0x1.f47cdcp-1f, 0x1.a1a666p-66f, 0.0f,
     0x1.13331ap-67f, 0.0f, 0.0f, 0.0f, 0x1.4e48aep-37f, 0x1.19ec16p-30f, 0.0f,
     0x1.02d31ap-30f, 0.0f, 0x1.1f65bap-4f, 0.0f, 0.0f, 0x1.4df29ep-100f,
     0x1.c682bp-116f, 0x1.eb418p-84f, 0.0f, 0.0f, 0.0f, 0x1.b32682p-86f,
     0x1.903d82p-105f, 0x1.c77e0cp-28f, 0x1.2726p-40f, 0x1.8fcde6p-95f, 0.0f, 0.0f,
     0x1.8a46ecp-84f, 0.0f, 0.0f, 0.0f, 0x1.bb3ceep-95f, 0x1.8e4dbcp-109f, 0.0f, 0.0f,
     0x1.569476p-68f, 0.0f, 0x1.d4d95ap-77f, 0x1.d32808p-10f, 0.0f, 0x1.d96c2p-17f,
     0.0f, 0.0f, 0x1.a6de6ep-118f, 0x1.5965b4p-53f, 0x1.0a6cc8p-19f, 0.0f,
     0x1.d3e7a2p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8acfep-57f, 0.0f, 0x1.20c2e4p-102f,
     0.0f, 0.0f, 0x1.c34e52p-114f, 0.0f, 0.0f, 0.0f, 0x1.326e6ap-26f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.14b22ep-81f, 0x1.07afb6p-81f, 0.0f,
     0x1.058ea4p-77f, 0.0f, 0.0f, 0x1.f85da4p-11f, 0x1.423abep-18f, 0x1.77924ap-99f,
     0.0f, 0x1.5482d2p-53f, 0.0f, 0.0f, 0x1.21070ap-31f, 0.0f, 0x1.197a6ap-24f, 0.0f,
     0x1.9aa4dep-113f, 0x1.34fec8p-78f, 0x1.9b6e2ep-29f, 0x1.0fcbe2p-84f,
     0x1.a18a2ep-48f, 0.0f, 0.0f, 0.0f, 0x1.f496cep-99f, 0x1.b60a62p-5f,
     0x1.9434ecp-19f, 0x1.a583ap-44f, 0x1.cfd41ep-96f, 0x1.bf2b94p-105f, 0.0f, 0.0f,
     0x1.09d38ap-126f, 0x1.055dfap-7f, 0x1.3b967ap-92f, 0.0f, 0.0f, 0.0f,
     0x1.9af8c6p-53f, 0.0f, 0.0f, 0x1.63212ap-118f, 0.0f, 0.0f, 0x1.8cb108p-100f,
     0.0f, 0x1.2eb8ccp-24f, 0.0f, 0x1.efef98p-78f, 0x1.036e2cp-50f, 0.0f, 0.0f, 0.0f,
     0x1.b30a04p-118f, 0x1.4915f6p-11f, 0x1.04ac9ap-43f, 0x1.885976p-102f,
     0x1.3ee1dcp-80f, 0.0f, 0x1.7934dp-9f, 0x1.c8a462p-46f, 0.0f, 0.0f,
     0x1.d6151ep-68f, 0x1.d1038p-69f, 0.0f, 0.0f, 0x1.fdb0b2p-75f, 0x1.6dd3ap-8f,
     0x1.5b3f96p-122f, 0.0f, 0.0f, 0x1.16750cp-66f, 0x1.67619cp-72f, 0.0f, 0.0f,
     0x1.f454d6p-31f, 0x1.84876ep-123f, 0x1.d031c8p-108f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cbe228p-10f, 0x1.85303ep-46f, 0x1.dbaf2cp-121f, 0.0f, 0x1.96484ap-115f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e872dp-88f, 0.0f, 0.0f, 0x1.e477cap-51f,
     0x1.c5de24p-60f, 0.0f, 0x1.a95768p-110f, 0.0f, 0x1.466076p-83f, 0.0f,
     0x1.de364ep-118f, 0x1.42ca38p-64f, 0x1.977952p-29f, 0.0f, 0.0f, 0x1.35eep-21f,
     0x1.23d0b4p-87f, 0.0f, 0x1.43db9p-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ccefd8p-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5f5a9p-41f, 0.0f, 0.0f,
     0x1.934638p-56f, 0x1.dcb464p-120f, 0.0f, 0x1.40ef04p-116f, 0x1.eef51p-87f,
     0x1.f0fbf4p-88f, 0.0f, 0.0f, 0x1.0f74ep-8f, 0.0f, 0.0f, 0x1.d485bp-91f, 0.0f,
     0x1.322d66p-3f, 0.0f, 0x1.fd75aap-81f, 0x1.0e004p-93f, 0x1.37149p-106f,
     0x1.405edap-18f, 0x1.be6138p-32f, 0.0f, 0x1.92794ap-108f, 0.0f, 0x1.4f6ce8p-114f,
     0x1.7d4568p-93f, 0x1.f7e4b8p-33f, 0.0f, 0.0f, 0.0f, 0x1.418c66p-5f,
     0x1.19ecc8p-54f, 0x1.823deep-80f, 0.0f, 0.0f, 0.0f, 0x1.07e45cp-16f,
     0x1.13ccaep-17f, 0x1.9526cp-115f, 0x1.0a1ec6p-70f, 0x1.78a40ep-73f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.03a012p-66f, 0x1.c08272p-66f, 0.0f, 0.0f, 0.0f,
     0x1.1e1ec2p-20f, 0x1.ebc9acp-45f, 0.0f, 0x1.368332p-82f, 0.0f, 0.0f,
     0x1.698bf4p-12f, 0.0f, 0.0f, 0.0f, 0x1.52a5c2p-52f, 0x1.2eaee6p-125f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.dde442p-114f, 0.0f, 0x1.4f6bd2p-101f, 0x1.4b3ff4p-27f, 0.0f,
     0x1.de63e2p-101f, 0x1.a2e8eep-79f, 0x1.6ac6ccp-113f, 0.0f, 0x1.44d7a2p-30f,
     0x1.ab1268p-3f, 0.0f, 0x1.f606bp-108f, 0x1.d28042p-82f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.2e93b2p-113f, 0.0f, 0x1.431bbp-94f, 0.0f, 0x1.ebdb46p-44f,
     0x1.f8ca1ap-22f, 0.0f, 0.0f, 0.0f, 0x1.ead63cp-22f, 0x1.18a29ap-17f,
     0x1.4f03fep-54f, 0x1.4c0d72p-86f, 0.0f, 0.0f, 0x1.0ace54p-53f, 0.0f,
     0x1.ff374ep-35f, 0x1.bd8322p-80f, 0x1.eb370cp-99f, 0x1.e9925cp-83f, 0.0f,
     0x1.ee1b9ep-117f, 0x1.5defb8p-91f, 0.0f, 0.0f, 0x1.1081e4p-3f, 0.0f,
     0x1.90357ap-91f, 0.0f, 0x1.c1f3aap-29f, 0.0f, 0.0f, 0x1.f75a9cp-7f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.56328cp-75f, 0.0f, 0.0f, 0x1.8c0af4p-49f, 0.0f,
     0x1.adbddp-38f, 0x1.667058p-80f, 0.0f, 0x1.6d95ap-48f, 0x1.3fe3dep-60f, 0.0f,
     0x1.ef6c18p-118f, 0.0f, 0.0f, 0x1.04f286p-7f, 0x1.6c097ap-109f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.27b27ap-113f, 0.0f, 0.0f, 0x1.b58dccp-113f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.598162p-14f, 0x1.e55488p-28f, 0x1.70f18ep-101f, 0.0f,
     0.0f, 0x1.9947acp-46f, 0x1.145858p-35f, 0.0f, 0.0f, 0x1.7a60e6p-111f,
     0x1.d52c86p-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7d72ep-36f, 0x1.847824p-124f,
     0x1.689f14p-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c0e23ep-66f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5a75bp-70f, 0x1.59e9bap-67f, 0x1.39effcp-97f,
     0.0f, 0x1.47bd94p-51f, 0x1.226a74p-57f, 0x1.c546eap-45f, 0x1.732e56p-107f,
     0x1.859954p-101f, 0x1.ed494ap-60f, 0x1.6135p-41f, 0.0f, 0x1.18c1b8p-17f,
     0x1.ddf99ap-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4c6c74p-107f, 0.0f,
     0x1.86a4ep-112f, 0x1.d1008p-104f, 0x1.cbb712p-54f, 0.0f, 0x1.b9d5f4p-109f,
     0x1.f2bd3p-29f, 0.0f, 0x1.7412cp-68f, 0x1.2504a2p-2f, 0x1.ce559p-114f,
     0x1.d11aaap-96f, 0.0f, 0.0f, 0x1.cca24cp-98f, 0x1.b6f0dap-76f, 0x1.6eca52p-82f,
     0.0f, 0.0f, 0x1.9dc9ecp-77f, 0x1.24489cp-41f, 0x1.f00a9ap-3f, 0x1.e6b586p-103f,
     0x1.2b65cap-75f, 0x1.885212p-37f, 0.0f, 0x1.f71ab4p-5f, 0.0f, 0x1.941ed4p-14f,
     0.0f, 0.0f, 0x1.14217p-93f, 0x1.9318fp-79f, 0.0f, 0x1.af3e54p-29f,
     0x1.3ad164p-11f, 0x1.1c1a22p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cd13b8p-59f,
     0x1.159152p-55f, 0x1.65b1eep-88f, 0.0f, 0.0f, 0.0f, 0x1.3ef754p-75f,
     0x1.42b506p-57f, 0x1.cb38d4p-54f, 0x1.52b312p-75f, 0x1.b085acp-68f, 0.0f,
     0x1.7278fap-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.078f5ap-125f, 0x1.40ad12p-8f,
     0x1.583866p-116f, 0.0f, 0.0f, 0x1.05e606p-119f, 0.0f, 0x1.4580bp-6f, 0.0f,
     0x1.4c72e8p-41f, 0.0f, 0.0f, 0x1.e93bccp-30f, 0.0f, 0.0f, 0.0f, 0x1.74f6eep-79f,
     0.0f, 0.0f, 0.0f
};
static const float external_bench_wrapper_input_table_arg1[1001]  = {
     0x1.9f6832p-125f, 0x1.beb792p-49f, 0.0f, 0x1.79976ep-121f, 0x1.988b38p-33f,
     0.0f, 0x1.226082p-78f, 0x1.0d0e5cp-23f, 0x1.a4b79p-87f, 0.0f, 0.0f, 0.0f,
     0x1.bbdd64p-90f, 0.0f, 0x1.a3eaf2p-46f, 0x1.06549cp-48f, 0x1.e31c6cp-48f,
     0x1.24ec14p-126f, 0.0f, 0.0f, 0.0f, 0x1.91d1c8p-33f, 0.0f, 0x1.06f8c2p-99f, 0.0f,
     0.0f, 0x1.b7c9eep-30f, 0.0f, 0.0f, 0x1p0f, 0x1.dff0e8p-100f, 0x1.a32d94p-116f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e05036p-55f, 0x1.78d106p-33f, 0x1.9ec82ep-106f, 0x1.b9562p-104f, 0.0f, 0.0f,
     0x1.0de9f8p-9f, 0x1p0f, 0x1.f37e98p-20f, 0.0f, 0x1.5da13cp-29f, 0x1.e9e458p-116f,
     0.0f, 0x1.840762p-33f, 0.0f, 0x1.58cd06p-33f, 0x1.86366ep-8f, 0.0f,
     0x1.f81988p-87f, 0x1.ac4b96p-64f, 0x1.c2c5aap-25f, 0x1.261b6ep-50f, 0.0f,
     0x1.2f2438p-122f, 0x1.2bbcd2p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.56575cp-60f, 0.0f, 0.0f, 0.0f, 0x1.e9513p-122f, 0x1.a7a3c8p-8f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.dfe702p-85f, 0.0f, 0x1.61c47p-6f, 0.0f, 0x1.ee376cp-2f,
     0.0f, 0.0f, 0x1.ee58cep-91f, 0.0f, 0x1.2fe5b2p-76f, 0x1.200988p-25f,
     0x1.53df4cp-52f, 0.0f, 0.0f, 0.0f, 0x1.92cd6cp-36f, 0x1.eda4ecp-33f,
     0x1.95b2b6p-80f, 0.0f, 0x1.1d4bcp-25f, 0.0f, 0.0f, 0x1.132f54p-103f, 0.0f, 0.0f,
     0.0f, 0x1.20ac94p-102f, 0.0f, 0x1.6d6c48p-72f, 0.0f, 0.0f, 0.0f, 0x1.38668ap-94f,
     0.0f, 0.0f, 0x1.52edf8p-95f, 0.0f, 0x1.99648ep-53f, 0x1.931b78p-57f,
     0x1.3b727p-4f, 0.0f, 0x1.dc77bcp-105f, 0x1.03a6bep-42f, 0x1.4b14eap-48f, 0.0f,
     0x1.1cc176p-23f, 0x1.f95a5ap-36f, 0.0f, 0x1.b7ca06p-38f, 0x1.9e205cp-31f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d2bef8p-88f, 0x1.a704dap-25f, 0.0f, 0.0f, 0x1.ce8162p-119f,
     0.0f, 0x1.a1e53p-73f, 0.0f, 0x1.3e471ap-86f, 0.0f, 0x1.7e343ep-103f,
     0x1.a34546p-86f, 0.0f, 0x1.82f88cp-78f, 0x1.ef9e96p-125f, 0x1.a5c2c2p-75f, 0.0f,
     0x1.9019f8p-44f, 0.0f, 0.0f, 0.0f, 0x1.6210cp-7f, 0x1.8d0f98p-84f, 0.0f, 0.0f,
     0x1.b9f24cp-79f, 0.0f, 0x1.8b1222p-107f, 0x1.3e2bacp-54f, 0x1.b155bap-43f, 0.0f,
     0.0f, 0.0f, 0x1.901fc6p-108f, 0x1.df7d1ap-18f, 0x1.972b14p-2f, 0x1.b5cb9p-101f,
     0.0f, 0x1.55b2cep-30f, 0.0f, 0.0f, 0x1.0fae3cp-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.66efaap-7f, 0.0f, 0x1.cc2cep-13f, 0x1.d67154p-68f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6e81fap-123f, 0x1.62d34ap-117f, 0.0f, 0.0f, 0.0f, 0x1.c6bb38p-112f,
     0x1.68861p-35f, 0.0f, 0x1.07e4bp-58f, 0x1.aa85ap-32f, 0.0f, 0.0f,
     0x1.15b9cp-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c896ap-97f, 0.0f, 0x1.6353fep-17f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9f0ff8p-1f, 0x1.ca5fcap-67f, 0.0f, 0.0f,
     0x1.c6536ep-20f, 0.0f, 0.0f, 0x1.0dd37p-34f, 0x1.af5ddap-60f, 0.0f,
     0x1.376efcp-50f, 0.0f, 0x1.a814aep-12f, 0.0f, 0x1.b1ef12p-29f, 0x1.327704p-24f,
     0.0f, 0x1.9f21cap-71f, 0x1.a7b23ap-72f, 0.0f, 0.0f, 0.0f, 0x1.517a76p-89f,
     0x1.840792p-88f, 0.0f, 0.0f, 0x1.601788p-55f, 0.0f, 0.0f, 0x1.6cd8cap-85f,
     0x1.a144fap-16f, 0x1.07ceeep-102f, 0x1.0ddf5p-86f, 0x1.dd3d36p-59f,
     0x1.33776ap-10f, 0x1.bcc96ep-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c4ad26p-117f, 0.0f, 0.0f, 0x1.f62404p-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.aa0566p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1b752cp-51f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.585524p-15f, 0.0f, 0.0f, 0x1.48962p-65f, 0x1.03ca2ap-47f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.0fd6dcp-44f, 0x1.225222p-49f, 0x1.aae0e8p-84f, 0.0f, 0.0f, 0.0f,
     0x1.cbd6e8p-23f, 0x1.08863ap-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5985fap-68f,
     0.0f, 0.0f, 0x1.152f78p-96f, 0.0f, 0x1.57a184p-105f, 0.0f, 0.0f, 0.0f,
     0x1.83251cp-25f, 0x1.b4a18cp-71f, 0x1.6bd5fap-74f, 0x1.9fbf1ap-94f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ed0d2ap-7f, 0x1.8b59dap-49f, 0.0f, 0x1.acdb36p-11f,
     0x1.9bb276p-35f, 0.0f, 0.0f, 0.0f, 0x1.dd5a96p-101f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ec595p-83f, 0.0f, 0.0f, 0.0f, 0x1.8b120ep-37f, 0x1.469c64p-90f,
     0x1.f937cep-59f, 0x1.2f1e2ep-95f, 0.0f, 0.0f, 0x1.768ce8p-98f, 0.0f, 0.0f, 0.0f,
     0x1.34b93ap-34f, 0x1.d105b2p-20f, 0.0f, 0x1.129974p-2f, 0.0f, 0x1.1e861ap-65f,
     0.0f, 0.0f, 0x1.3673f4p-89f, 0x1.64337ep-31f, 0.0f, 0x1.24145p-25f,
     0x1.bcc08p-53f, 0x1.cc33c8p-89f, 0.0f, 0x1.955938p-41f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a4ea6ep-15f, 0x1.4c6e5ap-7f, 0x1.06369p-104f, 0.0f,
     0x1.346c2ep-53f, 0x1.5477dap-12f, 0x1.50b58cp-23f, 0x1.5e774p-117f,
     0x1.5b8e98p-115f, 0x1.31306ap-8f, 0x1.8015f2p-106f, 0.0f, 0.0f, 0x1.da4066p-84f,
     0x1.b94288p-11f, 0x1.3efba6p-78f, 0x1.837c84p-28f, 0x1.e70492p-103f,
     0x1.1e68bap-38f, 0x1.b82004p-98f, 0x1.cc1e2ep-74f, 0x1.fded2p-103f, 0.0f,
     0x1.16e46p-78f, 0.0f, 0x1.bb4436p-10f, 0x1.c5ed62p-86f, 0x1.572cdcp-119f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c6bbc6p-43f, 0.0f, 0x1.0314aap-80f, 0.0f, 0x1.b6be08p-99f,
     0x1.6602fep-122f, 0x1.ab4ef6p-49f, 0x1.c20ca6p-8f, 0x1.f0ce8cp-36f,
     0x1.9948bap-41f, 0.0f, 0x1.75410ep-42f, 0.0f, 0.0f, 0x1.bb5ec8p-105f, 0.0f, 0.0f,
     0x1.bf8c62p-96f, 0x1.5e0466p-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6f3a6p-40f,
     0x1.89b438p-26f, 0.0f, 0.0f, 0x1.799dep-120f, 0x1.525888p-16f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.9c415ap-88f, 0x1.acccbp-6f, 0.0f, 0x1.213c46p-69f, 0.0f, 0.0f,
     0x1.50242cp-70f, 0.0f, 0.0f, 0x1.2f9c6ap-120f, 0.0f, 0x1.dcc984p-47f,
     0x1.4950ccp-69f, 0x1.9f772ap-54f, 0x1.82dccap-101f, 0x1.881ee6p-69f, 0.0f, 0.0f,
     0x1.bfb1d8p-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.968588p-72f, 0x1.1aa7b8p-95f,
     0x1.010d3cp-12f, 0.0f, 0x1.d57538p-41f, 0.0f, 0x1.37a0f8p-67f, 0.0f,
     0x1.2264b4p-80f, 0.0f, 0.0f, 0x1.14fc7ap-46f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.208ffep-113f, 0x1.ca0f8cp-46f, 0.0f, 0.0f, 0x1.511908p-100f, 0x1.49127ap-49f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c0785ap-99f, 0.0f, 0.0f, 0x1.45a33p-77f,
     0x1.4b1bbep-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eb6acep-37f, 0x1.c588a2p-55f,
     0x1.3e52fp-125f, 0x1.0cd638p-25f, 0x1.ad166ap-106f, 0.0f, 0.0f, 0x1.4163b2p-111f,
     0x1.e6b756p-26f, 0x1.71d56ap-29f, 0x1.d92daep-89f, 0x1.1c05f4p-99f,
     0x1.f075d4p-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b907a8p-93f,
     0x1.605896p-33f, 0.0f, 0.0f, 0x1.bce648p-36f, 0.0f, 0.0f, 0x1.91f22ap-98f,
     0x1.f253ccp-75f, 0x1.34e02p-31f, 0x1.f1e3bcp-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.3df84ep-77f, 0x1.4e2fc2p-40f, 0.0f, 0x1.064e48p-97f, 0x1.6e1824p-50f,
     0x1.4ec322p-54f, 0.0f, 0x1.8f3a38p-10f, 0.0f, 0x1.1c8bbap-109f, 0x1.3c9c0ap-120f,
     0x1.e30b04p-38f, 0.0f, 0x1.bf8386p-10f, 0.0f, 0x1.02d4aap-65f, 0x1.a3661p-4f,
     0.0f, 0x1.0e2d82p-25f, 0x1.564484p-62f, 0.0f, 0x1.49c24cp-18f, 0x1.a31a32p-119f,
     0x1.1d045cp-18f, 0.0f, 0.0f, 0x1.72b4e4p-67f, 0x1.aff2p-93f, 0.0f,
     0x1.612ddap-81f, 0.0f, 0x1.bf96f4p-96f, 0.0f, 0.0f, 0x1.65747ep-55f,
     0x1.8ce834p-41f, 0x1.48e4c6p-111f, 0.0f, 0.0f, 0.0f, 0x1.e08ddap-23f,
     0x1.301abap-44f, 0x1.dff6ep-85f, 0.0f, 0x1.4db08ep-56f, 0.0f, 0.0f,
     0x1.42ff7p-33f, 0x1.7a1fbcp-6f, 0x1.153dcep-39f, 0.0f, 0x1.878888p-31f,
     0x1.885464p-113f, 0.0f, 0x1.79a5ccp-87f, 0x1.7824d6p-102f, 0.0f,
     0x1.699d6ep-116f, 0.0f, 0x1.c05d76p-34f, 0x1.09474ep-46f, 0.0f, 0x1.9b69ecp-7f,
     0x1.97f548p-89f, 0x1.847f9cp-110f, 0.0f, 0x1.b66dd4p-111f, 0x1.1e424p-104f,
     0x1.cbd826p-117f, 0.0f, 0.0f, 0x1.dc8abp-27f, 0x1.ac594ep-59f, 0x1.12c5a2p-9f,
     0.0f, 0x1.422ddp-56f, 0.0f, 0.0f, 0.0f, 0x1.0e7dap-111f, 0x1.5712b2p-38f, 0.0f,
     0x1.aa5f3ep-17f, 0.0f, 0x1.a5c66p-3f, 0x1.4640f4p-29f, 0x1.1a6942p-103f,
     0x1.9173f8p-4f, 0.0f, 0.0f, 0x1.f2650cp-80f, 0x1.ca4d44p-41f, 0x1.8ec4ap-45f,
     0x1.f7d804p-69f, 0.0f, 0x1.42a41ep-103f, 0x1.9255ecp-90f, 0.0f, 0x1.74dd4ep-102f,
     0x1.72c696p-112f, 0.0f, 0x1.c226fcp-32f, 0x1.240e94p-22f, 0.0f, 0.0f,
     0x1.6747d6p-100f, 0x1.7b714ep-61f, 0x1.d3dbc6p-112f, 0.0f, 0x1.8606fcp-50f,
     0x1.ef0cd4p-40f, 0x1.d8e5dp-93f, 0.0f, 0x1.e60542p-66f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.1dd5ccp-40f, 0x1.1477eep-39f, 0x1.8f887ep-106f, 0.0f, 0x1.84a9b6p-111f,
     0.0f, 0x1.34c4b2p-29f, 0x1.74518ap-122f, 0x1.bd05fap-111f, 0x1.5d3c16p-14f,
     0x1.a09df8p-99f, 0.0f, 0.0f, 0.0f, 0x1.2ae866p-116f, 0x1.9c8614p-19f, 0.0f,
     0x1.9fcb2ep-76f, 0x1.3d661ep-21f, 0x1.7f06aep-118f, 0.0f, 0x1.43244p-120f,
     0x1.aabf8p-124f, 0.0f, 0.0f, 0x1.47b538p-115f, 0.0f, 0.0f, 0.0f, 0x1.f7dcb4p-83f,
     0.0f, 0x1.1f76dap-43f, 0.0f, 0.0f, 0x1.942686p-96f, 0.0f, 0.0f, 0x1.dae164p-74f,
     0x1.14ee94p-82f, 0.0f, 0x1.d1fc86p-7f, 0.0f, 0.0f, 0.0f, 0x1.53312cp-15f, 0.0f,
     0.0f, 0x1.4da102p-17f, 0.0f, 0.0f, 0x1.284f08p-41f, 0x1.8279d2p-31f,
     0x1.128536p-86f, 0.0f, 0x1.e7e8e4p-95f, 0x1.d42a98p-98f, 0.0f, 0x1.3e117cp-81f,
     0x1.01576ap-109f, 0.0f, 0.0f, 0x1.ff0d44p-100f, 0x1.2ce5f4p-56f, 0.0f,
     0x1.95784cp-114f, 0x1.c316b2p-49f, 0.0f, 0.0f, 0.0f, 0x1.8b7e0ep-55f, 0.0f,
     0x1.859a7ap-31f, 0x1.5642bep-36f, 0.0f, 0x1.1a78c8p-109f, 0.0f, 0x1.485fb8p-58f,
     0.0f, 0x1.ede53ep-116f, 0.0f, 0x1.055ec2p-79f, 0.0f, 0x1.873dc8p-110f,
     0x1.350d68p-72f, 0.0f, 0.0f, 0x1.8fddeep-4f, 0.0f, 0x1.18be74p-98f, 0.0f,
     0x1.fb639cp-71f, 0x1.983866p-101f, 0.0f, 0x1.8f86aap-90f, 0.0f, 0.0f,
     0x1.81dd02p-38f, 0x1.42b156p-104f, 0x1.288d66p-45f, 0x1.7cf138p-93f, 0.0f, 0.0f,
     0x1.fbd2aap-36f, 0.0f, 0.0f, 0.0f, 0x1.e58c42p-126f, 0x1.7c47f6p-32f, 0.0f,
     0x1.a994dep-116f, 0.0f, 0x1.f776fap-110f, 0.0f, 0.0f, 0.0f, 0x1.87c5b2p-55f,
     0x1.9702ecp-55f, 0.0f, 0.0f, 0x1.69722p-72f, 0.0f, 0x1.92e82p-64f,
     0x1.a11b28p-58f, 0x1.d94a56p-112f, 0.0f, 0.0f, 0x1.cd3ffap-6f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.5fe7cap-90f, 0x1.4b942ap-21f, 0x1.034d3ap-87f, 0x1.637e92p-61f,
     0x1.e2b6a2p-91f, 0x1.86406cp-80f, 0x1.374c84p-3f, 0x1.e3f86ep-22f, 0.0f,
     0x1.6ed93ep-118f, 0x1.94a154p-15f, 0x1.e36c32p-44f, 0x1.f2369cp-25f, 0.0f, 0.0f,
     0x1.f20a6p-101f, 0x1.80cb9cp-83f, 0x1.ee3de8p-63f, 0x1.7afb66p-32f, 0.0f,
     0x1.727f14p-8f, 0.0f, 0x1.b4f92p-56f, 0.0f, 0x1.f59e1ap-63f, 0x1.fbf1bp-69f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e3ec94p-101f, 0x1.12fe9p-60f, 0x1.e8d8aap-108f, 0.0f,
     0x1.1dfd9cp-104f, 0x1.fe27b6p-66f, 0.0f, 0x1.a87f12p-107f, 0x1.a2207ap-29f,
     0x1.a3a52ap-12f, 0x1.879952p-11f, 0x1.85e188p-56f, 0x1.521244p-118f, 0.0f, 0.0f,
     0x1.1a1638p-95f, 0.0f, 0x1.64b22cp-69f, 0.0f, 0.0f, 0x1.d0e1f8p-37f, 0.0f, 0.0f,
     0.0f, 0x1.d9cc64p-67f, 0x1.3cad76p-120f, 0.0f, 0x1.4a9d66p-105f, 0x1.74451cp-81f,
     0x1.18e616p-90f, 0x1.a78a7cp-113f, 0.0f, 0.0f, 0x1.dcba92p-48f, 0x1.14b4dcp-13f,
     0x1.5a2e82p-110f, 0x1.a45ed2p-78f, 0.0f, 0.0f, 0x1.0bd2aap-117f, 0.0f,
     0x1.7bb2b4p-50f, 0.0f, 0.0f, 0.0f, 0x1.846ecp-69f, 0x1.28ea02p-125f, 0.0f,
     0x1.e8ae1ap-96f, 0x1.2d50d4p-11f, 0.0f, 0x1.5f91cp-32f, 0.0f, 0x1.e9a8f4p-59f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.6b41d8p-60f, 0.0f, 0x1.1b884ap-56f, 0.0f,
     0x1.f8a182p-90f, 0x1.b04726p-13f, 0x1.40c69ap-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d3710ap-37f, 0x1.53d44p-6f, 0x1.0f62f2p-30f,
     0x1.1cbf9cp-92f, 0.0f, 0x1.6a351cp-121f, 0.0f, 0.0f, 0x1.75f2c8p-93f, 0.0f, 0.0f,
     0x1.451a3ap-41f, 0.0f, 0x1.030a4ap-39f, 0.0f, 0.0f, 0x1.dbefa8p-2f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.6fa252p-55f, 0x1.63cb18p-59f, 0x1.85ae4p-110f, 0x1.190594p-28f,
     0.0f, 0x1.6d80f4p-97f, 0x1.5284a4p-4f, 0x1.868106p-55f, 0x1.fb5d4ep-5f,
     0x1.6e0076p-17f, 0.0f, 0x1.79875cp-119f, 0x1.d1996ep-81f, 0.0f, 0x1.5a387ep-69f,
     0.0f, 0x1.95861ap-25f, 0.0f, 0x1.f48474p-19f, 0.0f, 0x1.3daf66p-14f,
     0x1.b7f72ep-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f9da3ap-68f, 0.0f, 0.0f,
     0x1.1c4618p-6f, 0.0f, 0.0f, 0x1.9d4a98p-63f, 0x1.ebbe28p-48f, 0x1.784106p-55f,
     0x1.dd31aep-66f, 0x1.8f1decp-60f, 0.0f, 0x1.3d3196p-116f, 0x1.fef20cp-44f, 0.0f,
     0.0f, 0x1.e428dp-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5ec7bap-111f, 0x1.bf51d8p-121f,
     0.0f, 0x1.5be556p-107f, 0x1.c973ecp-67f, 0x1.64d0fp-49f, 0x1.937a84p-114f,
     0x1.d268dap-80f, 0.0f, 0x1.8e4436p-36f, 0.0f, 0.0f, 0x1.cf5692p-39f,
     0x1.6498cap-42f, 0x1.e6c094p-23f, 0.0f, 0.0f, 0x1.592bdep-64f, 0.0f, 0.0f,
     0x1.895d18p-89f, 0x1.238e48p-115f, 0.0f, 0x1.2c0c52p-2f, 0.0f, 0.0f, 0.0f,
     0x1.4a6ae4p-53f, 0x1.aeeeccp-113f, 0x1.7f1ap-48f, 0x1.453fbcp-12f,
     0x1.9efb8ep-63f, 0x1.ccae7ep-93f, 0x1.176ac2p-55f, 0.0f, 0.0f, 0.0f,
     0x1.673752p-68f, 0.0f, 0.0f, 0.0f, 0x1.12196ap-89f, 0.0f
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
            float tmp2;
            __m128 carg;
            __m128 carg1;
            __m128 carg2;
            float tmp3;
            int32_t tmp4;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = external_bench_wrapper_input_table_arg1[i];
            tmp2 = Sleef_copysignf1_purecfma(tmp0, tmp1);
            external_bench_wrapper_output_table[i] = tmp2;
            carg = _mm_set_ss(bench_acc);
            carg1 = _mm_set_ss(tmp2);
            carg2 = _mm_add_ss(carg, carg1);
            tmp3 = _mm_cvtss_f32(carg2);
            bench_acc = tmp3;
            tmp4 = i + INT32_C(1);
            i = tmp4;
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
    printf("Sleef_copysignf1_purecfma %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_copysignf1_purecfma bench acc %a\n", global_bench_acc);
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
