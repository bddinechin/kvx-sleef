/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_ceilf4_avx2128.c --function Sleef_finz_ceilf4_avx2128 \
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
     0.0f, 0.0f, 0x1.795a5p-79f, 0x1.1a9e58p-97f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0b98d2p-22f, 0.0f, 0x1.fcf03ap-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6aadacp-118f,
     0.0f, 0.0f, 0x1.1f49c8p-57f, 0.0f, 0.0f, 0x1.8d751ep-77f, 0.0f, 0x1.e866ep-35f,
     0.0f, 0x1.aefe2ap-13f, 0x1.20d884p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.483da8p-76f, 0.0f, 0x1.49c57ap-39f, 0.0f, 0x1.be47f6p-97f, 0x1.710e4p-28f,
     0.0f, 0x1.cf9c56p-47f, 0.0f, 0.0f, 0x1.5c8cdep-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4bb2e4p-100f, 0x1.57df1p-115f, 0x1.f48594p-24f, 0x1p0f, 0x1.0c7a6ap-36f,
     0x1.d782f2p-65f, 0x1.c627a4p-18f, 0.0f, 0.0f, 0x1.3039a6p-52f, 0x1.bbf366p-48f,
     0x1.1fa488p-35f, 0x1.8c74eap-39f, 0.0f, 0x1.c72fe6p-6f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.7cc07ep-38f, 0x1.5c0092p-123f, 0x1.969888p-19f, 0x1.5b60fap-8f,
     0x1.986b16p-36f, 0.0f, 0.0f, 0x1.f0d5c4p-16f, 0x1.e02c62p-106f, 0x1.f0eca4p-60f,
     0.0f, 0x1.f5a24ep-59f, 0x1.bf79bp-43f, 0x1.c82d28p-82f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.6b038p-6f, 0.0f, 0x1.6be94cp-42f, 0.0f, 0.0f, 0x1.be9f68p-113f,
     0x1.a9cdaep-86f, 0x1.7a17bp-103f, 0x1.4a06p-13f, 0x1.b081a6p-66f,
     0x1.381732p-30f, 0.0f, 0x1.5726dcp-46f, 0x1.32da84p-126f, 0x1.548d18p-46f, 0.0f,
     0.0f, 0x1.875ce8p-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bc9392p-77f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.72dd94p-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1d14ecp-90f, 0.0f, 0.0f,
     0.0f, 0x1.d6eaeep-126f, 0.0f, 0.0f, 0x1.3054fcp-85f, 0x1.d773acp-53f, 0.0f, 0.0f,
     0x1.c69c7p-29f, 0.0f, 0.0f, 0x1.4b5c0ap-59f, 0x1.4442f6p-110f, 0.0f, 0.0f, 0.0f,
     0x1.564b38p-115f, 0x1.9bd90cp-71f, 0.0f, 0x1.6ebd92p-110f, 0x1.00fbdep-76f, 0.0f,
     0x1.d9b088p-88f, 0.0f, 0x1.03b7dp-57f, 0.0f, 0x1.d8e666p-56f, 0.0f,
     0x1.55413p-83f, 0x1.edfc42p-57f, 0x1.c28a72p-61f, 0.0f, 0.0f, 0x1.f8d582p-121f,
     0.0f, 0x1.a2cbeep-54f, 0.0f, 0x1.323ac2p-54f, 0x1.ee21b6p-120f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.66b21cp-4f, 0.0f, 0x1.b78f02p-119f, 0x1.d25588p-64f, 0x1.e0b462p-112f,
     0x1.691a8ep-100f, 0.0f, 0x1.a8bceep-3f, 0.0f, 0x1.825c4cp-7f, 0.0f,
     0x1.93a104p-33f, 0.0f, 0.0f, 0.0f, 0x1.5c7b96p-35f, 0x1.ec2036p-87f, 0.0f, 0.0f,
     0.0f, 0x1.023e1ep-57f, 0x1.b9bb0ep-34f, 0.0f, 0x1.f21744p-72f, 0.0f,
     0x1.bc3c88p-101f, 0.0f, 0.0f, 0.0f, 0x1.d46158p-110f, 0x1.022928p-7f,
     0x1.32e264p-18f, 0.0f, 0x1.6de5p-35f, 0.0f, 0.0f, 0x1.91c17p-44f, 0.0f,
     0x1.16c86ap-39f, 0x1.5cfa3cp-46f, 0.0f, 0.0f, 0.0f, 0x1.30eab2p-114f, 0.0f,
     0x1.280dbp-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9e0a02p-48f,
     0.0f, 0.0f, 0x1.9e5c54p-52f, 0.0f, 0x1.d3d98p-82f, 0x1.15f46p-101f, 0.0f,
     0x1.00b61cp-107f, 0.0f, 0x1.d9fa18p-82f, 0x1.4e75bap-60f, 0.0f, 0x1.0c6c16p-38f,
     0.0f, 0.0f, 0.0f, 0x1.3c4d3cp-6f, 0.0f, 0x1.d771a4p-92f, 0.0f, 0x1.4b87f8p-22f,
     0x1.fb409p-91f, 0x1.dd0a96p-35f, 0x1.7f97b2p-120f, 0.0f, 0.0f, 0x1.8c77acp-91f,
     0x1.6ed98ep-97f, 0x1.064336p-23f, 0x1.9129f6p-73f, 0x1.920afep-98f,
     0x1.bb84d2p-109f, 0.0f, 0.0f, 0.0f, 0x1.b3c052p-106f, 0x1.2c140ap-84f,
     0x1.a8622p-84f, 0x1.27c7fp-109f, 0x1.6d4aa6p-36f, 0.0f, 0.0f, 0x1.1fad8p-84f,
     0.0f, 0x1.12a3d4p-96f, 0x1.cd515p-93f, 0x1.7c60b6p-23f, 0x1.1b900ep-55f,
     0x1.b8c488p-19f, 0.0f, 0x1.87d226p-32f, 0x1.a11a7p-69f, 0.0f, 0x1.1090bap-96f,
     0.0f, 0x1.7fc0eap-88f, 0.0f, 0.0f, 0.0f, 0x1.2bafdcp-123f, 0.0f, 0x1.945cbcp-57f,
     0.0f, 0x1.a03e2ap-62f, 0.0f, 0x1.8f2302p-113f, 0.0f, 0x1.37e5dp-72f, 0.0f, 0.0f,
     0x1.3a3fe2p-117f, 0x1.83144cp-72f, 0.0f, 0.0f, 0x1.2a661cp-56f, 0x1.c2febep-34f,
     0x1.04da4ep-68f, 0x1.35a53cp-37f, 0.0f, 0x1.c2649cp-8f, 0x1.321482p-97f,
     0x1.bcd104p-95f, 0x1.c9c778p-111f, 0x1.4843b4p-84f, 0.0f, 0x1.10b56p-76f, 0.0f,
     0x1.a1c248p-95f, 0x1.da1d4ap-13f, 0x1.601a5p-18f, 0x1.1c462ap-26f, 0.0f, 0.0f,
     0x1.b2739p-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.68fe9cp-75f, 0.0f, 0.0f,
     0x1.4375e8p-83f, 0x1.bb1578p-103f, 0.0f, 0x1.7c850ap-8f, 0x1.fe8a34p-52f, 0.0f,
     0.0f, 0x1.0a25e8p-16f, 0x1.9c1034p-11f, 0x1.03444ap-41f, 0.0f, 0.0f,
     0x1.ebafe4p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a1887ap-92f, 0x1.2baf1p-112f, 0.0f,
     0x1.8e8cecp-111f, 0x1.a3ffe8p-6f, 0.0f, 0.0f, 0.0f, 0x1.80a288p-57f, 0.0f, 0.0f,
     0.0f, 0x1.fe69dap-120f, 0x1.03c656p-31f, 0.0f, 0x1.17228ap-65f, 0x1.85176p-107f,
     0x1.38a08ap-55f, 0.0f, 0x1.7ee96p-5f, 0x1.8a6bbep-5f, 0.0f, 0x1.a68bd4p-53f,
     0x1.015328p-87f, 0x1.c438f6p-86f, 0x1.114348p-118f, 0.0f, 0x1.12c09ep-104f,
     0x1.0977a8p-19f, 0x1.2fbb56p-109f, 0.0f, 0x1.4b146cp-120f, 0x1.2e4862p-63f,
     0x1.da46ap-124f, 0.0f, 0x1.12cf3ap-37f, 0.0f, 0.0f, 0x1.f8a37cp-51f, 0.0f,
     0x1.4fbf92p-37f, 0x1.4c7504p-125f, 0.0f, 0.0f, 0.0f, 0x1.433cdep-84f, 0.0f,
     0x1.2e79d4p-5f, 0x1.cef16ap-107f, 0x1.aa7e2ep-47f, 0x1.d663b4p-96f, 0.0f,
     0x1.8d5db6p-25f, 0x1.e4259ap-15f, 0x1.16e996p-75f, 0.0f, 0x1.981ed2p-20f, 0.0f,
     0x1.cd28c8p-113f, 0x1.4339b2p-27f, 0.0f, 0x1.9f72bap-46f, 0.0f, 0x1.30aa22p-120f,
     0.0f, 0x1.3ff78ep-18f, 0.0f, 0x1.d6008ap-76f, 0x1.a18fa8p-70f, 0.0f, 0.0f, 0.0f,
     0x1.827b1ap-88f, 0.0f, 0x1.412cb6p-20f, 0.0f, 0x1.c82d1ap-81f, 0.0f, 0.0f, 0.0f,
     0x1.4f0c2cp-10f, 0.0f, 0x1.da9268p-86f, 0x1.6426c4p-13f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.baeb24p-29f, 0x1.493414p-34f, 0.0f, 0.0f, 0.0f, 0x1.4b67bep-53f, 0.0f,
     0x1.cdbd1cp-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ad179p-65f, 0x1.75fd1ap-27f,
     0.0f, 0.0f, 0.0f, 0x1.b30ddcp-105f, 0x1.86a808p-31f, 0.0f, 0x1.0dc8e4p-2f, 0.0f,
     0.0f, 0x1.d0b304p-118f, 0x1.35c25ep-90f, 0x1.17c0a4p-123f, 0x1.850b7cp-16f, 0.0f,
     0.0f, 0.0f, 0x1.9dbf0cp-101f, 0.0f, 0x1.9cf93ap-66f, 0.0f, 0.0f, 0x1.d1477p-19f,
     0.0f, 0.0f, 0x1.eabebep-120f, 0.0f, 0.0f, 0.0f, 0x1.bda2b2p-45f, 0x1.26ab72p-40f,
     0x1.155a68p-93f, 0.0f, 0x1.78d264p-47f, 0x1.ec523ap-117f, 0.0f, 0.0f,
     0x1.f646dap-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.037134p-63f, 0.0f,
     0x1.56d01ep-5f, 0x1.b80aap-35f, 0.0f, 0.0f, 0x1.1b1946p-65f, 0.0f, 0.0f,
     0x1.7e71e4p-122f, 0x1.71b192p-91f, 0x1.9b5b1ap-30f, 0.0f, 0x1.4d36aep-84f, 0.0f,
     0.0f, 0.0f, 0x1.8d1aecp-69f, 0x1.67f6fap-2f, 0x1.da2f1ep-82f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.20d5d6p-65f, 0x1.58efc4p-47f, 0x1.4a2ed2p-33f, 0.0f, 0x1.19747cp-35f,
     0.0f, 0.0f, 0x1.d404eep-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2644a8p-90f,
     0x1.36177ep-117f, 0x1.eb6ebep-80f, 0.0f, 0x1.0487eap-105f, 0x1.0309d4p-68f,
     0x1.2c424ep-119f, 0x1.43087ap-93f, 0x1.99fe56p-12f, 0x1.af8f3ep-114f,
     0x1.98ff9ep-13f, 0x1.ed5e8ep-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9bf8cp-93f,
     0x1.969c38p-42f, 0x1.8725f6p-72f, 0.0f, 0.0f, 0x1.ef810cp-70f, 0x1.82d1a8p-94f,
     0x1.c81b98p-37f, 0x1.0e2238p-45f, 0.0f, 0.0f, 0x1.6124cep-119f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a48d2p-79f, 0x1.9540bap-85f, 0x1.de2898p-123f, 0.0f, 0.0f, 0.0f,
     0x1.ccfb2ep-25f, 0x1.339128p-120f, 0x1.33da84p-101f, 0.0f, 0x1.91d5p-23f,
     0x1.420f26p-118f, 0x1.5a192ap-29f, 0.0f, 0x1.e8c92p-24f, 0x1.7027ap-30f,
     0x1.e33e1ap-36f, 0x1.0e72cp-80f, 0x1.1b64f8p-99f, 0.0f, 0x1.8768d4p-44f, 0.0f,
     0.0f, 0x1.3ffbfap-110f, 0x1.a5e102p-77f, 0.0f, 0x1.e2bd6ap-117f, 0.0f, 0.0f,
     0x1.79d428p-82f, 0.0f, 0x1.fb0f24p-25f, 0x1.f581dp-34f, 0x1.999354p-50f, 0.0f,
     0x1.a8e548p-29f, 0.0f, 0x1.ee8a5cp-71f, 0.0f, 0.0f, 0x1.83ab82p-34f,
     0x1.41f4ccp-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b1c0bcp-18f, 0.0f, 0x1.dd58bp-25f,
     0x1.86b99ap-119f, 0.0f, 0x1.774d6cp-17f, 0.0f, 0.0f, 0x1.d2c31p-43f,
     0x1.72d7a2p-83f, 0x1.d7cfe8p-32f, 0.0f, 0x1.5304dep-4f, 0x1.8550acp-109f, 0.0f,
     0.0f, 0x1.6b448ap-125f, 0x1.5fa582p-13f, 0.0f, 0.0f, 0.0f, 0x1.83670cp-20f, 0.0f,
     0.0f, 0x1.43cbdep-21f, 0x1.24640ap-91f, 0x1.f32ea4p-87f, 0.0f, 0.0f,
     0x1.bbef5cp-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d09754p-39f, 0.0f, 0x1.b67186p-59f,
     0x1.70114ap-65f, 0.0f, 0.0f, 0.0f, 0x1.af41dap-87f, 0.0f, 0.0f, 0.0f,
     0x1.07c362p-23f, 0.0f, 0x1.0a8cbcp-83f, 0x1.fb82a4p-2f, 0x1.502c0ap-38f,
     0x1.a8bb78p-38f, 0.0f, 0x1.531554p-41f, 0.0f, 0x1.d9873ap-84f, 0x1.e07992p-16f,
     0.0f, 0x1.9ded4ap-116f, 0x1.2955eap-20f, 0x1.0b4b5ap-49f, 0x1.be822ap-48f,
     0x1.abf6fap-68f, 0x1.b26c42p-2f, 0.0f, 0x1.eae94cp-43f, 0.0f, 0x1.8825aap-46f,
     0x1.aefe1ep-55f, 0.0f, 0.0f, 0x1.7e1b02p-115f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.67b882p-91f, 0x1.12780ep-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.17fc04p-111f,
     0x1.77476ap-118f, 0x1.c6de5p-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.375616p-11f, 0.0f,
     0.0f, 0x1.431dfep-59f, 0x1.25aff8p-4f, 0.0f, 0.0f, 0.0f, 0x1.584b46p-46f,
     0x1.a1bf52p-7f, 0x1.7451b4p-24f, 0x1.ba1456p-42f, 0x1.10d32cp-123f,
     0x1.64d2a2p-84f, 0x1.74393ap-115f, 0x1.40c524p-1f, 0.0f, 0x1.cc5586p-97f,
     0x1.e8c9a4p-81f, 0.0f, 0x1.4ea656p-97f, 0x1.e94fc6p-82f, 0.0f, 0.0f,
     0x1.1a1ee4p-23f, 0.0f, 0x1.7fbee4p-18f, 0x1.ee0804p-81f, 0.0f, 0x1.9accdap-51f,
     0.0f, 0.0f, 0x1.c6accp-109f, 0.0f, 0x1.6ef8p-64f, 0.0f, 0.0f, 0.0f,
     0x1.cf082ap-16f, 0x1.f6348p-28f, 0.0f, 0x1.0b528ap-36f, 0.0f, 0x1.778b38p-74f,
     0x1.f80fc8p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8d7502p-16f, 0.0f, 0.0f,
     0x1.71be6p-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.430d5ep-23f, 0x1.9b62f4p-32f,
     0.0f, 0.0f, 0.0f, 0x1.29d74cp-26f, 0.0f, 0x1.7631d2p-88f, 0.0f, 0.0f,
     0x1.38a82ep-121f, 0x1.2a291cp-107f, 0x1.bdb69cp-16f, 0.0f, 0x1.edc018p-115f,
     0.0f, 0x1.cb5f62p-8f, 0x1.6e6b74p-102f, 0x1.044038p-121f, 0.0f, 0x1.9140bap-96f,
     0.0f, 0.0f, 0x1.b0f92cp-116f, 0x1.47df7cp-111f, 0x1.3177fap-24f, 0x1.fcdd02p-12f,
     0x1.116e9ap-4f, 0x1.66502ep-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4ed886p-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.618d5ap-95f, 0x1.b6d79cp-84f, 0.0f,
     0.0f, 0.0f, 0x1.bdcc48p-25f, 0x1.e9e5cep-36f, 0.0f, 0x1.64baccp-83f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.33d804p-77f, 0x1.572b44p-107f, 0.0f,
     0x1.e578cep-121f, 0x1.95d314p-39f, 0x1.94bfa6p-94f, 0.0f, 0.0f, 0x1.640614p-98f,
     0x1.513354p-102f, 0x1.3a8db2p-29f, 0x1.123d4ap-48f, 0x1.b0c934p-105f,
     0x1.863e52p-117f, 0x1.6ee3ecp-120f, 0x1.1bccbp-98f, 0x1.bf9268p-19f, 0.0f,
     0x1.214f3ap-97f, 0x1.f0e924p-74f, 0x1.3a9eeep-21f, 0.0f, 0.0f, 0.0f,
     0x1.e1b2c4p-54f, 0x1.a84eb6p-1f, 0x1.3e7a16p-44f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7c693cp-54f, 0.0f, 0x1.3421ep-116f, 0.0f, 0.0f, 0.0f, 0x1.af653p-40f, 0.0f,
     0.0f, 0x1.67ce2ep-103f, 0.0f, 0x1.d2a7c4p-5f, 0.0f, 0x1.9d2feap-92f, 0.0f,
     0x1.471d2p-46f, 0.0f, 0x1.c13f98p-50f, 0.0f, 0x1.c49382p-56f, 0x1.781b7ap-121f,
     0x1.10647cp-15f, 0x1.8afe3ap-47f, 0x1.0bad06p-96f, 0.0f, 0x1.377da8p-69f, 0.0f,
     0x1.1c544ap-118f, 0.0f, 0.0f, 0.0f, 0x1.11ff14p-21f, 0.0f, 0.0f, 0x1.233778p-59f,
     0x1.e4b758p-71f, 0x1.351f4cp-55f, 0x1.b2540cp-60f, 0x1.8c9f9cp-37f, 0.0f, 0.0f,
     0.0f, 0x1.c8942cp-85f, 0.0f, 0x1.4ac388p-79f, 0x1.366872p-112f, 0x1.cd5316p-85f,
     0x1.7219dap-95f, 0.0f, 0x1.3c24e2p-71f, 0x1.98e31cp-22f, 0.0f, 0.0f,
     0x1.54accp-86f, 0.0f, 0.0f, 0x1.da00f6p-20f, 0x1.fcf8bp-20f, 0.0f,
     0x1.2c3e88p-13f, 0.0f, 0.0f, 0x1.e13524p-7f, 0.0f, 0.0f, 0x1.272648p-5f, 0.0f,
     0.0f, 0x1.0220cp-81f, 0.0f, 0x1.53816cp-57f, 0x1p0f, 0x1.1d8e0ap-105f, 0.0f,
     0.0f, 0.0f, 0x1.3a282p-57f, 0.0f, 0.0f, 0.0f, 0x1.02b2cp-10f, 0x1.1dbeecp-65f,
     0.0f, 0x1.fee624p-9f, 0x1.393deep-61f, 0.0f, 0x1.80029ap-61f, 0.0f, 0.0f,
     0x1.99117cp-51f, 0x1.4be714p-91f, 0.0f, 0x1.d0dcb6p-16f, 0.0f, 0.0f,
     0x1.2ced68p-82f, 0x1.318edp-54f, 0x1.7d5696p-76f, 0x1.e6666cp-38f,
     0x1.3cf33ep-106f, 0x1.101076p-105f, 0.0f, 0x1.6396c8p-114f, 0x1.e89654p-17f,
     0x1.5a738cp-113f, 0.0f, 0x1.57d80ap-21f, 0x1.899a56p-118f, 0.0f, 0.0f, 0.0f,
     0x1.98c91ap-19f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.0e1226p-13f, 0x1.9740a8p-74f,
     0x1.433a36p-31f, 0x1.95fedcp-90f, 0x1.ba8772p-65f, 0.0f, 0x1.20fe74p-113f,
     0x1.de2d5ep-4f, 0.0f, 0.0f, 0.0f, 0x1.de92dap-80f, 0.0f, 0x1.6348c6p-86f,
     0x1.d8fb12p-68f, 0x1.a9e4a2p-118f, 0x1.27c5a6p-94f, 0.0f, 0x1.a8745cp-54f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d94d02p-113f, 0.0f, 0.0f, 0x1.7af2acp-76f, 0.0f,
     0x1.a13934p-119f, 0x1.299586p-37f, 0.0f, 0.0f, 0x1.10aabp-3f, 0x1.49fe6ap-16f,
     0x1.3c82eep-101f, 0x1.77dc82p-39f, 0x1.6751c2p-119f, 0x1.b672ecp-91f,
     0x1.32c864p-78f, 0.0f, 0.0f, 0.0f, 0x1.e19df8p-118f, 0x1.92a17p-21f, 0.0f,
     0x1.cfadd6p-97f, 0x1.9aa50ep-46f, 0x1.3a4a46p-44f, 0x1.231bd8p-10f, 0.0f
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
            tmp1 = Sleef_finz_ceilf4_avx2128(tmp0);
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
    printf("Sleef_finz_ceilf4_avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_ceilf4_avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
