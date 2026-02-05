/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_cosf4_u35avx2128.c --function Sleef_finz_cosf4_u35avx2128 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 4 --function-input-vector-size 4 --bench \
 *     --no-embedded-bin --target x86_avx2128
 * 
**/
#include <stdint.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float4_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float4_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0x1.b1423cp-4f, 0x1.d6a2bap-18f, 0.0f, 0x1.cf8042p-104f, 0x1.be4bbap-12f, 0.0f,
     0.0f, 0x1.77a212p-23f, 0x1.b59b52p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b2f914p-125f, 0.0f, 0.0f, 0.0f, 0x1.83ce34p-50f, 0x1.1a4bbap-18f,
     0x1.c0a504p-63f, 0x1.29b248p-99f, 0x1.127e82p-14f, 0.0f, 0.0f, 0x1.50eb8ap-50f,
     0x1.2ab9b2p-75f, 0.0f, 0x1.a62ca2p-67f, 0x1.0a4b2ap-62f, 0.0f, 0.0f,
     0x1.8131aap-45f, 0x1.4400aap-114f, 0x1.e8eb28p-105f, 0.0f, 0.0f, 0x1.2e35dp-75f,
     0.0f, 0x1.f2c60cp-103f, 0x1.932d0ap-34f, 0.0f, 0x1.ac001ep-48f, 0.0f,
     0x1.b71ed8p-87f, 0x1.a853a2p-97f, 0x1.2dd8e6p-106f, 0.0f, 0.0f, 0.0f,
     0x1.e6c706p-65f, 0.0f, 0x1.5826fap-5f, 0x1.97f0b8p-19f, 0x1.355286p-122f, 0.0f,
     0x1.78d968p-120f, 0x1.d4bb84p-52f, 0x1.ff2666p-36f, 0x1.a66f7ap-2f, 0.0f, 0.0f,
     0x1.db98d8p-34f, 0x1.4aba66p-113f, 0x1.259da6p-42f, 0.0f, 0x1.e87054p-3f,
     0x1.4dc5e6p-84f, 0.0f, 0x1.ac245ap-124f, 0.0f, 0x1.96895ep-22f, 0.0f,
     0x1.6fe354p-84f, 0.0f, 0.0f, 0x1.f3fc94p-30f, 0x1.08c85p-109f, 0x1.3c93aep-101f,
     0x1.7e0be6p-77f, 0x1.dc118ap-116f, 0.0f, 0.0f, 0x1.87a0b8p-116f, 0x1.57cde2p-1f,
     0x1.b7accp-6f, 0x1.08d04p-14f, 0x1.5330e2p-58f, 0x1.627454p-104f, 0x1.04470cp-6f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b97e9p-77f, 0x1.957d3p-9f, 0.0f,
     0x1.ec84b2p-47f, 0.0f, 0x1.b2755ep-63f, 0x1.2657a2p-86f, 0.0f, 0x1.7d0b9cp-118f,
     0.0f, 0.0f, 0x1.c9ec1p-120f, 0x1.dd2ebp-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.26aab4p-56f, 0x1.1b7a6cp-119f, 0.0f, 0.0f, 0.0f, 0x1.1f8084p-98f, 0.0f,
     0x1.bb0eb2p-75f, 0x1.782abp-4f, 0x1.711a6p-117f, 0x1.775a6p-102f, 0.0f, 0.0f,
     0x1.42113p-79f, 0.0f, 0.0f, 0x1.ce368ap-111f, 0.0f, 0x1.c5375ap-38f, 0.0f,
     0x1.6f2b38p-77f, 0x1.e7e57p-111f, 0x1.87a93ap-45f, 0x1.0039d2p-114f,
     0x1.504016p-104f, 0x1.a01d06p-16f, 0.0f, 0x1.0bf15p-124f, 0.0f, 0x1.cb4614p-21f,
     0x1.edea6ep-50f, 0.0f, 0x1.581e6ap-26f, 0x1.ed25fp-7f, 0.0f, 0.0f, 0.0f,
     0x1.f2a34ap-119f, 0x1.aa59bcp-56f, 0x1.6ccab4p-76f, 0x1.6491c8p-11f, 0.0f, 0.0f,
     0.0f, 0x1.439752p-33f, 0.0f, 0.0f, 0.0f, 0x1.582612p-7f, 0.0f, 0.0f,
     0x1.d3a806p-115f, 0.0f, 0x1.85d6b8p-96f, 0.0f, 0x1.03f4p-12f, 0x1.f7cef2p-27f,
     0x1.169acap-36f, 0.0f, 0x1.302f7ep-9f, 0x1.edcd42p-40f, 0x1.d9c5dep-95f,
     0x1.b2b306p-60f, 0.0f, 0x1.755156p-118f, 0x1.c1c494p-73f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.669b6p-126f, 0.0f, 0x1.2adc3ep-58f, 0.0f, 0x1.717838p-112f, 0.0f,
     0.0f, 0.0f, 0x1.7cf5ap-37f, 0x1.e54cfcp-58f, 0.0f, 0.0f, 0.0f, 0x1.d07f32p-47f,
     0.0f, 0x1.0f2552p-62f, 0.0f, 0x1.c479aap-23f, 0x1.19aab8p-63f, 0.0f, 0.0f,
     0x1.556112p-31f, 0x1.19b2dap-27f, 0.0f, 0x1.3d7bb6p-24f, 0.0f, 0.0f,
     0x1.ed3234p-48f, 0.0f, 0x1.8dd14p-126f, 0.0f, 0x1.f51c4p-77f, 0x1.f43d26p-25f,
     0.0f, 0x1.28af8cp-32f, 0.0f, 0.0f, 0x1.fa04d6p-106f, 0x1.ffcf3ep-17f, 0.0f,
     0x1.84dca2p-30f, 0x1.18297p-22f, 0x1.a37db4p-63f, 0x1.acfa9cp-13f, 0.0f, 0.0f,
     0x1.3fe0c6p-93f, 0x1.2ae752p-23f, 0x1.cb93b2p-99f, 0x1.34f1fp-24f,
     0x1.df2a84p-85f, 0x1p0f, 0.0f, 0x1.12e09cp-113f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.532598p-8f, 0.0f, 0.0f, 0x1.ca48acp-47f, 0x1.3e95b8p-62f, 0.0f,
     0x1.b4c9eep-59f, 0.0f, 0x1.7f9934p-34f, 0x1.15a48p-18f, 0.0f, 0.0f,
     0x1.916c8cp-57f, 0x1.9784ep-27f, 0x1.3374d2p-109f, 0.0f, 0x1.c3855cp-26f,
     0x1.3537a8p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1ba668p-77f, 0.0f,
     0x1.465cfep-47f, 0.0f, 0.0f, 0x1.a8719ap-41f, 0x1.b8bca6p-4f, 0x1.11bc88p-92f,
     0.0f, 0.0f, 0x1.e1cbbap-9f, 0x1.33221cp-38f, 0x1.5af08p-53f, 0x1.fd0f2p-51f,
     0x1.a1df78p-126f, 0x1.270834p-122f, 0.0f, 0x1.0c482ap-23f, 0.0f, 0x1.ea7b08p-96f,
     0.0f, 0x1.127684p-55f, 0x1.db3f6cp-26f, 0x1.df61fp-72f, 0.0f, 0x1.57256ap-42f,
     0x1.27698p-70f, 0.0f, 0x1.9c3522p-33f, 0.0f, 0x1.9f09bep-83f, 0x1.fbafd2p-87f,
     0.0f, 0.0f, 0x1.a7b2c2p-51f, 0.0f, 0.0f, 0.0f, 0x1.e9fdc6p-68f, 0x1.2f5ba6p-114f,
     0x1.b8c862p-67f, 0x1.8a3e8ep-37f, 0x1.7b20ep-121f, 0.0f, 0.0f, 0x1.8535bep-67f,
     0.0f, 0.0f, 0x1.20351cp-25f, 0.0f, 0x1.1f7dc2p-34f, 0x1.438a8p-108f,
     0x1.3934a4p-76f, 0.0f, 0x1.171912p-9f, 0.0f, 0x1.bd798cp-68f, 0x1.7c48e6p-40f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.708c8cp-7f, 0x1.a02204p-23f, 0.0f,
     0.0f, 0.0f, 0x1.b906aap-21f, 0.0f, 0x1.cae11p-67f, 0x1.b99db8p-114f,
     0x1.b50e48p-7f, 0.0f, 0x1.b43026p-57f, 0.0f, 0x1.539f6ep-102f, 0x1.d14a34p-66f,
     0x1p0f, 0x1.ec0ce2p-69f, 0.0f, 0x1.348b7p-82f, 0.0f, 0x1.e3c63ep-77f,
     0x1.a68892p-21f, 0x1.c80af8p-57f, 0x1.056ba6p-27f, 0x1.6fc21p-44f, 0.0f,
     0x1.2f0cacp-54f, 0.0f, 0x1.9cbd7ap-76f, 0x1.e45524p-20f, 0x1.80ee8ep-82f, 0.0f,
     0x1.30210cp-119f, 0x1p0f, 0x1.19d5bcp-21f, 0x1.46ff7ap-88f, 0x1.f066dap-3f,
     0x1.a9d8d2p-82f, 0x1.cc1442p-88f, 0x1.18d102p-56f, 0.0f, 0x1.7f06ccp-125f, 0.0f,
     0x1.d4072p-49f, 0.0f, 0x1.fa4c4p-72f, 0.0f, 0.0f, 0x1.2519b4p-83f,
     0x1.bf1f92p-100f, 0x1.db2476p-96f, 0.0f, 0.0f, 0x1.3f3ff6p-78f, 0.0f, 0.0f,
     0x1.2a9cbap-37f, 0x1.142834p-20f, 0x1.a13b56p-64f, 0x1.cb6588p-123f,
     0x1.cc9c12p-108f, 0.0f, 0x1.78073p-72f, 0x1.e359eap-31f, 0.0f, 0x1.364072p-109f,
     0x1.ec4e7ep-36f, 0.0f, 0x1.0342a4p-46f, 0x1.37687cp-35f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.db202ep-46f, 0.0f, 0.0f, 0x1.65dfa8p-37f, 0.0f, 0.0f,
     0x1.960d7ep-50f, 0x1.53dea8p-41f, 0.0f, 0x1.43deap-51f, 0.0f, 0x1.be9e94p-46f,
     0.0f, 0x1.33d8b4p-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.beb38ep-98f, 0x1.b66e44p-114f,
     0x1.b2be0cp-101f, 0x1.b2aa6cp-75f, 0.0f, 0.0f, 0.0f, 0x1.0d83dcp-115f, 0.0f,
     0.0f, 0x1.8fa0f4p-110f, 0.0f, 0x1.7ea9d4p-44f, 0.0f, 0x1.5f5db6p-44f, 0.0f, 0.0f,
     0x1.386aeep-78f, 0x1.d33a9ep-76f, 0.0f, 0.0f, 0x1.650c52p-90f, 0x1.169f6ep-23f,
     0x1.c8a232p-54f, 0.0f, 0x1.05b272p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1e712ap-93f,
     0.0f, 0x1.789c36p-21f, 0x1.f3a4e6p-76f, 0.0f, 0x1.07bdb8p-64f, 0.0f, 0.0f, 0.0f,
     0x1.a72d6ep-96f, 0x1.09cf4p-24f, 0x1.a22964p-83f, 0.0f, 0.0f, 0.0f,
     0x1.ebd522p-26f, 0x1.f6f8fp-48f, 0x1.7d054cp-31f, 0.0f, 0x1.4b4848p-69f, 0.0f,
     0x1.630b0cp-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4514fcp-118f, 0x1.55a04cp-3f, 0.0f,
     0x1.1acf8ep-44f, 0x1.a619a4p-1f, 0.0f, 0x1.c8897ap-98f, 0x1.39ed1cp-66f, 0.0f,
     0x1.2d459ep-24f, 0x1.be760cp-20f, 0.0f, 0.0f, 0x1.2cd10ap-59f, 0.0f, 0.0f,
     0x1.da8868p-5f, 0x1.8f93c2p-63f, 0.0f, 0.0f, 0x1.d9ad0ep-103f, 0x1.c32306p-51f,
     0x1.8069d2p-115f, 0x1.eee796p-55f, 0.0f, 0.0f, 0.0f, 0x1.00a018p-64f, 0.0f, 0.0f,
     0.0f, 0x1.fb78f6p-46f, 0.0f, 0x1.3acb9ep-75f, 0.0f, 0x1.23c934p-47f,
     0x1.0b4e64p-2f, 0.0f, 0x1.55cafcp-12f, 0x1.58dd56p-96f, 0.0f, 0.0f,
     0x1.ddec1ap-100f, 0x1.210ba8p-53f, 0x1.2845dcp-91f, 0.0f, 0x1.e6da62p-64f,
     0x1.80dd16p-88f, 0.0f, 0x1.d03a22p-12f, 0x1.53401ep-45f, 0x1.ed5e8p-14f,
     0x1.334a08p-118f, 0x1.df05dp-126f, 0.0f, 0.0f, 0.0f, 0x1.89034p-45f,
     0x1.85bc76p-36f, 0.0f, 0.0f, 0.0f, 0x1.80d278p-107f, 0x1.bb3b92p-119f,
     0x1.ce37f8p-20f, 0x1.a9460ep-58f, 0x1.6240d6p-40f, 0x1.b2d7dcp-37f, 0.0f,
     0x1.d01532p-1f, 0x1.d71d84p-70f, 0x1.bea476p-36f, 0.0f, 0x1.b9275ep-91f,
     0x1.8c8ccep-7f, 0.0f, 0x1.c9af7cp-35f, 0.0f, 0.0f, 0x1.6c94e2p-47f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.9c6c1ep-55f, 0x1.b76e86p-46f, 0.0f, 0x1.d4fb2cp-95f, 0.0f,
     0x1.339738p-49f, 0x1.6dc524p-68f, 0x1.76df5ap-100f, 0x1.91a7a2p-22f,
     0x1.4b2334p-17f, 0x1.13d2cep-1f, 0.0f, 0x1.16c4d8p-82f, 0x1.f90204p-17f, 0.0f,
     0x1.f21446p-12f, 0x1.c157eap-36f, 0.0f, 0.0f, 0.0f, 0x1.d947c8p-101f,
     0x1.8ea86cp-77f, 0x1.48096cp-125f, 0.0f, 0x1.7b2c56p-109f, 0.0f, 0x1.cee93ep-25f,
     0.0f, 0.0f, 0.0f, 0x1.819802p-116f, 0.0f, 0.0f, 0x1.addcep-87f, 0x1.97d976p-19f,
     0x1.d71778p-32f, 0.0f, 0x1.aeec18p-12f, 0.0f, 0.0f, 0x1.b8ca6p-21f, 0.0f,
     0x1.417b54p-40f, 0x1.713db2p-123f, 0x1.97b02ep-81f, 0.0f, 0.0f, 0x1.6708p-49f,
     0.0f, 0x1.b15eb2p-30f, 0x1.5092d6p-57f, 0.0f, 0x1.578448p-48f, 0.0f, 0.0f,
     0x1.4cff38p-70f, 0x1.c629f8p-47f, 0.0f, 0x1.40f292p-67f, 0.0f, 0.0f, 0.0f,
     0x1.d40a2ep-24f, 0.0f, 0x1.9408c6p-121f, 0.0f, 0x1.1b4ae4p-41f, 0.0f,
     0x1.50d64cp-106f, 0.0f, 0x1.00c37ep-36f, 0x1.cffbf4p-19f, 0x1p0f,
     0x1.528e6ep-93f, 0x1.0f66ccp-123f, 0x1.dff732p-31f, 0x1.fab3b4p-13f,
     0x1.da29eap-118f, 0.0f, 0x1.66a1d6p-31f, 0x1.23973cp-46f, 0x1.b853p-1f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.eb9feap-44f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.412ad6p-124f, 0.0f, 0x1.ecc18ap-115f, 0.0f, 0x1.6f5bf2p-36f, 0x1.fd5304p-29f,
     0.0f, 0x1.e23618p-20f, 0.0f, 0.0f, 0.0f, 0x1.450222p-82f, 0x1.947162p-97f, 0.0f,
     0x1.bcf0ecp-18f, 0x1.323f9cp-93f, 0.0f, 0x1.c4c1aep-8f, 0.0f, 0x1.d31b24p-116f,
     0.0f, 0x1.6da32ap-118f, 0.0f, 0.0f, 0x1.515802p-117f, 0x1.badc3cp-57f, 0.0f,
     0.0f, 0x1.161af6p-35f, 0.0f, 0.0f, 0x1.4b6c0ep-77f, 0x1.599788p-79f,
     0x1.2fa96cp-115f, 0x1.9c764cp-57f, 0.0f, 0x1.aa71a4p-106f, 0x1.b6e3a4p-88f,
     0x1p0f, 0.0f, 0x1.7d0eaap-116f, 0.0f, 0x1.e19faep-58f, 0.0f, 0.0f,
     0x1.19567cp-77f, 0x1.f2d97ap-124f, 0x1.1f3cd4p-9f, 0x1.eaa29ep-30f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.cc603cp-14f, 0.0f, 0x1.cf5b7ap-86f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.dbb578p-43f, 0x1.480994p-100f, 0x1.fc43bp-74f, 0.0f, 0x1.f779c4p-102f, 0.0f,
     0x1.49da1cp-21f, 0.0f, 0x1.0c3c12p-96f, 0.0f, 0.0f, 0x1.8cc478p-24f,
     0x1.36333p-46f, 0x1.cddb4p-45f, 0.0f, 0x1.c2a788p-51f, 0.0f, 0x1.3cd6ecp-71f,
     0.0f, 0x1.15aa16p-55f, 0.0f, 0.0f, 0.0f, 0x1.5b58ecp-40f, 0.0f, 0.0f,
     0x1.8dd5b2p-78f, 0.0f, 0x1.cf5cf6p-38f, 0x1.e3c6b8p-41f, 0.0f, 0x1.840d8p-48f,
     0x1.98db02p-18f, 0x1.e976ep-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0a1386p-9f,
     0x1.c4e0cep-106f, 0.0f, 0.0f, 0.0f, 0x1.7c08fcp-33f, 0x1.e5c8bap-56f,
     0x1.7d7e52p-110f, 0x1.7a3f26p-124f, 0.0f, 0x1.40c5dp-83f, 0x1.f8748cp-108f,
     0x1.a0ea78p-120f, 0x1.94e8fap-51f, 0.0f, 0x1.a9bb98p-73f, 0x1.029ad4p-87f, 0.0f,
     0x1.aed434p-9f, 0x1.3942cep-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9765a6p-26f,
     0x1.da63fap-42f, 0.0f, 0x1.b7d212p-17f, 0x1.586544p-65f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6a002cp-89f, 0.0f, 0x1.2a41e4p-25f, 0x1.75841p-93f, 0x1.37e542p-81f,
     0x1.8c99fep-65f, 0.0f, 0x1.ad5606p-50f, 0x1.19919p-63f, 0x1.e0c0bcp-106f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.be9902p-91f, 0.0f, 0x1.8ca9fep-9f, 0.0f,
     0x1.277ba6p-16f, 0.0f, 0x1.8c91d4p-33f, 0.0f, 0x1.af18d2p-75f, 0.0f,
     0x1.01b244p-18f, 0.0f, 0.0f, 0x1.bdd05ep-53f, 0x1.6e94d6p-86f, 0x1.805e76p-56f,
     0x1.159efep-58f, 0x1.ae6928p-17f, 0x1.72f698p-6f, 0x1.eda6bap-39f,
     0x1.bf895p-93f, 0x1.bbf6aap-126f, 0x1.4b3eaap-10f, 0.0f, 0x1.5fb7e2p-13f, 0.0f,
     0x1.323a5ap-26f, 0.0f, 0x1.fa98d4p-5f, 0.0f, 0x1.ec3676p-19f, 0.0f, 0.0f,
     0x1.65b79cp-87f, 0.0f, 0.0f, 0x1.22e272p-72f, 0.0f, 0x1.c486d4p-46f, 0.0f,
     0x1.d8cebap-28f, 0.0f, 0x1.c8cd36p-118f, 0x1.c64d9ep-89f, 0.0f, 0.0f,
     0x1.14cd5cp-89f, 0x1.ffe054p-105f, 0x1.8089dcp-115f, 0.0f, 0x1.05793ep-108f,
     0.0f, 0.0f, 0x1.e291b4p-48f, 0x1.35a3p-9f, 0.0f, 0.0f, 0x1.692872p-100f,
     0x1.a927ccp-29f, 0x1p0f, 0.0f, 0x1.e1786p-7f, 0x1.bd89aap-20f, 0.0f,
     0x1.a6a486p-5f, 0.0f, 0x1.016bcp-8f, 0x1.166dp-108f, 0x1.b82accp-99f,
     0x1.558fc6p-83f, 0.0f, 0x1.8a91fep-113f, 0x1.7f998p-57f, 0x1.3bbdaap-14f, 0.0f,
     0x1.d3049p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.55057ap-72f, 0x1.c5f026p-91f,
     0x1.2b9cbep-11f, 0x1.4aac0cp-25f, 0.0f, 0.0f, 0.0f, 0x1.5d27fep-51f,
     0x1.aec3fap-115f, 0.0f, 0x1.ccf76cp-8f, 0.0f, 0x1.b5f8c4p-31f, 0x1.308194p-8f,
     0.0f, 0x1.59dd3cp-82f, 0.0f, 0x1.487322p-94f, 0.0f, 0.0f, 0x1.b46df8p-16f,
     0x1.bc6802p-87f, 0.0f, 0.0f, 0.0f, 0x1.24dc14p-92f, 0.0f, 0x1.95e5d4p-78f, 0.0f,
     0.0f, 0x1.f006fcp-125f, 0x1.b86de6p-84f, 0.0f, 0x1.d3a524p-23f, 0.0f,
     0x1.48debep-103f, 0x1.e65b9p-98f, 0x1.f32d8ap-123f, 0x1.cf210ap-31f,
     0x1.16818ap-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c286dcp-19f, 0.0f, 0.0f, 0.0f,
     0x1.54dc98p-107f, 0.0f, 0x1.988672p-110f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8b9c38p-90f, 0x1.858beep-47f, 0x1.7a83cp-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f4589ap-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ac3da6p-110f, 0x1.4270ecp-104f, 0.0f,
     0.0f, 0x1.c6c798p-64f, 0x1.aba52ep-52f, 0x1.12520ep-92f, 0.0f, 0.0f,
     0x1.ad7466p-38f, 0x1.672066p-99f, 0.0f, 0x1.a11178p-74f, 0x1.6c2b56p-104f, 0.0f,
     0x1.6aacd4p-37f, 0x1.1b2dc4p-53f, 0x1.4a355ap-79f, 0.0f, 0x1.b02524p-9f,
     0x1.0b1922p-83f, 0x1.36a868p-12f, 0x1.013cd6p-92f, 0.0f, 0x1.858eccp-95f, 0.0f,
     0x1.38f008p-31f, 0x1.a4bdbp-17f, 0.0f, 0.0f, 0x1.6390f6p-79f, 0x1.28a12p-27f,
     0x1.a3a3ccp-1f, 0x1.b60122p-122f, 0x1.003d9ap-52f, 0x1.126312p-2f,
     0x1.0159e2p-11f, 0x1.1242fap-62f, 0x1.42e69cp-106f, 0x1.3dc946p-53f,
     0x1.cc6358p-55f, 0.0f, 0x1.e5262p-110f, 0.0f
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
    
    global_bench_acc = external_bench_wrapper_cst;
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
            tmp1 = Sleef_finz_cosf4_u35avx2128(tmp0);
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
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_finz_cosf4_u35avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_cosf4_u35avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
