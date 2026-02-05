/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_expf4_u10avx2128.c --function Sleef_finz_expf4_u10avx2128 \
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
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.76f296p-3f, 0x1.2e74e2p-32f, 0.0f,
     0x1.c7e62ap-60f, 0x1.c7e6b8p-102f, 0x1.2f3b34p-86f, 0x1p0f, 0.0f, 0.0f, 0.0f,
     0x1.64cf74p-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5d0ab4p-40f,
     0x1.ab11aep-80f, 0.0f, 0x1.d0abbp-5f, 0.0f, 0.0f, 0.0f, 0x1.4f1528p-116f, 0.0f,
     0x1.eb070ap-79f, 0x1.78cd6ep-78f, 0x1.6fafe2p-19f, 0x1.dc9adp-110f,
     0x1.b4f7e8p-26f, 0.0f, 0.0f, 0x1.5de45cp-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5ad298p-12f, 0.0f, 0x1.839bf4p-88f, 0.0f, 0x1.af702cp-92f, 0x1.aecb12p-98f,
     0x1.3d0ff6p-12f, 0x1.b89822p-81f, 0x1.0f99eep-89f, 0.0f, 0.0f, 0x1.2034c6p-7f,
     0x1.877086p-1f, 0.0f, 0x1.66fe08p-51f, 0x1.e31848p-9f, 0.0f, 0x1.c695bap-106f,
     0x1.dff4f6p-4f, 0.0f, 0x1.76b9a4p-123f, 0x1.7bd68cp-47f, 0.0f, 0x1.0ad596p-110f,
     0x1.e6e56ep-11f, 0.0f, 0.0f, 0x1.d1ebb2p-78f, 0.0f, 0x1.762f88p-83f, 0.0f, 0.0f,
     0x1.d22192p-6f, 0.0f, 0x1.210154p-84f, 0x1.c71ff2p-95f, 0.0f, 0x1.949fecp-111f,
     0x1.935d9ap-86f, 0x1.511b2ep-71f, 0.0f, 0.0f, 0.0f, 0x1.11f69ep-37f,
     0x1.5083e4p-113f, 0x1.6647cep-47f, 0x1.e1481ep-6f, 0.0f, 0.0f, 0.0f,
     0x1.ebf3ep-113f, 0x1.2c5d46p-10f, 0x1.57a7c2p-61f, 0x1.cb104ap-46f,
     0x1.830344p-1f, 0x1.81ef56p-14f, 0.0f, 0x1.c63a3ep-109f, 0.0f, 0x1.63905p-119f,
     0x1.0d768cp-14f, 0.0f, 0x1.64e276p-76f, 0x1.6408a2p-68f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0ed5eep-116f, 0.0f, 0.0f, 0x1.cff3acp-31f, 0x1.2cd158p-96f, 0.0f,
     0x1.d8e356p-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bd331ep-71f, 0.0f, 0.0f,
     0x1.70774cp-9f, 0.0f, 0.0f, 0x1.d31286p-69f, 0.0f, 0x1.a6c99ap-107f,
     0x1.876f92p-17f, 0.0f, 0.0f, 0x1.5d764ep-77f, 0.0f, 0x1.dbceacp-38f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.7e3b26p-70f, 0.0f, 0.0f, 0x1.9819dap-40f, 0.0f, 0.0f,
     0x1.7a9632p-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.01431cp-36f,
     0x1.8aff5p-75f, 0x1.bf559cp-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ff013cp-73f,
     0x1.2d3d6cp-102f, 0.0f, 0.0f, 0x1.fd1986p-121f, 0.0f, 0.0f, 0x1.97970ep-24f,
     0x1.b1ea4cp-33f, 0x1.ddce66p-15f, 0x1.092522p-17f, 0x1.c984fp-65f, 0.0f, 0.0f,
     0.0f, 0x1.8b7aep-71f, 0.0f, 0x1.1bca8p-103f, 0.0f, 0x1.18a182p-6f, 0.0f, 0.0f,
     0.0f, 0x1.8af57p-63f, 0x1.7985c2p-73f, 0.0f, 0.0f, 0x1.31c5f2p-99f, 0.0f, 0.0f,
     0.0f, 0x1.d9842ep-72f, 0.0f, 0.0f, 0.0f, 0x1.a04ea4p-36f, 0x1.0c534p-4f,
     0x1.e3426ep-41f, 0x1.eadd68p-41f, 0x1.9d218ap-58f, 0x1.58be2ap-75f, 0.0f, 0.0f,
     0x1.936d6ep-57f, 0.0f, 0x1.08753cp-47f, 0x1.e11474p-105f, 0.0f, 0x1.738ea6p-69f,
     0.0f, 0x1.cb2f64p-66f, 0.0f, 0x1.d82f2p-76f, 0.0f, 0x1.726498p-86f, 0.0f, 0.0f,
     0x1.4e9bd8p-123f, 0.0f, 0.0f, 0x1.62216p-60f, 0.0f, 0x1.75a5ap-68f, 0.0f, 0.0f,
     0.0f, 0x1.a71c16p-93f, 0.0f, 0x1.0f4cfcp-65f, 0.0f, 0.0f, 0.0f, 0x1.0c1c68p-20f,
     0x1.3a75a8p-71f, 0x1.83f4ccp-41f, 0x1.c5fbap-74f, 0x1.1a0512p-89f, 0.0f,
     0x1.5ca7f8p-34f, 0x1.3a1b2cp-6f, 0x1.353caap-90f, 0.0f, 0x1.6663cp-120f, 0.0f,
     0x1.1ddb12p-46f, 0x1.d1e1aap-94f, 0x1.602de2p-85f, 0x1.8ae778p-124f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.23488cp-60f, 0x1.804ffap-110f, 0.0f,
     0x1.e1cf62p-12f, 0.0f, 0.0f, 0x1.6077cp-73f, 0x1.5e14f8p-1f, 0.0f,
     0x1.29bf0ep-71f, 0.0f, 0x1.84b84ep-2f, 0x1.49897ap-89f, 0x1.95c66ap-38f, 0.0f,
     0x1.78829p-2f, 0x1.e49e26p-125f, 0.0f, 0x1.fd3cb8p-126f, 0.0f, 0x1.98fda2p-53f,
     0x1.ba2186p-42f, 0x1.a255a8p-73f, 0x1.36cd72p-35f, 0.0f, 0x1.e7ef74p-95f, 0.0f,
     0x1.1deb12p-55f, 0.0f, 0.0f, 0.0f, 0x1.acdc1ep-59f, 0x1.c75a72p-78f, 0.0f,
     0x1.d3ecfcp-65f, 0x1.45d9b2p-93f, 0x1.6c0a5p-57f, 0.0f, 0.0f, 0x1.121878p-29f,
     0x1.c7be4ep-121f, 0x1.1772d2p-47f, 0.0f, 0.0f, 0.0f, 0x1.823be4p-22f, 0.0f, 0.0f,
     0x1.7353d6p-51f, 0.0f, 0x1.c60548p-91f, 0x1.f4908ap-55f, 0x1.d45976p-90f, 0.0f,
     0.0f, 0x1.cadf14p-7f, 0.0f, 0.0f, 0x1.a082ep-119f, 0x1.99f104p-84f, 0.0f, 0.0f,
     0x1.cbf87ep-43f, 0.0f, 0x1.ba6856p-118f, 0x1.89ab38p-117f, 0x1.1f53cep-17f, 0.0f,
     0.0f, 0x1.8198aep-56f, 0.0f, 0.0f, 0x1.a997a6p-22f, 0.0f, 0.0f, 0.0f,
     0x1.5ce96ap-81f, 0.0f, 0.0f, 0x1.6f0bdep-106f, 0x1.e46ce8p-62f, 0x1.9a88e8p-93f,
     0x1.a9fe28p-109f, 0x1.e3efdp-27f, 0x1.ff6a3cp-70f, 0x1.b1bd2cp-76f, 0.0f,
     0x1.6a39bep-22f, 0x1.b99e02p-23f, 0.0f, 0x1.4b4f86p-63f, 0x1.6f944p-12f,
     0x1.d77d22p-54f, 0x1.b06518p-98f, 0.0f, 0.0f, 0.0f, 0x1.e06e96p-46f, 0.0f,
     0x1.f9513p-37f, 0.0f, 0x1.71b7fp-112f, 0.0f, 0.0f, 0x1.a0193cp-51f, 0.0f,
     0x1.b9076ap-25f, 0x1.c2bac8p-28f, 0x1.f18c8ep-100f, 0x1.0fbf94p-9f,
     0x1.d1eecp-83f, 0.0f, 0.0f, 0x1.413906p-60f, 0x1.33a41ep-99f, 0x1.38c2fp-110f,
     0x1.d5bccp-91f, 0.0f, 0x1.5d9c14p-125f, 0.0f, 0.0f, 0.0f, 0x1.d4377cp-64f,
     0x1.f52444p-98f, 0.0f, 0.0f, 0.0f, 0x1.fbd79cp-78f, 0x1.98ae6cp-89f, 0.0f, 0.0f,
     0x1.732b7ap-107f, 0x1.b7be56p-75f, 0x1.af8a0ap-110f, 0x1.491f12p-116f, 0.0f,
     0.0f, 0x1.a0f85ep-115f, 0x1.c8f2f8p-103f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.40b592p-29f, 0x1.1ad158p-47f, 0.0f, 0x1.690a78p-22f, 0x1.98179ap-76f, 0.0f,
     0x1.38c41cp-8f, 0x1.5ae1f8p-24f, 0.0f, 0.0f, 0x1.447608p-31f, 0x1.173e96p-62f,
     0.0f, 0x1.8e39cap-115f, 0x1.198da6p-92f, 0.0f, 0x1.9c827cp-123f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.2101bp-110f, 0x1.73964p-107f, 0x1.66a0aap-106f,
     0x1.ae4616p-33f, 0x1.37e7b4p-84f, 0x1.582878p-82f, 0x1.f49b1ap-49f, 0.0f, 0.0f,
     0x1.3d8216p-104f, 0x1.85b9bap-44f, 0x1.94c8dap-54f, 0.0f, 0x1.4f4ddap-97f, 0.0f,
     0x1.a86f3cp-82f, 0x1.4afcbep-86f, 0x1.3f6538p-89f, 0.0f, 0.0f, 0x1.3bcaep-75f,
     0.0f, 0.0f, 0x1.192deap-97f, 0.0f, 0x1.9b0a2cp-5f, 0.0f, 0x1.3b0edep-13f,
     0x1.3496dp-53f, 0x1.70d64p-118f, 0.0f, 0x1.133b2cp-40f, 0.0f, 0.0f, 0.0f,
     0x1.673e6ap-9f, 0.0f, 0x1.9c2b66p-12f, 0x1.575ed4p-29f, 0.0f, 0x1.29a538p-32f,
     0x1.c0019cp-65f, 0x1.1d1cfp-105f, 0x1.f28baap-19f, 0x1.1b5e9p-24f, 0.0f,
     0x1.d2c3bep-7f, 0.0f, 0x1.6c2f76p-100f, 0x1.e98eb4p-123f, 0x1.e45b8p-92f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.48998p-2f, 0x1.fca85ap-124f, 0.0f, 0x1.f844e8p-114f, 0.0f,
     0.0f, 0x1.be5928p-17f, 0x1.a29154p-77f, 0.0f, 0.0f, 0.0f, 0x1.c2c9bcp-4f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.2cd008p-25f, 0x1.ec9e54p-8f, 0.0f, 0x1.42045cp-74f,
     0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.9e00fap-22f, 0.0f, 0x1.dc0c56p-68f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.331cfcp-89f, 0x1.35010ap-98f, 0x1.5de172p-65f, 0.0f,
     0.0f, 0x1.2ef474p-87f, 0x1.d56416p-56f, 0x1.8d25ap-108f, 0x1.966a3cp-3f, 0.0f,
     0x1.82f908p-77f, 0x1.803dfep-81f, 0.0f, 0.0f, 0x1.fd1f48p-41f, 0x1.2f5bb2p-32f,
     0x1.563acep-101f, 0x1.644edp-102f, 0.0f, 0x1.af71b8p-25f, 0.0f, 0x1.dc22dcp-11f,
     0x1.acc2c4p-17f, 0.0f, 0.0f, 0x1.dc1142p-6f, 0.0f, 0x1.2a77f6p-120f, 0.0f,
     0x1.df37c2p-6f, 0.0f, 0.0f, 0x1.a2910ap-82f, 0.0f, 0x1.1a8f9ap-7f,
     0x1.ff065ap-108f, 0x1.f60bdep-122f, 0x1.d22814p-1f, 0.0f, 0x1.d721e4p-42f,
     0x1.71488p-98f, 0x1.a44818p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4e03aep-118f,
     0.0f, 0x1.9d9bd2p-69f, 0x1.212e56p-3f, 0.0f, 0.0f, 0x1.b8fcbep-2f, 0.0f,
     0x1.fd3446p-44f, 0.0f, 0x1.74eeep-123f, 0x1.9dad76p-9f, 0.0f, 0x1.eeb23p-47f,
     0.0f, 0x1.bce012p-115f, 0x1.5f866ep-119f, 0x1.d46e2p-97f, 0.0f, 0.0f,
     0x1.7fcbap-101f, 0.0f, 0x1.e0edc4p-12f, 0x1.e5c034p-99f, 0.0f, 0x1.26a66cp-25f,
     0x1.66353p-5f, 0x1.516a8ep-103f, 0.0f, 0x1.a2656ep-76f, 0x1.72251ap-109f,
     0x1.1886dp-15f, 0.0f, 0.0f, 0x1.7814e6p-103f, 0x1.0a56c8p-31f, 0.0f, 0.0f, 0.0f,
     0x1.075976p-24f, 0x1.8fdfe2p-5f, 0.0f, 0x1.032976p-41f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9b79eep-48f, 0x1.e98702p-16f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.12fa96p-92f, 0x1.bb7042p-11f, 0.0f,
     0x1.db1b04p-70f, 0x1.bb4748p-10f, 0.0f, 0.0f, 0x1.a5489ap-120f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.5bf61p-121f, 0x1.bae14ap-55f, 0x1.412ab2p-30f, 0.0f, 0x1.83af6p-13f,
     0.0f, 0x1.165f5p-9f, 0x1.1166aep-77f, 0x1.f49cacp-39f, 0.0f, 0x1.f22a3ap-61f,
     0.0f, 0x1.8b5e8p-82f, 0x1.292e4p-124f, 0x1.46587ep-54f, 0.0f, 0.0f,
     0x1.3906e4p-33f, 0.0f, 0x1.7b394ep-4f, 0.0f, 0x1.54706p-33f, 0.0f,
     0x1.765e9ap-17f, 0.0f, 0x1.aed3bcp-84f, 0x1.50f908p-59f, 0x1.af26a8p-104f, 0.0f,
     0.0f, 0.0f, 0x1.857262p-79f, 0.0f, 0.0f, 0x1.166d64p-74f, 0x1.a33e04p-30f,
     0x1.9d9a1p-117f, 0.0f, 0x1.81dee6p-120f, 0.0f, 0x1.7377bcp-32f, 0x1.c9fe6cp-39f,
     0x1.55e1dap-13f, 0x1.8657ecp-73f, 0.0f, 0x1.919888p-92f, 0.0f, 0.0f, 0.0f,
     0x1.4eaaecp-89f, 0.0f, 0.0f, 0x1.27e96ap-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.66e1ep-97f, 0.0f, 0.0f, 0x1.fe00b6p-51f, 0.0f, 0x1.c02e26p-3f, 0.0f,
     0.0f, 0x1.cbc6bcp-123f, 0.0f, 0x1.8c1b0ap-58f, 0.0f, 0.0f, 0x1.15bef8p-45f, 0.0f,
     0x1.b7f6f2p-122f, 0.0f, 0x1.fca93ap-78f, 0x1.7daf2p-10f, 0.0f, 0.0f,
     0x1.5b78f6p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c8bd68p-45f, 0.0f, 0x1.214f8ep-27f,
     0.0f, 0x1.1b5dcep-25f, 0.0f, 0.0f, 0.0f, 0x1.487ee8p-47f, 0.0f, 0.0f,
     0x1.2997e2p-50f, 0.0f, 0x1.2df998p-32f, 0.0f, 0x1.56cd44p-104f, 0x1.9da8a8p-48f,
     0.0f, 0x1.e5caccp-94f, 0.0f, 0.0f, 0x1.7aa3dap-50f, 0x1.3e963cp-14f,
     0x1.b01bd2p-39f, 0.0f, 0x1.812a4p-126f, 0.0f, 0x1.238dcap-68f, 0.0f,
     0x1.cc0334p-15f, 0.0f, 0x1.d2c0c8p-94f, 0x1.0d75d6p-55f, 0x1.4af65ap-7f,
     0x1.06656p-63f, 0.0f, 0.0f, 0x1.c45192p-63f, 0.0f, 0x1.e435a6p-125f, 0.0f,
     0x1.20cb9p-18f, 0x1.7595dep-70f, 0x1.ef3f94p-78f, 0x1.41b5eap-75f, 0.0f, 0.0f,
     0.0f, 0x1.bddbfp-94f, 0x1.c098aep-104f, 0x1.70abfep-118f, 0x1.fb39e6p-123f, 0.0f,
     0x1.5e3bf2p-72f, 0.0f, 0.0f, 0.0f, 0x1.8f8c9cp-93f, 0.0f, 0.0f, 0x1.177ba8p-107f,
     0x1.72cc54p-108f, 0x1p0f, 0.0f, 0.0f, 0x1.f36fd8p-40f, 0.0f, 0x1.2cc342p-79f,
     0x1.c21e04p-75f, 0.0f, 0x1.cbeda8p-7f, 0x1.4de568p-86f, 0.0f, 0x1.7fc4bcp-102f,
     0.0f, 0.0f, 0x1.998568p-104f, 0.0f, 0.0f, 0x1.66a0e8p-75f, 0.0f, 0x1.a9c0ecp-17f,
     0x1.d22c2ap-44f, 0x1.d0c552p-41f, 0.0f, 0x1.d93ecep-39f, 0.0f, 0x1.13c27cp-21f,
     0.0f, 0.0f, 0.0f, 0x1.b93b2p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a4399cp-104f,
     0x1.925f6cp-90f, 0x1.a72098p-114f, 0x1.32807cp-6f, 0.0f, 0.0f, 0x1.31e4fp-10f,
     0x1.766e28p-19f, 0x1.c9ecbcp-64f, 0.0f, 0.0f, 0x1.f16ce6p-28f, 0x1.a02d84p-66f,
     0.0f, 0x1.d00538p-108f, 0x1.b99bb6p-116f, 0.0f, 0x1.cd34ccp-39f, 0x1.16a3ccp-37f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.326c14p-54f, 0x1.93044p-39f, 0x1.38178p-90f,
     0.0f, 0.0f, 0x1.30d6a2p-82f, 0.0f, 0x1.0bc688p-26f, 0.0f, 0x1.6795a2p-19f, 0.0f,
     0.0f, 0x1.76a33cp-126f, 0x1.10771p-92f, 0x1.18fae6p-107f, 0x1.337ca4p-43f, 0.0f,
     0x1.0c0492p-113f, 0.0f, 0.0f, 0x1.abeb46p-82f, 0x1.b4405p-86f, 0x1.06bda4p-47f,
     0.0f, 0.0f, 0x1.d50fe2p-113f, 0.0f, 0x1.5cd2e2p-109f, 0x1.1e3112p-14f,
     0x1.65e08ep-49f, 0x1.0c1508p-25f, 0x1.73aeep-4f, 0x1.ab8b58p-29f,
     0x1.d329f2p-120f, 0x1.85c9b2p-118f, 0x1.43da5ap-86f, 0x1.02e06cp-91f, 0.0f,
     0x1.8ac978p-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ea12a2p-55f, 0x1.ce0322p-27f, 0.0f,
     0x1.be184cp-60f, 0x1.8f006ap-106f, 0x1.3c5a7p-36f, 0x1.be3fc6p-108f, 0.0f,
     0x1.7fa18p-11f, 0.0f, 0.0f, 0.0f, 0x1.d3a39ep-47f, 0.0f, 0.0f, 0.0f,
     0x1.62b5bap-46f, 0x1.2e061p-89f, 0x1.f2f572p-14f, 0.0f, 0.0f, 0x1.275c7ap-36f,
     0.0f, 0x1.c1b7b2p-13f, 0x1.60dda8p-43f, 0x1.46efd6p-30f, 0.0f, 0.0f, 0.0f,
     0x1.7215e2p-123f, 0x1.0a7fd4p-106f, 0x1.6d09d4p-61f, 0.0f, 0.0f, 0.0f,
     0x1.c424a8p-118f, 0x1.a60c8cp-9f, 0x1.511afp-27f, 0.0f, 0x1.9dc6fp-121f, 0.0f,
     0x1.bbdf9cp-120f, 0.0f, 0.0f, 0x1.7984aep-89f, 0x1.8975ccp-121f, 0x1.a04f5ap-6f,
     0.0f, 0x1.158cb6p-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.56aefcp-21f, 0.0f,
     0.0f, 0.0f, 0x1.f66296p-14f, 0.0f, 0x1.65c48p-51f, 0x1.50e15cp-97f,
     0x1.3d8e84p-103f, 0.0f, 0x1.88874ap-116f, 0x1.ebe53cp-27f, 0.0f, 0x1.32dd2ep-46f,
     0x1.d4752p-63f, 0x1.e4a8b6p-72f, 0.0f, 0.0f, 0.0f, 0x1.361a06p-64f, 0.0f,
     0x1.0aba08p-77f, 0x1.fd7b1ap-80f, 0x1.4f5cb8p-33f, 0.0f, 0x1.a7981ep-10f,
     0x1.cae8b4p-29f, 0.0f, 0x1.e496b2p-81f, 0x1.88e79p-74f, 0.0f, 0.0f,
     0x1.bb242ep-68f, 0x1.adec9ap-1f, 0x1.133f8cp-34f, 0.0f, 0x1.f932ep-10f, 0.0f,
     0x1.ea4b3ep-124f, 0.0f, 0.0f, 0x1.0f79d8p-14f, 0x1.e32ea8p-109f, 0x1.fa25ap-12f,
     0x1.ba57e6p-87f, 0.0f, 0.0f, 0x1.0ed05cp-51f, 0x1.3c0faap-51f, 0.0f,
     0x1.f7d668p-77f, 0x1.6b8d68p-1f, 0x1.0f661ep-58f, 0.0f, 0x1.f1f8ecp-104f,
     0x1.00c1b2p-88f, 0x1.c5400cp-41f, 0x1.d536c2p-96f, 0.0f, 0x1.4cb26p-61f, 0.0f,
     0.0f
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
            tmp1 = Sleef_finz_expf4_u10avx2128(tmp0);
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
    printf("Sleef_finz_expf4_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_expf4_u10avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
