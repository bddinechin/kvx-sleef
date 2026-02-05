/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_fdimf1_purecfma.c --function Sleef_fdimf1_purecfma \
 *     --arity 2 --headers sleef.h,ml_support_lib.h --input-formats \
 *     binary32,binary32 --bench --no-embedded-bin --target kv3
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
     0.0f, 0x1.e2fe8cp-53f, 0.0f, 0x1.aa123cp-112f, 0x1.9e1098p-1f, 0x1.40c37p-48f,
     0.0f, 0x1.4d7b3p-120f, 0.0f, 0x1.112cfp-112f, 0x1.038a88p-117f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e38572p-19f, 0x1.9885dcp-12f, 0.0f, 0.0f, 0x1.7ebc7ap-88f,
     0x1.983176p-24f, 0.0f, 0x1.03fdfap-55f, 0.0f, 0x1.4a6186p-16f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.bd446ep-52f, 0x1.105924p-36f, 0x1.38f1b4p-108f, 0.0f, 0.0f,
     0x1.7a653ap-113f, 0x1.0c3d66p-83f, 0.0f, 0x1.800b6p-49f, 0x1.a25dccp-32f, 0.0f,
     0.0f, 0.0f, 0x1.a21ab4p-6f, 0x1.b7e4p-48f, 0x1.903342p-7f, 0x1.242c9cp-122f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f65098p-106f, 0x1.8254eep-110f,
     0x1.f0512cp-120f, 0x1.7fcb84p-24f, 0.0f, 0x1.5559b2p-80f, 0x1.b73c02p-70f,
     0x1.4f970ep-63f, 0.0f, 0x1.24d81ep-42f, 0.0f, 0x1.79d194p-35f, 0x1.51e032p-43f,
     0.0f, 0x1.788d7p-98f, 0x1.7ab566p-66f, 0.0f, 0x1.5c4aaep-83f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.9979f2p-26f, 0.0f, 0.0f, 0x1.0eebaep-87f,
     0x1.28a58cp-115f, 0.0f, 0.0f, 0x1.221e92p-89f, 0x1.e9927cp-94f, 0x1.537e5cp-106f,
     0x1.b6eeb4p-112f, 0.0f, 0x1.f065e4p-63f, 0x1.d2cb54p-20f, 0.0f, 0x1.da6caep-31f,
     0.0f, 0x1.689932p-73f, 0x1.ab5684p-42f, 0x1.f7d1bap-87f, 0.0f, 0.0f,
     0x1.bad212p-35f, 0.0f, 0x1.a9c32p-123f, 0.0f, 0.0f, 0x1.0b8a68p-103f,
     0x1.f331p-111f, 0.0f, 0.0f, 0x1.edea76p-9f, 0x1.207306p-12f, 0x1.17b9d4p-126f,
     0x1.8fbbp-50f, 0x1.e33d7p-92f, 0.0f, 0x1.a419c4p-7f, 0.0f, 0x1.e9c01ap-85f,
     0x1.783194p-34f, 0.0f, 0x1.9bb3c8p-20f, 0x1.725146p-5f, 0.0f, 0x1.c002d2p-31f,
     0.0f, 0.0f, 0x1.7e5bdep-44f, 0x1.9868cp-126f, 0.0f, 0.0f, 0x1.9d3a1ap-16f, 0.0f,
     0.0f, 0x1.339f7p-81f, 0x1.434138p-45f, 0x1.cd57eep-64f, 0.0f, 0x1.c82c44p-10f,
     0.0f, 0x1.25921cp-27f, 0.0f, 0x1.e272cp-11f, 0x1.464b3ap-60f, 0x1.ec89dcp-120f,
     0x1.dbbdeep-70f, 0x1.581232p-125f, 0.0f, 0.0f, 0x1.ff8fd4p-122f, 0.0f,
     0x1.d39534p-59f, 0.0f, 0x1.81ca78p-73f, 0x1.3254c2p-120f, 0x1.b2ab92p-95f, 0.0f,
     0x1.464c5ap-84f, 0.0f, 0x1.ba0812p-80f, 0.0f, 0x1.e8a1dep-122f, 0.0f,
     0x1.d31e86p-116f, 0x1.7a42d8p-97f, 0.0f, 0x1.933f08p-77f, 0.0f, 0x1.529b9ap-29f,
     0x1.915f4cp-114f, 0x1.3f041p-37f, 0x1.b4f69p-122f, 0.0f, 0x1.62f352p-27f,
     0x1.8af838p-75f, 0.0f, 0x1.a4c25cp-80f, 0x1.ac472ap-28f, 0.0f, 0.0f,
     0x1.4cd33ep-76f, 0.0f, 0x1.a0e35cp-98f, 0.0f, 0.0f, 0x1.a62a2ep-2f, 0.0f,
     0x1.213b62p-70f, 0.0f, 0.0f, 0x1.e7563p-57f, 0.0f, 0x1.74c5eep-126f,
     0x1.e6cb76p-96f, 0x1.95afp-93f, 0x1.8ccde8p-58f, 0.0f, 0x1.5b19fcp-61f, 0.0f,
     0.0f, 0.0f, 0x1.33b442p-126f, 0x1.e31a4p-55f, 0x1.48ade4p-95f, 0.0f,
     0x1.8b6098p-66f, 0.0f, 0x1.cf64f4p-79f, 0x1.512d98p-44f, 0.0f, 0.0f,
     0x1.bf293ap-63f, 0x1.d71ff4p-115f, 0.0f, 0x1.692b02p-15f, 0x1.78563ap-55f,
     0x1.f150dcp-83f, 0x1.76fb5p-54f, 0.0f, 0x1.43191p-3f, 0.0f, 0.0f,
     0x1.1d94a4p-92f, 0.0f, 0x1.65fbe4p-114f, 0x1.887cbcp-95f, 0x1.aea3dp-27f, 0.0f,
     0x1.9be36p-20f, 0x1.077048p-5f, 0x1.9ee38ep-14f, 0.0f, 0.0f, 0x1.54c5c8p-36f,
     0x1.851c58p-110f, 0x1.e4b57ap-39f, 0.0f, 0.0f, 0.0f, 0x1.0b3dfcp-3f, 0.0f,
     0x1.f3f834p-98f, 0x1.4382fep-117f, 0.0f, 0x1.33536p-81f, 0.0f, 0.0f,
     0x1.a01764p-29f, 0x1.1de094p-100f, 0x1.d7c086p-2f, 0.0f, 0x1.d1adc4p-19f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b8607cp-113f, 0.0f, 0.0f, 0.0f,
     0x1.fbc4d2p-115f, 0.0f, 0.0f, 0.0f, 0x1.9f75b6p-106f, 0.0f, 0x1.add266p-113f,
     0.0f, 0.0f, 0.0f, 0x1.b39228p-9f, 0.0f, 0.0f, 0.0f, 0x1.f9f064p-49f,
     0x1.911c28p-77f, 0.0f, 0x1.ec2d84p-86f, 0.0f, 0x1.6e89fep-71f, 0x1.dab792p-115f,
     0.0f, 0x1.04113ep-106f, 0x1.3af8dap-79f, 0.0f, 0x1.0aa3a8p-78f, 0x1.edb244p-91f,
     0x1.992d7ap-119f, 0.0f, 0x1.9adb0cp-56f, 0x1.6b821ep-15f, 0x1.1530e2p-102f,
     0x1.07af44p-21f, 0.0f, 0x1.0218a2p-11f, 0x1.d62b4ep-104f, 0.0f, 0x1.52f6b2p-113f,
     0x1.713fbcp-65f, 0x1.825e1cp-111f, 0.0f, 0.0f, 0x1.6cf90ep-65f, 0.0f,
     0x1.0967bep-26f, 0.0f, 0x1.e75e96p-7f, 0x1.c7b07ap-10f, 0.0f, 0.0f,
     0x1.aa3a92p-53f, 0.0f, 0x1.a85336p-26f, 0x1.22e8c2p-25f, 0.0f, 0x1.d88de2p-52f,
     0.0f, 0.0f, 0.0f, 0x1.b3ad92p-53f, 0x1.9d5796p-43f, 0x1.d568a2p-84f,
     0x1.4791d8p-46f, 0.0f, 0x1.c2286ap-119f, 0x1p0f, 0.0f, 0.0f, 0x1.c39306p-94f,
     0.0f, 0x1.f44dap-126f, 0x1.c03354p-113f, 0x1.b3ff8p-27f, 0x1.26dfdp-98f,
     0x1.0d9698p-35f, 0x1.8637e4p-70f, 0x1.903ffap-56f, 0x1.682f8p-24f, 0.0f,
     0x1.b8d608p-41f, 0x1.49cd78p-68f, 0x1.eb96acp-67f, 0.0f, 0.0f, 0x1.a9984p-97f,
     0x1.048b04p-36f, 0.0f, 0x1.e86206p-87f, 0x1.730acp-13f, 0.0f, 0x1.78763ep-16f,
     0.0f, 0.0f, 0.0f, 0x1.e4588p-11f, 0.0f, 0.0f, 0x1.0c0d6cp-123f, 0.0f, 0.0f,
     0x1.ed32fap-58f, 0.0f, 0x1.b188dcp-72f, 0.0f, 0x1.b5fee2p-20f, 0.0f,
     0x1.c70188p-33f, 0.0f, 0x1.6b52d4p-118f, 0x1.8251fep-96f, 0x1.a46cf8p-85f, 0.0f,
     0.0f, 0.0f, 0x1.cc37eap-64f, 0x1.6d934ap-94f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.19944p-42f, 0.0f, 0.0f, 0x1.fbb3e8p-47f, 0.0f, 0.0f, 0x1.df1f8ep-58f, 0.0f,
     0x1.31af1ep-3f, 0x1.d7e2c4p-53f, 0.0f, 0.0f, 0.0f, 0x1.7d2468p-59f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.77268cp-62f, 0x1.50ef3ap-91f, 0x1.1221b2p-108f,
     0x1.b03e62p-33f, 0x1.7be94ap-60f, 0x1.0f7a9ap-57f, 0.0f, 0x1.bd1bbep-70f,
     0x1.11ac54p-47f, 0x1.735c34p-122f, 0.0f, 0x1.c909aep-90f, 0x1.e31c94p-11f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.91ec1p-59f, 0x1.d4ca78p-108f, 0x1.b2979ap-43f,
     0x1.3cdf3p-95f, 0.0f, 0.0f, 0.0f, 0x1.8f0e8ep-126f, 0.0f, 0x1.b8d8bep-105f,
     0x1.41d012p-101f, 0x1.a3b4f2p-3f, 0.0f, 0.0f, 0x1.555286p-29f, 0.0f,
     0x1.32d0f8p-3f, 0x1.093fap-61f, 0x1.b4d27ep-25f, 0.0f, 0x1.920d98p-70f,
     0x1.d0e798p-81f, 0.0f, 0x1.96460ep-16f, 0x1.65882p-81f, 0.0f, 0.0f,
     0x1.57535ap-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4e9ee6p-99f, 0x1.fe0faep-105f,
     0x1.a093eep-47f, 0x1.fae096p-8f, 0.0f, 0x1.8758dp-116f, 0.0f, 0.0f,
     0x1.574bc2p-113f, 0x1.57fa16p-37f, 0x1.ed3444p-35f, 0.0f, 0x1.db4c5cp-113f, 0.0f,
     0.0f, 0x1.c2607cp-37f, 0x1.d36f7p-4f, 0.0f, 0.0f, 0x1.f0b8acp-88f,
     0x1.4159eep-104f, 0.0f, 0.0f, 0x1.a22832p-10f, 0.0f, 0.0f, 0x1.750624p-119f,
     0.0f, 0x1.3a5eap-119f, 0x1.dfda74p-22f, 0x1.7366a4p-20f, 0x1.86aceap-52f, 0.0f,
     0x1.b27512p-99f, 0.0f, 0.0f, 0x1.e0788p-118f, 0x1.d494e4p-67f, 0.0f, 0.0f, 0.0f,
     0x1.2de5eep-18f, 0.0f, 0x1.a7479ep-57f, 0x1.bef104p-71f, 0.0f, 0.0f,
     0x1.93b642p-112f, 0x1.95ae96p-107f, 0.0f, 0x1.1ab738p-117f, 0.0f, 0.0f, 0.0f,
     0x1.55afd4p-98f, 0x1.e4c8fep-96f, 0.0f, 0.0f, 0.0f, 0x1.c33978p-115f, 0.0f, 0.0f,
     0.0f, 0x1.d980a6p-115f, 0x1.7e911cp-59f, 0x1.8f3f5ap-5f, 0x1.07cd8cp-98f, 0.0f,
     0.0f, 0x1.25824p-5f, 0x1.22f38p-116f, 0x1.aa2282p-40f, 0.0f, 0x1.ae479cp-28f,
     0x1.1cd37ap-41f, 0.0f, 0.0f, 0.0f, 0x1.5d29e4p-5f, 0x1.bed99ep-10f, 0.0f,
     0x1.2ee64cp-118f, 0x1.4252b6p-10f, 0.0f, 0.0f, 0.0f, 0x1.922276p-61f,
     0x1.bfc1aep-24f, 0x1.24f4acp-87f, 0x1.7c71fap-85f, 0x1.2d6f48p-120f,
     0x1.8156d4p-37f, 0x1.c5981p-29f, 0x1.0047d2p-48f, 0.0f, 0x1.2b698cp-40f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.db5c6ap-49f, 0.0f, 0x1.3dd716p-30f,
     0x1.78ee2ap-43f, 0.0f, 0.0f, 0x1.7eb546p-72f, 0x1.b6ed5p-95f, 0.0f, 0.0f, 0.0f,
     0x1.41f74cp-15f, 0.0f, 0x1.b2ce7cp-107f, 0x1.ba494p-86f, 0x1.211056p-62f, 0.0f,
     0.0f, 0x1.3f5b28p-13f, 0x1.f49a4p-82f, 0.0f, 0.0f, 0.0f, 0x1.85f2cap-74f,
     0x1.e356dap-79f, 0.0f, 0x1.3bf6dep-102f, 0x1.eb7df8p-26f, 0x1.9ac846p-106f,
     0x1.f788fcp-89f, 0x1.79ea28p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9f13dcp-36f,
     0.0f, 0.0f, 0x1.66cdb2p-78f, 0.0f, 0x1.8b9a26p-116f, 0.0f, 0x1.70d4dap-84f, 0.0f,
     0.0f, 0x1.87a94p-63f, 0x1.676932p-77f, 0.0f, 0.0f, 0x1.d000e4p-95f, 0.0f,
     0x1.fafd5ap-103f, 0x1.34a926p-120f, 0.0f, 0x1.da1c8cp-108f, 0.0f, 0.0f,
     0x1.f45294p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bb760cp-78f, 0.0f, 0.0f,
     0x1.9246p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9fd938p-23f, 0.0f, 0x1.ef78a2p-64f,
     0x1.7c5596p-80f, 0x1.cf4c08p-58f, 0x1.20e304p-67f, 0x1.ffe5ecp-25f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.2f293p-17f, 0x1.3bcd12p-49f, 0.0f, 0.0f, 0x1.8d8e06p-115f,
     0x1.e0d84cp-80f, 0x1.8f36b2p-2f, 0.0f, 0.0f, 0.0f, 0x1.c08a98p-66f,
     0x1.72fb3cp-79f, 0x1.1e1d98p-4f, 0x1.44948ep-115f, 0.0f, 0.0f, 0.0f,
     0x1.648f24p-56f, 0.0f, 0x1.29c7c8p-114f, 0x1.6d5a6cp-63f, 0.0f, 0x1.7fbbbep-46f,
     0x1.fb458ap-119f, 0.0f, 0.0f, 0.0f, 0x1.36d72ep-18f, 0.0f, 0.0f, 0x1.d7ee1p-74f,
     0.0f, 0.0f, 0x1.6fa658p-51f, 0x1.befe26p-76f, 0.0f, 0.0f, 0x1.9b8eb6p-5f, 0.0f,
     0.0f, 0x1.25105ep-114f, 0.0f, 0x1.290ca2p-74f, 0x1.571f2p-124f, 0.0f,
     0x1.0aa6eap-78f, 0.0f, 0x1.94ba02p-47f, 0.0f, 0x1.546404p-108f, 0x1.e98696p-12f,
     0x1.733c9ap-2f, 0x1.08f7bap-36f, 0x1.74143ep-27f, 0x1.863176p-93f, 0x1p0f, 0.0f,
     0x1.0a1f72p-38f, 0x1.4b4788p-61f, 0x1.fd3ccep-46f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ce996ep-118f, 0.0f, 0.0f, 0.0f, 0x1.fa4a64p-64f, 0x1.cc3526p-120f,
     0x1.e7c5a6p-63f, 0x1.dbe1ccp-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f0870ap-72f,
     0x1.5679e4p-13f, 0.0f, 0x1.1f7bcap-60f, 0x1.c36a4ap-117f, 0x1.9776b8p-107f, 0.0f,
     0x1.c8369ep-95f, 0.0f, 0x1.fea8a4p-119f, 0x1.6a26bap-73f, 0x1.1e9632p-93f, 0.0f,
     0.0f, 0x1.f92be6p-45f, 0.0f, 0.0f, 0x1.8a8712p-117f, 0x1.307476p-59f, 0.0f, 0.0f,
     0x1.71d0d4p-29f, 0.0f, 0.0f, 0.0f, 0x1.3af3ep-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.86890ap-88f, 0x1.3448cap-39f, 0x1.aa1dc6p-47f, 0x1.4640aep-88f,
     0x1.469fd2p-90f, 0.0f, 0x1.eb868p-76f, 0x1.9f9614p-84f, 0x1.62fd6p-55f,
     0x1.73c9c6p-39f, 0.0f, 0.0f, 0x1.a6ea2ep-85f, 0x1p0f, 0.0f, 0x1.cd362ep-104f,
     0x1.32abp-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.faa7d2p-66f,
     0x1.17a5dep-22f, 0x1.e1dd32p-7f, 0x1.e41ebap-107f, 0.0f, 0x1.f15d4p-44f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a90c08p-121f, 0x1.0e378ap-36f, 0x1.0d5108p-105f, 0.0f,
     0x1.016348p-42f, 0.0f, 0x1.555366p-19f, 0.0f, 0.0f, 0x1.86667ap-18f,
     0x1.7ba26cp-33f, 0x1.9915fp-27f, 0x1.3fe286p-74f, 0x1.cce98cp-27f,
     0x1.b949b8p-124f, 0x1.ae7316p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b34d72p-40f,
     0x1.c8bdbp-87f, 0x1.76b7bcp-78f, 0.0f, 0.0f, 0x1.a9d5a2p-122f, 0.0f, 0.0f, 0.0f,
     0x1.40bfdp-4f, 0x1.29ab5ep-28f, 0.0f, 0x1.2620e6p-67f, 0.0f, 0x1.6070a8p-23f,
     0x1.5acafap-49f, 0.0f, 0x1.d295e2p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fab54ep-92f,
     0x1.246d6ep-47f, 0x1.fa67f4p-82f, 0.0f, 0x1.6acc64p-39f, 0x1.566ddep-97f, 0.0f,
     0.0f, 0.0f, 0x1.eecea2p-61f, 0x1.ef1c5ep-121f, 0x1.638828p-26f, 0x1.a8c152p-17f,
     0.0f, 0x1.e3d3a6p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.50c8b8p-115f, 0.0f,
     0x1.e0463p-9f, 0.0f, 0x1.26c59ep-51f, 0x1.3e23a8p-57f, 0x1.8ba70cp-1f, 0.0f,
     0.0f, 0.0f, 0x1.937b44p-6f, 0x1.6e5dd2p-118f, 0x1.cf32aep-53f, 0.0f,
     0x1.f7307ap-89f, 0x1.996d2ep-110f, 0.0f, 0x1.bebe28p-64f, 0.0f, 0x1.3180e8p-81f,
     0x1.0be88cp-60f, 0.0f, 0x1.35e49p-74f, 0x1.b24ec6p-119f, 0.0f, 0x1.8989b8p-45f,
     0x1p0f, 0.0f, 0x1.5afd6ep-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.07d3p-17f, 0x1.dabf66p-33f, 0.0f, 0x1.673bd6p-97f, 0.0f, 0.0f,
     0x1.f4c556p-103f, 0.0f, 0x1.a74dcep-76f, 0x1.ede62ep-115f, 0.0f, 0x1.aad092p-38f,
     0x1.ccc52ep-111f, 0.0f, 0.0f, 0.0f, 0x1.2aa082p-16f, 0x1.76927ap-118f, 0.0f,
     0.0f, 0x1.c45d62p-35f, 0.0f, 0.0f, 0x1.a2c78cp-2f, 0x1.112b4p-68f,
     0x1.55f3eap-55f, 0x1.0ff494p-95f, 0x1.1c5c9ap-1f, 0.0f, 0.0f, 0.0f,
     0x1.0d2716p-68f, 0x1.3708fp-126f, 0x1.287df8p-48f, 0x1.b39934p-44f,
     0x1.b1055p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5954f2p-98f, 0.0f, 0.0f,
     0x1.eb3968p-63f, 0.0f, 0.0f, 0.0f, 0x1.64240ep-67f, 0x1.bc7adep-63f, 0.0f,
     0x1.ff0a5cp-116f, 0x1.bc7bc8p-40f, 0.0f, 0x1.2b736ep-73f, 0x1.8925d8p-34f,
     0x1.1a9436p-52f, 0.0f, 0.0f, 0x1.bd182cp-94f, 0.0f, 0.0f, 0.0f, 0x1.a82fb8p-60f,
     0x1.3010cp-80f, 0x1.d82486p-10f, 0x1.4a51fap-26f, 0.0f, 0.0f, 0x1.c19266p-73f,
     0x1.d4764ep-84f, 0.0f, 0x1.1ef0a4p-49f, 0x1.933dd8p-112f, 0.0f, 0.0f,
     0x1.4c2986p-51f, 0.0f, 0x1.09446ep-37f, 0.0f, 0x1.448c94p-43f, 0x1.db502ep-16f,
     0.0f, 0.0f, 0x1.a003c2p-72f, 0x1.81fcacp-37f, 0.0f, 0.0f, 0x1.febcf8p-40f,
     0x1.f49cep-2f, 0x1.6d762cp-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1b0c2ep-68f, 0x1.ae0976p-77f, 0x1.9cf998p-32f, 0x1.4faf2cp-12f,
     0x1.a63bb4p-81f, 0x1.1f0a94p-108f, 0x1.bdb6dep-83f, 0x1.e2dbe2p-49f,
     0x1.ac4274p-14f, 0.0f, 0.0f, 0x1.fb1a3p-115f, 0.0f, 0.0f, 0x1.387a26p-59f,
     0x1.1f890ep-111f, 0x1.27b988p-77f, 0x1.42b022p-106f, 0.0f, 0x1.31c92p-99f, 0.0f,
     0x1.fe0f5ap-91f, 0.0f, 0x1.14d51ep-35f, 0.0f, 0.0f, 0.0f, 0x1.8b9becp-83f, 0.0f,
     0x1.0cadc4p-35f, 0.0f
};
static const float external_bench_wrapper_input_table_arg1[1001]  = {
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fc6be8p-26f,
     0x1.d15e7cp-25f, 0.0f, 0x1.44e1bap-2f, 0.0f, 0.0f, 0x1.f6a5ap-87f, 0.0f,
     0x1.5531fap-79f, 0.0f, 0.0f, 0x1.fe3c06p-89f, 0x1.fa2022p-56f, 0.0f, 0.0f,
     0x1.7ca726p-29f, 0x1.324d5ep-98f, 0x1.71c36ap-103f, 0.0f, 0.0f, 0x1.05845p-35f,
     0x1.30b224p-126f, 0x1.58931ap-34f, 0.0f, 0x1.4c072p-20f, 0x1.e25ac8p-113f, 0.0f,
     0x1.467c36p-84f, 0x1.29f47ap-103f, 0.0f, 0.0f, 0.0f, 0x1.cc09eep-74f,
     0x1.25c098p-26f, 0x1.4c4e0cp-25f, 0x1.12f6a6p-75f, 0x1.98534cp-79f, 0.0f, 0.0f,
     0x1.abc5ccp-26f, 0x1.3bc75cp-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.be27e8p-104f, 0.0f, 0x1.b82912p-82f, 0.0f, 0x1.b61f98p-68f, 0.0f, 0.0f,
     0x1.902bf2p-42f, 0.0f, 0x1.9185b8p-105f, 0.0f, 0x1.01c3c8p-82f, 0x1.9dd83ap-28f,
     0x1.42cf52p-108f, 0x1.fa44b4p-98f, 0x1.1446bap-67f, 0.0f, 0.0f, 0x1.01988p-38f,
     0.0f, 0.0f, 0x1.6a6b08p-106f, 0.0f, 0.0f, 0x1.e73af4p-66f, 0x1.030a7ap-104f,
     0.0f, 0x1.94287ep-111f, 0x1.d87152p-114f, 0x1.08b774p-86f, 0.0f,
     0x1.ac21e4p-107f, 0x1.cbc0cp-76f, 0.0f, 0.0f, 0x1.273edep-113f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.7faf7cp-79f, 0.0f, 0.0f, 0x1.33a448p-51f, 0x1.648082p-11f,
     0x1.f7d604p-75f, 0x1.2c4a02p-37f, 0x1.30468p-86f, 0x1.b75e84p-51f,
     0x1.7c821p-86f, 0.0f, 0x1.d3f6acp-81f, 0x1.b279eep-47f, 0.0f, 0x1.5dee0ep-122f,
     0x1.6ba896p-34f, 0x1.c6410ep-45f, 0x1.f9997ep-23f, 0x1.f82ed8p-49f,
     0x1.5d6492p-61f, 0.0f, 0x1.c6c632p-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c37882p-91f,
     0x1.e31924p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ee501cp-12f, 0.0f, 0.0f,
     0x1.c1709ep-20f, 0.0f, 0x1.e7621p-97f, 0x1.4deefep-50f, 0.0f, 0x1.eb71bcp-12f,
     0.0f, 0x1.01a83ap-34f, 0x1.08847cp-121f, 0x1.6bac98p-87f, 0.0f, 0.0f, 0.0f,
     0x1.58b71p-52f, 0x1.8de77p-90f, 0.0f, 0x1.2375fcp-86f, 0.0f, 0x1.65d27ep-47f,
     0x1.57f11ep-88f, 0.0f, 0x1.6116ep-119f, 0x1.a1999cp-62f, 0.0f, 0.0f,
     0x1.277fp-39f, 0x1.32c43ep-4f, 0x1.d0dc64p-59f, 0x1.eced3ep-86f,
     0x1.99588cp-110f, 0x1.c03898p-73f, 0.0f, 0.0f, 0x1.473814p-39f, 0x1.77726cp-6f,
     0.0f, 0.0f, 0.0f, 0x1.9e14dp-17f, 0.0f, 0x1.95310cp-9f, 0x1.9f5a78p-20f,
     0x1.812f18p-62f, 0x1.78ca82p-11f, 0x1.ac919ep-87f, 0.0f, 0x1.a74a0cp-123f,
     0x1.45f7e2p-81f, 0x1.0d51cep-36f, 0x1.72a2a6p-97f, 0x1.d423fcp-75f, 0.0f, 0.0f,
     0.0f, 0x1.3e7deep-105f, 0x1.f83dc2p-109f, 0.0f, 0.0f, 0x1.afd0cp-49f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.41658p-51f, 0.0f, 0x1.ac21p-38f, 0x1.ecc9acp-76f, 0x1.defe7cp-2f,
     0.0f, 0x1.560132p-35f, 0x1.4b0182p-117f, 0.0f, 0.0f, 0.0f, 0x1.3e8e3cp-79f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d2d88ep-68f, 0x1.eb0afcp-23f, 0x1.5221fap-30f, 0.0f,
     0x1.d44874p-72f, 0.0f, 0.0f, 0.0f, 0x1.5a2564p-38f, 0.0f, 0x1.16b914p-11f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a79622p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.69308cp-99f,
     0x1.bf75d6p-103f, 0x1.0bda7p-28f, 0.0f, 0x1.962be8p-25f, 0x1.483b66p-90f, 0.0f,
     0.0f, 0x1.747cecp-69f, 0.0f, 0x1.917264p-49f, 0.0f, 0x1.252e3ep-10f,
     0x1.772bdap-76f, 0.0f, 0.0f, 0.0f, 0x1.c16a58p-30f, 0x1.d35c2ep-2f, 0.0f, 0.0f,
     0x1.90bdeep-9f, 0.0f, 0x1.1b482ep-23f, 0.0f, 0.0f, 0x1.c2c834p-53f, 0x1p0f,
     0x1.81593cp-30f, 0.0f, 0.0f, 0.0f, 0x1.fa41ecp-48f, 0x1.f27a7cp-19f, 0.0f, 0.0f,
     0x1.b16a0ep-3f, 0.0f, 0x1.f7c238p-97f, 0.0f, 0x1.e49a3cp-24f, 0x1.e5e1dp-80f,
     0.0f, 0.0f, 0x1.0be92ap-64f, 0x1.a37b0ep-67f, 0.0f, 0x1.8ea464p-99f,
     0x1.8f6748p-65f, 0x1.79ac6ap-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.397164p-86f, 0.0f, 0x1.654806p-104f, 0.0f, 0x1.a575ccp-96f, 0x1.11ccbap-79f,
     0x1.18ea9cp-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a8a626p-46f,
     0.0f, 0.0f, 0x1.dd376ap-89f, 0x1.1e5322p-107f, 0.0f, 0.0f, 0x1.55ab86p-75f, 0.0f,
     0x1.543c5ap-97f, 0.0f, 0.0f, 0x1.0866dep-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.221778p-121f, 0.0f, 0.0f, 0x1.b4badep-49f, 0x1.280004p-29f, 0.0f,
     0x1.1c94ccp-46f, 0.0f, 0.0f, 0x1.886ac2p-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a9fa8cp-111f, 0.0f, 0.0f, 0x1.4e768cp-119f, 0x1.1d5438p-71f,
     0.0f, 0x1.1f392p-68f, 0.0f, 0x1.bc5df2p-118f, 0x1.4cf488p-71f, 0.0f,
     0x1.84276ep-45f, 0x1.d23f14p-25f, 0x1.2e71cep-53f, 0.0f, 0.0f, 0.0f,
     0x1.006246p-124f, 0.0f, 0x1.113f52p-67f, 0x1.dbe54ep-40f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.5f32d2p-58f, 0x1.7ccd64p-38f, 0x1.48263ap-126f, 0x1.dfdb1ap-22f, 0.0f,
     0.0f, 0x1.15d792p-26f, 0.0f, 0.0f, 0x1.a29ec4p-101f, 0.0f, 0.0f, 0x1.bc2e96p-61f,
     0.0f, 0.0f, 0x1.a800eap-23f, 0.0f, 0.0f, 0x1.2570fp-38f, 0.0f, 0.0f, 0.0f,
     0x1.f8e81cp-73f, 0.0f, 0.0f, 0x1.957928p-19f, 0x1.9024d2p-66f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.bc56bep-14f, 0x1.a415a2p-104f, 0.0f, 0x1.9422e2p-84f,
     0x1.27644p-58f, 0x1.20d8cep-65f, 0x1.6c5a7p-113f, 0x1.0ea64ap-8f, 0x1.f7bb1p-84f,
     0x1.09fdf6p-53f, 0x1.4f5ed8p-6f, 0x1.32e79ep-73f, 0.0f, 0.0f, 0x1.fd5d08p-2f,
     0x1.b55c76p-91f, 0x1.87a2bap-42f, 0x1.85a72ep-30f, 0.0f, 0x1.4cd046p-100f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f15dbcp-60f, 0x1.7540b6p-55f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b032ecp-112f, 0.0f, 0.0f, 0x1.dbf64p-84f, 0.0f, 0x1.e2aa1ap-26f,
     0x1.8256f4p-6f, 0x1.842a84p-74f, 0.0f, 0x1.3a555ep-49f, 0x1.1cf54ep-81f,
     0x1.b7ce16p-115f, 0.0f, 0.0f, 0x1.75195p-26f, 0x1.7730fp-106f, 0x1.899bbcp-46f,
     0x1.5953fcp-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b721f6p-18f, 0x1.c522eep-16f, 0.0f,
     0x1.99ef62p-7f, 0x1.1bd108p-2f, 0.0f, 0.0f, 0x1.fadaeap-4f, 0x1.5abcccp-34f,
     0x1.1ed79ep-114f, 0x1.939016p-72f, 0x1.0980c6p-6f, 0x1.82682p-6f, 0.0f, 0.0f,
     0.0f, 0x1.055358p-47f, 0.0f, 0.0f, 0x1.e4681ap-28f, 0x1.6dfa14p-12f, 0.0f, 0.0f,
     0x1.ef0cd2p-3f, 0x1.67cc74p-50f, 0x1.58758ep-111f, 0x1.440bf4p-45f,
     0x1.43f272p-79f, 0.0f, 0x1.5d7be8p-14f, 0x1.04bff2p-22f, 0.0f, 0.0f, 0.0f,
     0x1.7599ccp-124f, 0.0f, 0x1.10b1a8p-69f, 0.0f, 0x1.99610cp-30f, 0.0f, 0.0f,
     0x1.4195fp-2f, 0x1.d7db0cp-61f, 0.0f, 0x1.f40c3p-96f, 0.0f, 0x1.2e5bbcp-104f,
     0.0f, 0x1.ef23d6p-108f, 0x1.b58822p-10f, 0x1.78a7c8p-39f, 0x1.9b6ecp-36f, 0.0f,
     0x1.846f52p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.86262p-31f, 0.0f, 0.0f,
     0x1.815f52p-89f, 0.0f, 0x1.36d2c2p-36f, 0x1.cf0178p-7f, 0.0f, 0x1.569dd2p-106f,
     0.0f, 0.0f, 0x1.7a6878p-122f, 0x1.ccbb1cp-16f, 0.0f, 0.0f, 0.0f,
     0x1.d05c86p-111f, 0x1.407816p-48f, 0x1.02b2fep-95f, 0.0f, 0.0f, 0x1.3a0f0ep-14f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.39bd8p-4f, 0x1.33518p-17f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b41e3cp-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ad2b78p-38f, 0.0f, 0x1.66f91p-116f,
     0.0f, 0.0f, 0x1.1fc29ap-83f, 0x1.e18938p-33f, 0.0f, 0.0f, 0x1.ea8d36p-116f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.6f497ep-30f, 0x1.30fad8p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d81362p-68f, 0.0f, 0.0f, 0.0f, 0x1.a9d78p-60f, 0.0f, 0x1p0f, 0.0f,
     0x1.e837f8p-70f, 0x1.43a3aap-64f, 0x1.381d2ep-53f, 0x1.66ecaap-51f, 0.0f,
     0x1.eaa82ap-26f, 0x1.9773fap-85f, 0.0f, 0x1.9ad546p-3f, 0x1.c44f44p-39f,
     0x1.bf7e9ap-125f, 0.0f, 0.0f, 0x1.ce528ep-68f, 0x1.ad7c1ep-111f, 0.0f,
     0x1.c5cbeap-65f, 0x1.ad9d2p-27f, 0.0f, 0x1.b1c84cp-68f, 0x1.c02a0ep-126f, 0.0f,
     0.0f, 0x1.f33268p-75f, 0.0f, 0x1.0468b6p-14f, 0x1.8699a4p-120f, 0.0f,
     0x1.451ca4p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1931a2p-80f, 0x1.f2a5bap-90f,
     0x1.d958aap-54f, 0x1.9480eap-39f, 0.0f, 0x1.79b4fap-77f, 0x1.5c6d8p-124f,
     0x1.569d0cp-63f, 0x1.cae23p-61f, 0x1.1c53a4p-21f, 0.0f, 0x1.48647ap-12f, 0.0f,
     0x1.020922p-73f, 0.0f, 0x1.9047d2p-83f, 0.0f, 0x1.b305p-99f, 0.0f, 0.0f,
     0x1.1af3a6p-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f6b14p-48f, 0x1.f57aa2p-13f, 0.0f,
     0.0f, 0x1.03bdacp-101f, 0x1.3b09c4p-81f, 0.0f, 0x1.cdf63ap-111f, 0.0f, 0.0f,
     0x1.3b0daap-90f, 0x1.91b84ep-7f, 0.0f, 0.0f, 0x1.63e93p-33f, 0.0f, 0.0f,
     0x1.124dc8p-40f, 0x1.a8dc2ep-46f, 0.0f, 0x1.d6a6d8p-116f, 0x1.ac627cp-21f,
     0x1.c328e6p-103f, 0.0f, 0.0f, 0x1.078b9ep-63f, 0x1.edb2cep-50f, 0.0f, 0.0f,
     0x1.0ba3e4p-92f, 0.0f, 0.0f, 0x1.3b4fe6p-76f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ccd58cp-27f, 0.0f, 0x1.b609e4p-97f, 0x1.d4415p-19f, 0x1.03b652p-76f, 0.0f,
     0.0f, 0x1.b94c4cp-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dbfa82p-81f, 0x1.f587e2p-15f,
     0.0f, 0x1.b2d124p-65f, 0.0f, 0.0f, 0x1.3db532p-94f, 0.0f, 0x1.0ede4cp-42f, 0.0f,
     0x1.441bfcp-36f, 0.0f, 0.0f, 0x1.80e66ep-71f, 0.0f, 0.0f, 0x1.6da89p-53f,
     0x1.8aaed6p-58f, 0.0f, 0.0f, 0x1.db692p-19f, 0x1.6232aep-69f, 0x1.55ac7p-118f,
     0x1.5033eep-105f, 0x1.255a3cp-67f, 0x1.59f08ep-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d5134cp-20f, 0x1.d09f94p-84f, 0x1.d6abd4p-98f, 0.0f, 0.0f, 0.0f,
     0x1.cac76p-15f, 0x1.b3076cp-125f, 0.0f, 0x1.bcaf4p-51f, 0.0f, 0x1.c06748p-70f,
     0.0f, 0.0f, 0x1.f3c88cp-123f, 0x1.e23c86p-89f, 0.0f, 0x1.34fa54p-1f, 0.0f, 0.0f,
     0x1.8c236p-40f, 0x1.04111p-104f, 0x1.f86a9cp-27f, 0x1.95dfb2p-46f,
     0x1.65b3d4p-85f, 0x1.77a164p-4f, 0x1.d45b1cp-118f, 0x1.800e2p-121f, 0.0f, 0.0f,
     0.0f, 0x1.5beddep-79f, 0.0f, 0.0f, 0.0f, 0x1.856b28p-49f, 0.0f, 0.0f,
     0x1.29b3ap-22f, 0x1.b5e44cp-52f, 0.0f, 0x1.23082p-94f, 0.0f, 0x1.444702p-58f,
     0x1p0f, 0.0f, 0x1.f1ee82p-115f, 0.0f, 0.0f, 0.0f, 0x1.27a308p-7f, 0x1.b0b77p-28f,
     0.0f, 0.0f, 0x1.beca38p-12f, 0.0f, 0x1.b4dcaap-88f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8e019cp-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6df348p-35f, 0x1.516a3ap-75f,
     0.0f, 0x1.d7eb3p-98f, 0x1.bb6e34p-18f, 0x1.9f8436p-113f, 0x1.949102p-121f, 0.0f,
     0.0f, 0x1.44ccecp-44f, 0.0f, 0.0f, 0x1.b0b6acp-109f, 0.0f, 0x1.23ep-96f, 0.0f,
     0.0f, 0x1.fdb1ecp-77f, 0.0f, 0.0f, 0x1.a80f62p-70f, 0x1.cdfef2p-115f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a467ep-39f, 0.0f, 0.0f, 0x1.4591eep-94f, 0x1.f22e28p-19f,
     0.0f, 0.0f, 0.0f, 0x1.4f3608p-10f, 0.0f, 0.0f, 0x1.0be6e6p-63f, 0x1.d2ceeap-117f,
     0x1.a8cf48p-99f, 0x1.e6ba94p-42f, 0x1.8fbeb6p-42f, 0x1.60ca84p-58f,
     0x1.1402e6p-19f, 0.0f, 0x1.355016p-71f, 0.0f, 0x1.415ba2p-68f, 0x1.642e72p-82f,
     0x1.c8fap-13f, 0x1.720a6p-24f, 0.0f, 0.0f, 0x1.c41d7ep-107f, 0.0f,
     0x1.9f1c18p-64f, 0x1.4b3444p-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.64dadep-43f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.4893e2p-4f, 0x1.91edf6p-117f, 0x1.059a28p-104f, 0.0f,
     0x1.00f848p-49f, 0x1.42ffecp-78f, 0.0f, 0.0f, 0.0f, 0x1.4d69b2p-32f, 0.0f,
     0x1.cf1032p-34f, 0x1.04fd3p-94f, 0.0f, 0.0f, 0x1.c88c38p-71f, 0x1.954c1p-6f,
     0x1.50e376p-63f, 0x1.d02a76p-70f, 0x1.569dep-77f, 0x1.ccac76p-68f,
     0x1.789a14p-38f, 0x1.b124aep-22f, 0.0f, 0.0f, 0x1.3c9986p-45f, 0.0f,
     0x1.66b1b2p-68f, 0x1.490b1p-79f, 0.0f, 0.0f, 0x1.405868p-115f, 0x1.ccd89cp-55f,
     0x1.f4302ap-24f, 0.0f, 0x1.4c6d12p-29f, 0.0f, 0.0f, 0x1.9bf21p-111f,
     0x1.32ebfp-37f, 0x1.08cfacp-61f, 0x1.d6cd9ep-103f, 0.0f, 0x1.177e84p-104f, 0.0f,
     0.0f, 0x1.73e65ep-121f, 0x1.690644p-49f, 0x1.9a01e2p-100f, 0.0f, 0x1.b10a62p-46f,
     0.0f, 0x1.315b08p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c56872p-45f, 0.0f, 0x1.522bf8p-108f, 0.0f, 0.0f, 0.0f, 0x1.9fb69cp-56f, 0.0f,
     0x1.f76978p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f4d244p-115f,
     0x1.4ce876p-81f, 0.0f, 0x1.65b158p-21f, 0x1.fd428ap-119f, 0.0f, 0x1.fb052p-120f,
     0x1.6a76b8p-123f, 0x1.e9861ep-71f, 0.0f, 0x1.3b0d98p-3f, 0x1.bc3c84p-32f,
     0x1.9ceb34p-10f, 0.0f, 0.0f, 0x1.bfc844p-67f, 0.0f, 0x1.de89p-27f, 0.0f,
     0x1.930b1ep-52f, 0.0f, 0x1.10b45p-54f, 0x1.49e436p-95f, 0.0f, 0x1.992078p-73f,
     0.0f, 0x1.a2995ap-50f, 0x1.9a04bep-34f, 0.0f, 0x1.2c3e8ep-77f, 0x1.2e656ep-80f,
     0.0f, 0x1.9c198ap-45f, 0.0f, 0.0f, 0.0f, 0x1.02e33ep-40f, 0x1.cb829ep-3f,
     0x1.91b1aap-43f, 0x1.2775d4p-43f, 0.0f, 0x1.9ca78p-96f, 0x1.d7ac4ep-114f,
     0x1.d4f57p-107f, 0.0f, 0.0f, 0x1.598a12p-92f, 0x1.d52d4cp-64f, 0.0f,
     0x1.bfd5cap-22f, 0x1.a6bfd2p-28f, 0.0f, 0x1.523422p-64f, 0.0f, 0.0f,
     0x1.5c688ep-113f, 0.0f, 0.0f, 0x1.0a56eep-39f, 0x1.59bda2p-90f, 0.0f,
     0x1.3e833ep-62f, 0.0f, 0.0f, 0x1.a40d1ep-113f, 0.0f, 0x1.d230acp-76f,
     0x1.d894b8p-108f, 0.0f, 0x1.e0448ap-51f, 0.0f, 0x1.95662cp-32f, 0x1.aa46c4p-81f,
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
            float tmp3;
            int32_t tmp4;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = external_bench_wrapper_input_table_arg1[i];
            tmp2 = Sleef_fdimf1_purecfma(tmp0, tmp1);
            external_bench_wrapper_output_table[i] = tmp2;
            tmp3 = bench_acc + tmp2;
            bench_acc = tmp3;
            tmp4 = i + INT32_C(1);
            i = tmp4;
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
    printf("Sleef_fdimf1_purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_fdimf1_purecfma bench acc %a\n", global_bench_acc);
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
