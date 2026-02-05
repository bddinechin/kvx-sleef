/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_asinf1_u35purecfma.c --function \
 *     Sleef_asinf1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.ade21ep-21f, 0.0f, 0.0f, 0x1.9061f6p-102f, 0x1.75058p-123f, 0x1.1d5518p-40f,
     0x1.c5c2e6p-113f, 0x1.8d627ep-27f, 0x1.81dee8p-5f, 0x1.9054e8p-74f, 0.0f,
     0x1.b94ccap-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.64a0dap-125f, 0.0f, 0.0f, 0.0f,
     0x1.28edd2p-86f, 0x1.890c62p-68f, 0x1.a4c6b6p-104f, 0.0f, 0x1.bf9e5ep-101f, 0.0f,
     0.0f, 0.0f, 0x1.9a4ca4p-67f, 0x1.0db05cp-25f, 0.0f, 0x1.458054p-84f, 0.0f, 0.0f,
     0x1.330aecp-32f, 0x1.5d01aap-16f, 0.0f, 0x1.e809bcp-69f, 0x1.49711cp-88f, 0.0f,
     0x1.6fbffep-33f, 0.0f, 0x1.be76cap-42f, 0x1.949972p-36f, 0.0f, 0.0f, 0.0f,
     0x1.c44ac4p-83f, 0x1.85056ap-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.45a4cap-26f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8bb586p-61f, 0x1.2f5002p-71f, 0.0f,
     0x1.0f759ep-38f, 0.0f, 0x1.9a2852p-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fef09ap-58f,
     0x1.3101dp-88f, 0x1.3137cep-12f, 0.0f, 0x1.be1122p-2f, 0x1.b90444p-119f, 0.0f,
     0x1.9205b2p-82f, 0x1.97771p-61f, 0x1.c4aa4p-109f, 0x1.961a34p-22f, 0.0f,
     0x1.061918p-110f, 0.0f, 0x1.5e807ep-16f, 0x1.b2b328p-113f, 0x1.9e691p-16f,
     0x1.dc0542p-117f, 0x1.27f268p-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cae9dap-41f, 0.0f, 0x1.12c446p-85f, 0.0f, 0x1.d504c2p-72f, 0.0f, 0.0f, 0.0f,
     0x1.f2acf8p-77f, 0x1.e6927ep-100f, 0x1.35f2dap-14f, 0x1.c41e7cp-80f, 0.0f,
     0x1.d6bdb6p-4f, 0x1.98c3f8p-119f, 0x1.3313c6p-89f, 0x1.0e31f8p-123f,
     0x1.719042p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e28d2p-108f, 0x1.764236p-4f, 0.0f,
     0.0f, 0.0f, 0x1.7ec6p-112f, 0x1.b8629ep-119f, 0x1.98ce48p-65f, 0.0f, 0.0f, 0.0f,
     0x1.8291dep-59f, 0x1.84a24cp-95f, 0x1.66f1e4p-22f, 0.0f, 0.0f, 0x1.a61a42p-12f,
     0.0f, 0x1.d8b90cp-38f, 0x1.28ad26p-65f, 0.0f, 0x1.cf466p-61f, 0.0f,
     0x1.030536p-91f, 0.0f, 0.0f, 0.0f, 0x1.60bb02p-69f, 0x1.a0748cp-97f, 0.0f,
     0x1.99193ap-26f, 0.0f, 0x1.c7956cp-120f, 0x1.679cfap-14f, 0x1.e28968p-56f, 0.0f,
     0x1.7f9b3ap-94f, 0.0f, 0x1.035ec4p-3f, 0.0f, 0.0f, 0x1.25f242p-103f, 0.0f,
     0x1.bda06p-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0f0192p-103f, 0.0f,
     0x1.61e99p-94f, 0x1.7bf946p-96f, 0x1.b17c78p-54f, 0x1.1326dap-12f, 0.0f, 0.0f,
     0.0f, 0x1.c9adbcp-72f, 0.0f, 0x1.d391f4p-20f, 0x1.55f9bcp-62f, 0x1.b5138ep-18f,
     0.0f, 0x1.a480aep-5f, 0.0f, 0.0f, 0x1.a0a17cp-105f, 0.0f, 0x1.f34d9ap-88f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.8ce0f6p-31f, 0.0f, 0.0f, 0x1.048a12p-76f, 0.0f,
     0x1.17ff56p-92f, 0x1.f508c6p-54f, 0x1.ae3ddp-61f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bbfc24p-83f, 0.0f, 0.0f, 0x1.055956p-117f, 0x1.41e5f2p-54f, 0.0f,
     0x1.9e59p-71f, 0x1.848af4p-7f, 0x1.5b44cp-17f, 0x1.19f79p-34f, 0.0f,
     0x1.11cbf6p-91f, 0x1.f7d856p-95f, 0x1.6a7736p-67f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.57f97ep-80f, 0x1.7509dep-26f, 0.0f, 0x1.58087ep-61f, 0x1.b9cd2cp-115f,
     0x1.a7b344p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2a809p-58f, 0x1.992f92p-57f,
     0.0f, 0.0f, 0x1.60f2a4p-57f, 0x1.a27e78p-55f, 0.0f, 0x1.e473d6p-110f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d4d796p-52f, 0x1.074bb6p-1f, 0.0f, 0x1.98bd2ep-20f,
     0x1.6d3d1ap-39f, 0x1.1a305cp-77f, 0x1.9fb1dap-37f, 0.0f, 0x1.1f0ecp-89f, 0.0f,
     0.0f, 0x1.26e2bep-30f, 0.0f, 0x1.ab99e4p-59f, 0x1.8516ccp-77f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.cc7948p-10f, 0.0f, 0x1.2225aap-126f, 0.0f, 0x1.a539aap-48f, 0.0f,
     0x1.d2be14p-27f, 0x1.4c271p-100f, 0.0f, 0x1.4e7088p-101f, 0x1.f39a78p-17f, 0.0f,
     0x1.3d81fep-103f, 0x1.a39be6p-19f, 0.0f, 0x1.f1aaf4p-86f, 0.0f, 0.0f, 0.0f,
     0x1.e7886ap-52f, 0.0f, 0x1.e930e6p-84f, 0.0f, 0x1.73bdb6p-104f, 0.0f, 0.0f,
     0x1.3dfbe6p-66f, 0x1.7eb994p-58f, 0.0f, 0x1.c366d2p-115f, 0x1.9122fp-31f,
     0x1.601c52p-85f, 0x1.cebbdcp-61f, 0x1.e35d9p-3f, 0x1.bb446p-78f, 0.0f, 0.0f,
     0x1.4294b8p-124f, 0x1.e34f5p-117f, 0.0f, 0x1.a59f24p-123f, 0.0f, 0.0f,
     0x1.96db2cp-37f, 0.0f, 0.0f, 0.0f, 0x1.01e95cp-113f, 0x1.28a37ap-126f,
     0x1.f5ac5cp-97f, 0.0f, 0x1.12927ap-52f, 0x1.f02454p-91f, 0.0f, 0.0f,
     0x1.51aa1p-73f, 0.0f, 0x1.d3352cp-111f, 0x1.b6ebd4p-24f, 0x1.c96ae4p-70f,
     0x1.f5e6ap-63f, 0x1.bad328p-126f, 0.0f, 0.0f, 0x1.56648cp-78f, 0.0f, 0.0f, 0.0f,
     0x1.5bb71cp-39f, 0x1.819432p-76f, 0.0f, 0x1.cf3142p-2f, 0.0f, 0.0f,
     0x1.ecc078p-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e3a69p-75f, 0.0f, 0x1.bef888p-9f,
     0x1.d5724ep-119f, 0.0f, 0x1.01cf34p-87f, 0x1.444522p-13f, 0x1.9b6ff4p-76f, 0.0f,
     0.0f, 0x1.b7d728p-18f, 0x1.93a64ap-98f, 0.0f, 0x1.a1cc6cp-109f, 0.0f,
     0x1.3d566p-27f, 0.0f, 0.0f, 0.0f, 0x1.1b0904p-103f, 0x1.98fd12p-41f, 0.0f, 0.0f,
     0x1.34579p-19f, 0x1.400ffcp-2f, 0x1.035572p-8f, 0x1.85a4aap-34f, 0x1.31d3b2p-99f,
     0x1.246bbep-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5d585p-51f,
     0x1.9363ccp-30f, 0.0f, 0x1.19e776p-101f, 0.0f, 0x1.881f08p-50f, 0x1.55737ep-46f,
     0x1.15491ep-116f, 0.0f, 0x1.92dc2ep-13f, 0x1.337988p-115f, 0x1.40ac1ep-101f,
     0x1.ae9b38p-125f, 0.0f, 0.0f, 0.0f, 0x1.c51114p-95f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.64a6bep-5f, 0x1.590b52p-94f, 0.0f, 0.0f, 0x1.32078p-41f,
     0x1.308eb8p-102f, 0x1.fe6442p-16f, 0x1.7a4104p-98f, 0.0f, 0x1.0511a6p-70f,
     0x1.f2ad3p-1f, 0.0f, 0x1.fe6baep-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.93b1c2p-125f,
     0.0f, 0x1.ab6a4cp-26f, 0x1.1a51f2p-44f, 0.0f, 0x1.60a33cp-10f, 0.0f,
     0x1.fea554p-90f, 0x1.e55e68p-125f, 0x1.0b4c7ep-6f, 0x1.7a63e2p-17f, 0.0f,
     0x1.dc5726p-1f, 0.0f, 0.0f, 0x1.fa4c58p-112f, 0x1.c86fdcp-20f, 0.0f,
     0x1.c5219p-86f, 0x1.b2e8e2p-7f, 0x1.cccd7p-64f, 0x1.88a08p-33f, 0x1.e79de8p-65f,
     0.0f, 0x1.f345a2p-109f, 0x1.be842cp-119f, 0x1.ad18d6p-42f, 0x1.c8a98p-125f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3eb328p-10f, 0.0f, 0x1.b45a56p-46f, 0x1.d5ad92p-56f,
     0.0f, 0x1.cb14b6p-59f, 0x1.7d4e28p-102f, 0x1.d00384p-120f, 0.0f, 0x1.820d28p-98f,
     0x1.3821bcp-105f, 0x1.f00538p-61f, 0.0f, 0.0f, 0.0f, 0x1.2f4f94p-117f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.be248ap-101f, 0.0f, 0.0f, 0.0f, 0x1.d4bbfep-97f, 0.0f,
     0.0f, 0x1.9fd58cp-116f, 0.0f, 0.0f, 0.0f, 0x1.fb6c9ep-34f, 0x1.829ec4p-8f,
     0x1.60fcc6p-15f, 0x1.1c9adcp-46f, 0x1.4ad7eap-78f, 0x1.bd8b28p-6f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.7f5bc2p-90f, 0x1.eb1ac2p-14f, 0.0f, 0x1.fad2ep-53f, 0.0f, 0.0f,
     0x1.4ab54p-6f, 0.0f, 0x1.416d02p-64f, 0x1.c98e82p-67f, 0.0f, 0x1.90667cp-12f,
     0x1.62b9aep-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d5e9e6p-115f, 0.0f,
     0.0f, 0x1.f9f916p-43f, 0.0f, 0x1.f19f84p-35f, 0.0f, 0x1.5ac79cp-36f,
     0x1.b25cecp-122f, 0.0f, 0x1.722e36p-37f, 0x1.337ddap-3f, 0x1.fdd5p-51f,
     0x1.9b524p-111f, 0x1.583534p-45f, 0x1.b2097p-14f, 0.0f, 0x1.87347ep-58f,
     0x1.80909cp-51f, 0.0f, 0x1.76f8aep-93f, 0x1.29bb38p-86f, 0.0f, 0x1.2b9896p-124f,
     0x1.4ff026p-116f, 0x1.1b6deep-87f, 0x1.d91bfep-5f, 0x1.9976bap-4f, 0x1.78da4p-5f,
     0x1.9136fep-46f, 0x1.896da6p-76f, 0x1.4797fcp-81f, 0.0f, 0.0f, 0x1.0ffc16p-44f,
     0x1.57508ap-64f, 0.0f, 0x1.59ce72p-40f, 0.0f, 0x1.51619ap-61f, 0.0f,
     0x1.8aa7eep-110f, 0.0f, 0x1.cec79p-47f, 0x1.11b71p-13f, 0.0f, 0x1.d3b922p-2f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.578d6ap-43f, 0.0f, 0x1.fc62ep-18f,
     0x1.9e871cp-52f, 0x1.5fe61p-115f, 0x1.7a22bep-45f, 0x1.50a68ap-7f, 0x1.adc2p-25f,
     0x1.36b68p-33f, 0.0f, 0x1.31072ep-46f, 0x1.cd5396p-51f, 0x1.5f1776p-71f, 0.0f,
     0x1.695ad6p-13f, 0.0f, 0.0f, 0x1.64c486p-7f, 0x1.93f504p-116f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.79662p-28f, 0.0f, 0x1.d0db2cp-28f, 0x1.c7012ep-90f,
     0x1.cfc762p-36f, 0x1.2e7826p-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ce96e8p-28f,
     0x1.aea9ep-10f, 0.0f, 0x1.0886d4p-124f, 0.0f, 0.0f, 0x1.385ea4p-41f, 0.0f, 0.0f,
     0x1.b6c0d8p-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e64fdcp-69f, 0x1.99d414p-24f,
     0x1.cb2dd6p-121f, 0.0f, 0x1.ebafaap-109f, 0x1.e61d2p-114f, 0x1.b48166p-53f,
     0x1.3cfb5cp-28f, 0.0f, 0.0f, 0x1.f2a946p-8f, 0x1.ae6bacp-29f, 0.0f,
     0x1.1820eap-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.448ecp-94f, 0.0f, 0.0f,
     0x1.4cbb88p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.93b2aep-120f, 0x1.835108p-66f,
     0x1.3638dp-55f, 0x1.69a6e2p-65f, 0.0f, 0.0f, 0.0f, 0x1.90e432p-38f, 0.0f,
     0x1.58c318p-77f, 0.0f, 0.0f, 0x1.a8525p-31f, 0x1.84ce38p-46f, 0.0f,
     0x1.a1f5a2p-68f, 0x1.95f32ep-120f, 0.0f, 0x1.13890ep-34f, 0x1.408e3ap-99f, 0.0f,
     0x1.1ae346p-89f, 0x1.80b9cep-60f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f,
     0x1.7dd0aep-65f, 0x1.e67eaep-10f, 0.0f, 0x1.f65528p-78f, 0x1.0e02cep-125f, 0.0f,
     0x1.d323fap-86f, 0x1.ec7dfap-43f, 0.0f, 0.0f, 0.0f, 0x1.335008p-19f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a0d17cp-94f, 0x1.7246dcp-107f, 0x1.59fcd2p-38f, 0.0f, 0.0f,
     0x1.77cc98p-36f, 0x1.f1eb94p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7d7918p-15f,
     0x1.000dbp-17f, 0.0f, 0x1.984f4ap-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ad6e66p-99f, 0x1.6f2d7cp-96f, 0.0f, 0.0f, 0.0f, 0x1.a8ed6p-55f, 0.0f, 0.0f,
     0x1.ffd86cp-97f, 0.0f, 0x1.247d3ap-41f, 0.0f, 0.0f, 0x1.c57642p-11f,
     0x1.48330cp-66f, 0x1.96e08ap-106f, 0x1.d9014ep-108f, 0.0f, 0x1.6bd72ep-109f,
     0.0f, 0x1.1fddbep-36f, 0.0f, 0x1.0830bap-19f, 0x1.d61e78p-57f, 0.0f,
     0x1.90deecp-55f, 0.0f, 0x1.07a8a6p-39f, 0x1.8504a8p-120f, 0.0f, 0.0f, 0.0f,
     0x1.a84f5p-77f, 0x1.cfcd26p-102f, 0x1.8d01fap-114f, 0x1.0172c6p-95f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4c029cp-66f, 0x1.e9ce7ap-2f, 0x1.b95ep-70f,
     0x1.f20e7p-91f, 0.0f, 0.0f, 0x1.764a8ep-49f, 0.0f, 0.0f, 0.0f, 0x1.96461p-38f,
     0x1.8d5f8ep-81f, 0.0f, 0.0f, 0.0f, 0x1.812718p-103f, 0.0f, 0x1.d041a6p-44f, 0.0f,
     0.0f, 0x1.763486p-41f, 0.0f, 0.0f, 0.0f, 0x1.64b20ep-30f, 0.0f, 0.0f, 0.0f,
     0x1.3b3582p-112f, 0x1.a8b31p-88f, 0x1.06a93ap-23f, 0x1.58ee4p-55f,
     0x1.e027e4p-55f, 0.0f, 0.0f, 0x1.040d6ap-113f, 0x1.2da48ep-79f, 0.0f, 0.0f, 0.0f,
     0x1.dd71dcp-38f, 0.0f, 0x1.20ee8ap-2f, 0.0f, 0.0f, 0x1.e96a5cp-25f,
     0x1.2a40eep-75f, 0x1.52d0d8p-45f, 0.0f, 0x1.de4d2ap-14f, 0x1.1ea828p-25f,
     0x1.2d1138p-29f, 0x1.0868d6p-25f, 0x1.53edeep-63f, 0.0f, 0x1.d7c1c4p-82f,
     0x1.b0d7d8p-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.215a6p-25f, 0.0f, 0x1.cf2e1cp-18f,
     0x1.f5ae86p-18f, 0x1.b5e578p-17f, 0.0f, 0.0f, 0.0f, 0x1.c7af2ep-61f, 0.0f, 0.0f,
     0x1.504c34p-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d45504p-24f,
     0x1.92dcb2p-120f, 0x1.45bd3p-11f, 0x1.bb841ep-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.98d902p-110f, 0.0f, 0x1.87886ap-13f, 0.0f, 0x1.880e6ap-91f,
     0x1.826ccap-6f, 0x1.5bac84p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3d04dep-96f, 0x1.166066p-27f, 0.0f, 0x1.4d15ccp-71f, 0.0f, 0.0f,
     0x1.6cee8ap-41f, 0x1.8daa5ap-53f, 0.0f, 0x1.77b74ap-16f, 0.0f, 0x1.d5a7aep-118f,
     0.0f, 0x1.ecf904p-122f, 0x1.2055cep-105f, 0.0f, 0.0f, 0.0f, 0x1.79d6eep-12f,
     0.0f, 0x1.85c716p-72f, 0.0f, 0.0f, 0x1.d879b8p-126f, 0.0f, 0x1.981214p-62f, 0.0f,
     0x1.3619aap-38f, 0x1.8d4506p-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f,
     0x1.9ed93ap-88f, 0.0f, 0x1.115e3cp-4f, 0x1.f2cdf4p-28f, 0x1.ee94e2p-15f, 0.0f,
     0x1.fd271p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b4d09cp-72f, 0.0f, 0.0f,
     0x1.a41db4p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e585b8p-125f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ff1d8p-39f, 0x1.240ccp-112f, 0x1.0d22dcp-115f, 0x1.89f344p-107f,
     0x1.b37888p-8f, 0x1.cb5836p-13f, 0x1.3bbca4p-66f, 0x1.31538ap-33f,
     0x1.6ef74ap-37f, 0x1.3b59d2p-5f, 0x1.26b07cp-90f, 0.0f, 0x1.5ad42ep-69f, 0.0f,
     0.0f, 0.0f, 0x1.f88594p-67f, 0x1.82264p-112f, 0x1.b235f4p-114f, 0x1.791d08p-82f,
     0.0f, 0x1.9fda48p-30f, 0x1.bd32fap-37f, 0x1.8c8cbcp-48f, 0x1.f132bcp-45f,
     0x1.4aad36p-107f, 0.0f, 0.0f, 0x1.52db1ap-95f, 0x1.ad8332p-65f, 0.0f,
     0x1.f5ecf4p-7f, 0x1.8e95dp-72f, 0.0f, 0x1.80757cp-56f, 0.0f, 0x1.96bef6p-79f,
     0.0f, 0.0f, 0.0f, 0x1.d5d624p-93f, 0.0f, 0.0f, 0.0f, 0x1.261202p-119f,
     0x1.252cc2p-50f, 0x1.405b2ep-57f, 0.0f, 0.0f, 0.0f, 0x1.ef1534p-14f,
     0x1.0181dap-42f, 0.0f, 0.0f, 0x1.f3948ep-44f, 0x1.ab9e34p-15f, 0x1.c525bep-77f,
     0x1.e0c392p-74f, 0x1.c6d176p-76f, 0.0f, 0x1.466292p-21f, 0x1.7194bap-112f,
     0x1.308c5ep-9f, 0.0f, 0x1.31539ap-81f, 0x1.1a15cap-78f, 0.0f, 0x1.06fc88p-108f,
     0x1.a868ep-58f, 0x1.a5722ap-8f, 0.0f, 0x1.35a76ap-108f, 0x1.c5a762p-119f,
     0x1.71878p-19f, 0x1.69796cp-66f, 0x1.d7cfaap-67f, 0x1.057f84p-47f, 0.0f,
     0x1.35e09cp-86f, 0x1.edf3b4p-23f, 0.0f, 0x1.ae923cp-50f, 0x1.fd68aap-50f,
     0x1.eccb4ap-59f, 0x1.f6b2ecp-51f
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
            tmp1 = Sleef_asinf1_u35purecfma(tmp0);
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
    printf("Sleef_asinf1_u35purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_asinf1_u35purecfma bench acc %a\n", global_bench_acc);
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
