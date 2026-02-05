/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_log2f8_u10kvx.c --function Sleef_log2f8_u10kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 8 --function-input-vector-size 8 --bench \
 *     --no-embedded-bin --target kv3
 *
 */
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float8_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float8_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1008];
static const float external_bench_wrapper_input_table_arg0[1008]  = {
     0x1.b01838p-98f, 0x1.94009cp-18f, 0.0f, 0x1.232dcp-50f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.61e32cp-47f, 0x1.41370ep-42f, 0x1.8eb008p-57f, 0x1.ac9a58p-69f, 0.0f,
     0x1.28fed6p-85f, 0x1.007796p-54f, 0x1.0aeb4p-50f, 0x1.abd05ep-31f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a955b6p-93f, 0x1.01489ap-8f,
     0x1.7e32aap-106f, 0.0f, 0x1.fd8752p-30f, 0.0f, 0x1.47909p-119f, 0x1.1ebed6p-57f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.774a3ap-5f, 0.0f, 0.0f, 0.0f, 0x1.4cff1p-25f, 0.0f,
     0x1.898484p-120f, 0x1.43b706p-95f, 0x1.149efep-114f, 0.0f, 0.0f, 0.0f,
     0x1.756b9ap-92f, 0.0f, 0x1.69c478p-37f, 0x1.e359ap-71f, 0x1.29c362p-8f, 0.0f,
     0x1.21a37cp-104f, 0.0f, 0x1.e22206p-106f, 0x1.273682p-88f, 0.0f, 0.0f,
     0x1.e347aap-97f, 0.0f, 0.0f, 0.0f, 0x1.d9f062p-103f, 0x1.78c7cp-65f,
     0x1.457cccp-11f, 0.0f, 0.0f, 0x1.5a867ap-19f, 0x1.28e6e6p-14f, 0x1.5b5ed8p-30f,
     0.0f, 0x1.533b36p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d19a1ap-107f,
     0x1.7d4a86p-117f, 0x1.baac6ep-63f, 0x1.9b577p-19f, 0x1.bb546ap-50f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.69e168p-2f, 0.0f, 0.0f, 0x1.cfa5f4p-81f, 0.0f, 0.0f,
     0x1.5710ap-24f, 0.0f, 0x1.b1a82p-51f, 0.0f, 0x1.2a3de2p-107f, 0.0f,
     0x1.bbeb8cp-42f, 0x1.f9ed26p-88f, 0.0f, 0.0f, 0x1.007fbp-9f, 0x1.b6c9c6p-26f,
     0x1.f7084p-52f, 0x1.479464p-40f, 0.0f, 0x1.191cb8p-20f, 0x1.17c68ap-113f,
     0x1.677334p-1f, 0x1.dcb498p-2f, 0.0f, 0x1.e33bb4p-52f, 0.0f, 0x1p0f, 0.0f,
     0x1.d3a52ap-50f, 0x1.809b3ep-58f, 0x1.293578p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5452cap-115f, 0.0f, 0x1.5b2446p-125f, 0.0f, 0x1.bd6fd8p-82f, 0.0f,
     0x1.1fc074p-12f, 0x1.7957dap-16f, 0x1.9fbf6ap-63f, 0x1.065b42p-88f,
     0x1.56e06cp-98f, 0x1.bbadcap-118f, 0.0f, 0.0f, 0x1.bd5a6ap-84f, 0.0f,
     0x1.4fa1bap-113f, 0.0f, 0x1.2fad8p-99f, 0x1.c6d2ep-14f, 0.0f, 0.0f,
     0x1.a68bbp-37f, 0.0f, 0x1.8b5d9cp-78f, 0x1.bc216ap-110f, 0x1.a6217ep-31f,
     0x1.eb7f54p-112f, 0.0f, 0.0f, 0x1.01bebcp-4f, 0.0f, 0x1.8fc87ap-73f,
     0x1.97082p-17f, 0x1.0c32cp-95f, 0.0f, 0x1.a854fp-67f, 0x1.a70ee6p-47f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.73d566p-55f, 0x1.8d07e6p-63f,
     0x1.256518p-59f, 0.0f, 0.0f, 0x1.4c7b2p-42f, 0x1.fd99c8p-57f, 0.0f, 0.0f,
     0x1.fa37a4p-90f, 0x1.0fc2a6p-98f, 0x1.3180a8p-61f, 0x1.d518e4p-86f, 0.0f,
     0x1.49aeb6p-103f, 0.0f, 0.0f, 0x1.23e428p-118f, 0.0f, 0.0f, 0x1.26c18ep-126f,
     0.0f, 0x1.bde926p-72f, 0x1.061dep-51f, 0.0f, 0x1.d67c16p-8f, 0.0f, 0.0f, 0.0f,
     0x1.775c66p-60f, 0.0f, 0.0f, 0.0f, 0x1.8bf456p-71f, 0x1.4cecfp-114f,
     0x1.09e24ap-104f, 0.0f, 0x1.de61aep-84f, 0x1.3ada08p-33f, 0.0f, 0.0f,
     0x1.627198p-23f, 0x1.8ba3aep-22f, 0x1.fdc568p-105f, 0.0f, 0.0f, 0x1.a4ccdap-1f,
     0x1.2a0fd4p-95f, 0x1.3e1aa2p-59f, 0x1.a7f038p-1f, 0.0f, 0x1.3e8a76p-104f, 0.0f,
     0.0f, 0x1.ee7f48p-125f, 0x1.12c1bcp-79f, 0x1.cd5022p-8f, 0x1.a4f0e2p-74f,
     0x1.004568p-48f, 0.0f, 0x1.045d48p-36f, 0.0f, 0x1.a87576p-34f, 0x1.d25234p-47f,
     0x1.feb1cap-41f, 0.0f, 0x1.9910c4p-83f, 0x1.b8b59cp-3f, 0.0f, 0x1.f3200cp-55f,
     0x1.a7ad1ap-21f, 0x1.d39fbcp-34f, 0.0f, 0.0f, 0x1.145bf4p-13f, 0x1.983b96p-95f,
     0.0f, 0x1.da190ap-115f, 0.0f, 0.0f, 0x1.b431dcp-57f, 0.0f, 0.0f, 0.0f,
     0x1.4743eep-36f, 0.0f, 0x1.e2b35ep-126f, 0x1.f6fb92p-126f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.455252p-77f, 0x1.86c378p-120f, 0x1.287df8p-6f, 0x1.30afacp-42f,
     0x1.5c5e54p-109f, 0.0f, 0x1.c06a6ep-61f, 0x1.1c8bb4p-36f, 0x1.32077ap-119f,
     0x1.2aa2dp-8f, 0x1.60ee0cp-23f, 0x1.d95fbap-24f, 0x1.007ebcp-68f, 0.0f, 0.0f,
     0.0f, 0x1.55675p-46f, 0.0f, 0x1.565bb8p-38f, 0x1.ad3392p-95f, 0x1.cf2e0ep-43f,
     0.0f, 0.0f, 0.0f, 0x1.dcca8p-34f, 0.0f, 0x1.69396ep-34f, 0x1.f6538ap-97f,
     0x1.4b0de6p-1f, 0x1.71008cp-109f, 0x1.7a72f2p-91f, 0.0f, 0.0f, 0x1.e05a32p-88f,
     0x1.c7d2e6p-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a44b64p-100f, 0x1.da6c3p-61f, 0.0f,
     0x1.677d14p-48f, 0.0f, 0x1.8b9b14p-45f, 0x1.0bfd16p-110f, 0x1.b06508p-90f, 0.0f,
     0x1.8a4e64p-39f, 0.0f, 0x1.4c2ae2p-4f, 0.0f, 0x1.dfec38p-63f, 0.0f, 0.0f, 0.0f,
     0x1.43febep-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.96629ap-61f, 0.0f,
     0x1.2a663ep-36f, 0.0f, 0x1.af47ecp-88f, 0.0f, 0x1.2cec1p-50f, 0x1.283b26p-92f,
     0x1.0d3e2p-72f, 0x1.78249ep-24f, 0.0f, 0.0f, 0x1.0687b6p-25f, 0x1.e75708p-92f,
     0.0f, 0.0f, 0x1.7b398ep-104f, 0.0f, 0x1.bf89a2p-117f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e4b2c6p-40f, 0x1.842f6p-10f, 0.0f, 0x1.cc1b88p-101f, 0x1.a39356p-91f, 0.0f,
     0x1.831dfp-50f, 0.0f, 0.0f, 0x1.2cbf34p-12f, 0.0f, 0x1.3b2862p-11f,
     0x1.2091c8p-8f, 0.0f, 0x1.19cbf6p-36f, 0.0f, 0x1.921796p-123f, 0x1.ea601ep-79f,
     0.0f, 0x1.c9721cp-118f, 0.0f, 0.0f, 0x1.6663ecp-10f, 0.0f, 0x1.dc38b2p-119f,
     0x1.23be16p-7f, 0x1.cdb8f6p-69f, 0x1.2e0126p-6f, 0x1.18ca66p-29f,
     0x1.77e62cp-40f, 0x1.e3f834p-59f, 0x1.bf27eep-76f, 0.0f, 0.0f, 0x1.910d7ap-71f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.aa5c32p-86f, 0x1.8137f2p-105f, 0.0f, 0x1.836c84p-36f,
     0.0f, 0x1.321268p-29f, 0x1.887848p-65f, 0x1.680a34p-98f, 0.0f, 0x1.71ac52p-23f,
     0.0f, 0x1.bc5594p-117f, 0.0f, 0x1.cfe8e8p-61f, 0.0f, 0x1.ea8e7ep-75f,
     0x1.a6e3a6p-45f, 0x1.2fcaaep-89f, 0x1.8b8f3p-103f, 0.0f, 0x1.b9fc02p-3f, 0.0f,
     0.0f, 0x1.358b78p-3f, 0x1.528326p-14f, 0x1.f00b42p-50f, 0x1.d5ec58p-69f, 0.0f,
     0x1.55bbbp-42f, 0x1.f0be6p-23f, 0.0f, 0x1.bd850ep-22f, 0x1.0bf96ep-67f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.4818fcp-99f, 0x1.832832p-10f, 0x1p0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.dee28cp-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.02a4fcp-15f,
     0x1.130e0ep-26f, 0x1.0c26a8p-60f, 0.0f, 0x1.00931cp-19f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d0b0aep-108f, 0x1.ddf92p-57f, 0.0f, 0x1.2330b6p-94f, 0x1.402654p-31f,
     0x1.ffc6d4p-111f, 0x1.1504ccp-99f, 0x1.3951e8p-120f, 0.0f, 0x1.14d332p-105f,
     0.0f, 0x1.fcd87ap-6f, 0x1.6e74aap-119f, 0.0f, 0x1.6719aap-45f, 0x1.33591p-16f,
     0x1.47dbeap-80f, 0.0f, 0.0f, 0x1.33685p-123f, 0.0f, 0x1.90b3e6p-20f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.612436p-24f, 0x1.5e473cp-100f, 0x1.e294c4p-73f,
     0x1.10948ap-39f, 0.0f, 0x1.ac1734p-22f, 0.0f, 0x1.441704p-8f, 0.0f,
     0x1.3b9fe4p-107f, 0x1.8fff1ep-18f, 0.0f, 0x1.e1f50ep-42f, 0x1.85fc34p-24f,
     0x1.96c7a2p-79f, 0.0f, 0x1.b30ba8p-101f, 0.0f, 0x1.3c1a3ep-17f, 0.0f, 0.0f,
     0x1.41fcf4p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1cd31cp-21f, 0x1.fdf80ep-76f,
     0x1.b2fd1ep-121f, 0.0f, 0x1.cfdbe8p-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e9ec8ap-89f,
     0x1.91f8f4p-51f, 0x1.c9a798p-105f, 0.0f, 0.0f, 0x1.850d6p-68f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.86d616p-120f, 0x1.f03a84p-60f, 0.0f, 0x1.035df4p-54f, 0x1.ac275cp-23f,
     0x1.3e3f6p-99f, 0.0f, 0.0f, 0x1.6914fep-51f, 0.0f, 0x1.37bb5cp-18f, 0.0f, 0.0f,
     0x1.570966p-68f, 0x1.39a502p-118f, 0x1.684fc8p-66f, 0.0f, 0x1.68e28p-75f,
     0x1.7005c2p-115f, 0x1.ef80fap-22f, 0.0f, 0.0f, 0x1.e47a1ep-12f, 0.0f,
     0x1.c956cap-110f, 0x1.53f376p-80f, 0x1.d1af5ap-72f, 0.0f, 0.0f, 0x1.b6db68p-90f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c8efc8p-41f, 0.0f, 0.0f, 0.0f, 0x1.db6c9ap-42f,
     0x1.dbe9aap-101f, 0x1.d7decap-45f, 0.0f, 0x1.7f5584p-2f, 0.0f, 0x1.5646ep-119f,
     0x1.09d974p-55f, 0.0f, 0.0f, 0x1.710a6ep-111f, 0x1.562d54p-6f, 0x1.dfebecp-107f,
     0x1.d46edp-66f, 0.0f, 0.0f, 0.0f, 0x1.fdec1ep-97f, 0x1.70b28ap-91f, 0.0f,
     0x1.17e54ep-35f, 0x1.f18b4cp-7f, 0.0f, 0x1.253d8cp-92f, 0x1.5a7d9p-58f, 0x1p0f,
     0x1.3b5c1ap-107f, 0.0f, 0x1.659e4p-3f, 0.0f, 0x1.7aaed8p-45f, 0x1.22a8c2p-23f,
     0.0f, 0.0f, 0.0f, 0x1.aa4cfcp-80f, 0.0f, 0x1.d41abcp-72f, 0.0f, 0.0f,
     0x1.829952p-93f, 0x1.ac42p-62f, 0x1.ea7e7cp-43f, 0x1.8e75cp-12f, 0.0f,
     0x1.a150b4p-81f, 0.0f, 0x1.cb0e5ep-72f, 0x1p0f, 0.0f, 0x1.6e9518p-29f,
     0x1.18727p-100f, 0.0f, 0x1.14ffccp-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e5e728p-2f,
     0.0f, 0x1.79536p-30f, 0.0f, 0.0f, 0x1.ff6812p-123f, 0x1.ea7684p-53f, 0.0f,
     0x1.c31bc6p-7f, 0.0f, 0x1.b782a4p-72f, 0x1.5d031ap-23f, 0x1.292666p-93f,
     0x1.f42994p-100f, 0x1.85279p-48f, 0.0f, 0.0f, 0x1.35a82ap-18f, 0x1.273fdap-16f,
     0x1.a9fe8p-109f, 0x1.3278bep-23f, 0x1.69c776p-111f, 0x1.b5c56cp-71f,
     0x1.610354p-76f, 0x1.ddb0c8p-108f, 0.0f, 0x1.063264p-8f, 0.0f, 0.0f,
     0x1.8be554p-86f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f4fa8p-26f,
     0.0f, 0x1.979434p-105f, 0.0f, 0x1.659462p-33f, 0.0f, 0x1p0f, 0.0f,
     0x1.566d86p-86f, 0x1.d05156p-57f, 0x1.d8c1fp-122f, 0x1.df98c8p-4f, 0.0f, 0.0f,
     0.0f, 0x1.0b6bd2p-75f, 0x1.69543cp-95f, 0x1.fb2c9ep-102f, 0x1.976dap-89f,
     0x1.fe797cp-126f, 0.0f, 0x1.06c9f2p-22f, 0.0f, 0x1.8547a2p-45f, 0.0f, 0.0f,
     0x1.514d7ep-90f, 0x1.6e39d4p-110f, 0.0f, 0.0f, 0x1.0008a4p-91f, 0x1.dd917ep-73f,
     0.0f, 0.0f, 0.0f, 0x1.597a9p-96f, 0.0f, 0x1.5baaacp-15f, 0x1.b80a04p-61f,
     0x1.3b343cp-1f, 0.0f, 0x1.0887dp-86f, 0.0f, 0.0f, 0x1.98993p-71f,
     0x1.b534e4p-50f, 0.0f, 0.0f, 0x1.5e4d5cp-101f, 0.0f, 0x1.a3041ep-40f,
     0x1.3186a4p-40f, 0x1.ab5556p-15f, 0.0f, 0x1.48e986p-92f, 0x1.abd11ep-11f,
     0x1.9390bp-124f, 0.0f, 0x1.ad1242p-75f, 0x1.ce5ccep-9f, 0.0f, 0x1.dd544cp-47f,
     0.0f, 0x1.21d58cp-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cb4d94p-43f,
     0x1.118aecp-109f, 0x1.678994p-43f, 0x1.d0f258p-107f, 0x1.dd51dcp-20f, 0.0f,
     0x1.3f2ffcp-107f, 0x1.c59b16p-19f, 0x1.a67f5ap-75f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.236fecp-89f, 0.0f, 0x1.39b4acp-46f, 0x1.bf23bep-32f, 0.0f, 0x1.56c542p-119f,
     0x1.c1d134p-45f, 0x1.41d686p-24f, 0x1.c77598p-13f, 0.0f, 0x1.d98778p-17f, 0.0f,
     0x1.e8617ep-44f, 0x1.a2efe2p-3f, 0.0f, 0x1.d426f8p-29f, 0.0f, 0.0f,
     0x1.5e60d2p-38f, 0.0f, 0x1.e9e11p-40f, 0x1.00f684p-109f, 0x1.a0be9p-55f, 0.0f,
     0x1.f13fd8p-41f, 0.0f, 0x1.84dfe8p-106f, 0x1.0270ecp-33f, 0x1.5cbbb4p-20f,
     0x1.d7b466p-74f, 0.0f, 0.0f, 0x1.ab2f42p-99f, 0.0f, 0x1.07d966p-62f,
     0x1.69e266p-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.27493ep-104f,
     0x1.86999p-27f, 0.0f, 0x1.e9d9f4p-80f, 0x1.9771c4p-107f, 0x1.cfb2ccp-121f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.039e62p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4ba058p-80f, 0.0f, 0x1.8efc68p-8f, 0x1.0b07e6p-27f, 0x1.dc5fa4p-69f,
     0x1.15a934p-69f, 0.0f, 0x1.db77c4p-126f, 0x1.b20258p-117f, 0x1.cbd414p-109f,
     0x1.7c035ep-45f, 0.0f, 0.0f, 0x1.692af6p-45f, 0.0f, 0.0f, 0x1.efa6b6p-39f,
     0x1.78f9d8p-96f, 0.0f, 0x1.3ab23ap-85f, 0.0f, 0x1.f8ddd6p-99f, 0.0f, 0.0f,
     0x1.8d4212p-106f, 0x1.f554ccp-50f, 0x1.e00882p-43f, 0.0f, 0x1.74e9ecp-47f, 0.0f,
     0x1.f85c26p-26f, 0x1.f0bd7ap-46f, 0.0f, 0x1.53391p-107f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.77ed1ep-2f, 0x1.4fa50cp-23f, 0x1.37fcdep-47f, 0x1.537dbp-126f,
     0x1.9684ccp-67f, 0x1.4fa5e4p-35f, 0.0f, 0.0f, 0x1.f6a23cp-65f, 0.0f,
     0x1.9f965ep-74f, 0.0f, 0x1.2e440ap-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8fb9c4p-44f,
     0.0f, 0.0f, 0.0f, 0x1.869df2p-27f, 0.0f, 0x1.3dfdc8p-117f, 0.0f, 0x1.66a856p-10f,
     0x1.4f8cd4p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fe423cp-4f, 0x1.af7922p-125f,
     0x1.954eb4p-105f, 0x1.2446fep-71f, 0x1.d8fa5ep-120f, 0x1.a0314p-15f, 0.0f,
     0x1.2b3688p-104f, 0x1.167596p-28f, 0x1.3ab05cp-80f, 0.0f, 0.0f, 0x1.7cd702p-69f,
     0.0f, 0x1.14493p-26f, 0x1.cb21cap-24f, 0.0f, 0.0f, 0x1.3d7556p-106f,
     0x1.fbb72ap-21f, 0x1.15fb48p-114f, 0.0f, 0x1.740904p-105f, 0.0f, 0.0f, 0.0f,
     0x1.992c92p-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d755a2p-64f, 0.0f,
     0x1.a600eep-84f, 0x1.70b544p-67f, 0.0f, 0.0f, 0.0f, 0x1.c4f3e8p-7f,
     0x1.6d9e06p-49f, 0.0f, 0x1.267acep-54f, 0.0f, 0x1.f0749cp-18f, 0x1.7fc50cp-94f,
     0.0f, 0.0f, 0x1.fecbacp-120f, 0.0f, 0x1.30412cp-7f, 0.0f, 0.0f, 0x1.e3efe6p-82f,
     0x1.77eaecp-103f, 0x1.cbb078p-63f, 0.0f, 0x1.1f1f26p-7f, 0.0f, 0x1.611f4p-107f,
     0x1.84b38cp-7f, 0.0f, 0x1.7974a4p-60f, 0.0f, 0.0f, 0x1.7baadp-1f,
     0x1.b377f4p-119f, 0x1.198ca4p-90f, 0.0f, 0x1.67acc6p-28f, 0.0f, 0.0f,
     0x1.29c4c6p-26f, 0x1.b0c49cp-125f, 0x1.14affap-80f, 0x1.1778a8p-116f, 0.0f,
     0x1.8a5dacp-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1fd79p-101f, 0.0f,
     0x1.440adap-15f, 0.0f, 0x1.62daccp-84f, 0x1.541b76p-62f, 0x1.2af676p-76f,
     0x1.b55d9p-56f, 0x1.632ad2p-13f, 0.0f, 0x1.0cff2cp-58f, 0.0f, 0x1.c31abcp-95f,
     0x1.e6a852p-108f, 0x1.d6f8c6p-53f, 0.0f, 0x1.88a11ep-44f, 0.0f, 0x1.d33846p-3f,
     0x1.bc2966p-15f, 0x1.e03a32p-29f, 0x1.cc63bep-50f, 0.0f, 0x1.4635aep-97f,
     0x1.4adc46p-67f, 0.0f, 0x1.3edb44p-83f, 0.0f, 0.0f, 0.0f, 0x1.7635e6p-106f,
     0x1.ac776ap-112f, 0x1.973eeap-77f, 0.0f, 0.0f, 0.0f, 0x1.163f56p-89f,
     0x1.31049p-12f, 0.0f, 0.0f, 0.0f, 0x1.2754b8p-87f, 0.0f, 0x1.94d79p-104f, 0.0f,
     0.0f, 0.0f, 0x1.b80ba8p-42f, 0x1.6bf43p-24f, 0.0f, 0.0f, 0x1.4fa154p-27f, 0.0f,
     0.0f, 0x1.4e8c5ep-123f, 0x1.79293ap-86f, 0.0f, 0x1.5c33fp-26f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_float8_t global_bench_acc;
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
        ml_float8_t local_acc;
        int32_t i;
        ml_float8_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1008));){
            ml_float8_t tmp0;
            ml_float8_t tmp1;
            ml_float8_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_float8_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            tmp1 = Sleef_log2f8_u10kvx(tmp0);
            memcpy(((ml_float8_t*)(external_bench_wrapper_output_table+ i)), &(tmp1), 32);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(8);
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
    cpe_measure = id_tmp / 10080000.0;
    printf("Sleef_log2f8_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_log2f8_u10kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
