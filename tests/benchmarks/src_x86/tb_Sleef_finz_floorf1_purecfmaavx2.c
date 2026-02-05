/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_floorf1_purecfma.c --function \
 *     Sleef_finz_floorf1_purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --bench --no-embedded-bin --target x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <xmmintrin.h>
#include <stdio.h>
#include <inttypes.h>


volatile float external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.ae25eep-5f, 0.0f, 0.0f, 0.0f, 0x1.607efap-78f, 0x1.0daf66p-8f,
     0x1.05c19ap-7f, 0x1.c3e6d6p-79f, 0x1.2154a8p-92f, 0x1.f6236p-29f, 0.0f, 0.0f,
     0.0f, 0x1.7cb9e2p-11f, 0.0f, 0.0f, 0x1.14bae2p-36f, 0x1.36beecp-11f,
     0x1.99f3cap-25f, 0x1.c1ae8ep-100f, 0.0f, 0x1.2b060ep-8f, 0.0f, 0x1.a4560cp-83f,
     0.0f, 0x1.e47c78p-54f, 0.0f, 0.0f, 0x1.7b738cp-5f, 0x1.4a0a0ep-70f, 0.0f,
     0x1.cae738p-8f, 0x1.fdeb3p-4f, 0x1.3784bep-100f, 0x1.c31ce2p-54f,
     0x1.3c837cp-34f, 0.0f, 0.0f, 0.0f, 0x1.7bc5ecp-110f, 0.0f, 0.0f, 0.0f,
     0x1.9a104p-29f, 0.0f, 0.0f, 0x1.88292ep-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3d66ap-99f, 0x1.3b341p-24f, 0x1.722922p-71f, 0.0f, 0.0f, 0x1.ce3fecp-110f,
     0.0f, 0x1.e87c74p-48f, 0x1.be94aep-117f, 0x1.5650aap-84f, 0.0f, 0.0f,
     0x1.bf52dep-8f, 0x1.33f132p-32f, 0x1.bcca3p-16f, 0.0f, 0.0f, 0x1.45598p-82f,
     0x1.dea046p-89f, 0x1.ab9e12p-58f, 0x1.49cc28p-60f, 0.0f, 0x1.81bf82p-6f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f954dep-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e9c2c4p-121f, 0x1.9cbe4p-31f, 0x1.e988bap-105f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7304f6p-26f, 0x1.ffd26cp-20f, 0.0f, 0.0f, 0x1.038886p-56f, 0.0f, 0.0f,
     0x1.c3c77p-99f, 0.0f, 0x1.077d36p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.84951cp-108f,
     0x1.5e247ap-15f, 0.0f, 0x1.ff9f7ap-42f, 0.0f, 0x1.a0964ap-113f, 0.0f,
     0x1.6c25a8p-82f, 0.0f, 0.0f, 0x1.2224c8p-43f, 0x1.551eccp-100f, 0x1.f71978p-44f,
     0x1.735c52p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2b50e6p-83f, 0x1.f15f08p-67f, 0.0f,
     0x1.5a82aep-110f, 0x1.06622ap-103f, 0.0f, 0.0f, 0x1.2835bap-12f, 0.0f, 0.0f,
     0x1.75d3d2p-16f, 0.0f, 0x1.955a98p-90f, 0.0f, 0.0f, 0.0f, 0x1.5693a6p-91f, 0.0f,
     0.0f, 0.0f, 0x1.4e5356p-35f, 0.0f, 0x1.357e82p-12f, 0.0f, 0x1.f2a0c8p-114f,
     0x1.13d55ep-126f, 0.0f, 0x1.2ae352p-86f, 0x1.2bcd1ep-76f, 0x1.d3e514p-88f,
     0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.19a43ap-33f, 0x1.e85ec8p-18f, 0.0f, 0.0f, 0x1.3518f6p-67f, 0x1.0e1a38p-47f,
     0.0f, 0x1.d055d4p-72f, 0.0f, 0.0f, 0x1.e0a2fap-123f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5955a8p-8f, 0x1.dfd848p-46f, 0x1.df2608p-117f, 0x1.b682eep-59f, 0.0f, 0.0f,
     0x1.6765a8p-122f, 0x1.83843ep-18f, 0.0f, 0x1.eaffe4p-34f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.51fcd2p-71f, 0x1.46b7cep-60f, 0x1.f5c288p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.34f704p-21f, 0x1.8ea7dcp-94f, 0.0f, 0x1.6676dcp-92f, 0.0f, 0x1.a008c4p-11f,
     0x1.c81b64p-44f, 0.0f, 0x1.5f908ep-84f, 0x1.64d252p-72f, 0x1.564f6ap-47f,
     0x1.f4666ep-19f, 0.0f, 0x1.88336p-64f, 0.0f, 0x1.d31416p-53f, 0x1.3dc9f2p-126f,
     0.0f, 0.0f, 0.0f, 0x1.88075ep-79f, 0x1.fb4fb6p-48f, 0x1.c53492p-16f, 0.0f,
     0x1.130666p-113f, 0x1.d5a9b4p-110f, 0x1.05a1aep-36f, 0x1.2cd4bap-59f,
     0x1.c9ecf8p-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9c92cep-2f, 0x1.3a953ep-29f,
     0x1.e2cafap-70f, 0x1.f5622ep-29f, 0x1.721cb8p-21f, 0x1.d587e6p-7f,
     0x1.b4469cp-106f, 0x1.19b336p-104f, 0.0f, 0.0f, 0x1.4c801cp-31f, 0.0f,
     0x1.582a5ep-48f, 0x1.d017f8p-17f, 0.0f, 0x1.aad76ep-38f, 0.0f, 0x1.8e63bap-42f,
     0x1.9674fp-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c41058p-125f, 0x1.0461aap-116f, 0.0f,
     0.0f, 0x1.2abeccp-37f, 0x1.579004p-49f, 0.0f, 0x1.29ec5ap-126f, 0.0f,
     0x1.57afd2p-74f, 0.0f, 0x1.a42f2ap-107f, 0x1.2ca9c8p-13f, 0x1.7e28c2p-64f,
     0x1.09492ap-27f, 0x1.c88654p-110f, 0x1.8b8f02p-94f, 0.0f, 0x1.b34838p-3f, 0.0f,
     0.0f, 0.0f, 0x1.766afep-56f, 0.0f, 0x1.ecf234p-27f, 0x1.08f832p-37f,
     0x1.40a25p-88f, 0x1.6d683p-16f, 0.0f, 0x1.8bd0e6p-17f, 0.0f, 0.0f,
     0x1.67c014p-7f, 0x1.5b6916p-64f, 0x1.06be36p-81f, 0x1.7013dp-35f,
     0x1.34f778p-70f, 0.0f, 0x1.459226p-79f, 0x1.05ea2ap-4f, 0x1.ee265ep-123f,
     0x1.dd28a2p-123f, 0.0f, 0.0f, 0.0f, 0x1.bb761cp-113f, 0x1.fda674p-50f, 0.0f,
     0x1.1ba81cp-80f, 0.0f, 0.0f, 0x1.087bfp-73f, 0x1.30ecc4p-93f, 0x1.37e7e6p-123f,
     0.0f, 0x1.681508p-101f, 0x1.bdce2ap-34f, 0x1.08c3dep-115f, 0.0f, 0x1.16aec8p-59f,
     0.0f, 0.0f, 0x1.3a5ccp-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.dceffap-65f, 0x1.1cd438p-92f, 0.0f, 0.0f, 0.0f, 0x1.553f86p-9f, 0.0f,
     0x1.dddb62p-70f, 0x1.6098f2p-24f, 0.0f, 0.0f, 0x1.d590e2p-109f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.552584p-63f, 0.0f, 0.0f, 0x1.bbb136p-1f, 0x1.3e3f4ep-32f,
     0x1.5e46b6p-31f, 0x1.035a0ep-50f, 0.0f, 0x1.346a1ap-112f, 0.0f, 0.0f,
     0x1.e2ab22p-81f, 0x1.0fbcdep-107f, 0.0f, 0x1.5a57d2p-92f, 0x1.f65428p-26f, 0.0f,
     0x1.b11eacp-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.81dep-20f, 0x1.f6c65cp-120f, 0.0f,
     0x1.c8e4c6p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7d032ap-110f, 0.0f,
     0.0f, 0x1.f85502p-78f, 0.0f, 0.0f, 0x1.09015p-81f, 0.0f, 0x1.65a85ap-63f, 0.0f,
     0x1.b7f0fap-99f, 0.0f, 0x1.31cd28p-115f, 0.0f, 0.0f, 0x1.68aa04p-97f, 0.0f, 0.0f,
     0.0f, 0x1.8e8712p-116f, 0x1.5e7c92p-67f, 0.0f, 0x1.1d4e7ep-66f, 0.0f,
     0x1.d88e16p-121f, 0.0f, 0.0f, 0x1.cd4baap-42f, 0x1.86536ap-46f, 0.0f,
     0x1.4f9df8p-80f, 0.0f, 0.0f, 0x1.d469eap-71f, 0x1.8a0878p-31f, 0.0f,
     0x1.1e0f56p-31f, 0.0f, 0x1.8af49p-18f, 0x1.fa087cp-95f, 0x1.855592p-86f, 0.0f,
     0x1.46908ep-3f, 0.0f, 0.0f, 0x1.da202ap-73f, 0.0f, 0.0f, 0x1.eb0afap-55f,
     0x1.76bbfap-56f, 0.0f, 0.0f, 0.0f, 0x1.2c0ae4p-78f, 0x1.aee85ep-50f, 0.0f,
     0x1.c1f0a8p-92f, 0x1.8290b4p-27f, 0.0f, 0x1.1d2f26p-53f, 0x1.29fcf8p-116f, 0.0f,
     0x1.e56adap-38f, 0x1.27c2dap-68f, 0.0f, 0.0f, 0x1.67229p-63f, 0x1.bdfacep-22f,
     0.0f, 0x1.7203a2p-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9e4362p-116f, 0.0f,
     0x1.990c5ap-105f, 0.0f, 0.0f, 0x1.45cd08p-88f, 0x1.08e7ccp-31f, 0.0f,
     0x1.064c78p-3f, 0.0f, 0x1.565408p-120f, 0.0f, 0x1.138c8ap-14f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f25d7cp-22f, 0x1.380aep-37f, 0x1.2dd32cp-116f, 0x1.fd9598p-88f,
     0x1.88b8a2p-93f, 0.0f, 0.0f, 0x1.c36158p-20f, 0x1.b8e9aep-36f, 0x1.74438ap-5f,
     0.0f, 0.0f, 0x1.02b0fcp-116f, 0x1.47cf2ap-58f, 0x1.45ab3p-80f, 0.0f, 0.0f, 0.0f,
     0x1.17c6c8p-50f, 0.0f, 0x1.120fb8p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fa0cf6p-31f, 0.0f, 0.0f, 0x1.675fa2p-90f, 0x1.6b5b5ap-39f, 0x1.eabb74p-100f,
     0.0f, 0x1.865282p-29f, 0x1.8a09f4p-119f, 0.0f, 0.0f, 0.0f, 0x1.79117ep-81f, 0.0f,
     0x1.d53ac2p-100f, 0.0f, 0.0f, 0x1.0b50bp-51f, 0.0f, 0.0f, 0.0f, 0x1.50708cp-87f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c4687ap-17f, 0x1.c0f792p-15f, 0x1.e90b88p-6f, 0.0f,
     0.0f, 0.0f, 0x1.fcec0cp-104f, 0x1p0f, 0x1.f54b2cp-93f, 0.0f, 0.0f,
     0x1.2b2c22p-67f, 0x1.cdce36p-93f, 0x1.674deap-55f, 0x1.08e56p-3f, 0.0f, 0.0f,
     0.0f, 0x1.f7fbf8p-72f, 0x1.5c3168p-116f, 0.0f, 0.0f, 0x1.757ee2p-7f, 0.0f,
     0x1.461p-121f, 0.0f, 0.0f, 0x1.7addaap-28f, 0x1.d5fe72p-63f, 0x1.72bb98p-65f,
     0.0f, 0x1.088ecep-76f, 0x1.4c0e0cp-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9d954cp-2f, 0x1.60fb88p-105f, 0.0f, 0.0f, 0.0f, 0x1.68e38ap-21f,
     0x1.fce396p-113f, 0x1.cd8134p-86f, 0.0f, 0x1.ede6ecp-44f, 0x1.bb22a8p-50f,
     0x1.46f0c4p-31f, 0x1.78a7bep-123f, 0.0f, 0.0f, 0.0f, 0x1.130714p-97f,
     0x1.c048ecp-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9df6p-19f, 0x1.37066ep-71f,
     0.0f, 0x1.0571aap-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.238b8ap-89f, 0.0f, 0x1.226228p-79f, 0x1.b03a8cp-62f, 0.0f, 0x1.02cfdap-85f,
     0x1.19b006p-3f, 0x1.6e4bd4p-26f, 0x1.efe682p-38f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6fc9aep-58f, 0.0f, 0x1.0c3bfep-1f, 0.0f, 0x1.f958f8p-4f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.6ce924p-2f, 0x1.100746p-18f, 0x1.a708ecp-31f, 0x1.4947d6p-36f, 0.0f,
     0x1.4a1532p-114f, 0.0f, 0x1.ef9ad4p-13f, 0.0f, 0.0f, 0x1.d2aa32p-22f, 0.0f, 0.0f,
     0.0f, 0x1.f56a78p-54f, 0x1.7cfb1cp-56f, 0x1.89236ep-17f, 0x1.eb4bc4p-56f, 0.0f,
     0.0f, 0x1.4fb79p-121f, 0.0f, 0.0f, 0x1.4a37bap-61f, 0x1.8831d6p-116f, 0.0f,
     0x1.2f27c2p-65f, 0.0f, 0x1.698aaep-66f, 0.0f, 0x1.41fbc4p-8f, 0.0f, 0.0f, 0.0f,
     0x1.e55dc4p-118f, 0.0f, 0.0f, 0x1.399baap-57f, 0x1.eaccc6p-11f, 0x1.3ba5fp-118f,
     0x1.e90198p-46f, 0.0f, 0.0f, 0.0f, 0x1.afd86p-89f, 0x1.8de27p-61f, 0.0f, 0.0f,
     0.0f, 0x1.a8eb92p-63f, 0x1.e738eap-39f, 0.0f, 0x1.d9dbc2p-52f, 0.0f,
     0x1.ccf504p-56f, 0.0f, 0.0f, 0.0f, 0x1.fb6146p-99f, 0x1.b7257ap-49f,
     0x1.c5fe76p-56f, 0.0f, 0.0f, 0.0f, 0x1.fe460ap-23f, 0x1.3b2df2p-115f, 0.0f,
     0x1.ca8a34p-33f, 0.0f, 0.0f, 0x1.984224p-122f, 0.0f, 0x1.14fa7p-49f,
     0x1.2726acp-65f, 0.0f, 0.0f, 0x1.669c06p-42f, 0.0f, 0x1.90560cp-13f,
     0x1.047028p-23f, 0x1p0f, 0.0f, 0x1.720ffp-119f, 0.0f, 0x1.c196c2p-42f,
     0x1.ce7c4p-111f, 0.0f, 0.0f, 0x1.21476ep-47f, 0.0f, 0.0f, 0x1.64b278p-113f, 0.0f,
     0.0f, 0x1.ce507cp-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f639cep-64f, 0.0f,
     0x1.abc7d4p-61f, 0.0f, 0.0f, 0x1.c3f7fcp-102f, 0x1.9ce50cp-44f, 0.0f, 0.0f,
     0x1.dd5ff6p-14f, 0.0f, 0x1.f9614ap-83f, 0.0f, 0x1.1be62ep-61f, 0x1.ec6a74p-3f,
     0x1.ab432ep-11f, 0x1.0b70e2p-48f, 0.0f, 0x1.e4def8p-102f, 0.0f, 0.0f, 0.0f,
     0x1.a7e0acp-17f, 0.0f, 0x1.bfe304p-12f, 0.0f, 0.0f, 0x1.959482p-15f, 0.0f, 0.0f,
     0x1.ee95fep-43f, 0.0f, 0x1.05cddp-33f, 0.0f, 0x1.6aee9p-7f, 0.0f,
     0x1.5c0b22p-52f, 0.0f, 0.0f, 0x1.86bacap-10f, 0.0f, 0x1.9e3p-45f,
     0x1.dd830ap-63f, 0.0f, 0.0f, 0x1.caf716p-60f, 0x1.29c5e8p-99f, 0.0f,
     0x1.ddbee2p-97f, 0x1.45cc3cp-41f, 0x1.5a2e6cp-30f, 0x1.112aeep-14f,
     0x1.c78af6p-34f, 0.0f, 0x1.cde4e4p-35f, 0x1.3aa9acp-27f, 0.0f, 0x1.4b670ap-12f,
     0x1.eeb8d4p-104f, 0.0f, 0.0f, 0x1.970df6p-103f, 0x1.dd2c94p-119f,
     0x1.32e14cp-89f, 0x1.bfafbp-49f, 0x1.3bea6cp-36f, 0.0f, 0x1.623b86p-105f,
     0x1.8bfb58p-5f, 0x1.63b736p-106f, 0x1.a44c14p-76f, 0x1.ab226ap-25f,
     0x1.5304bp-31f, 0x1.1fe4dep-119f, 0.0f, 0x1.5945fcp-79f, 0x1.03805cp-92f,
     0x1.de0cf2p-54f, 0x1.ac461p-9f, 0x1.800188p-61f, 0.0f, 0x1.d24bbcp-113f,
     0x1.b62338p-45f, 0.0f, 0.0f, 0x1.68f52ep-40f, 0.0f, 0x1.d7eaeep-71f, 0.0f, 0.0f,
     0.0f, 0x1.b31a46p-39f, 0.0f, 0x1.aff242p-18f, 0x1.288a1cp-18f, 0.0f,
     0x1.3d55acp-95f, 0x1.f8e5b2p-15f, 0.0f, 0.0f, 0x1.b79014p-30f, 0.0f,
     0x1.e128d2p-72f, 0x1.4a68e6p-68f, 0.0f, 0x1.53dddap-95f, 0x1.570018p-57f,
     0x1.e029p-65f, 0x1.519dbcp-70f, 0.0f, 0.0f, 0x1.8b0096p-39f, 0.0f, 0.0f,
     0x1.7a99bep-121f, 0x1.812e1p-20f, 0.0f, 0.0f, 0x1.e88e08p-47f, 0x1.17338ep-109f,
     0x1.ae24bp-101f, 0.0f, 0x1.96fffp-65f, 0.0f, 0.0f, 0.0f, 0x1.363c0cp-37f,
     0x1.2ab00ap-126f, 0.0f, 0.0f, 0x1.301a34p-123f, 0.0f, 0.0f, 0x1.bb05c8p-12f,
     0x1.2b5286p-47f, 0x1.c20428p-61f, 0.0f, 0x1.bd08f2p-10f, 0x1.4b888ap-15f, 0.0f,
     0x1.5278e4p-17f, 0.0f, 0x1.a06c84p-95f, 0.0f, 0.0f, 0.0f, 0x1.73f1ccp-36f, 0.0f,
     0.0f, 0.0f, 0x1.8a3d22p-22f, 0.0f, 0x1.2904d2p-38f, 0x1.91edcap-37f,
     0x1.d29e16p-15f, 0x1.77ef14p-64f, 0.0f, 0.0f, 0x1.0c8a0ep-110f, 0x1.f02b3cp-66f,
     0.0f, 0.0f, 0x1.d2997ep-124f, 0x1.87dbd4p-121f, 0.0f, 0x1.a4436p-8f, 0.0f,
     0x1.3b26f4p-121f, 0.0f, 0.0f, 0.0f, 0x1.765eep-90f, 0x1.8ad076p-74f, 0.0f, 0.0f,
     0x1.bb855ap-69f, 0x1.7cfe7p-82f, 0x1.6453e2p-69f, 0.0f, 0x1.6660bp-35f,
     0x1.0ebcd6p-84f, 0x1.ac2128p-116f, 0x1.71e846p-85f, 0.0f, 0x1.ede93p-58f, 0.0f,
     0.0f, 0x1.fff158p-107f, 0x1.592eb6p-80f, 0x1.d99f88p-106f, 0.0f, 0.0f,
     0x1.ff3c7cp-114f, 0x1.5b7d52p-120f, 0.0f, 0.0f, 0x1.77b838p-62f, 0x1.f933aep-34f,
     0x1p0f, 0x1.ef9702p-48f, 0.0f, 0.0f, 0x1.65d084p-43f, 0x1.9c9cbcp-49f, 0.0f,
     0x1.fc8de4p-52f, 0.0f, 0.0f, 0.0f, 0x1.a75c06p-37f, 0.0f, 0x1.9f36eep-92f, 0.0f,
     0x1.b0b398p-79f, 0x1.ac0b0ep-118f, 0.0f, 0x1.7a6342p-38f, 0.0f, 0x1.d8d3aep-42f,
     0.0f, 0x1.43c622p-73f, 0x1.6b5e18p-106f, 0x1.5d5cbep-73f, 0.0f, 0x1.1582ccp-7f,
     0.0f, 0x1.08f742p-85f, 0.0f, 0.0f, 0x1.119654p-111f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.eca3cep-31f, 0x1.d1787ap-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cd83b2p-114f, 0.0f,
     0x1.d92328p-79f, 0x1.4ce166p-63f, 0.0f, 0.0f, 0x1.3a7b98p-37f, 0x1.c823bep-126f,
     0.0f, 0x1.79449p-7f, 0x1.6f93dcp-31f, 0x1.47f35cp-3f, 0x1.94378ep-18f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e2c4aap-38f, 0.0f, 0.0f, 0x1.0bd4a8p-54f, 0.0f,
     0x1.54c65ep-116f, 0.0f, 0x1.8fd868p-102f, 0x1.4ef9b2p-83f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f
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
    
    global_bench_acc = 0.0f;
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
        float bench_acc;
        int32_t i;
        __m128 carg;
        __m128 carg1;
        __m128 carg2;
        float tmp0;
        int32_t tmp1;

        i = INT32_C(0);
        bench_acc = 0.0f;

        for (;(i < INT32_C(1001));){
            float tmp0;
            float tmp1;
            __m128 carg;
            __m128 carg1;
            __m128 carg2;
            float tmp2;
            int32_t tmp3;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_finz_floorf1_purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            carg = _mm_set_ss(bench_acc);
            carg1 = _mm_set_ss(tmp1);
            carg2 = _mm_add_ss(carg, carg1);
            tmp2 = _mm_cvtss_f32(carg2);
            bench_acc = tmp2;
            tmp3 = i + INT32_C(1);
            i = tmp3;
        }
        carg = _mm_set_ss(global_bench_acc);
        carg1 = _mm_set_ss(bench_acc);
        carg2 = _mm_add_ss(carg, carg1);
        tmp0 = _mm_cvtss_f32(carg2);
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
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_finz_floorf1_purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_floorf1_purecfma bench acc %a\n", global_bench_acc);
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
