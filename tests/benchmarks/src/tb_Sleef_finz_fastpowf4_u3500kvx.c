/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_fastpowf4_u3500kvx.c --function \
 *     Sleef_finz_fastpowf4_u3500kvx --arity 2 --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary32,binary32 \
 *     --vector-size 4 --function-input-vector-size 4 --bench \
 *     --no-embedded-bin --target kv3
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
     0.0f, 0x1.aeb5dap-32f, 0x1.baa9cep-74f, 0x1.761bd8p-81f, 0x1.c82fb8p-66f,
     0x1.fe3446p-45f, 0.0f, 0x1.4f044p-55f, 0x1.e9757ap-23f, 0.0f, 0.0f,
     0x1.e29aaep-51f, 0.0f, 0x1.29c47ap-71f, 0.0f, 0.0f, 0.0f, 0x1.cccd32p-44f, 0.0f,
     0x1.793228p-121f, 0.0f, 0x1.c509f2p-89f, 0x1.e1c524p-74f, 0.0f, 0.0f, 0.0f,
     0x1.df6928p-10f, 0.0f, 0x1.9de8c8p-87f, 0x1.6823dep-24f, 0.0f, 0.0f,
     0x1.ae1c52p-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.fdbadp-124f,
     0x1.10cbfep-90f, 0.0f, 0x1.39e33cp-12f, 0.0f, 0.0f, 0x1.630b5cp-15f,
     0x1.124beep-75f, 0x1.936bbcp-82f, 0x1.f101dap-82f, 0.0f, 0x1.c724a2p-27f,
     0x1.316ca2p-108f, 0.0f, 0x1.1dbe3ep-48f, 0.0f, 0.0f, 0x1.1c751p-24f,
     0x1.6393f6p-28f, 0.0f, 0.0f, 0.0f, 0x1.6efccp-11f, 0.0f, 0x1.ecabdap-105f,
     0x1.20eccap-95f, 0.0f, 0x1.10319ap-33f, 0.0f, 0.0f, 0x1.78308ep-53f, 0.0f,
     0x1.35ea2ap-108f, 0x1.bd9dd8p-85f, 0x1.b36c1ep-61f, 0.0f, 0x1.7c8bacp-113f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a8baap-46f, 0x1.673608p-68f, 0.0f, 0.0f,
     0x1.6a8f9p-89f, 0.0f, 0x1.4db002p-66f, 0x1.edee36p-9f, 0x1.9f575ap-15f,
     0x1.2d3872p-16f, 0x1.621de4p-6f, 0.0f, 0.0f, 0.0f, 0x1.3e069p-105f,
     0x1.88c878p-121f, 0x1.1b0fbcp-11f, 0x1.537f72p-68f, 0.0f, 0.0f, 0.0f,
     0x1.60b5dcp-35f, 0x1.0ccf7ap-8f, 0x1.58b5p-71f, 0x1.dff4e6p-3f, 0x1.d934f8p-111f,
     0x1.a3288ep-11f, 0.0f, 0.0f, 0.0f, 0x1.a8fae8p-109f, 0x1.6d562ap-63f,
     0x1.662aa6p-98f, 0.0f, 0.0f, 0x1.7cc72ep-114f, 0x1.1c3c92p-42f, 0x1.06c3a4p-125f,
     0x1.c4ef22p-18f, 0x1.f433e2p-68f, 0x1.19ff7cp-26f, 0x1.1b5a64p-104f, 0.0f,
     0x1.f562d2p-13f, 0x1.a5063ap-7f, 0.0f, 0x1.f54478p-99f, 0.0f, 0x1.641d88p-20f,
     0x1.ad1c46p-106f, 0.0f, 0x1.d84792p-48f, 0x1.f30044p-37f, 0x1.48d62cp-103f, 0.0f,
     0x1.491a3ap-35f, 0.0f, 0x1.d7aa1ap-7f, 0x1.434cdep-23f, 0.0f, 0.0f,
     0x1.e09c04p-25f, 0x1.41ea46p-125f, 0x1.061284p-117f, 0x1.effd58p-34f,
     0x1.b6e7fep-74f, 0x1.400b62p-72f, 0.0f, 0.0f, 0.0f, 0x1.d70fap-104f,
     0x1.fba01ep-49f, 0x1.f83514p-52f, 0x1.35f74ap-78f, 0x1.5f8962p-56f, 0.0f, 0.0f,
     0x1.0bbe58p-108f, 0x1.c7a1bap-76f, 0x1.22742ep-18f, 0.0f, 0x1.cb2a7ap-117f, 0.0f,
     0x1.cfbb74p-73f, 0x1.558b3cp-80f, 0x1.8d8aa6p-20f, 0.0f, 0.0f, 0x1.120eap-25f,
     0.0f, 0.0f, 0.0f, 0x1.085d3ep-54f, 0.0f, 0.0f, 0x1.ef5b6ep-53f, 0x1.dba1e2p-28f,
     0x1.78722ap-122f, 0x1.011fc8p-7f, 0x1.69e888p-87f, 0x1.60d666p-74f,
     0x1.660c28p-54f, 0x1.32544cp-64f, 0x1.f44d58p-94f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.de3cb4p-13f, 0x1.430d78p-92f, 0.0f, 0x1.bc193cp-19f, 0x1.c2b622p-27f,
     0x1.e527fep-58f, 0x1.702bf8p-8f, 0.0f, 0x1.09c2eep-106f, 0.0f, 0x1.3d4614p-27f,
     0.0f, 0x1.94d9a8p-79f, 0x1.525988p-116f, 0x1.c0332p-6f, 0x1.8ca2f8p-95f,
     0x1.07cfaep-46f, 0x1.ec471ap-3f, 0x1.da2c3ap-89f, 0x1.53669cp-126f, 0.0f,
     0x1.3175c8p-59f, 0x1.33e728p-109f, 0.0f, 0x1.968d26p-57f, 0x1.edf8c6p-90f,
     0x1.883dd2p-95f, 0x1.9465dep-105f, 0x1.83a368p-20f, 0x1.90cafap-58f,
     0x1.d7c87ap-96f, 0x1.f0d778p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.74392ep-28f, 0x1.eca636p-114f, 0.0f, 0x1.819baap-4f, 0x1.8697e6p-24f,
     0x1.2fc652p-89f, 0.0f, 0x1.8ac256p-51f, 0x1.2aa4aap-110f, 0.0f, 0x1.93b022p-77f,
     0x1.738ebap-44f, 0.0f, 0x1.60817ap-111f, 0.0f, 0x1.97c6b6p-41f, 0.0f,
     0x1.ba5d68p-86f, 0.0f, 0.0f, 0x1.6aec7cp-33f, 0.0f, 0x1.d8875ep-49f,
     0x1.f7fd6ep-86f, 0x1.309ec2p-21f, 0.0f, 0.0f, 0x1.76a5e2p-67f, 0.0f,
     0x1.479f3p-107f, 0x1.f47d74p-76f, 0.0f, 0.0f, 0.0f, 0x1.462d18p-110f,
     0x1.e8b5a4p-119f, 0.0f, 0x1.3f549ep-15f, 0.0f, 0.0f, 0x1.72173cp-66f, 0.0f,
     0x1.2d3a0cp-11f, 0x1.9e3c5p-13f, 0x1.752b94p-60f, 0.0f, 0x1.607cccp-39f,
     0x1.dc6a3p-95f, 0.0f, 0x1.b407b2p-83f, 0x1.17cb7ap-3f, 0.0f, 0x1.5a6b6ep-22f,
     0x1.492792p-29f, 0x1.f4359p-63f, 0x1.2ea836p-37f, 0x1.992bc8p-84f, 0.0f, 0.0f,
     0x1.3dbb34p-33f, 0x1.57746p-39f, 0.0f, 0x1.02a5dcp-28f, 0x1.0b7eeap-102f, 0.0f,
     0.0f, 0.0f, 0x1.fcff5cp-83f, 0.0f, 0.0f, 0x1.c605aep-111f, 0x1.02515ap-108f,
     0x1.355734p-122f, 0x1.d13038p-119f, 0.0f, 0x1.5fd37ap-115f, 0x1.cd3ef2p-92f,
     0.0f, 0x1.aa72bp-74f, 0.0f, 0.0f, 0x1.a8801p-63f, 0x1.148abap-40f, 0.0f,
     0x1.d847fcp-52f, 0x1.5842d4p-98f, 0.0f, 0x1.9b519cp-114f, 0x1.db7368p-8f, 0.0f,
     0x1.13f5a4p-93f, 0x1.2a83ep-102f, 0x1.86788p-23f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6283b8p-85f, 0x1.f10a7ap-47f, 0.0f, 0x1.980174p-52f, 0x1.16a646p-6f,
     0x1.c6df04p-126f, 0x1.c3521ep-23f, 0x1.7d345p-26f, 0x1.e4952ap-93f,
     0x1.d6a10ep-67f, 0x1.1eed8ap-70f, 0x1.c4c86cp-29f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.67e308p-43f, 0.0f, 0x1.d42e4ap-114f, 0.0f, 0x1.58d322p-13f, 0x1.cee8b2p-26f,
     0x1.57b246p-84f, 0x1.f934aep-110f, 0.0f, 0x1.4d399ap-83f, 0x1.047ca4p-83f,
     0x1.caef0ap-97f, 0.0f, 0x1.44387p-82f, 0.0f, 0x1.e9ae7ap-106f, 0x1.b4c49cp-42f,
     0x1.c07254p-48f, 0x1.f679a8p-101f, 0.0f, 0x1.2ee74cp-93f, 0x1.4abb1p-104f,
     0x1.8d0998p-76f, 0x1.7a22fep-117f, 0.0f, 0.0f, 0.0f, 0x1.153ffep-67f,
     0x1.2ef68p-79f, 0x1.4e54bap-85f, 0x1.983b64p-69f, 0x1.fa1e4cp-70f,
     0x1.4af3aap-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4c8004p-83f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2a9e38p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3835p-58f,
     0x1.720ea8p-66f, 0.0f, 0x1.68ef4p-97f, 0.0f, 0x1.7669c8p-65f, 0.0f,
     0x1.d587cap-105f, 0x1.53a7dep-103f, 0.0f, 0x1p0f, 0.0f, 0x1.28257cp-104f, 0.0f,
     0x1.7f95bap-25f, 0.0f, 0x1.2be356p-82f, 0.0f, 0.0f, 0x1.83187ap-38f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e39e6ep-44f, 0.0f, 0x1.3c67d8p-41f, 0x1.1de19p-21f,
     0x1.0d807ap-82f, 0x1.e55cfap-62f, 0.0f, 0x1.27d792p-12f, 0.0f, 0.0f,
     0x1.976342p-33f, 0.0f, 0x1.06a32ap-25f, 0x1.1d887ap-51f, 0.0f, 0x1.67da84p-119f,
     0x1.5fdbf8p-55f, 0x1.59ed7ap-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a239fep-46f, 0x1.31c17ap-29f, 0.0f, 0.0f, 0x1.2c3494p-57f, 0.0f, 0.0f,
     0x1.56df5ep-41f, 0x1.03b0fap-18f, 0.0f, 0x1.692dd2p-40f, 0x1.56cec2p-104f, 0.0f,
     0x1.4e0866p-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1dc17ep-2f,
     0x1.eb7fccp-83f, 0x1.0a859ep-12f, 0x1.2d6512p-96f, 0x1.2bd16p-106f, 0.0f,
     0x1.1216c4p-114f, 0.0f, 0x1.fd348ap-34f, 0.0f, 0x1.9570e8p-116f, 0x1.d72876p-69f,
     0x1.86dc2cp-31f, 0x1.35fe66p-11f, 0x1p0f, 0x1.15c488p-81f, 0x1.93fcbap-40f, 0.0f,
     0x1.9f9038p-80f, 0.0f, 0x1.93ad9ep-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e17eaep-114f, 0.0f, 0x1.4efd52p-93f, 0.0f, 0x1.d5e8aep-56f, 0x1.6c157ap-71f,
     0x1.bdc0fep-26f, 0x1.439e3ep-96f, 0x1.171cfap-42f, 0x1.86a1cap-53f,
     0x1.1f5c92p-69f, 0.0f, 0.0f, 0.0f, 0x1.e27e0ap-67f, 0x1.0a0362p-65f,
     0x1.763616p-28f, 0.0f, 0.0f, 0.0f, 0x1.15b95p-91f, 0.0f, 0x1.e36f6cp-50f, 0.0f,
     0.0f, 0x1.8ee832p-16f, 0.0f, 0.0f, 0x1.19f12cp-32f, 0.0f, 0.0f, 0x1.294cb4p-9f,
     0x1.cf405cp-21f, 0x1.6af2e4p-55f, 0.0f, 0.0f, 0x1.73d3aep-104f, 0x1.1a3e3p-26f,
     0.0f, 0x1.a4c9eep-68f, 0.0f, 0.0f, 0x1.0557aap-94f, 0.0f, 0x1.b3f7fep-46f, 0.0f,
     0x1.d1e80cp-11f, 0.0f, 0.0f, 0x1.e94ffap-76f, 0.0f, 0.0f, 0x1.3c0e6p-28f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.37fc34p-125f, 0.0f, 0x1.40dcb4p-4f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.8010b6p-40f, 0.0f, 0x1.e8412cp-8f, 0x1.f4cdb6p-110f,
     0.0f, 0x1.a25222p-86f, 0x1.00182ep-47f, 0.0f, 0.0f, 0.0f, 0x1.55e89ep-51f, 0.0f,
     0.0f, 0x1.ed07bap-87f, 0x1.2bdb9p-62f, 0x1.6d6502p-51f, 0x1.c32658p-19f, 0.0f,
     0.0f, 0x1.b6c08ap-84f, 0x1.46a34ap-34f, 0.0f, 0.0f, 0x1.036688p-111f, 0.0f,
     0x1.84cf52p-39f, 0x1.0155e4p-9f, 0x1.4ade9ep-84f, 0.0f, 0.0f, 0x1.be79p-48f,
     0x1.5f23aap-20f, 0x1.78f6ep-29f, 0x1.f8cd4ep-59f, 0x1.e8d132p-93f, 0.0f,
     0x1.507bap-112f, 0x1.5b44c6p-94f, 0x1.06e854p-117f, 0x1.8fc98cp-105f,
     0x1.31ae7cp-99f, 0x1.f3d92ep-89f, 0.0f, 0x1.6f8f7cp-79f, 0.0f, 0.0f,
     0x1.f0f45ap-85f, 0x1.db0acap-8f, 0x1.cc53f6p-31f, 0.0f, 0x1.d467aep-117f,
     0x1.1e83dep-110f, 0x1.d9cc3ap-111f, 0x1.cb8db4p-76f, 0.0f, 0.0f, 0x1.3ae036p-68f,
     0.0f, 0x1.a59e86p-103f, 0x1.404fa2p-37f, 0.0f, 0.0f, 0.0f, 0x1p0f,
     0x1.bd48acp-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bab3eep-13f, 0.0f,
     0x1.268d54p-73f, 0x1.55ebdp-6f, 0.0f, 0x1.6281c2p-3f, 0x1.52f2c8p-6f, 0.0f,
     0x1.dd4c74p-66f, 0x1.d102fap-126f, 0x1.8e238cp-19f, 0x1.f495d6p-20f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.5595acp-32f, 0.0f, 0x1.21e134p-112f, 0x1.b6a1cp-20f,
     0x1.4051dp-66f, 0x1.dff40cp-16f, 0x1.13b948p-36f, 0.0f, 0x1.23d2dap-48f,
     0x1.c5e07ap-123f, 0.0f, 0x1.657934p-93f, 0x1.401f14p-28f, 0.0f, 0x1.eb3ee4p-102f,
     0x1.dcf05p-46f, 0x1.d473dcp-69f, 0x1.2c2688p-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.7e785ep-118f, 0x1.3fcd22p-52f, 0x1.34ea34p-87f, 0x1.0335c6p-64f,
     0.0f, 0.0f, 0x1.c3b9eep-77f, 0.0f, 0x1.b8d7f4p-10f, 0x1.ccd268p-48f, 0.0f,
     0x1.25e0dp-65f, 0x1.03bb3ap-27f, 0.0f, 0x1.fcc64p-33f, 0x1.837c66p-12f, 0.0f,
     0x1.217b22p-54f, 0x1.ba6276p-123f, 0.0f, 0x1.f88fb4p-9f, 0.0f, 0x1.b8d66cp-23f,
     0x1.8f2a9cp-114f, 0.0f, 0.0f, 0x1.d34d94p-18f, 0.0f, 0x1.a2b35cp-47f,
     0x1.e10c48p-14f, 0x1.08325cp-124f, 0x1.ff06e6p-47f, 0.0f, 0.0f, 0x1.80d24ap-116f,
     0x1.fc042ap-111f, 0x1.ed11d8p-91f, 0x1.b9fe3ap-61f, 0.0f, 0.0f, 0x1.89cb8cp-38f,
     0x1.5dc528p-87f, 0.0f, 0.0f, 0x1.0d7f3p-69f, 0.0f, 0x1.39e654p-37f, 0.0f,
     0x1.9d5866p-105f, 0x1.89053p-35f, 0x1.f57684p-87f, 0x1.d2c4f2p-87f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.fce726p-12f, 0x1.f25648p-119f, 0.0f, 0.0f, 0x1.460f64p-56f,
     0x1.ae4b48p-116f, 0x1.a6c42ep-82f, 0x1.ad9864p-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a0863ep-25f, 0x1.80e9d2p-44f, 0x1.4c4bdep-66f, 0.0f, 0.0f, 0.0f,
     0x1.0b67cep-69f, 0x1.5b3cecp-53f, 0x1.b7f0a2p-76f, 0.0f, 0x1.b373f6p-51f, 0.0f,
     0x1.7199dcp-58f, 0.0f, 0.0f, 0x1.478f7ep-100f, 0.0f, 0x1.9cf74ep-14f, 0.0f, 0.0f,
     0x1.900d52p-48f, 0.0f, 0.0f, 0x1.5307e2p-31f, 0.0f, 0.0f, 0x1.bbff66p-22f,
     0x1.244eb8p-78f, 0x1.cc954ap-78f, 0.0f, 0.0f, 0x1.290a44p-17f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.38bc62p-57f, 0x1.e208d4p-15f, 0.0f, 0x1.e3abf2p-109f, 0.0f, 0.0f,
     0x1.6d52aep-99f, 0.0f, 0.0f, 0x1.f82b6cp-33f, 0.0f, 0.0f, 0x1.deb676p-103f, 0.0f,
     0x1.090ad2p-16f, 0.0f, 0.0f, 0x1.f0e4c4p-63f, 0x1.9149a2p-73f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.5624eep-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eff272p-56f,
     0x1.c8b826p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e9573ep-116f, 0.0f,
     0x1.7c414ep-28f, 0.0f, 0.0f, 0x1.30ff96p-121f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4d695ep-86f, 0.0f, 0x1.f4f5b4p-85f, 0.0f, 0.0f, 0x1.d22edcp-93f,
     0x1.4210bep-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b1a0a6p-5f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.09edc6p-61f, 0x1.dd3a36p-69f, 0.0f, 0x1.01b2acp-22f, 0.0f, 0x1.78d346p-70f,
     0.0f, 0x1.9a17d4p-87f, 0x1.a37fp-15f, 0x1p0f, 0x1.822d6cp-118f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7fa914p-45f, 0x1.83bd16p-25f, 0.0f, 0.0f,
     0x1.a6d9c2p-43f, 0x1.a9bdfcp-96f, 0.0f, 0x1.f14468p-8f, 0x1.05ef62p-49f, 0.0f,
     0x1.f6161ep-105f, 0x1.5c2ee6p-121f, 0x1.9e35ep-101f, 0x1.a979dp-115f, 0.0f,
     0x1.f4af06p-29f, 0x1.62b91ep-53f, 0x1.f455acp-67f, 0x1.c25238p-126f, 0.0f,
     0x1.c7a598p-68f, 0.0f, 0x1.e3ba52p-13f, 0.0f, 0.0f, 0x1.fa6362p-106f,
     0x1.6b23c8p-1f, 0.0f, 0.0f, 0x1.7f921p-113f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7d686ap-108f, 0x1.35e35cp-105f, 0x1.d5f948p-64f, 0.0f, 0x1.d62488p-38f, 0.0f,
     0.0f, 0.0f, 0x1.7c885cp-63f, 0.0f, 0x1.1c8d06p-14f, 0.0f, 0.0f, 0x1.b47cecp-46f,
     0.0f, 0x1.31758ep-121f, 0x1.2085ccp-74f, 0.0f, 0.0f, 0x1.3cb598p-118f, 0.0f,
     0x1.1b079ap-37f, 0x1.5b1c42p-95f, 0x1.aef744p-17f, 0.0f, 0.0f, 0.0f,
     0x1.b44592p-97f, 0x1.726d48p-27f, 0.0f, 0.0f, 0.0f, 0x1.eb4b3cp-14f,
     0x1.86d0c6p-8f, 0.0f, 0x1.65ba2ep-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ada35p-82f, 0x1.095b48p-36f, 0.0f, 0x1.50ea9p-25f, 0x1.aa3116p-98f,
     0x1.a0ee8cp-68f, 0.0f, 0.0f, 0x1.8d709ep-77f, 0x1.0583cap-33f, 0x1.e7d5ecp-37f,
     0.0f, 0x1.b4ff32p-89f, 0x1.ef6aa6p-113f, 0.0f, 0x1.c98e32p-48f, 0.0f,
     0x1.102382p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.790da8p-43f, 0.0f,
     0x1.a772cep-18f, 0x1.f5b654p-83f, 0x1.b5a9fep-37f, 0x1.61de9ap-60f,
     0x1.64b0c4p-125f, 0x1.7e96d6p-107f, 0x1.a971e4p-41f, 0x1.91323p-24f,
     0x1.1bcc08p-6f, 0.0f, 0.0f, 0x1.389df6p-78f, 0.0f, 0x1.af2718p-105f,
     0x1.e64eecp-110f, 0x1.3ee63cp-39f, 0x1.1545a6p-34f, 0x1.1eb06ap-94f, 0.0f,
     0x1.30ad1p-20f, 0x1.d7c37p-60f, 0.0f, 0.0f, 0.0f, 0x1.e1275ap-46f, 0.0f, 0.0f,
     0.0f, 0x1.4ec76ap-53f, 0.0f, 0x1.4e8e9cp-28f, 0.0f, 0.0f, 0x1.333acp-116f,
     0x1.177d1ap-122f, 0x1.c57ec8p-94f, 0x1.6aacdp-47f, 0.0f, 0.0f, 0x1.ad69bep-96f,
     0.0f, 0x1.f4ce06p-115f, 0.0f, 0.0f, 0x1.0956a6p-48f, 0.0f, 0x1.ce07dep-23f,
     0x1.085ab4p-91f
};
static const float external_bench_wrapper_input_table_arg1[1004]  = {
     0.0f, 0.0f, 0x1.96a344p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a57bfap-26f, 0.0f, 0x1.2417dp-87f, 0.0f, 0.0f, 0x1.e99a02p-34f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.30efa6p-101f, 0.0f,
     0x1.95ed8cp-78f, 0.0f, 0x1.78967ep-98f, 0x1.d3eeb2p-31f, 0x1.f1809ep-4f,
     0x1.1a5f34p-68f, 0.0f, 0x1.6d4e38p-70f, 0x1.76eep-14f, 0.0f, 0.0f,
     0x1.7b0d38p-97f, 0x1.1ace76p-57f, 0.0f, 0.0f, 0x1.ccdb48p-117f, 0x1.135bdep-101f,
     0.0f, 0x1.c02bb8p-3f, 0x1.b423c6p-21f, 0x1.f21682p-76f, 0x1.67b86cp-29f,
     0x1.f04032p-101f, 0x1.5e1cb4p-4f, 0.0f, 0x1.36b262p-24f, 0x1.7b5b9ep-33f, 0.0f,
     0x1.46e5a8p-110f, 0x1.f92ceep-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.72da56p-84f,
     0.0f, 0.0f, 0.0f, 0x1.6074ep-37f, 0x1.63b8cp-37f, 0x1.9cbf26p-27f,
     0x1.612138p-17f, 0x1.65f518p-125f, 0.0f, 0.0f, 0x1.c92218p-19f, 0x1.c918c8p-32f,
     0.0f, 0x1.af864cp-32f, 0.0f, 0x1.5cfcap-115f, 0.0f, 0x1.a22106p-41f, 0.0f, 0.0f,
     0.0f, 0x1.ed8bdp-89f, 0.0f, 0x1.87de7ep-71f, 0x1.719ca4p-5f, 0x1.f638ecp-26f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.738814p-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f6bdd4p-99f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.0c8826p-112f, 0x1.a9b998p-120f, 0x1.26c0f6p-116f,
     0.0f, 0.0f, 0x1.16547p-11f, 0.0f, 0x1.6b6e94p-50f, 0x1p0f, 0x1.0993p-55f,
     0x1.5734c4p-12f, 0x1.9d3d36p-63f, 0x1.943afap-59f, 0x1.8d65ap-36f, 0.0f,
     0x1.9a6d66p-111f, 0x1.cfd97cp-126f, 0.0f, 0x1.0eb93ep-32f, 0x1p0f, 0.0f,
     0x1.16cb92p-90f, 0.0f, 0.0f, 0x1.62059ep-115f, 0.0f, 0x1.781642p-68f,
     0x1.f13848p-18f, 0.0f, 0x1.27c4fap-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ac9c72p-90f, 0x1.bf79e4p-53f, 0.0f, 0.0f, 0x1.e75712p-126f, 0.0f, 0.0f, 0.0f,
     0x1.e6f7f4p-92f, 0.0f, 0.0f, 0.0f, 0x1.fb0c42p-93f, 0x1.40601cp-44f,
     0x1.6bfe52p-50f, 0.0f, 0x1.97c236p-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0c8dcap-71f,
     0x1.ab0c38p-17f, 0x1.d55e5p-30f, 0x1.42a104p-31f, 0.0f, 0.0f, 0x1.21f41cp-123f,
     0x1.e9ef3cp-108f, 0x1.bb4632p-124f, 0.0f, 0.0f, 0x1.6f7fa2p-77f,
     0x1.ca8fdep-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c7fef8p-100f, 0.0f,
     0x1.504798p-49f, 0.0f, 0x1.d28304p-25f, 0x1.5bbc3ep-125f, 0.0f, 0x1.c661e4p-70f,
     0x1.afb516p-25f, 0x1.db958ep-80f, 0.0f, 0x1.77d946p-106f, 0.0f, 0.0f,
     0x1.0008eap-52f, 0x1.ed48f2p-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0bf2fcp-29f, 0x1.b72492p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.8cabe2p-60f, 0.0f, 0.0f, 0x1.6a2d3p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d510d8p-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a986b4p-40f,
     0x1.a0910ep-75f, 0.0f, 0x1.d0cd6cp-19f, 0x1.7ae8bep-120f, 0x1.d99ceep-5f, 0.0f,
     0x1.3966d2p-64f, 0.0f, 0.0f, 0.0f, 0x1.a728ccp-101f, 0.0f, 0x1.f5e0b2p-55f,
     0x1.d5c14p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.55216ap-67f, 0.0f, 0x1p0f, 0.0f,
     0x1.01e2e2p-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e494aap-109f, 0.0f, 0.0f, 0x1.234e1ep-40f, 0x1.4befe6p-15f, 0x1.a1951p-50f,
     0x1.31a9ap-24f, 0.0f, 0x1.a1de3ep-98f, 0x1.30b034p-20f, 0x1.b2d5p-120f, 0.0f,
     0x1.7791bcp-36f, 0.0f, 0.0f, 0x1.b80c62p-103f, 0x1.9ac7eep-83f, 0.0f,
     0x1.d0fcdap-124f, 0.0f, 0x1.984904p-4f, 0.0f, 0.0f, 0.0f, 0x1.87546cp-42f, 0.0f,
     0.0f, 0.0f, 0x1.97be82p-104f, 0x1.a7bd96p-100f, 0.0f, 0x1.58b09p-14f,
     0x1.daacb2p-63f, 0.0f, 0.0f, 0.0f, 0x1.e6825ap-26f, 0x1.38c5cp-17f,
     0x1.7b9d42p-77f, 0.0f, 0x1.3706b2p-78f, 0x1.fa480ep-111f, 0.0f, 0.0f,
     0x1.5fb8a2p-5f, 0x1.440e8p-57f, 0.0f, 0.0f, 0.0f, 0x1.ea516p-42f, 0.0f,
     0x1.2ea0dp-87f, 0x1.ff1e54p-53f, 0x1.ee2b18p-95f, 0.0f, 0.0f, 0.0f,
     0x1.0d2fcp-81f, 0x1.bbc7ccp-26f, 0.0f, 0x1.7e884cp-10f, 0x1.278b38p-75f, 0.0f,
     0x1.e227a8p-32f, 0x1.be3db2p-105f, 0.0f, 0x1.c8e83ep-89f, 0x1.adaafap-13f,
     0x1.2d244ep-34f, 0.0f, 0x1.d6aa4cp-31f, 0x1.c87b68p-37f, 0.0f, 0.0f,
     0x1.91165p-30f, 0.0f, 0x1.2ecdf4p-63f, 0x1.0b75ecp-45f, 0x1.e2a33ap-87f, 0.0f,
     0x1.ce2372p-79f, 0x1.45671ap-70f, 0x1.bd1ebp-73f, 0x1.a5c08ep-23f, 0.0f, 0.0f,
     0x1.7241ep-92f, 0.0f, 0.0f, 0x1.b0798ep-19f, 0.0f, 0.0f, 0x1.fd8c7ap-75f,
     0x1.1d05eep-45f, 0.0f, 0.0f, 0x1.616662p-104f, 0x1.e9838ep-90f, 0x1.f30124p-103f,
     0x1.dd6408p-13f, 0x1.4d9fe8p-51f, 0.0f, 0x1.56ab1ep-5f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.901748p-9f, 0.0f, 0.0f, 0.0f, 0x1.a097c6p-55f, 0.0f, 0x1.5ec412p-6f,
     0x1.0d3c7cp-76f, 0x1.8cb17ep-83f, 0x1.fe9e0ep-61f, 0.0f, 0.0f, 0.0f,
     0x1.18c2a2p-95f, 0.0f, 0x1.252ea2p-92f, 0x1.1fc592p-100f, 0.0f, 0x1.77440cp-23f,
     0x1.71bd1cp-104f, 0.0f, 0.0f, 0x1.39cbe8p-122f, 0.0f, 0x1.eb5f26p-98f, 0.0f,
     0x1.8c8142p-88f, 0x1.fee5fp-77f, 0x1.542816p-35f, 0.0f, 0.0f, 0.0f,
     0x1.18f486p-75f, 0.0f, 0x1.4bd694p-55f, 0.0f, 0x1.bfc03ap-78f, 0x1.ea51p-10f,
     0x1.782a52p-87f, 0x1.6a6148p-117f, 0x1.addeb8p-98f, 0x1.bc5b06p-30f, 0.0f, 0.0f,
     0x1.aa7854p-41f, 0.0f, 0x1.9beeb2p-69f, 0.0f, 0.0f, 0x1.8e8274p-94f,
     0x1.9c62f4p-92f, 0x1.4182b2p-19f, 0x1.6de696p-50f, 0x1.fe2486p-39f,
     0x1.bc5c8cp-114f, 0x1.3bcc6p-125f, 0x1.7b6d36p-52f, 0x1.100bdap-6f, 0.0f,
     0x1.dcc212p-21f, 0x1.532b56p-30f, 0.0f, 0.0f, 0.0f, 0x1.2022cp-95f,
     0x1.b3b918p-7f, 0x1.a9256cp-37f, 0.0f, 0x1.e70448p-70f, 0.0f, 0.0f, 0.0f,
     0x1.f871ep-9f, 0x1.34f884p-54f, 0x1.888ae4p-86f, 0x1.6110dp-121f, 0x1.78ab2p-96f,
     0x1.cf9f82p-12f, 0.0f, 0x1.3ab6p-110f, 0.0f, 0x1.efed72p-36f, 0.0f,
     0x1.568652p-33f, 0x1.f5275cp-80f, 0x1.eb82c2p-75f, 0x1.25a32p-31f,
     0x1.3f9152p-9f, 0.0f, 0.0f, 0x1.4b8094p-72f, 0x1.22c82cp-67f, 0.0f,
     0x1.8ae8cap-104f, 0.0f, 0x1.ef885p-73f, 0x1p0f, 0x1.a373a8p-80f, 0x1.6c6ce8p-66f,
     0x1.ceba6ep-40f, 0.0f, 0x1.84e1fcp-71f, 0.0f, 0x1.7935d4p-77f, 0.0f,
     0x1.2e9c2ep-64f, 0x1.0e3878p-4f, 0x1.8a266cp-99f, 0.0f, 0x1.4338dap-33f, 0.0f,
     0x1.79227p-123f, 0.0f, 0x1.de5f72p-123f, 0.0f, 0x1.07c478p-78f, 0.0f,
     0x1.ea867ap-99f, 0.0f, 0x1.d6ba66p-114f, 0.0f, 0.0f, 0x1.70c7bap-34f, 0.0f, 0.0f,
     0x1.8e133ap-66f, 0.0f, 0x1.5e2e96p-38f, 0x1.49bc6ap-39f, 0x1.0c561ap-44f, 0.0f,
     0x1.700d68p-5f, 0x1.1b79d8p-112f, 0x1.334bdcp-61f, 0x1.827508p-88f, 0.0f,
     0x1.863bep-23f, 0.0f, 0x1.2a1ed4p-63f, 0x1.1049e8p-100f, 0.0f, 0.0f,
     0x1.39313ep-9f, 0.0f, 0x1.ef4652p-58f, 0.0f, 0.0f, 0.0f, 0x1.9b1744p-104f,
     0x1.9e8c4ap-19f, 0.0f, 0x1.46f554p-98f, 0x1.27f53p-3f, 0.0f, 0x1.0b6aa8p-27f,
     0x1.1e7bfp-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ea82b2p-118f,
     0.0f, 0.0f, 0.0f, 0x1.8cb3acp-16f, 0x1.ae8042p-64f, 0x1.fdb212p-39f, 0.0f,
     0x1.cb8df6p-51f, 0.0f, 0x1.d7f5ccp-36f, 0x1.e30c8ap-41f, 0x1.5b6d2p-62f, 0.0f,
     0x1.cedf34p-47f, 0x1.f59c94p-121f, 0x1.e3ca24p-111f, 0.0f, 0.0f,
     0x1.aac0bep-103f, 0.0f, 0.0f, 0x1.3580ep-45f, 0x1.827bdap-116f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.776b76p-86f, 0x1.e668ap-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2ea814p-83f,
     0.0f, 0x1.790386p-75f, 0.0f, 0x1.0fc506p-103f, 0.0f, 0x1.ebc2c8p-91f,
     0x1.50a2fp-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b9561cp-73f,
     0x1.9adf56p-11f, 0.0f, 0.0f, 0x1.96d9fep-14f, 0.0f, 0x1.6af19cp-27f, 0.0f,
     0x1.d333d4p-23f, 0x1.5c3ad2p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e31b32p-77f, 0.0f,
     0x1.34d674p-92f, 0.0f, 0x1.bc1cfap-88f, 0.0f, 0x1.a187ap-40f, 0x1.3835ep-97f,
     0.0f, 0.0f, 0x1.fddeb8p-78f, 0.0f, 0x1.20b94ap-86f, 0x1.470a6p-116f,
     0x1.1577fcp-125f, 0x1.b3d67ep-32f, 0x1.d0e2fap-109f, 0.0f, 0x1.172b5cp-102f,
     0.0f, 0.0f, 0x1.bd5398p-28f, 0.0f, 0.0f, 0x1.5abf08p-126f, 0.0f, 0x1.f8c738p-26f,
     0.0f, 0x1.96c4ecp-71f, 0x1.c26c9ap-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.45ac62p-112f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1bfb62p-124f, 0x1.d0e2dap-59f, 0.0f,
     0x1.ab825cp-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.90fbdp-42f, 0x1.525c12p-73f,
     0.0f, 0x1.4a5556p-52f, 0x1.624188p-97f, 0x1.d0a982p-12f, 0x1.c4f458p-14f, 0.0f,
     0.0f, 0x1.2844b6p-11f, 0x1.4a49ap-81f, 0x1.fa7e5ep-116f, 0x1.8cb01cp-93f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.efcbacp-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.5e48fcp-7f, 0.0f, 0x1.ef37aap-96f, 0x1.f866eap-83f, 0.0f,
     0x1.d3b1ap-34f, 0x1.bb15a2p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f0b43cp-62f, 0.0f,
     0.0f, 0.0f, 0x1.0da68cp-41f, 0.0f, 0.0f, 0x1.61d30ap-63f, 0.0f, 0x1.e61a8ap-39f,
     0.0f, 0.0f, 0x1.c45f3ep-113f, 0.0f, 0.0f, 0x1.09c64ap-116f, 0x1.b8f166p-124f,
     0.0f, 0x1.3b21dcp-56f, 0x1.6481fp-64f, 0.0f, 0x1.84fbacp-80f, 0x1.1f0b1cp-28f,
     0x1.3c329ap-11f, 0x1.8d843p-101f, 0x1.d685eep-108f, 0x1.e14e32p-65f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.5ee34ep-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fbafb8p-9f,
     0x1.b08e1p-110f, 0x1.2fe18ep-20f, 0x1.23cdd6p-52f, 0.0f, 0.0f, 0x1.0d1854p-126f,
     0x1.cfa086p-9f, 0x1.1516dp-17f, 0.0f, 0.0f, 0x1.b8e8dap-87f, 0x1.3e322cp-62f,
     0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.65032ep-67f,
     0.0f, 0.0f, 0x1.df1742p-8f, 0.0f, 0.0f, 0x1.15a31ep-72f, 0.0f, 0.0f,
     0x1.d2634ap-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.078ff8p-11f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1eebe8p-42f, 0x1.f0e2c4p-26f, 0.0f, 0x1.40457p-71f,
     0x1.e8b0e6p-96f, 0x1.884144p-96f, 0x1.1b5ffap-74f, 0x1.db9b5ep-6f,
     0x1.13284ap-113f, 0x1.0385acp-67f, 0.0f, 0x1.95cc2ap-97f, 0.0f, 0.0f,
     0x1.b2a69cp-5f, 0x1.cf7d68p-94f, 0.0f, 0x1.2b1f74p-59f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.39602ep-81f, 0x1.6e5c72p-40f, 0x1.7eeefap-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.292032p-45f, 0x1.79823ap-7f, 0.0f, 0x1.05d1b6p-30f, 0.0f,
     0x1.82c344p-60f, 0x1.5fc71ep-27f, 0.0f, 0.0f, 0.0f, 0x1.d5c38ep-72f, 0.0f,
     0x1.acac94p-101f, 0.0f, 0x1.188c5ap-53f, 0.0f, 0x1.e22cdep-43f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.2e909cp-95f, 0.0f, 0x1.ab8cb6p-58f, 0x1.c196dp-51f,
     0x1.df381cp-60f, 0x1.d544acp-16f, 0.0f, 0.0f, 0x1.e8771cp-30f, 0.0f, 0.0f, 0.0f,
     0x1.510e5p-76f, 0.0f, 0.0f, 0.0f, 0x1.299a82p-15f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a24114p-98f, 0x1.a89cbep-67f, 0.0f, 0.0f, 0x1.d9612ap-111f, 0.0f,
     0x1.0ca6e6p-44f, 0.0f, 0x1.719888p-68f, 0x1.b14548p-87f, 0.0f, 0x1.f22588p-52f,
     0.0f, 0x1.a34b56p-7f, 0x1.7f2dd8p-48f, 0.0f, 0x1.627eap-34f, 0x1.550adap-14f,
     0.0f, 0x1.31995cp-59f, 0x1.98737p-34f, 0x1.4e1082p-75f, 0x1.98c9fep-32f, 0.0f,
     0.0f, 0x1.37cd8ep-22f, 0.0f, 0.0f, 0x1.adaa44p-90f, 0.0f, 0x1.6508eap-108f, 0.0f,
     0.0f, 0.0f, 0x1.c88ef6p-77f, 0x1.9cf16cp-105f, 0x1.f3cafap-76f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.93564cp-97f, 0x1.a082aap-119f, 0.0f, 0.0f,
     0x1.5126fep-97f, 0x1.c339a6p-80f, 0.0f, 0x1.2b21e8p-107f, 0x1.0d523cp-38f,
     0x1.59ac1ep-9f, 0x1.17f7aep-13f, 0.0f, 0x1.3ceb78p-110f, 0x1p0f, 0x1.955a42p-9f,
     0.0f, 0x1.7a4392p-27f, 0.0f, 0x1.eb1b54p-94f, 0.0f, 0x1.393906p-105f,
     0x1.a7f92p-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bb999ap-78f, 0x1.e36798p-31f, 0.0f,
     0.0f, 0x1.cc5cf6p-49f, 0.0f, 0x1.4199d4p-5f, 0.0f, 0x1.675a4cp-24f, 0.0f,
     0x1.b53368p-57f, 0x1.ade812p-26f, 0.0f, 0.0f, 0.0f, 0x1.00228ap-35f,
     0x1.1433a6p-41f, 0x1.93faap-32f, 0x1.c3e70ap-62f, 0x1.9d4a2cp-46f,
     0x1.1264bp-120f, 0x1.04aaf4p-42f, 0x1.eb859p-42f, 0.0f, 0.0f, 0.0f,
     0x1.8673aep-29f, 0.0f, 0.0f, 0x1.27768cp-77f, 0x1.15eb6p-121f, 0.0f, 0.0f,
     0x1.f3c17ep-76f, 0.0f, 0x1.1d034cp-57f, 0x1.b11ff6p-108f, 0x1.69364cp-62f,
     0x1.400ap-22f, 0.0f, 0x1.92020ep-51f, 0x1.e184f2p-50f, 0x1.770948p-11f,
     0x1.9747fp-45f, 0x1.e7e2c2p-48f, 0x1.a582a4p-51f, 0.0f, 0x1.8c6eaep-7f, 0.0f,
     0x1.76113ep-67f, 0.0f, 0.0f, 0.0f, 0x1.830eep-49f, 0.0f, 0x1.c705d6p-46f,
     0x1.83d77ap-95f, 0.0f, 0.0f, 0x1.612d52p-106f, 0x1.20fe86p-77f, 0.0f, 0.0f,
     0x1.eb72b8p-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f296a2p-21f, 0x1.043f0ep-25f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e7559ep-117f, 0x1p0f, 0.0f, 0x1.3eeee4p-76f, 0.0f,
     0.0f, 0.0f, 0x1.9dcfdcp-51f, 0x1.50af2p-119f, 0.0f, 0x1.9856cap-85f, 0.0f, 0.0f,
     0x1.53633ep-32f, 0x1.54b9dep-82f, 0.0f, 0.0f, 0.0f, 0x1.68b502p-38f,
     0x1.d5be2ap-2f, 0.0f, 0.0f, 0.0f, 0x1.7d39e6p-97f
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
            ml_float4_t tmp3;
            int32_t tmp4;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            memcpy(&tmp1, ((ml_float4_t*)(external_bench_wrapper_input_table_arg1+ i)), 16);
            tmp2 = Sleef_finz_fastpowf4_u3500kvx(tmp0, tmp1);
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
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_finz_fastpowf4_u3500kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_fastpowf4_u3500kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
