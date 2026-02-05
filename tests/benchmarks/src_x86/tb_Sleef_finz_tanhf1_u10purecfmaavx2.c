/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_tanhf1_u10purecfma.c --function \
 *     Sleef_finz_tanhf1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0x1.077c7ap-93f, 0.0f, 0.0f, 0.0f, 0x1.c51788p-42f, 0x1.2ac8aep-101f,
     0x1.0f96a6p-13f, 0.0f, 0x1.a17f14p-123f, 0.0f, 0.0f, 0x1.7511bap-94f,
     0x1.ab024ep-30f, 0.0f, 0x1.5178e6p-109f, 0x1.2f5f2cp-113f, 0.0f, 0.0f, 0.0f,
     0x1.5137b4p-100f, 0.0f, 0.0f, 0x1.e1aff6p-20f, 0x1.8a220cp-77f, 0x1.47aaacp-85f,
     0.0f, 0.0f, 0.0f, 0x1.eb966p-125f, 0.0f, 0x1.745172p-34f, 0.0f, 0.0f, 0.0f,
     0x1p0f, 0x1.d6a77cp-93f, 0x1.8ab52cp-1f, 0x1.d68592p-84f, 0.0f, 0x1.5ced2p-26f,
     0x1.7ec9b6p-46f, 0.0f, 0.0f, 0.0f, 0x1.cdae7ep-41f, 0x1.525972p-94f,
     0x1.c068c8p-90f, 0x1.ef4f9ep-98f, 0.0f, 0.0f, 0.0f, 0x1.23a232p-31f, 0.0f,
     0x1.a1230cp-12f, 0x1.d0dd2cp-26f, 0.0f, 0.0f, 0.0f, 0x1.e1725p-64f, 0.0f,
     0x1.eb93dcp-62f, 0x1.eeab5ap-121f, 0x1.effe34p-112f, 0.0f, 0x1.9827ep-110f,
     0x1.1fc7bep-85f, 0.0f, 0.0f, 0.0f, 0x1.45a7aep-117f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e1923p-35f, 0x1.78006cp-62f, 0x1.6289fep-88f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.16f9cap-21f, 0x1.caa36ep-108f, 0x1.b7ac7ep-55f, 0.0f, 0.0f, 0.0f,
     0x1.145f6ep-69f, 0x1.8f4abcp-35f, 0.0f, 0x1.ed06acp-91f, 0x1.59bfdap-29f, 0.0f,
     0.0f, 0x1.a52edep-68f, 0x1.2b137ep-29f, 0x1.06f0bap-43f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e03dep-41f, 0.0f, 0x1.b2670cp-88f, 0.0f, 0x1.5e90f4p-23f, 0.0f,
     0x1.e11fbep-72f, 0x1.138416p-21f, 0.0f, 0x1.d9b3c6p-10f, 0.0f, 0.0f, 0.0f,
     0x1.38690cp-74f, 0x1.f845fcp-74f, 0x1.d683fp-7f, 0.0f, 0.0f, 0x1.322dp-26f, 0.0f,
     0x1.9e795ep-29f, 0x1.e5b158p-63f, 0.0f, 0.0f, 0.0f, 0x1.5a33cap-94f,
     0x1.ed3eecp-47f, 0x1.d79b06p-104f, 0.0f, 0x1.8230c6p-38f, 0.0f, 0.0f,
     0x1.8c06dap-58f, 0x1.c30f7ap-120f, 0x1.d4c2a8p-61f, 0x1.c77beap-49f, 0.0f, 0.0f,
     0x1.b0260cp-95f, 0x1.03a56ep-99f, 0x1.e7f1cp-48f, 0x1.f8da4p-125f,
     0x1.7f0c28p-6f, 0.0f, 0.0f, 0x1.9bc7fep-1f, 0.0f, 0.0f, 0.0f, 0x1.8471d8p-52f,
     0.0f, 0.0f, 0.0f, 0x1.885c1p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.667d1cp-114f,
     0x1.403a7cp-48f, 0x1.5fee66p-119f, 0x1.34fcdcp-98f, 0x1.3abab6p-56f,
     0x1.24c64ap-53f, 0x1.974bcp-99f, 0x1.89f098p-124f, 0x1.27f482p-54f, 0.0f,
     0x1.d3f612p-42f, 0.0f, 0.0f, 0x1.174642p-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.816e82p-112f, 0.0f, 0x1.0da3dcp-48f, 0x1.59cf1p-35f, 0.0f, 0.0f, 0.0f,
     0x1.ae97d8p-94f, 0.0f, 0.0f, 0x1.913c06p-67f, 0.0f, 0x1.9e41a6p-16f,
     0x1.146d2ep-104f, 0.0f, 0.0f, 0x1.046446p-79f, 0.0f, 0x1.ae6f9cp-86f,
     0x1.126438p-91f, 0x1.066224p-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.43f596p-47f, 0x1.e69634p-68f, 0.0f, 0.0f, 0x1.0c96cap-47f, 0.0f, 0.0f,
     0x1.a5c588p-22f, 0x1.bd3874p-79f, 0x1.3479f2p-68f, 0x1.c39c3cp-85f,
     0x1.1dd3eep-72f, 0x1.cb137ap-46f, 0.0f, 0x1.0ca6ap-8f, 0.0f, 0x1.b4f5eep-68f,
     0x1.a0ab0cp-48f, 0x1.d6d24ep-45f, 0.0f, 0.0f, 0x1.7876f4p-120f, 0x1.6bfa32p-66f,
     0.0f, 0.0f, 0x1.8455ecp-4f, 0.0f, 0.0f, 0x1.00e4cep-100f, 0.0f, 0x1.7f14a6p-85f,
     0x1.03b6c2p-66f, 0.0f, 0.0f, 0x1.0cf794p-123f, 0x1.a8b372p-116f, 0x1.96116p-104f,
     0x1.fb4108p-121f, 0x1.ecd0ep-72f, 0x1.fcad3ap-33f, 0x1.2f8cep-11f,
     0x1.8af6fp-114f, 0x1.9922b6p-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b5b9bcp-57f, 0.0f, 0x1.a5cbcep-57f, 0.0f, 0.0f, 0.0f, 0x1.d5c302p-77f,
     0x1.848bbep-78f, 0x1.9b275cp-88f, 0x1.b1b066p-27f, 0x1.34cd26p-32f, 0.0f,
     0x1.fde61ap-38f, 0x1.b1e3e2p-78f, 0.0f, 0x1.0efc2ap-75f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.65d01cp-119f, 0x1.14ba84p-13f, 0.0f,
     0x1.4e1d04p-117f, 0.0f, 0x1.ecd0eep-110f, 0x1.c7720ep-15f, 0x1.1f3ca2p-88f,
     0x1.c109fcp-34f, 0x1.b35f72p-21f, 0.0f, 0x1.2a031ep-52f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.fa7d46p-12f, 0x1.936c48p-86f, 0x1.1522e8p-93f, 0.0f, 0x1.240c9cp-49f,
     0x1.fb0e6p-28f, 0x1.97b4aap-40f, 0x1.dda28ap-90f, 0x1.2673dp-97f, 0.0f, 0.0f,
     0x1.4dc0dcp-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.679192p-92f, 0x1.50d30ap-109f,
     0x1.0666b6p-110f, 0x1.014bf6p-18f, 0x1.243f7ap-19f, 0.0f, 0x1.21bab8p-98f,
     0x1.7e1b58p-95f, 0x1.298b66p-53f, 0x1.6656ap-84f, 0.0f, 0.0f, 0x1.56d4e2p-62f,
     0x1.2ace2cp-59f, 0x1.159accp-29f, 0.0f, 0.0f, 0.0f, 0x1.27e344p-53f, 0.0f,
     0x1.b1d3a6p-16f, 0x1.e574c8p-102f, 0.0f, 0.0f, 0x1.8ce69cp-3f, 0.0f,
     0x1.39d30cp-59f, 0x1.54f25ap-8f, 0x1.12b1b2p-112f, 0x1.305bdap-17f,
     0x1.c8efeap-107f, 0.0f, 0x1.635e66p-121f, 0x1.602cp-122f, 0.0f, 0x1.69de16p-33f,
     0x1.b4e9ccp-55f, 0.0f, 0x1.c87ee8p-121f, 0.0f, 0.0f, 0x1.349268p-85f, 0.0f,
     0x1.45f388p-32f, 0x1.a4924cp-68f, 0x1.e9d196p-11f, 0x1.12e3d8p-18f,
     0x1.6c8e64p-67f, 0x1.3331d2p-100f, 0.0f, 0.0f, 0x1.a1bbf8p-89f, 0x1.f52022p-35f,
     0x1.1fed12p-123f, 0x1.dab5bep-116f, 0x1.6f5818p-63f, 0x1.a8f564p-81f,
     0x1.c957e2p-89f, 0x1.e3cadep-103f, 0.0f, 0x1.6dcda4p-94f, 0x1.67e78p-69f, 0.0f,
     0.0f, 0x1.93a2b6p-26f, 0.0f, 0.0f, 0.0f, 0x1.3290d2p-24f, 0x1.e1c518p-50f, 0.0f,
     0.0f, 0x1.1adafap-64f, 0x1.d6d51cp-52f, 0x1.d011f8p-63f, 0x1.1e393cp-101f, 0.0f,
     0x1.bf2ef8p-18f, 0x1.db4d56p-99f, 0.0f, 0.0f, 0x1.d151f6p-41f, 0x1.359c04p-77f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.725cdap-118f, 0x1.a4dad6p-39f, 0.0f, 0.0f,
     0x1.c0f6f2p-52f, 0.0f, 0.0f, 0.0f, 0x1.be5c68p-40f, 0x1.dbd53cp-67f, 0.0f, 0.0f,
     0.0f, 0x1.1f857ep-69f, 0x1.5b79a8p-47f, 0.0f, 0x1.2f2f76p-44f, 0x1.1f5f3ap-34f,
     0x1.0630a8p-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cbf058p-17f,
     0x1.d3c664p-119f, 0x1.8cee82p-32f, 0.0f, 0.0f, 0.0f, 0x1.10f438p-85f, 0.0f,
     0x1.525084p-2f, 0.0f, 0.0f, 0.0f, 0x1.071c3cp-64f, 0.0f, 0x1.77a5d2p-84f, 0.0f,
     0x1.495f74p-15f, 0x1.0d93a2p-102f, 0.0f, 0.0f, 0x1.30b712p-89f, 0x1.9301b2p-48f,
     0.0f, 0x1.3c3014p-18f, 0x1.b966a4p-104f, 0x1.b16e38p-124f, 0x1.3af45cp-121f,
     0.0f, 0x1.105bd6p-120f, 0.0f, 0x1.56c9a8p-52f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c642eep-102f, 0x1.96207ap-75f, 0.0f, 0x1.265f1ap-119f, 0x1.56a1aep-90f,
     0x1.76738p-59f, 0.0f, 0.0f, 0x1.e9700ep-13f, 0.0f, 0x1.aef5c8p-65f,
     0x1.02d8f4p-110f, 0.0f, 0x1.d61364p-93f, 0x1.22364p-94f, 0x1.65153ap-48f,
     0x1.89c67cp-86f, 0x1.aa5548p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3d26bp-61f, 0x1.0e8298p-19f, 0.0f, 0x1.ddb188p-103f, 0x1.6264eep-92f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ed88dcp-115f, 0.0f, 0.0f, 0.0f, 0x1.0f3c1ap-67f,
     0.0f, 0x1.4e9a28p-99f, 0.0f, 0.0f, 0.0f, 0x1.e49d88p-4f, 0x1.b07decp-105f,
     0x1.3fd0bcp-59f, 0.0f, 0.0f, 0x1.557b6ap-121f, 0x1.df4736p-58f, 0x1.bf5ce6p-20f,
     0x1.bfea7p-2f, 0x1.5128a8p-113f, 0x1.ac2c24p-99f, 0.0f, 0x1.dac75ap-65f,
     0x1.dbf0f6p-5f, 0x1.f1b7f8p-12f, 0.0f, 0x1.4dd2dcp-91f, 0x1.9a5e9ep-47f, 0.0f,
     0.0f, 0x1.c3a5e2p-9f, 0.0f, 0x1.f04004p-32f, 0x1.e20ddp-89f, 0x1.b560ccp-72f,
     0.0f, 0x1.fcbc6ap-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6ed424p-85f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9d7cd6p-23f, 0.0f, 0.0f, 0.0f, 0x1.30d726p-118f, 0.0f,
     0x1.3722bap-102f, 0x1.4db822p-116f, 0x1.a9ab88p-120f, 0.0f, 0x1.07440ep-42f,
     0.0f, 0x1.bdab9ep-69f, 0.0f, 0x1.dca456p-21f, 0x1.6cc634p-90f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f0b0dcp-110f, 0x1.5e818ap-125f, 0.0f, 0x1.079c16p-52f,
     0x1.9c1b66p-35f, 0.0f, 0.0f, 0.0f, 0x1.397df6p-117f, 0x1.45c4p-3f,
     0x1.bf6236p-102f, 0.0f, 0.0f, 0.0f, 0x1.b5da22p-52f, 0.0f, 0.0f, 0x1.627ad2p-8f,
     0x1.908c4cp-98f, 0.0f, 0x1.7a1728p-82f, 0x1.08b67ap-109f, 0x1.776966p-118f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.6e4916p-32f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fe7bc6p-115f, 0x1.c85326p-87f, 0.0f, 0.0f, 0.0f, 0x1.a58cd2p-124f,
     0x1.ce3052p-104f, 0x1.750084p-115f, 0x1.6e669ap-2f, 0x1.bf5d72p-70f,
     0x1.2651d2p-84f, 0x1.3e59bcp-43f, 0.0f, 0x1.9acb66p-95f, 0x1.7ec2f8p-41f, 0.0f,
     0x1.0d29f2p-110f, 0x1.5f60ep-16f, 0x1.2dfd2p-76f, 0x1.df52eep-74f,
     0x1.43a642p-70f, 0.0f, 0x1.aab73ep-16f, 0x1.975126p-30f, 0.0f, 0x1.614ef4p-32f,
     0x1.723e46p-32f, 0.0f, 0.0f, 0.0f, 0x1.7fc062p-77f, 0.0f, 0.0f, 0x1.b435fep-75f,
     0x1.0777cp-106f, 0.0f, 0x1.adea2cp-118f, 0x1.232b78p-22f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f2db92p-118f, 0.0f, 0x1p0f, 0.0f, 0x1.5976fcp-32f, 0.0f, 0x1.ef4d1cp-124f,
     0.0f, 0.0f, 0x1.94ac2ep-46f, 0.0f, 0x1.f488a6p-96f, 0.0f, 0.0f, 0x1.0a464ap-81f,
     0x1.592f34p-62f, 0x1.bf54fap-25f, 0x1.37c47p-125f, 0.0f, 0.0f, 0.0f,
     0x1.3adf18p-25f, 0x1.b281bcp-96f, 0x1.a6dc36p-122f, 0x1.cb8462p-37f,
     0x1.2d5234p-17f, 0x1.b4f4c4p-101f, 0x1.c05e76p-88f, 0x1.fbb77ap-87f, 0.0f,
     0x1.28b8fep-5f, 0x1.6a202ap-105f, 0.0f, 0.0f, 0.0f, 0x1.83befap-59f,
     0x1.25bd0ap-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fe967cp-73f, 0x1.22fcc4p-46f, 0x1.c39f3p-46f, 0.0f, 0.0f, 0x1.02a154p-79f,
     0.0f, 0x1.0fcffap-77f, 0x1.43973ap-84f, 0.0f, 0.0f, 0x1.0cc994p-70f, 0.0f, 0.0f,
     0.0f, 0x1.0c2eep-92f, 0x1.62db14p-56f, 0x1.b5c52p-20f, 0.0f, 0.0f,
     0x1.e26cecp-47f, 0.0f, 0.0f, 0x1.ed8d2cp-37f, 0x1.db9dfp-8f, 0x1.c56bep-78f,
     0.0f, 0x1.34f6a2p-109f, 0.0f, 0.0f, 0.0f, 0x1.6cdda2p-67f, 0x1.3592acp-118f,
     0.0f, 0x1.8ebe7ap-56f, 0x1.f3438p-50f, 0.0f, 0.0f, 0x1.b161fp-65f,
     0x1.032de6p-92f, 0x1.cb2b1p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.4a0032p-13f,
     0.0f, 0x1.cbd888p-30f, 0x1.5b66cep-77f, 0.0f, 0.0f, 0x1.9b2864p-11f, 0.0f,
     0x1.2d7948p-9f, 0x1.4c7a0ep-33f, 0.0f, 0x1.eebca2p-37f, 0.0f, 0x1.9ef39p-78f,
     0.0f, 0.0f, 0.0f, 0x1.c3c416p-90f, 0x1.41e84ep-104f, 0.0f, 0x1.bdfe0ep-14f, 0.0f,
     0x1p0f, 0x1.e88a1ap-36f, 0.0f, 0x1.32bf54p-46f, 0.0f, 0.0f, 0x1.b481bp-119f,
     0.0f, 0x1.d77ad4p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c26f5ap-52f,
     0x1.a47448p-105f, 0.0f, 0x1.56b22cp-32f, 0.0f, 0.0f, 0x1.a84382p-83f,
     0x1.0f1578p-53f, 0.0f, 0x1.9b03b4p-110f, 0x1.4a3898p-84f, 0x1.3a17ccp-73f, 0.0f,
     0.0f, 0.0f, 0x1.d24cf8p-83f, 0x1.eec16p-105f, 0x1.900366p-37f, 0.0f, 0.0f,
     0x1.5be6cp-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.16afb6p-18f, 0.0f, 0.0f,
     0x1.680c34p-102f, 0.0f, 0x1.5eeb7ep-76f, 0x1.fb3482p-30f, 0.0f, 0.0f,
     0x1.d4a014p-21f, 0.0f, 0x1.9dd456p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3bec6ap-85f, 0.0f, 0.0f, 0x1.4b951cp-24f, 0.0f, 0x1.477c98p-91f,
     0x1.f371b6p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bf80bp-80f, 0.0f, 0.0f,
     0x1.53ae04p-2f, 0x1.3fd534p-54f, 0.0f, 0.0f, 0x1.82cfa4p-70f, 0x1.f0b4eep-87f,
     0.0f, 0x1.06db44p-121f, 0.0f, 0.0f, 0x1.74f53p-124f, 0.0f, 0.0f, 0x1.700bbep-14f,
     0x1.86132cp-52f, 0.0f, 0x1.397698p-2f, 0x1.ee2382p-12f, 0x1.db51a6p-99f,
     0x1.215352p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6d48ecp-99f, 0.0f, 0.0f,
     0x1.5b41cap-50f, 0.0f, 0.0f, 0.0f, 0x1.722524p-89f, 0.0f, 0x1.dd117ep-99f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ff97cep-59f, 0x1.2daadep-1f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.623ed2p-72f, 0x1.76b63ap-67f, 0.0f, 0.0f, 0x1.3a9dd6p-59f,
     0x1.bc6e14p-118f, 0.0f, 0.0f, 0x1.b873f6p-91f, 0.0f, 0.0f, 0.0f, 0x1.e2345p-17f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.890282p-22f, 0x1.cadac2p-97f, 0x1.ea43f2p-13f,
     0x1.9b5d7ap-6f, 0x1.237c3ap-38f, 0x1.191fdap-102f, 0.0f, 0x1.911866p-84f,
     0x1.7b5ap-3f, 0.0f, 0.0f, 0x1.d4598cp-42f, 0x1.5e89b8p-14f, 0.0f, 0.0f,
     0x1.b7154p-28f, 0x1.dc03cep-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4a1dacp-84f,
     0x1.c3bd9ap-89f, 0x1.942036p-73f, 0x1.da48bep-111f, 0.0f, 0x1p0f, 0.0f, 0.0f,
     0x1.0bfaap-113f, 0.0f, 0x1.dc4e76p-59f, 0.0f, 0.0f, 0.0f, 0x1.c4952p-31f, 0.0f,
     0.0f, 0.0f, 0x1.b04ac8p-39f, 0.0f, 0x1.aee9ecp-90f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8809ecp-125f, 0.0f, 0.0f, 0x1.61be08p-46f, 0x1.913e92p-33f, 0.0f, 0.0f,
     0x1.feed5cp-107f, 0.0f, 0.0f, 0x1.eefbc8p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.61a1a4p-123f, 0x1.ed8a9ep-62f, 0x1.8b5e24p-31f, 0.0f, 0x1.7493f6p-33f, 0.0f,
     0.0f, 0.0f, 0x1.e368e8p-94f, 0x1.38f12ep-48f, 0.0f, 0.0f, 0x1.c2a5b4p-117f, 0.0f,
     0x1.e89842p-6f, 0.0f, 0x1.10f332p-79f, 0.0f, 0x1.82c248p-78f, 0x1.4558eep-48f,
     0x1.af07bp-15f, 0x1.efa412p-2f, 0.0f, 0x1.2fc7fcp-44f, 0.0f, 0x1.96d0eap-100f,
     0.0f, 0x1.7ede7ap-16f, 0x1.be942p-99f, 0.0f, 0x1.81b75ap-89f, 0x1.6ec542p-40f,
     0x1.fa6fdcp-23f, 0.0f, 0x1.5b8adap-98f, 0x1.14a89p-50f, 0.0f, 0x1.6e1556p-70f,
     0x1.631a2ep-80f, 0x1.a77c04p-83f, 0x1.12891p-75f, 0x1.82fcb2p-66f,
     0x1.dab1fp-82f, 0x1.026bc4p-120f, 0x1.ad465ep-59f, 0x1.17904ep-116f
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
            tmp1 = Sleef_finz_tanhf1_u10purecfma(tmp0);
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
    printf("Sleef_finz_tanhf1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_tanhf1_u10purecfma bench acc %a\n", global_bench_acc);
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
