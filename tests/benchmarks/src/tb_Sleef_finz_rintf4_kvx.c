/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_rintf4_kvx.c --function Sleef_finz_rintf4_kvx \
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
     0x1.f844c6p-38f, 0.0f, 0x1.58860ep-47f, 0x1.128328p-73f, 0x1.8d0b66p-48f, 0.0f,
     0x1.2c5396p-58f, 0.0f, 0x1.6da7a4p-42f, 0x1.9f3e1cp-52f, 0x1.d32364p-114f, 0.0f,
     0x1.24d6cep-26f, 0.0f, 0x1.a6137p-105f, 0.0f, 0.0f, 0x1.704aa4p-12f,
     0x1.fd8b28p-22f, 0x1.2958ecp-80f, 0.0f, 0x1.b38278p-75f, 0x1.c5a8dp-11f, 0x1p0f,
     0x1.e21e72p-91f, 0.0f, 0.0f, 0x1.27e854p-1f, 0x1.e62c0ap-59f, 0x1.20bff8p-104f,
     0x1.3ac4f8p-114f, 0x1.d5bb64p-6f, 0.0f, 0.0f, 0x1.56ac14p-63f, 0x1.5401acp-2f,
     0.0f, 0x1.6921e2p-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.74a93ep-69f, 0.0f,
     0x1.1a9664p-44f, 0.0f, 0x1.9132ap-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dd66fcp-41f,
     0.0f, 0x1.2c3c7p-123f, 0x1.bb43fcp-36f, 0.0f, 0.0f, 0.0f, 0x1.01c01ep-42f,
     0x1.c0b74ap-79f, 0x1.9400c2p-48f, 0.0f, 0.0f, 0x1.30d692p-86f, 0x1.06a808p-110f,
     0.0f, 0.0f, 0.0f, 0x1.41b58p-23f, 0x1.5fb89p-97f, 0.0f, 0.0f, 0x1.c48508p-36f,
     0x1.f8b09cp-10f, 0x1.59131p-17f, 0x1.457792p-74f, 0x1.5636fcp-76f,
     0x1.ff4622p-106f, 0.0f, 0x1.379418p-25f, 0x1.5f17e2p-50f, 0.0f, 0x1.78c692p-43f,
     0x1.67895ap-29f, 0x1.a9319ap-93f, 0.0f, 0.0f, 0x1.1a7ceep-124f, 0.0f,
     0x1.71fd76p-103f, 0x1.a73374p-83f, 0x1.adac1ap-80f, 0.0f, 0x1.191ebap-58f, 0.0f,
     0.0f, 0x1.237d7p-90f, 0x1.7febeep-104f, 0.0f, 0x1.679c7ep-46f, 0.0f,
     0x1.6c5292p-4f, 0x1.6e9da8p-103f, 0.0f, 0x1.bd44c4p-94f, 0x1.f30ep-20f, 0.0f,
     0x1.1dfdfp-19f, 0x1.358a48p-9f, 0x1.7ea476p-113f, 0.0f, 0x1.0ad926p-108f,
     0x1.9bc376p-92f, 0x1.de3e7p-13f, 0x1.7c595ap-10f, 0x1.44847p-35f, 0.0f, 0.0f,
     0.0f, 0x1.824698p-42f, 0x1.70425ep-68f, 0x1.6ab7b8p-14f, 0.0f, 0x1.a8644cp-100f,
     0.0f, 0x1.99d472p-38f, 0x1.f3638ap-126f, 0x1.bc9b26p-75f, 0x1.4a33d8p-109f, 0.0f,
     0.0f, 0.0f, 0x1.99af42p-19f, 0x1.c038a2p-14f, 0.0f, 0x1.62f74p-78f, 0.0f,
     0x1.e7ecd2p-92f, 0x1.a986cep-10f, 0.0f, 0.0f, 0x1.0adfp-125f, 0x1.dd9fd8p-107f,
     0x1.9daf42p-46f, 0x1.f3a07ap-23f, 0.0f, 0.0f, 0x1.bc8ce2p-84f, 0x1.921f28p-26f,
     0x1.82fc34p-83f, 0.0f, 0.0f, 0.0f, 0x1.94b8d6p-52f, 0x1.fab864p-88f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.4b0b7ap-57f, 0x1.456d44p-10f, 0x1.605994p-113f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cbf0ecp-41f, 0.0f,
     0x1.65d4fep-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ddbf46p-121f, 0.0f, 0.0f, 0.0f,
     0x1.43a14cp-100f, 0.0f, 0x1.cdea5ep-13f, 0.0f, 0.0f, 0.0f, 0x1.1bfc86p-2f, 0.0f,
     0x1.51e518p-98f, 0x1.1085e4p-94f, 0x1.a7943p-116f, 0x1.8178d8p-5f, 0.0f,
     0x1.b96738p-106f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.89aa32p-53f,
     0x1.ca4522p-60f, 0x1.1585c8p-67f, 0x1.beb02p-69f, 0.0f, 0x1.5920bap-16f,
     0x1.5e951ep-4f, 0.0f, 0x1.1fa16p-109f, 0.0f, 0x1.e2f35cp-112f, 0x1.e7dd3p-80f,
     0x1.7ffa4p-119f, 0x1.0b1de2p-75f, 0.0f, 0.0f, 0x1.49b45ap-117f, 0.0f,
     0x1.786d6ap-97f, 0x1.3a99a8p-100f, 0.0f, 0x1.66b73p-123f, 0.0f, 0x1.28aa2ep-88f,
     0x1.acd396p-14f, 0.0f, 0.0f, 0x1.fb1346p-40f, 0x1.3de152p-115f, 0.0f,
     0x1.a6d28p-42f, 0x1.e40298p-125f, 0x1.88720cp-124f, 0x1.1d7c46p-114f,
     0x1.56e654p-93f, 0.0f, 0x1.5b3d54p-43f, 0x1.fc7b0ap-44f, 0.0f, 0x1.fe7b52p-122f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b2e11ap-67f, 0.0f, 0x1.16f38cp-42f, 0.0f,
     0.0f, 0x1.64b56cp-39f, 0x1.0faf66p-36f, 0.0f, 0x1.b5999ep-3f, 0x1.d37f46p-38f,
     0.0f, 0x1.4aeb6cp-13f, 0.0f, 0x1.bfbccep-77f, 0.0f, 0.0f, 0x1.6e6f38p-21f, 0.0f,
     0x1.3a44f2p-34f, 0x1.1e6accp-41f, 0x1.6b58d2p-96f, 0x1.3de2c2p-54f, 0.0f,
     0x1.a454bap-17f, 0x1.1823ecp-8f, 0x1.7bccdap-81f, 0.0f, 0.0f, 0x1.0ef4a4p-34f,
     0.0f, 0x1.29b646p-63f, 0x1.eeab34p-79f, 0.0f, 0.0f, 0x1.38faa8p-21f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.360fa6p-17f, 0x1.70550ep-44f, 0x1.04680ep-83f, 0x1.ececd4p-66f,
     0x1.183cbp-69f, 0.0f, 0.0f, 0.0f, 0x1.25f5c4p-26f, 0x1.8f3c04p-125f,
     0x1.96deb6p-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.42d6d8p-51f, 0x1.f4ae32p-67f,
     0.0f, 0.0f, 0.0f, 0x1.d271e6p-41f, 0.0f, 0x1.df8736p-20f, 0x1.82f728p-26f, 0.0f,
     0.0f, 0x1.8f6198p-60f, 0.0f, 0.0f, 0x1.003af6p-81f, 0x1.a43444p-20f,
     0x1.b9d45p-76f, 0.0f, 0.0f, 0x1.7ebc8p-71f, 0.0f, 0.0f, 0x1.e8071ep-8f, 0.0f,
     0x1.96c4f2p-121f, 0.0f, 0.0f, 0x1.bd5be4p-81f, 0.0f, 0x1.62ac72p-79f, 0.0f,
     0x1.c5e718p-95f, 0.0f, 0.0f, 0x1.078182p-4f, 0.0f, 0x1.73da86p-47f, 0.0f, 0.0f,
     0x1.a380f8p-82f, 0.0f, 0x1.b7b9fep-57f, 0.0f, 0x1.60b49cp-108f, 0x1.d0cf24p-85f,
     0.0f, 0x1.1fb7f6p-36f, 0x1.b9169p-43f, 0.0f, 0x1.9493fp-92f, 0.0f, 0.0f, 0.0f,
     0x1.8f148ap-98f, 0.0f, 0x1.04c56ep-99f, 0x1.511abep-122f, 0.0f, 0.0f,
     0x1.bb55eep-77f, 0x1.92fd32p-35f, 0x1.13ddc4p-42f, 0.0f, 0x1.b4213ep-86f, 0.0f,
     0.0f, 0.0f, 0x1.6534ccp-40f, 0.0f, 0.0f, 0x1.68d838p-14f, 0.0f, 0x1.bce2b6p-115f,
     0.0f, 0x1.75d536p-87f, 0x1.ac50f6p-37f, 0x1.bd4792p-3f, 0.0f, 0x1.8f95e2p-52f,
     0x1.6416f2p-15f, 0x1.232ec4p-35f, 0.0f, 0.0f, 0x1.172706p-107f, 0.0f, 0.0f, 0.0f,
     0x1.7d963ep-120f, 0.0f, 0x1.67f28p-84f, 0x1.7f019ap-81f, 0x1.63237p-72f, 0.0f,
     0.0f, 0.0f, 0x1.1da8eap-88f, 0x1.da8aap-84f, 0x1.366a0ep-93f, 0.0f, 0.0f, 0.0f,
     0x1.816b96p-84f, 0.0f, 0x1.f26078p-124f, 0.0f, 0x1.80d8d2p-51f, 0x1.7af024p-20f,
     0.0f, 0.0f, 0x1.4e2fep-82f, 0.0f, 0.0f, 0x1.4041e6p-28f, 0.0f, 0.0f,
     0x1.40c2d8p-124f, 0x1.0bbeep-104f, 0.0f, 0.0f, 0x1.82f92ap-7f, 0.0f,
     0x1.edc2e4p-14f, 0.0f, 0x1.acb9bap-108f, 0.0f, 0x1.ad743p-79f, 0x1.94533ep-54f,
     0.0f, 0x1.e9214ep-7f, 0x1.085e78p-40f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.5820ep-23f,
     0x1.dabc76p-23f, 0.0f, 0.0f, 0x1.9a8c78p-40f, 0x1.fc62acp-83f, 0.0f,
     0x1.43ae08p-97f, 0.0f, 0x1.19351cp-49f, 0.0f, 0x1.423c8p-113f, 0x1.329d2p-121f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.60c14ep-30f, 0x1.eedf24p-81f, 0.0f, 0x1.552f72p-53f,
     0x1.90af2ep-118f, 0x1.c3ef82p-13f, 0x1.24fc68p-108f, 0.0f, 0.0f, 0x1.1b970ep-78f,
     0x1.334304p-37f, 0x1.f01e24p-21f, 0x1.17fca4p-117f, 0x1.fea49p-79f, 0.0f, 0.0f,
     0x1.1e1da8p-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.71fd2p-34f, 0x1.a1377cp-87f,
     0x1.be8c72p-9f, 0.0f, 0x1.a31658p-48f, 0x1.004724p-67f, 0.0f, 0x1.d50ff2p-1f,
     0.0f, 0x1.2268fp-51f, 0x1.de3d62p-103f, 0.0f, 0x1.9fefa6p-18f, 0x1.b81e44p-1f,
     0.0f, 0x1.2c7f6ap-34f, 0.0f, 0.0f, 0x1.402b0ap-32f, 0.0f, 0x1.0153ecp-102f,
     0x1.a929cap-5f, 0.0f, 0x1.2fd08ep-37f, 0x1.bc448ap-72f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.8a728ap-96f, 0.0f, 0x1.866848p-82f, 0x1.027a72p-58f,
     0x1.6c66ccp-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.01b6c4p-124f, 0x1.738882p-7f,
     0x1.b35728p-37f, 0.0f, 0x1.eecbe8p-114f, 0x1.19123p-75f, 0.0f, 0x1.bc7bd2p-108f,
     0.0f, 0x1.bbaeb2p-97f, 0x1.e6fbeep-4f, 0.0f, 0.0f, 0x1.af197ep-29f,
     0x1.09c80cp-31f, 0.0f, 0x1.c62564p-45f, 0.0f, 0x1.a88374p-14f, 0x1.8ac79ep-105f,
     0.0f, 0x1.3693a4p-66f, 0x1.90344cp-40f, 0x1.443fbep-90f, 0x1.2d31f6p-14f,
     0x1.a7ca1p-10f, 0.0f, 0x1.e8419ep-81f, 0x1.f72004p-59f, 0x1.e59652p-38f,
     0x1.2f4956p-98f, 0x1.f6e0cap-122f, 0x1.1c90dap-14f, 0.0f, 0x1.93aa14p-77f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.cbceb6p-116f, 0x1.7b883ap-19f, 0.0f, 0.0f,
     0x1.9726ecp-34f, 0.0f, 0x1.147e84p-115f, 0x1.cdcccap-6f, 0x1.8736eap-54f,
     0x1.751eb4p-96f, 0x1.d42c7p-35f, 0.0f, 0x1.2fb9b6p-62f, 0x1.949ceap-93f, 0.0f,
     0.0f, 0x1.e14a92p-112f, 0x1.02b906p-82f, 0.0f, 0.0f, 0.0f, 0x1.08ef38p-13f, 0.0f,
     0x1.3cd856p-109f, 0.0f, 0x1.f624eep-98f, 0.0f, 0x1.e44e9p-104f, 0.0f, 0.0f,
     0x1.9610bp-82f, 0.0f, 0x1.7a5a5p-13f, 0x1.fa690cp-112f, 0x1.44078ap-66f,
     0x1.c4132cp-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f1529cp-119f, 0.0f, 0x1.82d1cp-77f,
     0.0f, 0x1.f0c4a8p-100f, 0x1.13d78cp-78f, 0.0f, 0x1.10941cp-63f, 0.0f, 0.0f, 0.0f,
     0x1.03fb0cp-55f, 0x1.7e657ep-112f, 0.0f, 0x1.938eb6p-70f, 0x1.3531bp-43f,
     0x1.e7c342p-72f, 0x1.0432aap-26f, 0.0f, 0x1.63a1dap-80f, 0.0f, 0.0f,
     0x1.1f0ff6p-84f, 0x1.b54236p-23f, 0.0f, 0x1.b97a3p-36f, 0x1.5cab6cp-42f, 0.0f,
     0.0f, 0x1.36f5f2p-20f, 0.0f, 0.0f, 0x1.b3142ep-30f, 0x1.1b061ep-19f, 0.0f,
     0x1.12b32ep-59f, 0.0f, 0x1.c1e9c4p-35f, 0.0f, 0x1.e573bep-11f, 0x1.7873b8p-67f,
     0x1.6fe232p-116f, 0.0f, 0x1.66a7d6p-115f, 0x1.09983ep-14f, 0x1.a9f37p-109f,
     0x1.380abp-80f, 0.0f, 0x1.c545fap-113f, 0x1.ca23e4p-67f, 0.0f, 0.0f,
     0x1.d42b16p-27f, 0.0f, 0x1.b829fp-18f, 0x1.b80bf4p-45f, 0x1.c9af3cp-30f,
     0x1.b30938p-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c7d586p-100f,
     0x1.47dbaep-100f, 0x1.07ef98p-118f, 0x1.3e8db6p-119f, 0.0f, 0x1.44a722p-56f,
     0.0f, 0.0f, 0x1.d65ca2p-94f, 0x1.eaf38p-23f, 0x1.9f6d94p-87f, 0x1.bf35fep-46f,
     0x1.73d356p-18f, 0x1.55142cp-14f, 0x1.8861a4p-14f, 0.0f, 0.0f, 0x1.ba622p-66f,
     0x1.7b234p-124f, 0.0f, 0x1.916d04p-64f, 0x1.8de5fcp-89f, 0x1.9c8bfcp-59f, 0.0f,
     0x1.776946p-23f, 0.0f, 0.0f, 0x1.214642p-60f, 0x1.6ef95ap-4f, 0.0f, 0.0f,
     0x1.eb238ap-21f, 0x1.4a322cp-6f, 0x1.9bdd1ap-20f, 0x1.e746dap-61f,
     0x1.c48d08p-64f, 0.0f, 0.0f, 0.0f, 0x1.858f5p-113f, 0x1.9c0da2p-25f,
     0x1.760ca2p-30f, 0.0f, 0.0f, 0x1.c78c3p-11f, 0x1.ae8e9cp-124f, 0x1.e94f16p-74f,
     0.0f, 0x1.ff027p-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2e409ap-32f,
     0.0f, 0x1.cce91ap-125f, 0x1.f95976p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.105c4p-44f,
     0x1.04f2ecp-86f, 0x1.e4b482p-22f, 0x1.244e04p-52f, 0.0f, 0.0f, 0x1.4cc8fcp-48f,
     0.0f, 0.0f, 0.0f, 0x1.236d7p-98f, 0x1.f70c06p-112f, 0x1.b04a66p-39f,
     0x1.b64486p-15f, 0.0f, 0x1.83c926p-116f, 0x1.fa3a24p-75f, 0x1.8158aep-67f,
     0x1.bb098cp-54f, 0.0f, 0x1.302e6cp-10f, 0.0f, 0.0f, 0.0f, 0x1.ebbb6ap-22f,
     0x1.be0d42p-68f, 0.0f, 0.0f, 0x1.dbb5bcp-27f, 0.0f, 0x1.bd53dap-50f,
     0x1.f83e4ap-38f, 0x1.f4336cp-71f, 0.0f, 0.0f, 0x1.cfc3cap-103f, 0.0f,
     0x1.45eed2p-35f, 0x1.ea942p-118f, 0x1.aa75eep-30f, 0x1.e862cap-36f, 0.0f, 0.0f,
     0.0f, 0x1.312928p-47f, 0x1.ec9e7cp-114f, 0.0f, 0.0f, 0x1.b92c54p-42f,
     0x1.b6bcf6p-73f, 0x1.34d7e4p-52f, 0x1.9d884ep-96f, 0x1.3363b4p-36f, 0.0f, 0.0f,
     0x1.5354ecp-111f, 0.0f, 0x1.71a8bep-42f, 0.0f, 0.0f, 0x1.c9799cp-96f, 0.0f, 0.0f,
     0x1.62682ep-79f, 0x1.2ec0e6p-67f, 0x1.d392dep-2f, 0.0f, 0x1.962ff8p-1f, 0.0f,
     0x1.d889cap-69f, 0.0f, 0.0f, 0x1.f6e938p-24f, 0x1.4a3004p-57f, 0.0f,
     0x1.9e96eep-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dfecd6p-93f, 0.0f,
     0x1.99ff36p-122f, 0.0f, 0x1.dff3d2p-43f, 0x1.f3e2c4p-118f, 0.0f, 0.0f, 0.0f,
     0x1.2f7712p-124f, 0x1.7a01eap-114f, 0x1.0dd682p-114f, 0x1.c650eap-106f, 0.0f,
     0x1.2d539cp-86f, 0x1.3384bp-45f, 0x1.fec3ecp-62f, 0.0f, 0x1.3164e8p-77f, 0.0f,
     0x1.827dfcp-32f, 0x1.99fc88p-116f, 0.0f, 0.0f, 0x1.117426p-72f, 0.0f, 0.0f, 0.0f,
     0x1.30e4a2p-51f, 0.0f, 0x1.94ac68p-84f, 0x1.d0278ap-96f, 0x1.1323fap-90f, 0.0f,
     0.0f, 0x1.bd9abcp-15f, 0x1.00d4dp-56f, 0x1.55711ep-39f, 0.0f, 0.0f, 0.0f,
     0x1.134e34p-111f, 0x1.f47d08p-119f, 0x1.688438p-17f, 0x1.8fbc86p-55f,
     0x1.a24034p-103f, 0x1.860bf8p-77f, 0.0f, 0x1.d07b2cp-17f, 0x1.65dfd6p-40f,
     0x1.cf8f12p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.63a0e2p-57f, 0.0f, 0x1.bf7402p-31f,
     0.0f, 0.0f, 0x1.f56098p-120f, 0.0f, 0x1.ea0e46p-53f, 0.0f, 0x1.f54a32p-43f, 0.0f,
     0x1.9f52fcp-47f, 0.0f, 0.0f, 0x1.a64f62p-111f, 0.0f, 0x1.9ceffcp-117f, 0.0f,
     0x1.bff3fcp-110f, 0.0f, 0.0f, 0x1.b9e662p-48f, 0.0f, 0.0f, 0.0f, 0x1.a72d26p-69f,
     0x1.e10a1cp-5f, 0x1.86e19p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d63f96p-28f,
     0.0f, 0.0f, 0x1.fb07c8p-91f, 0.0f, 0x1.50a9ap-84f, 0x1.771acp-19f,
     0x1.c00ce8p-87f, 0x1.0f532p-84f, 0.0f, 0.0f, 0.0f, 0x1.5c4484p-126f,
     0x1.cdb3c8p-89f, 0x1.7cb37ep-32f, 0x1.343328p-21f, 0.0f, 0.0f, 0x1.711fe6p-38f,
     0.0f, 0x1.7a5002p-60f, 0x1.8239e8p-26f, 0.0f, 0.0f, 0x1.675f4cp-70f, 0.0f,
     0x1.b7b714p-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.496f74p-79f, 0.0f, 0x1.730756p-11f,
     0x1.fe2f1cp-116f, 0x1.013cb6p-8f, 0x1.b5409cp-42f, 0x1.328582p-44f,
     0x1.9527b4p-114f, 0x1.4d5d4p-67f, 0x1.ad5756p-49f, 0x1.6bb758p-28f,
     0x1.b1be78p-99f, 0x1.5b7c3ep-74f, 0.0f, 0.0f, 0x1.8fa488p-51f, 0x1.076006p-10f,
     0.0f, 0x1.e063p-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.23e112p-37f,
     0x1.1ef50ep-93f, 0.0f, 0.0f, 0x1.c26de8p-14f, 0x1.1bfa3ep-7f, 0.0f,
     0x1.56d6aap-59f, 0x1.c406bcp-49f, 0.0f, 0x1.79ce36p-28f, 0.0f, 0x1.8f412ep-85f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.881c0ep-81f, 0.0f, 0.0f, 0x1.9e537ap-23f,
     0x1.ec2dbp-21f, 0.0f, 0.0f, 0x1.bcf2cep-18f, 0.0f, 0.0f, 0.0f, 0x1.abccap-54f,
     0x1.525902p-15f, 0.0f, 0.0f, 0.0f, 0x1.8cdbaap-42f, 0x1.4f85fap-58f, 0.0f, 0.0f,
     0.0f, 0x1.4b4f8ap-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.531f1ap-87f, 0.0f, 0.0f,
     0x1.acb226p-106f, 0.0f, 0x1.7b8d72p-106f
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
            tmp1 = Sleef_finz_rintf4_kvx(tmp0);
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
    printf("Sleef_finz_rintf4_kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_rintf4_kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
