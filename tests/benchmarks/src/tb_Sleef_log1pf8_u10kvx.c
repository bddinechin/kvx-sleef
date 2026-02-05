/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_log1pf8_u10kvx.c --function Sleef_log1pf8_u10kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 8 --function-input-vector-size 8 --bench \
 *     --no-embedded-bin --target kv3
 *
 */
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float8_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float8_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1008];
static const float external_bench_wrapper_input_table_arg0[1008]  = {
     0.0f, 0x1.0daebcp-43f, 0x1.d5b74p-27f, 0x1.2927eep-29f, 0x1.240444p-89f,
     0x1.792fcap-60f, 0x1.c30f24p-60f, 0.0f, 0.0f, 0.0f, 0x1.82ab46p-95f,
     0x1.afc95ep-74f, 0.0f, 0x1.1a48eap-112f, 0x1.33a924p-90f, 0x1.981bc4p-85f,
     0x1.c05746p-4f, 0.0f, 0.0f, 0x1.2dcdaap-20f, 0.0f, 0.0f, 0x1.3b59bcp-59f,
     0x1.47fb58p-67f, 0.0f, 0.0f, 0x1.5e399p-72f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.66661p-17f, 0.0f, 0x1.e2e22cp-2f, 0.0f, 0x1.23ed54p-49f, 0x1.957898p-121f,
     0.0f, 0.0f, 0x1.60896cp-110f, 0.0f, 0.0f, 0.0f, 0x1.5170c8p-86f,
     0x1.1742f6p-102f, 0x1.68024cp-114f, 0x1.baa068p-40f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9f7d66p-51f, 0.0f, 0.0f, 0.0f, 0x1.2c016ep-121f, 0x1.2086d8p-43f, 0.0f,
     0x1.0c2278p-68f, 0.0f, 0x1.4aebe6p-126f, 0.0f, 0x1.85e66ap-109f, 0.0f,
     0x1.64a678p-67f, 0.0f, 0.0f, 0x1.c06dap-79f, 0.0f, 0x1.f333ap-37f,
     0x1.9bd76cp-19f, 0.0f, 0.0f, 0x1.64294cp-87f, 0.0f, 0x1.0b10eep-42f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.15bdf8p-44f, 0.0f, 0.0f, 0x1.40f908p-84f, 0.0f, 0.0f, 0.0f,
     0x1.042772p-10f, 0.0f, 0x1.08fc64p-19f, 0.0f, 0x1.10f47ap-24f, 0.0f, 0.0f,
     0x1.3eb46ap-13f, 0.0f, 0x1.11588ap-122f, 0.0f, 0x1.869d92p-97f, 0.0f, 0.0f,
     0x1.cdd86p-70f, 0x1.dee2f8p-32f, 0.0f, 0x1.2ab64p-119f, 0x1.195fecp-64f,
     0x1.0e883ep-49f, 0x1.6f826ap-17f, 0.0f, 0x1.04e134p-30f, 0x1.0e333p-74f, 0.0f,
     0x1.87ab16p-19f, 0x1.ae26f2p-95f, 0.0f, 0x1.bdf846p-44f, 0x1.e6709p-119f, 0.0f,
     0.0f, 0x1.51fb4ep-13f, 0x1.1cb1e6p-12f, 0x1.d90564p-30f, 0x1.130646p-126f,
     0x1.abf0ccp-90f, 0.0f, 0.0f, 0.0f, 0x1.b51c4p-112f, 0x1.37e11p-39f, 0.0f, 0.0f,
     0.0f, 0x1.852bd2p-106f, 0x1.61ce3ap-26f, 0.0f, 0x1.546718p-125f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c0a354p-39f, 0.0f, 0x1.2c206p-125f, 0.0f, 0.0f,
     0x1.8e3b12p-51f, 0x1.85febcp-48f, 0.0f, 0.0f, 0.0f, 0x1.e9e8dp-38f, 0.0f, 0.0f,
     0x1.fea498p-106f, 0x1.00c494p-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1c4f0ap-108f,
     0x1.3faaaep-113f, 0.0f, 0.0f, 0.0f, 0x1.ab37aap-96f, 0.0f, 0x1.3ee23cp-90f, 0.0f,
     0.0f, 0.0f, 0x1.386e0cp-2f, 0.0f, 0.0f, 0.0f, 0x1.c283eep-4f, 0x1.29feb2p-93f,
     0x1.22de98p-97f, 0x1.a25bd2p-94f, 0x1.4c82fep-13f, 0x1.b29906p-12f, 0.0f, 0.0f,
     0x1.8e47c2p-87f, 0.0f, 0x1.2b041p-51f, 0x1.a1eb38p-72f, 0.0f, 0.0f,
     0x1.0fc46cp-83f, 0x1.358626p-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.08625p-17f, 0.0f, 0x1.09c858p-44f, 0.0f, 0x1.7b98b4p-6f, 0.0f,
     0x1.4b5a76p-16f, 0x1.46d72cp-37f, 0.0f, 0.0f, 0.0f, 0x1.738348p-5f,
     0x1.5b75ccp-83f, 0.0f, 0x1.15a5b6p-64f, 0x1.b1d1d6p-85f, 0.0f, 0x1.d31d3p-54f,
     0.0f, 0x1.a99134p-105f, 0x1.8cdadp-115f, 0x1.6308dcp-38f, 0x1.24375ep-72f, 0.0f,
     0.0f, 0.0f, 0x1.758f1ep-15f, 0x1.72b788p-70f, 0x1.35ccdap-50f, 0x1.54ebeep-29f,
     0x1.3299fep-81f, 0.0f, 0x1.3d7b18p-20f, 0x1.640baep-22f, 0.0f, 0x1.550582p-58f,
     0x1.0a0ba2p-69f, 0x1.b285fep-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a320e8p-4f, 0.0f, 0.0f, 0.0f, 0x1.abab6ap-93f, 0.0f, 0x1.f2461p-19f,
     0x1.52ec9ep-95f, 0x1.fbf904p-97f, 0.0f, 0x1.c17f62p-101f, 0x1.bbb056p-28f,
     0x1.a90df4p-54f, 0x1.f34098p-55f, 0.0f, 0.0f, 0x1.9208c8p-45f, 0.0f, 0.0f,
     0x1.309e18p-46f, 0.0f, 0x1.bf92cep-92f, 0.0f, 0x1.021168p-81f, 0x1.b91048p-24f,
     0x1.ed6a4p-98f, 0x1.a0477cp-64f, 0.0f, 0.0f, 0x1.e1270cp-92f, 0x1.7944f6p-53f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f2289cp-102f, 0x1.e2bd84p-126f, 0.0f,
     0x1.db3b7ep-99f, 0x1.8ca83cp-102f, 0.0f, 0x1.394d5ap-125f, 0.0f, 0x1.c44f04p-99f,
     0.0f, 0.0f, 0x1.0bd3c6p-88f, 0x1.6c15cap-1f, 0x1.685bf4p-73f, 0.0f,
     0x1.5af522p-52f, 0x1.2f15e4p-34f, 0x1.5d63aap-96f, 0x1.0140eep-10f,
     0x1.772f68p-58f, 0.0f, 0x1.518284p-116f, 0.0f, 0x1.ad613cp-54f, 0.0f, 0.0f,
     0x1.cc383ep-35f, 0.0f, 0x1.40cfe8p-81f, 0x1.9d6362p-65f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.9f28b4p-122f, 0.0f, 0x1.b2ded8p-105f, 0x1.f5661cp-1f, 0x1.8f0ecp-103f,
     0.0f, 0x1.f3ad24p-106f, 0.0f, 0.0f, 0.0f, 0x1.35dceep-95f, 0x1.4b5ddp-72f, 0.0f,
     0x1.ad0e04p-74f, 0.0f, 0.0f, 0x1.71013p-102f, 0x1.5ad25p-55f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d86c78p-36f, 0x1.820712p-103f, 0.0f, 0.0f, 0x1.cfe314p-91f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.67491ap-6f, 0.0f, 0.0f, 0.0f, 0x1.fdcc2p-51f,
     0x1.551cc2p-2f, 0.0f, 0x1.83cf28p-15f, 0x1.02352cp-89f, 0x1.e7129p-64f,
     0x1.0d281ep-111f, 0x1.2c1eb8p-61f, 0.0f, 0x1.7b6b18p-73f, 0.0f, 0x1.12d18ap-5f,
     0x1.2c5d7cp-85f, 0.0f, 0x1.b1f5dap-8f, 0x1.f7e7f8p-29f, 0x1.433188p-93f,
     0x1.f315a6p-107f, 0.0f, 0.0f, 0.0f, 0x1.d6d748p-96f, 0.0f, 0x1.e9ec0ap-75f,
     0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.98c8cp-96f, 0x1.4821d4p-103f, 0.0f,
     0x1.50792cp-63f, 0x1.5b426cp-88f, 0.0f, 0x1.402f98p-93f, 0x1.4be3ccp-125f, 0.0f,
     0x1.704342p-119f, 0x1.d71098p-33f, 0x1.0936a8p-64f, 0x1.0f4316p-55f,
     0x1.2f27bp-82f, 0x1.79d616p-24f, 0x1.0164bap-33f, 0.0f, 0x1.bef28cp-30f,
     0x1.6bae5cp-76f, 0.0f, 0.0f, 0x1.0ee7b6p-50f, 0.0f, 0.0f, 0x1.231948p-93f, 0.0f,
     0x1.5cc1e8p-42f, 0.0f, 0.0f, 0x1.748c9p-118f, 0.0f, 0x1.fe9804p-28f, 0.0f,
     0x1.b6e814p-90f, 0.0f, 0.0f, 0.0f, 0x1.f38d9p-63f, 0.0f, 0x1.c68d1p-60f,
     0x1.1e7adep-60f, 0x1.144c9ap-61f, 0x1.adacdp-10f, 0x1.97db12p-121f, 0.0f, 0x1p0f,
     0.0f, 0.0f, 0x1.ad80c2p-52f, 0x1.52a13cp-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.878a06p-79f, 0.0f, 0x1.636666p-111f, 0x1.4f01e4p-121f, 0.0f, 0.0f,
     0x1.340286p-66f, 0x1.f1468cp-92f, 0x1.1a9bccp-7f, 0x1.e4dc2ap-20f,
     0x1.2ee8f6p-46f, 0x1.0c2e1ep-22f, 0.0f, 0x1.15e6ecp-98f, 0.0f, 0.0f,
     0x1.fe82b4p-55f, 0x1.68f8c2p-20f, 0x1.34fb16p-39f, 0x1.5411fcp-17f,
     0x1.23d27p-73f, 0.0f, 0.0f, 0.0f, 0x1.8946acp-39f, 0.0f, 0x1.01f7fp-117f, 0.0f,
     0x1.9d05fp-90f, 0.0f, 0x1.8030bp-83f, 0x1.975bfcp-59f, 0.0f, 0.0f,
     0x1.182ac8p-11f, 0x1.347066p-72f, 0.0f, 0x1.b7d1ep-76f, 0.0f, 0.0f, 0.0f,
     0x1.dcaaf2p-12f, 0.0f, 0x1.6767bp-103f, 0x1.82130ap-21f, 0x1.bb5ddcp-59f, 0.0f,
     0x1.56bcc8p-37f, 0x1.aea494p-89f, 0.0f, 0x1.dd49dp-49f, 0x1.535228p-24f, 0.0f,
     0x1.7ab952p-115f, 0.0f, 0x1.e021ep-49f, 0.0f, 0x1.f54bfap-29f, 0.0f, 0.0f,
     0x1.0d80d2p-11f, 0x1.452fbp-43f, 0.0f, 0x1.f4aa9p-26f, 0.0f, 0.0f,
     0x1.5abfd4p-91f, 0x1.dc6b7cp-117f, 0.0f, 0x1.bc76d8p-109f, 0.0f, 0x1.5c9ecep-1f,
     0x1.50a116p-111f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3e475p-15f, 0.0f,
     0x1.90ad2ep-48f, 0.0f, 0.0f, 0x1.d4ffcp-50f, 0x1.fefceep-10f, 0.0f,
     0x1.7e5fbep-76f, 0.0f, 0.0f, 0x1.1d6b42p-89f, 0x1.0d3902p-104f, 0x1.0dcebap-40f,
     0x1.eaf902p-90f, 0.0f, 0.0f, 0x1.28dca2p-62f, 0x1.dad288p-47f, 0x1.418e26p-23f,
     0x1.33a2d4p-73f, 0x1.d87be8p-113f, 0.0f, 0.0f, 0.0f, 0x1.cbd198p-36f, 0.0f,
     0x1.351622p-107f, 0x1.5f94bcp-20f, 0.0f, 0.0f, 0.0f, 0x1.47c302p-110f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.8069b4p-19f, 0.0f, 0.0f, 0x1.81e9b8p-61f, 0.0f,
     0x1.a96f3ep-111f, 0.0f, 0.0f, 0.0f, 0x1.d240a6p-12f, 0x1.5d9dc2p-74f,
     0x1.79798ep-102f, 0.0f, 0x1.910dcp-103f, 0.0f, 0x1.5439ecp-84f, 0x1.35178cp-123f,
     0.0f, 0x1.bcc582p-34f, 0.0f, 0x1.8a8c22p-100f, 0.0f, 0x1.2956bap-16f, 0.0f, 0.0f,
     0x1.e0b822p-126f, 0x1.840044p-16f, 0.0f, 0.0f, 0x1.b68386p-123f, 0.0f, 0.0f,
     0x1.43f0d8p-73f, 0x1.2a11d6p-98f, 0x1.d4469ep-59f, 0.0f, 0x1.a9ee2ep-99f,
     0x1.a20e1ep-3f, 0x1.c4f7eep-67f, 0.0f, 0x1.237d1ep-64f, 0x1.dfd10cp-44f, 0.0f,
     0x1.947714p-115f, 0.0f, 0x1.6bd1fcp-86f, 0x1.8864c2p-18f, 0x1.9ec84p-23f, 0.0f,
     0.0f, 0x1.ee3ca2p-112f, 0.0f, 0.0f, 0x1.af13f8p-52f, 0x1.074e76p-71f,
     0x1.a89502p-3f, 0.0f, 0x1.76582ap-61f, 0x1.4ba49ep-93f, 0.0f, 0x1.27e9b4p-12f,
     0.0f, 0x1.c72c6p-56f, 0x1.393f32p-23f, 0.0f, 0.0f, 0.0f, 0x1.fa2832p-73f,
     0x1.7ca56p-81f, 0x1.eac454p-91f, 0x1.1a6972p-66f, 0.0f, 0x1.d79c5p-26f, 0.0f,
     0x1.e49e7ep-7f, 0x1.ab11f6p-4f, 0x1.497b5cp-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0e2a9p-75f, 0x1.2d7dc8p-125f, 0.0f, 0x1.b11e9ep-109f, 0x1.3e6cfap-120f, 0.0f,
     0.0f, 0.0f, 0x1.d22d3cp-75f, 0x1.3f55c6p-8f, 0.0f, 0x1.898446p-51f,
     0x1.e0a3f4p-80f, 0x1.8292a4p-107f, 0.0f, 0x1.344e1ap-48f, 0x1.f8c71ap-98f,
     0x1.ef7764p-9f, 0x1.1e3602p-115f, 0x1.5e3c6ap-68f, 0x1.2dc4bp-100f, 0.0f, 0.0f,
     0x1.9de28cp-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.493f9p-25f, 0x1.7cf636p-73f,
     0.0f, 0.0f, 0x1.29517cp-112f, 0x1.1cf912p-19f, 0.0f, 0.0f, 0.0f, 0x1.c1a892p-66f,
     0.0f, 0.0f, 0.0f, 0x1.ec5eb2p-9f, 0x1.ceb10cp-51f, 0.0f, 0.0f, 0x1.4f6a88p-52f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.909eaep-65f,
     0x1.60e628p-53f, 0.0f, 0.0f, 0x1.c89a1ep-55f, 0.0f, 0x1.add3eep-100f,
     0x1.bf7d9cp-9f, 0.0f, 0x1.5c07dep-10f, 0.0f, 0.0f, 0x1.6ff68ep-89f,
     0x1.dfac9cp-50f, 0x1.883516p-20f, 0.0f, 0.0f, 0x1.58e524p-89f, 0.0f, 0.0f, 0.0f,
     0x1.67be5ep-35f, 0.0f, 0x1.b1c99cp-73f, 0x1.b3eecep-70f, 0.0f, 0.0f,
     0x1.54870ap-124f, 0x1.5191a4p-74f, 0.0f, 0.0f, 0x1.41527cp-121f, 0.0f,
     0x1.b56756p-17f, 0.0f, 0x1.f731cap-95f, 0x1.decebep-59f, 0x1.9adf64p-34f, 0.0f,
     0x1.4a092p-86f, 0x1.8e4d7ap-90f, 0.0f, 0x1.919d2cp-44f, 0.0f, 0.0f,
     0x1.185266p-99f, 0.0f, 0.0f, 0.0f, 0x1.9dd502p-95f, 0x1.3acb9ap-86f, 0.0f, 0.0f,
     0x1.a512dp-25f, 0x1.ec998cp-72f, 0x1.36a866p-44f, 0x1.15be5ap-63f, 0.0f,
     0x1.754858p-34f, 0.0f, 0.0f, 0x1.4b8ba2p-110f, 0x1.4e047cp-34f, 0.0f, 0.0f, 0.0f,
     0x1.7efaf2p-33f, 0.0f, 0.0f, 0.0f, 0x1.a4f752p-116f, 0.0f, 0.0f, 0x1.5b89c6p-82f,
     0x1.56a9f2p-34f, 0.0f, 0x1.69aaa8p-111f, 0.0f, 0x1.3ab4d6p-110f, 0.0f,
     0x1.64f34p-27f, 0.0f, 0x1.d9e6fp-66f, 0.0f, 0x1.4fd63cp-7f, 0x1.4eb4f2p-5f,
     0x1.ea157ap-92f, 0x1.6ad696p-23f, 0x1.a72cd6p-9f, 0.0f, 0x1.fb248cp-30f, 0.0f,
     0.0f, 0x1.e1a62p-124f, 0x1.409084p-106f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a80262p-112f, 0x1.55d038p-25f, 0x1.2e4fd6p-38f, 0.0f, 0x1.0e87cp-85f, 0.0f,
     0.0f, 0x1.281dbcp-73f, 0.0f, 0.0f, 0x1.57d182p-2f, 0x1.b70c02p-10f, 0.0f, 0x1p0f,
     0.0f, 0.0f, 0.0f, 0x1.5b7364p-56f, 0x1.ae378cp-107f, 0.0f, 0.0f, 0.0f,
     0x1.1b7fc4p-32f, 0x1.f4c0d4p-111f, 0.0f, 0.0f, 0x1.6365dep-11f, 0x1.6ead52p-112f,
     0.0f, 0.0f, 0x1.39802ap-110f, 0.0f, 0x1.857e5p-89f, 0.0f, 0.0f, 0.0f,
     0x1.f2a8b8p-78f, 0x1.ac42bap-88f, 0.0f, 0.0f, 0x1.e38f94p-86f, 0x1.188b48p-22f,
     0.0f, 0.0f, 0x1.b24ba8p-95f, 0x1.05d00ap-84f, 0x1p0f, 0x1.a9261cp-65f, 0.0f,
     0.0f, 0x1.91d86cp-35f, 0.0f, 0.0f, 0x1.546ab6p-118f, 0.0f, 0x1.e5c0dap-111f,
     0x1.bfab24p-83f, 0.0f, 0.0f, 0x1.805a1ap-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d0bf92p-20f, 0x1.edd6a6p-73f, 0x1.bdf6fep-19f, 0x1.9f3f88p-44f,
     0x1.d79194p-56f, 0.0f, 0x1.5967f6p-75f, 0x1.20cf8ep-30f, 0x1.d1f302p-57f, 0.0f,
     0x1.1f2b2ep-53f, 0.0f, 0x1.3e424p-2f, 0x1.e4d272p-110f, 0x1.290e8ep-49f, 0.0f,
     0x1.6a35b8p-88f, 0.0f, 0.0f, 0.0f, 0x1.40a26cp-90f, 0.0f, 0x1.dfc668p-80f,
     0x1.e48fa4p-120f, 0.0f, 0.0f, 0x1.e84af2p-42f, 0.0f, 0.0f, 0x1.f7e04ap-121f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.45fecp-4f, 0.0f, 0x1.5438aap-123f, 0x1.1a139ap-86f,
     0x1.91377cp-109f, 0.0f, 0x1.4ef0d8p-93f, 0.0f, 0.0f, 0.0f, 0x1.ff43bap-22f,
     0x1.0f9504p-69f, 0x1.216b2ap-47f, 0x1.4cb2ep-61f, 0.0f, 0.0f, 0x1.52e228p-64f,
     0x1.4823c8p-105f, 0x1.9571b8p-79f, 0x1.dda08p-75f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b8b236p-33f, 0.0f, 0x1.fe723ep-126f, 0.0f, 0.0f, 0x1.858dbep-85f,
     0x1.1e8288p-111f, 0.0f, 0x1.e6ae1cp-102f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a60d4ap-73f, 0x1.87f674p-12f, 0x1.003dd2p-70f, 0x1.65a08ap-14f, 0.0f,
     0x1.abf196p-39f, 0x1.b75bbep-36f, 0x1.54c776p-39f, 0.0f, 0x1.0f10b4p-126f, 0.0f,
     0x1.8f7606p-46f, 0x1.e6102ep-114f, 0x1.7f13aep-121f, 0.0f, 0x1.1cf944p-99f,
     0x1.b2b9fep-117f, 0.0f, 0x1.d3f8bep-123f, 0.0f, 0x1.708326p-86f, 0.0f,
     0x1.0f5e6cp-102f, 0.0f, 0x1.109f2cp-37f, 0.0f, 0x1.4b7796p-85f, 0.0f,
     0x1.ce7ebep-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2a0164p-30f, 0.0f,
     0x1.46a30ap-107f, 0.0f, 0x1.31a558p-50f, 0x1.f3ef6cp-100f, 0.0f, 0.0f,
     0x1.e79dbep-98f, 0.0f, 0x1.abdf7cp-106f, 0.0f, 0.0f, 0x1.195308p-92f, 0.0f,
     0x1.3c3e3ep-84f, 0.0f, 0.0f, 0.0f, 0x1.b9eafcp-114f, 0.0f, 0.0f, 0.0f,
     0x1.a2cf58p-45f, 0.0f, 0x1.ae8da4p-44f, 0x1.8a487p-33f, 0x1.fba056p-107f,
     0x1.a95f56p-90f, 0.0f, 0x1.03c632p-50f, 0.0f, 0x1.34d672p-78f, 0x1.2b3a5p-76f,
     0x1.2af8fep-34f, 0.0f, 0.0f, 0x1.f5d0d8p-113f, 0x1.d0489ep-115f, 0.0f, 0.0f,
     0.0f, 0x1.9b40cep-23f, 0x1.678332p-72f, 0.0f, 0.0f, 0x1.0f6718p-12f, 0.0f,
     0x1.2cbdaap-53f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_float8_t global_bench_acc;
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
        ml_float8_t local_acc;
        int32_t i;
        ml_float8_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1008));){
            ml_float8_t tmp0;
            ml_float8_t tmp1;
            ml_float8_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_float8_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            tmp1 = Sleef_log1pf8_u10kvx(tmp0);
            memcpy(((ml_float8_t*)(external_bench_wrapper_output_table+ i)), &(tmp1), 32);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(8);
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
    cpe_measure = id_tmp / 10080000.0;
    printf("Sleef_log1pf8_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_log1pf8_u10kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
