/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_floorf4_avx2128.c --function Sleef_floorf4_avx2128 --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary32 --vector-size 4 \
 *     --function-input-vector-size 4 --bench --no-embedded-bin --target \
 *     x86_avx2128
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
     0.0f, 0.0f, 0x1.1779bep-24f, 0.0f, 0.0f, 0x1.d52b98p-107f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.df033cp-29f, 0x1.b93268p-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d3432p-27f, 0x1.4d01c8p-110f, 0x1.d12a7ep-71f, 0.0f, 0.0f, 0.0f,
     0x1.c84c14p-56f, 0.0f, 0x1.ad821cp-10f, 0x1.8f824ep-119f, 0x1.e83dacp-35f,
     0x1.bd3f54p-25f, 0x1.77aee2p-120f, 0x1.4fc228p-61f, 0x1.9fa992p-125f, 0.0f,
     0x1.f6b598p-19f, 0x1.f9c93p-114f, 0.0f, 0x1.d8e3ecp-14f, 0.0f, 0x1.45fcbp-94f,
     0x1.4e836cp-20f, 0x1.f82534p-65f, 0x1.746d48p-4f, 0.0f, 0x1.2bc346p-107f,
     0x1.faead4p-66f, 0x1.b2cd08p-77f, 0.0f, 0x1.86b6dap-98f, 0x1.cf4854p-5f,
     0x1.a96758p-12f, 0x1.28495ap-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.593c38p-90f,
     0.0f, 0x1.59401cp-36f, 0.0f, 0x1.dca032p-19f, 0x1.f928c6p-108f, 0x1.b91eb6p-93f,
     0.0f, 0.0f, 0.0f, 0x1.200fcep-46f, 0.0f, 0x1.758736p-1f, 0.0f, 0x1.349fdp-52f,
     0x1.78213p-19f, 0x1.d92002p-11f, 0.0f, 0.0f, 0x1.6da332p-125f, 0x1.a7c232p-108f,
     0.0f, 0.0f, 0x1.83d99ep-5f, 0.0f, 0x1.b4eafcp-52f, 0x1.becfa4p-83f, 0.0f, 0.0f,
     0x1.b4011cp-61f, 0x1.e029e6p-69f, 0x1.09b036p-40f, 0.0f, 0x1.a51418p-102f, 0.0f,
     0x1.3f2884p-57f, 0x1.e57baap-27f, 0.0f, 0.0f, 0x1.9117dep-123f, 0x1.b46434p-65f,
     0x1.fede74p-68f, 0x1.a145b6p-57f, 0.0f, 0.0f, 0x1.abd238p-74f, 0.0f,
     0x1.c6aaecp-103f, 0.0f, 0x1.ae4838p-17f, 0.0f, 0.0f, 0x1.0fbf8p-62f, 0.0f,
     0x1.6d0fc4p-5f, 0x1.f1912ap-84f, 0.0f, 0.0f, 0.0f, 0x1.064804p-86f,
     0x1.38f8f4p-114f, 0x1.6e5b02p-61f, 0.0f, 0.0f, 0x1.7fbd56p-83f, 0.0f, 0.0f, 0.0f,
     0x1.d766dcp-59f, 0.0f, 0.0f, 0.0f, 0x1.381554p-28f, 0x1.4732ecp-60f,
     0x1.8e0848p-101f, 0x1.b29ffep-123f, 0x1.61f1bp-24f, 0x1.a9cb1ap-83f, 0.0f,
     0x1.4ac614p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7f9a0ap-1f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5819fap-105f, 0x1.44f2acp-102f,
     0x1.92af18p-119f, 0.0f, 0.0f, 0.0f, 0x1.29bdb6p-8f, 0x1.54304ap-30f,
     0x1.245852p-36f, 0x1.7728d6p-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f0abb2p-63f,
     0x1.23b6bp-39f, 0.0f, 0.0f, 0.0f, 0x1.36980cp-17f, 0.0f, 0.0f, 0x1.b98b3p-115f,
     0.0f, 0x1.873e1ap-21f, 0.0f, 0.0f, 0x1.d45532p-119f, 0x1.16741cp-15f, 0.0f,
     0x1.da38cap-51f, 0x1.58ff04p-110f, 0.0f, 0x1.33c824p-113f, 0x1.63e7aap-71f, 0.0f,
     0x1.96a714p-64f, 0x1.2a3e16p-31f, 0x1.b7a124p-51f, 0x1.0bf22ap-79f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a858p-93f, 0x1.650ea6p-43f, 0.0f, 0x1.284b1ap-107f,
     0x1.4ae9c2p-81f, 0x1.d956c8p-33f, 0.0f, 0.0f, 0x1.4b4c1ep-35f, 0x1.1a0d02p-38f,
     0.0f, 0x1.35f386p-78f, 0x1.38724p-35f, 0.0f, 0.0f, 0x1.c0022p-13f,
     0x1.1f10aap-69f, 0x1.af7b28p-5f, 0.0f, 0x1.9f7a86p-57f, 0.0f, 0.0f,
     0x1.9114b6p-25f, 0x1.4959b2p-74f, 0x1.4b32d8p-64f, 0x1.13071cp-14f,
     0x1.2b1f5p-58f, 0.0f, 0x1.4bb55ep-78f, 0x1.6ba7eep-20f, 0.0f, 0.0f, 0.0f,
     0x1.7ea0a4p-48f, 0.0f, 0x1.d8d3fcp-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8778fp-114f, 0x1p0f, 0x1.13a548p-75f, 0x1.0bf488p-114f, 0x1.6e296cp-114f,
     0x1.e5eceap-47f, 0.0f, 0x1.1148b6p-1f, 0x1.ffca08p-13f, 0.0f, 0.0f,
     0x1.a87c62p-61f, 0x1.6e121ep-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e04b38p-54f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6d8f9p-123f, 0x1.ce468p-67f,
     0x1.298fbap-88f, 0.0f, 0x1.7b6936p-104f, 0.0f, 0.0f, 0x1.7869a6p-48f,
     0x1.2ba4f6p-80f, 0.0f, 0.0f, 0x1.1e5538p-57f, 0.0f, 0x1.a8fe9ep-108f, 0.0f, 0.0f,
     0x1.485b96p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.176b54p-110f, 0x1.63676cp-45f,
     0x1.915562p-5f, 0x1.2e49b4p-1f, 0x1.649f0ap-37f, 0x1.270902p-44f,
     0x1.e563eap-110f, 0.0f, 0.0f, 0x1.9bd53p-91f, 0x1.b5441p-86f, 0.0f,
     0x1.04c81p-21f, 0.0f, 0.0f, 0.0f, 0x1.4a3182p-4f, 0.0f, 0x1.2b1a1p-49f,
     0x1.cece2ep-95f, 0x1.752562p-33f, 0.0f, 0.0f, 0x1.53bd2cp-54f, 0.0f, 0.0f,
     0x1.f85868p-101f, 0.0f, 0.0f, 0x1.ef7a22p-42f, 0x1.7d158ap-85f, 0.0f,
     0x1.fa9d2cp-96f, 0x1.bd6312p-77f, 0x1.904652p-9f, 0.0f, 0.0f, 0.0f,
     0x1.e1d004p-38f, 0.0f, 0.0f, 0x1.759d94p-82f, 0.0f, 0.0f, 0x1.018d7cp-47f,
     0x1p0f, 0x1.f45886p-63f, 0x1.498dfp-43f, 0x1.fe3dbap-54f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4b0c56p-83f, 0x1.230a4p-126f, 0x1.d1a514p-16f, 0.0f, 0x1.3e9384p-119f, 0.0f,
     0.0f, 0x1.dff0b2p-24f, 0.0f, 0x1.cd9182p-36f, 0.0f, 0.0f, 0x1.328da6p-125f, 0.0f,
     0.0f, 0.0f, 0x1.47c6aap-24f, 0x1.475cbap-90f, 0.0f, 0x1.d69cfep-17f, 0.0f,
     0x1.34b758p-123f, 0x1.54c0acp-43f, 0x1.a60b6ap-33f, 0.0f, 0x1.177bbp-115f,
     0x1.645eaep-102f, 0.0f, 0.0f, 0.0f, 0x1.7a02f8p-110f, 0.0f, 0.0f,
     0x1.01185ap-31f, 0x1.97c01ap-88f, 0x1.42951cp-22f, 0.0f, 0x1.71478p-119f, 0.0f,
     0.0f, 0x1.bd5a2p-4f, 0.0f, 0x1.a7f4e2p-6f, 0.0f, 0x1.9929c6p-36f, 0.0f,
     0x1.ada062p-57f, 0x1.abbbecp-74f, 0.0f, 0x1.5db524p-81f, 0.0f, 0x1.73db5cp-34f,
     0x1.5ebf26p-33f, 0.0f, 0x1.69d50ep-83f, 0.0f, 0.0f, 0x1.515a2ap-17f, 0.0f, 0.0f,
     0x1.954e6p-90f, 0.0f, 0.0f, 0x1.c70a24p-57f, 0.0f, 0x1.be31d4p-89f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.141d56p-59f, 0x1.6c3f0ap-120f, 0.0f, 0x1.381d78p-38f, 0.0f, 0.0f,
     0.0f, 0x1.6d4886p-19f, 0.0f, 0x1.530c4ap-25f, 0.0f, 0x1p0f, 0x1.340ba6p-12f,
     0.0f, 0.0f, 0.0f, 0x1.b9376cp-120f, 0x1.a4140ap-91f, 0x1.509248p-54f,
     0x1.1988dep-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.169b8p-12f, 0.0f,
     0x1.9eeb08p-114f, 0x1.9661eap-40f, 0.0f, 0x1.215aa8p-71f, 0.0f, 0.0f,
     0x1.0a7baap-13f, 0x1.dd3466p-88f, 0x1.6ca236p-84f, 0x1.8e1b3p-124f,
     0x1.7437dp-95f, 0x1.35e35ap-61f, 0.0f, 0x1.464ba6p-120f, 0x1.cbe8dap-103f, 0.0f,
     0.0f, 0x1.f267fap-57f, 0.0f, 0x1.c9f5f6p-79f, 0.0f, 0.0f, 0x1.0c1264p-95f, 0.0f,
     0x1.42d138p-22f, 0.0f, 0x1.015968p-108f, 0x1.573436p-88f, 0x1.c3814ap-3f,
     0x1.2fcb3ap-108f, 0.0f, 0x1.7816dcp-26f, 0x1.f7799ep-65f, 0x1.a5ffc8p-75f,
     0x1.2fb39ap-53f, 0.0f, 0x1.11142ep-80f, 0x1.2993b2p-57f, 0.0f, 0x1.7c7e8ap-79f,
     0x1.01e106p-35f, 0.0f, 0x1.e86f62p-43f, 0.0f, 0.0f, 0x1.045d7ap-29f, 0.0f, 0.0f,
     0x1.5fcef4p-1f, 0.0f, 0x1.57a0aep-93f, 0.0f, 0.0f, 0x1.0ab082p-111f,
     0x1.a9bad2p-125f, 0.0f, 0x1.1560c2p-77f, 0x1.e74f2ep-112f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d7c7fep-6f, 0x1.eb61eap-42f, 0.0f, 0x1.62fbb8p-111f, 0.0f, 0.0f,
     0.0f, 0x1.8600e6p-51f, 0.0f, 0x1.39257ap-72f, 0x1.9f608cp-19f, 0x1.191532p-11f,
     0.0f, 0.0f, 0x1.5815dcp-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f31a86p-65f,
     0x1.b2d5c8p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.590dbap-89f, 0x1.fb5f9cp-100f,
     0x1.8a9dc4p-108f, 0x1.1f346cp-91f, 0x1.42e89cp-59f, 0x1.d7713p-115f, 0.0f,
     0x1.13c86p-113f, 0x1.c9a09ep-106f, 0.0f, 0.0f, 0x1.247bd6p-52f, 0x1.9af6dep-118f,
     0x1.f31954p-36f, 0x1.3e6894p-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b36412p-93f,
     0x1.7159c4p-108f, 0x1.2daa94p-52f, 0x1.2cd788p-117f, 0x1.959ad4p-6f, 0.0f,
     0x1.358428p-19f, 0.0f, 0x1.de79a8p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.624ccp-15f, 0x1.2e4998p-18f, 0x1.8646ep-126f, 0.0f, 0x1.92f35cp-40f, 0.0f,
     0x1.972b14p-119f, 0.0f, 0.0f, 0x1.c66c1ep-33f, 0.0f, 0x1.c9453cp-51f,
     0x1.f78c1cp-22f, 0.0f, 0x1.0dd754p-38f, 0x1.59d47p-50f, 0.0f, 0.0f,
     0x1.583f3cp-68f, 0.0f, 0.0f, 0x1.d8975p-75f, 0.0f, 0.0f, 0x1.4fda6p-97f,
     0x1.9dc76ep-108f, 0x1.8b4eeep-56f, 0x1.af834ap-23f, 0.0f, 0x1.d50bf8p-15f,
     0x1.5fccaap-58f, 0x1.fa7af4p-17f, 0.0f, 0x1.7843e8p-37f, 0.0f, 0x1.a24b5ep-25f,
     0.0f, 0x1.88c174p-84f, 0x1.11cb4cp-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.51315ep-79f,
     0x1.81608cp-56f, 0.0f, 0.0f, 0x1.1501dp-37f, 0x1.0fe0c6p-114f, 0.0f, 0.0f,
     0x1.1f7de2p-56f, 0.0f, 0.0f, 0.0f, 0x1.bd4146p-67f, 0x1.d639dep-125f,
     0x1.24144ep-126f, 0.0f, 0.0f, 0x1.9dd902p-88f, 0.0f, 0.0f, 0x1.1f6938p-38f, 0.0f,
     0.0f, 0x1.2b1954p-108f, 0.0f, 0x1.62fbdp-97f, 0.0f, 0x1.54f4c8p-52f, 0.0f,
     0x1.b9298ep-70f, 0.0f, 0x1.27d9a6p-46f, 0.0f, 0x1.9cbe2ap-118f, 0.0f, 0.0f,
     0x1.871868p-83f, 0.0f, 0x1.21466ap-104f, 0.0f, 0x1.d7609cp-114f, 0.0f,
     0x1.32e8a8p-102f, 0x1.9ea98ep-84f, 0.0f, 0x1.d615b4p-100f, 0x1.851d52p-58f, 0.0f,
     0x1.0eb13cp-122f, 0.0f, 0x1.1a69cap-98f, 0.0f, 0x1.002db8p-78f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.634654p-18f, 0x1.ad48aep-79f, 0.0f, 0x1.d52c66p-64f,
     0x1.b437aap-5f, 0x1.95e37ap-30f, 0.0f, 0x1.9fbdeep-2f, 0.0f, 0x1.8909f6p-43f,
     0.0f, 0x1.100812p-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.efc6dp-124f,
     0.0f, 0x1.80dbeep-9f, 0.0f, 0.0f, 0x1.3706d4p-16f, 0x1.898a54p-75f, 0.0f,
     0x1.e5972cp-16f, 0.0f, 0x1.c9026cp-86f, 0.0f, 0x1.5ff33cp-81f, 0.0f, 0.0f,
     0x1.8a2d5p-22f, 0x1.c6af22p-90f, 0x1.df152cp-65f, 0.0f, 0x1.13c56p-26f,
     0x1.a1e502p-64f, 0.0f, 0.0f, 0.0f, 0x1.505106p-17f, 0.0f, 0x1.221d36p-10f, 0.0f,
     0x1.bf407cp-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7ec2dep-1f, 0.0f, 0x1.4292b6p-49f,
     0x1.8e4a86p-103f, 0.0f, 0x1.f9d04ap-5f, 0x1.b6a1b4p-125f, 0x1.620a9ap-21f, 0.0f,
     0x1.dec3b2p-41f, 0x1.2ae214p-121f, 0.0f, 0x1.3160e6p-19f, 0.0f, 0.0f,
     0x1.b5e792p-83f, 0.0f, 0x1.112436p-98f, 0.0f, 0.0f, 0x1.6f7b9p-41f, 0x1p0f, 0.0f,
     0.0f, 0x1.6f7196p-22f, 0x1.75dcfep-87f, 0x1.9b032cp-12f, 0.0f, 0x1.5fc8acp-42f,
     0.0f, 0x1.2ffbdep-57f, 0x1.223b2p-103f, 0.0f, 0.0f, 0x1.0e66c2p-13f,
     0x1.8d0dcep-32f, 0x1.71f52p-55f, 0x1.ef743cp-9f, 0.0f, 0x1.3219bp-79f, 0.0f,
     0x1.bfa432p-107f, 0.0f, 0.0f, 0x1.d16898p-29f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1dee16p-64f, 0x1.e6a344p-63f, 0x1.d3a73p-121f, 0.0f, 0x1.9bfe7p-5f, 0.0f,
     0x1.2307b2p-124f, 0x1.1f4b38p-88f, 0x1.ded842p-17f, 0.0f, 0x1.39c472p-63f, 0.0f,
     0x1.28ed4ap-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f5644cp-67f, 0x1.9c17a2p-91f,
     0x1.db7986p-27f, 0x1.7c9f94p-46f, 0.0f, 0x1.f2cf24p-86f, 0.0f, 0.0f, 0.0f,
     0x1.91201p-24f, 0x1.df5d1cp-6f, 0x1.9c4838p-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a16b84p-30f, 0.0f, 0x1.64946p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.715388p-39f,
     0x1.d719c4p-50f, 0x1.a39484p-112f, 0x1.eb4e24p-90f, 0.0f, 0.0f, 0x1.7e34aap-67f,
     0.0f, 0.0f, 0x1.596e7cp-40f, 0x1.403bc8p-24f, 0x1.bad8bcp-122f, 0x1.fa42d2p-84f,
     0.0f, 0x1.02d036p-4f, 0.0f, 0x1.1f165p-105f, 0x1.495a46p-114f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b05738p-17f, 0.0f, 0x1.45a322p-73f, 0.0f, 0.0f,
     0x1.1c0e36p-41f, 0x1.bfea6ep-109f, 0x1.224c26p-45f, 0x1.053a9cp-39f, 0.0f,
     0x1.8e72cep-113f, 0.0f, 0x1.df67cap-86f, 0x1.6aa4cap-111f, 0.0f, 0.0f,
     0x1.6aca4cp-106f, 0x1.c22614p-46f, 0x1.cc1466p-56f, 0.0f, 0.0f, 0x1.72cc0ep-51f,
     0.0f, 0.0f, 0x1.f6fb96p-121f, 0.0f, 0.0f, 0x1.4f1af6p-81f, 0.0f, 0x1.162ffcp-76f,
     0.0f, 0x1.ce5264p-10f, 0x1.6e2144p-78f, 0x1.9b1eb4p-99f, 0.0f, 0x1.5f57ep-96f,
     0x1.a03fe8p-117f, 0.0f, 0x1.9c4f7ep-121f, 0.0f, 0.0f, 0.0f, 0x1.0cfdb6p-93f,
     0x1.3756d4p-67f, 0x1.50bb2ap-23f, 0x1.4c8272p-113f, 0x1.5011p-86f, 0.0f,
     0x1.e0daaep-123f, 0x1.751986p-110f, 0x1.f3a90ep-100f, 0.0f, 0x1.7c7b0ap-41f,
     0.0f, 0.0f, 0x1.29ee3ap-21f, 0x1.7c2e38p-22f, 0x1.849172p-68f, 0x1.e13568p-20f,
     0.0f, 0x1.44bb54p-18f, 0x1.e53552p-89f, 0.0f, 0.0f, 0x1.0f6cfep-88f, 0.0f, 0.0f,
     0x1.4e8488p-111f, 0.0f, 0x1.ebda84p-113f, 0x1.a7afe8p-29f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.afff56p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bef50cp-61f,
     0.0f, 0.0f, 0x1.8a964ap-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.338a04p-115f, 0.0f,
     0x1.d5cb76p-40f, 0x1.82e942p-58f, 0x1.e45a16p-84f, 0.0f, 0x1.9a7968p-118f,
     0x1.1e6b6cp-21f, 0x1.819e2ep-61f, 0.0f, 0.0f, 0x1.a0ee32p-22f, 0.0f,
     0x1.983886p-73f, 0x1.45035p-41f, 0x1.494484p-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.36772cp-9f, 0.0f, 0.0f, 0x1.eab876p-74f, 0x1.d4c906p-2f, 0.0f,
     0.0f, 0x1.8c7e36p-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ff8f0ap-65f, 0x1.0db4fap-4f,
     0x1.c9a0e8p-91f, 0x1.2098c2p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c7ea48p-65f,
     0x1.b34c8cp-98f, 0.0f, 0x1.72cc88p-65f, 0.0f, 0.0f, 0x1.6f9526p-12f,
     0x1.0a49aap-68f, 0x1.f45892p-1f, 0.0f, 0.0f, 0x1.8e59d4p-94f, 0x1.50b396p-19f,
     0.0f, 0x1.13649ap-100f, 0x1.1817eap-89f, 0x1.d6d5bcp-100f, 0.0f, 0.0f,
     0x1.0f7332p-21f, 0.0f, 0x1.89cd72p-7f, 0.0f, 0.0f, 0x1.1cdf66p-114f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f40576p-60f, 0.0f, 0.0f, 0x1.c51816p-14f, 0.0f, 0x1.4b61f6p-27f,
     0x1.d446dp-17f, 0x1.17ed9p-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.53a61ap-58f,
     0x1.628f4p-113f, 0x1.fa51a4p-58f, 0x1.4ac636p-101f, 0.0f, 0.0f, 0x1.a96312p-75f
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
            tmp1 = Sleef_floorf4_avx2128(tmp0);
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
    printf("Sleef_floorf4_avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_floorf4_avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
