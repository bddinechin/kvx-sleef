/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_fabsf4_kvx.c --function Sleef_fabsf4_kvx --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary32 --vector-size 4 \
 *     --function-input-vector-size 4 --bench --no-embedded-bin --target kv3
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
     0x1.dd00bep-59f, 0x1.ca95bcp-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a89974p-48f, 0.0f, 0x1.c6e8e4p-118f, 0.0f, 0x1.1bb06ep-71f, 0.0f, 0.0f, 0.0f,
     0x1.eb8f42p-1f, 0x1.0a6d9ep-46f, 0.0f, 0.0f, 0x1.f46bb8p-3f, 0.0f,
     0x1.a3edf4p-110f, 0.0f, 0x1.0cff8cp-53f, 0.0f, 0x1.69607p-7f, 0.0f,
     0x1.9c70d6p-10f, 0x1.6d6664p-71f, 0x1.6fadeep-103f, 0.0f, 0x1.de832cp-8f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d91ffap-119f, 0x1.0d5cd4p-32f,
     0x1.4957e8p-72f, 0.0f, 0x1.7bf676p-9f, 0.0f, 0x1.c0d73ap-89f, 0.0f,
     0x1.07df28p-63f, 0x1.f4587cp-115f, 0.0f, 0x1.ab68acp-53f, 0.0f, 0x1.d89374p-81f,
     0x1.10ed16p-67f, 0.0f, 0x1.7e09aep-16f, 0.0f, 0x1.4a5812p-25f, 0x1.23e13p-84f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.6157fp-15f, 0.0f, 0.0f, 0x1.7a918p-125f,
     0x1.2655fcp-1f, 0.0f, 0.0f, 0x1.97ff26p-95f, 0.0f, 0x1.859fb6p-31f,
     0x1.ae7ea4p-123f, 0.0f, 0.0f, 0x1.e46598p-67f, 0x1.fbb5aep-47f, 0.0f,
     0x1.116f1ep-43f, 0.0f, 0.0f, 0.0f, 0x1.294a6p-78f, 0x1.d4bf98p-108f, 0.0f,
     0x1.4fd466p-92f, 0x1.5f9a58p-92f, 0.0f, 0.0f, 0x1.20674cp-93f, 0.0f, 0.0f,
     0x1.b6429p-27f, 0x1.d49586p-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b88c26p-34f,
     0x1.075974p-35f, 0x1.55a6bp-121f, 0.0f, 0x1.ab9fbcp-14f, 0x1.928018p-114f, 0.0f,
     0x1.26762cp-116f, 0.0f, 0x1.69fcbep-1f, 0x1.dee242p-72f, 0.0f, 0.0f,
     0x1.1262aap-81f, 0x1.dc1842p-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.15c898p-53f,
     0x1.75c7aep-90f, 0x1.8ff9d8p-91f, 0x1.2f7456p-13f, 0x1.de5098p-31f, 0.0f,
     0x1.30c84cp-14f, 0x1.05a89ap-22f, 0x1.c9153ap-109f, 0x1.9e4ab8p-22f, 0.0f,
     0x1.9b92f4p-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b2e19ep-68f, 0x1.284d4ep-120f,
     0x1.f6551p-103f, 0x1.512b54p-43f, 0.0f, 0.0f, 0.0f, 0x1.cdc59p-1f,
     0x1.53a9dep-117f, 0x1.8a897cp-15f, 0.0f, 0x1.29d016p-52f, 0.0f, 0x1.f42bcep-1f,
     0.0f, 0.0f, 0.0f, 0x1.7ff4eap-12f, 0x1.dc90cap-105f, 0.0f, 0.0f, 0.0f,
     0x1.ac094cp-33f, 0x1.fd70d6p-14f, 0.0f, 0x1.2aa4d4p-112f, 0x1.8e11ecp-104f,
     0x1.8a6a82p-96f, 0x1.e68aaap-90f, 0.0f, 0x1.d0e96cp-68f, 0x1.d8bf7cp-108f, 0.0f,
     0x1.ce92fap-24f, 0.0f, 0.0f, 0x1.2e8a24p-102f, 0.0f, 0x1.c19828p-100f,
     0x1.85f6f6p-70f, 0.0f, 0x1.391c24p-68f, 0.0f, 0x1.20a924p-111f, 0x1.a106e2p-34f,
     0.0f, 0x1.42529ep-48f, 0x1p0f, 0.0f, 0x1.958fa8p-22f, 0.0f, 0.0f, 0x1.f0d9ep-42f,
     0.0f, 0x1.4d1b4ep-92f, 0x1.6a4ca8p-118f, 0x1.c049d8p-12f, 0x1.7231fep-13f,
     0x1.03b902p-85f, 0.0f, 0.0f, 0x1.921dp-35f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5a96b6p-111f, 0x1.7e409p-91f, 0x1.cdcfe4p-108f, 0.0f, 0x1.89c44ep-101f, 0.0f,
     0.0f, 0x1.adaee6p-5f, 0.0f, 0.0f, 0.0f, 0x1.c7c32cp-124f, 0.0f, 0.0f, 0.0f,
     0x1.ed3204p-27f, 0x1.a8e894p-64f, 0x1.ff0c78p-87f, 0x1.e10e16p-92f,
     0x1.3f6cfep-45f, 0.0f, 0x1.518212p-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.17c40ap-5f,
     0x1.3c3368p-87f, 0x1.0350a6p-124f, 0x1.c4ec24p-88f, 0x1.6bd7f8p-77f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.864ce4p-8f, 0x1.79632ap-126f,
     0x1.91f4aap-66f, 0x1.f28ccp-66f, 0.0f, 0x1.69dc3cp-108f, 0x1.045828p-78f,
     0x1.33a63ap-73f, 0x1.bcda2ap-93f, 0.0f, 0.0f, 0x1.dedba4p-62f, 0.0f, 0.0f,
     0x1.737dfp-14f, 0x1.d00bfep-122f, 0.0f, 0.0f, 0x1.eb1b06p-7f, 0x1.6daea8p-8f,
     0x1.629d3ep-27f, 0x1.cb6902p-8f, 0.0f, 0x1.28b6a8p-67f, 0x1.b8a456p-46f,
     0x1.c8244cp-65f, 0x1.f45df2p-69f, 0.0f, 0.0f, 0.0f, 0x1.23993p-80f,
     0x1.7f02fap-7f, 0x1.cff49cp-113f, 0.0f, 0.0f, 0x1.49d306p-84f, 0.0f,
     0x1.998194p-121f, 0.0f, 0.0f, 0.0f, 0x1.bb201ep-85f, 0x1.79382ap-31f, 0.0f, 0.0f,
     0x1.b5ea18p-106f, 0x1.1ae0cep-76f, 0.0f, 0x1.fa422p-87f, 0x1.43b424p-18f, 0.0f,
     0x1.5ff528p-46f, 0.0f, 0.0f, 0x1.0ed1a8p-122f, 0x1.a6c23p-114f, 0.0f,
     0x1.33d364p-92f, 0x1.1419fap-16f, 0x1.eebce8p-18f, 0.0f, 0x1.edb63ap-41f, 0.0f,
     0.0f, 0x1.5d83bcp-105f, 0x1.fa487cp-11f, 0x1.7c2928p-68f, 0x1.570a48p-100f,
     0x1.4e72ecp-44f, 0x1.d5f3a2p-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c2af7ep-98f,
     0x1.dce6f6p-104f, 0.0f, 0.0f, 0x1.b078dap-17f, 0.0f, 0x1.1b76cap-56f, 0.0f,
     0x1.514fbcp-13f, 0x1.c1672ep-48f, 0.0f, 0x1.c2a16cp-72f, 0x1.c1ef2cp-20f,
     0x1.1e171ep-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.06698cp-54f, 0.0f,
     0x1.95c456p-126f, 0x1.9e43ccp-65f, 0x1.b5cba6p-57f, 0x1.d04facp-51f,
     0x1.6b96cap-65f, 0x1.d5b85ap-110f, 0.0f, 0x1.864876p-26f, 0x1.af72dep-40f, 0.0f,
     0x1.5d1508p-43f, 0.0f, 0.0f, 0x1.b26aeep-30f, 0x1.95dadcp-3f, 0.0f,
     0x1.6a589p-75f, 0x1.2d158ep-108f, 0.0f, 0x1.8a3764p-57f, 0x1.6bde86p-104f,
     0x1.9a256p-110f, 0.0f, 0.0f, 0x1.2d1bb2p-103f, 0.0f, 0.0f, 0.0f, 0x1.ea6ce6p-44f,
     0x1.69c088p-86f, 0x1.4dc68cp-124f, 0.0f, 0.0f, 0x1.c1f5aep-58f, 0.0f, 0.0f,
     0x1.29bbfcp-73f, 0x1.196f04p-112f, 0.0f, 0x1.ff1c72p-11f, 0x1.54c87cp-123f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.4846aep-107f, 0x1.d7de5ap-42f, 0.0f,
     0.0f, 0x1.260e0cp-109f, 0x1.f69738p-65f, 0.0f, 0.0f, 0x1.c52eb8p-111f,
     0x1.36116ep-99f, 0.0f, 0x1.c54814p-121f, 0x1.c34d2cp-24f, 0.0f, 0.0f, 0.0f,
     0x1.ada5a4p-24f, 0x1.c08e76p-81f, 0.0f, 0x1.6df262p-92f, 0.0f, 0x1.6baeep-10f,
     0.0f, 0x1.bd7ce8p-120f, 0.0f, 0.0f, 0x1.8005e8p-54f, 0.0f, 0x1.7be6ecp-12f, 0.0f,
     0x1.5c2e76p-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2072a4p-52f, 0x1.4dff78p-81f, 0.0f,
     0x1.b78fbp-15f, 0x1.566afcp-121f, 0x1.a7de7cp-81f, 0x1.d948cep-94f,
     0x1.eb4164p-36f, 0x1.12dd12p-41f, 0x1.f4961p-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.17c0dap-119f, 0x1.ec000ap-27f, 0x1.13c99p-97f, 0x1.242634p-88f,
     0x1.b350fap-48f, 0.0f, 0.0f, 0x1.07d394p-83f, 0.0f, 0.0f, 0x1.3fc768p-79f,
     0x1.4e4546p-112f, 0x1.7481a6p-10f, 0x1.59797p-85f, 0.0f, 0x1.c16034p-1f, 0.0f,
     0.0f, 0x1.c485c2p-92f, 0.0f, 0.0f, 0x1.bd01a6p-18f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.882cbp-25f, 0.0f, 0x1.c77576p-109f, 0x1.5b6d9ep-105f, 0x1.878de8p-112f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.1b765ap-14f, 0.0f, 0x1.af89b4p-55f,
     0x1.d143a2p-42f, 0x1.033a52p-14f, 0.0f, 0x1.5dfc4ep-60f, 0.0f, 0.0f,
     0x1.7b9dp-99f, 0.0f, 0.0f, 0.0f, 0x1.36e14cp-16f, 0.0f, 0x1.2dc072p-9f, 0.0f,
     0.0f, 0x1.df2f64p-61f, 0.0f, 0.0f, 0x1.8372a6p-61f, 0x1.1db1e6p-86f,
     0x1.20aab4p-37f, 0.0f, 0x1.ef0868p-11f, 0.0f, 0x1.27cf68p-56f, 0x1.80bad6p-84f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.275322p-86f, 0.0f,
     0x1.4e6afap-41f, 0x1.42f2bep-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9ae25ap-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b09ffep-74f, 0.0f, 0.0f,
     0x1.c63f48p-83f, 0x1.5cbd5ep-61f, 0.0f, 0x1.69f7d6p-113f, 0x1.15de96p-89f,
     0x1.a9733p-48f, 0x1.8ecd06p-45f, 0x1.92598cp-83f, 0.0f, 0x1.1ae97ep-10f, 0.0f,
     0.0f, 0x1.c5f044p-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9cad0cp-104f, 0.0f,
     0x1.df649p-116f, 0x1.fe0f14p-102f, 0.0f, 0.0f, 0x1.a8aff4p-55f, 0x1.dd79c4p-25f,
     0.0f, 0x1.ab7638p-72f, 0.0f, 0.0f, 0x1.ebe3a6p-40f, 0x1.db3db6p-118f, 0.0f,
     0x1.02587ep-50f, 0.0f, 0x1.12a062p-94f, 0.0f, 0.0f, 0x1.56b518p-64f,
     0x1.874f66p-107f, 0x1.856efp-12f, 0.0f, 0x1.2ae56ap-91f, 0x1.631eb4p-27f,
     0x1.db61bcp-70f, 0.0f, 0x1.276988p-120f, 0x1.6c25a2p-69f, 0x1.17ba04p-81f, 0.0f,
     0.0f, 0x1.13876cp-84f, 0x1.ba4f4cp-83f, 0x1.c6d85ap-82f, 0.0f, 0x1.bcf7e2p-26f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.da5944p-2f, 0x1.bc7b82p-55f, 0.0f,
     0x1.fa4774p-115f, 0.0f, 0x1.49cc6cp-105f, 0.0f, 0x1.e80a5p-126f, 0x1.9b821ap-44f,
     0.0f, 0x1.b3a15ep-72f, 0.0f, 0x1.649aaep-73f, 0.0f, 0x1.f95ba8p-124f,
     0x1.0930f2p-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.de63bap-68f, 0.0f, 0x1.d2da94p-44f,
     0x1.913d58p-28f, 0x1.a874bp-60f, 0x1.688ab4p-102f, 0.0f, 0x1.b1870ap-121f,
     0x1.fe047cp-42f, 0.0f, 0x1.d0bd1ap-54f, 0.0f, 0x1.9d985ap-71f, 0x1.514bdp-14f,
     0x1.44a63ap-42f, 0x1.f5fd3p-6f, 0x1.a28922p-87f, 0.0f, 0x1.637c1cp-84f,
     0x1.2b3e8p-78f, 0x1.a47b8ap-50f, 0.0f, 0.0f, 0x1.f9488cp-114f, 0x1.b986f8p-83f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b7a2e6p-50f, 0.0f, 0x1.0bb0c2p-116f, 0x1.40fe34p-99f,
     0.0f, 0x1.03aff4p-54f, 0.0f, 0x1.e8e176p-26f, 0x1.96062p-4f, 0x1.2226p-7f, 0.0f,
     0x1.8c6da8p-125f, 0x1.f6f6fap-60f, 0x1.f66eaep-80f, 0x1.f9e9f4p-107f, 0.0f, 0.0f,
     0x1.7b23fep-113f, 0.0f, 0x1.ccdfb2p-6f, 0x1.c662aep-106f, 0.0f, 0.0f,
     0x1.21e4dp-104f, 0.0f, 0x1.0dbc6p-125f, 0.0f, 0.0f, 0.0f, 0x1.f932c6p-99f, 0.0f,
     0.0f, 0.0f, 0x1.a1fbeep-54f, 0.0f, 0x1.bcbd08p-31f, 0x1.e53d48p-10f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1104bap-112f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.01208ap-33f, 0.0f, 0x1.299ff6p-120f, 0x1.f76f7ap-88f,
     0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.daf2f2p-122f, 0x1.811254p-31f, 0.0f,
     0x1.b9b1bap-122f, 0.0f, 0x1.846df2p-98f, 0.0f, 0.0f, 0x1.663208p-62f,
     0x1.99d486p-111f, 0.0f, 0.0f, 0x1.c120f6p-107f, 0x1.04c6b8p-126f, 0.0f, 0.0f,
     0x1.da38b4p-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.abac2ap-46f, 0.0f, 0.0f,
     0x1.15fb8ep-79f, 0x1.8ce8f8p-38f, 0.0f, 0x1.0fa4fp-26f, 0.0f, 0.0f,
     0x1.a69508p-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9a5226p-26f, 0.0f, 0.0f, 0.0f,
     0x1.a491d8p-55f, 0x1.bdbfc8p-68f, 0x1.a3c5bcp-50f, 0.0f, 0x1.ddbd2ap-36f,
     0x1.f26d34p-11f, 0.0f, 0.0f, 0x1.b6a56ap-36f, 0x1.ed686cp-67f, 0x1.50bc8ap-1f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.682e3cp-8f, 0x1.262458p-124f, 0x1.664f0ap-24f,
     0.0f, 0.0f, 0.0f, 0x1.7c738p-110f, 0x1.6e63c6p-45f, 0x1.c2471ap-43f,
     0x1.64e056p-121f, 0.0f, 0.0f, 0x1.b53a44p-100f, 0x1.7a3ff6p-14f, 0x1.ff6998p-3f,
     0.0f, 0x1.0eb3f4p-66f, 0x1.a981cep-39f, 0x1.5f4152p-18f, 0.0f, 0x1.a1823p-15f,
     0.0f, 0.0f, 0x1.6182a4p-82f, 0.0f, 0x1.c23e3p-10f, 0x1.bef0fap-76f, 0.0f,
     0x1.f2e61ep-51f, 0.0f, 0x1.c3baap-39f, 0x1.c06828p-4f, 0.0f, 0.0f,
     0x1.c987a6p-101f, 0x1.61a0fap-57f, 0.0f, 0.0f, 0x1.c9712cp-105f,
     0x1.907dc4p-124f, 0x1.2d48a6p-99f, 0x1.86b9a2p-99f, 0.0f, 0.0f, 0x1.f5d2cp-97f,
     0x1.494fc4p-22f, 0x1.b0518p-94f, 0x1.da727p-95f, 0.0f, 0x1.ab3aaep-120f, 0.0f,
     0.0f, 0x1.dad572p-26f, 0.0f, 0x1.f2a1f8p-113f, 0.0f, 0.0f, 0x1.39ac88p-112f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1c5afep-89f, 0x1.d5fb38p-4f, 0x1.42d62cp-7f,
     0x1.bc32f2p-7f, 0.0f, 0.0f, 0x1.d7a778p-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.16fc62p-74f, 0x1.070562p-92f, 0.0f, 0.0f, 0.0f, 0x1.0afd98p-64f, 0.0f, 0.0f,
     0.0f, 0x1.3a1732p-114f, 0x1.d0fa2ap-13f, 0x1.d21222p-58f, 0.0f, 0.0f,
     0x1.c7de62p-81f, 0x1.b479dp-3f, 0x1.8b6272p-11f, 0x1.d33bd2p-43f, 0.0f,
     0x1.3ccc0ap-67f, 0x1.2f21c4p-47f, 0x1.b0da72p-80f, 0x1.4248aap-36f,
     0x1.53cc6ep-73f, 0.0f, 0x1.509df2p-12f, 0.0f, 0x1.899642p-72f, 0.0f,
     0x1.68c2bcp-101f, 0x1.a37206p-99f, 0x1.40756ep-119f, 0x1.1512dp-10f,
     0x1.39810cp-30f, 0.0f, 0.0f, 0.0f, 0x1.7fc0e2p-63f, 0x1.00622cp-41f,
     0x1.364e1ep-101f, 0x1.97976ep-56f, 0.0f, 0.0f, 0x1.e59f5p-65f, 0x1.e951bp-15f,
     0x1.b3e976p-55f, 0.0f, 0.0f, 0.0f, 0x1.8b09ap-21f, 0x1.0ec91p-99f, 0.0f,
     0x1.065d8ap-54f, 0x1.9f7208p-110f, 0x1.8c6794p-49f, 0x1.b8cfa2p-96f,
     0x1.867fb2p-98f, 0x1.70cd18p-24f, 0.0f, 0x1.6a723ep-27f, 0.0f, 0.0f,
     0x1.2d1ff4p-88f, 0.0f, 0.0f, 0.0f, 0x1.766e9ep-69f, 0.0f, 0x1.e9abf2p-98f,
     0x1.d06c64p-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ec2034p-46f, 0x1.c5fdbcp-3f,
     0.0f, 0x1.715f48p-70f, 0x1.1cebd4p-11f, 0.0f, 0x1.c665d2p-74f, 0.0f, 0.0f, 0.0f,
     0x1.fd86d2p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.84d644p-81f, 0.0f,
     0x1.ad54b4p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5086dp-35f, 0x1.fe9a9ap-63f,
     0x1.3938a4p-75f, 0x1.6dee4cp-90f, 0.0f, 0.0f, 0x1.6300fp-98f, 0x1.9a8ab2p-21f,
     0.0f, 0.0f, 0x1.90dc12p-58f, 0x1.7a9466p-5f, 0x1.87ea6ap-72f, 0.0f, 0.0f,
     0x1.fe39f2p-112f, 0.0f, 0.0f, 0x1.0e9d84p-48f, 0x1.ed6dfep-92f, 0x1.2922c8p-114f,
     0x1.c91a6ep-25f, 0x1.f93444p-54f, 0.0f, 0.0f, 0x1.d3a77ap-33f, 0x1.47f87cp-12f,
     0.0f, 0x1.d63c6p-91f, 0x1.e503c8p-23f, 0x1.8f2bdp-18f, 0x1.35cb1ap-85f,
     0x1.0261a6p-71f, 0.0f, 0x1.50b8bep-30f, 0x1.10fdc6p-107f, 0x1.06dba6p-50f, 0.0f,
     0x1.af902cp-41f, 0.0f, 0.0f, 0x1.a8f66ep-74f, 0x1.d0df64p-123f, 0.0f,
     0x1.d44de8p-52f, 0x1.9054eep-34f, 0x1.d7b7d6p-86f, 0.0f, 0x1.775b42p-117f,
     0x1.9d3786p-81f, 0x1.0b4e76p-81f, 0x1.2353dep-116f, 0x1.6f6d1ap-97f, 0.0f,
     0x1.9d15c8p-61f, 0.0f, 0x1.ba455p-51f, 0x1.5f1542p-40f, 0.0f, 0x1.19f104p-74f,
     0.0f, 0x1.3e1752p-89f, 0x1.7ed8fep-35f, 0x1.4c83eap-70f, 0x1.260f42p-124f, 0.0f,
     0x1.84e4c4p-1f, 0x1.9a9c96p-52f, 0x1.c7de3p-87f, 0x1.e9b1ccp-94f, 0.0f,
     0x1.50bbbp-2f, 0x1.f0d68p-109f
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
            tmp1 = Sleef_fabsf4_kvx(tmp0);
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
    printf("Sleef_fabsf4_kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_fabsf4_kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
