/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_atanf4_u10avx2128.c --function Sleef_atanf4_u10avx2128 \
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
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.466b46p-5f, 0.0f, 0x1.6ccc0ep-108f,
     0x1.73a0e2p-103f, 0.0f, 0.0f, 0x1.972e68p-123f, 0x1.c0dfdap-31f, 0x1.2dae14p-95f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f112fp-4f, 0x1.02e936p-59f, 0x1.18bf52p-48f,
     0x1.39143p-118f, 0x1.4edap-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c7e1b2p-45f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a5bb62p-71f, 0.0f, 0x1.d9b8ep-33f, 0x1.6e73e2p-110f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3b87bap-12f, 0.0f, 0.0f, 0x1.6e8ebp-97f,
     0x1.55755cp-44f, 0x1.32ccd8p-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8451b2p-58f, 0.0f,
     0.0f, 0x1.a45aaap-62f, 0.0f, 0x1.0ed2dp-15f, 0x1.ffdaeap-108f, 0.0f,
     0x1.1c1cccp-87f, 0.0f, 0.0f, 0x1.b29212p-19f, 0.0f, 0x1.3de362p-61f, 0.0f,
     0x1.6ae64ap-31f, 0.0f, 0.0f, 0x1.e1041cp-4f, 0x1.8964a4p-86f, 0x1.c18d9cp-5f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6bbde6p-18f, 0.0f, 0.0f, 0x1.8d6ad2p-73f, 0.0f,
     0x1.7d4b06p-57f, 0x1.3d727ep-58f, 0x1.f0753ep-86f, 0x1.c972e4p-82f,
     0x1.c2ba9cp-31f, 0.0f, 0.0f, 0x1.a3e23ep-15f, 0.0f, 0.0f, 0x1.929eacp-77f, 0.0f,
     0.0f, 0x1.30de5ap-37f, 0x1.58d036p-76f, 0x1.9776d6p-34f, 0x1.0799dep-37f, 0.0f,
     0x1.af0bc6p-120f, 0.0f, 0.0f, 0x1.cde1aap-79f, 0x1.4f6914p-2f, 0x1.4d455ap-10f,
     0.0f, 0x1.e0bad6p-93f, 0.0f, 0.0f, 0x1.a29604p-61f, 0x1.dff17ep-67f, 0.0f, 0.0f,
     0x1.1ccc6ep-113f, 0.0f, 0.0f, 0.0f, 0x1.2ec5eep-8f, 0x1.fa6afp-17f,
     0x1.fd4352p-101f, 0.0f, 0.0f, 0x1.57580cp-95f, 0.0f, 0x1.46c436p-31f,
     0x1.a5ecdp-57f, 0x1.760e6cp-62f, 0.0f, 0.0f, 0x1.837e76p-49f, 0.0f, 0.0f,
     0x1.51e6e6p-52f, 0x1.d3a432p-59f, 0x1.c36daap-121f, 0x1.fd14dap-17f, 0.0f,
     0x1.303882p-116f, 0.0f, 0x1.accf64p-44f, 0x1.341d32p-55f, 0x1.2ea416p-62f,
     0x1.e1075ep-28f, 0x1.1e885cp-81f, 0x1.e35148p-107f, 0.0f, 0x1.e7436p-36f,
     0x1.5e741cp-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6f02dcp-11f, 0x1.301116p-108f, 0.0f,
     0.0f, 0x1.b4b338p-62f, 0x1.6f7fc2p-11f, 0x1.770e9p-63f, 0x1.c545a6p-81f,
     0x1.a97ea2p-72f, 0x1p0f, 0.0f, 0x1.3a8824p-19f, 0.0f, 0x1.059564p-46f,
     0x1.ed44cp-110f, 0.0f, 0x1.3fcf24p-109f, 0x1.aea3fp-60f, 0x1.33ad86p-99f,
     0x1.3cfa58p-126f, 0x1.52079p-76f, 0.0f, 0x1.f423e4p-111f, 0x1.249164p-34f, 0.0f,
     0x1.6de0cp-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a395a4p-14f, 0.0f,
     0x1.1948dap-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0ce886p-19f, 0x1.e27076p-22f,
     0x1.68b65ep-17f, 0.0f, 0x1.800f76p-109f, 0.0f, 0.0f, 0x1.a8364cp-80f,
     0x1.ddf214p-65f, 0x1.040b9ap-61f, 0x1.9cbf0cp-87f, 0.0f, 0x1.06977cp-119f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.382e06p-122f, 0.0f, 0x1.b2907cp-125f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.cc67b8p-67f, 0.0f, 0.0f, 0.0f, 0x1.d46c4cp-24f, 0x1.8a6396p-12f, 0.0f,
     0x1.0b5fecp-17f, 0x1.8b947ap-38f, 0.0f, 0.0f, 0x1.494fcp-12f, 0.0f, 0.0f, 0.0f,
     0x1.085232p-112f, 0x1.1cb13cp-66f, 0.0f, 0.0f, 0x1.1f2d1cp-54f, 0x1.267fbcp-65f,
     0x1.38d152p-48f, 0.0f, 0x1.13cb4p-68f, 0x1.e740dp-48f, 0x1.bb5f4ap-46f,
     0x1.1c246ep-51f, 0.0f, 0x1.b10012p-28f, 0.0f, 0.0f, 0x1.c0b998p-93f,
     0x1.c003a2p-98f, 0.0f, 0x1.e1ca0cp-51f, 0x1.ba5c6ep-36f, 0x1.9822e6p-113f,
     0x1.d3cc2cp-95f, 0x1.8939bp-123f, 0.0f, 0x1.25ec4cp-90f, 0x1.5ced7ap-7f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.5fc7b4p-68f, 0.0f, 0x1.e14e7ap-106f, 0x1.5d65a2p-98f,
     0x1.02594ap-6f, 0.0f, 0.0f, 0x1.44a3b6p-28f, 0x1.82542ap-64f, 0.0f, 0.0f,
     0x1.89ee88p-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e15bf8p-122f, 0.0f, 0x1.f3c80cp-124f, 0.0f, 0x1.cf4a06p-85f,
     0x1.ac8794p-115f, 0.0f, 0.0f, 0x1.0fbd2ep-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.7635b6p-112f, 0x1.874b94p-8f, 0.0f, 0x1.aa4488p-17f, 0.0f,
     0x1.898b34p-23f, 0.0f, 0.0f, 0x1.35d666p-27f, 0.0f, 0.0f, 0x1.8b2bb8p-93f, 0.0f,
     0x1.5bbbf4p-2f, 0.0f, 0x1.f81702p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.3423d4p-104f, 0.0f, 0.0f, 0x1.6c541cp-64f, 0x1.c86366p-98f,
     0.0f, 0.0f, 0x1.d35dc6p-37f, 0x1.ec274ap-64f, 0x1.0cf8b2p-17f, 0x1.a40f54p-79f,
     0.0f, 0.0f, 0x1.d435aap-3f, 0.0f, 0x1.863622p-93f, 0x1.8822d2p-109f, 0.0f,
     0x1.13ba1p-76f, 0x1.acd856p-12f, 0x1.5ccb56p-93f, 0x1.b0da72p-4f, 0x1.9f8be6p-1f,
     0x1.e54ea2p-14f, 0x1.5a1338p-1f, 0x1.c122a2p-117f, 0.0f, 0.0f, 0x1.bc8944p-41f,
     0.0f, 0.0f, 0.0f, 0x1.063aa2p-117f, 0x1.e8c628p-108f, 0x1.9897eap-88f,
     0x1.1e01dep-63f, 0x1.647f28p-117f, 0x1.9bace8p-49f, 0.0f, 0x1.c98a9p-63f, 0.0f,
     0.0f, 0x1.47c0c4p-104f, 0.0f, 0.0f, 0.0f, 0x1.fe05acp-32f, 0.0f, 0x1.768204p-47f,
     0.0f, 0.0f, 0x1.089458p-105f, 0.0f, 0x1.9328e2p-46f, 0x1.5e7b08p-50f, 0.0f,
     0x1.5fd066p-88f, 0x1.397ca2p-122f, 0.0f, 0x1.fa1c38p-51f, 0.0f, 0.0f,
     0x1.aca1aep-98f, 0x1.aa0288p-35f, 0x1.295224p-39f, 0x1.0ec0f4p-107f, 0.0f, 0.0f,
     0.0f, 0x1.db188ep-102f, 0.0f, 0x1.67b2bep-126f, 0.0f, 0x1.7ed6ecp-85f,
     0x1.4ac4dcp-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4a2494p-122f, 0.0f,
     0x1.813bdap-25f, 0.0f, 0x1.21745p-88f, 0.0f, 0.0f, 0x1.ea9536p-122f,
     0x1.2fe36ap-65f, 0x1.d4ae86p-99f, 0x1.b2553cp-63f, 0x1.904496p-46f, 0.0f, 0.0f,
     0x1.48d164p-40f, 0.0f, 0.0f, 0.0f, 0x1.64de22p-68f, 0x1.7f49f6p-84f,
     0x1.7cd4f6p-66f, 0.0f, 0.0f, 0.0f, 0x1.3fb7e6p-90f, 0.0f, 0x1.0bc47ep-62f,
     0x1.42e59ap-2f, 0x1.9f3082p-3f, 0x1.71e804p-120f, 0.0f, 0.0f, 0x1.31c0f6p-104f,
     0x1.4041dcp-68f, 0x1.c35deap-69f, 0x1.3f8d58p-63f, 0x1.289108p-54f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.83f32ap-21f, 0x1.5692fep-111f, 0x1.4e62dcp-43f,
     0x1.9433f8p-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.53b9a8p-123f, 0.0f,
     0x1.7dff44p-1f, 0x1.dd365ap-65f, 0x1.48dc48p-116f, 0x1.2b405ep-90f,
     0x1.c7c916p-117f, 0.0f, 0.0f, 0x1.11f108p-31f, 0.0f, 0x1.52df8cp-3f,
     0x1.22597p-67f, 0x1.83420ep-117f, 0.0f, 0.0f, 0.0f, 0x1.7c7d94p-10f,
     0x1.731cbep-125f, 0x1.853e82p-65f, 0x1.224682p-93f, 0.0f, 0.0f, 0x1.a1c33ep-15f,
     0.0f, 0x1.f82568p-58f, 0.0f, 0x1.84399ap-66f, 0x1.7b134ap-30f, 0.0f,
     0x1.c88c62p-45f, 0x1.752a3ap-121f, 0.0f, 0x1.a0485ap-23f, 0x1.fbb916p-88f,
     0x1.7b754ep-101f, 0x1.86e658p-33f, 0.0f, 0x1.85a672p-8f, 0x1.e6f02cp-34f, 0.0f,
     0.0f, 0x1.700074p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.defddcp-94f, 0.0f,
     0x1.1c6eccp-73f, 0.0f, 0x1.c918f6p-79f, 0.0f, 0x1.b77bf6p-10f, 0x1.cf2bd2p-111f,
     0.0f, 0x1.b4a568p-14f, 0x1.9b06ecp-42f, 0x1.2a7666p-42f, 0.0f, 0x1.032cd4p-49f,
     0x1.f35e4ap-116f, 0.0f, 0.0f, 0.0f, 0x1.da6524p-51f, 0x1.75014cp-30f, 0.0f, 0.0f,
     0x1.1ce3b4p-18f, 0.0f, 0.0f, 0x1.eceeep-86f, 0x1.f64dc4p-125f, 0.0f,
     0x1.604a78p-118f, 0.0f, 0x1.60cee2p-69f, 0x1.218152p-5f, 0.0f, 0.0f, 0.0f,
     0x1.f87e0ep-69f, 0x1.4ce9eap-74f, 0.0f, 0x1.d5872ap-64f, 0x1.6020fcp-64f, 0.0f,
     0x1.d0961ap-78f, 0x1.c8aa88p-126f, 0x1.7af5dap-30f, 0.0f, 0x1.243d3ep-21f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c3ee26p-11f, 0x1.7bc69ap-12f, 0x1.0db564p-90f,
     0.0f, 0x1.91c44cp-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d65abep-103f, 0.0f, 0.0f,
     0x1.71ef82p-85f, 0x1.c91352p-100f, 0x1.82fe46p-60f, 0.0f, 0.0f, 0.0f,
     0x1.cc60aap-126f, 0.0f, 0x1.e662ap-10f, 0.0f, 0.0f, 0x1.1c1cc4p-121f, 0.0f,
     0x1.d60fbep-1f, 0.0f, 0x1.de0454p-105f, 0.0f, 0.0f, 0.0f, 0x1.e5d6a8p-126f, 0.0f,
     0.0f, 0.0f, 0x1.a50476p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.410574p-55f, 0.0f,
     0x1.3ced7p-94f, 0x1p0f, 0x1.41aadp-116f, 0.0f, 0.0f, 0.0f, 0x1.9eb59p-31f,
     0x1.db430ap-95f, 0.0f, 0x1.8d886cp-68f, 0.0f, 0x1.28f776p-69f, 0.0f,
     0x1.72e374p-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bf2c0ap-107f,
     0x1.f3bc9ep-25f, 0.0f, 0x1.a856eep-22f, 0.0f, 0x1.30eabp-43f, 0.0f,
     0x1.fb213cp-57f, 0x1.3ef326p-112f, 0.0f, 0x1.ec58cap-67f, 0x1.01401p-119f, 0.0f,
     0x1.523356p-118f, 0x1.1f599ap-3f, 0.0f, 0x1.118108p-59f, 0x1.7d5364p-40f,
     0x1.09584ap-111f, 0x1.1de592p-73f, 0.0f, 0.0f, 0x1.e1c292p-27f, 0.0f,
     0x1.2d3536p-123f, 0x1.596a22p-108f, 0x1.c025d2p-83f, 0.0f, 0.0f,
     0x1.ec6254p-124f, 0.0f, 0x1.39b604p-49f, 0x1.3437e6p-55f, 0x1.cd2c2ep-18f,
     0x1.dca2bap-99f, 0.0f, 0.0f, 0x1.adbccep-51f, 0x1.69beaap-32f, 0.0f, 0.0f, 0.0f,
     0x1.bf727ep-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ad0594p-44f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6f8b16p-30f, 0.0f, 0.0f, 0x1.c63e54p-6f,
     0.0f, 0x1.8c4882p-85f, 0.0f, 0.0f, 0x1.fb3e42p-106f, 0x1.fbaf14p-11f, 0.0f,
     0x1.38d5fp-20f, 0x1.095ea2p-123f, 0.0f, 0x1.15c55cp-71f, 0.0f, 0x1.368564p-104f,
     0.0f, 0x1.5d2db6p-41f, 0.0f, 0x1.1d65acp-6f, 0x1.68c5e6p-122f, 0.0f,
     0x1.a57188p-23f, 0x1.bf7fe8p-107f, 0x1.535884p-75f, 0x1.edcf0ap-123f,
     0x1.2fc4e8p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.459498p-83f, 0x1.bbf72ap-5f,
     0x1.07f1bep-67f, 0.0f, 0x1.4d3a0cp-114f, 0x1.e8bd4p-92f, 0x1.535554p-43f,
     0x1.de6da4p-49f, 0.0f, 0x1.312052p-89f, 0x1.7ab21cp-92f, 0.0f, 0x1.87d3bp-126f,
     0.0f, 0x1.57afeep-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.49d104p-106f,
     0x1.bb71fp-5f, 0.0f, 0x1.fc07b4p-16f, 0x1.1c0402p-116f, 0x1.15f51ep-51f,
     0x1.9e298cp-10f, 0x1.fb08b4p-57f, 0x1.e17908p-60f, 0x1.f21046p-16f, 0.0f,
     0x1.93006ap-126f, 0x1.61f1d4p-62f, 0x1.d3a894p-116f, 0x1.a9468ap-95f,
     0x1.73579p-87f, 0.0f, 0x1.fdb2aap-61f, 0x1.1043cp-67f, 0x1.0c2f9ap-91f, 0.0f,
     0x1.9899c2p-29f, 0x1.2a165ep-30f, 0x1.939a18p-111f, 0.0f, 0x1.df3d4ap-84f, 0.0f,
     0x1.526ed2p-93f, 0x1.c3b6eep-109f, 0.0f, 0x1.830ce2p-81f, 0x1.73af26p-116f,
     0x1.015112p-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.44ead8p-48f, 0x1.694212p-81f, 0.0f,
     0.0f, 0x1.a89042p-103f, 0x1.5e60a2p-1f, 0x1.726696p-41f, 0.0f, 0.0f,
     0x1.9d9124p-18f, 0x1.81631ap-62f, 0x1.316ad2p-73f, 0x1.212952p-124f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.2036b4p-105f, 0x1.b0a01ap-29f, 0.0f, 0x1.6fec9p-14f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c1f6acp-121f, 0x1.b5df32p-104f, 0x1.27666ap-4f,
     0x1.d508a2p-12f, 0.0f, 0x1.9acb2ep-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3f7c1p-108f,
     0.0f, 0x1.f6334ep-74f, 0x1.e06dd2p-5f, 0x1.d03a1cp-108f, 0x1.60f928p-71f, 0.0f,
     0x1.a82f4p-23f, 0x1.e8724cp-123f, 0.0f, 0x1.6bdf12p-19f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.700ddp-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dce5cep-18f, 0x1.3d1e18p-99f,
     0x1.4fe566p-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b860d8p-91f, 0x1.313212p-113f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.83556cp-32f, 0.0f, 0x1.11d63cp-70f, 0.0f, 0x1.4331b4p-75f,
     0x1.e57a4p-47f, 0x1.79da5ap-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d206cap-3f, 0.0f, 0x1.dbf8cap-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.10423ep-2f, 0x1.e1b38p-86f, 0.0f, 0x1.95b8cap-105f, 0x1.02cc1p-86f, 0.0f,
     0.0f, 0x1.8459ecp-53f, 0x1.330716p-112f, 0.0f, 0x1.e80f32p-112f, 0.0f,
     0x1.d6d05cp-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.04878cp-68f,
     0x1.baa49cp-35f, 0x1.1fcda6p-112f, 0x1.0dc056p-24f, 0.0f, 0.0f, 0x1.b1b6dp-107f,
     0.0f, 0.0f, 0.0f, 0x1.3fbd3ap-77f, 0x1.6224b4p-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7c013cp-125f, 0x1.a69f84p-13f, 0.0f, 0.0f, 0x1.ae7a1ep-43f, 0x1.2ad3cep-82f,
     0x1.32eca2p-17f, 0x1.ddae62p-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9a0ffcp-96f,
     0.0f, 0x1.b6dce8p-42f, 0.0f, 0.0f, 0.0f, 0x1.32cb3ap-27f, 0x1.be01fap-75f, 0.0f,
     0.0f, 0.0f, 0x1.ca852ep-105f, 0x1.0e8fbp-101f, 0.0f, 0.0f, 0x1.6e7464p-32f,
     0x1.ea931p-76f, 0x1.d9562ep-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fb0636p-80f,
     0x1.321aeap-9f, 0x1.1c5ea2p-45f, 0.0f, 0x1.d6a93ap-16f, 0x1.471948p-13f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.47fd06p-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d8392ep-11f,
     0x1.59756cp-25f, 0.0f, 0.0f, 0x1.96c14ap-52f, 0x1.493e64p-57f, 0.0f, 0.0f,
     0x1.a51d52p-35f, 0.0f, 0x1.3db5c4p-12f, 0.0f, 0.0f, 0.0f, 0x1.96546cp-89f, 0.0f,
     0.0f, 0.0f, 0x1.886432p-108f, 0.0f, 0.0f, 0.0f, 0x1.2c66bp-82f, 0x1.80cffp-1f,
     0x1.3fda8ap-97f, 0.0f, 0.0f, 0x1.64a2b2p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6abad8p-106f, 0.0f, 0.0f, 0x1.b33ff4p-120f, 0x1.317bap-81f, 0.0f,
     0x1.f225fep-4f, 0.0f, 0.0f, 0x1.65be8ap-16f, 0x1.5ce212p-96f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.4a52cep-54f, 0x1.e5c6c6p-100f, 0x1.ca8cfcp-108f, 0x1.714afep-64f, 0.0f,
     0x1.46a6a8p-28f, 0x1.0ba9p-56f, 0.0f, 0x1.4b2178p-70f, 0x1.b441bep-70f,
     0x1.53f9bep-67f, 0.0f, 0.0f, 0.0f, 0.0f
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
            tmp1 = Sleef_atanf4_u10avx2128(tmp0);
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
    printf("Sleef_atanf4_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_atanf4_u10avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
