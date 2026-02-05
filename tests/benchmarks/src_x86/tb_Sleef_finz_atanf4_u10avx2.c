/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_atanf4_u10avx2128.c --function \
 *     Sleef_finz_atanf4_u10avx2128 --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0.0f, 0.0f, 0x1.fee46ap-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.de4bccp-99f,
     0x1.21af5ap-122f, 0x1.e1d992p-58f, 0x1.a2ab7ep-72f, 0.0f, 0x1.ad929cp-95f,
     0x1.c3abfep-11f, 0x1.df19bp-64f, 0x1.ad006ap-86f, 0x1.3fa7e2p-31f,
     0x1.6299d4p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e61ffcp-100f,
     0x1.1eaa2ap-108f, 0.0f, 0x1.353b6p-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9fd05cp-120f, 0.0f, 0x1.03c2fcp-67f, 0.0f, 0.0f, 0x1.f236p-117f,
     0x1.d4bd46p-12f, 0.0f, 0.0f, 0x1.c194acp-112f, 0x1.0c5314p-110f, 0.0f,
     0x1.1d0f8p-59f, 0x1.fe291cp-10f, 0.0f, 0x1.8e0d3p-65f, 0x1.cba058p-88f,
     0x1.9f43a2p-74f, 0x1.370eccp-80f, 0x1.b517c8p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7b1252p-11f, 0.0f, 0.0f, 0x1.c63b9ap-13f, 0.0f, 0x1.f94128p-51f,
     0x1.2e4a5cp-79f, 0x1.40cc1ap-56f, 0.0f, 0x1.bd7ba2p-43f, 0.0f, 0x1.583abep-77f,
     0x1.997012p-126f, 0.0f, 0x1.3bf388p-22f, 0x1.8220a8p-116f, 0.0f, 0.0f,
     0x1.967278p-30f, 0x1.b4944ep-90f, 0.0f, 0.0f, 0x1.ceedccp-56f, 0.0f, 0.0f,
     0x1.9266ccp-6f, 0x1.682902p-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.be02f8p-61f,
     0x1.617abap-58f, 0.0f, 0x1.5397bep-63f, 0.0f, 0.0f, 0x1.d1f22p-67f,
     0x1.ec8a18p-51f, 0x1.9edc94p-89f, 0.0f, 0.0f, 0x1.4c863cp-26f, 0.0f, 0.0f, 0.0f,
     0x1.8987eep-16f, 0x1.ff31fp-76f, 0x1.db6e42p-76f, 0.0f, 0x1.cfb518p-108f, 0.0f,
     0x1.52174cp-70f, 0x1.f690eep-2f, 0.0f, 0x1.a0a34cp-53f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.de1908p-77f, 0.0f, 0x1.275b88p-79f, 0x1.bd0876p-51f, 0x1.ddbee8p-51f,
     0x1.c61decp-71f, 0x1.52b38ep-23f, 0.0f, 0.0f, 0x1.b80c38p-119f, 0x1.9c02acp-110f,
     0.0f, 0x1.c2be22p-30f, 0.0f, 0.0f, 0x1.d32a66p-27f, 0x1.e39b96p-126f,
     0x1.b2eca2p-84f, 0x1.5846f6p-45f, 0x1.d98f02p-39f, 0.0f, 0x1.8628f6p-39f, 0.0f,
     0x1.99f09ep-69f, 0x1.bdc3b8p-95f, 0x1.b6005ap-97f, 0.0f, 0x1.af0a0ap-70f, 0.0f,
     0x1.6efddcp-31f, 0x1.fa7a24p-64f, 0.0f, 0x1.0618b4p-24f, 0.0f, 0.0f,
     0x1.b6090ep-45f, 0x1.20f29cp-113f, 0x1.260c86p-35f, 0x1.77770cp-54f,
     0x1.c36c88p-12f, 0x1.5e9b76p-14f, 0x1.6733ap-74f, 0x1.595c5cp-26f, 0.0f,
     0x1.b1f568p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.61c17ep-97f, 0x1.838e22p-14f,
     0.0f, 0x1.45a9fcp-90f, 0x1.c29078p-52f, 0x1.5301c8p-125f, 0x1.10157ap-100f,
     0x1.4a5354p-21f, 0.0f, 0.0f, 0x1.6dc42cp-45f, 0.0f, 0x1.8dc918p-11f,
     0x1.8aba1ap-27f, 0x1.29ee4ep-54f, 0x1.7a17aap-6f, 0.0f, 0x1.5013b2p-64f,
     0x1.673a3p-52f, 0.0f, 0x1.0aab12p-100f, 0x1.56353p-112f, 0.0f, 0.0f,
     0x1.120092p-50f, 0x1.a801e2p-2f, 0x1.aa662ep-36f, 0x1.7159p-98f, 0x1p0f,
     0x1.92c166p-106f, 0x1.7e9e78p-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d41932p-9f,
     0x1.256c22p-32f, 0.0f, 0.0f, 0x1.860686p-9f, 0x1.26dcc6p-12f, 0x1.512a5p-22f,
     0x1.6233c4p-3f, 0.0f, 0x1.7dc4bp-11f, 0.0f, 0x1.1ce69cp-126f, 0x1.74d0c2p-106f,
     0.0f, 0x1.c156a6p-120f, 0.0f, 0.0f, 0x1.8c72b8p-96f, 0x1.27ac98p-70f,
     0x1.569cd6p-39f, 0.0f, 0.0f, 0.0f, 0x1.171fd4p-41f, 0.0f, 0.0f, 0x1.5aa04ap-28f,
     0x1.366eb2p-1f, 0x1.629be8p-17f, 0.0f, 0.0f, 0x1.d3a56ep-16f, 0x1.818702p-103f,
     0x1.d75c4cp-93f, 0.0f, 0.0f, 0x1.ffe52ap-23f, 0x1.576fd6p-104f, 0x1.311358p-80f,
     0x1.b0a3dcp-93f, 0.0f, 0.0f, 0.0f, 0x1.b3b6ccp-108f, 0x1.7597c2p-25f,
     0x1.e41496p-58f, 0.0f, 0.0f, 0x1.7907aep-14f, 0x1.aa0caep-40f, 0x1.bec1ap-4f,
     0x1.5bf52cp-13f, 0x1.55b92ep-124f, 0x1.129d68p-79f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9b8dd4p-21f, 0x1.a8850ap-57f, 0x1.bd2104p-113f, 0x1.e1789ap-66f,
     0x1.df53a6p-120f, 0x1.f5072cp-122f, 0.0f, 0x1.2a6666p-81f, 0.0f, 0x1.761db2p-82f,
     0.0f, 0x1.369882p-32f, 0.0f, 0.0f, 0x1.3cdef8p-113f, 0.0f, 0x1.2262b2p-90f,
     0x1.6c04cp-75f, 0x1.28e884p-41f, 0x1.09794p-25f, 0x1.35a2ep-21f,
     0x1.6d4e2cp-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.10c18cp-60f, 0.0f,
     0.0f, 0.0f, 0x1.3e8164p-31f, 0x1.1c0c7ep-124f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5ddcdcp-39f, 0x1.05704ap-89f, 0.0f, 0x1.c76d68p-16f, 0.0f, 0.0f,
     0x1.97c56ep-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.77e86cp-78f, 0.0f,
     0x1.821e82p-126f, 0.0f, 0.0f, 0.0f, 0x1.d9729cp-106f, 0.0f, 0.0f, 0x1.2eeap-48f,
     0x1.171dd8p-21f, 0x1.06fae6p-89f, 0.0f, 0.0f, 0x1.01494cp-62f, 0x1.6ad63ep-17f,
     0.0f, 0.0f, 0x1.3feca2p-60f, 0.0f, 0x1.2e996p-98f, 0x1.bd0d22p-25f, 0.0f,
     0x1.935826p-71f, 0.0f, 0x1.072bfcp-26f, 0x1.b23dap-1f, 0.0f, 0x1.81573cp-36f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.8eeddcp-100f, 0x1.f35288p-66f, 0x1.21a0dcp-121f,
     0.0f, 0x1.a3b728p-80f, 0.0f, 0x1.4b880ep-55f, 0.0f, 0.0f, 0x1.6af0dcp-34f,
     0x1.14bdfap-2f, 0x1.b9642p-49f, 0x1.7d2786p-29f, 0x1.7daf46p-40f, 0x1p0f,
     0x1.3ddfaep-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9ded12p-15f, 0.0f, 0x1.2d360ep-98f,
     0x1.6f15e6p-23f, 0.0f, 0.0f, 0x1.555a7cp-26f, 0x1.fb9a5p-8f, 0.0f,
     0x1.17c708p-13f, 0x1.d1267cp-119f, 0.0f, 0.0f, 0.0f, 0x1.060e9ap-10f,
     0x1.211ec2p-62f, 0.0f, 0x1.403092p-48f, 0.0f, 0x1.a8899cp-74f, 0x1.0c0b2ep-84f,
     0x1.68ec4cp-96f, 0x1.9094ap-111f, 0x1.cc1424p-33f, 0.0f, 0x1.7a2d94p-64f, 0.0f,
     0x1.ce3916p-81f, 0.0f, 0x1.29c08ap-114f, 0.0f, 0x1.e8ab44p-90f, 0.0f, 0.0f,
     0x1.d7a64p-112f, 0x1.d3412p-106f, 0x1.4a7902p-32f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.294d9cp-109f, 0.0f, 0x1.7835dap-80f, 0x1.4c1cc8p-86f, 0.0f, 0x1.e6f77p-106f,
     0.0f, 0.0f, 0x1.769c4ep-97f, 0.0f, 0.0f, 0x1.1dc23cp-16f, 0x1.b0a42ap-124f, 0.0f,
     0x1.452d22p-104f, 0x1.35a43cp-55f, 0.0f, 0.0f, 0.0f, 0x1.e086acp-118f, 0.0f,
     0.0f, 0x1.be09ap-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cab57cp-31f,
     0x1.b79462p-19f, 0.0f, 0x1.1c576cp-97f, 0.0f, 0.0f, 0x1.1f6168p-49f,
     0x1.4f4a7ep-115f, 0.0f, 0.0f, 0.0f, 0x1.d0b746p-105f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.25051ep-121f, 0.0f, 0.0f, 0x1.3584f8p-40f, 0x1.d6c1fcp-72f,
     0x1.239bcap-67f, 0x1.2cc5acp-47f, 0.0f, 0.0f, 0x1.f41d6p-5f, 0.0f, 0.0f,
     0x1.4ea038p-57f, 0.0f, 0x1.b2399p-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c4b91cp-89f, 0.0f, 0.0f, 0.0f, 0x1.4929b6p-75f, 0.0f, 0x1.9d144p-83f,
     0x1.84a966p-15f, 0.0f, 0.0f, 0.0f, 0x1.e66268p-65f, 0x1.353646p-70f,
     0x1.4300aep-43f, 0x1.8e53dap-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a33d0ap-95f,
     0x1.225e68p-98f, 0.0f, 0.0f, 0x1.a1e272p-64f, 0x1.c95362p-32f, 0x1.15f25cp-4f,
     0x1.67b862p-62f, 0x1.5dd8f2p-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.909ca4p-96f, 0.0f,
     0x1.c7b01ep-2f, 0.0f, 0.0f, 0x1.b52f0ap-1f, 0x1.091b5p-98f, 0x1.d65838p-35f,
     0x1.a05a44p-64f, 0.0f, 0x1.7ab852p-113f, 0x1.cf330cp-27f, 0x1.2880dap-63f,
     0x1.e5978ap-113f, 0x1.1acd7ep-51f, 0x1.38e4cep-116f, 0x1.76ab84p-90f,
     0x1.5b05dcp-11f, 0x1.34bc54p-17f, 0.0f, 0.0f, 0x1.b7063cp-50f, 0x1.ec2beap-96f,
     0x1.790e86p-107f, 0x1.696826p-13f, 0.0f, 0.0f, 0x1.e90948p-75f, 0x1.b3b43p-125f,
     0.0f, 0.0f, 0x1.9adaaap-84f, 0x1.1ed492p-94f, 0x1.ed251ep-58f, 0.0f, 0.0f,
     0x1.c02398p-117f, 0x1.743d9ep-15f, 0x1.7995dcp-43f, 0x1.2f7814p-44f, 0.0f,
     0x1.1d0e76p-68f, 0x1p0f, 0x1.55d39p-54f, 0x1.aca60ep-27f, 0x1.7e823ep-15f, 0.0f,
     0x1.bf1b68p-108f, 0.0f, 0x1.4223a8p-106f, 0.0f, 0.0f, 0x1.23129ep-109f,
     0x1.5b97b6p-33f, 0.0f, 0x1.85d80ap-18f, 0.0f, 0.0f, 0x1.fae112p-126f,
     0x1.ae0d6cp-5f, 0.0f, 0x1.76990ap-41f, 0x1.43fa6ap-102f, 0.0f, 0.0f,
     0x1.4b6deap-85f, 0.0f, 0x1.46b356p-64f, 0x1.b9396cp-64f, 0.0f, 0x1.e82a0ep-30f,
     0.0f, 0.0f, 0x1.7c4c28p-51f, 0x1.a446ap-44f, 0.0f, 0.0f, 0x1.59929ep-65f,
     0x1.ff1f3p-119f, 0.0f, 0x1.1cb674p-59f, 0x1.c7dc9ap-26f, 0x1.c97fb6p-104f, 0.0f,
     0x1.a825a6p-73f, 0.0f, 0x1.b0464ep-22f, 0x1.88d16ap-53f, 0.0f, 0x1.c37e6ep-18f,
     0x1.9ca8c6p-81f, 0.0f, 0.0f, 0x1.8aa2f8p-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.7d3c38p-3f, 0x1.ecc28ep-79f, 0x1.bc4fep-106f, 0.0f, 0.0f,
     0x1.38d166p-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e6ed0ep-20f, 0x1.e28cdcp-97f, 0.0f,
     0x1.e94f5p-85f, 0.0f, 0x1.f74338p-111f, 0.0f, 0.0f, 0x1p0f, 0.0f,
     0x1.ce5028p-84f, 0x1.812e5ap-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a2112cp-2f,
     0x1.c2326ap-13f, 0.0f, 0x1.d9a196p-61f, 0.0f, 0.0f, 0x1.368bc2p-11f, 0.0f, 0.0f,
     0x1.2ff164p-22f, 0.0f, 0.0f, 0x1.49ef1ap-46f, 0x1.caa05p-97f, 0.0f, 0.0f,
     0x1.8744bcp-40f, 0x1.4518a6p-91f, 0x1.e0f148p-120f, 0.0f, 0.0f, 0x1.b6173ap-122f,
     0x1.404d3cp-63f, 0.0f, 0.0f, 0.0f, 0x1.1f0dc4p-88f, 0x1.5c2366p-66f, 0.0f,
     0x1.8d1aa2p-54f, 0.0f, 0.0f, 0.0f, 0x1.9d6e86p-2f, 0.0f, 0x1.0c6088p-69f,
     0x1.164dbcp-37f, 0.0f, 0.0f, 0x1.ee7028p-54f, 0x1.ec900ep-67f, 0.0f,
     0x1.42a4dap-25f, 0.0f, 0x1.54344p-9f, 0.0f, 0.0f, 0x1.aa4872p-95f,
     0x1.23f4b8p-23f, 0.0f, 0x1.4ad556p-117f, 0x1.94ac16p-28f, 0.0f, 0.0f,
     0x1.47c86ap-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.30dcf2p-51f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.514c2cp-50f, 0x1.066c48p-96f, 0x1.051704p-29f, 0x1.61d384p-76f,
     0x1.a6dd3ep-55f, 0x1.5368b4p-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2bc8a8p-33f, 0x1.fe3904p-68f, 0x1.179c46p-56f, 0.0f, 0x1.34b2d6p-49f, 0.0f,
     0x1.3fb2cap-21f, 0.0f, 0x1.501f88p-47f, 0x1.d51658p-31f, 0x1.8be88p-112f,
     0x1.42a74ep-113f, 0.0f, 0.0f, 0x1.3fd754p-110f, 0x1.119a52p-119f,
     0x1.256f6ep-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ce34fep-108f, 0.0f,
     0.0f, 0x1.0ba158p-63f, 0.0f, 0.0f, 0x1.aa12dcp-75f, 0x1.7edda4p-98f, 0.0f, 0.0f,
     0x1.93d5cap-81f, 0.0f, 0x1.1a722p-48f, 0x1.7abd66p-103f, 0.0f, 0x1.c307f6p-32f,
     0.0f, 0.0f, 0.0f, 0x1.aea61cp-61f, 0x1.19793p-78f, 0.0f, 0.0f, 0.0f,
     0x1.916c2cp-29f, 0x1.b413dcp-64f, 0x1.d6b766p-49f, 0.0f, 0x1.34ae64p-42f,
     0x1.bcc854p-21f, 0x1.9d798p-54f, 0.0f, 0x1.027abp-19f, 0x1.0e1ac8p-92f,
     0x1.1631f8p-83f, 0.0f, 0x1.543536p-12f, 0x1.bb20dcp-8f, 0.0f, 0x1.34675p-75f,
     0x1.a1dd06p-71f, 0x1.092d08p-66f, 0x1.670822p-40f, 0.0f, 0x1.68146cp-111f,
     0x1.b04876p-100f, 0.0f, 0x1.d57caap-92f, 0.0f, 0.0f, 0x1.5ed83ap-31f, 0.0f,
     0x1.066afcp-106f, 0.0f, 0x1.79ca2ep-123f, 0.0f, 0.0f, 0x1.32abd6p-113f,
     0x1.86cf16p-59f, 0x1.d3301ep-82f, 0x1.583e3cp-14f, 0.0f, 0x1.6bd15p-64f, 0.0f,
     0.0f, 0.0f, 0x1.5492ecp-31f, 0x1.a1aab2p-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.aae6e6p-63f, 0x1.bd952ep-20f, 0x1.17cc2cp-57f, 0.0f, 0.0f, 0x1.5611cap-61f,
     0.0f, 0.0f, 0x1.56b18cp-63f, 0x1.cb5bd6p-12f, 0.0f, 0x1.340162p-52f,
     0x1.eb1e1cp-120f, 0.0f, 0.0f, 0.0f, 0x1.7b11fcp-116f, 0.0f, 0x1.7c3fdep-94f,
     0x1.7c75c4p-102f, 0x1.5dfb5cp-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f,
     0x1.7410ecp-81f, 0.0f, 0.0f, 0x1.25795ep-94f, 0x1.e576fap-13f, 0.0f, 0.0f,
     0x1.dd71acp-24f, 0.0f, 0x1.6222f4p-57f, 0.0f, 0x1.727e5ep-9f, 0x1.348258p-107f,
     0x1.a6240cp-104f, 0.0f, 0x1.960dp-7f, 0x1.55fd62p-26f, 0x1.b0c294p-81f, 0.0f,
     0x1.8f206cp-98f, 0.0f, 0.0f, 0x1.099e1ap-58f, 0x1.0c06dp-37f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.4c7546p-67f, 0.0f, 0.0f, 0x1.bc9326p-13f, 0.0f, 0x1.5b3a28p-25f, 0.0f,
     0.0f, 0x1.57a5b8p-96f, 0x1.3be88p-23f, 0x1.a3201ap-64f, 0.0f, 0x1.783a74p-3f,
     0.0f, 0.0f, 0x1.8cd918p-65f, 0.0f, 0.0f, 0x1.b904fp-98f, 0.0f, 0x1.66efaep-76f,
     0x1.f95bacp-79f, 0.0f, 0x1.e1bf7ap-79f, 0.0f, 0.0f, 0x1.85ab26p-92f, 0.0f, 0.0f,
     0x1.103d36p-11f, 0.0f, 0x1.b20c04p-76f, 0.0f, 0x1.6ba63ep-63f, 0x1.b388fp-55f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.21cd12p-99f, 0.0f, 0x1.15e42cp-56f, 0.0f,
     0x1.f630c4p-25f, 0x1.9ea716p-75f, 0x1.b5f3e8p-83f, 0.0f, 0x1.fc1dc8p-75f,
     0x1.beb5e4p-52f, 0.0f, 0x1.61744ap-8f, 0.0f, 0.0f, 0x1.bb2bd2p-34f, 0.0f, 0.0f,
     0.0f, 0x1.0ba15cp-27f, 0.0f, 0x1.0e288cp-35f, 0x1.961e06p-74f, 0x1.28d102p-53f,
     0x1.eb7d54p-118f, 0x1.ae7906p-44f, 0x1.132d1cp-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.266058p-124f, 0x1.6cbb86p-68f, 0.0f, 0x1.08e53ap-112f, 0.0f, 0.0f,
     0x1.25d3aep-112f, 0x1.9f755cp-34f, 0.0f, 0x1.cbd03p-81f, 0x1.d809ap-104f,
     0x1.cc341cp-87f, 0x1.d333a4p-116f, 0.0f, 0x1.b75a3cp-125f, 0.0f, 0.0f, 0x1p0f,
     0x1.7a27e8p-121f, 0x1.016cf8p-41f, 0x1.f3b8eap-2f, 0x1.18be78p-73f, 0.0f,
     0x1.874be4p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5688fp-83f,
     0x1.f27998p-48f, 0x1.df879ap-86f, 0.0f, 0x1.ef3778p-57f, 0.0f, 0x1.bad85cp-110f,
     0.0f, 0x1.c68deap-116f, 0.0f, 0.0f, 0x1.b53da2p-123f, 0x1.bf218p-117f,
     0x1.e18a2ep-47f, 0x1.d1694cp-78f, 0x1.0b010cp-6f, 0x1.e01c8p-5f, 0.0f, 0.0f,
     0.0f, 0x1.c0885cp-120f, 0x1.d504fep-3f, 0x1.a1e6b2p-101f, 0.0f, 0.0f,
     0x1.24d214p-68f, 0x1.d14b7ap-86f, 0x1.4ca156p-125f, 0x1.65429cp-123f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.c5ea1cp-22f, 0.0f, 0.0f
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
            tmp1 = Sleef_finz_atanf4_u10avx2128(tmp0);
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
    printf("Sleef_finz_atanf4_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_atanf4_u10avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
