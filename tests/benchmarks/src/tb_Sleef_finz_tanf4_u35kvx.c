/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_tanf4_u35kvx.c --function Sleef_finz_tanf4_u35kvx \
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
     0x1.7f8a1cp-74f, 0.0f, 0x1.4982d2p-40f, 0x1.a43c32p-66f, 0x1.15707ap-91f, 0.0f,
     0x1.35609ap-49f, 0.0f, 0.0f, 0x1.569a88p-94f, 0x1.07c20cp-126f, 0x1.a4fc9p-119f,
     0x1.d0cd6p-30f, 0x1.6d9506p-50f, 0x1.91e95cp-102f, 0.0f, 0.0f, 0x1.72188cp-6f,
     0x1.b47954p-40f, 0x1.73a756p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.46f2f6p-53f, 0.0f, 0.0f, 0.0f, 0x1.1b186cp-69f, 0x1.1b3dcep-30f,
     0x1.0763b4p-118f, 0.0f, 0x1.665a76p-100f, 0x1.1d0be6p-29f, 0x1.285086p-103f,
     0x1.13084ap-63f, 0x1.37dfbep-48f, 0.0f, 0.0f, 0x1.7adaa2p-1f, 0x1.988b5ap-3f,
     0.0f, 0x1.2f2d18p-70f, 0x1.1f0e4cp-17f, 0.0f, 0x1.f25c92p-41f, 0.0f, 0.0f, 0.0f,
     0x1.6e8bc8p-73f, 0.0f, 0x1.9aabc2p-89f, 0x1.5a50b4p-41f, 0.0f, 0x1.5986e4p-60f,
     0.0f, 0x1.84c92p-60f, 0.0f, 0.0f, 0x1.cae308p-28f, 0x1.e3b982p-120f,
     0x1.26e3a8p-68f, 0x1.8d3b64p-63f, 0.0f, 0.0f, 0x1.e4eb4p-7f, 0.0f, 0.0f,
     0x1.b51502p-6f, 0x1.b05206p-106f, 0x1.d6391ep-102f, 0.0f, 0x1.48b27cp-91f,
     0x1.f8ff9ep-91f, 0.0f, 0x1.f2bf0ap-123f, 0.0f, 0x1.1ce62ep-86f, 0x1.09dca4p-65f,
     0x1.9ca408p-124f, 0x1.7e3b52p-30f, 0x1.12ecd8p-60f, 0.0f, 0x1.7e16d2p-123f, 0.0f,
     0.0f, 0.0f, 0x1.0e00d8p-125f, 0x1.a0aad4p-116f, 0.0f, 0x1.985828p-9f, 0.0f, 0.0f,
     0x1.a516d8p-16f, 0x1.39a1cap-102f, 0.0f, 0.0f, 0.0f, 0x1.467abep-85f, 0.0f, 0.0f,
     0.0f, 0x1.3eea24p-67f, 0x1.a7b122p-50f, 0.0f, 0x1.e19194p-44f, 0.0f, 0.0f, 0.0f,
     0x1.cc8766p-31f, 0.0f, 0x1.e78dc4p-122f, 0.0f, 0.0f, 0x1.1b543ep-39f,
     0x1.d3354ep-23f, 0.0f, 0.0f, 0.0f, 0x1.9e7cc6p-44f, 0.0f, 0.0f, 0x1.52d416p-67f,
     0x1.7895a2p-47f, 0x1.ee07dap-43f, 0x1.56c842p-43f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.995096p-86f, 0x1.9fa10ap-51f, 0x1.6f3a3ap-2f, 0x1.69120ap-113f,
     0x1.7ac016p-91f, 0x1.28462ep-86f, 0x1.38092ep-71f, 0.0f, 0x1.dedc3cp-7f,
     0x1.043578p-74f, 0.0f, 0.0f, 0.0f, 0x1.33f466p-101f, 0.0f, 0x1.cdbf62p-124f,
     0.0f, 0x1.1cf5e4p-117f, 0x1.018e78p-91f, 0.0f, 0x1.afae52p-16f, 0.0f,
     0x1.89c3p-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6142c4p-59f, 0.0f, 0.0f,
     0x1.7c5cb8p-42f, 0.0f, 0x1.efe654p-76f, 0x1.c35486p-111f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d8ee3p-13f, 0x1.3cebeap-11f, 0.0f, 0x1.2c5da4p-98f, 0.0f, 0x1.f6074p-80f,
     0.0f, 0x1.b7ae78p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b195fep-44f, 0x1.55917cp-11f,
     0.0f, 0.0f, 0x1.e36306p-25f, 0x1.ba81c6p-35f, 0x1.e536fp-11f, 0x1.78eff8p-117f,
     0.0f, 0x1.36db9ap-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3e19ecp-24f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.4a32acp-120f, 0x1.f1fd72p-26f, 0.0f, 0x1.6f16fep-90f,
     0x1.b6ed4cp-74f, 0.0f, 0x1.d5a4bp-58f, 0.0f, 0.0f, 0.0f, 0x1.cc705ep-101f, 0.0f,
     0.0f, 0x1.204abp-59f, 0.0f, 0.0f, 0.0f, 0x1.26852ap-124f, 0.0f, 0x1.d07508p-32f,
     0x1.4221fcp-85f, 0x1.58b51cp-126f, 0.0f, 0.0f, 0x1.3d2632p-106f,
     0x1.e5426ep-110f, 0.0f, 0x1.f911d2p-108f, 0.0f, 0.0f, 0.0f, 0x1.df8aa4p-75f,
     0x1.cb0382p-65f, 0x1.9e44dp-3f, 0.0f, 0x1.e59e76p-60f, 0.0f, 0.0f, 0.0f,
     0x1.a83044p-86f, 0x1.7b4588p-61f, 0x1.2b5daap-89f, 0.0f, 0.0f, 0x1.38ce96p-78f,
     0.0f, 0x1.e34de6p-94f, 0.0f, 0x1.763b98p-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e29a72p-44f, 0.0f, 0x1.94e7dcp-26f, 0.0f, 0x1.6164b6p-44f, 0.0f, 0.0f,
     0x1.c8de2ap-8f, 0.0f, 0.0f, 0x1.fad89p-55f, 0.0f, 0x1.70957p-27f, 0.0f, 0.0f,
     0.0f, 0x1.1e970cp-77f, 0.0f, 0x1.172c48p-15f, 0.0f, 0x1.bb2c84p-89f,
     0x1.66f058p-54f, 0.0f, 0x1.d9eb74p-21f, 0.0f, 0x1.662ffp-56f, 0.0f,
     0x1.ff0a2p-21f, 0.0f, 0x1.56b282p-117f, 0x1.94464p-49f, 0.0f, 0.0f, 0.0f,
     0x1.840dc8p-44f, 0.0f, 0.0f, 0x1.ff24p-26f, 0.0f, 0.0f, 0.0f, 0x1.625c9cp-17f,
     0x1.3f8646p-2f, 0x1.b7835ap-14f, 0.0f, 0.0f, 0.0f, 0x1.9a3902p-112f,
     0x1.3888dcp-96f, 0x1.7d6ccep-79f, 0x1.2a27a8p-25f, 0x1.70f48ep-3f, 0.0f,
     0x1.3a5e66p-2f, 0.0f, 0.0f, 0.0f, 0x1.143ap-57f, 0x1.6d044cp-51f,
     0x1.1ba1d6p-59f, 0x1.cc0dep-14f, 0x1.955c48p-78f, 0x1.91485ap-70f, 0.0f,
     0x1.e995dp-112f, 0.0f, 0.0f, 0x1.e5180ep-108f, 0x1.a76e1ap-101f, 0.0f, 0.0f,
     0.0f, 0x1.47c482p-121f, 0x1.56d52ap-111f, 0.0f, 0x1.408c1cp-96f, 0x1.ef9caep-72f,
     0x1.07a5bp-45f, 0x1.e075c6p-87f, 0x1.a4c156p-66f, 0x1.77188ep-79f,
     0x1.b35558p-2f, 0.0f, 0x1.be3c4cp-78f, 0x1.2cd59cp-122f, 0.0f, 0x1.985c78p-39f,
     0.0f, 0.0f, 0x1.6d8e9p-19f, 0x1.bd16d4p-51f, 0.0f, 0x1.7a6806p-120f, 0.0f, 0.0f,
     0.0f, 0x1.68aeeap-36f, 0.0f, 0x1.2eed9ep-123f, 0x1.2c60fp-24f, 0.0f, 0.0f,
     0x1.7fd8cap-95f, 0.0f, 0.0f, 0.0f, 0x1.3f4e66p-81f, 0.0f, 0.0f, 0.0f,
     0x1.c11516p-112f, 0.0f, 0x1.321834p-84f, 0.0f, 0x1.c50c44p-82f, 0.0f,
     0x1.c9661ep-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.284da2p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.59acdap-63f, 0x1.b6f0b6p-88f, 0.0f,
     0.0f, 0x1.59e656p-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.163722p-49f, 0x1.56fbb2p-82f,
     0.0f, 0x1.4bcf4p-121f, 0.0f, 0.0f, 0x1.9f087p-88f, 0.0f, 0.0f, 0.0f, 0x1p0f,
     0x1.60dd2p-10f, 0.0f, 0.0f, 0x1.58bffcp-82f, 0x1.5a9efcp-111f, 0.0f,
     0x1.3edbb6p-121f, 0.0f, 0x1.05b54cp-84f, 0.0f, 0x1.aecf38p-59f, 0.0f, 0.0f,
     0x1.35c49p-95f, 0.0f, 0.0f, 0x1p0f, 0x1.09b0b8p-3f, 0x1.05ab4ap-10f, 0.0f, 0.0f,
     0.0f, 0x1.91636ep-83f, 0.0f, 0x1.61d66p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a5cd0cp-33f, 0.0f, 0x1.cc19dcp-117f, 0x1.d5abccp-68f, 0.0f, 0.0f,
     0x1.87de12p-74f, 0.0f, 0.0f, 0x1.255a3cp-80f, 0x1.f2bc9ep-19f, 0.0f, 0.0f,
     0x1.a09d16p-80f, 0x1.68d468p-47f, 0.0f, 0x1.2217f6p-111f, 0.0f, 0x1.28d6d6p-83f,
     0.0f, 0.0f, 0x1.cf6a48p-126f, 0.0f, 0x1.6fa5a6p-44f, 0x1.6e0448p-27f, 0.0f,
     0x1.f82168p-44f, 0.0f, 0x1.d9c99cp-12f, 0x1.b4e84ep-112f, 0x1.8e3056p-68f, 0.0f,
     0x1.bdfad8p-21f, 0.0f, 0x1.7088cep-74f, 0.0f, 0x1.99bdeap-55f, 0.0f,
     0x1.badb9p-14f, 0x1.52880ap-21f, 0x1.c56db6p-17f, 0.0f, 0x1.38bd42p-28f,
     0x1.97a8a4p-37f, 0.0f, 0.0f, 0.0f, 0x1.0d769ep-79f, 0x1.9909a4p-126f,
     0x1.dd009p-28f, 0x1.29bcbp-35f, 0x1.809dd2p-10f, 0x1.748332p-116f,
     0x1.6958c8p-47f, 0x1.780b3p-121f, 0.0f, 0.0f, 0x1.2300c2p-21f, 0.0f, 0.0f, 0.0f,
     0x1.57b46p-103f, 0.0f, 0x1.7bec12p-92f, 0x1.afd088p-59f, 0.0f, 0.0f,
     0x1.b685aep-61f, 0.0f, 0.0f, 0.0f, 0x1.aed39ep-100f, 0x1.ce1b46p-53f,
     0x1.a8f858p-12f, 0.0f, 0.0f, 0.0f, 0x1.2d982ep-27f, 0.0f, 0.0f, 0x1.597cbcp-83f,
     0x1.bb7784p-122f, 0.0f, 0.0f, 0x1.99077ep-60f, 0.0f, 0.0f, 0.0f,
     0x1.4fd568p-101f, 0.0f, 0.0f, 0x1.31c8c6p-44f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7e7d02p-44f, 0x1.88a152p-33f, 0x1.c21408p-16f, 0x1.62097cp-9f, 0.0f,
     0x1.d6e3c2p-73f, 0x1.e3476p-89f, 0x1.655ff4p-31f, 0.0f, 0.0f, 0x1.79c9c6p-95f,
     0.0f, 0x1.5526bap-29f, 0x1.7d46a6p-116f, 0.0f, 0.0f, 0x1.1df3e4p-73f,
     0x1.01c974p-80f, 0.0f, 0.0f, 0x1.08b21p-113f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e3d11ep-6f, 0x1.f96a64p-122f, 0x1.53ff12p-45f, 0x1.e22416p-21f,
     0x1.0f12dep-74f, 0.0f, 0.0f, 0.0f, 0x1.f4ad5p-60f, 0.0f, 0.0f, 0x1.c68676p-112f,
     0.0f, 0x1.3e703ep-72f, 0.0f, 0.0f, 0x1.1b2732p-99f, 0.0f, 0.0f, 0.0f,
     0x1.073362p-112f, 0.0f, 0x1.ce409p-40f, 0x1.f72dfap-8f, 0x1.fbc1fap-112f, 0.0f,
     0x1.ed35bcp-73f, 0x1.4bcac4p-98f, 0x1.a052bcp-53f, 0.0f, 0x1.972ddp-52f,
     0x1.0e2e56p-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f324f2p-7f, 0.0f, 0x1.a44d72p-122f,
     0x1.4a5762p-16f, 0x1.2e869ap-53f, 0x1.bad76ap-26f, 0x1.750946p-3f, 0.0f, 0.0f,
     0x1.fd1e84p-86f, 0.0f, 0.0f, 0.0f, 0x1.0f95ap-27f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f3927p-121f, 0x1.1454ep-2f, 0x1.ce0fdep-44f, 0.0f, 0.0f, 0x1.84a988p-116f,
     0x1.086ff8p-27f, 0.0f, 0x1.973d02p-58f, 0x1.b377c8p-121f, 0.0f, 0x1.fa8a88p-16f,
     0.0f, 0.0f, 0x1.2bcf48p-37f, 0.0f, 0x1.47cb8p-46f, 0.0f, 0.0f, 0x1.2a3db8p-82f,
     0.0f, 0x1.357316p-36f, 0x1.43cd48p-41f, 0x1.6fa8d8p-83f, 0x1.e5b8dep-82f,
     0x1.127b8cp-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f8d824p-123f, 0x1.3ee56p-18f, 0.0f,
     0x1.2236eep-60f, 0x1.19a9b4p-108f, 0x1.4a905ep-101f, 0.0f, 0x1.f4696ep-69f, 0.0f,
     0x1.252ca2p-55f, 0.0f, 0.0f, 0x1.d8babcp-41f, 0.0f, 0x1.68c594p-116f,
     0x1.e8399ep-98f, 0x1.1633aap-81f, 0x1.ab5208p-18f, 0x1.7e3fa8p-45f,
     0x1.dad176p-37f, 0x1.0af782p-52f, 0x1.a294bcp-93f, 0x1.424dc6p-113f, 0.0f,
     0x1.7f9c16p-100f, 0.0f, 0.0f, 0x1.4dd8acp-29f, 0.0f, 0.0f, 0x1.ee4978p-55f,
     0x1.7308fep-59f, 0x1.6cebap-97f, 0x1.236582p-55f, 0x1.c95362p-33f,
     0x1.14849ap-84f, 0x1.a4ba56p-36f, 0x1.937ae8p-72f, 0x1.c41d4cp-34f, 0.0f, 0.0f,
     0x1.dc05c2p-48f, 0.0f, 0x1.706b16p-90f, 0.0f, 0.0f, 0x1.7439dep-72f,
     0x1.b2dd82p-92f, 0.0f, 0.0f, 0x1.90361ap-53f, 0.0f, 0x1.b1b4eep-108f,
     0x1.855622p-5f, 0x1.518a5ep-7f, 0x1.ce3e36p-23f, 0.0f, 0x1.25b68p-14f, 0.0f,
     0x1.525372p-113f, 0.0f, 0.0f, 0x1.d8ce9ep-9f, 0x1.99bfd2p-7f, 0.0f, 0.0f,
     0x1.8fdb56p-25f, 0.0f, 0x1.36456cp-3f, 0x1.b35082p-98f, 0x1.1e7254p-57f,
     0x1.67864ep-56f, 0.0f, 0.0f, 0x1.fba424p-96f, 0x1.5edd2cp-33f, 0.0f,
     0x1.65171p-84f, 0x1.852a5p-3f, 0.0f, 0x1.048138p-95f, 0.0f, 0.0f, 0.0f,
     0x1.4bf90ep-120f, 0.0f, 0x1.2fbfbcp-5f, 0.0f, 0.0f, 0x1.05ca22p-75f, 0.0f,
     0x1.ff0634p-117f, 0.0f, 0x1.7e1e12p-113f, 0.0f, 0.0f, 0x1.f2c686p-66f,
     0x1.6dee6ep-20f, 0.0f, 0x1.50ae64p-121f, 0x1.8adc8ep-64f, 0x1.d4e6aep-118f, 0.0f,
     0.0f, 0x1.c8f888p-108f, 0x1.79a5d8p-54f, 0.0f, 0x1.798e96p-123f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.adfe7ap-100f, 0.0f, 0.0f, 0x1.39012ep-74f,
     0x1.3b23aap-96f, 0.0f, 0.0f, 0x1.766104p-31f, 0.0f, 0x1.a8c58ep-89f, 0.0f, 0.0f,
     0.0f, 0x1.a25ac8p-22f, 0.0f, 0x1.458682p-100f, 0x1.c2f312p-10f, 0.0f,
     0x1.fafcbep-21f, 0x1.df8fdcp-36f, 0x1.0bc71ep-97f, 0x1.b2812p-56f,
     0x1.981e0ep-112f, 0x1.c64a94p-82f, 0.0f, 0x1.b29fep-52f, 0x1.f7aceap-82f,
     0x1.4d4f36p-15f, 0x1.ebec36p-63f, 0x1.782deap-38f, 0x1.2b9b1ep-42f, 0.0f,
     0x1.303558p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dcf8eep-16f,
     0x1.819722p-64f, 0.0f, 0.0f, 0x1.894fdap-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.537b9p-30f, 0x1.bae07ap-6f, 0x1.b6ef56p-32f, 0x1.2e4d5ep-17f, 0.0f, 0.0f,
     0x1.6d1d8cp-95f, 0.0f, 0.0f, 0x1.afb862p-24f, 0x1.1c045ep-67f, 0x1.3ead44p-79f,
     0.0f, 0x1.f26402p-106f, 0.0f, 0x1.838fecp-71f, 0.0f, 0.0f, 0x1.2b2516p-65f,
     0x1.d1c3bp-86f, 0x1.ee7db6p-41f, 0x1.9e043ep-85f, 0x1.5a0f72p-11f,
     0x1.67e16ep-36f, 0.0f, 0.0f, 0x1.53a45cp-106f, 0x1.df2772p-22f, 0.0f, 0.0f, 0.0f,
     0x1.b280bep-29f, 0x1.351506p-85f, 0x1.4dddc6p-36f, 0.0f, 0.0f, 0x1.858e5ap-62f,
     0x1.c381cp-106f, 0.0f, 0.0f, 0x1.de6da2p-103f, 0.0f, 0x1.6ddccep-15f,
     0x1.ad879p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5e8076p-50f, 0.0f, 0.0f,
     0x1.d07054p-65f, 0.0f, 0x1.c9e0a8p-77f, 0.0f, 0.0f, 0x1.22852ep-88f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.70861ep-76f, 0x1.0a23d4p-61f, 0x1.e7084p-23f, 0x1.1173fp-56f,
     0x1.e43602p-79f, 0.0f, 0.0f, 0x1.0ef4d4p-104f, 0.0f, 0.0f, 0.0f, 0x1.606a1ap-46f,
     0x1.9fcbd2p-23f, 0x1.3267b2p-47f, 0x1.1d7a8cp-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.96e272p-55f, 0x1.faee02p-9f, 0x1.6f4052p-31f, 0x1.ee4c36p-100f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cfe8dp-63f, 0.0f,
     0x1.f13acep-17f, 0x1.e0afbp-119f, 0x1.3c577cp-96f, 0.0f, 0.0f, 0x1.4f089p-21f,
     0x1.a6b084p-36f, 0x1.72348ep-12f, 0.0f, 0.0f, 0x1.7d9126p-30f, 0.0f, 0.0f,
     0x1.4321dp-123f, 0x1.aaeaeep-121f, 0x1.fcf848p-28f, 0.0f, 0x1.8a615ep-14f, 0.0f,
     0.0f, 0.0f, 0x1.d420e6p-37f, 0.0f, 0.0f, 0x1.41c6d6p-83f, 0.0f, 0x1.0ae96ap-81f,
     0x1.b09abcp-43f, 0.0f, 0.0f, 0.0f, 0x1.be11c6p-16f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.07bd16p-109f, 0x1.749db2p-45f, 0.0f, 0.0f, 0.0f, 0x1.f0646ap-69f,
     0x1.cd610ap-56f, 0x1.6dbef6p-78f, 0.0f, 0.0f, 0.0f, 0x1.e7065ep-10f, 0.0f,
     0x1.be2cdcp-84f, 0x1p0f, 0x1.5cc99p-18f, 0.0f, 0.0f, 0x1.eea8f8p-75f, 0.0f, 0.0f,
     0.0f, 0x1.2a59d4p-68f, 0x1.cab8dcp-104f, 0x1.3ae4fcp-29f, 0.0f, 0x1.eee48ep-114f,
     0x1.0cf91p-108f, 0x1.1b8a48p-15f, 0x1.a07a7ap-56f, 0x1.b7712p-123f,
     0x1.61207cp-56f, 0.0f, 0x1.971886p-7f, 0x1.a19dd6p-69f, 0.0f, 0.0f,
     0x1.6ab9dp-119f, 0.0f, 0x1.14f2d8p-69f, 0.0f, 0.0f, 0.0f, 0x1.d82ca2p-100f,
     0x1.8a4c5ap-122f, 0.0f, 0.0f, 0x1.54c3dap-65f, 0x1.0c7d3p-7f, 0.0f, 0.0f, 0.0f,
     0x1.cbe0c4p-41f, 0x1.b4313cp-92f, 0.0f, 0.0f, 0x1.2e335p-30f, 0x1.0370b6p-23f,
     0x1.fe4a5ep-44f, 0.0f
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
            tmp1 = Sleef_finz_tanf4_u35kvx(tmp0);
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
    printf("Sleef_finz_tanf4_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_tanf4_u35kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
