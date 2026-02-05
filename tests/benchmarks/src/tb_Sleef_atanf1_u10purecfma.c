/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_atanf1_u10purecfma.c --function \
 *     Sleef_atanf1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0x1.465fep-11f, 0x1.ea1c64p-103f, 0x1.fa6cdep-48f, 0x1.a120b2p-21f,
     0x1.a6aa94p-126f, 0x1.3732b4p-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bafa76p-118f, 0.0f, 0x1.5821p-44f, 0.0f, 0.0f, 0.0f, 0x1.067e8ep-116f,
     0x1.96f618p-121f, 0.0f, 0x1.badb0cp-92f, 0.0f, 0.0f, 0x1.97c6a6p-112f, 0.0f,
     0.0f, 0x1.352672p-61f, 0.0f, 0x1.49f41cp-104f, 0x1.1cc746p-54f, 0.0f, 0.0f, 0.0f,
     0x1.5036eep-117f, 0x1.9d8b3ap-17f, 0.0f, 0x1.d3e50ap-69f, 0x1.6d669ep-109f,
     0x1.9cb7b2p-72f, 0.0f, 0.0f, 0x1.3c4744p-37f, 0.0f, 0x1.878p-68f, 0x1.f1695p-13f,
     0x1.37ecc4p-20f, 0.0f, 0.0f, 0x1.6ffde8p-1f, 0.0f, 0.0f, 0x1.dd7acep-87f, 0.0f,
     0.0f, 0.0f, 0x1.1f2c08p-88f, 0x1.eb98dcp-25f, 0x1.df2a3cp-66f, 0.0f,
     0x1.c1b23p-74f, 0x1.ae92e4p-70f, 0x1.c327dcp-96f, 0x1.a6e544p-80f, 0.0f, 0.0f,
     0x1.5f3044p-31f, 0.0f, 0.0f, 0.0f, 0x1.404086p-93f, 0.0f, 0.0f, 0x1.0b2b7ep-38f,
     0x1.e5069ap-119f, 0.0f, 0x1.cfcb48p-68f, 0.0f, 0x1.28107ep-94f, 0.0f, 0.0f,
     0x1.fb3e3ap-116f, 0x1.9220fep-51f, 0.0f, 0x1.21a508p-56f, 0.0f, 0.0f,
     0x1.6e8b6ep-107f, 0.0f, 0x1.f3be4ap-99f, 0.0f, 0.0f, 0x1.4748dap-58f,
     0x1.74b7d6p-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2b698p-11f, 0.0f, 0.0f, 0.0f,
     0x1.283992p-33f, 0.0f, 0.0f, 0x1.c18e2ap-111f, 0x1.b96136p-45f, 0.0f, 0.0f,
     0x1.fb53c8p-11f, 0x1.1694acp-56f, 0.0f, 0x1.f21796p-27f, 0.0f, 0x1.32aa38p-53f,
     0x1.114824p-28f, 0x1.62f73cp-109f, 0.0f, 0x1.410668p-90f, 0x1.602852p-120f, 0.0f,
     0x1.72401ap-65f, 0.0f, 0x1.62f2dcp-68f, 0.0f, 0x1.fee79ap-32f, 0x1.f78d7ep-76f,
     0x1.0ee89ep-50f, 0.0f, 0.0f, 0x1.0d28f8p-106f, 0.0f, 0x1.e64144p-111f, 0.0f,
     0x1.793882p-82f, 0x1.d8341ap-89f, 0x1.a1c4p-76f, 0.0f, 0.0f, 0x1.8aa754p-102f,
     0x1.a26b7p-72f, 0x1.f56d2ap-1f, 0.0f, 0x1.f1bfap-101f, 0x1.6b3926p-112f, 0.0f,
     0x1.d3ef64p-44f, 0x1.fa3c74p-4f, 0.0f, 0x1.5aa534p-114f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d58cfcp-65f, 0x1.e9cb98p-80f, 0x1.4a7c84p-113f, 0.0f, 0.0f, 0.0f,
     0x1.0c162ep-106f, 0.0f, 0x1.1fca48p-51f, 0x1.6e8274p-15f, 0x1.fa27dp-29f, 0.0f,
     0x1.9ac2c2p-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fb84b6p-2f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4af7c6p-33f, 0x1.f05fp-117f, 0x1.c12e38p-88f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.575446p-5f, 0.0f, 0x1.b26f92p-40f, 0.0f, 0x1.ab74dap-102f,
     0x1.579dbcp-71f, 0.0f, 0.0f, 0.0f, 0x1.b0f476p-110f, 0x1.6305fcp-120f,
     0x1.ac4528p-30f, 0.0f, 0x1.e5e02cp-28f, 0x1.25d594p-5f, 0.0f, 0x1.5dfacap-31f,
     0.0f, 0.0f, 0x1.6a3dcp-90f, 0x1.16d22ap-82f, 0x1.7b4892p-89f, 0.0f,
     0x1.c54418p-33f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.6bf136p-81f, 0x1.eacea8p-54f,
     0.0f, 0x1.83188cp-56f, 0.0f, 0x1.1c5b3p-7f, 0.0f, 0.0f, 0x1.35c254p-31f,
     0x1.c80c68p-109f, 0x1.209412p-5f, 0.0f, 0.0f, 0.0f, 0x1.ff9558p-8f,
     0x1.5cfa54p-83f, 0x1.00495cp-88f, 0x1.228a84p-29f, 0.0f, 0x1p0f, 0.0f, 0.0f,
     0.0f, 0x1.391d34p-116f, 0x1.afa90ap-55f, 0.0f, 0x1.2deabcp-118f, 0.0f,
     0x1.cccabp-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1a9b4cp-93f, 0.0f, 0.0f,
     0x1.b1850ep-23f, 0.0f, 0.0f, 0x1.fbdf6ep-31f, 0.0f, 0.0f, 0.0f, 0x1.b3af18p-18f,
     0x1.462a3ep-26f, 0x1.6eb85cp-21f, 0.0f, 0x1.7258ep-92f, 0x1.98d42p-21f,
     0x1.47c594p-99f, 0.0f, 0x1.f1f7ap-73f, 0x1.60480ep-104f, 0x1.a57822p-10f, 0.0f,
     0.0f, 0x1.8b711ap-49f, 0.0f, 0x1.5eae5cp-19f, 0.0f, 0.0f, 0.0f, 0x1.edc648p-88f,
     0.0f, 0.0f, 0.0f, 0x1.cff198p-22f, 0x1.e4b5bcp-67f, 0x1.8140ep-58f,
     0x1.f9f048p-56f, 0.0f, 0x1.0b717ep-125f, 0x1.bb2f6ap-7f, 0.0f, 0.0f, 0.0f,
     0x1.3ee5d4p-50f, 0.0f, 0x1.69e49ep-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3c10dap-46f, 0x1.765956p-22f, 0.0f, 0.0f, 0x1.7cd5cp-61f, 0.0f,
     0x1.80bd5cp-16f, 0.0f, 0x1.630872p-106f, 0.0f, 0x1.4c8b9ep-41f, 0.0f,
     0x1.c663e8p-121f, 0x1.296464p-97f, 0.0f, 0x1.07be9cp-54f, 0.0f, 0.0f,
     0x1.434076p-52f, 0x1.82922cp-91f, 0x1.e01c5ep-36f, 0x1.7d37a2p-38f, 0.0f,
     0x1.8873cep-115f, 0.0f, 0x1.de29b2p-53f, 0.0f, 0.0f, 0x1.f65e44p-4f,
     0x1.11d83ep-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2bd92p-18f,
     0x1.dc91e2p-101f, 0x1.7b07c4p-43f, 0x1.604f7cp-82f, 0.0f, 0x1.615858p-48f,
     0x1.97ef96p-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.005ee2p-62f, 0x1.a78c3ap-86f,
     0x1.7e0ec2p-77f, 0x1.a8f348p-124f, 0.0f, 0x1.8822bap-102f, 0.0f, 0.0f,
     0x1.1b57a8p-102f, 0x1.6dfacp-78f, 0x1.1fd7bcp-121f, 0.0f, 0x1.f90914p-74f, 0.0f,
     0.0f, 0x1.31e4bep-44f, 0x1.94d798p-12f, 0.0f, 0x1.f4efbap-36f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.4d0406p-111f, 0.0f, 0x1.814b12p-11f, 0x1.ef865ep-106f, 0x1.bda28ap-4f,
     0.0f, 0.0f, 0x1.9a8988p-41f, 0.0f, 0.0f, 0.0f, 0x1.ec637p-56f, 0.0f,
     0x1.9c693ap-93f, 0x1.f502cep-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e51154p-48f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.0f6a7p-53f, 0.0f, 0x1.df1222p-67f, 0x1.8a7ffep-90f, 0.0f,
     0x1.6952b8p-51f, 0.0f, 0.0f, 0x1.7aa402p-108f, 0x1.884d06p-23f, 0x1.22e42ep-56f,
     0.0f, 0.0f, 0x1.11bd22p-6f, 0.0f, 0x1.e2674cp-19f, 0.0f, 0.0f, 0x1.682996p-116f,
     0.0f, 0.0f, 0.0f, 0x1.d546d8p-49f, 0x1.bee33cp-17f, 0.0f, 0x1.ba1da2p-53f, 0.0f,
     0x1.0edc7cp-108f, 0x1.5d02c8p-113f, 0x1.bbfff4p-4f, 0.0f, 0.0f, 0x1.5fd742p-41f,
     0.0f, 0x1.5c2a0ep-118f, 0x1.70699ep-117f, 0.0f, 0x1.28e576p-31f, 0x1.c62886p-65f,
     0x1p0f, 0.0f, 0.0f, 0x1.afbf12p-34f, 0x1.ea6318p-100f, 0x1.86f13cp-120f,
     0x1.990a9p-65f, 0x1.052ep-74f, 0x1.09d384p-119f, 0x1.1ba60cp-20f, 0.0f,
     0x1.f7376ap-62f, 0x1.10fa8p-106f, 0x1.5aa936p-23f, 0x1.a8a96p-120f, 0.0f, 0.0f,
     0x1.69f252p-42f, 0x1.ab61fap-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5665dcp-42f,
     0x1.2544d8p-12f, 0x1.d11938p-20f, 0x1.a52556p-29f, 0.0f, 0.0f, 0x1.abaa06p-30f,
     0x1.8fda62p-107f, 0x1.ea5f3p-111f, 0.0f, 0x1.eddb5ap-23f, 0x1.da442ep-115f, 0.0f,
     0x1.f010b6p-55f, 0x1.6f9bf8p-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1845d4p-79f,
     0x1.a0441p-93f, 0.0f, 0x1.9f9228p-107f, 0.0f, 0.0f, 0x1.1f21c6p-4f, 0.0f,
     0x1.8af58ap-80f, 0x1.2cc53ep-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1a5c72p-115f,
     0x1.00e95p-4f, 0x1.a3b008p-115f, 0x1.563da8p-113f, 0x1.4e279cp-66f, 0.0f, 0.0f,
     0.0f, 0x1.cb728p-50f, 0x1.37b0c2p-68f, 0.0f, 0.0f, 0x1.1c72f6p-82f,
     0x1.03104ap-117f, 0.0f, 0x1.c7a4c6p-124f, 0x1.05a804p-100f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.aa410cp-3f, 0.0f, 0.0f, 0x1.67ac3ep-87f, 0.0f, 0x1.e58d82p-104f, 0.0f,
     0x1.de0c28p-12f, 0.0f, 0x1.0045bep-28f, 0.0f, 0x1.68046ep-101f, 0x1.e0544ep-2f,
     0x1.db6fcep-118f, 0x1.00fd1ap-80f, 0x1.7fb7dp-20f, 0.0f, 0x1.e27f18p-48f,
     0x1.58fedep-72f, 0x1.c39aecp-51f, 0.0f, 0x1.bc19fp-42f, 0.0f, 0x1.3b91p-105f,
     0.0f, 0x1.3c6cbp-89f, 0.0f, 0x1.9535b8p-99f, 0.0f, 0x1.6315d6p-69f, 0.0f,
     0x1.f643fcp-58f, 0.0f, 0x1.ffb1d2p-126f, 0.0f, 0x1.3da2a4p-90f, 0x1.98d366p-14f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.cd4708p-62f, 0x1.d7916cp-82f, 0.0f, 0x1.9180e8p-99f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e2128ap-109f, 0.0f, 0.0f,
     0x1.4e9028p-62f, 0.0f, 0x1.12dedap-113f, 0x1.5b9512p-1f, 0x1.942996p-78f, 0.0f,
     0x1.d74912p-23f, 0x1.506f44p-55f, 0x1.6879f8p-54f, 0.0f, 0x1.a5a1f2p-92f, 0.0f,
     0x1.18e74cp-31f, 0.0f, 0x1.5eecfep-125f, 0x1.c00918p-53f, 0x1.6029dp-9f,
     0x1.d55848p-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f78646p-121f, 0x1.1fae68p-89f, 0.0f,
     0x1.7153cep-126f, 0.0f, 0x1.0c3832p-65f, 0x1.2d8d3ap-71f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d071c4p-102f, 0.0f, 0x1.d24a3ep-119f, 0.0f, 0x1.5b668p-31f, 0.0f,
     0x1.d87f1cp-114f, 0.0f, 0x1.a3ac1ap-56f, 0.0f, 0.0f, 0x1.822604p-47f, 0.0f, 0.0f,
     0.0f, 0x1.b765c2p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fc2bc8p-62f, 0.0f,
     0x1.14009p-111f, 0.0f, 0x1.bbaa92p-76f, 0x1.c4d47cp-29f, 0x1.bcd09p-10f, 0.0f,
     0x1.0813b4p-71f, 0x1.52809p-28f, 0x1.af6c56p-1f, 0.0f, 0x1.9943d6p-88f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d34e02p-118f, 0.0f, 0x1.78feeep-51f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2a6c38p-120f, 0x1.5f3ae4p-7f, 0x1.2b893ep-48f,
     0x1.627c52p-121f, 0.0f, 0x1.59065ep-91f, 0x1.7046dp-98f, 0.0f, 0x1.9c530ap-22f,
     0x1.9f3486p-11f, 0.0f, 0x1.bccd46p-102f, 0x1.d7778ap-20f, 0x1.79c932p-41f,
     0x1.e5ee7cp-106f, 0x1.e0d95ep-88f, 0.0f, 0.0f, 0x1.f1b1e4p-65f, 0.0f, 0.0f,
     0x1.f129bp-79f, 0.0f, 0.0f, 0.0f, 0x1.84b73p-5f, 0.0f, 0x1.5ca15cp-77f,
     0x1.98d51ep-51f, 0x1.4d0f08p-102f, 0x1.7349fcp-107f, 0.0f, 0x1.46cc52p-11f,
     0x1.5a3382p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f9bfb8p-18f, 0x1.8ab1e4p-18f, 0.0f,
     0x1.d73fbcp-42f, 0x1.c3b6acp-39f, 0x1.90c7fap-44f, 0x1.5c055ap-24f, 0.0f,
     0x1.83399p-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e7eb98p-42f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.77f1bp-58f, 0x1.78b59p-21f, 0x1.0876eep-36f,
     0x1.1b4b74p-106f, 0x1.c92038p-96f, 0.0f, 0.0f, 0.0f, 0x1.5b7406p-47f, 0.0f, 0.0f,
     0x1.ece02ep-2f, 0.0f, 0x1.2e32f6p-14f, 0x1.0962c8p-4f, 0.0f, 0.0f,
     0x1.502532p-3f, 0.0f, 0x1.4a15a2p-16f, 0x1.29f15ep-28f, 0.0f, 0x1.2298acp-123f,
     0.0f, 0x1.e03b2ep-70f, 0x1.005dc8p-3f, 0.0f, 0.0f, 0x1.838a52p-109f,
     0x1.29017cp-50f, 0.0f, 0x1.9a26e2p-78f, 0.0f, 0.0f, 0x1.90264p-51f, 0.0f, 0.0f,
     0x1.4b7122p-3f, 0x1.68026ap-76f, 0.0f, 0x1.779db4p-107f, 0.0f, 0x1.6b8abcp-107f,
     0.0f, 0x1.c886f6p-26f, 0x1.1949bep-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c7c506p-75f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.09f838p-42f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9b91bap-53f, 0x1.6ac944p-58f, 0.0f, 0.0f, 0x1.09b4fep-8f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.377b64p-78f, 0x1.63d33cp-28f,
     0x1.d36494p-26f, 0.0f, 0.0f, 0x1.f2fbb6p-96f, 0x1.7e181ap-111f, 0.0f, 0.0f,
     0x1.684118p-74f, 0.0f, 0x1.566552p-98f, 0x1.f95e7ep-92f, 0.0f, 0x1.68b3ap-17f,
     0x1.aae12cp-79f, 0.0f, 0.0f, 0x1.2e0bacp-117f, 0.0f, 0.0f, 0x1.05c336p-13f, 0.0f,
     0x1.f45c9p-54f, 0.0f, 0.0f, 0.0f, 0x1.6677ecp-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a413ap-90f, 0x1.cc6352p-100f, 0.0f, 0x1.ce6e26p-2f, 0x1.8f6434p-99f,
     0x1.4c58d2p-95f, 0x1.aec206p-64f, 0x1.303cdp-85f, 0.0f, 0x1.8c50e2p-84f,
     0x1.3817fep-57f, 0.0f, 0x1.98b9cep-33f, 0x1.57c3cep-25f, 0x1.16c0ep-40f,
     0x1.6d7dfcp-54f, 0.0f, 0x1.78f4dcp-122f, 0x1.1763dcp-79f, 0x1.37eee6p-58f, 0.0f,
     0.0f, 0x1.8fdfd2p-57f, 0.0f, 0.0f, 0.0f, 0x1.6d9c94p-23f, 0x1.639bd6p-30f,
     0x1.45b442p-24f, 0.0f, 0x1.5c2bbp-36f, 0x1.5a57dcp-34f, 0.0f, 0x1.d595b8p-67f,
     0x1p0f, 0x1.ca9a3ap-24f, 0.0f, 0x1.5d2c18p-37f, 0.0f, 0.0f, 0x1.abaa28p-37f,
     0.0f, 0x1.bc7fdep-25f, 0.0f, 0x1.3b0102p-70f, 0.0f, 0x1.a87696p-118f,
     0x1.86d804p-91f, 0x1.ba3c96p-65f, 0.0f, 0.0f, 0.0f, 0x1.a3e08ap-126f, 0.0f, 0.0f,
     0.0f, 0x1.ede684p-114f, 0.0f, 0x1.9a10eap-47f, 0.0f, 0x1.111a9ap-57f, 0.0f,
     0x1.ac190ap-53f, 0.0f, 0x1.9e4ebcp-56f, 0x1.33d9d2p-120f, 0x1.8e85dap-65f,
     0x1.b51406p-122f, 0.0f, 0x1.c7d98ap-122f, 0x1.948802p-79f, 0.0f, 0.0f, 0.0f,
     0x1.b41788p-107f, 0.0f, 0x1.2ee608p-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2661a4p-101f, 0.0f, 0x1.d07a62p-80f, 0.0f, 0x1.b1a51ap-16f, 0x1.30582p-97f,
     0.0f, 0x1.96b9a4p-19f, 0x1.60bfa8p-90f, 0.0f, 0.0f, 0.0f, 0x1.5ad388p-100f,
     0x1.0583eep-71f, 0x1.9aca48p-74f, 0.0f, 0.0f, 0.0f, 0x1.eefb8p-102f,
     0x1.e377d6p-96f, 0x1.b8265ap-104f, 0.0f, 0x1.d3992ep-70f, 0.0f, 0.0f, 0.0f,
     0x1.86322cp-21f, 0x1.4d1c4ap-11f, 0x1.8bc1f8p-4f, 0x1.5db26p-100f,
     0x1.3c3892p-110f, 0.0f, 0x1.aae3bap-26f, 0x1.dd77dp-86f, 0x1.a3dec4p-45f, 0.0f,
     0x1.904d98p-49f, 0x1.32a1b8p-121f, 0.0f, 0x1.b98f28p-51f, 0.0f, 0x1.87e06ep-55f,
     0x1.69e4fcp-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a1a2fep-97f, 0.0f, 0x1.97809cp-36f,
     0x1.fea034p-11f, 0x1.6b1f1ep-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4ecbc4p-56f, 0x1.a9471cp-112f, 0.0f, 0.0f, 0x1.6f9aeep-12f, 0x1.4bc6f4p-43f,
     0.0f, 0x1.ccc2fcp-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bf748p-89f, 0.0f,
     0.0f, 0x1.773972p-40f, 0x1.b68162p-25f, 0.0f, 0x1.a583ccp-35f, 0.0f,
     0x1.13c3a8p-57f, 0.0f, 0.0f, 0x1.47ebbcp-63f, 0x1.adb8ecp-78f, 0x1.37dd1p-7f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9b202p-31f, 0.0f, 0.0f, 0x1.bfa0f4p-77f, 0.0f,
     0x1.96a59cp-17f, 0x1.a1ce24p-37f, 0.0f
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
            tmp1 = Sleef_atanf1_u10purecfma(tmp0);
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
    printf("Sleef_atanf1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_atanf1_u10purecfma bench acc %a\n", global_bench_acc);
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
