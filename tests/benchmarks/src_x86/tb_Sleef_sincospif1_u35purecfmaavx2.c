/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_sincospif1_u35purecfma.c --function \
 *     Sleef_sincospif1_u35purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --precision sleef_sf2 --bench \
 *     --no-embedded-bin --target x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <xmmintrin.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef_float_2 external_bench_wrapper_cst = {.x = 0.0f, .y = 0.0f};
static const Sleef_float_2 external_bench_wrapper_cst1 = {.x = 0.0f, .y = 0.0f};
volatile Sleef_float_2 external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0.0f, 0.0f, 0.0f, 0x1.a50866p-93f, 0.0f, 0.0f, 0.0f, 0x1.3f039ep-38f, 0.0f,
     0.0f, 0x1.c85d74p-102f, 0x1.3969d4p-112f, 0.0f, 0x1.28ad82p-99f, 0.0f,
     0x1.965964p-31f, 0x1.decddap-46f, 0.0f, 0x1.2de19ap-27f, 0.0f, 0.0f,
     0x1.c11f74p-114f, 0.0f, 0.0f, 0.0f, 0x1.c0228ep-125f, 0x1.405cccp-41f,
     0x1.eed2cep-54f, 0x1.7e759cp-32f, 0x1.9cc896p-124f, 0x1.455e4ep-40f, 0.0f,
     0x1.f38894p-51f, 0.0f, 0x1.a9c9fp-68f, 0.0f, 0.0f, 0x1.e19b2ap-102f,
     0x1.c36864p-24f, 0x1.31116p-23f, 0x1.6ee4bap-104f, 0.0f, 0x1.d727p-10f,
     0x1.19c17p-63f, 0x1.adf6f8p-120f, 0x1.37ed04p-104f, 0x1.e807d2p-117f, 0.0f, 0.0f,
     0x1.b1543cp-63f, 0x1.153e2ep-35f, 0.0f, 0.0f, 0.0f, 0x1.0ea18ap-91f,
     0x1.af918p-111f, 0.0f, 0x1.36d302p-38f, 0x1.36c13ep-78f, 0.0f, 0x1.32aap-1f,
     0x1.86ba24p-16f, 0.0f, 0.0f, 0.0f, 0x1.8f0832p-104f, 0x1.5ffe58p-86f,
     0x1.817ccap-5f, 0x1.394a14p-47f, 0x1.fe92fap-31f, 0x1.20c268p-1f,
     0x1.c588d2p-103f, 0x1.86505ap-22f, 0.0f, 0x1.69a986p-81f, 0x1.71bd68p-118f, 0.0f,
     0x1.c00312p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.aa7e44p-110f, 0x1.9809bep-100f,
     0x1.6e8d9ep-67f, 0x1.8a0646p-19f, 0.0f, 0x1.666978p-92f, 0x1.7f4044p-98f, 0.0f,
     0.0f, 0x1.f43f3ep-69f, 0x1.93ef84p-10f, 0x1.950138p-7f, 0x1.ca3fd2p-115f,
     0x1.b70c18p-121f, 0x1.a95e2p-32f, 0x1.086c22p-19f, 0.0f, 0.0f, 0x1.463d2ap-1f,
     0x1.6ff80ep-2f, 0x1.db688p-81f, 0.0f, 0x1.c7b4p-112f, 0x1.3e7336p-113f, 0.0f,
     0.0f, 0x1.653158p-18f, 0.0f, 0x1.d75dc8p-76f, 0x1.50648p-21f, 0.0f,
     0x1.eb4582p-19f, 0.0f, 0x1.fbc4a8p-51f, 0x1.3a664ep-99f, 0x1.e13c54p-98f,
     0x1.d1f448p-93f, 0x1.1cbe28p-65f, 0x1.3bd0b4p-113f, 0x1.b69608p-76f, 0.0f, 0.0f,
     0.0f, 0x1.2120fep-39f, 0x1.7a1816p-40f, 0x1.3bf95p-81f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.37eb46p-66f, 0x1.315c3p-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4abfdcp-25f,
     0x1.983822p-25f, 0.0f, 0.0f, 0.0f, 0x1.446f82p-41f, 0x1.3dfab8p-22f,
     0x1.74bb7cp-113f, 0.0f, 0x1.ae0756p-34f, 0x1.f60bfep-60f, 0.0f, 0x1.a9c6d2p-45f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.18457p-62f, 0.0f, 0.0f, 0x1.215a36p-65f, 0.0f,
     0x1.eda7ccp-6f, 0.0f, 0x1.0f8628p-74f, 0x1.ce3b7ap-94f, 0.0f, 0x1.e586c4p-3f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.fe3cep-121f, 0x1.0f02a2p-37f, 0.0f, 0x1.854f7ap-87f,
     0x1.603e52p-6f, 0.0f, 0x1.008aeap-102f, 0.0f, 0.0f, 0.0f, 0x1.9d5fa6p-48f,
     0x1.92c128p-4f, 0.0f, 0x1.30092cp-43f, 0x1.a2b144p-101f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.9a1928p-32f, 0.0f, 0.0f, 0x1.f6defap-115f, 0.0f, 0.0f, 0x1.c1328ep-81f,
     0x1.0d8fa2p-24f, 0.0f, 0.0f, 0x1.0122bcp-39f, 0x1.2c79f8p-25f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e3d51ep-99f, 0x1.ce6998p-48f, 0x1.08f2eep-100f, 0x1.59679cp-93f,
     0x1.bd274cp-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a78a24p-98f, 0.0f, 0.0f,
     0.0f, 0x1.7f172ep-56f, 0.0f, 0.0f, 0x1.77efd4p-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6cfadep-20f, 0.0f, 0.0f, 0.0f, 0x1.e6b7a2p-79f, 0x1.d64876p-31f,
     0x1.baea5p-13f, 0.0f, 0x1.fdc91ep-87f, 0x1.19b808p-100f, 0x1.72c1cp-44f,
     0x1.b68c1ep-82f, 0.0f, 0.0f, 0x1.e73818p-115f, 0.0f, 0x1.42c056p-54f,
     0x1.07f626p-29f, 0x1.f56acap-84f, 0.0f, 0.0f, 0x1.7c120ap-117f, 0x1.c67966p-15f,
     0.0f, 0x1.15704ep-74f, 0.0f, 0.0f, 0x1.28e0cp-73f, 0.0f, 0x1.c8ecap-91f, 0.0f,
     0x1p0f, 0x1.fa2d48p-62f, 0x1.09648ap-39f, 0x1.22e0ap-64f, 0.0f, 0x1.9a929ap-16f,
     0.0f, 0.0f, 0.0f, 0x1.176736p-8f, 0x1.7eac82p-34f, 0.0f, 0.0f, 0x1.015fd8p-53f,
     0x1.748eaep-46f, 0x1.b089c6p-23f, 0.0f, 0x1.7d8556p-38f, 0x1.be2142p-125f,
     0x1.a92fap-88f, 0.0f, 0x1.deba9ap-117f, 0.0f, 0.0f, 0x1.d4ab78p-3f, 0.0f,
     0x1.a35edap-23f, 0.0f, 0.0f, 0x1.f7d73ap-119f, 0.0f, 0x1.0f8f88p-9f, 0.0f,
     0x1.2a008p-6f, 0x1.6517d8p-96f, 0.0f, 0.0f, 0.0f, 0x1.c2c0ep-33f,
     0x1.0d6b86p-126f, 0x1.1c1bdcp-107f, 0.0f, 0x1.624006p-95f, 0x1.31f65p-57f, 0.0f,
     0.0f, 0.0f, 0x1.ca5418p-13f, 0x1.c1705ep-81f, 0x1.23b58ap-1f, 0x1.7e556ep-16f,
     0x1.c3d8bap-50f, 0.0f, 0.0f, 0.0f, 0x1.01da34p-120f, 0x1.80903p-4f, 0.0f,
     0x1.b01572p-61f, 0x1.c27a2ap-31f, 0x1.9c6cb4p-55f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8a31dp-13f, 0x1.bb7f14p-118f, 0x1.fefb5cp-52f, 0x1.938fc8p-30f, 0.0f,
     0x1.4b3c26p-117f, 0.0f, 0x1.4faf04p-10f, 0x1.205558p-17f, 0x1.9a0d52p-59f, 0.0f,
     0.0f, 0x1.b4f85p-106f, 0x1.8f32aap-35f, 0.0f, 0x1.2e0192p-17f, 0x1.8e7162p-13f,
     0.0f, 0.0f, 0x1.593c46p-110f, 0x1.69afd8p-52f, 0.0f, 0x1.f7476ep-26f, 0.0f,
     0x1.f79deap-34f, 0x1.e1fe1ep-121f, 0x1.26a6d6p-66f, 0x1.fe3676p-87f,
     0x1.2e2324p-15f, 0.0f, 0.0f, 0.0f, 0x1.15e6ep-88f, 0.0f, 0x1.52dcdap-105f,
     0x1.c52726p-48f, 0.0f, 0.0f, 0x1.4e73a4p-121f, 0.0f, 0x1.6e0b4ap-10f, 0.0f, 0.0f,
     0x1.b0e65ep-123f, 0x1.c7af5cp-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.581bb6p-125f, 0.0f, 0x1.14a07cp-60f, 0x1.328156p-27f, 0x1.9c21e2p-4f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.2ec404p-81f, 0x1.a9a678p-23f, 0.0f, 0.0f, 0x1.360a0ep-20f,
     0.0f, 0.0f, 0x1.84ce2ep-72f, 0x1.bb252ap-13f, 0x1.2761p-107f, 0.0f,
     0x1.819ec6p-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.72f5acp-92f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f555ap-86f, 0.0f, 0x1.a498p-59f, 0x1.7a5642p-49f,
     0x1.c86dc4p-41f, 0.0f, 0.0f, 0x1.ba5d28p-90f, 0.0f, 0x1.3eac3p-105f,
     0x1.e9b96cp-99f, 0.0f, 0.0f, 0x1.1d25a6p-1f, 0x1.0688bep-47f, 0.0f,
     0x1.f10c4ep-44f, 0x1.2d9542p-77f, 0x1.a10eecp-98f, 0.0f, 0.0f, 0x1.3f1cd8p-104f,
     0x1.43ee24p-106f, 0x1.ad611p-52f, 0x1.ee1196p-78f, 0x1.98cb58p-89f,
     0x1.109efep-8f, 0x1.9f3e2p-82f, 0.0f, 0x1.2720fap-8f, 0x1.3283ecp-39f, 0.0f,
     0x1.d9dfe8p-86f, 0.0f, 0x1.65a122p-5f, 0x1.7cbf62p-116f, 0x1.97a95cp-34f, 0.0f,
     0x1.00461ap-90f, 0.0f, 0.0f, 0.0f, 0x1.44a398p-71f, 0x1.091f5ep-83f,
     0x1.4f0e6ep-106f, 0x1.ca719p-77f, 0x1.0c2a6p-76f, 0x1.5d23a2p-115f, 0.0f,
     0x1.e1650ap-63f, 0x1.8c7286p-38f, 0.0f, 0x1.011056p-40f, 0.0f, 0x1.b98f64p-88f,
     0.0f, 0x1.c8ac6ep-61f, 0.0f, 0.0f, 0x1.59271ep-26f, 0x1.dd235cp-95f, 0.0f, 0.0f,
     0x1.9f18c2p-122f, 0.0f, 0x1.ccb16ap-26f, 0x1.79d3d8p-123f, 0.0f, 0.0f,
     0x1.7964fp-37f, 0.0f, 0x1.43084ap-84f, 0x1.6fce7p-53f, 0x1.0832f8p-81f, 0.0f,
     0x1.881c2p-97f, 0x1.11a7bp-45f, 0.0f, 0x1.6698ccp-109f, 0x1.84ba7p-6f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ff392p-75f, 0x1.235c3ap-95f, 0x1.61e336p-122f,
     0x1.47c2d6p-84f, 0x1.a8e102p-94f, 0x1.34061p-69f, 0.0f, 0x1.0e8cfcp-60f,
     0x1.ceba94p-82f, 0x1.0705dep-15f, 0x1.7bf3b8p-88f, 0x1.60f58p-90f, 0.0f, 0.0f,
     0x1.c5aa7p-53f, 0x1.a5b33cp-26f, 0.0f, 0.0f, 0x1.97fd06p-36f, 0.0f,
     0x1.8f71ecp-93f, 0x1.7e5158p-79f, 0.0f, 0x1.405346p-104f, 0.0f, 0x1.6a6636p-48f,
     0x1.cd09e6p-101f, 0.0f, 0x1.20d65ep-42f, 0.0f, 0.0f, 0x1p0f, 0.0f,
     0x1.df1208p-123f, 0.0f, 0.0f, 0x1.0c8afp-50f, 0x1.3ea73ep-19f, 0x1.61f6e8p-76f,
     0x1.d1d35cp-100f, 0x1.7ea03cp-111f, 0.0f, 0x1.9dba18p-35f, 0.0f,
     0x1.381164p-110f, 0.0f, 0x1.39258p-13f, 0x1.d397e2p-72f, 0x1.0fa778p-110f, 0.0f,
     0x1.6ea848p-98f, 0.0f, 0.0f, 0x1.173f84p-24f, 0.0f, 0x1.216ef6p-102f, 0.0f, 0.0f,
     0x1.581a1ep-29f, 0.0f, 0x1.251b0cp-47f, 0.0f, 0.0f, 0x1.d667ecp-113f,
     0x1.3ed646p-81f, 0x1.bc6dacp-73f, 0x1.071694p-22f, 0.0f, 0.0f, 0x1.a928fp-102f,
     0.0f, 0x1.f31892p-89f, 0.0f, 0.0f, 0x1.ccbea6p-40f, 0.0f, 0.0f, 0x1.85a788p-101f,
     0x1.d50aa6p-58f, 0x1.d45d2p-63f, 0x1.36c4d6p-89f, 0x1.c106fcp-33f,
     0x1.94b362p-54f, 0x1.de231p-7f, 0x1.b7f24cp-71f, 0x1.6d096cp-80f, 0.0f, 0.0f,
     0x1.c82ed8p-64f, 0x1.836206p-69f, 0x1.4ec90ap-113f, 0.0f, 0x1.94a30ep-38f, 0.0f,
     0x1.5fb9bcp-114f, 0x1.d6b97cp-103f, 0.0f, 0.0f, 0x1.fe99c2p-34f, 0.0f,
     0x1.5685f2p-118f, 0x1.58d3a8p-124f, 0x1.c8f9bp-48f, 0x1.ceff6cp-70f, 0.0f,
     0x1.d57492p-6f, 0x1.faf56ap-100f, 0.0f, 0x1.110936p-46f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.171824p-73f, 0.0f, 0.0f, 0x1.18cf88p-18f, 0x1.9364dcp-92f, 0x1.9d7918p-28f,
     0.0f, 0x1.9c7236p-26f, 0x1.ebe55ap-93f, 0x1.47b86ep-57f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5e4e12p-28f, 0.0f, 0.0f, 0x1.97fd52p-102f, 0x1.192cfap-97f, 0.0f,
     0x1.1ece8ap-78f, 0x1.ddd6dap-51f, 0x1.a1bd96p-86f, 0.0f, 0.0f, 0x1.bec31cp-92f,
     0x1.46f286p-4f, 0x1.eae0f6p-94f, 0.0f, 0.0f, 0.0f, 0x1.ec8344p-40f, 0.0f,
     0x1.8bd8ecp-35f, 0.0f, 0.0f, 0x1.e5ae2p-41f, 0x1.0f39c8p-121f, 0x1.d5a6eap-75f,
     0.0f, 0.0f, 0.0f, 0x1.c93edap-96f, 0.0f, 0x1.9a2822p-11f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c67cf8p-118f, 0.0f, 0x1.04d9b6p-42f, 0.0f, 0.0f, 0x1.527e1ep-110f,
     0x1.030488p-3f, 0.0f, 0.0f, 0x1.bd32cp-49f, 0.0f, 0.0f, 0.0f, 0x1.4ca90ap-96f,
     0x1.941628p-119f, 0x1.033fd2p-119f, 0.0f, 0.0f, 0.0f, 0x1.26364cp-64f,
     0x1.f8bedcp-79f, 0x1.077794p-49f, 0x1.2aef6ap-121f, 0x1.2d46e4p-99f, 0.0f, 0.0f,
     0.0f, 0x1.fb1e4ap-108f, 0.0f, 0x1.9477b8p-76f, 0.0f, 0.0f, 0x1.366f5ap-61f, 0.0f,
     0x1.b2c3e8p-91f, 0.0f, 0x1.1268dp-71f, 0.0f, 0.0f, 0x1.277116p-60f, 0.0f, 0.0f,
     0.0f, 0x1.4d72ccp-111f, 0.0f, 0x1p0f, 0x1.2cccb4p-6f, 0.0f, 0x1.c91c0cp-5f,
     0x1.82dcfcp-95f, 0x1.87128ep-67f, 0x1.43ee78p-50f, 0.0f, 0x1.d15d08p-41f, 0.0f,
     0x1.f3acaep-65f, 0x1.d5c87ap-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f5fdacp-5f,
     0x1.093adep-30f, 0x1.72d8fcp-73f, 0x1.d861cap-87f, 0.0f, 0.0f, 0x1.41075p-31f,
     0.0f, 0.0f, 0x1.f26b84p-56f, 0.0f, 0.0f, 0.0f, 0x1.4b09p-20f, 0x1.52473ep-91f,
     0.0f, 0x1.37c474p-64f, 0x1.2b7392p-41f, 0.0f, 0x1.24e716p-23f, 0x1.fe32fap-53f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.87827cp-52f, 0.0f, 0.0f, 0x1.25f466p-119f,
     0.0f, 0.0f, 0x1.ca80b8p-30f, 0.0f, 0.0f, 0x1.899112p-112f, 0x1.aae8e4p-12f,
     0x1.cdd06ap-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f2145ep-28f, 0x1.91c012p-71f, 0.0f,
     0x1.1c0b1ap-120f, 0x1.20704ep-20f, 0.0f, 0x1.f909acp-92f, 0.0f, 0x1.9e9de6p-22f,
     0x1.edf9e4p-8f, 0.0f, 0x1.883664p-40f, 0x1.db32aep-116f, 0.0f, 0x1.4aa6d6p-74f,
     0.0f, 0x1.88347ep-57f, 0x1.7a6116p-83f, 0x1.0aced8p-113f, 0.0f, 0x1.a5226ep-70f,
     0.0f, 0x1.c646bcp-101f, 0.0f, 0x1.12d3e8p-20f, 0.0f, 0.0f, 0x1.523b5p-32f, 0.0f,
     0.0f, 0x1.d27512p-84f, 0x1.aca55p-53f, 0.0f, 0.0f, 0x1.141cd4p-88f,
     0x1.f4703ap-76f, 0x1.5bdc66p-11f, 0.0f, 0x1.b0452ap-25f, 0.0f, 0.0f, 0.0f,
     0x1.3d0c7cp-104f, 0.0f, 0x1.99778cp-42f, 0.0f, 0.0f, 0x1.f25956p-57f,
     0x1.ad98a8p-40f, 0x1.ecc396p-29f, 0x1.18d966p-110f, 0x1.76811p-46f, 0.0f, 0.0f,
     0x1.1a134ap-83f, 0x1.18419p-32f, 0.0f, 0.0f, 0x1.1765c2p-90f, 0.0f, 0.0f,
     0x1.8aa1c4p-61f, 0x1.7088bcp-115f, 0.0f, 0.0f, 0.0f, 0x1.0c1f9p-38f,
     0x1.68e2aep-10f, 0x1.58faa4p-93f, 0x1.24e5d4p-106f, 0.0f, 0.0f, 0.0f,
     0x1.00903p-99f, 0x1.f5d7ccp-74f, 0.0f, 0.0f, 0.0f, 0x1.6ae972p-60f, 0.0f, 0.0f,
     0x1.891f1ap-117f, 0.0f, 0x1.be6052p-38f, 0x1.a489f4p-52f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fbb00ap-38f, 0x1.08edf8p-62f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.56a9ecp-42f,
     0.0f, 0.0f, 0x1.9e7b34p-103f, 0.0f, 0x1.52b84cp-54f, 0.0f, 0x1.86e066p-17f, 0.0f,
     0x1.5df26cp-27f, 0.0f, 0x1.bc56c4p-123f, 0x1.793036p-66f, 0.0f, 0.0f,
     0x1.77bebap-92f, 0.0f, 0.0f, 0x1.d5df1cp-45f, 0x1.080684p-125f, 0.0f,
     0x1.2db882p-34f, 0.0f, 0x1.c97f02p-55f, 0x1.e14dcap-39f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f88014p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0a6a04p-27f, 0.0f, 0x1.8d916p-82f, 0.0f, 0x1.c10a52p-39f, 0x1p0f, 0.0f,
     0x1.7c23a4p-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.553ab4p-60f, 0x1.d4d426p-106f,
     0.0f, 0x1.3e8fdep-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7cc6cep-110f, 0.0f,
     0x1.44d438p-65f, 0.0f, 0.0f, 0x1.88c68p-85f, 0.0f, 0x1.16765p-74f, 0.0f, 0.0f,
     0x1.656bdp-97f, 0x1.ee77ecp-32f, 0.0f, 0x1.6d0182p-16f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.13dd5cp-52f, 0x1.981e18p-32f, 0x1.7d7ba6p-10f, 0x1.4a66f6p-81f,
     0x1.29f67cp-19f, 0x1.febf72p-89f, 0.0f, 0x1.ed705ep-114f, 0.0f, 0.0f, 0.0f,
     0x1.d375dap-67f, 0x1.4b5828p-111f, 0.0f, 0x1.bbc5f6p-50f, 0x1.026b7p-115f,
     0x1.8af3a2p-8f, 0.0f, 0.0f, 0.0f, 0x1.f1adb4p-111f, 0x1.ce36d6p-1f,
     0x1.6f5ea8p-119f, 0.0f, 0.0f, 0x1.7ea89ap-21f, 0x1.73f6c6p-30f, 0.0f, 0.0f,
     0x1.34b1e2p-16f, 0.0f, 0x1.190466p-28f, 0x1.0a725cp-48f, 0x1.82d034p-96f, 0.0f,
     0.0f, 0x1.803aaep-44f, 0x1.257d44p-15f, 0.0f, 0.0f, 0.0f, 0x1.aa63f8p-126f,
     0x1.39d3e8p-72f, 0x1.a9d36ap-4f, 0x1p0f, 0x1.6cf5d2p-43f, 0x1.e76934p-80f,
     0x1.abf212p-62f, 0x1.71b976p-19f, 0.0f, 0x1.b1adb4p-81f, 0.0f, 0.0f, 0.0f,
     0x1.885752p-84f, 0.0f, 0x1.3e458ap-117f, 0.0f, 0x1.4557dep-47f, 0.0f, 0.0f,
     0x1.c92a4cp-40f, 0.0f, 0.0f, 0x1.30256p-20f, 0x1.d8c18cp-28f, 0x1.8a7468p-22f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef_float_2 global_bench_acc;
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
        Sleef_float_2 bench_acc;
        int32_t i;
        float tmp0;
        float tmp1;
        __m128 carg;
        __m128 carg1;
        __m128 carg2;
        float tmp2;
        float tmp3;
        float tmp4;
        __m128 carg3;
        __m128 carg4;
        __m128 carg5;
        float tmp5;
        Sleef_float_2 tmp6;
        int32_t tmp7;

        i = INT32_C(0);
        bench_acc = external_bench_wrapper_cst1;

        for (;(i < INT32_C(1001));){
            float tmp0;
            Sleef_float_2 tmp1;
            float tmp2;
            float tmp3;
            __m128 carg;
            __m128 carg1;
            __m128 carg2;
            float tmp4;
            float tmp5;
            float tmp6;
            __m128 carg3;
            __m128 carg4;
            __m128 carg5;
            float tmp7;
            Sleef_float_2 tmp8;
            int32_t tmp9;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_sincospif1_u35purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = bench_acc.x;
            tmp3 = tmp1.x;
            carg = _mm_set_ss(tmp2);
            carg1 = _mm_set_ss(tmp3);
            carg2 = _mm_add_ss(carg, carg1);
            tmp4 = _mm_cvtss_f32(carg2);
            tmp5 = bench_acc.y;
            tmp6 = tmp1.y;
            carg3 = _mm_set_ss(tmp5);
            carg4 = _mm_set_ss(tmp6);
            carg5 = _mm_add_ss(carg3, carg4);
            tmp7 = _mm_cvtss_f32(carg5);
            tmp8 = ((Sleef_float_2) {.x=tmp4, .y=tmp7});
            bench_acc = tmp8;
            tmp9 = i + INT32_C(1);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = bench_acc.x;
        carg = _mm_set_ss(tmp0);
        carg1 = _mm_set_ss(tmp1);
        carg2 = _mm_add_ss(carg, carg1);
        tmp2 = _mm_cvtss_f32(carg2);
        tmp3 = global_bench_acc.y;
        tmp4 = bench_acc.y;
        carg3 = _mm_set_ss(tmp3);
        carg4 = _mm_set_ss(tmp4);
        carg5 = _mm_add_ss(carg3, carg4);
        tmp5 = _mm_cvtss_f32(carg5);
        tmp6 = ((Sleef_float_2) {.x=tmp2, .y=tmp5});
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
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_sincospif1_u35purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_sincospif1_u35purecfma bench acc {.x=%a, .y=%a}\n", global_bench_acc.x, global_bench_acc.y );
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
