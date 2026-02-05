/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_acosf4_u10kvx.c --function Sleef_acosf4_u10kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 4 --function-input-vector-size 4 --bench \
 *     --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float4_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float4_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0x1.fa6e4p-105f, 0x1.c1b2a6p-24f, 0.0f, 0x1.98da08p-112f, 0.0f,
     0x1.65f542p-107f, 0.0f, 0.0f, 0x1.f0629ep-106f, 0.0f, 0.0f, 0x1.121ba4p-11f,
     0.0f, 0.0f, 0x1.96dac4p-15f, 0.0f, 0x1.324f3ep-5f, 0x1.5e3c92p-54f, 0.0f, 0.0f,
     0x1.3d240ep-3f, 0x1.98ed9ep-100f, 0x1.4da45ap-113f, 0.0f, 0.0f, 0x1.4547p-68f,
     0.0f, 0x1.bea4ecp-26f, 0.0f, 0.0f, 0.0f, 0x1.2ebd82p-69f, 0x1.c0d05ep-43f, 0.0f,
     0x1.26ff02p-17f, 0x1.51609ap-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a85ab2p-32f, 0.0f,
     0x1.1b9d32p-70f, 0.0f, 0x1.5edd1ap-87f, 0.0f, 0x1.087c28p-76f, 0.0f, 0.0f, 0.0f,
     0x1.f5b80ap-68f, 0.0f, 0x1.7ea4b6p-52f, 0x1p0f, 0.0f, 0x1.b660ep-1f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.74162cp-15f, 0x1.4a38fp-81f, 0x1.127588p-3f,
     0x1.e45762p-54f, 0.0f, 0x1.8bc79p-68f, 0x1.89302ap-68f, 0x1.72b744p-104f,
     0x1.5af722p-91f, 0x1.9866cp-18f, 0x1.471544p-67f, 0x1.9d071ep-54f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.0be7ep-81f, 0x1.9d3a04p-86f, 0.0f, 0.0f,
     0x1.a8395ap-25f, 0x1.e13344p-30f, 0.0f, 0x1.7dd282p-100f, 0.0f, 0x1.e7ce8p-7f,
     0x1.9003a6p-115f, 0x1.510456p-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1734bap-63f, 0.0f, 0x1.b1b44p-93f, 0x1.dad9dap-31f, 0.0f, 0x1.0a887p-63f,
     0x1.3ea856p-75f, 0.0f, 0.0f, 0x1.9eb50ap-31f, 0x1.45c99p-29f, 0x1.164f5ap-80f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.9ccd22p-18f, 0x1.716794p-52f, 0x1.89b10cp-69f, 0.0f,
     0x1.545fe4p-60f, 0.0f, 0.0f, 0.0f, 0x1.3011cap-40f, 0x1.6f4372p-103f,
     0x1.f6716cp-32f, 0.0f, 0x1.c9ad1ep-90f, 0x1.2f2e1ap-10f, 0.0f, 0x1.9bfcf8p-106f,
     0x1.ea502ep-54f, 0x1.64c52p-96f, 0.0f, 0.0f, 0x1.a9b44p-74f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9af268p-96f, 0.0f, 0.0f, 0.0f, 0x1.a9230ap-108f,
     0x1.d16b0cp-10f, 0x1.50efc8p-106f, 0x1.a00608p-108f, 0x1.a3633p-126f, 0.0f,
     0x1.aaa84ep-53f, 0x1.23f44cp-84f, 0x1.d394c8p-37f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.106994p-71f, 0x1.da1c6cp-30f, 0x1.8c5ec4p-37f, 0x1.de483ap-114f, 0.0f, 0.0f,
     0.0f, 0x1.736872p-119f, 0.0f, 0x1.7be9e4p-119f, 0.0f, 0x1.1d577cp-54f,
     0x1.e83cd8p-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5c2278p-38f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f14faep-119f, 0.0f, 0.0f, 0x1.807c66p-24f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.30b17p-66f, 0x1.668ae4p-81f, 0x1.08cb42p-79f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.543e2cp-84f, 0.0f, 0.0f, 0x1.301a52p-27f, 0x1.4869f2p-23f, 0.0f, 0.0f,
     0x1.d49782p-61f, 0.0f, 0x1.cb1b88p-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e58872p-30f, 0x1.cbc4fap-100f, 0x1.3b8024p-7f, 0x1.23c492p-29f,
     0x1.ce025cp-82f, 0x1.756a8ap-79f, 0x1.d2451p-112f, 0.0f, 0.0f, 0x1.8e8052p-39f,
     0.0f, 0x1.d410f8p-111f, 0.0f, 0x1.0c854p-28f, 0.0f, 0x1.80cc08p-20f, 0.0f, 0.0f,
     0x1.3ce4d4p-120f, 0.0f, 0x1.dc5b58p-34f, 0x1.9ec3c2p-15f, 0x1.7f6a4ap-71f,
     0x1.ebded6p-5f, 0x1.a8dd1ap-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f1b73p-35f,
     0x1.351e0ap-47f, 0x1.52f0b8p-17f, 0.0f, 0x1.450196p-38f, 0x1.b7b22cp-77f,
     0x1.7002e8p-3f, 0x1.c9668cp-21f, 0.0f, 0x1.9bf5b6p-28f, 0.0f, 0x1.421c64p-123f,
     0x1.b5ded6p-49f, 0x1.f31ea2p-95f, 0x1.fe1284p-32f, 0.0f, 0.0f, 0x1.217acp-32f,
     0.0f, 0x1.1a982p-110f, 0x1.98230cp-121f, 0x1.de70dep-29f, 0x1.e3c39p-102f,
     0x1.a733e8p-117f, 0.0f, 0.0f, 0x1.cf3fd6p-122f, 0.0f, 0x1.ae5448p-20f,
     0x1.5cd0aap-67f, 0x1.0e315ep-42f, 0x1.2b0f6cp-78f, 0x1.01cdaap-97f,
     0x1.7f277p-89f, 0.0f, 0x1.a51b24p-78f, 0.0f, 0x1.a2788p-4f, 0x1.046b9ep-93f,
     0x1.4fbe62p-71f, 0.0f, 0x1.cad0fap-53f, 0.0f, 0x1.e9e174p-87f, 0.0f,
     0x1.b551dp-119f, 0.0f, 0.0f, 0.0f, 0x1.a2f8e2p-17f, 0x1.cda24ep-116f, 0.0f,
     0x1.1a2764p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5245dap-10f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.efc86ep-121f, 0x1.c88c82p-74f, 0x1.31701ep-33f, 0x1.056a4ep-50f,
     0x1.075bfcp-76f, 0.0f, 0.0f, 0x1.27c8d2p-60f, 0x1.e8e954p-108f, 0.0f,
     0x1.14410ap-114f, 0.0f, 0x1.00dce6p-35f, 0.0f, 0x1.a952bep-46f, 0x1.da4dd6p-17f,
     0x1.f47946p-113f, 0.0f, 0.0f, 0x1.2d251ap-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.420e76p-16f, 0x1.5b61c6p-6f, 0x1.6c7a7p-115f, 0x1.34742p-81f, 0.0f, 0.0f,
     0x1.054p-61f, 0.0f, 0.0f, 0x1.2f5dc6p-29f, 0x1.a04432p-65f, 0.0f, 0.0f,
     0x1.b41a9cp-27f, 0.0f, 0x1.07a126p-18f, 0x1.949642p-112f, 0.0f, 0x1.d429fcp-25f,
     0x1.bcfd88p-124f, 0.0f, 0x1.34688ap-52f, 0.0f, 0.0f, 0x1.285c9ep-19f, 0.0f, 0.0f,
     0.0f, 0x1.353acep-60f, 0.0f, 0.0f, 0.0f, 0x1.a4b872p-30f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.693cdap-6f, 0x1.092fbap-115f, 0.0f, 0x1.ac576ep-24f, 0x1.327b3ap-56f,
     0.0f, 0x1.64793p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dc5c2ap-79f, 0x1.84372ap-47f,
     0x1.f44bf6p-61f, 0x1.057fd6p-111f, 0x1.e5e6eap-94f, 0x1.8fb998p-50f, 0.0f,
     0x1.5ffd4p-105f, 0x1.79fc26p-101f, 0.0f, 0.0f, 0.0f, 0x1.9f238ap-70f,
     0x1.27ebacp-54f, 0.0f, 0x1.4b2ffep-66f, 0.0f, 0x1.286e7ap-55f, 0x1.13c472p-94f,
     0x1.ee5b82p-27f, 0x1.972362p-113f, 0.0f, 0.0f, 0x1.ccfdd6p-66f, 0.0f, 0.0f,
     0x1.1381e2p-16f, 0x1.c7367cp-92f, 0.0f, 0x1.1fcfcap-12f, 0x1.612548p-48f,
     0x1.bd5f3cp-99f, 0x1.c70024p-46f, 0.0f, 0.0f, 0x1.5a50b8p-71f, 0x1.70f2aep-41f,
     0x1.adc0fp-84f, 0x1.c7269p-32f, 0.0f, 0x1.ba10f4p-18f, 0.0f, 0.0f,
     0x1.26c38p-69f, 0x1.fbd2b8p-15f, 0x1.a4b09p-29f, 0.0f, 0x1.f3e08p-48f, 0.0f,
     0x1.a9ea3cp-125f, 0x1.1f974cp-36f, 0x1.ba543cp-85f, 0x1.c6ce42p-54f,
     0x1.ce3172p-99f, 0.0f, 0.0f, 0.0f, 0x1.472a7ap-126f, 0.0f, 0.0f, 0.0f,
     0x1.7cc192p-53f, 0.0f, 0x1.28398cp-12f, 0x1.1cec2p-96f, 0.0f, 0x1.a407a6p-30f,
     0.0f, 0x1.e61a34p-16f, 0.0f, 0x1.ee50dcp-54f, 0.0f, 0x1.70dfa6p-4f, 0.0f, 0.0f,
     0.0f, 0x1.124348p-49f, 0.0f, 0.0f, 0x1.01111ep-20f, 0x1.f8ae6cp-25f,
     0x1.47faf8p-84f, 0.0f, 0x1.bfdc46p-125f, 0.0f, 0x1.8901c4p-52f, 0x1.44681ap-15f,
     0x1.da4d1ap-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6941c4p-57f, 0.0f,
     0x1.76f146p-119f, 0x1.c62d54p-68f, 0.0f, 0x1.fdce68p-97f, 0.0f, 0.0f,
     0x1.467a4p-25f, 0x1.a842e4p-124f, 0x1.79720cp-121f, 0x1.04686ep-31f, 0.0f, 0.0f,
     0x1.700128p-37f, 0x1.f3a0f2p-72f, 0.0f, 0.0f, 0x1.68f9a6p-125f, 0x1.831ebcp-45f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.5521fap-57f, 0.0f, 0.0f, 0x1.ad0a68p-65f,
     0x1.bb9b5cp-100f, 0.0f, 0x1.6dab0ap-3f, 0.0f, 0.0f, 0x1.09ca0cp-13f, 0.0f, 0.0f,
     0.0f, 0x1.1ed72cp-53f, 0.0f, 0x1.57d8bap-28f, 0x1.b1e8e2p-91f, 0x1.501e1ep-95f,
     0x1.85304ep-118f, 0.0f, 0.0f, 0.0f, 0x1.2a3acep-44f, 0.0f, 0.0f, 0.0f,
     0x1.556084p-52f, 0x1.a01e06p-13f, 0.0f, 0.0f, 0x1.8c972ep-104f, 0.0f,
     0x1.18248cp-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1b2da4p-99f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.0382c4p-100f, 0.0f, 0.0f, 0x1.e3ab0ap-73f, 0x1.aca502p-45f,
     0x1.75f758p-39f, 0x1.f4e7f6p-19f, 0x1.2325fp-64f, 0.0f, 0.0f, 0x1.1fd61cp-18f,
     0.0f, 0x1.d9075cp-63f, 0.0f, 0.0f, 0.0f, 0x1.0d65dcp-82f, 0x1.d83758p-98f,
     0x1.39f106p-15f, 0x1.df13fep-4f, 0.0f, 0.0f, 0x1.00229p-48f, 0.0f,
     0x1.73f1b4p-63f, 0x1.4907eap-31f, 0.0f, 0x1.889c3cp-43f, 0x1.58cd22p-92f, 0.0f,
     0.0f, 0.0f, 0x1.cef2e8p-74f, 0.0f, 0.0f, 0.0f, 0x1.c99306p-57f, 0.0f, 0.0f,
     0x1.3bc0b8p-40f, 0.0f, 0.0f, 0.0f, 0x1.e09e16p-29f, 0x1.250b86p-61f, 0.0f, 0.0f,
     0x1.c1500ep-79f, 0.0f, 0x1.d97788p-90f, 0.0f, 0.0f, 0x1.29b5b6p-105f, 0.0f, 0.0f,
     0x1.4f30a2p-38f, 0x1.bb8e4ap-91f, 0x1.7270c4p-47f, 0x1.3ac20ep-42f, 0.0f,
     0x1.8c5224p-51f, 0.0f, 0.0f, 0x1.7a99d6p-49f, 0x1.d351d2p-39f, 0x1.9623f6p-84f,
     0.0f, 0x1.ebd01p-27f, 0x1.62aecp-40f, 0.0f, 0.0f, 0x1.2089b6p-86f,
     0x1.9291b8p-23f, 0x1.a96e02p-93f, 0.0f, 0.0f, 0.0f, 0x1.f97036p-121f,
     0x1.00e76ap-113f, 0.0f, 0.0f, 0x1.d7b2b2p-123f, 0.0f, 0.0f, 0.0f,
     0x1.2d433cp-58f, 0.0f, 0x1.f03086p-121f, 0.0f, 0x1.9db0e2p-116f, 0.0f,
     0x1.3db00ap-37f, 0x1.2171a4p-70f, 0.0f, 0x1.bdf442p-45f, 0x1.3acfdcp-77f,
     0x1.4fdb3p-35f, 0x1.80474ep-115f, 0.0f, 0.0f, 0x1.78633cp-76f, 0.0f, 0.0f,
     0x1.374a86p-113f, 0x1.b4ebf2p-113f, 0.0f, 0x1.8cfe08p-50f, 0.0f, 0x1.0b356ap-54f,
     0x1.10b6f8p-111f, 0.0f, 0.0f, 0x1.3ca69ap-67f, 0.0f, 0x1.c6e05p-49f, 0.0f,
     0x1.7a3966p-108f, 0.0f, 0.0f, 0x1.1fd3c4p-15f, 0.0f, 0.0f, 0x1.ed911cp-25f,
     0x1.e92504p-101f, 0.0f, 0x1.16da5ep-5f, 0.0f, 0x1.1a704cp-64f, 0x1.9654f8p-11f,
     0.0f, 0.0f, 0x1.2ec318p-101f, 0.0f, 0x1.da741p-30f, 0x1.4ca5f2p-108f,
     0x1.992886p-76f, 0x1.ac5bfap-82f, 0.0f, 0.0f, 0x1.fd4c22p-126f, 0x1.83dbb2p-40f,
     0.0f, 0x1.53477ep-47f, 0x1.beb5c4p-93f, 0x1.1a323p-96f, 0x1.51a63p-38f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.9d9948p-107f, 0.0f, 0x1.c77f6ap-63f, 0.0f, 0.0f,
     0.0f, 0x1.384232p-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5a5678p-28f, 0.0f,
     0x1.bae02ap-102f, 0x1.61b0b4p-104f, 0.0f, 0.0f, 0x1.24eap-28f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.6747a8p-81f, 0x1.25266ep-98f, 0x1.cb2688p-43f, 0.0f, 0.0f,
     0x1.5f7a76p-88f, 0.0f, 0x1.d7dc9cp-112f, 0.0f, 0x1.ecd566p-99f, 0x1.06e7d6p-2f,
     0.0f, 0.0f, 0.0f, 0x1.f6e17cp-34f, 0x1.e084d6p-116f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b60c66p-26f, 0x1.bbef64p-30f, 0.0f, 0x1.23dad8p-64f, 0.0f,
     0x1.e05fd2p-85f, 0.0f, 0x1.de1e18p-110f, 0.0f, 0.0f, 0.0f, 0x1.3afd7ap-118f,
     0x1.6dc0cep-65f, 0.0f, 0.0f, 0x1.ad32aap-18f, 0x1.eddf78p-10f, 0x1.e7af68p-125f,
     0x1.590464p-15f, 0.0f, 0x1.c852b2p-17f, 0.0f, 0x1.8c4a5ap-36f, 0x1.01c9c2p-58f,
     0x1.73cbb8p-126f, 0x1.dd2724p-10f, 0x1.bce09ap-96f, 0x1.1f7012p-112f,
     0x1.ee222cp-32f, 0.0f, 0x1.a84dap-10f, 0.0f, 0.0f, 0.0f, 0x1.bfc21ep-13f,
     0x1.5b0c3ep-49f, 0x1.58cccap-66f, 0x1.1078a2p-91f, 0.0f, 0.0f, 0x1.712d46p-117f,
     0.0f, 0.0f, 0.0f, 0x1.2a8c58p-75f, 0x1.431ep-34f, 0.0f, 0.0f, 0.0f,
     0x1.cf2058p-88f, 0x1.453498p-94f, 0x1.f6473ep-100f, 0x1.125fp-68f, 0.0f, 0.0f,
     0x1.11d8a2p-78f, 0.0f, 0x1.5f454p-103f, 0.0f, 0x1.bfbd7ap-6f, 0x1.ff1cd6p-28f,
     0x1.5b15d6p-57f, 0.0f, 0.0f, 0x1.c8b4bp-18f, 0.0f, 0x1.b334bcp-7f,
     0x1.f0b058p-9f, 0.0f, 0x1.ce261cp-89f, 0.0f, 0x1.2c0a14p-122f, 0x1.204e86p-65f,
     0x1.c7314cp-118f, 0.0f, 0x1.d7d952p-110f, 0x1.eb903ep-93f, 0.0f, 0x1.55cee4p-41f,
     0x1.00a114p-48f, 0x1.26d798p-13f, 0x1.69c876p-44f, 0.0f, 0.0f, 0x1.7e4156p-85f,
     0x1.571908p-100f, 0x1.baf7d2p-1f, 0.0f, 0x1.fdfd02p-78f, 0x1.91b036p-38f,
     0x1.84b13ap-34f, 0.0f, 0.0f, 0x1.90f8e2p-2f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0767ap-70f, 0x1.07d4dap-103f, 0.0f, 0x1.86ac04p-30f, 0x1.a3af3p-104f,
     0x1.2c5a0cp-91f, 0x1.154ea6p-113f, 0x1.41c488p-28f, 0.0f, 0.0f, 0x1.32e454p-114f,
     0x1.95bf82p-85f, 0.0f, 0x1.677572p-123f, 0.0f, 0.0f, 0x1.14a25ap-38f, 0.0f,
     0x1.5562b8p-16f, 0.0f, 0x1.c2bc18p-74f, 0.0f, 0x1.9395f2p-114f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.dcb11cp-17f, 0.0f, 0x1.552926p-75f, 0x1.bb1dc6p-36f, 0.0f, 0.0f,
     0x1.7861e6p-47f, 0x1.8a4106p-53f, 0.0f, 0x1.5673c8p-110f, 0x1.1bef3p-51f,
     0x1.d459a8p-30f, 0.0f, 0.0f, 0.0f, 0x1.036d24p-125f, 0.0f, 0x1.bd813ep-32f,
     0x1.3fdd94p-83f, 0x1.567c7cp-83f, 0x1.192f08p-11f, 0.0f, 0x1.24e42ap-69f, 0.0f,
     0x1.d97edep-65f, 0x1.0442ep-30f, 0.0f, 0x1.dfdb8cp-117f, 0x1.c87e36p-34f, 0.0f,
     0x1.b159a2p-14f, 0x1.ff9ec2p-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c6b8d8p-117f, 0.0f,
     0x1.b42d2ap-80f, 0.0f, 0.0f, 0x1.65896cp-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4df8e4p-21f, 0.0f, 0x1.a6b7bap-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b304dap-43f,
     0.0f, 0x1.5ac22ep-121f, 0.0f, 0x1.6ceb72p-71f, 0.0f, 0x1.0d042p-48f, 0.0f, 0.0f,
     0.0f, 0x1.238066p-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4385c6p-9f, 0x1.3e422ap-120f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.528852p-108f, 0.0f, 0.0f, 0x1.e2b1b2p-81f,
     0.0f, 0x1.e9b622p-98f, 0x1.5a51ap-69f, 0.0f, 0.0f, 0x1.3fef66p-26f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.0489c6p-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d92eb2p-7f,
     0x1.6b71ccp-64f, 0x1.c7c8c6p-106f, 0.0f, 0x1.29ed5p-30f, 0x1.4a347ep-120f, 0.0f,
     0x1.db6b2p-64f, 0x1.2ce03cp-24f, 0x1.2ec4f4p-35f, 0.0f, 0.0f, 0x1.6508ccp-3f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.888c78p-13f, 0x1.931dfep-116f, 0.0f, 0.0f,
     0x1p0f, 0.0f, 0x1.3cfb72p-116f, 0x1.d28072p-65f, 0.0f, 0x1.136ba2p-91f,
     0x1.f217b8p-113f, 0.0f, 0x1.16febp-26f, 0x1.08af82p-68f, 0x1.494198p-120f,
     0x1.d8313cp-91f, 0x1.0a0784p-40f, 0x1.87f2a6p-112f, 0x1.5a8b4ap-72f,
     0x1.82873cp-65f, 0x1.c6f46cp-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2a0d2cp-117f, 0x1.8c37c4p-77f, 0x1.456508p-96f, 0.0f, 0x1.fb1c18p-27f,
     0x1.63e9c6p-62f, 0x1.47d106p-81f, 0.0f, 0.0f
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
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = external_bench_wrapper_cst;
    tmp = __cos_counter_num(0);
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
            tmp1 = Sleef_acosf4_u10kvx(tmp0);
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
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_acosf4_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_acosf4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
