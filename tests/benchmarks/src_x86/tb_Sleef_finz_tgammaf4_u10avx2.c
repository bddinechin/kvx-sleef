/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_tgammaf4_u10avx2128.c --function \
 *     Sleef_finz_tgammaf4_u10avx2128 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 4 --function-input-vector-size \
 *     4 --bench --no-embedded-bin --target x86_avx2128
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
     0x1.58b908p-105f, 0x1.bf9bbp-96f, 0x1.195db2p-109f, 0.0f, 0.0f, 0x1.24fcep-15f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.575bf2p-29f, 0x1.3d1e58p-20f, 0.0f, 0x1.da1642p-90f,
     0.0f, 0.0f, 0.0f, 0x1.5b7cfep-101f, 0x1.ac5a5cp-96f, 0x1.821176p-87f,
     0x1.2c224ep-2f, 0x1.59dd42p-61f, 0x1.e70246p-27f, 0.0f, 0x1.e2a076p-30f,
     0x1.30df7p-24f, 0.0f, 0x1.13babcp-8f, 0.0f, 0.0f, 0.0f, 0x1.81998ap-62f,
     0x1.054054p-97f, 0x1.a0a028p-1f, 0x1.6a5e48p-117f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7f1b94p-35f, 0x1.c519e4p-37f, 0x1.dc805ap-124f, 0x1.3e3d3ap-76f, 0.0f,
     0x1.5e4a52p-82f, 0x1.87868cp-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.773854p-59f, 0.0f,
     0.0f, 0x1.68295cp-32f, 0x1.e825bep-65f, 0.0f, 0.0f, 0x1.3f3d3ep-45f, 0.0f, 0.0f,
     0x1.8fd5dap-34f, 0.0f, 0x1.f14386p-91f, 0x1.40f17cp-44f, 0.0f, 0x1.03f1aap-81f,
     0.0f, 0x1.a1e2ecp-53f, 0x1.d68d26p-13f, 0x1.5db23cp-61f, 0.0f, 0x1.937456p-101f,
     0.0f, 0x1.6fac98p-123f, 0x1.f2431ep-80f, 0.0f, 0x1.ea69d2p-110f, 0.0f, 0.0f,
     0x1.d6e734p-107f, 0.0f, 0x1.b689fap-67f, 0x1.d885a2p-125f, 0x1.3b7d6ap-37f, 0.0f,
     0x1.3de542p-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.17ee92p-110f, 0x1.87292p-74f,
     0x1.1c0fc6p-38f, 0x1.5cf632p-4f, 0.0f, 0x1.84f728p-59f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.43d7dcp-34f, 0x1.f2628p-121f, 0.0f, 0x1.28c1bcp-59f, 0.0f, 0.0f,
     0x1.9abbdap-22f, 0x1.35d152p-78f, 0x1.19cab4p-76f, 0x1.2cd122p-18f,
     0x1.6462c2p-36f, 0.0f, 0.0f, 0.0f, 0x1.f31ec6p-84f, 0x1.1eaf0cp-34f, 0.0f,
     0x1.9d3b24p-101f, 0x1.cd1434p-87f, 0.0f, 0x1.f71cc2p-92f, 0x1.f02d64p-119f, 0.0f,
     0.0f, 0x1.4b880ap-71f, 0.0f, 0x1.a08a6p-41f, 0x1.3bf6fap-22f, 0x1.f0ff0ap-86f,
     0.0f, 0.0f, 0x1.e15902p-34f, 0.0f, 0.0f, 0x1.539b1ep-87f, 0x1.771fb2p-27f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e65c76p-21f, 0x1.589918p-76f, 0.0f, 0.0f,
     0x1.c566eep-1f, 0x1.6b66bp-68f, 0.0f, 0x1.bb3b9cp-126f, 0x1.4196aap-46f, 0.0f,
     0.0f, 0x1.16ccc4p-74f, 0.0f, 0x1.276202p-27f, 0.0f, 0x1.019d88p-115f,
     0x1.669774p-50f, 0x1.44f176p-120f, 0x1.d4fbf6p-35f, 0.0f, 0.0f, 0x1.7215bcp-81f,
     0.0f, 0.0f, 0.0f, 0x1.def064p-24f, 0.0f, 0x1.b1d664p-33f, 0x1.1f0afep-32f, 0.0f,
     0.0f, 0x1.c026cap-1f, 0x1.fd39e2p-105f, 0x1.b410dap-90f, 0x1.d54fbp-77f, 0.0f,
     0.0f, 0x1.e4978cp-103f, 0.0f, 0.0f, 0.0f, 0x1.ab9142p-87f, 0.0f, 0x1.49f216p-23f,
     0x1.a8bc56p-114f, 0.0f, 0.0f, 0x1.ad2aap-74f, 0.0f, 0.0f, 0x1.abf28ep-12f,
     0x1.5cff8cp-1f, 0x1.2cd6d2p-65f, 0.0f, 0x1p0f, 0x1.aa093cp-126f, 0x1.80adfep-65f,
     0x1.7cfe24p-80f, 0x1.0b386cp-9f, 0.0f, 0.0f, 0x1.04f556p-49f, 0x1.616a6p-124f,
     0.0f, 0.0f, 0.0f, 0x1.aea15ep-10f, 0x1.0b668cp-66f, 0.0f, 0x1.02a93p-20f,
     0x1.b5f656p-102f, 0.0f, 0.0f, 0x1.03d36p-62f, 0x1.eff75ep-57f, 0x1.9c8374p-51f,
     0.0f, 0.0f, 0x1.55714cp-69f, 0.0f, 0x1.b3788p-62f, 0.0f, 0.0f, 0.0f,
     0x1.b3869p-65f, 0.0f, 0x1.a46bacp-58f, 0x1.8f4b58p-28f, 0x1.ce4af8p-28f,
     0x1.1b750ap-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8d912cp-5f, 0x1.8a0398p-116f, 0.0f,
     0x1.f3ea78p-32f, 0.0f, 0.0f, 0x1.170586p-66f, 0.0f, 0x1.79de44p-97f, 0.0f, 0.0f,
     0x1.e495dcp-118f, 0x1.c5ede6p-83f, 0.0f, 0.0f, 0x1.afc858p-21f, 0.0f,
     0x1.4532a6p-64f, 0.0f, 0.0f, 0x1.f35556p-61f, 0.0f, 0.0f, 0x1.94179ep-103f,
     0x1.b1a8bap-25f, 0x1.0090f2p-61f, 0x1.1d5c92p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ca9486p-41f, 0x1.52546p-120f, 0x1.3230a2p-122f, 0.0f, 0.0f,
     0x1.1019f6p-54f, 0x1.91ea96p-93f, 0.0f, 0.0f, 0.0f, 0x1.9a9b4cp-14f, 0.0f, 0.0f,
     0x1.e9e1cp-41f, 0x1.180322p-39f, 0x1.17cf48p-90f, 0x1.b91b0ap-43f,
     0x1.a175d8p-7f, 0x1.ed440ap-52f, 0.0f, 0x1.8de3bep-99f, 0.0f, 0.0f,
     0x1.0af18ep-57f, 0x1.9d9f7cp-115f, 0.0f, 0.0f, 0.0f, 0x1.0eac9cp-2f, 0.0f,
     0x1.748a9p-119f, 0x1.bd3d78p-1f, 0.0f, 0x1.ce398cp-60f, 0x1.b1b186p-99f, 0.0f,
     0.0f, 0x1.0d9d8cp-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d5de14p-57f, 0.0f, 0.0f,
     0x1.98683p-10f, 0x1.89bc58p-12f, 0.0f, 0x1.f42afap-80f, 0x1.332158p-34f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.346b24p-49f, 0x1.757c12p-82f, 0x1.bd61cap-67f,
     0x1.5d6712p-71f, 0.0f, 0x1.86eba4p-25f, 0x1.72c00cp-65f, 0x1.801b5cp-108f, 0.0f,
     0x1.3e4cbp-11f, 0x1.c9fdc4p-96f, 0.0f, 0.0f, 0x1.f3ea66p-70f, 0x1.25e7c8p-75f,
     0.0f, 0x1.10547ap-6f, 0.0f, 0.0f, 0x1.1ff704p-53f, 0x1.6b93b8p-41f, 0.0f,
     0x1.1b2bep-64f, 0.0f, 0x1.cbde56p-53f, 0.0f, 0x1.34428ap-20f, 0x1.9064f8p-88f,
     0x1.1fc434p-49f, 0.0f, 0.0f, 0x1.59bab4p-30f, 0x1.b6d006p-41f, 0x1.806638p-94f,
     0x1.1d0b5ap-90f, 0.0f, 0x1.fd9544p-32f, 0x1.8e6c92p-36f, 0.0f, 0.0f, 0.0f,
     0x1.1eb2a6p-93f, 0.0f, 0.0f, 0x1.e5d492p-17f, 0.0f, 0x1.c57d9ap-39f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b9a14p-100f, 0.0f, 0.0f, 0.0f, 0x1.e44d5cp-84f,
     0x1.9f6a6p-27f, 0.0f, 0x1.1451f8p-47f, 0.0f, 0x1.c48754p-7f, 0.0f,
     0x1.c41d6ep-41f, 0.0f, 0x1.4d622ap-79f, 0x1.a540ecp-8f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.1b9e1ap-90f, 0x1.389516p-54f, 0x1.7cd4bep-11f, 0.0f, 0.0f, 0.0f,
     0x1.bb4684p-67f, 0x1.158c96p-119f, 0.0f, 0.0f, 0x1.7833ccp-23f, 0.0f,
     0x1.f973ep-123f, 0x1.1b241p-31f, 0x1.b1124p-15f, 0.0f, 0x1.c4e568p-28f,
     0x1.1abed6p-94f, 0x1.3f1c9cp-67f, 0.0f, 0.0f, 0.0f, 0x1.482638p-118f,
     0x1.db82b8p-63f, 0.0f, 0.0f, 0.0f, 0x1.f54ab4p-122f, 0x1.72443p-100f,
     0x1.f35a54p-79f, 0x1.0bd59ap-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c757d8p-10f, 0.0f, 0.0f, 0.0f, 0x1.2f4ce6p-95f, 0x1.f896eap-75f,
     0x1.6d3394p-110f, 0.0f, 0x1.ef8e08p-65f, 0x1.6650acp-84f, 0x1.8769c4p-16f,
     0x1.cf619p-117f, 0.0f, 0x1.84e9d8p-111f, 0.0f, 0.0f, 0x1.dfec32p-82f, 0.0f,
     0x1.da78e8p-43f, 0x1.c7eae6p-65f, 0x1.d476dep-65f, 0x1.972966p-3f,
     0x1.5cee88p-80f, 0x1.7f0bcep-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.09e3a8p-112f,
     0.0f, 0x1.da6704p-26f, 0x1.81e5fp-7f, 0.0f, 0.0f, 0x1.e49bb4p-121f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e8982p-48f, 0x1.c891f6p-104f, 0.0f, 0x1.97ff68p-36f,
     0x1.adb5fcp-109f, 0.0f, 0x1.14b788p-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4f7d7ap-28f,
     0x1.e18b16p-6f, 0.0f, 0x1.054998p-10f, 0x1.9f0878p-11f, 0.0f, 0.0f,
     0x1.c9b956p-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.768d88p-32f, 0x1.302a0cp-62f,
     0x1.3b07e8p-100f, 0x1.2e1004p-48f, 0.0f, 0x1.49ca68p-30f, 0.0f, 0x1.d0246p-123f,
     0.0f, 0.0f, 0.0f, 0x1.d29d6ep-54f, 0.0f, 0x1p0f, 0.0f, 0x1.abdc9ep-6f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0351d4p-98f, 0x1.d439c4p-85f, 0.0f,
     0x1.52ed0ep-102f, 0.0f, 0x1.3d462ep-28f, 0.0f, 0.0f, 0.0f, 0x1.2044b8p-41f,
     0x1.4a9ddep-30f, 0x1.8858e8p-4f, 0x1.65e62p-35f, 0x1.2e00a8p-17f, 0x1.a87e9ap-5f,
     0x1.3657eap-60f, 0x1.8c2718p-122f, 0.0f, 0x1.6414aap-87f, 0.0f, 0x1.95771ap-65f,
     0x1.14e9d4p-26f, 0.0f, 0x1.8e1184p-73f, 0x1.98541ep-119f, 0x1.6568f2p-79f, 0.0f,
     0x1.f4e93ep-5f, 0x1.43784cp-47f, 0x1.9deb76p-46f, 0x1.00680ep-54f, 0.0f, 0.0f,
     0x1.f87ddp-90f, 0.0f, 0x1.e5a158p-113f, 0x1.3ad1acp-106f, 0x1.faa0ccp-109f,
     0x1.b242e8p-78f, 0x1.694c3ep-30f, 0x1.34f688p-48f, 0.0f, 0x1.6dbc9ep-61f,
     0x1.da1072p-6f, 0x1.539b7ap-67f, 0.0f, 0.0f, 0x1.9dc148p-108f, 0.0f,
     0x1.d17a38p-65f, 0.0f, 0x1.8317fap-60f, 0.0f, 0.0f, 0.0f, 0x1.9a1136p-77f, 0.0f,
     0.0f, 0x1.e5a23cp-12f, 0x1.90d3dep-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a00f2ep-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.07ae96p-124f,
     0x1.ac9222p-53f, 0.0f, 0x1.3de56ap-54f, 0.0f, 0x1.d18b3p-118f, 0.0f,
     0x1.a6425ep-26f, 0x1.72c568p-46f, 0x1.18c932p-81f, 0.0f, 0.0f, 0x1.b8cb4ep-32f,
     0.0f, 0x1.a5b8bap-18f, 0x1.abcd92p-72f, 0x1.2a28c2p-36f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3d7646p-66f, 0x1.af5624p-25f, 0.0f, 0x1.33916p-70f, 0.0f, 0x1.d7711ap-110f,
     0.0f, 0x1.ff0ba4p-112f, 0x1.d974dp-92f, 0.0f, 0.0f, 0x1.0bd198p-2f,
     0x1.0336d2p-102f, 0.0f, 0x1.2068e2p-68f, 0x1.2f355ep-21f, 0x1.89a1eap-115f,
     0x1.f4231ep-117f, 0x1.bd42dap-34f, 0.0f, 0x1.70a7eap-65f, 0x1.2e42d4p-105f,
     0x1.9beebap-1f, 0x1.5973c8p-58f, 0x1.fda80ep-85f, 0.0f, 0.0f, 0x1.0687d8p-109f,
     0x1p0f, 0x1.3a0beep-98f, 0x1.f53f26p-88f, 0x1.ae5b96p-80f, 0x1.b6e218p-60f, 0.0f,
     0.0f, 0x1.2c77f4p-18f, 0x1.eb930ep-24f, 0.0f, 0.0f, 0x1.784daep-44f, 0.0f,
     0x1.80e81p-121f, 0x1.028ff8p-29f, 0x1.d9656cp-120f, 0x1.bbf1b6p-30f, 0.0f, 0.0f,
     0.0f, 0x1.98bb12p-104f, 0.0f, 0x1.26e0f4p-125f, 0x1.e180b8p-2f, 0x1.55fea6p-122f,
     0.0f, 0.0f, 0x1.c3ef56p-12f, 0.0f, 0x1.c01b96p-78f, 0.0f, 0.0f, 0.0f,
     0x1.7cf1cep-52f, 0.0f, 0.0f, 0x1.4a3d78p-99f, 0.0f, 0x1.97b5dap-57f,
     0x1.7c3162p-73f, 0.0f, 0.0f, 0.0f, 0x1.5556b2p-48f, 0x1.36b2dep-82f, 0.0f, 0.0f,
     0x1.03c7d2p-32f, 0.0f, 0x1.1581c8p-21f, 0x1.7b5fa2p-46f, 0.0f, 0x1.6f1d56p-19f,
     0x1.f28ee2p-82f, 0x1.dc4bdcp-68f, 0x1.602a7ap-21f, 0.0f, 0x1.4da8c2p-96f, 0.0f,
     0x1.4ace18p-97f, 0.0f, 0x1.b3e04ep-29f, 0x1.1db852p-55f, 0.0f, 0.0f, 0.0f,
     0x1.398704p-96f, 0.0f, 0x1.053f7p-112f, 0.0f, 0.0f, 0.0f, 0x1.73e7e2p-34f,
     0x1.63e1fp-91f, 0.0f, 0.0f, 0x1.e02422p-5f, 0x1.63fa9p-119f, 0x1.abbb88p-86f,
     0.0f, 0x1.893054p-31f, 0.0f, 0.0f, 0x1.e7304p-81f, 0x1.c4f206p-35f, 0.0f,
     0x1.31e26p-109f, 0.0f, 0x1.77dd78p-40f, 0.0f, 0.0f, 0.0f, 0x1.c7a43ap-100f,
     0x1.ec8dd8p-9f, 0x1.680116p-1f, 0.0f, 0x1p0f, 0x1.569114p-34f, 0x1.bfca18p-106f,
     0x1.2393a6p-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1a6e64p-44f, 0x1.88176ap-77f,
     0x1.96d316p-26f, 0.0f, 0x1.37af0ap-8f, 0x1.1b09b8p-104f, 0.0f, 0x1.e8252p-87f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.224e9cp-109f, 0x1.289c1ep-65f, 0.0f, 0x1.041faap-62f,
     0x1.a77134p-25f, 0.0f, 0x1.ecca9p-9f, 0.0f, 0.0f, 0x1.2c79acp-105f,
     0x1.e8071ep-96f, 0.0f, 0.0f, 0x1.20d6bp-110f, 0.0f, 0.0f, 0.0f, 0x1.eed34cp-108f,
     0x1.d50998p-46f, 0.0f, 0x1.d58cb2p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5b4006p-74f,
     0.0f, 0x1.f5d3acp-87f, 0.0f, 0x1.0e4592p-94f, 0.0f, 0x1.00ad8p-126f,
     0x1.8d654ap-41f, 0.0f, 0x1.f0d16p-41f, 0x1.fbfc44p-111f, 0.0f, 0x1.09ba0cp-113f,
     0x1.11a98cp-31f, 0x1.9e496p-31f, 0.0f, 0.0f, 0x1.bdbf6cp-45f, 0.0f,
     0x1.8074dp-76f, 0.0f, 0.0f, 0.0f, 0x1.6ab3aap-17f, 0x1.e02246p-5f, 0.0f, 0.0f,
     0x1.7c5c4ap-30f, 0x1.9ea13ap-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.218fb2p-47f,
     0.0f, 0.0f, 0.0f, 0x1.da763cp-29f, 0x1.2c42ecp-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.235c86p-13f, 0x1.de0faap-113f, 0x1.d8da6ep-44f, 0x1.3cdd84p-63f,
     0.0f, 0x1.81a2ecp-64f, 0x1.9d126ep-57f, 0x1.975574p-90f, 0.0f, 0.0f,
     0x1.2c424ap-27f, 0x1.de0b34p-16f, 0x1.e78236p-19f, 0x1.9beecp-97f, 0.0f, 0.0f,
     0.0f, 0x1.b82522p-6f, 0.0f, 0.0f, 0x1.4df804p-84f, 0.0f, 0x1p0f, 0.0f, 0.0f,
     0.0f, 0x1.0a608p-70f, 0.0f, 0x1.2cd75ep-120f, 0x1.9fab06p-110f, 0x1.3c386ep-29f,
     0x1.82819ap-44f, 0x1.0aebf2p-58f, 0x1.7400b4p-32f, 0x1.2e041cp-41f,
     0x1.86890ep-83f, 0x1.4abcd2p-109f, 0.0f, 0.0f, 0x1.dbf944p-86f, 0x1.c932ap-70f,
     0x1.fca0e6p-77f, 0x1.dbf39ep-67f, 0.0f, 0x1.e9c2c8p-125f, 0.0f, 0.0f, 0.0f,
     0x1.985b0cp-23f, 0.0f, 0x1.936fc4p-103f, 0.0f, 0x1.1d3a12p-6f, 0.0f, 0.0f, 0.0f,
     0x1.0893d4p-14f, 0.0f, 0.0f, 0x1.b7a0b6p-28f, 0x1.320988p-14f, 0x1.d81472p-51f,
     0x1.b52eap-18f, 0.0f, 0x1.15e1a8p-106f, 0x1.a5b3d2p-75f, 0x1.34b524p-53f,
     0x1.fd1e1p-87f, 0.0f, 0.0f, 0x1.000098p-100f, 0x1.24a2c8p-75f, 0x1.254ep-107f,
     0x1.da0354p-56f, 0.0f, 0x1.c32c1p-46f, 0x1.8fecb8p-71f, 0x1.686808p-30f,
     0x1.2a7b22p-43f, 0x1.e41482p-16f, 0x1.cedcfcp-117f, 0x1.0a245ep-52f,
     0x1.88abc2p-38f, 0x1.395402p-116f, 0.0f, 0x1.a5c716p-38f, 0.0f, 0.0f,
     0x1.4751cep-47f, 0x1.3f31b8p-85f, 0x1.d0c976p-63f, 0x1.69ee9ap-45f,
     0x1.06e428p-36f, 0.0f, 0.0f, 0x1.d7374ep-86f, 0.0f, 0x1.4c4cd4p-64f,
     0x1.33cc5p-95f, 0x1.bf4d62p-96f, 0x1.32c9e8p-105f, 0.0f, 0x1.9b9d5ep-42f,
     0x1.661772p-67f, 0.0f, 0x1.c70896p-45f, 0x1.930c02p-93f, 0x1.55b51cp-67f,
     0x1.654e1cp-52f, 0x1.ba2e52p-53f, 0.0f, 0.0f, 0.0f, 0x1.d1ee1p-17f, 0.0f,
     0x1.7c77a2p-94f, 0x1.e659bap-2f, 0.0f, 0x1.d32334p-22f, 0.0f, 0.0f, 0.0f,
     0x1.e707cp-81f, 0x1.76b41ep-48f, 0x1.4bd80ap-49f, 0x1.c4c24p-8f, 0.0f,
     0x1.3caedp-70f, 0.0f, 0.0f, 0x1.df354p-43f, 0x1.81c734p-98f, 0x1.948c28p-10f,
     0x1.c18e7p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f92daap-73f,
     0x1.f56d7ap-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7e6d8ep-34f, 0.0f,
     0.0f, 0.0f, 0x1.21053ap-32f, 0.0f, 0.0f, 0.0f, 0x1.c2b726p-42f, 0x1.12d0bcp-77f,
     0.0f, 0x1.161602p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e59bc2p-14f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.c61654p-62f, 0x1.0004d6p-108f
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
            tmp1 = Sleef_finz_tgammaf4_u10avx2128(tmp0);
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
    printf("Sleef_finz_tgammaf4_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_tgammaf4_u10avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
