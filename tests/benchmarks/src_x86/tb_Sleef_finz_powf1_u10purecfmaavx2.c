/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_powf1_u10purecfma.c --function \
 *     Sleef_finz_powf1_u10purecfma --arity 2 --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary32,binary32 --bench \
 *     --no-embedded-bin --target x86_sse2
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
     0x1.7d17acp-60f, 0x1.a797f6p-10f, 0x1.826408p-108f, 0x1.b62dd8p-109f, 0.0f,
     0.0f, 0.0f, 0x1.781114p-10f, 0x1.8633fap-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4c1664p-28f, 0.0f, 0x1.bc085p-94f, 0.0f, 0.0f, 0x1.d382aep-7f, 0.0f, 0.0f,
     0.0f, 0x1.38e7c2p-26f, 0x1.a9cf4p-35f, 0x1.461b62p-26f, 0x1.1a435cp-99f, 0.0f,
     0x1.3123dcp-8f, 0.0f, 0x1.7a7e74p-74f, 0.0f, 0x1.9c4bc2p-85f, 0x1.b6125p-53f,
     0.0f, 0.0f, 0x1.013eaap-112f, 0x1.49d462p-64f, 0.0f, 0x1.943eep-62f, 0.0f, 0.0f,
     0x1.d26e8ap-110f, 0x1.bb237p-115f, 0x1.23aa42p-99f, 0.0f, 0x1.9dd124p-104f,
     0x1.9bb8fp-105f, 0x1.34741ap-2f, 0x1.46018ep-17f, 0.0f, 0x1.765d96p-122f, 0.0f,
     0.0f, 0x1.fc4dap-97f, 0.0f, 0x1.17fc28p-65f, 0.0f, 0.0f, 0.0f, 0x1.46b14p-7f,
     0x1.3db236p-42f, 0x1.453142p-109f, 0.0f, 0.0f, 0.0f, 0x1.592014p-2f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c80dc6p-107f, 0x1.124f2p-85f, 0.0f,
     0x1.7c35fap-86f, 0x1.d14c6cp-65f, 0x1.58fb34p-37f, 0x1.1113d2p-113f, 0.0f,
     0x1.17a77ep-22f, 0x1.bec688p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5810f4p-107f, 0x1.c40e3p-86f, 0x1.34bf6ep-102f, 0.0f, 0.0f, 0x1.87a142p-100f,
     0.0f, 0.0f, 0x1.4d09b2p-56f, 0.0f, 0x1.903d44p-58f, 0x1.114848p-54f,
     0x1.15d55p-95f, 0x1.c6afcap-30f, 0x1.736a7ap-37f, 0.0f, 0x1.dad456p-41f, 0.0f,
     0x1.64a59cp-21f, 0x1.741a24p-89f, 0.0f, 0.0f, 0x1.1702p-84f, 0x1.5d28d4p-12f,
     0x1.d06d58p-103f, 0x1.8741f2p-57f, 0.0f, 0.0f, 0x1.c4ae5cp-111f,
     0x1.9b65bcp-102f, 0.0f, 0x1.49e958p-53f, 0x1.0fc7b6p-76f, 0.0f, 0x1.9f67dep-24f,
     0x1.c0483ep-2f, 0x1.19719ap-110f, 0.0f, 0x1.bca41ep-39f, 0.0f, 0x1.1d946p-39f,
     0.0f, 0.0f, 0x1.afe5f8p-126f, 0.0f, 0x1.02fd56p-21f, 0.0f, 0x1.ddeac6p-49f, 0.0f,
     0x1.edab54p-34f, 0.0f, 0.0f, 0x1.3b0982p-118f, 0x1.6fe37p-43f, 0x1.4d24a4p-95f,
     0.0f, 0.0f, 0x1.686b52p-88f, 0.0f, 0.0f, 0x1.ef877p-40f, 0.0f, 0x1.99231ep-83f,
     0x1.3ff6fap-94f, 0x1.9ffa76p-101f, 0.0f, 0x1.7fc0ap-80f, 0.0f, 0.0f, 0.0f,
     0x1.34521ep-60f, 0.0f, 0.0f, 0x1.5567bep-2f, 0x1.15072p-20f, 0.0f,
     0x1.ee2a3cp-60f, 0.0f, 0.0f, 0x1.e3f64ap-44f, 0x1.cb9bd4p-115f, 0.0f,
     0x1.6fb6fcp-108f, 0x1.2063a8p-4f, 0.0f, 0x1.007bd4p-20f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a771p-121f, 0x1.dd54a8p-104f, 0x1.1c6f52p-63f, 0x1.db9c38p-29f, 0.0f, 0.0f,
     0x1.cc2b62p-6f, 0.0f, 0x1.25940ep-90f, 0x1.902f38p-3f, 0x1.e72a52p-96f, 0.0f,
     0.0f, 0.0f, 0x1.c74fecp-54f, 0x1.58b88cp-66f, 0x1.03156p-91f, 0x1.177804p-36f,
     0.0f, 0x1.b352eap-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0b0748p-15f, 0.0f,
     0x1.144764p-84f, 0x1.b7f388p-54f, 0.0f, 0x1.71dbd8p-121f, 0.0f, 0x1.aadb9p-108f,
     0x1.aad00cp-105f, 0x1.6d245ep-106f, 0x1.615d4p-11f, 0.0f, 0x1.2de31ep-3f, 0.0f,
     0x1.a7abfp-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e9cf9cp-6f, 0x1.baf93ap-42f,
     0x1.8dfe2p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d3e5acp-34f, 0x1.f88494p-33f,
     0x1.18a952p-42f, 0.0f, 0.0f, 0x1.000bf2p-40f, 0.0f, 0x1.a28844p-111f,
     0x1.90783ap-92f, 0x1.7f5a06p-46f, 0.0f, 0.0f, 0x1.589baep-49f, 0.0f, 0.0f,
     0x1.057552p-104f, 0.0f, 0.0f, 0x1.bdab9cp-52f, 0x1.085ec8p-41f, 0.0f,
     0x1.5e0894p-105f, 0.0f, 0x1.eb822p-63f, 0.0f, 0x1.fe30b4p-16f, 0x1.85acf8p-118f,
     0.0f, 0x1.4c086ap-32f, 0.0f, 0x1.6ce72ep-40f, 0x1.827746p-103f, 0.0f,
     0x1.d5267p-72f, 0x1.563b0ep-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f397aap-105f, 0.0f,
     0x1.e3e2bcp-20f, 0x1.85cd62p-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4fac24p-65f,
     0x1.f24fd6p-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3da908p-107f, 0x1.b02a3ap-22f, 0.0f, 0.0f, 0.0f, 0x1.a311fep-109f, 0.0f,
     0x1.552b7cp-54f, 0x1.9b67bp-54f, 0x1.0019e4p-106f, 0x1.84404ap-102f,
     0x1.f1564ep-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d31e4ep-42f,
     0.0f, 0x1.818582p-114f, 0x1.9883fp-14f, 0.0f, 0.0f, 0x1.6d13f4p-52f, 0.0f,
     0x1.840004p-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b0f6a6p-40f, 0x1.4ea934p-126f,
     0x1.c3417ep-109f, 0.0f, 0x1.6ae6fap-65f, 0x1.3d891cp-66f, 0x1.425d72p-78f,
     0x1.8d30c2p-13f, 0.0f, 0x1.d4feeap-60f, 0.0f, 0x1.6ac942p-126f, 0x1.094668p-76f,
     0x1.66d2e4p-103f, 0.0f, 0.0f, 0x1.a15afcp-106f, 0.0f, 0.0f, 0x1.1577cp-75f, 0.0f,
     0.0f, 0x1.6ace52p-18f, 0x1.1f5e0ap-97f, 0x1.06fd58p-107f, 0x1.b3512ep-53f,
     0x1.01bfecp-118f, 0x1.976786p-64f, 0x1.4eaa04p-106f, 0.0f, 0x1.4c35ap-40f,
     0x1.7a5e06p-112f, 0x1.7c1f22p-104f, 0x1.da753ap-62f, 0.0f, 0.0f, 0x1.59c246p-66f,
     0.0f, 0x1.b1254ap-38f, 0x1.bc8394p-118f, 0.0f, 0.0f, 0.0f, 0x1.837a9ep-120f,
     0x1.a07edep-125f, 0.0f, 0.0f, 0.0f, 0x1.349b02p-8f, 0.0f, 0x1.bcaaa4p-11f,
     0x1.a2f2dap-94f, 0.0f, 0.0f, 0x1.9d9bb6p-4f, 0x1.948af2p-100f, 0.0f,
     0x1.7abb3p-2f, 0x1.ebe434p-31f, 0.0f, 0.0f, 0x1.c6223p-8f, 0x1.ca80ecp-62f,
     0x1.602cc2p-16f, 0x1.590afap-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d8a45ap-110f,
     0x1.3abc4p-2f, 0x1.d815cep-22f, 0.0f, 0.0f, 0.0f, 0x1.a6f47p-71f,
     0x1.6a48f8p-100f, 0x1.03d6c2p-2f, 0.0f, 0x1.8fb138p-112f, 0x1.fc5d8p-10f,
     0x1.18fed2p-28f, 0x1.043b62p-88f, 0.0f, 0x1.09661p-95f, 0x1.9ed9aap-113f,
     0x1.33ec64p-66f, 0x1.edcc3cp-56f, 0x1.987d2ep-79f, 0.0f, 0x1.768ba6p-115f, 0.0f,
     0x1.60414p-48f, 0x1.12d9bcp-72f, 0.0f, 0.0f, 0x1.92f476p-100f, 0x1.1e194cp-44f,
     0.0f, 0x1.8ae1fcp-26f, 0.0f, 0x1.6ed0aep-55f, 0x1.705108p-94f, 0.0f,
     0x1.d60b86p-65f, 0.0f, 0.0f, 0.0f, 0x1.dfa1cep-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.39162cp-61f, 0.0f, 0x1.e582e4p-47f, 0.0f, 0.0f, 0x1.a9d38ap-19f,
     0.0f, 0.0f, 0x1.122a8p-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e2c80ep-106f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f8a3aep-4f, 0x1p0f, 0.0f, 0x1.63e784p-1f, 0.0f, 0.0f,
     0x1.912d6ep-58f, 0.0f, 0.0f, 0x1.5936f4p-19f, 0.0f, 0x1.805d24p-15f, 0.0f, 0.0f,
     0.0f, 0x1.c8072cp-117f, 0.0f, 0x1.a5e8eap-82f, 0.0f, 0x1.98a98cp-100f,
     0x1.e97764p-69f, 0.0f, 0.0f, 0x1.9a261p-80f, 0x1.7a03e8p-2f, 0.0f,
     0x1.8a3d76p-20f, 0.0f, 0.0f, 0x1.20dddcp-25f, 0.0f, 0x1.ae9df2p-63f,
     0x1.68fafp-24f, 0x1.aeb4a4p-86f, 0.0f, 0x1.462d16p-54f, 0x1.4b795p-114f,
     0x1.389fcp-84f, 0.0f, 0x1.91d9cap-85f, 0x1.9ca012p-100f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.117424p-34f, 0x1.7e21fap-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.57d7aep-94f, 0.0f, 0x1.286ef4p-1f, 0x1.20da82p-70f, 0x1.4a563p-118f,
     0x1.231d8ep-17f, 0.0f, 0.0f, 0x1.c9b1fcp-123f, 0.0f, 0x1.dd91f8p-5f, 0.0f,
     0x1.c8e9acp-90f, 0.0f, 0.0f, 0.0f, 0x1.359ef6p-35f, 0.0f, 0.0f, 0x1.293536p-9f,
     0.0f, 0.0f, 0.0f, 0x1.4a31e4p-79f, 0.0f, 0x1.feec3ap-7f, 0.0f, 0x1.2a2af8p-110f,
     0.0f, 0.0f, 0x1.647f56p-122f, 0x1.9d995cp-125f, 0.0f, 0.0f, 0x1.379828p-79f,
     0.0f, 0x1.6d6e9ap-8f, 0x1.e4784cp-21f, 0.0f, 0x1.7d46d4p-95f, 0x1.8b077ep-123f,
     0x1.a83162p-110f, 0.0f, 0.0f, 0x1.9657dap-109f, 0x1.72ccc6p-107f, 0.0f, 0.0f,
     0.0f, 0x1.7cc52p-79f, 0x1.40c7c4p-45f, 0.0f, 0x1.1f01bap-113f, 0.0f,
     0x1.0e7ba4p-17f, 0x1.ed2872p-15f, 0x1.41fc3ap-116f, 0x1.72a9a8p-108f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f328c8p-102f, 0x1.538026p-83f, 0.0f, 0.0f, 0x1.b6f4cp-50f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.8a9256p-120f, 0x1.253b6ep-78f, 0x1.b6b982p-39f, 0.0f,
     0x1.de3336p-33f, 0.0f, 0x1.727804p-40f, 0x1.e2d6aep-70f, 0x1.6f2a4p-15f, 0.0f,
     0x1.8ddf2ep-91f, 0x1.b485dcp-55f, 0x1.e3ec6ap-16f, 0.0f, 0x1.1c92ccp-78f,
     0x1.3c692ap-54f, 0x1.95a8f8p-54f, 0.0f, 0x1.0cd346p-54f, 0.0f, 0x1.942b4cp-4f,
     0x1.97d80ap-73f, 0.0f, 0x1.dba89p-126f, 0x1.d5fccap-43f, 0x1.2f0226p-6f,
     0x1.7133ap-42f, 0.0f, 0x1.632e4cp-65f, 0x1.20dbb2p-117f, 0.0f, 0x1.da198ap-6f,
     0.0f, 0x1.07289ap-97f, 0x1.36db38p-76f, 0.0f, 0x1.6f81cep-115f, 0x1.e2a19ap-35f,
     0.0f, 0x1.db91ep-2f, 0.0f, 0x1.20b504p-107f, 0x1.0328e2p-104f, 0x1.68885ep-104f,
     0.0f, 0x1.fc7ba6p-36f, 0.0f, 0x1.8bb814p-122f, 0x1.fc4af6p-60f, 0x1.bb997ap-25f,
     0x1.293c74p-120f, 0.0f, 0x1.81f3e4p-65f, 0.0f, 0x1.bfa6c2p-34f, 0x1.26b4e8p-51f,
     0.0f, 0.0f, 0x1.152414p-65f, 0x1.1fe42ep-80f, 0x1.bb0474p-65f, 0.0f, 0.0f, 0.0f,
     0x1.cc0656p-5f, 0x1.d905f6p-23f, 0x1.f265d4p-109f, 0x1.03eb16p-61f,
     0x1.faa4c6p-28f, 0.0f, 0.0f, 0x1.603ab8p-88f, 0x1.f5b6c8p-22f, 0x1.6aa1fp-17f,
     0x1.ffcc5cp-95f, 0.0f, 0x1.751862p-87f, 0.0f, 0.0f, 0.0f, 0x1.cd024cp-34f,
     0x1.eac05ap-108f, 0x1.6b8a1ep-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1c8acap-80f,
     0.0f, 0.0f, 0.0f, 0x1.83b784p-44f, 0x1.2d1f88p-11f, 0.0f, 0x1.a9c048p-24f,
     0x1.412daep-5f, 0x1.952b88p-106f, 0x1.d2a7f2p-124f, 0.0f, 0x1.d65ap-102f,
     0x1.cf027p-9f, 0x1.1a2534p-26f, 0.0f, 0x1.912ed8p-1f, 0.0f, 0x1.5155ecp-89f,
     0.0f, 0x1.9e6a24p-66f, 0x1.1c7606p-107f, 0.0f, 0x1.5f661ap-67f, 0.0f, 0.0f,
     0x1.acf82ap-54f, 0x1.bacdcep-54f, 0x1.82d644p-76f, 0.0f, 0x1.ccc568p-93f, 0.0f,
     0.0f, 0x1.8043bap-79f, 0.0f, 0.0f, 0x1.38893ep-111f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ea6c6cp-51f, 0.0f, 0x1.1ec422p-59f, 0.0f, 0x1.27608ep-34f, 0x1.f1818ep-120f,
     0.0f, 0.0f, 0x1.3246e8p-118f, 0.0f, 0.0f, 0x1.09f3e6p-31f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.85f6dcp-46f, 0x1.db428cp-60f, 0.0f, 0.0f, 0x1.432c96p-126f, 0.0f, 0.0f,
     0.0f, 0x1.827cdap-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d2752cp-65f,
     0x1.89461ep-111f, 0.0f, 0x1.05d36ap-72f, 0.0f, 0x1.384cfep-82f, 0.0f,
     0x1.1a463ap-21f, 0x1.6951a6p-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d82b46p-75f, 0.0f, 0.0f, 0x1.d5c772p-36f, 0.0f, 0x1.0443c4p-4f,
     0x1.29a608p-97f, 0.0f, 0.0f, 0x1.5a552ap-74f, 0.0f, 0.0f, 0.0f, 0x1.6da732p-35f,
     0.0f, 0x1.a147c4p-82f, 0x1.0d85f2p-79f, 0x1.839c88p-105f, 0.0f, 0.0f,
     0x1.d072a8p-9f, 0x1.826e58p-79f, 0.0f, 0x1.c74048p-23f, 0.0f, 0.0f,
     0x1.83d294p-126f, 0.0f, 0.0f, 0x1.2d6e7ap-29f, 0.0f, 0x1.9b5f96p-77f,
     0x1.9a312ep-14f, 0.0f, 0x1.53083p-98f, 0.0f, 0x1.82a3fp-64f, 0x1.94aff2p-47f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ba8874p-53f, 0x1.7f7f7p-89f, 0x1.6ad64ap-31f,
     0.0f, 0x1.fff222p-124f, 0.0f, 0x1.2bc46ep-24f, 0x1.211edp-79f, 0.0f, 0.0f,
     0x1.a4970ep-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.17854p-100f, 0x1.1fed04p-109f, 0.0f,
     0.0f, 0x1.2fa2a4p-20f, 0x1.4e1048p-46f, 0.0f, 0.0f, 0x1.59bafcp-21f,
     0x1.2abf08p-69f, 0x1.daf688p-84f, 0.0f, 0x1.8a64cep-117f, 0x1.24aa2p-72f, 0.0f,
     0x1.c0fe3ep-37f, 0x1.1eb162p-77f, 0.0f, 0.0f, 0x1.b53ffp-2f, 0.0f,
     0x1.257b4ep-89f, 0x1.399f7ap-63f, 0x1.2c7834p-50f, 0x1.b4c76p-12f,
     0x1.2bcdf2p-93f, 0.0f, 0.0f, 0x1.20590ep-34f, 0.0f, 0.0f, 0x1.ca06f2p-122f,
     0x1.58ef0ep-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.682e74p-98f, 0x1.0aa08ap-26f,
     0x1.1119p-57f, 0x1.9f2cbap-55f, 0.0f, 0.0f, 0x1.57145cp-1f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ef3902p-11f, 0.0f, 0x1.f2d926p-96f, 0.0f, 0x1.e0bd2cp-118f, 0.0f,
     0x1.6c7806p-15f, 0.0f, 0x1.0e0418p-44f, 0x1.d889dp-57f, 0x1.a8ef18p-40f, 0.0f,
     0.0f, 0x1.31551ap-50f, 0x1.15510ep-64f, 0.0f, 0x1.a8da4p-43f, 0x1.e2314ap-27f,
     0x1.171b96p-25f, 0x1.7f56eep-106f, 0x1.663ff6p-64f, 0x1.1b123ep-45f, 0.0f,
     0x1.b1bbaap-113f, 0x1.792c6p-25f, 0x1.6ca1cp-71f, 0.0f, 0x1.0b5adep-61f, 0.0f,
     0x1.75c7fap-19f, 0x1.645afcp-60f, 0x1.8eccf6p-1f, 0.0f, 0.0f, 0x1.88e53cp-57f,
     0.0f, 0x1.10a24cp-49f, 0.0f, 0x1.9e7c48p-91f, 0.0f, 0x1.98d426p-59f, 0.0f,
     0x1.20508cp-112f, 0x1.0abf3p-35f, 0.0f, 0.0f, 0.0f, 0x1.913762p-27f, 0.0f,
     0x1.867344p-111f, 0x1.890c4ep-55f, 0x1.acb39p-72f, 0x1.5314bep-14f,
     0x1.76d888p-118f, 0.0f, 0x1.e11d4p-5f, 0x1.ffbea8p-51f, 0x1.0838bap-34f,
     0x1.509b2ap-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fa7b3p-83f, 0.0f,
     0x1.9b3e94p-5f, 0x1.65e2f4p-119f, 0x1.44ca2ap-43f, 0x1.e635cep-22f, 0.0f, 0.0f,
     0x1.04b09ap-104f, 0x1.b90d0cp-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.6a9daap-60f, 0.0f, 0x1.ae703ap-90f, 0.0f, 0.0f, 0.0f, 0x1.8b98f8p-119f,
     0.0f, 0x1.d9d442p-19f, 0x1.84384ap-87f, 0.0f, 0x1.7af8bcp-29f, 0.0f, 0.0f,
     0x1.c22bfcp-100f, 0.0f, 0.0f, 0x1.6c3496p-120f, 0x1.95b18p-62f, 0.0f,
     0x1.38f38ap-83f, 0x1.8d0206p-41f, 0x1.7bb78ep-119f, 0.0f, 0.0f, 0x1.34e77cp-58f,
     0x1.0f5b24p-75f, 0.0f, 0.0f, 0.0f, 0x1.92ce28p-3f, 0.0f, 0.0f, 0x1.153292p-119f,
     0x1.043c84p-57f, 0x1.107df8p-63f, 0x1.36cba2p-53f, 0.0f, 0x1.b83fc2p-11f,
     0x1.5d4762p-122f, 0x1.7700eep-73f, 0.0f, 0x1.bf6904p-92f, 0.0f, 0.0f, 0.0f,
     0x1.876faep-86f, 0.0f, 0.0f, 0x1.db2c3ep-6f, 0x1.e0c80ap-51f, 0.0f, 0.0f, 0.0f
};
static const float external_bench_wrapper_input_table_arg1[1001]  = {
     0x1.5d6452p-27f, 0.0f, 0.0f, 0.0f, 0x1.92dd56p-28f, 0.0f, 0.0f, 0x1.83a06cp-14f,
     0.0f, 0.0f, 0.0f, 0x1.0af576p-110f, 0.0f, 0x1.8b661p-18f, 0x1.12896cp-45f,
     0x1.7bd8eap-17f, 0.0f, 0x1.0baa56p-23f, 0x1.cdefc4p-87f, 0.0f, 0x1.25ef22p-67f,
     0x1.c149bcp-47f, 0x1.8d33d6p-30f, 0x1.8f1782p-41f, 0.0f, 0.0f, 0x1.c0f76cp-2f,
     0x1.c5ae9cp-126f, 0.0f, 0x1.59ba5p-97f, 0.0f, 0x1.d0e302p-23f, 0x1.dc2e9ep-54f,
     0x1.74f734p-87f, 0x1.970906p-69f, 0.0f, 0.0f, 0x1.90d30cp-23f, 0x1.187b14p-40f,
     0.0f, 0x1.520898p-80f, 0.0f, 0.0f, 0x1.fe12p-8f, 0.0f, 0x1.3a5648p-25f,
     0x1.e8bee6p-33f, 0x1.65589ep-9f, 0x1.9f5456p-79f, 0.0f, 0.0f, 0x1.94e74ap-33f,
     0x1.b225d6p-112f, 0x1.9d0c4ep-49f, 0.0f, 0x1.9d5ba8p-57f, 0.0f, 0.0f, 0.0f,
     0x1.956248p-40f, 0x1.d90c18p-63f, 0x1.3ec6d6p-48f, 0.0f, 0.0f, 0.0f,
     0x1.f6ede4p-41f, 0x1.a8ab2ap-96f, 0.0f, 0x1.deb96cp-18f, 0x1.ce3d38p-117f,
     0x1.cabb0ep-102f, 0.0f, 0.0f, 0.0f, 0x1.94e99ap-120f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.df40aap-1f, 0x1.bf81ep-74f, 0.0f, 0.0f, 0.0f, 0x1.e05766p-44f,
     0x1.6075f2p-118f, 0.0f, 0.0f, 0x1.f3ef36p-28f, 0.0f, 0x1.cafb9cp-47f, 0.0f,
     0x1.fef528p-70f, 0.0f, 0x1.7989e8p-34f, 0.0f, 0.0f, 0x1.22e50ep-126f, 0.0f, 0.0f,
     0.0f, 0x1.94df3ap-102f, 0x1.c6f5b8p-12f, 0x1.4450d4p-98f, 0x1.7292ccp-88f, 0.0f,
     0.0f, 0x1.3e404ep-63f, 0x1.8e2f24p-81f, 0x1.7f9ffp-126f, 0.0f, 0x1.1a55a6p-43f,
     0x1.9f41d8p-72f, 0x1.e59b78p-49f, 0x1.5e660ep-57f, 0x1.e8c738p-125f,
     0x1.68ec76p-99f, 0x1.b0cf1p-69f, 0x1.a466ap-2f, 0x1.74de5cp-51f, 0.0f,
     0x1.15280ep-44f, 0x1.f2318ap-15f, 0.0f, 0x1.253434p-124f, 0x1.1b289ap-78f,
     0x1.2ef746p-123f, 0x1.f24b88p-43f, 0.0f, 0.0f, 0.0f, 0x1.9afe56p-37f, 0.0f, 0.0f,
     0x1.609cdep-35f, 0x1.935c76p-112f, 0x1.161802p-18f, 0x1.f0dbcp-8f,
     0x1.00be06p-15f, 0.0f, 0.0f, 0x1.ff0fcap-87f, 0x1.8068eep-23f, 0.0f, 0.0f, 0.0f,
     0x1.c4e334p-66f, 0x1.ba445p-65f, 0.0f, 0x1.211348p-49f, 0.0f, 0x1.1f6c2ap-10f,
     0.0f, 0x1.088c4cp-75f, 0x1.a972acp-110f, 0x1.e8a71ap-89f, 0.0f, 0.0f,
     0x1.ac3e88p-13f, 0x1.914184p-35f, 0.0f, 0x1.0d6ca2p-95f, 0.0f, 0x1.a97a9ap-16f,
     0.0f, 0.0f, 0x1.92b52p-37f, 0x1.f6b0f2p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.876aecp-20f, 0.0f, 0x1.87f00cp-78f, 0.0f, 0x1.25e916p-66f, 0x1.ae571cp-37f,
     0.0f, 0.0f, 0.0f, 0x1.ed37b4p-65f, 0x1.ad9f88p-71f, 0.0f, 0x1.e13298p-77f, 0.0f,
     0.0f, 0x1.73f3dp-112f, 0.0f, 0.0f, 0.0f, 0x1.236c18p-83f, 0.0f, 0x1.ec66a8p-78f,
     0x1.58921ap-120f, 0.0f, 0x1.e8f874p-44f, 0.0f, 0.0f, 0.0f, 0x1.2d0cecp-74f,
     0x1.d1eb6ep-113f, 0.0f, 0x1.48fdecp-125f, 0.0f, 0x1.8f331ap-77f,
     0x1.d2c3dcp-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0fb31cp-57f, 0.0f,
     0x1.aa365p-44f, 0x1.ac56dcp-27f, 0x1.b90b28p-104f, 0.0f, 0.0f, 0.0f,
     0x1.0bed88p-33f, 0x1.53565cp-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.082b7ap-60f, 0.0f,
     0x1.f24d5cp-38f, 0.0f, 0.0f, 0x1.dd784p-88f, 0x1.8247fp-59f, 0.0f,
     0x1.9280cp-111f, 0x1.368c0ep-56f, 0x1.a7f7a6p-35f, 0.0f, 0x1.55b114p-114f, 0.0f,
     0x1.e66b6ep-83f, 0x1.b5984ep-49f, 0.0f, 0x1.5f6d06p-16f, 0x1.3fcb68p-117f,
     0x1.82c65p-37f, 0.0f, 0x1.02fecap-68f, 0x1.11a2aap-51f, 0.0f, 0.0f, 0.0f,
     0x1.c9204ep-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.555b96p-38f, 0.0f, 0.0f, 0x1.cc377ap-49f, 0x1.43aac2p-109f, 0x1.00d14p-1f,
     0x1.c42c1p-93f, 0.0f, 0x1.b8d21p-79f, 0.0f, 0x1.110202p-2f, 0x1.3c7f3p-9f, 0.0f,
     0x1.b30cd2p-51f, 0x1.e3edf4p-62f, 0x1.9220f4p-119f, 0x1.abcff4p-26f, 0.0f, 0.0f,
     0x1.a0192ep-71f, 0x1.0c7d3ep-97f, 0x1.81964ep-16f, 0x1.3f7a96p-88f,
     0x1.1bb51cp-70f, 0.0f, 0.0f, 0x1.e77fp-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f47218p-71f, 0x1.f297eap-70f, 0x1.0469cap-66f, 0.0f, 0.0f,
     0x1.a46142p-105f, 0.0f, 0.0f, 0x1.89f412p-8f, 0x1.8dc476p-126f, 0x1.428c62p-69f,
     0.0f, 0x1.e7d764p-45f, 0.0f, 0x1.7bd162p-110f, 0x1.99422ep-44f, 0.0f, 0.0f,
     0x1.e7d356p-114f, 0.0f, 0x1.b81a2cp-57f, 0x1.2135e2p-93f, 0x1.b0af4cp-69f,
     0x1.b5f5dap-5f, 0x1.a65b96p-6f, 0.0f, 0x1.80f168p-51f, 0x1.8ad1fp-63f,
     0x1.e483dp-7f, 0x1.3e7d94p-87f, 0x1.94620ap-53f, 0.0f, 0.0f, 0x1.0f71e2p-96f,
     0.0f, 0.0f, 0.0f, 0x1.a399bep-72f, 0x1.777cfcp-96f, 0.0f, 0x1.b6be28p-110f, 0.0f,
     0x1.9901dp-32f, 0x1.1e7e8cp-20f, 0.0f, 0x1.d5a9f8p-15f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b137a4p-102f, 0.0f, 0x1.bfbcf8p-51f, 0x1.72b82ap-111f, 0x1.09113p-30f,
     0x1.0645bp-93f, 0.0f, 0.0f, 0.0f, 0x1.a59c7p-98f, 0.0f, 0.0f, 0x1.4e7bcep-84f,
     0x1.72f492p-73f, 0x1.1a56fp-75f, 0.0f, 0.0f, 0x1.87d158p-114f, 0.0f, 0.0f, 0.0f,
     0x1.91884p-110f, 0x1.60249cp-108f, 0x1.05dabep-21f, 0.0f, 0.0f, 0x1.439736p-20f,
     0.0f, 0x1.06dc32p-125f, 0.0f, 0x1.6a0bd6p-53f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.494bdap-20f, 0.0f, 0x1.1551fap-59f, 0x1.a76cc4p-81f, 0.0f, 0.0f,
     0x1.be597ap-66f, 0.0f, 0x1.f1677ep-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.368e7cp-80f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.39016ep-74f, 0.0f, 0.0f, 0x1.9c2b9ep-12f,
     0x1.70a45cp-2f, 0x1.208582p-70f, 0.0f, 0x1.8d77d4p-11f, 0x1.5c7f5ap-104f, 0.0f,
     0x1.09506ap-72f, 0.0f, 0x1.6b5d5ap-46f, 0x1.4b0f7p-4f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2720dep-115f, 0.0f, 0.0f, 0.0f, 0x1.a1b70cp-35f, 0x1.5a5e78p-48f, 0.0f, 0.0f,
     0x1.673cdep-114f, 0.0f, 0.0f, 0x1.8a8d76p-73f, 0.0f, 0x1.b34decp-86f,
     0x1.b76d8cp-18f, 0x1.5f7ef6p-53f, 0x1.c3475ep-95f, 0x1.7e8afap-27f, 0.0f, 0.0f,
     0.0f, 0x1.146562p-72f, 0x1.6529b4p-44f, 0x1.77b79cp-21f, 0.0f, 0x1.e3c23ap-57f,
     0.0f, 0x1.704c0ap-103f, 0x1.9d173ap-4f, 0x1.500cd6p-115f, 0.0f, 0x1.e2846p-83f,
     0x1.83f9eep-94f, 0x1.90a61p-58f, 0.0f, 0.0f, 0.0f, 0x1.674c62p-70f,
     0x1.51849p-39f, 0.0f, 0.0f, 0x1.d4f53ep-42f, 0x1.e54898p-77f, 0x1.06a716p-92f,
     0.0f, 0.0f, 0.0f, 0x1.519c62p-78f, 0.0f, 0x1.e976f2p-21f, 0x1.1ab09ap-42f, 0.0f,
     0x1.8cafe8p-45f, 0.0f, 0x1.730b3ap-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.914126p-94f,
     0x1.f63874p-46f, 0.0f, 0.0f, 0x1.472cc6p-109f, 0.0f, 0x1.546114p-119f,
     0x1.d8684ep-92f, 0x1.ccb57ap-18f, 0x1.50bb8ap-69f, 0x1.292892p-122f,
     0x1.2aae1ep-49f, 0.0f, 0.0f, 0x1.598b5ep-77f, 0x1.83250ap-105f, 0x1.06581ap-5f,
     0x1.6ea5c8p-28f, 0x1.314f64p-19f, 0.0f, 0x1.7be614p-54f, 0x1.01df98p-44f,
     0x1.54fc3ap-30f, 0x1.b5a9cap-23f, 0x1.21f4d4p-83f, 0x1.3aa2dap-120f,
     0x1.8f645p-113f, 0.0f, 0x1.d22b84p-74f, 0.0f, 0x1.e2097ap-64f, 0.0f,
     0x1.1c2b0cp-123f, 0.0f, 0.0f, 0.0f, 0x1.64c0b2p-113f, 0.0f, 0.0f,
     0x1.291892p-101f, 0x1.d258a4p-50f, 0x1.58517ep-113f, 0x1.19c068p-4f, 0.0f,
     0x1.0a76ep-83f, 0x1.1f54c4p-40f, 0x1.c42b8p-25f, 0.0f, 0.0f, 0.0f,
     0x1.ae03c6p-61f, 0x1.8c777ap-4f, 0x1.3b1fa4p-47f, 0.0f, 0.0f, 0.0f,
     0x1.4accc8p-126f, 0x1.96ca66p-107f, 0x1.14ae9p-65f, 0.0f, 0.0f, 0x1.a81d84p-23f,
     0.0f, 0.0f, 0x1.89a8e2p-23f, 0x1.575c44p-99f, 0.0f, 0x1.7a5e28p-13f,
     0x1.181c32p-106f, 0.0f, 0x1.dcb036p-107f, 0.0f, 0x1.b483cp-105f, 0x1.f56b8cp-84f,
     0x1.bf2c0cp-121f, 0x1.7d1cfp-20f, 0x1.54f304p-35f, 0.0f, 0x1.d742cep-79f,
     0x1.ca4c6ep-4f, 0x1.6e7032p-100f, 0x1.1205c4p-78f, 0.0f, 0x1.7fbde8p-52f, 0.0f,
     0x1.e63dc4p-100f, 0x1.06c012p-46f, 0x1.d59bb8p-32f, 0x1.02a2f2p-97f,
     0x1.23b77p-108f, 0x1.806866p-30f, 0x1.e5a412p-113f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.93477ap-58f, 0x1.fe4ea8p-12f, 0.0f, 0.0f, 0.0f, 0x1.f10d88p-95f,
     0x1.37225p-73f, 0x1.6e6612p-55f, 0x1.34cca2p-102f, 0x1.a52b6ep-101f, 0.0f,
     0x1.d1e202p-26f, 0.0f, 0x1.5c037ep-72f, 0.0f, 0.0f, 0x1.cdebc8p-66f, 0.0f,
     0x1.a4e3e8p-26f, 0.0f, 0x1.c50e3ap-106f, 0.0f, 0.0f, 0x1.a7dbdap-29f, 0.0f,
     0x1.6056p-84f, 0x1.5756aap-104f, 0.0f, 0.0f, 0x1.69e92cp-87f, 0.0f,
     0x1.bcfacap-80f, 0.0f, 0x1.2ebfb4p-97f, 0.0f, 0x1.bd717cp-22f, 0x1.96b7dep-20f,
     0.0f, 0x1.a5917p-29f, 0x1.78512ep-126f, 0x1.f9b8a8p-44f, 0x1.357ca4p-23f, 0.0f,
     0x1.b95f22p-80f, 0.0f, 0.0f, 0.0f, 0x1.00d69cp-41f, 0x1.c115eap-84f,
     0x1.3dc23ep-98f, 0.0f, 0x1.079edap-78f, 0x1.a8f4eap-60f, 0.0f, 0x1.ccb478p-65f,
     0.0f, 0x1.98e35p-107f, 0x1.914958p-4f, 0.0f, 0.0f, 0x1.21be56p-31f, 0.0f, 0.0f,
     0x1.e3870ap-71f, 0.0f, 0x1.9885e4p-55f, 0x1.6d33e8p-87f, 0x1.2ac6cep-44f, 0.0f,
     0x1.6af7c4p-36f, 0x1.2dcc66p-80f, 0.0f, 0x1.958f0cp-116f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ac5684p-88f, 0.0f, 0x1.1119aap-72f, 0x1.29e4f2p-69f, 0.0f, 0x1.bffa2ap-36f,
     0x1.24f244p-76f, 0.0f, 0.0f, 0.0f, 0x1.ea3406p-84f, 0x1.4223e4p-109f,
     0x1.dea7ccp-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.631812p-3f, 0x1.353d28p-89f, 0.0f,
     0x1.cab226p-13f, 0.0f, 0.0f, 0x1.1ab612p-57f, 0.0f, 0x1.7f83c8p-96f, 0.0f, 0.0f,
     0x1.81697cp-45f, 0x1.fa6dp-71f, 0.0f, 0x1.2a0684p-18f, 0x1.a2316cp-66f, 0.0f,
     0.0f, 0x1.03e7d4p-27f, 0.0f, 0x1.7d19p-46f, 0.0f, 0x1.3d8208p-67f,
     0x1.8a733ap-66f, 0x1.1f053ap-102f, 0.0f, 0.0f, 0.0f, 0x1.154a56p-56f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.2cc4c2p-15f, 0x1.95cf08p-109f, 0x1.34a978p-123f,
     0x1.fbfadap-110f, 0.0f, 0.0f, 0.0f, 0x1.f7591p-63f, 0x1.7e4e76p-13f, 0.0f,
     0x1.7d1b96p-14f, 0x1.2a443ep-120f, 0x1.59fa02p-9f, 0.0f, 0x1.13e1f2p-32f,
     0x1.de382ap-78f, 0.0f, 0.0f, 0x1.5a64ecp-3f, 0.0f, 0x1.4cd596p-70f, 0.0f,
     0x1.ad8bfcp-111f, 0x1.7d6b8cp-75f, 0x1.5178d2p-108f, 0x1.22e9b8p-61f,
     0x1.a6a7bp-45f, 0x1p0f, 0x1.0b38dap-48f, 0x1.ec6bf2p-17f, 0.0f, 0.0f,
     0x1.65ffa6p-92f, 0.0f, 0x1.f985cp-35f, 0.0f, 0x1.5018eap-27f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c4208ep-98f, 0x1.9329a6p-12f, 0.0f, 0x1.22e804p-27f,
     0x1.ed18c8p-31f, 0x1.cf02eep-27f, 0x1.c3e038p-72f, 0x1.fe6144p-99f,
     0x1.e72bacp-5f, 0.0f, 0x1.6715fcp-23f, 0.0f, 0x1.35aa6cp-17f, 0.0f,
     0x1.bdfa36p-104f, 0.0f, 0x1.da27eap-82f, 0.0f, 0.0f, 0.0f, 0x1.7a5bf6p-103f,
     0.0f, 0x1.85c1bap-55f, 0x1.f505b6p-12f, 0x1.3b396cp-5f, 0.0f, 0.0f,
     0x1.1e9816p-35f, 0.0f, 0x1.9a5cccp-109f, 0.0f, 0x1.dfc866p-97f, 0.0f, 0.0f,
     0x1.7d9212p-53f, 0x1.18ea36p-65f, 0x1.1f3d02p-11f, 0x1.c6a8dp-107f,
     0x1.6e64f4p-117f, 0x1.5b7e06p-58f, 0.0f, 0x1.39907p-68f, 0.0f, 0x1.7c1f4ap-108f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.72323ep-96f, 0.0f, 0.0f, 0.0f, 0x1.aa22aep-5f, 0.0f,
     0x1.3edb44p-11f, 0.0f, 0x1.5c991p-23f, 0x1.2a423p-113f, 0x1.ece3a8p-1f, 0.0f,
     0x1.bf4e84p-100f, 0.0f, 0.0f, 0.0f, 0x1.a39b4ap-21f, 0x1.92389ap-45f,
     0x1.795254p-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3f9e5p-56f, 0.0f, 0.0f,
     0x1.49557cp-32f, 0.0f, 0x1.d3a5d6p-28f, 0x1.88145ap-120f, 0.0f, 0.0f,
     0x1.958a26p-105f, 0.0f, 0x1.b27664p-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0c56a2p-96f, 0.0f, 0x1.edae92p-114f, 0.0f, 0.0f, 0x1.09bd2p-56f, 0.0f, 0.0f,
     0x1.61be4ep-38f, 0x1.57929cp-77f, 0.0f, 0.0f, 0x1.9011fap-41f, 0x1.21847ep-36f,
     0.0f, 0.0f, 0.0f, 0x1.1f8a9ap-1f, 0.0f, 0x1.bfe84ep-85f, 0x1.9ba678p-74f, 0.0f,
     0.0f, 0x1.4b0372p-121f, 0.0f, 0x1.b806b4p-20f, 0x1.7b59b8p-57f, 0.0f, 0.0f,
     0x1p0f, 0.0f, 0x1.0fd10ep-75f, 0.0f, 0x1.f5d00ep-97f, 0.0f, 0x1.bf8b26p-10f,
     0x1.7c6036p-98f, 0x1.7949f2p-50f, 0x1.d7bb78p-39f, 0x1.18e8a2p-106f, 0.0f, 0.0f,
     0.0f, 0x1.bc4222p-78f, 0.0f, 0x1.20beap-32f, 0x1.58952ep-47f, 0.0f, 0.0f,
     0x1.1be3p-77f, 0.0f, 0.0f, 0x1.89632cp-22f, 0.0f, 0x1.14c108p-88f, 0.0f,
     0x1.c45e3ap-74f, 0.0f, 0.0f, 0x1.d42ef4p-126f, 0.0f, 0x1.39c576p-37f, 0.0f, 0.0f,
     0.0f, 0x1.1ac966p-45f, 0x1.c8a12cp-59f, 0.0f, 0x1.637e64p-74f, 0.0f, 0.0f,
     0x1.926e02p-99f, 0x1.7f0024p-2f, 0x1.15767cp-88f, 0x1.cf9302p-37f, 0.0f, 0.0f,
     0x1.c4d04cp-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dd2c2cp-36f, 0.0f, 0x1.72aaeap-19f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.63b57cp-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.2e8218p-96f, 0.0f,
     0x1.77fc1p-80f, 0x1.c4fa54p-68f, 0.0f, 0.0f, 0x1.a57626p-67f, 0x1.8e0354p-46f,
     0x1.794f48p-73f, 0x1.22ad5ap-66f, 0.0f, 0x1.c712fp-28f, 0x1.904efp-74f, 0.0f,
     0x1.b105e2p-57f, 0.0f, 0x1.35f64p-119f, 0x1.0711a4p-1f, 0.0f, 0.0f,
     0x1.3a64fep-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f1cd6cp-56f, 0x1.5414eap-70f,
     0x1.61d636p-115f, 0.0f, 0.0f, 0x1.5590cap-97f, 0.0f, 0x1.26c2ecp-20f, 0.0f,
     0x1.615a4ep-1f, 0.0f, 0x1.f02efap-42f, 0.0f, 0.0f, 0x1.16335ep-40f, 0.0f, 0.0f,
     0.0f, 0x1.d3312ap-70f, 0x1.b37374p-60f, 0.0f, 0.0f, 0x1.41c456p-85f,
     0x1.cfa11p-123f, 0.0f, 0x1.9a71d2p-15f, 0.0f, 0.0f, 0x1.0811fp-122f, 0.0f, 0.0f,
     0.0f, 0x1.6fe56ep-31f, 0.0f, 0.0f, 0x1.f736cap-110f, 0x1.6687d2p-43f,
     0x1.a56b34p-33f
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
            tmp2 = Sleef_finz_powf1_u10purecfma(tmp0, tmp1);
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
    printf("Sleef_finz_powf1_u10purecfma %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_powf1_u10purecfma bench acc %a\n", global_bench_acc);
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
