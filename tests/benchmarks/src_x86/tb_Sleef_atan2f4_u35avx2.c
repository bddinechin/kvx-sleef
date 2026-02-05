/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_atan2f4_u35avx2128.c --function Sleef_atan2f4_u35avx2128 \
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
     0x1.688814p-125f, 0.0f, 0x1.7c2046p-118f, 0x1.d857bep-47f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1bccdep-115f, 0x1.a0d8dap-63f, 0x1.898b7ap-17f, 0x1.8aeee6p-34f,
     0x1.d93dc8p-81f, 0x1.39989cp-104f, 0x1.15bdb2p-13f, 0x1.b725fp-59f,
     0x1.083f7ap-102f, 0.0f, 0x1.f88f16p-116f, 0x1.f10cf8p-71f, 0.0f, 0x1.429982p-23f,
     0.0f, 0.0f, 0.0f, 0x1.333eeep-10f, 0x1.21501cp-5f, 0.0f, 0x1.1f5bb2p-89f,
     0x1.75c4fp-59f, 0x1.a258c8p-39f, 0.0f, 0x1.71e708p-56f, 0x1.48d1b2p-25f, 0.0f,
     0x1.26d34cp-46f, 0.0f, 0.0f, 0.0f, 0x1.b77248p-45f, 0x1.ce8936p-80f,
     0x1.99cd2ap-22f, 0.0f, 0.0f, 0x1.0ca898p-96f, 0.0f, 0x1.47177cp-117f, 0.0f, 0.0f,
     0x1.d67c6ap-26f, 0.0f, 0.0f, 0.0f, 0x1.c47f86p-54f, 0x1.be363cp-10f,
     0x1.d5f214p-16f, 0.0f, 0x1.86bfb6p-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.30cbbp-71f,
     0.0f, 0.0f, 0x1.aa5b3p-44f, 0.0f, 0.0f, 0.0f, 0x1.da2d7ep-60f, 0x1.c2027p-49f,
     0.0f, 0x1.9b2b08p-95f, 0x1.c6e87ap-98f, 0x1.f01af8p-31f, 0x1.551336p-77f,
     0x1.a291d2p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3c0096p-112f, 0.0f, 0.0f, 0.0f, 0x1.8c8c98p-43f, 0x1.3af178p-102f, 0.0f,
     0.0f, 0x1.299aecp-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f2144p-38f, 0.0f, 0.0f, 0.0f,
     0x1.00d2f6p-112f, 0x1.3c0bc2p-2f, 0.0f, 0x1.2eda52p-117f, 0.0f, 0x1.9a8a4p-86f,
     0.0f, 0x1.8225c8p-61f, 0.0f, 0x1.29b21p-124f, 0x1.143158p-114f, 0x1.cd5ab4p-4f,
     0.0f, 0.0f, 0x1.621b8cp-73f, 0.0f, 0.0f, 0x1.d963acp-94f, 0x1.240dc4p-30f,
     0x1.46b8cp-6f, 0x1.0be63ep-17f, 0x1.1a2532p-17f, 0.0f, 0x1.777b8ap-40f,
     0x1.96e0a4p-8f, 0x1.3c04a2p-124f, 0x1.bf26e6p-52f, 0.0f, 0x1.ff15dp-123f, 0.0f,
     0.0f, 0x1.daf952p-2f, 0x1.fb4fe2p-23f, 0x1.b6fc74p-97f, 0x1.1ae752p-101f,
     0x1.8a5bc2p-118f, 0x1.b181c4p-60f, 0x1.137948p-28f, 0.0f, 0.0f, 0x1.eeed9ep-94f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.95afd8p-78f, 0x1.8c0938p-15f, 0x1.559e44p-73f, 0.0f,
     0.0f, 0x1.ee71fap-45f, 0x1.c8c3ap-13f, 0x1.564744p-99f, 0x1.5c9178p-69f,
     0x1.deca92p-5f, 0.0f, 0.0f, 0x1.db3084p-54f, 0.0f, 0x1.129a5p-82f, 0.0f,
     0x1.0513d4p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a6c7c6p-44f, 0.0f, 0.0f,
     0x1.372b96p-27f, 0.0f, 0.0f, 0x1.d0f6dap-126f, 0.0f, 0x1.7bb554p-52f,
     0x1.564c04p-6f, 0x1.2bf5fcp-102f, 0.0f, 0x1.a9b77cp-32f, 0.0f, 0x1.5fe398p-52f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.460598p-112f, 0.0f, 0x1.ddb9e8p-114f, 0.0f,
     0x1.4ee742p-119f, 0x1.16a8eep-65f, 0x1.560fdep-73f, 0.0f, 0x1.d4636cp-8f,
     0x1.2aabc2p-17f, 0.0f, 0x1.91b2f8p-6f, 0.0f, 0x1.3f9e4p-123f, 0.0f,
     0x1.5b17cp-30f, 0x1.43893p-79f, 0x1.48c7p-107f, 0x1.520906p-37f, 0.0f, 0.0f,
     0.0f, 0x1.f8e1f4p-34f, 0.0f, 0.0f, 0.0f, 0x1.1eae28p-23f, 0.0f, 0.0f,
     0x1.98ae02p-21f, 0x1.56cfdep-43f, 0x1.599cbep-46f, 0x1.d16c3ep-62f,
     0x1.3b56ep-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f478fep-56f, 0x1.221074p-80f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2afc6cp-26f, 0.0f, 0x1.c138d6p-83f, 0.0f, 0.0f,
     0x1.b8840ap-124f, 0.0f, 0x1.66d858p-110f, 0x1.5599b2p-72f, 0x1.29cb9ep-102f,
     0.0f, 0.0f, 0.0f, 0x1.b630ecp-87f, 0x1.8d6288p-60f, 0.0f, 0.0f, 0x1.66e1cap-31f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ca7d22p-34f, 0x1.f9d8eap-78f, 0.0f,
     0x1.5d5e86p-103f, 0x1.dfa152p-13f, 0x1.9909c8p-33f, 0x1.aa992ap-29f,
     0x1.29854p-61f, 0x1.59b418p-14f, 0x1.7e81f2p-48f, 0x1.8cdec2p-30f, 0.0f,
     0x1.5e2086p-105f, 0x1.94db6ap-124f, 0.0f, 0x1.272c96p-15f, 0.0f, 0x1.547702p-22f,
     0x1.c93f6p-77f, 0.0f, 0.0f, 0x1.adda4cp-15f, 0x1.ac7166p-51f, 0.0f, 0.0f,
     0x1.0245e4p-39f, 0x1.74df7ap-68f, 0x1.89967ap-15f, 0.0f, 0x1.ec3194p-49f,
     0x1.9f9dd2p-102f, 0.0f, 0x1.3ff04ap-2f, 0x1.8176ap-1f, 0.0f, 0x1.23efa2p-57f,
     0.0f, 0x1.c52512p-109f, 0.0f, 0x1.efc07p-34f, 0.0f, 0x1.297858p-63f,
     0x1.59a65ap-16f, 0.0f, 0x1.2c2d38p-44f, 0.0f, 0x1.8dc464p-119f, 0.0f,
     0x1.344f02p-13f, 0.0f, 0x1.fa999p-87f, 0x1.f59b1ap-85f, 0x1.76c03ep-121f,
     0x1.f132fap-1f, 0.0f, 0x1.820e84p-24f, 0.0f, 0x1.d7ed24p-88f, 0.0f,
     0x1.70ab6cp-118f, 0.0f, 0x1.24a23ap-101f, 0x1.7974aap-66f, 0.0f, 0.0f, 0.0f,
     0x1.c861e2p-18f, 0.0f, 0.0f, 0x1.dd2052p-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a3f8e4p-21f, 0.0f, 0x1.050bcep-84f, 0x1.b47d38p-122f, 0x1.fd06eap-79f, 0.0f,
     0x1.37b88ep-61f, 0x1.26c5p-63f, 0x1.af3196p-14f, 0x1.460eecp-88f, 0.0f,
     0x1.434e0ep-11f, 0.0f, 0x1.e7bbcep-115f, 0.0f, 0.0f, 0.0f, 0x1.cc7946p-96f, 0.0f,
     0.0f, 0x1.276144p-104f, 0x1.abd15p-81f, 0x1.fc2b8cp-47f, 0x1.fbca5ep-49f,
     0x1.87762cp-100f, 0.0f, 0.0f, 0x1.69598ap-58f, 0x1.3dcba8p-100f, 0.0f, 0.0f,
     0.0f, 0x1.816496p-42f, 0.0f, 0x1.7c9cf2p-100f, 0x1.e407a2p-8f, 0x1.8e17f6p-70f,
     0.0f, 0.0f, 0.0f, 0x1.d204ap-113f, 0.0f, 0.0f, 0.0f, 0x1.3286dp-6f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b5bc6ep-8f, 0x1.def0fap-29f, 0x1.cad42cp-6f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.5e3852p-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.df6b5ep-46f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f39108p-32f, 0x1.c62b04p-126f, 0.0f,
     0x1.c8dfap-49f, 0.0f, 0x1.696e6cp-42f, 0.0f, 0x1.b40b3ap-4f, 0.0f, 0.0f,
     0x1.d1181ep-125f, 0x1.7d3e52p-87f, 0.0f, 0x1.37bb0cp-95f, 0.0f, 0x1.e8463cp-41f,
     0x1.049bb8p-34f, 0.0f, 0.0f, 0.0f, 0x1.6893fcp-110f, 0.0f, 0x1.dcd7ccp-16f, 0.0f,
     0x1.235b38p-86f, 0x1.879c42p-37f, 0.0f, 0.0f, 0.0f, 0x1.af2444p-98f,
     0x1.c60406p-30f, 0x1.5fd0f4p-126f, 0x1.a3716cp-122f, 0x1.537028p-103f, 0.0f,
     0.0f, 0x1.6b8814p-60f, 0.0f, 0x1.99bf32p-99f, 0.0f, 0x1.cb8b98p-5f,
     0x1.65c876p-23f, 0x1.3a8938p-125f, 0.0f, 0x1.713c4ep-78f, 0.0f, 0x1.ce4828p-108f,
     0.0f, 0x1.b76e24p-20f, 0x1.e88ca6p-38f, 0x1.0002eap-82f, 0x1.12e372p-109f, 0.0f,
     0.0f, 0.0f, 0x1.f667e8p-126f, 0x1.147b2cp-115f, 0x1.509952p-121f, 0x1.87286cp-4f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d783c2p-88f, 0.0f, 0x1.7c179p-90f, 0x1.046d8ep-16f,
     0.0f, 0x1.fc7bbep-26f, 0x1.dd0c86p-95f, 0.0f, 0.0f, 0.0f, 0x1.15c462p-42f,
     0x1.333e64p-119f, 0.0f, 0x1.d5740cp-45f, 0x1.a8e828p-50f, 0x1.01256ep-96f,
     0x1.66348ap-70f, 0.0f, 0x1.4475bep-11f, 0.0f, 0.0f, 0.0f, 0x1.a18f5ep-67f,
     0x1.4e5aecp-29f, 0x1.d3949ep-71f, 0.0f, 0x1.a833eap-96f, 0x1.05a31p-92f, 0.0f,
     0x1.fe53f8p-43f, 0.0f, 0x1.baeca8p-38f, 0x1.a03efp-65f, 0x1.b5f1fap-106f, 0.0f,
     0x1.3fbe4ap-77f, 0.0f, 0.0f, 0x1.207ae6p-98f, 0.0f, 0.0f, 0.0f, 0x1.864032p-84f,
     0.0f, 0.0f, 0x1.47ca6ep-93f, 0.0f, 0.0f, 0x1.c28b34p-68f, 0.0f, 0x1.d7adecp-80f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.fe56b4p-4f, 0.0f, 0x1.0e0406p-78f, 0.0f, 0.0f,
     0x1.19d0ccp-119f, 0.0f, 0x1.554a9cp-88f, 0.0f, 0.0f, 0x1.0b7f22p-77f,
     0x1.57050ep-115f, 0x1.58ba64p-61f, 0.0f, 0x1.32f914p-88f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.554c54p-38f, 0.0f, 0.0f, 0.0f, 0x1.8c7b9p-48f, 0x1.e9819ep-99f,
     0x1.7edbacp-121f, 0.0f, 0x1.17ae1ep-82f, 0.0f, 0.0f, 0.0f, 0x1.6a762p-95f, 0.0f,
     0x1.116aaep-41f, 0x1.0a5dccp-62f, 0x1.df95dp-75f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7346f8p-62f, 0.0f, 0.0f, 0x1.b1e198p-63f, 0.0f, 0.0f, 0x1.d2aabap-86f,
     0x1.922152p-111f, 0.0f, 0.0f, 0x1.6254cep-9f, 0x1.6c57f8p-80f, 0x1.844116p-103f,
     0x1.2afc94p-1f, 0x1.fc30e4p-26f, 0.0f, 0.0f, 0x1.f05e22p-81f, 0x1p0f,
     0x1.9c11eep-99f, 0x1.e20aaep-99f, 0.0f, 0.0f, 0.0f, 0x1.55c7eap-84f,
     0x1.191b5ap-106f, 0.0f, 0.0f, 0x1.e7148ap-53f, 0x1.9c9e8ep-82f, 0x1.418c28p-50f,
     0x1p0f, 0x1.c41352p-37f, 0x1.67c034p-12f, 0.0f, 0x1.78edf2p-51f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b3a5bep-87f, 0.0f, 0x1.c1546cp-29f, 0x1.ae26aep-40f,
     0x1.e1c1ccp-28f, 0x1.c4cafcp-49f, 0x1.2c4e0cp-11f, 0.0f, 0.0f, 0x1.7171a6p-41f,
     0.0f, 0x1.67695p-54f, 0x1.49c312p-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.53509cp-19f, 0x1.07395ap-62f, 0.0f, 0.0f, 0x1.5c0c7ap-13f, 0x1.2f73dp-120f,
     0x1.0cef98p-11f, 0.0f, 0x1.0f2908p-110f, 0x1.0db30ep-10f, 0.0f, 0.0f, 0.0f,
     0x1.b9937ep-23f, 0x1.e53144p-23f, 0.0f, 0x1.a156ap-61f, 0x1.91a76ap-66f, 0.0f,
     0x1.14091p-89f, 0x1.80e9cp-96f, 0.0f, 0x1.6cb3ep-123f, 0x1.34fdp-11f, 0.0f,
     0x1.e467p-108f, 0.0f, 0x1.f9ebp-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ce28acp-83f, 0.0f, 0x1.a1b382p-70f, 0.0f, 0.0f, 0x1.0631dp-76f,
     0x1.12efdcp-93f, 0.0f, 0x1.7bce5p-78f, 0.0f, 0.0f, 0x1.9ccc34p-108f,
     0x1.cf2b36p-123f, 0x1.2210a6p-62f, 0x1.749b1ep-38f, 0x1.bcf5eep-1f,
     0x1.78db44p-47f, 0.0f, 0x1.1b6afcp-117f, 0x1.0cdff8p-73f, 0x1.bae6f6p-78f, 0.0f,
     0x1.4a4846p-88f, 0.0f, 0x1.e0840ep-79f, 0x1.28fc7p-106f, 0x1.285486p-49f,
     0x1.7c4db6p-47f, 0.0f, 0x1.1c7716p-108f, 0.0f, 0x1.346e98p-23f, 0x1.e51d7ep-59f,
     0.0f, 0.0f, 0x1.57ac96p-69f, 0x1.5544f8p-90f, 0.0f, 0x1.c43488p-70f,
     0x1.bb9fccp-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.159c02p-121f, 0x1.7f461ep-28f,
     0.0f, 0.0f, 0.0f, 0x1.baad88p-95f, 0x1.f1c07cp-15f, 0x1.2eff3ep-84f,
     0x1.6b1046p-16f, 0x1.c07f88p-75f, 0.0f, 0x1.55dad2p-105f, 0x1.b482fap-94f,
     0x1.33428ap-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0dc2c8p-115f, 0x1.bcfb54p-39f,
     0x1.b52c8ap-15f, 0.0f, 0.0f, 0x1.19b3cp-31f, 0x1.c54516p-10f, 0.0f,
     0x1.f350aep-91f, 0x1.4718dap-31f, 0.0f, 0.0f, 0.0f, 0x1.8da4d6p-82f,
     0x1.399198p-14f, 0.0f, 0x1.004d6ap-80f, 0x1.c965aep-104f, 0.0f, 0.0f,
     0x1.d70d62p-39f, 0.0f, 0.0f, 0x1.da13d6p-119f, 0.0f, 0x1.b37446p-117f,
     0x1.69d39ep-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0961a6p-112f,
     0x1.12809ep-101f, 0.0f, 0x1.88e72cp-91f, 0x1.fc7f16p-39f, 0.0f, 0x1.fa2002p-66f,
     0x1.4f0ed2p-75f, 0.0f, 0x1.3443e4p-27f, 0x1.59e09ap-60f, 0.0f, 0x1.9a5ae6p-49f,
     0.0f, 0.0f, 0.0f, 0x1.a9601cp-59f, 0x1.4c4a4ep-88f, 0x1.c9b772p-113f,
     0x1.326b34p-83f, 0x1.44565cp-96f, 0.0f, 0x1.3aa7f4p-105f, 0x1.c59112p-1f,
     0x1.cd3f8cp-88f, 0x1.23c3d8p-57f, 0x1.58ce14p-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e10f2ap-82f, 0x1.e4c304p-17f, 0x1.e12702p-53f, 0x1.b879fp-56f, 0.0f,
     0.0f, 0.0f, 0x1.8a9fap-20f, 0.0f, 0x1.0e4022p-20f, 0.0f, 0x1.c5fa9ep-42f,
     0x1.777e1ap-105f, 0x1.9e578p-33f, 0x1.41b114p-110f, 0.0f, 0x1.35142cp-119f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b819e6p-124f, 0x1.2e9e46p-84f, 0.0f, 0x1.3c37ecp-5f, 0.0f,
     0x1.2e95fep-74f, 0x1.317338p-90f, 0.0f, 0x1.48bd1ep-46f, 0x1.964cf6p-15f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.46695ap-20f, 0.0f, 0x1.72e85ap-15f, 0x1.20a518p-80f,
     0x1.b98038p-49f, 0.0f, 0.0f, 0.0f, 0x1.35fa9ap-72f, 0.0f, 0x1.c4fde2p-91f, 0.0f,
     0x1.be2794p-118f, 0x1.223dfp-1f, 0x1.99b78ep-95f, 0x1.e44e52p-98f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f3386cp-49f, 0.0f, 0.0f, 0x1.882a28p-9f,
     0x1.3f4874p-126f, 0.0f, 0x1.96773ap-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.343b88p-71f, 0x1p0f, 0x1.7db07ap-60f, 0.0f, 0x1.44a3ep-72f, 0.0f, 0.0f,
     0x1.781054p-2f, 0.0f, 0.0f, 0.0f, 0x1.f52874p-44f, 0x1.bcefaep-8f,
     0x1.cb915cp-86f, 0x1.728ca6p-13f, 0x1.dc8d8ap-18f, 0x1.9a12d4p-36f, 0.0f,
     0x1.f55368p-103f, 0x1.bc6c48p-26f, 0x1.9edc22p-99f, 0.0f, 0.0f, 0.0f,
     0x1.28aa34p-62f, 0.0f, 0x1.32a6bcp-23f, 0.0f, 0.0f, 0.0f, 0x1.e9a256p-108f, 0.0f,
     0.0f, 0x1.5a5774p-86f, 0x1.3f866p-38f, 0x1.1eb464p-22f, 0.0f, 0x1.a4b9d8p-85f,
     0x1.a5e7d8p-25f, 0.0f, 0x1.5fd9f4p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.62d25p-121f,
     0x1.3878ep-61f, 0x1.382408p-75f, 0x1.a3068cp-85f, 0x1.43622cp-32f, 0.0f,
     0x1.84734ep-67f, 0.0f, 0x1.c5741ap-120f, 0x1.92d412p-98f, 0.0f, 0.0f, 0.0f,
     0x1.93db04p-52f, 0x1.405a0ap-124f, 0.0f, 0.0f, 0.0f, 0x1.96f1ccp-116f, 0.0f,
     0.0f, 0x1.70d85ep-64f, 0x1.5c2bb6p-13f, 0x1.e6377ap-51f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ccbeb2p-28f, 0.0f, 0x1.303bacp-50f, 0.0f, 0x1.107826p-86f,
     0x1.e6e364p-111f, 0x1.b5d1eep-76f, 0x1.e74ad6p-125f, 0x1.4bec52p-66f,
     0x1.bc0892p-124f, 0x1.4e3656p-19f, 0x1.e28c84p-2f, 0x1.7ec542p-15f, 0.0f,
     0x1.48b8d8p-94f, 0x1.d8ef9ap-82f, 0x1.794df6p-60f, 0.0f, 0x1.85467ep-107f, 0.0f,
     0x1.0a682ep-112f, 0.0f, 0x1.05d0f4p-10f, 0x1.b9124p-118f, 0x1.6447ccp-60f,
     0x1.320142p-27f, 0x1.a63a9ap-90f, 0x1.b14522p-117f, 0.0f, 0x1.c6bef6p-1f, 0.0f,
     0x1.3e682p-96f, 0.0f, 0x1.99da9ap-6f, 0x1.dcba6ep-82f, 0x1.ba947cp-89f,
     0x1.105deap-20f, 0x1.24c728p-51f, 0x1.10ed1ep-54f, 0x1.74192ap-75f, 0.0f,
     0x1.b9b896p-39f, 0.0f, 0x1.f86382p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.392fe6p-80f, 0.0f, 0.0f, 0x1.27eb48p-65f, 0x1.ccd162p-65f, 0x1.52d1b2p-8f,
     0x1.84afaap-95f, 0x1.a9a2bep-27f, 0x1.75bdd2p-104f, 0.0f, 0.0f, 0x1.390928p-123f,
     0.0f, 0x1.f9eb66p-27f, 0x1.07f4d4p-51f, 0.0f, 0.0f, 0x1.bf8364p-24f, 0.0f,
     0x1.6a56c2p-101f, 0x1.45c9e2p-12f, 0x1.5c0f1ep-109f, 0x1.a0d082p-67f, 0.0f, 0.0f,
     0.0f, 0x1.488e2cp-21f, 0x1.1d8c7ep-31f
};
static const float external_bench_wrapper_input_table_arg1[1004]  = {
     0x1.db133ap-69f, 0x1.3f43bcp-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.96d0ccp-113f,
     0x1.533464p-49f, 0.0f, 0x1.9c4c18p-44f, 0.0f, 0.0f, 0x1.b27b62p-47f, 0.0f,
     0x1.03fd9ap-78f, 0x1.a1a966p-67f, 0.0f, 0x1.3b8734p-52f, 0x1.4d5164p-47f, 0.0f,
     0.0f, 0x1.593854p-70f, 0x1.645896p-58f, 0x1.c43126p-11f, 0.0f, 0x1.1cd37ep-14f,
     0.0f, 0x1.d39002p-25f, 0x1.3ca2d8p-74f, 0x1.8a6adap-5f, 0x1.268878p-66f,
     0x1.e7c822p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eddd92p-31f, 0x1.8a7996p-16f,
     0x1.dafa88p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0288dp-36f, 0.0f, 0.0f,
     0x1.c648bcp-35f, 0.0f, 0x1.4a20f6p-22f, 0.0f, 0x1.4d4676p-40f, 0x1.10f574p-4f,
     0.0f, 0.0f, 0.0f, 0x1.f21ad8p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6b9f46p-86f, 0x1.a300eep-59f, 0x1.4ce87ep-56f, 0x1.d7484ep-111f, 0.0f,
     0x1.e0cba8p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f775c4p-22f, 0x1.1570fcp-16f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c8bdb8p-106f, 0.0f, 0.0f, 0x1.ddbe8cp-122f,
     0.0f, 0x1.5d849ep-18f, 0x1.f21dd4p-109f, 0x1.73a594p-100f, 0.0f, 0x1.2aa548p-70f,
     0.0f, 0x1.ae9c1ap-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3e0646p-96f, 0x1.310c9cp-55f,
     0.0f, 0.0f, 0x1.fb9f92p-29f, 0.0f, 0x1.67e60cp-62f, 0x1.30e842p-49f,
     0x1.8c312ap-19f, 0x1.0bd814p-103f, 0.0f, 0.0f, 0x1.d7d7f4p-81f, 0x1.c37036p-96f,
     0x1.d7a16cp-112f, 0.0f, 0x1.ac5d5p-81f, 0x1.01891ap-70f, 0.0f, 0.0f,
     0x1.fc6ba4p-25f, 0.0f, 0.0f, 0x1.869fc4p-20f, 0x1.cb4778p-100f, 0x1.3aa5eep-6f,
     0x1p0f, 0.0f, 0.0f, 0x1.56ff5cp-119f, 0x1.61131ep-65f, 0x1.8057c8p-73f, 0.0f,
     0.0f, 0.0f, 0x1.e3014p-117f, 0x1.f7ede6p-56f, 0x1.ced83cp-110f, 0.0f,
     0x1.7cff58p-88f, 0x1.8012cep-47f, 0x1.e0e336p-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a30674p-76f, 0x1.5aabcap-55f, 0.0f, 0.0f, 0x1.c6502p-73f, 0.0f,
     0x1.2a059cp-109f, 0.0f, 0.0f, 0x1.3061fap-34f, 0.0f, 0x1.c6a0dep-47f,
     0x1.309b48p-111f, 0x1.22cbbcp-57f, 0.0f, 0x1.880ae4p-108f, 0x1.b4ef2ap-117f,
     0x1.ba58fp-114f, 0.0f, 0x1.bdb3e2p-84f, 0.0f, 0.0f, 0x1.dc84bap-46f, 0.0f,
     0x1.0efd8p-4f, 0x1.e6405ep-57f, 0x1.d33ec8p-71f, 0.0f, 0.0f, 0x1.cc258cp-102f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ac117p-90f, 0x1.c3444cp-11f, 0.0f, 0.0f, 0.0f,
     0x1.0bd9dap-16f, 0.0f, 0.0f, 0x1.30fb24p-88f, 0x1.0c582p-76f, 0x1.cca9cp-40f,
     0.0f, 0x1.c5e19ep-27f, 0.0f, 0.0f, 0x1.02b8cep-114f, 0.0f, 0x1.651dcap-91f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dacfc8p-51f, 0x1.a03414p-39f, 0.0f,
     0x1.d26a7p-87f, 0.0f, 0x1.a9340cp-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fc6e2ep-100f,
     0.0f, 0.0f, 0.0f, 0x1.39d924p-54f, 0.0f, 0x1.f3b726p-28f, 0.0f, 0.0f, 0.0f,
     0x1.5024dap-83f, 0x1.e39f38p-114f, 0x1.3062d2p-18f, 0x1.472368p-58f,
     0x1.a5aaf2p-77f, 0x1.b3678cp-73f, 0x1.f63928p-38f, 0x1.4b6d76p-89f, 0.0f,
     0x1.03faf6p-38f, 0x1.6df9a2p-88f, 0.0f, 0x1.0b2852p-107f, 0.0f, 0.0f,
     0x1.72c2c6p-118f, 0x1.10f774p-112f, 0x1.12bd74p-113f, 0x1.f5ea58p-100f, 0.0f,
     0x1.41ca34p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c0870ep-118f, 0x1.5a95cep-26f, 0.0f,
     0x1.65fab4p-52f, 0x1.a08236p-88f, 0x1.0f3114p-35f, 0.0f, 0.0f, 0x1p0f, 0.0f,
     0x1.cb0624p-29f, 0x1.1c53acp-82f, 0x1.7a725ep-27f, 0x1.32e85ap-40f, 0.0f,
     0x1.b02ae4p-104f, 0x1.37fa62p-65f, 0.0f, 0x1.e5a604p-68f, 0x1.399798p-96f,
     0x1.2a4df2p-26f, 0.0f, 0x1.955454p-20f, 0.0f, 0x1.aadb62p-2f, 0.0f,
     0x1.7f2874p-9f, 0x1.d1ed28p-92f, 0x1.5b63fp-41f, 0x1.780b88p-94f, 0.0f, 0.0f,
     0.0f, 0x1.2e8172p-17f, 0.0f, 0x1.607496p-126f, 0.0f, 0x1.72f914p-62f, 0.0f,
     0x1.cbb976p-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8088bcp-42f, 0.0f, 0.0f,
     0x1.abde96p-105f, 0.0f, 0.0f, 0.0f, 0x1.ba1274p-36f, 0x1.1f158ep-43f, 0.0f,
     0x1.b242c8p-37f, 0x1.599f7ep-67f, 0x1.bfc3f2p-20f, 0x1.9b6162p-79f,
     0x1.5eba9ep-93f, 0x1.a2bfacp-12f, 0.0f, 0x1.395448p-60f, 0.0f, 0.0f,
     0x1.440054p-97f, 0.0f, 0x1.9002c8p-123f, 0x1.4f9e7ep-104f, 0.0f, 0x1.e25324p-24f,
     0x1.105e82p-45f, 0.0f, 0x1.10d9c2p-117f, 0x1.bab7b2p-21f, 0x1.b30f94p-89f,
     0x1.ff0aaap-12f, 0.0f, 0.0f, 0.0f, 0x1.6b9a08p-51f, 0x1.e7cdaep-39f,
     0x1.2f7884p-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.387bcp-56f,
     0x1.71e5a2p-126f, 0x1.91904ap-73f, 0.0f, 0x1.4d9adep-2f, 0.0f, 0.0f,
     0x1.e2f11ep-85f, 0.0f, 0x1.7868f6p-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.259f78p-26f,
     0.0f, 0x1.9ab1fp-76f, 0.0f, 0.0f, 0.0f, 0x1.497484p-67f, 0x1.518edep-55f, 0.0f,
     0x1.0c14e4p-107f, 0.0f, 0x1.43a9a4p-123f, 0x1.532d12p-47f, 0x1.95f87p-68f, 0.0f,
     0x1.4f75ep-65f, 0.0f, 0x1.068cc4p-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2f8952p-58f, 0x1.2bc5ep-103f, 0x1.5600aap-104f, 0.0f, 0x1.0a5e9p-101f, 0.0f,
     0.0f, 0x1.cfcc56p-92f, 0.0f, 0.0f, 0.0f, 0x1.b092cap-69f, 0.0f, 0.0f,
     0x1.6657c8p-115f, 0.0f, 0.0f, 0x1.506536p-45f, 0x1.8a0bc2p-81f, 0x1.1debe2p-10f,
     0x1.031a14p-99f, 0.0f, 0x1.2f90d8p-24f, 0.0f, 0.0f, 0x1.88e6fcp-24f,
     0x1.322114p-73f, 0x1.f34596p-99f, 0.0f, 0.0f, 0x1.01a0fep-83f, 0x1.e2052p-124f,
     0x1.da6cp-117f, 0.0f, 0.0f, 0.0f, 0x1.e40428p-5f, 0x1.889d0ap-95f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.1d50e2p-34f, 0x1.ae6ab6p-66f, 0.0f, 0x1.be6dfap-57f,
     0.0f, 0x1.2c0592p-62f, 0.0f, 0.0f, 0.0f, 0x1.276964p-67f, 0x1.582d5cp-46f, 0.0f,
     0.0f, 0x1.bcabf8p-54f, 0x1.5caa98p-14f, 0.0f, 0.0f, 0x1.8c4d8ep-123f,
     0x1.666e1ap-6f, 0x1.d3ae44p-111f, 0x1.258618p-84f, 0x1.a5b9a8p-53f,
     0x1.6a0d82p-53f, 0x1.76e1bap-48f, 0x1.f35c84p-24f, 0x1.93893ep-106f, 0.0f,
     0x1.f62b1cp-46f, 0x1.4a7b34p-34f, 0.0f, 0.0f, 0x1.8525dap-86f, 0x1.ffb65cp-96f,
     0x1.6b4812p-15f, 0x1.4356b2p-13f, 0x1.17e94p-119f, 0x1.7d1486p-27f,
     0x1.9ad154p-124f, 0x1.409a24p-9f, 0.0f, 0.0f, 0x1.adbca6p-39f, 0x1.75ffecp-70f,
     0x1.2d776ep-93f, 0x1.f4c116p-107f, 0.0f, 0x1.a633fap-34f, 0.0f, 0.0f, 0.0f,
     0x1.e80a24p-29f, 0.0f, 0x1.ffe6b8p-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.21a246p-70f, 0.0f, 0.0f, 0x1.9be7b2p-19f, 0.0f, 0.0f, 0.0f, 0x1.343e8ap-14f,
     0x1.5bd2cep-21f, 0x1.0af03cp-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.58a83ep-76f, 0x1.7a7f04p-22f, 0x1.c18b8p-12f, 0x1.6bec8ap-121f, 0x1p0f, 0.0f,
     0.0f, 0x1.190dd8p-37f, 0x1.f3b93ep-24f, 0x1.01e72p-12f, 0x1.47d5b2p-96f,
     0x1.cc021cp-15f, 0.0f, 0x1.24b792p-96f, 0x1.84461p-26f, 0.0f, 0x1.2246bap-19f,
     0x1.7954c4p-13f, 0x1.a5933ap-52f, 0x1.8b0572p-111f, 0x1.b285a2p-97f, 0.0f, 0.0f,
     0x1.19cd66p-18f, 0x1.93e3d8p-123f, 0x1.73e7ep-101f, 0x1.4890b6p-27f, 0.0f, 0.0f,
     0x1.11cacap-104f, 0.0f, 0.0f, 0x1.7d5888p-48f, 0.0f, 0x1.a25694p-22f, 0.0f,
     0x1.a63eb6p-94f, 0.0f, 0x1.d69264p-76f, 0x1p0f, 0x1.85ff18p-70f, 0.0f,
     0x1.5ece74p-28f, 0.0f, 0x1.2cedfp-75f, 0x1.be2f24p-27f, 0x1.f0c7a2p-4f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eab4fep-118f, 0x1.4be7e6p-28f, 0.0f,
     0x1.b018a6p-26f, 0x1.39e3acp-48f, 0x1.46ba9ep-110f, 0.0f, 0.0f, 0x1.8f733ap-31f,
     0.0f, 0x1.47d4fap-4f, 0.0f, 0x1.845354p-50f, 0x1.4a3146p-50f, 0x1.83fe0cp-53f,
     0.0f, 0x1.ecbd8ep-122f, 0x1.18be1ap-105f, 0.0f, 0.0f, 0x1.eec564p-77f, 0.0f,
     0x1.c4fe0cp-61f, 0.0f, 0x1.1e7d4ap-90f, 0x1.fd868cp-103f, 0.0f, 0x1.27e1a8p-121f,
     0x1.b2369ep-109f, 0.0f, 0x1.d517ap-15f, 0x1.bc058p-101f, 0.0f, 0.0f,
     0x1.cda1b8p-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.93a0eap-71f, 0x1.89596p-91f,
     0x1.aa3e9p-120f, 0x1.64545cp-43f, 0.0f, 0x1.520caap-94f, 0.0f, 0x1.b28516p-67f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.16a64ep-95f, 0.0f,
     0x1.c740cep-70f, 0x1.994f68p-115f, 0.0f, 0.0f, 0x1.feec54p-107f, 0x1.f39726p-99f,
     0x1.41457ap-31f, 0.0f, 0x1.a64b42p-26f, 0x1.a08a4ep-54f, 0x1.dff656p-109f,
     0x1.ed87b8p-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3e2cb6p-94f, 0.0f, 0.0f,
     0x1.571d2ap-17f, 0.0f, 0x1.fb89ccp-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f1bec4p-122f, 0.0f, 0x1.f13e16p-91f, 0.0f, 0x1.bbaa5ap-6f, 0.0f, 0.0f,
     0x1.a6980ap-117f, 0.0f, 0x1.6de9c4p-61f, 0.0f, 0x1.48dc6p-94f, 0.0f, 0.0f,
     0x1.7a8df6p-56f, 0.0f, 0.0f, 0x1.6f6426p-75f, 0x1.f60cp-105f, 0x1.d31b9p-83f,
     0.0f, 0x1.65992ap-43f, 0x1.e1b526p-44f, 0.0f, 0x1.9f15c8p-25f, 0.0f, 0.0f,
     0x1.3dbecep-42f, 0x1.a627dep-100f, 0.0f, 0x1.ab03bep-60f, 0x1.d0c5e6p-25f, 0.0f,
     0.0f, 0x1.1b02c4p-51f, 0.0f, 0x1.cd7b3cp-82f, 0.0f, 0.0f, 0.0f, 0x1.ca9988p-25f,
     0x1.177016p-22f, 0.0f, 0x1.e94456p-53f, 0.0f, 0x1.e994b4p-56f, 0x1.06d96ap-104f,
     0.0f, 0x1.2c6884p-15f, 0.0f, 0x1.fdad42p-11f, 0.0f, 0.0f, 0x1.7e714p-101f,
     0x1.b851bcp-114f, 0x1.c2cee6p-28f, 0.0f, 0.0f, 0x1.500a8ep-47f, 0.0f,
     0x1.ef3dfap-122f, 0x1.68e0dp-22f, 0.0f, 0.0f, 0x1.0a09aep-50f, 0x1.567b1ep-65f,
     0.0f, 0x1.4bea36p-107f, 0.0f, 0x1.64eef2p-104f, 0.0f, 0x1.5308dp-101f, 0.0f,
     0x1.de3c8ap-37f, 0.0f, 0x1.8283e2p-18f, 0.0f, 0x1.789bcap-47f, 0x1.da64ecp-108f,
     0.0f, 0x1.9fabfep-44f, 0x1.3abb2cp-111f, 0.0f, 0.0f, 0x1.c47fc6p-31f, 0.0f, 0.0f,
     0x1.aaa5cap-104f, 0x1.818e8ap-27f, 0.0f, 0x1.e2df5p-37f, 0.0f, 0x1.15dd08p-81f,
     0.0f, 0x1.de5aa4p-48f, 0.0f, 0.0f, 0.0f, 0x1.681c84p-88f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.787568p-22f, 0x1.1ff95ep-18f, 0x1.b65ac4p-16f, 0.0f, 0x1.5cf5f8p-93f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c946b4p-92f,
     0x1.01ae6cp-100f, 0.0f, 0.0f, 0x1.f59f04p-64f, 0.0f, 0.0f, 0x1.99b708p-33f,
     0x1.0a058p-57f, 0.0f, 0.0f, 0.0f, 0x1.30e7ep-79f, 0x1.bbeb84p-48f, 0.0f, 0.0f,
     0x1.3ca67ep-96f, 0.0f, 0x1.58f738p-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.122bb2p-26f, 0.0f, 0.0f, 0x1.1bdd12p-111f, 0x1.39bf76p-76f, 0.0f,
     0x1.581754p-77f, 0.0f, 0x1.49f734p-90f, 0x1.d9402ap-80f, 0x1.bd67p-40f,
     0x1.39c09ap-98f, 0x1.62aab6p-78f, 0x1.262f72p-101f, 0x1.e44974p-81f,
     0x1.48496ap-67f, 0.0f, 0.0f, 0x1.a2a184p-15f, 0.0f, 0x1.c38c78p-63f, 0.0f,
     0x1.1ae25p-103f, 0x1.9bd102p-4f, 0x1p0f, 0x1.02cbfcp-99f, 0.0f, 0.0f, 0.0f,
     0x1.543adap-70f, 0.0f, 0x1.d6e8f8p-33f, 0.0f, 0x1.ebb9c2p-7f, 0x1.80b472p-103f,
     0.0f, 0x1.04e9a2p-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4cc8bcp-67f,
     0.0f, 0x1.5f4caep-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ace666p-65f, 0.0f, 0.0f,
     0x1.f269e4p-121f, 0x1.a1042ep-8f, 0x1.1b964ep-50f, 0.0f, 0x1.ba71f6p-109f,
     0x1.22e8a6p-105f, 0.0f, 0x1.bc5d94p-34f, 0x1.becea2p-16f, 0x1.4fbefcp-83f,
     0x1.03ce8ap-30f, 0x1.770a86p-98f, 0.0f, 0.0f, 0x1.8d8818p-13f, 0.0f,
     0x1.e014f4p-1f, 0.0f, 0.0f, 0.0f, 0x1.90f3cp-36f, 0x1.ae914ep-37f, 0.0f,
     0x1.67a2ccp-89f, 0x1.5b49a4p-65f, 0.0f, 0x1.d64a24p-4f, 0x1.38f51ep-78f,
     0x1.3fe542p-19f, 0x1.13cf72p-38f, 0x1.6ebdb6p-21f, 0.0f, 0.0f, 0x1.7541b6p-34f,
     0x1.70ac84p-62f, 0x1.0d378cp-61f, 0.0f, 0.0f, 0x1.c729a4p-68f, 0.0f,
     0x1.bee2acp-122f, 0.0f, 0.0f, 0x1.1a346ep-88f, 0.0f, 0x1.9b7192p-88f, 0.0f,
     0x1.baf654p-83f, 0x1.07a3b4p-114f, 0x1.1d265cp-41f, 0x1.4c5008p-105f, 0.0f,
     0x1.71f578p-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.080898p-5f, 0x1.a6dccap-46f, 0.0f,
     0.0f, 0x1.3d2b26p-122f, 0x1.1b561ep-47f, 0x1.b2188ap-78f, 0.0f, 0.0f,
     0x1.2acf3cp-118f, 0.0f, 0.0f, 0.0f, 0x1.035432p-82f, 0.0f, 0x1.847bc2p-67f,
     0x1.4e353p-102f, 0.0f, 0x1.7e910ap-69f, 0.0f, 0.0f, 0.0f, 0x1.c645ecp-99f,
     0x1.da143cp-76f, 0x1.6c0d6ep-92f, 0x1.d06996p-71f, 0x1.11d606p-15f, 0.0f,
     0x1.5cd828p-17f, 0x1.19f7aep-101f, 0x1.7e1e12p-100f, 0x1.d19cbcp-18f,
     0x1.d35b24p-48f, 0.0f, 0x1.7edf96p-2f, 0.0f, 0x1.c30ea2p-11f, 0.0f, 0.0f, 0x1p0f,
     0x1.4b95dp-72f, 0.0f, 0x1.615136p-29f, 0x1.798d3ep-100f, 0.0f, 0.0f,
     0x1.2245d4p-73f, 0x1.a561eap-92f, 0.0f, 0x1.906b4cp-50f, 0x1.c71982p-41f,
     0x1.2d968p-86f, 0x1.3a71f6p-112f, 0.0f, 0x1.42c58ap-3f, 0.0f, 0.0f,
     0x1.db7c18p-86f, 0x1.f9faaap-20f, 0.0f, 0.0f, 0.0f, 0x1.54634ep-67f, 0.0f,
     0x1.03fcc8p-70f, 0.0f, 0.0f, 0x1.5169a4p-82f, 0x1.c08de2p-94f, 0.0f, 0.0f,
     0x1.b0f53p-36f, 0x1.96fd22p-61f, 0x1.0981d8p-42f, 0x1.6f188p-104f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e242b6p-84f, 0.0f, 0.0f, 0x1.f50b6cp-95f,
     0x1.320fdep-17f, 0x1.7b065ep-63f, 0.0f, 0x1.2e5794p-26f, 0x1.22fa08p-51f, 0.0f,
     0x1.1673dap-47f, 0x1.5d79f6p-105f, 0x1.856134p-49f, 0x1.885342p-126f, 0.0f, 0.0f,
     0x1.ca6f4ep-109f, 0x1.f399e8p-105f, 0.0f, 0.0f, 0x1.7a50dap-65f, 0.0f,
     0x1.0d7d0ap-76f, 0x1.371c32p-54f, 0.0f, 0x1.02de3ap-91f, 0x1.0ca312p-88f,
     0x1.c2f6d6p-46f, 0x1.1406d6p-89f, 0.0f, 0.0f, 0.0f, 0x1.ff7592p-105f, 0.0f, 0.0f,
     0x1.59ced2p-49f, 0x1.0dc01cp-55f
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
            tmp2 = Sleef_atan2f4_u35avx2128(tmp0, tmp1);
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
    printf("Sleef_atan2f4_u35avx2128 %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_atan2f4_u35avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
