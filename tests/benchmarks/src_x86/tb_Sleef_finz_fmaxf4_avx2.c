/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_fmaxf4_avx2128.c --function Sleef_finz_fmaxf4_avx2128 \
 *     --arity 2 --headers sleef.h,ml_support_lib.h --input-formats \
 *     binary32,binary32 --vector-size 4 --function-input-vector-size 4 \
 *     --bench --no-embedded-bin --target x86_avx2128
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
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.37c194p-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3588d8p-3f, 0x1.b944cep-52f, 0.0f, 0.0f, 0x1.c4235ap-35f, 0x1.70166ep-102f,
     0x1.6da52p-46f, 0x1.32da3ap-24f, 0.0f, 0.0f, 0x1.100b36p-98f, 0x1.50d5e6p-45f,
     0x1.f7d4dcp-35f, 0.0f, 0x1.e65dc6p-41f, 0x1.f36a9ep-70f, 0.0f, 0x1.3468c6p-14f,
     0x1.d5a00ap-63f, 0x1.b47642p-43f, 0x1.fe2d64p-48f, 0.0f, 0.0f, 0x1.deaa64p-115f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.27ca9ep-39f, 0x1.fbe5fcp-71f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ecebf4p-20f, 0x1.ef23eap-65f, 0x1.f75b74p-106f, 0x1.b91012p-17f, 0.0f,
     0x1.be026ap-18f, 0x1.712p-12f, 0x1.059e24p-86f, 0.0f, 0x1.b38ed8p-49f, 0.0f,
     0.0f, 0x1.406954p-23f, 0.0f, 0.0f, 0x1.9550b2p-67f, 0.0f, 0.0f, 0x1.0ccb5cp-16f,
     0.0f, 0.0f, 0x1.d143bep-41f, 0.0f, 0.0f, 0x1.fcfd08p-89f, 0x1.71ab12p-51f, 0.0f,
     0.0f, 0x1.024e9ap-90f, 0.0f, 0.0f, 0x1.8d1fd4p-126f, 0.0f, 0x1.d15d5ap-52f,
     0x1.2da6c4p-9f, 0x1.0ee182p-98f, 0.0f, 0x1.0002dap-3f, 0.0f, 0.0f, 0.0f,
     0x1.23bcdp-10f, 0x1.09eb4ep-74f, 0x1.2a2a36p-63f, 0x1.2dc952p-50f,
     0x1.e15338p-36f, 0.0f, 0.0f, 0.0f, 0x1.1eb5c6p-118f, 0x1.0e58d4p-96f, 0.0f,
     0x1.f5141ap-57f, 0x1.012398p-84f, 0.0f, 0.0f, 0.0f, 0x1.4158c8p-76f, 0.0f,
     0x1.b48704p-51f, 0x1.c8b796p-95f, 0.0f, 0x1.5e115ep-14f, 0.0f, 0.0f, 0.0f,
     0x1.f96f24p-62f, 0.0f, 0x1.354ef6p-21f, 0.0f, 0.0f, 0x1.72aacap-29f, 0.0f, 0.0f,
     0x1.e892c4p-50f, 0.0f, 0.0f, 0x1.fcf558p-49f, 0x1.cff69p-27f, 0.0f, 0.0f,
     0x1.d88248p-83f, 0x1.71cb92p-27f, 0.0f, 0.0f, 0.0f, 0x1.621442p-26f,
     0x1.b7fe34p-53f, 0.0f, 0x1.230358p-75f, 0.0f, 0x1.9b7998p-73f, 0.0f, 0.0f,
     0x1.31255cp-83f, 0x1.fad50ep-113f, 0x1.6811e6p-49f, 0.0f, 0.0f, 0x1.a0e092p-71f,
     0.0f, 0x1.15ae2ap-24f, 0x1.a65b9ep-114f, 0x1.725e14p-125f, 0.0f, 0x1.808934p-16f,
     0x1.ad6fbp-69f, 0x1.cca9a8p-98f, 0.0f, 0x1.1a1284p-110f, 0x1.380964p-85f,
     0x1.930638p-36f, 0.0f, 0.0f, 0x1.cfa46cp-91f, 0.0f, 0.0f, 0x1.2c52c8p-116f,
     0x1.6fe83ap-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9859dcp-9f,
     0x1.fcb63p-91f, 0x1.f0640ep-1f, 0.0f, 0.0f, 0x1.9a3aaap-36f, 0.0f, 0.0f,
     0x1.140004p-113f, 0.0f, 0x1.054fd2p-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.62a1fep-37f,
     0x1.39c15p-87f, 0x1.f8b758p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6e692p-116f, 0.0f,
     0x1.87a0e2p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.aa5c76p-6f, 0.0f, 0.0f,
     0x1.a8977ap-33f, 0.0f, 0x1.458446p-11f, 0x1.4dc104p-34f, 0.0f, 0x1.80521p-39f,
     0.0f, 0x1.39865ap-75f, 0.0f, 0.0f, 0x1.156bcep-19f, 0x1.7a5cecp-92f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.4aab7ap-105f, 0.0f, 0.0f, 0.0f, 0x1.031cb8p-95f,
     0x1.555ep-121f, 0x1.ee56a8p-91f, 0.0f, 0.0f, 0x1.6de392p-61f, 0x1p0f,
     0x1.1ca25p-80f, 0.0f, 0x1.111beep-46f, 0.0f, 0x1.0d6bf8p-96f, 0x1.25d34ep-83f,
     0x1.e5e90cp-9f, 0x1.a279a8p-36f, 0.0f, 0x1.d7aa42p-122f, 0.0f, 0x1.eaac18p-77f,
     0x1.f80d18p-113f, 0x1.48b5ep-35f, 0.0f, 0.0f, 0x1.2dffb6p-10f, 0x1.7fd736p-123f,
     0x1.6a03acp-65f, 0x1.46ee0cp-18f, 0.0f, 0x1.472826p-104f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ef4d98p-50f, 0.0f, 0x1.9b72ccp-63f, 0x1.ed48bep-103f, 0.0f,
     0x1.36eeb4p-107f, 0x1.dff34p-19f, 0x1.9604e2p-115f, 0.0f, 0x1.576664p-7f, 0.0f,
     0x1.bdb3fap-108f, 0x1.65d28ap-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6699dap-86f,
     0x1.d57d36p-108f, 0x1.1daa5cp-7f, 0x1.59044p-84f, 0.0f, 0.0f, 0x1.c62308p-100f,
     0.0f, 0x1.666988p-21f, 0.0f, 0x1.c3a276p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9cae26p-115f, 0x1.7c76cap-50f, 0.0f, 0x1.a5098p-70f,
     0x1.5ec4aap-3f, 0x1.c219bap-2f, 0.0f, 0x1.7f5e7ep-68f, 0.0f, 0.0f,
     0x1.2de408p-9f, 0x1.6d36fap-13f, 0x1.1e229ap-100f, 0x1.b21242p-16f,
     0x1.85e8ccp-11f, 0.0f, 0.0f, 0.0f, 0x1.fbde88p-112f, 0x1.bae462p-86f,
     0x1.51a5b2p-48f, 0.0f, 0.0f, 0x1.72a6e6p-115f, 0.0f, 0x1.931712p-40f, 0.0f,
     0x1.fab9fap-51f, 0x1.f9cb84p-103f, 0x1.b4e0a6p-123f, 0.0f, 0.0f, 0x1.b253f6p-16f,
     0.0f, 0.0f, 0x1.a6857ap-34f, 0.0f, 0x1.a259b6p-42f, 0x1.f42dd2p-28f, 0.0f,
     0x1.9dd1c4p-23f, 0x1.cb774cp-95f, 0x1.a7f122p-1f, 0x1.7e9344p-122f,
     0x1.9ac8bcp-10f, 0.0f, 0x1.8590bcp-106f, 0x1.68841ep-27f, 0x1.2a0c24p-88f,
     0x1.7dfaa2p-50f, 0.0f, 0x1.44f9dap-22f, 0.0f, 0.0f, 0x1.61eff4p-69f, 0.0f, 0.0f,
     0x1.f91dbp-86f, 0x1.4fe2dp-107f, 0.0f, 0x1.13bfccp-114f, 0.0f, 0.0f,
     0x1.d4868cp-65f, 0x1.65e2eap-125f, 0.0f, 0x1.9a2b76p-94f, 0.0f, 0x1.39936ap-10f,
     0x1.f8446p-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d05fbp-81f, 0.0f, 0x1.3d8678p-75f,
     0.0f, 0.0f, 0x1.7c5a76p-119f, 0.0f, 0x1.4d3df4p-115f, 0.0f, 0x1.7d9ee8p-46f,
     0.0f, 0.0f, 0x1.81492ep-88f, 0x1.432f1cp-19f, 0x1.de81bcp-48f, 0.0f, 0.0f, 0.0f,
     0x1.9e95ecp-32f, 0.0f, 0x1.dd3d9ep-16f, 0.0f, 0.0f, 0x1.3da1d6p-51f, 0.0f,
     0x1.c0cf9cp-32f, 0.0f, 0x1.9f3a1ap-51f, 0x1.ab7f2p-68f, 0.0f, 0x1.e1312ap-97f,
     0.0f, 0x1.9b40f2p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.85ab72p-66f, 0.0f, 0.0f,
     0x1.eeef98p-29f, 0.0f, 0.0f, 0x1.df6a94p-56f, 0.0f, 0x1.3ec2b8p-113f,
     0x1.9abbf2p-124f, 0x1.852b06p-119f, 0x1.f574d6p-41f, 0x1.540eb6p-114f,
     0x1.a862f8p-96f, 0.0f, 0x1.5c6226p-100f, 0x1.8b1228p-35f, 0x1.f7e442p-76f, 0.0f,
     0x1.67aa04p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f32e2ap-98f, 0.0f,
     0x1.6b6fc2p-74f, 0.0f, 0x1.cb9754p-112f, 0.0f, 0.0f, 0x1.06c67ep-44f,
     0x1.b6d14ep-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b2302cp-59f,
     0x1.2e525ep-53f, 0.0f, 0.0f, 0x1.0690b6p-67f, 0x1.42f226p-47f, 0x1.fa2edp-87f,
     0x1.899e82p-20f, 0.0f, 0.0f, 0.0f, 0x1.88d3fap-48f, 0.0f, 0x1.84c3bap-51f, 0.0f,
     0.0f, 0.0f, 0x1.51afap-36f, 0.0f, 0.0f, 0.0f, 0x1.1e6504p-1f, 0x1.78b488p-105f,
     0.0f, 0x1.aacc8ap-125f, 0x1.728ea6p-113f, 0x1.6c0184p-45f, 0x1.9161e6p-80f, 0.0f,
     0x1.0dcbcep-98f, 0.0f, 0x1.dbe44ep-61f, 0.0f, 0.0f, 0x1.8e2d6cp-42f,
     0x1.7ea93cp-9f, 0.0f, 0.0f, 0x1.a04352p-18f, 0.0f, 0x1.f0059cp-16f,
     0x1.9151bap-13f, 0x1.918bc6p-74f, 0x1.ea81dcp-23f, 0x1.9b2694p-55f, 0.0f, 0.0f,
     0x1.7e608ap-72f, 0.0f, 0x1.44a936p-5f, 0x1.339912p-91f, 0x1.44d822p-55f,
     0x1.611e5cp-23f, 0.0f, 0.0f, 0.0f, 0x1.42cc1p-53f, 0.0f, 0x1.03865cp-42f, 0.0f,
     0x1p0f, 0x1.663898p-19f, 0x1.90f272p-23f, 0.0f, 0x1.9299dcp-112f, 0.0f,
     0x1.4760f2p-111f, 0x1.706ab2p-18f, 0x1.76c94ap-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.131cbp-94f, 0.0f, 0x1.8ffae8p-68f, 0x1.e8d8fep-66f, 0.0f,
     0x1.89f87cp-114f, 0x1.bea28ap-96f, 0.0f, 0x1.664446p-22f, 0.0f, 0x1.4dba98p-3f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2cd41p-94f, 0x1.d40dfcp-25f,
     0x1.392adcp-82f, 0x1.d696d8p-40f, 0.0f, 0.0f, 0x1.4ac086p-81f, 0x1.824cecp-98f,
     0.0f, 0.0f, 0x1.20fd9p-28f, 0x1.63d31cp-47f, 0.0f, 0.0f, 0x1.39af62p-94f,
     0x1.23e0cp-10f, 0.0f, 0x1.51fdcap-39f, 0x1p0f, 0x1.92af0ap-93f, 0.0f,
     0x1.60f724p-68f, 0x1.a5787ep-20f, 0x1.4256ep-48f, 0x1.fd6168p-61f, 0.0f,
     0x1.0e9c04p-29f, 0x1.0bbd5ep-20f, 0x1.a67cbap-47f, 0x1.cd6f0cp-79f,
     0x1.377aa8p-101f, 0.0f, 0x1.98e5aep-99f, 0.0f, 0x1p0f, 0x1.41f53ep-97f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9b1d28p-44f, 0x1.50a2dp-70f, 0x1.e08beep-98f,
     0.0f, 0x1.58e174p-11f, 0.0f, 0x1.c3ee8cp-35f, 0x1.9789b4p-52f, 0x1.fcc94p-104f,
     0.0f, 0.0f, 0x1.873a3p-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ac56b2p-2f, 0.0f,
     0x1.d9948ep-23f, 0.0f, 0x1.096e7cp-25f, 0.0f, 0.0f, 0x1.21ff6ap-9f, 0.0f, 0.0f,
     0x1.28ccfp-33f, 0.0f, 0.0f, 0x1.e206b2p-12f, 0.0f, 0.0f, 0x1.3e25dcp-79f,
     0x1.b331f2p-86f, 0.0f, 0x1.3c2398p-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8258b4p-80f, 0x1.39c78ap-94f, 0x1.dfcbdep-11f, 0.0f, 0x1.93b54ep-119f, 0.0f,
     0.0f, 0.0f, 0x1.94cfa4p-122f, 0x1.f40b2p-43f, 0.0f, 0x1.8d7904p-48f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.02ebb6p-101f, 0.0f, 0x1.7645c6p-105f, 0x1.4915a4p-50f,
     0x1.4c9bdap-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ee4d32p-16f, 0x1.ff00a6p-35f,
     0x1.9c3d8p-99f, 0.0f, 0.0f, 0x1.6d191p-50f, 0.0f, 0.0f, 0.0f, 0x1.c79138p-76f,
     0x1.42ffbap-15f, 0.0f, 0x1.5aa6b4p-94f, 0x1.55634ep-19f, 0.0f, 0x1.bf56fap-58f,
     0.0f, 0.0f, 0x1.3d12c4p-62f, 0x1.c603cap-12f, 0x1.03c1f8p-37f, 0x1.439016p-58f,
     0x1.981cdcp-7f, 0x1.0af5b6p-102f, 0x1.14388ep-124f, 0x1.ffbac8p-45f, 0.0f, 0.0f,
     0.0f, 0x1.3e500ep-109f, 0.0f, 0.0f, 0x1.abba28p-62f, 0x1.9a7fccp-94f,
     0x1.4c857ep-71f, 0.0f, 0.0f, 0x1.66b1dap-27f, 0x1.67f50ep-104f, 0.0f,
     0x1.7b6292p-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0b5fa2p-79f, 0.0f, 0.0f,
     0x1.9a419cp-76f, 0x1.d4485cp-41f, 0x1.84c69ap-79f, 0.0f, 0x1.1f763cp-21f,
     0x1.8df45cp-125f, 0x1.859ff6p-124f, 0x1.35140ep-126f, 0.0f, 0x1.88e99cp-124f,
     0x1.c672e4p-62f, 0x1.eeb196p-61f, 0.0f, 0.0f, 0x1.1b5874p-73f, 0.0f,
     0x1.ade58p-87f, 0x1.fb3136p-124f, 0.0f, 0x1.09925ap-24f, 0x1.0edf66p-44f, 0.0f,
     0x1.a5f854p-2f, 0x1.5c8ce8p-39f, 0x1.68fe86p-73f, 0.0f, 0x1.58e468p-76f,
     0x1.d04a48p-111f, 0x1.c5462p-109f, 0.0f, 0.0f, 0.0f, 0x1.7087f4p-73f,
     0x1.603948p-6f, 0x1.6404a4p-40f, 0.0f, 0x1.ea18a4p-97f, 0.0f, 0x1.b5762ap-87f,
     0.0f, 0.0f, 0x1.57240cp-79f, 0x1.205daep-92f, 0x1.6c0c4ep-110f, 0.0f,
     0x1.9da1f8p-79f, 0.0f, 0.0f, 0.0f, 0x1.44ea0cp-15f, 0.0f, 0x1.83449ap-50f, 0.0f,
     0.0f, 0.0f, 0x1.8a0626p-120f, 0.0f, 0x1.e6cc52p-50f, 0x1.70d39ap-92f,
     0x1.b666b8p-18f, 0.0f, 0.0f, 0x1.b8328ap-116f, 0.0f, 0.0f, 0.0f, 0x1.c86874p-86f,
     0.0f, 0.0f, 0x1.6a3484p-12f, 0x1.9531aap-38f, 0.0f, 0x1.e9f9cap-26f,
     0x1.7d08ecp-93f, 0.0f, 0.0f, 0.0f, 0x1.f04486p-123f, 0x1.31e5acp-72f,
     0x1.011fe2p-17f, 0x1.f0a8cep-86f, 0x1.0ba5aep-65f, 0x1.64f96ep-94f,
     0x1.bc79b2p-95f, 0x1.2ff7acp-92f, 0.0f, 0.0f, 0x1.df7862p-36f, 0.0f, 0.0f,
     0x1.2b6fd2p-125f, 0.0f, 0x1.05699cp-60f, 0.0f, 0x1.f4a34cp-75f, 0x1.7dd856p-44f,
     0x1.f30168p-59f, 0.0f, 0x1.1563ecp-65f, 0.0f, 0.0f, 0x1.a36f26p-92f, 0.0f,
     0x1.d0933p-2f, 0x1.681f24p-51f, 0.0f, 0.0f, 0.0f, 0x1.62221p-82f, 0.0f, 0.0f,
     0.0f, 0x1.9baca6p-48f, 0x1.266c8ap-98f, 0x1.9dda18p-36f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a7b5f6p-91f, 0x1.d4866cp-75f, 0x1.0f75f2p-80f, 0.0f, 0x1.3e30dep-100f,
     0x1.1a550ap-61f, 0.0f, 0x1.3f4572p-106f, 0x1.8dd34cp-87f, 0x1.05071p-70f,
     0x1.36d3c2p-119f, 0.0f, 0x1p0f, 0x1.6e81dcp-12f, 0.0f, 0x1.6e466p-113f,
     0x1.809f04p-35f, 0.0f, 0x1.08e89cp-79f, 0.0f, 0.0f, 0x1.ad7424p-41f, 0.0f, 0.0f,
     0.0f, 0x1.ea2612p-11f, 0x1.8c7224p-20f, 0x1.5ff07ep-3f, 0x1.e180b6p-115f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.4e03a8p-105f, 0x1p0f, 0.0f, 0x1.5aa948p-32f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.340f6ap-80f, 0.0f, 0.0f, 0x1.1d9c12p-101f, 0.0f, 0x1.bc9a22p-75f,
     0x1.487e9cp-21f, 0.0f, 0.0f, 0x1.b48288p-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.49592ap-38f, 0x1.cbb988p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.abc6d6p-19f, 0x1.1f06a4p-87f, 0x1.1ace9ep-87f, 0x1.a88ac2p-6f, 0.0f,
     0x1.9ad84p-116f, 0.0f, 0x1.590b7ep-98f, 0x1.bd108cp-81f, 0.0f, 0x1.f4edfcp-34f,
     0.0f, 0x1.9591acp-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5db85ap-106f,
     0x1.8707bcp-116f, 0.0f, 0.0f, 0x1.256e56p-95f, 0x1.ae5876p-40f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.9e21dep-109f, 0x1.d41afcp-106f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2732e2p-25f, 0.0f, 0.0f, 0.0f, 0x1.c30aep-2f, 0.0f, 0.0f, 0x1.b4a7ccp-63f,
     0.0f, 0x1.f0134cp-1f, 0x1.324412p-69f, 0.0f, 0x1.d886c2p-25f, 0x1.b97dbcp-80f,
     0x1.a1d664p-65f, 0.0f, 0.0f, 0x1.77850ap-43f, 0x1.60d0cap-57f, 0.0f, 0.0f,
     0x1.5eac5ap-119f, 0.0f, 0x1.1e3082p-52f, 0x1.20ae6ap-75f, 0x1.f33116p-105f, 0.0f,
     0.0f, 0x1.add36p-13f, 0x1.76d764p-126f, 0.0f, 0x1.81d194p-25f, 0.0f, 0.0f,
     0x1.f7e8b6p-85f, 0.0f, 0x1.7819f4p-91f, 0x1p0f, 0.0f, 0.0f, 0x1.5dfd7cp-23f,
     0.0f, 0.0f, 0x1.e0112ep-35f, 0.0f, 0x1.c617cep-36f, 0x1.bf41a4p-6f, 0.0f,
     0x1.21ba74p-14f, 0.0f, 0x1.d7113p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.dbf65ap-6f, 0.0f, 0x1.c8b236p-117f, 0.0f, 0x1.aa168ap-119f, 0x1.6d276p-8f,
     0x1.fe36fp-115f, 0x1.fc3872p-43f, 0x1.b6eee6p-9f, 0.0f, 0.0f, 0x1.fdde88p-119f,
     0x1.b8b744p-107f, 0x1.169426p-3f, 0.0f, 0.0f, 0x1.8d6fcep-74f, 0x1.52c5c8p-98f,
     0x1.de2442p-49f, 0.0f, 0x1.3ff9d8p-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a2292ep-105f, 0.0f
};
static const float external_bench_wrapper_input_table_arg1[1004]  = {
     0.0f, 0x1.16d668p-118f, 0.0f, 0x1.e3a56cp-112f, 0.0f, 0.0f, 0x1.b92382p-13f,
     0x1.1e35c6p-10f, 0x1.5e3d76p-37f, 0.0f, 0.0f, 0x1.53fbbcp-105f, 0.0f,
     0x1.3b2dbp-12f, 0.0f, 0.0f, 0x1.418a02p-79f, 0.0f, 0.0f, 0x1.686d1p-100f,
     0x1.865862p-108f, 0.0f, 0.0f, 0x1.fa61bp-22f, 0x1.55aaeap-103f, 0.0f, 0.0f, 0.0f,
     0x1.c3dacep-44f, 0x1.96327cp-20f, 0x1.2d121cp-93f, 0x1.0c20bcp-89f, 0.0f,
     0x1.5c3b6p-52f, 0x1.9ffcdep-72f, 0x1.ccfbcap-80f, 0.0f, 0x1.052c94p-24f, 0.0f,
     0.0f, 0.0f, 0x1.21c092p-54f, 0x1.bb58fap-123f, 0x1.e1375ap-28f, 0x1.924264p-71f,
     0.0f, 0x1.fd2e5ap-112f, 0x1.0fdedep-34f, 0.0f, 0.0f, 0x1.a2078cp-7f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.072a08p-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.30bab8p-23f, 0.0f, 0x1.554d8p-5f, 0x1.9b02bcp-20f, 0x1.eb2f44p-21f, 0.0f,
     0.0f, 0x1.ff6dc6p-110f, 0x1.228994p-32f, 0x1.50d73ep-12f, 0.0f, 0x1.1f065ep-75f,
     0.0f, 0x1.ba8dcp-56f, 0x1.3c7c6cp-60f, 0x1.89878p-33f, 0.0f, 0.0f,
     0x1.2a00eap-80f, 0x1.e1d14ep-20f, 0x1.bc8f3ap-104f, 0.0f, 0x1.fdf696p-13f,
     0x1.64c098p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d56b72p-42f,
     0x1.35ecf6p-107f, 0.0f, 0x1.ff2f36p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.db9ad6p-21f, 0.0f, 0x1.e4b98cp-85f, 0x1.5cdc8cp-55f, 0.0f, 0.0f,
     0.0f, 0x1.e59788p-114f, 0x1.7e7ba4p-13f, 0.0f, 0.0f, 0x1.2f8c4ep-8f, 0.0f, 0.0f,
     0.0f, 0x1.c7d9d6p-87f, 0x1.82c638p-54f, 0x1.5cc72ap-20f, 0x1.a93c02p-36f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b3869ep-21f, 0.0f,
     0x1.8703d4p-40f, 0x1.d52a46p-92f, 0x1.d4f2a2p-79f, 0.0f, 0.0f, 0x1.894bd8p-99f,
     0x1.e78402p-81f, 0x1.12ef78p-68f, 0.0f, 0x1.a1a23p-118f, 0x1.205fbap-45f,
     0x1.3718e2p-89f, 0x1.5c1f1ap-27f, 0.0f, 0x1.16c9f4p-100f, 0.0f, 0x1.1175cep-12f,
     0.0f, 0x1.a0070ap-57f, 0.0f, 0.0f, 0.0f, 0x1.44c52cp-59f, 0x1.33ef92p-95f,
     0x1.1b3b46p-37f, 0.0f, 0x1.a49ba6p-7f, 0x1.552bcap-114f, 0.0f, 0x1.150468p-106f,
     0x1.f3cd12p-101f, 0x1.7840ecp-70f, 0x1.6cec3ep-64f, 0x1.1bbf5cp-103f,
     0x1.f88fcap-11f, 0x1.5225c8p-66f, 0.0f, 0x1.dc12d6p-53f, 0x1.28e6c2p-59f, 0.0f,
     0x1.2ba72ap-74f, 0.0f, 0x1.eb5d5ap-103f, 0.0f, 0.0f, 0x1.ca7066p-19f, 0.0f, 0.0f,
     0.0f, 0x1.e1a538p-123f, 0x1.3e8c8cp-49f, 0x1.a0e72p-71f, 0x1.ef2fe2p-111f, 0.0f,
     0x1.25cdecp-58f, 0.0f, 0.0f, 0x1.9eeaa6p-54f, 0.0f, 0.0f, 0x1.450ffcp-126f, 0.0f,
     0.0f, 0x1.1e9074p-86f, 0x1.bb77e4p-124f, 0x1.fed56cp-47f, 0x1.0349a6p-15f, 0.0f,
     0x1.cffe5ep-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c2e1ecp-21f, 0x1.cef1dep-71f,
     0x1.5e2ec2p-69f, 0x1.a199ep-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4fb1b6p-28f, 0.0f, 0x1.e46226p-106f, 0.0f, 0.0f, 0x1.e91da6p-23f, 0.0f,
     0x1.3c4284p-78f, 0x1.412becp-80f, 0x1.2641f6p-50f, 0.0f, 0x1p0f, 0x1.4a9d94p-72f,
     0.0f, 0.0f, 0x1.e1e56p-50f, 0x1.24ef28p-12f, 0x1.861122p-122f, 0.0f, 0.0f,
     0x1.154ac4p-104f, 0.0f, 0x1.d0ee9ep-101f, 0x1.8637acp-59f, 0x1.c1ab48p-83f,
     0x1.ff72bp-111f, 0x1.3f449ep-42f, 0x1.5ae222p-17f, 0.0f, 0.0f, 0x1.aaa6cep-77f,
     0x1.1e4ae4p-86f, 0.0f, 0x1.439p-97f, 0x1.ade916p-23f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.4fe76cp-115f, 0x1.21d44p-55f, 0x1.5e072ap-121f, 0.0f, 0.0f, 0.0f,
     0x1.6fcc06p-29f, 0x1.29dd52p-106f, 0x1.6c61bcp-8f, 0.0f, 0.0f, 0x1.66fba6p-53f,
     0.0f, 0x1.0deeep-117f, 0x1.bbcfd2p-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fc8f48p-5f, 0x1.889bf6p-71f, 0.0f, 0x1.a4f434p-8f, 0x1.b373a2p-2f,
     0x1.4ba4bep-23f, 0.0f, 0.0f, 0.0f, 0x1.8efdcap-15f, 0.0f, 0.0f, 0x1.1bb36p-103f,
     0.0f, 0.0f, 0.0f, 0x1.bb0c92p-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4dc51cp-70f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a8731ep-9f, 0.0f, 0x1.54fbcep-23f,
     0x1.cae654p-82f, 0x1.b2eac8p-96f, 0x1.a27c12p-118f, 0.0f, 0x1.67e2cep-101f,
     0x1.1b243p-111f, 0.0f, 0.0f, 0x1.c98c2p-26f, 0.0f, 0x1.6cb82ap-68f,
     0x1.b809dap-23f, 0x1.030bb4p-60f, 0x1.c3aca2p-61f, 0x1.0f6e48p-106f,
     0x1.ab5744p-124f, 0x1.91178ep-75f, 0x1.7e2fe4p-61f, 0x1.5e4e66p-114f, 0.0f,
     0x1.63a9e4p-61f, 0.0f, 0.0f, 0x1.00b05ep-37f, 0x1.15979ap-116f, 0.0f,
     0x1.f88eccp-53f, 0x1.e0e7fap-20f, 0x1.405db8p-34f, 0x1.462c8p-70f,
     0x1.4f2e78p-23f, 0.0f, 0x1.b4b05ep-120f, 0.0f, 0x1.8a3374p-90f, 0x1.b54f9ep-30f,
     0.0f, 0.0f, 0x1.875f7p-77f, 0.0f, 0.0f, 0x1.45b2b8p-117f, 0.0f, 0x1.0e4774p-83f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f278dp-85f, 0x1.b6e064p-80f, 0.0f, 0.0f,
     0x1.4b11acp-33f, 0.0f, 0.0f, 0x1.869092p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bc94p-79f, 0x1p0f, 0x1.efdbdp-119f, 0.0f, 0x1.5c3b3p-89f, 0.0f,
     0x1.f925ccp-123f, 0.0f, 0.0f, 0x1.1ad80ap-67f, 0x1.2847cp-17f, 0x1.854a9ep-25f,
     0.0f, 0x1.6cf384p-36f, 0.0f, 0.0f, 0.0f, 0x1.c6a54p-36f, 0.0f, 0.0f, 0.0f,
     0x1.d823b2p-104f, 0.0f, 0x1.d8f08p-96f, 0x1.ec4558p-48f, 0x1.4a8924p-25f,
     0x1.dd76bcp-15f, 0x1.0ae16cp-16f, 0.0f, 0x1.b19372p-27f, 0x1.19f2d6p-12f,
     0x1.58ddaap-125f, 0.0f, 0x1.81e714p-36f, 0.0f, 0x1.cdc6f2p-41f, 0x1.6d2b8ap-34f,
     0x1.9cb356p-123f, 0.0f, 0.0f, 0x1.d5748ep-95f, 0x1.65904ep-81f, 0.0f,
     0x1.817762p-81f, 0x1.b56868p-8f, 0x1.40e982p-92f, 0x1.8bc3eap-13f, 0.0f, 0.0f,
     0.0f, 0x1.48efdep-58f, 0.0f, 0x1.22ae72p-76f, 0x1.e0a7e8p-104f, 0x1.eec5fcp-98f,
     0.0f, 0x1.8b13bap-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9a254ep-15f,
     0x1.ac40dep-16f, 0x1.476a4cp-5f, 0.0f, 0.0f, 0x1.ec94b8p-112f, 0.0f, 0.0f,
     0x1.c3dcecp-92f, 0.0f, 0.0f, 0x1.af60a8p-29f, 0.0f, 0x1.f26f7p-32f, 0.0f, 0.0f,
     0x1.80b568p-5f, 0x1.39644cp-73f, 0x1.a67948p-97f, 0.0f, 0.0f, 0x1.ea2f2ep-35f,
     0.0f, 0x1.ddd076p-63f, 0x1.2cc21cp-38f, 0.0f, 0.0f, 0x1.835162p-22f, 0.0f,
     0x1.0fbfaep-80f, 0x1.69c0d6p-34f, 0.0f, 0.0f, 0x1.ffdfb8p-32f, 0x1.58f6cep-9f,
     0x1.18d29ep-65f, 0.0f, 0x1.1777f2p-10f, 0.0f, 0x1.c5742p-110f, 0x1.a4c29ap-102f,
     0.0f, 0.0f, 0x1.231672p-78f, 0.0f, 0x1.7971d2p-103f, 0.0f, 0.0f, 0.0f,
     0x1.ab84p-27f, 0.0f, 0x1.ebf322p-98f, 0x1.391794p-12f, 0.0f, 0x1.541074p-114f,
     0.0f, 0.0f, 0.0f, 0x1.496682p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.3391eap-111f, 0x1.5b9274p-106f, 0.0f, 0.0f, 0x1.3d48cep-95f,
     0x1.05817ep-15f, 0.0f, 0x1.e45376p-50f, 0.0f, 0x1.688d48p-49f, 0.0f,
     0x1.4dca72p-103f, 0x1.a8e44p-8f, 0x1.084168p-44f, 0.0f, 0x1.ea6fc4p-37f,
     0x1.ed669cp-43f, 0x1.83356p-97f, 0x1.b1cbfp-107f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.dc775ap-28f, 0.0f, 0x1.b51b7ap-33f, 0.0f, 0x1.3c1d2ap-55f, 0x1.26b93p-33f,
     0x1.7f0d38p-39f, 0x1.458f76p-60f, 0.0f, 0x1.a68c1cp-112f, 0.0f, 0.0f, 0.0f,
     0x1.d5d9e4p-11f, 0.0f, 0x1.94f202p-113f, 0.0f, 0.0f, 0x1.4f31dcp-24f,
     0x1.741f64p-32f, 0x1.53512ep-116f, 0x1.a9fc72p-58f, 0x1.56756ep-44f,
     0x1.70d77p-116f, 0x1.c5499ap-38f, 0x1.46f61cp-64f, 0x1.dd80acp-76f,
     0x1.122624p-27f, 0x1.dc32c6p-28f, 0.0f, 0x1.1af634p-103f, 0.0f, 0x1.8e324ap-44f,
     0.0f, 0.0f, 0.0f, 0x1.39035ap-40f, 0.0f, 0.0f, 0x1.c7568cp-115f, 0.0f, 0.0f,
     0x1.66091p-51f, 0x1.f4d804p-18f, 0x1.f4e692p-103f, 0.0f, 0x1.6144cap-120f,
     0x1.cf5562p-65f, 0.0f, 0.0f, 0x1.5b4ea8p-32f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7d1cc4p-95f, 0x1.6e3966p-86f, 0x1.135e1p-17f, 0.0f, 0x1.06e1bap-12f,
     0x1.78b4bp-84f, 0x1.5edbdap-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f872acp-25f,
     0x1.61219ep-100f, 0.0f, 0x1.f521fp-20f, 0x1.76cf7ap-26f, 0.0f, 0x1.dd9fa6p-22f,
     0x1.3ce6e2p-123f, 0x1.5da974p-110f, 0x1.deca4cp-38f, 0.0f, 0.0f, 0x1.d705ap-34f,
     0.0f, 0.0f, 0x1.c5555ep-21f, 0x1.ace3dep-32f, 0.0f, 0x1.a993cap-64f, 0.0f, 0.0f,
     0.0f, 0x1.303f2ep-103f, 0.0f, 0x1.fb976p-66f, 0x1.8fa3c4p-34f, 0x1.b9ec34p-108f,
     0x1.9460dep-109f, 0x1.89e9eap-117f, 0.0f, 0x1.19ec18p-14f, 0.0f, 0x1.398664p-27f,
     0x1.f74e88p-62f, 0.0f, 0.0f, 0x1.8b7bcp-80f, 0x1.ec425ap-89f, 0x1.a96e5ep-69f,
     0.0f, 0x1.e5f052p-123f, 0.0f, 0x1.eda15ep-35f, 0x1.4e1d9ep-114f, 0.0f, 0.0f,
     0x1.72fc8ep-61f, 0x1.a2d224p-83f, 0x1.d09ae2p-67f, 0x1.d97916p-69f,
     0x1.67f7f6p-8f, 0x1.fe4616p-9f, 0.0f, 0x1.47a0cep-20f, 0x1.c3344cp-81f,
     0x1.9dbf52p-52f, 0.0f, 0.0f, 0x1.7f591p-23f, 0.0f, 0x1.1ce1c2p-11f, 0.0f, 0.0f,
     0x1.b52f38p-1f, 0.0f, 0x1.33e4f4p-68f, 0.0f, 0.0f, 0x1.30d3dap-9f,
     0x1.723a12p-1f, 0x1.55eacp-84f, 0.0f, 0x1.607b26p-121f, 0x1.51c94cp-112f, 0.0f,
     0.0f, 0x1.13b886p-110f, 0x1.be2866p-126f, 0x1.821b6ap-111f, 0.0f,
     0x1.7346eap-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8190e8p-86f, 0x1.156992p-67f,
     0.0f, 0x1.a0eaa8p-64f, 0.0f, 0x1.463d7cp-123f, 0x1p0f, 0.0f, 0.0f,
     0x1.96a128p-57f, 0x1.630a18p-61f, 0x1.40a58ap-55f, 0x1.b4eecep-55f, 0.0f,
     0x1.55db7cp-12f, 0.0f, 0x1.822926p-112f, 0x1.6622dap-53f, 0x1.93cc64p-6f, 0.0f,
     0x1.f9f064p-84f, 0.0f, 0.0f, 0x1.3dbafap-56f, 0x1.debf16p-96f, 0x1.915902p-73f,
     0.0f, 0x1.c3674cp-85f, 0x1.8044ecp-101f, 0x1.dd863ap-32f, 0x1.14ff4cp-14f,
     0x1.681c4cp-106f, 0.0f, 0x1p0f, 0.0f, 0x1.889b8p-42f, 0.0f, 0x1.d51364p-3f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d628a4p-58f, 0x1.ef6d42p-62f, 0x1.97c378p-82f,
     0x1.a74dd2p-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.259934p-34f, 0.0f,
     0x1.891b58p-102f, 0.0f, 0.0f, 0x1.b4d1d6p-7f, 0x1.5c8ed4p-21f, 0x1.522d72p-89f,
     0x1.e0ccf6p-93f, 0x1.6ba1fep-43f, 0.0f, 0x1.fd406p-80f, 0.0f, 0.0f, 0.0f,
     0x1.6e1be6p-124f, 0x1.476f16p-105f, 0x1.15a4f4p-13f, 0x1.91f5c8p-60f,
     0x1.b2f05ep-107f, 0.0f, 0x1.eaf12cp-124f, 0.0f, 0x1.41c32p-10f, 0.0f, 0.0f,
     0x1.35cb04p-99f, 0x1.51471cp-47f, 0.0f, 0.0f, 0.0f, 0x1.83721ep-88f, 0.0f,
     0x1.b21a1ap-103f, 0x1.cd6b9p-10f, 0x1.eaeb1ap-123f, 0x1.0af02ep-65f, 0.0f,
     0x1.9961a8p-34f, 0x1.e52058p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bcfebep-45f,
     0x1.ceaac6p-26f, 0.0f, 0.0f, 0.0f, 0x1.ab6848p-27f, 0.0f, 0.0f, 0.0f,
     0x1.b15f3ap-17f, 0x1.50c078p-56f, 0.0f, 0.0f, 0x1.ec320ap-113f, 0x1.68782ap-88f,
     0x1.b304fp-73f, 0x1.458a36p-36f, 0x1.067284p-58f, 0.0f, 0x1p0f, 0x1.41012p-105f,
     0x1.332faep-95f, 0.0f, 0x1.b75d82p-12f, 0.0f, 0.0f, 0.0f, 0x1.31f792p-124f, 0.0f,
     0.0f, 0x1.5d42p-77f, 0x1.a631d4p-73f, 0x1.bbcf88p-6f, 0.0f, 0x1.3dcf6ep-90f,
     0x1.a90d26p-69f, 0x1.7a477cp-96f, 0.0f, 0x1.425c6ap-74f, 0.0f, 0x1.7ce50cp-108f,
     0x1.0e1182p-64f, 0.0f, 0x1.37cea8p-51f, 0x1.df98b4p-48f, 0x1.ce9004p-94f, 0.0f,
     0x1.c9aebcp-79f, 0.0f, 0.0f, 0x1.f946a4p-57f, 0.0f, 0x1.fbfddp-52f, 0.0f,
     0x1.260f9ep-38f, 0x1.d57e32p-38f, 0x1.9cd154p-19f, 0x1.16ec2ap-77f,
     0x1.32bce6p-35f, 0x1.926f72p-65f, 0.0f, 0x1.721afep-35f, 0.0f, 0.0f,
     0x1.2e351ep-36f, 0x1.29ffecp-11f, 0x1.de9cc4p-47f, 0.0f, 0x1.1260b6p-92f, 0.0f,
     0x1.9b5f5ep-13f, 0x1.689cf4p-13f, 0x1.e783cap-49f, 0x1.4fd9d6p-107f, 0.0f,
     0x1.9308d4p-47f, 0x1.b26bcap-32f, 0x1.0106eap-32f, 0x1.5d726p-86f, 0.0f, 0.0f,
     0x1.6203b4p-94f, 0x1.4ca7ep-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b11b3ap-55f,
     0x1.7e8c36p-120f, 0.0f, 0.0f, 0x1.7b614ap-32f, 0x1.2bed2ep-77f, 0.0f, 0.0f, 0.0f,
     0x1.77e496p-43f, 0.0f, 0x1.ed3936p-22f, 0x1.fea5dcp-70f, 0.0f, 0x1.be7cf4p-57f,
     0x1.6a92c4p-18f, 0x1.3a2376p-110f, 0x1.d81b7ep-110f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.eb234cp-13f, 0x1.cd0d88p-27f, 0x1.ad4b6cp-89f, 0x1.a573ecp-26f,
     0x1.35f2fcp-119f, 0x1.79e788p-25f, 0.0f, 0.0f, 0.0f, 0x1.2b68d4p-54f,
     0x1.89c4c2p-48f, 0.0f, 0x1.d5a142p-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2b5a8ep-31f,
     0.0f, 0.0f, 0.0f, 0x1.897b8ap-88f, 0x1.00a604p-77f, 0x1.3260b6p-71f, 0.0f,
     0x1.ccfe1cp-3f, 0x1.27c598p-104f, 0x1.d5ff7ep-106f, 0.0f, 0.0f, 0x1.e23652p-81f,
     0x1.aef496p-79f, 0.0f, 0x1.388d6ap-80f, 0x1.6ed7ccp-5f, 0x1.f37b52p-103f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.af6404p-122f, 0.0f, 0.0f, 0x1.fb8202p-29f,
     0x1.19b464p-123f, 0.0f, 0.0f, 0x1.8a9414p-66f, 0.0f, 0.0f, 0x1.e067ep-4f,
     0x1.da02a6p-42f, 0x1.930b9p-59f, 0.0f, 0x1.7f9184p-68f, 0x1.63977ap-98f, 0.0f,
     0x1.02af0ap-36f, 0.0f, 0x1.d597e8p-62f, 0.0f, 0.0f, 0.0f, 0x1.b6e50ap-63f, 0.0f,
     0x1.7c2a2cp-8f, 0x1.2388fp-35f, 0x1.fca9aep-87f, 0.0f, 0x1.6fc53p-36f,
     0x1.6d7f4cp-88f, 0.0f, 0.0f, 0x1.63459cp-35f, 0.0f, 0.0f, 0.0f, 0x1.197e82p-16f,
     0x1.e8bcfcp-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cbbacap-114f, 0.0f,
     0x1.7327dp-39f, 0x1.f1c8c8p-93f, 0x1.871c42p-92f, 0x1.ba066p-74f, 0.0f,
     0x1.d40378p-43f, 0x1.cbc448p-125f, 0x1.8b2846p-99f, 0x1.026272p-85f, 0.0f,
     0x1.d58048p-108f, 0.0f, 0x1.6cbdf6p-37f, 0.0f, 0x1.f6869ap-99f, 0.0f,
     0x1.716ee2p-70f, 0x1.858432p-97f, 0.0f, 0.0f, 0x1.82f17p-40f, 0.0f,
     0x1.8a9998p-114f, 0x1.cbe4b2p-9f, 0x1.b5d376p-109f, 0.0f, 0x1.23a9ep-122f, 0.0f,
     0x1.84be82p-79f, 0.0f, 0.0f, 0.0f, 0x1.26a656p-119f, 0x1.489232p-94f
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
            tmp2 = Sleef_finz_fmaxf4_avx2128(tmp0, tmp1);
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
    printf("Sleef_finz_fmaxf4_avx2128 %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_fmaxf4_avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
