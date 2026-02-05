/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_expf4_u10kvx.c --function Sleef_expf4_u10kvx --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary32 --vector-size 4 \
 *     --function-input-vector-size 4 --bench --no-embedded-bin --target kv3
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
     0x1.d727a2p-65f, 0x1.6cdf32p-65f, 0x1p0f, 0.0f, 0x1.3c5276p-47f, 0.0f, 0.0f,
     0.0f, 0x1.b8f176p-113f, 0.0f, 0x1.90df8cp-120f, 0x1.ff6c5p-98f, 0.0f,
     0x1.f5fc74p-124f, 0x1.951d9ep-44f, 0x1.04441cp-60f, 0x1.a9f958p-61f,
     0x1.8011aap-35f, 0x1.b0e72p-77f, 0x1.9c690ap-63f, 0x1.c4a81ap-47f, 0.0f, 0.0f,
     0x1.4467ecp-80f, 0x1.1e64aep-68f, 0x1.84e932p-29f, 0x1.a2fc44p-15f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1416a2p-75f, 0.0f, 0.0f, 0.0f, 0x1.84bd74p-29f, 0.0f, 0.0f,
     0x1.903b6p-43f, 0x1.092ba8p-37f, 0x1.d22a02p-98f, 0x1.7d313ep-5f, 0.0f,
     0x1.93e86cp-105f, 0.0f, 0x1.6ee97ep-4f, 0x1.e56b9ap-19f, 0x1.a5ab3cp-84f, 0.0f,
     0.0f, 0x1.a023ccp-91f, 0x1.498642p-24f, 0.0f, 0.0f, 0.0f, 0x1.9801aep-58f,
     0x1.488602p-10f, 0.0f, 0x1.70c072p-19f, 0x1.c9831ap-117f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b8d4a4p-18f, 0x1.c1bb9cp-107f, 0.0f, 0.0f, 0.0f, 0x1.a3f4e2p-3f,
     0x1.a0409cp-9f, 0x1.e76a24p-71f, 0x1.36a24cp-125f, 0.0f, 0x1.e39d5ep-109f,
     0x1.e1d7bp-109f, 0x1.d1e216p-12f, 0x1.5d3fb4p-37f, 0x1.9ed95p-5f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.25e186p-100f, 0.0f, 0x1.49de3cp-109f, 0.0f, 0x1.fe86c2p-61f,
     0.0f, 0.0f, 0x1.94ed3cp-81f, 0x1.75e17cp-3f, 0.0f, 0x1.44aebp-23f, 0.0f,
     0x1.58592p-57f, 0.0f, 0.0f, 0.0f, 0x1.e64f42p-27f, 0.0f, 0x1.4f293p-5f,
     0x1.085d78p-45f, 0x1.22ca8cp-102f, 0x1.65fb98p-100f, 0x1.036326p-52f,
     0x1.e8b548p-104f, 0x1.8932fep-107f, 0.0f, 0.0f, 0x1.63998ap-78f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.fc6caap-68f, 0.0f, 0x1.fc6c46p-7f, 0x1.947594p-60f,
     0x1.524b5ap-45f, 0.0f, 0.0f, 0x1.72426ap-94f, 0x1.af5fdap-29f, 0x1.daf258p-78f,
     0x1.33021p-43f, 0.0f, 0x1.a85f3ap-45f, 0.0f, 0x1.c8758ap-81f, 0x1.29e69cp-51f,
     0x1.92aa86p-86f, 0x1.6796ecp-25f, 0x1.6a55bap-40f, 0x1.025adep-57f,
     0x1.376838p-51f, 0x1.62a57p-28f, 0.0f, 0x1.b957aep-115f, 0.0f, 0.0f, 0.0f,
     0x1.6011a2p-14f, 0.0f, 0x1.3b3cbap-52f, 0x1.5020c4p-49f, 0.0f, 0x1.f3a268p-72f,
     0.0f, 0.0f, 0x1.c4f1cp-26f, 0.0f, 0x1.7d1c86p-115f, 0x1.71d1bap-101f, 0.0f, 0.0f,
     0.0f, 0x1.1bcc9p-7f, 0x1.edd82p-80f, 0x1.d4ee3ap-122f, 0.0f, 0.0f, 0.0f,
     0x1.a85b3p-37f, 0x1.f8433ap-117f, 0x1.fa0e9ep-68f, 0x1.48fec6p-26f, 0.0f,
     0x1.977c1ep-107f, 0.0f, 0x1.bfccbap-117f, 0.0f, 0.0f, 0x1.c060c6p-117f,
     0x1.d20a72p-121f, 0x1.2fd624p-48f, 0.0f, 0x1.3bdb62p-91f, 0x1.21db06p-98f, 0.0f,
     0.0f, 0x1.6680f8p-115f, 0.0f, 0x1.63b108p-111f, 0x1.f6dbbp-73f, 0x1.4a81fep-59f,
     0.0f, 0x1.b24c2ep-104f, 0x1.f1e584p-50f, 0x1.35b982p-43f, 0x1.0f5fc6p-82f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c1713ap-35f, 0.0f, 0.0f, 0x1.231ap-43f, 0x1.500bd4p-115f,
     0.0f, 0x1.cc3206p-83f, 0x1.18ad82p-80f, 0.0f, 0x1.03af82p-106f, 0x1.facdecp-3f,
     0x1.1b3d34p-40f, 0x1.b369c2p-20f, 0.0f, 0.0f, 0x1.cf8c7cp-76f, 0.0f,
     0x1.12dff8p-53f, 0.0f, 0.0f, 0x1.fdb44cp-121f, 0.0f, 0x1.b1f7dep-124f,
     0x1.fd49d2p-48f, 0.0f, 0.0f, 0.0f, 0x1.23da66p-112f, 0x1.4a6e4ap-123f,
     0x1.75fabp-68f, 0x1.8d885ep-56f, 0x1.156a48p-102f, 0x1.01279cp-81f, 0.0f,
     0x1.ac77c4p-43f, 0.0f, 0.0f, 0x1.c0bd1p-70f, 0.0f, 0x1.a8b59ep-25f, 0.0f, 0.0f,
     0x1.37efbcp-124f, 0x1.36441p-23f, 0x1.5a5e42p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.813fa4p-113f, 0.0f, 0x1.4d4d8ap-57f, 0x1.9fa996p-50f,
     0x1.d54e48p-81f, 0.0f, 0x1.093baep-23f, 0.0f, 0.0f, 0x1.243836p-8f,
     0x1.46c4p-102f, 0x1.5bebeap-90f, 0x1.51bf96p-7f, 0.0f, 0.0f, 0x1.043c5ap-98f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.72aa84p-10f, 0.0f, 0.0f, 0x1.d17de4p-74f, 0x1.a48664p-47f, 0x1.6f0e1ep-21f,
     0.0f, 0.0f, 0.0f, 0x1.77481ep-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bed86ep-70f, 0.0f, 0x1.5342f6p-90f, 0x1.ecd882p-72f, 0.0f, 0x1.6ff71ep-81f,
     0.0f, 0x1.3b5f78p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9344f8p-68f, 0.0f,
     0x1.4b2cd4p-73f, 0.0f, 0x1.7a860cp-92f, 0x1.2cfd54p-50f, 0.0f, 0.0f,
     0x1.cdb786p-97f, 0x1.2063dep-80f, 0x1.fdc3dp-36f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.53f904p-123f, 0.0f, 0x1.4bbcfcp-22f, 0.0f, 0x1.e5fd7ep-27f, 0x1.fa495ep-92f,
     0x1.26969ep-31f, 0.0f, 0x1.4987aap-121f, 0x1.027a46p-60f, 0x1.d9b6fep-47f, 0.0f,
     0x1.2fa7fp-39f, 0.0f, 0.0f, 0x1.fbdcap-56f, 0x1.3ceff8p-122f, 0.0f,
     0x1.cb8baap-116f, 0.0f, 0x1.c3dfccp-53f, 0.0f, 0x1.ed19e4p-50f, 0x1.189f8ap-54f,
     0x1.cc7c6ap-51f, 0x1.bc23cap-28f, 0x1.6cd6d6p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.829568p-44f, 0x1.803452p-79f, 0x1.1bd3bcp-40f, 0x1.e7ff58p-117f,
     0x1.dad066p-126f, 0x1.656914p-21f, 0.0f, 0x1.b3b874p-36f, 0x1.34672ap-2f,
     0x1.2b96dap-5f, 0.0f, 0x1.e5b89p-114f, 0.0f, 0x1.5058c4p-28f, 0x1.7fe0ep-118f,
     0x1.0be3dp-30f, 0.0f, 0.0f, 0x1.74a292p-79f, 0x1.d4be8ap-39f, 0.0f,
     0x1.beea2cp-105f, 0x1.16fe54p-76f, 0x1.2c9a88p-73f, 0.0f, 0x1.74eba2p-25f,
     0x1.2b1f12p-86f, 0x1.b14d92p-79f, 0x1.0191p-31f, 0x1.d530c4p-62f,
     0x1.9ad36p-112f, 0x1.96f51ap-14f, 0.0f, 0.0f, 0x1.d09664p-111f, 0.0f,
     0x1.4ef842p-21f, 0.0f, 0x1.cfa062p-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.cff528p-16f, 0.0f, 0.0f, 0x1.ab5cf6p-67f,
     0x1.d77dbcp-71f, 0x1.eb94ap-48f, 0.0f, 0x1.4905eap-38f, 0x1.434e58p-22f,
     0x1.94474p-106f, 0x1.564e6cp-11f, 0.0f, 0.0f, 0x1.c0be6p-56f, 0x1.18af2ep-49f,
     0.0f, 0x1.77ad8ep-3f, 0x1.b2aaeep-88f, 0x1.7f4c2ap-100f, 0.0f, 0.0f, 0.0f,
     0x1.0ba73ep-85f, 0x1.4415f6p-55f, 0.0f, 0x1.7fb01cp-61f, 0x1.a9c65p-26f,
     0x1.03fdap-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1b9cf4p-121f, 0x1.7fe5f4p-52f, 0.0f,
     0x1.fabaa2p-95f, 0.0f, 0x1.e58a1ap-16f, 0x1.b0eb2cp-30f, 0x1.4040f4p-110f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.664bcap-2f, 0x1.b604fap-101f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c808d6p-90f, 0.0f, 0x1.e0891p-73f, 0.0f, 0x1.57d74ep-101f, 0.0f,
     0x1.80d7fap-81f, 0.0f, 0x1.95d71ep-84f, 0x1.b2abe8p-100f, 0x1.d23124p-58f,
     0x1.5d3888p-69f, 0x1.9b2368p-113f, 0.0f, 0x1.85e766p-10f, 0x1.b39aeap-89f, 0.0f,
     0x1.80c4acp-111f, 0x1.bd3f76p-84f, 0.0f, 0x1.7a4618p-113f, 0.0f, 0.0f,
     0x1.a2fb26p-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3d1f62p-11f,
     0.0f, 0.0f, 0x1.d87d92p-34f, 0x1.904758p-42f, 0.0f, 0.0f, 0x1.22fffap-43f,
     0x1.ef287p-74f, 0.0f, 0.0f, 0x1.ef82a8p-18f, 0.0f, 0.0f, 0x1.8a238ep-20f, 0.0f,
     0x1.692f1cp-67f, 0.0f, 0.0f, 0.0f, 0x1.e318c2p-125f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ac62b2p-43f, 0.0f, 0.0f, 0x1.53e6c2p-123f, 0x1.ff2378p-126f, 0.0f,
     0x1.4c460ep-74f, 0.0f, 0x1.3aa994p-103f, 0.0f, 0x1.6b9216p-72f, 0x1.1902a4p-93f,
     0x1.856f9ep-87f, 0.0f, 0x1.9647ecp-122f, 0.0f, 0x1.3e143cp-30f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e165b4p-100f, 0x1.962d06p-75f, 0x1.58f35cp-69f, 0x1.837a34p-33f,
     0x1.5ddcap-116f, 0x1.b1bdbp-37f, 0.0f, 0.0f, 0.0f, 0x1.efbd68p-78f, 0.0f, 0.0f,
     0x1.351a46p-104f, 0x1.22d002p-117f, 0x1.8121dep-26f, 0.0f, 0x1.08391ap-9f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.79f8b4p-51f, 0.0f, 0.0f,
     0x1.90e3cp-121f, 0.0f, 0x1.a49fbp-77f, 0x1.ecf218p-86f, 0.0f, 0x1.8ad35ap-81f,
     0.0f, 0.0f, 0x1.bcf498p-10f, 0x1.c21c0cp-120f, 0.0f, 0x1.07ff9p-118f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e71b1ap-30f, 0.0f, 0x1.0ff314p-63f, 0x1.040cc2p-78f, 0.0f, 0.0f,
     0x1.cd02bep-28f, 0.0f, 0x1.e0b7a6p-70f, 0x1.fbb14cp-68f, 0.0f, 0x1.f56ff4p-18f,
     0.0f, 0.0f, 0.0f, 0x1.d44e0cp-113f, 0.0f, 0x1.cb30aep-59f, 0.0f, 0.0f, 0.0f,
     0x1.011662p-95f, 0.0f, 0.0f, 0x1.c41142p-46f, 0x1.b5cb8cp-38f, 0x1.7822d4p-6f,
     0.0f, 0x1.2ae7bcp-60f, 0x1.06549cp-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.14e87p-26f,
     0x1.2c6adap-32f, 0.0f, 0x1.ac81fep-90f, 0.0f, 0x1.eed076p-1f, 0.0f,
     0x1.12cef8p-48f, 0x1.25b7aep-105f, 0.0f, 0.0f, 0x1.a6b87ap-32f, 0x1.0f7d88p-86f,
     0x1.f4805cp-20f, 0x1.bc4508p-85f, 0x1.06f0e6p-122f, 0.0f, 0.0f, 0.0f,
     0x1.986bbap-20f, 0x1.fb4576p-60f, 0x1.4bf714p-52f, 0.0f, 0x1.71e812p-80f,
     0x1.f9520ep-116f, 0x1.e7dc0cp-13f, 0.0f, 0.0f, 0x1.3d6c62p-33f, 0x1.a9bbb2p-15f,
     0.0f, 0.0f, 0.0f, 0x1.4f7c4ep-43f, 0x1.47807p-108f, 0x1.ebf49p-103f,
     0x1.a9501p-110f, 0x1.599fe6p-38f, 0x1.1dc14ap-99f, 0.0f, 0x1.58e8fp-83f,
     0x1.4b59e2p-47f, 0.0f, 0x1.fc08ccp-35f, 0.0f, 0x1.9195cp-67f, 0.0f,
     0x1.02b8f6p-22f, 0.0f, 0.0f, 0x1.8fe192p-10f, 0.0f, 0.0f, 0x1.98a21ap-61f, 0.0f,
     0x1.7ebe78p-9f, 0.0f, 0.0f, 0x1.b77698p-36f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.43ce18p-117f, 0x1.4a06ap-57f, 0x1.ba2c46p-59f, 0x1.ae957p-10f,
     0x1.c67bc4p-71f, 0x1.87a5acp-31f, 0x1.dbea68p-4f, 0.0f, 0x1.dac9d4p-31f, 0.0f,
     0x1.ced15ep-93f, 0x1.3e0602p-54f, 0x1p0f, 0.0f, 0x1.d2f22ap-91f,
     0x1.affa1cp-104f, 0x1.02d81ap-112f, 0x1.765178p-30f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.83a9eap-13f, 0.0f, 0x1.4618b2p-104f, 0x1.6a7ae2p-48f, 0.0f,
     0x1.e50acep-53f, 0x1.96b2aap-29f, 0x1.aae6e6p-54f, 0x1p0f, 0.0f,
     0x1.6ba8d6p-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.08b4fp-126f, 0.0f, 0x1.760214p-27f,
     0.0f, 0.0f, 0x1.a044fp-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6c4344p-75f,
     0x1.4a810ap-81f, 0x1.27a9dp-64f, 0.0f, 0x1.e4fcd8p-67f, 0.0f, 0.0f,
     0x1.d895c6p-70f, 0.0f, 0x1.22f044p-44f, 0.0f, 0.0f, 0x1.2a73ccp-27f, 0.0f, 0.0f,
     0x1.cfc54p-31f, 0x1.75f13cp-126f, 0.0f, 0.0f, 0.0f, 0x1.ccb4fcp-64f, 0.0f, 0.0f,
     0x1.8efaf2p-62f, 0.0f, 0.0f, 0x1.07ddb6p-35f, 0x1.c104c2p-62f, 0.0f, 0.0f, 0.0f,
     0x1.2aad6ep-112f, 0x1.10d30ap-67f, 0x1.d6b46cp-82f, 0.0f, 0.0f, 0x1.d55e5p-28f,
     0x1.66f708p-107f, 0x1.84034cp-48f, 0.0f, 0x1.4ce4ap-37f, 0.0f, 0x1.33afe6p-100f,
     0x1.41b7eap-32f, 0.0f, 0x1.2185fap-56f, 0.0f, 0x1.9367a4p-90f, 0.0f,
     0x1.1cf7b8p-51f, 0x1.93f1f4p-33f, 0.0f, 0.0f, 0x1.44f592p-37f, 0x1.3dec36p-78f,
     0x1.69926ap-30f, 0.0f, 0.0f, 0.0f, 0x1.a7b692p-41f, 0.0f, 0x1.25edbcp-8f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f973fep-31f, 0x1.dcdf7cp-95f, 0.0f, 0x1.907602p-30f,
     0x1.24fe0cp-124f, 0x1.7c5b3ap-62f, 0x1.624b38p-38f, 0x1.56c742p-107f,
     0x1.2d3f44p-118f, 0.0f, 0.0f, 0x1.429222p-95f, 0.0f, 0x1.ac781p-65f, 0.0f, 0.0f,
     0x1.a03676p-3f, 0x1.aa395ap-34f, 0x1.251278p-12f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.be97bep-42f, 0x1.484978p-25f, 0x1.526c26p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5ade48p-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b424dp-57f, 0x1.cc68c6p-46f, 0.0f,
     0x1.21939p-41f, 0x1.34af1ap-4f, 0x1.34eedap-105f, 0x1p0f, 0x1.11c022p-110f, 0.0f,
     0.0f, 0x1.d3367p-77f, 0.0f, 0x1.df506p-19f, 0x1.70921ap-87f, 0.0f, 0.0f,
     0x1.7a04a2p-24f, 0x1.410624p-34f, 0.0f, 0.0f, 0x1.bc453cp-4f, 0.0f,
     0x1.d631dcp-119f, 0x1.a1952ap-123f, 0.0f, 0x1.4a9bb8p-2f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.1ee978p-23f, 0.0f, 0x1.75f726p-86f, 0x1.e37e0cp-2f, 0.0f, 0.0f,
     0x1.c1e6a8p-53f, 0.0f, 0x1.da6422p-30f, 0x1.49acap-101f, 0.0f, 0.0f,
     0x1.d26a24p-66f, 0.0f, 0.0f, 0.0f, 0x1.057444p-115f, 0x1.89ab3p-48f,
     0x1.667716p-78f, 0.0f, 0x1.d81472p-9f, 0x1.221478p-99f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.451056p-90f, 0x1.2830e8p-54f, 0.0f, 0x1.9a9612p-8f, 0.0f, 0x1.8a4032p-116f,
     0x1.564d0ep-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.82b51p-56f, 0x1.2cdf28p-108f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b0403p-10f, 0x1.c0c358p-73f,
     0x1.47d15ap-119f, 0x1.31422p-113f, 0.0f, 0x1.8e285p-46f, 0.0f, 0x1.faf78p-43f,
     0.0f, 0.0f, 0.0f, 0x1.f4d46cp-46f, 0x1.c2a696p-7f, 0.0f, 0.0f, 0.0f,
     0x1.b79e4ep-25f, 0.0f, 0.0f, 0.0f, 0x1.da8918p-17f, 0.0f, 0x1.395bp-91f,
     0x1.82eee8p-44f, 0.0f, 0x1.98e5f2p-18f, 0x1.2170bap-63f, 0x1.df2196p-77f, 0.0f,
     0.0f, 0x1.9ae56ep-111f, 0x1.99f8d6p-64f, 0.0f, 0.0f, 0x1.c78004p-34f,
     0x1.604e64p-93f, 0x1.92777cp-37f, 0.0f, 0x1.96a538p-109f, 0.0f, 0.0f,
     0x1.e7df58p-88f, 0.0f, 0.0f, 0.0f, 0x1.f00ff2p-43f, 0.0f, 0x1.422bcp-109f,
     0x1.b6936cp-121f, 0.0f, 0.0f, 0.0f, 0x1.8c1a66p-62f, 0x1.23c064p-10f, 0.0f,
     0x1.01d61cp-113f, 0.0f, 0x1.8a0ed6p-60f, 0.0f, 0x1.5e548ep-106f, 0x1.24eccap-65f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.04e1b2p-40f, 0.0f, 0x1.2fd56p-111f, 0x1.95118ep-124f,
     0.0f, 0x1.c595c6p-80f, 0x1.a2ee84p-118f, 0.0f, 0x1.c2f968p-126f, 0x1.c53a98p-70f,
     0x1.99e592p-79f, 0x1.17d2eap-74f, 0x1.c33e06p-98f, 0.0f, 0x1.08fe2ep-11f,
     0x1.57de1ep-76f, 0x1.afb036p-47f, 0x1.e24bdp-60f, 0.0f, 0x1.0ead5ep-28f,
     0x1.7565dep-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c13a3cp-7f, 0.0f, 0.0f,
     0x1.4a839p-28f, 0x1.de986ep-90f, 0x1.bd93dep-11f, 0x1.88cca6p-106f, 0x1.017p-24f,
     0x1.2c3d9ap-76f, 0x1.c170acp-43f, 0x1.5e266p-115f
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
            tmp1 = Sleef_expf4_u10kvx(tmp0);
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
    printf("Sleef_expf4_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_expf4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
