/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_erfcf4_u15kvx.c --function \
 *     Sleef_finz_erfcf4_u15kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 4 --function-input-vector-size \
 *     4 --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float4_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float4_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0.0f, 0.0f, 0.0f, 0x1.45d68ep-36f, 0.0f, 0.0f, 0x1.465db6p-27f, 0x1p0f, 0.0f,
     0x1.3b4b16p-126f, 0.0f, 0.0f, 0x1.1b901ep-91f, 0x1.10b016p-90f, 0.0f, 0.0f,
     0x1.8a6daep-120f, 0.0f, 0.0f, 0x1.d1ab86p-42f, 0x1.0cfef4p-48f, 0.0f, 0.0f,
     0x1.c7679p-41f, 0.0f, 0x1.ba517p-22f, 0.0f, 0.0f, 0x1.0fdc64p-83f,
     0x1.235f8p-37f, 0.0f, 0.0f, 0x1.f72d34p-81f, 0x1.46a2dep-118f, 0x1.b5551p-58f,
     0x1.7eacc6p-15f, 0x1.0fdae6p-70f, 0x1.0a356ap-54f, 0x1.50e5e2p-91f,
     0x1.b63032p-75f, 0.0f, 0x1.cd045ap-109f, 0.0f, 0.0f, 0x1.3f9364p-64f,
     0x1.789a8ap-36f, 0x1.9aa01ap-39f, 0.0f, 0x1.dc0328p-59f, 0.0f, 0.0f,
     0x1.f72446p-39f, 0x1.db2eeep-17f, 0x1.33b5e8p-83f, 0.0f, 0.0f, 0x1.fcd162p-121f,
     0.0f, 0x1.72c7d4p-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f22e1cp-111f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.6cbf12p-106f, 0.0f, 0.0f, 0x1.832c02p-85f,
     0x1.2fb476p-46f, 0x1.4225d4p-1f, 0.0f, 0x1.703a06p-6f, 0x1.026c2p-51f,
     0x1.e1bcccp-23f, 0.0f, 0x1.173afap-112f, 0x1.e4a688p-91f, 0.0f, 0x1.6bec54p-29f,
     0x1.c58a64p-6f, 0.0f, 0.0f, 0x1.b9a21p-13f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6820ep-68f, 0x1.59fa6p-94f, 0x1.f98c98p-33f, 0.0f, 0x1.4c8b0ap-57f, 0.0f,
     0x1.97c54cp-86f, 0x1.1d34dp-14f, 0.0f, 0x1.387a7cp-32f, 0.0f, 0x1.6eeee8p-95f,
     0.0f, 0.0f, 0x1.b69f18p-12f, 0x1.ca7062p-108f, 0x1.dc51c2p-104f, 0.0f,
     0x1.21d782p-29f, 0x1.3ecbb4p-111f, 0x1.dbf93ep-106f, 0x1.3b2a22p-21f,
     0x1.4c37dep-76f, 0.0f, 0x1.114394p-4f, 0.0f, 0x1.f0cfd6p-5f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.3248fap-63f, 0x1.96c0e2p-92f, 0x1.541fd4p-13f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b52914p-123f, 0.0f, 0.0f, 0x1.e22802p-96f, 0.0f,
     0x1.ed160ap-77f, 0x1.bdbd88p-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.119e3ap-113f,
     0x1.5458fep-76f, 0x1.84359p-38f, 0.0f, 0x1.8baceap-55f, 0x1.6a74b8p-12f, 0.0f,
     0.0f, 0x1.43319ap-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.690e2ap-58f,
     0x1.74b9fp-63f, 0.0f, 0.0f, 0.0f, 0x1.3ce85cp-32f, 0.0f, 0x1.0ca7bep-15f, 0.0f,
     0x1.cd7aap-114f, 0x1.401746p-61f, 0x1.f79602p-118f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a3e1aap-16f, 0.0f, 0.0f, 0x1.9c265ap-95f, 0x1.0991eep-15f, 0.0f, 0.0f,
     0x1.7af612p-29f, 0x1.92c9a2p-89f, 0.0f, 0x1.e8d9e6p-117f, 0.0f, 0x1.91becap-80f,
     0x1.f15258p-18f, 0.0f, 0x1.753c6ap-87f, 0x1.e307fcp-114f, 0x1.c0f5a4p-122f,
     0x1.ade9dap-102f, 0x1.5421e6p-124f, 0.0f, 0x1.af0684p-46f, 0x1.4fb652p-77f,
     0x1.1b6c4cp-12f, 0.0f, 0.0f, 0.0f, 0x1.fd705ep-105f, 0.0f, 0x1.7acc02p-42f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.84818p-56f, 0x1.d5cabep-61f, 0.0f, 0.0f, 0.0f,
     0x1.5785cap-62f, 0.0f, 0x1.acb14ap-83f, 0.0f, 0x1.e0bb9ep-35f, 0x1.2e1d84p-7f,
     0.0f, 0x1.225cf2p-42f, 0x1.9104cap-91f, 0.0f, 0x1.2bbb36p-86f, 0.0f, 0.0f,
     0x1.ec6ed6p-37f, 0.0f, 0.0f, 0.0f, 0x1.a866c4p-117f, 0x1.fef0f8p-60f, 0.0f,
     0x1.ec6f06p-83f, 0.0f, 0x1.cef62ap-47f, 0x1.f505cp-80f, 0x1.2520cap-95f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.51d9bcp-126f, 0.0f, 0x1.49ac0ep-74f, 0x1.0786c6p-64f,
     0x1.4f252cp-28f, 0.0f, 0.0f, 0x1.65bc64p-102f, 0.0f, 0.0f, 0x1.88af4ap-13f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.150ec8p-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.adc1bp-47f, 0x1.12e5e6p-5f, 0.0f, 0.0f, 0x1.f7b8bcp-48f,
     0x1.006c04p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7795a8p-81f, 0x1.c58b58p-25f,
     0.0f, 0.0f, 0x1.1219fep-118f, 0.0f, 0x1.d2e12cp-46f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b14d7ap-85f, 0x1.0579e4p-26f, 0x1.f41d5ep-58f, 0.0f, 0.0f,
     0x1.4f7ec6p-9f, 0x1.b92262p-50f, 0.0f, 0x1.ba99a8p-12f, 0.0f, 0x1.7b3934p-109f,
     0.0f, 0x1.28ececp-14f, 0x1.027236p-57f, 0.0f, 0x1.531666p-72f, 0.0f,
     0x1.c72416p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.28b758p-47f, 0x1.4edcdp-35f,
     0x1.0834e6p-95f, 0.0f, 0x1.c2a8e8p-7f, 0x1.5e4d34p-103f, 0x1.45fap-103f,
     0x1.b161fp-82f, 0x1.39ed8ep-32f, 0.0f, 0.0f, 0.0f, 0x1.39d3b2p-14f,
     0x1.f47adcp-39f, 0x1.370048p-86f, 0.0f, 0.0f, 0x1.c1cc38p-68f, 0x1.8c692p-90f,
     0.0f, 0x1.d31d2cp-36f, 0.0f, 0.0f, 0x1.341fbep-22f, 0.0f, 0.0f, 0x1.f76b14p-73f,
     0.0f, 0x1.37a358p-91f, 0.0f, 0x1.caeefep-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0d8a48p-84f, 0x1.666a8ep-119f, 0x1.b6c7e6p-104f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.038b2ep-122f, 0x1.510a74p-54f, 0x1.70cb3p-58f,
     0x1.b90688p-64f, 0.0f, 0.0f, 0.0f, 0x1.ad0f8cp-81f, 0.0f, 0.0f, 0.0f,
     0x1.7509b2p-52f, 0.0f, 0.0f, 0.0f, 0x1.fee198p-37f, 0.0f, 0x1.023ce4p-52f,
     0x1.ad0a94p-14f, 0.0f, 0.0f, 0x1.d05684p-66f, 0.0f, 0.0f, 0.0f, 0x1.a15842p-65f,
     0x1.53f472p-107f, 0x1.7afep-59f, 0.0f, 0.0f, 0.0f, 0x1.ba69c2p-104f,
     0x1.af03cp-19f, 0.0f, 0x1.555e48p-15f, 0.0f, 0.0f, 0.0f, 0x1.f69436p-49f,
     0x1.c22d58p-100f, 0.0f, 0.0f, 0x1.08544cp-110f, 0x1.c8ec5ep-96f,
     0x1.8b3874p-120f, 0.0f, 0.0f, 0.0f, 0x1.3ae864p-8f, 0x1.6487f2p-52f, 0.0f, 0.0f,
     0.0f, 0x1.9594cp-63f, 0.0f, 0.0f, 0x1.157dd4p-59f, 0.0f, 0x1.aee8cap-45f,
     0x1.1dde62p-117f, 0x1.fade8ep-97f, 0x1.9bdebcp-5f, 0.0f, 0.0f, 0x1.f7f456p-54f,
     0.0f, 0x1.0148f8p-41f, 0.0f, 0.0f, 0x1.e3b788p-81f, 0.0f, 0x1.3c82cp-52f, 0.0f,
     0x1.3fc62p-62f, 0.0f, 0.0f, 0x1.2d1ce4p-53f, 0x1.beaddep-45f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.babba6p-70f, 0x1.4f17cap-52f, 0.0f, 0x1.08316ep-81f, 0.0f,
     0x1.98ab4ap-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.71a5d8p-91f, 0x1.408facp-64f,
     0.0f, 0.0f, 0x1.dc6afap-54f, 0x1.9b7b7ap-21f, 0x1.a0637p-21f, 0x1.c788eep-88f,
     0.0f, 0x1.c12a4ap-58f, 0x1.436baep-90f, 0x1.5c2b36p-96f, 0.0f, 0.0f,
     0x1.648432p-84f, 0.0f, 0.0f, 0x1.157d2p-81f, 0.0f, 0x1.2cbd2p-102f,
     0x1.9e986p-81f, 0x1.06a2f6p-63f, 0x1.e57f9ep-40f, 0.0f, 0x1.4bcff4p-49f, 0.0f,
     0.0f, 0x1.577a1p-117f, 0.0f, 0x1.1eba38p-94f, 0x1.72e04p-5f, 0x1.f742f8p-108f,
     0x1.699ffcp-112f, 0x1.3b16e4p-35f, 0.0f, 0.0f, 0.0f, 0x1.56842cp-58f, 0.0f, 0.0f,
     0x1.454186p-1f, 0.0f, 0x1.c6c06cp-109f, 0x1.031982p-126f, 0.0f, 0.0f, 0.0f,
     0x1.ac8ebcp-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7bdbbp-61f, 0.0f,
     0x1.e54754p-94f, 0x1.7d761cp-24f, 0.0f, 0.0f, 0x1.4ede88p-59f, 0x1.6b0162p-113f,
     0x1.519d5ep-62f, 0x1.88944ap-112f, 0.0f, 0x1.04cd96p-109f, 0x1.bfbcb8p-106f,
     0x1.e005dep-24f, 0x1.3cd22ep-113f, 0x1.d7eaeep-51f, 0.0f, 0.0f, 0x1.7d087cp-98f,
     0x1.330b2ep-12f, 0.0f, 0x1.af4f78p-46f, 0x1.d3c3bp-30f, 0x1.1623cp-119f,
     0x1.bc9e4cp-113f, 0.0f, 0.0f, 0.0f, 0x1.92d336p-33f, 0.0f, 0.0f, 0.0f,
     0x1.32d8d6p-74f, 0.0f, 0x1.2eb566p-40f, 0x1.a41eb8p-113f, 0x1.696ce2p-66f,
     0x1.0ff506p-9f, 0.0f, 0x1.16777ap-121f, 0.0f, 0.0f, 0x1.7c16a2p-63f, 0.0f,
     0x1.2781p-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eb6f12p-28f, 0x1.b7f95p-122f,
     0x1.ebae5cp-33f, 0.0f, 0x1.2c1fbp-54f, 0x1.063692p-115f, 0x1.1b71dcp-80f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.676b24p-100f, 0x1.d76632p-22f, 0.0f, 0x1.ed433ep-25f,
     0.0f, 0.0f, 0x1.8f6748p-77f, 0.0f, 0.0f, 0x1.7a2888p-6f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d4121ap-87f, 0.0f, 0x1.3b07a8p-104f, 0x1.b927f6p-58f, 0x1.164914p-34f, 0.0f,
     0.0f, 0x1.cb1a64p-30f, 0.0f, 0.0f, 0x1.0279fep-113f, 0x1.b88066p-2f,
     0x1.83dadap-100f, 0.0f, 0x1.e9cc64p-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5f1aap-34f,
     0.0f, 0x1.9baa14p-88f, 0x1.67bee8p-16f, 0.0f, 0x1.6a247cp-119f, 0x1.f5f828p-59f,
     0x1.1b24dep-6f, 0x1.00b8b6p-1f, 0x1.e5b4dcp-81f, 0x1.947e68p-28f,
     0x1.6c0ceap-105f, 0.0f, 0.0f, 0x1.80c868p-48f, 0x1.163838p-108f, 0.0f, 0.0f,
     0x1.156e1ep-49f, 0.0f, 0x1.36d3fep-84f, 0x1.931b52p-74f, 0.0f, 0.0f,
     0x1.39628ap-62f, 0.0f, 0.0f, 0.0f, 0x1.83d34ap-9f, 0x1.54fef8p-116f,
     0x1.1487e2p-21f, 0.0f, 0x1.346d98p-1f, 0x1.056296p-110f, 0x1.a2031ap-84f,
     0x1.436352p-78f, 0x1.ec6ccep-77f, 0x1.52e8d6p-39f, 0x1.d8213p-40f,
     0x1.0cb00cp-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6050a6p-30f,
     0x1.068d8cp-118f, 0x1.0d4358p-96f, 0.0f, 0x1.9efd7p-79f, 0x1.d11bep-30f,
     0x1.b91a7ap-53f, 0.0f, 0x1.939ea4p-3f, 0.0f, 0x1.f61e8cp-98f, 0.0f,
     0x1.721b46p-2f, 0.0f, 0.0f, 0.0f, 0x1.5cfd98p-15f, 0x1.98adcap-33f,
     0x1.808c6ep-2f, 0x1p0f, 0.0f, 0.0f, 0x1.cc0a64p-58f, 0x1.a756b6p-67f, 0.0f,
     0x1.eebb68p-23f, 0x1.75bc06p-9f, 0.0f, 0x1.5837eap-2f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1c15fep-120f, 0.0f, 0x1.5fd57ep-92f, 0x1.81461ap-7f,
     0x1.7ead6ep-1f, 0x1.a6db66p-43f, 0.0f, 0x1.c5092ep-115f, 0.0f, 0.0f, 0.0f,
     0x1.18022ap-2f, 0.0f, 0.0f, 0x1.877868p-58f, 0x1.ad78d2p-112f, 0x1.c210fcp-60f,
     0.0f, 0x1.b70edp-116f, 0.0f, 0x1.a5d58ap-99f, 0.0f, 0.0f, 0x1.e7815ap-104f,
     0x1.f9b88ep-55f, 0x1.7201a8p-90f, 0.0f, 0.0f, 0.0f, 0x1.064444p-100f,
     0x1.c6043cp-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c5847cp-64f, 0.0f, 0.0f,
     0x1.0b51e6p-26f, 0.0f, 0x1.b4679ap-44f, 0x1.6724p-118f, 0x1.481c26p-90f,
     0x1.9e4dcap-121f, 0.0f, 0x1.65ac46p-30f, 0x1.7f6516p-101f, 0x1.52af56p-119f,
     0.0f, 0x1.7719a6p-52f, 0x1.682aa6p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ded6a4p-33f, 0.0f, 0.0f, 0x1.e89c5ep-59f, 0x1.e07acep-101f,
     0x1.45b84cp-13f, 0x1.39c262p-34f, 0x1.d5d224p-38f, 0.0f, 0x1.d534aep-69f, 0.0f,
     0x1.aa812p-92f, 0x1.9afd62p-94f, 0.0f, 0x1.3ca0ap-93f, 0.0f, 0.0f,
     0x1.e4ab82p-73f, 0.0f, 0.0f, 0x1.643756p-117f, 0x1.77809ap-25f, 0.0f,
     0x1.13b41p-66f, 0.0f, 0x1p0f, 0x1.3426a6p-33f, 0x1.e72f7p-34f, 0.0f,
     0x1.d2655ep-126f, 0x1.32997cp-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8f7bc2p-108f,
     0x1.b0f806p-101f, 0.0f, 0.0f, 0x1.489c26p-35f, 0x1.286e1p-31f, 0x1.ec9b18p-5f,
     0x1.7b3748p-83f, 0x1.996b4p-5f, 0x1.3bfd9cp-83f, 0x1.50ad42p-24f,
     0x1.bcae56p-122f, 0x1.92ef8cp-31f, 0x1.dbbaep-5f, 0.0f, 0x1.8ccd5p-17f,
     0x1.d26856p-80f, 0x1.0c2368p-32f, 0x1.771d84p-81f, 0.0f, 0.0f, 0.0f,
     0x1.ab2decp-46f, 0x1.362f44p-69f, 0x1.ecbf58p-58f, 0x1.752262p-122f,
     0x1.4d7402p-118f, 0x1.5f9536p-37f, 0x1.2837d6p-1f, 0.0f, 0x1.1cd3dcp-112f,
     0x1.ada462p-22f, 0x1p0f, 0.0f, 0.0f, 0x1.0b39aep-50f, 0x1.8d55p-19f, 0.0f,
     0x1.ea983cp-107f, 0x1.7b830cp-119f, 0x1.a9ece6p-5f, 0x1.25a6f2p-16f, 0.0f,
     0x1.65de9ep-92f, 0.0f, 0.0f, 0.0f, 0x1.ecae98p-7f, 0x1.000fep-11f,
     0x1.dc814p-102f, 0.0f, 0.0f, 0x1.7adf9ep-56f, 0.0f, 0x1.78a27cp-72f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.0bea7ap-24f, 0.0f, 0.0f, 0.0f, 0x1.7300a4p-69f, 0.0f,
     0x1.13371ep-99f, 0.0f, 0.0f, 0x1.a6a752p-81f, 0.0f, 0.0f, 0x1.f8b686p-5f, 0.0f,
     0.0f, 0x1.7cfd72p-4f, 0.0f, 0x1.8548f4p-22f, 0.0f, 0x1.7e8edap-88f, 0.0f,
     0x1.141394p-123f, 0x1.71dfacp-10f, 0.0f, 0.0f, 0x1.d48d0cp-27f, 0x1.bce2eap-29f,
     0x1.ac435ep-36f, 0x1.8f4416p-3f, 0x1.3e4f16p-105f, 0x1.c2896p-9f, 0x1.2c64ep-9f,
     0.0f, 0x1.c1633p-67f, 0x1.a5aa66p-51f, 0.0f, 0x1.a795fep-107f, 0.0f, 0.0f, 0.0f,
     0x1.c9a2a8p-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4fc7b8p-43f, 0x1.16b894p-78f, 0.0f,
     0x1.75a376p-82f, 0.0f, 0.0f, 0x1.04840ap-5f, 0.0f, 0x1.e75246p-35f,
     0x1.60bda4p-103f, 0.0f, 0.0f, 0x1.d98b46p-44f, 0x1.601bbp-106f, 0x1.d10d42p-8f,
     0.0f, 0x1.6802ccp-112f, 0x1.dd665cp-112f, 0x1.d109bap-69f, 0.0f, 0x1.55ece8p-19f,
     0x1.34de82p-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b982a8p-77f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.488c38p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a7d1bap-75f,
     0x1.62dc0ep-85f, 0.0f, 0.0f, 0.0f, 0x1.ca2accp-67f, 0x1.6944aap-11f, 0.0f,
     0x1.940c4ap-74f, 0x1.a1d5p-58f, 0x1.0c4a28p-38f, 0.0f, 0x1.cd9cap-76f,
     0x1.4e7aaap-34f, 0.0f, 0.0f, 0.0f, 0x1.fc6ab2p-19f, 0x1.ba279p-18f, 0.0f,
     0x1.f50d88p-102f, 0x1.e0cd86p-118f, 0x1.cc17bcp-76f, 0.0f, 0.0f, 0x1.5c74d2p-19f,
     0x1.f5c6cep-66f, 0x1.288ffcp-83f, 0x1.283386p-102f, 0x1.a910f2p-90f,
     0x1.b6904p-126f, 0x1.1eda62p-23f, 0x1.2cdcbep-43f, 0.0f, 0.0f, 0.0f,
     0x1.118eacp-10f, 0x1.6ffaeep-86f, 0.0f, 0x1.5b90cep-32f, 0x1.fe70a4p-9f,
     0x1.8dd1bap-17f, 0x1.19d3ccp-29f, 0x1.e56b6cp-84f, 0x1.fdd8c2p-24f, 0.0f, 0.0f,
     0.0f, 0x1.ac8cb8p-80f, 0.0f, 0x1.d46b9cp-48f, 0.0f, 0.0f, 0x1.5d8b04p-58f,
     0x1.753b28p-17f, 0.0f, 0x1.6bad68p-110f, 0x1.bd79f2p-18f, 0.0f, 0.0f,
     0x1.321036p-8f, 0x1.4baab4p-42f, 0x1.12703cp-33f, 0x1.84587ap-3f, 0.0f,
     0x1.47f49ap-1f, 0x1.9bd8ep-59f, 0.0f, 0x1.fb196ap-112f, 0.0f, 0x1.21eb8p-41f,
     0x1.99c562p-75f, 0.0f, 0x1.24b44ap-2f, 0x1.d20e96p-93f
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
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = external_bench_wrapper_cst;
    tmp = __cos_counter_num(0);
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
            tmp1 = Sleef_finz_erfcf4_u15kvx(tmp0);
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
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_finz_erfcf4_u15kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_erfcf4_u15kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
