/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_tanf1_u35purecfma.c --function \
 *     Sleef_finz_tanf1_u35purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --bench --no-embedded-bin --target x86_sse2
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
     0x1.b1df3ep-100f, 0.0f, 0x1.98fcdap-98f, 0.0f, 0.0f, 0x1.568376p-99f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.325112p-123f, 0x1.aef9a4p-76f, 0.0f, 0.0f,
     0x1.d84bcp-61f, 0.0f, 0.0f, 0.0f, 0x1.238556p-102f, 0.0f, 0x1.efdcep-30f, 0.0f,
     0.0f, 0x1.3bbf5ep-110f, 0x1.3bde32p-118f, 0.0f, 0x1.12d4bp-75f, 0.0f,
     0x1.ba41dcp-70f, 0x1.f96c46p-55f, 0.0f, 0x1.76be9cp-75f, 0.0f, 0.0f,
     0x1.97ad8ap-70f, 0.0f, 0x1.e278f4p-30f, 0x1.d4c41ep-123f, 0.0f, 0x1.ffd9eep-98f,
     0x1.73cb3p-6f, 0x1.b704ep-112f, 0.0f, 0x1.827a28p-91f, 0.0f, 0.0f,
     0x1.37dd72p-47f, 0x1.2fdb3ap-125f, 0x1.4ea32ep-108f, 0.0f, 0x1.0be6d2p-126f,
     0x1.0ed29p-49f, 0.0f, 0x1.1cd184p-20f, 0.0f, 0.0f, 0x1.dc4ef8p-98f,
     0x1.a3ce5ep-91f, 0x1.d2fa8cp-21f, 0x1.06808ep-75f, 0x1.61e492p-56f, 0.0f, 0.0f,
     0x1.2d2db2p-122f, 0.0f, 0x1.e8580cp-57f, 0x1.1f0b2ap-54f, 0x1.abd624p-1f, 0.0f,
     0x1.cd9c32p-11f, 0.0f, 0.0f, 0x1.ad39cp-80f, 0x1.38230ap-120f, 0.0f,
     0x1.513bfcp-107f, 0.0f, 0x1.c76c2p-59f, 0x1.e7ec76p-104f, 0.0f, 0x1.a0040ep-71f,
     0.0f, 0.0f, 0.0f, 0x1.64f0b8p-14f, 0.0f, 0.0f, 0.0f, 0x1.dfe152p-85f,
     0x1.ef4dd2p-37f, 0.0f, 0.0f, 0.0f, 0x1.b1b998p-98f, 0x1.bf8ee6p-118f,
     0x1.d05c3ep-34f, 0x1.b74a1cp-50f, 0x1.569d6ep-61f, 0x1.6f67fap-62f,
     0x1.6da3e8p-103f, 0x1.40db76p-8f, 0x1.35bdfp-13f, 0x1.b77a04p-13f, 0.0f,
     0x1.25b93cp-117f, 0x1.281788p-20f, 0.0f, 0x1.2ea926p-77f, 0.0f, 0.0f,
     0x1.b598bep-106f, 0x1.e97264p-121f, 0x1.b25174p-10f, 0.0f, 0x1.e1b6c4p-118f,
     0.0f, 0x1.e9d724p-43f, 0x1.134826p-50f, 0.0f, 0x1.78faeap-52f, 0.0f,
     0x1.4273a2p-84f, 0x1.c47bdap-119f, 0.0f, 0.0f, 0.0f, 0x1.e08336p-39f, 0.0f, 0.0f,
     0x1.ff44fap-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.61d6acp-74f, 0x1.5ff04p-109f,
     0x1.f57194p-39f, 0x1.c250f6p-7f, 0.0f, 0.0f, 0x1.ef46d2p-76f, 0.0f, 0.0f, 0.0f,
     0x1.2fb8e2p-1f, 0.0f, 0x1.70b384p-86f, 0x1.7a900cp-14f, 0x1.5b3decp-58f,
     0x1.8e9048p-24f, 0x1.07e0bap-5f, 0.0f, 0x1.630658p-41f, 0.0f, 0x1.d8e4ccp-31f,
     0x1.924d8cp-39f, 0x1.da024ep-121f, 0.0f, 0x1.a16f64p-102f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c3a6f4p-52f, 0.0f, 0.0f, 0x1.b8a11ap-9f, 0x1.2308fap-43f,
     0x1.3681ccp-92f, 0x1.6c0e4cp-78f, 0x1.828a52p-19f, 0x1.d0e82p-27f, 0.0f,
     0x1.3cf57p-62f, 0x1.85dc3ep-30f, 0.0f, 0x1.f61e82p-93f, 0.0f, 0x1.1b6eap-112f,
     0x1.70f3dep-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.02164ep-45f, 0.0f, 0.0f,
     0x1.bc59a4p-118f, 0x1.e94148p-83f, 0.0f, 0.0f, 0.0f, 0x1.ca2b8ap-5f, 0.0f,
     0x1.557498p-30f, 0.0f, 0x1.024dccp-22f, 0x1.dcab58p-13f, 0x1.76f996p-74f,
     0x1.ea5ff8p-14f, 0.0f, 0.0f, 0x1.dd485p-10f, 0x1.c9b47cp-59f, 0x1.2d204ep-86f,
     0.0f, 0.0f, 0x1.0f233ap-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d19702p-14f, 0.0f, 0.0f, 0x1.f699bap-97f, 0x1.eb7144p-87f, 0.0f,
     0x1.ec968cp-30f, 0x1.d3a08ap-73f, 0x1.d2a99ap-56f, 0x1.7eb05ap-53f, 0.0f,
     0x1.25952cp-62f, 0x1.351518p-44f, 0.0f, 0.0f, 0x1.6f6d12p-113f, 0x1.1be4bep-72f,
     0.0f, 0.0f, 0x1.ab312ep-19f, 0.0f, 0.0f, 0.0f, 0x1.4cc954p-92f, 0.0f,
     0x1.6129f2p-64f, 0.0f, 0.0f, 0.0f, 0x1.4c30ap-72f, 0x1.0d9e5p-7f,
     0x1.46dfecp-69f, 0x1.53f866p-115f, 0.0f, 0x1.9ac24ep-22f, 0.0f, 0.0f, 0.0f,
     0x1.f9d83p-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.badd68p-110f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9b644cp-63f, 0.0f, 0.0f, 0.0f, 0x1.145822p-89f, 0.0f, 0x1.2aaacap-105f, 0.0f,
     0x1.b36e54p-20f, 0x1.523f3ep-106f, 0x1p0f, 0x1.23ceccp-31f, 0.0f,
     0x1.0d6248p-104f, 0.0f, 0.0f, 0x1.19c4aep-63f, 0x1.3f1e8cp-119f, 0.0f,
     0x1.5fc73ep-17f, 0x1.5b941p-52f, 0x1.00911ap-27f, 0x1.f383a8p-85f, 0.0f, 0.0f,
     0x1.ff481cp-23f, 0x1.aa95b8p-66f, 0x1.f347bcp-11f, 0x1.243728p-101f,
     0x1.f32212p-73f, 0.0f, 0x1.784fe6p-64f, 0.0f, 0.0f, 0x1.456dd4p-69f, 0.0f,
     0x1.76615ap-65f, 0.0f, 0x1.cff79ep-87f, 0x1.52ea68p-102f, 0.0f, 0.0f, 0.0f,
     0x1.8a6d6ap-21f, 0x1.3bb2dap-68f, 0x1.9a3c6ap-120f, 0x1.b8355ep-111f,
     0x1.283504p-54f, 0x1.689a8ep-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.63d6b4p-66f, 0.0f,
     0x1.21294ep-88f, 0.0f, 0.0f, 0x1.f0cc5cp-3f, 0x1.643848p-64f, 0x1.0cbf9p-47f,
     0x1.01e936p-45f, 0.0f, 0.0f, 0x1.b94066p-119f, 0x1.66c34ep-103f, 0.0f,
     0x1.f23b3cp-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4c9a18p-80f, 0x1.c77722p-6f, 0.0f,
     0x1.f7faf4p-67f, 0.0f, 0.0f, 0x1.118e72p-34f, 0.0f, 0x1.9e52ep-49f,
     0x1.bb1ed2p-76f, 0x1.0429b6p-23f, 0x1.e3eb92p-88f, 0x1.f5f23cp-102f,
     0x1.ab585ap-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c792cep-120f,
     0x1.8179c6p-124f, 0x1.e51002p-16f, 0.0f, 0x1.d6b9c2p-27f, 0x1.341404p-6f, 0.0f,
     0x1.29c996p-30f, 0x1.024f3p-42f, 0.0f, 0.0f, 0x1.452a26p-7f, 0x1.1f62a8p-73f,
     0.0f, 0.0f, 0.0f, 0x1.94928cp-121f, 0x1.7c18c8p-1f, 0.0f, 0x1.e030a2p-1f, 0.0f,
     0x1.158d62p-22f, 0.0f, 0.0f, 0x1.6c54bcp-80f, 0.0f, 0.0f, 0x1.59230ep-91f, 0.0f,
     0.0f, 0.0f, 0x1.f491f4p-63f, 0.0f, 0.0f, 0x1.aedf42p-54f, 0x1.68bb4ep-60f,
     0x1.d7933p-39f, 0.0f, 0.0f, 0.0f, 0x1.1a266ep-91f, 0x1.1fea2p-90f, 0.0f, 0.0f,
     0x1.aa7b0ap-22f, 0.0f, 0.0f, 0.0f, 0x1.5b4318p-112f, 0x1.9e2dacp-15f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.41389ap-75f, 0x1.5b34eep-95f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0e033cp-65f, 0x1.d5cfe4p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f2323cp-80f,
     0x1.3bd98p-61f, 0x1.6743f4p-118f, 0x1.44ea78p-118f, 0.0f, 0x1.15ab4ep-55f,
     0x1.c012a2p-38f, 0.0f, 0x1.dc3bcap-117f, 0.0f, 0x1.c3928p-5f, 0.0f,
     0x1.e4c67ep-118f, 0x1.d9e24p-31f, 0x1.f8e1f8p-51f, 0.0f, 0.0f, 0x1.ebe5aep-20f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.58ee6ap-69f, 0.0f, 0.0f, 0x1.7f8872p-42f,
     0x1.0fe31cp-70f, 0.0f, 0x1.5d9914p-30f, 0x1.dc50e4p-77f, 0x1p0f, 0x1.efeb9cp-43f,
     0x1.f4fa14p-109f, 0x1.06cb68p-85f, 0x1.326bf8p-33f, 0x1.0b6cbep-72f,
     0x1.af8882p-75f, 0x1.f6237p-7f, 0x1.46941ep-77f, 0.0f, 0x1.edaf48p-33f, 0.0f,
     0x1.779514p-55f, 0.0f, 0x1.acc182p-116f, 0.0f, 0x1.4cb41p-40f, 0.0f,
     0x1.03a932p-46f, 0.0f, 0x1.cf466p-13f, 0x1.d4a6a8p-111f, 0.0f, 0.0f,
     0x1.5e3fecp-110f, 0.0f, 0x1.9166d2p-27f, 0x1.0dc30cp-33f, 0x1.ba926ap-121f,
     0x1.594242p-17f, 0.0f, 0x1.0ea106p-122f, 0.0f, 0.0f, 0x1.5139b4p-74f,
     0x1.adcff2p-21f, 0x1.9262eap-33f, 0.0f, 0x1.c2b9d4p-26f, 0x1.e22faep-123f, 0.0f,
     0x1.fd6988p-36f, 0.0f, 0.0f, 0x1.ea3cd2p-65f, 0.0f, 0x1.993906p-117f,
     0x1.e4dda8p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.006b92p-33f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d52312p-85f, 0.0f, 0x1.80c78cp-110f, 0.0f, 0.0f, 0.0f, 0x1.19e256p-87f, 0.0f,
     0x1.8d5d4p-70f, 0.0f, 0.0f, 0.0f, 0x1.efb5cep-25f, 0.0f, 0.0f, 0.0f,
     0x1.df18cep-84f, 0.0f, 0x1.7590e6p-11f, 0.0f, 0.0f, 0x1.1bae2ap-125f, 0.0f,
     0x1.3bc448p-4f, 0.0f, 0x1.0f6964p-38f, 0.0f, 0x1.4b7556p-81f, 0x1.9a4b0ap-53f,
     0.0f, 0x1.aa1cp-110f, 0x1.05b3c8p-120f, 0.0f, 0.0f, 0x1.2f59e2p-112f, 0.0f, 0.0f,
     0.0f, 0x1.68d7ep-50f, 0.0f, 0x1.8ba896p-37f, 0.0f, 0.0f, 0x1.3f4014p-72f,
     0x1.7baf48p-92f, 0x1.5bc63ap-8f, 0x1.338cfcp-46f, 0.0f, 0x1.fa8c7cp-106f,
     0x1.c64286p-121f, 0x1.295922p-112f, 0.0f, 0x1.c6be94p-95f, 0.0f, 0x1.16ce36p-23f,
     0x1.d049bcp-70f, 0x1.01e73cp-24f, 0.0f, 0x1.9b5318p-74f, 0x1.29780ap-10f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.7502d6p-111f, 0.0f, 0.0f, 0x1.bd257cp-37f, 0.0f, 0.0f,
     0x1.4c619cp-75f, 0x1.7ae6e8p-112f, 0x1.ce474p-111f, 0.0f, 0x1.e64126p-113f, 0.0f,
     0.0f, 0x1.1dbd7ap-118f, 0.0f, 0.0f, 0.0f, 0x1.3a151ap-18f, 0x1.4a668ep-36f, 0.0f,
     0x1.45e78p-57f, 0x1.14ca42p-65f, 0.0f, 0x1.f598dcp-36f, 0x1.ba7d44p-100f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c56acp-8f, 0x1.2fc562p-109f, 0.0f, 0.0f, 0.0f,
     0x1.eeaf66p-67f, 0.0f, 0x1.56fd78p-93f, 0x1.866b76p-75f, 0.0f, 0x1.72263p-18f,
     0.0f, 0x1.0f09cap-85f, 0.0f, 0x1.6e3ce6p-72f, 0.0f, 0x1.d6f064p-21f,
     0x1.ff0e46p-10f, 0x1.69872cp-46f, 0x1.4744bp-7f, 0.0f, 0.0f, 0.0f,
     0x1.98fd5p-66f, 0x1.0eccccp-40f, 0.0f, 0x1.0045bep-38f, 0x1.3dd114p-29f,
     0x1.c75edep-28f, 0.0f, 0.0f, 0.0f, 0x1.e9248ap-121f, 0.0f, 0x1.8453d8p-45f,
     0x1.6d338ap-23f, 0.0f, 0.0f, 0.0f, 0x1.3e6992p-28f, 0.0f, 0.0f, 0x1.82a2p-75f,
     0x1.8a92b8p-23f, 0x1.b723e4p-86f, 0.0f, 0.0f, 0.0f, 0x1.832e24p-40f, 0.0f,
     0x1.c36bfep-1f, 0x1.7e929ep-16f, 0x1.dc3b6cp-24f, 0x1.e3a604p-13f, 0x1p0f,
     0x1.1ac0f8p-57f, 0.0f, 0.0f, 0.0f, 0x1.d5459p-75f, 0.0f, 0x1.d61c2ap-26f, 0.0f,
     0x1.d068c6p-53f, 0x1.70080ap-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.82d1dep-76f,
     0x1.7c9b62p-96f, 0.0f, 0.0f, 0x1.c63d1ep-38f, 0.0f, 0x1.55f87ap-95f, 0.0f, 0.0f,
     0x1.8cdfacp-119f, 0x1.7cffcep-42f, 0.0f, 0x1.ff9b96p-52f, 0x1.3ef702p-85f,
     0x1.db48aep-30f, 0.0f, 0x1.854f26p-125f, 0x1.9e6416p-7f, 0.0f, 0.0f, 0x1p0f,
     0.0f, 0x1.0318eap-79f, 0x1.21d42ap-83f, 0.0f, 0x1.f02d62p-13f, 0x1.29fe7cp-47f,
     0.0f, 0x1.f9026ep-112f, 0x1.aed5f4p-82f, 0x1.11af8p-16f, 0x1.084b04p-122f, 0.0f,
     0.0f, 0.0f, 0x1.ad19e4p-59f, 0x1.1c0b98p-36f, 0.0f, 0.0f, 0x1.f8c092p-126f,
     0x1.694424p-66f, 0x1.6166aep-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.12f582p-119f,
     0.0f, 0.0f, 0.0f, 0x1.04a5e8p-114f, 0x1.a60d48p-10f, 0x1.5b667cp-48f,
     0x1.a6ed8ap-25f, 0.0f, 0x1.31d008p-120f, 0x1.937c62p-66f, 0x1.70f24cp-103f, 0.0f,
     0x1.f2e67ep-97f, 0x1.59b998p-25f, 0x1.0e1bb6p-24f, 0x1.0a22e8p-80f, 0.0f,
     0x1.f5ff94p-101f, 0x1.53dbf2p-101f, 0x1.09dc5ep-68f, 0.0f, 0x1.3503f2p-86f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.0e9b8ep-35f, 0.0f, 0.0f, 0x1.2ffd7p-5f, 0.0f,
     0x1.01971cp-113f, 0x1.bd22fcp-124f, 0x1.76162ep-123f, 0.0f, 0x1.50f674p-124f,
     0.0f, 0x1.8ed0fcp-8f, 0.0f, 0x1.d60fa8p-108f, 0x1.3353dap-81f, 0.0f, 0.0f,
     0x1.b135f8p-21f, 0.0f, 0x1.acb654p-45f, 0x1.9d6beap-97f, 0x1.14687ep-91f, 0.0f,
     0x1.b60628p-37f, 0x1.3b40e2p-28f, 0.0f, 0.0f, 0x1.cd5bd8p-90f, 0x1.aa9974p-37f,
     0x1.a3d5fcp-91f, 0x1.f2d6f8p-78f, 0x1.87bbe6p-16f, 0.0f, 0x1.3beb16p-96f, 0.0f,
     0.0f, 0x1.4a0842p-60f, 0.0f, 0x1.43705cp-38f, 0x1.322efap-122f, 0x1.abd26ap-92f,
     0.0f, 0x1.f51086p-3f, 0x1.d3372cp-70f, 0x1.4b034p-22f, 0x1.20b0cep-18f, 0.0f,
     0x1.500514p-4f, 0.0f, 0x1.a09638p-115f, 0.0f, 0.0f, 0x1.c1312ep-54f,
     0x1.616648p-13f, 0x1.e40616p-1f, 0x1.24b8eap-76f, 0.0f, 0.0f, 0.0f,
     0x1.c00a4ap-58f, 0x1.7d2f6p-61f, 0x1.69e6c8p-14f, 0x1.bd48aep-33f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b515ecp-36f, 0.0f, 0x1.c6283p-114f, 0.0f, 0x1.a7ff44p-69f, 0.0f,
     0x1.cc0e5cp-18f, 0x1.690a62p-36f, 0.0f, 0.0f, 0x1.0a6086p-64f, 0.0f,
     0x1.735c48p-26f, 0x1.2ef668p-55f, 0x1.3157c8p-38f, 0.0f, 0.0f, 0x1.15866p-78f,
     0x1.9c4d4p-79f, 0x1.6582c8p-124f, 0x1.e5019ep-125f, 0.0f, 0x1.712d3cp-68f,
     0x1.72046ep-15f, 0.0f, 0.0f, 0.0f, 0x1.59809p-52f, 0.0f, 0.0f, 0.0f,
     0x1.327b76p-12f, 0x1.77781p-6f, 0x1.8f9a54p-5f, 0.0f, 0x1.14da18p-107f,
     0x1.59de12p-90f, 0.0f, 0x1.770da4p-120f, 0x1.4eaea2p-53f, 0x1.183e16p-25f,
     0x1.1d8c4ep-20f, 0x1.ceb38ap-114f, 0.0f, 0x1.32411ep-38f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.8d108ep-14f, 0.0f, 0x1.f7e104p-15f, 0.0f, 0x1.934adap-5f,
     0.0f, 0x1.3e0ab2p-55f, 0.0f, 0x1.2c397p-86f, 0.0f, 0.0f, 0x1.f364dep-36f, 0.0f,
     0.0f, 0.0f, 0x1.9b125ep-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f5c7ccp-67f, 0.0f,
     0x1.b7357ap-83f, 0x1.8b03c2p-113f, 0x1.10eda8p-27f, 0.0f, 0x1.bdc7b8p-26f, 0.0f,
     0x1.6acccep-113f, 0x1.cd4c32p-64f, 0x1.0b68fep-59f, 0.0f, 0.0f, 0x1.7788dcp-80f,
     0.0f, 0.0f, 0x1.c29afep-81f, 0.0f, 0.0f, 0x1.6bef2p-118f, 0x1.399c42p-30f,
     0x1.8e44c8p-124f, 0.0f, 0x1.6aa782p-116f, 0.0f, 0x1.e53838p-32f, 0x1.c15534p-59f,
     0x1.bcb7e2p-33f, 0x1.f94428p-38f, 0x1.b0b9ccp-124f, 0x1.06ccf2p-101f,
     0x1.f50704p-113f, 0.0f, 0.0f, 0x1.ff60fap-47f, 0.0f, 0.0f, 0x1.069526p-26f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8ea6b2p-59f, 0.0f,
     0x1.6bc6b6p-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.629eeep-112f, 0x1.3cb246p-70f,
     0.0f, 0x1.94ba5p-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.381a3ap-52f,
     0x1.513b96p-85f, 0x1.33cedap-20f, 0x1.9eb3cap-79f, 0x1.2f0c04p-92f, 0.0f, 0.0f,
     0x1.e2bc0ap-27f, 0x1.c5de2ep-72f, 0.0f, 0x1.cad1c6p-117f, 0.0f, 0.0f,
     0x1.1d3342p-7f, 0x1.6110fap-86f, 0.0f, 0x1.3b46ecp-115f, 0.0f, 0.0f,
     0x1.cca4b8p-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6c649p-113f, 0x1.a2936cp-38f,
     0x1.6df34p-49f, 0.0f, 0x1.46e1dcp-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.df6e18p-32f, 0.0f, 0.0f, 0x1.090b4ep-120f, 0.0f, 0.0f, 0x1.48a99ep-115f,
     0.0f, 0.0f
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
            __m128 carg;
            __m128 carg1;
            __m128 carg2;
            float tmp2;
            int32_t tmp3;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_finz_tanf1_u35purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            carg = _mm_set_ss(bench_acc);
            carg1 = _mm_set_ss(tmp1);
            carg2 = _mm_add_ss(carg, carg1);
            tmp2 = _mm_cvtss_f32(carg2);
            bench_acc = tmp2;
            tmp3 = i + INT32_C(1);
            i = tmp3;
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
    printf("Sleef_finz_tanf1_u35purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_tanf1_u35purecfma bench acc %a\n", global_bench_acc);
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
