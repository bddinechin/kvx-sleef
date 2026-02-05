/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_acosf1_u35purecfma.c --function \
 *     Sleef_acosf1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.a7d97p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fbe362p-47f, 0x1.ffdd0ep-79f,
     0x1.1c548ap-14f, 0x1.373d12p-25f, 0x1.247c58p-19f, 0.0f, 0x1.b7e284p-83f, 0.0f,
     0.0f, 0.0f, 0x1.5f9b46p-89f, 0.0f, 0.0f, 0x1.58bd62p-1f, 0.0f, 0.0f, 0.0f,
     0x1.3e1ff2p-4f, 0.0f, 0x1.ef074ep-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.db62c6p-92f, 0.0f, 0.0f, 0.0f, 0x1.c10df2p-95f, 0x1.16ff6cp-62f, 0.0f,
     0x1.8147b4p-83f, 0.0f, 0.0f, 0x1.661438p-73f, 0.0f, 0x1.d1946ep-96f, 0.0f, 0.0f,
     0.0f, 0x1.a1b0e6p-97f, 0x1.d9f678p-86f, 0x1.d3e946p-33f, 0x1.30fe08p-5f,
     0x1.45b00cp-16f, 0.0f, 0x1.49e3fcp-30f, 0.0f, 0.0f, 0x1.dd223ap-118f,
     0x1.c037ccp-25f, 0.0f, 0.0f, 0x1.6e37e4p-86f, 0x1.b92392p-45f, 0.0f, 0.0f, 0.0f,
     0x1.f4769ap-8f, 0x1.a00882p-125f, 0x1.bc1ac2p-100f, 0x1.08f13p-97f,
     0x1.8f8fdcp-99f, 0x1.41391ap-10f, 0x1.1359ccp-65f, 0.0f, 0x1.135b82p-69f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1dedbap-44f, 0.0f, 0.0f, 0.0f, 0x1.50bb88p-99f,
     0.0f, 0.0f, 0x1.2af866p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.40a8p-103f,
     0x1.8270ep-67f, 0x1.9ed042p-113f, 0.0f, 0.0f, 0x1.fcf67ep-27f, 0x1.871712p-44f,
     0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.d1633p-92f, 0.0f, 0x1.2f5b68p-30f,
     0x1.ca3b1ep-30f, 0.0f, 0.0f, 0x1.c9473ep-97f, 0.0f, 0x1.26ebeap-122f,
     0x1.9abad4p-60f, 0.0f, 0.0f, 0.0f, 0x1.2cf836p-32f, 0.0f, 0x1.635fccp-101f,
     0x1.cc5276p-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a522ecp-69f, 0x1.5c2db6p-101f, 0.0f,
     0.0f, 0x1.4a2b86p-40f, 0x1.aa5182p-102f, 0x1.15bbacp-110f, 0x1.8ed2ap-86f, 0.0f,
     0x1.3cfd22p-87f, 0x1.b1b324p-7f, 0x1.9e7c98p-55f, 0x1.0a2de2p-67f, 0.0f, 0.0f,
     0.0f, 0x1.598906p-19f, 0.0f, 0x1.cf13fep-6f, 0x1.c66c08p-52f, 0x1.90bedap-95f,
     0x1.f18f88p-73f, 0.0f, 0x1.fc4808p-16f, 0.0f, 0.0f, 0x1.bb7094p-62f, 0.0f, 0.0f,
     0.0f, 0x1.d66c6cp-111f, 0x1.0386d2p-5f, 0x1.428bdcp-97f, 0.0f, 0.0f,
     0x1.552c5cp-54f, 0x1.fbe6dap-54f, 0x1.663ffap-123f, 0x1.7c621p-13f, 0.0f,
     0x1.f77eecp-46f, 0.0f, 0x1.d13c02p-109f, 0x1.e7bf7cp-32f, 0x1.62a07ep-89f,
     0x1.a95a28p-14f, 0.0f, 0.0f, 0.0f, 0x1.e08db4p-115f, 0.0f, 0x1.43664ap-55f,
     0x1.845a48p-10f, 0.0f, 0x1.3fda34p-90f, 0.0f, 0x1.a861cp-7f, 0x1.2da0a2p-99f,
     0x1.0910d2p-44f, 0.0f, 0x1.38913ap-52f, 0x1p0f, 0x1.e6b682p-44f, 0x1.ea69a2p-7f,
     0x1.7e7d1p-117f, 0x1.940ebp-16f, 0x1.f882b4p-49f, 0x1.de97acp-6f,
     0x1.cc72aep-24f, 0.0f, 0.0f, 0.0f, 0x1.7ca942p-119f, 0.0f, 0.0f, 0x1.642748p-65f,
     0.0f, 0x1.b7a7acp-19f, 0x1.6936dap-106f, 0x1.b6f76cp-27f, 0.0f, 0.0f,
     0x1.bc6d7ap-115f, 0.0f, 0.0f, 0x1.c079a6p-22f, 0.0f, 0.0f, 0x1.bb8184p-60f,
     0x1.0c15c2p-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a2428ap-8f, 0.0f, 0.0f,
     0x1.eb4feep-112f, 0x1p0f, 0.0f, 0.0f, 0x1.b4677ep-84f, 0x1.7ea374p-105f, 0.0f,
     0.0f, 0.0f, 0x1.1ab7ap-74f, 0.0f, 0.0f, 0x1.721a28p-1f, 0x1.be8f5ap-28f,
     0x1.f98768p-46f, 0.0f, 0.0f, 0x1.921376p-23f, 0.0f, 0x1.7cbfd8p-82f, 0.0f, 0.0f,
     0x1.d8f6b2p-14f, 0x1.f52f9ep-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.dc5042p-113f, 0x1.458462p-113f, 0.0f, 0.0f, 0x1.a82f16p-53f,
     0x1.41612cp-100f, 0x1.c07b98p-8f, 0.0f, 0x1.f34954p-11f, 0.0f, 0x1.b20c66p-89f,
     0x1.57a08ep-109f, 0x1.8631fcp-126f, 0x1.716bbep-10f, 0.0f, 0x1.f1556p-27f, 0.0f,
     0x1.178308p-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.859a34p-10f, 0x1.56f8c6p-3f,
     0x1.60a34cp-1f, 0x1.d410a2p-2f, 0x1.9e95f2p-49f, 0x1.a9fbc2p-26f, 0.0f,
     0x1.6c7858p-52f, 0x1.2b7214p-32f, 0.0f, 0.0f, 0x1.9ee058p-122f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c3d89p-46f, 0x1.2af1f2p-81f, 0x1.0edb46p-63f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.44543cp-96f, 0x1.48d0b8p-1f, 0.0f, 0.0f, 0x1.3c1bb6p-10f,
     0x1.4e53ccp-123f, 0.0f, 0.0f, 0.0f, 0x1.654af2p-22f, 0.0f, 0.0f, 0x1.7c1dc6p-40f,
     0.0f, 0x1.74af0ep-89f, 0x1.b4c2ccp-83f, 0x1.cc5f8ep-83f, 0.0f, 0x1.b07b32p-18f,
     0x1.465368p-94f, 0.0f, 0x1.b62ecap-16f, 0x1.053e68p-25f, 0.0f, 0.0f, 0.0f,
     0x1.c08c6ap-96f, 0.0f, 0.0f, 0.0f, 0x1.a79528p-26f, 0.0f, 0.0f, 0.0f,
     0x1.e8b524p-83f, 0x1.1bf474p-20f, 0.0f, 0x1.84ed3ap-91f, 0x1.49794p-124f, 0.0f,
     0.0f, 0.0f, 0x1.9b178cp-83f, 0.0f, 0.0f, 0x1.03c4eep-98f, 0.0f, 0x1.43042cp-77f,
     0.0f, 0.0f, 0.0f, 0x1.487accp-123f, 0.0f, 0.0f, 0x1.f42634p-22f, 0.0f, 0.0f,
     0x1.51a578p-103f, 0.0f, 0x1.dd9c58p-77f, 0x1.db56bcp-98f, 0x1.a773cp-71f,
     0x1.d26e56p-64f, 0x1.4074f4p-90f, 0x1.12f776p-99f, 0.0f, 0x1.d88c78p-98f,
     0x1.39ae2cp-83f, 0.0f, 0.0f, 0x1.32bfa4p-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f2d61ap-16f, 0x1.805576p-50f, 0x1.7f1e8p-6f, 0x1.2cdcdcp-87f, 0.0f,
     0x1.2c8e7ap-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7002p-51f, 0x1.960822p-89f, 0x1.17f36p-98f, 0x1.f3f7dep-84f, 0x1.27d696p-29f,
     0x1.de687ap-67f, 0x1.ba6df6p-93f, 0x1.56d8c2p-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b01904p-5f, 0x1.65b48cp-38f, 0x1.f60daep-76f, 0x1.74da8ep-33f, 0.0f, 0.0f,
     0.0f, 0x1.b83054p-114f, 0x1.bdff38p-79f, 0x1.12e922p-35f, 0.0f, 0x1.f9a41cp-34f,
     0.0f, 0.0f, 0x1p0f, 0x1.309cf6p-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b4e53ep-66f,
     0x1.f506e6p-15f, 0.0f, 0.0f, 0.0f, 0x1.c29758p-94f, 0x1.0e6b06p-100f,
     0x1.4cc4dap-123f, 0x1.62c3ccp-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.80fc1cp-83f,
     0x1.85d29cp-74f, 0.0f, 0x1.03006ep-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bcf056p-32f, 0x1.589756p-32f, 0.0f, 0.0f, 0x1.c75a2cp-99f, 0x1.27e506p-40f,
     0x1.40916ep-16f, 0x1.cb82ecp-42f, 0.0f, 0x1.a1c2d4p-83f, 0x1.e73294p-9f,
     0x1.41af9ap-70f, 0.0f, 0.0f, 0.0f, 0x1.f0f0fp-114f, 0.0f, 0x1.0a675ep-33f, 0.0f,
     0.0f, 0x1.83afdp-12f, 0.0f, 0x1.55ba02p-11f, 0.0f, 0.0f, 0x1.8f7972p-94f,
     0x1.974fb2p-9f, 0.0f, 0x1.7cc302p-42f, 0.0f, 0.0f, 0.0f, 0x1.07f96ap-41f, 0.0f,
     0.0f, 0x1.dcbef8p-48f, 0.0f, 0.0f, 0x1.aa4c4cp-30f, 0.0f, 0x1.3c8ba8p-59f, 0.0f,
     0x1.cf0dccp-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bc1c64p-1f, 0x1.df492p-80f,
     0.0f, 0x1.694ed8p-18f, 0.0f, 0.0f, 0x1.6aabe8p-76f, 0.0f, 0.0f, 0x1p0f,
     0x1.df4748p-72f, 0x1.2ab0e4p-38f, 0x1.8cdec6p-104f, 0.0f, 0x1.a8f862p-15f,
     0x1.907494p-71f, 0.0f, 0.0f, 0x1.29feeap-66f, 0x1.5d89e4p-90f, 0.0f,
     0x1.052824p-96f, 0.0f, 0.0f, 0.0f, 0x1.240128p-87f, 0x1.115c56p-54f, 0.0f,
     0x1.89e53ap-22f, 0x1.015d3cp-78f, 0x1.66454p-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a836d2p-91f, 0.0f, 0x1.765876p-82f,
     0x1.32638ep-65f, 0x1.914ccp-21f, 0x1.b0d41ap-23f, 0x1.8e856ap-70f, 0.0f, 0.0f,
     0.0f, 0x1.077a3ap-3f, 0.0f, 0x1.a7fac6p-101f, 0x1.dad19cp-9f, 0.0f, 0.0f,
     0x1.e6b186p-19f, 0x1.7217c6p-114f, 0.0f, 0.0f, 0x1.c3ff76p-58f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.65b3f2p-30f, 0.0f, 0.0f, 0x1.ee65d2p-64f,
     0x1.4b855cp-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9733d4p-26f, 0x1.edaf66p-19f, 0.0f, 0.0f, 0x1.21b00cp-65f, 0x1.df5b5ap-102f,
     0x1.312178p-4f, 0x1.521bc4p-42f, 0.0f, 0x1.5709c6p-12f, 0.0f, 0x1.75fc22p-122f,
     0x1.fa6e28p-24f, 0.0f, 0x1.f52818p-105f, 0.0f, 0x1.a0e8c2p-68f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a1705ep-69f, 0x1.e06f48p-79f, 0x1.40eca6p-126f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1f8f7ap-104f, 0x1.bdfca8p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e7ac8ep-70f, 0x1.825132p-23f, 0.0f, 0x1.e72212p-16f, 0.0f, 0.0f, 0.0f,
     0x1.59d5acp-121f, 0.0f, 0.0f, 0x1.126648p-102f, 0x1.4bad0ap-78f, 0x1.249b7ap-60f,
     0x1.ac17b6p-44f, 0.0f, 0x1.c770c6p-23f, 0.0f, 0.0f, 0x1.d8d4dep-9f, 0.0f,
     0x1.e41b0cp-14f, 0.0f, 0.0f, 0.0f, 0x1.374538p-87f, 0x1.5ac002p-60f,
     0x1.f37512p-102f, 0x1.b802d4p-68f, 0x1.e8d3aep-20f, 0x1.f4b956p-101f, 0.0f,
     0x1.68553p-38f, 0x1.e50304p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d0cf0cp-98f,
     0x1.19862p-42f, 0.0f, 0x1.289e8cp-16f, 0.0f, 0.0f, 0x1.afd65ap-47f, 0.0f,
     0x1.e2bf38p-68f, 0x1.b42e7ep-73f, 0x1.ca09bap-11f, 0.0f, 0x1.7bbd26p-18f, 0x1p0f,
     0x1.343aa8p-100f, 0.0f, 0.0f, 0.0f, 0x1.e5e244p-30f, 0.0f, 0.0f, 0x1.085daep-20f,
     0.0f, 0x1.bbdeb6p-77f, 0.0f, 0x1.2a59ecp-29f, 0x1.02b1acp-90f, 0.0f, 0.0f, 0.0f,
     0x1.bc4ed4p-18f, 0.0f, 0.0f, 0x1.83a726p-13f, 0x1.c867c8p-114f, 0x1.badedap-81f,
     0x1p0f, 0x1.d0cd84p-12f, 0.0f, 0.0f, 0.0f, 0x1.f3b62ep-3f, 0x1.51f306p-61f,
     0x1.93143cp-68f, 0x1.bc4bacp-13f, 0x1.0200bep-25f, 0x1.fd5c46p-73f, 0.0f,
     0x1.d62fa4p-51f, 0x1.91c9f6p-39f, 0x1.e47ffap-75f, 0x1.0a3a92p-63f, 0.0f,
     0x1.10af8ep-58f, 0x1.c7951cp-29f, 0.0f, 0.0f, 0.0f, 0x1.0d0848p-12f, 0.0f,
     0x1.382118p-34f, 0.0f, 0x1.98b48ep-65f, 0.0f, 0.0f, 0x1.f56676p-56f,
     0x1.645708p-15f, 0.0f, 0.0f, 0x1.7ae50cp-104f, 0x1.e6209cp-22f, 0.0f, 0.0f,
     0x1.2a847ep-44f, 0.0f, 0x1.75391cp-109f, 0x1.3c3cdep-19f, 0x1.797d3ap-4f,
     0x1.9bbcfp-51f, 0.0f, 0x1.8fbac2p-71f, 0.0f, 0x1.24b0dep-86f, 0x1.94f48cp-23f,
     0.0f, 0.0f, 0x1.7b7fa2p-75f, 0.0f, 0x1.18d73cp-36f, 0x1.4929eap-120f,
     0x1.1ba58p-24f, 0x1.825ee6p-98f, 0x1.3eae3cp-74f, 0x1.5a168p-117f,
     0x1.70806p-34f, 0x1.73cb1ep-7f, 0x1.90dd34p-37f, 0x1.bd4358p-85f,
     0x1.5c71f4p-96f, 0x1.85b95cp-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2b8686p-97f,
     0x1.0fc6c4p-32f, 0.0f, 0x1.0bcba6p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ef9806p-104f, 0x1.2d01ap-47f, 0x1.5c162p-118f, 0x1.1043b4p-20f, 0.0f,
     0x1.819ec6p-86f, 0x1.6ab0bp-43f, 0.0f, 0x1.01c48p-81f, 0x1.da7a2cp-63f, 0.0f,
     0x1.3fd1dep-95f, 0.0f, 0x1.49e744p-73f, 0.0f, 0x1.d2aa28p-117f, 0x1.41bc6ap-42f,
     0.0f, 0.0f, 0.0f, 0x1.8cbe0ap-120f, 0x1.be326ap-61f, 0.0f, 0x1.b98f9ap-73f,
     0x1.ac77fcp-124f, 0x1.ec6e18p-80f, 0.0f, 0x1.a21b12p-58f, 0.0f, 0x1.b7981cp-4f,
     0x1.3994bep-7f, 0x1.0cd75p-76f, 0.0f, 0.0f, 0x1.d5f05p-74f, 0.0f, 0.0f, 0.0f,
     0x1.326bbp-111f, 0x1.60f7bcp-34f, 0.0f, 0x1.6002c8p-90f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.761a54p-23f, 0.0f, 0.0f, 0x1.dd7262p-38f, 0x1.3527ccp-4f,
     0x1.3a50e8p-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.52769cp-29f, 0.0f, 0.0f, 0.0f,
     0x1.891d46p-109f, 0x1.59da2ap-51f, 0.0f, 0.0f, 0x1.81b3bp-103f, 0.0f, 0.0f,
     0x1.b4825cp-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.40d6e6p-105f, 0.0f,
     0x1.d9162ep-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6a702ap-100f, 0.0f,
     0x1.699dfp-104f, 0.0f, 0.0f, 0.0f, 0x1.554ce2p-9f, 0.0f, 0x1.106484p-18f,
     0x1.4eccf2p-29f, 0.0f, 0x1.a480a6p-103f, 0x1.1b7feep-4f, 0.0f, 0x1.0c85cap-102f,
     0x1.94cfb6p-103f, 0x1.199dc2p-99f, 0.0f, 0.0f, 0.0f, 0x1.e8f838p-79f, 0.0f, 0.0f,
     0x1.506b16p-31f, 0.0f, 0x1.7f09p-28f, 0x1.eba342p-95f, 0x1.9c366p-116f,
     0x1.6606acp-94f, 0.0f, 0x1.709e0ap-87f, 0x1.30ddcp-117f, 0.0f, 0x1.635b7ep-26f,
     0.0f, 0x1.d59cd6p-121f, 0.0f, 0x1.07461p-119f, 0.0f, 0x1.a0aa8p-39f,
     0x1.42c4c6p-51f, 0.0f, 0.0f, 0x1.6bcfcp-10f, 0x1.991e32p-71f, 0x1.87e93ep-52f,
     0x1.128386p-4f, 0.0f, 0x1.a8ac5ep-94f, 0x1.626898p-72f, 0x1.1fee38p-94f, 0.0f,
     0.0f, 0.0f, 0x1.2574a8p-32f, 0x1.04b386p-4f, 0x1.1fe6f8p-66f, 0x1.e608d6p-48f,
     0x1.9a94eep-31f, 0.0f, 0x1.395418p-103f, 0.0f, 0x1.5fd426p-57f, 0.0f, 0.0f, 0.0f,
     0x1.e5a982p-57f, 0x1.78674p-17f, 0.0f, 0.0f, 0x1.a4e85cp-54f, 0x1.7e4f3ep-57f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7e46d6p-69f, 0x1.fa42a4p-11f, 0.0f, 0x1.faee7p-80f,
     0x1.0a57ecp-53f, 0.0f, 0x1.7c7054p-87f, 0.0f, 0.0f, 0x1.8bac98p-58f, 0.0f,
     0x1.c9d014p-71f, 0x1.00dd4p-18f, 0.0f, 0.0f, 0x1.351398p-31f, 0x1.2a43bep-102f,
     0x1.4db83ep-26f, 0.0f, 0x1.f811d2p-78f, 0.0f, 0x1.fe3e56p-34f, 0.0f, 0.0f, 0.0f,
     0x1.7fffbcp-51f, 0x1.db391cp-41f, 0.0f, 0x1.d381d4p-118f, 0x1.2bfc8p-27f,
     0x1.31c886p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3fbf18p-76f, 0x1.09c852p-115f,
     0x1.8be6fep-60f, 0x1.32d996p-111f, 0.0f, 0x1.c42b6ap-4f, 0x1.1e326p-36f, 0.0f,
     0.0f, 0x1.32d6dep-41f, 0x1.e76cep-59f, 0.0f, 0.0f, 0x1.b9af86p-108f, 0.0f, 0.0f,
     0x1.a6633p-3f, 0x1.832a58p-28f, 0x1.f29a6p-35f, 0x1.adc79cp-114f, 0.0f,
     0x1.db02fep-82f, 0.0f, 0.0f, 0.0f, 0x1.4cd702p-79f, 0x1.5693fcp-81f,
     0x1.ae8cfp-115f, 0x1.4ef614p-45f, 0x1.3c7a54p-115f, 0x1.5f8088p-104f,
     0x1.0a0004p-91f, 0.0f, 0x1.b4f28p-22f, 0.0f, 0.0f, 0x1.4afb9p-35f, 0.0f, 0.0f
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
            tmp1 = Sleef_acosf1_u35purecfma(tmp0);
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
    printf("Sleef_acosf1_u35purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_acosf1_u35purecfma bench acc %a\n", global_bench_acc);
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
