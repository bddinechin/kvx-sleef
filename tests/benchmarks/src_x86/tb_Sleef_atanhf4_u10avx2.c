/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_atanhf4_u10avx2128.c --function Sleef_atanhf4_u10avx2128 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 4 --function-input-vector-size 4 --bench \
 *     --no-embedded-bin --target x86_avx2128
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
     0.0f, 0x1.4f88fep-113f, 0x1.0c0cfap-96f, 0.0f, 0x1.a3d722p-44f, 0x1.e29a06p-36f,
     0x1.7f71bcp-68f, 0x1.e37adcp-13f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.71b57cp-116f, 0.0f, 0x1.056e5p-118f, 0.0f,
     0x1.c32baap-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.131ebp-38f, 0.0f, 0x1.d2471p-45f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.728694p-47f, 0x1.39a3e8p-105f, 0x1.cacb1ap-10f, 0.0f,
     0.0f, 0.0f, 0x1.b5d72p-86f, 0x1.319636p-50f, 0x1.f0b6a8p-49f, 0x1.9f5492p-38f,
     0.0f, 0.0f, 0.0f, 0x1.018ef4p-20f, 0x1.788dbep-12f, 0x1.bb7586p-63f,
     0x1.5674ecp-99f, 0x1.09c044p-122f, 0.0f, 0.0f, 0x1.3d7ce4p-86f, 0x1.8afe92p-93f,
     0x1.ababccp-93f, 0.0f, 0.0f, 0.0f, 0x1.6a6d5p-36f, 0.0f, 0.0f, 0.0f,
     0x1.60761p-47f, 0.0f, 0x1.9964ccp-20f, 0x1.671b48p-51f, 0x1.14be7ep-24f, 0.0f,
     0x1.da269ap-98f, 0.0f, 0x1.3c081cp-109f, 0x1.89633cp-99f, 0x1.446388p-91f,
     0x1.3b2d82p-29f, 0.0f, 0x1.f694b6p-14f, 0x1.317356p-77f, 0.0f, 0.0f,
     0x1.cd3782p-63f, 0.0f, 0x1.2776f6p-112f, 0.0f, 0x1.4b86dap-11f, 0.0f,
     0x1.78c392p-103f, 0x1.1c5844p-89f, 0x1.b6316p-1f, 0.0f, 0x1.8cf73ap-44f, 0.0f,
     0x1.76e42ap-30f, 0x1.8e7654p-96f, 0.0f, 0.0f, 0.0f, 0x1.02c82cp-104f, 0.0f,
     0x1.e65724p-1f, 0x1.dec0fap-100f, 0.0f, 0x1p0f, 0.0f, 0x1.712164p-73f, 0.0f,
     0.0f, 0x1.038792p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8006e8p-14f, 0x1.497a04p-106f,
     0.0f, 0x1.2f940ep-108f, 0.0f, 0x1.27597cp-34f, 0.0f, 0x1.e19b4p-67f, 0.0f, 0.0f,
     0x1.b9d714p-38f, 0x1.cdb5c4p-32f, 0.0f, 0.0f, 0.0f, 0x1.f0956ap-124f,
     0x1.abc68ep-72f, 0x1.437a48p-30f, 0x1.ea3aap-37f, 0x1.fb723p-32f, 0.0f, 0.0f,
     0x1.991662p-56f, 0x1.6af012p-67f, 0.0f, 0x1.7f9bf2p-47f, 0.0f, 0x1.1696ep-2f,
     0.0f, 0x1.dac9a4p-106f, 0.0f, 0.0f, 0.0f, 0x1.b9c698p-42f, 0.0f, 0.0f,
     0x1.829b08p-41f, 0.0f, 0x1.4580dcp-78f, 0.0f, 0.0f, 0x1.6d87p-40f,
     0x1.25291ep-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.52a468p-123f, 0.0f,
     0x1.f40cap-112f, 0.0f, 0x1.85f502p-105f, 0.0f, 0.0f, 0.0f, 0x1.970e52p-92f,
     0x1.19b258p-44f, 0x1.71f9b6p-86f, 0x1.076a3cp-53f, 0x1.ae23cp-92f,
     0x1.0ef3dcp-51f, 0x1.185eb6p-64f, 0.0f, 0x1.25039ap-55f, 0.0f, 0.0f, 0.0f,
     0x1.2c3078p-52f, 0x1.ece272p-33f, 0.0f, 0x1.f38e96p-32f, 0.0f, 0x1.76781ap-64f,
     0.0f, 0.0f, 0x1.47a11p-18f, 0.0f, 0x1p0f, 0.0f, 0x1.ca35b8p-30f, 0.0f,
     0x1.a8ee2cp-25f, 0x1.983a76p-109f, 0.0f, 0x1.a8e49cp-39f, 0x1.d4686ep-25f, 0.0f,
     0x1.afe206p-81f, 0x1.a7552ep-19f, 0.0f, 0.0f, 0.0f, 0x1.f51c42p-13f,
     0x1.5a90bep-57f, 0x1.5a692ap-21f, 0x1.07b1b6p-91f, 0x1.6acce4p-55f, 0.0f, 0.0f,
     0x1.5fceb6p-27f, 0.0f, 0x1.480afp-109f, 0.0f, 0.0f, 0x1.d0ee0ap-28f,
     0x1.c9e518p-113f, 0.0f, 0x1.8097b4p-107f, 0.0f, 0x1.f9a0e6p-91f, 0x1.6aa2acp-65f,
     0.0f, 0x1.1e3d52p-112f, 0.0f, 0.0f, 0x1.b367b2p-32f, 0x1.fcbe6ap-18f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.77475ep-78f, 0x1.3d5fcep-20f, 0x1.9e94bep-95f,
     0x1.e724bep-102f, 0x1.b6aadep-52f, 0x1.b7795cp-94f, 0x1.34711ap-32f, 0.0f,
     0x1.e7aaecp-115f, 0.0f, 0x1.88f02ap-88f, 0x1.f6ba28p-106f, 0.0f, 0.0f, 0.0f,
     0x1.abd178p-120f, 0x1.695aeap-103f, 0.0f, 0.0f, 0.0f, 0x1.21e3ecp-22f, 0.0f,
     0x1.b9eb1ap-70f, 0.0f, 0.0f, 0x1.793212p-62f, 0x1.3dcf04p-121f, 0.0f,
     0x1.0b490ep-126f, 0x1.c44dc4p-83f, 0.0f, 0.0f, 0.0f, 0x1.0135dap-55f,
     0x1.9b6ac6p-50f, 0x1.0d8fa2p-1f, 0x1.468eb2p-13f, 0.0f, 0.0f, 0x1.677f38p-114f,
     0.0f, 0.0f, 0x1.787846p-76f, 0.0f, 0.0f, 0x1.60b14ap-34f, 0x1.ef34ccp-55f,
     0x1.ca6d86p-69f, 0.0f, 0x1.583a6cp-75f, 0x1.df516cp-46f, 0x1.ed5592p-96f, 0.0f,
     0x1.f4b348p-36f, 0x1.ee5348p-109f, 0.0f, 0x1.58d87p-35f, 0.0f, 0x1.2054f6p-54f,
     0x1.2e9b2cp-91f, 0.0f, 0x1.63c3bcp-43f, 0x1.66688cp-85f, 0x1.638c08p-73f, 0.0f,
     0.0f, 0.0f, 0x1.ce3b1p-118f, 0.0f, 0x1.9141eap-110f, 0x1.686222p-38f, 0.0f, 0.0f,
     0x1.07639ep-70f, 0.0f, 0x1.fba81p-63f, 0.0f, 0.0f, 0x1.866c1cp-49f,
     0x1.282054p-24f, 0.0f, 0.0f, 0x1.f667ep-6f, 0.0f, 0x1.867766p-68f,
     0x1.740784p-88f, 0.0f, 0.0f, 0x1.405d74p-54f, 0x1.f40508p-100f, 0.0f,
     0x1.6456dcp-26f, 0.0f, 0.0f, 0x1.a69d44p-20f, 0x1.248b0ap-3f, 0x1.f47ff6p-79f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.17a3b4p-104f, 0.0f,
     0x1.7d2404p-18f, 0x1.0d242ap-90f, 0.0f, 0x1.9fc9e8p-119f, 0x1.4a129ep-48f,
     0x1.797f76p-2f, 0.0f, 0x1.fcc398p-115f, 0.0f, 0x1.6895f2p-56f, 0.0f, 0.0f,
     0x1.4c76acp-50f, 0.0f, 0.0f, 0x1.f1097ap-33f, 0.0f, 0.0f, 0x1.d2529p-75f,
     0x1.c1a684p-30f, 0.0f, 0.0f, 0x1.53c7fp-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1ea3b8p-73f, 0x1.861f3p-117f, 0x1.1139cap-81f, 0x1.72bd8p-55f,
     0x1.78a4fap-87f, 0.0f, 0x1.d78edcp-2f, 0.0f, 0.0f, 0x1.d8fec6p-81f,
     0x1.e36a64p-20f, 0.0f, 0x1.e6af36p-91f, 0x1.855e48p-22f, 0.0f, 0x1.dab9f2p-48f,
     0.0f, 0x1.55e5b8p-99f, 0x1.270f0ap-73f, 0.0f, 0x1.59c19p-96f, 0x1.aa726ap-60f,
     0.0f, 0x1.9de326p-79f, 0.0f, 0x1.cbaec6p-42f, 0x1.90cf74p-29f, 0.0f, 0.0f,
     0x1.041be6p-87f, 0.0f, 0.0f, 0.0f, 0x1.c1bcb6p-117f, 0x1.cdfc3p-66f, 0.0f, 0.0f,
     0.0f, 0x1.e8b8ep-117f, 0x1.151e9ep-90f, 0.0f, 0x1.43d41cp-82f, 0.0f, 0.0f,
     0x1.619656p-46f, 0.0f, 0x1.900332p-25f, 0x1.dc5c38p-39f, 0x1.bdbeb4p-121f,
     0x1.424d5cp-3f, 0x1.8c219ep-68f, 0.0f, 0.0f, 0x1.45b89ap-61f, 0x1.820f4p-100f,
     0x1.22141ap-100f, 0.0f, 0x1.ca945cp-44f, 0.0f, 0x1.49346ep-31f, 0x1.43586ep-58f,
     0x1.fdcd4ap-88f, 0.0f, 0x1.7cfb82p-54f, 0.0f, 0.0f, 0x1.1784cep-40f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d77b02p-108f, 0.0f, 0x1.ea39dap-52f, 0x1.1dcb98p-60f,
     0x1.035786p-62f, 0.0f, 0x1.c43facp-116f, 0x1.a66972p-25f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4ea1c6p-9f, 0x1.6c5e5ap-43f, 0.0f, 0.0f, 0x1p0f, 0x1.7eee4ap-107f, 0.0f,
     0x1.78364ap-36f, 0.0f, 0x1.a1926cp-99f, 0x1.0ad612p-49f, 0.0f, 0x1.80245ep-9f,
     0x1.16a0cep-71f, 0x1.4e6fe2p-65f, 0x1.ddac9cp-56f, 0.0f, 0x1.6ae4b4p-110f, 0.0f,
     0.0f, 0.0f, 0x1.8bf144p-59f, 0x1.cd87acp-47f, 0x1.9dba6cp-66f, 0.0f, 0.0f,
     0x1.d27ee8p-54f, 0x1.df7438p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0dd1d2p-117f, 0x1.d0aceep-12f, 0x1.26e75p-42f, 0x1.308596p-31f, 0.0f, 0.0f,
     0x1.db2b76p-97f, 0.0f, 0.0f, 0x1.3cc408p-62f, 0x1.0cc954p-85f, 0x1.010ee6p-93f,
     0.0f, 0x1.808e2ap-53f, 0x1.2b4c34p-61f, 0x1.c3415cp-52f, 0.0f, 0x1.e90d4p-122f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.16ce5ep-74f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.178b16p-120f, 0.0f, 0.0f, 0x1.b93a5ep-32f, 0x1.5671aep-40f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.61bc2p-56f, 0.0f, 0x1.ec2698p-97f, 0x1.248a5cp-75f,
     0x1.1eecd8p-53f, 0x1.554bf4p-104f, 0.0f, 0.0f, 0.0f, 0x1.3bac72p-64f,
     0x1.fad382p-20f, 0.0f, 0x1.557878p-111f, 0.0f, 0x1.b4b61cp-9f, 0.0f,
     0x1.779bap-6f, 0.0f, 0.0f, 0x1.5fd58cp-14f, 0.0f, 0.0f, 0.0f, 0x1.6a694ap-67f,
     0x1.0c7c64p-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.506ceap-93f, 0.0f, 0x1.2d16ecp-90f,
     0.0f, 0.0f, 0x1.da9f08p-47f, 0.0f, 0x1.b11db2p-32f, 0x1.64be36p-9f,
     0x1.bfabeep-63f, 0x1.98d70ep-12f, 0.0f, 0x1.942c78p-81f, 0.0f, 0.0f,
     0x1.cbb89ap-21f, 0x1.09d778p-4f, 0x1.c9505ep-40f, 0.0f, 0x1.20d742p-4f, 0.0f,
     0.0f, 0.0f, 0x1.dff6p-68f, 0.0f, 0.0f, 0x1.7248dep-53f, 0x1.deeda4p-77f,
     0x1.01e28ep-90f, 0.0f, 0.0f, 0.0f, 0x1.c287dp-62f, 0x1.12b8d2p-36f,
     0x1.163cd6p-87f, 0x1.43d972p-76f, 0.0f, 0x1.2aa99cp-84f, 0x1.0a8b36p-87f,
     0x1.09ccf6p-32f, 0x1.69707ep-122f, 0.0f, 0x1.ebcb2cp-22f, 0x1.bfd446p-115f,
     0x1.b2d7dap-4f, 0.0f, 0.0f, 0x1.4051fep-83f, 0.0f, 0x1.3ad99p-10f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bc4af6p-59f, 0.0f, 0x1.a949f8p-25f,
     0x1.a75ec8p-35f, 0x1.4dd4eap-26f, 0.0f, 0x1.85766cp-116f, 0.0f, 0x1.a34892p-90f,
     0.0f, 0.0f, 0.0f, 0x1.5a9818p-22f, 0x1.4c054cp-32f, 0.0f, 0x1.950956p-99f,
     0x1.678026p-34f, 0x1.4c1c22p-119f, 0x1.4594d8p-35f, 0x1.41cbcep-70f,
     0x1.33a5d8p-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.af74c8p-13f, 0.0f,
     0x1.fe5744p-118f, 0x1.bde12ap-53f, 0.0f, 0x1.c5957p-114f, 0.0f, 0x1.24af38p-55f,
     0x1.9c4624p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5528dcp-36f, 0x1.7a0ba4p-122f, 0.0f,
     0x1.0e5084p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.05aa72p-98f, 0x1.37ea12p-118f,
     0x1.111ccp-90f, 0x1.20a6bep-117f, 0.0f, 0.0f, 0.0f, 0x1.86ac28p-64f, 0.0f,
     0x1.8fad9p-11f, 0.0f, 0.0f, 0x1.185b36p-8f, 0x1.d2547ep-17f, 0.0f, 0.0f,
     0x1.833808p-114f, 0.0f, 0x1.a4c286p-110f, 0x1.4294c8p-51f, 0x1.e763d6p-63f,
     0x1.29e38p-67f, 0x1.1231ccp-86f, 0x1.826902p-70f, 0x1.fadd9cp-5f,
     0x1.4f0392p-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c5a878p-88f, 0x1.600ddp-120f, 0.0f,
     0x1p0f, 0.0f, 0x1.b4920ap-88f, 0x1.46c7p-63f, 0x1.798d9ep-6f, 0.0f,
     0x1.b6576p-97f, 0x1.99c858p-99f, 0.0f, 0x1.897d7ap-23f, 0.0f, 0x1.cb7cd6p-26f,
     0x1.4d0f2ep-2f, 0x1.0124eep-59f, 0x1.0fdeeap-38f, 0x1.00c712p-29f,
     0x1.29d89p-18f, 0.0f, 0x1.74a8p-118f, 0.0f, 0x1.b2b66ep-43f, 0x1.6232b2p-90f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.24f8fp-35f, 0.0f, 0x1.8242fep-112f, 0.0f,
     0x1.98fe8ep-2f, 0x1.82ce0ap-66f, 0.0f, 0.0f, 0.0f, 0x1.bf281p-1f, 0.0f,
     0x1.9c106cp-12f, 0.0f, 0x1.319d28p-94f, 0.0f, 0.0f, 0x1.85a00ep-75f, 0.0f,
     0x1.ba1336p-3f, 0x1.fa59d2p-99f, 0x1.26f022p-122f, 0x1.490a7cp-114f,
     0x1.6b2514p-40f, 0.0f, 0x1.2ddb1ep-37f, 0.0f, 0x1.e3b5c2p-109f, 0.0f, 0.0f,
     0x1.b6c6fcp-126f, 0x1.9fc232p-19f, 0x1.2ad2c2p-94f, 0.0f, 0x1.1495b6p-53f,
     0x1.777008p-99f, 0.0f, 0.0f, 0x1.ef0714p-71f, 0x1.0ca924p-50f, 0.0f,
     0x1.0f5588p-76f, 0x1.64939ep-69f, 0x1.02bfap-52f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.61a1ep-18f, 0x1.28c2ep-46f, 0.0f, 0.0f, 0x1.e18d54p-23f, 0x1.a63ecp-58f,
     0x1.58f15ap-100f, 0x1.301efep-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.05c3cap-8f,
     0x1.3696c4p-102f, 0x1.43f6f8p-8f, 0x1.684774p-116f, 0x1.d35ab8p-51f, 0.0f,
     0x1.815cp-71f, 0x1.85fe02p-87f, 0x1.2079ccp-97f, 0.0f, 0.0f, 0x1.e5e9eep-123f,
     0x1.83d158p-28f, 0.0f, 0x1.cbefb4p-75f, 0x1.625178p-113f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c07e8cp-98f, 0.0f, 0x1.954018p-119f, 0x1.a55a0ap-114f,
     0.0f, 0.0f, 0.0f, 0x1.06567p-107f, 0x1.d71bd6p-49f, 0x1.ec3668p-16f,
     0x1.729cd4p-77f, 0x1.b08f62p-52f, 0x1.0e82c6p-71f, 0.0f, 0x1.928314p-71f,
     0x1.bfc05cp-95f, 0x1.4ca246p-34f, 0x1.b142b4p-101f, 0.0f, 0x1.c291f2p-53f,
     0x1.a4264p-102f, 0.0f, 0.0f, 0x1.2433b4p-37f, 0x1.8038ap-24f, 0x1.437eccp-13f,
     0x1.d0339ep-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8df97ep-91f,
     0x1.cb4882p-74f, 0x1.1bc08p-124f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.cde264p-70f,
     0x1.6349a8p-121f, 0x1.52824p-61f, 0x1.2b5216p-81f, 0.0f, 0x1.856e42p-7f,
     0x1.bd99e8p-89f, 0.0f, 0x1.ece0ep-48f, 0x1.d3c532p-125f, 0.0f, 0x1.282c2p-17f,
     0x1.0716f8p-76f, 0.0f, 0.0f, 0.0f, 0x1.060e2ap-15f, 0.0f, 0.0f, 0x1.a2a194p-114f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8c05c4p-10f, 0.0f, 0x1.aa0a7ap-123f,
     0x1.4e7bdap-7f, 0x1.c66448p-96f, 0.0f, 0x1.38b4a4p-83f, 0x1.fe1274p-56f, 0.0f,
     0.0f, 0.0f, 0x1.82b54p-43f, 0x1.d294a2p-33f, 0.0f, 0x1.cb774p-75f, 0.0f, 0.0f,
     0x1.9a17d6p-66f, 0.0f, 0.0f, 0x1.3f2968p-81f, 0x1.5d0d22p-16f, 0x1.ca4afap-12f,
     0x1.1ccc3cp-106f, 0x1.d56aa6p-56f, 0x1.760a9cp-4f, 0x1.3fe15cp-104f, 0.0f, 0.0f,
     0x1.38065ap-21f, 0x1.e6424cp-32f, 0.0f, 0.0f, 0x1.b66c52p-64f, 0.0f,
     0x1.23eeaep-32f, 0x1.b77e6p-76f, 0x1.faec02p-34f, 0x1.a065eap-59f,
     0x1.dd8998p-1f, 0x1.fc1aa4p-24f, 0x1.497ccap-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3535e6p-71f, 0.0f, 0.0f, 0x1.a8b75p-91f, 0x1.2fa608p-2f, 0.0f, 0.0f, 0.0f,
     0x1.b7891ap-125f, 0x1.3891e8p-3f, 0x1.b8bc7ep-17f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.17c74cp-64f, 0.0f, 0x1.c7e546p-26f, 0x1.62cccap-4f, 0x1.735bf4p-65f,
     0x1.26422ap-65f, 0x1.f5ae66p-110f, 0x1.a35b18p-44f, 0x1.7dfb4p-43f, 0.0f, 0.0f,
     0.0f, 0x1.4af276p-43f, 0x1.d156cap-41f, 0.0f, 0x1.4f1632p-24f, 0.0f, 0.0f, 0.0f,
     0x1.102454p-13f, 0x1.72d33cp-8f, 0.0f, 0x1.25dd2ap-97f, 0.0f, 0.0f,
     0x1.f1d35ep-30f, 0x1.90a7f2p-97f, 0x1.58b29cp-52f, 0x1.a43b74p-86f,
     0x1.919db4p-85f, 0x1.790e16p-47f, 0x1.ec446cp-113f, 0.0f, 0.0f, 0.0f,
     0x1.903392p-26f, 0x1.b635eap-20f, 0x1.6350d6p-102f, 0.0f, 0.0f, 0x1.e3721ep-36f,
     0.0f, 0.0f, 0.0f, 0x1.623bb4p-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8cc116p-49f, 0x1.f2cff4p-29f, 0.0f, 0.0f, 0.0f, 0x1.6a5bf6p-120f,
     0x1.084428p-95f, 0.0f, 0.0f, 0.0f, 0x1.737c12p-60f, 0x1.5d0eep-61f,
     0x1.c4a32ep-26f, 0x1.7ef3aap-102f, 0x1.da85d4p-125f, 0.0f, 0x1.5c9ddcp-72f, 0.0f
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
            int32_t tmp3;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_atanhf4_u10avx2128(tmp0);
            memcpy(((ml_float4_t*)(external_bench_wrapper_output_table+ i)), &(tmp1), 16);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(4);
            i = tmp3;
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
    printf("Sleef_atanhf4_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_atanhf4_u10avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
