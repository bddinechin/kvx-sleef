/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_nextafterf4_avx2128.c --function Sleef_nextafterf4_avx2128 \
 *     --arity 2 --headers sleef.h,ml_support_lib.h --input-formats \
 *     binary32,binary32 --vector-size 4 --function-input-vector-size 4 \
 *     --bench --no-embedded-bin --target x86_avx2128
 * 
**/
#include <stdint.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float4_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float4_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0.0f, 0.0f, 0x1.6896c8p-69f, 0.0f, 0x1.23be16p-106f, 0x1.4fb5d4p-74f, 0.0f,
     0.0f, 0x1.0e9ab6p-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.479e42p-49f,
     0x1.67642ap-46f, 0x1.4d8e3ep-35f, 0.0f, 0x1.8fd82ap-77f, 0x1.81cdd2p-53f,
     0x1.2a37bcp-49f, 0x1.6c3502p-98f, 0x1.2b1396p-50f, 0.0f, 0x1.7ca38ap-124f,
     0x1.2502f2p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.786bcap-71f, 0.0f, 0x1.6afcc8p-91f,
     0x1.fbfb88p-34f, 0x1.3907c6p-8f, 0.0f, 0x1.3f19b6p-46f, 0x1.c8f338p-9f, 0.0f,
     0x1.9d5fd8p-101f, 0x1.9b379p-1f, 0.0f, 0.0f, 0.0f, 0x1.3b68e4p-59f, 0.0f, 0.0f,
     0.0f, 0x1.f51454p-123f, 0.0f, 0x1.dd076cp-22f, 0.0f, 0x1.e2b972p-26f,
     0x1.0d6966p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.533808p-17f, 0x1.f97202p-6f, 0.0f,
     0x1.21fccp-7f, 0.0f, 0.0f, 0x1.285bdp-14f, 0.0f, 0x1.5eaa2ep-32f, 0.0f,
     0x1.5e5d2ep-87f, 0x1.3af4f4p-112f, 0x1.be4322p-14f, 0.0f, 0x1.9e2e8cp-23f,
     0x1.0d8d2ep-2f, 0x1.da1a14p-99f, 0x1.fa310ap-11f, 0.0f, 0x1.e19dc2p-94f,
     0x1.3f1fep-84f, 0x1.1210a2p-35f, 0x1.002688p-56f, 0x1.0d2ep-51f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.4a8b7cp-53f, 0x1.c32174p-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8dd28cp-89f, 0.0f, 0.0f, 0x1.cc24fap-28f, 0x1.7f2b72p-70f, 0x1.dc0c34p-31f,
     0x1.738946p-57f, 0.0f, 0.0f, 0.0f, 0x1.e4ad6ap-72f, 0.0f, 0.0f, 0x1.d98e5p-4f,
     0x1.c579e2p-82f, 0.0f, 0.0f, 0x1p0f, 0x1.413caep-116f, 0x1.c3d22ep-68f,
     0x1.be3b1ap-41f, 0.0f, 0x1.9c48a6p-117f, 0.0f, 0x1.cfafcep-31f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.00d8acp-61f, 0x1.bd5114p-100f, 0x1.e60bacp-1f,
     0.0f, 0.0f, 0x1.fb3c16p-69f, 0x1.94d838p-78f, 0.0f, 0x1.d4bdc6p-34f, 0.0f,
     0x1.09d7cap-107f, 0x1.4974eap-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f52f0cp-17f,
     0x1.7bb5eap-39f, 0x1.a468bap-87f, 0.0f, 0.0f, 0.0f, 0x1.8c7736p-74f,
     0x1.20b0b6p-74f, 0x1.17d816p-10f, 0.0f, 0x1.ed894ep-74f, 0x1.e99a0ap-70f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c3035ep-57f, 0x1.32c2ccp-13f, 0.0f, 0x1.cec81ap-116f, 0.0f,
     0x1.1945cep-17f, 0x1.e777fap-51f, 0x1.9a8334p-43f, 0x1.48dc4p-83f,
     0x1.247bbp-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.10574p-41f, 0x1.1c31eap-14f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1c5c76p-54f, 0.0f, 0x1.74a3fp-83f, 0.0f,
     0x1.2c82b4p-40f, 0.0f, 0.0f, 0x1.ce1f16p-122f, 0x1.8250bep-11f, 0.0f, 0.0f, 0.0f,
     0x1.9dc9a4p-46f, 0.0f, 0x1.d2f532p-96f, 0.0f, 0x1.e0a03ep-106f, 0.0f,
     0x1.fbbe52p-82f, 0.0f, 0.0f, 0x1.c2fbe2p-84f, 0x1.a7b52ap-79f, 0x1.ac9fb8p-35f,
     0x1.60c256p-52f, 0x1.4b0d6ep-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ce992ap-112f, 0x1.46b4c4p-91f, 0.0f, 0.0f, 0.0f, 0x1.ef6ap-38f,
     0x1.6d9eaap-9f, 0.0f, 0.0f, 0x1.b34842p-125f, 0x1.a2e146p-28f, 0x1.0ee73cp-108f,
     0.0f, 0x1.e08144p-82f, 0.0f, 0.0f, 0x1.cf0da2p-89f, 0.0f, 0x1.9cff78p-68f,
     0x1.ee80cep-90f, 0x1.f2dbe2p-116f, 0x1.7836c8p-75f, 0.0f, 0.0f, 0x1.617ceep-126f,
     0.0f, 0.0f, 0.0f, 0x1.f0d2f4p-117f, 0x1.9c4fcp-72f, 0.0f, 0.0f, 0.0f,
     0x1.1de2e6p-40f, 0x1.9d6c9p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d73362p-48f, 0.0f,
     0x1.e1ccbp-65f, 0.0f, 0x1.dcc872p-84f, 0x1.36187cp-86f, 0x1.e2cf7ep-12f, 0.0f,
     0.0f, 0x1.21df96p-109f, 0x1.7a059cp-105f, 0.0f, 0x1.4a136cp-6f, 0x1.b9911ep-11f,
     0.0f, 0x1.ebd47p-13f, 0x1.75d538p-49f, 0x1.fc898p-74f, 0x1.994b18p-17f, 0.0f,
     0.0f, 0x1.c79844p-35f, 0.0f, 0.0f, 0x1.aa6172p-15f, 0x1.af4622p-10f, 0.0f,
     0x1.86b87ap-83f, 0x1.578202p-43f, 0x1.2ca71ap-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6ab8e8p-75f, 0x1.94212ep-43f, 0.0f, 0.0f, 0x1.52e04p-25f, 0x1.57ba12p-44f,
     0.0f, 0x1.8004f8p-68f, 0.0f, 0x1.7e5588p-61f, 0x1.91f1b4p-45f, 0.0f,
     0x1.d40d4ap-92f, 0x1.04a02ap-56f, 0.0f, 0x1.fb5facp-9f, 0x1.f1d0ap-67f, 0.0f,
     0x1.bff51ap-107f, 0.0f, 0.0f, 0x1.ff2b02p-93f, 0x1.824f86p-39f, 0.0f, 0.0f,
     0x1.5a2c44p-20f, 0.0f, 0.0f, 0x1.fdd9eap-26f, 0x1.95e41ep-22f, 0.0f,
     0x1.96c296p-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d5109ap-100f, 0x1.da53fp-60f,
     0x1.70835ep-14f, 0.0f, 0x1.034ffp-3f, 0x1.a7efa2p-61f, 0x1.d584a2p-97f, 0.0f,
     0x1.55765cp-58f, 0x1.493f92p-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.383362p-63f,
     0x1.82cac6p-121f, 0x1.6c5782p-57f, 0x1.d07b1ep-12f, 0.0f, 0.0f, 0x1.4e9798p-87f,
     0.0f, 0.0f, 0x1.3d8234p-4f, 0x1.7bd946p-82f, 0x1.674804p-77f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.64f2aep-52f, 0.0f, 0x1.5bb33ap-114f, 0x1.e4ea46p-50f, 0x1.73228cp-14f,
     0x1.34dfcap-103f, 0x1.f49a08p-58f, 0.0f, 0x1.749bbcp-101f, 0x1.b515cap-85f, 0.0f,
     0x1.639e66p-30f, 0.0f, 0.0f, 0x1.6505f8p-92f, 0x1.c8e2a8p-22f, 0.0f, 0.0f,
     0x1.77f0e8p-124f, 0x1.f30e2cp-22f, 0x1.dcc5cp-86f, 0x1.6670b4p-87f,
     0x1.e84ed4p-51f, 0.0f, 0x1.076882p-58f, 0.0f, 0.0f, 0.0f, 0x1.eae20cp-39f,
     0x1.16a434p-57f, 0.0f, 0x1.364f08p-50f, 0x1.c0a10cp-11f, 0.0f, 0.0f, 0.0f,
     0x1.c3170cp-64f, 0x1.dcc12p-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.66fab6p-110f,
     0x1.1992dp-82f, 0.0f, 0.0f, 0x1.cc4118p-33f, 0x1.16693ep-101f, 0x1.6796d8p-79f,
     0.0f, 0x1.eb06ep-123f, 0x1.31b59cp-28f, 0x1.360c84p-120f, 0.0f, 0.0f,
     0x1.67c244p-20f, 0x1.ff28d2p-35f, 0.0f, 0x1.f699d8p-121f, 0.0f, 0x1.2a03p-51f,
     0x1.5c8252p-18f, 0.0f, 0.0f, 0x1.94c2d6p-101f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.37bc4cp-37f, 0x1.589606p-97f, 0x1.af5b8ep-80f, 0.0f, 0x1.378026p-60f, 0.0f,
     0x1.86af3p-9f, 0x1.1518ccp-118f, 0x1.c89a96p-12f, 0.0f, 0x1.e7900cp-50f, 0.0f,
     0.0f, 0x1.2f7e5ep-71f, 0x1.a15584p-59f, 0.0f, 0.0f, 0x1.856d52p-72f, 0.0f,
     0x1.ebdfe6p-37f, 0x1.d0275ep-15f, 0x1.892628p-82f, 0x1.f27fdep-102f, 0.0f, 0.0f,
     0x1.86833ep-88f, 0x1.3c5214p-62f, 0x1.ae6ccp-109f, 0.0f, 0x1.3c5cp-109f,
     0x1.a0ef22p-8f, 0.0f, 0.0f, 0x1.79dc06p-79f, 0x1.fdc14ep-120f, 0x1.00bd5cp-56f,
     0.0f, 0x1.8993eep-89f, 0.0f, 0x1.f3894cp-7f, 0x1.5aaf5ep-123f, 0.0f, 0.0f,
     0x1.a2aaap-17f, 0x1.d3a018p-29f, 0.0f, 0x1.05f918p-19f, 0x1.ca3152p-37f, 0.0f,
     0.0f, 0x1.e121e4p-27f, 0x1.234bd2p-74f, 0x1.0211aep-76f, 0x1.a83212p-24f,
     0x1.8db2a4p-65f, 0x1.6bd44ap-83f, 0.0f, 0x1.637d2ep-50f, 0.0f, 0x1.abcb96p-9f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.1331b8p-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9fabd2p-98f, 0x1.a9153p-78f, 0x1.6293fap-42f, 0.0f, 0x1.b91d98p-93f, 0.0f,
     0.0f, 0x1.6766ecp-58f, 0.0f, 0x1.b714p-43f, 0x1.32ae32p-121f, 0x1.2f58ap-46f,
     0.0f, 0.0f, 0.0f, 0x1.30685p-83f, 0x1.3a19fep-66f, 0.0f, 0.0f, 0x1.aa51bcp-88f,
     0x1.8e2ap-68f, 0x1.167faap-78f, 0x1.37babep-71f, 0x1.7b007p-16f, 0x1.dbc4bep-39f,
     0.0f, 0x1.1fb40ep-7f, 0x1.b13c98p-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f3e4f8p-100f,
     0.0f, 0x1.2541cp-45f, 0.0f, 0.0f, 0.0f, 0x1.ff45dap-69f, 0.0f, 0.0f,
     0x1.bea628p-93f, 0.0f, 0x1.1f63dap-115f, 0.0f, 0.0f, 0x1.8a8476p-20f,
     0x1.08bf24p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.fea4c6p-92f, 0.0f, 0x1.18d084p-114f, 0.0f, 0.0f, 0x1.2b7464p-11f, 0.0f,
     0x1.b8493p-49f, 0.0f, 0x1.28e142p-115f, 0x1.852522p-68f, 0.0f, 0.0f,
     0x1.1cdff8p-52f, 0.0f, 0.0f, 0x1.c917a8p-60f, 0.0f, 0.0f, 0x1.beb5c4p-59f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.4e6f62p-5f, 0.0f, 0.0f, 0x1.6cd86p-68f, 0.0f,
     0x1.c89076p-33f, 0.0f, 0.0f, 0x1.4d60dep-89f, 0x1.1a0b3ep-117f, 0.0f,
     0x1.88f0dap-115f, 0.0f, 0x1.22c356p-88f, 0x1.de7d46p-55f, 0x1.0f398p-20f, 0.0f,
     0x1.01a298p-106f, 0x1.cc2d52p-19f, 0.0f, 0x1.c756ep-114f, 0.0f, 0x1.340d28p-18f,
     0x1.23d8f2p-118f, 0.0f, 0x1.8d17p-34f, 0x1.bd9518p-67f, 0x1.d3e80cp-65f,
     0x1.e8a86ep-120f, 0.0f, 0x1.ddae1cp-36f, 0x1.571adap-67f, 0x1.c5b10cp-64f,
     0x1.05158ep-70f, 0x1.e3fe0ap-122f, 0.0f, 0x1.d6b95p-85f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e0f2d4p-67f, 0x1.363432p-113f, 0x1.7e89p-65f, 0.0f,
     0x1.9f8256p-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.96b292p-113f, 0.0f, 0.0f, 0.0f,
     0x1.dc3086p-64f, 0x1.41a45cp-17f, 0.0f, 0x1.dbb2d6p-71f, 0.0f, 0x1.8d2732p-77f,
     0x1.2e84e4p-9f, 0.0f, 0.0f, 0x1.d810c4p-68f, 0x1.d49cd4p-61f, 0x1.d4f1d2p-44f,
     0x1.d9f574p-49f, 0x1.0b2bfep-51f, 0x1.3d95dcp-15f, 0.0f, 0x1.a01f38p-66f, 0.0f,
     0.0f, 0x1.807638p-101f, 0x1.cb6c3cp-70f, 0.0f, 0x1.e331aep-4f, 0x1.df006cp-108f,
     0.0f, 0x1.4796ecp-39f, 0.0f, 0x1.54d694p-3f, 0x1.9f45e2p-5f, 0x1.a3fa06p-109f,
     0.0f, 0.0f, 0.0f, 0x1.d5ab8ep-8f, 0.0f, 0x1.81bddp-88f, 0x1.fa035ep-107f, 0.0f,
     0.0f, 0x1.1c8ac6p-100f, 0x1.c3593p-78f, 0x1.bc0846p-58f, 0x1.309756p-67f, 0.0f,
     0x1.83f89ep-56f, 0x1.314eeap-19f, 0x1.070a04p-25f, 0x1.ae9224p-82f,
     0x1.cb3ed4p-49f, 0x1.d4ef84p-8f, 0x1.547f4p-48f, 0x1.3ecb18p-42f, 0.0f,
     0x1.099bc6p-38f, 0.0f, 0x1.43e44cp-111f, 0.0f, 0.0f, 0x1.260eaep-3f,
     0x1.f493aep-1f, 0.0f, 0.0f, 0x1.7983f2p-125f, 0.0f, 0x1.e9de62p-12f, 0.0f,
     0x1.269926p-97f, 0x1.abdfa8p-80f, 0.0f, 0x1.e80a06p-63f, 0x1.9dc3d2p-108f, 0.0f,
     0x1.b465cp-50f, 0x1.1e42fp-76f, 0x1.db88b8p-72f, 0.0f, 0.0f, 0x1.8ad894p-58f,
     0x1.e72a94p-79f, 0x1.cc1ff8p-59f, 0x1.87d3fap-67f, 0x1.3adb76p-79f, 0.0f, 0.0f,
     0x1.ee5282p-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1d64fap-22f, 0.0f, 0x1.eae778p-75f,
     0.0f, 0x1.4f1adap-98f, 0.0f, 0x1.84b498p-57f, 0x1.be8a4cp-20f, 0x1.0a509ap-54f,
     0.0f, 0x1.4cd67ap-93f, 0.0f, 0.0f, 0.0f, 0x1.4510eap-91f, 0.0f, 0.0f,
     0x1.7903bcp-65f, 0x1.34d9ecp-13f, 0.0f, 0x1.962d2ap-61f, 0x1.604a7ep-24f,
     0x1.2a045ap-40f, 0.0f, 0.0f, 0x1.3c7d66p-121f, 0x1.bf6138p-9f, 0x1.7e738cp-43f,
     0.0f, 0x1.cf98p-119f, 0x1.885e9ep-3f, 0.0f, 0.0f, 0x1.28e834p-76f,
     0x1.279eaap-34f, 0x1.4f99a8p-63f, 0x1.9e3308p-4f, 0.0f, 0.0f, 0x1.5ed262p-106f,
     0.0f, 0x1.82155ap-100f, 0.0f, 0.0f, 0.0f, 0x1.5834e2p-93f, 0x1.1c437ap-32f,
     0x1.f0c6a4p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.224fc4p-104f, 0.0f, 0x1.237d04p-33f,
     0x1.dcb34ep-90f, 0x1.d0832ap-68f, 0x1.277e2p-107f, 0.0f, 0.0f, 0x1.dc627ap-52f,
     0.0f, 0x1.a52fcep-55f, 0.0f, 0.0f, 0.0f, 0x1.576822p-76f, 0x1.1e88bap-24f,
     0x1.7e224cp-35f, 0x1.c0e71ap-71f, 0x1.3177e8p-57f, 0x1.0d3c14p-109f, 0.0f,
     0x1.c70292p-99f, 0x1.e64e38p-28f, 0.0f, 0.0f, 0x1.da1f54p-123f, 0x1.e8b1dep-105f,
     0.0f, 0x1.c4837p-5f, 0x1.082986p-54f, 0.0f, 0.0f, 0.0f, 0x1.cf4b3cp-35f,
     0x1.18a89p-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.81b7acp-51f, 0x1p0f,
     0x1.32b6cp-90f, 0.0f, 0x1.ead342p-19f, 0x1.2c42cep-59f, 0.0f, 0x1.bf1a76p-123f,
     0x1.36a186p-42f, 0.0f, 0x1.2ab5fcp-28f, 0x1.aaf7fep-26f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.95f522p-51f, 0x1p0f, 0x1.399802p-124f, 0.0f, 0.0f,
     0x1.946158p-43f, 0.0f, 0.0f, 0.0f, 0x1.ac8c7ap-2f, 0x1.e08308p-47f,
     0x1.3b4a66p-48f, 0x1.9b8028p-36f, 0x1.b60a68p-126f, 0.0f, 0.0f, 0x1.20cd1p-65f,
     0.0f, 0.0f, 0.0f, 0x1.0c19ap-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6fa9c8p-47f,
     0x1.b67588p-87f, 0.0f, 0.0f, 0x1.50e7d6p-88f, 0.0f, 0x1.f389a6p-36f, 0.0f,
     0x1.89f87cp-81f, 0x1.f08df8p-13f, 0x1.a2cc26p-81f, 0.0f, 0.0f, 0.0f,
     0x1.2e70aep-54f, 0x1.5b2468p-101f, 0x1.fcf706p-104f, 0.0f, 0x1.252632p-97f,
     0x1.03630ap-56f, 0x1.4e8feap-38f, 0x1.61a8cp-68f, 0x1.1b8476p-16f, 0.0f,
     0x1.f2a9a6p-26f, 0x1.3ec16p-107f, 0x1.711d54p-24f, 0x1.b63764p-81f,
     0x1.663e76p-25f, 0x1.f46066p-66f, 0x1.d26adep-102f, 0.0f, 0.0f, 0.0f,
     0x1.48114ap-12f, 0.0f, 0.0f, 0x1.01f9a8p-76f, 0x1.ef1278p-41f, 0.0f,
     0x1.610208p-39f, 0x1.d23426p-56f, 0.0f, 0.0f, 0.0f, 0x1.f4cap-43f,
     0x1.d0f266p-40f, 0x1.c7d244p-15f, 0.0f, 0.0f, 0x1.20d936p-47f, 0.0f, 0.0f, 0.0f,
     0x1.02ead2p-97f, 0x1.6d9abp-35f, 0.0f, 0x1.6cb112p-41f, 0x1.6e733cp-74f, 0.0f,
     0x1.bbf9dep-36f, 0x1.44b8dap-103f, 0x1.98b388p-32f, 0x1.b936eep-5f, 0.0f,
     0x1.a94beap-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7e0a1ap-49f, 0x1.7a08aep-41f,
     0x1.5e84e8p-59f, 0.0f, 0x1.5f1098p-37f, 0x1.366b3ep-98f, 0x1.574c94p-98f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.2cb822p-31f, 0x1.425982p-19f, 0x1.34dbb4p-29f, 0.0f,
     0x1.7a396p-58f, 0.0f, 0x1.29c5cp-114f, 0x1.6055fp-105f, 0.0f, 0x1.fa30b2p-73f,
     0x1.0abda4p-107f, 0x1.5dd372p-25f, 0x1.87bec4p-28f, 0.0f, 0.0f, 0x1.9eb386p-36f,
     0.0f, 0.0f, 0.0f, 0x1.ece0a4p-79f, 0x1.451d62p-9f, 0.0f, 0.0f, 0x1.dff82ep-112f,
     0x1.c15818p-39f, 0.0f, 0x1.c8a54ap-31f, 0.0f, 0x1.bb9f3cp-106f, 0.0f, 0.0f,
     0x1.221458p-16f, 0x1.8e773cp-76f, 0x1.efe71ep-41f, 0.0f, 0x1.9c42bap-123f,
     0x1.7cb534p-67f, 0x1.5113cap-20f, 0.0f, 0x1.0a9362p-108f, 0x1.e0963cp-59f,
     0x1.2c0f8ap-95f, 0x1.def482p-56f, 0.0f, 0.0f, 0x1.c26ebcp-91f, 0x1.c6e7b6p-63f,
     0.0f, 0x1.90e3aap-93f, 0x1.1b94dcp-37f, 0x1.857ddep-75f, 0.0f, 0x1.71409ap-22f,
     0x1.f10696p-45f, 0.0f, 0x1.1c6fc6p-122f, 0x1.d60b92p-22f, 0.0f, 0.0f, 0.0f,
     0x1.1741d4p-46f, 0x1.48f958p-92f
};
static const float external_bench_wrapper_input_table_arg1[1004]  = {
     0.0f, 0x1.10963ap-27f, 0x1.1a6598p-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.915ef2p-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.26f04cp-122f, 0.0f, 0.0f, 0x1.54ba8ap-15f, 0.0f, 0x1.17c7ecp-53f, 0.0f,
     0x1p0f, 0x1.f2a896p-24f, 0x1.4c14fap-13f, 0x1.47df5p-17f, 0.0f, 0.0f, 0.0f,
     0x1.cf3fb2p-42f, 0.0f, 0.0f, 0x1.7367e4p-110f, 0x1.f44cd2p-41f, 0x1.9c2168p-50f,
     0.0f, 0x1.5941f4p-119f, 0.0f, 0.0f, 0x1.045e78p-13f, 0x1.91eb76p-45f,
     0x1.2e0886p-68f, 0x1.19af5ep-25f, 0x1.86a708p-63f, 0.0f, 0x1.57f3cep-52f,
     0x1.7c12f8p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.18cb5p-43f, 0x1.88be64p-43f,
     0x1.017e12p-56f, 0.0f, 0.0f, 0x1.35f9b4p-22f, 0x1.f16e9ep-89f, 0x1.86edf4p-79f,
     0x1.092bc2p-52f, 0.0f, 0x1.709bfp-91f, 0x1.609222p-15f, 0x1.473c44p-114f,
     0x1.42ec0ep-101f, 0.0f, 0x1.4bd67ep-42f, 0x1.061296p-46f, 0x1.3cd4bcp-92f,
     0x1.2ce42cp-109f, 0.0f, 0x1.ec642ap-74f, 0x1.c1ce6cp-24f, 0.0f, 0x1.f4aee8p-92f,
     0.0f, 0x1.a530a2p-110f, 0x1.1d023ep-46f, 0x1.88b8c8p-2f, 0x1.ce44b6p-23f,
     0x1.08c558p-27f, 0.0f, 0.0f, 0.0f, 0x1.a019a6p-33f, 0.0f, 0x1.354ed4p-10f,
     0x1.c57efap-101f, 0x1.eabedep-42f, 0x1.75aed6p-19f, 0x1.67b4acp-77f,
     0x1.60131p-105f, 0x1.9c62bcp-2f, 0.0f, 0.0f, 0x1.d996cp-20f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.91302ap-95f, 0.0f, 0x1.3313f8p-104f,
     0x1.dd98e8p-112f, 0.0f, 0x1.b36adep-36f, 0.0f, 0x1.75f8cp-114f, 0.0f, 0.0f, 0.0f,
     0x1.43077ep-59f, 0x1.72c9e8p-32f, 0x1.014feap-48f, 0.0f, 0.0f, 0.0f,
     0x1.39dce2p-46f, 0x1.39cb16p-23f, 0x1.e99bc6p-20f, 0x1.64388ep-112f,
     0x1.e4c30ep-59f, 0.0f, 0x1.1aa9bcp-82f, 0.0f, 0x1.5667a6p-119f, 0.0f, 0.0f, 0.0f,
     0x1.49295ap-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f72078p-37f, 0.0f, 0.0f,
     0x1.907a38p-7f, 0x1.d7830ap-91f, 0x1.8cbc6cp-72f, 0.0f, 0.0f, 0.0f,
     0x1.b6a656p-41f, 0x1.5110fap-83f, 0x1.7fdb5p-101f, 0x1.83f3fep-107f,
     0x1.6ca9cp-40f, 0x1.e20434p-42f, 0x1.c23d98p-46f, 0x1.052f56p-74f, 0.0f,
     0x1.6dc88cp-122f, 0x1.38122ap-66f, 0.0f, 0.0f, 0x1.bf11b2p-47f, 0.0f,
     0x1.255fdep-6f, 0.0f, 0x1.397586p-75f, 0.0f, 0.0f, 0x1.2a68cap-91f,
     0x1.b27a34p-110f, 0.0f, 0x1.c9a952p-120f, 0x1.a0a3b6p-16f, 0x1.9fa4e4p-53f, 0.0f,
     0x1.06753ep-106f, 0.0f, 0x1.9192a8p-46f, 0x1.58fd46p-112f, 0x1.4dd65ap-95f,
     0x1.f0dd0ap-52f, 0x1.50f47ep-25f, 0.0f, 0x1.39e456p-91f, 0.0f, 0.0f,
     0x1.8add6p-21f, 0.0f, 0.0f, 0.0f, 0x1.086896p-114f, 0x1.7aba4p-28f,
     0x1.ce8a82p-65f, 0.0f, 0.0f, 0x1.28cbfcp-7f, 0.0f, 0x1.3a206ap-109f,
     0x1.47eeaap-25f, 0.0f, 0x1.25ce16p-3f, 0.0f, 0.0f, 0x1.36ca4ep-79f,
     0x1.d4f228p-113f, 0x1.008f9p-102f, 0.0f, 0.0f, 0x1.1c489ep-102f, 0.0f, 0.0f,
     0x1.c1655cp-119f, 0.0f, 0x1.0c7164p-29f, 0.0f, 0x1.ca1646p-87f, 0x1.7adedap-41f,
     0x1.e9caf8p-28f, 0.0f, 0x1.a0289ep-14f, 0.0f, 0x1.9f52e8p-81f, 0x1.7c3db4p-98f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e7bbbp-105f, 0x1.4bae2p-35f,
     0x1.d30196p-40f, 0.0f, 0x1.e8d3c4p-48f, 0x1.a0409cp-3f, 0x1.59812ep-117f, 0.0f,
     0x1.5e74f8p-69f, 0x1.dfd164p-119f, 0x1.dcb28ap-32f, 0x1.696dc6p-94f, 0.0f, 0.0f,
     0.0f, 0x1.46fe2ap-7f, 0.0f, 0.0f, 0x1.deddccp-70f, 0x1.e337e2p-29f, 0.0f,
     0x1.bd6b9ap-36f, 0x1.3e0486p-40f, 0x1.6c057ep-88f, 0x1.38dca8p-103f,
     0x1.7c0ac2p-104f, 0x1.82766ep-38f, 0x1.ba056p-104f, 0.0f, 0x1.5caa6p-32f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.1d1044p-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.1395dp-32f, 0x1.d551f4p-91f, 0x1.107614p-28f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5de34cp-26f, 0.0f, 0x1p0f, 0x1.ebcd38p-113f, 0.0f, 0x1.0492e2p-59f,
     0x1.d8d7c2p-17f, 0x1.6cb9c8p-92f, 0x1.349dep-110f, 0.0f, 0.0f, 0x1.2348fep-106f,
     0x1.b1b53p-103f, 0.0f, 0x1.d9985ap-98f, 0x1.962c54p-45f, 0.0f, 0.0f,
     0x1.3fb3ccp-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.98232ep-66f,
     0x1.8eae2ap-11f, 0.0f, 0.0f, 0x1.6fae8ap-124f, 0.0f, 0x1.6471c6p-106f,
     0x1.eacf18p-116f, 0.0f, 0.0f, 0x1.e6dafep-104f, 0x1.606118p-15f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.46365p-116f, 0x1.b2784ap-26f, 0.0f, 0.0f,
     0x1.014fbep-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.49ecdap-41f, 0x1.55f792p-80f,
     0.0f, 0x1.1b3c9ep-123f, 0.0f, 0x1.07fb4p-88f, 0.0f, 0x1.bc3e4cp-17f, 0.0f, 0.0f,
     0x1p0f, 0x1.19dd16p-14f, 0x1.29f4ap-55f, 0.0f, 0x1.4d7b0cp-38f, 0x1.dae422p-2f,
     0.0f, 0x1.86a8ccp-77f, 0.0f, 0x1.237994p-67f, 0x1.84c56ep-6f, 0x1.334b98p-95f,
     0x1.43b548p-109f, 0.0f, 0x1.e77f7cp-13f, 0x1.587f98p-44f, 0.0f, 0x1.13a25cp-97f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.03503ep-1f, 0x1.e83928p-42f, 0x1.212dbcp-76f, 0.0f,
     0.0f, 0.0f, 0x1.d6dda4p-57f, 0.0f, 0x1.aabd98p-30f, 0.0f, 0x1.d7c4acp-86f, 0.0f,
     0.0f, 0x1.c5fe86p-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f0d84ap-118f, 0.0f,
     0x1.70cb06p-106f, 0x1.ae83a8p-116f, 0x1.2f34d2p-101f, 0.0f, 0.0f, 0.0f,
     0x1.7c5b2p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a13c26p-73f, 0.0f, 0x1.7acefp-8f,
     0x1.9fcc4cp-62f, 0x1.f50a4ap-20f, 0.0f, 0.0f, 0x1.d97c4cp-48f, 0x1.59bbfcp-91f,
     0x1.699024p-74f, 0x1.d99616p-10f, 0x1.5adc0cp-34f, 0.0f, 0x1.04662ap-90f, 0.0f,
     0x1.34f2d2p-106f, 0.0f, 0.0f, 0.0f, 0x1.433382p-48f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9534f6p-16f, 0.0f, 0.0f, 0x1.f692f2p-98f, 0x1.8d746ep-81f, 0.0f, 0.0f,
     0x1.44dc56p-22f, 0x1.1b895ap-107f, 0.0f, 0x1.ec4274p-65f, 0.0f, 0x1.ab2786p-55f,
     0.0f, 0x1.137e46p-81f, 0.0f, 0.0f, 0x1.0ade22p-45f, 0x1.aa73p-19f,
     0x1.07b7eep-108f, 0.0f, 0.0f, 0x1p0f, 0x1.a80228p-90f, 0x1.0b2e62p-10f, 0.0f,
     0.0f, 0.0f, 0x1.a82c6p-84f, 0x1.374c32p-82f, 0.0f, 0x1.9a058ap-113f, 0.0f, 0.0f,
     0x1.6ae1c6p-97f, 0x1.1d92dcp-63f, 0.0f, 0x1.e93e74p-11f, 0.0f, 0x1.6dcf5ep-31f,
     0.0f, 0x1.578b24p-79f, 0.0f, 0x1.f129f8p-17f, 0.0f, 0.0f, 0.0f, 0x1.f4ffa2p-58f,
     0x1.9722dcp-96f, 0.0f, 0x1.09adaep-36f, 0x1.14c8eap-40f, 0x1.601168p-120f,
     0x1.463818p-81f, 0.0f, 0x1.ed850cp-7f, 0x1.4b7e6p-105f, 0x1.1f15f6p-68f, 0.0f,
     0x1.cb8c86p-43f, 0.0f, 0x1.675deep-70f, 0x1.b79b76p-46f, 0x1.483128p-104f,
     0x1.17fe8cp-58f, 0x1.3be63ep-4f, 0.0f, 0x1.3af212p-39f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0d67a6p-8f, 0x1.167faep-81f, 0x1.2c840ap-38f, 0.0f, 0.0f, 0.0f,
     0x1.c127c6p-58f, 0x1.b50c12p-45f, 0x1.b5066ep-100f, 0.0f, 0.0f, 0.0f,
     0x1.481462p-85f, 0.0f, 0x1.1f823ep-91f, 0x1.de0d04p-9f, 0.0f, 0x1.312428p-66f,
     0x1.6a934ep-80f, 0x1.9e35b8p-72f, 0x1.7ed7bap-10f, 0.0f, 0.0f, 0x1.ef726cp-24f,
     0x1.d6102p-112f, 0x1.4fa91ap-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cfa622p-33f, 0.0f,
     0.0f, 0.0f, 0x1.7c3474p-95f, 0.0f, 0x1.de743ep-103f, 0.0f, 0.0f, 0x1.74fdf4p-8f,
     0.0f, 0x1.0c9044p-106f, 0.0f, 0x1.25b558p-102f, 0.0f, 0x1.583022p-93f, 0.0f,
     0x1.464868p-10f, 0x1.82424p-5f, 0x1.975aeap-65f, 0.0f, 0x1.918c82p-87f, 0.0f,
     0.0f, 0x1.01c7ep-115f, 0.0f, 0x1.c59f3ep-52f, 0x1.f074d4p-8f, 0.0f, 0.0f, 0.0f,
     0x1.a7f748p-90f, 0.0f, 0x1.410bd8p-62f, 0.0f, 0.0f, 0.0f, 0x1.5f86a4p-58f, 0.0f,
     0.0f, 0x1.f99d98p-97f, 0x1.fb7f14p-106f, 0x1.c87ebcp-20f, 0x1.10747ap-124f, 0.0f,
     0x1.ce8f4p-78f, 0.0f, 0x1.6c04dp-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.94227p-78f, 0.0f, 0x1.a8266p-39f, 0.0f, 0.0f, 0x1.a3888cp-44f,
     0x1.47ee3ep-60f, 0x1.7441ap-79f, 0.0f, 0x1.1af72ep-104f, 0.0f, 0.0f,
     0x1.4fcc16p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.400724p-6f, 0x1.ebae32p-19f,
     0x1.02e65ep-83f, 0.0f, 0.0f, 0x1.9ee1b2p-97f, 0x1.a29aaep-94f, 0.0f,
     0x1.821fa6p-88f, 0x1.427e08p-54f, 0x1.dc66bp-57f, 0x1.581344p-52f, 0.0f, 0.0f,
     0.0f, 0x1.747d64p-64f, 0x1.8eea14p-73f, 0x1.536c0ap-71f, 0x1.6289d6p-120f,
     0x1.d0ac4ap-85f, 0x1.25cc76p-15f, 0x1.b780f2p-102f, 0x1.04d49ep-7f,
     0x1.48433ap-51f, 0x1.b92e76p-46f, 0x1.fb05b4p-104f, 0.0f, 0x1.515b1p-48f,
     0x1.0abde4p-105f, 0.0f, 0.0f, 0x1.1cff82p-93f, 0.0f, 0x1.831864p-114f,
     0x1.2c3418p-4f, 0x1.e0100ep-24f, 0.0f, 0.0f, 0x1.66441p-99f, 0.0f, 0.0f, 0.0f,
     0x1.155c48p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.54af76p-44f,
     0x1.f010a8p-13f, 0.0f, 0x1.53fdf2p-65f, 0.0f, 0x1.455168p-115f, 0.0f,
     0x1.755272p-116f, 0.0f, 0.0f, 0x1.0101aep-84f, 0.0f, 0.0f, 0x1.f649bap-37f,
     0x1.eeffcp-115f, 0.0f, 0.0f, 0x1.78eap-71f, 0x1.3e0522p-50f, 0x1.8d761cp-121f,
     0x1.9c92c4p-126f, 0.0f, 0.0f, 0.0f, 0x1.c6ec36p-2f, 0.0f, 0.0f, 0x1.fc9fa4p-104f,
     0.0f, 0x1.0ae06ap-54f, 0.0f, 0x1.513c12p-123f, 0.0f, 0.0f, 0.0f, 0x1.8907aep-77f,
     0x1.5b9572p-64f, 0x1.4b383ep-54f, 0x1.e613bp-82f, 0x1.4ceb6p-1f, 0.0f,
     0x1.21b13ep-119f, 0.0f, 0x1.05749p-61f, 0x1.c6de86p-47f, 0x1.9cabap-26f, 0.0f,
     0x1.c8270ap-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.411e6p-125f, 0x1.c9cf62p-107f,
     0.0f, 0.0f, 0.0f, 0x1.cb5e7ep-89f, 0.0f, 0x1.a1c6c8p-8f, 0x1.39059p-13f,
     0x1.1e619ap-31f, 0.0f, 0x1.06e386p-1f, 0.0f, 0x1.0443bap-82f, 0x1.0e233ep-29f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.9fdbe6p-60f, 0.0f, 0.0f, 0x1.ed5252p-69f, 0.0f, 0.0f,
     0.0f, 0x1.f47c06p-101f, 0.0f, 0.0f, 0x1.d1931cp-70f, 0x1.b4e614p-119f,
     0x1.64d0f2p-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3e6916p-67f, 0x1.b4cd92p-50f,
     0x1.96ac7ep-122f, 0.0f, 0x1.f2a6b2p-44f, 0x1.cd6794p-116f, 0x1.281c2ap-5f,
     0x1.9d355cp-15f, 0x1.ddfe34p-1f, 0x1.342a72p-42f, 0.0f, 0x1.1b429cp-33f, 0.0f,
     0x1.56040ap-39f, 0.0f, 0.0f, 0.0f, 0x1.5c57b4p-16f, 0.0f, 0.0f, 0x1.2adb68p-15f,
     0.0f, 0x1.8a4f36p-89f, 0x1.c32fb2p-101f, 0.0f, 0.0f, 0x1.3301dcp-98f,
     0x1.aee1bcp-74f, 0.0f, 0.0f, 0x1.2f3f08p-21f, 0.0f, 0.0f, 0.0f, 0x1.6b4412p-11f,
     0x1.f057d8p-30f, 0x1.51c4e6p-92f, 0x1.148168p-104f, 0x1.bef18p-65f, 0.0f, 0.0f,
     0x1.ac485ap-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1d3552p-8f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.136952p-115f, 0x1.1b8d5cp-41f, 0x1.f7dab2p-66f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.734286p-24f, 0x1.1d67dep-18f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5ca984p-118f, 0x1.a64d42p-95f, 0x1.d9faa8p-50f, 0x1.329adp-74f, 0.0f, 0.0f,
     0x1.044db4p-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b4d95p-115f, 0x1.2be0c4p-115f,
     0x1.4bc03ap-48f, 0.0f, 0.0f, 0.0f, 0x1.a3bb48p-75f, 0x1.6abap-49f, 0.0f,
     0x1.c702dap-84f, 0x1.eb2932p-27f, 0.0f, 0x1.7e1938p-3f, 0.0f, 0.0f,
     0x1.6504acp-80f, 0.0f, 0x1.87c6eep-89f, 0.0f, 0x1.4d74b2p-13f, 0.0f, 0.0f,
     0x1.e164cap-98f, 0.0f, 0x1.58672p-1f, 0x1.b9e7aep-39f, 0x1.0341cep-124f,
     0x1.55b8aap-39f, 0x1.b1669ep-82f, 0.0f, 0.0f, 0.0f, 0x1.b15bb6p-123f,
     0x1.695968p-115f, 0x1.8509acp-47f, 0x1.0ace16p-20f, 0.0f, 0.0f, 0.0f,
     0x1.c74094p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9db7d8p-80f, 0x1.453cf8p-104f, 0.0f,
     0.0f, 0.0f, 0x1.21f446p-74f, 0.0f, 0x1.6535f8p-3f, 0x1.a1d1aap-69f,
     0x1.613722p-36f, 0.0f, 0x1.2797b6p-109f, 0.0f, 0x1.562044p-24f, 0.0f,
     0x1.fdf9b4p-100f, 0x1.95767ap-24f, 0.0f, 0x1.f65a4cp-4f, 0.0f, 0x1.82b0fap-104f,
     0x1.dbdb2cp-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.59552cp-17f, 0.0f, 0.0f,
     0x1.a6df9p-119f, 0.0f, 0.0f, 0.0f, 0x1.33c8dcp-61f, 0.0f, 0.0f, 0x1.ca5ef2p-36f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.11c0eap-2f, 0x1.74a5c4p-46f, 0x1.a758ep-65f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c2e61ap-72f, 0x1.9870e4p-52f,
     0x1.747646p-4f, 0x1.2d2ebp-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5d2588p-10f,
     0x1.6595a8p-104f, 0.0f, 0x1.7c41b8p-119f, 0.0f, 0.0f, 0x1.76c6dep-10f,
     0x1.8f54cp-1f, 0x1.1b9526p-80f, 0x1p0f, 0x1.692d3cp-80f, 0x1.f8c54ap-83f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e194d6p-118f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3a16f4p-100f, 0.0f, 0x1.8f736cp-53f, 0x1.d16142p-121f, 0.0f, 0x1.3b8032p-11f,
     0x1.68122p-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.373b72p-80f, 0x1.123526p-8f,
     0.0f, 0.0f, 0x1.6ec11cp-97f, 0x1.fb3f7ep-32f, 0.0f, 0x1.34492p-86f, 0.0f, 0.0f,
     0.0f, 0x1.c96962p-4f, 0x1.5dc94ep-121f, 0x1.35ce92p-124f, 0.0f, 0.0f, 0.0f,
     0x1.376da8p-66f, 0x1.635242p-116f, 0x1.37073cp-126f, 0x1.8eb71ep-71f, 0.0f,
     0x1.a6e936p-56f, 0.0f, 0x1.a29dap-72f, 0.0f, 0.0f, 0.0f, 0x1.4075a2p-23f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e0a566p-78f, 0x1.19aa6ep-5f, 0x1.47a3dep-20f, 0.0f,
     0.0f, 0.0f, 0x1.932a7cp-20f, 0.0f, 0.0f, 0x1.6fb8a8p-71f, 0.0f, 0x1.a96ddep-119f,
     0x1.6b6486p-4f, 0.0f, 0.0f, 0.0f, 0.0f
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
    
    global_bench_acc = external_bench_wrapper_cst;
    {
        uint32_t cycles_hi = 0, cycles_lo = 0;
        asm volatile (
            "cpuid\n\t"
            "rdtsc\n\t"
            "mov %%edx, %0\n\t"
            "mov %%eax, %1\n\t"
            : "=r" (cycles_hi), "=r" (cycles_lo)
            :: "%rax", "%rbx", "%rcx", "%rdx");
        tmp = ((uint64_t) cycles_hi << 32) | cycles_lo;
    };
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
            ml_float4_t tmp3;
            int32_t tmp4;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            memcpy(&tmp1, ((ml_float4_t*)(external_bench_wrapper_input_table_arg1+ i)), 16);
            tmp2 = Sleef_nextafterf4_avx2128(tmp0, tmp1);
            memcpy(((ml_float4_t*)(external_bench_wrapper_output_table+ i)), &(tmp2), 16);
            tmp3 = local_acc + tmp2;
            local_acc = tmp3;
            tmp4 = i + INT32_C(4);
            i = tmp4;
        }
        tmp0 = global_bench_acc + local_acc;
        global_bench_acc = tmp0;
        tmp1 = j + INT32_C(1);
        j = tmp1;
    }
    {
        uint32_t cycles_hi = 0, cycles_lo = 0;
        asm volatile (
            "cpuid\n\t"
            "rdtsc\n\t"
            "mov %%edx, %0\n\t"
            "mov %%eax, %1\n\t"
            : "=r" (cycles_hi), "=r" (cycles_lo)
            :: "%rax", "%rbx", "%rcx", "%rdx");
        tmp1 = ((uint64_t) cycles_hi << 32) | cycles_lo;
    };
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_nextafterf4_avx2128 %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_nextafterf4_avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
