/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_truncf4_avx2128.c --function Sleef_finz_truncf4_avx2128 \
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
     0.0f, 0.0f, 0.0f, 0x1.641484p-61f, 0x1.20006ep-113f, 0.0f, 0x1.4c6f5ep-56f,
     0x1.588346p-14f, 0.0f, 0x1.58a6f6p-31f, 0x1.5b4a36p-52f, 0.0f, 0.0f,
     0x1.eab60ap-4f, 0x1.24c8c4p-116f, 0.0f, 0x1.ccbbcp-116f, 0x1.fe96b8p-55f,
     0x1.312f1cp-17f, 0.0f, 0x1.b0cc96p-10f, 0x1.557d72p-44f, 0.0f, 0x1.a62942p-107f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f21176p-123f, 0.0f, 0x1.895756p-107f,
     0x1.c09e76p-119f, 0.0f, 0x1.fce45p-110f, 0.0f, 0x1.5394a2p-108f, 0.0f,
     0x1.f7388ep-69f, 0x1.7ba1a4p-5f, 0.0f, 0x1.24173ep-50f, 0.0f, 0.0f, 0.0f,
     0x1.2192bcp-19f, 0.0f, 0x1.bffd46p-5f, 0.0f, 0.0f, 0x1p0f, 0x1.dc8ccap-100f,
     0x1.551182p-48f, 0x1.9ca838p-7f, 0x1.741a9ep-116f, 0x1.609b22p-60f, 0.0f, 0.0f,
     0x1.3cba6ap-3f, 0.0f, 0x1.042388p-112f, 0x1.09ea92p-103f, 0x1.361f2cp-43f, 0.0f,
     0.0f, 0x1.8efe98p-30f, 0.0f, 0x1.28c438p-101f, 0.0f, 0.0f, 0x1.68c874p-15f, 0.0f,
     0.0f, 0.0f, 0x1.4e977ap-100f, 0.0f, 0.0f, 0x1.9f294p-34f, 0x1.93c976p-45f,
     0x1.644f76p-48f, 0x1.dabf3cp-53f, 0x1.5801eap-111f, 0x1.738da4p-20f,
     0x1.61bccp-12f, 0x1.332518p-16f, 0x1.a12fa4p-84f, 0x1.6681bp-39f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.545f4ep-124f, 0x1.30c918p-42f, 0x1.2c5c08p-58f,
     0x1.72f67ep-114f, 0x1.2721c2p-28f, 0.0f, 0x1.49484ep-101f, 0.0f, 0.0f,
     0x1.c90c68p-3f, 0x1.a50498p-26f, 0.0f, 0.0f, 0x1.cf9a7ap-9f, 0x1.dfe7d6p-14f,
     0.0f, 0x1.a7963p-23f, 0.0f, 0x1.da986ep-120f, 0x1.20aefcp-102f, 0x1.926bc2p-3f,
     0.0f, 0.0f, 0x1.5c3976p-49f, 0x1.acae92p-61f, 0.0f, 0.0f, 0x1.1cba28p-84f, 0.0f,
     0.0f, 0x1.93522ap-60f, 0.0f, 0x1.5a1638p-56f, 0x1.c6fb88p-42f, 0x1.3e3caep-8f,
     0x1.bb43f2p-75f, 0x1.bcbd3ap-114f, 0x1.c435d8p-44f, 0x1.b3e804p-12f, 0.0f,
     0x1.9647b4p-95f, 0.0f, 0.0f, 0x1.581bep-91f, 0.0f, 0.0f, 0x1.2db9ccp-68f,
     0x1.90898ep-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eeadf4p-43f, 0x1.756208p-90f, 0.0f,
     0.0f, 0.0f, 0x1.51fbc2p-56f, 0x1.608d8ep-80f, 0.0f, 0.0f, 0x1.16712cp-16f, 0.0f,
     0.0f, 0x1.46b694p-38f, 0.0f, 0.0f, 0x1.bb91eap-40f, 0x1.1a756ep-36f,
     0x1.bf9c66p-1f, 0.0f, 0.0f, 0.0f, 0x1.8d66d6p-44f, 0.0f, 0x1.2f90ep-59f,
     0x1.4a06b2p-116f, 0x1.5b9112p-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.347ca8p-5f, 0.0f,
     0x1.92df98p-48f, 0.0f, 0.0f, 0x1.332ce6p-50f, 0.0f, 0x1.559006p-115f, 0.0f,
     0x1.43a26ep-118f, 0.0f, 0.0f, 0x1.fb2cf4p-77f, 0.0f, 0x1.80c454p-88f, 0.0f, 0.0f,
     0.0f, 0x1.c6aeb4p-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.20592p-91f, 0x1.11b8d8p-50f,
     0x1.eb179p-14f, 0x1.e23f56p-11f, 0.0f, 0x1.ebc65cp-10f, 0.0f, 0.0f,
     0x1.117fa8p-87f, 0x1.6c05d8p-65f, 0x1.6694p-88f, 0x1.26eec4p-32f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.92e76cp-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ccfd58p-110f, 0.0f,
     0x1.d8e036p-87f, 0.0f, 0.0f, 0.0f, 0x1.eaad26p-74f, 0.0f, 0x1.ba0564p-107f, 0.0f,
     0.0f, 0x1.4b12ap-61f, 0.0f, 0x1.028544p-114f, 0.0f, 0x1.a6034p-112f, 0.0f, 0.0f,
     0x1.0bd00ep-26f, 0.0f, 0x1.84084cp-106f, 0x1.6fccep-46f, 0.0f, 0x1.f2d5ecp-99f,
     0.0f, 0x1.f24278p-57f, 0.0f, 0x1.964688p-13f, 0.0f, 0.0f, 0.0f, 0x1.8ddd46p-51f,
     0x1.a44e16p-86f, 0x1.71cb46p-95f, 0.0f, 0.0f, 0.0f, 0x1.06cf2ep-95f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.5aced4p-91f, 0.0f, 0.0f, 0x1.a009b6p-33f, 0.0f, 0x1.80128cp-78f,
     0.0f, 0x1.c121a8p-6f, 0x1.22406p-56f, 0x1.8c8eaap-115f, 0x1.b032p-114f, 0.0f,
     0x1.29a17p-124f, 0.0f, 0x1.730e12p-33f, 0.0f, 0x1.1c04a8p-68f, 0.0f, 0.0f,
     0x1.dbe19ep-68f, 0x1.81f9e6p-36f, 0x1.451aa8p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.700fb6p-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ff8f1p-63f, 0.0f,
     0x1.9a645ap-66f, 0x1.c605cp-38f, 0.0f, 0x1.d19b84p-100f, 0.0f, 0.0f,
     0x1.4299ccp-60f, 0.0f, 0.0f, 0.0f, 0x1.fd0772p-4f, 0x1.fd95ccp-104f,
     0x1.08015ap-34f, 0x1.392426p-93f, 0x1.468c88p-82f, 0.0f, 0x1.480ebp-60f,
     0x1.c4e8a6p-88f, 0x1.f0362ep-21f, 0.0f, 0x1.2479fp-88f, 0.0f, 0.0f, 0.0f,
     0x1.b06b8ap-116f, 0x1.b4e074p-64f, 0.0f, 0.0f, 0x1.b09b54p-10f, 0.0f,
     0x1.fd9206p-48f, 0.0f, 0x1.e9b79ap-45f, 0.0f, 0.0f, 0.0f, 0x1.17f6aep-125f, 0.0f,
     0.0f, 0x1.3abedep-76f, 0x1.41539ap-106f, 0x1.16590cp-30f, 0.0f, 0x1.7a5cc2p-16f,
     0x1.9d13b8p-126f, 0.0f, 0x1.25716ap-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2115bcp-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e3cfa8p-51f, 0.0f,
     0x1.e0413ep-37f, 0x1.d992a6p-39f, 0.0f, 0x1.5d5a9ap-90f, 0x1.c0b4d6p-26f, 0.0f,
     0x1.17921ap-105f, 0x1p0f, 0x1.3740c8p-29f, 0x1.0eed74p-11f, 0.0f,
     0x1.0e62bep-49f, 0x1.df7698p-124f, 0x1.cdee12p-85f, 0.0f, 0x1.120e5ap-125f, 0.0f,
     0.0f, 0.0f, 0x1.7645a4p-118f, 0.0f, 0x1.7c9e5ep-117f, 0.0f, 0.0f,
     0x1.955828p-48f, 0.0f, 0.0f, 0x1.0431e2p-112f, 0.0f, 0.0f, 0x1.339ff4p-71f, 0.0f,
     0.0f, 0x1.1c956ap-74f, 0x1.6e57a8p-26f, 0.0f, 0.0f, 0x1.7a7f2p-53f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7d70e2p-11f, 0.0f, 0.0f, 0x1.e043fcp-7f, 0.0f,
     0x1.e4d31ep-16f, 0.0f, 0.0f, 0x1.487b2ep-58f, 0.0f, 0x1.8a1834p-111f,
     0x1.090958p-91f, 0x1.b52fcp-111f, 0.0f, 0.0f, 0x1.35b0cp-47f, 0.0f,
     0x1.58b028p-93f, 0x1.6cc41ep-17f, 0x1.84ef72p-12f, 0.0f, 0x1.831c1cp-30f,
     0x1.c8c1f8p-50f, 0x1.632cdap-125f, 0x1.bef4ccp-28f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1285fap-100f, 0.0f, 0.0f, 0.0f, 0x1.5dd3b2p-91f, 0.0f, 0x1.ab65cep-97f,
     0x1.b76f8p-56f, 0x1.39d7eep-18f, 0.0f, 0x1.e9ee32p-125f, 0x1.37f5f6p-124f, 0.0f,
     0x1.c3d3cep-37f, 0.0f, 0x1.d3e5d8p-65f, 0.0f, 0.0f, 0x1.548982p-13f, 0.0f,
     0x1.8760b8p-47f, 0.0f, 0.0f, 0x1.d92a24p-47f, 0.0f, 0x1.dc70e6p-70f, 0.0f, 0.0f,
     0x1.30eb82p-67f, 0.0f, 0.0f, 0.0f, 0x1.38616cp-80f, 0.0f, 0x1.3e3c8ap-65f,
     0x1.3e01fcp-71f, 0x1.4b71dp-3f, 0x1.4fdc44p-116f, 0x1.cab36p-45f,
     0x1.0e3f3ep-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f577e4p-34f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1c55a6p-23f, 0.0f, 0x1.77d8d6p-85f, 0x1.590494p-9f, 0x1.859aa8p-70f,
     0x1.5ac5b4p-15f, 0x1.db150ap-81f, 0.0f, 0.0f, 0x1.ac8536p-20f, 0x1.3ae17p-97f,
     0.0f, 0.0f, 0.0f, 0x1.23f2ecp-16f, 0x1.429266p-107f, 0x1.322f18p-77f, 0.0f, 0.0f,
     0x1.9a30eap-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.13a5cap-45f, 0x1p0f, 0.0f,
     0x1.e618bap-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a47c2cp-112f, 0x1.f076a4p-48f,
     0x1.27dc4p-13f, 0x1.4d3934p-10f, 0x1.740b9cp-100f, 0.0f, 0.0f, 0x1.6b89fap-33f,
     0x1.a08e5p-18f, 0x1p0f, 0x1.0c16d2p-54f, 0.0f, 0x1.a8b4p-82f, 0x1.bfad6cp-16f,
     0.0f, 0x1.f71944p-61f, 0x1.86f4b2p-76f, 0.0f, 0.0f, 0.0f, 0x1.3fb054p-92f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.91f9d8p-9f, 0x1.7a457ap-64f, 0x1.e62a38p-99f, 0.0f, 0.0f,
     0.0f, 0x1.8f6192p-107f, 0.0f, 0.0f, 0x1.53b5bp-20f, 0x1.5c1d5ep-17f,
     0x1.653d5p-86f, 0x1.5d1088p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.49a4fcp-12f,
     0.0f, 0.0f, 0x1.457ccep-70f, 0x1.658482p-17f, 0x1.84a25ep-102f, 0x1.1496aap-123f,
     0.0f, 0.0f, 0.0f, 0x1.9a263cp-116f, 0x1.35838ep-23f, 0.0f, 0x1.122c58p-42f,
     0x1.485db8p-21f, 0.0f, 0x1.0c28fcp-24f, 0x1.634d6cp-83f, 0.0f, 0x1.cf53c2p-25f,
     0x1.ed460ap-95f, 0.0f, 0.0f, 0x1.bda72p-25f, 0x1.e57eaep-117f, 0x1.cea5c4p-110f,
     0.0f, 0x1.0c459p-67f, 0.0f, 0x1.3257eap-53f, 0.0f, 0x1.136b82p-53f, 0.0f, 0.0f,
     0x1.cfe8d8p-94f, 0.0f, 0.0f, 0x1.979904p-18f, 0.0f, 0x1p0f, 0.0f,
     0x1.acc902p-52f, 0x1.bca73ep-116f, 0.0f, 0x1.7a51bcp-113f, 0x1.3d0bf2p-85f,
     0x1.a8f81p-85f, 0x1.a1f2dcp-59f, 0x1.d7b6cp-55f, 0x1.c3349ep-8f, 0.0f, 0.0f,
     0.0f, 0x1.71f356p-103f, 0x1.d98998p-81f, 0x1.e5b2eap-33f, 0x1.75379ep-42f, 0.0f,
     0x1.abb648p-26f, 0.0f, 0x1.8e563p-80f, 0.0f, 0x1.b723b8p-19f, 0x1.b234e4p-84f,
     0.0f, 0.0f, 0.0f, 0x1.1d6e6p-63f, 0.0f, 0x1.bb9334p-6f, 0x1.3d6e6cp-43f,
     0x1.adf16ep-31f, 0x1.1e4f08p-10f, 0x1.6700aep-93f, 0.0f, 0.0f, 0x1.0248cp-36f,
     0.0f, 0.0f, 0x1.94a05ep-61f, 0.0f, 0.0f, 0x1.dc448p-37f, 0x1.445b8ep-59f, 0.0f,
     0x1.ed44aep-121f, 0.0f, 0x1.afa166p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ae97a8p-75f,
     0.0f, 0x1.da894ap-18f, 0.0f, 0.0f, 0x1.e05f14p-81f, 0x1.2f0bdap-118f,
     0x1.cc88f2p-126f, 0x1.a5405ep-59f, 0.0f, 0x1.a2341ep-44f, 0.0f, 0x1.4307d8p-90f,
     0.0f, 0.0f, 0x1.190fe2p-12f, 0x1.c38346p-110f, 0.0f, 0x1.ebe7d4p-119f, 0.0f,
     0x1.7f46ecp-66f, 0.0f, 0x1.029fdep-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e0fbaap-6f,
     0.0f, 0x1.819fd4p-80f, 0x1.c5e11p-15f, 0.0f, 0.0f, 0.0f, 0x1.90f3aep-69f, 0.0f,
     0x1.4d39d4p-111f, 0.0f, 0.0f, 0.0f, 0x1.d1e798p-23f, 0x1.2b88a4p-109f, 0.0f,
     0x1.315ec8p-60f, 0x1.88e0d6p-18f, 0x1.6875cep-1f, 0x1.e1cdfap-72f,
     0x1.69ebdap-73f, 0x1.ff494cp-12f, 0x1.d7f042p-118f, 0.0f, 0.0f, 0x1.80b1aep-117f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.31bfp-73f, 0x1.4f1dbap-60f, 0.0f, 0.0f,
     0x1.d03a9ap-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7d557cp-74f, 0x1.26af24p-28f,
     0x1.f5e03ep-90f, 0.0f, 0x1.12f9a4p-8f, 0x1.70af7cp-125f, 0x1.667ecp-113f,
     0x1.60b88p-121f, 0.0f, 0x1.2ce3cp-57f, 0x1.9e1d2ap-93f, 0x1.44da32p-13f, 0.0f,
     0.0f, 0x1.e09a3p-115f, 0.0f, 0x1.09a436p-105f, 0x1.e79a46p-32f, 0x1.9ecadcp-56f,
     0.0f, 0x1.6e4954p-126f, 0x1.4f3b92p-11f, 0x1.c2bfdep-96f, 0.0f, 0x1.98bdfap-67f,
     0x1.d7d41ep-82f, 0.0f, 0x1.e9584p-24f, 0.0f, 0x1.7837bap-101f, 0x1.e2b316p-9f,
     0x1.a74f6cp-52f, 0x1.769cdp-38f, 0.0f, 0.0f, 0.0f, 0x1.bc1b6ap-31f,
     0x1.6cb298p-30f, 0.0f, 0x1.e9b45ap-93f, 0x1.f99724p-43f, 0.0f, 0.0f,
     0x1.47bcb4p-55f, 0.0f, 0.0f, 0x1.fe6278p-12f, 0.0f, 0.0f, 0.0f, 0x1.d4c69ap-122f,
     0x1.c26106p-63f, 0x1.4d10acp-47f, 0.0f, 0x1.116534p-57f, 0.0f, 0x1.1d215cp-21f,
     0x1.35494ap-31f, 0x1.facecap-105f, 0.0f, 0.0f, 0x1.05c83ep-95f, 0x1.166368p-32f,
     0x1.8d1eccp-67f, 0.0f, 0x1.ec3e58p-7f, 0x1.caa29cp-49f, 0x1.2ef4fp-114f, 0.0f,
     0.0f, 0x1.63cd12p-4f, 0.0f, 0.0f, 0x1.dc4d7p-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f21fdcp-107f, 0.0f, 0x1.bfb184p-24f, 0.0f, 0x1.734cccp-26f, 0.0f,
     0.0f, 0x1.748944p-15f, 0.0f, 0.0f, 0x1.82568ep-4f, 0x1.169aaap-101f, 0.0f, 0.0f,
     0x1.92ebf6p-90f, 0.0f, 0.0f, 0x1.63054p-74f, 0.0f, 0x1p0f, 0.0f, 0.0f,
     0x1.bee7e6p-77f, 0x1.73c40ep-71f, 0.0f, 0x1.04a744p-63f, 0.0f, 0.0f,
     0x1.f7d7f6p-30f, 0x1.f4949ap-118f, 0x1.bf971cp-98f, 0x1.53350ap-66f,
     0x1.aa5eaap-35f, 0x1.a73536p-82f, 0.0f, 0x1.a81cdap-29f, 0x1.6d19ccp-59f,
     0x1.7b849ep-13f, 0.0f, 0x1.ead9ecp-80f, 0.0f, 0.0f, 0.0f, 0x1.675272p-39f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.6be838p-99f, 0x1.9f4ecp-97f, 0.0f, 0x1.45f828p-60f,
     0.0f, 0x1.4c1486p-35f, 0x1.575e5ep-53f, 0x1.f6bfe8p-60f, 0.0f, 0.0f,
     0x1.7b4d66p-11f, 0x1.8cd92ap-93f, 0x1.1d32eep-96f, 0x1.901688p-37f, 0.0f,
     0x1.1c7d12p-41f, 0x1.a12b9ep-74f, 0x1.80eb86p-68f, 0.0f, 0x1.2cc076p-51f,
     0x1.35cae2p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.18c04ap-18f, 0.0f, 0.0f,
     0x1.8f98c6p-7f, 0x1.69b99p-118f, 0.0f, 0x1.9967b4p-28f, 0.0f, 0x1.c5856cp-1f,
     0.0f, 0.0f, 0x1.dfc8aep-90f, 0x1.329ca8p-83f, 0x1.0a6732p-5f, 0.0f,
     0x1.f8c414p-62f, 0.0f, 0x1.db8fc8p-48f, 0.0f, 0x1.755574p-52f, 0.0f, 0.0f,
     0x1.a3d8eap-9f, 0x1.386e36p-16f, 0.0f, 0.0f, 0.0f, 0x1.2ad90ap-119f, 0.0f, 0.0f,
     0x1.d272dp-116f, 0x1.73f986p-113f, 0.0f, 0.0f, 0x1.9a4874p-114f, 0x1.f55db2p-99f,
     0.0f, 0x1.3450dap-42f, 0x1.ab9f6cp-51f, 0x1.1c2e0ap-81f, 0.0f, 0x1.81cfc2p-122f,
     0x1.f88516p-57f, 0x1.2ff398p-83f, 0.0f, 0.0f, 0x1.44e796p-82f, 0.0f,
     0x1.4a81e2p-115f, 0x1.ee3964p-32f, 0.0f, 0.0f, 0x1.7134e4p-22f, 0x1.6edcacp-113f,
     0x1.d0c2b2p-54f, 0.0f, 0x1.693c74p-45f, 0x1.0ec10cp-16f, 0x1.9932e4p-28f,
     0x1.114c54p-102f, 0.0f, 0.0f, 0x1.053ba6p-3f, 0x1.b182aep-101f, 0.0f, 0.0f,
     0x1.fc64fcp-68f, 0.0f, 0x1.8629e8p-78f, 0.0f, 0.0f, 0.0f, 0x1.fa33cp-88f, 0.0f,
     0.0f, 0x1.a12e5cp-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fd5aacp-87f, 0x1.bbaf7cp-125f,
     0.0f, 0x1.8d27f2p-97f, 0x1.74f8eap-125f, 0x1.08a912p-1f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.41bce4p-21f, 0.0f, 0x1.71d914p-63f, 0.0f,
     0x1.b317b8p-44f, 0.0f, 0x1.06e228p-61f, 0.0f, 0x1.2b6a78p-105f, 0.0f,
     0x1.7f1d42p-4f, 0.0f, 0x1.a3cc54p-109f, 0.0f, 0x1.65d644p-97f, 0x1.a466aep-33f,
     0x1.825e36p-26f, 0.0f, 0x1.dddb4cp-106f, 0x1.4c2bb6p-83f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bb40d4p-102f, 0x1.e94d3cp-57f, 0.0f,
     0x1.82125cp-83f, 0x1.0d121cp-80f, 0x1.ac50acp-59f, 0x1.d43466p-90f, 0.0f, 0.0f,
     0.0f, 0x1.19d534p-72f
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
            tmp1 = Sleef_finz_truncf4_avx2128(tmp0);
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
    printf("Sleef_finz_truncf4_avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_truncf4_avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
