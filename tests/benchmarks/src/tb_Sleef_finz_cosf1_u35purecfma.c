/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_cosf1_u35purecfma.c --function \
 *     Sleef_finz_cosf1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.5ee3a8p-63f, 0.0f, 0.0f, 0x1.a04c98p-19f, 0x1.c3ec9cp-26f, 0x1.d0a39ep-66f,
     0.0f, 0x1.fc714p-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e0b04ap-19f, 0x1.1b7a48p-60f,
     0.0f, 0x1.79ef9ep-22f, 0.0f, 0.0f, 0.0f, 0x1.06c3a8p-29f, 0.0f, 0x1.a50588p-18f,
     0x1.03e7a8p-7f, 0.0f, 0.0f, 0.0f, 0x1.3fde98p-63f, 0x1.c2c486p-114f, 0.0f,
     0x1.501c7ap-28f, 0.0f, 0x1.440622p-104f, 0x1.1e72aep-111f, 0x1.291dbp-21f, 0.0f,
     0x1.779c02p-12f, 0x1.d5ae1ep-69f, 0.0f, 0.0f, 0x1.9c764ep-59f, 0x1.5dbdep-47f,
     0.0f, 0x1.33c24ep-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5afd14p-59f, 0x1.7bdb58p-92f,
     0x1.28bb1p-98f, 0x1.10ff26p-15f, 0x1.6d1762p-119f, 0.0f, 0x1.0cab94p-66f, 0.0f,
     0.0f, 0x1.d2eb9ap-41f, 0.0f, 0x1.8fdeeep-4f, 0.0f, 0.0f, 0.0f, 0x1.1a10acp-22f,
     0x1.0a81b6p-115f, 0.0f, 0x1.56ed9p-78f, 0.0f, 0.0f, 0.0f, 0x1.723ed6p-20f, 0.0f,
     0x1.881664p-11f, 0x1.2eb574p-99f, 0.0f, 0x1.c51ed6p-74f, 0x1.a8be3p-90f,
     0x1.a61286p-34f, 0.0f, 0.0f, 0x1.2ee8d8p-111f, 0.0f, 0.0f, 0x1.595602p-21f, 0.0f,
     0.0f, 0x1.ffcdb6p-56f, 0.0f, 0.0f, 0x1.1e1c02p-53f, 0.0f, 0x1.718784p-90f, 0.0f,
     0.0f, 0x1.00de84p-64f, 0x1.608ce2p-72f, 0x1.1dfd9p-47f, 0.0f, 0x1.408644p-114f,
     0.0f, 0.0f, 0x1.f6bbd4p-36f, 0.0f, 0x1.ea9616p-57f, 0.0f, 0.0f, 0.0f,
     0x1.30438p-62f, 0x1.ef0f94p-44f, 0x1.13b0aep-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4b7b9cp-61f, 0x1.b0efe4p-88f, 0x1.fe382ap-60f, 0.0f, 0.0f, 0x1.679266p-4f,
     0x1.4dd408p-122f, 0.0f, 0x1.4d0554p-77f, 0x1.2581b8p-27f, 0.0f, 0x1.615ap-87f,
     0.0f, 0x1.3107dcp-125f, 0x1.9e4466p-110f, 0x1.de73e2p-73f, 0x1.787dbap-113f,
     0.0f, 0x1.4da678p-30f, 0.0f, 0.0f, 0.0f, 0x1.3e38ecp-52f, 0x1.c4e704p-66f,
     0x1.19b438p-59f, 0.0f, 0x1.40962p-98f, 0x1.cae17ap-82f, 0.0f, 0x1.565f7cp-13f,
     0x1.227cbep-53f, 0x1.92831p-87f, 0.0f, 0x1.311696p-11f, 0x1.c0db62p-126f,
     0x1.979c08p-22f, 0x1.0a9ca8p-77f, 0x1.285b18p-104f, 0x1.1e1ee2p-87f,
     0x1.d6c106p-24f, 0.0f, 0.0f, 0.0f, 0x1.39f94cp-11f, 0x1.383332p-117f,
     0x1.90e84p-105f, 0.0f, 0x1.59dcd8p-33f, 0x1.c71576p-71f, 0x1.614636p-89f,
     0x1.5893ep-86f, 0.0f, 0.0f, 0x1.4d64dep-4f, 0x1.50e4dcp-45f, 0x1.056d4cp-8f,
     0.0f, 0x1.778652p-80f, 0x1.1bc1c2p-111f, 0x1.ca58bep-64f, 0x1.5e3a7ap-111f, 0.0f,
     0x1.4d2272p-104f, 0.0f, 0x1.520d3ap-27f, 0x1.088d14p-28f, 0x1.c5bc34p-65f, 0.0f,
     0.0f, 0x1.1c207p-53f, 0x1.f0dd14p-93f, 0x1.7662bp-55f, 0.0f, 0x1.c53b38p-105f,
     0.0f, 0x1.d1e28cp-40f, 0.0f, 0x1.845f5cp-107f, 0x1.60b4cep-99f, 0.0f, 0.0f, 0.0f,
     0x1.d50614p-39f, 0.0f, 0x1.bba3a2p-80f, 0x1.02c852p-94f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.588a86p-29f, 0.0f, 0.0f, 0x1.a912eep-99f, 0.0f, 0x1.99e2eep-61f,
     0x1.a032cp-45f, 0x1.2958cap-85f, 0x1.e86cd8p-33f, 0x1.3d2ddap-30f,
     0x1.767062p-6f, 0.0f, 0.0f, 0x1.9e84a2p-104f, 0x1.832562p-71f, 0.0f,
     0x1.45f4f6p-98f, 0.0f, 0x1.b105bep-34f, 0x1.cd176ap-125f, 0.0f, 0x1.932a4cp-45f,
     0.0f, 0x1.f157dap-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a0ff18p-123f, 0x1.a742a2p-86f,
     0x1.7a18b6p-45f, 0x1.b44fe4p-122f, 0.0f, 0.0f, 0x1.abd616p-36f, 0x1.43a56cp-49f,
     0.0f, 0x1.40372cp-33f, 0.0f, 0x1.4487d4p-70f, 0x1.ef9a54p-57f, 0.0f,
     0x1.6cd2eap-64f, 0x1.1f10ep-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9ee43ap-83f, 0.0f, 0.0f, 0x1.ad652p-19f, 0x1.350744p-97f, 0.0f,
     0x1.8c2324p-45f, 0.0f, 0x1.26f89ep-95f, 0.0f, 0.0f, 0x1.fc6892p-106f,
     0x1.832184p-100f, 0x1.93d2eap-69f, 0x1.bb9a64p-9f, 0x1.b0900ap-107f, 0.0f,
     0x1.b11deap-61f, 0x1.98efbap-71f, 0x1.9ed3eep-120f, 0.0f, 0x1.359036p-35f, 0.0f,
     0x1.02091ep-50f, 0x1.a806f8p-14f, 0x1.0daecap-36f, 0.0f, 0.0f, 0x1.3a646ep-7f,
     0.0f, 0x1.5d89ccp-80f, 0x1.9deb62p-117f, 0.0f, 0.0f, 0x1.ec8794p-8f, 0.0f, 0.0f,
     0x1.572b74p-27f, 0.0f, 0.0f, 0x1.7abbacp-4f, 0.0f, 0x1.907bb2p-52f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.fbc6ep-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9dc044p-73f,
     0x1.8afc82p-99f, 0.0f, 0.0f, 0x1.fded86p-10f, 0x1.6efe9cp-55f, 0.0f, 0.0f,
     0x1.3f6faep-27f, 0.0f, 0x1.527572p-34f, 0.0f, 0.0f, 0x1.0820fap-47f,
     0x1.075dep-62f, 0.0f, 0x1.961b3cp-116f, 0.0f, 0x1.07c4cep-33f, 0.0f,
     0x1.0af5f4p-90f, 0x1.bed224p-110f, 0x1.c32de4p-1f, 0x1.17d99p-19f,
     0x1.ef65f2p-37f, 0x1.c47822p-62f, 0x1.1afb5ep-85f, 0x1.8ba8dep-100f, 0.0f, 0.0f,
     0x1.8380c6p-25f, 0x1.0dd10cp-70f, 0.0f, 0x1.94dcd6p-45f, 0x1.fb3da8p-64f, 0.0f,
     0.0f, 0x1.20465cp-50f, 0.0f, 0x1.fd6af4p-53f, 0x1.fc064ep-7f, 0x1.ac1068p-30f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.efdc14p-92f, 0x1.ab047cp-73f,
     0x1.4ed7b4p-95f, 0x1.e696b2p-78f, 0x1.49ccc2p-97f, 0.0f, 0x1.7dacd6p-99f,
     0x1.72b27p-121f, 0x1.3e70eep-125f, 0.0f, 0x1.e2f83ap-74f, 0.0f, 0.0f, 0.0f,
     0x1.7e7bdp-77f, 0x1.09397ap-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.64488cp-54f, 0.0f,
     0x1.a2d30cp-91f, 0x1.7bf6aep-63f, 0.0f, 0.0f, 0.0f, 0x1.5a4c66p-2f,
     0x1.e2077ap-122f, 0.0f, 0x1.ba94b8p-103f, 0.0f, 0.0f, 0.0f, 0x1.77c1e2p-6f,
     0x1.813f16p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5f685ap-73f, 0.0f, 0x1.301e32p-51f,
     0x1.370fap-117f, 0.0f, 0.0f, 0x1.edbd92p-119f, 0x1.63e88ep-125f, 0.0f, 0.0f,
     0.0f, 0x1.f36baep-4f, 0x1.3b4e6p-85f, 0.0f, 0.0f, 0x1.01f3c8p-42f,
     0x1.172fap-14f, 0.0f, 0x1.6736e8p-77f, 0.0f, 0x1.cc7662p-16f, 0x1.17b52ep-17f,
     0.0f, 0.0f, 0x1.3bb7bcp-121f, 0.0f, 0x1.81e7fcp-30f, 0x1.c3f186p-71f, 0.0f, 0.0f,
     0x1.785fcep-96f, 0.0f, 0x1.6497a8p-9f, 0x1.85cc12p-18f, 0.0f, 0.0f,
     0x1.6a6676p-116f, 0.0f, 0.0f, 0x1.a1eabp-41f, 0.0f, 0.0f, 0x1.577112p-17f, 0.0f,
     0.0f, 0x1.17efdep-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6e8094p-31f,
     0x1.99e7c8p-1f, 0x1.6873e6p-92f, 0.0f, 0.0f, 0x1.cb82dcp-30f, 0x1.a7533p-69f,
     0x1.b48146p-109f, 0x1.0e7d9ep-51f, 0x1.701344p-120f, 0x1.06c28cp-33f,
     0x1.042aeap-72f, 0x1.a4163cp-107f, 0x1.1870aap-28f, 0x1.5c601p-96f,
     0x1.69844cp-120f, 0x1.fbdc28p-57f, 0x1.161456p-56f, 0x1.e678e2p-92f,
     0x1.46c6d6p-58f, 0.0f, 0.0f, 0.0f, 0x1.a4f7d4p-108f, 0.0f, 0.0f, 0.0f,
     0x1.c9efb4p-97f, 0.0f, 0x1.30ab5ap-54f, 0.0f, 0x1.3f0012p-7f, 0x1.1e6a5p-100f,
     0.0f, 0x1.a824b4p-102f, 0x1.6cd80ap-81f, 0x1.9d9268p-7f, 0.0f, 0.0f,
     0x1.86b41cp-69f, 0.0f, 0.0f, 0.0f, 0x1.2db626p-3f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.24bcb4p-97f, 0x1.83148ap-12f, 0x1.08d03cp-75f, 0.0f, 0x1.60df3cp-18f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8dc3fap-102f, 0.0f, 0.0f,
     0.0f, 0x1.abbfc2p-81f, 0.0f, 0x1.99322cp-13f, 0x1.e835a2p-27f, 0.0f, 0.0f, 0.0f,
     0x1.24d2dep-125f, 0x1.9b0c22p-95f, 0x1.4e5f82p-75f, 0x1.5ccab2p-20f, 0.0f, 0.0f,
     0x1.db8858p-113f, 0.0f, 0x1.02245ep-30f, 0x1.313f6ap-4f, 0x1.8d4598p-61f,
     0x1.ee599ap-54f, 0.0f, 0x1.56a33cp-68f, 0x1.fad636p-79f, 0.0f, 0.0f, 0.0f,
     0x1.97a83p-38f, 0.0f, 0x1.1918dap-58f, 0.0f, 0.0f, 0x1.f2157cp-13f,
     0x1.07cf26p-65f, 0.0f, 0.0f, 0.0f, 0x1.cfc992p-2f, 0.0f, 0.0f, 0x1.9c5cfap-73f,
     0x1.5e3fc6p-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e67932p-102f,
     0x1.83737ap-33f, 0x1.f07ddap-91f, 0x1.41784p-108f, 0x1.6d05d2p-87f,
     0x1.daf484p-20f, 0x1.fb80aep-68f, 0x1.093a7cp-63f, 0.0f, 0.0f, 0.0f,
     0x1.611cccp-11f, 0x1.5798ecp-84f, 0x1.c79d6p-11f, 0x1.349824p-49f,
     0x1.1e04bcp-69f, 0.0f, 0x1.6253a6p-36f, 0.0f, 0x1.29ae52p-50f, 0x1.56d80ep-39f,
     0.0f, 0.0f, 0.0f, 0x1.d4b9c4p-105f, 0.0f, 0x1.f7fa58p-85f, 0x1.7fe874p-72f,
     0x1.a18d02p-34f, 0x1.0c3c9p-60f, 0x1.6478cap-44f, 0x1.982fd8p-75f, 0.0f,
     0x1.d156dap-97f, 0x1.d56f2ap-13f, 0x1.d7b1dep-37f, 0.0f, 0.0f, 0.0f,
     0x1.34e76ap-48f, 0x1.2bab3ep-10f, 0x1.0c6f68p-67f, 0.0f, 0x1.b278a4p-86f,
     0x1.4306d6p-70f, 0x1.0ad376p-9f, 0.0f, 0x1.adfe12p-76f, 0.0f, 0.0f,
     0x1.43d7b8p-59f, 0x1.3b0258p-23f, 0.0f, 0.0f, 0x1.9911c4p-2f, 0.0f,
     0x1.2efb8cp-15f, 0x1.1dfe82p-106f, 0.0f, 0x1.7c1eaap-101f, 0.0f, 0x1.6f4dcep-93f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e809fap-51f, 0x1.9c188ap-99f, 0.0f, 0.0f, 0.0f,
     0x1.13cb1ep-15f, 0.0f, 0x1.46cc96p-15f, 0.0f, 0x1.3efd36p-55f, 0.0f, 0.0f, 0.0f,
     0x1.613212p-13f, 0.0f, 0x1.cf7dbep-124f, 0x1.b0a9f2p-23f, 0.0f, 0x1.b645bp-77f,
     0x1.72159p-59f, 0x1.81507p-98f, 0.0f, 0.0f, 0.0f, 0x1.b754acp-105f,
     0x1.91886ap-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f9bb82p-58f, 0x1.1deaf6p-50f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.2e833ep-21f, 0.0f, 0x1.6d04ep-118f, 0x1.e1952p-24f,
     0x1.02e422p-20f, 0.0f, 0.0f, 0.0f, 0x1.82154ap-102f, 0.0f, 0x1.bc48fcp-88f, 0.0f,
     0x1.a08ee4p-63f, 0x1.d2de6cp-33f, 0.0f, 0x1.d09b44p-14f, 0.0f, 0x1.974238p-61f,
     0.0f, 0x1.be6638p-74f, 0x1.705934p-22f, 0.0f, 0x1.a5767p-16f, 0.0f,
     0x1.8486bep-19f, 0x1.29f166p-7f, 0.0f, 0x1.c03e1p-102f, 0x1.4f627ap-105f,
     0x1.85d742p-77f, 0x1.0c4104p-49f, 0x1.21b696p-62f, 0.0f, 0.0f, 0.0f,
     0x1.cc848p-66f, 0.0f, 0x1.dcbbf6p-79f, 0x1.2ad4acp-86f, 0x1.4e812cp-66f,
     0x1.6eca34p-124f, 0x1.d04e26p-124f, 0x1.c19ed6p-34f, 0.0f, 0.0f, 0x1.359c1p-59f,
     0x1.5867e8p-122f, 0.0f, 0.0f, 0x1.e1e7fep-34f, 0x1.61572ap-36f, 0.0f,
     0x1.222d42p-1f, 0x1.9a0e76p-22f, 0.0f, 0.0f, 0x1.d4c246p-33f, 0.0f,
     0x1.551d8p-13f, 0.0f, 0x1.a2c922p-35f, 0x1.0345p-64f, 0.0f, 0.0f, 0x1.23188p-13f,
     0.0f, 0x1.f1d892p-54f, 0.0f, 0x1.ef3caap-35f, 0x1.9e2f52p-68f, 0x1.3ce862p-3f,
     0.0f, 0.0f, 0x1.82f23ap-95f, 0x1.1df6d4p-67f, 0x1.590152p-97f, 0.0f,
     0x1.85e44p-81f, 0x1.770b9ap-84f, 0x1.26275p-125f, 0.0f, 0x1.a19662p-22f, 0.0f,
     0x1.d41bdep-71f, 0x1.f69284p-69f, 0x1.190a9ep-66f, 0x1.e2a16p-16f,
     0x1.c09be6p-79f, 0x1.a66cep-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.41155ep-29f, 0x1.13192ep-69f, 0x1.9ffbfep-95f, 0x1.eb9df6p-77f,
     0x1.57c7b6p-26f, 0x1.161bb2p-51f, 0.0f, 0x1.b6ef72p-78f, 0x1.ed5eacp-16f, 0.0f,
     0x1.c6d17p-49f, 0x1.164672p-6f, 0.0f, 0x1.64192ap-10f, 0x1.7805aap-52f,
     0x1.08b41cp-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0c675ep-47f, 0.0f,
     0x1.8652ecp-61f, 0.0f, 0x1.0466e4p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.04d46ap-116f,
     0.0f, 0.0f, 0x1.1d86b6p-72f, 0.0f, 0x1.b8bf1cp-73f, 0x1.c67dd4p-113f,
     0x1.307654p-89f, 0.0f, 0x1.403fb8p-3f, 0.0f, 0.0f, 0x1.1ee9aep-16f, 0.0f, 0.0f,
     0x1.59ca82p-93f, 0.0f, 0x1.1ea904p-10f, 0.0f, 0x1.b76148p-32f, 0x1.0e9b44p-83f,
     0x1.78ac2cp-58f, 0.0f, 0x1.f85b3cp-96f, 0.0f, 0x1.04bf6ap-24f, 0x1.4d9adap-56f,
     0.0f, 0x1.c0c51ep-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.881bfap-2f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.bd3328p-63f, 0x1.88cdf8p-50f, 0.0f, 0x1.9c4f9p-36f,
     0.0f, 0x1.cfffecp-104f, 0x1.ef47b4p-59f, 0x1.4c266p-116f, 0.0f, 0x1.9f239p-101f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8f4fb8p-120f, 0x1.d29c7p-38f, 0x1.6d1794p-37f,
     0.0f, 0x1.26685p-46f, 0x1.c6b082p-67f, 0x1.28155p-100f, 0x1.e09dfp-103f, 0.0f,
     0x1.83d438p-55f, 0x1.9022f6p-49f, 0.0f, 0.0f, 0x1.bee1fap-83f, 0.0f, 0.0f, 0.0f,
     0x1.ca81a8p-4f, 0x1.766a88p-25f, 0.0f, 0x1.64704ep-91f, 0.0f, 0x1.c2f252p-42f,
     0x1.3e1482p-49f, 0.0f, 0x1.82f9a4p-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8b6b48p-20f,
     0.0f, 0.0f, 0x1.d7d59ap-99f, 0.0f, 0.0f, 0x1.5faaeap-74f, 0x1.8d4ac6p-4f, 0.0f,
     0x1.e7681ap-53f, 0.0f, 0x1.72cde2p-110f, 0x1.93678ap-40f, 0.0f, 0.0f,
     0x1.0b98a2p-112f, 0x1.197faep-50f, 0x1.5d4c98p-82f, 0x1.825c72p-30f,
     0x1.44503p-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.172f26p-97f, 0.0f, 0.0f,
     0x1.deb852p-98f, 0x1.8deb4ep-60f, 0.0f, 0x1.f56478p-72f, 0x1.3719d6p-83f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c92d0cp-36f, 0x1.4b2252p-72f, 0x1.6bdadcp-109f, 0.0f,
     0x1.e0cee2p-10f, 0x1.1ffbbap-10f, 0.0f, 0x1.d1b18p-121f, 0.0f, 0x1.1b464ep-100f,
     0.0f, 0.0f, 0x1.59db5cp-38f, 0x1.3d1534p-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.3af51cp-55f, 0x1.7f3b6ep-59f, 0.0f, 0x1.936a8ap-96f,
     0x1.8e81c6p-14f, 0x1.920ba8p-62f, 0.0f, 0.0f, 0x1.3c3042p-49f, 0x1.44004ep-19f,
     0x1.161f56p-97f, 0x1.0eec4p-124f, 0x1.831522p-91f, 0x1.03367p-83f,
     0x1.00a88ap-44f, 0.0f, 0.0f, 0x1.7e9c86p-15f, 0.0f, 0.0f, 0x1.46c1b4p-51f, 0.0f,
     0x1.bfc5ap-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0ea872p-33f, 0.0f, 0.0f,
     0x1.4ef528p-119f, 0x1.a39cfep-88f, 0x1.de0fa4p-57f, 0.0f, 0x1.a5bf76p-42f,
     0x1.37422p-13f, 0x1.e6a90ap-35f, 0.0f, 0x1.61430ep-91f, 0x1.24736p-21f,
     0x1.5eafcep-96f, 0.0f, 0x1.26c41ep-17f, 0.0f, 0.0f, 0.0f, 0x1.a31854p-40f,
     0x1.1b67a6p-75f, 0x1.1b528ap-117f, 0x1.8856ecp-121f, 0x1.e63e6cp-75f,
     0x1.72b5bep-1f, 0.0f, 0x1.6ba96cp-76f, 0.0f, 0.0f, 0.0f, 0x1.e117b6p-103f, 0.0f,
     0.0f, 0.0f, 0x1.885388p-110f, 0x1.962feep-32f, 0x1.c0c0c8p-122f, 0x1.f12b82p-50f,
     0.0f, 0x1.d3dc74p-54f, 0.0f, 0x1.9bee3ep-61f
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
            tmp1 = Sleef_finz_cosf1_u35purecfma(tmp0);
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
    printf("Sleef_finz_cosf1_u35purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_cosf1_u35purecfma bench acc %a\n", global_bench_acc);
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
