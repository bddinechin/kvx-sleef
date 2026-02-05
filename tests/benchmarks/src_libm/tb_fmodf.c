/**
 * generated using metalibm 1.1
 * sha1 git: b'"3425a70973ff93e510359b9b2fa45754ebf43279"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_fmodf.c --function fmodf --arity 2 --headers \
 *     math.h,ml_support_lib.h --input-formats binary32,binary32 --bench \
 *     --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <math.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile float external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0.0f, 0x1.1ffefcp-46f, 0.0f, 0x1.ab82f4p-45f, 0.0f, 0x1.a305d2p-72f, 0.0f, 0.0f,
     0x1.88e368p-3f, 0.0f, 0x1.d83ed6p-91f, 0x1.f6e698p-98f, 0x1.31e9d4p-108f,
     0x1.418de8p-5f, 0.0f, 0.0f, 0.0f, 0x1.0acbc2p-57f, 0x1.4be06p-87f, 0.0f, 0.0f,
     0x1.0a8ca8p-31f, 0.0f, 0x1.c7a086p-49f, 0x1.078b38p-103f, 0x1.78bd6ep-124f, 0.0f,
     0x1.742fd4p-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.01c16p-66f, 0.0f, 0x1.86d23ep-59f,
     0x1.dc3b0ap-33f, 0.0f, 0x1.750a3ep-86f, 0.0f, 0x1.7b25b4p-15f, 0.0f,
     0x1.ad196cp-83f, 0.0f, 0.0f, 0x1.bb4e1ep-122f, 0x1.47052ap-21f, 0.0f,
     0x1.a4375cp-103f, 0x1.09c438p-105f, 0.0f, 0x1.1de9c8p-90f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b4b4b6p-64f, 0x1.dd01c2p-23f, 0x1.e2789cp-58f, 0x1.59544p-63f,
     0x1.d2a902p-83f, 0.0f, 0x1.2c548p-103f, 0x1.b58064p-47f, 0x1.a7ae74p-67f,
     0x1.fdd07ap-43f, 0.0f, 0x1.2b654p-92f, 0.0f, 0x1.ebe96cp-102f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a2cc0ep-52f, 0x1.49e78ap-97f, 0x1.d97bf4p-124f,
     0x1.50662ep-11f, 0.0f, 0x1.97613p-89f, 0x1.ed1d88p-40f, 0x1.0c74fep-68f, 0.0f,
     0.0f, 0.0f, 0x1.e9a474p-84f, 0.0f, 0x1.82dcb2p-91f, 0.0f, 0.0f, 0x1.3e5ca8p-11f,
     0x1.d5fbdap-43f, 0.0f, 0.0f, 0x1.d4b1c2p-34f, 0x1.ca782p-79f, 0x1.4f9a72p-30f,
     0.0f, 0x1.8d4d12p-104f, 0.0f, 0.0f, 0x1.cdbd72p-81f, 0x1.f88978p-90f,
     0x1.0a3f64p-74f, 0.0f, 0x1.0cb09ap-39f, 0x1.32e6cep-44f, 0x1.431858p-49f,
     0x1.b684a6p-51f, 0.0f, 0x1.761278p-86f, 0x1.a33fa6p-49f, 0x1.4da458p-107f, 0.0f,
     0x1.ff716ep-78f, 0.0f, 0x1.faa9f6p-37f, 0.0f, 0x1.a2a464p-54f, 0.0f, 0.0f, 0.0f,
     0x1.4d76c8p-52f, 0x1.e48ecap-26f, 0.0f, 0.0f, 0x1.c0d678p-118f, 0.0f,
     0x1.55a326p-14f, 0.0f, 0.0f, 0x1.2cc8dp-42f, 0.0f, 0.0f, 0x1.e26e0cp-63f, 0.0f,
     0.0f, 0x1.7433a2p-29f, 0.0f, 0.0f, 0x1.0bb7dap-125f, 0x1.a232a6p-62f, 0.0f,
     0x1.b04046p-59f, 0x1.bf03aap-7f, 0x1.ca304cp-119f, 0.0f, 0.0f, 0.0f,
     0x1.bee0a4p-121f, 0.0f, 0x1.61356p-104f, 0.0f, 0.0f, 0x1.19810ep-31f,
     0x1.419da6p-103f, 0x1.dc298cp-3f, 0x1.cbd714p-62f, 0x1.0e81a8p-101f,
     0x1.828a9p-106f, 0x1p0f, 0x1.8d9de8p-34f, 0x1.86a704p-59f, 0.0f, 0.0f,
     0x1.9db5d6p-75f, 0.0f, 0.0f, 0.0f, 0x1.c3e314p-123f, 0.0f, 0x1.22bcf4p-94f, 0.0f,
     0.0f, 0.0f, 0x1.76940cp-109f, 0x1.0b0a7cp-1f, 0x1.464bdap-41f, 0.0f,
     0x1.692dfep-71f, 0.0f, 0.0f, 0x1.e79932p-105f, 0x1.322f98p-40f, 0x1.c65caap-54f,
     0x1.77065cp-62f, 0x1.96ed98p-14f, 0x1.f1950ap-47f, 0.0f, 0x1.63659ep-92f,
     0x1.a86ca6p-56f, 0.0f, 0.0f, 0.0f, 0x1.158916p-71f, 0.0f, 0x1.ab8cd2p-122f, 0.0f,
     0x1.56cf12p-60f, 0x1.455872p-106f, 0.0f, 0x1.ace80cp-98f, 0.0f, 0x1.2e473ep-78f,
     0.0f, 0x1.1ea95p-76f, 0x1.70196p-36f, 0x1.825aecp-80f, 0x1.0a29eep-88f, 0.0f,
     0x1.ee9b5p-96f, 0x1.409178p-53f, 0.0f, 0x1.8a9fa6p-6f, 0x1.de036p-56f,
     0x1.131dd2p-105f, 0x1.09d00ap-64f, 0.0f, 0x1.3da548p-83f, 0x1.68049p-123f, 0.0f,
     0x1.20b992p-71f, 0x1.61452ap-47f, 0x1.381e3ep-44f, 0.0f, 0x1.d5d726p-63f,
     0x1.311a98p-29f, 0x1.ea464ap-37f, 0.0f, 0x1.f04108p-31f, 0x1.865daep-22f, 0.0f,
     0x1.4f0744p-96f, 0.0f, 0x1.454ef2p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.da17cep-122f,
     0x1.37efe4p-96f, 0.0f, 0x1.12026cp-37f, 0x1.fb6c5ap-83f, 0.0f, 0.0f,
     0x1.22dffap-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0df212p-80f, 0x1.f1170ep-87f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9aa53p-30f, 0x1.55c4cp-58f, 0x1.f7d2b6p-48f,
     0x1.db2e0cp-78f, 0x1.312ad6p-40f, 0.0f, 0.0f, 0.0f, 0x1.48b228p-78f,
     0x1.123f96p-59f, 0.0f, 0.0f, 0x1.93a818p-4f, 0x1.bfd39cp-90f, 0x1.dfc412p-108f,
     0x1.9dc166p-80f, 0.0f, 0x1.44d688p-67f, 0x1.5247a6p-75f, 0.0f, 0x1.1ab826p-45f,
     0.0f, 0x1.89d526p-85f, 0.0f, 0x1.7b681cp-8f, 0x1.175de6p-57f, 0x1.ac9p-36f, 0.0f,
     0.0f, 0x1.100e72p-70f, 0x1.08e838p-15f, 0x1.736e2cp-61f, 0x1.c404e2p-26f, 0.0f,
     0.0f, 0x1.bbc8fap-53f, 0.0f, 0x1.4ed04p-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f25814p-98f, 0x1.c666fap-1f, 0.0f, 0x1.38907p-111f, 0.0f, 0x1.81b2b8p-101f,
     0.0f, 0.0f, 0x1.a1c55ap-109f, 0x1.3e55e6p-36f, 0.0f, 0x1.8bc1b2p-48f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.71c4e4p-21f, 0.0f, 0x1.ce14dap-26f, 0x1.b153b8p-22f, 0.0f,
     0x1.33f28ep-102f, 0.0f, 0.0f, 0x1.8de932p-21f, 0x1.c0f47cp-113f, 0x1.fe4fa6p-81f,
     0.0f, 0.0f, 0.0f, 0x1.550a0ep-105f, 0x1.7c10b6p-3f, 0.0f, 0x1.e98302p-94f, 0.0f,
     0x1.4849d2p-76f, 0.0f, 0x1.b066ccp-13f, 0.0f, 0x1.876f34p-3f, 0x1.9a2eb6p-126f,
     0x1.5dd41ep-74f, 0.0f, 0.0f, 0x1.81b1e6p-102f, 0x1.90b77ep-34f, 0.0f, 0.0f, 0.0f,
     0x1.a753a8p-13f, 0x1.271f76p-101f, 0x1.a0991p-32f, 0x1.cc4996p-80f, 0.0f,
     0x1.a0b6b6p-29f, 0.0f, 0.0f, 0x1.94bc86p-10f, 0.0f, 0.0f, 0x1.8ead48p-10f, 0.0f,
     0.0f, 0x1.846c22p-89f, 0x1.d5964ep-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cb75b2p-92f,
     0.0f, 0x1.136274p-123f, 0.0f, 0x1.d28f38p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.cecd5ap-90f, 0.0f, 0.0f, 0x1.766392p-62f,
     0x1.0b6ecap-88f, 0.0f, 0x1.bc8ff6p-8f, 0.0f, 0x1.6a90f8p-78f, 0.0f, 0.0f, 0.0f,
     0x1.d4f79ep-81f, 0x1.b99c32p-81f, 0.0f, 0x1.ad9a18p-80f, 0x1.617d3ep-4f, 0.0f,
     0x1.1e654ep-90f, 0x1.b60c4cp-72f, 0.0f, 0.0f, 0x1.8a70ep-121f, 0x1.629b16p-109f,
     0x1.13fbc6p-89f, 0x1.76b4acp-72f, 0.0f, 0x1.7c808ap-8f, 0x1.97f62ap-43f, 0.0f,
     0.0f, 0x1.0fd1acp-48f, 0.0f, 0.0f, 0x1.c2c2dp-79f, 0.0f, 0x1.5ca414p-49f,
     0x1.3d2b7ep-82f, 0x1.870684p-22f, 0x1.06596ep-105f, 0.0f, 0x1.e3efeap-43f, 0.0f,
     0x1.68efd2p-90f, 0x1.3e0c8cp-126f, 0.0f, 0.0f, 0.0f, 0x1.8d69eap-20f,
     0x1.7e256cp-73f, 0x1.d92234p-16f, 0.0f, 0.0f, 0x1.82ff2cp-70f, 0x1.893408p-99f,
     0.0f, 0.0f, 0.0f, 0x1.4ea00cp-125f, 0x1.4069acp-54f, 0.0f, 0.0f, 0x1.41e57ep-80f,
     0x1.f2cc2ep-20f, 0.0f, 0.0f, 0.0f, 0x1.b91ed6p-82f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ccf2c2p-103f, 0.0f, 0.0f, 0x1.f3460cp-64f, 0.0f, 0.0f, 0x1.2601b4p-23f,
     0x1.150934p-23f, 0x1.01e714p-98f, 0x1.03d1d8p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.11697ap-39f, 0x1.1a64c6p-60f, 0.0f, 0.0f, 0.0f, 0x1.9e8a0ep-118f,
     0x1.66ce1ep-116f, 0.0f, 0x1.efef3cp-84f, 0.0f, 0x1.4f7e58p-28f, 0x1.a31eecp-104f,
     0x1.807ed4p-44f, 0.0f, 0x1.d6cedcp-48f, 0.0f, 0.0f, 0.0f, 0x1.1045d4p-9f, 0.0f,
     0x1.f5163ep-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.aba5e4p-51f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.32a9e4p-92f, 0x1.da3b1ap-66f, 0.0f, 0x1.b84e5p-58f, 0.0f, 0.0f,
     0.0f, 0x1.af4ccap-30f, 0.0f, 0x1.7fcfd6p-36f, 0.0f, 0x1.8acb06p-125f,
     0x1.58d6dap-38f, 0x1.a9286ep-68f, 0x1.9de98p-29f, 0x1.9d25a2p-51f,
     0x1.ee8084p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b68948p-66f, 0.0f, 0x1.747af2p-35f,
     0x1.bf68d2p-12f, 0x1.470296p-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.403d12p-110f, 0x1.18a138p-48f, 0x1.d9223ep-111f, 0.0f, 0x1.3c43fap-16f,
     0x1.947c68p-78f, 0.0f, 0.0f, 0x1.d4cac8p-31f, 0x1.f85e96p-7f, 0x1.7ef8p-88f,
     0.0f, 0.0f, 0x1.d5dcacp-12f, 0.0f, 0x1.4111a2p-39f, 0.0f, 0.0f, 0x1.c8c51cp-89f,
     0x1.2f3aep-77f, 0.0f, 0.0f, 0x1.5eaec6p-62f, 0x1.4e651p-26f, 0x1.c479p-42f, 0.0f,
     0x1.ddcab2p-43f, 0x1.bc4e52p-116f, 0x1.4d6718p-48f, 0x1.9bfeccp-73f,
     0x1.928716p-13f, 0x1.405518p-63f, 0x1.8e922ap-2f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.69870cp-42f, 0x1.2bba8ap-4f, 0x1.49a34cp-124f, 0.0f, 0.0f, 0.0f,
     0x1.df2902p-36f, 0x1.3ba4dcp-53f, 0.0f, 0x1.440fep-98f, 0x1.3b6bb8p-47f,
     0x1.eb80eap-52f, 0x1.71455ap-98f, 0x1.f00cdp-70f, 0x1.4fcf8cp-8f,
     0x1.9f062ep-54f, 0x1.7e0e3ep-88f, 0.0f, 0.0f, 0x1.cdd868p-125f, 0.0f,
     0x1.9c838ap-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.21e1c8p-99f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c48a7cp-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fb90ep-121f, 0x1.79b52ap-73f, 0.0f,
     0x1.08ec96p-76f, 0.0f, 0x1.d7a75cp-46f, 0x1.e8fb8cp-103f, 0x1.76595ep-69f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a7bfa2p-28f, 0x1.f7b8d4p-107f, 0x1.bdda42p-87f, 0.0f,
     0x1.5ec26p-94f, 0.0f, 0.0f, 0.0f, 0x1.8cec5ap-51f, 0x1.b3a0fep-84f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.02d258p-108f, 0.0f, 0x1.aea9d4p-81f, 0x1.78d91cp-76f,
     0x1.295f8ap-24f, 0.0f, 0x1.555a9cp-21f, 0x1.175bfp-91f, 0.0f, 0x1.dde324p-91f,
     0.0f, 0x1.58d3eep-69f, 0x1.4ff83p-54f, 0x1.bc5514p-92f, 0x1.b881dcp-100f,
     0x1.855204p-71f, 0x1.7dcbb8p-33f, 0.0f, 0x1.fa61dp-59f, 0.0f, 0x1.69c52ep-98f,
     0.0f, 0x1.7e9a22p-41f, 0x1.6c9522p-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.79b462p-103f, 0.0f, 0x1.0e5fc6p-71f, 0.0f, 0x1.1641ecp-97f, 0x1.579678p-17f,
     0.0f, 0.0f, 0.0f, 0x1.c3fce6p-102f, 0x1.348ee6p-2f, 0x1.c264a4p-64f,
     0x1.f31a1ep-99f, 0.0f, 0.0f, 0x1.13607cp-64f, 0.0f, 0.0f, 0x1.3957ecp-97f, 0.0f,
     0.0f, 0x1.881c96p-95f, 0.0f, 0x1.c7eac4p-56f, 0x1.8a8358p-109f, 0.0f, 0.0f,
     0x1.c677e2p-123f, 0x1.1c0e1p-126f, 0x1.6502d2p-113f, 0.0f, 0x1.a1c2c2p-113f,
     0.0f, 0x1.6f45a4p-44f, 0.0f, 0x1.187692p-77f, 0x1.fd881ap-70f, 0.0f, 0.0f,
     0x1.bbf682p-101f, 0.0f, 0.0f, 0.0f, 0x1.309cd4p-13f, 0.0f, 0x1.66f696p-70f,
     0x1.9bb3fp-88f, 0x1.6c4ed8p-84f, 0x1.d95918p-37f, 0.0f, 0.0f, 0x1.ea9d1cp-23f,
     0x1.bde164p-10f, 0.0f, 0.0f, 0x1.3732cep-73f, 0x1.31c76p-93f, 0.0f,
     0x1.0aa9a2p-4f, 0x1.34aebap-71f, 0.0f, 0.0f, 0x1.b528aap-15f, 0.0f,
     0x1.6fac94p-68f, 0x1.43be8ep-115f, 0.0f, 0.0f, 0.0f, 0x1.bc065ep-52f,
     0x1.ed58ap-35f, 0x1.6d5bep-79f, 0x1.b4032ap-102f, 0.0f, 0x1.9cffd6p-82f, 0.0f,
     0x1.b200cep-6f, 0.0f, 0.0f, 0x1.355234p-53f, 0x1.59d7d4p-87f, 0x1.b81a1p-33f,
     0.0f, 0x1.c103d2p-104f, 0.0f, 0x1.392364p-106f, 0x1.2dc9fap-32f, 0x1.509e02p-63f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.71b5ccp-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.664b86p-76f,
     0x1.ee7c44p-125f, 0.0f, 0x1.bcfe88p-30f, 0x1.95e202p-8f, 0.0f, 0.0f, 0.0f,
     0x1.1ec89cp-10f, 0.0f, 0.0f, 0.0f, 0x1.b57646p-81f, 0.0f, 0x1.2d07aap-43f,
     0x1.a50348p-50f, 0.0f, 0x1.cbb1d2p-55f, 0.0f, 0x1.9959cp-92f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.60d9c6p-76f, 0x1.494416p-65f, 0x1.35ce6ep-88f, 0.0f,
     0x1.62c4f8p-46f, 0x1.15571p-118f, 0x1.f594d8p-69f, 0x1.815058p-34f,
     0x1.637d36p-86f, 0.0f, 0x1.5accfep-88f, 0x1.6d48aap-84f, 0.0f, 0x1.53298ap-26f,
     0.0f, 0x1.818934p-64f, 0x1.1cb7aep-68f, 0.0f, 0x1.fc7c72p-126f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ff02eap-62f, 0x1.7f07a4p-1f, 0x1.e0e178p-111f, 0.0f, 0.0f, 0.0f,
     0x1.43e0d6p-9f, 0x1.ca324ap-14f, 0.0f, 0.0f, 0x1.8189ecp-93f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e6d2ep-44f, 0.0f, 0x1.16dfc4p-4f, 0x1.d85fbep-11f, 0x1.305344p-60f,
     0.0f, 0.0f, 0.0f, 0x1.075ddp-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d6cb5cp-32f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cfe7f6p-99f, 0x1.d9ccf2p-10f, 0.0f,
     0x1.47b742p-13f, 0.0f, 0x1.8a0814p-35f, 0.0f, 0x1.bb4522p-43f, 0x1.d5296cp-104f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b8a7fep-43f, 0.0f, 0.0f, 0.0f,
     0x1.fa307ap-86f, 0.0f, 0x1.f1821ep-106f, 0.0f, 0x1.a383cep-110f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.84f722p-7f, 0.0f, 0.0f, 0x1.42921p-92f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ec0ca2p-25f, 0x1.27da1ep-43f, 0x1.4aaed6p-27f, 0.0f, 0x1.e4b67ep-92f,
     0x1.fce746p-59f, 0.0f, 0.0f, 0x1.bd123ep-7f, 0.0f, 0.0f, 0.0f, 0x1.c6d516p-3f,
     0.0f, 0.0f, 0x1.ca0754p-11f, 0.0f, 0x1.c27e9cp-79f, 0.0f, 0x1.6ab9c6p-14f, 0.0f,
     0.0f, 0x1.7b2d58p-21f, 0x1.ba7f4p-80f, 0x1.60ec14p-63f, 0.0f, 0x1.e47f42p-89f,
     0x1.a9474ep-99f, 0.0f, 0x1.a1eed6p-100f, 0.0f, 0x1.b74006p-117f, 0.0f,
     0x1.8f4e9ap-113f, 0x1.e648c6p-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.57da34p-37f,
     0x1.f68372p-74f, 0.0f, 0x1.ff69c6p-44f, 0.0f, 0x1.b55116p-86f, 0.0f,
     0x1.44432p-117f, 0.0f, 0x1.c5141ap-7f, 0.0f, 0x1.4bf5eep-21f, 0x1.78a5f2p-89f,
     0x1.bd773ap-92f, 0.0f, 0x1.3de5e8p-70f, 0x1.cce8c2p-28f, 0.0f, 0x1.f3b7a6p-7f,
     0x1.3ed104p-78f, 0x1.df4958p-1f, 0x1.97846p-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.77f488p-32f, 0.0f, 0x1.01427cp-51f, 0x1.065706p-23f, 0x1.00e9f4p-114f, 0.0f,
     0.0f, 0x1.effcbp-80f, 0x1.43556p-99f, 0.0f, 0x1.97f9c4p-21f, 0x1.442386p-92f,
     0.0f, 0x1.3a60ap-66f, 0x1.3369fp-46f, 0.0f, 0.0f, 0.0f, 0x1.e77d3p-64f, 0.0f,
     0x1.5dda9p-108f, 0.0f, 0x1.b98082p-9f, 0x1.dd8a7ep-102f, 0x1.f6938cp-42f, 0.0f,
     0x1.9a8d6p-91f, 0x1.45d768p-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ef5b8p-56f, 0.0f,
     0x1.426d7ap-43f, 0x1.b35554p-84f, 0.0f, 0.0f, 0x1.13c676p-82f, 0x1.943d02p-95f,
     0.0f, 0.0f, 0x1.619ce4p-50f, 0x1.bf73a6p-117f, 0x1.bd417ep-121f, 0x1.2faac8p-56f,
     0x1.6cbfa8p-21f, 0x1.7a26cep-63f, 0.0f, 0.0f
};
static const float external_bench_wrapper_input_table_arg1[1001]  = {
     0.0f, 0.0f, 0x1.e9a6a6p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.04f1e2p-84f,
     0.0f, 0x1.46f3eap-51f, 0.0f, 0x1.10f006p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.842d6ep-64f, 0.0f, 0x1.a1ed6ep-56f, 0x1.11bf54p-62f, 0.0f, 0.0f,
     0.0f, 0x1.de2102p-22f, 0.0f, 0.0f, 0x1.21b23cp-39f, 0x1.afe9bep-51f,
     0x1.54f536p-95f, 0.0f, 0x1.067802p-38f, 0.0f, 0x1.94645ep-60f, 0x1.b5224cp-83f,
     0.0f, 0.0f, 0.0f, 0x1.ec9468p-87f, 0x1.f351dep-98f, 0.0f, 0.0f, 0x1.4308d4p-52f,
     0x1.7979d8p-37f, 0.0f, 0x1.fd0044p-75f, 0x1.7de012p-83f, 0.0f, 0.0f,
     0x1.62ad16p-46f, 0.0f, 0x1.5a53acp-23f, 0x1.b2c3d8p-114f, 0x1.acc7f6p-36f,
     0x1.62196cp-10f, 0x1.33cd3p-92f, 0x1.da6644p-13f, 0x1.ee4a26p-80f,
     0x1.8cd958p-27f, 0.0f, 0.0f, 0x1.43ea9ap-102f, 0.0f, 0x1.a5fc8p-107f,
     0x1.d075bap-31f, 0.0f, 0x1.29ec08p-57f, 0x1.8127f2p-68f, 0x1.c11574p-81f, 0.0f,
     0.0f, 0.0f, 0x1.965b1cp-39f, 0.0f, 0x1.757b7cp-52f, 0.0f, 0x1.1b9a08p-16f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.42b064p-48f, 0x1.471664p-58f,
     0x1.9bc2f6p-51f, 0x1.e69aeep-72f, 0.0f, 0.0f, 0x1.9f591ap-125f, 0x1.2d0f5ep-64f,
     0x1.901346p-69f, 0.0f, 0x1.01dae2p-52f, 0x1.db6156p-86f, 0x1p0f, 0.0f, 0.0f,
     0x1.eb3f7ep-11f, 0x1.df7d0ap-115f, 0.0f, 0x1.f6f67ap-84f, 0x1.7d6146p-8f,
     0x1.9f6358p-119f, 0x1.70dec4p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.09e196p-9f,
     0x1.682248p-123f, 0x1.005b6ep-26f, 0x1.4283ep-47f, 0.0f, 0.0f, 0.0f,
     0x1.27f768p-94f, 0.0f, 0.0f, 0x1.4547e8p-13f, 0x1.9e58f6p-21f, 0.0f,
     0x1.3c2b3p-5f, 0x1.9dc192p-119f, 0.0f, 0x1.f25608p-64f, 0.0f, 0x1.bc261ep-78f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5d9938p-101f,
     0x1.89a162p-22f, 0x1.805372p-9f, 0x1.85307ep-50f, 0.0f, 0x1.6adc36p-65f, 0.0f,
     0x1.a59c14p-86f, 0x1.5c9dbcp-112f, 0x1.44c104p-64f, 0x1.04d7ecp-94f,
     0x1.a68c9ep-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b36852p-73f, 0x1.f7454ep-55f,
     0x1.ba82e6p-90f, 0x1.c922cp-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cf452ap-18f, 0.0f,
     0.0f, 0x1.2ee2aep-23f, 0x1.2a160ap-33f, 0x1.56fef4p-60f, 0x1.c4cb86p-122f,
     0x1.e9fc6cp-60f, 0.0f, 0x1.c62c74p-24f, 0x1.8dfa0ap-77f, 0.0f, 0.0f,
     0x1.957f0cp-16f, 0.0f, 0.0f, 0.0f, 0x1.3ad8c6p-41f, 0.0f, 0x1.fa6f5p-32f,
     0x1.6016dcp-123f, 0.0f, 0.0f, 0x1.ef869cp-20f, 0x1.c96ee6p-82f, 0x1.58ce92p-71f,
     0.0f, 0x1.b6f456p-72f, 0.0f, 0x1.f89d5p-35f, 0.0f, 0.0f, 0x1.b72886p-82f, 0.0f,
     0.0f, 0x1.a82592p-42f, 0.0f, 0x1.27a9c6p-63f, 0x1.412accp-120f, 0x1.1a1ba6p-14f,
     0x1.eb7e0cp-115f, 0x1.4981b6p-5f, 0x1.eba892p-123f, 0.0f, 0.0f, 0x1.752934p-122f,
     0.0f, 0.0f, 0.0f, 0x1.f40cc8p-59f, 0x1.372a8ep-121f, 0x1.028be6p-44f, 0.0f, 0.0f,
     0x1.31925p-68f, 0.0f, 0x1.ba2dfcp-85f, 0.0f, 0x1.e0d776p-65f, 0x1.1b92aap-76f,
     0.0f, 0x1.1f27e8p-114f, 0.0f, 0.0f, 0x1.80b862p-20f, 0x1.d45ff6p-1f, 0.0f,
     0x1.56f756p-76f, 0.0f, 0x1.8d3b4p-8f, 0x1.fec502p-61f, 0x1.d8daap-62f, 0.0f,
     0x1.cbfd1ep-71f, 0.0f, 0.0f, 0x1.b0235ep-33f, 0x1.d32892p-23f, 0.0f,
     0x1.4103d6p-44f, 0.0f, 0x1p0f, 0.0f, 0x1.651266p-102f, 0x1.32b56ep-83f,
     0x1.35b40ep-88f, 0.0f, 0.0f, 0.0f, 0x1.64415p-94f, 0.0f, 0x1.37b9f6p-38f, 0.0f,
     0.0f, 0x1.d53748p-120f, 0.0f, 0x1.6f9154p-80f, 0.0f, 0x1.c94814p-100f,
     0x1.1f96a2p-29f, 0.0f, 0x1.ab63c2p-11f, 0.0f, 0x1.eb3deap-37f, 0x1.0eeef6p-74f,
     0x1.3f525p-32f, 0.0f, 0x1.029516p-93f, 0.0f, 0x1.a68876p-12f, 0x1.cc10e8p-123f,
     0.0f, 0x1.aacc62p-119f, 0x1.0b1decp-88f, 0.0f, 0x1.50f422p-80f, 0x1.404888p-15f,
     0.0f, 0x1.8d1612p-89f, 0x1.ed5516p-36f, 0.0f, 0x1.9c2032p-48f, 0.0f,
     0x1.f1958cp-99f, 0.0f, 0.0f, 0x1p0f, 0x1.5b00bep-61f, 0x1.1fd6f4p-51f,
     0x1.392ff8p-108f, 0.0f, 0.0f, 0x1.b9344ap-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.838326p-97f, 0x1.9b544ep-34f, 0.0f, 0x1.705e14p-126f,
     0x1.b13416p-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5b5d1ap-114f, 0.0f,
     0x1.668c9ep-57f, 0x1.8acc6ep-120f, 0x1.e6486ap-101f, 0.0f, 0x1.708528p-80f,
     0x1.c7e804p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8a2efcp-59f, 0x1.9cc55ap-57f,
     0x1.3c1426p-71f, 0.0f, 0x1.10b5p-48f, 0.0f, 0x1.5bdda8p-112f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.15538ep-19f, 0.0f, 0x1.abf7f2p-41f, 0.0f,
     0x1.cabbb8p-118f, 0x1.094cc8p-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7d8e6ap-38f, 0.0f, 0.0f, 0x1.a20a0ep-19f, 0.0f, 0.0f, 0.0f, 0x1.166a88p-13f,
     0x1.b39a94p-92f, 0x1.a4566ep-22f, 0x1.e28e86p-101f, 0x1.bddb7ap-6f, 0.0f,
     0x1.5d9e68p-64f, 0.0f, 0x1.06273ap-102f, 0x1.1b6478p-77f, 0x1.dbb388p-69f, 0.0f,
     0.0f, 0x1.a209d2p-110f, 0.0f, 0.0f, 0x1.12c536p-118f, 0.0f, 0x1.83d93ep-20f,
     0.0f, 0.0f, 0.0f, 0x1.04fddep-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.35a47ep-115f,
     0x1.406d08p-63f, 0.0f, 0.0f, 0x1.a27518p-94f, 0.0f, 0.0f, 0x1.85b19ep-40f,
     0x1.d24fbap-47f, 0.0f, 0.0f, 0x1.bbc2bcp-52f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.608cd8p-48f, 0.0f, 0.0f, 0x1.f28bacp-17f, 0.0f, 0.0f, 0x1.69174ep-33f,
     0x1.301e8cp-27f, 0x1.2eae34p-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.44b706p-102f,
     0x1.cba332p-88f, 0.0f, 0x1.851484p-60f, 0x1.d2cd8ep-2f, 0x1.f2beap-111f,
     0x1.8a9214p-119f, 0x1.cffcd8p-118f, 0.0f, 0x1.62691ep-79f, 0x1.936f6p-89f, 0.0f,
     0.0f, 0x1.48f166p-46f, 0.0f, 0x1.c7fc5p-40f, 0.0f, 0x1.8a47dap-73f,
     0x1.ebae6cp-62f, 0x1.c5e664p-85f, 0.0f, 0.0f, 0.0f, 0x1.2e0fc2p-110f,
     0x1.180afcp-65f, 0.0f, 0.0f, 0x1.5cacfcp-42f, 0.0f, 0.0f, 0x1.7bbe0cp-34f, 0.0f,
     0.0f, 0.0f, 0x1.cc4a3ep-5f, 0.0f, 0.0f, 0.0f, 0x1.a594p-90f, 0.0f,
     0x1.b7bfccp-32f, 0x1.51df9p-95f, 0x1.6b9bep-57f, 0x1.f967d2p-4f, 0.0f,
     0x1.5c5554p-121f, 0x1.a8a21ap-69f, 0.0f, 0x1.aea3e6p-71f, 0x1.1c0528p-37f, 0.0f,
     0x1.398e04p-66f, 0.0f, 0x1.cfa3b6p-46f, 0.0f, 0.0f, 0x1.16b1d8p-18f, 0.0f,
     0x1.0e731p-126f, 0.0f, 0x1p0f, 0.0f, 0x1.000daap-82f, 0x1.c7c32p-77f,
     0x1.f54758p-64f, 0x1.f6b35ep-18f, 0x1.66aef4p-109f, 0.0f, 0.0f, 0.0f,
     0x1.829f9cp-43f, 0x1.87c1eap-52f, 0.0f, 0.0f, 0x1.7ac4d6p-87f, 0x1.09033ep-1f,
     0x1.497526p-63f, 0.0f, 0x1.e8cadp-68f, 0.0f, 0.0f, 0x1.5e2132p-97f,
     0x1.27af74p-8f, 0.0f, 0x1.d46a92p-62f, 0.0f, 0.0f, 0x1.07707ep-84f, 0.0f, 0.0f,
     0x1.99fbccp-43f, 0.0f, 0.0f, 0x1.a0d842p-84f, 0.0f, 0x1.f9edb8p-60f, 0.0f, 0.0f,
     0.0f, 0x1.c9c058p-51f, 0x1.813766p-93f, 0.0f, 0.0f, 0x1.98cc9p-108f, 0.0f, 0.0f,
     0x1.e87358p-48f, 0x1.03d93cp-62f, 0.0f, 0.0f, 0x1.25541ap-125f, 0.0f,
     0x1.cf00dp-110f, 0x1.66894ap-16f, 0x1.e39ap-90f, 0.0f, 0x1.72fc92p-31f, 0.0f,
     0.0f, 0x1.f8455ap-34f, 0x1.4cc85cp-75f, 0x1.4814d6p-105f, 0.0f, 0x1.3a6176p-119f,
     0.0f, 0.0f, 0x1.caf50ep-16f, 0.0f, 0x1.163518p-16f, 0.0f, 0.0f, 0x1.f88f1cp-14f,
     0.0f, 0.0f, 0x1.49d484p-107f, 0.0f, 0.0f, 0x1.8d3592p-111f, 0x1.617ep-24f, 0.0f,
     0x1.863068p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.aff54cp-35f, 0.0f, 0x1.5a6936p-96f,
     0x1.9635bcp-94f, 0.0f, 0.0f, 0.0f, 0x1.51daacp-102f, 0.0f, 0.0f, 0.0f,
     0x1.2a4994p-117f, 0x1.92b3fcp-71f, 0x1.b0e9bep-57f, 0.0f, 0x1.922552p-107f, 0.0f,
     0x1.473466p-12f, 0x1.a06bp-79f, 0.0f, 0x1.b16ff6p-115f, 0x1.4371e8p-119f,
     0x1.4a9cbep-69f, 0x1.2ca37ep-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cf58cap-122f, 0x1.e075b6p-78f, 0x1.e76bccp-37f, 0x1.b87fdcp-8f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.cec346p-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fdf464p-110f, 0x1.6a1028p-69f, 0.0f, 0.0f, 0.0f, 0x1.5614fap-2f, 0.0f, 0.0f,
     0x1.491378p-40f, 0.0f, 0x1.4b6686p-10f, 0x1.dde746p-109f, 0x1.81c8a2p-36f, 0.0f,
     0x1.14cf12p-64f, 0x1.fd0152p-38f, 0x1.ff1cep-4f, 0x1.240b5ap-110f,
     0x1.2bb41cp-29f, 0.0f, 0.0f, 0.0f, 0x1.bb7fcp-121f, 0.0f, 0.0f, 0x1p0f,
     0x1.5e97b8p-59f, 0.0f, 0x1.8c728ap-9f, 0x1.2b5d7p-112f, 0x1.197326p-36f, 0.0f,
     0.0f, 0x1.4eb28ep-44f, 0x1.8a01bp-21f, 0x1.22752ap-39f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.399bbcp-90f, 0.0f, 0x1.b2205ep-82f, 0x1.fb3318p-33f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.43c46ep-64f, 0x1.913e48p-64f, 0x1.801b86p-60f, 0x1.ed17e6p-45f,
     0.0f, 0x1.aee84ap-65f, 0x1.ff64bp-87f, 0.0f, 0.0f, 0.0f, 0x1.80c9aep-75f, 0.0f,
     0.0f, 0.0f, 0x1.98762ap-3f, 0.0f, 0x1.f266bp-68f, 0.0f, 0.0f, 0.0f,
     0x1.bfa942p-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7cc446p-15f, 0x1.504142p-63f,
     0x1.d78076p-53f, 0x1.2ee7d2p-111f, 0x1.91b37cp-14f, 0x1.79cecep-102f,
     0x1.f8d0b4p-119f, 0x1.baab36p-51f, 0.0f, 0x1.fe1e1ep-7f, 0x1p0f, 0.0f, 0.0f,
     0x1.9d1bfep-51f, 0x1.53a33cp-107f, 0.0f, 0x1.14d108p-75f, 0.0f, 0.0f,
     0x1.cbaba4p-97f, 0x1.f18aa2p-68f, 0.0f, 0.0f, 0.0f, 0x1.b8b8a6p-59f, 0.0f,
     0x1.ab8b2ap-20f, 0.0f, 0x1.832978p-124f, 0x1.6ab2fcp-60f, 0.0f, 0x1.1676f8p-49f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.8ac16p-88f,
     0.0f, 0.0f, 0x1.447a42p-27f, 0x1.caa752p-88f, 0.0f, 0x1.cfc464p-28f, 0.0f, 0.0f,
     0x1.0ddf48p-90f, 0.0f, 0x1.2e137p-4f, 0.0f, 0x1.b18894p-16f, 0x1.dbc796p-96f,
     0.0f, 0x1.226ebap-117f, 0x1.c5c364p-84f, 0x1.502364p-126f, 0x1.b0c51p-22f,
     0x1.ad8d84p-6f, 0x1.5a7e4p-28f, 0x1.be9dccp-60f, 0.0f, 0.0f, 0x1.9528fap-108f,
     0x1.9d28a6p-79f, 0.0f, 0.0f, 0x1.f20b82p-23f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.477086p-1f, 0x1.7ad99ep-60f, 0x1.26dcb2p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.6ae33p-63f, 0.0f, 0.0f, 0x1.a85e6p-126f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5ed836p-62f, 0x1.ccf398p-32f, 0.0f, 0.0f, 0x1.dd6724p-48f, 0x1.38cedcp-20f,
     0.0f, 0x1.374094p-25f, 0x1.83678ep-112f, 0x1.bb7ff6p-24f, 0x1.76cab6p-29f,
     0x1.a3dc34p-111f, 0x1.cabe92p-120f, 0x1.ee6beep-74f, 0x1.16478ap-3f, 0.0f,
     0x1.454e2p-50f, 0x1.2fd524p-107f, 0x1.bdc3a6p-109f, 0.0f, 0x1.fa4bcep-14f,
     0x1.04ab44p-72f, 0x1.33bf62p-30f, 0.0f, 0.0f, 0x1.012b06p-9f, 0.0f,
     0x1.6515d6p-27f, 0.0f, 0x1.b057ccp-114f, 0x1.925c16p-47f, 0x1.63b806p-72f, 0.0f,
     0.0f, 0x1.3a3e4cp-28f, 0x1.fcc3ep-34f, 0.0f, 0.0f, 0.0f, 0x1.777c74p-117f,
     0x1.587362p-14f, 0x1.5676a4p-29f, 0.0f, 0x1.9ead0ap-101f, 0x1.ead60ep-58f, 0.0f,
     0x1.fe4bcep-21f, 0x1.d99b06p-76f, 0x1.92aff2p-103f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ff8c5p-74f, 0.0f, 0x1.6162dp-45f, 0.0f, 0.0f, 0x1.9c90e6p-56f,
     0x1.74f068p-84f, 0x1.b644b6p-13f, 0.0f, 0x1.a9eb08p-6f, 0x1.e5f3eep-8f, 0.0f,
     0x1.c9f216p-33f, 0x1.8676eap-79f, 0.0f, 0x1.1bc876p-37f, 0x1.b2197cp-32f, 0.0f,
     0x1.7bb59ep-71f, 0x1.5d7806p-45f, 0.0f, 0x1.c0a0e8p-77f, 0x1.91db06p-113f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.23c7e4p-107f, 0x1.5bf07ep-1f, 0.0f, 0.0f, 0.0f,
     0x1.46ac2cp-16f, 0x1.77ef64p-109f, 0.0f, 0.0f, 0x1p0f, 0x1.502e28p-48f,
     0x1.3d0a88p-122f, 0x1.322202p-115f, 0.0f, 0x1.b156c6p-51f, 0.0f, 0x1.1fc15p-15f,
     0x1.ee11bcp-97f, 0x1.ed1cdp-100f, 0x1.7e88acp-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8b58d2p-55f, 0x1.f5c88p-25f, 0x1.a7d5e6p-60f, 0x1.ec8722p-108f,
     0x1.703306p-17f, 0.0f, 0.0f, 0x1.a35e9cp-78f, 0.0f, 0.0f, 0x1.1aca44p-63f, 0.0f,
     0x1.3831e4p-117f, 0.0f, 0.0f, 0x1.9db2a2p-50f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c8355ap-24f, 0.0f, 0x1.d81546p-21f, 0.0f, 0x1.76d5b4p-41f, 0x1.679ab2p-16f,
     0x1.de39c4p-120f, 0x1.8cff12p-86f, 0x1.ac8d3p-56f, 0.0f, 0.0f, 0x1.9c1184p-33f,
     0.0f, 0x1.0dba84p-69f, 0.0f, 0.0f, 0x1.a497a4p-120f, 0x1.d2a368p-123f, 0.0f,
     0.0f, 0.0f, 0x1.f21a54p-27f, 0x1.f3ce4ep-10f, 0x1.9168dep-27f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1cd748p-121f, 0x1.8b9f5ap-97f, 0.0f,
     0x1.cb5456p-105f, 0x1.cada4ep-84f, 0x1.3c9062p-26f, 0x1.72abeap-28f,
     0x1.ebbf24p-15f, 0x1.87f4fep-58f, 0.0f, 0x1.4e722ap-63f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.60edccp-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1d3996p-19f, 0.0f,
     0x1.c24896p-109f, 0x1.9b4b88p-16f, 0x1.6a5e8cp-48f, 0x1.5c857p-60f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.3de44ep-51f, 0x1.4d1fd8p-77f, 0.0f, 0.0f, 0x1.cf4048p-119f,
     0.0f, 0x1.42ca58p-67f, 0.0f, 0.0f, 0.0f, 0x1.451d72p-76f, 0x1.9f51d2p-76f, 0.0f,
     0x1.fe36c4p-42f, 0x1.6c7066p-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.af4bcap-101f,
     0x1.ee9e52p-118f, 0x1.3a2f7ep-85f, 0x1.4464ecp-8f, 0x1.3c7012p-79f,
     0x1.66e96cp-20f, 0x1.b2b01p-14f, 0.0f, 0x1.a1f8cp-84f, 0x1.331246p-24f,
     0x1.c967b4p-24f, 0x1.98670ep-40f, 0.0f, 0x1.101d8p-106f, 0x1.a127bap-72f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    float global_bench_acc;
    int64_t timer;
    int64_t tmp;
    int32_t j;
    int64_t tmp1;
    int64_t tmp2;
    double id_tmp;
    double cpe_measure;
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = 0.0f;
    tmp = __cos_counter_num(0);
    timer = tmp;
    j = INT32_C(0);

    for (;(j < INT32_C(10000));){
        float bench_acc;
        int32_t i;
        float tmp0;
        int32_t tmp1;

        i = INT32_C(0);
        bench_acc = 0.0f;

        for (;(i < INT32_C(1001));){
            float tmp0;
            float tmp1;
            float tmp2;
            float tmp3;
            int32_t tmp4;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = external_bench_wrapper_input_table_arg1[i];
            tmp2 = fmodf(tmp0, tmp1);
            external_bench_wrapper_output_table[i] = tmp2;
            tmp3 = bench_acc + tmp2;
            bench_acc = tmp3;
            tmp4 = i + INT32_C(1);
            i = tmp4;
        }
        tmp0 = global_bench_acc + bench_acc;
        global_bench_acc = tmp0;
        tmp1 = j + INT32_C(1);
        j = tmp1;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10010000.0;
    printf("fmodf %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("fmodf bench acc %a\n", global_bench_acc);
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
