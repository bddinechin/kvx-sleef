/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_expm1f1_u10purecfma.c --function \
 *     Sleef_expm1f1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0x1.0a0362p-41f, 0x1.5a29dcp-101f, 0.0f, 0x1.1bf518p-82f, 0.0f, 0.0f,
     0x1.e574dcp-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5d638ep-99f, 0x1.9f9bap-95f, 0.0f,
     0x1.90e074p-18f, 0x1.daa89cp-122f, 0.0f, 0.0f, 0.0f, 0x1.0a86eap-65f, 0.0f, 0.0f,
     0.0f, 0x1.04fc6ap-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b5041cp-111f, 0.0f, 0.0f,
     0.0f, 0x1.c8a57p-12f, 0.0f, 0.0f, 0x1.4456d4p-50f, 0x1.9ad966p-46f,
     0x1.8817e8p-106f, 0.0f, 0x1.df654ap-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.00885cp-88f,
     0.0f, 0.0f, 0x1.335eacp-5f, 0.0f, 0x1.449bp-101f, 0x1.6ec904p-86f, 0.0f,
     0x1.c7c2ecp-105f, 0.0f, 0x1.98e05ap-112f, 0.0f, 0x1.0cd49ep-51f, 0.0f,
     0x1.cfea68p-48f, 0.0f, 0.0f, 0x1.270322p-77f, 0.0f, 0x1.ab1c0ap-11f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d8d6ep-49f, 0x1.bbe20ap-54f, 0.0f, 0.0f, 0x1.87166ep-92f,
     0x1.e16502p-31f, 0x1.76015ap-97f, 0x1.3c0e68p-97f, 0.0f, 0.0f, 0x1.c5ae98p-7f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d3e7eap-47f, 0.0f, 0x1.b5e6bap-60f,
     0x1.e452b4p-78f, 0x1.9f17cp-87f, 0x1.a486e4p-5f, 0.0f, 0.0f, 0x1.28103p-29f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a30312p-4f, 0x1.10ff3ep-123f, 0x1.7678d4p-94f,
     0.0f, 0x1.6ac51ep-99f, 0x1.c1642ap-94f, 0x1.ae10d2p-116f, 0.0f, 0x1.eaf80ap-16f,
     0x1.698132p-57f, 0.0f, 0x1.43ef86p-50f, 0.0f, 0x1.1c7302p-123f, 0x1.dfc898p-64f,
     0x1.5d242ep-123f, 0x1.a56706p-35f, 0x1.0ded8ep-62f, 0x1.d5b43ap-62f,
     0x1.a2458ep-34f, 0x1.66aca6p-125f, 0.0f, 0x1.7e2c46p-31f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ae1b4ap-58f, 0x1.3419e4p-109f, 0x1.7c6078p-94f, 0.0f, 0.0f, 0x1.765ca4p-85f,
     0x1.7e5b6ap-59f, 0.0f, 0.0f, 0x1.c6d626p-62f, 0.0f, 0x1.d9d016p-41f, 0.0f, 0.0f,
     0x1.3323b4p-21f, 0x1.0664dep-37f, 0.0f, 0.0f, 0x1.c59942p-78f, 0.0f,
     0x1.5a3bcp-90f, 0.0f, 0x1.fedfbap-35f, 0x1.a54976p-121f, 0x1.033828p-56f,
     0x1.89b4a6p-29f, 0.0f, 0x1.06d734p-46f, 0.0f, 0x1.f93084p-87f, 0.0f,
     0x1.21e38ep-102f, 0.0f, 0x1.979016p-64f, 0.0f, 0.0f, 0x1.f1299p-123f,
     0x1.11e122p-84f, 0x1.46d2c8p-28f, 0x1.13dbd6p-99f, 0.0f, 0x1.27ca62p-76f, 0.0f,
     0x1.e0f8c6p-79f, 0x1.8e4cf2p-64f, 0x1.0f861ep-5f, 0x1.9f4fa8p-30f, 0.0f,
     0x1.cbb464p-8f, 0.0f, 0.0f, 0.0f, 0x1.9c7d0ap-51f, 0x1.536f18p-118f, 0.0f,
     0x1.41391ep-109f, 0x1.091dd2p-21f, 0.0f, 0.0f, 0.0f, 0x1.9651p-60f,
     0x1.f5029cp-109f, 0x1.0e9b6p-20f, 0.0f, 0.0f, 0x1.4004d2p-87f, 0.0f,
     0x1.e97818p-15f, 0x1.cfe898p-15f, 0.0f, 0x1.e6f014p-34f, 0x1.d740cap-59f, 0.0f,
     0x1.c8e12p-66f, 0.0f, 0.0f, 0x1.38007p-44f, 0x1.8270cap-61f, 0x1.316adap-73f,
     0x1.3af21ep-13f, 0.0f, 0.0f, 0.0f, 0x1.e0186ap-80f, 0x1.897494p-31f,
     0x1.ecaeep-80f, 0.0f, 0x1.5cfbecp-59f, 0.0f, 0x1.caa108p-29f, 0.0f, 0.0f,
     0x1.cb2b2cp-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7240d6p-117f, 0x1.2e0536p-39f,
     0.0f, 0x1.cc7d9cp-5f, 0x1.e482eep-33f, 0x1.55d752p-86f, 0.0f, 0.0f, 0.0f,
     0x1.2cb93ap-82f, 0.0f, 0.0f, 0.0f, 0x1.9be812p-62f, 0.0f, 0.0f, 0x1.4b93cep-118f,
     0.0f, 0x1.28d65ep-3f, 0x1.c66fd4p-113f, 0x1.374144p-79f, 0x1.716a3ap-117f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c319ep-34f, 0x1.ffbbfep-71f, 0.0f,
     0x1.0710c6p-35f, 0x1.92788ap-79f, 0.0f, 0x1.0805eap-99f, 0.0f, 0x1.ea63fap-52f,
     0x1.def534p-76f, 0x1.df0cfap-119f, 0x1.a6352ep-27f, 0x1p0f, 0.0f,
     0x1.94a44ep-48f, 0x1.b876d2p-112f, 0.0f, 0x1.e77b3cp-88f, 0x1.7d5066p-66f,
     0x1.dcb228p-12f, 0x1.a35d42p-49f, 0.0f, 0.0f, 0x1.8e8398p-9f, 0.0f, 0.0f,
     0x1.73ea78p-111f, 0.0f, 0.0f, 0x1.b5e93ap-60f, 0.0f, 0x1.a8ebb4p-9f,
     0x1.779b28p-42f, 0.0f, 0.0f, 0.0f, 0x1.64c5bep-109f, 0x1.06e4b6p-83f, 0.0f, 0.0f,
     0x1.0233fp-50f, 0.0f, 0x1.2e4c12p-91f, 0x1.212bd2p-116f, 0x1.28589p-41f, 0.0f,
     0.0f, 0x1.e3719cp-41f, 0.0f, 0x1.b99062p-34f, 0.0f, 0.0f, 0.0f, 0x1.ce3ddep-11f,
     0x1.03660cp-87f, 0.0f, 0.0f, 0.0f, 0x1.394196p-116f, 0.0f, 0.0f, 0x1.2f6fd6p-83f,
     0x1.d6211cp-71f, 0x1.50d058p-22f, 0.0f, 0x1.81ad72p-65f, 0x1.429698p-66f, 0.0f,
     0x1.90009ep-91f, 0.0f, 0.0f, 0x1.550b9p-21f, 0x1.bc0d44p-33f, 0x1.887764p-115f,
     0x1.958d7cp-43f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.228d2p-11f, 0.0f,
     0.0f, 0x1.f92fd4p-10f, 0x1.7cc344p-120f, 0x1.824962p-13f, 0x1.9bc62ep-40f,
     0x1.1532e4p-124f, 0.0f, 0x1.2bac0ep-35f, 0.0f, 0x1.f82beap-55f, 0.0f, 0.0f, 0.0f,
     0x1.088504p-107f, 0.0f, 0.0f, 0x1.f0838p-126f, 0x1.a12a18p-5f, 0x1.200408p-97f,
     0x1.71be8ap-61f, 0.0f, 0x1.8cd3fap-76f, 0x1.23f7fp-20f, 0.0f, 0x1.4be0a6p-124f,
     0x1.24000ap-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f94148p-125f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ef8054p-56f, 0.0f, 0.0f, 0x1.e6a558p-59f, 0.0f, 0x1.fd608ep-79f,
     0x1.af909cp-22f, 0x1.9774fp-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a4d15ap-41f,
     0.0f, 0.0f, 0x1.7cdf5p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b73268p-74f, 0.0f, 0.0f,
     0x1.dbe424p-104f, 0.0f, 0x1.08113p-85f, 0.0f, 0.0f, 0x1.2fd7e6p-31f,
     0x1.acfad4p-110f, 0.0f, 0x1.a2286ap-90f, 0.0f, 0x1.ac1a1ep-7f, 0.0f,
     0x1.6548f8p-23f, 0x1.8032fap-14f, 0.0f, 0x1.00e144p-6f, 0.0f, 0x1.3aa5b6p-92f,
     0x1.53cf44p-117f, 0.0f, 0x1.4403bcp-87f, 0x1.869fdap-111f, 0.0f, 0x1.41532p-86f,
     0x1.3cdb56p-28f, 0x1.c2e586p-24f, 0x1.2a9aep-116f, 0x1.928a94p-46f, 0.0f, 0.0f,
     0x1.55cc04p-77f, 0.0f, 0.0f, 0x1.cc4b9cp-45f, 0.0f, 0x1.077264p-67f,
     0x1.44891cp-86f, 0.0f, 0.0f, 0x1.500206p-44f, 0x1.ff9ac2p-107f, 0.0f,
     0x1.07d9a4p-27f, 0x1.d19a06p-23f, 0x1.f5f9b2p-12f, 0x1.dc31a6p-75f,
     0x1.9dbb56p-3f, 0.0f, 0.0f, 0.0f, 0x1.996b82p-116f, 0.0f, 0.0f, 0x1.420b26p-76f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.afb548p-9f, 0x1.aee682p-39f, 0.0f,
     0.0f, 0.0f, 0x1.965ebp-60f, 0x1.002c02p-74f, 0x1.97d2eap-73f, 0x1.853ae6p-111f,
     0.0f, 0.0f, 0x1.00908p-40f, 0.0f, 0.0f, 0x1.3cc27ep-109f, 0x1.d17da4p-25f,
     0x1.464a04p-117f, 0x1.1e7d4p-87f, 0.0f, 0x1.e90c44p-3f, 0x1.c7a706p-91f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.0a3338p-70f, 0x1.7e1e6ap-2f, 0.0f, 0x1.b57b9ep-108f,
     0.0f, 0x1.aa6642p-69f, 0x1.fdd928p-109f, 0x1.a66c1cp-36f, 0x1.5b27ap-100f,
     0x1.50aef4p-54f, 0x1.ee43f2p-102f, 0x1.780d38p-104f, 0.0f, 0x1.154be2p-125f,
     0x1.6c56p-108f, 0x1.d1f1eep-96f, 0.0f, 0.0f, 0x1.535d4ap-3f, 0.0f,
     0x1.647118p-29f, 0x1.f188cep-34f, 0.0f, 0.0f, 0x1.1b0306p-121f, 0x1.967d3ap-108f,
     0x1.4d610cp-114f, 0.0f, 0x1.60f83p-108f, 0x1.7e8aep-117f, 0x1.c95d64p-73f, 0.0f,
     0.0f, 0.0f, 0x1.f1e4f4p-110f, 0.0f, 0.0f, 0.0f, 0x1.7673f2p-31f,
     0x1.f72cd6p-105f, 0.0f, 0x1.4df2ccp-86f, 0.0f, 0.0f, 0x1.679e84p-120f,
     0x1.c7ae8cp-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.934bep-90f, 0.0f, 0.0f,
     0x1.0c5f5cp-42f, 0x1.e0d8bap-51f, 0x1.1225fep-78f, 0.0f, 0x1.df0044p-74f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.705b9cp-65f, 0.0f, 0.0f, 0x1.d00376p-1f, 0x1.58bebap-120f,
     0x1.591588p-64f, 0x1.fac9bcp-45f, 0.0f, 0.0f, 0x1.7e6d16p-86f, 0.0f, 0.0f,
     0x1.6ae066p-20f, 0x1.deceb6p-25f, 0.0f, 0.0f, 0x1.b82766p-92f, 0x1.d3b84ep-17f,
     0.0f, 0.0f, 0x1.8b8f98p-57f, 0.0f, 0.0f, 0x1.9832bcp-106f, 0.0f, 0x1.6e2be2p-99f,
     0.0f, 0.0f, 0x1.cebc1ep-52f, 0x1.5b378ap-116f, 0.0f, 0.0f, 0x1.3fbd0ep-43f, 0.0f,
     0x1.b1d5eep-38f, 0.0f, 0.0f, 0x1.c9cf4p-3f, 0x1.1205cp-105f, 0.0f,
     0x1.24d452p-61f, 0x1.4d4deap-115f, 0.0f, 0x1.d9f088p-108f, 0x1.f1cbdep-95f, 0.0f,
     0x1.4855a6p-119f, 0.0f, 0x1.c591cep-93f, 0.0f, 0x1.90fec8p-92f, 0x1.2f8292p-61f,
     0x1.069f48p-109f, 0x1.c8312p-25f, 0x1.5b0edep-8f, 0x1.527e6ep-8f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.91b45p-67f, 0.0f, 0.0f, 0.0f, 0x1.9f5cdp-46f,
     0x1.719e18p-19f, 0.0f, 0.0f, 0x1.e0094p-72f, 0.0f, 0.0f, 0.0f, 0x1.ad66c4p-110f,
     0x1.f2766cp-20f, 0x1.18027cp-43f, 0x1.0d9814p-98f, 0.0f, 0.0f, 0x1.e41a82p-44f,
     0x1.c06d2ap-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.013a08p-5f,
     0x1.e58d2cp-88f, 0x1.6144f6p-3f, 0x1.c2e2c6p-18f, 0.0f, 0.0f, 0x1.6fc9d4p-60f,
     0.0f, 0x1.9d00c6p-54f, 0.0f, 0x1.0f05c8p-73f, 0x1.6cd4f8p-116f, 0x1.702b4ep-46f,
     0x1.0de85cp-96f, 0.0f, 0x1.1fac44p-46f, 0.0f, 0.0f, 0.0f, 0x1.0d6c68p-42f,
     0x1.f730ap-126f, 0.0f, 0.0f, 0x1.4dc15p-52f, 0.0f, 0x1.2cc6p-4f, 0x1.0b28fep-84f,
     0x1.452d2ap-31f, 0x1.96c4fp-122f, 0.0f, 0.0f, 0x1.1633a2p-67f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e914ccp-66f, 0.0f, 0.0f, 0x1.220a38p-126f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.0b9672p-108f, 0.0f, 0.0f, 0x1.acabe8p-51f, 0.0f, 0.0f, 0x1.28c456p-52f,
     0.0f, 0.0f, 0x1.fdc072p-57f, 0x1.b43f0ep-73f, 0.0f, 0x1.156f04p-70f, 0.0f, 0.0f,
     0x1.be94ccp-92f, 0x1.d498f8p-16f, 0x1.6c8c6ep-42f, 0x1.b58276p-46f, 0.0f,
     0x1.aa264ap-7f, 0.0f, 0.0f, 0x1.bdaeap-74f, 0.0f, 0x1.d1fff2p-96f,
     0x1.5cf072p-78f, 0x1.4f2bccp-53f, 0x1.abd038p-32f, 0.0f, 0.0f, 0x1.9cfb6cp-126f,
     0.0f, 0x1.9e285ap-69f, 0.0f, 0x1.beacc4p-64f, 0.0f, 0x1.47c27cp-17f,
     0x1.c81404p-42f, 0x1.3a6a92p-84f, 0.0f, 0x1.b79fb6p-89f, 0.0f, 0x1.2caf04p-124f,
     0.0f, 0.0f, 0x1.9f2b32p-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4f4b36p-26f, 0x1.2a474ap-22f, 0.0f, 0x1.86c94ap-89f, 0.0f, 0x1.7eae38p-51f,
     0x1.36d40cp-95f, 0x1.b32b4ap-8f, 0.0f, 0x1.3ca07p-119f, 0x1.27e03p-61f,
     0x1.97213ap-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d9fd32p-6f, 0.0f, 0x1.a7d0b2p-114f,
     0x1.70596cp-35f, 0.0f, 0.0f, 0x1.8ff06cp-99f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.998258p-46f, 0x1.6b12c8p-36f, 0.0f, 0.0f, 0x1.46395cp-58f, 0.0f,
     0x1.66a64ap-52f, 0.0f, 0.0f, 0x1.71135ap-117f, 0.0f, 0.0f, 0.0f, 0x1.13151p-31f,
     0.0f, 0x1.ea7134p-96f, 0.0f, 0x1.130b5p-50f, 0x1.2d2c32p-118f, 0x1.434p-80f,
     0.0f, 0.0f, 0x1.564f08p-43f, 0x1.771758p-67f, 0x1.fd95fp-125f, 0x1.58341cp-45f,
     0x1.d02816p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.49a76ep-28f, 0x1.fd8cccp-5f, 0.0f,
     0.0f, 0x1.514afap-99f, 0x1.858522p-68f, 0x1.62e0ccp-76f, 0.0f, 0.0f, 0.0f,
     0x1.f2633ep-75f, 0x1.d7063ep-7f, 0.0f, 0x1.2b8decp-12f, 0x1.18589cp-81f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.bb8b28p-76f, 0.0f, 0x1.08c92ep-14f, 0x1.5c6a68p-83f,
     0x1.3d812ap-113f, 0x1.0e9224p-103f, 0x1.057fbp-94f, 0x1.028136p-120f,
     0x1.1ae25ap-111f, 0x1.2b6df4p-7f, 0x1.e31cfap-92f, 0x1.424104p-8f,
     0x1.be609p-96f, 0.0f, 0.0f, 0x1.f267c6p-51f, 0.0f, 0x1.8037eap-89f, 0.0f,
     0x1.bd5cbep-28f, 0x1.5e52dp-58f, 0.0f, 0x1.172bc6p-45f, 0x1.bf59b8p-104f, 0.0f,
     0x1.26d956p-67f, 0x1.2def7cp-85f, 0.0f, 0x1.f5ebc6p-125f, 0x1.aed3b4p-62f,
     0x1.ee29e4p-26f, 0.0f, 0.0f, 0x1.073a36p-45f, 0x1.f1124ep-44f, 0x1.06421ep-47f,
     0.0f, 0x1.f8d74ap-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.310974p-119f,
     0x1.650bd4p-118f, 0.0f, 0.0f, 0.0f, 0x1.73ee26p-55f, 0.0f, 0.0f, 0x1.d97a84p-3f,
     0.0f, 0x1.66dd9p-75f, 0x1.c39ed2p-5f, 0x1.bfb56p-96f, 0.0f, 0x1.11ac74p-95f,
     0x1.031fd4p-21f, 0.0f, 0x1.b77ac6p-41f, 0x1.c9bd16p-122f, 0.0f, 0x1.a812b6p-38f,
     0x1.c4830cp-100f, 0.0f, 0x1.ce8d02p-69f, 0x1.41413p-103f, 0x1.0f4462p-34f, 0.0f,
     0x1.881ebp-84f, 0x1.fed97p-41f, 0.0f, 0x1.70932ap-49f, 0x1.b40118p-37f,
     0x1.be985ap-80f, 0x1.6461b6p-48f, 0x1.03fec2p-90f, 0.0f, 0.0f, 0x1.4cf1ccp-31f,
     0.0f, 0x1.cc1b8ap-67f, 0.0f, 0x1.f550c6p-25f, 0.0f, 0x1.d875bap-38f,
     0x1.3cf8b2p-2f, 0x1.700c5cp-48f, 0x1.da90e2p-56f, 0x1.7e95bap-55f,
     0x1.af302cp-19f, 0.0f, 0.0f, 0x1.0a48fep-102f, 0x1.8af2bep-43f, 0.0f,
     0x1.c5181cp-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d52108p-36f, 0.0f,
     0.0f, 0x1.fcb33p-63f, 0x1.98094ep-41f, 0x1.b0ff88p-4f, 0x1.ce55aep-121f,
     0x1.83b9ap-110f, 0.0f, 0x1.d06d9cp-4f, 0.0f, 0.0f, 0x1.7973c4p-16f,
     0x1.9dd87ap-71f, 0x1.fb7332p-68f, 0.0f, 0x1.d1a07ep-96f, 0x1.ae7feep-82f,
     0x1.b908d8p-121f, 0x1.ed5beep-116f, 0x1.c259d2p-86f, 0x1.ed0702p-123f, 0.0f,
     0x1.b6064cp-53f, 0x1.23bd22p-91f, 0.0f, 0x1.647252p-124f, 0x1.ecc33p-70f, 0.0f,
     0.0f, 0x1.111274p-90f, 0.0f, 0x1.d2a67ep-88f, 0.0f, 0.0f, 0x1.6382f8p-4f,
     0x1.9c059cp-9f, 0.0f, 0x1.9b3ccap-116f, 0x1.2180b8p-120f, 0.0f, 0x1.099a8cp-8f,
     0x1.c842d8p-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.68e5b6p-30f, 0.0f,
     0x1.5d9d7cp-118f, 0x1.c30f96p-51f, 0.0f, 0x1.26752ep-36f, 0x1.9509dp-25f, 0.0f,
     0x1.5d73fep-74f, 0x1.3def12p-81f, 0x1.eab04p-107f, 0.0f, 0.0f, 0x1.c576a8p-29f,
     0x1.ce633cp-5f, 0x1.c94b7p-82f, 0x1.98b5f6p-37f, 0x1.12088ap-73f,
     0x1.2d7fb8p-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2c408cp-27f, 0.0f,
     0x1.58991p-88f, 0x1.dc121cp-60f, 0.0f
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
            tmp1 = Sleef_expm1f1_u10purecfma(tmp0);
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
    printf("Sleef_expm1f1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_expm1f1_u10purecfma bench acc %a\n", global_bench_acc);
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
