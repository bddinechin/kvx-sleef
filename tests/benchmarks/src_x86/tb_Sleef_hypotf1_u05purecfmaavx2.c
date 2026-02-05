/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_hypotf1_u05purecfma.c --function \
 *     Sleef_hypotf1_u05purecfma --arity 2 --headers sleef.h,ml_support_lib.h \
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
     0x1.99d8a8p-90f, 0x1.db8786p-122f, 0x1.f074eap-116f, 0x1.9a3fa8p-51f,
     0x1.f1f8f2p-12f, 0x1.4f475ep-86f, 0.0f, 0x1.f084a2p-82f, 0x1.a37506p-107f,
     0x1.3fbbbcp-11f, 0x1.ea403cp-3f, 0x1.2333eap-5f, 0.0f, 0x1.c1f3a6p-77f,
     0x1.72557ap-60f, 0.0f, 0x1.ba0908p-84f, 0x1.3c63ap-42f, 0.0f, 0.0f, 0.0f,
     0x1.603e16p-45f, 0x1.c7515cp-86f, 0x1.c51e84p-3f, 0.0f, 0x1.158528p-124f, 0.0f,
     0x1.51832p-111f, 0x1.01cfc6p-24f, 0.0f, 0.0f, 0x1.91446ap-6f, 0x1.ba15f6p-52f,
     0x1.997d44p-16f, 0x1.79eaeep-111f, 0.0f, 0x1.151aaep-52f, 0x1.3aba2p-17f,
     0x1.185f5cp-32f, 0x1.a43e9cp-75f, 0.0f, 0x1.4947f2p-15f, 0.0f, 0.0f, 0x1p0f,
     0x1.0b665ap-58f, 0x1.f8532ep-18f, 0.0f, 0x1.e32b0cp-42f, 0.0f, 0.0f,
     0x1.8034e6p-57f, 0.0f, 0.0f, 0x1.200ad6p-110f, 0.0f, 0.0f, 0x1.db941ap-98f,
     0x1.12deacp-39f, 0x1.adc68ap-92f, 0x1.a6effp-121f, 0.0f, 0x1.5bc0b6p-64f,
     0x1.8011e6p-44f, 0x1.5f5da6p-101f, 0x1.47bbbcp-108f, 0.0f, 0.0f, 0.0f, 0x1p0f,
     0.0f, 0.0f, 0.0f, 0x1.772268p-104f, 0.0f, 0x1.c15c82p-23f, 0x1.ce0f86p-2f, 0.0f,
     0x1.988eeap-3f, 0x1.8c482p-56f, 0x1.7367fcp-91f, 0.0f, 0.0f, 0x1.b866cep-86f,
     0.0f, 0x1.9e9d56p-1f, 0x1.5ae392p-114f, 0.0f, 0x1.4f582p-3f, 0x1.f36646p-6f,
     0x1.7d2144p-93f, 0x1.c31e54p-9f, 0.0f, 0x1.c318fap-43f, 0x1.24d1e8p-109f,
     0x1.a93e2ap-121f, 0.0f, 0x1.559ffap-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.968e54p-38f, 0.0f, 0x1.55029ap-100f, 0.0f, 0.0f, 0x1.37e9c8p-65f, 0.0f,
     0x1.263408p-96f, 0x1.d374cp-82f, 0x1.8f9932p-21f, 0.0f, 0x1.b8de04p-7f, 0.0f,
     0.0f, 0x1.0b4e22p-40f, 0.0f, 0.0f, 0.0f, 0x1.ba66dep-40f, 0.0f, 0.0f,
     0x1.529008p-112f, 0x1.a5731p-51f, 0.0f, 0.0f, 0.0f, 0x1.0e32a2p-18f,
     0x1.f1dfeap-10f, 0x1.9766f2p-71f, 0.0f, 0x1.0a7c52p-113f, 0x1.286434p-56f,
     0x1.f88452p-80f, 0x1.a3b1d8p-94f, 0.0f, 0x1.8f91c8p-116f, 0x1.918f76p-117f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.33fac6p-21f, 0x1.2ac7a8p-45f, 0.0f,
     0x1.ec31bep-79f, 0x1.04e824p-15f, 0.0f, 0x1.49f4c8p-79f, 0x1.c9cd8ep-41f,
     0x1.ecf428p-79f, 0.0f, 0.0f, 0.0f, 0x1.fb86dap-81f, 0.0f, 0.0f, 0x1.99a106p-76f,
     0x1.54e64ep-35f, 0x1.159284p-62f, 0x1.76727p-20f, 0x1.f087ccp-27f,
     0x1.a01a6ep-11f, 0.0f, 0x1.027802p-109f, 0.0f, 0.0f, 0x1.3d033ep-114f,
     0x1.390476p-94f, 0x1.30c394p-19f, 0.0f, 0.0f, 0x1.51ad2ep-9f, 0x1.66dd6p-41f,
     0x1.094abp-59f, 0x1.30c70ap-4f, 0x1.bbb284p-99f, 0.0f, 0x1.223854p-48f,
     0x1.c6d152p-94f, 0x1.c9c496p-108f, 0x1.01d352p-109f, 0x1.504542p-59f,
     0x1.974fdp-115f, 0.0f, 0.0f, 0x1.cf8e8p-83f, 0.0f, 0x1.150dfep-98f, 0.0f,
     0x1.9f13ecp-83f, 0x1.8ebc7p-12f, 0x1.2f4cd8p-7f, 0.0f, 0.0f, 0.0f,
     0x1.9020acp-123f, 0.0f, 0x1.0af80ep-23f, 0x1.3cf40ap-40f, 0.0f, 0x1.f02e42p-120f,
     0.0f, 0.0f, 0x1.56411ep-6f, 0x1.e2b91p-44f, 0.0f, 0x1.21825cp-42f,
     0x1.a68222p-48f, 0x1.2d21ap-69f, 0.0f, 0x1.2ea2fp-107f, 0x1.6c134ep-31f, 0.0f,
     0.0f, 0x1.71c8a8p-82f, 0x1.0747f8p-83f, 0x1.549a4ep-124f, 0.0f, 0x1.1d2a48p-116f,
     0x1.1ed6a8p-83f, 0.0f, 0x1.9ccf44p-87f, 0.0f, 0x1.d316a4p-54f, 0x1.1f9682p-111f,
     0.0f, 0x1.82cb24p-22f, 0x1.eb5212p-120f, 0x1.9b87c8p-41f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.fa3b2ap-91f, 0x1.998664p-35f, 0.0f, 0x1.ded2e4p-58f, 0x1.8ddf14p-27f,
     0x1.8207fap-6f, 0x1.c2f75ep-35f, 0.0f, 0x1.6d7b4cp-95f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.eb5b42p-7f, 0x1.9a6edep-34f, 0x1.0eccd4p-30f, 0x1.c53562p-124f, 0.0f,
     0x1.324dbep-81f, 0x1.9005b6p-116f, 0x1.a0f82p-114f, 0x1.940a28p-124f, 0.0f, 0.0f,
     0x1.a04548p-65f, 0x1.f845aep-6f, 0x1.4ae59p-75f, 0x1.686d2p-67f,
     0x1.529e22p-116f, 0x1.a91032p-108f, 0.0f, 0x1.4574fep-4f, 0x1.93874ep-65f, 0.0f,
     0x1.d4492cp-50f, 0x1.9ccce6p-106f, 0x1.876232p-15f, 0.0f, 0x1.2b1038p-34f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.53097ep-67f, 0x1.286d04p-12f, 0x1.2ec588p-91f,
     0x1.ed3eb2p-85f, 0x1.c5b0dap-92f, 0x1.2a8dc8p-99f, 0x1.f177b6p-88f, 0.0f,
     0x1.bbb5e2p-43f, 0x1.e90586p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.15149ep-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b47c12p-35f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c8a426p-124f, 0x1.c0cc58p-50f, 0.0f, 0x1.3763dap-49f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1a89e4p-12f, 0x1.634e18p-8f, 0.0f, 0.0f, 0.0f, 0x1.db8984p-43f,
     0x1.bd28e2p-46f, 0x1.846e42p-72f, 0x1.c6778p-53f, 0.0f, 0.0f, 0.0f,
     0x1.d72244p-24f, 0.0f, 0.0f, 0.0f, 0x1.a78c18p-11f, 0x1.a86e9ep-43f,
     0x1.3a27acp-117f, 0x1.dc93ap-108f, 0x1.81d198p-30f, 0x1.447ce4p-5f, 0.0f, 0.0f,
     0.0f, 0x1.f35b8ap-88f, 0x1.0c0cap-117f, 0x1.e69a18p-30f, 0x1.1c0f7ap-74f, 0.0f,
     0x1.ac5096p-85f, 0x1.07ea18p-63f, 0x1.5dd8dap-82f, 0x1.872824p-20f,
     0x1.499ef2p-11f, 0.0f, 0x1.249edap-110f, 0.0f, 0x1.a9bb96p-48f, 0x1.f107c2p-29f,
     0x1.6e83c8p-109f, 0x1.8e391p-36f, 0.0f, 0.0f, 0x1.6764dep-116f, 0.0f,
     0x1.a23baap-81f, 0x1.8d036p-12f, 0x1.299176p-56f, 0.0f, 0x1.5c6462p-30f,
     0x1.d1e0aep-63f, 0x1.524514p-34f, 0.0f, 0x1.df346p-21f, 0x1.b01a92p-49f, 0.0f,
     0x1.2c273cp-100f, 0.0f, 0x1.2b5a86p-99f, 0x1.47f96cp-114f, 0.0f, 0.0f,
     0x1.6fb704p-49f, 0.0f, 0x1.31dc8ap-24f, 0x1.ae9206p-116f, 0x1.a17f38p-39f, 0.0f,
     0x1.7f3aa6p-3f, 0.0f, 0x1.8d7c8ap-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e74b52p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2c0b0ep-108f, 0.0f, 0.0f, 0.0f,
     0x1.c5d0fap-113f, 0x1.d4d5ccp-122f, 0x1.b92efap-110f, 0.0f, 0x1.b9b9e2p-115f,
     0.0f, 0x1.e71a76p-121f, 0.0f, 0.0f, 0.0f, 0x1.ab2cfap-56f, 0x1.c3e2e8p-49f, 0.0f,
     0.0f, 0x1.45c6d6p-67f, 0.0f, 0.0f, 0x1.4fb898p-86f, 0x1.9022d8p-23f, 0.0f,
     0x1.662a18p-6f, 0.0f, 0.0f, 0x1.54b8d8p-107f, 0.0f, 0.0f, 0x1.756c8ep-86f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d97114p-104f, 0.0f, 0x1.2af182p-39f, 0x1.1280a6p-93f,
     0x1.7dcae4p-103f, 0x1.547fbcp-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.584b0ap-50f,
     0.0f, 0.0f, 0.0f, 0x1.720404p-72f, 0x1.af636cp-43f, 0.0f, 0x1.defe04p-11f, 0.0f,
     0x1.d014cp-79f, 0.0f, 0.0f, 0.0f, 0x1.07d51ep-117f, 0.0f, 0x1.74a8aap-82f, 0.0f,
     0x1.580a4ap-84f, 0x1.cea94p-27f, 0x1.5c06acp-76f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.339cbap-15f, 0x1.162048p-11f, 0.0f, 0.0f, 0.0f, 0x1.5f9a2p-46f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.88b34cp-117f, 0.0f, 0x1.c232fcp-36f, 0x1.3a75c6p-59f,
     0x1.aca14cp-63f, 0.0f, 0.0f, 0.0f, 0x1.028742p-35f, 0x1.c6f69p-18f,
     0x1.fc4246p-105f, 0.0f, 0x1.0bdc42p-55f, 0x1.230c9ep-41f, 0.0f, 0.0f,
     0x1.3287f4p-74f, 0.0f, 0.0f, 0x1.2eff6p-16f, 0.0f, 0.0f, 0.0f, 0x1.f0996ap-120f,
     0x1.8697acp-126f, 0x1.9bc68cp-15f, 0x1.565f56p-36f, 0.0f, 0.0f, 0x1.d5985ep-57f,
     0x1.1e802p-24f, 0.0f, 0x1.f6048ap-68f, 0x1.a5dd44p-72f, 0x1.4e56e8p-85f,
     0x1.164d7p-7f, 0x1.3bf8a8p-48f, 0.0f, 0x1.5314f8p-83f, 0x1.7cb16ap-61f,
     0x1.e60822p-113f, 0.0f, 0x1.d1c196p-106f, 0.0f, 0x1.3a8c1ap-72f, 0x1.a62528p-74f,
     0.0f, 0x1.149bfep-91f, 0x1.aee4bap-15f, 0.0f, 0x1.0f2054p-91f, 0.0f, 0.0f, 0.0f,
     0x1.d96848p-89f, 0x1.c404a4p-22f, 0x1.810f08p-88f, 0x1.e08c78p-19f,
     0x1.8ae778p-30f, 0x1.2e44ecp-69f, 0.0f, 0x1.66ff92p-85f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6580eap-85f, 0.0f, 0x1.f10f3cp-70f, 0.0f, 0.0f, 0x1.691ddcp-95f, 0.0f,
     0x1.943252p-83f, 0.0f, 0x1.10d15cp-87f, 0x1.6a885p-34f, 0.0f, 0x1.5c6feep-35f,
     0.0f, 0x1.3df76p-124f, 0x1.ba518ap-65f, 0.0f, 0.0f, 0x1.3f5218p-91f, 0.0f, 0.0f,
     0x1.9dde66p-84f, 0.0f, 0x1.d44b16p-107f, 0x1.edc5a6p-63f, 0x1.2e44d6p-18f, 0.0f,
     0x1.24a60ep-103f, 0x1.d2ea5ep-98f, 0x1.2a8634p-98f, 0.0f, 0x1.23d446p-40f, 0.0f,
     0x1.dced4cp-31f, 0x1.18ccd8p-59f, 0x1.b60ddcp-39f, 0.0f, 0.0f, 0x1.e1954ap-115f,
     0.0f, 0x1.8e06cp-88f, 0x1.91a292p-114f, 0.0f, 0.0f, 0x1.98bd72p-19f,
     0x1.563a8p-43f, 0x1.a96e9p-7f, 0x1.631864p-83f, 0x1.55d83p-92f, 0.0f,
     0x1.ec8d74p-13f, 0.0f, 0x1.f888bap-100f, 0.0f, 0x1.d7d9b2p-92f, 0.0f,
     0x1.9412cp-48f, 0x1.71eadap-45f, 0.0f, 0x1.798564p-4f, 0x1.d6bf8ap-116f,
     0x1.562e5p-91f, 0.0f, 0x1.83a728p-4f, 0x1.aecd3ep-30f, 0x1.c42dfep-33f,
     0x1.791918p-10f, 0.0f, 0.0f, 0x1.970d98p-97f, 0x1.4aa634p-15f, 0.0f, 0.0f,
     0x1.8671a2p-94f, 0.0f, 0x1.38454ap-35f, 0x1.7b12f6p-101f, 0x1.ce1aeep-92f, 0.0f,
     0.0f, 0.0f, 0x1.af7a82p-92f, 0x1.3cb12cp-3f, 0x1.9ca1b6p-8f, 0x1.020fb8p-45f,
     0x1.3f959ap-24f, 0x1.2d6d5cp-54f, 0x1.419bf4p-23f, 0x1.ac5386p-109f,
     0x1.66bafap-77f, 0x1.c8155ap-115f, 0.0f, 0x1.cde8eep-98f, 0.0f, 0x1.543ef6p-103f,
     0.0f, 0.0f, 0x1.826c2ap-109f, 0.0f, 0x1.c3dea8p-126f, 0x1p0f, 0.0f,
     0x1.66f9bp-80f, 0.0f, 0.0f, 0x1.c397a6p-32f, 0x1.50a7f6p-31f, 0x1.bd9338p-24f,
     0.0f, 0x1.c87378p-125f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.218f1p-116f, 0.0f,
     0x1.97aa1ep-38f, 0x1.fa626p-102f, 0x1.da61f8p-47f, 0x1.d25208p-43f, 0.0f, 0.0f,
     0.0f, 0x1.78372cp-104f, 0x1.2d69bep-99f, 0.0f, 0.0f, 0x1.92fcfap-72f,
     0x1.da894ap-41f, 0x1.9592c2p-7f, 0x1.e12dfcp-36f, 0.0f, 0.0f, 0.0f,
     0x1.1b266ep-12f, 0.0f, 0.0f, 0x1.fb8242p-113f, 0x1.ef85ecp-123f, 0.0f, 0.0f,
     0.0f, 0x1.5287acp-96f, 0.0f, 0x1.83e3bcp-67f, 0x1.b20d6cp-106f, 0x1.10c5e6p-15f,
     0.0f, 0.0f, 0x1.9f561cp-55f, 0x1.954072p-103f, 0x1.b83e6p-14f, 0x1.f24576p-102f,
     0.0f, 0.0f, 0x1.ee479ep-82f, 0x1.214c34p-15f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e5893ep-75f, 0.0f, 0.0f, 0x1.7134d8p-38f, 0x1.6bac3p-89f, 0.0f,
     0x1.c49998p-72f, 0x1.8e231cp-71f, 0x1.7cbcecp-30f, 0.0f, 0.0f, 0.0f,
     0x1.860ffcp-113f, 0x1.2ce94p-13f, 0x1.eb4c18p-88f, 0.0f, 0x1.d40eaep-85f,
     0x1.2809f8p-47f, 0x1.80917p-50f, 0.0f, 0x1.b53eb8p-28f, 0x1.ff5052p-9f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.52433ep-122f, 0.0f, 0x1.dfb25ap-43f, 0.0f,
     0.0f, 0x1.70d65cp-50f, 0.0f, 0x1.da76d6p-32f, 0x1.4432fep-47f, 0.0f,
     0x1.40f4b4p-5f, 0.0f, 0x1.35fb82p-91f, 0.0f, 0x1.deb378p-76f, 0.0f, 0.0f,
     0x1.d18d3cp-54f, 0.0f, 0x1.338aa6p-47f, 0x1.6ed36cp-100f, 0x1.c059e6p-80f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7c9ebap-54f, 0x1.4cbp-66f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.4632b8p-9f, 0x1.bbad74p-30f, 0.0f, 0x1.e78ep-77f, 0.0f,
     0x1.d1834ep-109f, 0.0f, 0x1.67fdd4p-24f, 0.0f, 0.0f, 0x1.fd405p-16f,
     0x1.059798p-97f, 0.0f, 0.0f, 0.0f, 0x1.04ecb6p-10f, 0x1.c3d842p-71f,
     0x1.9edd86p-5f, 0.0f, 0.0f, 0x1.0ab176p-120f, 0.0f, 0.0f, 0x1.ce0a7ep-100f, 0.0f,
     0x1.e11f7p-97f, 0x1.f7a8c6p-38f, 0.0f, 0.0f, 0x1.ee5104p-73f, 0x1.e8fc7ap-119f,
     0.0f, 0x1.23e87ap-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.48c268p-38f,
     0x1.2271c8p-70f, 0.0f, 0.0f, 0x1.3cedc2p-91f, 0x1.890788p-123f, 0.0f,
     0x1.9f7fbcp-33f, 0x1.8e0754p-17f, 0x1.7277aap-53f, 0x1.d3d89ep-121f,
     0x1.b5bbaap-107f, 0.0f, 0x1.340f94p-106f, 0x1.df086ep-2f, 0.0f, 0x1.b9ba02p-3f,
     0.0f, 0x1.d5d144p-29f, 0x1.d80fc4p-34f, 0.0f, 0.0f, 0x1.f92b62p-89f,
     0x1.86188cp-33f, 0x1.fa6862p-31f, 0x1.9ac17ap-74f, 0x1p0f, 0x1.a2e114p-18f, 0.0f,
     0x1.bb1cdp-37f, 0.0f, 0x1.24b74ap-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.045a38p-87f, 0x1.2c235p-53f, 0x1.5165f2p-31f, 0.0f, 0.0f, 0x1.8d2d8ep-54f,
     0x1.d234e8p-23f, 0x1.f55f98p-1f, 0x1.db172ap-88f, 0x1.67eb7cp-96f,
     0x1.1e8222p-24f, 0x1.3b879ep-14f, 0.0f, 0.0f, 0x1.0b63d2p-102f, 0x1.4d5112p-33f,
     0x1.a47cecp-28f, 0.0f, 0x1.c7e156p-98f, 0.0f, 0.0f, 0.0f, 0x1.d94a98p-4f, 0.0f,
     0x1.326d58p-60f, 0x1.453168p-16f, 0.0f, 0.0f, 0x1.eb84e4p-119f, 0x1.302fb4p-94f,
     0.0f, 0x1.301154p-65f, 0.0f, 0.0f, 0x1.ea1bep-77f, 0.0f, 0.0f, 0x1.28bf3ap-114f,
     0.0f, 0.0f, 0x1.fc5076p-7f, 0x1.a9cb26p-32f, 0x1.78c9ep-33f, 0.0f,
     0x1.4baad6p-49f, 0x1.b36acp-65f, 0.0f, 0.0f, 0x1.0f7aap-2f, 0.0f, 0x1.556eap-83f,
     0x1.923bacp-69f, 0x1.064854p-9f, 0.0f, 0x1.73b234p-71f, 0x1.1ac7e6p-21f,
     0x1.1f954ep-91f, 0x1.94773ep-50f, 0.0f, 0.0f, 0x1.05aed6p-112f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.9f7c88p-19f, 0.0f, 0x1.8e1cbcp-114f, 0x1.0ea288p-121f, 0.0f, 0.0f,
     0.0f, 0x1.ac5612p-88f, 0x1.68dedcp-34f, 0x1.39cf3ep-64f, 0x1.d55daap-29f, 0.0f,
     0x1.347464p-73f, 0.0f, 0.0f, 0x1.31143p-28f, 0x1.c2af0cp-34f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.5d0d7ep-80f, 0x1.c7123cp-3f, 0x1.3b1634p-44f,
     0x1.d976ap-54f, 0.0f, 0x1.44c12cp-34f, 0x1.0ebf7p-98f, 0x1.236194p-104f,
     0x1.a2e804p-13f, 0.0f, 0x1.843d68p-76f, 0x1.a04948p-21f, 0x1.47f8ap-104f,
     0x1.2f619cp-66f, 0.0f, 0.0f, 0x1.8ea4dcp-27f, 0x1.d54bcp-16f, 0x1.cb3d2p-64f,
     0x1.8a2aa6p-16f, 0.0f, 0.0f, 0x1.77e3b2p-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.60295p-112f, 0x1.b9a048p-116f, 0.0f, 0x1.279696p-6f, 0.0f,
     0x1.ad7482p-4f, 0x1.261d12p-108f, 0.0f, 0x1.1d18dap-32f, 0x1.7728fcp-89f, 0.0f,
     0x1.50b9b8p-73f, 0.0f, 0x1.e7253cp-47f, 0.0f, 0x1.a65486p-18f, 0x1.69f4bcp-126f,
     0.0f, 0.0f, 0x1.d490e4p-29f, 0.0f, 0.0f, 0x1.70c228p-63f, 0x1.3928dep-50f,
     0x1.f14f7ep-85f, 0.0f, 0.0f, 0x1.f02ceap-48f, 0.0f, 0.0f, 0x1.10ff1ap-5f, 0.0f,
     0.0f, 0x1.1c4826p-14f, 0.0f
};
static const float external_bench_wrapper_input_table_arg1[1001]  = {
     0x1.50ff3ep-117f, 0x1.e62ep-109f, 0x1.1fa094p-10f, 0.0f, 0.0f, 0x1.bcfecap-62f,
     0x1.aac7p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c7aa06p-108f, 0.0f, 0x1.57ec88p-42f,
     0x1.5ae37ap-113f, 0x1.40d03cp-50f, 0.0f, 0x1.fbc69p-5f, 0.0f, 0.0f, 0.0f,
     0x1.b4e666p-83f, 0x1.f93276p-8f, 0x1.b2e61ep-52f, 0x1.5a9beap-74f,
     0x1.de8d74p-114f, 0.0f, 0x1.427e76p-85f, 0.0f, 0x1.f5aa7ep-86f, 0.0f,
     0x1.0cb0bcp-115f, 0x1.ada1cap-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d34c26p-2f, 0.0f, 0.0f, 0x1.d1866ep-86f, 0.0f, 0x1.0b77c6p-101f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.55c982p-114f, 0.0f, 0.0f, 0.0f, 0x1.ca50c8p-28f,
     0x1.5e4584p-66f, 0.0f, 0.0f, 0x1.b17e1ep-70f, 0x1.9e28a6p-66f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.71e192p-26f, 0x1.cbbb68p-62f, 0x1.f05f8ep-44f, 0.0f, 0x1.7d75ep-122f,
     0.0f, 0.0f, 0x1.c828bp-103f, 0x1.9554e2p-122f, 0.0f, 0x1.0a16acp-60f, 0.0f,
     0x1.e1a558p-24f, 0x1.0e46ap-88f, 0x1.f23e94p-96f, 0x1.4b1daap-23f, 0.0f,
     0x1.15eda4p-66f, 0.0f, 0x1.5754f8p-116f, 0x1.1cce76p-73f, 0x1.7d0f6cp-22f,
     0x1.b8f06ep-74f, 0.0f, 0.0f, 0x1.491ffp-91f, 0.0f, 0x1.67c60ep-43f, 0.0f,
     0x1.3a4d7p-66f, 0.0f, 0x1.a033a2p-88f, 0x1.1752cap-27f, 0x1.d1c36ap-55f, 0.0f,
     0.0f, 0x1.ddab04p-105f, 0x1.67a6b8p-106f, 0x1.4566ccp-71f, 0.0f, 0.0f, 0.0f,
     0x1.95e852p-24f, 0.0f, 0x1.131d68p-104f, 0.0f, 0x1.3654ccp-124f, 0.0f,
     0x1.ad243p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6f805cp-66f, 0x1.e7d468p-51f,
     0x1.9ab21ap-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.9455ep-51f, 0.0f, 0.0f,
     0x1.5d030cp-36f, 0x1.4c722p-1f, 0x1.03fc64p-19f, 0x1.657094p-3f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.23725ep-116f, 0x1.2aa8ccp-55f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ef899cp-44f, 0.0f, 0.0f, 0x1.0f053p-33f, 0.0f,
     0x1.a49336p-44f, 0.0f, 0x1.c8682ap-9f, 0.0f, 0x1.c9cfd2p-16f, 0x1.7a67f8p-96f,
     0.0f, 0.0f, 0x1.d68c2p-123f, 0x1.1910cap-104f, 0x1.2b1dd8p-114f, 0.0f,
     0x1.719978p-30f, 0x1.43dc44p-60f, 0x1.3c739cp-86f, 0.0f, 0x1.50012p-65f,
     0x1.08ce1ep-10f, 0.0f, 0.0f, 0x1.5b7a02p-58f, 0x1.c3edd4p-84f, 0.0f,
     0x1.85177ep-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.491ca8p-6f, 0.0f,
     0x1.10d5e8p-64f, 0x1.ef95cp-56f, 0x1.3be582p-3f, 0.0f, 0x1.193e78p-33f, 0.0f,
     0.0f, 0x1.07ae34p-96f, 0.0f, 0.0f, 0x1.44b812p-16f, 0x1.fcd866p-2f,
     0x1.30879ap-25f, 0.0f, 0x1.c331c6p-87f, 0.0f, 0x1.8de92ap-28f, 0.0f,
     0x1.0adc4cp-12f, 0.0f, 0.0f, 0x1.8642c4p-76f, 0.0f, 0x1.b7c186p-56f,
     0x1.9bb17ep-28f, 0x1.221a3p-116f, 0.0f, 0x1.f2a938p-119f, 0.0f, 0x1.4a39e4p-91f,
     0.0f, 0x1.42f4c8p-91f, 0x1.958026p-43f, 0x1.6b56dep-29f, 0x1.41d9e6p-50f, 0.0f,
     0.0f, 0.0f, 0x1.4f4946p-67f, 0x1.7982c4p-37f, 0x1.48c144p-14f, 0x1.67f79ap-7f,
     0.0f, 0.0f, 0x1.8bedf8p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f4e01ap-116f,
     0x1.5f646ep-93f, 0x1.06edeap-118f, 0x1.06e668p-87f, 0.0f, 0x1.70f9bp-11f,
     0x1.5073b8p-47f, 0.0f, 0.0f, 0.0f, 0x1.4ae8bcp-14f, 0x1.0c346ap-65f, 0.0f,
     0x1.043ad8p-70f, 0.0f, 0x1.72d57cp-58f, 0x1.df34ccp-69f, 0.0f, 0.0f,
     0x1.5a89eap-112f, 0.0f, 0x1.5d6dbap-62f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.846a18p-104f, 0x1.202b28p-76f, 0.0f, 0x1.8667d4p-116f, 0x1.3665acp-87f, 0.0f,
     0.0f, 0x1.53dbccp-97f, 0.0f, 0.0f, 0.0f, 0x1.cf75bp-20f, 0x1.a9d5ccp-78f, 0.0f,
     0x1.fc0a8ap-100f, 0x1p0f, 0x1.b39626p-3f, 0x1.1962e6p-59f, 0.0f, 0x1.f57438p-76f,
     0.0f, 0x1.0c2afp-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.87162cp-72f, 0x1.e26a0cp-31f,
     0.0f, 0.0f, 0x1.0323e8p-121f, 0x1.c884f8p-104f, 0x1.1be034p-96f,
     0x1.d54732p-100f, 0.0f, 0x1.f1e17p-21f, 0.0f, 0.0f, 0.0f, 0x1.d2ddeep-66f,
     0x1.441848p-106f, 0.0f, 0x1.57a8f8p-125f, 0x1.266ea4p-16f, 0.0f,
     0x1.10ae08p-104f, 0x1.f625p-21f, 0x1.0bd9c2p-119f, 0x1.c27cd8p-84f,
     0x1.6506eap-24f, 0x1.9fe0ep-75f, 0.0f, 0x1.618304p-50f, 0x1.ddd802p-35f,
     0x1.2e4796p-105f, 0.0f, 0.0f, 0x1.dd1e14p-46f, 0x1.a3e228p-120f, 0.0f,
     0x1.0e0dbcp-1f, 0x1.e811acp-105f, 0x1.56681p-22f, 0.0f, 0x1.ef29dap-77f, 0.0f,
     0.0f, 0x1.bb5d84p-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c0ab18p-46f, 0.0f, 0.0f,
     0x1.ac30cap-98f, 0.0f, 0x1.e5bf32p-89f, 0x1.48f5d4p-12f, 0x1.d6b3d4p-46f,
     0x1.e58594p-48f, 0.0f, 0x1.21d1b6p-15f, 0.0f, 0.0f, 0x1.f2bf58p-45f,
     0x1.8f299cp-91f, 0x1.ed03cep-64f, 0x1.2c1a14p-35f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.08db2p-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b41024p-34f, 0x1.8ae7e6p-116f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f75ef8p-108f, 0x1.df7d86p-87f,
     0.0f, 0.0f, 0x1.c14a2ep-58f, 0x1.553f02p-98f, 0.0f, 0.0f, 0x1.9ae444p-82f,
     0x1.cb4806p-63f, 0.0f, 0x1.f6609ap-79f, 0.0f, 0x1.fda266p-86f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.0778e4p-79f, 0x1.7b63d2p-63f, 0x1.250152p-15f, 0x1.b17abep-17f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.0c473ap-9f, 0x1.62aa8ep-92f, 0.0f, 0.0f, 0.0f,
     0x1.6f7e2ap-40f, 0.0f, 0.0f, 0x1.f809e6p-4f, 0x1.4ae416p-124f, 0x1.612326p-26f,
     0x1.91b4b8p-63f, 0x1.fd8f5ap-60f, 0x1.120808p-93f, 0.0f, 0.0f, 0x1.4af64ap-110f,
     0.0f, 0x1.4a9be2p-77f, 0x1.6a780ep-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.82b0c2p-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1c4ap-64f, 0.0f, 0.0f, 0.0f,
     0x1.ecdp-60f, 0x1.2ca82p-96f, 0.0f, 0.0f, 0x1.15a1dap-21f, 0x1.1de50ep-16f, 0.0f,
     0x1.5c9f68p-55f, 0x1.2d63dap-60f, 0x1.0c87e6p-65f, 0.0f, 0x1.83736ap-14f,
     0x1.c2b2c8p-36f, 0.0f, 0.0f, 0.0f, 0x1.222bfep-9f, 0.0f, 0x1.ad7356p-105f, 0.0f,
     0x1.cca9cp-85f, 0.0f, 0.0f, 0x1.6f0232p-72f, 0x1.30aa5cp-97f, 0.0f,
     0x1.2fa732p-104f, 0x1.e2fa3p-28f, 0.0f, 0.0f, 0x1.125a74p-11f, 0.0f,
     0x1.0a2bfep-101f, 0x1.cae9dcp-94f, 0.0f, 0x1.88537p-106f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.55df2ep-37f, 0x1.ea40ep-25f, 0x1.31052ep-76f, 0.0f, 0x1.428fdep-2f,
     0x1.eb0546p-7f, 0.0f, 0x1.43e07p-26f, 0x1.cdfb36p-1f, 0.0f, 0x1.fe50dp-97f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.60f0f6p-68f, 0.0f, 0x1.c7f79cp-42f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1p0f, 0.0f, 0x1.d49d06p-49f, 0x1.0b5222p-98f, 0x1.5d013ep-88f,
     0x1.90c91p-83f, 0x1.2a927ap-93f, 0x1.930984p-50f, 0.0f, 0.0f, 0.0f,
     0x1.48eccap-87f, 0.0f, 0.0f, 0x1.a6178ep-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b4708p-111f, 0.0f, 0.0f, 0x1.4c556ap-98f, 0.0f, 0x1.021aacp-120f, 0.0f,
     0.0f, 0x1.61f758p-9f, 0x1.d57202p-56f, 0.0f, 0x1.b69096p-106f, 0x1.7da9dep-100f,
     0.0f, 0x1.98500ap-54f, 0x1.f91fc8p-106f, 0.0f, 0.0f, 0x1.b20e5p-81f, 0.0f, 0.0f,
     0.0f, 0x1.769d74p-37f, 0x1.a15ee8p-105f, 0x1.a6718cp-11f, 0x1.8f22e2p-13f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.138bd4p-71f, 0x1.b74a1ap-14f,
     0x1.4b890cp-36f, 0.0f, 0x1.5252dap-42f, 0.0f, 0.0f, 0.0f, 0x1.652794p-50f, 0.0f,
     0x1.0c152ap-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.099486p-106f, 0.0f,
     0.0f, 0.0f, 0x1.a222d2p-96f, 0x1.9976f6p-30f, 0.0f, 0x1.1c293p-91f, 0.0f,
     0x1.1bf40ap-63f, 0x1.3f837ap-87f, 0.0f, 0.0f, 0x1.a58abp-124f, 0x1.62238ap-82f,
     0x1.a94daep-87f, 0.0f, 0.0f, 0x1.ae8ec6p-26f, 0x1.e3fd96p-109f, 0x1.bbc148p-79f,
     0.0f, 0x1.c863e6p-90f, 0x1.e94854p-91f, 0.0f, 0x1.d47fe2p-39f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.6f8a6p-5f, 0.0f, 0x1.36eeep-67f, 0x1.8465c6p-97f, 0.0f,
     0x1.2ad39ap-76f, 0.0f, 0.0f, 0x1.b2aaa8p-69f, 0.0f, 0x1.27e46p-55f, 0.0f, 0.0f,
     0x1.4138ap-93f, 0.0f, 0.0f, 0.0f, 0x1.5ed596p-108f, 0x1.5f4b66p-63f,
     0x1.a0220ep-123f, 0x1.3e468cp-19f, 0.0f, 0x1.533adap-15f, 0.0f, 0x1.d2728p-80f,
     0x1.7eed4cp-60f, 0.0f, 0.0f, 0.0f, 0x1.68e0cap-41f, 0x1.94beccp-30f, 0.0f,
     0x1.758778p-115f, 0x1.d04d7cp-7f, 0x1.1b02ecp-54f, 0.0f, 0x1.7e392p-33f,
     0x1.01ba4ap-74f, 0.0f, 0.0f, 0x1.e7d3dcp-114f, 0x1.720136p-81f, 0x1.c642fp-96f,
     0x1.161146p-114f, 0.0f, 0.0f, 0x1.badbc4p-93f, 0x1.ed0764p-23f, 0.0f,
     0x1.3a209cp-27f, 0.0f, 0.0f, 0.0f, 0x1.4e3fdp-89f, 0.0f, 0.0f, 0.0f,
     0x1.8b39e6p-67f, 0x1.c53958p-67f, 0.0f, 0.0f, 0x1.1113dep-80f, 0x1.dbe1ap-46f,
     0x1.0a981ap-84f, 0x1.fbdc7ap-92f, 0.0f, 0x1.f4312ep-88f, 0.0f, 0x1.d4689ep-103f,
     0.0f, 0.0f, 0x1.2b548cp-79f, 0x1.59a94ap-66f, 0.0f, 0x1.4694e8p-71f,
     0x1.5a9608p-59f, 0.0f, 0.0f, 0x1.ee51cap-67f, 0.0f, 0.0f, 0x1.67aa5ap-82f,
     0x1.5add4ep-120f, 0.0f, 0.0f, 0.0f, 0x1.787d2cp-114f, 0.0f, 0x1.acedf4p-46f,
     0x1.ea7f2p-117f, 0.0f, 0x1.725292p-121f, 0x1.08f748p-54f, 0x1.f42dacp-3f,
     0x1.aa2c26p-111f, 0x1.657792p-44f, 0.0f, 0x1.82dc88p-22f, 0x1.61f45ep-22f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.1703a4p-7f, 0x1.a73886p-26f, 0.0f, 0x1.390bcep-73f,
     0x1.d9b5acp-75f, 0x1.719796p-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.005cf4p-106f,
     0x1.00f36ep-75f, 0.0f, 0x1.2ad8e4p-60f, 0x1.a7885cp-123f, 0.0f, 0x1.073534p-25f,
     0x1.a4886ep-35f, 0x1.9ce322p-13f, 0.0f, 0x1.3129p-11f, 0x1.2d02dap-65f,
     0x1.4c02dcp-89f, 0.0f, 0.0f, 0.0f, 0x1.8a8082p-84f, 0.0f, 0x1.aa2754p-125f,
     0x1.e48856p-119f, 0.0f, 0.0f, 0x1.dc237cp-102f, 0x1.ac99d2p-86f, 0.0f, 0.0f,
     0.0f, 0x1.c37c02p-47f, 0.0f, 0x1.1e026p-27f, 0.0f, 0.0f, 0x1.fd766p-18f,
     0x1.fe51e6p-77f, 0x1.db7494p-35f, 0x1.b30f3ap-86f, 0.0f, 0.0f, 0x1.c293b2p-124f,
     0.0f, 0x1.7c2c2ep-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a932c2p-34f, 0.0f,
     0x1.affffcp-14f, 0x1.f8738ap-126f, 0.0f, 0.0f, 0.0f, 0x1.c5998cp-39f, 0.0f,
     0x1.0215dcp-120f, 0x1.b01f46p-82f, 0.0f, 0.0f, 0.0f, 0x1.8acc8p-118f,
     0x1.8be3e8p-110f, 0x1.d4172ap-116f, 0.0f, 0.0f, 0x1.471036p-121f, 0.0f, 0.0f,
     0.0f, 0x1.5f09b4p-94f, 0x1.2fdab8p-14f, 0.0f, 0x1.7496e8p-119f, 0.0f,
     0x1.6c0d5p-125f, 0x1.4d0594p-57f, 0x1.2f3334p-94f, 0x1.698edp-69f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.2bcd8p-62f, 0.0f, 0.0f, 0.0f, 0x1.89a42ap-108f, 0.0f,
     0x1.3f94d4p-41f, 0.0f, 0x1.e9834cp-73f, 0.0f, 0.0f, 0.0f, 0x1.643fa4p-103f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3dd9c2p-90f, 0x1.f84436p-62f, 0x1.73b8b4p-105f,
     0x1.b3a7bep-76f, 0.0f, 0.0f, 0x1.ed5b82p-10f, 0x1.706d02p-126f, 0x1.41a51cp-42f,
     0.0f, 0x1.50b116p-76f, 0.0f, 0x1.197266p-64f, 0x1.00ea74p-24f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.be080ep-77f, 0x1.6781ccp-103f, 0x1.b3f026p-86f, 0x1.e77b04p-109f,
     0x1.87e736p-125f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.e7eaa4p-80f, 0x1.65d7eap-111f,
     0x1.937f24p-69f, 0.0f, 0x1.6386bep-81f, 0.0f, 0x1.268b06p-13f, 0.0f,
     0x1.4a85cep-48f, 0x1.273542p-70f, 0x1.b0c3dcp-69f, 0.0f, 0.0f, 0x1.52213ep-6f,
     0.0f, 0x1.2e3e28p-15f, 0.0f, 0x1.45cd5p-110f, 0.0f, 0x1.dc18acp-50f, 0.0f, 0.0f,
     0.0f, 0x1.b53ad4p-4f, 0.0f, 0x1.1ddea6p-23f, 0.0f, 0x1.9e0902p-95f,
     0x1.b474c6p-70f, 0.0f, 0x1.b472ap-62f, 0x1.87d3ap-2f, 0x1.b1713cp-1f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3ef794p-75f, 0x1.5ad79p-38f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.346458p-45f, 0.0f, 0x1.16479p-15f, 0.0f, 0.0f,
     0x1.b04bfap-31f, 0x1.76e016p-94f, 0x1.804f78p-72f, 0x1.a4863ap-55f,
     0x1.9bee1cp-118f, 0x1.97b988p-105f, 0x1.dd684ep-9f, 0x1.832b4p-97f,
     0x1.9b0946p-34f, 0x1.9da1dcp-69f, 0x1.543dbap-122f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5c35aap-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d62b6ep-118f, 0x1.142528p-52f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a0d2eep-100f, 0x1.894976p-53f, 0.0f, 0x1.92025p-34f,
     0.0f, 0x1.1e7f9cp-22f, 0.0f, 0x1.2e0676p-25f, 0.0f, 0.0f, 0.0f, 0x1.fa7eb2p-80f,
     0x1p0f, 0x1.a0976p-50f, 0.0f, 0.0f, 0x1.592e7ap-103f, 0x1.5f235ap-120f, 0.0f,
     0.0f, 0x1.86b3b8p-63f, 0x1.a67b98p-45f, 0x1.39630ap-36f, 0.0f, 0x1.327c26p-44f,
     0.0f, 0x1.69506ap-37f, 0.0f, 0.0f, 0x1.82011ap-37f, 0.0f, 0x1.c0bb6p-19f, 0.0f,
     0x1.50db38p-113f, 0.0f, 0.0f, 0x1.55a426p-114f, 0x1.0d8deap-86f, 0.0f, 0.0f,
     0x1.952084p-97f, 0.0f, 0x1.5ccb16p-79f, 0.0f, 0x1.c4972ep-9f, 0.0f,
     0x1.f12476p-26f, 0.0f, 0.0f, 0x1.2e695ap-91f, 0.0f, 0.0f, 0x1.e3bbd4p-16f,
     0x1.2e9bbp-114f, 0.0f, 0x1.792b6ap-46f, 0x1.26eb2ep-14f, 0.0f, 0.0f, 0.0f,
     0x1.84830ep-104f, 0.0f, 0x1.cf4392p-6f, 0.0f, 0.0f, 0x1.7120acp-97f, 0.0f, 0.0f,
     0x1.74d346p-52f, 0x1.a1a224p-125f, 0.0f, 0x1.31111p-2f, 0x1.205826p-81f,
     0x1.f04396p-9f, 0.0f, 0x1.e69d44p-37f, 0.0f, 0.0f, 0x1.214418p-96f, 0.0f,
     0x1.5cc9c4p-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cc2ea2p-93f
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
            tmp2 = Sleef_hypotf1_u05purecfma(tmp0, tmp1);
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
    printf("Sleef_hypotf1_u05purecfma %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_hypotf1_u05purecfma bench acc %a\n", global_bench_acc);
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
