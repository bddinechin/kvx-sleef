/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_fastcosf4_u3500avx2128.c --function \
 *     Sleef_finz_fastcosf4_u3500avx2128 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 4 --function-input-vector-size \
 *     4 --bench --no-embedded-bin --target x86_avx2128
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
     0x1.69bc96p-3f, 0.0f, 0.0f, 0x1.213084p-77f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b3db5p-31f, 0x1.8a427p-32f, 0.0f, 0x1.c70f56p-65f, 0.0f, 0x1.324c4p-27f,
     0x1.848b5ap-43f, 0.0f, 0x1.509e5cp-24f, 0x1.0fbfd8p-116f, 0.0f, 0x1.03af78p-33f,
     0x1.38f028p-28f, 0.0f, 0x1.ffb444p-46f, 0.0f, 0.0f, 0.0f, 0x1.1e38f2p-23f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.6f311p-117f, 0.0f, 0x1.df1618p-5f, 0x1.6ae39ap-125f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b97cf6p-24f, 0.0f, 0x1.08ea6p-37f, 0x1.067988p-76f,
     0.0f, 0.0f, 0x1.0fc3bcp-44f, 0x1.412aa2p-51f, 0.0f, 0.0f, 0x1.bc00d8p-24f,
     0x1.844b02p-31f, 0x1.b6163cp-22f, 0.0f, 0.0f, 0x1.b4a67cp-91f, 0x1.8b19dep-13f,
     0.0f, 0x1.f849dap-120f, 0.0f, 0x1.72934cp-51f, 0x1.c8e74ap-90f, 0x1.a80e7p-30f,
     0x1.ea897ep-53f, 0.0f, 0x1.04a0e2p-96f, 0.0f, 0x1.d4c436p-7f, 0x1.09c5d8p-21f,
     0.0f, 0x1.14e3ap-66f, 0x1.f59e3ap-21f, 0x1.ad30f6p-46f, 0.0f, 0x1.38c6b8p-99f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c3f182p-80f, 0.0f, 0.0f, 0x1.e68606p-119f,
     0x1.0b601p-5f, 0.0f, 0x1.21cc9ep-94f, 0x1.6f0018p-43f, 0.0f, 0.0f,
     0x1.c3a46cp-37f, 0x1.762d94p-44f, 0x1.13d29ep-54f, 0.0f, 0.0f, 0x1.cb9ff2p-13f,
     0x1.40b444p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.732b58p-80f, 0.0f, 0.0f,
     0x1.c7792ep-55f, 0x1.7c9f2cp-120f, 0x1.297c8ap-104f, 0.0f, 0x1.33a49p-16f,
     0x1.58a982p-30f, 0.0f, 0x1.a6a784p-105f, 0x1.c59258p-3f, 0x1.072ffep-85f,
     0x1.93fc6p-47f, 0.0f, 0x1.940206p-103f, 0x1.9175dcp-98f, 0.0f, 0.0f,
     0x1.4764ap-69f, 0.0f, 0.0f, 0.0f, 0x1.6ef8c2p-53f, 0x1.8a8218p-123f, 0.0f,
     0x1.efbc3ap-49f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4053c2p-44f,
     0.0f, 0x1.4a8608p-52f, 0.0f, 0.0f, 0x1.2ccc86p-24f, 0x1.b5bdf2p-53f,
     0x1.634422p-49f, 0x1.0383eap-104f, 0.0f, 0.0f, 0.0f, 0x1.8300a6p-93f, 0.0f,
     0x1.f49a54p-53f, 0.0f, 0.0f, 0x1.6ff63p-54f, 0.0f, 0x1.970f3p-53f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.898dacp-105f, 0x1.a421fep-107f, 0x1.9aab4ap-18f, 0.0f,
     0x1.324cccp-64f, 0x1.cdb32p-47f, 0x1.2c1396p-64f, 0.0f, 0x1.2ec96cp-102f,
     0x1.5088bap-97f, 0.0f, 0.0f, 0x1.b22814p-49f, 0x1p0f, 0.0f, 0x1.e3eecep-29f,
     0.0f, 0.0f, 0x1.b67e6ep-7f, 0x1.1aa256p-11f, 0x1.a937f6p-125f, 0x1.d472fap-33f,
     0.0f, 0.0f, 0x1.c09a7ap-25f, 0x1p0f, 0.0f, 0x1.023a2ap-122f, 0.0f, 0.0f,
     0x1.51dcb2p-104f, 0.0f, 0x1.539844p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.6435acp-92f, 0x1.ec9596p-82f, 0.0f, 0x1.a4166ep-6f,
     0x1.b7940ap-50f, 0.0f, 0.0f, 0x1.72c6bep-55f, 0x1.f42bccp-73f, 0x1.69d186p-76f,
     0.0f, 0.0f, 0.0f, 0x1.7cf5acp-89f, 0x1.a3293ep-1f, 0x1.645444p-74f,
     0x1.5337e6p-5f, 0.0f, 0x1.48cc08p-98f, 0x1.878452p-18f, 0x1.bf5e3ep-103f, 0.0f,
     0x1.bd83ep-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f39814p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3b5b1p-75f, 0.0f, 0.0f, 0.0f,
     0x1.abdf7ep-33f, 0.0f, 0.0f, 0x1.6a8b56p-25f, 0x1.1f2d56p-82f, 0x1.118a8ap-93f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2f0438p-25f, 0.0f, 0x1.9677f2p-40f,
     0x1.7d9b78p-102f, 0x1.f763bap-8f, 0.0f, 0.0f, 0.0f, 0x1.09f97cp-68f, 0.0f, 0.0f,
     0x1.1870eap-116f, 0x1.2eb2e4p-53f, 0.0f, 0.0f, 0x1.6325aep-106f, 0.0f,
     0x1.1d428cp-114f, 0x1.9c51a4p-115f, 0.0f, 0x1.e7d72ep-35f, 0x1.9155d6p-22f, 0.0f,
     0.0f, 0x1.e1f632p-52f, 0.0f, 0x1.1c72fep-5f, 0.0f, 0x1.18281ep-105f,
     0x1.5bd76ep-97f, 0.0f, 0x1.670ecp-47f, 0x1.f94a6cp-42f, 0.0f, 0x1.864f0ep-76f,
     0x1.530862p-17f, 0x1.d9558ep-69f, 0.0f, 0.0f, 0x1.8dc11ap-96f, 0x1.c5da2ap-32f,
     0.0f, 0x1.d01c46p-100f, 0.0f, 0.0f, 0.0f, 0x1.9cad9ep-10f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.20ecap-101f, 0x1.7351d4p-93f, 0x1.f26082p-84f,
     0x1.06f086p-7f, 0.0f, 0.0f, 0x1.acb2c4p-1f, 0.0f, 0.0f, 0x1.35025ep-56f,
     0x1.7ea874p-32f, 0x1.8a6a36p-120f, 0x1.b59332p-115f, 0.0f, 0.0f,
     0x1.c61a68p-119f, 0x1.808e06p-16f, 0.0f, 0x1.abe94cp-7f, 0.0f, 0x1.bde276p-105f,
     0.0f, 0.0f, 0x1.d3e9b4p-111f, 0x1.c566c6p-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.21a61ap-79f, 0x1.a15d1p-98f, 0x1.0eb90ap-70f, 0.0f, 0.0f, 0.0f,
     0x1.900374p-5f, 0.0f, 0.0f, 0.0f, 0x1.550214p-112f, 0.0f, 0x1.fc9ba8p-8f, 0.0f,
     0.0f, 0.0f, 0x1.646f7cp-126f, 0x1.21a4aap-62f, 0x1.2f0d8p-59f, 0.0f,
     0x1.ead796p-27f, 0x1.788112p-126f, 0.0f, 0.0f, 0x1.d08adap-67f, 0.0f,
     0x1.ccfc1ap-40f, 0x1.d9c248p-87f, 0.0f, 0x1.c5327cp-41f, 0.0f, 0.0f,
     0x1.5fcac6p-50f, 0x1.bcc1e2p-80f, 0x1.f1983ap-34f, 0.0f, 0.0f, 0x1.22abccp-88f,
     0.0f, 0.0f, 0x1.014262p-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4b2cecp-38f,
     0x1.d2ff56p-126f, 0.0f, 0x1.c91df8p-91f, 0.0f, 0.0f, 0.0f, 0x1.610d6ap-23f,
     0x1.68ba4p-92f, 0x1.8cd0dp-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3a8762p-13f,
     0x1.ba3116p-46f, 0x1.b86af4p-124f, 0x1.647e6p-83f, 0x1.2c7146p-57f, 0.0f,
     0x1.4efc42p-96f, 0.0f, 0x1.f75fa2p-63f, 0x1.1bd67p-36f, 0x1.8dd64ep-27f,
     0x1.f78838p-114f, 0x1.273bdap-42f, 0x1.6f7352p-38f, 0x1.7e4102p-78f,
     0x1.0368ecp-22f, 0x1.ea41cap-40f, 0x1.3fd054p-4f, 0.0f, 0.0f, 0x1.82ccf4p-12f,
     0x1.94545ap-94f, 0x1.b25368p-20f, 0x1.ac43f4p-96f, 0.0f, 0.0f, 0x1.6b525p-39f,
     0x1.e50c88p-101f, 0x1.cfdeb4p-117f, 0.0f, 0x1.fbd0f6p-80f, 0.0f, 0x1.76c992p-62f,
     0x1.1fb73ep-100f, 0x1.a3c9a4p-126f, 0x1.4df1p-34f, 0x1.c7a8dcp-110f, 0.0f, 0.0f,
     0x1.edd5aep-63f, 0.0f, 0x1.a96ef2p-55f, 0.0f, 0x1.eb7352p-59f, 0x1.4ee9bcp-121f,
     0x1.8b6694p-62f, 0x1.771202p-82f, 0.0f, 0x1.1d98d8p-46f, 0x1.f210cp-66f,
     0x1.9f3e22p-8f, 0.0f, 0x1.1ba7ccp-14f, 0x1.0b1ceap-20f, 0x1.74ffd6p-76f,
     0x1.c389e6p-24f, 0x1.8dab3p-10f, 0x1.1e5956p-117f, 0x1.6d4aap-101f,
     0x1.289ff8p-62f, 0.0f, 0x1.a1f166p-105f, 0x1.bcf6fep-103f, 0.0f, 0x1.5562c4p-42f,
     0x1.09b128p-8f, 0.0f, 0x1.7e9aa6p-126f, 0.0f, 0.0f, 0x1.c1e48ep-117f, 0.0f, 0.0f,
     0x1.c6246ep-95f, 0x1.329b38p-113f, 0.0f, 0x1.79cbp-11f, 0.0f, 0.0f, 0.0f,
     0x1.4f50ccp-4f, 0.0f, 0x1.862d92p-116f, 0x1.d49118p-46f, 0.0f, 0x1.28e60ap-33f,
     0x1.e40c16p-36f, 0x1.dba042p-9f, 0x1.bcf646p-110f, 0.0f, 0.0f, 0.0f,
     0x1.d7f372p-78f, 0.0f, 0x1.764b9cp-3f, 0.0f, 0x1.c97f56p-18f, 0x1.10fa74p-85f,
     0.0f, 0x1.0f2fdcp-114f, 0x1.f537b4p-16f, 0.0f, 0.0f, 0x1.4512eep-65f,
     0x1.b93106p-47f, 0.0f, 0.0f, 0x1.4f534p-75f, 0x1.97ddeep-99f, 0x1.09853cp-57f,
     0x1.b49b66p-113f, 0x1.dcebc4p-42f, 0x1.0938dcp-18f, 0x1.ea3d2cp-71f,
     0x1.abe674p-55f, 0x1.2ac874p-5f, 0.0f, 0x1.8c519p-55f, 0x1.452fbcp-7f, 0.0f,
     0.0f, 0x1.31a38cp-47f, 0.0f, 0.0f, 0.0f, 0x1.24327p-52f, 0x1.9cfedap-79f, 0.0f,
     0.0f, 0x1.7dd09ap-103f, 0x1.00cdf6p-70f, 0x1.f89cb6p-71f, 0.0f, 0.0f,
     0x1.9c3p-104f, 0x1.8a199ep-64f, 0x1.38546ep-23f, 0x1.ca8a76p-50f, 0.0f,
     0x1.e2e68ap-39f, 0x1.80b176p-40f, 0x1.2c3becp-28f, 0.0f, 0.0f, 0x1.426996p-73f,
     0x1.593dbep-69f, 0x1.758accp-83f, 0x1.c57996p-101f, 0.0f, 0.0f, 0x1.cb10c2p-13f,
     0.0f, 0.0f, 0.0f, 0x1.ead6dcp-16f, 0x1.0fe818p-72f, 0x1.48489ep-41f, 0.0f,
     0x1.5cf438p-45f, 0x1.1a5c7ep-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.cf31fp-63f, 0x1.e430d8p-86f, 0x1.47a57p-47f, 0.0f,
     0x1.f75cc2p-29f, 0.0f, 0.0f, 0x1.68a342p-98f, 0x1.678664p-50f, 0.0f, 0.0f, 0.0f,
     0x1.25e828p-47f, 0.0f, 0.0f, 0.0f, 0x1.a60e06p-40f, 0x1.b463acp-58f,
     0x1.a4d5e4p-98f, 0x1.925b02p-123f, 0.0f, 0.0f, 0x1.16b2bap-87f, 0.0f, 0.0f, 0.0f,
     0x1.c8b70ep-33f, 0.0f, 0x1.738b66p-87f, 0x1.d017d4p-93f, 0.0f, 0.0f,
     0x1.4ad856p-77f, 0x1.27a19cp-29f, 0x1.2fe85ep-5f, 0.0f, 0x1.412742p-41f, 0.0f,
     0x1.24b21cp-86f, 0x1.bdf4cp-92f, 0x1.d06d7cp-112f, 0x1.191382p-82f, 0.0f, 0.0f,
     0x1.bf87a4p-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c0d2c8p-106f, 0x1.fbb916p-55f,
     0.0f, 0x1.46b662p-36f, 0x1.f2dbc8p-112f, 0.0f, 0x1.54267ep-108f, 0.0f,
     0x1.9e9bf4p-101f, 0x1.749e2p-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.88c0c2p-78f,
     0x1.243bcap-23f, 0x1.caab0cp-121f, 0.0f, 0x1.ac2bp-36f, 0x1.8b377ep-61f,
     0x1.80c662p-58f, 0.0f, 0x1.cbeefep-19f, 0x1.784658p-35f, 0.0f, 0x1.afee3p-64f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.5ea70cp-3f, 0.0f, 0x1.65dddcp-36f, 0x1.5c41eep-78f,
     0x1.621518p-82f, 0.0f, 0.0f, 0x1.690872p-73f, 0.0f, 0.0f, 0x1.2bad3cp-38f,
     0x1.cb7b8ep-105f, 0.0f, 0.0f, 0.0f, 0x1.5a0002p-114f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.360852p-73f, 0.0f, 0.0f, 0.0f, 0x1.536b0ap-38f, 0.0f, 0.0f, 0x1.24be0ep-46f,
     0.0f, 0x1.3e27eap-44f, 0x1.9f63b8p-27f, 0x1.0fd5p-54f, 0.0f, 0.0f,
     0x1.4b06d4p-75f, 0.0f, 0x1.a7721ap-110f, 0x1.878922p-98f, 0.0f, 0.0f, 0.0f,
     0x1.b2304ep-42f, 0x1.720e88p-88f, 0x1.f8e4fap-119f, 0x1.52e8ccp-114f,
     0x1.62bc2ep-100f, 0x1.f31d22p-27f, 0.0f, 0.0f, 0.0f, 0x1.b7468p-77f,
     0x1.fc837ap-57f, 0x1.d541cp-52f, 0x1.b0a13ap-51f, 0.0f, 0x1.e53d8p-99f, 0.0f,
     0x1.c46f0cp-10f, 0.0f, 0x1.010f9cp-69f, 0x1.bfea0ap-53f, 0x1.c39b7ap-54f, 0.0f,
     0.0f, 0.0f, 0x1.51e73ep-119f, 0x1.fd66ccp-22f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.57087ap-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7465dep-28f, 0x1.e6f3a6p-23f,
     0x1.9fb848p-77f, 0.0f, 0x1.cb508p-15f, 0.0f, 0.0f, 0x1.3b4cfap-53f,
     0x1.05763p-1f, 0x1.6aaaf4p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7e799cp-46f, 0x1.12ddb8p-44f, 0x1.24d03cp-50f, 0x1.2e42cep-73f, 0.0f, 0.0f,
     0x1.aa85f4p-96f, 0x1.605542p-3f, 0.0f, 0x1.fa6368p-103f, 0.0f, 0.0f,
     0x1.e0bbe8p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.197a06p-54f, 0.0f, 0x1.84969ep-53f,
     0.0f, 0x1.756648p-8f, 0x1.82b166p-125f, 0x1.e1503ap-100f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e8980cp-99f, 0x1.e94c3cp-20f, 0x1.6db7dp-37f, 0x1.6d07e4p-63f,
     0x1.730e32p-116f, 0.0f, 0x1.896de6p-20f, 0.0f, 0.0f, 0.0f, 0x1.cd58c8p-10f,
     0x1.a19f1ap-108f, 0x1.ac52bap-2f, 0x1.1f7f78p-39f, 0.0f, 0x1.387a32p-43f, 0.0f,
     0.0f, 0x1.05d06p-58f, 0x1.46f298p-7f, 0.0f, 0x1.e9ccd2p-38f, 0x1.763f0cp-108f,
     0x1.e1df2ap-19f, 0x1.8fc5f6p-37f, 0x1.a1b21ap-65f, 0x1.535906p-112f, 0.0f,
     0x1.754e98p-84f, 0x1.79a676p-102f, 0x1.2b56f6p-105f, 0.0f, 0x1.c6b416p-92f, 0.0f,
     0x1.c5c1d8p-123f, 0.0f, 0.0f, 0x1.42f04ep-76f, 0.0f, 0x1.f82648p-24f, 0.0f, 0.0f,
     0x1.440e28p-120f, 0x1.d71d16p-38f, 0x1.0c2096p-117f, 0.0f, 0x1.4591eep-115f,
     0x1.b21f5ep-110f, 0.0f, 0x1.8fc96cp-80f, 0.0f, 0.0f, 0.0f, 0x1.0c1346p-2f, 0.0f,
     0x1.0df1e6p-98f, 0.0f, 0.0f, 0.0f, 0x1.d263a4p-108f, 0.0f, 0.0f, 0x1.f0b3a8p-61f,
     0x1.8931d6p-18f, 0x1.5cddecp-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.89ba7ap-116f,
     0x1.888516p-5f, 0.0f, 0x1.1ba108p-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.98ea48p-57f,
     0.0f, 0x1.badbdep-115f, 0.0f, 0.0f, 0x1.5dfa9ap-68f, 0.0f, 0.0f, 0x1.68b408p-64f,
     0x1.18c72ep-78f, 0x1.eafc68p-19f, 0x1.cde71p-25f, 0.0f, 0x1.237f1p-65f, 0.0f,
     0x1.ae8a3ep-89f, 0.0f, 0.0f, 0x1.dc3ac2p-68f, 0.0f, 0.0f, 0x1.a9c95ep-57f, 0.0f,
     0.0f, 0x1.fe858ap-4f, 0.0f, 0x1.9ed19ep-111f, 0x1.3c6324p-26f, 0x1.638412p-88f,
     0.0f, 0x1.df295cp-26f, 0.0f, 0.0f, 0.0f, 0x1.eb1e4ap-84f, 0.0f, 0.0f,
     0x1.fc6a6ep-21f, 0x1.7a8faap-118f, 0.0f, 0x1.46d38cp-55f, 0.0f, 0.0f, 0.0f,
     0x1.e558b8p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.ac0996p-89f, 0.0f,
     0.0f, 0.0f, 0x1.305446p-103f, 0x1.28a944p-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.2d49c6p-47f, 0.0f, 0x1.1bc6b4p-120f, 0x1.92beacp-18f, 0x1.09edccp-85f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ae6fdcp-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.770308p-65f, 0x1.03e0ecp-109f, 0.0f, 0.0f, 0x1.f8e3a8p-31f, 0x1.12c09p-39f,
     0.0f, 0x1.371c24p-28f, 0.0f, 0.0f, 0.0f, 0x1.5b5898p-61f, 0.0f, 0x1.25cc2ep-96f,
     0x1.ef8ea4p-64f, 0x1.ebde2ep-7f, 0x1.537958p-78f, 0x1.e99992p-24f, 0.0f, 0.0f,
     0x1.c0a4a2p-81f, 0.0f, 0x1.aeb8d2p-84f, 0x1.c3549ap-54f, 0x1.bb99fep-119f, 0.0f,
     0x1.6882bp-65f, 0x1.faaaacp-115f, 0.0f, 0x1.6358ecp-77f, 0.0f, 0x1.a192bcp-36f,
     0x1.66c19cp-33f, 0.0f, 0x1.b43e5ap-45f, 0.0f, 0.0f, 0.0f, 0x1.af750cp-16f,
     0x1.7d9f08p-73f, 0x1.951b62p-92f, 0.0f, 0x1.e162d2p-60f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d56e38p-31f, 0.0f, 0x1.778446p-42f, 0.0f, 0x1.1bf65p-34f, 0.0f,
     0x1.20870ep-120f, 0x1.94bb8ap-97f, 0.0f, 0x1.637a88p-50f, 0.0f, 0x1.4bdc08p-56f,
     0x1.8284d2p-50f, 0x1.6e12d2p-77f, 0.0f, 0x1.186a2p-12f, 0x1.8de864p-124f, 0.0f,
     0x1.4cb7a2p-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9a3a5ep-93f, 0x1.7ad5bep-105f, 0x1.6d15eap-20f, 0.0f
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
            tmp1 = Sleef_finz_fastcosf4_u3500avx2128(tmp0);
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
    printf("Sleef_finz_fastcosf4_u3500avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_fastcosf4_u3500avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
