/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_log2f4_u10kvx.c --function \
 *     Sleef_finz_log2f4_u10kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 4 --function-input-vector-size \
 *     4 --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float4_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float4_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0x1.56cbcap-92f, 0.0f, 0x1.45c086p-94f, 0.0f, 0x1.16bc76p-34f, 0.0f,
     0x1.1ccd0ep-88f, 0.0f, 0x1.583c0ep-101f, 0.0f, 0.0f, 0x1.76c1fcp-23f, 0.0f,
     0x1.af9786p-42f, 0x1.7c31bp-62f, 0x1.0666bep-86f, 0.0f, 0x1.b1d374p-33f, 0.0f,
     0x1.302c4ap-56f, 0x1.6868dep-119f, 0.0f, 0x1.f9ba46p-54f, 0x1.b4362p-58f,
     0x1.bf7bacp-92f, 0x1.83f44p-78f, 0x1.cbe7f6p-44f, 0x1.e43e2cp-86f, 0.0f, 0.0f,
     0x1.9c363ep-5f, 0x1.aa32b4p-61f, 0x1.a2e4e6p-19f, 0.0f, 0x1.110636p-28f,
     0x1.6e31d4p-29f, 0x1.3ba506p-50f, 0x1.b49e82p-40f, 0x1.e72ae8p-19f,
     0x1.73ffd4p-41f, 0x1.63110ep-48f, 0.0f, 0.0f, 0.0f, 0x1.98587cp-112f, 0.0f, 0.0f,
     0.0f, 0x1.735dd4p-113f, 0.0f, 0.0f, 0x1.19c8f2p-16f, 0x1.718bdcp-19f,
     0x1.0dc93ap-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a00ap-1f, 0x1.4c46e4p-123f,
     0x1.3af37cp-107f, 0x1.c552a2p-63f, 0x1.4a241cp-33f, 0.0f, 0.0f, 0x1.d139ap-115f,
     0x1.468932p-84f, 0x1.6c1f94p-101f, 0.0f, 0x1.158f34p-58f, 0x1.2f372p-93f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.5fd7c2p-21f, 0.0f, 0x1.73d90cp-20f, 0x1.bb34aep-56f, 0.0f,
     0x1.2f587cp-54f, 0x1.abfbbcp-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.33f432p-66f,
     0.0f, 0.0f, 0x1.e7157cp-108f, 0x1.f7be1cp-123f, 0.0f, 0.0f, 0.0f,
     0x1.c6e52ap-95f, 0.0f, 0x1.3dbea4p-84f, 0x1.616dc6p-80f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.09bcaap-17f, 0x1.44027p-53f, 0x1.9d6fa8p-42f, 0.0f, 0.0f, 0x1.482da6p-20f,
     0x1.454bp-21f, 0.0f, 0x1.8fbb08p-73f, 0.0f, 0.0f, 0.0f, 0x1.368ddp-31f,
     0x1.ec988ep-86f, 0.0f, 0x1p0f, 0x1.56a7e4p-103f, 0.0f, 0x1.5e0dbep-47f, 0.0f,
     0x1.99b69ep-5f, 0x1.d22882p-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d92fb6p-84f,
     0x1.41090cp-16f, 0.0f, 0x1.dcafacp-7f, 0x1.aac6ecp-3f, 0x1.6c2abcp-22f,
     0x1.94c292p-105f, 0x1.1f3886p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fc6656p-36f,
     0x1.125a68p-42f, 0.0f, 0.0f, 0.0f, 0x1.48f6fp-63f, 0.0f, 0x1.4c904ep-36f,
     0x1.02679cp-44f, 0.0f, 0x1.1e0a64p-88f, 0x1.52707cp-99f, 0.0f, 0x1.a886eap-86f,
     0x1.c7c474p-79f, 0.0f, 0.0f, 0.0f, 0x1.a90ee8p-6f, 0x1.36d90cp-49f, 0.0f,
     0x1.1533bcp-113f, 0.0f, 0.0f, 0.0f, 0x1.81ddbcp-25f, 0x1.847d34p-101f, 0.0f,
     0x1.45c86ap-86f, 0x1.d435f8p-16f, 0.0f, 0.0f, 0.0f, 0x1.de809cp-56f, 0.0f,
     0x1.18295cp-81f, 0.0f, 0x1.256cfp-18f, 0.0f, 0x1.6624d8p-14f, 0.0f,
     0x1.2f8eap-101f, 0x1.eb04eap-45f, 0.0f, 0.0f, 0.0f, 0x1.28c712p-55f,
     0x1.62e96cp-87f, 0.0f, 0.0f, 0x1.32dc44p-8f, 0.0f, 0x1.594554p-67f, 0.0f,
     0x1.8b64eap-97f, 0.0f, 0x1.0d7934p-109f, 0x1.414eb2p-35f, 0x1.862e9ap-76f, 0.0f,
     0.0f, 0x1.5ec8d8p-35f, 0.0f, 0x1.4e340ep-39f, 0.0f, 0x1.533138p-58f,
     0x1.18d42ep-49f, 0x1.d7cf36p-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4e0cdep-62f,
     0x1.51b4cap-72f, 0.0f, 0.0f, 0x1.ac4884p-87f, 0.0f, 0x1.d31644p-51f,
     0x1.e52ff4p-62f, 0.0f, 0x1.da3966p-46f, 0x1.3dc642p-85f, 0x1.bb96cep-43f,
     0x1.f2f738p-28f, 0x1.f667ap-67f, 0x1.71283ep-119f, 0.0f, 0x1.c73a84p-12f, 0.0f,
     0x1.2afda8p-57f, 0x1.b494dcp-123f, 0x1.6ac37ap-120f, 0.0f, 0.0f, 0x1.713926p-65f,
     0.0f, 0x1.6388e8p-119f, 0.0f, 0x1.d72844p-80f, 0x1.76b65p-7f, 0x1.042f9cp-111f,
     0x1.e46f16p-123f, 0.0f, 0x1.aac5fep-28f, 0x1.429c38p-114f, 0.0f,
     0x1.7c25cap-108f, 0.0f, 0x1.781426p-102f, 0.0f, 0.0f, 0x1.b4df62p-123f, 0.0f,
     0x1.7c53f6p-119f, 0.0f, 0x1.008e3ap-71f, 0.0f, 0x1.55bf3p-94f, 0x1.70a1c4p-74f,
     0.0f, 0x1.3a816p-100f, 0x1.0b06a4p-105f, 0x1.b8f158p-69f, 0x1.3de41p-67f, 0.0f,
     0.0f, 0x1.0410dap-118f, 0.0f, 0x1.77e8d6p-20f, 0.0f, 0x1.833a46p-118f, 0.0f,
     0x1.193af2p-83f, 0x1.a78802p-20f, 0.0f, 0.0f, 0x1.b6fd2ep-62f, 0.0f, 0.0f, 0.0f,
     0x1.7d9a52p-63f, 0.0f, 0.0f, 0.0f, 0x1.7283b6p-12f, 0.0f, 0x1.b34532p-81f,
     0x1.95675ap-54f, 0.0f, 0x1.b5a89cp-16f, 0x1.ed956ap-17f, 0x1.5597bp-61f, 0.0f,
     0.0f, 0x1.db244p-93f, 0x1.e855c2p-38f, 0x1.b019bep-27f, 0.0f, 0.0f, 0.0f,
     0x1.be506p-24f, 0.0f, 0x1.23c89ep-39f, 0x1.cd1966p-104f, 0x1.94605p-23f,
     0x1.a9403ap-24f, 0.0f, 0x1.61a8c2p-82f, 0x1.439cfp-84f, 0x1.b33c2p-61f, 0.0f,
     0x1.987fe4p-49f, 0.0f, 0x1.69b924p-47f, 0x1.6f24cap-94f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0a685p-102f, 0x1.fd8528p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.230102p-118f,
     0.0f, 0x1.ed2cc4p-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.540f5ep-35f, 0.0f,
     0x1.6c4edap-121f, 0x1.fb88acp-64f, 0.0f, 0x1.398244p-79f, 0.0f, 0x1.4b32eep-5f,
     0x1.fd48fcp-109f, 0x1.8af9cp-15f, 0.0f, 0x1.fd4e9ep-28f, 0x1.982c8ap-61f, 0.0f,
     0.0f, 0x1.9b846ep-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ffb17ap-19f,
     0.0f, 0x1.6b281p-50f, 0.0f, 0x1.78811cp-9f, 0x1.3b0474p-85f, 0.0f, 0.0f, 0.0f,
     0x1.4a21e8p-120f, 0x1.cb3856p-56f, 0.0f, 0.0f, 0.0f, 0x1.273142p-45f,
     0x1.08ade2p-24f, 0.0f, 0x1.fab304p-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.59726cp-57f, 0x1.9a4c6p-96f, 0x1.dc37eap-30f, 0.0f, 0.0f, 0.0f,
     0x1.639ffcp-83f, 0.0f, 0x1.6cfe8cp-115f, 0.0f, 0.0f, 0x1.d2edaap-116f, 0.0f,
     0x1.3aa5aep-45f, 0x1.fd3448p-58f, 0x1.96eafap-10f, 0.0f, 0x1.a6101ep-117f,
     0x1.c038f8p-29f, 0.0f, 0x1.dddefp-57f, 0x1.881a3cp-36f, 0x1.e7b874p-116f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.534396p-17f, 0.0f, 0x1.c22508p-18f, 0.0f, 0x1.229aacp-35f,
     0x1.292c92p-108f, 0.0f, 0x1.84a77ap-64f, 0.0f, 0.0f, 0.0f, 0x1.a34fe6p-74f,
     0x1.2f8e26p-83f, 0x1.6c76fcp-81f, 0.0f, 0x1.2fe68ep-117f, 0x1.54b1b4p-39f,
     0x1.64f6f2p-101f, 0.0f, 0.0f, 0x1.85de1p-13f, 0x1.a0e1d8p-57f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.76b9cep-97f, 0x1.738d5cp-112f, 0x1.3299aap-28f,
     0x1.c4abe8p-89f, 0x1.6c7c56p-91f, 0x1.3a135ap-30f, 0x1.762fep-78f,
     0x1.022fb6p-43f, 0x1.e8e7e2p-70f, 0x1.0f3da4p-50f, 0.0f, 0x1.b6b86cp-84f,
     0x1.17e8d2p-16f, 0x1.85d9a6p-104f, 0.0f, 0.0f, 0.0f, 0x1.63d7aap-21f, 0.0f, 0.0f,
     0x1.8fdb2ep-19f, 0x1.3e239p-124f, 0.0f, 0x1.162bb8p-2f, 0.0f, 0.0f,
     0x1.136a08p-52f, 0.0f, 0x1.a5974ap-43f, 0.0f, 0x1.70a9ap-86f, 0.0f, 0.0f, 0.0f,
     0x1.7fab86p-101f, 0x1.846b8cp-7f, 0x1.f8306cp-77f, 0.0f, 0.0f, 0.0f,
     0x1.ff38e8p-47f, 0.0f, 0.0f, 0x1.8b900cp-51f, 0x1.f7cbaep-70f, 0x1.623152p-112f,
     0x1.da7afep-124f, 0.0f, 0.0f, 0x1.07181p-2f, 0.0f, 0x1.6e3e12p-91f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.8378f8p-81f, 0x1.509938p-120f, 0x1.ab7248p-58f, 0.0f, 0.0f,
     0x1.7282f8p-47f, 0.0f, 0x1.c2ba34p-73f, 0.0f, 0x1.59486ap-50f, 0.0f, 0.0f, 0.0f,
     0x1.849e98p-36f, 0.0f, 0x1.bf36cap-48f, 0.0f, 0x1.ca48fap-116f, 0x1.0530bp-18f,
     0x1.c67f3ep-3f, 0.0f, 0.0f, 0.0f, 0x1.c9b724p-93f, 0x1.771094p-116f,
     0x1.a132a4p-29f, 0.0f, 0x1.7dfc9ap-70f, 0.0f, 0x1.c689f4p-61f, 0x1.2aa8fap-20f,
     0x1.7cda56p-93f, 0x1.ce928p-88f, 0.0f, 0x1.29b2e2p-38f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.dface6p-110f, 0x1.9f989ap-117f, 0.0f, 0x1.53564p-44f, 0x1.6db11ep-59f,
     0.0f, 0.0f, 0x1.a8eebap-102f, 0.0f, 0.0f, 0.0f, 0x1.6fbe12p-92f, 0x1.e9a44cp-65f,
     0.0f, 0.0f, 0.0f, 0x1.b262acp-49f, 0.0f, 0x1.e8ba24p-3f, 0x1.428dfep-25f,
     0x1.14ad3p-16f, 0x1.009baap-65f, 0x1.c80a32p-124f, 0x1.c687ccp-66f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.711b46p-7f, 0.0f, 0.0f, 0x1.94c258p-35f, 0.0f, 0.0f,
     0x1.a23296p-79f, 0.0f, 0x1.58456cp-108f, 0.0f, 0x1.59ee64p-47f, 0x1.fdaf4ep-110f,
     0x1.97244ep-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b0cc7cp-38f,
     0.0f, 0x1.47a77cp-58f, 0.0f, 0x1.3c8584p-31f, 0.0f, 0.0f, 0x1.4c831ap-85f,
     0x1.b081e6p-99f, 0.0f, 0.0f, 0.0f, 0x1.1a02ecp-5f, 0x1.03c81ep-116f, 0.0f,
     0x1.de4baep-100f, 0x1.60460cp-13f, 0x1.04d62ap-109f, 0.0f, 0.0f, 0.0f,
     0x1.afb428p-61f, 0x1.38cac8p-35f, 0x1.78ff84p-52f, 0.0f, 0x1.f852c6p-121f, 0.0f,
     0x1.a83086p-97f, 0.0f, 0.0f, 0x1.009fd4p-61f, 0x1.4fa52ap-35f, 0x1.004d3ap-97f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.eb75b4p-14f, 0x1.b82582p-26f, 0x1.e7d5cep-103f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.cd7a2cp-37f, 0.0f, 0.0f, 0x1.96c2fap-117f, 0x1.f6be1ep-7f,
     0x1.461798p-45f, 0.0f, 0x1.7d2196p-17f, 0x1.0cefdep-26f, 0x1.067fp-107f, 0.0f,
     0x1.14ce2p-67f, 0x1.355e12p-75f, 0.0f, 0.0f, 0x1.82f7e8p-104f, 0x1.843cc4p-9f,
     0.0f, 0.0f, 0.0f, 0x1.1278f2p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.167e18p-116f, 0x1.17c266p-84f, 0x1.e5261ap-115f, 0x1.b96a1ap-96f, 0.0f,
     0x1.59233p-84f, 0.0f, 0x1.ddd1aep-64f, 0.0f, 0x1.72b5d8p-95f, 0.0f,
     0x1.eb52a4p-54f, 0x1.330282p-4f, 0x1.c18586p-88f, 0.0f, 0.0f, 0x1.bbcb14p-93f,
     0.0f, 0.0f, 0x1.30361ap-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9b5096p-30f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2ddep-126f, 0.0f, 0.0f, 0.0f, 0x1.be43f4p-113f,
     0x1.7322cp-115f, 0.0f, 0x1.dbc716p-41f, 0x1.0f2b2p-98f, 0x1.efd7fep-36f,
     0x1.c13952p-72f, 0x1.aba9fp-34f, 0x1.658eeep-78f, 0x1.f539b4p-77f,
     0x1.425362p-32f, 0.0f, 0x1.6ff076p-32f, 0.0f, 0x1.b051eep-90f, 0.0f,
     0x1.bce852p-67f, 0.0f, 0.0f, 0x1.d7a8cap-115f, 0x1.879fe4p-85f, 0.0f, 0.0f,
     0x1.932f76p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.12fadcp-12f, 0.0f, 0x1.c6a01cp-126f,
     0x1.718c98p-82f, 0x1.2b1e82p-118f, 0x1.b82a44p-89f, 0x1.435b88p-105f, 0.0f,
     0x1.eadcd2p-95f, 0x1.442cap-90f, 0.0f, 0x1.153928p-42f, 0x1.958fe4p-94f,
     0x1.c4885p-35f, 0x1.51943ap-84f, 0.0f, 0.0f, 0.0f, 0x1.1bc852p-46f, 0.0f,
     0x1.2e23bap-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a56fe6p-63f, 0.0f, 0.0f,
     0x1.908058p-48f, 0x1.ea88d2p-103f, 0x1.de28ep-10f, 0x1.f717ep-15f,
     0x1.6de312p-106f, 0x1.a5718ep-27f, 0x1.72a256p-77f, 0.0f, 0x1.b9ac4p-56f, 0x1p0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7fec06p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a1b912p-47f,
     0x1.d0ef3cp-5f, 0x1.541aaep-105f, 0x1.c74a36p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.d3bef4p-51f, 0x1.b5c466p-50f, 0.0f, 0x1.6cdd26p-42f, 0x1.06d238p-17f,
     0x1.87c89ep-27f, 0.0f, 0x1.020c8ep-49f, 0.0f, 0.0f, 0.0f, 0x1.9fa97p-53f,
     0x1.f662b8p-7f, 0x1.fea93ep-5f, 0.0f, 0x1.6b5398p-89f, 0x1.dc07c6p-112f, 0.0f,
     0x1.5690b6p-31f, 0.0f, 0x1p0f, 0.0f, 0x1.126628p-12f, 0.0f, 0.0f, 0.0f,
     0x1.04f5p-59f, 0.0f, 0x1.8a0b44p-28f, 0x1.ff58bep-12f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.5e17d4p-35f, 0.0f, 0x1.b1c9aap-126f, 0.0f, 0x1.c97f4cp-45f,
     0x1.750f28p-114f, 0x1.e4a51cp-118f, 0.0f, 0x1.6ec472p-99f, 0x1.54add2p-120f,
     0.0f, 0x1.9788b8p-121f, 0x1.459d3cp-50f, 0x1.e28e8p-14f, 0.0f, 0.0f,
     0x1.14c89ep-80f, 0.0f, 0x1.757636p-6f, 0x1.235e28p-3f, 0.0f, 0x1.f0cb22p-28f,
     0x1.e51b2cp-82f, 0.0f, 0.0f, 0x1.7dc32ep-96f, 0.0f, 0.0f, 0.0f, 0x1.9842d6p-118f,
     0x1.7125aap-5f, 0x1.29a334p-27f, 0.0f, 0x1.16fbfap-37f, 0x1.c64394p-42f, 0.0f,
     0.0f, 0x1.55ed8p-100f, 0x1.82db8cp-74f, 0.0f, 0x1.b25a24p-69f, 0.0f,
     0x1.b89bb4p-114f, 0x1.f365b8p-68f, 0x1.f2d394p-88f, 0x1.3ef34p-119f,
     0x1.9d9f3ep-82f, 0x1.037dc6p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b94fdp-123f,
     0x1.54f246p-108f, 0.0f, 0x1.a4eaeap-111f, 0x1.17bfcp-21f, 0.0f, 0x1.82ee02p-1f,
     0.0f, 0x1.33e942p-55f, 0x1.e1cbbap-19f, 0x1.fb1758p-30f, 0x1.400394p-82f, 0.0f,
     0.0f, 0.0f, 0x1p0f, 0x1.c03c6p-63f, 0x1.15358ep-24f, 0x1.f41baap-6f, 0.0f,
     0x1.20e1b2p-32f, 0x1.afc14p-14f, 0.0f, 0.0f, 0x1.269fecp-35f, 0.0f,
     0x1.705212p-22f, 0x1.daddacp-29f, 0.0f, 0.0f, 0x1.be3c5ep-47f, 0.0f, 0.0f,
     0x1.0b8214p-60f, 0x1.46c418p-64f, 0x1.a13854p-121f, 0x1.669ffap-107f, 0.0f, 0.0f,
     0x1.98ab02p-67f, 0.0f, 0x1.b366a2p-87f, 0x1.aa40d8p-93f, 0x1.d5735cp-103f, 0.0f,
     0x1.32ab24p-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.09a24ap-44f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ca82eap-9f, 0x1.e51aep-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1ce22ep-39f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.4fb0fcp-98f, 0.0f, 0.0f, 0.0f, 0x1.0cc8eep-62f,
     0x1.6ae376p-125f, 0x1.8e1092p-83f, 0x1.9fc116p-92f, 0.0f, 0.0f, 0.0f,
     0x1.60365cp-79f, 0x1.015dccp-104f, 0.0f, 0.0f, 0.0f, 0x1.f983d6p-33f, 0.0f,
     0x1.fb86fp-54f, 0.0f, 0x1.443feep-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.af4bbep-4f, 0x1.edc69ap-73f, 0.0f, 0x1.1de79cp-109f, 0x1.3ba43cp-57f,
     0x1.ea6d02p-11f, 0.0f, 0x1.df2758p-110f, 0.0f, 0x1p0f, 0.0f, 0x1.33fea2p-52f,
     0x1p0f, 0x1.9379a4p-26f, 0x1.954a1ep-110f, 0.0f, 0x1.b1f252p-98f,
     0x1.c99d04p-45f, 0.0f, 0.0f, 0x1.4b1364p-109f, 0.0f, 0.0f, 0.0f, 0x1.da882ap-78f,
     0x1.b195a8p-103f, 0x1.dd1746p-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3a179cp-17f,
     0x1.641008p-58f, 0.0f, 0.0f, 0x1.4a5d6ap-37f, 0x1.99db7ep-1f, 0x1.fe3858p-121f,
     0.0f, 0x1.b40aap-22f, 0x1.033e8p-29f, 0.0f, 0x1.992296p-106f, 0.0f,
     0x1.3a915cp-28f
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
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = external_bench_wrapper_cst;
    tmp = __cos_counter_num(0);
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
            tmp1 = Sleef_finz_log2f4_u10kvx(tmp0);
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
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_finz_log2f4_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_log2f4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
