/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_powf1_u10purecfma.c --function Sleef_powf1_u10purecfma \
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
     0x1.0f923cp-6f, 0x1.6d1984p-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2dba9cp-30f,
     0x1.938516p-77f, 0x1.e206aep-67f, 0.0f, 0x1.6f833p-7f, 0x1.c65a88p-84f,
     0x1.1f52f6p-122f, 0.0f, 0x1.8478dep-37f, 0.0f, 0x1.956eb6p-100f, 0x1.58c824p-22f,
     0.0f, 0.0f, 0x1.ba4c6p-17f, 0x1.2635cp-24f, 0.0f, 0.0f, 0x1.e28f7cp-124f,
     0x1.56082ap-63f, 0.0f, 0.0f, 0x1.e82dc2p-114f, 0.0f, 0x1.4490fcp-96f, 0.0f, 0.0f,
     0x1.10c296p-29f, 0x1.9fd878p-97f, 0x1.6c1678p-63f, 0.0f, 0x1.570f0cp-71f, 0.0f,
     0.0f, 0.0f, 0x1.32692ep-57f, 0.0f, 0.0f, 0x1.facd7p-54f, 0.0f, 0x1.2e381p-80f,
     0x1.c94316p-101f, 0x1.5339f4p-91f, 0.0f, 0x1.c4f2fcp-126f, 0.0f, 0.0f, 0.0f,
     0x1.5138p-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e05412p-41f, 0x1.3cfee4p-74f,
     0x1.2df9a4p-3f, 0x1.34cd9ap-114f, 0.0f, 0x1.31625ap-15f, 0x1.90106ep-13f, 0.0f,
     0x1.aba778p-2f, 0.0f, 0x1.674cd6p-57f, 0x1.101c38p-85f, 0x1.b68ec6p-119f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2af654p-25f, 0x1.f5302p-80f, 0x1.b63cdap-88f,
     0x1.a7ac98p-26f, 0x1.cf5574p-110f, 0x1.76098ep-70f, 0x1.d798f4p-49f, 0.0f, 0.0f,
     0.0f, 0x1.6b6356p-53f, 0x1.0a287cp-4f, 0x1.5ab37ep-78f, 0x1.ad694cp-19f,
     0x1.b95a84p-62f, 0x1.4f5168p-22f, 0.0f, 0x1.0c83bp-44f, 0x1.d14608p-87f,
     0x1.66564p-25f, 0x1.19ae9cp-84f, 0.0f, 0.0f, 0x1.6cfb58p-43f, 0.0f, 0.0f, 0x1p0f,
     0x1.922996p-47f, 0.0f, 0x1.e5f7e6p-38f, 0.0f, 0x1.fecd06p-31f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1b535p-87f, 0x1.1d312ap-55f, 0x1.fe2b64p-47f, 0x1.875332p-17f,
     0.0f, 0.0f, 0.0f, 0x1.7d949cp-107f, 0.0f, 0x1.3828ap-117f, 0x1.d7cf36p-21f,
     0x1.19a6c4p-115f, 0.0f, 0.0f, 0x1.d6e3dcp-20f, 0.0f, 0x1.2cda36p-2f, 0.0f,
     0x1.155584p-12f, 0x1.513ca6p-18f, 0x1.50969ep-83f, 0.0f, 0x1.1ca1cep-28f, 0.0f,
     0x1.8d5532p-28f, 0.0f, 0x1.fd4244p-27f, 0x1.9e8eeep-67f, 0.0f, 0x1.68180ep-1f,
     0x1.e20344p-117f, 0x1.ab2d86p-52f, 0x1.ed185p-43f, 0x1.9bf396p-83f,
     0x1.99dd9ep-55f, 0x1.7ca7e8p-81f, 0x1.328c44p-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f9649ap-120f, 0.0f, 0x1.f7803ep-47f, 0x1.aa0086p-15f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2834fcp-12f, 0.0f, 0.0f, 0x1.58a3acp-125f, 0x1.6201d4p-72f, 0x1.ce583ep-69f,
     0x1.3dc878p-42f, 0x1.200ce4p-11f, 0.0f, 0.0f, 0x1.607712p-106f, 0x1.1aadf2p-56f,
     0x1.07d0c4p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8ee6b8p-8f,
     0x1.3ac27cp-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b612b8p-13f,
     0x1.5f9d54p-45f, 0.0f, 0x1.eb9956p-34f, 0x1.25a76cp-7f, 0.0f, 0.0f,
     0x1.8a7276p-5f, 0.0f, 0x1.b739e8p-75f, 0.0f, 0x1.ff7a46p-98f, 0.0f,
     0x1.7efb96p-87f, 0x1.9ed622p-111f, 0.0f, 0.0f, 0x1.67d56cp-41f, 0x1.1e0022p-8f,
     0.0f, 0.0f, 0x1.c1b00ap-106f, 0.0f, 0x1.f96f26p-30f, 0.0f, 0.0f, 0.0f,
     0x1.9c9058p-98f, 0x1.dd22dp-124f, 0x1.0d39b8p-95f, 0.0f, 0.0f, 0x1.bd39bep-91f,
     0.0f, 0.0f, 0x1.1bce34p-125f, 0.0f, 0x1.036724p-46f, 0.0f, 0x1.318376p-27f, 0.0f,
     0.0f, 0x1.593a4ap-17f, 0x1.abae98p-34f, 0.0f, 0x1.04e596p-57f, 0x1.8894aep-1f,
     0x1.1b0878p-27f, 0x1.6ca394p-72f, 0x1.c18202p-57f, 0x1.a9cd8cp-55f,
     0x1.95cd44p-87f, 0x1.375414p-9f, 0.0f, 0.0f, 0.0f, 0x1.721b7cp-108f,
     0x1.ef9b82p-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.093464p-79f, 0.0f, 0x1.6c16b2p-10f,
     0.0f, 0x1.e47ceap-113f, 0.0f, 0x1.f2353ap-115f, 0x1.02c188p-68f, 0x1.02dd96p-57f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3b0fc8p-43f, 0x1.66367ep-117f, 0x1.bc369p-100f, 0.0f,
     0x1.f15a6ep-25f, 0x1.5f3dd6p-8f, 0.0f, 0x1.5b7a84p-113f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.d02194p-36f, 0x1.4f680cp-65f, 0.0f, 0x1.a779eap-8f, 0x1.421fe4p-94f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d146aep-45f, 0.0f, 0x1.e18b4cp-48f,
     0x1.b2576ep-101f, 0x1.4979f6p-87f, 0.0f, 0x1.fbf6f2p-30f, 0.0f, 0x1.87a5dep-45f,
     0.0f, 0x1.930f52p-119f, 0.0f, 0x1.dfbd9cp-41f, 0x1.9b7714p-19f, 0.0f, 0.0f,
     0x1p0f, 0.0f, 0x1.52d1e4p-47f, 0x1.5bd552p-77f, 0x1.0dc03cp-101f, 0.0f,
     0x1.7d4786p-85f, 0x1.884694p-65f, 0x1.4c2406p-117f, 0x1p0f, 0.0f,
     0x1.9c089cp-53f, 0x1.18d096p-107f, 0.0f, 0.0f, 0x1.bb9fb4p-73f, 0x1.75f5fap-124f,
     0x1.e8a4ep-96f, 0.0f, 0x1.ee6a86p-13f, 0.0f, 0x1.425974p-27f, 0.0f, 0.0f, 0.0f,
     0x1.d3a634p-104f, 0.0f, 0.0f, 0x1.0f0156p-58f, 0.0f, 0.0f, 0.0f, 0x1.05100ap-79f,
     0x1.9b9798p-36f, 0.0f, 0.0f, 0x1.674cfp-115f, 0x1.44e0f4p-46f, 0x1.a722bcp-37f,
     0.0f, 0x1.6c8ccap-57f, 0.0f, 0x1.8c2f52p-1f, 0x1.fd2958p-5f, 0x1.e0f42ep-22f,
     0x1.00e776p-86f, 0x1.6582cap-5f, 0x1.4620ecp-102f, 0x1.3d1fe6p-10f, 0.0f, 0.0f,
     0x1.859e9cp-70f, 0.0f, 0x1.b360b4p-29f, 0.0f, 0x1.601522p-8f, 0x1.82da9ap-99f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.cf3fa4p-57f, 0.0f, 0.0f, 0x1.c6141ap-126f, 0.0f,
     0x1.93b004p-8f, 0.0f, 0.0f, 0.0f, 0x1.e307dep-67f, 0x1.047d4ep-41f,
     0x1.46a9c2p-112f, 0x1.05257p-46f, 0.0f, 0x1.61531ap-32f, 0.0f, 0x1.93659p-30f,
     0.0f, 0x1.062568p-5f, 0x1.73da94p-37f, 0x1.01c26ep-30f, 0x1.ba4988p-48f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ed51e4p-4f, 0x1.bc5cf2p-117f, 0.0f, 0.0f, 0x1.ccd704p-32f,
     0x1.fd288ep-41f, 0x1.754cf8p-106f, 0.0f, 0x1.c4d87p-55f, 0x1.2ea41p-21f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eceb3ep-72f, 0.0f, 0x1.547056p-64f,
     0x1.48b1cep-28f, 0x1.b41776p-23f, 0.0f, 0x1.bb6122p-13f, 0.0f, 0x1.719242p-29f,
     0x1.5b4948p-120f, 0.0f, 0x1.f1a30ap-65f, 0.0f, 0x1.8fb0e4p-115f, 0.0f,
     0x1.910774p-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6c0b4ep-35f, 0.0f,
     0x1.f1cd76p-34f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.48b0a4p-61f, 0.0f, 0.0f,
     0x1.b347bap-17f, 0x1.cb58b2p-110f, 0x1.e838ap-9f, 0.0f, 0x1.cf3a7ap-17f, 0.0f,
     0.0f, 0x1.1f37a8p-41f, 0x1.a809c6p-95f, 0x1.3bfedap-110f, 0x1.7a4d68p-64f, 0.0f,
     0x1.cdcb8ep-61f, 0x1.a58802p-84f, 0x1.23ad5ep-86f, 0.0f, 0.0f, 0x1.843562p-117f,
     0.0f, 0x1.87f2acp-30f, 0x1.77efc6p-7f, 0x1.5f7b3cp-108f, 0.0f, 0x1.7c1f62p-93f,
     0.0f, 0x1.e1b062p-1f, 0x1.a546ap-19f, 0x1.4aac4ap-32f, 0.0f, 0x1.4a3b3p-20f,
     0.0f, 0x1.e0ffaep-69f, 0x1.8ed2bp-33f, 0.0f, 0x1.644d2ap-102f, 0.0f,
     0x1.08df66p-81f, 0x1.17a97p-60f, 0.0f, 0x1.cffa86p-28f, 0.0f, 0x1.838bfep-107f,
     0x1.b4821p-51f, 0x1.3c70dep-55f, 0x1.caa562p-118f, 0.0f, 0x1.39078ep-97f,
     0x1.61e548p-30f, 0x1.6c5a44p-28f, 0x1.c5d3acp-41f, 0x1.bfa89ep-38f,
     0x1.909374p-9f, 0.0f, 0.0f, 0x1.e93de4p-26f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bb23cap-35f, 0x1.f28bdep-6f, 0x1.7b1bd4p-15f, 0.0f, 0.0f, 0.0f,
     0x1.a84fa8p-26f, 0.0f, 0x1.c4913ep-79f, 0.0f, 0x1.4c9bc6p-7f, 0.0f, 0.0f,
     0x1.df1802p-44f, 0x1.c12da4p-64f, 0.0f, 0x1.0a6fbp-1f, 0.0f, 0.0f, 0.0f,
     0x1.dcd19p-48f, 0.0f, 0x1.37d6e6p-10f, 0.0f, 0x1.09603cp-77f, 0.0f, 0.0f, 0.0f,
     0x1.255c2ep-65f, 0x1.1f97bcp-98f, 0x1.c49dfcp-56f, 0.0f, 0.0f, 0x1.51e9dep-118f,
     0x1.76d594p-36f, 0x1.b472a2p-5f, 0x1.af2a2ep-84f, 0x1.09e178p-104f, 0.0f, 0.0f,
     0x1.ef9bfep-106f, 0.0f, 0.0f, 0.0f, 0x1.f05e96p-115f, 0x1.7841e8p-38f, 0.0f,
     0x1.2c8116p-30f, 0.0f, 0x1.4c5a2cp-86f, 0x1.2048c4p-85f, 0x1.f12fdcp-7f,
     0x1.815744p-96f, 0x1.810844p-72f, 0.0f, 0.0f, 0x1.1bf194p-62f, 0x1.1e027p-42f,
     0x1.e77984p-117f, 0x1.5d5a58p-101f, 0.0f, 0x1.040d3ap-39f, 0x1.f87298p-83f,
     0x1.1f0ce8p-105f, 0.0f, 0x1.ebcbep-20f, 0x1.c7ee0ep-116f, 0.0f, 0x1.0acfc2p-24f,
     0x1.1eae24p-25f, 0x1.32a646p-44f, 0.0f, 0x1.91e282p-113f, 0.0f, 0x1.4b7478p-123f,
     0.0f, 0.0f, 0.0f, 0x1.73e1dp-7f, 0x1.df7b34p-65f, 0x1.cb0a58p-57f,
     0x1.afe6f2p-74f, 0x1.6c1eb6p-34f, 0x1.ed2edep-124f, 0x1.b77662p-34f,
     0x1.5c23b2p-79f, 0x1.dd1644p-113f, 0x1.12db8ep-57f, 0.0f, 0x1.894258p-52f,
     0x1.72c706p-50f, 0x1.b2d164p-78f, 0x1.81cc9p-16f, 0x1.62b91ap-107f, 0.0f,
     0x1.794dcep-34f, 0.0f, 0x1.11068ep-7f, 0x1.068b6ap-82f, 0x1.e28868p-68f, 0.0f,
     0x1.99f3e8p-91f, 0.0f, 0x1.42d0eap-23f, 0x1.aa99ap-68f, 0.0f, 0x1.273346p-108f,
     0x1.3541ecp-41f, 0.0f, 0x1.fccc84p-122f, 0.0f, 0.0f, 0x1.4c3e08p-73f,
     0x1.847e76p-53f, 0x1.855b6ep-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b4ee36p-14f,
     0x1.469d08p-86f, 0.0f, 0x1.9b216cp-43f, 0x1.22191cp-52f, 0x1.33de6cp-79f, 0.0f,
     0.0f, 0x1.2f0608p-42f, 0x1.96ae6cp-104f, 0.0f, 0.0f, 0x1.606938p-50f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.8180a2p-104f, 0x1.0caf02p-119f, 0x1.90b9eap-54f,
     0x1.872e4ep-86f, 0.0f, 0.0f, 0x1.8c177cp-10f, 0.0f, 0.0f, 0.0f, 0x1.ac2afap-24f,
     0x1p0f, 0.0f, 0.0f, 0x1.0e945ap-73f, 0x1.3ec4ep-120f, 0x1.0c365p-67f, 0.0f, 0.0f,
     0.0f, 0x1.efbfcp-36f, 0x1.317e8ep-112f, 0x1.a2fd96p-21f, 0x1.cfab5ap-67f, 0.0f,
     0x1.f2b0c8p-93f, 0x1.ccf654p-39f, 0x1.f495e6p-91f, 0.0f, 0x1.3e9f04p-89f,
     0x1.26d736p-50f, 0.0f, 0x1.eca3ecp-16f, 0.0f, 0.0f, 0x1.960ad6p-98f,
     0x1.8906b4p-5f, 0.0f, 0x1.ae0e26p-78f, 0x1.d0e426p-7f, 0.0f, 0.0f, 0.0f,
     0x1.6346f6p-6f, 0.0f, 0x1.88cb2cp-97f, 0.0f, 0.0f, 0x1.d850ccp-48f,
     0x1.4cc27cp-29f, 0.0f, 0.0f, 0x1.6d378cp-79f, 0x1.60ac6ap-109f, 0x1.699df2p-31f,
     0.0f, 0x1.7615f4p-26f, 0x1.a407ccp-6f, 0x1.2853fcp-109f, 0.0f, 0x1.822854p-125f,
     0.0f, 0.0f, 0.0f, 0x1.a91f4cp-59f, 0.0f, 0.0f, 0x1.6584b6p-47f, 0.0f,
     0x1.991792p-50f, 0.0f, 0.0f, 0x1.a685fcp-93f, 0x1.4e1e82p-66f, 0.0f,
     0x1.c5bdfap-7f, 0.0f, 0x1.92f242p-74f, 0x1.81bfc6p-85f, 0.0f, 0.0f,
     0x1.668868p-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e83a3ap-107f, 0x1.360aaap-27f,
     0x1.17e0e6p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.278588p-18f, 0.0f, 0x1.d3187ep-86f,
     0.0f, 0x1.92319cp-2f, 0x1.1450b2p-56f, 0.0f, 0x1.043a5ap-36f, 0.0f, 0.0f, 0.0f,
     0x1.8c51bep-120f, 0.0f, 0x1.aa43b2p-59f, 0.0f, 0x1.bb9964p-4f, 0.0f,
     0x1.c75584p-102f, 0.0f, 0x1.b46d62p-90f, 0x1.b52b4p-13f, 0x1.450bbap-43f, 0.0f,
     0x1.b6f3dcp-18f, 0x1.72301p-13f, 0x1.e96b88p-98f, 0.0f, 0.0f, 0.0f,
     0x1.3ebfcap-63f, 0x1.006682p-76f, 0.0f, 0x1.64174cp-27f, 0.0f, 0x1.6d5a84p-63f,
     0x1.f0caa4p-58f, 0x1.0a3094p-45f, 0.0f, 0.0f, 0x1.44732cp-64f, 0x1.39ea46p-123f,
     0x1.adb972p-25f, 0.0f, 0.0f, 0x1.8d558cp-53f, 0.0f, 0x1.42e82cp-25f, 0.0f,
     0x1.c785bcp-75f, 0.0f, 0x1.90f9d2p-110f, 0x1.34204ap-79f, 0x1.54e854p-15f, 0.0f,
     0x1.2d7f3ap-68f, 0x1.045cap-72f, 0x1.9075d4p-66f, 0.0f, 0x1.adbf66p-2f,
     0x1.51845cp-89f, 0.0f, 0x1.0d7bfcp-88f, 0.0f, 0.0f, 0x1.c30848p-22f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.45366cp-2f, 0x1.3125eep-26f, 0x1.fe637ap-9f,
     0x1.da06ccp-49f, 0x1.0e87d4p-113f, 0x1.a62714p-77f, 0.0f, 0x1.b1010ap-82f, 0.0f,
     0.0f, 0x1.88d91ap-125f, 0.0f, 0.0f, 0x1.c67468p-20f, 0.0f, 0x1.22d43p-42f,
     0x1.7875c2p-54f, 0.0f, 0x1.3de912p-86f, 0.0f, 0.0f, 0x1.fc804p-63f,
     0x1.ffeed2p-80f, 0.0f, 0.0f, 0x1.67c50ap-4f, 0.0f, 0.0f, 0x1.c19e76p-82f,
     0x1.050564p-44f, 0.0f, 0x1.e7a634p-39f, 0.0f, 0x1.fa38e4p-13f, 0.0f,
     0x1.84f18ap-32f, 0.0f, 0x1.aa9878p-29f, 0x1.6742dap-70f, 0.0f, 0.0f,
     0x1.84f274p-1f, 0.0f, 0.0f, 0x1.f7d7e4p-112f, 0x1.251a2p-68f, 0x1.e253bap-12f,
     0.0f, 0.0f, 0x1.0ca6d4p-88f, 0x1.6b337cp-14f, 0x1.0324b2p-1f, 0.0f,
     0x1.1479f4p-114f, 0.0f, 0.0f, 0.0f, 0x1.a5820cp-99f, 0.0f, 0.0f, 0.0f,
     0x1.fe5e7cp-75f, 0.0f, 0.0f, 0.0f, 0x1.54d9c2p-38f, 0.0f, 0x1.011486p-84f, 0.0f,
     0.0f, 0x1.6242ecp-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0f3aa6p-49f,
     0x1.c4dd22p-96f, 0.0f, 0x1.529462p-39f, 0x1.71ad28p-29f, 0.0f, 0x1.85690ap-87f,
     0x1.71c3d6p-47f, 0.0f, 0.0f, 0x1.607a74p-101f, 0x1.b71a38p-11f, 0x1.4a755cp-38f,
     0.0f, 0x1.c1e4c2p-108f, 0.0f, 0x1.1e71a8p-8f, 0.0f, 0.0f, 0.0f, 0x1.04e59ap-73f,
     0.0f, 0.0f, 0x1.3c2008p-116f, 0.0f, 0x1.1e9d6p-30f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.672fd4p-70f, 0.0f, 0.0f, 0.0f, 0x1.54f6c6p-126f, 0.0f, 0x1.4926f6p-40f, 0.0f,
     0.0f, 0x1.df60d2p-102f, 0.0f, 0x1.b4a886p-69f, 0.0f, 0.0f, 0x1.d30b04p-121f,
     0.0f, 0.0f, 0x1.96c97ap-120f, 0x1.ea924ap-68f, 0.0f, 0x1.92c6f4p-29f,
     0x1.64cc0ap-46f, 0.0f, 0.0f, 0.0f, 0x1.789bp-66f, 0.0f, 0.0f, 0.0f,
     0x1.bdaba8p-124f, 0x1.61fde6p-45f, 0.0f, 0.0f, 0x1.4de3c6p-82f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a3872ep-107f, 0.0f, 0x1.9f671p-30f, 0.0f, 0x1.a94cfep-53f,
     0x1.e4398ap-32f, 0.0f, 0.0f, 0x1.09fdfep-112f, 0.0f, 0x1.cd30dp-11f,
     0x1.3167eep-101f, 0x1.1382ap-112f, 0.0f, 0x1.1c6166p-112f, 0.0f, 0.0f, 0.0f,
     0x1.0836d4p-57f, 0x1.f2cb8ep-34f, 0x1.a660f8p-8f, 0x1.cc164p-5f,
     0x1.9689dap-103f, 0.0f, 0.0f, 0.0f, 0x1.13881ep-65f, 0.0f, 0x1.44e36cp-54f, 0.0f,
     0x1.a55616p-86f, 0x1.330e08p-21f, 0x1.9475c2p-61f, 0x1.67868ep-13f, 0.0f,
     0x1.462a0ep-108f, 0.0f, 0.0f, 0x1.725836p-4f, 0x1.ef956ap-34f, 0x1.d6d97p-100f,
     0.0f, 0x1.eee7a2p-121f, 0x1.2c395cp-5f, 0x1.51cd9ap-56f, 0.0f, 0x1.ce501ap-123f,
     0x1.2c471p-94f, 0.0f, 0x1.f3a368p-43f, 0x1.deb9acp-106f, 0.0f, 0x1.ebb2a2p-62f,
     0x1.605fap-57f, 0.0f
};
static const float external_bench_wrapper_input_table_arg1[1001]  = {
     0x1.c75882p-94f, 0x1.afe434p-34f, 0x1.ff145ep-62f, 0.0f, 0.0f, 0.0f,
     0x1.cff4d8p-18f, 0x1.b4f88p-100f, 0x1.0f42p-69f, 0x1.f52ccp-114f, 0.0f, 0.0f,
     0.0f, 0x1.d77248p-11f, 0x1.a12ccep-38f, 0x1.48c03ap-102f, 0x1.28fd5ep-7f, 0.0f,
     0.0f, 0x1.8812fcp-107f, 0x1.ddde94p-62f, 0x1.6091f6p-10f, 0x1.641c92p-98f,
     0x1.c38f7p-19f, 0x1.1a661cp-47f, 0x1.35a982p-6f, 0x1.40bc46p-56f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.5d8b0ap-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.467a34p-94f, 0.0f,
     0x1.0e64c8p-40f, 0.0f, 0.0f, 0.0f, 0x1.318a6cp-121f, 0x1.546e92p-57f,
     0x1.6234fep-124f, 0x1.deba06p-108f, 0x1.d1ea14p-20f, 0.0f, 0x1.b36b0ap-108f,
     0x1.e9bdeap-50f, 0x1.89298p-33f, 0.0f, 0x1.58759ap-71f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e39c9cp-72f, 0.0f, 0.0f, 0x1.1adc04p-118f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e6cap-14f, 0x1.0388d6p-106f, 0.0f, 0x1.b97012p-87f, 0x1.a12beap-121f,
     0x1.5b0226p-35f, 0.0f, 0.0f, 0.0f, 0x1.c2c0e4p-40f, 0.0f, 0x1.70d326p-113f,
     0x1.8cb7fep-50f, 0.0f, 0x1.ea4466p-1f, 0x1.d69b78p-87f, 0x1.f01ae8p-95f, 0.0f,
     0.0f, 0x1.b6d518p-99f, 0x1.7a352cp-106f, 0x1.d7d2cap-88f, 0x1.ee7388p-55f, 0.0f,
     0x1.bd7f36p-82f, 0x1.41b21p-12f, 0.0f, 0.0f, 0x1.db0b6p-93f, 0.0f,
     0x1.69e546p-23f, 0.0f, 0.0f, 0x1.9d0af2p-26f, 0.0f, 0x1.18353ep-119f, 0.0f, 0.0f,
     0.0f, 0x1.aecdfap-59f, 0.0f, 0x1.6dc3cap-53f, 0.0f, 0x1.69dafap-35f,
     0x1.a234d4p-81f, 0.0f, 0.0f, 0x1.15a24p-32f, 0.0f, 0x1.dfcae4p-52f, 0.0f,
     0x1.9bd6f2p-70f, 0.0f, 0x1.0f59ecp-107f, 0.0f, 0.0f, 0x1.fb483p-77f,
     0x1.24bd74p-116f, 0.0f, 0x1.52ac44p-118f, 0x1.acbbdp-24f, 0.0f, 0x1.e42022p-13f,
     0.0f, 0x1.ce0bcp-56f, 0x1.ab670cp-12f, 0.0f, 0x1.21529ep-16f, 0x1.bb29a6p-48f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cc87bep-40f, 0x1.d3218ap-123f, 0.0f,
     0x1.5dc7dcp-43f, 0x1.21a04cp-72f, 0x1.f55204p-41f, 0.0f, 0x1.9312bep-6f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e91932p-41f, 0x1.7edc32p-29f, 0.0f, 0x1.247b44p-71f,
     0x1.368c9cp-40f, 0x1.e6e6fcp-47f, 0.0f, 0x1.04246ep-53f, 0.0f, 0x1.c6afep-105f,
     0.0f, 0x1.a97ec6p-116f, 0.0f, 0.0f, 0.0f, 0x1.ee0256p-20f, 0.0f, 0.0f,
     0x1.bdeff4p-81f, 0x1.048fp-70f, 0.0f, 0.0f, 0x1.1ace66p-2f, 0x1.4f15b2p-103f,
     0.0f, 0.0f, 0x1.70c5eap-13f, 0x1.d13c64p-31f, 0.0f, 0.0f, 0.0f, 0x1.42ff9ap-24f,
     0x1.c7ecc2p-58f, 0x1.317886p-29f, 0.0f, 0x1.439d1cp-31f, 0.0f, 0x1.63f752p-87f,
     0x1.46ca96p-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5d99f2p-4f, 0x1.64a372p-110f, 0.0f,
     0x1.69df56p-16f, 0.0f, 0x1.ee11c4p-108f, 0x1.11d276p-125f, 0.0f, 0.0f,
     0x1.55641cp-100f, 0x1.44f3d4p-57f, 0.0f, 0.0f, 0x1.fda7aep-68f, 0x1.edfb9p-31f,
     0.0f, 0x1.6f197cp-25f, 0x1.c9a606p-110f, 0.0f, 0x1.ee43acp-112f, 0.0f, 0.0f,
     0x1.a0db5cp-104f, 0x1.7f445ap-69f, 0x1.97dc52p-85f, 0x1.197ap-46f, 0.0f, 0.0f,
     0.0f, 0x1.f75512p-61f, 0.0f, 0x1.55262cp-29f, 0.0f, 0.0f, 0x1.25e548p-36f,
     0x1.eca72cp-108f, 0x1.1374f6p-64f, 0x1.0aa15cp-97f, 0x1.867286p-2f, 0.0f, 0.0f,
     0.0f, 0x1.e1c0d2p-117f, 0.0f, 0.0f, 0x1.1916e4p-102f, 0.0f, 0x1.fb4856p-100f,
     0.0f, 0x1.3e005ep-41f, 0x1.5ad57ep-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.877a8ap-88f,
     0.0f, 0x1.d1c8bp-85f, 0x1.acca5p-116f, 0.0f, 0x1.9cc5b6p-53f, 0.0f, 0.0f, 0x1p0f,
     0x1.4dff2p-86f, 0x1.74fe26p-70f, 0x1.3c885ap-63f, 0x1.1a03bcp-109f,
     0x1.1e031cp-53f, 0.0f, 0x1.15aab2p-101f, 0.0f, 0.0f, 0x1.49d4d8p-3f,
     0x1.17c22ep-15f, 0x1.08c6a2p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5c1fdp-17f,
     0x1.ec543ep-47f, 0x1.9c358cp-113f, 0.0f, 0x1.65c4e4p-105f, 0x1.2ae4cep-7f, 0.0f,
     0.0f, 0.0f, 0x1.4f66a6p-77f, 0.0f, 0x1.74db52p-29f, 0.0f, 0x1.3c136ep-91f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d91438p-91f, 0.0f, 0.0f, 0x1.1defep-36f, 0x1.6cfd76p-18f,
     0x1.d2876ap-107f, 0.0f, 0x1.a7e19cp-54f, 0x1.4683dcp-30f, 0.0f, 0x1.10cdf8p-81f,
     0x1.5ac668p-113f, 0.0f, 0x1.f8c5c4p-34f, 0x1.314fd4p-62f, 0.0f, 0.0f,
     0x1.64e4d6p-117f, 0x1.47badp-64f, 0x1.d8ed2p-122f, 0x1.aa5372p-27f,
     0x1.7605fap-3f, 0.0f, 0x1.77bf14p-52f, 0.0f, 0.0f, 0x1.8d137ap-86f,
     0x1.d8a7d4p-122f, 0.0f, 0.0f, 0.0f, 0x1.f3a296p-97f, 0.0f, 0x1p0f,
     0x1.806196p-34f, 0.0f, 0x1.7943c4p-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.670e5ep-104f, 0.0f, 0.0f, 0x1.4deb38p-12f, 0x1.ea9bdp-11f, 0.0f,
     0x1.d23da8p-85f, 0x1.9f01eep-81f, 0.0f, 0x1.d17b28p-115f, 0x1.924fep-74f, 0.0f,
     0.0f, 0.0f, 0x1.828deap-24f, 0x1.10864ap-117f, 0x1.83410cp-58f, 0x1.1757d4p-119f,
     0.0f, 0x1.3fdaa8p-17f, 0x1.df9502p-24f, 0.0f, 0.0f, 0x1.8c2074p-99f, 0.0f,
     0x1.dcd7aep-42f, 0.0f, 0.0f, 0x1.3eba84p-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5b2126p-30f, 0x1.80460ep-115f, 0x1.ad1968p-8f, 0x1.c1bc8ep-82f,
     0x1.ea809ap-74f, 0x1.093e48p-79f, 0.0f, 0.0f, 0x1.0e75e8p-80f, 0x1.c222bap-12f,
     0x1.576668p-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.167078p-8f, 0x1.8c544p-22f,
     0x1.df038cp-114f, 0x1.c7446p-76f, 0.0f, 0.0f, 0x1.2a1048p-53f, 0.0f,
     0x1.4df624p-69f, 0.0f, 0x1.cdba1cp-51f, 0x1.9830cp-11f, 0x1.4aca56p-14f,
     0x1.6eec6ap-96f, 0.0f, 0.0f, 0x1.a27534p-10f, 0.0f, 0x1.e5ddfep-28f,
     0x1.47f68ap-22f, 0.0f, 0.0f, 0x1.dfed6ap-47f, 0.0f, 0x1.fa50b6p-104f, 0.0f,
     0x1.607d02p-80f, 0.0f, 0.0f, 0x1.a93068p-48f, 0x1.676508p-60f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f9b374p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ca8f08p-16f, 0.0f,
     0.0f, 0x1.30c7c8p-106f, 0.0f, 0x1.ef98fcp-21f, 0.0f, 0x1.e56466p-115f,
     0x1.c93c12p-39f, 0x1.82973p-28f, 0.0f, 0x1.398daap-46f, 0x1.365adcp-86f,
     0x1.529fc2p-106f, 0x1.b67172p-100f, 0x1.582b78p-94f, 0.0f, 0x1.b333e8p-6f,
     0x1.4dc67cp-85f, 0.0f, 0.0f, 0x1.056e2p-119f, 0x1.becb58p-122f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.cd7ae2p-64f, 0x1.6a8d7p-61f, 0x1.624da2p-124f, 0x1.aedc94p-47f,
     0.0f, 0.0f, 0.0f, 0x1.a96b86p-98f, 0x1.d54858p-61f, 0x1.da5c34p-81f, 0.0f, 0.0f,
     0.0f, 0x1.828818p-72f, 0.0f, 0x1.44bf5ap-42f, 0x1.ebf56cp-117f, 0x1.5a573ap-51f,
     0x1.af5f66p-95f, 0x1.7a78d8p-36f, 0.0f, 0x1.349d22p-25f, 0.0f, 0x1.e2de2cp-98f,
     0x1.2c2ed6p-55f, 0.0f, 0x1.e0727ap-68f, 0.0f, 0.0f, 0x1.25b40ep-6f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.86ac62p-31f, 0x1.af482ep-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.50501ep-96f, 0x1.c1ec3cp-98f, 0.0f, 0x1.08213ap-15f, 0.0f, 0x1.db959ep-28f,
     0.0f, 0x1.55ce92p-50f, 0.0f, 0.0f, 0.0f, 0x1.6fe8b6p-50f, 0.0f, 0.0f, 0.0f,
     0x1.19cdc6p-126f, 0x1.20b00ep-103f, 0.0f, 0x1.248628p-42f, 0x1.2e8468p-12f,
     0x1.916af2p-2f, 0.0f, 0.0f, 0x1.177eeep-58f, 0x1.ed4cc2p-87f, 0.0f,
     0x1.06af8ep-64f, 0x1.d59c6p-1f, 0.0f, 0x1.7e6804p-74f, 0.0f, 0x1.203b1ap-109f,
     0x1.68eb66p-79f, 0.0f, 0x1.0f7464p-42f, 0.0f, 0x1.bfaeb6p-126f, 0.0f,
     0x1.325e5ep-70f, 0.0f, 0x1.b8ecp-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3501bep-91f, 0x1.6f5d0ap-109f, 0x1.2131d4p-70f, 0x1.c8875ep-98f, 0.0f, 0.0f,
     0.0f, 0x1.63a9d6p-49f, 0.0f, 0x1.5e0818p-69f, 0x1.57f082p-86f, 0x1.b6c8ecp-38f,
     0x1.b0cc82p-38f, 0.0f, 0x1.7b92cap-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b6e382p-6f,
     0.0f, 0.0f, 0x1.6009fcp-86f, 0x1.4e4a9cp-110f, 0x1.b5ce7cp-6f, 0x1.705a32p-110f,
     0.0f, 0.0f, 0x1.99fb56p-123f, 0.0f, 0x1.62f6d4p-42f, 0.0f, 0x1.05bf38p-48f, 0.0f,
     0x1.2556a8p-94f, 0.0f, 0x1.d41fdep-52f, 0x1.bfb236p-84f, 0.0f, 0.0f, 0.0f,
     0x1.d9454p-67f, 0x1.19a4bap-107f, 0.0f, 0x1.2b8df2p-2f, 0x1.d98b5p-9f,
     0x1.c03972p-126f, 0x1.ced394p-124f, 0x1.23744ep-10f, 0x1.7f4b1ep-100f, 0.0f,
     0x1.859486p-21f, 0.0f, 0.0f, 0x1.72ad86p-87f, 0x1.d8e36cp-7f, 0.0f,
     0x1.c5537cp-25f, 0x1.6748e8p-54f, 0.0f, 0x1.bcbe9p-115f, 0x1.5a8dcap-91f, 0.0f,
     0x1.a42084p-112f, 0.0f, 0x1.60119ep-108f, 0.0f, 0x1.f102f6p-92f, 0.0f, 0.0f,
     0.0f, 0x1.551854p-32f, 0.0f, 0x1.13c1eap-51f, 0x1.82a118p-36f, 0x1.a85b46p-79f,
     0x1.77be7ep-1f, 0x1.27a5fcp-101f, 0.0f, 0x1.7f6b02p-108f, 0x1.333dc4p-26f,
     0x1.6e6836p-65f, 0.0f, 0x1.ca7f3p-62f, 0.0f, 0x1.93dc8ap-38f, 0x1.2c821p-41f,
     0x1.ba845ep-37f, 0.0f, 0x1.c99ebcp-21f, 0.0f, 0x1.44e134p-61f, 0.0f, 0.0f, 0.0f,
     0x1.de932cp-31f, 0.0f, 0.0f, 0x1.f6d1bcp-117f, 0.0f, 0.0f, 0x1.1b458cp-60f, 0.0f,
     0.0f, 0x1.a4321ap-53f, 0x1.ceb394p-8f, 0.0f, 0.0f, 0.0f, 0x1.4f8e4ep-59f,
     0x1.20998ap-63f, 0x1.2e07ccp-80f, 0.0f, 0.0f, 0.0f, 0x1.8633aap-67f, 0.0f, 0.0f,
     0.0f, 0x1.928d92p-38f, 0x1.9b6fa2p-113f, 0x1.9ba482p-108f, 0.0f, 0.0f,
     0x1.8ee58ep-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1c47e8p-110f, 0.0f,
     0x1.8784dap-86f, 0x1.d4e3b4p-108f, 0x1.0af40ep-55f, 0.0f, 0x1.5572bep-36f,
     0x1.820852p-113f, 0x1.41ec44p-113f, 0.0f, 0x1.e8cf1p-66f, 0x1.eec66ep-74f,
     0x1.190552p-99f, 0.0f, 0x1.617e98p-28f, 0x1.c73726p-21f, 0x1.d883dap-59f,
     0x1.4d5aap-69f, 0x1.f12cd2p-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.228cf6p-97f,
     0x1.7f8b8p-18f, 0.0f, 0.0f, 0.0f, 0x1.a78ea2p-19f, 0.0f, 0x1.a80b46p-107f,
     0x1.2a7cdp-105f, 0x1.a63ca4p-75f, 0x1.a39b16p-51f, 0.0f, 0.0f, 0x1.5c794ep-4f,
     0.0f, 0.0f, 0x1.13d956p-47f, 0x1.cd80acp-115f, 0x1.c10eaap-47f, 0.0f,
     0x1.fd7a14p-13f, 0x1.19504ep-60f, 0.0f, 0x1.8ef464p-22f, 0x1.d03cd4p-89f,
     0x1.467e88p-24f, 0x1.fb8918p-81f, 0x1.1a37a6p-23f, 0x1.2fe854p-39f, 0.0f, 0.0f,
     0.0f, 0x1.943c7p-51f, 0.0f, 0x1.f52516p-13f, 0.0f, 0.0f, 0.0f, 0x1.95eb1p-99f,
     0x1.cd6d16p-54f, 0x1.2c93cp-98f, 0.0f, 0.0f, 0.0f, 0x1.bf8a7p-61f,
     0x1.f4fc52p-7f, 0.0f, 0x1.d23738p-93f, 0x1.a6bd9p-66f, 0.0f, 0x1.1c8f4ap-105f,
     0x1.791418p-97f, 0.0f, 0x1.50ae34p-13f, 0.0f, 0.0f, 0.0f, 0x1.74aa84p-73f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b550c6p-60f, 0x1.1c1554p-36f, 0.0f, 0.0f, 0x1.08a584p-42f,
     0x1.a982fcp-87f, 0.0f, 0x1.d29c78p-43f, 0x1.3ed428p-92f, 0.0f, 0x1.44501p-103f,
     0.0f, 0x1.ec90b4p-35f, 0x1.15f1ap-31f, 0x1.757b6cp-122f, 0.0f, 0x1.a2a43ap-65f,
     0x1.746c5p-16f, 0x1.fc9408p-28f, 0x1.a804f8p-53f, 0.0f, 0.0f, 0x1.71c9p-79f,
     0.0f, 0.0f, 0.0f, 0x1.1d80dcp-118f, 0x1.484d2ap-119f, 0.0f, 0x1.711dccp-25f,
     0.0f, 0x1.1e2d24p-18f, 0x1.db954cp-90f, 0.0f, 0x1.07d154p-61f, 0x1.bdb4b4p-114f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4dc3e4p-76f, 0.0f, 0.0f, 0x1.8bb662p-23f,
     0x1.52332cp-54f, 0.0f, 0.0f, 0.0f, 0x1.26452cp-29f, 0.0f, 0.0f, 0x1.412daep-74f,
     0.0f, 0x1.2f5efep-112f, 0.0f, 0.0f, 0.0f, 0x1.49f34ep-15f, 0x1.2611fep-72f,
     0x1.99e206p-101f, 0x1.d7435cp-22f, 0x1.c36e5cp-5f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c54a36p-37f, 0x1.09431ep-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4462bcp-79f, 0x1.d2730ep-96f, 0.0f, 0.0f, 0x1.b67b92p-60f, 0x1.a37b4p-118f,
     0.0f, 0.0f, 0x1.e4f7dep-75f, 0.0f, 0x1.7029e4p-91f, 0.0f, 0x1.05f3ecp-45f, 0.0f,
     0x1.bdd38ep-63f, 0.0f, 0.0f, 0x1.44cc56p-108f, 0x1.bd1df2p-119f, 0.0f,
     0x1.f4c30ap-78f, 0x1.833a1ap-43f, 0x1.ff9552p-99f, 0x1.6a1ef8p-89f,
     0x1.a7bec2p-56f, 0.0f, 0.0f, 0x1.fab62ap-78f, 0x1.a451ep-55f, 0x1.bbe438p-24f,
     0.0f, 0x1.c9f2c6p-56f, 0x1.48e82p-89f, 0x1.194b76p-70f, 0.0f, 0.0f, 0.0f,
     0x1.a49208p-121f, 0x1.b69c1cp-50f, 0x1.7c7adap-97f, 0x1.0b4ap-97f, 0.0f,
     0x1.6b8f1ap-45f, 0x1.b7dee2p-84f, 0.0f, 0x1.2e2716p-84f, 0x1.f901eap-81f,
     0x1.9ae8fp-56f, 0x1.09259ap-23f, 0x1.1056fap-12f, 0.0f, 0x1.35b68p-51f,
     0x1.ad2fa6p-122f, 0.0f, 0.0f, 0x1.a744fap-6f, 0x1.56e7a6p-86f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a253ap-48f, 0x1.4dfb86p-82f, 0x1.6d175ap-13f, 0.0f, 0x1.676da2p-74f,
     0.0f, 0.0f, 0.0f, 0x1.3b1bc6p-13f, 0.0f, 0x1.4da2f4p-23f, 0.0f, 0.0f,
     0x1.cb866ap-91f, 0x1.8794f6p-95f, 0.0f, 0x1.f69bb4p-83f, 0.0f, 0x1.3837d8p-81f,
     0.0f, 0x1.2194ccp-39f, 0.0f, 0.0f, 0x1.779608p-61f, 0.0f, 0.0f, 0x1.862c84p-125f,
     0x1.f10162p-114f, 0.0f, 0.0f, 0x1.a34042p-75f, 0x1.04a2dcp-114f, 0.0f,
     0x1.3e6e08p-3f, 0x1.d13c7cp-37f, 0.0f, 0.0f, 0x1.09006cp-13f, 0.0f,
     0x1.f29446p-95f, 0x1.f9facp-20f, 0x1.a41caap-111f, 0.0f, 0.0f, 0.0f,
     0x1.22bed8p-77f, 0.0f, 0x1.cf484ep-64f, 0x1.353906p-54f, 0.0f, 0.0f,
     0x1.57ba94p-33f, 0.0f, 0x1.7173eep-59f, 0.0f, 0.0f, 0x1.13db8p-120f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.36a94p-60f, 0x1.60700ap-48f, 0x1.88eafep-80f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4987p-10f, 0x1.152b98p-5f, 0x1.4e8798p-14f, 0.0f,
     0x1.3f8b66p-62f, 0.0f, 0.0f, 0x1.f65024p-115f, 0.0f, 0x1.449d54p-113f,
     0x1.dcb068p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.488278p-65f, 0.0f, 0.0f,
     0x1.b5b422p-75f, 0x1.e1aad2p-27f, 0x1.e86436p-43f, 0x1.2d328ap-111f, 0.0f,
     0x1.4c25ep-67f, 0.0f, 0.0f, 0x1.12185ap-75f, 0x1.dc37dap-105f, 0x1.76a2a2p-88f,
     0.0f, 0.0f, 0x1.cfa932p-48f, 0x1.58d762p-68f, 0.0f
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
            tmp2 = Sleef_powf1_u10purecfma(tmp0, tmp1);
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
    printf("Sleef_powf1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_powf1_u10purecfma bench acc %a\n", global_bench_acc);
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
