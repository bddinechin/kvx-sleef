/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_roundf4_kvx.c --function Sleef_finz_roundf4_kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
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
     0x1.2684f4p-63f, 0x1.d6dbd6p-21f, 0.0f, 0x1.793672p-8f, 0.0f, 0x1.877c38p-97f,
     0.0f, 0x1.ab5c6p-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.095848p-87f, 0.0f,
     0x1.114fep-45f, 0x1.f739dcp-75f, 0.0f, 0.0f, 0.0f, 0x1.33618ep-73f,
     0x1.3f198cp-17f, 0.0f, 0.0f, 0.0f, 0x1.d81bd6p-92f, 0.0f, 0.0f, 0x1.16d14cp-15f,
     0x1.35e666p-96f, 0x1.b0ec4ep-107f, 0x1.c08416p-26f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2ec216p-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.03622p-122f, 0x1.b22abep-46f,
     0x1.3755d8p-53f, 0.0f, 0.0f, 0x1.cc2d04p-105f, 0.0f, 0.0f, 0x1.ede78cp-105f,
     0.0f, 0x1.a0fb28p-76f, 0.0f, 0x1.d93f92p-15f, 0x1.b95222p-108f, 0x1.cd59dep-116f,
     0x1.caea4ap-5f, 0.0f, 0x1.bdf76ap-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ea50acp-126f,
     0x1.0ca9eep-16f, 0.0f, 0.0f, 0x1.e3ac6p-21f, 0x1.38cd3cp-74f, 0x1.b54548p-77f,
     0x1.993b6cp-40f, 0.0f, 0x1.d950bcp-29f, 0.0f, 0.0f, 0x1.f4384ep-108f, 0.0f, 0.0f,
     0x1.dcd546p-11f, 0x1.a8f0aap-97f, 0x1.562f8cp-53f, 0.0f, 0x1.0702ap-87f, 0.0f,
     0x1.7bec02p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d16cb6p-74f, 0.0f, 0x1.049e76p-49f,
     0.0f, 0x1.37af46p-2f, 0x1.4c3eacp-104f, 0.0f, 0x1.33b46p-19f, 0x1.b56e1p-95f,
     0x1.81469cp-90f, 0.0f, 0x1.fdada4p-126f, 0.0f, 0x1.5ae248p-9f, 0.0f,
     0x1.4783e4p-119f, 0.0f, 0.0f, 0x1.abd29ap-65f, 0.0f, 0.0f, 0.0f, 0x1.48a1f2p-51f,
     0x1.7aa234p-46f, 0.0f, 0.0f, 0x1.c8e97ep-59f, 0x1.9c463ap-110f, 0x1.83d784p-60f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8ad01ep-82f, 0.0f, 0x1.c9fbep-81f,
     0x1.690a46p-1f, 0x1.acad4ap-21f, 0x1.764d7cp-111f, 0.0f, 0.0f, 0x1.fbe496p-43f,
     0x1.47eea8p-64f, 0.0f, 0.0f, 0x1.8650b6p-46f, 0.0f, 0x1.58c8a8p-61f,
     0x1.0548c8p-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2bafbcp-105f, 0.0f,
     0x1.16c872p-111f, 0x1.c5c4f2p-71f, 0.0f, 0x1.b26538p-59f, 0x1.2a7c16p-82f, 0.0f,
     0x1.c7a1c8p-66f, 0x1.164384p-60f, 0x1.8ac952p-44f, 0.0f, 0x1.0b0a96p-52f,
     0x1.6b4a52p-115f, 0.0f, 0.0f, 0.0f, 0x1.2f2a36p-43f, 0.0f, 0.0f, 0x1.9f3ad8p-25f,
     0x1.8bfd54p-120f, 0.0f, 0x1.c1edbap-71f, 0x1.b3bda8p-97f, 0.0f, 0x1.32c79cp-99f,
     0.0f, 0x1.80831ep-77f, 0x1.67cbbep-40f, 0.0f, 0x1.b0b244p-103f, 0.0f,
     0x1.9046ep-31f, 0x1.e0b974p-58f, 0x1.f19064p-28f, 0.0f, 0.0f, 0.0f,
     0x1.55b9e2p-2f, 0.0f, 0x1.940f64p-89f, 0x1.160246p-30f, 0x1.d04a4p-88f, 0.0f,
     0x1.98142p-55f, 0.0f, 0.0f, 0x1.dee1f6p-4f, 0x1.367a7p-26f, 0x1.195eb8p-2f,
     0x1.0bd938p-15f, 0.0f, 0x1.102118p-70f, 0.0f, 0x1.6a9cbcp-83f, 0x1.aa4b98p-121f,
     0x1.4dc2fep-121f, 0x1.b3d29cp-35f, 0.0f, 0x1.ce2a14p-21f, 0.0f, 0.0f,
     0x1.0940fap-10f, 0x1.3acd2p-96f, 0x1.10633ap-31f, 0x1.d0f7b6p-3f, 0.0f, 0.0f,
     0x1.b4c5aap-78f, 0x1.1c940cp-114f, 0.0f, 0x1.f2efcap-21f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.d196aap-42f, 0.0f, 0x1.5392aep-114f, 0x1.edaadp-44f, 0x1.a2b186p-8f,
     0x1.93881cp-123f, 0x1.185172p-8f, 0x1.4417e8p-68f, 0x1.248bdcp-122f,
     0x1.42ff78p-100f, 0.0f, 0x1.f20b6ap-65f, 0x1.9b2c84p-63f, 0.0f, 0.0f, 0.0f,
     0x1.c47a4p-49f, 0.0f, 0x1.08c0eap-33f, 0x1.e6eb18p-107f, 0.0f, 0x1.aff3fcp-101f,
     0x1.dfc494p-58f, 0x1.23647ap-30f, 0x1.738da6p-50f, 0x1.9145dcp-17f, 0.0f, 0.0f,
     0x1.c941e8p-55f, 0.0f, 0x1.32f282p-7f, 0x1.27288cp-82f, 0.0f, 0.0f,
     0x1.ff9caep-31f, 0.0f, 0x1.afc24ep-1f, 0x1.40eb1ep-78f, 0.0f, 0x1.e7d2f8p-109f,
     0.0f, 0x1.e380e2p-50f, 0x1.6f65aap-62f, 0.0f, 0x1.7ef4dep-72f, 0.0f,
     0x1.82eab2p-75f, 0x1.04a362p-90f, 0.0f, 0x1.835b6ep-50f, 0x1.a03b5ep-3f, 0.0f,
     0x1.c7297cp-93f, 0x1.bd836p-74f, 0.0f, 0x1.2e8d58p-27f, 0.0f, 0x1.2cf71cp-70f,
     0.0f, 0x1.c6c3d2p-66f, 0.0f, 0x1.3cd95cp-17f, 0.0f, 0x1.707e5ep-102f, 0.0f,
     0x1.cf5674p-113f, 0.0f, 0.0f, 0.0f, 0x1.f8b4bep-55f, 0x1.8923p-101f, 0.0f,
     0x1.a88bdp-28f, 0.0f, 0x1.272158p-88f, 0.0f, 0.0f, 0.0f, 0x1.40b55p-124f, 0.0f,
     0x1.d1bcecp-73f, 0x1.b4b17cp-121f, 0.0f, 0x1.9c38b4p-12f, 0x1.6ca556p-103f, 0.0f,
     0.0f, 0.0f, 0x1.350864p-23f, 0.0f, 0x1.d6b65ap-81f, 0x1.968dd2p-25f, 0.0f, 0.0f,
     0x1.d26abep-77f, 0.0f, 0.0f, 0.0f, 0x1.030b9p-4f, 0.0f, 0x1.00ea72p-26f,
     0x1.379472p-70f, 0.0f, 0x1.839492p-55f, 0x1.f185d8p-72f, 0x1.b98a34p-125f,
     0x1.a598dp-2f, 0.0f, 0x1.9f427ap-124f, 0.0f, 0x1.b1e09p-96f, 0x1.63efa2p-56f,
     0.0f, 0.0f, 0x1.f2163ep-110f, 0.0f, 0x1.e31324p-104f, 0.0f, 0x1.fd717cp-43f,
     0.0f, 0.0f, 0.0f, 0x1.3e789ep-102f, 0.0f, 0.0f, 0x1.f8aec8p-84f,
     0x1.c71f44p-104f, 0x1.e6e05cp-90f, 0.0f, 0.0f, 0.0f, 0x1.3240f2p-120f,
     0x1.ffc37ep-8f, 0x1.7c8658p-108f, 0.0f, 0x1.61f43ap-90f, 0x1.6f4e1cp-49f, 0.0f,
     0x1.74db4p-92f, 0x1.1683d6p-18f, 0.0f, 0.0f, 0x1.19a8a6p-101f, 0x1.561204p-50f,
     0x1.adb6e8p-19f, 0x1.a85e06p-15f, 0.0f, 0.0f, 0x1.2c038ap-76f, 0x1.351a8p-17f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.90d8e4p-28f, 0.0f, 0.0f, 0x1.f3e868p-23f,
     0x1.cfca1cp-37f, 0x1.840a4ep-82f, 0x1.f656bep-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e547ep-104f, 0.0f, 0x1.15c24cp-112f, 0.0f, 0.0f, 0.0f, 0x1.d9c6eep-20f,
     0x1.2d9e8cp-111f, 0x1.709112p-117f, 0x1.d0c358p-72f, 0.0f, 0x1.023004p-10f,
     0x1.bb3362p-38f, 0x1.3085e6p-6f, 0.0f, 0.0f, 0.0f, 0x1.07140ep-115f,
     0x1.99fc2ap-56f, 0x1.e4bcc4p-104f, 0x1.ad5fa8p-2f, 0x1.817f9ep-37f, 0.0f,
     0x1.c245a2p-58f, 0.0f, 0.0f, 0.0f, 0x1.ac516ep-44f, 0.0f, 0x1.c047a4p-62f, 0.0f,
     0.0f, 0x1.a5d3cap-98f, 0.0f, 0x1.3dc648p-86f, 0.0f, 0.0f, 0x1.1eacf8p-82f, 0.0f,
     0x1.f3a61ap-58f, 0.0f, 0.0f, 0x1.e50764p-31f, 0.0f, 0x1.e2474ep-29f, 0.0f,
     0x1.bae1a2p-8f, 0x1.e9fc54p-115f, 0x1.b969d8p-60f, 0x1.95b6ep-39f,
     0x1.fa8e6ap-121f, 0x1.44c846p-118f, 0x1.ba1eccp-126f, 0.0f, 0.0f,
     0x1.6da2e6p-107f, 0.0f, 0x1.99229p-26f, 0.0f, 0.0f, 0x1.09f7acp-120f, 0.0f,
     0x1.0a67f2p-75f, 0.0f, 0x1.7035dap-93f, 0x1.e158acp-58f, 0.0f, 0x1.c19d78p-110f,
     0.0f, 0x1.461adap-119f, 0x1.6e0cecp-44f, 0x1.0aca78p-85f, 0.0f, 0x1.abe208p-122f,
     0.0f, 0x1.aa74b6p-97f, 0.0f, 0.0f, 0.0f, 0x1.9add14p-116f, 0x1.79659cp-76f, 0.0f,
     0x1.9d778p-93f, 0x1.faf272p-123f, 0.0f, 0x1.ea668cp-125f, 0.0f, 0x1.9fdcf8p-36f,
     0x1.6ea078p-108f, 0.0f, 0.0f, 0.0f, 0x1.f28008p-104f, 0.0f, 0x1.b3bf2ap-10f,
     0.0f, 0x1.24fa04p-56f, 0x1.54890ep-14f, 0x1.f8476ap-23f, 0x1.596f24p-85f,
     0x1.3b094p-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d8b456p-28f, 0.0f, 0x1.282cc6p-119f,
     0x1.a1011p-37f, 0.0f, 0x1.87fad8p-7f, 0.0f, 0.0f, 0x1.12836p-7f, 0x1.8f33fcp-47f,
     0.0f, 0x1.22ef62p-92f, 0.0f, 0x1.1b533p-7f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.faa28p-78f, 0x1.2c7434p-79f, 0.0f, 0.0f, 0x1.dabe4cp-87f, 0x1.71fc72p-118f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f1b078p-3f, 0.0f, 0x1.f10e52p-46f, 0x1.c70db8p-28f,
     0.0f, 0x1.283b02p-122f, 0.0f, 0.0f, 0x1.af7d44p-119f, 0.0f, 0.0f, 0.0f,
     0x1.bc134cp-69f, 0x1.2a86b4p-22f, 0.0f, 0x1.c1051ap-95f, 0x1.ad3294p-20f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.494112p-1f, 0x1.11a466p-45f, 0.0f, 0x1.808f0ep-85f,
     0.0f, 0.0f, 0x1.5c1132p-90f, 0.0f, 0.0f, 0x1.0b20dcp-104f, 0x1.2d79bp-41f, 0.0f,
     0.0f, 0.0f, 0x1.4b298ep-1f, 0.0f, 0x1.3d0ab8p-101f, 0.0f, 0.0f, 0x1.9d41bep-94f,
     0.0f, 0x1.bf7dfap-33f, 0x1.64d7eep-86f, 0.0f, 0x1.08a6b4p-62f, 0x1.89f6p-114f,
     0x1.a8bd92p-66f, 0x1.aa1f6ap-56f, 0.0f, 0.0f, 0.0f, 0x1.7b96bcp-88f, 0.0f,
     0x1.d8ea1p-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a7933p-41f, 0.0f, 0x1.aac75ep-80f,
     0.0f, 0x1.9d68bcp-84f, 0x1.76b316p-105f, 0.0f, 0.0f, 0x1.f9d86ap-125f,
     0x1.299ee2p-29f, 0x1.51a332p-42f, 0.0f, 0x1.1bd37ap-45f, 0x1.50aaa8p-18f,
     0x1.c2765ap-7f, 0.0f, 0.0f, 0x1.57b5e2p-96f, 0x1.56b91cp-21f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.4c824cp-15f, 0x1.1adcbap-85f, 0x1.52476ep-91f, 0.0f,
     0x1.d387d8p-13f, 0.0f, 0x1.67a878p-92f, 0x1.641c34p-3f, 0x1.69656ap-20f, 0.0f,
     0.0f, 0x1.6c3a12p-95f, 0.0f, 0x1.72e426p-126f, 0.0f, 0x1.1467f6p-72f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.1089e4p-55f, 0.0f, 0x1.6ce41p-119f, 0.0f, 0x1.16e944p-53f,
     0.0f, 0x1.0e0e2p-124f, 0.0f, 0x1.454102p-12f, 0x1.7236acp-73f, 0.0f,
     0x1.82fdb2p-118f, 0.0f, 0x1.88536ep-31f, 0.0f, 0x1.1d558p-12f, 0.0f,
     0x1.dec1b4p-83f, 0x1.e96654p-6f, 0.0f, 0x1.143d9cp-22f, 0x1.88166ap-55f, 0.0f,
     0.0f, 0.0f, 0x1.f5322ap-29f, 0x1.7463dap-21f, 0x1.3b5ff6p-106f, 0x1.cd5dp-94f,
     0.0f, 0x1.07556p-23f, 0.0f, 0x1.a7c6c6p-7f, 0.0f, 0.0f, 0x1.944e6ep-19f,
     0x1.72c006p-118f, 0x1.f6a3d6p-78f, 0.0f, 0.0f, 0.0f, 0x1.f4d706p-32f,
     0x1.f31ed8p-31f, 0.0f, 0.0f, 0x1.18fbc6p-106f, 0.0f, 0.0f, 0x1.6b8f3ap-30f,
     0x1.c56054p-53f, 0.0f, 0x1.a9ee8cp-36f, 0.0f, 0.0f, 0x1.4e66f4p-102f,
     0x1.0eb7fep-24f, 0x1.ccbe86p-9f, 0.0f, 0.0f, 0.0f, 0x1.71b442p-68f,
     0x1.1ce8bap-28f, 0x1.cce7f2p-96f, 0x1.7c153ep-43f, 0x1.0fe99ap-78f, 0.0f, 0.0f,
     0.0f, 0x1.df5d86p-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.195466p-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d930f4p-13f, 0.0f,
     0x1.3a6cc2p-97f, 0x1.e50972p-43f, 0.0f, 0x1.f6f04ap-47f, 0x1.0b1b2p-68f,
     0x1.e47942p-95f, 0.0f, 0x1.b86f0ap-63f, 0x1.82cc96p-28f, 0.0f, 0.0f, 0.0f,
     0x1.9efcep-88f, 0x1.4822dep-78f, 0.0f, 0.0f, 0.0f, 0x1.5c5e52p-112f,
     0x1.711162p-25f, 0.0f, 0.0f, 0x1.0bd792p-99f, 0.0f, 0x1.cc187ap-117f,
     0x1.6f8cbep-25f, 0x1.fe2f74p-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a2f448p-1f,
     0x1.72b42cp-70f, 0x1.8c7292p-125f, 0x1.c1bd34p-28f, 0x1.1fd452p-113f,
     0x1.e8ff7cp-38f, 0.0f, 0x1.4d1804p-105f, 0x1.e427b2p-50f, 0x1.06fd96p-73f,
     0x1.79166cp-24f, 0.0f, 0.0f, 0x1.653388p-126f, 0x1.b968a4p-79f, 0.0f, 0.0f, 0.0f,
     0x1.6e97fcp-103f, 0.0f, 0.0f, 0.0f, 0x1.fc723p-57f, 0x1.bb7152p-103f,
     0x1.e8533ap-100f, 0.0f, 0.0f, 0.0f, 0x1.8c7786p-49f, 0.0f, 0x1.16bfeep-14f,
     0x1.6b77bp-88f, 0x1.228446p-34f, 0.0f, 0.0f, 0x1.6e9206p-81f, 0x1.2598b4p-103f,
     0.0f, 0x1.19c3bap-105f, 0x1.26659cp-87f, 0x1.78ce36p-46f, 0x1.f09544p-115f,
     0x1.0fc5cap-38f, 0.0f, 0x1.bcfa0ep-67f, 0.0f, 0.0f, 0.0f, 0x1.fab5ap-54f,
     0x1.d54108p-80f, 0.0f, 0x1.faeb44p-56f, 0x1.7deb8p-34f, 0.0f, 0.0f,
     0x1.adf086p-25f, 0x1.cd5e3cp-17f, 0x1.32a564p-9f, 0.0f, 0x1.879e82p-82f,
     0x1.4a41ep-64f, 0.0f, 0.0f, 0.0f, 0x1.9ef214p-78f, 0x1.fd7e3ap-98f, 0.0f,
     0x1.eac71cp-46f, 0x1.32335cp-41f, 0.0f, 0x1.373p-6f, 0x1.636f82p-100f, 0.0f,
     0x1.b63bep-69f, 0.0f, 0x1.94622p-36f, 0x1.d203cap-80f, 0.0f, 0x1.ef8a1cp-22f,
     0.0f, 0x1.e8cf68p-117f, 0x1.d468a6p-43f, 0.0f, 0x1.c48372p-119f, 0.0f, 0.0f,
     0x1.5bbad6p-61f, 0x1.29837ep-109f, 0.0f, 0.0f, 0x1.a807f2p-10f, 0x1.e9c38ep-22f,
     0.0f, 0.0f, 0x1.ef18d6p-84f, 0x1.113b32p-110f, 0x1.7fad24p-43f, 0.0f,
     0x1.b5b35p-55f, 0.0f, 0.0f, 0.0f, 0x1.02a65cp-16f, 0.0f, 0x1.0085c2p-54f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b159p-3f, 0x1.b1285cp-10f, 0x1.142104p-100f, 0.0f, 0.0f,
     0.0f, 0x1.cb7e9p-108f, 0x1.40963cp-43f, 0x1.369446p-96f, 0x1.b5732p-60f, 0.0f,
     0x1.56fa1p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.818a56p-4f, 0x1.632708p-47f,
     0x1.7220dp-30f, 0x1.c2c2e8p-52f, 0x1.d8077ep-123f, 0x1.9e0274p-24f,
     0x1.32339ep-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1e518ep-11f, 0.0f,
     0x1.9b87b4p-125f, 0x1.f3fe1p-118f, 0x1.7444fcp-118f, 0x1.5952bp-7f, 0.0f, 0.0f,
     0.0f, 0x1.dfd8c4p-29f, 0x1.dbbe9cp-125f, 0x1.29ffep-105f, 0.0f, 0x1.5ace8ap-100f,
     0x1.0b8fe6p-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5fbfd8p-10f, 0.0f, 0.0f,
     0x1.10843ep-29f, 0x1.870aaep-58f, 0.0f, 0.0f, 0x1.08f65cp-18f, 0x1.afd61ep-116f,
     0x1.1216b4p-10f, 0.0f, 0x1.5443eap-73f, 0x1.4657cp-116f, 0x1.8a98dap-92f, 0x1p0f,
     0x1.0960c6p-35f, 0x1.32b8bap-7f, 0x1.3f6452p-17f, 0x1.1cd11p-6f, 0.0f, 0.0f,
     0x1.b948aep-9f, 0x1.abdfbap-105f, 0x1.46fd3ep-76f, 0.0f, 0x1.0882fep-112f,
     0x1.b09a0ep-16f, 0.0f, 0x1.fd3242p-77f, 0.0f, 0x1.6e48f8p-4f, 0x1.0e9c16p-84f,
     0x1.0e13a2p-92f, 0x1.cdb2d2p-29f, 0x1.ec9d8p-102f, 0x1.114676p-69f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3d3bf4p-122f, 0.0f, 0.0f, 0.0f, 0x1.6d297p-57f,
     0x1.e98b42p-27f, 0.0f, 0.0f, 0x1.39ff9cp-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3c2114p-13f, 0x1.030da6p-1f, 0x1.f1c9dep-57f, 0x1.79a4ccp-47f, 0.0f,
     0x1.9fd69cp-118f, 0x1.0e7214p-82f, 0x1.b2f714p-82f, 0x1.23f79p-6f, 0.0f,
     0x1.85a712p-2f, 0.0f, 0x1.f92738p-29f, 0x1.3a58dp-95f, 0.0f, 0.0f,
     0x1.e6ef64p-64f, 0.0f, 0x1.cac118p-63f, 0x1.9bebbp-96f, 0x1.bfe1d8p-122f, 0.0f,
     0x1.3b1b9cp-58f, 0x1.f94a38p-105f, 0.0f, 0.0f, 0x1.4487bep-67f, 0x1.8b1682p-8f,
     0x1.8514eep-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.daf364p-124f, 0.0f, 0.0f, 0.0f,
     0x1.b2098cp-88f, 0.0f, 0x1.3e3e78p-70f, 0.0f, 0x1.77a8c4p-54f, 0x1.5b0e34p-103f,
     0x1.0a8e54p-25f, 0.0f
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
            tmp1 = Sleef_finz_roundf4_kvx(tmp0);
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
    printf("Sleef_finz_roundf4_kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_roundf4_kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
