/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_remainderf1_purecfma.c --function \
 *     Sleef_finz_remainderf1_purecfma --arity 2 --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary32,binary32 --bench \
 *     --no-embedded-bin --target x86_sse2
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
     0x1.3bf49ep-49f, 0.0f, 0x1.91984ep-95f, 0x1.61a46ap-77f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.724056p-93f, 0x1.947d5ap-101f, 0x1.5a41d8p-4f, 0.0f, 0.0f, 0.0f,
     0x1.c54676p-7f, 0x1.53c828p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e35dc2p-110f, 0.0f,
     0x1.136d4cp-90f, 0x1.977e02p-104f, 0x1.3a0f82p-49f, 0x1.517be4p-47f, 0.0f, 0.0f,
     0x1.e717b8p-61f, 0.0f, 0x1p0f, 0x1.75f654p-59f, 0.0f, 0.0f, 0x1.327516p-119f,
     0.0f, 0.0f, 0.0f, 0x1.1b1c8p-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4b6458p-30f, 0.0f,
     0x1.8a9de8p-30f, 0.0f, 0.0f, 0.0f, 0x1.bea13ep-41f, 0.0f, 0x1.b61ac4p-10f, 0.0f,
     0.0f, 0x1.dd063ep-76f, 0x1.296f9cp-2f, 0x1.b9b8d6p-23f, 0x1.eff928p-118f,
     0x1.b54886p-12f, 0.0f, 0x1.417fap-96f, 0x1.1bb9aap-94f, 0.0f, 0x1.cec08p-19f,
     0x1.7fde56p-88f, 0x1.69f7bap-73f, 0.0f, 0x1.35dfecp-8f, 0.0f, 0x1.3c8d82p-56f,
     0.0f, 0.0f, 0x1.3fffe6p-62f, 0.0f, 0x1.7fcff2p-28f, 0x1.f787fp-112f,
     0x1.de4ad4p-72f, 0x1.24456p-95f, 0x1.78523p-13f, 0x1.25e76ap-113f, 0.0f,
     0x1.4a845ap-57f, 0.0f, 0.0f, 0.0f, 0x1.948ddcp-40f, 0x1.0abc02p-62f,
     0x1.bf3d4ap-83f, 0.0f, 0x1.99621ap-6f, 0x1.8959ap-116f, 0.0f, 0x1.7de3b8p-108f,
     0.0f, 0.0f, 0x1.c3b5dcp-91f, 0x1.e9964cp-73f, 0.0f, 0x1.e130f4p-30f, 0.0f, 0.0f,
     0x1.50d902p-46f, 0.0f, 0.0f, 0.0f, 0x1.56a018p-65f, 0x1.c88186p-20f,
     0x1.83dedep-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6c8edap-93f,
     0x1.dd6378p-73f, 0.0f, 0.0f, 0x1.2df52p-84f, 0x1.7f4688p-45f, 0.0f,
     0x1.77f4cp-113f, 0x1.0e032ep-73f, 0x1.394132p-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1p0f, 0.0f, 0.0f, 0x1.45cff2p-33f, 0.0f, 0.0f, 0.0f, 0x1.237184p-61f, 0.0f,
     0x1.7ad24ap-105f, 0x1.64629ep-61f, 0.0f, 0x1.cd496p-105f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d88884p-90f, 0.0f, 0.0f, 0x1.b179fap-25f, 0x1.b7f58ep-105f, 0x1.7e868p-57f,
     0x1.8a0ab8p-44f, 0.0f, 0x1.f6b09cp-84f, 0.0f, 0x1.0f4e3ap-31f, 0x1.9f50ep-50f,
     0x1.e95cb2p-87f, 0.0f, 0x1.2fac38p-78f, 0x1.afb158p-99f, 0.0f, 0.0f,
     0x1.e67fap-118f, 0x1.89f7f8p-95f, 0x1.dbdf8p-84f, 0x1.23c78cp-66f, 0.0f,
     0x1.0d67fap-114f, 0x1.3833cap-96f, 0x1.f77758p-1f, 0x1.547dccp-55f,
     0x1.b9cfa8p-43f, 0.0f, 0x1.24be1ap-39f, 0.0f, 0x1.2b400ap-41f, 0.0f, 0.0f, 0.0f,
     0x1.c1525cp-2f, 0.0f, 0.0f, 0x1.e15a12p-50f, 0x1.b6f214p-3f, 0x1.7398c4p-84f,
     0.0f, 0.0f, 0x1.7b333ap-88f, 0.0f, 0x1.2faff8p-49f, 0x1.2c40a8p-35f,
     0x1.4dcf2cp-21f, 0x1.1c2df2p-29f, 0.0f, 0x1.581224p-89f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cc658cp-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a5d1b2p-3f, 0x1.cdc1f8p-15f,
     0x1.a8ffd2p-15f, 0x1.a8e7e4p-97f, 0.0f, 0x1.7e4c74p-5f, 0x1.f0f2eep-112f, 0.0f,
     0x1.ba49e8p-125f, 0x1.98da02p-70f, 0.0f, 0x1.10a486p-92f, 0x1.469f8ap-124f, 0.0f,
     0.0f, 0x1.0ebbccp-117f, 0.0f, 0.0f, 0x1.0204b2p-92f, 0x1.aa8594p-14f, 0.0f, 0.0f,
     0x1.644f18p-23f, 0x1.28bc8ep-122f, 0x1.24e9bap-22f, 0x1.60139p-72f,
     0x1.3da76cp-18f, 0.0f, 0x1.46696cp-35f, 0.0f, 0.0f, 0x1.ea3acp-32f, 0.0f,
     0x1.a9f85ep-10f, 0.0f, 0x1.401a76p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.028f5p-114f, 0.0f, 0x1.8bfcaep-70f, 0.0f, 0x1.0329c2p-42f, 0.0f,
     0x1.496aa6p-1f, 0x1.d276b2p-103f, 0.0f, 0.0f, 0.0f, 0x1.a6ad54p-96f,
     0x1.17dbbcp-59f, 0.0f, 0x1.c7a178p-14f, 0x1.ca4fe4p-109f, 0x1.3cf178p-125f,
     0x1.82a1c6p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.74fbecp-61f, 0.0f, 0.0f,
     0x1.c12066p-54f, 0x1.fa8c02p-3f, 0x1.7564d4p-74f, 0x1.73150ap-99f,
     0x1.03cff6p-98f, 0x1.edd6d2p-26f, 0.0f, 0.0f, 0x1.c1bda2p-53f, 0x1.43e7e6p-2f,
     0.0f, 0x1.ea17c4p-47f, 0.0f, 0.0f, 0.0f, 0x1.78c8fp-73f, 0x1.5346cap-30f,
     0x1.548d64p-23f, 0.0f, 0x1.29b34p-35f, 0.0f, 0x1.536864p-90f, 0x1.636674p-79f,
     0x1.7a93c2p-73f, 0.0f, 0x1.4e0352p-42f, 0x1.c2dac8p-15f, 0.0f, 0x1.873b2ep-36f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.df36ep-115f, 0.0f, 0.0f, 0x1.204ep-121f,
     0x1.fe691ep-30f, 0.0f, 0x1.87f4d4p-8f, 0x1.e3e544p-48f, 0x1.c10e62p-80f, 0.0f,
     0.0f, 0x1.3be64ep-124f, 0x1.beabd2p-112f, 0.0f, 0x1.27425ap-11f, 0.0f, 0.0f,
     0x1.521336p-45f, 0.0f, 0.0f, 0.0f, 0x1.02187p-121f, 0.0f, 0.0f, 0.0f,
     0x1.260f56p-92f, 0.0f, 0.0f, 0.0f, 0x1.e8abc2p-68f, 0.0f, 0x1.b7cdeep-119f,
     0x1.54fe94p-102f, 0x1.e634bap-126f, 0.0f, 0x1.e64a06p-109f, 0x1.21e44ep-111f,
     0.0f, 0x1.85b11ap-10f, 0x1.a556f6p-102f, 0.0f, 0.0f, 0x1.5c6e62p-111f, 0.0f,
     0.0f, 0.0f, 0x1.362fa2p-68f, 0x1.ec82b6p-6f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.df5bd6p-56f, 0.0f, 0x1.005eaep-66f, 0x1.021bbap-92f, 0.0f, 0x1.b7651ap-95f,
     0.0f, 0x1.895aa6p-48f, 0.0f, 0x1.4a626cp-24f, 0.0f, 0.0f, 0x1.bcd77p-104f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.38534cp-10f, 0x1.c79764p-62f, 0.0f, 0.0f, 0.0f,
     0x1.695c58p-62f, 0x1.e8e47cp-71f, 0x1.4b0e92p-124f, 0x1.0e1854p-1f,
     0x1.dd4cf8p-3f, 0x1.7adc6cp-52f, 0x1.fea2f8p-15f, 0x1.4bc0bap-99f, 0.0f,
     0x1.3ce72ep-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.109e4p-67f,
     0x1.c91f2ep-63f, 0.0f, 0x1.a8e7dp-81f, 0x1.102e12p-32f, 0.0f, 0x1.1310f8p-43f,
     0.0f, 0.0f, 0.0f, 0x1.cb74ecp-78f, 0.0f, 0.0f, 0.0f, 0x1.343718p-119f, 0.0f,
     0x1.235764p-6f, 0x1.74652ap-95f, 0x1.1673cep-110f, 0.0f, 0.0f, 0x1.37f15ap-99f,
     0x1.457576p-42f, 0.0f, 0.0f, 0x1.1f3282p-44f, 0.0f, 0x1.b4186ap-116f, 0.0f, 0.0f,
     0.0f, 0x1.6af9e8p-57f, 0.0f, 0.0f, 0x1.0fd82ap-113f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8244f4p-116f, 0.0f, 0.0f, 0x1.664dbcp-116f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3d152ep-94f, 0x1.3dcc82p-2f, 0.0f, 0x1.032922p-116f, 0x1.54ed16p-36f,
     0x1.fe86bep-61f, 0.0f, 0x1.1f739p-38f, 0x1.fea518p-119f, 0.0f, 0x1.a0ef58p-118f,
     0.0f, 0x1.fe095cp-94f, 0x1.ae9f3ap-119f, 0.0f, 0x1.f9a9b2p-43f, 0.0f, 0.0f,
     0x1.a676c8p-15f, 0x1.457c74p-31f, 0x1.07943p-104f, 0.0f, 0x1.62e5fcp-61f,
     0x1.287dbcp-6f, 0x1.de9f02p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.98f02ep-29f, 0.0f, 0x1.98e31p-25f, 0x1.16f804p-41f, 0.0f, 0.0f,
     0x1.9737dcp-53f, 0.0f, 0.0f, 0.0f, 0x1.2657ecp-33f, 0.0f, 0x1.cebd1ep-28f, 0.0f,
     0.0f, 0x1.1ac41ap-56f, 0.0f, 0.0f, 0.0f, 0x1.a89736p-55f, 0.0f, 0x1.44f742p-20f,
     0.0f, 0x1.b1fc6ep-16f, 0.0f, 0x1.3bb7eap-63f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f1f0c6p-9f, 0x1.84f4fap-91f, 0x1.630c54p-79f, 0.0f, 0x1.3a416ap-117f, 0.0f,
     0.0f, 0x1.056d12p-79f, 0.0f, 0x1.505c64p-65f, 0.0f, 0x1.ed2cep-17f, 0.0f,
     0x1.6b79p-49f, 0x1.ddb158p-71f, 0.0f, 0x1.09d182p-83f, 0x1.a52fdcp-72f,
     0x1.a74ab8p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6c9c4p-74f, 0.0f, 0x1.69d784p-16f,
     0x1.051b68p-67f, 0.0f, 0.0f, 0.0f, 0x1.05da0cp-56f, 0.0f, 0.0f, 0x1.10882p-123f,
     0x1.c3845ep-54f, 0x1.846006p-55f, 0.0f, 0.0f, 0.0f, 0x1.44ef7ep-104f,
     0x1.0e6702p-69f, 0x1.1c748p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e1407cp-84f, 0.0f,
     0x1.37de6p-59f, 0.0f, 0.0f, 0.0f, 0x1.a2bbdcp-76f, 0.0f, 0.0f, 0.0f,
     0x1.71cb4ep-82f, 0x1.71db5ap-39f, 0x1.d40af2p-44f, 0x1.36d8dep-93f, 0.0f, 0.0f,
     0.0f, 0x1.3ddf62p-31f, 0x1.20c4a2p-23f, 0x1.07033ep-112f, 0.0f, 0.0f, 0.0f,
     0x1.73b106p-106f, 0x1.b486fap-78f, 0.0f, 0.0f, 0x1.2d5a92p-85f, 0.0f,
     0x1.5b4b1ep-100f, 0x1.d8f25p-44f, 0.0f, 0.0f, 0x1.68affcp-31f, 0x1.a3f92ap-47f,
     0x1.b0ff5p-113f, 0x1.95ed74p-69f, 0x1.8f153p-14f, 0x1.fac866p-62f,
     0x1.44e4b4p-57f, 0x1.ec463ep-13f, 0.0f, 0x1.51435ap-99f, 0x1.c336f6p-48f,
     0x1.15d106p-66f, 0x1.3581f4p-56f, 0.0f, 0x1.d1f1f2p-112f, 0x1.4a98ep-124f,
     0x1.42c2fap-120f, 0x1.7eb34ep-28f, 0.0f, 0.0f, 0x1.583d0ep-47f, 0x1.6f0d04p-119f,
     0.0f, 0x1.2c43c8p-83f, 0.0f, 0.0f, 0x1p0f, 0x1.6775bcp-25f, 0.0f, 0.0f,
     0x1.c27284p-45f, 0.0f, 0x1.4859b4p-53f, 0.0f, 0.0f, 0.0f, 0x1.fc3c34p-5f,
     0x1.336c0cp-32f, 0.0f, 0x1.7054b4p-47f, 0.0f, 0x1.73b686p-1f, 0.0f, 0.0f,
     0x1.7f4056p-116f, 0x1.549aa6p-56f, 0x1.7b924ap-85f, 0x1.1e2b18p-117f,
     0x1.9fe5e6p-27f, 0x1.5df534p-53f, 0x1.1092fcp-123f, 0.0f, 0x1.18b69ap-84f, 0.0f,
     0.0f, 0.0f, 0x1.c30feap-115f, 0.0f, 0x1.cd291ep-11f, 0.0f, 0x1.b423c2p-52f,
     0x1.71d5d6p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.940b06p-120f, 0.0f,
     0x1.727086p-27f, 0x1.d4cb6cp-31f, 0x1.0e0fa8p-84f, 0x1.6b9aa2p-117f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.047a96p-92f, 0.0f, 0.0f, 0.0f, 0x1.f13fccp-49f, 0.0f,
     0.0f, 0x1.59e296p-104f, 0x1.1b493ep-118f, 0.0f, 0.0f, 0x1.ff0266p-105f,
     0x1.5e60a6p-26f, 0x1.5cfe2p-97f, 0.0f, 0x1.1fd3d8p-46f, 0.0f, 0.0f,
     0x1.204126p-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3b70bep-25f, 0.0f, 0.0f,
     0x1.6d20cep-94f, 0.0f, 0x1.49a3b4p-69f, 0x1.b48384p-122f, 0.0f, 0.0f,
     0x1.a7fe8ap-72f, 0x1.f03ac2p-121f, 0.0f, 0x1.b10d52p-57f, 0.0f, 0.0f, 0.0f,
     0x1.b183bcp-103f, 0.0f, 0x1.1e8dfep-56f, 0.0f, 0x1.b80ceep-29f, 0x1.4ad626p-37f,
     0.0f, 0x1.d37cdp-113f, 0.0f, 0.0f, 0x1.ef7c52p-64f, 0x1.efd234p-116f, 0.0f, 0.0f,
     0x1.ffe026p-18f, 0x1.79ea24p-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e36064p-4f, 0x1.418p-51f, 0.0f, 0x1.7d83dcp-54f, 0x1.a5b396p-4f,
     0x1.2e90d6p-34f, 0.0f, 0.0f, 0x1.934896p-88f, 0.0f, 0.0f, 0x1.5b09ap-109f,
     0x1.055316p-103f, 0x1.3faa9ep-55f, 0.0f, 0x1.33022ep-97f, 0x1.113a18p-32f, 0.0f,
     0.0f, 0x1.df511cp-99f, 0.0f, 0x1.10fa7ap-5f, 0x1.e4c4e6p-30f, 0x1.2e118cp-79f,
     0.0f, 0x1.8f03ep-88f, 0.0f, 0x1.ab774cp-83f, 0.0f, 0.0f, 0.0f, 0x1.d76d84p-2f,
     0x1.b24edep-65f, 0x1.95590ap-91f, 0.0f, 0.0f, 0x1.93c9c2p-102f, 0.0f, 0.0f,
     0x1.97ed1ap-71f, 0x1.58f24cp-109f, 0.0f, 0.0f, 0x1.cc59bap-61f, 0x1.89d7dcp-117f,
     0.0f, 0x1.d45e62p-68f, 0.0f, 0x1.d8e864p-10f, 0x1.718c2cp-105f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.3f150ap-111f, 0.0f, 0.0f, 0.0f, 0x1.e8acdp-28f,
     0x1.f59ddap-99f, 0.0f, 0x1.a5b586p-62f, 0.0f, 0.0f, 0x1.4d02bcp-12f,
     0x1.16d748p-97f, 0x1.0b7b5ap-18f, 0x1.3da468p-48f, 0.0f, 0x1.6a069p-49f, 0.0f,
     0.0f, 0x1.0f6876p-117f, 0.0f, 0.0f, 0x1.685954p-67f, 0.0f, 0.0f, 0.0f,
     0x1.0639a6p-15f, 0.0f, 0.0f, 0x1.c6b9a2p-30f, 0.0f, 0.0f, 0x1.e480aap-37f,
     0x1.45dcd6p-108f, 0x1.0acd06p-8f, 0x1.6d7f92p-27f, 0.0f, 0x1.2360dap-106f, 0.0f,
     0.0f, 0x1.98529cp-102f, 0.0f, 0.0f, 0x1.2b9df8p-35f, 0.0f, 0x1.4716ccp-101f,
     0.0f, 0.0f, 0.0f, 0x1.5ddb52p-42f, 0x1.14e1bap-45f, 0x1.cde744p-36f,
     0x1.ab8ffap-95f, 0.0f, 0x1.ce9254p-8f, 0x1.0c42dp-88f, 0.0f, 0.0f, 0.0f,
     0x1.d1a172p-105f, 0x1.0c68ecp-90f, 0x1.10e1c8p-106f, 0.0f, 0x1.1b06eap-97f,
     0x1.e6f64ep-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.79c4aep-76f, 0x1.1d0f0ep-7f,
     0x1.7403dp-41f, 0.0f, 0.0f, 0x1.86c896p-80f, 0.0f, 0.0f, 0.0f, 0x1.7627e4p-61f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.2b167ap-97f, 0x1.174fap-1f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.90b06ap-2f, 0x1.e24ccep-124f, 0x1.c9329p-74f, 0x1.8fd28ep-11f,
     0x1.8763acp-96f, 0x1.2adc5ap-118f, 0x1.b35d0ep-15f, 0.0f, 0x1.89a7bep-1f,
     0x1.65eff6p-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3edc4p-95f, 0x1.2b8f54p-70f, 0.0f, 0x1.9bee08p-19f, 0.0f, 0.0f,
     0x1.0aff74p-42f, 0x1p0f, 0x1.e39476p-45f, 0x1.67b6ap-95f, 0.0f, 0x1.112ac8p-119f,
     0x1.82c2dep-39f, 0x1.42a698p-111f, 0.0f, 0x1.103bfp-117f, 0x1.60858cp-38f,
     0x1.e70ab2p-33f, 0.0f, 0.0f, 0.0f, 0x1.3767e2p-58f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fe0cd8p-74f, 0.0f, 0x1.0ce126p-43f, 0x1.a4f6e8p-91f, 0x1.daeafp-20f,
     0x1.453d8ap-6f, 0x1.f9ed6ap-34f, 0x1.045688p-114f, 0.0f, 0x1.15cf26p-106f, 0.0f,
     0x1.c5ec34p-4f, 0.0f, 0.0f, 0x1.beca04p-66f, 0.0f, 0x1.bb03ccp-20f,
     0x1.799ef8p-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cbf06ap-6f, 0.0f, 0x1.157f4cp-53f,
     0.0f, 0.0f, 0.0f, 0x1.f42242p-102f, 0.0f, 0x1.0f0e8ep-72f, 0.0f, 0x1.50b992p-49f,
     0.0f, 0x1.2c8b52p-24f, 0x1.52289ap-92f, 0.0f, 0x1.5924f4p-79f, 0x1.aa5b2ep-92f,
     0x1.441bb4p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.14a29ep-22f, 0.0f, 0.0f,
     0x1.e23264p-97f, 0.0f, 0x1.d4d72p-74f, 0x1.caa0f2p-69f, 0x1.fc9072p-100f, 0.0f,
     0.0f, 0.0f, 0x1.81c2eap-72f, 0.0f, 0.0f, 0.0f, 0x1.557b62p-57f, 0x1.8d02bap-40f,
     0x1.519d6ap-49f, 0x1.81dedp-18f, 0.0f, 0x1.755422p-86f, 0.0f, 0x1.de48b4p-31f,
     0.0f, 0.0f, 0.0f, 0x1.9b4116p-39f, 0.0f, 0x1.a032e8p-86f, 0x1.c43f9cp-84f,
     0x1.78e624p-44f, 0.0f, 0x1.4ff47ap-119f, 0x1.815b7cp-9f
};
static const float external_bench_wrapper_input_table_arg1[1001]  = {
     0.0f, 0.0f, 0.0f, 0x1.674dbcp-51f, 0.0f, 0x1.7ed4fcp-126f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.2ba9b4p-23f, 0x1.0e2682p-36f, 0x1.4f366cp-45f, 0.0f,
     0x1.68c194p-86f, 0.0f, 0x1.6760fep-8f, 0.0f, 0x1.3b6512p-71f, 0.0f,
     0x1.7d1f68p-16f, 0x1.971d34p-82f, 0x1.b00562p-95f, 0.0f, 0x1.7ae78cp-30f,
     0x1.0e50fap-108f, 0x1.a2e2d2p-125f, 0.0f, 0.0f, 0.0f, 0x1.19cfe8p-10f, 0.0f,
     0.0f, 0x1.632966p-74f, 0x1.01f8d4p-117f, 0x1.92d27p-102f, 0x1.fa0748p-103f, 0.0f,
     0x1.87303ap-32f, 0.0f, 0.0f, 0.0f, 0x1.dde4b2p-60f, 0x1.a1e3p-89f, 0x1p0f, 0.0f,
     0x1.0665dp-77f, 0.0f, 0x1.a037d8p-94f, 0x1.617c5cp-63f, 0x1.f700e8p-74f, 0.0f,
     0x1.093ffp-16f, 0x1.f8414ep-96f, 0.0f, 0x1.c3298cp-76f, 0.0f, 0x1.68f6acp-56f,
     0x1.531a28p-50f, 0.0f, 0x1.f69bdp-96f, 0x1.08f9fcp-59f, 0.0f, 0x1.40dcf6p-115f,
     0x1.d87cecp-94f, 0x1.fea4ccp-93f, 0.0f, 0x1.d64aep-122f, 0.0f, 0x1.373a84p-111f,
     0x1.6fe46ap-42f, 0.0f, 0.0f, 0x1.d8e612p-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7cc6cep-14f, 0.0f, 0x1.34c1d2p-22f, 0.0f, 0x1.5b3e88p-53f, 0x1.a161fep-62f,
     0x1.5b49fcp-64f, 0x1.9f93f4p-119f, 0x1.e8fcd6p-79f, 0x1.0155c2p-33f,
     0x1.425f4ep-60f, 0.0f, 0.0f, 0x1.72209cp-122f, 0.0f, 0.0f, 0x1.27a21p-97f, 0.0f,
     0.0f, 0.0f, 0x1.5aca46p-52f, 0.0f, 0x1.3ceafcp-82f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.acf6dp-29f, 0.0f, 0x1.8f4c56p-116f, 0x1.48029ep-32f, 0.0f, 0.0f, 0.0f,
     0x1.023e7ap-77f, 0x1.9d11dep-79f, 0x1.24368p-19f, 0.0f, 0x1.664336p-61f,
     0x1.e4a7bap-69f, 0.0f, 0x1.1a4ef6p-10f, 0.0f, 0x1.f2fe52p-121f, 0x1.7f79d4p-118f,
     0x1.881a12p-48f, 0x1.478494p-119f, 0.0f, 0x1.941eecp-79f, 0x1.2cec34p-53f, 0.0f,
     0.0f, 0x1.e71cfap-37f, 0.0f, 0.0f, 0x1.5ee018p-83f, 0.0f, 0.0f, 0x1.4a6d7ep-44f,
     0x1.b520bep-110f, 0.0f, 0x1.505316p-21f, 0x1.3bd44cp-55f, 0x1.e11c88p-124f,
     0x1.30b12ep-18f, 0x1.d0b03p-72f, 0.0f, 0x1.926e6cp-56f, 0x1.88539p-92f,
     0x1.2e8d98p-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b75e88p-75f, 0.0f, 0x1.a914c6p-103f,
     0.0f, 0x1.1d2046p-66f, 0x1.344bbep-86f, 0x1.8f38ecp-95f, 0x1.2a89c6p-12f,
     0x1.a11b5cp-101f, 0x1.ed29p-6f, 0.0f, 0x1.71d58cp-20f, 0x1.4a386p-26f,
     0x1.2011bep-31f, 0.0f, 0x1.82d646p-103f, 0.0f, 0x1.fb4d5ep-57f, 0x1.1151b8p-27f,
     0.0f, 0x1.a50f62p-75f, 0x1.30df22p-30f, 0x1.1b9c42p-25f, 0x1.8561cp-104f, 0.0f,
     0.0f, 0.0f, 0x1.313dcep-32f, 0x1.fed9acp-63f, 0x1.aca8d2p-31f, 0.0f,
     0x1.e6ef94p-91f, 0x1.5ed1fep-113f, 0x1.f0fda6p-55f, 0x1.958aacp-79f,
     0x1.7f16fep-85f, 0.0f, 0x1.c5cf16p-126f, 0.0f, 0.0f, 0x1.e26be6p-76f,
     0x1.dfef3p-105f, 0x1.053d7p-71f, 0x1.a432aap-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fed10cp-12f, 0.0f, 0x1.d8dc86p-37f, 0x1.31ec9ap-67f, 0x1.12b8aep-104f,
     0x1.334e72p-108f, 0.0f, 0.0f, 0.0f, 0x1.caa7b2p-67f, 0.0f, 0.0f,
     0x1.f4fe2ep-106f, 0x1.acbab2p-44f, 0.0f, 0.0f, 0x1.fa7a7cp-35f, 0x1.a24648p-33f,
     0x1.98a794p-87f, 0x1.1a480ep-27f, 0.0f, 0.0f, 0x1.74eff2p-101f, 0.0f,
     0x1.1df55ep-33f, 0.0f, 0.0f, 0x1.a2dbe6p-91f, 0x1.34f0b8p-108f, 0x1.44d44ep-59f,
     0x1.16925ap-98f, 0x1.88e2e6p-32f, 0.0f, 0.0f, 0x1.5d2e5cp-91f, 0.0f, 0.0f, 0.0f,
     0x1.841dbp-104f, 0.0f, 0.0f, 0x1.4d991ap-119f, 0x1.44f9ecp-98f, 0.0f,
     0x1.e029f8p-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ac0f4cp-126f, 0x1.63938cp-10f, 0.0f,
     0.0f, 0.0f, 0x1.72eae8p-32f, 0x1.90b146p-96f, 0.0f, 0x1.65768ep-76f, 0.0f, 0.0f,
     0.0f, 0x1.8c96bp-22f, 0.0f, 0x1.39426ap-93f, 0x1.4ab432p-92f, 0x1.86ca16p-99f,
     0x1.0f2518p-30f, 0.0f, 0.0f, 0.0f, 0x1.e5ac3cp-126f, 0.0f, 0x1.1e6ffp-75f,
     0x1.5b73e8p-83f, 0x1.ef7b8cp-22f, 0.0f, 0x1.b23ef4p-74f, 0.0f, 0x1.de7cc2p-74f,
     0x1.98599cp-3f, 0.0f, 0x1.680be6p-30f, 0x1.8198ap-27f, 0.0f, 0.0f, 0.0f,
     0x1.571d1ap-29f, 0x1.9c8e9cp-37f, 0.0f, 0x1.e70b8p-113f, 0x1.40051ep-78f,
     0x1.2af11p-61f, 0.0f, 0x1.1c7e4ap-123f, 0x1.bcb86ep-78f, 0.0f, 0.0f, 0.0f,
     0x1.77f866p-34f, 0x1.8bc1aap-43f, 0x1.e87d44p-110f, 0.0f, 0x1.f2366ap-35f, 0.0f,
     0x1.7c5694p-104f, 0.0f, 0.0f, 0x1.e0ee54p-120f, 0x1.c40e24p-92f, 0.0f,
     0x1.f7ab18p-6f, 0.0f, 0x1.ec44c2p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.763dd2p-107f, 0.0f, 0.0f, 0x1.579eap-41f, 0.0f, 0x1.f08676p-38f, 0.0f,
     0x1.7bda9ep-28f, 0.0f, 0x1.c679dp-95f, 0.0f, 0.0f, 0.0f, 0x1.9cca52p-80f, 0.0f,
     0.0f, 0.0f, 0x1.e33cc8p-116f, 0.0f, 0x1.2eeb32p-84f, 0x1.c7d776p-124f,
     0x1.92ba8ap-27f, 0x1.6296f4p-44f, 0x1.0f176ep-118f, 0.0f, 0x1.ad739p-107f, 0.0f,
     0x1.a0e4aep-22f, 0.0f, 0x1.72e948p-1f, 0x1.36ad82p-74f, 0.0f, 0.0f, 0.0f,
     0x1.43ffd8p-27f, 0x1.4f6932p-51f, 0.0f, 0.0f, 0x1.835aecp-55f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.684944p-15f, 0x1.e31b54p-9f, 0x1.b2e3dap-1f, 0x1.b449c4p-122f, 0.0f,
     0.0f, 0x1.2e7232p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4e8d4ep-89f, 0x1.b1ef96p-79f,
     0x1.16ca5ep-87f, 0.0f, 0x1.f67ff6p-35f, 0.0f, 0x1.6a8dd6p-102f, 0.0f,
     0x1.7f189ep-125f, 0x1.4f2578p-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1522bep-59f,
     0x1.4db16ep-25f, 0.0f, 0.0f, 0.0f, 0x1.b70796p-68f, 0.0f, 0.0f, 0x1p0f,
     0x1.e15acep-24f, 0x1.a3afdap-106f, 0.0f, 0x1.b9b362p-101f, 0x1.67358cp-103f,
     0.0f, 0x1.891d5p-121f, 0.0f, 0.0f, 0x1.a92018p-89f, 0x1.1b3cb2p-23f,
     0x1.ac69d8p-53f, 0.0f, 0x1.f5ea2ep-84f, 0.0f, 0.0f, 0x1.fa299p-74f,
     0x1.32948ap-88f, 0x1.2d1928p-68f, 0x1.5bbd24p-22f, 0x1.e1be4p-23f,
     0x1.1633e6p-27f, 0.0f, 0.0f, 0x1.67df1p-93f, 0.0f, 0.0f, 0x1.04e1cp-83f,
     0x1.a9568p-125f, 0.0f, 0.0f, 0.0f, 0x1.f571b4p-50f, 0x1.1aa99cp-42f,
     0x1.1eb9b4p-73f, 0x1.c5b8f6p-12f, 0x1.6cdba6p-52f, 0x1.9e1906p-79f, 0.0f, 0.0f,
     0x1.407e7ap-83f, 0x1.d7690ap-15f, 0.0f, 0x1.117fcep-97f, 0.0f, 0.0f,
     0x1.95628cp-13f, 0x1.932a8ep-42f, 0.0f, 0x1.6ea9bep-58f, 0.0f, 0.0f, 0.0f,
     0x1.47cf14p-47f, 0x1.12118ep-120f, 0x1.e29c24p-48f, 0x1.7c370ap-45f,
     0x1.d9f89p-38f, 0x1.6763ccp-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.74da88p-19f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.8053c2p-124f, 0x1.8729a8p-53f, 0x1.cc09aap-39f,
     0x1.ec0bd2p-72f, 0x1.dd5f4ap-50f, 0.0f, 0x1.54a5dap-40f, 0.0f, 0x1.4ede1p-68f,
     0.0f, 0x1.76c1cep-25f, 0x1.40f3d4p-87f, 0x1.7da058p-21f, 0.0f, 0x1.df82ecp-108f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c04322p-119f, 0.0f, 0x1.710844p-50f, 0x1.c3b8c8p-28f,
     0x1.d22002p-3f, 0.0f, 0.0f, 0x1.edb7a8p-83f, 0x1.e231d6p-97f, 0.0f, 0.0f, 0.0f,
     0x1.fd63d6p-39f, 0.0f, 0x1.a549d4p-86f, 0.0f, 0.0f, 0x1.8d3cd2p-52f, 0.0f,
     0x1.3b6d22p-28f, 0.0f, 0x1.232f56p-126f, 0x1.075feap-1f, 0x1p0f, 0x1.2c127cp-17f,
     0.0f, 0.0f, 0x1.1996a8p-103f, 0x1.eff948p-104f, 0.0f, 0x1.d34d94p-43f, 0.0f,
     0x1.23e46p-6f, 0.0f, 0x1.c4e232p-77f, 0.0f, 0x1.af7a1p-103f, 0.0f, 0.0f, 0.0f,
     0x1.2db398p-91f, 0.0f, 0.0f, 0.0f, 0x1.a53cbp-118f, 0.0f, 0.0f, 0.0f,
     0x1.53023ep-20f, 0x1.f59c82p-25f, 0.0f, 0x1.1f410ap-37f, 0x1.85785ep-6f,
     0x1.aa4512p-106f, 0x1.f7672ap-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.572038p-15f, 0x1.444a66p-60f, 0.0f, 0.0f, 0x1.0f1ff2p-80f, 0x1.6e247cp-48f,
     0x1.eb9276p-65f, 0x1.0d7432p-114f, 0x1.d1e36ep-41f, 0x1.651e5p-46f, 0.0f, 0.0f,
     0x1.99cfacp-98f, 0x1.e7f58cp-64f, 0x1.c72c52p-96f, 0x1.56dcbap-119f, 0.0f,
     0x1.42ec82p-72f, 0.0f, 0x1.594f2cp-10f, 0.0f, 0x1.13f398p-20f, 0x1.84bc9ep-121f,
     0.0f, 0x1.cfa3acp-85f, 0.0f, 0x1.d6f784p-43f, 0.0f, 0.0f, 0.0f, 0x1.87dc42p-25f,
     0x1.151fe4p-35f, 0.0f, 0.0f, 0x1.177a8ep-36f, 0x1.d0472cp-56f, 0x1.56d5c6p-121f,
     0.0f, 0x1.8657a2p-23f, 0.0f, 0.0f, 0x1.f78af4p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.204b34p-39f, 0x1.fc988cp-83f, 0x1.182be6p-52f, 0.0f, 0.0f, 0.0f,
     0x1.e924aep-10f, 0x1.6b7f28p-95f, 0.0f, 0x1.d57c96p-121f, 0.0f, 0.0f,
     0x1.a84f3ep-31f, 0x1.94738cp-98f, 0x1.b4fc04p-47f, 0x1.9c8e7ep-56f, 0.0f,
     0x1.920638p-51f, 0x1.c9334ep-94f, 0.0f, 0x1.99a1a2p-102f, 0.0f, 0x1.960872p-98f,
     0x1.c76adcp-56f, 0x1.fca08cp-86f, 0x1.a6933ep-33f, 0x1.45da52p-50f, 0.0f, 0.0f,
     0x1.44b69p-48f, 0.0f, 0x1.026f0ep-121f, 0.0f, 0.0f, 0x1.6d9b7cp-93f, 0.0f, 0.0f,
     0x1.e9d29p-84f, 0.0f, 0.0f, 0x1.344c62p-43f, 0.0f, 0.0f, 0x1.6c9f62p-20f,
     0x1.ae6414p-19f, 0.0f, 0x1.efe68ap-21f, 0x1.4cd076p-119f, 0.0f, 0x1.b9e13ap-84f,
     0x1.77cbc6p-61f, 0.0f, 0.0f, 0x1.cfc194p-73f, 0x1.1bd00ep-103f, 0.0f, 0.0f, 0.0f,
     0x1.73041cp-112f, 0.0f, 0.0f, 0.0f, 0x1.12c06ep-25f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c017fcp-97f, 0x1.34a094p-56f, 0.0f, 0x1.7c1174p-107f, 0.0f, 0.0f,
     0x1.c062c6p-102f, 0x1.09635p-111f, 0x1.7992dep-88f, 0x1.80ad42p-85f,
     0x1.813a28p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c69462p-17f,
     0x1.c5629ep-17f, 0x1.5504aep-71f, 0x1.cdf318p-39f, 0x1.632dcp-73f,
     0x1.91b8aap-53f, 0.0f, 0.0f, 0x1.18d18p-106f, 0x1.d8af88p-39f, 0x1.5a831p-91f,
     0.0f, 0x1.37fe36p-25f, 0.0f, 0x1.6d94ccp-54f, 0x1.54edf6p-29f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.132296p-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.793d7ep-22f, 0.0f,
     0x1.118326p-53f, 0.0f, 0.0f, 0.0f, 0x1.fa3304p-30f, 0.0f, 0x1.1b2112p-121f, 0.0f,
     0x1.4f018ap-94f, 0.0f, 0x1.cef98p-16f, 0x1.7271c8p-110f, 0x1.b2eb98p-10f, 0.0f,
     0x1.19963ep-10f, 0x1.ff5b1p-61f, 0.0f, 0x1.e26b8cp-48f, 0x1.a9ac3ep-125f,
     0x1.7e1972p-121f, 0x1.27575p-30f, 0x1.680352p-120f, 0x1.3903ep-112f,
     0x1.23d668p-105f, 0.0f, 0x1.e93226p-13f, 0.0f, 0x1.864548p-117f, 0x1.ce5e9ap-79f,
     0x1.d8763p-35f, 0x1.c1bf26p-104f, 0x1.20f8e2p-68f, 0x1.91c88cp-110f,
     0x1.ccef8ep-105f, 0x1.d3ecaep-11f, 0.0f, 0.0f, 0x1.cabe8ap-84f, 0.0f,
     0x1.bde184p-121f, 0.0f, 0x1.346ec4p-124f, 0x1.6a3d86p-120f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.7d5ffap-17f, 0x1.e6176p-42f, 0x1.a985f2p-57f, 0.0f, 0.0f,
     0x1.df21bep-109f, 0.0f, 0x1.a5c194p-85f, 0.0f, 0.0f, 0x1.901a12p-95f,
     0x1.49d444p-110f, 0x1.98de06p-109f, 0.0f, 0x1.8bdd9cp-23f, 0x1.306974p-106f,
     0.0f, 0.0f, 0x1.86ae26p-110f, 0.0f, 0x1.cce95ep-29f, 0x1.b621e2p-63f,
     0x1.8c585ap-56f, 0.0f, 0.0f, 0x1.f67cb6p-69f, 0.0f, 0x1.8dcd36p-88f,
     0x1.aab16cp-29f, 0.0f, 0x1.3259aep-15f, 0.0f, 0x1.1c899ap-96f, 0.0f, 0.0f, 0.0f,
     0x1.7e17d4p-90f, 0x1.4ca776p-108f, 0.0f, 0x1.5b03e8p-8f, 0.0f, 0.0f,
     0x1.a56516p-120f, 0x1.ed1a7cp-33f, 0x1.33dbap-99f, 0x1.0a9d28p-105f, 0.0f, 0.0f,
     0x1.3e2b52p-118f, 0.0f, 0x1.de2924p-46f, 0.0f, 0x1.17cc12p-13f, 0x1.739dfp-63f,
     0.0f, 0x1.df7084p-56f, 0.0f, 0.0f, 0x1.bb52f4p-48f, 0x1.dc1ae4p-20f,
     0x1.c2cf4cp-57f, 0x1.e2f92ep-99f, 0x1.31df7ap-107f, 0.0f, 0.0f, 0.0f,
     0x1.40fc82p-42f, 0x1.af1fe2p-23f, 0x1.197d42p-62f, 0x1.2cdb6p-15f,
     0x1.add286p-83f, 0.0f, 0.0f, 0x1.26594ep-70f, 0x1.675d7ep-107f, 0x1.adca1ap-79f,
     0.0f, 0.0f, 0.0f, 0x1.52f73cp-54f, 0x1.171528p-18f, 0.0f, 0.0f, 0x1.e4cc08p-38f,
     0x1.94e3aep-104f, 0x1.2e37fcp-78f, 0x1.d2c5acp-41f, 0x1.0c402ep-21f, 0.0f, 0.0f,
     0.0f, 0x1.8627f2p-19f, 0.0f, 0x1.396448p-2f, 0x1.a78a18p-47f, 0x1.dc2302p-35f,
     0.0f, 0x1.2ed52ap-89f, 0.0f, 0.0f, 0.0f, 0x1.7abe3ap-79f, 0x1.81f90ap-82f,
     0x1.5c57e8p-14f, 0x1.f9044ep-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3c505ap-83f,
     0x1.51fb12p-62f, 0.0f, 0x1.33a1b2p-116f, 0.0f, 0.0f, 0x1.c881p-53f,
     0x1.a3a9cap-76f, 0x1.2f05f6p-81f, 0x1.7a668ap-53f, 0.0f, 0.0f, 0x1.4063dp-6f,
     0.0f, 0.0f, 0x1.9a8bb4p-8f, 0.0f, 0x1.d68f18p-48f, 0.0f, 0.0f, 0x1.db16f2p-53f,
     0.0f, 0x1.1a3c4cp-101f, 0x1.501da2p-67f, 0x1.1862acp-23f, 0.0f, 0x1.dc5794p-24f,
     0x1.2b171ap-32f, 0.0f, 0x1.6c2beep-102f, 0x1.06aedp-55f, 0.0f, 0x1.4f81a8p-47f,
     0.0f, 0x1.8a50e4p-112f, 0x1.5adfaep-31f, 0.0f, 0x1.06c8e6p-11f, 0x1.c87718p-74f,
     0x1.a2fd4ep-45f, 0.0f, 0x1.6d28e8p-6f, 0x1.b728bep-1f, 0.0f, 0.0f,
     0x1.afad12p-52f, 0.0f, 0.0f, 0x1.0c077p-48f, 0x1.a671f8p-80f, 0.0f, 0.0f, 0.0f,
     0x1.aadf1cp-14f, 0.0f, 0.0f, 0x1.8ca7b8p-103f, 0x1.283312p-115f, 0.0f, 0.0f,
     0x1.d2214p-37f, 0x1.a05a5ap-115f, 0.0f, 0x1.1727b4p-8f, 0x1.7265e8p-125f, 0.0f,
     0x1.055d8ep-109f, 0.0f, 0.0f, 0x1.328886p-76f, 0x1.c437cep-90f, 0.0f,
     0x1.f9e70ep-120f, 0.0f, 0x1.aaa6a4p-30f, 0x1.da2ea2p-109f, 0x1.13ce5cp-57f, 0.0f,
     0.0f, 0x1.816a54p-100f, 0.0f, 0x1.f1f63ep-10f, 0.0f, 0x1.6f686ep-85f, 0.0f,
     0x1.cff1fp-13f, 0.0f, 0x1.bd219cp-102f, 0x1.f5c6e2p-3f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a7cf6cp-27f, 0x1.c65aa8p-9f, 0x1.9dfd06p-12f, 0x1.204964p-120f,
     0x1.b70cf8p-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9f5128p-10f, 0x1.4ebf1ep-29f,
     0x1.7094acp-26f, 0x1.95e8f4p-94f, 0x1.74ce0cp-57f, 0x1.9d4a9p-83f,
     0x1.46ffd8p-39f, 0x1.905304p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d204f4p-88f, 0x1.dde426p-73f, 0x1.6303cep-101f, 0.0f, 0x1.7133b4p-110f,
     0x1.764992p-99f, 0x1.8721c6p-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.60dc46p-61f, 0.0f, 0.0f, 0.0f, 0x1.e634dcp-77f
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
            float tmp2;
            __m128 carg;
            __m128 carg1;
            __m128 carg2;
            float tmp3;
            int32_t tmp4;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = external_bench_wrapper_input_table_arg1[i];
            tmp2 = Sleef_finz_remainderf1_purecfma(tmp0, tmp1);
            external_bench_wrapper_output_table[i] = tmp2;
            carg = _mm_set_ss(bench_acc);
            carg1 = _mm_set_ss(tmp2);
            carg2 = _mm_add_ss(carg, carg1);
            tmp3 = _mm_cvtss_f32(carg2);
            bench_acc = tmp3;
            tmp4 = i + INT32_C(1);
            i = tmp4;
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
    printf("Sleef_finz_remainderf1_purecfma %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_remainderf1_purecfma bench acc %a\n", global_bench_acc);
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
