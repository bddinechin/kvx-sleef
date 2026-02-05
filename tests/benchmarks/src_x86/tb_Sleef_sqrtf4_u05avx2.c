/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sqrtf4_u05avx2128.c --function Sleef_sqrtf4_u05avx2128 \
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
     0.0f, 0x1.380ec6p-72f, 0x1.75e4b4p-58f, 0.0f, 0x1.256fb2p-70f, 0x1.73d8dcp-25f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.953578p-80f, 0x1.f7b8b6p-92f, 0.0f,
     0x1.03d07cp-117f, 0.0f, 0.0f, 0.0f, 0x1.439a5cp-32f, 0.0f, 0.0f, 0x1.318a2p-100f,
     0.0f, 0x1.b7caecp-86f, 0x1.678e24p-29f, 0x1.263f6cp-77f, 0x1.6fbd5ep-68f,
     0x1.3afc9ap-119f, 0x1.4f04aep-61f, 0x1.5f1d42p-114f, 0x1.fee8a6p-63f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.09b0d6p-32f, 0.0f, 0x1.2941cep-52f, 0.0f, 0.0f,
     0x1.db907cp-97f, 0.0f, 0x1.af6848p-36f, 0x1.cdea4cp-61f, 0.0f, 0x1.1cd1dap-84f,
     0x1.6e9b8p-110f, 0.0f, 0x1.25b334p-71f, 0.0f, 0.0f, 0x1.72ad16p-108f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.48113cp-37f, 0.0f, 0x1.502878p-115f, 0.0f,
     0x1.d563e4p-32f, 0.0f, 0x1.306634p-24f, 0x1.a8ed4cp-35f, 0.0f, 0x1.5d390ep-16f,
     0.0f, 0.0f, 0x1.b2232p-15f, 0x1.1c27bp-106f, 0x1.6fade6p-33f, 0x1.f3120ap-22f,
     0x1.86b8d6p-105f, 0x1.ee3a8cp-23f, 0x1.e8a062p-86f, 0x1.bac9d8p-20f, 0.0f, 0.0f,
     0x1.ada1e8p-123f, 0x1.7926p-77f, 0.0f, 0x1.217be6p-119f, 0.0f, 0.0f,
     0x1.40eadep-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.df6f22p-107f,
     0x1.7bb5c6p-121f, 0.0f, 0x1.6e9e3ap-119f, 0x1.0848a8p-32f, 0.0f, 0.0f, 0.0f,
     0x1.e6484p-2f, 0x1.9fe8b6p-104f, 0x1.8baa6p-61f, 0x1.8a4344p-44f,
     0x1.b666d8p-124f, 0.0f, 0x1.b882e8p-116f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.33d71ep-124f, 0.0f, 0.0f, 0.0f, 0x1.c41932p-34f, 0.0f, 0x1.dd298ep-126f,
     0.0f, 0x1.f86818p-1f, 0.0f, 0x1.381ab8p-103f, 0.0f, 0x1.9852c6p-24f,
     0x1.8cb6dcp-51f, 0.0f, 0x1.1436fep-112f, 0x1.9fb1dcp-92f, 0x1.681df8p-45f,
     0x1.045c1cp-31f, 0x1.faa576p-32f, 0x1.299812p-114f, 0x1.42b0c6p-34f, 0.0f,
     0x1.c20406p-5f, 0.0f, 0x1.fb6b5ep-35f, 0x1.a99ff8p-68f, 0.0f, 0x1.cb92fcp-20f,
     0.0f, 0.0f, 0.0f, 0x1.94318ap-46f, 0x1.c9f5f6p-78f, 0.0f, 0x1.a69e78p-48f, 0.0f,
     0.0f, 0.0f, 0x1.381344p-124f, 0x1.a6d136p-12f, 0.0f, 0x1.a4916p-20f, 0.0f,
     0x1.7719aep-49f, 0x1.347086p-116f, 0x1.a5fa28p-5f, 0x1.7e41e6p-100f,
     0x1.6fbb58p-111f, 0x1.70ddfep-63f, 0x1.e0232p-74f, 0x1.bb9534p-30f,
     0x1.106eb2p-35f, 0.0f, 0x1.2a6ad2p-126f, 0.0f, 0x1.de0c46p-19f, 0x1.a281cap-53f,
     0x1.faeaf4p-75f, 0x1.d59d88p-80f, 0.0f, 0x1.df5f86p-79f, 0.0f, 0x1.a003dcp-95f,
     0.0f, 0x1.fa644cp-96f, 0.0f, 0.0f, 0x1.8005dcp-11f, 0.0f, 0x1.bc3b3cp-90f, 0.0f,
     0x1.502dfap-5f, 0.0f, 0x1.119486p-103f, 0.0f, 0x1.b41cc6p-34f, 0x1.8780aap-122f,
     0x1.9af4c4p-85f, 0x1.95d214p-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b4e638p-12f,
     0.0f, 0x1.ab40e6p-97f, 0x1.39b08cp-12f, 0.0f, 0x1.f5df9p-63f, 0x1.c18444p-15f,
     0.0f, 0x1.79ac84p-85f, 0x1.9b7364p-20f, 0.0f, 0.0f, 0.0f, 0x1.9c3c6ap-105f,
     0x1.5a5e22p-93f, 0.0f, 0x1.b1a9ap-80f, 0x1.c76e62p-94f, 0.0f, 0.0f,
     0x1.efe912p-10f, 0x1.27ce48p-82f, 0.0f, 0x1.680316p-126f, 0x1.ce956cp-66f, 0.0f,
     0x1.a31d54p-72f, 0.0f, 0.0f, 0x1.6d9e36p-91f, 0.0f, 0.0f, 0x1.535542p-37f, 0.0f,
     0x1.42a248p-94f, 0.0f, 0.0f, 0.0f, 0x1.f5e1dp-49f, 0x1.83e678p-123f,
     0x1.b96fccp-103f, 0.0f, 0x1.8ec2eap-5f, 0.0f, 0.0f, 0.0f, 0x1.0fc824p-116f,
     0x1.15a918p-89f, 0x1.c4913cp-110f, 0.0f, 0.0f, 0x1.ae2518p-55f, 0x1.a4d5c2p-38f,
     0x1.02825p-94f, 0.0f, 0x1.0296a2p-102f, 0x1.73108ep-13f, 0x1.7b8d08p-28f, 0.0f,
     0.0f, 0.0f, 0x1.4c1db8p-33f, 0.0f, 0x1.d7088ep-16f, 0.0f, 0x1.5d8da4p-26f,
     0x1.122ff6p-94f, 0x1.69208ap-42f, 0x1.2982acp-111f, 0x1.e90f6cp-34f, 0.0f,
     0x1.47dd34p-68f, 0x1.d83692p-124f, 0.0f, 0.0f, 0x1.4dc4p-118f, 0x1.80290ep-103f,
     0x1.61a062p-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1ce1ep-12f, 0.0f, 0.0f, 0.0f,
     0x1.a9deb8p-33f, 0x1.752272p-122f, 0x1.4f4eaap-25f, 0x1.8c00dap-58f, 0.0f,
     0x1.f726bp-73f, 0.0f, 0x1.d84728p-71f, 0.0f, 0x1.6181cap-59f, 0x1.8a0e38p-47f,
     0.0f, 0x1.efba9cp-49f, 0.0f, 0x1.5cc342p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6c547ap-61f, 0x1.25ff52p-112f, 0.0f, 0.0f, 0.0f, 0x1.2e03fp-44f, 0.0f, 0.0f,
     0.0f, 0x1.3f845ep-93f, 0x1.1672cp-65f, 0x1.fb94dap-15f, 0.0f, 0x1.27b37p-107f,
     0x1.012148p-38f, 0x1.a85afcp-109f, 0.0f, 0x1.3ec2fcp-19f, 0.0f, 0.0f,
     0x1.31889cp-50f, 0.0f, 0x1.b59728p-68f, 0x1.697c2ap-33f, 0.0f, 0x1.23184ep-120f,
     0x1.220166p-8f, 0.0f, 0x1.c3e12ap-69f, 0x1.7230fap-9f, 0.0f, 0x1.9d394ep-119f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.9bd174p-35f, 0.0f, 0x1.bcfe0ap-9f, 0x1.6226f6p-102f,
     0x1p0f, 0x1.f4b19cp-103f, 0x1.e16e2p-53f, 0x1.b260a2p-1f, 0x1.d63456p-8f, 0.0f,
     0.0f, 0.0f, 0x1.1c3816p-119f, 0.0f, 0.0f, 0x1.2e284p-40f, 0.0f, 0.0f, 0.0f,
     0x1.5bb07cp-102f, 0.0f, 0x1.21e23ap-101f, 0.0f, 0x1.9f463cp-3f, 0.0f,
     0x1.a8e5aap-33f, 0.0f, 0x1.99d6b2p-89f, 0x1.26a35cp-78f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.76b26p-62f, 0.0f, 0.0f, 0.0f, 0x1.2d1882p-80f, 0x1.6ceabap-93f, 0.0f,
     0x1.b896b8p-87f, 0x1.8f846ep-66f, 0x1.c74be2p-44f, 0x1.c8ff26p-34f,
     0x1.8a9818p-31f, 0.0f, 0.0f, 0x1.87f156p-30f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b3e5bep-115f, 0x1.868a5ap-71f, 0x1.fc8786p-106f, 0x1.0d98aap-99f, 0.0f, 0.0f,
     0x1.837d2ap-5f, 0.0f, 0.0f, 0.0f, 0x1.1c5cb2p-43f, 0.0f, 0x1.9518ecp-27f, 0.0f,
     0x1.7107ep-26f, 0x1.88c954p-21f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.15d6b4p-2f, 0.0f, 0x1.7825c2p-16f, 0x1.55ce72p-87f, 0.0f,
     0x1.a399d4p-81f, 0x1.44531ap-28f, 0.0f, 0x1.6c9834p-42f, 0.0f, 0x1.034aa6p-84f,
     0x1.4752bp-59f, 0x1.44e232p-113f, 0.0f, 0x1.7c271ep-97f, 0x1.8095c6p-32f, 0.0f,
     0.0f, 0.0f, 0x1.d63df2p-31f, 0x1.69b04ap-105f, 0x1.98dbecp-118f, 0.0f,
     0x1.de015ap-103f, 0x1.bceafep-6f, 0x1.034ca6p-84f, 0x1.60febep-111f, 0.0f,
     0x1.ff68bcp-73f, 0x1.e2cd0ap-126f, 0x1.04059cp-35f, 0x1.8298b6p-28f,
     0x1.e8419cp-59f, 0x1.4db57cp-68f, 0x1.b54e68p-52f, 0.0f, 0x1.b08eaap-53f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b9d714p-48f, 0x1.ee7e22p-108f, 0.0f,
     0x1.bf068ep-109f, 0x1.5ed812p-111f, 0x1.61d8b2p-32f, 0x1.30e04ep-37f, 0.0f, 0.0f,
     0x1.511b2cp-123f, 0.0f, 0x1.ad3354p-27f, 0.0f, 0.0f, 0.0f, 0x1.476554p-52f,
     0x1.769ea8p-110f, 0x1.0fae7ep-97f, 0.0f, 0.0f, 0x1.b161c4p-122f, 0.0f,
     0x1.572a7cp-88f, 0x1.f348ecp-12f, 0.0f, 0x1.54ece2p-33f, 0.0f, 0x1.b35e5ap-50f,
     0x1.e819d4p-39f, 0x1.bf513ep-62f, 0.0f, 0x1.c5e4d8p-19f, 0.0f, 0x1.fbc6b6p-67f,
     0x1.0ec896p-119f, 0x1.12e30ap-8f, 0.0f, 0x1.beadb8p-96f, 0x1.9a1c74p-92f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ba695ap-72f, 0x1.ea5c88p-9f, 0x1.70b6c8p-99f, 0.0f,
     0x1.3e3b32p-3f, 0.0f, 0.0f, 0x1.400eb2p-35f, 0.0f, 0x1.e45132p-70f,
     0x1.11135cp-27f, 0x1.f9fb56p-66f, 0x1.c606f4p-82f, 0x1.a0c5b6p-125f,
     0x1.56cadp-1f, 0.0f, 0.0f, 0x1.a67fdap-67f, 0x1.ef98f6p-108f, 0.0f,
     0x1.6061eap-51f, 0x1.7de6f2p-9f, 0x1.816868p-55f, 0.0f, 0.0f, 0x1.abd5b6p-124f,
     0x1.5e7cb8p-12f, 0x1.890262p-1f, 0x1.34e204p-19f, 0x1.ce8d28p-24f,
     0x1.2792dp-36f, 0x1.a9b43p-80f, 0x1.f0f2dcp-96f, 0.0f, 0.0f, 0.0f,
     0x1.1cb6ecp-14f, 0x1.70076cp-13f, 0x1.86a03ep-34f, 0x1.1716bap-113f, 0.0f, 0.0f,
     0x1.b7fb62p-39f, 0x1.ca26b8p-38f, 0.0f, 0x1.233f82p-124f, 0x1.a90864p-34f,
     0x1.b9e25ep-19f, 0x1.71e146p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.38a4eep-22f,
     0x1.e3596ep-50f, 0x1p0f, 0x1.af5904p-45f, 0.0f, 0x1.8576d2p-112f,
     0x1.4503d6p-87f, 0.0f, 0x1.0fdf28p-58f, 0x1.dc7fd2p-17f, 0x1.875f1cp-42f,
     0x1.281ee6p-100f, 0.0f, 0.0f, 0x1.7eadf2p-45f, 0.0f, 0.0f, 0.0f, 0x1.36949p-114f,
     0x1.2188f4p-114f, 0.0f, 0.0f, 0x1.5ff0dap-122f, 0x1.cf54dep-3f, 0.0f, 0.0f,
     0x1.6851bcp-25f, 0.0f, 0x1.0b461ep-58f, 0x1.8ee18ap-53f, 0.0f, 0.0f, 0.0f,
     0x1.c39fccp-100f, 0x1.515da4p-7f, 0.0f, 0x1.ca0eccp-118f, 0x1.619626p-74f, 0.0f,
     0.0f, 0x1.9edd96p-36f, 0x1.016e96p-58f, 0.0f, 0x1.78addcp-11f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.95061ep-3f, 0.0f, 0x1.e27a3ep-107f, 0x1.c36628p-78f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.3ce86cp-60f, 0x1.6062b6p-109f, 0x1.642318p-35f, 0x1.f940ep-122f,
     0.0f, 0x1.01a3dep-50f, 0x1.433946p-15f, 0.0f, 0x1.fb283cp-30f, 0x1.9566c8p-73f,
     0.0f, 0x1.a05abcp-20f, 0.0f, 0x1.98c95cp-39f, 0.0f, 0.0f, 0x1.82156ep-88f,
     0x1.9b13b2p-57f, 0.0f, 0x1.b49f26p-15f, 0x1.43d586p-49f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f644fep-67f, 0x1.98b87ep-68f, 0.0f, 0x1.4114ep-55f, 0x1.50374cp-125f,
     0x1.fb5e6cp-57f, 0x1.cd0338p-92f, 0x1.fbfe32p-6f, 0x1.f317d4p-32f, 0x1.9d7cp-72f,
     0.0f, 0x1.108b7p-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.33e4cap-66f,
     0x1.abf754p-105f, 0x1.5a3fd2p-45f, 0x1.696a92p-110f, 0.0f, 0x1.402bb2p-32f, 0.0f,
     0x1.f169a8p-55f, 0.0f, 0x1.14768ep-114f, 0x1.dfc522p-29f, 0x1.2b6632p-4f,
     0x1.4ba19ap-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b2e0dcp-54f,
     0x1.6721d2p-15f, 0.0f, 0x1.83f196p-16f, 0.0f, 0.0f, 0x1.491f2ep-34f, 0.0f,
     0x1.79b61ap-82f, 0.0f, 0x1.bc5f62p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.20ea42p-25f,
     0x1.4f607ap-123f, 0x1p0f, 0x1.c62e34p-59f, 0.0f, 0x1.975cdep-23f, 0x1.31b34p-82f,
     0x1.972532p-85f, 0x1.87098cp-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a3842ap-76f, 0.0f,
     0x1.9708fcp-87f, 0.0f, 0.0f, 0x1.f2dde8p-52f, 0x1.24e416p-120f, 0.0f,
     0x1.6a8fdcp-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0135a4p-30f, 0x1.fabdf2p-93f,
     0x1.a829e8p-23f, 0.0f, 0.0f, 0.0f, 0x1.e1c66ap-47f, 0.0f, 0x1.c62b02p-101f, 0.0f,
     0.0f, 0x1.895e6ap-44f, 0x1.a4a864p-124f, 0.0f, 0x1.a99a48p-70f, 0.0f,
     0x1.677582p-13f, 0.0f, 0x1.8f5b86p-107f, 0.0f, 0x1.58e4f8p-17f, 0.0f,
     0x1.341f52p-76f, 0.0f, 0.0f, 0x1.601a26p-12f, 0.0f, 0x1.de1dap-122f, 0.0f,
     0x1.cf7f74p-124f, 0x1.4f644ap-27f, 0.0f, 0x1.894f7cp-77f, 0x1.91fa8ep-110f, 0.0f,
     0.0f, 0.0f, 0x1.e2764cp-3f, 0.0f, 0.0f, 0.0f, 0x1.de8bp-30f, 0.0f,
     0x1.30202cp-71f, 0x1.ad4428p-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3dd372p-96f,
     0x1.fa27f4p-69f, 0.0f, 0.0f, 0.0f, 0x1.eaa3eap-10f, 0x1.3773fap-118f,
     0x1.f585aep-31f, 0x1.3885fp-56f, 0x1.5018eep-74f, 0x1.6ce2a4p-28f, 0.0f, 0.0f,
     0x1.d1a21ep-78f, 0.0f, 0.0f, 0.0f, 0x1.d18c08p-85f, 0.0f, 0x1.d6c5ccp-19f,
     0x1.02c8aep-112f, 0.0f, 0.0f, 0x1.6a2d24p-75f, 0x1.a1af9ep-88f, 0.0f, 0.0f,
     0x1.44ef8ep-22f, 0.0f, 0x1.d3d8cp-23f, 0.0f, 0.0f, 0.0f, 0x1.2e4c0ep-1f,
     0x1.5627e2p-83f, 0.0f, 0.0f, 0x1.3032aep-122f, 0x1.3fb54cp-8f, 0x1.4adaecp-57f,
     0.0f, 0x1p0f, 0.0f, 0x1.3cd526p-53f, 0.0f, 0.0f, 0.0f, 0x1.e3de74p-73f,
     0x1.4e97f6p-38f, 0.0f, 0x1.27e3f6p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.51a11p-78f, 0.0f, 0x1.675d78p-50f, 0.0f, 0.0f, 0.0f, 0x1.f1796cp-82f,
     0x1.2ab7d4p-5f, 0x1.88699cp-48f, 0x1.531d5cp-75f, 0x1.849becp-52f,
     0x1.d647aep-80f, 0.0f, 0.0f, 0.0f, 0x1.cb64b4p-5f, 0x1.826036p-10f,
     0x1.e22174p-23f, 0.0f, 0.0f, 0x1.daca2ap-38f, 0.0f, 0x1.9fc11ep-108f,
     0x1.4e06c2p-14f, 0x1.43d00cp-8f, 0x1.c9182ep-63f, 0x1.ed40f4p-83f, 0.0f,
     0x1.196b96p-124f, 0.0f, 0.0f, 0.0f, 0x1.2796cap-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f76166p-121f, 0x1.0cfe7ep-33f, 0x1.c51a2p-116f, 0.0f, 0x1.907fe4p-56f,
     0x1.0c2bc2p-89f, 0x1.b793dcp-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d1f192p-108f,
     0x1.09a46ep-50f, 0.0f, 0x1.901cbep-61f, 0x1.b4b164p-68f, 0.0f, 0x1.a4e9dp-26f,
     0x1.09be2ap-83f, 0.0f, 0.0f, 0x1.11295ap-102f, 0x1.8089ap-45f, 0x1.59e3c6p-70f,
     0x1.4aa602p-27f, 0.0f, 0x1.af9ed4p-67f, 0x1.395b88p-47f, 0x1.e68884p-104f, 0.0f,
     0x1.daa668p-79f, 0.0f, 0x1.41e04ep-27f, 0.0f, 0x1p0f, 0.0f, 0x1.c2b976p-104f,
     0.0f, 0.0f, 0x1.fb2e4ep-98f, 0x1.0e4abp-25f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.172774p-54f, 0x1.dd070ap-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.40d0dep-61f, 0.0f,
     0.0f, 0x1.eec9dep-56f, 0.0f, 0.0f, 0x1.6da2fap-19f, 0x1.55b652p-15f, 0x1p0f,
     0.0f, 0.0f, 0x1.82d82p-76f, 0.0f, 0x1.69a6dp-39f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3e24f4p-20f, 0.0f, 0x1.0a582p-78f, 0x1.5e830cp-32f, 0x1.7c15c4p-79f, 0.0f,
     0x1.41807p-4f, 0.0f, 0x1.bfdfcp-90f, 0x1.b7607p-79f, 0x1.394a7ap-108f, 0.0f,
     0x1.08e268p-108f, 0x1.e218b6p-27f, 0.0f, 0x1.e13e82p-78f, 0.0f, 0.0f, 0.0f,
     0x1.60a34p-86f, 0.0f, 0x1.25d63p-123f, 0.0f, 0x1.aeddaep-119f, 0.0f, 0.0f, 0.0f,
     0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c72988p-47f, 0x1.eb594ep-122f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.9e759cp-93f, 0x1.8e2b3ap-109f, 0x1.e000cep-109f, 0x1.de488p-51f,
     0.0f, 0x1.e995f2p-80f, 0x1.0be96ap-48f, 0.0f, 0.0f, 0.0f, 0x1.905774p-74f, 0.0f,
     0.0f, 0x1.4c5866p-122f, 0x1.ec8fc8p-53f, 0x1.c2d8b2p-86f, 0x1.ace94cp-38f, 0.0f,
     0x1.dec008p-10f, 0x1.50c72ap-24f, 0x1.2ffab6p-42f, 0.0f, 0.0f, 0x1.656e78p-12f,
     0.0f, 0.0f, 0x1.c284bap-59f, 0x1.86c07p-83f, 0x1.93425p-71f, 0.0f, 0.0f,
     0x1.80dcap-105f, 0.0f, 0x1.5a89b2p-70f
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
            tmp1 = Sleef_sqrtf4_u05avx2128(tmp0);
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
    printf("Sleef_sqrtf4_u05avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_sqrtf4_u05avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
