/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_coshf1_u10purecfma.c --function \
 *     Sleef_coshf1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.2b327cp-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.edd018p-115f, 0x1.803f7ap-55f,
     0x1.50514cp-48f, 0x1.92692p-23f, 0.0f, 0.0f, 0.0f, 0x1.1fece2p-95f, 0.0f, 0.0f,
     0x1.9bea9ap-71f, 0x1.d4d822p-100f, 0.0f, 0x1.c766d2p-54f, 0x1.ac2772p-92f, 0.0f,
     0x1.83cb34p-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c7dbd8p-84f, 0x1.229e3ap-47f, 0.0f,
     0.0f, 0x1.07dfb4p-84f, 0.0f, 0.0f, 0x1.50775ep-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e6817ap-41f, 0x1.1f6c46p-38f, 0x1.357084p-98f, 0x1.21078ap-69f,
     0x1.86240cp-35f, 0x1.961746p-72f, 0x1.1d106cp-3f, 0.0f, 0x1.838dc2p-70f, 0.0f,
     0.0f, 0x1.5f478p-47f, 0.0f, 0.0f, 0x1.b17ae6p-13f, 0.0f, 0x1.631df8p-34f,
     0x1.7aa5acp-41f, 0.0f, 0x1.ce206ep-96f, 0x1.c9c088p-70f, 0.0f, 0x1.3a950ap-55f,
     0x1.8cc0ap-16f, 0x1.596648p-44f, 0.0f, 0x1.a76742p-99f, 0x1.0ba63cp-25f, 0.0f,
     0x1.e53156p-31f, 0.0f, 0.0f, 0x1.ee5388p-85f, 0x1.54bca4p-115f, 0.0f,
     0x1.74f318p-120f, 0x1.50ba5cp-64f, 0x1.396f7ep-36f, 0.0f, 0.0f, 0x1.1ff9bcp-14f,
     0x1.2fc12ep-34f, 0x1.b41458p-105f, 0x1.de3622p-95f, 0x1.f90a1ap-50f, 0.0f, 0.0f,
     0x1.58b7cp-53f, 0.0f, 0.0f, 0x1.73a284p-105f, 0x1.31853cp-30f, 0x1.15fcf8p-48f,
     0.0f, 0.0f, 0x1.620a96p-78f, 0x1.6538acp-7f, 0x1.5f2164p-64f, 0.0f,
     0x1.e6c6dap-36f, 0x1.945ceep-70f, 0.0f, 0x1.4d1e24p-39f, 0x1.ee54a4p-80f, 0.0f,
     0x1.7baef4p-29f, 0.0f, 0x1.b9484ap-22f, 0.0f, 0x1.e503e2p-12f, 0x1p0f,
     0x1.c86482p-44f, 0.0f, 0.0f, 0x1.7101e2p-104f, 0x1.b0151ep-34f, 0.0f,
     0x1.ad3648p-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.17045ap-93f, 0.0f,
     0x1.022c24p-100f, 0.0f, 0.0f, 0x1.816014p-48f, 0x1.ef8a64p-15f, 0x1.56ccf2p-45f,
     0.0f, 0x1.66aca2p-78f, 0x1.500416p-89f, 0x1.e3a33ep-114f, 0x1.4ee8a6p-118f, 0.0f,
     0x1.1b9084p-15f, 0.0f, 0x1.16ff9p-64f, 0x1.71a062p-22f, 0.0f, 0x1.3a36b4p-49f,
     0.0f, 0x1.b24e12p-125f, 0.0f, 0.0f, 0.0f, 0x1.89b586p-19f, 0x1.459646p-29f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.340f94p-63f, 0x1.db6d8p-46f, 0.0f, 0.0f, 0.0f,
     0x1.69c20ap-91f, 0x1.5155d2p-111f, 0.0f, 0.0f, 0.0f, 0x1.2700d2p-91f, 0.0f, 0.0f,
     0x1.93a9acp-28f, 0x1.ee42c4p-95f, 0.0f, 0x1.7d0a06p-22f, 0x1.412124p-1f, 0.0f,
     0x1.caf38p-10f, 0.0f, 0.0f, 0.0f, 0x1.f92822p-7f, 0.0f, 0x1.975cf8p-60f, 0.0f,
     0.0f, 0.0f, 0x1.8a4226p-89f, 0x1.19a238p-30f, 0x1.393c82p-21f, 0.0f,
     0x1.3ab442p-105f, 0x1.df1d24p-106f, 0x1.ded498p-13f, 0.0f, 0x1.d503e8p-47f, 0.0f,
     0.0f, 0x1.a49908p-12f, 0x1.7a524p-24f, 0x1.c22682p-7f, 0x1.738b26p-107f,
     0x1.d3fe98p-26f, 0.0f, 0x1.63f92ep-29f, 0.0f, 0.0f, 0.0f, 0x1.67e178p-125f,
     0x1.6cf254p-88f, 0x1.fb3e68p-19f, 0x1.618064p-36f, 0x1.12935cp-30f, 0.0f,
     0x1.a30742p-102f, 0.0f, 0.0f, 0x1.2e5092p-101f, 0x1.86c0ecp-78f, 0x1.299568p-48f,
     0x1.e6972cp-101f, 0.0f, 0x1.a24c7ep-41f, 0x1.818f86p-26f, 0x1.55ebdcp-105f,
     0x1.4d03ccp-99f, 0.0f, 0x1.8c63d2p-111f, 0.0f, 0x1.83efbcp-23f, 0.0f,
     0x1.f1f212p-53f, 0x1.358508p-71f, 0x1.f4d0d8p-107f, 0x1.1f0558p-35f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.9915f6p-119f, 0.0f, 0x1.1eae08p-65f, 0.0f, 0x1.3767dp-120f, 0.0f,
     0x1.804a3p-114f, 0.0f, 0.0f, 0x1.f03d8p-1f, 0x1.97a6acp-42f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c35a5ep-16f, 0.0f, 0x1.ada74cp-105f, 0x1.f14e3ap-72f, 0x1.60822ap-109f,
     0.0f, 0.0f, 0x1.e268dap-77f, 0x1.5f64e8p-61f, 0x1.8aa02ap-5f, 0.0f, 0.0f, 0.0f,
     0x1.b7281ap-42f, 0x1.c73492p-85f, 0x1.b0369p-31f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d79272p-100f, 0x1.b3b7a4p-77f, 0.0f, 0x1.dc468ap-46f, 0x1.c942cep-70f, 0.0f,
     0x1.fe4612p-124f, 0x1.708b32p-46f, 0x1.8afe08p-66f, 0.0f, 0x1.a80ea2p-15f, 0.0f,
     0x1.a1fe96p-122f, 0.0f, 0x1.778f52p-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.32cc8ep-53f,
     0.0f, 0.0f, 0.0f, 0x1.7366cep-3f, 0x1.93bea2p-22f, 0.0f, 0.0f, 0x1.9a5954p-8f,
     0x1.e5d984p-119f, 0x1.e34fe4p-18f, 0.0f, 0.0f, 0x1.2b508cp-77f, 0x1.595adep-69f,
     0.0f, 0x1.e13892p-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ff3008p-35f,
     0.0f, 0x1.0b5af2p-61f, 0.0f, 0.0f, 0.0f, 0x1.b34e3cp-50f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.780914p-102f, 0x1.ebab3ep-105f, 0x1.640da4p-85f, 0.0f,
     0x1.9f6e42p-109f, 0.0f, 0x1.6896cap-46f, 0.0f, 0.0f, 0x1.f24c34p-8f, 0.0f,
     0x1.11fd6p-52f, 0x1.2d115cp-83f, 0.0f, 0x1.7dbadcp-36f, 0.0f, 0.0f,
     0x1.e97e3p-125f, 0x1.94f116p-24f, 0x1.a7687p-30f, 0x1.3b44dcp-14f, 0.0f,
     0x1.3dd25ep-10f, 0x1.6fecbcp-118f, 0.0f, 0.0f, 0x1.ce3294p-17f, 0x1.517892p-2f,
     0.0f, 0.0f, 0x1.3f0aaep-124f, 0.0f, 0.0f, 0.0f, 0x1.9b43bap-2f, 0.0f, 0.0f, 0.0f,
     0x1.b1b076p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.50fb62p-21f, 0x1.d9accep-63f,
     0x1.7151aap-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b0b2cep-86f, 0x1.04bad4p-26f,
     0x1.66cfdep-106f, 0.0f, 0.0f, 0x1.234ec8p-73f, 0x1.65a12ep-103f, 0.0f, 0.0f,
     0.0f, 0x1.da34e8p-61f, 0.0f, 0x1.8e291cp-123f, 0x1.48db8ap-108f,
     0x1.08fdcap-120f, 0.0f, 0x1.421428p-2f, 0.0f, 0x1.de6e82p-54f, 0.0f, 0.0f,
     0x1.3578dep-123f, 0x1.e92b0cp-12f, 0x1.4eedd2p-72f, 0.0f, 0.0f, 0x1.3e4b9p-62f,
     0x1.75dee2p-57f, 0.0f, 0x1.3c8e62p-50f, 0x1.3d083p-110f, 0x1.05b5f2p-103f, 0.0f,
     0.0f, 0x1.707b32p-63f, 0.0f, 0x1.7d0022p-39f, 0.0f, 0x1.cd179ep-71f, 0.0f,
     0x1.7013ep-84f, 0x1.9be456p-70f, 0.0f, 0x1.cbf47ap-83f, 0x1.5b2e64p-90f,
     0x1.83aebep-104f, 0x1.4b4522p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b6600ep-101f, 0.0f, 0x1.6d0858p-117f, 0.0f, 0x1.7f4586p-13f, 0x1.7d4318p-29f,
     0x1.0963f6p-41f, 0x1.ba44d2p-35f, 0x1.058904p-19f, 0x1.ab2334p-100f,
     0x1.0bfad8p-125f, 0.0f, 0.0f, 0.0f, 0x1.2226e4p-81f, 0x1.22d3e4p-90f, 0.0f,
     0x1p0f, 0x1.dfaba4p-125f, 0.0f, 0x1.858264p-92f, 0x1p0f, 0.0f, 0x1.1062e4p-89f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b57d7p-49f, 0x1.d57c34p-33f, 0.0f, 0x1.5d8044p-43f,
     0x1.471884p-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8b67e4p-64f, 0x1.84e3f8p-91f,
     0x1.05e002p-91f, 0x1.d8009p-109f, 0.0f, 0.0f, 0x1.093fp-9f, 0.0f,
     0x1.b502b2p-61f, 0x1.39acap-3f, 0x1.835ab8p-75f, 0.0f, 0.0f, 0x1.fb0dp-20f,
     0x1.ee0edep-98f, 0x1.1bb982p-124f, 0.0f, 0x1.d5e2a6p-102f, 0.0f, 0x1.fa0cf6p-40f,
     0x1.a5eadp-90f, 0x1.2887f4p-54f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.af742cp-64f,
     0x1.08be88p-110f, 0.0f, 0.0f, 0x1.e52b5ep-113f, 0x1.6b7ba4p-47f, 0.0f,
     0x1.d480bp-107f, 0x1.f99bf6p-99f, 0x1.6abdcp-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1bb308p-114f, 0x1.fb85fep-85f, 0.0f, 0x1.a7cd2cp-111f, 0x1.735c2cp-64f,
     0x1.0c6a06p-29f, 0.0f, 0.0f, 0x1.248c94p-33f, 0.0f, 0x1.87b8b6p-67f,
     0x1.3c9d1p-50f, 0x1.cd17a6p-49f, 0x1.a70af6p-74f, 0.0f, 0x1.84063ap-72f, 0.0f,
     0x1.9a63eap-83f, 0x1.66d42cp-54f, 0.0f, 0.0f, 0x1.3f90dep-100f, 0.0f, 0.0f, 0.0f,
     0x1.d02866p-31f, 0x1.74e58cp-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b0e86p-115f,
     0x1.2e578ap-76f, 0x1.cf050cp-45f, 0.0f, 0x1.5efeap-47f, 0x1.876dp-54f, 0.0f,
     0x1.ea28aep-29f, 0x1.2e5dd6p-115f, 0x1.caeca4p-111f, 0x1.42f132p-126f,
     0x1.132c9ep-33f, 0x1.e0e67cp-61f, 0x1.3640c4p-96f, 0x1.80a4e8p-119f,
     0x1.540b24p-76f, 0.0f, 0x1.2f8f28p-11f, 0.0f, 0x1.cf0caep-62f, 0x1.80d314p-24f,
     0.0f, 0x1.e92cc8p-124f, 0x1.657a58p-97f, 0.0f, 0.0f, 0x1.8689ep-51f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.cc835ap-53f, 0x1.f83438p-116f, 0.0f, 0.0f, 0.0f,
     0x1.2ca51ep-116f, 0.0f, 0x1.e5617p-63f, 0.0f, 0.0f, 0x1.a8ed02p-87f, 0.0f,
     0x1.417f1ep-85f, 0x1.739e6p-103f, 0x1.6b213ap-118f, 0x1.9eaad4p-105f, 0.0f,
     0x1.64239ep-31f, 0.0f, 0.0f, 0.0f, 0x1.5e15p-79f, 0x1.5b8962p-2f, 0.0f, 0.0f,
     0x1.cb59e8p-76f, 0.0f, 0.0f, 0.0f, 0x1.0b4978p-30f, 0.0f, 0x1.4588b6p-13f, 0.0f,
     0.0f, 0x1.1072aap-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.510f32p-40f, 0.0f,
     0x1.6f7ed2p-40f, 0x1.dfc7cap-122f, 0.0f, 0.0f, 0x1.a6f79p-126f, 0.0f, 0.0f,
     0x1.08caf2p-84f, 0.0f, 0.0f, 0.0f, 0x1.6c9628p-4f, 0.0f, 0x1.6a4f92p-38f, 0.0f,
     0x1.b3ee4ep-126f, 0.0f, 0.0f, 0x1.4237dp-119f, 0x1.3f56b6p-81f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3e741cp-3f,
     0x1.1644ccp-101f, 0x1.689b2ep-4f, 0.0f, 0x1.4ddafp-122f, 0x1.3efb5ep-107f,
     0x1.2e10eep-107f, 0.0f, 0.0f, 0x1.d91766p-45f, 0x1.88224ep-24f, 0x1.3fa7e4p-19f,
     0.0f, 0.0f, 0x1.73a6a2p-36f, 0.0f, 0x1.ea036ep-37f, 0.0f, 0.0f, 0x1.5ebdacp-33f,
     0x1.1155e4p-84f, 0x1.ae5e4ap-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d8c134p-80f, 0x1.a5012cp-1f, 0.0f, 0.0f, 0x1.21433ep-113f, 0.0f,
     0x1.86403ap-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.778e8ap-10f, 0.0f, 0x1.5bcc1ep-107f,
     0x1.101c14p-87f, 0.0f, 0.0f, 0x1.d38094p-122f, 0x1.52e232p-44f, 0.0f,
     0x1.605344p-31f, 0x1.5dddf4p-9f, 0x1.0a09cep-121f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e266dp-14f, 0.0f, 0.0f, 0x1.0ff5dp-57f, 0x1.afaf7ep-86f, 0x1.075d5cp-3f,
     0x1.83b12p-29f, 0x1.5474d8p-30f, 0x1.6c813ep-123f, 0.0f, 0.0f, 0.0f,
     0x1.a387d4p-114f, 0.0f, 0x1.deab3ap-46f, 0x1.e16972p-71f, 0.0f, 0x1.e8243cp-1f,
     0.0f, 0.0f, 0.0f, 0x1.8c727p-78f, 0x1.6d8572p-111f, 0.0f, 0.0f, 0x1.eb2daep-36f,
     0x1.0da11p-67f, 0.0f, 0x1.a79962p-46f, 0.0f, 0x1.9c33eep-40f, 0.0f,
     0x1.00ca16p-85f, 0x1.1bbddap-4f, 0x1.76171ep-14f, 0x1.a715f4p-113f,
     0x1.1113cep-93f, 0x1.fe6eap-51f, 0.0f, 0x1.df216cp-45f, 0x1.595f3p-103f, 0.0f,
     0.0f, 0x1.319624p-10f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.82d3fap-90f, 0.0f,
     0x1.b09e0cp-108f, 0x1.22146cp-75f, 0x1.4ba2fap-126f, 0x1.8f6bb8p-48f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.2b4de2p-60f, 0.0f, 0x1.b0c996p-61f, 0.0f, 0x1.6d110ap-29f,
     0x1.7d706ap-5f, 0.0f, 0.0f, 0x1.ef4e14p-79f, 0.0f, 0.0f, 0.0f, 0x1.64d48p-83f,
     0x1.dbddcep-69f, 0x1.2c437cp-59f, 0.0f, 0.0f, 0.0f, 0x1.356082p-92f,
     0x1.337016p-28f, 0x1.dc5bdep-31f, 0x1.5e617cp-80f, 0.0f, 0x1.3d1498p-79f,
     0x1.ce33cap-117f, 0x1.daf278p-32f, 0x1.11a164p-120f, 0x1.32dc86p-111f,
     0x1.16061cp-14f, 0x1.70efbp-5f, 0.0f, 0.0f, 0x1.7f4a18p-116f, 0.0f,
     0x1.ba13b2p-94f, 0x1.ba4d9ap-14f, 0x1.156496p-126f, 0x1.309e34p-8f, 0.0f,
     0x1.40f626p-88f, 0.0f, 0x1.c4acep-34f, 0x1.ff4ea8p-80f, 0x1.422afep-103f,
     0x1.407c36p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4b6f68p-23f, 0x1.851098p-77f, 0.0f,
     0.0f, 0.0f, 0x1.6bd05ap-12f, 0.0f, 0.0f, 0x1.13766p-118f, 0x1.f4a6a4p-88f, 0.0f,
     0x1.186d0ep-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4d4c16p-68f, 0.0f,
     0x1.614e58p-13f, 0x1.f95acp-97f, 0x1.87d04ap-77f, 0.0f, 0.0f, 0x1.58f1c6p-126f,
     0.0f, 0x1.95ab22p-110f, 0x1.79b4e8p-29f, 0x1.ef11bcp-38f, 0.0f, 0.0f, 0.0f,
     0x1.82feacp-120f, 0x1.ef8aacp-109f, 0x1.5532bcp-103f, 0x1.3fdbe6p-104f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.37cc6ep-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f586f6p-25f, 0.0f, 0.0f, 0x1.f9ba5ap-113f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1303b8p-8f, 0.0f, 0x1.5086dp-15f, 0.0f, 0.0f, 0x1.b73fbcp-99f, 0.0f, 0.0f,
     0.0f, 0x1.0bcb02p-62f, 0.0f, 0.0f, 0x1.46f742p-56f, 0x1.d9c818p-38f,
     0x1.e0d86cp-105f, 0x1.99550ap-30f, 0.0f, 0.0f, 0.0f, 0x1.d30418p-54f,
     0x1.e26c84p-112f, 0.0f, 0x1.b75a6ep-6f, 0.0f, 0x1.529738p-27f, 0.0f, 0.0f,
     0x1.d53c3ap-72f, 0x1.c4c2cp-86f, 0x1.6573b4p-77f, 0.0f, 0.0f, 0.0f,
     0x1.50a124p-72f, 0x1.470a7ap-118f, 0.0f, 0x1.fb6d56p-75f, 0x1.c1369ap-12f, 0.0f,
     0x1.a8b246p-96f, 0.0f, 0x1.63a9dep-31f, 0.0f, 0.0f, 0x1.9c95bep-78f,
     0x1.2c9b18p-13f, 0.0f, 0.0f, 0x1.18ef12p-62f, 0x1.50d6b8p-72f, 0x1.07aa6p-112f,
     0x1.a9a4e8p-60f, 0.0f, 0.0f, 0x1.647db6p-39f, 0x1.571ffcp-81f, 0x1.bed01p-18f,
     0.0f, 0x1.f13d8p-9f, 0x1.c3e80ap-41f, 0.0f, 0.0f, 0x1.edc4a6p-68f, 0.0f, 0.0f,
     0x1.a240bap-17f, 0x1.616744p-60f, 0x1.89807ap-11f, 0.0f, 0.0f, 0x1.cd422cp-72f,
     0x1.ca4b58p-74f, 0.0f, 0.0f, 0x1.4122fcp-51f, 0x1.3a1a9ep-83f, 0.0f,
     0x1.25f482p-24f, 0x1.abf166p-5f, 0.0f, 0.0f, 0.0f, 0x1.4cd9b2p-23f, 0.0f,
     0x1.9afddap-34f, 0x1.77bc4ap-65f, 0x1.68abc6p-56f, 0x1.5013aep-1f, 0.0f, 0.0f,
     0x1.972866p-119f, 0x1.a0a5f6p-81f, 0.0f, 0.0f, 0x1.816c18p-51f, 0x1.c47162p-79f,
     0.0f, 0.0f, 0.0f, 0x1.739a74p-67f, 0x1.a686b2p-51f, 0.0f, 0.0f, 0.0f,
     0x1.a6fa04p-102f, 0x1.265214p-109f, 0.0f, 0.0f, 0x1.382eaep-75f,
     0x1.764048p-106f, 0x1.d6b19ap-65f, 0.0f, 0.0f, 0x1.0a29eep-51f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.1ead6cp-42f, 0.0f, 0x1.ba4f6ep-14f, 0x1.963148p-58f, 0x1.04c09ep-97f,
     0.0f, 0.0f, 0x1.04cac2p-86f, 0x1.db46d2p-76f, 0x1.953826p-38f, 0x1.69ce0ep-126f,
     0.0f, 0.0f, 0.0f, 0x1.7e8ee4p-89f, 0.0f, 0.0f
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
            tmp1 = Sleef_coshf1_u10purecfma(tmp0);
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
    printf("Sleef_coshf1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_coshf1_u10purecfma bench acc %a\n", global_bench_acc);
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
