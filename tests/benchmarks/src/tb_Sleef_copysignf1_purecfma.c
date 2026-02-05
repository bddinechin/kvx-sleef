/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_copysignf1_purecfma.c --function \
 *     Sleef_copysignf1_purecfma --arity 2 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32,binary32 --bench --no-embedded-bin --target \
 *     kv3
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
     0.0f, 0.0f, 0x1.24a06ep-44f, 0.0f, 0x1.fdf8c2p-50f, 0x1.ff635cp-101f,
     0x1.847f3p-57f, 0.0f, 0.0f, 0.0f, 0x1.a7fdccp-22f, 0x1.8fd38p-23f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.1faf6p-107f, 0.0f, 0x1.184bdp-112f, 0x1.b7be14p-19f,
     0x1.58e3fp-121f, 0x1.93baeep-22f, 0.0f, 0x1.775c4ep-25f, 0x1.ecfcb8p-71f,
     0x1.3c9a58p-73f, 0.0f, 0x1.0518bep-63f, 0x1.f3fadep-82f, 0x1.50dd48p-35f,
     0x1.8ba1bp-57f, 0x1.c1e656p-97f, 0x1.157496p-38f, 0.0f, 0x1.c3206ep-3f,
     0x1.c2bd6p-113f, 0x1.63fe52p-26f, 0.0f, 0x1.e138fp-108f, 0x1.2fd908p-83f,
     0x1.367d94p-18f, 0.0f, 0.0f, 0x1.4facc4p-100f, 0.0f, 0x1.19a0f6p-114f,
     0x1.c35b36p-3f, 0.0f, 0x1.ea0eaap-119f, 0x1.262662p-114f, 0.0f, 0x1.3821fp-84f,
     0x1.600f32p-2f, 0.0f, 0x1.5eaeb8p-97f, 0x1.da835ap-2f, 0x1.b0c798p-23f,
     0x1.4662fcp-44f, 0x1.55b704p-121f, 0.0f, 0x1.a85434p-15f, 0x1.7a9154p-28f, 0.0f,
     0x1.0e215cp-70f, 0.0f, 0.0f, 0x1.84047p-40f, 0x1.c80f1ep-50f, 0x1.bb1422p-114f,
     0.0f, 0x1.a6aab2p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8aaa2cp-43f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.5864fp-71f, 0x1.dc6178p-79f, 0.0f, 0.0f, 0x1.cd8b4ep-73f,
     0x1.df3164p-47f, 0.0f, 0.0f, 0x1.6db5e8p-50f, 0x1.ae772p-74f, 0x1.48f876p-81f,
     0x1.74c646p-74f, 0x1.06a34p-119f, 0.0f, 0.0f, 0x1.a463dep-82f, 0x1.cd5c7ap-21f,
     0.0f, 0.0f, 0.0f, 0x1.0f14c4p-112f, 0x1.54006p-41f, 0x1.669e9p-124f, 0.0f, 0.0f,
     0.0f, 0x1.7db5e8p-8f, 0.0f, 0x1.6e17fap-97f, 0x1.7297d4p-6f, 0.0f,
     0x1.270908p-8f, 0x1.a9f196p-88f, 0x1.82c7e8p-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ac2a9p-59f, 0.0f, 0.0f, 0.0f, 0x1.83f912p-13f, 0.0f,
     0x1.24c69ap-25f, 0x1.73a23ep-37f, 0x1.d8c5bcp-40f, 0x1.b58942p-126f, 0.0f,
     0x1.edd4a2p-46f, 0.0f, 0x1.aef78p-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bcb026p-53f, 0x1.ab9688p-29f, 0.0f, 0x1.0b43eap-78f, 0.0f, 0x1.4e215p-19f,
     0x1.8e8088p-9f, 0.0f, 0.0f, 0x1.6d88f6p-38f, 0x1.12213cp-32f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.761f8cp-28f, 0x1.6c9e4ap-112f,
     0x1.e8baaep-68f, 0x1.59c3b4p-104f, 0x1.8a77dep-124f, 0.0f, 0.0f, 0.0f,
     0x1.020c9p-27f, 0.0f, 0x1.9ffecep-60f, 0x1.7a3bd8p-32f, 0.0f, 0.0f, 0.0f,
     0x1.f5605cp-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f0498ap-93f, 0.0f,
     0x1.70a558p-44f, 0x1.65a9e4p-31f, 0.0f, 0.0f, 0x1.5f5ddep-118f, 0x1.875ac6p-90f,
     0.0f, 0x1.d6b01p-98f, 0.0f, 0x1.0521e6p-122f, 0.0f, 0x1.5c822cp-122f, 0.0f,
     0x1.6e6758p-94f, 0.0f, 0.0f, 0x1.be0c76p-49f, 0x1.d4ff4p-37f, 0x1.7ac46ap-53f,
     0.0f, 0.0f, 0x1.432378p-45f, 0x1.4334a8p-120f, 0.0f, 0.0f, 0x1.a227d4p-8f,
     0x1.1762p-13f, 0x1.637a74p-106f, 0.0f, 0x1.63f5f8p-117f, 0x1.db02ecp-95f,
     0x1.87a5p-81f, 0.0f, 0.0f, 0x1.8767p-74f, 0x1.6ecbcap-112f, 0.0f,
     0x1.f3674cp-57f, 0.0f, 0.0f, 0x1.8d580ap-7f, 0x1.45a554p-121f, 0x1.df9c7ep-71f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7aa67p-118f, 0.0f, 0x1.8655fap-63f, 0.0f,
     0x1.6f5cfap-48f, 0x1.e86e6p-75f, 0x1.249e1ep-124f, 0.0f, 0.0f, 0.0f,
     0x1.9392dp-17f, 0.0f, 0x1.f7b558p-23f, 0.0f, 0.0f, 0x1.dcd8p-119f, 0.0f, 0.0f,
     0.0f, 0x1.4e62dep-68f, 0.0f, 0x1.3d1414p-8f, 0.0f, 0.0f, 0.0f, 0x1.bc6414p-77f,
     0x1.81d958p-89f, 0x1.ef82bp-36f, 0.0f, 0x1.c23688p-58f, 0.0f, 0x1.4cd7f8p-47f,
     0.0f, 0.0f, 0.0f, 0x1.d4ae8cp-77f, 0.0f, 0.0f, 0x1.79622ap-47f, 0x1.1baf4cp-43f,
     0x1.fc5c2ap-95f, 0x1.cf4006p-22f, 0.0f, 0.0f, 0.0f, 0x1.620376p-65f, 0.0f,
     0x1.b73ef2p-114f, 0.0f, 0x1.01f448p-67f, 0x1.6ec18ep-119f, 0x1.03ae48p-49f,
     0x1.f936fap-103f, 0x1.5c5186p-52f, 0x1.54f84p-28f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b4e69ep-61f, 0x1.66f4bep-101f, 0.0f, 0x1.52eeeep-23f, 0x1.5cd1a2p-35f, 0.0f,
     0.0f, 0x1.47a324p-111f, 0.0f, 0x1.b60e8ap-18f, 0x1.675bfap-38f, 0.0f, 0.0f, 0.0f,
     0x1.4714d4p-20f, 0.0f, 0.0f, 0.0f, 0x1.b1ea22p-31f, 0x1.f9f13p-52f,
     0x1.ca8966p-92f, 0x1.9463f2p-67f, 0x1.e5a27p-63f, 0x1.6cf126p-45f, 0.0f, 0.0f,
     0x1.16511ap-106f, 0.0f, 0x1.203eecp-88f, 0.0f, 0.0f, 0x1.8f19fcp-38f, 0.0f, 0.0f,
     0x1.384dbap-126f, 0.0f, 0x1.6fa6f2p-113f, 0.0f, 0.0f, 0x1.948054p-122f, 0.0f,
     0.0f, 0.0f, 0x1.17b6d4p-70f, 0.0f, 0x1.0a3a0ep-8f, 0.0f, 0.0f, 0.0f,
     0x1.48fd76p-11f, 0x1.fdffdp-16f, 0.0f, 0x1.d0fac8p-80f, 0x1.95d9eap-86f, 0.0f,
     0x1.4aed82p-63f, 0.0f, 0x1.78ad3p-39f, 0x1.ba992ap-86f, 0x1.406048p-115f,
     0x1.6372cp-26f, 0x1.966748p-121f, 0x1.8fcad4p-58f, 0.0f, 0x1.9facf2p-4f, 0.0f,
     0x1.c0f1fep-121f, 0.0f, 0x1.71161ep-68f, 0.0f, 0.0f, 0.0f, 0x1.2e5a6ep-76f,
     0x1.a7ad62p-57f, 0x1.c03662p-95f, 0.0f, 0x1.5e0118p-68f, 0x1.68b158p-112f,
     0x1.330accp-81f, 0.0f, 0x1.96f9a6p-104f, 0x1.17986ap-16f, 0.0f, 0.0f, 0.0f,
     0x1.9cacep-3f, 0.0f, 0x1.03c452p-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fddfd2p-83f,
     0x1.963d02p-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bfa6fcp-71f, 0x1.4590b8p-115f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.1d69dap-44f, 0x1.3bac0cp-106f, 0.0f, 0x1.d637c2p-11f,
     0.0f, 0x1.fe0efep-54f, 0x1.333e22p-65f, 0.0f, 0.0f, 0x1.c8f22p-36f, 0.0f, 0.0f,
     0.0f, 0x1.84cefep-37f, 0x1.85104ep-43f, 0x1.862824p-91f, 0.0f, 0.0f,
     0x1.e3110ap-50f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.9c2dc8p-46f, 0.0f, 0.0f,
     0x1.22e964p-52f, 0.0f, 0x1.f291bcp-53f, 0x1.b22006p-10f, 0.0f, 0.0f,
     0x1.9bb988p-22f, 0x1.b634b6p-50f, 0.0f, 0.0f, 0.0f, 0x1.f084p-29f,
     0x1.f96344p-84f, 0x1.0be4f2p-126f, 0x1.f0f88cp-42f, 0x1.562c7p-115f, 0.0f,
     0x1.65493ap-10f, 0.0f, 0.0f, 0x1.d88332p-16f, 0.0f, 0x1.ef40b8p-55f,
     0x1.b25ef4p-71f, 0x1.7d1d26p-49f, 0.0f, 0x1.489e5p-118f, 0x1.8ba328p-83f,
     0x1.58a2f4p-109f, 0x1.069856p-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d5bceap-48f, 0x1.71e7b6p-107f, 0x1.600872p-114f, 0x1.3f83ap-34f, 0.0f,
     0x1.0fa586p-23f, 0.0f, 0.0f, 0x1.e279d8p-24f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.147eaap-99f, 0x1.1ffcf4p-110f, 0x1.b63f42p-54f, 0x1.24157ap-26f,
     0x1.7759b8p-16f, 0x1.30da5ep-36f, 0.0f, 0.0f, 0x1.554b1p-79f, 0x1.6ba5p-96f,
     0.0f, 0.0f, 0x1.47031ap-81f, 0.0f, 0x1.e087e2p-111f, 0x1.28878p-95f, 0.0f,
     0x1.0a016ap-26f, 0x1.62d80ep-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1b4f28p-102f,
     0.0f, 0x1.479496p-63f, 0x1.cb378cp-41f, 0x1.f2316cp-32f, 0.0f, 0x1.32d6d8p-44f,
     0x1.893a58p-65f, 0.0f, 0x1.42ed4ap-96f, 0x1.573f18p-79f, 0x1.e84b4ep-99f, 0.0f,
     0.0f, 0x1.490afp-67f, 0.0f, 0.0f, 0.0f, 0x1.aec696p-74f, 0.0f, 0x1.8dcc44p-65f,
     0x1.7fc1bp-72f, 0x1.4b42d2p-65f, 0x1.49ec36p-39f, 0x1.91c6c8p-97f,
     0x1.92844ep-106f, 0.0f, 0.0f, 0x1.87f6b4p-110f, 0x1.467f78p-106f,
     0x1.4e79c6p-100f, 0.0f, 0.0f, 0x1.986abep-32f, 0x1.b1ec56p-3f, 0.0f,
     0x1.3b70cep-21f, 0x1.99c1bp-44f, 0.0f, 0x1.5f720ap-91f, 0x1.6a4262p-29f, 0.0f,
     0.0f, 0x1.651e14p-13f, 0x1.cfaa78p-37f, 0x1.1b2a1ap-63f, 0.0f, 0.0f, 0.0f,
     0x1.90f744p-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8b227p-25f, 0.0f,
     0x1.71893cp-54f, 0x1.db7e78p-28f, 0.0f, 0x1.ff9434p-21f, 0x1.354674p-16f, 0.0f,
     0x1.00ded8p-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.260d42p-22f, 0x1.4139dap-27f, 0.0f,
     0.0f, 0x1.a60b4ep-43f, 0x1.15a69ep-38f, 0x1.14d5aep-74f, 0x1.4db83ap-75f, 0.0f,
     0x1.56f796p-13f, 0.0f, 0x1.801894p-73f, 0x1.3c78e8p-73f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7f2feep-122f, 0.0f, 0x1.8b3faap-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a39f88p-95f,
     0.0f, 0x1.50be66p-58f, 0x1.329d9ap-75f, 0x1.6f5062p-95f, 0x1.383ap-96f, 0.0f,
     0x1.80655p-120f, 0.0f, 0.0f, 0x1.d0ff62p-91f, 0.0f, 0.0f, 0x1.552006p-120f, 0.0f,
     0.0f, 0.0f, 0x1.f58a4cp-98f, 0.0f, 0x1.0988bep-96f, 0x1.02ea6ep-67f, 0.0f, 0.0f,
     0x1.c6c7b6p-6f, 0x1.bd1dbep-80f, 0x1.7d3e88p-88f, 0.0f, 0x1.59d6ccp-62f,
     0x1.17c532p-123f, 0x1.defbb6p-122f, 0x1.b0e936p-49f, 0.0f, 0.0f, 0.0f,
     0x1.7b1fc6p-121f, 0x1.95389ep-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0d33p-108f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c5bb84p-13f, 0x1.23391ep-37f, 0x1.63e252p-19f, 0.0f,
     0x1.aa0bb6p-43f, 0x1.47b1dap-126f, 0x1.4698fap-16f, 0x1.dbd664p-31f,
     0x1.8f92a6p-8f, 0.0f, 0x1.aded54p-34f, 0.0f, 0.0f, 0x1.3f63ccp-105f,
     0x1.9bb85ep-3f, 0.0f, 0.0f, 0.0f, 0x1.8108ap-1f, 0x1.4e326ap-119f,
     0x1.65fadep-18f, 0x1.cb11b2p-60f, 0.0f, 0x1.339a3ep-118f, 0.0f, 0.0f,
     0x1.aeac8p-92f, 0.0f, 0x1.c70ec2p-94f, 0.0f, 0x1.959a2ap-28f, 0.0f,
     0x1.39a986p-92f, 0x1.aae9cap-106f, 0.0f, 0x1.48d9f8p-8f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.dd48e2p-80f, 0.0f, 0.0f, 0x1.0e7f4ap-64f, 0x1.15654p-112f, 0x1.fa0cfp-24f,
     0x1.dbedcp-73f, 0x1.e31af6p-3f, 0.0f, 0.0f, 0.0f, 0x1.009d32p-13f, 0.0f,
     0x1.21205ep-56f, 0.0f, 0x1.b5874p-46f, 0.0f, 0.0f, 0.0f, 0x1.5ec1acp-77f,
     0x1.4f6c58p-88f, 0.0f, 0.0f, 0.0f, 0x1.1be64cp-91f, 0.0f, 0.0f, 0x1.860754p-37f,
     0.0f, 0x1.04c94p-80f, 0x1.9fd0fap-121f, 0.0f, 0.0f, 0.0f, 0x1.d3702cp-101f, 0.0f,
     0x1.69338ep-1f, 0.0f, 0x1.99909ap-11f, 0x1.b9e6bp-40f, 0x1.8ba686p-84f,
     0x1.d55816p-108f, 0.0f, 0x1.56883ap-20f, 0x1.cadec4p-63f, 0.0f, 0.0f, 0.0f,
     0x1.0801acp-55f, 0.0f, 0x1.261a2ap-26f, 0x1.65fd12p-79f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.379134p-11f, 0x1.cd75e4p-121f, 0x1.99cde4p-61f, 0x1.2a3a44p-53f, 0.0f,
     0x1.210b96p-98f, 0x1.f2a2eap-14f, 0x1.f2eff6p-78f, 0.0f, 0.0f, 0.0f,
     0x1.c37bfep-95f, 0x1.7349bap-3f, 0.0f, 0x1.b95158p-1f, 0.0f, 0x1.b20768p-56f,
     0x1.8c45dp-118f, 0x1.3231dcp-44f, 0x1.ef6f56p-44f, 0x1.7945aep-118f, 0.0f, 0.0f,
     0x1.545bc6p-109f, 0.0f, 0x1.618918p-39f, 0x1.4b011cp-104f, 0.0f, 0x1.a20af4p-54f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.07bfccp-20f, 0.0f, 0x1.72dd96p-104f,
     0.0f, 0.0f, 0x1.e6b672p-85f, 0x1.dc7fep-15f, 0x1.8f0b72p-7f, 0x1.dd8618p-80f,
     0x1.72eb78p-58f, 0.0f, 0.0f, 0.0f, 0x1.2cdb7p-94f, 0x1.d9a6f8p-28f, 0.0f,
     0x1.a9d9dcp-88f, 0x1.01cfbcp-41f, 0x1.3bb9ap-67f, 0x1.629466p-116f, 0.0f,
     0x1.3ab7a4p-114f, 0x1.06b37cp-85f, 0x1.8d964ep-120f, 0x1.bdcd4ap-94f, 0.0f, 0.0f,
     0x1.41cfecp-90f, 0x1.0f875cp-45f, 0x1.e8d538p-126f, 0.0f, 0x1.e4001cp-14f,
     0x1.331d08p-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bba81ep-119f, 0x1.5f2ba6p-89f,
     0x1.f422cap-76f, 0.0f, 0x1.02f69ep-93f, 0.0f, 0.0f, 0x1.436206p-117f, 0.0f, 0.0f,
     0.0f, 0x1.f5fde2p-77f, 0.0f, 0x1.da0484p-97f, 0x1.ba8022p-40f, 0.0f,
     0x1.189d66p-19f, 0x1.4feb34p-23f, 0x1.b1373cp-21f, 0x1.5a5464p-100f, 0.0f, 0.0f,
     0.0f, 0x1.e29146p-116f, 0x1.747182p-72f, 0x1.1b9c1ap-10f, 0x1.f06836p-3f, 0.0f,
     0x1.255b4ep-77f, 0x1.cb6b3ap-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c4925p-36f,
     0x1.7f549p-26f, 0.0f, 0.0f, 0.0f, 0x1.06df78p-28f, 0.0f, 0x1.092e2ap-95f, 0.0f,
     0.0f, 0x1.8bf14ep-31f, 0.0f, 0x1.4e2b04p-102f, 0x1.7f2a7p-88f, 0x1.fab668p-67f,
     0x1.efb5dcp-98f, 0x1p0f, 0.0f, 0x1.4b9c6p-108f, 0x1.2abe02p-26f, 0x1.d51ddp-45f,
     0x1.dde6fep-107f, 0.0f, 0x1.fb07f2p-54f, 0.0f, 0x1.076c8ap-95f, 0x1.1f9368p-98f,
     0.0f, 0x1.ad58c8p-46f, 0x1.337b2p-48f, 0.0f, 0.0f, 0x1.bc484ap-45f,
     0x1.8a008cp-116f, 0x1.b39c64p-34f, 0.0f, 0x1.b19104p-33f, 0x1.aa57b4p-57f, 0.0f,
     0x1.0ab16ep-14f, 0.0f, 0.0f, 0.0f, 0x1.ca595cp-118f, 0.0f, 0.0f, 0x1.e601e2p-44f,
     0.0f, 0.0f, 0x1.f2a9dap-92f, 0x1.198f82p-3f, 0x1.234a9ap-76f, 0x1.c62aa4p-42f,
     0x1.bc4e6cp-69f, 0x1.c32598p-114f, 0.0f, 0x1.6268acp-64f, 0x1.321cdap-91f, 0.0f,
     0x1.3c9116p-60f, 0x1.54e0f2p-92f, 0.0f, 0x1.0564e4p-96f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.79827ep-43f, 0x1.7cabcap-4f, 0x1.660f2p-35f,
     0x1.a0b282p-113f, 0.0f, 0.0f, 0x1.1dd628p-90f, 0.0f, 0.0f, 0.0f,
     0x1.f9131ep-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8c41c8p-35f, 0x1.39aaf6p-52f, 0.0f,
     0x1.d9b442p-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d4e57p-125f,
     0x1.1e8f78p-126f, 0.0f, 0x1.1fb0e2p-38f, 0x1.66c2aap-117f, 0.0f, 0x1.91c5aep-43f,
     0x1.9454b2p-15f, 0x1.102a8cp-82f, 0x1.3ae296p-88f, 0x1.2bd8c4p-115f,
     0x1.49a488p-17f, 0.0f, 0.0f, 0x1.5ead0cp-80f, 0.0f, 0.0f, 0x1.7f203ep-6f, 0.0f,
     0x1.7220ep-55f, 0.0f, 0.0f, 0.0f, 0x1.be73fp-62f, 0.0f, 0x1.3dbbd2p-100f, 0.0f,
     0.0f, 0x1.d0961cp-71f, 0.0f, 0x1.301c2cp-36f, 0x1.576712p-35f, 0x1.253dcp-96f,
     0.0f, 0x1.2e3ad8p-67f, 0x1.166ae8p-107f, 0x1.1ea7dap-22f, 0x1.ac3dd4p-65f, 0.0f,
     0x1.9d947ep-92f, 0x1.e67acap-65f, 0x1.f9393ap-44f, 0.0f, 0x1.11915p-32f, 0.0f,
     0x1p0f, 0x1.d1a358p-111f, 0x1.e1fe7p-58f, 0x1.bb272ap-91f, 0.0f, 0.0f,
     0x1.c78daap-48f, 0x1.df414p-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a8e9f6p-64f,
     0x1.303f2ep-52f, 0.0f, 0.0f, 0x1.96ae54p-14f, 0x1.514d44p-123f, 0x1.a8837ep-110f,
     0x1.462234p-65f, 0.0f, 0.0f
};
static const float external_bench_wrapper_input_table_arg1[1001]  = {
     0.0f, 0.0f, 0.0f, 0x1.31efep-6f, 0x1.954a62p-85f, 0.0f, 0x1.487a3cp-47f, 0.0f,
     0x1.97a174p-97f, 0.0f, 0.0f, 0.0f, 0x1.edef58p-121f, 0.0f, 0.0f, 0.0f,
     0x1.02fbf6p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ad448p-31f, 0.0f, 0.0f,
     0x1.473eb6p-22f, 0.0f, 0x1.fbbe64p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.efad84p-94f,
     0x1.81fc42p-42f, 0x1.78a2b8p-93f, 0.0f, 0x1.c83b16p-70f, 0x1.a65d14p-5f,
     0x1.234226p-38f, 0.0f, 0.0f, 0x1.751a16p-20f, 0x1.e9a37ep-80f, 0.0f,
     0x1.edad6ep-28f, 0x1.4bf7dep-104f, 0.0f, 0.0f, 0.0f, 0x1.38c366p-2f,
     0x1.60c17ap-97f, 0x1.35c6e6p-82f, 0.0f, 0.0f, 0.0f, 0x1.098cep-2f,
     0x1.82f634p-84f, 0.0f, 0x1.c5aa7cp-55f, 0.0f, 0.0f, 0x1.18cdbep-116f, 0.0f, 0.0f,
     0.0f, 0x1.592b08p-9f, 0x1.05edap-122f, 0.0f, 0x1.4dd734p-13f, 0x1.ffcb6ep-72f,
     0.0f, 0x1.bea8cep-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f35ddep-16f,
     0x1.f11c54p-126f, 0.0f, 0x1.98ff2p-75f, 0x1.d6f0c8p-120f, 0.0f, 0x1.7ee216p-95f,
     0.0f, 0x1.065822p-67f, 0x1.388ad2p-50f, 0.0f, 0x1.95b858p-3f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f8f1bcp-17f, 0.0f, 0x1.0e8464p-122f, 0.0f, 0.0f, 0x1.0eee76p-124f,
     0x1.fa38e2p-98f, 0x1.fb9074p-48f, 0.0f, 0x1.0667f6p-52f, 0x1.0776e2p-9f, 0.0f,
     0.0f, 0x1.d0b29ep-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.aa25ecp-94f, 0x1.6dd94cp-89f,
     0x1.14af6ap-33f, 0x1.cd54b2p-126f, 0.0f, 0.0f, 0x1.bd3394p-49f, 0x1.a3a7fep-32f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.8dca1p-19f, 0x1.29ed14p-76f, 0x1.349dd6p-108f, 0.0f,
     0.0f, 0x1.48157ap-109f, 0.0f, 0.0f, 0x1.6c4c12p-44f, 0.0f, 0x1.ecb694p-15f, 0.0f,
     0x1.49692ep-106f, 0x1.22943ap-33f, 0.0f, 0x1.914dfp-26f, 0x1.744504p-75f,
     0x1.253592p-66f, 0x1.84902ep-44f, 0.0f, 0.0f, 0x1.1d8a94p-67f, 0x1.6631c4p-95f,
     0x1.187bcap-16f, 0.0f, 0x1.a89142p-62f, 0x1.45e5dap-84f, 0.0f, 0x1.415d68p-83f,
     0x1.3080f8p-105f, 0.0f, 0x1.85f6e2p-124f, 0x1.d3069ep-56f, 0.0f, 0.0f, 0.0f,
     0x1.2195b8p-79f, 0x1.d52ac2p-119f, 0x1.aa6278p-73f, 0x1.06c1fap-103f, 0.0f,
     0x1.233c5p-119f, 0x1.cb3c3ap-49f, 0.0f, 0.0f, 0x1.c4f8a6p-101f, 0x1.45f886p-47f,
     0x1.eed166p-94f, 0x1.2ab7eep-32f, 0.0f, 0x1.c0cf5ep-37f, 0x1.ac812ap-51f,
     0x1.5f64acp-35f, 0.0f, 0.0f, 0x1.5f2e36p-27f, 0x1.3addc4p-21f, 0.0f, 0.0f,
     0x1.783a28p-72f, 0.0f, 0x1.143258p-126f, 0.0f, 0x1.d0d56ep-121f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b40862p-121f, 0.0f, 0x1.3858acp-27f, 0.0f, 0.0f,
     0x1.62fec8p-107f, 0.0f, 0x1.29e7cp-30f, 0.0f, 0x1.931368p-55f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.6ce7cep-58f, 0.0f, 0x1.e7a302p-70f, 0.0f, 0x1.af688p-104f, 0.0f, 0.0f,
     0x1.e88682p-113f, 0.0f, 0x1.35d794p-109f, 0x1.eca6ep-59f, 0.0f, 0.0f,
     0x1.67e75ep-38f, 0.0f, 0.0f, 0.0f, 0x1.283a92p-118f, 0.0f, 0x1.0c490ap-106f,
     0x1.1057dap-39f, 0.0f, 0.0f, 0x1.213b94p-80f, 0.0f, 0.0f, 0x1.2fb45ep-11f,
     0x1.904a8ep-17f, 0x1.6dd186p-113f, 0x1.3de75cp-101f, 0.0f, 0x1.d08532p-89f, 0.0f,
     0x1.26c502p-12f, 0.0f, 0x1.64b976p-106f, 0.0f, 0x1.e1336ep-1f, 0.0f,
     0x1.444dcap-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0a53dp-18f, 0.0f, 0.0f, 0.0f,
     0x1.b9a398p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4db2acp-42f, 0x1.772fecp-60f,
     0x1.844544p-80f, 0x1.2e6c82p-104f, 0x1.271452p-75f, 0x1.40207p-58f, 0.0f,
     0x1.8d2de4p-74f, 0x1.e828d2p-121f, 0.0f, 0.0f, 0x1.36063p-73f, 0.0f,
     0x1.2ececcp-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.af6072p-86f, 0x1.41d91cp-69f,
     0x1.6288b4p-48f, 0x1.da2a14p-78f, 0x1.10f922p-95f, 0x1.92d5a2p-10f,
     0x1.4820f6p-122f, 0.0f, 0x1.453aa4p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.69274ep-9f, 0.0f, 0x1.a01ed2p-45f, 0.0f, 0.0f, 0x1.c60fcp-86f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.160486p-34f, 0x1.e7987ap-97f, 0.0f, 0.0f, 0x1.adf39ap-111f,
     0.0f, 0x1.e2347p-112f, 0x1.7f8a44p-43f, 0.0f, 0.0f, 0.0f, 0x1.ffb642p-97f, 0.0f,
     0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.2168a8p-38f, 0x1.5c8554p-79f, 0.0f,
     0x1.76253cp-21f, 0.0f, 0x1.f19f62p-85f, 0x1.f733fep-9f, 0x1.000442p-91f, 0.0f,
     0.0f, 0.0f, 0x1.3f2a8ap-37f, 0.0f, 0x1.c41076p-111f, 0x1.ddb64cp-19f, 0.0f, 0.0f,
     0x1.0b5212p-29f, 0.0f, 0.0f, 0.0f, 0x1.c6f7e2p-67f, 0x1.d9e1aep-19f,
     0x1.691012p-56f, 0x1.0ac85cp-77f, 0x1.038598p-76f, 0.0f, 0.0f, 0x1.a59f76p-17f,
     0x1.9660fp-50f, 0x1.a7c4aep-91f, 0.0f, 0.0f, 0x1.d667a4p-104f, 0x1.47fec8p-64f,
     0x1.5cc422p-76f, 0x1.b93daap-42f, 0x1.de5e1cp-96f, 0.0f, 0x1.76216ap-83f,
     0x1.218456p-96f, 0x1.bf0fc4p-72f, 0x1.ff019ep-60f, 0x1.cc028ap-43f, 0.0f,
     0x1.4ca40ep-69f, 0.0f, 0x1.55b97ap-28f, 0.0f, 0.0f, 0.0f, 0x1.23210cp-63f,
     0x1.1da1ap-105f, 0.0f, 0x1.7d6986p-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1f1462p-54f, 0x1.b73bf4p-79f, 0x1.0457fcp-112f, 0.0f, 0x1.bf0dd8p-26f, 0.0f,
     0x1.522a3cp-45f, 0x1.9dd6e2p-70f, 0x1.6d885ep-75f, 0x1.d53bcp-68f, 0.0f,
     0x1.be0fb8p-46f, 0.0f, 0x1.b03d8ep-51f, 0x1.bc339cp-1f, 0x1.76e90ep-73f, 0.0f,
     0x1.bf5e14p-84f, 0.0f, 0x1.ab9844p-5f, 0x1.434edep-47f, 0x1.f4b7aap-78f,
     0x1.005c6cp-2f, 0x1.2c95a2p-19f, 0.0f, 0x1.efe548p-23f, 0x1.285cep-125f, 0x1p0f,
     0.0f, 0x1.8a3a34p-111f, 0x1.3335fp-90f, 0.0f, 0.0f, 0.0f, 0x1.4823e8p-76f, 0.0f,
     0.0f, 0.0f, 0x1.9eb1ep-69f, 0x1.c00188p-82f, 0x1.557724p-61f, 0x1.97f918p-115f,
     0x1.651446p-62f, 0x1.cf520cp-13f, 0.0f, 0x1.5e3592p-103f, 0.0f, 0.0f,
     0x1.9dd982p-32f, 0x1.120a96p-97f, 0x1.46177cp-117f, 0.0f, 0.0f, 0x1.b1c7cap-47f,
     0x1.789e4cp-69f, 0.0f, 0x1.f73d9ep-125f, 0x1.302162p-89f, 0.0f, 0.0f,
     0x1.ece04p-117f, 0.0f, 0x1.f729c8p-115f, 0x1.46f054p-25f, 0.0f, 0.0f, 0.0f,
     0x1.d5b25p-107f, 0.0f, 0.0f, 0.0f, 0x1.595ee4p-109f, 0.0f, 0.0f, 0x1.811fcap-21f,
     0.0f, 0x1.93356p-118f, 0x1.dd4be4p-55f, 0.0f, 0.0f, 0.0f, 0x1.8a5564p-70f, 0.0f,
     0x1.e8abcap-40f, 0.0f, 0.0f, 0x1.7c7aa6p-6f, 0x1.0278cp-41f, 0x1.f32d04p-97f,
     0x1.781924p-16f, 0.0f, 0.0f, 0.0f, 0x1.9f9c2ep-68f, 0x1.f56c2p-64f, 0.0f,
     0x1.5b676p-93f, 0x1.a8856ap-98f, 0x1.daf136p-111f, 0.0f, 0.0f, 0x1.994cbp-118f,
     0x1.37074p-8f, 0x1.407216p-109f, 0x1.be9bf4p-10f, 0.0f, 0.0f, 0x1.0c5d32p-25f,
     0.0f, 0x1.d4c1f6p-82f, 0.0f, 0.0f, 0x1.839986p-90f, 0x1.6bf5fcp-37f,
     0x1.ba2966p-78f, 0.0f, 0.0f, 0.0f, 0x1.bb2914p-122f, 0.0f, 0.0f, 0x1.ef15c8p-92f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4367d8p-86f, 0.0f, 0x1.632528p-111f, 0.0f,
     0x1.8fb7ecp-58f, 0.0f, 0.0f, 0x1.88bdb4p-90f, 0x1.3a555ep-33f, 0x1.c18818p-38f,
     0x1.cea816p-126f, 0x1.04fbdep-81f, 0x1.73ecc6p-109f, 0.0f, 0.0f, 0x1.c5d766p-4f,
     0.0f, 0.0f, 0x1.599342p-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2022c2p-122f,
     0x1.ebbf7ep-78f, 0x1.cea9c4p-99f, 0.0f, 0x1.1d63dep-56f, 0x1.562d16p-3f, 0.0f,
     0.0f, 0x1.f366b2p-18f, 0x1.831782p-46f, 0x1.1f30e4p-84f, 0x1.141994p-46f, 0.0f,
     0.0f, 0.0f, 0x1.54362ep-124f, 0x1.c48224p-107f, 0.0f, 0x1.e184a8p-63f, 0.0f,
     0x1.f1fc82p-13f, 0x1.9ba7dep-105f, 0.0f, 0.0f, 0x1.705586p-48f, 0.0f,
     0x1.63aab8p-10f, 0x1.a0d9fep-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f208dep-1f, 0.0f,
     0x1.af7ed2p-76f, 0.0f, 0.0f, 0x1.a3e19p-92f, 0.0f, 0.0f, 0x1.909686p-17f,
     0x1.a1088cp-38f, 0x1.2134bep-49f, 0x1.9c79d2p-47f, 0x1.56632cp-56f,
     0x1.7962dap-37f, 0.0f, 0.0f, 0x1.fd01b8p-23f, 0x1.b4e502p-83f, 0x1.48317ap-75f,
     0.0f, 0.0f, 0x1.91a0f8p-94f, 0x1.5ce7b8p-87f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.25a6c4p-40f, 0x1.8d58b2p-1f, 0x1.469064p-27f, 0x1.48822cp-100f, 0.0f,
     0x1.ae95dp-98f, 0x1.4cb272p-77f, 0.0f, 0.0f, 0x1.6dbba6p-25f, 0.0f,
     0x1.0f1f0cp-34f, 0.0f, 0x1.416642p-98f, 0x1.7797b4p-68f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.2bb36ap-61f, 0x1.392facp-106f, 0x1.87c6fp-115f,
     0x1.e93bccp-4f, 0x1.80ecd6p-24f, 0.0f, 0x1.da8b22p-28f, 0.0f, 0.0f, 0.0f,
     0x1.fd5f92p-32f, 0.0f, 0x1.78a434p-70f, 0.0f, 0x1.b7fe66p-36f, 0.0f,
     0x1.070726p-64f, 0x1.61896p-49f, 0x1.9f42fp-28f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.86907cp-70f, 0x1.ffee02p-35f, 0.0f, 0.0f, 0.0f, 0x1.9a12ccp-122f,
     0x1.2cdafep-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e7ff4ap-94f, 0.0f, 0x1.d1925ep-41f,
     0.0f, 0x1.596fd6p-69f, 0.0f, 0.0f, 0x1.8a8ce6p-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.31f4f4p-24f, 0.0f, 0.0f, 0x1.9cef0ep-111f, 0.0f, 0.0f, 0.0f, 0x1.10c9f4p-32f,
     0.0f, 0x1.159bfp-31f, 0.0f, 0.0f, 0.0f, 0x1.b9e29ap-1f, 0.0f, 0.0f, 0.0f,
     0x1.b2f804p-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d90f3ep-42f, 0.0f,
     0x1.6b2ea8p-108f, 0x1.2c236cp-48f, 0.0f, 0.0f, 0x1.c86802p-107f, 0x1.20b682p-7f,
     0x1.48fad6p-36f, 0x1.4d7402p-73f, 0x1.f48c88p-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.607d0cp-12f, 0.0f, 0x1.7936fp-32f, 0.0f, 0.0f, 0x1.bab528p-78f,
     0x1.4f60a6p-112f, 0.0f, 0.0f, 0x1.6b223ep-52f, 0x1.7e2efep-98f, 0.0f, 0.0f,
     0x1.609892p-98f, 0.0f, 0x1.d065cap-6f, 0.0f, 0x1.2267ccp-21f, 0.0f, 0.0f,
     0x1.6d4372p-22f, 0x1.293ba2p-110f, 0.0f, 0x1.bf308p-60f, 0x1.09e04p-83f,
     0x1.0f304ep-81f, 0.0f, 0x1.86a31ep-64f, 0x1.1cd50cp-108f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.45f0bep-89f, 0x1.492a32p-72f, 0.0f, 0x1.f6096ep-75f, 0.0f, 0x1.cbc1ep-106f,
     0x1.71377ep-53f, 0.0f, 0x1.7abc3cp-106f, 0x1.cc5f42p-76f, 0.0f, 0x1.572ap-72f,
     0x1.44e144p-25f, 0x1.e3dcecp-14f, 0.0f, 0x1.3a98ep-50f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f341bcp-106f, 0.0f, 0.0f, 0x1.411a42p-50f, 0x1.a339a6p-45f, 0.0f,
     0x1.43c2f6p-120f, 0.0f, 0.0f, 0x1.49e312p-102f, 0.0f, 0x1.e5fa4p-4f, 0.0f,
     0x1.5f174cp-76f, 0x1.2bd556p-77f, 0x1.969f8cp-17f, 0.0f, 0x1.d225c4p-81f, 0.0f,
     0.0f, 0x1.c249eap-55f, 0.0f, 0.0f, 0x1.d80e4ep-68f, 0.0f, 0x1.47343ep-47f, 0.0f,
     0.0f, 0x1.d3279cp-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5b0878p-63f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.05f2fep-95f, 0x1.8d6e9ep-64f, 0.0f, 0x1.dc9744p-79f,
     0x1.717daep-126f, 0x1.5c2ed4p-100f, 0x1.4cf7c4p-89f, 0.0f, 0x1.db27ep-9f, 0.0f,
     0x1.21d54ap-60f, 0x1.da49a4p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9837dap-117f, 0.0f,
     0x1.db18e8p-103f, 0x1.9c9056p-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7aaf92p-10f,
     0.0f, 0.0f, 0.0f, 0x1.83142ep-15f, 0.0f, 0x1.c0d11ap-113f, 0.0f,
     0x1.b65348p-101f, 0x1.85ae9ep-72f, 0.0f, 0x1.3b0eep-67f, 0x1.e2f31p-120f, 0.0f,
     0.0f, 0x1.392dcp-50f, 0x1.3ce0e6p-91f, 0.0f, 0.0f, 0x1.6c9d1cp-75f,
     0x1.4029a4p-3f, 0x1.ece15ap-116f, 0.0f, 0x1.1daa02p-80f, 0.0f, 0.0f,
     0x1.fee67ep-93f, 0.0f, 0x1.b374fap-50f, 0.0f, 0x1.99f274p-20f, 0x1.95b4p-117f,
     0x1.28f6bap-105f, 0x1.d5db82p-6f, 0.0f, 0.0f, 0x1.89745ep-88f, 0.0f,
     0x1.72f0ecp-24f, 0.0f, 0x1.8f8edap-83f, 0.0f, 0x1.0c9ddp-54f, 0x1.996cf2p-124f,
     0.0f, 0.0f, 0x1.a3388ap-72f, 0.0f, 0x1.4b7aap-86f, 0x1.76006p-48f, 0x1p0f, 0.0f,
     0x1.e07376p-46f, 0x1.075e76p-64f, 0.0f, 0.0f, 0x1.c07c1p-115f, 0x1.25e6b8p-123f,
     0x1.242604p-5f, 0.0f, 0x1.ee578ep-89f, 0x1.273a62p-91f, 0.0f, 0.0f, 0.0f,
     0x1.1ee502p-14f, 0.0f, 0.0f, 0.0f, 0x1.20f8cp-7f, 0x1.9950a6p-47f, 0.0f,
     0x1.ca041ep-84f, 0x1.6caa96p-118f, 0x1.cc5e68p-35f, 0.0f, 0x1.60a5fp-54f,
     0x1.d5de5ep-98f, 0.0f, 0x1.a30976p-60f, 0.0f, 0x1.a9059ep-107f, 0x1.55e0bap-101f,
     0.0f, 0x1.fb4fe2p-55f, 0x1.163538p-85f, 0.0f, 0x1.e8b93ap-105f, 0.0f, 0.0f,
     0x1.e670e8p-117f, 0x1.ce1044p-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9b6ce8p-8f, 0.0f,
     0.0f, 0x1.e86e82p-125f, 0x1.6f392ap-95f, 0x1.372b5ap-99f, 0.0f, 0.0f,
     0x1.343f4p-32f, 0x1.881f1ep-53f, 0.0f, 0.0f, 0x1.afb69p-25f, 0.0f, 0.0f,
     0x1.1b52e4p-87f, 0x1.7fbeap-65f, 0.0f, 0.0f, 0x1.e75c66p-100f, 0x1.625fd2p-6f,
     0x1.4f9062p-69f, 0x1.42bf66p-50f, 0x1.148158p-81f, 0.0f, 0x1.1056a4p-57f,
     0x1.203c9cp-120f, 0.0f, 0x1.4e290cp-78f, 0x1.843226p-5f, 0x1.516906p-78f,
     0x1.bd6316p-92f, 0x1.1f21fcp-20f, 0.0f, 0x1.888cep-7f, 0x1.ac6702p-94f,
     0x1.d111eap-11f, 0.0f, 0x1.d7849ep-53f, 0.0f, 0x1.0fb604p-56f, 0.0f,
     0x1.21e118p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.618268p-24f, 0.0f,
     0x1.b93bbp-111f, 0.0f, 0.0f, 0.0f, 0x1.667c7p-85f, 0.0f, 0.0f, 0x1.6adc9p-47f,
     0x1.f1da56p-113f, 0x1.9bde9p-17f, 0x1.003f9cp-29f, 0x1.7f64b4p-67f, 0.0f, 0.0f,
     0x1.95cdb6p-103f, 0.0f, 0x1.9714ap-50f, 0.0f, 0.0f, 0.0f, 0x1.5f7f7p-117f,
     0x1.bd64e6p-26f, 0x1.3277b6p-92f, 0.0f, 0x1.db2838p-41f, 0x1.654e32p-111f, 0.0f,
     0.0f, 0x1.d9981p-38f, 0.0f, 0.0f, 0.0f, 0x1.b4c732p-116f, 0.0f, 0x1.458b22p-33f,
     0x1.31731cp-61f
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
            tmp2 = Sleef_copysignf1_purecfma(tmp0, tmp1);
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
    printf("Sleef_copysignf1_purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_copysignf1_purecfma bench acc %a\n", global_bench_acc);
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
