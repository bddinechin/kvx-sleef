/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_expf8_u10kvx.c --function Sleef_finz_expf8_u10kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 8 --function-input-vector-size 8 --bench \
 *     --no-embedded-bin --target kv3
 *
 */
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float8_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float8_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1008];
static const float external_bench_wrapper_input_table_arg0[1008]  = {
     0.0f, 0x1.2416b2p-112f, 0.0f, 0.0f, 0.0f, 0x1.e6f448p-36f, 0x1.4c0032p-23f,
     0.0f, 0x1.289bf8p-44f, 0x1.7f2c3ap-36f, 0.0f, 0.0f, 0x1.af17ep-65f,
     0x1.4363acp-40f, 0x1.380a12p-122f, 0.0f, 0x1.2ee9e6p-12f, 0.0f, 0.0f,
     0x1.a5f442p-27f, 0.0f, 0x1.a9aa1p-121f, 0x1.736b4cp-56f, 0x1.74e806p-10f, 0.0f,
     0.0f, 0x1.f1b572p-85f, 0x1.c1d36p-22f, 0x1.4c0d92p-21f, 0.0f, 0.0f, 0.0f,
     0x1.0cae3ep-35f, 0.0f, 0x1.e7bf78p-63f, 0.0f, 0x1.4b9108p-117f, 0.0f, 0.0f, 0.0f,
     0x1.a84678p-65f, 0x1.434744p-88f, 0x1.06c048p-12f, 0x1.e5ff3ap-66f,
     0x1.b5b4ecp-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6ffc2p-38f, 0.0f, 0.0f,
     0x1.501f74p-93f, 0.0f, 0x1.d0fb4p-45f, 0.0f, 0x1.37e232p-17f, 0x1.7ceb38p-52f,
     0.0f, 0.0f, 0x1.fdf8b8p-100f, 0.0f, 0.0f, 0.0f, 0x1.ea9bd6p-105f,
     0x1.14dd24p-104f, 0x1.ed1114p-98f, 0x1.078064p-124f, 0x1.039b4cp-14f,
     0x1.485794p-15f, 0x1.04c96p-7f, 0.0f, 0.0f, 0x1.c89ac6p-113f, 0x1.e54cap-8f,
     0x1.3766a2p-56f, 0x1.b45742p-65f, 0x1.6ade36p-62f, 0x1.9110a4p-107f, 0.0f, 0.0f,
     0x1.a80e3cp-55f, 0x1.57cd4ap-84f, 0.0f, 0.0f, 0.0f, 0x1.aae05cp-61f, 0.0f, 0.0f,
     0x1.b334fcp-92f, 0x1.9ad66p-46f, 0x1.2076b6p-91f, 0.0f, 0.0f, 0x1.11303p-67f,
     0.0f, 0.0f, 0x1.661a84p-80f, 0.0f, 0.0f, 0x1.faf604p-41f, 0.0f, 0x1.d273b6p-57f,
     0.0f, 0x1.b4c05p-2f, 0.0f, 0x1.fee866p-84f, 0x1.dd9fbp-1f, 0.0f, 0x1.20dda8p-67f,
     0x1.675b7ap-72f, 0x1.59ccecp-62f, 0x1.73f106p-79f, 0.0f, 0x1.01e4cap-23f, 0.0f,
     0x1.30dcb2p-52f, 0x1.10b246p-65f, 0.0f, 0.0f, 0x1.b60112p-71f, 0x1.86cebcp-10f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.950cfep-66f, 0x1.74098ep-33f, 0x1.ac416ap-48f,
     0.0f, 0x1.d6037ap-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a5a224p-55f,
     0x1.ccfa98p-25f, 0x1.5ce892p-107f, 0.0f, 0x1.b24e04p-99f, 0.0f, 0x1.5d7db6p-5f,
     0.0f, 0.0f, 0.0f, 0x1.92c1dap-105f, 0x1.bdc2c6p-122f, 0x1.dd7428p-114f, 0.0f,
     0.0f, 0x1.e06c5cp-28f, 0.0f, 0x1.f5461ap-21f, 0x1.22aebep-41f, 0.0f, 0.0f,
     0x1.022bdp-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.aacap-114f, 0x1.3439d8p-100f,
     0x1.f1a514p-103f, 0.0f, 0x1.f1b928p-104f, 0.0f, 0.0f, 0x1.fbb4ep-81f,
     0x1.48a38ep-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.27e5c2p-48f, 0x1.101bc8p-7f, 0.0f,
     0.0f, 0x1.ceb014p-57f, 0.0f, 0x1.768e14p-99f, 0.0f, 0.0f, 0x1.55e218p-35f,
     0x1.9f1adp-61f, 0x1.b3988p-70f, 0x1.c722eap-90f, 0x1.5a04aep-33f,
     0x1.70a6d2p-79f, 0.0f, 0x1.9eb5d2p-106f, 0x1.5a840ep-38f, 0x1.66a2c8p-118f,
     0x1.ad22d8p-60f, 0.0f, 0x1.50dd72p-19f, 0x1.4b642cp-82f, 0x1.dd959ap-103f,
     0x1.99445ap-69f, 0x1.8334dap-120f, 0.0f, 0x1.e7f20ap-91f, 0.0f, 0x1.8c3488p-20f,
     0x1.7871ap-112f, 0.0f, 0x1.a17c5p-6f, 0x1.d07a44p-126f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f2a276p-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.086ef4p-45f, 0x1.9a8cf6p-31f, 0.0f,
     0.0f, 0x1.f76adp-85f, 0.0f, 0.0f, 0.0f, 0x1.2a59dep-116f, 0x1.7c5796p-67f, 0.0f,
     0x1.5019e6p-48f, 0x1.8edcb8p-56f, 0x1.e261aap-122f, 0.0f, 0x1.17fd56p-115f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b25e34p-97f, 0.0f, 0x1.28b018p-31f, 0x1.77c3bp-18f,
     0.0f, 0.0f, 0.0f, 0x1.145a82p-25f, 0.0f, 0x1.b16c18p-5f, 0x1.88c458p-49f, 0.0f,
     0x1.e4ae36p-87f, 0x1.407736p-112f, 0.0f, 0x1.e133f6p-111f, 0.0f, 0.0f,
     0x1.4c5592p-44f, 0.0f, 0.0f, 0x1.a66afcp-61f, 0x1.f5574ep-89f, 0.0f, 0.0f, 0.0f,
     0x1.38150ep-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9c7db6p-23f, 0.0f, 0.0f, 0.0f,
     0x1.a9a16cp-19f, 0.0f, 0.0f, 0.0f, 0x1.904d72p-73f, 0.0f, 0x1.fcf456p-72f,
     0x1.f0c9b4p-51f, 0x1.46fd62p-60f, 0x1.8a5804p-117f, 0x1.668b2ep-75f,
     0x1.b9ed54p-35f, 0x1.a31178p-89f, 0x1.93e432p-88f, 0x1.a56b7ap-122f,
     0x1.c1924p-51f, 0x1.503368p-6f, 0x1.851cfap-47f, 0.0f, 0x1.ae9e9p-108f,
     0x1.1d5be6p-78f, 0x1.31f484p-107f, 0.0f, 0.0f, 0x1.253acap-75f, 0.0f, 0.0f,
     0x1.cc36a6p-27f, 0.0f, 0.0f, 0x1.df67f8p-122f, 0.0f, 0x1.e66deap-80f,
     0x1.a0cae6p-61f, 0x1.a58f4p-22f, 0x1.ec95e8p-94f, 0x1.63f3cp-83f, 0.0f, 0.0f,
     0x1.3f7ecp-109f, 0.0f, 0.0f, 0x1.c0e6bp-9f, 0.0f, 0x1.d45276p-20f,
     0x1.bbde94p-41f, 0.0f, 0x1.effd4ap-34f, 0.0f, 0x1.5c899ap-17f, 0x1.ea24eap-94f,
     0.0f, 0.0f, 0x1.fcb82p-73f, 0.0f, 0x1.42d4e2p-84f, 0.0f, 0x1.e51974p-84f,
     0x1.9ef50cp-94f, 0.0f, 0x1.515af4p-114f, 0x1.aba404p-81f, 0x1.fb4ce8p-23f, 0.0f,
     0x1.129488p-24f, 0.0f, 0x1.8fc634p-122f, 0x1.4ac46ep-83f, 0.0f, 0.0f, 0.0f,
     0x1.28906p-105f, 0.0f, 0x1.18315cp-81f, 0.0f, 0.0f, 0x1.d80d3cp-12f,
     0x1.5c528p-59f, 0x1.b70222p-75f, 0.0f, 0x1.65bcbp-11f, 0x1.e509c8p-55f, 0.0f,
     0x1.311e54p-96f, 0x1.26cc9p-112f, 0x1.8e1398p-47f, 0.0f, 0.0f, 0x1.a42c06p-115f,
     0.0f, 0.0f, 0x1.4ef89p-109f, 0.0f, 0.0f, 0x1.69284ep-59f, 0x1.435a7cp-107f, 0.0f,
     0.0f, 0x1.464ebep-5f, 0x1.37539cp-102f, 0x1.97086ap-113f, 0x1.05fe4ap-48f, 0.0f,
     0x1.b18feep-42f, 0.0f, 0.0f, 0x1.5ce624p-40f, 0x1.8928c4p-26f, 0x1.40c316p-40f,
     0x1.3a08cap-103f, 0.0f, 0x1.bf250ep-63f, 0.0f, 0x1.4d7a2cp-93f, 0.0f, 0.0f, 0.0f,
     0x1.d5fa14p-20f, 0x1.df323ep-15f, 0x1.9c6aa6p-107f, 0x1.219592p-25f, 0.0f,
     0x1.e4623p-57f, 0.0f, 0x1.970d48p-2f, 0x1.02b372p-67f, 0x1.e69608p-26f, 0.0f,
     0.0f, 0.0f, 0x1.6fb58p-14f, 0x1.f493d6p-64f, 0.0f, 0.0f, 0x1.08f7cp-107f, 0.0f,
     0x1.d5c5dp-70f, 0x1.65440ep-49f, 0x1.d4028cp-14f, 0.0f, 0.0f, 0x1.f80e76p-24f,
     0.0f, 0x1.a3558p-54f, 0x1.beae2ap-36f, 0.0f, 0x1.daabb8p-82f, 0x1.e5d6dp-115f,
     0.0f, 0.0f, 0x1.d658dcp-118f, 0.0f, 0.0f, 0.0f, 0x1.a5c31p-43f, 0x1.beb73cp-120f,
     0x1.e2f476p-126f, 0.0f, 0.0f, 0x1.7c99aep-77f, 0x1.2c1ad4p-20f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.7bdb5ep-64f, 0.0f, 0x1.3d41ep-66f, 0x1.62230ep-71f, 0.0f,
     0x1.8582f6p-103f, 0.0f, 0.0f, 0x1.08d6d2p-21f, 0.0f, 0x1.3e2ba2p-92f, 0.0f,
     0x1.c59e2p-79f, 0x1.673226p-26f, 0.0f, 0x1.724756p-9f, 0x1.503b2p-5f,
     0x1.f870d2p-35f, 0x1.0eb7p-75f, 0x1.a71c8ap-45f, 0x1.81d4f8p-98f,
     0x1.2f57bcp-69f, 0x1.af67a2p-97f, 0.0f, 0x1.fa0bp-3f, 0x1.0a1d16p-26f,
     0x1.a3b91cp-34f, 0x1.ab7a92p-30f, 0x1.aaba2ep-110f, 0.0f, 0.0f, 0x1.f7abf6p-119f,
     0.0f, 0.0f, 0x1.08bf6ap-70f, 0.0f, 0.0f, 0.0f, 0x1.d4a23ep-122f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.529144p-103f, 0x1.963bdcp-67f, 0.0f, 0x1.950064p-58f, 0.0f,
     0x1.bc0be8p-82f, 0.0f, 0x1.3b8bc6p-1f, 0.0f, 0x1.86550cp-60f, 0.0f, 0.0f, 0.0f,
     0x1.6d049ep-67f, 0.0f, 0x1.e476bcp-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ad21bp-8f, 0.0f, 0x1.c5f5f2p-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4d8886p-63f,
     0.0f, 0.0f, 0x1.19e83ap-119f, 0x1.0a9706p-12f, 0.0f, 0x1.5f59aap-113f, 0.0f,
     0x1.298c2ep-118f, 0.0f, 0.0f, 0x1.d4bbbcp-25f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.07cb52p-116f, 0x1.0ffeb6p-5f, 0x1.5c3f76p-116f, 0.0f, 0x1.d14f2ap-14f,
     0x1.87a8eep-122f, 0x1.43da48p-32f, 0.0f, 0x1.76151ep-113f, 0x1.027ae4p-86f, 0.0f,
     0.0f, 0x1.14db2ap-7f, 0.0f, 0.0f, 0.0f, 0x1.1b9e3p-10f, 0.0f, 0.0f,
     0x1.c8240ep-61f, 0x1.bab754p-112f, 0.0f, 0.0f, 0x1.20bffap-107f, 0x1.40df8cp-41f,
     0.0f, 0x1.5aba36p-25f, 0.0f, 0x1.a98004p-8f, 0.0f, 0x1.50b9e8p-4f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.8de518p-116f, 0.0f, 0x1.55e814p-69f, 0x1.7362fcp-81f, 0.0f,
     0x1.0f5bdep-32f, 0x1.c0cecp-111f, 0x1.b06222p-59f, 0x1.764ebcp-90f, 0x1p0f,
     0x1.e2676ap-108f, 0x1.2a8d0ep-58f, 0.0f, 0.0f, 0.0f, 0x1.617bb6p-90f, 0.0f, 0.0f,
     0.0f, 0x1.653e9cp-30f, 0.0f, 0x1.6f1188p-18f, 0.0f, 0.0f, 0.0f, 0x1.aa3efp-98f,
     0.0f, 0x1.4fdb7ep-20f, 0.0f, 0.0f, 0x1.9a8f0ap-33f, 0x1.91cb5cp-15f, 0.0f,
     0x1.45e1b8p-75f, 0.0f, 0x1.0e63a6p-71f, 0x1.2b06c4p-30f, 0.0f, 0x1.dd84dcp-97f,
     0x1.488ebap-43f, 0.0f, 0x1.4e1558p-106f, 0x1.7bf2c6p-49f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3bcdb8p-30f, 0x1.c97c46p-20f, 0x1.34323ap-3f, 0.0f, 0.0f, 0.0f,
     0x1.d8b5b8p-23f, 0.0f, 0x1.d9f09ap-34f, 0x1.b79242p-108f, 0.0f, 0.0f, 0.0f,
     0x1.7a06ccp-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fbbfccp-59f, 0.0f, 0.0f,
     0x1.bed832p-83f, 0x1.3ea772p-47f, 0x1.c07db8p-17f, 0x1.aa4208p-110f, 0.0f, 0.0f,
     0x1.7b3d58p-124f, 0.0f, 0x1.a5bba6p-89f, 0x1.3e0156p-66f, 0.0f, 0.0f,
     0x1.0aed1ep-20f, 0.0f, 0.0f, 0x1.6daa7ap-76f, 0x1.521472p-42f, 0x1p0f,
     0x1.476e8ap-14f, 0x1.1b5d84p-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.658c06p-92f, 0.0f, 0x1.cc587cp-75f, 0.0f, 0.0f, 0x1.1f2fe4p-86f, 0.0f, 0.0f,
     0x1.3839dep-126f, 0x1.87ebf6p-115f, 0.0f, 0.0f, 0.0f, 0x1.c022b2p-65f, 0.0f,
     0.0f, 0x1.66d96cp-37f, 0x1.726454p-120f, 0x1p0f, 0.0f, 0.0f, 0x1.febbf4p-8f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.2bff1ap-97f, 0x1.dfea38p-3f, 0.0f, 0.0f,
     0.0f, 0x1.6f64p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2a01acp-46f,
     0x1.b55594p-68f, 0x1.8ee76ap-88f, 0x1.368292p-118f, 0x1.096896p-27f, 0.0f,
     0x1.6366c2p-12f, 0.0f, 0x1.a20d0ep-18f, 0.0f, 0x1.ce2974p-22f, 0.0f,
     0x1.eb6252p-1f, 0.0f, 0x1.4c07d2p-82f, 0x1p0f, 0.0f, 0.0f, 0x1.e98ea4p-22f,
     0x1.ab2788p-91f, 0.0f, 0.0f, 0x1.4f1394p-65f, 0x1.d98094p-100f, 0.0f, 0.0f,
     0x1.ac8832p-109f, 0.0f, 0x1.4718c6p-32f, 0x1.2ebbfap-2f, 0.0f, 0x1.5edcep-102f,
     0.0f, 0.0f, 0x1.fc7c9ep-55f, 0.0f, 0.0f, 0.0f, 0x1.15666cp-15f, 0.0f,
     0x1.8ad69ep-38f, 0.0f, 0.0f, 0x1.4fd732p-122f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.174b9ep-17f, 0.0f, 0.0f, 0x1.816ec6p-86f, 0.0f, 0x1.ee717cp-77f,
     0x1.5a23c2p-26f, 0x1.58a03ep-4f, 0.0f, 0x1.f0979cp-25f, 0x1.515e4p-61f,
     0x1.439668p-114f, 0.0f, 0x1.74a61ep-42f, 0x1.7ac756p-76f, 0.0f, 0.0f,
     0x1.819f9cp-96f, 0x1.9e00b4p-57f, 0x1.2949ccp-32f, 0x1.ab6946p-88f, 0.0f,
     0x1.9b2ff8p-28f, 0.0f, 0x1.30609ap-17f, 0x1.27b912p-52f, 0x1.5ad252p-80f, 0.0f,
     0.0f, 0x1.cda844p-109f, 0x1.d739eap-7f, 0.0f, 0x1.73ad3cp-115f, 0x1.449c7p-23f,
     0.0f, 0x1.024374p-82f, 0x1.b10d6ap-70f, 0.0f, 0.0f, 0x1.2298fep-75f,
     0x1.0138f8p-4f, 0x1.e1e1eap-39f, 0x1.5ab7f4p-8f, 0.0f, 0.0f, 0.0f,
     0x1.f17cecp-57f, 0.0f, 0.0f, 0x1.075a1cp-6f, 0.0f, 0x1.066282p-7f,
     0x1.5a27c4p-32f, 0.0f, 0.0f, 0x1.f4e77ap-69f, 0.0f, 0x1.cd4fe2p-118f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b4c182p-74f, 0x1.356c6ep-9f, 0x1.caf9f4p-11f, 0.0f, 0.0f,
     0x1.b5338p-125f, 0.0f, 0x1.733936p-32f, 0x1.03bf7cp-115f, 0x1.145ffcp-55f, 0.0f,
     0x1.f3a04cp-74f, 0.0f, 0x1.c341bap-70f, 0x1.62acc4p-52f, 0.0f, 0x1.14025ap-99f,
     0x1.b6b45ap-37f, 0.0f, 0.0f, 0x1.cae94p-48f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a71668p-2f, 0.0f, 0.0f, 0.0f, 0x1.93a0a2p-114f, 0x1.ac389cp-8f,
     0x1.dc75bap-39f, 0.0f, 0x1.638ca6p-55f, 0.0f, 0.0f, 0x1.6d2f24p-13f, 0.0f, 0.0f,
     0.0f, 0x1.99de64p-35f, 0x1.2b50f8p-23f, 0.0f, 0.0f, 0x1.8e3948p-109f, 0.0f,
     0x1.e68f52p-108f, 0x1.5b6334p-66f, 0x1.af1d7cp-16f, 0.0f, 0x1.d623bp-11f,
     0x1.8c877ep-35f, 0x1.c064bep-43f, 0.0f, 0x1.5b5566p-78f, 0x1.50d64p-79f, 0.0f,
     0x1.80552ep-102f, 0.0f, 0x1.951b7ep-67f, 0x1.476c62p-126f, 0x1.eadeb8p-104f,
     0.0f, 0x1.7af0fcp-60f, 0x1.920e7cp-86f, 0x1.8787e6p-51f, 0.0f, 0.0f,
     0x1.12f4ep-15f, 0x1.a2f2d8p-107f, 0.0f, 0x1.16015ep-20f, 0x1.428ee4p-93f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.39447cp-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.65158p-110f,
     0.0f, 0x1.bddbc2p-112f, 0x1.716d8ep-120f, 0.0f, 0x1.588e6ep-73f, 0.0f, 0.0f,
     0x1.d2d13ap-81f, 0.0f, 0.0f, 0.0f, 0x1.7ab70ep-77f, 0x1.4dd796p-120f,
     0x1.4b63acp-120f, 0x1.1d3be8p-5f, 0.0f, 0.0f, 0x1.8d06a6p-42f, 0.0f, 0.0f,
     0x1.b2953cp-13f, 0x1.f5d778p-49f, 0.0f, 0x1.6f5a1cp-48f, 0.0f, 0.0f, 0.0f,
     0x1.e8ef6ep-99f, 0.0f, 0x1.3eca5ap-91f, 0.0f, 0x1.011ebap-121f, 0x1.469d24p-120f,
     0x1.c8e548p-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.04cbecp-23f, 0.0f, 0.0f,
     0x1.373884p-97f, 0x1.8aa06ep-119f, 0x1.a42dccp-30f, 0.0f, 0.0f, 0.0f,
     0x1.181438p-105f, 0x1.887accp-9f, 0x1.c0406p-1f, 0x1.000a9ep-87f, 0x1.3bc92cp-9f,
     0x1.dfbc0ap-54f, 0.0f, 0x1.3cf24ap-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.61c3b6p-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.75428cp-81f, 0x1.e8993cp-18f,
     0x1.463636p-97f, 0x1.94d474p-118f, 0x1.69cf84p-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b37534p-60f, 0x1.ced5fp-63f, 0.0f, 0x1.8c946cp-65f, 0.0f,
     0x1.5782b2p-118f, 0.0f, 0x1.448ef4p-72f, 0x1.d027p-33f, 0x1.a039c8p-88f, 0.0f,
     0x1.474fd2p-82f, 0.0f, 0.0f, 0x1.eb2022p-88f, 0.0f, 0.0f, 0.0f, 0x1.c1a4fap-6f,
     0.0f, 0x1.dcb294p-109f, 0x1.44c8dap-25f, 0.0f, 0x1.f4d0fp-51f, 0x1.f3b102p-49f,
     0x1.1dc7p-108f, 0x1.48a676p-114f, 0x1.19653ap-23f, 0.0f, 0.0f, 0x1.917524p-12f,
     0x1.59c5e4p-29f, 0.0f, 0.0f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_float8_t global_bench_acc;
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
        ml_float8_t local_acc;
        int32_t i;
        ml_float8_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1008));){
            ml_float8_t tmp0;
            ml_float8_t tmp1;
            ml_float8_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_float8_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            tmp1 = Sleef_finz_expf8_u10kvx(tmp0);
            memcpy(((ml_float8_t*)(external_bench_wrapper_output_table+ i)), &(tmp1), 32);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(8);
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
    cpe_measure = id_tmp / 10080000.0;
    printf("Sleef_finz_expf8_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_finz_expf8_u10kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
