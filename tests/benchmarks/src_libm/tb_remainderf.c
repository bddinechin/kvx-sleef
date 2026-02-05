/**
 * generated using metalibm 1.1
 * sha1 git: b'"3425a70973ff93e510359b9b2fa45754ebf43279"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_remainderf.c --function remainderf --arity 2 --headers \
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
     0x1.874786p-1f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.76f0c2p-84f, 0.0f, 0.0f,
     0x1.498aaep-53f, 0.0f, 0.0f, 0x1.a6c9bap-14f, 0.0f, 0.0f, 0.0f, 0x1.2df024p-92f,
     0.0f, 0x1.c0016cp-94f, 0x1.80d39ep-21f, 0x1.5e4fe8p-47f, 0x1.7b58e8p-31f, 0.0f,
     0x1.d9d27cp-41f, 0x1.91abe4p-103f, 0.0f, 0x1.baad6ap-107f, 0.0f, 0x1.6a282ep-4f,
     0x1.c0e044p-123f, 0.0f, 0.0f, 0x1.531b0cp-74f, 0x1.d53c48p-104f, 0.0f,
     0x1.efb64p-75f, 0x1.39c602p-15f, 0x1.1f9c5ep-61f, 0x1.205d44p-44f,
     0x1.70ae3cp-51f, 0x1.491e12p-13f, 0.0f, 0x1.a138e8p-78f, 0.0f, 0.0f,
     0x1.8188b4p-62f, 0.0f, 0.0f, 0.0f, 0x1.ade7f6p-65f, 0x1.d9d0fcp-117f, 0.0f, 0.0f,
     0x1.fe721ap-70f, 0x1.437192p-93f, 0.0f, 0.0f, 0.0f, 0x1.47b656p-105f, 0.0f, 0.0f,
     0.0f, 0x1.ca07dep-22f, 0x1.a45beep-96f, 0x1.20663p-95f, 0.0f, 0.0f,
     0x1.94533p-8f, 0x1.d1717cp-113f, 0x1.a0583ap-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.18106ap-109f, 0.0f, 0x1.9ae8b6p-67f, 0.0f, 0.0f, 0x1.27bc56p-97f,
     0x1.06b3a8p-121f, 0x1.66b894p-14f, 0x1.345b22p-33f, 0x1.d28bf6p-111f,
     0x1.18d6f4p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8b5892p-119f, 0.0f,
     0x1.c65c34p-44f, 0x1.6afbbcp-105f, 0x1.07e286p-14f, 0x1.1c451ap-13f, 0.0f, 0.0f,
     0.0f, 0x1.e694ap-104f, 0.0f, 0x1.918624p-48f, 0x1.684ecp-80f, 0.0f,
     0x1.99917ap-83f, 0x1.9cc46ap-44f, 0.0f, 0x1.e0b13cp-94f, 0x1.539e34p-61f,
     0x1.c888ecp-81f, 0.0f, 0.0f, 0x1.112e2ep-20f, 0.0f, 0.0f, 0x1.fd82cp-12f,
     0x1.deef68p-14f, 0x1.dce81ep-63f, 0x1.066d98p-111f, 0x1.d3b5d6p-2f, 0.0f, 0.0f,
     0x1.57810ap-125f, 0.0f, 0x1.40626ap-111f, 0.0f, 0x1.45e1bp-78f, 0.0f, 0.0f, 0.0f,
     0x1.586564p-110f, 0.0f, 0x1.09724cp-113f, 0x1p0f, 0x1.6e5336p-80f, 0.0f,
     0x1.2578f8p-105f, 0.0f, 0x1.32f532p-60f, 0.0f, 0x1.41cp-84f, 0x1.f5cb58p-77f,
     0x1.0ec94cp-4f, 0.0f, 0x1.b8a248p-38f, 0x1.c2b7aap-94f, 0x1.8b909ep-99f, 0.0f,
     0.0f, 0.0f, 0x1.f7f326p-12f, 0.0f, 0x1.f3add6p-103f, 0x1.24a5bap-29f, 0.0f,
     0x1.8cfa58p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0d6206p-2f, 0.0f, 0x1.8c0c9ap-118f,
     0x1.db6336p-110f, 0x1.1bb7fp-87f, 0x1.3a2872p-126f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e49f0cp-28f, 0x1.041134p-38f, 0.0f, 0x1.160db6p-40f, 0.0f, 0x1.203666p-42f,
     0.0f, 0x1.1d01c6p-112f, 0.0f, 0.0f, 0x1.5e36acp-70f, 0x1.f6519cp-116f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.1e8d8p-27f, 0.0f, 0x1.da7acap-56f, 0.0f, 0.0f, 0.0f,
     0x1.13d0f6p-21f, 0.0f, 0x1.359918p-76f, 0x1.489e3p-40f, 0x1.8df70cp-12f,
     0x1.70454p-35f, 0x1.e60748p-12f, 0x1.d35702p-14f, 0.0f, 0.0f, 0x1.8f06f2p-115f,
     0x1.275b24p-8f, 0x1.3725d6p-110f, 0.0f, 0.0f, 0.0f, 0x1.323196p-91f,
     0x1.4ff23p-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6a8212p-106f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.439238p-111f, 0.0f, 0x1.91245ap-20f, 0.0f, 0x1.2a30c4p-17f,
     0.0f, 0x1.6d95eap-76f, 0.0f, 0x1.2c9206p-91f, 0x1.4f2876p-30f, 0x1.4a79b2p-34f,
     0x1.cb8f3ap-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1c082cp-28f,
     0x1.5ea4aap-50f, 0x1p0f, 0x1.54886ap-6f, 0x1.ef4256p-103f, 0.0f, 0.0f, 0.0f,
     0x1.1d2f8p-13f, 0.0f, 0.0f, 0x1.e5b578p-43f, 0x1.cf28bp-53f, 0x1.65e996p-43f,
     0.0f, 0.0f, 0x1.929184p-9f, 0.0f, 0.0f, 0x1.d5c512p-31f, 0x1.589fa2p-125f,
     0x1.a2768ep-65f, 0.0f, 0x1.41c026p-69f, 0x1.b9c4b4p-88f, 0.0f, 0x1.b04ab4p-2f,
     0x1.a28404p-39f, 0.0f, 0x1.06556p-103f, 0.0f, 0x1.b0aa06p-11f, 0x1.dcf1c8p-15f,
     0x1.a9948p-98f, 0x1.fc6642p-59f, 0x1.b50b72p-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.004628p-106f, 0.0f, 0x1.7c9d76p-81f, 0.0f, 0.0f, 0x1.06defap-104f,
     0.0f, 0x1.dc017ap-1f, 0.0f, 0x1.1d506ep-56f, 0.0f, 0x1.c5f4bep-9f, 0.0f, 0.0f,
     0x1.0170bp-60f, 0.0f, 0x1.e49ac6p-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f0aefep-108f, 0.0f, 0x1.e58db4p-43f, 0.0f, 0.0f, 0x1.e41018p-39f,
     0x1.241aap-124f, 0x1.e4a4bcp-82f, 0.0f, 0x1.17b1c8p-101f, 0.0f, 0.0f,
     0x1.01ddaep-122f, 0x1.aba31ap-1f, 0x1.56e7d4p-118f, 0.0f, 0x1.3dd8ecp-56f, 0.0f,
     0.0f, 0x1.728df6p-53f, 0.0f, 0x1.ee8656p-105f, 0.0f, 0x1.e569cp-72f, 0.0f,
     0x1.834828p-52f, 0x1.547c12p-53f, 0.0f, 0.0f, 0x1.689476p-107f, 0.0f, 0.0f,
     0x1.fdc00ep-81f, 0.0f, 0.0f, 0.0f, 0x1.080e7p-82f, 0.0f, 0.0f, 0.0f,
     0x1.e1667p-67f, 0x1.9255bap-7f, 0x1.65b8eep-103f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d20238p-60f, 0.0f, 0.0f, 0.0f, 0x1.07984ep-122f, 0x1.c44f9ep-115f, 0.0f,
     0x1.3aa2dep-50f, 0.0f, 0x1.a3b6cp-88f, 0x1.5fc9fep-119f, 0.0f, 0.0f, 0.0f,
     0x1.faacb8p-75f, 0.0f, 0.0f, 0x1.9e300ep-20f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ee72bap-63f, 0x1.aaea9cp-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.253b1p-35f, 0.0f, 0x1.aff204p-16f, 0x1.5f2742p-32f, 0x1.03085p-68f,
     0x1.faac0ap-35f, 0.0f, 0x1.b15646p-54f, 0x1.51fbcap-96f, 0.0f, 0.0f, 0.0f,
     0x1.1258b8p-120f, 0x1.bbe1a2p-97f, 0.0f, 0x1.902bbp-63f, 0x1.188fb6p-124f, 0.0f,
     0x1.a09d34p-37f, 0x1.045748p-82f, 0x1.ad37dp-29f, 0x1.8a8e4ep-72f,
     0x1.03ce52p-90f, 0x1.d3bcp-15f, 0x1.3f5ddap-28f, 0x1.652fa8p-100f,
     0x1.070cb8p-48f, 0.0f, 0x1.cb2a6p-114f, 0.0f, 0x1.45e058p-53f, 0.0f,
     0x1.104cbep-114f, 0x1.dc858cp-19f, 0.0f, 0x1.2a971cp-61f, 0x1.49c022p-53f, 0.0f,
     0.0f, 0.0f, 0x1.cd2ff4p-49f, 0x1.ea060cp-72f, 0x1.80babep-122f, 0x1.7e4b66p-43f,
     0x1.79f99ep-80f, 0x1.cd360cp-96f, 0.0f, 0x1.568158p-49f, 0.0f, 0x1.d45a0cp-90f,
     0.0f, 0.0f, 0x1.88ad36p-91f, 0x1.8f202p-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.025b18p-110f, 0x1.17c882p-68f, 0x1.17bac4p-29f, 0.0f, 0x1.0c78dep-6f, 0.0f,
     0x1.3a9b8ap-86f, 0.0f, 0.0f, 0.0f, 0x1.a47156p-93f, 0x1.64febcp-16f, 0.0f, 0.0f,
     0x1.772828p-80f, 0x1.53f96cp-3f, 0x1.482aa2p-122f, 0.0f, 0.0f, 0x1.6fd5e6p-37f,
     0x1.ce7d56p-17f, 0.0f, 0x1.70dd7ep-81f, 0x1.16de86p-115f, 0x1.0d0b7ap-41f,
     0x1.a7236p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.820056p-110f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bafcc2p-53f, 0.0f, 0.0f, 0.0f, 0x1.c9af8ap-50f, 0.0f, 0x1.01f4ecp-45f,
     0x1.082986p-93f, 0.0f, 0.0f, 0x1.13872ep-2f, 0.0f, 0x1.98a1a8p-5f,
     0x1.e1b8b6p-67f, 0x1.5d2f0ap-14f, 0x1.47acp-78f, 0.0f, 0x1.6c5092p-66f,
     0x1.fcb562p-88f, 0x1.21ba38p-86f, 0x1.5c239ap-90f, 0.0f, 0x1.d00402p-104f,
     0x1.60637ap-18f, 0x1.5d14aap-57f, 0.0f, 0.0f, 0x1.8acf32p-124f, 0x1.71b8e4p-98f,
     0x1.7163eep-4f, 0x1.01edc6p-104f, 0.0f, 0x1.32cfe8p-50f, 0.0f, 0.0f, 0.0f,
     0x1.54e778p-33f, 0.0f, 0x1.da4d5cp-108f, 0.0f, 0.0f, 0x1.bcb1dap-11f,
     0x1.10dfa8p-27f, 0.0f, 0.0f, 0x1.5a8532p-55f, 0x1.65ab16p-54f, 0x1.d2d8f2p-116f,
     0.0f, 0.0f, 0x1.522caap-102f, 0x1.f4188ap-114f, 0x1.b75502p-30f, 0.0f,
     0x1.58e5a6p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6134e2p-83f, 0.0f, 0.0f,
     0x1.f37a48p-95f, 0x1.132f1ep-27f, 0x1.064144p-100f, 0x1.7280e6p-9f, 0.0f, 0.0f,
     0.0f, 0x1.4d2976p-9f, 0x1.1736e6p-29f, 0.0f, 0x1.d6f5a2p-43f, 0.0f, 0.0f,
     0x1.75c1fp-33f, 0x1.195bc8p-66f, 0x1.fcfb78p-47f, 0.0f, 0.0f, 0.0f,
     0x1.cdb1f2p-124f, 0.0f, 0.0f, 0x1.895b1ep-70f, 0.0f, 0.0f, 0x1.d9debp-76f,
     0x1.052b9ap-19f, 0x1.ba48b2p-13f, 0x1.f4d442p-102f, 0.0f, 0x1.4409p-5f, 0.0f,
     0.0f, 0x1.bcddb6p-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b76fc8p-38f, 0.0f,
     0.0f, 0x1.cfbb06p-79f, 0.0f, 0x1.89f67ep-21f, 0.0f, 0.0f, 0x1.fbd34ap-70f, 0.0f,
     0x1.a28af4p-10f, 0.0f, 0.0f, 0x1.225f5cp-80f, 0.0f, 0.0f, 0x1.772b9ep-71f,
     0x1.af8fa8p-114f, 0x1.1c2dc2p-19f, 0x1.586e78p-95f, 0x1.62c50ep-112f, 0.0f, 0.0f,
     0x1.f5a526p-105f, 0.0f, 0.0f, 0x1.0e4374p-97f, 0.0f, 0.0f, 0x1.67201ap-117f,
     0x1.7dcf7ep-50f, 0.0f, 0.0f, 0.0f, 0x1.c889bp-93f, 0.0f, 0x1.4a1ee2p-64f, 0.0f,
     0x1.f54b1cp-72f, 0.0f, 0x1.6cc94ep-36f, 0x1.9eee18p-41f, 0.0f, 0x1.a65b0ap-30f,
     0x1.82ab86p-120f, 0.0f, 0x1.997ae4p-110f, 0.0f, 0x1.16a92ap-44f, 0.0f,
     0x1.27f8ap-40f, 0x1.049ef4p-44f, 0.0f, 0.0f, 0x1.bbebfcp-72f, 0.0f, 0.0f,
     0x1.3dd76cp-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e50bbp-18f, 0.0f, 0x1.8237bep-120f,
     0x1.1e3cdp-32f, 0.0f, 0.0f, 0.0f, 0x1.3bdb32p-83f, 0x1.b06e52p-103f,
     0x1.572014p-35f, 0.0f, 0x1.3074dep-8f, 0x1.7b8b1ap-120f, 0x1.071628p-125f,
     0x1.13c22ap-41f, 0.0f, 0.0f, 0.0f, 0x1.be1744p-22f, 0.0f, 0x1.9ae42ep-123f, 0.0f,
     0x1.ff4968p-64f, 0x1.c5de6ap-4f, 0.0f, 0.0f, 0x1.72d61ap-108f, 0x1.b5c3ccp-13f,
     0x1.ed73d2p-126f, 0x1.7b3c04p-32f, 0x1.d48f68p-114f, 0.0f, 0x1.a8691ep-93f,
     0x1.16376cp-41f, 0.0f, 0.0f, 0x1.ef3272p-32f, 0x1.b50abap-81f, 0.0f, 0.0f,
     0x1.16b238p-116f, 0x1.ceadap-106f, 0x1.08a052p-125f, 0x1.4e12f6p-4f,
     0x1.adfa8ap-12f, 0x1.ef4964p-94f, 0x1.536df6p-123f, 0x1.0d321cp-102f,
     0x1.05131ap-47f, 0x1.5bb38cp-76f, 0.0f, 0x1.815984p-125f, 0.0f, 0x1.3f8a6ap-48f,
     0.0f, 0.0f, 0x1.4e746ap-75f, 0x1.e5d616p-98f, 0.0f, 0x1.c1fd94p-85f,
     0x1.a5ce6p-15f, 0x1.62f7eep-119f, 0x1.0687ep-38f, 0.0f, 0x1.bb1d2cp-101f, 0.0f,
     0.0f, 0.0f, 0x1.762cdep-94f, 0.0f, 0x1.62cd3cp-10f, 0x1.5e0bdp-8f,
     0x1.7a5acep-46f, 0x1.bcd67cp-71f, 0.0f, 0.0f, 0.0f, 0x1.0e15a2p-56f, 0.0f, 0.0f,
     0.0f, 0x1.4cf38ap-41f, 0x1.7276dap-8f, 0x1.826de2p-90f, 0x1.0fcd7ap-8f, 0.0f,
     0x1.8e40d2p-34f, 0.0f, 0x1.a73a6ep-114f, 0x1.8c547p-4f, 0.0f, 0x1.241be6p-2f,
     0.0f, 0x1.6d1238p-56f, 0x1.5216a8p-119f, 0.0f, 0x1.5eb368p-12f, 0x1.5e5378p-55f,
     0x1.701decp-38f, 0.0f, 0x1.6c2e4ap-121f, 0x1.9406b4p-45f, 0x1.d4f7b8p-112f, 0.0f,
     0.0f, 0x1.ee48cp-98f, 0.0f, 0.0f, 0x1.8c5bbp-1f, 0.0f, 0x1.b71e6cp-94f,
     0x1.85ad2cp-22f, 0x1.1b6be6p-35f, 0.0f, 0.0f, 0x1.3ed024p-38f, 0x1.6d270cp-41f,
     0.0f, 0.0f, 0x1.5b014ep-121f, 0x1.da396p-91f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.25aa9cp-89f, 0x1.ebcb4ap-107f, 0x1.9003d6p-31f, 0x1.092bc8p-89f, 0.0f, 0.0f,
     0x1.c791fep-31f, 0.0f, 0x1.62237p-105f, 0.0f, 0.0f, 0x1.c4525ap-91f, 0.0f,
     0x1.40eb3ap-39f, 0.0f, 0x1.5ec892p-48f, 0.0f, 0.0f, 0x1.bca12ep-6f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.699586p-100f, 0x1.5c8e0ap-85f, 0x1.08c354p-90f, 0.0f, 0.0f,
     0x1.9bda0ep-16f, 0x1.51459ap-87f, 0.0f, 0x1.24cf78p-4f, 0x1.2bb648p-103f,
     0x1.b71192p-56f, 0.0f, 0x1.c9249ep-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f74a74p-57f, 0.0f, 0x1.f25b0cp-118f, 0.0f, 0.0f, 0x1.d96c42p-7f, 0.0f, 0.0f,
     0.0f, 0x1.cf1782p-6f, 0x1.c3611ep-124f, 0.0f, 0.0f, 0.0f, 0x1.f469bep-48f,
     0x1.5b047p-122f, 0x1.f2e0dap-89f, 0x1.2d43c6p-70f, 0.0f, 0.0f, 0.0f,
     0x1.49b0f8p-95f, 0.0f, 0.0f, 0x1.7caf2cp-5f, 0.0f, 0x1.185c4p-102f,
     0x1.eecbbp-17f, 0x1.3a5e42p-119f, 0.0f, 0x1.66a37cp-15f, 0x1.5fcb62p-64f, 0.0f,
     0x1.c4aacep-8f, 0.0f, 0x1.f717dp-74f, 0x1.2acf56p-20f, 0x1.0d8682p-90f,
     0x1.7a373ep-55f, 0x1.fd7c62p-47f, 0x1.61088ep-29f, 0x1.7c0696p-58f, 0.0f,
     0x1.a1c53p-10f, 0x1.8f0542p-96f, 0x1.2f2a38p-10f, 0x1.9201e2p-116f,
     0x1.894e8ap-94f, 0.0f, 0.0f, 0.0f, 0x1.3ca04ep-54f, 0x1.ed15f4p-26f, 0.0f, 0.0f,
     0.0f, 0x1.b310cap-103f, 0.0f, 0x1.82b426p-31f, 0.0f, 0.0f, 0.0f, 0x1.a4f9dp-43f,
     0.0f, 0.0f, 0x1.e9bbf6p-49f, 0x1.1b99b8p-25f, 0.0f, 0x1.927b1cp-84f,
     0x1.71e3c6p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.162d82p-49f, 0.0f,
     0x1.5d44bep-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.22fa3ap-75f, 0.0f, 0x1.2830f2p-40f,
     0x1.3b1a82p-25f, 0x1.04ec74p-35f, 0.0f, 0.0f, 0.0f, 0x1.a042eep-91f,
     0x1.94b5f4p-44f, 0x1.a4d286p-30f, 0x1.5c104p-52f, 0x1.5f5112p-12f, 0.0f,
     0x1.0c0c2ap-79f, 0x1.68ce8p-86f, 0x1.fd44f8p-30f, 0x1.0b010ep-60f,
     0x1.ee3facp-24f, 0.0f, 0.0f, 0x1.1a74e8p-110f, 0x1.673954p-111f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b2c9dap-66f, 0x1.c5d2d2p-97f, 0.0f, 0x1.54ca14p-59f, 0.0f, 0.0f,
     0.0f, 0x1.8fded2p-23f, 0x1.a335ecp-17f, 0.0f, 0.0f, 0x1.60dad8p-102f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.366f96p-72f, 0x1.b75082p-45f, 0x1.8879bep-12f,
     0x1.9c6b3cp-20f, 0x1.a5af84p-35f, 0.0f, 0x1.eeb91ep-45f, 0x1.4dbf58p-3f,
     0x1.57c03ap-33f, 0x1.735148p-66f, 0x1.82bc4p-105f, 0x1.e30af2p-112f,
     0x1.4ff272p-37f, 0.0f, 0.0f, 0x1.9788dp-16f, 0.0f, 0x1.d29518p-107f,
     0x1.686f6ep-64f, 0.0f, 0.0f, 0x1.9198a8p-33f, 0.0f, 0x1.12dbb4p-65f,
     0x1.b21dfap-14f, 0.0f, 0x1.99c64p-79f, 0.0f, 0.0f, 0x1.fd00ecp-94f,
     0x1.3e07fap-61f, 0x1.6a168cp-1f, 0.0f, 0x1.479578p-97f, 0x1.c0f9fp-14f, 0.0f,
     0x1.864f1ep-122f, 0.0f, 0x1.69730cp-38f, 0.0f, 0x1.d3c58p-102f, 0.0f,
     0x1.71ea0ap-103f, 0x1.9a1bc6p-22f, 0x1.9b7598p-32f, 0.0f, 0.0f, 0x1.456c6ap-35f,
     0x1.a3bc42p-18f, 0.0f, 0x1.c09cdap-107f, 0x1.8fcffap-101f, 0.0f, 0x1.c7bb32p-75f,
     0.0f, 0x1.40bcd2p-38f, 0x1.f7754p-68f, 0.0f, 0x1.768186p-117f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.7ff3e6p-33f, 0x1.5010a8p-76f, 0x1.60990ep-66f, 0x1.c6538p-108f
};
static const float external_bench_wrapper_input_table_arg1[1001]  = {
     0.0f, 0.0f, 0.0f, 0x1.2635ccp-15f, 0x1.9be956p-106f, 0x1.c45b4ap-92f,
     0x1.be93acp-98f, 0.0f, 0.0f, 0x1.fd9132p-8f, 0x1.a6cd2ap-124f, 0x1.69e43ap-74f,
     0.0f, 0x1.bd87a8p-56f, 0x1.dc578p-26f, 0x1.fccd02p-71f, 0.0f, 0.0f,
     0x1.7e5a34p-43f, 0.0f, 0.0f, 0x1.467926p-73f, 0x1.dacdccp-23f, 0.0f, 0.0f, 0.0f,
     0x1.b85168p-106f, 0.0f, 0.0f, 0x1.53661ep-81f, 0.0f, 0x1.d8b23ep-19f,
     0x1.182ddcp-17f, 0.0f, 0.0f, 0x1.77b28p-45f, 0x1.c969c4p-61f, 0.0f, 0.0f,
     0x1.a59542p-111f, 0.0f, 0.0f, 0x1.21c354p-14f, 0.0f, 0.0f, 0x1.a2bc02p-124f,
     0x1.20a4cp-99f, 0.0f, 0x1.aacc4ep-44f, 0.0f, 0.0f, 0.0f, 0x1.f1ab5cp-113f, 0.0f,
     0x1.f0febp-118f, 0x1.389502p-125f, 0x1.74cef4p-95f, 0.0f, 0x1.6f773p-69f, 0.0f,
     0.0f, 0.0f, 0x1.027a08p-88f, 0.0f, 0x1.b7ade6p-118f, 0.0f, 0.0f, 0.0f,
     0x1.30548p-12f, 0x1.7bb75cp-104f, 0x1.c38d4p-3f, 0x1.b76714p-110f, 0.0f,
     0x1.37064cp-70f, 0.0f, 0.0f, 0x1.3d6258p-78f, 0x1.cf62b4p-69f, 0.0f,
     0x1.f2f85p-125f, 0.0f, 0.0f, 0x1.b7412cp-101f, 0.0f, 0.0f, 0x1.e99882p-83f,
     0x1.a785b2p-76f, 0x1.6dca76p-115f, 0x1.549006p-124f, 0x1.9ed68cp-122f, 0.0f,
     0x1.cfdfd2p-126f, 0x1.18827ap-88f, 0.0f, 0.0f, 0x1p0f, 0x1.ab9ccep-47f, 0.0f,
     0x1.154acep-58f, 0.0f, 0.0f, 0x1.c226fap-101f, 0x1.f9bc96p-42f, 0.0f,
     0x1.9e768ep-123f, 0x1.3f3604p-43f, 0.0f, 0.0f, 0.0f, 0x1.42818p-44f, 0.0f, 0.0f,
     0x1.59c3d6p-6f, 0.0f, 0x1.0776aap-27f, 0.0f, 0.0f, 0x1.472cb4p-91f,
     0x1.6fb8ecp-27f, 0.0f, 0x1.6addp-58f, 0x1.93064cp-103f, 0.0f, 0.0f,
     0x1.c52cbcp-81f, 0x1.f7cab8p-93f, 0x1.18166ep-22f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e8f58cp-60f, 0x1.e78086p-56f, 0x1.c2332cp-115f, 0x1.ab9d0cp-38f, 0.0f,
     0x1.7cda32p-60f, 0x1.06f85cp-39f, 0.0f, 0.0f, 0.0f, 0x1.a0945cp-41f, 0.0f,
     0x1.c89f3cp-103f, 0x1.380404p-38f, 0.0f, 0x1.3f22eap-60f, 0x1.02cf0cp-40f, 0.0f,
     0x1.7fa264p-13f, 0x1.11c648p-4f, 0x1.5097cep-126f, 0.0f, 0x1.f266d2p-111f,
     0x1.b54a44p-21f, 0x1.8ed076p-107f, 0.0f, 0.0f, 0.0f, 0x1.cb7a16p-31f, 0.0f,
     0x1.b9db7p-117f, 0x1.7e4e5ap-51f, 0.0f, 0x1.80ddd4p-102f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.0bf39ep-121f, 0x1.0367bep-37f, 0.0f, 0x1.3b587ap-61f,
     0x1.e5e0ccp-11f, 0.0f, 0.0f, 0x1.103048p-92f, 0.0f, 0x1.c8beb4p-20f,
     0x1.c2e9d4p-45f, 0.0f, 0x1.ad8c68p-121f, 0.0f, 0.0f, 0x1.3b3008p-22f,
     0x1.1f3146p-71f, 0x1.90d8a8p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f1d20cp-41f,
     0x1.f56844p-65f, 0x1.f6f296p-63f, 0.0f, 0x1.92f3c8p-83f, 0.0f, 0.0f, 0.0f,
     0x1.484432p-117f, 0.0f, 0x1.bb80dep-38f, 0x1.5d588p-102f, 0x1.f26d42p-32f,
     0x1.f2171p-59f, 0x1.bc43bep-56f, 0.0f, 0.0f, 0x1.ddafa4p-92f, 0x1.d581b4p-39f,
     0x1.afaf1cp-79f, 0x1.8dd376p-52f, 0x1.140c72p-44f, 0x1.e92c8cp-84f,
     0x1.8d4f06p-122f, 0.0f, 0x1.f49478p-63f, 0.0f, 0.0f, 0x1.19f714p-12f,
     0x1.f26f2cp-86f, 0x1.33b93p-108f, 0.0f, 0.0f, 0x1.8399bap-124f, 0x1.6fc63cp-41f,
     0x1.e029ap-50f, 0.0f, 0.0f, 0.0f, 0x1.94c882p-57f, 0.0f, 0x1.0b8054p-110f, 0.0f,
     0x1.c43aaap-22f, 0.0f, 0.0f, 0x1.69ae0ap-33f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f06a74p-12f, 0.0f, 0.0f, 0x1.809e4p-99f, 0.0f, 0x1.ea41aep-5f,
     0x1.b37eb8p-12f, 0x1.ee3864p-73f, 0x1.206a7ep-10f, 0x1.3d2cc6p-57f,
     0x1.69fc1p-15f, 0x1.609232p-115f, 0x1.ea1382p-52f, 0x1.6936f8p-34f, 0.0f, 0.0f,
     0.0f, 0x1.45fd52p-106f, 0.0f, 0.0f, 0.0f, 0x1.020a7ep-125f, 0.0f, 0.0f,
     0x1.d87d72p-92f, 0.0f, 0x1.1a3e26p-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.c8dd7ap-61f, 0.0f, 0x1.e5ec36p-21f, 0.0f, 0x1.f61ecp-64f,
     0x1.251a1ap-12f, 0.0f, 0x1.4130e4p-116f, 0x1.74719p-106f, 0.0f, 0.0f,
     0x1.b7c1b4p-63f, 0.0f, 0.0f, 0.0f, 0x1.2e8436p-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.37b31ap-59f, 0.0f, 0x1.ea22ep-71f, 0x1.e342ecp-80f, 0x1.99a7e8p-6f,
     0x1.f251f4p-112f, 0.0f, 0x1.9603bap-88f, 0x1.ffaec4p-34f, 0x1.cdf5fp-99f,
     0x1.0e4c96p-109f, 0.0f, 0x1.70df5cp-49f, 0x1.6d906ep-109f, 0x1.94ed88p-113f,
     0.0f, 0.0f, 0x1.83d1d4p-66f, 0x1.d1fc36p-19f, 0.0f, 0x1.1e2bcap-40f, 0.0f,
     0x1.003ad6p-110f, 0x1.d4ac48p-45f, 0.0f, 0.0f, 0x1.b1a3cap-56f, 0.0f, 0.0f,
     0x1.b7c28p-126f, 0x1.067246p-33f, 0x1.ea28f6p-2f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4701b6p-34f, 0x1.fc1436p-98f, 0x1.4230cp-119f, 0.0f, 0.0f, 0x1.32e098p-84f,
     0.0f, 0.0f, 0.0f, 0x1.971c82p-64f, 0x1.b6b26p-66f, 0.0f, 0.0f, 0x1.018bb4p-17f,
     0.0f, 0x1.54c076p-113f, 0x1.d5075p-50f, 0x1.01d442p-61f, 0x1.fb9ep-25f, 0.0f,
     0.0f, 0.0f, 0x1.fa6242p-77f, 0x1.c0dc8ap-35f, 0x1.dc1d18p-66f, 0.0f, 0.0f,
     0x1.e89afcp-27f, 0x1.563f16p-122f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.d012dcp-88f,
     0x1.adb17ep-42f, 0x1.a18fb8p-59f, 0.0f, 0.0f, 0x1.529224p-70f, 0x1.24b714p-17f,
     0.0f, 0x1.25c35ep-76f, 0x1.aeab52p-94f, 0.0f, 0x1.e7e74cp-70f, 0.0f,
     0x1.c6802p-124f, 0x1.843fp-81f, 0x1.82ae56p-47f, 0x1.281394p-125f, 0.0f,
     0x1.8f24a8p-34f, 0x1.b466dcp-117f, 0x1.0e32c6p-96f, 0x1.a317fcp-35f,
     0x1.29ec9ap-37f, 0x1.df0f66p-66f, 0x1.31452cp-87f, 0x1.840f34p-72f, 0.0f, 0.0f,
     0x1.3efc24p-91f, 0.0f, 0x1.5e94bcp-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.77efacp-110f, 0.0f, 0.0f, 0x1.687a94p-79f, 0x1.68fae2p-72f, 0x1.a32cf4p-51f,
     0.0f, 0.0f, 0x1.a340a6p-111f, 0x1.c72b24p-17f, 0x1.89facp-2f, 0x1.1d3dd2p-107f,
     0.0f, 0x1.6fbbccp-23f, 0.0f, 0x1.7a96fp-45f, 0x1.16b7f6p-67f, 0.0f, 0.0f,
     0x1.96fcc6p-18f, 0x1.e9800ep-79f, 0.0f, 0x1p0f, 0x1.bc352p-87f, 0x1.60b2a2p-13f,
     0.0f, 0x1.5b4afap-27f, 0.0f, 0x1.3e6018p-100f, 0x1.da60a8p-88f, 0x1.a15408p-53f,
     0x1.a05a4p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2342ap-61f, 0x1.a2b5f8p-99f,
     0.0f, 0x1.63af24p-56f, 0x1.c7c65p-25f, 0x1.9bf5aap-14f, 0x1.ca4ca2p-71f, 0.0f,
     0.0f, 0.0f, 0x1.2b316cp-45f, 0.0f, 0x1.c11122p-11f, 0x1.6554ap-121f,
     0x1.cf86aap-111f, 0x1.02b84ep-17f, 0x1.944bb6p-34f, 0x1.abac74p-117f, 0.0f, 0.0f,
     0x1.6c1f52p-113f, 0.0f, 0x1.356d78p-120f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b170b8p-97f, 0.0f, 0.0f, 0x1.d73cb8p-10f, 0x1.349466p-99f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.83778p-69f, 0x1.3a2ebep-16f, 0.0f, 0.0f, 0x1.04a184p-16f,
     0x1.f6d7f8p-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3eaef4p-22f, 0.0f,
     0x1.483408p-16f, 0.0f, 0.0f, 0x1.4cabcap-29f, 0x1.895e3p-23f, 0x1.3ca52ap-15f,
     0.0f, 0.0f, 0x1.1150c8p-108f, 0x1.80ce1ep-84f, 0x1.deb8dcp-99f, 0.0f,
     0x1.2d24a6p-51f, 0.0f, 0x1.6f25cp-113f, 0x1.d40788p-26f, 0x1.538d82p-56f,
     0x1.eb729ep-92f, 0x1.ab8ac2p-67f, 0.0f, 0.0f, 0.0f, 0x1.6e465cp-71f, 0.0f,
     0x1.fb63f8p-101f, 0x1.32eb42p-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.30bbaap-57f, 0.0f,
     0x1.a7e20ep-73f, 0x1.05b234p-108f, 0x1.dc2e6ap-88f, 0x1.34fd3ap-51f,
     0x1.9aa7ap-96f, 0x1.8f7d6ep-105f, 0x1.f34d9ep-85f, 0x1.25506p-31f, 0.0f, 0.0f,
     0.0f, 0x1.d1094cp-42f, 0x1.2dd19p-93f, 0.0f, 0x1.b98662p-82f, 0.0f,
     0x1.881bc2p-86f, 0.0f, 0x1.3e51dep-34f, 0x1.3d43c4p-81f, 0x1.efa3fep-96f,
     0x1.cc3924p-15f, 0x1.0e2596p-105f, 0.0f, 0x1.1e562ep-55f, 0.0f, 0x1.19d7b8p-37f,
     0x1.c8d054p-47f, 0x1.7bfca2p-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.46733p-40f,
     0x1.698bfcp-20f, 0.0f, 0x1.7134a4p-31f, 0x1.08c6dap-10f, 0x1.d38eaep-56f,
     0x1.31c534p-97f, 0.0f, 0.0f, 0x1.8e6f4ep-118f, 0x1.e6baa8p-103f, 0.0f, 0.0f,
     0.0f, 0x1.8a887ep-125f, 0x1.36caaap-30f, 0x1.3d6f08p-84f, 0.0f, 0.0f, 0.0f,
     0x1.816564p-125f, 0.0f, 0x1.ecb62p-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a15d2ap-69f,
     0x1.3b7bp-42f, 0.0f, 0x1.910a14p-70f, 0.0f, 0x1.8d0506p-50f, 0x1.9f19a8p-13f,
     0.0f, 0x1.dc48eap-107f, 0x1.eeaa34p-82f, 0x1.1c0144p-1f, 0x1.b6193p-27f,
     0x1.ff2714p-104f, 0.0f, 0.0f, 0x1.fb033ap-47f, 0x1.f0d2bep-102f, 0.0f,
     0x1.5eb878p-14f, 0x1.580116p-75f, 0x1.806792p-28f, 0x1.3cae9cp-98f,
     0x1.1e6c76p-59f, 0x1.7920e4p-122f, 0.0f, 0x1.805dcap-19f, 0x1.315116p-82f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a400fcp-57f, 0x1.5c62fcp-116f, 0.0f, 0.0f,
     0x1.89b55cp-79f, 0.0f, 0.0f, 0.0f, 0x1.7c7ceep-89f, 0x1.80acb8p-119f, 0.0f,
     0x1.dc2074p-113f, 0x1.7dd336p-52f, 0x1.13ff1p-126f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4a0946p-25f, 0.0f, 0x1.1c61d2p-69f, 0.0f, 0x1.7e538ep-23f, 0x1.f71542p-93f,
     0.0f, 0.0f, 0x1.48aebep-18f, 0x1.4ad392p-90f, 0x1.5e2fdcp-20f, 0x1.0f340ap-76f,
     0.0f, 0.0f, 0x1.f5071ep-56f, 0.0f, 0x1.f6bfbp-90f, 0.0f, 0.0f, 0x1.ad6348p-89f,
     0x1.c169cep-123f, 0.0f, 0x1.18a8bp-92f, 0x1.c77002p-118f, 0.0f, 0.0f,
     0x1.b9995ap-77f, 0x1.3832acp-103f, 0x1.0d3f9ap-100f, 0x1.05e3cp-30f,
     0x1.03807cp-26f, 0.0f, 0x1.6e899ap-29f, 0x1.c6be42p-104f, 0.0f, 0x1.abc47ap-86f,
     0x1.a07a62p-5f, 0.0f, 0x1.724fc4p-114f, 0x1.2e545p-109f, 0x1.57391p-108f, 0.0f,
     0.0f, 0x1.81a77ep-39f, 0x1.22851ap-27f, 0.0f, 0x1.649abep-6f, 0x1.4d8a26p-41f,
     0x1.6015d6p-60f, 0x1.ca0f42p-117f, 0x1.0ab9cp-71f, 0x1.2a10c8p-75f,
     0x1.24b6b4p-125f, 0.0f, 0x1.3eb65p-47f, 0x1.2956fep-9f, 0.0f, 0x1.42ab5ep-86f,
     0.0f, 0.0f, 0.0f, 0x1.f4ff78p-28f, 0.0f, 0x1.b3c79ep-37f, 0.0f, 0.0f,
     0x1.bb001p-90f, 0.0f, 0.0f, 0x1.b2e5b8p-86f, 0x1.aa554p-14f, 0.0f,
     0x1.1292c8p-69f, 0.0f, 0.0f, 0x1.e07d64p-99f, 0.0f, 0x1.03ac4ep-1f, 0.0f,
     0x1.e90f8p-74f, 0x1.bfc2a8p-60f, 0x1.33f6b4p-106f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8c9fdep-72f, 0.0f, 0.0f, 0.0f, 0x1.f9eep-69f, 0x1.5511a6p-38f,
     0x1.ca28f6p-7f, 0x1.d804c6p-99f, 0.0f, 0x1.5a50a2p-97f, 0.0f, 0x1.7961acp-109f,
     0x1.be831ep-47f, 0.0f, 0.0f, 0x1.4f36fep-7f, 0.0f, 0x1.71d80ap-86f, 0.0f, 0.0f,
     0x1.f25344p-1f, 0x1.3dff06p-32f, 0.0f, 0.0f, 0x1.cf8ac2p-42f, 0.0f,
     0x1.0f583cp-117f, 0.0f, 0x1.d750c6p-88f, 0x1.8c4096p-34f, 0x1.54c298p-37f, 0.0f,
     0x1.2ae6e6p-62f, 0.0f, 0x1.0bf7a2p-74f, 0x1.b8d7d2p-74f, 0.0f, 0x1.34edfap-104f,
     0x1.6e7b8ep-41f, 0x1.0153cap-51f, 0x1.daff4cp-99f, 0x1.c959cp-117f, 0.0f, 0.0f,
     0x1.f6894ap-45f, 0x1.275dcap-43f, 0x1.4f92a2p-50f, 0x1.0907fap-123f,
     0x1.1c675ep-73f, 0x1.b5bbd6p-107f, 0.0f, 0x1.d513b6p-46f, 0x1.a8336cp-126f, 0.0f,
     0x1.935a2ap-58f, 0x1.98ec64p-13f, 0x1p0f, 0.0f, 0x1.92ad1ap-15f, 0.0f,
     0x1.4a166p-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9d079ap-68f, 0.0f, 0x1.c48098p-63f,
     0.0f, 0.0f, 0x1.09b13ep-29f, 0.0f, 0x1.7d9432p-54f, 0x1.380d3ep-28f,
     0x1.68b7e8p-48f, 0x1.642644p-74f, 0x1.a34832p-50f, 0x1.8b3fe4p-64f, 0.0f, 0.0f,
     0x1.6e5c44p-59f, 0.0f, 0.0f, 0x1.ceba5p-1f, 0x1.2549a6p-42f, 0x1.d32c92p-8f,
     0x1.eab72cp-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.46f58p-27f, 0.0f, 0.0f,
     0x1.d1827ap-17f, 0x1.d7132p-38f, 0x1.9bf7a8p-30f, 0.0f, 0x1.b2a7aap-56f, 0.0f,
     0.0f, 0x1.c15112p-12f, 0.0f, 0.0f, 0x1.6c37d8p-91f, 0x1.595eb8p-124f, 0.0f,
     0x1.8c23a8p-24f, 0.0f, 0.0f, 0x1.b56c74p-56f, 0.0f, 0x1.366ba6p-40f, 0.0f,
     0x1.0dffbep-21f, 0x1.28bd68p-105f, 0x1.5147ecp-22f, 0x1.66fabp-95f,
     0x1.b0b64ap-1f, 0.0f, 0.0f, 0x1.ced028p-14f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fd5cfap-115f, 0x1.3c9dp-2f, 0.0f, 0x1.3cdd74p-87f, 0x1.30e7ecp-124f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.779fc2p-85f, 0.0f, 0.0f, 0x1.4e7b94p-10f, 0x1.98982cp-42f,
     0.0f, 0x1.02c644p-10f, 0x1.36d91ep-37f, 0x1.7a9702p-19f, 0.0f, 0.0f, 0.0f,
     0x1.fea33p-104f, 0.0f, 0.0f, 0.0f, 0x1.e07efp-43f, 0.0f, 0x1.f2bebep-66f, 0.0f,
     0x1.1ac60ep-38f, 0x1.d74b3cp-110f, 0x1.c4333cp-86f, 0.0f, 0.0f, 0.0f,
     0x1.3a4dep-39f, 0x1.1fa9e8p-12f, 0x1.fba90cp-104f, 0.0f, 0.0f, 0x1.1fb734p-1f,
     0.0f, 0x1.9f097p-118f, 0x1.3e0b06p-76f, 0x1.98b172p-10f, 0x1.2a2f1p-124f,
     0x1.6c29fap-112f, 0x1.e2bf2cp-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5d2bbep-11f, 0x1.a5118ep-104f, 0.0f, 0x1.820142p-23f, 0.0f, 0.0f,
     0x1.a0169cp-94f, 0x1.c66148p-14f, 0.0f, 0x1.46051ap-58f, 0x1.05d1e8p-120f,
     0x1.27ed46p-84f, 0.0f, 0x1.f875cap-13f, 0x1.9c7ff2p-52f, 0.0f, 0.0f, 0.0f,
     0x1.d62844p-38f, 0.0f, 0x1.9eb6dp-38f, 0x1.37c41ap-64f, 0x1.1550e8p-71f,
     0x1.6f0cdcp-19f, 0.0f, 0x1.c6c5fep-117f, 0x1.5a4a04p-16f, 0x1.ab8836p-97f, 0.0f,
     0.0f, 0.0f, 0x1.10d31ap-110f, 0x1.d16e8ap-38f, 0x1.c64a02p-126f, 0.0f, 0.0f,
     0x1.ee0d82p-105f, 0.0f, 0x1.62f36ap-38f, 0x1.200a1ep-20f, 0.0f, 0x1.d98e6ap-20f,
     0x1.f9c7eep-84f, 0.0f, 0.0f, 0x1.45593cp-43f, 0x1.204738p-49f, 0.0f, 0.0f,
     0x1.e44cdep-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a87562p-19f, 0x1.fa22aap-71f, 0.0f,
     0x1.820c2p-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b7deep-88f, 0x1.0d26eep-6f,
     0x1.368f9p-89f, 0x1.82b494p-55f, 0.0f, 0x1.df1af6p-49f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.24d3dap-67f, 0x1.76642ap-69f, 0x1.3dbb28p-93f, 0.0f, 0.0f, 0x1.2940e2p-85f,
     0.0f, 0.0f, 0x1.448b06p-64f, 0x1.40f82cp-71f, 0x1.65f25p-51f, 0x1.c6b23ep-23f,
     0x1.ca7e5cp-86f, 0x1.b2c666p-66f, 0.0f, 0.0f, 0.0f, 0x1.853b22p-53f,
     0x1.553862p-43f, 0.0f, 0x1.db7a3p-43f, 0x1.4d6a16p-57f, 0x1.a3a95cp-101f, 0.0f,
     0x1.fc18a2p-14f
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
            tmp2 = remainderf(tmp0, tmp1);
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
    printf("remainderf %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("remainderf bench acc %a\n", global_bench_acc);
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
