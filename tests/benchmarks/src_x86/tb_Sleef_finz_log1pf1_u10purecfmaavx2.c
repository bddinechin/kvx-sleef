/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_log1pf1_u10purecfma.c --function \
 *     Sleef_finz_log1pf1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0x1.534e2ep-76f, 0x1.075ad8p-84f, 0x1.32c0fp-98f, 0.0f, 0x1.22b7fp-101f,
     0.0f, 0x1.124d9cp-117f, 0x1.180038p-109f, 0.0f, 0.0f, 0.0f, 0x1.ff0d12p-56f,
     0x1.12021ep-33f, 0.0f, 0.0f, 0x1.917708p-126f, 0x1.ab7d7cp-82f, 0.0f,
     0x1.820018p-60f, 0x1.3632c8p-97f, 0.0f, 0x1.fe6d2p-95f, 0x1.962098p-42f,
     0x1.ae5196p-97f, 0.0f, 0x1.a6593ap-116f, 0x1.eac6b4p-38f, 0x1.18c86p-107f,
     0x1.884672p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a8e598p-70f, 0x1.65bfbap-77f,
     0x1.b4f6dp-68f, 0.0f, 0x1.8efe5ep-101f, 0x1.17845cp-25f, 0x1.6c847p-80f, 0.0f,
     0x1.f66042p-53f, 0.0f, 0x1.a13a9cp-29f, 0.0f, 0x1.715ecp-11f, 0x1.9275f8p-1f,
     0x1.6a2f7ap-2f, 0x1.735f52p-119f, 0x1.64e322p-115f, 0x1.19db54p-35f,
     0x1.6e4528p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.64494cp-26f, 0x1.74dbc8p-2f, 0.0f,
     0x1.fbd2fap-34f, 0.0f, 0x1.043d8cp-41f, 0x1.774898p-47f, 0x1.53a304p-70f, 0.0f,
     0x1.1c8ab6p-82f, 0.0f, 0.0f, 0x1.2e1ce6p-113f, 0.0f, 0x1.7c676ap-79f, 0.0f, 0.0f,
     0.0f, 0x1.6b1d4p-94f, 0.0f, 0x1.a00cfp-21f, 0x1.a9940ap-13f, 0.0f,
     0x1.79be12p-8f, 0.0f, 0.0f, 0x1.63222ep-6f, 0.0f, 0x1.331f22p-114f,
     0x1.96519ep-45f, 0x1.5e2dc6p-9f, 0.0f, 0x1.bfe36ep-42f, 0x1.6b5438p-90f, 0.0f,
     0.0f, 0x1.c1a54ap-110f, 0.0f, 0x1.430bf6p-106f, 0.0f, 0x1.55037ep-13f,
     0x1.03f01ap-32f, 0.0f, 0x1.b226ecp-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ca6394p-68f, 0x1.eb5876p-113f, 0x1.63226p-30f, 0.0f, 0.0f, 0.0f,
     0x1.06013ep-61f, 0x1.80bef6p-40f, 0x1.d5ada8p-24f, 0x1.11931ap-12f, 0.0f,
     0x1.07369ap-45f, 0.0f, 0x1.8591f2p-43f, 0.0f, 0x1.0da72cp-97f, 0.0f, 0.0f,
     0x1.c0dba2p-30f, 0.0f, 0x1.40348ap-86f, 0x1.dcc846p-6f, 0x1p0f, 0x1.bc4b14p-21f,
     0.0f, 0x1.28d38ep-109f, 0.0f, 0.0f, 0x1.f124fep-39f, 0x1.09245ap-84f,
     0x1.2de634p-11f, 0x1.ee0f44p-39f, 0x1.fc9bfap-114f, 0.0f, 0.0f, 0.0f,
     0x1.cd9364p-66f, 0.0f, 0.0f, 0x1.df0a1p-94f, 0.0f, 0x1.b46156p-73f,
     0x1.a079b8p-113f, 0x1.07414p-25f, 0.0f, 0.0f, 0x1.f87374p-3f, 0x1.cde5fep-20f,
     0x1.2b73c6p-50f, 0x1.1742d8p-54f, 0x1.a20768p-8f, 0x1.a8f07p-115f, 0.0f, 0.0f,
     0x1.aca8bep-94f, 0.0f, 0.0f, 0x1.4254f6p-63f, 0x1.6db49ep-92f, 0x1.9b7c32p-82f,
     0x1.98ae74p-123f, 0.0f, 0.0f, 0x1.10ad4cp-16f, 0.0f, 0.0f, 0.0f,
     0x1.69d958p-105f, 0x1.261ed2p-120f, 0.0f, 0.0f, 0x1.437d36p-89f,
     0x1.463f94p-121f, 0.0f, 0x1.17d52cp-104f, 0x1.ecc7e2p-7f, 0x1.f5975ep-105f,
     0x1.939f62p-103f, 0x1.1a146p-13f, 0.0f, 0.0f, 0x1.84fde6p-119f, 0.0f, 0.0f,
     0x1.2cf674p-98f, 0x1.719e12p-45f, 0x1.a3c314p-80f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.962f7ap-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.93464ap-49f, 0.0f, 0.0f,
     0x1.f642aap-65f, 0x1.6b1954p-4f, 0.0f, 0x1.5cb6aep-40f, 0x1.289b6p-1f,
     0x1.18d5p-98f, 0x1.2ef362p-120f, 0x1.fde064p-111f, 0.0f, 0.0f, 0x1.e57a64p-92f,
     0x1.4cadd6p-39f, 0.0f, 0.0f, 0x1.b3c2dp-88f, 0.0f, 0.0f, 0.0f, 0x1.7adf2ap-2f,
     0x1.3d18acp-106f, 0x1.73578ep-13f, 0.0f, 0.0f, 0x1.e4de8ap-116f, 0x1.b27024p-17f,
     0x1.08da5cp-5f, 0x1.435db6p-105f, 0.0f, 0x1.f6ea68p-74f, 0x1.194e5cp-23f, 0.0f,
     0x1.91ddecp-73f, 0x1.1b552ep-106f, 0x1.8b022ap-82f, 0x1.cec2c6p-118f, 0.0f, 0.0f,
     0.0f, 0x1.3fbfa8p-4f, 0x1p0f, 0x1.c0801ep-22f, 0x1.f05cbep-56f, 0x1.44bf2ap-68f,
     0x1.621ce4p-105f, 0x1.82ee7cp-12f, 0.0f, 0.0f, 0x1.7ff158p-107f, 0x1.548362p-98f,
     0x1.947c22p-55f, 0.0f, 0.0f, 0x1.2eb69cp-47f, 0x1.14cf6ap-117f, 0.0f, 0.0f,
     0x1.a207dp-103f, 0x1.c76e56p-54f, 0x1.2b993ep-36f, 0.0f, 0x1.13fc44p-21f, 0.0f,
     0x1.0de9e8p-29f, 0x1p0f, 0x1.5a0244p-64f, 0.0f, 0.0f, 0x1.48ea16p-37f,
     0x1.36c844p-84f, 0.0f, 0x1.dffefcp-50f, 0x1.0240e2p-88f, 0x1.fa66d2p-16f, 0.0f,
     0x1.ae2bc6p-67f, 0x1.59cc38p-61f, 0.0f, 0.0f, 0x1.7aba68p-70f, 0.0f,
     0x1.3eee92p-15f, 0.0f, 0.0f, 0x1.5b375ap-26f, 0x1.e4e0c2p-74f, 0x1.41a5d4p-105f,
     0x1.0f8288p-21f, 0x1.a89782p-19f, 0.0f, 0.0f, 0.0f, 0x1.e90c18p-77f,
     0x1.9cd71ep-75f, 0.0f, 0.0f, 0x1.ab2fd2p-3f, 0x1.4d62e2p-109f, 0x1.776326p-34f,
     0.0f, 0.0f, 0x1.6b9fbcp-38f, 0x1.6a922cp-63f, 0x1.79d22p-111f, 0x1.b7f8fap-2f,
     0.0f, 0x1.1ac74cp-91f, 0x1.db4ae8p-56f, 0.0f, 0.0f, 0x1.189fbep-3f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.5d732ap-37f, 0.0f, 0x1.ddc9dcp-71f, 0x1.2b796p-93f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.c8649ep-48f, 0.0f, 0.0f, 0x1.18cc0ep-39f, 0.0f, 0.0f,
     0x1.596eeap-7f, 0.0f, 0.0f, 0x1.55a09p-4f, 0x1.79be26p-67f, 0.0f, 0.0f,
     0x1.828b58p-18f, 0.0f, 0x1.9edf48p-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.27cf4ep-84f,
     0.0f, 0x1.a584b6p-44f, 0x1.4e0218p-14f, 0x1.786a6cp-96f, 0x1.4dea0ap-95f,
     0x1.31f4eap-11f, 0x1.726f86p-37f, 0.0f, 0x1.586798p-64f, 0x1.3baf66p-32f, 0.0f,
     0x1.062838p-116f, 0.0f, 0x1.078c0ap-41f, 0x1.45f9ap-117f, 0.0f, 0x1.099ba8p-68f,
     0x1.064ad2p-57f, 0x1.446906p-117f, 0x1.bedb0ep-21f, 0x1.da3054p-12f,
     0x1.f2b804p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a1f68ap-61f, 0x1.7d94c6p-106f, 0.0f,
     0.0f, 0x1.e26d2cp-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e991a2p-108f,
     0x1.cb9a28p-1f, 0.0f, 0.0f, 0x1.9b067cp-102f, 0x1.d66266p-41f, 0x1.ba0a38p-25f,
     0.0f, 0x1.dfd19p-118f, 0.0f, 0x1.61da1ap-6f, 0.0f, 0.0f, 0.0f, 0x1.fd02eap-33f,
     0.0f, 0x1.220d36p-3f, 0x1.8d7cc4p-23f, 0.0f, 0x1.a43b08p-49f, 0.0f,
     0x1.f87738p-9f, 0x1.bf6f6ep-44f, 0x1.f50008p-38f, 0x1.db04f2p-49f, 0.0f, 0.0f,
     0x1.4afb7cp-87f, 0x1.58d2d4p-98f, 0x1.9d82c2p-97f, 0x1.aa01e6p-61f,
     0x1.f147c2p-15f, 0x1.368992p-65f, 0x1.54d712p-119f, 0.0f, 0x1.80b154p-115f,
     0x1.9da28p-8f, 0x1.0df5b4p-114f, 0x1.07a306p-35f, 0.0f, 0x1.38b55cp-88f, 0.0f,
     0x1.c9341cp-75f, 0.0f, 0.0f, 0.0f, 0x1.9d575ap-72f, 0.0f, 0.0f, 0x1.a7d6f8p-77f,
     0.0f, 0x1.33fec4p-4f, 0x1.381498p-124f, 0x1.65f9d4p-36f, 0.0f, 0x1.f08068p-80f,
     0x1.d3e16cp-87f, 0x1.02510cp-73f, 0x1.040b38p-90f, 0x1.9b48c8p-10f, 0.0f, 0.0f,
     0.0f, 0x1.fa2a16p-105f, 0.0f, 0.0f, 0x1.20f566p-78f, 0.0f, 0x1.37261cp-23f, 0.0f,
     0x1.6d98bep-10f, 0.0f, 0x1.65c7e2p-74f, 0.0f, 0x1.50a30ap-1f, 0.0f,
     0x1.9da2dep-4f, 0.0f, 0.0f, 0x1.c73856p-32f, 0x1.92acd8p-84f, 0x1.468008p-124f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8bf092p-10f, 0x1.e9f382p-24f, 0.0f, 0.0f,
     0x1.e109dap-99f, 0x1.3b7218p-28f, 0x1.593008p-22f, 0.0f, 0x1.19c04ep-19f,
     0x1.e2b36ep-103f, 0.0f, 0x1.ac0c9ap-3f, 0.0f, 0.0f, 0x1.deaffep-100f,
     0x1.ae24a8p-17f, 0.0f, 0.0f, 0.0f, 0x1.33c15p-24f, 0.0f, 0x1.5f0b14p-59f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.94dbb8p-93f, 0.0f, 0.0f, 0x1.10a912p-57f,
     0x1.f19432p-54f, 0.0f, 0x1.e27f18p-86f, 0x1.4e7242p-96f, 0x1.ba3034p-123f,
     0x1.ca9ca4p-104f, 0x1.c7e066p-65f, 0x1.f3237ap-97f, 0.0f, 0x1.29b4b6p-6f, 0.0f,
     0.0f, 0.0f, 0x1.e3c61ap-6f, 0x1.94841ep-26f, 0.0f, 0x1p0f, 0x1.918d06p-94f, 0.0f,
     0x1.3c6f3ep-108f, 0x1.c7114cp-100f, 0.0f, 0.0f, 0x1.f2614cp-108f, 0.0f,
     0x1.4ee924p-20f, 0.0f, 0.0f, 0x1.767c4ap-62f, 0.0f, 0.0f, 0x1.3adf1ap-73f, 0.0f,
     0.0f, 0x1.95b5aep-119f, 0x1.c6739cp-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.780d46p-75f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b24c16p-82f, 0x1.d4f414p-99f, 0.0f, 0.0f,
     0x1.c7acf4p-113f, 0x1.184ebap-8f, 0x1.405c9cp-29f, 0.0f, 0x1.984c1ep-15f,
     0x1.f73b68p-25f, 0.0f, 0x1.cb249ep-65f, 0.0f, 0.0f, 0x1.c903c8p-54f,
     0x1.4405b2p-7f, 0x1.dddd5ep-111f, 0x1.185c18p-76f, 0.0f, 0x1.f461ap-28f,
     0x1.6afba2p-96f, 0x1.38f1f2p-75f, 0x1.a4c294p-110f, 0.0f, 0x1.5430e2p-75f,
     0x1.88341cp-21f, 0.0f, 0.0f, 0x1.d0e75ep-25f, 0.0f, 0.0f, 0x1.9cba74p-30f,
     0x1.7e371p-53f, 0x1.d937ecp-92f, 0x1.a293dep-102f, 0.0f, 0.0f, 0x1.403c0cp-54f,
     0x1.69da26p-7f, 0.0f, 0.0f, 0x1.1e9c24p-21f, 0x1.a80628p-39f, 0.0f,
     0x1.bbc81p-25f, 0.0f, 0x1.1d0c3cp-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4d999ep-21f, 0.0f, 0.0f, 0x1.044476p-104f, 0.0f, 0.0f, 0.0f, 0x1.8969dep-6f,
     0.0f, 0x1.e044a4p-85f, 0.0f, 0x1.d68a98p-75f, 0x1.12f866p-96f, 0x1.8dce28p-70f,
     0x1.74904p-14f, 0.0f, 0.0f, 0x1.9db432p-57f, 0x1.03e10ap-15f, 0.0f,
     0x1.265454p-76f, 0x1.f9c1d2p-67f, 0x1.5979d8p-25f, 0.0f, 0x1.6a8c22p-77f,
     0x1.f28d4ap-92f, 0.0f, 0x1.e5064ap-58f, 0x1.24f3cep-85f, 0x1.adbc4cp-81f, 0.0f,
     0x1.bd67e8p-2f, 0.0f, 0x1.ceb87cp-55f, 0.0f, 0x1.1153cp-49f, 0x1.fe642cp-125f,
     0x1.189338p-40f, 0.0f, 0x1.43c1acp-107f, 0x1.ced76ep-112f, 0.0f, 0.0f,
     0x1.41ac42p-120f, 0x1.dea5ecp-60f, 0.0f, 0x1.ee8868p-119f, 0x1.31a51ap-34f, 0.0f,
     0.0f, 0x1.01ded4p-95f, 0x1.0ba528p-98f, 0.0f, 0x1.e8855ep-81f, 0x1.d3611ep-58f,
     0x1.e14d6ep-5f, 0.0f, 0x1.6e3f92p-31f, 0x1.3480bp-87f, 0.0f, 0.0f, 0.0f,
     0x1.a30f0ap-93f, 0.0f, 0x1.e89464p-114f, 0x1.77ecbcp-68f, 0.0f, 0.0f,
     0x1.de2512p-20f, 0x1.baf6aap-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d79212p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2c7c76p-21f, 0.0f, 0.0f,
     0x1.f45f6p-6f, 0x1.24622cp-86f, 0x1.b870bep-17f, 0.0f, 0x1.8355f4p-58f,
     0x1.4ee58cp-66f, 0x1.84a5eep-119f, 0x1.750162p-123f, 0x1.ebb612p-10f, 0.0f,
     0x1.e9fbdap-96f, 0.0f, 0x1.e5de94p-12f, 0.0f, 0x1.9949aep-101f, 0x1.e2490ep-17f,
     0x1.fcf33cp-15f, 0x1.e4a186p-29f, 0x1.9cd65cp-20f, 0.0f, 0.0f, 0.0f,
     0x1.96869cp-116f, 0x1.23e03ep-48f, 0x1.c5aa8cp-100f, 0.0f, 0.0f,
     0x1.42228ep-101f, 0x1.d0ff0ep-81f, 0x1.a79e5p-100f, 0x1.092c2ap-51f, 0.0f,
     0x1.8e06bep-56f, 0.0f, 0.0f, 0x1.73776p-95f, 0.0f, 0x1.5a3386p-114f,
     0x1.a310f6p-30f, 0.0f, 0x1.7ee53cp-77f, 0x1.c6b462p-24f, 0x1.9c168p-14f,
     0x1.6e1aacp-3f, 0.0f, 0.0f, 0.0f, 0x1.9767cap-8f, 0x1.de6326p-6f, 0.0f,
     0x1.95ae5ep-68f, 0.0f, 0x1.311a56p-9f, 0.0f, 0x1.eeb7fp-100f, 0.0f,
     0x1.a1bbep-67f, 0x1.4b657ap-104f, 0x1.dff85ep-66f, 0.0f, 0x1.bc382ap-95f,
     0x1.5330bcp-124f, 0.0f, 0x1.3fb606p-61f, 0x1.96e358p-55f, 0x1.a0885p-104f,
     0x1.0cfc48p-8f, 0.0f, 0.0f, 0x1.bf3fe2p-126f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.698926p-27f, 0.0f, 0x1.ffc446p-118f, 0.0f, 0.0f, 0.0f, 0x1.cf0ddep-56f,
     0x1.5597e4p-70f, 0.0f, 0x1.bb315ep-12f, 0x1.028868p-20f, 0x1.f8be3cp-10f,
     0x1.7078b4p-99f, 0x1.8703cp-41f, 0.0f, 0x1.ae04ep-24f, 0x1.665d82p-51f,
     0x1.9d8f7ep-53f, 0x1.f64b82p-34f, 0x1.84062cp-47f, 0.0f, 0x1.c032a4p-53f,
     0x1.d9ff14p-99f, 0x1.7b530cp-40f, 0x1.fdd87cp-92f, 0x1.57501ep-116f, 0.0f, 0.0f,
     0.0f, 0x1.d225c2p-60f, 0.0f, 0.0f, 0x1.1edef6p-120f, 0x1.cbfd6ap-23f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.51ee34p-15f, 0.0f, 0x1.800d0ep-5f, 0.0f, 0x1.4a7612p-44f,
     0.0f, 0.0f, 0x1.ec3a8p-71f, 0x1.652588p-41f, 0.0f, 0x1.c8e9aep-6f,
     0x1.8b673ep-94f, 0.0f, 0.0f, 0x1.f1ce22p-121f, 0.0f, 0.0f, 0.0f, 0x1.ea285p-38f,
     0x1.910bap-103f, 0x1.ecdc7cp-3f, 0.0f, 0x1.ab2718p-115f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ee5092p-44f, 0.0f, 0x1.5a5d02p-72f, 0x1.d8cd8ap-90f, 0x1.011c32p-45f,
     0x1.8367aep-93f, 0.0f, 0.0f, 0x1.dc9534p-30f, 0.0f, 0x1.a57df4p-109f,
     0x1.920502p-13f, 0.0f, 0x1.34e694p-46f, 0x1.94255cp-27f, 0.0f, 0x1.7c55e8p-11f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3666c4p-103f, 0x1.0f6926p-73f, 0.0f,
     0x1.cf2dd4p-23f, 0x1.0b7b0cp-14f, 0.0f, 0x1.a7d57cp-87f, 0.0f, 0.0f,
     0x1.c662acp-12f, 0x1.8aafdap-120f, 0.0f, 0x1.54dfc6p-121f, 0x1.6248e4p-117f,
     0x1.9dd75ep-122f, 0x1.9ccb2ap-79f, 0x1.534e9cp-33f, 0x1.4d8b4ep-81f, 0.0f,
     0x1.723f38p-53f, 0x1.67ee4ap-39f, 0x1.00065cp-62f, 0.0f, 0x1.92cc1cp-18f,
     0x1.9d888cp-78f, 0.0f, 0x1.97f688p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5f9feap-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.912246p-70f, 0x1.830e04p-56f,
     0x1.4eb8a2p-79f, 0.0f, 0.0f, 0x1.90f81p-41f, 0x1.7a257ep-49f, 0.0f, 0.0f,
     0x1.868ff4p-65f, 0.0f, 0.0f, 0.0f, 0x1.9a7c12p-46f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bcb73ep-97f, 0x1.55f60ap-81f, 0x1.1a17ap-73f, 0.0f, 0x1.9b56d8p-115f, 0.0f,
     0x1.b2981p-117f, 0.0f, 0x1.f80fc4p-91f, 0x1.a363c2p-89f, 0.0f, 0x1.d48d5cp-27f,
     0.0f, 0.0f, 0.0f, 0x1.55e144p-36f, 0x1.1a076ep-116f, 0.0f, 0.0f, 0x1.f3251cp-10f,
     0x1.b8a60cp-9f, 0x1.53bddap-98f, 0.0f, 0.0f, 0.0f, 0x1.15d6b4p-21f, 0.0f,
     0x1.7b23cep-19f, 0x1.ca8afep-3f, 0.0f, 0x1.0a2eeep-111f, 0.0f, 0.0f, 0.0f,
     0x1.2cbdb6p-96f, 0.0f, 0x1.a6eafcp-120f, 0x1.bb4e4p-12f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.45c88cp-33f, 0.0f, 0.0f, 0.0f, 0x1.1d6be2p-57f, 0x1.f17eacp-26f,
     0x1.056bfcp-37f, 0x1.211d12p-26f, 0x1.568d18p-15f, 0x1.83678ap-105f,
     0x1.662372p-97f, 0.0f, 0.0f, 0x1.f1bd2p-3f, 0x1.ef75bap-28f, 0.0f,
     0x1.0892dep-25f, 0.0f, 0x1.1c67cap-99f, 0x1.46b292p-19f, 0.0f, 0x1.dabc0ep-76f,
     0.0f, 0.0f, 0.0f, 0x1.a5cb68p-84f, 0x1.cb79f2p-95f, 0x1.5caf16p-28f, 0.0f,
     0x1.c8f8c8p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.be185ap-122f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e359fep-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9ce89cp-104f, 0x1.cc0c24p-6f, 0x1.827f9ep-101f, 0.0f
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
            tmp1 = Sleef_finz_log1pf1_u10purecfma(tmp0);
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
    printf("Sleef_finz_log1pf1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_log1pf1_u10purecfma bench acc %a\n", global_bench_acc);
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
