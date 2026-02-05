/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_nextafterf4_avx2128.c --function \
 *     Sleef_finz_nextafterf4_avx2128 --arity 2 --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary32,binary32 \
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
     0x1.6b91acp-119f, 0x1.a319d6p-63f, 0.0f, 0x1.3dd49ap-49f, 0.0f, 0.0f, 0.0f,
     0x1.1be2cep-95f, 0.0f, 0.0f, 0.0f, 0x1.cd7eecp-77f, 0.0f, 0.0f, 0x1.90d8bp-38f,
     0x1.0d15eep-90f, 0x1.cd5ee2p-79f, 0.0f, 0.0f, 0.0f, 0x1.da8762p-58f, 0.0f,
     0x1.7ccf58p-65f, 0x1.cbf3dcp-70f, 0.0f, 0x1.fcc82cp-126f, 0x1.d2f5d4p-23f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.964518p-8f, 0x1.e70e3ap-32f, 0.0f, 0.0f, 0.0f,
     0x1.9c9b8cp-44f, 0.0f, 0.0f, 0.0f, 0x1.8e2728p-123f, 0x1.41c922p-119f, 0.0f,
     0x1.66ae44p-30f, 0x1.c21ffep-116f, 0.0f, 0x1.a40a5cp-64f, 0.0f, 0x1.e293ecp-47f,
     0.0f, 0x1.7b5d96p-9f, 0.0f, 0.0f, 0.0f, 0x1.348912p-48f, 0.0f, 0x1.462dbp-104f,
     0x1.5299p-81f, 0.0f, 0x1.b8d30cp-80f, 0x1.0d539ep-55f, 0x1.195728p-60f,
     0x1.da7f2cp-21f, 0x1.7e278ep-108f, 0.0f, 0x1.ab279ep-13f, 0.0f, 0.0f,
     0x1.eb6354p-21f, 0.0f, 0.0f, 0x1.a4a50ap-95f, 0x1.40c5d8p-55f, 0x1.36d80cp-121f,
     0x1.d52d38p-79f, 0.0f, 0x1.fd4c12p-119f, 0.0f, 0.0f, 0x1.56714ap-65f,
     0x1.3d8e4ep-41f, 0x1.0a2074p-50f, 0.0f, 0x1.a2a044p-25f, 0x1.3f8912p-11f,
     0x1.e0b4p-7f, 0x1.f29866p-89f, 0.0f, 0.0f, 0x1.42b5b6p-26f, 0x1.060b08p-122f,
     0.0f, 0x1.25244ap-7f, 0x1.c390d8p-55f, 0x1.210912p-46f, 0x1.6c98f6p-100f,
     0x1.336d8ep-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5ab68cp-72f, 0.0f, 0x1.71f552p-93f, 0x1.3c5502p-55f, 0x1.8c92b4p-34f,
     0x1.c1fb72p-116f, 0x1.23af62p-93f, 0.0f, 0x1.6d25d4p-115f, 0.0f, 0x1.561256p-81f,
     0x1.98bca8p-86f, 0x1.f90c3ep-27f, 0x1.cb43e2p-83f, 0x1.21a942p-44f,
     0x1.5fa4eap-39f, 0x1.d03052p-91f, 0x1.2d37dp-13f, 0.0f, 0.0f, 0x1.6c5a2ep-91f,
     0x1.2250bep-96f, 0x1.443a22p-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9f021ap-86f,
     0x1.73ff7ep-124f, 0x1.73418ap-65f, 0.0f, 0x1.f8003p-16f, 0.0f, 0.0f, 0.0f,
     0x1.edfb9ap-111f, 0.0f, 0.0f, 0.0f, 0x1.82457ap-54f, 0x1.e7af7ap-66f,
     0x1.9343fap-124f, 0.0f, 0.0f, 0.0f, 0x1.5d41f6p-19f, 0x1.f6893ap-104f, 0.0f,
     0.0f, 0x1.093eep-96f, 0x1.7255b6p-20f, 0x1.19f97cp-53f, 0.0f, 0.0f,
     0x1.be1578p-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.016e02p-60f, 0x1.f2097ep-112f,
     0x1.537432p-92f, 0x1.f6a406p-27f, 0x1.c79412p-56f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.55ea26p-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.02fe28p-9f, 0.0f, 0.0f,
     0x1.86861cp-59f, 0x1.657feep-4f, 0x1.ae9a2ep-23f, 0.0f, 0x1.0eec1cp-65f, 0.0f,
     0x1.968402p-101f, 0x1.785eecp-111f, 0x1.82fb14p-56f, 0x1.bb1a5ep-55f, 0.0f,
     0x1.4efc6ap-73f, 0x1.9034cep-94f, 0.0f, 0x1.b63d24p-56f, 0.0f, 0x1.f7eb5ap-101f,
     0x1.036e5cp-79f, 0.0f, 0.0f, 0x1.5a9354p-104f, 0.0f, 0x1.063834p-56f,
     0x1.dcbdbp-67f, 0.0f, 0.0f, 0.0f, 0x1.3836cap-25f, 0.0f, 0x1.414104p-27f, 0.0f,
     0x1.2dbf58p-89f, 0x1.d30d84p-19f, 0x1.0f39bcp-81f, 0.0f, 0x1.d99f48p-122f,
     0x1.468e5ap-24f, 0.0f, 0x1.674ba8p-100f, 0x1.855fe4p-17f, 0x1.91161cp-89f, 0.0f,
     0.0f, 0x1.96e9a6p-16f, 0.0f, 0.0f, 0.0f, 0x1.27dbdcp-7f, 0.0f, 0x1.7216p-11f,
     0.0f, 0.0f, 0.0f, 0x1.2c9b8ap-38f, 0x1.5d194p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.eed502p-33f, 0.0f, 0x1.cf8bcap-89f, 0.0f, 0x1.9e235ep-12f,
     0x1.048264p-79f, 0x1.dad5a8p-117f, 0x1.712c94p-34f, 0.0f, 0x1.d40728p-24f,
     0x1.115abep-1f, 0.0f, 0x1.bbc9ep-1f, 0x1.996d6cp-106f, 0.0f, 0.0f,
     0x1.8c24e8p-31f, 0x1.0ff524p-44f, 0.0f, 0.0f, 0.0f, 0x1.58d824p-28f, 0.0f, 0.0f,
     0.0f, 0x1.fe2e26p-21f, 0x1.721edp-101f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.83855p-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4f7764p-32f,
     0x1.a7e0ap-9f, 0.0f, 0.0f, 0.0f, 0x1.945664p-54f, 0.0f, 0x1.daef34p-98f,
     0x1.7aab3cp-77f, 0x1.46e9dap-45f, 0x1.2fc2f8p-30f, 0.0f, 0x1.62aa12p-38f,
     0x1.ce2cb6p-72f, 0.0f, 0x1.c9af1cp-70f, 0x1.e7bd4ap-56f, 0x1.e97b36p-84f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4669cap-118f, 0.0f, 0.0f, 0x1.5cfd24p-31f,
     0x1.b3c4bcp-15f, 0.0f, 0.0f, 0x1.fbac8ep-32f, 0x1.9c187ap-124f, 0x1.e5e6e4p-109f,
     0.0f, 0x1.d5b8f6p-70f, 0x1.92c3fcp-115f, 0.0f, 0x1.705726p-109f, 0x1.731452p-94f,
     0x1.d4d32cp-27f, 0.0f, 0.0f, 0.0f, 0x1.d7f836p-70f, 0x1.88b40cp-80f,
     0x1.5618b2p-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b433aap-82f, 0.0f, 0x1.bfdc0ep-116f,
     0x1.5bb1ap-29f, 0x1.d2e06p-101f, 0x1.225ed4p-40f, 0.0f, 0.0f, 0.0f,
     0x1.066a2p-7f, 0x1.b24816p-125f, 0x1.661c0cp-59f, 0.0f, 0.0f, 0x1.7daeap-49f,
     0.0f, 0x1.0a0456p-26f, 0x1.0ca82ep-38f, 0x1.f2b074p-31f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c1f48ep-41f, 0.0f, 0.0f, 0.0f, 0x1.f06308p-41f, 0x1.397cf8p-117f, 0.0f, 0.0f,
     0x1.30ab3cp-119f, 0x1.fb090cp-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.179fb2p-79f,
     0.0f, 0x1.c4c10ap-93f, 0x1.ff18a8p-19f, 0x1.4ac966p-90f, 0x1.af5c4cp-61f,
     0x1.ae828p-75f, 0.0f, 0.0f, 0.0f, 0x1.f42a64p-79f, 0.0f, 0x1.efa71ap-12f, 0.0f,
     0.0f, 0.0f, 0x1.f9b912p-48f, 0.0f, 0x1.2feb6p-88f, 0x1.0d61c8p-24f, 0.0f, 0.0f,
     0x1.0064e4p-126f, 0.0f, 0.0f, 0x1.3cdeaep-69f, 0x1.5b88dep-92f, 0x1.b2877ap-60f,
     0x1.1c3c3p-11f, 0x1.9d9462p-101f, 0x1.9a60dcp-66f, 0x1.58198ep-8f,
     0x1.a3b624p-43f, 0x1.8295p-39f, 0x1.791c48p-25f, 0x1.8ab6d4p-49f,
     0x1.ed3478p-46f, 0.0f, 0.0f, 0x1.e3da54p-1f, 0.0f, 0x1.e57a9ep-44f,
     0x1.6a7f5ap-63f, 0.0f, 0x1.c0d6ccp-4f, 0x1.83e4c2p-53f, 0x1.4df0e2p-64f, 0.0f,
     0x1.46cbecp-26f, 0x1.2a94acp-120f, 0x1.54ccf4p-27f, 0x1.88b00ap-15f,
     0x1.eb6486p-61f, 0.0f, 0x1.bab1a2p-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c89a48p-122f,
     0x1.a9f82cp-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c75cfep-60f, 0.0f,
     0x1.dc735p-105f, 0x1.28d97p-107f, 0.0f, 0x1.3ecc22p-27f, 0x1.83dfcap-18f,
     0x1.775966p-44f, 0.0f, 0x1.82f314p-101f, 0x1.733542p-73f, 0x1.6d141p-25f,
     0x1.b202p-110f, 0.0f, 0.0f, 0.0f, 0x1.ee2232p-16f, 0.0f, 0x1.9406ep-51f,
     0x1.2f7ceep-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.da78aep-92f, 0.0f,
     0x1.08456ap-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.876dc8p-93f, 0x1.f18a36p-20f,
     0.0f, 0x1.421832p-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0d938p-126f, 0x1.c9151p-54f,
     0.0f, 0.0f, 0x1.f176d6p-94f, 0x1.179bf8p-91f, 0.0f, 0x1.b34cf4p-61f,
     0x1.a2f75cp-4f, 0x1.6a1c92p-1f, 0x1.18b7cap-43f, 0.0f, 0x1.6cb59p-114f,
     0x1.03b64ap-105f, 0x1.5ac13p-56f, 0x1.0d1a16p-105f, 0.0f, 0x1.57bb96p-95f, 0.0f,
     0.0f, 0x1.f007f4p-111f, 0.0f, 0x1.a48922p-97f, 0x1.ced352p-101f, 0x1.c75f2p-60f,
     0.0f, 0x1.c64b3p-73f, 0x1.9f0664p-87f, 0x1.4043p-27f, 0x1.b9922ep-34f,
     0x1.a17ecp-73f, 0x1.e5d476p-108f, 0x1.e4832ep-47f, 0.0f, 0.0f, 0x1.e1942p-88f,
     0x1.aa4096p-125f, 0x1.0cc3p-85f, 0x1.b9aec8p-15f, 0x1.176eecp-24f, 0.0f,
     0x1.b7457p-109f, 0.0f, 0.0f, 0.0f, 0x1.9468e6p-5f, 0.0f, 0.0f, 0x1.e28656p-76f,
     0x1.5f2a76p-125f, 0x1.52dcfcp-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3921e2p-91f, 0.0f,
     0.0f, 0x1.597c86p-78f, 0.0f, 0x1.d0fab2p-98f, 0.0f, 0.0f, 0x1.ed4ddap-33f,
     0x1.075e62p-99f, 0.0f, 0x1.a07968p-28f, 0x1.cb435cp-51f, 0x1.83d1a8p-100f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.98664ap-44f, 0x1.46ac6cp-38f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.25bccp-123f, 0x1.cf1ce8p-45f, 0.0f, 0x1.ff2c06p-112f,
     0x1.4f1a28p-29f, 0.0f, 0x1.d1de12p-23f, 0.0f, 0x1.f5f01cp-50f, 0x1.122e9ap-12f,
     0.0f, 0.0f, 0x1.4a5788p-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e545e2p-125f,
     0x1.d6b004p-26f, 0.0f, 0x1.6b6fecp-18f, 0x1.e5bfeap-46f, 0.0f, 0x1.a88f9p-54f,
     0x1.76c47ap-27f, 0x1.032cc8p-92f, 0x1.61df92p-7f, 0x1.d59e46p-18f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a75fc8p-81f, 0x1.466c2ep-48f, 0.0f, 0.0f, 0x1.28151ap-74f,
     0x1.7312cap-115f, 0x1.0ae658p-47f, 0x1.f0babp-66f, 0x1.6d9cd4p-40f, 0.0f,
     0x1.796802p-111f, 0.0f, 0.0f, 0.0f, 0x1.e1a912p-79f, 0x1.42047ep-110f, 0.0f,
     0x1p0f, 0.0f, 0.0f, 0x1.ab75e6p-76f, 0.0f, 0x1.35d6dp-105f, 0x1.8708ap-23f,
     0x1.8bbd1ep-56f, 0.0f, 0.0f, 0x1.9a226cp-36f, 0x1.e9eb8p-96f, 0.0f, 0.0f,
     0x1.37fd66p-94f, 0x1.1492dap-69f, 0x1.222d06p-114f, 0.0f, 0x1.0645e2p-104f, 0.0f,
     0.0f, 0x1.d9fb2p-3f, 0.0f, 0.0f, 0x1.8f25e2p-98f, 0.0f, 0.0f, 0x1.256ff2p-114f,
     0x1.4c658p-121f, 0.0f, 0.0f, 0.0f, 0x1.59c77ap-71f, 0x1.4d5dep-37f, 0.0f,
     0x1.6d6d24p-33f, 0.0f, 0.0f, 0.0f, 0x1.036fcp-99f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.28f00ep-52f, 0.0f, 0x1.261a52p-57f, 0x1p0f, 0x1.04f296p-12f, 0.0f,
     0x1.d4ca76p-87f, 0x1.27d1ccp-95f, 0x1.b3c8ccp-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.418488p-84f, 0.0f, 0.0f, 0x1.58c17p-70f, 0.0f, 0x1.33c59ap-37f, 0.0f, 0.0f,
     0x1.721d5cp-108f, 0x1.18cfbp-1f, 0x1.0fe778p-64f, 0x1.7ab16ap-6f, 0.0f, 0.0f,
     0x1.2f2be6p-43f, 0x1.2f8d08p-106f, 0.0f, 0.0f, 0.0f, 0x1.91081cp-100f, 0.0f,
     0x1.28b282p-113f, 0x1.d63e72p-115f, 0x1.61c3ccp-49f, 0.0f, 0.0f, 0.0f,
     0x1.534ff2p-92f, 0x1.246358p-87f, 0x1.00843p-83f, 0.0f, 0.0f, 0x1.5af2b8p-79f,
     0x1.1c04ccp-110f, 0.0f, 0x1.0d08cap-76f, 0.0f, 0.0f, 0x1.fb7626p-108f,
     0x1.c635f4p-4f, 0.0f, 0.0f, 0x1.52f066p-90f, 0x1.b6034ep-49f, 0.0f, 0.0f, 0.0f,
     0x1.e4191p-106f, 0.0f, 0x1.fc20dap-106f, 0x1.807a1p-27f, 0x1.961098p-46f, 0.0f,
     0x1.100fbcp-10f, 0x1.bc693ep-115f, 0.0f, 0.0f, 0x1.53ce62p-114f, 0.0f,
     0x1.c65be2p-18f, 0x1.047766p-33f, 0x1.9eaaecp-51f, 0.0f, 0.0f, 0.0f,
     0x1.daa0d6p-110f, 0.0f, 0.0f, 0.0f, 0x1.7ef55ap-109f, 0x1.f81c12p-77f, 0.0f,
     0.0f, 0x1.56be82p-50f, 0.0f, 0x1.d6c9d6p-74f, 0.0f, 0x1.57193ap-49f,
     0x1.41a6b8p-74f, 0.0f, 0.0f, 0x1.46a8aep-76f, 0.0f, 0x1.a62p-39f, 0x1p0f,
     0x1.a39238p-108f, 0x1.397ca2p-55f, 0.0f, 0x1.4f0c0ep-82f, 0.0f, 0.0f,
     0x1.cbe91ep-87f, 0x1.6db26ep-55f, 0x1.feac6ap-55f, 0x1.bc895p-67f, 0.0f, 0.0f,
     0x1.11d488p-38f, 0x1.d92d9cp-20f, 0.0f, 0x1.7e3138p-74f, 0x1.64cbe2p-123f,
     0x1.1bf0a2p-45f, 0x1.aed99ep-15f, 0x1.fccf14p-34f, 0x1.27f778p-80f,
     0x1.5a440ep-111f, 0x1.74de84p-27f, 0.0f, 0x1.009c4cp-122f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3ce818p-17f, 0x1.da9e5ep-14f, 0.0f, 0x1.963de8p-77f,
     0.0f, 0x1.fdc0c6p-33f, 0.0f, 0x1.1a05eap-84f, 0.0f, 0.0f, 0.0f, 0x1.840c06p-95f,
     0.0f, 0.0f, 0x1.a5c062p-66f, 0x1.1383bep-26f, 0.0f, 0x1.5b71b2p-98f,
     0x1.5e5674p-117f, 0x1.e1e414p-77f, 0.0f, 0.0f, 0x1.f8685p-46f, 0.0f, 0.0f,
     0x1.7cae72p-36f, 0.0f, 0.0f, 0x1.c04cb6p-121f, 0x1.0d6c6ep-28f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a0f398p-37f, 0.0f, 0x1.bb88c8p-125f, 0x1.b21a48p-81f, 0.0f,
     0x1.2d10a6p-47f, 0.0f, 0x1.eaad36p-31f, 0x1.995598p-114f, 0x1.7f7b7cp-76f, 0.0f,
     0x1.ec8a32p-84f, 0x1.858d12p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.42b5a2p-125f, 0x1.e4a246p-6f, 0x1.fa0724p-29f, 0.0f, 0x1.3473f6p-72f, 0.0f,
     0.0f, 0x1.5ab75ep-22f, 0.0f, 0.0f, 0.0f, 0x1.0bb54ep-76f, 0x1.0753f6p-8f, 0.0f,
     0x1.5217bp-73f, 0x1.dc9782p-97f, 0x1.3d22bcp-74f, 0x1.b8e9f6p-52f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.7b0b9ap-79f, 0x1.df9c56p-33f, 0.0f, 0.0f, 0x1.982038p-120f,
     0.0f, 0.0f, 0x1.80e042p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2c2d66p-93f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.3e03cep-70f, 0x1.61d9bp-79f, 0x1.9d6996p-101f,
     0x1.ce07dp-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9b9614p-119f, 0.0f,
     0x1.a90314p-22f, 0x1p0f, 0x1.bc7aacp-95f, 0x1.2e54a4p-124f, 0x1.3b6e8ap-23f,
     0x1.b2bfcep-105f, 0.0f, 0.0f, 0.0f, 0x1.3a3c84p-112f, 0x1.c777b8p-40f, 0.0f,
     0.0f, 0.0f, 0x1.ca503p-31f, 0.0f, 0x1.1b67d4p-83f, 0x1.cfde1cp-63f, 0.0f, 0.0f,
     0.0f, 0x1.53ad6ap-45f, 0x1.c8b3ap-81f, 0.0f, 0x1.a93d12p-7f, 0.0f,
     0x1.e75a38p-9f, 0x1.1fe278p-27f, 0x1.8e51fap-60f, 0x1.126ec4p-38f, 0.0f, 0.0f,
     0x1.01d1cap-22f, 0x1.ad3408p-36f, 0x1.5ded38p-89f, 0x1.8325b2p-39f, 0.0f,
     0x1.d417c4p-96f, 0.0f, 0x1.a41d84p-14f, 0x1.b8a166p-66f, 0.0f, 0.0f,
     0x1.3f0972p-89f, 0x1.30c2e2p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7a6076p-79f, 0.0f, 0x1.f1e13cp-13f, 0x1.142366p-64f, 0.0f, 0x1.f0b7e6p-74f,
     0.0f, 0x1.7eb9cep-1f, 0x1.32fb26p-22f, 0.0f, 0x1.0dd5d6p-45f, 0.0f, 0.0f,
     0x1.fad586p-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b7f24cp-7f, 0.0f, 0x1.344d58p-80f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.90296cp-88f, 0x1.04e23p-72f, 0x1.242844p-18f, 0.0f,
     0.0f, 0.0f, 0x1.db5954p-61f, 0.0f, 0.0f, 0x1.eda2ap-118f, 0.0f, 0x1.bf49bp-64f,
     0x1.54288cp-124f, 0x1.e72b6ap-104f, 0.0f, 0x1.bf86c4p-13f, 0.0f, 0.0f, 0.0f,
     0x1.804494p-18f, 0x1.e89c9cp-99f, 0.0f, 0.0f, 0.0f, 0x1.7f84ecp-57f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.559c0cp-104f, 0x1.9eefacp-98f, 0x1.8b3786p-3f, 0.0f,
     0x1.eb2868p-104f, 0.0f, 0.0f
};
static const float external_bench_wrapper_input_table_arg1[1004]  = {
     0x1.01ded8p-108f, 0.0f, 0.0f, 0x1.ae0bdcp-46f, 0x1.64f96ep-103f, 0.0f, 0.0f,
     0x1.908e1ap-55f, 0x1.ce195ep-105f, 0x1.ae589cp-24f, 0.0f, 0.0f, 0.0f,
     0x1.7cf7cp-111f, 0.0f, 0x1.3de962p-33f, 0x1.c87758p-54f, 0x1.b7c28p-122f, 0.0f,
     0.0f, 0.0f, 0x1.59a06p-54f, 0x1.87372p-124f, 0x1.9d465cp-26f, 0x1.d62b66p-120f,
     0x1.c0feccp-66f, 0.0f, 0.0f, 0x1.cb5958p-14f, 0.0f, 0x1.1fcaep-28f,
     0x1.cb19bcp-75f, 0x1.d015cep-64f, 0x1.093124p-73f, 0x1.851056p-72f,
     0x1.2437fep-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d4d94cp-65f, 0x1.0cd51cp-26f, 0.0f,
     0x1.bd61d2p-38f, 0x1.bfa73p-26f, 0.0f, 0x1.912a02p-42f, 0x1.fd9ae2p-86f,
     0x1.9edc1cp-113f, 0.0f, 0x1.a6f692p-16f, 0x1.54a4d2p-109f, 0x1.4bac6ap-49f, 0.0f,
     0x1.b9c018p-86f, 0.0f, 0.0f, 0x1.0bda8ap-65f, 0.0f, 0.0f, 0x1.8c37a6p-50f,
     0x1.d3701ap-73f, 0x1.dec888p-57f, 0.0f, 0x1.7bc0e8p-33f, 0x1.5275dcp-1f,
     0x1.2bc8eep-67f, 0.0f, 0x1.227926p-65f, 0x1.2dafd4p-40f, 0x1.a06eb8p-57f,
     0x1.2a3454p-7f, 0x1.1b660ap-37f, 0.0f, 0x1.ba781ep-94f, 0x1.2f4ed6p-63f,
     0x1.fc5b36p-110f, 0x1.20f478p-93f, 0.0f, 0.0f, 0.0f, 0x1.5bea4cp-20f, 0.0f,
     0x1.a2b67ep-65f, 0.0f, 0.0f, 0x1.1fde1p-39f, 0.0f, 0.0f, 0x1.5bd1b2p-51f,
     0x1.d38b54p-116f, 0.0f, 0x1.2721b4p-14f, 0x1.463038p-106f, 0x1.7372cap-114f,
     0.0f, 0.0f, 0x1.9bdc12p-87f, 0x1.649fdep-109f, 0x1.26a324p-126f, 0.0f,
     0x1.7d046ep-108f, 0x1.b8b8a6p-76f, 0x1.f87e3ap-72f, 0x1.574054p-84f, 0.0f,
     0x1.b2fe3p-61f, 0x1.a5f3c8p-77f, 0x1.96bbc2p-68f, 0.0f, 0x1.965e78p-26f, 0.0f,
     0x1.c8ba38p-29f, 0x1.c16736p-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.17acaep-1f,
     0x1.11f33ep-81f, 0.0f, 0.0f, 0x1.7ae59p-87f, 0.0f, 0x1.a85c56p-112f,
     0x1.96089cp-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.40fe98p-92f, 0x1.06933ap-113f, 0.0f, 0x1.2c66bap-79f, 0.0f, 0.0f,
     0x1.258c2ap-75f, 0.0f, 0.0f, 0x1.2d99acp-30f, 0x1.8e57ap-25f, 0x1.9e5758p-32f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.160da8p-3f, 0.0f, 0x1.7b95bep-64f,
     0x1.28dafap-64f, 0.0f, 0x1.a24ea4p-57f, 0x1.59a11ap-21f, 0.0f, 0x1.4eac12p-62f,
     0x1.212ec4p-30f, 0.0f, 0x1.1df4b6p-8f, 0x1.c88aaap-88f, 0.0f, 0.0f,
     0x1.65050ap-80f, 0x1.3c507ap-36f, 0.0f, 0.0f, 0x1.ec387p-30f, 0.0f,
     0x1.6d8efp-73f, 0.0f, 0x1.fc910cp-36f, 0.0f, 0x1.d40564p-40f, 0x1.b757f6p-119f,
     0x1.571758p-125f, 0x1.a3bc8p-4f, 0.0f, 0x1.4914ccp-56f, 0x1.331c12p-65f,
     0x1.7fa99p-49f, 0x1.b421ep-4f, 0.0f, 0x1.e33f08p-68f, 0.0f, 0.0f,
     0x1.ff4a4cp-60f, 0.0f, 0x1.b6356p-57f, 0x1.850fd6p-125f, 0x1.32967ep-4f,
     0x1.b582acp-5f, 0x1.25d1f6p-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.721884p-83f, 0.0f,
     0.0f, 0.0f, 0x1.b7b2bp-53f, 0.0f, 0x1.bf4eeep-51f, 0.0f, 0x1.59906p-43f,
     0x1.0ffcb6p-52f, 0x1.d7deep-107f, 0x1.e9df1p-107f, 0x1.b9d3ccp-32f, 0.0f, 0.0f,
     0x1.71ac9p-1f, 0.0f, 0x1.06bd5ap-2f, 0x1.597958p-99f, 0.0f, 0x1.9773p-3f, 0.0f,
     0x1.41a51ap-101f, 0x1.3ff33cp-43f, 0x1.0fbep-8f, 0.0f, 0.0f, 0.0f,
     0x1.5e919ap-124f, 0.0f, 0.0f, 0x1.444388p-63f, 0.0f, 0x1.f761dap-104f, 0.0f,
     0.0f, 0.0f, 0x1.e3155p-38f, 0x1.03d36p-87f, 0.0f, 0.0f, 0x1.8e1c4ap-2f, 0.0f,
     0.0f, 0x1.e0db04p-19f, 0x1.90a0c6p-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.94e596p-46f,
     0x1.d8b87cp-120f, 0.0f, 0x1.016e7ep-73f, 0.0f, 0.0f, 0x1p0f, 0x1.bd2ad4p-112f,
     0.0f, 0x1.21a738p-54f, 0.0f, 0x1.2ba4cp-93f, 0.0f, 0.0f, 0x1.7969bap-122f,
     0x1.25b9bp-120f, 0x1.cc8346p-108f, 0.0f, 0.0f, 0x1.141e1ep-24f, 0x1.e851eep-46f,
     0x1.b6f4e2p-69f, 0x1.69600ap-103f, 0x1.1ea69p-56f, 0.0f, 0x1.326a2ap-2f,
     0x1.c1e626p-61f, 0x1.d3e466p-123f, 0x1.3b6cacp-7f, 0x1.2dbb02p-91f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.76ed88p-38f, 0.0f, 0x1.3de22ap-64f, 0.0f,
     0x1.e6029p-9f, 0x1.b46d86p-50f, 0.0f, 0x1.1884dcp-98f, 0x1.8c7dd4p-43f, 0.0f,
     0x1.80e7a2p-60f, 0x1.ac2306p-40f, 0x1.92e5aap-72f, 0.0f, 0.0f, 0x1.63f656p-73f,
     0x1.dabde2p-119f, 0x1.45f632p-21f, 0x1.efd52p-107f, 0.0f, 0x1.a95618p-63f, 0.0f,
     0x1.cfe614p-16f, 0x1.ab0672p-74f, 0.0f, 0x1.bde04p-76f, 0x1.6dc47ep-32f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7b2e38p-3f, 0.0f, 0.0f, 0.0f, 0x1.a8a3ecp-115f,
     0x1.3393fap-60f, 0.0f, 0.0f, 0x1.02b20cp-58f, 0x1.d1280cp-70f, 0.0f, 0.0f, 0.0f,
     0x1.9c977ep-76f, 0.0f, 0x1.625c6cp-79f, 0.0f, 0x1.20378ap-106f, 0x1.d8dc9ep-61f,
     0.0f, 0.0f, 0x1.54563ep-31f, 0x1.abe8dcp-83f, 0x1.f9daa2p-111f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.51d736p-57f, 0.0f, 0.0f, 0x1.60eafap-103f, 0.0f, 0x1.5cb4eap-5f,
     0x1.45d77cp-46f, 0x1.c789b8p-70f, 0x1.adca36p-61f, 0.0f, 0x1.d04822p-104f,
     0x1.917014p-34f, 0x1.5ca29p-109f, 0x1.8da818p-63f, 0.0f, 0.0f, 0x1.5940ap-3f,
     0x1.90bdaap-22f, 0x1.fdeeacp-38f, 0.0f, 0.0f, 0.0f, 0x1.db4c6cp-43f,
     0x1.303e38p-20f, 0.0f, 0.0f, 0.0f, 0x1.07239ap-104f, 0x1.ece096p-112f, 0.0f,
     0.0f, 0x1.c07ccap-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1c3fdp-32f,
     0x1.c366bp-107f, 0x1.8e84fcp-37f, 0.0f, 0.0f, 0x1.f9d382p-1f, 0.0f, 0.0f, 0.0f,
     0x1.b86dcp-31f, 0x1.bcb74p-68f, 0x1.70997cp-21f, 0x1.8d40aep-18f, 0.0f, 0.0f,
     0x1.fe5b5ap-37f, 0.0f, 0x1.078f0ep-105f, 0x1.05c2e8p-42f, 0.0f, 0.0f,
     0x1.4b79ecp-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ed186cp-126f,
     0.0f, 0x1.4d4586p-10f, 0.0f, 0x1.acbfd6p-112f, 0x1.b017fp-114f, 0x1.e712d6p-94f,
     0.0f, 0.0f, 0.0f, 0x1.e0c798p-39f, 0x1.76546p-66f, 0.0f, 0.0f, 0.0f,
     0x1.e19b0cp-73f, 0.0f, 0x1.4a6a06p-61f, 0x1.c4566p-117f, 0x1.ff86b6p-37f, 0.0f,
     0x1.20cf64p-3f, 0.0f, 0.0f, 0x1.fa286ap-10f, 0x1.75ba78p-53f, 0.0f,
     0x1.07dbcep-100f, 0x1.44f31p-105f, 0.0f, 0x1.e6e524p-17f, 0x1.0429dap-68f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.4973p-33f, 0x1.6cbbb4p-81f, 0.0f, 0x1.58814ep-118f,
     0x1.fb3b98p-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.82b2bcp-92f, 0x1.602a98p-75f,
     0x1.339a82p-112f, 0.0f, 0x1.703b38p-52f, 0.0f, 0x1.66d888p-35f, 0x1.fcf9dep-102f,
     0.0f, 0x1.352bd8p-4f, 0.0f, 0x1.a9cb04p-7f, 0x1.d6d926p-75f, 0x1.305198p-69f,
     0.0f, 0.0f, 0.0f, 0x1.bd875p-70f, 0x1.0a42ap-125f, 0x1.fac84ap-1f,
     0x1.cdcdfep-77f, 0x1.93c5e8p-12f, 0x1.e32de8p-14f, 0x1.e71f7ap-68f,
     0x1.dd3a1cp-74f, 0.0f, 0x1.afaff8p-91f, 0x1.e121dap-41f, 0x1.979f32p-32f,
     0x1.ac545cp-63f, 0.0f, 0x1.fa2cb4p-53f, 0.0f, 0x1.0dce18p-123f, 0x1.72c706p-105f,
     0x1.0240dp-115f, 0.0f, 0.0f, 0.0f, 0x1.11d0f8p-63f, 0.0f, 0x1.10931cp-43f,
     0x1.f684cp-113f, 0x1.dab976p-113f, 0x1.74b4acp-104f, 0.0f, 0.0f, 0x1.30cb2cp-50f,
     0x1.f4ac2p-122f, 0x1.93b0dap-17f, 0.0f, 0.0f, 0.0f, 0x1.20978ep-108f,
     0x1.cbecc6p-68f, 0x1.91cc54p-9f, 0x1.653566p-106f, 0x1.d874ecp-79f, 0.0f,
     0x1.1492p-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7b32dp-32f, 0x1.7651c4p-121f,
     0x1.ac43f4p-126f, 0x1.4d488ap-47f, 0x1.efcedap-30f, 0.0f, 0.0f, 0.0f,
     0x1.e5fc76p-51f, 0.0f, 0.0f, 0.0f, 0x1.0e8d14p-71f, 0.0f, 0x1.4dabd8p-20f, 0.0f,
     0.0f, 0x1.7b574p-110f, 0x1.e25d76p-86f, 0.0f, 0x1.379d62p-20f, 0.0f,
     0x1.2f7756p-23f, 0.0f, 0.0f, 0.0f, 0x1.936544p-97f, 0x1.41e2bep-17f,
     0x1.19c51p-62f, 0x1.7cc844p-21f, 0x1.c6ae2ap-110f, 0x1.a11fbap-123f, 0.0f,
     0x1.b259cep-69f, 0.0f, 0x1.ba3b6ap-121f, 0.0f, 0.0f, 0x1.8cd58cp-93f, 0.0f, 0.0f,
     0x1.97cf8ep-72f, 0.0f, 0x1.4a4aeep-6f, 0x1.f35822p-27f, 0.0f, 0x1.1eded2p-55f,
     0.0f, 0.0f, 0x1.f8263p-81f, 0x1.a00458p-26f, 0x1.dab388p-66f, 0x1.ec3664p-36f,
     0x1.a9d5dcp-3f, 0x1.9c2846p-75f, 0.0f, 0.0f, 0x1.636f28p-69f, 0x1.918128p-72f,
     0x1.4996d4p-84f, 0x1p0f, 0x1.5a8d72p-5f, 0x1.b39d82p-12f, 0.0f, 0x1.1134fep-72f,
     0x1.b24f0ap-79f, 0x1.21610cp-88f, 0x1.0394f8p-72f, 0.0f, 0.0f, 0.0f,
     0x1.706dc6p-80f, 0.0f, 0.0f, 0x1.67fb74p-83f, 0.0f, 0x1.8a2d78p-108f, 0.0f, 0.0f,
     0x1.4674aep-95f, 0x1.8183cep-56f, 0x1.21786ap-94f, 0x1.f38d66p-31f, 0.0f, 0.0f,
     0.0f, 0x1.f499p-40f, 0.0f, 0x1.95ffdep-39f, 0x1.19dccep-105f, 0.0f,
     0x1.57cbc6p-122f, 0.0f, 0.0f, 0x1.10bafp-66f, 0x1.60851cp-81f, 0.0f, 0.0f, 0.0f,
     0x1.1312f8p-89f, 0x1.a839a2p-45f, 0.0f, 0.0f, 0x1.77b70ap-18f, 0x1.5e9358p-106f,
     0x1.91573p-117f, 0x1.ed7404p-82f, 0.0f, 0x1.4678aap-112f, 0x1.d93056p-110f, 0.0f,
     0x1.0d75bcp-113f, 0x1.9654cap-54f, 0.0f, 0.0f, 0.0f, 0x1.7873a6p-111f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.51436cp-46f, 0.0f, 0x1.db57a8p-83f, 0x1.b9a6c2p-53f,
     0x1.64636cp-18f, 0x1.ddef08p-9f, 0x1.ef2eecp-12f, 0.0f, 0.0f, 0x1.dd51cp-5f,
     0x1.97f2b6p-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a62034p-100f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.eaa938p-58f, 0x1.e28036p-4f, 0.0f,
     0x1.13e4aep-11f, 0x1.41b9bcp-50f, 0.0f, 0x1.827e26p-34f, 0x1.026beap-72f, 0.0f,
     0.0f, 0.0f, 0x1.74377ap-6f, 0x1.dda26cp-38f, 0x1.85b9ap-15f, 0.0f, 0.0f,
     0x1.810848p-52f, 0.0f, 0.0f, 0x1.664a1ep-102f, 0x1.e4c9d4p-12f, 0x1.530932p-105f,
     0.0f, 0.0f, 0x1.12dc2p-19f, 0.0f, 0.0f, 0.0f, 0x1.6f910ap-109f, 0.0f,
     0x1.a52448p-126f, 0x1.1bef62p-1f, 0x1.e50798p-52f, 0.0f, 0x1.672302p-16f, 0.0f,
     0.0f, 0x1.5aa416p-108f, 0.0f, 0x1.0e6faep-104f, 0.0f, 0.0f, 0x1.4bf5acp-6f, 0.0f,
     0.0f, 0x1.05536ep-62f, 0.0f, 0x1.788312p-1f, 0x1.22dcb2p-8f, 0.0f,
     0x1.d563f6p-116f, 0x1.6efc68p-81f, 0x1.c8f8aap-31f, 0.0f, 0.0f, 0x1.fecea8p-83f,
     0.0f, 0.0f, 0x1.a42adp-78f, 0x1.6e30f8p-124f, 0.0f, 0.0f, 0x1.5495b8p-22f, 0.0f,
     0.0f, 0x1.1afdb2p-78f, 0x1.9fe7b6p-23f, 0x1.ac3a8cp-85f, 0.0f, 0.0f,
     0x1.dff88p-100f, 0x1.565708p-91f, 0x1.93a54ap-37f, 0x1.2e1c26p-86f, 0.0f, 0.0f,
     0.0f, 0x1.52055ep-92f, 0x1.c3fd94p-119f, 0x1.9bfb72p-15f, 0.0f, 0x1.82bc0ap-40f,
     0.0f, 0x1.5e77eap-56f, 0x1.b6507ap-106f, 0.0f, 0x1.77ca96p-76f, 0.0f,
     0x1.bd68a4p-42f, 0x1.bcb564p-103f, 0x1.854ea8p-77f, 0x1.ef13d8p-22f, 0.0f, 0.0f,
     0x1.e9bc16p-85f, 0x1.20f392p-8f, 0x1.022d2p-94f, 0.0f, 0.0f, 0x1.5aedb2p-44f,
     0.0f, 0.0f, 0x1.9f2132p-117f, 0x1.30c50ep-64f, 0.0f, 0.0f, 0x1.3c0182p-84f,
     0x1.81dfe2p-105f, 0.0f, 0x1.329cbp-121f, 0x1.b99298p-108f, 0x1.f4cddp-96f, 0.0f,
     0.0f, 0x1.b94aa8p-81f, 0.0f, 0.0f, 0x1.870b46p-75f, 0.0f, 0.0f, 0.0f,
     0x1.eb870ap-10f, 0x1.e327f8p-54f, 0.0f, 0x1.1d6702p-57f, 0x1.df39c2p-78f, 0.0f,
     0x1.a06708p-24f, 0x1.e4bb86p-22f, 0.0f, 0x1.703ed6p-5f, 0x1.2c6102p-57f, 0.0f,
     0.0f, 0x1.567928p-70f, 0.0f, 0x1.487a8ap-29f, 0x1.8face2p-98f, 0x1.97f686p-78f,
     0x1.178354p-24f, 0.0f, 0x1.30552cp-95f, 0x1.789322p-88f, 0.0f, 0x1.13293cp-42f,
     0.0f, 0.0f, 0x1.62df18p-16f, 0x1.533a4cp-54f, 0x1.48a99ep-62f, 0.0f,
     0x1.f5fccp-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c836a6p-78f, 0.0f, 0.0f,
     0x1.565814p-27f, 0.0f, 0.0f, 0.0f, 0x1.de225ap-125f, 0.0f, 0x1.593a38p-109f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a33c8p-101f, 0.0f, 0x1.fc931ep-16f, 0.0f,
     0x1.a6acb4p-57f, 0.0f, 0x1.301894p-1f, 0.0f, 0x1.ba63f8p-99f, 0.0f,
     0x1.ced64ep-118f, 0.0f, 0x1.0d5e38p-116f, 0.0f, 0.0f, 0x1.6b7a12p-123f, 0.0f,
     0x1.f19028p-31f, 0.0f, 0.0f, 0x1.1dc40ep-53f, 0x1.ac2ba8p-77f, 0.0f,
     0x1.6b30fcp-106f, 0.0f, 0x1.926694p-103f, 0.0f, 0.0f, 0x1.f9bd66p-71f, 0.0f,
     0x1.aa50c2p-40f, 0x1.9b3978p-118f, 0x1.505058p-40f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bd87e8p-114f, 0x1.31eef2p-1f, 0x1.50149ep-14f, 0x1.a0c8a6p-22f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.fa1c4ap-53f, 0.0f, 0x1.a3daf4p-35f, 0.0f, 0.0f, 0.0f,
     0x1.345f4ep-3f, 0x1.abd0cap-20f, 0x1.e7a9dcp-122f, 0x1.a8c25ep-62f, 0.0f,
     0x1.1881dep-57f, 0.0f, 0x1.6d40aap-61f, 0.0f, 0.0f, 0x1.781adcp-83f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c0566ep-99f, 0x1.e5ffap-111f, 0x1.51622cp-94f,
     0x1.079dd2p-93f, 0x1.3680dcp-115f, 0.0f, 0.0f, 0.0f, 0x1.a14a9cp-115f, 0.0f,
     0.0f, 0x1.6a7728p-115f, 0x1.4f3192p-109f, 0x1.3892e2p-118f, 0x1.44edd4p-92f,
     0x1.6b66c2p-62f, 0.0f, 0x1.2db8e6p-44f, 0.0f, 0.0f, 0x1.213396p-23f, 0.0f, 0.0f,
     0x1.4a3762p-65f, 0x1.8b57fcp-56f, 0.0f, 0.0f, 0.0f, 0x1.65765p-12f, 0.0f,
     0x1.d570bap-35f, 0.0f, 0.0f, 0x1.c5893ep-113f, 0x1.c716d6p-46f, 0.0f, 0.0f,
     0x1.20d61cp-89f, 0.0f, 0x1.f7dbeep-5f, 0x1.7d2c3ap-82f, 0.0f, 0x1.3170e4p-73f,
     0.0f, 0x1.8221fcp-99f, 0.0f, 0x1.c14ab2p-126f, 0x1.095c4ep-86f, 0.0f,
     0x1.67cc38p-122f, 0x1.8cc93ap-119f, 0x1.6af518p-16f, 0.0f, 0x1.234022p-36f, 0.0f,
     0x1.df989ep-41f, 0.0f, 0x1.866ac8p-8f, 0x1.d9fef6p-85f, 0.0f, 0.0f, 0.0f,
     0x1.3f42p-91f, 0.0f, 0.0f, 0x1.9885e2p-63f, 0x1.b7a30cp-111f, 0.0f,
     0x1.fbc95cp-45f, 0x1.16d802p-93f, 0x1.af60a6p-15f, 0x1.dfe2a4p-103f, 0.0f, 0.0f,
     0.0f, 0x1.38c5b6p-21f, 0.0f, 0.0f, 0x1.5ae828p-43f, 0.0f, 0x1.cbd17cp-112f,
     0x1.d2718cp-80f, 0.0f, 0x1.899ba2p-102f, 0x1.389e84p-103f, 0.0f, 0x1.4f0f0cp-91f,
     0.0f, 0.0f, 0x1.4d6c52p-66f, 0.0f, 0x1.05282p-35f, 0x1.a68ed4p-29f, 0.0f,
     0x1.29f92ap-29f, 0x1.52acaep-121f, 0x1.8ee4e4p-120f
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
            tmp2 = Sleef_finz_nextafterf4_avx2128(tmp0, tmp1);
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
    printf("Sleef_finz_nextafterf4_avx2128 %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_nextafterf4_avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
