/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_hypotf1_u35purecfma.c --function \
 *     Sleef_hypotf1_u35purecfma --arity 2 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32,binary32 --bench --no-embedded-bin --target \
 *     x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <xmmintrin.h>
#include <stdio.h>
#include <inttypes.h>


volatile float external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0.0f, 0x1.984498p-25f, 0x1.967778p-118f, 0x1.984db6p-73f, 0.0f, 0.0f, 0.0f,
     0x1.009b12p-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.42407ep-52f, 0x1.a9757p-35f,
     0x1.9fe6b2p-3f, 0x1.14b742p-114f, 0x1.b3202p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b413c2p-113f, 0x1.5d91dp-41f, 0x1.81d8bcp-114f, 0x1.b4333ap-65f, 0.0f,
     0x1.bceca8p-10f, 0.0f, 0x1.de4698p-84f, 0x1.5c7504p-61f, 0x1.2ed214p-48f, 0.0f,
     0x1.6f5944p-14f, 0x1.f69e6ep-12f, 0x1.3ce9dp-125f, 0x1.f9d0c4p-97f,
     0x1.803a2ep-63f, 0.0f, 0x1.d4abaep-19f, 0x1.27f924p-87f, 0.0f, 0x1.8f97p-64f,
     0x1.858d1cp-87f, 0.0f, 0x1.596fa4p-123f, 0.0f, 0x1.c4bb72p-2f, 0x1.a74646p-93f,
     0x1.8e516ep-42f, 0x1.9af22cp-114f, 0.0f, 0x1.32ad7p-80f, 0.0f, 0x1.e49366p-38f,
     0x1.f1a6aap-119f, 0x1.4bba0cp-55f, 0x1.1184c2p-87f, 0x1.033838p-112f, 0.0f,
     0x1.9dd30ap-58f, 0x1.797a36p-86f, 0x1.22b41cp-76f, 0x1.ec0ce8p-123f, 0.0f,
     0x1.5e746ep-79f, 0.0f, 0x1.b435dcp-31f, 0x1.40e942p-2f, 0x1.5dd6b2p-36f,
     0x1.e8e13ap-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.074ffp-92f, 0x1.ca0786p-123f,
     0x1.856f3cp-26f, 0x1.159356p-100f, 0.0f, 0x1.52ac9ep-33f, 0x1.06fe04p-40f, 0.0f,
     0x1.90cccp-96f, 0x1.989ac6p-106f, 0x1.776908p-125f, 0.0f, 0x1.1876p-72f, 0.0f,
     0x1.4cd20ep-76f, 0x1.94f826p-62f, 0x1.7c5ffap-16f, 0x1.276aep-89f, 0.0f,
     0x1.94816p-57f, 0.0f, 0x1.490aa2p-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b78766p-30f, 0x1.fb76d4p-19f, 0x1.689d5ap-95f, 0.0f, 0x1.1f39dcp-18f, 0.0f,
     0x1.1cd99p-93f, 0.0f, 0x1.3ea3f6p-73f, 0.0f, 0.0f, 0x1.26e944p-1f, 0.0f,
     0x1.683072p-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7fcbd2p-96f, 0.0f, 0.0f,
     0x1.6e6d5cp-105f, 0x1.216d6ap-122f, 0x1.0b2abcp-54f, 0.0f, 0x1.717ep-48f,
     0x1.65ddc4p-85f, 0.0f, 0x1.c10782p-100f, 0.0f, 0.0f, 0x1.935214p-67f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.119c2cp-86f, 0.0f, 0x1.ca24fp-75f, 0.0f, 0.0f, 0x1.27cd2ep-8f,
     0x1.d90938p-53f, 0.0f, 0x1.6b5b56p-48f, 0.0f, 0x1.834b62p-92f, 0x1.6d2622p-44f,
     0x1.12d0b2p-51f, 0x1.5d3284p-22f, 0.0f, 0x1.b1df32p-103f, 0x1.5c27c8p-37f,
     0x1.20ae3cp-88f, 0x1.50023ap-28f, 0x1.cbf69p-43f, 0.0f, 0x1.250c2ep-59f, 0.0f,
     0.0f, 0.0f, 0x1.4393e6p-91f, 0x1.9347c6p-77f, 0.0f, 0x1.103ep-7f,
     0x1.0b4ef8p-102f, 0.0f, 0.0f, 0.0f, 0x1.10e9cep-114f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c444e8p-80f, 0.0f, 0.0f, 0x1.77fb2p-14f, 0x1.05eb6ap-21f, 0x1.fcf1e2p-44f,
     0x1.1fb0c8p-125f, 0.0f, 0x1.1072ap-48f, 0.0f, 0x1.47c99cp-98f, 0x1.bbfe9ep-41f,
     0x1.ad7cap-70f, 0.0f, 0.0f, 0x1.d7cd54p-92f, 0x1.7a7108p-94f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ee14cep-24f, 0.0f, 0x1.60ef3ep-29f, 0.0f, 0x1.4659acp-32f, 0.0f,
     0x1.6cb8b4p-72f, 0.0f, 0x1.b5cbap-114f, 0.0f, 0x1.5418eep-36f, 0.0f,
     0x1.c9bb1p-73f, 0.0f, 0x1.c400bep-3f, 0.0f, 0x1.875c98p-71f, 0.0f,
     0x1.bc9aa4p-62f, 0.0f, 0.0f, 0x1.41d11ap-109f, 0.0f, 0.0f, 0x1.39f65cp-77f,
     0x1.994ff2p-76f, 0.0f, 0.0f, 0x1.731226p-11f, 0x1.03f9f6p-122f, 0x1.32ae2ap-93f,
     0.0f, 0.0f, 0x1.499dp-40f, 0x1.163c68p-11f, 0.0f, 0x1.30285cp-63f,
     0x1.bb9674p-84f, 0x1.d766ep-12f, 0.0f, 0.0f, 0x1.4115bap-66f, 0x1.7eff14p-36f,
     0.0f, 0x1.7203b2p-116f, 0.0f, 0x1.854058p-63f, 0.0f, 0x1.4ec3c6p-124f,
     0x1.197f9ap-36f, 0.0f, 0.0f, 0x1.a894e2p-109f, 0.0f, 0.0f, 0x1.fc34a8p-4f, 0.0f,
     0.0f, 0.0f, 0x1.1569aep-51f, 0.0f, 0.0f, 0.0f, 0x1.3f6548p-34f, 0.0f,
     0x1.a42b4cp-63f, 0.0f, 0.0f, 0x1.ddf4acp-112f, 0x1.a612fep-125f, 0x1.0ba7e6p-68f,
     0.0f, 0.0f, 0x1.d3b79cp-126f, 0x1.d8e1eap-17f, 0.0f, 0x1.576626p-85f,
     0x1.c86824p-3f, 0.0f, 0.0f, 0.0f, 0x1.10c304p-32f, 0.0f, 0x1.8444fep-85f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.0d58e2p-94f, 0.0f, 0x1.30d106p-71f, 0.0f, 0.0f,
     0x1.29c3dp-37f, 0.0f, 0.0f, 0x1.6f24dep-54f, 0x1.f524e4p-17f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cfd966p-23f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b46072p-93f, 0x1.d3e2d2p-49f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.6b1206p-70f, 0x1.04ac6cp-21f, 0.0f, 0x1.3ad6dp-102f, 0x1.da0e76p-57f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b6363cp-101f, 0.0f, 0.0f, 0x1.f717dp-71f,
     0x1.64c10cp-74f, 0x1.df079ep-114f, 0.0f, 0x1.1b9ee8p-52f, 0.0f, 0x1.c3be3ep-73f,
     0x1.634434p-4f, 0x1.1ddb26p-5f, 0.0f, 0.0f, 0.0f, 0x1.d5b42cp-107f,
     0x1.73f8d8p-28f, 0x1.f0c166p-7f, 0x1.b78e26p-50f, 0x1.328e9p-12f,
     0x1.54fad6p-17f, 0x1.063d82p-18f, 0x1.9dd7fap-17f, 0.0f, 0x1.c08932p-7f, 0.0f,
     0.0f, 0x1.94f9c2p-34f, 0x1.464584p-114f, 0.0f, 0x1.9360c6p-117f, 0.0f,
     0x1.77e9e6p-91f, 0x1.3ac486p-44f, 0.0f, 0x1.cf7e3cp-110f, 0.0f, 0x1.5b7604p-39f,
     0.0f, 0x1.933dccp-119f, 0x1.274182p-56f, 0.0f, 0.0f, 0x1.edfc86p-103f,
     0x1.c5315ap-104f, 0.0f, 0.0f, 0.0f, 0x1.666194p-111f, 0x1.7ac096p-36f,
     0x1.a2018p-42f, 0x1.e288d4p-105f, 0.0f, 0.0f, 0.0f, 0x1.12d964p-11f, 0.0f,
     0x1.e2c97ap-92f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.01c592p-81f, 0.0f, 0.0f,
     0x1.e906bcp-94f, 0.0f, 0x1.2cc6c4p-72f, 0.0f, 0.0f, 0x1.9dd65cp-5f, 0.0f, 0.0f,
     0x1.66aeccp-25f, 0.0f, 0x1.978e4p-73f, 0.0f, 0.0f, 0x1.720ba8p-106f,
     0x1.7cbd5p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.128f3cp-59f, 0x1.9c6a4ep-24f,
     0x1.a3da86p-46f, 0x1.203d48p-38f, 0.0f, 0.0f, 0.0f, 0x1.7c834ap-97f, 0.0f, 0.0f,
     0.0f, 0x1.f184fap-76f, 0x1.4f5af4p-35f, 0x1.205904p-48f, 0.0f, 0.0f,
     0x1.bb0952p-58f, 0x1.453ebp-67f, 0.0f, 0.0f, 0x1.b235acp-107f, 0x1.2de76ap-51f,
     0x1.b31eccp-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0d0646p-52f, 0.0f,
     0x1.835af2p-48f, 0x1.8b6ec2p-118f, 0.0f, 0.0f, 0x1.57fe5ep-60f, 0x1.eec7aap-82f,
     0.0f, 0.0f, 0x1.eb8dfap-14f, 0x1.531562p-72f, 0.0f, 0x1.1de0bp-23f,
     0x1.20ceb2p-38f, 0.0f, 0x1.7f616ap-8f, 0x1.c6d49p-87f, 0x1.9ef21ap-93f,
     0x1.0513dp-45f, 0x1.26e03ap-26f, 0.0f, 0x1.ea99f2p-7f, 0.0f, 0x1.7aec1ap-101f,
     0.0f, 0x1.bc5976p-20f, 0.0f, 0x1.d60098p-45f, 0x1.431c1p-24f, 0.0f,
     0x1.56c90cp-24f, 0.0f, 0.0f, 0x1.000cdcp-82f, 0.0f, 0x1.8fb798p-120f,
     0x1.553132p-55f, 0x1.d19278p-111f, 0.0f, 0x1.d3f2eep-92f, 0.0f, 0.0f, 0.0f,
     0x1.242ecep-31f, 0.0f, 0x1.c5d548p-59f, 0x1.27e46ap-89f, 0x1.174212p-33f, 0.0f,
     0x1.7596bp-7f, 0x1.318352p-64f, 0.0f, 0x1.40d92p-97f, 0x1.a11b8p-126f, 0.0f,
     0x1.92157cp-37f, 0x1.d90d0cp-36f, 0x1.daddaep-105f, 0.0f, 0.0f, 0.0f,
     0x1.6e09fep-48f, 0x1.b9be74p-81f, 0.0f, 0x1.a0b1e4p-120f, 0x1.4e9b6ap-95f, 0.0f,
     0.0f, 0x1.6153b6p-61f, 0.0f, 0x1.47892cp-42f, 0x1.1a154p-124f, 0.0f,
     0x1.9877e6p-94f, 0.0f, 0x1.a65bcap-2f, 0.0f, 0x1.9729ccp-37f, 0.0f, 0.0f,
     0x1.582ae4p-82f, 0x1.0e0336p-90f, 0.0f, 0.0f, 0x1.accb78p-67f, 0x1.13035cp-99f,
     0.0f, 0.0f, 0x1.456154p-49f, 0.0f, 0x1.b4e5f8p-92f, 0x1.369054p-5f,
     0x1.a56458p-100f, 0.0f, 0.0f, 0x1.ceefc2p-12f, 0x1.44be42p-41f, 0x1.41a24cp-19f,
     0x1.fb1ceep-110f, 0x1.34e194p-8f, 0.0f, 0.0f, 0x1.3a6a82p-31f, 0x1.463ce8p-64f,
     0.0f, 0x1.a12c2ap-56f, 0x1.f971ecp-103f, 0.0f, 0.0f, 0.0f, 0x1.89d22cp-125f,
     0x1.0cf91p-74f, 0x1.8c88d2p-95f, 0.0f, 0x1.5c109cp-101f, 0x1.ecc62cp-89f,
     0x1.20d4acp-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.867354p-18f, 0.0f, 0x1.7f498p-96f,
     0.0f, 0x1.24f6f2p-9f, 0x1.0bbe3cp-107f, 0x1.47d99cp-5f, 0x1.1e977ep-125f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e6e55p-81f, 0.0f, 0.0f, 0x1.fb99cap-11f,
     0x1.17fc48p-23f, 0x1.2417e6p-88f, 0x1.14fe7ap-62f, 0x1.0c6d64p-9f, 0.0f,
     0x1.8d0fc8p-84f, 0.0f, 0.0f, 0x1.095b9ep-61f, 0x1.699968p-40f, 0x1.d2e71ap-1f,
     0.0f, 0.0f, 0x1.34ed16p-104f, 0.0f, 0x1.f654d2p-25f, 0x1.70faccp-109f,
     0x1.50cbb4p-1f, 0x1.0582dp-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.448868p-62f, 0x1.44f892p-98f, 0.0f, 0x1.b24582p-60f, 0x1.01220ap-76f, 0.0f,
     0.0f, 0x1.4ed514p-60f, 0x1.40ceeap-69f, 0.0f, 0x1.d8fa44p-55f, 0x1.236fd4p-45f,
     0x1.9c4492p-83f, 0x1.5a0e2ap-20f, 0.0f, 0.0f, 0x1.64187ap-84f, 0.0f, 0.0f,
     0x1.c81e8p-28f, 0x1.b27b0ap-122f, 0.0f, 0.0f, 0x1.287394p-112f, 0.0f,
     0x1.20ddcep-71f, 0x1.4cd92ep-69f, 0.0f, 0.0f, 0x1.3fc5dp-16f, 0x1.028ca6p-75f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.2aee92p-42f, 0x1.c5166ap-5f, 0.0f, 0x1.ef429ap-62f,
     0.0f, 0x1.d51d6cp-24f, 0.0f, 0.0f, 0.0f, 0x1.5d5366p-66f, 0x1.e44c34p-18f, 0.0f,
     0x1.b27902p-99f, 0x1.0712b4p-104f, 0x1.bfc924p-8f, 0.0f, 0x1.f0a5a6p-25f, 0.0f,
     0x1.a86f88p-81f, 0.0f, 0.0f, 0x1.056b62p-12f, 0x1.181bf4p-82f, 0x1.31a16ep-68f,
     0.0f, 0x1.7a04f2p-118f, 0x1.f1e73cp-17f, 0x1.5ecd74p-115f, 0x1.066366p-47f,
     0x1.3c38f8p-100f, 0.0f, 0.0f, 0x1.60787p-29f, 0x1.558f7ep-69f, 0.0f,
     0x1.55502ep-49f, 0.0f, 0.0f, 0x1.9ba33ap-106f, 0x1.7085a2p-17f, 0.0f,
     0x1.34c1f4p-59f, 0x1.c39e86p-21f, 0x1.dd41fcp-43f, 0x1.eb870ep-103f, 0.0f,
     0x1.9faddep-107f, 0x1.29865cp-52f, 0.0f, 0x1.674342p-69f, 0x1.4c8992p-91f,
     0x1.6d917p-98f, 0x1.6c13dcp-28f, 0x1.5df89p-83f, 0x1.0b46fcp-62f,
     0x1.509778p-15f, 0x1.64caeep-44f, 0x1.7d88d6p-109f, 0x1.7549e8p-119f, 0.0f,
     0x1.93edcp-112f, 0x1.0b236ep-22f, 0x1.35ba4p-35f, 0x1.752accp-72f,
     0x1.7575d8p-119f, 0.0f, 0x1.dc6db4p-25f, 0x1.a925d4p-109f, 0.0f, 0x1.83e2c2p-64f,
     0x1.95e26ep-94f, 0.0f, 0x1.e4135ep-14f, 0.0f, 0.0f, 0x1.dae4dcp-1f, 0.0f,
     0x1.a6966ap-115f, 0x1.8f9b2ap-67f, 0x1.ae0f0ep-84f, 0.0f, 0x1.f92eep-109f,
     0x1.871b2cp-10f, 0x1.e25188p-95f, 0x1.425628p-84f, 0x1.89dfbap-52f,
     0x1.b47c7ap-14f, 0.0f, 0x1.f9228ap-81f, 0x1.11d4bap-66f, 0x1.9adap-103f, 0.0f,
     0.0f, 0x1.5c357ap-39f, 0.0f, 0x1.ceaa24p-44f, 0x1.515486p-109f, 0.0f,
     0x1.995568p-47f, 0.0f, 0x1.cba84ep-41f, 0.0f, 0.0f, 0.0f, 0x1.634d24p-89f, 0.0f,
     0x1.ea360cp-119f, 0.0f, 0x1.7ff0cep-116f, 0x1.4e127p-119f, 0x1.d318a6p-50f, 0.0f,
     0x1.f0c49ap-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.eaca5p-99f,
     0x1.f0a07ep-83f, 0.0f, 0.0f, 0.0f, 0x1.518a3ep-83f, 0x1.0ff8dp-43f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.af41aap-3f,
     0x1.94e5bep-96f, 0x1.63f884p-50f, 0.0f, 0x1.bd6356p-66f, 0.0f, 0x1.f2c7bep-43f,
     0.0f, 0x1p0f, 0.0f, 0x1.cb64ccp-23f, 0.0f, 0.0f, 0.0f, 0x1.6aba82p-81f,
     0x1.f6ad62p-52f, 0x1.900652p-83f, 0.0f, 0x1.2094fap-22f, 0.0f, 0x1.24f66ep-73f,
     0.0f, 0.0f, 0.0f, 0x1.1a543p-98f, 0.0f, 0x1.b50f9ap-64f, 0.0f, 0.0f, 0.0f,
     0x1.3c13d8p-42f, 0.0f, 0.0f, 0x1.93bdbap-1f, 0x1.6be98ap-33f, 0.0f,
     0x1.d91378p-100f, 0.0f, 0.0f, 0.0f, 0x1.895f04p-107f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.138c38p-47f, 0.0f, 0x1.f664fap-97f, 0x1.43b462p-18f, 0x1.2cc2f4p-75f,
     0x1.d05946p-96f, 0.0f, 0x1.023beep-93f, 0.0f, 0x1.8ff156p-39f, 0x1.6782e6p-89f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9df4p-48f, 0.0f,
     0x1.69ab8cp-50f, 0.0f, 0x1.90bc4ap-84f, 0x1.72a3p-21f, 0.0f, 0.0f,
     0x1.62a6e4p-40f, 0.0f, 0x1.3e8f5ap-82f, 0x1.f0caecp-30f, 0x1.3822fcp-40f,
     0x1.96c5ep-67f, 0x1.dafdd4p-15f, 0.0f, 0x1.dc1eaap-79f, 0x1.57915p-70f, 0.0f,
     0.0f, 0.0f, 0x1.fbc90cp-29f, 0.0f, 0.0f, 0x1.6c39c8p-32f, 0x1.a577eap-117f,
     0x1.ea4b02p-94f, 0.0f, 0.0f, 0.0f, 0x1.883786p-118f, 0x1.91889ep-12f,
     0x1.977d92p-42f, 0.0f, 0.0f, 0.0f, 0x1.c4e086p-104f, 0x1.58a012p-89f,
     0x1.e36c0ap-84f, 0x1.fa0078p-60f, 0x1.07d6ccp-51f, 0x1.decb5p-100f,
     0x1.e9dbc8p-62f, 0x1.582924p-110f, 0.0f, 0.0f, 0x1.41ee3cp-1f, 0.0f, 0.0f,
     0x1.62c442p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d230bp-77f, 0.0f, 0.0f, 0.0f,
     0x1.ee995ep-17f, 0x1.bdddd4p-97f, 0x1.dcf3b2p-12f, 0x1.bf19c6p-78f,
     0x1.9facbap-56f, 0.0f, 0x1.69a82ep-1f, 0x1.324dcep-73f, 0.0f, 0x1.71d904p-18f,
     0x1.19d8e2p-34f, 0.0f, 0x1.fe80f6p-84f, 0x1.d68794p-126f, 0.0f, 0x1.023002p-113f,
     0.0f, 0x1.cac3f8p-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ea4e96p-49f, 0x1.9ca4ccp-36f,
     0.0f, 0x1.57f25ep-26f, 0x1.1948dp-98f, 0x1.7294a4p-64f, 0x1p0f, 0.0f, 0.0f,
     0x1.484328p-51f, 0x1.e652bep-99f, 0.0f, 0x1.3b3cc6p-85f, 0.0f, 0x1.d658dcp-78f,
     0x1.750f48p-39f, 0x1.408448p-59f, 0.0f, 0x1.6df30ap-31f, 0.0f, 0x1.5b4cd4p-70f,
     0.0f, 0x1.08da52p-67f, 0x1.a8bd06p-32f, 0x1.7a1cfp-110f, 0x1.6dbc1p-1f, 0.0f,
     0.0f, 0x1.ac892cp-87f, 0.0f, 0x1.7225fp-46f, 0.0f, 0.0f, 0.0f, 0x1.5c0188p-46f,
     0x1.334184p-10f, 0.0f, 0x1.fbcbcep-76f, 0.0f, 0x1.6a9a2ep-108f, 0.0f, 0.0f, 0.0f,
     0x1.f488fep-98f, 0.0f, 0x1.b9778ep-33f, 0x1.9a95f8p-15f, 0x1.198a5cp-105f,
     0x1.6d2762p-25f, 0.0f, 0.0f, 0x1.16b49ap-86f, 0.0f, 0.0f, 0x1.e02f8cp-71f,
     0x1.575f28p-66f, 0.0f, 0x1.137782p-119f, 0.0f, 0x1.429156p-76f, 0.0f,
     0x1.8fe41ep-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cf42dp-111f, 0x1.bbf37ep-55f,
     0.0f, 0x1.6c2ddcp-98f, 0x1.ca2186p-89f, 0.0f
};
static const float external_bench_wrapper_input_table_arg1[1001]  = {
     0.0f, 0.0f, 0x1.c81946p-98f, 0x1.7ef3b2p-46f, 0.0f, 0.0f, 0x1.74c3cap-69f,
     0x1.64d6ccp-31f, 0.0f, 0.0f, 0.0f, 0x1.6f1116p-4f, 0.0f, 0x1.6b1ea4p-37f,
     0x1.c6aff4p-67f, 0x1.52e8cp-78f, 0.0f, 0x1.956146p-112f, 0.0f, 0x1.18b21p-4f,
     0x1.9dd898p-24f, 0x1.475294p-20f, 0x1.671cd6p-68f, 0.0f, 0x1.629aeep-24f,
     0x1.c37e4cp-9f, 0x1.0549eep-44f, 0.0f, 0x1.68697ap-88f, 0x1.68736ep-30f, 0.0f,
     0.0f, 0.0f, 0x1.f4806ep-4f, 0x1.82c546p-10f, 0x1.2813eap-47f, 0x1.180572p-44f,
     0x1.ac2f3p-96f, 0x1.656d36p-49f, 0.0f, 0x1.c1a54ap-113f, 0x1.09fe96p-36f, 0.0f,
     0x1.b9d6a2p-4f, 0x1.8e1a8ap-51f, 0x1.a07b22p-41f, 0x1.fb5f56p-52f, 0.0f,
     0x1.80586ep-11f, 0x1.b58c3cp-36f, 0.0f, 0x1.156176p-8f, 0.0f, 0x1.de4c4cp-96f,
     0x1.ef4d9p-35f, 0x1.d47fa4p-122f, 0x1.574e5ep-63f, 0x1.4ab87cp-66f, 0.0f, 0.0f,
     0x1.39d7a8p-9f, 0x1.f33b56p-99f, 0.0f, 0.0f, 0x1.caa1ap-106f, 0.0f,
     0x1.66ce06p-97f, 0.0f, 0.0f, 0.0f, 0x1.cbc408p-49f, 0x1.488d06p-86f,
     0x1.4432e2p-43f, 0x1.c72478p-61f, 0x1.bd9de8p-49f, 0.0f, 0x1.fb3098p-4f,
     0x1.eab366p-126f, 0x1.11791p-15f, 0.0f, 0.0f, 0x1.d0a6bep-42f, 0.0f, 0.0f,
     0x1.525752p-32f, 0x1.d02fc6p-97f, 0x1.397b82p-125f, 0.0f, 0.0f, 0x1.581e16p-19f,
     0.0f, 0x1.d82302p-45f, 0.0f, 0.0f, 0.0f, 0x1.41dd64p-57f, 0.0f, 0x1.b0a648p-114f,
     0.0f, 0x1.44397p-95f, 0.0f, 0x1.897b32p-55f, 0.0f, 0x1.fcbf46p-116f,
     0x1.dc9806p-40f, 0x1.504392p-46f, 0.0f, 0x1.8e3994p-115f, 0x1.8fb686p-108f,
     0x1.462368p-67f, 0.0f, 0x1.00459cp-38f, 0.0f, 0x1.496c8ap-69f, 0x1.a3509cp-3f,
     0x1.6db9f8p-75f, 0x1.6fd314p-18f, 0.0f, 0.0f, 0x1.3bdf04p-27f, 0.0f,
     0x1.5ebf24p-89f, 0.0f, 0.0f, 0x1.1d39ccp-126f, 0x1.8ad3b6p-36f, 0.0f,
     0x1.db3b18p-53f, 0x1.c2fa14p-45f, 0x1.f1008cp-66f, 0.0f, 0x1.8e033p-44f,
     0x1.0b5514p-93f, 0.0f, 0x1.5e81d2p-2f, 0.0f, 0x1.6bf16ep-24f, 0.0f,
     0x1.0fae36p-17f, 0.0f, 0x1.5ac784p-21f, 0x1.2a75cp-63f, 0x1.4a1bb6p-91f,
     0x1.3c9c3ep-52f, 0.0f, 0x1.22b32ap-49f, 0.0f, 0.0f, 0.0f, 0x1.b902b6p-14f,
     0x1.567fb8p-14f, 0.0f, 0x1.241e6ap-110f, 0x1.4a2df4p-107f, 0.0f, 0x1.c01e2cp-10f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.709bb8p-50f, 0.0f, 0.0f, 0x1.fd95dap-66f,
     0x1.0fe9dep-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.deb528p-94f, 0x1.56ff4p-1f, 0.0f, 0.0f, 0.0f, 0x1.3cd058p-50f,
     0x1.c0b15ap-11f, 0.0f, 0.0f, 0.0f, 0x1.fa2874p-39f, 0.0f, 0x1.5b4362p-124f,
     0x1.3a08cap-117f, 0.0f, 0x1.2bf61p-34f, 0.0f, 0x1.5f3be6p-109f, 0x1.7c6b68p-1f,
     0x1.7fce22p-42f, 0x1.e28c6cp-9f, 0.0f, 0x1.09a29cp-67f, 0x1.57314ep-21f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.1990e4p-62f, 0.0f, 0x1.39f284p-123f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.4025ecp-51f, 0x1.eaf4a8p-125f, 0.0f, 0.0f, 0x1.09c8ecp-106f, 0.0f,
     0x1.028eacp-28f, 0.0f, 0x1.7e72fap-42f, 0x1.3d49ecp-97f, 0.0f, 0.0f, 0.0f,
     0x1.d62ea8p-32f, 0.0f, 0x1.166ff8p-104f, 0.0f, 0x1.9e4756p-62f, 0.0f, 0.0f,
     0x1.2c9e66p-105f, 0x1.793818p-24f, 0.0f, 0x1.8f03b8p-30f, 0.0f, 0.0f,
     0x1.2dd6fep-10f, 0.0f, 0x1.cf8122p-26f, 0.0f, 0x1.85c17ep-23f, 0x1.035f4p-87f,
     0x1.b4ce96p-82f, 0.0f, 0.0f, 0.0f, 0x1.60144ap-73f, 0.0f, 0.0f, 0.0f,
     0x1.ec428cp-16f, 0.0f, 0.0f, 0.0f, 0x1.a9d67ap-113f, 0.0f, 0x1.b6e25ep-68f,
     0x1.ba411ap-47f, 0.0f, 0x1.9eda72p-37f, 0x1.f5fadap-125f, 0x1.7f8e0ap-17f,
     0x1.fe5ed6p-87f, 0.0f, 0x1.bcdfcep-22f, 0.0f, 0x1.2b4e38p-56f, 0.0f,
     0x1.634e2ap-107f, 0x1.2be4bep-12f, 0.0f, 0.0f, 0.0f, 0x1.3e5308p-123f,
     0x1.b04722p-79f, 0x1.d1d53p-56f, 0x1.3bacfep-25f, 0.0f, 0x1.129262p-33f,
     0x1.75447p-80f, 0.0f, 0x1.a426aap-1f, 0.0f, 0x1.1359acp-83f, 0x1.86bcb2p-96f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.1256d6p-94f, 0.0f, 0.0f, 0.0f, 0x1.c9c04ap-63f,
     0x1.a6229p-83f, 0x1.7f3124p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.28e82ep-45f, 0.0f, 0.0f, 0x1.79412ep-48f, 0x1.6d7258p-85f, 0.0f,
     0x1.6b9354p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4986f6p-88f,
     0x1.6ac22ap-77f, 0.0f, 0x1.bdee18p-91f, 0.0f, 0.0f, 0.0f, 0x1.98c09ep-69f,
     0x1.0e2f5ep-99f, 0.0f, 0.0f, 0x1.d2f8e2p-45f, 0x1.187ffep-48f, 0.0f,
     0x1.195ba2p-120f, 0x1.be17eap-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3a09a2p-105f, 0x1.5f0a54p-49f, 0x1.faa572p-107f, 0x1.d011e6p-70f, 0.0f,
     0x1.265de8p-99f, 0x1.bc9fecp-39f, 0x1.b3033p-14f, 0.0f, 0.0f, 0x1.6e6978p-80f,
     0x1p0f, 0x1.ff33cap-63f, 0.0f, 0x1.c1e24ap-102f, 0x1.636944p-50f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d30a4ap-83f, 0.0f, 0x1.da4884p-85f, 0.0f, 0x1.e9731ep-59f,
     0x1.fcca9p-85f, 0x1.67cb84p-77f, 0.0f, 0x1.6b60a6p-95f, 0.0f, 0x1.f55b4cp-121f,
     0x1.d8f2b4p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6363fep-50f, 0.0f, 0.0f,
     0x1.d3cee6p-57f, 0x1.a58d22p-37f, 0.0f, 0.0f, 0.0f, 0x1.ab2e0cp-68f,
     0x1.435346p-109f, 0x1.08057p-51f, 0x1.a188f4p-121f, 0x1.8e0de2p-17f, 0.0f,
     0x1.784e22p-59f, 0x1.1c507cp-116f, 0.0f, 0.0f, 0x1.10d8p-37f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f8954p-106f, 0.0f, 0x1.b5dff6p-48f, 0.0f, 0.0f, 0x1.92829p-65f,
     0x1.6fc868p-37f, 0x1.ce2ea8p-96f, 0.0f, 0x1.d10e08p-118f, 0.0f, 0x1.8724eep-49f,
     0.0f, 0x1.b54e62p-35f, 0x1.c93ecep-3f, 0x1.44ce86p-45f, 0.0f, 0x1.311e0cp-39f,
     0x1.44a4aap-66f, 0x1.48d5d8p-16f, 0.0f, 0x1.f969b4p-4f, 0x1.22118p-7f, 0.0f,
     0x1.00cc82p-94f, 0.0f, 0x1.d67ce8p-34f, 0x1.b1d21cp-49f, 0x1.60b8eep-60f,
     0x1.61bafap-103f, 0x1.febf42p-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7c3b38p-125f, 0x1.6bbe08p-13f, 0x1.e67902p-23f, 0x1.8ceb94p-27f, 0.0f, 0.0f,
     0x1.fcbafap-69f, 0x1.b5fa36p-93f, 0.0f, 0x1.3c8ba6p-126f, 0.0f, 0.0f,
     0x1.8d8272p-33f, 0x1.4bd8d8p-121f, 0x1.2f1d9ap-18f, 0x1.6419dp-8f,
     0x1.75a782p-28f, 0x1.66226p-89f, 0.0f, 0x1.3091fap-74f, 0x1.434feap-7f, 0.0f,
     0x1.1a54a6p-103f, 0x1.a44246p-114f, 0x1.3166dep-126f, 0x1.fd5b42p-123f, 0.0f,
     0x1.e70488p-13f, 0.0f, 0.0f, 0x1.0188fp-94f, 0x1.14d1e2p-101f, 0x1.39febep-62f,
     0x1.4a7436p-61f, 0.0f, 0.0f, 0x1.0a36f8p-31f, 0.0f, 0x1.7e0062p-37f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8ba41cp-25f,
     0x1.3d1ffap-37f, 0.0f, 0x1.60fb5cp-71f, 0.0f, 0.0f, 0x1.43822cp-45f,
     0x1.32d3a4p-65f, 0x1.659278p-2f, 0x1.8b4e02p-83f, 0x1.1309a4p-65f,
     0x1.0c02b2p-111f, 0x1.c2fb54p-124f, 0.0f, 0x1.4f937p-19f, 0.0f, 0x1.c285dp-116f,
     0.0f, 0.0f, 0x1.33733p-25f, 0.0f, 0x1.6fc994p-45f, 0x1.fb5fbcp-34f, 0.0f, 0.0f,
     0x1.167912p-84f, 0.0f, 0.0f, 0.0f, 0x1.1e8636p-67f, 0x1.a84d92p-63f, 0.0f, 0.0f,
     0.0f, 0x1.d59c12p-79f, 0.0f, 0x1.868ef4p-3f, 0x1.7f7162p-12f, 0x1.c732ap-121f,
     0.0f, 0.0f, 0x1.d9967ap-80f, 0.0f, 0x1.cfcdf8p-48f, 0x1.3f81fap-24f,
     0x1.008d5cp-24f, 0x1.2a573p-48f, 0x1.a0696ap-47f, 0x1.15176ep-38f,
     0x1.ca7ef4p-49f, 0x1.2d23eap-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.82a902p-69f,
     0.0f, 0x1.7d0aaap-108f, 0x1.c0e956p-47f, 0.0f, 0.0f, 0x1.c4c046p-117f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.4c5ac6p-113f, 0.0f, 0x1.4b8b92p-22f, 0x1.437c78p-28f,
     0x1.a5f15p-12f, 0.0f, 0.0f, 0x1.13f506p-89f, 0x1.f532bcp-58f, 0.0f,
     0x1.a0ae82p-21f, 0x1.32d3bap-106f, 0x1.394d3p-104f, 0x1.b1d87ep-30f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.33073ap-6f, 0x1.5ba396p-118f, 0x1.ce8c16p-99f, 0x1.93d056p-15f,
     0x1.9751fap-42f, 0.0f, 0x1.933f36p-77f, 0x1.65308p-29f, 0.0f, 0x1.5d62dep-78f,
     0x1.644ae2p-59f, 0.0f, 0x1.b1baeap-61f, 0x1.7571e6p-60f, 0.0f, 0x1.c90ad4p-60f,
     0.0f, 0x1.d639bcp-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.685366p-126f, 0x1.0382e6p-93f,
     0.0f, 0.0f, 0x1.99590cp-108f, 0.0f, 0.0f, 0.0f, 0x1.b84d72p-122f, 0.0f, 0.0f,
     0x1.6e3542p-65f, 0x1.d4075cp-9f, 0.0f, 0x1.a0dbe4p-87f, 0.0f, 0x1.3e710ap-94f,
     0x1.ff431ep-27f, 0x1.a67caap-115f, 0.0f, 0x1.8e94a8p-52f, 0x1.01bbaap-36f,
     0x1.d3f5d4p-29f, 0x1.835f06p-45f, 0.0f, 0x1.eee372p-109f, 0.0f, 0.0f,
     0x1.024b24p-34f, 0x1.76b79cp-117f, 0x1.10229ep-13f, 0x1.a7248cp-71f,
     0x1.a35392p-80f, 0.0f, 0x1.fb4f32p-44f, 0.0f, 0x1.630802p-41f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.60a844p-39f, 0.0f, 0x1.80e918p-2f, 0.0f, 0x1.dd31fcp-123f,
     0x1.db7196p-57f, 0.0f, 0.0f, 0x1.14fb84p-120f, 0x1.c51f28p-77f, 0.0f, 0.0f,
     0x1.9b5006p-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1aabap-46f, 0.0f, 0x1.c9e3b6p-88f,
     0.0f, 0.0f, 0x1.0f793ep-33f, 0x1.26a238p-64f, 0x1.12f20ep-17f, 0x1.d3228ap-37f,
     0.0f, 0x1.8dfbap-39f, 0.0f, 0x1.254774p-76f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2c50f4p-40f, 0x1.c522f6p-91f, 0.0f, 0x1.a8590cp-93f, 0x1.b705p-36f, 0.0f,
     0x1.76c4bp-96f, 0.0f, 0x1.bd82a6p-66f, 0.0f, 0x1.b225ccp-68f, 0.0f, 0.0f, 0.0f,
     0x1.9b4314p-8f, 0x1.68fce6p-75f, 0.0f, 0.0f, 0.0f, 0x1.9eac06p-67f,
     0x1.b2fa9p-28f, 0x1.40641ap-25f, 0x1.274c1p-109f, 0x1.c923c8p-118f, 0.0f, 0.0f,
     0x1.fbee5p-78f, 0x1.5f47fep-98f, 0.0f, 0x1.84ec58p-75f, 0x1.e9b6ep-108f,
     0x1.545fdep-83f, 0.0f, 0x1.699ce2p-89f, 0x1.21a5ep-8f, 0.0f, 0x1.2b062cp-91f,
     0.0f, 0x1.4edfc2p-120f, 0x1.8f1f8cp-95f, 0x1.a3dc84p-68f, 0.0f, 0.0f,
     0x1.2eb80cp-41f, 0x1.cecd5cp-112f, 0x1.966ce2p-48f, 0x1.fdff9p-121f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.320e44p-121f, 0x1.8de03ep-120f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e42ab2p-103f, 0x1.945b5p-126f, 0.0f, 0.0f, 0x1.edc95p-94f, 0x1.e9f17cp-93f,
     0.0f, 0x1.f72afp-24f, 0.0f, 0x1.9e4276p-92f, 0x1.889f2cp-73f, 0x1.e4f18ap-91f,
     0x1.399ab4p-29f, 0x1.ed02dep-120f, 0.0f, 0x1.5061aep-9f, 0.0f, 0x1.9fbac8p-111f,
     0.0f, 0x1.afa498p-54f, 0x1.e3d216p-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.750efep-82f,
     0x1.1fc58ep-67f, 0x1.57fed4p-98f, 0.0f, 0.0f, 0.0f, 0x1.631a02p-13f,
     0x1.d13cap-75f, 0.0f, 0.0f, 0x1.2bb4d4p-105f, 0x1.7406eep-55f, 0x1.070362p-38f,
     0.0f, 0x1.44f722p-41f, 0x1.fb0116p-103f, 0x1.104abp-6f, 0x1.34b74p-110f, 0.0f,
     0.0f, 0.0f, 0x1.fe2882p-70f, 0.0f, 0.0f, 0x1.c1456ap-51f, 0x1.2a59a8p-4f,
     0x1.986db4p-25f, 0x1.6d993ap-112f, 0x1.d98d9ap-61f, 0.0f, 0x1.ee750ep-87f,
     0x1.31bc1cp-115f, 0x1.d781a8p-91f, 0x1.c64334p-117f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c61f0cp-52f, 0.0f, 0x1.cced54p-119f,
     0x1.d0981ep-121f, 0.0f, 0x1.6dbf9ep-73f, 0x1.f5fcf4p-113f, 0.0f, 0x1.afc4ep-30f,
     0x1.d4fb3ap-13f, 0x1.2330b2p-18f, 0x1.c78a62p-46f, 0x1.a350dap-111f,
     0x1.20cdbep-111f, 0.0f, 0.0f, 0x1.21751ap-122f, 0.0f, 0.0f, 0x1.b32a7ap-72f,
     0x1.db10dep-82f, 0x1.04e58p-120f, 0x1.cd1066p-60f, 0x1.52e48ep-58f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.7f8bap-89f, 0.0f, 0.0f, 0.0f, 0x1.b0ba0ap-70f, 0x1.bdee46p-68f,
     0x1.6208cp-121f, 0x1.44a3bcp-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2bfe7p-109f,
     0x1.4f5acep-115f, 0.0f, 0x1.d120c8p-98f, 0.0f, 0x1.a5f1e2p-8f, 0x1.eab8a2p-16f,
     0.0f, 0.0f, 0.0f, 0x1.6e109ap-80f, 0.0f, 0x1.d69c4ep-57f, 0.0f, 0x1.86500ap-109f,
     0x1.bca192p-50f, 0.0f, 0x1.061b3ep-36f, 0x1.9486aap-92f, 0x1.c0cdb8p-69f, 0.0f,
     0x1.40b25cp-85f, 0.0f, 0x1.71ff4p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.11f946p-118f,
     0.0f, 0.0f, 0.0f, 0x1.2c9dap-117f, 0x1.443f62p-34f, 0x1.312122p-76f, 0.0f,
     0x1.6c337ep-89f, 0x1.3c993cp-113f, 0x1.dafa8ap-126f, 0.0f, 0.0f, 0x1.ab939ep-4f,
     0x1.a72a5ep-18f, 0.0f, 0.0f, 0x1.86ccacp-55f, 0x1.c8deb2p-122f, 0x1.351d4ap-5f,
     0x1.0aff34p-36f, 0.0f, 0.0f, 0x1.d20b7ep-78f, 0.0f, 0x1.a4b41ep-53f,
     0x1.33206cp-112f, 0.0f, 0.0f, 0.0f, 0x1.4bdb7ap-110f, 0x1.a622e8p-63f, 0.0f,
     0x1.2c3d5cp-31f, 0.0f, 0x1.a3d96cp-73f, 0x1.b56e7cp-47f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7240bep-95f, 0.0f, 0x1.18023ap-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1d68c2p-33f,
     0x1.330cfp-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6cffdap-3f,
     0.0f, 0.0f, 0.0f, 0x1.6cecd2p-42f, 0.0f, 0.0f, 0x1.d112a2p-8f, 0x1.4a0702p-31f,
     0x1.6ec948p-93f, 0.0f, 0.0f, 0x1.db6932p-79f, 0x1.ea1486p-34f, 0x1.2f2ac8p-17f,
     0.0f, 0x1.8850aep-54f, 0x1.9569dep-93f, 0x1.76a196p-99f, 0.0f, 0x1.99a32ep-12f,
     0x1.08b75ep-93f, 0.0f, 0.0f, 0x1.a072c4p-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6a6da8p-67f, 0.0f, 0x1.85edb6p-39f, 0x1.d088c4p-44f, 0x1.a5f24p-15f, 0.0f,
     0.0f, 0x1.f08888p-16f, 0.0f, 0.0f, 0x1.9ae59ep-72f, 0.0f, 0x1.58319ep-114f, 0.0f,
     0x1.d1a6p-71f, 0x1.51ddb4p-33f, 0.0f, 0.0f, 0.0f, 0x1.0b8a22p-22f, 0.0f,
     0x1.8df89ap-34f, 0.0f, 0x1.c17718p-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c6056ep-22f,
     0.0f, 0x1.d64b34p-90f, 0.0f, 0.0f, 0x1.c8ee76p-81f, 0x1.6d6d2ap-88f, 0.0f,
     0x1.49d596p-31f, 0.0f, 0x1.78d4b2p-29f, 0x1.7bc652p-89f, 0.0f, 0x1.57dedep-37f,
     0x1.7313b8p-58f, 0.0f, 0.0f, 0x1.b4b514p-87f, 0.0f, 0x1.ac9a12p-107f, 0.0f, 0.0f,
     0.0f, 0x1.1ca5ccp-86f
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
    
    global_bench_acc = 0.0f;
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
        float bench_acc;
        int32_t i;
        __m128 carg;
        __m128 carg1;
        __m128 carg2;
        float tmp0;
        int32_t tmp1;

        i = INT32_C(0);
        bench_acc = 0.0f;

        for (;(i < INT32_C(1001));){
            float tmp0;
            float tmp1;
            float tmp2;
            __m128 carg;
            __m128 carg1;
            __m128 carg2;
            float tmp3;
            int32_t tmp4;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = external_bench_wrapper_input_table_arg1[i];
            tmp2 = Sleef_hypotf1_u35purecfma(tmp0, tmp1);
            external_bench_wrapper_output_table[i] = tmp2;
            carg = _mm_set_ss(bench_acc);
            carg1 = _mm_set_ss(tmp2);
            carg2 = _mm_add_ss(carg, carg1);
            tmp3 = _mm_cvtss_f32(carg2);
            bench_acc = tmp3;
            tmp4 = i + INT32_C(1);
            i = tmp4;
        }
        carg = _mm_set_ss(global_bench_acc);
        carg1 = _mm_set_ss(bench_acc);
        carg2 = _mm_add_ss(carg, carg1);
        tmp0 = _mm_cvtss_f32(carg2);
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
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_hypotf1_u35purecfma %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_hypotf1_u35purecfma bench acc %a\n", global_bench_acc);
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
