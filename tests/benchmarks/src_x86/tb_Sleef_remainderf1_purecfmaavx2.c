/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_remainderf1_purecfma.c --function \
 *     Sleef_remainderf1_purecfma --arity 2 --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary32,binary32 --bench \
 *     --no-embedded-bin --target x86_sse2
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
     0.0f, 0x1.03ac04p-97f, 0.0f, 0.0f, 0.0f, 0x1.723eb4p-101f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.7e5b4p-88f, 0x1.2217d4p-46f, 0x1.94af8cp-15f, 0.0f, 0x1.4442f2p-30f,
     0.0f, 0x1.1db9b6p-121f, 0x1.bb0502p-5f, 0x1.a6f2bp-25f, 0.0f, 0x1.8805e8p-110f,
     0.0f, 0x1.170ed6p-89f, 0x1.ff93e2p-68f, 0.0f, 0x1.d32204p-121f, 0.0f, 0.0f,
     0x1.62086p-58f, 0.0f, 0x1.49bafcp-29f, 0.0f, 0.0f, 0x1p0f, 0x1.065c08p-15f, 0.0f,
     0x1.d84cbp-71f, 0x1.48f67cp-96f, 0x1.ff2ddap-57f, 0.0f, 0.0f, 0x1.256718p-58f,
     0x1.1b9abep-107f, 0x1.cbaa62p-116f, 0x1.d719f8p-30f, 0.0f, 0.0f, 0.0f,
     0x1.ebd65ap-7f, 0.0f, 0.0f, 0x1.62747p-109f, 0.0f, 0x1.691a6cp-82f, 0.0f,
     0x1.a3697ap-64f, 0x1.96af92p-36f, 0x1.d2996p-42f, 0.0f, 0x1.755efcp-75f, 0.0f,
     0x1.d8ce2cp-1f, 0.0f, 0x1.65231cp-6f, 0x1.4fa5a6p-95f, 0x1.03149p-42f,
     0x1.a038eep-86f, 0.0f, 0.0f, 0x1.64366ap-113f, 0x1.ae6114p-95f, 0.0f,
     0x1.d0ea8cp-2f, 0x1.e6cb7p-94f, 0.0f, 0x1.c59574p-48f, 0x1.7156fp-90f,
     0x1.12e328p-115f, 0x1.f850dap-126f, 0.0f, 0.0f, 0x1.eab7a2p-51f, 0x1.14608ap-87f,
     0x1.5e47fp-108f, 0x1.be36cp-16f, 0x1.1d4db2p-4f, 0.0f, 0.0f, 0x1.1cfeccp-67f,
     0x1.02c186p-97f, 0x1.90d64ap-22f, 0.0f, 0.0f, 0x1.ca05cep-24f, 0x1.7aa28ep-19f,
     0x1.1d29dep-121f, 0.0f, 0x1.2fbf22p-8f, 0x1.04f266p-50f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.24f59p-125f, 0.0f, 0x1.cecffep-105f, 0.0f, 0x1.b9385ap-99f, 0.0f,
     0x1.f94ef6p-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.22c4eep-30f, 0x1.75eb98p-95f,
     0.0f, 0x1.04cd14p-8f, 0x1.f5ca26p-79f, 0x1.33ab02p-77f, 0x1.7c85a4p-13f, 0.0f,
     0.0f, 0x1.bdd6dep-59f, 0.0f, 0x1.45b7b6p-13f, 0x1.018414p-72f, 0x1.1f864ep-13f,
     0x1.45c2eap-117f, 0.0f, 0x1.d5fb6cp-124f, 0x1.f24df2p-65f, 0x1.f22d0cp-23f,
     0x1.641d76p-76f, 0x1.11b842p-24f, 0x1.a5d14ap-10f, 0x1.2c0082p-120f,
     0x1.1346b2p-83f, 0.0f, 0x1.dc22cep-15f, 0x1.d97d4cp-36f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6e3074p-121f, 0.0f, 0.0f, 0x1.bada9p-70f, 0.0f, 0.0f, 0x1.3c67a2p-4f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ed0fdcp-46f, 0.0f, 0.0f, 0x1.facd8ap-97f, 0.0f,
     0x1.0eaedcp-112f, 0.0f, 0x1.1ce0eep-110f, 0x1.952e34p-14f, 0x1.ece9cp-107f, 0.0f,
     0x1.e78ca2p-54f, 0x1.9a5606p-25f, 0.0f, 0x1.e704c4p-104f, 0x1.dabd2cp-117f,
     0x1.ef6da8p-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.793a1p-50f, 0x1.db85f6p-57f,
     0x1.a58e8cp-62f, 0x1.202f9p-117f, 0x1.ee6c4ap-99f, 0x1.03f73p-34f, 0.0f,
     0x1.6df2f2p-59f, 0.0f, 0.0f, 0x1.d82118p-110f, 0x1.1f22c8p-95f, 0.0f,
     0x1.896812p-31f, 0x1.e4188ep-52f, 0x1.25138p-1f, 0.0f, 0x1.d67b4ap-97f,
     0x1.24ad3p-121f, 0x1.37f16p-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bbb062p-60f, 0.0f, 0.0f, 0x1.e42208p-69f, 0x1.ea888cp-67f, 0.0f,
     0x1.66a066p-77f, 0x1.6df4e8p-94f, 0x1.4e2166p-15f, 0x1.f99f26p-106f,
     0x1.d809fep-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f14e7ep-18f, 0.0f, 0.0f,
     0x1.128efap-12f, 0.0f, 0x1.5488e2p-1f, 0x1.3d6684p-46f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d7f544p-126f, 0x1.164b8ap-91f, 0.0f, 0.0f, 0.0f, 0x1.02e156p-63f,
     0x1.61e624p-100f, 0x1.d11f6cp-9f, 0.0f, 0x1.66c8c6p-84f, 0.0f, 0.0f, 0.0f,
     0x1.63ef6ep-8f, 0.0f, 0x1.bbff8p-116f, 0.0f, 0.0f, 0x1.40e208p-121f,
     0x1.78f5dcp-9f, 0.0f, 0x1.e620e4p-123f, 0x1.0827cap-51f, 0x1.fde5ecp-113f, 0.0f,
     0.0f, 0.0f, 0x1.760f1ap-102f, 0.0f, 0x1.ef35f8p-126f, 0x1.f7a70ep-20f, 0.0f,
     0x1.a13afp-92f, 0.0f, 0.0f, 0.0f, 0x1.f2372p-116f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d1ac86p-27f, 0.0f, 0x1.fd5266p-107f, 0.0f, 0.0f, 0x1.e11ea2p-125f,
     0x1.08ed36p-75f, 0x1.c66dacp-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.cdc13ap-103f, 0.0f, 0x1.055d7cp-104f, 0.0f, 0.0f, 0.0f,
     0x1.edd68ep-37f, 0.0f, 0x1.b228cep-125f, 0x1.00b77ap-100f, 0x1.af5258p-85f,
     0x1.e7951ep-7f, 0.0f, 0.0f, 0x1.f096fcp-99f, 0.0f, 0.0f, 0.0f, 0x1.471f8cp-17f,
     0x1.c2190ep-58f, 0x1.883c0ep-32f, 0x1.08bf42p-90f, 0.0f, 0x1.6baefap-93f,
     0x1.6f9fa6p-103f, 0.0f, 0x1.507aa6p-114f, 0.0f, 0.0f, 0x1.bfafa6p-51f, 0.0f,
     0x1.476042p-25f, 0.0f, 0.0f, 0.0f, 0x1.4db688p-95f, 0.0f, 0x1.9c10ap-57f, 0.0f,
     0x1.ca66b8p-59f, 0.0f, 0x1.368f84p-33f, 0x1.35c092p-31f, 0x1.7c3acep-124f,
     0x1.ed37e4p-50f, 0x1.375494p-114f, 0x1.4c0ccp-27f, 0x1.0562ecp-55f, 0.0f, 0.0f,
     0x1.85b786p-64f, 0x1.c2f416p-38f, 0x1.b3b81cp-116f, 0.0f, 0.0f, 0x1.7f5f5cp-10f,
     0.0f, 0.0f, 0x1.d2489cp-115f, 0x1.ec0e98p-79f, 0.0f, 0x1.37d148p-88f, 0.0f, 0.0f,
     0x1.b4961cp-62f, 0.0f, 0.0f, 0x1.8945a4p-108f, 0x1.8dfda8p-83f, 0.0f,
     0x1.b4ebb6p-61f, 0.0f, 0.0f, 0x1.2706f4p-59f, 0x1.2bf8f8p-80f, 0.0f,
     0x1.9d14c6p-89f, 0x1.1b168p-25f, 0x1.e20d78p-93f, 0x1.e82caap-115f, 0.0f,
     0x1.916e8cp-6f, 0.0f, 0x1.9de1ecp-87f, 0.0f, 0x1.4f93bcp-111f, 0x1.e73a74p-99f,
     0.0f, 0x1.23822p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1148c6p-87f,
     0x1.738f9ap-124f, 0x1.e2f018p-113f, 0x1p0f, 0.0f, 0x1.4a026cp-125f,
     0x1.23d2d4p-44f, 0x1.f36fcep-99f, 0x1.c89c8ap-95f, 0.0f, 0x1.4c4902p-53f,
     0x1.a9de52p-91f, 0.0f, 0.0f, 0x1.eb6f12p-27f, 0x1.5e025ap-49f, 0x1.e3fe54p-33f,
     0.0f, 0.0f, 0x1.6cbed8p-43f, 0x1.b1e81ep-46f, 0x1.9e636cp-110f, 0.0f,
     0x1.68ac02p-44f, 0x1.499e3p-24f, 0x1.b61a56p-104f, 0x1.0bb9dap-23f,
     0x1.ac17b8p-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8fc392p-13f, 0x1.f5884ap-4f,
     0x1.c0f84ep-125f, 0.0f, 0x1.461c3ap-110f, 0.0f, 0.0f, 0x1.c60a82p-1f,
     0x1.ae8d94p-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.98a7a2p-6f,
     0x1.b99004p-41f, 0.0f, 0.0f, 0.0f, 0x1.62468ap-81f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9ee9e2p-42f, 0.0f, 0x1.cc7528p-121f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d0fadep-106f, 0.0f, 0.0f, 0x1.0a023ap-43f, 0x1.c40dap-29f, 0.0f, 0.0f, 0.0f,
     0x1.c3252cp-53f, 0x1.f57946p-53f, 0.0f, 0x1.9c4dep-91f, 0x1.af14ccp-121f, 0.0f,
     0x1.34f1fep-95f, 0x1.bc57d2p-13f, 0x1.7c34d4p-62f, 0x1.257f4ep-3f,
     0x1.ca2bd6p-6f, 0x1.a45ef4p-125f, 0x1.f5a97ep-26f, 0x1.b8c39cp-115f,
     0x1.c0f9c4p-82f, 0.0f, 0x1.8b7572p-21f, 0.0f, 0.0f, 0.0f, 0x1.65aab6p-73f,
     0x1.35f21ep-24f, 0.0f, 0.0f, 0x1.521516p-28f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7499c8p-103f, 0x1.92865p-68f, 0.0f, 0.0f, 0.0f, 0x1.c92cbep-89f, 0.0f,
     0x1.45d6bp-28f, 0.0f, 0.0f, 0.0f, 0x1.829cf6p-108f, 0x1.30b3f2p-46f,
     0x1.07ae94p-5f, 0x1.c8da8p-104f, 0x1.961abep-98f, 0.0f, 0.0f, 0.0f,
     0x1.ade0fap-73f, 0x1.d85c38p-91f, 0x1.48eaap-101f, 0.0f, 0.0f, 0x1.6975e4p-90f,
     0x1.4113d4p-126f, 0x1.0d02e2p-52f, 0x1.80539ap-70f, 0x1.42a9dp-31f, 0.0f,
     0x1.9f8bdp-40f, 0x1.463c8ap-107f, 0.0f, 0x1.6f9938p-102f, 0x1.945a94p-31f,
     0x1.9c2c3ep-6f, 0.0f, 0x1.fa73c2p-75f, 0x1.c69e7cp-120f, 0x1.b5a92ap-101f, 0.0f,
     0.0f, 0.0f, 0x1.6f0d04p-59f, 0x1.5eecc6p-33f, 0x1.52cedap-73f, 0.0f,
     0x1.d28cd2p-61f, 0.0f, 0.0f, 0x1.79cfd6p-26f, 0.0f, 0x1.d5ce9p-12f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c51f96p-102f, 0.0f, 0x1.830058p-97f,
     0x1.3bbeccp-106f, 0x1.0b92bcp-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.aae512p-13f,
     0x1.2a5b1ep-20f, 0x1.9d1078p-119f, 0.0f, 0x1.dba372p-5f, 0x1.48a9c2p-13f,
     0x1.1db7fap-71f, 0x1.d405d2p-21f, 0x1.3a4908p-55f, 0x1.25e62ep-28f, 0.0f,
     0x1.d8dbc8p-16f, 0.0f, 0x1.035e0cp-106f, 0x1.ba2a48p-63f, 0.0f, 0x1.e2e57ap-56f,
     0.0f, 0x1.8992a2p-24f, 0.0f, 0.0f, 0.0f, 0x1.6424c6p-54f, 0x1.6ae246p-77f,
     0x1.23da9ap-102f, 0.0f, 0.0f, 0x1.b3fabcp-23f, 0.0f, 0.0f, 0x1.1898cap-2f, 0.0f,
     0x1.018beep-49f, 0x1.081bcap-85f, 0x1.0ee21cp-7f, 0x1.b99334p-100f, 0.0f, 0.0f,
     0x1.d27612p-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.04afb4p-27f, 0.0f, 0.0f,
     0x1.062f4cp-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7b2c1ep-59f, 0.0f,
     0x1.bf387ep-39f, 0.0f, 0.0f, 0x1.e1084ep-77f, 0.0f, 0.0f, 0.0f, 0x1.dfc0fp-88f,
     0x1.9be1a4p-66f, 0.0f, 0x1.70f016p-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8ac71p-100f, 0x1.d217fap-25f, 0.0f, 0x1.66077p-9f, 0.0f, 0x1.72501ep-59f,
     0x1.9b3d94p-17f, 0.0f, 0x1.de5e82p-105f, 0x1.2fba2cp-112f, 0x1.57def6p-117f,
     0.0f, 0x1.8169cp-1f, 0.0f, 0x1.a138e4p-15f, 0x1.596794p-54f, 0x1.5414d4p-64f,
     0.0f, 0x1.f391fp-80f, 0x1.9d05fp-52f, 0.0f, 0.0f, 0.0f, 0x1.6ded78p-56f, 0.0f,
     0.0f, 0x1.e6051p-35f, 0.0f, 0x1.34cfecp-96f, 0x1.6d9fd2p-90f, 0.0f,
     0x1.094a8ep-59f, 0x1.297948p-103f, 0.0f, 0x1.b55ed6p-62f, 0.0f, 0.0f,
     0x1.ee67acp-97f, 0.0f, 0.0f, 0x1.5a7694p-85f, 0x1.dd50b8p-60f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.351c0ep-89f, 0.0f, 0x1.598104p-49f, 0.0f, 0x1.81669cp-32f,
     0.0f, 0.0f, 0x1.a4ffdep-114f, 0.0f, 0x1.09f60cp-120f, 0.0f, 0x1.63dadp-59f,
     0x1.c8a542p-104f, 0.0f, 0.0f, 0x1.4a2f74p-18f, 0x1.064c52p-49f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.3801bep-27f, 0x1.c3170ep-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.29cabap-112f, 0.0f, 0.0f, 0.0f, 0x1.bf4306p-83f, 0x1.28fd1cp-116f, 0.0f,
     0x1.503e38p-45f, 0.0f, 0x1.3bf33ep-74f, 0.0f, 0.0f, 0.0f, 0x1.13373cp-31f, 0.0f,
     0.0f, 0x1.ff1d3ap-3f, 0x1.443d7ap-125f, 0x1.da3b56p-5f, 0.0f, 0x1.fb6a3p-75f,
     0x1.0679fp-2f, 0.0f, 0x1.d34d4ep-70f, 0.0f, 0.0f, 0x1.bee746p-84f,
     0x1.48cbd6p-98f, 0.0f, 0x1.303102p-15f, 0.0f, 0x1.5f297cp-73f, 0.0f,
     0x1.6f2098p-51f, 0x1.45d6e2p-31f, 0x1.a6e1acp-102f, 0.0f, 0.0f, 0.0f,
     0x1.01d4dcp-113f, 0x1p0f, 0.0f, 0x1.bef14ap-66f, 0.0f, 0x1.13fcdap-42f,
     0x1.8fb11ap-68f, 0x1.d2c834p-120f, 0.0f, 0x1.c3f866p-36f, 0.0f, 0x1.178868p-58f,
     0x1p0f, 0x1.2d5bdap-35f, 0.0f, 0.0f, 0x1.22dc3ep-23f, 0x1.441b6cp-68f,
     0x1.999bdap-92f, 0.0f, 0.0f, 0x1.471244p-95f, 0x1.903a1ep-47f, 0.0f,
     0x1.c5ae9p-120f, 0x1.125f78p-108f, 0.0f, 0x1.b0b96ep-25f, 0x1.d6767cp-36f,
     0x1.f0b578p-27f, 0.0f, 0x1.d8e2f2p-78f, 0x1.afebf8p-11f, 0.0f, 0.0f, 0.0f,
     0x1.bf619ep-84f, 0.0f, 0x1.3b13a6p-33f, 0.0f, 0x1.608beep-48f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.325802p-66f, 0x1.5f5c7cp-71f, 0.0f, 0x1.912658p-9f, 0.0f, 0.0f, 0.0f,
     0x1.792cacp-13f, 0x1.ecca0cp-13f, 0x1.5bd816p-44f, 0x1.647fdcp-112f, 0.0f,
     0x1.db2634p-40f, 0x1.741d78p-5f, 0x1.bbb2dep-10f, 0.0f, 0x1.24d56ep-124f, 0.0f,
     0.0f, 0x1.dcaf8p-56f, 0.0f, 0.0f, 0x1.036cep-28f, 0x1.fdd4bap-47f, 0.0f, 0.0f,
     0.0f, 0x1.1814dap-16f, 0x1.6c10f8p-11f, 0x1.191eccp-53f, 0x1.cae14cp-85f,
     0x1.b7913ep-4f, 0.0f, 0.0f, 0x1.03effep-108f, 0.0f, 0.0f, 0.0f, 0x1.53948p-86f,
     0.0f, 0.0f, 0x1.54331p-67f, 0.0f, 0.0f, 0.0f, 0x1.ba28c6p-95f, 0x1.f16a52p-16f,
     0.0f, 0x1.ed7004p-55f, 0x1.b084b2p-77f, 0.0f, 0x1.d7e1cep-108f, 0x1.2127a8p-53f,
     0.0f, 0x1.7ce12ep-86f, 0.0f, 0.0f, 0x1.c78c68p-124f, 0x1.93f70ep-126f,
     0x1.71cfdcp-22f, 0x1.6fa9f6p-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.560ec4p-2f, 0.0f, 0.0f, 0x1.f14f3ep-59f, 0.0f, 0.0f, 0x1.d98cb8p-61f,
     0x1.401248p-56f, 0.0f, 0x1.f78096p-19f, 0x1.4605p-11f, 0x1.072a98p-121f,
     0x1.6b5b68p-107f, 0x1.fbc59ep-124f, 0x1.e5dfc2p-39f, 0.0f, 0.0f,
     0x1.147eaep-115f, 0.0f, 0x1.224926p-70f, 0.0f, 0x1.4cff5p-57f, 0.0f, 0.0f, 0.0f,
     0x1.0c0836p-107f, 0.0f, 0x1.35a14cp-16f, 0.0f, 0x1.98a44cp-42f, 0.0f, 0.0f,
     0x1.8eb4c8p-92f, 0x1.3cb28cp-15f, 0x1.6d0054p-12f, 0x1.3541e8p-13f, 0.0f,
     0x1.2b01dep-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.59088ap-80f, 0.0f, 0.0f, 0.0f,
     0x1.7fd40ep-41f, 0.0f, 0x1.0ab9acp-114f, 0.0f, 0x1.8ac478p-31f, 0.0f,
     0x1.f0e5b2p-15f, 0x1.e5aef2p-14f, 0x1.10366ap-11f, 0x1.518c2p-71f, 0.0f,
     0x1.122e42p-38f, 0x1.85f76p-5f, 0x1.f4141ap-43f, 0x1.d349aap-71f, 0.0f, 0.0f,
     0x1.ce08dp-107f, 0.0f, 0.0f, 0x1.182096p-41f, 0.0f, 0.0f, 0x1.67805ep-94f,
     0x1.a0b1d6p-62f, 0x1.75b8bcp-16f, 0x1.a0273ep-66f, 0x1.0d1db4p-71f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4f1022p-1f, 0x1.96ad1ep-124f, 0x1.edff6cp-20f, 0x1.9c7328p-48f,
     0x1.288dfp-9f, 0.0f, 0x1.faaccp-91f, 0.0f, 0x1.e5cdb2p-77f, 0x1.164012p-59f,
     0x1.f5fea2p-74f, 0x1.d0550ep-33f, 0.0f, 0x1.0a5dc4p-2f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f407b2p-74f, 0.0f, 0.0f, 0x1.69a18ep-45f, 0x1.34dc3ep-87f, 0x1.eb12e6p-16f,
     0x1.4d2642p-64f, 0x1.adabc8p-58f, 0x1.12a378p-58f, 0x1.41953ep-68f, 0.0f, 0.0f,
     0x1.a26258p-2f, 0x1.4c3d5ep-35f, 0.0f, 0x1.90efbcp-22f, 0.0f, 0x1.873bc4p-15f,
     0.0f, 0.0f, 0x1.56526ep-83f, 0x1.647304p-34f, 0x1.a73278p-2f, 0x1.9a88dp-84f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b70186p-23f, 0x1.5daf6ap-74f, 0x1.0195ap-119f,
     0x1.137de4p-18f, 0.0f, 0.0f, 0.0f, 0x1.0eda96p-41f, 0x1.4d626p-117f,
     0x1.9f6da6p-40f, 0x1.41f1ccp-66f, 0x1.8b42dap-87f, 0x1.8b6cdcp-120f,
     0x1.fc602ap-53f, 0.0f, 0x1.0ca6d2p-115f, 0x1.ab023p-58f, 0x1.b86544p-53f,
     0x1.8f88p-34f, 0x1.337bf8p-103f, 0.0f, 0x1.ad90a6p-123f
};
static const float external_bench_wrapper_input_table_arg1[1001]  = {
     0x1.ffb996p-89f, 0.0f, 0x1.8c7c98p-95f, 0x1.66724ap-77f, 0x1.4d102ep-18f, 0.0f,
     0.0f, 0.0f, 0x1.c69f72p-18f, 0.0f, 0.0f, 0x1.efff36p-25f, 0x1.be87e2p-60f, 0.0f,
     0x1.5945b6p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a2c04ep-57f,
     0.0f, 0x1.82f442p-35f, 0.0f, 0.0f, 0.0f, 0x1.96166ap-103f, 0x1.aaca4p-48f, 0.0f,
     0x1.4a5a3cp-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3f8a4ap-12f,
     0x1.1718c4p-55f, 0.0f, 0x1.52f60ap-55f, 0x1.728cf2p-29f, 0.0f, 0.0f, 0.0f,
     0x1.e7d7c6p-71f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.859ad2p-108f, 0x1.c9f01ap-11f,
     0x1.0f3064p-86f, 0x1.06cc06p-35f, 0.0f, 0x1.5427f6p-24f, 0x1.efbaf4p-74f,
     0x1.94654ap-55f, 0x1.202378p-86f, 0x1.7a886ap-36f, 0.0f, 0x1.84ed62p-36f,
     0x1.a5658p-91f, 0x1.5a0676p-27f, 0x1.20425ap-111f, 0.0f, 0.0f, 0.0f,
     0x1.f6139p-103f, 0.0f, 0.0f, 0.0f, 0x1.9e2f98p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ccaea8p-107f, 0.0f, 0x1.e92604p-4f, 0x1.df8182p-85f, 0.0f,
     0x1.09f5fep-126f, 0.0f, 0x1.5e71e4p-101f, 0x1.fdfbb6p-116f, 0.0f,
     0x1.b38cbap-17f, 0x1.e694f2p-43f, 0.0f, 0x1.751f2ap-69f, 0x1.33bf14p-59f,
     0x1.1d37f2p-18f, 0x1.49b808p-48f, 0.0f, 0.0f, 0x1p0f, 0x1.36867ep-59f,
     0x1.4d08fep-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.51b9fap-28f,
     0x1.01e7aep-84f, 0.0f, 0x1.68c6fp-88f, 0x1.904a5cp-86f, 0x1.192cb6p-43f,
     0x1.673cc6p-108f, 0x1.f64a8p-77f, 0.0f, 0x1.af47c6p-80f, 0.0f, 0x1.53d962p-103f,
     0x1.dbfefep-10f, 0.0f, 0.0f, 0x1.3f8a32p-40f, 0x1.25353ap-94f, 0x1.e9d23cp-26f,
     0x1.ff16e2p-16f, 0.0f, 0x1.ce5adcp-99f, 0.0f, 0x1.da12a4p-48f, 0x1.98f554p-1f,
     0.0f, 0x1.6e91eap-114f, 0.0f, 0x1.0e4f4ep-64f, 0x1.2942ecp-84f, 0.0f, 0.0f,
     0x1.d723c8p-69f, 0x1.e82984p-7f, 0x1.b21df6p-104f, 0x1.f45744p-58f,
     0x1.03ed1ap-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8b70ccp-9f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9e339p-91f, 0.0f, 0.0f, 0x1.022a92p-53f, 0.0f, 0x1.5990bp-36f, 0.0f,
     0x1.4ec346p-120f, 0.0f, 0.0f, 0x1.92c436p-61f, 0x1.085f8p-102f, 0x1.09a70ap-50f,
     0.0f, 0.0f, 0.0f, 0x1.dd0dd2p-73f, 0x1.fca8ccp-125f, 0x1.3f5aaap-124f,
     0x1.ca7bb4p-107f, 0x1.c22d5ep-79f, 0.0f, 0.0f, 0x1.4421cap-57f, 0x1.c79efap-33f,
     0.0f, 0x1.771c1cp-94f, 0x1.8f0caap-24f, 0x1.a11972p-107f, 0.0f, 0x1.c8280ep-45f,
     0.0f, 0x1.610fdap-5f, 0x1.c61014p-67f, 0.0f, 0x1.4dcbdap-68f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.73c2bep-2f, 0x1.306e42p-84f, 0.0f, 0.0f, 0x1.f7519p-55f, 0.0f,
     0x1.88377ep-114f, 0.0f, 0x1.a17af6p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.104db6p-50f, 0x1.d93ce6p-85f, 0x1.9a598ap-22f, 0x1.29c388p-5f, 0.0f,
     0x1.8f0612p-49f, 0x1.624336p-94f, 0.0f, 0x1.e39016p-51f, 0x1.47dbb6p-41f,
     0x1.64f438p-119f, 0x1.9b8f78p-13f, 0x1.465fa2p-121f, 0x1.034f6p-12f,
     0x1.82029ep-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7ba192p-90f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.67f2fep-104f, 0x1.e7bee6p-117f, 0x1.b58482p-74f,
     0x1.dc6ab6p-95f, 0x1.e2da5cp-85f, 0x1.d566e4p-117f, 0x1.c748e2p-92f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b5affp-54f, 0x1.7ea2f8p-72f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0bd762p-108f, 0.0f, 0.0f, 0x1.e48f3ep-46f, 0.0f, 0x1.798adep-4f, 0.0f,
     0x1.2a9cf6p-23f, 0x1.814596p-86f, 0.0f, 0x1.389d72p-50f, 0.0f, 0x1.c7036cp-54f,
     0.0f, 0.0f, 0x1.1107fap-119f, 0.0f, 0.0f, 0.0f, 0x1.54c428p-84f, 0x1.2c8494p-76f,
     0x1.f33388p-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.59fe7ap-116f, 0x1.80ef4cp-17f,
     0x1.a09196p-86f, 0x1.3bc9b6p-13f, 0x1.b9a7p-82f, 0.0f, 0.0f, 0.0f,
     0x1.f49a8cp-33f, 0x1.f63968p-109f, 0.0f, 0x1.4083b6p-115f, 0.0f, 0x1.799816p-28f,
     0x1.377dfp-109f, 0x1.b9212cp-109f, 0.0f, 0x1.efce46p-125f, 0x1.f47b3ap-115f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2c34c8p-21f, 0x1.b49afcp-60f, 0.0f,
     0x1.87fa9ep-38f, 0.0f, 0x1.93aa1p-48f, 0x1.dd401p-79f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.36ee62p-30f, 0.0f, 0.0f, 0x1.2e8ep-87f, 0.0f, 0x1.1a8f9p-124f,
     0x1.6c7f4ep-27f, 0.0f, 0x1.cf756cp-72f, 0x1.0db502p-45f, 0.0f, 0.0f,
     0x1.669596p-84f, 0x1.e9c61p-32f, 0x1.f3bc6p-9f, 0x1.d7525ap-106f, 0x1.c7b41p-10f,
     0x1.0bde9cp-35f, 0.0f, 0x1.7be56ep-79f, 0x1.e5892ep-41f, 0.0f, 0x1.9fff46p-27f,
     0.0f, 0x1.385b9ep-42f, 0x1.4132dp-121f, 0x1.e9ff7ap-69f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ffd6c2p-28f, 0.0f, 0x1.83befcp-109f, 0.0f, 0.0f,
     0.0f, 0x1.13c63ap-116f, 0.0f, 0.0f, 0x1.44a874p-66f, 0x1.d7b7dp-97f,
     0x1.2cde6ep-110f, 0.0f, 0x1.aeca9ap-126f, 0x1.721b72p-55f, 0.0f, 0x1.d13b9ep-91f,
     0x1.615e26p-15f, 0.0f, 0x1.73052ep-6f, 0.0f, 0.0f, 0x1.f4c992p-66f,
     0x1.a76f9p-84f, 0x1.84bac6p-46f, 0x1.b496a8p-112f, 0.0f, 0.0f, 0x1.5894d8p-28f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1c6496p-117f, 0.0f, 0.0f, 0.0f,
     0x1.dc6724p-115f, 0.0f, 0.0f, 0x1.f93a32p-42f, 0x1.2a6dc6p-65f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.17dd1ep-33f, 0.0f, 0x1.962ca8p-29f, 0x1.0faf58p-123f,
     0x1.7e8d1p-116f, 0.0f, 0.0f, 0x1.0c66fp-29f, 0x1.a79f1ep-62f, 0.0f,
     0x1.c5f7ecp-61f, 0x1.2ab35ap-53f, 0.0f, 0.0f, 0.0f, 0x1.f5bfacp-75f, 0.0f, 0.0f,
     0.0f, 0x1.b90b84p-17f, 0.0f, 0x1.31cc16p-106f, 0.0f, 0x1.795a86p-18f,
     0x1.751acep-68f, 0x1.5331d6p-86f, 0x1.562444p-1f, 0x1.62702ap-56f, 0.0f,
     0x1.ec1726p-22f, 0.0f, 0x1.1d7b06p-98f, 0x1.b34182p-35f, 0.0f, 0x1.08eb06p-65f,
     0x1.f2c3dep-4f, 0x1.250284p-116f, 0x1.78aaaap-116f, 0x1.5b36b4p-44f, 0.0f, 0.0f,
     0x1.b73e14p-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2b388ap-107f, 0x1.af68d6p-118f,
     0x1.03e08ap-39f, 0.0f, 0x1.47e68p-58f, 0x1.b36feap-94f, 0x1.dc56ep-55f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.64e5cap-17f, 0.0f, 0x1.b664dp-56f, 0.0f, 0x1.3c9ff2p-9f, 0.0f,
     0x1.69ea6p-110f, 0x1.f3f8eep-62f, 0x1.4bc382p-35f, 0x1.99f578p-34f,
     0x1.4a74e6p-101f, 0.0f, 0x1.6e45ep-64f, 0x1.f82c72p-50f, 0x1.fd2a5p-43f,
     0x1.0a8abep-16f, 0.0f, 0x1.0a7714p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2dcdep-98f,
     0.0f, 0.0f, 0x1.c9227ep-19f, 0.0f, 0x1.244b4ap-86f, 0x1.2efe54p-22f,
     0x1.fbe42cp-7f, 0.0f, 0x1.66372cp-5f, 0.0f, 0x1.32b574p-69f, 0x1.52398cp-4f,
     0x1.5c73cp-118f, 0.0f, 0x1.6f1eaap-119f, 0.0f, 0.0f, 0x1.62f6bap-94f, 0.0f, 0.0f,
     0x1.2f8a1cp-8f, 0.0f, 0x1.b0a942p-22f, 0.0f, 0x1.6777b4p-41f, 0x1.cd5f1cp-72f,
     0x1.100708p-30f, 0.0f, 0x1.f06afcp-8f, 0x1.939acep-84f, 0x1.90045cp-63f,
     0x1.69095cp-2f, 0x1.822f98p-109f, 0x1.9be43ep-44f, 0x1.df957p-4f,
     0x1.3a6b94p-61f, 0.0f, 0.0f, 0.0f, 0x1.3ce684p-33f, 0x1.6e2bp-78f, 0.0f,
     0x1.54a866p-123f, 0x1.831e66p-37f, 0x1.0561cep-36f, 0.0f, 0.0f, 0x1.e98cb6p-84f,
     0x1.e95fc2p-8f, 0.0f, 0x1.83445cp-76f, 0.0f, 0x1.ece37p-59f, 0.0f,
     0x1.b46bcp-95f, 0x1p0f, 0.0f, 0x1.f967f6p-94f, 0.0f, 0x1.01b9e4p-12f,
     0x1.9b695ap-18f, 0.0f, 0x1.fe14e6p-27f, 0.0f, 0x1.91d708p-6f, 0x1.71eee8p-62f,
     0.0f, 0.0f, 0x1.a08abp-111f, 0.0f, 0x1.60b6bep-21f, 0x1.7e96e8p-115f, 0.0f,
     0x1.5bc234p-121f, 0.0f, 0.0f, 0x1.bea59ap-68f, 0.0f, 0.0f, 0.0f, 0x1.df7cfep-28f,
     0x1.831ac2p-17f, 0x1.145002p-80f, 0x1.09b17ep-10f, 0.0f, 0x1.39da14p-92f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f0a39p-34f, 0x1.24234ap-84f, 0x1.d7ef4cp-97f,
     0x1.50dbccp-97f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.5813a8p-16f,
     0x1.61d6cap-54f, 0x1.7e1e26p-99f, 0.0f, 0x1.011386p-94f, 0.0f, 0x1.1f1beap-3f,
     0x1.91030cp-1f, 0x1.9ae538p-118f, 0x1.779aa2p-120f, 0.0f, 0.0f, 0x1.5e098p-6f,
     0x1.686a5p-123f, 0x1.ca7c58p-56f, 0x1.78022ep-44f, 0x1.f8c46ep-110f, 0.0f,
     0x1.38b8cep-2f, 0.0f, 0.0f, 0x1.52dd32p-104f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.86e0b2p-111f, 0.0f, 0x1.e8a0f4p-79f, 0x1.c8d5eap-109f, 0.0f, 0x1.9a478p-124f,
     0x1.176aa2p-79f, 0x1.c1d22ep-119f, 0x1.90a512p-1f, 0x1.d1851cp-82f,
     0x1.7dc474p-57f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f39f48p-54f,
     0x1.3bf2ecp-112f, 0x1.b3298cp-53f, 0.0f, 0.0f, 0.0f, 0x1.4aed82p-122f, 0.0f,
     0.0f, 0x1.87316p-34f, 0.0f, 0.0f, 0.0f, 0x1.7b4776p-47f, 0x1.1bd88ap-107f,
     0x1.cda136p-108f, 0.0f, 0x1.cc6cd8p-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8e8dacp-104f, 0x1.87e24p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e42e6cp-97f, 0.0f,
     0x1.201ep-124f, 0x1.ac7d2p-53f, 0.0f, 0.0f, 0x1.a6656ep-88f, 0.0f,
     0x1.1681d8p-73f, 0x1.2a51ecp-67f, 0x1.531748p-67f, 0x1.376dd8p-90f, 0.0f, 0.0f,
     0x1.19a98ap-82f, 0.0f, 0.0f, 0.0f, 0x1.a70b4ap-73f, 0x1.9ccb08p-54f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.613586p-74f, 0x1.dc624cp-36f, 0x1.829de2p-34f, 0.0f, 0.0f, 0.0f,
     0x1.8be73ep-49f, 0x1.257986p-73f, 0x1.9f50eep-27f, 0.0f, 0x1.eb100cp-122f, 0.0f,
     0x1.d9b628p-106f, 0x1.883ca2p-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7731ecp-74f,
     0.0f, 0.0f, 0.0f, 0x1.9725dep-81f, 0x1.7c77a2p-47f, 0.0f, 0x1.3b72bcp-125f, 0.0f,
     0x1.48a9d4p-23f, 0x1.cd596ep-28f, 0.0f, 0x1.ba158p-107f, 0.0f, 0x1.2f3d58p-50f,
     0x1.ae1d5ap-15f, 0.0f, 0.0f, 0.0f, 0x1.608b3p-96f, 0x1.e0723ap-35f,
     0x1.9385fp-126f, 0x1.42f764p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.40742cp-15f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.cfdbccp-24f, 0x1.197af4p-8f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a6daf4p-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.171e24p-28f, 0.0f, 0.0f,
     0x1.632896p-91f, 0.0f, 0.0f, 0x1.8d81dep-50f, 0.0f, 0.0f, 0x1.3bfd3cp-24f, 0.0f,
     0.0f, 0.0f, 0x1.e5ea78p-11f, 0.0f, 0x1.a43aeep-114f, 0.0f, 0x1.9499ap-98f,
     0x1.ec9398p-22f, 0.0f, 0x1.aa59bcp-92f, 0x1.ed2f2cp-13f, 0x1.bfa854p-109f,
     0x1.4fc932p-28f, 0x1.d4cp-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e37ce2p-61f,
     0x1.a48a5cp-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c8a3acp-66f, 0.0f, 0.0f,
     0x1.d475eap-41f, 0x1.b7c60cp-30f, 0x1.68407ap-24f, 0.0f, 0x1.9f3fp-51f,
     0x1.2ef866p-7f, 0x1.a96e8p-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9d6e8p-53f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f2340cp-91f, 0x1.eacc44p-52f, 0x1.e8a71ep-85f,
     0x1.e12868p-52f, 0.0f, 0.0f, 0x1.3b5d22p-19f, 0x1.45b1dep-29f, 0.0f,
     0x1.fa3552p-5f, 0.0f, 0.0f, 0.0f, 0x1.fdcf1ep-84f, 0.0f, 0x1.23dc5cp-122f,
     0x1.e752e8p-36f, 0x1.379aacp-95f, 0.0f, 0x1.1efc42p-35f, 0x1.955a42p-37f, 0.0f,
     0x1.0592a2p-1f, 0.0f, 0x1.302d7ep-110f, 0x1.6f6534p-112f, 0x1.9e4b8ap-30f,
     0x1.5ce32ap-53f, 0x1.76764ap-39f, 0.0f, 0x1.40915cp-55f, 0.0f, 0.0f,
     0x1.d0d448p-18f, 0x1.0e8c1cp-58f, 0x1.9cdaf4p-21f, 0x1.a349a6p-71f,
     0x1.605dc8p-75f, 0.0f, 0x1.b977ecp-20f, 0.0f, 0x1.fd067ep-103f, 0x1.ce321ap-7f,
     0.0f, 0x1.20353ap-57f, 0.0f, 0x1.e264aep-84f, 0.0f, 0.0f, 0x1.681324p-23f,
     0x1.b61578p-91f, 0.0f, 0x1.b3dd7ep-61f, 0x1.9d268ap-118f, 0x1.701c68p-113f,
     0x1.4ababp-116f, 0x1.71ac2cp-3f, 0x1.684bc4p-44f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8eb63cp-78f, 0x1.cf151p-59f, 0.0f, 0x1.f60028p-36f, 0.0f, 0.0f, 0.0f,
     0x1.9b8daap-67f, 0x1.b3d438p-109f, 0x1.2444b2p-93f, 0.0f, 0x1.4f3a58p-46f,
     0x1.3d3ec2p-120f, 0.0f, 0x1.b50496p-66f, 0.0f, 0x1.24f6eap-27f, 0.0f,
     0x1.a353ap-47f, 0x1.34b30ap-73f, 0x1.a6baep-32f, 0.0f, 0.0f, 0.0f,
     0x1.ac5e94p-61f, 0x1.bf65c2p-105f, 0x1.63b8f6p-62f, 0.0f, 0x1.fefb0ap-31f, 0.0f,
     0x1.bb57b6p-58f, 0x1.1f640ep-43f, 0x1.c86db6p-10f, 0.0f, 0x1.02155ep-23f, 0.0f,
     0x1.8f8724p-46f, 0.0f, 0x1.add6acp-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bd5e7ap-21f,
     0.0f, 0x1.7d2a7ap-113f, 0x1.cde848p-96f, 0x1.451a6ep-74f, 0x1.5aecccp-71f, 0.0f,
     0.0f, 0x1.4b87e8p-33f, 0x1.a92f5ep-98f, 0x1.5f55b8p-21f, 0x1.2310bp-97f,
     0x1.545552p-29f, 0.0f, 0.0f, 0x1.8616b8p-14f, 0.0f, 0.0f, 0x1.901fd8p-58f, 0.0f,
     0x1.089d3cp-77f, 0x1.14f1bep-42f, 0.0f, 0x1.cb98fcp-15f, 0x1.07b75p-92f, 0.0f,
     0.0f, 0.0f, 0x1.77b12ep-86f, 0x1.18fb98p-75f, 0.0f, 0.0f, 0x1.982dd8p-20f, 0.0f,
     0.0f, 0.0f, 0x1.a6c51cp-96f, 0.0f, 0x1.ee31cep-54f, 0x1.69b4aap-88f, 0.0f,
     0x1.dde33p-123f, 0.0f, 0x1.372ef8p-93f, 0.0f, 0x1.7cce0ep-97f, 0x1.df5bcap-8f,
     0x1.9c297ep-13f, 0x1.19cd38p-37f, 0x1.ee90dp-19f, 0x1.1cd12cp-57f, 0.0f,
     0x1.456afap-30f, 0.0f, 0x1.947c84p-3f, 0.0f, 0.0f, 0x1.e3990ap-56f, 0.0f, 0.0f,
     0.0f, 0x1.40c8eep-78f, 0x1.7912e6p-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8d422cp-51f, 0.0f, 0x1.f098f2p-80f, 0.0f, 0.0f, 0x1.3f869p-103f, 0.0f, 0.0f,
     0x1.f6afc2p-115f, 0.0f, 0x1.f54d56p-92f, 0x1.51891cp-68f, 0.0f, 0.0f,
     0x1.2bba8ap-3f, 0.0f, 0x1.85c6fp-80f, 0x1.5c387ap-79f, 0x1.26219p-106f,
     0x1.d33fdep-100f, 0x1.7bba56p-117f, 0.0f, 0x1.588f82p-16f, 0x1.708928p-123f,
     0.0f, 0x1.a6181cp-75f
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
            float tmp2;
            __m128 carg;
            __m128 carg1;
            __m128 carg2;
            float tmp3;
            int32_t tmp4;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = external_bench_wrapper_input_table_arg1[i];
            tmp2 = Sleef_remainderf1_purecfma(tmp0, tmp1);
            external_bench_wrapper_output_table[i] = tmp2;
            carg = _mm_set_ss(bench_acc);
            carg1 = _mm_set_ss(tmp2);
            carg2 = _mm_add_ss(carg, carg1);
            tmp3 = _mm_cvtss_f32(carg2);
            bench_acc = tmp3;
            tmp4 = i + INT32_C(1);
            i = tmp4;
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
    printf("Sleef_remainderf1_purecfma %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_remainderf1_purecfma bench acc %a\n", global_bench_acc);
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
