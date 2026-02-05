/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_cbrtf1_u35purecfma.c --function \
 *     Sleef_finz_cbrtf1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0x1.5c806cp-52f, 0x1.501f9ep-115f, 0x1.c04438p-110f, 0.0f, 0.0f,
     0x1.68fdaap-69f, 0.0f, 0x1.c46794p-107f, 0.0f, 0.0f, 0.0f, 0x1.f958c8p-41f, 0.0f,
     0x1.cc8aep-96f, 0.0f, 0.0f, 0x1.70754p-32f, 0x1.bd58b4p-28f, 0.0f, 0.0f,
     0x1.86df9ep-5f, 0.0f, 0.0f, 0x1.a2ec4cp-33f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2286ap-39f, 0x1.a4417ap-122f, 0.0f, 0.0f, 0x1.ca28bap-46f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.11fb02p-60f, 0x1.e2654ap-69f, 0.0f, 0x1.42fe0cp-74f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.3fb74ep-20f, 0x1.d4e45p-76f, 0x1.2d22e4p-121f, 0x1.79e3e8p-62f,
     0x1.9ecd72p-47f, 0.0f, 0x1.01e1f2p-29f, 0x1.7ffba2p-20f, 0.0f, 0.0f,
     0x1.0cca32p-51f, 0.0f, 0.0f, 0.0f, 0x1.81198ep-66f, 0.0f, 0x1.ce2c12p-90f, 0.0f,
     0x1.12f7c6p-45f, 0.0f, 0.0f, 0x1.5a25b8p-18f, 0x1.b30b5p-79f, 0x1.c5d81cp-126f,
     0.0f, 0x1.e2886ap-43f, 0x1.34381ep-73f, 0.0f, 0x1.37843ep-40f, 0.0f, 0.0f,
     0x1.b34efep-74f, 0x1.05ae1p-2f, 0.0f, 0x1.2b9edap-5f, 0.0f, 0x1.05b00cp-89f,
     0x1.1637e4p-123f, 0x1.7c3056p-37f, 0x1.8a1f16p-91f, 0.0f, 0.0f, 0x1.28e3a6p-80f,
     0x1.957e96p-86f, 0.0f, 0.0f, 0x1.8db7dep-75f, 0x1.d797f8p-123f, 0.0f,
     0x1.cb1514p-66f, 0.0f, 0.0f, 0x1.80a414p-53f, 0x1.402676p-61f, 0.0f,
     0x1.1c92c4p-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5b88d2p-31f, 0x1.44b904p-57f, 0.0f,
     0x1.b31b4ep-73f, 0x1.06bc6cp-28f, 0.0f, 0x1.f15892p-39f, 0.0f, 0.0f,
     0x1.3be812p-92f, 0x1.9f10a6p-79f, 0.0f, 0.0f, 0x1.ae733p-59f, 0.0f,
     0x1.860ecep-39f, 0x1.10ffe8p-37f, 0x1.e6097cp-56f, 0x1.8a853ep-58f,
     0x1.9e61b6p-83f, 0x1.5b92cep-86f, 0.0f, 0.0f, 0x1.7b5de4p-82f, 0.0f, 0.0f,
     0x1.d8d754p-40f, 0.0f, 0.0f, 0x1.ed32dep-22f, 0x1.e04c9cp-65f, 0x1.d48fcap-67f,
     0x1.284052p-88f, 0x1.0adc76p-93f, 0x1.0d217p-30f, 0x1.b6443p-107f, 0.0f,
     0x1.cc69bap-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f5b894p-67f,
     0x1.1fe0e8p-27f, 0x1.1bad06p-117f, 0.0f, 0x1.7f5e04p-120f, 0x1.543692p-17f,
     0x1.7020fcp-35f, 0x1.40e21cp-111f, 0x1.ba0d84p-100f, 0x1.671412p-93f, 0.0f,
     0x1.2891a8p-56f, 0.0f, 0.0f, 0x1.c2b7bap-49f, 0x1.935364p-25f, 0.0f, 0.0f,
     0x1.bf321cp-16f, 0x1.8912d8p-16f, 0x1.13fbd2p-17f, 0x1.af284cp-107f,
     0x1.0aec5p-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.84addcp-51f, 0x1.9914bep-79f,
     0.0f, 0x1.b908a8p-82f, 0x1.369966p-21f, 0.0f, 0x1.83d4dcp-29f, 0.0f, 0.0f,
     0x1.afef4ep-38f, 0x1.486004p-88f, 0x1.3363c8p-85f, 0x1.89c2b6p-36f,
     0x1.b536fap-64f, 0.0f, 0x1.1e5fc8p-91f, 0x1.71f3cp-58f, 0x1.0f26fap-39f,
     0x1.1cfb1ep-101f, 0x1.80a5d8p-21f, 0.0f, 0x1.cb7c28p-1f, 0.0f, 0.0f,
     0x1.1d7f2ap-117f, 0x1.624896p-24f, 0x1.3a1aa6p-104f, 0x1.488e82p-11f,
     0x1.9df526p-119f, 0x1.33f43p-4f, 0.0f, 0x1.7f8f2cp-70f, 0.0f, 0x1.13b63cp-48f,
     0x1.d33eccp-126f, 0x1.e5c8dep-22f, 0.0f, 0x1.5310f8p-52f, 0.0f, 0x1.b9422p-113f,
     0.0f, 0.0f, 0.0f, 0x1.d0229ap-73f, 0.0f, 0x1.a9bbb2p-49f, 0.0f, 0.0f,
     0x1.cdebfcp-62f, 0x1.3f1cb8p-48f, 0.0f, 0x1.c43f4ap-94f, 0x1.64f2b2p-31f,
     0x1.658a12p-14f, 0.0f, 0.0f, 0.0f, 0x1.03505p-91f, 0x1.c84206p-124f,
     0x1.01ae0ap-101f, 0.0f, 0.0f, 0x1.18f48p-69f, 0.0f, 0x1.9892dap-98f,
     0x1.c4a278p-108f, 0.0f, 0.0f, 0x1.408d88p-84f, 0x1.bc4676p-45f, 0x1.a61868p-88f,
     0x1.3bd8c6p-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1ca408p-46f, 0x1.28c79ep-22f,
     0.0f, 0.0f, 0.0f, 0x1.867cd2p-82f, 0.0f, 0.0f, 0x1.f3029ep-57f, 0x1.15624cp-93f,
     0x1.e7ed94p-5f, 0x1.03d574p-73f, 0x1.c49f92p-57f, 0.0f, 0x1.52d62ap-17f,
     0x1.4cb3bp-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.258d56p-74f, 0.0f, 0x1.bb2d8ep-62f,
     0x1.b87376p-107f, 0x1.790906p-12f, 0x1.f81814p-74f, 0x1.b719a6p-24f,
     0x1.35eb08p-28f, 0.0f, 0.0f, 0x1.e4fc8ep-110f, 0x1.6e7a3ep-45f, 0.0f,
     0x1.7070e4p-20f, 0.0f, 0.0f, 0x1.52675cp-32f, 0x1.62432p-84f, 0.0f, 0.0f,
     0x1.f4aa66p-91f, 0x1.e121d4p-27f, 0x1.da7ac2p-77f, 0.0f, 0x1.085p-42f, 0.0f,
     0x1.5067f8p-59f, 0x1.7b9a94p-52f, 0x1.c9480ep-20f, 0.0f, 0x1.00f00cp-7f,
     0x1.99f52cp-5f, 0x1.c700f6p-105f, 0.0f, 0x1.e889b8p-66f, 0.0f, 0x1.41317ep-111f,
     0.0f, 0.0f, 0x1.6c4f9ep-54f, 0.0f, 0x1.0f6c12p-40f, 0.0f, 0x1.a98ep-79f, 0.0f,
     0x1.9a0ba6p-90f, 0x1.bac268p-86f, 0x1.a84892p-91f, 0x1.83ecfp-97f, 0.0f, 0.0f,
     0x1.2c180cp-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.54c4p-102f, 0x1.02ed7ap-94f,
     0x1.2cb4d8p-29f, 0x1.91f9fp-42f, 0.0f, 0.0f, 0.0f, 0x1.a35144p-70f,
     0x1.17135p-77f, 0x1.32d598p-56f, 0x1.c6deap-72f, 0.0f, 0x1.338648p-94f,
     0x1.3b1e72p-83f, 0x1.55beap-10f, 0x1.6fdb92p-76f, 0x1.36ee6p-93f,
     0x1.0081f2p-57f, 0.0f, 0.0f, 0.0f, 0x1.724cbep-52f, 0.0f, 0x1.33b67cp-102f,
     0x1.dc3ef4p-25f, 0x1.497ef6p-86f, 0.0f, 0x1.bc65fap-22f, 0x1.34beaep-120f,
     0x1.0426e8p-4f, 0.0f, 0x1.385f6cp-6f, 0.0f, 0.0f, 0.0f, 0x1.0ed8bp-101f,
     0x1.719702p-103f, 0.0f, 0x1.85c8d2p-41f, 0x1.23631p-27f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5ca4b2p-61f, 0x1.2777ccp-35f, 0x1.b8b728p-105f,
     0x1.43745ap-50f, 0x1.0d78c4p-111f, 0x1.f0e41ap-91f, 0x1.3b975p-81f,
     0x1.4828d6p-119f, 0x1.eddf22p-85f, 0.0f, 0x1.ba4cdcp-33f, 0x1.43a19cp-70f,
     0x1.894a82p-59f, 0x1.d724b8p-58f, 0x1.9274f8p-60f, 0.0f, 0.0f, 0x1.ae6082p-80f,
     0x1.ce7898p-62f, 0x1.ccc844p-109f, 0.0f, 0.0f, 0.0f, 0x1.a1d82ep-102f, 0.0f,
     0.0f, 0x1.4c1e88p-109f, 0x1.530f94p-53f, 0.0f, 0x1.6f5704p-107f, 0x1.502d64p-29f,
     0.0f, 0.0f, 0x1.8a56e4p-21f, 0.0f, 0x1.ac4a6p-87f, 0.0f, 0.0f, 0x1.e3c30cp-12f,
     0.0f, 0x1p0f, 0.0f, 0x1.a69d04p-80f, 0x1.29bf66p-61f, 0.0f, 0.0f,
     0x1.183b72p-90f, 0x1.3806b4p-90f, 0x1.6df292p-102f, 0x1.30d234p-73f,
     0x1.614a2ap-123f, 0x1.7b245cp-103f, 0.0f, 0x1.31dc88p-121f, 0.0f, 0.0f,
     0x1.be9d68p-123f, 0x1.fb451ap-118f, 0x1.9a35c8p-9f, 0x1.27aee8p-5f,
     0x1.f099dp-105f, 0x1.feb88ep-26f, 0x1.4001fp-57f, 0x1.f05e6ap-55f,
     0x1.ff4df6p-57f, 0.0f, 0.0f, 0x1.4a961cp-57f, 0.0f, 0x1.65b85ep-4f,
     0x1.55c47cp-96f, 0x1.c15eeep-96f, 0x1.d82fep-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.5fd636p-37f, 0.0f, 0x1.baee16p-5f, 0x1.561a84p-118f, 0.0f, 0.0f,
     0x1.820ffcp-42f, 0.0f, 0.0f, 0x1.8d7d8ap-52f, 0x1.36140cp-9f, 0x1.afd4bep-31f,
     0x1.e3bd06p-105f, 0x1.c80d8ap-115f, 0.0f, 0x1.a19848p-100f, 0.0f,
     0x1.a8e318p-118f, 0.0f, 0.0f, 0.0f, 0x1.bf816ep-69f, 0.0f, 0.0f, 0x1.2ab44p-88f,
     0x1.65642p-51f, 0.0f, 0.0f, 0x1.9999d8p-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.52aedep-121f, 0.0f, 0.0f, 0.0f, 0x1.92187cp-30f, 0x1.d8a6e8p-85f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.9c81bep-34f, 0x1.d576b8p-66f, 0x1.2b4636p-88f, 0.0f,
     0x1.6f54bcp-41f, 0x1.26170cp-5f, 0.0f, 0x1.349ec2p-34f, 0x1.7c343cp-69f, 0.0f,
     0x1.02888ap-17f, 0.0f, 0x1.b5efa8p-71f, 0x1.06ac7ap-7f, 0x1.323f64p-55f,
     0x1.69a112p-99f, 0.0f, 0.0f, 0.0f, 0x1.399d24p-79f, 0x1.b0564ep-58f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.efd22cp-114f, 0.0f, 0.0f, 0.0f, 0x1.ff9f3cp-76f,
     0x1.7c2ab8p-47f, 0.0f, 0x1.eeca52p-59f, 0.0f, 0.0f, 0.0f, 0x1.edf1dcp-28f,
     0x1.27ce2ep-52f, 0.0f, 0.0f, 0x1.06f42cp-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c763eep-104f, 0x1.fa1aeap-33f, 0.0f, 0x1.7f1116p-21f, 0.0f, 0x1.58a036p-110f,
     0.0f, 0x1.257ff2p-106f, 0.0f, 0x1.7ed7bcp-28f, 0x1.9b79fcp-93f, 0.0f,
     0x1.f9f1a8p-18f, 0x1.6d6c6ap-71f, 0x1.d3236ep-29f, 0x1.d22044p-16f, 0.0f, 0.0f,
     0x1.2748b4p-14f, 0.0f, 0x1.9836dcp-60f, 0x1.0d45ap-5f, 0.0f, 0.0f,
     0x1.148606p-15f, 0x1.466cd4p-97f, 0.0f, 0x1.63f6e8p-96f, 0.0f, 0x1.860fbp-116f,
     0.0f, 0.0f, 0x1.e2a2fcp-33f, 0.0f, 0x1.597164p-16f, 0.0f, 0x1.dbfaa8p-47f, 0.0f,
     0x1.3dbaf2p-121f, 0.0f, 0x1.89cd02p-125f, 0.0f, 0x1.1ab484p-31f, 0x1.a7a3bap-21f,
     0x1.0cbc1ep-117f, 0.0f, 0.0f, 0.0f, 0x1.b97f48p-33f, 0.0f, 0.0f,
     0x1.ac0eb4p-113f, 0x1.70a992p-97f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f,
     0x1.aaf66ap-43f, 0.0f, 0x1.0a2c3ep-71f, 0.0f, 0x1.3076dp-18f, 0x1.1b0dep-44f,
     0x1.d4d242p-114f, 0x1.13ab8ap-103f, 0.0f, 0.0f, 0x1.f1bd3cp-40f, 0x1.4f42ap-74f,
     0x1.13fad2p-98f, 0x1.bb51d6p-89f, 0.0f, 0.0f, 0x1.2ea1ep-68f, 0.0f,
     0x1.fb63b8p-14f, 0.0f, 0x1.5a7c12p-63f, 0.0f, 0.0f, 0x1.ccda16p-16f,
     0x1.1b2a68p-110f, 0x1.ccec42p-32f, 0x1.36b76ap-57f, 0x1.c0af7cp-80f,
     0x1.6babc2p-126f, 0.0f, 0x1.5fa2fep-89f, 0x1.dec37cp-92f, 0.0f, 0.0f,
     0x1.855dfep-44f, 0x1.a4c34ap-19f, 0.0f, 0x1.d372c4p-23f, 0x1.0ce5dep-36f,
     0x1.1fa18p-114f, 0x1.5be5cp-28f, 0x1.b6b046p-33f, 0.0f, 0.0f, 0.0f,
     0x1.a337d6p-40f, 0.0f, 0.0f, 0x1.a84fdp-23f, 0x1.169f76p-27f, 0.0f,
     0x1.f54056p-51f, 0.0f, 0.0f, 0x1.468e78p-125f, 0.0f, 0x1.0065b4p-27f, 0.0f, 0.0f,
     0x1.d9f2cp-69f, 0x1.98d316p-97f, 0x1.6ea116p-26f, 0.0f, 0x1.4c2734p-123f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6bbb9p-11f, 0x1.7ad94p-65f, 0x1.64ee9ap-30f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.8b6688p-26f, 0x1.d3f268p-8f, 0x1.209a4ep-47f,
     0x1.3cc4ecp-56f, 0.0f, 0.0f, 0x1.8d3f4p-101f, 0x1.c18f42p-66f, 0x1.4c196cp-10f,
     0x1.63da2p-12f, 0.0f, 0.0f, 0x1.5eb8bcp-94f, 0.0f, 0x1.6318f2p-67f, 0.0f, 0.0f,
     0.0f, 0x1.4c97d6p-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.25b758p-21f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.76069ap-110f, 0.0f, 0x1.4fb6aep-103f,
     0x1.c94cfcp-59f, 0x1.32c2dap-92f, 0x1.6aa8fp-124f, 0.0f, 0x1.ac11b4p-82f, 0.0f,
     0.0f, 0x1.f6e974p-10f, 0x1.f7430ep-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e47372p-40f, 0.0f, 0.0f, 0.0f, 0x1.8c2b28p-17f, 0.0f, 0x1.f8c678p-51f,
     0x1.421ffcp-24f, 0.0f, 0x1.10661ep-31f, 0x1.bc215cp-88f, 0.0f, 0x1.e0e0cep-38f,
     0x1.c6916ep-29f, 0.0f, 0.0f, 0x1.07fddep-107f, 0x1.224602p-39f, 0x1.3b927ap-91f,
     0.0f, 0x1.c0d6c8p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1ab2a8p-11f,
     0x1.57abd2p-21f, 0.0f, 0x1.f2e1ecp-89f, 0x1.e7d626p-6f, 0.0f, 0.0f,
     0x1.4ebbc2p-108f, 0x1.2dc718p-33f, 0x1.a1952cp-75f, 0x1.1fe578p-48f,
     0x1.339e88p-11f, 0.0f, 0x1.810c5p-115f, 0.0f, 0.0f, 0x1.cda868p-11f,
     0x1.df68bp-104f, 0x1.71bebcp-61f, 0.0f, 0x1.8ca4ecp-118f, 0x1.5f98d4p-59f, 0.0f,
     0x1.849822p-106f, 0.0f, 0.0f, 0x1.9b489cp-122f, 0x1.a07df2p-25f, 0.0f,
     0x1.498da2p-9f, 0.0f, 0.0f, 0x1.23835p-107f, 0x1.5eeffcp-77f, 0.0f,
     0x1.faea2cp-46f, 0.0f, 0.0f, 0x1.84cef8p-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.aae0c8p-3f, 0x1.f67072p-125f, 0.0f, 0.0f, 0x1.9afa9cp-8f, 0.0f,
     0x1.e9a3cp-21f, 0.0f, 0x1.6010cap-11f, 0x1.f9a602p-23f, 0.0f, 0.0f,
     0x1.5a45ccp-33f, 0.0f, 0.0f, 0.0f, 0x1.3d6ed8p-108f, 0x1.c8e6a8p-49f,
     0x1.84b5eep-63f, 0.0f, 0x1.dfaaa8p-101f, 0x1.0e1266p-40f, 0.0f, 0.0f, 0.0f,
     0x1.3e7b86p-56f, 0.0f, 0x1.7a970ap-58f, 0.0f, 0x1.93d824p-17f, 0.0f,
     0x1.c007d8p-20f, 0.0f, 0x1.f6ebd4p-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.08ce38p-90f,
     0.0f, 0.0f, 0x1.499852p-35f, 0.0f, 0.0f, 0x1.249bacp-92f, 0x1.18d0ap-65f,
     0x1.31f3dep-96f, 0.0f, 0x1.3be454p-30f, 0.0f, 0x1.56e9c4p-92f, 0.0f, 0.0f,
     0x1.39daa6p-100f, 0x1.c4dbd8p-71f, 0.0f, 0x1.9003bap-1f, 0x1.95ec78p-34f,
     0x1.bc196ap-124f, 0x1.26f5e6p-12f, 0.0f, 0x1.c00f8p-80f, 0.0f, 0x1.d139ap-125f,
     0x1.6e9ad2p-87f, 0x1.e0f33ep-26f, 0.0f, 0x1.021f64p-12f, 0x1.6151fap-75f, 0.0f,
     0x1.50613ep-97f, 0x1.bd9cfp-15f, 0x1.687da2p-63f, 0.0f, 0.0f, 0x1.bf2b8cp-21f,
     0.0f, 0.0f, 0x1.3c166cp-120f, 0x1.b0ed72p-108f, 0x1.9a92b6p-95f, 0x1.5bd6aep-96f,
     0.0f, 0.0f, 0x1.311394p-104f, 0x1.0f253ap-117f, 0x1.7a041ap-117f, 0.0f,
     0x1.8929e6p-47f, 0.0f, 0x1.baff3cp-35f, 0x1.af080ep-36f, 0.0f, 0.0f, 0.0f,
     0x1.9618ap-89f, 0.0f, 0.0f, 0.0f, 0x1.9f7a64p-76f, 0x1.d5f78p-74f, 0.0f,
     0x1.b58ap-88f, 0x1.9bad82p-125f, 0x1.02f71ap-6f, 0.0f, 0x1.0a6c7ep-29f,
     0x1.148ff6p-89f, 0x1.e78c0ap-117f, 0x1.c13cbcp-23f, 0x1.dbd73ap-47f, 0.0f, 0.0f,
     0.0f, 0x1.a0651ep-62f, 0x1.17509ep-48f, 0x1.6740c4p-53f, 0x1.94aebep-126f,
     0x1.2f468ap-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2ce098p-107f, 0x1.21cb7ap-58f,
     0.0f, 0x1.fbea84p-58f, 0x1.420944p-97f, 0x1.1ab4p-15f, 0x1.83a626p-73f,
     0x1.950e24p-118f, 0x1.a1aa8ap-44f, 0x1.f8d98cp-111f, 0x1.eeb076p-2f,
     0x1.67d638p-28f, 0x1.912138p-91f, 0.0f, 0x1.008756p-118f, 0.0f, 0x1.b990bcp-114f,
     0x1.e6c2dp-91f, 0x1.115e44p-70f, 0.0f, 0x1.6b945p-6f, 0x1.066144p-89f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.2e0a32p-99f, 0.0f, 0x1.65b428p-91f, 0.0f, 0.0f, 0.0f,
     0x1.7a340cp-55f, 0x1.02039p-9f, 0x1.69e4p-105f, 0x1.674aeap-103f,
     0x1.ae0c5cp-118f, 0x1.75d4bcp-51f, 0x1.71a144p-30f, 0.0f, 0x1.c6c6e4p-103f, 0.0f,
     0x1.6ccf3ap-75f, 0.0f, 0.0f, 0x1.869b7p-73f, 0x1.a452ep-71f, 0.0f,
     0x1.485fbp-88f, 0x1.d5c29ap-24f, 0.0f, 0x1.4b098cp-13f, 0.0f, 0.0f, 0.0f,
     0x1.c0366cp-50f, 0.0f, 0.0f, 0x1.3c2726p-103f, 0x1.6ae35ap-120f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.6d204cp-123f, 0.0f, 0x1.1e8452p-119f, 0.0f
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
            tmp1 = Sleef_finz_cbrtf1_u35purecfma(tmp0);
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
    printf("Sleef_finz_cbrtf1_u35purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_cbrtf1_u35purecfma bench acc %a\n", global_bench_acc);
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
