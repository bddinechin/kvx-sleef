/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_log1pf4_u10avx2128.c --function \
 *     Sleef_finz_log1pf4_u10avx2128 --headers sleef.h,ml_support_lib.h \
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
     0x1.50602cp-20f, 0.0f, 0x1.bc92a4p-3f, 0.0f, 0x1.78df94p-38f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.259e9p-66f, 0.0f, 0x1.bf2efp-111f, 0x1.29067cp-40f, 0.0f,
     0x1.6a5108p-87f, 0x1.3f8e1cp-94f, 0.0f, 0.0f, 0x1.b3e718p-13f, 0.0f,
     0x1.399d02p-92f, 0.0f, 0.0f, 0x1.641b34p-123f, 0x1.876c22p-91f, 0x1.f7a34ap-69f,
     0x1.0c795cp-50f, 0.0f, 0x1.ce5d2p-64f, 0.0f, 0x1.75e5f2p-19f, 0.0f, 0.0f,
     0x1.5bbd86p-71f, 0x1.663ea2p-61f, 0.0f, 0.0f, 0x1.3c5458p-71f, 0x1.f01f5ep-45f,
     0x1.9d6b28p-104f, 0x1.1e2806p-125f, 0x1.a75d58p-19f, 0x1.2d7a28p-89f, 0.0f,
     0x1.ae01b8p-41f, 0x1.ba58e8p-8f, 0.0f, 0.0f, 0.0f, 0x1.6446c6p-69f,
     0x1.c2b8bap-62f, 0.0f, 0x1.b41a1p-80f, 0.0f, 0x1.d01dbap-80f, 0.0f, 0.0f, 0.0f,
     0x1.59ff82p-107f, 0.0f, 0.0f, 0x1.62ca1ep-49f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a4cd7ep-15f, 0x1.489b6ep-120f, 0x1.c0b5c2p-14f, 0x1.b0d4d8p-32f, 0.0f,
     0x1.65edacp-9f, 0.0f, 0x1.de59ap-47f, 0x1.2cb068p-1f, 0.0f, 0x1.7390fep-98f,
     0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.f789f8p-3f, 0x1.a774b4p-55f, 0.0f, 0.0f,
     0x1.0f5bfcp-108f, 0x1.dfca84p-71f, 0x1.67b94ap-102f, 0x1.840a58p-120f, 0.0f,
     0.0f, 0x1.5b317ap-36f, 0x1.60e51p-105f, 0x1.0898p-1f, 0x1.81416ep-14f,
     0x1.beaa64p-104f, 0x1.2414d8p-83f, 0.0f, 0x1.78b28ap-118f, 0.0f, 0x1.957eb4p-24f,
     0x1.aa2e0ap-13f, 0x1.b3fb44p-91f, 0x1.8c2272p-21f, 0x1.a190bap-12f,
     0x1.5c94fp-46f, 0x1.4ab6f4p-88f, 0x1.8ff424p-49f, 0.0f, 0x1.04db5ep-115f,
     0x1.37143ap-115f, 0.0f, 0.0f, 0x1.48637p-114f, 0x1.c914dap-115f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.2fcfb4p-3f, 0x1.0be7ap-52f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.697ba8p-35f, 0x1.21c3cap-13f, 0x1.fbe43ap-98f, 0.0f, 0x1.3fc8f2p-5f,
     0x1.973118p-39f, 0.0f, 0.0f, 0x1.1ffb86p-81f, 0.0f, 0x1.a7c94ap-54f, 0.0f,
     0x1.e5eb2p-89f, 0x1.7ca622p-47f, 0x1.7655fep-33f, 0.0f, 0.0f, 0.0f,
     0x1.1aad2ap-73f, 0.0f, 0x1.a2e17ep-81f, 0x1.fe6df4p-16f, 0x1.da6046p-67f,
     0x1.8baefp-4f, 0.0f, 0x1.473334p-89f, 0x1.3fa2aep-120f, 0x1.62318p-12f,
     0x1.c86028p-10f, 0.0f, 0.0f, 0x1.0de08p-86f, 0.0f, 0.0f, 0x1.110904p-108f, 0.0f,
     0.0f, 0.0f, 0x1.90860ep-58f, 0x1.b89f3p-12f, 0.0f, 0x1.97f212p-70f, 0.0f, 0.0f,
     0x1.b8bc88p-18f, 0.0f, 0.0f, 0.0f, 0x1.8b47c2p-69f, 0x1.9f8ccap-96f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.12def4p-124f, 0x1p0f, 0x1.76bf52p-94f, 0.0f, 0.0f,
     0x1.6481b8p-96f, 0x1.80bda6p-97f, 0.0f, 0x1.ed7c34p-113f, 0.0f, 0x1.8984eap-9f,
     0.0f, 0x1.9319aep-110f, 0.0f, 0x1.7984dep-5f, 0.0f, 0.0f, 0x1.740358p-73f, 0.0f,
     0x1.52469p-115f, 0x1.67f846p-115f, 0x1.6ae6dp-122f, 0.0f, 0x1.6f5c0ap-44f,
     0x1.830bccp-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.547194p-107f, 0x1.b6735cp-62f,
     0x1.a27f82p-58f, 0x1.c20e88p-97f, 0x1.98c8p-63f, 0.0f, 0x1.43a2c2p-25f,
     0x1.a37574p-22f, 0.0f, 0x1.5209c8p-72f, 0.0f, 0.0f, 0x1.5d47ap-50f, 0.0f,
     0x1.4f041ap-41f, 0.0f, 0.0f, 0.0f, 0x1.d15886p-87f, 0x1.aecbf6p-79f, 0.0f, 0.0f,
     0x1.c12f66p-25f, 0x1.12602cp-29f, 0x1.4fffp-29f, 0.0f, 0.0f, 0x1.218f1ap-72f,
     0.0f, 0.0f, 0x1.5ea8cep-53f, 0.0f, 0.0f, 0x1.c1291cp-97f, 0.0f, 0x1.08d58ep-8f,
     0.0f, 0x1.2d849ap-115f, 0x1.85156ap-27f, 0x1.8830ap-32f, 0x1.89c42p-48f, 0.0f,
     0x1.bd9d2ap-75f, 0.0f, 0.0f, 0.0f, 0x1.1174e8p-19f, 0x1.0195ccp-48f,
     0x1.e17d3p-124f, 0x1.46e6a8p-69f, 0x1.b80388p-15f, 0x1.e38e24p-70f, 0.0f, 0.0f,
     0x1.60fedep-38f, 0x1.61d3fp-80f, 0x1.22fe7ep-103f, 0x1.064af6p-21f,
     0x1.46127p-100f, 0x1.01cb1cp-96f, 0.0f, 0x1.10c056p-126f, 0x1.30c376p-81f, 0.0f,
     0.0f, 0.0f, 0x1.f0a03p-25f, 0x1.07531cp-14f, 0x1.66865p-21f, 0.0f,
     0x1.ba6c8cp-88f, 0x1.c121fep-45f, 0.0f, 0x1.99b6a4p-121f, 0x1.e6b586p-115f, 0.0f,
     0.0f, 0x1.555716p-17f, 0.0f, 0.0f, 0x1.fac1dcp-98f, 0.0f, 0.0f, 0x1.29c98ap-81f,
     0x1.a5414p-73f, 0.0f, 0.0f, 0.0f, 0x1.6ab7e6p-72f, 0x1.99d088p-41f, 0.0f,
     0x1.a3296ep-37f, 0.0f, 0.0f, 0x1.9284dp-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ebbbdep-87f, 0.0f, 0.0f, 0x1.02bc94p-7f, 0x1.1fb1d8p-125f, 0x1.2d3384p-9f,
     0.0f, 0.0f, 0x1.d4c3aep-67f, 0x1.37810ap-74f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a2cbbap-50f, 0.0f, 0.0f, 0x1.e01934p-125f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d7805p-120f, 0x1.18082cp-18f, 0.0f, 0x1.1d71bep-36f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.274b8ap-126f, 0.0f, 0.0f, 0x1.7c044cp-93f, 0.0f, 0.0f,
     0.0f, 0x1.afa2d6p-2f, 0.0f, 0x1.a52c1ep-89f, 0.0f, 0x1.b1ac9p-3f,
     0x1.1ee444p-14f, 0.0f, 0x1.dc206ap-93f, 0x1.aa9d12p-117f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e06978p-93f, 0.0f, 0.0f, 0x1.d74afcp-20f, 0x1.10f9bp-121f,
     0x1.201516p-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7c3bb8p-112f, 0x1.b3d8a4p-21f,
     0.0f, 0x1.fe9086p-123f, 0x1.18ec94p-117f, 0.0f, 0x1.39280ap-9f, 0x1.dee616p-3f,
     0.0f, 0x1.684f44p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d2ad16p-100f, 0x1.8b1e1p-71f, 0.0f, 0.0f, 0x1.bc3f4ep-50f, 0x1.f74938p-8f,
     0x1.2d2608p-55f, 0x1.1afb58p-95f, 0.0f, 0.0f, 0.0f, 0x1.6626dcp-122f, 0.0f, 0.0f,
     0x1.f7cf4cp-69f, 0.0f, 0x1.1f952p-76f, 0.0f, 0x1.9cf6f8p-108f, 0x1.2f43fcp-30f,
     0x1.ca9802p-107f, 0x1.5db376p-27f, 0x1p0f, 0x1.92fap-37f, 0.0f, 0.0f,
     0x1.50c7cap-100f, 0.0f, 0x1.c2bba2p-95f, 0.0f, 0x1.247486p-16f, 0x1.0a56dap-64f,
     0.0f, 0x1.3ce57ap-106f, 0.0f, 0.0f, 0x1.908dp-93f, 0x1.63165p-94f,
     0x1.e9891p-109f, 0.0f, 0.0f, 0x1.cf804p-35f, 0x1.904d8p-22f, 0.0f, 0.0f,
     0x1.58963p-112f, 0.0f, 0x1.7eb552p-84f, 0x1.d76eb2p-41f, 0.0f, 0x1.7d6bdep-112f,
     0.0f, 0.0f, 0x1.401c5ep-43f, 0.0f, 0.0f, 0x1.405264p-53f, 0.0f, 0.0f,
     0x1.1d0624p-108f, 0.0f, 0x1.c2b936p-93f, 0x1.c016b4p-16f, 0.0f, 0.0f,
     0x1.1996dep-62f, 0x1.19e008p-74f, 0x1.ff983ap-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b61cp-16f, 0x1.fb4d2cp-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f7e93ap-66f,
     0.0f, 0.0f, 0x1.e9bbf8p-82f, 0.0f, 0.0f, 0.0f, 0x1.a1be8p-58f, 0.0f,
     0x1.0e6628p-84f, 0x1.4046dp-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.534b0ap-73f, 0.0f, 0x1.a571aap-26f, 0.0f, 0x1.f0e518p-121f, 0.0f, 0.0f,
     0x1.5fffaap-60f, 0x1.f2a72ap-106f, 0x1.4f3e22p-87f, 0x1.e0c284p-75f, 0.0f,
     0x1.7751e2p-30f, 0x1.901022p-15f, 0.0f, 0.0f, 0.0f, 0x1.65d93cp-45f, 0.0f, 0.0f,
     0x1.51ae4cp-5f, 0x1.ab44bp-4f, 0.0f, 0x1.2148c2p-62f, 0x1.1f776p-81f,
     0x1.e1c102p-110f, 0x1.e9bac2p-29f, 0x1.50d40ep-18f, 0x1.b9a0b4p-32f, 0.0f, 0.0f,
     0x1.f051d8p-62f, 0.0f, 0x1.d5b608p-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.33fc4ap-43f, 0x1.9183acp-33f, 0x1.6e7e68p-12f, 0.0f,
     0x1.539174p-101f, 0x1p0f, 0.0f, 0x1.4a3112p-72f, 0.0f, 0x1.df729cp-64f, 0.0f,
     0.0f, 0x1.27cfc6p-27f, 0x1.cabdf8p-32f, 0x1.5d8b08p-26f, 0x1.111ebap-40f,
     0x1.841e56p-91f, 0.0f, 0x1.b96d28p-54f, 0x1.055c5p-14f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fc5c92p-65f, 0x1.023f24p-28f, 0x1.179af4p-63f, 0.0f, 0x1.bf4e5cp-63f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.01530ap-122f, 0x1.53fd82p-29f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.cd5a1ap-13f, 0.0f, 0.0f, 0.0f, 0x1.75471cp-42f, 0.0f, 0x1.19a17cp-97f,
     0x1.05d1c4p-15f, 0x1.af09e4p-43f, 0.0f, 0x1.41eb94p-89f, 0x1.7f2918p-51f,
     0x1.80ca3ap-115f, 0.0f, 0.0f, 0.0f, 0x1.e462fcp-96f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0c11c2p-59f, 0x1.a3974ep-99f, 0.0f, 0x1.be5cf8p-67f, 0.0f, 0x1.8d18d4p-65f,
     0x1.1fb4fcp-71f, 0.0f, 0x1.3ea62p-80f, 0x1.579fa2p-35f, 0.0f, 0.0f,
     0x1.9c8518p-125f, 0x1.9e3e54p-68f, 0.0f, 0.0f, 0x1.2f7a7ep-24f, 0x1.f3c402p-105f,
     0x1.edbeaap-76f, 0x1.de59eep-54f, 0.0f, 0x1.7065e2p-22f, 0x1.b1aa3ap-59f, 0.0f,
     0.0f, 0x1.dff58cp-47f, 0.0f, 0.0f, 0x1.a3115ap-47f, 0.0f, 0x1.1d6a6cp-117f,
     0x1.97649cp-51f, 0x1.3b03b4p-29f, 0x1.95815cp-53f, 0.0f, 0.0f, 0x1.46b448p-34f,
     0.0f, 0x1.92357cp-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.20ff0cp-35f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4b01d6p-43f, 0.0f, 0x1.d21668p-74f,
     0x1.aa141ap-126f, 0.0f, 0x1.c1c65ap-110f, 0.0f, 0x1p0f, 0x1.48ca66p-92f,
     0x1.8e02cap-109f, 0.0f, 0.0f, 0.0f, 0x1.cbdbfcp-96f, 0x1.951468p-18f,
     0x1.804452p-50f, 0.0f, 0x1.9f8b6ap-12f, 0x1.71c778p-123f, 0x1.60cc7ep-105f,
     0x1.77f1fap-27f, 0x1.57e698p-119f, 0x1.a17d56p-112f, 0.0f, 0x1.dfed86p-123f,
     0x1.e40526p-105f, 0.0f, 0.0f, 0x1.33c416p-111f, 0.0f, 0.0f, 0x1.52e146p-45f,
     0.0f, 0.0f, 0.0f, 0x1.bf1872p-28f, 0.0f, 0.0f, 0x1.511804p-2f, 0x1.acdefep-9f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d4a88ap-104f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ec46e2p-18f, 0.0f, 0.0f, 0x1.15cf42p-106f,
     0x1.1cef54p-109f, 0x1.1c4d8ap-5f, 0x1.5d3762p-22f, 0.0f, 0x1.04f844p-47f, 0.0f,
     0x1.957e82p-115f, 0x1.46bc24p-5f, 0.0f, 0x1.91f9ccp-88f, 0.0f, 0.0f,
     0x1.fb69fp-15f, 0.0f, 0.0f, 0x1.b4e3p-100f, 0x1.f7b56cp-109f, 0x1.7340d8p-107f,
     0.0f, 0.0f, 0x1.1ca79ap-34f, 0.0f, 0x1.b8c088p-31f, 0x1.7b147p-70f, 0.0f, 0.0f,
     0x1.6475acp-78f, 0x1.3aacbcp-100f, 0.0f, 0x1.43c3aep-114f, 0x1.ff120ap-13f,
     0x1.3162p-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a1c16ap-7f, 0x1.fa95aep-40f, 0.0f,
     0x1.e41656p-5f, 0.0f, 0.0f, 0x1.946598p-68f, 0.0f, 0.0f, 0x1.0f22c8p-21f, 0.0f,
     0.0f, 0x1.13bd86p-118f, 0x1.7085dp-120f, 0.0f, 0x1.548cb8p-67f, 0x1.126ea2p-62f,
     0.0f, 0x1.00efa8p-107f, 0.0f, 0x1.3dcb66p-86f, 0.0f, 0x1.1973eep-110f, 0.0f,
     0.0f, 0x1.f3ffp-92f, 0.0f, 0.0f, 0x1.89790ep-103f, 0x1.0bfa86p-82f, 0.0f, 0.0f,
     0.0f, 0x1.fa7ce4p-113f, 0.0f, 0x1.18d944p-63f, 0.0f, 0x1.3991f4p-73f, 0.0f,
     0x1.3b3a8cp-10f, 0x1.21a7e4p-54f, 0x1.ccb3dep-40f, 0.0f, 0.0f, 0.0f,
     0x1.f432bep-98f, 0.0f, 0x1.d4919ep-52f, 0x1.fd804p-82f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b01d72p-46f, 0.0f, 0x1.3d38bp-89f, 0.0f, 0.0f, 0.0f,
     0x1.e2d58ap-74f, 0.0f, 0x1.d7ed7ap-106f, 0x1.7c2fb4p-63f, 0x1.9b3282p-49f, 0.0f,
     0.0f, 0.0f, 0x1.65eb48p-71f, 0.0f, 0x1.168d7p-84f, 0.0f, 0x1.c51346p-16f,
     0x1.84bf42p-110f, 0.0f, 0.0f, 0x1.efab68p-101f, 0x1.5b27d4p-124f, 0.0f,
     0x1.20766p-6f, 0x1.24430cp-41f, 0x1.f164bp-17f, 0.0f, 0x1.375958p-30f, 0.0f,
     0x1.43b75p-81f, 0x1.7d6962p-70f, 0x1.7c6896p-11f, 0.0f, 0x1.96d214p-121f, 0.0f,
     0x1.cc5f84p-32f, 0x1.a24a2p-58f, 0.0f, 0x1.89481ep-4f, 0.0f, 0x1.e9fb66p-87f,
     0.0f, 0x1.58294p-16f, 0.0f, 0x1.f26e86p-38f, 0x1.54e5fep-36f, 0.0f, 0.0f,
     0x1.f9771ep-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.565142p-57f, 0.0f,
     0.0f, 0x1.dc432cp-37f, 0x1.e6aeeep-89f, 0x1.be5428p-58f, 0x1.b7b134p-111f, 0.0f,
     0x1.5f670ap-121f, 0.0f, 0.0f, 0x1.f4e474p-38f, 0x1.b0712ap-83f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f76a0cp-76f, 0x1.9f6b22p-121f, 0.0f, 0.0f, 0.0f, 0x1.0634fep-63f,
     0x1.26343p-84f, 0.0f, 0.0f, 0x1.2e57dep-118f, 0x1.7a6a32p-35f, 0x1.b0bdd4p-43f,
     0x1.514a62p-110f, 0.0f, 0.0f, 0x1.fc12e2p-15f, 0.0f, 0x1.7bb5fep-59f, 0.0f,
     0x1.738134p-85f, 0.0f, 0.0f, 0x1.906c12p-40f, 0.0f, 0.0f, 0.0f, 0x1.9447f8p-46f,
     0x1.022432p-69f, 0.0f, 0.0f, 0.0f, 0x1.20641p-30f, 0.0f, 0x1.e0211cp-109f, 0.0f,
     0x1.2b3808p-123f, 0.0f, 0x1.f354fap-101f, 0x1.c04a32p-1f, 0x1.bef62cp-45f, 0.0f,
     0.0f, 0x1.a8e07cp-86f, 0.0f, 0.0f, 0.0f, 0x1.f1a872p-66f, 0x1.dda79p-87f, 0.0f,
     0x1.3ff5c6p-68f, 0x1.57192ep-75f, 0.0f, 0x1.df01e8p-108f, 0x1.ff4a6ap-26f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c0ca3ap-89f, 0.0f, 0.0f, 0x1.75cf52p-116f,
     0x1.9e7384p-64f, 0.0f, 0.0f, 0x1.aeaaa2p-29f, 0x1.4fd77p-52f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f94762p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a5093cp-73f,
     0x1.a4ad98p-16f, 0x1.95e65ap-60f, 0.0f, 0.0f, 0.0f, 0x1.dde796p-119f,
     0x1.ba9a38p-33f, 0x1.d3f2cp-54f, 0x1.70d888p-16f, 0x1.4df07ep-108f, 0.0f,
     0x1.315d3cp-100f, 0.0f, 0x1.38a1e4p-69f, 0.0f, 0x1.d15796p-64f, 0x1.d972e8p-64f,
     0x1.b1a602p-95f, 0.0f, 0x1.8976aap-1f, 0x1.d06bfep-35f, 0.0f, 0x1.33ee86p-25f,
     0x1.660204p-92f, 0x1.43cebep-78f, 0.0f, 0.0f, 0.0f, 0x1.9f8276p-51f, 0.0f, 0.0f,
     0.0f, 0x1.9bb8e6p-47f, 0.0f, 0x1.cd9f6ep-109f, 0x1.99228p-63f, 0.0f,
     0x1.0fc188p-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d958a4p-31f, 0x1.9ed8fcp-6f,
     0x1.3e1362p-2f, 0x1.75e202p-70f, 0.0f, 0.0f, 0.0f, 0x1.d2985ap-25f, 0.0f
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
            tmp1 = Sleef_finz_log1pf4_u10avx2128(tmp0);
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
    printf("Sleef_finz_log1pf4_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_log1pf4_u10avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
