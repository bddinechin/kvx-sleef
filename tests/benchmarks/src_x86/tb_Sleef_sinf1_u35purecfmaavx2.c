/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sinf1_u35purecfma.c --function Sleef_sinf1_u35purecfma \
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
     0x1.fe92ep-64f, 0.0f, 0x1.319224p-96f, 0.0f, 0x1.e5e3dep-109f, 0x1.af393p-33f,
     0x1.3eb53ap-99f, 0x1.845a66p-58f, 0x1.d67cfcp-106f, 0x1.f5946ap-97f,
     0x1.089ae8p-120f, 0x1.cbc592p-52f, 0x1.0f44a2p-86f, 0x1.efe512p-40f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.997864p-74f, 0.0f, 0.0f, 0x1.c722c6p-22f, 0x1.7db9d6p-29f,
     0x1.46fe98p-89f, 0x1.8bb7d8p-110f, 0.0f, 0x1.cb2024p-106f, 0.0f, 0.0f,
     0x1.7ce886p-19f, 0.0f, 0x1.cc6e34p-82f, 0.0f, 0x1.03c9bap-104f, 0.0f,
     0x1.e0e086p-109f, 0.0f, 0x1.4d8bc6p-83f, 0x1.4c7a72p-65f, 0x1.6bb29ep-112f, 0.0f,
     0x1.8009dep-70f, 0x1.918f9ap-30f, 0x1.b2a876p-21f, 0x1.9c8a9cp-11f,
     0x1.982808p-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cd4faap-114f, 0x1.038f14p-61f,
     0x1.b36306p-67f, 0x1.e1f1d6p-40f, 0.0f, 0x1.c01fp-69f, 0x1.e915bep-77f, 0.0f,
     0.0f, 0x1.bbf852p-37f, 0.0f, 0.0f, 0.0f, 0x1.f5523ep-9f, 0.0f, 0x1.ba0538p-51f,
     0x1.3ffa68p-57f, 0.0f, 0x1.137ac2p-62f, 0.0f, 0x1p0f, 0x1.f72efp-105f,
     0x1.d2d3ccp-120f, 0x1.de36fcp-17f, 0x1.9f399cp-16f, 0x1.4f2806p-69f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.bfa96ep-3f, 0.0f, 0x1.b5489cp-38f, 0x1.e805dep-29f,
     0x1.ae78fap-21f, 0x1.27d62ep-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b54aa8p-125f, 0.0f, 0x1.11328ep-85f, 0x1.1b545cp-123f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.2444d6p-54f, 0x1.d4b558p-22f, 0x1.2ba0ccp-26f, 0.0f,
     0x1.0a7e6ap-12f, 0x1.1afcf6p-119f, 0x1.b7c34p-24f, 0x1.1488e6p-98f,
     0x1.e71a68p-100f, 0x1.8914fp-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8c5448p-123f,
     0x1.5765dcp-84f, 0.0f, 0.0f, 0x1.965844p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.54477cp-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.93eb4ap-87f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.5df4f6p-88f, 0.0f, 0x1.a59766p-72f, 0.0f, 0x1.b9d566p-56f,
     0x1.706c3ep-69f, 0x1.b02802p-14f, 0x1.079aaep-76f, 0x1.13e1b4p-110f, 0.0f,
     0x1.70cb76p-65f, 0x1.3a314ep-40f, 0x1.ed10d6p-53f, 0.0f, 0x1.d67fdap-122f,
     0x1.6cb912p-43f, 0x1.17963p-11f, 0.0f, 0.0f, 0x1.484f68p-24f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.394542p-37f, 0x1.41b6f6p-74f, 0x1.60ac04p-48f,
     0x1.fb752cp-96f, 0x1.503e42p-111f, 0x1.540e46p-115f, 0.0f, 0x1.2f4f14p-44f,
     0x1.fe88cep-66f, 0.0f, 0x1.b514f8p-72f, 0x1.181dep-75f, 0.0f, 0x1.8ce3fap-28f,
     0x1.b83c98p-126f, 0.0f, 0.0f, 0.0f, 0x1.e5b0f4p-4f, 0.0f, 0x1.b5cab6p-54f,
     0x1.831576p-99f, 0x1.bb836ap-26f, 0x1.720ea4p-102f, 0x1.1f5568p-66f,
     0x1.170f12p-42f, 0.0f, 0.0f, 0x1.545c86p-23f, 0x1.2b145p-19f, 0x1.0fe9cep-64f,
     0.0f, 0.0f, 0x1.42a164p-92f, 0.0f, 0.0f, 0.0f, 0x1.df98c4p-2f, 0x1.9ba21cp-108f,
     0.0f, 0x1.ccb10cp-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.722f42p-98f, 0x1.ec487p-121f,
     0x1.1f4d46p-14f, 0.0f, 0x1.0a4992p-9f, 0.0f, 0.0f, 0x1.1606bcp-123f, 0.0f, 0.0f,
     0x1.38dc86p-76f, 0x1.8d6b5ap-45f, 0x1.ee414ap-63f, 0x1.9c72e4p-82f, 0.0f, 0.0f,
     0.0f, 0x1.3de81cp-17f, 0x1.50b64ap-114f, 0x1.95cbd6p-124f, 0x1.a8b5b8p-106f,
     0.0f, 0.0f, 0.0f, 0x1.7099dap-70f, 0.0f, 0x1.69767ep-20f, 0x1.78c146p-29f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.781d1p-2f, 0.0f, 0x1.1e244p-20f,
     0x1.12cf06p-42f, 0x1.46017cp-59f, 0.0f, 0.0f, 0.0f, 0x1.5f0524p-94f,
     0x1.6abddp-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.434922p-120f, 0.0f,
     0x1.fd6258p-54f, 0.0f, 0.0f, 0x1.ed3bbp-67f, 0.0f, 0x1.5e6f92p-45f,
     0x1.2f8dc4p-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5a838cp-35f,
     0x1.d70406p-12f, 0.0f, 0x1.fd1a2cp-72f, 0.0f, 0x1.825a3ep-117f, 0.0f, 0.0f,
     0x1.9f09dp-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dcf158p-24f, 0x1.a0669ap-98f, 0.0f,
     0x1.a2358p-123f, 0.0f, 0.0f, 0x1.c3403cp-55f, 0x1.287afap-84f, 0x1.742444p-45f,
     0x1.a69674p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f211f8p-123f, 0x1.a71b2cp-43f,
     0x1.65d0dcp-2f, 0.0f, 0x1.a5367cp-96f, 0x1.0adb9ep-30f, 0.0f, 0x1.2be494p-53f,
     0x1.486248p-54f, 0.0f, 0.0f, 0x1.97973p-75f, 0x1.7e34eep-94f, 0.0f,
     0x1.5f6e2cp-89f, 0.0f, 0x1.5dac62p-52f, 0.0f, 0.0f, 0x1.932c68p-32f,
     0x1.02a9dp-87f, 0x1.f16554p-52f, 0.0f, 0.0f, 0.0f, 0x1.3275cap-119f, 0.0f,
     0x1.03b1p-80f, 0x1.f7846p-79f, 0x1.b8fb0ap-13f, 0x1.0d97dp-85f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.9ea672p-43f, 0x1.6e9b54p-119f, 0.0f, 0.0f, 0x1.2cd166p-111f,
     0x1.dcf8b6p-78f, 0x1.b8ec8ep-4f, 0.0f, 0.0f, 0x1.7f1c34p-118f, 0x1.73f00ep-66f,
     0x1.3392a6p-72f, 0.0f, 0.0f, 0x1.230958p-74f, 0x1.675972p-36f, 0x1.3a416cp-104f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ac84e6p-98f, 0x1.14facep-120f, 0.0f, 0.0f,
     0x1.4b52c8p-125f, 0x1.5dbb6cp-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3f113p-76f,
     0x1.11d2dep-26f, 0x1.016f4cp-110f, 0.0f, 0x1.abb22p-18f, 0x1.675c82p-86f,
     0x1.96ef74p-84f, 0x1.d58bbp-24f, 0.0f, 0.0f, 0x1.235c7ep-110f, 0.0f,
     0x1.24d382p-87f, 0x1.18952ep-68f, 0x1.db7a8cp-62f, 0x1.f06188p-41f,
     0x1.16533ep-29f, 0x1.e5961p-7f, 0.0f, 0.0f, 0x1.3b729cp-106f, 0x1.32a9d4p-70f,
     0x1.dd6e0cp-111f, 0.0f, 0x1.1eb33ap-27f, 0x1.977f5cp-79f, 0.0f, 0x1.0a479ep-122f,
     0x1.838856p-5f, 0x1.8dd8ecp-40f, 0.0f, 0x1.20c40ep-34f, 0x1.2d2bdep-31f, 0.0f,
     0x1.87e588p-86f, 0x1.bd876cp-88f, 0x1.622e36p-96f, 0x1.dc734p-76f, 0.0f, 0.0f,
     0x1.f14ccep-25f, 0x1.18b066p-36f, 0x1.1f86bap-83f, 0x1.fe847ep-101f, 0.0f, 0.0f,
     0x1.a98092p-108f, 0x1.4988cp-19f, 0x1.d4b00ap-71f, 0.0f, 0x1.59474ap-123f,
     0x1.85b8d8p-25f, 0.0f, 0.0f, 0x1.c7fc06p-64f, 0x1.7c9b38p-69f, 0x1.90d8b4p-115f,
     0.0f, 0.0f, 0.0f, 0x1.dd50bcp-4f, 0x1.01dd12p-44f, 0x1.16fa0ap-78f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.801654p-54f, 0x1.54e1c6p-109f, 0.0f, 0x1.7758f2p-4f,
     0x1.148c1ap-92f, 0.0f, 0x1.88d236p-37f, 0x1.ac28a2p-48f, 0.0f, 0.0f, 0.0f,
     0x1.c31d1cp-124f, 0x1.831b9p-82f, 0x1.44bf7p-40f, 0x1.9b081ep-94f, 0.0f,
     0x1.48060ap-45f, 0x1.ce63cap-33f, 0x1.445eccp-80f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.52755p-121f, 0x1.b291a6p-62f, 0x1.3a41dcp-89f, 0x1.c08664p-4f,
     0x1.3e1fcp-24f, 0x1.c5ff8ep-35f, 0x1.da1364p-69f, 0.0f, 0.0f, 0.0f,
     0x1.43d8e4p-111f, 0.0f, 0.0f, 0.0f, 0x1.81cd4p-43f, 0.0f, 0x1.9bb97ep-67f,
     0x1.341d7ap-35f, 0x1.6bc06ap-13f, 0.0f, 0.0f, 0.0f, 0x1.d5e06ap-123f, 0.0f,
     0x1.dce012p-17f, 0x1.09fecap-85f, 0x1.1ba812p-3f, 0x1.7cc0dep-109f, 0x1p0f,
     0x1.803eap-43f, 0x1.8a5eacp-36f, 0.0f, 0x1.65633ep-86f, 0.0f, 0x1.5ff9b4p-97f,
     0x1.d112dp-20f, 0x1.6c6368p-15f, 0x1.64e7dcp-7f, 0x1.af7dcp-95f, 0.0f,
     0x1.2eb28ep-101f, 0x1.25ce3ap-117f, 0x1.9c9d98p-107f, 0x1.cafe44p-126f,
     0x1.7ef80ap-87f, 0x1.a802ep-38f, 0x1.229452p-88f, 0x1.e031c6p-55f,
     0x1.21dd16p-79f, 0x1.8ee476p-119f, 0.0f, 0.0f, 0.0f, 0x1.8687ecp-50f, 0.0f, 0.0f,
     0x1.548048p-6f, 0.0f, 0x1.1e18c8p-84f, 0x1.5625c2p-30f, 0x1.51c442p-94f, 0.0f,
     0x1.36ab62p-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.453ee4p-122f,
     0.0f, 0x1.6319e4p-71f, 0x1.8be606p-3f, 0.0f, 0.0f, 0.0f, 0x1.5ff048p-44f, 0.0f,
     0.0f, 0.0f, 0x1.19797p-17f, 0.0f, 0x1p0f, 0.0f, 0x1.3ab2dp-8f, 0x1.5337fap-93f,
     0x1.17dbbcp-5f, 0x1.c63b46p-24f, 0.0f, 0.0f, 0.0f, 0x1.c15702p-108f,
     0x1.e30d94p-11f, 0x1.aca30cp-122f, 0x1.58d2f8p-32f, 0x1.6e48dcp-117f,
     0x1.041ce2p-76f, 0.0f, 0x1.83a482p-34f, 0.0f, 0x1.399ef2p-113f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.3aa16ep-87f, 0x1.52c60ap-79f, 0.0f, 0x1.774a02p-78f, 0.0f,
     0x1.c7f798p-116f, 0x1.2b242p-73f, 0.0f, 0.0f, 0x1.b6cbecp-25f, 0x1.9be628p-73f,
     0x1.687662p-102f, 0.0f, 0x1.924254p-66f, 0x1.f33fd6p-125f, 0x1.52e44p-90f, 0.0f,
     0.0f, 0x1.ec9716p-119f, 0.0f, 0x1.31309ep-71f, 0x1.1c3edcp-45f, 0x1.31034ap-21f,
     0x1.79b912p-101f, 0x1.707512p-6f, 0.0f, 0.0f, 0x1.567378p-57f, 0x1.b43a16p-38f,
     0.0f, 0.0f, 0x1.832926p-12f, 0.0f, 0x1.26ddccp-93f, 0.0f, 0.0f, 0.0f,
     0x1.8d4b6p-8f, 0.0f, 0x1.0f887cp-68f, 0x1.78e53ap-86f, 0.0f, 0.0f,
     0x1.e4232ep-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.74d0dap-76f, 0x1.5ba87p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.99f0e6p-99f,
     0x1.81221ep-72f, 0x1.99924cp-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fb1722p-66f,
     0x1.1ceac2p-90f, 0x1.d813cp-109f, 0.0f, 0.0f, 0.0f, 0x1.b64068p-17f,
     0x1.a8cc34p-120f, 0.0f, 0x1.604d4cp-117f, 0x1.747464p-51f, 0x1.199b32p-43f,
     0x1.d8ef36p-30f, 0.0f, 0x1.96f934p-60f, 0.0f, 0.0f, 0.0f, 0x1.a4d6eap-75f, 0.0f,
     0x1.8d0c1ep-91f, 0.0f, 0.0f, 0x1.5ae80cp-10f, 0x1.f591ccp-61f, 0x1.ce0df8p-41f,
     0x1.0edcb8p-42f, 0.0f, 0x1.7b7ddcp-20f, 0x1.138c96p-70f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c0ac2ap-120f, 0.0f, 0x1.d7084ap-77f, 0x1.05b0f4p-58f, 0.0f,
     0.0f, 0x1.ccb55cp-120f, 0.0f, 0x1.67b1acp-8f, 0x1.daaa7ap-105f, 0x1.c80266p-46f,
     0.0f, 0x1.11d612p-109f, 0.0f, 0x1.0ba63ap-9f, 0.0f, 0.0f, 0x1.1186a4p-47f, 0.0f,
     0x1.26f1bap-4f, 0.0f, 0.0f, 0x1.66fe0ap-107f, 0.0f, 0.0f, 0x1.bc89b6p-7f, 0.0f,
     0.0f, 0.0f, 0x1.2a263ep-18f, 0.0f, 0.0f, 0x1.f5bc9p-103f, 0x1p0f,
     0x1.1c4924p-22f, 0x1.61c3b2p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.abf4a8p-93f,
     0x1.bc07d8p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.512c96p-71f, 0.0f, 0.0f,
     0x1.07a05p-96f, 0.0f, 0x1.bf964ep-19f, 0x1.36e8b8p-118f, 0x1.a88b16p-83f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c52a3ap-54f, 0x1.8b1a94p-93f, 0x1.d3231ap-57f, 0.0f,
     0x1.d3891p-54f, 0.0f, 0x1.3650fcp-19f, 0x1.853a94p-32f, 0x1.eb5a28p-10f,
     0x1.58b108p-58f, 0x1.f8938ap-11f, 0x1.f3c234p-55f, 0x1.a7e03ep-85f, 0.0f, 0.0f,
     0x1.c59d4p-100f, 0x1.d6cbe2p-122f, 0.0f, 0.0f, 0.0f, 0x1.9815c2p-121f,
     0x1.2430b4p-53f, 0.0f, 0.0f, 0x1.161476p-20f, 0x1.ebd7aep-73f, 0x1.9ff3d8p-62f,
     0.0f, 0x1.c56e8p-2f, 0x1.cfc6aep-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cc74bap-92f, 0.0f, 0.0f, 0.0f, 0x1.704164p-88f, 0.0f, 0x1.20ecp-37f,
     0x1.1d09cap-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8b246p-37f, 0x1.f8e004p-121f, 0.0f,
     0.0f, 0x1.a0326ap-2f, 0.0f, 0.0f, 0x1.c739f6p-103f, 0x1.8ef322p-92f, 0.0f, 0.0f,
     0.0f, 0x1.32b198p-65f, 0x1.ac3826p-67f, 0x1.cf5da4p-93f, 0.0f, 0x1.d17cdp-124f,
     0x1.fd97dcp-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d451b8p-18f,
     0x1.692476p-24f, 0.0f, 0x1.58902p-100f, 0x1.04070ap-56f, 0.0f, 0.0f,
     0x1.09a4ccp-31f, 0x1.3e840ep-14f, 0x1.42a388p-63f, 0x1.648ee4p-35f, 0.0f, 0.0f,
     0x1.e788dep-28f, 0x1.64a18cp-71f, 0.0f, 0x1.dcffd2p-45f, 0x1.e313aep-9f,
     0x1.bb25bp-109f, 0x1.7d06bap-77f, 0x1.d8644cp-63f, 0x1.ea855ap-25f,
     0x1.fa42eap-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.12d852p-42f, 0x1.c627e6p-36f, 0.0f,
     0x1.7659a6p-14f, 0x1.b3856ap-11f, 0x1.b04b06p-108f, 0x1.908b08p-80f, 0.0f, 0.0f,
     0x1.25f7a2p-34f, 0.0f, 0x1.9a86fep-18f, 0x1.99b9f8p-66f, 0x1.4b323ep-117f,
     0x1.b14752p-62f, 0x1.784784p-23f, 0x1.130deep-79f, 0.0f, 0.0f, 0.0f,
     0x1.44051ap-98f, 0.0f, 0.0f, 0x1.93d79cp-10f, 0x1.cae472p-98f, 0.0f, 0.0f, 0.0f,
     0x1.ae1c62p-23f, 0.0f, 0.0f, 0x1.641dacp-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2b2b52p-96f, 0x1.63d6fp-12f, 0x1.d2e436p-106f, 0.0f, 0x1.8b292cp-94f,
     0x1.afe834p-71f, 0x1.18c3c6p-34f, 0.0f, 0x1.116064p-45f, 0.0f, 0.0f, 0.0f,
     0x1.4121a4p-94f, 0x1.110402p-49f, 0x1.2dfdecp-42f, 0x1.3ba3c8p-100f,
     0x1.dae94ap-100f, 0.0f, 0.0f, 0x1.dfabd2p-125f, 0x1.425448p-55f, 0.0f, 0.0f,
     0x1.c61624p-121f, 0.0f, 0x1.01c2dap-100f, 0.0f, 0x1.0b00d2p-3f, 0.0f,
     0x1.d79c2ep-93f, 0x1.a70432p-53f, 0.0f, 0x1.7eb69ep-105f, 0x1.8c72aep-115f,
     0x1.6c7b6ep-60f, 0.0f, 0.0f, 0.0f, 0x1.4baf62p-55f, 0.0f, 0x1.84627ep-114f, 0.0f,
     0x1.ed2cccp-12f, 0.0f, 0.0f, 0x1.265ebap-36f, 0.0f, 0x1.632998p-49f,
     0x1.612248p-102f, 0x1.e3b044p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d96328p-36f, 0.0f,
     0x1.293f22p-40f, 0x1.7fdc18p-18f, 0.0f, 0x1.8fa05ap-119f, 0.0f, 0x1.7d10a4p-97f,
     0x1.eaead6p-93f, 0.0f, 0x1.065838p-26f, 0x1.15d3b4p-30f, 0x1.ae7a92p-97f,
     0x1.9af9e4p-29f, 0x1.09341p-6f, 0.0f, 0x1.8b9f94p-95f, 0x1.0f56bp-37f, 0.0f,
     0x1.6a3f3p-42f, 0.0f, 0.0f, 0x1.f12088p-35f, 0x1.23e55ep-81f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.5f2b0ap-88f, 0x1.587d68p-64f, 0x1.8daf9ap-124f,
     0x1.a7c798p-99f, 0.0f, 0.0f, 0.0f, 0x1.4f7cb6p-70f, 0.0f, 0x1.af24c8p-85f,
     0x1.875676p-28f, 0.0f, 0x1.eebee4p-7f, 0.0f, 0x1.d340bap-81f, 0x1.383114p-83f,
     0x1.789a9ap-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.395deep-86f, 0.0f, 0x1.b75bb6p-67f,
     0.0f, 0.0f, 0.0f, 0x1.8b2b02p-113f, 0x1.e8fe44p-54f, 0.0f, 0x1.7fda5p-75f,
     0x1.37e0dap-26f, 0.0f, 0.0f, 0x1.b6ebe6p-59f, 0x1.2120cap-29f, 0.0f,
     0x1.4adedp-65f, 0x1.a83156p-51f, 0x1.c9b728p-53f, 0x1.98ea44p-102f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.832efcp-53f, 0.0f, 0.0f, 0x1.27e03cp-114f
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
            tmp1 = Sleef_sinf1_u35purecfma(tmp0);
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
    printf("Sleef_sinf1_u35purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_sinf1_u35purecfma bench acc %a\n", global_bench_acc);
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
