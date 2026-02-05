/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sinf4_u10avx2128.c --function Sleef_finz_sinf4_u10avx2128 \
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
     0.0f, 0.0f, 0.0f, 0x1.73522p-115f, 0x1.cdd0fcp-89f, 0x1.88e986p-111f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.944154p-84f, 0.0f, 0.0f, 0x1p0f, 0.0f,
     0x1.6029d4p-118f, 0x1.f8818p-102f, 0x1.2d9fd4p-87f, 0.0f, 0x1.1c0fcp-112f,
     0x1.5a78cp-125f, 0x1.7310e6p-56f, 0x1.f3321ep-78f, 0.0f, 0x1.a69c22p-21f, 0.0f,
     0.0f, 0.0f, 0x1.72441cp-83f, 0.0f, 0x1.8db6bcp-39f, 0.0f, 0x1.ce5304p-84f, 0.0f,
     0.0f, 0.0f, 0x1.eb9194p-113f, 0x1.4e507cp-46f, 0.0f, 0x1.373428p-52f,
     0x1.eea83ap-29f, 0x1.5022e2p-16f, 0x1.8882cep-78f, 0x1.abd042p-102f, 0.0f, 0.0f,
     0.0f, 0x1.94593ep-74f, 0.0f, 0x1.73ef24p-105f, 0.0f, 0x1.f3d164p-59f, 0.0f,
     0x1.35f89ep-67f, 0x1.c1299ep-18f, 0.0f, 0.0f, 0x1.ab71ap-35f, 0.0f, 0.0f,
     0x1.b6c484p-54f, 0.0f, 0.0f, 0.0f, 0x1.3f9c08p-61f, 0.0f, 0.0f, 0.0f,
     0x1.51023p-74f, 0x1.a77bfap-67f, 0.0f, 0.0f, 0x1.a967c2p-24f, 0.0f, 0.0f,
     0x1.d4d1f8p-53f, 0.0f, 0x1.96c814p-66f, 0x1.6246f2p-112f, 0x1.c7546p-53f, 0.0f,
     0x1.26540ap-24f, 0.0f, 0.0f, 0x1.3df36ep-23f, 0.0f, 0x1.2d49bap-72f, 0.0f, 0.0f,
     0.0f, 0x1.aa949cp-35f, 0.0f, 0.0f, 0.0f, 0x1.618766p-42f, 0.0f, 0x1.703da2p-45f,
     0x1.c820c6p-71f, 0x1.82aac4p-24f, 0.0f, 0.0f, 0x1.017116p-70f, 0x1.6be40ep-53f,
     0x1.823d68p-45f, 0x1.12edbep-24f, 0x1.1fe654p-2f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.46f32cp-104f, 0.0f, 0x1.462b18p-107f, 0x1.69a06p-74f, 0x1.0798a6p-47f, 0.0f,
     0.0f, 0x1.183506p-107f, 0x1.ba9316p-74f, 0x1.d3fa06p-115f, 0x1.4fa534p-52f, 0.0f,
     0x1.f1df4ap-22f, 0.0f, 0.0f, 0.0f, 0x1.34ad1ap-31f, 0x1.0aa978p-106f,
     0x1.147afcp-72f, 0x1.3982f2p-95f, 0x1.ab46bcp-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0ddb32p-54f, 0x1.11b986p-77f, 0x1.cda54p-44f, 0.0f, 0x1.85f86cp-100f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c10f12p-5f, 0.0f, 0.0f, 0x1.f8c2d6p-7f, 0.0f,
     0x1.b95612p-9f, 0x1.08fa9ap-119f, 0x1.6cf6c4p-16f, 0.0f, 0.0f, 0.0f,
     0x1.a25dfp-80f, 0x1.e561dap-1f, 0x1p0f, 0x1.c6103cp-99f, 0x1.f764dap-15f,
     0x1.32eaeep-31f, 0.0f, 0.0f, 0x1.85172p-6f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9cd08ap-125f, 0x1.4903bep-41f, 0x1.b361a8p-76f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9a9fa8p-49f, 0.0f, 0x1.cef6d2p-66f, 0x1.4bfbd2p-26f, 0x1.0fe3bcp-80f, 0.0f,
     0.0f, 0x1.1944fap-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e5525ap-117f, 0x1.73466ap-33f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.abc556p-84f, 0x1.e718eap-49f,
     0x1.b43a46p-121f, 0.0f, 0.0f, 0x1.f47a86p-118f, 0x1.79b39ap-41f, 0.0f,
     0x1.1a3c46p-41f, 0x1.615768p-4f, 0.0f, 0x1.88d4ep-86f, 0x1.17fadcp-123f,
     0x1.e4d5d4p-89f, 0.0f, 0x1.21296ap-16f, 0.0f, 0.0f, 0x1.275b2ap-124f, 0.0f, 0.0f,
     0x1.c53eap-62f, 0.0f, 0x1.9ab556p-104f, 0x1.31f8dep-69f, 0.0f, 0.0f,
     0x1.caef1ap-46f, 0x1.cb871p-94f, 0x1.6aca76p-41f, 0.0f, 0.0f, 0x1.1772f4p-65f,
     0x1.c020e2p-1f, 0x1.6a47fep-62f, 0x1.4821b4p-69f, 0.0f, 0x1.9991acp-24f, 0.0f,
     0x1.d3ba78p-92f, 0.0f, 0.0f, 0x1.78dd38p-27f, 0x1.54eb62p-103f, 0x1.e5c3ep-46f,
     0.0f, 0.0f, 0x1.c326cap-77f, 0.0f, 0x1.66b434p-91f, 0x1.e16cbcp-4f, 0.0f,
     0x1.707774p-87f, 0.0f, 0.0f, 0x1.7c7152p-48f, 0x1.103be2p-27f, 0x1.4c73dap-15f,
     0x1.178ca8p-70f, 0.0f, 0x1.66fa3p-119f, 0x1.6ec77ap-73f, 0.0f, 0x1.8c6c28p-79f,
     0x1.87e69ap-92f, 0x1.f67906p-83f, 0x1.8aa29ap-84f, 0.0f, 0x1.b02dfcp-32f,
     0x1.b5fed6p-23f, 0.0f, 0.0f, 0x1.d8336cp-56f, 0x1.eaf12ep-69f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.33e19ap-10f, 0.0f, 0x1.a15bap-43f, 0x1.cf383cp-55f,
     0x1.db4acap-76f, 0.0f, 0.0f, 0x1.c0be14p-57f, 0x1.3e078p-125f, 0x1.ce009ep-13f,
     0x1.b5f52p-116f, 0x1.46fe7p-93f, 0x1.18a6cp-77f, 0.0f, 0x1.055efep-59f, 0.0f,
     0x1.4f1006p-9f, 0.0f, 0.0f, 0.0f, 0x1.f4742ep-115f, 0x1.0b151cp-104f,
     0x1.8f1006p-13f, 0x1.ec4872p-94f, 0x1.ca734p-67f, 0.0f, 0x1.ed7f14p-41f, 0.0f,
     0x1.85a078p-33f, 0x1.0cf59ap-113f, 0x1.b9387cp-18f, 0.0f, 0x1.73cb78p-106f, 0.0f,
     0x1.573fd8p-124f, 0x1.77116p-80f, 0x1.cde7cp-64f, 0x1.ef85a2p-1f,
     0x1.e7523cp-71f, 0.0f, 0.0f, 0x1.513a5cp-24f, 0x1.a88feap-116f, 0.0f, 0.0f,
     0x1.fca0ap-123f, 0.0f, 0.0f, 0x1.0f24dcp-125f, 0.0f, 0x1.f519e6p-100f, 0.0f,
     0x1.95d082p-8f, 0.0f, 0.0f, 0.0f, 0x1.063d46p-86f, 0.0f, 0x1.9c9ba4p-8f,
     0x1.4b6cbp-32f, 0x1.f7a3f2p-97f, 0.0f, 0.0f, 0x1.3d4a0ep-90f, 0x1.ba18acp-32f,
     0.0f, 0.0f, 0.0f, 0x1.9afdb6p-86f, 0.0f, 0x1.ee4be2p-34f, 0x1.4a1f4cp-106f,
     0x1.88ff9ep-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4a9dbep-60f, 0.0f,
     0x1.4aaae2p-9f, 0.0f, 0x1.d7a458p-100f, 0x1.c8edecp-71f, 0x1.8cb0fap-49f,
     0x1.7cf3ccp-39f, 0.0f, 0x1.4436ep-2f, 0x1.0ee5f4p-102f, 0x1.2752f2p-91f,
     0x1.faaeccp-66f, 0x1.1df486p-54f, 0x1.3fae9ep-36f, 0.0f, 0x1.aace22p-9f,
     0x1.bf8d9ap-81f, 0x1.5ca064p-52f, 0x1.51762ep-87f, 0x1.238be8p-32f, 0.0f,
     0x1.35ebcap-60f, 0.0f, 0.0f, 0.0f, 0x1.9e6cc2p-120f, 0x1.3e9fap-10f, 0.0f, 0.0f,
     0x1.0b8794p-14f, 0x1.05817ap-107f, 0x1.30da06p-1f, 0.0f, 0x1.0ea008p-92f, 0.0f,
     0.0f, 0x1.e2e72cp-107f, 0.0f, 0.0f, 0.0f, 0x1.7d7542p-94f, 0x1.263a7p-48f, 0.0f,
     0.0f, 0.0f, 0x1.b485aep-74f, 0.0f, 0x1.b5f166p-108f, 0.0f, 0x1.0c2f4cp-19f,
     0x1.f15aa2p-12f, 0.0f, 0.0f, 0x1.dd37cep-66f, 0.0f, 0x1.ae0778p-6f,
     0x1.f0908p-14f, 0x1.7cf706p-86f, 0x1.e5287p-50f, 0.0f, 0x1.430866p-78f,
     0x1.a2f2a2p-79f, 0.0f, 0x1.7a8b6ap-91f, 0.0f, 0.0f, 0.0f, 0x1.9508f8p-76f,
     0x1.45fddap-87f, 0x1.55270ep-47f, 0.0f, 0.0f, 0.0f, 0x1.5ae4b8p-22f,
     0x1.4f2f9ep-50f, 0.0f, 0x1.bf497ap-88f, 0x1.8d7e5ep-97f, 0.0f, 0x1.6bc2ap-45f,
     0x1.04b8a8p-112f, 0x1.ba31cp-48f, 0.0f, 0.0f, 0x1.ea0a9ep-68f, 0x1.4447ap-28f,
     0x1.555a06p-43f, 0x1.c9bedap-34f, 0x1.0af024p-97f, 0x1.85281p-68f,
     0x1.09eafap-97f, 0.0f, 0x1.d2c686p-44f, 0x1.b9e6c6p-48f, 0x1.c3ad24p-30f,
     0x1.5ee346p-90f, 0x1.5359eap-89f, 0.0f, 0x1.9c423ep-14f, 0x1p0f, 0x1.2740ccp-62f,
     0.0f, 0.0f, 0.0f, 0x1.282f52p-125f, 0x1.0a104cp-70f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ace3bp-14f, 0x1.01500cp-114f, 0x1.9fc6c6p-35f, 0.0f,
     0x1.771142p-91f, 0.0f, 0.0f, 0.0f, 0x1.00761cp-36f, 0x1.5c082ap-39f,
     0x1.65cb36p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.198f58p-96f, 0x1.9ee216p-47f,
     0x1.846b22p-9f, 0.0f, 0x1.bd2528p-31f, 0x1.afa614p-82f, 0x1.6120fap-84f, 0.0f,
     0.0f, 0.0f, 0x1.2a074cp-106f, 0x1.2c03f2p-34f, 0.0f, 0x1.3e7556p-8f, 0.0f,
     0x1.298e6ep-12f, 0.0f, 0.0f, 0x1.a9c774p-100f, 0.0f, 0.0f, 0x1.70337p-88f,
     0x1.7ed724p-28f, 0.0f, 0.0f, 0.0f, 0x1.7dcd38p-32f, 0x1.f7eb3p-20f, 0.0f,
     0x1.3e6002p-32f, 0.0f, 0x1.ff4856p-108f, 0x1.c24f64p-43f, 0.0f, 0x1.93cdecp-104f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.cf5312p-74f, 0x1.b1b19ap-63f, 0x1.9e5f56p-14f, 0.0f,
     0x1.7ec3e2p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.347242p-118f, 0x1.f667ecp-118f,
     0x1.a06c1cp-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a8f4e2p-115f, 0.0f, 0.0f,
     0x1.85a888p-121f, 0.0f, 0.0f, 0.0f, 0x1.a4d122p-120f, 0x1.05a44cp-62f,
     0x1.aa2386p-10f, 0x1.1cda46p-78f, 0x1.1300aap-109f, 0x1.cfdccep-38f, 0.0f,
     0x1.c07aeap-52f, 0.0f, 0x1.0fde82p-55f, 0x1.11751ep-62f, 0x1.efb214p-112f,
     0x1.ab6b9ep-46f, 0x1.fbcd26p-107f, 0.0f, 0.0f, 0x1.8284fap-114f, 0x1.f87244p-34f,
     0x1.1b5b46p-80f, 0.0f, 0x1.ccb8d8p-75f, 0x1.dbb598p-99f, 0x1.b55b4ap-23f, 0.0f,
     0x1.1b036ep-45f, 0.0f, 0x1.b22cc2p-104f, 0.0f, 0x1.077c62p-121f, 0.0f,
     0x1.ebf7ecp-34f, 0x1.28738ap-77f, 0x1.f41422p-93f, 0.0f, 0.0f, 0x1.fc52bap-79f,
     0x1.06c374p-125f, 0x1.9f6c0cp-44f, 0x1.f09b28p-36f, 0.0f, 0x1.c8420ap-80f,
     0x1.479e24p-33f, 0x1.48ec5p-86f, 0x1.d9333cp-49f, 0x1.7f6eap-53f, 0.0f, 0.0f,
     0.0f, 0x1.931db6p-7f, 0x1.efddbep-87f, 0x1.2f52ccp-117f, 0.0f, 0x1.14d97ap-69f,
     0.0f, 0x1.e0dd7ep-100f, 0.0f, 0.0f, 0.0f, 0x1.917b0ep-109f, 0.0f, 0.0f,
     0x1.15459ep-17f, 0.0f, 0x1.8e47aap-57f, 0x1.1df8e6p-98f, 0x1.81c06ep-100f,
     0x1.a9a352p-70f, 0x1.46c99ep-24f, 0x1.3cf9aap-79f, 0.0f, 0x1.b853fap-91f,
     0x1.9cb73p-29f, 0.0f, 0x1.a83db8p-27f, 0x1.24c3acp-66f, 0x1.eee912p-42f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e4bcc4p-23f, 0.0f, 0x1.a0f3dcp-55f,
     0x1.41aa88p-126f, 0x1.7af29cp-88f, 0.0f, 0.0f, 0x1.709362p-114f, 0x1.4e7364p-93f,
     0x1.deb1dcp-109f, 0x1.15be84p-78f, 0.0f, 0.0f, 0.0f, 0x1.1b34b6p-76f,
     0x1.1a195ep-2f, 0.0f, 0x1.02b754p-36f, 0x1.a6d8a4p-96f, 0.0f, 0.0f,
     0x1.8a5144p-23f, 0.0f, 0x1.ebfde2p-78f, 0x1.da7414p-64f, 0x1.8178dp-60f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f0e3eep-71f, 0x1.eb95a4p-88f, 0x1.1b319cp-109f,
     0x1.07cc7ap-46f, 0.0f, 0.0f, 0x1.0b5364p-82f, 0x1.3be9cep-54f, 0x1.32262ap-34f,
     0.0f, 0x1.10dbdep-71f, 0.0f, 0.0f, 0x1.5b6ac4p-117f, 0.0f, 0.0f, 0x1.472bc2p-86f,
     0.0f, 0x1.400774p-83f, 0.0f, 0.0f, 0x1.dd433ep-2f, 0.0f, 0x1.5735cp-67f,
     0x1.774c8p-76f, 0.0f, 0.0f, 0x1.affedp-17f, 0x1.ca7bb6p-116f, 0x1.8bbee4p-9f,
     0.0f, 0x1.5247c6p-43f, 0.0f, 0.0f, 0x1.5757bp-45f, 0x1.d9d0f6p-22f,
     0x1.c0b07p-51f, 0.0f, 0x1.8f4536p-48f, 0x1.059a92p-115f, 0x1.78582p-40f, 0.0f,
     0x1.abbcbep-47f, 0.0f, 0x1.caa6eep-74f, 0.0f, 0.0f, 0.0f, 0x1.91427p-24f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.854064p-41f, 0x1.07d3fcp-98f, 0.0f,
     0x1.512912p-92f, 0.0f, 0.0f, 0x1.84b52ap-41f, 0.0f, 0.0f, 0.0f, 0x1.130e1ep-92f,
     0x1.9a705p-93f, 0x1.898436p-113f, 0x1.6a6476p-66f, 0.0f, 0.0f, 0x1.e9ee42p-16f,
     0x1.69a15ap-5f, 0.0f, 0.0f, 0x1.6f5d3cp-46f, 0.0f, 0x1.eaa0dcp-126f,
     0x1.672334p-52f, 0.0f, 0.0f, 0.0f, 0x1.593858p-117f, 0.0f, 0.0f, 0.0f,
     0x1.bb5cc4p-1f, 0.0f, 0x1.01672ep-112f, 0x1.38064p-13f, 0.0f, 0x1.d0c91cp-114f,
     0x1.8b288ap-6f, 0.0f, 0x1.be98a2p-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c9e0fp-15f, 0x1.2c6732p-75f, 0.0f, 0.0f, 0x1.5669cep-101f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.484d1p-36f, 0x1.1bb488p-105f, 0x1.0d9e72p-125f, 0x1.5fb664p-84f, 0.0f,
     0.0f, 0x1.2866cep-32f, 0x1.3a60dep-43f, 0x1.f053ccp-63f, 0.0f, 0.0f,
     0x1.1925fap-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3b76a4p-4f, 0x1.28ceaep-87f,
     0x1.ffc95cp-111f, 0.0f, 0.0f, 0.0f, 0x1.0966cp-1f, 0x1.e90494p-125f, 0.0f, 0.0f,
     0x1.e4a83ep-43f, 0.0f, 0x1.1f284p-56f, 0.0f, 0x1.ad7168p-71f, 0.0f,
     0x1.0627f2p-74f, 0.0f, 0.0f, 0x1.5e6d2ep-120f, 0.0f, 0x1.dff3fep-17f,
     0x1.ac7972p-88f, 0.0f, 0.0f, 0x1.10aec2p-117f, 0x1.1a647cp-18f, 0x1.fad5c2p-76f,
     0.0f, 0.0f, 0x1.bec0d6p-54f, 0x1.3e5592p-21f, 0x1.3e3916p-85f, 0x1.288e7p-89f,
     0.0f, 0x1.10b9c6p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ed0df6p-18f, 0x1.782048p-31f,
     0.0f, 0x1.baefe8p-30f, 0.0f, 0x1.0fedfap-17f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fb6418p-43f, 0.0f, 0x1.c88a2ep-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e1f49cp-95f, 0.0f, 0.0f, 0x1.0d489ep-116f, 0x1.ba17c2p-43f, 0.0f,
     0x1.630ba6p-100f, 0.0f, 0.0f, 0.0f, 0x1.ab7936p-88f, 0x1.5bac2ap-85f, 0.0f,
     0x1.5a662ap-59f, 0.0f, 0.0f, 0.0f, 0x1.021826p-38f, 0.0f, 0x1.065622p-79f, 0.0f,
     0.0f, 0.0f, 0x1.774e8p-16f, 0x1.1aaff2p-124f, 0.0f, 0.0f, 0x1.59002cp-25f, 0.0f,
     0.0f, 0x1.2e1b7p-50f, 0x1.20a712p-70f, 0x1.0172ccp-44f, 0.0f, 0.0f,
     0x1.816a9ep-115f, 0x1.f5addep-92f, 0x1.53071ap-90f, 0x1.5c70b4p-44f,
     0x1.89a732p-33f, 0x1.b36f54p-8f, 0.0f, 0x1.fae7bep-35f, 0.0f, 0.0f, 0.0f,
     0x1.4aa62p-36f, 0x1.b98c72p-77f, 0x1.32869ep-13f, 0.0f, 0x1.5892e8p-5f,
     0x1.24e80ep-94f, 0.0f, 0x1.ee9ebcp-44f, 0x1.8692f2p-106f, 0.0f, 0.0f,
     0x1.781b66p-38f, 0x1.6dbc7ap-11f, 0.0f, 0x1.bb8acap-9f, 0x1.4610a2p-52f, 0.0f,
     0.0f, 0.0f, 0x1.4ee0c8p-90f, 0.0f, 0x1.72159ep-33f, 0.0f, 0x1.64064cp-55f,
     0x1.8ff52p-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4ab09p-103f, 0.0f, 0x1.1ba33ep-35f,
     0.0f, 0.0f, 0.0f, 0x1.519c3p-2f, 0x1.1d0c32p-94f, 0.0f, 0x1.d1b68p-25f,
     0x1.c24662p-82f, 0.0f, 0.0f, 0.0f, 0x1.7f4cbep-94f, 0x1.bbe01ep-100f, 0.0f,
     0x1.46fec4p-70f, 0.0f, 0x1.bf903p-14f, 0.0f, 0x1.68f1d8p-66f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.6e4e8cp-14f, 0x1.4f2308p-28f, 0.0f, 0x1.6490d6p-69f, 0.0f,
     0x1.4d9056p-113f, 0x1.123eeep-122f, 0.0f, 0x1.459076p-54f, 0.0f, 0x1.83da2ap-39f,
     0x1.07e44cp-119f, 0x1.da04bep-99f, 0x1.54be68p-89f, 0x1.ac3752p-62f, 0.0f, 0.0f,
     0.0f, 0x1.52999p-30f, 0.0f, 0x1.2f7b2p-50f, 0.0f, 0x1.9c5e82p-102f,
     0x1.c4a092p-118f, 0.0f, 0.0f, 0x1.01512p-76f, 0.0f, 0.0f, 0x1.e4e1d4p-1f, 0.0f,
     0x1.24d074p-75f, 0x1.fa3fcap-68f, 0.0f, 0x1.0398a2p-95f, 0.0f, 0.0f, 0.0f,
     0x1.150356p-32f, 0x1.6c819p-61f, 0.0f, 0x1.3e9cfp-102f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.d2fad8p-121f, 0x1.9094dep-66f, 0.0f, 0x1.fa75acp-35f, 0.0f, 0.0f, 0.0f,
     0x1.7b9836p-123f
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
            tmp1 = Sleef_finz_sinf4_u10avx2128(tmp0);
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
    printf("Sleef_finz_sinf4_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_sinf4_u10avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
