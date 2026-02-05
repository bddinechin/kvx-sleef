/**
 * generated using metalibm 1.1
 * sha1 git: b'"3425a70973ff93e510359b9b2fa45754ebf43279"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_nextafterf.c --function nextafterf --arity 2 --headers \
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
     0x1.ff7f9p-85f, 0x1.0e5018p-94f, 0.0f, 0x1.c16828p-42f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1c41dp-28f, 0x1.75003cp-29f, 0x1.f0d58ap-49f, 0.0f, 0x1.e14e4ap-89f, 0.0f,
     0x1.756d8ep-118f, 0x1.e62b1p-66f, 0x1.ab32a6p-75f, 0.0f, 0.0f, 0x1.3d9d34p-44f,
     0.0f, 0x1.81c20ep-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b2c1aep-101f, 0x1.7e2bd6p-17f,
     0.0f, 0.0f, 0x1.5eb86ap-17f, 0.0f, 0x1.c6bf96p-57f, 0x1.cd7f26p-14f,
     0x1.3a573ep-106f, 0.0f, 0.0f, 0x1.bdb3aep-58f, 0x1.adbfd2p-83f, 0.0f, 0.0f,
     0x1.bc09ecp-34f, 0.0f, 0x1.680e2ep-18f, 0x1.916b22p-85f, 0.0f, 0x1.49d9b4p-108f,
     0x1.13f5e2p-32f, 0x1.3f766p-91f, 0x1.7ec7p-52f, 0.0f, 0.0f, 0x1.ab6e98p-101f,
     0x1.7db05cp-33f, 0.0f, 0.0f, 0x1.054a5ep-14f, 0.0f, 0.0f, 0x1.141c14p-110f,
     0x1.f18bbp-21f, 0x1.06199cp-95f, 0x1.2775dcp-34f, 0.0f, 0.0f, 0x1.dae136p-106f,
     0x1.0919cp-53f, 0.0f, 0.0f, 0x1.db9cfap-51f, 0x1.7d0ffap-91f, 0.0f, 0.0f,
     0x1.a80028p-101f, 0x1.d4de56p-84f, 0x1.b43428p-109f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fb8e6ep-113f, 0.0f, 0x1.55767cp-37f, 0x1.a7b0e4p-122f, 0.0f, 0x1.5ac44ap-49f,
     0x1.4757a2p-23f, 0.0f, 0x1.51738cp-6f, 0x1.5eb1d6p-35f, 0.0f, 0x1.84e95p-121f,
     0x1.76a5f8p-126f, 0x1.59251p-75f, 0.0f, 0x1.c46baep-103f, 0x1.b60eb6p-11f, 0.0f,
     0x1.cc5fa8p-30f, 0x1.eb04c2p-87f, 0.0f, 0.0f, 0.0f, 0x1.350b18p-80f,
     0x1.116482p-35f, 0.0f, 0x1.75b6cp-52f, 0.0f, 0x1.11dd1cp-97f, 0x1.9dfb94p-104f,
     0x1.95d282p-67f, 0.0f, 0.0f, 0x1.29a2dp-72f, 0x1.414dcp-69f, 0x1.313602p-27f,
     0.0f, 0.0f, 0x1.0ada68p-36f, 0x1.dfa178p-7f, 0.0f, 0.0f, 0.0f, 0x1.2e4af8p-92f,
     0.0f, 0.0f, 0x1.2ea698p-119f, 0.0f, 0x1.76e81p-115f, 0.0f, 0.0f, 0.0f,
     0x1.f47c8cp-66f, 0.0f, 0x1.0d1f28p-95f, 0x1.963d18p-125f, 0.0f, 0x1.ba1728p-89f,
     0.0f, 0.0f, 0.0f, 0x1.8febeep-118f, 0x1.6344bep-106f, 0x1.7af648p-16f,
     0x1.9570b4p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d48b7p-61f, 0x1.ea4b5cp-9f,
     0x1.2d86c6p-44f, 0x1.84b964p-104f, 0x1.402e68p-99f, 0x1.aace6p-35f, 0.0f,
     0x1.38d6a8p-95f, 0x1.e7d77ap-77f, 0.0f, 0.0f, 0.0f, 0x1.75f9fcp-3f,
     0x1.1d78a4p-102f, 0.0f, 0x1.51fd66p-87f, 0.0f, 0x1.1b4daap-29f, 0x1.93c3d4p-8f,
     0x1.7bb1dap-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.978944p-100f, 0.0f, 0.0f,
     0.0f, 0x1.e71114p-39f, 0x1.854a4p-121f, 0x1.f87d9ap-108f, 0x1.b25abcp-117f,
     0x1.e2d4d8p-126f, 0x1.c8597ap-7f, 0.0f, 0x1.353304p-126f, 0x1.9095aap-32f, 0.0f,
     0.0f, 0x1.8811dp-53f, 0x1.24e896p-5f, 0x1.3982cap-26f, 0.0f, 0.0f, 0.0f,
     0x1.807d88p-77f, 0x1.d15612p-22f, 0x1.5de24p-85f, 0x1.4026b6p-78f,
     0x1.a781eap-107f, 0.0f, 0x1.9b87dcp-83f, 0x1.99a1d2p-77f, 0.0f, 0x1.d5eda6p-95f,
     0x1.ac28aep-70f, 0.0f, 0x1.862d6ep-51f, 0x1.98dc04p-108f, 0x1.15f1b4p-23f,
     0x1.8c7b8cp-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.aa4688p-84f, 0x1.0782aap-91f,
     0x1.980f68p-110f, 0x1.e837cap-35f, 0x1.b954f4p-52f, 0.0f, 0.0f, 0x1.5ca7c2p-4f,
     0.0f, 0.0f, 0x1.a565aap-39f, 0x1.7f8ec4p-63f, 0x1.6d9df8p-59f, 0x1.3baed4p-114f,
     0x1.b75e42p-27f, 0.0f, 0.0f, 0.0f, 0x1.bfba18p-63f, 0x1.f2e4a6p-71f,
     0x1.5dd88cp-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.86bea6p-69f, 0.0f,
     0x1.a3ff22p-18f, 0x1.b03878p-21f, 0x1.a5b86cp-3f, 0.0f, 0.0f, 0.0f,
     0x1.d9732ap-31f, 0x1.e555d6p-114f, 0.0f, 0x1.722348p-66f, 0.0f, 0.0f,
     0x1.fe9076p-85f, 0x1p0f, 0x1.6b67cep-9f, 0x1.a52178p-83f, 0x1.7cfdf4p-51f,
     0x1.d3e3b2p-89f, 0x1.c559e2p-48f, 0x1p0f, 0x1.29f44ep-98f, 0x1.eaf4c2p-1f,
     0x1.c4651p-14f, 0x1.77cf6ep-66f, 0.0f, 0x1.b468cep-55f, 0x1.39ffd8p-37f, 0.0f,
     0.0f, 0.0f, 0x1.30b11ep-67f, 0.0f, 0.0f, 0x1.384636p-38f, 0.0f, 0x1.23846ap-40f,
     0.0f, 0x1.97277ap-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5a3ecep-13f,
     0x1.7a8744p-30f, 0.0f, 0x1.c59bb6p-108f, 0x1.705b34p-81f, 0x1.04874ap-11f,
     0x1.44f44ap-70f, 0x1.5cb6ccp-117f, 0.0f, 0x1.e54876p-106f, 0x1.75a3c8p-101f,
     0.0f, 0.0f, 0x1.f759bep-42f, 0x1.02f5e4p-4f, 0.0f, 0.0f, 0x1.7b4dcep-44f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.32a314p-109f, 0x1.75fbp-70f, 0.0f, 0.0f,
     0x1.d1ad48p-91f, 0.0f, 0x1.e489fcp-117f, 0x1.ff0ep-123f, 0x1.d1c0c6p-71f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d08308p-95f, 0x1.fd4b5p-66f, 0.0f, 0.0f, 0x1.af8a46p-4f,
     0.0f, 0x1.53a392p-33f, 0x1.51196ap-115f, 0.0f, 0x1.6ec5fap-93f, 0x1.8ea852p-81f,
     0.0f, 0x1.dc2e66p-24f, 0x1.e2776p-105f, 0x1.89835ep-50f, 0x1.15b656p-90f,
     0x1.45199cp-67f, 0.0f, 0x1.ba0a2ep-9f, 0.0f, 0.0f, 0x1.05586cp-18f,
     0x1.52fd86p-71f, 0x1.418e42p-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ce30bap-122f, 0x1.950bdp-40f, 0x1.f50896p-107f, 0x1.f4fdfep-29f, 0.0f, 0.0f,
     0x1.8c1458p-42f, 0x1.36f9fep-112f, 0x1.b93da6p-104f, 0x1.5d499p-37f, 0.0f, 0.0f,
     0x1.7eda3ap-119f, 0x1.54f136p-10f, 0.0f, 0x1.99a08cp-41f, 0x1.8e79c8p-6f,
     0x1.cc073ap-7f, 0.0f, 0x1.0cea42p-39f, 0x1.dee6bp-19f, 0x1.190d24p-27f, 0.0f,
     0x1.5aa1dcp-110f, 0.0f, 0x1.beeea4p-17f, 0.0f, 0x1.4be204p-20f, 0x1.749618p-94f,
     0.0f, 0x1.51ddaap-44f, 0x1.cbe0c6p-50f, 0.0f, 0.0f, 0x1.d7595p-58f, 0.0f,
     0x1.37cedcp-100f, 0x1.de6064p-36f, 0.0f, 0x1.69bf66p-82f, 0x1.d7c58ep-43f,
     0x1.3adb12p-93f, 0x1.49cc08p-37f, 0.0f, 0.0f, 0.0f, 0x1.dd16e4p-39f,
     0x1.579412p-9f, 0.0f, 0x1.828d36p-39f, 0x1.0e8296p-110f, 0x1.fbfcfep-90f, 0.0f,
     0.0f, 0.0f, 0x1.1fa172p-22f, 0.0f, 0x1.60ccbap-16f, 0x1.46de7p-72f,
     0x1.b5e2cp-88f, 0.0f, 0x1.5667a4p-52f, 0.0f, 0.0f, 0x1.7d31d4p-72f,
     0x1.328a7ap-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c4f1a4p-43f, 0.0f, 0x1.009bbep-34f,
     0x1.030c66p-44f, 0.0f, 0.0f, 0x1.87887p-116f, 0x1.b7ba3cp-34f, 0.0f, 0.0f,
     0x1.a6a838p-77f, 0x1.9b1a2p-78f, 0x1.340748p-33f, 0x1.994c56p-67f,
     0x1.83d138p-117f, 0x1.be1b12p-83f, 0x1.27cd76p-99f, 0x1.fabc54p-17f,
     0x1.8ca61ep-126f, 0.0f, 0x1.58271ap-28f, 0.0f, 0x1.cae056p-104f, 0.0f, 0.0f,
     0x1.a30f14p-83f, 0.0f, 0.0f, 0x1.50a3f2p-91f, 0x1.848d72p-92f, 0.0f,
     0x1.4be22cp-42f, 0.0f, 0x1.aad7p-28f, 0x1.6d0434p-48f, 0.0f, 0.0f, 0.0f,
     0x1.c53d1ap-25f, 0x1.496ffcp-63f, 0x1.4c07b8p-30f, 0.0f, 0x1.bbf8dcp-119f, 0.0f,
     0x1.cc855cp-13f, 0x1.6b22eap-39f, 0.0f, 0.0f, 0x1.a8440cp-107f, 0.0f, 0.0f,
     0x1.2ca86ep-71f, 0.0f, 0x1.61f49ep-59f, 0x1.db0966p-106f, 0x1.5db41ap-110f, 0.0f,
     0x1.436ccap-101f, 0x1.11f8a4p-12f, 0x1.b19698p-88f, 0.0f, 0.0f, 0.0f,
     0x1.ffb148p-25f, 0.0f, 0.0f, 0x1.0120dep-21f, 0x1.1b902cp-120f, 0.0f,
     0x1.5981dap-85f, 0x1.b258e8p-72f, 0x1.5e28c8p-114f, 0.0f, 0x1.28235ap-12f,
     0x1.d233f8p-111f, 0.0f, 0x1.7aa1dap-1f, 0x1.cf6134p-63f, 0.0f, 0.0f,
     0x1.a4695ep-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d21e1p-89f,
     0.0f, 0.0f, 0x1.defc5cp-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.325b04p-42f,
     0x1.7ce4fep-104f, 0x1.acd6a4p-7f, 0x1.a15ca2p-122f, 0x1.27861p-87f,
     0x1.21c9bcp-84f, 0.0f, 0x1.58ff4ep-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b2511p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.64de94p-46f,
     0x1.d73b26p-3f, 0x1.b7334p-95f, 0x1.2bf394p-81f, 0x1.f1f9f4p-7f, 0x1.06f946p-31f,
     0x1.120bdcp-28f, 0.0f, 0x1.0cdba4p-49f, 0x1p0f, 0x1.0ed72cp-31f, 0.0f,
     0x1.1a6938p-105f, 0x1.6f2e08p-12f, 0.0f, 0.0f, 0.0f, 0x1.00df9cp-86f, 0.0f, 0.0f,
     0.0f, 0x1.686716p-77f, 0.0f, 0.0f, 0.0f, 0x1.ae8132p-14f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.038238p-6f, 0.0f, 0.0f, 0x1.c4da1cp-99f, 0x1.e07c0ap-66f,
     0x1.60f996p-83f, 0.0f, 0x1.4ee19cp-8f, 0.0f, 0x1.b5bdf8p-33f, 0.0f,
     0x1.94d442p-21f, 0.0f, 0x1.bd9936p-56f, 0x1.2f870cp-70f, 0x1.b42a3ap-70f, 0.0f,
     0.0f, 0.0f, 0x1.476838p-54f, 0x1.a5fa88p-37f, 0.0f, 0x1.7d8732p-8f,
     0x1.e9e7b2p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7b4596p-44f, 0x1.ddfe78p-90f, 0.0f,
     0.0f, 0x1.d6b7d4p-40f, 0.0f, 0.0f, 0x1.d70a48p-101f, 0.0f, 0x1.7dae1p-62f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b5125cp-57f, 0.0f, 0x1.c742ap-1f, 0.0f, 0x1.22fa52p-67f,
     0x1.c8674ep-103f, 0x1.cad618p-82f, 0x1.0052f6p-76f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d59002p-29f, 0x1.979464p-50f, 0x1.797d9ep-85f, 0x1.e98d72p-120f, 0.0f,
     0x1.b79fd8p-72f, 0x1.e3b092p-103f, 0.0f, 0x1.0a53b2p-7f, 0x1.743c44p-28f, 0.0f,
     0x1.87a906p-19f, 0.0f, 0.0f, 0x1.172982p-111f, 0.0f, 0x1.e7c102p-49f, 0.0f,
     0x1.f082dap-121f, 0x1.c2be22p-13f, 0x1.8e15fap-109f, 0.0f, 0x1.a900f2p-47f,
     0x1.8e73bcp-100f, 0.0f, 0x1.2d4768p-48f, 0x1.9dap-88f, 0x1.d8b3acp-36f,
     0x1.ae8ca2p-89f, 0x1.238f22p-121f, 0.0f, 0.0f, 0x1.674186p-8f, 0x1.349594p-44f,
     0x1.67168ap-23f, 0.0f, 0.0f, 0x1.d458eap-96f, 0x1.0796a4p-8f, 0x1.e0fabep-121f,
     0x1.20f0d2p-40f, 0x1.dd6086p-106f, 0x1.bb3c26p-5f, 0.0f, 0x1.c72bdcp-42f, 0.0f,
     0x1.1e284p-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d8b44p-53f, 0x1.e079eap-86f,
     0.0f, 0.0f, 0.0f, 0x1.e8b694p-93f, 0x1.c7fce8p-55f, 0x1.5e944ap-103f,
     0x1.ea20e8p-41f, 0x1.bb98ecp-106f, 0.0f, 0x1.7a18a4p-117f, 0x1.3aac48p-34f,
     0x1.35e782p-30f, 0x1.974eeep-117f, 0.0f, 0.0f, 0x1.c180cp-119f, 0x1.657d9ap-71f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.9a7f42p-102f, 0x1.ecb54cp-41f, 0.0f, 0x1.ebdc5cp-93f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.89b84ep-118f, 0.0f, 0x1.47307ap-78f, 0x1.62a092p-44f, 0.0f, 0.0f, 0.0f,
     0x1.70a6fp-13f, 0.0f, 0.0f, 0x1.8bc732p-89f, 0x1.45807ap-91f, 0.0f, 0.0f,
     0x1.2232bp-30f, 0x1.cf6c8p-33f, 0x1.94f7d4p-17f, 0x1.e43f54p-94f,
     0x1.be8cecp-57f, 0.0f, 0x1.cff8c2p-15f, 0.0f, 0x1.68d048p-49f, 0.0f,
     0x1.add4p-2f, 0x1.3429cp-26f, 0x1.c65beep-58f, 0x1.57a324p-3f, 0x1.3a088ap-60f,
     0x1.e02f1ap-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b2cc7p-95f,
     0x1.16ab02p-87f, 0.0f, 0x1.27d6ccp-49f, 0x1.a209a8p-37f, 0x1.31283ep-77f,
     0x1.588608p-84f, 0x1.09d4fap-21f, 0.0f, 0x1.015996p-93f, 0x1.8bbf48p-34f, 0.0f,
     0x1.cf3fdp-13f, 0.0f, 0x1.b3ce1cp-92f, 0.0f, 0.0f, 0x1.fc7f06p-48f,
     0x1.c94b8ep-108f, 0x1.b06218p-75f, 0.0f, 0x1.b0edf8p-68f, 0.0f, 0.0f,
     0x1.7adb0cp-94f, 0.0f, 0.0f, 0x1.77c2d4p-72f, 0.0f, 0x1.473276p-16f,
     0x1.f3024ap-16f, 0.0f, 0x1.6b9d2cp-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.237608p-88f, 0x1.914328p-119f, 0.0f, 0.0f, 0x1.2223f2p-40f, 0x1.191b58p-29f,
     0.0f, 0x1.989c4p-108f, 0x1.138ad8p-99f, 0.0f, 0x1.866c4ap-36f, 0.0f, 0.0f,
     0x1.55910ep-118f, 0.0f, 0x1.ba1e7ap-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b10706p-12f,
     0x1.4b2e2ap-68f, 0.0f, 0.0f, 0x1.7e281p-77f, 0x1.31d9eep-88f, 0x1.aecf14p-99f,
     0x1.0faf2ap-104f, 0.0f, 0x1.635074p-106f, 0.0f, 0x1.ce9958p-38f, 0.0f,
     0x1.6ae282p-125f, 0.0f, 0.0f, 0x1.adaddp-79f, 0.0f, 0.0f, 0x1.c2dedcp-38f,
     0x1.44ab44p-24f, 0x1.75be6p-73f, 0.0f, 0x1.60b274p-7f, 0.0f, 0x1.ba886p-43f,
     0x1.98cc1cp-16f, 0.0f, 0x1.e8533cp-93f, 0.0f, 0.0f, 0.0f, 0x1.2be022p-58f, 0.0f,
     0x1.cd43ecp-60f, 0x1.de59cap-97f, 0.0f, 0x1.3f597ep-112f, 0x1.b163acp-58f, 0.0f,
     0x1.973364p-46f, 0x1.e847dep-51f, 0x1.a1538p-106f, 0.0f, 0x1.b7fb9p-66f, 0.0f,
     0x1.daebc6p-10f, 0x1.0cd744p-98f, 0x1.d8871cp-57f, 0x1.40adaep-44f, 0.0f, 0.0f,
     0x1.73adep-13f, 0x1.182f7ap-59f, 0x1.95ca1ap-87f, 0x1.73c858p-93f,
     0x1.2b3f5ap-32f, 0x1.96613ap-90f, 0.0f, 0.0f, 0x1.bee0aep-9f, 0x1.9f2f9ep-10f,
     0x1.9fd55ap-27f, 0.0f, 0.0f, 0x1.fb910cp-56f, 0.0f, 0x1.7dd9fep-122f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ff1704p-120f, 0x1.9c620ap-69f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ddda0ap-92f, 0.0f, 0.0f, 0x1.e0f2b2p-94f, 0.0f, 0.0f, 0x1.7618c2p-43f,
     0.0f, 0x1.21647ep-112f, 0x1.b0083cp-26f, 0x1.3645c2p-12f, 0x1.559376p-4f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c07514p-59f, 0x1.1a441p-41f, 0.0f, 0x1.d1b5aap-49f,
     0x1.b08afcp-48f, 0x1.32c1f2p-56f, 0.0f, 0.0f, 0.0f, 0x1.74e55ap-110f, 0.0f,
     0x1.256accp-9f, 0x1.5f611cp-80f, 0x1.1a9e74p-117f, 0.0f, 0x1.a4a23p-15f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.748bfcp-37f, 0.0f, 0.0f, 0x1.10030ep-110f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5aca1cp-10f,
     0x1.6d8e36p-56f, 0x1.9b22bep-118f, 0.0f, 0.0f, 0x1.b2a03ep-5f, 0.0f, 0.0f, 0.0f,
     0x1.49dcc6p-107f, 0x1.65a506p-29f, 0x1.aa0022p-14f, 0x1.733574p-1f, 0.0f, 0.0f,
     0.0f, 0x1.c9ae3p-96f, 0.0f, 0.0f, 0x1.ae634ep-2f, 0.0f, 0x1.8a04fcp-115f, 0.0f,
     0x1.b67f4ep-111f, 0.0f, 0.0f, 0x1.7fc2f6p-105f, 0x1.7b9c16p-65f, 0x1.3a0c6cp-70f,
     0x1.2506f6p-83f, 0x1.fb055ep-75f, 0x1.f1f7dcp-125f, 0.0f, 0x1.8f1558p-98f, 0.0f,
     0.0f, 0.0f, 0x1.6f54a6p-20f, 0.0f, 0x1.b7d0e4p-116f, 0x1.f68878p-97f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4f6072p-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f3e8e6p-21f,
     0.0f, 0x1.0fd742p-111f, 0.0f
};
static const float external_bench_wrapper_input_table_arg1[1001]  = {
     0x1.44127p-113f, 0x1.2650c8p-1f, 0.0f, 0x1.1ccf7ap-58f, 0x1.21211cp-74f,
     0x1.284d68p-55f, 0x1.c1a47ep-114f, 0x1.138814p-106f, 0.0f, 0.0f, 0x1.5bbb82p-21f,
     0x1.e6dd86p-38f, 0x1.3748a6p-80f, 0.0f, 0.0f, 0x1.b5262ep-6f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.41279ap-3f, 0.0f, 0x1.4b174p-4f, 0x1.48414ep-122f,
     0x1.4312d8p-22f, 0x1.540a16p-4f, 0x1.1b993ep-76f, 0x1.1accfap-39f,
     0x1.b1a5dcp-15f, 0x1.efd1fep-28f, 0.0f, 0x1.21e332p-34f, 0x1.cfb432p-9f, 0.0f,
     0x1.a5221p-111f, 0x1.8a0f64p-16f, 0.0f, 0.0f, 0x1.e9b38ap-89f, 0.0f, 0.0f,
     0x1.2dffa4p-45f, 0x1.b953aap-62f, 0.0f, 0.0f, 0.0f, 0x1.2dc7fap-2f,
     0x1.0cbe64p-88f, 0x1.98a652p-91f, 0.0f, 0.0f, 0x1.2613c4p-14f, 0.0f, 0.0f, 0.0f,
     0x1.924f16p-121f, 0x1.bf676cp-98f, 0.0f, 0x1.f82d6ep-79f, 0.0f, 0x1.3bbabcp-102f,
     0x1.fb412p-123f, 0x1.34767ap-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.07d9bcp-44f,
     0x1.c08802p-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3ea06p-122f, 0.0f,
     0.0f, 0x1.f6596ap-107f, 0.0f, 0x1.5c01a8p-122f, 0.0f, 0x1.ae867ep-23f,
     0x1.7f5ba8p-6f, 0x1.025c44p-19f, 0.0f, 0.0f, 0.0f, 0x1.5def3p-89f,
     0x1.a2645ep-71f, 0x1.2a5d0cp-64f, 0.0f, 0x1.e549eep-98f, 0x1.d722e2p-122f, 0.0f,
     0.0f, 0x1.acae1p-64f, 0x1.3d85ccp-41f, 0x1.ea6ec6p-23f, 0.0f, 0x1.afe174p-57f,
     0x1.f286eep-111f, 0x1.926a0ep-29f, 0.0f, 0x1.d65412p-69f, 0.0f, 0x1.0b451ap-70f,
     0.0f, 0x1.39e6dp-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.304e48p-1f, 0.0f, 0.0f,
     0x1.da8844p-39f, 0x1.c1d3a6p-39f, 0x1.81b07ep-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b68e8p-23f, 0x1.44cdaep-39f, 0.0f, 0.0f, 0x1.d55d52p-107f, 0x1.3afffep-23f,
     0.0f, 0x1.8045bcp-17f, 0.0f, 0x1.51eb34p-55f, 0x1.6f6442p-114f, 0.0f,
     0x1.9d83bap-60f, 0.0f, 0.0f, 0x1.8c3f98p-66f, 0.0f, 0x1.3c3b02p-2f, 0.0f,
     0x1.9f236cp-29f, 0x1.654578p-38f, 0.0f, 0.0f, 0x1.7131a6p-120f, 0.0f,
     0x1.5b0e3ap-6f, 0.0f, 0x1.fd4f9ap-3f, 0.0f, 0.0f, 0x1.4f9a1ep-116f,
     0x1.5704a2p-121f, 0.0f, 0.0f, 0x1.e7584cp-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c40734p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0a5c3cp-101f, 0x1.668b3p-68f,
     0.0f, 0.0f, 0.0f, 0x1.c6d7b4p-115f, 0.0f, 0x1.ee003cp-83f, 0x1.f1e91p-8f, 0.0f,
     0x1.2e0916p-40f, 0x1.c84c9p-2f, 0x1.8224e6p-109f, 0.0f, 0.0f, 0.0f,
     0x1.69383cp-62f, 0.0f, 0.0f, 0x1.836488p-51f, 0x1.474908p-101f, 0x1.9840a8p-93f,
     0x1.2024dep-1f, 0x1.654d6ep-105f, 0.0f, 0.0f, 0.0f, 0x1.b51d6ep-30f,
     0x1.402146p-101f, 0.0f, 0.0f, 0.0f, 0x1.429c68p-18f, 0x1.a70262p-95f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.da5a7cp-5f, 0x1.a7fc8ep-14f, 0.0f, 0.0f, 0.0f,
     0x1.f3ff36p-111f, 0x1.aa16f8p-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.23171cp-57f,
     0x1.053086p-4f, 0x1.558454p-125f, 0.0f, 0x1.b1f2f6p-101f, 0x1.8080aep-73f,
     0x1.d3db94p-29f, 0x1.e152b2p-16f, 0x1.2af24cp-60f, 0.0f, 0x1.4fc6fp-99f,
     0x1.98a6a8p-117f, 0.0f, 0.0f, 0.0f, 0x1.9f6dc8p-49f, 0x1.280fd8p-118f,
     0x1.735e9ep-76f, 0.0f, 0.0f, 0x1.b503fap-52f, 0x1.16996p-3f, 0x1.86b36ep-64f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.502568p-91f, 0x1.97f51ap-3f,
     0x1.1ee5a2p-107f, 0.0f, 0.0f, 0x1.8267eep-17f, 0.0f, 0x1.b8f23p-6f,
     0x1.dd3ecap-47f, 0x1.061fc8p-54f, 0x1.4b052ap-16f, 0x1.25635p-4f,
     0x1.59522ap-11f, 0.0f, 0.0f, 0x1.e1dep-56f, 0x1.ff9a24p-111f, 0x1.63a3bap-55f,
     0.0f, 0.0f, 0x1.634918p-103f, 0x1.cdd59ep-17f, 0x1.430f72p-119f,
     0x1.86c4bap-119f, 0x1.eebba6p-25f, 0.0f, 0.0f, 0.0f, 0x1.82ac32p-65f,
     0x1.b6b9c6p-33f, 0x1.4e3bdp-10f, 0x1.8eec7ap-28f, 0.0f, 0x1.8e3e66p-118f, 0.0f,
     0x1.2cf33ap-63f, 0x1.36a7dp-76f, 0x1.425de8p-75f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c76e5ep-45f, 0x1.34be74p-30f, 0.0f, 0.0f, 0x1.e9f734p-103f, 0.0f,
     0x1.36770ep-1f, 0.0f, 0x1.19714cp-34f, 0x1.052422p-44f, 0.0f, 0x1.ece448p-89f,
     0x1.a13456p-2f, 0.0f, 0x1.9e5222p-83f, 0.0f, 0.0f, 0x1.a82ea2p-74f, 0.0f, 0.0f,
     0.0f, 0x1.b5f2fcp-124f, 0x1.21a528p-88f, 0.0f, 0.0f, 0x1.fdb726p-48f,
     0x1.071c2ep-8f, 0x1.8e3ab8p-122f, 0x1.e5359p-110f, 0x1.466df4p-112f,
     0x1.8aac42p-87f, 0x1.0e5188p-42f, 0.0f, 0x1.21c9a2p-28f, 0.0f, 0.0f,
     0x1.f99d7ap-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eea97cp-83f,
     0x1.a7e892p-43f, 0x1.e15daep-75f, 0x1.efb478p-91f, 0.0f, 0x1.93ef26p-74f,
     0x1.2a0704p-11f, 0.0f, 0x1.7e7708p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.debfa6p-106f, 0x1.732d38p-88f, 0x1.85d3ecp-96f, 0.0f, 0.0f, 0x1.34622ap-32f,
     0.0f, 0x1.7fc028p-57f, 0.0f, 0.0f, 0.0f, 0x1.72b92ep-62f, 0.0f, 0x1.f6894ep-70f,
     0.0f, 0x1.513044p-86f, 0x1.1d5604p-109f, 0x1.f494c2p-100f, 0.0f, 0.0f, 0.0f,
     0x1.4a7f28p-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bfbbacp-40f,
     0.0f, 0x1.56cfc8p-38f, 0x1.18d372p-55f, 0x1.0396cap-89f, 0x1.58d96ep-11f, 0.0f,
     0x1.840ec2p-63f, 0.0f, 0x1.473618p-13f, 0.0f, 0.0f, 0x1.d20b44p-78f,
     0x1.673bep-108f, 0x1.698974p-49f, 0.0f, 0x1.b2c164p-93f, 0x1.cd0c8ep-102f,
     0x1.9798d2p-86f, 0x1.daf806p-106f, 0x1.516a4ep-5f, 0.0f, 0x1.55bad6p-77f,
     0x1.0c2ebap-77f, 0x1.2229c8p-101f, 0x1.9b557p-43f, 0x1.a30a66p-37f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ba5ea4p-102f, 0.0f, 0x1.a9eefep-67f,
     0x1.616652p-125f, 0x1.0905f2p-36f, 0.0f, 0x1.dbf454p-73f, 0x1.f0f02cp-4f, 0.0f,
     0x1.7c1e8ep-27f, 0x1.d6ed84p-125f, 0x1.ed8a5p-7f, 0.0f, 0.0f, 0.0f,
     0x1.2bd516p-13f, 0.0f, 0.0f, 0x1.393624p-14f, 0.0f, 0.0f, 0x1.6a30b2p-116f,
     0x1.b2f03p-102f, 0x1.21e96ap-101f, 0.0f, 0x1.576d9p-105f, 0.0f, 0.0f,
     0x1.caa14cp-43f, 0.0f, 0x1.fdf788p-37f, 0x1.91a336p-77f, 0.0f, 0.0f,
     0x1.de7d2cp-74f, 0x1.47d994p-87f, 0x1.2999fep-26f, 0.0f, 0x1.3a1222p-74f,
     0x1.5f53b4p-20f, 0.0f, 0x1.43478cp-4f, 0.0f, 0x1.bb9a38p-79f, 0x1.87774p-47f,
     0.0f, 0.0f, 0x1.69e44ap-125f, 0.0f, 0.0f, 0x1.8ef29ap-18f, 0x1.ee1bd6p-19f,
     0x1.b6c90ap-57f, 0x1.a598cep-94f, 0.0f, 0x1.fb957cp-59f, 0x1.c41c5cp-97f, 0.0f,
     0x1.65735cp-29f, 0.0f, 0x1.5bbb6ap-95f, 0.0f, 0x1.c435d4p-81f, 0.0f,
     0x1.d26268p-32f, 0x1.182452p-25f, 0.0f, 0x1.abe224p-34f, 0.0f, 0.0f,
     0x1.59b5ep-43f, 0x1.8aeac4p-3f, 0.0f, 0x1.e22fd8p-25f, 0x1.d3af3p-23f, 0.0f,
     0x1.bb682cp-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f5ac42p-53f, 0x1.e8da6ep-121f,
     0.0f, 0.0f, 0.0f, 0x1.cc825cp-63f, 0.0f, 0x1.f1870ap-86f, 0.0f, 0x1.d82444p-80f,
     0.0f, 0x1.54bf5ap-55f, 0.0f, 0.0f, 0.0f, 0x1.2a4348p-102f, 0x1.eed7acp-91f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.8f8e0ap-59f, 0.0f, 0x1.0362a4p-99f, 0x1.244e6p-72f,
     0x1.4b324ap-26f, 0.0f, 0.0f, 0x1.aff196p-51f, 0x1.f74f14p-121f, 0x1.67207ep-62f,
     0x1.8981eap-54f, 0x1.cf00b4p-26f, 0x1.8fff3ep-52f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.905504p-63f, 0x1.3e1106p-28f, 0.0f, 0.0f, 0x1.43a324p-79f, 0.0f, 0.0f,
     0x1.ce203ep-73f, 0x1.d8257p-112f, 0.0f, 0x1.31671ap-101f, 0x1.65e4cep-2f, 0.0f,
     0.0f, 0x1.78eae8p-2f, 0x1.430ff4p-52f, 0x1.eed632p-1f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ee81c2p-102f, 0x1.d71edcp-51f, 0x1.a44b7p-94f, 0x1.917686p-100f,
     0x1.604294p-45f, 0.0f, 0x1.f670e8p-49f, 0.0f, 0.0f, 0x1.aad656p-33f, 0.0f,
     0x1.944c2cp-31f, 0.0f, 0.0f, 0x1.7f1356p-76f, 0.0f, 0x1.82435cp-123f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.5965fcp-18f, 0x1.3f9b26p-113f, 0x1.6dcd6ap-99f, 0.0f,
     0x1.ee55c2p-44f, 0.0f, 0x1.aa7c88p-93f, 0.0f, 0.0f, 0x1.542158p-111f,
     0x1.f75afp-125f, 0x1.37bc72p-98f, 0x1.04a82ep-79f, 0.0f, 0.0f, 0x1.19204ep-49f,
     0x1.d0253ap-11f, 0x1.c5bee8p-111f, 0.0f, 0x1.99deecp-28f, 0.0f, 0x1.c1cfaap-40f,
     0.0f, 0x1.219c5ep-86f, 0.0f, 0.0f, 0.0f, 0x1.5a542cp-15f, 0.0f, 0.0f, 0.0f,
     0x1.7e8156p-58f, 0.0f, 0.0f, 0.0f, 0x1.900782p-30f, 0.0f, 0.0f, 0.0f,
     0x1.6618e4p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6f67eep-53f, 0x1.25c68ep-77f,
     0x1.877f3cp-52f, 0.0f, 0x1.29b236p-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ba64b4p-65f, 0.0f, 0x1.c23e6ep-33f, 0.0f, 0x1.470064p-64f, 0x1.26105p-124f,
     0x1.30e33cp-88f, 0x1.6a9ccep-39f, 0x1.d6246ap-94f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f967e2p-55f, 0x1.98c022p-122f, 0.0f, 0.0f, 0x1.a19cfcp-72f, 0.0f, 0.0f,
     0x1.2534ecp-49f, 0.0f, 0x1.f10156p-13f, 0x1.23e36cp-14f, 0.0f, 0x1.67dcb6p-57f,
     0x1.4150d4p-90f, 0x1.46c93cp-5f, 0x1.12b1aap-64f, 0x1.a32002p-68f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.de1ac8p-54f, 0x1.01984ep-7f, 0x1.2dab38p-36f,
     0.0f, 0.0f, 0x1.d5a588p-90f, 0.0f, 0x1.19af6ap-43f, 0x1.284014p-21f, 0.0f, 0.0f,
     0x1.b75d82p-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.25211ep-121f, 0.0f,
     0x1.dbdb74p-94f, 0x1.4ee3bap-53f, 0.0f, 0.0f, 0x1.6fb702p-1f, 0.0f,
     0x1.556892p-69f, 0.0f, 0x1.746f0ap-1f, 0.0f, 0x1p0f, 0.0f, 0.0f,
     0x1.17a654p-121f, 0x1.6c8f22p-85f, 0.0f, 0.0f, 0x1.6dbdd2p-57f, 0x1.8d4cacp-83f,
     0x1.fafcf6p-122f, 0.0f, 0x1.3742a6p-92f, 0.0f, 0x1.3639f6p-3f, 0x1.71659p-8f,
     0x1.df9db4p-55f, 0x1.0ee794p-2f, 0x1.12f56ep-108f, 0.0f, 0x1.7ce04ap-64f,
     0x1.d798b2p-92f, 0.0f, 0x1.7d89c6p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c026c8p-20f,
     0x1.d11168p-95f, 0x1.676624p-115f, 0.0f, 0.0f, 0x1.e90ab6p-53f, 0.0f, 0.0f, 0.0f,
     0x1.0593fcp-56f, 0.0f, 0.0f, 0x1.db94f2p-91f, 0x1.1d3fb8p-18f, 0x1.6159e6p-75f,
     0.0f, 0x1.74af2cp-110f, 0x1.44f848p-114f, 0.0f, 0x1.d53904p-25f, 0x1.429bc8p-51f,
     0x1.b84a6ap-54f, 0.0f, 0x1.cba00ap-88f, 0.0f, 0.0f, 0x1.9493f8p-19f, 0.0f,
     0x1.7c9fc2p-125f, 0.0f, 0.0f, 0.0f, 0x1.eae706p-118f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.7fb62ap-18f, 0x1.cc2492p-47f, 0x1.2a2148p-33f, 0x1.275facp-110f,
     0x1.87f74p-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.531504p-35f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4d3f24p-15f, 0x1.0fab6ep-74f, 0x1.c8f4d8p-21f, 0.0f, 0x1.0d8bep-59f,
     0x1.929bdp-2f, 0.0f, 0.0f, 0.0f, 0x1.2c36fp-22f, 0x1.192518p-51f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d9fc46p-92f, 0.0f, 0x1.219062p-109f, 0x1.3b5584p-44f,
     0x1.b6fd28p-19f, 0.0f, 0.0f, 0x1.5e756p-110f, 0.0f, 0x1.15db1p-78f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.14ae4cp-73f, 0x1.4ed2ecp-11f, 0x1.79497cp-52f, 0x1.e385cp-28f,
     0x1.b4534cp-96f, 0.0f, 0.0f, 0x1.7036e8p-76f, 0.0f, 0x1.53ad3p-94f, 0.0f,
     0x1.3d87bp-18f, 0x1.f7308ep-44f, 0.0f, 0.0f, 0.0f, 0x1.8ccfd8p-126f,
     0x1.dad712p-64f, 0.0f, 0x1.56223p-97f, 0.0f, 0.0f, 0x1.dc7f66p-126f, 0.0f,
     0x1.f39e48p-110f, 0.0f, 0.0f, 0x1.224fa8p-26f, 0.0f, 0x1.ad8be8p-62f,
     0x1.1f56a2p-47f, 0.0f, 0x1.4cec5ap-18f, 0.0f, 0x1.b2da34p-94f, 0x1.5c179p-9f,
     0.0f, 0.0f, 0x1.c6b3bap-89f, 0.0f, 0x1.4674eep-116f, 0.0f, 0x1.deca2ap-56f,
     0x1.44b64ap-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.25c80ep-57f, 0.0f, 0.0f,
     0x1.c28686p-53f, 0.0f, 0.0f, 0.0f, 0x1.92586ep-122f, 0.0f, 0.0f, 0x1.ebf3aap-71f,
     0x1.12b4p-82f, 0.0f, 0x1.13526ep-66f, 0.0f, 0x1.39fa94p-96f, 0.0f, 0.0f,
     0x1.5afe9ep-81f, 0x1.1e0adp-95f, 0x1.4eb68ap-2f, 0.0f, 0x1.0fb36ap-90f,
     0x1.b0014p-71f, 0x1.cb306ap-105f, 0.0f, 0.0f, 0.0f, 0x1.8590fp-85f, 0.0f,
     0x1.047b76p-56f, 0.0f, 0x1.9c3f96p-103f, 0.0f, 0x1.560fbp-103f, 0.0f, 0.0f,
     0x1.2d582ap-27f, 0x1.f8c9bap-105f, 0.0f, 0.0f, 0x1.8841c6p-74f, 0x1.7bb31ap-119f,
     0x1.4f8d4p-60f, 0x1.d507e6p-65f, 0.0f, 0x1.f935b2p-58f, 0.0f, 0.0f,
     0x1.b6b0b8p-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d36bep-39f, 0x1.99ddd8p-34f, 0.0f,
     0x1.2686a6p-29f, 0x1.1e62eap-11f, 0x1.2c9426p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c855eep-14f, 0x1.4d1c78p-107f, 0.0f, 0x1.edae0cp-50f, 0x1.13b754p-120f,
     0.0f, 0.0f, 0.0f, 0x1.00b1b4p-81f, 0x1.39e386p-92f, 0.0f, 0x1.59c21ep-42f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.629072p-103f, 0.0f, 0x1.14ba52p-65f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.92e422p-24f, 0.0f, 0x1.763fep-4f, 0x1.e0e09ap-64f, 0x1.a62ccep-10f,
     0.0f, 0.0f, 0x1.ee5468p-38f, 0.0f, 0x1.73ea2cp-30f, 0.0f, 0x1.8959a6p-23f,
     0x1.1ab6dcp-67f, 0x1.d85896p-100f, 0x1.1f283p-51f, 0.0f, 0x1.960808p-9f,
     0x1.6db462p-7f, 0x1.21e46ep-19f, 0.0f, 0.0f, 0x1.042a84p-15f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.512bd8p-78f, 0x1.ec3adcp-73f, 0.0f, 0x1.3a22b6p-86f,
     0x1.d0caaep-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cf61d6p-125f,
     0x1.eaedf8p-87f, 0.0f, 0x1.225fb4p-98f, 0.0f, 0x1.f86718p-65f, 0.0f,
     0x1.4a1e66p-44f, 0.0f, 0x1.128e1ap-7f, 0.0f, 0.0f
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
            tmp2 = nextafterf(tmp0, tmp1);
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
    printf("nextafterf %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("nextafterf bench acc %a\n", global_bench_acc);
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
