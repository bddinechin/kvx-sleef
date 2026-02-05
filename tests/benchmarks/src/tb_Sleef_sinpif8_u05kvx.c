/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sinpif8_u05kvx.c --function Sleef_sinpif8_u05kvx \
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
     0x1.338294p-124f, 0x1.04a53ap-6f, 0x1.d8fa24p-10f, 0x1.da1308p-7f, 0.0f,
     0x1.456fd2p-74f, 0.0f, 0.0f, 0x1.ba7d8ap-45f, 0x1.768aa4p-56f, 0.0f, 0.0f,
     0x1.a9c89ep-110f, 0.0f, 0.0f, 0x1.4da76ap-82f, 0x1.b4fde6p-87f, 0x1.0d2ee2p-102f,
     0x1.3ee06ap-41f, 0.0f, 0x1.9d203p-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.626b34p-52f,
     0.0f, 0.0f, 0x1.5828dcp-74f, 0x1.631cf8p-9f, 0.0f, 0.0f, 0x1.2d1522p-109f,
     0x1.2e8f02p-125f, 0.0f, 0.0f, 0x1.115e4ep-120f, 0x1.1af928p-82f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.94e364p-92f, 0.0f, 0x1.6a9446p-56f, 0.0f, 0x1.8eaa5ep-53f,
     0.0f, 0x1.1f3d5p-36f, 0x1.c9435ep-95f, 0x1.36570cp-87f, 0.0f, 0.0f, 0.0f,
     0x1.db1fbp-112f, 0x1.65ceep-22f, 0x1.318d2cp-126f, 0x1.25fcdap-61f,
     0x1.dcf304p-87f, 0x1.a77284p-77f, 0.0f, 0x1.465cf2p-84f, 0.0f, 0.0f,
     0x1.95122ap-31f, 0x1.5180f2p-23f, 0.0f, 0x1.9f40f2p-90f, 0.0f, 0.0f, 0.0f,
     0x1.e3cb9cp-102f, 0x1.dbc4p-63f, 0x1.7bf5aap-26f, 0x1.4e096cp-38f,
     0x1.9e170ap-26f, 0x1.f025e6p-78f, 0.0f, 0x1.2e04ccp-96f, 0x1.4c931ep-18f,
     0x1.43b8cp-102f, 0x1.c87318p-56f, 0.0f, 0.0f, 0.0f, 0x1.c5ef94p-111f,
     0x1.678ac4p-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cb9002p-25f, 0.0f,
     0x1.9c1e34p-58f, 0.0f, 0x1.154414p-75f, 0.0f, 0x1.e823b8p-5f, 0x1.c25592p-66f,
     0.0f, 0x1.85213ep-1f, 0.0f, 0.0f, 0.0f, 0x1.fa5724p-32f, 0.0f, 0.0f, 0.0f,
     0x1.4d031cp-95f, 0x1.0ebaeap-61f, 0x1.3748dcp-50f, 0.0f, 0x1.9f1242p-31f,
     0x1.a533ep-92f, 0x1.9ac414p-116f, 0.0f, 0x1.be856cp-55f, 0x1.239bb4p-79f, 0.0f,
     0.0f, 0.0f, 0x1.10865cp-87f, 0.0f, 0x1.6fb1fp-53f, 0.0f, 0x1.b7cb62p-47f,
     0x1.7bd746p-108f, 0.0f, 0x1.fba97ep-94f, 0x1.947c58p-7f, 0.0f, 0x1.2de8cap-95f,
     0x1.987064p-48f, 0x1.2ba1b8p-122f, 0x1.5aabaap-103f, 0.0f, 0x1.3ecefcp-32f,
     0x1.1eccfcp-22f, 0.0f, 0x1.eff48ap-109f, 0.0f, 0x1.1f6f14p-114f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b2dc8ep-82f, 0.0f, 0x1.778bp-56f, 0.0f, 0x1.31151ep-8f, 0.0f,
     0.0f, 0x1.1728dcp-71f, 0x1.e9a42cp-103f, 0x1.a443bp-106f, 0x1.fb14a4p-115f,
     0x1.03ca24p-29f, 0x1.c785c4p-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.481f32p-32f, 0x1.62cdc2p-2f, 0x1.355ba6p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.078fdcp-49f, 0x1.7761c8p-99f, 0.0f, 0x1.d6c96p-13f, 0x1.f9f664p-25f,
     0x1.6afcacp-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.789a24p-15f, 0.0f,
     0x1.5aa3acp-125f, 0x1.4d4d26p-54f, 0x1.b525aap-36f, 0x1.799102p-111f, 0.0f, 0.0f,
     0.0f, 0x1.87e812p-35f, 0x1.3b9d32p-27f, 0.0f, 0x1.da56cp-2f, 0x1.eb3726p-6f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b6f99p-25f, 0x1.4f108p-73f, 0.0f,
     0x1.5ffbfep-90f, 0x1.afb892p-65f, 0.0f, 0x1.341a9p-68f, 0x1.02408ap-52f,
     0x1.99f4b6p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f9641ap-81f, 0.0f, 0x1.ad5aa4p-2f,
     0x1.52608cp-105f, 0.0f, 0x1.472dd8p-105f, 0.0f, 0x1.3a592cp-99f, 0x1.bade6p-31f,
     0.0f, 0.0f, 0.0f, 0x1.2b6956p-125f, 0.0f, 0.0f, 0.0f, 0x1.0cbceep-87f, 0.0f,
     0.0f, 0x1.35235ap-39f, 0.0f, 0x1.efe072p-61f, 0.0f, 0.0f, 0x1.7fd328p-49f, 0.0f,
     0x1.f699a6p-19f, 0.0f, 0x1.78fe3p-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3d0476p-98f,
     0.0f, 0x1.878dc4p-34f, 0x1.7113cap-50f, 0x1.d2b178p-52f, 0x1.ccb7aep-105f, 0.0f,
     0.0f, 0x1.8035fcp-94f, 0x1.c0704cp-73f, 0x1.9710ccp-50f, 0x1.fb261cp-17f, 0.0f,
     0.0f, 0x1.e692bcp-121f, 0x1.d609a8p-107f, 0x1.1a9514p-88f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.dee25ap-55f, 0x1.fa2972p-20f, 0.0f, 0x1.167e24p-123f, 0.0f, 0.0f, 0.0f,
     0x1.53bae8p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.87ddfcp-4f,
     0x1.ee6896p-68f, 0x1.ba9a7cp-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.186c08p-21f,
     0x1.a3593cp-19f, 0x1.a78e84p-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ea74c2p-70f, 0.0f, 0x1.af5938p-86f, 0x1.7cc808p-46f, 0.0f, 0.0f,
     0x1.6e51ecp-48f, 0.0f, 0.0f, 0x1.5cfc62p-102f, 0.0f, 0x1.7fc1ccp-45f,
     0x1.f7a288p-38f, 0x1.b20a56p-7f, 0.0f, 0x1.d12c82p-102f, 0.0f, 0.0f, 0.0f,
     0x1.6f76e2p-42f, 0x1.473f36p-93f, 0x1.63552ep-116f, 0.0f, 0x1.533fdcp-76f,
     0x1.84a114p-2f, 0x1.4ad528p-11f, 0x1.ee9cf2p-122f, 0.0f, 0.0f, 0.0f,
     0x1.16c9bap-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c43f9ap-95f, 0.0f, 0x1.fd3d56p-107f,
     0x1.674182p-25f, 0x1.d1beb2p-113f, 0.0f, 0x1.fb8dcp-32f, 0x1.4e11ep-36f,
     0x1.d6a99p-81f, 0x1.95818cp-4f, 0x1.73663cp-36f, 0.0f, 0x1.2e058cp-101f, 0.0f,
     0.0f, 0x1.c5ad6cp-89f, 0.0f, 0x1.638938p-118f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.18ddccp-29f, 0.0f, 0.0f, 0.0f, 0x1.b88fc4p-53f, 0.0f, 0x1.75ac94p-110f,
     0x1.9b0ca6p-68f, 0.0f, 0.0f, 0x1.33a6aep-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.88fefap-24f, 0x1.51cc24p-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3371e4p-37f, 0x1.ac4b8p-98f, 0.0f, 0x1.4996f8p-30f, 0.0f, 0x1.0266f2p-5f,
     0x1.3708bep-64f, 0.0f, 0x1.49aa6ap-118f, 0.0f, 0.0f, 0x1.8397fcp-67f, 0.0f, 0.0f,
     0x1.bdb8dep-109f, 0x1.a108d6p-91f, 0x1.0c7292p-22f, 0x1.f00dd4p-64f, 0.0f,
     0x1.f634a6p-38f, 0.0f, 0.0f, 0.0f, 0x1.097106p-3f, 0.0f, 0.0f, 0x1.cefb04p-78f,
     0.0f, 0x1.642314p-26f, 0x1.63ec16p-30f, 0.0f, 0.0f, 0x1.08fadep-10f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d8d6dcp-117f, 0.0f, 0x1.6d5e42p-74f, 0.0f, 0x1.e799c6p-89f,
     0x1.f28926p-55f, 0x1.7ca18ap-124f, 0.0f, 0x1.ae8578p-126f, 0.0f, 0.0f,
     0x1.311564p-62f, 0x1.cd3814p-31f, 0x1.0d486cp-33f, 0x1.5496e6p-51f, 0.0f,
     0x1.65ef64p-28f, 0.0f, 0.0f, 0x1.c6a59ep-89f, 0x1.639566p-52f, 0x1.c29dcep-102f,
     0.0f, 0.0f, 0.0f, 0x1.d473e8p-43f, 0.0f, 0.0f, 0.0f, 0x1.a2ca78p-58f, 0.0f,
     0x1.a43a02p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2ef54cp-68f, 0x1.cf3f66p-56f, 0.0f,
     0.0f, 0x1.7bec44p-62f, 0x1.db3adp-39f, 0x1.d4d7bcp-5f, 0x1.0f255ep-39f, 0.0f,
     0x1.3c088ap-52f, 0x1.52168ap-14f, 0.0f, 0x1.ff2972p-55f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f5af36p-9f, 0x1.3274a2p-15f, 0x1.133aaep-33f, 0x1.c781eep-28f, 0.0f, 0.0f,
     0x1.8b53d2p-21f, 0.0f, 0x1.9269aep-46f, 0.0f, 0x1.e20446p-7f, 0x1.6e401p-78f,
     0.0f, 0x1.950af4p-95f, 0x1.993468p-3f, 0x1.553778p-94f, 0x1.fb7f22p-112f,
     0x1.fffb62p-73f, 0.0f, 0x1.92a8bap-70f, 0x1.a92a96p-86f, 0.0f, 0.0f, 0.0f,
     0x1.6e40a8p-124f, 0x1.07d07ap-124f, 0x1.6a1ad8p-26f, 0x1.2b34e6p-99f, 0.0f,
     0x1.fc6a5ap-51f, 0x1.656d28p-107f, 0x1.aabc18p-90f, 0x1.5b09eep-101f,
     0x1.ded57p-53f, 0.0f, 0.0f, 0.0f, 0x1.d73bdcp-122f, 0.0f, 0x1.11a47p-92f, 0.0f,
     0x1.174cacp-81f, 0.0f, 0x1.d6abc4p-126f, 0x1.917422p-39f, 0x1.e0abfap-7f,
     0x1.d610dp-96f, 0.0f, 0.0f, 0.0f, 0x1.7c804ep-15f, 0x1.4d72d8p-8f,
     0x1.e8b75ep-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cc1c04p-15f, 0x1.aa805cp-75f, 0.0f,
     0x1.c9269p-121f, 0.0f, 0x1.54dd9cp-27f, 0.0f, 0x1.b7b2bp-105f, 0x1.000bcap-117f,
     0x1.edc492p-8f, 0x1.48c0dep-55f, 0x1.dcd1cp-20f, 0x1.d6de5p-58f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.aef544p-124f, 0x1.e9d89p-92f,
     0x1.fea572p-46f, 0.0f, 0x1.b8ad3ep-115f, 0.0f, 0x1.a22ecap-119f, 0.0f,
     0x1.1c252ep-51f, 0x1.dff8f4p-90f, 0.0f, 0x1.3fddf2p-21f, 0x1.f96ba2p-69f, 0.0f,
     0x1.114b2p-29f, 0.0f, 0x1.5febd2p-105f, 0x1.b0b5f6p-47f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.5340eap-32f, 0x1.a8cdb8p-6f, 0x1.07cbd6p-45f, 0x1.10121ap-16f,
     0x1.7ea112p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.12bf4cp-6f,
     0x1.f17738p-4f, 0.0f, 0x1.268a36p-38f, 0x1.9ef668p-94f, 0x1.c74098p-64f,
     0x1.ae6404p-83f, 0x1.921872p-53f, 0x1.97165p-3f, 0.0f, 0x1.f475bep-62f,
     0x1.ef1cep-75f, 0x1.fdbfcp-21f, 0.0f, 0x1.5ae9e4p-112f, 0.0f, 0x1.2ad4f2p-122f,
     0x1.9ec276p-98f, 0.0f, 0x1.f8088cp-1f, 0x1.a7dd78p-55f, 0x1.eeb266p-11f,
     0x1.7eadf8p-91f, 0.0f, 0.0f, 0.0f, 0x1.dd5b1p-3f, 0x1.17507cp-106f,
     0x1.51ca7ap-37f, 0x1.b5ad38p-75f, 0.0f, 0x1.f1a5a2p-109f, 0.0f, 0.0f, 0.0f,
     0x1.9e33eap-102f, 0x1.a3146ap-53f, 0.0f, 0.0f, 0.0f, 0x1.e3483p-65f, 0.0f,
     0x1.406668p-77f, 0x1.91333ep-118f, 0x1.ae036p-58f, 0x1.7bec3ep-28f,
     0x1.f055d8p-72f, 0.0f, 0.0f, 0.0f, 0x1.9ef748p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.52476ep-71f, 0x1.89b3ap-123f, 0.0f, 0.0f, 0.0f, 0x1.2dfc7ep-108f,
     0x1.cd8af4p-32f, 0.0f, 0x1.2e459p-43f, 0x1.985972p-50f, 0.0f, 0x1.2b1e22p-81f,
     0x1.bd3f0ap-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c12b0cp-22f,
     0x1.449a04p-28f, 0.0f, 0.0f, 0.0f, 0x1.54966ep-58f, 0x1.724b9ep-100f, 0.0f,
     0x1.906514p-114f, 0x1.2f501ap-84f, 0.0f, 0.0f, 0.0f, 0x1.ef4f6p-83f,
     0x1.34d02ap-49f, 0.0f, 0.0f, 0x1.5b9494p-90f, 0.0f, 0x1.a15a4ap-122f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.25ec54p-122f, 0x1.35c364p-64f, 0.0f, 0.0f, 0x1.73992p-51f,
     0.0f, 0x1.7e2364p-71f, 0x1.cbc33cp-59f, 0x1.c7a912p-21f, 0.0f, 0.0f,
     0x1.fb4fc4p-69f, 0x1.df4f74p-113f, 0x1.db95fcp-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c7b086p-61f, 0.0f, 0x1.c5207p-26f, 0x1.9a8476p-110f, 0.0f, 0x1.7e8fe8p-11f,
     0.0f, 0x1.5df042p-123f, 0x1.bbf004p-86f, 0.0f, 0x1.e9091p-118f, 0.0f,
     0x1.057158p-119f, 0x1.14fc9p-94f, 0x1.c04c92p-61f, 0x1.7df4cp-123f, 0.0f,
     0x1.80216p-108f, 0x1.dd7532p-78f, 0x1.293212p-42f, 0x1.0b352ep-92f,
     0x1.0631bep-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.87c54p-96f, 0.0f, 0x1.31986ap-43f,
     0x1.0d38bcp-108f, 0.0f, 0x1.d8368cp-110f, 0.0f, 0x1.54f24ep-71f, 0.0f, 0.0f,
     0x1.46d0e2p-97f, 0x1.ac858ap-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e75162p-5f,
     0x1.547e7p-104f, 0x1.1e1684p-16f, 0.0f, 0.0f, 0x1.c834b4p-77f, 0x1.2edf5ap-125f,
     0.0f, 0x1.aedd5p-18f, 0.0f, 0.0f, 0.0f, 0x1.935adap-41f, 0x1.dfbfdep-124f,
     0x1.139946p-22f, 0x1.9e6046p-110f, 0x1.5b7702p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.83dd7ep-122f, 0x1.a4ea6ep-88f, 0.0f, 0.0f, 0x1.565498p-102f, 0.0f,
     0.0f, 0.0f, 0x1.1588eep-80f, 0x1.db2552p-44f, 0.0f, 0x1.00726ap-42f,
     0x1.0aa198p-126f, 0.0f, 0.0f, 0x1.54fa76p-28f, 0x1.af937p-108f, 0x1.64727cp-101f,
     0.0f, 0x1.b320dap-29f, 0.0f, 0x1.132f92p-30f, 0.0f, 0.0f, 0x1.51d4a2p-72f, 0.0f,
     0x1.3b23dap-37f, 0x1.239c6ep-13f, 0.0f, 0x1.aab16cp-81f, 0x1.702aa2p-17f,
     0x1.4445c2p-67f, 0x1.ece78ep-20f, 0.0f, 0.0f, 0.0f, 0x1.d34f98p-42f, 0.0f,
     0x1.f3c8fp-84f, 0x1.4e26c4p-10f, 0.0f, 0.0f, 0x1.d01896p-30f, 0x1.54d88p-110f,
     0x1.ea6e7p-55f, 0.0f, 0.0f, 0.0f, 0x1.0b77fap-49f, 0.0f, 0x1.1e070ep-40f, 0.0f,
     0.0f, 0x1.f083a8p-87f, 0x1.b46326p-74f, 0x1.7bd1acp-62f, 0x1.eb6764p-69f,
     0x1.91f2c6p-83f, 0x1.131628p-56f, 0x1.483748p-9f, 0x1.bc26fap-51f, 0.0f,
     0x1.daa408p-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0c653ap-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6f8012p-12f, 0x1p0f, 0.0f,
     0x1.420436p-3f, 0x1.39c11cp-126f, 0x1.0947ep-100f, 0.0f, 0x1.7ed7cap-48f,
     0x1.d3755p-116f, 0.0f, 0.0f, 0x1.63e65cp-37f, 0x1.e3f092p-66f, 0x1.e4507ap-9f,
     0.0f, 0x1.106884p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b1df9ap-39f,
     0x1.e6e1f2p-21f, 0x1.8b554ap-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d77a4p-56f, 0.0f, 0x1.16e37ap-33f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d01582p-35f, 0x1.6ad514p-55f, 0x1.1123e2p-20f, 0.0f, 0.0f, 0.0f,
     0x1.4af652p-116f, 0x1.fb5d6ap-68f, 0x1.461816p-45f, 0.0f, 0x1.eb055cp-123f,
     0x1.6d793ap-115f, 0x1.e82274p-16f, 0.0f, 0.0f, 0x1.791e44p-26f, 0x1.4ab18p-115f,
     0x1.b1d47ap-69f, 0x1.8f3766p-119f, 0x1.72ce7ap-12f, 0.0f, 0x1.24e1cep-126f,
     0x1.29ef84p-75f, 0.0f, 0x1.bd6b2cp-72f, 0.0f, 0x1.07059ep-87f, 0x1.720e1cp-116f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.8d0c5ap-81f, 0.0f, 0x1.183dcp-121f, 0.0f, 0.0f,
     0x1.1d19p-113f, 0x1.5e0e88p-22f, 0x1.d44f1p-42f, 0x1.7658cap-119f,
     0x1.fc6e36p-124f, 0x1.6b3972p-124f, 0.0f, 0.0f, 0x1.e41286p-52f, 0x1.8f9094p-91f,
     0x1.0387fp-59f, 0x1.78864ep-34f, 0.0f, 0x1.1aa8dcp-27f, 0x1.a4257ap-113f,
     0x1.d7c61p-81f, 0x1.d5fd7p-74f, 0x1.64c89ap-119f, 0.0f, 0x1.bbaa1ap-39f,
     0x1.431a06p-56f, 0x1.f835bp-98f, 0x1.a8064ep-70f, 0x1.7dad7p-39f, 0.0f, 0.0f,
     0x1.be841p-3f, 0x1.26e308p-66f, 0.0f, 0x1.83535ap-109f, 0.0f, 0.0f,
     0x1.927a56p-79f, 0x1.bef2bp-68f, 0x1.37be32p-98f, 0x1p0f, 0x1.03faecp-62f, 0.0f,
     0x1.feac6ap-116f, 0x1.b3e2b8p-117f, 0.0f, 0.0f, 0x1.79f6ecp-66f, 0.0f,
     0x1.52d9f8p-92f, 0.0f, 0x1.c70664p-126f, 0.0f, 0x1.af7594p-92f, 0.0f,
     0x1.f807e2p-60f, 0.0f, 0x1.c68722p-113f, 0.0f, 0x1.137c04p-37f, 0x1.d11834p-35f,
     0.0f, 0.0f, 0x1.1c3826p-64f, 0x1.b43588p-72f, 0x1.d7b27p-108f, 0x1.66ac7p-78f,
     0.0f, 0x1.3720e8p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ce4beap-2f, 0x1.d6327ap-120f,
     0x1.973e86p-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f
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
            tmp1 = Sleef_sinpif8_u05kvx(tmp0);
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
    printf("Sleef_sinpif8_u05kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_sinpif8_u05kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
