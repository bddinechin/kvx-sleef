/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_fmaxf4_kvx.c --function Sleef_finz_fmaxf4_kvx \
 *     --arity 2 --headers sleef.h,ml_support_lib.h --input-formats \
 *     binary32,binary32 --vector-size 4 --function-input-vector-size 4 \
 *     --bench --no-embedded-bin --target kv3
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
     0x1.f3e1c2p-119f, 0.0f, 0.0f, 0.0f, 0x1.bb1fb2p-106f, 0x1.b12174p-92f,
     0x1.3ebf6ep-58f, 0x1.648828p-17f, 0x1.8eb0c6p-11f, 0x1.ab99cep-48f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.302914p-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.70665p-27f, 0.0f, 0.0f,
     0x1.dfeb86p-33f, 0x1.8f5056p-36f, 0x1.6fd808p-59f, 0.0f, 0x1.45401ep-79f,
     0x1.aff2c6p-42f, 0x1.7d8cb6p-82f, 0x1.38265cp-34f, 0.0f, 0x1.df29eap-80f,
     0x1.6052ccp-62f, 0.0f, 0x1.81a3fp-80f, 0.0f, 0.0f, 0x1.d8fde6p-88f, 0x1p0f,
     0x1.29a9a6p-52f, 0x1.58240cp-106f, 0x1.1b6252p-94f, 0x1.64556cp-87f,
     0x1.c700d8p-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bf037p-26f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.af2d3p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d0d0dp-98f, 0.0f, 0.0f, 0.0f,
     0x1.b22c3cp-48f, 0.0f, 0x1.6dd7f2p-15f, 0x1.377c5p-41f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5088bap-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.38eceap-115f,
     0.0f, 0x1.26ebc6p-60f, 0x1.4cb328p-98f, 0.0f, 0x1.003376p-39f, 0x1.a5f39p-78f,
     0.0f, 0x1.80886p-56f, 0x1.67c042p-55f, 0x1.8c9a86p-21f, 0x1.d60738p-12f, 0.0f,
     0x1.f6ed86p-19f, 0x1.a64776p-73f, 0x1.ec055ap-115f, 0x1.347f98p-108f,
     0x1.6ef456p-73f, 0.0f, 0x1.d474c2p-26f, 0x1.ef4888p-116f, 0x1.eed46ep-96f,
     0x1.9f03d4p-53f, 0x1.b3daacp-68f, 0.0f, 0x1.ec4ed4p-43f, 0.0f, 0x1.8f5c12p-121f,
     0x1.368218p-70f, 0x1.e100e8p-104f, 0.0f, 0.0f, 0x1.7cb9fcp-28f, 0x1.b858fp-45f,
     0.0f, 0.0f, 0.0f, 0x1.ce2f5p-111f, 0.0f, 0x1.a374fep-48f, 0x1.af48f2p-42f, 0.0f,
     0.0f, 0x1.a5d29ep-71f, 0x1.918c1ap-20f, 0.0f, 0.0f, 0.0f, 0x1.62ccc2p-101f, 0.0f,
     0x1.a95b62p-116f, 0.0f, 0x1.fbcf6ap-108f, 0.0f, 0.0f, 0.0f, 0x1.24a13ep-13f,
     0x1.004262p-4f, 0x1.7f7bb2p-10f, 0.0f, 0.0f, 0x1.6b74fap-20f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.78550ap-120f, 0.0f, 0x1.2bb116p-57f, 0.0f, 0.0f, 0.0f, 0x1.ed547ep-8f,
     0.0f, 0x1.e6db7cp-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.29eb14p-75f, 0x1.712b6ap-97f,
     0x1.4f8a44p-92f, 0.0f, 0.0f, 0x1.6aea2ep-49f, 0x1.cb8796p-99f, 0.0f, 0.0f, 0.0f,
     0x1.8e12dcp-101f, 0x1.004e1p-118f, 0x1.665d96p-109f, 0x1.941172p-32f, 0.0f,
     0x1.c13188p-109f, 0.0f, 0.0f, 0.0f, 0x1.79aed4p-114f, 0x1.8a43ap-54f,
     0x1.790164p-76f, 0.0f, 0x1.69d2a8p-70f, 0x1.c8226cp-76f, 0x1.d700a8p-4f,
     0x1.144e8ap-100f, 0x1.3eaba8p-98f, 0.0f, 0x1.66aeb8p-89f, 0x1.bce0ecp-31f, 0.0f,
     0x1.639c62p-37f, 0x1.912ffap-49f, 0.0f, 0x1.bb2eacp-22f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a17b58p-24f, 0.0f, 0.0f, 0x1.9dddb6p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ce0ce4p-116f, 0x1.39d204p-117f, 0x1.813146p-59f,
     0x1.c24f18p-24f, 0.0f, 0x1.7bc904p-105f, 0x1.604222p-54f, 0x1.40458p-35f,
     0x1.711888p-62f, 0x1.ca92e2p-54f, 0x1.3f37e2p-43f, 0.0f, 0x1.a1bda4p-78f, 0.0f,
     0.0f, 0x1.e4f298p-126f, 0x1.9c4c0cp-125f, 0.0f, 0.0f, 0x1.08cbdap-36f,
     0x1.c82ed4p-83f, 0.0f, 0x1.2eec28p-53f, 0x1.dbabcp-101f, 0.0f, 0x1.0f49f2p-125f,
     0.0f, 0x1.be31a4p-53f, 0.0f, 0.0f, 0.0f, 0x1.bbb104p-103f, 0.0f, 0.0f,
     0x1.bf82e2p-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.50dcb2p-98f, 0x1.53af38p-1f,
     0x1.a9c026p-56f, 0x1.6fd8a2p-5f, 0.0f, 0x1.0feccap-124f, 0x1.3e792p-47f,
     0x1.2e9a3ap-104f, 0x1.7f76c6p-75f, 0x1.b2799ap-85f, 0x1.0744f2p-95f,
     0x1.4990a4p-121f, 0x1.42365ap-95f, 0x1.20841ep-59f, 0x1.94e79p-6f,
     0x1.6c626cp-95f, 0x1.ba00e4p-68f, 0x1.f3cae8p-66f, 0x1.ad0212p-57f, 0.0f,
     0x1.d17afcp-51f, 0x1.eb6e14p-69f, 0.0f, 0x1.568cdap-61f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.2e26aep-44f, 0x1.e439dp-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5f238p-24f,
     0x1.1a3ddep-121f, 0.0f, 0x1.0b8578p-28f, 0x1.abcb46p-77f, 0.0f, 0x1.0d981ep-123f,
     0x1.75b7d4p-125f, 0.0f, 0.0f, 0x1.9e2e5p-19f, 0x1.ba8952p-123f, 0.0f,
     0x1.15e458p-43f, 0.0f, 0x1.6d774p-34f, 0.0f, 0.0f, 0.0f, 0x1.0af25cp-121f, 0.0f,
     0.0f, 0x1.98fcfp-81f, 0.0f, 0x1.e3c12ep-53f, 0.0f, 0x1.e68de6p-69f,
     0x1.531c18p-72f, 0.0f, 0.0f, 0x1.1fbe32p-49f, 0.0f, 0x1.91c676p-75f, 0.0f, 0.0f,
     0.0f, 0x1.017b1ep-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.28ef9p-109f, 0.0f, 0.0f, 0.0f,
     0x1.b1bb1p-111f, 0.0f, 0x1.a79bdcp-33f, 0.0f, 0.0f, 0x1.f5ca36p-50f,
     0x1.1f0c3p-86f, 0x1.72d14ep-93f, 0x1.9acf66p-66f, 0.0f, 0.0f, 0x1.e79c06p-118f,
     0x1.49e848p-37f, 0x1.8b0b06p-8f, 0.0f, 0x1.7a2cf8p-1f, 0.0f, 0.0f, 0.0f,
     0x1.4de548p-108f, 0.0f, 0x1.a767fcp-23f, 0x1.c0d672p-78f, 0x1.152222p-124f,
     0x1.6d21bap-28f, 0.0f, 0.0f, 0x1.91d54p-125f, 0x1.f16f08p-20f, 0x1.ca8e0cp-82f,
     0.0f, 0x1.15655ep-123f, 0x1.57ab5p-116f, 0.0f, 0x1.990396p-111f, 0x1.242b1p-58f,
     0.0f, 0x1.00bc82p-103f, 0x1.285cb6p-92f, 0x1.f3302cp-10f, 0x1.e5e218p-100f, 0.0f,
     0x1.4a6a4p-83f, 0x1.895e16p-41f, 0x1.1e3358p-57f, 0.0f, 0x1.fab048p-36f,
     0x1.f2eadap-109f, 0x1.22a39ep-14f, 0x1.c55a96p-110f, 0.0f, 0.0f, 0x1.0f6748p-70f,
     0.0f, 0x1.32d84ep-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1994f6p-86f,
     0.0f, 0.0f, 0x1.3c3f0ep-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c9204ap-123f,
     0x1.73f03p-9f, 0.0f, 0x1.e02d7cp-7f, 0.0f, 0.0f, 0x1.cbc2fap-62f,
     0x1.0adbf8p-100f, 0x1.5d2c88p-6f, 0x1.fb3586p-65f, 0.0f, 0x1.632344p-37f,
     0x1.7a5b38p-14f, 0x1.6354b6p-45f, 0x1.1ba806p-63f, 0x1.25c1c2p-23f, 0.0f,
     0x1.52a334p-16f, 0.0f, 0.0f, 0.0f, 0x1.2311bp-36f, 0.0f, 0x1.6a3e88p-41f,
     0x1.0b728cp-73f, 0x1.59b67ap-27f, 0.0f, 0.0f, 0x1.514e84p-5f, 0x1.a45a6ap-100f,
     0.0f, 0x1.7ef76ep-94f, 0.0f, 0x1.3615e2p-120f, 0.0f, 0.0f, 0x1.87a496p-26f, 0.0f,
     0x1.b7778cp-7f, 0x1.78f4dap-106f, 0.0f, 0.0f, 0.0f, 0x1.a8b45ep-92f,
     0x1.f33916p-28f, 0x1.8c8c84p-91f, 0x1.52e934p-98f, 0x1.a5dbd8p-27f, 0.0f,
     0x1.87ff06p-23f, 0x1.6ef3e6p-121f, 0x1.5f30fep-126f, 0.0f, 0.0f, 0x1.bcfabep-90f,
     0x1.f4e772p-58f, 0x1.cd8922p-94f, 0x1.aa7a8ap-18f, 0x1.b0fecap-17f, 0.0f,
     0x1.a11efap-33f, 0.0f, 0.0f, 0x1.060a22p-54f, 0x1.02c6c8p-46f, 0.0f,
     0x1.f3967ap-41f, 0x1.28227ep-102f, 0x1.913124p-94f, 0.0f, 0x1.277052p-71f, 0.0f,
     0x1.10a0dep-53f, 0x1.dbb442p-4f, 0x1.a25c9cp-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a11a54p-34f, 0x1.8bb70ap-70f, 0x1.825f72p-41f, 0x1.f5a9f2p-52f, 0.0f,
     0x1.05401ep-80f, 0.0f, 0.0f, 0.0f, 0x1.b07e1ap-30f, 0.0f, 0.0f, 0x1.d1dbd8p-76f,
     0x1.9eb152p-41f, 0x1.38f2c2p-35f, 0x1.8e35aep-56f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cd3ddcp-83f, 0x1.cad62ep-32f, 0.0f, 0x1.76f49cp-86f, 0.0f, 0x1.ccef4ep-67f,
     0x1.2f28fap-35f, 0x1.a08d8ep-23f, 0.0f, 0x1.678166p-39f, 0.0f, 0x1.b63eeep-47f,
     0x1.654d44p-125f, 0x1.2ffa78p-85f, 0x1.ccca88p-3f, 0.0f, 0x1.002716p-27f,
     0x1.3374f4p-16f, 0x1.6cdb3ep-107f, 0.0f, 0x1.e5c76ap-92f, 0x1.287266p-48f, 0.0f,
     0x1.3e7bf2p-126f, 0x1.12e95cp-92f, 0.0f, 0x1.86021p-86f, 0x1.9c0eb8p-48f,
     0x1.395594p-88f, 0x1.7984a6p-75f, 0.0f, 0.0f, 0x1.a3946p-75f, 0x1.13ffdep-18f,
     0.0f, 0.0f, 0.0f, 0x1.ee04aep-106f, 0.0f, 0x1.d2087ap-8f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.08a588p-80f, 0.0f, 0.0f, 0.0f, 0x1.c6a468p-1f, 0.0f,
     0x1.b671bep-115f, 0x1.9ef8c8p-67f, 0.0f, 0x1.0512ep-36f, 0.0f, 0.0f, 0.0f,
     0x1.6e822p-22f, 0x1.37eb0cp-57f, 0x1.97815p-61f, 0x1.cedeaep-65f, 0.0f,
     0x1.d2870cp-46f, 0x1.432dcap-8f, 0.0f, 0x1.f19b1ep-121f, 0x1.78cb0ep-114f, 0.0f,
     0x1.95ece4p-3f, 0x1.a6f79ap-1f, 0.0f, 0x1.b40266p-4f, 0.0f, 0.0f, 0.0f,
     0x1.c1d96cp-81f, 0x1.32564cp-96f, 0x1.7cd338p-5f, 0.0f, 0.0f, 0.0f,
     0x1.b6ffc8p-19f, 0x1.9abf12p-114f, 0x1.f0b938p-74f, 0.0f, 0.0f, 0x1.30bf9cp-47f,
     0x1.e42cb4p-108f, 0.0f, 0x1.ab7f1cp-82f, 0x1.d0c45cp-35f, 0.0f, 0x1.43596ep-89f,
     0.0f, 0.0f, 0.0f, 0x1.e801b6p-119f, 0x1.996424p-95f, 0x1.4d809p-40f,
     0x1.946752p-54f, 0.0f, 0.0f, 0x1.4aa48ap-119f, 0.0f, 0.0f, 0x1.2379a8p-104f,
     0x1.0ca06ep-104f, 0.0f, 0x1.c0b088p-106f, 0.0f, 0x1.abb592p-37f, 0x1.45ddb2p-86f,
     0x1.591462p-53f, 0.0f, 0.0f, 0x1.51894cp-40f, 0x1.8061cp-114f, 0.0f, 0.0f,
     0x1.f48292p-23f, 0.0f, 0.0f, 0.0f, 0x1.0e6c7cp-116f, 0x1.87662ep-36f,
     0x1.5d563cp-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.43ae6p-20f, 0x1.10ae0cp-69f,
     0x1.432ccap-52f, 0x1.12fd06p-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7f6f86p-56f,
     0x1.ca16fep-112f, 0x1.59c7b4p-104f, 0.0f, 0.0f, 0x1.f4e542p-86f, 0x1.f74edcp-26f,
     0x1.8f0c66p-30f, 0x1.d559f6p-72f, 0.0f, 0.0f, 0.0f, 0x1.8e852ap-102f, 0.0f,
     0x1.364adp-11f, 0x1.d1a7d2p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c8793ep-83f,
     0x1.668e7ep-26f, 0x1.796e2ap-116f, 0x1.ccd6e6p-106f, 0x1.e305fep-47f, 0.0f, 0.0f,
     0.0f, 0x1.42a36ep-75f, 0x1.af6744p-56f, 0x1.4032fap-41f, 0.0f, 0x1.a21866p-63f,
     0x1.d3766cp-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bc0252p-10f, 0x1.720288p-58f, 0.0f,
     0x1.253464p-105f, 0x1.32738cp-21f, 0.0f, 0x1.dc2d32p-2f, 0.0f, 0.0f,
     0x1.d49e3ap-62f, 0.0f, 0x1.3a8cc2p-42f, 0x1.9ce914p-122f, 0x1.de6ffep-97f, 0.0f,
     0.0f, 0x1.fc0b6ap-29f, 0x1.62e24ap-36f, 0.0f, 0x1.6ce256p-40f, 0x1.092014p-22f,
     0.0f, 0.0f, 0.0f, 0x1.123dfcp-23f, 0.0f, 0x1.6ffe48p-45f, 0x1.3b4584p-41f, 0.0f,
     0.0f, 0x1.fd78e6p-44f, 0x1.86eec2p-122f, 0x1.5d3a38p-37f, 0x1.e86828p-12f, 0.0f,
     0.0f, 0.0f, 0x1.190172p-4f, 0x1.1a220ap-66f, 0.0f, 0x1.a36144p-83f,
     0x1.5a998cp-54f, 0x1.b9f7e4p-125f, 0.0f, 0.0f, 0.0f, 0x1.101f7cp-53f, 0.0f,
     0x1.4ca42cp-113f, 0.0f, 0.0f, 0.0f, 0x1.171d44p-40f, 0x1.0a4cap-111f,
     0x1.0eaa54p-33f, 0x1.d8bc1p-21f, 0x1.29816cp-21f, 0x1.3fae08p-119f,
     0x1.e83f3ap-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6b5eb6p-43f, 0.0f, 0x1.614fa2p-32f,
     0x1.832aep-84f, 0x1.44b3eap-99f, 0x1.9be074p-102f, 0.0f, 0.0f, 0x1.e5f0dcp-8f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b47806p-55f, 0.0f, 0x1.23a618p-61f,
     0x1.4b92b8p-124f, 0x1.27707ep-34f, 0.0f, 0x1.81bb9p-35f, 0.0f, 0x1.126a24p-57f,
     0.0f, 0x1.cd90dep-37f, 0x1.3fae34p-121f, 0x1.09407p-13f, 0.0f, 0.0f, 0.0f,
     0x1.108e54p-16f, 0x1.b432ecp-77f, 0.0f, 0x1.fc150ep-42f, 0x1.d07466p-108f,
     0x1.9ae95ep-125f, 0x1.641c5p-26f, 0x1.a271a6p-116f, 0.0f, 0x1.81592ep-27f,
     0x1.f24ac6p-55f, 0x1.c71b64p-52f, 0x1.f6d1bp-13f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d6d92p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.489182p-118f, 0x1.6b09a6p-1f,
     0.0f, 0.0f, 0.0f, 0x1.1374dap-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5dfe1p-114f, 0x1.77a6c6p-31f, 0x1.2084bap-98f, 0.0f, 0x1.f52c4ep-23f,
     0x1.b8518cp-90f, 0x1.f74e8ep-69f, 0.0f, 0x1.a24808p-5f, 0.0f, 0.0f,
     0x1.3776aep-108f, 0.0f, 0x1.b55e2ap-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.54038cp-97f, 0x1.e9ce84p-20f, 0.0f, 0x1.362bb6p-51f, 0.0f, 0x1.7b8252p-100f,
     0x1p0f, 0.0f, 0x1.c5b9a4p-57f, 0x1.1962f2p-52f, 0x1.63463cp-123f, 0.0f, 0.0f,
     0x1.2e7a46p-25f, 0.0f, 0x1.49e2ecp-93f, 0x1.53390ep-71f, 0x1.7504bcp-22f,
     0x1.edfceep-103f, 0x1.46d8b8p-6f, 0x1.d92a9p-93f, 0.0f, 0x1.6f586ap-117f,
     0x1.41e892p-95f, 0x1.4b624cp-96f, 0.0f, 0.0f, 0.0f, 0x1.da1f78p-108f, 0.0f,
     0x1.246914p-122f, 0.0f, 0.0f, 0.0f, 0x1.11a7cep-95f, 0x1.e5f314p-56f,
     0x1.78b04cp-25f, 0.0f, 0x1.285b7cp-25f, 0.0f, 0x1.0e2f42p-29f, 0x1.b176e8p-25f,
     0.0f, 0.0f, 0x1.45fb4cp-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9daf54p-23f, 0.0f,
     0.0f, 0x1.6596a6p-100f, 0.0f, 0.0f, 0x1.edd66ap-80f, 0x1.af917ep-27f, 0.0f,
     0x1.4d7944p-111f, 0x1.33e264p-5f, 0.0f, 0.0f, 0x1.fd97fcp-103f, 0.0f, 0.0f, 0.0f,
     0x1.65331p-113f, 0x1.802248p-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ad652p-62f, 0.0f,
     0.0f, 0.0f, 0x1.780e9ep-30f, 0x1.bbc436p-69f, 0x1.7711c2p-85f, 0.0f, 0.0f, 0.0f,
     0x1.96554ep-101f, 0.0f, 0.0f, 0x1.385372p-122f, 0x1.6f3c22p-86f, 0x1.f604c2p-14f,
     0.0f, 0x1.4cd29ep-13f, 0x1.b459ccp-71f, 0.0f, 0x1.7c3296p-85f, 0x1p0f,
     0x1.68be5ap-36f, 0x1.af4294p-75f, 0.0f, 0x1.7e3f14p-118f, 0x1.e22036p-46f, 0.0f,
     0x1.fd329cp-71f, 0.0f, 0x1.e74a58p-80f, 0x1.4fea26p-103f, 0.0f, 0x1.8625f6p-28f,
     0x1.4a958ap-32f, 0.0f, 0x1.41d2cep-99f, 0.0f, 0x1.c9e20ap-18f, 0x1.6edcb6p-95f,
     0.0f, 0.0f, 0.0f, 0x1.b459bep-111f, 0x1.5545b8p-58f, 0x1.563108p-26f, 0.0f,
     0x1.41e10ep-57f, 0.0f, 0x1.0e8814p-73f, 0x1.ce12fcp-61f, 0x1.ac54a6p-54f,
     0x1.7136cap-120f, 0.0f, 0.0f, 0x1.76bb86p-41f, 0x1.4a00e8p-68f, 0x1.fdcf26p-61f,
     0.0f, 0x1.ebf7a8p-102f, 0.0f, 0x1.4959b6p-7f, 0.0f, 0.0f, 0x1.c36a1p-119f, 0.0f,
     0x1.f08084p-52f, 0.0f, 0x1.9b9e96p-55f, 0x1.89783ap-97f, 0.0f, 0x1.0546dap-19f,
     0x1.5307fp-124f, 0.0f, 0x1.ecd836p-87f, 0x1.f9ed56p-102f, 0x1.ed3a26p-85f,
     0x1.c64386p-30f, 0.0f, 0x1.adaec8p-1f, 0.0f, 0x1.d034d6p-11f, 0.0f, 0.0f,
     0x1.1003a8p-11f, 0x1.bb39c4p-78f, 0.0f, 0.0f, 0.0f, 0x1.30c6e4p-65f,
     0x1.7b4c82p-106f, 0.0f, 0.0f, 0x1.3a18dep-11f, 0x1.a2172ep-97f, 0x1.3bd7bap-32f,
     0x1.003d34p-107f, 0.0f, 0x1.f3c68ep-12f, 0.0f, 0x1.e83d0cp-122f, 0.0f, 0.0f,
     0x1.537448p-45f
};
static const float external_bench_wrapper_input_table_arg1[1004]  = {
     0x1.9fd206p-25f, 0.0f, 0x1.471f26p-107f, 0x1.4be9e4p-18f, 0.0f, 0.0f,
     0x1.c95502p-51f, 0.0f, 0x1.4edce6p-20f, 0.0f, 0x1.97294ap-58f, 0x1.bb09fcp-81f,
     0x1.103ed6p-68f, 0.0f, 0x1.d66fa8p-85f, 0x1.737b26p-74f, 0x1.8ea6f6p-13f, 0.0f,
     0x1.70674p-89f, 0x1.eda5f8p-68f, 0.0f, 0x1.10d3b4p-68f, 0.0f, 0.0f, 0.0f,
     0x1.6975a6p-119f, 0.0f, 0x1.f30fcap-63f, 0.0f, 0.0f, 0.0f, 0x1.d53d22p-25f,
     0x1.a2b94cp-95f, 0x1.4e21c4p-81f, 0x1.1968b8p-53f, 0x1.0a1026p-122f, 0.0f,
     0x1.459cd6p-12f, 0x1.cb57d2p-34f, 0x1.e88bcp-101f, 0.0f, 0x1.b764e4p-5f, 0.0f,
     0x1.06b9c4p-108f, 0x1.b445c2p-89f, 0.0f, 0x1.65529ap-29f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.dd52e8p-86f, 0x1.483a1ep-86f, 0x1.2d8a88p-42f, 0x1.aec682p-66f,
     0.0f, 0.0f, 0.0f, 0x1.630a42p-124f, 0x1.a06112p-69f, 0x1.654b32p-9f, 0.0f,
     0x1.ea303ep-1f, 0.0f, 0.0f, 0x1.fb75bep-66f, 0x1.f7d028p-102f, 0x1.4918aap-56f,
     0.0f, 0.0f, 0x1.823beep-118f, 0.0f, 0x1.0af3ap-36f, 0.0f, 0x1.d6964cp-100f,
     0x1.73a354p-92f, 0x1.b0c3ep-16f, 0x1.f866cp-99f, 0x1.afc21p-118f, 0x1p0f, 0.0f,
     0x1.57732cp-60f, 0.0f, 0.0f, 0x1.9e3602p-19f, 0x1.9ef31p-47f, 0.0f,
     0x1.723406p-67f, 0.0f, 0.0f, 0.0f, 0x1.0b02cp-30f, 0x1.a29a3ap-57f, 0.0f, 0.0f,
     0x1.dd153ap-19f, 0.0f, 0x1.63a0b4p-92f, 0.0f, 0.0f, 0.0f, 0x1.a2507ap-4f, 0.0f,
     0.0f, 0.0f, 0x1.00d5dep-24f, 0.0f, 0x1.ca3a5cp-87f, 0x1.5d277ep-75f, 0.0f,
     0x1.469594p-83f, 0x1.0f0804p-5f, 0.0f, 0.0f, 0x1.1f827p-124f, 0x1.68c33cp-32f,
     0x1.ae7f9p-3f, 0.0f, 0x1.b9b8b2p-44f, 0.0f, 0x1.cbe4e6p-55f, 0.0f,
     0x1.f8112cp-73f, 0.0f, 0x1.ee4c8p-95f, 0.0f, 0x1.4ad7b8p-56f, 0x1.c524f6p-85f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3fab42p-43f, 0x1.789ff2p-101f, 0x1.a95cc4p-7f,
     0x1p0f, 0.0f, 0x1.abaca6p-65f, 0.0f, 0x1.cf7ddp-48f, 0x1.5347fcp-80f, 0.0f,
     0x1.0e3118p-102f, 0.0f, 0x1.9c5ac6p-14f, 0.0f, 0x1.7d6b08p-85f, 0x1.8b4d08p-11f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.6aa054p-110f, 0x1.dd54dap-26f, 0.0f,
     0x1.a28a5ep-117f, 0.0f, 0x1.4c95f2p-108f, 0x1.bd6cd2p-93f, 0.0f, 0.0f, 0.0f,
     0x1.c3cd4ep-29f, 0x1.f981d4p-94f, 0.0f, 0.0f, 0.0f, 0x1.2ba25p-52f, 0.0f, 0.0f,
     0x1.787e7ep-62f, 0x1.676eb4p-8f, 0x1.26c7ap-115f, 0x1.8dbfep-112f,
     0x1.f507bp-126f, 0.0f, 0x1.222ec8p-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.37a246p-34f,
     0.0f, 0x1.33866p-8f, 0.0f, 0x1.1f09e2p-8f, 0.0f, 0x1.6966f6p-4f,
     0x1.242562p-126f, 0x1.ac1aep-78f, 0.0f, 0x1.8336dcp-126f, 0.0f, 0.0f, 0.0f,
     0x1.cb5332p-115f, 0x1.76cde6p-100f, 0x1.ca33a2p-10f, 0x1.1766c4p-10f,
     0x1.09d4bap-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1f59bp-27f, 0.0f,
     0x1.e62872p-31f, 0.0f, 0x1.90866p-26f, 0.0f, 0x1.014dcep-57f, 0x1.97d74ap-77f,
     0x1.128a56p-1f, 0x1.527dccp-27f, 0x1.1c244ap-110f, 0x1.83992p-62f, 0.0f,
     0x1.fef5fep-111f, 0x1.95138ap-13f, 0.0f, 0x1.a6209cp-108f, 0.0f,
     0x1.34c416p-102f, 0.0f, 0x1.0587fap-66f, 0x1.20457ap-53f, 0x1.826662p-104f,
     0x1.25024p-96f, 0.0f, 0.0f, 0x1.bbf058p-78f, 0x1.2f6e0ep-117f, 0.0f, 0.0f,
     0x1.d92eeap-56f, 0.0f, 0x1.c8d24cp-45f, 0x1.ef3a7ep-66f, 0.0f, 0x1.3c6adcp-11f,
     0.0f, 0.0f, 0x1.21f25p-48f, 0x1.72b3a4p-98f, 0.0f, 0.0f, 0x1.c55212p-94f, 0.0f,
     0.0f, 0x1.bed11cp-55f, 0.0f, 0.0f, 0.0f, 0x1.9cd6dp-59f, 0.0f, 0x1.285a8cp-44f,
     0.0f, 0x1.0fd182p-3f, 0x1.c00e18p-38f, 0.0f, 0.0f, 0x1.345906p-34f, 0.0f, 0.0f,
     0x1.690ac2p-109f, 0.0f, 0.0f, 0x1.57bb7cp-55f, 0x1.1e6f98p-93f, 0x1.581702p-56f,
     0x1.035022p-32f, 0.0f, 0x1.b40786p-95f, 0.0f, 0x1.8f1dcp-108f, 0x1.eb3d9cp-120f,
     0.0f, 0.0f, 0.0f, 0x1.0a81c6p-3f, 0.0f, 0.0f, 0x1.d13f2cp-14f, 0.0f,
     0x1.c19706p-24f, 0.0f, 0x1.52c998p-35f, 0.0f, 0x1.bae394p-19f, 0x1.0d451p-78f,
     0.0f, 0.0f, 0x1.a021dap-89f, 0x1.2c6b5ap-18f, 0.0f, 0x1.d3eb38p-45f,
     0x1.7031f8p-37f, 0x1.ddbee2p-113f, 0.0f, 0x1.f99a94p-6f, 0.0f, 0x1.f3151ep-118f,
     0.0f, 0.0f, 0x1.9a200cp-40f, 0.0f, 0.0f, 0x1.01085ap-29f, 0x1.dd83fcp-18f,
     0x1.a8650cp-119f, 0x1.418634p-78f, 0x1.8df148p-113f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.dcfcbp-14f, 0.0f, 0x1.efab4ap-22f, 0x1.e975ep-123f, 0.0f, 0x1.39b5p-34f,
     0x1.332586p-18f, 0.0f, 0x1p0f, 0x1.e52418p-66f, 0x1.404576p-15f, 0.0f,
     0x1.20ee48p-99f, 0x1.cedea8p-38f, 0x1.074382p-123f, 0x1.37ccdep-94f, 0.0f,
     0x1.807c04p-82f, 0x1.63a8b6p-91f, 0.0f, 0.0f, 0x1.7f8e52p-108f, 0x1.c3dd52p-46f,
     0.0f, 0.0f, 0x1.a1f51p-65f, 0.0f, 0x1.b8beccp-71f, 0x1.e4928p-68f, 0.0f,
     0x1.21a186p-11f, 0x1.4f0cbap-56f, 0.0f, 0x1.89878p-66f, 0.0f, 0.0f,
     0x1.fbb61ep-85f, 0.0f, 0.0f, 0.0f, 0x1.ca78dp-24f, 0.0f, 0.0f, 0.0f,
     0x1.06e128p-7f, 0x1.50a9d4p-92f, 0x1.f8db34p-78f, 0.0f, 0x1.57cf08p-105f, 0.0f,
     0.0f, 0x1.7972a2p-100f, 0x1.ecf0f8p-52f, 0.0f, 0x1.365f6ep-74f, 0.0f,
     0x1.f7c06ap-1f, 0x1.1ba27p-39f, 0x1.1a44c8p-70f, 0x1.559086p-107f,
     0x1.472f6ap-47f, 0x1.6915ccp-110f, 0x1.da05bep-49f, 0.0f, 0x1.56d512p-124f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.27b4d6p-10f, 0x1.7a0058p-56f, 0x1.f84802p-73f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7df2aap-50f, 0.0f, 0x1.820a0cp-5f, 0x1.e963dap-90f,
     0.0f, 0x1.aeb728p-66f, 0x1.db8ef2p-8f, 0x1.8c60d6p-111f, 0x1.e529acp-86f, 0.0f,
     0.0f, 0.0f, 0x1.ba95bcp-108f, 0x1.2ace72p-36f, 0x1.9409d6p-59f, 0x1.99e134p-82f,
     0x1.150236p-39f, 0.0f, 0x1.d43e44p-30f, 0.0f, 0.0f, 0x1.8a1b16p-64f,
     0x1.4a9e9ap-68f, 0x1.39f7fep-111f, 0.0f, 0.0f, 0x1.d633fcp-9f, 0x1.02ed24p-110f,
     0x1.474a3ep-18f, 0x1.e0d6fep-64f, 0.0f, 0x1.2d4176p-82f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.981184p-24f, 0.0f, 0.0f, 0x1.e0ca46p-55f, 0x1.d4bc86p-5f,
     0x1.9eb8f2p-61f, 0.0f, 0.0f, 0x1.5659acp-54f, 0x1.9f2e94p-26f, 0.0f, 0.0f, 0.0f,
     0x1.505d84p-124f, 0.0f, 0.0f, 0x1.bfd094p-83f, 0.0f, 0x1.456e22p-12f, 0.0f,
     0x1.110df6p-101f, 0x1.984e48p-92f, 0.0f, 0.0f, 0.0f, 0x1.88df08p-46f,
     0x1.dba6f2p-58f, 0.0f, 0.0f, 0x1.57db48p-114f, 0x1.356624p-42f, 0x1.7d9d52p-79f,
     0x1.660d62p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ed2e6ep-36f, 0x1.0fc372p-65f,
     0x1.6dbcfcp-12f, 0.0f, 0x1.6dd8e6p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.05d7f4p-30f, 0x1.0478f6p-88f, 0x1.f115eep-96f,
     0x1.88e96cp-42f, 0.0f, 0x1.09ebb4p-90f, 0x1.62653p-23f, 0.0f, 0x1.ba2e86p-123f,
     0.0f, 0.0f, 0.0f, 0x1.dff8a8p-24f, 0.0f, 0x1.e92a14p-63f, 0.0f, 0.0f,
     0x1.da032p-80f, 0.0f, 0x1.ab5eeap-29f, 0.0f, 0x1.c53a16p-41f, 0x1.148448p-87f,
     0x1.058598p-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a582a2p-68f, 0.0f, 0x1.c4ab1cp-77f,
     0x1.1f9d5p-108f, 0x1.1e46c2p-125f, 0x1.dc79b2p-6f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.683da6p-62f, 0.0f, 0.0f, 0x1.dc1b3ap-45f, 0.0f, 0x1.83f288p-93f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f067dep-117f, 0x1.441dbcp-10f, 0x1.386b54p-67f,
     0x1.6be9ep-107f, 0x1.fb30fep-86f, 0x1.3919eap-85f, 0x1.c64074p-35f,
     0x1.a3a03cp-81f, 0.0f, 0x1.0a1cdap-51f, 0x1.4d5a08p-42f, 0.0f, 0.0f,
     0x1.4633d8p-19f, 0x1.be61eep-11f, 0x1.a7b5d2p-89f, 0.0f, 0x1.a159fp-7f, 0.0f,
     0.0f, 0x1.2796a6p-126f, 0.0f, 0x1.7a8bfp-58f, 0x1.7698ccp-11f, 0x1.3b9de2p-24f,
     0.0f, 0.0f, 0x1.a1ab88p-121f, 0x1.eb770ep-74f, 0.0f, 0x1.7f0aaap-36f,
     0x1.5ab366p-77f, 0.0f, 0.0f, 0.0f, 0x1.5a2e72p-50f, 0.0f, 0x1.0e0ee8p-47f,
     0x1.0dcd4ep-34f, 0x1.1ff0ap-10f, 0.0f, 0.0f, 0x1.4b61fap-71f, 0x1.4af4e2p-31f,
     0.0f, 0.0f, 0x1.e6e13cp-124f, 0.0f, 0x1.9ac26ap-55f, 0.0f, 0x1.93991cp-10f,
     0x1.d9070cp-77f, 0x1.b22ebcp-80f, 0.0f, 0.0f, 0x1.a405e8p-86f, 0.0f, 0.0f,
     0x1.eafc6cp-79f, 0x1.faebbp-111f, 0.0f, 0x1.4fa8f2p-43f, 0.0f, 0x1.7c67f4p-92f,
     0.0f, 0x1.52f81ep-110f, 0.0f, 0x1.7d768ap-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.806ab2p-101f, 0.0f, 0x1.7f4c04p-86f, 0x1.85eb1ep-33f, 0x1.20b1a2p-106f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.52e114p-42f, 0.0f, 0x1.61e9ep-66f, 0x1.e49c84p-73f,
     0x1.690d76p-18f, 0x1.f3b308p-9f, 0.0f, 0.0f, 0.0f, 0x1.34f97ap-120f,
     0x1.2083d8p-122f, 0.0f, 0.0f, 0x1.915058p-111f, 0.0f, 0x1.41dd1cp-36f,
     0x1.acad92p-8f, 0x1.ed01fep-108f, 0.0f, 0x1.475ef8p-126f, 0x1.048f2ap-40f, 0.0f,
     0x1.81eaa4p-20f, 0.0f, 0.0f, 0.0f, 0x1.5f6ec8p-92f, 0.0f, 0.0f, 0x1.495824p-13f,
     0x1.24e6ep-109f, 0x1.ef2b0cp-46f, 0x1.400d12p-35f, 0.0f, 0.0f, 0x1.98457cp-49f,
     0.0f, 0.0f, 0.0f, 0x1.9d708ep-32f, 0.0f, 0x1.e76ffp-75f, 0x1.40cbacp-41f,
     0x1.ac3b1p-57f, 0x1.f2a5d2p-80f, 0x1.e042ap-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.42a59p-46f, 0x1.bdc802p-83f, 0.0f, 0x1.ae5dbep-82f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.86ffd8p-40f, 0x1.9b7086p-121f, 0x1.277042p-19f, 0x1.779276p-30f,
     0x1.acfddap-98f, 0.0f, 0x1.6482e6p-14f, 0.0f, 0.0f, 0.0f, 0x1.81ade2p-84f,
     0x1.e1154cp-88f, 0x1.e35bbp-73f, 0x1.d7e32ep-60f, 0.0f, 0.0f, 0x1.a4bce4p-42f,
     0.0f, 0x1.8066dcp-75f, 0x1.eda88ep-126f, 0x1.eac8eep-60f, 0.0f, 0.0f,
     0x1.1cbb34p-56f, 0.0f, 0.0f, 0.0f, 0x1.93ffcp-115f, 0x1.9ee88p-40f,
     0x1.8c0f5cp-118f, 0.0f, 0.0f, 0x1.5625aap-120f, 0.0f, 0.0f, 0x1.28b61cp-53f,
     0x1.9fd446p-110f, 0x1.3a4cb4p-1f, 0x1.582f62p-21f, 0x1.36c49p-3f, 0.0f,
     0x1.4061c6p-3f, 0.0f, 0x1.299e1p-108f, 0x1.31feeap-12f, 0.0f, 0.0f,
     0x1.91bd12p-47f, 0x1.e90aep-85f, 0.0f, 0.0f, 0.0f, 0x1.24d76cp-59f, 0.0f,
     0x1.28df3p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.20cc76p-100f, 0.0f,
     0x1.3ef506p-75f, 0.0f, 0x1.991286p-102f, 0x1.aa420ep-55f, 0x1.6c63acp-84f,
     0x1.d1b776p-107f, 0x1.1c16d4p-62f, 0x1.ad6314p-114f, 0x1.f86ef6p-120f,
     0x1.8c8f5ep-77f, 0.0f, 0.0f, 0x1.75c224p-58f, 0.0f, 0.0f, 0x1.dd845cp-118f,
     0x1.89572ep-40f, 0.0f, 0x1.8ca2c8p-117f, 0x1.e50f42p-124f, 0x1.5e7fbep-3f,
     0x1.2d389ep-27f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.df1808p-66f,
     0x1.6a4212p-59f, 0x1.31eb84p-75f, 0.0f, 0x1.22f744p-110f, 0x1.0e8d4ap-126f, 0.0f,
     0x1.863af8p-73f, 0x1p0f, 0.0f, 0x1.5862b6p-119f, 0x1.78ed1ap-24f, 0.0f, 0.0f,
     0x1.2db3f4p-50f, 0.0f, 0.0f, 0x1.3fb51p-21f, 0.0f, 0.0f, 0x1.dc1bd4p-72f, 0.0f,
     0.0f, 0.0f, 0x1p0f, 0x1.34b9dap-58f, 0x1.e2d0fp-41f, 0x1.bb8ce8p-82f,
     0x1.fc867cp-108f, 0.0f, 0x1.21e14cp-118f, 0.0f, 0x1.b0aeb2p-45f, 0x1.40277ap-88f,
     0x1.ed63fap-67f, 0x1.1ff286p-16f, 0x1.2ccebp-10f, 0.0f, 0x1.d78e04p-122f, 0.0f,
     0x1.ba74dep-4f, 0.0f, 0x1.a77ad2p-50f, 0.0f, 0.0f, 0x1.dd5e84p-59f, 0.0f,
     0x1.0817fp-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a8325p-12f, 0.0f, 0x1.10dc9ep-20f,
     0x1.efb668p-70f, 0x1.de96a2p-28f, 0.0f, 0.0f, 0x1.078e3ep-82f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.d69bc2p-66f, 0x1.52edbp-105f, 0x1.92753ap-90f, 0x1.08d894p-88f,
     0x1.9dd6cp-121f, 0x1.c3e894p-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a1380ap-43f, 0.0f,
     0.0f, 0.0f, 0x1.550672p-63f, 0x1.834c5p-13f, 0x1.6b3534p-115f, 0.0f,
     0x1.e2d2b4p-90f, 0x1.c6a204p-30f, 0x1.d08b12p-14f, 0x1.a4ef5ap-50f, 0.0f,
     0x1.5156d2p-61f, 0x1.e05a14p-122f, 0.0f, 0x1.8d67eep-50f, 0x1.078f6ep-106f,
     0x1.93179ap-1f, 0.0f, 0x1.f1d9d4p-54f, 0x1.556734p-86f, 0.0f, 0.0f,
     0x1.62a546p-74f, 0x1.500488p-111f, 0x1.861386p-20f, 0x1.a2c236p-20f,
     0x1.df403ep-51f, 0.0f, 0x1.2f028ep-19f, 0.0f, 0x1.e1ea8ep-65f, 0x1.2077d2p-89f,
     0x1.ce9a8ep-82f, 0x1.1b048ap-31f, 0x1.0f812ep-100f, 0.0f, 0.0f, 0x1.4624acp-45f,
     0.0f, 0.0f, 0x1.1440b8p-6f, 0x1.5e1ee4p-87f, 0x1.16eedap-13f, 0.0f,
     0x1.eb5aeep-7f, 0.0f, 0.0f, 0x1.ef42d6p-124f, 0.0f, 0x1.2cc72ep-105f,
     0x1.c4ce32p-38f, 0.0f, 0x1.a48fe2p-109f, 0x1.03b36ap-74f, 0x1.0c4bcep-70f, 0.0f,
     0.0f, 0x1.c8cd16p-60f, 0x1.3a69e8p-68f, 0x1.56e4f4p-88f, 0x1.a735b6p-15f, 0.0f,
     0.0f, 0x1.52f0e6p-112f, 0x1.499de6p-28f, 0x1.8ec15ep-31f, 0x1.7956dcp-45f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9164b8p-71f, 0x1.419462p-84f, 0.0f, 0.0f, 0.0f,
     0x1.c822d6p-77f, 0.0f, 0.0f, 0x1.d4bc46p-39f, 0x1.d54eeap-31f, 0.0f, 0.0f, 0.0f,
     0x1.41da52p-97f, 0.0f, 0x1.6e6642p-44f, 0x1.1319c2p-113f, 0.0f, 0x1.43c402p-89f,
     0x1.c14f7p-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eee702p-85f, 0.0f, 0x1.46215p-69f,
     0.0f, 0x1.b34fe4p-3f, 0x1.329bfap-116f, 0x1.5d2998p-54f, 0.0f, 0x1.131ebep-63f,
     0x1.c608bcp-85f, 0x1.6ade84p-101f, 0x1.f16b74p-66f, 0.0f, 0.0f, 0.0f,
     0x1.3db104p-121f, 0x1.b866d4p-31f, 0x1.67cfa4p-31f, 0.0f, 0x1.691954p-107f, 0.0f,
     0.0f, 0x1.56bde6p-99f, 0.0f, 0.0f, 0.0f, 0x1.4d2df6p-34f, 0x1.f642d6p-114f,
     0x1.6b5afp-90f, 0x1.f52c0cp-105f, 0x1.63801p-55f, 0.0f, 0.0f, 0.0f,
     0x1.9c45b6p-69f, 0x1.87d1dap-55f, 0.0f, 0.0f, 0x1.b2e692p-36f, 0x1.f29098p-77f,
     0x1.362f84p-108f, 0x1.ae7c5p-17f, 0.0f, 0x1.fa75ap-41f, 0.0f, 0.0f, 0.0f,
     0x1.f8e23cp-87f, 0x1.4ba8fcp-56f, 0.0f, 0x1.a1cddp-36f, 0.0f, 0.0f,
     0x1.f7e794p-90f, 0x1.b451bap-97f, 0.0f, 0.0f, 0x1.a4185ep-54f, 0.0f,
     0x1.9213aap-92f
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
            ml_float4_t tmp3;
            int32_t tmp4;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            memcpy(&tmp1, ((ml_float4_t*)(external_bench_wrapper_input_table_arg1+ i)), 16);
            tmp2 = Sleef_finz_fmaxf4_kvx(tmp0, tmp1);
            memcpy(((ml_float4_t*)(external_bench_wrapper_output_table+ i)), &(tmp2), 16);
            tmp3 = local_acc + tmp2;
            local_acc = tmp3;
            tmp4 = i + INT32_C(4);
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
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_finz_fmaxf4_kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_fmaxf4_kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
