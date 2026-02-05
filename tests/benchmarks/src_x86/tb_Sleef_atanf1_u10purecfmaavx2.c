/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_atanf1_u10purecfma.c --function \
 *     Sleef_atanf1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.164bf4p-21f, 0.0f, 0.0f, 0x1.77e8d8p-42f,
     0x1.e3796ep-97f, 0x1.ca3fdp-119f, 0x1.6b89eep-7f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fb4188p-22f, 0.0f, 0x1.d5612ep-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d0ac1ep-42f,
     0.0f, 0x1.ce7e48p-54f, 0x1.d428ep-59f, 0.0f, 0.0f, 0.0f, 0x1.2d6ca8p-60f, 0.0f,
     0.0f, 0x1.756664p-97f, 0x1.672b36p-126f, 0x1.a7c24ep-53f, 0x1.5bd4b8p-47f, 0.0f,
     0.0f, 0x1.c61b2ap-29f, 0x1.4771a2p-48f, 0x1.6b96f2p-67f, 0.0f, 0x1.d474dap-85f,
     0x1.e76c0ap-57f, 0x1.46784ep-49f, 0x1.bc3d4p-26f, 0.0f, 0.0f, 0x1.0c096ap-94f,
     0x1.413f24p-91f, 0x1.232efap-77f, 0x1.f03738p-57f, 0.0f, 0.0f, 0x1.213408p-89f,
     0.0f, 0x1.ded906p-55f, 0x1.4a4f8ep-85f, 0.0f, 0.0f, 0x1.9ff1eap-4f,
     0x1.fc435ap-86f, 0x1.757756p-24f, 0x1.55f10cp-27f, 0.0f, 0x1.d68c72p-42f, 0.0f,
     0x1.f2b7d8p-19f, 0.0f, 0.0f, 0x1.a1a738p-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.af0468p-6f, 0.0f, 0x1.20ded8p-67f, 0.0f, 0x1.6177f8p-102f, 0.0f, 0.0f,
     0.0f, 0x1.4d767cp-19f, 0x1.3fefd8p-95f, 0.0f, 0.0f, 0.0f, 0x1.55851ep-45f, 0.0f,
     0x1.11c00cp-17f, 0.0f, 0x1.0252bp-124f, 0.0f, 0.0f, 0.0f, 0x1.039056p-119f,
     0x1.e3bdbp-75f, 0.0f, 0x1.61d04ep-62f, 0x1.94de86p-98f, 0x1.18aec6p-68f,
     0x1.3a6d6ap-1f, 0.0f, 0.0f, 0.0f, 0x1.3bfc44p-1f, 0.0f, 0x1.98e9fap-46f,
     0x1.1d228ap-121f, 0.0f, 0x1.7cc2b4p-39f, 0x1.c42ea4p-117f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.fa2136p-120f, 0.0f, 0.0f, 0.0f, 0x1.4bec84p-59f, 0.0f, 0.0f,
     0x1.1be07ap-107f, 0x1.d135c4p-67f, 0x1.56a92ap-24f, 0x1.95f77ep-42f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c6aea4p-71f, 0x1.3de6d2p-78f, 0.0f, 0x1.a23116p-116f, 0.0f,
     0.0f, 0x1.4e8c7p-36f, 0x1.e1da8p-51f, 0x1.314026p-67f, 0x1.6b8caep-57f, 0.0f,
     0x1.8bcb78p-88f, 0x1.7c229ep-65f, 0.0f, 0.0f, 0x1.15476cp-76f, 0.0f,
     0x1.d20bdap-36f, 0x1.c2a57cp-52f, 0x1.8d9cd6p-14f, 0x1.35daaep-31f,
     0x1.bdb9d2p-94f, 0x1.5eb07ep-96f, 0x1.773d3p-17f, 0x1.aab586p-60f, 0.0f,
     0x1.212826p-19f, 0x1.996edep-113f, 0.0f, 0.0f, 0x1.868596p-29f, 0.0f, 0.0f, 0.0f,
     0x1.d6a864p-63f, 0.0f, 0x1.76bdf4p-55f, 0.0f, 0.0f, 0x1.69664cp-56f,
     0x1.c20f52p-69f, 0.0f, 0x1.db3514p-77f, 0.0f, 0x1.818026p-113f, 0x1.d0081cp-96f,
     0x1.caae58p-79f, 0x1.0fe5dap-87f, 0x1.ec2fdp-80f, 0.0f, 0.0f, 0.0f,
     0x1.2f1084p-52f, 0x1.5a47fep-12f, 0x1.98b19ap-89f, 0.0f, 0.0f, 0x1.90e3a4p-91f,
     0x1.b8acd8p-86f, 0.0f, 0x1.7e4a54p-19f, 0x1.6e0f74p-24f, 0.0f, 0x1.cdc6fcp-39f,
     0.0f, 0.0f, 0.0f, 0x1.ae291ep-77f, 0x1.0f1592p-88f, 0.0f, 0x1.e0b296p-2f,
     0x1.2bb62p-52f, 0x1.0bd3d6p-25f, 0x1.4f260ep-76f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7f6acp-47f, 0.0f, 0x1.5003a4p-90f, 0.0f, 0x1.d1729cp-18f, 0x1.805efap-61f,
     0.0f, 0x1.336776p-44f, 0.0f, 0.0f, 0.0f, 0x1.c7d27p-114f, 0.0f, 0.0f, 0.0f,
     0x1.deadfap-83f, 0x1.f46d28p-32f, 0.0f, 0x1.d79facp-10f, 0x1.4cdbfp-111f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.04cfb2p-114f, 0.0f, 0.0f, 0x1.d19504p-119f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.dedc2p-4f, 0.0f, 0x1.2f8ad2p-33f, 0x1.3d091p-41f,
     0.0f, 0.0f, 0.0f, 0x1.4bd2c8p-109f, 0x1.0c410cp-119f, 0x1.fb8a6ep-19f, 0.0f,
     0.0f, 0.0f, 0x1.a0b128p-61f, 0.0f, 0x1.414a5cp-21f, 0x1.edb488p-87f,
     0x1.939eaep-36f, 0x1.2d4fccp-81f, 0x1.2e7cf6p-110f, 0x1.088508p-80f,
     0x1.4042ep-25f, 0x1.e1f86cp-81f, 0x1.c0302p-94f, 0.0f, 0.0f, 0x1.439d96p-50f,
     0x1.4216cap-9f, 0.0f, 0.0f, 0.0f, 0x1.394f8ap-103f, 0.0f, 0.0f, 0x1.6e85d8p-60f,
     0x1.0a2932p-31f, 0x1.20c8dep-79f, 0.0f, 0.0f, 0x1.9b2494p-82f, 0.0f,
     0x1.c0022cp-51f, 0.0f, 0.0f, 0x1.5d653ep-19f, 0x1.a15f16p-63f, 0x1.2bd026p-106f,
     0x1.4ef3cap-68f, 0x1.0c017ep-92f, 0x1.2fcd92p-51f, 0.0f, 0x1.120f36p-122f, 0.0f,
     0x1.175846p-122f, 0.0f, 0x1.999634p-93f, 0.0f, 0.0f, 0.0f, 0x1.e48beep-95f,
     0x1.249af4p-38f, 0x1.162054p-17f, 0x1.03098ep-36f, 0x1.5a4dc2p-56f,
     0x1.8c269cp-117f, 0.0f, 0x1.d344dcp-113f, 0.0f, 0.0f, 0.0f, 0x1.e0d552p-95f,
     0x1.add3b2p-73f, 0x1.b41848p-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bbbdd2p-59f, 0.0f,
     0.0f, 0x1.5fe0e2p-48f, 0x1.28375p-94f, 0.0f, 0.0f, 0.0f, 0x1.0b454ap-81f,
     0x1.a551c8p-103f, 0x1.7a6f4ep-31f, 0x1.db884p-37f, 0x1.918fd4p-48f,
     0x1.7193fep-79f, 0x1.a0699cp-27f, 0x1.eb89dp-90f, 0x1.00d41p-46f, 0x1.b91f7p-56f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7c8b34p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ef5e04p-25f, 0.0f, 0x1.5459eep-86f, 0.0f, 0.0f, 0x1.a995e2p-69f, 0.0f, 0.0f,
     0x1.7cad0ep-32f, 0x1.5d8936p-10f, 0.0f, 0x1.ae1c0ap-22f, 0.0f, 0.0f,
     0x1.50fa74p-59f, 0.0f, 0.0f, 0.0f, 0x1.f86afcp-17f, 0.0f, 0.0f, 0x1.421ab8p-15f,
     0x1.85a21ep-71f, 0x1.b8ed18p-120f, 0.0f, 0x1.470198p-123f, 0x1.12f9c6p-68f,
     0x1.de1c2cp-48f, 0x1.f8a90ap-78f, 0.0f, 0.0f, 0x1.ba3aacp-39f, 0x1.a53fcep-63f,
     0.0f, 0x1.440644p-102f, 0.0f, 0.0f, 0x1.78a9cep-35f, 0.0f, 0x1.ac18d8p-120f,
     0.0f, 0x1.d0a80ap-106f, 0.0f, 0x1.7f7d6cp-8f, 0x1.407944p-101f, 0.0f, 0.0f, 0.0f,
     0x1.461c88p-124f, 0x1.144d34p-105f, 0.0f, 0x1.616fccp-25f, 0x1.f92cdp-115f, 0.0f,
     0.0f, 0.0f, 0x1.29093p-59f, 0.0f, 0.0f, 0x1.b2cd9ap-6f, 0x1.bc1bf8p-13f, 0.0f,
     0x1.25258cp-63f, 0.0f, 0x1.df9538p-8f, 0.0f, 0.0f, 0.0f, 0x1.32349ep-114f,
     0x1.c281a6p-67f, 0.0f, 0.0f, 0x1.72073ap-15f, 0x1.5e63ep-34f, 0.0f,
     0x1.efa388p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9238c8p-8f, 0x1.f85bep-81f,
     0x1.6c287ep-45f, 0x1.82c23ap-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.44e17cp-122f,
     0.0f, 0.0f, 0x1.8a3aa6p-109f, 0.0f, 0x1.ac93a4p-32f, 0x1.f587ap-40f,
     0x1.b4caf6p-3f, 0x1.30b822p-40f, 0.0f, 0x1.711538p-10f, 0.0f, 0x1.61a5p-45f,
     0.0f, 0.0f, 0x1.9d4982p-84f, 0x1.037858p-83f, 0.0f, 0x1.11869cp-68f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.676568p-13f, 0.0f, 0.0f, 0x1.c8019ap-71f, 0.0f, 0x1.b22136p-39f,
     0.0f, 0.0f, 0.0f, 0x1.482a28p-9f, 0x1.d0f0a6p-114f, 0.0f, 0x1.1ca35ep-97f,
     0x1.18369p-12f, 0x1.ac9f6cp-38f, 0x1.2d5e0cp-101f, 0.0f, 0x1.2ba4ccp-24f,
     0x1.37a14p-15f, 0.0f, 0x1.84ef28p-81f, 0x1.57dbd4p-46f, 0x1.de9572p-98f, 0.0f,
     0.0f, 0.0f, 0x1.b9f9aep-98f, 0x1.b3d108p-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f,
     0.0f, 0.0f, 0x1.99f93p-48f, 0x1.fae11p-79f, 0x1.17f8d6p-88f, 0x1.1c797cp-75f,
     0x1.110e66p-79f, 0.0f, 0.0f, 0x1.52856p-30f, 0x1.028864p-41f, 0x1.b2565cp-110f,
     0x1.833e62p-55f, 0x1.3252fap-106f, 0x1.05348p-102f, 0.0f, 0x1.f8d628p-25f, 0.0f,
     0.0f, 0x1.e827b4p-45f, 0.0f, 0x1.8c0cfp-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6628ecp-14f, 0.0f, 0x1.f63e38p-68f, 0.0f, 0x1.0ae09p-99f, 0.0f, 0.0f,
     0x1.f67c44p-23f, 0x1.3adaeap-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1794eap-65f, 0.0f,
     0x1.b21316p-75f, 0.0f, 0x1.92898ap-51f, 0.0f, 0.0f, 0x1.4a77p-99f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1p0f, 0x1.675898p-107f, 0.0f, 0.0f, 0x1.180d2cp-65f, 0.0f, 0.0f,
     0x1.2b7752p-68f, 0.0f, 0x1.630c9ep-84f, 0.0f, 0x1.619f8ep-6f, 0.0f,
     0x1.4f55f4p-111f, 0.0f, 0x1.22177ap-25f, 0x1.ea2e76p-72f, 0.0f, 0x1.c54c0ep-60f,
     0x1.83fa22p-31f, 0.0f, 0.0f, 0.0f, 0x1.9fa61p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.85ba28p-103f, 0x1.3671e2p-58f, 0.0f, 0x1.c268fap-51f, 0.0f,
     0x1.5df92p-26f, 0.0f, 0.0f, 0x1.9aa502p-16f, 0x1.93e7f8p-68f, 0x1.d71208p-9f,
     0x1.1be9cap-107f, 0x1.a7fbf6p-123f, 0.0f, 0x1.3e9ecep-21f, 0.0f, 0x1.91b4cp-94f,
     0.0f, 0x1.a5778ep-69f, 0x1.6e04fep-104f, 0x1.f49cd2p-126f, 0x1.86a506p-60f, 0.0f,
     0x1.4cd244p-60f, 0.0f, 0x1.ea8bdep-68f, 0x1.e32edap-7f, 0x1.750e36p-58f, 0.0f,
     0.0f, 0x1.e059bp-68f, 0.0f, 0.0f, 0x1.363f56p-5f, 0x1.8facdap-96f,
     0x1.5ccafp-42f, 0x1.718f5p-120f, 0x1.e38a36p-31f, 0x1.b1049p-91f, 0.0f,
     0x1.710714p-27f, 0x1.d4eb62p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d485a8p-72f, 0.0f,
     0x1.4bb96p-75f, 0.0f, 0x1.5e3182p-56f, 0.0f, 0.0f, 0x1.a2c1d6p-86f, 0.0f, 0.0f,
     0x1.cbbc46p-57f, 0x1.407e32p-37f, 0.0f, 0x1.5ca416p-17f, 0.0f, 0x1.d3c53ap-90f,
     0.0f, 0x1.35d32ep-116f, 0.0f, 0x1.e7c05ap-93f, 0x1.9efbeap-61f, 0x1.1bb99cp-47f,
     0x1.fe984p-24f, 0x1.cc5beep-39f, 0x1.5e744ep-125f, 0x1.83cp-56f, 0x1.998d9p-75f,
     0x1.437b52p-32f, 0.0f, 0.0f, 0x1.9478aap-122f, 0.0f, 0.0f, 0.0f, 0x1.d67c5ep-30f,
     0.0f, 0x1.1e111ep-123f, 0x1.1adb14p-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.937a78p-86f,
     0x1.a2f3cap-47f, 0x1.8a19a8p-120f, 0x1.d9fe44p-20f, 0x1.bae428p-48f, 0.0f, 0.0f,
     0.0f, 0x1.2a933cp-103f, 0x1.d685aap-52f, 0.0f, 0x1.d66b26p-10f, 0x1.98990ep-2f,
     0x1.2f109ap-39f, 0.0f, 0.0f, 0x1.31b808p-92f, 0.0f, 0x1.1cbd2ap-6f,
     0x1.4f9d46p-115f, 0x1.545406p-105f, 0x1.d82cdp-64f, 0x1.6390d2p-10f,
     0x1.0bcb78p-4f, 0.0f, 0.0f, 0x1.9054d4p-91f, 0x1.20a27ep-104f, 0x1.cf0414p-69f,
     0x1.231ad2p-18f, 0x1.0c68e6p-123f, 0x1.3ca9d8p-32f, 0.0f, 0x1.379ebap-27f,
     0x1.dd5232p-40f, 0x1.26199p-27f, 0x1.b04cc4p-22f, 0x1.f159cap-35f,
     0x1.c1479p-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c0ffecp-104f, 0.0f,
     0x1.7cf594p-118f, 0x1.a47d46p-86f, 0.0f, 0.0f, 0.0f, 0x1.fffef2p-37f, 0.0f,
     0x1.66e0f8p-102f, 0.0f, 0x1.390942p-94f, 0.0f, 0x1.e5de94p-2f, 0.0f, 0.0f, 0.0f,
     0x1.10a084p-32f, 0x1.52593ep-91f, 0.0f, 0x1.5a2aa4p-43f, 0.0f, 0.0f, 0.0f,
     0x1.e2d7f4p-75f, 0x1.9d87fep-80f, 0.0f, 0x1.bcbfcap-51f, 0.0f, 0x1.346552p-84f,
     0.0f, 0.0f, 0x1.06452p-37f, 0x1.445368p-52f, 0.0f, 0x1.49b24p-9f, 0.0f,
     0x1.642f7ep-15f, 0x1.3b48b2p-100f, 0.0f, 0x1.4b555ap-47f, 0.0f, 0x1.4940e8p-23f,
     0x1.ec41bp-60f, 0x1.9a47fep-73f, 0x1.386d8ap-2f, 0x1.6f13e6p-107f, 0.0f,
     0x1.1e7494p-123f, 0.0f, 0x1.650556p-72f, 0x1.2ebe7ap-26f, 0x1.ca41c6p-70f, 0.0f,
     0x1.c81cccp-75f, 0.0f, 0.0f, 0x1.bce14p-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.dc1a0ep-30f, 0.0f, 0.0f, 0.0f, 0x1.f14a72p-124f, 0.0f, 0.0f, 0x1.efd59ep-37f,
     0.0f, 0.0f, 0x1.37f704p-50f, 0x1.6d1286p-76f, 0.0f, 0x1.70f51ep-79f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d31e4ap-33f, 0.0f, 0x1.a597d6p-6f, 0.0f, 0.0f, 0x1.fa9e3ap-125f,
     0x1.fec726p-84f, 0x1.464a5ap-82f, 0x1.f26f48p-7f, 0x1.19571p-107f,
     0x1.78093p-16f, 0.0f, 0x1.07fa26p-97f, 0.0f, 0x1.41a6a2p-46f, 0.0f, 0.0f,
     0x1.5886p-102f, 0x1.7705c8p-114f, 0x1.0493dap-52f, 0.0f, 0x1.f47804p-90f, 0.0f,
     0.0f, 0.0f, 0x1.b8ef2cp-93f, 0.0f, 0.0f, 0x1.3968ecp-80f, 0.0f, 0x1.b9666ep-25f,
     0x1.c17ddep-24f, 0.0f, 0x1.9233cep-44f, 0x1.51d36ep-101f, 0.0f, 0.0f,
     0x1.9a0bb6p-52f, 0x1.0cfab6p-19f, 0.0f, 0.0f, 0x1.abf946p-80f, 0.0f, 0.0f,
     0x1.ae38f8p-74f, 0x1.a1417ep-51f, 0.0f, 0.0f, 0.0f, 0x1.0e309ep-42f,
     0x1.5ac2fp-116f, 0.0f, 0.0f, 0x1.d25c12p-31f, 0.0f, 0x1.d3503ap-70f,
     0x1.04544p-86f, 0x1.aa117ap-24f, 0x1.8fc71cp-31f, 0x1.835e2ep-68f,
     0x1.8a37cap-11f, 0x1.793e88p-22f, 0.0f, 0.0f, 0x1.efd984p-55f, 0.0f, 0.0f, 0.0f,
     0x1.ad2b4ap-62f, 0x1.1a1c8p-54f, 0.0f, 0x1.fe2344p-85f, 0.0f, 0x1.f7339ep-65f,
     0.0f, 0x1.cfa298p-9f, 0x1.9b053ap-94f, 0.0f, 0x1.60212cp-123f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b9cec4p-23f, 0x1.046d92p-54f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.8bac84p-7f, 0x1.3c4cb2p-36f, 0.0f, 0.0f, 0.0f, 0x1.1f7e5ep-80f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f0ff4cp-72f, 0x1.b527dcp-41f, 0x1.999acep-70f,
     0x1.d63872p-60f, 0.0f, 0x1.599efep-70f, 0.0f, 0x1.ea1dfap-57f, 0.0f, 0.0f,
     0x1.fe259p-33f, 0.0f, 0x1.c997b6p-102f, 0.0f, 0.0f, 0.0f, 0x1.e4ac6ap-1f,
     0x1.2828f8p-123f, 0.0f, 0x1.ca91fcp-55f, 0.0f, 0x1.32984cp-11f, 0x1.ba18c6p-16f,
     0.0f, 0x1.42d136p-4f, 0x1.71181p-10f, 0.0f, 0x1.cc2892p-54f, 0x1.f97674p-99f,
     0x1.966356p-116f, 0.0f, 0x1.55e9aep-101f, 0.0f, 0.0f, 0.0f, 0x1.f39f96p-21f,
     0x1.4ee086p-16f, 0x1.913728p-29f, 0.0f, 0x1.99e9a2p-40f, 0x1.b60b96p-62f,
     0x1.dd0642p-15f, 0x1.92a2d8p-2f, 0x1.2b43acp-108f, 0x1.5cd274p-34f,
     0x1.dd16cap-33f, 0x1.021e24p-24f, 0x1.6594eep-9f, 0x1.b96af4p-29f,
     0x1.bf756ap-118f, 0x1.21e6acp-96f, 0x1.228254p-24f, 0x1.81067ep-4f, 0.0f,
     0x1.210b38p-122f, 0x1.525dap-90f, 0.0f, 0x1.822062p-108f, 0x1.639426p-4f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.621eb8p-8f, 0.0f, 0x1.97a5ap-31f, 0.0f, 0.0f, 0.0f,
     0x1.1dff0ep-123f, 0x1.0ab39cp-102f, 0x1.84474p-46f, 0.0f, 0x1.9b60ap-12f,
     0x1.89716cp-70f, 0x1.200df6p-85f, 0.0f, 0x1.3c9142p-57f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8f1c68p-31f, 0.0f, 0.0f, 0.0f, 0x1.01b994p-123f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.29cedp-100f, 0.0f, 0x1.82919ep-66f, 0x1.66a9eep-60f, 0x1.f3f3f2p-40f,
     0x1.795f2ap-94f, 0x1.79796p-73f, 0.0f
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
            tmp1 = Sleef_atanf1_u10purecfma(tmp0);
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
    printf("Sleef_atanf1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_atanf1_u10purecfma bench acc %a\n", global_bench_acc);
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
