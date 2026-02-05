/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_tanhf4_u10avx2128.c --function Sleef_tanhf4_u10avx2128 \
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
     0x1.1d8534p-83f, 0x1.9cbe02p-70f, 0x1.b8e1d6p-73f, 0.0f, 0.0f, 0.0f,
     0x1.34b1p-61f, 0x1.6c9daep-117f, 0.0f, 0.0f, 0x1.0f5f54p-1f, 0x1.f38c48p-121f,
     0x1.f89b06p-75f, 0.0f, 0.0f, 0x1.d4476cp-125f, 0.0f, 0x1.e9df5ep-119f,
     0x1.b6bc24p-71f, 0x1.3bba06p-37f, 0.0f, 0x1.0cc308p-21f, 0.0f, 0x1.8bce8ap-125f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6031ep-49f, 0x1.7d7828p-48f, 0x1.6de762p-11f,
     0x1.80aa8ep-24f, 0x1.7c7a5cp-41f, 0x1.ab6c1cp-8f, 0x1.4fac4ap-96f,
     0x1.88d1e6p-56f, 0x1.2e6d8p-76f, 0.0f, 0.0f, 0.0f, 0x1.4a5e22p-87f,
     0x1.6c55p-16f, 0x1.694a1p-113f, 0x1.d8eaa6p-69f, 0.0f, 0x1.50c104p-80f, 0.0f,
     0x1.0bf14cp-64f, 0.0f, 0x1.2662eap-11f, 0.0f, 0.0f, 0x1.50d258p-9f,
     0x1.4e272cp-2f, 0x1.2b3ef2p-93f, 0x1.642712p-58f, 0.0f, 0x1.6f95cap-14f,
     0x1.5445eep-41f, 0x1.8baac8p-84f, 0.0f, 0x1.89198cp-27f, 0x1.65e31ap-104f, 0.0f,
     0x1.a39c5cp-50f, 0x1.cef0dap-121f, 0.0f, 0x1.3d0cf2p-12f, 0x1.ac3d9ap-61f, 0.0f,
     0x1.bd7394p-55f, 0.0f, 0x1.6e401p-91f, 0.0f, 0.0f, 0x1.96658ap-49f,
     0x1.e8975ap-126f, 0x1.ba1a76p-54f, 0.0f, 0x1.2bd7d6p-63f, 0x1.0b7dbap-4f,
     0x1.7400a6p-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b551ap-126f, 0x1.67d24cp-85f,
     0.0f, 0x1.c20aeap-117f, 0x1.6c5714p-4f, 0x1.cf142ap-45f, 0.0f, 0x1.667af2p-102f,
     0x1.22bf02p-27f, 0x1.feefd4p-9f, 0.0f, 0.0f, 0.0f, 0x1.aefa78p-7f, 0.0f, 0.0f,
     0.0f, 0x1.7f1b6p-122f, 0x1.bc7f58p-58f, 0x1.7b6854p-106f, 0.0f, 0x1.ea8436p-74f,
     0x1.f6a96ap-4f, 0x1.4db2b6p-78f, 0x1.144ce8p-66f, 0x1.932f6ep-105f, 0.0f,
     0x1.64fdc8p-47f, 0x1.8f6056p-80f, 0x1.2f04fp-65f, 0x1.1d3c12p-121f, 0.0f,
     0x1.6fe8cp-44f, 0x1.031a4ap-74f, 0x1.5eaa32p-63f, 0x1.68d5c8p-103f, 0.0f,
     0x1.5dbe1p-65f, 0.0f, 0.0f, 0x1.657a98p-114f, 0x1.960fd4p-8f, 0x1.56aab6p-71f,
     0.0f, 0.0f, 0x1.4d0ba6p-69f, 0.0f, 0x1.972474p-46f, 0.0f, 0x1.72264p-89f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.497d0ap-55f, 0x1.4d719ap-118f, 0.0f, 0x1.5015fep-96f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9f462cp-31f, 0.0f, 0x1.0d4956p-82f, 0.0f,
     0x1.532d86p-49f, 0x1.e1a4eep-104f, 0x1.87dd66p-17f, 0x1.752bdep-119f,
     0x1.811328p-43f, 0.0f, 0x1.35fd0cp-77f, 0.0f, 0x1.70d358p-105f, 0.0f, 0.0f,
     0x1.b01fdp-75f, 0.0f, 0.0f, 0x1.c7b84ap-45f, 0x1.85fcfp-90f, 0.0f, 0.0f, 0.0f,
     0x1.914eeep-69f, 0x1.4d22a2p-14f, 0x1.239066p-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.110ddap-45f, 0.0f, 0.0f, 0x1.314d84p-32f, 0.0f, 0x1.5b07e4p-26f, 0.0f,
     0x1.0dca64p-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1d309p-85f, 0x1.a2437p-70f, 0.0f,
     0.0f, 0x1.a568dep-114f, 0.0f, 0.0f, 0.0f, 0x1.4294a8p-102f, 0.0f, 0.0f,
     0x1.48ba7p-112f, 0.0f, 0.0f, 0x1.701abep-55f, 0.0f, 0x1.e27292p-7f,
     0x1.6dd9d4p-11f, 0x1.66c8aap-99f, 0x1.1505ecp-101f, 0.0f, 0.0f, 0.0f,
     0x1.49986ep-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b578b6p-21f, 0x1.f31746p-122f,
     0x1.a556a4p-45f, 0x1.98282ap-97f, 0.0f, 0x1.4a6c38p-100f, 0x1.06c33p-55f,
     0x1.3a1e52p-15f, 0x1.7eedfep-104f, 0x1.4f1ae8p-78f, 0.0f, 0.0f, 0x1.861152p-95f,
     0x1.28b15ap-91f, 0x1.3c45cp-8f, 0x1.126a62p-32f, 0x1.b6f7cp-108f, 0x1.02c0ap-18f,
     0x1.9c3084p-82f, 0x1.d6013cp-109f, 0x1.91d2ecp-46f, 0x1.7a12b4p-55f,
     0x1.5f6dccp-85f, 0.0f, 0x1.5efa9p-75f, 0x1.cc6e6ap-108f, 0.0f, 0.0f,
     0x1.2044e6p-81f, 0.0f, 0.0f, 0x1.7378d6p-68f, 0.0f, 0x1.3b000cp-110f, 0.0f, 0.0f,
     0x1.c479cap-62f, 0x1.19d7c2p-119f, 0x1.a08a7ep-9f, 0x1.395d5ap-26f,
     0x1.59496ep-29f, 0.0f, 0.0f, 0.0f, 0x1.606b8p-74f, 0.0f, 0x1.730634p-64f, 0.0f,
     0x1.149174p-59f, 0.0f, 0.0f, 0x1.9a0eap-5f, 0x1.9922f2p-121f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.cb205p-8f, 0.0f, 0.0f, 0x1.6f10e6p-118f, 0.0f, 0x1.021f96p-81f,
     0x1.57ca8ap-78f, 0x1.0715b8p-68f, 0x1.49dc04p-63f, 0x1.16a8acp-54f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.866cep-121f, 0x1.84d3ap-96f, 0x1.173088p-28f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.290b6p-52f, 0x1.6d354ep-30f, 0x1.34aba6p-9f, 0.0f, 0.0f,
     0x1.68aadap-61f, 0x1.abafbp-58f, 0x1.06d71cp-113f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b1b026p-39f, 0x1.4f8c02p-34f, 0x1.edb2f4p-68f, 0.0f, 0.0f, 0.0f,
     0x1.629fecp-72f, 0x1.91bf96p-77f, 0x1.8dac58p-1f, 0.0f, 0x1.561118p-106f, 0.0f,
     0x1.1475b8p-117f, 0.0f, 0x1.1315cap-100f, 0.0f, 0.0f, 0x1.469312p-95f,
     0x1.0109f8p-124f, 0.0f, 0x1.9298d6p-20f, 0x1.e5d958p-100f, 0x1.8a8b6p-22f, 0.0f,
     0.0f, 0.0f, 0x1.f5112p-27f, 0.0f, 0x1.1f9ee4p-3f, 0.0f, 0x1.ee08bep-97f,
     0x1.fb778cp-19f, 0.0f, 0x1.e99aaap-45f, 0.0f, 0x1.059d98p-20f, 0.0f, 0.0f, 0.0f,
     0x1.896f9p-34f, 0.0f, 0.0f, 0.0f, 0x1.d15652p-50f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.32c72ep-89f, 0x1.e75c2cp-69f, 0.0f, 0.0f, 0x1.00b3b2p-68f, 0.0f, 0.0f,
     0x1.d114a4p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0398c2p-12f, 0x1.fc1574p-21f,
     0x1.b6bb4p-1f, 0.0f, 0x1.812a62p-61f, 0.0f, 0x1.3e412ep-78f, 0.0f,
     0x1.e2091ep-40f, 0x1.e89fap-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.94d6bap-97f, 0.0f, 0x1.e788c6p-107f, 0.0f, 0.0f, 0x1.6ee27ap-2f,
     0x1.40fb18p-68f, 0x1.46a6dep-86f, 0.0f, 0x1.62be9ep-41f, 0x1.7d58f4p-35f, 0.0f,
     0x1.d576ep-91f, 0.0f, 0x1.a06d28p-59f, 0x1.283bf6p-23f, 0x1.560b74p-52f, 0.0f,
     0x1.438b36p-23f, 0.0f, 0x1.0ff48p-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.73cae2p-115f, 0x1.559fp-30f, 0x1.a7666ep-80f, 0x1.cfa772p-16f,
     0x1.10e574p-11f, 0x1.2fb672p-64f, 0.0f, 0x1.8a70fep-45f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f967ep-72f, 0.0f, 0.0f, 0x1.8b3ac4p-62f, 0x1.d9c182p-118f, 0.0f,
     0x1.ac4daep-117f, 0x1.2cb1b4p-19f, 0x1.2ed54cp-83f, 0.0f, 0x1.6b82fcp-23f, 0.0f,
     0x1.f67894p-61f, 0x1.ebb6ep-1f, 0.0f, 0x1.37a6cp-96f, 0.0f, 0x1.1aaa36p-84f,
     0.0f, 0x1.37a7c6p-16f, 0.0f, 0.0f, 0.0f, 0x1.88b702p-107f, 0x1.bfb25p-123f, 0.0f,
     0.0f, 0x1.a3263cp-86f, 0.0f, 0x1.42261cp-124f, 0.0f, 0x1.0882cep-38f, 0.0f, 0.0f,
     0.0f, 0x1.4fa998p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e1e21p-76f,
     0x1.903624p-58f, 0.0f, 0x1.bfb8cap-110f, 0x1.70e81ap-4f, 0x1.926158p-22f,
     0x1.dadbdap-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.80496p-107f, 0x1.cb0898p-39f,
     0x1.ce6552p-29f, 0x1.a04102p-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.81a3e8p-31f, 0.0f,
     0.0f, 0x1.865fa2p-92f, 0x1.4885d8p-14f, 0x1.0e3156p-86f, 0.0f, 0x1.dc024p-78f,
     0x1.50cbd6p-122f, 0x1.4a4ea6p-10f, 0x1.9aac8cp-44f, 0x1.c1f0dp-105f, 0.0f, 0.0f,
     0x1.7597b6p-8f, 0.0f, 0x1.90aa8ap-107f, 0x1.a1a758p-107f, 0x1.4e1936p-95f,
     0x1.1c8d7ep-52f, 0x1.4c38b4p-103f, 0x1.270894p-99f, 0x1.fe819ep-24f, 0.0f,
     0x1.ec473ap-23f, 0x1.9c6cb2p-12f, 0x1.eed874p-99f, 0.0f, 0x1.cf039ep-103f,
     0x1p0f, 0.0f, 0x1.390dep-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.74d7e6p-54f, 0.0f,
     0.0f, 0.0f, 0x1.341136p-28f, 0.0f, 0.0f, 0x1.e7a95p-68f, 0.0f, 0.0f,
     0x1.e451f4p-48f, 0.0f, 0.0f, 0x1.50c024p-113f, 0x1.1090e8p-44f, 0x1.effff6p-118f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.36c616p-18f, 0x1.4eb69ep-32f, 0.0f, 0.0f, 0.0f,
     0x1.0be5e2p-38f, 0.0f, 0x1.7892f8p-90f, 0x1.46908cp-39f, 0x1.a1d29p-84f,
     0x1.d82f18p-55f, 0.0f, 0x1.e85d98p-2f, 0x1.324444p-118f, 0.0f, 0.0f,
     0x1.c362ep-59f, 0.0f, 0.0f, 0.0f, 0x1.379034p-97f, 0.0f, 0x1.cc608cp-124f, 0.0f,
     0x1p0f, 0x1.8a4c88p-110f, 0.0f, 0x1.a07248p-29f, 0x1.385b4p-50f, 0x1.b6dd08p-44f,
     0.0f, 0x1.1c667ap-126f, 0x1.7e7422p-111f, 0x1.0fb512p-14f, 0x1.92c024p-87f,
     0x1.105e7p-6f, 0x1.4c1b94p-28f, 0x1.bf9beap-104f, 0.0f, 0.0f, 0.0f,
     0x1.64105ep-35f, 0x1.c11cd2p-125f, 0x1.3048ap-121f, 0.0f, 0.0f, 0.0f,
     0x1.14c80cp-88f, 0x1.9823bcp-81f, 0x1.dd479ap-84f, 0.0f, 0x1.020cf6p-5f, 0.0f,
     0x1.c456a8p-123f, 0.0f, 0x1.dfe074p-56f, 0x1.6e9beep-115f, 0x1.b13936p-115f,
     0x1.471d2ap-35f, 0.0f, 0.0f, 0x1.fa6698p-99f, 0x1.417f16p-46f, 0x1.103f96p-50f,
     0.0f, 0.0f, 0.0f, 0x1.372fe2p-61f, 0.0f, 0.0f, 0x1.bc0714p-42f, 0.0f, 0.0f,
     0x1.065dbep-120f, 0.0f, 0.0f, 0.0f, 0x1.c6ea68p-71f, 0x1.c0578ep-46f, 0.0f, 0.0f,
     0x1.d557d2p-95f, 0.0f, 0x1.2c9fdap-27f, 0.0f, 0x1.34142ep-106f, 0x1.a42828p-73f,
     0.0f, 0.0f, 0x1.b685a6p-54f, 0x1.48e072p-82f, 0.0f, 0x1.a4bde8p-111f, 0.0f,
     0x1.761e28p-47f, 0.0f, 0.0f, 0x1.80e92p-103f, 0x1.ca145p-36f, 0x1.20792p-123f,
     0x1.3a3be4p-126f, 0.0f, 0.0f, 0x1.182edap-101f, 0.0f, 0.0f, 0.0f,
     0x1.81e3c2p-25f, 0x1.3bc68ap-7f, 0x1.fe1082p-89f, 0x1.159a3p-6f, 0x1.48a8fap-47f,
     0x1.5d5d24p-125f, 0x1.006914p-110f, 0.0f, 0x1.49fafp-77f, 0x1.8731dcp-65f,
     0x1.499c8ep-122f, 0.0f, 0.0f, 0x1.86015ep-117f, 0x1.5291d2p-7f, 0.0f, 0.0f, 0.0f,
     0x1.7dee5p-26f, 0.0f, 0x1.7a5676p-12f, 0.0f, 0x1.6c5034p-114f, 0.0f,
     0x1.373edcp-45f, 0.0f, 0x1.ab4244p-125f, 0.0f, 0.0f, 0x1.791d5cp-69f,
     0x1.52da78p-101f, 0.0f, 0x1.b42efcp-48f, 0x1.67ed8cp-83f, 0x1.4a0bb4p-100f, 0.0f,
     0.0f, 0x1p0f, 0.0f, 0x1.8b3abap-113f, 0.0f, 0x1.984ebp-122f, 0.0f,
     0x1.8581f8p-97f, 0.0f, 0.0f, 0.0f, 0x1.552b9cp-123f, 0x1.d24afcp-94f,
     0x1.b59972p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eda3fap-108f, 0x1.cb7574p-81f,
     0x1.f1bc14p-7f, 0x1.fc64cap-112f, 0x1.4ad5acp-109f, 0x1.b77148p-40f,
     0x1.dc8464p-82f, 0x1.7e7b68p-115f, 0.0f, 0.0f, 0x1.6ff092p-17f, 0x1.c57bcp-44f,
     0x1.1dc152p-65f, 0x1.aa103cp-95f, 0x1.0cf82p-7f, 0x1.9d1f64p-115f, 0.0f,
     0x1.996d8cp-72f, 0.0f, 0x1.047bd4p-4f, 0.0f, 0x1.516312p-93f, 0.0f,
     0x1.57a75ep-54f, 0x1.639faep-74f, 0x1.82c52ep-117f, 0x1.d8a3p-97f, 0.0f, 0.0f,
     0.0f, 0x1.d7facep-70f, 0.0f, 0x1.9ee58ep-86f, 0x1.7327cp-69f, 0.0f,
     0x1.b2749ep-89f, 0.0f, 0x1.7729e2p-12f, 0x1.c74718p-52f, 0x1.40db8p-105f, 0.0f,
     0.0f, 0x1.a92656p-30f, 0x1.3c8288p-74f, 0x1.b01ec8p-11f, 0x1.96be04p-93f,
     0x1.c0ab2cp-62f, 0x1.30eceap-10f, 0.0f, 0x1.65e744p-112f, 0.0f, 0x1.6be2bap-70f,
     0.0f, 0x1.0e04b2p-75f, 0.0f, 0.0f, 0x1.c27c6ep-105f, 0x1.db167ep-9f, 0.0f, 0.0f,
     0.0f, 0x1.5486ep-125f, 0x1.ecffa2p-52f, 0.0f, 0x1.3cab9cp-81f, 0x1.1f6dbcp-32f,
     0.0f, 0x1.32a5f2p-116f, 0x1.5e1b94p-36f, 0.0f, 0x1.b7e8c8p-105f, 0.0f, 0.0f,
     0x1.13c46ap-70f, 0x1.9fd0e4p-20f, 0x1.6c7e64p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1aa35ep-53f, 0.0f, 0x1.4dbca6p-68f, 0.0f, 0.0f, 0.0f, 0x1.430344p-28f,
     0x1.94fd62p-35f, 0x1.809528p-96f, 0x1.bc0c2ap-76f, 0.0f, 0x1.25fe8ep-81f,
     0x1.9ceb9ep-41f, 0x1.8febfp-70f, 0x1.63a4d6p-111f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1fda72p-36f, 0x1.e46e08p-6f, 0x1.802f34p-47f, 0x1.9f1048p-119f,
     0x1.ff1b24p-52f, 0.0f, 0.0f, 0x1.3ad604p-7f, 0x1.748efep-29f, 0x1.1e2d12p-1f,
     0.0f, 0.0f, 0.0f, 0x1.f0af6ep-14f, 0x1.eff85ep-112f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.6a7574p-98f, 0x1.4519a6p-119f, 0.0f, 0.0f, 0x1.5a3cccp-88f, 0.0f, 0.0f,
     0x1.baa3f8p-58f, 0.0f, 0x1.0437cap-90f, 0.0f, 0.0f, 0x1.954208p-112f,
     0x1.425642p-98f, 0.0f, 0x1.1f29ccp-112f, 0x1.be5a4ap-78f, 0.0f, 0x1.f3d75ep-57f,
     0x1.aaf7d4p-49f, 0.0f, 0x1.9985b4p-19f, 0x1.28bc68p-63f, 0.0f, 0x1.253c72p-5f,
     0.0f, 0x1.2c1dd4p-6f, 0x1.afc2d4p-22f, 0.0f, 0x1.d57698p-22f, 0.0f, 0.0f, 0.0f,
     0x1.96303ap-36f, 0x1.52baccp-108f, 0.0f, 0.0f, 0.0f, 0x1.e57e38p-26f,
     0x1.ff3c56p-96f, 0x1.dfc3e2p-123f, 0x1.dd107p-107f, 0.0f, 0x1.882404p-13f, 0.0f,
     0.0f, 0x1.75d34ap-76f, 0.0f, 0.0f, 0x1.d22f74p-90f, 0.0f, 0x1.d31984p-63f, 0.0f,
     0.0f, 0.0f, 0x1.c69938p-37f, 0x1.5603bp-86f, 0x1.711ac2p-119f, 0x1.20a388p-94f,
     0x1.ee912cp-103f, 0.0f, 0.0f, 0x1.cbb184p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d55e0cp-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.94685cp-85f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.555dccp-104f, 0x1.ddc906p-34f, 0.0f, 0.0f, 0x1.977d12p-121f,
     0x1.ef4948p-75f, 0x1.0e8f32p-45f, 0x1.cee752p-6f, 0.0f, 0.0f, 0x1.e0380ep-90f,
     0.0f, 0.0f, 0x1.425e28p-72f, 0.0f, 0.0f, 0x1.89e584p-82f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b837e8p-48f, 0x1.d5f68ep-48f, 0.0f, 0.0f, 0.0f, 0x1.00d734p-103f, 0.0f,
     0x1.4bb9d2p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.339ccp-39f, 0x1.0cb16p-10f, 0.0f,
     0x1.c12c16p-22f, 0x1.f04bbcp-54f, 0x1.7b724cp-103f, 0x1.455468p-13f,
     0x1.d15422p-45f, 0x1.91f202p-78f, 0.0f, 0.0f, 0x1.4bcd76p-97f, 0.0f,
     0x1.741ef8p-69f, 0x1.04a4c6p-95f, 0x1.2338d2p-43f, 0.0f, 0x1.a68f84p-11f,
     0x1.efd7ap-98f, 0.0f, 0x1.2c6bbp-62f, 0x1.bc2836p-44f, 0x1.3027a4p-66f, 0.0f,
     0.0f, 0x1.16a498p-27f, 0x1.4299d8p-74f, 0.0f, 0x1.ee502ap-90f, 0.0f,
     0x1.69e3b2p-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7e438cp-86f, 0.0f, 0.0f,
     0x1.130a3ep-34f, 0.0f, 0x1.103be2p-97f, 0.0f, 0.0f, 0.0f, 0x1.bab656p-82f, 0.0f,
     0x1.e99a82p-113f, 0.0f, 0.0f, 0x1.fa9a24p-26f, 0.0f, 0.0f
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
            tmp1 = Sleef_tanhf4_u10avx2128(tmp0);
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
    printf("Sleef_tanhf4_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_tanhf4_u10avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
