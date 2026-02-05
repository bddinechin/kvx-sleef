/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_fastpowf4_u3500avx2128.c --function \
 *     Sleef_fastpowf4_u3500avx2128 --arity 2 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32,binary32 --vector-size 4 \
 *     --function-input-vector-size 4 --bench --no-embedded-bin --target \
 *     x86_avx2128
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
     0.0f, 0.0f, 0x1.6a3a6ap-69f, 0x1.263104p-65f, 0.0f, 0x1.e7576ap-23f,
     0x1.5edaecp-30f, 0.0f, 0x1.e4a2aap-78f, 0.0f, 0.0f, 0.0f, 0x1.4fffb4p-38f,
     0x1.ecf9dap-61f, 0.0f, 0x1.871abep-126f, 0x1.f320bap-38f, 0.0f, 0.0f, 0.0f,
     0x1.71b8a6p-68f, 0x1.d60326p-28f, 0.0f, 0x1.ec280cp-8f, 0x1.bae198p-37f,
     0x1.a6364ep-11f, 0.0f, 0x1.b71008p-101f, 0.0f, 0x1.ef8396p-106f, 0.0f, 0.0f,
     0x1.6d20b8p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.18a14ep-112f, 0.0f,
     0x1.f118d6p-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a17ebcp-56f, 0.0f, 0x1.86f57ep-22f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3c966ep-92f, 0.0f,
     0.0f, 0x1.cd84a8p-20f, 0x1.5d5138p-106f, 0.0f, 0x1.1f2668p-94f, 0x1.ee55fcp-75f,
     0.0f, 0.0f, 0.0f, 0x1.0d733ap-48f, 0x1.19a66ap-33f, 0.0f, 0x1.91c354p-57f, 0.0f,
     0x1.832b72p-27f, 0.0f, 0x1.913d36p-82f, 0x1.bd3138p-118f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e734f4p-76f, 0.0f, 0x1.a37f4p-113f, 0.0f, 0.0f, 0x1.3afc9cp-97f, 0.0f,
     0x1.41b35p-125f, 0.0f, 0x1.e76fe2p-88f, 0.0f, 0x1.a6c034p-8f, 0.0f, 0.0f, 0.0f,
     0x1.177132p-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d6259ep-68f, 0.0f, 0x1.575c58p-8f, 0.0f, 0.0f, 0x1.58f2acp-10f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.51a4ap-126f, 0.0f, 0x1.802f82p-34f, 0.0f, 0.0f,
     0x1.cf9228p-54f, 0.0f, 0x1.72b16p-2f, 0x1.7809a8p-43f, 0x1.cbbd58p-14f,
     0x1.c9b02cp-48f, 0x1.e30472p-104f, 0x1.d10716p-15f, 0.0f, 0.0f, 0.0f,
     0x1.902174p-69f, 0x1.a7ded6p-117f, 0.0f, 0x1.cbdb56p-126f, 0x1.9f64ep-121f,
     0x1.526e8ap-119f, 0.0f, 0.0f, 0x1.d08742p-81f, 0.0f, 0x1.6fa3f4p-33f,
     0x1.83b026p-73f, 0x1.593b28p-4f, 0x1.7b4a68p-60f, 0.0f, 0.0f, 0x1.fef28ep-58f,
     0x1.f6e216p-69f, 0.0f, 0x1.6b9adap-38f, 0.0f, 0x1.9685a2p-73f, 0x1.1f343ap-18f,
     0.0f, 0.0f, 0x1.220a28p-73f, 0.0f, 0.0f, 0.0f, 0x1.fae814p-17f, 0.0f, 0.0f,
     0x1.5ce8ccp-47f, 0x1.d9db8ep-14f, 0.0f, 0x1.ce90fp-66f, 0x1.551614p-91f, 0.0f,
     0.0f, 0.0f, 0x1.2842dep-4f, 0x1.39c3fp-81f, 0.0f, 0.0f, 0.0f, 0x1.d94466p-125f,
     0x1.35a17ep-36f, 0x1.5c1b34p-9f, 0x1.166f32p-108f, 0x1.ccefc2p-77f, 0.0f,
     0x1.89991p-88f, 0.0f, 0.0f, 0.0f, 0x1.ff0428p-5f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d8319ep-45f, 0.0f, 0x1.f72ca4p-69f, 0.0f, 0.0f, 0x1.53db78p-62f, 0.0f, 0.0f,
     0x1.c792d6p-11f, 0x1.6698f4p-29f, 0x1.c486e8p-13f, 0.0f, 0.0f, 0x1.550f5ap-100f,
     0x1.66d714p-114f, 0x1.f5478p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f785aap-59f, 0.0f, 0x1.89b1fep-38f, 0x1.cc1322p-116f, 0.0f, 0x1.0bb062p-44f,
     0x1.02cf98p-6f, 0.0f, 0.0f, 0.0f, 0x1.3ee76ep-10f, 0x1.3e24ccp-118f, 0.0f,
     0x1.407978p-18f, 0x1.30fb96p-85f, 0.0f, 0x1.d43094p-66f, 0x1.688fa8p-125f, 0.0f,
     0.0f, 0x1.0b77b4p-33f, 0.0f, 0.0f, 0.0f, 0x1.f33408p-121f, 0.0f, 0x1.c56e9p-26f,
     0x1.cbed5p-89f, 0x1.db1ab8p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e30a62p-17f, 0.0f, 0x1.2ee28ap-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a5ec24p-15f, 0.0f, 0x1.80eeb2p-107f, 0x1.d53cfcp-85f, 0.0f, 0x1.c0fe0ep-3f,
     0x1.565f68p-2f, 0.0f, 0x1.d6c028p-61f, 0.0f, 0x1.507ab8p-71f, 0.0f,
     0x1.0831a2p-83f, 0x1.867daep-113f, 0x1.0dee68p-30f, 0x1.7cae54p-92f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.06cab6p-33f, 0x1.03e7eap-26f, 0x1.987ab6p-92f,
     0.0f, 0x1.0f2486p-4f, 0x1.b2a16ep-88f, 0.0f, 0x1.3446b4p-1f, 0.0f,
     0x1.fc3426p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6c83dp-62f,
     0x1.56ff68p-7f, 0x1.016b64p-35f, 0.0f, 0x1.b3f82ap-17f, 0x1.a18a74p-4f,
     0x1.6dba8p-82f, 0x1.59266ap-115f, 0x1.ddbedap-32f, 0x1.7f9fdap-77f, 0.0f,
     0x1.718fd2p-22f, 0x1.c8e30ep-2f, 0x1.fe60cep-111f, 0x1.d893d6p-12f,
     0x1.1d57dap-109f, 0.0f, 0x1.c55f02p-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.94af04p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5bbb3p-81f, 0.0f,
     0x1.da817ap-53f, 0x1.776206p-19f, 0x1.163d62p-44f, 0.0f, 0x1.acef2ep-126f, 0.0f,
     0x1.79af4cp-26f, 0.0f, 0x1.9d4f5ap-93f, 0x1.a1585ap-41f, 0x1.7e5a74p-7f,
     0x1.0ac87ap-85f, 0x1.ec0a2cp-29f, 0x1.2b89fcp-82f, 0x1.a1328cp-112f,
     0x1.222588p-65f, 0x1.9e0f64p-67f, 0x1.49b6a4p-5f, 0x1.d0302ep-37f,
     0x1.baa9dap-97f, 0.0f, 0x1.499764p-22f, 0.0f, 0.0f, 0.0f, 0x1.afeea8p-23f, 0.0f,
     0x1.b55de2p-108f, 0x1.31e72p-84f, 0x1.26434p-123f, 0x1.8d021ep-77f, 0.0f, 0.0f,
     0.0f, 0x1.b1026ap-96f, 0x1.aa10fcp-75f, 0x1.8fbd16p-49f, 0x1.1f297p-46f,
     0x1.460a1cp-110f, 0.0f, 0.0f, 0x1.0a42a4p-11f, 0x1.39b09ap-22f, 0.0f,
     0x1.1673c6p-120f, 0x1.f23d66p-90f, 0x1.2cb6d8p-84f, 0x1.bd206p-68f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.5671a2p-13f, 0.0f, 0x1.6cafe8p-54f, 0x1.749d6ap-81f,
     0x1.c2817p-59f, 0x1.bcb254p-123f, 0.0f, 0x1.6da3ap-93f, 0x1.02224cp-86f,
     0x1.6b2592p-47f, 0.0f, 0.0f, 0x1.9e413ep-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2b1d3cp-122f, 0.0f, 0.0f, 0x1.e9d4a6p-64f, 0x1.cfa94p-118f, 0.0f,
     0x1.dbad02p-32f, 0.0f, 0x1.467de8p-121f, 0.0f, 0.0f, 0x1.0fd684p-68f, 0.0f, 0.0f,
     0.0f, 0x1.4cdb72p-34f, 0x1.7e47ecp-63f, 0x1.4a6168p-60f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cfcafap-104f, 0x1.d4a01p-28f, 0.0f, 0.0f, 0.0f, 0x1.cc0966p-42f,
     0x1.a60adcp-22f, 0.0f, 0x1.4bab9ap-61f, 0x1.b81252p-75f, 0.0f, 0x1.de918cp-28f,
     0.0f, 0x1.8328b8p-92f, 0x1.9b92cp-120f, 0x1.be6778p-31f, 0.0f, 0.0f,
     0x1.2a8512p-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.77c972p-30f,
     0x1.a37496p-20f, 0.0f, 0x1.b7dd48p-46f, 0x1.ae0f92p-92f, 0x1.c8a38p-18f,
     0x1.80bc58p-27f, 0.0f, 0.0f, 0x1.3ab7ccp-40f, 0x1.9138eap-18f, 0.0f,
     0x1.30db6p-42f, 0.0f, 0x1.097f5ep-7f, 0.0f, 0x1.10b53ap-12f, 0.0f, 0.0f,
     0x1.f832aep-115f, 0x1.81399cp-97f, 0x1.b4ed44p-53f, 0x1.a1f202p-41f,
     0x1.bb40bep-25f, 0.0f, 0.0f, 0x1.7f3656p-126f, 0x1.b5104ap-87f, 0.0f,
     0x1.4618b6p-44f, 0.0f, 0x1.537426p-51f, 0x1.2e2106p-77f, 0x1.4c8e2p-47f,
     0x1.cc6e14p-95f, 0.0f, 0.0f, 0.0f, 0x1.12398ep-78f, 0.0f, 0x1.18eb2ep-15f, 0.0f,
     0x1.0ef26cp-36f, 0x1.e1c65ap-84f, 0.0f, 0x1.570102p-54f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.dbb33ep-47f, 0.0f, 0x1.7994p-77f, 0.0f, 0.0f, 0.0f, 0x1.1bdbb8p-37f,
     0x1.22fc3cp-40f, 0.0f, 0x1.da78b2p-15f, 0x1.823696p-96f, 0.0f, 0x1.2d3deep-55f,
     0.0f, 0x1.63687cp-109f, 0x1.940bacp-123f, 0x1.f8d014p-77f, 0.0f, 0x1p0f, 0.0f,
     0x1.0316fep-52f, 0x1.857112p-92f, 0x1.7365dap-76f, 0.0f, 0x1.015bfep-93f,
     0x1.3a92dp-52f, 0x1.106164p-88f, 0x1.f0ecbep-48f, 0x1.b6b5acp-63f, 0.0f,
     0x1.6f7838p-51f, 0.0f, 0x1.8ddd88p-2f, 0.0f, 0.0f, 0x1.a7cf1ap-77f, 0.0f,
     0x1.4f2466p-35f, 0.0f, 0x1.153dd4p-53f, 0x1.68e14ep-14f, 0x1.8d9c62p-91f, 0.0f,
     0x1.4025c4p-126f, 0.0f, 0x1.7c4552p-40f, 0x1.04ace2p-55f, 0x1.386986p-17f, 0.0f,
     0x1.46c214p-65f, 0x1.699546p-30f, 0x1.1c5c4p-27f, 0x1.8a550cp-81f, 0.0f, 0.0f,
     0.0f, 0x1.5fb1b8p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a1efe4p-4f, 0.0f,
     0x1.148eaep-60f, 0.0f, 0x1.64497ap-22f, 0x1.b1e5bcp-115f, 0x1.16ffe4p-11f,
     0x1.77a10ep-71f, 0x1.7fe41ap-61f, 0x1.e961e2p-53f, 0.0f, 0x1.1f2086p-90f, 0.0f,
     0x1.ff14dp-34f, 0.0f, 0.0f, 0.0f, 0x1.7d898ap-79f, 0x1.78b234p-121f,
     0x1.a4a114p-113f, 0.0f, 0x1.6538bp-62f, 0.0f, 0.0f, 0x1.c52324p-84f, 0.0f,
     0x1.fec482p-75f, 0.0f, 0x1.49915ap-70f, 0.0f, 0.0f, 0.0f, 0x1.5442fep-72f,
     0x1.510e28p-71f, 0x1.49aba2p-4f, 0x1.cf8794p-71f, 0.0f, 0.0f, 0x1.e150acp-115f,
     0.0f, 0.0f, 0x1.e946fp-91f, 0x1.d6a474p-100f, 0.0f, 0x1.4efcaep-59f, 0.0f,
     0x1.8094cp-121f, 0x1.8b26p-71f, 0x1.ecf2a8p-12f, 0.0f, 0.0f, 0x1.d27084p-71f,
     0.0f, 0.0f, 0x1.e1c1fp-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f3aa72p-124f,
     0x1.54063ap-109f, 0.0f, 0x1.76ab7ap-50f, 0x1.524c7cp-27f, 0x1.7de54ap-82f,
     0x1.457b14p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.87d888p-83f, 0x1.7edd1ap-100f, 0x1.f3ffc6p-2f, 0.0f, 0.0f, 0.0f,
     0x1.2bffc8p-4f, 0x1.f29668p-73f, 0x1.b31996p-55f, 0x1.e34d8ap-59f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.6f29ep-80f, 0.0f, 0.0f, 0x1.7f2f62p-112f,
     0x1.71d928p-8f, 0.0f, 0x1.684bc6p-39f, 0.0f, 0x1.29c2ep-42f, 0x1.36d762p-71f,
     0.0f, 0x1.43177ap-7f, 0x1.12b9eep-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.444c04p-11f,
     0x1.c6864p-117f, 0x1.e28916p-45f, 0.0f, 0x1.29593cp-45f, 0.0f, 0.0f,
     0x1.9c93e4p-40f, 0x1.55dcdcp-116f, 0x1.052a28p-14f, 0.0f, 0.0f, 0.0f,
     0x1.0fe59ap-18f, 0x1.501746p-56f, 0.0f, 0.0f, 0.0f, 0x1.973d02p-61f, 0.0f,
     0x1p0f, 0.0f, 0x1.c3af7ap-29f, 0.0f, 0.0f, 0x1.da7856p-70f, 0.0f,
     0x1.1ffff2p-24f, 0.0f, 0.0f, 0x1.c4c80cp-113f, 0.0f, 0.0f, 0x1.ea1c62p-83f,
     0x1.7ddf5ep-117f, 0x1.3b8e22p-38f, 0.0f, 0x1.1e0bfp-102f, 0.0f, 0x1.dd74c8p-17f,
     0.0f, 0x1.3ad5fcp-27f, 0.0f, 0x1.417e6p-60f, 0x1.3c258p-80f, 0x1.f7f8a8p-84f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.0926p-69f, 0.0f, 0.0f, 0.0f, 0x1.1fb394p-76f,
     0x1.079806p-95f, 0.0f, 0x1.73bbeap-70f, 0x1.e930ecp-27f, 0x1.19ac68p-100f,
     0x1.73460ap-11f, 0x1.54dcecp-59f, 0x1.96f024p-58f, 0.0f, 0.0f, 0.0f,
     0x1.41be72p-93f, 0x1.b685a4p-92f, 0x1.766f3ep-103f, 0x1.792be4p-3f,
     0x1.ee759cp-98f, 0.0f, 0.0f, 0x1.44bf2cp-23f, 0x1.f415b4p-83f, 0.0f, 0.0f,
     0x1.393bf8p-3f, 0.0f, 0x1.a9c15p-98f, 0x1.b5d1f4p-111f, 0.0f, 0x1.0293c4p-15f,
     0x1.ea0232p-82f, 0x1.7bbd24p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a76f8p-66f,
     0x1.449a06p-75f, 0.0f, 0x1.0e9dfcp-42f, 0.0f, 0x1.da758cp-1f, 0.0f,
     0x1.33a242p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.82dfa8p-73f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.2027dep-7f, 0.0f, 0x1.47279ap-95f, 0.0f, 0.0f, 0x1.2dc402p-70f,
     0x1.797fa4p-31f, 0x1.e38624p-53f, 0x1.115d0ep-72f, 0x1.9d3694p-101f, 0.0f,
     0x1.8c433ep-113f, 0x1.d0f43ep-90f, 0x1.8aea2ap-37f, 0x1.f0bfa8p-11f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.9ea3f2p-101f, 0.0f, 0x1.8d2f44p-95f, 0.0f, 0x1.203ec4p-126f,
     0x1.c7199ep-6f, 0x1.8947d2p-115f, 0.0f, 0x1.f16a02p-98f, 0.0f, 0.0f, 0.0f,
     0x1.4d693p-59f, 0x1.55a6b8p-45f, 0.0f, 0x1.2c93b2p-28f, 0.0f, 0x1.411a72p-11f,
     0.0f, 0.0f, 0.0f, 0x1.86998ep-29f, 0x1.5b12a8p-109f, 0.0f, 0.0f, 0x1.666cb4p-67f,
     0.0f, 0.0f, 0x1.a80e06p-42f, 0x1.6ce9a2p-122f, 0x1.fe988cp-83f, 0.0f,
     0x1.472962p-113f, 0.0f, 0.0f, 0x1.6459dap-44f, 0.0f, 0x1.c48872p-83f, 0.0f, 0.0f,
     0x1.e3820ep-11f, 0.0f, 0x1.b9a1d2p-63f, 0x1.1d288cp-33f, 0.0f, 0x1.e14642p-102f,
     0x1.8808a4p-85f, 0.0f, 0x1.31a1c2p-24f, 0x1.5635ecp-116f, 0.0f, 0x1.f0762p-52f,
     0x1.4eacb6p-86f, 0x1.8fa5eap-20f, 0.0f, 0x1.4fda84p-92f, 0.0f, 0x1.601e2p-9f,
     0x1.ffaa06p-52f, 0x1.e06cb2p-60f, 0x1.494ccep-89f, 0x1.8ac136p-105f, 0.0f, 0.0f,
     0x1.685692p-46f, 0x1.c7ce4p-36f, 0.0f, 0x1.631cd2p-93f, 0.0f, 0.0f,
     0x1.20130ep-56f, 0x1.f276dp-18f, 0x1.cbcd4p-106f, 0x1.5aa2e8p-116f,
     0x1.b2083ap-51f, 0x1.c0349cp-60f, 0.0f, 0x1.9ee774p-19f, 0x1.b7cc6cp-44f, 0.0f,
     0x1.79180cp-62f, 0x1.5a0dc4p-118f, 0x1.7f43d8p-102f, 0.0f, 0.0f, 0.0f,
     0x1.fd00eap-99f, 0x1.ed1f06p-57f, 0x1.cd0ee8p-17f, 0.0f, 0x1.2eb85ep-27f,
     0x1.36ab72p-79f, 0x1.cf9d72p-15f, 0x1.2e2022p-65f, 0x1.b16388p-12f, 0.0f,
     0x1.0f786p-116f, 0x1.16386ep-36f, 0x1.e2eadap-93f, 0x1.b41926p-110f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.19a30cp-7f, 0.0f, 0.0f, 0x1.586102p-107f, 0.0f, 0x1.7a9a4p-120f,
     0.0f, 0.0f, 0.0f, 0x1.b61afep-21f, 0.0f, 0x1.a7c2ecp-83f, 0x1.3fbabcp-112f,
     0x1.ccff7cp-4f, 0x1.f59c62p-90f, 0.0f, 0x1.942e7cp-18f, 0.0f, 0x1.0befe6p-53f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ed99c4p-95f, 0.0f, 0.0f, 0x1.07c264p-100f,
     0.0f, 0.0f, 0x1.1d378cp-125f, 0.0f, 0x1.775b3ep-79f, 0x1.d2e5c8p-96f, 0.0f,
     0x1.adcfap-119f, 0.0f, 0.0f, 0x1.b9623p-68f, 0x1.7cf622p-24f, 0x1.bc505ap-56f,
     0x1.13c968p-20f, 0.0f, 0x1.6022eap-12f, 0.0f, 0.0f, 0x1.b28878p-86f,
     0x1.bb0658p-52f, 0.0f, 0x1.f93e4ep-55f, 0x1.6b69c8p-13f, 0.0f, 0x1.5b0426p-47f,
     0x1.12e1f8p-72f, 0x1.b1674ep-24f, 0.0f, 0.0f, 0x1.f07b52p-51f, 0.0f, 0.0f,
     0x1.7aa2d6p-93f, 0x1.f08582p-24f, 0.0f, 0x1.510372p-124f, 0x1.26d3eap-65f, 0.0f,
     0x1.5ca07ep-86f, 0x1.48efc8p-57f, 0.0f, 0.0f, 0.0f, 0x1.9225ccp-106f,
     0x1.d928a8p-85f, 0x1.7ff9fap-95f, 0.0f, 0x1.9ecd4ep-100f, 0x1.ed7d1ep-86f, 0.0f,
     0x1.5eb906p-118f, 0x1.637a36p-3f, 0x1.2fea38p-45f, 0.0f, 0.0f, 0x1.9388c6p-67f,
     0.0f, 0.0f, 0x1.b7e5e8p-61f, 0x1.6b9054p-102f, 0x1.67459cp-38f, 0.0f,
     0x1.14e8aap-108f, 0x1.dfbc38p-107f, 0x1.537594p-34f, 0x1.dbf07cp-110f, 0.0f,
     0.0f, 0x1.e14fbp-93f, 0.0f, 0x1.cb0b6ep-86f, 0x1.5f00fp-62f, 0.0f, 0.0f, 0.0f,
     0.0f
};
static const float external_bench_wrapper_input_table_arg1[1004]  = {
     0.0f, 0x1.b40416p-10f, 0.0f, 0.0f, 0x1.be9712p-108f, 0x1.862b32p-16f,
     0x1.e9abd8p-64f, 0x1.3ca578p-19f, 0.0f, 0x1.e00218p-71f, 0.0f, 0x1.ef7f76p-105f,
     0.0f, 0.0f, 0x1.e683f2p-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2ba3bcp-25f,
     0.0f, 0.0f, 0.0f, 0x1.818344p-115f, 0.0f, 0.0f, 0x1.5a9754p-80f, 0x1.152d8ep-68f,
     0x1.f2e30cp-124f, 0.0f, 0.0f, 0.0f, 0x1.4e3ff8p-27f, 0.0f, 0.0f, 0.0f,
     0x1.d9924p-49f, 0x1p0f, 0x1.626554p-78f, 0x1.fc642cp-111f, 0.0f, 0x1.9a7118p-28f,
     0x1.d35d7ep-95f, 0x1.eded1cp-87f, 0.0f, 0.0f, 0.0f, 0x1.1ce8ccp-57f, 0.0f,
     0x1.b63a8ap-125f, 0x1.595a76p-123f, 0.0f, 0x1.96f7fep-8f, 0x1.8a01fap-7f, 0.0f,
     0.0f, 0x1.b0cadap-84f, 0x1.3eb03cp-56f, 0.0f, 0x1.d2232ep-63f, 0x1.81f3ccp-52f,
     0.0f, 0x1.98a844p-72f, 0x1.739cfap-121f, 0x1.5fff48p-52f, 0.0f, 0x1.4adc0ap-76f,
     0x1.ff1e3p-3f, 0x1.9d7272p-12f, 0.0f, 0.0f, 0.0f, 0x1.3ed31p-42f,
     0x1.eaa022p-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7d8b66p-126f, 0x1.31e2bcp-97f, 0.0f,
     0.0f, 0x1.9a2a96p-96f, 0.0f, 0x1.50bb44p-29f, 0x1.8285bcp-22f, 0x1.02f6fap-21f,
     0x1.22163ap-108f, 0.0f, 0x1.90268ep-101f, 0.0f, 0x1.7318e2p-99f, 0.0f,
     0x1.af75b2p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6f90eap-63f, 0.0f,
     0x1.a94d7ap-28f, 0x1.2a719ep-98f, 0.0f, 0x1.28df18p-69f, 0.0f, 0x1.3e43c6p-79f,
     0.0f, 0.0f, 0x1.dd645cp-114f, 0x1.901dc8p-32f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9fee0cp-24f, 0.0f, 0x1.9255ap-75f, 0.0f, 0x1p0f, 0.0f, 0x1.48deb8p-15f, 0.0f,
     0x1.e25e2ep-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0f1b96p-33f, 0.0f,
     0x1.eaad64p-99f, 0x1.5f556ep-90f, 0x1.f049d2p-116f, 0x1.f71af6p-124f, 0.0f,
     0x1.d4e046p-112f, 0x1.3cfd46p-67f, 0x1.c2842ap-121f, 0.0f, 0x1.2ddf2p-121f,
     0x1.141652p-38f, 0.0f, 0x1.03e90cp-89f, 0.0f, 0.0f, 0x1.9584dap-86f, 0.0f,
     0x1.3d56fep-16f, 0x1.412c3ep-31f, 0x1.09e19ap-88f, 0x1.0fd6eep-59f, 0.0f,
     0x1.ed1bbp-88f, 0.0f, 0.0f, 0x1.fec192p-73f, 0.0f, 0.0f, 0.0f, 0x1.40948ep-82f,
     0.0f, 0.0f, 0x1.17178ap-65f, 0x1.e3ca92p-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f6abc8p-8f, 0.0f, 0x1.9614aap-49f, 0x1.1da8dp-47f, 0x1.75be0ep-56f,
     0x1.e91944p-116f, 0.0f, 0.0f, 0x1.abac68p-81f, 0x1.bd0c5ap-117f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d7d776p-98f, 0.0f, 0.0f, 0x1.12bde6p-93f, 0x1.1d5c5p-24f, 0.0f,
     0x1.ec3a14p-92f, 0x1.91408ep-33f, 0.0f, 0x1.cdae08p-106f, 0x1.2f7334p-115f,
     0x1.1b5f0ep-23f, 0x1.efc7e8p-28f, 0x1.9ee818p-111f, 0.0f, 0x1.e6e7fcp-33f, 0.0f,
     0x1.2646dap-112f, 0x1.6ab24cp-31f, 0x1.7f5566p-87f, 0x1.3825dcp-67f,
     0x1.85ffdap-37f, 0x1.6f5e4ep-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.41e89ep-108f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.982f0cp-92f, 0.0f, 0x1.28782ep-69f,
     0x1.392278p-124f, 0x1.9566a8p-26f, 0.0f, 0.0f, 0x1.a126ap-101f, 0x1.b770cap-74f,
     0.0f, 0x1.9c5382p-57f, 0.0f, 0x1.f75a3p-45f, 0.0f, 0x1.378ec6p-64f, 0.0f, 0.0f,
     0x1.efcfa2p-120f, 0x1.49633ep-89f, 0.0f, 0x1.c8a3fcp-70f, 0.0f, 0x1.97527ap-117f,
     0x1.3267bep-112f, 0x1.97852p-119f, 0.0f, 0x1.92ef24p-78f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.22ffacp-112f, 0.0f, 0x1.f63434p-70f, 0x1.f4d3ecp-18f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.10c872p-97f, 0.0f, 0.0f, 0x1.e14f44p-106f, 0x1.a9e20ep-101f, 0.0f,
     0x1.649b3cp-116f, 0.0f, 0.0f, 0x1.a37d3cp-75f, 0x1.9e7596p-70f, 0.0f,
     0x1.b1ca7cp-2f, 0.0f, 0.0f, 0x1.0fa34ep-105f, 0x1.d3f834p-64f, 0x1.8cc108p-112f,
     0x1.9063a6p-49f, 0.0f, 0.0f, 0.0f, 0x1.4b4a9ep-72f, 0.0f, 0x1.c10854p-28f, 0.0f,
     0.0f, 0x1.d843cep-89f, 0x1.96ca42p-50f, 0x1.e0b0fcp-72f, 0x1.f6681p-1f,
     0x1.aa965cp-30f, 0x1.25ab1p-13f, 0.0f, 0x1.ecffd4p-89f, 0x1.48ccaep-17f, 0.0f,
     0x1.39cbdap-38f, 0.0f, 0.0f, 0x1.38cc0ap-107f, 0x1.a702dep-90f, 0.0f,
     0x1.69f528p-104f, 0x1.323c98p-59f, 0x1.f467p-106f, 0.0f, 0x1.e54122p-8f, 0.0f,
     0.0f, 0x1.8f4fecp-6f, 0x1.ab1e12p-65f, 0.0f, 0x1.de8b4ep-27f, 0x1.c4068ep-7f,
     0x1.b2b27p-39f, 0x1.928f14p-44f, 0x1.4ed096p-110f, 0.0f, 0.0f, 0x1.417834p-92f,
     0x1.3499e6p-50f, 0x1.e589c2p-2f, 0x1.a7900cp-77f, 0.0f, 0.0f, 0.0f,
     0x1.aac372p-8f, 0x1.c39452p-6f, 0.0f, 0x1.f38ddp-37f, 0.0f, 0x1.18100cp-28f,
     0.0f, 0x1.0ff74ep-125f, 0.0f, 0x1.483dap-46f, 0x1.b4449p-89f, 0x1.ca3ebp-67f,
     0.0f, 0.0f, 0x1.1463fcp-72f, 0.0f, 0.0f, 0x1.338ae6p-37f, 0x1.74f774p-46f, 0.0f,
     0.0f, 0.0f, 0x1.f44f8ep-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8caec6p-49f,
     0x1.8983ep-52f, 0.0f, 0.0f, 0x1.4a5b8p-74f, 0.0f, 0x1.64b3dcp-7f,
     0x1.cb8356p-88f, 0.0f, 0x1.e557acp-16f, 0.0f, 0x1.99ab9cp-71f, 0x1.81f2ap-44f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.01679ep-54f, 0x1.23c7e8p-114f, 0.0f,
     0x1.5b8d82p-72f, 0x1.fd2d14p-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1025bp-60f,
     0x1.ed40dep-11f, 0x1.6e0ee8p-62f, 0x1.6d0d42p-76f, 0.0f, 0x1.759682p-83f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9f2f9ap-86f, 0.0f, 0x1.8ab6eap-121f, 0.0f,
     0x1.16266p-37f, 0x1.d0da96p-29f, 0.0f, 0.0f, 0.0f, 0x1.a8b80cp-21f,
     0x1.e38abp-6f, 0.0f, 0x1.4cf7bp-101f, 0.0f, 0.0f, 0x1.d721f8p-115f, 0.0f,
     0x1.f0b1dcp-26f, 0x1.4bfbb8p-84f, 0x1.d0b5dep-28f, 0x1.85e2ecp-98f,
     0x1.48076cp-115f, 0x1.8d383ap-101f, 0.0f, 0x1.8a68ep-44f, 0.0f, 0x1.a23064p-23f,
     0.0f, 0x1.2fbe04p-1f, 0x1.a0f0cp-30f, 0x1.38b49p-81f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.faea12p-77f, 0x1.29d158p-78f, 0x1.53c0a4p-107f, 0.0f, 0.0f,
     0.0f, 0x1.cf6882p-112f, 0x1.daff26p-54f, 0x1.1c392p-44f, 0.0f, 0x1.5231e2p-5f,
     0.0f, 0.0f, 0.0f, 0x1.814accp-16f, 0x1.8b7726p-81f, 0x1.e80fecp-111f,
     0x1.f88908p-98f, 0.0f, 0.0f, 0.0f, 0x1.3e2688p-75f, 0.0f, 0x1.8b644p-13f,
     0x1.0c1ea6p-43f, 0x1.b5a47ap-2f, 0.0f, 0x1.e6ae82p-11f, 0.0f, 0x1.96641ap-58f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.40c856p-21f, 0x1.33174ep-49f,
     0x1.dcc9a8p-79f, 0x1.5f489ep-32f, 0.0f, 0x1.c72d5cp-35f, 0x1.071da2p-110f,
     0x1.461b2ap-63f, 0x1.59681ap-106f, 0.0f, 0x1.4f0696p-89f, 0x1.ead75ap-92f, 0.0f,
     0x1.2cad9ep-60f, 0.0f, 0.0f, 0.0f, 0x1.da3358p-72f, 0.0f, 0.0f, 0x1.206e96p-107f,
     0.0f, 0.0f, 0.0f, 0x1.718afap-102f, 0x1.f14a1ap-2f, 0.0f, 0x1.7ab1p-95f,
     0x1.5df798p-102f, 0.0f, 0.0f, 0x1.23bfc4p-7f, 0x1.c2feap-7f, 0.0f,
     0x1.7f95bep-77f, 0x1.6bab88p-55f, 0.0f, 0.0f, 0x1.e11e5ep-123f, 0.0f,
     0x1.08674p-64f, 0x1.a1e7dcp-70f, 0x1.7c03c6p-50f, 0x1.73c142p-102f, 0.0f,
     0x1.84dbap-108f, 0x1.75ea06p-84f, 0x1.590bf6p-7f, 0x1.e5b04ap-77f,
     0x1.eb298p-103f, 0.0f, 0.0f, 0x1.346c16p-118f, 0x1.f56f7ap-121f,
     0x1.5e8d5cp-109f, 0.0f, 0x1.16008ep-93f, 0.0f, 0x1.6f36eep-94f, 0x1.3266fcp-68f,
     0x1.1147e4p-98f, 0x1.006c76p-22f, 0.0f, 0x1.f95e3cp-79f, 0.0f, 0x1.6a94c6p-67f,
     0.0f, 0.0f, 0x1.199c1cp-111f, 0.0f, 0.0f, 0.0f, 0x1.a89202p-57f, 0.0f, 0.0f,
     0.0f, 0x1.31ec5ep-75f, 0x1.4b221ap-80f, 0.0f, 0x1.e5d01ep-12f, 0.0f, 0.0f,
     0x1.9f3ec6p-20f, 0x1.51beacp-76f, 0.0f, 0x1.dd512p-104f, 0.0f, 0.0f,
     0x1.532246p-14f, 0x1.f302fep-118f, 0x1.96662ap-5f, 0x1.d3260ap-29f, 0.0f, 0.0f,
     0x1.044c36p-70f, 0x1.10fde6p-9f, 0x1.8d18dep-71f, 0.0f, 0x1.df6aap-82f, 0.0f,
     0x1.cac3a8p-46f, 0x1.6835aap-58f, 0.0f, 0x1.0b1caep-68f, 0.0f, 0.0f,
     0x1.0d72fep-123f, 0x1.25ecdcp-95f, 0.0f, 0x1.a703d2p-8f, 0.0f, 0x1.9536f2p-71f,
     0x1.3859a6p-109f, 0.0f, 0x1.98645p-69f, 0.0f, 0.0f, 0x1.6a9758p-13f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0fbb92p-31f, 0.0f, 0.0f, 0x1.e316c2p-23f,
     0x1.f737bep-23f, 0x1.f61f14p-35f, 0.0f, 0.0f, 0x1.346ffap-93f, 0x1.38a94ap-79f,
     0x1p0f, 0x1.a3d7b4p-102f, 0.0f, 0.0f, 0x1.409232p-81f, 0x1.0e3fbcp-71f,
     0x1.b55ed6p-118f, 0x1.4a2c02p-126f, 0.0f, 0.0f, 0.0f, 0x1.82352ap-8f,
     0x1.370924p-23f, 0.0f, 0.0f, 0x1.883972p-106f, 0x1.37378cp-100f,
     0x1.cc12eep-126f, 0x1.70f70cp-62f, 0.0f, 0x1.4f72fep-50f, 0.0f, 0.0f,
     0x1.a9cb56p-93f, 0x1.965fc8p-85f, 0x1.118fc8p-73f, 0x1.5c09c2p-108f, 0.0f, 0.0f,
     0x1.f13b3ap-29f, 0.0f, 0.0f, 0x1.482ed6p-32f, 0x1.ecf554p-39f, 0x1.b5616p-5f,
     0.0f, 0x1.86f94p-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c710d6p-102f, 0.0f, 0x1.168742p-7f, 0.0f, 0.0f, 0.0f, 0x1.b459fap-43f, 0.0f,
     0.0f, 0.0f, 0x1.bcb9e4p-61f, 0x1.f0f1e6p-79f, 0x1.19d89cp-52f, 0x1.b4412ep-59f,
     0.0f, 0.0f, 0.0f, 0x1.9e87d6p-65f, 0.0f, 0x1.5db39ap-74f, 0.0f, 0.0f, 0.0f,
     0x1.2e921ap-21f, 0x1.fbdep-109f, 0x1.15e762p-51f, 0x1.7c5d36p-20f, 0.0f,
     0x1.d7ce76p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7032ccp-107f, 0.0f, 0x1.4e14ecp-79f, 0x1.2175fcp-122f, 0.0f, 0.0f,
     0x1.b454c4p-111f, 0.0f, 0x1.646e4ep-31f, 0x1.ad3808p-64f, 0x1.7c0124p-15f,
     0x1.e1893ep-44f, 0x1.26ac46p-39f, 0x1.2ea998p-12f, 0.0f, 0x1.c011ecp-78f,
     0x1.21c40cp-62f, 0x1.bc8ed8p-74f, 0.0f, 0x1.d8af38p-64f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.456868p-102f, 0x1.3871d2p-55f, 0.0f, 0.0f, 0x1.0f5efp-91f,
     0x1.23dec2p-61f, 0.0f, 0x1.8001ccp-27f, 0.0f, 0x1.bdd5d8p-74f, 0x1.abcd8p-40f,
     0.0f, 0x1.0ec71cp-25f, 0.0f, 0x1.1b31f2p-34f, 0.0f, 0x1.9092p-20f,
     0x1.4bd4b8p-12f, 0.0f, 0.0f, 0.0f, 0x1.407002p-61f, 0x1.c04d82p-34f, 0.0f,
     0x1.88110ep-122f, 0x1.73678cp-68f, 0.0f, 0x1.59dbdp-105f, 0x1.d2653ep-111f, 0.0f,
     0x1.8bf0a4p-83f, 0x1.b72dfcp-50f, 0.0f, 0x1.d8677p-124f, 0x1.7d81bp-19f, 0.0f,
     0.0f, 0x1.38cbfap-66f, 0.0f, 0x1.f992c4p-8f, 0.0f, 0.0f, 0.0f, 0x1.e32ec4p-12f,
     0x1.921674p-46f, 0x1.6b45a6p-77f, 0x1.500612p-115f, 0.0f, 0x1.be1e52p-86f,
     0x1.8a04c4p-90f, 0x1.c67adcp-8f, 0.0f, 0x1.76590ap-124f, 0x1.ec4b3ep-109f,
     0x1.a1248ap-62f, 0.0f, 0x1.495bb8p-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c1ea5ep-58f,
     0.0f, 0.0f, 0.0f, 0x1.51503ep-73f, 0.0f, 0x1.5b04d2p-22f, 0.0f, 0x1.d18eb4p-49f,
     0x1.4872acp-27f, 0.0f, 0.0f, 0x1.63e674p-97f, 0x1.384808p-123f, 0.0f, 0.0f, 0.0f,
     0x1.415252p-108f, 0x1.d2d064p-9f, 0.0f, 0x1.17e966p-12f, 0.0f, 0x1.d5c7c6p-10f,
     0x1.db8ae6p-90f, 0x1.3bcbd4p-124f, 0.0f, 0x1.49e6bcp-69f, 0.0f, 0x1.d55e48p-123f,
     0x1.30b702p-8f, 0x1.2d647ap-107f, 0.0f, 0.0f, 0x1.f4582ep-51f, 0x1.f54fc2p-103f,
     0.0f, 0x1.32c604p-126f, 0x1.b23de8p-43f, 0.0f, 0.0f, 0x1.723f34p-101f,
     0x1.1f6d3ep-71f, 0x1.7ba73cp-112f, 0x1.7872ap-126f, 0x1.a217fep-4f,
     0x1.1ff06p-1f, 0x1.ae8844p-35f, 0.0f, 0.0f, 0.0f, 0x1.8ac01ep-14f, 0.0f,
     0x1.d2dbcp-67f, 0.0f, 0.0f, 0x1.8bd524p-81f, 0x1.0065ecp-123f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.1efb34p-45f, 0.0f, 0.0f, 0x1.ae6926p-120f, 0x1.602faap-119f, 0.0f,
     0.0f, 0x1.b34aacp-92f, 0x1.43f474p-70f, 0.0f, 0.0f, 0x1.ed682ep-27f, 0.0f, 0.0f,
     0x1.4c11bap-39f, 0.0f, 0x1.a7826ap-109f, 0.0f, 0.0f, 0x1p0f, 0x1.70868ep-2f,
     0x1.c9e40ep-14f, 0.0f, 0x1.fee808p-117f, 0.0f, 0.0f, 0x1.84015ep-101f,
     0x1.b182aap-94f, 0x1.350f46p-113f, 0x1.ac2558p-114f, 0x1.fcda9ap-75f, 0.0f, 0.0f,
     0x1.0ee7f6p-51f, 0.0f, 0x1.fc9632p-88f, 0x1.39172cp-19f, 0x1.7fc61cp-120f,
     0x1.1ed5eep-83f, 0x1.acab32p-125f, 0.0f, 0x1.82963p-124f, 0x1.b7c26p-26f,
     0x1.dd6cfap-16f, 0x1.c88022p-68f, 0x1.55caf8p-8f, 0.0f, 0x1.3e9f5p-81f,
     0x1.e98578p-96f, 0.0f, 0x1.7300dep-46f, 0x1.07918ap-10f, 0x1.3e0c2ap-66f, 0.0f,
     0x1.8f125p-114f, 0x1.59cd0cp-60f, 0x1.1cb4fap-7f, 0x1.49e57p-105f, 0.0f, 0.0f,
     0x1.0025d2p-105f, 0.0f, 0.0f, 0.0f, 0x1.bba3d2p-72f, 0x1.877be4p-13f, 0.0f, 0.0f,
     0.0f, 0x1.69a0bap-108f, 0.0f, 0x1.a18782p-55f, 0x1.03bbf6p-103f, 0x1.1e21fep-78f,
     0x1.56c336p-32f, 0.0f, 0x1.af177ap-5f, 0x1.ad25c2p-54f, 0.0f, 0x1.10a372p-93f,
     0x1.367662p-43f, 0.0f, 0x1.fcfc84p-62f, 0.0f, 0x1.238c98p-27f, 0x1.b82c2cp-126f,
     0.0f, 0x1.f460ccp-116f, 0.0f, 0x1.a4fc08p-3f, 0.0f, 0x1.619bbp-1f,
     0x1.d335aap-23f, 0x1.2dd8d6p-68f, 0.0f, 0.0f, 0x1.2f51a6p-66f, 0.0f,
     0x1.597db6p-38f, 0x1.1c2892p-59f, 0x1.82d646p-100f, 0.0f, 0x1.2c087ep-4f, 0.0f,
     0.0f, 0.0f, 0x1.6b4428p-22f, 0x1.2345d6p-35f, 0.0f, 0x1.ccbdaap-71f,
     0x1.a460e4p-123f, 0.0f, 0x1.f912b4p-24f, 0x1.72d74p-48f, 0.0f, 0.0f,
     0x1.82556ep-23f, 0x1.cb5c2ep-72f, 0x1.62858ap-14f, 0x1.3154a8p-66f,
     0x1.4f07fp-87f, 0.0f, 0x1.f25932p-50f, 0.0f, 0x1.46df72p-123f, 0.0f,
     0x1.6883f2p-124f, 0x1.d06b6ap-10f, 0x1.1ce6e6p-89f, 0x1.4d5dacp-68f, 0.0f,
     0x1.38f20cp-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ab335p-116f, 0x1.950716p-93f,
     0.0f, 0x1.a03ffp-5f, 0.0f, 0x1.add37ep-89f, 0x1.ef869cp-123f, 0.0f, 0.0f,
     0x1.c998c8p-85f, 0x1.34b4fcp-125f, 0x1.e243f6p-101f, 0.0f, 0x1.04c934p-98f,
     0x1.f5488ap-38f, 0x1.0891e8p-20f, 0x1.c9581p-78f, 0x1.17b60cp-103f,
     0x1.301ab8p-115f, 0.0f, 0.0f, 0.0f, 0x1.688a4ep-71f, 0.0f, 0.0f, 0x1.6ec2bcp-20f,
     0.0f, 0x1.5f442ap-51f, 0.0f, 0x1.77ca3ep-75f, 0x1.20e208p-22f, 0.0f, 0.0f,
     0x1.beab02p-54f, 0x1.aa06c6p-94f
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
            tmp2 = Sleef_fastpowf4_u3500avx2128(tmp0, tmp1);
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
    printf("Sleef_fastpowf4_u3500avx2128 %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_fastpowf4_u3500avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
