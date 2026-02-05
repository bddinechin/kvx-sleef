/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_finz_modff4_avx2128.c --function Sleef_finz_modff4_avx2128 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 4 --function-input-vector-size 4 --precision sleef_sf2 \
 *     --bench --no-embedded-bin --target x86_avx2128
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <string.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef___m128_2 external_bench_wrapper_cst = {.x = {0.0f, 0.0f, 0.0f, 0.0f},.y = {0.0f, 0.0f, 0.0f, 0.0f}};
static const Sleef___m128_2 external_bench_wrapper_cst1 = {.x = {0.0f, 0.0f, 0.0f, 0.0f},.y = {0.0f, 0.0f, 0.0f, 0.0f}};
volatile Sleef___m128_2 external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c294e6p-106f,
     0x1.026678p-120f, 0x1.25152p-111f, 0x1.dec7fp-59f, 0x1.9efc98p-13f, 0.0f,
     0x1.c0dc1p-106f, 0.0f, 0x1.f67de6p-99f, 0.0f, 0x1.6469c2p-54f, 0x1.e72ceap-107f,
     0x1.09fbap-85f, 0x1.db6a38p-104f, 0x1.5f3ee4p-111f, 0x1.866718p-18f,
     0x1.c05664p-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4dcdf6p-51f, 0x1.48726ep-103f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2b174cp-56f, 0x1.ed135ep-124f, 0x1.3ec93ep-1f,
     0.0f, 0x1.40593ep-16f, 0.0f, 0.0f, 0x1.a4eceap-54f, 0x1.5f7f32p-38f,
     0x1.a30d44p-115f, 0x1p0f, 0x1.0b462ep-23f, 0x1.775e16p-66f, 0.0f,
     0x1.61342ap-21f, 0x1.50c08ep-102f, 0.0f, 0x1.8489fap-43f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a9cc7ap-44f, 0x1.9abd08p-48f, 0x1.6ff1e8p-50f, 0x1.77813p-101f, 0.0f, 0x1p0f,
     0x1.dbcf9cp-114f, 0.0f, 0x1.92e49p-84f, 0x1.963192p-69f, 0.0f, 0.0f,
     0x1.89d28ap-94f, 0x1.8b72b2p-36f, 0x1.d57852p-98f, 0x1.e90a68p-78f, 0.0f, 0.0f,
     0.0f, 0x1.20a87ep-106f, 0.0f, 0.0f, 0.0f, 0x1.25428ap-46f, 0.0f, 0x1.bba716p-27f,
     0x1.ca36c4p-69f, 0.0f, 0.0f, 0x1.07316cp-65f, 0.0f, 0.0f, 0x1.ba0442p-73f,
     0x1.dba9bcp-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8ae33ap-113f,
     0x1.f35174p-85f, 0.0f, 0x1.d2446ep-70f, 0.0f, 0.0f, 0x1.e8589p-96f,
     0x1.b7034ep-121f, 0.0f, 0x1.3582ap-121f, 0.0f, 0.0f, 0x1.9d93eep-33f, 0.0f, 0.0f,
     0x1.138212p-106f, 0x1.8988ep-101f, 0.0f, 0x1.bc973ep-15f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a0767ap-125f, 0x1.bccd16p-3f, 0.0f, 0.0f, 0x1.0373acp-53f, 0.0f,
     0x1.9f5b4ap-20f, 0.0f, 0.0f, 0.0f, 0x1.93cb36p-58f, 0.0f, 0x1.ba5478p-60f, 0.0f,
     0x1.549806p-124f, 0.0f, 0x1.2b023p-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.332374p-66f,
     0.0f, 0x1.666d6ep-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eda25ap-21f, 0.0f,
     0x1.7d8f88p-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6fe7e2p-88f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.206dc4p-81f, 0.0f, 0x1.f57c78p-68f, 0.0f, 0.0f, 0x1.beaeb8p-3f,
     0x1.15636cp-49f, 0x1.fe71d2p-82f, 0.0f, 0.0f, 0x1.3d6c3cp-59f, 0.0f,
     0x1.8769cap-67f, 0x1.1832ccp-81f, 0x1.8c1ddp-119f, 0x1.8a5cf2p-37f,
     0x1.082b1p-80f, 0x1.0ba7a4p-73f, 0.0f, 0.0f, 0.0f, 0x1.007232p-81f,
     0x1.a0e726p-76f, 0x1.382012p-21f, 0.0f, 0.0f, 0x1.5f1326p-77f, 0x1.5ac02cp-44f,
     0x1.76df92p-33f, 0.0f, 0.0f, 0x1.cacfd2p-119f, 0x1.b7205cp-19f, 0.0f, 0.0f,
     0x1.c8798p-48f, 0x1.7cf08ap-126f, 0x1.a3a7d8p-8f, 0.0f, 0.0f, 0x1.3f05dap-116f,
     0x1.1acdaap-64f, 0x1.b554d2p-10f, 0x1.bdd22p-116f, 0x1.b1f594p-29f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.540f3p-63f, 0x1.92f5ccp-15f, 0x1.7a83f2p-5f, 0.0f,
     0x1.c49fe4p-53f, 0x1.c2ffbcp-52f, 0x1.cd700ep-36f, 0x1.7944dep-112f,
     0x1.400a88p-86f, 0x1.74663ep-90f, 0x1.d8f004p-55f, 0.0f, 0x1.c73508p-70f,
     0x1.181e0ap-89f, 0.0f, 0x1.8b37a6p-115f, 0x1.a67e7ep-41f, 0x1.5838d6p-108f,
     0x1.605cd4p-47f, 0x1.aaf8dp-36f, 0x1.4ec4ccp-28f, 0x1.458f7p-43f,
     0x1.911a36p-99f, 0x1.26e7ecp-45f, 0x1.fe5618p-83f, 0x1.5a27c2p-91f,
     0x1.ce31acp-115f, 0.0f, 0x1.0322a2p-121f, 0.0f, 0.0f, 0x1.2e023cp-51f,
     0x1.fa4b86p-53f, 0.0f, 0x1.53dc4p-97f, 0.0f, 0.0f, 0x1.eb3792p-6f, 0.0f, 0.0f,
     0x1.e76c42p-113f, 0x1.009b72p-34f, 0.0f, 0x1.fb8f6cp-37f, 0.0f, 0x1.ab8faep-7f,
     0.0f, 0x1.09fcfap-16f, 0.0f, 0.0f, 0.0f, 0x1.297e4p-91f, 0.0f, 0.0f,
     0x1.0e0108p-45f, 0x1.d603e8p-112f, 0.0f, 0x1.1b270ap-115f, 0x1.0df752p-73f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.016924p-77f, 0.0f, 0.0f, 0x1.e0a4b8p-121f, 0x1.862792p-67f,
     0x1.669a8ep-1f, 0x1.7a8fdp-69f, 0.0f, 0x1.2784f6p-48f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.53b1c4p-103f, 0x1.9f3cbcp-12f, 0x1.df2388p-22f, 0x1.c72506p-77f, 0.0f,
     0.0f, 0x1.b4cfe6p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.08aef6p-21f, 0x1.c149d4p-92f, 0x1.903582p-70f, 0x1.d3573ep-123f, 0.0f,
     0x1.82498p-45f, 0.0f, 0x1.502dfap-88f, 0.0f, 0x1.d79496p-120f, 0x1.e5abbp-123f,
     0x1.a50844p-104f, 0x1.0cbdfcp-6f, 0.0f, 0.0f, 0x1.2df13ep-63f, 0x1.10c9e2p-44f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.589878p-33f, 0.0f, 0.0f, 0x1.b14384p-47f,
     0.0f, 0.0f, 0x1.a665bep-62f, 0x1.52c206p-110f, 0.0f, 0x1.29116ep-8f, 0.0f, 0.0f,
     0x1.da15d2p-79f, 0x1.789656p-96f, 0x1.7e1b7ep-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.eff038p-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.52e988p-100f, 0x1.85672ap-117f, 0x1.37f1cp-28f, 0x1.9d5a24p-33f, 0.0f, 0.0f,
     0x1.8b9a9ap-13f, 0.0f, 0x1.251736p-63f, 0x1.919d3ap-42f, 0x1.128744p-3f, 0.0f,
     0x1.4584f8p-116f, 0x1.a98ed6p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.20b37ep-126f, 0x1.d9e82cp-100f, 0.0f, 0x1.0e37dep-106f,
     0x1.c81888p-35f, 0.0f, 0x1.b3da4ap-52f, 0x1.b3453p-11f, 0.0f, 0x1.ba6bc2p-47f,
     0x1.d6af74p-75f, 0x1.ada892p-69f, 0x1.5eb30cp-34f, 0x1.93a5e4p-28f,
     0x1.520aecp-65f, 0.0f, 0.0f, 0x1.a097f6p-53f, 0x1.ba999ep-8f, 0.0f, 0.0f,
     0x1.c2473p-4f, 0.0f, 0.0f, 0.0f, 0x1.8fe3fep-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4cbf4p-45f, 0.0f, 0x1.401e22p-73f, 0.0f, 0x1.c7ca8cp-68f, 0x1.41bd4ap-124f,
     0x1.14ee8ap-97f, 0.0f, 0.0f, 0x1.3d0faep-70f, 0.0f, 0.0f, 0.0f, 0x1.31767cp-45f,
     0x1.069652p-43f, 0x1.ae1492p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ebfa74p-14f,
     0.0f, 0.0f, 0.0f, 0x1.272cacp-35f, 0x1.26b2a2p-65f, 0x1.3e2218p-74f,
     0x1.025d4cp-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.561e58p-77f, 0.0f, 0.0f,
     0x1.cd0d62p-44f, 0.0f, 0x1.677aeap-28f, 0x1.ec4216p-11f, 0x1.5a7956p-15f,
     0x1.10104cp-126f, 0.0f, 0.0f, 0x1.738abep-48f, 0x1.3fe9aap-66f, 0.0f,
     0x1.7ab7d4p-124f, 0.0f, 0x1.61ac64p-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.490914p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7aaed4p-47f, 0x1.4a8e22p-18f,
     0.0f, 0.0f, 0x1.e548c6p-76f, 0.0f, 0.0f, 0x1.3e2d22p-26f, 0x1.74aa3ep-101f, 0.0f,
     0x1.87d342p-108f, 0.0f, 0x1.95b9c6p-11f, 0x1.cc4f28p-77f, 0x1.cde682p-40f, 0.0f,
     0x1.032792p-32f, 0.0f, 0x1.7ecbfap-11f, 0.0f, 0.0f, 0x1.147b6ep-18f, 0.0f,
     0x1.a08092p-110f, 0x1.b08d6cp-29f, 0x1.058044p-39f, 0.0f, 0.0f, 0.0f,
     0x1.d1179ep-57f, 0.0f, 0x1.47a20ep-79f, 0x1.1d12e8p-94f, 0.0f, 0x1.c8ddaap-3f,
     0.0f, 0x1.765dacp-73f, 0x1.26c57cp-30f, 0x1.20e6bp-12f, 0x1.27534ap-64f, 0.0f,
     0.0f, 0.0f, 0x1.6813bcp-38f, 0.0f, 0.0f, 0x1.13c372p-37f, 0.0f, 0.0f, 0.0f,
     0x1.486ec4p-124f, 0x1.311b8ep-3f, 0x1.2a8d36p-44f, 0x1.242814p-36f,
     0x1.a9d38p-71f, 0.0f, 0x1.477012p-43f, 0.0f, 0.0f, 0.0f, 0x1.c6e12ap-26f,
     0x1.549e9cp-2f, 0x1.4f6ec4p-106f, 0x1.8de48p-109f, 0.0f, 0.0f, 0x1.13ecfcp-88f,
     0x1.d2d706p-116f, 0x1.894352p-97f, 0.0f, 0.0f, 0x1.6b4a94p-24f, 0x1.d5d186p-105f,
     0x1.fee55cp-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a9f25ap-58f, 0x1.c0a36cp-93f,
     0x1.ad8864p-63f, 0x1.fc3ad6p-14f, 0x1.5d865p-44f, 0x1.9b26a4p-36f,
     0x1.fc3142p-33f, 0x1.aaf486p-9f, 0.0f, 0.0f, 0.0f, 0x1.78797ap-90f,
     0x1.c71856p-32f, 0x1.d52738p-122f, 0.0f, 0.0f, 0x1.be16b8p-123f,
     0x1.1dcdc8p-121f, 0x1.09d36ep-25f, 0.0f, 0.0f, 0x1.cf0fc2p-101f, 0x1.ed7382p-23f,
     0.0f, 0x1.51e82ep-103f, 0x1.2a5468p-126f, 0.0f, 0x1.189012p-120f, 0.0f,
     0x1.815bfp-82f, 0.0f, 0.0f, 0x1.937aeep-33f, 0x1.14a3e6p-45f, 0x1.425064p-75f,
     0x1.a5ff9p-103f, 0x1.64c7e8p-126f, 0.0f, 0x1.1d3a4cp-74f, 0x1.82f122p-25f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ad1fe2p-75f, 0x1.b5cca6p-51f,
     0x1.638732p-122f, 0x1.e47c16p-82f, 0.0f, 0.0f, 0x1.bae9c4p-5f, 0.0f,
     0x1.f43fdp-124f, 0x1.461842p-104f, 0x1.8a6cf2p-25f, 0x1.3cdfdap-76f,
     0x1.683d7p-90f, 0x1.6ca38ep-83f, 0.0f, 0x1.9bdf1cp-99f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e9cf32p-43f, 0x1.b3b2ep-39f, 0x1.2435dep-119f, 0.0f, 0.0f, 0.0f,
     0x1.1cb118p-115f, 0x1.3720ecp-101f, 0x1.e24b28p-98f, 0.0f, 0.0f, 0x1.3af99ap-30f,
     0x1.8d50fp-90f, 0.0f, 0x1.fbc56cp-6f, 0.0f, 0x1.3f1086p-92f, 0.0f,
     0x1.4eedc6p-6f, 0.0f, 0.0f, 0x1.3ae7fep-107f, 0x1.1077e4p-91f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.603aap-87f, 0.0f, 0x1.a4221cp-94f, 0x1.d4d074p-118f, 0.0f,
     0x1.3c6a3cp-60f, 0x1.d2db3ap-15f, 0x1.5f123ep-45f, 0.0f, 0.0f, 0.0f,
     0x1.5fbaf8p-28f, 0.0f, 0.0f, 0x1.7b12a2p-29f, 0.0f, 0.0f, 0.0f, 0x1.59062p-88f,
     0.0f, 0x1.30f9a2p-1f, 0.0f, 0x1.b1c4d4p-50f, 0x1.5361aap-109f, 0x1.9b3a92p-7f,
     0.0f, 0.0f, 0x1.39bf9ap-88f, 0x1.45d59ap-22f, 0.0f, 0x1.d9e934p-96f,
     0x1.063b92p-64f, 0x1.aee578p-59f, 0x1.a3eeep-105f, 0x1.ec4e84p-89f,
     0x1.f57622p-115f, 0.0f, 0x1.05f37ap-35f, 0x1.850f5p-74f, 0.0f, 0x1.97ece6p-76f,
     0x1.bc1874p-10f, 0.0f, 0x1.157e8p-122f, 0.0f, 0x1.c195cp-126f, 0.0f, 0.0f,
     0x1.836a98p-90f, 0.0f, 0x1.ae88c4p-60f, 0.0f, 0.0f, 0.0f, 0x1.8b26c6p-2f, 0.0f,
     0x1.af794ep-37f, 0.0f, 0x1.7e3c58p-24f, 0.0f, 0x1.ace4dap-60f, 0.0f,
     0x1.afcdep-40f, 0.0f, 0.0f, 0x1.e594ccp-28f, 0x1.769964p-3f, 0x1.0e44ccp-80f,
     0.0f, 0.0f, 0x1.d595fcp-92f, 0.0f, 0x1.98af6ep-12f, 0x1.a2b43p-83f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a27d46p-39f, 0.0f, 0x1.ef92c6p-64f, 0.0f, 0.0f, 0.0f,
     0x1.3402c4p-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.47a95ap-91f, 0x1.844764p-48f,
     0x1.e51d2ap-48f, 0.0f, 0.0f, 0x1.b537d6p-46f, 0x1.7ce144p-56f, 0x1.86c0acp-77f,
     0x1.ac91b4p-47f, 0x1.3c00ap-4f, 0.0f, 0x1.c3f016p-98f, 0x1.3fe3e8p-86f, 0.0f,
     0x1.78a81cp-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.393efap-18f, 0x1.e19bb6p-72f,
     0x1.d13072p-7f, 0x1.13a76p-74f, 0.0f, 0x1.e2d738p-52f, 0.0f, 0x1.fb50f2p-6f,
     0x1.371ea8p-93f, 0.0f, 0x1.8c927ap-91f, 0.0f, 0x1.9057ep-101f, 0.0f,
     0x1.be56b4p-74f, 0.0f, 0x1.ba9f0cp-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c68c56p-28f, 0.0f, 0x1.524164p-74f, 0x1.c3954ap-44f, 0.0f, 0x1.0898bp-84f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.789b52p-46f, 0x1.66fce6p-75f, 0x1.cc9e54p-80f, 0.0f,
     0x1.dcd2a2p-96f, 0.0f, 0x1.68cb7ep-107f, 0x1.9b602ep-86f, 0x1.05c874p-56f, 0.0f,
     0.0f, 0.0f, 0x1.42113ap-13f, 0.0f, 0x1.aacc1p-96f, 0.0f, 0.0f, 0x1.2ab444p-31f,
     0.0f, 0x1.8ebb18p-107f, 0.0f, 0x1.00566ep-62f, 0.0f, 0.0f, 0.0f, 0x1.10ba06p-70f,
     0x1.0c6888p-71f, 0x1.c137ap-45f, 0x1.071e5p-1f, 0.0f, 0x1.542136p-6f, 0.0f, 0.0f,
     0.0f, 0x1.9bf6ecp-108f, 0.0f, 0.0f, 0x1.d0c488p-31f, 0x1.be8c8ap-106f,
     0x1.680686p-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.26c0ccp-19f, 0x1.0dc35ep-87f, 0x1.82a414p-62f, 0x1.7de392p-117f, 0.0f,
     0x1.951a4cp-111f, 0x1.4f348p-27f, 0.0f, 0x1.d9abe4p-49f, 0.0f, 0.0f,
     0x1.261b16p-111f, 0x1.c192e6p-80f, 0x1.11672ep-33f, 0x1.7c8f8cp-95f,
     0x1.dbbbdep-8f, 0x1.8d5ed2p-125f, 0x1.bc1d0ep-21f, 0.0f, 0.0f, 0x1.cab7d4p-61f,
     0.0f, 0.0f, 0x1.41ac28p-94f, 0.0f, 0x1.7fc354p-73f, 0x1.a40194p-91f, 0.0f,
     0x1.29c6ccp-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.151532p-13f, 0x1.a3487ap-16f,
     0.0f, 0x1.74891cp-47f, 0x1.dc619p-70f, 0x1.dde8d6p-122f, 0.0f, 0x1.74d584p-42f,
     0x1.6054ep-41f, 0.0f, 0x1.2a5d9cp-111f, 0x1.6b4dep-77f, 0x1p0f, 0x1.e78044p-98f,
     0x1.9c721cp-113f, 0.0f, 0.0f, 0x1.024788p-17f, 0.0f, 0.0f, 0x1.aa84acp-98f, 0.0f,
     0.0f, 0x1.7d755ep-21f, 0x1.746adep-17f, 0x1.2b19eep-70f, 0x1.2117dcp-119f, 0.0f,
     0x1.0ac1d6p-13f, 0.0f, 0x1.96d32ap-43f, 0.0f, 0x1.730146p-35f, 0.0f,
     0x1.4f6afcp-36f, 0.0f, 0.0f, 0x1.50f516p-79f, 0x1.ee5e12p-24f, 0x1.56cfdep-31f,
     0.0f, 0.0f, 0x1.4cb97cp-39f, 0x1.510a48p-47f, 0x1.3c2c6ep-24f, 0x1.2b0ef8p-2f,
     0.0f, 0.0f, 0x1.f4acd2p-117f, 0x1.5da55p-72f, 0x1.e83cf8p-89f, 0x1.92796cp-116f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1ddb1p-58f, 0x1.2929acp-48f, 0x1.b67686p-115f,
     0.0f, 0x1.3bf8dep-118f, 0x1.0fc2acp-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.08d714p-16f, 0x1.f749acp-85f, 0x1.be110cp-61f, 0x1.985bb8p-105f,
     0x1.a333bap-120f, 0.0f, 0x1.b52a56p-44f, 0.0f, 0.0f, 0.0f, 0x1.f378e4p-90f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.8af77cp-73f, 0.0f, 0x1.0bdf6cp-62f, 0x1.b2d5a4p-111f,
     0x1.69903cp-14f, 0.0f, 0.0f, 0.0f, 0x1.709e5ep-101f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f025c4p-69f, 0x1.8a1b3ep-13f,
     0x1.4c336ep-12f, 0.0f, 0.0f, 0.0f, 0x1.1aadaep-111f, 0.0f, 0.0f, 0.0f,
     0x1.a813d6p-50f, 0x1.abf922p-53f, 0x1.90b224p-59f, 0.0f, 0x1.9f2d78p-66f,
     0x1.e30494p-64f, 0.0f, 0.0f, 0x1.92eb5ep-107f, 0x1.131cd6p-53f, 0x1.580f3ap-48f,
     0x1.d5ffdp-69f, 0x1.a5e4aep-101f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef___m128_2 global_bench_acc;
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
        Sleef___m128_2 local_acc;
        int32_t i;
        ml_float4_t tmp0;
        ml_float4_t tmp1;
        ml_float4_t tmp2;
        ml_float4_t tmp3;
        ml_float4_t tmp4;
        ml_float4_t tmp5;
        Sleef___m128_2 tmp6;
        int32_t tmp7;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1004));){
            ml_float4_t tmp0;
            Sleef___m128_2 tmp1;
            ml_float4_t tmp2;
            ml_float4_t tmp3;
            ml_float4_t tmp4;
            ml_float4_t tmp5;
            ml_float4_t tmp6;
            ml_float4_t tmp7;
            Sleef___m128_2 tmp8;
            int32_t tmp9;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_finz_modff4_avx2128(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = local_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = local_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef___m128_2) {.x=tmp4, .y=tmp7});
            local_acc = tmp8;
            tmp9 = i + INT32_C(4);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = local_acc.x;
        tmp2 = tmp0 + tmp1;
        tmp3 = global_bench_acc.y;
        tmp4 = local_acc.y;
        tmp5 = tmp3 + tmp4;
        tmp6 = ((Sleef___m128_2) {.x=tmp2, .y=tmp5});
        global_bench_acc = tmp6;
        tmp7 = j + INT32_C(1);
        j = tmp7;
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
    printf("Sleef_finz_modff4_avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_modff4_avx2128 bench acc {.x=[%a, %a, %a, %a], .y=[%a, %a, %a, %a]}\n", global_bench_acc.x[0], global_bench_acc.x[1], global_bench_acc.x[2], global_bench_acc.x[3], global_bench_acc.y[0], global_bench_acc.y[1], global_bench_acc.y[2], global_bench_acc.y[3]);
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
