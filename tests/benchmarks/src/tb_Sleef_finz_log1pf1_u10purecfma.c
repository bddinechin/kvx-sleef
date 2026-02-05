/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_log1pf1_u10purecfma.c --function \
 *     Sleef_finz_log1pf1_u10purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile float external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.29ca46p-35f, 0x1.4dfb46p-50f, 0x1.c45e94p-89f, 0.0f, 0.0f, 0x1.4e00ep-80f,
     0x1.4c7ae6p-16f, 0x1.515f64p-21f, 0.0f, 0.0f, 0.0f, 0x1.97b448p-36f,
     0x1.2d181cp-95f, 0x1.8703d6p-48f, 0x1.6618d8p-57f, 0x1.5e1b5ap-21f,
     0x1.e11016p-106f, 0.0f, 0x1.b29c2ap-84f, 0.0f, 0.0f, 0.0f, 0x1.81289cp-71f, 0.0f,
     0.0f, 0.0f, 0x1.4a690cp-71f, 0.0f, 0x1.92c8acp-112f, 0.0f, 0x1p0f,
     0x1.40e30ep-16f, 0.0f, 0x1.49ab86p-17f, 0x1.8948c4p-9f, 0.0f, 0.0f, 0.0f,
     0x1.0a663ep-7f, 0.0f, 0x1.463056p-84f, 0x1.b3db14p-117f, 0.0f, 0.0f,
     0x1.df9714p-116f, 0x1.5f5a72p-14f, 0x1.32a794p-71f, 0x1.84e84p-21f,
     0x1.3dff0cp-72f, 0x1.6c1946p-32f, 0x1.7561f6p-109f, 0x1.36ada8p-98f, 0.0f,
     0x1.a78ceap-104f, 0x1.c65d7ap-92f, 0x1.51442ep-73f, 0x1.82118ap-121f,
     0x1.4d1ebap-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c3569p-44f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.04ffd2p-29f, 0x1.408f08p-35f, 0x1.4c69aap-46f, 0.0f, 0.0f, 0.0f,
     0x1.a0070cp-77f, 0x1.697df4p-99f, 0x1.476c98p-117f, 0x1.6e43d6p-41f,
     0x1.b839fcp-84f, 0x1.685fbcp-122f, 0x1.a10accp-105f, 0.0f, 0x1.61327p-75f,
     0x1.69033p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e6f5c2p-58f, 0.0f, 0x1.1d8a2ap-72f,
     0x1.50b4c6p-118f, 0.0f, 0.0f, 0.0f, 0x1.95b3e2p-115f, 0x1.845b5p-15f, 0.0f, 0.0f,
     0.0f, 0x1.d0f786p-91f, 0.0f, 0.0f, 0x1.e16522p-31f, 0x1.ddf14p-41f, 0.0f,
     0x1.0e9fbp-125f, 0.0f, 0x1.9534ccp-97f, 0.0f, 0x1.1f3936p-66f, 0x1.af2f2ap-15f,
     0x1.aabdd8p-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.b354f6p-10f, 0.0f,
     0.0f, 0x1.28f97ep-15f, 0.0f, 0.0f, 0x1.a85b78p-105f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.9cdccep-61f, 0x1.451a3ep-47f, 0x1.f436acp-37f, 0x1.3ce1ep-51f,
     0x1.36d9a6p-89f, 0x1.6789b4p-43f, 0.0f, 0x1.5a57bp-15f, 0.0f, 0x1.888dap-21f,
     0.0f, 0.0f, 0x1.4c76c4p-115f, 0x1.d82d9ep-44f, 0x1.6cdeap-5f, 0x1.971114p-21f,
     0.0f, 0x1.e74d78p-76f, 0x1.e4db66p-85f, 0x1.2bf1e2p-122f, 0.0f, 0.0f,
     0x1.f865fap-95f, 0.0f, 0x1.40524cp-59f, 0.0f, 0x1.a32fa4p-48f, 0.0f, 0.0f,
     0x1.20f93ep-11f, 0x1.0a8cd6p-109f, 0x1.16bbf4p-41f, 0.0f, 0x1.f161eep-38f,
     0x1.e665b8p-33f, 0x1.aca258p-18f, 0x1.3a6d3cp-124f, 0x1.6113b4p-104f,
     0x1.01a4dcp-84f, 0.0f, 0x1.3e849ep-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5537a6p-29f, 0x1.13a0cep-88f, 0x1.490c32p-73f, 0.0f, 0x1.d3f9fap-62f, 0.0f,
     0.0f, 0x1.a33cf2p-87f, 0x1.e48d5ep-33f, 0x1.983bd8p-92f, 0.0f, 0x1.df44a6p-11f,
     0x1.591724p-104f, 0.0f, 0x1.cedad2p-105f, 0.0f, 0.0f, 0x1.c17508p-33f,
     0x1.22881cp-30f, 0x1.0f9e34p-6f, 0x1.28f5dcp-65f, 0.0f, 0.0f, 0.0f,
     0x1.f7a5f4p-82f, 0.0f, 0.0f, 0x1.6528bp-38f, 0x1.fb6f14p-123f, 0.0f,
     0x1.000264p-114f, 0x1.6b8672p-108f, 0x1.6039f4p-116f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f89bacp-26f, 0x1.3f961ap-93f, 0x1.d3d6dp-114f, 0x1.cacd44p-21f, 0.0f,
     0x1.bd345p-54f, 0.0f, 0.0f, 0.0f, 0x1.378176p-119f, 0x1.692898p-126f, 0.0f, 0.0f,
     0.0f, 0x1.f6483cp-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.09699cp-31f, 0.0f,
     0x1.df7d46p-72f, 0x1.04c478p-77f, 0.0f, 0x1.8ec6dp-70f, 0x1.9e1c48p-26f, 0.0f,
     0x1.a26b14p-77f, 0x1.67c4cep-121f, 0.0f, 0x1.e6e708p-91f, 0.0f, 0x1.f709b6p-32f,
     0.0f, 0x1.fc00aap-104f, 0.0f, 0.0f, 0.0f, 0x1.400708p-49f, 0x1.b46cbcp-74f,
     0x1.b9e214p-7f, 0x1.fbf404p-35f, 0.0f, 0.0f, 0x1.743796p-6f, 0x1.3b7c52p-81f,
     0x1.170fbp-123f, 0.0f, 0.0f, 0x1.30bc4ep-121f, 0.0f, 0.0f, 0.0f, 0x1.5af1a8p-23f,
     0x1.1f6d24p-9f, 0.0f, 0.0f, 0x1.76f90cp-76f, 0.0f, 0x1.e69056p-119f,
     0x1.35a44ep-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.284bdep-11f, 0x1.a3435ep-81f,
     0x1.e931dap-4f, 0x1.62dfd2p-30f, 0x1.49be74p-78f, 0.0f, 0x1.923ca2p-106f,
     0x1.6b2016p-95f, 0x1.ae82b6p-84f, 0x1.6568b8p-64f, 0x1.9fc574p-71f, 0.0f, 0.0f,
     0x1.d9f59p-86f, 0.0f, 0x1.3f3baap-94f, 0.0f, 0x1.98e34ep-44f, 0.0f,
     0x1.cf53dcp-62f, 0.0f, 0x1.226aap-95f, 0x1.d2db02p-103f, 0.0f, 0x1.2fc216p-63f,
     0.0f, 0.0f, 0x1.05accap-124f, 0.0f, 0x1.48637cp-42f, 0.0f, 0.0f, 0x1.2b6bdap-33f,
     0.0f, 0x1.8b9c2cp-87f, 0x1.f85176p-10f, 0x1.f6d26ap-119f, 0.0f, 0.0f,
     0x1.6f1916p-52f, 0x1.c4ca76p-56f, 0x1.eb5edep-41f, 0x1.31e7b4p-14f, 0.0f,
     0x1.e08e66p-109f, 0x1.ace426p-92f, 0.0f, 0x1.e2f5fcp-50f, 0x1.e79036p-61f, 0.0f,
     0x1.ded7aap-87f, 0x1.f98ba4p-57f, 0x1.680decp-94f, 0.0f, 0.0f, 0x1.c75f5ep-9f,
     0.0f, 0x1.1a011ep-84f, 0.0f, 0x1.f24d5cp-58f, 0x1.1e1172p-2f, 0.0f,
     0x1.c3d194p-107f, 0x1.56830ap-37f, 0x1.fe0acp-117f, 0x1.fb7464p-126f, 0.0f,
     0x1.075378p-73f, 0.0f, 0.0f, 0x1.6a72cap-7f, 0x1.bb8b4ep-114f, 0.0f, 0.0f, 0.0f,
     0x1.7e4996p-19f, 0x1.40cdf2p-94f, 0x1.80fa66p-105f, 0.0f, 0x1.56db74p-54f,
     0x1.a441d4p-28f, 0x1.d6207ep-37f, 0x1.7f36d6p-57f, 0.0f, 0x1.29f82ap-88f, 0.0f,
     0x1.529fd6p-94f, 0x1.4e5606p-11f, 0x1.51dfaep-99f, 0.0f, 0x1.7045dp-104f, 0.0f,
     0.0f, 0x1p0f, 0.0f, 0x1.3309d2p-55f, 0.0f, 0x1.eebaeap-120f, 0.0f,
     0x1.d59fdp-116f, 0x1.7813cp-74f, 0x1.bf6972p-6f, 0x1.3d44b6p-10f, 0.0f, 0.0f,
     0.0f, 0x1.2ba86ap-19f, 0x1.a48d3ap-3f, 0x1.10d2c2p-13f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b7ef3ep-104f, 0.0f, 0.0f, 0.0f, 0x1.351adp-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.95492cp-39f, 0x1.34e918p-59f, 0.0f, 0.0f, 0.0f,
     0x1.f605a4p-42f, 0x1.247cfep-45f, 0.0f, 0x1.b320fp-22f, 0x1.fb3f3ap-8f, 0.0f,
     0x1.3839b4p-59f, 0x1.f5d36ep-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.804856p-51f,
     0x1.2d5b3p-22f, 0.0f, 0x1.b14f52p-115f, 0x1.6c05p-101f, 0x1.7f59cp-115f, 0.0f,
     0x1.361d12p-55f, 0.0f, 0.0f, 0.0f, 0x1.da12fap-54f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ef69c2p-41f, 0x1.a65ab6p-98f, 0x1.699462p-32f, 0x1.f4b31ap-12f, 0.0f, 0.0f,
     0x1.c31cacp-11f, 0.0f, 0x1.bb935cp-9f, 0.0f, 0x1.299e6cp-71f, 0x1.aa90fcp-79f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.da5316p-101f, 0x1.a3814p-99f, 0.0f, 0x1.a4dacep-78f,
     0x1.580f22p-58f, 0x1.5ccad2p-106f, 0.0f, 0x1.2ba7b2p-36f, 0.0f, 0.0f,
     0x1.30054ep-115f, 0.0f, 0.0f, 0x1.dfa764p-12f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.78608ap-67f, 0.0f, 0.0f, 0x1.26f4a8p-4f, 0x1.f5075cp-23f, 0x1.462328p-29f,
     0x1.11924p-48f, 0.0f, 0.0f, 0x1.ba3108p-37f, 0x1.87c032p-41f, 0.0f, 0.0f, 0.0f,
     0x1.6a8d56p-27f, 0x1.0b1522p-44f, 0x1.df24f4p-29f, 0x1.3e7d1cp-57f,
     0x1.1e9bdcp-33f, 0.0f, 0.0f, 0x1.3a6feep-103f, 0.0f, 0.0f, 0x1.e58c6cp-97f,
     0x1.5b768ap-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b169p-39f, 0.0f, 0x1.91b0cap-120f,
     0x1.da0f3cp-86f, 0.0f, 0x1.5cf014p-18f, 0x1.104826p-65f, 0.0f, 0x1.933fbap-38f,
     0.0f, 0.0f, 0x1.f421e6p-18f, 0x1.bcc9fcp-69f, 0x1.e717ccp-19f, 0.0f, 0.0f, 0.0f,
     0x1.bf6c32p-16f, 0.0f, 0.0f, 0x1.65802cp-14f, 0x1.8ab2bcp-120f, 0x1.a5036ep-22f,
     0x1.e33632p-105f, 0.0f, 0x1.916abep-71f, 0x1.b55544p-61f, 0x1.a09362p-28f,
     0x1.bc2262p-62f, 0.0f, 0x1.9db366p-23f, 0.0f, 0x1.e7d9bap-48f, 0.0f,
     0x1.3429aep-65f, 0.0f, 0.0f, 0.0f, 0x1.157126p-51f, 0.0f, 0.0f, 0.0f,
     0x1.1d4a3p-26f, 0x1.9e7842p-88f, 0.0f, 0x1.b5df1p-2f, 0x1.17efe8p-103f, 0.0f,
     0.0f, 0x1.1c9beap-98f, 0x1.c844cap-10f, 0x1.eef1e8p-117f, 0.0f, 0x1.a92514p-82f,
     0x1.c75f5p-67f, 0x1.f5cbdcp-63f, 0.0f, 0x1.a4a1p-96f, 0x1.c65e8ap-78f, 0.0f,
     0.0f, 0x1.f7332p-115f, 0x1.828624p-83f, 0x1.f8b996p-9f, 0.0f, 0.0f,
     0x1.a3267p-47f, 0x1.519f14p-73f, 0.0f, 0x1.40a436p-72f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.caf98cp-110f, 0x1.0dff54p-53f, 0.0f, 0.0f, 0x1.69a3d8p-112f, 0x1.cb3f4cp-41f,
     0x1.65d91ep-98f, 0x1.c6d32p-31f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.fd405cp-53f, 0.0f,
     0x1.25ac04p-72f, 0.0f, 0x1.b7b1c6p-37f, 0x1.a129dp-64f, 0.0f, 0x1.eabb2ap-57f,
     0.0f, 0x1.0f6dcep-72f, 0x1.7263eap-10f, 0.0f, 0x1.74c8e4p-87f, 0.0f,
     0x1.8e0712p-1f, 0x1.14c148p-86f, 0.0f, 0x1.ad389ep-57f, 0.0f, 0.0f,
     0x1.58be88p-7f, 0.0f, 0x1.fdffcep-111f, 0.0f, 0.0f, 0x1.216fep-117f,
     0x1.7d6d9ep-32f, 0.0f, 0x1.267a0cp-99f, 0.0f, 0x1.59df4cp-81f, 0.0f, 0.0f, 0.0f,
     0x1.41af72p-69f, 0x1.02ceccp-89f, 0x1.63c254p-124f, 0x1.52bb68p-110f,
     0x1.3bae1cp-61f, 0.0f, 0.0f, 0.0f, 0x1.8f8cd2p-54f, 0.0f, 0x1.4bd34ep-87f, 0.0f,
     0.0f, 0x1.6d1038p-85f, 0x1.debebp-26f, 0x1.4951fcp-12f, 0.0f, 0x1.89172ep-3f,
     0.0f, 0.0f, 0x1.00b6f2p-34f, 0.0f, 0x1.32dda2p-104f, 0.0f, 0.0f, 0x1.140c9cp-12f,
     0.0f, 0x1.dcd5b6p-39f, 0.0f, 0.0f, 0x1.15975cp-37f, 0x1.c73616p-98f, 0.0f,
     0x1.2ff37ap-64f, 0x1.9333bap-82f, 0.0f, 0.0f, 0x1.450dc8p-5f, 0.0f,
     0x1.1af026p-100f, 0x1.929de8p-14f, 0.0f, 0x1.ecaf4cp-18f, 0.0f, 0x1.0425dcp-8f,
     0.0f, 0x1.e5f4f4p-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cc126p-30f,
     0x1.87a334p-83f, 0x1.0f822ap-105f, 0.0f, 0x1.19a0dap-11f, 0x1.bdc8acp-104f,
     0x1.e28482p-12f, 0x1.3303c2p-6f, 0.0f, 0.0f, 0x1.3254e8p-58f, 0x1.a65eacp-124f,
     0x1.a8a3e6p-62f, 0x1.87e504p-24f, 0.0f, 0x1.2b402cp-87f, 0x1.a4438cp-110f, 0.0f,
     0x1.3f9a08p-109f, 0.0f, 0x1.00a282p-25f, 0x1p0f, 0x1.9d23dap-41f, 0.0f,
     0x1.4e40bap-83f, 0.0f, 0x1.80fdcp-124f, 0.0f, 0x1.b4b5e6p-38f, 0.0f,
     0x1.103bd2p-61f, 0x1.e5e54cp-67f, 0.0f, 0x1.e20ae8p-43f, 0.0f, 0.0f,
     0x1.97e794p-120f, 0.0f, 0x1.b4ba5cp-24f, 0.0f, 0.0f, 0.0f, 0x1.eae602p-63f,
     0x1.7125c6p-65f, 0x1.92e7f2p-75f, 0.0f, 0x1.589fc2p-51f, 0x1.93cdeap-94f, 0.0f,
     0x1.f5e1e2p-84f, 0x1.1071aep-38f, 0.0f, 0x1.ffbdeep-114f, 0.0f, 0x1.13a9aep-9f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5a302ep-57f, 0.0f, 0.0f, 0x1.7ee67p-90f,
     0x1.96a5e6p-58f, 0.0f, 0.0f, 0x1.6446e8p-76f, 0x1.c1621ep-115f, 0x1.983cf8p-61f,
     0.0f, 0x1.c8d7c6p-100f, 0x1.32b56cp-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a0f74p-39f,
     0.0f, 0x1.9d777p-2f, 0.0f, 0x1.6b8206p-84f, 0x1.85e2a4p-41f, 0x1.bf7ab8p-5f,
     0.0f, 0.0f, 0x1.914d46p-11f, 0x1.21c4ecp-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c8482ap-54f, 0.0f, 0x1.1077b2p-122f, 0.0f, 0.0f, 0x1.5128bap-63f, 0.0f,
     0x1.c5788ep-90f, 0.0f, 0x1.d3d2e8p-79f, 0x1.194d66p-27f, 0.0f, 0.0f,
     0x1.8d41a8p-59f, 0x1.5a2312p-63f, 0x1.e60d1p-25f, 0x1.b95f1ap-2f, 0.0f, 0.0f,
     0.0f, 0x1.7bf958p-90f, 0.0f, 0x1.41fba4p-125f, 0x1.baa8ap-3f, 0.0f,
     0x1.f58c3cp-63f, 0.0f, 0.0f, 0x1.e3d16p-54f, 0.0f, 0.0f, 0x1.dae5c4p-22f,
     0x1.76116p-113f, 0.0f, 0.0f, 0x1.459d38p-17f, 0.0f, 0.0f, 0.0f, 0x1.313834p-15f,
     0.0f, 0.0f, 0x1.dd38dap-55f, 0.0f, 0x1.4e49d6p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b6276ep-49f, 0x1.5a4da2p-15f, 0x1.22b5aep-74f, 0.0f, 0.0f, 0x1p0f,
     0x1.013798p-87f, 0.0f, 0x1.34c142p-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e8fcp-55f, 0.0f, 0.0f, 0.0f, 0x1.03ed86p-36f, 0.0f, 0x1.99c60cp-114f, 0.0f,
     0x1.da4c8cp-83f, 0.0f, 0.0f, 0.0f, 0x1.59581cp-119f, 0x1.bb2f2ep-85f, 0.0f,
     0x1.51cb64p-54f, 0.0f, 0x1.635e98p-69f, 0x1.14908ap-125f, 0.0f, 0.0f,
     0x1.14fa02p-65f, 0x1.07c61p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.61a68p-28f, 0.0f, 0x1.bd7132p-38f, 0x1.c7550cp-41f, 0x1.7230ccp-49f, 0.0f,
     0x1.8319a2p-42f, 0x1.ef4cd8p-87f, 0x1.fd012p-35f, 0.0f, 0x1.9e9434p-24f, 0.0f,
     0x1.c390fap-78f, 0.0f, 0x1.877abp-40f, 0x1.91515p-66f, 0.0f, 0x1.611dd2p-57f,
     0.0f, 0.0f, 0.0f, 0x1.68a624p-114f, 0.0f, 0.0f, 0x1.9c2d3ep-19f, 0x1.87e67cp-45f,
     0x1.275276p-90f, 0x1.62cbbp-111f, 0x1.2be614p-39f, 0x1.dae408p-89f,
     0x1.115b48p-76f, 0.0f, 0x1.6465a8p-26f, 0.0f, 0x1.841512p-108f, 0x1.dafb16p-104f,
     0x1.2ba4dep-9f, 0x1.f9999p-20f, 0x1.b97174p-38f, 0x1.d51a96p-21f, 0.0f,
     0x1.884db4p-54f, 0.0f, 0.0f, 0.0f, 0x1.c63ecp-45f, 0x1.151f8ap-92f,
     0x1.8c89ccp-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.03b3d2p-26f, 0.0f, 0x1.8e4596p-69f,
     0.0f, 0.0f, 0x1.086a0ap-50f, 0x1.bd9a58p-48f, 0.0f, 0.0f, 0x1.e43474p-103f,
     0x1.252604p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.19a7a8p-62f, 0x1.a59b14p-107f, 0.0f, 0x1.cbda08p-54f, 0.0f, 0x1.2e7a9p-78f,
     0x1.cf6b92p-120f, 0x1.17033p-75f, 0x1.a5ed88p-125f, 0x1.03bddcp-6f, 0.0f,
     0x1.1c0d2cp-53f, 0.0f, 0.0f, 0x1.cfc67ap-112f, 0.0f, 0x1.b85dcep-10f, 0.0f, 0.0f,
     0x1.227bdep-9f, 0.0f, 0x1.13addp-17f, 0x1.f7f66p-107f, 0.0f, 0.0f,
     0x1.45beeap-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8aaa2p-79f, 0x1.eca2b4p-84f,
     0x1.fa5234p-35f, 0x1.46bc7cp-57f, 0x1.b307a2p-110f, 0.0f, 0.0f, 0x1.33e1d4p-52f,
     0x1.140e3ap-118f, 0.0f, 0x1.ff3e82p-112f, 0.0f, 0x1.c8b074p-123f,
     0x1.ade6dep-81f, 0x1.7f03b2p-67f, 0x1.a0a7e6p-69f, 0.0f, 0x1.c38ce6p-124f, 0.0f,
     0x1.1f2cf8p-104f, 0x1.581b2ap-14f, 0.0f, 0x1.566dbap-100f, 0x1.9f6a7p-107f, 0.0f,
     0.0f, 0.0f, 0x1.39e626p-41f, 0x1.eebecp-26f, 0.0f, 0.0f, 0x1.be3edcp-65f,
     0x1.5b16b2p-9f, 0x1.baa6f2p-123f, 0x1.8f8f04p-40f, 0x1.9bfbf2p-116f
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
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = 0.0f;
    tmp = __cos_counter_num(0);
    timer = tmp;
    j = INT32_C(0);

    for (;(j < INT32_C(10000));){
        float bench_acc;
        int32_t i;
        float tmp0;
        int32_t tmp1;

        i = INT32_C(0);
        bench_acc = 0.0f;

        for (;(i < INT32_C(1001));){
            float tmp0;
            float tmp1;
            float tmp2;
            int32_t tmp3;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_finz_log1pf1_u10purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = bench_acc + tmp1;
            bench_acc = tmp2;
            tmp3 = i + INT32_C(1);
            i = tmp3;
        }
        tmp0 = global_bench_acc + bench_acc;
        global_bench_acc = tmp0;
        tmp1 = j + INT32_C(1);
        j = tmp1;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_finz_log1pf1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_log1pf1_u10purecfma bench acc %a\n", global_bench_acc);
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
