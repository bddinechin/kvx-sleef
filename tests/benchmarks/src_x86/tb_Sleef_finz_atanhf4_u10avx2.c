/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_atanhf4_u10avx2128.c --function \
 *     Sleef_finz_atanhf4_u10avx2128 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 4 --function-input-vector-size \
 *     4 --bench --no-embedded-bin --target x86_avx2128
 * 
**/
#include <stdint.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float4_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float4_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0.0f, 0x1.e5001ep-36f, 0.0f, 0x1.8991ecp-80f, 0x1.371cccp-107f, 0x1.c699dep-96f,
     0x1.3027bcp-118f, 0x1.efc4b4p-47f, 0x1.023058p-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.621db2p-96f, 0.0f, 0x1.354b76p-70f, 0.0f, 0x1.5cc7e2p-45f, 0.0f,
     0x1.d9eefap-122f, 0x1.5f1fep-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ae236ep-64f, 0x1.b463aap-11f, 0x1.367d88p-6f, 0x1.152ab2p-19f, 0x1p0f, 0.0f,
     0.0f, 0x1.c3d7aep-87f, 0x1.af156ep-16f, 0x1.1e430ap-23f, 0x1.71f27ep-35f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b7056ap-54f, 0x1.31121p-97f, 0.0f, 0.0f, 0.0f,
     0x1.c8527cp-28f, 0.0f, 0x1.62339ep-68f, 0x1.3a7158p-41f, 0x1.ba7826p-66f, 0.0f,
     0.0f, 0x1.7ba4b2p-99f, 0.0f, 0.0f, 0x1.d9aa14p-85f, 0x1.be5d1cp-60f, 0.0f,
     0x1.26e2f6p-86f, 0x1.ecc8dep-68f, 0.0f, 0.0f, 0x1.da8986p-3f, 0x1.579cfep-67f,
     0x1.b3dafp-60f, 0x1.4d722p-93f, 0x1.3f3b92p-103f, 0x1.cffe74p-36f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7fcd5p-51f, 0x1.8bdb58p-47f, 0x1.f06782p-82f, 0.0f,
     0x1.2db098p-33f, 0.0f, 0x1.989accp-124f, 0.0f, 0.0f, 0x1.3c22p-57f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.eb1d2p-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.09c954p-107f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e44a8p-30f, 0.0f, 0.0f, 0x1.7299cp-2f,
     0x1.ba65e6p-11f, 0.0f, 0.0f, 0.0f, 0x1.fe7ec4p-45f, 0.0f, 0x1.a72bdp-43f,
     0x1.8006eap-90f, 0.0f, 0x1.24c646p-28f, 0.0f, 0x1.cdb862p-21f, 0.0f,
     0x1.983746p-40f, 0.0f, 0.0f, 0.0f, 0x1.20cfep-73f, 0x1.9b6cdp-60f,
     0x1.fabdaep-36f, 0.0f, 0x1.a6f7bap-4f, 0.0f, 0.0f, 0.0f, 0x1.801dfcp-92f, 0.0f,
     0.0f, 0.0f, 0x1.ff4376p-26f, 0x1.ad620ap-55f, 0.0f, 0.0f, 0x1.eba16cp-72f,
     0x1.e0f09cp-82f, 0.0f, 0x1.e40be2p-57f, 0x1.d5b2aep-66f, 0x1.ff06bep-121f, 0.0f,
     0x1.94701p-114f, 0.0f, 0x1.364826p-112f, 0x1.5db59cp-72f, 0x1.f99ccep-14f,
     0x1.b1997ap-108f, 0x1.7742cap-89f, 0x1.1c457p-33f, 0x1.1c27c6p-46f,
     0x1.6b3f18p-72f, 0x1.c8e1ap-69f, 0.0f, 0.0f, 0x1.f1245ep-7f, 0x1.ab95c4p-61f,
     0.0f, 0x1.e104d4p-52f, 0x1.8020dp-97f, 0x1.b7b69p-16f, 0.0f, 0x1.bf534p-106f,
     0.0f, 0.0f, 0.0f, 0x1.d72fcap-126f, 0.0f, 0.0f, 0x1.b9efccp-33f, 0x1.8e63fp-7f,
     0x1.da766ap-34f, 0.0f, 0x1.219974p-78f, 0x1.cb23a4p-81f, 0x1.67721ap-77f, 0.0f,
     0x1.d3871ep-88f, 0x1.66d04ap-44f, 0x1.a621e4p-40f, 0x1.5df55p-62f, 0.0f,
     0x1.beadd6p-57f, 0x1.80812ap-111f, 0x1.34211ap-38f, 0x1.a70bdp-63f,
     0x1.76c25ep-52f, 0.0f, 0x1.da551ap-91f, 0x1.a9b0b8p-64f, 0x1.2502f8p-4f, 0.0f,
     0x1.63b372p-124f, 0.0f, 0.0f, 0x1.841808p-2f, 0x1.46312cp-63f, 0.0f,
     0x1.13c52p-31f, 0.0f, 0.0f, 0.0f, 0x1.e39842p-90f, 0.0f, 0.0f, 0.0f,
     0x1.d02268p-82f, 0.0f, 0.0f, 0.0f, 0x1.c49c68p-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3a7058p-46f, 0x1.ee5866p-66f, 0.0f, 0.0f, 0.0f, 0x1.5782dep-49f,
     0x1.7647c8p-71f, 0x1.b6af06p-119f, 0x1.d9b17p-15f, 0x1.73d29cp-85f,
     0x1.45d70cp-90f, 0.0f, 0x1.4d5d06p-39f, 0x1.6e724p-106f, 0x1.126c7ep-17f, 0.0f,
     0.0f, 0x1.96581ap-93f, 0x1.319476p-126f, 0.0f, 0x1.4c31a6p-72f, 0x1.e83f5cp-27f,
     0x1.6d50fp-47f, 0x1.c162bcp-103f, 0.0f, 0x1.2c0e4p-26f, 0.0f, 0.0f, 0.0f,
     0x1.f6aa2ep-44f, 0.0f, 0.0f, 0.0f, 0x1.b4e092p-59f, 0.0f, 0x1.92b40cp-59f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.0c22ecp-41f, 0x1.6a650cp-39f, 0.0f, 0x1.e502bp-5f,
     0x1.70b0e6p-79f, 0.0f, 0x1.42d7a4p-15f, 0x1.f873e6p-92f, 0.0f, 0x1.fe3bcap-124f,
     0.0f, 0x1.007eb8p-2f, 0.0f, 0x1.2d4176p-23f, 0.0f, 0x1.753a1ep-56f, 0.0f,
     0x1.647afep-36f, 0.0f, 0x1.77cdacp-21f, 0.0f, 0.0f, 0x1.1ed992p-12f,
     0x1.e4e2dp-91f, 0x1.d41c8ap-6f, 0x1.c6b24cp-40f, 0.0f, 0.0f, 0x1.c596bp-74f,
     0x1.1bf85ep-36f, 0.0f, 0.0f, 0x1.51729cp-49f, 0.0f, 0x1.0e37acp-87f, 0.0f,
     0x1.4072b4p-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9f28aep-47f, 0.0f,
     0x1.4ba6bep-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.af8362p-116f, 0x1.64793p-72f,
     0x1.0c9d86p-95f, 0x1.b65b9ap-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d8d0cep-8f,
     0x1.d016bp-113f, 0x1.a5bed8p-98f, 0x1.8f59b6p-32f, 0x1.9c26e8p-102f,
     0x1.7c380ap-123f, 0x1.41e1e2p-105f, 0.0f, 0x1.563742p-57f, 0.0f, 0.0f,
     0x1.e78282p-50f, 0.0f, 0x1.170168p-30f, 0x1.06540cp-55f, 0.0f, 0.0f, 0.0f,
     0x1.56f384p-40f, 0.0f, 0.0f, 0x1.8dd198p-123f, 0x1.505772p-6f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.3ae9ep-76f, 0.0f, 0.0f, 0x1.0c4b26p-20f, 0x1.9b2e5ap-114f, 0.0f,
     0x1.824afep-24f, 0.0f, 0.0f, 0x1.e43512p-63f, 0.0f, 0.0f, 0x1.962a4ap-18f,
     0x1.d45bfap-28f, 0.0f, 0x1.08cf7ap-36f, 0.0f, 0x1.ee9c8ap-63f, 0.0f, 0.0f,
     0x1.059fc4p-83f, 0x1.6e38f6p-41f, 0.0f, 0x1.f0d3a4p-54f, 0x1.af9904p-4f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.fe400cp-104f, 0.0f, 0x1.70eb8p-38f, 0.0f,
     0x1.94e986p-103f, 0.0f, 0x1.b2b9b2p-77f, 0.0f, 0.0f, 0.0f, 0x1.c27478p-33f, 0.0f,
     0x1.eb8d26p-15f, 0.0f, 0x1.1e6dccp-81f, 0.0f, 0x1.33209p-126f, 0x1.6a7b62p-16f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.2f1d5p-51f, 0x1.a2f71ap-50f, 0.0f, 0.0f,
     0x1.27b35p-17f, 0x1.fed904p-61f, 0.0f, 0x1.fbb34ep-53f, 0x1.9dffdap-57f, 0.0f,
     0.0f, 0x1.dac16p-2f, 0x1.2d0dcap-116f, 0.0f, 0x1.34edb6p-81f, 0.0f, 0.0f, 0.0f,
     0x1.953a66p-115f, 0.0f, 0x1.fc08d4p-120f, 0x1.2a331cp-49f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.301fbcp-122f, 0.0f, 0x1.31656ep-45f, 0x1.fda57ap-78f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f1b65ep-30f, 0.0f, 0.0f, 0.0f, 0x1.b98d9cp-90f,
     0x1.283d5p-31f, 0x1.3a929cp-58f, 0x1.42b24ep-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.2543bp-114f, 0.0f, 0x1.ffc44cp-1f, 0.0f, 0.0f, 0x1.9ca62cp-63f, 0.0f,
     0.0f, 0.0f, 0x1.f13938p-25f, 0x1.43d24ep-3f, 0.0f, 0.0f, 0.0f, 0x1.bd158ep-94f,
     0x1.94d074p-14f, 0.0f, 0x1.5f2b84p-76f, 0x1.4b901ep-76f, 0x1.65c11ap-78f, 0.0f,
     0.0f, 0x1.efc35ep-78f, 0.0f, 0.0f, 0x1.ea5f44p-3f, 0.0f, 0.0f, 0x1.106078p-39f,
     0.0f, 0.0f, 0x1.a8c5fap-11f, 0x1.083dacp-29f, 0.0f, 0x1.ae1e18p-83f, 0.0f, 0.0f,
     0x1.03e8eap-83f, 0.0f, 0x1.bab658p-68f, 0x1.067b98p-30f, 0x1.520bd2p-54f,
     0x1.069634p-98f, 0.0f, 0.0f, 0x1p0f, 0x1.0ab8eap-89f, 0x1.22173p-126f, 0.0f,
     0x1.1453ccp-47f, 0.0f, 0x1.c354dap-53f, 0x1.c956e8p-76f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7c459ep-12f, 0x1.f778ep-36f, 0x1.e49494p-84f, 0x1.b8038ep-78f,
     0x1.e92418p-71f, 0x1.6342a2p-17f, 0x1.ee0a0cp-37f, 0x1.86b27p-94f, 0.0f,
     0x1.477a24p-81f, 0.0f, 0.0f, 0x1.2f32eep-38f, 0.0f, 0x1.710614p-91f,
     0x1.64c292p-28f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.4df3dap-6f, 0x1.584768p-80f,
     0x1.549cbap-9f, 0.0f, 0.0f, 0.0f, 0x1.4b8de8p-29f, 0x1.74db3ep-77f,
     0x1.1f7ecap-90f, 0.0f, 0x1.ea2618p-42f, 0x1.6e539cp-1f, 0.0f, 0x1.67249ap-100f,
     0x1.198012p-33f, 0.0f, 0.0f, 0.0f, 0x1.0594eap-10f, 0x1.4facd4p-62f,
     0x1.b5cd82p-42f, 0.0f, 0.0f, 0.0f, 0x1.594bap-95f, 0x1.6514f8p-98f, 0.0f, 0.0f,
     0x1.38a0b4p-60f, 0.0f, 0.0f, 0.0f, 0x1.463d74p-16f, 0.0f, 0.0f, 0x1.11ca88p-25f,
     0x1.abbd2p-21f, 0.0f, 0x1.fb1664p-33f, 0.0f, 0x1.55a4a6p-121f, 0x1.0726fep-41f,
     0x1.c28f08p-29f, 0.0f, 0x1.a9affp-90f, 0x1.b12938p-9f, 0.0f, 0x1.7112e2p-48f,
     0.0f, 0.0f, 0x1.00f152p-31f, 0x1.ade68cp-26f, 0.0f, 0.0f, 0.0f, 0x1.981e7p-12f,
     0x1.3a0fap-8f, 0x1.2429aap-47f, 0.0f, 0x1.ba342cp-63f, 0x1.896b5cp-43f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b5f66ap-34f, 0.0f, 0.0f, 0.0f, 0x1.593032p-1f, 0.0f, 0.0f,
     0x1.1cc182p-125f, 0x1.2a373p-112f, 0.0f, 0x1.69b8aep-93f, 0x1.6a4d5p-4f, 0.0f,
     0x1.df7fb6p-48f, 0x1.15021p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f3409p-83f, 0.0f,
     0.0f, 0.0f, 0x1.8e8198p-35f, 0x1.5fb7fcp-83f, 0.0f, 0x1.952678p-15f,
     0x1.0ca06ep-45f, 0x1.0958dp-82f, 0x1.ac31c8p-73f, 0x1.0bd888p-94f,
     0x1.8c882ep-15f, 0.0f, 0x1.eb37d4p-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.55b98ep-100f, 0x1.81638ep-72f, 0.0f, 0x1.57c58ap-3f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d3d5ecp-67f, 0x1.252e9ep-11f, 0x1.b0c98ap-65f, 0x1.8195c8p-14f, 0.0f, 0.0f,
     0x1.58e82p-59f, 0x1.db1ae8p-46f, 0x1.bc9ae8p-67f, 0.0f, 0.0f, 0x1.1e3874p-43f,
     0.0f, 0x1.5d975ap-24f, 0x1.481cbp-25f, 0x1.b198cep-126f, 0.0f, 0x1.f5768ap-11f,
     0x1.98b8eap-56f, 0x1.4c01cap-29f, 0x1.f5b798p-104f, 0x1.6578c8p-42f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d9b588p-67f, 0x1.9fa3d8p-32f, 0.0f, 0.0f, 0.0f,
     0x1.29edb8p-105f, 0.0f, 0.0f, 0x1.5e9476p-55f, 0.0f, 0.0f, 0.0f, 0x1.bb60ccp-90f,
     0x1.5b96fcp-126f, 0x1.aa5eb4p-13f, 0.0f, 0x1.cfd344p-55f, 0.0f, 0.0f,
     0x1.dc153p-32f, 0x1.5c2eb8p-81f, 0.0f, 0x1.6f8ddep-6f, 0x1.8e1802p-68f,
     0x1.f45ca6p-35f, 0x1.37bcfap-50f, 0.0f, 0x1.44d8dep-75f, 0x1.0ed246p-27f,
     0x1.d54a98p-43f, 0.0f, 0.0f, 0x1.5f6748p-72f, 0x1.abc1dep-45f, 0x1.3a11dcp-83f,
     0x1.835af6p-59f, 0.0f, 0.0f, 0x1.af51a4p-117f, 0x1.d23178p-126f, 0x1.45425p-98f,
     0x1.a8ccep-23f, 0x1.3a80c2p-69f, 0x1.153656p-57f, 0x1.57d776p-54f, 0.0f, 0.0f,
     0x1.d76a66p-32f, 0x1.92b4dep-77f, 0x1.6ae4a6p-116f, 0x1.ad917cp-109f,
     0x1.06cfbep-5f, 0x1.d5bcbep-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.91f8c4p-77f,
     0x1.30bc2ap-108f, 0x1.b85e44p-36f, 0x1.05bffep-84f, 0.0f, 0x1.f2c8d4p-2f,
     0x1.28fb4ep-2f, 0x1.f03012p-42f, 0.0f, 0x1.0c273p-41f, 0x1.7d3362p-6f, 0x1p0f,
     0x1.c65d7p-51f, 0.0f, 0x1.21dbbcp-100f, 0.0f, 0x1.3607cap-105f, 0x1.ac3f18p-73f,
     0.0f, 0.0f, 0.0f, 0x1.8f0ebp-5f, 0x1.4bf91ap-28f, 0.0f, 0.0f, 0x1.b3657cp-55f,
     0x1.4c02eep-92f, 0.0f, 0x1.f00a08p-24f, 0x1.f1bd46p-25f, 0.0f, 0x1.538304p-57f,
     0x1.39ff7ep-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.74ab12p-59f, 0.0f, 0x1.1ab19cp-108f, 0x1.a7917ep-99f, 0x1.e1be22p-51f, 0.0f,
     0.0f, 0x1.513264p-33f, 0x1.f840ap-28f, 0x1.fd7324p-54f, 0x1.36e422p-123f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.aadd42p-1f, 0.0f, 0.0f, 0x1.9002f2p-35f,
     0x1p0f, 0x1.d486ep-101f, 0.0f, 0x1.18d022p-5f, 0x1.3c026cp-28f, 0x1.deeee6p-98f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e0e746p-49f, 0x1.33c834p-38f, 0.0f,
     0x1.c88f76p-73f, 0.0f, 0x1.26d9p-72f, 0.0f, 0x1.477524p-60f, 0x1.f0a676p-81f,
     0x1.4c3a7cp-37f, 0.0f, 0x1.e1bcf4p-107f, 0x1.277714p-85f, 0.0f, 0x1.50113p-99f,
     0x1.9f1058p-86f, 0x1.ef0d76p-91f, 0x1.17ed86p-64f, 0x1.3b58fep-110f, 0.0f, 0.0f,
     0x1.02f4fep-123f, 0x1.99c86p-26f, 0.0f, 0x1.d79d88p-79f, 0.0f, 0.0f,
     0x1.65d2dap-114f, 0x1.2986bap-56f, 0.0f, 0.0f, 0.0f, 0x1.079d1p-83f, 0.0f, 0.0f,
     0.0f, 0x1.b1680ap-104f, 0.0f, 0.0f, 0x1.5e7b3p-10f, 0.0f, 0.0f, 0x1.7c5524p-66f,
     0x1.fa3c48p-25f, 0.0f, 0.0f, 0x1.7d489ap-117f, 0x1.d4542cp-47f, 0.0f,
     0x1.b4873p-49f, 0x1.49dae4p-125f, 0x1.71771cp-101f, 0x1.6ad7eep-56f,
     0x1.8e9c28p-74f, 0x1.17f054p-94f, 0x1.f253d8p-123f, 0x1.173e8ap-25f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.54d39ap-115f, 0.0f, 0.0f, 0.0f, 0x1.e01f14p-43f, 0x1.ec143ep-85f,
     0x1.410b0cp-52f, 0x1.61a442p-55f, 0x1.3d324cp-8f, 0.0f, 0.0f, 0.0f,
     0x1.c2063ap-15f, 0x1.c3acep-62f, 0x1.5b1886p-65f, 0.0f, 0x1.d34d0ep-62f, 0.0f,
     0.0f, 0.0f, 0x1p0f, 0x1.b40004p-43f, 0x1.fc4b34p-18f, 0x1.8401c8p-6f,
     0x1.d2751cp-109f, 0.0f, 0x1.49f464p-3f, 0.0f, 0x1.be7c4ap-110f, 0.0f,
     0x1.483e6ep-29f, 0.0f, 0x1.74947p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.716ebp-14f, 0x1.1b87d8p-36f, 0x1.2df424p-116f, 0.0f, 0.0f, 0x1.1be07cp-27f,
     0.0f, 0x1.52cbcep-117f, 0.0f, 0.0f, 0x1.b3359cp-108f, 0x1.088b84p-121f,
     0x1.ab686ep-95f, 0x1.9c65f6p-36f, 0.0f, 0x1.a7a85cp-125f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ae022ep-9f, 0.0f, 0.0f, 0x1.a54ef4p-101f, 0x1.d45b92p-49f, 0.0f,
     0.0f, 0x1.be022ap-31f, 0x1.bf3f5p-41f, 0x1.66432p-18f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.33528ap-55f, 0.0f, 0x1.a5de74p-54f, 0.0f, 0x1.04155cp-65f, 0x1.615f0cp-115f,
     0x1.b91206p-84f, 0.0f, 0.0f, 0x1.f25188p-67f, 0x1.05e3e4p-28f, 0x1.b5a2aap-59f,
     0x1.7afde8p-117f, 0.0f, 0x1.026f94p-102f, 0x1.2e78cap-24f, 0.0f, 0.0f,
     0x1.3a07f6p-61f, 0.0f, 0x1.6085b2p-45f, 0.0f, 0.0f, 0.0f, 0x1.bd0b66p-125f,
     0x1.546af8p-25f, 0x1.5c584ap-30f, 0.0f, 0x1.f33b4ap-19f, 0x1.564d1ap-103f,
     0x1.93cb7p-98f, 0x1.290cb4p-48f, 0x1.6c5414p-7f, 0x1.92bc42p-69f, 0.0f, 0.0f,
     0x1.0f4284p-122f, 0x1.6639d8p-22f, 0.0f, 0x1.027bb2p-57f, 0.0f, 0.0f,
     0x1.5de734p-52f, 0x1.657224p-108f, 0x1.6c0f76p-55f, 0.0f, 0x1.63bb32p-27f, 0.0f,
     0x1p0f, 0.0f, 0.0f, 0x1.b7b582p-99f, 0x1.9ed58p-98f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.7b6fe4p-74f, 0x1.999b76p-115f, 0.0f, 0.0f, 0x1.86508ap-65f,
     0x1.4a34b6p-103f, 0x1.2059ecp-119f, 0x1.bad332p-8f
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
    
    global_bench_acc = external_bench_wrapper_cst;
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
            tmp1 = Sleef_finz_atanhf4_u10avx2128(tmp0);
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
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_finz_atanhf4_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_atanhf4_u10avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
