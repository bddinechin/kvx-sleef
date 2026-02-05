/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_fastsinf4_u3500avx2128.c --function \
 *     Sleef_fastsinf4_u3500avx2128 --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0x1.42a27ep-17f, 0x1.e757ccp-103f, 0.0f, 0.0f, 0.0f, 0x1.64d9bcp-49f,
     0x1.a435e6p-24f, 0x1.cdc1fap-26f, 0.0f, 0x1.48d9a6p-100f, 0x1.514928p-90f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.12e3f6p-41f, 0x1.10b8aep-17f, 0x1.b8ad9cp-65f, 0.0f,
     0x1.825f3p-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a7809ep-102f, 0.0f, 0x1p0f,
     0x1.51006ap-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8a86fp-105f,
     0x1.7d7a14p-37f, 0.0f, 0.0f, 0.0f, 0x1.d64904p-101f, 0x1.c6c6d4p-36f, 0.0f, 0.0f,
     0.0f, 0x1.d53c8cp-52f, 0x1.7f253p-45f, 0.0f, 0x1.aaa1f2p-39f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.049548p-73f, 0x1.65e432p-103f, 0x1.c3f78ep-54f, 0.0f, 0x1.b0cf94p-46f,
     0x1.a3daa8p-119f, 0.0f, 0x1.c59b7ep-80f, 0.0f, 0x1.e20294p-91f, 0x1.aabf5cp-2f,
     0x1.25572cp-102f, 0x1.e6c5c8p-59f, 0.0f, 0x1.52734cp-109f, 0.0f, 0.0f,
     0x1.bd4fd6p-125f, 0x1.60e4b6p-126f, 0x1.5e35fp-50f, 0.0f, 0x1.249172p-22f,
     0x1.f085c2p-25f, 0x1.874e28p-11f, 0.0f, 0.0f, 0.0f, 0x1.ee3fb2p-68f,
     0x1.ce76a8p-31f, 0x1.003d4cp-49f, 0x1.61ac3ap-41f, 0x1.633cf4p-93f,
     0x1.f024f2p-118f, 0.0f, 0.0f, 0x1.c4eap-29f, 0x1.6514e6p-70f, 0.0f, 0.0f,
     0x1.d733fp-118f, 0.0f, 0.0f, 0.0f, 0x1.d7cdc4p-14f, 0x1.194288p-9f,
     0x1.3c721cp-26f, 0x1.1f87a6p-52f, 0.0f, 0x1.da149cp-115f, 0.0f, 0.0f, 0.0f,
     0x1.2d2c7ep-15f, 0x1p0f, 0x1.4b5a2cp-44f, 0x1.8acc8cp-36f, 0.0f, 0x1.366ea8p-6f,
     0.0f, 0x1.59e9b6p-88f, 0x1.27e99p-13f, 0.0f, 0x1.90e084p-98f, 0.0f, 0.0f,
     0x1.36522ap-45f, 0.0f, 0.0f, 0.0f, 0x1.b735b6p-65f, 0x1.058d88p-46f,
     0x1.44fc7ep-20f, 0.0f, 0.0f, 0.0f, 0x1.57673p-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.1e0a9p-48f, 0x1.8282c8p-44f, 0.0f, 0.0f, 0x1.b16934p-124f,
     0x1.96914cp-88f, 0x1.7af4bp-114f, 0x1.492b7ap-70f, 0.0f, 0.0f, 0x1.223478p-59f,
     0.0f, 0x1.eab114p-37f, 0.0f, 0x1.f5e546p-61f, 0x1.2d731ap-71f, 0.0f,
     0x1.5b605cp-6f, 0.0f, 0.0f, 0x1.4bd12ap-4f, 0.0f, 0.0f, 0x1.eb4a5p-123f,
     0x1.07edb6p-74f, 0.0f, 0x1.cb3b1cp-114f, 0.0f, 0x1.4e4f18p-70f, 0x1.c50d0ap-41f,
     0.0f, 0x1.14d8e6p-30f, 0x1.6443d2p-91f, 0x1.c20e4ep-33f, 0.0f, 0x1.01c2f2p-56f,
     0x1.e19cf8p-41f, 0.0f, 0.0f, 0x1.21009p-102f, 0.0f, 0.0f, 0x1.9fcb2ap-14f,
     0x1.9f93bap-31f, 0x1.5132a8p-8f, 0.0f, 0.0f, 0x1.bcf1fp-83f, 0x1.3347eep-70f,
     0x1.c07028p-16f, 0x1.d135e8p-91f, 0.0f, 0.0f, 0x1.c9357cp-84f, 0x1.73f926p-98f,
     0x1.a2b886p-7f, 0x1.67a8c6p-55f, 0.0f, 0x1.048706p-16f, 0.0f, 0.0f,
     0x1.6b841ap-14f, 0.0f, 0x1.11d8bep-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.266e1cp-34f, 0x1.58cce4p-112f, 0x1.348e0ap-54f, 0.0f, 0x1.6d374p-31f, 0.0f,
     0.0f, 0.0f, 0x1.67db24p-30f, 0x1.2ea2aep-4f, 0x1.ac680ep-62f, 0.0f, 0.0f, 0.0f,
     0x1p0f, 0.0f, 0x1.a6a706p-124f, 0x1.0c3dfap-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.db3dfap-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1f0786p-112f, 0.0f,
     0x1.667c78p-18f, 0.0f, 0.0f, 0x1.75541ep-40f, 0x1.1e8da4p-42f, 0x1.e7560ep-31f,
     0x1.4a5e32p-38f, 0x1.da001ap-126f, 0.0f, 0.0f, 0.0f, 0x1.72c91p-108f, 0.0f,
     0x1.195092p-38f, 0.0f, 0x1.7050cep-42f, 0.0f, 0x1.94e31ep-51f, 0.0f,
     0x1.a16dfap-42f, 0x1.051faap-46f, 0x1.3cf3eep-91f, 0x1.64e286p-110f,
     0x1.fb02bep-70f, 0x1.97f2bep-94f, 0x1.acb986p-100f, 0.0f, 0.0f, 0.0f,
     0x1.411594p-3f, 0x1.57fb1p-62f, 0x1.9c58d4p-107f, 0.0f, 0.0f, 0.0f,
     0x1.16ebcep-93f, 0.0f, 0.0f, 0x1.0c5c4ep-40f, 0x1.1a669ap-96f, 0.0f,
     0x1.2e14c2p-114f, 0x1.66927p-18f, 0.0f, 0.0f, 0x1.f0304cp-121f, 0.0f,
     0x1.e9de0cp-59f, 0.0f, 0x1.86d442p-118f, 0x1.aa805cp-97f, 0x1.1c2f4cp-65f, 0.0f,
     0.0f, 0.0f, 0x1.f4d6dcp-110f, 0.0f, 0x1.72d232p-73f, 0x1.e52e2ap-53f,
     0x1.2b422p-80f, 0.0f, 0.0f, 0.0f, 0x1.01c328p-102f, 0.0f, 0x1.63544ap-22f, 0.0f,
     0x1.baa78ep-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.898f06p-27f,
     0.0f, 0x1.81d554p-22f, 0.0f, 0x1.25960cp-38f, 0.0f, 0x1.73049ep-72f, 0.0f,
     0x1.1451c8p-68f, 0.0f, 0x1.5056dp-64f, 0.0f, 0x1.3b64d6p-29f, 0x1.b4b38ep-69f,
     0x1.1bda6cp-29f, 0x1.ca4c12p-53f, 0x1.1977d8p-105f, 0x1.639ee6p-99f, 0.0f, 0.0f,
     0.0f, 0x1.862fdep-96f, 0x1.cd6122p-53f, 0x1.45398ep-15f, 0x1.5f178p-95f,
     0x1.caaf44p-92f, 0.0f, 0.0f, 0x1.276d02p-101f, 0x1.9ddde6p-92f, 0x1.eecd74p-56f,
     0x1.ac05cep-43f, 0.0f, 0.0f, 0x1.b7e1f2p-11f, 0x1.5bc408p-17f, 0x1.1d5be2p-116f,
     0x1.1eb7d6p-89f, 0x1.a9052p-106f, 0.0f, 0.0f, 0x1.60eec6p-69f, 0.0f,
     0x1.9cd404p-65f, 0x1.e1839p-91f, 0x1.219ac6p-50f, 0x1.005d3ep-24f, 0.0f,
     0x1.1c125ap-89f, 0.0f, 0.0f, 0.0f, 0x1.718806p-71f, 0x1.2fd9dep-97f,
     0x1.111e44p-5f, 0x1.19ae22p-103f, 0.0f, 0x1.7b3ep-35f, 0x1.d1627ep-53f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.8de11ep-76f, 0.0f, 0x1.4998eep-87f, 0.0f, 0x1p0f,
     0x1.ff55ccp-48f, 0x1.71b9d6p-41f, 0.0f, 0x1.8ceaccp-29f, 0.0f, 0.0f,
     0x1.425124p-84f, 0x1.e31236p-66f, 0.0f, 0.0f, 0x1.5e6f5p-66f, 0.0f,
     0x1.113a78p-29f, 0.0f, 0x1.2ff258p-19f, 0x1.2fa084p-45f, 0.0f, 0x1.627a3ap-40f,
     0.0f, 0.0f, 0x1.de723p-70f, 0x1.8aa604p-78f, 0.0f, 0.0f, 0x1.f05244p-89f,
     0x1.822cbcp-107f, 0x1.e6ab22p-52f, 0.0f, 0x1.374968p-85f, 0.0f, 0x1.75244ep-121f,
     0.0f, 0x1.31e764p-29f, 0.0f, 0.0f, 0x1.71e4f2p-94f, 0x1.1fea5cp-34f, 0.0f, 0.0f,
     0x1.a35b98p-97f, 0.0f, 0x1.e4bad6p-66f, 0x1.00cd66p-104f, 0x1.3f9e74p-48f,
     0x1.f5307cp-29f, 0.0f, 0.0f, 0.0f, 0x1.fcfe1ep-118f, 0.0f, 0.0f, 0x1.d15ab4p-98f,
     0x1.caf892p-39f, 0x1.c5bc6ap-80f, 0.0f, 0x1.58cb66p-54f, 0.0f, 0.0f,
     0x1.0a039ep-3f, 0x1.722dap-119f, 0.0f, 0.0f, 0x1.495998p-22f, 0x1.5762dap-123f,
     0x1.38cbb6p-53f, 0x1.73f34ep-86f, 0x1.b27ce8p-93f, 0.0f, 0x1.c22e3ep-20f,
     0x1.b3360ap-54f, 0x1.480046p-119f, 0x1.cd1354p-16f, 0x1.c0e826p-50f, 0.0f, 0.0f,
     0x1.b206a4p-57f, 0x1.4fa902p-66f, 0x1.fb76d2p-113f, 0.0f, 0.0f, 0.0f,
     0x1.689e9ep-77f, 0.0f, 0x1.f4d54ap-65f, 0.0f, 0x1.c12a5ep-125f, 0x1.7e9bbp-124f,
     0x1.460e6ep-75f, 0x1.eb7a64p-49f, 0x1.9481c4p-15f, 0x1.bef9d2p-77f,
     0x1.8416f8p-67f, 0.0f, 0x1.d757fp-47f, 0.0f, 0x1.1a3716p-100f, 0.0f, 0.0f,
     0x1.8bef8p-28f, 0.0f, 0.0f, 0x1.05ce68p-102f, 0.0f, 0.0f, 0x1.0e1d84p-68f,
     0x1.d60494p-34f, 0.0f, 0x1.111fd4p-82f, 0x1.073c3ep-44f, 0x1.ef5032p-32f,
     0x1.c69a4p-104f, 0.0f, 0.0f, 0.0f, 0x1.f7e00ep-116f, 0.0f, 0x1.650ce6p-13f, 0.0f,
     0.0f, 0.0f, 0x1.8a0074p-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f14496p-34f,
     0x1.9b329ap-95f, 0x1.9a48bap-117f, 0x1.fb5d4ep-119f, 0x1.2e08b4p-17f, 0.0f,
     0x1.fa5f8p-87f, 0.0f, 0x1.6a1854p-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.35c318p-46f,
     0.0f, 0x1.3781p-55f, 0x1.d1c92p-108f, 0x1.be1e66p-38f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.293ba2p-62f, 0x1.883324p-34f, 0x1.8bb986p-26f,
     0.0f, 0.0f, 0x1.020f4p-24f, 0x1.dfe3c6p-26f, 0x1.dc4588p-105f, 0x1.b58a5ap-85f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.112fd2p-34f, 0.0f, 0x1.f1d358p-68f, 0x1.b02f1cp-116f,
     0x1.a1c5a6p-71f, 0.0f, 0x1.5675c8p-67f, 0.0f, 0.0f, 0x1.9ccc2ep-63f,
     0x1.25a50cp-32f, 0.0f, 0.0f, 0x1.b0f79ap-84f, 0x1.9b8dbcp-32f, 0x1.d9ab7p-26f,
     0x1.d3a1f2p-84f, 0x1.26406p-59f, 0.0f, 0x1.163118p-23f, 0.0f, 0.0f,
     0x1.eb006ap-17f, 0x1.6d0cd8p-13f, 0x1.194886p-9f, 0x1.d6abc8p-10f, 0.0f,
     0x1.c76ce8p-45f, 0x1.4c9442p-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.286278p-102f,
     0x1.71310ap-57f, 0x1.965e48p-59f, 0.0f, 0x1.cd7872p-34f, 0.0f, 0.0f,
     0x1.aa4d5ep-48f, 0x1.ffdbb4p-93f, 0x1.d6b274p-45f, 0.0f, 0.0f, 0x1.4c785ep-43f,
     0x1.434342p-114f, 0.0f, 0x1.aa5fb6p-24f, 0.0f, 0x1.8458fp-36f, 0x1.a1d7dp-23f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.65962ap-38f, 0.0f, 0.0f, 0x1.cab6c4p-81f,
     0x1.90587cp-82f, 0x1.a4a184p-43f, 0.0f, 0x1.a299a4p-12f, 0x1.4fc222p-95f,
     0x1.1e2d8p-88f, 0.0f, 0x1.9fe3c8p-77f, 0.0f, 0x1.f01fbep-42f, 0.0f,
     0x1.48f8cp-110f, 0.0f, 0x1.7b65c4p-10f, 0x1.2c55dep-97f, 0.0f, 0.0f,
     0x1.29fb7p-105f, 0x1.aece52p-35f, 0x1.b376e2p-69f, 0x1.95641cp-55f, 0.0f,
     0x1.e899aap-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e1186ep-47f, 0x1.7074f6p-121f,
     0.0f, 0.0f, 0x1.d32812p-124f, 0x1.3136b8p-64f, 0.0f, 0.0f, 0x1.5dda36p-40f,
     0x1.d6d438p-125f, 0x1.ff4f42p-64f, 0x1.c28736p-24f, 0x1.3964dap-2f, 0.0f, 0.0f,
     0.0f, 0x1.b0ced4p-102f, 0x1.a88f16p-89f, 0x1.d406ccp-52f, 0x1.45cceep-77f,
     0x1.19d3fep-10f, 0x1.950bf8p-123f, 0.0f, 0x1.36be32p-3f, 0.0f, 0x1.7f25aep-9f,
     0.0f, 0x1.a18beap-97f, 0x1.faed6ep-30f, 0x1.1cb52ap-21f, 0x1.bccbd2p-119f,
     0x1.a2b4e4p-4f, 0.0f, 0.0f, 0x1.b72172p-97f, 0x1.fb8b8ap-22f, 0.0f,
     0x1.6a267ap-13f, 0x1.859504p-86f, 0.0f, 0x1.45186ep-111f, 0x1.aea028p-28f, 0.0f,
     0x1.59808cp-50f, 0x1.b6bbc4p-66f, 0.0f, 0x1.f7080ap-67f, 0.0f, 0x1.cccb3ep-29f,
     0x1.f7fb2ap-114f, 0.0f, 0.0f, 0x1.81b0a8p-91f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.74b6eep-125f, 0x1.80d0f6p-4f, 0x1.44ec06p-51f, 0x1.ec5ee4p-19f, 0.0f, 0.0f,
     0x1.4a4362p-40f, 0x1.008308p-107f, 0.0f, 0.0f, 0x1.7599b2p-7f, 0x1.9f4654p-49f,
     0.0f, 0.0f, 0x1.87b5a2p-36f, 0.0f, 0x1.13e776p-54f, 0.0f, 0x1.08476p-110f, 0.0f,
     0.0f, 0x1.3ea9a8p-116f, 0.0f, 0x1.d42a24p-21f, 0.0f, 0x1.c9ed52p-62f, 0.0f, 0.0f,
     0x1.61af12p-54f, 0.0f, 0x1.ba389ap-101f, 0.0f, 0x1.56e016p-60f, 0x1.36cee6p-51f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e63244p-56f, 0x1.1d802cp-88f, 0.0f, 0x1.4371dep-109f,
     0.0f, 0x1.359f68p-30f, 0x1.225a7ap-35f, 0.0f, 0.0f, 0x1.ed6e9ep-15f,
     0x1.fab3dep-92f, 0.0f, 0x1.a00d6p-28f, 0.0f, 0x1.cc08f6p-85f, 0x1.d02e9ap-43f,
     0.0f, 0x1.8c7364p-123f, 0x1.8c5a5ep-1f, 0x1.fff14ep-46f, 0.0f, 0.0f, 0.0f,
     0x1.d2ec74p-110f, 0x1.e78756p-47f, 0x1.821d0ap-81f, 0x1.44ab2cp-99f, 0.0f, 0.0f,
     0x1.dadedp-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d9c7aap-55f, 0.0f, 0x1.1e34dp-45f,
     0.0f, 0x1.3445ecp-13f, 0x1.9e1fd2p-5f, 0x1.f6f21p-76f, 0x1.41ac7p-67f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.dd37d8p-20f, 0.0f, 0.0f, 0.0f, 0x1.8d5fb8p-58f,
     0x1.aeeadap-105f, 0x1.2481aep-117f, 0x1.5cce5ep-62f, 0.0f, 0x1.1cd3e8p-65f,
     0x1.8b75cep-77f, 0x1.226138p-32f, 0x1.a1cf78p-98f, 0x1.e281c8p-29f,
     0x1.952cf6p-51f, 0.0f, 0x1.fdc304p-14f, 0.0f, 0.0f, 0x1.37609p-97f,
     0x1.ee6e56p-29f, 0x1.95faa4p-79f, 0x1.7d1596p-99f, 0x1.84ceb2p-93f,
     0x1.d2e424p-89f, 0x1.259812p-109f, 0.0f, 0.0f, 0.0f, 0x1.c8c608p-39f, 0.0f, 0.0f,
     0.0f, 0x1.29db32p-100f, 0.0f, 0x1.03cf44p-87f, 0x1.ff921cp-123f, 0.0f, 0.0f,
     0.0f, 0x1.79bd4p-59f, 0.0f, 0.0f, 0.0f, 0x1.04fbbap-106f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a89c14p-3f, 0.0f, 0.0f, 0x1.7ab8b6p-123f, 0.0f, 0x1.8d074ap-17f,
     0x1.179212p-103f, 0x1.525794p-96f, 0x1.96bf58p-84f, 0.0f, 0.0f, 0.0f,
     0x1.e7a404p-85f, 0.0f, 0.0f, 0.0f, 0x1.e61b48p-94f, 0x1.dea918p-118f,
     0x1.4e0cdep-22f, 0.0f, 0.0f, 0x1.99ef12p-64f, 0x1.33a0aep-30f, 0x1.678e56p-49f,
     0.0f, 0.0f, 0.0f, 0x1.b9aff6p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b4de9p-98f, 0.0f, 0x1.af86c8p-52f, 0x1.46ceaap-66f, 0x1.26c362p-21f,
     0.0f, 0x1.ba14fcp-75f, 0x1.b23956p-124f, 0.0f, 0.0f, 0.0f, 0x1.f53648p-48f,
     0x1.c31df6p-63f, 0x1.3e72cap-88f, 0.0f, 0.0f, 0x1.a8b07p-89f, 0x1.565ea8p-9f,
     0x1.327a6cp-9f, 0x1.ccac08p-64f, 0x1.75ff4p-104f, 0.0f, 0x1.913f44p-15f, 0.0f,
     0.0f, 0.0f, 0x1.1321b4p-42f, 0x1.ccf82ap-54f, 0.0f, 0x1.6de576p-123f,
     0x1.505e72p-24f, 0x1.f2dc7cp-83f, 0x1.be3c4cp-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.91dc2cp-102f, 0.0f, 0x1.a61ce2p-19f, 0.0f, 0.0f, 0x1.5422bep-81f,
     0x1.eb975p-44f, 0.0f, 0x1.72b8d6p-31f, 0x1.31ec7p-84f, 0.0f, 0.0f,
     0x1.837792p-6f, 0.0f, 0x1.1b24b2p-117f, 0.0f, 0x1.3888a4p-42f, 0x1.9ae3a4p-4f,
     0x1.52ea42p-58f, 0.0f, 0x1.1ef5bap-28f, 0x1.3d3da2p-20f, 0.0f, 0x1.8c3338p-41f,
     0.0f, 0.0f, 0.0f, 0x1.e3a51cp-48f, 0.0f, 0x1.960584p-23f, 0x1.872722p-106f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.93669ep-27f, 0.0f, 0x1.c4ecc2p-32f, 0.0f, 0x1.1d39d2p-112f,
     0x1.dc4e84p-71f, 0.0f, 0.0f, 0x1.6624d8p-89f, 0x1.1d05c4p-19f, 0x1.f50ff4p-5f,
     0x1.57257cp-31f, 0x1.ab4b3cp-44f, 0.0f, 0x1.84b6f6p-49f, 0x1.512632p-90f,
     0x1.bd555ap-96f, 0x1.158722p-88f, 0x1.950e06p-98f, 0x1.fac88ep-67f, 0.0f,
     0x1.7498e4p-6f, 0.0f, 0.0f, 0x1.85e438p-90f, 0x1.d6171p-34f, 0x1.29ea2ep-58f,
     0.0f, 0x1.32a956p-31f, 0.0f, 0x1.a0c8cep-37f, 0x1.9d736cp-48f, 0x1.a8d562p-54f,
     0x1.e613e2p-3f, 0.0f, 0.0f, 0x1.fce12p-7f, 0x1.cb858ap-19f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.651e48p-94f, 0x1.0884ccp-90f, 0.0f, 0x1.689fep-122f,
     0x1.08ab26p-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ac5f44p-19f, 0.0f,
     0.0f, 0x1.08135cp-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a35498p-88f, 0.0f, 0.0f,
     0x1.dac968p-8f, 0x1.60554ap-18f, 0x1.8eb0d4p-3f
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
            tmp1 = Sleef_fastsinf4_u3500avx2128(tmp0);
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
    printf("Sleef_fastsinf4_u3500avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_fastsinf4_u3500avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
