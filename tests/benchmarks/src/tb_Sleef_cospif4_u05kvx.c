/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_cospif4_u05kvx.c --function Sleef_cospif4_u05kvx \
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
     0.0f, 0.0f, 0x1.b0952cp-53f, 0x1.a33238p-69f, 0x1.e15752p-81f, 0x1.43959ep-86f,
     0x1.5d95a4p-124f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.c067p-4f, 0x1.a9d0f4p-97f,
     0x1.b23a88p-80f, 0x1.021336p-91f, 0.0f, 0x1.0a4618p-47f, 0x1.69bfa4p-99f, 0.0f,
     0.0f, 0x1.60f6aep-50f, 0x1.6ade5cp-77f, 0x1.bdcaa2p-6f, 0x1.648bdp-41f, 0.0f,
     0x1.9a273p-118f, 0x1.62bb1cp-62f, 0x1.232936p-92f, 0x1.269f0ap-111f, 0.0f,
     0x1.8dc32ep-28f, 0x1.4695a4p-27f, 0x1.327b5ap-80f, 0.0f, 0.0f, 0x1.84aaecp-15f,
     0x1.8058e8p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3180d8p-88f, 0x1.4b4d1ep-53f, 0.0f,
     0.0f, 0x1.049aacp-93f, 0.0f, 0x1.9e56b8p-46f, 0.0f, 0.0f, 0x1.74144cp-9f,
     0x1.221e66p-10f, 0.0f, 0.0f, 0x1.56b258p-60f, 0x1.58dd32p-119f, 0x1.59cfc8p-86f,
     0.0f, 0.0f, 0x1.432adp-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.99b9eap-19f, 0x1.87b526p-111f, 0.0f, 0x1.147826p-69f, 0x1.0397e2p-85f, 0.0f,
     0x1.6c9e38p-36f, 0.0f, 0x1.e60f54p-59f, 0x1.0bf7acp-102f, 0x1.a520e8p-124f, 0.0f,
     0x1.348d84p-9f, 0x1.b5b222p-126f, 0.0f, 0.0f, 0x1.c9777ap-40f, 0x1.73bcaap-74f,
     0x1.ab9518p-83f, 0x1.1edbaep-80f, 0x1.27ab2p-99f, 0x1.d1d9e2p-88f,
     0x1.f320aap-98f, 0x1.43a498p-36f, 0x1.e7a7a2p-45f, 0x1.2fe716p-72f,
     0x1.0b4d0ap-123f, 0x1.a85182p-22f, 0x1.625b48p-46f, 0.0f, 0x1.1c6ccep-80f,
     0x1.a2757ap-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.cd372cp-68f, 0x1.d116dap-39f, 0x1.292932p-69f, 0x1.ef43fap-55f, 0.0f,
     0x1.3f8842p-1f, 0.0f, 0x1.fa8968p-52f, 0x1.8c8396p-78f, 0x1.6fe25p-36f,
     0x1.1666a6p-105f, 0x1.45cf7ap-30f, 0x1.bd8212p-96f, 0.0f, 0x1.6b2178p-113f, 0.0f,
     0.0f, 0x1.6554a6p-63f, 0x1.2433a2p-76f, 0x1.378f1ap-71f, 0.0f, 0x1.8d468cp-54f,
     0.0f, 0.0f, 0x1.3260eap-50f, 0.0f, 0x1.88e54p-114f, 0x1.dd73dp-113f, 0.0f,
     0x1.d60f1p-49f, 0.0f, 0x1.acddb4p-7f, 0.0f, 0.0f, 0x1.cd02fcp-52f, 0.0f, 0.0f,
     0x1.dc5622p-78f, 0x1.890a38p-32f, 0x1.61c6b2p-67f, 0x1.d061b6p-80f, 0.0f, 0.0f,
     0x1.aae632p-77f, 0.0f, 0.0f, 0x1.458694p-103f, 0x1.b399dep-122f, 0x1.3b5db6p-78f,
     0x1.4ffe58p-17f, 0x1.096c9ep-116f, 0x1.84a216p-105f, 0x1.043b1cp-31f, 0.0f,
     0x1.670d54p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.841d34p-43f, 0x1.f4c038p-47f,
     0x1.158782p-12f, 0x1.6a5d42p-104f, 0x1.99beb6p-8f, 0x1.a92d64p-106f,
     0x1.518868p-76f, 0.0f, 0x1.ad0b1cp-105f, 0.0f, 0.0f, 0x1.0b6118p-27f, 0.0f, 0.0f,
     0x1.b7bcbcp-90f, 0.0f, 0x1.67741ep-21f, 0.0f, 0x1.9b4a3p-54f, 0.0f,
     0x1.d1beaep-105f, 0x1.c7178ep-63f, 0.0f, 0x1.995834p-42f, 0.0f, 0x1.f2a4dcp-2f,
     0.0f, 0.0f, 0x1.28185ap-55f, 0x1.f5e174p-56f, 0x1.4cba2cp-32f, 0.0f,
     0x1.ea8d3ap-13f, 0x1.63fd7cp-124f, 0x1.99ffecp-73f, 0x1.aa4738p-35f, 0.0f, 0.0f,
     0x1.e7a1f4p-106f, 0x1.4b0648p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ab526ap-4f, 0.0f,
     0x1.bf45bp-113f, 0.0f, 0.0f, 0x1.04d9d6p-27f, 0.0f, 0x1.5573a2p-96f,
     0x1.21947ap-56f, 0x1.daf056p-76f, 0.0f, 0.0f, 0.0f, 0x1.d33ap-22f, 0.0f, 0.0f,
     0x1.33ab08p-106f, 0.0f, 0x1.614efep-121f, 0x1.7f007cp-82f, 0x1.715908p-33f, 0.0f,
     0x1.c31b9ap-114f, 0.0f, 0.0f, 0x1.8c161ep-5f, 0x1.395a44p-78f, 0.0f, 0.0f,
     0x1.5f43e2p-40f, 0x1.36c816p-68f, 0x1.ec93cap-89f, 0.0f, 0.0f, 0x1.18c618p-32f,
     0x1.b011bep-118f, 0x1.4aa01cp-104f, 0.0f, 0x1.1e285cp-61f, 0x1.12e4bap-17f, 0.0f,
     0x1.1a0f84p-64f, 0.0f, 0.0f, 0.0f, 0x1.cf58acp-72f, 0.0f, 0x1.7e8926p-59f, 0.0f,
     0.0f, 0.0f, 0x1.71053cp-55f, 0.0f, 0.0f, 0x1.b03a2ap-124f, 0x1.5203eep-112f,
     0x1.8df5c6p-16f, 0x1.637678p-108f, 0.0f, 0.0f, 0.0f, 0x1.f1f57p-74f, 0.0f,
     0x1.853576p-52f, 0x1.d93308p-25f, 0x1.1e2ecp-2f, 0x1.77501ep-120f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.8126bcp-19f, 0.0f, 0x1.384e92p-58f, 0.0f, 0x1.fcb02ap-63f,
     0.0f, 0x1.877ce8p-58f, 0x1.cd4532p-113f, 0.0f, 0.0f, 0x1.2ae544p-33f,
     0x1.57ecf4p-20f, 0x1.eca9c2p-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a7fc2ep-46f,
     0x1.d9cf9cp-111f, 0.0f, 0x1.7cf304p-41f, 0.0f, 0.0f, 0x1.bb2cbep-101f, 0.0f,
     0x1.4ee4d8p-122f, 0.0f, 0x1.5736f4p-91f, 0x1.d5143p-112f, 0x1.92b144p-36f,
     0x1.03e47ap-34f, 0x1.ea4fcp-24f, 0x1.2ccbe8p-108f, 0x1.2efd0cp-23f, 0.0f, 0.0f,
     0x1.adda76p-25f, 0.0f, 0x1.dd43b8p-115f, 0x1.b3ad3cp-85f, 0x1.4a94cap-25f,
     0x1.246b98p-99f, 0.0f, 0x1.c3b6c8p-67f, 0.0f, 0.0f, 0.0f, 0x1.fca202p-47f, 0.0f,
     0.0f, 0.0f, 0x1.b672a8p-98f, 0x1.bf59fep-21f, 0x1.006b7p-116f, 0.0f, 0.0f, 0.0f,
     0x1.1f337cp-27f, 0.0f, 0.0f, 0x1.a83768p-34f, 0x1.f155ecp-43f, 0.0f, 0.0f,
     0x1.88370cp-82f, 0.0f, 0x1.223eb6p-63f, 0x1.c2e428p-76f, 0.0f, 0x1.50999cp-113f,
     0x1.07d634p-52f, 0x1.8d1804p-71f, 0x1.8815e4p-114f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.298fa4p-113f, 0x1.41053p-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e4f6fp-89f,
     0x1.91515ep-69f, 0x1.b5310ep-11f, 0.0f, 0.0f, 0x1.07a23ep-114f, 0x1.740aaep-37f,
     0x1.2c4ea8p-2f, 0x1.98c79ep-36f, 0.0f, 0x1.24f6e6p-117f, 0.0f, 0.0f,
     0x1.8f4206p-59f, 0x1.2a4c02p-123f, 0x1.988cfap-99f, 0x1.8e8f56p-68f,
     0x1.2d657ep-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8b2dcp-101f, 0x1.9393dap-7f,
     0x1.af55fep-84f, 0x1.52b8bep-73f, 0.0f, 0x1.d394ccp-11f, 0.0f, 0x1.59502ap-16f,
     0x1.f24812p-73f, 0.0f, 0x1.660e6ep-3f, 0x1.eed91p-19f, 0.0f, 0.0f,
     0x1.9209acp-57f, 0.0f, 0x1.06890cp-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.17e1bp-60f,
     0.0f, 0.0f, 0x1.c86ce6p-58f, 0x1.473b5ep-58f, 0x1.f31578p-109f, 0.0f,
     0x1.e048b4p-63f, 0.0f, 0.0f, 0x1.57a1eap-69f, 0x1.f4de3ap-5f, 0x1.21b224p-111f,
     0x1.0b9468p-6f, 0x1.ceba3ep-32f, 0.0f, 0x1.9842dap-41f, 0x1.8e187p-51f,
     0x1.131b98p-44f, 0x1.6a953cp-12f, 0x1.32d28ep-91f, 0.0f, 0x1.91f79ap-72f,
     0x1.f7180cp-42f, 0x1.eb0722p-89f, 0x1.ed6abap-89f, 0.0f, 0x1.4e3be4p-31f,
     0x1.7580bep-4f, 0x1.8a45e6p-22f, 0x1.f816aep-65f, 0.0f, 0x1.50d43p-24f,
     0x1.35af66p-84f, 0x1.2bb146p-122f, 0x1.4bf306p-63f, 0x1.3380b6p-104f, 0.0f, 0.0f,
     0x1.f6a3e8p-9f, 0x1.cbee04p-114f, 0x1.989ee8p-52f, 0x1p0f, 0x1.f7900ap-33f, 0.0f,
     0x1.508c22p-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c9ddb2p-121f,
     0x1.fd383ep-42f, 0.0f, 0.0f, 0.0f, 0x1.14d006p-112f, 0x1.79b688p-54f,
     0x1.c90dcep-110f, 0x1.2f443ap-112f, 0x1.846b9ep-25f, 0.0f, 0x1.dd3f9ep-109f,
     0.0f, 0.0f, 0x1.ba06d4p-98f, 0.0f, 0x1.483bbp-101f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.484ce4p-112f, 0x1.92c27p-39f, 0.0f, 0.0f, 0x1.180d4p-11f, 0x1.34dfbp-36f,
     0.0f, 0.0f, 0.0f, 0x1.f7cb1ap-7f, 0x1.ef0ae8p-98f, 0.0f, 0.0f, 0x1.67775p-71f,
     0.0f, 0x1.a0f05ep-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e66f8p-116f, 0.0f,
     0.0f, 0x1.fc05ep-70f, 0.0f, 0.0f, 0.0f, 0x1.34f198p-53f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.6f5322p-67f, 0x1.0097e8p-26f, 0x1.f953fcp-47f, 0x1.73ee56p-90f,
     0.0f, 0.0f, 0.0f, 0x1.8d3788p-63f, 0x1p0f, 0x1.118448p-74f, 0x1.c5aff2p-86f,
     0.0f, 0x1.3dddfp-80f, 0.0f, 0x1.980b4cp-45f, 0x1.bea8ep-95f, 0x1.c0736p-6f,
     0x1.a3ae1ap-37f, 0.0f, 0x1.86c5a2p-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1b37cep-124f, 0.0f, 0.0f, 0.0f, 0x1.aea90ap-16f, 0x1.2c7afap-1f,
     0x1.2bc4p-25f, 0.0f, 0x1.80fb0ap-97f, 0x1.91bd9ep-104f, 0.0f, 0.0f,
     0x1.e3798ep-36f, 0x1.a47578p-24f, 0x1.cf20cep-47f, 0x1.c15692p-5f,
     0x1.0030cp-27f, 0.0f, 0.0f, 0x1.98575ap-5f, 0.0f, 0x1.3c2278p-40f,
     0x1.26e9f2p-122f, 0.0f, 0x1.75e242p-112f, 0.0f, 0.0f, 0x1.c0798p-91f, 0.0f,
     0x1.6aeaaap-83f, 0x1.eec1e4p-95f, 0.0f, 0x1.41ce2p-60f, 0.0f, 0.0f,
     0x1.c5da22p-58f, 0.0f, 0x1.feb68cp-104f, 0.0f, 0x1.cf42b6p-71f, 0.0f,
     0x1.b9ec34p-17f, 0.0f, 0x1.e01d92p-17f, 0.0f, 0x1.b5c1fep-84f, 0x1.0a1336p-102f,
     0x1.283dfp-119f, 0.0f, 0x1.bbe97ap-101f, 0.0f, 0x1.80586ap-7f, 0.0f,
     0x1.4082eep-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0984f2p-58f, 0x1.c8ba8ep-53f,
     0x1.58693ap-102f, 0x1.3fad88p-13f, 0x1.fcaf9cp-98f, 0.0f, 0x1.a8e55ap-108f, 0.0f,
     0x1.c98c18p-82f, 0x1.c345ecp-48f, 0.0f, 0.0f, 0.0f, 0x1.66e37ap-11f, 0.0f, 0.0f,
     0x1.2b8cb2p-106f, 0.0f, 0.0f, 0x1.ff07fap-35f, 0.0f, 0.0f, 0.0f, 0x1.5da238p-94f,
     0x1.949a1ep-23f, 0.0f, 0x1.39b136p-6f, 0x1.2e28dep-56f, 0x1.9c3404p-113f, 0.0f,
     0.0f, 0.0f, 0x1.c0ee58p-36f, 0x1.9a1042p-50f, 0.0f, 0.0f, 0x1.1fb48p-45f,
     0x1.a41616p-84f, 0.0f, 0x1.6c7f8p-73f, 0x1.81c64p-90f, 0x1.384ecap-39f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d47f24p-4f, 0.0f, 0x1.45794ep-77f,
     0x1.a693c2p-74f, 0.0f, 0x1.127fa6p-19f, 0x1.8dd3d6p-39f, 0x1.608a82p-36f,
     0x1.4c544ap-30f, 0x1.137eacp-55f, 0x1.aeed7p-15f, 0x1.f6ec3ep-105f,
     0x1.437e2p-12f, 0x1.ec9746p-4f, 0x1.0faa1ap-84f, 0x1.01e0e4p-57f, 0x1.9115dp-22f,
     0.0f, 0.0f, 0.0f, 0x1.cad736p-86f, 0.0f, 0x1.6d7236p-70f, 0x1.c25f7ap-103f,
     0x1.eaacb6p-62f, 0.0f, 0.0f, 0x1.762c7ep-11f, 0.0f, 0.0f, 0x1.9b515p-116f, 0.0f,
     0x1.37d65cp-7f, 0.0f, 0.0f, 0.0f, 0x1.f81884p-57f, 0x1.ba76p-92f,
     0x1.a005b8p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e49b12p-45f, 0.0f, 0.0f,
     0x1.598372p-90f, 0.0f, 0x1.e915fcp-53f, 0x1.8695d4p-123f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f27b96p-59f, 0.0f, 0.0f, 0.0f, 0x1.62290cp-87f, 0.0f,
     0.0f, 0.0f, 0x1.088fbcp-25f, 0x1.b6f5aap-82f, 0.0f, 0x1.04d0cep-36f, 0.0f, 0.0f,
     0.0f, 0x1.95d816p-96f, 0x1.3283fcp-90f, 0x1.28874ap-114f, 0.0f, 0x1.e72b42p-45f,
     0x1.2c728ep-93f, 0.0f, 0.0f, 0x1.66b31ep-24f, 0x1.ec0a84p-4f, 0.0f, 0.0f,
     0x1.20b11cp-57f, 0x1.8b0e0cp-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0b34b8p-30f,
     0.0f, 0x1.70abbap-46f, 0x1.a2ecd2p-99f, 0x1.3f5a4ap-123f, 0.0f, 0x1.5166cep-16f,
     0x1.513304p-22f, 0.0f, 0x1.2eeb0ep-32f, 0.0f, 0x1.c296e6p-104f, 0x1.ea6084p-27f,
     0.0f, 0.0f, 0.0f, 0x1.ad0b0cp-106f, 0.0f, 0x1.a079cap-1f, 0x1.5a07c2p-23f,
     0x1.ab18ccp-76f, 0.0f, 0x1.e2a2fep-47f, 0x1.5b3574p-118f, 0x1.c6f746p-42f, 0.0f,
     0x1.81f32cp-6f, 0.0f, 0x1.47cb12p-16f, 0x1.54d6e2p-23f, 0.0f, 0.0f,
     0x1.7f2d3ap-120f, 0x1.29cd7ep-6f, 0x1.b2b4a6p-42f, 0.0f, 0x1.2733bp-63f, 0.0f,
     0x1.74fcd4p-67f, 0x1.354686p-85f, 0x1.d757c8p-52f, 0x1.410f62p-20f,
     0x1.102aaep-112f, 0x1.c43f6cp-24f, 0x1.7b3b5p-104f, 0.0f, 0x1.fdb3aap-51f, 0.0f,
     0x1.9b17fap-97f, 0x1.f400c4p-50f, 0.0f, 0.0f, 0x1.0d06d8p-109f, 0x1.9e4db4p-3f,
     0x1.dc0d8p-58f, 0x1.a22dcep-55f, 0x1.a7e39cp-3f, 0.0f, 0.0f, 0.0f,
     0x1.84bed4p-19f, 0x1.c2305cp-78f, 0.0f, 0x1.b7b2a8p-16f, 0.0f, 0.0f, 0.0f,
     0x1.f9edeap-21f, 0.0f, 0x1.db883ap-94f, 0x1.0dd9dep-17f, 0x1.b78cp-107f, 0.0f,
     0x1.6324f8p-67f, 0x1.f5173cp-88f, 0x1.86eadp-11f, 0.0f, 0.0f, 0x1.962e52p-53f,
     0.0f, 0x1.64fe4cp-79f, 0.0f, 0.0f, 0x1.954d52p-3f, 0x1.911be8p-119f,
     0x1.b06576p-113f, 0x1.6a56a2p-35f, 0x1.66851ep-47f, 0.0f, 0.0f, 0x1.7dbb3ep-77f,
     0.0f, 0.0f, 0x1.7cbec8p-55f, 0x1.6ffdfap-78f, 0x1.888de8p-109f, 0.0f, 0.0f,
     0x1.ed8124p-88f, 0x1.bdb8f6p-9f, 0x1.c6db58p-124f, 0x1.5df1bp-100f, 0.0f, 0.0f,
     0x1.b0d318p-39f, 0x1.aaeb84p-62f, 0x1.93c206p-79f, 0x1.f59fd8p-75f,
     0x1.20a8c8p-59f, 0.0f, 0x1.afdafp-121f, 0x1.bcabe4p-94f, 0x1.8e9bfep-75f, 0.0f,
     0.0f, 0x1.cff31ep-3f, 0x1.b5de72p-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.24e60ep-12f, 0x1.b6788ep-98f, 0x1.bdb568p-37f, 0x1.2ae304p-115f,
     0x1.e830d2p-2f, 0.0f, 0.0f, 0.0f, 0x1.1321fep-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.24c82ep-38f, 0.0f, 0x1.320b66p-23f, 0x1.073cdep-103f, 0x1.540fdap-73f,
     0x1.381c24p-62f, 0x1.e5c6ccp-20f, 0x1.c40a54p-54f, 0x1.123db8p-25f, 0.0f, 0.0f,
     0.0f, 0x1.25c004p-74f, 0.0f, 0.0f, 0x1.f7263ap-126f, 0x1.ba9b4ap-117f, 0.0f,
     0x1.3fe218p-95f, 0x1.78aa64p-122f, 0x1.74f84p-42f, 0.0f, 0x1.2af6cap-46f,
     0x1.1930ap-45f, 0x1.fb0838p-10f, 0.0f, 0.0f, 0x1.ee1134p-125f, 0x1.cd322p-90f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9a48dap-64f, 0x1.6c20ecp-125f, 0.0f, 0.0f,
     0.0f, 0x1.c48d06p-77f, 0x1.ed5c22p-16f, 0x1.02cb9ep-126f, 0x1.f7437ap-16f,
     0x1.18d8d6p-88f, 0.0f, 0.0f, 0x1.069aaep-47f, 0.0f, 0x1.c6828p-36f, 0.0f,
     0x1.39c2b2p-115f, 0.0f, 0x1.af2668p-43f, 0x1.0c2976p-29f, 0x1.bbd8c8p-117f,
     0x1.bf9dfcp-94f, 0x1.6c865p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fbd93cp-21f,
     0.0f, 0x1.1624ep-44f, 0.0f, 0.0f, 0x1.04046ep-2f, 0.0f, 0x1.5c36cep-71f,
     0x1.b960c2p-9f, 0x1.883a9ep-5f, 0.0f, 0x1.8fb07ap-115f, 0x1.20d9aep-38f,
     0x1.088694p-59f, 0.0f, 0.0f, 0.0f, 0x1.1a75ap-25f, 0x1.d748aap-96f,
     0x1.0ceab2p-40f, 0x1.00179ap-108f, 0.0f, 0x1.0f225ap-96f, 0x1.a8f054p-43f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.785ff2p-105f, 0x1.485f18p-76f, 0.0f,
     0x1.dbc452p-16f, 0.0f, 0x1.611ca8p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4d1738p-109f, 0x1.b15ddep-21f, 0x1.2c593ap-24f, 0x1.64a8e4p-13f,
     0x1.d0bbdp-71f, 0x1.33991p-117f, 0x1.c3d278p-78f, 0x1.4e9e3ep-7f,
     0x1.1018a8p-26f, 0x1.a1dbb8p-72f, 0x1.ccbcfp-82f, 0.0f, 0x1.78d8eap-109f, 0.0f,
     0x1.eaf7fp-80f, 0.0f, 0x1.81a40ap-124f, 0x1.1511f2p-27f, 0x1.d637fcp-18f
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
            tmp1 = Sleef_cospif4_u05kvx(tmp0);
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
    printf("Sleef_cospif4_u05kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_cospif4_u05kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
