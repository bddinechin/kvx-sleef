/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_atanf4_u35avx2128.c --function Sleef_atanf4_u35avx2128 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 4 --function-input-vector-size 4 --bench \
 *     --no-embedded-bin --target x86_avx2128
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
     0.0f, 0.0f, 0.0f, 0x1.0940d8p-47f, 0.0f, 0x1.ef62eep-17f, 0.0f, 0.0f,
     0x1.595254p-110f, 0x1.6e777cp-70f, 0.0f, 0x1.e86d48p-67f, 0.0f, 0x1.fc69fep-14f,
     0.0f, 0x1.0d1376p-103f, 0.0f, 0x1.dce692p-73f, 0.0f, 0x1.196b9cp-62f,
     0x1.87c8d2p-95f, 0.0f, 0x1.9b20cep-71f, 0x1.cacf34p-38f, 0x1.2248eep-36f, 0.0f,
     0x1.04e74cp-13f, 0x1.b0c69cp-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.92008ep-113f,
     0x1.03caeep-33f, 0.0f, 0x1.43ca1cp-72f, 0.0f, 0.0f, 0x1.23460ap-122f,
     0x1.9972ecp-50f, 0.0f, 0.0f, 0x1.d542c6p-52f, 0.0f, 0x1.5c6ffcp-35f, 0.0f,
     0x1.86c44p-16f, 0x1.5c99cep-82f, 0.0f, 0.0f, 0.0f, 0x1.ac0e6p-13f, 0.0f, 0.0f,
     0x1.4a76cep-80f, 0.0f, 0x1.627b5cp-8f, 0.0f, 0.0f, 0x1.1e4feap-97f, 0.0f,
     0x1.64c35p-58f, 0x1p0f, 0x1.01bfa6p-29f, 0x1.758144p-91f, 0.0f, 0x1.75efd6p-90f,
     0x1.788312p-12f, 0x1.aa705ap-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ed93b8p-22f, 0.0f,
     0x1.9553ccp-36f, 0.0f, 0.0f, 0.0f, 0x1.2d9e4ep-22f, 0.0f, 0x1.0dd46cp-86f,
     0x1.a9382cp-80f, 0x1.4658fap-53f, 0x1.7af06ep-94f, 0x1.8bc39cp-32f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.604d7ep-9f, 0.0f, 0.0f, 0.0f, 0x1.ed3576p-96f,
     0x1.4e2cfep-62f, 0.0f, 0.0f, 0x1.59e78ap-26f, 0x1.de5e6cp-46f, 0.0f,
     0x1.73bdaap-12f, 0x1.ff1432p-31f, 0x1.85ccacp-120f, 0.0f, 0.0f, 0x1.b3cbfap-6f,
     0.0f, 0.0f, 0x1.29d73ep-11f, 0.0f, 0.0f, 0x1.a16882p-94f, 0x1.d7ad96p-79f,
     0x1.cad8cep-62f, 0x1.5da46ap-26f, 0.0f, 0x1.ff05d4p-102f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d91044p-24f, 0.0f, 0.0f, 0.0f, 0x1.05a89ap-14f, 0x1.1b8dfep-82f,
     0x1.ebb16ap-111f, 0x1.6d360ap-74f, 0.0f, 0.0f, 0x1.a996bcp-57f, 0x1.9b3094p-81f,
     0x1.24d3fcp-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.665a8ep-36f, 0x1.f4413ap-56f, 0.0f,
     0.0f, 0x1.bd383p-25f, 0x1.e6fe54p-80f, 0x1.aa26dp-110f, 0x1.b8d932p-111f,
     0x1.3f8596p-57f, 0.0f, 0x1.303568p-63f, 0.0f, 0x1.448aecp-4f, 0.0f,
     0x1.1ab8c2p-33f, 0x1.d94df8p-50f, 0.0f, 0x1.025e2cp-113f, 0.0f, 0x1.313b28p-116f,
     0.0f, 0x1.5c786ap-85f, 0x1.0da0fp-52f, 0.0f, 0x1.e46c78p-71f, 0.0f,
     0x1.df9444p-91f, 0x1.225ea6p-60f, 0.0f, 0.0f, 0x1.0f1ebap-26f, 0.0f, 0.0f, 0.0f,
     0x1.16fb18p-85f, 0x1.ef74eap-32f, 0.0f, 0x1.587b3ap-4f, 0.0f, 0x1.f8d05ap-22f,
     0x1.e993dcp-22f, 0x1.af7326p-122f, 0x1.8dc9a6p-65f, 0x1.d9fa9ap-53f,
     0x1.edd87p-45f, 0.0f, 0x1.a8d8dcp-49f, 0x1.46745ap-35f, 0.0f, 0x1.b03792p-30f,
     0.0f, 0.0f, 0x1.4f572ep-88f, 0x1.5f70ccp-57f, 0.0f, 0x1.f407f6p-1f,
     0x1.a584aap-32f, 0x1.9c8a9ap-83f, 0x1.32768ap-9f, 0.0f, 0.0f, 0x1.a4f728p-2f,
     0x1.73b79p-95f, 0.0f, 0x1.7c67f6p-57f, 0x1.1319c8p-90f, 0x1.50579ep-43f, 0.0f,
     0.0f, 0x1.649f6p-28f, 0x1.35e9aap-88f, 0x1.b7eb0cp-10f, 0.0f, 0.0f,
     0x1.986af6p-45f, 0x1.f79e04p-6f, 0x1.03468ep-1f, 0x1.f59018p-74f,
     0x1.0b7a76p-62f, 0x1.d76f88p-71f, 0x1.3d4a46p-1f, 0.0f, 0.0f, 0.0f,
     0x1.42e2bap-4f, 0x1.505324p-12f, 0.0f, 0x1.574daap-55f, 0x1.bb563ap-87f,
     0x1.29e1dp-13f, 0x1.181cb4p-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0b012cp-83f,
     0x1.78344ep-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8a50cep-49f, 0x1.caea76p-82f,
     0.0f, 0.0f, 0x1.2b584p-86f, 0.0f, 0.0f, 0x1.73ff08p-11f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.74248ep-121f, 0.0f, 0x1.f87ba4p-93f, 0.0f, 0x1.37b6acp-91f, 0x1.613764p-41f,
     0x1.bef2f2p-114f, 0x1.3212fp-3f, 0.0f, 0x1.bc55f4p-78f, 0.0f, 0.0f, 0.0f,
     0x1.41a062p-40f, 0x1.c138e8p-88f, 0x1.fa9edep-20f, 0.0f, 0x1.f7aafcp-104f,
     0x1.bd5c48p-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dc2e9ep-43f, 0x1.50f8c2p-75f,
     0.0f, 0x1.789e6ap-113f, 0.0f, 0.0f, 0x1.9a8a16p-126f, 0.0f, 0x1.d070ep-112f,
     0x1.2f7a72p-101f, 0.0f, 0x1.989b8ap-21f, 0x1.159eecp-126f, 0.0f, 0x1.ba426ep-27f,
     0.0f, 0x1.77022ap-90f, 0x1.777926p-66f, 0.0f, 0.0f, 0.0f, 0x1.40770ep-30f,
     0x1.342718p-22f, 0x1.667ca6p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.dd3738p-63f, 0x1.9977eap-17f, 0x1.b62474p-52f, 0.0f, 0x1.a72ffp-56f, 0.0f,
     0.0f, 0x1.0cef88p-125f, 0x1.7d5a0ap-31f, 0x1.b491d2p-126f, 0x1.f94186p-89f,
     0x1.2b85bp-86f, 0.0f, 0x1.8bacp-1f, 0x1.3c7de4p-118f, 0x1.7622a2p-89f, 0.0f,
     0x1.12863ep-112f, 0.0f, 0.0f, 0x1.8dce86p-88f, 0x1.b7089ap-64f, 0x1.0a571ap-49f,
     0x1.b53d9p-89f, 0.0f, 0.0f, 0x1.b82358p-30f, 0x1.536688p-61f, 0x1.741bbp-114f,
     0.0f, 0.0f, 0x1.356fb4p-80f, 0.0f, 0.0f, 0x1.6c11a4p-81f, 0.0f, 0.0f, 0.0f,
     0x1.3d716ep-115f, 0.0f, 0x1.8629cap-77f, 0x1.ae8062p-124f, 0x1.8d9ac8p-14f,
     0x1.11d7c2p-110f, 0.0f, 0.0f, 0x1.10d2ep-73f, 0x1.6a5b22p-96f, 0.0f,
     0x1.5268eep-30f, 0x1.966d94p-25f, 0x1.2d817p-61f, 0x1.b23e22p-1f, 0.0f,
     0x1.b77f7p-101f, 0x1.2b82c8p-24f, 0x1.9099bep-97f, 0.0f, 0x1.978da2p-16f, 0.0f,
     0x1.20ce5ap-118f, 0x1.e4f1f6p-42f, 0x1.af3538p-6f, 0x1.6ba9dp-122f,
     0x1.32f648p-125f, 0x1.fab65ep-105f, 0x1.06832p-104f, 0.0f, 0.0f, 0x1.35ae7p-30f,
     0x1.4ac91cp-50f, 0.0f, 0x1.34f332p-47f, 0x1.8f0004p-74f, 0x1.0262d8p-73f, 0.0f,
     0x1.e7e0bp-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.408fcp-5f, 0.0f, 0.0f,
     0x1.91c7a8p-30f, 0.0f, 0x1.879758p-36f, 0.0f, 0.0f, 0x1.79db48p-28f,
     0x1.795d4ap-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.22a162p-44f, 0.0f, 0.0f, 0.0f,
     0x1.4520ap-38f, 0.0f, 0x1.93a9aap-89f, 0x1.88e822p-45f, 0.0f, 0x1.9a4932p-84f,
     0x1.e633fep-42f, 0x1.70a28cp-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.278918p-12f, 0x1.44100ep-106f, 0x1.3e9278p-108f, 0.0f, 0x1.bd123ep-117f,
     0x1.f242b6p-16f, 0.0f, 0x1.280744p-62f, 0.0f, 0.0f, 0.0f, 0x1.22c734p-93f, 0.0f,
     0x1.306cdp-47f, 0x1.081b3ap-126f, 0.0f, 0x1.c419cp-20f, 0x1.f18c86p-61f,
     0x1.e5ce28p-113f, 0.0f, 0x1.722dc6p-9f, 0x1.bdee7p-63f, 0x1.4e9468p-93f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b5f76ap-79f, 0.0f, 0.0f, 0x1.c31a76p-25f, 0.0f,
     0x1.84e4aep-122f, 0x1.0bcd2cp-46f, 0.0f, 0.0f, 0x1.def412p-90f, 0.0f,
     0x1.c888b2p-97f, 0x1.d6abc8p-97f, 0.0f, 0x1.1ed502p-70f, 0x1.e5cf44p-105f,
     0x1.3badb4p-39f, 0x1.d5744p-26f, 0x1.27beacp-101f, 0.0f, 0x1.21eef8p-96f,
     0x1.dfc456p-125f, 0x1.0a23aap-8f, 0.0f, 0x1.71cf4cp-89f, 0x1.1c98dap-111f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c36512p-48f, 0.0f, 0x1.f4ef1ap-29f, 0.0f, 0.0f,
     0x1.6e2f26p-42f, 0.0f, 0x1.888f7cp-66f, 0.0f, 0.0f, 0.0f, 0x1.0b281cp-42f, 0.0f,
     0x1.4305b6p-13f, 0.0f, 0x1.a73626p-64f, 0x1.761a48p-76f, 0.0f, 0x1.cc2332p-109f,
     0x1.204708p-126f, 0x1.923f2ap-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c95bb8p-42f, 0x1.5bbce6p-15f, 0x1.a85ed4p-110f, 0.0f, 0x1.7af7d6p-103f, 0.0f,
     0x1.d9fa3cp-90f, 0.0f, 0.0f, 0x1.8f015ap-118f, 0.0f, 0x1.dd9864p-3f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bf7784p-96f, 0x1.8776f8p-84f, 0x1.ccac74p-80f,
     0x1.7b2a54p-13f, 0.0f, 0x1.fb25e6p-53f, 0.0f, 0x1.fed1cap-48f, 0x1.a006c8p-82f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.0c2e52p-22f, 0x1.bea3a8p-53f, 0.0f, 0x1.8771c6p-43f,
     0.0f, 0.0f, 0.0f, 0x1.b96a02p-126f, 0.0f, 0x1.cf1dbcp-118f, 0x1.7e5258p-10f,
     0.0f, 0x1.79034p-85f, 0.0f, 0.0f, 0x1.8be0c4p-15f, 0.0f, 0x1.916bc2p-109f,
     0x1.5d209cp-39f, 0x1.6698b8p-35f, 0x1.824768p-71f, 0.0f, 0.0f, 0.0f,
     0x1.c431eep-107f, 0.0f, 0x1.879cap-38f, 0x1.49c32ep-114f, 0x1.2db30ap-38f, 0.0f,
     0x1.67c664p-81f, 0x1.f45424p-110f, 0.0f, 0x1.adf91ep-67f, 0x1.62deccp-81f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.76f154p-43f, 0x1.773dc8p-44f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.511e34p-122f, 0.0f, 0x1.11601p-1f, 0.0f, 0.0f, 0.0f, 0x1.001916p-126f,
     0x1.27f6dep-94f, 0x1.8fbf3ep-117f, 0x1.06c04ep-47f, 0x1.a1e022p-30f, 0.0f, 0.0f,
     0x1.dca7f6p-98f, 0.0f, 0.0f, 0x1.0c43eep-67f, 0x1.920406p-17f, 0x1.9acda6p-5f,
     0.0f, 0x1.9e60dcp-68f, 0.0f, 0x1.7e0784p-123f, 0x1.3dd18cp-18f, 0x1.ff7d98p-33f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.760b9ap-76f, 0x1.bcdffp-65f, 0.0f,
     0x1.68b97ap-54f, 0x1.2744b6p-11f, 0.0f, 0x1.8bfbfcp-85f, 0.0f, 0x1.9718cep-22f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a06676p-101f, 0.0f, 0.0f, 0x1.6c23b8p-73f, 0.0f,
     0.0f, 0x1.e6aecp-5f, 0.0f, 0x1.d821cep-10f, 0.0f, 0x1.edcfd8p-72f, 0.0f, 0.0f,
     0.0f, 0x1.6fc98ep-70f, 0.0f, 0x1.0e69ecp-36f, 0x1.40a2dcp-33f, 0x1.072bf4p-28f,
     0x1.d7dddap-61f, 0.0f, 0x1.1c3834p-114f, 0x1.654778p-32f, 0x1.b9aa12p-67f, 0.0f,
     0x1.9856a6p-90f, 0.0f, 0.0f, 0x1.ae2d3ap-39f, 0.0f, 0.0f, 0.0f, 0x1.25b35p-53f,
     0x1.268218p-90f, 0x1.f13cfp-7f, 0x1.c976ap-117f, 0.0f, 0x1.47afb4p-104f, 0.0f,
     0x1.f0a87ap-58f, 0.0f, 0.0f, 0.0f, 0x1.1f89c8p-42f, 0.0f, 0x1.65b14ap-96f,
     0x1.d25c26p-25f, 0x1.e28316p-89f, 0.0f, 0x1.bbc47ap-55f, 0.0f, 0x1.d0a4p-32f,
     0x1.7c051ap-63f, 0.0f, 0x1.67b994p-16f, 0x1.f536d8p-40f, 0.0f, 0.0f, 0.0f,
     0x1.cc539ap-80f, 0x1.93947cp-54f, 0.0f, 0x1.6839b2p-105f, 0x1.48e458p-105f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.84a56p-43f, 0.0f, 0x1.214b7ep-86f, 0x1.046088p-121f, 0.0f,
     0x1.3a6198p-100f, 0.0f, 0x1.cbabbp-116f, 0.0f, 0x1.f9a30ap-29f, 0x1.71cc6p-19f,
     0.0f, 0.0f, 0x1.d5bbp-30f, 0.0f, 0.0f, 0x1.8e8466p-56f, 0.0f, 0.0f,
     0x1.f7881cp-12f, 0x1.828f68p-22f, 0.0f, 0.0f, 0.0f, 0x1.6c7652p-27f,
     0x1.69a8b6p-83f, 0x1.e20d3ap-98f, 0x1.44a3dap-57f, 0x1.df09fep-73f,
     0x1.0bf2ep-35f, 0.0f, 0.0f, 0x1.af3768p-60f, 0x1.8e87b6p-8f, 0.0f,
     0x1.30190ep-80f, 0x1.aba168p-1f, 0.0f, 0x1.784382p-80f, 0x1.0713fep-94f, 0.0f,
     0x1.9807c2p-16f, 0x1.21ac5ap-49f, 0x1.341628p-47f, 0.0f, 0.0f, 0x1.8570e6p-25f,
     0x1.adb6b8p-22f, 0x1.5745c2p-8f, 0.0f, 0.0f, 0x1.5e42d2p-4f, 0.0f,
     0x1.907778p-19f, 0x1.62d294p-91f, 0x1.fdc682p-7f, 0x1.bbaf98p-99f,
     0x1.2676bep-98f, 0x1.b22a44p-1f, 0x1.4fda7p-54f, 0x1.5dcc4ep-1f,
     0x1.4fc3b2p-102f, 0.0f, 0x1.01624cp-41f, 0.0f, 0x1.c53812p-80f, 0x1.51d87cp-63f,
     0.0f, 0x1.1d0644p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1d6f0cp-26f, 0.0f, 0.0f,
     0x1.3c575ep-97f, 0x1.6701dap-32f, 0.0f, 0x1.c26008p-36f, 0.0f, 0.0f,
     0x1.d7c4b6p-26f, 0x1.63c11ap-51f, 0.0f, 0x1.ffe658p-102f, 0x1.560404p-98f, 0.0f,
     0x1.dcd562p-8f, 0x1.724becp-98f, 0.0f, 0.0f, 0.0f, 0x1.8dd246p-72f,
     0x1.35ce44p-5f, 0x1.3eb7cep-108f, 0.0f, 0.0f, 0x1.a9086ap-39f, 0x1.bd1606p-38f,
     0.0f, 0.0f, 0x1.e8ced8p-26f, 0x1.a433aep-36f, 0.0f, 0x1.8a14b2p-83f, 0.0f,
     0x1.7a8a26p-44f, 0.0f, 0x1.12f7cp-22f, 0x1.7098bcp-118f, 0x1.3d6e4p-124f, 0.0f,
     0x1.925d14p-32f, 0.0f, 0x1.7f634p-66f, 0x1.dc97e4p-70f, 0x1.ed929ap-79f, 0.0f,
     0x1.75371cp-78f, 0x1.44a51ep-108f, 0x1.603f36p-32f, 0.0f, 0x1.a916p-43f,
     0x1.786df8p-16f, 0.0f, 0x1.12db4ep-44f, 0x1.dfdb2ep-50f, 0x1.739aeap-126f,
     0x1.59a9d2p-66f, 0x1.992ec6p-48f, 0x1.2f3394p-61f, 0x1.18295p-91f,
     0x1.c4dedep-31f, 0x1.664b5ep-113f, 0x1.bd573ep-76f, 0x1.639dbap-68f,
     0x1.7bd5d8p-75f, 0.0f, 0x1.7b64ap-34f, 0x1.c52b6ap-96f, 0x1.e1064cp-16f, 0.0f,
     0.0f, 0x1.5707eep-71f, 0x1.b9a2c8p-88f, 0x1.e7d868p-70f, 0.0f, 0x1.ac32eep-115f,
     0.0f, 0.0f, 0x1.cebe5ep-33f, 0x1.7da5p-41f, 0x1.86a338p-88f, 0.0f, 0.0f,
     0x1.57df1ep-74f, 0x1.91ee6ep-31f, 0.0f, 0.0f, 0x1.4aa70ap-81f, 0.0f,
     0x1.4e6462p-71f, 0.0f, 0x1.2d3804p-12f, 0.0f, 0x1.e49bdcp-7f, 0.0f,
     0x1.53bfa6p-6f, 0.0f, 0.0f, 0x1.9b9166p-34f, 0.0f, 0x1.184cd8p-67f,
     0x1.98d178p-51f, 0.0f, 0x1.aa2852p-104f, 0.0f, 0x1.10d688p-23f, 0.0f,
     0x1.d0b948p-11f, 0x1.57b1fcp-84f, 0.0f, 0.0f, 0.0f, 0x1.43d156p-17f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7786dcp-75f, 0.0f, 0.0f, 0x1.ef9864p-78f,
     0x1.da765cp-17f, 0x1.e0d614p-110f, 0.0f, 0.0f, 0x1.fce8dp-54f, 0.0f,
     0x1.16614ap-67f, 0.0f, 0.0f, 0x1.52c088p-5f, 0x1.d427c2p-100f, 0x1.490ad6p-49f,
     0x1.08aeep-99f, 0x1.21da2cp-4f, 0x1.38af06p-62f, 0.0f, 0x1.e9e0ccp-109f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.6661aep-120f, 0x1.cab26p-44f, 0.0f, 0x1.8980bap-53f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.0ccaeap-113f, 0x1.cb76b6p-46f, 0.0f, 0x1.d5abbp-67f,
     0x1.a5a9cp-78f, 0.0f, 0x1.82500ep-48f, 0.0f, 0.0f, 0x1.5ac20ep-88f,
     0x1.4c38e4p-46f, 0x1.a95892p-31f, 0x1.9037d2p-46f, 0.0f, 0x1.ca09a2p-51f, 0.0f,
     0.0f, 0x1.da636cp-65f, 0.0f, 0.0f, 0x1.fa8c4ep-115f, 0x1.787d32p-104f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b34902p-42f, 0x1.d1fbc6p-101f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c8592cp-14f, 0x1.70485cp-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6d55f2p-69f,
     0.0f, 0x1.c1f0c6p-69f, 0.0f, 0.0f, 0x1.0caac8p-45f, 0x1.f65e52p-70f,
     0x1.d93f62p-77f, 0.0f, 0.0f, 0x1.f5ee26p-21f, 0x1.3011d8p-23f, 0.0f, 0.0f,
     0x1.82afa8p-121f, 0x1.c0d9e8p-126f, 0.0f, 0.0f, 0x1.484af6p-98f, 0x1.0d78a6p-14f,
     0.0f, 0.0f, 0x1.220a66p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3fd4dap-75f,
     0x1.e6385ep-86f, 0.0f, 0.0f, 0x1.225504p-48f, 0.0f, 0x1.ddad88p-18f, 0.0f,
     0x1.776798p-3f, 0.0f, 0.0f, 0x1.203462p-18f, 0x1.8e6f66p-59f, 0.0f
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
            tmp1 = Sleef_atanf4_u35avx2128(tmp0);
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
    printf("Sleef_atanf4_u35avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_atanf4_u35avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
