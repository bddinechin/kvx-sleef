/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_log10f1_u10purecfma.c --function \
 *     Sleef_log10f1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.aa1176p-78f, 0.0f, 0x1.c2684p-34f, 0.0f, 0.0f, 0x1.378608p-15f,
     0x1.3f8bf8p-55f, 0.0f, 0.0f, 0x1.8196d2p-45f, 0.0f, 0x1.93df9ap-88f, 0.0f,
     0x1.5f54cep-102f, 0.0f, 0x1.156dfap-79f, 0x1.f4b6a2p-27f, 0.0f, 0x1.c47832p-40f,
     0x1.30f35ep-74f, 0x1.62076ep-50f, 0.0f, 0x1.7d1382p-27f, 0x1.d68068p-71f, 0.0f,
     0x1.b27f4ap-29f, 0x1.01495cp-73f, 0x1.eb53d4p-41f, 0.0f, 0.0f, 0.0f,
     0x1.cefd0ep-46f, 0.0f, 0.0f, 0x1.812a3ap-3f, 0.0f, 0x1.d932d4p-34f, 0.0f,
     0x1.70558ap-89f, 0.0f, 0x1.b149f6p-3f, 0x1.59b6fep-44f, 0x1.18b97p-97f,
     0x1.45b1eep-70f, 0x1.15a644p-15f, 0x1.4b9ac4p-110f, 0.0f, 0x1.c8a0f8p-77f, 0.0f,
     0.0f, 0x1.79f9bcp-45f, 0x1.12a5eap-31f, 0x1.6c0b6p-49f, 0x1.b9a4f4p-2f,
     0x1.7a5ea4p-53f, 0x1.ec6558p-113f, 0x1.2e48d2p-10f, 0x1.9e621ap-87f,
     0x1.f93218p-117f, 0x1.e3d914p-12f, 0x1.bee7dp-73f, 0.0f, 0.0f, 0.0f,
     0x1.943a3p-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c32d26p-80f,
     0x1.786e78p-92f, 0.0f, 0x1.0a3a14p-24f, 0.0f, 0x1.06ce4ap-81f, 0x1.6f068ap-13f,
     0x1.eca3b4p-46f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.99c912p-37f, 0x1.86e4dp-82f,
     0x1.8e06cap-83f, 0.0f, 0.0f, 0.0f, 0x1.012576p-124f, 0.0f, 0.0f, 0.0f,
     0x1.2ea982p-71f, 0x1.a9df1p-124f, 0x1.0d811cp-5f, 0.0f, 0.0f, 0x1.86a18p-10f,
     0.0f, 0x1.57088p-5f, 0.0f, 0x1.f28ee4p-20f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.31083ep-49f, 0x1.6d73aep-15f, 0x1.c094f2p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.199a1cp-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a05432p-102f, 0x1.d43e2p-55f,
     0x1p0f, 0.0f, 0x1.ae0704p-78f, 0.0f, 0x1.4103e4p-100f, 0.0f, 0.0f,
     0x1.0fb644p-66f, 0x1.64b59cp-114f, 0x1.56a5d8p-82f, 0.0f, 0.0f, 0x1.ad2ff6p-39f,
     0x1.757f42p-18f, 0.0f, 0x1.b6b5dap-21f, 0.0f, 0x1.ae00fcp-10f, 0x1.b2c75ap-91f,
     0.0f, 0x1.3b82bep-73f, 0x1.14f3acp-8f, 0x1.1f83aap-91f, 0.0f, 0.0f,
     0x1.b98dd8p-41f, 0.0f, 0.0f, 0x1.99eea8p-90f, 0x1.5abb92p-17f, 0.0f,
     0x1.6a9576p-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.12368ep-34f, 0x1.7b03d4p-25f, 0.0f,
     0.0f, 0x1.90352cp-104f, 0.0f, 0.0f, 0x1.005f48p-1f, 0x1.fda3e8p-98f, 0.0f,
     0x1.ddad12p-64f, 0.0f, 0.0f, 0x1.d4cfb8p-14f, 0x1.dd5978p-14f, 0x1.77b9bap-53f,
     0x1.d6ffd4p-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.317bb6p-121f, 0.0f, 0.0f,
     0.0f, 0x1.9990e2p-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1b7ca6p-17f,
     0.0f, 0.0f, 0.0f, 0x1.bd23d4p-86f, 0x1.aa4dbap-85f, 0x1.7e999ap-48f, 0.0f,
     0x1.82fp-25f, 0x1.1962f8p-65f, 0x1.33b8dp-43f, 0x1.04ddb8p-54f, 0.0f, 0.0f,
     0x1.ca2d9p-39f, 0x1.a2fc36p-103f, 0x1.7dfb0ep-66f, 0.0f, 0.0f, 0x1.cb96bep-116f,
     0.0f, 0.0f, 0.0f, 0x1.31abfp-27f, 0.0f, 0x1.0b146cp-104f, 0.0f, 0.0f,
     0x1.3aa826p-6f, 0x1.c9dd0ap-94f, 0x1.44096ep-16f, 0.0f, 0x1.e65744p-111f,
     0x1.43b0eep-31f, 0x1.43e736p-120f, 0x1.93350ap-22f, 0x1.db5628p-86f, 0.0f,
     0x1.30393ep-53f, 0x1.6ce33p-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7970cep-46f,
     0x1.e8f002p-15f, 0.0f, 0.0f, 0.0f, 0x1.32cd52p-40f, 0x1.9e243ap-30f,
     0x1.3b1dd8p-83f, 0.0f, 0x1.2f8feep-60f, 0.0f, 0x1.828aa8p-56f, 0.0f,
     0x1.22f166p-27f, 0x1.797b44p-81f, 0x1.fbb21p-57f, 0.0f, 0.0f, 0x1.a2f7eap-116f,
     0x1.583476p-46f, 0.0f, 0.0f, 0x1.74f6b8p-82f, 0.0f, 0.0f, 0x1.45eb8cp-47f,
     0x1.7a9c66p-93f, 0.0f, 0.0f, 0x1.784888p-34f, 0.0f, 0x1.44801ap-69f, 0.0f,
     0x1.267fb2p-40f, 0x1.147f2ep-125f, 0.0f, 0x1.3023ecp-66f, 0x1.8b32b2p-10f,
     0x1.c72bcap-16f, 0.0f, 0x1.5161c6p-58f, 0.0f, 0.0f, 0.0f, 0x1.fe0b9cp-96f, 0.0f,
     0x1.1fce7ap-125f, 0.0f, 0x1.2517fp-65f, 0.0f, 0.0f, 0x1.97a4f2p-67f, 0.0f,
     0x1.8f3d36p-66f, 0x1.78805ap-107f, 0x1.8789a2p-118f, 0x1.79ae74p-49f,
     0x1.a2562ep-36f, 0.0f, 0.0f, 0x1.2624d6p-41f, 0x1.92847ep-65f, 0.0f,
     0x1.2d368p-43f, 0x1.f6fda2p-16f, 0x1.ee0cep-21f, 0.0f, 0x1.d1262p-67f,
     0x1.019968p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6e9136p-95f, 0x1.74ecc4p-98f, 0x1.778fbap-107f, 0x1.52d782p-121f,
     0x1.b9a576p-89f, 0x1.7b6d42p-35f, 0.0f, 0.0f, 0.0f, 0x1.7ee516p-54f, 0.0f,
     0x1.400a06p-118f, 0x1.a381aep-67f, 0.0f, 0x1.4f2becp-33f, 0x1.3a6d08p-29f, 0.0f,
     0x1.6349e8p-121f, 0.0f, 0x1.88dc7cp-25f, 0x1.f7e392p-110f, 0.0f, 0.0f, 0.0f,
     0x1.a23d1ep-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e5eb9cp-32f,
     0.0f, 0.0f, 0.0f, 0x1.9a781ap-38f, 0x1.d7b9ap-80f, 0x1.b9f8fap-113f,
     0x1.2eeaa2p-122f, 0.0f, 0.0f, 0.0f, 0x1.a5c72p-114f, 0.0f, 0.0f, 0.0f,
     0x1.339c98p-56f, 0x1.a7bd34p-48f, 0.0f, 0.0f, 0x1.52e38ep-14f, 0x1.488b7cp-81f,
     0x1.e9c0acp-64f, 0x1.7468fp-3f, 0.0f, 0.0f, 0x1.7ad75cp-24f, 0.0f,
     0x1.9d496cp-57f, 0x1.f8284ap-43f, 0.0f, 0x1.ed09acp-45f, 0x1.6778dep-93f,
     0x1.4f6448p-121f, 0x1.e4ff46p-32f, 0x1.1a47a4p-97f, 0x1.7b7e5p-47f, 0.0f,
     0x1.c038f8p-48f, 0.0f, 0x1.449b38p-49f, 0x1.0cb134p-54f, 0x1.9bbd92p-17f,
     0x1.d7ebacp-80f, 0x1.4322e6p-56f, 0.0f, 0x1p0f, 0x1.b3c15ap-25f, 0x1.fec774p-75f,
     0x1.38af92p-34f, 0x1.4d811cp-74f, 0.0f, 0.0f, 0x1.a4e25cp-100f, 0x1.446ac8p-100f,
     0x1.c10c82p-39f, 0x1.b051aap-96f, 0.0f, 0x1.162bdap-82f, 0x1.47826cp-89f,
     0x1.38efdap-6f, 0.0f, 0x1.5b914cp-70f, 0x1.259bc6p-19f, 0x1.5b9364p-32f,
     0x1.bd103p-54f, 0x1.d884eap-18f, 0x1.04ae78p-42f, 0x1.505ffcp-117f, 0.0f,
     0x1.c1d636p-73f, 0.0f, 0x1.66b5fap-94f, 0.0f, 0x1.7d6d78p-118f, 0x1.189402p-7f,
     0.0f, 0.0f, 0x1.a9b11cp-18f, 0x1.c4ec18p-28f, 0.0f, 0x1.14bc62p-97f, 0.0f,
     0x1.610b22p-32f, 0x1.327078p-109f, 0.0f, 0x1.a57f2ap-74f, 0.0f, 0x1.7ca8dep-54f,
     0.0f, 0x1.0a2a4ep-116f, 0.0f, 0.0f, 0x1.8f3f9cp-83f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c9a548p-109f, 0x1.697f7p-47f, 0.0f, 0.0f, 0x1.33ebep-15f, 0x1.add94ap-110f,
     0.0f, 0.0f, 0x1.f83418p-112f, 0x1.c1db42p-13f, 0x1.ad8736p-75f, 0.0f,
     0x1.e8ad36p-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.36b72ep-68f,
     0x1.1d1052p-120f, 0x1.709c6p-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.37e878p-68f, 0.0f,
     0.0f, 0x1.a2173p-79f, 0.0f, 0.0f, 0.0f, 0x1.336c14p-109f, 0.0f, 0x1.c4992p-48f,
     0.0f, 0.0f, 0x1.44c70ap-48f, 0.0f, 0.0f, 0.0f, 0x1.0bc0e6p-65f, 0x1.f47076p-14f,
     0x1.83ecf6p-23f, 0.0f, 0x1.ee2d8ep-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e5517p-106f, 0.0f, 0.0f, 0x1.64f8dep-73f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f6e9dp-120f, 0.0f, 0x1.ac60c4p-111f, 0.0f, 0x1.442bc6p-25f, 0x1.c1cfc6p-6f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.61f6dap-97f, 0.0f, 0.0f,
     0x1.f4c5bap-12f, 0.0f, 0x1.95087p-120f, 0.0f, 0x1.1003cep-107f, 0x1.399b16p-88f,
     0x1.4ceb8ap-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0f1974p-4f, 0x1.3a7426p-74f, 0x1.005524p-57f, 0.0f, 0x1.f4e652p-82f,
     0x1.b79d2ap-86f, 0x1.59df54p-89f, 0x1.982dcap-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.3c646ep-42f, 0x1.1b4c0ap-1f, 0.0f, 0.0f, 0x1.2fd5c2p-73f,
     0x1.315574p-124f, 0.0f, 0x1.2e0e0cp-117f, 0x1.c95144p-98f, 0x1.c5da22p-45f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.89f8d6p-64f, 0.0f, 0x1.7aa9bep-100f, 0x1.6a57c4p-102f,
     0.0f, 0x1.d307a8p-32f, 0x1.6aa1f4p-13f, 0.0f, 0x1.b2adc2p-47f, 0.0f,
     0x1.b6418ep-71f, 0.0f, 0x1.1f55dcp-107f, 0.0f, 0x1.c129bcp-105f, 0.0f, 0.0f,
     0x1.a9bc68p-47f, 0x1.a626dap-87f, 0x1.87940ep-42f, 0.0f, 0.0f, 0x1.715742p-17f,
     0.0f, 0x1.2066ap-104f, 0x1.d62a44p-18f, 0.0f, 0x1.7a30d8p-31f, 0x1.9a1372p-56f,
     0x1.aac362p-38f, 0x1.b4562p-15f, 0x1.e310a2p-55f, 0.0f, 0x1.f30452p-29f,
     0x1.61e47ap-80f, 0.0f, 0x1.3c2e24p-86f, 0.0f, 0x1.27ed76p-103f, 0x1.308b84p-80f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.93ccaep-4f, 0.0f, 0x1.0b142ap-90f,
     0x1.36aa1ap-69f, 0x1.914326p-10f, 0x1.096faap-78f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.83bf7cp-65f, 0x1.d94dc2p-65f, 0x1.d5380cp-20f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4cea76p-25f, 0x1.75cb08p-44f, 0.0f, 0x1.fc2394p-70f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.bbd9bcp-27f, 0x1.d76538p-99f, 0x1.4201b4p-68f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.85f7f4p-86f, 0.0f, 0x1.e5087ap-101f, 0.0f, 0x1.c66116p-101f,
     0x1.5eb67ap-117f, 0x1.23e76ep-29f, 0x1.e9c99ap-126f, 0x1.bf57fap-120f, 0.0f,
     0x1.b60c74p-43f, 0.0f, 0.0f, 0x1.a0cdaep-56f, 0x1.9a6c68p-80f, 0.0f, 0.0f, 0.0f,
     0x1.343d42p-110f, 0.0f, 0x1.2953dcp-68f, 0x1.12dc56p-16f, 0x1.5ad682p-86f,
     0x1.899f8cp-120f, 0x1.4ae206p-124f, 0.0f, 0x1.78937ep-68f, 0.0f, 0.0f,
     0x1.39818ap-29f, 0.0f, 0x1.8eb72p-68f, 0.0f, 0x1.c4435cp-18f, 0x1.1433bep-4f,
     0.0f, 0x1.c291cap-78f, 0x1.cf6888p-45f, 0.0f, 0.0f, 0.0f, 0x1.174636p-29f,
     0x1.861f1p-73f, 0x1.b3203ap-90f, 0x1.a0019ep-25f, 0x1.d69dccp-9f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f5133cp-59f, 0.0f, 0.0f, 0x1.7d74b6p-36f, 0x1.bd292ap-2f,
     0x1.8affa6p-56f, 0x1.58ba94p-53f, 0x1.14e80cp-62f, 0x1.aa7252p-120f,
     0x1.464f84p-73f, 0.0f, 0x1.676824p-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.37e3dep-84f,
     0.0f, 0.0f, 0.0f, 0x1.d2039ep-55f, 0.0f, 0x1.702fa6p-49f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.76bcf8p-66f, 0.0f, 0.0f, 0x1.0a705cp-62f, 0.0f, 0.0f,
     0x1.d83478p-31f, 0.0f, 0.0f, 0.0f, 0x1.f72aaep-116f, 0.0f, 0x1.984914p-108f,
     0x1.996c2cp-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.100786p-52f, 0.0f, 0x1.305476p-66f,
     0.0f, 0x1.e6f58cp-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c10bap-58f,
     0x1.5d9f78p-113f, 0x1.b85f88p-78f, 0x1.c4802p-74f, 0x1.d6424ep-66f, 0.0f,
     0x1.b544ep-50f, 0x1.5a9554p-98f, 0x1.13ac76p-55f, 0x1.aac016p-99f, 0.0f,
     0x1.4d1bdp-11f, 0x1.1e207cp-22f, 0x1.625c62p-21f, 0x1.5adaccp-94f, 0.0f,
     0x1.945e1cp-58f, 0x1.7752bp-78f, 0x1.ac7d2ap-24f, 0x1.da48d6p-23f,
     0x1.45abb2p-56f, 0.0f, 0x1.574262p-24f, 0x1.286108p-95f, 0x1.f50e8ep-43f, 0.0f,
     0x1.ea7aaep-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2df9ccp-69f,
     0x1.966fdp-74f, 0.0f, 0x1.5f89dcp-77f, 0x1.5f703cp-99f, 0x1.8950b2p-117f,
     0x1.535a1ap-72f, 0.0f, 0.0f, 0x1.72330ap-126f, 0.0f, 0.0f, 0x1.c353e2p-89f, 0.0f,
     0.0f, 0x1.52d1dp-47f, 0.0f, 0x1.4097f2p-65f, 0x1.f12166p-103f, 0.0f,
     0x1.e72f02p-103f, 0.0f, 0.0f, 0x1.349e62p-3f, 0x1p0f, 0x1.728d9p-103f, 0.0f,
     0.0f, 0.0f, 0x1.cc0ab8p-19f, 0x1.5f3774p-13f, 0x1.123a66p-122f, 0x1.9d0e42p-19f,
     0x1.c80bf4p-78f, 0x1.04f1ap-24f, 0.0f, 0.0f, 0x1.5c5404p-1f, 0x1.a6c2f8p-125f,
     0x1.eeb0bap-107f, 0x1.a2189ap-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.26a3fap-39f,
     0.0f, 0x1.4f9faep-55f, 0.0f, 0.0f, 0.0f, 0x1.3d6b74p-97f, 0x1.2c8f28p-103f,
     0x1.37207ep-35f, 0.0f, 0x1.6927ap-13f, 0.0f, 0x1.6bf22ap-37f, 0.0f,
     0x1.8bbbfap-83f, 0x1.b74df6p-100f, 0x1.0053c8p-37f, 0x1.9ad2ecp-18f, 0.0f, 0.0f,
     0x1.bbf2e6p-51f, 0.0f, 0x1.c9ecfcp-8f, 0x1.36a71ap-22f, 0.0f, 0.0f, 0.0f,
     0x1.f71e1cp-82f, 0.0f, 0.0f, 0.0f, 0x1.d5d6f4p-86f, 0x1.ccb1f8p-46f,
     0x1.c7ad84p-27f, 0.0f, 0.0f, 0x1.df5cdep-9f, 0x1.86c2b6p-85f, 0x1.7c002cp-120f,
     0.0f, 0.0f, 0x1.75b358p-100f, 0x1.4ba30ep-96f, 0x1.1e3266p-119f, 0.0f,
     0x1.13dea8p-104f, 0x1.7aeee6p-119f, 0.0f, 0x1.20f2acp-25f, 0.0f, 0x1.cb151cp-46f,
     0x1.d8692ep-46f, 0x1.1e4e86p-48f, 0.0f, 0x1.b721c6p-44f, 0x1.b702dap-35f,
     0x1.f8ac2ap-3f, 0.0f, 0.0f, 0.0f, 0x1.4bb174p-33f, 0.0f, 0.0f, 0x1.d1bf14p-15f,
     0x1.60ea3ap-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7d505cp-68f,
     0x1.67f682p-87f, 0x1.763924p-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9dca28p-101f, 0.0f,
     0x1.526bf6p-101f, 0x1.0ddc6p-47f, 0.0f, 0x1.ddb8aap-1f, 0.0f, 0x1.d573e2p-46f,
     0x1.22254cp-45f, 0x1.882a8cp-95f, 0x1.ebb4e2p-46f, 0.0f, 0x1.7d83cep-90f, 0.0f,
     0x1.92f738p-50f, 0x1.1457cp-15f, 0x1.3916a8p-28f, 0.0f, 0x1.db32c6p-10f, 0.0f,
     0.0f, 0x1.36a872p-27f, 0x1.e02e1cp-89f, 0x1.2d4ac6p-87f, 0x1.6e15cap-30f,
     0x1.aabdap-21f, 0x1.aef0fap-57f, 0x1.25883cp-101f, 0x1.7d654ep-59f,
     0x1.94a988p-94f, 0x1.b4547ap-74f, 0x1.8ddeaap-83f, 0.0f, 0x1.de9ebcp-47f, 0.0f,
     0.0f, 0.0f, 0x1.e3235ap-59f, 0x1.24cff2p-89f, 0x1.76d83cp-89f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.64969cp-41f, 0.0f, 0x1.0b30eap-87f, 0.0f, 0.0f,
     0x1.fbbd84p-119f, 0x1.91376ep-86f, 0x1.c52548p-114f, 0x1.c0bb52p-15f,
     0x1.2e6634p-4f, 0x1.3b0b56p-91f, 0.0f, 0x1.a03f1ep-116f, 0x1.a9b68cp-75f,
     0x1.7878dp-2f, 0x1.e38ed4p-17f, 0x1.fd9fccp-39f, 0x1.f2ce68p-45f, 0.0f,
     0x1.df6566p-50f, 0.0f, 0.0f, 0x1.e5e7ccp-26f, 0x1.30fc36p-115f, 0.0f, 0.0f,
     0x1.ff06b2p-124f, 0.0f, 0x1.3a4802p-81f, 0.0f, 0x1.13e134p-100f, 0x1.14cceap-9f,
     0x1.07217ep-105f, 0x1.68a336p-94f, 0.0f, 0.0f, 0x1.fc978ap-96f, 0x1.b3ae8ep-6f,
     0.0f, 0.0f
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
            tmp1 = Sleef_log10f1_u10purecfma(tmp0);
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
    printf("Sleef_log10f1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_log10f1_u10purecfma bench acc %a\n", global_bench_acc);
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
