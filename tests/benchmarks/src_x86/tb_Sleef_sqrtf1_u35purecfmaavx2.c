/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sqrtf1_u35purecfma.c --function \
 *     Sleef_sqrtf1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0x1.ddae6ep-13f, 0x1.cb705cp-38f, 0x1.28aefcp-120f, 0.0f, 0x1.a94bfap-43f,
     0x1.d616c6p-35f, 0.0f, 0x1.9bd49p-38f, 0x1.72ff76p-29f, 0.0f, 0x1.e9fd84p-72f,
     0x1.4e186ep-96f, 0.0f, 0.0f, 0.0f, 0x1.411268p-106f, 0.0f, 0.0f, 0.0f,
     0x1.1f59e6p-1f, 0.0f, 0.0f, 0.0f, 0x1.359216p-56f, 0.0f, 0x1.956af2p-110f,
     0x1.bee5fep-120f, 0.0f, 0x1p0f, 0.0f, 0x1.25b364p-22f, 0x1.01dc56p-36f, 0.0f,
     0x1.086daep-65f, 0x1.92cc86p-28f, 0x1.9ecd34p-49f, 0x1.57221ap-100f, 0.0f,
     0x1.ed16bp-82f, 0x1.4b449ap-8f, 0.0f, 0x1.496a1ep-6f, 0.0f, 0.0f,
     0x1.6247cap-123f, 0.0f, 0x1.07fc2cp-35f, 0x1.f7e26ep-41f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.00ceb2p-63f, 0.0f, 0x1.36d29ap-124f, 0.0f, 0.0f, 0.0f, 0x1.1851dp-116f,
     0.0f, 0x1.84779cp-65f, 0x1.9bcd86p-100f, 0.0f, 0.0f, 0x1.adb54ep-52f, 0.0f,
     0x1.5fbcdep-94f, 0.0f, 0x1.7d4c4ap-69f, 0.0f, 0x1.4df376p-2f, 0x1.c41c88p-67f,
     0.0f, 0x1.483bcep-36f, 0x1.2e64dcp-82f, 0x1.af6eb4p-98f, 0.0f, 0.0f,
     0x1.8e273ep-34f, 0x1.b07e16p-68f, 0.0f, 0x1.598188p-75f, 0x1.db2ceap-35f, 0.0f,
     0.0f, 0x1.73898ep-112f, 0.0f, 0.0f, 0x1.f35b8cp-67f, 0.0f, 0x1.e1c4cep-119f,
     0.0f, 0.0f, 0x1.e68dep-35f, 0.0f, 0x1.fde0b8p-103f, 0.0f, 0.0f, 0x1.f086d8p-49f,
     0.0f, 0x1.19d5e8p-71f, 0.0f, 0x1.2d58d6p-78f, 0.0f, 0x1.633a5cp-90f, 0.0f,
     0x1.13588cp-31f, 0.0f, 0.0f, 0x1.d2a5fcp-84f, 0.0f, 0.0f, 0x1.fd45c2p-52f,
     0x1.ec7f98p-124f, 0.0f, 0.0f, 0.0f, 0x1.d87d3cp-121f, 0x1.7569c6p-10f, 0.0f,
     0.0f, 0x1.58505cp-117f, 0x1.6fe88ep-53f, 0.0f, 0x1.b47e36p-26f, 0x1.b69746p-58f,
     0x1.ebf142p-52f, 0x1.267b52p-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5f3adap-43f, 0.0f,
     0x1.6b9394p-42f, 0.0f, 0.0f, 0.0f, 0x1.0b0d42p-113f, 0.0f, 0.0f, 0x1.14adbcp-40f,
     0x1.7bfd3p-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2e638ep-9f, 0.0f, 0.0f, 0.0f,
     0x1.00e4c2p-28f, 0.0f, 0.0f, 0.0f, 0x1.1a3366p-26f, 0.0f, 0.0f, 0x1.a9feb6p-89f,
     0x1.529a66p-116f, 0.0f, 0.0f, 0.0f, 0x1.0c34a8p-69f, 0x1.f4b548p-59f,
     0x1.5ae9fcp-44f, 0x1.bcafc8p-18f, 0x1.d2fa2p-45f, 0.0f, 0x1.b0e624p-77f,
     0x1.0ed19cp-75f, 0x1.39b40ap-30f, 0.0f, 0x1.1ed11p-115f, 0x1.5bc0c2p-33f, 0.0f,
     0.0f, 0x1.6cf906p-58f, 0.0f, 0x1.ba90d2p-98f, 0x1.f3a312p-11f, 0.0f, 0.0f, 0.0f,
     0x1.2293eap-73f, 0.0f, 0.0f, 0x1.1c5fecp-124f, 0x1.1c19fp-46f, 0x1.4561d6p-4f,
     0x1.4a2bc4p-116f, 0.0f, 0x1.098f3cp-37f, 0.0f, 0.0f, 0.0f, 0x1.190552p-30f,
     0x1.5c0746p-98f, 0.0f, 0.0f, 0x1.9a46f2p-46f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.527d92p-23f, 0x1.28fce6p-110f, 0x1.80401ap-89f, 0.0f, 0x1.9fbf62p-103f, 0.0f,
     0x1.a258dcp-82f, 0x1.17fefcp-2f, 0.0f, 0x1.8ddf18p-56f, 0x1.40c492p-99f,
     0x1.9c2c08p-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8964acp-10f, 0.0f,
     0x1.425468p-36f, 0.0f, 0x1.0d48b8p-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f992fep-126f,
     0.0f, 0x1.41dc8ap-34f, 0x1.f9a62ep-47f, 0.0f, 0.0f, 0x1.42564ep-75f, 0.0f, 0.0f,
     0x1.750b1p-84f, 0x1.34dc74p-34f, 0x1.51c4fp-115f, 0x1.b6ff5ap-2f,
     0x1.7c88ccp-117f, 0x1.003ebcp-125f, 0x1.795c9cp-97f, 0.0f, 0x1.7aed4cp-90f, 0.0f,
     0.0f, 0x1.dacdbcp-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.535bfp-36f, 0.0f, 0.0f,
     0x1.dde288p-43f, 0x1.fb6748p-31f, 0x1.e9a618p-14f, 0.0f, 0x1.35bd38p-21f,
     0x1.44b6e8p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7fe094p-52f, 0x1.382ba2p-46f,
     0x1.ae9318p-123f, 0.0f, 0x1.e630cap-89f, 0x1.5506bcp-44f, 0x1.70ad9p-111f, 0.0f,
     0.0f, 0x1.d9fc66p-12f, 0.0f, 0x1.72cd5p-123f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9b9b5ap-25f, 0.0f, 0x1.29fe12p-107f, 0x1.0b68c8p-88f, 0.0f, 0x1.13847ep-90f,
     0x1.17f268p-25f, 0x1.731c7ep-37f, 0.0f, 0x1.70e71ep-125f, 0x1.08137ep-88f,
     0x1.a45644p-25f, 0.0f, 0.0f, 0x1.ef91acp-9f, 0.0f, 0.0f, 0x1.303582p-101f, 0.0f,
     0x1.ca0cp-71f, 0x1.4eaadap-23f, 0x1.fc0eb4p-50f, 0.0f, 0.0f, 0x1.9c13c6p-80f,
     0x1.e68324p-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4b1c2p-117f, 0.0f, 0.0f,
     0x1.0be0acp-1f, 0x1.7ea1f2p-25f, 0x1.9e3616p-109f, 0.0f, 0.0f, 0x1.1fad9p-21f,
     0.0f, 0x1.21433ap-51f, 0x1.bf2a32p-98f, 0.0f, 0x1.56326ap-121f, 0x1.92c27ep-92f,
     0x1.8d40e4p-31f, 0x1.4caf46p-27f, 0.0f, 0.0f, 0.0f, 0x1.f84ebcp-122f, 0.0f, 0.0f,
     0.0f, 0x1.b3901p-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.478e18p-65f,
     0x1.481512p-74f, 0.0f, 0x1.29a2p-2f, 0x1.13080ep-26f, 0.0f, 0x1.85d4fep-74f,
     0.0f, 0.0f, 0x1.a937c2p-56f, 0x1.f9529p-18f, 0x1.4e5848p-30f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c3daf2p-75f, 0x1.7043e4p-26f, 0.0f, 0x1.d1293p-34f, 0.0f, 0.0f,
     0x1.f2366cp-39f, 0x1.53284p-3f, 0x1.dfad76p-125f, 0.0f, 0.0f, 0x1.d4a0c8p-83f,
     0x1.b6bf7p-9f, 0x1.1e4fccp-67f, 0.0f, 0.0f, 0x1.a7d20ap-1f, 0.0f,
     0x1.effcdep-104f, 0x1.6fb3p-11f, 0x1.2fd1c2p-124f, 0.0f, 0.0f, 0x1.1396bap-38f,
     0x1.e9d272p-86f, 0x1.c3372ap-108f, 0x1.5b5964p-37f, 0.0f, 0x1.9d2bc2p-21f, 0.0f,
     0x1p0f, 0x1.73c82ep-108f, 0x1.0dec66p-38f, 0x1.9918aap-17f, 0.0f, 0.0f,
     0x1.844cd8p-57f, 0.0f, 0x1.3f1d8ap-70f, 0x1.fa5d9cp-108f, 0x1.d1b96ep-86f,
     0x1.5b671cp-111f, 0x1.41672cp-117f, 0.0f, 0x1.3682eap-6f, 0x1.aff2d8p-120f,
     0x1.00e12cp-49f, 0.0f, 0.0f, 0x1.38ebbep-43f, 0x1.fb0626p-10f, 0x1.6d9c6ep-124f,
     0x1.dd4c6ap-107f, 0x1.0166b4p-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.72b66ap-28f,
     0x1.d7af96p-117f, 0x1.87a99cp-70f, 0.0f, 0x1.3fbf46p-55f, 0.0f, 0x1.56cc16p-43f,
     0.0f, 0.0f, 0x1.35d112p-27f, 0.0f, 0x1.885fep-7f, 0x1.c6e806p-113f,
     0x1.136e1ep-50f, 0x1.5893ecp-43f, 0.0f, 0x1.75fe94p-90f, 0.0f, 0.0f,
     0x1.3c2c6ep-45f, 0.0f, 0x1.0210fap-3f, 0.0f, 0x1.1ac786p-12f, 0.0f, 0.0f,
     0x1.423212p-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7082f6p-86f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.27425ap-121f, 0x1.842334p-59f, 0x1.23f7cp-25f, 0x1.6b6462p-16f,
     0x1.e809c6p-28f, 0x1.0642e2p-119f, 0.0f, 0x1.91a97cp-38f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.84504p-50f, 0.0f, 0x1.fe9382p-74f, 0x1.ff4df8p-15f, 0x1.b5a804p-90f, 0.0f,
     0x1.1539dcp-66f, 0.0f, 0x1.42a44ap-60f, 0x1.78a41cp-5f, 0x1.a450dp-65f, 0.0f,
     0x1.fe1312p-9f, 0.0f, 0.0f, 0.0f, 0x1.b9b02ap-25f, 0.0f, 0x1.a0114ap-123f,
     0x1.f6dfc6p-124f, 0x1.8c092ap-58f, 0.0f, 0x1.696e28p-20f, 0.0f, 0x1.b4b2eap-11f,
     0x1.f3252ap-107f, 0x1.8b8324p-70f, 0.0f, 0x1.dac362p-111f, 0.0f, 0x1.92eb58p-34f,
     0.0f, 0x1.443646p-117f, 0x1.fe69b8p-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.06368p-9f, 0x1.ced11p-122f, 0.0f, 0.0f, 0.0f, 0x1.c1108ep-17f, 0.0f,
     0x1.b1c1b2p-64f, 0x1.c089fap-2f, 0.0f, 0x1.c6ab26p-78f, 0.0f, 0.0f, 0.0f,
     0x1.5c58cep-79f, 0.0f, 0.0f, 0x1.bd4722p-21f, 0x1.dcb934p-2f, 0x1.01f5dep-113f,
     0.0f, 0.0f, 0x1.0dd98ap-104f, 0.0f, 0x1.aac9cp-7f, 0x1.564782p-97f, 0.0f,
     0x1.699d8ap-78f, 0.0f, 0.0f, 0x1.b9b60ep-15f, 0x1.910664p-47f, 0x1.77a2e8p-10f,
     0.0f, 0x1.a600bp-124f, 0x1.1487dap-66f, 0x1.c8336cp-50f, 0x1.9322bep-54f,
     0x1.aeaffep-60f, 0x1.0e5992p-41f, 0x1.f4b32cp-48f, 0.0f, 0x1.78b39cp-92f,
     0x1.baa218p-56f, 0x1.e9fe3ep-16f, 0.0f, 0x1.d901a6p-67f, 0.0f, 0x1.61ec22p-12f,
     0.0f, 0x1.27881ap-69f, 0x1.b7cf2ap-55f, 0x1.0762dp-85f, 0x1.3022d2p-22f, 0.0f,
     0x1.3ef2aep-60f, 0.0f, 0x1.2dfed6p-93f, 0.0f, 0.0f, 0x1.8f4bc8p-59f, 0.0f,
     0x1.a4ab64p-100f, 0x1.87bd66p-56f, 0.0f, 0x1.06192p-37f, 0x1.a9de6p-47f, 0.0f,
     0x1.0a2b12p-125f, 0.0f, 0x1.c966e6p-113f, 0.0f, 0x1.b4938cp-79f, 0.0f,
     0x1.c0a1fep-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e0d284p-121f, 0.0f,
     0x1.5bcaeap-121f, 0.0f, 0.0f, 0x1.4e7702p-124f, 0.0f, 0x1.a23a1ap-58f,
     0x1.8c2212p-83f, 0.0f, 0.0f, 0x1.6101bp-52f, 0x1.4aa0f2p-55f, 0x1.403c64p-49f,
     0.0f, 0x1.2c2908p-67f, 0.0f, 0.0f, 0.0f, 0x1.e9199cp-60f, 0x1.d7eed6p-23f,
     0x1.da927cp-54f, 0x1.1d5b96p-95f, 0x1.089d58p-84f, 0x1.756f2cp-65f, 0.0f, 0.0f,
     0x1.bc982ep-34f, 0x1.cc615cp-25f, 0x1.207c78p-108f, 0.0f, 0.0f, 0x1.6f581cp-49f,
     0x1.ad5f3p-110f, 0.0f, 0x1.861f26p-45f, 0.0f, 0.0f, 0x1.73e366p-43f,
     0x1.3327fap-65f, 0.0f, 0.0f, 0x1.5ad674p-11f, 0.0f, 0x1.7e778cp-52f, 0.0f,
     0x1.9a5344p-124f, 0.0f, 0x1.bb61e8p-109f, 0.0f, 0x1.0686f8p-18f, 0x1.0871dp-41f,
     0.0f, 0.0f, 0.0f, 0x1.9d3704p-84f, 0.0f, 0x1.b5d37ap-7f, 0.0f, 0x1.9dafa2p-110f,
     0.0f, 0x1.5c362ep-71f, 0.0f, 0.0f, 0x1.74453p-16f, 0.0f, 0x1.5d2a6ap-81f, 0.0f,
     0x1.42a3f2p-117f, 0.0f, 0x1.001064p-48f, 0x1.afb0a4p-38f, 0x1.a77b08p-12f, 0.0f,
     0.0f, 0x1.873c74p-25f, 0.0f, 0x1.eb8146p-77f, 0x1.fcf37p-40f, 0x1.b934p-30f,
     0.0f, 0x1.6b9f16p-62f, 0x1.5961fp-37f, 0x1.6d2286p-64f, 0.0f, 0x1.2b903ap-97f,
     0x1.277ff4p-64f, 0x1.878de6p-29f, 0x1.dfb78ap-75f, 0.0f, 0x1.099efp-67f,
     0x1.8e0e1ep-2f, 0x1.a4f004p-88f, 0.0f, 0.0f, 0.0f, 0x1.d639bep-2f,
     0x1.327a9cp-68f, 0.0f, 0x1.e4df7ap-12f, 0.0f, 0x1.0baf4ep-82f, 0.0f,
     0x1.47562ep-110f, 0x1.1cbd4ep-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.47c99p-37f, 0x1.485c6ap-118f, 0.0f, 0x1.2d3a24p-117f, 0.0f, 0.0f,
     0x1.b3ec5p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ddf7fcp-14f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d27eb4p-53f, 0.0f, 0x1.409d0cp-64f, 0.0f, 0.0f, 0x1.9fa6b4p-37f,
     0x1.fb41d6p-89f, 0.0f, 0.0f, 0x1.a2c6bap-57f, 0x1.b98dfcp-68f, 0.0f, 0.0f,
     0x1.ff08acp-39f, 0.0f, 0.0f, 0.0f, 0x1.4a4216p-16f, 0x1.732a1cp-31f, 0.0f, 0.0f,
     0.0f, 0x1.b167fep-57f, 0x1.25b474p-90f, 0x1.92a21cp-22f, 0x1.e830aap-98f, 0.0f,
     0x1.f1f01ep-4f, 0x1.1ad568p-11f, 0x1.f10d94p-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.8437eap-37f, 0x1.96e518p-76f, 0x1.5ca498p-83f, 0x1.4949b8p-46f, 0.0f,
     0x1.f5e524p-8f, 0x1.167d5ep-78f, 0x1.1c2ad4p-111f, 0x1.cc3eb6p-59f,
     0x1.c85f98p-31f, 0.0f, 0.0f, 0.0f, 0x1.5e3186p-61f, 0x1.c3e8cap-88f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.6276aep-43f, 0.0f, 0.0f, 0x1.cfe42p-28f, 0.0f, 0x1.4a783cp-46f,
     0x1.0b1d14p-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.23d28p-56f, 0x1.49495cp-112f,
     0x1.fb492p-7f, 0x1.a55646p-37f, 0.0f, 0x1.19bd8cp-111f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.99b1b6p-86f, 0.0f, 0x1.d68f7cp-57f, 0x1.4488bap-30f, 0x1.d19cb8p-14f,
     0x1.4733ccp-70f, 0.0f, 0.0f, 0x1.635614p-21f, 0x1.71cba8p-31f, 0.0f,
     0x1.18dd84p-125f, 0x1.5801b4p-54f, 0x1.11f73cp-15f, 0.0f, 0x1.7664cp-44f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.2a99eep-54f, 0x1.b7693p-78f, 0x1.5bcc22p-17f,
     0x1.2e4fd6p-120f, 0x1.94addcp-15f, 0x1.00d5p-52f, 0.0f, 0.0f, 0x1.6ad81ep-111f,
     0x1.81bc74p-55f, 0.0f, 0x1.e25f86p-70f, 0x1.09447ep-118f, 0.0f, 0x1.88a864p-39f,
     0.0f, 0x1.993bb8p-106f, 0x1.901454p-65f, 0.0f, 0x1.bc2e14p-95f, 0x1.34f3bap-76f,
     0.0f, 0.0f, 0.0f, 0x1.c78eep-31f, 0.0f, 0x1.6a5c06p-77f, 0x1.790734p-111f, 0.0f,
     0x1.2d0fbcp-74f, 0.0f, 0.0f, 0.0f, 0x1.1fc528p-68f, 0.0f, 0.0f, 0x1.3d2ef8p-6f,
     0x1.5e17ep-20f, 0x1.98944cp-2f, 0x1.4bb2e4p-82f, 0.0f, 0.0f, 0.0f,
     0x1.459618p-27f, 0.0f, 0.0f, 0x1.7a8552p-117f, 0x1.2557c8p-46f, 0.0f, 0.0f,
     0x1.6dfd68p-41f, 0.0f, 0.0f, 0.0f, 0x1.fbfa32p-17f, 0.0f, 0x1.dca9a4p-94f, 0.0f,
     0x1.75455ep-121f, 0.0f, 0x1.feaf94p-60f, 0x1.cad59cp-26f, 0x1.751262p-1f,
     0x1.45ef2p-45f, 0x1.cdf456p-125f, 0x1.0fb4e8p-55f, 0.0f, 0.0f, 0x1.af8d7p-34f,
     0x1.197af8p-12f, 0.0f, 0.0f, 0x1.924d76p-27f, 0.0f, 0x1.71b35cp-17f, 0.0f,
     0x1.c817fcp-25f, 0x1.0f3adap-28f, 0x1.382d24p-45f, 0.0f, 0.0f, 0x1.afe884p-16f,
     0.0f, 0x1.e3a2ap-59f, 0x1.822a34p-117f, 0.0f, 0.0f, 0.0f, 0x1.106ee2p-35f,
     0x1.4108dp-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.10cc38p-65f, 0x1.d582eep-76f,
     0x1.a267d4p-104f, 0x1.359764p-19f, 0.0f, 0.0f, 0x1.4c78d2p-12f, 0.0f,
     0x1.6b496ap-116f, 0.0f, 0.0f, 0x1.66aa96p-30f, 0x1.463b9p-87f, 0.0f,
     0x1.d2e96p-94f, 0x1.c3bfe2p-60f, 0x1.0cfc12p-105f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.39fe8p-82f, 0x1.9e0f96p-9f, 0x1.3c38dap-65f, 0.0f, 0.0f, 0.0f,
     0x1.50653ep-19f, 0x1.d62caep-95f, 0.0f, 0.0f, 0x1.5ce8ccp-7f, 0x1.711032p-20f,
     0x1.3f96c6p-47f, 0x1.64067p-118f, 0.0f, 0.0f, 0x1.e4c91cp-44f, 0.0f,
     0x1.a25b1cp-113f, 0x1.2e2b08p-43f, 0x1.e5d936p-77f, 0x1.c34fep-119f,
     0x1.805472p-114f, 0.0f, 0.0f, 0x1.d0e05cp-126f, 0x1.eb7dd8p-53f, 0.0f,
     0x1.dbf7f6p-40f, 0x1.af90cap-64f, 0x1.770134p-78f, 0x1.cb3cdp-107f,
     0x1.56f8bcp-14f, 0x1.9e9b5cp-62f, 0x1.1e9258p-84f, 0x1.03bddep-60f, 0.0f,
     0x1.0c25b4p-54f, 0x1.98d124p-5f, 0x1.1545e8p-11f, 0.0f, 0x1.935bdep-106f, 0.0f,
     0x1.161ad2p-85f, 0x1.abd68ep-20f, 0x1.5f899ep-87f, 0.0f, 0x1.3f5ffap-32f,
     0x1.fc747p-117f, 0x1.1a3eb8p-113f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.db7046p-101f, 0.0f, 0x1.65c71ep-120f, 0x1.c489ep-101f, 0x1.5f0494p-43f,
     0x1.b9534ep-29f, 0.0f, 0.0f, 0x1.df9c86p-124f, 0x1.d1e8d8p-125f, 0.0f
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
            tmp1 = Sleef_sqrtf1_u35purecfma(tmp0);
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
    printf("Sleef_sqrtf1_u35purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_sqrtf1_u35purecfma bench acc %a\n", global_bench_acc);
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
