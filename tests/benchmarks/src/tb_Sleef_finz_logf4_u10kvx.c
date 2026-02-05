/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_logf4_u10kvx.c --function Sleef_finz_logf4_u10kvx \
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
     0x1.71c704p-68f, 0.0f, 0.0f, 0x1.ae7402p-16f, 0.0f, 0x1.9cd93ep-124f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d9650cp-98f, 0x1.66c64ep-70f, 0.0f, 0.0f, 0.0f,
     0x1.661832p-32f, 0.0f, 0.0f, 0x1.676056p-69f, 0.0f, 0.0f, 0x1.a2a9c8p-86f, 0.0f,
     0.0f, 0x1.a1026cp-16f, 0.0f, 0.0f, 0x1.12b4b2p-50f, 0.0f, 0.0f, 0x1.a34f4ep-39f,
     0x1.d98b0ep-20f, 0x1.f248eap-7f, 0x1.d055eep-100f, 0.0f, 0x1.b4674cp-74f, 0.0f,
     0x1.6a11a8p-68f, 0x1.beff2cp-57f, 0x1.46bc6ep-54f, 0.0f, 0x1.23fa0ep-88f,
     0x1.09efe2p-44f, 0x1.511036p-110f, 0x1.77d9aep-38f, 0x1.e52a46p-45f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1926dep-82f, 0x1.2a3856p-53f, 0.0f, 0.0f, 0.0f, 0x1.ccdbb6p-107f,
     0.0f, 0.0f, 0x1.dc100cp-104f, 0x1.5cc0bcp-69f, 0x1.7e829p-2f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.327348p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.49189ep-27f, 0.0f, 0x1.cb0002p-102f, 0.0f, 0x1.c17a46p-13f, 0.0f, 0.0f,
     0x1.2eff6ep-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.77ce5ep-18f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.5d313ep-13f, 0x1.c43c18p-101f, 0x1.4876b4p-24f, 0.0f, 0.0f, 0.0f,
     0x1.49b30ep-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.80c99cp-96f, 0.0f,
     0x1.1460fap-60f, 0x1.4fa49ep-125f, 0x1.2fd07ep-63f, 0.0f, 0.0f, 0x1.0e4078p-29f,
     0x1.9c95bep-66f, 0x1.022376p-7f, 0x1.d0151ap-73f, 0x1.b44bcep-76f, 0.0f,
     0x1.200eeep-31f, 0.0f, 0.0f, 0.0f, 0x1.f49fap-35f, 0x1.494e58p-39f,
     0x1.5b90c4p-105f, 0x1.843f9p-85f, 0.0f, 0x1.2075acp-89f, 0x1.e2f0bp-10f,
     0x1.691a52p-92f, 0.0f, 0.0f, 0x1.101fbep-92f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.56a05ap-2f, 0.0f, 0.0f, 0x1.e26792p-40f, 0x1.19f834p-46f, 0x1.74f63ep-36f,
     0.0f, 0x1.22abap-22f, 0x1.de0334p-8f, 0x1.71d416p-125f, 0x1.e94f7cp-6f, 0.0f,
     0x1.31ba92p-101f, 0x1.f3cd1p-111f, 0.0f, 0x1.02c362p-112f, 0.0f, 0.0f,
     0x1.3ed32p-52f, 0.0f, 0.0f, 0x1.8683c2p-101f, 0.0f, 0.0f, 0.0f, 0x1.b04bp-44f,
     0x1.576a86p-76f, 0.0f, 0x1.a9f3f8p-77f, 0.0f, 0x1.a6916p-106f, 0.0f,
     0x1.61d77cp-58f, 0.0f, 0x1.c5eb04p-107f, 0x1.3d38aap-59f, 0x1.834f96p-11f, 0.0f,
     0.0f, 0.0f, 0x1.1c6a3ap-82f, 0x1.c02772p-53f, 0x1.696cbcp-18f, 0.0f, 0.0f,
     0x1.5ec6p-106f, 0.0f, 0x1.c0471p-27f, 0.0f, 0x1.609b22p-58f, 0.0f,
     0x1.32d0f2p-54f, 0x1.64777ep-18f, 0.0f, 0.0f, 0x1.babfd8p-102f, 0.0f,
     0x1.bc4494p-11f, 0.0f, 0x1.586084p-65f, 0x1.bdba92p-49f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9c82b8p-59f, 0x1.dc397ap-64f, 0.0f, 0.0f, 0x1.91440ep-34f, 0x1.f5914cp-24f,
     0.0f, 0.0f, 0x1.e906f2p-104f, 0.0f, 0x1.ab79ecp-82f, 0.0f, 0x1.910d8ap-5f, 0.0f,
     0.0f, 0x1.5e6bf6p-15f, 0x1.31d37ap-101f, 0.0f, 0.0f, 0x1.1ef0f6p-33f,
     0x1.12410cp-89f, 0x1.d79752p-121f, 0x1.ccc13ep-82f, 0x1.ed88aep-55f,
     0x1.9bbea6p-89f, 0x1.142bacp-119f, 0x1.e10e1ap-5f, 0x1.975de6p-125f,
     0x1.49f824p-56f, 0x1.f9febep-13f, 0.0f, 0x1.4699cp-19f, 0x1.c07f82p-118f,
     0x1.a0b36ep-38f, 0.0f, 0.0f, 0.0f, 0x1.66cf66p-107f, 0x1.748f02p-75f, 0.0f, 0.0f,
     0x1.ea2e02p-112f, 0.0f, 0.0f, 0.0f, 0x1.52c9a2p-111f, 0x1.76668ap-38f, 0.0f,
     0.0f, 0.0f, 0x1.6c77a6p-93f, 0.0f, 0x1.f49abcp-67f, 0x1.ff567ep-16f,
     0x1.929e8ep-116f, 0.0f, 0x1.ee24c8p-93f, 0x1.31c4a8p-53f, 0x1.be9054p-27f, 0.0f,
     0.0f, 0x1.518e0cp-53f, 0x1.253ffep-80f, 0.0f, 0.0f, 0x1.9fce9p-95f,
     0x1.f81fc6p-65f, 0.0f, 0x1.fae472p-108f, 0.0f, 0x1.cec23cp-82f, 0.0f, 0.0f,
     0x1.8ba9a2p-66f, 0.0f, 0x1.6c2212p-6f, 0x1.9b0adap-106f, 0.0f, 0.0f,
     0x1.5765d2p-12f, 0x1.e95156p-69f, 0x1.4c1108p-40f, 0x1.5d2386p-15f, 0.0f, 0.0f,
     0.0f, 0x1.54b698p-92f, 0x1.842f76p-92f, 0x1.37ab14p-22f, 0x1.f6af76p-70f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d8ae7ep-40f, 0x1.0c179ep-64f, 0.0f, 0.0f,
     0x1.a4551ep-92f, 0x1.264c12p-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1f0876p-91f, 0.0f,
     0x1.8d01d6p-59f, 0x1.d736c8p-40f, 0.0f, 0x1.47c47ep-124f, 0x1.775e58p-87f, 0.0f,
     0x1.263866p-81f, 0x1.529676p-37f, 0x1.ae10dcp-34f, 0.0f, 0x1.83121ep-22f, 0.0f,
     0.0f, 0x1.2aff4ap-120f, 0x1.f51338p-15f, 0x1.e0d3f4p-2f, 0x1.d3476ap-3f,
     0x1.a21872p-99f, 0.0f, 0.0f, 0.0f, 0x1.4e0332p-62f, 0.0f, 0x1.9b0ebcp-79f,
     0x1.dd75cp-38f, 0x1.4b1f38p-105f, 0.0f, 0.0f, 0.0f, 0x1.29a136p-100f, 0.0f,
     0x1.e8135ep-14f, 0x1.170f0ep-69f, 0.0f, 0.0f, 0.0f, 0x1.abbf52p-62f,
     0x1.97f04p-57f, 0x1.8c3c06p-31f, 0x1.5202fep-108f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.886274p-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.236fa4p-53f, 0x1.ca0d94p-103f,
     0x1.1249fep-21f, 0.0f, 0.0f, 0.0f, 0x1.ac277cp-83f, 0.0f, 0.0f, 0x1.d9e0d2p-37f,
     0x1.3240cp-64f, 0x1.13086p-10f, 0x1.88f694p-8f, 0x1.c2dbb4p-66f, 0x1.65b962p-45f,
     0x1.5c13ap-49f, 0x1.c766aap-75f, 0.0f, 0.0f, 0x1.c9ed1p-32f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.d4272ep-78f, 0.0f, 0x1.26adc4p-72f, 0x1.eb8baep-98f, 0x1.4d1606p-110f,
     0.0f, 0.0f, 0x1.705f02p-19f, 0x1.384b32p-3f, 0x1.7960aep-23f, 0x1.862086p-74f,
     0x1.dbb4ap-95f, 0.0f, 0.0f, 0x1.4e0912p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.31b5fp-70f, 0.0f, 0x1.90a076p-8f, 0x1.756c76p-106f, 0.0f, 0x1.27ed2p-15f,
     0x1.0afc14p-54f, 0x1.ef5cc4p-48f, 0.0f, 0x1.5e8b3ep-35f, 0.0f, 0.0f, 0.0f,
     0x1.979bf6p-72f, 0.0f, 0.0f, 0.0f, 0x1.8b3014p-52f, 0x1.5eb016p-52f, 0.0f, 0.0f,
     0x1.77f21ap-77f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9bcd6ep-49f, 0.0f, 0x1.1cc1p-18f, 0x1.7cb2cap-12f, 0x1.8fe44ap-124f,
     0x1.01bcbcp-123f, 0x1.3ce454p-112f, 0x1.62b1b2p-48f, 0.0f, 0.0f, 0x1.f01164p-94f,
     0.0f, 0x1.b4d864p-111f, 0.0f, 0.0f, 0x1.0357eep-17f, 0x1.7d2408p-59f, 0.0f,
     0x1.fad3c8p-109f, 0x1.39f87ep-109f, 0.0f, 0x1.8d10d8p-91f, 0x1.0c363ep-67f, 0.0f,
     0x1.86c2c6p-109f, 0.0f, 0.0f, 0.0f, 0x1.ee4118p-60f, 0.0f, 0.0f, 0x1.cdb976p-27f,
     0x1.a7fedp-48f, 0.0f, 0.0f, 0.0f, 0x1.d3a132p-105f, 0x1.3d6232p-33f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.3b6b4p-101f, 0.0f, 0.0f, 0x1.7200a2p-76f, 0x1.045e06p-87f, 0.0f,
     0x1.67329p-25f, 0x1.abfed4p-51f, 0x1.dbfb02p-73f, 0x1.19e4e8p-83f,
     0x1.8241a4p-27f, 0.0f, 0.0f, 0.0f, 0x1.8e149p-58f, 0x1.b3d732p-6f, 0.0f,
     0x1.2e97a6p-29f, 0x1.c2f4eap-25f, 0x1.0d6b3cp-23f, 0.0f, 0.0f, 0.0f,
     0x1.02720ap-119f, 0x1.b7c9cp-87f, 0x1.2858d6p-57f, 0.0f, 0.0f, 0x1.a12f2ep-87f,
     0x1.e69d9cp-48f, 0.0f, 0x1.c7a83cp-55f, 0x1.28e75p-8f, 0x1.a8115ap-9f,
     0x1.5d8b04p-48f, 0x1.85dc72p-87f, 0.0f, 0.0f, 0.0f, 0x1.a5471p-101f,
     0x1.8471bep-62f, 0x1.bb69aap-104f, 0.0f, 0x1.3f24cap-93f, 0.0f, 0x1.0ea9fcp-96f,
     0.0f, 0.0f, 0x1.3405ecp-9f, 0.0f, 0.0f, 0x1.bf6362p-122f, 0.0f, 0x1.d9cdd6p-88f,
     0.0f, 0x1.08b544p-96f, 0.0f, 0.0f, 0.0f, 0x1.6aeee2p-23f, 0x1.948bacp-69f, 0.0f,
     0x1.9bea8ap-29f, 0x1.f16c0ap-11f, 0.0f, 0x1.a140fp-44f, 0.0f, 0.0f, 0.0f,
     0x1.a7b2fep-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7bd932p-72f, 0x1.e9a24ep-3f,
     0x1.264254p-4f, 0.0f, 0x1.4c1c38p-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5bb818p-51f,
     0x1.211fbap-33f, 0.0f, 0x1.334174p-102f, 0x1.c4001ap-38f, 0x1.eb5d6ep-107f,
     0x1.cdf2aap-6f, 0x1.14adb2p-50f, 0x1.d08822p-108f, 0.0f, 0.0f, 0x1.959b56p-116f,
     0.0f, 0x1.df5e74p-56f, 0x1.5ca272p-86f, 0x1.cccb78p-38f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.607cdp-4f, 0x1.35fa84p-109f, 0.0f, 0x1p0f, 0.0f, 0x1.872482p-111f, 0.0f,
     0x1.86fc68p-72f, 0x1.303b5ap-6f, 0x1.0de678p-48f, 0x1.8ab26cp-59f,
     0x1.132dbep-40f, 0.0f, 0.0f, 0x1.92d70cp-36f, 0x1.6a89ecp-9f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f2898ap-2f, 0.0f, 0x1.733864p-76f, 0x1.9e5a06p-65f, 0x1.6eb526p-53f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f387d4p-34f, 0x1.83cc9ap-113f, 0.0f,
     0.0f, 0x1.90e742p-24f, 0.0f, 0.0f, 0x1.5d2ea6p-43f, 0.0f, 0x1.321df4p-73f, 0.0f,
     0.0f, 0.0f, 0x1.777868p-52f, 0x1.60bec4p-29f, 0.0f, 0x1.8af93ap-15f,
     0x1.e792aap-20f, 0x1.235006p-4f, 0x1.ee38b2p-79f, 0x1.5b88a2p-94f, 0.0f, 0.0f,
     0x1.cb0fa6p-68f, 0.0f, 0x1.66e97cp-71f, 0x1.f3ce18p-78f, 0x1.8af232p-2f,
     0x1.0a3546p-33f, 0x1.907bbp-117f, 0x1.b8ca04p-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a3eb08p-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.03a71cp-86f, 0.0f, 0x1.c8da6ap-82f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.87de2ap-2f, 0.0f, 0x1.e7455ep-10f, 0.0f, 0.0f,
     0x1.1e39b6p-37f, 0.0f, 0x1.89cac2p-72f, 0x1.459d86p-38f, 0x1.c1f864p-5f,
     0x1.ff063cp-101f, 0x1.8df74cp-69f, 0.0f, 0.0f, 0.0f, 0x1.9e2062p-15f,
     0x1.87357ep-39f, 0.0f, 0.0f, 0x1.063fcep-2f, 0x1.c1cadap-113f, 0x1.54bf2ep-66f,
     0x1.0c907p-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1fc914p-1f, 0x1.ac92bep-76f,
     0x1.1eaba6p-28f, 0x1.e7985ep-68f, 0.0f, 0x1.d0f846p-24f, 0x1.bbd412p-58f, 0.0f,
     0x1.05cb2p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.914094p-101f, 0.0f,
     0x1.e708acp-86f, 0.0f, 0x1.3702e4p-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2078dap-47f,
     0x1.e5ce68p-62f, 0x1.de4cf8p-94f, 0x1.14cfc4p-21f, 0x1.da642ep-13f,
     0x1.18a154p-22f, 0x1.05d306p-60f, 0x1.2fe982p-47f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.38e8dap-99f, 0x1.39cf2p-98f, 0.0f, 0.0f, 0x1.89b874p-102f, 0x1.f4e96p-25f,
     0.0f, 0x1.a06062p-125f, 0x1.496578p-102f, 0.0f, 0x1.13a148p-16f, 0x1.a4ffbcp-26f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6e94ap-49f, 0x1.de9058p-111f,
     0x1.1d488ap-107f, 0x1.6ed67ap-99f, 0x1.67ec1cp-124f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.9a7354p-65f, 0.0f, 0x1.924fb6p-47f, 0x1.44c324p-68f, 0x1.10d44ep-97f,
     0.0f, 0.0f, 0.0f, 0x1.6a528p-78f, 0x1.2f303ap-97f, 0.0f, 0.0f, 0.0f,
     0x1.7e28bcp-103f, 0x1.dea29ep-12f, 0x1.1456aap-40f, 0.0f, 0x1.830ecep-48f, 0.0f,
     0.0f, 0.0f, 0x1.5a96acp-126f, 0.0f, 0.0f, 0x1.6d4f6p-25f, 0x1.837ec4p-13f, 0.0f,
     0x1.d5369ep-70f, 0x1.3d3f62p-21f, 0.0f, 0x1.635684p-55f, 0.0f, 0.0f,
     0x1.bd8eb4p-98f, 0x1.115824p-49f, 0.0f, 0x1.71316p-24f, 0.0f, 0.0f,
     0x1.be22ap-119f, 0.0f, 0x1.9aee02p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2c027ap-84f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.8ab0d6p-121f, 0x1.a42b56p-63f, 0x1.9c062p-8f,
     0x1.85f8eep-100f, 0x1.e80484p-107f, 0.0f, 0.0f, 0x1.1c68fep-50f, 0.0f, 0.0f,
     0x1.8d6c62p-102f, 0.0f, 0x1.04eedap-113f, 0x1.79ea72p-98f, 0.0f, 0x1.816596p-7f,
     0x1.82436ep-107f, 0x1.f9a494p-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f6796cp-82f, 0x1.506148p-96f, 0.0f, 0.0f, 0x1.4262c6p-100f,
     0x1.bcfe9cp-101f, 0x1.198a4cp-100f, 0.0f, 0x1.1187a6p-12f, 0x1.42d81cp-85f, 0.0f,
     0.0f, 0.0f, 0x1.e10bbep-124f, 0.0f, 0.0f, 0x1.846d06p-118f, 0x1.d2eac8p-29f,
     0x1.89debcp-53f, 0x1.1ca70ap-33f, 0x1.f152eap-108f, 0x1.9a829p-18f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.773d68p-126f, 0.0f, 0.0f, 0.0f, 0x1.876e22p-85f, 0.0f, 0.0f,
     0.0f, 0x1.8b35bp-107f, 0.0f, 0x1.c2a542p-26f, 0.0f, 0x1.a5a66ap-39f, 0.0f,
     0x1.545edcp-58f, 0.0f, 0x1.3d776cp-81f, 0.0f, 0x1.9d001ep-94f, 0x1.d3b438p-93f,
     0.0f, 0x1.533734p-115f, 0x1.f75d8ap-69f, 0x1.56de7cp-95f, 0.0f, 0.0f,
     0x1.08904ap-88f, 0.0f, 0.0f, 0x1.f1bd42p-99f, 0x1.36de8p-65f, 0x1.84d7a2p-106f,
     0x1.db4f68p-44f, 0x1.ba58cep-105f, 0.0f, 0.0f, 0x1.bc8708p-70f, 0.0f,
     0x1.f4dee2p-20f, 0.0f, 0.0f, 0x1.5a0c28p-96f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f,
     0.0f, 0x1.bbc5a4p-108f, 0x1.9a7da4p-101f, 0x1.4876c8p-59f, 0x1.c297b4p-115f,
     0.0f, 0.0f, 0x1.8b9268p-107f, 0x1.c41c6ap-47f, 0.0f, 0.0f, 0x1.c95eb2p-48f, 0.0f,
     0.0f, 0.0f, 0x1.b4bb14p-113f, 0x1.cd6deap-29f, 0.0f, 0.0f, 0.0f, 0x1.da9992p-40f,
     0x1.87f5dep-102f, 0x1.ad8af2p-75f, 0.0f, 0.0f, 0x1.d43674p-89f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.80bacap-101f, 0x1.9b59fep-47f, 0.0f, 0.0f, 0.0f, 0x1.80a9c4p-14f,
     0x1.658f3ep-26f, 0.0f, 0x1.7b012cp-71f, 0x1.5d7e0cp-12f, 0.0f, 0x1.ddf9cp-7f,
     0.0f, 0x1.c2cp-27f, 0x1.68e82ep-82f, 0.0f, 0x1.f675e2p-21f, 0.0f,
     0x1.7ff3fcp-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c69f8ap-110f, 0.0f, 0.0f, 0x1.ff482p-101f, 0.0f, 0x1.274a58p-6f,
     0x1.44b3cp-47f, 0.0f, 0.0f, 0x1.10554p-78f, 0x1.c62446p-26f, 0x1.cfdd88p-112f,
     0x1.021818p-7f, 0x1.932178p-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.107f9p-32f, 0.0f, 0.0f, 0x1.75b30ap-3f, 0x1.ff928ap-95f, 0x1.4eaep-17f,
     0x1p0f, 0x1.479ad2p-43f, 0.0f, 0x1.fb5116p-33f, 0x1.4cf1dp-29f, 0x1.59f508p-87f,
     0.0f, 0x1.ec2338p-68f, 0.0f, 0.0f, 0x1.d6928ap-46f, 0.0f, 0x1.a26c9ep-77f, 0.0f
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
            tmp1 = Sleef_finz_logf4_u10kvx(tmp0);
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
    printf("Sleef_finz_logf4_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_logf4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
