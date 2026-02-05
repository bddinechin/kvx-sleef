/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_asinhf1_u10purecfma.c --function \
 *     Sleef_asinhf1_u10purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --bench --no-embedded-bin --target x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <xmmintrin.h>
#include <stdio.h>
#include <inttypes.h>


volatile float external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.6fafaap-54f, 0x1.dab9c2p-93f, 0.0f, 0.0f, 0.0f, 0x1.b5b298p-120f,
     0x1.cfc524p-88f, 0.0f, 0.0f, 0x1.f523d4p-110f, 0x1.5f797ep-6f, 0.0f, 0.0f,
     0x1.ccaa3p-16f, 0.0f, 0x1.b6c6fp-15f, 0.0f, 0.0f, 0x1.4b6742p-68f, 0.0f, 0.0f,
     0x1.c9e164p-82f, 0x1.e0c6f8p-90f, 0.0f, 0x1.0ec1eap-38f, 0x1.354d9p-42f, 0.0f,
     0x1.0f9858p-17f, 0x1.fc99ecp-39f, 0x1.f7cdb8p-64f, 0x1.7537fep-47f,
     0x1.fa05bep-119f, 0x1.1a2c14p-31f, 0.0f, 0x1.e82054p-67f, 0.0f, 0x1.7abc4p-90f,
     0.0f, 0.0f, 0.0f, 0x1.b4b668p-31f, 0.0f, 0x1.2eda2ap-27f, 0x1.dd1018p-123f, 0.0f,
     0x1.f1de1cp-105f, 0.0f, 0.0f, 0x1.0d01fp-57f, 0.0f, 0.0f, 0x1.2c3e4cp-19f, 0.0f,
     0.0f, 0x1.f39fb6p-69f, 0x1.144962p-64f, 0.0f, 0x1.bd445ap-101f, 0.0f, 0.0f, 0.0f,
     0x1.596576p-118f, 0.0f, 0x1.4090f6p-105f, 0x1.e424aap-17f, 0.0f, 0x1.8955b2p-92f,
     0.0f, 0.0f, 0.0f, 0x1.857d7cp-39f, 0x1.74f97cp-2f, 0.0f, 0x1.ad1356p-102f,
     0x1.232094p-86f, 0.0f, 0x1.b2f97ep-77f, 0x1.fa8b76p-17f, 0x1.dee70cp-88f,
     0x1.272194p-100f, 0.0f, 0.0f, 0.0f, 0x1.fde6fep-25f, 0x1.f5d32p-41f,
     0x1.5cb498p-3f, 0.0f, 0.0f, 0x1.0ec24p-7f, 0x1.2831c6p-30f, 0.0f,
     0x1.b6677ep-107f, 0.0f, 0.0f, 0.0f, 0x1.5484fap-85f, 0.0f, 0.0f, 0.0f,
     0x1.1ce3ccp-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d58858p-64f, 0.0f, 0.0f,
     0x1.a61d5cp-66f, 0x1.900f16p-42f, 0x1.a7d7f4p-86f, 0x1.5adc54p-52f,
     0x1.be9eecp-72f, 0x1.e59afp-14f, 0.0f, 0x1.df5feep-114f, 0x1.dacdfap-21f, 0.0f,
     0x1.aa4072p-4f, 0.0f, 0x1.9c011cp-1f, 0.0f, 0x1.de5c46p-124f, 0x1.46656ap-117f,
     0.0f, 0x1.43c4fp-80f, 0x1.461674p-70f, 0.0f, 0.0f, 0x1.313522p-14f, 0x1p0f, 0.0f,
     0.0f, 0x1.2965bp-118f, 0x1.2d347cp-100f, 0x1.2ecc48p-26f, 0x1.0e3e38p-11f,
     0x1.29d80ap-61f, 0x1.bdaf68p-16f, 0.0f, 0x1.fc32eap-81f, 0x1.2088fcp-9f, 0.0f,
     0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.16fa2ep-76f, 0x1.84dc34p-94f,
     0x1.b93566p-30f, 0x1.78001ep-46f, 0x1.bbf524p-70f, 0.0f, 0.0f, 0x1.e6b1bep-36f,
     0.0f, 0x1.ed04bep-84f, 0x1.e002c6p-73f, 0x1.2b6c86p-76f, 0.0f, 0x1.134e98p-121f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.decf3p-88f, 0x1.f1a6dap-120f, 0x1.deec2p-76f, 0.0f,
     0x1.1d66c8p-26f, 0x1.5b74f4p-84f, 0x1.6492b4p-72f, 0.0f, 0x1.783a2cp-109f, 0.0f,
     0x1.42cf34p-98f, 0.0f, 0x1.819a8ep-28f, 0x1.03ea4ap-32f, 0x1p0f, 0.0f,
     0x1.0729c8p-53f, 0x1.13c326p-86f, 0x1.ef3d4ep-99f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.70358cp-25f, 0.0f, 0.0f, 0.0f, 0x1.e2723ep-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.962b1ep-87f, 0x1.0424b4p-37f, 0x1.3cc168p-20f, 0x1.15bfd8p-116f,
     0x1.0a3442p-124f, 0x1.f9078cp-75f, 0.0f, 0.0f, 0x1.73dd6cp-21f, 0x1.2eb9bp-70f,
     0x1.800328p-99f, 0.0f, 0x1.d92344p-81f, 0x1.f5e05cp-44f, 0.0f, 0x1.3b8fbcp-38f,
     0x1.4f904ap-56f, 0x1.273adcp-17f, 0x1.d35d4cp-125f, 0x1.b9dc88p-16f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.138a5ap-92f, 0.0f, 0x1.070c68p-58f, 0x1.9a32d4p-33f, 0.0f,
     0.0f, 0x1.f885bp-10f, 0.0f, 0x1.07bf58p-7f, 0x1.1bfc4p-13f, 0.0f,
     0x1.3b6514p-45f, 0.0f, 0.0f, 0x1.ce3d92p-39f, 0.0f, 0x1.f04b78p-46f, 0.0f, 0.0f,
     0.0f, 0x1.24655p-107f, 0x1.8429aap-15f, 0x1.c0fc0ep-79f, 0.0f, 0x1.1af382p-122f,
     0.0f, 0.0f, 0.0f, 0x1.d0b8bcp-60f, 0.0f, 0x1.5a489ap-33f, 0.0f, 0.0f,
     0x1.a6c454p-94f, 0x1.c3e7bap-2f, 0x1.266eeep-21f, 0.0f, 0x1.9c8868p-112f,
     0x1.ebc742p-60f, 0.0f, 0.0f, 0x1.e9a038p-36f, 0.0f, 0x1.ab5186p-61f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.060f3p-62f, 0x1.4722a6p-65f, 0x1.604c8ap-27f, 0x1.9f3afp-75f,
     0x1.15902ep-56f, 0x1.f643d4p-65f, 0x1.c500f4p-38f, 0.0f, 0.0f, 0.0f,
     0x1.7ad19ep-63f, 0x1.7881eep-87f, 0x1.9273dp-126f, 0.0f, 0x1.c89b5cp-49f,
     0x1.3b8b18p-42f, 0x1.0aef9ap-62f, 0.0f, 0.0f, 0x1.1af636p-6f, 0x1.550bc8p-97f,
     0x1.00e3bep-31f, 0x1.f77c2ep-20f, 0x1.135b68p-26f, 0x1.d46e18p-84f,
     0x1.587f8ap-71f, 0.0f, 0x1.b6fd18p-124f, 0x1.d3d7p-13f, 0.0f, 0x1.69ac32p-126f,
     0x1.5eaaccp-117f, 0.0f, 0x1.941244p-94f, 0.0f, 0.0f, 0.0f, 0x1.7d0338p-15f, 0.0f,
     0x1.7d82acp-27f, 0x1.1af2fcp-15f, 0x1.5204eap-18f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1c7112p-20f, 0.0f, 0x1.877ccap-45f, 0.0f, 0x1.1865cep-41f, 0x1.f6e39p-12f,
     0x1.889dfp-8f, 0.0f, 0x1.dc42ccp-49f, 0.0f, 0.0f, 0.0f, 0x1.94f1dap-75f,
     0x1.594fcp-58f, 0x1.723936p-35f, 0.0f, 0.0f, 0.0f, 0x1.2f9e2p-12f,
     0x1.b30d84p-122f, 0.0f, 0x1.0c7d8ep-9f, 0x1.2ea4d6p-79f, 0x1.01a82cp-81f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.219f4ap-58f, 0x1.6096cep-107f, 0x1.16cfe2p-125f,
     0x1.207b92p-112f, 0.0f, 0x1.21d97ep-33f, 0x1.36ac28p-62f, 0.0f, 0x1.0e2148p-31f,
     0x1.8ac98ap-10f, 0x1.d245b8p-86f, 0.0f, 0.0f, 0x1.93b31ep-95f, 0x1.8de01ap-15f,
     0x1.747956p-102f, 0x1.57f964p-57f, 0x1.778208p-9f, 0x1.513bd8p-123f, 0.0f, 0.0f,
     0x1.333676p-70f, 0.0f, 0.0f, 0x1.132a0ap-122f, 0x1.91eafep-19f, 0.0f,
     0x1.60c082p-102f, 0x1.dbafp-60f, 0.0f, 0x1.aeffacp-82f, 0x1.e2c268p-126f, 0.0f,
     0.0f, 0x1.3084b6p-119f, 0x1.871c7cp-91f, 0x1.fba12ep-69f, 0x1.7a110ap-120f, 0.0f,
     0x1.ec0f28p-18f, 0x1.07d9e8p-51f, 0x1.cfde04p-20f, 0x1.ca94f4p-97f,
     0x1.8d4b1p-45f, 0.0f, 0x1.1d27f8p-60f, 0.0f, 0.0f, 0x1.119a74p-113f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a9f83cp-52f, 0x1.45254ap-103f, 0.0f, 0.0f, 0x1.563ccp-122f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cae244p-108f, 0.0f, 0x1.33b88ap-124f,
     0x1.f0c8fap-73f, 0x1.d7885p-97f, 0x1.a6395p-80f, 0x1.b5062ep-32f,
     0x1.af9156p-82f, 0x1.77944ep-116f, 0.0f, 0.0f, 0.0f, 0x1.4232bap-56f,
     0x1.5e0b2ep-60f, 0.0f, 0.0f, 0x1.65cc96p-56f, 0x1.56848p-99f, 0x1.c737a2p-26f,
     0x1.34fda6p-88f, 0.0f, 0.0f, 0x1.d28cap-84f, 0.0f, 0.0f, 0.0f, 0x1.1b76a8p-107f,
     0x1.eee108p-9f, 0.0f, 0.0f, 0.0f, 0x1.063dep-122f, 0.0f, 0x1.d68fbap-22f, 0.0f,
     0x1.476a64p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.39e48ep-78f, 0.0f, 0x1.073ce6p-65f,
     0x1.890c84p-16f, 0.0f, 0x1.f6599ap-52f, 0.0f, 0x1.348fe2p-39f, 0x1.2a51acp-68f,
     0.0f, 0.0f, 0.0f, 0x1.c1962cp-124f, 0x1.6fbcdp-64f, 0.0f, 0x1.2ed89p-98f, 0.0f,
     0x1.19d192p-91f, 0.0f, 0x1.d06c64p-60f, 0.0f, 0x1.d04a3p-100f, 0.0f,
     0x1.18ca26p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a2fbbap-63f, 0x1.bd1b8cp-38f,
     0x1.47c988p-114f, 0.0f, 0x1.1832a4p-70f, 0x1.cb2a2ep-3f, 0x1.3601f8p-31f, 0.0f,
     0.0f, 0x1.6bae6ap-118f, 0x1.2273fap-57f, 0x1.000ee4p-100f, 0x1.dd5404p-17f,
     0x1.f7a9a6p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.662512p-35f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b0f29p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4eccbap-103f,
     0x1.5420cep-81f, 0x1.091576p-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.58e79p-58f,
     0.0f, 0x1.6b0d0ep-109f, 0x1.d4c83ap-26f, 0.0f, 0.0f, 0x1.79c40ep-33f, 0.0f,
     0x1.7a6702p-46f, 0.0f, 0x1.6df4bp-79f, 0x1.b8b8bp-89f, 0.0f, 0.0f,
     0x1.a18c56p-10f, 0x1.20fd18p-108f, 0x1.cb0bb6p-87f, 0x1.01df14p-64f,
     0x1.d6ef62p-28f, 0x1.1bfb7ap-89f, 0.0f, 0x1.77fd3ep-65f, 0x1.912b16p-113f,
     0x1.440e38p-51f, 0x1.78335ep-116f, 0.0f, 0x1.fa2f8cp-101f, 0.0f, 0.0f,
     0x1.93d7c6p-4f, 0x1.bc9b6ep-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.012bb8p-48f,
     0x1.b83606p-24f, 0x1.401b6ep-56f, 0.0f, 0.0f, 0x1.898218p-95f, 0.0f, 0.0f,
     0x1.df7622p-38f, 0x1.8fbf7cp-54f, 0x1.3664ap-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6924bcp-46f, 0x1.cb4288p-113f, 0x1.d6125ap-121f, 0.0f, 0.0f, 0x1.2ce798p-94f,
     0x1.833b26p-55f, 0.0f, 0.0f, 0x1.2e5a56p-29f, 0x1.168a24p-43f, 0x1.aa02b2p-19f,
     0x1.f6890ap-1f, 0.0f, 0x1.37daeap-87f, 0x1.999e2p-89f, 0.0f, 0x1.25c1eep-44f,
     0.0f, 0x1.0d8aa6p-113f, 0.0f, 0x1.61b4bep-69f, 0x1.4929cap-101f,
     0x1.42d18ep-106f, 0x1.8264b8p-115f, 0.0f, 0.0f, 0x1.f8faaap-109f, 0.0f, 0.0f,
     0x1.0620ecp-2f, 0x1.c11648p-67f, 0x1.f90d4ep-124f, 0x1.b6b5cep-45f, 0.0f, 0.0f,
     0.0f, 0x1.b3e0b8p-26f, 0x1.d16128p-86f, 0x1.3bbf5ap-112f, 0x1.823298p-123f,
     0x1.52bcap-35f, 0x1.2df09ep-85f, 0x1.eb2742p-118f, 0.0f, 0x1.9f0ef6p-22f,
     0x1.070258p-94f, 0.0f, 0x1.5f2278p-25f, 0x1.81884ep-102f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ec7b48p-41f, 0x1.0a2744p-82f, 0x1.973718p-122f, 0.0f, 0x1.1720eap-82f, 0.0f,
     0x1.83bf7ep-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1abc72p-39f, 0.0f, 0x1.2f0e34p-68f,
     0x1.cff1d8p-74f, 0x1.f87e6cp-122f, 0.0f, 0.0f, 0x1.81bf4p-44f, 0.0f, 0.0f, 0.0f,
     0x1.2c7e8ep-42f, 0.0f, 0.0f, 0x1.2a504cp-14f, 0.0f, 0x1.bbff64p-118f,
     0x1.15d054p-105f, 0.0f, 0x1.10bcb6p-46f, 0.0f, 0.0f, 0x1.168c42p-65f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.71c6d4p-65f, 0.0f, 0x1.68506ap-58f, 0x1.adbddep-68f,
     0x1.bc6904p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.849e9cp-102f, 0x1.66b18ep-75f,
     0.0f, 0x1.828a3ap-27f, 0x1.72ce86p-1f, 0.0f, 0x1.fb116p-120f, 0.0f,
     0x1.60b50cp-7f, 0.0f, 0.0f, 0x1.b9fc3ep-56f, 0x1.276e8p-14f, 0x1.530f4p-62f,
     0x1.61247cp-36f, 0x1.b1f74p-11f, 0x1.9adb0cp-3f, 0x1.0993b2p-3f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.715532p-7f, 0x1.724ff2p-30f, 0x1.555a1ep-20f, 0.0f, 0.0f,
     0x1.cd2506p-96f, 0x1.8b788ap-87f, 0x1.64fd74p-10f, 0.0f, 0.0f, 0x1.3f6dfep-112f,
     0x1.984b08p-1f, 0.0f, 0x1.16e84ap-73f, 0.0f, 0.0f, 0.0f, 0x1.99c63cp-118f,
     0x1.c8d636p-16f, 0x1.46c888p-10f, 0x1.09e958p-100f, 0x1.6988b8p-38f, 0.0f,
     0x1.ab9746p-117f, 0x1.3bdd5cp-30f, 0.0f, 0x1.2e6544p-45f, 0.0f, 0.0f,
     0x1.293812p-7f, 0x1.3702p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cc286ap-42f,
     0x1.85d78ap-31f, 0.0f, 0.0f, 0.0f, 0x1.5e5546p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b54d38p-76f, 0x1.4022d4p-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.da12ap-18f,
     0x1.3ada42p-68f, 0.0f, 0.0f, 0.0f, 0x1.0f5b94p-57f, 0.0f, 0x1.ddddaap-74f,
     0x1.5bac4ep-106f, 0.0f, 0x1.ce6bb8p-41f, 0.0f, 0x1.fbd67cp-29f, 0x1.667a1ap-98f,
     0x1.bad298p-11f, 0x1.12af56p-10f, 0.0f, 0x1.e9ca26p-33f, 0x1.f6b5a8p-100f,
     0x1.161e74p-61f, 0.0f, 0x1.11f952p-39f, 0.0f, 0.0f, 0x1.adf178p-51f, 0.0f,
     0x1.99b846p-21f, 0.0f, 0x1.97b384p-29f, 0x1.f1a606p-81f, 0x1.a86514p-79f,
     0x1.c07d3ap-110f, 0x1.0fc758p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6f0928p-34f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.016834p-121f, 0.0f, 0x1.c16f7p-37f, 0.0f, 0.0f,
     0x1.d31f9p-116f, 0.0f, 0.0f, 0x1.d20fdcp-49f, 0.0f, 0.0f, 0.0f, 0x1.8eb782p-23f,
     0x1.9b3272p-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bc1fc4p-34f, 0x1.efcb68p-29f, 0.0f,
     0.0f, 0.0f, 0x1.301068p-56f, 0x1.193a86p-94f, 0x1.20bbcap-95f, 0x1.8b8fc8p-54f,
     0.0f, 0x1.59ac14p-13f, 0.0f, 0x1.21a1a2p-84f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a55ffcp-88f, 0.0f, 0x1.8293bep-9f, 0x1.20a2a6p-28f, 0x1.62f61p-16f, 0.0f,
     0.0f, 0x1.703ef8p-20f, 0.0f, 0x1.73431ap-19f, 0x1.f04dc8p-1f, 0x1.a94eb2p-116f,
     0x1.a14dfep-53f, 0.0f, 0.0f, 0.0f, 0x1.7790aap-30f, 0.0f, 0.0f, 0.0f,
     0x1.665ba2p-32f, 0x1.19f32cp-124f, 0x1.7367e4p-77f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f2355cp-39f, 0x1.bc759ep-70f, 0x1.98d48ep-25f, 0.0f, 0.0f, 0.0f,
     0x1.28775ap-96f, 0.0f, 0.0f, 0x1.f11c6ep-111f, 0.0f, 0x1.ac39cp-80f, 0.0f, 0.0f,
     0.0f, 0x1.1b8e18p-70f, 0x1.67e052p-103f, 0.0f, 0x1.73e46p-126f, 0x1.2b127cp-101f,
     0x1.419246p-73f, 0.0f, 0x1.f136a2p-103f, 0.0f, 0.0f, 0x1.be6d7ep-22f, 0.0f,
     0x1.92e0bap-123f, 0x1.3691d8p-123f, 0.0f, 0x1.035fc2p-126f, 0.0f,
     0x1.a6e606p-77f, 0.0f, 0.0f, 0.0f, 0x1.7aa1c6p-68f, 0x1.fdfb26p-42f,
     0x1.0d93cp-41f, 0x1.39b0bcp-6f, 0.0f, 0x1.45ae88p-60f, 0x1.aa4fbcp-46f,
     0x1.b394d2p-102f, 0x1.394278p-44f, 0x1.d0c1cap-27f, 0x1.7a027cp-113f,
     0x1.74391ap-102f, 0x1.5aa052p-29f, 0.0f, 0x1.1b69b4p-14f, 0x1.04142cp-28f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.fe203ep-111f, 0.0f, 0x1.cd64d4p-2f, 0.0f,
     0x1.2fdd38p-16f, 0.0f, 0.0f, 0x1.f91ebap-72f, 0x1.f5e0b6p-19f, 0.0f, 0.0f,
     0x1.8e8796p-47f, 0x1.d7d8ap-107f, 0.0f, 0.0f, 0x1.2bdde8p-40f, 0x1.4a77cep-43f,
     0.0f, 0.0f, 0x1.230594p-105f, 0.0f, 0x1.516a1cp-38f, 0.0f, 0.0f, 0.0f,
     0x1.4d46a4p-52f, 0.0f, 0x1.d03566p-70f, 0.0f, 0x1.2df3aep-55f, 0x1.93d8e2p-6f,
     0x1.4dacb4p-96f, 0.0f, 0x1.319c8cp-106f, 0x1.2a4e92p-54f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e5d51p-63f, 0x1.1062f2p-42f, 0x1.4f90d6p-59f, 0.0f, 0.0f,
     0x1.f0bb92p-27f, 0x1p0f, 0.0f, 0.0f, 0x1.c91e32p-46f, 0.0f, 0x1.aecec6p-115f,
     0.0f, 0.0f, 0x1.1da772p-124f, 0.0f, 0.0f, 0x1.63e448p-73f, 0.0f, 0x1.f52dc4p-9f,
     0.0f, 0.0f, 0.0f, 0x1.34d9c6p-120f, 0.0f, 0x1.08f33cp-54f, 0x1.75ba72p-84f, 0.0f,
     0.0f, 0x1.c49ce2p-57f, 0x1.5d88b4p-69f, 0x1.67208cp-64f, 0.0f, 0x1.215202p-50f,
     0x1.f03d14p-42f, 0x1.9ab5e8p-79f, 0x1.b396a4p-100f, 0x1.642f6cp-12f, 0.0f,
     0x1.6d7fcp-120f, 0.0f, 0x1.7e6698p-52f, 0x1.dad90ap-109f, 0.0f, 0.0f,
     0x1.d92f7p-106f, 0x1.0c79f8p-77f, 0x1.0d5882p-8f, 0.0f, 0x1.79420ep-48f, 0.0f
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
    
    global_bench_acc = 0.0f;
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
        float bench_acc;
        int32_t i;
        __m128 carg;
        __m128 carg1;
        __m128 carg2;
        float tmp0;
        int32_t tmp1;

        i = INT32_C(0);
        bench_acc = 0.0f;

        for (;(i < INT32_C(1001));){
            float tmp0;
            float tmp1;
            __m128 carg;
            __m128 carg1;
            __m128 carg2;
            float tmp2;
            int32_t tmp3;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_asinhf1_u10purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            carg = _mm_set_ss(bench_acc);
            carg1 = _mm_set_ss(tmp1);
            carg2 = _mm_add_ss(carg, carg1);
            tmp2 = _mm_cvtss_f32(carg2);
            bench_acc = tmp2;
            tmp3 = i + INT32_C(1);
            i = tmp3;
        }
        carg = _mm_set_ss(global_bench_acc);
        carg1 = _mm_set_ss(bench_acc);
        carg2 = _mm_add_ss(carg, carg1);
        tmp0 = _mm_cvtss_f32(carg2);
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
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_asinhf1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_asinhf1_u10purecfma bench acc %a\n", global_bench_acc);
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
