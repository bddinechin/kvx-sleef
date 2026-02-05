/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sincosf1_u10purecfma.c --function \
 *     Sleef_finz_sincosf1_u10purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --precision sleef_sf2 --bench \
 *     --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef_float_2 external_bench_wrapper_cst = {.x = 0.0f, .y = 0.0f};
static const Sleef_float_2 external_bench_wrapper_cst1 = {.x = 0.0f, .y = 0.0f};
volatile Sleef_float_2 external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0.0f, 0x1.f18246p-80f, 0x1.13d1c2p-56f, 0x1.46cbd2p-97f, 0.0f, 0.0f,
     0x1.c6258cp-10f, 0.0f, 0x1.d5285ap-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.84463ep-126f, 0.0f, 0.0f, 0.0f, 0x1.1d35fcp-72f, 0.0f, 0.0f,
     0x1.a2649ep-115f, 0.0f, 0x1.548bf4p-70f, 0.0f, 0.0f, 0.0f, 0x1.b2533p-60f,
     0x1.0acafap-36f, 0.0f, 0.0f, 0.0f, 0x1.e42414p-126f, 0x1.465e1ep-94f,
     0x1.8b17d4p-15f, 0x1.6b41e8p-110f, 0.0f, 0.0f, 0.0f, 0x1.4c592p-78f, 0.0f, 0.0f,
     0.0f, 0x1.af10cap-8f, 0x1.4b1afp-9f, 0x1.b66a58p-12f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.7e0cep-94f, 0.0f, 0.0f, 0.0f, 0x1.a1a87p-31f,
     0x1.ab6ba4p-49f, 0x1.f08676p-22f, 0.0f, 0x1.9a2408p-22f, 0x1.9ad57ep-1f, 0.0f,
     0x1.cb7bf8p-3f, 0x1.44c34ap-110f, 0x1.586d5cp-47f, 0x1.739388p-103f,
     0x1.704df6p-66f, 0.0f, 0.0f, 0x1.385ccp-124f, 0.0f, 0.0f, 0x1.5d6ep-23f, 0.0f,
     0x1.be6c84p-10f, 0.0f, 0.0f, 0x1.4b154cp-89f, 0.0f, 0.0f, 0x1.432784p-122f, 0.0f,
     0x1.d47654p-88f, 0.0f, 0x1.c1fe12p-64f, 0.0f, 0x1.a26b2ep-6f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e7fd4ap-33f, 0x1.12ecb2p-109f, 0x1.59be5ep-8f, 0.0f, 0x1.7e0196p-38f,
     0x1.a8e652p-2f, 0x1.a41178p-32f, 0x1.48e104p-23f, 0x1.6b017ap-81f, 0.0f,
     0x1.4912d4p-25f, 0.0f, 0x1.cf95ccp-86f, 0x1.9ac4ep-72f, 0x1.b8bedcp-42f, 0.0f,
     0x1.afedeep-68f, 0x1.88f4c8p-14f, 0x1.860bfp-67f, 0x1.40e4f8p-75f,
     0x1.b90c7cp-37f, 0x1.496744p-34f, 0.0f, 0x1.3388a8p-86f, 0x1.aa88bep-85f, 0.0f,
     0.0f, 0x1.da985p-99f, 0.0f, 0x1.a3620cp-61f, 0.0f, 0x1.e57b78p-97f,
     0x1.ad97f6p-78f, 0x1p0f, 0.0f, 0x1.ebe31ep-106f, 0x1.b8b77ep-79f,
     0x1.99e26cp-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.366136p-90f, 0.0f,
     0x1.207f2cp-121f, 0x1.53787ep-23f, 0x1.ddeaa8p-23f, 0.0f, 0x1.6fc4e8p-18f,
     0x1.a6de82p-108f, 0.0f, 0.0f, 0x1.f9f99cp-75f, 0x1.c2c076p-78f, 0x1.842918p-31f,
     0x1.875e86p-24f, 0.0f, 0x1.58696ep-116f, 0.0f, 0x1.78f7fcp-18f, 0.0f, 0.0f,
     0x1.105cep-75f, 0x1.aa57ap-30f, 0x1.109bdp-117f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f7c27ep-13f, 0.0f, 0x1p0f, 0x1.3b9dc2p-112f, 0.0f, 0.0f, 0x1.8e01ecp-61f,
     0x1.67f754p-96f, 0.0f, 0x1.115c18p-44f, 0x1.0c9352p-19f, 0.0f, 0x1.c1201ap-12f,
     0x1.e235bep-77f, 0x1.5acd6p-84f, 0.0f, 0x1.9960b6p-77f, 0x1.4a5eaep-117f, 0.0f,
     0.0f, 0x1.49b42p-24f, 0.0f, 0.0f, 0x1.c9e5bap-100f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6a8a92p-117f, 0.0f, 0.0f, 0x1.7a1378p-102f, 0x1.d8f1cap-37f,
     0x1.e69b88p-124f, 0.0f, 0x1.8c11e2p-89f, 0.0f, 0.0f, 0.0f, 0x1.4510e6p-102f,
     0.0f, 0x1.21dc72p-65f, 0x1.4f733cp-36f, 0.0f, 0x1.02dd44p-116f, 0x1.33638cp-123f,
     0.0f, 0x1.dae18ap-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.705042p-22f, 0.0f,
     0.0f, 0x1.7952b2p-2f, 0.0f, 0x1.5926bcp-9f, 0x1.c9733ep-118f, 0.0f, 0.0f,
     0x1.547ef6p-48f, 0x1.99a346p-50f, 0.0f, 0.0f, 0x1.d0f72cp-70f, 0.0f,
     0x1.dd4c64p-50f, 0.0f, 0x1.74e2dcp-51f, 0x1.59f72ep-120f, 0x1.8dcb26p-91f, 0.0f,
     0.0f, 0.0f, 0x1.f3d88ep-53f, 0.0f, 0x1.ee5994p-60f, 0.0f, 0.0f, 0.0f,
     0x1.0c2254p-58f, 0x1.c3013ep-13f, 0.0f, 0.0f, 0x1.77a454p-93f, 0.0f,
     0x1.4e7276p-11f, 0.0f, 0.0f, 0.0f, 0x1.698578p-113f, 0x1.9f05cp-11f,
     0x1.b1d438p-89f, 0x1.30fda8p-123f, 0.0f, 0x1.af2f3ap-66f, 0.0f, 0.0f,
     0x1.420122p-23f, 0x1.2f530ep-19f, 0x1.7e9ad8p-113f, 0x1.88aecp-50f, 0.0f, 0.0f,
     0.0f, 0x1.9311a6p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7fab62p-108f, 0.0f,
     0x1.49e43ap-83f, 0.0f, 0.0f, 0x1.f42a68p-28f, 0x1.cb11aep-24f, 0.0f,
     0x1.ec06ecp-119f, 0x1.f96806p-12f, 0.0f, 0.0f, 0x1.bb842p-45f, 0.0f,
     0x1.7b76fcp-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7fecaep-72f, 0x1.b215f2p-122f,
     0.0f, 0x1.e908e6p-46f, 0.0f, 0x1.c14462p-125f, 0.0f, 0x1.12279ap-81f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.771c28p-117f, 0x1.8baef2p-96f, 0.0f, 0x1.e14a3ap-54f,
     0x1.43c49cp-108f, 0x1.795c1cp-63f, 0x1.297f3ep-79f, 0x1.3ffa76p-52f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.c1fap-43f, 0x1.3999dap-105f, 0.0f, 0x1.466428p-105f,
     0x1.07f702p-19f, 0.0f, 0x1.ee6214p-91f, 0x1.1e75a8p-28f, 0x1.52fc38p-6f, 0.0f,
     0x1.b13db6p-33f, 0x1.64a90ap-9f, 0.0f, 0x1.274b04p-1f, 0.0f, 0x1.f9753ap-7f,
     0.0f, 0x1.35d19p-44f, 0x1.67048p-100f, 0.0f, 0x1.264dfep-114f, 0.0f, 0.0f,
     0x1.15d36p-15f, 0x1.8ad522p-107f, 0.0f, 0x1.1608b6p-96f, 0.0f, 0.0f,
     0x1.1a0b48p-38f, 0.0f, 0x1.606df4p-46f, 0x1.3bb666p-95f, 0x1.cd437ep-122f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.1c7f3p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4395d4p-101f,
     0.0f, 0x1.3fbe76p-110f, 0.0f, 0x1.2c842ap-125f, 0x1.e630ep-12f, 0.0f,
     0x1.7cbecep-89f, 0x1.e95ef6p-21f, 0.0f, 0.0f, 0.0f, 0x1.c8383p-78f,
     0x1.8d8898p-76f, 0x1.3f6c98p-34f, 0x1.438e98p-66f, 0x1.379466p-108f, 0.0f,
     0x1.462268p-95f, 0x1.3293a2p-103f, 0x1.03431cp-43f, 0.0f, 0.0f, 0x1.a60bb2p-83f,
     0.0f, 0.0f, 0x1.74cdccp-54f, 0.0f, 0x1.6455e4p-117f, 0x1.953484p-78f,
     0x1.ad280cp-122f, 0x1.d5aacp-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.02701cp-54f, 0x1.a13eccp-36f, 0.0f, 0x1.4d02d8p-22f, 0x1.fe708cp-40f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f23d8p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.d16288p-48f, 0.0f, 0x1.d9da6cp-97f, 0x1.bd60e8p-94f, 0.0f, 0.0f, 0.0f,
     0x1.2db3f4p-4f, 0x1.420be2p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e9ea0ep-45f,
     0x1.9d2ffcp-23f, 0x1.841a6cp-19f, 0.0f, 0x1.1add82p-42f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.045662p-92f, 0x1.26d286p-53f, 0.0f, 0.0f, 0.0f, 0x1.10d132p-116f, 0.0f,
     0x1.0778b2p-50f, 0.0f, 0.0f, 0.0f, 0x1.2e14d2p-27f, 0.0f, 0.0f, 0x1.9aa9bap-42f,
     0.0f, 0.0f, 0x1.ccc6ep-101f, 0x1.d5cbb4p-30f, 0x1.f6a306p-9f, 0.0f, 0.0f,
     0x1.793e2cp-25f, 0x1.d9ca8cp-109f, 0x1.c033a4p-88f, 0x1.ec8d1ap-67f,
     0x1.8f4b68p-115f, 0.0f, 0x1.2c7cecp-78f, 0x1.6146b6p-3f, 0x1.3db574p-123f,
     0x1.39cbeep-73f, 0.0f, 0x1.41c3ecp-84f, 0x1.370698p-73f, 0x1.ca8c5ap-5f, 0.0f,
     0.0f, 0x1.3dc9bap-57f, 0.0f, 0.0f, 0.0f, 0x1.353ffep-35f, 0x1.178616p-6f,
     0x1.d8725ap-5f, 0x1.47c914p-125f, 0.0f, 0x1.b584cap-58f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.959e9p-23f, 0.0f, 0.0f, 0x1.8410e8p-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ffe0fep-24f, 0.0f, 0.0f, 0.0f, 0x1.09d7ep-62f, 0.0f, 0.0f, 0x1.6e4062p-12f,
     0x1.97aabcp-3f, 0.0f, 0x1.c0bca4p-101f, 0x1.14feccp-35f, 0.0f, 0x1.a65bb4p-35f,
     0.0f, 0x1.ecce3cp-107f, 0.0f, 0.0f, 0x1.591a66p-5f, 0x1.7b09d6p-41f, 0.0f, 0.0f,
     0.0f, 0x1.cc90a8p-110f, 0.0f, 0x1.c12a9cp-86f, 0x1.1651d2p-37f, 0x1.111af4p-17f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dc3272p-46f,
     0x1.641596p-73f, 0.0f, 0.0f, 0x1.13eb0ep-98f, 0.0f, 0.0f, 0x1.c08e7ep-7f, 0.0f,
     0.0f, 0x1.3afa54p-46f, 0x1.b1f2cp-31f, 0.0f, 0x1.0ecc08p-96f, 0.0f, 0.0f, 0.0f,
     0x1.44d09p-60f, 0.0f, 0.0f, 0x1.eddd6cp-11f, 0x1.54b31p-116f, 0x1.4eee32p-20f,
     0x1.5378d6p-78f, 0.0f, 0.0f, 0x1.c3b632p-102f, 0x1.d1549ep-7f, 0x1.4a163ep-71f,
     0x1.783edap-105f, 0x1.5f5bbp-126f, 0.0f, 0x1.e24edp-116f, 0x1.5d0278p-2f,
     0x1.27d12ep-99f, 0x1.41273p-41f, 0x1.ce08b6p-28f, 0.0f, 0.0f, 0x1.17a4fap-25f,
     0x1.47e076p-11f, 0.0f, 0.0f, 0x1.44f4dep-54f, 0x1.0b2e28p-107f, 0x1.bb9c4cp-119f,
     0x1.b083e2p-80f, 0x1.8e6c5cp-122f, 0x1p0f, 0.0f, 0x1.95f992p-97f,
     0x1.057246p-32f, 0x1.0c1982p-41f, 0x1.415f9p-70f, 0x1.82dc1p-104f,
     0x1.e3774ap-94f, 0.0f, 0x1.3cd956p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.34429p-125f, 0.0f, 0.0f, 0.0f, 0x1.9f79dcp-6f, 0.0f, 0.0f, 0x1.130178p-58f,
     0.0f, 0.0f, 0x1.f531bp-100f, 0.0f, 0x1.621d9ap-100f, 0.0f, 0.0f,
     0x1.022dbep-123f, 0.0f, 0x1.1e7992p-95f, 0.0f, 0.0f, 0x1.d2b196p-82f, 0.0f, 0.0f,
     0x1.f00db4p-13f, 0.0f, 0x1.d32a7ap-30f, 0.0f, 0x1.f980e6p-118f, 0.0f,
     0x1.8389cep-67f, 0x1.e593b8p-26f, 0.0f, 0.0f, 0x1.7e6d3ap-4f, 0x1.a670d4p-34f,
     0x1.e76d3cp-119f, 0.0f, 0x1.72adc6p-122f, 0.0f, 0x1.8c6e4ap-82f, 0.0f, 0.0f,
     0.0f, 0x1.7f55fcp-87f, 0.0f, 0.0f, 0x1.7e4444p-45f, 0x1.1d69a8p-6f,
     0x1.95eadp-114f, 0x1.f7c41ep-74f, 0x1.e69ed4p-46f, 0x1.021ffep-84f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.2b4c5cp-54f, 0x1.f46902p-10f, 0.0f, 0x1.dd2468p-96f,
     0x1.c188ccp-108f, 0.0f, 0x1.235648p-114f, 0x1.62a536p-42f, 0.0f, 0.0f,
     0x1.19035p-123f, 0x1.dbf546p-39f, 0.0f, 0.0f, 0x1.7d215p-19f, 0.0f, 0.0f,
     0x1.fd69b8p-108f, 0x1.fbe48ep-67f, 0.0f, 0x1.207a2p-75f, 0.0f, 0x1.f28e2p-64f,
     0x1.04a6c8p-85f, 0.0f, 0.0f, 0x1.a1cef6p-25f, 0.0f, 0x1.92593cp-69f, 0.0f,
     0x1.de4092p-100f, 0x1.65996cp-36f, 0.0f, 0x1.608666p-11f, 0x1.9994fcp-45f,
     0x1.bfa58ep-95f, 0.0f, 0.0f, 0x1.85d756p-35f, 0x1.42debap-63f, 0.0f, 0.0f,
     0x1.d634b4p-52f, 0.0f, 0x1.6f28b8p-31f, 0x1.daa3a6p-11f, 0x1.be1cfcp-27f, 0.0f,
     0.0f, 0x1.effcf4p-78f, 0x1.fd7526p-3f, 0.0f, 0.0f, 0x1.75502ep-15f,
     0x1.8f1edcp-122f, 0x1.cb855p-6f, 0x1.5422fep-44f, 0x1.0e0468p-36f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.7943f4p-8f, 0.0f, 0x1.ad3a2ep-77f, 0x1.430e1ap-108f,
     0x1.193f92p-77f, 0x1.9424fp-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b595bp-3f,
     0x1.8a3206p-119f, 0x1.22e008p-79f, 0x1.648bb4p-60f, 0.0f, 0x1.b08774p-41f, 0.0f,
     0x1.c24768p-100f, 0.0f, 0x1.60cc06p-82f, 0x1.dc93b8p-76f, 0x1.570852p-2f, 0.0f,
     0.0f, 0.0f, 0x1.c29ca8p-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.57abd2p-90f,
     0x1.8bc182p-92f, 0.0f, 0x1.d1cb5p-52f, 0.0f, 0x1.92f1fcp-35f, 0x1.2d0aa2p-71f,
     0x1.e646dcp-13f, 0x1.6b52d4p-122f, 0.0f, 0x1.0aefep-107f, 0.0f, 0x1.3761f4p-36f,
     0x1.2480c6p-35f, 0x1.1dfd86p-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3a072ap-70f, 0.0f,
     0x1.8d3f3ep-62f, 0x1.46a5d2p-1f, 0x1.af61e6p-49f, 0x1.20e2d8p-59f, 0.0f,
     0x1.43b5fp-22f, 0.0f, 0x1.4b9c1ap-14f, 0x1.71435ep-103f, 0.0f, 0.0f,
     0x1.9ed33p-35f, 0x1.aca5e8p-17f, 0.0f, 0.0f, 0x1.235278p-32f, 0x1.202194p-116f,
     0x1.9a4d7ep-105f, 0x1.95fe7cp-96f, 0.0f, 0x1.2d6b02p-98f, 0x1.9bf0bp-19f, 0.0f,
     0.0f, 0.0f, 0x1.f483eap-120f, 0.0f, 0.0f, 0x1.d00552p-55f, 0.0f, 0.0f,
     0x1.b85f6cp-73f, 0.0f, 0x1.e588c8p-21f, 0.0f, 0x1.8ae394p-95f, 0x1.e3d77ep-65f,
     0.0f, 0.0f, 0x1.cf9a08p-122f, 0x1.f9ada6p-69f, 0.0f, 0.0f, 0x1.edddc2p-105f,
     0x1p0f, 0.0f, 0.0f, 0x1.4fac5cp-119f, 0x1.c2d60ap-19f, 0.0f, 0x1.70258ap-30f,
     0.0f, 0.0f, 0x1.01bdaep-92f, 0x1.7f40a2p-39f, 0x1.770c68p-37f, 0x1.807f7ap-108f,
     0.0f, 0.0f, 0x1.e18f66p-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e21c8cp-3f, 0x1.6d19f2p-43f, 0x1.87ee9ap-2f, 0x1.781e56p-114f,
     0x1.e0768cp-90f, 0x1p0f, 0x1.9c5bd6p-116f, 0x1.2c94c6p-117f, 0.0f,
     0x1.d47564p-20f, 0x1.7fb36ap-59f, 0.0f, 0.0f, 0x1.b3771ep-44f, 0.0f, 0.0f, 0.0f,
     0x1.639aa8p-42f, 0x1p0f, 0.0f, 0x1.98bcaep-31f, 0.0f, 0.0f, 0x1.e03c0cp-98f,
     0.0f, 0x1.478b28p-116f, 0x1.f48d94p-35f, 0.0f, 0x1.a1140ep-88f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.af1768p-85f, 0.0f, 0.0f, 0.0f, 0x1.d5d444p-86f, 0x1.48951cp-108f, 0.0f,
     0.0f, 0x1.88f45p-96f, 0x1.ed4994p-53f, 0x1.3b2232p-108f, 0.0f, 0x1.f123d2p-19f,
     0.0f, 0x1.37fd1p-82f, 0.0f, 0x1.0574d4p-16f, 0x1.a14dcp-34f, 0.0f,
     0x1.2a796ap-59f, 0x1.f99bc2p-116f, 0x1.b28ec8p-29f, 0x1.7f47bep-70f, 0.0f, 0.0f,
     0.0f, 0x1.c33604p-10f, 0x1.c98bdcp-24f, 0x1.621a5cp-60f, 0x1.62521ep-50f, 0.0f,
     0x1.1ea3e6p-103f, 0x1.e1d0ccp-19f, 0.0f, 0x1.faa8fcp-97f, 0x1.01b7eep-43f,
     0x1.d079c4p-54f, 0x1.a1b6c2p-33f, 0x1.c4a76p-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.eda304p-67f, 0x1.5f3638p-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0c5cdap-72f, 0x1.3ba924p-11f, 0x1.f1b02cp-32f, 0x1.f62a6p-4f, 0x1p0f, 0.0f,
     0x1.a43ed8p-80f, 0x1.5495b8p-6f, 0x1.6d9a6cp-8f, 0.0f, 0.0f, 0.0f,
     0x1.1e87b2p-83f, 0x1.08aeeap-30f, 0x1.350adap-74f, 0.0f, 0x1.b8d66p-96f, 0.0f,
     0.0f, 0.0f, 0x1.95354ap-120f, 0x1.47b544p-76f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6f2a2p-65f, 0x1.a74fdp-72f, 0.0f, 0x1.b5d1d8p-125f, 0x1.39dc14p-92f, 0.0f,
     0x1.dde536p-8f, 0x1.ac1e36p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.63a8f2p-15f, 0.0f, 0.0f, 0x1.2188aap-115f, 0.0f, 0x1.9afa8ap-103f,
     0.0f, 0x1.30793ap-45f, 0x1.34bc44p-102f, 0x1.d7c8f4p-118f, 0x1.45eed2p-83f,
     0x1.1e2696p-46f, 0x1.c84c6ap-75f, 0.0f, 0x1.8fc8a2p-91f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1202d2p-41f, 0x1.cc1a74p-84f, 0x1.dfc16ep-22f, 0.0f, 0x1.d0d6c2p-36f, 0.0f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef_float_2 global_bench_acc;
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
        Sleef_float_2 bench_acc;
        int32_t i;
        float tmp0;
        float tmp1;
        float tmp2;
        float tmp3;
        float tmp4;
        float tmp5;
        Sleef_float_2 tmp6;
        int32_t tmp7;

        i = INT32_C(0);
        bench_acc = external_bench_wrapper_cst1;

        for (;(i < INT32_C(1001));){
            float tmp0;
            Sleef_float_2 tmp1;
            float tmp2;
            float tmp3;
            float tmp4;
            float tmp5;
            float tmp6;
            float tmp7;
            Sleef_float_2 tmp8;
            int32_t tmp9;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_finz_sincosf1_u10purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = bench_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = bench_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef_float_2) {.x=tmp4, .y=tmp7});
            bench_acc = tmp8;
            tmp9 = i + INT32_C(1);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = bench_acc.x;
        tmp2 = tmp0 + tmp1;
        tmp3 = global_bench_acc.y;
        tmp4 = bench_acc.y;
        tmp5 = tmp3 + tmp4;
        tmp6 = ((Sleef_float_2) {.x=tmp2, .y=tmp5});
        global_bench_acc = tmp6;
        tmp7 = j + INT32_C(1);
        j = tmp7;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_finz_sincosf1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_sincosf1_u10purecfma bench acc {.x=%a, .y=%a}\n", global_bench_acc.x, global_bench_acc.y );
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
