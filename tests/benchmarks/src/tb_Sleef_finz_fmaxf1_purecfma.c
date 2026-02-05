/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_fmaxf1_purecfma.c --function \
 *     Sleef_finz_fmaxf1_purecfma --arity 2 --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary32,binary32 --bench \
 *     --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile float external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0.0f, 0.0f, 0.0f, 0x1.8178ccp-71f, 0.0f, 0.0f, 0x1.50ef9ep-117f,
     0x1.101a3ep-74f, 0x1.d35cc8p-52f, 0x1.cc9756p-110f, 0x1.584a54p-51f,
     0x1.62951cp-41f, 0.0f, 0x1.49315ep-123f, 0x1.cfce0cp-20f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.40ae56p-107f, 0.0f, 0.0f, 0.0f, 0x1.9aacd2p-89f, 0.0f, 0.0f,
     0x1.defe18p-86f, 0.0f, 0x1.640534p-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.548406p-118f,
     0.0f, 0.0f, 0x1.745c42p-56f, 0.0f, 0x1.31562ep-14f, 0x1.b4680ap-125f, 0.0f,
     0x1.236e8p-59f, 0.0f, 0.0f, 0x1.40488ap-66f, 0x1.6f9fbep-39f, 0x1.50ed14p-8f,
     0x1.bf6bfep-121f, 0.0f, 0x1.681c82p-63f, 0.0f, 0.0f, 0x1.b01c14p-93f, 0.0f,
     0x1.dc47d2p-86f, 0.0f, 0x1.d271a8p-54f, 0x1.7f49c8p-8f, 0x1.5a8ed8p-71f,
     0x1.3bfd94p-122f, 0.0f, 0.0f, 0.0f, 0x1.505aa4p-14f, 0x1p0f, 0x1.c725fap-31f,
     0.0f, 0x1.798c9ap-10f, 0.0f, 0x1.05cf46p-79f, 0x1.d69adcp-25f, 0x1.922e78p-80f,
     0x1.c7d33ep-95f, 0x1.057fb4p-27f, 0x1.4820f2p-34f, 0x1p0f, 0x1.bfe124p-78f,
     0x1.9bd0fep-54f, 0.0f, 0x1.4d003cp-22f, 0x1.44a03cp-4f, 0x1.c12838p-100f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.5b396ap-105f, 0x1.51177cp-95f, 0x1.7f1ep-40f, 0.0f,
     0.0f, 0x1.5930c4p-123f, 0.0f, 0x1.cf9cd4p-113f, 0.0f, 0x1.1c2c7cp-118f, 0.0f,
     0.0f, 0x1.5d27ap-52f, 0.0f, 0.0f, 0.0f, 0x1.ec364ap-47f, 0x1.ae297p-77f,
     0x1.bdb88p-44f, 0.0f, 0x1.8ee7fp-31f, 0.0f, 0x1.bb7bb2p-58f, 0.0f, 0.0f,
     0x1.59db1p-40f, 0.0f, 0x1.61663ap-7f, 0.0f, 0x1.5fa286p-43f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.900812p-109f, 0.0f, 0.0f, 0x1.23df54p-11f, 0.0f, 0x1.827dd2p-37f,
     0.0f, 0.0f, 0x1.67c7b8p-18f, 0.0f, 0x1.417394p-38f, 0.0f, 0x1.1c2e52p-6f, 0.0f,
     0x1.01f112p-124f, 0.0f, 0x1.8fda5cp-126f, 0x1.46cfep-92f, 0x1.53231p-55f, 0.0f,
     0.0f, 0x1.47a842p-25f, 0.0f, 0x1.d6f2fep-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.877d12p-92f, 0x1.2361aap-19f, 0x1.dd3b8p-114f, 0x1.931cd6p-27f, 0.0f,
     0x1.8dbfdcp-48f, 0.0f, 0x1.c0219cp-28f, 0x1.a60344p-57f, 0.0f, 0x1.c796ccp-17f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a2aa6ap-60f, 0x1.fda024p-125f, 0.0f, 0x1.4eaa1ap-63f,
     0.0f, 0.0f, 0x1.cf0644p-7f, 0x1.17437p-16f, 0x1.bea688p-14f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.8d6642p-90f, 0x1.b340f6p-57f, 0x1.c1dc48p-88f,
     0x1.ad94e4p-66f, 0x1.750eb4p-69f, 0x1.f47c1ap-19f, 0x1.ca3d9ap-88f,
     0x1.50096ap-11f, 0.0f, 0.0f, 0x1.368afep-53f, 0.0f, 0x1.b3725ap-101f,
     0x1.e04af4p-22f, 0x1.021c6p-12f, 0.0f, 0x1.5c45bp-101f, 0x1.6b7a2ap-121f, 0.0f,
     0.0f, 0x1.957e18p-10f, 0x1.26e08cp-59f, 0x1.93e788p-38f, 0x1.0fcea4p-117f,
     0x1.3095ccp-97f, 0x1.089e16p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d60d4p-100f, 0x1.d37dbap-42f, 0.0f, 0x1.3c5cbep-5f, 0.0f, 0.0f,
     0x1.f17cfep-115f, 0.0f, 0x1.58ce4p-54f, 0x1.617aaep-125f, 0.0f, 0x1.7608dap-120f,
     0x1.49f662p-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.8a318p-44f, 0.0f, 0x1.9902f6p-35f, 0x1.3afbd4p-58f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f5f652p-61f, 0.0f, 0x1.469806p-120f, 0.0f, 0.0f, 0x1.eac7eap-110f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4275f4p-34f, 0x1.373916p-61f, 0.0f,
     0x1.75d2c8p-3f, 0x1.7a85f6p-79f, 0.0f, 0.0f, 0x1.345036p-33f, 0x1.f8f196p-24f,
     0.0f, 0x1.75e374p-72f, 0x1.9de3dcp-3f, 0x1.7589fep-29f, 0x1.59d75cp-24f, 0.0f,
     0x1.9452ap-63f, 0x1.b2442ap-28f, 0x1.d618b2p-57f, 0x1.fff52cp-97f,
     0x1.8feceap-54f, 0x1.a2a736p-15f, 0.0f, 0.0f, 0.0f, 0x1.b20b26p-108f,
     0x1.98307p-6f, 0.0f, 0.0f, 0x1.b5fc8ap-93f, 0x1.3e4bc8p-66f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.988744p-60f, 0.0f, 0.0f, 0.0f, 0x1.9bd7fap-88f, 0x1.01de5ep-32f,
     0.0f, 0x1.5144dep-3f, 0.0f, 0.0f, 0x1.550072p-17f, 0.0f, 0.0f, 0x1.3ae604p-34f,
     0.0f, 0.0f, 0x1.a254f6p-25f, 0.0f, 0x1.95489ep-63f, 0x1.db7ff4p-62f,
     0x1.dbba24p-65f, 0x1.c8a13ep-46f, 0x1.a588b8p-44f, 0x1.4b1a6cp-90f,
     0x1.25ddb6p-74f, 0x1.8f7d3p-35f, 0x1.5499bp-32f, 0.0f, 0.0f, 0x1.81093cp-38f,
     0x1.29fb52p-55f, 0x1.48e50ap-67f, 0x1.705f34p-37f, 0.0f, 0x1.600f18p-60f,
     0x1.ef4a2p-8f, 0x1.b89042p-10f, 0x1.537506p-60f, 0.0f, 0x1.265484p-97f,
     0x1.152dcp-18f, 0x1.ff82aep-78f, 0x1.fcd3f4p-107f, 0x1.a236e8p-54f, 0.0f, 0.0f,
     0.0f, 0x1.a69a14p-26f, 0x1.50c90cp-108f, 0.0f, 0x1.df6a4ap-86f, 0.0f, 0.0f, 0.0f,
     0x1.641cecp-74f, 0x1.fa1ecep-125f, 0x1.3c242ap-13f, 0x1.e89286p-96f, 0.0f, 0.0f,
     0x1.8c0f8ap-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.85deeap-114f, 0.0f, 0x1.7eed22p-90f,
     0x1.c16d86p-34f, 0.0f, 0x1.a96e48p-20f, 0.0f, 0x1.98435ep-97f, 0.0f, 0.0f,
     0x1.68e6d8p-34f, 0.0f, 0.0f, 0.0f, 0x1.2e1a44p-84f, 0.0f, 0.0f, 0x1.aa5a28p-70f,
     0x1.134abep-111f, 0x1.9d15fcp-106f, 0.0f, 0.0f, 0x1.a0517ep-102f,
     0x1.0dcf86p-91f, 0.0f, 0x1.7ce184p-54f, 0x1.fd9c9p-78f, 0x1.d18346p-52f,
     0x1.76baf6p-6f, 0x1.b094acp-108f, 0.0f, 0x1.d70a62p-92f, 0.0f, 0x1.e9f14ep-8f,
     0x1.4b35b6p-47f, 0.0f, 0x1.03660ap-42f, 0.0f, 0.0f, 0x1.d15918p-121f, 0.0f, 0.0f,
     0.0f, 0x1.7a0cep-119f, 0.0f, 0x1.34c92ep-85f, 0.0f, 0x1.ea03acp-126f, 0.0f, 0.0f,
     0.0f, 0x1.402eaep-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.007a84p-112f, 0x1.abdc5ep-80f, 0.0f, 0.0f, 0x1.a709fcp-38f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.3ba07cp-47f, 0.0f, 0x1.8710d8p-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cc81b8p-115f, 0.0f, 0x1.837ddap-9f, 0.0f, 0.0f, 0x1.ffd05p-62f,
     0x1.57edp-84f, 0.0f, 0.0f, 0.0f, 0x1.9a4492p-66f, 0.0f, 0.0f, 0.0f,
     0x1.282042p-58f, 0.0f, 0x1.bd1b26p-95f, 0.0f, 0x1.45a264p-64f, 0x1.c2f05p-62f,
     0x1.187f0ep-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2576aep-96f, 0.0f,
     0x1.520ff8p-114f, 0x1.fdf656p-99f, 0x1.9b293cp-70f, 0x1.9d4cecp-65f, 0.0f, 0.0f,
     0x1.dc14f2p-52f, 0.0f, 0x1.31ea74p-13f, 0x1.8902c4p-124f, 0x1.cae6d8p-34f, 0.0f,
     0x1.26bd5cp-100f, 0.0f, 0.0f, 0x1.e7b9d4p-80f, 0x1.4e1fc2p-32f, 0x1.620c7cp-109f,
     0x1.d65c2cp-12f, 0x1.ad3b8ap-47f, 0x1.9e0644p-49f, 0x1.d69446p-23f,
     0x1.bdb75ep-52f, 0.0f, 0x1.fa866ap-64f, 0x1.50b41p-95f, 0x1.afbe6ap-66f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.920bf4p-68f, 0.0f, 0.0f, 0.0f, 0x1.a1ff9ap-83f, 0.0f,
     0x1.c9de78p-94f, 0x1.9fdfb6p-15f, 0x1.8db302p-79f, 0x1.8c041p-62f,
     0x1.d827b6p-46f, 0x1.115d66p-81f, 0x1.a0dc3cp-60f, 0x1.77c534p-71f,
     0x1.3839bcp-6f, 0.0f, 0x1.05b364p-9f, 0.0f, 0x1.a830e8p-109f, 0x1.926942p-111f,
     0.0f, 0x1.1a12fep-75f, 0.0f, 0x1.bc35f8p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cbd572p-55f, 0x1.28cc8ep-34f, 0.0f, 0.0f, 0x1.c51ca4p-108f, 0x1.8e67f8p-6f,
     0.0f, 0x1.049444p-2f, 0.0f, 0.0f, 0x1.51782p-13f, 0x1.85c6dp-60f, 0.0f, 0.0f,
     0x1.834c6cp-70f, 0.0f, 0.0f, 0x1.5201f4p-106f, 0.0f, 0x1.b1b0ap-3f, 0.0f, 0.0f,
     0x1.72c254p-42f, 0x1.624bb6p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f2453cp-32f, 0.0f,
     0.0f, 0x1.68b1fp-103f, 0x1.7aa97ep-102f, 0x1.88d5d8p-57f, 0.0f, 0.0f,
     0x1.c5b01ap-122f, 0.0f, 0x1.f60fe6p-70f, 0x1.2d2dbap-110f, 0.0f, 0x1.b8fde8p-89f,
     0x1.720612p-18f, 0.0f, 0x1.9ebcdp-61f, 0x1.1ee85ap-89f, 0x1.ba2c74p-96f,
     0x1.780c48p-99f, 0.0f, 0.0f, 0x1.b08a0ap-114f, 0.0f, 0.0f, 0x1.f99b68p-13f,
     0x1.49d9a8p-45f, 0.0f, 0.0f, 0x1.51ce4ep-122f, 0x1.af92b2p-81f, 0.0f,
     0x1.69db7cp-74f, 0x1.cd01ep-19f, 0.0f, 0.0f, 0x1.84e784p-118f, 0.0f,
     0x1.b8cf66p-3f, 0.0f, 0x1.9e4e0cp-88f, 0x1.af7f06p-9f, 0.0f, 0x1.2cb74cp-57f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.96fe78p-49f, 0.0f, 0.0f, 0.0f,
     0x1.f7da12p-77f, 0x1.ef76a4p-101f, 0x1.55439cp-18f, 0x1.4f8b88p-104f, 0.0f,
     0x1.1f16c2p-19f, 0x1.41bd8p-114f, 0.0f, 0x1.7031bep-88f, 0.0f, 0x1.839bacp-108f,
     0.0f, 0.0f, 0x1.2d5e36p-7f, 0x1.354edcp-34f, 0.0f, 0x1.ebd948p-11f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b13da2p-65f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b27262p-93f, 0x1.006c44p-28f, 0x1.6c2f7ep-49f, 0x1.d141acp-120f,
     0x1.eae958p-85f, 0x1.629de8p-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.faf3eep-88f,
     0x1.468186p-74f, 0x1.00921cp-122f, 0x1.36cdeap-109f, 0.0f, 0x1.f2df46p-39f,
     0x1.fd2f16p-55f, 0x1.66fc9ap-75f, 0x1.e68174p-17f, 0.0f, 0x1.8c0f88p-36f,
     0x1.655f2p-119f, 0.0f, 0.0f, 0.0f, 0x1.8e735ap-66f, 0.0f, 0.0f, 0x1.8de968p-43f,
     0.0f, 0x1.05a88cp-46f, 0x1.a77fbap-108f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.18399cp-107f, 0.0f, 0x1.4a2aa8p-61f, 0x1.33431p-11f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.28e28ep-68f, 0x1.b98094p-2f, 0x1.11f6a4p-10f, 0.0f, 0.0f, 0x1.92d8fap-46f,
     0x1.6730e6p-3f, 0.0f, 0x1.e889d6p-69f, 0x1.522788p-37f, 0x1.5f6c76p-52f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.aac522p-93f, 0x1.b34246p-53f, 0.0f, 0x1.68676p-122f,
     0.0f, 0x1.4aa99cp-3f, 0.0f, 0.0f, 0.0f, 0x1.9ffce8p-16f, 0.0f, 0x1.b1909p-43f,
     0.0f, 0x1.1e7e2cp-53f, 0x1.267698p-12f, 0.0f, 0x1.defae8p-74f, 0x1.4d4928p-3f,
     0x1.9d62b4p-121f, 0.0f, 0x1.84c466p-16f, 0x1.d1d032p-82f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.4f2e88p-83f, 0x1.cf7e88p-65f, 0x1.ff0a0ep-16f, 0x1.a58e4ep-92f, 0.0f,
     0x1.b12914p-94f, 0.0f, 0x1.369d9ep-100f, 0x1.46301cp-75f, 0x1.786e74p-119f,
     0x1.724afp-30f, 0x1.1a18b6p-99f, 0x1.55d0ep-97f, 0x1.431afap-118f, 0.0f, 0.0f,
     0.0f, 0x1.2913bap-120f, 0.0f, 0.0f, 0.0f, 0x1.72da9ep-123f, 0.0f,
     0x1.a73208p-95f, 0x1.1ae20cp-59f, 0.0f, 0.0f, 0x1.5ca498p-99f, 0.0f, 0.0f, 0.0f,
     0x1.43387ep-48f, 0x1.cf4d98p-28f, 0x1.df9b92p-49f, 0x1.88261ep-42f,
     0x1.cdb7e2p-40f, 0x1.97b8fep-54f, 0x1.796f1ap-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1p0f, 0x1.1dcddcp-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.191c32p-18f,
     0x1.9defccp-117f, 0.0f, 0.0f, 0x1.a55b62p-24f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3697ep-71f, 0.0f, 0.0f, 0x1.ad49ecp-122f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.24a6bp-79f, 0x1.0a0e08p-85f, 0.0f, 0.0f, 0.0f, 0x1.ce22d4p-94f, 0.0f,
     0x1.fabad6p-37f, 0.0f, 0x1.40ba76p-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.63a16p-89f,
     0x1.a740a4p-72f, 0x1.b6003p-7f, 0x1.d15b52p-51f, 0.0f, 0x1.a09e6ap-93f, 0.0f,
     0x1.31edbcp-2f, 0.0f, 0x1.94f17p-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.af792ap-76f,
     0x1.0e7f3cp-13f, 0.0f, 0x1.c6e8f8p-13f, 0.0f, 0x1.d616d2p-11f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c455fap-4f, 0.0f, 0.0f, 0.0f, 0x1.b17154p-123f, 0.0f, 0x1.b46238p-85f,
     0.0f, 0x1.a97ebp-30f, 0x1.752f62p-110f, 0x1.27e676p-48f, 0.0f, 0.0f,
     0x1.bfbd8ep-116f, 0x1.da0422p-125f, 0x1.33466ap-50f, 0.0f, 0.0f, 0x1.6ed81ap-41f,
     0x1.03d85cp-25f, 0.0f, 0.0f, 0.0f, 0x1.0ddad2p-65f, 0.0f, 0.0f, 0x1.e04454p-77f,
     0x1.7d81aap-39f, 0x1.08f19p-26f, 0x1.99424cp-113f, 0x1.7f05p-63f,
     0x1.524f74p-125f, 0.0f, 0x1.30207p-64f, 0.0f, 0.0f, 0x1.be41dep-83f, 0.0f, 0.0f,
     0.0f, 0x1.48e1eep-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4e317ap-117f, 0.0f,
     0.0f, 0.0f, 0x1.c7bb3ep-55f, 0x1.ba0606p-20f, 0x1.1baddep-91f, 0x1.c11c94p-4f,
     0x1.382bf2p-36f, 0.0f, 0x1.be3ea8p-97f, 0x1.fad498p-84f, 0x1.bf2268p-68f, 0.0f,
     0x1.8d3ef8p-106f, 0x1.b2e732p-92f, 0x1.97dbc2p-38f, 0x1.e7c6aap-22f, 0.0f,
     0x1.1871aep-87f, 0x1.64cbf8p-9f, 0.0f, 0x1.5cd5f6p-62f, 0x1.c06fcp-83f, 0.0f,
     0x1.9f377cp-41f, 0.0f, 0.0f, 0x1.b3ee42p-20f, 0.0f, 0.0f, 0x1.3b5156p-103f, 0.0f,
     0x1.919c38p-108f, 0x1.fe7b58p-103f, 0.0f, 0.0f, 0.0f, 0x1.625cc4p-13f,
     0x1.11badcp-56f, 0x1.3ef2cp-66f, 0.0f, 0x1.f2264ep-124f, 0.0f, 0x1.05e08ep-9f,
     0x1.56983ep-86f, 0.0f, 0.0f, 0x1.148202p-68f, 0x1.d5610ep-125f, 0x1.e8a9acp-56f,
     0.0f, 0.0f, 0x1.1eba8p-15f, 0x1.c9f574p-25f, 0.0f, 0.0f, 0x1.682378p-73f, 0.0f,
     0x1.41a078p-93f, 0x1.90c2d2p-2f, 0x1.13cf06p-16f, 0x1.4eb6e8p-37f, 0.0f, 0.0f,
     0x1.b05a6p-29f, 0.0f, 0.0f, 0x1.df857ap-18f, 0x1.68c952p-8f, 0.0f,
     0x1.6793cep-94f, 0x1.4002d6p-8f, 0x1.a4586ep-47f, 0.0f, 0.0f, 0x1.075bf8p-100f,
     0.0f, 0.0f, 0x1.612a28p-84f, 0.0f, 0x1.80d33cp-117f, 0.0f, 0.0f, 0.0f,
     0x1.14a00ap-97f, 0x1.9f851p-71f, 0.0f, 0.0f, 0x1.0b39d8p-113f, 0.0f, 0.0f,
     0x1.439a04p-63f, 0.0f, 0x1.fdf32ep-7f, 0x1.53034cp-33f, 0.0f, 0.0f,
     0x1.05ef4cp-7f, 0x1.5403b6p-76f, 0.0f, 0.0f, 0.0f, 0x1.1c35c6p-6f, 0.0f, 0.0f,
     0x1.f1afb2p-34f, 0x1.7d1972p-117f, 0x1.dd678ep-124f, 0x1.225ec8p-61f,
     0x1.6e56dcp-6f, 0.0f, 0x1.f2036ap-17f, 0.0f, 0.0f, 0x1.59491ep-44f, 0.0f,
     0x1.1488cep-126f, 0.0f, 0.0f, 0.0f, 0x1.b8b36ep-9f, 0x1.733616p-41f,
     0x1.f17adep-6f, 0x1.d587a8p-66f, 0x1.7ffac8p-43f
};
static const float external_bench_wrapper_input_table_arg1[1001]  = {
     0.0f, 0x1.ae5edcp-58f, 0x1.7e715ep-112f, 0.0f, 0x1.968f3ep-114f,
     0x1.876fcap-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ed01d6p-14f, 0x1.c04206p-86f,
     0.0f, 0.0f, 0x1.aa802cp-45f, 0x1.113d8ep-66f, 0x1.02f71cp-13f, 0x1.f58374p-26f,
     0.0f, 0.0f, 0.0f, 0x1.15391ap-69f, 0x1.28b664p-54f, 0.0f, 0.0f, 0x1.a51454p-77f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.af8deep-35f, 0.0f, 0x1.1c648p-64f, 0.0f,
     0x1.ee96c6p-57f, 0.0f, 0x1.7c0a48p-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9fb3bap-83f,
     0.0f, 0x1.5972d2p-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d34d3p-63f, 0.0f,
     0x1.65bea8p-82f, 0x1.0f4304p-70f, 0.0f, 0.0f, 0x1.1cc8f2p-110f, 0x1.0217e8p-25f,
     0.0f, 0x1.cc4006p-88f, 0x1.ea683ep-30f, 0x1.56e7a6p-3f, 0.0f, 0x1.e3f2fep-111f,
     0.0f, 0x1.10a86ep-53f, 0x1.46d3fap-105f, 0x1.78a864p-5f, 0.0f, 0.0f,
     0x1.09ff6cp-39f, 0.0f, 0x1.df7cdcp-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.907a7ep-99f,
     0x1.21405cp-65f, 0.0f, 0x1.97a90ep-77f, 0.0f, 0.0f, 0.0f, 0x1.8ceb78p-24f,
     0x1.d9a226p-96f, 0.0f, 0.0f, 0x1.ed5664p-71f, 0x1.ce482ep-42f, 0.0f, 0.0f,
     0x1.2b10b2p-36f, 0.0f, 0x1.fd033cp-91f, 0x1.33f85ep-105f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bdc5e6p-18f, 0x1.5c6416p-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.bfaa8ap-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7e4546p-111f, 0x1.498694p-71f,
     0x1.e0c75ep-23f, 0x1.ba5106p-37f, 0x1.59135p-55f, 0x1.56b32ep-31f, 0.0f,
     0x1.e5ec5ap-13f, 0x1.cfb5cap-95f, 0x1.ee358p-73f, 0x1.e6eb32p-101f, 0.0f, 0.0f,
     0x1.de7b44p-47f, 0.0f, 0x1.03e416p-45f, 0.0f, 0x1.b58acep-29f, 0x1.86f43ap-36f,
     0x1.62850cp-74f, 0.0f, 0.0f, 0x1.3772bap-10f, 0.0f, 0.0f, 0x1.a3708cp-20f, 0.0f,
     0x1.247cf2p-53f, 0.0f, 0.0f, 0.0f, 0x1.c06726p-2f, 0.0f, 0x1.bf328cp-44f, 0.0f,
     0x1.8d3b2cp-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3740e6p-6f, 0.0f, 0x1.91823cp-63f,
     0.0f, 0.0f, 0.0f, 0x1.f9cecp-100f, 0.0f, 0.0f, 0x1.beb6bp-22f, 0x1.83d49ap-19f,
     0x1.ba25c2p-63f, 0.0f, 0.0f, 0x1.e4ee6ep-74f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.dfca1ep-7f, 0x1.428208p-111f, 0x1.f27d5ap-38f, 0x1.3d0daap-110f, 0.0f,
     0x1.3a313ap-104f, 0x1.057f18p-31f, 0.0f, 0.0f, 0x1.0cff6ap-34f, 0x1.8b5588p-30f,
     0.0f, 0x1.6bee8cp-97f, 0x1.512fd8p-41f, 0x1.8f4b34p-108f, 0x1.5e79d6p-122f,
     0x1.db47b2p-124f, 0.0f, 0.0f, 0.0f, 0x1.5ea154p-29f, 0x1.9cc89p-74f, 0.0f, 0.0f,
     0x1.467f2ap-35f, 0x1.e83e2p-62f, 0x1.ac2adp-70f, 0.0f, 0.0f, 0x1.f6c73p-35f,
     0x1.fd71a6p-37f, 0.0f, 0x1.6854bcp-66f, 0x1.d4c6p-2f, 0.0f, 0x1.252962p-31f,
     0.0f, 0x1.a7a2d4p-11f, 0.0f, 0.0f, 0.0f, 0x1.5bb4bcp-62f, 0x1.dff92cp-86f,
     0x1.2f85a6p-35f, 0.0f, 0.0f, 0x1.8ab112p-30f, 0.0f, 0x1.607158p-95f, 0.0f, 0.0f,
     0x1.3c335ep-66f, 0.0f, 0x1.87dde2p-118f, 0x1.a44aacp-122f, 0.0f, 0.0f,
     0x1.f61e6p-51f, 0x1.0cd23ep-6f, 0x1.eb692ap-68f, 0.0f, 0.0f, 0x1.d426aep-49f,
     0x1.85c9a6p-17f, 0.0f, 0.0f, 0x1.a8f58cp-25f, 0.0f, 0.0f, 0.0f, 0x1.e31638p-37f,
     0.0f, 0x1.730e52p-99f, 0x1.097824p-73f, 0.0f, 0x1.dccaa4p-124f, 0.0f,
     0x1.3972d4p-19f, 0.0f, 0.0f, 0x1.2fb502p-98f, 0.0f, 0.0f, 0x1.1bc8bcp-96f, 0.0f,
     0x1.a814eap-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.07830cp-59f, 0.0f, 0x1.0cb21p-5f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.aadce2p-12f, 0x1.95a718p-2f, 0x1.5e8584p-64f, 0.0f,
     0x1.9c92ecp-111f, 0x1.2a3ceap-66f, 0x1.a82c04p-106f, 0.0f, 0x1.b30baap-98f, 0.0f,
     0x1.648aeep-62f, 0.0f, 0.0f, 0x1.b2a348p-97f, 0.0f, 0x1.fae802p-68f, 0.0f,
     0x1.8824c4p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7c7324p-12f, 0.0f, 0x1.24aec6p-101f,
     0x1.7edce8p-55f, 0.0f, 0.0f, 0x1.39f81p-106f, 0.0f, 0x1.324b06p-64f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f9c5bcp-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4918p-79f,
     0x1.8485a2p-111f, 0.0f, 0x1.202d2ep-9f, 0x1.c69a64p-126f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fcd294p-74f, 0x1.dc17c8p-78f, 0.0f, 0.0f, 0.0f, 0x1.3121ccp-110f,
     0x1.b3cdcap-8f, 0x1.1efc3ep-77f, 0x1.766248p-5f, 0.0f, 0x1.7bb74ap-103f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.33349cp-1f, 0x1.65455ap-55f, 0x1.376f7p-44f, 0.0f,
     0x1.e5fc1ap-25f, 0x1.74dfe6p-34f, 0x1.fa108cp-115f, 0x1.092f2ep-61f,
     0x1.6498b4p-67f, 0x1.4c90fep-1f, 0x1.160ff2p-92f, 0x1.2bd05cp-125f, 0.0f,
     0x1.d13f86p-6f, 0x1.438f18p-38f, 0x1.d351dp-73f, 0x1.bb7558p-30f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.5ae53cp-76f, 0.0f, 0.0f, 0x1.3b6036p-77f, 0.0f, 0.0f,
     0x1.9e617cp-25f, 0.0f, 0.0f, 0x1.4d52cap-65f, 0x1.41de9ep-77f, 0x1.c35fa4p-108f,
     0x1.949726p-89f, 0.0f, 0.0f, 0x1.f4723cp-69f, 0x1.f36e56p-123f, 0.0f, 0x1p0f,
     0x1.b2d9ecp-93f, 0.0f, 0x1.1d20dp-62f, 0x1.fad96ap-98f, 0x1p0f, 0.0f,
     0x1.1ad1d6p-49f, 0x1.e1419ep-36f, 0.0f, 0.0f, 0x1.b53662p-7f, 0x1.40f70ep-39f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.fb543ap-23f, 0.0f, 0.0f, 0x1.9c9c9ap-43f,
     0x1.0f5314p-73f, 0x1.985d9ap-46f, 0.0f, 0x1.49743ap-41f, 0x1.e1705p-92f,
     0x1.28cfb6p-38f, 0x1.679cf8p-118f, 0x1.55ea46p-15f, 0x1.75bca4p-82f, 0.0f,
     0x1.6a9b0cp-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.da9414p-84f, 0.0f, 0.0f,
     0x1.f21b12p-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.be27fep-116f, 0x1.da195ep-71f,
     0.0f, 0.0f, 0x1.56aca8p-28f, 0.0f, 0x1.a6a65ep-121f, 0.0f, 0.0f,
     0x1.a80e08p-120f, 0x1.031a36p-52f, 0.0f, 0x1.bd8d5cp-43f, 0x1.0bc4ccp-80f, 0.0f,
     0x1.d09a5cp-67f, 0x1.fa4ab4p-78f, 0.0f, 0.0f, 0x1.4cf3a8p-95f, 0x1.181bdep-26f,
     0.0f, 0x1.98518p-118f, 0.0f, 0x1.f0b45ep-42f, 0x1.f97a32p-79f, 0.0f, 0.0f, 0.0f,
     0x1.2f71a8p-62f, 0x1.f8672cp-1f, 0x1.0cb3aep-110f, 0x1.e21bc8p-70f,
     0x1.7eef2p-113f, 0x1.95e6eep-1f, 0.0f, 0.0f, 0x1.e93becp-33f, 0.0f,
     0x1.260862p-53f, 0.0f, 0.0f, 0x1.f03dcap-89f, 0.0f, 0.0f, 0x1.00832ap-22f,
     0x1.296e36p-79f, 0x1.8d5d3p-56f, 0x1.a94fdap-26f, 0x1.ce8edep-20f,
     0x1.97684ep-65f, 0.0f, 0.0f, 0x1.e33d56p-60f, 0x1.46ff5p-63f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.58a2dp-21f, 0x1.0ef8aap-115f, 0.0f, 0.0f, 0.0f, 0x1.5a9a34p-17f,
     0x1.3b5d2p-13f, 0x1.a3a694p-59f, 0.0f, 0x1.f6d0f4p-89f, 0.0f, 0x1.5d0e9ep-24f,
     0.0f, 0.0f, 0x1.ee91ecp-58f, 0x1.10112ap-76f, 0x1.876d72p-37f, 0.0f,
     0x1.f4844p-120f, 0x1.541cd8p-20f, 0x1.a60b5ep-98f, 0x1.e0c5bcp-12f, 0.0f, 0.0f,
     0x1.7dfd9ap-101f, 0x1.06bb68p-52f, 0.0f, 0.0f, 0x1.b299acp-83f, 0.0f,
     0x1.3f7b78p-27f, 0.0f, 0x1.2feafep-53f, 0.0f, 0.0f, 0x1.28dfap-50f, 0.0f,
     0x1.1fec38p-17f, 0.0f, 0.0f, 0.0f, 0x1.1c956ap-94f, 0x1.0025fep-96f,
     0x1.15ca84p-10f, 0.0f, 0x1.bbf3a2p-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bf165ep-92f, 0x1.7fc4dp-120f, 0x1.d62886p-27f, 0x1.4cc1fp-48f,
     0x1.e23d44p-109f, 0.0f, 0x1.3d634ep-118f, 0.0f, 0x1.b3c20ap-60f, 0x1.e58ae6p-5f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.75736cp-110f, 0.0f, 0x1.c32c5ep-72f, 0.0f, 0.0f,
     0x1.bb809p-17f, 0.0f, 0.0f, 0.0f, 0x1.c80238p-26f, 0x1.39445ap-28f,
     0x1.c71c94p-90f, 0x1.9b659cp-111f, 0x1.b680bep-5f, 0x1.dd103cp-67f,
     0x1.80cdecp-20f, 0x1.5f419ep-58f, 0.0f, 0x1.14e81cp-40f, 0.0f, 0x1.6fd9b8p-29f,
     0x1.54204cp-19f, 0x1.b92c92p-61f, 0.0f, 0.0f, 0x1.b11e2p-68f, 0x1.3abbe4p-19f,
     0.0f, 0x1.241afp-96f, 0x1.8bd0e8p-38f, 0.0f, 0x1.d725d6p-60f, 0.0f,
     0x1.5959b4p-54f, 0x1.659aa2p-23f, 0.0f, 0x1.6f6642p-103f, 0.0f, 0.0f, 0.0f,
     0x1.47193ep-47f, 0x1.83a0b6p-7f, 0x1.85be86p-65f, 0x1.1799fcp-90f,
     0x1.203544p-85f, 0x1.c2dda2p-95f, 0x1.7accc4p-46f, 0.0f, 0.0f, 0.0f,
     0x1.92fe36p-124f, 0x1.74ae5p-78f, 0x1.23b98ap-100f, 0.0f, 0.0f, 0x1.3eda56p-56f,
     0x1.6b7786p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3ece8p-97f, 0.0f, 0x1.9c0288p-54f,
     0.0f, 0.0f, 0.0f, 0x1.dbcb74p-2f, 0x1.1029eep-77f, 0.0f, 0.0f, 0x1.1672ccp-12f,
     0.0f, 0.0f, 0x1.6094bp-36f, 0.0f, 0.0f, 0.0f, 0x1.358efap-120f, 0x1.f68cp-16f,
     0x1.9d20acp-34f, 0x1.227366p-50f, 0x1.87be02p-19f, 0x1.3c220ep-114f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.bb531cp-28f, 0x1.39ad76p-90f, 0x1.c8988p-86f,
     0x1.cb216ep-59f, 0.0f, 0.0f, 0x1.a18718p-114f, 0.0f, 0.0f, 0.0f, 0x1.ecdaf6p-19f,
     0.0f, 0x1.ad4608p-32f, 0x1.5ab3f8p-19f, 0.0f, 0x1.0f24d4p-50f, 0x1.64265cp-109f,
     0.0f, 0x1.5c3a02p-24f, 0x1.72f238p-85f, 0.0f, 0.0f, 0.0f, 0x1.56c47ap-85f,
     0x1.08b69cp-6f, 0x1.67713cp-54f, 0x1.c84d54p-47f, 0x1.3aead8p-96f, 0.0f,
     0x1.8112aep-92f, 0x1.d2c54ep-125f, 0.0f, 0x1.7eda5ep-87f, 0.0f, 0.0f, 0.0f,
     0x1.221f9ap-28f, 0x1.ad30dcp-2f, 0.0f, 0x1.53192ep-38f, 0.0f, 0x1.084592p-64f,
     0.0f, 0x1.29631ep-45f, 0x1.c78a9ap-13f, 0.0f, 0x1.707d3cp-81f, 0x1.75eae6p-112f,
     0x1.3688d2p-3f, 0x1.34138cp-38f, 0.0f, 0x1.fb30aap-13f, 0.0f, 0x1.2f816p-22f,
     0x1.573a72p-93f, 0x1.ac4b52p-91f, 0.0f, 0.0f, 0x1.24aedap-54f, 0x1.5ecc68p-5f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.078e42p-65f, 0.0f, 0x1.05320ep-65f, 0x1.bde29ap-83f,
     0x1.4e7c2ep-6f, 0x1.874c12p-107f, 0.0f, 0x1.b978bep-107f, 0.0f, 0x1.72d636p-106f,
     0.0f, 0.0f, 0x1.f1a9a8p-74f, 0x1.03eddcp-54f, 0.0f, 0x1.ac833cp-78f,
     0x1.936f28p-80f, 0.0f, 0x1.d5441cp-71f, 0.0f, 0x1.06d046p-103f, 0x1.e69742p-10f,
     0.0f, 0x1.54c64ep-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e81ea8p-55f,
     0x1.a82fbep-116f, 0.0f, 0x1.d78566p-96f, 0x1.7af45p-96f, 0.0f, 0x1.7d4efp-118f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.51eccap-114f, 0x1.348ebep-30f,
     0x1.4760cap-111f, 0.0f, 0.0f, 0x1.cb49b2p-89f, 0.0f, 0.0f, 0.0f, 0x1.2ae55cp-65f,
     0.0f, 0.0f, 0.0f, 0x1.516742p-34f, 0.0f, 0x1.902b1p-18f, 0x1.666308p-63f,
     0x1.817258p-27f, 0x1.9e6f8cp-67f, 0x1.069472p-101f, 0.0f, 0.0f, 0x1.e3325p-13f,
     0x1.4b25b8p-36f, 0.0f, 0.0f, 0x1.d2088p-10f, 0x1.9e86ep-68f, 0x1.b0e3c2p-78f,
     0.0f, 0x1.4bdd9p-66f, 0x1.4ba9a2p-2f, 0x1.dcc406p-121f, 0.0f, 0.0f,
     0x1.5c214ap-114f, 0x1.e8251ep-35f, 0x1.3304d4p-2f, 0x1.0ce054p-92f, 0.0f,
     0x1.93c254p-11f, 0.0f, 0x1.df7552p-16f, 0.0f, 0x1.8017a6p-89f, 0.0f,
     0x1.fe569ap-27f, 0.0f, 0.0f, 0.0f, 0x1.ebe746p-74f, 0.0f, 0.0f, 0.0f,
     0x1.c4d59ep-80f, 0x1.65e738p-53f, 0x1.e832bep-32f, 0.0f, 0x1.8261aep-94f, 0.0f,
     0.0f, 0.0f, 0x1.7225aep-59f, 0.0f, 0x1.dff992p-87f, 0x1.f323fp-100f, 0.0f,
     0x1.3c356ap-92f, 0.0f, 0x1.a2aa06p-56f, 0x1.56745ep-89f, 0.0f, 0.0f,
     0x1.6b24bap-61f, 0x1.468954p-80f, 0x1.330d28p-86f, 0x1.d7eb58p-74f,
     0x1.529008p-83f, 0x1.6f84fep-80f, 0x1.4f9434p-32f, 0.0f, 0x1.6f4c0cp-69f,
     0x1.96b8fap-84f, 0x1.8a0908p-77f, 0.0f, 0x1.29aba6p-106f, 0x1.7797cp-19f,
     0x1.953c92p-89f, 0.0f, 0x1.c0e55p-18f, 0x1.b0c6eep-76f, 0.0f, 0x1.75fdaap-66f,
     0.0f, 0x1.22d272p-33f, 0x1.88f934p-116f, 0.0f, 0.0f, 0.0f, 0x1.45184p-36f,
     0x1.a23bf8p-31f, 0x1.c6d484p-46f, 0.0f, 0x1.3d4d74p-54f, 0x1.4bcce2p-30f, 0.0f,
     0x1.0a9efcp-25f, 0.0f, 0x1.77e254p-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cf1914p-66f,
     0x1.f85adcp-113f, 0x1.ffb934p-36f, 0x1.f2085cp-93f, 0.0f, 0x1.dc11a6p-88f,
     0x1.e91c06p-10f, 0x1.2627e2p-89f, 0x1.fcfeb6p-15f, 0x1.eb22aep-52f,
     0x1.f0d0dap-20f, 0.0f, 0.0f, 0x1.fc3abep-4f, 0x1.7fec58p-47f, 0.0f,
     0x1.635736p-82f, 0.0f, 0x1.9c76ccp-87f, 0.0f, 0.0f, 0.0f, 0x1.634f58p-66f,
     0x1.c5edd4p-2f, 0x1.46d08ap-56f, 0.0f, 0.0f, 0x1.ec34aep-115f, 0.0f, 0.0f,
     0x1.9df762p-122f, 0x1.750da6p-98f, 0.0f, 0x1.1b43eep-19f, 0.0f, 0.0f,
     0x1.31c4ccp-32f, 0x1.9e7568p-114f, 0.0f, 0.0f, 0.0f, 0x1.bd165cp-37f,
     0x1.a3524p-60f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a01b8ap-42f, 0.0f,
     0x1.61d24ep-40f, 0.0f, 0.0f, 0x1.71b57cp-60f, 0.0f, 0.0f, 0x1.6dbad8p-112f,
     0x1.d43128p-6f, 0.0f, 0x1.afbe7cp-116f, 0x1.a66e54p-19f, 0x1.bd0f32p-20f,
     0x1.678ad6p-26f, 0x1.80c9a2p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d1de7p-107f, 0.0f,
     0x1.1e45c2p-5f, 0.0f, 0x1.749912p-76f, 0x1.6b9c8cp-37f, 0x1.cc0ddep-42f, 0.0f,
     0x1.dce9f8p-73f, 0x1.5b67d2p-15f, 0.0f, 0.0f, 0.0f, 0x1.559326p-18f, 0.0f,
     0x1.870e04p-70f, 0x1.bcfe4ep-65f, 0x1.c0eb56p-2f, 0x1.143868p-95f,
     0x1.723c52p-108f, 0x1.56eb78p-109f, 0.0f, 0.0f, 0x1.1c7536p-121f, 0.0f, 0.0f,
     0x1.fa5f1cp-72f, 0.0f, 0.0f, 0x1.628a58p-51f, 0x1.4800c6p-71f, 0x1.0f0a22p-97f,
     0.0f, 0.0f, 0x1.95eeb4p-84f, 0.0f, 0x1.d7bb14p-76f, 0x1.28aa3ap-4f,
     0x1.3b4476p-53f, 0.0f, 0.0f, 0x1.84da6ap-114f, 0x1.362e44p-48f, 0x1.0823b6p-31f,
     0x1.c3385ap-35f, 0x1.68e75cp-78f, 0.0f, 0.0f, 0x1.cfdd04p-42f, 0.0f, 0.0f,
     0x1.89badep-69f, 0x1.d7bc1ep-70f, 0x1.481b74p-112f, 0x1.085794p-13f,
     0x1.5cbfc4p-32f, 0.0f, 0x1.1972c2p-87f, 0x1.46b032p-6f, 0.0f, 0.0f,
     0x1.aa16dcp-33f, 0.0f, 0x1.33ddcap-103f, 0.0f, 0x1.8ebb3ep-60f, 0.0f,
     0x1.8cdb16p-96f, 0.0f, 0x1.b5e424p-36f, 0x1.b354fap-82f, 0x1.601aecp-30f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.58c82p-114f, 0x1.0ebb18p-15f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    float global_bench_acc;
    int64_t timer;
    int64_t tmp;
    int32_t j;
    int64_t tmp1;
    int64_t tmp2;
    double id_tmp;
    double cpe_measure;
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = 0.0f;
    tmp = __cos_counter_num(0);
    timer = tmp;
    j = INT32_C(0);

    for (;(j < INT32_C(10000));){
        float bench_acc;
        int32_t i;
        float tmp0;
        int32_t tmp1;

        i = INT32_C(0);
        bench_acc = 0.0f;

        for (;(i < INT32_C(1001));){
            float tmp0;
            float tmp1;
            float tmp2;
            float tmp3;
            int32_t tmp4;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = external_bench_wrapper_input_table_arg1[i];
            tmp2 = Sleef_finz_fmaxf1_purecfma(tmp0, tmp1);
            external_bench_wrapper_output_table[i] = tmp2;
            tmp3 = bench_acc + tmp2;
            bench_acc = tmp3;
            tmp4 = i + INT32_C(1);
            i = tmp4;
        }
        tmp0 = global_bench_acc + bench_acc;
        global_bench_acc = tmp0;
        tmp1 = j + INT32_C(1);
        j = tmp1;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_finz_fmaxf1_purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_fmaxf1_purecfma bench acc %a\n", global_bench_acc);
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
