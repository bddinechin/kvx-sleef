/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_asinhf4_u10avx2128.c --function Sleef_asinhf4_u10avx2128 \
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
     0.0f, 0.0f, 0x1.7b97f4p-71f, 0x1.2a929ap-93f, 0x1.bd1466p-57f, 0.0f,
     0x1.239ccap-85f, 0.0f, 0.0f, 0x1.8f3f4cp-90f, 0x1.5fde54p-17f, 0.0f,
     0x1.49979ep-80f, 0x1.ae53bcp-92f, 0.0f, 0.0f, 0.0f, 0x1.d0debp-57f,
     0x1.0a340ep-67f, 0.0f, 0x1.547276p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.71be16p-68f, 0x1.81454cp-87f, 0.0f, 0x1.b77e9cp-71f, 0x1.ed842ap-32f, 0.0f,
     0.0f, 0.0f, 0x1.54e22ep-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bf53a2p-29f,
     0x1.e4d908p-27f, 0x1.4b5d3p-52f, 0x1.9c937p-93f, 0x1.cdff36p-99f, 0x1.1f9f8p-83f,
     0.0f, 0x1.024b0ep-52f, 0.0f, 0.0f, 0.0f, 0x1.99eebap-125f, 0x1.d4b028p-80f,
     0x1.3f54d4p-103f, 0.0f, 0.0f, 0.0f, 0x1.5d868ep-60f, 0.0f, 0x1.d3f5dp-72f,
     0x1.2c51dp-82f, 0.0f, 0.0f, 0x1.9022f8p-32f, 0.0f, 0.0f, 0x1.cce394p-57f,
     0x1.38ce3ep-119f, 0.0f, 0x1.888412p-115f, 0.0f, 0x1.61ddfap-35f, 0.0f,
     0x1.f336dep-100f, 0x1.b95152p-2f, 0x1.da67bcp-73f, 0.0f, 0.0f, 0x1.8ab336p-48f,
     0x1.dd9072p-91f, 0.0f, 0x1.c75152p-3f, 0.0f, 0x1.c6c008p-66f, 0x1p0f,
     0x1.cb09d4p-8f, 0x1.1d61d2p-97f, 0.0f, 0.0f, 0x1.c52374p-67f, 0.0f,
     0x1.bd18c2p-117f, 0.0f, 0x1.2698c6p-112f, 0x1.cea2cap-52f, 0x1.691b88p-98f,
     0x1.bcb928p-52f, 0.0f, 0x1.c61a08p-110f, 0.0f, 0.0f, 0x1.84b3c4p-12f,
     0x1.b7749ap-10f, 0.0f, 0x1.8afc0cp-89f, 0.0f, 0.0f, 0x1.f425dcp-7f,
     0x1.5ea7fcp-31f, 0.0f, 0.0f, 0x1.89c1bcp-5f, 0.0f, 0x1.3c46fap-8f, 0.0f,
     0x1.cb9a9cp-119f, 0.0f, 0.0f, 0.0f, 0x1.24150ep-4f, 0x1.324b52p-75f, 0.0f,
     0x1.25c3e2p-45f, 0.0f, 0x1.599f4ep-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.68519ep-78f, 0x1.531a9ep-105f, 0.0f, 0x1.018d26p-7f, 0x1.54ed2ep-25f,
     0x1.db491p-65f, 0x1.aad91ap-38f, 0x1.f0e7bep-68f, 0x1.321c98p-19f, 0.0f, 0.0f,
     0x1.e5a9cap-46f, 0x1.b9323p-52f, 0x1.148baep-118f, 0.0f, 0x1.977ed6p-31f, 0.0f,
     0x1.f738f6p-6f, 0.0f, 0x1.734d48p-50f, 0.0f, 0x1.2b5794p-46f, 0.0f,
     0x1.47098ep-45f, 0x1.6297p-10f, 0x1.b305fap-119f, 0.0f, 0x1.b26c76p-103f,
     0x1.bdee82p-62f, 0.0f, 0x1.d86df2p-58f, 0x1.139372p-35f, 0x1.0926dp-57f, 0.0f,
     0.0f, 0x1.34f138p-91f, 0x1.27453cp-109f, 0.0f, 0x1.7855ep-92f, 0x1.6f906cp-22f,
     0x1.8c536ap-78f, 0.0f, 0x1.b3bae4p-97f, 0x1p0f, 0x1.c4a158p-1f, 0.0f, 0.0f,
     0x1.20bedap-93f, 0.0f, 0x1.5007fp-66f, 0x1.c383b2p-33f, 0x1.0d9092p-66f, 0.0f,
     0x1.1ac03ap-7f, 0x1.3e19e4p-63f, 0x1.5cc2fep-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.793e18p-125f, 0.0f, 0.0f, 0.0f, 0x1.b1bb84p-126f, 0x1.fffc8p-30f,
     0x1.0bcc2p-93f, 0.0f, 0x1.4cc4cp-51f, 0x1.b6dbf2p-94f, 0x1.9b1422p-121f, 0.0f,
     0x1.ff5224p-107f, 0x1.82c112p-70f, 0x1.08bb3p-45f, 0x1.fbe7f4p-96f, 0.0f, 0.0f,
     0x1.cc0d74p-47f, 0.0f, 0.0f, 0x1.136f1cp-124f, 0x1.904ea4p-78f, 0x1.91125cp-55f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e18b6ap-24f,
     0x1.62a406p-25f, 0x1.3364cep-51f, 0.0f, 0x1.2b075cp-43f, 0x1.faf51ap-87f, 0.0f,
     0x1.240ea6p-103f, 0x1.e5fd4p-76f, 0.0f, 0x1.e3205p-90f, 0x1.07da4cp-66f,
     0x1.adc678p-11f, 0x1.5d4528p-76f, 0x1.74ae98p-123f, 0x1.aa1fb8p-119f,
     0x1.7a22dep-66f, 0.0f, 0.0f, 0.0f, 0x1.e51b1cp-114f, 0.0f, 0x1.3ac27cp-110f,
     0x1.297dfp-121f, 0.0f, 0x1.8b9138p-39f, 0.0f, 0.0f, 0x1.467a1cp-2f, 0.0f,
     0x1.994c1ap-36f, 0.0f, 0.0f, 0.0f, 0x1.217474p-96f, 0x1.7bddeep-54f,
     0x1.6ddp-66f, 0x1.9930fcp-107f, 0.0f, 0.0f, 0x1.07d944p-30f, 0x1.c26ce2p-76f,
     0x1.01eca4p-116f, 0x1.3a4ff2p-21f, 0.0f, 0.0f, 0x1.7f2b6ep-87f, 0.0f, 0.0f, 0.0f,
     0x1.295882p-38f, 0x1.4a1832p-118f, 0.0f, 0.0f, 0x1.149308p-88f, 0x1.6e8d98p-68f,
     0x1.a5affcp-53f, 0.0f, 0x1.c5ec3p-96f, 0x1.08890ap-112f, 0x1.8fda32p-98f, 0.0f,
     0.0f, 0x1.73bffcp-71f, 0x1.4a5b98p-86f, 0.0f, 0.0f, 0x1.6cb466p-64f, 0.0f, 0.0f,
     0.0f, 0x1.8289e2p-119f, 0.0f, 0x1.5d0122p-48f, 0.0f, 0.0f, 0x1.0261dcp-28f, 0.0f,
     0.0f, 0.0f, 0x1.df0cap-118f, 0x1.b779acp-103f, 0.0f, 0.0f, 0x1.7a1e9cp-109f,
     0.0f, 0x1.502304p-72f, 0x1.9214eep-6f, 0x1.bcdea2p-105f, 0.0f, 0x1.20771ep-26f,
     0x1.28d244p-52f, 0x1.86b25ep-120f, 0.0f, 0x1.c54d12p-48f, 0.0f, 0.0f,
     0x1.361f7cp-111f, 0x1.cf85acp-56f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.6ba90ep-98f,
     0x1.b1658p-96f, 0x1.f8fc3p-29f, 0x1.8d3ed2p-29f, 0.0f, 0x1.fed8p-70f, 0.0f,
     0x1.1b044ep-91f, 0.0f, 0.0f, 0x1.3cb438p-81f, 0.0f, 0.0f, 0x1.2c6bcep-71f,
     0x1.ee18fp-65f, 0x1.fa7fa6p-66f, 0x1.e632f8p-29f, 0x1.1a980cp-66f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d9b494p-97f, 0.0f, 0.0f, 0x1.6b2064p-110f, 0x1.0e76bcp-75f,
     0x1.1e58cp-76f, 0x1.a6bd44p-80f, 0.0f, 0.0f, 0x1.00b7acp-33f, 0.0f, 0.0f, 0.0f,
     0x1.a77b1cp-7f, 0.0f, 0x1.1f48aap-87f, 0.0f, 0.0f, 0.0f, 0x1.aa4a86p-13f,
     0x1.acf2fep-64f, 0x1.6e069cp-122f, 0x1.c823fap-47f, 0x1.630552p-122f,
     0x1.4eebaep-91f, 0x1.dc23c4p-94f, 0.0f, 0.0f, 0x1.7edc6cp-101f, 0x1.2a5a5cp-7f,
     0.0f, 0x1.128eecp-23f, 0x1.7b1d1ap-64f, 0.0f, 0x1.ccacfp-112f, 0x1.0703aap-38f,
     0.0f, 0.0f, 0x1.2b8d62p-19f, 0.0f, 0x1.50027ap-90f, 0.0f, 0x1.593a04p-115f, 0.0f,
     0x1.3d8ff8p-11f, 0x1.de764cp-90f, 0.0f, 0.0f, 0.0f, 0x1.6f27a6p-58f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.115886p-121f, 0.0f, 0.0f, 0.0f,
     0x1.023928p-30f, 0.0f, 0x1.9fa27p-46f, 0x1.6a3542p-62f, 0.0f, 0x1.c8f14ep-80f,
     0x1.ea7d72p-8f, 0x1.1ce78ap-120f, 0x1.c215e8p-34f, 0x1.64a11p-96f, 0.0f, 0.0f,
     0x1.ec98f8p-72f, 0x1.0fb2aap-39f, 0.0f, 0x1.b2869ap-75f, 0.0f, 0.0f,
     0x1.78d6e4p-71f, 0x1.46d8ep-109f, 0.0f, 0x1.1aa70cp-114f, 0.0f, 0.0f,
     0x1.e6a906p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.42acc6p-20f, 0x1.cbd856p-8f,
     0x1.672d74p-97f, 0x1.28783p-74f, 0x1.314094p-67f, 0.0f, 0.0f, 0x1.9d933ep-79f,
     0x1.168d7ap-85f, 0x1.255d4ap-2f, 0x1.76e43ap-9f, 0x1.897b1ep-106f, 0.0f, 0.0f,
     0.0f, 0x1.71b3a8p-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a8d906p-45f,
     0x1.715794p-38f, 0.0f, 0x1.5663bcp-90f, 0.0f, 0x1.8063b2p-68f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.aabb66p-14f, 0.0f, 0x1.c6dd2ep-116f, 0.0f, 0x1.c129b6p-1f, 0.0f,
     0x1.67de3p-101f, 0.0f, 0.0f, 0x1.bb2644p-110f, 0.0f, 0.0f, 0x1.49f688p-89f,
     0x1.ee846ap-58f, 0x1.8a3fd6p-7f, 0.0f, 0x1.709ff8p-11f, 0x1.fa5d64p-78f,
     0x1.92e9f8p-121f, 0x1.60b406p-89f, 0.0f, 0.0f, 0.0f, 0x1.792a0ap-41f, 0.0f,
     0x1.8104cep-72f, 0x1.097be8p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.16106p-116f,
     0.0f, 0x1.0b6a1p-11f, 0.0f, 0x1.31febep-126f, 0.0f, 0.0f, 0x1.146f56p-126f, 0.0f,
     0x1.26f964p-110f, 0.0f, 0.0f, 0x1.7efb7p-40f, 0.0f, 0.0f, 0x1.f37db8p-100f,
     0x1.38db5ap-72f, 0.0f, 0x1.874be4p-44f, 0x1.76f672p-21f, 0.0f, 0x1.2b2584p-17f,
     0.0f, 0.0f, 0.0f, 0x1.6aed84p-43f, 0.0f, 0x1.1ca876p-126f, 0x1.7dc5c4p-29f, 0.0f,
     0.0f, 0x1.8ffdfap-116f, 0x1.b764cep-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1db372p-56f, 0x1.c583a2p-59f, 0x1.2fe706p-57f, 0x1.64a53cp-86f, 0.0f,
     0x1.87cf2cp-100f, 0.0f, 0x1.8b78dep-103f, 0.0f, 0x1.98573p-97f, 0.0f,
     0x1.59e058p-99f, 0.0f, 0x1.83a0cap-19f, 0.0f, 0x1.167f76p-49f, 0.0f, 0.0f,
     0x1.23db5ep-121f, 0x1.06e57ep-118f, 0x1.9f14f4p-109f, 0.0f, 0.0f, 0.0f,
     0x1.dcda64p-90f, 0.0f, 0x1.138612p-58f, 0.0f, 0x1.6f3e3cp-9f, 0x1.28fdf2p-12f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d76deap-93f, 0x1.940d3cp-70f, 0x1.bef52ep-49f,
     0x1.4d09fep-46f, 0x1.d02854p-125f, 0x1.ab90bcp-5f, 0.0f, 0.0f, 0x1p0f,
     0x1.9a66fp-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5894ecp-73f, 0.0f, 0.0f,
     0x1.4e59d2p-3f, 0x1.fceffp-101f, 0x1p0f, 0x1.f66c7ap-15f, 0x1.f0e27ap-62f, 0.0f,
     0.0f, 0.0f, 0x1.71cb2p-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8a1284p-88f,
     0x1.74a058p-26f, 0x1.8678c6p-66f, 0.0f, 0.0f, 0.0f, 0x1.1f6c6p-124f, 0.0f, 0.0f,
     0x1.626346p-49f, 0x1.10d018p-119f, 0x1.720128p-74f, 0x1.54ebaap-58f, 0.0f, 0.0f,
     0x1.ac3542p-42f, 0x1.0c85acp-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fa759ap-3f, 0x1.381552p-111f, 0x1.b42efp-118f, 0.0f, 0x1.908104p-1f, 0.0f,
     0x1.6af996p-55f, 0.0f, 0x1.27872p-89f, 0x1.6540fep-103f, 0.0f, 0.0f,
     0x1.7fdb3p-59f, 0.0f, 0.0f, 0x1.94b518p-55f, 0x1.9abedap-121f, 0.0f, 0.0f,
     0x1.6b9c8cp-14f, 0.0f, 0.0f, 0x1.0121a4p-7f, 0.0f, 0x1.2446e2p-123f,
     0x1.e8971p-54f, 0.0f, 0.0f, 0x1.dbf39ap-115f, 0x1.722a94p-82f, 0x1.08c1bp-120f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.bdf4c4p-90f, 0x1.c2faeap-55f, 0.0f, 0.0f,
     0x1.0ae056p-24f, 0x1.a0c47ep-44f, 0x1.2296e8p-3f, 0x1.17b3ccp-69f,
     0x1.a545dap-30f, 0x1.85bed4p-39f, 0.0f, 0.0f, 0x1.65b6b8p-46f, 0x1.79ed26p-99f,
     0.0f, 0.0f, 0x1.88443cp-104f, 0x1.44d9bep-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.0e48b8p-76f, 0x1.fa752ep-89f, 0.0f, 0x1.c077fp-11f, 0.0f, 0.0f,
     0.0f, 0x1.ebf22ep-62f, 0.0f, 0x1.8fdab8p-33f, 0x1.fcf94ep-94f, 0.0f,
     0x1.fd0286p-126f, 0x1.e1fea4p-36f, 0x1.33eeaep-54f, 0x1.452baap-44f,
     0x1.e0244ap-95f, 0.0f, 0.0f, 0x1.7375d6p-83f, 0.0f, 0x1.a7a5ep-120f, 0.0f,
     0x1.3003d4p-96f, 0x1.acaff2p-92f, 0.0f, 0.0f, 0.0f, 0x1.4bbd54p-17f, 0.0f,
     0x1.e59b7ap-21f, 0.0f, 0x1.b3a5d6p-69f, 0.0f, 0x1.0f1988p-20f, 0.0f,
     0x1.bc95bap-81f, 0x1.45164ep-70f, 0x1.220a14p-21f, 0x1.be1572p-62f, 0.0f,
     0x1.5599a2p-15f, 0x1.02b45ep-10f, 0.0f, 0x1.74e53ap-123f, 0.0f, 0x1.97d12ep-32f,
     0.0f, 0.0f, 0.0f, 0x1.cd1088p-60f, 0x1.05c738p-79f, 0x1.01057ap-97f,
     0x1.5328d6p-45f, 0.0f, 0x1.9e26b4p-122f, 0x1.0b1344p-27f, 0x1.22dcaap-95f,
     0x1.189604p-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0293bap-96f, 0.0f, 0x1.941364p-23f,
     0x1.5279b4p-18f, 0x1.38e3c6p-14f, 0x1.3ca706p-116f, 0.0f, 0.0f, 0.0f,
     0x1.54fd22p-20f, 0x1.ea5fecp-54f, 0x1.b02b4p-112f, 0.0f, 0.0f, 0x1.59404p-98f,
     0x1.2ebcap-83f, 0x1.6ca73ap-41f, 0.0f, 0.0f, 0x1.f4e33ep-39f, 0x1p0f,
     0x1.d41008p-101f, 0x1.2a37dp-81f, 0x1.3ae9cep-58f, 0x1.b4e6b6p-42f, 0.0f, 0.0f,
     0.0f, 0x1.9c8c18p-17f, 0.0f, 0x1.d0aac2p-38f, 0x1.9528fap-98f, 0.0f,
     0x1.e9d162p-83f, 0x1.b9b132p-122f, 0x1.f1ad4ap-86f, 0.0f, 0.0f, 0x1.518578p-31f,
     0x1.c08354p-105f, 0x1.51fdaep-103f, 0.0f, 0.0f, 0x1.d34ee6p-100f,
     0x1.52232ep-73f, 0.0f, 0.0f, 0x1.e893b4p-39f, 0x1.26b6c2p-118f, 0x1.ea590ep-35f,
     0.0f, 0.0f, 0.0f, 0x1.227cf4p-24f, 0x1.cbb908p-29f, 0x1.e95fd8p-15f,
     0x1.9c88c8p-10f, 0x1.e9a34p-84f, 0.0f, 0x1.8a015p-76f, 0.0f, 0x1.67f3a8p-74f,
     0x1.4f0fdcp-6f, 0x1.fdc3bep-101f, 0.0f, 0x1.fee1c2p-31f, 0x1.61ab6ep-78f, 0.0f,
     0.0f, 0.0f, 0x1.26ce38p-13f, 0x1.1855c4p-57f, 0x1.162ee8p-119f, 0x1.efc5a6p-119f,
     0.0f, 0.0f, 0x1.eaef3ap-32f, 0x1.4b6786p-29f, 0.0f, 0x1.9af3bap-112f,
     0x1.88817ep-50f, 0x1.ad023cp-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.110e9ap-17f,
     0x1.a0d30ap-66f, 0.0f, 0.0f, 0.0f, 0x1.f7f8bep-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.18a8e4p-49f, 0x1.c2e184p-91f, 0x1.34bd34p-27f, 0x1.2f0614p-36f,
     0x1.2acd8p-18f, 0.0f, 0x1.9e502ap-9f, 0x1.71ebe2p-111f, 0x1.e16e96p-53f, 0.0f,
     0x1.cd6b28p-2f, 0x1.37e1aap-126f, 0x1.bd77c2p-110f, 0x1.4ff66p-74f,
     0x1.f5812cp-34f, 0x1p0f, 0x1.9d48b2p-122f, 0.0f, 0x1.6738c2p-121f,
     0x1.c1aaacp-37f, 0x1.658c74p-20f, 0x1.6d4a5cp-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6ad32cp-67f, 0x1.0835f2p-45f, 0.0f, 0x1.e7f376p-96f, 0x1.c67612p-83f,
     0x1.f82fccp-116f, 0x1.31de94p-56f, 0.0f, 0.0f, 0x1.f28b78p-117f, 0x1.3dc1dap-11f,
     0x1.e5bd4ep-1f, 0.0f, 0x1.30e982p-39f, 0x1.ffad88p-74f, 0x1.db7e68p-20f,
     0x1.7f12bap-14f, 0x1.7c9f4cp-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e6b2d2p-114f,
     0x1.3666aap-75f, 0x1.89f5bcp-42f, 0x1.d319e4p-104f, 0x1.cc53fep-123f,
     0x1.84367ap-52f, 0.0f, 0x1.175b34p-44f, 0x1.85d99cp-86f, 0.0f, 0.0f, 0.0f,
     0x1.67c4eep-93f, 0x1.04c01p-44f, 0.0f, 0.0f, 0x1.5b94a2p-59f, 0x1.8f66a8p-102f,
     0x1.4b50bp-65f, 0x1.29eb16p-18f, 0x1.4ccaa4p-107f, 0x1.8f425p-13f, 0.0f,
     0x1.3211b6p-15f, 0x1.f2b07p-27f, 0x1.8850b8p-125f, 0.0f, 0x1.d7604p-64f,
     0x1.89b4eap-99f, 0x1.438b7p-121f, 0.0f, 0x1.c46f06p-65f, 0x1.2ae69cp-3f,
     0x1.26cdcep-123f, 0.0f, 0x1.0a031cp-111f, 0x1.874328p-121f, 0x1.8457b2p-1f, 0.0f,
     0x1.d433a4p-45f, 0x1.a13cf6p-72f, 0.0f, 0x1.8a3d04p-109f, 0.0f, 0.0f, 0.0f,
     0x1.530e82p-14f, 0x1.79789cp-91f, 0x1.4ba2e2p-113f, 0x1.fa4c0cp-17f,
     0x1.e17388p-78f, 0.0f, 0x1.9db36ep-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.565d76p-33f,
     0x1.d0e7fep-97f, 0.0f, 0x1.0df17p-56f, 0x1.e26af4p-39f, 0x1.8c3c9cp-53f,
     0x1.18c33ep-108f, 0x1.b12cf2p-84f, 0x1.81d538p-88f, 0.0f, 0.0f, 0x1.4e1c7p-96f,
     0x1.706aa4p-125f, 0x1.09597p-108f, 0.0f, 0x1.183f34p-73f, 0x1.ad8e5cp-22f,
     0x1.6eb082p-81f, 0x1.a35d2ep-87f, 0.0f, 0.0f, 0.0f, 0x1.b9fcd8p-83f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.26ca5p-70f, 0x1.76270cp-34f, 0x1.7a1f6p-94f, 0x1.50f71ap-72f,
     0x1.c2eb4ep-22f, 0x1.808c4ap-52f, 0x1.c6e96cp-46f, 0x1.b9f65cp-103f, 0.0f,
     0x1.088766p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b78d3cp-110f, 0.0f, 0.0f,
     0x1.39e33ap-100f
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
            tmp1 = Sleef_asinhf4_u10avx2128(tmp0);
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
    printf("Sleef_asinhf4_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_asinhf4_u10avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
