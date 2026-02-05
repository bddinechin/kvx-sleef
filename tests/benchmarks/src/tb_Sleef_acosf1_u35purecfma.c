/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_acosf1_u35purecfma.c --function \
 *     Sleef_acosf1_u35purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile float external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0.0f, 0x1.e4a016p-38f, 0x1.d6b81p-35f, 0.0f, 0.0f, 0x1.7035c4p-94f,
     0x1.f93b52p-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5a4c7p-12f, 0.0f, 0x1.ab1744p-47f,
     0x1.082dcp-95f, 0.0f, 0x1.d426fcp-70f, 0.0f, 0x1.7a7c78p-72f, 0x1.31f3fp-8f,
     0x1.716448p-93f, 0.0f, 0x1.071aep-120f, 0x1.96b9cp-38f, 0.0f, 0.0f,
     0x1.45f38cp-31f, 0.0f, 0x1.d1f272p-29f, 0.0f, 0x1.36d89p-120f, 0.0f,
     0x1.2a9d72p-7f, 0x1.b49d86p-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.36c1e6p-20f, 0x1.2254cap-72f, 0x1.b8fc6cp-94f, 0.0f, 0.0f, 0.0f,
     0x1.2bd7ccp-109f, 0x1.66cc62p-60f, 0.0f, 0x1.b313fp-67f, 0x1.1a82eep-86f, 0.0f,
     0x1.1b631p-126f, 0x1.e91bc4p-33f, 0x1.1d8724p-116f, 0x1.6e3446p-112f, 0.0f,
     0x1.0aa6d2p-92f, 0x1.f9f16p-116f, 0.0f, 0.0f, 0x1.ce080cp-109f, 0x1.d2a976p-126f,
     0.0f, 0x1.f386ccp-9f, 0x1.85b486p-118f, 0x1.a9690cp-44f, 0x1.cb7c74p-42f,
     0x1.428e6ep-45f, 0x1.c52fc8p-35f, 0x1.3ddaap-59f, 0x1.b2f134p-62f,
     0x1.084b38p-76f, 0x1.088466p-2f, 0.0f, 0.0f, 0.0f, 0x1.d1defcp-72f,
     0x1.170888p-55f, 0x1.3e766ep-100f, 0x1.c461cp-78f, 0x1.b0732p-7f, 0.0f, 0.0f,
     0.0f, 0x1.3f4648p-94f, 0x1.07c20ap-96f, 0.0f, 0x1.789d62p-94f, 0x1.55ea9cp-8f,
     0x1.d7efc6p-62f, 0.0f, 0x1.d77d12p-107f, 0x1.aa64e2p-38f, 0.0f, 0x1.f00a84p-100f,
     0.0f, 0x1.dc6ae2p-112f, 0x1.3d181p-47f, 0x1.218c9ap-32f, 0.0f, 0x1.4b801ap-89f,
     0x1.488ddep-45f, 0.0f, 0.0f, 0x1.766178p-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2da5c2p-21f, 0.0f, 0.0f, 0x1.e0b5d2p-83f, 0.0f, 0.0f, 0x1.e063cap-28f,
     0x1.c988a8p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c6bb66p-38f, 0.0f, 0x1.44523ap-46f,
     0x1.c6fa32p-5f, 0x1.18b472p-114f, 0.0f, 0x1.89a2b4p-88f, 0.0f, 0x1.6150d6p-90f,
     0x1.f0990ap-109f, 0.0f, 0x1.03faa6p-65f, 0x1.444c24p-122f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.9085fap-119f, 0x1.054cdap-28f, 0.0f, 0.0f, 0x1.27d558p-44f,
     0x1.ad6a48p-57f, 0.0f, 0x1.ccdabcp-5f, 0x1.4daef6p-75f, 0.0f, 0.0f,
     0x1.ef1c16p-41f, 0x1.cbb1eap-91f, 0.0f, 0.0f, 0.0f, 0x1.a8cdeap-111f,
     0x1.6a4894p-97f, 0x1.0f5698p-123f, 0.0f, 0x1.706f08p-92f, 0.0f, 0.0f,
     0x1.83716p-126f, 0x1.202678p-29f, 0.0f, 0x1.84ca52p-62f, 0x1.a04086p-65f,
     0x1.b73328p-119f, 0x1.eda192p-51f, 0.0f, 0.0f, 0x1.94ffeap-44f, 0.0f, 0.0f,
     0x1.2f7ceep-40f, 0.0f, 0.0f, 0x1.4e680ap-69f, 0x1.f40c48p-37f, 0.0f,
     0x1.dfa476p-1f, 0.0f, 0x1.eb4a88p-71f, 0x1.5773c4p-68f, 0x1.2be51ep-63f, 0.0f,
     0x1.9aa1ccp-61f, 0x1.05e1cap-86f, 0.0f, 0x1.c554aep-1f, 0.0f, 0.0f, 0.0f,
     0x1.3c05ccp-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0cb3a6p-54f, 0.0f,
     0x1.634306p-101f, 0.0f, 0x1.bdb1fep-62f, 0x1.c85b22p-125f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.bce296p-116f, 0x1.c09ad8p-71f, 0x1.5f269ep-112f,
     0x1.a2c164p-116f, 0x1.9afe42p-96f, 0x1.2e14p-29f, 0.0f, 0x1.66f2bap-33f,
     0x1.d52246p-123f, 0.0f, 0.0f, 0x1.061decp-45f, 0x1.01cfaep-54f, 0x1.929704p-4f,
     0x1p0f, 0x1.ed6edep-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0aa0fcp-89f,
     0x1.b179f6p-51f, 0x1.e70904p-121f, 0.0f, 0x1.45325p-44f, 0x1.9bd1a4p-59f,
     0x1.ec8094p-48f, 0.0f, 0.0f, 0x1.7f95fep-5f, 0.0f, 0.0f, 0x1.87bc38p-76f, 0.0f,
     0x1.2b5756p-32f, 0.0f, 0x1.37e9a6p-76f, 0x1.17fb3cp-83f, 0x1.57ec2p-30f,
     0x1.f295eep-109f, 0.0f, 0x1.2f1ecp-35f, 0.0f, 0.0f, 0x1.069a24p-21f,
     0x1.b054bcp-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.02b7a6p-90f,
     0x1.703e36p-15f, 0x1.358fb4p-28f, 0x1.9bfe7ap-11f, 0x1.ced69ap-83f, 0.0f,
     0x1.cbc504p-69f, 0.0f, 0x1.0e2b2p-18f, 0x1.5bdd16p-123f, 0x1.74343p-52f,
     0x1.3e59a8p-124f, 0.0f, 0.0f, 0.0f, 0x1.e429dp-113f, 0x1.c7b4aep-18f,
     0x1.05a982p-67f, 0x1.719696p-5f, 0x1.51bdbp-122f, 0.0f, 0x1.4195c2p-109f,
     0x1.cbb954p-26f, 0x1.db7072p-14f, 0.0f, 0.0f, 0x1.1b7458p-107f, 0x1.39addep-69f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3f4ecp-94f, 0.0f, 0x1.66ab8p-24f, 0.0f,
     0x1.b75334p-108f, 0.0f, 0x1.98ab4p-36f, 0x1.f2cd6ep-44f, 0x1.b8042ep-42f, 0.0f,
     0.0f, 0x1.d6183ep-87f, 0x1.db753ep-53f, 0x1.5883f4p-15f, 0x1.b12abap-4f,
     0x1.1bc37p-58f, 0.0f, 0x1.15a488p-17f, 0x1.afc03ep-74f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e7f5d6p-31f, 0x1.621ed6p-123f, 0.0f, 0x1.5b70fap-24f, 0.0f,
     0x1.cf27dp-20f, 0.0f, 0x1.a60b6ap-52f, 0.0f, 0.0f, 0x1.28313cp-97f, 0.0f,
     0x1.92a26cp-113f, 0.0f, 0x1.24557p-16f, 0.0f, 0.0f, 0x1.5a9a58p-22f, 0.0f, 0.0f,
     0x1.fdaf72p-34f, 0.0f, 0x1.220012p-42f, 0.0f, 0.0f, 0.0f, 0x1.5f62dcp-48f,
     0x1.ccd64p-50f, 0.0f, 0.0f, 0.0f, 0x1.1bd8acp-29f, 0x1.29064p-105f, 0.0f,
     0x1.3e24bcp-17f, 0x1.3711ep-120f, 0.0f, 0.0f, 0x1.a60ffp-34f, 0.0f, 0.0f, 0.0f,
     0x1.0fe456p-102f, 0.0f, 0x1.966012p-80f, 0.0f, 0x1.6a346ep-121f,
     0x1.4a6f34p-118f, 0.0f, 0.0f, 0x1.dadbp-61f, 0x1.6d2744p-27f, 0x1.326b8cp-113f,
     0.0f, 0.0f, 0x1.0e8882p-16f, 0.0f, 0x1.4cac62p-97f, 0.0f, 0x1.12c0d8p-110f,
     0x1.9670fep-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.08d874p-84f,
     0x1.ab1e3p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.31021ep-82f, 0x1.95da06p-23f, 0.0f,
     0.0f, 0x1.22fe44p-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8b74e6p-85f, 0x1.d05274p-118f,
     0.0f, 0.0f, 0x1.537c1ap-110f, 0.0f, 0x1.268ea8p-33f, 0.0f, 0x1.b7c4ap-112f, 0.0f,
     0x1.cb9f26p-117f, 0x1.4691aap-44f, 0x1.10e472p-39f, 0x1.24ea1ep-24f,
     0x1.b40c7cp-9f, 0.0f, 0.0f, 0x1.a462ecp-85f, 0.0f, 0x1.e59beap-55f,
     0x1.dcfb7ep-91f, 0.0f, 0x1.d63a16p-83f, 0x1.d8c69cp-40f, 0x1.b267fap-79f, 0.0f,
     0x1.9f3d54p-51f, 0x1.89525cp-54f, 0.0f, 0.0f, 0x1.53a3fp-10f, 0x1.2a2732p-64f,
     0.0f, 0x1.0cfc26p-90f, 0.0f, 0.0f, 0.0f, 0x1.4fc642p-109f, 0.0f, 0.0f,
     0x1.20342p-42f, 0x1.2cf062p-55f, 0x1.7599b4p-82f, 0.0f, 0x1.874a4ap-113f, 0.0f,
     0x1.1b12ap-95f, 0x1.fb7908p-87f, 0x1.f9acdap-75f, 0x1.a96d14p-99f, 0.0f,
     0x1.964d94p-110f, 0x1.5731dep-44f, 0.0f, 0x1.6c006cp-77f, 0x1.b6980cp-110f, 0.0f,
     0.0f, 0x1.0350aap-22f, 0x1.646886p-70f, 0x1.047338p-124f, 0.0f, 0.0f, 0.0f,
     0x1.f3a8dap-72f, 0x1.617eb4p-119f, 0x1.bfeb6p-28f, 0x1.731588p-110f,
     0x1.22a082p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.44196ep-111f, 0x1.e348ap-89f,
     0x1.b2cc1ep-52f, 0.0f, 0x1.8f78acp-113f, 0.0f, 0.0f, 0x1.06ed34p-49f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3d6e7ap-21f, 0x1.77e99p-39f, 0.0f,
     0x1.f463d4p-96f, 0x1.3e7072p-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e019ep-77f, 0.0f, 0x1.93201ep-41f, 0.0f, 0.0f, 0.0f,
     0x1.a9b142p-9f, 0.0f, 0x1.8fa396p-31f, 0.0f, 0.0f, 0x1.d249dep-105f,
     0x1.5ea264p-4f, 0x1.db1eccp-38f, 0.0f, 0.0f, 0x1.b18a96p-96f, 0.0f,
     0x1.3b2394p-8f, 0x1.0ae2fep-8f, 0.0f, 0x1.88487ep-94f, 0.0f, 0.0f,
     0x1.47c28ep-102f, 0.0f, 0x1.f5ab68p-84f, 0.0f, 0.0f, 0.0f, 0x1.57eedp-82f,
     0x1.266d34p-74f, 0.0f, 0.0f, 0.0f, 0x1.c2fbeep-110f, 0.0f, 0.0f, 0.0f,
     0x1.45b07ep-100f, 0x1.d5dd7ap-19f, 0x1.a8117cp-62f, 0.0f, 0x1.52c5e6p-32f,
     0x1.48a354p-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6ce638p-58f, 0.0f, 0x1.3142aep-126f,
     0x1.47a7c4p-39f, 0.0f, 0x1.480ec4p-74f, 0x1.faa00ep-29f, 0.0f, 0x1.a54326p-95f,
     0x1.a9e63cp-44f, 0x1.2f7758p-46f, 0.0f, 0x1.ac75c2p-6f, 0x1.11401ep-123f,
     0x1.a20b6p-60f, 0.0f, 0x1.2850a6p-113f, 0.0f, 0.0f, 0x1.b0efaep-75f, 0.0f,
     0x1.74a0fep-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2d937ap-95f, 0x1.bdee9p-123f, 0.0f,
     0x1.75db52p-90f, 0.0f, 0.0f, 0.0f, 0x1.cf279ap-90f, 0.0f, 0.0f, 0x1.2915e6p-108f,
     0x1.9d5e28p-58f, 0x1.ea53fep-50f, 0.0f, 0x1.7ca4aap-82f, 0x1.55c5acp-64f, 0.0f,
     0x1.9e7382p-36f, 0x1.d04ap-28f, 0x1.9aff18p-99f, 0x1.902f92p-45f,
     0x1.cb272ep-81f, 0x1.2043ecp-65f, 0x1.cd276cp-72f, 0x1.130e42p-81f, 0.0f,
     0x1.745ac8p-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.133454p-110f, 0x1.19ec4cp-126f,
     0x1.11505cp-56f, 0x1.44ff56p-90f, 0.0f, 0.0f, 0x1.b8355ap-1f, 0.0f,
     0x1.ce64b4p-62f, 0x1.efb52ap-88f, 0x1.4fee64p-62f, 0x1.5693e4p-27f,
     0x1.8f439ep-118f, 0x1.9cb86p-45f, 0x1.5e936p-116f, 0x1.23436cp-118f,
     0x1.0245b4p-109f, 0x1.eb1868p-67f, 0.0f, 0x1.1f779ap-126f, 0.0f, 0.0f, 0.0f,
     0x1.2c6e6ep-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.614b8ap-71f, 0.0f, 0.0f,
     0x1.8d7aaap-92f, 0.0f, 0x1.8e5c82p-82f, 0x1.d20dcap-10f, 0x1.5be28ap-37f,
     0x1.f906fap-91f, 0.0f, 0.0f, 0.0f, 0x1.eb780cp-76f, 0x1.48967p-122f,
     0x1.ea806cp-90f, 0x1.2f01c4p-31f, 0x1.39f9a6p-94f, 0x1.8ef6a6p-42f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.006824p-41f, 0x1.ca6834p-35f, 0x1.4670f2p-96f, 0.0f, 0.0f,
     0x1.76a992p-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2a8864p-102f, 0.0f, 0x1.f2405ep-14f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.5a4dbep-110f, 0x1.6288c8p-6f, 0.0f, 0.0f,
     0x1.cbc608p-4f, 0x1.c21a82p-34f, 0x1.19fc06p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.0381p-77f, 0x1.fa01fep-38f, 0x1.f79dacp-76f, 0.0f, 0.0f, 0.0f,
     0x1.89fc06p-40f, 0x1.f1463p-119f, 0.0f, 0.0f, 0.0f, 0x1.642714p-78f,
     0x1.06d7bep-74f, 0.0f, 0x1.d64ecp-11f, 0x1.4372e8p-56f, 0.0f, 0x1.3c1dfp-23f,
     0.0f, 0.0f, 0.0f, 0x1.acc7acp-20f, 0x1.cac2c4p-90f, 0.0f, 0.0f, 0x1.9cdb8ap-41f,
     0.0f, 0.0f, 0x1.7dc77p-15f, 0x1.022488p-24f, 0x1.57ac4cp-53f, 0x1.387afcp-117f,
     0.0f, 0x1.79444p-81f, 0x1.5d8876p-45f, 0.0f, 0.0f, 0x1.3fe3bep-81f, 0.0f, 0.0f,
     0x1.f64b1ap-49f, 0x1.5fd5d6p-54f, 0x1.e3c06cp-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.409c76p-7f, 0x1.abbd64p-76f, 0x1.336284p-35f, 0.0f, 0.0f, 0.0f,
     0x1.748a42p-17f, 0.0f, 0.0f, 0.0f, 0x1.57a27p-59f, 0.0f, 0.0f, 0.0f,
     0x1.67a3c8p-69f, 0x1.aeecdep-125f, 0.0f, 0x1.d68deap-50f, 0x1.96560ap-66f, 0.0f,
     0.0f, 0x1.09986cp-45f, 0.0f, 0.0f, 0x1.1cc80cp-106f, 0x1.d80db4p-30f,
     0x1.acf7b6p-52f, 0x1.62c49ap-74f, 0.0f, 0.0f, 0x1.690e1p-80f, 0x1.2d7836p-55f,
     0.0f, 0.0f, 0x1.93aa0cp-64f, 0.0f, 0.0f, 0.0f, 0x1.b819b2p-70f, 0x1.316cdap-93f,
     0.0f, 0x1.aaf75p-57f, 0.0f, 0.0f, 0x1.b84264p-125f, 0.0f, 0x1.7b849cp-118f, 0.0f,
     0x1.550d8ap-28f, 0x1.f86128p-37f, 0x1.601ce4p-47f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.035fp-91f, 0x1.3eb30cp-125f, 0.0f, 0.0f, 0x1.5277dp-19f, 0x1.d5ec6ap-52f,
     0x1.9a95bcp-24f, 0.0f, 0.0f, 0.0f, 0x1.142688p-114f, 0.0f, 0.0f, 0.0f,
     0x1.658da2p-103f, 0x1.eca2fcp-64f, 0.0f, 0x1.186df4p-69f, 0x1.803b9cp-94f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.4a6112p-27f, 0x1.d27fbp-68f, 0.0f, 0.0f, 0.0f,
     0x1.35ae62p-119f, 0x1.f03facp-69f, 0.0f, 0x1.914e96p-102f, 0.0f, 0.0f,
     0x1.19e12ap-58f, 0x1.7e1b3p-96f, 0.0f, 0.0f, 0x1.d595a2p-121f, 0x1.e4abaap-5f,
     0.0f, 0x1.a662eep-27f, 0.0f, 0x1.636018p-96f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.91087ep-17f, 0x1.fa0d8p-4f, 0.0f, 0x1.097162p-124f, 0x1.d7c7d2p-40f, 0.0f,
     0x1.424798p-34f, 0.0f, 0x1.8cb754p-112f, 0x1.5573f2p-66f, 0x1.2e7ae2p-4f,
     0x1.eef8b4p-18f, 0.0f, 0.0f, 0x1.0cf2a2p-79f, 0.0f, 0x1.afa442p-60f, 0.0f, 0.0f,
     0.0f, 0x1.3a5a74p-96f, 0x1.12a532p-28f, 0x1.29c97cp-77f, 0.0f, 0x1.3c7a06p-37f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ac0998p-57f, 0x1.e82e48p-40f, 0.0f, 0x1.eeeadcp-123f,
     0.0f, 0.0f, 0.0f, 0x1.574248p-3f, 0x1.1cdbcep-115f, 0x1.1340a8p-3f,
     0x1.7c57p-28f, 0.0f, 0x1.eb2946p-25f, 0x1.a40ebap-53f, 0.0f, 0x1.32e832p-93f,
     0.0f, 0x1.5db84ap-46f, 0x1.b9557cp-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.92c88ep-103f, 0x1.074b42p-110f, 0.0f, 0x1.300a6ep-71f, 0x1.6467e6p-101f,
     0x1.f2afeep-71f, 0x1.54315cp-84f, 0.0f, 0x1.336b86p-117f, 0.0f, 0x1.aaa2eep-7f,
     0x1.1b092cp-45f, 0.0f, 0x1.7c4ec6p-34f, 0x1.82e94ep-1f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2161dp-88f, 0x1.df5d22p-95f, 0x1.64a238p-85f, 0x1.b06518p-92f,
     0x1.0cf3a4p-71f, 0x1.b21512p-37f, 0.0f, 0x1.f64184p-14f, 0x1.5141b8p-98f,
     0x1.78b3c2p-83f, 0.0f, 0.0f, 0.0f, 0x1.c967fcp-74f, 0x1.ed6282p-95f,
     0x1.1d6dc2p-27f, 0.0f, 0.0f, 0.0f, 0x1.69650ap-87f, 0.0f, 0.0f, 0x1.6bae98p-74f,
     0x1.8a12b6p-112f, 0.0f, 0.0f, 0x1.3b5b26p-116f, 0.0f, 0x1.1d399ap-124f,
     0x1.4bc312p-88f, 0x1.9e0426p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.38f572p-9f, 0.0f,
     0x1.a91cf6p-112f, 0.0f, 0.0f, 0x1.5e1652p-53f, 0.0f, 0x1.7d9accp-98f, 0.0f,
     0x1.36dd58p-65f, 0x1.66b3ep-90f, 0x1.14b73cp-18f, 0.0f, 0.0f, 0.0f,
     0x1.874ecp-42f, 0x1.e95266p-95f, 0x1.df8ed8p-46f, 0.0f, 0.0f, 0x1.3e7cd6p-84f,
     0x1.23bf6cp-120f, 0x1.8d691ap-107f, 0.0f, 0x1.b36b4p-33f, 0.0f, 0.0f,
     0x1.c74a04p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ba982ep-53f, 0x1.cc17bap-43f, 0.0f,
     0x1.1190f2p-45f, 0x1.00ac1ep-35f, 0.0f, 0x1.5f05d4p-124f, 0x1.45e0a6p-67f, 0.0f,
     0.0f
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
            int32_t tmp3;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_acosf1_u35purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = bench_acc + tmp1;
            bench_acc = tmp2;
            tmp3 = i + INT32_C(1);
            i = tmp3;
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
    printf("Sleef_acosf1_u35purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_acosf1_u35purecfma bench acc %a\n", global_bench_acc);
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
