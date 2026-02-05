/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sinpif8_u05kvx.c --function \
 *     Sleef_finz_sinpif8_u05kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 8 --function-input-vector-size \
 *     8 --bench --no-embedded-bin --target kv3
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
     0.0f, 0x1.c05754p-33f, 0x1.62b416p-100f, 0.0f, 0.0f, 0.0f, 0x1.4d35f4p-42f,
     0x1.637288p-73f, 0.0f, 0.0f, 0x1.d3952cp-8f, 0.0f, 0x1.2586a6p-92f,
     0x1.06421ep-12f, 0.0f, 0.0f, 0x1.077d6p-84f, 0x1.66714ep-30f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e57f22p-30f, 0x1.28634cp-88f, 0x1.afc856p-78f, 0.0f,
     0x1.a1102p-57f, 0.0f, 0x1.020d8ep-123f, 0.0f, 0x1.2bed9cp-100f, 0.0f,
     0x1.748f5p-99f, 0x1.572c9ap-105f, 0.0f, 0x1.db8918p-35f, 0.0f, 0.0f, 0.0f,
     0x1.2921c6p-19f, 0.0f, 0x1.2c3922p-56f, 0x1.335dc4p-39f, 0.0f, 0x1.b25ce6p-17f,
     0.0f, 0.0f, 0.0f, 0x1.66896ap-119f, 0x1.27cba6p-34f, 0.0f, 0.0f, 0x1.a2215cp-61f,
     0x1.6ab5aap-126f, 0.0f, 0.0f, 0.0f, 0x1.ad676cp-19f, 0.0f, 0x1.48334ep-112f,
     0.0f, 0.0f, 0.0f, 0x1.7ed074p-59f, 0.0f, 0x1.982772p-72f, 0.0f, 0.0f, 0.0f,
     0x1.c6da06p-84f, 0x1.a05baep-62f, 0.0f, 0.0f, 0.0f, 0x1.4e76bp-61f,
     0x1.294eaap-62f, 0x1.f7e31ep-22f, 0x1.31cd88p-121f, 0x1.3a77ep-113f, 0.0f, 0.0f,
     0x1.e25fdp-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e96c7cp-100f, 0x1.70e338p-64f,
     0x1.3b12f4p-76f, 0x1.b0b83ap-91f, 0.0f, 0.0f, 0x1.e9b95p-27f, 0.0f,
     0x1.bc8882p-100f, 0.0f, 0x1.b6509ep-15f, 0.0f, 0x1.f33c1ep-18f, 0x1.94eaf8p-114f,
     0.0f, 0x1.ac64c6p-42f, 0x1.6b4684p-32f, 0.0f, 0x1.61b21ep-51f, 0.0f,
     0x1.241ccep-22f, 0.0f, 0.0f, 0x1.f344eep-65f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0d045ep-84f, 0.0f, 0.0f, 0x1.eaf67ap-54f, 0.0f, 0x1.addafap-2f, 0.0f, 0.0f,
     0x1.d1aafep-115f, 0.0f, 0.0f, 0.0f, 0x1.539b5ap-60f, 0x1.21eb1cp-56f,
     0x1.55c08ap-63f, 0x1.0ecacp-92f, 0.0f, 0x1.9c931p-109f, 0x1.eca45p-88f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.3169a6p-52f, 0.0f, 0.0f, 0.0f, 0x1.ad50a8p-83f, 0.0f, 0.0f,
     0.0f, 0x1.099c1ap-46f, 0x1.ed67bep-73f, 0x1.d0429p-101f, 0.0f, 0x1.17e7bp-73f,
     0x1.a6460ap-79f, 0x1.6a66c2p-110f, 0.0f, 0x1.07c38ap-77f, 0.0f, 0.0f, 0.0f,
     0x1.c8f3p-104f, 0.0f, 0x1.7bdaaap-38f, 0.0f, 0x1.2a029cp-21f, 0.0f,
     0x1.be2afp-105f, 0.0f, 0.0f, 0x1.95218p-91f, 0.0f, 0.0f, 0.0f, 0x1.9c1c2cp-33f,
     0.0f, 0.0f, 0.0f, 0x1.7b7388p-5f, 0x1.bbf6fap-4f, 0.0f, 0.0f, 0x1.ce9b1p-11f,
     0x1.b82766p-90f, 0x1.34d894p-78f, 0x1.2e7902p-24f, 0x1.46ead2p-49f, 0.0f,
     0x1.c05c36p-92f, 0.0f, 0x1.7ed01ep-121f, 0.0f, 0x1.76959ep-112f, 0x1.cfacc2p-4f,
     0.0f, 0x1.e2ed6ap-74f, 0.0f, 0.0f, 0x1.0288b2p-26f, 0x1.d45b4ep-20f, 0.0f, 0.0f,
     0x1.15b936p-26f, 0.0f, 0.0f, 0x1.76a288p-119f, 0.0f, 0x1.3542dap-87f, 0.0f,
     0x1.c8836cp-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9cd2b8p-101f, 0x1.5c5416p-49f,
     0.0f, 0x1.b9cbf6p-103f, 0.0f, 0.0f, 0.0f, 0x1.5aa2b4p-62f, 0.0f,
     0x1.c941e8p-106f, 0.0f, 0x1.3cda16p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ebe7e2p-109f, 0.0f, 0x1.2496aap-50f, 0x1.e3b0c8p-16f, 0x1.e1ec4cp-9f,
     0.0f, 0x1.3c39d6p-56f, 0.0f, 0.0f, 0x1.e6b5bcp-34f, 0x1.01ea16p-108f,
     0x1.3b1b4p-26f, 0.0f, 0.0f, 0x1.0c7a58p-56f, 0x1.aaf4cap-109f, 0x1.19539cp-113f,
     0x1.b1696ep-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c80fep-42f, 0.0f,
     0x1.2c4af8p-110f, 0x1.5ee52ap-24f, 0x1.9b911cp-95f, 0.0f, 0x1.2fbcd6p-94f,
     0x1.b9aaa4p-44f, 0x1.22dbfap-115f, 0.0f, 0x1.907564p-113f, 0x1.5a286p-31f, 0.0f,
     0.0f, 0x1.362fd8p-67f, 0x1.c096aep-60f, 0x1.c9a6fep-3f, 0x1.702d14p-115f, 0.0f,
     0x1.f9349p-107f, 0.0f, 0x1.27e42ap-71f, 0x1.f264f4p-3f, 0x1.19e0e4p-102f, 0.0f,
     0x1.3d333ap-119f, 0.0f, 0x1.5f226ep-72f, 0.0f, 0x1.eece96p-52f, 0x1.e29cdcp-43f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e41922p-8f, 0x1.712196p-87f, 0.0f,
     0x1.8b383cp-57f, 0x1.37a9a6p-10f, 0.0f, 0x1.0830bp-29f, 0x1.13ac88p-83f, 0.0f,
     0x1.afe454p-48f, 0x1.17cfb2p-108f, 0.0f, 0x1.3ec8e2p-51f, 0x1.ec059ep-44f,
     0x1.43db9p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5bbe54p-36f, 0.0f, 0x1.ad062cp-29f,
     0x1.f44b78p-3f, 0x1.05da84p-50f, 0x1p0f, 0.0f, 0x1.9c27bep-51f, 0.0f,
     0x1.2c48e2p-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.da7826p-122f, 0.0f, 0.0f,
     0x1.33819ep-95f, 0x1.5e9b1ep-19f, 0.0f, 0x1.9ebd06p-85f, 0x1.69ec9ap-43f,
     0x1.2f4ccp-121f, 0.0f, 0.0f, 0x1.0de0b4p-28f, 0x1.4e0e4ap-106f, 0x1.47d6e8p-99f,
     0.0f, 0.0f, 0x1.0fadc6p-26f, 0x1.9fe90cp-10f, 0x1.d286a2p-114f, 0.0f, 0.0f,
     0x1.cc3d9p-23f, 0x1.610fe4p-102f, 0.0f, 0.0f, 0x1.369bb4p-118f, 0x1.56aed8p-118f,
     0.0f, 0x1.dab92ep-56f, 0x1.28486cp-61f, 0.0f, 0x1.4d5d52p-64f, 0.0f,
     0x1.60fdfep-3f, 0.0f, 0x1.08d63p-93f, 0x1.69a64cp-111f, 0.0f, 0.0f,
     0x1.553488p-107f, 0x1.8963d4p-120f, 0x1.06c5aap-113f, 0.0f, 0x1.421892p-80f,
     0.0f, 0x1.a9dba4p-113f, 0x1.37f516p-90f, 0.0f, 0.0f, 0x1.2ee3d4p-106f,
     0x1.2a4df2p-48f, 0x1.55493cp-114f, 0.0f, 0x1.c9f0bcp-79f, 0x1.05ca4p-30f, 0.0f,
     0x1.9ec988p-105f, 0x1.1d1c0cp-31f, 0.0f, 0x1.de64f8p-47f, 0.0f, 0x1.2417e8p-6f,
     0x1.eb924cp-119f, 0x1.9f0ba4p-89f, 0.0f, 0.0f, 0x1.e38e4cp-56f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.5ccf12p-104f, 0x1.f058c4p-112f, 0x1.db815cp-65f, 0.0f,
     0x1.9e3f42p-107f, 0.0f, 0x1.8b312p-71f, 0.0f, 0.0f, 0x1.f658d2p-104f, 0.0f,
     0x1.df4afp-44f, 0x1.60f086p-35f, 0x1p0f, 0x1.a031dp-117f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f7e288p-89f, 0x1.3df38p-92f, 0x1.91aa6cp-68f, 0.0f, 0x1.d17c84p-118f,
     0.0f, 0x1.a35adap-77f, 0x1.243636p-32f, 0.0f, 0x1.141e54p-88f, 0x1.fc79bep-17f,
     0x1.491fc6p-88f, 0.0f, 0x1.92edf6p-88f, 0.0f, 0.0f, 0x1.0859fap-100f,
     0x1.0b890ep-36f, 0.0f, 0x1.cd03b8p-21f, 0.0f, 0.0f, 0x1.c5fe32p-104f,
     0x1.613e52p-116f, 0x1.0021fp-112f, 0.0f, 0x1.45621p-7f, 0x1.40fed4p-34f, 0.0f,
     0x1.79041cp-114f, 0x1.c35a2ap-10f, 0.0f, 0.0f, 0x1.f9f654p-120f, 0.0f,
     0x1.14995p-35f, 0.0f, 0.0f, 0x1.9024c6p-98f, 0x1.6a77acp-116f, 0x1.61f874p-102f,
     0.0f, 0x1.2d034ep-79f, 0x1.f3c372p-108f, 0.0f, 0.0f, 0.0f, 0x1.a45728p-54f, 0.0f,
     0x1.6422ep-14f, 0.0f, 0x1.90b57p-92f, 0x1.c87a6cp-48f, 0x1.80ff16p-1f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c27932p-63f,
     0x1.e3dcc6p-89f, 0.0f, 0x1.180aeap-9f, 0.0f, 0.0f, 0x1.c3402cp-88f, 0.0f, 0.0f,
     0x1.339706p-73f, 0x1.095fdcp-16f, 0.0f, 0x1.295918p-110f, 0.0f, 0x1.92d142p-82f,
     0.0f, 0.0f, 0x1.4137f8p-28f, 0.0f, 0x1.faa986p-18f, 0x1.824bap-84f, 0.0f,
     0x1.a4bf58p-75f, 0x1.cad5dap-110f, 0x1.1950cep-116f, 0.0f, 0.0f,
     0x1.38c102p-116f, 0x1.52ce42p-120f, 0x1.454e1cp-65f, 0x1.dde78cp-76f,
     0x1.6b3be8p-97f, 0x1.683936p-123f, 0.0f, 0x1.f0175p-3f, 0x1.1db7p-51f, 0.0f,
     0.0f, 0x1.909156p-108f, 0.0f, 0x1.f474d4p-2f, 0.0f, 0.0f, 0x1.4a93a4p-3f, 0.0f,
     0.0f, 0x1.2fe842p-66f, 0.0f, 0x1.b8ee3cp-102f, 0x1.44261ap-50f, 0x1.edf952p-4f,
     0.0f, 0.0f, 0.0f, 0x1.e45944p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.55cb6p-82f,
     0x1.aa5b04p-55f, 0x1.21f8f2p-66f, 0.0f, 0x1.6066dep-94f, 0.0f, 0x1.12cb06p-78f,
     0x1.8c328p-82f, 0.0f, 0.0f, 0x1.fb8d4ep-116f, 0.0f, 0.0f, 0x1.38bd86p-84f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d7ebb6p-82f, 0x1.f64756p-45f,
     0x1.7bb938p-121f, 0x1.3bb66ep-22f, 0x1.544cdap-6f, 0x1.454cf6p-32f,
     0x1.6ef09ep-77f, 0x1.7d5e44p-103f, 0x1.9154cap-92f, 0.0f, 0x1.235874p-10f, 0.0f,
     0.0f, 0x1.aa05p-68f, 0.0f, 0x1.bcd844p-9f, 0.0f, 0x1.88259p-97f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.7095c8p-79f, 0x1.1e87c4p-110f, 0.0f, 0.0f, 0x1.a5f362p-82f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.64e6fp-46f, 0.0f,
     0x1.74241ep-61f, 0.0f, 0x1.0ed116p-105f, 0.0f, 0x1.1aaff4p-20f, 0.0f,
     0x1.00ea1ep-120f, 0.0f, 0x1.afd68cp-70f, 0.0f, 0x1.d41f68p-52f, 0.0f, 0.0f, 0.0f,
     0x1.8712b2p-39f, 0x1.524464p-20f, 0x1.574dbcp-21f, 0.0f, 0x1.954d38p-19f,
     0x1.a02598p-29f, 0.0f, 0x1.9c4568p-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.74c8e8p-104f, 0x1.66ca16p-87f, 0x1.5f3a8cp-44f, 0.0f, 0x1.66e006p-43f,
     0x1.9a426ep-78f, 0x1.55258p-70f, 0.0f, 0x1.9d924p-100f, 0.0f, 0x1.b16422p-82f,
     0.0f, 0.0f, 0.0f, 0x1.11de7p-71f, 0.0f, 0x1.fb325cp-109f, 0x1.2149b8p-60f, 0.0f,
     0.0f, 0x1.18f054p-102f, 0.0f, 0x1.54c368p-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.bec348p-21f, 0.0f, 0.0f, 0x1.2e6a18p-12f, 0.0f,
     0x1.71277p-112f, 0.0f, 0.0f, 0x1.8215cp-103f, 0x1.605694p-13f, 0.0f,
     0x1.977482p-108f, 0.0f, 0.0f, 0x1.18e7a2p-31f, 0x1.5d0ec2p-55f, 0x1.a5355ap-83f,
     0x1.b1d864p-95f, 0.0f, 0x1.dd1346p-35f, 0.0f, 0x1.592caap-63f, 0x1.f59482p-53f,
     0.0f, 0.0f, 0.0f, 0x1.e7f348p-71f, 0x1.fc16b4p-41f, 0.0f, 0x1.c3e8bap-28f,
     0x1.e33af2p-66f, 0x1.18ddcap-3f, 0x1.a1bep-93f, 0.0f, 0x1.aa0768p-74f,
     0x1.233c84p-45f, 0x1.dcdac6p-41f, 0x1.c58b1ap-122f, 0.0f, 0x1.d80dd6p-47f,
     0x1.84c11cp-7f, 0.0f, 0.0f, 0.0f, 0x1.9d57fap-78f, 0.0f, 0.0f, 0x1.30520ep-103f,
     0.0f, 0x1.94bb8cp-45f, 0.0f, 0.0f, 0.0f, 0x1.6c48b6p-54f, 0.0f, 0.0f,
     0x1.d95edep-2f, 0x1.ef9078p-105f, 0x1.da76b6p-6f, 0.0f, 0x1.65e0dp-55f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b25898p-21f, 0x1.1e739ep-78f, 0x1.2a63ap-63f, 0.0f,
     0x1.c2ed74p-5f, 0x1.01b9e4p-53f, 0x1.1dd8fap-52f, 0x1.88058p-41f,
     0x1.ffb9bcp-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0a3af2p-93f,
     0x1.d7514ep-22f, 0x1.b48246p-109f, 0x1.1f4c9p-26f, 0.0f, 0.0f, 0x1.d73884p-80f,
     0x1.dc3a92p-13f, 0.0f, 0.0f, 0.0f, 0x1.25705cp-111f, 0x1.16e352p-32f,
     0x1.c6e3f8p-93f, 0.0f, 0x1.25fac4p-113f, 0.0f, 0.0f, 0x1.d64f56p-114f,
     0x1.46c8p-77f, 0x1.b6f3e6p-11f, 0x1.74477ep-92f, 0.0f, 0.0f, 0.0f,
     0x1.23a9dep-51f, 0x1.0b814ep-105f, 0x1.d05e64p-80f, 0.0f, 0x1.e24246p-46f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.cec3d6p-75f, 0x1.a28a56p-26f, 0.0f, 0x1.a2dc32p-105f, 0.0f,
     0.0f, 0.0f, 0x1.40943ep-110f, 0.0f, 0.0f, 0x1.09da58p-8f, 0.0f, 0x1.e610aep-47f,
     0.0f, 0.0f, 0x1.76a6a8p-67f, 0x1.841d74p-102f, 0.0f, 0x1.63d854p-110f,
     0x1.de357p-89f, 0x1.826fe6p-40f, 0.0f, 0x1.2caf6cp-85f, 0x1.eac824p-108f,
     0x1.9dc3f8p-84f, 0x1.79ed3ep-23f, 0.0f, 0.0f, 0x1.3fda8cp-71f, 0x1.cdeff8p-16f,
     0.0f, 0x1.4167eap-69f, 0.0f, 0x1.9b5b6ap-3f, 0.0f, 0x1.21c94ap-21f, 0.0f, 0.0f,
     0x1.36037cp-75f, 0x1.ca6b6p-87f, 0.0f, 0x1.71f02cp-35f, 0x1.d7c044p-58f,
     0x1.4d4f46p-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7740f2p-24f, 0x1.c8edfep-23f,
     0x1.cf2ce8p-103f, 0.0f, 0x1.ec9f32p-63f, 0x1.56bf4ap-62f, 0x1.989852p-13f, 0.0f,
     0.0f, 0x1.938218p-108f, 0x1.cd954ap-67f, 0x1.06c486p-64f, 0x1.94c3d4p-39f,
     0x1.1805eep-99f, 0x1.52745ap-58f, 0.0f, 0.0f, 0x1.0315aep-37f, 0x1.ee5054p-76f,
     0x1.c17568p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1e665cp-109f, 0x1.1f6476p-113f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.197bf2p-15f, 0.0f,
     0x1.d84de8p-116f, 0.0f, 0.0f, 0x1.a007cp-22f, 0.0f, 0x1.7e29bcp-117f,
     0x1.47b3e2p-53f, 0x1.2f178p-123f, 0.0f, 0x1.023abp-70f, 0x1.b6c09ep-56f, 0.0f,
     0x1.644844p-59f, 0.0f, 0.0f, 0x1.0ba28ep-103f, 0x1.20eddcp-22f, 0x1.df4e9p-31f,
     0.0f, 0.0f, 0x1.88939cp-39f, 0.0f, 0x1.6ffe32p-101f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.7d2ce2p-90f, 0.0f, 0.0f, 0x1.42f22ep-123f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.54c9eap-44f, 0x1.42ffeap-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e32942p-44f, 0x1.f3a58ep-116f, 0.0f, 0x1.d469c4p-49f, 0x1.f9eb3p-104f,
     0x1.72bd96p-43f, 0x1.c8a02p-4f, 0x1.69e29p-48f, 0x1.532118p-103f, 0.0f,
     0x1.84aefcp-88f, 0x1.bf035cp-114f, 0.0f, 0x1.a207fp-9f, 0.0f, 0x1.f2a192p-8f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4c435ep-55f, 0x1.2c1c9ap-112f, 0.0f,
     0.0f, 0.0f, 0x1.e55e5ap-14f, 0x1.5aacp-45f, 0x1.ec425ap-112f, 0.0f,
     0x1.84262ap-11f, 0.0f, 0.0f, 0x1.2a3ea6p-61f, 0x1.5aed9ep-9f, 0x1.ced78p-32f,
     0.0f, 0x1.93c7dep-34f, 0.0f, 0.0f, 0x1.ea3aa2p-114f, 0x1.ffbc98p-49f, 0.0f, 0.0f,
     0.0f, 0x1.a3d77ap-78f, 0.0f, 0.0f, 0.0f, 0x1.bda44cp-67f, 0x1.04be0cp-47f,
     0x1.b8a3eep-47f, 0x1.48d672p-60f, 0x1.6e2b1cp-87f, 0x1.42614ap-8f,
     0x1.f9c92cp-80f, 0x1.a29ba2p-108f, 0.0f, 0.0f, 0.0f, 0x1.59c238p-37f,
     0x1.08273ap-50f, 0.0f, 0x1.3cb7a8p-83f, 0.0f, 0x1.7560f6p-103f, 0x1.bba93ep-89f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.91c4ccp-6f, 0.0f, 0x1.9872f4p-14f, 0.0f, 0.0f, 0.0f,
     0x1.dd1fb2p-124f, 0x1.134928p-46f, 0.0f, 0.0f, 0.0f, 0x1.e35dcp-126f,
     0x1.b82278p-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ca7accp-67f, 0.0f, 0.0f,
     0x1.946d38p-109f, 0.0f, 0x1.ebdb3ep-61f, 0x1.de0b0ap-77f, 0.0f, 0x1.45c856p-114f,
     0.0f, 0x1.67a1c2p-58f, 0x1.b8c20cp-3f, 0x1.0d0f5ep-15f, 0.0f, 0x1.c4a658p-58f,
     0x1.6b7b46p-62f, 0.0f, 0x1.0e2906p-77f
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
            tmp1 = Sleef_finz_sinpif8_u05kvx(tmp0);
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
    printf("Sleef_finz_sinpif8_u05kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_finz_sinpif8_u05kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
