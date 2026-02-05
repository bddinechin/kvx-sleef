/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_exp2f4_u10avx2128.c --function Sleef_exp2f4_u10avx2128 \
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
     0.0f, 0x1.68271ap-57f, 0.0f, 0x1.6dd84p-79f, 0.0f, 0.0f, 0x1.65c876p-45f,
     0x1.27e49ep-21f, 0.0f, 0.0f, 0x1.86a718p-13f, 0x1.7f462cp-36f, 0x1.3243fp-108f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.58b878p-11f, 0.0f, 0x1.d05868p-1f,
     0x1.124b78p-14f, 0x1.c60c38p-26f, 0.0f, 0.0f, 0x1.f054b4p-121f, 0x1.58fa74p-123f,
     0x1.442438p-96f, 0.0f, 0x1p0f, 0.0f, 0x1.070622p-2f, 0.0f, 0x1.1ba64cp-43f,
     0x1.213abap-31f, 0.0f, 0x1.6c8ad2p-82f, 0.0f, 0x1.3d82aep-95f, 0x1.8db4d4p-119f,
     0x1.630268p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.af8acap-102f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c08014p-3f, 0x1.1cbf92p-12f, 0x1.20bb7p-50f, 0.0f, 0.0f, 0.0f,
     0x1.1fbd84p-92f, 0.0f, 0.0f, 0x1.4e9484p-119f, 0x1.09bb6ep-10f, 0x1.14cf3ep-86f,
     0x1.6cd904p-106f, 0x1.3107fp-83f, 0x1.33d5ccp-84f, 0.0f, 0x1.c2ffc2p-61f, 0.0f,
     0.0f, 0x1.4d8e4ap-40f, 0.0f, 0x1.a1b1bcp-23f, 0.0f, 0.0f, 0.0f, 0x1.4920e2p-123f,
     0x1.ad8458p-69f, 0x1.372c3cp-91f, 0.0f, 0.0f, 0.0f, 0x1.d941d4p-67f,
     0x1.ca12b2p-84f, 0.0f, 0.0f, 0x1.106aa8p-90f, 0x1.bba94ap-77f, 0.0f, 0.0f,
     0x1.36432p-8f, 0.0f, 0x1.b64ffcp-13f, 0x1.f1a072p-91f, 0.0f, 0.0f,
     0x1.648af6p-101f, 0.0f, 0x1.b4e136p-36f, 0x1.c48d4cp-100f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f6a6aep-82f, 0x1.76ff32p-44f, 0x1.02ffd8p-97f, 0.0f, 0x1.adc928p-87f,
     0x1.9ffdc6p-49f, 0x1.1567c6p-13f, 0x1.7f2dap-90f, 0.0f, 0.0f, 0x1.792d14p-29f,
     0x1.c0acb8p-50f, 0x1.0cbb04p-119f, 0x1.d6255p-6f, 0.0f, 0x1.0a1fb6p-84f,
     0x1.5ad7a8p-31f, 0.0f, 0.0f, 0x1.b5800cp-61f, 0.0f, 0.0f, 0x1.2182aep-55f, 0.0f,
     0x1.fb8188p-27f, 0.0f, 0x1.5c8b12p-63f, 0.0f, 0x1.d5fdc2p-43f, 0.0f,
     0x1.03d02p-49f, 0.0f, 0x1.06ef36p-56f, 0.0f, 0.0f, 0x1.6dda8p-8f,
     0x1.4f7956p-120f, 0x1.294268p-105f, 0x1.2dd4dp-1f, 0x1.6b2bd4p-110f,
     0x1.e7d24ep-126f, 0.0f, 0.0f, 0x1.f8d65ap-23f, 0x1.a0fc4cp-44f, 0x1.afd108p-36f,
     0x1.f5e758p-18f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cd1462p-101f,
     0.0f, 0.0f, 0.0f, 0x1.dc1ac4p-86f, 0x1.24cd2ap-74f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5fad4ap-108f, 0x1.c32564p-60f, 0x1.85e0aep-18f, 0x1.4701eep-19f,
     0x1.2f1c08p-56f, 0x1p0f, 0.0f, 0.0f, 0x1.8ffa7ep-121f, 0x1.62d1p-90f, 0.0f,
     0x1.165684p-9f, 0.0f, 0x1.39164p-8f, 0x1.2249ap-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.3223aep-70f, 0x1.f5157ep-21f, 0x1.00b8b4p-53f, 0x1.a87992p-1f, 0.0f,
     0.0f, 0x1.154832p-69f, 0.0f, 0.0f, 0x1.96ac78p-53f, 0x1.f12ce8p-58f,
     0x1.8f0d2ap-28f, 0x1.1d5afep-79f, 0x1.abf344p-17f, 0.0f, 0x1.8e4d9ep-73f,
     0x1.e46c66p-10f, 0x1.fe93dep-60f, 0x1.112c58p-62f, 0x1.171d0ap-38f,
     0x1.82b24ap-71f, 0x1.44133ap-119f, 0x1.9dc762p-34f, 0x1.07b8dap-101f, 0.0f,
     0x1.418862p-9f, 0.0f, 0x1.a6ac3ep-73f, 0.0f, 0x1.f667d2p-117f, 0.0f,
     0x1.8ce236p-84f, 0x1.6f569ap-60f, 0x1.cdc13ap-48f, 0x1.5dcc92p-16f, 0.0f, 0.0f,
     0.0f, 0x1.4bcb8p-55f, 0x1.848c6p-69f, 0.0f, 0.0f, 0.0f, 0x1.610e9cp-30f, 0.0f,
     0.0f, 0x1.cb75e2p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.989d7ep-57f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.081068p-45f, 0x1.abe742p-68f, 0x1.34e02cp-26f, 0.0f, 0.0f, 0.0f,
     0x1.f92916p-43f, 0.0f, 0.0f, 0x1.e49538p-36f, 0.0f, 0x1.3b0578p-24f, 0.0f, 0.0f,
     0.0f, 0x1.d68c4p-22f, 0x1.1cfec8p-91f, 0x1.28f318p-40f, 0.0f, 0.0f,
     0x1.4393a8p-14f, 0x1.775d8p-39f, 0x1.64526ep-29f, 0.0f, 0x1.aa7a52p-67f, 0.0f,
     0x1.106ca6p-12f, 0.0f, 0.0f, 0.0f, 0x1.571858p-119f, 0x1.7746cp-68f,
     0x1.318616p-73f, 0.0f, 0.0f, 0x1.032a2p-61f, 0.0f, 0.0f, 0.0f, 0x1.288b08p-124f,
     0.0f, 0.0f, 0x1.77009cp-70f, 0.0f, 0x1.d9d18ep-68f, 0.0f, 0x1.630c9cp-33f,
     0x1.e9d844p-9f, 0.0f, 0.0f, 0x1.850e92p-13f, 0.0f, 0.0f, 0x1.a6257p-39f, 0.0f,
     0.0f, 0.0f, 0x1.6af0a2p-18f, 0x1.e3cbf2p-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ef531ep-7f, 0x1.00b1e6p-69f, 0.0f, 0.0f, 0x1.2ea54p-68f, 0x1.3043e6p-17f,
     0x1.4d482p-12f, 0x1.eacc32p-34f, 0.0f, 0x1.1c7a56p-119f, 0x1.83f5eap-9f, 0.0f,
     0x1.5f925cp-64f, 0.0f, 0x1.786fb2p-36f, 0.0f, 0x1.567c4cp-41f, 0.0f,
     0x1.c89b12p-62f, 0x1.bc2bfap-65f, 0x1.1d7ad6p-119f, 0.0f, 0x1.932938p-1f, 0.0f,
     0x1.2ea52ap-66f, 0x1.79a92ep-110f, 0x1.32295ap-65f, 0x1.6a4158p-3f,
     0x1.a45e84p-31f, 0x1.34753ap-70f, 0x1.a896b8p-59f, 0.0f, 0x1.1ffa9cp-13f, 0.0f,
     0x1.74eb88p-63f, 0.0f, 0x1.76a00ep-1f, 0x1.b6a556p-50f, 0.0f, 0x1.583b98p-94f,
     0x1.c080dep-71f, 0.0f, 0.0f, 0.0f, 0x1.a6c114p-5f, 0.0f, 0x1.4d789ep-50f, 0.0f,
     0.0f, 0x1.68662p-88f, 0.0f, 0.0f, 0.0f, 0x1.deb936p-63f, 0x1.569e62p-118f,
     0x1.71c6eep-9f, 0x1.adb61ap-6f, 0.0f, 0x1.a22d48p-32f, 0x1.e34b2cp-117f,
     0x1.dd130ep-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6654b2p-73f, 0x1.97dec8p-88f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.49c9fap-28f, 0.0f, 0.0f, 0x1.7f9a12p-20f, 0x1.6187dcp-30f,
     0.0f, 0x1.58c862p-80f, 0.0f, 0x1.decbfap-49f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.85ebcap-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a9bb86p-26f, 0.0f,
     0x1.92254ap-114f, 0.0f, 0x1.32f14ap-98f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1f2efap-124f, 0x1.29012ap-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a5c578p-118f,
     0.0f, 0x1.7a41aap-53f, 0x1.23397p-97f, 0.0f, 0.0f, 0x1.91b0ccp-60f, 0.0f, 0.0f,
     0.0f, 0x1.c27ad4p-108f, 0.0f, 0x1.606294p-99f, 0x1.e5ea8cp-56f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.4774a4p-16f, 0.0f, 0.0f, 0x1.e3a5f2p-47f, 0x1.b32972p-5f,
     0x1.110c86p-11f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.0de134p-79f, 0.0f, 0.0f, 0.0f,
     0x1.bbd4f2p-17f, 0.0f, 0.0f, 0.0f, 0x1.960afp-99f, 0x1.dbadbap-85f, 0.0f, 0.0f,
     0.0f, 0x1.12514ep-42f, 0.0f, 0.0f, 0x1.2396aep-110f, 0.0f, 0x1.e91488p-39f,
     0x1.d80a8ap-34f, 0x1.3d8dfp-17f, 0x1.ddd91cp-73f, 0x1.1db5dcp-112f,
     0x1.2fa68ep-70f, 0x1.965ceap-67f, 0.0f, 0x1.908c48p-126f, 0.0f, 0.0f,
     0x1.90b0b2p-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e2755ap-9f, 0.0f, 0x1.01a90ep-124f,
     0x1.c13c1ep-18f, 0x1.5c9c54p-119f, 0x1.de1e98p-34f, 0x1.5f099p-103f,
     0x1.f766d8p-85f, 0x1.f4acf2p-67f, 0x1.a12706p-124f, 0.0f, 0x1.f5bbecp-35f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ab6a24p-48f, 0.0f, 0.0f, 0x1.e21e96p-44f, 0.0f,
     0x1.cb1ed6p-61f, 0.0f, 0x1.09a8aap-52f, 0.0f, 0x1.c98478p-64f, 0x1.15e9ap-20f,
     0x1.857ddcp-12f, 0.0f, 0.0f, 0x1.e26264p-83f, 0x1.8fe974p-123f, 0x1.4d61b4p-35f,
     0x1.28c2e2p-29f, 0x1.818162p-112f, 0x1.6ea10cp-58f, 0.0f, 0.0f, 0x1.9511c6p-75f,
     0.0f, 0x1.49d3p-108f, 0x1.d666bep-36f, 0.0f, 0.0f, 0x1.c1810ap-101f,
     0x1.e1b192p-114f, 0.0f, 0x1.a34d2ep-42f, 0.0f, 0x1.e8beecp-86f, 0x1.97a438p-23f,
     0x1.fa33aep-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.254696p-62f, 0.0f, 0.0f,
     0x1.60cdd4p-37f, 0.0f, 0x1.9f6774p-88f, 0.0f, 0x1.8fbc24p-66f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.7aaac6p-126f, 0x1.77d306p-114f, 0.0f, 0x1.c71f24p-21f, 0x1.9d408cp-64f,
     0x1.2db9fap-30f, 0x1.15fadap-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0d081cp-40f, 0.0f,
     0x1.866972p-70f, 0.0f, 0.0f, 0x1.4343cp-29f, 0x1.3748dap-13f, 0x1.2b4524p-39f,
     0.0f, 0x1.a3c586p-29f, 0x1.96dff4p-19f, 0x1.1f43b6p-91f, 0x1.af6b44p-46f, 0.0f,
     0x1.6c0dbcp-24f, 0.0f, 0.0f, 0x1.9a79a6p-124f, 0x1.4c6616p-69f, 0.0f,
     0x1.3812acp-121f, 0.0f, 0x1.1fa4a6p-45f, 0.0f, 0x1.27090cp-119f, 0.0f, 0.0f,
     0.0f, 0x1.b4befap-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4ca8dcp-33f, 0x1.fdb2a4p-87f, 0x1.b99bc2p-70f, 0x1.589a5cp-31f, 0.0f,
     0x1.cdcda2p-107f, 0x1.9d684cp-110f, 0x1.2e72a6p-33f, 0x1.17a108p-1f, 0.0f,
     0x1.1a332ep-92f, 0x1.60b93ap-102f, 0.0f, 0.0f, 0x1.a0e134p-47f, 0.0f,
     0x1.8fdb4ep-123f, 0x1.f8a97p-78f, 0.0f, 0.0f, 0x1.bf0d18p-55f, 0x1.60407ep-4f,
     0.0f, 0.0f, 0x1.7fa824p-98f, 0.0f, 0x1.ea006ep-92f, 0.0f, 0x1.481ddap-36f, 0.0f,
     0x1.c704a6p-38f, 0x1.2f0e02p-52f, 0x1.c4496ep-118f, 0x1.44b5b8p-79f,
     0x1.bb447ap-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6a57c8p-82f, 0x1.64c266p-105f, 0.0f,
     0x1.aaee88p-52f, 0.0f, 0.0f, 0x1.f9ebd6p-110f, 0x1.a4ead8p-87f, 0.0f, 0.0f,
     0x1.0be288p-91f, 0.0f, 0.0f, 0x1.e40e36p-13f, 0.0f, 0x1.f4141ap-11f,
     0x1.484358p-35f, 0x1.dbfce4p-2f, 0.0f, 0x1.c54802p-47f, 0.0f, 0x1.f50962p-85f,
     0x1.af5c02p-89f, 0.0f, 0x1.10141ep-90f, 0x1.7c2ff2p-97f, 0x1.7e126p-109f, 0.0f,
     0x1.d13ecep-11f, 0.0f, 0.0f, 0x1.d3ccd4p-32f, 0x1.8ae92cp-64f, 0x1.0deba8p-24f,
     0x1.0042bep-106f, 0x1.ecf40ep-31f, 0x1.50acf4p-65f, 0.0f, 0x1.0505a2p-123f, 0.0f,
     0x1.2fd094p-35f, 0.0f, 0.0f, 0.0f, 0x1.31687p-108f, 0.0f, 0x1.00fbbp-27f, 0.0f,
     0x1.158912p-26f, 0x1.4176d4p-109f, 0.0f, 0x1.cc5c04p-52f, 0x1.27d86ep-46f,
     0x1.3204a2p-101f, 0x1.bed672p-25f, 0.0f, 0.0f, 0x1.002e9cp-13f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b37b4ap-17f, 0.0f, 0x1.e697a4p-38f, 0x1.357c92p-104f, 0x1.769238p-98f,
     0.0f, 0.0f, 0.0f, 0x1.50e4a2p-17f, 0x1.894d3ap-122f, 0.0f, 0.0f, 0.0f,
     0x1.83d9fcp-56f, 0x1.2d910cp-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.48d89ep-42f, 0.0f,
     0x1.9eb562p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7ae276p-88f, 0.0f, 0x1.c04aa8p-38f,
     0x1.98cf64p-7f, 0.0f, 0.0f, 0.0f, 0x1.6e02fap-79f, 0.0f, 0.0f, 0.0f,
     0x1.a1fd5ep-97f, 0x1.1713p-111f, 0.0f, 0x1.2793fp-12f, 0.0f, 0x1.05472ap-39f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c3a6e4p-71f, 0.0f, 0.0f, 0x1.27d3dep-97f,
     0x1.49283ap-4f, 0x1.546c12p-100f, 0x1.7aaf5cp-56f, 0.0f, 0.0f, 0x1.f742b8p-5f,
     0x1.b6de96p-7f, 0x1.a39ef4p-3f, 0x1.98f778p-120f, 0x1.d03a02p-18f,
     0x1.20435p-106f, 0x1.9a4c8cp-8f, 0x1.e154d2p-39f, 0.0f, 0x1.6f35b6p-25f, 0.0f,
     0x1.873b9cp-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.75b1ecp-68f, 0x1.0f598ep-72f, 0.0f,
     0x1.cc17e6p-62f, 0x1.7e62e8p-72f, 0x1.9a4458p-57f, 0x1.4eea5ep-58f, 0.0f,
     0x1.c98b9ep-125f, 0.0f, 0.0f, 0.0f, 0x1.f4586ep-63f, 0.0f, 0x1.397bdcp-60f, 0.0f,
     0.0f, 0.0f, 0x1.d0ef84p-53f, 0.0f, 0x1.fe3c9ep-104f, 0x1.643978p-32f,
     0x1.359318p-66f, 0.0f, 0.0f, 0.0f, 0x1.4ff1c2p-115f, 0.0f, 0.0f, 0.0f,
     0x1.9e456cp-117f, 0.0f, 0x1.eab5ecp-75f, 0x1.f565cp-92f, 0.0f, 0.0f, 0.0f,
     0x1.bf786cp-13f, 0.0f, 0x1.12661ep-83f, 0x1.8a9ef8p-103f, 0x1.e91f36p-124f, 0.0f,
     0x1.487e4cp-84f, 0.0f, 0x1.e02b58p-123f, 0x1.4e37ccp-120f, 0x1.667c26p-8f,
     0x1.6726fp-46f, 0x1.11cf1ap-31f, 0.0f, 0x1.73acbcp-26f, 0x1.3aae96p-91f,
     0x1.056bcp-54f, 0.0f, 0.0f, 0x1.fca8cap-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0b92f8p-92f, 0x1.57824ap-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.aa742ep-65f, 0x1.425e82p-2f, 0.0f, 0x1.b142ep-41f, 0x1.3b6a72p-21f,
     0x1.64d65ep-124f, 0x1.f0fea2p-78f, 0.0f, 0x1.37d81p-7f, 0.0f, 0x1.33f3d8p-114f,
     0x1.163d36p-19f, 0.0f, 0x1.514496p-64f, 0x1.d8c5c4p-89f, 0x1.d8f82ep-1f,
     0x1.858b7cp-65f, 0.0f, 0.0f, 0x1.766d3cp-5f, 0.0f, 0x1.721336p-22f, 0.0f,
     0x1.082ea6p-86f, 0x1.9cf822p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eb7f4ap-24f,
     0.0f, 0.0f, 0x1.63828cp-35f, 0x1.1002a4p-23f, 0x1.5b1b12p-63f, 0.0f, 0.0f,
     0x1.a327c8p-63f, 0x1.e1a0e4p-18f, 0.0f, 0x1.771cdcp-86f, 0.0f, 0x1.cfe96ap-61f,
     0x1.5c9a18p-120f, 0x1.6033b6p-48f, 0.0f, 0x1.9d7f3ap-91f, 0x1.c1cb76p-83f,
     0x1.298c5ap-24f, 0x1.1bdf1ep-28f, 0x1.402c8p-113f, 0.0f, 0x1.44fdf2p-77f,
     0x1.c3177p-12f, 0x1.5a70cap-41f, 0.0f, 0x1.817802p-88f, 0.0f, 0.0f,
     0x1.88e7c2p-107f, 0x1.be99a6p-33f, 0x1.07aba8p-108f, 0x1.3048eep-61f,
     0x1.b726e2p-25f, 0.0f, 0x1.54fdfep-40f, 0.0f, 0x1.4363c2p-19f, 0.0f, 0.0f, 0.0f,
     0x1.8c70aep-28f, 0x1.c734bap-99f, 0.0f, 0.0f, 0.0f, 0x1.8c1f8p-115f,
     0x1.525a1ap-62f, 0x1.adc774p-20f, 0x1.13d6fp-21f, 0.0f, 0.0f, 0x1.6e9c8ap-5f,
     0.0f, 0x1.045452p-60f, 0.0f, 0.0f, 0x1.97dc32p-78f, 0x1.5c74c2p-34f,
     0x1.c717eep-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4870b6p-121f, 0x1.a3f74p-5f, 0.0f, 0.0f, 0.0f, 0x1.520feep-107f, 0.0f, 0.0f,
     0x1.42771ap-50f, 0x1.d6c74p-43f, 0.0f, 0x1.b1cdfap-51f, 0.0f, 0.0f, 0.0f,
     0x1.a5db22p-50f, 0x1.47e12ap-62f, 0.0f, 0.0f, 0x1.c8ca74p-14f, 0.0f,
     0x1.b74726p-58f, 0x1.b6d4d8p-102f, 0x1.b81186p-124f, 0.0f, 0x1.7e1d34p-51f, 0.0f,
     0.0f, 0.0f, 0x1.17fadp-53f, 0x1.6e7b98p-16f, 0x1.cf64d2p-37f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.934556p-108f, 0.0f, 0x1.231d18p-94f, 0.0f, 0.0f, 0x1.b9020cp-24f,
     0x1.28e542p-78f, 0x1.1253b6p-38f, 0x1.712ebep-5f, 0x1.87cc4p-63f, 0.0f, 0.0f,
     0x1.e2293ap-56f, 0.0f, 0.0f, 0.0f, 0x1.3a3306p-71f, 0x1.35425cp-88f,
     0x1.7b9b3cp-50f, 0.0f, 0.0f, 0.0f, 0x1.462d86p-94f, 0.0f, 0.0f, 0x1.9200fap-57f,
     0.0f, 0x1.bbc39cp-48f, 0.0f
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
            tmp1 = Sleef_exp2f4_u10avx2128(tmp0);
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
    printf("Sleef_exp2f4_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_exp2f4_u10avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
