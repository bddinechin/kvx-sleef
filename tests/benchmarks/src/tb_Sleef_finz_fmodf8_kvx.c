/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_fmodf8_kvx.c --function Sleef_finz_fmodf8_kvx \
 *     --arity 2 --headers sleef.h,ml_support_lib.h --input-formats \
 *     binary32,binary32 --vector-size 8 --function-input-vector-size 8 \
 *     --bench --no-embedded-bin --target kv3
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
     0x1.928062p-73f, 0x1.72e9f6p-83f, 0x1.0722d4p-84f, 0x1.d1d268p-34f,
     0x1.1e1e3cp-98f, 0.0f, 0.0f, 0x1.4711ep-40f, 0x1.c3135cp-12f, 0.0f,
     0x1.1173aap-78f, 0x1.494f9ep-61f, 0.0f, 0.0f, 0.0f, 0x1.0ad35cp-108f, 0.0f,
     0x1.8f42c4p-45f, 0x1.8e8c42p-38f, 0.0f, 0.0f, 0x1.c548bcp-110f, 0.0f,
     0x1.1f0b74p-82f, 0x1.10f35ap-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7b302ep-95f, 0.0f,
     0x1.e55206p-12f, 0.0f, 0x1.d7b21p-75f, 0.0f, 0x1.b533aap-102f, 0.0f, 0.0f, 0.0f,
     0x1.401494p-112f, 0x1.35eb62p-101f, 0x1.c64508p-112f, 0x1.6c70e4p-111f, 0.0f,
     0.0f, 0x1.82199p-73f, 0.0f, 0.0f, 0.0f, 0x1.5fb18ep-1f, 0.0f, 0x1.b4ebf6p-17f,
     0x1.588bd2p-107f, 0.0f, 0.0f, 0x1.7988dp-98f, 0.0f, 0.0f, 0x1.0b5482p-76f,
     0x1.fee7acp-72f, 0x1.26a158p-122f, 0x1.8c5ea6p-126f, 0.0f, 0x1.68c95p-2f, 0.0f,
     0.0f, 0x1.b2d10cp-65f, 0.0f, 0.0f, 0x1.d699aep-43f, 0x1.ef9e94p-74f, 0.0f,
     0x1.979bc8p-60f, 0x1.68a196p-47f, 0x1.01de7cp-27f, 0x1.0c33e6p-15f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.8867acp-12f, 0x1.9299eep-111f, 0.0f, 0x1.fd867ap-117f, 0.0f,
     0.0f, 0.0f, 0x1.09836ap-122f, 0.0f, 0.0f, 0.0f, 0x1.c00d4ap-107f, 0.0f,
     0x1.b300bap-75f, 0.0f, 0.0f, 0x1.f00a6ep-3f, 0x1.7d4168p-13f, 0.0f,
     0x1.017b28p-21f, 0.0f, 0.0f, 0.0f, 0x1.af1174p-102f, 0x1.8e868p-78f,
     0x1.f1d8bp-106f, 0x1.22e258p-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4097cep-36f,
     0.0f, 0x1.136f92p-15f, 0x1.c3e98p-8f, 0x1.e371eep-38f, 0.0f, 0x1.01f2aep-87f,
     0x1.a1ef6ep-124f, 0.0f, 0.0f, 0x1.ee6134p-95f, 0.0f, 0x1.860f06p-68f,
     0x1.3f8b86p-60f, 0x1.db77e6p-16f, 0x1.887e1ep-6f, 0x1.91d138p-30f, 0.0f, 0.0f,
     0.0f, 0x1.d7862ap-22f, 0.0f, 0.0f, 0x1.3e0f1ep-58f, 0x1.dce15ap-35f, 0.0f,
     0x1.d14296p-103f, 0.0f, 0.0f, 0x1.cc5988p-120f, 0.0f, 0.0f, 0x1.d53382p-36f,
     0x1.acb618p-59f, 0x1.8cab9p-42f, 0x1.5d762p-110f, 0.0f, 0x1.aedd74p-39f, 0.0f,
     0x1.73e91p-90f, 0.0f, 0.0f, 0x1.b7dc16p-30f, 0.0f, 0.0f, 0.0f, 0x1.2933fep-118f,
     0x1.9e350ap-46f, 0.0f, 0x1.cee102p-63f, 0.0f, 0.0f, 0x1.92f43ap-42f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e41ed4p-50f, 0.0f, 0x1.97041cp-39f, 0x1.f78e3ep-113f, 0.0f, 0.0f,
     0x1.5af8a2p-26f, 0.0f, 0x1.45b42ep-25f, 0x1.2b8892p-80f, 0x1.4aef38p-105f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.897ae2p-69f, 0x1.8b4a8p-111f, 0x1.aed75ep-25f, 0.0f,
     0x1.e00d1cp-67f, 0x1.9ad18p-75f, 0x1.c1922ep-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ddbf16p-122f, 0.0f, 0.0f, 0.0f, 0x1.ddbef2p-12f, 0x1.207f92p-87f, 0.0f, 0.0f,
     0.0f, 0x1.29bb26p-26f, 0x1.2838a4p-107f, 0x1.0f47bp-45f, 0.0f, 0x1.a0cd3ep-116f,
     0x1.5f9d8cp-57f, 0x1.7e244ap-59f, 0x1.2299f8p-22f, 0.0f, 0x1.cac25ep-68f,
     0x1.1ba7c8p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a7166p-12f,
     0.0f, 0x1.e1d184p-2f, 0x1.6a8cf6p-17f, 0x1.315a2cp-105f, 0x1.e9bb38p-123f, 0.0f,
     0x1.f4104cp-4f, 0.0f, 0.0f, 0x1.ea866ep-64f, 0.0f, 0.0f, 0x1.4923ap-29f, 0.0f,
     0x1.f6ad2ep-11f, 0.0f, 0.0f, 0.0f, 0x1.f719f4p-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c4148ap-104f, 0.0f, 0.0f, 0x1.9531ecp-89f, 0x1.fa818ep-43f,
     0x1.198f2ep-61f, 0.0f, 0x1.2dc6acp-114f, 0x1.bf76acp-45f, 0x1.cc94acp-72f,
     0x1.d0737ap-116f, 0x1.bafc16p-73f, 0x1.3a5d08p-8f, 0.0f, 0x1.000864p-1f,
     0x1.0ef524p-104f, 0x1.6fae86p-1f, 0.0f, 0x1.2c24dp-33f, 0.0f, 0x1.07a91cp-30f,
     0.0f, 0.0f, 0.0f, 0x1.330842p-112f, 0x1.ef8fc2p-87f, 0x1.a3a6d2p-93f, 0.0f, 0.0f,
     0x1.d660f2p-7f, 0x1.6499e6p-28f, 0.0f, 0x1.146704p-92f, 0x1.c08478p-119f, 0.0f,
     0.0f, 0.0f, 0x1.1bee0ep-53f, 0.0f, 0x1.ef0cbp-82f, 0x1.dd3a5cp-113f, 0.0f,
     0x1.b3d23ap-39f, 0.0f, 0x1.a92edp-60f, 0x1.72d1b6p-80f, 0x1.71ce6ap-40f, 0.0f,
     0x1.ff1af4p-68f, 0.0f, 0.0f, 0x1.ceb506p-107f, 0.0f, 0x1.bc1faap-77f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.2c1c8p-69f, 0x1.dec7a4p-74f, 0x1.03dce6p-32f, 0.0f,
     0x1.3498bep-126f, 0x1.e101a8p-14f, 0.0f, 0.0f, 0x1.3cb572p-15f, 0.0f,
     0x1.24e2acp-98f, 0.0f, 0.0f, 0x1.dbd66ep-73f, 0x1.b3b3a8p-17f, 0.0f, 0x1p0f,
     0x1.e5b1c2p-38f, 0.0f, 0x1.158886p-124f, 0x1.49cee4p-1f, 0.0f, 0x1.059e06p-20f,
     0.0f, 0x1.4e6e36p-69f, 0.0f, 0x1.1d002ep-18f, 0x1.240d4ap-8f, 0.0f, 0.0f,
     0x1.2f4a44p-63f, 0x1.ddcc6cp-6f, 0x1.34d716p-48f, 0x1.826eaap-90f, 0x1.43cbap-1f,
     0.0f, 0.0f, 0.0f, 0x1.482bfcp-25f, 0x1.efcc78p-93f, 0.0f, 0x1.acbd52p-62f, 0.0f,
     0.0f, 0x1.e09d64p-26f, 0x1.c35108p-77f, 0.0f, 0x1.545dbep-40f, 0x1.b1bd02p-19f,
     0.0f, 0.0f, 0x1.a866eap-49f, 0.0f, 0x1.e37d1cp-89f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e7195cp-126f, 0x1.98bd8p-98f, 0x1.1c2c3cp-40f, 0.0f, 0.0f, 0.0f,
     0x1.ea2adp-111f, 0.0f, 0.0f, 0x1.23817cp-22f, 0x1.bc8b92p-111f, 0x1.324c68p-63f,
     0x1.d64606p-104f, 0x1.896c72p-74f, 0.0f, 0x1.553b18p-66f, 0.0f, 0x1.a6b226p-53f,
     0.0f, 0.0f, 0x1.f991fep-57f, 0.0f, 0.0f, 0.0f, 0x1.98add4p-68f, 0x1p0f,
     0x1.9dca4ap-91f, 0.0f, 0x1.2630cep-9f, 0x1.bd27d8p-115f, 0x1.0938b4p-70f,
     0x1.4331dep-43f, 0x1.7befb2p-66f, 0.0f, 0.0f, 0.0f, 0x1.761b3ap-82f, 0.0f, 0.0f,
     0.0f, 0x1.1d8e28p-21f, 0x1.0b1b5cp-67f, 0x1.7a60cap-36f, 0.0f, 0.0f,
     0x1.b82ab4p-99f, 0.0f, 0x1.10a3d6p-65f, 0.0f, 0.0f, 0x1.d1cf6cp-106f,
     0x1.1ee5dp-24f, 0.0f, 0x1.f0292p-61f, 0x1.02cb78p-70f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.13feccp-11f, 0x1.0ccb16p-45f, 0.0f, 0.0f, 0.0f, 0x1.0a54ecp-2f,
     0x1.6c6d38p-78f, 0.0f, 0x1.da9d66p-25f, 0.0f, 0x1.69b0b8p-117f, 0x1.1ff276p-92f,
     0x1.05d18ep-69f, 0x1.7cea58p-28f, 0x1.b1efe6p-59f, 0x1.5cb13ap-101f,
     0x1.a2a98p-37f, 0x1.ce0364p-56f, 0x1.1374ap-57f, 0.0f, 0.0f, 0.0f,
     0x1.9b4efp-82f, 0.0f, 0x1.04a3eap-49f, 0.0f, 0.0f, 0x1.2c6784p-47f,
     0x1.3840e8p-81f, 0x1.ccca2cp-37f, 0x1.636e46p-62f, 0x1.5b189p-51f, 0.0f, 0.0f,
     0.0f, 0x1.11b1d8p-9f, 0.0f, 0.0f, 0.0f, 0x1.07810ep-58f, 0.0f, 0x1.9c2b3cp-96f,
     0.0f, 0.0f, 0.0f, 0x1.343bcep-119f, 0x1.7f573p-115f, 0.0f, 0x1.5c64e8p-33f, 0.0f,
     0x1.bbf0a2p-21f, 0x1.79869ep-36f, 0.0f, 0x1.8ed55cp-60f, 0x1.d5e014p-10f,
     0x1.84baeap-70f, 0.0f, 0x1.a6ed3ep-110f, 0x1.004f4ap-100f, 0x1.3d9a38p-94f, 0.0f,
     0.0f, 0x1.fdbd7p-102f, 0.0f, 0.0f, 0x1.c3ccbep-112f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9689c6p-79f, 0.0f, 0.0f, 0x1.17b234p-47f, 0x1.e70a1ap-66f, 0x1.ba4cap-16f,
     0.0f, 0x1.2a0062p-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7948bap-103f, 0.0f, 0.0f,
     0.0f, 0x1.f1ad26p-73f, 0.0f, 0x1.b2a6ecp-41f, 0x1.57853cp-111f, 0.0f,
     0x1.38d394p-54f, 0.0f, 0x1.cacde4p-85f, 0.0f, 0.0f, 0x1.13db9ep-4f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.9563cep-93f, 0x1.4d4c8p-78f, 0x1.9d9b9ep-84f, 0x1.5735ap-2f,
     0.0f, 0x1.594656p-75f, 0.0f, 0.0f, 0x1.ef2f5p-22f, 0x1.1706bp-65f, 0.0f, 0.0f,
     0.0f, 0x1.2573eep-5f, 0.0f, 0.0f, 0.0f, 0x1.b68bc8p-52f, 0.0f, 0x1.2eep-117f,
     0x1.a7226p-45f, 0.0f, 0x1.f230e6p-126f, 0x1.990286p-109f, 0x1.8ea262p-60f,
     0x1.4bf632p-111f, 0.0f, 0x1.d777dap-71f, 0x1.5357aap-7f, 0.0f, 0x1.f43dcp-121f,
     0.0f, 0.0f, 0.0f, 0x1.01e336p-70f, 0x1.db1488p-56f, 0x1.f4be3cp-113f, 0.0f,
     0x1.0e30cp-113f, 0.0f, 0.0f, 0x1.8e783ap-83f, 0x1.e39872p-19f, 0x1.1108d2p-121f,
     0x1.afb99cp-32f, 0x1.a761f6p-7f, 0.0f, 0x1.2f4768p-125f, 0.0f, 0.0f,
     0x1.8e4d2p-3f, 0x1.2cd52p-122f, 0x1.601e9cp-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b347bep-103f, 0x1.03c92ap-61f, 0x1.b6399ep-5f, 0x1.670226p-72f,
     0.0f, 0x1.a6b34ep-92f, 0.0f, 0x1.87774cp-74f, 0x1.e0e90cp-108f, 0x1.4f3974p-79f,
     0x1.1e387ap-27f, 0x1.b5bc7cp-1f, 0x1.ae39dcp-104f, 0.0f, 0x1.bdf918p-11f,
     0x1.c4870ap-50f, 0.0f, 0x1.50a37p-114f, 0.0f, 0x1.2d2eccp-64f, 0x1.cc5a0cp-103f,
     0.0f, 0.0f, 0.0f, 0x1.5a4af6p-113f, 0.0f, 0.0f, 0x1.85babp-13f, 0x1.f3e6f2p-17f,
     0x1.a48bfep-16f, 0.0f, 0x1.0353a2p-9f, 0x1.bd8212p-65f, 0x1.dc7018p-106f,
     0x1.3795d8p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6be652p-121f,
     0x1.8fac36p-69f, 0.0f, 0.0f, 0.0f, 0x1.d00b68p-74f, 0x1.8298cap-39f, 0.0f,
     0x1.89b5c2p-66f, 0x1.55134p-100f, 0x1.593448p-9f, 0.0f, 0.0f, 0x1.985768p-126f,
     0.0f, 0.0f, 0x1.3508c4p-55f, 0x1.cb5dbcp-94f, 0.0f, 0x1.1e7f1cp-101f, 0.0f,
     0x1.67baeap-26f, 0x1.a3d698p-40f, 0x1.cf6e42p-39f, 0.0f, 0x1.ab2ffcp-8f,
     0x1.ca837cp-10f, 0x1.aa9328p-39f, 0.0f, 0.0f, 0x1.6465ap-84f, 0x1.11c13ep-7f,
     0x1.9f4a58p-75f, 0.0f, 0.0f, 0x1.4fbe6ep-101f, 0x1.07f16cp-18f, 0x1.dfd8dep-64f,
     0.0f, 0.0f, 0x1.7915a8p-99f, 0x1.15bd1ep-28f, 0.0f, 0x1.1a2dfcp-32f, 0.0f,
     0x1.329056p-79f, 0x1.4204b8p-30f, 0.0f, 0x1.287b6cp-99f, 0.0f, 0x1.28a348p-45f,
     0x1.148e14p-66f, 0x1.23ee28p-70f, 0x1.c5f1bep-36f, 0.0f, 0.0f, 0.0f,
     0x1.a9d744p-114f, 0x1.ad54f2p-27f, 0x1.47e3bcp-91f, 0x1.3c1eecp-59f,
     0x1.7b1bd6p-30f, 0x1.514912p-106f, 0x1.df6ea8p-80f, 0x1p0f, 0.0f, 0x1.1f7874p-3f,
     0x1.b86916p-52f, 0x1.e9a66cp-61f, 0x1.76a864p-12f, 0x1.86dbe8p-89f,
     0x1.928bf8p-4f, 0x1.b3cd76p-51f, 0.0f, 0x1.3335e8p-115f, 0.0f, 0x1.33f504p-2f,
     0x1.c7d0a8p-65f, 0.0f, 0.0f, 0.0f, 0x1.9673cep-113f, 0x1.45c12ep-73f, 0.0f, 0.0f,
     0x1.3653bap-42f, 0x1.727c74p-39f, 0.0f, 0x1.0b75b4p-26f, 0.0f, 0.0f,
     0x1.5c4b06p-15f, 0.0f, 0.0f, 0x1.6e4778p-88f, 0.0f, 0x1.e44d3cp-122f, 0.0f, 0.0f,
     0.0f, 0x1.255a22p-117f, 0.0f, 0x1.36255ep-93f, 0.0f, 0.0f, 0.0f, 0x1.b167ap-42f,
     0.0f, 0x1.af66fp-26f, 0.0f, 0x1.9620e6p-22f, 0x1.0dc0dap-12f, 0x1.270588p-44f,
     0x1.830ca4p-17f, 0.0f, 0x1.0afdf2p-1f, 0x1.c6328ap-112f, 0x1.298d3ap-31f,
     0x1.7d33ecp-44f, 0.0f, 0x1.d7d59ap-19f, 0x1.fda36ep-59f, 0x1.a67a4p-16f,
     0x1.09f59ep-2f, 0x1.cdad72p-51f, 0.0f, 0.0f, 0x1.c3d9dcp-61f, 0x1.d47a74p-37f,
     0.0f, 0x1.696e78p-68f, 0.0f, 0.0f, 0.0f, 0x1.51f4aap-80f, 0x1.dfc51ap-86f,
     0x1.b6ed1ap-22f, 0.0f, 0.0f, 0x1.d4ffecp-81f, 0.0f, 0.0f, 0x1.9df1eep-57f, 0.0f,
     0x1.76143ap-84f, 0x1.c99cf8p-18f, 0.0f, 0x1.fb49f6p-97f, 0.0f, 0.0f, 0.0f,
     0x1.4f832ep-6f, 0.0f, 0x1.1abbe4p-57f, 0.0f, 0x1.aa97aap-88f, 0x1.ea8558p-116f,
     0x1.0932ap-19f, 0.0f, 0.0f, 0.0f, 0x1.23fccp-105f, 0x1.f88eb4p-58f,
     0x1.7a660ep-116f, 0x1.d54f1p-9f, 0x1.451202p-91f, 0.0f, 0.0f, 0x1.1cf05ap-35f,
     0.0f, 0.0f, 0.0f, 0x1.13e2dp-23f, 0x1.5369c4p-8f, 0x1.aa7588p-29f, 0.0f,
     0x1.e376b2p-97f, 0x1.9645eap-106f, 0x1.282afep-54f, 0x1.9e554cp-75f, 0.0f,
     0x1.78308cp-1f, 0.0f, 0x1.3b2152p-60f, 0.0f, 0x1.86967ep-81f, 0.0f,
     0x1.1eaf42p-94f, 0x1.e956ecp-107f, 0.0f, 0x1.1fdcaep-89f, 0.0f, 0x1.f22b5cp-58f,
     0x1.60c5a4p-115f, 0.0f, 0x1.8fea9p-66f, 0.0f, 0x1.3b24fap-108f, 0.0f,
     0x1.b34a92p-119f, 0x1.05fa0cp-80f, 0x1.40940cp-87f, 0.0f, 0.0f, 0x1.18d384p-65f,
     0x1.6022b8p-13f, 0.0f, 0.0f, 0x1.d6db56p-61f, 0x1.1c57c2p-70f, 0x1.37ad04p-86f,
     0x1.cc9b98p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4446cp-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7cd0fap-22f,
     0x1.3c2eeap-17f, 0x1.bd6894p-26f, 0.0f, 0x1.f969a4p-43f, 0x1.1659d8p-72f,
     0x1.8bcbccp-44f, 0.0f, 0x1.6b7b06p-121f, 0x1.bdcb4p-98f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.5d182p-63f, 0.0f, 0x1.4c9148p-61f, 0x1.8802bap-93f, 0x1.8bf4a2p-70f,
     0x1.f45094p-62f, 0.0f, 0.0f, 0x1.bc9ed2p-61f, 0x1.739688p-95f, 0.0f, 0.0f, 0.0f,
     0x1.3e10eap-30f, 0x1.c9c1fap-40f, 0.0f, 0x1.bcdcccp-109f, 0.0f, 0x1.15dcf6p-79f,
     0x1.c5850ap-100f, 0x1.9a829ap-95f, 0.0f, 0.0f, 0.0f, 0x1.eb5becp-6f, 0.0f, 0.0f,
     0x1.dc5c52p-13f, 0x1.6192a8p-59f, 0.0f, 0x1.96b498p-56f, 0.0f, 0x1.922b78p-45f,
     0x1.167296p-25f, 0.0f, 0.0f, 0x1.0acba6p-22f, 0x1.4e0144p-125f, 0x1.9fd86cp-103f,
     0.0f, 0x1.b6b4ccp-92f, 0x1.a1df38p-53f, 0x1.fad5b6p-48f, 0.0f, 0x1.6c21c6p-15f,
     0x1.1c50e2p-113f, 0.0f, 0x1.9cfefp-54f, 0x1.ff4a9ap-41f, 0x1.983d36p-38f,
     0x1.15a8a2p-100f, 0x1.864966p-48f, 0.0f, 0.0f, 0x1.510f26p-19f, 0.0f,
     0x1.347ddep-82f, 0x1.b768bep-118f, 0.0f, 0.0f, 0x1.59fa26p-25f, 0x1.db4b8cp-35f,
     0x1.d41512p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.407dep-76f, 0x1.de4e9cp-93f, 0.0f,
     0.0f, 0x1.76ad7ep-49f, 0x1.7968ecp-24f, 0x1.a959b8p-88f, 0.0f, 0.0f,
     0x1.e63d96p-111f, 0.0f, 0.0f, 0.0f, 0x1.ec98ap-1f, 0.0f, 0.0f, 0.0f,
     0x1.9ca87ep-106f, 0.0f, 0x1.0b4d14p-90f, 0.0f, 0x1.732b0ep-125f, 0x1.c52498p-93f,
     0x1.bbd49ap-92f, 0x1.3ae99ap-33f, 0x1.8c4dd2p-21f, 0x1.7ae612p-1f, 0.0f,
     0x1.e67abp-18f, 0.0f, 0x1.db5f86p-103f, 0x1.102c7p-30f, 0x1.9c8528p-71f,
     0x1.7849f8p-13f, 0x1.b7c23ap-20f, 0x1.032ddep-20f, 0.0f, 0x1.480bf8p-46f, 0.0f,
     0.0f, 0.0f, 0x1.14d1a4p-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b38538p-35f,
     0x1.81f508p-94f, 0.0f, 0x1.a87656p-44f, 0x1.c4457p-72f, 0.0f, 0x1.a8452cp-68f,
     0.0f, 0x1.c4d726p-94f, 0x1.b15972p-36f, 0x1.e3d4c2p-122f, 0.0f, 0x1.88842cp-78f,
     0.0f, 0x1.410134p-41f, 0x1.8bea22p-64f, 0x1.7d402ep-34f, 0x1.ffbdcep-81f, 0.0f,
     0x1.e137bcp-106f, 0x1.4d517ep-28f, 0x1.59405ap-11f
};
static const float external_bench_wrapper_input_table_arg1[1008]  = {
     0.0f, 0.0f, 0x1.9230dp-68f, 0x1.f15c86p-11f, 0x1.44e5dp-30f, 0x1.0ea84ap-108f,
     0x1.761802p-93f, 0x1.3b16b4p-47f, 0.0f, 0.0f, 0x1.0a93aap-84f, 0.0f,
     0x1.9b4a62p-48f, 0x1.8282b6p-110f, 0.0f, 0x1.fcfd5cp-25f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a59eb2p-50f, 0x1.489174p-28f, 0x1.1335ccp-48f, 0.0f, 0x1.df6d42p-104f,
     0x1.26d22cp-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.98736cp-41f, 0x1.02b9fep-93f,
     0x1.0efcfp-41f, 0x1.f9cf96p-45f, 0.0f, 0.0f, 0x1.f85904p-61f, 0x1.f87222p-1f,
     0x1.0a2b3ap-26f, 0x1.d530d8p-123f, 0x1.54b5e8p-61f, 0x1.717e14p-41f,
     0x1.33a4dep-110f, 0.0f, 0x1.bf62c6p-5f, 0.0f, 0x1.32227ep-78f, 0.0f,
     0x1.cdb3eep-19f, 0x1.75d3bcp-7f, 0x1.1cd8a4p-119f, 0.0f, 0.0f, 0.0f,
     0x1.123168p-113f, 0x1.1e97cp-15f, 0.0f, 0.0f, 0x1.846ffap-88f, 0.0f, 0.0f,
     0x1.f10df4p-91f, 0x1.bb6354p-57f, 0.0f, 0.0f, 0.0f, 0x1.156feap-4f,
     0x1.15d0e6p-44f, 0.0f, 0.0f, 0x1.c5b36ap-68f, 0x1.a270c2p-69f, 0.0f,
     0x1.b2e916p-21f, 0x1.44716cp-25f, 0x1.b8f156p-51f, 0x1.177e74p-115f,
     0x1.0b0604p-58f, 0.0f, 0x1.8f6ddap-16f, 0x1.d67adcp-56f, 0.0f, 0x1.f6a9f8p-45f,
     0x1.c17a1ep-49f, 0x1.4375c4p-5f, 0x1.fe02b4p-69f, 0x1.c221f4p-42f,
     0x1.30fa1p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cd92c6p-107f, 0x1.c259cap-35f,
     0x1.9f47dcp-41f, 0x1.a143c4p-102f, 0.0f, 0x1.884596p-121f, 0x1.da8584p-52f,
     0x1.22819p-36f, 0.0f, 0.0f, 0.0f, 0x1.25ef02p-28f, 0x1.ff8a24p-13f, 0.0f, 0.0f,
     0x1.640386p-55f, 0.0f, 0.0f, 0x1.cfc4f8p-58f, 0.0f, 0.0f, 0x1.ea4358p-89f, 0.0f,
     0x1.181822p-120f, 0.0f, 0x1.8fe10cp-19f, 0x1.9149eep-74f, 0x1.8d7168p-118f,
     0x1.99b438p-46f, 0x1.a680b2p-120f, 0x1.e47a2ep-41f, 0.0f, 0x1.8ad89ap-22f, 0.0f,
     0x1.0fc5f2p-17f, 0.0f, 0.0f, 0x1.dd0bdap-65f, 0x1.a32e56p-121f, 0.0f,
     0x1.8d33ccp-18f, 0x1.38b15cp-14f, 0x1.73e374p-14f, 0.0f, 0x1.e7e16ep-54f,
     0x1.2cdf16p-60f, 0.0f, 0x1.f29b42p-18f, 0.0f, 0x1.9d0694p-23f, 0.0f,
     0x1.07fb94p-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1efa9ap-9f, 0x1.df30e2p-34f,
     0.0f, 0x1.8a3716p-98f, 0.0f, 0x1.31b332p-57f, 0x1.b25f52p-79f, 0.0f,
     0x1.c08d7ep-124f, 0.0f, 0.0f, 0.0f, 0x1.62a6bap-13f, 0x1.4b927ep-125f,
     0x1.c2d4c8p-75f, 0x1.7a371ep-36f, 0x1.27cc0ep-70f, 0.0f, 0x1.df7e22p-118f, 0.0f,
     0x1.b18bdcp-124f, 0x1.e0b6ecp-116f, 0x1.bb2df8p-109f, 0.0f, 0.0f,
     0x1.794918p-44f, 0x1.8ca0c4p-14f, 0.0f, 0x1.3aaed8p-12f, 0x1.118eb2p-31f,
     0x1.93c124p-38f, 0x1.7db12ap-64f, 0x1.9e5216p-95f, 0x1.a406c8p-8f,
     0x1.a905b2p-106f, 0.0f, 0x1.733586p-32f, 0x1.f41e28p-68f, 0.0f, 0.0f,
     0x1.159ed2p-64f, 0.0f, 0x1.94b04cp-106f, 0x1.59a6fep-73f, 0x1.25e918p-22f,
     0x1.29c6f4p-77f, 0x1.9eb15ep-4f, 0x1.a0ccf8p-94f, 0x1.122436p-6f,
     0x1.7fe56cp-48f, 0.0f, 0.0f, 0.0f, 0x1.47233p-91f, 0.0f, 0x1.d24afcp-9f, 0.0f,
     0x1.a37ad6p-20f, 0x1.898c4cp-70f, 0x1.07b7e6p-51f, 0x1.62f776p-19f, 0.0f,
     0x1.9f90e4p-26f, 0x1.87e64cp-81f, 0.0f, 0.0f, 0.0f, 0x1.eccd8ep-34f,
     0x1.2d1f24p-33f, 0x1.ceb8c2p-54f, 0x1.e58a2cp-53f, 0.0f, 0x1.58a45cp-19f,
     0x1.19d58p-14f, 0x1.c338dep-34f, 0x1.d5ff22p-122f, 0.0f, 0.0f, 0x1.a5d286p-96f,
     0x1.bccb9ep-19f, 0x1.c8ad3ap-74f, 0.0f, 0.0f, 0.0f, 0x1.81165ap-119f, 0.0f,
     0x1.3dca3cp-56f, 0.0f, 0.0f, 0x1.c3fc2p-49f, 0.0f, 0x1.ab61ep-102f,
     0x1.f14728p-70f, 0.0f, 0x1.2cbcc8p-45f, 0.0f, 0x1.64ab2ep-82f, 0.0f,
     0x1.81f47p-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bbbb5p-113f, 0.0f, 0x1.e825a2p-84f,
     0x1.81285ap-75f, 0x1.1ae73ap-1f, 0x1.1bbc2ap-121f, 0x1.bb7a72p-116f, 0.0f,
     0x1.25505p-106f, 0.0f, 0.0f, 0x1.947ab8p-53f, 0x1.4191dp-44f, 0x1.579178p-28f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f57b62p-29f, 0x1.9aa3d2p-2f, 0x1.56ef72p-29f,
     0x1.ac83ecp-88f, 0x1.b20bccp-93f, 0.0f, 0x1.d16d8ap-61f, 0.0f, 0x1.9a0e08p-44f,
     0x1.380fbcp-121f, 0x1.5ce86cp-69f, 0x1.618a8ep-65f, 0x1.1e0736p-96f,
     0x1.c77b46p-51f, 0x1.3ad58cp-61f, 0.0f, 0.0f, 0x1.79de98p-4f, 0x1.5072aap-98f,
     0x1.57d662p-8f, 0x1.c75c18p-112f, 0x1.f932dp-124f, 0.0f, 0.0f, 0x1.47e89p-48f,
     0x1.b172f6p-125f, 0.0f, 0.0f, 0x1.5af2aap-80f, 0x1.e3273ep-53f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.99935ap-15f, 0x1.6858cep-70f, 0.0f,
     0x1.ba7c3ap-66f, 0x1.328edp-100f, 0x1.d691a2p-12f, 0x1.314718p-116f, 0.0f, 0.0f,
     0.0f, 0x1.91f3f8p-109f, 0x1.0b46e4p-79f, 0x1.3b8ac8p-97f, 0.0f, 0.0f,
     0x1.b708e4p-73f, 0.0f, 0x1.1a973ap-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c61c6ep-82f,
     0.0f, 0.0f, 0x1.4f1feep-113f, 0.0f, 0x1.50820ap-77f, 0x1.5473ecp-78f,
     0x1.40351p-60f, 0x1.77b79ap-88f, 0x1.99ec4ap-36f, 0x1.581422p-29f,
     0x1.64f4f4p-41f, 0x1.48926p-37f, 0x1.7365b8p-84f, 0.0f, 0x1.ed23a2p-25f,
     0x1.8885fep-77f, 0.0f, 0.0f, 0x1.9513p-24f, 0.0f, 0.0f, 0x1.d11824p-92f,
     0x1.88c1fep-114f, 0.0f, 0.0f, 0x1.3e3fa2p-69f, 0.0f, 0.0f, 0x1.ec3e9ap-15f,
     0x1.04ef56p-100f, 0.0f, 0x1.3ee952p-73f, 0x1.b41cccp-78f, 0.0f, 0x1.a2f8d4p-73f,
     0.0f, 0x1.b2431ap-37f, 0x1.a27554p-79f, 0x1.167732p-104f, 0.0f, 0x1.41fa9p-4f,
     0.0f, 0.0f, 0.0f, 0x1.03b55ep-87f, 0x1.9826d8p-107f, 0.0f, 0x1.f2469ap-75f,
     0x1.546776p-1f, 0.0f, 0x1.c35b26p-19f, 0x1.94ec3ep-93f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.ca9904p-12f, 0.0f, 0x1.128d2p-123f, 0.0f,
     0x1.e0e178p-68f, 0.0f, 0x1.2ffb28p-48f, 0x1.9b2d34p-96f, 0x1.94c01cp-66f,
     0x1.7fc9c6p-79f, 0.0f, 0.0f, 0x1.648aeep-123f, 0x1.6e8f66p-46f, 0x1.77840cp-48f,
     0.0f, 0x1.d021bep-67f, 0.0f, 0x1.96bb3p-1f, 0.0f, 0x1.91bc4cp-82f, 0.0f,
     0x1.e7d3dp-92f, 0.0f, 0x1.23255p-19f, 0x1.c40adcp-122f, 0.0f, 0x1.2c1d24p-45f,
     0x1.937b5p-80f, 0x1.def1aep-16f, 0x1.7f2c44p-47f, 0x1.0f9d18p-104f,
     0x1.657012p-49f, 0.0f, 0x1.ee201cp-116f, 0.0f, 0.0f, 0x1.ff771p-74f, 0.0f, 0.0f,
     0x1.485f86p-91f, 0x1.bca9c6p-36f, 0.0f, 0x1.1bdc76p-21f, 0.0f, 0x1.8dba0ap-109f,
     0.0f, 0.0f, 0x1.16766p-25f, 0x1.1b1258p-103f, 0.0f, 0x1.fafc9ep-114f, 0.0f,
     0x1.950e1p-40f, 0.0f, 0x1.7a8efep-104f, 0.0f, 0.0f, 0.0f, 0x1.bcf8cep-107f,
     0x1.e81542p-79f, 0.0f, 0.0f, 0x1.e306a6p-6f, 0x1.f4e722p-12f, 0.0f,
     0x1.736782p-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ceb014p-76f, 0x1.207d1ep-10f, 0.0f,
     0x1p0f, 0.0f, 0x1.9ea312p-106f, 0.0f, 0x1.8c3a52p-115f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fd79ep-47f, 0.0f, 0x1.cbf49p-64f, 0.0f, 0x1.d8f44ap-77f, 0.0f,
     0x1.3400a6p-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0de772p-66f, 0x1.f6431cp-50f,
     0.0f, 0x1.a61954p-47f, 0x1.6f26fcp-65f, 0.0f, 0x1.37a114p-11f, 0.0f,
     0x1.30e5a4p-48f, 0x1.070416p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7b8cbep-78f, 0.0f,
     0.0f, 0.0f, 0x1.686a08p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1272b6p-17f,
     0.0f, 0x1.a8a6ep-43f, 0x1.809a52p-54f, 0.0f, 0x1.c4f95p-25f, 0x1.8980d6p-114f,
     0.0f, 0.0f, 0x1.f5786ep-93f, 0.0f, 0x1.084c3cp-30f, 0.0f, 0.0f, 0x1.a45c48p-84f,
     0x1.3d294cp-62f, 0x1.bde23p-72f, 0.0f, 0x1.41d3aap-125f, 0x1.404d1ap-97f, 0.0f,
     0x1.0248aep-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.570ac6p-75f,
     0.0f, 0.0f, 0x1.4dd846p-25f, 0x1.bdd122p-88f, 0x1.0ab3ecp-40f, 0.0f, 0.0f,
     0x1.5bf074p-32f, 0x1.f2f6e2p-35f, 0.0f, 0x1.40a9cep-78f, 0.0f, 0x1.d4d87cp-56f,
     0x1.66f04cp-64f, 0.0f, 0x1.848e28p-83f, 0.0f, 0x1.2d8628p-92f, 0x1.07136ep-12f,
     0.0f, 0.0f, 0x1.1a85f2p-17f, 0.0f, 0x1.41bb2ep-110f, 0x1.a1d016p-99f, 0.0f,
     0x1.a0e7eap-115f, 0.0f, 0x1.620e06p-41f, 0.0f, 0.0f, 0x1.4c3e8cp-64f, 0.0f, 0.0f,
     0.0f, 0x1.f9c168p-52f, 0x1.b24084p-30f, 0x1.52e5ep-122f, 0.0f, 0.0f, 0.0f,
     0x1.ff91dp-5f, 0.0f, 0.0f, 0x1.a064bep-16f, 0.0f, 0.0f, 0x1.0618aap-82f,
     0x1.b17214p-125f, 0x1.c6c556p-58f, 0x1.354746p-31f, 0x1.6d1274p-91f,
     0x1.405f0cp-99f, 0x1.3ba012p-13f, 0x1.cc0c12p-50f, 0x1.83f8b2p-95f, 0.0f, 0.0f,
     0.0f, 0x1.e23ee6p-53f, 0x1.f54556p-19f, 0.0f, 0x1.538c02p-72f, 0x1.248478p-68f,
     0.0f, 0x1.40d832p-58f, 0x1.00e46cp-102f, 0.0f, 0.0f, 0x1.d3539cp-43f,
     0x1.78ca62p-117f, 0x1.accd24p-53f, 0.0f, 0.0f, 0x1.fb9852p-124f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c6b1p-118f, 0.0f, 0.0f, 0x1.b09282p-30f,
     0.0f, 0.0f, 0.0f, 0x1.e6de7p-9f, 0x1.53d49ep-12f, 0x1.7e8f3p-13f, 0.0f,
     0x1.77ba84p-17f, 0.0f, 0x1.069058p-73f, 0.0f, 0.0f, 0.0f, 0x1.7a0bbap-88f, 0.0f,
     0.0f, 0x1.391c2p-14f, 0.0f, 0x1.4e5fd8p-111f, 0x1.cf1eb8p-90f, 0x1.2d8a02p-51f,
     0x1.af77dcp-42f, 0x1.cec026p-105f, 0.0f, 0x1.a32718p-119f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.4baaaep-15f, 0x1.2ec24cp-82f, 0.0f, 0x1.bce056p-9f, 0.0f, 0.0f, 0.0f,
     0x1.2b218ap-57f, 0x1.d5331p-58f, 0.0f, 0x1.ff4aacp-54f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.3b4f2cp-11f, 0x1.ebb096p-104f, 0x1.4b104ap-21f, 0.0f, 0.0f, 0.0f,
     0x1.56271ep-67f, 0x1.c674cep-112f, 0x1.c1c85ap-112f, 0.0f, 0x1.df11c8p-36f, 0.0f,
     0.0f, 0.0f, 0x1.d43e8cp-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.edd916p-38f,
     0x1.107d48p-92f, 0x1.61e8d8p-48f, 0x1.d82cb6p-117f, 0x1.53b978p-21f,
     0x1.e7f94cp-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dc3a34p-2f, 0x1.5b6406p-70f,
     0x1.66186ap-42f, 0x1.ebbba6p-87f, 0.0f, 0x1.db9672p-62f, 0x1.35fe26p-61f, 0.0f,
     0x1.e3c0cp-76f, 0x1.94c338p-57f, 0x1.71d6c2p-63f, 0.0f, 0x1.e2433ap-38f, 0.0f,
     0.0f, 0.0f, 0x1.32c1f2p-50f, 0x1.d8963p-4f, 0x1.e86862p-12f, 0x1.4abca2p-2f,
     0x1.0e4b86p-39f, 0.0f, 0.0f, 0x1.5570cep-43f, 0x1.45cc56p-16f, 0x1.aa515ap-93f,
     0x1.a959acp-64f, 0x1.bbe31p-20f, 0.0f, 0.0f, 0.0f, 0x1.ca3c84p-61f,
     0x1.ad2f7p-91f, 0.0f, 0.0f, 0.0f, 0x1.f0af5p-21f, 0x1.a760b2p-2f, 0.0f, 0.0f,
     0x1.f09e16p-55f, 0x1.5f2d58p-125f, 0x1.56fdc6p-75f, 0.0f, 0.0f, 0x1.76aed2p-57f,
     0x1.6e8864p-122f, 0x1.3267ap-101f, 0x1.4f732ap-100f, 0.0f, 0x1.de0252p-61f, 0.0f,
     0x1.0cddfp-121f, 0.0f, 0.0f, 0x1.efffb2p-25f, 0.0f, 0x1.55a298p-70f, 0.0f, 0.0f,
     0.0f, 0x1.f2d5f2p-32f, 0.0f, 0.0f, 0.0f, 0x1.f76edep-93f, 0x1.8200e6p-67f, 0.0f,
     0x1.4c95fap-66f, 0.0f, 0.0f, 0x1.566768p-67f, 0x1.6881bep-125f, 0x1.cdccbep-75f,
     0x1.da01fep-120f, 0x1.6ebcp-100f, 0.0f, 0x1.e8ff1cp-42f, 0x1.307976p-2f,
     0x1.795e2p-9f, 0x1.2e9fbap-43f, 0x1.556ed6p-23f, 0x1.05b46cp-56f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f5b758p-76f, 0x1.60870cp-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.0d7fe6p-25f, 0x1.7d997ap-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b62584p-9f, 0x1.281774p-23f, 0.0f, 0x1.926fd6p-44f, 0.0f,
     0x1.c1782cp-61f, 0.0f, 0.0f, 0.0f, 0x1.06f03ap-9f, 0x1.d84e0cp-94f,
     0x1.71ad1ap-107f, 0.0f, 0x1.c7f51ap-30f, 0.0f, 0x1.742a5p-83f, 0.0f, 0.0f, 0.0f,
     0x1.14983ap-98f, 0x1.07b044p-116f, 0x1.8161ecp-39f, 0x1.983624p-31f, 0.0f,
     0x1.b60428p-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e7b5d8p-78f, 0x1.4be52ap-110f, 0.0f,
     0.0f, 0.0f, 0x1.a0eacap-68f, 0x1.8d570cp-113f, 0x1.f6071p-13f, 0.0f, 0.0f,
     0x1.9c421ep-39f, 0.0f, 0.0f, 0.0f, 0x1.723eb6p-15f, 0x1.f7e294p-95f,
     0x1.433018p-3f, 0.0f, 0.0f, 0x1.24394p-57f, 0.0f, 0.0f, 0x1.c2f17ap-33f, 0.0f,
     0x1.2479e4p-89f, 0.0f, 0x1.901a72p-105f, 0x1.ca1f68p-115f, 0.0f, 0x1.d2f1e6p-99f,
     0.0f, 0x1.178228p-123f, 0.0f, 0.0f, 0.0f, 0x1.f2844ep-74f, 0.0f, 0x1.6fa6c2p-8f,
     0x1.27bbeep-39f, 0x1.78eaa4p-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c8601ap-40f,
     0x1.caa224p-68f, 0x1.1a073ep-36f, 0.0f, 0x1.e1d87ep-57f, 0.0f, 0x1.fef372p-99f,
     0x1.590986p-30f, 0x1.2c77ccp-88f, 0x1.17d138p-90f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.be80f2p-126f, 0x1.c4bff2p-85f, 0.0f, 0x1.8feb2p-55f, 0x1.ce5a4ap-22f, 0.0f,
     0.0f, 0x1.e23636p-106f, 0.0f, 0.0f, 0.0f, 0x1.e39ba8p-29f, 0x1.5cb7fap-67f, 0.0f,
     0.0f, 0x1.da21ecp-120f, 0.0f, 0x1.923d24p-21f, 0x1.535bacp-66f, 0x1.266714p-74f,
     0x1.95c89ap-55f, 0.0f, 0x1.a41e48p-51f, 0x1.f21b36p-71f, 0x1.bc3978p-47f,
     0x1.eb90aep-10f, 0x1.345d48p-28f, 0.0f, 0.0f, 0.0f, 0x1.4994d6p-77f,
     0x1.b40934p-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.84011p-41f, 0.0f, 0x1.b84abp-49f,
     0.0f, 0x1.c67c9ap-24f, 0.0f, 0.0f, 0x1.7b0a2p-121f, 0x1.06f198p-18f,
     0x1.fc19fep-117f, 0x1.fd0f96p-64f, 0x1.3fcfc8p-65f, 0x1p0f, 0.0f, 0.0f,
     0x1.d7204ep-14f, 0.0f, 0.0f, 0x1.b52286p-79f, 0x1.28ee26p-100f, 0.0f, 0.0f, 0.0f,
     0x1.c92d62p-11f, 0x1.13bf94p-55f, 0x1.562decp-35f, 0.0f, 0x1.79be02p-14f, 0.0f,
     0.0f, 0x1.025314p-23f, 0.0f, 0.0f, 0x1.372d3cp-19f, 0.0f, 0.0f, 0x1.572a12p-113f,
     0x1.a81a0cp-111f, 0x1.cd69e8p-53f, 0x1.3a2b74p-109f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c32128p-94f, 0x1.2ae742p-39f, 0.0f, 0.0f, 0x1.6efd84p-112f, 0x1.bc136cp-81f,
     0.0f, 0x1.b82cd6p-99f, 0.0f, 0x1.37315ap-5f, 0.0f, 0.0f, 0.0f, 0x1.7aac1p-47f,
     0x1.68eedep-81f, 0.0f, 0.0f, 0x1.a37282p-107f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0ebd2ap-61f, 0.0f, 0x1.1dd59ap-74f, 0x1.33d46cp-94f, 0.0f, 0.0f,
     0x1.938874p-31f, 0.0f
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
            ml_float8_t tmp3;
            int32_t tmp4;

            memcpy(&tmp0, ((ml_float8_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            memcpy(&tmp1, ((ml_float8_t*)(external_bench_wrapper_input_table_arg1+ i)), 32);
            tmp2 = Sleef_finz_fmodf8_kvx(tmp0, tmp1);
            memcpy(((ml_float8_t*)(external_bench_wrapper_output_table+ i)), &(tmp2), 32);
            tmp3 = local_acc + tmp2;
            local_acc = tmp3;
            tmp4 = i + INT32_C(8);
            i = tmp4;
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
    printf("Sleef_finz_fmodf8_kvx %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_finz_fmodf8_kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
