/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sinpif4_u05avx2128.c --function Sleef_sinpif4_u05avx2128 \
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
     0x1.00e7cp-73f, 0.0f, 0x1.b13562p-117f, 0.0f, 0.0f, 0.0f, 0x1.efdfc4p-22f, 0.0f,
     0.0f, 0x1.6761a8p-76f, 0x1.ca40ap-62f, 0.0f, 0x1.d0a61ep-73f, 0.0f, 0.0f, 0.0f,
     0x1.c7c18p-25f, 0.0f, 0x1.84a2cep-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6f817ep-74f,
     0.0f, 0x1.968ad2p-67f, 0.0f, 0.0f, 0x1.dfaf54p-46f, 0x1.d680fp-117f,
     0x1.f2d1d4p-20f, 0x1.17eef2p-43f, 0.0f, 0.0f, 0x1.22d7ep-56f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.42d5eap-87f, 0x1.a0ea36p-108f, 0.0f, 0.0f, 0.0f, 0x1.b7582ep-58f, 0.0f,
     0.0f, 0.0f, 0x1.56c23ap-67f, 0.0f, 0.0f, 0x1.d6cf52p-23f, 0x1.299442p-39f,
     0x1.96007ep-95f, 0x1.4c0e6p-59f, 0.0f, 0.0f, 0.0f, 0x1.c15be4p-102f,
     0x1.ebe738p-47f, 0x1.3862dap-64f, 0.0f, 0x1.d2428cp-60f, 0x1.aa5cf6p-11f, 0.0f,
     0x1.3f7c26p-90f, 0.0f, 0x1.6c7278p-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f8a3cap-106f, 0.0f, 0x1.1c0a9ap-43f, 0x1.735a34p-41f, 0x1.6a5acap-115f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.7a3eaap-76f, 0.0f, 0x1.5f1e12p-40f, 0x1.e50d3ep-61f,
     0x1.a5b09p-95f, 0.0f, 0x1.b049c8p-120f, 0.0f, 0x1.5f838ap-44f, 0x1.16ca8cp-58f,
     0x1.02acc6p-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.796b46p-40f, 0.0f, 0.0f,
     0.0f, 0x1.c38f32p-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cc9f8p-108f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.38451ap-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7b0004p-87f,
     0x1.952f5ap-82f, 0.0f, 0.0f, 0x1.6acfc4p-52f, 0x1.e0dc2p-63f, 0x1.6d4f04p-19f,
     0x1.51fefcp-102f, 0x1.197f28p-79f, 0x1.6c249cp-112f, 0.0f, 0x1.37fe5ap-88f,
     0x1.c3b4c2p-79f, 0x1.060faap-84f, 0x1.1671fep-38f, 0.0f, 0x1.03f4e6p-47f,
     0x1.1f04fp-125f, 0x1.3102f6p-68f, 0.0f, 0x1.513d18p-95f, 0.0f, 0x1.3b43f8p-31f,
     0.0f, 0.0f, 0x1.76c23ep-14f, 0.0f, 0x1.b0a3b2p-47f, 0.0f, 0.0f, 0x1.f62d1ap-21f,
     0.0f, 0x1.822702p-68f, 0x1.fa0854p-83f, 0x1.f9d754p-31f, 0x1.545c9ap-55f,
     0x1.79227ep-45f, 0.0f, 0.0f, 0.0f, 0x1.3e77dep-101f, 0x1.a93b66p-34f,
     0x1.c5c578p-47f, 0.0f, 0x1.a2e676p-3f, 0.0f, 0x1.5d7578p-23f, 0x1.a083fap-21f,
     0.0f, 0.0f, 0x1.63798ep-97f, 0.0f, 0x1.b14d86p-28f, 0x1.a240f8p-57f,
     0x1.2f157ep-20f, 0.0f, 0.0f, 0x1.775634p-108f, 0x1.4f32eap-94f, 0.0f,
     0x1.1c4946p-84f, 0.0f, 0.0f, 0x1.3a16f6p-121f, 0.0f, 0.0f, 0x1.d41d88p-126f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d3aecep-81f, 0x1.548048p-49f, 0.0f, 0.0f,
     0x1.6a980cp-26f, 0.0f, 0.0f, 0x1.4c174cp-68f, 0.0f, 0x1.1fdf68p-108f,
     0x1.d31d22p-50f, 0.0f, 0x1.e2edc4p-96f, 0.0f, 0.0f, 0x1.948e62p-13f,
     0x1.ee0018p-80f, 0.0f, 0.0f, 0x1.8ac992p-109f, 0x1.e2889cp-42f, 0.0f, 0.0f,
     0x1.588d6cp-45f, 0.0f, 0x1.f3202cp-80f, 0.0f, 0x1.ec160cp-103f, 0x1.fc7d3ep-57f,
     0.0f, 0.0f, 0x1.461f72p-83f, 0.0f, 0x1.7a3c92p-99f, 0.0f, 0.0f, 0x1.dcd2a4p-96f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d980ep-122f, 0x1.7d7868p-41f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7297a2p-55f, 0.0f, 0x1.eb8d92p-112f, 0x1.dc2594p-114f, 0x1.993884p-104f,
     0.0f, 0.0f, 0.0f, 0x1.b46fa8p-68f, 0x1.8d7f9p-70f, 0x1.731ceap-25f,
     0x1.9291a4p-79f, 0x1.8b41dcp-82f, 0x1.5a2c88p-122f, 0x1.271726p-103f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.5fdcb6p-66f, 0x1.a2e858p-82f, 0x1.6b05f2p-86f,
     0x1.6a54a2p-118f, 0.0f, 0x1.39e076p-38f, 0.0f, 0.0f, 0.0f, 0x1.6470c2p-76f,
     0x1.46c90ep-1f, 0x1.fee2b8p-35f, 0x1.38216cp-108f, 0.0f, 0x1.82b97p-35f, 0.0f,
     0.0f, 0x1.7cd002p-102f, 0.0f, 0.0f, 0x1.0c79dap-76f, 0.0f, 0x1.d5bccap-98f,
     0x1.fbeb06p-57f, 0.0f, 0x1.376a4ap-80f, 0x1.a0bbap-47f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e66858p-103f, 0.0f, 0.0f, 0x1.f2df66p-119f, 0x1.17e652p-32f, 0x1.4bd878p-40f,
     0.0f, 0x1.6b3fe6p-118f, 0.0f, 0.0f, 0.0f, 0x1.55c7f8p-123f, 0.0f, 0.0f,
     0x1.a3673cp-49f, 0x1.27144p-17f, 0.0f, 0x1.301d0ap-78f, 0x1.a520d2p-119f,
     0x1.a95d46p-115f, 0x1.e4e46p-27f, 0x1.700062p-65f, 0x1.cefaf8p-105f, 0.0f, 0.0f,
     0x1.c43e0ap-60f, 0x1.db9e24p-69f, 0x1.eb11e6p-22f, 0x1.9aa1fcp-126f,
     0x1.a76bc8p-24f, 0.0f, 0x1.ac30aap-114f, 0.0f, 0.0f, 0x1.47837p-77f,
     0x1.fe547p-6f, 0.0f, 0.0f, 0x1.e0fc08p-18f, 0.0f, 0.0f, 0x1.53886ap-117f,
     0x1.44e24p-42f, 0x1.9934bp-111f, 0x1.cf6de6p-88f, 0.0f, 0x1.9be1f2p-71f,
     0x1.3bd194p-76f, 0x1.dd31d8p-16f, 0x1.89057p-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5b2318p-97f, 0.0f, 0.0f, 0x1.6eaed8p-104f, 0.0f, 0x1.5b28b4p-2f, 0.0f,
     0x1.ed82c4p-124f, 0x1.43acccp-16f, 0.0f, 0.0f, 0.0f, 0x1.459658p-51f,
     0x1.1e6728p-101f, 0.0f, 0.0f, 0.0f, 0x1.2f9c28p-109f, 0.0f, 0x1.6d43d2p-73f,
     0.0f, 0x1.d7cfb4p-115f, 0.0f, 0x1.25901cp-91f, 0x1.b57d14p-83f, 0x1.267438p-11f,
     0x1.e0e104p-81f, 0x1.1090c4p-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b60336p-77f, 0x1.9ac94p-113f, 0.0f, 0.0f, 0x1.b17d12p-27f, 0x1.030de6p-18f,
     0x1.d0d48ep-75f, 0x1.019ae6p-35f, 0.0f, 0x1.7f1c8ep-25f, 0.0f, 0.0f, 0.0f,
     0x1.0efc7ap-1f, 0.0f, 0x1.840f56p-1f, 0.0f, 0x1.ce8404p-85f, 0x1.11c768p-51f,
     0.0f, 0.0f, 0x1.57e282p-45f, 0x1.6288aep-47f, 0.0f, 0x1.f90552p-101f,
     0x1.a5fb16p-113f, 0x1.dda99cp-80f, 0.0f, 0x1.20a4eap-99f, 0.0f, 0x1.f8f21p-121f,
     0.0f, 0x1.f22902p-54f, 0x1.d6a9b4p-26f, 0.0f, 0x1.af22eap-115f, 0.0f,
     0x1.cb21d4p-56f, 0.0f, 0x1.11af2p-3f, 0x1.13ae72p-45f, 0x1.8fc988p-93f,
     0x1.d769ap-81f, 0x1.a3d3eap-15f, 0.0f, 0x1.d7ca84p-44f, 0x1.16d9bap-75f, 0.0f,
     0x1.edfecap-59f, 0.0f, 0.0f, 0.0f, 0x1.f35b6cp-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bdb29ep-63f, 0.0f, 0x1.1c90d8p-22f, 0.0f, 0x1.8844fap-46f, 0x1.2d04e4p-89f,
     0.0f, 0x1.a9a45ap-10f, 0x1.3be808p-82f, 0x1.14ef9ap-116f, 0x1.7ade04p-32f,
     0x1.fff86p-102f, 0x1.ec7ba2p-66f, 0x1.a57ebap-20f, 0.0f, 0x1.374a24p-118f, 0.0f,
     0x1.7a164ep-87f, 0.0f, 0.0f, 0.0f, 0x1.315618p-94f, 0x1.f6307ep-94f, 0.0f,
     0x1.d7aa68p-68f, 0.0f, 0x1.e658a8p-87f, 0.0f, 0x1.927958p-91f, 0.0f,
     0x1.fd3324p-48f, 0x1p0f, 0x1.f1f7c6p-16f, 0.0f, 0x1.b0e88cp-80f, 0x1.653f56p-85f,
     0.0f, 0x1.fa9568p-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f6099p-50f, 0.0f,
     0x1.069756p-108f, 0.0f, 0.0f, 0.0f, 0x1.1a556ep-112f, 0x1.5d2eaep-101f,
     0x1.d018d2p-24f, 0x1.1625b2p-125f, 0x1.5a5ce6p-3f, 0x1.63f108p-102f, 0.0f, 0.0f,
     0.0f, 0x1.92852ep-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fa636cp-23f,
     0x1.01f518p-18f, 0x1.734a76p-115f, 0.0f, 0.0f, 0x1.f4b806p-21f, 0x1.dfc40cp-65f,
     0.0f, 0.0f, 0x1.b11364p-69f, 0x1.ee1cd2p-66f, 0.0f, 0x1.7a2326p-19f,
     0x1.2b3d2p-49f, 0x1.8a83b4p-61f, 0x1.152ee6p-92f, 0x1.cbd39ep-84f,
     0x1.872db6p-55f, 0x1.cb36aep-1f, 0x1.a4ee94p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.5f2a78p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dd4a7ap-106f,
     0x1.17c4b2p-34f, 0x1.81ac7cp-121f, 0.0f, 0x1.216dccp-49f, 0x1.d43e8ap-118f,
     0x1.4edf92p-99f, 0.0f, 0.0f, 0x1.59cf42p-69f, 0x1.212214p-54f, 0x1.21cb04p-46f,
     0.0f, 0x1.ddafaap-89f, 0x1.00264p-115f, 0x1.c9d312p-79f, 0x1.6e58aap-21f, 0.0f,
     0x1.bedca8p-79f, 0x1.bde376p-85f, 0.0f, 0x1.59b47ep-46f, 0.0f, 0.0f,
     0x1.75ee8p-61f, 0.0f, 0x1.cd038p-102f, 0x1.d52014p-86f, 0.0f, 0x1.78707ep-105f,
     0x1.4fba7ap-9f, 0x1.8b369cp-86f, 0.0f, 0x1p0f, 0.0f, 0x1.f1a6f6p-4f,
     0x1.2e843cp-106f, 0x1.c4da06p-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b1a0bap-2f, 0x1.c98c46p-39f, 0.0f, 0x1.b9540cp-8f, 0.0f, 0.0f,
     0x1.19d7c6p-116f, 0.0f, 0.0f, 0.0f, 0x1.6eb63ap-99f, 0.0f, 0x1.0ef708p-44f, 0.0f,
     0.0f, 0.0f, 0x1.79fb7ap-32f, 0.0f, 0.0f, 0x1.128d22p-111f, 0x1.2bdde8p-112f,
     0x1.f9ed56p-43f, 0.0f, 0x1.680fc4p-69f, 0.0f, 0x1.8c6cdcp-68f, 0.0f,
     0x1.ad22a4p-50f, 0.0f, 0.0f, 0x1.9c8e14p-97f, 0.0f, 0.0f, 0x1.de45e2p-116f,
     0x1.063f08p-12f, 0x1.5e6392p-11f, 0x1.d6b24p-77f, 0.0f, 0x1.0c1d1ep-89f,
     0x1.963e9ep-72f, 0x1.c9aaf6p-47f, 0x1.1191ap-26f, 0.0f, 0x1.354838p-11f, 0.0f,
     0x1.6473bap-47f, 0x1.1847f6p-114f, 0.0f, 0x1.2d655cp-27f, 0x1.b5bc74p-17f, 0.0f,
     0x1.01fbecp-44f, 0.0f, 0x1.dd5b1cp-97f, 0.0f, 0x1.f906dep-102f, 0.0f,
     0x1.7fd4ecp-2f, 0x1.21fd6ap-55f, 0x1.708a6p-7f, 0x1.f2f24ep-105f, 0.0f,
     0x1.a1c9aep-3f, 0.0f, 0x1.eb6fa2p-59f, 0x1.c7f8a2p-112f, 0x1.ea1e26p-65f,
     0x1.3e3a26p-2f, 0x1.74d826p-24f, 0x1.ab7acap-104f, 0x1.18c42ap-98f, 0.0f, 0.0f,
     0.0f, 0x1.71322ep-58f, 0.0f, 0x1.be7a3p-29f, 0x1.a73c9cp-41f, 0x1.172c9p-14f,
     0x1.66bb96p-64f, 0.0f, 0.0f, 0x1.6f0d9ep-113f, 0.0f, 0.0f, 0x1.8ba89ap-42f,
     0x1.da531ep-99f, 0.0f, 0x1.3fa8b4p-115f, 0.0f, 0.0f, 0.0f, 0x1.03aa82p-90f, 0.0f,
     0.0f, 0x1.1276ep-55f, 0x1.f870d6p-95f, 0x1.43e828p-106f, 0x1.1e96d2p-64f, 0.0f,
     0x1.05e6bcp-91f, 0.0f, 0x1.edd36cp-92f, 0.0f, 0x1.c551bcp-47f, 0.0f,
     0x1.58e684p-1f, 0.0f, 0x1.4cd384p-94f, 0.0f, 0x1.338364p-33f, 0.0f,
     0x1.0da552p-15f, 0x1.6a248ap-51f, 0x1.63c204p-115f, 0x1.0c5258p-72f,
     0x1.a9f0dep-126f, 0x1.e0f04ap-77f, 0x1.e97p-103f, 0x1.4731aep-46f,
     0x1.e2e628p-47f, 0x1.fd2d48p-96f, 0.0f, 0.0f, 0x1.d0f55ep-100f, 0x1.d36884p-38f,
     0x1.fa0cdep-46f, 0x1.663192p-24f, 0x1.53161ap-47f, 0x1.f9ce26p-2f,
     0x1.04cc06p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.38ce1ep-26f, 0.0f, 0.0f,
     0x1.6f162ep-80f, 0x1.8df99p-15f, 0x1.44074cp-48f, 0x1.1c016cp-116f, 0.0f,
     0x1.76c53cp-24f, 0x1.957b16p-111f, 0x1.855dep-112f, 0x1.c29c36p-91f,
     0x1.c12d0ep-84f, 0.0f, 0x1.6929c2p-96f, 0.0f, 0x1.89c93ap-95f, 0x1.9fff88p-11f,
     0x1.9d7f3cp-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d96c4p-123f, 0.0f, 0.0f, 0.0f,
     0x1.ac1af4p-9f, 0.0f, 0x1.3dc596p-56f, 0x1.a1afbcp-69f, 0.0f, 0x1.4026e4p-79f,
     0x1.6d5d1ep-85f, 0x1.1d077p-100f, 0.0f, 0x1.98927ap-55f, 0x1.874088p-113f,
     0x1.2414e6p-6f, 0.0f, 0x1.a280ccp-74f, 0.0f, 0.0f, 0.0f, 0x1.972cfp-106f,
     0x1.b1ea94p-87f, 0x1.b5d162p-72f, 0x1.b39154p-82f, 0x1.4026c2p-58f,
     0x1.4d360ep-76f, 0.0f, 0.0f, 0x1.b1f5c4p-72f, 0x1.02b67ep-86f, 0.0f,
     0x1.dde39cp-73f, 0.0f, 0.0f, 0x1.95d334p-70f, 0x1.26770ap-93f, 0x1.f98d2p-101f,
     0.0f, 0x1.a33654p-64f, 0.0f, 0x1.cb948cp-76f, 0.0f, 0x1.4a5d2ap-4f,
     0x1.2b2516p-120f, 0.0f, 0.0f, 0x1.e81146p-107f, 0x1.746738p-83f, 0.0f,
     0x1.fa9cb8p-83f, 0.0f, 0.0f, 0x1.d5fbdp-30f, 0.0f, 0.0f, 0x1.70cfp-116f, 0.0f,
     0.0f, 0x1.24890cp-91f, 0.0f, 0x1.913378p-20f, 0x1.372512p-3f, 0.0f,
     0x1.b431b6p-49f, 0.0f, 0x1.5cc228p-116f, 0x1.83cda4p-22f, 0x1.cfc02ap-120f, 0.0f,
     0.0f, 0x1.2dcb94p-51f, 0x1.9eaf6cp-67f, 0.0f, 0.0f, 0x1.a7970ap-58f,
     0x1.e550d2p-17f, 0x1.810a6ep-111f, 0.0f, 0x1.706366p-108f, 0.0f, 0.0f,
     0x1.ab61d4p-122f, 0.0f, 0x1.660494p-103f, 0.0f, 0.0f, 0x1.59ead8p-14f,
     0x1.4f1c08p-58f, 0x1.250406p-68f, 0x1.f60f28p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.731c7cp-5f, 0x1.2cfc54p-106f, 0x1.790cc4p-6f, 0x1.7977c4p-119f,
     0x1.989c46p-19f, 0x1.5d2edp-81f, 0.0f, 0.0f, 0x1.45ca06p-72f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.afdfd2p-43f, 0x1.d17bdp-108f, 0.0f, 0x1.e2c9fep-100f,
     0x1.ac92ecp-55f, 0x1.406f5ap-83f, 0.0f, 0.0f, 0x1.d5aae2p-28f, 0.0f, 0.0f, 0.0f,
     0x1.b5b22ep-72f, 0.0f, 0x1.e8d928p-44f, 0x1.d0e7f6p-48f, 0.0f, 0.0f,
     0x1.76145ep-93f, 0.0f, 0x1.76b74ep-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.994902p-48f,
     0.0f, 0x1.948afep-118f, 0.0f, 0x1.4b110ap-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d0ccf4p-121f, 0.0f, 0.0f, 0x1.6542b2p-77f, 0.0f,
     0x1.c361f4p-90f, 0.0f, 0x1.da3a8ap-27f, 0x1.6ebbc8p-98f, 0x1.fcb23ep-118f,
     0x1p0f, 0x1.d9a8cep-8f, 0x1.86a5d4p-24f, 0x1.644b66p-56f, 0.0f, 0x1.c795c4p-39f,
     0x1.3f39ecp-121f, 0x1.d0ac36p-31f, 0x1.4f56fep-10f, 0x1.91143ep-24f,
     0x1.742b94p-52f, 0x1.de9046p-100f, 0.0f, 0.0f, 0x1.efc718p-88f, 0x1.8b6cc2p-117f,
     0x1.b2518p-8f, 0.0f, 0.0f, 0x1.2a299cp-119f, 0.0f, 0x1.5b449ap-102f,
     0x1.687c2ap-9f, 0x1.84f63ep-111f, 0x1.54cb78p-92f, 0x1.ac9c72p-124f, 0.0f, 0.0f,
     0x1.947c46p-99f, 0.0f, 0.0f, 0x1.ae585ap-56f, 0x1.8e669ap-89f, 0x1.c969ap-38f,
     0x1.83a7b6p-110f, 0.0f, 0.0f, 0x1.d1c88ap-72f, 0x1.46fbc4p-118f, 0.0f,
     0x1.bea474p-13f, 0.0f, 0x1.c42184p-71f, 0.0f, 0x1.51e33ep-56f, 0x1.d04d14p-16f,
     0x1.a7961ep-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.44bfep-60f, 0x1.9927ep-99f,
     0x1.ff1c7ep-35f, 0x1.dfbe3ap-17f, 0x1.bce3c6p-8f, 0.0f, 0.0f, 0x1.225fap-5f,
     0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ce95cp-97f, 0.0f, 0x1.62fb36p-42f,
     0x1.acf4bp-5f, 0x1.b1b946p-9f, 0.0f, 0x1.dc2f5ap-69f, 0x1.9005e4p-98f,
     0x1.7ea1d6p-110f, 0x1.82b148p-35f, 0.0f, 0x1.ba5218p-115f, 0x1.3bc9a2p-125f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.993ecp-79f, 0.0f, 0x1.bac4ep-73f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.273b86p-124f, 0x1.e0be74p-88f, 0x1.6fd2b2p-35f, 0x1.759684p-33f,
     0x1.5e6a3p-121f, 0x1.eefaecp-76f, 0.0f, 0.0f, 0x1.6a942ap-79f, 0x1.786afep-47f,
     0.0f, 0x1.9a7ad4p-83f, 0.0f, 0x1.139bc8p-65f, 0x1.a8b656p-108f, 0x1.b47d24p-101f
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
            tmp1 = Sleef_sinpif4_u05avx2128(tmp0);
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
    printf("Sleef_sinpif4_u05avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_sinpif4_u05avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
