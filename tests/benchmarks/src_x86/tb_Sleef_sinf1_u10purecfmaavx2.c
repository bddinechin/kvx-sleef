/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sinf1_u10purecfma.c --function Sleef_sinf1_u10purecfma \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 --bench \
 *     --no-embedded-bin --target x86_sse2
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
     0.0f, 0x1.d17cfcp-91f, 0x1.22563cp-30f, 0.0f, 0x1.3900c8p-16f, 0.0f, 0.0f,
     0x1.6727fep-107f, 0.0f, 0.0f, 0x1.6b24ecp-111f, 0x1.90d13ep-119f, 0x1.526a4cp-8f,
     0x1.ca7f8ap-37f, 0x1.c4aa6ap-28f, 0x1.f003bap-34f, 0.0f, 0x1.8f9b52p-126f,
     0x1.dac0e4p-79f, 0x1.7346d4p-31f, 0x1.4bd88ep-38f, 0x1.2b767p-44f,
     0x1.4d7e14p-3f, 0x1.e00a64p-33f, 0.0f, 0x1.de2b18p-121f, 0x1.0e817p-94f,
     0x1.6618e6p-107f, 0.0f, 0.0f, 0x1.b80e0cp-59f, 0x1.48d2f4p-50f, 0x1.ae1a22p-98f,
     0.0f, 0.0f, 0x1.a07ad2p-31f, 0.0f, 0x1.3b7b6ap-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8d5d24p-81f, 0.0f, 0x1.d4ebdcp-84f, 0.0f, 0x1.31303ep-35f, 0.0f,
     0x1.ccf9acp-121f, 0.0f, 0x1.a04f1p-117f, 0x1.5223p-84f, 0x1.97697cp-15f, 0.0f,
     0x1.2b4248p-10f, 0x1.2077e4p-67f, 0.0f, 0x1.af070ap-82f, 0x1.8de49ep-15f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e957ap-69f, 0.0f, 0x1.79dbe8p-78f, 0.0f, 0.0f,
     0x1.25b0dp-15f, 0x1.adc158p-121f, 0x1.e647c6p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f2baa2p-25f, 0x1.c81ce6p-76f, 0.0f, 0.0f, 0.0f, 0x1.01007cp-86f, 0.0f, 0.0f,
     0x1.5c2b9cp-103f, 0x1.b0cdecp-9f, 0.0f, 0.0f, 0x1.90e69ap-41f, 0x1.9644a6p-73f,
     0.0f, 0x1.a476aap-42f, 0.0f, 0.0f, 0.0f, 0x1.2bbde8p-117f, 0.0f, 0.0f, 0.0f,
     0x1.5a67eep-42f, 0x1.4ef302p-38f, 0x1.1b8cfep-102f, 0.0f, 0x1.096752p-96f, 0.0f,
     0x1.46006cp-5f, 0.0f, 0x1.dbe466p-80f, 0x1.b95f5ep-91f, 0x1p0f, 0x1.7abccp-71f,
     0.0f, 0x1.b7b15p-60f, 0.0f, 0.0f, 0x1.c9213p-55f, 0.0f, 0x1.995562p-121f, 0.0f,
     0.0f, 0.0f, 0x1.df713p-23f, 0x1.354db4p-29f, 0x1.aac296p-21f, 0x1.41e4f4p-3f,
     0x1.bd947cp-7f, 0x1.ba6d1p-35f, 0x1.aaff74p-41f, 0.0f, 0.0f, 0.0f,
     0x1.079dcep-98f, 0.0f, 0x1.2664acp-78f, 0.0f, 0.0f, 0.0f, 0x1.1cab84p-125f, 0.0f,
     0x1.79ee7ep-118f, 0.0f, 0.0f, 0.0f, 0x1.7419dp-35f, 0x1.e16a2p-6f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a834e6p-118f, 0.0f, 0.0f, 0.0f, 0x1.0405bep-30f,
     0x1.51b764p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.56e022p-103f, 0.0f,
     0x1.77138ap-107f, 0.0f, 0x1.e9ff72p-91f, 0.0f, 0x1.52e112p-89f, 0.0f, 0.0f, 0.0f,
     0x1.096658p-41f, 0x1.200286p-91f, 0x1.2e68cp-40f, 0.0f, 0.0f, 0x1.04935p-39f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.64372ep-47f, 0.0f, 0x1.f086ap-5f, 0x1.bc91bcp-27f,
     0x1.73c862p-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5dfdfp-110f, 0x1.611672p-81f,
     0x1.d3cb56p-19f, 0.0f, 0x1.f02488p-32f, 0x1.226b3ep-22f, 0x1.71408cp-26f, 0.0f,
     0x1.28efc4p-99f, 0x1.0e475ap-49f, 0.0f, 0x1.eda85p-81f, 0x1.6d2132p-45f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3e543cp-80f, 0x1.0072dp-91f,
     0.0f, 0x1.73e5ccp-7f, 0x1.086044p-106f, 0x1.50de82p-104f, 0x1.09e116p-93f, 0.0f,
     0.0f, 0.0f, 0x1.6fb5fcp-93f, 0x1.ff0106p-63f, 0.0f, 0x1.9c1066p-34f, 0.0f, 0.0f,
     0x1.cb19c2p-22f, 0x1.d061f4p-83f, 0x1.bf39bep-88f, 0x1.de5d0cp-8f, 0.0f,
     0x1.bc44d2p-56f, 0x1.6a98cep-106f, 0x1.63894ep-113f, 0x1.3f28aap-71f, 0.0f,
     0x1.883ac8p-36f, 0.0f, 0x1.fb8a3p-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a09e38p-60f, 0x1.93a67p-102f, 0x1.9a2c58p-97f, 0x1.13d81ep-97f,
     0x1.7f605ap-88f, 0.0f, 0x1.bf6012p-12f, 0.0f, 0x1.660736p-51f, 0x1.ee1522p-5f,
     0.0f, 0x1.bd932cp-92f, 0x1.a1997cp-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.deb092p-73f,
     0.0f, 0x1.5d8b86p-75f, 0x1.503f4ep-114f, 0.0f, 0.0f, 0x1.a29186p-12f, 0.0f,
     0x1.c72224p-57f, 0.0f, 0.0f, 0x1.f61e6p-60f, 0.0f, 0.0f, 0x1.eaa686p-70f, 0.0f,
     0x1.9766e4p-7f, 0x1.06c476p-4f, 0x1.4f3cc2p-44f, 0.0f, 0.0f, 0.0f,
     0x1.949566p-39f, 0.0f, 0.0f, 0x1.9a08cep-16f, 0.0f, 0x1.2f7e9cp-119f,
     0x1.30f638p-59f, 0x1.aa97fp-117f, 0x1.4b71ep-94f, 0.0f, 0.0f, 0x1.f67532p-37f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c36e8cp-68f, 0x1.ac9482p-53f, 0.0f,
     0x1.eecd4cp-68f, 0x1.a43168p-2f, 0.0f, 0.0f, 0x1.a606d4p-98f, 0.0f, 0.0f,
     0x1.fc58c8p-103f, 0x1.b1ba94p-106f, 0x1.7f7d06p-88f, 0.0f, 0x1.8f4942p-38f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ffb77ep-103f, 0.0f, 0.0f, 0x1.b33414p-42f,
     0x1.198062p-112f, 0.0f, 0x1.6bc572p-95f, 0.0f, 0x1.809f6ap-123f, 0x1.078f48p-32f,
     0.0f, 0.0f, 0x1.87ae1p-47f, 0.0f, 0x1.03428cp-1f, 0.0f, 0x1.601cd2p-32f, 0.0f,
     0x1.9c705ap-63f, 0.0f, 0x1.9277aap-56f, 0x1.a604cep-93f, 0x1.d1f39ap-24f,
     0x1.b3001ap-72f, 0x1.014bfep-71f, 0x1.ee9414p-78f, 0.0f, 0.0f, 0x1.68e02ap-85f,
     0x1.f8a07cp-74f, 0x1.36ddfp-116f, 0.0f, 0.0f, 0x1.1394ap-118f, 0x1.31ba94p-89f,
     0x1.529394p-20f, 0.0f, 0x1.384272p-5f, 0.0f, 0x1.3fb0c8p-25f, 0.0f, 0.0f,
     0x1.73f9f2p-92f, 0x1.ec8a6cp-85f, 0.0f, 0.0f, 0x1.3ec0cp-68f, 0x1.f453ap-99f,
     0x1.918592p-9f, 0x1.b5813ap-122f, 0x1.2ce436p-22f, 0.0f, 0x1.46767ap-66f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.58cdf6p-58f, 0.0f, 0x1.fde22cp-33f, 0x1.e67534p-86f, 0.0f,
     0.0f, 0x1.bb7576p-12f, 0.0f, 0x1.92f3p-17f, 0.0f, 0x1.03aeb4p-55f, 0.0f,
     0x1.cb0098p-63f, 0x1.cf34ap-114f, 0x1.976b4p-31f, 0.0f, 0x1.cc9194p-49f,
     0x1.fa3ef8p-23f, 0x1.4609fap-99f, 0.0f, 0x1.391adp-124f, 0x1.2a9f3ep-32f, 0.0f,
     0x1.04f682p-95f, 0x1.ed32b2p-20f, 0.0f, 0x1.468862p-68f, 0x1.f59706p-83f, 0.0f,
     0x1.45059p-53f, 0x1.5c65b8p-27f, 0x1.a87e6cp-122f, 0x1.b272acp-45f, 0.0f,
     0x1.860ea4p-78f, 0x1.a21c3p-110f, 0x1.14638p-86f, 0.0f, 0x1.5a9ff2p-108f,
     0x1.efa2d6p-40f, 0x1.fc236p-16f, 0.0f, 0x1.e9c56p-87f, 0x1.fa0358p-49f,
     0x1.cfde54p-36f, 0.0f, 0x1.c5cd94p-33f, 0.0f, 0.0f, 0x1.0a876ap-23f,
     0x1.baa88ep-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a825b8p-111f, 0x1.a7e2a4p-73f,
     0x1.97655ep-64f, 0.0f, 0x1.7cd152p-75f, 0x1.120286p-50f, 0x1.bb1a78p-70f, 0.0f,
     0x1.00b0bp-38f, 0x1.730c7p-41f, 0x1.700c3cp-20f, 0x1.ab92dp-60f, 0x1.76685p-19f,
     0.0f, 0x1.865624p-78f, 0.0f, 0x1p0f, 0.0f, 0x1.ca4adcp-49f, 0x1.5629f4p-125f,
     0.0f, 0x1.57ef24p-9f, 0x1.bd56aep-65f, 0.0f, 0x1.2cf1cap-45f, 0x1.681226p-1f,
     0.0f, 0.0f, 0.0f, 0x1.8cf54ep-27f, 0x1.9839fcp-72f, 0.0f, 0x1.aee67ep-105f,
     0x1.5be098p-67f, 0x1.77eaf2p-54f, 0x1.a5e394p-88f, 0x1.36e944p-15f,
     0x1.f26a0ap-15f, 0.0f, 0x1.ad4e52p-31f, 0x1.d64c46p-69f, 0x1.8809cap-55f,
     0x1.fa2f18p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ebc94cp-17f, 0.0f,
     0x1.ccfedp-119f, 0.0f, 0.0f, 0x1.41dec4p-97f, 0.0f, 0.0f, 0x1p0f, 0.0f,
     0x1.e343b6p-111f, 0.0f, 0x1.79de44p-46f, 0.0f, 0x1.0d3474p-5f, 0x1.5ad0fep-3f,
     0x1.f59c7cp-123f, 0x1.110474p-81f, 0.0f, 0x1.714f34p-111f, 0x1.295f0ep-18f,
     0x1.83d87ep-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.80690cp-20f, 0x1.f6b6cap-57f, 0.0f, 0.0f, 0.0f, 0x1.ea628cp-12f, 0.0f,
     0x1.0be118p-46f, 0x1.04699ap-23f, 0x1.e59c44p-49f, 0x1.7c38fep-40f, 0.0f, 0.0f,
     0x1p0f, 0x1.715278p-49f, 0.0f, 0.0f, 0x1.1e8e52p-3f, 0x1.2b71ecp-5f,
     0x1.e81eb8p-1f, 0.0f, 0x1.f2596ep-115f, 0.0f, 0x1.1155e8p-49f, 0.0f,
     0x1.f7d58p-53f, 0x1.2ffe5cp-70f, 0x1.61f15ep-52f, 0x1.8f573cp-25f,
     0x1.3a6346p-75f, 0x1.8d9452p-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fca61ep-39f,
     0x1.3dd764p-29f, 0x1.930a24p-25f, 0x1.d6efcp-112f, 0x1.e3410cp-118f, 0.0f,
     0x1.435f8p-74f, 0x1.9e6294p-90f, 0x1.05d78p-11f, 0x1.745432p-29f,
     0x1.0b4462p-50f, 0x1.861646p-100f, 0x1.c0662ap-14f, 0.0f, 0x1.da443ep-6f,
     0x1.690508p-44f, 0x1.18ff92p-79f, 0x1.89f812p-21f, 0.0f, 0x1.b36d5cp-47f,
     0x1.fd3184p-123f, 0x1.281e1cp-13f, 0x1.228cb2p-112f, 0x1.b26acep-91f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.63bce2p-102f, 0.0f, 0.0f, 0x1.1f49a6p-96f, 0x1.c75edp-106f, 0.0f,
     0x1.cbee28p-30f, 0x1.e89c4ap-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.0605ecp-66f, 0.0f, 0.0f, 0.0f, 0x1.a06d54p-12f, 0x1.af4c6ap-63f, 0.0f,
     0x1.d479dcp-89f, 0.0f, 0.0f, 0x1.77272ep-25f, 0x1.bcbfbp-54f, 0x1.8c093ap-76f,
     0x1.cd7ecap-115f, 0.0f, 0x1.f87494p-64f, 0.0f, 0x1.242372p-82f, 0x1.f6914p-15f,
     0x1.ae246ap-2f, 0x1.2ef194p-75f, 0.0f, 0x1.3fd508p-89f, 0.0f, 0.0f,
     0x1.0daa72p-108f, 0x1.ab95c6p-33f, 0.0f, 0x1.7f3488p-118f, 0.0f,
     0x1.b4251ep-101f, 0.0f, 0.0f, 0x1.c15d84p-119f, 0.0f, 0.0f, 0x1.71f294p-104f,
     0.0f, 0x1.c42eeap-83f, 0x1.368ec2p-112f, 0.0f, 0.0f, 0x1.336c98p-22f, 0.0f, 0.0f,
     0x1p0f, 0.0f, 0.0f, 0x1.076922p-68f, 0.0f, 0.0f, 0x1.9f07acp-116f,
     0x1.f59216p-107f, 0.0f, 0.0f, 0x1.fce60ap-35f, 0x1.8f127ap-64f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.53a37ep-24f, 0x1.7d168p-13f, 0x1.b374bp-89f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9ee684p-89f, 0.0f, 0x1.04d60ap-52f, 0x1.6aeb2ap-104f, 0x1.b0ce2ep-115f, 0.0f,
     0.0f, 0x1.6fdf58p-104f, 0x1.920bfep-76f, 0x1.cefafep-39f, 0x1.5f8214p-48f, 0.0f,
     0x1.d17f42p-122f, 0x1.1e6f5ep-45f, 0.0f, 0x1.d0a7a6p-89f, 0.0f, 0.0f, 0.0f,
     0x1.ea7656p-94f, 0x1.c36702p-53f, 0x1.dabdf6p-94f, 0x1.9ad25cp-64f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0cbc2ep-80f, 0x1.7f854cp-31f, 0x1.a82ceap-87f,
     0.0f, 0x1.d623cp-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c8b272p-78f, 0x1.9e908ap-74f,
     0x1.ca0be2p-118f, 0x1.922a72p-11f, 0.0f, 0x1.a03fcp-47f, 0x1.7d8794p-44f,
     0x1.54d9eap-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.835208p-41f,
     0x1.54eecp-77f, 0.0f, 0.0f, 0.0f, 0x1.469b7cp-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3b6f3ap-26f, 0.0f, 0.0f, 0x1.e82b1p-40f, 0.0f, 0x1.791b6cp-54f,
     0x1.553d16p-61f, 0x1.be6782p-54f, 0.0f, 0x1.7d3cbp-118f, 0x1.ce3484p-89f,
     0x1.fd9202p-83f, 0x1.bd5674p-21f, 0.0f, 0.0f, 0.0f, 0x1.4bd1a8p-117f,
     0x1.d1fb32p-109f, 0.0f, 0x1.268dep-7f, 0.0f, 0x1.c6fed6p-22f, 0x1.e58de2p-103f,
     0.0f, 0x1.4bdd02p-90f, 0x1.0d0758p-98f, 0.0f, 0x1.79a0eap-18f, 0.0f,
     0x1.830832p-4f, 0.0f, 0x1.211ebcp-122f, 0x1.bf3cbcp-107f, 0x1.af262ep-36f, 0.0f,
     0x1.5386fp-18f, 0x1.75d0bep-118f, 0.0f, 0.0f, 0x1.8f2198p-71f, 0x1.f5ab26p-92f,
     0x1.f31cd4p-110f, 0x1.22ac1p-84f, 0.0f, 0x1.e4b992p-87f, 0.0f, 0.0f, 0.0f,
     0x1.d2f362p-15f, 0.0f, 0.0f, 0x1.c45b74p-101f, 0x1.cdecb6p-81f, 0.0f,
     0x1.59530ep-83f, 0.0f, 0.0f, 0.0f, 0x1.eb1128p-8f, 0x1.84a7aap-69f, 0.0f,
     0x1.66b338p-119f, 0.0f, 0.0f, 0.0f, 0x1.bfd2e4p-38f, 0.0f, 0x1.31044cp-62f,
     0x1.de3f34p-27f, 0x1.f9de06p-99f, 0.0f, 0x1.ece958p-67f, 0x1.fb19fap-79f, 0.0f,
     0.0f, 0x1.edb0cap-111f, 0x1.3aa796p-32f, 0.0f, 0x1.5b5b3p-40f, 0x1.e56316p-58f,
     0x1.538d9ep-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.28e6cp-43f, 0x1.3e04a8p-56f,
     0x1.371858p-121f, 0.0f, 0x1.2d9aap-116f, 0.0f, 0.0f, 0x1.b80686p-22f,
     0x1.3a8876p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0a12d2p-45f,
     0x1.877d64p-44f, 0.0f, 0x1.ff36ep-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c9f816p-118f, 0x1.6b3ef6p-7f, 0x1.ba944ap-72f, 0.0f, 0.0f, 0x1.83fbe8p-42f,
     0.0f, 0.0f, 0x1.3c413ap-119f, 0.0f, 0x1.e388c2p-27f, 0.0f, 0x1.480594p-24f, 0.0f,
     0x1.518a06p-20f, 0.0f, 0x1.9b1b1ep-33f, 0x1.91c17ap-1f, 0x1.c979a6p-108f, 0.0f,
     0x1.381a36p-63f, 0.0f, 0.0f, 0x1.e6371p-30f, 0x1.0655dcp-102f, 0.0f, 0.0f, 0.0f,
     0x1.f43bcap-68f, 0.0f, 0x1.412816p-55f, 0x1.46437p-7f, 0.0f, 0x1.86bcc4p-119f,
     0x1.d85016p-33f, 0x1.5c633ep-35f, 0x1.67b62ep-73f, 0x1.2fcaecp-119f,
     0x1.e63bb6p-117f, 0x1.a138p-91f, 0x1.f3f31cp-53f, 0x1.92d476p-97f, 0.0f, 0.0f,
     0x1.436ceep-54f, 0.0f, 0x1.03b08ep-114f, 0.0f, 0x1.718466p-13f, 0.0f,
     0x1.352e1ep-83f, 0x1.1396bap-84f, 0x1.3fe88ap-112f, 0x1.74206ep-22f, 0.0f, 0.0f,
     0x1.79c0ap-52f, 0.0f, 0x1.ada424p-126f, 0x1.776a3ap-106f, 0x1.1fd9f6p-110f,
     0x1.3fa80ep-52f, 0x1.bca73cp-104f, 0.0f, 0x1.b317dp-68f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1bfa1cp-69f, 0.0f, 0x1.92217ap-123f, 0.0f, 0.0f, 0x1.9ec918p-36f,
     0x1.a5886p-77f, 0x1.263124p-74f, 0x1.76261ep-90f, 0x1.4aacaap-29f, 0.0f,
     0x1.57e2acp-55f, 0x1.efcb0ep-84f, 0.0f, 0x1.8f6e7ep-73f, 0.0f, 0x1.a89082p-16f,
     0x1.7dc8d2p-47f, 0x1.559656p-34f, 0x1.70244cp-14f, 0.0f, 0x1.61f3f2p-44f,
     0x1.ae5708p-9f, 0.0f, 0.0f, 0x1.f5d002p-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.d75f0ep-109f, 0x1.bb536ap-119f, 0x1.4b8ae6p-63f, 0x1.532b52p-31f, 0.0f,
     0x1.2c9406p-91f, 0x1.f4707ap-21f, 0.0f, 0x1.f7a0fep-22f, 0x1.e5fc3p-41f,
     0x1.837522p-124f, 0.0f, 0.0f, 0x1.fb54d4p-56f, 0x1.4b35b6p-105f, 0.0f,
     0x1.672514p-48f, 0x1.f97606p-52f, 0x1.b9677p-23f, 0x1.6c8e6p-120f,
     0x1.57a2eep-35f, 0.0f, 0x1p0f, 0x1.6bbf04p-62f, 0x1.d319b4p-125f, 0x1.cae96ap-8f,
     0x1.0eb1a4p-47f, 0.0f, 0.0f, 0x1.8a2c06p-82f, 0x1.33dd68p-110f, 0.0f,
     0x1.0642c6p-125f, 0.0f, 0.0f, 0x1.d18a86p-74f, 0x1.eb7194p-72f, 0.0f, 0.0f, 0.0f,
     0x1.f04816p-18f, 0x1.6d944ap-39f, 0.0f, 0x1.0b6e62p-109f, 0.0f, 0.0f, 0.0f,
     0x1.22d0fcp-20f, 0x1.3bf9c6p-56f, 0x1.a71a12p-106f, 0.0f, 0x1.fb20dap-29f,
     0x1.300e4ap-21f, 0.0f, 0x1.f32344p-75f, 0.0f, 0.0f, 0.0f
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
            tmp1 = Sleef_sinf1_u10purecfma(tmp0);
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
    printf("Sleef_sinf1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_sinf1_u10purecfma bench acc %a\n", global_bench_acc);
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
