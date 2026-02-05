/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sqrtf4_u05avx2128.c --function \
 *     Sleef_finz_sqrtf4_u05avx2128 --headers sleef.h,ml_support_lib.h \
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
     0x1.f7c96ap-105f, 0x1.d370f2p-95f, 0.0f, 0x1.dd0a02p-60f, 0x1.773386p-124f,
     0.0f, 0.0f, 0x1.7c0132p-117f, 0x1.e11dacp-42f, 0.0f, 0.0f, 0x1.6686f6p-70f,
     0x1.0577bap-82f, 0.0f, 0.0f, 0.0f, 0x1.6f576ap-98f, 0x1.5c8ebcp-84f,
     0x1.5196dep-50f, 0.0f, 0x1.16dbc2p-51f, 0x1.1a929ap-32f, 0.0f, 0.0f,
     0x1.280b96p-109f, 0x1.3d5392p-117f, 0.0f, 0x1.91b716p-110f, 0.0f,
     0x1.9feee2p-106f, 0.0f, 0x1.8101fap-118f, 0.0f, 0x1.61232cp-56f, 0x1.ec0cdp-80f,
     0x1.58d852p-48f, 0.0f, 0.0f, 0x1.3a99eap-96f, 0x1.aacf1ep-99f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.1ec168p-37f, 0x1.230808p-123f, 0x1.5a906cp-14f, 0.0f, 0.0f,
     0x1.56fefcp-10f, 0.0f, 0x1.803a98p-34f, 0x1p0f, 0.0f, 0.0f, 0x1.62d976p-18f,
     0x1.8fad06p-1f, 0.0f, 0x1.d058p-47f, 0x1.52e87ap-21f, 0x1.c63a28p-46f,
     0x1.c767fcp-112f, 0.0f, 0x1.c1bddp-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4f2846p-106f,
     0x1.6b730ap-17f, 0x1.39d862p-106f, 0x1.1a1ad2p-58f, 0x1.7178c6p-36f, 0.0f,
     0x1.dc9e7ap-115f, 0x1.0f127p-56f, 0.0f, 0x1.616beap-16f, 0x1.59ccb4p-95f,
     0x1.e3af1p-19f, 0x1.34c46ap-94f, 0.0f, 0.0f, 0.0f, 0x1.7acff4p-91f,
     0x1.6cc6f4p-24f, 0x1.a0f95cp-8f, 0.0f, 0x1.b8c3bap-87f, 0x1.81e17ap-1f, 0.0f,
     0x1.800cdap-41f, 0.0f, 0x1.c94b9p-106f, 0x1.83a21ep-88f, 0x1.82fd4cp-83f, 0.0f,
     0.0f, 0x1.6cf1bcp-113f, 0.0f, 0x1.a3c036p-44f, 0x1.f86334p-78f, 0x1.3200eap-67f,
     0.0f, 0.0f, 0.0f, 0x1.6f1e4p-126f, 0.0f, 0x1.b54726p-97f, 0x1.54cd76p-35f,
     0x1.c0a52p-32f, 0x1.f44002p-110f, 0x1.e432cp-11f, 0x1.0c7d1ap-27f, 0.0f,
     0x1.be23d2p-112f, 0x1.655952p-62f, 0.0f, 0x1.7573e4p-3f, 0x1.751128p-56f, 0.0f,
     0.0f, 0x1.788c6ap-85f, 0.0f, 0.0f, 0.0f, 0x1.f05b92p-34f, 0.0f, 0.0f,
     0x1.4d93dcp-8f, 0.0f, 0.0f, 0x1.070552p-60f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b70e3cp-45f, 0.0f, 0x1.5fe14ep-60f, 0x1.4576a6p-43f, 0.0f, 0.0f,
     0x1.9b9fap-40f, 0.0f, 0x1.db0112p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.585abcp-31f,
     0x1.c5b606p-121f, 0x1.3deaeep-9f, 0.0f, 0x1.c119acp-30f, 0.0f, 0x1.5ecad2p-84f,
     0x1.5a4da4p-11f, 0x1.b9fa6ep-32f, 0.0f, 0x1.4bed4p-4f, 0.0f, 0x1.a0e472p-70f,
     0x1.3f1042p-87f, 0x1.91aa8ep-39f, 0x1.ba512cp-26f, 0x1.0566b2p-8f, 0.0f,
     0x1.e00812p-3f, 0.0f, 0.0f, 0x1.b78ddcp-94f, 0.0f, 0x1.e283ep-33f, 0.0f, 0.0f,
     0.0f, 0x1.8360c8p-67f, 0.0f, 0x1.357b1ep-44f, 0x1.34bc94p-15f, 0.0f, 0.0f,
     0x1.aea9b6p-119f, 0.0f, 0.0f, 0.0f, 0x1.48478ep-36f, 0x1.6656c8p-61f,
     0x1.b467b6p-29f, 0x1p0f, 0x1.1288b4p-46f, 0.0f, 0x1.3d168cp-22f, 0.0f, 0.0f,
     0x1.ad5e04p-114f, 0x1.ed666ep-119f, 0.0f, 0x1.b30828p-62f, 0x1.2a7e26p-33f,
     0x1.fcb738p-73f, 0x1.455f9p-38f, 0x1.ba32a4p-64f, 0x1.a51486p-11f, 0.0f,
     0x1.ec5112p-45f, 0.0f, 0x1.68bcc4p-37f, 0x1.86a05cp-58f, 0.0f, 0.0f,
     0x1.dc43e2p-95f, 0.0f, 0.0f, 0x1.da828p-45f, 0x1.835e8ap-61f, 0x1.b470f4p-39f,
     0.0f, 0.0f, 0.0f, 0x1.f94384p-108f, 0x1.39f43p-69f, 0.0f, 0x1.66ddc8p-51f,
     0x1.ed29dcp-26f, 0.0f, 0x1.b259eap-38f, 0.0f, 0x1.1e4cccp-93f, 0x1.4a1086p-75f,
     0x1.5351a4p-120f, 0x1.5ed0a4p-87f, 0.0f, 0x1.565496p-114f, 0.0f, 0.0f, 0.0f,
     0x1.05e0f2p-72f, 0.0f, 0x1.c108f4p-17f, 0.0f, 0x1.08729ep-113f, 0.0f,
     0x1.8d919cp-25f, 0.0f, 0x1.a73bcp-21f, 0.0f, 0.0f, 0x1.6aecdp-71f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.da23c4p-76f, 0x1.dca312p-114f, 0.0f, 0.0f, 0x1.718ffap-114f,
     0x1.d23b28p-118f, 0x1.3c43eap-93f, 0x1.27fe6cp-16f, 0x1.35c9p-20f,
     0x1.920c2ap-97f, 0x1.000584p-14f, 0.0f, 0.0f, 0x1.cb08dap-106f, 0x1.dfaa06p-25f,
     0x1.ed1cb4p-91f, 0x1.64304cp-89f, 0.0f, 0.0f, 0x1.4ed28ap-50f, 0x1.ce428p-100f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.6ee174p-97f, 0x1.1ee84p-92f, 0.0f, 0.0f,
     0x1.160bc8p-79f, 0.0f, 0.0f, 0x1.1481dap-56f, 0.0f, 0.0f, 0x1.48105ap-122f,
     0x1.87e176p-51f, 0.0f, 0x1.8f4deep-96f, 0.0f, 0x1.90ddb4p-66f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b3bfp-95f, 0x1.2c53bcp-118f, 0x1.e9227p-115f, 0.0f, 0x1.a1ddb2p-39f,
     0x1.a6b25ep-116f, 0x1.639bccp-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f,
     0x1.71e464p-63f, 0.0f, 0x1.c3eb0ap-87f, 0.0f, 0x1.88fa02p-49f, 0.0f,
     0x1.90b6f2p-25f, 0x1.4afc3cp-18f, 0x1.4fb4bp-49f, 0x1.ca9e2p-57f, 0.0f,
     0x1.dec41p-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a0c4e2p-87f, 0x1.8c2b88p-101f,
     0.0f, 0x1.b032e8p-104f, 0.0f, 0.0f, 0x1.ca89b6p-94f, 0.0f, 0x1.87e1a8p-64f, 0.0f,
     0.0f, 0x1.50ea4ep-94f, 0.0f, 0x1.def692p-63f, 0x1.8daf4p-108f, 0x1.5089dcp-90f,
     0.0f, 0.0f, 0.0f, 0x1.44e3f6p-45f, 0.0f, 0.0f, 0.0f, 0x1.13dcf4p-6f, 0.0f,
     0x1.cfd408p-27f, 0.0f, 0x1.4fbad6p-16f, 0.0f, 0.0f, 0.0f, 0x1.2f35f8p-110f, 0.0f,
     0x1.4aa7bep-27f, 0.0f, 0x1.6a0462p-91f, 0.0f, 0x1.9ec45ap-73f, 0x1.82153ep-118f,
     0.0f, 0.0f, 0x1.13bf7ap-53f, 0x1.ded21ep-126f, 0x1.0d10cap-95f, 0.0f, 0.0f,
     0x1.f4f1ecp-109f, 0x1.5bd54ap-100f, 0.0f, 0.0f, 0x1.e8b49p-66f, 0x1.b16c66p-66f,
     0x1.6b7968p-2f, 0.0f, 0x1.98ab46p-78f, 0x1.783a7ap-2f, 0x1.003bb6p-64f, 0.0f,
     0x1.945884p-7f, 0.0f, 0x1.1e2808p-18f, 0x1.c86e9p-109f, 0.0f, 0x1.867caap-62f,
     0.0f, 0x1.749c46p-81f, 0.0f, 0.0f, 0.0f, 0x1.9a6f28p-83f, 0x1.e8189p-3f, 0.0f,
     0x1.27000cp-4f, 0x1.ab1352p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.dd52c8p-47f, 0.0f, 0x1.aa9af4p-80f, 0.0f, 0x1.376e08p-97f, 0.0f,
     0x1.6b15b6p-33f, 0.0f, 0x1.751fb2p-100f, 0x1.1ce87ap-95f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.2ad2eap-104f, 0x1.b5e9b6p-36f, 0.0f, 0.0f, 0.0f, 0x1.a8e79ep-21f,
     0.0f, 0.0f, 0x1.9ddc68p-22f, 0x1.83d638p-66f, 0.0f, 0x1.2e3a1ep-48f,
     0x1.c5c646p-71f, 0x1.d221b4p-116f, 0x1.d2733ap-105f, 0x1.4ae646p-66f, 0.0f,
     0x1.91b542p-123f, 0.0f, 0.0f, 0x1.387d9p-90f, 0x1.40d84cp-106f, 0x1.337c28p-125f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5064bap-121f, 0x1.7b0e5p-100f,
     0x1.e57b8p-8f, 0x1.c7cdep-27f, 0x1.9d12f2p-9f, 0.0f, 0x1.bd6228p-35f,
     0x1.64588cp-119f, 0.0f, 0x1.ffc0a4p-113f, 0.0f, 0x1.5f9ffep-44f, 0.0f,
     0x1.9992e4p-20f, 0.0f, 0.0f, 0x1.dddf48p-83f, 0x1.e7f1dap-102f, 0x1.589ef6p-13f,
     0.0f, 0x1.3d26ep-15f, 0.0f, 0x1.799baap-32f, 0.0f, 0x1.92dedp-33f, 0.0f,
     0x1.b86f2ap-68f, 0x1.2f6c42p-96f, 0x1.90358cp-80f, 0x1.dc1e92p-102f,
     0x1.88c82ep-89f, 0.0f, 0.0f, 0.0f, 0x1.030602p-46f, 0x1.518e2ap-19f,
     0x1.4fcbap-40f, 0x1.78c066p-14f, 0.0f, 0.0f, 0x1.be187p-98f, 0.0f,
     0x1.5ba61ap-70f, 0x1.b4f166p-62f, 0.0f, 0x1.3d2e32p-79f, 0.0f, 0x1.196706p-105f,
     0x1.2a358p-9f, 0x1.1a482p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4b40f2p-79f, 0.0f,
     0x1.5c3cc2p-111f, 0x1.6452fep-95f, 0.0f, 0.0f, 0x1.c3c10cp-38f, 0x1.61e772p-109f,
     0.0f, 0x1.5149cap-101f, 0x1.90ff1cp-5f, 0x1.88927p-46f, 0.0f, 0.0f,
     0x1.f1ae1ap-68f, 0x1.9b2488p-119f, 0.0f, 0x1.fc5b9p-100f, 0.0f, 0.0f,
     0x1.1068c8p-51f, 0x1.880338p-77f, 0.0f, 0x1.8e528ap-77f, 0.0f, 0x1.24bd2p-34f,
     0.0f, 0x1.21318ep-85f, 0x1.07b2e2p-98f, 0.0f, 0x1.950da2p-106f, 0.0f,
     0x1.2d7e9p-109f, 0.0f, 0x1.b6d48ap-3f, 0.0f, 0x1.833898p-64f, 0.0f, 0.0f, 0.0f,
     0x1.042a9ep-67f, 0x1.775f6p-14f, 0x1.ac3792p-42f, 0.0f, 0.0f, 0.0f,
     0x1.3897p-49f, 0.0f, 0.0f, 0x1.2e4b1p-16f, 0.0f, 0x1.820bfap-44f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.27cdd8p-85f, 0x1.214baap-25f, 0.0f, 0x1.0fb84p-84f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f0fb78p-78f, 0x1.afe25cp-91f, 0.0f,
     0x1.e84cc8p-77f, 0x1.48ca2ap-50f, 0.0f, 0.0f, 0.0f, 0x1.cd9c66p-54f, 0.0f,
     0x1.37afcep-29f, 0x1.5ee71ep-33f, 0.0f, 0x1.f6f79ap-42f, 0.0f, 0.0f,
     0x1.c45302p-71f, 0x1.d76cp-80f, 0.0f, 0.0f, 0x1.62022ap-75f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.35d08ap-68f, 0x1.b95676p-53f, 0x1.5f5884p-86f, 0.0f,
     0x1.689578p-32f, 0x1.589d72p-39f, 0x1.d3c0aep-42f, 0x1.ddc08ep-105f, 0.0f, 0.0f,
     0x1.06b5cap-85f, 0x1.ba98a8p-85f, 0x1.700536p-3f, 0.0f, 0.0f, 0x1.6a3ap-30f,
     0x1.8a412p-6f, 0.0f, 0x1.898f9ap-110f, 0.0f, 0x1.dac494p-38f, 0.0f,
     0x1.f4d2f2p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0339bp-90f, 0x1.6949acp-37f,
     0x1.10a6fep-54f, 0.0f, 0x1p0f, 0x1.9d04dep-1f, 0.0f, 0x1.1bc772p-29f, 0.0f,
     0x1.9d728cp-94f, 0.0f, 0x1.388436p-60f, 0.0f, 0x1.61bab6p-80f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d8d3dap-27f, 0x1.5dbae6p-19f, 0x1.548182p-2f, 0.0f,
     0x1.1e508cp-75f, 0.0f, 0.0f, 0x1.207b44p-25f, 0x1.9d7218p-29f, 0.0f, 0.0f,
     0x1.cbeec6p-44f, 0x1.721744p-110f, 0.0f, 0x1.d220dap-93f, 0.0f, 0x1.8ad83cp-32f,
     0.0f, 0.0f, 0x1.ef31d8p-8f, 0x1.987b24p-32f, 0x1.17b8b6p-72f, 0x1.c4f33ap-85f,
     0x1.2e10fep-75f, 0x1.a03582p-116f, 0x1.9e9d86p-50f, 0.0f, 0x1.882294p-41f,
     0x1.02e0bap-14f, 0x1.3aff2cp-28f, 0x1.ed3468p-39f, 0.0f, 0.0f, 0.0f,
     0x1.1ea43p-30f, 0x1.83bfe2p-79f, 0x1.72c98ep-108f, 0.0f, 0x1.0fc518p-118f, 0.0f,
     0.0f, 0x1.9339a4p-126f, 0.0f, 0.0f, 0x1.6fd3f8p-61f, 0.0f, 0.0f, 0.0f,
     0x1.4817e4p-36f, 0x1.f37a12p-9f, 0.0f, 0x1.bdf6aep-72f, 0x1.ca2dc4p-105f, 0.0f,
     0.0f, 0x1.212ad4p-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.88c4bep-39f, 0.0f,
     0x1.952494p-97f, 0x1.a49ep-87f, 0.0f, 0x1.b919b6p-26f, 0.0f, 0.0f, 0.0f,
     0x1.d9361ap-5f, 0x1.ac51d2p-76f, 0.0f, 0.0f, 0x1.6407d4p-126f, 0x1.b56bfcp-67f,
     0x1.baf958p-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.21d996p-27f, 0x1.7bdda6p-79f, 0.0f,
     0x1.db3cfap-114f, 0x1.d997dp-79f, 0.0f, 0.0f, 0x1.bc91c4p-56f, 0.0f, 0.0f,
     0x1.50567ap-38f, 0x1.386c48p-58f, 0.0f, 0x1.fb0002p-87f, 0.0f, 0.0f, 0.0f,
     0x1.582fdp-25f, 0.0f, 0.0f, 0.0f, 0x1.b9a54cp-56f, 0x1.7780e4p-72f, 0.0f,
     0x1.ce5b0ep-45f, 0x1.0f5c4cp-84f, 0.0f, 0x1.cbf6b6p-112f, 0x1.a0022p-122f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.3f7c16p-65f, 0x1.eec0a8p-29f, 0.0f, 0x1.cd73a4p-76f,
     0x1.a44c24p-96f, 0.0f, 0x1.4cd8cep-102f, 0x1.8472cap-85f, 0.0f, 0x1.54ce04p-113f,
     0.0f, 0.0f, 0x1.a32d1ap-20f, 0.0f, 0x1.c662bp-56f, 0.0f, 0.0f, 0x1.ebf5bep-121f,
     0x1.ada25ap-20f, 0.0f, 0x1.5873f2p-2f, 0x1.3bfc9ep-20f, 0x1.75c754p-92f,
     0x1.2a0cf8p-19f, 0.0f, 0x1.705bf8p-81f, 0.0f, 0x1.7dbdd6p-57f, 0x1.9fdd44p-72f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7eb9d2p-18f, 0.0f, 0x1.15448cp-40f, 0x1.db904ap-16f,
     0x1.48f9a6p-123f, 0x1.06a472p-10f, 0x1.0ecd9cp-77f, 0.0f, 0x1.83e446p-4f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.dbae52p-126f, 0.0f, 0x1.60d80cp-26f, 0.0f,
     0x1.c9c3c6p-7f, 0.0f, 0x1.424cfcp-69f, 0x1.b0752p-47f, 0.0f, 0x1.2c787ap-124f,
     0x1.6f3c96p-83f, 0.0f, 0x1.873b14p-123f, 0x1.31d524p-119f, 0x1.f8e872p-17f,
     0x1.d1ab14p-38f, 0x1.4c93f8p-21f, 0.0f, 0x1.cd08e2p-91f, 0x1.2516acp-37f,
     0x1.f3f5b8p-91f, 0x1.23f79ep-39f, 0.0f, 0x1.dc6496p-96f, 0.0f, 0x1.3c2e5ap-107f,
     0x1.8bc804p-80f, 0x1.a4dc72p-125f, 0x1.098d88p-109f, 0.0f, 0.0f, 0.0f,
     0x1.b5b686p-81f, 0x1.47591p-40f, 0x1.d49d04p-44f, 0.0f, 0.0f, 0.0f,
     0x1.666f96p-95f, 0.0f, 0x1.22c134p-52f, 0.0f, 0.0f, 0x1.946c36p-123f,
     0x1.c58802p-10f, 0.0f, 0x1.034cb4p-35f, 0.0f, 0x1.a9c518p-16f, 0x1.afa82ep-74f,
     0x1.e02816p-103f, 0x1.2c9776p-53f, 0x1.846f6ep-108f, 0x1.22f96p-83f,
     0x1.a14b8ep-57f, 0x1.ac9588p-101f, 0.0f, 0.0f, 0x1.e1e40ep-103f, 0x1.f26fep-47f,
     0.0f, 0x1.47a75p-6f, 0x1.6a89bep-124f, 0.0f, 0.0f, 0x1.250662p-77f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.6a4a16p-15f, 0x1.e6159cp-22f, 0.0f, 0x1.66dfbep-121f,
     0x1.7e27aep-90f, 0.0f, 0.0f, 0x1.9644ccp-120f, 0.0f, 0x1.56c47p-13f, 0.0f,
     0x1.ab4774p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2f99d8p-42f, 0.0f, 0x1.6d4286p-44f,
     0.0f, 0.0f, 0x1.48e648p-51f, 0x1.923434p-60f, 0x1.b599bap-53f, 0.0f,
     0x1.312588p-36f, 0.0f, 0.0f, 0.0f, 0x1.4d85f4p-59f, 0.0f, 0x1.ed4984p-78f, 0.0f,
     0.0f, 0x1.b1a6b6p-125f, 0.0f, 0x1.285c94p-106f, 0.0f, 0.0f, 0x1.cda0dep-68f,
     0.0f, 0.0f, 0.0f, 0x1.e2f2eap-82f, 0x1.2446f2p-69f, 0x1.30da7ap-105f,
     0x1.ae45c2p-31f, 0.0f, 0.0f, 0x1.c0b47cp-92f, 0x1.7ae632p-4f, 0x1.25d836p-3f,
     0x1p0f, 0.0f, 0x1.b704d2p-83f, 0x1.b0d1aep-121f, 0x1.ff7cbep-47f, 0.0f, 0.0f,
     0.0f, 0x1.12b69cp-76f, 0.0f, 0x1.6fa20ap-125f, 0.0f, 0.0f, 0x1.082848p-33f, 0.0f,
     0x1.63bd98p-110f, 0.0f, 0x1.57690cp-102f, 0x1.692e56p-76f, 0.0f, 0.0f, 0.0f,
     0x1.f87162p-26f, 0.0f, 0x1p0f, 0x1.2555c2p-15f, 0x1.056b3p-66f, 0x1.2a3aap-18f,
     0.0f, 0x1.bc0b0cp-9f, 0.0f, 0.0f, 0x1.582bdp-78f, 0x1.8a4188p-54f,
     0x1.91288ep-17f, 0.0f, 0x1.a2be3cp-15f, 0.0f, 0.0f, 0.0f, 0x1.e27c84p-76f, 0.0f,
     0x1.dd9a98p-25f, 0x1.d557ccp-87f, 0x1.5db996p-2f, 0x1.231746p-21f, 0.0f,
     0x1.17419ep-13f, 0x1.08f36p-73f, 0x1.5c3688p-108f, 0x1.c4069ep-112f, 0.0f,
     0x1.9cfa62p-16f, 0x1.af7a72p-72f, 0x1.b21978p-70f, 0x1.21e192p-2f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.2144fep-55f, 0.0f, 0x1.8a739cp-32f, 0x1.f027bcp-71f, 0.0f
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
            tmp1 = Sleef_finz_sqrtf4_u05avx2128(tmp0);
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
    printf("Sleef_finz_sqrtf4_u05avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_sqrtf4_u05avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
