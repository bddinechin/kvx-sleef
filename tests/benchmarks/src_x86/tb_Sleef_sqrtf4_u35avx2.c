/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sqrtf4_u35avx2128.c --function Sleef_sqrtf4_u35avx2128 \
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
     0.0f, 0.0f, 0.0f, 0x1.91d92cp-73f, 0.0f, 0.0f, 0.0f, 0x1.7d4372p-94f, 0.0f,
     0.0f, 0.0f, 0x1.527bbcp-74f, 0x1.b87c16p-8f, 0x1.7b063cp-67f, 0.0f,
     0x1.db3548p-87f, 0x1.ed9db2p-87f, 0x1.650dcp-59f, 0.0f, 0x1.31efb8p-118f, 0.0f,
     0x1.8351d2p-20f, 0.0f, 0.0f, 0x1.c17e48p-62f, 0x1.ee408ap-69f, 0.0f,
     0x1.823cc4p-40f, 0x1.a31e5ep-72f, 0.0f, 0.0f, 0.0f, 0x1.befeeep-25f, 0.0f,
     0x1.59e266p-19f, 0x1.3a5f08p-64f, 0.0f, 0x1.4a3d5ep-112f, 0x1.0f708p-51f,
     0x1.bf4dbcp-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.018572p-100f, 0.0f, 0.0f,
     0x1.447694p-32f, 0x1.50a9cep-40f, 0x1.c9cb3cp-26f, 0.0f, 0.0f, 0x1.02b456p-96f,
     0x1.dcb43cp-22f, 0x1.fc21c6p-12f, 0x1.159eb6p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.8e3f5p-18f, 0x1.80c302p-75f, 0.0f, 0.0f,
     0x1.dd19dap-33f, 0.0f, 0.0f, 0x1.a5dd1p-104f, 0.0f, 0x1.49f12ap-20f, 0.0f,
     0x1.64494p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8084ccp-8f,
     0x1.8c937p-107f, 0x1.e9c008p-31f, 0x1.746a8p-85f, 0.0f, 0x1.edbe9ap-55f, 0.0f,
     0x1.407938p-63f, 0.0f, 0x1.68e278p-114f, 0.0f, 0.0f, 0x1.443582p-66f, 0.0f,
     0x1.3b684p-112f, 0.0f, 0x1.dc7f8ep-35f, 0x1.de0e64p-97f, 0.0f, 0.0f, 0.0f,
     0x1.51342p-50f, 0.0f, 0x1.f0ad22p-106f, 0.0f, 0.0f, 0.0f, 0x1.82b612p-45f,
     0x1.e718c2p-125f, 0.0f, 0x1.d6ad94p-104f, 0x1.7c3dcep-2f, 0x1.350d9cp-91f,
     0x1.9c5c7ep-47f, 0x1.eda2a8p-77f, 0.0f, 0x1.bd1204p-63f, 0x1.c976e6p-96f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.8b9a8cp-98f, 0x1.d8da4ap-58f, 0x1.08cbaap-27f,
     0x1.59fadap-18f, 0x1.691968p-119f, 0x1.b143dap-37f, 0.0f, 0x1.efb214p-117f, 0.0f,
     0.0f, 0.0f, 0x1.03bf62p-16f, 0.0f, 0.0f, 0.0f, 0x1.842154p-47f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c2e04p-49f, 0x1.a51aap-113f, 0x1.8f53a2p-114f, 0x1.fd8cbcp-40f,
     0x1.a44098p-107f, 0.0f, 0.0f, 0.0f, 0x1.824edp-63f, 0.0f, 0x1.c273aep-16f,
     0x1.b6e0b8p-28f, 0.0f, 0.0f, 0x1.cbee18p-126f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b8afbp-38f, 0x1.8457a2p-43f, 0x1.16ebep-49f, 0x1.eda668p-16f, 0.0f, 0.0f,
     0x1.5c149ep-35f, 0x1.d73a42p-73f, 0.0f, 0.0f, 0x1.e0fa28p-115f, 0.0f, 0.0f, 0.0f,
     0x1.f0d024p-34f, 0.0f, 0x1.83096ep-18f, 0.0f, 0x1.6525acp-122f, 0x1.0befbcp-82f,
     0.0f, 0.0f, 0x1.129728p-31f, 0.0f, 0.0f, 0x1.ap-10f, 0.0f, 0.0f, 0.0f,
     0x1.7bea3ep-113f, 0.0f, 0x1.ae5b78p-4f, 0.0f, 0x1.076a2ep-37f, 0.0f,
     0x1.c4e264p-58f, 0x1.6de45p-71f, 0x1.cbea06p-68f, 0.0f, 0x1.b2912p-12f,
     0x1.aa4acap-4f, 0x1.30ba2p-123f, 0x1.afaa04p-19f, 0x1.11114cp-84f,
     0x1.d5bc2p-71f, 0x1.37708ep-31f, 0x1.15a3bp-75f, 0.0f, 0x1.6b1b44p-65f,
     0x1.93358cp-59f, 0x1.f86236p-12f, 0.0f, 0.0f, 0.0f, 0x1.a42df6p-19f,
     0x1.c3c15ep-29f, 0x1.1fec26p-102f, 0.0f, 0.0f, 0x1.cd9dbep-48f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b88df8p-85f, 0.0f, 0x1.3ad2cp-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.67efd4p-72f, 0x1.062ab8p-7f, 0x1.60c7acp-39f, 0x1.bd0546p-72f, 0.0f,
     0.0f, 0x1.26655p-31f, 0x1.95cb5ep-20f, 0x1.4a333cp-7f, 0.0f, 0.0f,
     0x1.181cf4p-51f, 0x1.26fe12p-84f, 0.0f, 0.0f, 0x1.94eb78p-66f, 0.0f,
     0x1.f36556p-71f, 0.0f, 0.0f, 0x1.c544aap-90f, 0x1.5806c4p-4f, 0x1.309d7ap-98f,
     0x1.c4d45p-45f, 0.0f, 0x1.2be464p-120f, 0.0f, 0x1.065e04p-36f, 0.0f,
     0x1.15e894p-35f, 0x1.0b6216p-25f, 0x1.1cec26p-115f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.17ff02p-5f, 0x1.3075c6p-78f, 0x1.9e12b6p-69f, 0x1.b37e7ap-120f, 0.0f,
     0x1.206d2cp-8f, 0x1.3924dcp-79f, 0x1.a1669p-92f, 0.0f, 0x1.235bdep-97f,
     0x1.677de4p-4f, 0x1.520c8ep-84f, 0x1.2ced2ep-56f, 0.0f, 0x1.07c7f6p-121f, 0.0f,
     0.0f, 0x1.288308p-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6a57eap-92f,
     0x1.a2c604p-63f, 0x1.65d8f4p-5f, 0.0f, 0x1.0cd1ap-22f, 0.0f, 0x1.42ebb2p-68f,
     0.0f, 0.0f, 0.0f, 0x1.5a8d8cp-51f, 0x1.09868cp-34f, 0x1.d1667ap-85f, 0.0f,
     0x1.43525ap-44f, 0x1.3c7e64p-2f, 0x1.15ffb6p-18f, 0x1.652e6p-124f,
     0x1.21ac06p-46f, 0x1.105efep-45f, 0.0f, 0.0f, 0.0f, 0x1.7fc054p-99f, 0.0f, 0.0f,
     0x1.404676p-79f, 0x1.1ddfbap-14f, 0.0f, 0x1.ec5fc4p-43f, 0x1.65548ep-28f, 0.0f,
     0.0f, 0x1.ace45cp-31f, 0x1.4535fp-118f, 0.0f, 0.0f, 0x1.20c266p-18f,
     0x1.108608p-95f, 0.0f, 0x1.fcd05ap-13f, 0x1.89544ap-69f, 0x1.47d9e2p-33f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.8c8f58p-44f, 0x1.89fd32p-111f, 0.0f, 0.0f, 0.0f,
     0x1.15b6e6p-12f, 0x1.b17406p-115f, 0x1.ddfcdap-119f, 0.0f, 0.0f, 0x1.17bebp-21f,
     0x1.9fa784p-71f, 0.0f, 0x1.320cep-93f, 0.0f, 0.0f, 0.0f, 0x1.094cd4p-49f, 0.0f,
     0x1.e73a0cp-61f, 0x1.a011dap-19f, 0.0f, 0x1.d664d2p-13f, 0.0f, 0x1.e59dc6p-107f,
     0x1.0a3d3cp-114f, 0x1.6a8c74p-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6a1376p-59f, 0.0f,
     0x1.e33a0ap-63f, 0x1.fdd498p-7f, 0.0f, 0x1.b7d95ep-23f, 0x1.de4b14p-93f, 0.0f,
     0x1.0c3646p-67f, 0.0f, 0x1.5001f2p-63f, 0.0f, 0.0f, 0.0f, 0x1.489906p-69f,
     0x1.49778p-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3ecfb6p-44f, 0.0f,
     0x1.9f4c9ep-66f, 0x1.2540dcp-94f, 0x1.ea784cp-95f, 0x1.b5b25ap-82f,
     0x1.0404bep-80f, 0x1.a5c7f2p-57f, 0.0f, 0.0f, 0x1.eb2d22p-104f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.14e308p-113f, 0.0f, 0.0f,
     0x1.2d663cp-31f, 0.0f, 0x1.e8aa5ep-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f26136p-91f, 0x1.4b026p-114f, 0.0f, 0.0f, 0x1.9f1712p-111f, 0x1.16d1cap-84f,
     0x1.75de1ep-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2fc52p-47f, 0.0f,
     0x1.dfc76ap-15f, 0x1.59087cp-122f, 0x1.2bf16ap-77f, 0x1.e6ddeap-116f,
     0x1.b08788p-37f, 0.0f, 0x1.fc2fccp-89f, 0x1.62234ep-80f, 0.0f, 0x1.5d3df6p-1f,
     0x1.7c9adp-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.79d80cp-42f, 0.0f, 0x1.c6fc84p-121f,
     0.0f, 0.0f, 0x1.4897d8p-31f, 0x1.db07aep-96f, 0.0f, 0x1.2a1ae2p-73f, 0.0f, 0.0f,
     0.0f, 0x1.21166ap-87f, 0.0f, 0.0f, 0x1.38f112p-64f, 0.0f, 0.0f, 0.0f,
     0x1.fe412cp-34f, 0.0f, 0x1.ee1614p-47f, 0.0f, 0x1.8df31p-30f, 0x1.259e66p-29f,
     0.0f, 0x1.3b1196p-91f, 0.0f, 0.0f, 0x1.539408p-118f, 0.0f, 0.0f, 0x1.8adc1ep-77f,
     0.0f, 0x1.377c78p-6f, 0x1.543606p-5f, 0.0f, 0.0f, 0x1.b7cb22p-10f,
     0x1.13169p-22f, 0x1.5bd614p-85f, 0.0f, 0.0f, 0x1.255058p-22f, 0x1.492338p-88f,
     0.0f, 0.0f, 0x1.a9960cp-60f, 0x1.1782c8p-62f, 0x1.2b4d56p-56f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.fdf1f2p-74f, 0x1.e4b308p-35f, 0x1.013096p-57f, 0x1.448a2cp-66f, 0.0f,
     0.0f, 0.0f, 0x1.c03814p-64f, 0x1.410576p-114f, 0x1.382492p-38f, 0.0f, 0.0f, 0.0f,
     0x1.b97e14p-81f, 0.0f, 0x1.952c06p-42f, 0.0f, 0x1.1a991p-33f, 0.0f,
     0x1.2aae42p-69f, 0x1.35cc6cp-44f, 0.0f, 0x1.42ab5p-33f, 0.0f, 0x1.5447aep-106f,
     0x1.2a74dap-96f, 0x1.416e88p-61f, 0.0f, 0x1.e7a2aap-38f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7a75d6p-44f, 0x1.d3d544p-50f, 0x1.c7e97p-55f, 0x1.95b5eep-27f,
     0x1.dd470ap-19f, 0x1.cc84aap-46f, 0x1.d3d19cp-91f, 0.0f, 0x1.cb3e2cp-60f, 0.0f,
     0x1.8e682ap-106f, 0x1.a0f062p-94f, 0.0f, 0.0f, 0x1.f2fe06p-106f, 0.0f,
     0x1.92670cp-71f, 0x1.d68262p-46f, 0x1.4e3916p-121f, 0.0f, 0x1.27b11p-2f, 0.0f,
     0.0f, 0.0f, 0x1.e4e7d8p-91f, 0.0f, 0.0f, 0x1.6e159ep-44f, 0.0f, 0x1.b8fcbap-55f,
     0x1.19fbacp-120f, 0.0f, 0.0f, 0x1.55b40cp-39f, 0x1.d4074ap-116f, 0x1.db374ep-45f,
     0.0f, 0x1.b75168p-108f, 0.0f, 0.0f, 0.0f, 0x1.ebd9cap-114f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.0c62f8p-12f, 0.0f, 0x1.77ceap-114f, 0x1.8b294ap-68f, 0.0f,
     0x1.0e0218p-120f, 0x1.c98ad8p-51f, 0x1.465c84p-35f, 0.0f, 0.0f, 0x1.003efep-90f,
     0.0f, 0.0f, 0x1.404bacp-53f, 0.0f, 0x1.c3cc54p-81f, 0.0f, 0x1.ba6194p-99f, 0.0f,
     0x1.5231d8p-79f, 0x1.13251cp-41f, 0x1.340b94p-98f, 0.0f, 0x1.7eacf4p-85f,
     0x1.0a8b92p-117f, 0x1.f4ab3ep-110f, 0x1.0aec06p-103f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.45e704p-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.65dcf8p-13f, 0x1.5d0636p-58f, 0.0f,
     0x1.65d17ep-24f, 0x1.c72d54p-82f, 0x1.01a884p-24f, 0.0f, 0x1.d5c48ep-110f,
     0x1.a141fcp-15f, 0x1.512874p-61f, 0.0f, 0x1.766004p-114f, 0x1.f93a78p-1f, 0.0f,
     0.0f, 0x1.f2e8d8p-17f, 0.0f, 0x1.85ea4ap-59f, 0x1.ee0664p-67f, 0.0f,
     0x1.f615a2p-85f, 0x1.b39664p-79f, 0x1.954f8p-87f, 0.0f, 0x1.ad3b2cp-100f,
     0x1.df7d14p-77f, 0.0f, 0x1.a0d72cp-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.591688p-31f,
     0x1.588ff2p-31f, 0x1.cfaa3p-97f, 0x1.5b49dp-8f, 0x1.681c22p-77f, 0.0f,
     0x1.febb7ep-92f, 0.0f, 0x1.52f9e6p-91f, 0.0f, 0x1.ad86ecp-3f, 0x1.a8c25ap-61f,
     0x1.d16b2ap-24f, 0x1.1efaf2p-68f, 0.0f, 0x1.b2e158p-8f, 0x1.1394f4p-42f,
     0x1.a77054p-32f, 0.0f, 0.0f, 0x1.fb9aacp-85f, 0.0f, 0.0f, 0.0f, 0x1.8d56f2p-117f,
     0.0f, 0x1.347e06p-73f, 0.0f, 0x1.5b869cp-36f, 0.0f, 0x1.110fbep-117f, 0.0f,
     0x1.969d2p-90f, 0.0f, 0x1.c94cp-45f, 0.0f, 0.0f, 0x1.5e195cp-12f,
     0x1.ec7b76p-68f, 0x1.7eda06p-81f, 0.0f, 0x1.c78c6cp-33f, 0x1.24d096p-7f, 0.0f,
     0x1.2f008ap-39f, 0x1.28e4a6p-92f, 0.0f, 0.0f, 0.0f, 0x1.453872p-81f, 0.0f,
     0x1.68d144p-62f, 0.0f, 0x1.b18ab6p-66f, 0x1.893a16p-43f, 0x1.7de3cap-72f,
     0x1.85bd84p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.04920cp-31f, 0.0f, 0.0f,
     0x1.d4192ap-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9f22bcp-20f, 0x1.e61942p-55f,
     0x1.b6e334p-33f, 0x1.0ead5p-56f, 0x1.b6a58ep-43f, 0.0f, 0x1.205744p-52f,
     0x1.a9befep-95f, 0.0f, 0.0f, 0x1.fb424cp-50f, 0x1.b0505cp-11f, 0x1.f5abdcp-83f,
     0.0f, 0x1.2a9d48p-111f, 0.0f, 0x1.7ebbacp-85f, 0.0f, 0x1.764898p-77f,
     0x1.626b5ep-66f, 0x1.5e68fp-103f, 0x1.294578p-104f, 0x1.70332cp-21f, 0.0f,
     0x1.aa2ec2p-1f, 0.0f, 0.0f, 0x1.0fcd38p-126f, 0x1.084b2ep-49f, 0.0f,
     0x1.4e48dcp-54f, 0x1.28fac4p-65f, 0x1.b4f344p-78f, 0.0f, 0x1.a76854p-42f,
     0x1.619ab2p-65f, 0.0f, 0x1.5c002p-78f, 0x1.1f43d4p-50f, 0.0f, 0x1.0dfb94p-79f,
     0.0f, 0.0f, 0x1.6b0e74p-74f, 0x1.f1ec0ap-32f, 0.0f, 0x1.b0a5e6p-100f,
     0x1.fd23acp-4f, 0.0f, 0x1.6eb726p-58f, 0.0f, 0x1.919cf2p-112f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.81ac44p-49f, 0.0f, 0.0f, 0.0f, 0x1.232598p-13f, 0.0f, 0.0f,
     0x1.29c1aep-8f, 0x1.38065cp-59f, 0.0f, 0x1.628756p-68f, 0.0f, 0x1.3f0ac8p-66f,
     0.0f, 0x1.2d4b02p-63f, 0x1.db8ca2p-19f, 0.0f, 0x1.8ec3dp-5f, 0.0f,
     0x1.08a3aep-49f, 0.0f, 0.0f, 0.0f, 0x1.594784p-108f, 0x1.7ba36ap-34f, 0.0f,
     0x1.c68082p-61f, 0.0f, 0x1.9da332p-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.16fae2p-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.07e4b2p-102f, 0x1.6b578p-1f, 0.0f, 0.0f, 0x1.69f3c8p-109f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b54524p-5f, 0.0f, 0.0f, 0.0f, 0x1.053c06p-56f, 0x1.760f4ap-107f,
     0.0f, 0.0f, 0x1.a1b6acp-103f, 0.0f, 0.0f, 0x1.e2835cp-97f, 0.0f, 0x1.8208f4p-6f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a577bap-69f, 0.0f, 0x1.e08e14p-55f, 0x1.745c5p-123f,
     0x1.a30484p-87f, 0x1.2588d6p-37f, 0x1.8eac14p-3f, 0x1.215f38p-110f,
     0x1.fe59c4p-123f, 0x1.a07678p-11f, 0x1.312758p-65f, 0x1.e7a9d4p-103f, 0.0f,
     0x1.49e998p-16f, 0x1p0f, 0x1.fbcac4p-83f, 0x1.3764e6p-100f, 0.0f,
     0x1.e2aad2p-90f, 0.0f, 0.0f, 0.0f, 0x1.c3e63p-97f, 0x1.01cf38p-15f,
     0x1.a11442p-100f, 0x1.602cccp-81f, 0.0f, 0.0f, 0x1.130a5cp-58f, 0.0f, 0.0f, 0.0f,
     0x1.44794p-124f, 0x1.b69666p-53f, 0.0f, 0x1.8c7b98p-15f, 0x1.2c89b4p-41f,
     0x1.2d856ap-5f, 0.0f, 0x1.56105p-43f, 0x1.185d56p-15f, 0.0f, 0x1.4eb5f4p-81f,
     0x1.454aeep-120f, 0.0f, 0.0f, 0.0f, 0x1.a88e24p-116f, 0x1.a8153ep-117f,
     0x1.64db38p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.012584p-116f, 0x1.3fcfb6p-103f,
     0x1.99cdb4p-110f, 0x1.a2daep-36f, 0.0f, 0.0f, 0.0f, 0x1.1046acp-3f, 0.0f,
     0x1.22620ep-38f, 0x1.b09bdap-35f, 0x1.65c87ep-9f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ca5788p-64f, 0x1.7bfdc6p-69f, 0.0f, 0x1.e0cb22p-10f, 0.0f, 0x1.b3df74p-20f,
     0.0f, 0.0f, 0x1.faf9c6p-58f, 0.0f, 0.0f, 0x1.a6d798p-87f, 0.0f, 0.0f,
     0x1.89030cp-81f, 0x1.01dfccp-8f, 0.0f, 0x1.dee58ep-64f, 0x1.978f7ap-72f,
     0x1.f86416p-110f, 0.0f, 0.0f, 0x1.40d07p-21f, 0.0f, 0x1.086522p-55f,
     0x1.b69404p-27f, 0.0f, 0x1.fd7a3p-14f, 0x1.4e20eep-46f, 0.0f, 0x1.6fcae2p-1f,
     0x1.20acc8p-57f, 0.0f, 0.0f, 0.0f, 0x1.88884ap-38f, 0x1.7ee40ap-81f,
     0x1.7b0deap-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dc5ff4p-119f, 0.0f,
     0x1.4d7f66p-48f, 0x1.f6bc58p-21f, 0x1.662f94p-119f, 0x1.01c7cep-84f,
     0x1.c7823ep-47f, 0.0f, 0x1.9f1588p-19f, 0.0f, 0.0f, 0x1.80e9b2p-70f,
     0x1.afb8b6p-14f, 0.0f, 0.0f, 0x1.e95e2cp-59f, 0.0f, 0.0f, 0x1.773ffp-98f,
     0x1.68f74ap-62f, 0x1.e51eaap-95f, 0.0f, 0x1.e4a0aep-73f, 0x1.fcf194p-56f,
     0x1.22467ap-68f, 0x1.27df78p-48f, 0.0f, 0x1.8d2de8p-37f, 0x1.79d5bep-73f, 0.0f
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
            tmp1 = Sleef_sqrtf4_u35avx2128(tmp0);
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
    printf("Sleef_sqrtf4_u35avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_sqrtf4_u35avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
