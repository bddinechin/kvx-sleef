/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_expm1f1_u10purecfma.c --function \
 *     Sleef_finz_expm1f1_u10purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile float external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0.0f, 0x1.f35734p-13f, 0x1.af4c28p-52f, 0x1.2ce014p-41f, 0x1.9e894ap-82f,
     0x1.578cecp-110f, 0x1.938fc2p-9f, 0.0f, 0.0f, 0x1.d3786p-70f, 0.0f,
     0x1.9821fap-86f, 0.0f, 0x1.30e44p-123f, 0x1.e1591p-61f, 0.0f, 0.0f, 0.0f,
     0x1.4e5cccp-20f, 0.0f, 0x1.899a8ep-41f, 0x1.c06b3cp-3f, 0x1.b3c7dcp-18f,
     0x1.c5629ap-113f, 0x1.ca39d2p-53f, 0x1.66dc56p-29f, 0.0f, 0.0f, 0x1.b50582p-82f,
     0.0f, 0x1.c6de38p-97f, 0x1.22ba48p-94f, 0.0f, 0x1.3f5768p-110f, 0.0f,
     0x1.5469d6p-109f, 0x1.49bbdcp-80f, 0x1.8a8f78p-71f, 0x1.b35d18p-6f,
     0x1.9e03c4p-46f, 0x1.cd5322p-103f, 0.0f, 0x1.cace42p-118f, 0x1.f9b7cep-126f,
     0.0f, 0x1.9a96f2p-91f, 0.0f, 0x1.117d84p-122f, 0.0f, 0x1.00ab16p-117f,
     0x1.a521c4p-86f, 0x1.04495p-11f, 0.0f, 0.0f, 0x1.f59a9ap-67f, 0x1.cba756p-122f,
     0x1.5bc1ap-86f, 0x1.7a2198p-68f, 0x1.011a7ep-106f, 0x1.61e2fcp-107f, 0.0f, 0.0f,
     0x1.f5adc8p-104f, 0x1.e7309cp-56f, 0x1.8de31ap-14f, 0x1.7dbbe8p-66f,
     0x1.f39506p-42f, 0x1.01bc8p-9f, 0x1.eec252p-106f, 0x1.c98a56p-48f, 0.0f,
     0x1.cc36dap-61f, 0x1.d6e15ep-62f, 0.0f, 0x1.988ep-24f, 0.0f, 0x1.96744cp-116f,
     0x1.9ae006p-18f, 0x1.95d618p-49f, 0x1.cccaaap-2f, 0x1.c333fp-73f,
     0x1.2c4f8cp-117f, 0.0f, 0.0f, 0.0f, 0x1.6f6ddap-15f, 0.0f, 0x1.7fa71p-78f, 0.0f,
     0x1.3cd392p-21f, 0.0f, 0x1.bd2454p-31f, 0x1.4b5d4p-123f, 0.0f, 0x1.f21048p-5f,
     0x1.68fb0ep-54f, 0x1.d1d06ep-100f, 0.0f, 0x1.2ed17ep-34f, 0.0f, 0.0f, 0.0f,
     0x1.723b5ep-71f, 0x1.4beedp-58f, 0x1.9aed7ap-104f, 0x1.eca0dcp-13f,
     0x1.a61028p-16f, 0.0f, 0.0f, 0.0f, 0x1.cd6ddep-120f, 0x1.248308p-30f, 0.0f,
     0x1.5a17ecp-56f, 0x1.b4d9cap-123f, 0.0f, 0x1.e8dc5p-19f, 0.0f, 0.0f,
     0x1.3c2a38p-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.60343cp-121f, 0x1.abbdbcp-35f,
     0.0f, 0.0f, 0x1.e654d2p-21f, 0.0f, 0x1.265ad8p-124f, 0x1.aa936ep-68f, 0.0f, 0.0f,
     0x1.521f3p-87f, 0.0f, 0x1.02c6dcp-7f, 0.0f, 0.0f, 0x1.73d43ep-56f, 0.0f, 0x1p0f,
     0x1.28eb5p-63f, 0x1.c336b4p-69f, 0.0f, 0.0f, 0.0f, 0x1.b4d924p-107f,
     0x1.871e8ap-108f, 0x1.badca2p-112f, 0.0f, 0x1.5183dp-50f, 0.0f, 0x1.3021ccp-88f,
     0.0f, 0x1.453c58p-94f, 0x1.0ebfbep-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0d3106p-93f,
     0x1.f67aeap-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2530ecp-121f, 0.0f,
     0x1.7b0bd8p-119f, 0x1.4edc9ap-123f, 0x1.67591ep-34f, 0x1.d09c56p-50f, 0.0f,
     0x1.2490e4p-82f, 0x1.295194p-115f, 0x1.eba9d6p-13f, 0x1.ccfa8cp-31f, 0.0f, 0.0f,
     0.0f, 0x1.f74dcap-93f, 0x1.918d78p-99f, 0.0f, 0.0f, 0x1.5c873p-118f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.60353ap-21f, 0.0f, 0x1.292dd6p-90f,
     0x1.aaf284p-50f, 0.0f, 0x1.ae08a6p-70f, 0x1.4fad4p-90f, 0x1.c4c7f2p-75f, 0.0f,
     0x1.5a9eaep-81f, 0x1.b2139ep-94f, 0x1.95b1fcp-72f, 0.0f, 0.0f, 0x1.8024ap-33f,
     0x1.c23196p-118f, 0.0f, 0.0f, 0x1.f02cd4p-3f, 0.0f, 0.0f, 0x1.d6a2dep-5f, 0.0f,
     0x1.dd901ap-72f, 0.0f, 0x1.5f068p-4f, 0x1.c129e2p-84f, 0x1.4232dcp-55f,
     0x1.b56e34p-124f, 0.0f, 0.0f, 0x1.8f18fcp-121f, 0x1.c7560ap-59f, 0.0f, 0x1p0f,
     0x1.12b25ap-76f, 0.0f, 0.0f, 0x1.12b886p-61f, 0.0f, 0x1.674564p-46f, 0.0f,
     0x1.a622fep-16f, 0x1.e67542p-105f, 0x1.ce7342p-33f, 0x1.b24d0ep-110f,
     0x1.97c52ap-49f, 0x1.d1bc2p-112f, 0x1.0f7976p-31f, 0.0f, 0x1.e12f92p-66f,
     0x1.cf6b44p-8f, 0x1.5cef64p-48f, 0.0f, 0x1.e2749ep-83f, 0.0f, 0x1.5779dp-119f,
     0.0f, 0x1.49ecbp-111f, 0x1.6e5b66p-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0a1462p-1f,
     0.0f, 0x1.d93bf2p-34f, 0.0f, 0.0f, 0.0f, 0x1.49688ep-96f, 0.0f, 0x1.06d2fep-26f,
     0.0f, 0x1.c19292p-2f, 0x1.199b2ep-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2e748ep-36f,
     0x1.792182p-29f, 0x1.2160c8p-93f, 0x1.2c4e14p-98f, 0x1.b6617cp-70f, 0.0f,
     0x1.6956fp-31f, 0.0f, 0x1.099ed2p-50f, 0.0f, 0.0f, 0x1.80aef8p-125f,
     0x1.c69e86p-80f, 0x1.919c96p-36f, 0x1.4a1292p-39f, 0x1.ca7c84p-48f, 0.0f, 0.0f,
     0x1.c68ep-59f, 0x1.e8160cp-61f, 0x1.ed2ce8p-26f, 0.0f, 0x1.b6f31p-92f, 0.0f,
     0x1.5a2d3ap-38f, 0x1.16fe24p-7f, 0.0f, 0.0f, 0x1.7e598ap-30f, 0.0f,
     0x1.c8e6e2p-28f, 0x1.499e1p-39f, 0x1.462d7ep-126f, 0.0f, 0.0f, 0.0f,
     0x1.329924p-95f, 0.0f, 0.0f, 0x1.e6599ap-54f, 0.0f, 0.0f, 0x1.7c1abcp-114f,
     0x1.d9e084p-14f, 0x1.6f2c74p-52f, 0x1.364ee2p-110f, 0.0f, 0x1.53173cp-45f, 0.0f,
     0x1.36bb3ep-67f, 0x1.1e0e1ap-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.37255ap-81f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.3ffaa4p-115f, 0.0f, 0x1.d06108p-123f, 0x1.6cd038p-47f,
     0x1.e1f3d4p-123f, 0.0f, 0x1.caccd8p-29f, 0x1.79a606p-24f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9e7e82p-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ce34a4p-99f, 0x1.07d0fp-106f, 0.0f,
     0.0f, 0x1.979d74p-53f, 0x1.5db5dap-8f, 0.0f, 0x1.ad714p-76f, 0x1.5302acp-52f,
     0x1.cee78ep-47f, 0x1.af46bp-38f, 0x1.699e9ep-41f, 0x1.62896ep-61f, 0.0f,
     0x1.a7d03cp-4f, 0x1.2d37fcp-12f, 0x1.71810ep-83f, 0x1.846798p-91f,
     0x1.915164p-17f, 0x1.c7cf94p-92f, 0x1.b421fep-10f, 0x1.12d502p-69f, 0.0f, 0.0f,
     0x1.43916cp-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c11f84p-22f, 0x1.92667ap-93f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dd573ap-21f, 0x1.13a43ap-96f, 0x1.e0e26ep-88f,
     0x1.e83414p-48f, 0x1.647fcep-59f, 0.0f, 0x1.4cc574p-119f, 0.0f, 0x1.f49b94p-76f,
     0x1.d48bdap-86f, 0.0f, 0.0f, 0x1.f67af2p-50f, 0x1.34b7e8p-108f, 0.0f,
     0x1.99e9eep-31f, 0.0f, 0x1.9b760ap-10f, 0x1.543756p-93f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b19bbep-49f, 0x1.c3239cp-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.904566p-98f, 0.0f, 0x1.cd5e54p-4f, 0x1.b69b9p-67f, 0x1.cf0158p-5f,
     0x1.fcb504p-80f, 0x1.e9b80ep-75f, 0x1.7ca9d6p-92f, 0.0f, 0x1.ac075p-59f, 0.0f,
     0x1.ba1feep-50f, 0x1.b780b4p-115f, 0x1.93ca2cp-19f, 0x1.853982p-93f, 0.0f, 0.0f,
     0.0f, 0x1.21dd76p-37f, 0.0f, 0x1.0e85b4p-24f, 0x1.6f55b6p-125f, 0.0f, 0.0f,
     0x1.750904p-43f, 0x1.2f8656p-99f, 0.0f, 0x1.a4e79ep-112f, 0.0f, 0.0f,
     0x1.11f9e8p-87f, 0.0f, 0x1.eba0fep-37f, 0x1.e15fbcp-58f, 0.0f, 0.0f,
     0x1.f9566ep-39f, 0x1.a6c08ap-69f, 0.0f, 0.0f, 0x1.7ac56p-95f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.9a70c6p-100f, 0.0f, 0.0f, 0x1.cc5c86p-27f, 0x1.09efe4p-34f,
     0x1.d98a94p-22f, 0x1.2875f2p-59f, 0.0f, 0x1.47d1bap-100f, 0x1.13cbbap-62f,
     0x1p0f, 0x1.f846d4p-11f, 0x1.e68d72p-66f, 0x1.bc6ap-19f, 0x1.51d9eep-31f, 0.0f,
     0.0f, 0x1.c1e9bap-62f, 0x1.564bep-83f, 0x1.da087cp-65f, 0.0f, 0x1.8ce104p-25f,
     0x1.2b9d88p-44f, 0x1.5132ap-111f, 0.0f, 0x1.3704fp-18f, 0x1.9bcf18p-108f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.5d6a2cp-31f, 0.0f, 0x1.5754cp-33f, 0.0f, 0x1.a3d5a6p-46f,
     0x1.a6d3p-22f, 0.0f, 0x1.f478f4p-104f, 0x1.5842bap-108f, 0.0f, 0x1.e7fp-31f,
     0.0f, 0x1.a0a3f2p-111f, 0x1.29e188p-83f, 0x1.a43568p-118f, 0x1.bfcaap-97f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.481e34p-104f, 0x1.aea34ep-11f, 0x1.1b3978p-63f,
     0x1.cf287cp-17f, 0x1.3dcf08p-46f, 0.0f, 0x1.e4f5b4p-26f, 0x1.fa9188p-48f, 0.0f,
     0.0f, 0.0f, 0x1.8a22b6p-93f, 0.0f, 0x1.66ad9cp-11f, 0.0f, 0.0f, 0.0f,
     0x1.53c394p-80f, 0x1p0f, 0x1.daa81p-15f, 0.0f, 0.0f, 0.0f, 0x1.078872p-40f,
     0x1.29d23ep-19f, 0.0f, 0.0f, 0x1.0c847cp-35f, 0x1.323b84p-20f, 0.0f,
     0x1.04e5e6p-45f, 0x1.fb2014p-112f, 0x1.62345p-59f, 0.0f, 0.0f, 0x1.35724ep-97f,
     0.0f, 0x1.77a008p-29f, 0.0f, 0x1.62cadcp-126f, 0x1.86b286p-11f, 0x1p0f, 0.0f,
     0.0f, 0.0f, 0x1.4a379ap-13f, 0.0f, 0x1.30fdcep-53f, 0.0f, 0.0f, 0.0f,
     0x1.89c624p-88f, 0.0f, 0x1.655fcp-74f, 0x1.b7d54cp-111f, 0.0f, 0.0f,
     0x1.06e2b6p-55f, 0x1.bbea0ap-39f, 0x1.d2c248p-123f, 0x1.d3b504p-63f, 0.0f, 0.0f,
     0.0f, 0x1.6f1738p-42f, 0x1.2b14cap-124f, 0x1.1570ccp-47f, 0x1.4af2aep-122f,
     0x1.bf3414p-64f, 0x1.3ad34ep-114f, 0.0f, 0x1.95deccp-75f, 0x1.b910d6p-91f, 0.0f,
     0.0f, 0.0f, 0x1.91ce12p-75f, 0x1.358deep-13f, 0x1.29ef36p-43f, 0.0f, 0.0f,
     0x1.c88d92p-18f, 0x1.10e096p-43f, 0.0f, 0.0f, 0.0f, 0x1.7012cep-19f,
     0x1.ba3e6ap-73f, 0x1.3de03cp-41f, 0.0f, 0x1.4f9f2ap-20f, 0x1.25178ep-8f, 0.0f,
     0.0f, 0x1.3d413ep-1f, 0.0f, 0.0f, 0x1.31b2fep-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.69c428p-16f, 0x1.f52908p-91f, 0.0f, 0x1.ccd29ep-51f, 0x1.b8651cp-110f,
     0x1.4d06a2p-75f, 0.0f, 0.0f, 0.0f, 0x1.497e5ap-110f, 0.0f, 0.0f, 0.0f,
     0x1.c9802cp-57f, 0x1.bfd4b4p-21f, 0x1.b5801p-12f, 0x1.260384p-89f, 0.0f,
     0x1.a05d68p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e02a48p-57f, 0.0f, 0x1.a99f7ep-17f, 0.0f, 0.0f, 0x1.cc6cdep-108f,
     0x1.3a64bcp-103f, 0.0f, 0x1.424eap-8f, 0x1.530006p-66f, 0.0f, 0x1.85d512p-25f,
     0.0f, 0x1.d084e8p-81f, 0.0f, 0.0f, 0.0f, 0x1.c50892p-18f, 0.0f, 0.0f, 0.0f,
     0x1.e463b2p-99f, 0.0f, 0x1.668b2cp-18f, 0.0f, 0.0f, 0x1.a6a0bap-62f, 0.0f,
     0x1.f3e3c4p-115f, 0.0f, 0.0f, 0x1.fb75bp-45f, 0x1.52fa34p-34f, 0.0f,
     0x1.3d0a34p-106f, 0.0f, 0x1.b4c7aap-2f, 0.0f, 0.0f, 0.0f, 0x1.84ba34p-83f,
     0x1.7d7c08p-84f, 0x1.c24b86p-124f, 0x1.163baep-93f, 0x1.cd2bf6p-126f, 0.0f, 0.0f,
     0.0f, 0x1.22cd24p-114f, 0x1.3fad8ap-83f, 0.0f, 0x1.f2bc32p-79f, 0x1.7cda46p-61f,
     0.0f, 0x1.6cf4bcp-63f, 0x1.d3a28ap-116f, 0x1.f2d776p-55f, 0x1.2d463ep-40f,
     0x1.400846p-103f, 0x1.588b14p-34f, 0.0f, 0x1.d46094p-115f, 0.0f, 0x1.2882fep-50f,
     0x1.603c56p-86f, 0.0f, 0x1.6a8986p-34f, 0.0f, 0.0f, 0.0f, 0x1.c4ba42p-54f,
     0x1.1e2becp-68f, 0.0f, 0.0f, 0.0f, 0x1.cbd128p-82f, 0x1.6eea74p-38f,
     0x1.e2af7p-11f, 0.0f, 0x1.d1a05cp-98f, 0x1.e8ab06p-60f, 0.0f, 0.0f, 0.0f,
     0x1.18a8eep-66f, 0x1.3bb1c8p-75f, 0x1.86c378p-96f, 0.0f, 0.0f, 0x1.5c198p-55f,
     0x1.8e70c8p-96f, 0x1.68d434p-62f, 0.0f, 0.0f, 0x1.720638p-108f, 0.0f, 0.0f,
     0x1.78c8f4p-60f, 0.0f, 0x1.3f59dap-115f, 0.0f, 0x1.780194p-126f, 0x1.e7cp-52f,
     0x1.36e708p-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9475c4p-107f, 0x1.5c0e6ep-87f,
     0x1.7edfbcp-42f, 0.0f, 0x1.b14c88p-106f, 0x1.503ff4p-57f, 0x1.f82632p-92f, 0.0f,
     0x1.f03f7p-1f, 0x1.112a96p-20f, 0.0f, 0x1.bb7ebp-95f, 0.0f, 0.0f,
     0x1.5bb6a6p-78f, 0x1.5f7786p-32f, 0x1.d00fe6p-98f, 0x1.686542p-64f,
     0x1.c26e6cp-28f, 0.0f, 0x1.73b2bep-66f, 0.0f, 0x1.3106d4p-116f, 0x1.e0bfcp-82f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.76eef4p-44f, 0.0f, 0x1.5f86ap-126f,
     0x1.e582d2p-41f, 0.0f, 0x1.8b6c1cp-58f, 0.0f, 0.0f, 0x1.d77118p-36f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.1527p-13f, 0x1.7083bp-109f, 0x1.b1796p-98f, 0.0f,
     0x1.0072b2p-20f, 0.0f, 0.0f, 0x1.d57232p-83f, 0.0f, 0x1.d20adcp-60f,
     0x1.717cc8p-77f, 0.0f, 0.0f, 0x1.b1393p-100f, 0x1.539428p-58f, 0.0f,
     0x1.1f84cap-26f, 0.0f, 0.0f, 0x1.015e2ep-88f, 0x1.93a862p-57f, 0.0f, 0.0f,
     0x1.8ed5d2p-9f, 0.0f, 0x1.0ff86p-93f, 0.0f, 0x1.460eeap-51f, 0.0f, 0.0f, 0.0f,
     0x1.9ee786p-9f, 0.0f, 0.0f, 0x1.3bab6cp-16f, 0x1.c8d7p-100f, 0x1.db1b82p-22f,
     0.0f, 0.0f, 0x1.2e8f74p-106f, 0x1.812e34p-30f, 0x1.030438p-17f, 0.0f,
     0x1.5b447ap-44f, 0x1.e98fc6p-1f, 0x1.2be33ap-109f, 0x1.7a846cp-73f, 0.0f, 0.0f,
     0x1.d73e6cp-74f, 0.0f, 0x1.d34568p-75f, 0.0f, 0.0f, 0x1.08494cp-66f,
     0x1.2c91eap-25f, 0.0f, 0x1.873be4p-34f, 0x1.f03b92p-1f, 0.0f, 0x1.8fe552p-3f,
     0.0f, 0x1.9d6882p-49f, 0.0f, 0.0f, 0.0f, 0x1.968ba4p-82f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.88b714p-80f, 0.0f, 0x1.f0890ap-94f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c125e6p-101f, 0.0f, 0.0f, 0x1.66fa82p-115f, 0.0f, 0x1.8ca72ep-123f, 0.0f,
     0x1.917f48p-94f, 0x1.84b1f2p-81f, 0.0f, 0.0f, 0x1.46238ap-91f, 0.0f, 0.0f, 0.0f,
     0x1.3c25f2p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3fd35ap-70f,
     0x1.cef1p-7f, 0x1.9961aap-31f, 0x1.188a38p-63f, 0.0f, 0x1.533988p-90f,
     0x1.a17d28p-12f, 0.0f, 0x1.1e2bbap-67f, 0.0f, 0.0f, 0.0f, 0x1.8386c8p-74f, 0.0f,
     0x1.30349cp-84f, 0.0f, 0x1.7690b6p-3f, 0x1.166158p-58f, 0.0f, 0x1.36f3f8p-91f,
     0.0f, 0.0f, 0x1.8dc4fcp-109f, 0x1.27a0f4p-15f, 0x1.7e67bep-104f, 0x1.e6f874p-30f,
     0.0f, 0x1.d20a1ep-37f, 0x1.8431p-25f, 0.0f, 0.0f, 0x1.cd8b18p-104f, 0.0f,
     0x1.d1053cp-111f, 0.0f, 0.0f, 0x1.e03e0ap-39f, 0.0f, 0x1.a6f64p-73f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9808b8p-49f, 0x1.3b8816p-54f, 0x1.b0ec58p-102f,
     0x1.0191d8p-12f, 0.0f, 0.0f, 0.0f, 0x1.de49a2p-33f, 0x1.433becp-23f,
     0x1.e400eep-91f, 0x1.8dbb6p-45f, 0.0f, 0.0f, 0x1.8a63ep-85f, 0.0f,
     0x1.dc42f2p-69f, 0.0f, 0.0f, 0x1.63cf3cp-62f, 0x1.a4544ap-58f, 0x1.01277ep-121f,
     0.0f, 0x1.b9bfb8p-17f, 0x1.948622p-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4e335ep-15f,
     0x1.f40114p-102f, 0.0f, 0.0f, 0.0f, 0x1.38dfd8p-71f, 0x1.fe9f32p-44f, 0.0f, 0.0f,
     0.0f, 0x1.6d3c0cp-46f, 0x1.e6835p-117f, 0x1.1fa3b6p-120f, 0.0f, 0.0f, 0.0f,
     0x1.b9d166p-91f, 0x1.03ee84p-118f, 0.0f, 0x1.9841cap-124f, 0x1.1ac5cep-7f, 0.0f,
     0x1.4b3c64p-71f, 0.0f, 0x1.5a922ap-35f, 0x1.a9b464p-24f, 0.0f, 0x1.c246d8p-101f,
     0.0f, 0x1.ebed1p-48f
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
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = 0.0f;
    tmp = __cos_counter_num(0);
    timer = tmp;
    j = INT32_C(0);

    for (;(j < INT32_C(10000));){
        float bench_acc;
        int32_t i;
        float tmp0;
        int32_t tmp1;

        i = INT32_C(0);
        bench_acc = 0.0f;

        for (;(i < INT32_C(1001));){
            float tmp0;
            float tmp1;
            float tmp2;
            int32_t tmp3;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_finz_expm1f1_u10purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = bench_acc + tmp1;
            bench_acc = tmp2;
            tmp3 = i + INT32_C(1);
            i = tmp3;
        }
        tmp0 = global_bench_acc + bench_acc;
        global_bench_acc = tmp0;
        tmp1 = j + INT32_C(1);
        j = tmp1;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_finz_expm1f1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_expm1f1_u10purecfma bench acc %a\n", global_bench_acc);
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
