/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_erfcf4_u15kvx.c --function Sleef_erfcf4_u15kvx \
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
     0.0f, 0x1.553714p-124f, 0x1.9cf104p-49f, 0.0f, 0x1.c9aca2p-76f, 0.0f,
     0x1.e34442p-75f, 0.0f, 0x1.71c7f2p-76f, 0.0f, 0x1.576e28p-110f, 0x1.8f9846p-71f,
     0.0f, 0x1.daadc8p-36f, 0.0f, 0x1.82594cp-124f, 0x1.da8d7cp-110f, 0.0f,
     0x1.558434p-4f, 0.0f, 0.0f, 0x1.5ed3fap-104f, 0.0f, 0.0f, 0x1.505df4p-42f,
     0x1.9af8ep-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.447ddap-15f,
     0x1.4a6ba6p-88f, 0.0f, 0.0f, 0.0f, 0x1.e8726p-9f, 0x1.5ec26cp-7f, 0.0f, 0.0f,
     0.0f, 0x1.73e534p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1fd048p-14f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6cc904p-88f, 0x1.b4df74p-68f, 0.0f,
     0x1.ee5c78p-49f, 0.0f, 0x1.19b3acp-15f, 0x1.d517b4p-88f, 0.0f, 0.0f,
     0x1.c2b79cp-73f, 0.0f, 0x1.29dd76p-64f, 0.0f, 0x1.f4b87ap-126f, 0.0f,
     0x1.2d5b6p-101f, 0x1.b6e20ep-83f, 0.0f, 0.0f, 0.0f, 0x1.4d02e2p-56f, 0.0f,
     0x1.1b14a2p-101f, 0x1.874a16p-53f, 0x1.abbe1p-81f, 0x1.fef68p-13f,
     0x1.cb077p-75f, 0.0f, 0.0f, 0.0f, 0x1.e17fbp-83f, 0.0f, 0x1.be7edep-66f, 0.0f,
     0x1.ad192cp-66f, 0x1.cc0a1cp-56f, 0.0f, 0x1.ea78dap-96f, 0x1.e1cbb8p-88f,
     0x1.bfc78ep-4f, 0.0f, 0x1.df4ea8p-61f, 0x1.cb6f2p-62f, 0.0f, 0.0f,
     0x1.68aa0cp-15f, 0x1.fd1fbap-68f, 0x1.46affap-88f, 0x1.89b1b6p-56f,
     0x1.7d048ep-112f, 0.0f, 0x1.22105ap-94f, 0x1.270cd8p-77f, 0.0f, 0x1.e4cd86p-63f,
     0.0f, 0x1.aa36d8p-85f, 0x1.bee42ep-11f, 0x1.1a7562p-103f, 0x1.01263ep-118f,
     0x1.3b5928p-93f, 0.0f, 0.0f, 0x1.46d14cp-119f, 0.0f, 0.0f, 0x1.093396p-70f, 0.0f,
     0x1.40af5ap-56f, 0x1.089c1ap-8f, 0.0f, 0.0f, 0x1.5d9df6p-32f, 0.0f, 0.0f,
     0x1.95ff54p-95f, 0x1.66985ap-68f, 0.0f, 0x1.bd8fbep-13f, 0x1p0f, 0.0f, 0.0f,
     0.0f, 0x1.a63594p-95f, 0.0f, 0x1.5cd8a4p-51f, 0.0f, 0.0f, 0x1.aac3cap-36f, 0.0f,
     0.0f, 0x1.a7a1a2p-106f, 0.0f, 0x1.5bba0ap-2f, 0.0f, 0.0f, 0x1.1b37a8p-89f,
     0x1.f433eap-28f, 0x1.869e26p-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f27bbap-41f,
     0x1.53ff7ep-108f, 0x1.b30e0ap-103f, 0.0f, 0.0f, 0.0f, 0x1.ae73e6p-16f, 0.0f,
     0x1.1ca17ap-56f, 0.0f, 0.0f, 0x1.d298cep-4f, 0.0f, 0.0f, 0x1.14ffdap-68f, 0.0f,
     0x1.27e274p-18f, 0x1.9fa3ap-122f, 0x1.84c254p-77f, 0.0f, 0.0f, 0x1.313126p-61f,
     0x1.a921a6p-105f, 0x1.c77f74p-108f, 0x1.40de5ap-107f, 0.0f, 0x1.f6b364p-36f,
     0x1.7d173ap-53f, 0x1.1dea44p-36f, 0x1.7b150ep-15f, 0x1.ef811ap-99f,
     0x1.934334p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c4916ep-65f, 0.0f, 0x1.b16b0cp-122f,
     0x1.bfe74p-92f, 0.0f, 0.0f, 0.0f, 0x1.18e2f6p-91f, 0.0f, 0x1.aa6f3ap-43f,
     0x1.7314dcp-38f, 0x1.afc9fcp-56f, 0x1.1e7438p-122f, 0x1.07f994p-74f,
     0x1.e67898p-67f, 0.0f, 0x1.a3f33ep-41f, 0x1.d4bb98p-54f, 0.0f, 0.0f,
     0x1.775332p-87f, 0.0f, 0x1.3e1c94p-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5944fep-15f, 0.0f, 0x1.827cap-106f, 0x1.7637a2p-1f, 0x1.656c08p-119f,
     0x1.99e4e4p-8f, 0x1.f93642p-60f, 0.0f, 0.0f, 0x1.bdd026p-96f, 0x1.6ffbb2p-43f,
     0.0f, 0x1.0d1b0ep-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4c518p-26f, 0x1.d2fb8ep-14f,
     0.0f, 0.0f, 0x1.559b02p-82f, 0.0f, 0x1.0ab76p-108f, 0x1.8ae8p-15f,
     0x1.0d5166p-88f, 0x1.132d3ap-36f, 0.0f, 0x1.4d7802p-118f, 0x1.8f859ep-81f,
     0x1.39a59p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d25f1ep-122f,
     0x1.dc3548p-73f, 0x1.0f4384p-112f, 0.0f, 0.0f, 0x1.e0848cp-53f, 0x1.b13f44p-4f,
     0.0f, 0x1.cb3e78p-98f, 0.0f, 0.0f, 0.0f, 0x1.f6fb74p-85f, 0x1.20beep-78f,
     0x1.cfbd2p-44f, 0x1.621ee6p-33f, 0.0f, 0x1.1444e6p-79f, 0x1.302e5p-54f, 0.0f,
     0.0f, 0.0f, 0x1.02a4b4p-34f, 0x1.f8314ap-16f, 0.0f, 0x1.07f03ep-68f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.c7fc02p-72f, 0x1.b08e4ep-73f, 0.0f, 0x1.9441a2p-126f,
     0x1.d7ed1p-121f, 0.0f, 0x1.9edda4p-121f, 0x1.687482p-126f, 0x1.1d7cfp-68f, 0.0f,
     0x1.42412ap-37f, 0x1.e40636p-54f, 0.0f, 0.0f, 0x1.2a389ap-62f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.925634p-36f, 0x1.abe67cp-45f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1845eap-33f, 0.0f, 0.0f, 0x1.fc0f1cp-45f, 0x1.8c08dep-14f, 0x1.178932p-66f,
     0x1.497172p-104f, 0.0f, 0.0f, 0x1.6cb4bcp-57f, 0x1.e31136p-102f, 0.0f, 0.0f,
     0x1.a9224cp-102f, 0x1.a27e0ep-103f, 0.0f, 0.0f, 0.0f, 0x1.885ebep-111f,
     0x1.bddfe8p-68f, 0.0f, 0.0f, 0.0f, 0x1.4cfdbcp-20f, 0.0f, 0x1.6f2e0ap-102f,
     0x1.c75526p-104f, 0x1.f42f04p-31f, 0x1.6dcc48p-126f, 0x1.6f2fa4p-59f,
     0x1.b2075ap-31f, 0x1.36615ep-16f, 0x1.97d92cp-68f, 0x1.68590ep-57f,
     0x1.92006cp-85f, 0x1.521a5ep-7f, 0.0f, 0x1.e9f28ap-105f, 0x1.eee4ap-50f, 0.0f,
     0x1.6c1612p-75f, 0x1.3f1716p-123f, 0x1.507b6ep-83f, 0x1.7894f6p-62f,
     0x1.adbfaep-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.264ed4p-27f, 0.0f,
     0x1.d3e564p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a5248ep-70f, 0.0f, 0.0f,
     0x1.a4680ap-109f, 0x1.cf6fa2p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8ec0a6p-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fa7468p-118f, 0.0f,
     0x1.a00938p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.612094p-49f, 0.0f, 0.0f,
     0x1.9c423ap-55f, 0x1.667418p-45f, 0x1.785c84p-56f, 0x1.ab3bap-96f, 0.0f, 0.0f,
     0.0f, 0x1.e280fap-92f, 0x1.d4bb5cp-117f, 0.0f, 0.0f, 0x1.132c48p-83f,
     0x1.caf2e4p-83f, 0x1.f79e54p-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.dd6096p-53f, 0.0f, 0x1.10015ep-6f, 0.0f, 0.0f, 0.0f,
     0x1.68413cp-11f, 0x1.6c51fcp-59f, 0.0f, 0x1.00259ep-101f, 0.0f, 0.0f, 0.0f,
     0x1.bac1a4p-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3a7db4p-48f, 0.0f,
     0x1.30843ap-115f, 0.0f, 0.0f, 0x1.71e2f8p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.24ab92p-58f, 0.0f, 0.0f, 0x1.696e24p-53f, 0.0f, 0x1.a38ecp-30f,
     0x1.b8c078p-79f, 0x1.4c6136p-108f, 0x1.67c61ap-86f, 0x1.a162e4p-16f,
     0x1.f21216p-58f, 0.0f, 0x1.fcbd12p-21f, 0x1.760828p-125f, 0.0f, 0x1.d6bb36p-78f,
     0x1.4bb79p-14f, 0.0f, 0x1.3afbe4p-13f, 0.0f, 0x1.b49d48p-46f, 0.0f, 0.0f,
     0x1.4f6f4ep-35f, 0x1.12ff0ap-89f, 0.0f, 0x1.9e271ep-34f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ec0ae8p-56f, 0x1.2697e4p-94f, 0.0f, 0x1.55655ap-115f, 0x1.ef733ep-55f,
     0x1.0135c8p-43f, 0x1.e8b8aep-86f, 0x1.420c34p-104f, 0x1.4414fp-81f, 0.0f,
     0x1.074388p-96f, 0x1.45e26ap-17f, 0x1.eacf84p-14f, 0x1.57b5ccp-75f,
     0x1.b98016p-64f, 0x1.3d3366p-9f, 0x1.ff7832p-121f, 0.0f, 0.0f, 0.0f,
     0x1.dca2d4p-7f, 0x1.351e98p-31f, 0.0f, 0.0f, 0x1.bd660ap-84f, 0.0f,
     0x1.9caeb6p-107f, 0x1.5a0df6p-70f, 0x1.0ca43ap-22f, 0x1.8cb624p-48f, 0.0f,
     0x1.04a996p-14f, 0.0f, 0.0f, 0x1.283d0ep-112f, 0x1.5e101ep-48f, 0x1.4d35acp-104f,
     0x1.fa8112p-28f, 0x1.b3417p-3f, 0.0f, 0.0f, 0.0f, 0x1.ca6a26p-68f,
     0x1.d7495ep-30f, 0x1.8d61eep-14f, 0.0f, 0x1.0d9804p-2f, 0.0f, 0x1.43e6fep-25f,
     0.0f, 0x1.27fc5p-15f, 0.0f, 0.0f, 0x1.54097p-8f, 0.0f, 0.0f, 0x1.2780eap-24f,
     0.0f, 0x1.02483p-32f, 0.0f, 0x1.09747ap-41f, 0.0f, 0.0f, 0.0f, 0x1.c94cep-35f,
     0x1.cbd0eap-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b6594ap-107f, 0x1.2f7562p-70f,
     0x1.8aaf3p-10f, 0x1.d4bcf6p-124f, 0.0f, 0.0f, 0x1.82f8fap-113f, 0x1.3f4d64p-11f,
     0.0f, 0.0f, 0.0f, 0x1.802daep-47f, 0.0f, 0.0f, 0x1.ccfc38p-76f, 0.0f, 0.0f, 0.0f,
     0x1.e13884p-7f, 0x1.372d0cp-82f, 0x1.0125dep-73f, 0.0f, 0.0f, 0.0f,
     0x1.47dba4p-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bd2672p-23f, 0x1.f3ac2ep-107f,
     0.0f, 0.0f, 0.0f, 0x1.5b1676p-32f, 0x1.abfc88p-13f, 0.0f, 0x1.a29212p-20f,
     0x1.d6e19ep-103f, 0.0f, 0.0f, 0.0f, 0x1.45705cp-25f, 0x1.669eacp-85f, 0.0f,
     0x1.25edcap-6f, 0x1.4c487ep-39f, 0.0f, 0x1.144194p-7f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.0a9edcp-34f, 0x1.30ffbap-110f, 0x1.c9688ep-49f, 0x1.244662p-70f,
     0x1.700ad2p-57f, 0x1.7d7a56p-77f, 0.0f, 0x1.2d5b02p-5f, 0x1.e8691cp-22f,
     0x1.644c5p-53f, 0.0f, 0x1.9f889ap-8f, 0x1.52b232p-111f, 0.0f, 0.0f,
     0x1.74b1d6p-124f, 0x1.1189p-122f, 0.0f, 0.0f, 0x1.62cf68p-39f, 0x1.7ba8eep-66f,
     0x1.412dc8p-115f, 0x1.08679ep-30f, 0x1.ceee4ep-117f, 0.0f, 0x1.4686fcp-58f, 0.0f,
     0.0f, 0x1.1579fp-12f, 0.0f, 0.0f, 0x1.1ccdbap-33f, 0x1.5644ecp-98f, 0.0f, 0.0f,
     0x1.d66996p-93f, 0x1.f986bep-106f, 0.0f, 0.0f, 0.0f, 0x1.c16eb2p-126f,
     0x1.7f86a8p-10f, 0x1.60957ap-57f, 0x1.a98b22p-74f, 0.0f, 0.0f, 0x1.393c8ep-22f,
     0.0f, 0.0f, 0.0f, 0x1.254338p-103f, 0x1.f04774p-4f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4de4dcp-91f, 0.0f, 0x1.29db8p-55f, 0x1.c79cd6p-88f, 0.0f, 0.0f,
     0x1.d1c7d8p-49f, 0.0f, 0x1.fb017ep-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.836418p-53f, 0x1.27bc4ap-96f, 0x1.5ddd72p-48f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.760bc6p-48f, 0x1.e1f44ep-63f, 0.0f, 0x1.c1c7e2p-113f, 0x1.19bea4p-58f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.6ee4cep-1f, 0.0f, 0x1.30c732p-48f, 0x1.26ed88p-99f,
     0x1.a2f5c6p-92f, 0x1.2b664ap-11f, 0x1.adb636p-72f, 0x1.37ee3p-5f,
     0x1.03dc0cp-87f, 0x1.5d5006p-33f, 0x1.ca3322p-123f, 0.0f, 0.0f, 0.0f,
     0x1.35aap-87f, 0.0f, 0x1.d935a4p-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.174b66p-79f,
     0.0f, 0x1.fea184p-7f, 0.0f, 0x1.330dc4p-16f, 0.0f, 0x1.4c23d8p-80f,
     0x1.5192a4p-42f, 0.0f, 0x1.9dcb68p-74f, 0.0f, 0x1.ab47fcp-43f, 0.0f, 0.0f,
     0x1.6eba1cp-101f, 0x1.5dbc4ap-26f, 0x1.2b5fc2p-94f, 0x1.ed8318p-6f,
     0x1.26678ep-78f, 0x1.332566p-115f, 0.0f, 0x1.074882p-73f, 0x1.012704p-45f, 0.0f,
     0.0f, 0x1.dabc88p-58f, 0x1.02419cp-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.447826p-35f,
     0x1.62e9fp-87f, 0.0f, 0.0f, 0x1.fa2b2p-84f, 0.0f, 0x1.13aa6cp-102f, 0.0f,
     0x1.3b8a9ap-1f, 0.0f, 0.0f, 0.0f, 0x1.e22b14p-24f, 0x1.dfcbe4p-125f,
     0x1.e45822p-20f, 0x1.7e9f7ap-99f, 0.0f, 0x1.ba33e2p-97f, 0.0f, 0.0f,
     0x1.3c9c9ep-110f, 0.0f, 0.0f, 0x1.1a847ap-97f, 0x1.f45a24p-36f, 0.0f, 0.0f,
     0x1.f25c5p-3f, 0x1.331e78p-30f, 0x1.0a6bf2p-98f, 0.0f, 0x1.cd4ccap-89f,
     0x1.5b745p-92f, 0x1.08fd26p-108f, 0x1.c5943p-50f, 0.0f, 0x1.7e9346p-105f,
     0x1.4aae38p-70f, 0x1.b6a5bep-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.428b86p-63f,
     0x1.129042p-33f, 0x1.efbcp-74f, 0.0f, 0x1.7134b4p-46f, 0x1.241496p-92f, 0.0f,
     0x1.72023p-117f, 0.0f, 0x1.8cc576p-25f, 0x1.66642cp-51f, 0x1.ed4b2ep-79f,
     0x1.e53cbcp-120f, 0x1.0c85f4p-65f, 0x1.2fcd0cp-102f, 0.0f, 0x1.d6c96ep-102f,
     0.0f, 0.0f, 0x1.28a9d2p-88f, 0.0f, 0.0f, 0x1.7cbd42p-22f, 0x1.31b34p-15f,
     0x1.e94f66p-64f, 0x1.1f0a8ep-70f, 0x1.3bf6cep-67f, 0.0f, 0x1.9f6c54p-110f,
     0x1.e7ef24p-34f, 0x1.6da932p-89f, 0.0f, 0.0f, 0.0f, 0x1.bf2464p-77f, 0x1p0f,
     0x1.581cd6p-8f, 0.0f, 0.0f, 0x1.ae6db6p-35f, 0x1.19e018p-17f, 0x1p0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e44edp-75f, 0x1.db7d2cp-2f, 0.0f, 0x1.38ca78p-17f,
     0x1.bdbd68p-113f, 0x1.f1ec82p-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.54497ep-46f, 0x1.18fbf6p-25f, 0x1.208e1ep-85f, 0x1.6a6c3cp-25f, 0.0f,
     0x1.55ade8p-58f, 0.0f, 0x1.636498p-108f, 0x1.91ccb6p-33f, 0.0f, 0.0f,
     0x1.3a4216p-84f, 0.0f, 0x1.010158p-19f, 0x1.6b9352p-9f, 0.0f, 0.0f, 0.0f,
     0x1.21c038p-60f, 0.0f, 0x1.464cf2p-107f, 0.0f, 0x1.a3b4d2p-52f, 0.0f, 0.0f, 0.0f,
     0x1.070324p-90f, 0x1.9b154cp-21f, 0x1.28646cp-65f, 0x1.89e162p-28f,
     0x1.e49d9ap-75f, 0.0f, 0x1.67e9f4p-43f, 0.0f, 0.0f, 0x1.108e5ap-118f, 0.0f,
     0x1.a8a02ep-108f, 0x1.e5d70ep-54f, 0.0f, 0.0f, 0x1.7e009cp-63f, 0x1.1a9894p-39f,
     0.0f, 0x1.48903ep-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.57006ap-34f, 0.0f,
     0x1.fc2d4ep-39f, 0x1.0a567cp-36f, 0x1.43e252p-59f, 0x1.30e09ap-71f, 0.0f,
     0x1.3fbfap-73f, 0x1.206d96p-90f, 0x1.b76bfep-114f, 0.0f, 0.0f, 0x1.ef3e5cp-44f,
     0.0f, 0x1.ed32c4p-73f, 0x1.62b2ap-82f, 0x1.f6dea4p-55f, 0x1.c2cd34p-4f,
     0x1.33a582p-80f, 0.0f, 0x1.b0dc3cp-50f, 0x1.140f1ap-76f, 0.0f, 0x1.c503fap-109f,
     0x1.2c4834p-47f, 0.0f, 0.0f, 0x1.c34966p-49f, 0x1.fd80a6p-23f, 0x1.df39eep-90f,
     0x1.18a3f2p-55f, 0.0f, 0x1.eb4a78p-58f, 0.0f, 0.0f, 0x1.594e46p-116f, 0.0f, 0.0f,
     0x1.78469p-106f, 0.0f, 0x1.f799e4p-98f, 0x1.d56c72p-11f, 0x1.dbf21ep-29f,
     0x1.76c392p-50f, 0.0f, 0x1.e0ee3cp-3f, 0x1.fe6cb8p-71f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d1d986p-43f, 0x1.49343ap-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.17ce5ep-22f, 0.0f, 0.0f, 0.0f, 0x1.b5f418p-116f, 0.0f, 0.0f, 0.0f,
     0x1.335aecp-66f, 0x1.e1484ep-68f, 0x1.395b9ap-100f, 0x1.e17ed2p-96f,
     0x1.187188p-90f, 0x1.36f3f6p-4f, 0x1.079a9ap-100f, 0x1.afd58cp-61f, 0.0f,
     0x1.72c6d2p-120f, 0x1.28aee6p-72f, 0x1.e6227ep-103f, 0x1.32e5d2p-69f,
     0x1.4e867p-18f, 0x1.bc032p-31f, 0x1.10551ap-35f, 0x1.75b962p-119f,
     0x1.25010ep-44f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.cf0bcep-86f, 0x1.5cff34p-89f,
     0.0f, 0x1.37f0c8p-32f, 0.0f, 0x1.eaba48p-38f
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
            tmp1 = Sleef_erfcf4_u15kvx(tmp0);
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
    printf("Sleef_erfcf4_u15kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_erfcf4_u15kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
