/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_cbrtf1_u35purecfma.c --function \
 *     Sleef_finz_cbrtf1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.adc292p-3f, 0.0f, 0x1.8d2528p-35f, 0x1.e6613p-95f, 0x1.efa0d2p-68f,
     0x1.619aap-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d89ca2p-71f,
     0x1.9bf1fap-93f, 0x1.7b24ep-104f, 0x1.ead9acp-59f, 0x1.652582p-51f,
     0x1.594ab4p-101f, 0x1.e9fa0ep-75f, 0x1.03f29cp-72f, 0.0f, 0.0f, 0x1.b1233cp-13f,
     0.0f, 0x1.94ed6cp-126f, 0x1.68441p-10f, 0x1.d7654cp-31f, 0.0f, 0x1.b7bc84p-29f,
     0.0f, 0x1.ec8f3cp-27f, 0x1.13d028p-105f, 0x1.a69336p-103f, 0x1.c9a6f2p-88f, 0.0f,
     0x1.294d14p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5ca8c4p-60f, 0x1.ffe2c2p-49f,
     0x1.0ca7c2p-70f, 0x1.a179dap-26f, 0.0f, 0x1.45e7a6p-25f, 0.0f, 0x1.864624p-27f,
     0x1.c094aep-36f, 0.0f, 0x1.7f30a8p-29f, 0x1.0ab948p-63f, 0.0f, 0x1.44ec1ap-91f,
     0x1.0a3d9p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d78adcp-61f, 0.0f, 0x1.155c1ap-78f,
     0x1.87e7c2p-84f, 0.0f, 0x1.17d834p-33f, 0x1.33d11ep-105f, 0.0f, 0.0f,
     0x1.3e8bc2p-5f, 0.0f, 0.0f, 0.0f, 0x1.7f4d5ap-77f, 0.0f, 0.0f, 0x1.82f4fep-107f,
     0x1.58139ap-76f, 0.0f, 0x1.6f6064p-21f, 0x1.2c07fap-112f, 0x1.56705cp-58f, 0.0f,
     0x1.00e54ap-57f, 0x1.87e56ep-64f, 0.0f, 0x1.06948cp-14f, 0.0f, 0x1.b9b122p-50f,
     0x1.2402f2p-79f, 0.0f, 0x1.fd40e4p-108f, 0x1.e69968p-123f, 0x1.36d9b4p-19f, 0.0f,
     0.0f, 0x1.178dc2p-107f, 0x1.52f5d6p-23f, 0x1.674182p-120f, 0x1.dacdd2p-122f,
     0x1.de3b42p-122f, 0x1.8656a8p-118f, 0.0f, 0x1.53f7eap-10f, 0.0f,
     0x1.bb8066p-116f, 0.0f, 0x1.480e7cp-78f, 0.0f, 0x1.731eap-45f, 0.0f, 0.0f,
     0x1.f2882cp-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e66812p-67f, 0.0f, 0x1.1fafcp-7f,
     0x1.64eb6ap-88f, 0.0f, 0.0f, 0.0f, 0x1.5e7c3ep-76f, 0x1.2e6762p-59f,
     0x1.f06806p-11f, 0.0f, 0.0f, 0x1.885e66p-93f, 0.0f, 0.0f, 0.0f, 0x1.ca9118p-61f,
     0.0f, 0.0f, 0x1.c45ca8p-108f, 0.0f, 0x1.df6678p-70f, 0x1.93acfap-34f,
     0x1.3bb2dap-53f, 0x1.8e32aap-109f, 0x1.743fd4p-76f, 0.0f, 0x1.da61d4p-23f, 0.0f,
     0.0f, 0x1.506746p-126f, 0.0f, 0.0f, 0x1.418154p-113f, 0.0f, 0x1.a9681cp-61f,
     0.0f, 0.0f, 0x1.ab782ep-18f, 0.0f, 0x1.33d88ep-56f, 0.0f, 0.0f, 0x1.80fep-64f,
     0x1.b383c6p-64f, 0.0f, 0.0f, 0x1.ebd5bcp-36f, 0.0f, 0x1.e878ecp-112f,
     0x1.2cde34p-115f, 0.0f, 0x1.873fecp-32f, 0x1.fce3aep-67f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.6de40ap-15f, 0x1.cc1f6ap-99f, 0.0f, 0x1.cfcadcp-96f, 0.0f,
     0x1.73bd1ap-111f, 0x1.d9fb2ep-58f, 0x1.21569cp-47f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c1309p-21f, 0x1.142e72p-106f, 0.0f, 0x1.e677f8p-91f, 0.0f, 0x1.b9c73ap-27f,
     0.0f, 0.0f, 0x1.550a28p-59f, 0.0f, 0.0f, 0.0f, 0x1.9c5638p-103f, 0.0f,
     0x1.52435ep-12f, 0x1.12473ep-111f, 0.0f, 0x1.3be89ep-66f, 0x1.2f5994p-13f, 0.0f,
     0x1.ba21a8p-67f, 0x1.473edp-32f, 0.0f, 0x1.b98adap-73f, 0x1.b8ee78p-74f,
     0x1.ad49dep-86f, 0x1.55c394p-14f, 0.0f, 0x1.e9038cp-16f, 0x1.e10ab6p-116f,
     0x1.aac348p-19f, 0.0f, 0.0f, 0x1.e6d988p-28f, 0x1.8868e8p-9f, 0x1.ef9cap-15f,
     0.0f, 0x1.30b344p-8f, 0x1.7a84c6p-41f, 0x1.9d56dcp-75f, 0x1.344c8ap-67f, 0.0f,
     0x1.590f84p-119f, 0.0f, 0x1.4d2a5p-114f, 0x1.37f0dap-44f, 0x1.bd17ep-61f,
     0x1.22fdccp-113f, 0x1.b9fa44p-59f, 0.0f, 0x1.eb1c8ep-100f, 0x1.9a0476p-114f,
     0.0f, 0.0f, 0.0f, 0x1.6d0302p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.42252ep-27f, 0.0f,
     0x1.f2c706p-64f, 0x1.fa7446p-100f, 0x1.c12b34p-7f, 0.0f, 0.0f, 0x1.cb4198p-84f,
     0.0f, 0x1.119f4ep-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bcd6d6p-43f,
     0.0f, 0.0f, 0x1.4723bp-7f, 0.0f, 0.0f, 0x1.0030f6p-21f, 0x1.143e64p-104f, 0.0f,
     0.0f, 0.0f, 0x1.b5380cp-24f, 0x1.ef761cp-22f, 0x1.9ae13ep-8f, 0x1.edb298p-86f,
     0.0f, 0x1.6d4688p-18f, 0x1.c807e2p-75f, 0.0f, 0x1.8b1edep-7f, 0.0f,
     0x1.3a3bdp-76f, 0.0f, 0x1.d4199ap-120f, 0x1.040f12p-44f, 0.0f, 0x1.423982p-66f,
     0.0f, 0.0f, 0x1.977ep-74f, 0x1.072bccp-69f, 0x1.fc7cbcp-28f, 0x1.77dc2ep-26f,
     0.0f, 0x1.ffc002p-60f, 0.0f, 0.0f, 0x1.84ac42p-63f, 0x1p0f, 0x1.312354p-52f,
     0x1.efb1eep-30f, 0.0f, 0x1.d3a422p-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.aaa1fep-35f,
     0.0f, 0x1.616886p-35f, 0.0f, 0x1.75d68ep-77f, 0x1p0f, 0x1.469e9p-53f, 0.0f,
     0x1.336868p-9f, 0x1.15c618p-71f, 0x1.fa97b8p-48f, 0x1.ef52fp-64f, 0.0f, 0.0f,
     0x1.6961fap-30f, 0x1.2ba05ap-3f, 0.0f, 0.0f, 0x1.d89856p-53f, 0.0f, 0.0f,
     0x1.934b96p-45f, 0x1.6cc4e4p-84f, 0.0f, 0.0f, 0.0f, 0x1.1ea21p-93f,
     0x1.954668p-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f1c296p-8f, 0x1.1349c2p-53f,
     0x1.e6b916p-4f, 0x1.2a2dc8p-112f, 0x1.ec6602p-26f, 0x1.a86308p-108f,
     0x1.fd9cdp-58f, 0.0f, 0.0f, 0.0f, 0x1.25e8e8p-87f, 0.0f, 0x1.31c3dp-108f,
     0x1.fa9bc6p-27f, 0.0f, 0.0f, 0x1.822348p-74f, 0.0f, 0.0f, 0x1.3f4f32p-97f, 0.0f,
     0.0f, 0.0f, 0x1.a4830ap-69f, 0x1.e8dadp-44f, 0x1.8a14ccp-22f, 0x1.2bf194p-26f,
     0.0f, 0x1.dd2f9p-105f, 0.0f, 0.0f, 0.0f, 0x1.850cdp-119f, 0x1.e32c9ap-112f,
     0x1.f56d64p-87f, 0x1.e95ee8p-18f, 0.0f, 0x1.c693e2p-114f, 0x1.3f1552p-64f,
     0x1.7c63fcp-65f, 0x1.eb3ea2p-30f, 0.0f, 0.0f, 0.0f, 0x1.652b18p-12f, 0.0f,
     0x1.af5f66p-70f, 0x1.45b97ep-76f, 0.0f, 0x1.1ae77p-41f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.401f58p-22f, 0.0f, 0.0f, 0x1.c378a8p-52f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.809beap-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d07d68p-18f, 0.0f,
     0.0f, 0x1.af788p-81f, 0x1.1317e4p-34f, 0x1.2ba5d8p-73f, 0x1.8795bep-1f,
     0x1.3e8c24p-102f, 0x1.7768cap-10f, 0x1.6e717ap-108f, 0.0f, 0x1.beb39ep-77f, 0.0f,
     0x1.5ff984p-55f, 0x1.7eff4ep-76f, 0.0f, 0x1.ea1de8p-5f, 0x1.e9e496p-93f, 0.0f,
     0.0f, 0x1.d9b0aap-79f, 0.0f, 0x1.e4567cp-88f, 0.0f, 0x1.748d68p-94f, 0.0f, 0.0f,
     0x1.c55d64p-3f, 0.0f, 0x1.e9757ap-38f, 0.0f, 0x1.47217cp-118f, 0.0f,
     0x1.53c8b6p-51f, 0.0f, 0x1.55083ap-66f, 0x1.569b38p-62f, 0x1.fe372cp-5f,
     0x1.3f6b74p-88f, 0x1.0b13fep-75f, 0.0f, 0x1.7bb4f8p-124f, 0x1.76ab0cp-19f, 0.0f,
     0x1.462676p-47f, 0.0f, 0x1.e596b8p-112f, 0.0f, 0x1.29e684p-74f, 0.0f, 0.0f,
     0x1.e539dep-90f, 0x1.bda9d2p-76f, 0.0f, 0x1.31725cp-33f, 0.0f, 0.0f,
     0x1.22796cp-107f, 0x1.721fe8p-59f, 0x1.915b3cp-40f, 0.0f, 0.0f, 0x1.fd3244p-2f,
     0.0f, 0x1.183318p-106f, 0.0f, 0x1.b0cefep-115f, 0.0f, 0x1.a95c88p-88f, 0.0f,
     0.0f, 0x1.14b92ap-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ab1716p-47f, 0.0f,
     0x1.828708p-106f, 0x1.efacb8p-51f, 0x1.0d7c0ep-31f, 0x1.ef49e2p-52f,
     0x1.9bf972p-26f, 0.0f, 0.0f, 0x1.42db0ep-79f, 0x1.5a6a22p-120f, 0x1.253554p-66f,
     0x1.b1583p-83f, 0x1.d2048cp-117f, 0x1.2e5a6cp-125f, 0.0f, 0x1.3e408ep-21f,
     0x1.c3a97ep-57f, 0x1.a9f612p-56f, 0x1.ac4346p-80f, 0x1.20f6acp-76f,
     0x1.4214bp-77f, 0.0f, 0x1.dad548p-81f, 0x1.38a26ap-61f, 0x1.17a50ep-84f, 0.0f,
     0x1.ae9c98p-85f, 0.0f, 0x1.56700cp-109f, 0.0f, 0x1.8285b6p-53f, 0.0f,
     0x1.b9b95ap-19f, 0.0f, 0.0f, 0x1.10e3d4p-51f, 0x1.6da00ep-120f, 0x1.cf015cp-115f,
     0x1.530476p-113f, 0.0f, 0.0f, 0.0f, 0x1.8589b8p-8f, 0.0f, 0.0f, 0x1.2caecp-11f,
     0x1.fce936p-32f, 0x1.aea8dap-86f, 0.0f, 0x1.6caadcp-67f, 0.0f, 0x1.472af4p-105f,
     0x1.52e078p-76f, 0.0f, 0x1.14a2cap-48f, 0.0f, 0x1.3e432cp-32f, 0x1.0755f4p-49f,
     0.0f, 0x1.0f90c4p-81f, 0x1.89e46p-79f, 0.0f, 0x1.8c4d38p-56f, 0x1.7a63fcp-80f,
     0x1.f4a9f4p-46f, 0x1.76d944p-18f, 0x1.7cc5cep-85f, 0x1.949f46p-31f, 0.0f, 0.0f,
     0x1.486feap-79f, 0.0f, 0.0f, 0.0f, 0x1.2f15d6p-28f, 0.0f, 0.0f, 0x1.d5d358p-54f,
     0x1.cbdadcp-83f, 0x1.3bfc6p-106f, 0.0f, 0x1.5483aep-78f, 0.0f, 0x1.442e8p-38f,
     0.0f, 0x1.fa8c96p-59f, 0.0f, 0x1.ed5492p-100f, 0.0f, 0x1.0c91e8p-90f,
     0x1.ea3d8ap-82f, 0x1.ca6156p-126f, 0x1.540484p-97f, 0.0f, 0x1.9cd81cp-73f,
     0x1.ebe91cp-88f, 0.0f, 0x1.e2918p-23f, 0.0f, 0.0f, 0x1.657feap-19f, 0.0f,
     0x1.105d1ap-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6f8508p-95f, 0.0f, 0.0f, 0.0f,
     0x1.94e1b6p-30f, 0.0f, 0.0f, 0x1.d4a7dcp-96f, 0x1.5eda34p-62f, 0x1.4337f4p-37f,
     0.0f, 0.0f, 0x1.a87dd4p-20f, 0.0f, 0.0f, 0x1.98d36ep-32f, 0.0f, 0x1.8aa76cp-42f,
     0.0f, 0x1.44e08ep-16f, 0.0f, 0.0f, 0x1.9ef532p-12f, 0x1.b8661cp-96f,
     0x1.da7894p-54f, 0x1.e5848ap-44f, 0.0f, 0.0f, 0.0f, 0x1.958726p-123f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.eeca9cp-60f, 0.0f, 0.0f, 0.0f, 0x1.c90732p-71f,
     0x1.efd048p-55f, 0x1.33158ap-92f, 0.0f, 0x1.f9edb6p-126f, 0.0f, 0.0f, 0.0f,
     0x1.5d337ap-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0f9322p-113f, 0x1.805c36p-71f,
     0x1.4f966p-100f, 0x1.80bc1cp-97f, 0.0f, 0.0f, 0x1.5296c8p-17f, 0x1.cc1382p-27f,
     0x1.9b12a2p-16f, 0.0f, 0x1.e128ap-40f, 0x1.f0c89ep-5f, 0x1.971872p-17f, 0.0f,
     0.0f, 0.0f, 0x1.665d0ap-32f, 0x1.581696p-34f, 0.0f, 0x1.74bf1ep-100f,
     0x1.ac4b66p-122f, 0x1.c3ef58p-88f, 0x1.da695p-115f, 0.0f, 0.0f, 0.0f,
     0x1.135e86p-31f, 0.0f, 0x1.ae4124p-28f, 0.0f, 0x1.a50f22p-12f, 0x1.801f0cp-67f,
     0x1.03339p-15f, 0x1.d025dp-109f, 0.0f, 0.0f, 0x1.de3a86p-78f, 0x1.a4592cp-107f,
     0x1p0f, 0.0f, 0x1.f9a75cp-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ce6ddcp-39f, 0.0f,
     0x1.40bf0ep-124f, 0x1.c9ed7cp-120f, 0.0f, 0.0f, 0x1.824eaap-82f, 0x1.7ee69p-118f,
     0.0f, 0x1.7790a8p-2f, 0.0f, 0x1.d89616p-118f, 0.0f, 0x1.63fd86p-17f,
     0x1.72517ap-80f, 0x1.59ee9p-36f, 0x1.6245dcp-89f, 0x1.fc0048p-74f,
     0x1.63ece8p-44f, 0.0f, 0.0f, 0.0f, 0x1.59a0ap-98f, 0.0f, 0x1.220cecp-80f, 0.0f,
     0.0f, 0x1.d4b988p-96f, 0x1.a3df22p-104f, 0x1.95e7aap-56f, 0.0f, 0x1.8ed4b4p-25f,
     0.0f, 0x1.336406p-8f, 0x1.dce7dep-27f, 0x1.2ab3bap-92f, 0.0f, 0.0f, 0.0f,
     0x1.40ad8ap-83f, 0x1.0cb974p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0c1ddep-24f, 0.0f,
     0.0f, 0x1.e65188p-30f, 0.0f, 0.0f, 0.0f, 0x1.2f620ep-65f, 0.0f, 0.0f,
     0x1.403848p-38f, 0x1.992712p-90f, 0x1.0c3eap-82f, 0x1p0f, 0x1.ff2fbep-34f, 0.0f,
     0x1.aebd8ep-102f, 0x1.ffa2bep-65f, 0x1.66036cp-108f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7d592ap-84f, 0x1.f90d44p-57f, 0.0f, 0.0f, 0.0f, 0x1.d51f52p-15f, 0.0f, 0.0f,
     0x1.adeb86p-26f, 0x1.8baddep-122f, 0x1.586ffep-90f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.38107ep-119f, 0.0f, 0x1.bdc522p-126f, 0.0f, 0x1.12d2c4p-47f, 0.0f,
     0x1.80da06p-53f, 0x1.e0af34p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1c04a6p-81f,
     0x1.156d7ep-81f, 0x1.6a3822p-22f, 0x1.6cf3fcp-8f, 0x1.f4c114p-81f,
     0x1.79ce2cp-17f, 0.0f, 0x1.a9b6cp-41f, 0.0f, 0.0f, 0x1.da5788p-61f,
     0x1.97ae88p-37f, 0.0f, 0x1.9b7388p-69f, 0.0f, 0.0f, 0x1.3a1dc2p-36f, 0.0f, 0.0f,
     0.0f, 0x1.c730d6p-82f, 0.0f, 0.0f, 0x1.2292p-39f, 0x1.e1cc04p-19f,
     0x1.4b3e38p-27f, 0x1.c33f62p-42f, 0x1.31332cp-62f, 0x1.4237fcp-32f,
     0x1.7eaf0ap-4f, 0x1.418204p-73f, 0.0f, 0.0f, 0x1.9f8fccp-105f, 0x1.74ca2cp-89f,
     0.0f, 0.0f, 0x1.cefc66p-77f, 0x1.7a68e6p-58f, 0x1.f81e3p-91f, 0x1.2b31e6p-13f,
     0x1.783708p-84f, 0.0f, 0.0f, 0x1.97c896p-60f, 0x1.fe1d46p-3f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e511c6p-90f, 0x1.692cap-88f, 0x1.210f24p-3f, 0.0f, 0x1.66ff02p-126f,
     0x1.9f6e82p-118f, 0x1.fd1622p-51f, 0x1.fc4e16p-117f, 0.0f, 0x1.a47b68p-33f,
     0x1.7bf008p-105f, 0.0f, 0.0f, 0x1.d10beep-66f, 0x1.42e39cp-124f,
     0x1.6cc912p-116f, 0.0f, 0x1.6edea6p-42f, 0.0f, 0.0f, 0.0f, 0x1.1f91e4p-24f, 0.0f,
     0x1.e47f86p-4f, 0x1.475ecap-26f, 0x1.206c3cp-30f, 0x1.e386bep-40f,
     0x1.46f564p-54f, 0x1.c32edcp-51f, 0.0f, 0.0f, 0x1.4de7cep-25f, 0x1.086bcep-32f,
     0x1.fe1982p-77f, 0x1.8aa7b2p-2f, 0x1.29e85ep-22f, 0.0f, 0x1.ef5336p-50f,
     0x1.34656p-87f, 0x1.3cef7p-94f, 0.0f, 0.0f, 0x1.7c353cp-6f, 0.0f,
     0x1.fffb4ep-83f, 0x1.703ebcp-125f, 0.0f, 0.0f, 0.0f, 0x1.ebff7p-95f,
     0x1.332dp-105f, 0x1.a35fc2p-80f, 0.0f, 0x1.9fbc54p-2f, 0.0f, 0.0f, 0.0f,
     0x1.5eb6cep-29f, 0.0f, 0.0f, 0.0f, 0x1.b58a9p-12f, 0x1.383994p-99f,
     0x1.a8ae7p-112f, 0.0f, 0x1.f8034ap-82f, 0x1.a50c4cp-78f, 0.0f, 0x1.0d816p-37f,
     0.0f, 0.0f, 0.0f, 0x1.e5f904p-39f, 0x1.d2fe0cp-111f, 0.0f, 0.0f, 0x1.ae7832p-19f,
     0x1.d6f9d4p-39f, 0x1.7ba8fap-2f, 0.0f, 0x1.1f8802p-11f, 0x1.600fcap-92f, 0.0f,
     0.0f, 0x1.d7f61ep-46f, 0x1.61cbbcp-104f, 0x1.ac12d6p-86f, 0x1.ceb26ap-66f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b12fc2p-56f, 0x1.d6072ep-10f, 0x1.918dc6p-56f,
     0x1.1477bp-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8c842ap-15f, 0x1.7aa8ccp-74f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.44c236p-23f, 0x1.eee51ep-54f, 0.0f, 0x1.d3919cp-19f,
     0x1.f3e998p-63f, 0x1.6bdf26p-17f, 0.0f, 0x1.952d18p-34f, 0x1.b424c2p-82f, 0.0f,
     0.0f, 0.0f, 0x1.ff0086p-91f, 0x1.0c5acap-49f, 0x1.1441fp-12f, 0x1.0e30bp-15f,
     0x1.1d87c8p-125f, 0.0f, 0x1.8fc846p-21f, 0x1.a888bp-59f, 0.0f, 0x1.21a2ep-49f,
     0x1.ea56bcp-88f, 0x1.77c166p-9f, 0.0f, 0.0f, 0x1.dd4a86p-122f, 0.0f, 0.0f, 0.0f,
     0x1.5ef8fcp-9f, 0x1.dd7c96p-75f, 0.0f, 0x1.f1b37p-13f, 0x1.40bce4p-69f, 0.0f,
     0x1.98060ap-115f, 0x1.f72022p-74f, 0x1.de2308p-65f, 0.0f, 0.0f, 0x1.59591ep-24f,
     0.0f, 0x1.f5f094p-110f, 0x1.4ef5f8p-84f, 0.0f, 0.0f, 0x1.f883c4p-45f,
     0x1.433266p-7f, 0.0f, 0x1.93b868p-93f, 0.0f, 0.0f, 0x1.4025b2p-20f
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
            tmp1 = Sleef_finz_cbrtf1_u35purecfma(tmp0);
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
    printf("Sleef_finz_cbrtf1_u35purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_cbrtf1_u35purecfma bench acc %a\n", global_bench_acc);
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
