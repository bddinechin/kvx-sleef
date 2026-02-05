/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_log2f4_u10avx2128.c --function \
 *     Sleef_finz_log2f4_u10avx2128 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 4 --function-input-vector-size \
 *     4 --bench --no-embedded-bin --target x86_avx2128
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
     0.0f, 0.0f, 0x1.e7979cp-43f, 0x1.77495ep-24f, 0.0f, 0x1.9c903p-50f,
     0x1.fd548cp-110f, 0.0f, 0x1.c75292p-111f, 0x1.9dd076p-71f, 0.0f, 0x1.59839ep-83f,
     0x1.9e3c7p-87f, 0.0f, 0.0f, 0.0f, 0x1.81b1d8p-76f, 0.0f, 0.0f, 0x1.3111e2p-3f,
     0.0f, 0x1.d0b782p-29f, 0x1.c3c03cp-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.262b7p-16f,
     0.0f, 0x1.1b03b8p-103f, 0.0f, 0x1.a1e20ep-69f, 0x1.b5205p-116f, 0x1.4cfcf2p-47f,
     0.0f, 0x1.a03f24p-56f, 0x1.670f3p-60f, 0x1.691eccp-9f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c13614p-94f, 0x1p0f, 0x1.fa459ep-46f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.cb31eap-13f, 0x1.22986ap-38f, 0.0f, 0x1.ef59c6p-96f,
     0x1.e4e2cap-14f, 0.0f, 0.0f, 0x1.489afp-48f, 0.0f, 0x1.18ee7ap-76f, 0.0f,
     0x1.7d120cp-33f, 0.0f, 0x1.cc242ap-51f, 0x1.b123bep-100f, 0x1.5f5058p-7f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.99f3a8p-22f, 0.0f, 0.0f, 0.0f, 0x1.5c2f88p-100f,
     0x1.36650ap-77f, 0x1.ca0216p-119f, 0x1.b55606p-63f, 0.0f, 0.0f, 0x1.9d8ef2p-16f,
     0x1.660674p-104f, 0.0f, 0.0f, 0.0f, 0x1.022cbcp-21f, 0x1.2c15cap-78f,
     0x1.d0e392p-92f, 0.0f, 0.0f, 0x1.f8e808p-74f, 0.0f, 0x1.8fb236p-62f, 0.0f, 0.0f,
     0x1.2a6e78p-107f, 0.0f, 0x1.ba6848p-6f, 0x1.f06db2p-24f, 0x1.5480dep-88f,
     0x1.370c7p-27f, 0.0f, 0x1.9147cap-45f, 0.0f, 0.0f, 0.0f, 0x1.729c78p-46f, 0.0f,
     0x1.0f3856p-47f, 0.0f, 0.0f, 0x1.3d8c54p-91f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9948f2p-85f, 0.0f, 0.0f, 0x1.a119c4p-79f, 0.0f, 0.0f, 0x1.4a566cp-68f, 0.0f,
     0x1.dc4e7ap-22f, 0.0f, 0.0f, 0.0f, 0x1.7df324p-19f, 0x1.13cc62p-15f, 0.0f,
     0x1.45b986p-79f, 0.0f, 0x1.997fbep-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ce79b2p-38f, 0x1.25cd64p-123f, 0x1.2dedfp-105f, 0.0f, 0.0f, 0x1.b993a6p-114f,
     0x1.8ed83ep-44f, 0x1.b19f72p-66f, 0x1.0ec17ap-83f, 0x1.c6f016p-60f, 0.0f,
     0x1.1d11p-71f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.40412ap-16f, 0x1.a17054p-44f,
     0x1.02597cp-33f, 0x1.43efcap-14f, 0x1.3e5b0ep-28f, 0x1.17222cp-40f,
     0x1.fd8dccp-41f, 0x1.6cdc64p-43f, 0x1.a5af3p-48f, 0.0f, 0x1.857422p-15f,
     0x1.35502ap-123f, 0x1.41ff46p-7f, 0.0f, 0x1.395f28p-28f, 0x1.f0731ap-67f,
     0x1.c53acap-76f, 0.0f, 0.0f, 0x1.a961dp-38f, 0.0f, 0x1.6d67b2p-6f,
     0x1.8fb8dcp-110f, 0.0f, 0.0f, 0x1.bb25fp-99f, 0x1.d324e4p-80f, 0x1.9f6686p-13f,
     0x1.d61c46p-120f, 0x1.577f1cp-18f, 0.0f, 0x1.3a3ba2p-8f, 0.0f, 0x1.080a1ap-116f,
     0x1.c7bc1p-119f, 0x1.d07766p-29f, 0x1.4f58aap-51f, 0.0f, 0.0f, 0x1.b4169cp-13f,
     0x1.14dc06p-91f, 0.0f, 0x1.bcdbd8p-19f, 0.0f, 0x1.efc122p-22f, 0x1.522bdap-50f,
     0.0f, 0x1.b17a2ap-81f, 0.0f, 0.0f, 0x1.32e6dap-40f, 0x1.ad775cp-65f,
     0x1.64cdd4p-59f, 0x1.cda1ecp-70f, 0.0f, 0x1.5c9f7ap-30f, 0.0f, 0x1.32f8dp-105f,
     0.0f, 0x1.ec5582p-37f, 0.0f, 0.0f, 0x1.ccff46p-53f, 0.0f, 0x1.0c2654p-33f,
     0x1.b7c0ap-89f, 0.0f, 0x1.ae9184p-22f, 0x1.c163f6p-46f, 0.0f, 0x1.dba104p-11f,
     0x1.e7defep-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1d8ef4p-115f, 0x1.c4c36p-76f, 0.0f, 0x1.1e9568p-27f, 0x1.4942e2p-41f,
     0x1.268b04p-43f, 0.0f, 0.0f, 0x1.329eb6p-121f, 0x1.3496d6p-49f, 0.0f,
     0x1.06dc84p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.90d1b6p-91f, 0.0f,
     0x1.fffae2p-73f, 0x1.89486ep-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.481f7ap-43f,
     0x1.b3071ep-98f, 0.0f, 0x1.3a5436p-4f, 0x1.9b4f5cp-4f, 0.0f, 0x1.768774p-101f,
     0.0f, 0.0f, 0.0f, 0x1.b661d4p-64f, 0.0f, 0.0f, 0x1.823ff2p-92f, 0x1.602a42p-15f,
     0x1.e33c98p-16f, 0.0f, 0x1.9feaap-111f, 0x1.261ceep-71f, 0.0f, 0.0f,
     0x1.0bc59p-102f, 0x1.4cd838p-39f, 0.0f, 0.0f, 0x1.337f9p-97f, 0x1.77ca56p-110f,
     0x1.fe3bf4p-20f, 0x1.3edc7ap-85f, 0.0f, 0.0f, 0x1.ce3384p-4f, 0.0f, 0.0f, 0.0f,
     0x1.33646ep-38f, 0.0f, 0x1.031156p-121f, 0.0f, 0x1.0df662p-74f, 0.0f,
     0x1.3abbb8p-94f, 0x1.1e024cp-27f, 0x1.41296ep-84f, 0.0f, 0x1.9bf4eap-45f,
     0x1.ad892ap-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7130ecp-1f, 0x1.e64fd4p-51f, 0.0f,
     0x1.e982ep-58f, 0.0f, 0.0f, 0x1.32a8ep-91f, 0x1.6a37bep-109f, 0.0f, 0.0f,
     0x1.ab35acp-15f, 0x1.59f498p-76f, 0x1.474ae4p-51f, 0.0f, 0x1.0ccbfep-88f, 0.0f,
     0x1.0ced46p-42f, 0.0f, 0.0f, 0x1.996738p-65f, 0x1.4ae14cp-106f, 0.0f,
     0x1.3c8c34p-72f, 0x1.07dff2p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.57934ap-92f,
     0.0f, 0.0f, 0.0f, 0x1.28088p-96f, 0x1.9f3dp-54f, 0x1.c8d72p-116f, 0.0f, 0.0f,
     0x1.4573dp-92f, 0x1.ef1612p-43f, 0x1.b34634p-85f, 0x1.485f4ap-57f, 0.0f, 0.0f,
     0.0f, 0x1.f91e54p-7f, 0.0f, 0.0f, 0x1.6bfbcep-15f, 0x1.98be84p-109f,
     0x1.f9cd7p-24f, 0.0f, 0.0f, 0x1.9cf9bep-35f, 0x1.35444cp-18f, 0x1.3a3d64p-109f,
     0x1.495cc2p-51f, 0x1.32ab3ep-82f, 0x1.7444b6p-68f, 0.0f, 0x1.766422p-47f, 0.0f,
     0x1.62ae8ep-33f, 0x1.c133e2p-119f, 0.0f, 0.0f, 0x1.835daep-68f, 0x1.04b15p-62f,
     0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.074d08p-115f, 0.0f, 0x1.98eafap-23f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9ef74p-106f, 0x1.ef92e8p-119f, 0x1.2c9648p-110f,
     0x1.66da1p-72f, 0.0f, 0x1.14e5acp-62f, 0x1.1b5e1cp-74f, 0x1.00605ap-9f, 0.0f,
     0x1.b9282ap-36f, 0x1.451842p-113f, 0.0f, 0x1.0479ecp-19f, 0x1.21d60cp-62f,
     0x1.36120ep-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2eb5f4p-89f, 0x1.dff5dap-42f,
     0.0f, 0x1.c9dcacp-29f, 0x1.c4fb26p-100f, 0x1.68cef2p-44f, 0x1.dcbf86p-100f,
     0x1.0a85d6p-66f, 0.0f, 0.0f, 0.0f, 0x1.a59feep-38f, 0.0f, 0.0f, 0x1.e2ff8p-81f,
     0x1.b87b7p-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3b0a42p-95f, 0.0f, 0.0f, 0.0f,
     0x1.4d70d2p-39f, 0.0f, 0x1.56709p-73f, 0x1.e6cefcp-48f, 0.0f, 0.0f,
     0x1.49ca62p-54f, 0x1.98e184p-19f, 0x1p0f, 0x1.fba0eap-79f, 0x1.5abc6cp-37f, 0.0f,
     0x1.3d459ep-80f, 0.0f, 0.0f, 0.0f, 0x1.a238e8p-71f, 0.0f, 0.0f, 0x1.dbbf3p-4f,
     0.0f, 0.0f, 0x1.aa185ep-50f, 0.0f, 0.0f, 0.0f, 0x1.fc2866p-55f, 0.0f, 0.0f,
     0x1.43b078p-74f, 0.0f, 0x1.c5a3b2p-33f, 0.0f, 0x1.733d6cp-91f, 0x1.5217dep-100f,
     0.0f, 0x1.7c56fcp-60f, 0x1.7e51aep-28f, 0x1.b508a8p-86f, 0x1.c0db6cp-121f, 0.0f,
     0.0f, 0x1.4b84c8p-99f, 0x1.f6982ap-39f, 0.0f, 0.0f, 0x1.7bee18p-43f,
     0x1.7b8e22p-13f, 0.0f, 0.0f, 0x1.a79a04p-88f, 0x1.eaf10cp-30f, 0x1.104042p-70f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a276dap-12f, 0.0f, 0.0f,
     0x1.1d12aap-74f, 0.0f, 0.0f, 0x1.235f24p-81f, 0.0f, 0.0f, 0.0f, 0x1.971b34p-16f,
     0.0f, 0.0f, 0x1.fd173cp-61f, 0.0f, 0.0f, 0x1.daaf64p-120f, 0x1.86d2c8p-46f,
     0x1.4a3086p-124f, 0x1.405388p-24f, 0.0f, 0x1.79dd02p-86f, 0x1.52ec6p-92f,
     0x1.8c18dp-11f, 0.0f, 0x1.fba204p-99f, 0.0f, 0.0f, 0x1.cf475cp-50f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.9766aep-80f, 0x1.532e6ep-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4d9634p-3f, 0.0f, 0.0f, 0.0f, 0x1.fde2e4p-119f, 0.0f, 0.0f, 0x1.d19eeap-10f,
     0.0f, 0x1.3e0adap-125f, 0x1.f75adep-32f, 0.0f, 0.0f, 0x1.31cc2cp-99f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.817acep-45f, 0x1.ee644cp-121f, 0.0f, 0.0f, 0x1.35bfd4p-34f,
     0x1.65d1f6p-100f, 0x1.deaac8p-46f, 0x1.ba8cdap-67f, 0.0f, 0x1.b99a14p-26f, 0.0f,
     0x1.fe31cap-90f, 0x1.9cbe06p-111f, 0x1.578f9ep-81f, 0.0f, 0x1.2f029cp-84f,
     0x1.c79112p-125f, 0x1.f31f5cp-12f, 0.0f, 0x1.3903b8p-111f, 0.0f, 0.0f,
     0x1.26ffbcp-3f, 0.0f, 0x1.bc1d7cp-49f, 0x1.27f612p-46f, 0x1.e9a06ep-42f,
     0x1.14343ep-113f, 0.0f, 0x1.17a92ep-124f, 0.0f, 0x1.85f692p-64f, 0x1.0b2a8cp-54f,
     0x1.aa521p-89f, 0x1.651f8cp-119f, 0x1.3076bcp-48f, 0.0f, 0.0f, 0x1.cf1f1ep-55f,
     0x1.27689cp-3f, 0x1.7ab82cp-38f, 0x1.696d18p-18f, 0.0f, 0.0f, 0x1.7acb74p-125f,
     0x1.12cabap-51f, 0.0f, 0x1.e24d04p-81f, 0x1.d648c2p-2f, 0x1.bce48p-60f, 0.0f,
     0x1.d0c154p-94f, 0x1.ddb27ep-5f, 0.0f, 0x1.c73f28p-54f, 0x1.b1942cp-13f, 0.0f,
     0.0f, 0x1.9ded7ap-13f, 0.0f, 0x1.ee8ae2p-16f, 0.0f, 0x1p0f, 0.0f, 0.0f,
     0x1.ad6abcp-99f, 0x1.a8e5ep-82f, 0.0f, 0x1.c9ff0ap-83f, 0x1.674b3p-81f,
     0x1.8402b4p-121f, 0.0f, 0x1.5a52eep-4f, 0.0f, 0x1.5943ccp-74f, 0x1.85d8b2p-73f,
     0x1.fdd0f4p-41f, 0x1.d91e26p-117f, 0.0f, 0.0f, 0.0f, 0x1.748a64p-104f,
     0x1.d946dep-99f, 0x1.c08012p-120f, 0.0f, 0.0f, 0x1.255c78p-109f, 0x1.b8ed9ep-37f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.9337ecp-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.733bp-24f, 0x1.900bfap-14f, 0x1.82ce9cp-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.252e3ep-47f, 0x1.4865bcp-121f, 0.0f, 0x1.7efaf4p-57f, 0.0f, 0.0f,
     0x1.937746p-62f, 0x1.31e164p-41f, 0.0f, 0x1.187326p-108f, 0.0f, 0x1.51d0dcp-79f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c2a3f8p-23f, 0.0f, 0x1.cf7f28p-123f, 0.0f, 0.0f,
     0x1.fa34eep-2f, 0x1.cab442p-116f, 0x1.0461ccp-5f, 0.0f, 0x1.784786p-56f,
     0x1.61d25ap-69f, 0x1.34190ap-2f, 0.0f, 0.0f, 0x1.2b4f62p-91f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.093602p-2f, 0.0f, 0x1.84539p-38f, 0.0f, 0x1.7ac3dcp-45f, 0.0f,
     0x1.fcd23ap-20f, 0.0f, 0x1.80a09p-75f, 0.0f, 0.0f, 0x1.904dc8p-55f,
     0x1.c468f4p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.17890ep-80f, 0.0f,
     0x1.8b653ep-102f, 0x1p0f, 0x1.16c4d4p-87f, 0.0f, 0x1.b1a7fep-108f, 0.0f, 0.0f,
     0x1.e6d52ep-79f, 0.0f, 0x1.87fb96p-32f, 0.0f, 0.0f, 0.0f, 0x1.4afb5cp-122f,
     0x1p0f, 0.0f, 0x1.cc69bcp-110f, 0.0f, 0.0f, 0.0f, 0x1.fc3ab2p-112f, 0.0f, 0.0f,
     0x1.ab5a48p-4f, 0.0f, 0x1.09b6b6p-34f, 0.0f, 0.0f, 0.0f, 0x1.cb5fp-70f, 0.0f,
     0x1.159326p-109f, 0.0f, 0x1.277984p-90f, 0.0f, 0.0f, 0x1.3285p-56f,
     0x1.a1a3d2p-51f, 0x1.37fbecp-2f, 0x1.8b2a0cp-83f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.abb2dp-104f, 0.0f, 0x1.578e18p-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.dc589ep-39f, 0x1.4fbe56p-14f, 0.0f, 0.0f, 0x1.9bff5p-31f, 0x1p0f,
     0x1.0f8556p-63f, 0.0f, 0x1.f0a624p-59f, 0.0f, 0x1.b3b3f4p-1f, 0.0f,
     0x1.434bf8p-79f, 0x1.9d702ap-88f, 0.0f, 0x1.4d88cep-30f, 0.0f, 0x1.e4d212p-71f,
     0x1.388b86p-100f, 0x1.f495c2p-34f, 0.0f, 0x1.3dcae6p-45f, 0x1.488416p-78f, 0.0f,
     0x1.2f9cep-55f, 0.0f, 0.0f, 0x1.7b255p-10f, 0.0f, 0x1.16492cp-77f, 0.0f, 0.0f,
     0.0f, 0x1.25e138p-46f, 0x1.f1ddb2p-92f, 0x1.2090d2p-106f, 0.0f, 0.0f,
     0x1.97afdap-12f, 0x1.c0131ep-1f, 0.0f, 0x1.768fc2p-64f, 0x1.fa9fb4p-97f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c51ecep-93f, 0x1.ba86a2p-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.6dece4p-29f, 0.0f, 0.0f, 0x1.c8f458p-8f, 0x1.b64b0ep-35f,
     0x1.735f04p-38f, 0x1.d2dedap-50f, 0.0f, 0x1.cbdf3ap-45f, 0x1.a0b692p-7f,
     0x1.378d7ep-3f, 0x1.e01c48p-91f, 0.0f, 0.0f, 0.0f, 0x1.43287p-35f,
     0x1.34c658p-96f, 0x1.e3226cp-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.10ecbap-109f, 0.0f, 0.0f, 0x1.26278ap-43f, 0.0f, 0x1.95366ep-68f,
     0x1.941b04p-125f, 0.0f, 0x1.d54bbap-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3a93ap-50f,
     0.0f, 0x1.7c682ap-30f, 0.0f, 0x1.3f8628p-108f, 0x1.7c6976p-73f, 0x1.7fd03ep-103f,
     0.0f, 0x1.3377dap-79f, 0x1.f63baep-17f, 0.0f, 0.0f, 0x1.e6a894p-95f, 0.0f, 0.0f,
     0x1.d16c52p-31f, 0x1.193ccp-8f, 0x1.34bf3ap-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.509bb4p-20f, 0.0f, 0x1.e4f33ep-40f, 0x1.e1c47p-92f, 0.0f, 0.0f,
     0x1.5f6e1ep-88f, 0.0f, 0x1.7e0586p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bf0a34p-22f,
     0x1.5bcbecp-28f, 0x1.ac649cp-118f, 0.0f, 0x1.ab2084p-22f, 0x1.2c9664p-60f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.806c06p-14f, 0x1.2bbac2p-5f, 0.0f,
     0x1.3a7d64p-97f, 0.0f, 0x1.fa78c4p-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d8d652p-26f,
     0x1.987d38p-46f, 0.0f, 0x1.0d1a3ap-54f, 0x1.b37354p-93f, 0x1.05eed6p-16f,
     0x1.9770fep-84f, 0.0f, 0x1.144632p-43f, 0x1.717a78p-4f, 0x1.b86214p-43f, 0.0f,
     0x1.b21e0ep-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.71822ep-102f, 0.0f, 0.0f,
     0x1.080f48p-46f, 0.0f, 0.0f, 0x1.db0f34p-49f, 0x1.899768p-61f, 0.0f, 0.0f,
     0x1.6b413cp-41f, 0x1.68e13ap-50f, 0x1.69f154p-3f, 0x1.b4dc02p-20f,
     0x1.da59c2p-56f, 0.0f, 0x1.0be97cp-48f, 0x1.1792acp-1f, 0x1.77d188p-111f,
     0x1.64b988p-111f, 0x1.748dccp-60f, 0x1.8b2458p-109f, 0.0f, 0x1.aa6a74p-55f, 0.0f,
     0x1.0d0b2cp-30f, 0x1.710224p-74f, 0x1.fd9a7cp-83f, 0x1.a2b864p-52f, 0.0f,
     0x1.72f936p-106f, 0.0f, 0x1.1e6f0cp-32f, 0.0f, 0x1.6191d6p-92f, 0.0f,
     0x1.7e6572p-19f, 0x1.ff879ep-123f, 0x1.afaafcp-36f, 0x1.383c64p-41f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.7b455cp-79f, 0.0f, 0.0f, 0x1.1e9ab4p-108f, 0x1.cab592p-83f,
     0x1p0f, 0x1.673982p-80f, 0x1.c79b3ap-66f, 0x1.a27c38p-98f, 0x1.34551ep-123f,
     0.0f, 0x1.8d07cp-25f, 0.0f
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
            tmp1 = Sleef_finz_log2f4_u10avx2128(tmp0);
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
    printf("Sleef_finz_log2f4_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_log2f4_u10avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
