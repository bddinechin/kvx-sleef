/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sqrtf8_u35kvx.c --function Sleef_sqrtf8_u35kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 8 --function-input-vector-size 8 --bench \
 *     --no-embedded-bin --target kv3
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
     0x1.2c0afep-67f, 0x1.ca53b6p-39f, 0x1.e49abep-58f, 0x1.2957cep-55f,
     0x1.76277p-102f, 0x1.22abfep-125f, 0.0f, 0.0f, 0x1.3c7c9p-96f, 0x1.ce41bap-101f,
     0x1.218d62p-63f, 0x1.96718ep-126f, 0.0f, 0.0f, 0x1.4ab158p-75f, 0x1.aa9bdap-61f,
     0.0f, 0x1.0efb8ap-53f, 0x1.30b968p-106f, 0.0f, 0x1.c81356p-109f, 0x1.59386p-18f,
     0.0f, 0.0f, 0x1.ece91cp-54f, 0.0f, 0.0f, 0x1.5d6bcp-80f, 0x1.05e6e6p-22f, 0.0f,
     0x1.f17726p-65f, 0x1.1ac986p-93f, 0x1.851956p-42f, 0x1.54354ep-71f, 0.0f, 0.0f,
     0x1.8cca5cp-101f, 0x1.0ee1eap-65f, 0.0f, 0x1.dd6712p-90f, 0.0f, 0.0f, 0.0f,
     0x1.e9a52ep-104f, 0.0f, 0x1.705e64p-14f, 0x1.026232p-65f, 0.0f, 0.0f, 0.0f,
     0x1.025238p-121f, 0x1.c6c982p-114f, 0x1.48ec32p-104f, 0x1.b3e212p-85f,
     0x1.676562p-43f, 0x1.0a2a72p-91f, 0x1.60ffb4p-17f, 0x1.61b898p-10f, 0.0f,
     0x1.3484ecp-82f, 0.0f, 0.0f, 0x1.184b22p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.24481cp-70f, 0x1.36cf66p-99f, 0x1.6628p-35f, 0x1.bbe45cp-65f, 0.0f, 0.0f,
     0.0f, 0x1.313a4p-118f, 0x1.524d74p-91f, 0.0f, 0x1.89da3cp-116f, 0.0f,
     0x1.938e02p-37f, 0x1.756054p-74f, 0x1.5054dp-102f, 0x1.391b5ap-41f, 0.0f, 0.0f,
     0.0f, 0x1.2fa73ep-82f, 0.0f, 0x1.37f41ep-36f, 0x1.2c3aaep-76f, 0.0f, 0.0f,
     0x1.c724c4p-65f, 0x1.19ba0cp-1f, 0.0f, 0.0f, 0x1.4ceb7cp-96f, 0x1.d3858ap-56f,
     0.0f, 0x1.c8f35cp-80f, 0.0f, 0x1.bc6a1p-83f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5d0644p-42f, 0x1.15135ap-115f, 0x1.fcaa6ep-58f, 0x1.5246fep-37f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1d66ccp-19f, 0x1.a50c5cp-91f, 0x1.dc55cap-88f, 0x1.8afafep-77f,
     0x1.a29976p-117f, 0x1.166822p-9f, 0x1.327378p-14f, 0x1.4aa478p-61f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9c60f6p-26f, 0.0f, 0.0f, 0x1.a7e776p-11f, 0.0f,
     0.0f, 0x1.a9f1c8p-57f, 0.0f, 0.0f, 0.0f, 0x1.124304p-62f, 0x1.29d53ep-87f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5a091ap-9f, 0x1.7193f4p-76f,
     0x1.4641dep-77f, 0x1.cb633p-3f, 0.0f, 0x1.2409e8p-20f, 0.0f, 0x1.8c1eb2p-109f,
     0x1.7cf43ap-53f, 0.0f, 0x1.32317ap-42f, 0.0f, 0x1.c6bddcp-49f, 0.0f,
     0x1.a7efdap-81f, 0.0f, 0x1.d560b6p-43f, 0.0f, 0.0f, 0.0f, 0x1.1cb1dep-83f,
     0x1.937cfcp-60f, 0.0f, 0x1.bbd638p-60f, 0.0f, 0.0f, 0.0f, 0x1.63f472p-2f, 0.0f,
     0.0f, 0x1.3a7bdp-72f, 0.0f, 0.0f, 0x1.d92b5ap-24f, 0.0f, 0x1.f9ee42p-98f,
     0x1.8ec5dap-98f, 0.0f, 0x1.23d4e4p-79f, 0x1.e7e70cp-85f, 0.0f, 0x1.2fe0dp-37f,
     0.0f, 0x1.c3b134p-112f, 0x1.3b0cp-101f, 0x1.13bbdp-57f, 0x1.e4f246p-79f,
     0x1.a2d5bp-1f, 0.0f, 0.0f, 0x1.ec46e4p-23f, 0x1.8d994ap-77f, 0x1.2e19f8p-5f,
     0.0f, 0x1.3703f2p-120f, 0x1.51e882p-98f, 0.0f, 0.0f, 0.0f, 0x1.3f6d4cp-30f,
     0x1.9099bep-52f, 0x1.a8adbcp-85f, 0.0f, 0x1.9ad722p-52f, 0x1.034b46p-122f,
     0x1.a56fcep-96f, 0.0f, 0.0f, 0.0f, 0x1.0499ecp-22f, 0.0f, 0x1.051e38p-21f,
     0x1.529a74p-55f, 0x1.11215p-76f, 0x1.6b9914p-50f, 0x1.fa881p-49f,
     0x1.535842p-109f, 0x1.91a634p-126f, 0.0f, 0x1.229182p-110f, 0.0f, 0.0f, 0.0f,
     0x1.d8144ep-81f, 0x1.0756aep-29f, 0x1.858312p-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.59be06p-35f, 0.0f, 0x1.a8358ap-20f, 0.0f, 0x1.7b5b3ap-6f, 0x1.c05788p-42f,
     0x1.ce9518p-102f, 0x1.3dba44p-81f, 0x1.d102ep-10f, 0x1.ae486ep-5f,
     0x1.f7fcd8p-87f, 0x1.f34fc6p-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c6882cp-118f, 0x1.484628p-40f, 0x1.2b4e02p-46f, 0.0f, 0x1.3ab19p-28f,
     0x1.deb24ap-10f, 0x1.67c76ap-56f, 0x1.b15b72p-96f, 0x1.b475cp-62f, 0.0f, 0.0f,
     0.0f, 0x1.c674d6p-98f, 0x1.a2a028p-70f, 0x1.519ad8p-125f, 0.0f, 0.0f,
     0x1.7cd464p-122f, 0.0f, 0x1.a761dcp-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cdba16p-52f,
     0.0f, 0.0f, 0.0f, 0x1.096ca2p-73f, 0.0f, 0x1.3a8accp-42f, 0x1.dbcb2p-28f, 0.0f,
     0x1.8de404p-26f, 0x1.d13c1cp-23f, 0x1.1f10b8p-90f, 0x1.bd2b14p-29f, 0.0f,
     0x1.d3ab76p-23f, 0x1.9262acp-57f, 0.0f, 0x1.08d042p-38f, 0x1.5d002p-85f,
     0x1.bf443ep-27f, 0x1.879918p-121f, 0.0f, 0.0f, 0.0f, 0x1.45c2e4p-52f,
     0x1.ac6b18p-75f, 0x1.58618p-61f, 0x1.5180eap-13f, 0x1.2e9012p-114f,
     0x1.e56406p-124f, 0x1.abf99p-98f, 0x1.e3981ap-26f, 0.0f, 0x1.fb0b04p-104f,
     0x1.9bef26p-98f, 0x1.43d79ap-78f, 0x1.10b76ep-29f, 0x1.cdf51ap-39f, 0.0f, 0.0f,
     0x1.233bbap-69f, 0.0f, 0.0f, 0.0f, 0x1.86277p-68f, 0x1.64c71cp-79f, 0.0f,
     0x1.f5594p-59f, 0x1.1e5cc8p-122f, 0x1.c6c126p-45f, 0x1.a2fff4p-39f,
     0x1.ca5e2ep-2f, 0.0f, 0x1.8dcf7ep-29f, 0x1.30a332p-101f, 0.0f, 0.0f,
     0x1.d2b47cp-29f, 0x1.a2f878p-103f, 0x1.066e4cp-93f, 0.0f, 0.0f, 0.0f,
     0x1.797dd2p-14f, 0.0f, 0.0f, 0.0f, 0x1.7f370ap-14f, 0x1.39cab8p-21f,
     0x1.89b362p-23f, 0x1.893c08p-92f, 0x1.634814p-86f, 0x1.4d535ep-15f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.5841b4p-23f, 0x1.d6c29cp-73f, 0.0f, 0.0f, 0.0f, 0x1.c433a8p-66f,
     0x1.9028cep-103f, 0x1.6b47aap-83f, 0.0f, 0.0f, 0x1.75a074p-61f, 0.0f,
     0x1.9d9e2ap-90f, 0.0f, 0x1.946f1cp-123f, 0x1.fb794cp-73f, 0x1.23e036p-23f, 0.0f,
     0.0f, 0x1.68f446p-101f, 0.0f, 0x1.443246p-112f, 0x1.cf1488p-21f,
     0x1.8222f2p-111f, 0x1.c3c99ap-25f, 0x1.01ad7ep-115f, 0x1.3bca3p-95f, 0.0f, 0.0f,
     0x1.e506d6p-100f, 0.0f, 0.0f, 0.0f, 0x1.385206p-64f, 0x1.d658aap-98f,
     0x1.ba441cp-20f, 0x1.c79fe2p-11f, 0.0f, 0.0f, 0x1.9edfdp-115f, 0.0f, 0.0f,
     0x1.1adcb2p-59f, 0x1.b8764cp-15f, 0x1.865e64p-68f, 0x1.0fae7ap-111f, 0.0f,
     0x1.bdc34ap-2f, 0x1.16fdacp-102f, 0x1.2e6bbap-92f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3cf11p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.26c4d6p-70f, 0.0f,
     0x1.ada798p-116f, 0x1.3fedd6p-70f, 0.0f, 0.0f, 0x1.fe462cp-27f, 0x1.f69d42p-7f,
     0.0f, 0.0f, 0x1.5b9dfap-114f, 0x1.21068p-71f, 0x1.207d0cp-98f, 0x1.d8ce16p-119f,
     0.0f, 0x1.916762p-30f, 0.0f, 0x1.3833b8p-89f, 0.0f, 0.0f, 0.0f, 0x1.3b778ap-91f,
     0.0f, 0.0f, 0x1.812acp-82f, 0.0f, 0.0f, 0x1.d1349cp-61f, 0.0f, 0x1.fcb43p-114f,
     0.0f, 0.0f, 0.0f, 0x1.8ba576p-6f, 0x1.20c31ep-70f, 0x1.e74556p-34f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e56ee4p-106f, 0.0f, 0x1.9340ep-75f, 0.0f, 0.0f, 0x1.a1fd4cp-22f,
     0x1.2d67f8p-93f, 0x1.876a74p-110f, 0.0f, 0.0f, 0x1.e9fa86p-91f, 0.0f, 0.0f, 0.0f,
     0x1.02f822p-118f, 0x1.4cac7ep-98f, 0.0f, 0x1.152bfp-1f, 0.0f, 0.0f,
     0x1.e79998p-69f, 0.0f, 0.0f, 0x1.470c82p-18f, 0.0f, 0.0f, 0.0f, 0x1.8a57aap-53f,
     0.0f, 0.0f, 0.0f, 0x1.8b0566p-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cc9c74p-103f,
     0x1.c0a666p-126f, 0.0f, 0x1.b74c6cp-53f, 0x1.a9186ep-61f, 0x1.99025ap-112f,
     0x1.54a4fep-104f, 0x1.70742ap-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.90cbcap-26f, 0.0f, 0x1.7bf0aep-42f, 0.0f,
     0x1.034f06p-64f, 0x1.90f24ep-8f, 0.0f, 0x1.bff9a4p-119f, 0.0f, 0x1.dc34a2p-76f,
     0x1.c3cafap-22f, 0x1.a1b6aep-89f, 0x1.168608p-78f, 0.0f, 0.0f, 0x1.b3657cp-44f,
     0x1.662e5p-81f, 0.0f, 0.0f, 0.0f, 0x1.b008b4p-21f, 0.0f, 0x1.041684p-13f, 0.0f,
     0x1.b4d424p-82f, 0x1.33bc4p-79f, 0.0f, 0x1.c9f75ep-9f, 0.0f, 0.0f, 0.0f,
     0x1.471c3ap-57f, 0x1.a53fdep-20f, 0x1.7aee96p-119f, 0.0f, 0x1.1dab9ap-22f, 0.0f,
     0.0f, 0.0f, 0x1.bec0ecp-46f, 0.0f, 0x1.7ba29p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ad95f2p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.450ec4p-39f, 0.0f, 0x1.f09fe4p-88f, 0x1.de2d5ap-3f, 0.0f,
     0x1.6924dap-42f, 0x1.430e34p-114f, 0x1.4c1798p-34f, 0x1.b591aap-55f, 0.0f, 0.0f,
     0x1.4b6c5ep-16f, 0.0f, 0x1.859bd2p-48f, 0.0f, 0x1.21c7d6p-53f, 0.0f,
     0x1.12fda8p-19f, 0x1.d4fd1cp-63f, 0x1.90c96p-110f, 0.0f, 0.0f, 0x1.485572p-80f,
     0.0f, 0x1.94747cp-2f, 0x1.40e4d6p-13f, 0x1.fb75bcp-86f, 0x1.5f1afap-99f, 0.0f,
     0.0f, 0x1.801d64p-112f, 0x1.7d9a24p-58f, 0.0f, 0x1.2e5876p-66f, 0x1.f9ced6p-54f,
     0.0f, 0x1.56b5a6p-55f, 0x1.29710ep-12f, 0.0f, 0.0f, 0x1.e4db5ep-118f, 0.0f,
     0x1p0f, 0x1.02c5bap-66f, 0.0f, 0.0f, 0x1.6982c2p-109f, 0x1.dea8bep-110f,
     0x1.629a04p-31f, 0.0f, 0.0f, 0x1.12d07cp-36f, 0x1.a26e7p-7f, 0.0f,
     0x1.62e446p-23f, 0x1.aa1caap-72f, 0x1.971508p-69f, 0x1.efcb6ap-60f, 0.0f,
     0x1.b3247ap-37f, 0.0f, 0x1.51397ap-122f, 0.0f, 0x1.37ba4ap-56f, 0x1.826a4ap-71f,
     0x1.9e92bp-62f, 0x1.4fddep-81f, 0x1.2303bep-2f, 0x1.1c1efep-126f, 0.0f, 0.0f,
     0x1.45c034p-109f, 0.0f, 0.0f, 0x1.32c83ep-30f, 0.0f, 0x1.32986cp-80f, 0.0f, 0.0f,
     0x1.f4e6bp-84f, 0x1.05e0a4p-76f, 0.0f, 0x1.2d3ca8p-35f, 0.0f, 0x1.c9042ep-120f,
     0x1.d21792p-66f, 0.0f, 0.0f, 0x1.f7e2aap-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.028508p-89f, 0x1.5a04f6p-19f, 0x1.6772bap-31f, 0.0f, 0.0f,
     0x1.06051ep-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f3162cp-47f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ba7792p-40f, 0.0f, 0x1.148ac2p-49f, 0x1.f963dcp-111f, 0x1.91d2bep-84f,
     0x1.0f8ecap-74f, 0.0f, 0.0f, 0x1.dbc984p-67f, 0x1.4ca44ap-30f, 0.0f, 0.0f,
     0x1.013938p-26f, 0x1.9ac33ep-96f, 0.0f, 0.0f, 0x1.39ae12p-8f, 0x1.68d30ep-115f,
     0x1.767f02p-124f, 0.0f, 0.0f, 0x1.19533ep-56f, 0x1.9a7384p-117f, 0.0f,
     0x1.7946c4p-14f, 0x1.0cbcaep-25f, 0.0f, 0.0f, 0.0f, 0x1.119e2cp-60f,
     0x1.29ede4p-106f, 0.0f, 0x1.66d83cp-43f, 0.0f, 0x1.91167ep-65f, 0x1.61d04ap-114f,
     0.0f, 0.0f, 0x1.8c9faap-118f, 0x1.3dbee2p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c465a8p-17f, 0x1.bd362ap-37f, 0.0f, 0x1.f19594p-75f, 0x1.018494p-102f,
     0x1.6e9faep-2f, 0x1.104654p-86f, 0.0f, 0x1.1ad118p-47f, 0x1.13276ep-9f,
     0x1.686e98p-81f, 0.0f, 0.0f, 0.0f, 0x1.dbcf32p-96f, 0x1.f52222p-113f,
     0x1.c6791ap-14f, 0.0f, 0x1.9851fp-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4d955ep-91f,
     0x1.ef4626p-61f, 0.0f, 0.0f, 0x1.cf70b2p-77f, 0x1.51356p-112f, 0x1.c42c82p-56f,
     0x1.0f8a16p-125f, 0x1.d1667p-102f, 0.0f, 0x1.48c7cep-2f, 0x1.2261fcp-92f, 0.0f,
     0.0f, 0x1.181396p-3f, 0.0f, 0.0f, 0x1.fbf352p-112f, 0x1.444cc6p-34f,
     0x1.82ffe8p-88f, 0.0f, 0.0f, 0x1.e4c07ep-108f, 0.0f, 0x1.0aa0acp-96f,
     0x1.171b7cp-111f, 0x1.9a3e6ap-86f, 0.0f, 0.0f, 0x1.9f1df2p-55f, 0.0f, 0.0f, 0.0f,
     0x1.554c3p-5f, 0.0f, 0.0f, 0.0f, 0x1.b81336p-118f, 0.0f, 0x1.75aaep-11f, 0.0f,
     0.0f, 0.0f, 0x1.d885b2p-71f, 0.0f, 0.0f, 0x1.3b9c9ap-67f, 0x1.791164p-102f,
     0x1.51268ep-44f, 0.0f, 0.0f, 0x1.7201bcp-82f, 0.0f, 0.0f, 0.0f, 0x1.fdba3ap-115f,
     0x1.577072p-19f, 0.0f, 0.0f, 0x1.b44dcap-53f, 0.0f, 0x1.2009fp-16f, 0.0f, 0.0f,
     0x1.37a2b4p-10f, 0.0f, 0.0f, 0x1.e1ae9cp-40f, 0x1.86b8bcp-126f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.55517p-42f, 0.0f, 0x1.28e4c8p-55f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.04b3aap-75f, 0x1.e6accap-59f, 0x1.f1d842p-67f, 0x1.c1e0aap-27f,
     0x1.b17904p-68f, 0.0f, 0.0f, 0.0f, 0x1.e6e52ep-107f, 0x1.36cab2p-96f,
     0x1.f7faep-124f, 0x1.be61aap-95f, 0.0f, 0x1.c124bcp-102f, 0x1.29647cp-124f,
     0x1.34ddep-44f, 0x1.ce63b6p-67f, 0.0f, 0x1.e6083ep-74f, 0x1.882fbcp-26f, 0.0f,
     0.0f, 0.0f, 0x1.80d1c6p-77f, 0.0f, 0x1.96ca0ap-75f, 0x1.c01172p-122f,
     0x1.ad7aeep-1f, 0.0f, 0x1.f7671ep-1f, 0.0f, 0x1.7333fap-108f, 0x1.8106fp-14f,
     0.0f, 0x1.06ac92p-33f, 0.0f, 0.0f, 0x1.66e79p-59f, 0.0f, 0x1.aaca92p-73f,
     0x1.50b22cp-98f, 0.0f, 0x1.a1d5eap-57f, 0x1.58e5a4p-46f, 0.0f, 0x1.74ac96p-82f,
     0x1.60990ap-71f, 0.0f, 0.0f, 0.0f, 0x1.0d956cp-16f, 0x1.c7285cp-70f, 0.0f,
     0x1.780ce6p-77f, 0.0f, 0.0f, 0x1.cdcf28p-126f, 0.0f, 0x1.cf9cc2p-51f,
     0x1.96ddeep-115f, 0.0f, 0.0f, 0x1.47f916p-39f, 0x1.dfa3aap-30f, 0.0f, 0x1p0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.45b3aap-42f, 0.0f, 0.0f, 0x1.45bda6p-118f,
     0.0f, 0x1.7e6504p-82f, 0x1.b396dep-75f, 0x1.10191p-104f, 0x1.c0e0cp-78f,
     0x1.076be4p-104f, 0x1.30d394p-23f, 0.0f, 0x1.7c2fc8p-20f, 0x1.2602d8p-89f, 0.0f,
     0x1.b27512p-126f, 0.0f, 0x1.de183ap-125f, 0.0f, 0.0f, 0.0f, 0x1.891e26p-3f,
     0x1.b97edcp-4f, 0x1.c0fe3p-126f, 0.0f, 0.0f, 0.0f, 0x1.e86eecp-41f, 0.0f,
     0x1.49e2bap-56f, 0.0f, 0x1.42960ep-76f, 0x1.c4d376p-112f, 0.0f, 0.0f,
     0x1.256f0ep-58f, 0.0f, 0.0f, 0x1.71c002p-27f, 0x1.35f3b8p-102f, 0x1.79eb6p-63f,
     0x1.f6eb66p-44f, 0x1.c97e66p-82f, 0x1.8e6638p-66f, 0x1.8e9bbp-73f,
     0x1.c4921p-36f, 0x1.8a5cd2p-39f, 0x1.fd8946p-14f, 0.0f, 0.0f, 0.0f,
     0x1.f3e562p-58f, 0x1.df71bep-36f, 0.0f, 0.0f, 0.0f, 0x1.3aae6ap-64f,
     0x1.1a20d4p-75f, 0x1.dfa5f4p-45f, 0x1.a34358p-22f, 0x1.b65596p-117f,
     0x1.cf1362p-60f, 0.0f, 0x1.c4f1b2p-56f, 0.0f, 0.0f, 0x1.bc9886p-54f, 0.0f,
     0x1.ce5f88p-24f, 0.0f, 0x1.a30108p-80f, 0.0f, 0x1.24bd16p-87f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a0bae8p-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ea33c8p-23f, 0x1.0c3a62p-67f,
     0x1.ce1164p-112f, 0x1.a5ae6ep-121f, 0x1.92ce4ap-28f, 0.0f, 0.0f, 0.0f,
     0x1.967372p-106f, 0x1.5c9a9cp-108f, 0x1.38d584p-22f, 0.0f, 0.0f, 0x1.b95c5p-16f,
     0x1.f06044p-117f, 0.0f, 0.0f, 0.0f
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
            int32_t tmp3;

            memcpy(&tmp0, ((ml_float8_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            tmp1 = Sleef_sqrtf8_u35kvx(tmp0);
            memcpy(((ml_float8_t*)(external_bench_wrapper_output_table+ i)), &(tmp1), 32);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(8);
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
    cpe_measure = id_tmp / 10080000.0;
    printf("Sleef_sqrtf8_u35kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_sqrtf8_u35kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
