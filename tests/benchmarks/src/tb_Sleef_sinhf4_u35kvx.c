/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sinhf4_u35kvx.c --function Sleef_sinhf4_u35kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 4 --function-input-vector-size 4 --bench \
 *     --no-embedded-bin --target kv3
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
     0.0f, 0.0f, 0x1.352b32p-14f, 0.0f, 0x1.971394p-86f, 0x1.e467bp-15f,
     0x1.1b815ap-13f, 0.0f, 0x1.ebc6b6p-9f, 0x1.5a69bcp-17f, 0.0f, 0x1.fe76p-116f,
     0.0f, 0x1.54c224p-7f, 0x1.4877ap-59f, 0.0f, 0.0f, 0x1.986c32p-88f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b20424p-44f, 0x1.d154ecp-108f, 0x1.be7beep-111f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.2eaffp-77f, 0.0f, 0x1.0b0742p-78f, 0x1.8c01ap-88f,
     0x1.9ca17cp-102f, 0x1.d95042p-58f, 0x1.cb97bcp-86f, 0x1.735fb6p-56f, 0.0f, 0.0f,
     0x1.a9093ep-8f, 0.0f, 0.0f, 0x1.8e3056p-123f, 0x1.d89774p-72f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.faac0cp-21f, 0x1.e4868ap-33f, 0x1.5254dcp-120f, 0x1.a38d86p-64f,
     0x1.4b5f4p-11f, 0x1.377854p-82f, 0.0f, 0x1.e4775ap-15f, 0.0f, 0x1.68356ep-58f,
     0x1.84cdc8p-39f, 0x1.9e3edp-99f, 0.0f, 0x1.8a30c8p-23f, 0.0f, 0.0f,
     0x1.902a3p-48f, 0x1.086d7ap-34f, 0.0f, 0.0f, 0.0f, 0x1.7374fcp-109f, 0.0f,
     0x1.683dbep-74f, 0.0f, 0x1.1a6626p-37f, 0.0f, 0x1.4d6044p-88f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.2b2cc2p-65f, 0x1.96d2fp-119f, 0x1.2a19eap-59f, 0x1.b8c824p-108f,
     0.0f, 0x1.dd7f26p-109f, 0x1.5965f6p-117f, 0x1.551f5p-35f, 0.0f, 0x1.8741d2p-64f,
     0x1.f0c9dap-94f, 0x1.fb386ep-10f, 0x1.0906d6p-28f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2923aap-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a7dc42p-19f, 0x1.facd46p-61f,
     0.0f, 0x1.d6faf2p-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.203adap-21f, 0x1.7e5f4cp-103f,
     0x1.56989ap-81f, 0x1.573c66p-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.03275p-58f,
     0x1.6e76a4p-11f, 0.0f, 0x1.689f3ep-39f, 0x1.77f066p-7f, 0x1.0c9636p-46f, 0.0f,
     0x1.b98746p-98f, 0x1.f067dp-98f, 0.0f, 0x1.b1a942p-76f, 0x1.0628dcp-22f,
     0x1.0ee05ap-44f, 0x1.5278ecp-71f, 0.0f, 0.0f, 0.0f, 0x1.fe80ccp-114f,
     0x1.79358cp-42f, 0.0f, 0x1.0e3b7ep-107f, 0.0f, 0.0f, 0x1.4d343p-27f,
     0x1.262cbep-95f, 0.0f, 0.0f, 0x1.4d086ep-107f, 0x1.31594p-57f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.07c172p-27f, 0.0f, 0.0f, 0x1.d5b50cp-79f,
     0x1.2ca9ep-7f, 0.0f, 0.0f, 0x1.17a044p-36f, 0x1.71c166p-95f, 0.0f,
     0x1.1c4886p-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.603accp-1f, 0x1.c22204p-27f, 0.0f,
     0x1.da7dccp-50f, 0.0f, 0.0f, 0.0f, 0x1.87902p-63f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e06428p-88f, 0.0f, 0.0f, 0x1.ee44e6p-115f, 0.0f, 0x1.1dfcdap-6f, 0.0f,
     0x1.ec43eap-120f, 0.0f, 0x1.c9f2f2p-53f, 0x1.2e6a62p-82f, 0.0f, 0x1.5d41e8p-119f,
     0.0f, 0x1.efd6f2p-24f, 0.0f, 0x1.2a4cdep-125f, 0x1.4f620cp-73f, 0x1.97e656p-12f,
     0x1p0f, 0x1.9e0dc6p-68f, 0.0f, 0.0f, 0.0f, 0x1.cd2ccep-93f, 0x1.60243p-31f,
     0x1.1cccc4p-74f, 0x1.33088cp-62f, 0.0f, 0.0f, 0x1.e8e55ap-126f, 0.0f, 0.0f,
     0x1.e541b6p-63f, 0.0f, 0x1.682684p-23f, 0x1.29892ep-86f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b89de2p-84f, 0x1.dd8128p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.50fd4ep-98f,
     0x1.53b5c4p-48f, 0x1.8bb5dep-44f, 0x1.14f3fep-118f, 0x1.52e23ap-94f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.63e516p-113f, 0.0f, 0x1.e07bfap-96f, 0.0f, 0.0f,
     0x1.c2a082p-3f, 0.0f, 0x1.2730f2p-34f, 0x1.08f8f6p-98f, 0x1.6c3aeap-71f, 0.0f,
     0x1.f4dbdp-91f, 0.0f, 0x1.66f856p-58f, 0x1.966fbp-105f, 0x1.e6cc26p-116f,
     0x1.fe1cd2p-1f, 0x1.cf7b2cp-40f, 0x1.7e6d76p-123f, 0x1.a04cdep-96f,
     0x1.bb3abcp-79f, 0x1.afe30ep-91f, 0x1.ea010ep-37f, 0.0f, 0x1.24dc62p-75f,
     0x1.d109a6p-50f, 0x1.d770e4p-76f, 0x1.2b536ep-54f, 0x1.e7b7dep-14f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.0d0df6p-85f, 0x1.7dc8ccp-81f, 0x1.977f66p-108f, 0.0f, 0.0f,
     0x1.2f68bp-123f, 0.0f, 0x1.1ea5e2p-109f, 0x1.f57e6cp-59f, 0x1.daeeb6p-64f, 0.0f,
     0.0f, 0.0f, 0x1.e5825ep-125f, 0.0f, 0x1.bdbac4p-59f, 0x1.228f88p-109f,
     0x1.8a5746p-14f, 0.0f, 0x1.7296cap-12f, 0.0f, 0.0f, 0.0f, 0x1.a9952ep-2f, 0.0f,
     0.0f, 0.0f, 0x1.4f8c1ap-69f, 0.0f, 0x1.31c814p-21f, 0.0f, 0.0f, 0x1.899e0ap-95f,
     0x1.f0b966p-5f, 0x1.6f57p-119f, 0x1.ac6f5ap-125f, 0x1.1c62e2p-89f, 0.0f, 0.0f,
     0.0f, 0x1.4a0976p-9f, 0x1.bb4012p-112f, 0x1.bb094cp-55f, 0.0f, 0x1.29834p-69f,
     0x1.b11eeep-44f, 0.0f, 0.0f, 0.0f, 0x1.39739ap-89f, 0x1.c8e1eap-121f, 0.0f,
     0x1.0fc2eap-115f, 0x1.298254p-27f, 0.0f, 0.0f, 0x1.053b26p-125f, 0.0f, 0.0f,
     0x1.05bb46p-118f, 0.0f, 0x1.7e47e8p-23f, 0x1.c0793p-30f, 0x1.aa2704p-63f,
     0x1.727086p-110f, 0.0f, 0.0f, 0x1.87226p-118f, 0x1.b8e46p-116f, 0x1.dbe24cp-26f,
     0x1.3d985ap-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a8bb4p-80f,
     0.0f, 0.0f, 0.0f, 0x1.193922p-7f, 0.0f, 0.0f, 0x1.3ac8c2p-18f, 0x1.5753e8p-19f,
     0.0f, 0.0f, 0.0f, 0x1.e8ae3cp-121f, 0x1.7a01d6p-79f, 0.0f, 0x1.7cffb8p-26f,
     0x1.206e5ep-34f, 0x1.c064bcp-85f, 0x1.629266p-62f, 0x1.ce15c2p-47f,
     0x1.1822a2p-85f, 0x1.30442cp-94f, 0.0f, 0x1.0a164ep-46f, 0x1.17f7f2p-14f,
     0x1.7a32p-67f, 0.0f, 0.0f, 0.0f, 0x1.09a948p-23f, 0.0f, 0.0f, 0x1.55825ep-109f,
     0x1.450f3ep-94f, 0x1.7d84ap-37f, 0x1.dc063p-108f, 0.0f, 0x1p0f, 0x1.78bf4cp-64f,
     0.0f, 0.0f, 0.0f, 0x1.2777ccp-92f, 0.0f, 0.0f, 0.0f, 0x1.cd637p-58f,
     0x1.4d3c92p-72f, 0x1.ec5186p-39f, 0.0f, 0.0f, 0x1.5298c2p-39f, 0.0f,
     0x1.e2648p-120f, 0x1.151d98p-97f, 0.0f, 0x1.66817ap-113f, 0x1.3b15c8p-50f, 0.0f,
     0x1.9996dcp-74f, 0.0f, 0.0f, 0x1.389224p-73f, 0.0f, 0.0f, 0x1.5cc8e8p-87f, 0.0f,
     0x1.cd18f6p-29f, 0x1.ab0adep-18f, 0.0f, 0x1.1b4a06p-89f, 0x1.ff6792p-54f, 0.0f,
     0x1.7dee8p-82f, 0x1.b3cc8ep-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ada5c6p-54f,
     0.0f, 0x1.60ba68p-114f, 0x1.a7f522p-21f, 0x1.f6f40ap-42f, 0x1.987a04p-49f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.0d8acep-21f, 0x1.f63ca8p-30f, 0.0f, 0.0f, 0x1.abf85ap-45f,
     0x1.ac6b1ap-10f, 0.0f, 0x1.943462p-126f, 0x1.d6a734p-125f, 0x1.2e5fbep-112f,
     0x1.b86e5ep-35f, 0.0f, 0.0f, 0x1.cfbc4cp-92f, 0.0f, 0.0f, 0.0f, 0x1.0bc12ap-98f,
     0x1.77117cp-87f, 0x1p0f, 0x1.af06p-102f, 0x1.4d1004p-112f, 0.0f, 0x1.c2db92p-80f,
     0x1.80cc36p-36f, 0x1.5db91cp-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.09084ap-109f, 0x1.193244p-93f, 0.0f, 0x1.d0bd1ap-7f, 0x1.cb14ccp-64f,
     0x1.f004f2p-78f, 0x1.89774ep-8f, 0.0f, 0.0f, 0x1.9e724p-3f, 0x1.df84b2p-42f,
     0.0f, 0.0f, 0x1.4054eap-85f, 0x1.47566ap-84f, 0.0f, 0x1.2fe77p-7f, 0.0f,
     0x1.844dacp-88f, 0x1.896ebp-40f, 0x1.ec1332p-108f, 0x1.efbbe8p-14f, 0.0f,
     0x1.124298p-19f, 0.0f, 0x1.2b2616p-53f, 0x1.73edd2p-59f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.712d7ap-87f, 0.0f, 0x1.df624ep-126f, 0x1.8569f8p-99f, 0x1.221326p-114f, 0.0f,
     0x1.15508cp-89f, 0.0f, 0x1.f3c364p-84f, 0x1.08384ep-107f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.1e60fap-71f, 0.0f, 0.0f, 0x1.bfa7ccp-26f, 0.0f, 0x1.979b08p-62f,
     0x1.1b4a66p-25f, 0.0f, 0x1.184cdp-52f, 0.0f, 0.0f, 0x1.dbf966p-48f,
     0x1.20f002p-110f, 0x1.684e4ep-1f, 0.0f, 0x1.2ea904p-45f, 0.0f, 0x1.aebbe8p-75f,
     0x1.71bcc8p-103f, 0.0f, 0x1.673e84p-70f, 0x1.a161d2p-10f, 0.0f, 0x1.eab0bp-90f,
     0.0f, 0x1.a8dd92p-121f, 0.0f, 0.0f, 0x1.f0f46ap-52f, 0.0f, 0x1.e7ba5ap-15f,
     0x1.999deap-117f, 0x1.58779ep-33f, 0x1.0e93e8p-55f, 0x1.af9f1cp-122f,
     0x1.4516a2p-45f, 0.0f, 0.0f, 0.0f, 0x1.0c5854p-109f, 0x1.118d6ep-124f,
     0x1.160c8cp-80f, 0x1.d4de8cp-52f, 0.0f, 0.0f, 0x1.4d159p-58f, 0x1.759038p-85f,
     0x1.0f0a78p-1f, 0x1.7c7ebp-92f, 0.0f, 0x1.741bd8p-48f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6a5934p-99f, 0.0f, 0x1.4f250ep-101f, 0x1.7bbe72p-34f, 0x1.e1e28cp-114f, 0.0f,
     0x1.e9a3cp-45f, 0x1.8f878p-80f, 0x1.91a40cp-98f, 0x1.647324p-20f, 0.0f,
     0x1.3949a4p-15f, 0.0f, 0.0f, 0x1.002268p-66f, 0x1p0f, 0.0f, 0.0f, 0x1.9b87fp-1f,
     0.0f, 0.0f, 0x1.1a49p-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2e31e8p-80f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.7c9dc8p-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.79a39cp-89f,
     0x1.451414p-107f, 0x1.7ef594p-33f, 0.0f, 0.0f, 0.0f, 0x1.2ebb7p-62f,
     0x1.9187fcp-67f, 0x1.a5e374p-98f, 0x1.a2a9cp-125f, 0x1.dd6e22p-120f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.51dfc2p-17f, 0.0f, 0x1.bbeaeep-114f, 0x1.dc5096p-15f,
     0.0f, 0.0f, 0x1.05a5fcp-29f, 0x1.a1c1a2p-40f, 0.0f, 0x1.f29174p-3f,
     0x1.9f77d2p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.17e6b4p-105f, 0.0f, 0.0f,
     0x1.bc3a5ap-44f, 0.0f, 0x1.51b2b6p-45f, 0x1.b1f90ep-82f, 0.0f, 0x1.e294a2p-32f,
     0x1.45d712p-9f, 0.0f, 0.0f, 0.0f, 0x1.8bbb76p-51f, 0x1.27ce98p-14f,
     0x1.7c9ac8p-41f, 0x1.1ba8a2p-88f, 0.0f, 0x1.1f9446p-88f, 0x1.e0d868p-88f, 0.0f,
     0x1.f1063p-104f, 0.0f, 0x1.d6964p-93f, 0.0f, 0x1.d0c9fep-68f, 0x1.83c918p-82f,
     0x1.f3b066p-96f, 0.0f, 0x1.40ed96p-125f, 0x1.d8ae56p-112f, 0.0f, 0x1.eedbfap-71f,
     0.0f, 0x1.988ee2p-17f, 0x1.f7c736p-99f, 0x1.6f2edap-79f, 0.0f, 0.0f, 0.0f,
     0x1.e6ea76p-125f, 0x1p0f, 0x1.52a43ap-94f, 0.0f, 0.0f, 0.0f, 0x1.b9c414p-59f,
     0.0f, 0x1.a5c4eep-71f, 0x1.6c481ap-122f, 0x1.41a05ap-54f, 0x1.cfd928p-70f,
     0x1.dc7fbap-90f, 0x1.623098p-84f, 0x1.9c372ep-7f, 0x1.048eb2p-73f,
     0x1.fde518p-123f, 0.0f, 0.0f, 0x1.9d265ep-82f, 0.0f, 0.0f, 0x1.d4546ep-12f,
     0x1.e706a8p-58f, 0.0f, 0.0f, 0x1.8caf8ap-25f, 0.0f, 0.0f, 0.0f, 0x1.bfb518p-114f,
     0x1.f5f26p-57f, 0.0f, 0x1.3d276p-11f, 0.0f, 0.0f, 0x1.97b2fap-12f, 0.0f,
     0x1.7b1f6ap-6f, 0x1.2b2c12p-62f, 0.0f, 0.0f, 0.0f, 0x1.192d1ap-121f,
     0x1.f6077p-21f, 0x1.e6227ep-118f, 0x1.c1a8e2p-90f, 0x1.bce67p-123f,
     0x1.7918dep-61f, 0x1.8485a4p-68f, 0x1.6c754ep-106f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.de6e3ep-1f, 0x1.efa88p-86f, 0x1.e474acp-58f, 0x1.5ed2fep-74f, 0.0f,
     0x1.c486f8p-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.56a63ap-79f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.41131p-109f, 0x1.ee1b96p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f9c7ep-118f, 0.0f, 0x1.c1935ap-37f, 0x1.c5593ap-76f, 0.0f, 0.0f,
     0x1.e7ca8ap-54f, 0.0f, 0x1.677ac6p-103f, 0.0f, 0.0f, 0x1.da8cd6p-41f,
     0x1.a51862p-72f, 0x1.f21458p-102f, 0.0f, 0.0f, 0x1.bc66bcp-27f, 0.0f, 0.0f,
     0x1.360bf4p-106f, 0.0f, 0x1.f75116p-81f, 0.0f, 0x1.d9561cp-45f, 0x1.5200a4p-4f,
     0x1.42558ep-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.113a0ap-103f, 0x1.da4c36p-36f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.1c0576p-25f, 0x1.5305f4p-94f, 0.0f, 0.0f, 0.0f,
     0x1.2353f8p-46f, 0x1.7ffe8cp-93f, 0x1.0008c6p-73f, 0x1.08d554p-120f,
     0x1.ed5e56p-28f, 0x1.8577aep-120f, 0x1.17ad9p-76f, 0x1.a8446ep-13f,
     0x1.e45f94p-15f, 0.0f, 0x1.ce1532p-112f, 0.0f, 0.0f, 0x1.6ee01p-61f,
     0x1.654206p-99f, 0.0f, 0x1.be4b7p-86f, 0x1.8d90b2p-46f, 0.0f, 0x1.b3c67ap-20f,
     0.0f, 0x1.bec7d6p-4f, 0.0f, 0x1.22ddf2p-112f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6317a6p-52f, 0.0f, 0x1.737938p-48f, 0x1.96dbacp-35f, 0.0f, 0.0f, 0.0f,
     0x1.03f8e4p-38f, 0.0f, 0.0f, 0x1.4ef29cp-45f, 0.0f, 0x1.74ae88p-122f, 0.0f,
     0x1.55c812p-40f, 0.0f, 0.0f, 0.0f, 0x1.df2004p-112f, 0.0f, 0.0f, 0.0f,
     0x1.f7811cp-98f, 0x1.ea3332p-102f, 0.0f, 0.0f, 0x1.bbb0dep-107f, 0x1.9f267ap-6f,
     0x1.13ce02p-24f, 0.0f, 0x1.8e54dp-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4416bp-10f,
     0x1.1490e8p-18f, 0x1.0571dp-111f, 0.0f, 0.0f, 0.0f, 0x1.8235c4p-5f, 0.0f,
     0x1.fd1e2cp-108f, 0.0f, 0x1.6a48c4p-83f, 0x1.3def18p-50f, 0x1.26c814p-62f, 0.0f,
     0.0f, 0x1.2ded16p-65f, 0x1.cc90aap-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2c1726p-109f, 0.0f, 0.0f, 0x1.accd9ep-41f, 0.0f, 0.0f, 0x1.5cce04p-30f,
     0x1.5b0524p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.07bec4p-123f, 0x1.79dca6p-43f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.477568p-46f, 0x1.fb23dcp-117f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.6924b6p-113f, 0.0f, 0.0f, 0x1.8049d6p-122f, 0x1.8a895ap-110f,
     0x1.ccb598p-40f, 0x1.578306p-51f, 0.0f, 0x1.c536f4p-114f, 0x1.e3964ap-73f, 0.0f,
     0.0f, 0x1.6d58bep-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a50a4ap-33f, 0.0f, 0.0f,
     0x1.d6ba18p-105f, 0x1.4fd454p-73f, 0x1.751784p-35f, 0.0f, 0x1.01326ep-7f,
     0x1.a03664p-44f, 0.0f, 0x1.2157fep-72f, 0.0f, 0x1.b0e3cap-53f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9a0c84p-113f, 0.0f, 0x1.976ea4p-39f, 0x1.8cf13ep-24f,
     0x1.56fe14p-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b4f0bap-27f, 0x1.9f4bbcp-76f,
     0x1.902ae8p-58f, 0x1.31d83ep-112f, 0x1.145f34p-108f, 0x1.06dff2p-11f,
     0x1.5e2e84p-117f, 0x1p0f, 0.0f, 0.0f, 0x1.261ecap-19f, 0.0f, 0x1.2d4df8p-99f,
     0.0f, 0.0f, 0x1.2363e8p-43f, 0.0f, 0x1.2d7b54p-33f, 0x1.7f099ep-99f, 0.0f,
     0x1.356956p-66f, 0x1.7f9de8p-77f, 0.0f, 0x1.b463ccp-90f, 0.0f, 0x1.f4c8p-43f,
     0x1.dc1246p-3f, 0.0f, 0x1.45153p-59f, 0x1.f8cd3ap-125f, 0x1.6e9fc4p-30f,
     0x1.30a41p-101f, 0.0f, 0.0f, 0x1.5049fp-82f, 0x1.7a0e56p-76f, 0.0f,
     0x1.ec9078p-87f, 0.0f, 0.0f, 0.0f
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
            tmp1 = Sleef_sinhf4_u35kvx(tmp0);
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
    printf("Sleef_sinhf4_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_sinhf4_u35kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
