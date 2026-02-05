/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_remainderf4_avx2128.c --function Sleef_remainderf4_avx2128 \
 *     --arity 2 --headers sleef.h,ml_support_lib.h --input-formats \
 *     binary32,binary32 --vector-size 4 --function-input-vector-size 4 \
 *     --bench --no-embedded-bin --target x86_avx2128
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
     0.0f, 0x1.346c5cp-36f, 0.0f, 0.0f, 0x1.4b0fbep-53f, 0x1.8053p-30f, 0.0f, 0.0f,
     0x1.ab24e6p-91f, 0.0f, 0x1.3da3d8p-99f, 0x1.cd6f3cp-65f, 0x1.93a88ep-16f,
     0x1.aade74p-18f, 0x1.0cc8cep-55f, 0.0f, 0.0f, 0x1.e8353cp-106f, 0.0f,
     0x1.4f16b2p-104f, 0x1.d18548p-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3d0f5cp-14f, 0x1.f8332p-71f, 0.0f, 0.0f, 0x1.1179ap-91f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.3aaf24p-108f, 0x1.eb4176p-79f, 0x1.6ba59ep-86f, 0.0f, 0.0f, 0.0f,
     0x1.f6dd96p-88f, 0x1.a7f974p-82f, 0.0f, 0x1.c56b1ep-54f, 0.0f, 0x1.5aced8p-67f,
     0x1.5c159p-107f, 0x1.dfc0cep-10f, 0x1.a446a4p-96f, 0x1.460272p-81f,
     0x1.63d99ep-102f, 0x1.74b4f2p-78f, 0.0f, 0x1.d20568p-38f, 0x1.e508ep-62f, 0.0f,
     0x1.de9582p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2b3f3p-10f, 0.0f, 0x1.da2feap-51f,
     0x1.74e782p-64f, 0x1.17e4b2p-5f, 0.0f, 0x1.1a505cp-27f, 0.0f, 0x1.c8a16cp-105f,
     0.0f, 0.0f, 0x1.bfd2aep-20f, 0x1.167602p-32f, 0x1.29f8ep-90f, 0x1.66696cp-17f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d0eef4p-93f, 0.0f, 0.0f, 0x1.a4259p-40f,
     0x1.c42664p-72f, 0.0f, 0.0f, 0x1.174a1ep-91f, 0.0f, 0x1.21c212p-85f, 0.0f,
     0x1.34410ep-77f, 0x1.544e8cp-38f, 0x1.324c2p-85f, 0x1.4a14dap-94f,
     0x1.b578f6p-44f, 0.0f, 0x1.c50f02p-41f, 0.0f, 0x1.51923ap-22f, 0.0f, 0.0f,
     0x1.268a36p-98f, 0x1.f83f4ap-119f, 0.0f, 0.0f, 0x1.317aa6p-90f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.c5219cp-5f, 0.0f, 0.0f, 0x1.86419ap-58f, 0x1.a00f94p-38f, 0.0f,
     0x1.3609e6p-125f, 0x1.438bbp-84f, 0.0f, 0x1.2aea14p-91f, 0.0f, 0x1.634f8p-11f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.77a3c6p-63f, 0x1.a21cbp-62f, 0.0f, 0.0f,
     0x1.58324ep-60f, 0.0f, 0.0f, 0.0f, 0x1.49041ap-106f, 0.0f, 0.0f, 0.0f,
     0x1.650e28p-74f, 0.0f, 0.0f, 0x1.19f102p-67f, 0x1.0a3f5ap-32f, 0x1.88377p-10f,
     0x1.0cdea6p-49f, 0.0f, 0x1.29c46ep-95f, 0.0f, 0x1.0e6278p-108f, 0x1.5ceb98p-34f,
     0x1.d95c88p-104f, 0x1.863b94p-16f, 0x1.500418p-126f, 0x1.8869c8p-74f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.1c7998p-118f, 0x1.2c2dacp-70f, 0x1.b032f6p-12f,
     0x1.54c114p-6f, 0x1.426ec4p-114f, 0.0f, 0.0f, 0.0f, 0x1.c1ebcp-27f,
     0x1.c791fep-67f, 0.0f, 0x1.788eaep-9f, 0.0f, 0x1.03012cp-101f, 0x1.7901f2p-13f,
     0x1.57dfe4p-17f, 0x1p0f, 0x1.03ed28p-5f, 0x1.d83c9cp-79f, 0x1.b37d48p-98f,
     0x1.e94878p-77f, 0.0f, 0.0f, 0x1.70676ap-56f, 0.0f, 0x1.adf8dap-103f,
     0x1.6ae272p-23f, 0.0f, 0.0f, 0x1.4e548p-74f, 0.0f, 0.0f, 0x1.b3236p-86f,
     0x1.f73f6p-73f, 0x1.d18114p-12f, 0.0f, 0x1.af80d2p-65f, 0x1.a0314ep-103f,
     0x1.8029ccp-43f, 0x1.59708p-110f, 0.0f, 0x1p0f, 0.0f, 0x1.0db6bep-23f,
     0x1.df818ap-34f, 0.0f, 0x1.31ba04p-88f, 0.0f, 0x1.d89904p-66f, 0.0f, 0.0f,
     0x1.5182f4p-58f, 0x1.3f187p-94f, 0x1.b3ba08p-111f, 0x1.1ac082p-118f, 0.0f, 0.0f,
     0.0f, 0x1.fce3ap-87f, 0.0f, 0x1.8a83a6p-47f, 0x1.ab49a4p-49f, 0x1.689ebap-38f,
     0x1.c41aap-45f, 0x1.deb644p-53f, 0.0f, 0.0f, 0x1.d15f4p-102f, 0.0f,
     0x1.991784p-107f, 0x1.6dfd52p-94f, 0x1.a8c86cp-63f, 0.0f, 0x1.7547b6p-5f,
     0x1.16eb72p-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d49c44p-27f, 0x1.d8f8ap-51f,
     0x1.4fde32p-51f, 0x1.d08e7ep-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.da3462p-3f, 0.0f, 0.0f, 0.0f, 0x1.9445cp-70f, 0.0f, 0.0f, 0x1.4b8214p-41f,
     0.0f, 0x1.d3a264p-73f, 0x1.727a98p-36f, 0x1.8c5cd2p-37f, 0x1.71dc48p-13f,
     0x1.5b8fe4p-58f, 0.0f, 0.0f, 0x1.be7352p-122f, 0.0f, 0x1.88d4f2p-72f, 0.0f, 0.0f,
     0x1.4b01e8p-1f, 0.0f, 0.0f, 0x1.ece928p-118f, 0x1.addc78p-14f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.73aca2p-106f, 0x1.fcc7c4p-28f, 0x1.28869ep-100f, 0.0f, 0.0f,
     0x1.b614c2p-70f, 0x1.77159ep-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.18a03ap-118f,
     0x1.62c782p-123f, 0.0f, 0x1.ad0b7ep-79f, 0.0f, 0.0f, 0.0f, 0x1.c5e20cp-19f,
     0x1.9353dap-15f, 0x1.652dd2p-3f, 0.0f, 0x1.a0ad18p-29f, 0x1.5fb1ecp-65f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c4194cp-42f, 0x1.5690bcp-57f, 0.0f, 0x1.7148bap-52f,
     0x1.056246p-124f, 0x1.b65bdap-43f, 0x1.a6723ep-31f, 0x1.68a0dap-47f,
     0x1.bf3adep-45f, 0x1.7fe8dep-15f, 0.0f, 0.0f, 0.0f, 0x1.5d31e6p-7f, 0.0f, 0.0f,
     0x1.27a202p-14f, 0.0f, 0.0f, 0x1.e81694p-123f, 0x1.6f2398p-126f, 0.0f,
     0x1.46b8eep-70f, 0x1.1bdd96p-11f, 0x1.8802aep-12f, 0x1.190906p-79f, 0.0f, 0.0f,
     0x1.81a212p-103f, 0.0f, 0.0f, 0x1.abf4a4p-76f, 0x1.4516f8p-113f, 0.0f, 0.0f,
     0x1.5133dep-57f, 0.0f, 0.0f, 0.0f, 0x1.5b57b4p-71f, 0.0f, 0x1.6ade44p-90f, 0.0f,
     0x1.905df6p-47f, 0.0f, 0.0f, 0.0f, 0x1.e773b4p-56f, 0x1.c4d21ep-85f,
     0x1.71a528p-109f, 0x1.f9842p-74f, 0.0f, 0.0f, 0x1.f1e03cp-45f, 0x1.615d5ap-87f,
     0.0f, 0x1.c04f94p-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9793c4p-68f,
     0x1.e21f66p-33f, 0.0f, 0.0f, 0.0f, 0x1.6fa578p-21f, 0.0f, 0x1.cd485cp-47f, 0.0f,
     0.0f, 0x1.828a6p-52f, 0x1.96adc2p-97f, 0.0f, 0x1.73be2ap-35f, 0.0f, 0.0f, 0.0f,
     0x1.29848ep-7f, 0.0f, 0x1.02166ap-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.abad3ap-27f,
     0.0f, 0x1.b30542p-123f, 0.0f, 0x1.ae3c3cp-54f, 0.0f, 0x1.6d9d02p-23f, 0.0f,
     0x1.d3825p-59f, 0x1.008682p-43f, 0.0f, 0x1.5b7ca6p-94f, 0.0f, 0x1.47d732p-65f,
     0x1.b8634ap-47f, 0.0f, 0.0f, 0.0f, 0x1.87c31cp-77f, 0.0f, 0.0f, 0x1.f6e72ep-46f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fb98a8p-33f, 0x1.89cee4p-12f, 0.0f, 0.0f,
     0x1.58e0c4p-90f, 0x1.de8d64p-37f, 0.0f, 0.0f, 0x1.aa3344p-28f, 0.0f,
     0x1.b3be3p-121f, 0x1.38b484p-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.13d642p-108f, 0.0f, 0.0f, 0x1.b571ecp-50f, 0x1.0851ep-65f, 0x1.83245ep-44f,
     0x1.e71b5cp-102f, 0.0f, 0.0f, 0x1.32f436p-27f, 0x1.b2c37cp-92f, 0x1.4df24p-62f,
     0x1.3d42c2p-29f, 0.0f, 0x1.97d6ccp-104f, 0x1.1c9f3p-107f, 0.0f, 0x1.a3c27ap-108f,
     0.0f, 0x1.6c239ep-84f, 0.0f, 0.0f, 0.0f, 0x1.6fb32ep-89f, 0x1.a1391cp-32f,
     0x1.5f171ep-87f, 0x1.d50da2p-71f, 0.0f, 0x1.97cb96p-66f, 0.0f, 0x1.55492ap-85f,
     0.0f, 0.0f, 0x1.d784cep-74f, 0x1.a59e3cp-114f, 0x1.a84d8p-22f, 0.0f, 0.0f,
     0x1.81ddbcp-26f, 0.0f, 0.0f, 0x1.daf68p-115f, 0.0f, 0.0f, 0x1.0145e4p-27f, 0.0f,
     0.0f, 0x1.a6ed4p-40f, 0x1.b79dbp-85f, 0x1.4f5716p-104f, 0.0f, 0.0f, 0.0f,
     0x1.16d21cp-83f, 0x1.302012p-86f, 0.0f, 0x1.2b8ab4p-111f, 0.0f, 0x1.1fc95p-11f,
     0x1.472e4ap-73f, 0.0f, 0x1.74512ap-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ce4aeap-17f, 0.0f, 0x1.e26944p-22f, 0.0f, 0x1.f1c68cp-64f, 0.0f, 0.0f,
     0x1.1a0314p-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4bc7fcp-62f,
     0x1.5f1dd2p-93f, 0x1.191858p-111f, 0.0f, 0x1.3e927p-41f, 0.0f, 0.0f,
     0x1.e3c3b8p-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.db96cap-83f, 0.0f, 0x1.fc6566p-40f,
     0x1.a6c14cp-55f, 0x1.77a24p-112f, 0.0f, 0.0f, 0.0f, 0x1.33fad2p-116f,
     0x1.d1389cp-75f, 0x1.d1da4ep-106f, 0x1.d944e6p-22f, 0x1.730daap-121f,
     0x1.d132e6p-82f, 0.0f, 0x1.e31444p-38f, 0.0f, 0.0f, 0x1.7c8e02p-12f, 0.0f, 0.0f,
     0x1.2e006ap-41f, 0x1.ada5p-48f, 0x1.a85bc4p-113f, 0.0f, 0x1.b20044p-63f,
     0x1.be5fbep-65f, 0x1.636fcp-117f, 0.0f, 0x1.b9ca58p-87f, 0.0f, 0x1.1e729ep-97f,
     0.0f, 0x1.d911dcp-109f, 0x1.b98578p-118f, 0.0f, 0x1.c17f46p-12f, 0.0f,
     0x1.ba7b6ap-32f, 0x1.61d44ap-56f, 0.0f, 0x1.f3650ep-47f, 0.0f, 0x1.28b92cp-55f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c45944p-43f,
     0x1.d1e1e2p-100f, 0.0f, 0x1.64beacp-107f, 0.0f, 0.0f, 0x1.addc66p-76f,
     0x1.342942p-11f, 0.0f, 0.0f, 0x1.30e62p-54f, 0x1.6ecadap-21f, 0x1.fd239ep-82f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.2c82c6p-124f, 0.0f, 0.0f, 0.0f, 0x1.8faf92p-11f,
     0.0f, 0x1.92af7p-65f, 0x1.78815ep-20f, 0.0f, 0x1.3f71a6p-98f, 0x1.54d3d4p-25f,
     0.0f, 0x1.2d5668p-40f, 0.0f, 0x1.b4426ap-39f, 0x1.f16e32p-11f, 0x1.092ab2p-32f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c77e56p-28f, 0x1.6b9912p-122f,
     0.0f, 0x1.64c546p-34f, 0x1.720362p-58f, 0.0f, 0.0f, 0x1.26288p-91f,
     0x1.44c16p-35f, 0x1.790c54p-20f, 0.0f, 0x1.0d21b2p-118f, 0x1p0f, 0x1p0f,
     0x1.578976p-122f, 0.0f, 0x1.fdd7fp-37f, 0.0f, 0x1.bc3658p-53f, 0x1.c9af06p-3f,
     0x1.ee38a2p-81f, 0.0f, 0.0f, 0.0f, 0x1.022232p-8f, 0x1.b4bfccp-12f,
     0x1.f00656p-81f, 0x1.52b12ap-26f, 0.0f, 0.0f, 0.0f, 0x1.1a5176p-103f,
     0x1.db0192p-31f, 0.0f, 0x1.d51ddep-98f, 0.0f, 0.0f, 0.0f, 0x1.aafa2ep-9f,
     0x1.cd796cp-65f, 0.0f, 0x1.772798p-111f, 0x1.b32542p-115f, 0x1.a4eaap-38f,
     0x1.3f88bp-85f, 0.0f, 0x1.46324ap-119f, 0x1.79dc74p-57f, 0.0f, 0x1.780996p-88f,
     0.0f, 0x1.c6764ap-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.80fefcp-17f, 0x1.e5581ap-48f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a8490ap-72f, 0x1.94938ep-9f, 0x1.52e1f8p-68f, 0.0f,
     0.0f, 0x1.a71d0ep-116f, 0x1.91fae4p-83f, 0.0f, 0.0f, 0x1.7b919ap-111f,
     0x1.ba8de6p-18f, 0x1.b39e5ep-77f, 0x1.e614aap-42f, 0.0f, 0x1.8eb374p-74f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.31dbdep-20f, 0.0f, 0x1.85556cp-14f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.36bf6p-43f, 0x1.d76af4p-38f, 0.0f, 0.0f, 0.0f, 0x1.f68018p-35f, 0.0f,
     0x1.6b26c6p-65f, 0.0f, 0.0f, 0x1.f75116p-37f, 0x1.3a202cp-58f, 0x1.afe3ecp-7f,
     0x1.a08798p-12f, 0.0f, 0.0f, 0.0f, 0x1.6d1ccap-76f, 0x1.c0da3cp-115f,
     0x1.5ac252p-4f, 0x1.5a08p-74f, 0x1.7e2feap-27f, 0x1.f968f4p-62f, 0x1.8b2f2ap-53f,
     0x1.7a2e74p-19f, 0.0f, 0x1.e906dep-67f, 0.0f, 0x1.279ee8p-21f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d31f72p-45f, 0.0f, 0.0f, 0.0f, 0x1.b87158p-102f,
     0x1.a4436cp-18f, 0.0f, 0.0f, 0x1.64b914p-34f, 0x1.08d43ap-106f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ece58ap-122f, 0.0f, 0x1.a9fceep-56f, 0.0f, 0x1.e85f9p-10f, 0.0f, 0.0f,
     0.0f, 0x1.209f36p-43f, 0.0f, 0.0f, 0.0f, 0x1.0fd204p-39f, 0x1.4f7788p-122f,
     0x1.8516aap-60f, 0.0f, 0x1.ad2876p-3f, 0x1.309048p-8f, 0.0f, 0.0f,
     0x1.303716p-75f, 0.0f, 0x1.e776cep-19f, 0x1.d0f19cp-70f, 0x1.5a4896p-109f, 0.0f,
     0.0f, 0x1.064412p-31f, 0.0f, 0.0f, 0x1.b08bc2p-98f, 0x1.1967fap-23f, 0.0f,
     0x1.683802p-37f, 0x1.f8ffdp-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.59f9f6p-35f,
     0x1.d66044p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.37db98p-74f, 0.0f, 0.0f,
     0x1.57a694p-121f, 0x1.2e5efep-98f, 0.0f, 0x1.957136p-31f, 0x1.2cb568p-68f, 0.0f,
     0.0f, 0.0f, 0x1.49bacep-109f, 0x1.cbd002p-103f, 0.0f, 0x1.d3563ep-104f,
     0x1.724c66p-61f, 0x1.af8d54p-102f, 0x1.82b0dcp-60f, 0.0f, 0.0f, 0.0f,
     0x1.c2d13ep-106f, 0.0f, 0x1.7e7ca6p-50f, 0x1.0b3d3ap-30f, 0.0f, 0.0f, 0.0f,
     0x1.851806p-17f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.583f4ep-58f,
     0x1.b40f36p-89f, 0x1.dfd10ap-84f, 0.0f, 0x1.96b0fp-23f, 0x1.59cf3ap-78f,
     0x1.06f3fap-56f, 0x1.0aaa9ap-68f, 0.0f, 0x1.d5e4cap-102f, 0.0f, 0x1.ff12aep-38f,
     0.0f, 0x1.8faec8p-61f, 0x1.5b6436p-37f, 0.0f, 0.0f, 0.0f, 0x1.61de48p-42f, 0.0f,
     0x1.30db08p-25f, 0.0f, 0.0f, 0x1.04fb18p-58f, 0x1.aef8eep-103f, 0.0f, 0.0f,
     0x1.e45b44p-25f, 0x1.0af9a8p-12f, 0x1.b80f56p-46f, 0x1.6226e8p-25f, 0.0f, 0.0f,
     0.0f, 0x1.71b3d2p-125f, 0.0f, 0x1.530d8p-86f, 0x1.9e4406p-20f, 0x1.508522p-78f,
     0.0f, 0x1.92838cp-9f, 0x1.0faef4p-32f, 0.0f, 0.0f, 0.0f, 0x1.099548p-62f, 0.0f,
     0.0f, 0.0f, 0x1.29f6c6p-4f, 0x1.e84d42p-77f, 0x1.c86644p-102f, 0x1.6a6888p-113f,
     0.0f, 0.0f, 0x1.a24b24p-90f, 0.0f, 0.0f, 0x1.05f6f2p-4f, 0x1.80c59ep-63f, 0.0f,
     0x1.42c49cp-32f, 0.0f, 0x1.ef84a6p-98f, 0x1.3bf124p-79f, 0x1.da702cp-10f,
     0x1.19f0a2p-86f, 0.0f, 0x1.9a15bp-123f, 0x1.6ae946p-74f, 0x1.485f92p-107f, 0.0f,
     0x1.4efc0ap-103f, 0x1.5e7ccap-81f, 0x1.638222p-53f, 0.0f, 0x1.00e5ep-67f,
     0x1.71044ep-79f, 0.0f, 0x1.7c86d4p-17f, 0x1.5bea34p-30f, 0x1.92391ap-117f, 0.0f,
     0.0f, 0.0f, 0x1.a6c57ap-122f, 0x1.9bcbe8p-82f, 0x1.d5c852p-74f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.50fdcap-58f, 0x1.88c21cp-81f, 0.0f, 0x1.3251dap-124f,
     0x1.b7d35cp-62f, 0.0f, 0x1.887b02p-57f, 0x1.f07eaep-61f, 0.0f, 0x1.89ca22p-44f,
     0.0f, 0x1.2047eap-57f, 0x1.0db594p-61f, 0x1.1913b8p-111f, 0.0f, 0.0f, 0.0f,
     0x1.d66c42p-90f, 0.0f, 0x1.eb5cc4p-55f, 0.0f, 0.0f, 0.0f, 0x1.566bdp-114f,
     0x1.bfd736p-93f, 0.0f, 0.0f, 0x1.aaa118p-9f, 0.0f, 0.0f, 0x1.453268p-23f, 0.0f,
     0x1.6360a4p-16f, 0x1.8e816ap-21f, 0x1.5d1e0ap-76f, 0.0f, 0.0f, 0x1.36ac5cp-60f,
     0.0f, 0x1.8a6682p-22f, 0x1.4aba0ep-22f, 0x1.8ab9d8p-27f, 0x1.789ae8p-32f,
     0x1.60d536p-101f, 0x1.20aa76p-86f, 0x1.b2c5b4p-88f, 0x1.19e322p-125f,
     0x1.74684ep-98f, 0.0f, 0.0f, 0.0f, 0x1.b1efb2p-102f, 0.0f, 0x1.f50b7ep-52f,
     0x1.50bbaep-18f, 0x1.f0555cp-93f, 0.0f, 0.0f, 0.0f
};
static const float external_bench_wrapper_input_table_arg1[1004]  = {
     0.0f, 0x1.0bd16cp-123f, 0.0f, 0.0f, 0x1.a6aed8p-87f, 0.0f, 0.0f, 0.0f,
     0x1.869e32p-124f, 0x1.525ee2p-73f, 0.0f, 0x1.4b549ep-116f, 0x1.804b7ep-4f,
     0x1.88d4eap-87f, 0x1.4752b2p-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4f0778p-77f,
     0.0f, 0x1.d26558p-86f, 0.0f, 0.0f, 0x1.9a2834p-56f, 0.0f, 0.0f, 0x1.b30f74p-108f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.61df72p-97f, 0.0f,
     0x1.8d7fdp-69f, 0x1.0d63e8p-91f, 0.0f, 0.0f, 0x1.e7e394p-88f, 0x1.548628p-87f,
     0.0f, 0x1.ee75dp-54f, 0x1.8b3b42p-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7813f2p-105f,
     0x1.d7cf16p-17f, 0.0f, 0.0f, 0x1.056938p-20f, 0x1.e2f534p-9f, 0x1.ea071ap-53f,
     0.0f, 0x1.71a976p-77f, 0x1.2a9336p-6f, 0.0f, 0x1.88149p-82f, 0x1.5cce26p-3f,
     0x1.9965aap-50f, 0x1.6ab8d6p-51f, 0x1.72d43p-15f, 0x1.091d7ap-115f,
     0x1.5c756cp-13f, 0.0f, 0.0f, 0x1.dc8adcp-40f, 0.0f, 0x1.87ce9ep-73f, 0.0f, 0.0f,
     0.0f, 0x1.ff79e6p-24f, 0x1.b5b05ep-110f, 0x1.741a98p-44f, 0.0f, 0x1.54350cp-3f,
     0x1p0f, 0.0f, 0.0f, 0x1.8fa5dap-25f, 0x1.1e1098p-7f, 0.0f, 0x1.e2232ap-53f, 0.0f,
     0.0f, 0.0f, 0x1.bad838p-37f, 0x1.81e01cp-7f, 0x1.8aefd4p-110f, 0x1.e58224p-103f,
     0.0f, 0x1.d9c7fep-111f, 0x1.0f3aaep-16f, 0x1.c92fcap-46f, 0x1.ddd21ap-121f,
     0x1.b1880ep-113f, 0.0f, 0x1.7ed19p-14f, 0.0f, 0.0f, 0x1.4fd5b2p-106f,
     0x1.ede2b2p-88f, 0x1.02654ep-43f, 0x1.5c6b2p-30f, 0x1.49e958p-105f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d63924p-51f, 0.0f, 0.0f, 0.0f, 0x1.34b802p-66f, 0x1.311c68p-113f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f5edf2p-76f, 0x1.9e541ep-28f, 0x1.f74efap-122f, 0.0f,
     0.0f, 0x1.c4453ap-27f, 0x1.ad9b56p-114f, 0.0f, 0x1.f36facp-109f, 0.0f,
     0x1.dc79cp-110f, 0.0f, 0x1.08e2a6p-113f, 0x1.73a52ap-7f, 0.0f, 0x1.2a93c6p-35f,
     0x1.19721cp-57f, 0.0f, 0.0f, 0.0f, 0x1.51d5a4p-72f, 0.0f, 0.0f, 0x1.711a4p-117f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fc0ba2p-3f, 0x1.55172ap-91f, 0.0f,
     0x1.eab30ep-46f, 0.0f, 0.0f, 0x1.9f4cecp-51f, 0x1.835044p-50f, 0x1.1bcfcap-49f,
     0x1.dd1c1cp-27f, 0x1.28712ap-107f, 0.0f, 0x1.c87d58p-42f, 0x1.2cefa4p-92f,
     0x1.af853p-116f, 0x1.19fffcp-19f, 0.0f, 0x1.d7c10cp-74f, 0x1.087bbap-60f, 0.0f,
     0.0f, 0.0f, 0x1.953fe6p-68f, 0x1.0a528ep-122f, 0x1.17d1cap-64f, 0x1.405cacp-57f,
     0.0f, 0.0f, 0x1.26b09ep-35f, 0.0f, 0x1.873212p-108f, 0x1.c9d9e4p-56f,
     0x1.a8cd38p-96f, 0.0f, 0x1.26fd3p-23f, 0.0f, 0x1.bd0e44p-50f, 0.0f,
     0x1.6e4de4p-118f, 0x1.7911bcp-55f, 0x1.6356e2p-105f, 0x1.a88b8ap-88f, 0.0f,
     0x1.61a5bap-66f, 0.0f, 0x1.dc8352p-15f, 0x1.3baa0cp-86f, 0x1.4c2cc6p-51f,
     0x1.c8d318p-51f, 0.0f, 0x1.3607fp-46f, 0.0f, 0.0f, 0x1.4df62cp-42f, 0.0f, 0.0f,
     0x1.e6fbe6p-83f, 0x1.0b225p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3b5b4cp-5f,
     0x1.dc8dep-71f, 0x1.00f188p-99f, 0x1.bd7c0ep-113f, 0x1.f4cca6p-5f,
     0x1.a91b96p-84f, 0.0f, 0.0f, 0x1.a00352p-40f, 0.0f, 0x1.4199c4p-21f,
     0x1.64a844p-123f, 0.0f, 0x1.6f9b8ep-76f, 0x1.59275ap-35f, 0.0f, 0.0f, 0.0f,
     0x1.256d88p-71f, 0.0f, 0x1.61e9eap-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.aedb5cp-62f,
     0x1.280ad2p-86f, 0x1.2d6f82p-26f, 0.0f, 0.0f, 0x1.25f45cp-90f, 0.0f, 0.0f,
     0x1.002c5p-90f, 0.0f, 0x1.40ae06p-48f, 0.0f, 0x1.cd01b8p-57f, 0x1.1c457ap-34f,
     0x1.ffc5fep-50f, 0x1.9cc612p-26f, 0.0f, 0x1.a1387p-7f, 0.0f, 0.0f,
     0x1.67df32p-35f, 0.0f, 0x1.505ea2p-68f, 0x1.3281fp-63f, 0x1.7a47aep-72f,
     0x1.be2954p-2f, 0x1.364df6p-13f, 0.0f, 0x1.0c765p-98f, 0.0f, 0x1.3142cap-25f,
     0.0f, 0.0f, 0x1.92a256p-42f, 0x1.517facp-76f, 0x1.d212e8p-51f, 0x1.c916d6p-58f,
     0x1.6176fcp-17f, 0x1.5c2aacp-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d2f81p-112f, 0.0f,
     0.0f, 0.0f, 0x1.28868p-88f, 0x1.b1ec4ap-36f, 0.0f, 0.0f, 0.0f, 0x1.53c156p-6f,
     0.0f, 0x1.e5eeb4p-100f, 0.0f, 0.0f, 0x1.9757c8p-113f, 0.0f, 0x1.8abf94p-92f,
     0x1.56868p-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5bfab8p-12f, 0x1.bad64p-126f,
     0x1.fdba0ep-26f, 0.0f, 0x1.356f06p-34f, 0.0f, 0.0f, 0.0f, 0x1.135f58p-108f, 0.0f,
     0x1.b13114p-40f, 0x1.954d9ep-125f, 0x1.68e06ep-9f, 0x1.155262p-70f, 0.0f, 0.0f,
     0x1.5a93dap-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f8e106p-34f, 0.0f,
     0x1.d65e7ep-76f, 0x1.f52e96p-106f, 0.0f, 0.0f, 0x1.5e77e6p-44f, 0.0f,
     0x1.d73ae4p-29f, 0x1.5cb4dep-100f, 0.0f, 0x1.d11cecp-114f, 0x1.3b3c02p-124f,
     0.0f, 0x1.95d6ep-26f, 0x1.6a282p-12f, 0.0f, 0.0f, 0x1.876236p-63f,
     0x1.d948fcp-122f, 0x1.f627ecp-114f, 0.0f, 0.0f, 0.0f, 0x1.4f7794p-126f, 0.0f,
     0x1.d7de2p-49f, 0.0f, 0.0f, 0x1.75e314p-1f, 0.0f, 0x1.85c286p-33f,
     0x1.6b869cp-8f, 0.0f, 0x1.bb2cd6p-91f, 0x1.9ffd8ap-32f, 0x1.1bc708p-86f, 0.0f,
     0x1.4560dcp-14f, 0.0f, 0x1.23c5aep-30f, 0.0f, 0x1.917b7cp-24f, 0x1.1f20fep-2f,
     0.0f, 0.0f, 0x1.e68824p-40f, 0.0f, 0x1.5e82aap-35f, 0.0f, 0.0f, 0x1.5f54a2p-26f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dace8p-21f, 0.0f, 0.0f, 0.0f, 0x1.85f0ap-78f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.eed48ep-32f, 0.0f, 0.0f, 0.0f, 0x1.96360cp-55f,
     0x1.a83e3ep-35f, 0.0f, 0.0f, 0x1.f602c4p-110f, 0x1.b90e74p-116f, 0.0f, 0.0f,
     0x1.952df8p-14f, 0x1.56d17p-73f, 0x1.ec8d2ap-25f, 0.0f, 0.0f, 0x1.f662ap-20f,
     0x1.4cca26p-24f, 0x1.9041f6p-65f, 0.0f, 0.0f, 0.0f, 0x1.fb1222p-29f, 0.0f,
     0x1.f08dbp-2f, 0.0f, 0.0f, 0.0f, 0x1.5d1a5p-46f, 0.0f, 0.0f, 0x1.1c5b96p-43f,
     0x1.984cdcp-63f, 0x1.6d3858p-50f, 0x1.212a76p-106f, 0.0f, 0.0f, 0.0f,
     0x1.230dd4p-7f, 0x1.bf27dp-40f, 0.0f, 0.0f, 0.0f, 0x1.00657p-22f, 0.0f,
     0x1.c70094p-58f, 0x1.56e85cp-94f, 0.0f, 0.0f, 0x1.e58cep-109f, 0.0f, 0.0f,
     0x1.ed1e6cp-107f, 0.0f, 0x1.837fe4p-55f, 0x1.8fe68ap-92f, 0.0f, 0x1.e7f8b6p-70f,
     0x1.965456p-19f, 0.0f, 0.0f, 0x1.b13284p-99f, 0x1.39fa78p-103f, 0x1.da0888p-65f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.be71aap-115f, 0x1.a0b0bep-32f, 0x1.2920cap-126f,
     0x1.aaca02p-80f, 0x1.f507e4p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.50f852p-38f, 0x1.a11934p-56f, 0.0f, 0.0f, 0.0f, 0x1.04700cp-24f, 0.0f, 0.0f,
     0.0f, 0x1.73b86p-77f, 0.0f, 0x1.37a3cep-22f, 0x1.e56888p-23f, 0x1.d7660ep-56f,
     0x1.d99848p-115f, 0.0f, 0.0f, 0x1.65481ep-4f, 0.0f, 0x1.d9cfc8p-76f,
     0x1.94dbb4p-90f, 0.0f, 0.0f, 0.0f, 0x1.2f14b6p-106f, 0x1.d09094p-104f, 0.0f,
     0x1.af8f66p-66f, 0.0f, 0x1.994b6ap-63f, 0x1.500ce6p-115f, 0.0f, 0.0f, 0.0f,
     0x1.d13a2p-52f, 0.0f, 0.0f, 0.0f, 0x1.cfd6dep-114f, 0x1.298378p-78f, 0.0f,
     0x1.2a72dp-99f, 0x1.c4af06p-4f, 0x1.4999fap-49f, 0x1.764edcp-73f, 0.0f,
     0x1.b10974p-63f, 0x1.92c37ep-90f, 0x1.f06d5ep-103f, 0.0f, 0x1.11014cp-64f,
     0x1.3b66b8p-33f, 0x1.5f81e2p-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.07922ep-83f, 0.0f, 0x1.18e6b4p-12f, 0x1.b66dcap-17f, 0.0f,
     0x1.0cc952p-75f, 0.0f, 0x1.23c1ecp-46f, 0x1.0c7338p-51f, 0.0f, 0x1.ed9872p-9f,
     0.0f, 0x1.0ccb32p-108f, 0x1.b4d6ap-122f, 0.0f, 0.0f, 0x1.a8be74p-107f, 0.0f,
     0x1.7bacbep-81f, 0x1.d72beep-122f, 0x1.f7ca94p-2f, 0x1.12d46ep-27f, 0.0f, 0.0f,
     0x1.ad02e6p-65f, 0x1.a967fep-44f, 0x1.57457ap-87f, 0.0f, 0x1.2ef44ep-54f,
     0x1.8b6cf4p-89f, 0.0f, 0x1.edb4a4p-14f, 0.0f, 0x1.43304p-98f, 0.0f,
     0x1.a8b4dp-2f, 0.0f, 0.0f, 0x1.ee5508p-109f, 0.0f, 0.0f, 0.0f, 0x1.a0e854p-95f,
     0x1.6ab29cp-125f, 0.0f, 0.0f, 0x1.1bf0dp-52f, 0.0f, 0x1.d86ae4p-19f, 0.0f,
     0x1.586066p-33f, 0.0f, 0x1.7df82ep-46f, 0.0f, 0.0f, 0.0f, 0x1.b357cp-65f,
     0x1.14cbeap-5f, 0x1.dde93p-110f, 0.0f, 0.0f, 0x1.a72aaap-121f, 0x1.3578dep-59f,
     0x1.e868cap-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6a5126p-50f, 0x1.a4be04p-85f,
     0x1.47681p-14f, 0.0f, 0.0f, 0.0f, 0x1.8ae78ap-24f, 0x1.5a6aa2p-117f, 0.0f,
     0x1.f6b73p-38f, 0x1.d52f7ep-105f, 0.0f, 0.0f, 0x1.2da3aep-17f, 0x1.6a623cp-8f,
     0x1.41ec42p-75f, 0x1.935a56p-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fb6a08p-126f, 0.0f,
     0x1.f05f36p-75f, 0.0f, 0.0f, 0x1.160108p-31f, 0.0f, 0x1.b0b2a6p-60f,
     0x1.5cdb34p-93f, 0.0f, 0.0f, 0x1.3c8916p-109f, 0.0f, 0x1.4fdf52p-4f, 0.0f,
     0x1.d4ec1ep-56f, 0.0f, 0.0f, 0x1.5a122cp-61f, 0.0f, 0x1.672d0ep-12f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.cc29aep-44f, 0.0f, 0x1.4b6e46p-22f, 0.0f, 0.0f, 0x1.938144p-20f,
     0x1.619e9ap-124f, 0x1.1ca06ap-65f, 0.0f, 0x1.f3fd82p-100f, 0.0f, 0.0f,
     0x1.8e7eb6p-25f, 0.0f, 0.0f, 0x1.f9c14p-106f, 0x1.14438ep-125f, 0x1.d40832p-62f,
     0x1.3bdf5ap-110f, 0x1.60588ep-65f, 0.0f, 0x1.e203ecp-6f, 0.0f, 0x1.4dab78p-121f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.218b1ap-55f, 0x1.aead98p-32f, 0.0f,
     0x1.213d1ap-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ee290ap-66f, 0x1.29016ep-51f, 0.0f,
     0x1.cd15acp-120f, 0.0f, 0.0f, 0.0f, 0x1.192158p-41f, 0.0f, 0x1.b3664cp-33f,
     0x1.bceb3ep-119f, 0x1.4cb77ep-94f, 0.0f, 0.0f, 0x1.7acd28p-19f, 0.0f,
     0x1.93b1bep-123f, 0x1.99282ep-117f, 0.0f, 0x1.a0f2dap-58f, 0.0f, 0.0f, 0.0f,
     0x1.f07c22p-31f, 0x1.58c05p-17f, 0.0f, 0x1.ff9dacp-25f, 0x1.9f9cfep-60f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f35056p-4f, 0x1.e72346p-27f, 0.0f, 0.0f,
     0x1.cd1528p-60f, 0.0f, 0.0f, 0x1.ac01bcp-43f, 0x1.68f9cep-92f, 0x1.4d05ap-52f,
     0x1.441ffep-38f, 0x1.ff5ef8p-52f, 0.0f, 0.0f, 0x1.2e9e9ep-108f, 0x1.b6eb28p-121f,
     0x1.452468p-47f, 0x1.b8a76ap-83f, 0x1.248632p-97f, 0x1.b3543ap-22f, 0.0f,
     0x1.f1d68p-15f, 0x1.b858p-9f, 0x1.83281cp-10f, 0.0f, 0x1.5702c2p-28f,
     0x1.98f008p-9f, 0x1.e1279ep-111f, 0.0f, 0x1.bc9caap-100f, 0x1.cf8196p-78f,
     0x1.d216b8p-105f, 0.0f, 0.0f, 0x1.d56322p-24f, 0x1.4d7ed4p-85f, 0x1.2e9ce2p-81f,
     0.0f, 0x1.2bcc74p-17f, 0x1.fcbe44p-93f, 0x1.8800ep-92f, 0x1.3e6348p-82f,
     0x1.e5b318p-35f, 0x1.506b2p-74f, 0x1.769bap-32f, 0.0f, 0.0f, 0x1.8239a4p-67f,
     0.0f, 0.0f, 0x1.c8d9aep-69f, 0x1.48d13cp-64f, 0.0f, 0x1.8b68e6p-46f,
     0x1.c97458p-121f, 0.0f, 0x1.597fd4p-116f, 0.0f, 0.0f, 0x1.1b3216p-101f,
     0x1.3eff76p-80f, 0x1.4e2826p-104f, 0.0f, 0.0f, 0.0f, 0x1.771198p-106f, 0.0f,
     0.0f, 0.0f, 0x1.920dc8p-4f, 0.0f, 0x1.c6dfc6p-19f, 0.0f, 0x1p0f, 0.0f,
     0x1.75a692p-68f, 0.0f, 0x1.d7ac02p-86f, 0.0f, 0x1.e0a77ap-31f, 0x1.76d6acp-123f,
     0.0f, 0x1.aba8p-22f, 0x1.ffd49ep-62f, 0x1.741f4cp-6f, 0x1.4f7096p-36f, 0.0f,
     0.0f, 0.0f, 0x1.630358p-5f, 0x1.140b5cp-54f, 0.0f, 0x1.1da9aep-20f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.7ae1aep-64f, 0x1.d6f5fp-115f, 0.0f, 0x1.c127c8p-22f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6b3afep-24f, 0.0f, 0x1.4bdadep-96f,
     0x1.9b5a84p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bd5f38p-15f, 0x1.5af638p-125f, 0.0f,
     0x1.e995a4p-123f, 0x1.83b504p-59f, 0.0f, 0x1.8cde78p-97f, 0.0f, 0x1.f6c4b6p-124f,
     0x1.4fa34p-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b50f3p-76f, 0x1.6d0bbap-25f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9d1fa4p-61f, 0x1.08093cp-17f, 0.0f, 0x1.8349dep-36f, 0.0f,
     0.0f, 0.0f, 0x1.33d984p-80f, 0x1.1a8806p-107f, 0x1.a0ff92p-21f, 0.0f, 0.0f,
     0x1.c0ad52p-58f, 0.0f, 0x1.6cf37ep-6f, 0x1.2689d4p-113f, 0.0f, 0x1.1189fp-93f,
     0.0f, 0.0f, 0x1.b91728p-30f, 0x1.5dea5ep-114f, 0x1.482fb6p-1f, 0.0f,
     0x1.02d488p-19f, 0.0f, 0.0f, 0.0f, 0x1.c21f0ap-42f, 0.0f, 0x1.c4e534p-11f,
     0x1.0e24b6p-24f, 0x1.68feecp-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7fd82ep-67f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7bff22p-118f, 0x1.9c521ep-67f, 0x1.1f10ep-124f,
     0x1.bbcb32p-51f, 0.0f, 0.0f, 0x1.87366ap-9f, 0.0f, 0.0f, 0.0f, 0x1.d43d58p-103f,
     0x1.92a33cp-67f, 0.0f, 0x1.707e9p-70f, 0x1.0f1096p-19f, 0x1.a677bep-22f, 0.0f,
     0.0f, 0x1.56f6c2p-76f, 0x1.64fddep-59f, 0.0f, 0x1.f85f4ep-109f, 0.0f, 0.0f,
     0x1.0a2824p-40f, 0.0f, 0.0f, 0.0f, 0x1.7dceap-23f, 0x1.234886p-87f,
     0x1.5ff294p-17f, 0x1.0378fp-69f, 0.0f, 0x1.5cf6acp-58f, 0.0f, 0.0f,
     0x1.c17286p-39f, 0x1.2a98c2p-86f, 0x1.9360a4p-77f, 0x1.2dcd96p-49f, 0.0f,
     0x1.acdc08p-18f, 0x1.f71d0ap-110f, 0.0f, 0.0f, 0x1.81f798p-28f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.9d15dcp-88f, 0.0f, 0x1.6d1ebcp-96f, 0x1.88581p-98f, 0.0f,
     0x1.7b9552p-57f, 0x1.c893b6p-86f, 0.0f, 0x1.76c538p-84f, 0x1.2848c8p-119f,
     0x1.5debf6p-66f, 0x1.dd343cp-109f, 0x1.23cfdep-51f, 0.0f, 0x1.6e0896p-66f,
     0x1.eed314p-23f, 0.0f, 0.0f, 0x1.5b6a08p-24f, 0.0f, 0x1.593a7p-102f,
     0x1.52db8cp-83f, 0x1.a9081p-93f, 0.0f, 0.0f, 0x1.1e3c8cp-83f, 0.0f,
     0x1.011108p-114f, 0x1.0a3f7ap-62f, 0.0f, 0x1.839e7ap-100f, 0.0f, 0.0f,
     0x1.abff52p-51f, 0.0f, 0.0f, 0.0f, 0x1.1b337ep-52f, 0x1.93a6b2p-77f, 0.0f,
     0x1.b6752ep-98f, 0x1.2687e6p-12f, 0x1.675064p-27f, 0x1.3bb4fep-91f, 0.0f,
     0x1.cf0e82p-56f, 0.0f, 0.0f, 0.0f, 0x1.f1f47ep-100f
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
            ml_float4_t tmp3;
            int32_t tmp4;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            memcpy(&tmp1, ((ml_float4_t*)(external_bench_wrapper_input_table_arg1+ i)), 16);
            tmp2 = Sleef_remainderf4_avx2128(tmp0, tmp1);
            memcpy(((ml_float4_t*)(external_bench_wrapper_output_table+ i)), &(tmp2), 16);
            tmp3 = local_acc + tmp2;
            local_acc = tmp3;
            tmp4 = i + INT32_C(4);
            i = tmp4;
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
    printf("Sleef_remainderf4_avx2128 %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_remainderf4_avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
