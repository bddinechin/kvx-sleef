/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_tanf1_u10purecfma.c --function \
 *     Sleef_finz_tanf1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0.0f, 0x1.73397ep-73f, 0.0f, 0x1.01bcfap-9f, 0x1.377f4ep-120f,
     0x1.36bf2cp-119f, 0x1.9a1bfp-18f, 0.0f, 0.0f, 0x1.6b963ep-31f, 0.0f,
     0x1.43d9e6p-30f, 0.0f, 0.0f, 0x1.4c836cp-84f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d15fd2p-125f, 0.0f, 0x1.e39a88p-49f, 0x1.b93dc6p-40f, 0x1.a4c12cp-53f,
     0x1.35ba4ap-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.631812p-18f, 0.0f,
     0x1.dd5f48p-114f, 0.0f, 0.0f, 0x1.2eda56p-33f, 0x1.23074p-47f, 0x1.b64c9p-46f,
     0x1.6f9bfep-76f, 0x1.9803a8p-27f, 0.0f, 0.0f, 0x1.88916ep-65f, 0.0f, 0.0f,
     0x1.7dfbbep-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a55da6p-70f, 0x1.a4c0a8p-45f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.9abe56p-97f, 0x1.0da124p-115f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.6ed076p-46f, 0.0f, 0.0f, 0.0f, 0x1.01b3dcp-93f, 0.0f, 0.0f,
     0x1.9edb18p-21f, 0x1.00014p-63f, 0x1.48d1e8p-36f, 0x1.a4b244p-109f, 0.0f, 0.0f,
     0x1.922d1cp-98f, 0x1.f2d12p-65f, 0x1.218e8p-37f, 0x1.01abd8p-98f,
     0x1.be7062p-125f, 0.0f, 0.0f, 0x1.4b84dcp-20f, 0x1.af59f6p-90f, 0x1.51e2ep-92f,
     0.0f, 0.0f, 0x1.0ea4acp-60f, 0.0f, 0x1.72ec6p-118f, 0x1.bce22ap-123f,
     0x1.d06fc4p-87f, 0x1.124f8cp-57f, 0x1.ec1bb6p-78f, 0.0f, 0.0f, 0x1.efb6a2p-61f,
     0.0f, 0.0f, 0x1.4e25bcp-4f, 0x1.b1c44cp-88f, 0.0f, 0.0f, 0x1.1b8c8ep-38f, 0.0f,
     0x1.d19e9ap-45f, 0.0f, 0x1.5aec18p-53f, 0.0f, 0.0f, 0.0f, 0x1.275f26p-51f,
     0x1.f9a92p-33f, 0x1.53fb74p-70f, 0.0f, 0x1.a3bbfap-21f, 0.0f, 0x1.7740dap-23f,
     0.0f, 0x1.daaa78p-86f, 0.0f, 0.0f, 0x1.fdf8acp-30f, 0x1.0de9aap-66f,
     0x1.90e064p-110f, 0x1.ce05c2p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5e636ap-105f, 0x1.39f084p-46f, 0x1.9058bap-82f, 0x1.b0f332p-9f,
     0x1.79e4aap-57f, 0.0f, 0x1.3bb3aep-84f, 0.0f, 0x1.fb8baap-84f, 0x1.3371dap-69f,
     0x1.3c25c6p-1f, 0.0f, 0x1.d313b8p-103f, 0.0f, 0.0f, 0x1.f31f78p-78f, 0.0f, 0.0f,
     0x1.dfcd3cp-45f, 0x1.ea7a0ep-7f, 0x1.ed975ap-3f, 0.0f, 0.0f, 0.0f,
     0x1.58f23ap-72f, 0.0f, 0.0f, 0x1.9ae758p-114f, 0x1.60792ep-116f, 0x1.608c74p-55f,
     0x1.84e4b8p-7f, 0x1.cbeedcp-104f, 0x1.dbe84cp-11f, 0.0f, 0x1.e7dd88p-101f,
     0x1.fe6ca2p-109f, 0x1.2ee5a4p-43f, 0x1.824db2p-51f, 0x1.f3cb96p-15f,
     0x1.ce6e16p-43f, 0x1.3d6bb2p-47f, 0x1.44c43ap-84f, 0x1.0b4a38p-120f,
     0x1.7ef3dcp-104f, 0x1.986786p-22f, 0.0f, 0.0f, 0x1.0a5ccep-9f, 0.0f, 0.0f,
     0x1.80f052p-46f, 0x1.b77502p-19f, 0.0f, 0x1.e0d2acp-100f, 0x1.82dd6p-2f, 0.0f,
     0x1.843e1ep-91f, 0x1.e7cfc8p-43f, 0x1.8cf92cp-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.28ddacp-93f, 0x1.f00686p-64f, 0.0f, 0x1.3c0722p-120f, 0.0f, 0.0f, 0.0f,
     0x1.9f7c6p-76f, 0x1.85771ep-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bbcea4p-103f, 0.0f, 0.0f, 0x1.0d1ecap-20f, 0.0f, 0.0f, 0.0f, 0x1.20ae4ap-3f,
     0x1.812094p-71f, 0x1.4731a2p-65f, 0x1.ef322p-119f, 0x1.daac14p-97f,
     0x1.7c9154p-26f, 0.0f, 0x1.cd92d2p-96f, 0x1.211d6ep-100f, 0x1.26c9c6p-22f, 0.0f,
     0.0f, 0x1.f224f6p-7f, 0x1.59205p-21f, 0x1.f526fep-25f, 0.0f, 0.0f,
     0x1.64e234p-35f, 0.0f, 0.0f, 0x1.df0efep-21f, 0.0f, 0.0f, 0.0f, 0x1.e608fep-91f,
     0.0f, 0x1.4ae8d2p-45f, 0x1.1d2a56p-114f, 0x1.34f3f2p-57f, 0x1.8c3ec6p-75f,
     0x1.4fa71cp-26f, 0.0f, 0.0f, 0x1.d42bf6p-116f, 0.0f, 0.0f, 0x1.3e476ap-82f,
     0x1.8b2d9p-83f, 0.0f, 0.0f, 0x1.803c48p-115f, 0x1.77fad6p-87f, 0x1.4ab39ap-99f,
     0.0f, 0x1.daa42ep-82f, 0x1.06f222p-23f, 0.0f, 0x1.1c2924p-71f, 0x1.0693fap-83f,
     0x1.feb294p-53f, 0.0f, 0x1.81c0a6p-19f, 0x1.8b5982p-91f, 0.0f, 0.0f, 0.0f,
     0x1.8940f8p-106f, 0.0f, 0.0f, 0x1.2cf088p-90f, 0.0f, 0x1p0f, 0x1.414774p-32f,
     0.0f, 0x1.3ed55ep-8f, 0x1.e706c8p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ded4fep-25f,
     0.0f, 0x1.670a94p-24f, 0x1.fd3dfp-108f, 0.0f, 0.0f, 0x1.2b2e48p-121f, 0.0f, 0.0f,
     0.0f, 0x1.7b7e44p-118f, 0.0f, 0x1.b1bc6ep-8f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4edecep-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eab99ap-124f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.799e6ep-6f, 0x1.f00666p-58f, 0x1.473634p-29f,
     0x1.25218cp-93f, 0.0f, 0x1.ae55b8p-23f, 0x1.cbf658p-34f, 0x1.8d9a9p-52f, 0.0f,
     0.0f, 0x1.dea7b2p-24f, 0.0f, 0.0f, 0x1.b8678ap-112f, 0.0f, 0.0f, 0.0f,
     0x1.704a16p-101f, 0x1.60a0ccp-49f, 0x1.95ad22p-4f, 0.0f, 0x1.7f56c2p-88f,
     0x1.db4f3p-99f, 0.0f, 0x1.26bdc2p-63f, 0x1.e4a10cp-57f, 0.0f, 0x1.d2025ap-59f,
     0.0f, 0x1.201fbep-97f, 0x1.792b5ep-37f, 0x1.73534p-105f, 0x1.a8180ap-102f, 0.0f,
     0x1.6675bp-81f, 0.0f, 0x1.e4d3bp-26f, 0x1.bca404p-36f, 0.0f, 0x1.36953ep-16f,
     0.0f, 0x1.57c9fep-70f, 0.0f, 0.0f, 0x1.0233c2p-91f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.595a24p-18f, 0.0f, 0.0f, 0x1.336034p-8f, 0x1.ada706p-18f, 0x1.0ca75p-2f,
     0.0f, 0x1.9a6944p-6f, 0.0f, 0x1.171b3p-55f, 0.0f, 0.0f, 0x1.1aa884p-123f, 0.0f,
     0x1.0d14fcp-60f, 0x1.343b9cp-12f, 0x1.f34794p-3f, 0.0f, 0x1.d464d6p-78f, 0.0f,
     0x1.9ad402p-79f, 0x1.022e2ep-77f, 0.0f, 0x1.691a22p-53f, 0.0f, 0x1.4e9982p-107f,
     0.0f, 0x1.859792p-70f, 0.0f, 0.0f, 0x1.0b1c96p-96f, 0.0f, 0.0f, 0x1.754f72p-5f,
     0.0f, 0.0f, 0x1.e90b5ap-47f, 0x1.4530d4p-83f, 0.0f, 0.0f, 0.0f, 0x1.a94926p-59f,
     0x1.4c7722p-66f, 0x1.7af2ccp-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.de4854p-108f,
     0.0f, 0x1.d0eff2p-119f, 0x1.313198p-38f, 0x1.329f1cp-80f, 0x1.de8a96p-30f,
     0x1p0f, 0x1.480adp-55f, 0x1.3409e6p-29f, 0x1.966ad2p-21f, 0.0f, 0.0f, 0.0f,
     0x1.2bb666p-125f, 0.0f, 0x1.f74566p-104f, 0.0f, 0.0f, 0x1.27b9e8p-97f,
     0x1.bb1b28p-125f, 0.0f, 0.0f, 0.0f, 0x1.817602p-77f, 0.0f, 0.0f, 0x1.f72276p-74f,
     0x1.5193bcp-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c3b812p-45f,
     0x1.62a12p-95f, 0x1.ab7cfp-7f, 0x1.c0a074p-121f, 0x1.472a8ep-109f,
     0x1.847a2p-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.87a0f4p-117f, 0.0f,
     0x1.ce513cp-116f, 0x1.0fd59cp-88f, 0.0f, 0x1.267e88p-48f, 0x1.2a21ccp-63f, 0.0f,
     0x1.e29d62p-23f, 0x1.1a791p-5f, 0.0f, 0x1.ab56cp-24f, 0.0f, 0x1.eaf6p-43f, 0.0f,
     0.0f, 0x1.1902eep-17f, 0.0f, 0x1.0a15fp-76f, 0x1.586fbcp-88f, 0x1.926e42p-79f,
     0.0f, 0x1.cdf87p-41f, 0.0f, 0.0f, 0x1.f59d04p-65f, 0.0f, 0.0f, 0.0f,
     0x1.9ad87ap-51f, 0x1.1c353ap-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c03898p-27f, 0x1.148e9ep-93f, 0x1.2e09acp-97f, 0.0f, 0x1.7c5ba2p-29f, 0.0f,
     0x1.1f1312p-58f, 0.0f, 0.0f, 0x1.e1b15p-32f, 0x1.491812p-63f, 0.0f,
     0x1.a794bcp-66f, 0.0f, 0x1.2b47dcp-44f, 0x1.d7b642p-85f, 0x1.abb69ap-110f,
     0x1.eb141ap-51f, 0x1.5222f4p-71f, 0.0f, 0.0f, 0.0f, 0x1.4baae6p-123f,
     0x1.8bf5dcp-81f, 0x1.55ce8ap-109f, 0x1.00460ep-86f, 0x1.aa66fp-3f, 0.0f,
     0x1.205a62p-56f, 0x1.ebfb8ep-63f, 0x1.bb35ep-92f, 0.0f, 0x1.c98802p-77f, 0.0f,
     0x1.29d40cp-12f, 0x1.549b86p-103f, 0x1.2411f6p-126f, 0.0f, 0x1.8bb77p-18f,
     0x1.83a3d2p-13f, 0.0f, 0.0f, 0x1.08ff02p-76f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c3e5b2p-36f, 0.0f, 0x1.320d3ep-12f, 0.0f, 0x1.2ab032p-98f, 0.0f,
     0x1.446c88p-80f, 0x1.07521ap-88f, 0x1.ced00cp-111f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a3e91ep-67f, 0x1.50ad6ap-119f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.71bd3cp-34f, 0.0f, 0x1.4ab0b2p-93f, 0.0f, 0x1.3015b4p-3f, 0.0f, 0.0f,
     0x1.c7da4ep-122f, 0.0f, 0.0f, 0x1.d1a45cp-54f, 0.0f, 0.0f, 0x1.fd8874p-34f, 0.0f,
     0x1.50990ep-104f, 0x1.9f781p-21f, 0x1.9ec5b8p-65f, 0.0f, 0.0f, 0.0f,
     0x1.d7eb1ep-23f, 0.0f, 0x1.84e272p-14f, 0.0f, 0.0f, 0x1.e9dddep-102f,
     0x1.518cc4p-41f, 0x1.8c5ed4p-87f, 0.0f, 0x1.83bf2ap-102f, 0x1.b7cdb4p-69f,
     0x1.33fedp-110f, 0x1.d419p-103f, 0x1.4560eep-36f, 0x1.109aaep-92f, 0.0f, 0.0f,
     0x1.c74478p-26f, 0.0f, 0x1.8b01ccp-117f, 0x1.520154p-109f, 0x1.9a45bap-43f, 0.0f,
     0x1.7f3c56p-71f, 0.0f, 0x1.c329f8p-54f, 0.0f, 0.0f, 0x1.0f654ap-28f,
     0x1.031beap-114f, 0x1.5e9424p-76f, 0x1.4706dcp-109f, 0.0f, 0.0f, 0x1.1e89cap-69f,
     0.0f, 0x1.92832cp-74f, 0x1.62f09ep-64f, 0.0f, 0x1.f9ce0cp-53f, 0x1.608702p-88f,
     0x1.d9c282p-35f, 0x1.acd99ap-17f, 0.0f, 0x1.18a934p-95f, 0x1.fd19a6p-102f,
     0x1.b5754ep-61f, 0.0f, 0x1.d0c866p-49f, 0.0f, 0.0f, 0.0f, 0x1.ca7dbp-107f,
     0x1.955c46p-60f, 0x1.f7ba4ep-65f, 0.0f, 0.0f, 0x1.f20d4ep-10f, 0.0f, 0.0f, 0.0f,
     0x1.dc2a6p-65f, 0.0f, 0.0f, 0.0f, 0x1.8885d4p-66f, 0.0f, 0.0f, 0x1.8f11e2p-62f,
     0x1p0f, 0.0f, 0.0f, 0x1.ea53bep-4f, 0.0f, 0x1.943c8ep-73f, 0.0f, 0.0f,
     0x1.c80bbp-66f, 0.0f, 0x1.d30ad6p-120f, 0x1.a24802p-62f, 0x1.bf8218p-33f,
     0x1.ecd92cp-111f, 0x1.cec316p-44f, 0x1.45cc72p-20f, 0.0f, 0.0f, 0x1.0c1cdap-40f,
     0.0f, 0x1.ee21e2p-39f, 0x1.d6109p-64f, 0x1.6101f8p-82f, 0x1.d058ecp-30f,
     0x1.69ebbp-38f, 0.0f, 0.0f, 0x1.49fdcap-2f, 0x1.38b1aep-25f, 0x1.331146p-90f,
     0x1.86758cp-60f, 0.0f, 0x1.4db00ap-45f, 0.0f, 0.0f, 0.0f, 0x1.7901ccp-94f,
     0x1.6f1c98p-30f, 0x1.a8148ep-40f, 0x1.41045p-115f, 0x1.83b6bap-50f, 0.0f, 0.0f,
     0.0f, 0x1.d82208p-98f, 0.0f, 0x1.a7f264p-15f, 0.0f, 0x1.a177d2p-53f, 0.0f,
     0x1.5a6512p-121f, 0.0f, 0x1.5949d4p-94f, 0x1.6b497cp-10f, 0x1.b520e2p-21f,
     0x1.397802p-90f, 0x1.022742p-31f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.790046p-79f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b93098p-85f, 0x1.66beep-72f, 0.0f, 0.0f,
     0.0f, 0x1.190ec4p-29f, 0x1.a37cb6p-55f, 0x1.f81f32p-112f, 0.0f, 0.0f, 0.0f,
     0x1.76de5cp-78f, 0x1.db88bcp-95f, 0x1.73a8ccp-22f, 0x1.79b114p-99f,
     0x1.91efeap-11f, 0.0f, 0.0f, 0.0f, 0x1.4900ap-74f, 0x1.4c3cb2p-66f, 0.0f,
     0x1.7f721p-122f, 0.0f, 0x1.6785bp-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ffcb32p-38f, 0.0f, 0x1.ea08e8p-17f,
     0.0f, 0.0f, 0x1.b60c54p-79f, 0.0f, 0x1.31b666p-8f, 0.0f, 0.0f, 0.0f,
     0x1.a341dap-45f, 0.0f, 0.0f, 0.0f, 0x1.e13c7cp-16f, 0.0f, 0x1.2cb41ep-118f, 0.0f,
     0.0f, 0.0f, 0x1.aafaacp-41f, 0x1.c7778cp-35f, 0x1.77727p-99f, 0x1.f9767ep-13f,
     0.0f, 0x1.49a87cp-83f, 0.0f, 0.0f, 0x1.f2931p-29f, 0x1.e374d2p-65f,
     0x1.33ca5p-26f, 0.0f, 0.0f, 0x1.88e938p-52f, 0x1.6b0c0ep-23f, 0.0f, 0.0f,
     0x1.b5a8e8p-49f, 0.0f, 0.0f, 0x1.cc894ep-84f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2d5b86p-35f, 0.0f, 0x1.4aacfcp-72f, 0.0f, 0.0f, 0x1.1f67acp-39f,
     0x1.689094p-81f, 0x1.dea642p-39f, 0x1.ef056p-53f, 0x1.a3991p-96f,
     0x1.b0e5b6p-44f, 0.0f, 0x1.641106p-89f, 0.0f, 0x1.ca71eep-108f, 0x1.a73c8ep-66f,
     0x1.2aee78p-20f, 0.0f, 0x1.3a7132p-24f, 0.0f, 0x1.5229a8p-67f, 0.0f,
     0x1.0f84dap-36f, 0.0f, 0.0f, 0.0f, 0x1.e9842ap-20f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3ae292p-32f, 0.0f, 0.0f, 0.0f, 0x1.e531d2p-13f, 0.0f, 0.0f, 0x1.cf27eep-48f,
     0.0f, 0x1.023646p-29f, 0.0f, 0x1.5d2b5ap-52f, 0x1.29a9fcp-72f, 0x1.33e00ep-66f,
     0.0f, 0x1.e19774p-116f, 0.0f, 0x1.86c3d8p-96f, 0.0f, 0.0f, 0.0f,
     0x1.758ad4p-123f, 0x1.7aa292p-65f, 0.0f, 0x1.17cf8cp-40f, 0x1.bf039ap-50f, 0.0f,
     0.0f, 0.0f, 0x1.32e14ep-18f, 0.0f, 0.0f, 0x1.f9ae64p-19f, 0x1.9f74f6p-63f, 0.0f,
     0x1.b29566p-89f, 0.0f, 0.0f, 0.0f, 0x1.06c62p-126f, 0.0f, 0.0f, 0x1.f5141p-75f,
     0.0f, 0x1.0453d8p-124f, 0.0f, 0.0f, 0.0f, 0x1.2c361p-113f, 0.0f, 0x1.14258ap-43f,
     0x1.0b7c98p-69f, 0x1.2d4eacp-3f, 0x1.544b0ap-91f, 0x1.c2e7f8p-84f, 0.0f,
     0x1.74b48ep-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f2e99cp-21f, 0x1.25cd3cp-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3db368p-89f,
     0x1.3dca86p-10f, 0x1.c8e33ep-54f, 0.0f, 0.0f, 0x1.806bcp-41f, 0x1.35c33p-9f,
     0x1.186bc4p-60f, 0x1.6c507cp-24f, 0.0f, 0.0f, 0x1.bfc388p-37f, 0x1.7e2fcep-63f,
     0.0f, 0x1.aed1ap-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6a07e4p-117f,
     0x1.16966cp-68f, 0x1.12cb26p-49f, 0x1.625d32p-48f, 0x1.553abep-76f,
     0x1.2681d2p-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a5fcdap-40f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.4dee2cp-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f63358p-44f,
     0x1.79d9d2p-24f, 0.0f, 0.0f, 0x1.036ccp-42f, 0.0f, 0x1.ae2e74p-38f, 0.0f, 0.0f,
     0x1.ada142p-71f, 0x1.b83faap-45f, 0.0f, 0x1.6bb34p-117f, 0.0f, 0.0f,
     0x1.8ea044p-9f, 0.0f, 0.0f, 0.0f, 0x1.de0628p-44f, 0.0f, 0x1.cb7c38p-47f,
     0x1.aac51p-61f, 0x1.9af302p-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ebb2d4p-47f,
     0.0f, 0x1.547d9p-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.39dd5p-16f,
     0x1.4058fcp-70f
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
            tmp1 = Sleef_finz_tanf1_u10purecfma(tmp0);
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
    printf("Sleef_finz_tanf1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_tanf1_u10purecfma bench acc %a\n", global_bench_acc);
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
