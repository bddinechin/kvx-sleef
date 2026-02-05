/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_cbrtf1_u10purecfma.c --function \
 *     Sleef_finz_cbrtf1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.0e1c8cp-114f, 0.0f, 0x1.f8e6fap-119f, 0.0f, 0x1.9872e8p-64f, 0.0f,
     0x1.eeffecp-25f, 0x1.3d17eep-24f, 0.0f, 0x1.55f9bep-54f, 0x1.7ad114p-49f,
     0x1.ccb9d6p-72f, 0x1.c58ceep-112f, 0.0f, 0x1.4c0e64p-88f, 0x1.11948ap-34f, 0.0f,
     0.0f, 0x1.e3d7c6p-105f, 0x1.446f4p-62f, 0.0f, 0.0f, 0x1.bb5c3ep-46f, 0.0f,
     0x1.21c082p-82f, 0.0f, 0x1.b5123cp-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.007a92p-107f, 0x1.b7a332p-62f, 0x1.54d9fap-2f, 0.0f, 0.0f, 0.0f,
     0x1.eaa8fep-25f, 0x1.9b3ba4p-84f, 0x1.379ff8p-68f, 0.0f, 0.0f, 0.0f,
     0x1.4f42e2p-118f, 0x1.e0ec8cp-1f, 0x1.c11b08p-71f, 0x1.a703ep-32f,
     0x1.e96876p-79f, 0.0f, 0.0f, 0x1.2b0a4ep-11f, 0x1.bea2e6p-69f, 0.0f,
     0x1.64f574p-94f, 0x1.71a47ap-29f, 0.0f, 0x1.0f53ecp-98f, 0x1.6cef1cp-37f,
     0x1.d6f27ep-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.61a29p-66f, 0x1.293d1ap-99f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c52de6p-57f, 0.0f, 0.0f, 0x1.8793aep-99f,
     0x1.a888c4p-71f, 0x1.c53fcap-90f, 0x1.da10c6p-94f, 0x1.7f501ap-69f, 0.0f, 0.0f,
     0x1.f08fcep-18f, 0x1.bb6d52p-126f, 0.0f, 0.0f, 0x1.76dc34p-47f, 0x1.874222p-18f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.51116ep-57f, 0x1.d95182p-3f, 0.0f, 0.0f, 0.0f,
     0x1.0d4422p-42f, 0x1.ffe8ccp-116f, 0x1.0ff35cp-106f, 0x1.ebe82cp-70f,
     0x1.c522d8p-8f, 0.0f, 0.0f, 0x1.4b6152p-76f, 0x1.28ec22p-122f, 0x1.7e20e4p-31f,
     0x1.d4bc28p-113f, 0x1.256ce8p-87f, 0x1.60967p-126f, 0.0f, 0.0f, 0x1.a83804p-18f,
     0x1.0009a6p-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6e662p-56f, 0.0f, 0x1.97c6cap-50f,
     0x1.c7e824p-106f, 0.0f, 0.0f, 0x1.d73fa2p-96f, 0.0f, 0.0f, 0.0f, 0x1.efa5f8p-62f,
     0x1.9fc4c6p-73f, 0.0f, 0.0f, 0x1.c534dap-76f, 0.0f, 0x1.ca2a12p-88f,
     0x1.79ba8ap-68f, 0.0f, 0.0f, 0x1.301a8ap-114f, 0x1.c93384p-6f, 0.0f, 0.0f,
     0x1.e8fbfp-7f, 0x1.d78edp-2f, 0x1.b13022p-111f, 0x1.4de98ep-98f, 0.0f,
     0x1.b1ad1p-58f, 0x1.ebce0cp-63f, 0x1.e103f4p-26f, 0.0f, 0x1.90f81cp-71f, 0.0f,
     0x1.d473c2p-28f, 0.0f, 0.0f, 0x1.7a60a4p-64f, 0.0f, 0.0f, 0.0f, 0x1.f59068p-102f,
     0x1.5cf0d4p-47f, 0x1.a33646p-103f, 0.0f, 0x1.e2802ap-24f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.95cf7ep-123f, 0x1.910876p-49f, 0x1.e0ca4ep-41f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ce6dc4p-121f, 0x1.a4550ap-14f, 0.0f, 0x1.f3de4cp-6f, 0.0f, 0x1.ed3bbep-41f,
     0x1.7f2d56p-6f, 0.0f, 0x1.a8e75cp-97f, 0.0f, 0.0f, 0.0f, 0x1.529bc4p-33f, 0.0f,
     0x1.3e31dap-54f, 0x1.49473p-89f, 0x1.46577ap-32f, 0x1.0bd28p-58f,
     0x1.d45e6ep-10f, 0x1.21fd9ap-46f, 0x1.93105cp-70f, 0.0f, 0x1.b5cd26p-74f, 0.0f,
     0x1.1e65cep-61f, 0.0f, 0.0f, 0.0f, 0x1.782304p-20f, 0x1.5538b4p-28f, 0.0f,
     0x1.950f64p-122f, 0.0f, 0.0f, 0x1.40a52cp-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.caa0fep-54f, 0x1.40006ap-76f, 0.0f, 0x1.829d7ep-114f,
     0x1.a83c5p-30f, 0.0f, 0x1.530214p-14f, 0.0f, 0x1.0fb46ep-72f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.6dbd7ep-39f, 0.0f, 0x1.208d2ap-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.09d792p-23f, 0.0f, 0x1.a5cb8p-69f, 0x1.0d995p-125f,
     0x1.dc5ed2p-70f, 0x1.f76c4cp-125f, 0x1.9b6022p-123f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6bdb56p-3f, 0x1.c2f6d4p-97f, 0x1.0a91c6p-117f, 0.0f, 0.0f, 0x1.df290cp-87f,
     0.0f, 0x1.2adb6p-52f, 0x1.870ce4p-82f, 0x1.888008p-61f, 0x1.475c6ep-4f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.99f96p-66f, 0.0f, 0.0f, 0x1.4ec74ap-49f,
     0x1.bd951cp-54f, 0.0f, 0x1.56eecp-110f, 0x1.d55414p-24f, 0.0f, 0.0f, 0.0f,
     0x1.f9ad22p-85f, 0.0f, 0x1.5b7ecep-125f, 0.0f, 0.0f, 0x1.a01f26p-110f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.4e5ceap-19f, 0.0f, 0.0f, 0.0f, 0x1.c02a7ep-57f,
     0x1.3ad87ap-111f, 0.0f, 0.0f, 0.0f, 0x1.4cff3cp-88f, 0x1.8d3faep-92f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.296fa6p-41f, 0x1.e1c7dcp-77f, 0.0f, 0x1.be3476p-83f,
     0x1.090f54p-106f, 0.0f, 0x1.d64c18p-50f, 0x1.2d030cp-61f, 0x1.7067a6p-99f,
     0x1.c3a198p-123f, 0x1.f767f8p-20f, 0x1.329536p-66f, 0.0f, 0x1.d843fp-117f, 0.0f,
     0.0f, 0x1.b4e682p-123f, 0x1.9159bp-23f, 0x1.d7d948p-53f, 0.0f, 0.0f,
     0x1.977c4ep-121f, 0x1.43f01p-117f, 0x1.4125a4p-32f, 0.0f, 0.0f, 0.0f,
     0x1.246572p-13f, 0x1.b4edacp-62f, 0.0f, 0.0f, 0x1.40b1bep-20f, 0x1.444958p-46f,
     0x1.c1cb4p-104f, 0x1.15b2dep-94f, 0.0f, 0x1.5a88eap-109f, 0.0f, 0x1.8ca3cap-112f,
     0x1.2fd938p-59f, 0.0f, 0.0f, 0.0f, 0x1.2fa2b4p-30f, 0x1.eaa742p-79f, 0.0f,
     0x1.51ae24p-90f, 0x1.586bb2p-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dbde36p-69f, 0.0f,
     0x1.0a14bcp-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e0090cp-39f,
     0x1.ada516p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.07460cp-115f, 0x1.8bbbbp-46f,
     0x1.9df7ecp-87f, 0.0f, 0.0f, 0x1.e09e4ap-30f, 0.0f, 0x1.a51616p-65f,
     0x1.49216cp-84f, 0.0f, 0.0f, 0x1.d9d574p-84f, 0.0f, 0.0f, 0.0f, 0x1.e56d8p-1f,
     0.0f, 0.0f, 0.0f, 0x1.66350ep-112f, 0.0f, 0.0f, 0x1.2e42bp-76f, 0.0f,
     0x1.994b26p-29f, 0x1.3f118cp-6f, 0.0f, 0x1.bcb544p-31f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.68d174p-1f, 0x1.d807f4p-61f,
     0x1.9a7414p-24f, 0.0f, 0x1.a4bba4p-50f, 0.0f, 0.0f, 0x1.edc3e8p-21f,
     0x1.affd22p-32f, 0x1.ab95c2p-9f, 0.0f, 0x1.886eeep-6f, 0x1.3d78d2p-125f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f8f084p-2f, 0x1.2f1846p-64f, 0.0f, 0.0f,
     0x1.bf435ap-106f, 0x1.57653p-120f, 0.0f, 0.0f, 0.0f, 0x1.9f87a2p-31f,
     0x1.0fa082p-19f, 0.0f, 0.0f, 0.0f, 0x1.ad1c8p-25f, 0x1.e4c80cp-110f, 0.0f, 0.0f,
     0x1.05db5ep-40f, 0x1.d358e6p-15f, 0x1.c34dd8p-37f, 0x1.d2d55p-18f,
     0x1.5a12dap-102f, 0.0f, 0x1.a7bbdep-71f, 0x1.cb0478p-83f, 0x1.2e4ddap-94f,
     0x1.28d5fep-45f, 0.0f, 0.0f, 0x1.5966d2p-90f, 0x1.b4fb9p-31f, 0.0f,
     0x1.2c2e7ap-11f, 0x1.a8bfacp-109f, 0x1.013888p-50f, 0x1.132b6cp-60f, 0.0f,
     0x1.5b4508p-117f, 0.0f, 0.0f, 0.0f, 0x1.d01608p-8f, 0x1.e825f4p-47f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.1b665ep-3f, 0.0f, 0.0f, 0x1.64008p-62f, 0.0f, 0.0f,
     0.0f, 0x1.250fcp-97f, 0x1.705b52p-103f, 0.0f, 0.0f, 0x1.6aa37ap-1f, 0.0f, 0.0f,
     0.0f, 0x1.f1335ap-112f, 0x1.ecba36p-110f, 0.0f, 0x1.01548p-75f, 0x1.33ce7ep-47f,
     0.0f, 0x1.4f631ap-8f, 0x1.80bf92p-63f, 0.0f, 0.0f, 0x1.ad7138p-49f,
     0x1.17a8fep-12f, 0.0f, 0x1.d0f59ap-117f, 0.0f, 0.0f, 0x1.27c93p-78f,
     0x1.9a13fcp-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fc5244p-39f, 0.0f, 0x1.a66f06p-70f,
     0x1.131f58p-22f, 0.0f, 0x1.0e9a4ap-108f, 0x1.dc6f98p-110f, 0.0f, 0x1.a0cb52p-28f,
     0.0f, 0x1.68ff4p-55f, 0x1.d95ebep-69f, 0.0f, 0x1.3cadd6p-95f, 0x1.a1c2cap-52f,
     0x1.be24dep-86f, 0x1.969814p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.605eeep-15f, 0.0f,
     0.0f, 0x1.fd7f48p-8f, 0x1.d1d27ap-66f, 0.0f, 0.0f, 0x1.578ef6p-96f,
     0x1.79e47ep-88f, 0.0f, 0x1.b8be5cp-100f, 0.0f, 0x1.fdb20ap-125f, 0.0f, 0.0f,
     0.0f, 0x1.3d351ap-64f, 0x1.a149d6p-75f, 0.0f, 0x1.2eb8aep-119f, 0x1.b662bep-23f,
     0x1.0c514ep-1f, 0x1.5fd37ap-49f, 0.0f, 0x1.943e8cp-71f, 0x1.c7da78p-126f, 0.0f,
     0.0f, 0.0f, 0x1.85ce5p-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6780b6p-34f, 0.0f,
     0x1.138bp-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b38c1ep-62f, 0x1.1c0d68p-79f,
     0x1.dd5636p-42f, 0.0f, 0.0f, 0x1.c62e52p-29f, 0.0f, 0.0f, 0x1.0b351ap-50f,
     0x1.5e7956p-12f, 0x1.0eb636p-120f, 0.0f, 0.0f, 0.0f, 0x1.da2912p-17f,
     0x1.de833p-39f, 0.0f, 0.0f, 0x1.115ffap-103f, 0x1.1049e8p-75f, 0.0f,
     0x1.aa714cp-68f, 0x1.7edf6cp-29f, 0.0f, 0.0f, 0x1.6662cap-63f, 0x1.043b66p-10f,
     0.0f, 0x1.7afccap-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.307264p-100f, 0x1.23ba46p-91f,
     0x1.ce734ep-54f, 0.0f, 0x1.132784p-70f, 0x1.999c84p-83f, 0x1.655f64p-125f, 0.0f,
     0x1.a171cp-46f, 0.0f, 0.0f, 0x1.43ffb8p-37f, 0x1.e4f02ep-73f, 0x1.38432ep-94f,
     0x1.0f8a88p-9f, 0x1.c0ce3ep-58f, 0x1.4fef66p-75f, 0x1.53f70ap-66f, 0.0f, 0.0f,
     0x1.acd0dcp-26f, 0.0f, 0x1.10edacp-126f, 0x1.e9fb1ap-21f, 0.0f, 0.0f,
     0x1.56a0dep-78f, 0.0f, 0.0f, 0x1.bff1eep-55f, 0.0f, 0x1.242706p-88f, 0.0f,
     0x1.09707cp-70f, 0x1.214f7cp-48f, 0x1.3f566ap-69f, 0x1.9df322p-58f,
     0x1.4b2242p-96f, 0x1.d2c7d4p-26f, 0.0f, 0.0f, 0x1.edd7eep-104f, 0x1.07c6f4p-71f,
     0.0f, 0x1.7c094cp-55f, 0.0f, 0.0f, 0.0f, 0x1.e16938p-96f, 0x1.52ca32p-74f, 0.0f,
     0x1.c54234p-23f, 0.0f, 0.0f, 0x1.ed8d3ap-118f, 0x1.a5cafcp-118f,
     0x1.8084f4p-102f, 0x1.91cc3p-120f, 0x1.3d4p-45f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.65a92ap-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.00e12ap-107f,
     0.0f, 0x1.dfd754p-105f, 0x1.314dfp-77f, 0.0f, 0.0f, 0x1.1587c2p-99f, 0.0f, 0.0f,
     0x1.b64106p-8f, 0x1.84f956p-64f, 0x1.789284p-45f, 0.0f, 0x1.7fa83ep-49f, 0.0f,
     0x1.f1cf16p-61f, 0.0f, 0.0f, 0x1.655926p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.35debp-35f, 0x1.23d87ap-78f, 0.0f, 0x1.4ce49cp-20f, 0x1.ebf14ep-88f, 0.0f,
     0.0f, 0.0f, 0x1.707764p-6f, 0.0f, 0.0f, 0x1.f3b9fp-16f, 0.0f, 0x1.fabf2p-16f,
     0x1.f45ee8p-15f, 0x1.9ac346p-19f, 0x1.c81924p-65f, 0x1.2c2252p-77f,
     0x1.dd2946p-59f, 0.0f, 0x1.d5f0acp-84f, 0x1.7d8c7ap-17f, 0.0f, 0x1.1c5276p-112f,
     0.0f, 0.0f, 0x1.96599p-3f, 0x1.a43e18p-104f, 0.0f, 0.0f, 0x1.a75632p-126f,
     0x1.888292p-6f, 0x1.e6a83cp-34f, 0x1.cbfc02p-126f, 0x1.669c8cp-99f, 0.0f,
     0x1.4e588ep-120f, 0.0f, 0.0f, 0x1.214e08p-78f, 0.0f, 0x1.d5b8eap-97f,
     0x1.dcfe48p-6f, 0.0f, 0.0f, 0.0f, 0x1.bf3b68p-45f, 0.0f, 0.0f, 0x1.242904p-124f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b494f8p-45f, 0.0f, 0x1.0eb55p-41f, 0x1.e84d22p-9f,
     0x1.25bffp-98f, 0x1.2a6f3ep-7f, 0.0f, 0.0f, 0x1.14f11ep-112f, 0.0f, 0.0f, 0.0f,
     0x1.333918p-30f, 0.0f, 0x1.8304dp-92f, 0x1.456636p-100f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.8d63cap-73f, 0.0f, 0x1.2e03aap-110f, 0.0f, 0.0f, 0x1.6d96p-92f,
     0x1.f43c98p-33f, 0.0f, 0.0f, 0.0f, 0x1.1e615ep-110f, 0.0f, 0.0f, 0.0f,
     0x1.faf96ep-121f, 0x1.3b3a1cp-100f, 0x1.9c6282p-27f, 0x1.69442p-11f,
     0x1.1c4306p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.57a88cp-38f, 0x1.928c14p-115f,
     0x1.8f59cap-75f, 0x1.5b02d4p-37f, 0x1.7fd37p-26f, 0x1.6eaf84p-18f,
     0x1.da17a8p-35f, 0.0f, 0x1.00016p-28f, 0x1.139142p-36f, 0.0f, 0.0f,
     0x1.8e3364p-111f, 0x1.7806fp-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9daafcp-27f, 0.0f,
     0x1.071cf4p-79f, 0.0f, 0x1.1657ccp-85f, 0.0f, 0.0f, 0.0f, 0x1.5f8466p-70f, 0.0f,
     0.0f, 0.0f, 0x1.1ae034p-47f, 0.0f, 0x1.789d96p-101f, 0x1.fc60cep-85f,
     0x1.962cbep-61f, 0x1.9df3ep-59f, 0x1.9f15b2p-45f, 0x1.15a588p-119f,
     0x1.2c64a8p-5f, 0x1.efe5fep-8f, 0.0f, 0.0f, 0x1.49b95p-5f, 0x1.b5c052p-105f,
     0.0f, 0x1.7e7d38p-1f, 0x1.6c648ap-2f, 0x1.e7170ap-19f, 0x1.c6f0a8p-90f,
     0x1.d056fap-53f, 0x1.6568e4p-15f, 0.0f, 0.0f, 0x1.9145ep-111f, 0.0f,
     0x1.5798eep-94f, 0x1.d837d4p-47f, 0.0f, 0.0f, 0x1.48562ap-28f, 0.0f, 0.0f,
     0x1.b0ce42p-69f, 0x1.b6ead8p-85f, 0.0f, 0x1.80dd9p-1f, 0x1.d696eep-29f, 0.0f,
     0.0f, 0x1.868d94p-45f, 0x1.2978c8p-95f, 0x1.4c65eep-82f, 0.0f, 0.0f, 0.0f,
     0x1.336b48p-63f, 0x1.c9f07cp-101f, 0.0f, 0x1.ac0bdcp-12f, 0x1.2cc04cp-60f,
     0x1.f449dap-94f, 0.0f, 0.0f, 0.0f, 0x1.1a4652p-47f, 0x1.0fd826p-119f,
     0x1.9908eep-50f, 0.0f, 0x1.308654p-58f, 0x1.4d4bd8p-32f, 0.0f, 0x1.666d1p-6f,
     0.0f, 0.0f, 0x1.7f4548p-81f, 0x1.ef636p-125f, 0x1.55ca84p-63f, 0.0f,
     0x1.40fbc6p-70f, 0x1.80dd7cp-30f, 0x1.211694p-17f, 0.0f, 0x1.3dcc06p-94f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.af900ap-2f, 0.0f, 0.0f, 0x1.7cd6ep-19f, 0.0f, 0.0f, 0.0f,
     0x1.f894d4p-5f, 0x1.d535a6p-112f, 0x1.1c075ap-49f, 0x1.ff754cp-92f,
     0x1.5f6f5ap-100f, 0x1.fb57dcp-90f, 0.0f, 0.0f, 0x1.964554p-107f, 0x1.5049bcp-53f,
     0.0f, 0x1.4a9764p-20f, 0.0f, 0.0f, 0x1.6b679ep-91f, 0x1.ed6908p-113f, 0.0f,
     0x1.95b4f8p-50f, 0.0f, 0x1.cebcb8p-106f, 0x1.0927bep-36f, 0x1.12658p-5f, 0.0f,
     0.0f, 0x1.87eaeep-76f, 0x1.9e8d3ap-105f, 0.0f, 0.0f, 0x1.71634cp-103f, 0.0f,
     0x1.939f9p-36f, 0.0f, 0.0f, 0x1.96201p-63f, 0.0f, 0.0f, 0x1.c8d73cp-8f, 0.0f,
     0x1.33c5eap-28f, 0x1.8da932p-120f, 0.0f, 0.0f, 0x1.c54a0ep-73f, 0.0f, 0.0f,
     0x1.73bf0ep-35f, 0x1.b12272p-108f, 0.0f, 0x1.0c6d5p-42f, 0x1.127e2ep-20f, 0.0f,
     0x1.f344eep-118f, 0x1.dc8e08p-70f, 0.0f, 0x1.d00d9ap-116f, 0x1.99f5ep-87f,
     0x1.e17536p-34f, 0x1.b1e9acp-60f, 0.0f, 0.0f, 0.0f, 0x1.690a68p-28f,
     0x1.557df2p-55f, 0.0f, 0.0f, 0x1.aa7e28p-72f, 0.0f, 0x1.f8f4b6p-106f, 0.0f,
     0x1.b9810ap-58f, 0x1.dea55cp-68f, 0x1.e6096ep-124f, 0.0f, 0x1.c78cb8p-39f,
     0x1.4a31dep-83f, 0x1.edf868p-97f, 0.0f, 0.0f, 0.0f
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
            tmp1 = Sleef_finz_cbrtf1_u10purecfma(tmp0);
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
    printf("Sleef_finz_cbrtf1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_cbrtf1_u10purecfma bench acc %a\n", global_bench_acc);
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
