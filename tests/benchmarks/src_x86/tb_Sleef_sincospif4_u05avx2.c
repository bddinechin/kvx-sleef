/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_sincospif4_u05avx2128.c --function Sleef_sincospif4_u05avx2128 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 4 --function-input-vector-size 4 --precision sleef_sf2 \
 *     --bench --no-embedded-bin --target x86_avx2128
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <string.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef___m128_2 external_bench_wrapper_cst = {.x = {0.0f, 0.0f, 0.0f, 0.0f},.y = {0.0f, 0.0f, 0.0f, 0.0f}};
static const Sleef___m128_2 external_bench_wrapper_cst1 = {.x = {0.0f, 0.0f, 0.0f, 0.0f},.y = {0.0f, 0.0f, 0.0f, 0.0f}};
volatile Sleef___m128_2 external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0x1.dc59f6p-82f, 0.0f, 0.0f, 0x1.21164p-93f, 0x1.a65a14p-28f, 0x1.34b94ep-9f,
     0.0f, 0.0f, 0x1.bd034p-72f, 0x1.17995cp-7f, 0x1.92f1eep-75f, 0x1.39759ap-84f,
     0.0f, 0x1.16fed4p-16f, 0.0f, 0x1.e45c5ep-57f, 0x1.261948p-74f, 0.0f, 0.0f, 0.0f,
     0x1.568d6p-5f, 0x1.da8e58p-36f, 0.0f, 0.0f, 0x1.49c8fp-74f, 0.0f, 0.0f,
     0x1.eac38cp-107f, 0.0f, 0.0f, 0.0f, 0x1.ba2166p-88f, 0x1.35e58p-80f,
     0x1.8737a6p-40f, 0x1.43ac44p-49f, 0x1.d0cfep-104f, 0.0f, 0x1.916d18p-4f,
     0x1.74fd46p-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9541b4p-118f, 0x1.d5ed1cp-41f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fd8cdep-68f, 0.0f, 0x1.4e9cd8p-64f, 0.0f, 0.0f,
     0x1.c54558p-14f, 0x1.b44c7cp-98f, 0.0f, 0x1.a0f8f8p-7f, 0x1.2c9b06p-47f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a4adbap-113f, 0x1.a1f28ap-66f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.508afap-28f, 0.0f, 0x1.e43cdp-120f, 0x1.4d5aap-59f, 0x1.f35f1cp-99f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.632b1p-28f, 0x1.102ffep-53f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.7b2df6p-27f, 0.0f, 0x1.992892p-6f, 0.0f, 0.0f,
     0x1.83b5fap-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5d6f84p-34f, 0x1.a9e578p-37f,
     0.0f, 0.0f, 0.0f, 0x1.cbb198p-77f, 0x1.7372bap-65f, 0x1.7bc7d6p-82f,
     0x1.738e06p-49f, 0x1.eb2cp-111f, 0.0f, 0x1.6407c6p-114f, 0x1.b9174cp-2f,
     0x1.8f81ap-101f, 0x1.10c9ap-41f, 0x1.f12f6ep-61f, 0x1.7a70b4p-44f, 0.0f,
     0x1.5373eep-94f, 0.0f, 0x1.da1d08p-72f, 0x1.49dfb8p-117f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0303f6p-71f, 0x1.a9f24ap-104f, 0x1.f49d6cp-2f, 0.0f, 0x1.6c0b3cp-61f, 0.0f,
     0.0f, 0x1.49e14ap-36f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2fa548p-32f, 0.0f, 0x1.1e4a4ep-93f, 0x1.d42a9ep-88f, 0x1.b9054ap-106f, 0.0f,
     0x1.1d1a74p-72f, 0x1.7defc6p-28f, 0x1.45ed84p-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.75f5d6p-53f, 0x1.7b164ep-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fa6f2ep-35f, 0.0f,
     0x1.ce364ap-101f, 0.0f, 0x1.7d0f5ep-79f, 0.0f, 0x1.f3b926p-53f, 0x1.8e61p-44f,
     0x1.428b7p-14f, 0.0f, 0x1.aecd6cp-62f, 0x1.b20da2p-22f, 0.0f, 0x1.0e650ap-122f,
     0.0f, 0x1.8d4b86p-83f, 0.0f, 0.0f, 0x1.68503ep-120f, 0.0f, 0x1.da3a3p-63f, 0.0f,
     0x1.2c006cp-69f, 0x1.bf92e8p-75f, 0.0f, 0x1.45bd3ep-124f, 0x1.2040bep-53f,
     0x1.aded5ap-46f, 0x1.f802ccp-13f, 0.0f, 0.0f, 0x1.44c4f6p-3f, 0x1.d92aeap-30f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b9f5ccp-92f, 0x1.074632p-39f, 0.0f, 0x1.22856cp-96f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d8e19cp-61f, 0.0f, 0x1.74937cp-118f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a35a72p-61f, 0.0f, 0.0f, 0x1.547958p-121f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.bbd9p-58f, 0.0f, 0x1.c2872p-107f, 0x1.9dbcd6p-66f, 0.0f,
     0x1.6f183ep-119f, 0.0f, 0x1.cff14p-68f, 0x1.64b64ap-98f, 0x1.bcfb8ap-125f, 0.0f,
     0x1.ee773p-79f, 0.0f, 0.0f, 0x1.23e05ap-51f, 0x1.3ffe5cp-125f, 0x1.97dd9ep-56f,
     0x1.bebba2p-46f, 0x1.32e082p-2f, 0.0f, 0.0f, 0x1.f9339p-77f, 0x1.ce5ca6p-6f,
     0.0f, 0x1.eeb8d4p-126f, 0x1.7beefap-84f, 0x1.8a591ap-101f, 0x1.374ec2p-1f,
     0x1.2b9f58p-29f, 0.0f, 0x1.d2c332p-58f, 0.0f, 0.0f, 0.0f, 0x1.e13878p-63f,
     0x1.e3f2a6p-122f, 0x1.71102ap-81f, 0x1.1af17cp-30f, 0x1.760e8ap-38f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.78b1bp-74f, 0x1.92d95p-13f, 0x1.9647fep-107f, 0.0f,
     0x1.050416p-29f, 0x1.397372p-12f, 0.0f, 0x1.523a04p-93f, 0.0f, 0x1.a17fb4p-119f,
     0.0f, 0x1.388902p-101f, 0x1p0f, 0x1.e295f6p-45f, 0x1.f3793ap-7f, 0.0f,
     0x1.a97bf8p-26f, 0.0f, 0x1.23a92ep-83f, 0.0f, 0x1.061564p-67f, 0x1.5aa3dp-19f,
     0x1.43bf5ap-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2b32aep-9f, 0x1.9a9ea2p-102f,
     0x1.ad9c12p-27f, 0x1.675afep-11f, 0.0f, 0x1.97fdfep-15f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7ce19ep-68f, 0x1.d9d372p-65f, 0x1.a43532p-41f, 0x1.9a63b8p-41f, 0.0f,
     0x1.a234ap-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ee3e4cp-73f,
     0x1.f2631p-16f, 0x1.275a14p-82f, 0.0f, 0x1.8e890cp-63f, 0.0f, 0x1.c5e5bp-12f,
     0.0f, 0.0f, 0x1.2fdc8ap-56f, 0.0f, 0.0f, 0.0f, 0x1.06a808p-30f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ba660ap-114f, 0x1.40590cp-22f, 0x1.0f8d2ap-17f,
     0x1.5047e4p-47f, 0x1.c6112cp-17f, 0x1.c4ed08p-27f, 0.0f, 0x1.a0431p-79f,
     0x1.ad779cp-97f, 0x1.72a6dp-32f, 0.0f, 0x1.bc5518p-11f, 0.0f, 0x1.da00aep-62f,
     0x1.83b1b6p-125f, 0x1.3b324ep-27f, 0x1.30fabp-24f, 0x1.27d6b8p-1f, 0.0f,
     0x1.e166e4p-94f, 0.0f, 0x1.1cdaa2p-124f, 0.0f, 0x1.2f82f8p-76f, 0x1.1503f8p-104f,
     0x1.6baa4p-63f, 0x1.cb0caap-103f, 0.0f, 0.0f, 0.0f, 0x1.9ed28p-113f, 0.0f,
     0x1.04d6c4p-75f, 0.0f, 0x1.3d20b2p-99f, 0.0f, 0x1.219d0ap-39f, 0.0f, 0.0f, 0.0f,
     0x1.e984a2p-116f, 0x1.509668p-44f, 0.0f, 0x1.350cecp-18f, 0x1.2f18bep-107f,
     0x1.5708bcp-12f, 0.0f, 0x1.71b438p-10f, 0x1.5f0c4cp-3f, 0.0f, 0x1.8420a4p-74f,
     0x1.d510fap-89f, 0x1.a78112p-47f, 0x1.50c63ap-20f, 0x1.8f69cep-56f, 0.0f,
     0x1.6bcffcp-27f, 0x1.9e2e1cp-83f, 0x1.c9ba1ap-3f, 0x1.47a086p-91f, 0.0f, 0.0f,
     0x1.4fc5e2p-15f, 0.0f, 0.0f, 0.0f, 0x1.4425aep-117f, 0x1.0a7e86p-54f,
     0x1.5c590ep-32f, 0x1.30e2f8p-26f, 0x1.4602b6p-82f, 0.0f, 0x1.ec4388p-12f, 0.0f,
     0x1.0381d2p-23f, 0x1.a7aecp-36f, 0x1.9e05dcp-71f, 0x1.fe6808p-33f,
     0x1.168666p-42f, 0x1.102544p-25f, 0x1.55a60cp-95f, 0x1.befep-104f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.08406cp-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4e566ap-48f, 0.0f,
     0x1.4efcdap-59f, 0x1.51b546p-76f, 0x1.0549a2p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9d1f06p-62f, 0.0f, 0x1.50097cp-5f, 0x1.91fc6ep-54f, 0.0f, 0x1.dd7a3ep-13f,
     0x1.db91ep-74f, 0x1.c17d58p-103f, 0.0f, 0x1.48ea38p-82f, 0x1.4b97cap-7f, 0.0f,
     0x1.ccdef6p-31f, 0x1.262682p-2f, 0.0f, 0.0f, 0.0f, 0x1.f7e76ep-34f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b12302p-42f, 0.0f, 0x1.69ba7cp-62f, 0x1.8133f2p-76f,
     0x1.8d78aep-63f, 0.0f, 0.0f, 0x1.198574p-43f, 0x1.790bc4p-67f, 0x1.7bcdfep-22f,
     0x1.5d4292p-106f, 0x1.bef0bap-115f, 0.0f, 0.0f, 0.0f, 0x1.e1ee84p-59f, 0.0f,
     0x1.1d14ccp-104f, 0.0f, 0.0f, 0.0f, 0x1.c4f76ap-10f, 0x1.119eeap-92f, 0.0f,
     0x1.c6cce8p-85f, 0.0f, 0.0f, 0x1.a45ce4p-6f, 0.0f, 0.0f, 0x1.d772a6p-51f, 0.0f,
     0x1.8d7986p-117f, 0.0f, 0x1.96c57cp-42f, 0x1.eb5b58p-29f, 0x1.812764p-125f,
     0x1.5b1d5cp-66f, 0.0f, 0.0f, 0x1.62eb8ep-13f, 0.0f, 0.0f, 0x1.01c1a6p-103f, 0.0f,
     0x1.4b621cp-73f, 0x1.232af2p-20f, 0x1.065742p-4f, 0.0f, 0.0f, 0x1.34915ep-98f,
     0.0f, 0.0f, 0.0f, 0x1.af9f52p-87f, 0x1.117ab8p-113f, 0x1.b40a84p-84f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.6c5b98p-85f, 0.0f, 0x1.680b9ep-27f, 0x1.cb804ap-111f, 0.0f,
     0x1.5cdd5p-101f, 0x1.0401f4p-58f, 0.0f, 0x1.f24d8p-122f, 0.0f, 0x1.2bc362p-84f,
     0.0f, 0x1.9af10ep-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.952f22p-95f,
     0x1.1e9048p-115f, 0.0f, 0x1.ab2ae8p-121f, 0x1.732b0cp-57f, 0.0f, 0x1.e9c7bp-32f,
     0x1.f6b6ep-100f, 0.0f, 0x1.ab37dap-111f, 0.0f, 0.0f, 0.0f, 0x1.a4aee6p-57f, 0.0f,
     0x1.945ec2p-111f, 0x1.b7722ap-17f, 0x1.9d9e12p-22f, 0x1.7cb452p-119f,
     0x1.0fd71p-37f, 0x1.181854p-58f, 0x1.0fe6f8p-76f, 0.0f, 0.0f, 0.0f,
     0x1.a7ebc6p-2f, 0x1.8b8008p-12f, 0.0f, 0.0f, 0x1.818042p-88f, 0.0f,
     0x1.835672p-48f, 0.0f, 0x1.20c1fep-49f, 0x1.abffdep-69f, 0.0f, 0x1.7278d4p-113f,
     0x1p0f, 0.0f, 0x1.4caa4cp-44f, 0x1.694438p-116f, 0x1.3a7a94p-68f,
     0x1.51dcfap-28f, 0x1.0acb7p-87f, 0x1.106ffcp-35f, 0.0f, 0.0f, 0.0f,
     0x1.c353bp-92f, 0x1.9b1ebp-119f, 0x1.4805d6p-34f, 0.0f, 0x1.b8d08cp-76f, 0.0f,
     0x1.ddaeb4p-41f, 0.0f, 0.0f, 0x1.e0ea94p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bf0dbcp-52f, 0x1.68d302p-117f, 0x1.0d852p-37f, 0.0f, 0x1.3a0478p-50f, 0.0f,
     0x1.1749b8p-80f, 0x1.e8f9fp-54f, 0x1.247644p-59f, 0x1.4f8d62p-113f,
     0x1.55ce1ap-41f, 0.0f, 0.0f, 0x1.70e522p-75f, 0.0f, 0x1.1d5c84p-113f,
     0x1.88a332p-56f, 0x1.ef7daap-114f, 0.0f, 0.0f, 0.0f, 0x1.85c9ep-1f, 0.0f,
     0x1.a476f2p-75f, 0x1.470f58p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5d505p-98f,
     0x1.1ca71cp-62f, 0x1.5892e8p-52f, 0.0f, 0.0f, 0x1.984194p-25f, 0.0f, 0.0f,
     0x1.2a1784p-13f, 0x1.69037ep-119f, 0.0f, 0x1.278944p-50f, 0x1.402c0ep-17f,
     0x1.cb70dap-39f, 0.0f, 0x1.88e58ap-10f, 0.0f, 0x1.3acep-90f, 0x1.791976p-90f,
     0x1.871e26p-33f, 0.0f, 0x1.0fa8fep-53f, 0x1.2fecccp-30f, 0.0f, 0x1.907402p-117f,
     0.0f, 0.0f, 0x1.4b049cp-67f, 0x1.b7dd34p-25f, 0.0f, 0.0f, 0.0f, 0x1.0c436ap-2f,
     0x1.bde386p-70f, 0x1.28cb5ap-37f, 0.0f, 0.0f, 0x1.0f92a6p-113f, 0x1.325824p-50f,
     0.0f, 0x1.1433eep-23f, 0x1.cc0644p-8f, 0x1.a161dp-93f, 0.0f, 0x1.c7d5fap-52f,
     0x1.f12208p-115f, 0.0f, 0x1.a5ed12p-6f, 0x1.41334cp-22f, 0.0f, 0.0f,
     0x1.61468cp-67f, 0x1.0d80cep-24f, 0x1.4e2094p-2f, 0.0f, 0x1.7d8686p-18f,
     0x1.8879c8p-29f, 0.0f, 0.0f, 0x1.fc2dep-14f, 0x1.082564p-10f, 0x1.1fc706p-51f,
     0.0f, 0.0f, 0x1.7d0c0ep-53f, 0.0f, 0.0f, 0x1.43461cp-118f, 0.0f, 0x1.b0a904p-78f,
     0x1.9cf1f8p-60f, 0.0f, 0.0f, 0x1.ece478p-9f, 0.0f, 0x1.39a58p-34f,
     0x1.b4c63ap-61f, 0x1.b3befcp-102f, 0.0f, 0.0f, 0.0f, 0x1.c9a946p-2f,
     0x1.8c5812p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bad20ap-30f, 0x1.69512p-123f, 0.0f,
     0x1.6cc8fep-79f, 0.0f, 0.0f, 0x1.89348ep-94f, 0x1.4ebdc2p-51f, 0x1.971a18p-71f,
     0.0f, 0.0f, 0x1.f5b002p-34f, 0.0f, 0x1.ba1f7p-68f, 0x1.bb23acp-20f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.173aep-12f, 0x1.d57596p-107f, 0.0f, 0.0f, 0x1.650278p-44f, 0.0f,
     0.0f, 0.0f, 0x1.e2b11ep-48f, 0.0f, 0x1.a52d44p-119f, 0.0f, 0x1.871462p-51f,
     0x1.8b6af6p-81f, 0x1.5bf846p-15f, 0.0f, 0.0f, 0x1.dba484p-101f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f77faep-91f, 0.0f, 0x1.a783b8p-58f, 0.0f,
     0x1.491cc2p-118f, 0x1.95e94p-77f, 0x1.c75832p-43f, 0.0f, 0.0f, 0x1.3b9b7cp-65f,
     0.0f, 0x1.3d3f44p-64f, 0x1.c1ea58p-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d667d6p-59f, 0.0f, 0.0f, 0.0f, 0x1.fa142ep-116f, 0.0f, 0x1.65f01p-10f,
     0x1.c3f17cp-74f, 0x1.ae7efp-106f, 0x1.f706ep-68f, 0x1.66768cp-70f,
     0x1.96cc1ap-7f, 0.0f, 0.0f, 0x1.78b72cp-13f, 0.0f, 0x1.d9aab4p-66f,
     0x1.2b19cp-107f, 0x1.380784p-94f, 0x1.341758p-67f, 0x1.5b1986p-7f,
     0x1.26b6b6p-98f, 0x1.7692aap-60f, 0.0f, 0x1.87dea6p-71f, 0x1.174238p-126f, 0.0f,
     0.0f, 0x1.0619fep-45f, 0x1.5eeaf8p-22f, 0x1.426148p-80f, 0x1.d65abap-101f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.14db34p-108f, 0x1.99673ap-47f, 0x1.d627fcp-34f, 0.0f,
     0x1.29cd22p-42f, 0.0f, 0x1.d15162p-100f, 0x1.8caa7ap-6f, 0x1.96dbap-47f,
     0x1.08b6d4p-59f, 0.0f, 0x1.bdd466p-33f, 0.0f, 0x1.7f2e08p-110f, 0.0f,
     0x1.d4c65p-61f, 0x1.2bea82p-31f, 0.0f, 0.0f, 0x1.490cc4p-77f, 0x1.e06298p-29f,
     0.0f, 0.0f, 0x1.750cf6p-35f, 0x1.83e592p-44f, 0x1.7198ecp-57f, 0x1.3a104ap-44f,
     0x1.9cab58p-72f, 0x1.dc6844p-7f, 0.0f, 0x1.fa2188p-12f, 0x1.298572p-55f, 0.0f,
     0.0f, 0.0f, 0x1.1ef5ap-81f, 0x1.680a16p-74f, 0.0f, 0.0f, 0.0f, 0x1.afacccp-5f,
     0.0f, 0.0f, 0x1.943afp-48f, 0x1.daf11cp-67f, 0x1.8505aep-45f, 0.0f,
     0x1.7b5344p-100f, 0.0f, 0x1.8ab08cp-59f, 0.0f, 0x1.2bac06p-8f, 0x1.26345p-20f,
     0.0f, 0x1.2fc1e4p-44f, 0.0f, 0.0f, 0x1.dce884p-3f, 0.0f, 0.0f, 0x1p0f,
     0x1.db53b4p-45f, 0x1.7b9e1ap-16f, 0x1.7446dep-50f, 0x1.2a7a76p-26f, 0.0f, 0.0f,
     0x1.5b74dp-39f, 0x1.029a82p-57f, 0.0f, 0.0f, 0x1.7a6e5p-85f, 0x1.2f71f6p-15f,
     0x1.8504f4p-6f, 0x1.4b3148p-59f, 0x1.54e2b6p-90f, 0.0f, 0.0f, 0x1.09e6c6p-53f,
     0x1.3fcc46p-67f, 0x1.03db96p-123f, 0.0f, 0.0f, 0x1.e07164p-46f, 0.0f, 0.0f, 0.0f,
     0x1.fd288ap-116f, 0.0f, 0.0f, 0.0f, 0x1.159106p-109f, 0x1.1f5722p-45f, 0.0f,
     0.0f, 0.0f, 0x1.402224p-78f, 0x1.9cd5fap-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.62fdd8p-1f, 0x1.ce6738p-115f, 0.0f, 0x1.71dba2p-121f, 0.0f, 0.0f,
     0x1.2df596p-72f, 0.0f, 0.0f, 0x1.a09f14p-88f, 0.0f, 0.0f, 0x1.773a02p-14f,
     0x1.65d448p-62f, 0.0f, 0x1.6a5cdcp-70f, 0x1.770f42p-75f, 0x1.7e6a62p-95f,
     0x1.4c28fep-62f, 0.0f, 0.0f, 0x1.81b3d8p-5f, 0.0f, 0x1.75a8fp-61f,
     0x1.8980c4p-14f, 0x1.f3619cp-2f, 0x1.fe534cp-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.90e60cp-42f, 0.0f, 0x1.b2ffa6p-19f, 0x1.199a62p-94f, 0.0f, 0.0f,
     0x1.1f3e86p-75f, 0x1.56784ap-22f, 0.0f, 0x1.2c3bf2p-121f, 0x1.17094cp-65f, 0.0f,
     0x1.ab6954p-105f, 0x1.069194p-49f, 0.0f, 0x1.37f876p-49f, 0x1.181a72p-30f, 0.0f,
     0x1.82ad3ep-40f, 0x1.bb6742p-30f, 0x1.2e17ecp-51f, 0x1.0f88ecp-47f, 0.0f,
     0x1.541866p-121f, 0.0f, 0x1.736cb8p-105f, 0.0f, 0.0f, 0.0f, 0x1.81cbp-77f, 0.0f,
     0x1.25d052p-33f, 0x1.95066ep-107f, 0.0f, 0x1.aeb86ap-101f, 0x1.fa5e24p-72f,
     0x1.010dfcp-123f, 0x1.155bb8p-29f, 0.0f, 0x1.75ea22p-83f, 0x1.ad6368p-40f, 0.0f,
     0x1.88d53p-53f, 0.0f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef___m128_2 global_bench_acc;
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
        Sleef___m128_2 local_acc;
        int32_t i;
        ml_float4_t tmp0;
        ml_float4_t tmp1;
        ml_float4_t tmp2;
        ml_float4_t tmp3;
        ml_float4_t tmp4;
        ml_float4_t tmp5;
        Sleef___m128_2 tmp6;
        int32_t tmp7;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1004));){
            ml_float4_t tmp0;
            Sleef___m128_2 tmp1;
            ml_float4_t tmp2;
            ml_float4_t tmp3;
            ml_float4_t tmp4;
            ml_float4_t tmp5;
            ml_float4_t tmp6;
            ml_float4_t tmp7;
            Sleef___m128_2 tmp8;
            int32_t tmp9;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_sincospif4_u05avx2128(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = local_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = local_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef___m128_2) {.x=tmp4, .y=tmp7});
            local_acc = tmp8;
            tmp9 = i + INT32_C(4);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = local_acc.x;
        tmp2 = tmp0 + tmp1;
        tmp3 = global_bench_acc.y;
        tmp4 = local_acc.y;
        tmp5 = tmp3 + tmp4;
        tmp6 = ((Sleef___m128_2) {.x=tmp2, .y=tmp5});
        global_bench_acc = tmp6;
        tmp7 = j + INT32_C(1);
        j = tmp7;
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
    printf("Sleef_sincospif4_u05avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_sincospif4_u05avx2128 bench acc {.x=[%a, %a, %a, %a], .y=[%a, %a, %a, %a]}\n", global_bench_acc.x[0], global_bench_acc.x[1], global_bench_acc.x[2], global_bench_acc.x[3], global_bench_acc.y[0], global_bench_acc.y[1], global_bench_acc.y[2], global_bench_acc.y[3]);
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
