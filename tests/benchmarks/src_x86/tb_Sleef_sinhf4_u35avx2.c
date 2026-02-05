/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sinhf4_u35avx2128.c --function Sleef_sinhf4_u35avx2128 \
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
     0.0f, 0x1.dc2a64p-7f, 0x1.d010eap-34f, 0x1.643cc8p-24f, 0x1.71a2fap-81f, 0.0f,
     0x1.f010dap-72f, 0x1.742edcp-64f, 0x1.713c88p-109f, 0.0f, 0.0f, 0x1.43fe4cp-114f,
     0x1.ead98p-80f, 0.0f, 0.0f, 0x1.c2d188p-48f, 0.0f, 0.0f, 0x1.9807bcp-29f,
     0x1.b1bcdap-66f, 0.0f, 0x1.ec9f86p-9f, 0x1.4c9874p-26f, 0.0f, 0x1.6252eap-118f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.881918p-101f, 0x1.912bp-95f, 0x1.480d22p-123f, 0.0f,
     0x1.fd23acp-29f, 0x1.e6ea7ap-34f, 0x1.af004p-58f, 0.0f, 0x1.92bf4ep-14f, 0.0f,
     0.0f, 0x1.dc74b2p-5f, 0.0f, 0x1.af9a02p-118f, 0x1.2b745p-99f, 0.0f,
     0x1.d0fad6p-39f, 0x1.997c5ep-15f, 0.0f, 0.0f, 0.0f, 0x1.9a3376p-19f,
     0x1.4afa5ap-83f, 0.0f, 0.0f, 0x1.ea260cp-48f, 0x1.3dbda8p-92f, 0x1.08db0ep-77f,
     0.0f, 0x1.ede25p-110f, 0.0f, 0x1.8f82b8p-89f, 0x1.ec86f4p-105f, 0.0f, 0.0f,
     0x1.c79f42p-85f, 0x1.09ef3ep-40f, 0x1.d4027ep-26f, 0x1.ddb2e4p-26f,
     0x1.a222e2p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a9e4d2p-21f,
     0x1.452772p-30f, 0.0f, 0x1.c642e6p-94f, 0.0f, 0x1.576c8ep-94f, 0x1.44f6a4p-116f,
     0.0f, 0.0f, 0x1.4f04b8p-88f, 0.0f, 0x1.808eecp-20f, 0x1.98ceecp-49f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.db9a56p-97f, 0.0f, 0x1.de2a28p-120f, 0x1.6502bep-28f,
     0x1.33d66p-49f, 0x1.3da9b4p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6b1776p-95f,
     0x1.0e778cp-79f, 0x1.9bdedap-68f, 0.0f, 0x1.19d208p-93f, 0.0f, 0x1.28e562p-39f,
     0x1.d32f84p-92f, 0x1.81b9b2p-70f, 0x1.1e4aa6p-101f, 0x1.366916p-111f,
     0x1.181948p-87f, 0.0f, 0.0f, 0.0f, 0x1.c59ed6p-23f, 0x1.f89688p-7f,
     0x1.1bd606p-29f, 0x1.b0a21ep-62f, 0x1.49a32ap-39f, 0.0f, 0.0f, 0.0f,
     0x1.62c538p-62f, 0.0f, 0.0f, 0.0f, 0x1.5b3e8ap-104f, 0.0f, 0.0f, 0.0f,
     0x1.f5acaap-2f, 0x1.d7331p-56f, 0x1.2302b4p-121f, 0x1.48e3c4p-51f, 0.0f,
     0x1.8274bp-55f, 0x1.dc25fcp-43f, 0.0f, 0.0f, 0x1.9e5c6cp-51f, 0x1.d24afp-83f,
     0x1.d9514ep-104f, 0.0f, 0x1.1bfffcp-3f, 0x1.86e25ep-102f, 0x1.0b9928p-108f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.20141ap-57f, 0x1.7cee9p-48f, 0.0f, 0.0f,
     0x1.257446p-109f, 0.0f, 0.0f, 0.0f, 0x1.dddeeap-61f, 0x1.da3bf2p-86f, 0.0f, 0.0f,
     0x1.914e66p-39f, 0x1.78cc0cp-63f, 0x1.c83cdp-81f, 0x1.6ffd1ep-6f, 0.0f, 0.0f,
     0.0f, 0x1.ddc7fap-34f, 0x1.5058e2p-103f, 0.0f, 0x1.73feb8p-91f, 0.0f,
     0x1.600dap-46f, 0x1.a9c7f8p-14f, 0.0f, 0x1.dc93fap-70f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ade0f8p-86f, 0.0f, 0.0f, 0x1.59dc32p-45f, 0x1.e1061p-33f, 0.0f,
     0x1.94c5f2p-26f, 0.0f, 0x1.8c550ep-13f, 0x1.2db7eep-93f, 0.0f, 0x1.286552p-35f,
     0.0f, 0x1.8545aap-2f, 0x1.69dfc4p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ac38dap-38f,
     0.0f, 0x1.8f8882p-59f, 0x1.b84556p-8f, 0.0f, 0x1.278226p-111f, 0x1.9d38ep-8f,
     0.0f, 0.0f, 0x1.08866cp-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9b90f4p-98f,
     0x1.595d6ap-72f, 0.0f, 0.0f, 0x1.71e38p-106f, 0.0f, 0x1.7e4f98p-32f, 0.0f,
     0x1.8f6e52p-88f, 0x1.bfd4fcp-60f, 0.0f, 0x1.a3d4bap-6f, 0.0f, 0x1.cd1dcap-23f,
     0x1.6d225p-76f, 0x1.1c0558p-84f, 0x1.25089ep-21f, 0x1.b05062p-105f, 0.0f,
     0x1.8524a4p-68f, 0.0f, 0x1.09821p-86f, 0x1.3a642ep-73f, 0x1.e9a9c8p-119f,
     0x1.721124p-98f, 0.0f, 0x1.b1211ep-92f, 0.0f, 0x1.8de37cp-126f, 0x1.40a0cp-120f,
     0.0f, 0x1.0cb3bcp-39f, 0x1.300908p-77f, 0.0f, 0.0f, 0x1.5217dcp-115f,
     0x1.ad74c4p-11f, 0x1.0b67c2p-44f, 0.0f, 0x1.3a62e2p-47f, 0.0f, 0.0f,
     0x1.60410cp-61f, 0.0f, 0.0f, 0.0f, 0x1.c036f8p-3f, 0.0f, 0.0f, 0x1.88cf0cp-92f,
     0x1.62a2p-58f, 0x1.cadb82p-95f, 0.0f, 0x1.29d108p-38f, 0x1.fef68p-109f,
     0x1.21ad3ap-53f, 0x1.09cee2p-31f, 0.0f, 0x1.a28f4p-97f, 0x1.7fbfb4p-65f, 0.0f,
     0x1.b6e3b4p-94f, 0x1.87203ap-5f, 0.0f, 0x1.80ac16p-113f, 0x1.935166p-23f, 0.0f,
     0x1.3aa9d2p-115f, 0x1.5746a4p-103f, 0x1.c61028p-76f, 0.0f, 0x1.51a992p-61f,
     0x1.252ad4p-92f, 0.0f, 0.0f, 0x1.ee5726p-82f, 0.0f, 0.0f, 0x1.7de636p-102f, 0.0f,
     0.0f, 0x1.88626cp-117f, 0x1.88fd6ep-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.36f9e2p-117f, 0.0f, 0.0f, 0x1.952a46p-29f, 0.0f, 0.0f, 0.0f, 0x1.76827ep-65f,
     0.0f, 0x1.8f43b6p-42f, 0x1.331eeap-111f, 0x1.7d56f8p-5f, 0x1.754df6p-1f, 0.0f,
     0x1.7ae5f4p-111f, 0.0f, 0.0f, 0x1.25615cp-30f, 0x1.d08decp-58f, 0.0f,
     0x1.0b48ecp-69f, 0x1.cefbe2p-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.664ec2p-39f, 0.0f,
     0.0f, 0.0f, 0x1.8ce5cap-64f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f,
     0x1.9c6aeep-26f, 0.0f, 0x1.d486b4p-63f, 0.0f, 0.0f, 0x1.2407dcp-42f, 0.0f,
     0x1.319486p-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d35b5ap-31f, 0x1.491488p-101f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a7c7a2p-36f, 0x1.5a313ap-47f, 0x1.3b7a7ap-102f,
     0x1.0c9666p-24f, 0x1.6e51d2p-80f, 0.0f, 0.0f, 0.0f, 0x1.cdc31cp-82f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.bd7054p-51f, 0.0f, 0x1.2afa84p-30f, 0.0f, 0x1.72b354p-32f,
     0x1.4c9f06p-66f, 0x1.68601p-24f, 0.0f, 0.0f, 0x1.2510e2p-60f, 0x1.7e938ep-19f,
     0.0f, 0x1.58593ap-24f, 0.0f, 0x1.2946cp-41f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.85779p-16f, 0x1.61870ep-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.939ddp-22f, 0.0f, 0.0f, 0x1.34bed8p-1f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7c300ap-7f, 0.0f, 0.0f, 0.0f, 0x1.91598ep-47f, 0x1.269934p-29f,
     0x1.5f29e8p-60f, 0.0f, 0x1.d465fp-72f, 0.0f, 0x1.0e56dcp-17f, 0x1.8bed68p-13f,
     0.0f, 0x1.37434cp-22f, 0x1.c94fd8p-76f, 0.0f, 0.0f, 0x1.1a61b4p-93f, 0.0f,
     0x1.13d898p-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.166afap-111f, 0.0f,
     0x1.e5497ap-106f, 0.0f, 0x1.f2ff54p-103f, 0x1.a676dep-67f, 0x1.b6be4cp-107f,
     0.0f, 0x1.e0f2bap-7f, 0.0f, 0.0f, 0x1.bcd43p-113f, 0x1.6f80c8p-16f, 0.0f,
     0x1.714028p-113f, 0.0f, 0x1.61d59ap-44f, 0.0f, 0x1.296344p-8f, 0.0f,
     0x1.c9d0d8p-66f, 0.0f, 0x1.9f112p-50f, 0x1.b93ecap-90f, 0x1.33fa5ap-110f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e39f84p-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d1cdfap-72f, 0.0f, 0.0f, 0x1.ebdd8ap-39f, 0.0f, 0x1.7a61b6p-116f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.5c106p-117f, 0.0f, 0x1.3802cep-25f, 0.0f, 0.0f, 0.0f,
     0x1.8e2af6p-6f, 0.0f, 0x1.cb490ap-112f, 0x1.2d115ap-5f, 0.0f, 0x1.62318ep-96f,
     0.0f, 0x1.f51682p-27f, 0x1.761d6p-21f, 0.0f, 0x1.94c60cp-117f, 0x1.e9224cp-26f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.6d348cp-42f, 0.0f, 0x1.049022p-10f, 0x1.43e3cap-100f,
     0x1.2f1c3ep-33f, 0x1.715924p-6f, 0.0f, 0x1.6e6cd6p-42f, 0x1.01d44ep-99f, 0.0f,
     0x1.97dcb6p-20f, 0.0f, 0.0f, 0x1.e73184p-118f, 0.0f, 0x1.ca8b32p-118f, 0.0f,
     0x1.70f9fep-117f, 0x1.25ab5ep-52f, 0x1.b2c334p-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.19e742p-5f, 0x1.16f6d4p-71f, 0.0f, 0x1.c3bda8p-15f, 0.0f, 0.0f,
     0x1.a63e6ep-46f, 0.0f, 0x1.1c029cp-96f, 0.0f, 0x1.f24136p-121f, 0x1.5fd67cp-10f,
     0x1.ae2838p-98f, 0.0f, 0.0f, 0.0f, 0x1.d7ac2ap-109f, 0x1.e88ddcp-26f, 0.0f, 0.0f,
     0x1.0fed32p-92f, 0x1.0d257ep-30f, 0x1.efa584p-80f, 0.0f, 0.0f, 0.0f,
     0x1.6f010ap-6f, 0x1.4a0064p-41f, 0.0f, 0.0f, 0x1.c9981ap-24f, 0x1.76dc44p-121f,
     0x1.7472d4p-58f, 0x1.61fd74p-117f, 0x1.8fc11cp-123f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.759a4p-62f, 0.0f, 0.0f, 0x1.34900ep-101f, 0x1.13cf0ep-117f, 0x1.43841ap-111f,
     0.0f, 0.0f, 0.0f, 0x1.c06376p-31f, 0.0f, 0x1.7a7f7ap-22f, 0.0f, 0x1.43e722p-89f,
     0x1.45c1e8p-119f, 0.0f, 0.0f, 0x1.60acecp-62f, 0.0f, 0x1.db8a18p-81f,
     0x1.55c9dcp-89f, 0x1.218648p-12f, 0x1.3172f2p-65f, 0x1.79a052p-100f,
     0x1.005666p-15f, 0.0f, 0.0f, 0x1.ce5a72p-110f, 0.0f, 0x1.2437bp-67f,
     0x1.ec00d2p-25f, 0.0f, 0x1.f15be2p-19f, 0.0f, 0.0f, 0x1.31a0f6p-119f, 0.0f,
     0x1.61b2f2p-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fc1f5ep-104f,
     0x1.eb3054p-28f, 0.0f, 0x1.6996cep-63f, 0.0f, 0.0f, 0x1.9b449p-39f, 0.0f,
     0x1.26b862p-27f, 0.0f, 0x1.d4e2aap-2f, 0.0f, 0.0f, 0x1.12cafp-80f,
     0x1.33212p-105f, 0.0f, 0x1.d1fcc8p-97f, 0.0f, 0x1.cfe4e8p-19f, 0.0f, 0.0f, 0.0f,
     0x1.d34bc6p-43f, 0x1.6fd3b2p-76f, 0.0f, 0x1.384834p-51f, 0.0f, 0x1.7bf2aap-81f,
     0.0f, 0x1.0add5ep-79f, 0.0f, 0.0f, 0x1.25645p-40f, 0.0f, 0.0f, 0x1.725ea2p-118f,
     0x1.9a04c6p-120f, 0x1.08cb0ap-7f, 0x1.469256p-126f, 0.0f, 0x1.2b162ap-54f,
     0x1.acb438p-43f, 0.0f, 0x1.519306p-62f, 0.0f, 0x1.3d21e2p-71f, 0x1.6caf18p-118f,
     0.0f, 0.0f, 0.0f, 0x1.9023cep-31f, 0x1.d3a488p-55f, 0x1.e6946cp-112f,
     0x1.e1312ep-86f, 0.0f, 0.0f, 0.0f, 0x1.315482p-15f, 0x1.237666p-119f,
     0x1.2a22acp-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.15a4dp-66f, 0.0f, 0.0f,
     0x1.bd24dp-104f, 0.0f, 0x1.d2b944p-1f, 0x1.5e75aap-10f, 0.0f, 0x1.c6a20ap-120f,
     0.0f, 0.0f, 0x1.bae06cp-50f, 0.0f, 0x1.44060ep-88f, 0.0f, 0x1.81af14p-25f, 0.0f,
     0x1.08b908p-47f, 0x1.9781aap-45f, 0.0f, 0x1.d10a74p-86f, 0.0f, 0x1.0ad196p-89f,
     0x1.075362p-42f, 0.0f, 0.0f, 0.0f, 0x1.df358ep-18f, 0.0f, 0x1.c11bc6p-36f, 0.0f,
     0.0f, 0x1.18ac26p-86f, 0.0f, 0x1.034a66p-107f, 0x1p0f, 0x1.ed459cp-69f,
     0x1.faf74ep-46f, 0x1.e33bc4p-17f, 0x1.2d24b8p-116f, 0x1.44676ep-61f, 0.0f, 0.0f,
     0x1.588658p-70f, 0.0f, 0.0f, 0x1.3a0524p-16f, 0.0f, 0.0f, 0x1.72078ap-51f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.0c4538p-116f, 0x1.2cba88p-87f, 0x1.69fce8p-94f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.663104p-49f, 0x1.8a2d5ep-12f, 0x1.63d7bep-97f, 0x1.121e9p-106f,
     0x1.0c38eap-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d1d0cep-61f, 0x1.c71ccep-111f,
     0x1.4757p-80f, 0.0f, 0x1.a79104p-62f, 0x1.0e4786p-101f, 0x1.cb4028p-94f, 0.0f,
     0x1.0d94c4p-65f, 0.0f, 0.0f, 0.0f, 0x1.d27118p-103f, 0.0f, 0x1.b4cbc6p-58f,
     0x1.9588fcp-91f, 0x1.89acc8p-108f, 0.0f, 0.0f, 0x1.e5c6d8p-125f, 0x1.7496cp-21f,
     0.0f, 0x1.789712p-89f, 0.0f, 0.0f, 0x1.5ac5e8p-2f, 0x1.f33f02p-27f, 0.0f, 0.0f,
     0x1.dfd0c8p-116f, 0x1.cea062p-66f, 0.0f, 0x1.46d3e4p-22f, 0.0f, 0x1.d417ep-92f,
     0x1.6b3774p-112f, 0x1.98c036p-109f, 0.0f, 0x1.567c66p-95f, 0x1.7d2b94p-92f,
     0x1.1caa0ap-101f, 0.0f, 0.0f, 0.0f, 0x1.0d1c68p-84f, 0.0f, 0.0f, 0x1.249e02p-96f,
     0.0f, 0x1.19fb76p-100f, 0x1.0f97cp-12f, 0.0f, 0x1.4542fcp-118f, 0.0f,
     0x1.0aaf32p-17f, 0.0f, 0.0f, 0x1.dae45ep-102f, 0.0f, 0.0f, 0.0f, 0x1.3ccd32p-35f,
     0x1.88b562p-115f, 0x1.b825b8p-58f, 0.0f, 0.0f, 0x1.5bb848p-5f, 0x1.10820ep-112f,
     0.0f, 0.0f, 0.0f, 0x1.c11206p-9f, 0x1.5c1478p-89f, 0x1.d4b536p-59f, 0.0f,
     0x1.1e0c88p-63f, 0.0f, 0x1.8b258ep-34f, 0x1.8a9fbep-46f, 0x1.a5a4bep-49f, 0.0f,
     0x1.497dfcp-90f, 0.0f, 0x1.ffa804p-78f, 0x1.0469dcp-102f, 0x1.a92f6p-26f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.4b0a4p-45f, 0x1.8fcb88p-99f, 0x1.fb0d6cp-120f,
     0x1.2362f6p-16f, 0x1.8cf6cp-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a01b5ap-62f,
     0.0f, 0.0f, 0x1.99f4acp-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fa64fp-124f,
     0x1.a6dc3cp-106f, 0.0f, 0.0f, 0x1.49a48ap-62f, 0.0f, 0x1.cccb24p-78f,
     0x1.c98e54p-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.03fa9ap-30f, 0.0f, 0x1.57d74cp-36f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fd27ep-57f, 0x1.42c9p-99f, 0x1.6b1f9ap-98f,
     0.0f, 0x1.70d508p-37f, 0x1.634626p-24f, 0x1.8b36c2p-97f, 0.0f, 0x1.18cbecp-126f,
     0x1.9b05d8p-111f, 0.0f, 0x1.7788b6p-53f, 0x1.5a0766p-41f, 0.0f, 0.0f,
     0x1.b1763ep-85f, 0x1.7a3f36p-123f, 0.0f, 0x1.411e64p-13f, 0x1.45b476p-7f,
     0x1.fa0ea2p-66f, 0x1.9b7fd2p-101f, 0x1.1eebbp-90f, 0x1.033df6p-89f, 0.0f,
     0x1.822072p-29f, 0x1.e7948p-69f, 0.0f, 0x1.7b8b48p-73f, 0.0f, 0.0f,
     0x1.c56d6ap-104f, 0x1.9aa1e2p-56f, 0x1.0326a4p-25f, 0x1.b14eeap-81f, 0.0f, 0.0f,
     0.0f, 0x1.be2eb8p-52f, 0x1.011feep-87f, 0x1.ad6a8cp-18f, 0x1.21fe84p-14f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.abde38p-29f, 0x1.df2c58p-73f, 0x1.189236p-113f, 0.0f,
     0x1.3590fap-113f, 0x1.aba88ep-79f, 0x1.d3cbc2p-38f, 0x1.3beba6p-15f,
     0x1.9c3128p-66f, 0.0f, 0x1.28a374p-121f, 0.0f, 0x1.aa943ep-39f, 0.0f,
     0x1.da78aap-95f, 0x1.85b7d4p-88f, 0.0f, 0x1.16c042p-42f, 0.0f, 0.0f,
     0x1.9e245p-56f, 0.0f, 0x1.817c4ep-64f, 0x1.ba0686p-95f, 0x1.98e20ap-8f, 0.0f,
     0x1.b639cp-47f, 0x1.eb4b8cp-85f, 0x1.f4abaep-83f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.36f29cp-100f, 0x1.0aac74p-3f, 0.0f, 0x1.b7f29cp-101f, 0x1.ebb06cp-102f, 0.0f,
     0x1.9b20fp-30f, 0x1.dc6412p-20f, 0x1.506c2p-40f, 0x1.c7cf4cp-67f, 0.0f, 0.0f,
     0.0f, 0x1.565b0ep-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.84a3bep-101f, 0.0f, 0.0f,
     0x1.f130c8p-95f, 0.0f, 0x1.4dc218p-8f, 0.0f, 0x1.231868p-81f, 0.0f,
     0x1.d537fep-111f, 0x1.2eb48cp-14f, 0x1.e5702cp-51f, 0x1.31b024p-72f,
     0x1.ee60dp-114f, 0x1.1998fp-55f, 0.0f, 0x1.32887ep-95f, 0x1.6e685ap-100f, 0.0f,
     0x1.c80b38p-26f, 0.0f, 0x1.ac544ep-70f
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
            tmp1 = Sleef_sinhf4_u35avx2128(tmp0);
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
    printf("Sleef_sinhf4_u35avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_sinhf4_u35avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
