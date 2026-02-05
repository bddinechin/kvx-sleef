/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_atan2f8_u10kvx.c --function \
 *     Sleef_finz_atan2f8_u10kvx --arity 2 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32,binary32 --vector-size 8 \
 *     --function-input-vector-size 8 --bench --no-embedded-bin --target kv3
 *
 */
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float8_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float8_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1008];
static const float external_bench_wrapper_input_table_arg0[1008]  = {
     0.0f, 0.0f, 0.0f, 0x1.18ac8ap-26f, 0x1.976d7cp-55f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.75dba4p-20f, 0.0f, 0x1.2e0bb8p-4f, 0x1.e42922p-93f, 0.0f, 0.0f,
     0x1.151122p-110f, 0x1.2f572ep-32f, 0x1.c4d1ap-104f, 0x1.55c1ccp-40f,
     0x1.0a8b52p-8f, 0.0f, 0.0f, 0x1.2f2eep-2f, 0x1.ab772cp-44f, 0x1.b581a6p-50f,
     0.0f, 0.0f, 0.0f, 0x1.a742eep-90f, 0x1.e8605cp-34f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bdeb9ap-30f, 0.0f, 0x1.b97196p-11f, 0x1.aef604p-98f, 0x1.9f3efep-70f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.2f81aep-117f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ac0e84p-47f, 0x1.b38c3p-62f, 0x1.22f1bep-57f, 0x1.e2f0b2p-22f, 0.0f, 0.0f,
     0.0f, 0x1.7fe2ccp-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5f874ap-103f,
     0x1.6ddac4p-119f, 0x1.1f1522p-88f, 0x1.8428fep-42f, 0x1.fada5ap-22f,
     0x1.6ee906p-12f, 0.0f, 0.0f, 0.0f, 0x1.dac9cap-79f, 0x1.a48614p-46f,
     0x1.868efcp-76f, 0x1.07e1cp-18f, 0x1.f8a9bp-6f, 0x1.26fee8p-83f, 0x1.9172e6p-71f,
     0x1.6f521ap-99f, 0.0f, 0x1.5ae86ap-76f, 0.0f, 0.0f, 0x1.d7868cp-64f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2f1cp-1f, 0.0f, 0x1.03d586p-17f, 0.0f, 0.0f,
     0.0f, 0x1.fdd73ep-119f, 0.0f, 0x1.3dac5p-84f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c571f2p-38f, 0x1.7f18d4p-102f, 0x1.09da92p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2c0044p-9f, 0.0f, 0x1.ae7deep-19f, 0.0f, 0x1.005f72p-19f, 0.0f, 0.0f,
     0x1.cd3f8ep-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.072a52p-42f, 0.0f,
     0.0f, 0.0f, 0x1.4b57acp-113f, 0.0f, 0.0f, 0x1.fc9738p-28f, 0x1.cac6dap-47f, 0.0f,
     0x1.14d544p-38f, 0.0f, 0.0f, 0x1.abb28ep-76f, 0x1.eebe7ep-103f, 0x1.8f442cp-25f,
     0x1.04f31cp-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.85e3f2p-32f, 0x1.c631b2p-7f, 0.0f,
     0.0f, 0x1.d98fe4p-4f, 0x1.1fd78ep-72f, 0x1.92f47ap-54f, 0.0f, 0.0f,
     0x1.532d94p-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9d6ad4p-28f,
     0x1.fe8d54p-82f, 0x1.d5bbbep-30f, 0x1.5389dep-55f, 0x1.5fb518p-63f, 0.0f,
     0x1.d63732p-28f, 0.0f, 0x1.30b626p-57f, 0x1.92362ep-106f, 0.0f, 0x1.c3827ep-123f,
     0x1.741028p-11f, 0.0f, 0.0f, 0.0f, 0x1.dc645p-49f, 0x1.9b56eep-88f,
     0x1.9e9334p-75f, 0x1.784bb4p-10f, 0x1.5d26fep-55f, 0x1.7404d2p-49f, 0.0f, 0.0f,
     0.0f, 0x1.9f1196p-104f, 0.0f, 0x1.9c752cp-32f, 0x1.98cff8p-85f, 0.0f, 0.0f, 0.0f,
     0x1.cf0362p-97f, 0.0f, 0x1.a68e32p-60f, 0x1.57eaa8p-82f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.20918p-126f, 0.0f, 0.0f, 0x1.ef278ap-123f, 0x1.4bcc6cp-62f, 0.0f, 0.0f, 0.0f,
     0x1.aa225ap-27f, 0x1.25d80ep-11f, 0.0f, 0.0f, 0x1.f3dc56p-59f, 0.0f,
     0x1.dc4b96p-77f, 0x1.99d63ep-93f, 0x1.ee8a8p-91f, 0.0f, 0.0f, 0x1.ee9d8p-80f,
     0.0f, 0.0f, 0x1.e333c6p-72f, 0x1.0f2856p-67f, 0x1.4c4c86p-57f, 0x1.4d54ccp-116f,
     0x1.7008ep-113f, 0.0f, 0x1.9d5252p-108f, 0.0f, 0x1.eec504p-50f, 0.0f,
     0x1.eb89aap-31f, 0.0f, 0x1.03cd84p-90f, 0x1.dd2d8cp-56f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b3884ep-25f, 0.0f, 0.0f, 0.0f, 0x1.6216bcp-53f, 0x1.76ede8p-124f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.13e18ep-86f, 0.0f, 0x1.3f154p-20f, 0.0f, 0x1.d56786p-64f,
     0x1.d427a2p-99f, 0.0f, 0.0f, 0x1.d23ae8p-101f, 0.0f, 0x1.2cd7bap-36f,
     0x1.fd9fa2p-110f, 0x1.dcaadp-114f, 0x1.1f2abap-108f, 0.0f, 0.0f, 0.0f,
     0x1.4b0e48p-80f, 0x1.515d36p-39f, 0.0f, 0x1.7c561ep-102f, 0x1.a7068ap-113f, 0.0f,
     0.0f, 0x1.a6e304p-12f, 0x1.86c5b6p-22f, 0x1.b00c0ap-31f, 0.0f, 0x1.a0ccf4p-27f,
     0x1.6a8ep-75f, 0x1.7ee96ep-123f, 0x1.1d5c22p-23f, 0.0f, 0x1.53e17ep-115f, 0.0f,
     0.0f, 0.0f, 0x1.24984p-26f, 0.0f, 0x1.a57da8p-112f, 0x1.0296d6p-46f,
     0x1.afba62p-114f, 0.0f, 0.0f, 0.0f, 0x1.b79c9ep-4f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6022c8p-94f, 0x1.09bc86p-23f, 0x1.864cf8p-83f, 0.0f, 0x1.84bd4ap-21f,
     0x1.2f6e3cp-92f, 0.0f, 0x1.da8d4ep-68f, 0.0f, 0x1.848b38p-105f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b700f8p-39f, 0x1.d1d45ep-2f, 0.0f, 0.0f, 0x1.2be566p-23f, 0.0f,
     0x1.6bb406p-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.78542p-53f,
     0.0f, 0.0f, 0x1.2cf29ap-99f, 0.0f, 0x1.00f326p-95f, 0x1.c035d4p-68f,
     0x1.19f07ap-108f, 0.0f, 0x1.119e14p-84f, 0x1.6cabfcp-44f, 0x1.dd4edcp-106f, 0.0f,
     0x1.adc908p-48f, 0.0f, 0x1.f71db8p-15f, 0.0f, 0x1.bda2a6p-104f, 0.0f,
     0x1.0ab46ep-121f, 0x1.801206p-93f, 0.0f, 0x1.e2eedep-65f, 0x1.f4c974p-39f,
     0x1.3dd89cp-101f, 0x1.3fd3a8p-119f, 0x1.701f3ap-125f, 0x1.3ae3d8p-3f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d59812p-44f, 0.0f, 0.0f, 0x1.8e2cdcp-121f, 0x1.e537bcp-81f,
     0x1.47d9c2p-94f, 0.0f, 0.0f, 0x1.218e34p-40f, 0.0f, 0x1.59ac7ap-110f,
     0x1.cdb582p-121f, 0x1.3ec4e8p-6f, 0.0f, 0x1.e7989p-85f, 0x1.3313b8p-5f, 0.0f,
     0.0f, 0.0f, 0x1.f31fp-105f, 0x1.640c3ap-95f, 0.0f, 0.0f, 0.0f, 0x1.59b726p-51f,
     0x1.59615ap-75f, 0.0f, 0x1.0780acp-70f, 0x1.6c5428p-22f, 0.0f, 0x1.ee234ap-88f,
     0x1.ae8c74p-35f, 0.0f, 0x1.d231p-7f, 0.0f, 0x1.1eeee4p-84f, 0x1.2340f8p-33f,
     0x1.5a2ee2p-101f, 0x1.143ed6p-114f, 0.0f, 0x1.c8b552p-47f, 0x1.5a9f7p-103f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5e15f4p-116f, 0x1.c4e664p-44f, 0.0f,
     0x1.7cc8dcp-78f, 0x1.2961ccp-124f, 0x1.c60398p-37f, 0.0f, 0x1.14cf1cp-107f,
     0x1.419d5p-41f, 0.0f, 0x1.1fc938p-21f, 0.0f, 0x1.a0d53ap-5f, 0.0f,
     0x1.f0c9f8p-98f, 0x1.9372d4p-79f, 0x1.dd81e8p-52f, 0x1.981962p-59f, 0.0f,
     0x1.538546p-85f, 0.0f, 0.0f, 0.0f, 0x1.c85a46p-68f, 0x1.7d5a6ap-89f,
     0x1.66703cp-126f, 0x1.7b9e32p-33f, 0x1.587d0ap-61f, 0x1.b1f818p-17f,
     0x1.471be4p-91f, 0.0f, 0x1.227bd6p-3f, 0x1.5de1ecp-123f, 0.0f, 0x1.de3326p-1f,
     0.0f, 0.0f, 0.0f, 0x1.7176eep-43f, 0x1.341cb8p-109f, 0x1.6a7274p-74f, 0.0f, 0.0f,
     0x1.8d2b7ep-112f, 0.0f, 0x1.4cb3ap-59f, 0x1.28a7p-118f, 0.0f, 0x1.b1d50ap-57f,
     0x1.b91abcp-22f, 0x1.8fa0fcp-100f, 0x1.12d41cp-115f, 0x1.06f1dp-15f, 0.0f, 0.0f,
     0.0f, 0x1.c5bb98p-57f, 0x1.3ada3ap-37f, 0x1.363872p-38f, 0x1.ad223ep-35f,
     0x1.211b74p-70f, 0x1.9736f8p-2f, 0.0f, 0.0f, 0x1.f310fp-74f, 0.0f, 0.0f,
     0x1.380ac6p-33f, 0x1.74143cp-108f, 0x1.79c3f4p-77f, 0.0f, 0x1.e5edfap-119f, 0.0f,
     0.0f, 0x1.e48c4p-1f, 0x1.2b2718p-26f, 0.0f, 0.0f, 0x1.f985d2p-27f, 0.0f, 0.0f,
     0x1.9c536ap-42f, 0x1.160338p-84f, 0.0f, 0x1.aeec5ap-80f, 0x1.3b7cd4p-54f, 0.0f,
     0x1.6e3e2ep-27f, 0x1.1e9384p-65f, 0x1.f630fcp-17f, 0.0f, 0x1.d32f4p-45f,
     0x1.22eecap-6f, 0.0f, 0x1.74fc1cp-108f, 0.0f, 0.0f, 0x1.879c0ap-75f, 0.0f,
     0x1.0566e6p-125f, 0x1.73670cp-68f, 0.0f, 0.0f, 0x1.5d8622p-63f, 0.0f, 0.0f,
     0x1.e0a724p-43f, 0.0f, 0.0f, 0.0f, 0x1.f49274p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.39c4f2p-77f, 0.0f, 0.0f, 0.0f, 0x1.66b9cp-32f, 0.0f, 0x1.7f1554p-5f,
     0.0f, 0x1.3e1c0ep-88f, 0x1.d82816p-115f, 0x1.e1f0b2p-31f, 0.0f, 0.0f, 0.0f,
     0x1.9820e6p-67f, 0.0f, 0.0f, 0.0f, 0x1.f05228p-99f, 0.0f, 0.0f, 0x1.d330cp-107f,
     0x1.20c3p-72f, 0.0f, 0x1.90547cp-16f, 0x1.ce8c18p-72f, 0.0f, 0.0f,
     0x1.e32bap-46f, 0.0f, 0.0f, 0x1.a7327ep-105f, 0.0f, 0x1.1dd49ep-61f,
     0x1.c424aep-55f, 0x1.cf9f38p-91f, 0.0f, 0x1.b5fb42p-72f, 0.0f, 0x1.66faf2p-77f,
     0x1.fc9ea8p-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3cce9p-39f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.191c4p-29f, 0.0f, 0x1.3649cp-79f, 0.0f, 0x1.95a702p-2f, 0.0f,
     0x1.a35626p-67f, 0x1.cc2084p-19f, 0x1.4d6e9ep-19f, 0x1.d79932p-51f,
     0x1.d54394p-63f, 0x1.2ddfb4p-84f, 0.0f, 0.0f, 0x1.78c658p-52f, 0.0f,
     0x1.4141bep-114f, 0x1.343636p-49f, 0x1.5597cp-65f, 0x1.9d075p-126f, 0.0f, 0.0f,
     0x1.996448p-51f, 0x1.4da9fap-10f, 0x1.63f84p-37f, 0.0f, 0.0f, 0.0f,
     0x1.d3c876p-96f, 0x1.a2bf78p-89f, 0x1.9870ccp-19f, 0.0f, 0x1.8e782cp-30f, 0.0f,
     0.0f, 0.0f, 0x1.0b7b46p-6f, 0x1.ee139cp-22f, 0.0f, 0x1.916cfep-97f, 0.0f,
     0x1.1bdfdap-5f, 0x1.84495p-17f, 0.0f, 0.0f, 0.0f, 0x1.1d577ap-67f,
     0x1.4175bap-118f, 0x1.593314p-119f, 0x1.27c0ap-89f, 0x1.c66fecp-21f,
     0x1.649a54p-89f, 0.0f, 0x1.5f23a4p-16f, 0x1.bc2edep-67f, 0.0f, 0x1.eaf01ep-123f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a00cf6p-17f, 0.0f, 0.0f, 0x1.07a76p-111f, 0.0f,
     0x1.10a86p-17f, 0x1.01a756p-32f, 0.0f, 0.0f, 0x1.c65c6ep-36f, 0x1.3ffa6ap-64f,
     0x1.9b9bep-68f, 0x1.fbb3ap-3f, 0x1.d267a4p-87f, 0.0f, 0.0f, 0.0f,
     0x1.a3356cp-112f, 0.0f, 0.0f, 0.0f, 0x1.0036bap-2f, 0x1.721beep-11f,
     0x1.61c84p-9f, 0x1.fd43p-110f, 0x1.1217e4p-57f, 0x1.74128ep-68f, 0.0f,
     0x1.b8925cp-64f, 0.0f, 0.0f, 0.0f, 0x1.fc7c84p-59f, 0x1.ff0b98p-75f,
     0x1.5aa104p-110f, 0.0f, 0.0f, 0.0f, 0x1.75de38p-116f, 0x1.3bf67ap-89f,
     0x1.a787aap-100f, 0.0f, 0x1.baedbcp-93f, 0x1.c059b8p-56f, 0x1.863404p-73f,
     0x1.415b1cp-112f, 0x1.4cb07cp-34f, 0.0f, 0x1.3ee7cap-89f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5eac0ap-75f, 0x1.43f7ep-46f, 0x1.eebfecp-13f, 0.0f, 0x1.ad12fap-126f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.04324ap-37f, 0.0f, 0.0f, 0x1.d15384p-72f, 0x1.631bf6p-41f,
     0x1.3073d2p-44f, 0.0f, 0x1.e20138p-74f, 0x1.cc02e2p-30f, 0x1.c6a8d2p-52f, 0.0f,
     0x1.927aa2p-70f, 0.0f, 0x1.d8daacp-51f, 0x1.9d3f02p-113f, 0x1.c02728p-55f,
     0x1.c1de2ap-91f, 0x1.98e96p-115f, 0.0f, 0.0f, 0.0f, 0x1.003ebcp-51f, 0.0f, 0.0f,
     0.0f, 0x1.806106p-69f, 0.0f, 0x1.318758p-15f, 0x1.e5f1d2p-32f, 0x1.b77f8cp-90f,
     0x1.55e42cp-103f, 0x1.1db432p-46f, 0x1.105b1ep-30f, 0.0f, 0.0f, 0x1.f2111ep-7f,
     0x1.1b3ccp-35f, 0x1.0d4a7cp-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9049bcp-22f, 0x1.456ebp-32f, 0.0f, 0x1.d6959ap-22f, 0.0f, 0.0f,
     0x1.2c824cp-66f, 0x1.4602a6p-90f, 0x1.8ede2p-5f, 0.0f, 0x1.d82212p-52f,
     0x1.9124ep-102f, 0x1.3e934ap-64f, 0.0f, 0.0f, 0x1.2edcd6p-120f, 0.0f, 0.0f, 0.0f,
     0x1.da8592p-74f, 0x1.9097c4p-60f, 0x1.79955ap-65f, 0.0f, 0.0f, 0x1.c2016cp-124f,
     0x1.e7e71ap-29f, 0.0f, 0.0f, 0.0f, 0x1.6e1a72p-90f, 0.0f, 0.0f, 0x1.d36e12p-47f,
     0.0f, 0.0f, 0x1.3c4df4p-98f, 0.0f, 0x1.7d0f14p-60f, 0.0f, 0x1.5dd9d2p-90f, 0.0f,
     0x1.eae096p-5f, 0x1.45de14p-46f, 0x1.55730cp-96f, 0.0f, 0x1.ccde68p-77f,
     0x1.ae9af6p-35f, 0x1.9bf5f8p-50f, 0.0f, 0.0f, 0.0f, 0x1.1eb6e4p-14f,
     0x1.39eedap-20f, 0.0f, 0.0f, 0x1.f18cc6p-61f, 0.0f, 0x1.eb1012p-9f,
     0x1.29ddc8p-81f, 0x1.fe1368p-65f, 0.0f, 0.0f, 0.0f, 0x1.d84afep-66f, 0.0f,
     0x1.6bd9b6p-64f, 0.0f, 0.0f, 0x1.59a434p-22f, 0x1.b1b6b6p-46f, 0x1.151bc8p-82f,
     0x1.bb9b18p-12f, 0x1.eff1bp-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8f4344p-82f, 0x1.eb769ap-48f, 0.0f, 0x1.925cd4p-15f, 0x1.a4572ep-102f, 0.0f,
     0x1.fce9bp-11f, 0.0f, 0x1.ca450ap-105f, 0.0f, 0x1.467134p-103f, 0.0f, 0.0f, 0.0f,
     0x1.5c4876p-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6fd796p-10f, 0x1.81e6d6p-112f,
     0.0f, 0x1.1e7098p-95f, 0x1.e438ccp-34f, 0.0f, 0x1.9d2bc8p-102f, 0x1.46ad38p-104f,
     0.0f, 0.0f, 0x1.7c669ap-82f, 0x1.e600dap-62f, 0x1.7a4378p-100f, 0.0f, 0.0f, 0.0f,
     0x1.596692p-109f, 0x1.7cadcap-43f, 0x1.32a39ap-37f, 0.0f, 0x1.c7e8ap-12f, 0.0f,
     0.0f, 0x1.2e8554p-63f, 0x1.aab826p-85f, 0.0f, 0x1.c396fep-22f, 0x1.ee8f28p-79f,
     0.0f, 0.0f, 0.0f, 0x1.901c86p-32f, 0.0f, 0x1.7b60cp-55f, 0x1.1aeb52p-121f,
     0x1.0f5df8p-29f, 0.0f, 0.0f, 0x1.b1331ep-114f, 0x1.cb1186p-117f, 0.0f, 0.0f,
     0.0f, 0x1.5eff2p-68f, 0.0f, 0x1.43f29ap-58f, 0.0f, 0x1.15fa36p-95f,
     0x1.c1c796p-66f, 0.0f, 0x1.d68c1ap-120f, 0.0f, 0.0f, 0.0f, 0x1.b2d2b4p-84f,
     0x1.ec5356p-95f, 0.0f, 0x1.01fd3cp-22f, 0x1.2695dap-6f, 0x1.b46cdap-31f,
     0x1.d53e7p-2f, 0x1.a62ff2p-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5bada8p-31f,
     0x1.562a18p-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a714c8p-77f,
     0x1.a12a86p-20f, 0.0f, 0.0f, 0x1.2b40bp-75f, 0x1.7fd274p-64f, 0.0f,
     0x1.3e50dcp-93f, 0.0f, 0x1.a8ae86p-110f, 0.0f, 0x1.690932p-64f, 0.0f,
     0x1.b83654p-38f, 0.0f, 0.0f, 0x1.cfb484p-80f, 0x1.c76fc8p-60f, 0.0f,
     0x1.9858dcp-5f, 0x1.6bd216p-74f, 0x1.14de88p-65f, 0.0f, 0.0f, 0.0f,
     0x1.df5074p-120f, 0.0f, 0x1.ad8dd6p-70f, 0.0f, 0x1.d4a7e2p-20f, 0x1.d650b2p-33f,
     0x1.4139f4p-111f, 0x1.cb8ab6p-67f, 0x1.02b39p-48f, 0.0f, 0x1.5a0246p-40f,
     0x1.73f28ap-47f, 0x1.4ed926p-25f, 0.0f, 0.0f, 0x1.93d208p-46f, 0x1.452bb2p-26f,
     0.0f, 0x1.3ceef6p-126f, 0.0f, 0.0f, 0x1.26c906p-26f, 0.0f, 0.0f,
     0x1.1c44dep-119f, 0x1.4dbdd2p-59f, 0x1.b9aa0ep-90f, 0x1.e896dap-57f, 0.0f,
     0x1.0e3bdcp-57f, 0x1.5e6f9ap-68f, 0.0f, 0x1.189086p-90f, 0x1.1aa86cp-61f, 0.0f,
     0x1.41895ap-28f, 0.0f, 0x1.b29a3ep-76f, 0x1.2e0928p-13f, 0x1.b12676p-81f,
     0x1.b9a2cp-112f, 0x1.09ea82p-108f, 0.0f, 0x1.54d128p-106f, 0x1.f9c93p-78f,
     0x1.557072p-36f, 0.0f, 0.0f, 0x1.a42a46p-108f, 0.0f, 0x1.a446e6p-10f, 0.0f,
     0x1.4ebf66p-18f, 0.0f, 0x1.cf2ceep-46f, 0.0f, 0x1.783e0ap-49f, 0x1.2de5bcp-83f,
     0x1.21c6e8p-42f, 0x1.b1862p-86f, 0x1.3326c2p-119f
};
static const float external_bench_wrapper_input_table_arg1[1008]  = {
     0x1.622b6p-5f, 0.0f, 0x1.342224p-78f, 0x1.c7aecap-37f, 0x1.027ab2p-49f,
     0x1.9d2b1cp-96f, 0.0f, 0.0f, 0x1.0ceb38p-54f, 0x1.6dcc38p-79f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a3f80ap-58f, 0.0f, 0.0f, 0.0f, 0x1.4a3006p-1f, 0.0f, 0.0f,
     0x1.5fb1c6p-11f, 0x1.8782c6p-89f, 0x1.931ddep-124f, 0.0f, 0x1.95e464p-15f,
     0x1.862728p-45f, 0.0f, 0x1.bf29aap-119f, 0x1.846844p-19f, 0x1.7cf52p-56f, 0.0f,
     0.0f, 0x1.ac2f46p-1f, 0.0f, 0x1.cbbc8ep-112f, 0x1.e8d012p-91f, 0.0f, 0.0f,
     0x1.b0a1fcp-31f, 0x1.4304bep-25f, 0.0f, 0.0f, 0x1.5e5ed4p-96f, 0.0f, 0.0f, 0.0f,
     0x1.a876b8p-79f, 0.0f, 0.0f, 0x1.290e56p-7f, 0x1.416716p-99f, 0.0f, 0.0f,
     0x1.bdaf06p-15f, 0.0f, 0.0f, 0.0f, 0x1.cfd1b2p-4f, 0.0f, 0x1.fd4ecap-6f,
     0x1.54667p-99f, 0x1.4d342p-33f, 0x1.64cdecp-89f, 0.0f, 0x1.10f0dap-12f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.63b0c2p-58f, 0x1.e0c4d2p-8f, 0x1.706c16p-122f,
     0x1.e65d9ap-117f, 0x1.f65e08p-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ee3ebcp-124f, 0x1.23b838p-7f, 0x1.b1d00cp-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0e8b16p-111f, 0.0f, 0.0f, 0x1.31ccbp-16f, 0x1.725d4p-76f, 0.0f, 0.0f,
     0x1.f21208p-90f, 0.0f, 0.0f, 0.0f, 0x1.5164d4p-126f, 0.0f, 0x1.072cd6p-114f,
     0x1.4bfe04p-5f, 0x1.d955fep-9f, 0.0f, 0x1.e05706p-26f, 0x1.5aa44ep-80f, 0.0f,
     0.0f, 0x1.4827cep-74f, 0.0f, 0x1.7b6cp-7f, 0x1.54bffep-74f, 0x1.e91bf6p-73f,
     0x1.0ba942p-100f, 0x1.0aa566p-37f, 0x1.d75302p-23f, 0x1.70b002p-68f,
     0x1.1bf31ap-49f, 0.0f, 0x1.a282a4p-114f, 0.0f, 0x1.84ad74p-45f, 0x1.1f6dep-40f,
     0.0f, 0x1.ed4acep-55f, 0.0f, 0x1.c3a728p-16f, 0x1.a5c718p-114f, 0.0f,
     0x1.326224p-37f, 0x1.9f7ff4p-81f, 0x1.4e445ep-96f, 0x1.03062ap-119f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.690748p-33f, 0x1.cc405p-13f, 0x1.d564e6p-39f, 0x1.8fc694p-57f,
     0.0f, 0.0f, 0.0f, 0x1.6084b8p-30f, 0x1.cb60b4p-4f, 0.0f, 0.0f, 0.0f,
     0x1.fcc914p-98f, 0.0f, 0x1.88361ep-115f, 0.0f, 0x1.71345ap-95f, 0x1.19edaep-123f,
     0x1.9bdf2cp-59f, 0.0f, 0x1.abff5ap-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5252dep-113f,
     0x1.0bfb04p-69f, 0.0f, 0x1.fb2d9ap-63f, 0x1.23a3a2p-43f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.660236p-95f, 0x1.4765c4p-48f, 0x1.3b85ecp-120f, 0x1.b2b3dep-124f,
     0x1.1cd748p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.447124p-117f,
     0x1.889ea4p-63f, 0x1.c9de1cp-118f, 0.0f, 0.0f, 0x1.bbc09ap-41f, 0.0f,
     0x1.e64b6ep-81f, 0x1.30d948p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0ae43ep-112f,
     0x1.2a6a66p-24f, 0.0f, 0x1.8b2dfcp-105f, 0x1.f972dp-87f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4dbcf6p-100f, 0x1.f69774p-118f, 0x1.98f47p-85f, 0.0f, 0.0f, 0x1.87824cp-81f,
     0x1.664d12p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9d73b6p-19f, 0x1.f24d0ap-101f,
     0x1.773576p-9f, 0.0f, 0x1.7e8386p-115f, 0x1.cec8fep-89f, 0.0f, 0x1.d96a82p-90f,
     0x1.7b89bep-4f, 0.0f, 0x1.05e0aap-55f, 0x1.041a02p-52f, 0x1.d63de4p-16f, 0.0f,
     0x1.6ab7ecp-58f, 0.0f, 0x1.56fd7ep-67f, 0.0f, 0x1.3d3ac2p-48f, 0x1.99b0ep-110f,
     0x1.dae03ap-98f, 0x1.7da4ecp-72f, 0.0f, 0x1.8a118p-39f, 0x1.e93818p-77f, 0.0f,
     0.0f, 0.0f, 0x1.1b3404p-56f, 0.0f, 0x1.b7156cp-113f, 0x1.a2535ep-120f,
     0x1.1c084p-87f, 0.0f, 0x1.f5c058p-13f, 0.0f, 0x1.c02844p-16f, 0.0f,
     0x1.375b96p-33f, 0.0f, 0.0f, 0.0f, 0x1.60b8ecp-81f, 0.0f, 0.0f, 0x1.02013cp-22f,
     0.0f, 0x1.eca7ecp-113f, 0x1.18fe34p-55f, 0.0f, 0.0f, 0x1.0cceep-21f,
     0x1.9b72fap-26f, 0x1.cb938ep-30f, 0x1.9fc824p-72f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.38952ap-30f, 0x1.6e12c6p-63f, 0x1.18a84ep-90f, 0.0f, 0x1.f8094p-72f,
     0x1.31a8cep-6f, 0x1.1ece9ap-38f, 0x1.f384f8p-96f, 0x1.0923cap-7f,
     0x1.27fe5ap-115f, 0.0f, 0x1.544f6p-1f, 0x1.e48e9ap-20f, 0.0f, 0x1.4bbee2p-34f,
     0.0f, 0.0f, 0x1.9e4634p-61f, 0.0f, 0.0f, 0.0f, 0x1.4a1c14p-3f, 0x1.95f32cp-114f,
     0.0f, 0x1.329b9cp-46f, 0.0f, 0x1.d2075p-116f, 0.0f, 0.0f, 0x1.bd225p-6f,
     0x1.33aa4ep-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2c087p-126f,
     0x1.d4d52cp-68f, 0.0f, 0x1.91d8f6p-41f, 0x1.4c9fdp-123f, 0.0f, 0.0f,
     0x1.b24a92p-20f, 0x1.14106p-116f, 0x1p0f, 0.0f, 0.0f, 0x1.7bf1d8p-63f,
     0x1.fc6bd4p-34f, 0.0f, 0.0f, 0x1.05a4e2p-27f, 0x1.dc4526p-83f, 0.0f, 0.0f, 0.0f,
     0x1.53cbb2p-124f, 0x1.f510d6p-104f, 0x1.d79b24p-116f, 0.0f, 0.0f, 0.0f,
     0x1.d2302cp-19f, 0.0f, 0x1.fe864ap-84f, 0x1.245e64p-39f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.242532p-92f, 0x1.e44aa4p-42f, 0.0f, 0.0f, 0x1.56b3e6p-57f,
     0x1.3dcd8p-96f, 0x1.e3d9dep-60f, 0x1.81998ap-19f, 0.0f, 0x1.83bedp-100f,
     0x1.a85a5ap-6f, 0x1.d6db84p-60f, 0.0f, 0x1.28d906p-43f, 0x1.622774p-65f,
     0x1.ab5d5ap-10f, 0.0f, 0x1.b8baaep-55f, 0.0f, 0x1.8b9fa4p-94f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.db7d52p-124f, 0x1.3d3eecp-15f, 0x1.f3cf2ep-123f,
     0x1.4151ep-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a27a8cp-6f, 0.0f, 0x1.838efep-37f,
     0x1.8346bp-96f, 0x1.b48956p-50f, 0x1.59906ap-99f, 0.0f, 0x1.63f362p-118f, 0.0f,
     0.0f, 0x1.211928p-29f, 0x1.db43bcp-91f, 0.0f, 0x1.17bf64p-79f, 0x1.d05444p-107f,
     0.0f, 0x1.da6ff6p-21f, 0x1.153458p-119f, 0.0f, 0x1.6c43b8p-19f, 0x1.0392fcp-60f,
     0.0f, 0.0f, 0.0f, 0x1.abdd48p-81f, 0x1.efb3c4p-27f, 0x1.0225a6p-56f,
     0x1.d416ap-26f, 0.0f, 0x1.f76a86p-9f, 0x1.52e388p-123f, 0.0f, 0x1.e98d5cp-21f,
     0.0f, 0.0f, 0.0f, 0x1.17297ep-52f, 0x1.4d3554p-75f, 0.0f, 0.0f, 0x1.8c5f4cp-26f,
     0.0f, 0.0f, 0.0f, 0x1.677fe4p-102f, 0.0f, 0.0f, 0x1.21f88p-47f, 0x1.58745p-57f,
     0.0f, 0x1.7cf25cp-12f, 0x1.d8c15p-38f, 0x1.012e2cp-44f, 0.0f, 0.0f,
     0x1.2b439ep-123f, 0x1.b2d662p-5f, 0x1.bbd44ep-65f, 0x1.9fc65cp-90f,
     0x1.1ec602p-36f, 0.0f, 0.0f, 0x1.bd0e8ap-17f, 0x1.9dd0d6p-56f, 0x1.7c2e12p-110f,
     0.0f, 0.0f, 0.0f, 0x1.9aaf42p-48f, 0.0f, 0x1.1c7e42p-2f, 0.0f, 0x1.f65d2p-8f,
     0x1.459186p-71f, 0.0f, 0x1.4bfaeap-70f, 0x1.777aacp-44f, 0.0f, 0.0f,
     0x1.3a871ep-78f, 0.0f, 0.0f, 0x1.eec2d4p-30f, 0.0f, 0.0f, 0x1.3f9b94p-48f,
     0x1.87c58ep-3f, 0.0f, 0x1.705ff8p-86f, 0x1.cc13dep-109f, 0x1.ab27f2p-113f,
     0x1.6cf8fcp-62f, 0.0f, 0.0f, 0x1.ca5f88p-25f, 0.0f, 0x1.d9dd42p-24f,
     0x1.89bab4p-56f, 0x1.9a5cp-11f, 0x1.6b48ep-18f, 0.0f, 0x1.1fe526p-38f,
     0x1.2bdep-32f, 0.0f, 0.0f, 0x1.e810e2p-37f, 0.0f, 0x1.c637ep-43f,
     0x1.a7dcbp-102f, 0x1.3f129cp-42f, 0.0f, 0x1.30ef26p-118f, 0.0f, 0.0f, 0.0f,
     0x1.5d9262p-45f, 0x1.3a70dcp-78f, 0.0f, 0x1.ed8798p-42f, 0.0f, 0x1.6d27d6p-118f,
     0x1.89d0d8p-61f, 0x1.b0d52cp-110f, 0x1.d15842p-106f, 0.0f, 0.0f, 0.0f,
     0x1.67e5e4p-44f, 0x1.33d462p-125f, 0.0f, 0.0f, 0x1.a7a13ap-50f, 0.0f,
     0x1.66464cp-102f, 0.0f, 0x1.1ff9ccp-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6b712ep-35f, 0.0f, 0x1.4d444ap-88f, 0.0f, 0x1.c972fap-29f, 0.0f,
     0x1.c75856p-18f, 0x1.86662ep-70f, 0.0f, 0x1.a07dc6p-114f, 0x1.dd752ep-91f,
     0x1.50519p-50f, 0x1.f97c26p-106f, 0x1.99cc0ep-2f, 0.0f, 0x1.05727cp-65f,
     0x1.b1552ep-58f, 0.0f, 0.0f, 0x1.b4b42ep-63f, 0x1.357964p-114f, 0.0f,
     0x1.767a5ep-86f, 0x1.4d13bap-86f, 0x1.fc01f6p-27f, 0x1.8e9c8p-114f, 0.0f, 0.0f,
     0.0f, 0x1.2addfp-83f, 0x1.bc844p-119f, 0x1.f8235ap-83f, 0x1.2048fap-28f, 0.0f,
     0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5dfb84p-40f, 0x1.d46352p-51f,
     0.0f, 0.0f, 0.0f, 0x1.054b34p-117f, 0x1.e0f676p-111f, 0x1.94df12p-16f, 0.0f,
     0.0f, 0x1.b693fcp-117f, 0.0f, 0x1.ff8268p-63f, 0.0f, 0.0f, 0x1.c488a2p-48f, 0.0f,
     0x1.c0597ep-77f, 0.0f, 0x1.6a36f6p-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8dc62ap-104f, 0.0f, 0.0f, 0x1.1b4f8ep-8f, 0.0f, 0.0f, 0x1.46b094p-3f, 0.0f,
     0x1.dffc7ap-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e4188cp-79f, 0x1.97f54ep-87f, 0x1.398f9ap-53f, 0.0f, 0.0f, 0.0f,
     0x1.cddd8ap-114f, 0x1.218fdp-93f, 0.0f, 0x1.2500cp-27f, 0.0f, 0x1.1dc8c4p-125f,
     0.0f, 0x1.b43d9cp-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7c8354p-23f, 0x1.ef1b9p-97f,
     0.0f, 0.0f, 0x1p0f, 0x1.8b9d32p-56f, 0x1.ccef52p-58f, 0.0f, 0x1.e5fb1ap-123f,
     0.0f, 0x1.4cf4eep-115f, 0.0f, 0x1.85c0dp-20f, 0x1.8d610cp-19f, 0.0f, 0.0f,
     0x1.35d1f4p-38f, 0x1.235512p-96f, 0.0f, 0.0f, 0x1.99c766p-45f, 0x1.df039cp-27f,
     0x1.2eb75ep-22f, 0.0f, 0x1.0ffd36p-61f, 0x1.7387eep-110f, 0x1.32d44cp-126f,
     0x1.adc9cap-42f, 0.0f, 0.0f, 0x1.3cf456p-54f, 0.0f, 0.0f, 0x1.456d0cp-39f,
     0x1.01436cp-6f, 0.0f, 0x1.8b121p-58f, 0x1.ead6bap-61f, 0.0f, 0x1.8932a6p-91f,
     0x1.71e47ep-100f, 0.0f, 0x1.e39702p-13f, 0x1.a9140ep-27f, 0.0f, 0x1.fc3d5ep-92f,
     0x1.ff0ca6p-36f, 0x1.cb3586p-90f, 0x1.ce5a2cp-117f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.64a1d6p-10f, 0.0f, 0.0f, 0x1.cf8938p-103f, 0x1.510966p-80f, 0x1.a225fap-116f,
     0.0f, 0.0f, 0x1.363254p-66f, 0x1.9fe5bcp-30f, 0x1.45a5b2p-59f, 0.0f,
     0x1.567206p-58f, 0x1.1967f8p-17f, 0x1.7ae7cap-47f, 0.0f, 0x1.e67f54p-51f,
     0x1.6ed2b6p-17f, 0x1.33f00ap-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0e38acp-63f, 0x1.3d08a6p-74f, 0.0f, 0.0f, 0x1.77cf1cp-71f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.6b33bap-73f, 0x1.3b5494p-109f, 0.0f, 0.0f,
     0x1.20ccdcp-104f, 0x1.9bbc9ep-107f, 0.0f, 0x1.bba966p-118f, 0x1.f824f6p-23f,
     0.0f, 0.0f, 0x1.a567acp-81f, 0x1.8b9946p-63f, 0.0f, 0x1.8faddep-18f, 0.0f, 0.0f,
     0x1.1caabep-96f, 0x1.0e24dp-88f, 0.0f, 0x1.7b4ef6p-63f, 0.0f, 0.0f,
     0x1.ad3e88p-92f, 0x1.8accap-74f, 0.0f, 0.0f, 0x1.03e1cep-20f, 0x1.63f9a2p-69f,
     0x1.472f42p-122f, 0.0f, 0x1.0e5da4p-100f, 0x1.2edc84p-6f, 0.0f, 0.0f, 0.0f,
     0x1.7eada4p-13f, 0x1.26e5d8p-113f, 0x1.a46ba4p-69f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a790f6p-17f, 0.0f, 0x1.a5d912p-27f, 0.0f, 0x1.dea3b6p-92f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.747c58p-100f, 0x1.f74324p-82f, 0.0f, 0x1.88e5acp-98f, 0x1.99249ap-38f,
     0.0f, 0x1.1f111ap-108f, 0x1.a5c8b6p-19f, 0.0f, 0.0f, 0x1.7799dap-87f, 0.0f,
     0x1.8b104ap-55f, 0x1.4caf06p-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e19856p-122f, 0.0f,
     0x1.b65e3ap-57f, 0x1.d75d64p-46f, 0.0f, 0.0f, 0x1.c31d1cp-100f, 0x1.20d05cp-84f,
     0.0f, 0.0f, 0x1.6a97acp-51f, 0.0f, 0x1.41f678p-4f, 0x1.f5412p-30f, 0x1.9cd5ep-7f,
     0x1.7f2ba8p-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a75508p-123f, 0x1.4b1f2cp-112f,
     0.0f, 0.0f, 0x1.9e1212p-96f, 0.0f, 0.0f, 0x1.0855bcp-107f, 0x1.ebae0cp-86f,
     0x1.6af206p-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3dd62ep-36f, 0.0f, 0x1.cdap-117f,
     0.0f, 0x1.1f6a98p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b72994p-83f,
     0x1.d4aeb6p-7f, 0x1.d7e4a6p-11f, 0.0f, 0x1.88df36p-115f, 0x1.cf13cp-19f, 0.0f,
     0x1.785e6cp-121f, 0.0f, 0x1.d1364ap-110f, 0.0f, 0.0f, 0.0f, 0x1.6f4bf4p-95f,
     0.0f, 0.0f, 0.0f, 0x1.8ed6d6p-22f, 0x1.07fdcp-104f, 0x1.5ed0ecp-42f,
     0x1.e0276cp-96f, 0x1.21874ap-19f, 0.0f, 0x1.8011acp-101f, 0.0f, 0.0f,
     0x1.4b70e6p-8f, 0.0f, 0x1.7d1f6p-64f, 0.0f, 0x1.9e7956p-115f, 0.0f, 0.0f,
     0x1.b15942p-12f, 0x1.575a32p-92f, 0.0f, 0.0f, 0x1.2e862ep-39f, 0x1.e7e598p-90f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3d0dbp-101f, 0x1.707b22p-116f, 0x1.2c013p-4f,
     0x1.94a7fap-114f, 0x1.cb846ep-46f, 0x1.eb11c8p-50f, 0x1.7e543cp-59f, 0.0f, 0.0f,
     0.0f, 0x1.8f7ab6p-95f, 0x1.97500cp-51f, 0x1.5d3c14p-2f, 0.0f, 0x1.0abfe4p-95f,
     0.0f, 0x1.668b04p-10f, 0x1.0f200cp-47f, 0x1.41a66ap-99f, 0x1.90a528p-118f,
     0x1.43eec8p-94f, 0x1.0c6bb2p-56f, 0x1.23943p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c80112p-39f, 0x1.49ed22p-64f, 0.0f, 0x1.739f24p-66f, 0.0f, 0.0f, 0.0f,
     0x1.0f5fd8p-60f, 0.0f, 0x1.fe4826p-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.11538cp-42f, 0x1.12cbacp-39f, 0.0f, 0.0f, 0x1.a56a6ep-63f, 0x1.7f7482p-56f,
     0x1.1bbee6p-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6979b6p-103f, 0x1.ab42c8p-2f, 0.0f,
     0.0f, 0.0f, 0x1.ec48bep-102f, 0.0f, 0.0f, 0.0f, 0x1.70bb7ep-99f, 0.0f,
     0x1.d2517p-100f, 0x1.c9d92ep-10f, 0.0f, 0x1.a76c38p-59f, 0x1.a2bc86p-16f,
     0x1.1af586p-81f, 0x1.c3b5fap-25f, 0x1.646cd4p-34f, 0x1.a9663ep-84f, 0.0f, 0.0f,
     0x1.9b8894p-109f, 0x1.902332p-43f, 0x1.d09fa4p-18f, 0x1.965c6cp-63f,
     0x1.69f258p-22f, 0.0f, 0.0f, 0.0f, 0x1.f7917ap-45f, 0.0f, 0.0f, 0x1.5dabcep-52f,
     0x1.2259f2p-100f, 0.0f, 0.0f, 0x1.3aa50ap-112f, 0.0f, 0x1.f0f27p-80f,
     0x1.217f7p-103f, 0.0f, 0x1.2573a8p-62f, 0x1.df8b64p-109f, 0.0f, 0.0f, 0.0f,
     0x1.89a8bp-54f, 0x1.9e645ep-89f, 0.0f, 0x1.6517cep-38f, 0.0f, 0.0f,
     0x1.0b4af8p-103f, 0x1.564112p-86f, 0.0f, 0x1.2dddf6p-49f, 0.0f, 0x1.b3bff8p-9f,
     0x1.7609d6p-106f, 0x1.281e78p-71f, 0x1.23af0cp-40f, 0x1.018b86p-94f, 0.0f,
     0x1.e7d5dp-70f, 0x1.f4e83cp-45f, 0.0f, 0.0f, 0.0f, 0x1.e7f3e2p-95f,
     0x1.4e2bbep-1f, 0.0f, 0.0f, 0x1.aa1208p-31f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_float8_t global_bench_acc;
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
        ml_float8_t local_acc;
        int32_t i;
        ml_float8_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1008));){
            ml_float8_t tmp0;
            ml_float8_t tmp1;
            ml_float8_t tmp2;
            ml_float8_t tmp3;
            int32_t tmp4;

            memcpy(&tmp0, ((ml_float8_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            memcpy(&tmp1, ((ml_float8_t*)(external_bench_wrapper_input_table_arg1+ i)), 32);
            tmp2 = Sleef_finz_atan2f8_u10kvx(tmp0, tmp1);
            memcpy(((ml_float8_t*)(external_bench_wrapper_output_table+ i)), &(tmp2), 32);
            tmp3 = local_acc + tmp2;
            local_acc = tmp3;
            tmp4 = i + INT32_C(8);
            i = tmp4;
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
    cpe_measure = id_tmp / 10080000.0;
    printf("Sleef_finz_atan2f8_u10kvx %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_finz_atan2f8_u10kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
