/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_frfrexpf1_purecfma.c --function \
 *     Sleef_finz_frfrexpf1_purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0.0f, 0x1.b5e69p-77f, 0x1.5fb212p-33f, 0.0f, 0x1.b9fe44p-105f, 0.0f, 0.0f,
     0x1.5ff3dp-104f, 0.0f, 0x1.8abd84p-18f, 0x1.c5385ap-123f, 0.0f, 0.0f, 0.0f,
     0x1.01783ep-21f, 0x1.92f4bap-104f, 0x1.77a6d8p-19f, 0.0f, 0.0f, 0x1.dd345cp-59f,
     0.0f, 0.0f, 0.0f, 0x1.717ba2p-55f, 0.0f, 0x1.9ccbp-60f, 0x1.4ccbd8p-67f, 0.0f,
     0x1.512e76p-89f, 0x1.edcd1cp-58f, 0x1.263f08p-95f, 0x1.523eb2p-4f, 0.0f,
     0x1.6b0366p-44f, 0.0f, 0.0f, 0x1.7acb46p-126f, 0.0f, 0x1.14fa0cp-6f, 0.0f, 0.0f,
     0x1.36e9cap-31f, 0x1.b6b0c8p-9f, 0x1.2dade2p-11f, 0.0f, 0.0f, 0x1.c4b98ap-106f,
     0.0f, 0x1.304f8cp-107f, 0.0f, 0.0f, 0x1.620938p-110f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ea0ba2p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e10852p-107f,
     0x1.1f01f4p-62f, 0x1.549c9cp-77f, 0.0f, 0.0f, 0x1.e3ca9p-78f, 0x1.fa105ap-37f,
     0x1.e012eap-40f, 0x1.597172p-20f, 0.0f, 0x1.41ec5ap-42f, 0.0f, 0x1.78dfcap-57f,
     0.0f, 0x1.dfb80cp-124f, 0x1.282a2p-69f, 0.0f, 0x1p0f, 0x1.00dbbcp-11f, 0.0f,
     0x1.01dd44p-8f, 0.0f, 0.0f, 0x1.a7e1e8p-102f, 0x1.013e6cp-39f, 0x1.52c894p-49f,
     0.0f, 0.0f, 0.0f, 0x1.e127a2p-91f, 0.0f, 0.0f, 0x1.f8d278p-126f, 0.0f,
     0x1.2f5286p-90f, 0.0f, 0x1.96996cp-20f, 0.0f, 0.0f, 0.0f, 0x1.d5ab14p-50f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.5eb238p-1f, 0x1.5a27cep-23f, 0.0f, 0.0f, 0.0f,
     0x1.9965bp-36f, 0x1.68eb32p-126f, 0x1.836438p-38f, 0x1.e041c2p-95f, 0.0f, 0.0f,
     0x1.abfcbp-39f, 0x1.4ccbeep-1f, 0.0f, 0x1.c0e142p-5f, 0x1.fd201cp-77f, 0.0f,
     0x1.2f63b6p-42f, 0.0f, 0x1.f113e8p-96f, 0x1.11c55cp-8f, 0x1.76f312p-43f,
     0x1.fe759ep-102f, 0.0f, 0x1.58ad58p-39f, 0.0f, 0.0f, 0x1.708bcp-48f, 0.0f, 0.0f,
     0.0f, 0x1.d34b82p-109f, 0.0f, 0.0f, 0.0f, 0x1.496648p-25f, 0x1.9d8568p-96f, 0.0f,
     0x1.49b69ep-26f, 0x1.30db04p-35f, 0.0f, 0x1.c5a4f8p-58f, 0.0f, 0x1.dd597p-23f,
     0.0f, 0x1.c6f16ap-35f, 0.0f, 0x1.83834ap-115f, 0.0f, 0x1.4db032p-101f,
     0x1.2c1164p-111f, 0x1.b7200ap-104f, 0x1.fa2fe8p-118f, 0.0f, 0x1.f4545cp-38f,
     0x1.aa9b4ap-86f, 0x1.e03352p-7f, 0.0f, 0x1.67486ep-113f, 0x1.8766e6p-26f, 0.0f,
     0x1.6bc672p-111f, 0x1.c7da14p-31f, 0.0f, 0x1.81c64cp-100f, 0.0f, 0.0f,
     0x1.eb6c18p-7f, 0.0f, 0x1.0d18a4p-53f, 0x1.740b6p-34f, 0x1.762ebep-10f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.220e04p-91f, 0x1.47e352p-85f,
     0x1.3e7b2ep-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e4986cp-3f, 0x1.a25934p-37f,
     0.0f, 0.0f, 0x1.2b64c6p-122f, 0.0f, 0.0f, 0.0f, 0x1.bb8968p-38f, 0x1.29518cp-6f,
     0x1.81756ep-104f, 0.0f, 0x1.6e5f4ep-12f, 0x1.5ff0fp-38f, 0x1.a5f3bep-25f, 0.0f,
     0x1.3dbbfp-34f, 0.0f, 0x1.b124d6p-74f, 0x1.a7e064p-36f, 0x1.4c4c3cp-86f, 0.0f,
     0.0f, 0x1.1e5856p-110f, 0.0f, 0x1.b4960ep-116f, 0x1.962392p-16f, 0x1.7cc546p-46f,
     0.0f, 0x1.d64382p-65f, 0x1.7bea38p-113f, 0x1.50f61cp-76f, 0x1.fecd88p-119f, 0.0f,
     0x1.85c7c2p-8f, 0x1.64a356p-39f, 0.0f, 0x1.f31182p-81f, 0x1.6f1364p-18f,
     0x1.3caf2p-55f, 0x1.790b18p-71f, 0.0f, 0.0f, 0x1.0d4ffep-122f, 0.0f,
     0x1.c32908p-79f, 0x1.04093p-63f, 0x1.c848cp-75f, 0x1.bb6512p-30f,
     0x1.55db4cp-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4cc554p-97f, 0x1.2eb536p-62f,
     0x1.faaadp-1f, 0x1.e9d59ap-81f, 0x1.907698p-45f, 0.0f, 0.0f, 0x1.e8dc4cp-2f,
     0.0f, 0x1.046006p-21f, 0x1.d0cbeap-15f, 0x1.2ac1b4p-117f, 0.0f, 0x1.8800d4p-69f,
     0.0f, 0x1.975278p-3f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.b22508p-47f, 0x1.adcfe6p-68f,
     0.0f, 0.0f, 0x1.b0e044p-104f, 0.0f, 0.0f, 0x1.c66fa2p-24f, 0x1.1a0932p-3f,
     0x1.1d2868p-28f, 0x1.f72a36p-17f, 0x1.992892p-43f, 0.0f, 0x1p0f,
     0x1.9f1d28p-108f, 0x1.285bd6p-41f, 0.0f, 0.0f, 0.0f, 0x1.5455dap-53f, 0.0f, 0.0f,
     0x1.1e74f2p-109f, 0x1.a80d14p-93f, 0x1.71debep-64f, 0x1.09dea6p-104f,
     0x1.314d66p-69f, 0x1.2c12dcp-64f, 0.0f, 0.0f, 0x1.4ce8ccp-40f, 0x1.5b42p-49f,
     0x1.612c6ap-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b5b3dep-80f, 0.0f, 0x1.9d9232p-80f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e2024ep-124f, 0x1.bc6ddcp-34f, 0.0f, 0x1.ddeb88p-33f,
     0.0f, 0.0f, 0.0f, 0x1.90cea4p-54f, 0.0f, 0.0f, 0x1.074c7cp-97f, 0.0f,
     0x1.5e921ap-117f, 0x1.08fa8p-53f, 0x1.43a434p-56f, 0.0f, 0.0f, 0x1.6feafap-64f,
     0x1.494b82p-66f, 0.0f, 0.0f, 0.0f, 0x1.594ee8p-50f, 0x1.e53accp-84f,
     0x1.e0d84p-114f, 0.0f, 0.0f, 0.0f, 0x1.9de72ep-26f, 0x1.9448f6p-65f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.fd3a48p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2268dcp-107f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c7ba8ap-46f,
     0x1.6acac4p-46f, 0x1.abef0ap-85f, 0x1.682ccep-4f, 0.0f, 0.0f, 0x1.950e58p-69f,
     0.0f, 0x1.c51f04p-59f, 0x1p0f, 0.0f, 0x1.f6511ap-100f, 0x1.35e1fp-43f, 0.0f,
     0x1.7ed698p-107f, 0x1.de1f74p-104f, 0.0f, 0x1.7357fap-83f, 0.0f, 0.0f,
     0x1.e894c4p-45f, 0x1.895b4ap-7f, 0x1.c21afcp-114f, 0x1.395852p-55f,
     0x1.cfcc66p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.33714ep-68f, 0x1.aac366p-117f,
     0x1.dafdd4p-123f, 0x1.fc837p-61f, 0.0f, 0.0f, 0x1.cb649ep-105f, 0.0f,
     0x1.79ba44p-48f, 0x1.94a9e4p-39f, 0.0f, 0x1.1cd988p-11f, 0x1.c36ddap-74f,
     0x1.66b8dp-69f, 0.0f, 0x1.1867e2p-97f, 0.0f, 0x1.2f888ap-62f, 0x1.c4d516p-42f,
     0.0f, 0.0f, 0x1.edba06p-77f, 0.0f, 0.0f, 0.0f, 0x1.7a4278p-49f, 0x1.a78f72p-120f,
     0.0f, 0x1.7f908ep-86f, 0x1.149ceep-28f, 0x1.5c3008p-3f, 0.0f, 0x1.2db542p-75f,
     0.0f, 0.0f, 0.0f, 0x1.96de52p-91f, 0x1.dd132ap-105f, 0x1.2a2ea4p-95f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.9f56f6p-66f, 0.0f, 0.0f, 0.0f, 0x1.6a9e66p-120f, 0x1.220b66p-21f,
     0x1.8d118ap-60f, 0.0f, 0x1.650dd6p-71f, 0x1.fa78eep-17f, 0x1.e8110ep-103f,
     0x1.067b9cp-79f, 0.0f, 0x1.38b2cap-67f, 0.0f, 0x1.a045ecp-71f, 0.0f, 0.0f, 0.0f,
     0x1.8acccp-15f, 0.0f, 0x1.94e02ep-71f, 0x1.a43792p-90f, 0x1.9ed98ep-39f, 0.0f,
     0.0f, 0.0f, 0x1.81b058p-55f, 0.0f, 0x1.06bb52p-22f, 0.0f, 0x1.87ca22p-19f,
     0x1.fec354p-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6fe0aap-103f, 0.0f,
     0.0f, 0.0f, 0x1.837d8cp-55f, 0.0f, 0x1.6c7c52p-60f, 0x1.0f6b98p-36f,
     0x1.ddd4cap-102f, 0x1.11df26p-17f, 0x1.3ac6b6p-96f, 0.0f, 0.0f, 0.0f,
     0x1.f439b8p-80f, 0x1.854bcep-68f, 0.0f, 0x1.7807fap-37f, 0x1.78b9b4p-17f, 0.0f,
     0x1.ff2cdap-109f, 0x1.4559dap-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.953252p-123f,
     0.0f, 0.0f, 0x1.5aa84ep-18f, 0x1.fb1592p-64f, 0x1.ba00a8p-112f, 0.0f, 0.0f,
     0x1.a34902p-113f, 0.0f, 0x1.505a06p-12f, 0.0f, 0.0f, 0x1.58787cp-110f,
     0x1.042c68p-54f, 0x1.a9c374p-85f, 0x1.d68542p-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ba7b6ep-114f, 0x1.516baep-104f, 0.0f, 0x1.9f978ep-69f, 0x1.85d088p-87f,
     0x1.50647ap-37f, 0.0f, 0.0f, 0x1.1d8c06p-29f, 0.0f, 0x1.f5473cp-90f,
     0x1.aa92fep-77f, 0.0f, 0.0f, 0x1.c8c64cp-92f, 0.0f, 0x1.c0fa3ap-45f, 0.0f,
     0x1.6087fp-84f, 0.0f, 0x1.40c2b6p-13f, 0x1.4aaf4cp-105f, 0x1.6bb2b4p-10f, 0.0f,
     0.0f, 0.0f, 0x1.e91362p-89f, 0.0f, 0.0f, 0.0f, 0x1.ddb368p-28f, 0x1.8e633ep-26f,
     0x1.f54538p-96f, 0x1.43067ap-58f, 0.0f, 0x1.165a22p-13f, 0x1.4e7bf8p-17f,
     0x1.e3f734p-68f, 0.0f, 0x1.1ab524p-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.82e0b2p-30f,
     0x1.f43ce2p-120f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.4b0a3ep-78f, 0.0f, 0.0f,
     0x1.3f69c6p-98f, 0.0f, 0x1.836e9ep-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bf7daap-48f, 0.0f, 0x1.a056dap-104f, 0x1.6bc654p-126f, 0.0f, 0x1.d3b75ep-59f,
     0x1.dfa83cp-84f, 0x1.24a918p-57f, 0.0f, 0x1.0f81e4p-8f, 0.0f, 0x1.589136p-93f,
     0x1.fdc596p-58f, 0x1.fed874p-59f, 0.0f, 0x1.e975fep-60f, 0.0f, 0x1.c2e98ap-71f,
     0x1.14991ep-85f, 0x1.99faf2p-69f, 0.0f, 0x1.848dcp-6f, 0x1.f3939p-11f,
     0x1.e6003ap-4f, 0.0f, 0x1.6c9d34p-75f, 0x1.57fc94p-56f, 0x1.606ccep-85f,
     0x1.9848b6p-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e3486cp-8f, 0x1.cc81aep-37f,
     0x1.7f744ep-31f, 0x1.ff34d8p-79f, 0x1.bfe048p-58f, 0x1.943e32p-11f, 0.0f,
     0x1.f94c52p-32f, 0x1.09d82ap-113f, 0x1.700db6p-39f, 0.0f, 0x1.1d94d4p-20f,
     0x1.1b6462p-108f, 0.0f, 0x1.879194p-41f, 0x1.f2ebeep-115f, 0.0f, 0x1.c96ffp-96f,
     0x1.87cc8cp-41f, 0.0f, 0.0f, 0x1.829d64p-57f, 0x1.f11958p-59f, 0x1.ce80c6p-9f,
     0x1.6ce11ap-74f, 0.0f, 0x1.01017ap-13f, 0x1.2a2504p-59f, 0x1.6654aep-85f, 0.0f,
     0.0f, 0.0f, 0x1.93d956p-102f, 0.0f, 0.0f, 0x1.db96bap-4f, 0.0f, 0x1.b1d30cp-90f,
     0x1.96942p-11f, 0x1.6f2f6ep-20f, 0x1.100fdp-79f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6870cp-15f, 0x1.f99f12p-80f, 0x1.6790f8p-8f, 0.0f, 0x1.5367d6p-50f, 0.0f,
     0.0f, 0.0f, 0x1.cf2aeep-47f, 0.0f, 0x1.8dcfc4p-72f, 0x1.09af56p-59f, 0.0f,
     0x1.c6e466p-109f, 0x1.2384f4p-110f, 0.0f, 0x1.81203ep-91f, 0x1.f99db4p-120f,
     0x1.91ace6p-1f, 0.0f, 0x1.7e213cp-39f, 0x1.9671dep-95f, 0.0f, 0x1.cc4a2p-106f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.72ec32p-100f, 0.0f, 0.0f, 0.0f, 0x1.5ceee6p-12f,
     0x1.827234p-63f, 0.0f, 0.0f, 0x1.148db6p-117f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.acbf2cp-20f, 0x1.00a93cp-73f, 0.0f, 0x1.7cc0cep-51f, 0x1.5b76a6p-74f, 0.0f,
     0.0f, 0x1.afc32p-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.17f726p-123f, 0.0f,
     0x1.e7de1ap-116f, 0.0f, 0.0f, 0.0f, 0x1.6ee1f4p-15f, 0x1.b2806ap-84f,
     0x1.dd5dc6p-14f, 0x1.94f76ap-26f, 0x1.d5e804p-96f, 0.0f, 0.0f, 0x1.d3be0cp-103f,
     0x1.0ec09cp-117f, 0.0f, 0.0f, 0x1.57e018p-37f, 0x1.fea198p-80f, 0x1.99f1b8p-104f,
     0.0f, 0x1.885f26p-39f, 0x1.303238p-81f, 0.0f, 0.0f, 0x1.3ad91p-3f, 0.0f, 0.0f,
     0.0f, 0x1.362c6cp-32f, 0.0f, 0.0f, 0.0f, 0x1.fdb67cp-112f, 0.0f, 0x1.2ccb36p-28f,
     0x1.cbb8b6p-6f, 0x1.19f3ep-82f, 0x1.d7efp-14f, 0.0f, 0x1.e3254ep-17f, 0.0f,
     0x1.6575c2p-23f, 0x1.67bbc8p-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.304518p-89f,
     0x1.4592e2p-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.78a9bp-53f,
     0.0f, 0x1.6b21c6p-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.06c4acp-21f,
     0.0f, 0x1.593e3cp-22f, 0.0f, 0.0f, 0x1.32f156p-118f, 0x1.7a3bc8p-64f,
     0x1.364c96p-67f, 0x1.2114acp-59f, 0.0f, 0x1.39728ep-117f, 0.0f, 0.0f, 0.0f,
     0x1.15801p-27f, 0x1.d158ap-81f, 0x1.c30ecep-126f, 0x1.6089a4p-81f,
     0x1.4f8026p-119f, 0x1.a185aep-41f, 0x1.54aa8cp-11f, 0x1.863eep-43f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.0fbadp-123f, 0.0f, 0.0f, 0x1.f824eap-46f, 0.0f,
     0x1.338a3ap-5f, 0.0f, 0.0f, 0.0f, 0x1.55c4aep-78f, 0x1.9d16f4p-57f,
     0x1.c092cp-3f, 0.0f, 0x1.6e05c8p-115f, 0.0f, 0.0f, 0.0f, 0x1.15b89ep-116f, 0.0f,
     0.0f, 0x1.d8c0f4p-112f, 0.0f, 0.0f, 0x1.ef8f3ep-122f, 0.0f, 0x1.3182e6p-125f,
     0.0f, 0x1.835344p-23f, 0x1.c9cdc4p-85f, 0.0f, 0x1.08bc6ap-80f, 0x1.34d44cp-98f,
     0.0f, 0x1.65705p-66f, 0.0f, 0.0f, 0x1.8ef658p-86f, 0x1.4998cp-51f,
     0x1.d1ab24p-86f, 0.0f, 0x1.6ee892p-95f, 0x1.4442cep-123f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.9431bcp-104f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9f934ap-102f, 0x1.270704p-61f, 0.0f, 0x1.324cc2p-88f, 0x1.d2be62p-119f,
     0x1.b985f2p-12f, 0x1.f118fp-112f, 0x1.96bf04p-78f, 0.0f, 0.0f, 0x1.00e1fap-5f,
     0.0f, 0.0f, 0.0f, 0x1.57e1b2p-27f, 0x1.cc6c5ap-17f, 0.0f, 0x1.050a1ep-33f, 0.0f,
     0x1.8ceee8p-64f, 0.0f, 0.0f, 0x1.4b26ap-70f, 0x1.20d6fp-105f, 0.0f, 0.0f, 0.0f,
     0x1.1edd18p-109f, 0x1.5483c4p-114f, 0x1.edefd8p-106f, 0x1.d400dep-47f, 0.0f,
     0x1.5248c2p-100f, 0x1.c18054p-37f, 0x1.bf9a12p-47f, 0x1.22b624p-107f,
     0x1.38716ep-51f, 0.0f, 0.0f, 0.0f, 0x1.d5a9cap-87f, 0x1.7ec844p-61f,
     0x1.89779ap-73f, 0.0f, 0.0f, 0.0f, 0x1.6bfbb6p-5f, 0.0f, 0x1.21a3c4p-94f,
     0x1.6ba706p-90f, 0x1.fdc574p-98f, 0.0f, 0.0f, 0x1.2f8098p-101f, 0x1.2d24b4p-89f,
     0.0f, 0.0f, 0.0f, 0x1.7679f2p-44f, 0.0f, 0x1.c39e66p-11f, 0x1.325402p-96f, 0.0f,
     0.0f, 0x1.41d1bep-62f, 0.0f, 0x1.033146p-34f, 0x1.b21fb6p-90f, 0.0f,
     0x1.2b4d3ap-19f, 0.0f, 0.0f, 0x1.a5e272p-35f, 0x1.0c468p-19f, 0.0f, 0.0f,
     0x1.c8f57ap-3f, 0x1.02c32ep-60f, 0.0f, 0.0f, 0x1.0f2a86p-29f, 0x1.6a00e2p-48f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a15966p-18f, 0x1.d69ac6p-72f, 0x1.0f3f4ap-68f, 0.0f,
     0x1.ae84fep-124f, 0x1.2300f6p-20f, 0.0f, 0.0f, 0.0f, 0x1.7b887p-50f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.0047bep-114f, 0x1.da3f9cp-20f, 0.0f, 0x1.74b808p-115f, 0.0f,
     0.0f, 0.0f, 0x1.5530ecp-6f, 0x1.41d97cp-87f, 0.0f, 0x1.1518b2p-64f, 0.0f, 0.0f,
     0x1.8d6786p-50f, 0.0f, 0x1.a7f226p-69f, 0.0f, 0.0f, 0.0f, 0x1.db1acep-17f, 0.0f,
     0x1.f9b65ap-2f, 0x1.1f49b8p-125f, 0.0f, 0x1.1a35c6p-50f, 0x1.f1ba68p-76f, 0.0f,
     0.0f, 0x1.9acb04p-80f, 0x1.d06584p-59f, 0x1.7f5744p-93f, 0x1.266fep-120f,
     0x1.daf544p-100f
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
            tmp1 = Sleef_finz_frfrexpf1_purecfma(tmp0);
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
    printf("Sleef_finz_frfrexpf1_purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_frfrexpf1_purecfma bench acc %a\n", global_bench_acc);
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
