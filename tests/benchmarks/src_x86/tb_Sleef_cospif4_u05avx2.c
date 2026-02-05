/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_cospif4_u05avx2128.c --function Sleef_cospif4_u05avx2128 \
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
     0.0f, 0x1.9ee094p-6f, 0x1.bbe6f6p-11f, 0.0f, 0x1.9af7c8p-6f, 0x1.51fba4p-13f,
     0.0f, 0x1.529a3p-1f, 0x1.edbbe2p-104f, 0x1.a3bbdp-2f, 0x1.6196eap-7f,
     0x1.c287b6p-61f, 0.0f, 0x1.17a43ap-18f, 0.0f, 0x1.c9d60cp-5f, 0.0f, 0.0f,
     0x1.a72356p-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0b5deap-122f, 0.0f,
     0x1.3631bcp-21f, 0.0f, 0.0f, 0x1.3e4de4p-78f, 0x1.dce3e6p-84f, 0x1.9ec8fp-71f,
     0.0f, 0x1.931a16p-11f, 0.0f, 0.0f, 0.0f, 0x1.5c0ddep-41f, 0x1.a2e2f6p-25f, 0.0f,
     0.0f, 0x1.cc9c6p-93f, 0x1.4d8edep-67f, 0x1.136becp-50f, 0.0f, 0x1.61123p-81f,
     0.0f, 0.0f, 0x1.0676ccp-41f, 0.0f, 0x1.5d8bd4p-45f, 0x1.0cf6dap-55f, 0.0f,
     0x1.756036p-38f, 0.0f, 0.0f, 0x1.42bc58p-70f, 0x1.e0f006p-95f, 0.0f, 0.0f,
     0x1.5a98fap-61f, 0x1.6e75aap-69f, 0x1.bd4faap-90f, 0x1.c3a03p-33f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.40f52ep-91f, 0.0f, 0x1.d5d0dep-85f, 0x1.77afbep-38f, 0.0f,
     0.0f, 0.0f, 0x1.983d04p-51f, 0.0f, 0x1.4e4444p-124f, 0.0f, 0.0f, 0x1.1acc7cp-28f,
     0.0f, 0x1.b68478p-89f, 0x1.feab7ap-62f, 0.0f, 0x1.bb6d04p-51f, 0.0f, 0.0f, 0.0f,
     0x1.12dfa2p-103f, 0.0f, 0.0f, 0x1.42dedp-82f, 0.0f, 0.0f, 0x1.6733e4p-126f,
     0x1.8eb064p-13f, 0.0f, 0.0f, 0x1.71b734p-34f, 0x1.62014cp-47f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.71f57ep-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cbe1f8p-27f, 0x1.88eaaap-69f,
     0.0f, 0x1.ee7072p-91f, 0x1.3e2bc8p-68f, 0x1.eb27d4p-38f, 0.0f, 0x1.29ea62p-15f,
     0.0f, 0x1.829d82p-31f, 0.0f, 0x1.2b5b5ep-113f, 0x1.f3aap-17f, 0.0f,
     0x1.1fd4bap-30f, 0x1p0f, 0x1.936d4p-29f, 0x1.9d609p-62f, 0x1.812d8ep-30f,
     0x1.2cda16p-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.18c18ep-44f, 0.0f, 0x1.e4dc6ap-18f,
     0x1.ac40eep-33f, 0x1.c77dccp-6f, 0x1.6c8148p-10f, 0x1.355de6p-60f, 0.0f, 0.0f,
     0x1.9b7e74p-35f, 0x1.b14c76p-110f, 0.0f, 0.0f, 0.0f, 0x1.0e975cp-21f,
     0x1.ca0fd4p-44f, 0x1.1f8fep-93f, 0.0f, 0x1.c380b6p-17f, 0.0f, 0x1.a14faep-96f,
     0x1.0f94e8p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cf8888p-48f, 0.0f, 0x1.1b6d5ep-60f,
     0x1.7ec736p-40f, 0x1.63ba84p-118f, 0x1.c3dbbap-125f, 0.0f, 0x1.2ffcaap-65f,
     0x1.b82f5cp-101f, 0x1.ee129p-73f, 0.0f, 0x1.db7b2ep-83f, 0.0f, 0x1.b35f48p-106f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.31f3dep-18f, 0x1.688276p-96f, 0x1.7e2bfp-53f,
     0x1.2a9d2p-101f, 0.0f, 0.0f, 0.0f, 0x1.c138d4p-4f, 0.0f, 0x1.0c4766p-93f, 0.0f,
     0x1.4ee3ccp-93f, 0x1.b240a2p-15f, 0x1.8cd85p-28f, 0.0f, 0x1.b9bb0cp-45f, 0.0f,
     0.0f, 0x1.56b23ap-75f, 0.0f, 0x1.281d3p-15f, 0.0f, 0.0f, 0x1.dbdadp-107f,
     0x1.746396p-57f, 0x1.9166fap-102f, 0.0f, 0.0f, 0.0f, 0x1.5cff0ep-65f,
     0x1.d2521ep-73f, 0x1.4f3562p-29f, 0.0f, 0.0f, 0x1.6ec6bp-18f, 0x1.a2f67p-53f,
     0.0f, 0.0f, 0.0f, 0x1.3057bap-117f, 0x1.11eddcp-28f, 0.0f, 0x1.40ab18p-50f,
     0x1.6357b6p-120f, 0.0f, 0x1.24953p-30f, 0.0f, 0.0f, 0x1.0bb696p-64f,
     0x1.169916p-98f, 0x1.63e24ep-49f, 0.0f, 0x1.34db86p-12f, 0x1.08be6cp-113f, 0.0f,
     0.0f, 0x1.5ab0c2p-9f, 0.0f, 0x1.5e265ep-8f, 0.0f, 0x1.9629aap-52f,
     0x1.8c4986p-83f, 0x1.24f8fp-31f, 0x1.f7de88p-34f, 0.0f, 0x1.0d7afcp-103f,
     0x1.accd5p-111f, 0x1.3a0eaep-48f, 0.0f, 0.0f, 0x1.afeb1ap-97f, 0x1.e1965ap-116f,
     0.0f, 0x1.55b22ap-86f, 0x1.6ad87ap-40f, 0x1.994118p-42f, 0x1.323eb6p-106f, 0.0f,
     0x1.573682p-69f, 0x1.59704p-59f, 0x1.423fc4p-10f, 0.0f, 0.0f, 0.0f,
     0x1.28e106p-120f, 0x1.17ac02p-126f, 0x1.be8e82p-46f, 0x1.fad95ap-115f,
     0x1.bf1e0cp-8f, 0x1.39d71ep-28f, 0x1.67460ep-88f, 0.0f, 0.0f, 0.0f, 0x1.dabp-12f,
     0x1.07888cp-28f, 0.0f, 0x1.d6425ap-37f, 0.0f, 0x1.eb591cp-85f, 0x1.7e1c8ep-42f,
     0x1.dd2f4p-5f, 0.0f, 0x1.fa898cp-66f, 0.0f, 0x1.715bdcp-44f, 0.0f, 0.0f,
     0x1.fd610ep-66f, 0.0f, 0x1.7651p-111f, 0x1.7e5c6p-45f, 0.0f, 0.0f,
     0x1.2bf5eap-121f, 0x1.c070bcp-59f, 0x1.775432p-55f, 0.0f, 0x1.1d50fap-82f, 0.0f,
     0x1.1a3feap-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.813bc4p-8f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1e26f8p-119f, 0x1.0a6b96p-98f, 0x1.a68de2p-39f, 0.0f, 0.0f, 0x1.515292p-112f,
     0x1.42bdap-34f, 0.0f, 0x1.0b815cp-71f, 0.0f, 0x1.8df4fep-84f, 0.0f, 0.0f, 0.0f,
     0x1.1b1c44p-69f, 0x1.d4d9a4p-119f, 0.0f, 0x1.8ac2aap-81f, 0.0f, 0x1.8efd76p-3f,
     0.0f, 0x1.0a6426p-122f, 0.0f, 0.0f, 0x1.aec592p-5f, 0x1.af9684p-70f,
     0x1.27ce7p-19f, 0.0f, 0.0f, 0x1.205d8p-74f, 0x1.b600a6p-104f, 0x1.32eca8p-121f,
     0x1.a1ea02p-106f, 0x1.2036b8p-86f, 0x1.dd7762p-23f, 0.0f, 0.0f, 0x1.b7e2d4p-94f,
     0x1.483abp-101f, 0.0f, 0x1.70c64ep-30f, 0x1.6a5418p-5f, 0x1.936434p-59f, 0.0f,
     0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.c1253ep-117f, 0x1.aff528p-47f, 0.0f, 0.0f,
     0x1.f71c94p-67f, 0.0f, 0x1.6eb24p-74f, 0.0f, 0x1.44b908p-66f, 0x1.7a0c4ep-104f,
     0x1.885cf2p-51f, 0x1.06ee8cp-22f, 0x1.00c1fep-54f, 0x1.c2ec08p-12f, 0.0f, 0.0f,
     0x1.795198p-1f, 0x1.7278d2p-2f, 0.0f, 0x1.d43d82p-121f, 0x1.195d2ep-111f,
     0x1.c04a6ap-86f, 0x1.ae7ce8p-40f, 0.0f, 0x1.302eaap-37f, 0.0f, 0x1.baccbep-111f,
     0.0f, 0x1.f8b314p-22f, 0x1.ab87p-8f, 0x1.4e8c64p-111f, 0.0f, 0x1.8cfebep-102f,
     0x1.ddf674p-29f, 0.0f, 0.0f, 0x1.580aa8p-28f, 0.0f, 0.0f, 0x1.0f5196p-33f, 0.0f,
     0x1.73f566p-9f, 0x1.b8e214p-94f, 0x1.8fed02p-87f, 0.0f, 0.0f, 0.0f,
     0x1.3fa6b6p-113f, 0x1.e558cp-11f, 0.0f, 0x1.5886aap-101f, 0.0f, 0.0f,
     0x1.f33906p-86f, 0x1.72d8bep-6f, 0.0f, 0.0f, 0.0f, 0x1.2e202ap-72f,
     0x1.84b994p-26f, 0.0f, 0.0f, 0.0f, 0x1.4ab772p-100f, 0.0f, 0x1.699c5cp-7f,
     0x1.c60286p-24f, 0x1.6be928p-19f, 0x1.5bb5dap-88f, 0x1.936e76p-118f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.282dc2p-114f, 0x1.9d69bp-35f, 0x1.58b604p-112f,
     0x1.85396ap-79f, 0.0f, 0x1.5d776ap-121f, 0x1.3d5ae8p-55f, 0x1.f4f0cap-84f, 0.0f,
     0.0f, 0.0f, 0x1.9c92fp-107f, 0x1.d81feep-23f, 0x1.e0f60ep-48f, 0.0f,
     0x1.9d8718p-89f, 0x1.83b20cp-70f, 0x1.2201cap-53f, 0x1.b1591cp-51f,
     0x1.632ae2p-46f, 0.0f, 0x1.67d526p-125f, 0x1.d7baecp-93f, 0x1.caa082p-58f,
     0x1.027e84p-109f, 0x1.b034fp-69f, 0x1.5175b6p-123f, 0.0f, 0x1.e4e33ep-5f, 0.0f,
     0.0f, 0.0f, 0x1.17d8p-108f, 0x1.73e614p-49f, 0.0f, 0x1.8879fep-108f, 0.0f, 0.0f,
     0x1.d751bep-36f, 0.0f, 0.0f, 0x1.7883fp-66f, 0.0f, 0.0f, 0x1.a045a6p-84f, 0.0f,
     0.0f, 0.0f, 0x1.6e7a02p-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b8501ep-30f,
     0.0f, 0x1.922a2cp-58f, 0x1.bb34cp-18f, 0.0f, 0.0f, 0.0f, 0x1.e75538p-31f,
     0x1.694a2ap-51f, 0x1.f9d16ap-53f, 0x1.28c12ap-9f, 0x1.ff53eep-35f, 0.0f, 0.0f,
     0x1.ab727ap-33f, 0.0f, 0x1.ba0848p-96f, 0x1.261c92p-72f, 0.0f, 0x1.c6522cp-13f,
     0x1.8818a4p-108f, 0x1.b3cd46p-11f, 0x1.8ca75p-32f, 0.0f, 0.0f, 0x1.5b14ccp-57f,
     0.0f, 0.0f, 0x1.87af9p-113f, 0x1.800e42p-21f, 0.0f, 0.0f, 0x1.44ca72p-25f, 0.0f,
     0.0f, 0x1.806a92p-24f, 0x1.dae43ap-75f, 0.0f, 0x1.6785b2p-46f, 0x1.da2f58p-23f,
     0.0f, 0x1.3e502ep-1f, 0.0f, 0x1.c7bc84p-38f, 0.0f, 0x1p0f, 0x1.d6e10ap-18f, 0.0f,
     0x1.e22e04p-7f, 0.0f, 0x1.71f742p-84f, 0x1.9f7f64p-1f, 0x1.0587fp-102f, 0.0f,
     0x1.f9bf72p-68f, 0.0f, 0x1.e8f6d8p-15f, 0x1.3f5a0cp-72f, 0.0f, 0x1.dd1d6p-1f,
     0x1.cb9164p-33f, 0.0f, 0.0f, 0x1.07f0c4p-13f, 0x1.43ae8ap-53f, 0x1.2dd24p-112f,
     0x1.a91198p-84f, 0.0f, 0x1.95ebe6p-98f, 0x1.aaa8b4p-103f, 0.0f, 0x1.f0999cp-122f,
     0.0f, 0.0f, 0x1.ec367cp-4f, 0x1.4d944ap-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e67feep-48f, 0x1.8c2328p-42f, 0x1.83c3a6p-61f, 0.0f, 0x1.192e7cp-32f, 0.0f,
     0x1.6eb06ap-18f, 0.0f, 0x1.b8a37ap-66f, 0x1.ca2c56p-61f, 0.0f, 0x1.282a42p-9f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4f09bap-13f, 0x1.bb6b12p-124f,
     0.0f, 0.0f, 0x1.632fap-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.31cef4p-56f,
     0x1.90f566p-70f, 0x1.51ed28p-51f, 0.0f, 0x1.113b3cp-90f, 0x1.81a8d4p-50f,
     0x1.b4cc9cp-28f, 0x1.48519ep-18f, 0x1.34e528p-35f, 0.0f, 0x1.52c88ap-26f, 0.0f,
     0x1.fc2a7ep-32f, 0x1.b6bf9cp-30f, 0x1.d149a8p-37f, 0x1.85d6b6p-52f,
     0x1.126794p-78f, 0.0f, 0x1.bd7c5p-19f, 0.0f, 0x1.ea8a94p-22f, 0x1.26f44ep-99f,
     0.0f, 0x1.eb220ap-47f, 0.0f, 0.0f, 0x1.81bcaep-45f, 0.0f, 0.0f, 0x1.8bc66ep-24f,
     0x1.793d86p-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.92db1ap-120f,
     0.0f, 0x1.842e6p-38f, 0.0f, 0.0f, 0x1.9bbb96p-52f, 0.0f, 0.0f, 0.0f,
     0x1.7c6668p-10f, 0x1.956804p-48f, 0x1.aab9fep-23f, 0x1.d03fap-124f, 0.0f, 0.0f,
     0.0f, 0x1.48c786p-66f, 0x1.d53e9cp-110f, 0x1.e1ed2ap-32f, 0x1.b12efp-100f, 0.0f,
     0x1.1efa2ep-47f, 0x1.f4954ep-50f, 0x1.eb686ap-39f, 0x1.8479b6p-106f,
     0x1.e12214p-126f, 0x1.1f5a3ep-31f, 0x1.41b58ep-14f, 0.0f, 0x1.b31442p-110f,
     0x1.f61262p-96f, 0.0f, 0x1.4b49acp-48f, 0.0f, 0x1.0e9a96p-122f, 0.0f,
     0x1.e80822p-112f, 0x1.67290ep-44f, 0x1.7fda32p-2f, 0x1.84a9eep-20f,
     0x1.b9f9d4p-25f, 0.0f, 0x1.673282p-123f, 0x1.f512a4p-64f, 0x1.ad2d06p-73f, 0.0f,
     0.0f, 0x1.da9496p-87f, 0.0f, 0.0f, 0x1.8fea2cp-30f, 0x1.55b98ap-106f, 0.0f,
     0x1.8cad54p-8f, 0x1.eada0ap-77f, 0.0f, 0.0f, 0x1.180796p-4f, 0.0f,
     0x1.78aa22p-15f, 0.0f, 0.0f, 0x1.c7cabap-99f, 0.0f, 0x1.d4c4e2p-16f, 0.0f,
     0x1.12ea2ap-117f, 0.0f, 0x1.3881a2p-42f, 0x1.77af7cp-57f, 0x1.faf9a6p-56f,
     0x1.a1081p-58f, 0x1.d2b434p-36f, 0.0f, 0x1.6ff4c4p-117f, 0.0f, 0.0f,
     0x1.5d8bcep-10f, 0.0f, 0.0f, 0.0f, 0x1.cf72p-36f, 0.0f, 0.0f, 0x1.8566fp-106f,
     0x1.e7088ap-23f, 0x1.2fef8p-6f, 0.0f, 0x1.e1ab22p-7f, 0x1.79c26ep-83f, 0.0f,
     0.0f, 0x1.294a22p-125f, 0.0f, 0.0f, 0x1.e35514p-108f, 0x1.a63fbap-24f,
     0x1.fd2662p-81f, 0.0f, 0.0f, 0x1.27439cp-115f, 0x1.4bc888p-77f, 0.0f, 0.0f,
     0x1.2272e6p-12f, 0x1.38fddp-60f, 0.0f, 0x1.ce3acp-41f, 0.0f, 0.0f, 0.0f,
     0x1.da832p-2f, 0.0f, 0.0f, 0.0f, 0x1.eae0a8p-5f, 0x1.fff47ap-50f,
     0x1.7a04aep-41f, 0x1.daa316p-21f, 0.0f, 0.0f, 0x1.35ce0ep-108f, 0x1.ef5e7ep-116f,
     0x1.a5c31ep-18f, 0x1.5e463ap-5f, 0x1.40a9bep-124f, 0.0f, 0x1.b2282ep-66f, 0.0f,
     0.0f, 0.0f, 0x1.e809f6p-76f, 0x1.3ab896p-49f, 0x1.538506p-5f, 0.0f, 0.0f, 0.0f,
     0x1.083ef8p-31f, 0x1.f57beap-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.236b9ep-86f,
     0.0f, 0x1.8db4dep-81f, 0.0f, 0.0f, 0.0f, 0x1.48960cp-4f, 0.0f, 0x1.dc584ep-90f,
     0.0f, 0x1.459818p-78f, 0x1.cf12c8p-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b5852p-16f,
     0x1.4af22ep-19f, 0x1.28159ep-71f, 0x1.c6236p-45f, 0.0f, 0.0f, 0x1.d64228p-91f,
     0.0f, 0.0f, 0x1.f05432p-40f, 0.0f, 0.0f, 0x1.2a97d6p-4f, 0x1.800022p-87f, 0.0f,
     0x1.b6dd94p-98f, 0.0f, 0.0f, 0x1.4a9406p-59f, 0x1.34fda2p-61f, 0x1.fdf476p-41f,
     0.0f, 0x1.e3bcb2p-89f, 0x1.86e7ep-68f, 0x1.2982fp-104f, 0.0f, 0.0f,
     0x1.b7ab96p-120f, 0.0f, 0x1.898fdcp-29f, 0x1.34fe76p-96f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.597d7p-74f, 0.0f, 0x1.ff0784p-116f, 0.0f, 0x1.bf848cp-104f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.5bf2f8p-24f, 0.0f, 0.0f, 0x1.1defbep-34f, 0.0f,
     0x1.88feeep-94f, 0x1.7ea4dcp-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dc013ap-79f,
     0.0f, 0.0f, 0x1.876ffep-102f, 0x1.1984dap-4f, 0.0f, 0.0f, 0.0f, 0x1.6b9dd8p-19f,
     0x1.a50312p-77f, 0.0f, 0x1.f39664p-25f, 0.0f, 0x1.607d12p-107f, 0x1p0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.71cd2ap-53f, 0x1.70f588p-70f, 0x1.126128p-84f, 0.0f,
     0x1.bf54c2p-114f, 0x1.9be4dcp-90f, 0x1.8fe7e4p-92f, 0x1.46ef9ep-60f,
     0x1.cdf248p-60f, 0x1.e9b0bp-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.915b06p-69f,
     0x1.bb3c08p-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8c6f16p-107f, 0.0f, 0x1.b26dbcp-2f,
     0x1.5ab3ecp-22f, 0.0f, 0x1.9af8e2p-27f, 0x1.7854cep-65f, 0.0f, 0x1.fd297p-40f,
     0x1.dd0c12p-122f, 0.0f, 0.0f, 0x1.7b0b8cp-76f, 0x1.36a08cp-72f, 0.0f,
     0x1.6bf816p-55f, 0.0f, 0x1.c98e48p-28f, 0x1.84992p-36f, 0.0f, 0x1.8787fcp-126f,
     0.0f, 0x1.6eb09ap-56f, 0.0f, 0x1.c2f9cep-19f, 0.0f, 0.0f, 0x1.544804p-86f,
     0x1.8fa122p-9f, 0x1.cdaa42p-104f, 0.0f, 0x1.8d69eap-117f, 0.0f, 0.0f,
     0x1.780226p-111f, 0x1.9012fcp-55f, 0x1.153f1p-63f, 0x1.99777ap-25f, 0.0f,
     0x1.554c34p-30f, 0x1.65127ap-87f, 0.0f, 0x1.54eb54p-95f, 0.0f, 0x1p0f,
     0x1.8ca33ap-23f, 0x1.2f2e3ap-83f, 0.0f, 0x1.7483fp-89f, 0.0f, 0x1.51f038p-100f,
     0.0f, 0.0f, 0x1.96857ep-101f, 0.0f, 0x1.cfbba8p-70f, 0.0f, 0x1.63bef4p-80f, 0.0f,
     0.0f, 0x1.4f714ap-106f, 0x1.4b888p-63f, 0.0f, 0x1.01320cp-7f, 0.0f,
     0x1.0726eep-70f, 0x1.84dc32p-27f, 0x1.5de476p-9f, 0.0f, 0.0f, 0x1.fa3314p-103f,
     0x1.9dcae8p-25f, 0.0f, 0x1.c89e2ep-3f, 0x1.2853b4p-93f, 0.0f, 0x1.9607fcp-35f,
     0x1.367b6cp-70f, 0x1.f3278ap-57f, 0.0f, 0x1.367944p-110f, 0x1.c6bfb2p-92f,
     0x1.f15988p-114f, 0.0f, 0x1.3a8feep-28f, 0x1.14b182p-101f, 0.0f,
     0x1.6b001cp-114f, 0.0f, 0x1.3e3bc4p-90f, 0.0f, 0x1.e0257ep-58f, 0.0f, 0.0f,
     0x1.668b8cp-113f, 0x1.a0ab84p-88f, 0x1.f4b45p-115f, 0.0f, 0x1.64fefp-13f,
     0x1.18e062p-108f, 0.0f, 0x1.16d07ep-64f, 0x1.1479b8p-113f, 0.0f, 0.0f, 0.0f,
     0x1.6cd1f4p-73f, 0x1.8944e2p-71f, 0.0f, 0x1.30d95p-65f
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
            tmp1 = Sleef_cospif4_u05avx2128(tmp0);
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
    printf("Sleef_cospif4_u05avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_cospif4_u05avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
