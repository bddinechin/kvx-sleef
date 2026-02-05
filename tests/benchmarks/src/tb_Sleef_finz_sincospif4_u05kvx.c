/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sincospif4_u05kvx.c --function \
 *     Sleef_finz_sincospif4_u05kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 4 --function-input-vector-size \
 *     4 --precision sleef_sf2 --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <string.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef_float32x4_t_2 external_bench_wrapper_cst = {.x = {0.0f, 0.0f, 0.0f, 0.0f},.y = {0.0f, 0.0f, 0.0f, 0.0f}};
static const Sleef_float32x4_t_2 external_bench_wrapper_cst1 = {.x = {0.0f, 0.0f, 0.0f, 0.0f},.y = {0.0f, 0.0f, 0.0f, 0.0f}};
volatile Sleef_float32x4_t_2 external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0x1.87bc9p-76f, 0x1.a5e054p-24f, 0.0f, 0.0f, 0x1.c07204p-17f, 0x1p0f,
     0x1.63453cp-81f, 0.0f, 0x1.3226d8p-110f, 0x1.dd27cap-110f, 0x1.daef96p-111f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.140868p-57f, 0.0f, 0x1.738d4p-37f, 0.0f,
     0x1.747f58p-97f, 0.0f, 0x1.714ce4p-79f, 0.0f, 0x1.b784bp-63f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.819daap-31f, 0.0f, 0x1.685acp-77f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.44ab78p-3f, 0.0f, 0x1.1b07f6p-100f, 0.0f, 0.0f, 0x1.412082p-59f, 0.0f,
     0x1.c37882p-5f, 0x1.cb9036p-117f, 0x1.0d365ap-62f, 0.0f, 0x1.99c934p-53f, 0.0f,
     0x1.93f04cp-49f, 0.0f, 0x1.aa5936p-15f, 0x1.9716bp-115f, 0x1.864ec2p-81f, 0.0f,
     0.0f, 0.0f, 0x1.1989dp-71f, 0x1.c8902p-115f, 0x1.6d8974p-7f, 0x1.9c8144p-74f,
     0x1.e0744ap-55f, 0x1.a277cp-73f, 0x1.e8de58p-36f, 0x1.4a3c9ap-46f, 0.0f,
     0x1.f7b0c2p-89f, 0x1.bd768p-61f, 0x1.d1600cp-92f, 0x1.afd8b8p-60f, 0.0f,
     0x1.ca668p-84f, 0x1.24879ap-87f, 0.0f, 0x1.41ecp-70f, 0x1.965e9ep-47f, 0.0f,
     0x1.cb87fcp-105f, 0x1.bc02f6p-34f, 0.0f, 0.0f, 0x1.adf4dp-98f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c86898p-3f, 0x1.2ef7acp-81f, 0x1.6a7c02p-46f, 0.0f, 0x1p0f,
     0x1.d60826p-119f, 0.0f, 0.0f, 0x1.9d8bfcp-74f, 0.0f, 0.0f, 0x1.d77fdp-41f, 0.0f,
     0x1.dc83dep-58f, 0.0f, 0x1.375c5p-78f, 0x1.89a0ap-43f, 0.0f, 0.0f,
     0x1.6c8978p-31f, 0x1.5edcc4p-79f, 0.0f, 0x1.d139d4p-112f, 0.0f, 0x1.572488p-61f,
     0x1.b068f8p-90f, 0.0f, 0.0f, 0x1.10bb4p-84f, 0.0f, 0.0f, 0x1.6965b8p-43f, 0.0f,
     0x1.8c9fccp-11f, 0.0f, 0x1.5246aap-94f, 0x1.3f76f4p-125f, 0.0f, 0.0f,
     0x1.45f7f6p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f7021ep-73f,
     0x1.e91032p-112f, 0x1.7aa54p-5f, 0.0f, 0x1.57ec6ep-91f, 0x1.e75e7cp-75f,
     0x1.fe08e2p-12f, 0.0f, 0x1.9e3afap-59f, 0x1.07bc86p-48f, 0x1.841f64p-23f, 0.0f,
     0.0f, 0x1.d6763cp-41f, 0.0f, 0x1.b3ace8p-1f, 0.0f, 0.0f, 0x1.472516p-15f,
     0x1.49fa7ap-31f, 0x1.e5d644p-116f, 0x1.57abfap-88f, 0.0f, 0x1.e5d058p-91f, 0.0f,
     0.0f, 0x1.fd9f94p-37f, 0.0f, 0x1.a5378p-14f, 0x1.b26a4ep-20f, 0x1.95b73p-113f,
     0x1.02e758p-6f, 0.0f, 0x1.cb3ba8p-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fd79d4p-112f, 0x1.69048ap-88f, 0x1.9f471ap-67f, 0x1.c95c7p-13f,
     0x1.4753dap-56f, 0x1.d0840ap-40f, 0x1.fbde28p-34f, 0x1.0bcb68p-62f, 0.0f,
     0x1.1aceb4p-54f, 0x1.42ff18p-106f, 0.0f, 0x1.c792aep-54f, 0x1.6f54cep-67f, 0.0f,
     0.0f, 0x1.43d3acp-5f, 0.0f, 0.0f, 0x1.707a04p-66f, 0.0f, 0x1.9f3cp-104f,
     0x1.130fc6p-71f, 0x1.16b83p-98f, 0x1.90b272p-64f, 0x1.aade7ep-3f, 0.0f, 0.0f,
     0x1.841f5p-24f, 0.0f, 0x1.48af74p-93f, 0x1.bd923ap-12f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e0e5p-84f, 0.0f, 0x1.dcab28p-104f, 0x1.4143d2p-59f,
     0x1.ef0708p-107f, 0x1.e5cddcp-90f, 0x1.67f856p-87f, 0.0f, 0x1.c7f042p-110f,
     0x1.d77778p-29f, 0.0f, 0.0f, 0x1.fecf74p-124f, 0.0f, 0.0f, 0x1.761dc4p-30f,
     0x1.3a9026p-55f, 0.0f, 0.0f, 0x1.11210ep-41f, 0x1.7deecp-40f, 0.0f, 0.0f,
     0x1.e0cbbcp-26f, 0.0f, 0x1.0dd3a4p-89f, 0x1.dad4c6p-122f, 0.0f, 0.0f, 0.0f,
     0x1.75770cp-24f, 0x1.96de16p-50f, 0x1.a4afe8p-44f, 0.0f, 0x1.ed104ap-107f, 0.0f,
     0x1.3a5d2ap-69f, 0x1.8e51b8p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.38fff4p-3f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.82e716p-125f, 0x1.5f8f0ap-122f, 0.0f,
     0x1.26d3e2p-107f, 0.0f, 0x1.cb537cp-64f, 0.0f, 0.0f, 0x1.c3b562p-108f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f9f6b4p-1f, 0.0f, 0x1.6ccd98p-24f, 0.0f, 0x1.be8194p-88f,
     0x1.de28dep-55f, 0x1.e65f34p-25f, 0.0f, 0x1.9d376ep-69f, 0x1p0f, 0x1.d7db84p-75f,
     0x1.897f02p-54f, 0.0f, 0.0f, 0.0f, 0x1.4368dep-37f, 0.0f, 0x1.4e0388p-59f,
     0x1.6b113ep-40f, 0x1.485c0ap-3f, 0.0f, 0.0f, 0x1.b487dcp-35f, 0.0f, 0.0f, 0.0f,
     0x1.564e96p-32f, 0x1.e341cp-110f, 0.0f, 0x1.3dfd14p-35f, 0.0f, 0x1.abab74p-12f,
     0x1.c2e2bcp-37f, 0x1.0ce08ep-14f, 0x1.21d198p-79f, 0.0f, 0x1.18420ap-98f, 0.0f,
     0x1.892166p-54f, 0.0f, 0x1.998ce2p-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f1974p-70f, 0.0f, 0x1.542572p-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.59e6cep-41f, 0x1.a5b4fp-101f, 0x1.d73d3ap-119f, 0x1.00d068p-56f, 0.0f,
     0x1.074accp-51f, 0x1.4ab15ap-17f, 0.0f, 0.0f, 0x1.86bed6p-21f, 0.0f,
     0x1.cea068p-17f, 0.0f, 0x1.0e889ep-23f, 0x1.8e267p-54f, 0.0f, 0x1.bd8adap-56f,
     0.0f, 0x1.c1ce1ep-76f, 0x1.07f21cp-83f, 0.0f, 0.0f, 0.0f, 0x1.19c95cp-31f, 0.0f,
     0.0f, 0x1.22a728p-109f, 0.0f, 0.0f, 0x1.63a0bcp-126f, 0.0f, 0x1.acce7p-28f, 0.0f,
     0x1.843918p-36f, 0x1.fb501p-32f, 0.0f, 0x1.2dd398p-4f, 0.0f, 0.0f,
     0x1.fb46e6p-19f, 0.0f, 0.0f, 0.0f, 0x1.1b1d14p-93f, 0x1.331dcp-93f,
     0x1.4c0ec4p-97f, 0.0f, 0x1.dadc36p-53f, 0x1.eb0ea4p-72f, 0x1.1a3c02p-95f, 0.0f,
     0.0f, 0x1.db006cp-21f, 0x1.72cfc4p-28f, 0x1.e87b5p-73f, 0.0f, 0.0f,
     0x1.ae13fcp-66f, 0x1.b1b2dcp-110f, 0x1.ebe208p-123f, 0.0f, 0x1.510576p-42f, 0.0f,
     0x1.baf6d8p-80f, 0x1.cd34f4p-6f, 0x1.4c5dc6p-74f, 0x1.ec64aap-68f,
     0x1.8254fep-68f, 0.0f, 0x1.b20748p-95f, 0.0f, 0x1.a204c2p-35f, 0.0f,
     0x1.c85886p-78f, 0.0f, 0x1.f08bc2p-17f, 0.0f, 0.0f, 0.0f, 0x1.71e084p-45f,
     0x1.5f216ap-109f, 0.0f, 0x1.ad0698p-118f, 0.0f, 0.0f, 0.0f, 0x1.e0de76p-43f,
     0x1.c89aaep-65f, 0x1.72dcc4p-23f, 0.0f, 0x1.ae9ad2p-56f, 0x1.9d09ep-107f,
     0x1.90f3ecp-23f, 0.0f, 0.0f, 0x1.aaed6ap-5f, 0.0f, 0.0f, 0x1.6371a6p-95f, 0.0f,
     0x1.f9b26ep-43f, 0x1.21d61cp-88f, 0.0f, 0.0f, 0x1.00129ap-29f, 0.0f,
     0x1.7fd47cp-121f, 0x1.b5e698p-23f, 0.0f, 0.0f, 0.0f, 0x1.2db21cp-77f,
     0x1.47ce06p-119f, 0x1.c1852cp-52f, 0.0f, 0x1.8e679p-16f, 0x1.a96ecp-125f,
     0x1.cda082p-120f, 0.0f, 0x1.56b3ecp-126f, 0x1.a82916p-30f, 0x1.7e248cp-78f,
     0x1.dcbe98p-25f, 0x1.f8cf72p-77f, 0.0f, 0.0f, 0x1.9d705p-118f, 0.0f,
     0x1.3a78cep-54f, 0.0f, 0x1.0197fcp-59f, 0.0f, 0x1.41f746p-95f, 0x1.44a536p-1f,
     0x1.3713f6p-84f, 0.0f, 0.0f, 0x1.94b25ap-77f, 0.0f, 0x1.221de4p-18f,
     0x1.889458p-1f, 0x1.879ef4p-79f, 0x1.8a6fa6p-123f, 0.0f, 0.0f, 0.0f,
     0x1.6b28b2p-44f, 0x1.0c678ep-13f, 0x1.66bd2ap-115f, 0.0f, 0x1.f495d6p-90f,
     0x1.3f5d68p-4f, 0x1.f699a2p-79f, 0x1.c7cfb6p-30f, 0.0f, 0x1.8cc794p-51f,
     0x1.2b48acp-100f, 0x1.ca1658p-82f, 0x1.721a7ep-18f, 0x1.1593dap-76f,
     0x1.5b781p-1f, 0x1.91b4ccp-112f, 0.0f, 0.0f, 0.0f, 0x1.4c3c08p-75f,
     0x1.1b32cap-46f, 0x1.822b48p-10f, 0x1.8fc02ep-78f, 0x1.11874ep-84f, 0.0f, 0.0f,
     0x1.2174e2p-82f, 0x1.cad21ap-98f, 0.0f, 0x1.cda91p-115f, 0x1.97515cp-22f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2209d2p-54f, 0x1.156076p-17f, 0.0f, 0.0f,
     0x1.36526ep-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f7f0bep-9f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.aba2d8p-115f, 0x1.550faap-21f, 0x1.6597aap-99f,
     0x1.ad68e6p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.84e6bcp-62f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ce0a9p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e7117p-32f,
     0.0f, 0.0f, 0x1.591128p-115f, 0.0f, 0x1.266174p-5f, 0x1.692f66p-44f, 0.0f,
     0x1.a64a6cp-74f, 0x1.34be42p-49f, 0.0f, 0.0f, 0x1.891964p-5f, 0.0f, 0.0f, 0.0f,
     0x1.1debfp-57f, 0.0f, 0x1.436518p-118f, 0x1.1f665ep-66f, 0.0f, 0x1.ffc0b6p-100f,
     0x1.51e58p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.28d66p-3f, 0x1.d17cdcp-76f, 0.0f,
     0.0f, 0x1.de1ed4p-2f, 0.0f, 0x1.d56e74p-4f, 0x1.0b19fcp-108f, 0x1.9524p-59f,
     0x1.57da8cp-97f, 0.0f, 0x1.7f0e78p-75f, 0.0f, 0x1.280a92p-89f, 0x1.3e317ap-104f,
     0.0f, 0.0f, 0.0f, 0x1.1a84aap-60f, 0.0f, 0.0f, 0.0f, 0x1.ff4162p-68f, 0.0f, 0.0f,
     0x1.4dc914p-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e7581cp-25f, 0x1.d68adap-81f,
     0x1.8701a4p-23f, 0x1.8a9bcp-119f, 0x1.71ae5ep-67f, 0.0f, 0.0f, 0x1.9d9808p-64f,
     0.0f, 0.0f, 0.0f, 0x1.5117fap-47f, 0.0f, 0.0f, 0x1.aa23e8p-122f, 0.0f, 0x1p0f,
     0x1.cbec56p-126f, 0.0f, 0.0f, 0x1.63ed0cp-4f, 0x1.e1f95p-22f, 0.0f, 0.0f, 0.0f,
     0x1.e4517cp-61f, 0x1.9b547ep-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4980cp-115f, 0.0f,
     0x1.1bcb22p-75f, 0x1.038c28p-5f, 0x1.ec7542p-20f, 0.0f, 0x1.23d43cp-82f,
     0x1.b992cap-58f, 0x1.904f58p-110f, 0x1.fb37b4p-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.895a46p-116f, 0x1.f2c77ap-27f, 0.0f, 0x1.ab4eecp-106f,
     0x1.ba373ap-60f, 0x1.2fabc2p-2f, 0.0f, 0x1.cc6a98p-44f, 0x1.fc82b6p-24f, 0.0f,
     0.0f, 0x1.39c2bcp-97f, 0.0f, 0.0f, 0x1.d058a8p-47f, 0x1.ae2574p-113f, 0.0f, 0.0f,
     0.0f, 0x1.a7b29ep-57f, 0x1.78d5d2p-107f, 0x1.4db3bap-44f, 0.0f, 0x1.ebf6f2p-123f,
     0.0f, 0x1.1e2b88p-27f, 0.0f, 0x1.31f6c8p-46f, 0x1.d97e74p-89f, 0x1.6ed22ap-101f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a85764p-61f, 0.0f, 0x1.9844dcp-82f,
     0x1.798532p-1f, 0x1.9d7ef2p-8f, 0x1.80be78p-79f, 0.0f, 0.0f, 0x1.441ca8p-68f,
     0x1.f6d57p-30f, 0.0f, 0x1.7b709ap-37f, 0x1.b0ca78p-126f, 0.0f, 0.0f,
     0x1.8cfdacp-123f, 0x1.6e155ep-1f, 0.0f, 0.0f, 0.0f, 0x1.0579aep-96f, 0.0f, 0.0f,
     0x1.6aa334p-73f, 0.0f, 0.0f, 0x1.53edp-115f, 0.0f, 0x1.322a56p-28f, 0.0f,
     0x1.b32de6p-48f, 0x1.172dbap-93f, 0x1.64db8ap-18f, 0.0f, 0.0f, 0.0f,
     0x1.3be69ap-86f, 0x1.1c35dcp-66f, 0.0f, 0x1.4449d4p-80f, 0.0f, 0x1.9c0504p-32f,
     0x1.10b81p-12f, 0x1.a2db4cp-79f, 0x1.8e84c8p-124f, 0.0f, 0x1.6accfp-10f,
     0x1.cfd472p-89f, 0.0f, 0x1.19a938p-76f, 0.0f, 0x1.1e4352p-14f, 0.0f,
     0x1.5ff286p-103f, 0x1.3b906ap-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9d58fcp-69f,
     0.0f, 0x1.68a61p-20f, 0.0f, 0.0f, 0x1.7e8212p-29f, 0.0f, 0x1.ce0a1cp-47f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.4ade7ep-71f, 0.0f, 0.0f, 0x1.fbb26ep-3f, 0x1.3f4bfap-74f,
     0.0f, 0.0f, 0.0f, 0x1.648d54p-64f, 0.0f, 0x1.4bbf9p-62f, 0x1.5538d2p-58f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.38150ap-59f, 0x1.823256p-49f, 0x1.665d5cp-90f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.c72daap-78f, 0x1.dc27d2p-26f, 0x1.57809ep-107f, 0.0f, 0.0f,
     0x1.df592ap-108f, 0x1.2184fap-56f, 0.0f, 0.0f, 0x1.2acd72p-104f, 0x1.ea572ep-18f,
     0x1.c9b6bcp-25f, 0x1.3ee4fcp-28f, 0.0f, 0.0f, 0x1.087f04p-58f, 0x1.b73464p-29f,
     0x1.d1e4d2p-63f, 0.0f, 0x1.497df4p-113f, 0.0f, 0x1.d74b82p-73f, 0.0f, 0.0f,
     0x1.52530ap-96f, 0.0f, 0x1.a8916cp-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1a56dcp-34f, 0x1.e229d2p-23f, 0.0f, 0x1.77e7cp-31f, 0x1.5286e8p-12f, 0.0f,
     0x1.cf2908p-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fe21f2p-120f, 0x1.84e6e4p-94f,
     0x1.96998cp-19f, 0x1.c9fd9ep-103f, 0x1.b360c2p-28f, 0x1.613578p-59f,
     0x1.46357ap-22f, 0x1.142f7ep-25f, 0.0f, 0x1.770a8ap-111f, 0.0f, 0x1.d12ep-20f,
     0x1.de7b4p-28f, 0.0f, 0.0f, 0x1.881f3cp-75f, 0.0f, 0.0f, 0.0f, 0x1.b4cb9cp-28f,
     0x1.1f2818p-67f, 0.0f, 0x1.8b73e2p-54f, 0.0f, 0.0f, 0x1.3683b6p-58f, 0.0f,
     0x1.17cb1ep-51f, 0x1.1bcb14p-17f, 0.0f, 0.0f, 0x1.f5c58cp-122f, 0x1.78f3e2p-89f,
     0x1.330156p-61f, 0x1.0025b8p-3f, 0.0f, 0.0f, 0x1.ed3562p-103f, 0x1.afd7dep-107f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9c7ac6p-107f, 0.0f, 0x1.bbe7eep-39f,
     0x1.cbdc3ap-27f, 0.0f, 0x1.18feaap-103f, 0x1.7f9dd2p-90f, 0x1.03cc38p-122f,
     0x1.d19fe6p-52f, 0x1.36fee2p-108f, 0x1.0eb474p-110f, 0.0f, 0.0f, 0.0f,
     0x1.7729dcp-57f, 0x1.7fc912p-91f, 0.0f, 0.0f, 0.0f, 0x1.fa2534p-120f, 0.0f,
     0x1.91a984p-39f, 0.0f, 0.0f, 0x1.567eb2p-10f, 0.0f, 0.0f, 0x1.99f056p-83f, 0.0f,
     0.0f, 0.0f, 0x1.d03aep-12f, 0x1.248b6ap-126f, 0.0f, 0.0f, 0x1.066ff6p-104f,
     0x1.8ac65cp-35f, 0.0f, 0x1.cd95dep-50f, 0x1.8696cp-60f, 0x1.00e746p-116f,
     0x1.a8bdeep-65f, 0x1.523b7ep-7f, 0x1.b633e2p-48f, 0.0f, 0x1.26c76p-72f, 0.0f,
     0x1.e34c5ap-84f, 0.0f, 0x1.d26e8ep-116f, 0x1.09393ap-95f, 0.0f, 0x1.55e368p-87f,
     0x1.b44892p-87f, 0x1.002d3cp-91f, 0.0f, 0x1.6b6caep-3f, 0.0f, 0x1.1d53fap-26f,
     0.0f, 0.0f, 0x1.640adp-83f, 0.0f, 0x1.63690ep-34f, 0.0f, 0.0f, 0x1.1bc3b2p-19f,
     0x1.94ff36p-64f, 0x1.b1ab7p-59f, 0x1.796e66p-26f, 0x1.01a1c2p-36f,
     0x1.63a112p-55f, 0.0f, 0.0f, 0.0f, 0x1.bd8c42p-65f, 0x1.14011cp-82f, 0.0f,
     0x1.874704p-121f, 0x1.4a1858p-86f, 0.0f, 0x1.7f3b9cp-74f, 0.0f, 0x1.f98882p-28f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3ca5e2p-13f, 0.0f, 0.0f, 0x1.98be16p-95f,
     0x1.9e287cp-45f, 0x1.9360f8p-86f, 0.0f, 0.0f, 0.0f, 0x1.1f065p-66f,
     0x1.0d862cp-16f, 0.0f, 0.0f, 0.0f, 0x1.d8e99ap-24f, 0x1.c76462p-118f,
     0x1.59c2bp-66f, 0x1.048e1ap-10f, 0x1.47f42cp-79f, 0x1.be3482p-8f, 0.0f,
     0x1.5e5908p-13f, 0.0f, 0.0f, 0x1.3bd4e4p-126f, 0.0f, 0.0f, 0.0f,
     0x1.b8d706p-111f, 0.0f, 0.0f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef_float32x4_t_2 global_bench_acc;
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
        Sleef_float32x4_t_2 local_acc;
        int32_t i;
        ml_float4_t tmp0;
        ml_float4_t tmp1;
        ml_float4_t tmp2;
        ml_float4_t tmp3;
        ml_float4_t tmp4;
        ml_float4_t tmp5;
        Sleef_float32x4_t_2 tmp6;
        int32_t tmp7;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1004));){
            ml_float4_t tmp0;
            Sleef_float32x4_t_2 tmp1;
            ml_float4_t tmp2;
            ml_float4_t tmp3;
            ml_float4_t tmp4;
            ml_float4_t tmp5;
            ml_float4_t tmp6;
            ml_float4_t tmp7;
            Sleef_float32x4_t_2 tmp8;
            int32_t tmp9;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_finz_sincospif4_u05kvx(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = local_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = local_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef_float32x4_t_2) {.x=tmp4, .y=tmp7});
            local_acc = tmp8;
            tmp9 = i + INT32_C(4);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = local_acc.x;
        tmp2 = tmp0 + tmp1;
        tmp3 = global_bench_acc.y;
        tmp4 = local_acc.y;
        tmp5 = tmp3 + tmp4;
        tmp6 = ((Sleef_float32x4_t_2) {.x=tmp2, .y=tmp5});
        global_bench_acc = tmp6;
        tmp7 = j + INT32_C(1);
        j = tmp7;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_finz_sincospif4_u05kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_sincospif4_u05kvx bench acc {.x=[%a, %a, %a, %a], .y=[%a, %a, %a, %a]}\n", global_bench_acc.x[0], global_bench_acc.x[1], global_bench_acc.x[2], global_bench_acc.x[3], global_bench_acc.y[0], global_bench_acc.y[1], global_bench_acc.y[2], global_bench_acc.y[3]);
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
