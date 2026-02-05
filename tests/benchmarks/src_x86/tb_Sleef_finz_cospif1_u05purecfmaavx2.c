/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_cospif1_u05purecfma.c --function \
 *     Sleef_finz_cospif1_u05purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.a69298p-61f, 0.0f, 0x1.d2dfb4p-69f, 0x1.8344dap-31f, 0.0f, 0x1.c8f734p-80f,
     0.0f, 0x1.8d17ep-21f, 0x1.6c4448p-101f, 0.0f, 0x1.ce672ep-39f, 0.0f,
     0x1.c1960ap-117f, 0x1.51520ap-120f, 0.0f, 0.0f, 0.0f, 0x1.46b2fp-1f, 0.0f,
     0x1.0f510cp-97f, 0.0f, 0.0f, 0x1.72ba4ep-10f, 0x1.750d54p-66f, 0x1.93503ap-20f,
     0x1.122ea8p-3f, 0.0f, 0.0f, 0x1.34fbbep-110f, 0x1.343d9p-50f, 0.0f,
     0x1.703efap-119f, 0x1.ba9a4ap-17f, 0x1.0d756ap-120f, 0x1.87d7d2p-49f, 0.0f,
     0x1.cb858ep-2f, 0x1.a2d2cep-84f, 0x1.bdaffap-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f25f44p-29f, 0x1.d783bp-125f, 0x1.f756fcp-93f, 0.0f, 0x1p0f, 0.0f,
     0x1.86f01ap-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.7094dep-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.49b1aap-48f,
     0x1.d6a4c6p-45f, 0.0f, 0x1.77d5dap-91f, 0.0f, 0x1.1c6b64p-8f, 0x1.26bec2p-67f,
     0.0f, 0x1.d89da6p-108f, 0x1.ee75eep-124f, 0x1.d3fd3ep-82f, 0x1.fd35ep-20f,
     0x1.b4437p-60f, 0.0f, 0x1.d0d76p-3f, 0x1.051ce4p-119f, 0.0f, 0.0f, 0.0f,
     0x1.1d3206p-70f, 0.0f, 0x1.96583cp-43f, 0x1.9d859p-36f, 0.0f, 0x1.6a2078p-46f,
     0.0f, 0x1.247b1ep-64f, 0x1.80be02p-89f, 0.0f, 0x1.926c2cp-26f, 0.0f, 0.0f,
     0x1.9dd9c4p-104f, 0x1.b933fcp-3f, 0x1.b23a32p-68f, 0.0f, 0x1.241446p-66f, 0.0f,
     0x1.0273e8p-31f, 0.0f, 0x1.e4a5a2p-29f, 0x1.dc1114p-12f, 0.0f, 0x1.23af8cp-61f,
     0x1.fb7386p-70f, 0x1.7da5dap-74f, 0.0f, 0.0f, 0x1.322864p-73f, 0.0f, 0.0f, 0.0f,
     0x1.544fc6p-89f, 0.0f, 0x1.56d514p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3128e8p-66f,
     0.0f, 0x1.446866p-4f, 0x1.31a8fcp-86f, 0x1.2683c6p-73f, 0x1.8302bp-15f,
     0x1.579ae8p-106f, 0x1.5924e4p-92f, 0x1.9d1336p-110f, 0x1.200dc6p-21f,
     0x1.8f3c76p-67f, 0x1.e21dbap-20f, 0.0f, 0.0f, 0x1.756468p-31f, 0.0f,
     0x1.9b81f6p-70f, 0.0f, 0x1.497bcep-81f, 0.0f, 0.0f, 0x1.b59178p-58f,
     0x1.5c640ap-60f, 0x1.6e738p-62f, 0.0f, 0x1.721612p-52f, 0.0f, 0.0f,
     0x1.488a8cp-95f, 0x1.c773fp-12f, 0.0f, 0x1.caf93ep-112f, 0.0f, 0.0f,
     0x1.dd5eccp-77f, 0x1.7b02a2p-16f, 0x1.0d9368p-105f, 0x1.8a5ffp-86f, 0.0f, 0.0f,
     0.0f, 0x1.b186bap-25f, 0x1.b338bcp-53f, 0.0f, 0x1.147b12p-95f, 0x1.9670eep-52f,
     0.0f, 0x1.16c43ap-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b3f0ap-21f, 0.0f, 0.0f, 0.0f, 0x1.ed43b8p-83f, 0x1.51dcb6p-65f, 0.0f, 0.0f,
     0x1.1acc9ap-78f, 0.0f, 0.0f, 0.0f, 0x1.196f48p-4f, 0.0f, 0x1.b4d6bap-52f,
     0x1.5a55p-121f, 0x1.4d32eap-5f, 0x1.64bf62p-27f, 0x1.0004c6p-76f,
     0x1.23179ap-99f, 0.0f, 0.0f, 0.0f, 0x1.e91b62p-14f, 0.0f, 0x1.fce71ap-9f,
     0x1.d426bcp-36f, 0x1.38bfbap-77f, 0.0f, 0x1.002816p-95f, 0x1.70d18p-110f, 0.0f,
     0.0f, 0.0f, 0x1.c4e4aep-98f, 0.0f, 0x1.1c05b8p-106f, 0x1.5503cep-26f,
     0x1.3f61f4p-125f, 0x1.02716cp-60f, 0x1.1dee1ap-115f, 0.0f, 0.0f, 0x1.8a1b1ap-47f,
     0x1.b0e4bcp-93f, 0.0f, 0.0f, 0.0f, 0x1.683c8p-91f, 0x1.766342p-44f, 0.0f, 0.0f,
     0x1.e3c8f8p-87f, 0x1.ddbb6ep-125f, 0.0f, 0.0f, 0.0f, 0x1.0d3b22p-59f, 0.0f,
     0x1.d9b79ep-90f, 0x1.ec26a2p-126f, 0.0f, 0x1.d0595ap-94f, 0x1.0cdb62p-20f, 0.0f,
     0.0f, 0.0f, 0x1.5b61bep-95f, 0x1.2f0a56p-58f, 0.0f, 0x1.b7010ap-7f,
     0x1.5f527ep-4f, 0.0f, 0.0f, 0x1.35b74p-23f, 0x1.9478dep-24f, 0x1.ca0068p-4f,
     0x1.424c1ap-56f, 0.0f, 0.0f, 0x1.aab966p-44f, 0.0f, 0x1.166646p-1f,
     0x1.feb6ep-89f, 0.0f, 0.0f, 0x1.8e730ep-109f, 0.0f, 0x1.97c16p-6f, 0.0f,
     0x1.bc8cacp-98f, 0x1.15638ep-42f, 0x1.e9b0b8p-40f, 0.0f, 0.0f, 0x1p0f, 0.0f,
     0.0f, 0x1.c9628p-31f, 0.0f, 0.0f, 0.0f, 0x1.ed2cep-103f, 0.0f, 0.0f,
     0x1.89e7d2p-21f, 0.0f, 0.0f, 0x1.b7d6e6p-73f, 0x1.88c796p-113f, 0x1.86b72p-32f,
     0x1.cdb2fcp-94f, 0x1.9bf6dap-50f, 0x1.4d615p-87f, 0x1.52812cp-93f, 0.0f, 0.0f,
     0x1.3f965cp-72f, 0x1.0b09d2p-91f, 0.0f, 0.0f, 0x1.94bc4cp-48f, 0.0f,
     0x1.b328acp-37f, 0.0f, 0.0f, 0x1.49d408p-58f, 0x1.cd404p-27f, 0.0f, 0.0f,
     0x1.e2bd52p-88f, 0.0f, 0x1.5fc566p-6f, 0.0f, 0x1.244374p-60f, 0x1.e1b4eep-12f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9f89dcp-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.33107p-15f, 0x1.a5083p-74f, 0.0f, 0x1.32d90cp-121f, 0.0f, 0x1.2a0802p-14f,
     0.0f, 0x1.16566p-116f, 0x1.467fc4p-116f, 0x1.fb95e4p-71f, 0.0f, 0x1.4daa18p-42f,
     0x1.73448ap-1f, 0x1.fc8faep-46f, 0x1.8f567p-104f, 0.0f, 0x1.0ca4fp-77f, 0.0f,
     0.0f, 0.0f, 0x1.f2688ep-45f, 0.0f, 0x1.fccb2ap-8f, 0x1.37355p-43f,
     0x1.cc8cdep-80f, 0.0f, 0.0f, 0.0f, 0x1.f1094ep-92f, 0x1.d1d13cp-28f, 0.0f, 0.0f,
     0x1.fc1ef8p-63f, 0x1.b01722p-2f, 0.0f, 0x1.999936p-2f, 0.0f, 0x1.a2c8eap-7f,
     0.0f, 0x1.065328p-68f, 0x1.611a64p-23f, 0.0f, 0x1.3230ep-3f, 0x1.e7d54p-35f,
     0x1.1dc768p-87f, 0x1.fe5122p-116f, 0x1.813abep-25f, 0x1.0df6fcp-86f,
     0x1.fec7a2p-82f, 0x1.ae86fep-7f, 0.0f, 0.0f, 0x1.cef0c2p-79f, 0.0f,
     0x1.da62c2p-60f, 0.0f, 0x1.be2898p-79f, 0.0f, 0x1.427e68p-86f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.60373ep-13f, 0x1.af1902p-67f, 0.0f, 0x1.b0fe4ep-30f,
     0x1.29c77ap-90f, 0x1.5b840ep-33f, 0x1.603a8p-42f, 0x1.3aad96p-91f, 0.0f,
     0x1.034c34p-27f, 0.0f, 0.0f, 0.0f, 0x1.ee7552p-65f, 0.0f, 0.0f, 0x1.20625p-64f,
     0.0f, 0.0f, 0x1.1c2c48p-126f, 0.0f, 0.0f, 0.0f, 0x1.8aa4a8p-5f, 0.0f,
     0x1.11b44ap-24f, 0.0f, 0x1.2a5c6ap-49f, 0x1.1d75b6p-8f, 0x1.60e092p-124f, 0.0f,
     0.0f, 0.0f, 0x1.b51a2p-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.688fb6p-30f,
     0x1.706886p-1f, 0.0f, 0.0f, 0x1.4ee53ep-109f, 0.0f, 0x1.f4bc56p-113f,
     0x1.0fd71cp-101f, 0x1.40cefp-106f, 0x1.0e1994p-105f, 0x1.b2a0ccp-32f,
     0x1.d256dcp-66f, 0.0f, 0.0f, 0.0f, 0x1.939308p-124f, 0.0f, 0x1.a498c8p-64f,
     0x1.f9335ap-64f, 0.0f, 0x1.4154f4p-72f, 0.0f, 0.0f, 0x1.e922fap-54f, 0.0f, 0.0f,
     0x1.e4f212p-122f, 0.0f, 0.0f, 0x1.a82734p-108f, 0.0f, 0.0f, 0.0f,
     0x1.951d9ap-113f, 0.0f, 0.0f, 0.0f, 0x1.a7b41cp-61f, 0.0f, 0x1.c52bc6p-105f,
     0x1.fbdc36p-109f, 0.0f, 0x1.f6918ep-97f, 0.0f, 0x1.c2b43ap-12f, 0x1.387b28p-69f,
     0x1.bd9b2ap-22f, 0.0f, 0.0f, 0x1.0a9952p-117f, 0x1.68c764p-94f, 0.0f,
     0x1.6f9b66p-1f, 0x1.f8862ap-15f, 0.0f, 0x1.ab42fp-112f, 0.0f, 0.0f,
     0x1.3fa758p-79f, 0x1.3e928cp-106f, 0x1.cff866p-77f, 0x1.d0cd42p-118f,
     0x1.6f168p-86f, 0x1.4087f2p-65f, 0x1.100582p-98f, 0.0f, 0x1.e08722p-123f,
     0x1.26d1c8p-60f, 0x1.b93336p-77f, 0x1.ae13c2p-68f, 0x1.cba26p-90f, 0.0f, 0.0f,
     0x1.0b7a1ap-125f, 0x1.65d99p-21f, 0.0f, 0.0f, 0x1.8a895p-101f, 0.0f,
     0x1.9ea312p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a6110cp-45f,
     0x1.066544p-14f, 0.0f, 0.0f, 0x1.33498ap-32f, 0x1.5890a6p-124f, 0x1.a36fd6p-25f,
     0.0f, 0.0f, 0.0f, 0x1.06640ep-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.95f224p-60f, 0.0f, 0.0f, 0x1.387698p-43f, 0.0f, 0x1.de0116p-123f,
     0x1.2c54bep-119f, 0x1p0f, 0x1.5d216ap-42f, 0x1.47d066p-91f, 0x1.83358ep-75f,
     0x1.122032p-55f, 0x1.d103fap-6f, 0.0f, 0.0f, 0x1.935afcp-105f, 0.0f,
     0x1.8b9096p-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9b4bf2p-11f, 0.0f,
     0x1.668464p-68f, 0.0f, 0.0f, 0.0f, 0x1.9ce784p-82f, 0x1.62732ap-5f, 0.0f,
     0x1.e8c006p-9f, 0.0f, 0x1.39d9f8p-103f, 0.0f, 0x1.2b9484p-49f, 0x1.22b538p-102f,
     0x1.e7da7ep-102f, 0x1.45cb9p-112f, 0.0f, 0x1.d11e0ep-86f, 0x1.e2176p-126f,
     0x1.916c5cp-22f, 0x1.aa801cp-10f, 0.0f, 0x1.83f956p-80f, 0.0f, 0x1.8a0bbcp-50f,
     0x1.6ed41p-103f, 0.0f, 0x1.059548p-23f, 0x1.d65c84p-77f, 0.0f, 0.0f, 0.0f,
     0x1.452fe6p-110f, 0x1.ab8d02p-97f, 0.0f, 0x1.3d68ecp-73f, 0x1.f341fp-111f,
     0x1.c15ae8p-81f, 0.0f, 0.0f, 0x1.177666p-105f, 0.0f, 0.0f, 0x1.cc0d3p-24f,
     0x1.47ab2p-86f, 0x1.273b5ep-25f, 0x1.0994e4p-1f, 0.0f, 0.0f, 0.0f,
     0x1.f2917p-101f, 0x1.d88914p-78f, 0.0f, 0.0f, 0x1.a40bbcp-36f, 0.0f, 0.0f,
     0x1.c4e5e4p-82f, 0x1.9f80c2p-68f, 0.0f, 0.0f, 0x1.703d96p-42f, 0x1.6ffa7cp-107f,
     0x1.e07c3ep-116f, 0.0f, 0.0f, 0x1.3bcc0ep-71f, 0x1.8c708cp-22f, 0.0f, 0.0f, 0.0f,
     0x1.2e471ep-10f, 0x1.0f25b2p-101f, 0x1.890a8p-62f, 0.0f, 0x1.05e0dep-77f,
     0x1.d36564p-95f, 0.0f, 0x1.934b44p-54f, 0.0f, 0x1.29abaap-57f, 0x1.b9365ep-62f,
     0.0f, 0x1.affa1p-100f, 0x1.56d692p-81f, 0x1.226946p-2f, 0.0f, 0.0f,
     0x1.bdc73ap-22f, 0x1.b90dfp-111f, 0.0f, 0x1.5cdd38p-118f, 0.0f, 0.0f,
     0x1.bd9ea6p-54f, 0x1.520942p-52f, 0x1.3cc03ap-91f, 0.0f, 0x1.51c75ap-5f, 0.0f,
     0.0f, 0x1.ad2166p-25f, 0.0f, 0.0f, 0.0f, 0x1.79019cp-46f, 0.0f, 0.0f, 0.0f,
     0x1.bb9abp-95f, 0x1.f4e7f8p-7f, 0x1.3705b2p-111f, 0x1.84c3p-56f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ef1a94p-62f, 0.0f, 0x1.ac9bf6p-125f, 0.0f, 0.0f, 0x1.59d39ap-91f,
     0x1.3c7786p-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b94306p-27f, 0.0f, 0x1.1d999p-41f,
     0x1.9a8cbcp-123f, 0.0f, 0x1.68d2ecp-48f, 0x1.38ab7ap-54f, 0x1.79de8ap-37f,
     0x1.d94b0ap-110f, 0.0f, 0x1.a7e85ep-32f, 0.0f, 0x1.6228p-89f, 0.0f,
     0x1.cf91dap-104f, 0.0f, 0.0f, 0.0f, 0x1.760b9p-95f, 0.0f, 0x1.26264cp-113f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.46aa82p-47f, 0x1.58efb6p-1f, 0.0f, 0.0f, 0x1.7a9c86p-8f,
     0x1.16fbfap-4f, 0x1.25055p-3f, 0.0f, 0x1.7d6a12p-24f, 0.0f, 0x1.4d831ep-25f,
     0x1.efc72p-50f, 0.0f, 0.0f, 0x1.d11b28p-77f, 0.0f, 0x1.0c6da6p-38f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.97d5d6p-45f, 0.0f, 0x1.e529eep-118f, 0x1.8ee47cp-75f,
     0x1.9233ep-100f, 0x1.647906p-69f, 0.0f, 0x1.2866d4p-84f, 0x1.6bf8d8p-82f, 0.0f,
     0x1.12fedp-79f, 0.0f, 0.0f, 0.0f, 0x1.ca62b2p-120f, 0x1.839b26p-102f,
     0x1.4fbae4p-71f, 0x1.0ffb6cp-30f, 0x1.7fd74ep-6f, 0.0f, 0x1.8d5af6p-119f,
     0x1.ab670cp-3f, 0.0f, 0.0f, 0.0f, 0x1.0d02ccp-3f, 0.0f, 0x1.d58a9p-29f,
     0x1.0b6dacp-35f, 0x1.aff694p-64f, 0.0f, 0.0f, 0x1.41f112p-120f, 0.0f,
     0x1.b9b932p-34f, 0.0f, 0x1.80e41p-118f, 0.0f, 0x1.1f4c32p-16f, 0.0f,
     0x1.ac519cp-11f, 0x1.d3c2a4p-65f, 0x1.9c6df2p-28f, 0.0f, 0.0f, 0x1.68faecp-119f,
     0.0f, 0.0f, 0x1.063596p-112f, 0.0f, 0x1.a49d82p-25f, 0.0f, 0.0f, 0x1.cedafp-108f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d29be2p-119f, 0x1p0f, 0.0f, 0x1.ff0118p-60f,
     0x1.003ffp-44f, 0x1.f29b0ep-19f, 0.0f, 0.0f, 0.0f, 0x1.8a8d82p-102f,
     0x1.f89902p-36f, 0x1.174f36p-29f, 0.0f, 0x1.a5d3p-53f, 0x1.19cb0ep-71f, 0.0f,
     0.0f, 0x1.668ca6p-63f, 0.0f, 0.0f, 0.0f, 0x1.ac8fd8p-43f, 0.0f, 0.0f, 0.0f,
     0x1.c1ea3ap-41f, 0.0f, 0x1.a09288p-55f, 0.0f, 0x1.522154p-75f, 0x1.50e6dcp-34f,
     0.0f, 0x1.50a81ep-83f, 0x1.1ed6e4p-19f, 0.0f, 0.0f, 0.0f, 0x1.706a82p-6f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d1ac18p-24f, 0.0f, 0x1.2b79aep-110f, 0x1.ee6fb6p-42f,
     0x1.fcc11ep-42f, 0x1.f1d66ep-99f, 0.0f, 0x1.0351fp-32f, 0.0f, 0.0f, 0.0f,
     0x1.4bc364p-58f, 0x1.b626b8p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0d594p-63f, 0.0f,
     0.0f, 0.0f, 0x1.c592ecp-116f, 0x1.111006p-73f, 0.0f, 0.0f, 0.0f,
     0x1.f019cap-124f, 0.0f, 0x1.cbafaap-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.31fa5p-23f, 0x1.4b2aacp-67f, 0.0f, 0x1.271386p-103f, 0x1.7fbf14p-82f,
     0x1.d7a31p-123f, 0x1.00c1f8p-32f, 0.0f, 0x1.32e082p-38f, 0.0f, 0x1.e47a6ap-93f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2b0c8cp-12f, 0.0f, 0x1.2d9d3ap-20f, 0.0f,
     0x1.e1605cp-29f, 0.0f, 0.0f, 0.0f, 0x1.800282p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.85447ep-106f, 0x1.fe84f6p-20f, 0x1.9d1096p-83f, 0x1.795774p-77f,
     0x1.ae3af8p-97f, 0.0f, 0.0f, 0x1.57abb8p-105f, 0x1.64779ap-46f, 0.0f, 0.0f, 0.0f,
     0x1.78e07cp-39f, 0.0f, 0x1.9cc594p-85f, 0x1.4b4894p-62f, 0x1.310adep-106f,
     0x1.a5526p-23f, 0x1.2c72ecp-105f, 0x1.302afp-46f, 0.0f, 0x1.1b602cp-74f,
     0x1.70456ep-22f, 0.0f, 0.0f, 0.0f, 0x1.9f063ep-14f, 0.0f, 0x1.4043c8p-76f, 0.0f,
     0x1.ce9524p-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a393d6p-34f, 0.0f, 0.0f,
     0x1.71598ap-67f, 0.0f, 0x1.e41448p-116f, 0x1.d3b0a2p-75f, 0.0f, 0x1p0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b89c76p-24f, 0.0f, 0x1.3f0b88p-34f, 0.0f, 0.0f,
     0x1.ca0e78p-56f, 0x1.1e66b8p-56f, 0.0f, 0x1.60528ep-5f, 0.0f, 0x1.7797b8p-96f,
     0x1.a0fcb8p-26f, 0x1.af96dep-53f, 0x1.000ca2p-17f, 0.0f, 0x1.6a9bcap-23f,
     0x1.bfc2c2p-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.97652cp-39f,
     0.0f, 0x1.505ab8p-91f, 0x1.88202ap-11f, 0x1.4f2de8p-23f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d8608cp-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5b1774p-4f,
     0x1.cee366p-100f, 0x1.f7a426p-108f, 0x1.360c1cp-88f, 0x1.22cf3p-79f, 0.0f
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
            tmp1 = Sleef_finz_cospif1_u05purecfma(tmp0);
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
    printf("Sleef_finz_cospif1_u05purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_cospif1_u05purecfma bench acc %a\n", global_bench_acc);
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
