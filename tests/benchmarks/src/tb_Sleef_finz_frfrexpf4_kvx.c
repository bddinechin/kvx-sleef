/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_frfrexpf4_kvx.c --function \
 *     Sleef_finz_frfrexpf4_kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 4 --function-input-vector-size \
 *     4 --bench --no-embedded-bin --target kv3
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
     0.0f, 0x1.c69978p-100f, 0.0f, 0x1.67e1f6p-102f, 0x1.01cb5ep-63f, 0.0f,
     0x1.15d0bap-44f, 0.0f, 0x1.859aaap-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.93bf9ep-119f, 0.0f, 0.0f, 0.0f, 0x1.5a7e9p-6f, 0x1.511364p-42f,
     0x1.a67ea4p-54f, 0x1.16fe26p-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.94af2ap-19f, 0.0f, 0.0f, 0.0f, 0x1.8327dcp-110f, 0x1.4aef76p-27f,
     0x1.54a642p-108f, 0x1.a92772p-11f, 0.0f, 0.0f, 0.0f, 0x1.ea196ep-80f,
     0x1.257dd6p-116f, 0x1.6d18p-112f, 0.0f, 0x1.5e016cp-55f, 0.0f, 0x1.ddbdbep-75f,
     0.0f, 0x1p0f, 0x1.65b614p-7f, 0x1.f63e3p-117f, 0.0f, 0.0f, 0x1.b67af8p-64f,
     0x1.f9c718p-80f, 0.0f, 0x1.cff9f2p-52f, 0x1.54242ap-124f, 0.0f, 0.0f, 0.0f,
     0x1.6954acp-73f, 0x1.bb2988p-37f, 0x1.d43afep-106f, 0x1.569df6p-28f,
     0x1.7663c6p-81f, 0x1.d12a98p-87f, 0x1.87ed2ap-111f, 0.0f, 0x1.755f6ap-61f,
     0x1.25a952p-18f, 0.0f, 0x1.ad97e4p-124f, 0.0f, 0x1.09bc6ap-70f, 0.0f, 0.0f, 0.0f,
     0x1.24d6bep-84f, 0x1.0171fep-100f, 0.0f, 0x1.ea1ccep-120f, 0.0f, 0.0f, 0.0f,
     0x1.4234fep-80f, 0.0f, 0x1.2fb76p-105f, 0.0f, 0.0f, 0.0f, 0x1.ef4412p-126f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e34b62p-63f, 0x1.ba33eep-3f, 0.0f, 0x1.a8be1ep-63f, 0.0f,
     0x1.f6500ep-30f, 0.0f, 0x1.8e45fap-121f, 0x1.e4a33p-17f, 0x1.7551aep-86f, 0.0f,
     0x1.3d572ap-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e0e5bep-53f, 0.0f,
     0.0f, 0x1.b8c8e4p-16f, 0.0f, 0x1.d52e8cp-65f, 0.0f, 0.0f, 0x1.1d6e0ep-10f, 0.0f,
     0x1.7a1abap-65f, 0.0f, 0x1.83f9fep-75f, 0.0f, 0.0f, 0x1.6525fcp-119f,
     0x1.bfb44ap-20f, 0x1.b1808ap-80f, 0.0f, 0x1.474d86p-20f, 0.0f, 0x1.d78cfcp-114f,
     0x1.4a51eep-4f, 0.0f, 0x1.a0af36p-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ad241cp-79f,
     0x1.fef5e2p-126f, 0x1.29f334p-74f, 0x1.63703cp-112f, 0.0f, 0x1.b25054p-38f,
     0x1.e2133cp-126f, 0.0f, 0x1.566ff4p-9f, 0x1.985dfcp-125f, 0x1.a31c1p-22f, 0.0f,
     0.0f, 0x1.1e1752p-82f, 0x1.c42686p-65f, 0x1.5b1afap-58f, 0x1.cf513ep-44f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b95dbep-28f, 0x1.56bd76p-121f, 0.0f, 0x1.72269ep-39f, 0.0f,
     0.0f, 0x1.f02832p-105f, 0.0f, 0.0f, 0x1.0c7884p-119f, 0x1.8fcd7ap-71f,
     0x1.e2dd84p-112f, 0.0f, 0.0f, 0x1.bc8868p-82f, 0x1.5c60fp-82f, 0x1.f66986p-14f,
     0x1.634f6ap-64f, 0.0f, 0x1.584fc8p-39f, 0.0f, 0.0f, 0x1.0804f6p-58f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.72f782p-112f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.796ecep-102f, 0.0f, 0.0f, 0.0f, 0x1.3d693ap-81f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ec7208p-10f, 0.0f, 0x1.a27f96p-18f, 0x1.37a662p-5f, 0.0f, 0.0f,
     0x1.8d3b6ep-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fbf4acp-83f, 0x1.233ab2p-33f,
     0.0f, 0x1.8238acp-96f, 0x1.091792p-35f, 0x1.36f546p-59f, 0x1.a61d3ap-89f, 0.0f,
     0x1.5c0866p-101f, 0.0f, 0.0f, 0.0f, 0x1.1f411p-122f, 0x1.5a31c2p-13f,
     0x1.88c2cp-124f, 0.0f, 0.0f, 0x1.ae9dep-45f, 0.0f, 0x1.b92c5ep-46f, 0.0f, 0.0f,
     0.0f, 0x1.f2ea7cp-51f, 0x1.235336p-61f, 0x1.fa9198p-30f, 0.0f, 0x1.2c058p-103f,
     0x1.a457ep-118f, 0x1.b966d2p-60f, 0.0f, 0.0f, 0x1.9c1d8ap-43f, 0x1.30e096p-15f,
     0x1.1cdfbcp-67f, 0.0f, 0x1.a18e86p-12f, 0.0f, 0x1.851fb6p-17f, 0x1.dceaf2p-90f,
     0x1.698d66p-59f, 0x1.b52b6ep-126f, 0.0f, 0x1.0ff8a6p-38f, 0.0f, 0x1.c4c262p-42f,
     0.0f, 0x1.41b3acp-75f, 0.0f, 0x1.1b3a84p-38f, 0.0f, 0.0f, 0x1.ee6aap-26f,
     0x1.a002e4p-35f, 0x1.ed2cc8p-26f, 0.0f, 0.0f, 0x1.94e84p-109f, 0.0f, 0.0f,
     0x1.38ddd6p-108f, 0x1.f5f7d2p-100f, 0x1.1c75a2p-23f, 0x1.cdf36cp-123f, 0.0f,
     0.0f, 0x1.345462p-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d10976p-108f, 0x1.2d299p-2f, 0x1.c70b58p-6f, 0.0f, 0.0f, 0.0f, 0x1p0f,
     0x1.8d38bp-44f, 0x1.bd7eb2p-6f, 0x1.8ccb78p-63f, 0.0f, 0.0f, 0x1.18d0b4p-106f,
     0x1.853454p-65f, 0.0f, 0.0f, 0x1.9a3becp-55f, 0x1.7229a6p-96f, 0x1.438a3ap-51f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e08aaep-80f, 0x1.daad84p-40f, 0.0f, 0x1.d729ecp-42f,
     0.0f, 0x1.ca781ap-83f, 0x1.1282ecp-69f, 0x1.989beep-41f, 0.0f, 0x1.a8402ep-11f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.2f5ab8p-113f, 0x1.b25c14p-20f, 0x1.2fe54ap-10f, 0.0f,
     0x1.12a156p-112f, 0.0f, 0x1.a35c94p-91f, 0.0f, 0.0f, 0x1.0fb2e6p-81f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.7c3504p-114f, 0.0f, 0x1.13f14p-93f, 0x1.d7f2b8p-84f,
     0x1.f076a2p-32f, 0.0f, 0.0f, 0.0f, 0x1.92849p-84f, 0.0f, 0x1.9aea02p-65f,
     0x1.9e9b9cp-28f, 0x1.89a17p-30f, 0.0f, 0x1.d9cd08p-78f, 0.0f, 0.0f,
     0x1.42203p-17f, 0.0f, 0x1.b7f822p-92f, 0.0f, 0.0f, 0x1.06dbd4p-16f, 0.0f,
     0x1.544598p-9f, 0x1.a6d3a8p-88f, 0x1.9aa856p-49f, 0x1.643282p-42f, 0.0f, 0.0f,
     0x1.8c59ap-85f, 0.0f, 0x1.ab95aap-41f, 0.0f, 0x1.6e5126p-34f, 0.0f, 0.0f,
     0x1.dfdf6cp-76f, 0.0f, 0x1.667212p-51f, 0x1.0aff68p-52f, 0.0f, 0x1.fa14acp-69f,
     0x1.c2d47p-14f, 0x1.2560fcp-6f, 0x1.f9561p-10f, 0.0f, 0.0f, 0x1.76e796p-99f,
     0.0f, 0x1.425d86p-16f, 0.0f, 0.0f, 0x1.0a9d84p-55f, 0x1.4a1564p-36f,
     0x1.3a798cp-108f, 0x1.3c480ap-13f, 0x1.5358c8p-37f, 0x1.096828p-23f,
     0x1.8242aep-71f, 0.0f, 0.0f, 0x1.b67f1ep-42f, 0x1.43fee8p-64f, 0.0f,
     0x1.27dfc6p-125f, 0.0f, 0x1.3b999ap-34f, 0.0f, 0.0f, 0x1.abb21ap-9f, 0.0f,
     0x1.7ad958p-13f, 0x1.b8c248p-106f, 0.0f, 0x1.a67f8p-6f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cc2a78p-100f, 0x1.0d063cp-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.042902p-122f, 0x1.3b4f6p-19f, 0.0f, 0x1.2d9258p-103f,
     0.0f, 0.0f, 0.0f, 0x1.37fcbap-104f, 0.0f, 0.0f, 0x1.f7a72ep-70f, 0x1.b58e4cp-2f,
     0.0f, 0x1.1586c4p-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.447854p-51f,
     0x1.29b664p-39f, 0.0f, 0x1.c0e324p-125f, 0x1.f8494ep-75f, 0x1.3b0fc4p-100f,
     0x1.325024p-34f, 0x1.7c8becp-47f, 0.0f, 0x1.3ba456p-45f, 0x1.d11e0ep-83f, 0.0f,
     0.0f, 0x1.69f2f2p-65f, 0x1.759d9p-88f, 0.0f, 0x1.862828p-100f, 0x1.8d056p-41f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.de8b3ap-96f, 0.0f,
     0x1.43740ap-80f, 0x1.eb005p-26f, 0.0f, 0.0f, 0x1.88d09ap-64f, 0x1.919b54p-125f,
     0x1.254ab6p-72f, 0x1.7e7c2p-31f, 0x1.9decap-115f, 0x1.2422ep-97f, 0.0f,
     0x1.89bc2ap-29f, 0x1.767552p-30f, 0x1.02e5eap-43f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4f35a2p-117f, 0x1.83f7ecp-31f, 0x1.f314e8p-104f, 0x1.784824p-51f, 0.0f, 0.0f,
     0.0f, 0x1.a7c3acp-115f, 0x1.f1d278p-89f, 0x1.77b858p-41f, 0x1.30084ep-77f,
     0x1.114c32p-66f, 0x1.144af6p-52f, 0x1.0fb41p-23f, 0x1.e7d868p-43f, 0.0f,
     0x1.4c7cfp-121f, 0x1.d61542p-10f, 0.0f, 0x1.93d9p-59f, 0x1.4ffcb8p-69f,
     0x1.d1601p-7f, 0.0f, 0.0f, 0x1.67e2a8p-43f, 0.0f, 0.0f, 0x1.8febf2p-105f,
     0x1.a1cbd6p-70f, 0x1.9d91p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.47a606p-72f, 0.0f, 0x1.11d8b4p-68f, 0x1.0b40eep-69f, 0x1.e1e72ep-114f, 0.0f,
     0.0f, 0.0f, 0x1.273898p-54f, 0.0f, 0.0f, 0.0f, 0x1.bc75acp-76f, 0x1.21a31cp-80f,
     0.0f, 0x1.ebb5dep-53f, 0x1.eb60b6p-21f, 0x1.2ef22p-48f, 0.0f, 0.0f,
     0x1.ac8304p-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2c6d0ap-30f, 0.0f, 0x1.d071d4p-46f,
     0.0f, 0x1.c56e1cp-18f, 0x1.953f9ap-77f, 0.0f, 0.0f, 0x1.5306eep-88f, 0.0f, 0.0f,
     0x1.7e4dbap-93f, 0x1.e67824p-103f, 0x1.f29f2cp-126f, 0x1.f99ba2p-69f, 0.0f, 0.0f,
     0x1.9ef916p-16f, 0x1.0bd824p-43f, 0x1.615634p-33f, 0x1.8e4b0ap-91f, 0.0f, 0.0f,
     0.0f, 0x1p0f, 0x1.81b036p-121f, 0x1.6380c4p-52f, 0x1.84515p-110f,
     0x1.c07096p-110f, 0x1.392706p-5f, 0.0f, 0.0f, 0x1.63f8e2p-60f, 0.0f, 0.0f, 0.0f,
     0x1.2ff54ap-37f, 0x1.555fp-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a4b078p-122f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.68b698p-99f, 0.0f, 0x1.ff9f2cp-59f, 0.0f, 0.0f,
     0.0f, 0x1.bc7ed4p-88f, 0.0f, 0.0f, 0x1.ca2c3cp-63f, 0.0f, 0x1.d4af3ap-35f,
     0x1.401db8p-99f, 0x1.ce3f3ep-50f, 0x1.4087b2p-110f, 0.0f, 0.0f, 0x1.b1e77ap-56f,
     0.0f, 0x1.916048p-45f, 0x1.f165aep-114f, 0x1.46e0fp-30f, 0.0f, 0x1.255d88p-71f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f65dbap-89f, 0.0f, 0x1.712db4p-32f, 0.0f,
     0x1.5d48p-21f, 0x1.f50086p-33f, 0.0f, 0x1.1e77a2p-108f, 0x1.2ae636p-46f, 0.0f,
     0x1.0dcc0ep-30f, 0.0f, 0x1.c03ce8p-23f, 0x1.5bc4d6p-22f, 0.0f, 0.0f,
     0x1.9666d8p-70f, 0x1.e1d04cp-112f, 0x1.a46de2p-19f, 0x1.5b9ba8p-46f, 0.0f,
     0x1.c67d2ep-105f, 0x1.795a98p-116f, 0.0f, 0x1p0f, 0x1.a62962p-32f, 0.0f,
     0x1.859c4p-81f, 0.0f, 0x1.4ef18ap-44f, 0.0f, 0.0f, 0.0f, 0x1.132dbap-39f, 0.0f,
     0.0f, 0.0f, 0x1.bb4b14p-16f, 0x1.e64f16p-50f, 0x1.f78eb8p-81f, 0x1.d7944p-122f,
     0x1.4dbafap-71f, 0x1.4d074ep-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ff5d8cp-87f, 0.0f,
     0.0f, 0x1.e29706p-66f, 0.0f, 0x1.19fd2p-78f, 0x1.c8f45p-70f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a5cca2p-47f, 0.0f, 0x1.6d13e4p-117f, 0x1.0002e6p-71f, 0.0f, 0.0f, 0.0f,
     0x1.7f8f32p-18f, 0.0f, 0.0f, 0.0f, 0x1.408dcp-3f, 0.0f, 0.0f, 0.0f,
     0x1.40167cp-47f, 0.0f, 0.0f, 0x1.ec9a8p-89f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8aeb28p-56f, 0x1.28ddb2p-105f, 0.0f, 0.0f, 0x1.e2eddp-73f, 0x1.8d951p-67f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c96b5ep-36f, 0.0f, 0.0f, 0x1.35ffdcp-91f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4e809p-32f, 0x1.0a23b8p-120f, 0x1.c107c2p-26f,
     0.0f, 0x1.10ddap-68f, 0.0f, 0.0f, 0.0f, 0x1.a59886p-63f, 0x1.cfceb8p-10f, 0.0f,
     0.0f, 0.0f, 0x1.9dc5d6p-5f, 0x1.ac040ap-71f, 0.0f, 0x1.987102p-87f, 0.0f,
     0x1.b0825ap-86f, 0x1.947376p-25f, 0x1.2ffbc4p-54f, 0x1.c002b4p-91f,
     0x1.199686p-106f, 0.0f, 0.0f, 0.0f, 0x1.9074fap-15f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.8ce7f8p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.757eacp-38f, 0x1.e41accp-89f, 0.0f, 0x1.20e4a8p-59f, 0x1.87ade6p-90f,
     0x1.d2348p-84f, 0.0f, 0x1.2f1986p-30f, 0.0f, 0x1.e3980ep-59f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c93326p-113f, 0x1.90f81ap-53f, 0.0f, 0x1.273874p-99f, 0.0f,
     0x1.948d1ap-98f, 0x1.3332e4p-36f, 0.0f, 0x1.6b34dp-65f, 0x1.7ae0cp-60f,
     0x1.0cd33ep-3f, 0x1.339a0ap-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e6494p-41f,
     0x1.e59df2p-74f, 0x1.eb72cp-13f, 0x1.828ceep-5f, 0x1.0c1b08p-103f, 0.0f, 0.0f,
     0x1.fea792p-59f, 0.0f, 0x1.1b9968p-113f, 0x1.169afp-26f, 0.0f, 0.0f,
     0x1.6fc0b4p-106f, 0.0f, 0x1.d63016p-120f, 0.0f, 0x1.bb6f0ep-60f, 0x1.6c4daep-43f,
     0x1.a4c0aap-103f, 0x1.228p-65f, 0x1.603c6cp-82f, 0.0f, 0.0f, 0.0f,
     0x1.4f0ae2p-68f, 0x1.d241a4p-88f, 0.0f, 0.0f, 0x1.daf77cp-35f, 0x1.820dd6p-109f,
     0x1.95856p-35f, 0x1.07cf86p-21f, 0.0f, 0x1.af47eap-100f, 0.0f, 0.0f,
     0x1.87ee8ap-108f, 0.0f, 0x1.43e522p-8f, 0.0f, 0x1.0a5b4ap-53f, 0.0f, 0.0f,
     0x1.6f88d4p-110f, 0x1.7e72bep-80f, 0.0f, 0x1.ab8978p-108f, 0.0f, 0x1.d83482p-78f,
     0x1.26b858p-82f, 0x1.98cb0ep-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.606622p-51f, 0.0f,
     0x1.5c2258p-6f, 0.0f, 0.0f, 0x1.d4cef8p-26f, 0.0f, 0.0f, 0x1.98b79p-60f, 0.0f,
     0.0f, 0x1.515c7ap-89f, 0x1.95543ap-126f, 0x1.064906p-29f, 0.0f, 0x1.e5a6d8p-106f,
     0x1.c45edap-20f, 0.0f, 0.0f, 0x1.6f1a42p-56f, 0.0f, 0.0f, 0x1.8a28aep-28f, 0.0f,
     0x1.b05548p-58f, 0x1.c86c24p-65f, 0x1.42a9f8p-104f, 0.0f, 0x1.f53ebp-80f,
     0x1.ec82c8p-6f, 0.0f, 0.0f, 0x1.2b183ep-71f, 0x1.f14d26p-20f, 0.0f, 0.0f, 0.0f,
     0x1.1eaf9ap-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.139ccp-108f,
     0x1.8ad9d6p-52f, 0x1.b25c6cp-38f, 0x1.1a98cap-53f, 0.0f, 0.0f, 0.0f,
     0x1.5459dep-74f, 0.0f, 0.0f, 0.0f, 0x1.38a1ccp-5f, 0x1.871d5ap-58f,
     0x1.bea27cp-15f, 0.0f, 0.0f, 0x1.a1a70cp-116f, 0x1.2f6dfp-85f, 0x1.85da2p-50f,
     0.0f, 0.0f, 0x1.0f3954p-116f, 0.0f, 0.0f, 0.0f, 0x1.c713eap-67f, 0x1.ea8f5ap-84f,
     0.0f, 0.0f, 0.0f, 0x1.d0498ap-11f, 0.0f, 0.0f, 0x1.7d12fp-9f, 0x1.4619a4p-22f,
     0x1.8a14e4p-49f, 0x1.97fa46p-83f, 0x1.ef43cp-43f, 0.0f, 0.0f, 0x1.256c9cp-122f,
     0.0f, 0x1.b72ff8p-75f, 0x1.a9ab3cp-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f5be12p-78f,
     0.0f, 0x1.e88bbp-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8f7ca6p-83f,
     0x1.9b58dp-83f, 0.0f, 0x1.9a45cp-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3f754ap-43f, 0x1.6c84acp-33f, 0x1.58fa78p-29f, 0.0f, 0.0f, 0x1.92f944p-23f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5ed01p-99f, 0x1.020aap-33f, 0.0f, 0.0f, 0.0f,
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
            tmp1 = Sleef_finz_frfrexpf4_kvx(tmp0);
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
    printf("Sleef_finz_frfrexpf4_kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_frfrexpf4_kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
