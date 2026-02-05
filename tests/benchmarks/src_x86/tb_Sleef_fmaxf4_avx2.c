/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_fmaxf4_avx2128.c --function Sleef_fmaxf4_avx2128 --arity 2 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32,binary32 \
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
     0x1.bd7d6p-90f, 0.0f, 0.0f, 0x1.df9b32p-111f, 0.0f, 0x1.d6461ep-106f, 0.0f,
     0x1.b68ef8p-92f, 0.0f, 0x1.5dea4ep-17f, 0.0f, 0x1.2d7572p-9f, 0.0f,
     0x1.5cedfcp-93f, 0x1.86d412p-44f, 0.0f, 0x1.00d252p-71f, 0.0f, 0x1.ec34fp-10f,
     0.0f, 0x1.141474p-32f, 0.0f, 0.0f, 0x1.f19e58p-124f, 0x1.129c3cp-67f,
     0x1.d3ec46p-15f, 0.0f, 0x1.8bb4b4p-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f005a8p-33f, 0.0f, 0.0f, 0x1.c8cacap-121f, 0.0f, 0x1.50214p-118f,
     0x1.18509ep-91f, 0x1.de40a8p-73f, 0x1.4522b4p-121f, 0x1.76d85cp-78f, 0.0f,
     0x1.0fd42cp-12f, 0.0f, 0.0f, 0x1.ae8184p-116f, 0x1.b3625ep-114f, 0x1.861b9p-30f,
     0x1.88b186p-122f, 0x1.5585e8p-8f, 0.0f, 0x1.661492p-30f, 0.0f, 0.0f, 0.0f,
     0x1.1ae84cp-4f, 0x1.e4b75ap-78f, 0.0f, 0x1.9219eap-57f, 0x1.a2e294p-2f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b309eep-119f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.48c968p-22f, 0x1.0088dcp-60f, 0.0f, 0x1.7a07e4p-104f, 0.0f, 0x1.bb6a1p-69f,
     0.0f, 0x1.eae908p-116f, 0x1.627286p-89f, 0x1.130dbap-90f, 0.0f, 0.0f,
     0x1.dc2b0ap-36f, 0.0f, 0.0f, 0x1.1a2fep-14f, 0.0f, 0x1.eee85p-83f, 0.0f,
     0x1.f0a496p-116f, 0x1.48692ap-16f, 0.0f, 0x1.5c9788p-85f, 0x1.431c4cp-31f, 0.0f,
     0.0f, 0x1.c0092cp-22f, 0.0f, 0x1.bb71eep-96f, 0x1.a84c9ap-106f, 0.0f, 0.0f,
     0x1.927cb2p-93f, 0.0f, 0.0f, 0.0f, 0x1.a78748p-112f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.eaa696p-117f, 0.0f, 0.0f, 0x1.421574p-116f, 0.0f, 0x1.57fa0ep-94f,
     0x1.a8b38ap-110f, 0x1.6b0bb6p-119f, 0x1.01b688p-25f, 0.0f, 0x1.f22f88p-10f,
     0x1.6a326ep-126f, 0x1.bf34b6p-126f, 0x1.3529fcp-57f, 0x1.3fc61ap-41f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.9d0de6p-118f, 0x1.6c81d2p-24f, 0.0f, 0x1.f2154p-39f,
     0x1.c921b4p-18f, 0x1.746b92p-31f, 0.0f, 0x1.6baf36p-47f, 0x1.09526cp-100f,
     0x1.9b9038p-101f, 0x1.963f2ep-124f, 0.0f, 0x1.95da68p-9f, 0x1.ad6a94p-96f, 0.0f,
     0x1.f181fcp-74f, 0x1.f2f46ap-54f, 0.0f, 0x1.a4e014p-10f, 0x1.95855ap-41f, 0.0f,
     0.0f, 0x1.99e804p-65f, 0x1.c7502p-5f, 0x1.cce1d8p-5f, 0x1.74bc12p-108f,
     0x1.44c18ap-67f, 0.0f, 0.0f, 0x1.96c29cp-56f, 0x1.b5196p-57f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.933276p-98f, 0x1.6299ecp-21f, 0.0f, 0x1.b447bap-27f,
     0x1.9de9cap-51f, 0.0f, 0x1.913ccp-33f, 0x1.7de1bcp-51f, 0.0f, 0x1.ceb9a6p-20f,
     0x1.fb58a6p-111f, 0x1.c924b2p-6f, 0x1.896f3ap-116f, 0.0f, 0.0f, 0x1.9f1154p-44f,
     0x1.cc1792p-30f, 0x1.e3b326p-102f, 0x1.8760ccp-71f, 0.0f, 0.0f, 0x1.188316p-119f,
     0.0f, 0.0f, 0x1.5eb5fp-97f, 0.0f, 0.0f, 0.0f, 0x1.9d13fcp-37f, 0x1.e937c4p-4f,
     0x1.2a04d8p-10f, 0.0f, 0.0f, 0x1.1c5624p-53f, 0x1.dc9ef2p-71f, 0.0f,
     0x1.f8b786p-13f, 0x1.7434c6p-89f, 0x1.0529dep-68f, 0x1.61aa9ep-33f,
     0x1.ee6cdcp-74f, 0.0f, 0.0f, 0x1.69ff5ap-43f, 0x1.a68d3cp-85f, 0x1.b503f2p-120f,
     0x1.1da5ecp-50f, 0.0f, 0.0f, 0.0f, 0x1.7e332ap-86f, 0.0f, 0x1.7bf73ep-47f,
     0x1.0b6014p-88f, 0x1.8d3186p-64f, 0x1.d3571ep-18f, 0x1.41edf2p-51f,
     0x1.677226p-49f, 0.0f, 0x1.50f136p-38f, 0x1.98dcd4p-72f, 0x1.5233a8p-122f,
     0x1.c3474cp-51f, 0.0f, 0.0f, 0.0f, 0x1.0b9dbp-79f, 0x1.df45f6p-78f, 0.0f,
     0x1.521abep-92f, 0.0f, 0x1.6d1b86p-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d21d26p-100f, 0x1.4ef3ecp-126f, 0.0f, 0x1.7136f4p-118f, 0.0f,
     0x1.6853eap-121f, 0.0f, 0x1.aaa12ap-104f, 0x1.89baf8p-61f, 0.0f, 0x1.a91852p-31f,
     0x1.cc70dap-113f, 0x1.ac1adap-60f, 0x1.9b96a4p-114f, 0.0f, 0x1.1e107cp-52f,
     0x1.a21b88p-41f, 0x1.2ec82ep-76f, 0x1.5a5b6ap-6f, 0.0f, 0x1.4fc85ep-25f, 0.0f,
     0x1.39e28cp-113f, 0.0f, 0x1.ccc21p-8f, 0.0f, 0.0f, 0x1.191038p-26f,
     0x1.10aee8p-92f, 0x1.8724fcp-52f, 0.0f, 0x1.b4bbb6p-24f, 0.0f, 0x1.04486ap-52f,
     0.0f, 0x1.5b7774p-1f, 0x1.ef34eep-69f, 0x1.4cbf0ap-56f, 0.0f, 0x1.2ceaacp-11f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cbd58cp-23f, 0.0f, 0.0f, 0x1.67e47ep-102f,
     0.0f, 0x1.be8186p-29f, 0.0f, 0x1.2057a6p-10f, 0.0f, 0x1.12ea4ap-115f,
     0x1.9632cep-65f, 0x1.f09d66p-45f, 0x1.320c32p-54f, 0x1.cd8862p-9f, 0.0f,
     0x1.8f8d54p-37f, 0.0f, 0x1.d666ecp-36f, 0x1.b48e5cp-39f, 0x1.2f02fp-99f,
     0x1.ebaae4p-96f, 0.0f, 0.0f, 0.0f, 0x1.eca136p-10f, 0x1.0c417cp-13f,
     0x1.6fab18p-123f, 0x1.aeeadep-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.095ec2p-113f, 0x1.50c3c4p-79f, 0.0f, 0x1.6f7f78p-63f, 0x1.100e56p-32f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8d027ap-72f, 0.0f, 0x1.6b99cep-111f, 0.0f,
     0.0f, 0x1.c27ba4p-16f, 0x1.ce45bap-120f, 0x1.415e34p-20f, 0.0f, 0x1.638458p-83f,
     0x1.29ddb4p-119f, 0x1.d6bc1cp-88f, 0x1.0651cep-38f, 0.0f, 0x1.9bceb2p-41f,
     0x1.393bd2p-72f, 0x1.b17392p-84f, 0.0f, 0x1.b54cecp-27f, 0.0f, 0.0f,
     0x1.e64172p-70f, 0x1.1e94bap-51f, 0x1.4088b4p-85f, 0.0f, 0.0f, 0x1.0322e6p-9f,
     0x1.54e4bep-110f, 0.0f, 0.0f, 0x1.aefcep-31f, 0x1.63e0d4p-95f, 0.0f,
     0x1.08c7f6p-22f, 0.0f, 0x1.88e26ep-122f, 0x1.74737cp-89f, 0.0f, 0x1.eb913cp-64f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.47c2b6p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.667b3ap-48f, 0x1.46a3cep-118f, 0.0f, 0.0f, 0x1.1faddap-89f, 0.0f,
     0x1.2ac458p-39f, 0.0f, 0.0f, 0x1.a6fc3cp-32f, 0x1.665a6p-65f, 0.0f,
     0x1.16b852p-117f, 0x1.55065p-85f, 0.0f, 0.0f, 0x1.10b31cp-61f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.099714p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fe0878p-29f, 0x1.738762p-23f,
     0.0f, 0x1.f64aaap-16f, 0x1.249a82p-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3b1e3cp-101f, 0x1.7e5064p-52f, 0.0f, 0x1.95b45ap-117f, 0x1.714c14p-47f, 0.0f,
     0.0f, 0x1.a68dcp-85f, 0.0f, 0.0f, 0x1.b1c134p-11f, 0x1.494b52p-93f,
     0x1.6378b8p-73f, 0.0f, 0.0f, 0.0f, 0x1.d0653ap-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ecf8e8p-9f, 0x1.37b8c6p-82f, 0.0f, 0x1.54e86cp-4f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.89a546p-96f, 0x1.12e3d4p-83f, 0x1.7a127ep-56f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b9a0bp-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d78a86p-17f, 0.0f, 0x1.b2c574p-22f,
     0.0f, 0x1.641ep-103f, 0x1p0f, 0.0f, 0x1.24ab1ep-88f, 0x1.410722p-121f, 0.0f,
     0x1.164a7p-53f, 0.0f, 0x1.ab7866p-117f, 0x1.0936a2p-91f, 0.0f, 0x1.141154p-97f,
     0.0f, 0.0f, 0x1.5cdbcap-51f, 0x1.c88d1cp-73f, 0x1.ebc9acp-11f, 0x1.9cb30cp-66f,
     0x1.24945ep-65f, 0x1.92d7aap-46f, 0x1.d0f09ap-1f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9d84ecp-43f, 0x1.0f10a2p-79f, 0x1.aae1p-70f, 0x1.9310d2p-123f,
     0x1.41533ep-68f, 0.0f, 0.0f, 0x1.1375ecp-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e548ep-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.03bcccp-105f, 0.0f, 0.0f, 0.0f,
     0x1.489baep-58f, 0.0f, 0x1.302c44p-25f, 0x1.131478p-117f, 0x1.7df1cap-33f, 0.0f,
     0.0f, 0x1.e093ap-34f, 0x1.20a2f4p-29f, 0.0f, 0x1.94edp-112f, 0x1.955828p-95f,
     0.0f, 0x1.350916p-13f, 0.0f, 0x1.1c789cp-59f, 0x1.dee7dp-29f, 0.0f, 0.0f, 0.0f,
     0x1.718088p-74f, 0.0f, 0x1.1e62fcp-38f, 0x1.faecc8p-99f, 0.0f, 0x1.4b3aeap-48f,
     0x1.3c01fep-104f, 0.0f, 0x1.f1aeeap-1f, 0.0f, 0.0f, 0.0f, 0x1.8e3e18p-87f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.743fd8p-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7dd12ap-61f,
     0.0f, 0x1.4df386p-54f, 0x1.c78c9cp-1f, 0.0f, 0.0f, 0.0f, 0x1.6f4e3ap-68f,
     0x1.b1bf44p-14f, 0x1.c07b8p-82f, 0x1.2354b4p-52f, 0x1.529b5ap-27f, 0.0f, 0.0f,
     0.0f, 0x1.670d38p-99f, 0x1.bf5b14p-96f, 0x1.90886p-75f, 0x1.d5e9bcp-4f,
     0x1.336642p-82f, 0.0f, 0.0f, 0x1.49d606p-69f, 0x1.1ca9a8p-79f, 0.0f, 0.0f,
     0x1.2822f8p-75f, 0.0f, 0.0f, 0x1.4b2cd4p-23f, 0.0f, 0x1.9597f2p-124f, 0.0f, 0.0f,
     0x1p0f, 0.0f, 0x1.de3ac2p-83f, 0x1.ecab82p-44f, 0x1.c50eap-65f, 0x1.abf674p-79f,
     0x1.34f50ep-93f, 0x1.913e08p-93f, 0x1.7ce446p-123f, 0x1.abecc4p-35f, 0.0f, 0.0f,
     0x1.ea037ap-119f, 0.0f, 0.0f, 0.0f, 0x1.6d1ce2p-47f, 0.0f, 0.0f, 0.0f,
     0x1.a8a5e2p-15f, 0.0f, 0.0f, 0.0f, 0x1.f47794p-79f, 0.0f, 0x1.e642f6p-1f,
     0x1.394028p-63f, 0x1.8e2622p-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3f507ep-124f,
     0x1.b275acp-96f, 0x1.f0182ep-26f, 0x1.d85776p-79f, 0x1.559604p-35f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.6d5acp-46f, 0x1.6fa678p-90f, 0.0f, 0.0f, 0x1.abac84p-15f, 0.0f,
     0.0f, 0x1.75ff6cp-78f, 0x1.e69264p-92f, 0x1.c02662p-22f, 0.0f, 0.0f,
     0x1.35253p-38f, 0.0f, 0x1.3b1808p-43f, 0x1p0f, 0.0f, 0x1.831b66p-76f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.64b524p-107f, 0x1.6cfcecp-83f, 0.0f, 0.0f, 0x1.a4a5a6p-25f,
     0.0f, 0x1.b3fee4p-42f, 0.0f, 0x1.0e39ap-65f, 0x1.a7198ep-33f, 0x1.d99f66p-79f,
     0.0f, 0.0f, 0.0f, 0x1.d91dap-43f, 0x1.39e52cp-62f, 0.0f, 0x1.6608c6p-102f, 0.0f,
     0.0f, 0.0f, 0x1.d7025p-13f, 0.0f, 0x1.578312p-70f, 0x1.76bfb4p-62f,
     0x1.a07cd4p-31f, 0.0f, 0.0f, 0.0f, 0x1.4cfa76p-49f, 0x1.7d9d7ep-83f,
     0x1.0e766p-45f, 0.0f, 0x1.42fdf6p-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.07ae42p-55f, 0.0f, 0.0f, 0x1.e9f4aap-42f, 0.0f, 0x1.ecf1p-78f, 0.0f, 0.0f,
     0x1.df669p-115f, 0x1.0003c4p-58f, 0.0f, 0.0f, 0x1.6e7da6p-28f, 0x1.86bf64p-82f,
     0.0f, 0.0f, 0.0f, 0x1.e1dff4p-54f, 0x1.f41b14p-110f, 0x1.80d40cp-55f, 0.0f,
     0x1.71e082p-24f, 0.0f, 0x1.1a05d6p-103f, 0.0f, 0x1.71e07p-4f, 0x1.d42892p-43f,
     0.0f, 0.0f, 0x1.480fd8p-46f, 0x1.dcf09ep-125f, 0x1.663716p-90f, 0.0f, 0.0f, 0.0f,
     0x1.0863a4p-25f, 0.0f, 0x1.a5332p-23f, 0x1p0f, 0.0f, 0x1.f1b1e2p-102f,
     0x1.e1fb9p-37f, 0.0f, 0.0f, 0x1.186186p-50f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.74de18p-60f, 0x1.6f6056p-86f, 0x1.2126b2p-65f, 0x1.13126p-61f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.60c5fep-64f, 0.0f, 0x1.dd6cc6p-81f, 0x1.631708p-33f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.2d8fc2p-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.07657ap-111f,
     0x1.cd9d96p-102f, 0.0f, 0x1.a2b1bap-58f, 0.0f, 0.0f, 0x1.c02aeap-49f, 0.0f,
     0x1.c852fap-21f, 0x1.32c986p-104f, 0x1.10e77p-33f, 0x1.2da41cp-5f, 0.0f, 0.0f,
     0.0f, 0x1.0b6e72p-101f, 0x1.54963cp-8f, 0x1.ee21dcp-49f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.14a95ep-53f, 0.0f, 0x1.7cef3p-117f, 0x1.9a6d4cp-32f, 0.0f, 0.0f, 0.0f,
     0x1.02ca0ap-22f, 0x1.45250cp-109f, 0.0f, 0x1.140998p-114f, 0x1.4acb1ep-85f,
     0x1.1fe94ap-16f, 0.0f, 0x1.36170cp-80f, 0x1.76639ep-22f, 0x1.d20366p-114f,
     0x1.82f89ap-33f, 0.0f, 0x1.c9a104p-96f, 0x1.1ae482p-126f, 0.0f, 0.0f, 0x1p0f,
     0x1.afd014p-44f, 0x1.b43bd6p-61f, 0.0f, 0x1.9c60ccp-72f, 0x1.58f482p-114f,
     0x1.f0427p-124f, 0x1.c2e99cp-2f, 0x1.ecb49p-16f, 0x1.b7be8cp-98f,
     0x1.188caap-100f, 0.0f, 0x1.a38bb4p-5f, 0.0f, 0x1.fd9a3ep-7f, 0x1.a326d6p-58f,
     0.0f, 0x1.c1dacep-87f, 0x1.54b19cp-59f, 0.0f, 0.0f, 0x1.dad1b8p-37f, 0.0f,
     0x1.2d7666p-61f, 0x1.25e9e2p-109f, 0x1.21b00cp-23f, 0x1.33d282p-18f,
     0x1.b36d3ep-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.99ff9cp-93f,
     0x1.6848ccp-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0356bap-67f, 0x1.62d726p-61f,
     0x1.343be2p-10f, 0.0f, 0x1.041c72p-69f, 0x1.39578p-104f, 0x1.5336d6p-46f, 0.0f,
     0.0f, 0x1.971e78p-77f, 0x1.58145p-19f, 0x1.75eebp-63f, 0.0f, 0x1.9332a6p-126f,
     0.0f, 0.0f, 0x1.2eb246p-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ab14fep-50f, 0.0f,
     0x1.52015p-104f, 0x1.d09d5ap-117f, 0x1.ddf9bep-107f, 0x1.d01a82p-45f, 0.0f,
     0x1.9f2736p-78f, 0x1.823e5cp-22f, 0x1.6a7afep-95f, 0x1.3a7f4ep-34f, 0.0f, 0.0f,
     0.0f, 0x1.c18a58p-41f, 0x1.b1f528p-59f, 0x1.3deafap-90f, 0x1.6dc998p-1f,
     0x1.d51332p-12f, 0.0f, 0x1.12cc54p-30f, 0x1.9f9f6ep-109f, 0x1.1a6c52p-44f,
     0x1.31ddbap-89f, 0x1.fb35e6p-44f, 0x1.377364p-2f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5dcafap-53f, 0x1.f34852p-117f, 0x1.a375f4p-92f, 0.0f, 0x1p0f,
     0x1.297354p-106f, 0x1.b5f84ep-30f, 0.0f, 0x1.8a8208p-69f, 0.0f, 0x1.6932fcp-29f,
     0x1.2372a4p-117f, 0x1.35d842p-114f, 0x1.09161ep-126f, 0.0f, 0x1.54b0d4p-49f,
     0.0f, 0.0f, 0x1.09edeap-55f, 0x1.c3145p-106f, 0.0f, 0x1.fece76p-89f, 0.0f, 0.0f,
     0x1.40b5c8p-72f, 0x1.52acc2p-111f, 0.0f, 0.0f, 0x1.e9e366p-108f, 0x1.e6a62p-109f,
     0.0f, 0.0f, 0.0f, 0x1.ec507ep-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d0edb4p-113f,
     0.0f, 0x1.bce322p-29f, 0x1.63b48cp-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.32b6bap-33f,
     0x1.4224d8p-98f, 0x1.96bf9cp-62f, 0x1.f81b2p-28f, 0x1.a1a1a2p-65f,
     0x1.d03398p-27f, 0x1.533a7p-74f, 0.0f, 0x1.219ec8p-49f, 0.0f, 0x1.569948p-55f,
     0.0f, 0x1.98fb1cp-120f, 0x1.567ad4p-23f, 0.0f, 0.0f, 0x1.c9e41ap-4f, 0.0f, 0.0f,
     0x1.e2e1eap-48f, 0.0f, 0.0f, 0x1.07074ap-108f, 0.0f, 0x1.403866p-115f,
     0x1.b363fp-94f, 0.0f, 0.0f, 0x1.594ec6p-92f, 0x1.dc0dfap-33f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c5b15ap-45f, 0.0f, 0.0f, 0x1.6a3e74p-92f, 0x1.aa2014p-2f,
     0x1.287858p-93f, 0.0f, 0.0f, 0x1.6acd88p-32f, 0.0f, 0x1.5df124p-71f, 0.0f, 0.0f
};
static const float external_bench_wrapper_input_table_arg1[1004]  = {
     0x1.11c0b6p-64f, 0.0f, 0x1.cde7d8p-19f, 0x1.94b752p-25f, 0.0f, 0x1.480408p-86f,
     0x1.84bf56p-84f, 0.0f, 0.0f, 0x1.b17ec2p-75f, 0x1.9f83c8p-55f, 0.0f,
     0x1.12bf9cp-80f, 0.0f, 0x1.ed3a4ap-107f, 0.0f, 0.0f, 0.0f, 0x1.0c5734p-39f, 0.0f,
     0x1.514a34p-95f, 0x1.f9e2bp-14f, 0x1.8f7ffep-68f, 0.0f, 0.0f, 0x1.1965p-65f,
     0.0f, 0x1.78229ap-88f, 0.0f, 0x1.dfdcbp-84f, 0x1.00afd8p-106f, 0.0f, 0.0f, 0.0f,
     0x1.f7cf58p-76f, 0.0f, 0x1.c76592p-47f, 0.0f, 0.0f, 0x1.b81b8cp-122f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.74aecap-36f, 0x1.eb8e3ep-98f, 0x1.e19014p-25f, 0.0f,
     0x1.52b694p-55f, 0.0f, 0x1.8fb8eep-7f, 0x1.289932p-117f, 0.0f, 0x1.4024b6p-43f,
     0.0f, 0.0f, 0.0f, 0x1.85c1f8p-6f, 0.0f, 0.0f, 0.0f, 0x1.f1ac54p-9f,
     0x1.02d228p-55f, 0x1.c7741p-73f, 0.0f, 0.0f, 0x1.b7d76p-75f, 0x1.bf875ep-62f,
     0.0f, 0.0f, 0x1.201b66p-2f, 0.0f, 0x1.95afc2p-99f, 0x1.2e41fep-36f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.76136ep-89f, 0x1.b61a4p-64f, 0x1.9be884p-85f, 0.0f,
     0x1.d4894ap-85f, 0.0f, 0.0f, 0.0f, 0x1.16ff4cp-5f, 0.0f, 0x1.1ac33p-124f, 0.0f,
     0x1.420eb6p-92f, 0x1.e1fab8p-126f, 0x1.66f31ap-109f, 0x1.f295d4p-57f,
     0x1.44e63ap-114f, 0x1.2aef0cp-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2e2cecp-45f, 0.0f,
     0x1.74a4acp-30f, 0x1.c05db2p-94f, 0x1.6e20dp-14f, 0x1.3c096ep-48f,
     0x1.99fedp-121f, 0x1.623b38p-33f, 0.0f, 0.0f, 0x1.1f60dp-38f, 0x1.c53cbp-16f,
     0.0f, 0x1.dd6fe6p-29f, 0x1.92f36p-96f, 0.0f, 0x1.a68bd4p-88f, 0.0f, 0.0f,
     0x1.6c8c3p-6f, 0x1.b2f95p-18f, 0x1.78d80ap-16f, 0x1.e71454p-107f, 0.0f,
     0x1.f72942p-89f, 0.0f, 0x1.8f79bap-57f, 0x1.33c71p-90f, 0.0f, 0.0f, 0.0f,
     0x1.02581cp-48f, 0x1.2e006ep-11f, 0x1.0b03bap-44f, 0.0f, 0x1.1d00fap-114f,
     0x1.471844p-88f, 0.0f, 0.0f, 0x1.25e246p-114f, 0x1.24c4f6p-29f, 0.0f,
     0x1.49018ep-49f, 0x1.df20cep-115f, 0x1.a0f83cp-53f, 0x1.dad738p-90f, 0.0f, 0.0f,
     0x1.69fd18p-38f, 0.0f, 0.0f, 0x1.2ea8ap-33f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9fc46ap-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.07b034p-76f, 0x1.48740ap-85f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.dd86e6p-10f, 0.0f, 0x1.8ad536p-19f, 0.0f, 0x1.2ebbf4p-103f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f6aa7p-95f, 0.0f, 0.0f, 0x1.c3c69ap-21f,
     0x1.b681cp-15f, 0x1.70428cp-66f, 0.0f, 0.0f, 0.0f, 0x1.cc56c2p-102f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.cfdf7p-126f, 0x1.3f72eep-125f, 0.0f, 0x1.9634fcp-102f, 0.0f,
     0x1.2a1682p-11f, 0.0f, 0x1.4d473p-75f, 0x1.39a1ep-83f, 0.0f, 0x1.a4230cp-111f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ec2b3p-82f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.2e16dcp-44f, 0.0f, 0x1.6b36cep-106f, 0x1.aa321ap-34f, 0.0f,
     0x1.e11e72p-11f, 0x1.2ee07ap-95f, 0x1.903b78p-115f, 0.0f, 0x1.40a0cap-108f,
     0x1.7ea406p-111f, 0.0f, 0.0f, 0x1.c38e3p-95f, 0.0f, 0.0f, 0.0f, 0x1.a30804p-94f,
     0x1.57676cp-87f, 0x1.213b98p-57f, 0x1.ea214ap-94f, 0.0f, 0x1.97813ep-57f, 0.0f,
     0x1.7d42e8p-48f, 0x1.876bcep-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.939d92p-26f,
     0x1.f79538p-35f, 0x1.f51becp-19f, 0x1.3e0f4cp-105f, 0.0f, 0x1.0f7b76p-91f, 0.0f,
     0.0f, 0.0f, 0x1.f30e1ap-7f, 0x1.ac4c9ep-63f, 0x1.8ed91ap-60f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.bbab9ap-126f, 0.0f, 0x1.8a743ep-17f, 0x1.38bc36p-89f, 0x1.5971c6p-113f,
     0.0f, 0x1.ba4492p-37f, 0.0f, 0x1.3bcedp-10f, 0x1.e1e43ep-119f, 0.0f,
     0x1.b4336cp-125f, 0.0f, 0.0f, 0x1.1ded84p-59f, 0.0f, 0.0f, 0x1.fc17e4p-22f,
     0x1.41e65ap-9f, 0.0f, 0x1.0020e2p-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.035c28p-6f, 0.0f, 0.0f, 0.0f, 0x1.cde05p-50f, 0.0f, 0x1.991224p-52f, 0.0f,
     0x1.335cbp-55f, 0.0f, 0x1.ea4f86p-2f, 0x1.228e6p-47f, 0x1.f2c332p-40f, 0.0f,
     0x1.d029b6p-91f, 0.0f, 0x1.edbf74p-92f, 0x1.639eaap-6f, 0.0f, 0x1.829c5ap-91f,
     0.0f, 0x1.8bc892p-112f, 0.0f, 0.0f, 0x1.482deap-51f, 0x1.4d8b5p-20f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.626366p-100f, 0x1.7d9324p-4f, 0.0f,
     0x1.0b3a4ap-76f, 0.0f, 0x1.d198c8p-15f, 0x1.7c833cp-89f, 0x1.efa644p-110f,
     0x1.31f65p-10f, 0.0f, 0x1.435c52p-28f, 0x1.49b4fap-87f, 0.0f, 0.0f, 0.0f,
     0x1.3cad6p-86f, 0.0f, 0x1.6d62fap-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.883b0ap-19f,
     0.0f, 0x1.e5be6ep-105f, 0x1.f98a24p-123f, 0.0f, 0.0f, 0.0f, 0x1.a0511ep-116f,
     0x1.b115c2p-96f, 0x1.899a2p-24f, 0.0f, 0x1.a8fdecp-124f, 0.0f, 0.0f,
     0x1.59eb8ap-30f, 0.0f, 0x1.7f772ap-125f, 0.0f, 0.0f, 0x1.3ef5cap-91f, 0.0f, 0.0f,
     0x1.ff1b96p-87f, 0x1.19769ap-24f, 0.0f, 0x1.1dbefcp-125f, 0x1.9ffefap-62f, 0.0f,
     0.0f, 0.0f, 0x1.6ded9cp-61f, 0.0f, 0x1.bc945p-17f, 0x1.d42198p-16f, 0.0f,
     0x1.29b5cp-44f, 0x1.b93b62p-69f, 0x1.8e8676p-81f, 0x1.075bep-34f,
     0x1.bdb7dep-62f, 0x1.17d99ap-100f, 0x1.e8eb3p-57f, 0.0f, 0.0f, 0.0f,
     0x1.7b9512p-13f, 0.0f, 0x1.f9b7p-59f, 0x1.a36204p-80f, 0.0f, 0x1.785d74p-22f,
     0.0f, 0x1.d71a06p-27f, 0x1.c6bd3ep-105f, 0x1.35218ap-84f, 0x1.1a7006p-3f,
     0x1.3c8d3cp-113f, 0x1.21f88ep-115f, 0x1.3800bep-53f, 0.0f, 0x1.feea4p-122f, 0.0f,
     0x1.a26b7cp-76f, 0x1.e761c2p-22f, 0.0f, 0x1.10e81p-105f, 0x1.75c69ap-43f, 0.0f,
     0x1.2910eep-118f, 0x1.7e788p-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.83e0a6p-106f,
     0x1.88b9bp-15f, 0.0f, 0x1.a63d42p-74f, 0.0f, 0.0f, 0.0f, 0x1.148088p-92f, 0.0f,
     0x1.8e1864p-51f, 0.0f, 0.0f, 0x1.55a652p-29f, 0.0f, 0x1.f6bb6p-116f,
     0x1.b4ec94p-112f, 0.0f, 0.0f, 0x1.3bc5aep-60f, 0.0f, 0x1.1b5b68p-29f,
     0x1.0b41bcp-92f, 0.0f, 0x1.fd4b3ep-15f, 0x1.1ad4ecp-64f, 0x1.2120a2p-89f,
     0x1.c91b14p-41f, 0x1.79321cp-71f, 0x1.a7bf5p-51f, 0.0f, 0x1.794d5cp-116f, 0.0f,
     0.0f, 0.0f, 0x1.b2cf8ap-60f, 0x1.0148cep-17f, 0x1.c472a8p-14f, 0x1.06d0fp-80f,
     0x1.cdad18p-27f, 0.0f, 0x1.30e83ep-39f, 0.0f, 0x1.0950acp-24f, 0.0f,
     0x1.30feb6p-113f, 0x1.039786p-106f, 0x1.c210dep-55f, 0x1.0b9538p-77f, 0.0f,
     0x1p0f, 0x1.93a0d8p-60f, 0x1.ab9dacp-95f, 0.0f, 0x1.642e72p-98f, 0x1.80e5bp-93f,
     0.0f, 0x1.1682f2p-18f, 0.0f, 0x1.13b41p-91f, 0x1.3f7d6ap-9f, 0.0f, 0.0f,
     0x1.db3ec2p-18f, 0x1.ff6768p-97f, 0.0f, 0x1.9b79a8p-89f, 0.0f, 0x1.a71182p-67f,
     0x1.d15506p-83f, 0.0f, 0.0f, 0x1.bcb264p-44f, 0.0f, 0x1p0f, 0x1.35c18cp-47f,
     0.0f, 0x1.bab078p-98f, 0.0f, 0.0f, 0.0f, 0x1.11a5dap-78f, 0.0f, 0.0f,
     0x1.efdd22p-101f, 0.0f, 0.0f, 0x1.582f88p-37f, 0.0f, 0x1.b96566p-21f, 0.0f, 0.0f,
     0x1.30e02ep-75f, 0.0f, 0x1.fb5524p-11f, 0x1.c17dccp-12f, 0x1.198602p-28f,
     0x1.fa43aap-122f, 0x1.7f324ap-32f, 0x1.56e124p-72f, 0.0f, 0x1.d902d6p-97f,
     0x1p0f, 0x1.db5dcp-4f, 0x1.77840ap-101f, 0x1.114846p-117f, 0.0f,
     0x1.b2da04p-117f, 0.0f, 0.0f, 0x1.7371c2p-89f, 0.0f, 0x1.5ab1d8p-83f, 0.0f,
     0x1p0f, 0x1.909806p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1a388ap-22f, 0.0f,
     0.0f, 0x1.d8b26ap-57f, 0.0f, 0x1.aa6176p-89f, 0.0f, 0.0f, 0x1.fbb838p-28f, 0.0f,
     0x1.9f7d9ap-82f, 0x1.aca03ap-94f, 0x1.76232cp-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.01d2e6p-2f, 0x1.0b7b08p-26f, 0x1.387accp-126f, 0x1.924cfap-61f,
     0x1.fb5bc2p-112f, 0.0f, 0x1.02e57ep-4f, 0.0f, 0x1.397b6cp-52f, 0x1.a6706ap-87f,
     0.0f, 0x1.00678ap-16f, 0.0f, 0.0f, 0x1.fe6ab4p-99f, 0x1.86e1bep-26f,
     0x1.dde456p-69f, 0x1.f476f8p-31f, 0.0f, 0x1.4b8792p-35f, 0.0f, 0.0f,
     0x1.19d3fap-73f, 0.0f, 0.0f, 0x1.59bc86p-37f, 0.0f, 0x1.88ffc8p-54f,
     0x1.17739cp-32f, 0.0f, 0x1.59c76cp-82f, 0.0f, 0.0f, 0x1.5cda8cp-24f,
     0x1.002b42p-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.83910ap-22f, 0x1.0fa43p-104f,
     0x1.1228a2p-68f, 0.0f, 0.0f, 0x1.ea37b2p-126f, 0x1.cd88f6p-116f, 0x1.b1d076p-16f,
     0.0f, 0x1.2b41ep-10f, 0x1.25f508p-101f, 0.0f, 0x1.3cce74p-48f, 0.0f,
     0x1.06002p-54f, 0x1.b038fcp-5f, 0x1.393c4p-60f, 0.0f, 0x1.e68f0ep-24f,
     0x1.54aa9cp-78f, 0.0f, 0x1.e3af5p-62f, 0.0f, 0.0f, 0x1.acea44p-62f, 0.0f, 0.0f,
     0x1.84cd8p-76f, 0.0f, 0x1.256efap-46f, 0.0f, 0.0f, 0.0f, 0x1.aea49cp-104f, 0.0f,
     0.0f, 0x1.ecb178p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.154cd4p-42f, 0.0f,
     0x1.02825cp-11f, 0.0f, 0.0f, 0x1.d16106p-6f, 0.0f, 0x1.9e2724p-26f,
     0x1.6ad71ep-107f, 0x1.a32318p-27f, 0.0f, 0.0f, 0x1.e2b058p-94f, 0.0f,
     0x1.b68794p-96f, 0x1.8df854p-80f, 0.0f, 0.0f, 0.0f, 0x1.648c08p-19f, 0.0f,
     0x1.1c3a28p-44f, 0.0f, 0.0f, 0.0f, 0x1.bb6e7p-50f, 0.0f, 0x1.c5153ap-100f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.811b3ep-120f, 0x1.662cfap-46f, 0.0f, 0.0f, 0x1.f163e4p-36f,
     0.0f, 0x1.64145ep-15f, 0.0f, 0x1.6485e2p-113f, 0.0f, 0x1.a782a6p-6f,
     0x1.6542a2p-107f, 0x1.f3f468p-117f, 0x1.6c02f6p-56f, 0.0f, 0x1.39eddp-20f,
     0x1.8d84eap-87f, 0.0f, 0.0f, 0x1.cc0ef4p-69f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.511bdap-47f, 0.0f, 0x1.e0513ep-29f, 0.0f, 0x1.d9407p-62f, 0x1.5b35acp-5f,
     0x1.2be0c8p-92f, 0x1.5510cap-57f, 0x1.ef6524p-61f, 0.0f, 0.0f, 0x1.9f4284p-70f,
     0.0f, 0x1.e6707p-118f, 0x1p0f, 0.0f, 0x1.55c056p-113f, 0.0f, 0.0f,
     0x1.723102p-43f, 0x1.65a7a6p-107f, 0x1.dd292ep-68f, 0x1.81b44ep-92f,
     0x1.46b1eap-13f, 0.0f, 0.0f, 0x1.045944p-113f, 0.0f, 0x1.da7e22p-39f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.edd5b2p-110f, 0x1.108fc6p-77f, 0x1.10b3a4p-11f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b68b64p-79f, 0.0f, 0.0f, 0.0f, 0x1.80c0c6p-56f,
     0x1.72eba2p-11f, 0.0f, 0.0f, 0x1.3ee90ap-15f, 0.0f, 0x1.9c90bp-5f, 0.0f,
     0x1.f07976p-126f, 0.0f, 0x1.2fb79ap-20f, 0x1.90c6c4p-49f, 0x1.3e9a8ap-83f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.2154bep-43f, 0x1.22b946p-113f, 0.0f, 0.0f, 0x1.0ba5b2p-81f,
     0.0f, 0x1.fae2dcp-99f, 0x1.9b3f12p-81f, 0x1.092cap-3f, 0x1.16c41p-46f, 0.0f,
     0.0f, 0x1.988c2cp-110f, 0.0f, 0.0f, 0.0f, 0x1.9018p-94f, 0x1.461cb2p-78f, 0.0f,
     0x1.01b25ep-18f, 0x1.8eff74p-32f, 0x1.8cc27p-83f, 0.0f, 0.0f, 0x1.93a49ap-18f,
     0.0f, 0.0f, 0x1.46a936p-40f, 0.0f, 0x1.9c410ep-67f, 0.0f, 0x1.a6da02p-32f, 0.0f,
     0.0f, 0x1.9965c4p-118f, 0.0f, 0x1.1e6c38p-38f, 0x1.3e24a4p-120f, 0x1.a90d9ap-89f,
     0x1.326b8cp-80f, 0.0f, 0x1.4f5ccap-4f, 0x1.4d44cap-74f, 0x1.013016p-40f, 0.0f,
     0.0f, 0.0f, 0x1.a8bb2p-104f, 0.0f, 0.0f, 0x1.a6fd9p-56f, 0.0f, 0.0f, 0.0f,
     0x1.0b6556p-51f, 0.0f, 0x1.acf5d8p-58f, 0x1.db5a08p-58f, 0x1.535de2p-28f,
     0x1.1e2046p-105f, 0x1.1f74d8p-122f, 0.0f, 0x1.2ba124p-10f, 0x1.d3139p-101f, 0.0f,
     0.0f, 0x1.745eb8p-30f, 0.0f, 0x1.fd33dap-99f, 0.0f, 0.0f, 0x1.34170cp-44f, 0.0f,
     0x1.7b472cp-49f, 0.0f, 0x1.f0cd08p-122f, 0x1.d185eap-24f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.686712p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8be8eap-32f,
     0x1.8b888cp-43f, 0x1.3740f8p-30f, 0x1.0225fp-49f, 0x1.9452aap-57f, 0.0f, 0.0f,
     0x1.7bc9bcp-25f, 0x1.57eca4p-126f, 0.0f, 0.0f, 0x1.99eb02p-87f, 0x1.c7d15ep-52f,
     0.0f, 0x1.61f4cap-30f, 0x1.a03fcep-81f, 0.0f, 0x1.300aep-64f, 0x1.024952p-113f,
     0.0f, 0.0f, 0x1.3c5522p-53f, 0x1.6006b8p-31f, 0.0f, 0.0f, 0x1.553b82p-37f, 0.0f,
     0x1.be900ap-58f, 0x1.2e3c08p-3f, 0x1.b65818p-48f, 0x1.d0ba0cp-45f,
     0x1.7d7768p-37f, 0x1.a8f13p-114f, 0.0f, 0x1.670bep-49f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4721e2p-107f, 0x1.0a24d8p-19f, 0.0f, 0x1.f608c6p-6f, 0x1.4ff256p-30f,
     0x1.707cf6p-36f, 0.0f, 0x1.3649eep-86f, 0x1.481066p-32f, 0.0f, 0x1.5300c2p-120f,
     0x1.212b06p-8f, 0x1p0f, 0.0f, 0x1.890404p-112f, 0x1.84e00cp-8f, 0.0f, 0.0f,
     0x1.a85d5ep-36f, 0x1.e39c9p-10f, 0x1.d2d34p-91f, 0x1.cddba8p-103f, 0x1.f3e27p-4f,
     0x1.9900b2p-80f, 0x1.1dd558p-75f, 0.0f, 0.0f, 0x1.86170ap-59f, 0.0f,
     0x1.86534p-38f, 0x1.89f2ap-2f, 0x1.7c4bfep-35f, 0.0f, 0.0f, 0x1.96636ap-86f,
     0x1.49e12ep-81f, 0.0f, 0x1.d118aep-81f, 0x1.9b859p-69f, 0.0f, 0.0f, 0.0f,
     0x1.69ac92p-100f, 0.0f, 0x1.d29f44p-16f, 0x1.b902bcp-47f, 0x1.bc557ap-2f, 0.0f,
     0x1.a773c6p-32f, 0.0f, 0x1.5d0998p-42f, 0x1.af912cp-33f, 0.0f, 0.0f, 0.0f,
     0x1.df44dp-124f, 0x1.6dfd7p-102f, 0x1.42f3a2p-96f, 0.0f, 0x1.c7114ep-99f,
     0x1.94c1b2p-30f, 0.0f, 0x1.984932p-50f, 0.0f, 0.0f, 0.0f, 0x1.6f67fcp-120f, 0.0f,
     0x1.a107fap-23f, 0.0f, 0.0f, 0x1.4643aap-110f, 0.0f, 0x1.eb4362p-97f,
     0x1.f6da5cp-115f, 0x1.0b4bdcp-73f, 0x1.4a337ep-113f, 0.0f, 0x1.884842p-89f,
     0x1.62cf6ep-48f, 0x1.1f3616p-103f, 0x1.b33e5ep-34f, 0x1.09b32ep-64f, 0.0f,
     0x1.ba25d4p-48f, 0.0f, 0.0f, 0.0f, 0x1.319c6ap-7f, 0.0f, 0x1.1821f8p-14f,
     0x1.5fc1b4p-80f, 0x1.307382p-33f, 0.0f, 0.0f, 0x1.5c9dp-84f, 0.0f, 0.0f,
     0x1.72dcdep-37f, 0.0f, 0.0f, 0x1.1c5ea2p-42f, 0.0f, 0x1.c1a936p-22f, 0.0f,
     0x1.e21932p-39f, 0x1.459b16p-9f, 0.0f, 0.0f, 0.0f, 0x1.4ebc28p-2f,
     0x1.05ccdep-58f, 0.0f, 0x1.281c42p-1f, 0x1.663434p-2f, 0.0f, 0x1.3d4e42p-50f,
     0.0f, 0.0f
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
            ml_float4_t tmp3;
            int32_t tmp4;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            memcpy(&tmp1, ((ml_float4_t*)(external_bench_wrapper_input_table_arg1+ i)), 16);
            tmp2 = Sleef_fmaxf4_avx2128(tmp0, tmp1);
            memcpy(((ml_float4_t*)(external_bench_wrapper_output_table+ i)), &(tmp2), 16);
            tmp3 = local_acc + tmp2;
            local_acc = tmp3;
            tmp4 = i + INT32_C(4);
            i = tmp4;
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
    printf("Sleef_fmaxf4_avx2128 %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_fmaxf4_avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
