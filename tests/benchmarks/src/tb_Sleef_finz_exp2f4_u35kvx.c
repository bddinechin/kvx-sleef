/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_exp2f4_u35kvx.c --function \
 *     Sleef_finz_exp2f4_u35kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 4 --function-input-vector-size \
 *     4 --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float4_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float4_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0.0f, 0.0f, 0x1.f85a0ap-85f, 0.0f, 0x1.8fa7f6p-66f, 0.0f, 0.0f, 0x1.7463c8p-95f,
     0.0f, 0x1.33747p-88f, 0.0f, 0.0f, 0x1.807536p-11f, 0.0f, 0x1.82078ep-56f,
     0x1.171dd6p-126f, 0x1.54ff32p-2f, 0x1.77fddep-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9b6ea6p-31f, 0.0f, 0x1.003f72p-19f, 0.0f, 0.0f, 0x1.d2658ap-31f, 0.0f,
     0x1.e28478p-65f, 0.0f, 0.0f, 0x1.7d7716p-115f, 0x1.aea556p-19f, 0.0f,
     0x1.404308p-14f, 0.0f, 0x1.9959f6p-23f, 0.0f, 0x1.843a7cp-54f, 0.0f,
     0x1.2b8902p-3f, 0.0f, 0.0f, 0x1.cfd1cap-102f, 0.0f, 0.0f, 0x1.d7be5cp-126f, 0.0f,
     0x1.a73384p-90f, 0.0f, 0.0f, 0x1.1a7d48p-76f, 0x1.6712bep-109f, 0.0f, 0.0f,
     0x1.efab0ep-15f, 0x1.3a84dp-82f, 0.0f, 0x1.9317cp-90f, 0x1.7c67bep-18f,
     0x1.f98882p-74f, 0x1.ec24bp-91f, 0.0f, 0.0f, 0x1.56288cp-116f, 0.0f,
     0x1.a22fe8p-111f, 0x1.a16774p-70f, 0.0f, 0.0f, 0x1.4c7832p-17f, 0.0f,
     0x1.544aep-61f, 0x1.8b0db8p-66f, 0.0f, 0.0f, 0x1.da6faap-115f, 0.0f,
     0x1.0c1458p-117f, 0x1.f921a4p-75f, 0.0f, 0x1.431762p-54f, 0x1.dbc8c6p-91f, 0.0f,
     0.0f, 0x1.7b4fc6p-98f, 0.0f, 0.0f, 0x1.91a504p-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.32120ep-24f, 0.0f, 0x1.597b46p-89f, 0.0f, 0.0f, 0x1.0b217ep-83f,
     0x1.4cb0fap-91f, 0.0f, 0.0f, 0x1.3b3dacp-66f, 0x1.e401a8p-95f, 0x1.279efcp-123f,
     0.0f, 0.0f, 0x1.eeb7b6p-90f, 0x1.0caecp-123f, 0x1.363af6p-90f, 0x1.08ebeep-8f,
     0x1.3061f8p-110f, 0x1.941734p-43f, 0x1.5ef624p-21f, 0.0f, 0x1.1b156p-115f,
     0x1.139d9ep-16f, 0x1.e7faf6p-55f, 0.0f, 0x1.0c6ad6p-34f, 0x1p0f, 0x1.716acap-64f,
     0x1.3c11dcp-21f, 0x1.acd076p-89f, 0x1.ffd748p-52f, 0x1.2cea42p-65f, 0.0f, 0.0f,
     0x1.e17702p-95f, 0.0f, 0.0f, 0.0f, 0x1.9abcfcp-85f, 0.0f, 0.0f, 0x1.b5f38ep-70f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8793eep-78f, 0.0f, 0x1.ad11f8p-56f,
     0x1.98bcacp-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d9f646p-52f, 0.0f,
     0x1.28157cp-117f, 0x1.a0c404p-13f, 0x1.f3da34p-96f, 0.0f, 0x1.1fe7cep-88f,
     0x1.1fb084p-92f, 0x1.632b8p-45f, 0.0f, 0.0f, 0x1.05d21ap-80f, 0x1p0f, 0.0f,
     0x1.dc7dd6p-108f, 0.0f, 0.0f, 0.0f, 0x1.f1afc8p-106f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e8da0ep-39f, 0.0f, 0x1.c9da34p-107f, 0.0f, 0.0f, 0x1.12c852p-113f, 0.0f,
     0x1.10b4dcp-60f, 0.0f, 0x1.30cddep-93f, 0.0f, 0x1.69ad16p-23f, 0x1.d2fc8p-104f,
     0.0f, 0x1.128c42p-19f, 0.0f, 0.0f, 0.0f, 0x1.c51a74p-105f, 0.0f, 0x1.cc712ap-42f,
     0x1.7b2ec6p-17f, 0x1.d7994ep-113f, 0x1.19a5a6p-101f, 0.0f, 0.0f, 0x1.3b3a96p-53f,
     0.0f, 0x1.0bf612p-108f, 0x1.55834ep-17f, 0x1.fc2d1ep-14f, 0x1.17d94ep-93f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.102ee4p-33f, 0x1.907adcp-123f, 0.0f, 0.0f,
     0x1.b45406p-96f, 0.0f, 0.0f, 0.0f, 0x1.4371dp-65f, 0.0f, 0.0f, 0.0f,
     0x1.f7cf8ep-72f, 0x1.3fac16p-58f, 0.0f, 0.0f, 0x1.56e372p-24f, 0x1.bebbd6p-80f,
     0x1.372226p-54f, 0x1.333f9ep-15f, 0x1.296fc8p-28f, 0.0f, 0x1.3335b2p-78f,
     0x1.6d3bcap-51f, 0.0f, 0x1.c76802p-96f, 0x1.3d52b6p-8f, 0.0f, 0x1.675c3cp-124f,
     0x1.a7b13p-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f9642p-63f, 0x1.378f42p-28f,
     0x1.ab184ap-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4b44e2p-4f, 0x1.88dbcap-41f,
     0x1.aef47p-71f, 0x1.1d901p-24f, 0x1.eb1f4cp-87f, 0x1.f8ae5ep-115f, 0.0f,
     0x1.8a242ep-94f, 0.0f, 0.0f, 0x1.9a4af2p-14f, 0.0f, 0x1.22e77ap-71f,
     0x1.965074p-42f, 0.0f, 0.0f, 0.0f, 0x1.d00396p-84f, 0x1.71c8a8p-14f,
     0x1.a7404ap-33f, 0x1.fe6e2p-14f, 0.0f, 0.0f, 0.0f, 0x1.c5d4d2p-40f,
     0x1.4d2198p-47f, 0.0f, 0x1.3bb136p-6f, 0x1.75a842p-25f, 0x1.31c8fcp-30f, 0.0f,
     0x1.f8d79ap-99f, 0.0f, 0x1.be65f6p-23f, 0.0f, 0.0f, 0x1.638b28p-88f, 0.0f, 0.0f,
     0x1.87aeep-43f, 0x1.751346p-50f, 0x1.f8576ap-113f, 0x1.6ea104p-81f,
     0x1.1ada44p-117f, 0x1.a7eadp-9f, 0x1.9fdd6cp-21f, 0x1.c26f06p-113f, 0.0f, 0.0f,
     0x1.d7e68ep-78f, 0.0f, 0.0f, 0x1.57e34p-30f, 0x1.46a2a8p-119f, 0.0f, 0.0f,
     0x1.d6528p-83f, 0.0f, 0x1.95f6b4p-94f, 0x1.d3f2aap-5f, 0x1.9dcd8ep-96f,
     0x1.1067cp-62f, 0x1.7b822ep-86f, 0x1.6026fap-53f, 0x1.aa1364p-83f, 0.0f,
     0x1.2b829p-77f, 0x1.ed9572p-57f, 0.0f, 0.0f, 0.0f, 0x1.9198bep-81f,
     0x1.e34da6p-33f, 0x1.b50beap-103f, 0.0f, 0.0f, 0x1.a8cb1ep-106f, 0x1.a35c56p-13f,
     0.0f, 0x1.7921f2p-20f, 0.0f, 0x1.ddd468p-111f, 0x1.40d02cp-45f, 0.0f,
     0x1.474be6p-15f, 0.0f, 0x1.86ae9ep-50f, 0x1.41b0aap-78f, 0.0f, 0.0f,
     0x1.1df09cp-17f, 0.0f, 0x1.394db4p-60f, 0.0f, 0.0f, 0.0f, 0x1.206c2cp-18f,
     0x1.6b68d4p-27f, 0.0f, 0x1.2a1888p-90f, 0.0f, 0x1.d3de14p-29f, 0.0f,
     0x1.5b8014p-12f, 0.0f, 0x1.619a7ep-14f, 0x1.059b84p-117f, 0x1.640872p-120f,
     0x1.f37832p-106f, 0.0f, 0.0f, 0x1.b71584p-22f, 0x1.af021ep-94f, 0x1.7e2a0cp-79f,
     0.0f, 0.0f, 0x1.0ac56ap-86f, 0x1.b09314p-120f, 0.0f, 0x1.3d949p-103f,
     0x1.c03b76p-55f, 0.0f, 0.0f, 0x1.351802p-28f, 0x1.2dea76p-14f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.c3a71ep-97f, 0.0f, 0x1.8d5184p-18f, 0x1.29e486p-33f, 0.0f,
     0x1.ecd74cp-59f, 0x1.0f3e2ap-59f, 0x1.29d5cp-75f, 0x1.a325f6p-7f,
     0x1.ab1274p-111f, 0.0f, 0x1.36a164p-81f, 0x1.0dafbcp-92f, 0.0f, 0.0f,
     0x1.7601e8p-73f, 0.0f, 0.0f, 0x1.0bdc74p-44f, 0.0f, 0.0f, 0x1.e7047p-70f,
     0x1.c3b1a2p-50f, 0x1.b1fa4p-15f, 0.0f, 0.0f, 0x1.e1e9b6p-40f, 0x1.0deaaap-37f,
     0x1.e38f92p-44f, 0x1.f4319ep-66f, 0x1.5b88e2p-27f, 0.0f, 0.0f, 0x1.fea8aep-118f,
     0x1.8d6dc8p-37f, 0.0f, 0x1.d2ddccp-9f, 0x1.165454p-85f, 0x1.a44e06p-22f,
     0x1.04534p-103f, 0x1.20eae8p-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c65d84p-20f,
     0x1.4a971ap-51f, 0x1.99d0cep-108f, 0.0f, 0x1.fef87p-122f, 0x1.2db434p-29f, 0.0f,
     0x1.71eef8p-74f, 0.0f, 0.0f, 0.0f, 0x1.48f364p-18f, 0.0f, 0.0f, 0.0f,
     0x1.00170cp-29f, 0x1.9d1962p-121f, 0x1.bb5006p-86f, 0.0f, 0.0f, 0.0f,
     0x1.f94218p-11f, 0.0f, 0.0f, 0x1.c910c8p-66f, 0x1.af8954p-44f, 0x1.591d6p-7f,
     0x1.e60b98p-45f, 0.0f, 0x1.09d2bcp-22f, 0x1.21acd8p-34f, 0.0f, 0.0f,
     0x1.745028p-67f, 0.0f, 0.0f, 0.0f, 0x1.cdd9ccp-15f, 0x1.6c66b6p-39f,
     0x1.25e466p-83f, 0.0f, 0.0f, 0.0f, 0x1.fa639ep-7f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.771c1p-108f, 0.0f, 0x1.1b0db8p-13f, 0.0f, 0.0f, 0x1.aaf10cp-43f, 0.0f, 0.0f,
     0x1.47b1a2p-102f, 0.0f, 0x1.0e47c2p-88f, 0x1.a3b81ep-29f, 0x1.d6f882p-90f, 0.0f,
     0.0f, 0x1.1c7774p-116f, 0.0f, 0x1.71b762p-97f, 0x1.9dbf78p-114f, 0.0f,
     0x1.4d44b4p-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b49e92p-88f, 0x1.70b25cp-28f,
     0.0f, 0x1.79195ap-121f, 0.0f, 0x1.446f26p-66f, 0x1.96e8bp-62f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.19907ep-10f, 0.0f, 0x1.d1a328p-39f, 0x1.a354cp-46f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5fb28cp-25f, 0.0f, 0.0f, 0x1.e1e864p-40f,
     0x1.bd5772p-66f, 0.0f, 0.0f, 0x1.8e7d98p-91f, 0.0f, 0x1.d2b5e6p-27f,
     0x1.f1939p-27f, 0.0f, 0.0f, 0.0f, 0x1.99b09ap-109f, 0.0f, 0.0f, 0x1p0f, 0.0f,
     0x1.e8807ap-40f, 0x1.5eb39ap-113f, 0x1.792558p-78f, 0x1.3d134ep-10f, 0.0f, 0.0f,
     0.0f, 0x1.81ec9p-33f, 0x1.79996ap-38f, 0x1.84349p-74f, 0x1.751af6p-5f, 0.0f,
     0.0f, 0.0f, 0x1.d1cedep-125f, 0x1.8c6df8p-102f, 0.0f, 0.0f, 0x1.2b71e2p-81f,
     0.0f, 0.0f, 0.0f, 0x1.38f6f8p-69f, 0.0f, 0x1.0164f8p-106f, 0x1.5c6028p-16f, 0.0f,
     0.0f, 0x1.24107ep-3f, 0x1.39b8b6p-97f, 0.0f, 0.0f, 0x1.77da82p-46f, 0.0f,
     0x1.c44902p-114f, 0.0f, 0x1.adb4f4p-86f, 0.0f, 0x1.cdbac2p-16f, 0x1.9516bep-69f,
     0x1.52cc34p-94f, 0.0f, 0x1.e93d6cp-9f, 0x1.93c078p-48f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.bc492cp-121f, 0x1.5ee52ep-10f, 0.0f, 0x1.9f5f66p-15f, 0.0f,
     0.0f, 0x1.875b94p-116f, 0.0f, 0.0f, 0x1.b53ab6p-85f, 0.0f, 0x1.89566ap-52f, 0.0f,
     0x1.7818cp-126f, 0.0f, 0x1.45b25ep-88f, 0.0f, 0x1.6f548p-76f, 0x1.cda244p-102f,
     0.0f, 0.0f, 0x1.8dd68ap-112f, 0x1.89931p-107f, 0x1p0f, 0x1.9ecda4p-39f, 0.0f,
     0x1.63f5ap-85f, 0.0f, 0x1.cda648p-71f, 0x1.d2d056p-11f, 0x1.05e4f6p-114f, 0.0f,
     0.0f, 0x1.b8bef4p-10f, 0.0f, 0.0f, 0x1.8354c4p-97f, 0.0f, 0.0f, 0.0f,
     0x1.281e86p-70f, 0x1.2d093p-28f, 0.0f, 0x1.9c233ep-20f, 0x1.d1bdacp-38f, 0.0f,
     0.0f, 0.0f, 0x1.35003cp-124f, 0.0f, 0x1.8dce54p-83f, 0x1.0bcd44p-126f,
     0x1.70f256p-108f, 0.0f, 0.0f, 0x1.2f98dp-43f, 0x1.3b5612p-28f, 0.0f, 0.0f, 0.0f,
     0x1.dd2bb4p-113f, 0.0f, 0.0f, 0x1.9b54ep-44f, 0x1.14cb2cp-21f, 0x1.6316c6p-28f,
     0x1.802e6cp-112f, 0x1.d653aap-32f, 0.0f, 0.0f, 0x1p0f, 0x1.e9c64ap-98f,
     0x1.53b184p-97f, 0.0f, 0x1.69978p-110f, 0.0f, 0x1.4f7a46p-47f, 0x1.7d2c5ep-104f,
     0x1.bf5f46p-107f, 0.0f, 0x1.e74424p-5f, 0x1.20b78p-79f, 0.0f, 0x1.eec2cp-90f,
     0x1.5b9ca4p-27f, 0.0f, 0.0f, 0.0f, 0x1.7fed3p-37f, 0x1.1d15aep-22f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e10088p-67f, 0.0f, 0x1.6018dp-123f, 0.0f, 0.0f,
     0x1.90ddfap-2f, 0.0f, 0.0f, 0.0f, 0x1.0b732ep-66f, 0x1.f1a898p-84f, 0.0f,
     0x1.4816f6p-111f, 0.0f, 0.0f, 0.0f, 0x1.518cfap-71f, 0x1.8a239p-66f, 0.0f,
     0x1.32f846p-68f, 0x1.f1962ep-85f, 0.0f, 0.0f, 0x1.c16a08p-56f, 0.0f, 0.0f,
     0x1.b34a2ap-100f, 0.0f, 0x1.39d9dap-115f, 0x1.9c9f26p-78f, 0.0f, 0.0f,
     0x1.c80f44p-3f, 0.0f, 0x1.1e582p-51f, 0x1.c060c4p-56f, 0x1.3641aep-65f, 0.0f,
     0x1.a7055ap-102f, 0.0f, 0x1.27b682p-96f, 0x1.79be7ap-63f, 0x1.e85ba2p-124f,
     0x1.9df0cap-86f, 0x1.adfbacp-72f, 0.0f, 0.0f, 0.0f, 0x1.98eefcp-68f,
     0x1.bd61d8p-84f, 0.0f, 0x1.8a2602p-55f, 0x1.4758a2p-101f, 0x1.380166p-71f, 0.0f,
     0x1.bdd15ep-56f, 0x1.bc040cp-84f, 0x1.ba9a9ep-111f, 0x1.92e6bep-66f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.0eef86p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d8b328p-33f, 0.0f,
     0x1.f58d18p-21f, 0x1.64802cp-120f, 0.0f, 0x1.c7dad8p-109f, 0.0f, 0.0f,
     0x1.316a54p-88f, 0x1.9e2586p-122f, 0.0f, 0x1.36367ep-108f, 0.0f,
     0x1.4d6dd4p-125f, 0.0f, 0x1.71d58p-50f, 0x1.21a99cp-113f, 0x1.2de582p-1f, 0.0f,
     0.0f, 0x1.51455ap-88f, 0x1.267ab6p-49f, 0x1.4e822p-52f, 0x1.7ccd42p-65f,
     0x1.389638p-34f, 0x1.b1cbd8p-121f, 0x1.1ba072p-95f, 0x1.b4398ap-6f, 0.0f, 0.0f,
     0.0f, 0x1.7abcecp-117f, 0x1.a8e4b2p-99f, 0x1.ebf2eep-38f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3b69cep-65f, 0.0f, 0x1p0f, 0.0f, 0x1.50318p-118f, 0x1.5854b8p-45f,
     0x1.817e18p-70f, 0.0f, 0x1.1b4a66p-92f, 0x1.782b66p-32f, 0.0f, 0x1.6557a4p-49f,
     0.0f, 0x1.442696p-22f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.498dbep-122f, 0.0f,
     0x1.e0bb52p-73f, 0.0f, 0x1.092b9cp-102f, 0x1.ad0c3p-96f, 0x1.e9a034p-4f,
     0x1.6d8aaep-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6ef30ap-65f, 0x1.26ed66p-75f,
     0x1.19213ep-89f, 0.0f, 0x1.7087fep-116f, 0.0f, 0.0f, 0x1.86f908p-25f,
     0x1.15020ap-38f, 0.0f, 0.0f, 0x1.333c9p-104f, 0x1p0f, 0x1.aa799cp-4f, 0.0f,
     0x1.46c118p-79f, 0.0f, 0x1.0d68c4p-26f, 0x1.527916p-46f, 0x1.afc4p-16f, 0.0f,
     0x1.1d311cp-116f, 0.0f, 0.0f, 0x1.0469c6p-23f, 0x1.be93ecp-66f, 0x1.25b556p-25f,
     0x1.c6163p-111f, 0x1.3125c6p-15f, 0.0f, 0.0f, 0x1.e4f88ap-35f, 0x1.a7cf4ep-7f,
     0.0f, 0x1.2b1b16p-114f, 0x1.6f59e6p-23f, 0.0f, 0x1.46be6p-54f, 0x1.882b88p-16f,
     0x1.cbd24ep-123f, 0.0f, 0x1.cd88bp-112f, 0x1.84dfa8p-54f, 0x1.e3cd1p-21f,
     0x1.6a90ccp-29f, 0.0f, 0.0f, 0.0f, 0x1.961fcep-117f, 0.0f, 0x1.7be1aap-100f,
     0.0f, 0.0f, 0.0f, 0x1.444c78p-89f, 0.0f, 0x1.c618cep-33f, 0x1.30c9a4p-42f,
     0x1.f9b1f8p-74f, 0.0f, 0x1.67a898p-44f, 0x1.2aa86ep-86f, 0x1.57bfe6p-86f,
     0x1.eb809cp-28f, 0x1.b578fep-111f, 0.0f, 0.0f, 0x1.254032p-73f, 0x1.df703p-79f,
     0.0f, 0.0f, 0x1.79914cp-110f, 0x1.45e938p-95f, 0.0f, 0x1.f0742ap-109f,
     0x1.93199ap-105f, 0x1.8f08e4p-125f, 0x1.05ca16p-123f, 0x1.1d8634p-9f,
     0x1.95804ap-60f, 0x1.4ccedep-77f, 0x1.fd3206p-99f, 0x1.f8241ep-105f,
     0x1.324dcep-33f, 0.0f, 0.0f, 0x1.a347bap-112f, 0.0f, 0x1.44442p-18f, 0.0f, 0.0f,
     0.0f, 0x1.7f7198p-72f, 0x1.71c3bp-42f, 0.0f, 0x1.d3a8e2p-60f, 0.0f, 0.0f,
     0x1.8ed826p-11f, 0x1.6e0996p-24f, 0x1.fd004ep-20f, 0.0f, 0.0f, 0.0f,
     0x1.dd2084p-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fd8aeap-109f,
     0x1p0f, 0.0f, 0x1.1f97eep-108f, 0.0f, 0x1.dc1aap-104f, 0.0f, 0.0f,
     0x1.fa0356p-86f, 0x1.3f7036p-21f, 0x1.c681a8p-78f, 0.0f, 0.0f, 0.0f,
     0x1.7633dcp-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6e40ecp-74f,
     0x1.956924p-27f, 0x1.67d2dep-78f, 0.0f, 0x1.be4f2ap-87f, 0.0f, 0.0f,
     0x1.bdb9acp-52f, 0.0f, 0x1.8fd274p-83f, 0x1.228aa6p-1f, 0.0f, 0x1.39a25ep-2f,
     0x1.a7107cp-115f, 0x1.fb09acp-74f, 0.0f, 0x1.a5c646p-64f, 0x1.295bfcp-9f, 0.0f,
     0.0f, 0x1.52f2c4p-47f, 0x1.2245dap-97f, 0x1.a7e8c6p-92f, 0x1.9b9166p-52f, 0.0f,
     0x1.e70286p-72f, 0x1.26a9eap-56f, 0.0f, 0.0f, 0x1.14c1dep-63f, 0x1.172e1cp-4f,
     0x1.138032p-68f, 0.0f, 0x1.fc9408p-112f, 0.0f, 0.0f, 0x1.227fe6p-64f,
     0x1.01d6c2p-59f
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
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = external_bench_wrapper_cst;
    tmp = __cos_counter_num(0);
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
            tmp1 = Sleef_finz_exp2f4_u35kvx(tmp0);
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
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_finz_exp2f4_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_exp2f4_u35kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
