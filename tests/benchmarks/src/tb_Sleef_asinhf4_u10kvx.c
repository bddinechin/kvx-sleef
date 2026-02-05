/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_asinhf4_u10kvx.c --function Sleef_asinhf4_u10kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 4 --function-input-vector-size 4 --bench \
 *     --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float4_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float4_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0.0f, 0x1.c3bbd8p-40f, 0x1.0a6082p-23f, 0x1.53e542p-101f, 0x1.e003acp-32f, 0.0f,
     0x1.02828ap-64f, 0.0f, 0.0f, 0.0f, 0x1.8fe7cep-12f, 0.0f, 0.0f, 0x1.5ee2ecp-93f,
     0x1.b9ef58p-52f, 0x1.88f1b6p-107f, 0x1.2e5c0ep-87f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.854298p-7f, 0.0f, 0x1.6379c6p-23f, 0.0f, 0x1.5ec45ep-45f, 0x1.8e0142p-108f,
     0.0f, 0x1.14553cp-4f, 0.0f, 0x1.9ba0d8p-105f, 0.0f, 0.0f, 0x1.141322p-10f, 0.0f,
     0.0f, 0.0f, 0x1.f05fbp-53f, 0.0f, 0x1.3c64f4p-32f, 0x1.13992ep-61f,
     0x1.07c76ep-26f, 0.0f, 0.0f, 0.0f, 0x1.5314eep-4f, 0x1.195dd8p-123f,
     0x1.f38fb4p-123f, 0.0f, 0x1.628266p-94f, 0x1.c26a76p-32f, 0.0f, 0.0f,
     0x1.931bbep-17f, 0x1.e63002p-8f, 0x1.287e7cp-20f, 0x1.3b977ep-72f, 0.0f,
     0x1.71bb8ep-36f, 0.0f, 0.0f, 0x1p0f, 0x1.ca4916p-81f, 0.0f, 0x1.dedf2p-28f, 0.0f,
     0x1.f00f9cp-99f, 0.0f, 0.0f, 0.0f, 0x1.21ca4ap-90f, 0x1.1e5a34p-36f,
     0x1.49ba76p-37f, 0x1.ae4132p-17f, 0.0f, 0x1.61ffdcp-31f, 0x1.35ecap-1f,
     0x1.bfc35ap-80f, 0x1.bc4f64p-5f, 0.0f, 0x1.61a478p-12f, 0.0f, 0.0f,
     0x1.43065p-37f, 0.0f, 0.0f, 0x1.c9022ep-37f, 0.0f, 0x1.a0f6f4p-58f,
     0x1.db7648p-88f, 0.0f, 0x1.3679b8p-109f, 0x1.6ebddep-90f, 0.0f, 0.0f,
     0x1.f2f284p-75f, 0.0f, 0x1.a450eap-41f, 0x1.e7a016p-35f, 0.0f, 0.0f,
     0x1.4d8c1ep-12f, 0.0f, 0x1.a466c6p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2f23dp-77f,
     0.0f, 0.0f, 0.0f, 0x1.075c74p-90f, 0x1.d55e9ap-32f, 0.0f, 0x1.15adc2p-10f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.59e65ap-103f, 0.0f, 0x1.02f7dcp-25f, 0.0f, 0.0f,
     0x1.72326cp-119f, 0.0f, 0.0f, 0x1.c5de0ap-46f, 0x1.1f5bbep-105f, 0x1.a8373ep-89f,
     0.0f, 0x1.b9b648p-17f, 0x1.d4ed84p-51f, 0x1.7f2324p-65f, 0.0f, 0x1.3dea64p-66f,
     0x1.d9592p-35f, 0x1.0f1bfp-104f, 0x1.5ea102p-111f, 0.0f, 0x1.612e0ep-54f, 0.0f,
     0.0f, 0x1.86688ap-78f, 0x1.b4d3eep-53f, 0.0f, 0.0f, 0x1.a0018ep-16f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a4929ap-15f, 0.0f, 0.0f, 0x1.434292p-61f, 0x1.7d7e6ap-12f,
     0.0f, 0.0f, 0x1.d5687ep-47f, 0x1.388844p-77f, 0.0f, 0x1.322324p-6f, 0.0f, 0.0f,
     0.0f, 0x1.870a12p-100f, 0x1.89fe7cp-45f, 0x1.50e8c8p-103f, 0x1.2994d2p-60f, 0.0f,
     0.0f, 0x1.9d28fcp-68f, 0.0f, 0x1.ad3p-4f, 0.0f, 0x1.8bfd8ep-36f, 0x1.e8cb96p-79f,
     0.0f, 0x1.f6f8e6p-99f, 0x1.7c3bc2p-43f, 0x1.084a0cp-26f, 0x1.c5dbd2p-57f, 0.0f,
     0x1.3512ecp-24f, 0.0f, 0x1.edefcp-98f, 0.0f, 0.0f, 0.0f, 0x1.20a1a8p-81f, 0.0f,
     0x1.f9c58p-108f, 0x1.9b852p-126f, 0.0f, 0x1.51f2ccp-46f, 0x1.e003aap-6f, 0.0f,
     0x1.994d04p-18f, 0.0f, 0x1.707252p-26f, 0x1.740526p-30f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e4202cp-73f, 0x1.55ebe8p-100f, 0.0f, 0x1.850c86p-102f,
     0.0f, 0x1.b4230ep-90f, 0.0f, 0x1.aac6bp-46f, 0.0f, 0.0f, 0x1.0c83f2p-11f, 0.0f,
     0x1.e927a4p-53f, 0x1.bb9916p-53f, 0.0f, 0x1.7c8788p-104f, 0.0f, 0x1.c6054ep-24f,
     0x1.0f4f4ap-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.85dbf6p-109f, 0.0f, 0.0f,
     0.0f, 0x1.ec7b48p-113f, 0.0f, 0.0f, 0.0f, 0x1.ce7e44p-37f, 0.0f, 0x1.7a0f4ep-6f,
     0x1.fa9898p-26f, 0x1.ec1638p-38f, 0x1.6e9e78p-105f, 0x1.135006p-53f,
     0x1.90dd8ap-53f, 0x1.cb9d72p-118f, 0x1.3bacaep-106f, 0x1.77bec8p-123f, 0.0f,
     0x1.83fc24p-104f, 0.0f, 0x1.7ceabcp-35f, 0.0f, 0x1.da2894p-100f, 0.0f,
     0x1.a0e182p-45f, 0.0f, 0.0f, 0x1.fdfde2p-18f, 0.0f, 0.0f, 0x1.3b889cp-28f, 0.0f,
     0x1.ac5e38p-121f, 0x1.43ee42p-21f, 0.0f, 0.0f, 0x1.2a462p-116f, 0x1.cc66cp-83f,
     0x1.2a8cd8p-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.137f26p-71f, 0.0f, 0x1.e7f21p-105f,
     0.0f, 0.0f, 0x1.7041bp-99f, 0.0f, 0.0f, 0.0f, 0x1.b4b2b6p-109f, 0.0f, 0.0f,
     0x1.4c6ffp-84f, 0x1.3879cap-109f, 0x1.d4499p-45f, 0x1.73c62ap-96f,
     0x1.99c1aep-31f, 0x1.d0e532p-102f, 0.0f, 0x1.131d9ap-55f, 0.0f, 0.0f,
     0x1.8a7184p-45f, 0x1.34dba6p-114f, 0x1.249cfep-89f, 0.0f, 0x1.ed4bf6p-73f, 0.0f,
     0.0f, 0x1.fac884p-67f, 0x1.795a28p-78f, 0.0f, 0x1.c15b7p-74f, 0.0f,
     0x1.08a47p-115f, 0x1.259ca4p-9f, 0.0f, 0.0f, 0x1.95fd5cp-124f, 0x1.1ba4e6p-109f,
     0.0f, 0.0f, 0x1.29f382p-111f, 0x1.09be5ap-2f, 0.0f, 0x1.442b3ap-3f,
     0x1.d44c7ep-40f, 0x1.63976cp-28f, 0x1.5a6744p-11f, 0.0f, 0x1.365496p-125f, 0.0f,
     0.0f, 0x1.18e914p-46f, 0.0f, 0x1.7e392ep-119f, 0x1.7b9fa4p-93f, 0x1.1b6b64p-53f,
     0.0f, 0x1.d08bap-64f, 0.0f, 0x1.9ac434p-90f, 0.0f, 0.0f, 0.0f, 0x1.9eee9p-100f,
     0x1.e106acp-38f, 0x1.434b3cp-41f, 0.0f, 0.0f, 0.0f, 0x1.38477ep-101f, 0.0f, 0.0f,
     0x1.be6a6ap-42f, 0.0f, 0.0f, 0x1.ceb442p-125f, 0x1.523706p-34f, 0.0f, 0.0f, 0.0f,
     0x1.10f64p-90f, 0.0f, 0x1.b01ceep-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bf834ep-98f, 0x1.43d556p-26f, 0.0f, 0.0f, 0x1.7eb126p-62f, 0.0f,
     0x1.eb62bcp-59f, 0x1.4b5c86p-50f, 0.0f, 0x1.caeb38p-7f, 0.0f, 0x1.f5f5ccp-73f,
     0x1.848b5cp-93f, 0x1.2cb4e4p-88f, 0.0f, 0x1.a83ed6p-64f, 0.0f, 0.0f,
     0x1.4aa2b8p-8f, 0.0f, 0x1.5423fap-92f, 0x1.7eeab8p-11f, 0x1.50dc3ep-31f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.124672p-109f, 0.0f,
     0x1.c82904p-107f, 0.0f, 0.0f, 0.0f, 0x1.2c266ep-50f, 0.0f, 0x1.cb314cp-38f,
     0x1.c736b2p-76f, 0x1.b95932p-82f, 0.0f, 0.0f, 0x1.81734ep-68f, 0x1.769644p-6f,
     0.0f, 0x1.b7e6d8p-50f, 0.0f, 0.0f, 0.0f, 0x1.40390ap-125f, 0x1.066e38p-22f,
     0x1.13a2fcp-28f, 0.0f, 0x1.72847ap-57f, 0x1.081c38p-10f, 0.0f, 0.0f,
     0x1.c19334p-77f, 0x1.4febf8p-63f, 0x1.a834ep-56f, 0.0f, 0.0f, 0x1.0f4536p-18f,
     0x1.71e31cp-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b9308cp-108f,
     0x1.80adb6p-51f, 0.0f, 0x1.0f8e8ap-11f, 0.0f, 0x1.90017ap-93f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.387c64p-34f, 0x1.2ee816p-40f, 0.0f,
     0x1.828c88p-13f, 0x1.6f1d16p-51f, 0.0f, 0x1.9d2eeap-123f, 0.0f, 0x1.299bbap-36f,
     0x1.5ba016p-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3ca45p-98f, 0x1.f74d96p-34f,
     0x1.d6524ap-39f, 0x1.ec1a1ap-82f, 0.0f, 0x1.6dffeep-43f, 0.0f, 0x1.5e322cp-126f,
     0.0f, 0.0f, 0x1.a4bab8p-119f, 0x1.2cc57p-49f, 0.0f, 0.0f, 0x1.57e238p-44f, 0.0f,
     0x1.fd7ce6p-18f, 0x1.78b138p-37f, 0.0f, 0.0f, 0x1.98dc3p-5f, 0x1.ed654ep-96f,
     0.0f, 0x1.7c367p-11f, 0.0f, 0x1.0e437p-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.511d02p-108f, 0x1.0e8e7ep-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7afc18p-102f,
     0.0f, 0x1.d5bd1ep-62f, 0.0f, 0x1p0f, 0x1.13c946p-23f, 0x1.09e93p-54f, 0.0f,
     0x1.fa5b5ep-46f, 0.0f, 0.0f, 0x1.e2b04ep-27f, 0x1.46875ep-95f, 0x1.21d0a2p-88f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.499bfcp-112f,
     0x1.48216ep-87f, 0x1.7721acp-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.08fc3ep-112f, 0.0f,
     0.0f, 0.0f, 0x1.98f434p-88f, 0.0f, 0x1.25589p-100f, 0.0f, 0.0f, 0x1.d4badap-98f,
     0x1.a12974p-40f, 0.0f, 0.0f, 0x1.0ae4bp-37f, 0x1.0ee088p-102f, 0x1.02c926p-99f,
     0x1.0d2142p-55f, 0.0f, 0.0f, 0.0f, 0x1.8d3054p-16f, 0x1.c7460cp-59f, 0.0f, 0.0f,
     0x1.2902dcp-24f, 0.0f, 0x1.9138c2p-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b2015ap-15f,
     0x1.7eda1p-116f, 0x1.7e095ep-112f, 0x1.a8be4p-45f, 0.0f, 0x1.ce603ap-19f,
     0x1.aeb2e6p-2f, 0.0f, 0.0f, 0.0f, 0x1.59ac46p-125f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.04775ep-84f, 0.0f, 0x1.a0f696p-5f, 0x1.d5d502p-87f, 0x1.f0eaaap-62f, 0.0f,
     0.0f, 0x1.3fcf6ep-51f, 0x1.2f4f5ap-122f, 0x1.895406p-23f, 0.0f, 0.0f, 0.0f,
     0x1.ef21e8p-50f, 0x1p0f, 0.0f, 0x1.3d3194p-56f, 0x1.0ffb84p-29f, 0x1.d092f8p-77f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4b4524p-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4c8316p-74f, 0x1.a04276p-40f,
     0x1.691978p-39f, 0.0f, 0.0f, 0.0f, 0x1.b717b6p-114f, 0.0f, 0.0f, 0x1.12cb1p-4f,
     0.0f, 0.0f, 0x1.837472p-56f, 0x1.ad935ep-39f, 0.0f, 0x1.8d28d2p-61f, 0.0f,
     0x1.1da81cp-21f, 0x1.6faba8p-89f, 0.0f, 0x1.e5d67cp-36f, 0x1.ddb2bep-47f, 0.0f,
     0x1.6a24a4p-65f, 0.0f, 0.0f, 0.0f, 0x1.3f553ep-85f, 0x1.b9c62ep-73f,
     0x1.4ca7fp-8f, 0x1.417a7ap-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ed3622p-105f, 0x1.325d32p-16f, 0x1.1581b4p-15f, 0x1.8f199p-96f, 0.0f,
     0x1.9208d2p-14f, 0x1.3c17dcp-100f, 0x1.b04816p-98f, 0x1.2240eep-5f,
     0x1.e94b58p-110f, 0x1.33106ap-114f, 0x1.66babp-95f, 0.0f, 0.0f, 0.0f,
     0x1.646ab2p-71f, 0x1.ee10e8p-40f, 0x1.c7581ep-88f, 0.0f, 0x1.8aa1bep-4f, 0.0f,
     0x1.b7f7eep-120f, 0x1.8689fap-96f, 0x1.215654p-6f, 0.0f, 0.0f, 0.0f,
     0x1.0c5c9cp-28f, 0x1.d6469ap-68f, 0x1.7c638cp-55f, 0x1.d76776p-2f,
     0x1.7f217p-109f, 0.0f, 0x1.c458d4p-31f, 0.0f, 0.0f, 0x1.71c304p-61f,
     0x1.61bc9ap-88f, 0x1.9f4ebcp-5f, 0x1.e4531ap-85f, 0.0f, 0.0f, 0x1.5ecd38p-84f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.1209fap-15f, 0.0f, 0x1.bee54p-40f, 0x1.ac5eaep-46f,
     0x1.589c08p-92f, 0.0f, 0.0f, 0.0f, 0x1.1d3412p-49f, 0.0f, 0x1.a90882p-78f,
     0x1.19c11cp-83f, 0.0f, 0.0f, 0x1.c06cdp-41f, 0x1.c83252p-56f, 0.0f,
     0x1.a465b4p-37f, 0.0f, 0.0f, 0x1.346c2ap-21f, 0x1.ac6008p-7f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.bfe506p-46f, 0.0f, 0.0f, 0x1.f55e18p-2f, 0.0f, 0x1.36caf6p-93f,
     0x1.ee9fc6p-96f, 0.0f, 0.0f, 0x1.065af8p-117f, 0x1.2d949cp-123f, 0.0f,
     0x1.e77aeep-113f, 0x1.ddb494p-86f, 0x1.2cd9dp-81f, 0.0f, 0.0f, 0x1.d8e9ccp-83f,
     0.0f, 0.0f, 0x1.c03beap-108f, 0x1.d432f8p-64f, 0.0f, 0x1.fca3dp-116f,
     0x1.23c92ap-69f, 0x1.6b2a5p-119f, 0x1.bd451p-33f, 0x1.983942p-105f, 0.0f,
     0x1.7c19b2p-97f, 0x1.591c3ep-61f, 0.0f, 0.0f, 0x1.bbffa2p-126f, 0.0f,
     0x1.d9f61ep-120f, 0x1.aee898p-102f, 0.0f, 0.0f, 0.0f, 0x1.d3517ep-28f,
     0x1.17c63ap-51f, 0.0f, 0.0f, 0x1.499986p-112f, 0x1.c21496p-9f, 0x1.772762p-102f,
     0x1.604436p-88f, 0.0f, 0.0f, 0.0f, 0x1.fc1738p-25f, 0x1.29ecaap-46f, 0.0f, 0.0f,
     0x1.b44e54p-66f, 0x1.35d1c4p-97f, 0.0f, 0x1.e1c14cp-112f, 0x1.9f132cp-16f,
     0x1.26a242p-80f, 0.0f, 0x1.c5c1d6p-87f, 0x1.6009cap-98f, 0x1.37e4cep-6f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.811b64p-110f, 0x1.794bc8p-125f, 0.0f, 0x1.118cb4p-2f,
     0x1.fabf88p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a3429p-69f, 0x1.96cf14p-126f,
     0x1.01ddb2p-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a9230ap-82f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.779edap-106f, 0.0f, 0.0f, 0x1.5cdb8ep-45f, 0.0f, 0.0f,
     0.0f, 0x1.dde44ep-1f, 0.0f, 0x1.02704ep-121f, 0.0f, 0x1.5606fap-113f, 0.0f, 0.0f,
     0.0f, 0x1.d619f2p-70f, 0.0f, 0x1.00797ap-95f, 0x1.75e312p-6f, 0.0f,
     0x1.8d5f7p-80f, 0x1.7a52dap-33f, 0x1.40472cp-67f, 0x1.9a9faep-9f,
     0x1.5d17fp-117f, 0x1.15ac9ep-87f, 0x1.f591e2p-30f, 0x1.66f2fap-113f,
     0x1.d67456p-11f, 0.0f, 0.0f, 0x1.9cad9p-102f, 0x1.c5422cp-20f, 0x1.693eb8p-41f,
     0.0f, 0x1.18cf3p-120f, 0x1.6a13ecp-17f, 0x1.fd878ep-90f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f1e8ccp-85f, 0.0f, 0.0f, 0x1.ab6416p-39f, 0x1.018054p-60f,
     0x1.bdf62ep-14f, 0x1.5c2378p-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8b553cp-29f, 0.0f,
     0.0f, 0x1.6372e2p-28f, 0.0f, 0x1.29475p-94f, 0.0f, 0x1.c51dfep-92f, 0.0f,
     0x1.781ddap-52f, 0.0f, 0.0f, 0.0f, 0x1.31634ap-125f, 0x1.50bba8p-66f,
     0x1.abec6ep-59f, 0.0f, 0.0f, 0x1.e254b8p-26f, 0.0f, 0.0f, 0.0f, 0x1.8ecfdep-88f,
     0x1.db451ep-119f, 0.0f, 0x1.815b08p-85f, 0x1.10152ap-109f, 0.0f, 0.0f,
     0x1.307f76p-104f, 0.0f, 0.0f, 0x1.6917aap-98f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.31aedap-90f, 0.0f, 0.0f, 0x1.c9dfcap-104f, 0.0f, 0x1.f9e90ap-9f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.37e0f6p-14f, 0.0f, 0x1.a00fdcp-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.79d186p-27f, 0x1.38e388p-93f, 0.0f, 0x1.7fde74p-84f, 0.0f,
     0.0f, 0x1.6198ep-27f, 0.0f, 0.0f, 0x1.d7e85ap-86f, 0.0f, 0.0f, 0.0f,
     0x1.4a86e6p-78f, 0x1.9f29cp-103f, 0x1.e9d754p-113f, 0x1.7ed05cp-7f, 0.0f,
     0x1.daff52p-70f, 0x1.768a6ap-121f, 0x1.c27b2cp-19f, 0x1.34050ap-54f,
     0x1.cc663cp-58f, 0.0f, 0x1.0217b8p-77f, 0.0f, 0.0f, 0.0f, 0x1.221f2ep-66f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.065f7cp-81f, 0.0f, 0x1.961952p-62f, 0.0f,
     0x1.168d98p-70f, 0x1.bb4d58p-88f, 0.0f, 0.0f, 0x1.d60b02p-29f, 0x1.0af5b4p-44f,
     0.0f, 0x1.13eef8p-56f, 0.0f, 0x1.78d0ep-20f, 0x1.02e0b2p-58f, 0.0f,
     0x1.2c6e98p-123f, 0.0f, 0x1.ec2cap-61f, 0.0f, 0x1.b36fdap-91f, 0.0f, 0.0f,
     0x1.f4e224p-13f, 0.0f, 0x1.eff82cp-108f, 0x1.52f90ap-36f, 0.0f, 0x1.4b60eep-114f
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
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = external_bench_wrapper_cst;
    tmp = __cos_counter_num(0);
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
            tmp1 = Sleef_asinhf4_u10kvx(tmp0);
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
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_asinhf4_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_asinhf4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
