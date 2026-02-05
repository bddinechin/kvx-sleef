/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_log10f4_u10avx2128.c --function \
 *     Sleef_finz_log10f4_u10avx2128 --headers sleef.h,ml_support_lib.h \
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
     0x1.5a91f8p-71f, 0x1.03a016p-36f, 0.0f, 0x1.b6d3a6p-38f, 0.0f, 0.0f,
     0x1.6815ecp-60f, 0x1.ea9724p-34f, 0x1.03986ap-44f, 0.0f, 0x1.2140dp-72f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.45a0d2p-109f, 0.0f, 0x1.a6fa84p-97f, 0x1.01cdbep-75f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.99d02p-76f, 0x1.79e886p-108f, 0.0f, 0x1.f7005ap-84f, 0.0f,
     0.0f, 0x1.e2151p-56f, 0x1.c2e49p-21f, 0x1.da1edap-2f, 0x1.5fa3bp-79f,
     0x1.3fa89ep-92f, 0.0f, 0.0f, 0x1.766d9p-16f, 0x1.19249cp-26f, 0.0f, 0.0f,
     0x1.e534c2p-31f, 0x1.ceb3bcp-48f, 0x1.e704bp-41f, 0x1.ec3c98p-47f, 0.0f,
     0x1.a2b9p-55f, 0.0f, 0x1.673a88p-120f, 0x1.fa7bfcp-123f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9e3868p-35f, 0.0f, 0.0f, 0.0f, 0x1.5b19c4p-7f, 0.0f, 0.0f, 0x1.455d68p-3f,
     0x1.631f04p-100f, 0x1.9eda9p-70f, 0.0f, 0x1.c8908cp-98f, 0.0f, 0x1.5a81fp-105f,
     0x1.911eeap-96f, 0.0f, 0x1.46a202p-11f, 0.0f, 0.0f, 0.0f, 0x1.a43456p-20f,
     0x1.a7d828p-90f, 0.0f, 0x1.798012p-17f, 0.0f, 0x1.3dfba8p-105f, 0.0f,
     0x1.5b69fcp-95f, 0x1.9c9b6p-29f, 0x1.e632p-98f, 0.0f, 0x1.c11b4ep-71f,
     0x1.58476ep-10f, 0.0f, 0.0f, 0x1.3282bcp-6f, 0x1.5477p-19f, 0.0f,
     0x1.2372d8p-27f, 0x1.16beep-25f, 0x1.d08764p-19f, 0.0f, 0x1.d77eb2p-120f,
     0x1.713a1p-26f, 0x1.0fc768p-101f, 0.0f, 0.0f, 0x1.986574p-45f, 0x1.de70ecp-28f,
     0x1.6ee03ep-121f, 0.0f, 0.0f, 0x1.04afd8p-66f, 0.0f, 0.0f, 0x1.6a4bap-102f, 0.0f,
     0x1.cf675p-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f,
     0x1.c7b96cp-99f, 0.0f, 0x1.f40a7cp-15f, 0.0f, 0.0f, 0x1.1fea82p-16f,
     0x1.9b38b8p-54f, 0x1.5c5818p-94f, 0x1.7ae53ap-62f, 0x1.5b0822p-29f,
     0x1.2cd6ap-72f, 0x1.72e7bep-30f, 0.0f, 0.0f, 0.0f, 0x1.f6b67p-25f,
     0x1.b55deap-21f, 0x1.1bb348p-83f, 0x1.5317dp-103f, 0x1.49ed86p-7f,
     0x1.b67cfp-51f, 0.0f, 0.0f, 0x1.c6808p-98f, 0.0f, 0x1.6a358ep-48f, 0.0f, 0.0f,
     0x1.64cb2cp-34f, 0.0f, 0.0f, 0x1.448e52p-88f, 0.0f, 0.0f, 0x1.30c288p-91f,
     0x1.91dad6p-95f, 0.0f, 0x1.ec73bp-15f, 0.0f, 0.0f, 0.0f, 0x1.f535e4p-18f,
     0x1.4bb648p-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9bb5aep-2f, 0x1.1bfebp-119f, 0.0f, 0x1.6a52cep-36f, 0x1.6c54eep-101f,
     0x1.31742ep-43f, 0x1.8d4538p-44f, 0.0f, 0.0f, 0.0f, 0x1.2149e8p-87f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.658feep-30f, 0.0f, 0x1.1e92e6p-97f, 0.0f, 0.0f, 0x1p0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d59a6ep-32f, 0.0f, 0.0f, 0x1.277f46p-2f,
     0x1.3cd25p-74f, 0x1.1fdb9p-121f, 0.0f, 0x1.c62e96p-15f, 0x1.54418cp-120f,
     0x1.eb6378p-15f, 0.0f, 0x1.763792p-15f, 0x1.2512a8p-90f, 0x1.57806ap-56f, 0.0f,
     0.0f, 0x1.1367cep-46f, 0x1.2086bp-59f, 0x1.d8e952p-4f, 0x1.7844fap-48f,
     0x1.bf5766p-82f, 0x1.3c5eep-85f, 0.0f, 0.0f, 0.0f, 0x1.a89a6p-67f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.afa0acp-95f, 0.0f, 0.0f, 0.0f, 0x1.97aa4ep-59f,
     0x1.4e1616p-44f, 0.0f, 0.0f, 0x1.52c414p-13f, 0x1.872b42p-67f, 0.0f,
     0x1.639e56p-59f, 0.0f, 0.0f, 0x1.9434fp-41f, 0x1.6621fp-44f, 0.0f,
     0x1.b13dfep-12f, 0x1.b731c8p-24f, 0x1.3fe23cp-57f, 0.0f, 0x1.694ed8p-57f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ea9b9p-62f, 0.0f, 0x1.5b5622p-74f, 0.0f, 0.0f,
     0x1.5d836ap-99f, 0x1.e45bfcp-55f, 0.0f, 0.0f, 0x1.595296p-13f, 0x1.24ce24p-103f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f5a726p-85f, 0.0f, 0x1.f9771ap-4f,
     0x1.cedadp-82f, 0.0f, 0x1.b5a00ep-7f, 0x1.049de6p-85f, 0.0f, 0x1.b30524p-117f,
     0x1.63b618p-38f, 0x1.53cb44p-66f, 0.0f, 0.0f, 0x1.74cc66p-3f, 0.0f, 0.0f,
     0x1.71b728p-78f, 0x1.b9c8ep-75f, 0.0f, 0.0f, 0x1.79a40cp-29f, 0.0f,
     0x1.9786d2p-40f, 0.0f, 0x1.1e46bp-96f, 0x1.af228cp-75f, 0.0f, 0x1.542986p-57f,
     0x1.57ae7cp-4f, 0x1.cfdb2ep-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.22edecp-83f, 0x1.fc6dacp-56f, 0.0f, 0x1.dad37cp-70f, 0x1.9a2adcp-27f,
     0x1.e32d8p-96f, 0x1.d0dd98p-24f, 0x1.f15c96p-120f, 0x1.fad546p-60f,
     0x1.00cb46p-32f, 0x1.3b7c3p-35f, 0.0f, 0x1.29e3a8p-106f, 0x1.1bae3ep-62f, 0.0f,
     0.0f, 0x1.95527p-96f, 0.0f, 0.0f, 0.0f, 0x1.d7dc8cp-33f, 0.0f, 0.0f,
     0x1.b36594p-62f, 0.0f, 0x1.0036fep-73f, 0.0f, 0x1.21c124p-24f, 0x1.8ecd9ep-14f,
     0x1.0a7794p-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c2898cp-39f, 0x1.8696f8p-126f,
     0.0f, 0.0f, 0x1.9fa754p-122f, 0x1.6a08d4p-74f, 0.0f, 0x1.4dd6dep-2f,
     0x1.572d5ep-105f, 0.0f, 0x1.bbbe52p-121f, 0x1.1c7ceap-110f, 0x1.40c098p-70f,
     0.0f, 0x1.7bd9b8p-91f, 0x1.789852p-23f, 0.0f, 0x1.ef1b32p-42f, 0.0f,
     0x1.81fa42p-9f, 0.0f, 0x1.3bd322p-66f, 0x1.129964p-19f, 0.0f, 0x1.c6bc24p-46f,
     0x1.e871b6p-15f, 0x1.de92c8p-105f, 0x1.d3a368p-38f, 0x1.78ddcp-1f, 0.0f,
     0x1.1e83cep-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0fedb8p-111f, 0x1.489342p-41f,
     0.0f, 0x1.c87b38p-105f, 0.0f, 0.0f, 0.0f, 0x1.c39a4ap-114f, 0.0f,
     0x1.87156ap-53f, 0.0f, 0.0f, 0.0f, 0x1.3ec682p-91f, 0x1.bb3866p-14f, 0.0f, 0.0f,
     0.0f, 0x1.0fb19ep-59f, 0.0f, 0.0f, 0x1.5adc94p-108f, 0.0f, 0.0f, 0x1.320dd4p-38f,
     0.0f, 0x1.c1fbecp-30f, 0.0f, 0.0f, 0x1.4f979ap-62f, 0.0f, 0x1.9adf3ap-54f,
     0x1.5e84dp-33f, 0.0f, 0x1.018bfep-12f, 0x1.645e28p-97f, 0x1.ea788ap-44f,
     0x1.a83fc8p-105f, 0.0f, 0x1.51f798p-60f, 0.0f, 0x1.934efap-7f, 0.0f, 0.0f,
     0x1.73fbbp-38f, 0.0f, 0x1.319fcp-106f, 0x1.e086e4p-34f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.acb1aep-90f, 0x1.e54e08p-101f, 0x1.ce502p-52f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4732eep-66f, 0x1.0debbap-75f, 0.0f, 0x1.8c86a6p-85f, 0.0f, 0.0f,
     0x1.f15094p-6f, 0.0f, 0x1.015f76p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ee4076p-111f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e8f33p-38f, 0.0f, 0.0f, 0x1.f45592p-29f,
     0x1.63adfcp-125f, 0.0f, 0x1.905332p-85f, 0.0f, 0.0f, 0.0f, 0x1.10fc0cp-66f,
     0x1.b7346p-111f, 0x1.cf3d1ap-24f, 0.0f, 0.0f, 0x1.f8d146p-37f, 0x1.fecf24p-91f,
     0x1.c1be32p-58f, 0x1.2a338p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9ee51cp-106f, 0.0f, 0x1.2f731p-61f, 0x1.5d41ccp-119f, 0x1.a07d7p-97f, 0.0f,
     0x1.bdc388p-101f, 0x1.7abd1ap-3f, 0.0f, 0x1.af20e6p-45f, 0x1.0cfcdap-124f,
     0x1.ee0ed4p-25f, 0.0f, 0.0f, 0x1.48a53p-65f, 0x1.fa09a6p-48f, 0.0f, 0.0f,
     0x1.46a29cp-67f, 0.0f, 0x1.7b2996p-36f, 0.0f, 0x1.2de96ap-74f, 0x1.e06998p-13f,
     0x1.9942aep-3f, 0x1.e90cfep-123f, 0x1.532b38p-50f, 0.0f, 0x1.88e6fap-117f,
     0x1.1fa53p-117f, 0x1.ae6672p-54f, 0.0f, 0x1.564888p-46f, 0x1.29c5bcp-90f,
     0x1.3c340cp-28f, 0x1.9ec684p-93f, 0.0f, 0x1.2cb8cp-111f, 0x1.a825dp-110f, 0.0f,
     0x1.419bp-73f, 0x1.ffd6b6p-57f, 0.0f, 0.0f, 0x1.d4323cp-37f, 0.0f,
     0x1.6c76fap-15f, 0x1.b89672p-5f, 0.0f, 0x1.040cfap-103f, 0x1.bad9d2p-35f,
     0x1.c4e834p-47f, 0x1.2f774p-28f, 0.0f, 0.0f, 0.0f, 0x1.dc967p-35f,
     0x1.346576p-54f, 0x1.b2462ep-17f, 0.0f, 0x1.cc784ep-74f, 0.0f, 0x1.c1c10cp-112f,
     0.0f, 0x1.c4a95ap-105f, 0x1.c575bcp-125f, 0x1.6537d8p-76f, 0x1.4520e8p-2f,
     0x1.cd241cp-20f, 0.0f, 0x1.b80daap-51f, 0.0f, 0.0f, 0.0f, 0x1.a6b6c2p-60f, 0.0f,
     0x1.e8a202p-92f, 0x1.f51616p-89f, 0x1.5a26fcp-45f, 0x1.b2119cp-102f, 0.0f,
     0x1.532f1p-95f, 0.0f, 0.0f, 0x1.351b36p-37f, 0.0f, 0x1.35d3f4p-126f, 0.0f,
     0x1.54932cp-24f, 0.0f, 0.0f, 0.0f, 0x1.9edfc2p-17f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.c20abap-57f, 0x1.d2033ep-64f, 0x1.d7107cp-123f,
     0.0f, 0x1.d738fp-57f, 0x1.4539d6p-64f, 0x1.1463c2p-25f, 0x1.f6148cp-117f,
     0x1.a4c47p-57f, 0x1.ee298cp-56f, 0.0f, 0x1.000cb4p-4f, 0x1.3929f4p-80f, 0.0f,
     0.0f, 0.0f, 0x1.8e99bcp-125f, 0x1.b93e92p-88f, 0x1.bcd8e2p-86f, 0x1.f72392p-57f,
     0x1.8400f2p-90f, 0x1.790b6p-27f, 0x1.31a4fp-94f, 0x1.96ef54p-77f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d60ddap-84f, 0x1.2f4ad2p-78f, 0x1.1c3ee8p-118f, 0.0f, 0.0f,
     0x1.b8613p-13f, 0x1.34ccbep-19f, 0.0f, 0x1.0cc144p-5f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.014ae2p-87f, 0x1.60fbcep-12f, 0x1.304c34p-1f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.696766p-35f, 0x1.3455d2p-14f, 0x1.77c69ep-75f, 0x1.5038b2p-106f,
     0x1.d088dep-116f, 0x1.7a66cep-52f, 0.0f, 0x1.a96234p-51f, 0.0f, 0x1.16ba68p-106f,
     0x1.b1a75ap-82f, 0x1.d19fe8p-118f, 0.0f, 0.0f, 0x1.d6024ep-91f, 0.0f, 0.0f,
     0x1.7dafbep-103f, 0x1.54d0ap-18f, 0.0f, 0x1.1f1868p-112f, 0x1.ad586ep-98f,
     0x1.9c977cp-20f, 0x1.c077d6p-92f, 0x1.32e86p-83f, 0x1.43edfp-34f, 0.0f, 0.0f,
     0.0f, 0x1.df786cp-46f, 0x1.a7bd82p-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d7905ap-23f,
     0x1.382e46p-77f, 0.0f, 0x1.42ff22p-124f, 0.0f, 0x1.190e2ep-125f,
     0x1.32b5dap-113f, 0.0f, 0x1.091fdcp-101f, 0.0f, 0.0f, 0x1.4d2d92p-43f,
     0x1.c143e4p-78f, 0.0f, 0x1.933b4ap-44f, 0x1.cb3b34p-47f, 0x1.32e362p-68f, 0.0f,
     0.0f, 0x1.c75586p-55f, 0.0f, 0.0f, 0x1.88a1ccp-121f, 0x1.32af9ap-37f,
     0x1.8c098p-52f, 0x1.130ec2p-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0399bep-106f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.12cae4p-95f, 0x1.d3cf5ap-77f, 0x1.80b312p-25f,
     0x1.3ab4fp-35f, 0.0f, 0x1.90efa8p-78f, 0.0f, 0x1.5c0c7p-76f, 0x1.69b2acp-28f,
     0x1.f48802p-121f, 0.0f, 0.0f, 0x1.aae1aep-27f, 0x1.096e62p-9f, 0.0f, 0.0f, 0.0f,
     0x1.244ecap-52f, 0.0f, 0x1.f62b46p-21f, 0x1.db19bep-92f, 0x1.427406p-75f,
     0x1.18bcdcp-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1cf07ep-78f, 0x1.5a33dp-82f,
     0x1.8c01c6p-65f, 0x1.81e43ap-98f, 0x1.c0188ep-98f, 0x1.a45ebp-62f,
     0x1.b0e2aep-88f, 0x1.edf9fcp-11f, 0.0f, 0x1.62c2ap-4f, 0.0f, 0.0f,
     0x1.ffa7ecp-29f, 0x1.d565f6p-124f, 0.0f, 0x1.f5b9d6p-14f, 0.0f, 0x1.28a36cp-54f,
     0x1.2b93acp-49f, 0x1.bb1d22p-39f, 0.0f, 0.0f, 0x1.1a5618p-111f, 0x1.329456p-60f,
     0.0f, 0.0f, 0.0f, 0x1.b31aa6p-72f, 0.0f, 0x1.bff2fcp-79f, 0x1.259fa2p-85f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.82bbap-66f, 0.0f, 0x1.00bb34p-53f,
     0x1.ea91fcp-104f, 0x1.2dc1f6p-29f, 0x1.f48a72p-36f, 0.0f, 0.0f, 0.0f,
     0x1.75d8bap-26f, 0.0f, 0.0f, 0x1.b7112p-47f, 0x1.e889c4p-24f, 0.0f,
     0x1.73340ep-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.db7ba6p-53f, 0x1.b8c8p-75f,
     0x1.c53b6cp-7f, 0x1.07f658p-24f, 0x1.f1de8ap-5f, 0x1.c0ee2cp-50f,
     0x1.b286ccp-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.763a3cp-14f, 0.0f, 0x1.9589f6p-97f,
     0.0f, 0x1.e7e4a2p-24f, 0x1.9a691p-38f, 0.0f, 0.0f, 0x1.9fe1cap-13f,
     0x1.60c1b8p-64f, 0x1.09557cp-26f, 0.0f, 0.0f, 0.0f, 0x1.528b1p-32f, 0.0f, 0.0f,
     0.0f, 0x1.969ac4p-66f, 0.0f, 0.0f, 0x1.9e4c78p-88f, 0x1.83d5cap-103f,
     0x1.6c10b4p-28f, 0x1.723b82p-72f, 0x1.409a6ep-24f, 0.0f, 0x1.6cfab8p-100f, 0.0f,
     0.0f, 0x1.a04242p-45f, 0.0f, 0x1.6fd5ap-12f, 0.0f, 0.0f, 0x1.70fe44p-47f, 0.0f,
     0x1.67baeep-86f, 0x1.cffe8p-126f, 0.0f, 0x1.a823dp-95f, 0x1.625972p-52f, 0.0f,
     0.0f, 0.0f, 0x1.48cce2p-30f, 0x1.5626f2p-20f, 0.0f, 0.0f, 0x1.03c296p-59f, 0.0f,
     0x1.450828p-88f, 0x1.0f1622p-116f, 0x1.7a912p-45f, 0.0f, 0.0f, 0x1.3e7076p-123f,
     0.0f, 0x1.048a14p-93f, 0x1.2661d6p-115f, 0.0f, 0.0f, 0x1.a5f582p-68f, 0.0f,
     0x1.bf56dap-19f, 0.0f, 0.0f, 0x1.45868ep-71f, 0.0f, 0.0f, 0x1.0ed074p-125f,
     0x1.a901dp-104f, 0.0f, 0.0f, 0.0f, 0x1.002534p-108f, 0x1.583158p-42f,
     0x1.0b6e5cp-30f, 0.0f, 0.0f, 0.0f, 0x1.ca32cp-10f, 0.0f, 0.0f, 0x1.daa4a2p-33f,
     0x1.8ff232p-123f, 0x1.58fcep-89f, 0x1.916312p-54f, 0.0f, 0x1.34e338p-97f,
     0x1.8812f4p-34f, 0.0f, 0x1.1188dep-13f, 0.0f, 0.0f, 0.0f, 0x1.a9991p-116f, 0.0f,
     0x1.40f3e2p-66f, 0.0f, 0x1.d164b6p-52f, 0.0f, 0x1.81cba8p-41f, 0.0f,
     0x1.e3c688p-20f, 0.0f, 0x1.84400cp-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d715f2p-95f,
     0.0f, 0x1.40a018p-75f, 0x1.0ef17p-25f, 0.0f, 0.0f, 0.0f, 0x1.dae60ap-109f, 0.0f,
     0x1.d7922ep-93f, 0.0f, 0x1.2bf31ap-66f, 0x1.ad404ep-40f, 0x1.cd976ap-74f,
     0x1.f10504p-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.161b66p-124f, 0x1.767e56p-112f,
     0x1.96cccap-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.536814p-79f, 0x1.86351p-24f, 0.0f,
     0.0f, 0x1.6ade98p-94f, 0.0f, 0.0f, 0x1.49352cp-3f, 0x1.f63d7p-39f, 0x1p0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.982e0ap-66f, 0x1.9cc38ep-115f, 0.0f, 0.0f, 0.0f,
     0x1.3b8f0ap-69f, 0.0f, 0x1.ccc3bep-69f, 0.0f, 0x1.9e370cp-71f, 0x1.ce9b3p-28f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5c81c4p-46f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6f470ap-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d104e8p-71f, 0x1.4bf99cp-42f,
     0x1.6cc55cp-11f, 0x1.cf09fcp-64f, 0x1.e1ca46p-42f, 0.0f, 0.0f, 0x1.c68f3ep-109f,
     0.0f, 0.0f, 0x1.d1ded6p-84f, 0.0f, 0x1.5bd2aap-114f, 0.0f, 0x1.163ff6p-41f,
     0x1.f64386p-48f, 0x1.4b1524p-114f, 0x1.5480b6p-62f, 0x1.c689c2p-34f, 0.0f, 0.0f,
     0.0f
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
            tmp1 = Sleef_finz_log10f4_u10avx2128(tmp0);
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
    printf("Sleef_finz_log10f4_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_log10f4_u10avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
