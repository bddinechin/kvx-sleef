/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_truncf1_purecfma.c --function \
 *     Sleef_finz_truncf1_purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.4e7ba4p-1f, 0x1.6fad82p-76f, 0x1.33f54cp-40f, 0x1.ec9eb6p-43f, 0.0f,
     0x1.8c49f2p-106f, 0x1.c63cfcp-22f, 0.0f, 0x1.064c74p-15f, 0x1.a4d174p-48f, 0.0f,
     0x1p0f, 0.0f, 0.0f, 0x1.39f7dep-53f, 0x1.37f1d2p-54f, 0.0f, 0x1.a319a4p-94f,
     0x1.f0cc62p-77f, 0.0f, 0.0f, 0x1.c148bap-90f, 0.0f, 0.0f, 0x1.1b3732p-119f, 0.0f,
     0x1.428db4p-88f, 0.0f, 0.0f, 0.0f, 0x1.15f156p-96f, 0x1.97c1a6p-18f,
     0x1.fd3f5ap-39f, 0.0f, 0.0f, 0x1.97fa54p-117f, 0.0f, 0x1.47ef6cp-116f,
     0x1.711538p-113f, 0x1.cf430cp-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a7a764p-113f,
     0x1.e2f6e8p-38f, 0x1.2828cp-121f, 0.0f, 0x1.c21d6ep-104f, 0x1.a2896p-110f,
     0x1.f37a6cp-103f, 0.0f, 0.0f, 0.0f, 0x1.3d41bap-62f, 0x1.f0a26ap-118f,
     0x1.aa7652p-108f, 0x1.74b77ep-21f, 0x1.e8e616p-24f, 0x1.dd33c4p-76f,
     0x1.6c3d9cp-7f, 0x1.0971bcp-91f, 0x1.c562c4p-88f, 0.0f, 0x1.aa2f1cp-113f,
     0x1.62d988p-65f, 0x1.d0b42cp-106f, 0.0f, 0.0f, 0x1.5bbaap-14f, 0x1.ff14a2p-123f,
     0x1.4628ap-49f, 0.0f, 0x1.c66d48p-5f, 0x1.a8a034p-60f, 0x1.a676d8p-68f, 0.0f,
     0x1.efeb7ep-15f, 0x1.e58494p-25f, 0.0f, 0x1.d63256p-106f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0c444cp-33f, 0x1.44adbap-113f, 0x1.2011fap-33f, 0.0f, 0.0f, 0x1.70bbap-102f,
     0.0f, 0.0f, 0x1.efc55p-96f, 0.0f, 0.0f, 0x1.e88ef8p-74f, 0.0f, 0.0f,
     0x1.b5c9e4p-19f, 0.0f, 0x1.ec83b8p-39f, 0.0f, 0.0f, 0x1.edc81p-61f,
     0x1.517972p-105f, 0.0f, 0x1.447eb6p-18f, 0.0f, 0.0f, 0.0f, 0x1.b288a8p-30f, 0.0f,
     0x1.c311e2p-80f, 0x1.13ffdp-47f, 0x1.612b9p-125f, 0x1.9ba74cp-65f,
     0x1.d9d066p-23f, 0x1.0560cp-67f, 0x1.804b08p-88f, 0.0f, 0x1.d8d70ap-102f, 0.0f,
     0x1.ef0aa8p-100f, 0.0f, 0x1.7947fp-122f, 0x1.e11f36p-76f, 0x1.643b3cp-69f,
     0x1.0730d4p-31f, 0.0f, 0x1.64a148p-40f, 0.0f, 0x1.1800ecp-85f, 0x1.16978ep-27f,
     0x1.19a53ep-103f, 0.0f, 0x1.283288p-107f, 0x1.432788p-90f, 0.0f, 0x1.7da952p-6f,
     0x1.059b8ep-98f, 0x1.3cb1cap-85f, 0x1.e698ep-115f, 0x1.ea274ep-42f,
     0x1.8399f2p-55f, 0x1.2ce994p-124f, 0.0f, 0.0f, 0x1.560234p-44f, 0.0f, 0.0f,
     0x1.76f99ep-2f, 0x1.0f8a2cp-121f, 0x1.50e1p-45f, 0x1.298c4cp-56f, 0.0f, 0.0f,
     0x1.6ebd52p-52f, 0x1.9c4bd4p-15f, 0x1.3dcd56p-81f, 0.0f, 0x1.cacfcp-13f, 0.0f,
     0x1.b57bd2p-87f, 0.0f, 0x1.0c4f3ap-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cd7a42p-82f, 0.0f, 0.0f, 0.0f, 0x1.35c1ccp-112f, 0x1.0a221ep-29f,
     0x1.5b98fep-47f, 0x1.952038p-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b908d6p-31f,
     0.0f, 0x1.c898dap-39f, 0x1.46be8ap-9f, 0x1.c84492p-11f, 0x1.6e7c9cp-74f,
     0x1.59f01ap-122f, 0.0f, 0x1.ace068p-60f, 0x1.e09d5p-99f, 0.0f, 0x1.52a152p-43f,
     0.0f, 0x1.f350eep-90f, 0.0f, 0x1.e6266p-124f, 0x1.f43dep-83f, 0x1.a1cc24p-44f,
     0.0f, 0.0f, 0x1.04b2a6p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e9c0f8p-41f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.62a19p-106f, 0x1.6f8c6ap-72f, 0x1.38bc92p-46f, 0x1.8a20a4p-57f,
     0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.a1d1a8p-98f, 0x1.558c7ep-10f, 0x1.21bf4ap-65f,
     0x1.af0a36p-84f, 0.0f, 0.0f, 0.0f, 0x1.0c9eaep-53f, 0x1.1b2f66p-31f,
     0x1.f9d618p-66f, 0.0f, 0x1.606048p-51f, 0x1.b6346ap-82f, 0.0f, 0x1.df9d32p-97f,
     0x1.51c43ap-49f, 0x1.f6822ap-1f, 0.0f, 0x1.37c074p-2f, 0.0f, 0x1.0d0f2ep-5f,
     0x1.cabe2p-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1b801ep-8f, 0x1.1d6cdp-14f,
     0x1.314f4p-18f, 0x1.5f4866p-20f, 0x1.2cdd3ep-115f, 0x1.a5112ep-68f,
     0x1.51954p-87f, 0.0f, 0.0f, 0x1.c2122ep-103f, 0x1.88b4a8p-66f, 0.0f,
     0x1.bd0874p-37f, 0.0f, 0x1.ae1552p-28f, 0.0f, 0x1.15ac02p-121f, 0.0f,
     0x1.bbb414p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e5da1p-10f,
     0x1.a0c12cp-58f, 0.0f, 0.0f, 0x1.5591c2p-57f, 0.0f, 0x1.53c5acp-64f,
     0x1.43079p-110f, 0.0f, 0.0f, 0x1.a5d8a4p-33f, 0.0f, 0.0f, 0x1.878a9ap-120f,
     0x1.78fc06p-80f, 0.0f, 0x1.9e250ep-11f, 0.0f, 0.0f, 0x1.0f1c3cp-97f,
     0x1.7af78ep-7f, 0x1.ef9d1ep-113f, 0.0f, 0x1.3138d6p-107f, 0.0f, 0x1.5c96bcp-83f,
     0x1.326256p-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.0e9788p-54f, 0x1.f3c558p-25f, 0x1.317bc6p-58f, 0x1p0f,
     0x1.4d5724p-47f, 0x1.e2a3ccp-118f, 0.0f, 0x1.4ae2ccp-47f, 0x1.eac3e2p-25f, 0.0f,
     0.0f, 0x1.ff41e2p-81f, 0x1.796b8ap-120f, 0.0f, 0.0f, 0x1.790628p-62f, 0.0f,
     0x1.19c682p-39f, 0.0f, 0x1.e35f98p-126f, 0.0f, 0x1.ad5b86p-93f, 0x1.680c44p-19f,
     0x1.f62e38p-116f, 0x1.1f0f98p-81f, 0x1.4fe3ccp-89f, 0x1.31063cp-125f,
     0x1.a0e06cp-91f, 0x1.f02adcp-44f, 0x1.06be8cp-120f, 0x1.531cccp-48f,
     0x1.7b04a6p-66f, 0x1.ac1e4ap-34f, 0x1.95af5cp-122f, 0.0f, 0x1.b2b59cp-74f, 0.0f,
     0.0f, 0x1.ae15p-67f, 0x1.3b7f0ep-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4e5e1p-69f, 0.0f, 0.0f, 0x1.2e9bc6p-9f, 0.0f, 0x1.959b7p-77f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.0a7ffep-27f, 0x1.5981ccp-38f, 0x1.8f5b48p-42f,
     0x1.a887bcp-61f, 0.0f, 0.0f, 0.0f, 0x1.7b8b6p-116f, 0x1.e96cc6p-110f,
     0x1.fcd47cp-74f, 0x1.0bbb0cp-59f, 0x1.db12f4p-13f, 0x1.d02028p-45f,
     0x1.160d68p-16f, 0x1.971e38p-37f, 0x1.61a71ap-33f, 0.0f, 0x1.f2cec4p-20f, 0.0f,
     0.0f, 0x1.4e867p-34f, 0.0f, 0x1.7a5bfp-87f, 0x1.302c0ap-71f, 0.0f, 0.0f,
     0x1.78bc5ep-28f, 0x1.c3ef84p-122f, 0x1.9cc422p-10f, 0.0f, 0x1.aedf04p-20f,
     0x1.51a628p-20f, 0.0f, 0.0f, 0x1.23fa96p-70f, 0.0f, 0x1.e52068p-64f, 0.0f, 0.0f,
     0.0f, 0x1.1dbf6ap-19f, 0x1.bdfe9ep-65f, 0.0f, 0.0f, 0x1.b64afap-90f, 0.0f, 0.0f,
     0.0f, 0x1.38ce2ep-14f, 0.0f, 0x1.da37dap-2f, 0x1.983b36p-107f, 0x1.5b9b0ap-35f,
     0.0f, 0x1.a4cd68p-51f, 0x1.1b80ccp-125f, 0x1.21a8e6p-25f, 0x1.ef191ap-104f, 0.0f,
     0x1.6f3e7cp-10f, 0.0f, 0x1.e4782ep-54f, 0x1.06b6f8p-63f, 0x1.69d504p-60f,
     0x1.aeee8cp-39f, 0x1.58209ep-112f, 0.0f, 0.0f, 0x1.d217f2p-10f, 0.0f,
     0x1.4df20cp-93f, 0.0f, 0x1.31385ap-110f, 0x1.2ca57ep-42f, 0.0f, 0x1.3e8bb6p-90f,
     0x1.7a0684p-100f, 0x1.291284p-57f, 0.0f, 0x1.db35cp-34f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.7be85ep-91f, 0x1.57fc6ap-62f, 0x1.953dfap-34f, 0.0f,
     0x1.ba1f48p-84f, 0x1.abc054p-1f, 0.0f, 0.0f, 0x1.f3db56p-97f, 0x1.438b2ap-45f,
     0.0f, 0.0f, 0x1.b2297ap-88f, 0x1.1cbf94p-71f, 0x1.f42ddcp-73f, 0.0f, 0.0f,
     0x1.6fea4ep-82f, 0x1.f9d5dcp-120f, 0.0f, 0.0f, 0x1.ff28ccp-29f, 0.0f,
     0x1.d80b16p-35f, 0x1.88990ap-21f, 0x1.b539a6p-83f, 0x1.770564p-23f, 0.0f,
     0x1.1234c8p-61f, 0x1.e46bb8p-106f, 0x1.5d481ep-53f, 0.0f, 0.0f, 0x1.3aa8a4p-97f,
     0x1.f99708p-21f, 0.0f, 0.0f, 0.0f, 0x1.cd057ap-82f, 0x1.92a6cap-45f, 0.0f,
     0x1.b44bcap-87f, 0x1.38ddep-119f, 0.0f, 0.0f, 0x1.c187bp-54f, 0.0f, 0.0f,
     0x1.a89bbcp-10f, 0.0f, 0.0f, 0.0f, 0x1.c91fd2p-113f, 0.0f, 0x1.22c05ep-72f,
     0x1.8e03bcp-6f, 0.0f, 0.0f, 0x1.9149a6p-103f, 0.0f, 0x1.dd8b82p-60f,
     0x1.bedc9p-23f, 0.0f, 0.0f, 0x1.c17256p-115f, 0x1.6c8fe8p-50f, 0.0f,
     0x1.5a7f4cp-97f, 0x1.853bcep-110f, 0x1.a3dfd8p-11f, 0.0f, 0.0f, 0x1.162186p-90f,
     0x1.2bd37cp-106f, 0x1.a65a4cp-46f, 0.0f, 0.0f, 0.0f, 0x1.ac8318p-83f,
     0x1.683d26p-27f, 0x1.9bad1p-54f, 0.0f, 0.0f, 0.0f, 0x1.3ffaaep-55f,
     0x1.0d495p-52f, 0.0f, 0x1.07d868p-72f, 0x1.21ff5ep-118f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.5e7a6cp-71f, 0x1.8e28eep-108f, 0.0f, 0.0f, 0x1.64e83ap-121f, 0.0f,
     0x1.0612f6p-12f, 0.0f, 0x1.d6fe64p-25f, 0.0f, 0.0f, 0.0f, 0x1.f59248p-40f, 0.0f,
     0.0f, 0x1.891cb2p-31f, 0.0f, 0x1.70321cp-114f, 0.0f, 0x1.fc50c4p-32f, 0.0f,
     0x1.b81de4p-112f, 0.0f, 0.0f, 0.0f, 0x1.f6c4d4p-86f, 0x1p0f, 0x1.e2924cp-112f,
     0x1.a0deeep-7f, 0.0f, 0.0f, 0x1.af5a0cp-33f, 0x1.ed7d7ap-23f, 0x1.113ce2p-101f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a3cb36p-92f, 0x1.8726eep-6f, 0.0f, 0x1.2df3e6p-43f,
     0.0f, 0.0f, 0x1.77212ep-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.605e78p-28f, 0.0f,
     0x1.d23e8p-17f, 0x1.cab32p-104f, 0.0f, 0.0f, 0x1.72826p-112f, 0x1.02d0f2p-108f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d3f8fcp-10f, 0x1.00e638p-105f, 0x1.b7931ep-49f,
     0x1.b82a56p-42f, 0.0f, 0x1.141bdep-8f, 0.0f, 0x1.e40844p-57f, 0x1.82243ep-78f,
     0x1.8c516cp-74f, 0.0f, 0x1.0ec74p-75f, 0.0f, 0x1.c32766p-82f, 0x1.2733cp-27f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.572974p-9f, 0.0f, 0x1.9d9fe4p-24f,
     0.0f, 0.0f, 0.0f, 0x1.d331bap-39f, 0.0f, 0x1.ff81d4p-48f, 0.0f, 0x1.d61ac8p-63f,
     0x1.3c3b72p-106f, 0.0f, 0x1.bff428p-74f, 0.0f, 0.0f, 0x1.a0d162p-56f,
     0x1.1277b4p-2f, 0x1.18b4fp-13f, 0x1.5439e6p-126f, 0.0f, 0x1.92d416p-42f,
     0x1.e5b288p-34f, 0.0f, 0.0f, 0.0f, 0x1.dfacccp-60f, 0x1.3d4072p-32f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.791f5p-119f, 0x1.eec746p-109f, 0x1.ff15aep-8f,
     0x1.2b398ep-23f, 0x1.0d17e2p-38f, 0.0f, 0x1.981df2p-13f, 0x1.2ade6cp-110f, 0.0f,
     0x1.70d33ep-42f, 0x1.325ac8p-71f, 0x1.6c2ae4p-4f, 0x1.f61f8ap-51f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.9ceff8p-118f, 0x1.6f112ap-4f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b3623cp-83f, 0.0f, 0.0f, 0.0f, 0x1.324d96p-97f, 0x1.819c18p-38f, 0.0f, 0.0f,
     0.0f, 0x1.e3e7f6p-102f, 0.0f, 0.0f, 0x1.23e47ap-25f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e367fep-8f, 0.0f, 0x1.2d121ap-39f, 0x1.eaac2p-9f, 0.0f, 0x1.00b5bcp-78f,
     0.0f, 0x1.a93aeep-110f, 0.0f, 0.0f, 0x1.1ccf6ep-22f, 0x1.bec188p-115f,
     0x1.cf39cp-87f, 0.0f, 0x1.a07ea2p-72f, 0.0f, 0x1.f52c4ep-57f, 0x1.37eb68p-69f,
     0x1.410172p-119f, 0.0f, 0.0f, 0x1.44edcep-102f, 0.0f, 0.0f, 0.0f, 0x1.68ea8p-56f,
     0.0f, 0.0f, 0x1.595c76p-49f, 0x1.c44238p-60f, 0x1.d78f8ap-107f, 0x1.d148f6p-18f,
     0.0f, 0.0f, 0x1.eb9d82p-96f, 0x1.0c6b2p-118f, 0x1.7c4e7p-84f, 0.0f,
     0x1.fe77bap-81f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.36115ap-70f, 0x1.84fe74p-49f,
     0.0f, 0.0f, 0.0f, 0x1.4eb9fap-9f, 0x1.78d908p-79f, 0x1.8bd248p-33f,
     0x1.af3926p-63f, 0.0f, 0x1.234518p-14f, 0.0f, 0x1.06af28p-99f, 0.0f,
     0x1.bdc5d2p-109f, 0x1.c5d2eap-104f, 0x1.427c16p-111f, 0x1.a05982p-15f, 0.0f,
     0.0f, 0x1.70eff8p-48f, 0.0f, 0.0f, 0x1.641416p-32f, 0x1.c7a7d2p-21f, 0.0f, 0.0f,
     0x1.e66b4p-53f, 0.0f, 0.0f, 0.0f, 0x1.d10a52p-25f, 0x1.2292ccp-42f, 0.0f,
     0x1.3567f8p-116f, 0.0f, 0x1.ad9c8p-93f, 0.0f, 0x1.7458eap-108f, 0.0f,
     0x1.76536cp-99f, 0.0f, 0.0f, 0x1.62f11cp-84f, 0x1.3484cap-53f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.417b3cp-39f, 0x1.82e9dep-105f, 0x1.61d78cp-108f, 0x1.fb7498p-119f,
     0x1.8f7b48p-104f, 0.0f, 0x1.0ec3fap-16f, 0.0f, 0x1.28991p-89f, 0x1.40fe82p-40f,
     0x1.6bddp-6f, 0.0f, 0.0f, 0x1.f61934p-80f, 0x1.2e0784p-115f, 0x1.2268c4p-35f,
     0x1.a1eaf6p-78f, 0.0f, 0x1.069a1ap-59f, 0x1.388ac8p-50f, 0.0f, 0x1.81a3b4p-9f,
     0.0f, 0x1.7d933cp-35f, 0.0f, 0.0f, 0.0f, 0x1.51598ep-40f, 0x1.c3e7cep-93f, 0.0f,
     0x1.90126p-100f, 0x1.eca3eap-112f, 0.0f, 0.0f, 0x1.2af9e2p-55f, 0x1.3f70a6p-8f,
     0x1.74e9f4p-6f, 0x1.64b1cp-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e35168p-3f, 0x1.474692p-113f, 0.0f, 0x1.3a9f56p-95f, 0x1.fa1aa2p-51f,
     0x1.cee3ep-88f, 0x1.fcd7dp-41f, 0x1.c0ae6cp-35f, 0x1.85495ep-59f, 0.0f, 0.0f,
     0.0f, 0x1.f51bb6p-121f, 0.0f, 0x1.2ca72ap-14f, 0.0f, 0x1.400412p-104f,
     0x1.86c228p-104f, 0x1.de8adp-38f, 0x1.c13646p-12f, 0.0f, 0x1.d88f82p-50f, 0.0f,
     0.0f, 0x1.44c85ap-43f, 0x1.2816ep-126f, 0x1.a23614p-20f, 0.0f, 0.0f,
     0x1.1e8a1ep-22f, 0.0f, 0.0f, 0.0f, 0x1.f519fp-98f, 0x1.3c04bp-24f,
     0x1.6f6b2ep-63f, 0.0f, 0x1.45dfp-2f, 0x1.3e151ap-9f, 0x1.459aa4p-83f, 0.0f, 0.0f,
     0x1.9e6738p-114f, 0.0f, 0.0f, 0.0f, 0x1.3a2334p-19f, 0.0f, 0x1.6d642cp-75f,
     0x1.4cd854p-124f, 0.0f, 0.0f, 0.0f, 0x1.c52c38p-100f, 0.0f, 0x1.bea88cp-29f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.4ddabcp-24f, 0.0f, 0x1.ff4afcp-12f, 0x1.077044p-40f,
     0x1.5d825ep-20f, 0x1.498e4p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.75958ep-21f,
     0x1.566b2cp-91f, 0x1.b7729ep-98f, 0.0f, 0x1.c1c882p-12f, 0x1.afc37ep-8f, 0.0f,
     0.0f, 0x1.e91f78p-126f, 0.0f, 0x1.dbce68p-106f, 0.0f, 0.0f, 0x1.b800b6p-11f,
     0x1.5d6e14p-71f, 0x1.e00c4p-124f, 0x1.e64828p-117f, 0x1.248dbp-22f, 0.0f,
     0x1.2444c6p-107f, 0x1.f5208cp-26f, 0x1.2fe68ap-104f, 0x1.9993eep-93f,
     0x1.df69b4p-82f, 0x1.6234a4p-121f, 0.0f, 0.0f, 0x1.ebf232p-65f, 0x1.75a2e4p-17f,
     0.0f, 0.0f, 0x1.a910a8p-70f, 0x1.a51028p-111f, 0.0f, 0x1.adc74ap-57f, 0.0f,
     0x1.bfa1d6p-120f, 0x1.513c1ap-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.aa5dd6p-9f, 0.0f, 0.0f, 0.0f, 0x1.b091a6p-83f, 0.0f, 0x1.0c04dcp-112f, 0.0f,
     0x1.4053b6p-48f, 0x1.6b91c6p-65f, 0.0f, 0x1.8f79bep-15f, 0x1.fecf98p-17f,
     0x1.e1ecdp-98f, 0x1.830c7ap-83f, 0x1.dd117p-25f, 0x1.3f0a8ep-120f, 0.0f, 0.0f,
     0.0f, 0x1.d05c1cp-81f, 0.0f, 0.0f, 0x1.73adf2p-117f, 0x1.5a0b0cp-83f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c0356cp-50f, 0x1.121d68p-72f, 0x1.230bbcp-12f,
     0x1.9bfca8p-15f, 0.0f, 0x1.77f932p-58f, 0x1.4ea8a8p-34f, 0x1.cf0e14p-4f,
     0x1.941bb4p-78f, 0.0f, 0x1.9263ap-109f, 0x1.9a7aap-43f, 0x1.38563cp-4f
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
            tmp1 = Sleef_finz_truncf1_purecfma(tmp0);
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
    printf("Sleef_finz_truncf1_purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_truncf1_purecfma bench acc %a\n", global_bench_acc);
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
