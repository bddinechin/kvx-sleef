/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sqrtf1_purecfma.c --function Sleef_sqrtf1_purecfma \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 --bench \
 *     --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile float external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.1a6318p-69f, 0.0f, 0x1.424da2p-79f, 0.0f, 0.0f, 0x1.c0509cp-30f,
     0x1.9c09a2p-89f, 0.0f, 0x1.16a0c8p-103f, 0x1.fa0eaep-60f, 0x1.e3a9fep-61f,
     0x1.fc5e34p-108f, 0x1.64776p-63f, 0x1.a0f6ap-83f, 0x1.7d7436p-5f,
     0x1.c69ec4p-124f, 0.0f, 0.0f, 0x1.a26034p-44f, 0x1.bcc7d4p-55f, 0x1.fea45ap-103f,
     0.0f, 0.0f, 0.0f, 0x1.d6bd36p-98f, 0.0f, 0x1.cf2d3ap-24f, 0x1.5bd6cep-38f, 0.0f,
     0x1.af5acap-100f, 0.0f, 0.0f, 0.0f, 0x1.0f9f22p-63f, 0x1.c9b4ap-109f,
     0x1.11381ep-5f, 0x1.a91604p-15f, 0x1.af87dap-33f, 0.0f, 0.0f, 0.0f,
     0x1.8f135p-107f, 0.0f, 0x1.fc9d06p-38f, 0.0f, 0x1.678ea6p-56f, 0x1.25c336p-39f,
     0x1.d3ef46p-116f, 0x1.044d68p-10f, 0.0f, 0x1.49f44p-88f, 0.0f, 0.0f,
     0x1.b4b368p-115f, 0.0f, 0.0f, 0x1.62d93p-107f, 0.0f, 0.0f, 0x1.abe0c6p-58f, 0.0f,
     0x1.fe6fbap-105f, 0x1.abed9cp-37f, 0x1.9bcc1cp-105f, 0.0f, 0x1.12568ep-30f,
     0x1.3eeb6ep-19f, 0x1.f5d13p-82f, 0.0f, 0.0f, 0x1.530c86p-87f, 0x1.205b62p-39f,
     0x1p0f, 0x1.c8fd26p-10f, 0x1.2de2a2p-113f, 0.0f, 0x1.e8c21cp-63f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.cddd42p-109f, 0x1.c8ddaep-29f, 0x1.c9539ap-41f, 0.0f,
     0.0f, 0.0f, 0x1.d5f466p-124f, 0.0f, 0.0f, 0.0f, 0x1.19a346p-77f, 0x1.e5908p-38f,
     0x1.f4fbp-98f, 0.0f, 0.0f, 0x1.6fa78cp-124f, 0x1.ab7dd2p-126f, 0x1.d85ef6p-70f,
     0.0f, 0x1.38ceecp-94f, 0x1.d965fep-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6c0e74p-8f,
     0x1.271178p-60f, 0x1.bd392p-95f, 0.0f, 0.0f, 0x1p0f, 0x1.ec786ep-22f, 0.0f,
     0x1.07efd6p-79f, 0x1.880892p-111f, 0.0f, 0.0f, 0.0f, 0x1.198fa8p-13f,
     0x1.7a945p-77f, 0.0f, 0.0f, 0.0f, 0x1.b401dep-73f, 0.0f, 0.0f, 0x1.be682p-74f,
     0x1.a749fep-8f, 0.0f, 0x1.d9ee18p-3f, 0.0f, 0x1.05f29p-19f, 0.0f, 0x1.d078f4p-7f,
     0.0f, 0x1.c8b36ap-77f, 0.0f, 0.0f, 0x1.1f65dcp-76f, 0.0f, 0x1.3509dcp-78f,
     0x1.a1c49ap-122f, 0.0f, 0x1.b9c23ep-113f, 0.0f, 0.0f, 0x1.20b70cp-6f,
     0x1.9d85ep-12f, 0.0f, 0.0f, 0x1.d9262cp-109f, 0x1.72b67cp-58f, 0.0f,
     0x1.c0ca9ep-99f, 0x1.f41834p-45f, 0.0f, 0.0f, 0.0f, 0x1.966908p-117f, 0.0f,
     0x1.5a8b38p-37f, 0.0f, 0.0f, 0.0f, 0x1.17f05cp-73f, 0.0f, 0.0f, 0x1.f9c186p-122f,
     0x1.0965c4p-57f, 0.0f, 0.0f, 0.0f, 0x1.954bcp-69f, 0.0f, 0x1.76ed7ap-92f, 0.0f,
     0x1.f0554cp-85f, 0.0f, 0x1.3aee3p-69f, 0x1.5557c2p-90f, 0x1.3e5284p-67f,
     0x1.d513b8p-54f, 0x1.fec58ap-60f, 0x1.7bcff8p-38f, 0x1.6c9a7ep-12f,
     0x1.002a36p-88f, 0.0f, 0x1.dac98p-50f, 0x1.4c431p-75f, 0.0f, 0x1.9d2eb8p-44f,
     0.0f, 0x1.03fc1ap-91f, 0x1.d47ceep-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.631962p-49f, 0x1.37ec14p-29f, 0x1.a1bb9ap-33f, 0x1.6ebc1cp-107f,
     0x1.42aaap-35f, 0x1.e93006p-26f, 0.0f, 0x1.8b2368p-40f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.7b95d2p-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3f7c76p-24f,
     0x1.ea716cp-123f, 0x1.560a5ep-41f, 0.0f, 0.0f, 0.0f, 0x1.25f386p-55f,
     0x1.6a81c8p-88f, 0x1.b086a4p-94f, 0x1.36151cp-23f, 0.0f, 0x1.344e62p-115f, 0.0f,
     0.0f, 0x1.0c5e18p-110f, 0.0f, 0x1.5b790ap-64f, 0x1.cec164p-19f, 0.0f,
     0x1.187586p-45f, 0.0f, 0.0f, 0x1.a7b70ep-95f, 0x1.4cbecp-106f, 0.0f,
     0x1.33246cp-117f, 0.0f, 0.0f, 0x1.3e1312p-98f, 0x1.77b55p-101f, 0x1.1d37dap-11f,
     0x1.7e24c8p-55f, 0x1.2f0e6cp-52f, 0x1.a518e4p-108f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bfc69ap-121f, 0.0f, 0.0f, 0.0f, 0x1.935a44p-121f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2f9774p-86f, 0.0f, 0x1.096de8p-73f, 0x1.d88f54p-93f, 0.0f, 0x1.6f4c98p-112f,
     0x1.2f1ap-26f, 0.0f, 0.0f, 0x1.99e9cap-58f, 0.0f, 0x1.5b9698p-37f, 0.0f, 0.0f,
     0x1.883ddep-53f, 0x1.4a69a2p-53f, 0.0f, 0x1.a99448p-115f, 0x1.10e8ecp-65f,
     0x1.e46d44p-97f, 0x1.61a144p-55f, 0x1.dbe096p-125f, 0x1.9d5536p-64f,
     0x1.400804p-121f, 0x1.2cada6p-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cf406p-122f,
     0x1.89a4dap-35f, 0x1.bc140ap-54f, 0x1.5c51cap-105f, 0x1.4917a6p-19f,
     0x1.52c65cp-41f, 0x1.e32d72p-33f, 0x1.a8ddp-62f, 0.0f, 0x1.9763c8p-92f,
     0x1.26c93ap-6f, 0.0f, 0x1.52475p-69f, 0x1.d6f06ep-58f, 0x1.4bb6fap-103f, 0.0f,
     0x1.22cf2ap-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c74448p-99f, 0x1.c7abd8p-34f, 0.0f,
     0x1.64838p-107f, 0x1.df8d36p-10f, 0.0f, 0x1.946b1cp-37f, 0x1.530e3ep-123f, 0.0f,
     0x1.ebbe16p-29f, 0.0f, 0x1.8bfb26p-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.02a1ap-121f,
     0x1.0c4fe6p-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.384c76p-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1a3dap-11f, 0x1.a996ep-74f, 0.0f,
     0.0f, 0.0f, 0x1.b3f686p-93f, 0x1.44fbd4p-86f, 0.0f, 0.0f, 0.0f, 0x1.ccdb6ep-32f,
     0x1.88dc62p-1f, 0.0f, 0x1.fc1d12p-124f, 0x1.860fd2p-23f, 0.0f, 0.0f,
     0x1.3334a6p-112f, 0.0f, 0.0f, 0.0f, 0x1.568728p-79f, 0.0f, 0.0f, 0.0f,
     0x1.5d5ca8p-22f, 0.0f, 0x1.5ef336p-103f, 0.0f, 0x1.949232p-64f, 0x1.d4d546p-98f,
     0.0f, 0x1.e1263ap-39f, 0x1.ccc888p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.11a718p-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1000f8p-19f, 0x1.275656p-79f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.13c97ap-50f, 0.0f, 0x1.1808b8p-86f, 0x1.418a6ap-10f,
     0x1.58dc86p-26f, 0.0f, 0.0f, 0x1.555372p-8f, 0.0f, 0x1.e27d12p-79f,
     0x1.481ef2p-6f, 0x1.e418e8p-87f, 0.0f, 0.0f, 0x1.6faf78p-15f, 0.0f,
     0x1.92ffe8p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.176288p-74f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.545fdp-51f, 0x1.38610ep-38f, 0x1.d149dap-103f, 0.0f, 0.0f,
     0x1.b26d5p-68f, 0x1.061038p-93f, 0x1.312154p-16f, 0x1.110bdap-98f, 0.0f,
     0x1.98fdf2p-40f, 0x1.f86c04p-126f, 0x1.abcbc8p-34f, 0x1.e7cfe8p-95f, 0.0f, 0.0f,
     0.0f, 0x1.83034p-115f, 0x1.9b1116p-66f, 0x1.21c6c8p-115f, 0x1.72832p-110f, 0.0f,
     0x1p0f, 0x1.65186cp-13f, 0.0f, 0.0f, 0x1.42164ap-81f, 0.0f, 0x1.486deep-9f,
     0x1.9421bep-25f, 0x1.2e29a2p-118f, 0.0f, 0.0f, 0x1.358bf2p-91f, 0.0f, 0.0f,
     0x1.246baap-98f, 0x1.dbb624p-5f, 0x1.3ace9ep-106f, 0x1.ec69e8p-35f, 0.0f,
     0x1.b06214p-115f, 0x1.3fc1e4p-23f, 0x1.84c8b6p-39f, 0.0f, 0.0f, 0x1.f653c2p-113f,
     0.0f, 0x1.7306eap-90f, 0.0f, 0.0f, 0.0f, 0x1.bb84b6p-71f, 0.0f, 0.0f,
     0x1.f0f65p-11f, 0.0f, 0x1.c660ap-58f, 0.0f, 0x1.557182p-45f, 0x1.a7fe8ap-17f,
     0.0f, 0x1.fbbeccp-18f, 0x1.6e6d82p-24f, 0.0f, 0x1.46383cp-25f, 0.0f,
     0x1.0a08f4p-121f, 0.0f, 0x1.2b1e64p-35f, 0.0f, 0.0f, 0x1.57eceap-39f,
     0x1.62e864p-83f, 0.0f, 0.0f, 0.0f, 0x1.78a702p-37f, 0x1.a67256p-45f, 0.0f,
     0x1.53d3eep-18f, 0x1.7668d8p-121f, 0.0f, 0x1.ceb5dap-95f, 0x1.3852a6p-96f,
     0x1.b46e96p-116f, 0x1.9f4322p-27f, 0.0f, 0x1.8fe21ep-10f, 0x1.c7c20ap-120f,
     0x1.ff5de8p-18f, 0.0f, 0x1.6a23c6p-59f, 0.0f, 0x1.cf5462p-101f, 0.0f,
     0x1.28eb6cp-92f, 0x1.fc3a22p-121f, 0.0f, 0.0f, 0.0f, 0x1.33c58p-82f, 0.0f, 0.0f,
     0x1.d8e648p-124f, 0x1.d057fcp-104f, 0x1.269de4p-112f, 0.0f, 0x1.f8dd38p-78f,
     0x1.bf13f8p-23f, 0x1.a523fep-46f, 0x1.d60a8cp-109f, 0.0f, 0x1.9c734ap-70f,
     0x1.4efcfcp-28f, 0.0f, 0.0f, 0x1.897c74p-96f, 0x1.ac4858p-85f, 0.0f,
     0x1.376f28p-39f, 0.0f, 0.0f, 0x1.0393c8p-61f, 0x1.39cd5cp-10f, 0.0f, 0.0f,
     0x1.caad3ep-17f, 0.0f, 0x1.9455fcp-74f, 0x1.fad738p-85f, 0.0f, 0x1.9130e6p-16f,
     0.0f, 0.0f, 0.0f, 0x1.87f714p-99f, 0x1.5cd27ap-121f, 0.0f, 0x1.d5828ep-18f,
     0x1.45ee56p-62f, 0x1.e6e6e8p-76f, 0.0f, 0.0f, 0.0f, 0x1.aae148p-78f,
     0x1.4c453ap-91f, 0.0f, 0.0f, 0.0f, 0x1.313c36p-58f, 0.0f, 0x1.4f5d24p-57f, 0.0f,
     0.0f, 0x1.351e62p-6f, 0.0f, 0.0f, 0x1.6bde46p-95f, 0x1.57daa2p-65f, 0.0f, 0.0f,
     0x1.0747c2p-24f, 0x1.1071ecp-6f, 0x1.fa4c5ap-62f, 0.0f, 0x1.03e3acp-18f, 0.0f,
     0x1.a314bep-60f, 0x1.30ac1cp-96f, 0.0f, 0.0f, 0x1.6a2c92p-1f, 0.0f,
     0x1.e0ffecp-10f, 0x1.ca80e4p-27f, 0.0f, 0x1.d5766p-10f, 0.0f, 0x1.73df8ep-99f,
     0x1.e7a306p-5f, 0x1.e61e68p-123f, 0.0f, 0.0f, 0.0f, 0x1.e3c096p-100f,
     0x1.627fa6p-82f, 0x1.b8abfp-4f, 0.0f, 0x1.221202p-124f, 0x1.167e6p-81f, 0.0f,
     0x1.71b07cp-25f, 0x1.6200f6p-98f, 0.0f, 0.0f, 0.0f, 0x1.895174p-119f,
     0x1.6e3fe6p-3f, 0x1.a96582p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.673b8ep-74f, 0.0f,
     0x1.c93a0cp-54f, 0x1.b8b9fp-30f, 0x1.4990bp-85f, 0x1.d9adf4p-90f,
     0x1.9f838ep-104f, 0x1.1eb328p-24f, 0x1.157fdp-44f, 0.0f, 0x1.a71f0cp-28f,
     0x1.b53d6p-37f, 0.0f, 0.0f, 0x1.4246a2p-115f, 0x1.c3622p-121f, 0x1.1ef92ap-38f,
     0x1.2e0888p-53f, 0x1.6d037p-104f, 0x1.97e526p-65f, 0.0f, 0x1.70a1b4p-64f, 0.0f,
     0x1.974846p-64f, 0.0f, 0x1.6fdf92p-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e3a5acp-99f,
     0x1.b2b902p-49f, 0x1.626e3cp-59f, 0x1.3dcb6ep-14f, 0x1.79e8c2p-4f,
     0x1.a449fap-1f, 0.0f, 0.0f, 0x1.53f41cp-23f, 0x1.15e3d6p-115f, 0.0f,
     0x1.b5ed62p-58f, 0.0f, 0x1.ca5aep-52f, 0.0f, 0.0f, 0x1.24918p-121f,
     0x1.66119ep-41f, 0x1.88af62p-82f, 0.0f, 0x1.25b912p-55f, 0.0f, 0.0f,
     0x1.047de2p-35f, 0x1.72452ep-83f, 0.0f, 0x1.012faap-91f, 0.0f, 0x1.8cf75ep-123f,
     0.0f, 0x1.88480cp-65f, 0x1.462888p-92f, 0.0f, 0.0f, 0x1.7915eap-82f,
     0x1.af8b2ep-37f, 0.0f, 0x1.e58a5ep-123f, 0.0f, 0.0f, 0x1.c83744p-102f,
     0x1.13571ap-73f, 0.0f, 0.0f, 0x1.e7b99cp-117f, 0x1.3ce5bcp-8f, 0x1.a93066p-107f,
     0.0f, 0x1.83c83cp-7f, 0x1.a48cf4p-112f, 0.0f, 0x1.a33468p-5f, 0x1.bffd46p-76f,
     0x1.19c176p-39f, 0x1.90dc88p-81f, 0.0f, 0x1.a82cdep-72f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.47e458p-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.416ec4p-5f,
     0x1.e051a2p-38f, 0.0f, 0x1.29b604p-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bc1344p-90f, 0.0f, 0x1.43563ap-78f, 0.0f, 0x1.755cb2p-88f, 0x1.77fbap-60f,
     0x1.898568p-119f, 0x1.98d7p-67f, 0.0f, 0x1.a76acp-123f, 0x1.2f10dp-122f,
     0x1.67fb48p-14f, 0.0f, 0x1.7fb49cp-12f, 0.0f, 0.0f, 0.0f, 0x1.d73424p-74f,
     0x1.75eefp-68f, 0.0f, 0x1.06b552p-69f, 0.0f, 0x1.e257e4p-53f, 0x1.350218p-112f,
     0x1.c1d56ap-116f, 0x1.914296p-84f, 0x1.0b890ap-95f, 0.0f, 0.0f, 0x1.7a8058p-116f,
     0x1.04da72p-109f, 0x1.824592p-105f, 0x1.86a30cp-5f, 0x1.5b5a88p-85f, 0.0f, 0.0f,
     0x1.726ccap-103f, 0.0f, 0x1.25731ap-98f, 0x1.5843d8p-86f, 0.0f, 0.0f, 0.0f,
     0x1.34fabp-25f, 0x1.e6f68cp-101f, 0.0f, 0x1.2df1d8p-27f, 0x1.faa8bep-72f,
     0x1.c0733ap-84f, 0x1.0f132ap-123f, 0x1.a0714ep-97f, 0x1.0746ep-79f, 0.0f, 0.0f,
     0x1.14cdbap-45f, 0.0f, 0.0f, 0.0f, 0x1.7000fep-65f, 0x1.cc72e6p-94f, 0.0f, 0.0f,
     0.0f, 0x1.b8bf62p-51f, 0.0f, 0.0f, 0.0f, 0x1.223142p-82f, 0.0f, 0.0f, 0.0f,
     0x1.be081cp-100f, 0.0f, 0x1.8f4c8cp-39f, 0.0f, 0x1.a999dep-66f, 0.0f, 0.0f, 0.0f,
     0x1.092beep-43f, 0x1.a8dd8ap-124f, 0x1.27c502p-73f, 0.0f, 0.0f, 0x1.580a6ap-26f,
     0x1.afb536p-27f, 0x1.a9008p-105f, 0.0f, 0x1.c4043p-61f, 0x1.e94dccp-15f,
     0x1.dcfe2ap-55f, 0x1.755b2p-26f, 0x1.3b1812p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.8ada66p-84f, 0x1.fa4ad6p-24f, 0.0f, 0x1.c8b202p-91f, 0.0f,
     0x1.8576a6p-101f, 0.0f, 0x1.dd34aap-7f, 0.0f, 0.0f, 0x1.b97daap-7f, 0.0f, 0.0f,
     0x1.8dd5dp-105f, 0.0f, 0x1.943706p-25f, 0.0f, 0.0f, 0x1.aaadcap-24f, 0.0f,
     0x1.7e0d2cp-22f, 0x1.c342ep-99f, 0x1.6101f4p-6f, 0x1.d231f6p-125f, 0.0f, 0.0f,
     0x1.126b24p-125f, 0.0f, 0.0f, 0.0f, 0x1.1f3ea6p-92f, 0x1.8615ecp-89f,
     0x1.83449cp-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.004db4p-78f, 0.0f, 0x1.de0a2ap-52f,
     0.0f, 0.0f, 0x1.5c7f26p-42f, 0.0f, 0.0f, 0x1.a81786p-81f, 0.0f, 0x1.5e87fep-29f,
     0x1.22e5bcp-71f, 0.0f, 0x1.8f5efap-19f, 0x1.6e0948p-46f, 0x1.7c4612p-25f,
     0x1.cafe24p-14f, 0x1.394b0cp-20f, 0.0f, 0.0f, 0x1.916598p-38f, 0x1.61dd46p-103f,
     0x1.ebc6ap-67f, 0.0f, 0.0f, 0x1.c38b7ap-2f, 0x1.8742aap-124f, 0x1.032668p-125f,
     0.0f, 0x1.7bba3p-87f, 0x1.6a009ep-111f, 0.0f, 0x1.39f40ep-94f, 0x1.a03d2p-97f,
     0.0f, 0x1.f67fa4p-64f, 0x1.88fd84p-51f, 0.0f, 0.0f, 0.0f, 0x1.79ce8p-111f,
     0x1.cf6f24p-100f, 0.0f, 0x1.4abe44p-60f, 0.0f, 0.0f, 0x1.606bap-88f,
     0x1.f20dd8p-84f, 0.0f, 0x1.f5b35cp-70f, 0.0f, 0.0f, 0.0f, 0x1.7e4632p-57f, 0.0f,
     0x1.bf7c62p-89f, 0x1.8cd7cep-46f, 0x1.2818bap-121f, 0.0f, 0x1.7400bcp-24f,
     0x1.af9094p-78f, 0.0f, 0.0f, 0x1.e5ae2p-25f, 0.0f, 0.0f, 0x1.f6be96p-121f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.757dd2p-113f, 0x1.ae7938p-19f, 0.0f, 0x1.0c55eep-50f,
     0x1.819dacp-52f, 0x1.1cb75ap-3f, 0x1.32e5b6p-119f, 0x1.223e86p-74f,
     0x1.83aa92p-106f, 0.0f, 0x1.b25872p-6f, 0x1.11f1f2p-76f, 0x1.996838p-120f, 0.0f,
     0.0f, 0x1.89d832p-56f, 0.0f, 0.0f, 0x1.cf22b4p-119f, 0x1.c37bf6p-94f,
     0x1.1152f6p-89f, 0.0f, 0x1.9e6474p-18f, 0.0f, 0x1.8e9f0ep-75f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.d9b6fap-20f, 0x1.99b0c8p-37f, 0.0f, 0.0f, 0.0f, 0x1.ee85e4p-122f,
     0x1.8fe7aap-84f, 0x1.b5c766p-115f, 0.0f, 0.0f, 0x1.043b3p-42f, 0.0f, 0.0f,
     0x1.14d0f6p-56f, 0.0f, 0.0f, 0x1.1fcc9ap-28f, 0.0f, 0.0f
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
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = 0.0f;
    tmp = __cos_counter_num(0);
    timer = tmp;
    j = INT32_C(0);

    for (;(j < INT32_C(10000));){
        float bench_acc;
        int32_t i;
        float tmp0;
        int32_t tmp1;

        i = INT32_C(0);
        bench_acc = 0.0f;

        for (;(i < INT32_C(1001));){
            float tmp0;
            float tmp1;
            float tmp2;
            int32_t tmp3;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_sqrtf1_purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = bench_acc + tmp1;
            bench_acc = tmp2;
            tmp3 = i + INT32_C(1);
            i = tmp3;
        }
        tmp0 = global_bench_acc + bench_acc;
        global_bench_acc = tmp0;
        tmp1 = j + INT32_C(1);
        j = tmp1;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_sqrtf1_purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_sqrtf1_purecfma bench acc %a\n", global_bench_acc);
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
