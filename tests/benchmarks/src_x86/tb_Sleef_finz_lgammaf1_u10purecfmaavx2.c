/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_lgammaf1_u10purecfma.c --function \
 *     Sleef_finz_lgammaf1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.e095a2p-38f, 0x1.d715ap-114f, 0x1.5945aap-71f, 0x1.04daeep-35f, 0.0f,
     0x1.c3ec4p-59f, 0.0f, 0x1.b5658cp-80f, 0x1.ad0638p-36f, 0x1.b021aep-27f,
     0x1.18ee4ap-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fce3b2p-23f,
     0x1.cb09ap-45f, 0.0f, 0.0f, 0.0f, 0x1.2503dcp-93f, 0.0f, 0x1.5c6278p-81f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.50722p-78f, 0x1.600cb8p-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.111e6cp-103f, 0.0f, 0x1.b86484p-67f, 0.0f, 0x1.e1ea46p-15f, 0x1.70752cp-20f,
     0.0f, 0x1.29defcp-19f, 0.0f, 0x1.dd6124p-8f, 0.0f, 0.0f, 0x1.34b33ap-97f,
     0x1.4a7d64p-96f, 0x1.0c6afep-57f, 0.0f, 0.0f, 0x1.af8c2ap-79f, 0.0f,
     0x1.6fa524p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4c4a46p-103f,
     0x1.1021a8p-10f, 0.0f, 0x1.749f0cp-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.87e29p-49f, 0x1.d9ffa2p-27f, 0.0f, 0x1.7b0132p-86f, 0.0f, 0x1.f26aa8p-33f,
     0x1.e2d20ap-114f, 0x1.7a207cp-61f, 0.0f, 0.0f, 0.0f, 0x1.73350ep-38f,
     0x1.70d514p-61f, 0.0f, 0x1.571262p-105f, 0.0f, 0.0f, 0.0f, 0x1.a3904ap-116f,
     0x1.1ef8a2p-14f, 0.0f, 0.0f, 0.0f, 0x1.5b476p-38f, 0x1.39b668p-108f, 0.0f,
     0x1.bfe354p-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f3e4p-82f, 0.0f,
     0x1.fb3dd4p-108f, 0.0f, 0x1.2e94c8p-108f, 0x1.674734p-58f, 0.0f, 0x1.0fa36cp-22f,
     0.0f, 0.0f, 0x1.da8c7ep-103f, 0.0f, 0x1.6704p-92f, 0.0f, 0x1.a19e9ap-119f,
     0x1.074e08p-104f, 0x1.579adp-9f, 0.0f, 0x1.d5c1d8p-38f, 0x1.a81a46p-101f, 0.0f,
     0.0f, 0x1.a051dep-124f, 0.0f, 0x1.a5707cp-4f, 0.0f, 0x1.6df7acp-76f,
     0x1.369094p-117f, 0x1.1e2b64p-24f, 0x1.d6f65ap-57f, 0.0f, 0x1.32802p-66f,
     0x1.2c89cp-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.281c4ep-75f, 0x1.27313cp-110f,
     0x1.600d46p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f2f1dap-84f, 0.0f, 0x1.6c2df6p-40f,
     0.0f, 0.0f, 0.0f, 0x1.43364p-92f, 0x1.99dcf4p-5f, 0.0f, 0x1.deed5cp-57f,
     0x1.35968cp-88f, 0.0f, 0x1.89f74cp-118f, 0.0f, 0x1.f0f8b4p-27f, 0x1.9e2ed2p-93f,
     0.0f, 0x1.f33b12p-88f, 0.0f, 0x1.39382ep-124f, 0.0f, 0.0f, 0x1.561224p-81f,
     0x1.a5514ep-79f, 0x1.da9954p-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.da5c4ap-62f, 0x1.c21912p-99f, 0.0f, 0.0f, 0x1.5609e2p-70f, 0.0f,
     0x1.99974ep-71f, 0x1.d7713ep-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.54eca2p-38f,
     0x1.6a7dbep-52f, 0.0f, 0x1.87ac2cp-66f, 0x1.5052e4p-28f, 0x1.b0d5d2p-94f, 0.0f,
     0x1.d0d794p-2f, 0.0f, 0x1.f4e48cp-4f, 0x1.07c7d2p-42f, 0.0f, 0.0f,
     0x1.32ed4cp-37f, 0x1.b69806p-32f, 0.0f, 0x1.9d07c2p-76f, 0.0f, 0x1.ef729p-4f,
     0.0f, 0x1.ad791cp-84f, 0x1.3e68bep-119f, 0x1.66d716p-70f, 0.0f, 0x1.d668a8p-116f,
     0.0f, 0x1.eec93p-11f, 0.0f, 0x1.82170cp-117f, 0.0f, 0x1.af922p-38f, 0.0f, 0.0f,
     0x1.4f9bdp-64f, 0x1.c0f826p-118f, 0.0f, 0x1.307eb4p-97f, 0.0f, 0x1.cacf6ap-98f,
     0.0f, 0.0f, 0x1.f25bdp-19f, 0x1.bf07ep-83f, 0x1.9ac906p-48f, 0x1.992834p-87f,
     0.0f, 0x1.fdc026p-70f, 0.0f, 0.0f, 0x1.8c3c9cp-8f, 0x1p0f, 0.0f, 0.0f,
     0x1.afaea8p-92f, 0.0f, 0x1.2f7e1p-68f, 0x1.944c12p-43f, 0x1.796366p-103f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.13b3c6p-94f, 0.0f, 0.0f, 0x1.72f622p-99f, 0.0f, 0.0f,
     0.0f, 0x1.99fb4p-67f, 0.0f, 0x1.491b08p-68f, 0x1.d92a14p-15f, 0x1.3b41eep-120f,
     0.0f, 0.0f, 0.0f, 0x1.4aca52p-68f, 0.0f, 0x1.2493c8p-23f, 0.0f, 0x1.157f54p-85f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.06667p-11f, 0.0f, 0.0f, 0x1.0d47ep-14f, 0.0f,
     0x1.a6d04ep-68f, 0.0f, 0x1.c1212cp-73f, 0.0f, 0.0f, 0x1.39e4e6p-78f,
     0x1.992538p-101f, 0x1.406f2ep-35f, 0.0f, 0.0f, 0x1.627a4ap-85f, 0.0f,
     0x1.d63828p-101f, 0.0f, 0.0f, 0.0f, 0x1.1b2818p-95f, 0.0f, 0.0f, 0x1.f5a56p-113f,
     0x1.85a9cep-81f, 0.0f, 0.0f, 0x1.9ceb9cp-23f, 0x1.577baep-101f, 0.0f,
     0x1.88502p-2f, 0.0f, 0.0f, 0x1.5a0148p-111f, 0x1.7bb41p-42f, 0x1.7aa886p-5f,
     0x1.64a782p-67f, 0x1.dc2d3ep-24f, 0.0f, 0x1.c31f62p-42f, 0x1.7a52a4p-121f,
     0x1.3cb6fcp-19f, 0x1.1f6318p-74f, 0.0f, 0x1.cf5828p-72f, 0x1.de39a4p-86f,
     0x1.daf166p-104f, 0x1.dd6fdp-5f, 0.0f, 0.0f, 0x1.956a3ap-52f, 0x1.7a5d94p-98f,
     0x1.3d55dcp-30f, 0x1.8877cap-65f, 0.0f, 0x1.01541ap-50f, 0.0f, 0.0f, 0.0f,
     0x1.ec0108p-34f, 0x1.beb878p-33f, 0x1.de620cp-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.105c3cp-102f, 0.0f, 0.0f, 0x1.9ec63cp-90f, 0.0f, 0.0f, 0x1.3987f4p-48f, 0.0f,
     0x1.fbcd0ap-23f, 0x1.ac5d64p-59f, 0x1.07d0acp-44f, 0.0f, 0x1.b86b9cp-104f, 0.0f,
     0.0f, 0x1.4a29b2p-70f, 0.0f, 0x1.348162p-114f, 0.0f, 0x1.090cdp-109f,
     0x1.b797a2p-115f, 0.0f, 0.0f, 0.0f, 0x1.0840e2p-114f, 0x1.6ae436p-4f,
     0x1.9d2dccp-67f, 0.0f, 0.0f, 0.0f, 0x1.ef4b6ep-113f, 0.0f, 0.0f, 0x1.28c146p-72f,
     0x1.2c96dap-9f, 0.0f, 0.0f, 0x1.8d181cp-2f, 0x1.dd46e4p-55f, 0x1.947ebep-125f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ab1f14p-51f, 0x1.89aa96p-79f, 0x1.1983b4p-45f,
     0x1.128e6p-112f, 0x1.19ea9ap-118f, 0x1.d360f2p-13f, 0.0f, 0.0f, 0.0f,
     0x1.8e2f18p-112f, 0x1.b60abep-16f, 0.0f, 0x1.d16fcp-72f, 0x1.5e363p-81f, 0.0f,
     0.0f, 0.0f, 0x1.358c0ap-32f, 0.0f, 0x1.a72e88p-116f, 0x1.27dbeep-31f,
     0x1.ceb242p-53f, 0x1.602ffcp-47f, 0x1.ce367ep-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.cebdd2p-89f, 0x1.c6aaa6p-80f, 0.0f, 0x1.606998p-66f,
     0x1.043c38p-110f, 0x1.52149ap-40f, 0x1.40f072p-6f, 0.0f, 0.0f, 0x1.69393ep-36f,
     0.0f, 0x1.b60dc4p-102f, 0x1.7b7062p-65f, 0x1.21c10ep-65f, 0x1.e463f6p-19f, 0.0f,
     0x1.17f04ap-61f, 0x1.1fc0fep-98f, 0x1.5c7482p-80f, 0x1.c82f52p-1f,
     0x1.452b32p-47f, 0.0f, 0x1.fd4924p-76f, 0.0f, 0x1.53ef5ap-125f, 0.0f,
     0x1.c6de84p-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d9f894p-9f,
     0.0f, 0.0f, 0x1.75e38ep-110f, 0x1.2e1c78p-49f, 0.0f, 0x1.efbbecp-53f, 0.0f,
     0x1.67fee8p-56f, 0x1.eac546p-104f, 0.0f, 0x1.4da298p-15f, 0.0f, 0x1.a63118p-118f,
     0x1.d3eac6p-81f, 0.0f, 0x1.557d0ep-105f, 0.0f, 0.0f, 0x1.291864p-13f, 0.0f,
     0x1.538e78p-77f, 0x1.585f14p-76f, 0.0f, 0x1.0ea5bep-89f, 0x1.d3fa64p-102f, 0.0f,
     0x1.e7a604p-32f, 0.0f, 0.0f, 0.0f, 0x1.ba4bcep-13f, 0.0f, 0x1.e4efap-111f,
     0x1.167758p-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5aae24p-36f, 0.0f,
     0x1.c4cb9ap-73f, 0.0f, 0x1.d5958ap-71f, 0x1.ceb6e2p-42f, 0x1.2492f2p-7f,
     0x1.861166p-100f, 0x1.4a6f76p-91f, 0.0f, 0.0f, 0x1.b8ca8cp-88f, 0.0f,
     0x1.879344p-66f, 0.0f, 0.0f, 0x1.be61ep-99f, 0.0f, 0.0f, 0x1.3db78ep-109f,
     0x1.458b7ep-32f, 0x1.984d58p-126f, 0x1.bce40cp-13f, 0.0f, 0.0f, 0x1.f61b4ep-106f,
     0x1.44f646p-70f, 0.0f, 0.0f, 0x1.f4a974p-116f, 0x1.6b38b2p-13f, 0x1.835a18p-64f,
     0.0f, 0x1.2529cp-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8647ap-47f,
     0x1.be78f4p-60f, 0x1.4f3c2p-2f, 0x1.c04b2cp-112f, 0.0f, 0.0f, 0x1.153ba2p-121f,
     0x1.85a0cap-26f, 0.0f, 0x1.966434p-114f, 0.0f, 0x1.16189cp-65f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.fc68bap-74f, 0x1.294a58p-41f, 0x1.134a7ep-33f, 0.0f, 0.0f,
     0x1.fc6c6cp-68f, 0.0f, 0x1.6bc0e2p-89f, 0.0f, 0x1.ec6ab8p-69f, 0x1.b69546p-1f,
     0.0f, 0x1.2d5e0ap-58f, 0x1.e1fbeep-85f, 0.0f, 0x1.bfa5c6p-11f, 0x1.25ce32p-77f,
     0x1.17839cp-52f, 0x1.7a0772p-92f, 0x1.ac5f4ap-16f, 0x1.b04af4p-56f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9a8846p-4f, 0.0f, 0.0f, 0.0f, 0x1.176f94p-23f,
     0x1.e16e28p-7f, 0x1.5c84fap-100f, 0x1.44a112p-42f, 0.0f, 0x1.6baa04p-88f, 0.0f,
     0.0f, 0x1.3ad32cp-65f, 0x1.96026ep-34f, 0.0f, 0x1.ad095ep-42f, 0x1.b5a80ap-5f,
     0x1.2a6398p-109f, 0.0f, 0x1.396246p-5f, 0.0f, 0x1.d4be66p-111f, 0.0f, 0.0f, 0.0f,
     0x1.622f88p-27f, 0x1.2a799cp-112f, 0.0f, 0.0f, 0.0f, 0x1.d74aa2p-10f,
     0x1.ffe8cp-13f, 0x1.2cd8a4p-74f, 0x1.2c2eccp-17f, 0.0f, 0x1.6852aap-116f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.1e7e4ep-54f, 0x1.9b1936p-44f, 0.0f, 0x1.d85272p-50f, 0.0f,
     0x1.bd3b2ep-32f, 0.0f, 0.0f, 0x1.d6e294p-103f, 0.0f, 0x1.ec6e4p-27f, 0.0f,
     0x1.2cbe48p-94f, 0.0f, 0x1.ac3c46p-114f, 0.0f, 0x1.fe8a82p-91f, 0x1.92d076p-1f,
     0.0f, 0x1.b8fb3p-29f, 0.0f, 0.0f, 0x1.b550f2p-36f, 0x1.d3bc8ap-65f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e78fb4p-100f, 0.0f, 0x1.1d1826p-121f,
     0.0f, 0x1.22f3bap-13f, 0.0f, 0x1.daf2bap-93f, 0.0f, 0x1.bc9d36p-61f, 0.0f,
     0x1.09fb84p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eee78cp-8f, 0x1.2d6c12p-119f, 0.0f,
     0.0f, 0.0f, 0x1.77d714p-41f, 0x1.d88a7cp-96f, 0.0f, 0.0f, 0x1.1fa6fep-119f,
     0x1.438cd4p-18f, 0.0f, 0x1.770238p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.812b7ap-12f, 0.0f, 0x1.ecee58p-116f, 0.0f, 0x1.cbcfc2p-98f, 0.0f, 0.0f,
     0x1.c58178p-108f, 0x1.c0b48ap-2f, 0x1.962e7cp-68f, 0x1.ac9118p-45f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.bd1eacp-106f, 0.0f, 0.0f, 0.0f, 0x1.5d10e2p-26f, 0.0f,
     0x1.aad226p-57f, 0.0f, 0x1.544aa2p-88f, 0.0f, 0x1.db3c56p-92f, 0.0f,
     0x1.5579fcp-40f, 0x1.471f5ap-125f, 0.0f, 0.0f, 0x1.6aa4fep-60f, 0.0f, 0.0f,
     0x1.8f06aep-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a0715cp-116f,
     0x1.021424p-75f, 0x1.54e3d2p-17f, 0.0f, 0.0f, 0x1.9445cep-97f, 0x1.295134p-103f,
     0x1.5029d8p-73f, 0x1.c4b134p-111f, 0.0f, 0.0f, 0x1.f32cf4p-120f, 0x1.d2594ep-49f,
     0.0f, 0.0f, 0x1.3afa5ep-87f, 0.0f, 0.0f, 0x1.2afccep-98f, 0x1.4572fcp-53f, 0.0f,
     0x1.7d4706p-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cdf97cp-108f, 0.0f, 0x1.83738cp-84f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.29a48cp-52f, 0.0f, 0x1.921272p-76f, 0x1.c9d0eep-12f,
     0.0f, 0.0f, 0x1.9072fcp-119f, 0x1p0f, 0x1.834e28p-44f, 0.0f, 0.0f, 0.0f,
     0x1.24168p-38f, 0x1.00c8c2p-66f, 0.0f, 0x1.b8c48ap-109f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f4a862p-21f, 0.0f, 0x1.48a4bep-99f, 0.0f, 0.0f, 0x1.9ad93p-83f,
     0x1.2c6cacp-42f, 0.0f, 0x1.1897acp-31f, 0.0f, 0x1.01b98p-81f, 0x1.06ff7ep-77f,
     0.0f, 0.0f, 0.0f, 0x1.0b24bap-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e68346p-86f,
     0.0f, 0x1.bb3b6p-87f, 0.0f, 0.0f, 0.0f, 0x1.a915b2p-116f, 0.0f, 0x1.252956p-73f,
     0x1.bfd66ap-16f, 0x1.78cb1ap-95f, 0.0f, 0x1.e617ccp-65f, 0x1.8eb62ep-106f,
     0x1.b07d6ep-92f, 0.0f, 0x1.dbc8p-95f, 0x1.eb4e14p-46f, 0x1.c391e8p-27f,
     0x1.6204c4p-31f, 0.0f, 0x1.730438p-13f, 0.0f, 0.0f, 0x1.589b5cp-81f, 0.0f,
     0x1.90027p-126f, 0x1.1986bep-121f, 0.0f, 0x1.ef34f2p-29f, 0.0f, 0x1.c8812ap-4f,
     0.0f, 0x1.7c507ap-30f, 0x1.c16b8ap-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2bdf8ep-56f,
     0x1.bb333ap-33f, 0.0f, 0.0f, 0x1.b501d2p-107f, 0x1.29f818p-85f, 0x1.1356c6p-101f,
     0x1.22c034p-67f, 0x1.870926p-35f, 0x1.002cecp-118f, 0x1.45bb2ep-63f,
     0x1.f0bf1p-99f, 0.0f, 0x1.df5cfap-81f, 0.0f, 0x1.3f9d82p-117f, 0.0f,
     0x1.dccc26p-20f, 0.0f, 0.0f, 0x1.4993ap-45f, 0x1.3db4cep-14f, 0x1.5cf5a8p-46f,
     0.0f, 0x1.4b75aep-65f, 0.0f, 0.0f, 0.0f, 0x1.7d74d8p-30f, 0.0f, 0.0f,
     0x1.b265e4p-114f, 0.0f, 0x1.1eade8p-51f, 0.0f, 0x1.d82fdep-8f, 0.0f, 0.0f,
     0x1.6d127cp-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.92f8d6p-122f, 0x1.64b4fcp-77f, 0.0f,
     0x1.25caf6p-52f, 0x1.cc6f6p-43f, 0x1.2c54d8p-96f, 0.0f, 0x1.60ba3ep-48f, 0.0f,
     0.0f, 0.0f, 0x1.92c8f6p-111f, 0x1.e83566p-10f, 0.0f, 0x1.e5ee8ap-47f,
     0x1.da43cp-57f, 0x1.6bed74p-52f, 0x1.c411b2p-94f, 0.0f, 0.0f, 0x1.470a1cp-45f,
     0x1.abc4a8p-46f, 0x1.907bbep-57f, 0x1.4c3c5ep-34f, 0x1.a337c4p-87f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.946b5ep-80f, 0x1.52103cp-55f, 0.0f, 0x1.36982ep-8f, 0.0f,
     0.0f, 0x1.e134a2p-10f, 0x1.54e0eep-48f, 0x1.00a84cp-104f, 0x1.421c98p-69f,
     0x1.b62e66p-32f, 0.0f, 0x1.005832p-63f, 0x1.3bdb22p-1f, 0.0f, 0.0f, 0.0f,
     0x1.4e0162p-59f, 0.0f, 0.0f, 0x1.cf05fep-30f, 0x1.2bd76cp-104f, 0.0f,
     0x1.3f0b9ep-63f, 0x1.050e68p-8f, 0.0f, 0x1.62cd4ap-96f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.01f4d4p-19f, 0x1.a8d0dap-48f, 0x1.34639cp-20f, 0x1.4133cp-107f, 0.0f, 0.0f,
     0x1.301eb4p-28f, 0x1.038beep-43f, 0.0f, 0x1.7bddd6p-76f, 0.0f, 0x1.22b6aep-37f,
     0x1.630034p-107f, 0.0f, 0x1.d5f042p-126f, 0.0f, 0.0f, 0.0f, 0x1.10adecp-18f,
     0x1.a38742p-115f, 0x1.b46fecp-101f, 0.0f, 0.0f, 0x1.20bb24p-12f, 0.0f, 0.0f,
     0.0f, 0x1.2dd6b4p-126f, 0.0f, 0.0f, 0.0f, 0x1.6fd9a8p-63f, 0x1.fd019ep-86f, 0.0f,
     0.0f, 0x1.f4424cp-4f, 0.0f, 0x1.c05462p-98f, 0.0f, 0.0f, 0x1.9835c4p-30f,
     0x1.9f9342p-86f, 0x1.59f8dap-52f, 0x1.6181fp-45f, 0.0f, 0x1.fee5b8p-50f, 0.0f,
     0x1.310694p-35f, 0.0f, 0x1.98685ap-122f, 0.0f, 0x1.b3c288p-44f, 0x1.92b276p-12f,
     0.0f, 0.0f, 0x1.056dd8p-24f
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
            tmp1 = Sleef_finz_lgammaf1_u10purecfma(tmp0);
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
    printf("Sleef_finz_lgammaf1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_lgammaf1_u10purecfma bench acc %a\n", global_bench_acc);
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
