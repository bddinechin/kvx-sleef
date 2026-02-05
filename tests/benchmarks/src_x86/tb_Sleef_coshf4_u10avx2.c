/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_coshf4_u10avx2128.c --function Sleef_coshf4_u10avx2128 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
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
     0x1.3aeec6p-78f, 0.0f, 0x1.0e548ep-123f, 0.0f, 0.0f, 0x1.6723a6p-23f, 0.0f,
     0.0f, 0.0f, 0x1.a57be2p-66f, 0.0f, 0x1.f61f6cp-61f, 0x1.02ba8p-65f,
     0x1.1bc8ecp-34f, 0.0f, 0x1.53fd22p-100f, 0.0f, 0.0f, 0.0f, 0x1.c6dba6p-28f,
     0x1.c90046p-124f, 0.0f, 0x1.94cc4ap-68f, 0x1.90454p-50f, 0.0f, 0x1.29fe12p-46f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.106078p-64f, 0.0f, 0x1.df174cp-41f,
     0x1.4d8a7ep-1f, 0.0f, 0.0f, 0x1.b7c1d6p-38f, 0x1.6ca7acp-72f, 0.0f,
     0x1.93bdcep-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5d10e6p-126f,
     0x1.e289ccp-113f, 0.0f, 0x1.4e8ea8p-21f, 0x1.bf8042p-58f, 0.0f, 0x1.151c78p-58f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.fac6eep-27f, 0.0f, 0x1.e45aap-15f, 0x1.e45358p-82f,
     0x1.74d6d6p-111f, 0x1.7cda6cp-91f, 0x1.3950eap-113f, 0.0f, 0x1.79a564p-106f,
     0.0f, 0.0f, 0x1.5965fap-13f, 0x1.307eaep-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.31f5acp-94f, 0.0f, 0x1.d80c0ep-31f, 0.0f, 0x1.7a9c98p-65f,
     0x1.3102b6p-74f, 0.0f, 0x1.c975d8p-74f, 0.0f, 0.0f, 0.0f, 0x1.21342cp-75f,
     0x1.9f9398p-98f, 0x1.98b508p-79f, 0.0f, 0x1.e04b7ap-90f, 0.0f, 0.0f,
     0x1.feea6ep-76f, 0x1.a171ecp-73f, 0.0f, 0.0f, 0x1.a7e0b2p-3f, 0x1.109b0ep-53f,
     0x1.624d84p-22f, 0.0f, 0.0f, 0x1.092d04p-116f, 0.0f, 0.0f, 0x1.0fc1acp-69f, 0.0f,
     0.0f, 0x1.cd1deep-119f, 0.0f, 0.0f, 0x1.597958p-60f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.faa95cp-26f, 0x1.50c69p-53f, 0x1.c3815ap-116f, 0x1.8c78d6p-50f,
     0x1.1ed7d6p-61f, 0x1.8921b4p-9f, 0x1.ab6d32p-40f, 0.0f, 0x1.7886a8p-106f, 0.0f,
     0.0f, 0x1.694566p-79f, 0x1.483c9ep-29f, 0x1.3dec84p-50f, 0.0f, 0x1.c48ce8p-37f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c50fccp-79f, 0.0f, 0.0f, 0x1.effde6p-6f, 0.0f, 0.0f,
     0x1p0f, 0.0f, 0.0f, 0x1.07317p-49f, 0x1.00a926p-104f, 0.0f, 0.0f,
     0x1.f16336p-59f, 0x1.89ceaap-111f, 0x1.e87faap-13f, 0x1.98b9a6p-29f,
     0x1.10ad86p-58f, 0.0f, 0x1.18b4bep-65f, 0.0f, 0.0f, 0x1.7e2902p-81f, 0.0f, 0.0f,
     0.0f, 0x1.3daa08p-110f, 0.0f, 0.0f, 0x1.6568a2p-103f, 0.0f, 0x1.5bc64p-7f,
     0x1.c2f3fcp-15f, 0.0f, 0.0f, 0x1.b07dacp-80f, 0.0f, 0x1.e3d2e8p-31f,
     0x1.967248p-59f, 0.0f, 0x1.216162p-115f, 0.0f, 0x1.4b6e0ap-52f, 0.0f,
     0x1.3e8dcep-82f, 0x1.0f4fep-37f, 0x1.7fd158p-48f, 0.0f, 0.0f, 0.0f,
     0x1.13893ep-97f, 0x1.a24cacp-85f, 0.0f, 0.0f, 0x1.0d4e46p-25f, 0.0f,
     0x1.337d46p-57f, 0x1.20e31p-14f, 0.0f, 0.0f, 0x1.bc7b2p-39f, 0.0f,
     0x1.67a66cp-105f, 0.0f, 0.0f, 0x1.816fc8p-97f, 0.0f, 0x1.8f6ce4p-96f, 0x1p0f,
     0.0f, 0.0f, 0.0f, 0x1.d8874p-8f, 0x1.a39716p-106f, 0.0f, 0.0f, 0.0f,
     0x1.2329aap-43f, 0.0f, 0.0f, 0x1.ca6fa2p-77f, 0.0f, 0.0f, 0x1.374f58p-5f,
     0x1.d51654p-93f, 0x1.86a5eep-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1ad56cp-107f, 0x1.ed7678p-122f, 0.0f, 0.0f, 0x1.8b529ap-116f, 0x1.7ddd5p-96f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.117ecep-30f, 0x1.ebf27p-66f, 0.0f,
     0x1.6d1f6cp-36f, 0.0f, 0x1.08e5f4p-124f, 0x1.5257d4p-106f, 0x1.de2b1cp-91f, 0.0f,
     0x1.07339p-9f, 0.0f, 0x1.801762p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7cf4cap-9f,
     0x1.97af66p-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b18984p-102f, 0x1.76e0f2p-44f,
     0.0f, 0x1.560074p-44f, 0x1.7248d4p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0e73a6p-28f, 0x1.72295ap-52f, 0.0f, 0.0f, 0.0f, 0x1.0525d8p-20f, 0.0f,
     0x1.249174p-51f, 0x1.31a4acp-84f, 0.0f, 0.0f, 0x1.460adp-41f, 0.0f,
     0x1.397714p-76f, 0x1.0d7e1cp-95f, 0.0f, 0x1.11d718p-86f, 0x1.db1f44p-30f, 0.0f,
     0.0f, 0x1.98267cp-39f, 0x1.47f39ap-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.65f25ep-105f,
     0x1.5296bep-92f, 0x1.3243e8p-114f, 0x1.37f0a4p-52f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3f9a2ap-34f, 0x1.d82562p-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.274ae4p-104f, 0.0f,
     0x1.74085cp-59f, 0x1.9cb56ap-88f, 0x1.63e4fcp-114f, 0.0f, 0.0f, 0x1.ed31fp-123f,
     0x1.47831ep-30f, 0x1.364788p-120f, 0.0f, 0.0f, 0x1.b4d4fap-123f, 0x1.99a2e4p-21f,
     0.0f, 0x1.8608f4p-39f, 0.0f, 0.0f, 0.0f, 0x1.cd6f0ap-92f, 0.0f, 0x1.4d374cp-26f,
     0.0f, 0x1.b77492p-11f, 0x1.74cef8p-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d5aff4p-107f, 0.0f, 0.0f, 0x1.9bdc2ep-43f, 0.0f, 0x1.55e762p-92f, 0.0f, 0.0f,
     0.0f, 0x1.711842p-69f, 0x1.433862p-32f, 0x1.c8a024p-7f, 0x1.2ec646p-40f,
     0x1.d7e26ep-121f, 0.0f, 0.0f, 0.0f, 0x1.fb568cp-15f, 0.0f, 0x1.14c482p-54f, 0.0f,
     0x1.0ad598p-36f, 0x1.05cf14p-42f, 0.0f, 0.0f, 0.0f, 0x1.8f3decp-67f,
     0x1.0a15f8p-20f, 0x1.fe5a6ep-119f, 0x1.03a2fap-10f, 0x1.054d22p-104f, 0.0f, 0.0f,
     0.0f, 0x1.a54502p-75f, 0x1.8e2926p-102f, 0x1.223946p-39f, 0x1.c55ec8p-73f, 0.0f,
     0x1.a79912p-20f, 0.0f, 0x1.b9394cp-125f, 0x1.1bc302p-5f, 0.0f, 0.0f,
     0x1.666bf2p-33f, 0x1.76c26ap-88f, 0x1.a4fd88p-117f, 0x1.662d46p-108f, 0.0f,
     0x1.c36d8ap-51f, 0x1.9daabap-90f, 0.0f, 0.0f, 0x1.0fe7d4p-94f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.77f07cp-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.06df18p-113f, 0x1.c1bd7ap-26f, 0x1.d950aap-11f, 0x1.10627cp-45f, 0.0f, 0.0f,
     0x1.c94636p-26f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.17d5ap-26f, 0x1.ac3894p-87f,
     0.0f, 0.0f, 0x1.6f12f6p-35f, 0.0f, 0.0f, 0.0f, 0x1.ffb694p-64f, 0x1.dca77cp-18f,
     0x1.fe2e9ap-47f, 0x1.6d5e22p-117f, 0.0f, 0.0f, 0x1.1d8c5cp-98f, 0.0f,
     0x1.96709ep-111f, 0.0f, 0x1.46951cp-65f, 0.0f, 0.0f, 0x1.35074ep-102f,
     0x1.5df22ep-37f, 0x1.6e5e82p-100f, 0.0f, 0x1.633b72p-110f, 0x1.f102b2p-91f,
     0x1.ceb6d4p-27f, 0.0f, 0.0f, 0x1.de4c38p-84f, 0.0f, 0x1.e2ae36p-36f,
     0x1.b24584p-12f, 0.0f, 0.0f, 0x1.d463b2p-18f, 0.0f, 0.0f, 0x1.747742p-115f, 0.0f,
     0.0f, 0x1.d3917cp-77f, 0.0f, 0.0f, 0.0f, 0x1.9fce38p-60f, 0.0f, 0.0f,
     0x1.440d66p-97f, 0x1.9e4d7ap-118f, 0.0f, 0x1.cf1846p-32f, 0x1.331248p-62f, 0.0f,
     0.0f, 0.0f, 0x1.6a4a62p-25f, 0x1.894582p-77f, 0x1.f0f0e2p-59f, 0x1.db500ap-58f,
     0x1.664504p-76f, 0x1.5aede6p-47f, 0x1.87fc8ap-50f, 0x1.ed7cbp-83f, 0.0f,
     0x1.491156p-31f, 0x1.d10c82p-31f, 0x1.bfe2p-88f, 0x1.d522cap-65f, 0.0f, 0.0f,
     0.0f, 0x1.68bddep-123f, 0.0f, 0.0f, 0x1.70340ep-118f, 0x1.4dde18p-48f, 0.0f,
     0x1.1312dap-84f, 0x1.e0a882p-108f, 0x1.a1fec8p-12f, 0.0f, 0.0f, 0.0f,
     0x1.8d7caep-9f, 0x1.c63bdap-38f, 0.0f, 0.0f, 0x1.c35d4ep-85f, 0x1.a47c98p-117f,
     0x1.c4c928p-40f, 0x1.0ac14cp-53f, 0x1.c130ep-20f, 0x1.d3e792p-94f, 0.0f,
     0x1.4d3f6ep-108f, 0x1.600ddcp-18f, 0x1.3a3a5p-30f, 0.0f, 0.0f, 0x1.c8c098p-95f,
     0.0f, 0x1.d7c30cp-6f, 0x1.80b48ep-108f, 0.0f, 0x1.04b5a8p-20f, 0.0f, 0.0f,
     0x1.4c59d2p-54f, 0.0f, 0.0f, 0x1.79d258p-91f, 0.0f, 0.0f, 0x1.bb8f9ap-12f,
     0x1.96de48p-120f, 0.0f, 0.0f, 0.0f, 0x1.897e3cp-13f, 0x1.2caa66p-125f, 0.0f,
     0x1.0e6866p-120f, 0.0f, 0.0f, 0x1.4cec1cp-52f, 0.0f, 0.0f, 0.0f, 0x1.625be2p-36f,
     0.0f, 0.0f, 0x1.00f1e2p-61f, 0.0f, 0x1.e8e83p-59f, 0x1.2f5cdap-121f, 0.0f,
     0x1.07fc36p-120f, 0.0f, 0.0f, 0x1.ad32fap-37f, 0.0f, 0.0f, 0x1.22f856p-51f,
     0x1.90517ep-111f, 0x1.44b2ap-44f, 0.0f, 0x1.698e5p-74f, 0x1.1e8402p-107f,
     0x1.d31396p-22f, 0x1.fbcc4p-49f, 0.0f, 0x1.a90474p-44f, 0.0f, 0.0f,
     0x1.63a8fp-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b10c2p-104f, 0x1.cebdd4p-20f,
     0.0f, 0.0f, 0x1.ce50c8p-79f, 0x1.435072p-63f, 0.0f, 0x1.fcb976p-32f,
     0x1.f26ffap-112f, 0x1.f35218p-37f, 0.0f, 0x1.a2f5a2p-117f, 0x1.f4453ap-25f, 0.0f,
     0.0f, 0x1.e378bcp-25f, 0x1.cbb62cp-25f, 0x1.e2c1b2p-22f, 0.0f, 0x1.9d765p-54f,
     0x1.443ccep-62f, 0.0f, 0.0f, 0x1.975854p-72f, 0x1.61b844p-107f, 0.0f, 0.0f, 0.0f,
     0x1.d82e32p-32f, 0x1.f5411ep-112f, 0x1.870892p-76f, 0x1.dfc64cp-57f, 0.0f, 0.0f,
     0.0f, 0x1.efa1fp-60f, 0.0f, 0.0f, 0x1.276482p-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.841074p-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.57e466p-28f, 0x1.d66932p-85f, 0.0f,
     0x1.30b39p-50f, 0.0f, 0x1.8bccf6p-4f, 0.0f, 0x1.684c8cp-52f, 0x1.aeea56p-39f,
     0x1.91c7ep-7f, 0x1.887c16p-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.667ea2p-13f,
     0x1.48e1ep-40f, 0.0f, 0x1.ec01a2p-68f, 0x1.a65f14p-69f, 0.0f, 0x1.6a044ap-126f,
     0x1.18d9aep-15f, 0x1.d396acp-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.2f0bf8p-121f, 0x1.0331a4p-57f, 0.0f, 0.0f, 0x1.11fd2ap-14f,
     0x1.d558cp-121f, 0.0f, 0.0f, 0x1.41eda2p-89f, 0x1.e30eaap-97f, 0.0f,
     0x1.17a50cp-112f, 0x1.e2492cp-38f, 0x1.5b58e8p-118f, 0.0f, 0.0f, 0.0f,
     0x1.a92eap-107f, 0x1.7ff17ep-44f, 0.0f, 0.0f, 0x1.5edbfep-42f, 0.0f,
     0x1.5ae9aap-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.719fe6p-9f, 0.0f,
     0x1.957018p-59f, 0x1.93fc2ap-58f, 0x1.c55118p-48f, 0x1.8929a8p-10f,
     0x1.7b12a8p-126f, 0.0f, 0.0f, 0x1.23fea8p-66f, 0x1.329eccp-13f, 0.0f, 0.0f,
     0x1.f0841p-3f, 0x1.5c9d38p-120f, 0.0f, 0.0f, 0x1.3638c4p-8f, 0x1.f0f2eap-87f,
     0.0f, 0.0f, 0x1.9b8ac8p-78f, 0.0f, 0x1.dc87e8p-78f, 0x1.0b2b96p-75f,
     0x1.e29a6ep-96f, 0.0f, 0.0f, 0x1.0e30cp-11f, 0x1.88a138p-61f, 0x1.ebbd5ap-106f,
     0x1.517b84p-75f, 0x1.862bd2p-6f, 0x1.896cb4p-15f, 0.0f, 0x1.4810cp-11f,
     0x1.82aaa8p-24f, 0.0f, 0.0f, 0x1.21fdb6p-74f, 0x1.d6d01ep-77f, 0x1.9eb39ap-125f,
     0x1.f2c518p-77f, 0.0f, 0x1.65eff8p-117f, 0.0f, 0x1.4ab2d6p-105f, 0x1.7b3b5cp-64f,
     0x1.49456ap-31f, 0x1.67ae9ep-74f, 0x1.46af12p-29f, 0x1.0dcd2cp-111f, 0.0f, 0.0f,
     0x1.91b3c6p-105f, 0x1.d9b4fep-81f, 0x1.84dc6ep-67f, 0.0f, 0.0f, 0.0f, 0x1p0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.0c2844p-33f, 0.0f, 0x1.0882f8p-114f, 0x1.082396p-64f,
     0x1.b886fep-102f, 0.0f, 0x1.5781f2p-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.69f3ap-91f,
     0.0f, 0.0f, 0x1.7042fap-36f, 0.0f, 0x1.66ef78p-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8ba028p-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cafbeep-120f,
     0x1.4b98fep-109f, 0x1.3625cp-117f, 0.0f, 0.0f, 0x1.be7232p-39f, 0x1.1815ap-59f,
     0x1.e031e2p-34f, 0x1.27dd8ep-45f, 0x1.492bc4p-36f, 0x1.a05fc2p-30f, 0.0f,
     0x1.585208p-35f, 0.0f, 0x1.2e6476p-23f, 0.0f, 0x1.a3186ap-74f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e50788p-2f, 0x1.ae7bccp-84f, 0.0f, 0.0f, 0x1.aa421ap-98f,
     0.0f, 0x1.4124b8p-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d4f0fp-96f, 0x1.f63b7p-105f,
     0.0f, 0x1.90b816p-117f, 0x1.06e69cp-29f, 0.0f, 0x1.8310f8p-72f, 0.0f,
     0x1.523b2cp-111f, 0x1.f27bbp-11f, 0.0f, 0x1.f1243cp-72f, 0x1.ca7586p-64f, 0.0f,
     0x1.0fc97ap-67f, 0.0f, 0x1.579368p-112f, 0.0f, 0.0f, 0x1.a765e4p-2f,
     0x1.655aaep-124f, 0.0f, 0x1.b59a16p-23f, 0x1.51b39ap-24f, 0x1.bbde4ep-58f, 0.0f,
     0.0f, 0x1.5b2bf8p-106f, 0.0f, 0x1.79cf08p-14f, 0.0f, 0.0f, 0.0f, 0x1.a7f93cp-34f,
     0.0f, 0.0f, 0.0f, 0x1.23d41p-103f, 0.0f, 0.0f, 0x1.7ae422p-112f, 0.0f, 0.0f,
     0.0f, 0x1.ad923p-81f, 0.0f, 0x1.7f2c22p-111f, 0.0f, 0.0f, 0x1.f42184p-6f, 0.0f,
     0x1.d5145ep-56f, 0.0f, 0.0f, 0x1.74235p-83f, 0x1.6055f4p-77f, 0x1.f57b0ap-73f,
     0x1.c4fa1cp-5f, 0.0f, 0.0f, 0x1.1ebef4p-101f, 0x1.9f23b4p-41f, 0x1.2a4bbep-116f,
     0.0f, 0x1.66e8b4p-90f, 0.0f, 0x1.52927p-11f, 0.0f, 0.0f, 0x1.466ceep-77f,
     0x1.dcc668p-58f, 0.0f, 0x1.25a9fep-49f, 0x1.156dfp-96f, 0x1.ef47ccp-91f, 0.0f,
     0.0f, 0x1.b4861p-114f, 0.0f, 0.0f, 0x1.a74e34p-1f, 0.0f, 0.0f, 0x1.3ad32ap-25f,
     0x1.61826ap-37f, 0.0f, 0x1.ed35fap-38f, 0.0f, 0x1.49fdfp-75f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.1f79d4p-42f, 0x1.520ec8p-113f, 0x1.9ffbe2p-36f, 0.0f, 0.0f,
     0x1.3d94b2p-13f, 0.0f, 0x1.16fd2p-61f, 0x1.440dbap-27f, 0.0f, 0x1.7fbbb8p-13f,
     0.0f, 0x1.476be8p-63f, 0x1.5e58ep-94f, 0x1.fa4868p-37f, 0x1.ff7e48p-114f,
     0x1.9955d8p-45f, 0x1.efd1bep-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c4acbep-29f,
     0x1.290fap-21f, 0.0f, 0x1.7437e2p-46f, 0.0f, 0x1.1fc30ep-15f, 0x1.66a2d6p-12f,
     0.0f, 0x1.162bf8p-62f, 0.0f, 0.0f, 0x1.ff17e8p-35f, 0x1.417b36p-92f, 0.0f,
     0x1.3689c6p-121f, 0x1.af216ap-25f, 0.0f, 0x1.e04052p-46f, 0x1.915f4ap-75f,
     0x1.3ef7e2p-77f, 0.0f, 0.0f, 0x1.3ebca4p-116f, 0x1.10cd78p-123f, 0x1.de92b4p-73f,
     0x1.ec96b2p-113f, 0x1.628be2p-5f, 0x1.2b5d66p-88f, 0x1.e06a2ep-24f,
     0x1.b780b8p-47f, 0x1.1ea482p-123f, 0x1.96f208p-70f, 0.0f, 0x1.f865dap-18f, 0.0f,
     0x1.8c44d4p-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.673e9cp-6f,
     0x1.6da9f2p-85f, 0.0f, 0.0f, 0x1.39b64p-55f, 0.0f, 0.0f, 0x1.5eedbep-111f,
     0x1.3fa608p-24f, 0.0f, 0.0f, 0x1.cd5042p-55f, 0x1.7f50d2p-107f, 0x1.ff4cap-109f
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
            tmp1 = Sleef_coshf4_u10avx2128(tmp0);
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
    printf("Sleef_coshf4_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_coshf4_u10avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
