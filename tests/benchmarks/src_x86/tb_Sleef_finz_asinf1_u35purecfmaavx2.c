/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_asinf1_u35purecfma.c --function \
 *     Sleef_finz_asinf1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0x1.839ee2p-30f, 0.0f, 0.0f, 0.0f, 0x1.ad6c64p-20f, 0x1.3307d6p-68f,
     0x1.fa007cp-126f, 0.0f, 0x1.03fdd8p-98f, 0.0f, 0x1.c02fc4p-90f, 0.0f, 0.0f,
     0x1p0f, 0.0f, 0.0f, 0x1.16364p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f74d44p-112f, 0x1.ea51f6p-72f, 0x1.a21feap-102f, 0x1.7d5e5cp-84f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.2bc3d4p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f8527p-70f, 0.0f,
     0.0f, 0x1.b12f54p-74f, 0x1.84f986p-91f, 0x1.07de5ep-87f, 0x1.78230ap-83f,
     0x1.74f1ccp-15f, 0.0f, 0.0f, 0.0f, 0x1.e9e38p-110f, 0.0f, 0x1.3cd0eep-83f, 0.0f,
     0x1.2da90cp-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.501384p-81f,
     0x1.9d9dc8p-106f, 0.0f, 0.0f, 0x1.fc6c76p-1f, 0x1.79c894p-76f, 0x1.b11ba8p-110f,
     0.0f, 0.0f, 0x1.258054p-77f, 0x1.513accp-117f, 0x1.1410fcp-75f, 0x1.c0b132p-101f,
     0.0f, 0.0f, 0.0f, 0x1.b3b56ap-64f, 0.0f, 0x1.bd215cp-14f, 0x1.d2513p-24f,
     0x1.31709p-54f, 0x1.50e942p-96f, 0x1.738e72p-40f, 0x1.943a1cp-35f, 0.0f, 0.0f,
     0x1.a5216cp-21f, 0.0f, 0x1.eb6286p-53f, 0.0f, 0.0f, 0x1.bc304cp-106f, 0.0f,
     0x1.1f8626p-36f, 0.0f, 0x1.675848p-40f, 0.0f, 0.0f, 0x1.38dfap-12f,
     0x1.f0fb1p-112f, 0x1.97671ap-104f, 0.0f, 0x1.77ad1ep-17f, 0.0f, 0.0f,
     0x1.92308p-113f, 0.0f, 0x1.4f0546p-91f, 0x1.4caf9ep-122f, 0.0f, 0x1.481ef6p-21f,
     0.0f, 0x1.df32bp-119f, 0.0f, 0.0f, 0x1.536f14p-101f, 0x1.856c4ep-108f,
     0x1.bf4824p-54f, 0x1.0d4aa2p-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.af2b12p-70f, 0.0f,
     0x1.e8b48ep-48f, 0x1.6943ecp-125f, 0x1.9ea3fep-48f, 0x1.7b0a48p-87f,
     0x1.27a63ap-5f, 0.0f, 0.0f, 0x1.387f28p-38f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.14b794p-22f, 0.0f, 0x1.5fcb7ep-125f, 0.0f, 0.0f, 0x1.c17b3p-54f,
     0x1.71b726p-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6ece7p-22f, 0.0f, 0x1.7e9182p-56f,
     0x1.d9a46ep-59f, 0.0f, 0x1.d96e92p-52f, 0x1.b48d42p-49f, 0x1.585948p-71f, 0.0f,
     0.0f, 0x1.9d84d2p-66f, 0x1.e4b8bap-47f, 0.0f, 0x1.216b56p-50f, 0x1.7213dap-46f,
     0x1.e97d4ep-84f, 0x1.f3e452p-86f, 0x1.afb25p-19f, 0x1.9a188p-90f,
     0x1.7fbb02p-100f, 0.0f, 0.0f, 0.0f, 0x1.9ec0dcp-101f, 0x1.2489dp-79f,
     0x1.fac9c6p-8f, 0.0f, 0.0f, 0x1.91b204p-114f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7e94bep-25f, 0.0f, 0.0f, 0x1.d1fbap-85f, 0.0f, 0x1.4bac62p-113f,
     0x1.f1c6f8p-115f, 0.0f, 0.0f, 0x1.f74e62p-46f, 0.0f, 0.0f, 0.0f, 0x1.7d19d2p-15f,
     0x1.e27c2ep-16f, 0x1.c8896p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cf1d02p-98f, 0x1.78a6dep-10f, 0x1.3c3044p-96f, 0.0f, 0.0f, 0x1.5767d2p-62f,
     0x1.2ee16ap-9f, 0x1.483332p-105f, 0x1.cdcbdep-16f, 0x1.2f60eep-124f,
     0x1.eb2e7cp-94f, 0.0f, 0x1.ce6598p-50f, 0.0f, 0.0f, 0x1.dda85p-4f, 0.0f,
     0x1.346394p-93f, 0x1.ec05eap-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.85e6a4p-6f, 0x1.b76d44p-2f, 0x1.a3eaacp-37f, 0x1.7799a6p-81f,
     0x1.47d53ep-21f, 0x1.5c64aep-19f, 0.0f, 0x1.e029d8p-22f, 0x1.c975dp-87f,
     0x1.0c00a8p-97f, 0.0f, 0x1.7f0a34p-17f, 0x1.db505ep-79f, 0x1.e3948ep-55f, 0.0f,
     0.0f, 0.0f, 0x1.0a65c4p-7f, 0x1.04c8ap-43f, 0x1.0b27aep-101f, 0.0f,
     0x1.3d34c8p-104f, 0x1.4635cep-27f, 0.0f, 0.0f, 0x1.9cc7d8p-113f, 0x1.1e4a94p-94f,
     0.0f, 0.0f, 0x1.4c3f94p-100f, 0.0f, 0x1.634fc4p-79f, 0.0f, 0x1.327d04p-37f,
     0x1.909a5ap-87f, 0.0f, 0.0f, 0.0f, 0x1.acdc2ap-54f, 0.0f, 0.0f, 0.0f,
     0x1.d8bb94p-122f, 0.0f, 0x1.ed973p-35f, 0.0f, 0.0f, 0x1.f5328p-3f, 0.0f, 0.0f,
     0.0f, 0x1.8a99b6p-2f, 0x1.d44a6ep-5f, 0x1.7a0eecp-64f, 0x1.09de86p-109f, 0.0f,
     0x1.c630c8p-114f, 0x1.e6529cp-4f, 0x1.afbb34p-87f, 0x1.95a8dap-10f,
     0x1.63363ep-58f, 0x1.0bd27ap-1f, 0.0f, 0x1.a215b2p-89f, 0.0f, 0.0f,
     0x1.a90d4ap-98f, 0.0f, 0.0f, 0x1.6095f2p-97f, 0x1.dd1c1ep-1f, 0.0f,
     0x1.99aeap-91f, 0.0f, 0x1.61a474p-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fc2136p-115f, 0.0f, 0x1.7a970ep-111f, 0x1.dd8104p-114f, 0x1.648faep-111f,
     0.0f, 0x1.50633ep-113f, 0.0f, 0x1.f73948p-83f, 0.0f, 0x1.6878c6p-13f,
     0x1.871baap-16f, 0x1.c9833ap-23f, 0x1.605a2ep-94f, 0.0f, 0.0f, 0x1.8ff59ap-52f,
     0.0f, 0x1.973ad6p-18f, 0x1.7b8b2ap-38f, 0.0f, 0x1.b64f88p-66f, 0.0f,
     0x1.ee8b8ap-121f, 0x1.f9e15p-69f, 0x1.3bf25cp-105f, 0.0f, 0x1.e975f8p-72f,
     0x1.247796p-12f, 0.0f, 0x1.d4abbep-81f, 0.0f, 0.0f, 0.0f, 0x1.2ef6cp-58f,
     0x1.394908p-20f, 0x1.f5ce02p-54f, 0.0f, 0x1.5cf9e8p-83f, 0.0f, 0x1.a7563ep-108f,
     0x1.932ab6p-49f, 0x1.7bad54p-120f, 0.0f, 0.0f, 0x1.573d74p-12f, 0x1.992438p-55f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b80922p-15f, 0x1.d164ap-34f, 0x1.7968d8p-42f, 0.0f,
     0x1.b41734p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d09498p-26f, 0.0f, 0.0f,
     0x1.70b2bcp-34f, 0x1.f4b71p-124f, 0x1.7491aep-60f, 0.0f, 0.0f, 0x1.d39746p-91f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.aff154p-115f, 0.0f, 0x1.d2632cp-61f, 0x1.4c8a68p-71f,
     0x1.65bbbap-90f, 0x1.efab5ep-95f, 0x1.98adfp-109f, 0x1.7cd23ap-30f,
     0x1.7b6b0ep-6f, 0.0f, 0x1.e3918ep-123f, 0.0f, 0x1.30f0e2p-48f, 0x1.ccbda2p-76f,
     0x1.523afap-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.597412p-56f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.345f28p-21f, 0.0f, 0.0f,
     0x1.3065aap-121f, 0x1.cdbf08p-15f, 0.0f, 0.0f, 0x1.c85c9p-13f, 0.0f, 0.0f,
     0x1.0ea782p-6f, 0.0f, 0.0f, 0x1.6ad8eap-7f, 0x1.1ab88cp-100f, 0x1.56fe0cp-81f,
     0.0f, 0.0f, 0x1.b41f92p-63f, 0.0f, 0.0f, 0x1.a794fcp-36f, 0x1.b663fcp-82f, 0.0f,
     0.0f, 0x1.9f8fbep-22f, 0x1.9cf9d4p-109f, 0x1.1b428p-119f, 0x1.a54afep-81f,
     0x1.e9c59ap-40f, 0x1.0efcdap-8f, 0x1.bb209ep-22f, 0x1.6747f4p-1f,
     0x1.c50332p-39f, 0.0f, 0.0f, 0x1.89c65p-99f, 0x1.1367d8p-57f, 0x1.65ee2p-64f,
     0.0f, 0x1.9a4c66p-29f, 0.0f, 0x1.c680bp-117f, 0x1.f68912p-77f, 0x1.97e5f2p-107f,
     0x1.9a584ep-95f, 0x1.984dc2p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7c3346p-10f, 0.0f,
     0x1.54283ap-109f, 0x1.c60e2ap-19f, 0.0f, 0.0f, 0.0f, 0x1.01dc8cp-3f, 0.0f, 0.0f,
     0.0f, 0x1.c7a61cp-18f, 0.0f, 0x1.9edde2p-3f, 0.0f, 0x1.820d92p-60f, 0.0f,
     0x1.3c45c2p-31f, 0x1.1ac23ap-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f43078p-64f,
     0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.7193a4p-14f, 0x1.ced70ep-21f, 0.0f,
     0x1.503548p-43f, 0.0f, 0.0f, 0x1.cd60cap-5f, 0x1.4db78cp-77f, 0x1.d53758p-27f,
     0.0f, 0x1.88b14ap-34f, 0.0f, 0.0f, 0x1.01ae2ep-118f, 0x1.289f3ap-43f,
     0x1.541c56p-28f, 0x1.291ed6p-38f, 0.0f, 0.0f, 0x1.e1d798p-24f, 0x1.21b136p-97f,
     0.0f, 0x1.b9097p-113f, 0x1.eb3a7p-108f, 0.0f, 0.0f, 0x1.64cf8ep-15f,
     0x1.2c595cp-95f, 0.0f, 0.0f, 0x1.e3d63cp-33f, 0.0f, 0x1.59fd6ep-81f,
     0x1.efa1b6p-96f, 0.0f, 0x1.90ae3ap-33f, 0.0f, 0.0f, 0x1.000d3ap-49f,
     0x1.f72dcep-14f, 0x1.566bp-7f, 0x1.408506p-51f, 0.0f, 0x1.b8191p-31f, 0.0f,
     0x1.bb1eb4p-108f, 0x1.679b2ap-59f, 0x1.e65a64p-37f, 0.0f, 0x1.e4d4c8p-8f,
     0x1.9e3eb4p-19f, 0.0f, 0.0f, 0x1.5615e6p-62f, 0.0f, 0x1.854058p-8f,
     0x1.b0d5c2p-118f, 0x1.6ce4c6p-64f, 0.0f, 0.0f, 0.0f, 0x1.961cd6p-113f, 0.0f,
     0x1.ac54dap-44f, 0x1.0b2852p-121f, 0.0f, 0.0f, 0x1.874d7ep-105f,
     0x1.750ea2p-101f, 0x1.a98a78p-29f, 0.0f, 0x1.bc5838p-117f, 0.0f, 0x1.deeefcp-37f,
     0x1.71e964p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b66a5ap-24f,
     0x1.e509eep-103f, 0.0f, 0.0f, 0x1.ca9852p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.257afep-56f, 0x1.782542p-6f, 0.0f, 0x1.aba27ap-116f, 0x1p0f,
     0x1.5510ccp-90f, 0x1.09652cp-125f, 0.0f, 0x1.582c8cp-74f, 0x1.666f9p-24f, 0.0f,
     0.0f, 0x1.a263ap-126f, 0.0f, 0x1.981092p-101f, 0x1.24cd9ap-1f, 0x1.54bc36p-3f,
     0.0f, 0x1.d9265ep-49f, 0x1.4a228p-75f, 0x1.a0fc86p-80f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.0c566ap-48f, 0.0f, 0x1.aaaf5ep-17f, 0x1.9de73p-12f, 0x1.e64bdcp-65f,
     0.0f, 0.0f, 0x1.216e42p-5f, 0.0f, 0x1.cf3686p-15f, 0x1.d0e096p-41f,
     0x1.58591p-103f, 0x1.a83f78p-101f, 0.0f, 0x1.076854p-81f, 0.0f, 0x1.2c6f0ep-97f,
     0.0f, 0x1.ec42d4p-104f, 0.0f, 0x1.7c550cp-71f, 0x1.a4bdeap-67f, 0x1.2790bep-79f,
     0x1.f609eep-2f, 0x1.59e15ap-113f, 0x1.890ab8p-77f, 0.0f, 0x1.4036aep-33f, 0.0f,
     0x1.15311p-45f, 0x1.3a9ap-32f, 0x1.0a9e6ap-7f, 0x1.3cb078p-123f, 0x1.8cf018p-39f,
     0.0f, 0.0f, 0x1.c072ep-41f, 0x1.ef17e8p-40f, 0x1.3b16b2p-111f, 0.0f,
     0x1.a6349p-84f, 0x1.bb8a1p-74f, 0.0f, 0x1.351acp-118f, 0.0f, 0x1.0c82b4p-68f,
     0x1.e87ceep-108f, 0x1.459e96p-79f, 0.0f, 0x1.72546ep-80f, 0x1.812f5ep-70f, 0.0f,
     0.0f, 0x1.4426d4p-68f, 0.0f, 0x1.6b5fe2p-51f, 0x1.e5527p-45f, 0.0f, 0.0f,
     0x1.2751cep-108f, 0.0f, 0.0f, 0.0f, 0x1.07e92ep-107f, 0x1.9661fap-33f,
     0x1.5ef7c2p-11f, 0x1.a889fep-78f, 0x1.20ca84p-58f, 0.0f, 0.0f, 0.0f,
     0x1.9a0bcap-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.08e5bap-68f, 0.0f, 0.0f,
     0x1.99de26p-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.de6318p-41f, 0x1.b2648cp-50f, 0.0f,
     0.0f, 0x1.531a2ap-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9246e2p-1f,
     0x1.7072dap-53f, 0x1.ccaed8p-93f, 0.0f, 0x1.d3f9acp-52f, 0.0f, 0x1.c16b48p-16f,
     0x1.d83b18p-45f, 0.0f, 0x1.1d548ep-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.98cb68p-56f, 0x1.86ffcp-30f, 0.0f, 0.0f, 0.0f, 0x1.bf5fe6p-27f, 0.0f,
     0x1.9a3562p-11f, 0x1.06db94p-71f, 0.0f, 0x1.b76e4ep-57f, 0.0f, 0.0f,
     0x1.c74934p-123f, 0.0f, 0x1.e78236p-80f, 0x1.63feap-41f, 0.0f, 0x1.ec114ap-98f,
     0x1.c993f2p-25f, 0.0f, 0.0f, 0.0f, 0x1.d340f8p-103f, 0x1.83224ep-111f,
     0x1.d2fa74p-101f, 0x1.ebb136p-85f, 0.0f, 0x1.3e88d2p-95f, 0.0f, 0.0f,
     0x1.e74b14p-115f, 0.0f, 0x1.4b90a4p-74f, 0.0f, 0x1.eddcdep-38f, 0x1.347452p-91f,
     0x1.7bbc9p-96f, 0.0f, 0x1.9c1006p-2f, 0x1.2d8954p-73f, 0x1.5e0a78p-64f,
     0x1.b910cep-3f, 0x1.a19c28p-2f, 0.0f, 0x1.601ac6p-30f, 0.0f, 0x1.9110dp-5f,
     0x1.12b77p-63f, 0.0f, 0x1.3ef842p-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.289ff2p-3f,
     0.0f, 0x1.0785e8p-53f, 0x1.6ac85cp-121f, 0.0f, 0.0f, 0x1.e69222p-85f, 0.0f, 0.0f,
     0x1.d7e402p-15f, 0x1.26e1e4p-28f, 0.0f, 0.0f, 0.0f, 0x1.7b23a2p-106f, 0.0f,
     0x1.3f56a8p-87f, 0.0f, 0x1.eec626p-125f, 0.0f, 0.0f, 0x1.cca8eep-43f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.718c64p-89f, 0.0f, 0x1.9be7aep-14f, 0x1.8b11cp-74f,
     0x1.6dfd88p-19f, 0x1.57e258p-118f, 0x1.697508p-81f, 0x1.da89cep-6f,
     0x1.e7382p-121f, 0.0f, 0.0f, 0x1.56bef4p-2f, 0x1.89cb2ep-33f, 0x1.27a6bap-48f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4b73fap-44f, 0x1.909834p-30f,
     0x1.86d3e2p-5f, 0.0f, 0.0f, 0.0f, 0x1.42a0d2p-31f, 0.0f, 0x1.ac073ap-7f, 0.0f,
     0x1.9746d6p-81f, 0.0f, 0x1.ce905p-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.08c59ep-109f,
     0x1.2a7678p-57f, 0.0f, 0x1.617f14p-91f, 0.0f, 0x1.16ca94p-79f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.faec8p-7f, 0.0f, 0x1.c5f4c4p-88f, 0.0f, 0x1.c79f06p-118f, 0.0f,
     0x1.560a82p-46f, 0.0f, 0x1.862202p-56f, 0.0f, 0x1.b804a4p-50f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d3ba2cp-43f, 0x1.6e5066p-72f, 0.0f, 0.0f, 0x1.edd14ep-37f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.2b4b88p-123f, 0.0f, 0x1.98396cp-81f, 0x1.92f762p-76f,
     0.0f, 0x1.308aecp-126f, 0x1.6e6a38p-4f, 0x1.409c0cp-5f, 0.0f, 0.0f,
     0x1.a00052p-3f, 0x1.b9ac66p-21f, 0.0f, 0x1.037f88p-113f, 0.0f, 0x1.67325p-31f,
     0x1.b3239ep-54f, 0x1.6bbcdcp-34f, 0x1.9d0092p-122f, 0.0f, 0x1.2156p-102f,
     0x1.8d62f2p-68f, 0x1.851c26p-5f, 0x1.3e8b8ap-49f, 0x1.0c378ep-43f,
     0x1.aa1e42p-122f, 0x1.1450fcp-55f, 0.0f, 0.0f, 0x1.96d2fcp-109f,
     0x1.7bc74ep-103f, 0x1.0e19ep-62f, 0x1.da6116p-19f, 0.0f, 0x1.f0d0dep-110f,
     0x1.7bfff4p-116f, 0.0f, 0.0f, 0.0f, 0x1.67e90ep-123f, 0x1.8c84b8p-92f,
     0x1.b860dap-84f, 0x1.ea1336p-123f, 0x1.acd6ap-89f, 0.0f, 0x1.dc36aap-86f, 0.0f,
     0x1.823adp-29f, 0x1.188af4p-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f0b0ap-16f, 0.0f,
     0.0f, 0x1.1bac22p-40f, 0x1.c74fd6p-51f, 0.0f, 0x1.978a36p-34f, 0.0f,
     0x1.91af4ep-58f, 0x1.277aacp-65f, 0x1.aab79ep-41f, 0.0f, 0x1.ad7f1cp-14f,
     0x1.e6984cp-20f, 0x1.0807b8p-124f, 0.0f, 0.0f, 0x1.35a38p-18f, 0.0f, 0.0f,
     0x1.d00a9p-77f, 0.0f, 0x1.0170dp-16f, 0.0f, 0x1.128be2p-70f, 0x1.c83d32p-85f,
     0x1.a10c46p-1f, 0x1.b8698ep-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8e0444p-30f, 0.0f, 0x1.48c8a4p-109f, 0.0f,
     0x1.c3d3fap-80f, 0.0f, 0.0f, 0x1.e6a92p-16f, 0x1.5fda9ap-59f, 0.0f, 0.0f, 0.0f,
     0x1.31c224p-61f, 0.0f, 0.0f, 0x1.d98428p-109f, 0x1.a5e5b6p-75f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.0ab236p-105f, 0x1.db3beap-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.dc53ccp-52f, 0x1.6165a8p-58f
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
            tmp1 = Sleef_finz_asinf1_u35purecfma(tmp0);
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
    printf("Sleef_finz_asinf1_u35purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_asinf1_u35purecfma bench acc %a\n", global_bench_acc);
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
