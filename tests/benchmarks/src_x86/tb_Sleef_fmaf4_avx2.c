/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_fmaf4_avx2128.c --function Sleef_fmaf4_avx2128 --arity 3 \
 *     --headers sleef.h,ml_support_lib.h --input-formats \
 *     binary32,binary32,binary32 --vector-size 4 \
 *     --function-input-vector-size 4 --bench --no-embedded-bin --target \
 *     x86_avx2128
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
     0x1.487e84p-13f, 0.0f, 0.0f, 0.0f, 0x1.935ac2p-94f, 0.0f, 0x1.8bf81p-26f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.acd942p-104f, 0x1.df5c02p-47f, 0.0f,
     0x1.e8e7acp-8f, 0.0f, 0.0f, 0x1.797dap-1f, 0.0f, 0x1.a2f284p-118f,
     0x1.85aa92p-79f, 0.0f, 0.0f, 0x1.fd93b4p-96f, 0x1.4ee816p-7f, 0x1.458386p-24f,
     0x1.7887ecp-72f, 0.0f, 0.0f, 0x1.4d77f2p-81f, 0x1.383c3p-53f, 0.0f,
     0x1.57b5b2p-116f, 0.0f, 0.0f, 0.0f, 0x1.588e62p-58f, 0x1.d3ca1ep-26f,
     0x1.1d2f7p-106f, 0.0f, 0.0f, 0x1.c28838p-69f, 0x1.0b732ap-86f, 0.0f, 0.0f,
     0x1.245dcap-63f, 0x1.de526ap-36f, 0x1.cef648p-125f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.dade3ap-110f, 0x1.81d99ap-49f, 0.0f, 0x1.791d56p-115f, 0.0f, 0x1.7121acp-74f,
     0.0f, 0.0f, 0x1.85b2eap-119f, 0.0f, 0.0f, 0.0f, 0x1.2e7d9ep-10f, 0x1.e3604p-15f,
     0.0f, 0.0f, 0x1.691ef8p-43f, 0x1.ff4a4ep-89f, 0.0f, 0.0f, 0x1.1e5e98p-125f, 0.0f,
     0.0f, 0.0f, 0x1.998576p-72f, 0.0f, 0x1.4e19aep-42f, 0x1.b9e17ep-86f,
     0x1.66eabcp-79f, 0.0f, 0x1.30d814p-80f, 0.0f, 0.0f, 0x1.cb198cp-24f,
     0x1.f1555p-107f, 0.0f, 0.0f, 0.0f, 0x1.07d886p-2f, 0x1.c68778p-68f, 0.0f,
     0x1.940bf4p-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.97b268p-85f, 0x1.9b5744p-65f,
     0x1.0cf492p-74f, 0.0f, 0x1.664132p-82f, 0x1.3c9d34p-61f, 0x1.752228p-43f,
     0x1.9122aep-39f, 0.0f, 0x1.b6448ep-28f, 0.0f, 0.0f, 0x1.b11e2ep-5f, 0.0f,
     0x1.d133f4p-17f, 0.0f, 0.0f, 0x1.55e8bep-103f, 0.0f, 0.0f, 0.0f, 0x1.5bb62ep-42f,
     0x1.283cf4p-58f, 0x1.ae8e06p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fdf13ep-63f,
     0.0f, 0x1.43ffe2p-67f, 0.0f, 0.0f, 0x1.b85ddap-124f, 0x1.14e746p-29f, 0.0f,
     0x1.d2bfa8p-38f, 0.0f, 0.0f, 0.0f, 0x1.a18edp-71f, 0x1.d93786p-93f, 0.0f,
     0x1.a347ccp-4f, 0.0f, 0x1.48147p-49f, 0x1.919e68p-79f, 0x1.961a3ap-67f,
     0x1.ffdb26p-95f, 0.0f, 0x1.67218cp-50f, 0x1.b44486p-8f, 0.0f, 0x1.32fcecp-111f,
     0x1.bae2dp-94f, 0x1.80b52ep-116f, 0.0f, 0.0f, 0.0f, 0x1.dbdc08p-96f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.8b0378p-92f, 0.0f, 0.0f, 0x1.6ad0cp-50f, 0x1.6a9bc6p-46f,
     0.0f, 0.0f, 0x1.4b5bfep-88f, 0.0f, 0x1.12b79p-91f, 0x1.91914ap-79f, 0.0f,
     0x1.69921ep-7f, 0.0f, 0x1.8d4bb6p-101f, 0x1.c6e41p-115f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1e1e5ap-5f, 0.0f, 0.0f, 0x1.df542cp-19f, 0x1.c55d9p-8f, 0.0f,
     0.0f, 0x1.7ac0ccp-74f, 0.0f, 0.0f, 0x1.fffc42p-34f, 0.0f, 0x1.162a76p-68f,
     0x1.615acep-102f, 0x1.075e2ap-86f, 0x1.9b21bap-104f, 0x1.9b4ba4p-44f, 0.0f,
     0x1.6bbcdep-47f, 0x1.ae778p-117f, 0x1.82d92ep-12f, 0x1.71ad6ep-70f, 0.0f,
     0x1.ae9b78p-111f, 0x1.b9cb48p-56f, 0.0f, 0x1.b97c4ap-96f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.dcaedp-36f, 0.0f, 0x1.86486cp-21f, 0x1.3fd974p-30f, 0x1.42d3cep-11f,
     0x1.4092a2p-126f, 0x1.b89052p-114f, 0.0f, 0x1.089d3p-39f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f9707ap-65f, 0x1.8135fcp-87f, 0x1.59b438p-93f, 0.0f, 0x1.c444d8p-101f, 0.0f,
     0x1.6ca38ap-101f, 0x1.0f5c22p-72f, 0.0f, 0x1.5d44eap-118f, 0x1.c605cp-99f,
     0x1.597fbep-113f, 0x1.a7d2aap-40f, 0.0f, 0.0f, 0x1.4feb32p-66f, 0x1.ba87bap-22f,
     0.0f, 0x1.5aae9p-65f, 0.0f, 0x1.73df12p-40f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1067b8p-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.aa212p-80f, 0.0f, 0x1p0f,
     0x1.896612p-57f, 0.0f, 0.0f, 0x1.711952p-47f, 0x1.8e94ep-57f, 0.0f, 0.0f,
     0x1.aa78fp-18f, 0.0f, 0x1.b28edcp-123f, 0.0f, 0x1.68d7p-27f, 0x1.d89578p-36f,
     0.0f, 0x1.a97424p-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b55a4p-30f, 0.0f,
     0x1.82814ap-82f, 0x1.ff151cp-60f, 0x1.f6c6dap-8f, 0.0f, 0x1.7197acp-21f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a08d0ep-70f, 0x1.a8ebcp-100f, 0.0f, 0.0f, 0.0f,
     0x1.ae5038p-121f, 0x1.7e654p-61f, 0.0f, 0x1.3b107ep-119f, 0x1.59f722p-17f, 0.0f,
     0.0f, 0x1.710fbp-57f, 0x1.05ce86p-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.09f076p-112f,
     0x1.0ba716p-118f, 0.0f, 0.0f, 0.0f, 0x1.7575c6p-20f, 0.0f, 0x1.de6a0ap-96f,
     0x1.b6ea3cp-86f, 0x1.85734ep-49f, 0x1.3e56dap-57f, 0.0f, 0x1.5c4f26p-22f,
     0x1.bf8316p-41f, 0x1.e96718p-51f, 0.0f, 0x1.13cadcp-2f, 0x1.4ca41p-93f,
     0x1.3aefbcp-75f, 0.0f, 0x1.7cd73cp-69f, 0x1.d8cc8p-36f, 0.0f, 0x1.d94d56p-69f,
     0x1.86dd36p-78f, 0.0f, 0.0f, 0.0f, 0x1.5cf9a2p-126f, 0.0f, 0x1.c98c78p-15f,
     0x1.f5f1dap-75f, 0.0f, 0.0f, 0x1.589ce8p-102f, 0.0f, 0.0f, 0x1.0f6ee6p-63f, 0.0f,
     0x1.53a39cp-59f, 0.0f, 0.0f, 0x1.4a103ap-126f, 0.0f, 0.0f, 0.0f, 0x1.260286p-33f,
     0.0f, 0.0f, 0x1.a62764p-68f, 0.0f, 0.0f, 0.0f, 0x1.f509bcp-122f, 0x1.720c84p-85f,
     0x1.75de8cp-65f, 0x1.1bc3c2p-52f, 0x1.7c2b28p-54f, 0x1.c00776p-77f, 0.0f,
     0x1.eb9d1ep-45f, 0.0f, 0x1.a5b456p-99f, 0.0f, 0x1.266384p-42f, 0.0f,
     0x1.01660ap-30f, 0.0f, 0x1.2a594ap-19f, 0x1.dc49acp-114f, 0.0f, 0.0f,
     0x1.1ea4d2p-10f, 0x1.f645c2p-62f, 0.0f, 0x1.f973cp-51f, 0x1.e2709ap-17f,
     0x1.010194p-83f, 0x1p0f, 0.0f, 0x1.68b396p-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.df6d6cp-124f, 0x1.5292bp-3f, 0x1.dd5ca2p-66f, 0.0f,
     0.0f, 0.0f, 0x1.475878p-11f, 0x1.bbfdp-72f, 0.0f, 0.0f, 0x1.c45d3ap-34f, 0.0f,
     0x1.110ac8p-3f, 0x1.0ae754p-34f, 0x1.d88fa4p-2f, 0x1.a14848p-105f,
     0x1.184fbep-21f, 0.0f, 0.0f, 0.0f, 0x1.840152p-37f, 0x1.b976d8p-29f,
     0x1.1f86acp-65f, 0.0f, 0x1.1867d6p-1f, 0x1.3bac7ep-33f, 0x1.ea2464p-13f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.2007b4p-31f, 0x1.4d127ep-53f, 0.0f, 0x1.dc30f4p-30f,
     0x1.2ec772p-55f, 0x1.0687p-77f, 0x1.498a04p-76f, 0x1.751dc2p-112f, 0.0f, 0.0f,
     0x1.dc6bd4p-101f, 0.0f, 0.0f, 0.0f, 0x1.d5defep-39f, 0x1.69b17cp-2f,
     0x1.176428p-93f, 0x1.0272cep-72f, 0x1.4ef5eep-77f, 0.0f, 0.0f, 0.0f,
     0x1.b3d9fp-6f, 0.0f, 0x1.960724p-43f, 0.0f, 0x1.d302cp-48f, 0x1.0d35ap-30f, 0.0f,
     0x1.70750cp-118f, 0x1.e6e7c8p-33f, 0x1.599afp-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.15204p-22f, 0.0f, 0x1.a81cbep-43f, 0x1.767426p-13f, 0x1.52fd2cp-39f,
     0x1.9a3e38p-31f, 0.0f, 0.0f, 0x1.9dabd4p-72f, 0.0f, 0.0f, 0x1.538ccap-37f,
     0x1.d3cf36p-63f, 0.0f, 0x1.c29b12p-43f, 0x1.5df304p-39f, 0x1.6877dp-7f,
     0x1.0875bap-64f, 0.0f, 0x1.8c9fd6p-8f, 0x1.9dd81ep-106f, 0.0f, 0x1.fcc144p-52f,
     0.0f, 0x1.2e2bp-69f, 0x1.8cb8ep-67f, 0.0f, 0x1.775e26p-60f, 0.0f, 0.0f,
     0x1.8a908p-32f, 0.0f, 0x1.a873e6p-114f, 0x1.488c3ep-66f, 0.0f, 0x1.362f1cp-62f,
     0x1.02c98cp-30f, 0.0f, 0.0f, 0x1.55b5d8p-26f, 0.0f, 0x1.7a106p-48f, 0.0f,
     0x1.606654p-95f, 0x1.463e08p-39f, 0x1.73534p-70f, 0x1.89847ap-47f, 0.0f,
     0x1.fe9eap-21f, 0x1.c9571cp-68f, 0x1.2613f8p-35f, 0x1.47c11p-30f, 0.0f,
     0x1.f75c84p-41f, 0x1.03ee9p-46f, 0x1.5cf97ap-14f, 0.0f, 0x1.152dd8p-119f, 0.0f,
     0x1.cd17eap-22f, 0.0f, 0.0f, 0x1.161b48p-115f, 0x1.82a0a6p-81f, 0x1.448ep-34f,
     0.0f, 0.0f, 0.0f, 0x1.bfc88p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.da034ap-32f,
     0x1.465be4p-2f, 0.0f, 0.0f, 0x1.f89a9p-57f, 0x1.e95c26p-13f, 0x1.9bde9cp-115f,
     0.0f, 0x1.7a0a1p-53f, 0.0f, 0.0f, 0.0f, 0x1.038064p-66f, 0x1.e0b9d8p-5f, 0.0f,
     0x1.fd66f2p-19f, 0x1.ef9b7ap-90f, 0.0f, 0x1.6c92a8p-74f, 0x1.afdd36p-112f, 0.0f,
     0.0f, 0.0f, 0x1.7e1b6p-85f, 0x1.c2031ap-10f, 0x1.44468cp-99f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.4e3eeep-101f, 0.0f, 0.0f, 0.0f, 0x1.0820fap-49f, 0x1.6330b2p-23f, 0.0f,
     0.0f, 0.0f, 0x1.6df1a2p-10f, 0.0f, 0.0f, 0x1.789624p-12f, 0x1.c800f6p-72f,
     0x1.efa3fp-115f, 0x1.0ecb6p-118f, 0.0f, 0x1.aa28c2p-28f, 0x1.6f628ap-62f, 0.0f,
     0.0f, 0.0f, 0x1.d6b6d2p-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cda542p-68f, 0.0f,
     0x1.45c432p-7f, 0x1.9b3e9cp-59f, 0.0f, 0x1.8557dap-113f, 0x1.074884p-83f, 0.0f,
     0x1.9e2506p-123f, 0x1.a1820ep-122f, 0.0f, 0x1.d19974p-99f, 0.0f, 0.0f, 0.0f,
     0x1.b7bc32p-79f, 0.0f, 0x1.db1214p-2f, 0x1.2aa982p-95f, 0x1.837eap-84f, 0.0f,
     0x1.b529fp-98f, 0x1.3463d2p-16f, 0x1.09e842p-21f, 0x1.b511f6p-59f, 0.0f,
     0x1.6a3f18p-105f, 0.0f, 0x1.5abcbep-97f, 0.0f, 0.0f, 0x1.e8f79p-69f,
     0x1.3c7bbcp-80f, 0.0f, 0x1.3c03b4p-101f, 0x1.533c66p-101f, 0x1.23f59p-53f, 0.0f,
     0x1.28abe4p-124f, 0x1.72587ap-49f, 0x1.ebb108p-24f, 0x1.a681d2p-99f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.9322f6p-117f, 0.0f, 0.0f, 0x1.2ad692p-121f, 0x1.82370cp-66f,
     0x1.dda734p-67f, 0x1.5aeb8cp-83f, 0.0f, 0.0f, 0x1.7fffcp-64f, 0x1.1ed212p-84f,
     0.0f, 0x1.361468p-3f, 0x1.70f54cp-30f, 0x1.409cbap-110f, 0.0f, 0.0f,
     0x1.ccdb48p-21f, 0x1.c4b6bap-22f, 0x1.3248ap-66f, 0x1.8ce272p-112f,
     0x1.38fa24p-7f, 0.0f, 0x1.65aa7ap-98f, 0x1.372b4cp-26f, 0.0f, 0.0f, 0.0f,
     0x1.d0f748p-3f, 0x1.69edeap-43f, 0x1.e23ca2p-77f, 0x1.54cc66p-110f, 0.0f, 0.0f,
     0.0f, 0x1.21c806p-71f, 0.0f, 0.0f, 0.0f, 0x1.384f04p-36f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a82c6ep-119f, 0.0f, 0.0f, 0x1.ab84bep-126f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.bff9p-105f, 0.0f, 0.0f, 0x1.1b0d2ep-5f,
     0x1.94f24p-120f, 0.0f, 0x1.be2ae2p-85f, 0.0f, 0x1.a1d7fp-120f, 0x1.0b032ep-49f,
     0x1.1f631p-5f, 0x1.f0f144p-23f, 0.0f, 0.0f, 0.0f, 0x1.ebe28cp-9f,
     0x1.5c0474p-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c16c76p-83f, 0.0f, 0.0f,
     0.0f, 0x1.a35cfcp-75f, 0.0f, 0x1.31ac5ep-53f, 0x1.cc62fep-60f, 0x1.fac092p-65f,
     0.0f, 0.0f, 0.0f, 0x1.817016p-44f, 0.0f, 0x1.43239p-100f, 0.0f, 0x1.1d4036p-85f,
     0.0f, 0x1.f83eep-92f, 0.0f, 0x1.fe0e7p-36f, 0x1.fa9de6p-86f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.86c32ap-42f, 0x1.dfbf8cp-30f, 0x1.92cc54p-42f, 0x1.2ce54ep-73f,
     0.0f, 0x1.177282p-22f, 0.0f, 0x1.a78a8ep-63f, 0x1.22ca62p-109f, 0x1.99d9a2p-39f,
     0.0f, 0x1.ea266p-115f, 0.0f, 0.0f, 0x1.0a91eap-46f, 0x1.e4c89ep-52f, 0.0f,
     0x1.20c084p-98f, 0x1.517122p-44f, 0.0f, 0x1.b7ecbcp-81f, 0.0f, 0.0f,
     0x1.27c9bep-88f, 0.0f, 0x1.ef488p-16f, 0x1.4dc582p-13f, 0.0f, 0x1.fd031p-2f,
     0x1.93ad4cp-100f, 0x1.42d2fap-48f, 0x1.170c7ep-93f, 0.0f, 0x1.8b335ep-17f, 0.0f,
     0.0f, 0.0f, 0x1.b1ceb2p-15f, 0x1.528322p-35f, 0x1.4660f8p-42f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.24831p-69f, 0x1.b085dp-99f, 0x1.03fe1p-1f, 0.0f,
     0x1.b9b91ep-83f, 0.0f, 0x1.548bd4p-5f, 0.0f, 0.0f, 0.0f, 0x1.225af8p-42f, 0.0f,
     0x1.0019fep-85f, 0x1.b75882p-108f, 0x1.2f4b16p-85f, 0.0f, 0.0f, 0x1.2bf592p-8f,
     0.0f, 0.0f, 0x1.e7769ap-115f, 0x1.93b0c2p-11f, 0x1.be33bcp-32f, 0.0f, 0.0f,
     0x1.0fff88p-56f, 0.0f, 0x1.11f58cp-110f, 0x1.4daf86p-3f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e67ecep-121f, 0x1.5c3c96p-111f, 0.0f, 0.0f, 0x1.2cede6p-101f,
     0x1.796888p-66f, 0x1.e11acp-122f, 0.0f, 0.0f, 0x1.3054a8p-122f, 0x1.7f92dp-18f,
     0x1.cb0852p-102f, 0.0f, 0x1.7721d2p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.51615cp-43f, 0.0f, 0.0f, 0.0f, 0x1.d8c6ecp-56f, 0.0f, 0x1.a2e4b2p-119f,
     0x1.d80cecp-91f, 0x1.274db8p-10f, 0.0f, 0.0f, 0x1.4425bep-102f, 0x1.01e716p-108f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.684866p-98f, 0x1.ac7p-69f, 0.0f, 0.0f,
     0x1.cbb30ep-71f, 0.0f, 0x1.75ab66p-76f, 0x1.b73ap-101f, 0x1.baa884p-31f,
     0x1.3f70e2p-33f, 0x1.50ec72p-29f, 0x1.ce6ed4p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1dfbb4p-30f, 0x1.9a1254p-47f, 0x1.341758p-102f, 0x1.d48f76p-80f, 0.0f,
     0x1.b801dep-50f, 0x1.cee592p-81f, 0.0f, 0x1.33f5b6p-5f, 0.0f, 0x1.0f1c7cp-87f,
     0.0f, 0.0f, 0.0f, 0x1.f9b18ap-29f, 0.0f, 0.0f, 0x1.27a2a8p-111f, 0.0f, 0.0f,
     0.0f, 0x1.5e5ae4p-88f, 0x1.4c7724p-53f, 0.0f, 0.0f, 0x1.00c908p-114f,
     0x1.0e1b06p-69f, 0.0f, 0.0f, 0x1.a2cf58p-8f, 0x1.73d184p-119f, 0.0f,
     0x1.4fa258p-52f, 0.0f, 0x1.f7de3ep-73f, 0x1.c8145ap-97f, 0.0f, 0x1.312918p-4f,
     0x1.085c0ap-102f, 0.0f, 0.0f, 0.0f, 0x1.d53cdep-126f, 0x1.b5fc12p-28f, 0.0f,
     0x1.ce8926p-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.393d7p-114f, 0x1.64a156p-54f,
     0x1.9d0fd6p-39f, 0x1.6d4682p-35f, 0x1.2fb338p-26f, 0x1.074d94p-99f, 0.0f, 0.0f,
     0.0f, 0x1.48c412p-17f, 0x1.7fab96p-97f, 0.0f, 0x1.e10b58p-125f, 0x1.052e3cp-51f,
     0x1.d0b3dep-115f, 0x1.86465ep-45f, 0x1.22cce6p-26f, 0x1.0d8a26p-3f, 0.0f,
     0x1.e716acp-48f, 0.0f, 0.0f, 0x1.fd7a74p-42f, 0.0f, 0x1.c7679ep-41f,
     0x1.97038ap-48f, 0.0f, 0.0f, 0x1.1617ccp-88f, 0x1.238cacp-23f, 0.0f,
     0x1.aeada8p-75f, 0.0f, 0.0f, 0x1.0d51e8p-9f, 0.0f, 0x1.c7aa2ep-17f, 0.0f, 0.0f,
     0.0f, 0x1.bcf3d8p-49f, 0x1.19ca4ep-85f, 0x1.bdc5a8p-107f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2dabcp-77f, 0x1.460818p-64f, 0x1.11bb3cp-11f, 0.0f, 0.0f, 0x1.f0da1ap-126f,
     0.0f, 0x1.0898a2p-8f, 0x1.d98074p-56f, 0x1.fdcf56p-46f, 0.0f, 0x1.ebfa32p-61f,
     0x1.753bc8p-52f
};
static const float external_bench_wrapper_input_table_arg1[1004]  = {
     0x1.8ea564p-68f, 0x1.1b4428p-122f, 0x1.992586p-126f, 0.0f, 0x1.199e82p-60f,
     0x1.c09f2ap-40f, 0.0f, 0.0f, 0x1.d527dp-29f, 0.0f, 0.0f, 0x1.594cc4p-49f,
     0x1.ac272cp-104f, 0x1.b918a8p-61f, 0.0f, 0.0f, 0.0f, 0x1.9a68bep-23f, 0.0f, 0.0f,
     0x1.634b4ep-45f, 0x1.4b210cp-92f, 0.0f, 0x1.a70984p-13f, 0x1.b06ecp-47f,
     0x1.35f388p-39f, 0x1.bfa7d2p-115f, 0x1.6827ep-9f, 0.0f, 0x1.c10c98p-59f,
     0x1.a3ac32p-54f, 0x1.93bf16p-34f, 0x1.2781b2p-109f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6b137ep-109f, 0.0f, 0.0f, 0x1.c9390ep-4f, 0.0f, 0x1p0f, 0.0f, 0x1.d42cb2p-4f,
     0x1.628972p-42f, 0.0f, 0.0f, 0x1.6c7a3cp-116f, 0.0f, 0.0f, 0x1.65fe3cp-3f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6f4632p-67f, 0x1.d2dbb4p-85f, 0x1.5d7e9cp-56f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6cb552p-113f, 0.0f, 0.0f, 0x1.93685ap-23f,
     0x1.faaf9p-23f, 0x1.dcb59cp-61f, 0.0f, 0.0f, 0.0f, 0x1.66a00ap-9f,
     0x1.cd1174p-33f, 0.0f, 0x1.958e28p-29f, 0x1.666a94p-72f, 0x1.649992p-56f, 0.0f,
     0.0f, 0x1.166e28p-58f, 0.0f, 0x1.8080dcp-119f, 0.0f, 0.0f, 0.0f, 0x1.2861aep-26f,
     0.0f, 0x1.b4f456p-112f, 0.0f, 0.0f, 0x1.06d492p-28f, 0x1.9c5da4p-2f,
     0x1.43b9b2p-11f, 0x1.7b4f3p-113f, 0.0f, 0.0f, 0.0f, 0x1.5d121cp-57f, 0.0f,
     0x1.971702p-73f, 0x1.c52bd6p-102f, 0x1.9ab7d2p-41f, 0.0f, 0x1.f797e2p-24f, 0.0f,
     0x1.6fa10ep-3f, 0.0f, 0.0f, 0x1.9aeb0ep-20f, 0x1.55b184p-13f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4afff6p-105f, 0.0f, 0.0f, 0x1.ff986cp-120f, 0.0f,
     0x1.f9f9f6p-98f, 0.0f, 0x1.bb7618p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8a79dp-22f,
     0.0f, 0x1.f135e8p-117f, 0x1.c72d3p-83f, 0.0f, 0.0f, 0x1.39056ep-17f,
     0x1.b6bc4cp-60f, 0.0f, 0x1.85a91ep-124f, 0.0f, 0.0f, 0x1.077308p-44f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9274bap-50f, 0x1.13d886p-76f, 0x1.7ea6ep-87f,
     0x1.d82e2p-84f, 0x1.0b2eb8p-34f, 0.0f, 0.0f, 0x1.ff0fb6p-81f, 0x1.a12292p-69f,
     0x1.cca67cp-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.beb3fep-94f,
     0x1.3e6c3ep-46f, 0x1.98230ap-14f, 0.0f, 0x1.3693a8p-32f, 0.0f, 0.0f,
     0x1.300b64p-63f, 0x1.072f02p-26f, 0.0f, 0x1.d0751p-21f, 0x1.d97ff8p-119f, 0.0f,
     0x1.199c74p-110f, 0x1.e43da4p-42f, 0x1.b3c8bap-50f, 0x1.0b7cb4p-77f, 0.0f,
     0x1.337e26p-96f, 0.0f, 0x1.af703ep-77f, 0x1.c0cb66p-20f, 0.0f, 0x1.6d22a6p-97f,
     0.0f, 0x1.aa8b76p-12f, 0x1.121b6ep-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8b8422p-71f,
     0x1.84746p-106f, 0.0f, 0.0f, 0x1.0360dap-108f, 0x1.0d1d72p-113f, 0.0f, 0.0f,
     0.0f, 0x1.d34d88p-111f, 0x1.ff64c4p-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2f9bap-113f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1a135cp-55f, 0x1.5123f2p-75f,
     0x1.f98eeep-54f, 0x1.17cc64p-79f, 0.0f, 0x1.e12452p-49f, 0x1.02411cp-100f,
     0x1.c21b22p-118f, 0.0f, 0x1.fa968cp-62f, 0x1.45186p-3f, 0x1.0567c2p-69f,
     0x1.14edcap-1f, 0x1.6de22cp-58f, 0x1.a47524p-91f, 0x1.6faa8ap-22f, 0.0f,
     0x1.a28998p-41f, 0x1.19ab18p-53f, 0.0f, 0.0f, 0x1.802e3p-122f, 0x1.fb9f44p-108f,
     0.0f, 0x1.d23ad8p-20f, 0x1.701318p-102f, 0x1.ff6616p-1f, 0.0f, 0.0f, 0.0f,
     0x1.813f8ep-4f, 0.0f, 0.0f, 0x1.01b892p-115f, 0x1.5b8024p-22f, 0x1.2dfba4p-100f,
     0x1.18a314p-28f, 0x1.6255dp-63f, 0.0f, 0x1.d60d82p-113f, 0x1.ca477ep-82f, 0.0f,
     0.0f, 0.0f, 0x1.e8eccp-86f, 0.0f, 0x1.15c5d6p-67f, 0.0f, 0.0f, 0x1.7ce494p-93f,
     0.0f, 0x1.51ae04p-98f, 0x1.ae221p-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.6388d4p-87f, 0.0f, 0x1.860aaap-53f, 0x1.e7d39p-64f, 0.0f,
     0x1.973058p-8f, 0.0f, 0.0f, 0.0f, 0x1.d347dcp-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1266ccp-111f, 0x1.a0631ep-52f, 0.0f, 0x1.2c561cp-28f, 0x1.2899acp-76f,
     0x1.e85a12p-96f, 0.0f, 0x1.afcf08p-92f, 0.0f, 0x1.fb4a86p-98f, 0.0f,
     0x1.998478p-74f, 0x1.1981c4p-85f, 0x1.737fdp-19f, 0x1.b262dep-117f,
     0x1.6f1daep-107f, 0x1.424156p-68f, 0.0f, 0x1.6fc488p-21f, 0.0f, 0x1.b8247p-57f,
     0.0f, 0.0f, 0.0f, 0x1.f90b6p-60f, 0.0f, 0x1.ae4e3cp-117f, 0.0f, 0x1.2c6be8p-58f,
     0.0f, 0x1.75d5dp-16f, 0.0f, 0.0f, 0x1.eb52eap-67f, 0.0f, 0.0f, 0x1.dda1d6p-38f,
     0.0f, 0x1.abecep-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fe0ec8p-69f, 0.0f, 0.0f, 0.0f,
     0x1.496234p-80f, 0x1.2e3cf2p-111f, 0x1.11f6b6p-126f, 0x1.6c7feap-86f,
     0x1.f724d4p-53f, 0.0f, 0.0f, 0.0f, 0x1.c72d3cp-29f, 0x1.13f208p-67f, 0.0f, 0.0f,
     0x1.4be342p-31f, 0x1.017734p-122f, 0.0f, 0x1.83618cp-30f, 0x1.1cc4ep-45f,
     0x1.7904b4p-116f, 0x1.ab881ap-5f, 0x1.6fbbp-88f, 0x1.86750ap-40f, 0.0f, 0.0f,
     0x1.56805cp-97f, 0x1.dbd9f6p-36f, 0x1.bdf56cp-1f, 0.0f, 0x1.9dd872p-87f,
     0x1.3cd446p-81f, 0x1.8b80aap-52f, 0.0f, 0x1.2b2dbep-125f, 0x1.86fed2p-73f, 0.0f,
     0.0f, 0x1.dfe2ccp-29f, 0x1.82c0e2p-13f, 0.0f, 0x1.9195f2p-98f, 0x1.16cdcp-23f,
     0.0f, 0x1.26fdeap-77f, 0x1.5b8e4ap-101f, 0.0f, 0x1.df5aacp-102f, 0x1.123d88p-25f,
     0.0f, 0x1.5de894p-56f, 0.0f, 0x1.6cc216p-81f, 0.0f, 0x1.cd3628p-106f, 0.0f, 0.0f,
     0x1.97699p-36f, 0.0f, 0.0f, 0x1.7244ecp-90f, 0x1.bb7f1ap-66f, 0.0f, 0.0f, 0.0f,
     0x1.03bdbap-60f, 0x1.95b6ccp-85f, 0x1.2461a2p-77f, 0x1.ca5c2p-31f,
     0x1.8842ap-109f, 0.0f, 0.0f, 0.0f, 0x1.577d92p-82f, 0.0f, 0x1.ed5deap-89f,
     0x1.acb288p-84f, 0.0f, 0x1.bbebap-33f, 0x1.bfee74p-86f, 0x1.823906p-116f, 0.0f,
     0.0f, 0x1.76a488p-93f, 0.0f, 0x1.feef2ap-84f, 0x1.53330ep-7f, 0.0f,
     0x1.1834fcp-91f, 0.0f, 0.0f, 0.0f, 0x1.6c8888p-72f, 0.0f, 0.0f, 0.0f,
     0x1.2da058p-52f, 0x1.01670ap-31f, 0x1.71aaeap-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.92dbdcp-82f, 0x1.c99784p-25f, 0x1.ceb67cp-67f, 0x1.6545ecp-110f, 0.0f,
     0x1.3bda32p-59f, 0.0f, 0x1.3fdedcp-4f, 0.0f, 0x1.b7b7acp-66f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.db1c2p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.32eb8cp-118f,
     0x1.87ee0ap-126f, 0x1.1c91c2p-108f, 0x1.0bc21ep-99f, 0x1.bb5da2p-68f,
     0x1.7dddc2p-76f, 0.0f, 0x1.fbfedap-116f, 0x1.9682eap-64f, 0x1.d342a8p-48f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.82f14ep-2f, 0.0f, 0x1.29bb44p-60f, 0.0f,
     0x1.4908dap-126f, 0.0f, 0.0f, 0.0f, 0x1.2e39cap-31f, 0x1.c145acp-123f,
     0x1.45476ep-7f, 0.0f, 0x1.9437d2p-92f, 0.0f, 0.0f, 0.0f, 0x1.5cb43ep-6f,
     0x1.7ccc62p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.805f36p-4f, 0x1.2d1e82p-34f,
     0x1.2731a4p-110f, 0x1.f595fap-51f, 0x1.128a98p-100f, 0.0f, 0.0f, 0.0f,
     0x1.0a812ep-123f, 0x1.498112p-88f, 0.0f, 0.0f, 0x1.ff953cp-47f, 0x1.9ce692p-72f,
     0x1.a64576p-96f, 0x1.f789fp-103f, 0x1.257b7cp-14f, 0.0f, 0x1.866df6p-21f, 0.0f,
     0.0f, 0x1.6cb472p-50f, 0.0f, 0.0f, 0x1.7eef2ep-11f, 0.0f, 0x1.3816fep-3f, 0.0f,
     0x1.0ae0fap-49f, 0x1.7c65aap-126f, 0.0f, 0.0f, 0x1.0bb79p-22f, 0.0f, 0.0f, 0.0f,
     0x1.7e048ep-91f, 0.0f, 0x1.a6a87ep-14f, 0x1.718da4p-56f, 0x1.99521ap-61f,
     0x1.28125ap-64f, 0.0f, 0x1.c101e4p-22f, 0.0f, 0.0f, 0.0f, 0x1.ceda2ap-102f, 0.0f,
     0x1.af4cf6p-12f, 0.0f, 0x1.34a272p-65f, 0x1.3b3e06p-65f, 0x1.01e8e2p-94f, 0.0f,
     0.0f, 0x1.d7369ap-87f, 0x1.7f68ccp-88f, 0.0f, 0x1.add37p-41f, 0.0f,
     0x1.4b76ccp-20f, 0x1.cd624ep-13f, 0x1.7bbd36p-107f, 0.0f, 0x1.5774a4p-32f,
     0x1.628af6p-18f, 0x1.00662p-94f, 0.0f, 0x1.5d3a02p-86f, 0.0f, 0x1.b23502p-33f,
     0.0f, 0x1.db93d2p-80f, 0x1.fbc1fcp-107f, 0x1.94a274p-29f, 0x1.bf5a72p-116f,
     0x1.f11fdcp-76f, 0x1.88e864p-87f, 0x1.6ea2a8p-53f, 0x1.d27524p-119f,
     0x1.cc230cp-89f, 0x1.9cdd8ap-85f, 0x1.c438c4p-43f, 0x1.7279aap-10f,
     0x1.c88cf8p-42f, 0x1.cd43ep-37f, 0.0f, 0.0f, 0x1.a71126p-4f, 0.0f,
     0x1.4e63bcp-91f, 0.0f, 0x1.1e5342p-4f, 0x1.9c4d0ep-88f, 0x1.e69156p-15f, 0.0f,
     0x1.20a2e6p-123f, 0.0f, 0.0f, 0x1.8fef5cp-25f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e4815ap-18f, 0.0f, 0x1.85720ap-105f, 0x1.765454p-85f, 0.0f, 0x1.3a2b2cp-109f,
     0x1.4318fcp-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a799b4p-103f, 0x1.2f93bcp-93f,
     0x1.175a36p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cbf2dp-34f, 0x1.f04a4ap-14f,
     0x1.4b873ep-56f, 0x1.f104ecp-110f, 0.0f, 0.0f, 0.0f, 0x1.34005ap-114f,
     0x1.3c0f1ap-124f, 0.0f, 0x1.e565cp-45f, 0x1.0d27eep-6f, 0.0f, 0x1.e4026ep-57f,
     0x1.8d7062p-122f, 0.0f, 0.0f, 0x1.2b24a8p-125f, 0x1.928f2ap-35f, 0.0f, 0.0f,
     0.0f, 0x1.d5d214p-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.28bcdep-56f, 0.0f,
     0x1.b64906p-125f, 0x1.0d46cap-15f, 0.0f, 0x1.a2534cp-47f, 0x1.0623ecp-35f, 0.0f,
     0.0f, 0.0f, 0x1.e24bdcp-2f, 0.0f, 0.0f, 0x1.970d5ap-93f, 0x1.71080ap-72f,
     0x1.bd919cp-110f, 0x1.68fd9ep-57f, 0.0f, 0x1.e5dfbp-95f, 0x1.9614bp-86f, 0.0f,
     0x1.4be6ecp-40f, 0.0f, 0x1.6cf37ap-59f, 0.0f, 0.0f, 0x1.1da51cp-37f, 0.0f,
     0x1.4f3864p-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ba41bep-119f, 0x1.d17ca6p-29f,
     0x1.b17dbap-46f, 0x1.bc6f8cp-109f, 0x1.10387ep-86f, 0.0f, 0x1.90fe5cp-121f, 0.0f,
     0x1.248cf6p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5ee466p-97f, 0x1.ee977ap-61f,
     0x1.6e9184p-18f, 0.0f, 0x1.1d23acp-45f, 0x1.827a4ap-56f, 0.0f, 0x1.d18286p-65f,
     0x1.f2bdf6p-11f, 0x1.6c483p-100f, 0x1.bdfb16p-75f, 0.0f, 0x1.d35e58p-108f,
     0x1.76db5ep-84f, 0.0f, 0x1.cd10eep-109f, 0.0f, 0x1.ef2bc8p-43f, 0x1.0c18f8p-73f,
     0.0f, 0x1.980a32p-17f, 0.0f, 0x1.5745ccp-19f, 0x1.65156ap-23f, 0x1.2c470ap-59f,
     0.0f, 0.0f, 0.0f, 0x1.66c51p-78f, 0.0f, 0.0f, 0x1.ff00fap-98f, 0x1.ab2accp-125f,
     0x1.20555p-115f, 0.0f, 0x1.a57164p-124f, 0.0f, 0.0f, 0x1.303188p-45f, 0.0f, 0.0f,
     0x1.c508f2p-2f, 0x1.4fd8f8p-88f, 0.0f, 0x1.843efep-22f, 0x1.6db8b6p-121f,
     0x1.fd795cp-97f, 0.0f, 0x1.1a4b4cp-20f, 0x1.440f6ap-11f, 0x1.a76e9cp-38f, 0.0f,
     0x1.e1901ep-72f, 0x1.5ac49ap-38f, 0x1.9ed84p-88f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6fa4e6p-61f, 0.0f, 0.0f, 0x1.1d644ap-52f, 0x1.adbcecp-107f, 0x1.990dc2p-114f,
     0.0f, 0.0f, 0x1.b41a96p-37f, 0.0f, 0.0f, 0x1.1b735cp-107f, 0x1.3336ccp-63f,
     0x1.993c1cp-76f, 0.0f, 0.0f, 0.0f, 0x1.8cb3eep-73f, 0x1.0b03bp-68f, 0.0f,
     0x1.03db0ap-108f, 0.0f, 0x1.b7075cp-122f, 0x1.3aeed4p-97f, 0.0f, 0.0f,
     0x1.f6b1ap-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6d2a78p-84f, 0.0f, 0x1.dbc6e4p-11f,
     0.0f, 0.0f, 0.0f, 0x1.461ca6p-39f, 0.0f, 0x1.e26fe2p-112f, 0x1.9b6594p-77f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f40916p-100f, 0x1.1b954ap-9f, 0.0f, 0.0f, 0x1.66377p-67f,
     0x1.8f905ap-44f, 0x1.c7531ap-33f, 0.0f, 0x1.0cab7cp-45f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.63dc2p-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.54b49p-8f,
     0x1.5d00eap-94f, 0.0f, 0x1.618a52p-45f, 0x1.129b38p-55f, 0x1.c6d22ap-13f,
     0x1.79553cp-99f, 0.0f, 0x1.f5052cp-76f, 0.0f, 0x1.7dcab6p-54f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.fdcd5cp-8f, 0.0f, 0.0f, 0x1.be15d8p-70f, 0.0f, 0.0f,
     0x1.4ed624p-49f, 0x1.7a1c3ap-80f, 0x1.738064p-29f, 0x1.f1e682p-81f,
     0x1.27fc46p-121f, 0.0f, 0.0f, 0.0f, 0x1.728234p-55f, 0.0f, 0.0f, 0.0f,
     0x1.0b112p-121f, 0.0f, 0x1.f8ef34p-123f, 0.0f, 0.0f, 0.0f, 0x1.9607d6p-33f,
     0x1.6defbap-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b0de4cp-116f, 0.0f, 0.0f,
     0x1.fae296p-107f, 0x1.639f04p-17f, 0.0f, 0.0f, 0x1.a294cap-8f, 0x1.b1a668p-59f,
     0x1.75b0bcp-104f, 0x1.68af42p-65f, 0x1.833306p-57f, 0.0f, 0.0f, 0.0f,
     0x1.7f8852p-48f, 0x1.b0f83ap-17f, 0.0f, 0x1.447536p-38f, 0.0f, 0.0f, 0.0f,
     0x1.833738p-87f, 0x1.9f3368p-13f, 0x1p0f, 0x1.e523cep-15f, 0x1.3ddcp-92f, 0.0f,
     0x1.5a1592p-20f, 0x1.92ef1cp-80f, 0.0f, 0.0f, 0x1.775f32p-30f, 0.0f,
     0x1.c5798ap-83f, 0.0f, 0.0f, 0x1.78f48p-43f, 0x1.c725e8p-49f, 0x1.8b0ccep-85f,
     0x1.bda2ap-16f, 0.0f, 0x1.b68786p-69f, 0x1.1db1bep-42f, 0x1.053f88p-56f, 0.0f,
     0x1.6f20bap-12f, 0x1.f0e8d8p-36f, 0.0f, 0x1.28ba18p-32f, 0x1.004bf6p-17f,
     0x1.4e4f7ep-61f, 0.0f, 0x1.4bbf36p-112f, 0x1.fb8ed4p-126f, 0x1.559434p-124f,
     0x1.69693cp-98f, 0.0f, 0x1.1d385ap-126f, 0.0f, 0x1.a94c44p-40f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.0bf3a2p-21f, 0.0f, 0.0f, 0x1.23e4d6p-88f, 0.0f,
     0x1.217d3ep-83f, 0x1.b3c5c8p-48f, 0x1.8975b4p-49f, 0x1.c0350ap-12f,
     0x1.2bf99ep-98f, 0x1.7ffbbap-118f, 0.0f, 0.0f, 0x1.e41a04p-113f, 0.0f, 0.0f,
     0x1.46dca6p-111f, 0x1.b5a3e6p-57f, 0.0f, 0x1.752c6ep-24f, 0x1.c68c78p-14f, 0.0f,
     0.0f, 0x1.927488p-121f, 0x1.d20122p-60f, 0.0f, 0.0f, 0x1.9bdfaap-80f,
     0x1.dd9b2ap-28f, 0x1.c1bedp-81f, 0x1.30d08cp-60f, 0.0f, 0x1.116ae8p-88f, 0.0f,
     0x1.192234p-90f, 0x1.029bfap-79f, 0.0f, 0.0f, 0x1.b3dc44p-79f, 0.0f,
     0x1.97ed1cp-63f, 0x1.1eeccep-120f, 0x1.4cdcecp-78f, 0.0f, 0x1.33be18p-113f, 0.0f,
     0x1.c7c62p-86f, 0x1.948b88p-10f, 0.0f, 0.0f, 0.0f, 0x1.a1f362p-44f,
     0x1.0fcfep-96f, 0.0f, 0x1.59fe66p-38f, 0.0f, 0x1.9e20eep-79f, 0.0f, 0.0f,
     0x1.e71d4p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.87bcc8p-34f, 0.0f, 0.0f, 0.0f, 0.0f
};
static const float external_bench_wrapper_input_table_arg2[1004]  = {
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.8fb4a6p-37f, 0x1.8c6a2p-96f, 0.0f, 0.0f,
     0x1.0aadb2p-100f, 0.0f, 0x1.c8c3dp-20f, 0.0f, 0.0f, 0x1.33bda2p-52f, 0.0f,
     0x1.e2b608p-16f, 0.0f, 0.0f, 0.0f, 0x1.272328p-102f, 0.0f, 0x1.77f94ep-113f,
     0.0f, 0x1.0ad63cp-15f, 0x1.885544p-17f, 0x1.67f514p-112f, 0.0f, 0.0f,
     0x1.db6472p-49f, 0x1.01a886p-58f, 0.0f, 0x1.e95d54p-107f, 0x1.cb2f2cp-28f,
     0x1.e0a846p-125f, 0x1.4094c8p-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.48b308p-40f, 0x1.aef72ap-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a891fcp-95f, 0.0f,
     0.0f, 0x1.7fb33ep-119f, 0.0f, 0x1.3b0708p-11f, 0.0f, 0x1.cfe6f4p-69f, 0.0f, 0.0f,
     0.0f, 0x1.6a461ep-125f, 0.0f, 0x1.3ca164p-80f, 0x1.19562ap-90f, 0.0f, 0.0f,
     0x1.af5baep-28f, 0.0f, 0.0f, 0x1.064d7cp-109f, 0.0f, 0.0f, 0.0f, 0x1.3a6a82p-69f,
     0x1.ea42d8p-60f, 0.0f, 0.0f, 0.0f, 0x1.7ea29ap-47f, 0x1.4b1e9p-66f,
     0x1.c5a724p-38f, 0.0f, 0.0f, 0x1.c681dep-30f, 0x1.1b6c68p-90f, 0.0f,
     0x1.8c7e6p-74f, 0x1.a7e582p-103f, 0x1.d72decp-110f, 0x1.feb204p-10f, 0.0f, 0.0f,
     0.0f, 0x1.a8b91ep-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b23d0cp-25f,
     0x1.9939eap-28f, 0.0f, 0.0f, 0.0f, 0x1.cc325p-118f, 0.0f, 0.0f, 0.0f,
     0x1.4f4ea6p-100f, 0x1.c8f1eap-53f, 0x1.fec23p-84f, 0x1.b60a84p-7f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.070ap-1f, 0x1.22e086p-91f, 0x1.fc9494p-116f, 0x1.bcab38p-125f,
     0x1.d45ebep-28f, 0.0f, 0x1.cd60ccp-46f, 0.0f, 0x1.6cdaf2p-41f, 0.0f,
     0x1.078036p-77f, 0.0f, 0.0f, 0x1.bf3896p-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d9ef5cp-69f, 0.0f, 0x1.ebd0b8p-114f, 0x1.1d38f4p-20f, 0x1.59c42ep-25f,
     0x1.d6cb66p-69f, 0x1.191bcp-92f, 0.0f, 0.0f, 0x1.49a5f6p-92f, 0x1.bc9a9p-74f,
     0.0f, 0x1.bff286p-85f, 0x1.3ebceep-80f, 0.0f, 0x1.c9cefp-32f, 0x1.7b7024p-5f,
     0.0f, 0x1.f6554ap-62f, 0x1.352e24p-72f, 0x1.adb90ap-21f, 0x1.c0e87p-84f, 0.0f,
     0.0f, 0.0f, 0x1.529d96p-70f, 0x1.76b2cep-27f, 0x1.e35b0cp-65f, 0.0f, 0.0f,
     0x1.f85fdcp-105f, 0x1.e6952p-75f, 0x1.2bb002p-7f, 0x1.c9b676p-81f, 0.0f, 0.0f,
     0.0f, 0x1.2ca5bep-40f, 0x1.d110d8p-40f, 0.0f, 0.0f, 0x1.3e0fdep-91f,
     0x1.56c92p-94f, 0.0f, 0.0f, 0x1.e38f9p-25f, 0.0f, 0x1.0653ap-2f, 0.0f,
     0x1.5f8156p-71f, 0.0f, 0.0f, 0x1.f4927ep-24f, 0x1.3765dp-14f, 0.0f, 0.0f, 0.0f,
     0x1.b150cep-50f, 0.0f, 0x1.02bcc4p-42f, 0.0f, 0.0f, 0.0f, 0x1.fb85b4p-100f,
     0x1.ae08cep-21f, 0.0f, 0x1.1d821cp-125f, 0x1.699e86p-41f, 0.0f, 0x1.63aa2ep-47f,
     0.0f, 0.0f, 0x1.e18fa4p-48f, 0x1.b773dap-59f, 0.0f, 0x1.087dfp-43f,
     0x1.3fc5b4p-46f, 0.0f, 0.0f, 0x1.fe250cp-124f, 0x1.b56888p-31f, 0.0f,
     0x1.e6be1ap-30f, 0.0f, 0x1.216ddp-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ecb396p-29f, 0.0f, 0.0f, 0x1.4463a2p-112f, 0.0f, 0.0f, 0.0f, 0x1.fa234cp-61f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c37456p-31f, 0x1.12c1b8p-45f, 0.0f, 0x1.7b0938p-72f,
     0x1.09650cp-12f, 0x1.e3c4ccp-16f, 0x1.242468p-109f, 0x1.3c07c8p-24f,
     0x1.c13daap-52f, 0.0f, 0x1.abe0dap-21f, 0x1.6f395ep-123f, 0.0f, 0x1.7a14bap-15f,
     0.0f, 0x1.70197cp-115f, 0x1.81dd22p-91f, 0x1.40653p-119f, 0.0f, 0.0f, 0.0f,
     0x1.31f54ap-91f, 0x1.b10daep-102f, 0x1.d4f404p-41f, 0.0f, 0.0f, 0x1.330d38p-124f,
     0x1.4b7d1ep-119f, 0x1.35a26p-3f, 0x1.d81afp-40f, 0x1.7f661p-73f, 0.0f, 0.0f,
     0x1.21b4a2p-58f, 0.0f, 0.0f, 0x1.6be30ep-10f, 0.0f, 0x1.b112dap-37f,
     0x1.8e6314p-102f, 0x1.450888p-93f, 0x1.454baap-85f, 0.0f, 0x1.3882b6p-12f, 0.0f,
     0x1.c9afaep-25f, 0x1.3e74cp-103f, 0x1.93e92p-60f, 0x1.c41214p-79f,
     0x1.b135fcp-50f, 0x1.c029e8p-82f, 0x1.fc2acp-94f, 0x1.67b914p-63f,
     0x1.27d78cp-110f, 0.0f, 0.0f, 0x1.d00254p-102f, 0.0f, 0x1.c45414p-19f,
     0x1.e3b7ccp-80f, 0.0f, 0x1.c36d08p-44f, 0.0f, 0.0f, 0x1.9c091cp-66f,
     0x1.f5de52p-92f, 0x1.14799ap-28f, 0.0f, 0x1.0b87bcp-51f, 0x1.81d336p-112f, 0.0f,
     0.0f, 0.0f, 0x1.5d4676p-58f, 0.0f, 0x1.d55aa4p-82f, 0x1.b795e6p-20f,
     0x1.d70ac6p-9f, 0.0f, 0x1.dce7acp-119f, 0.0f, 0.0f, 0x1.3f30d6p-114f,
     0x1.48bcd6p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e94974p-39f,
     0x1.c34c1ep-125f, 0x1.6e3afep-63f, 0x1.8071e2p-95f, 0x1.61b806p-40f,
     0x1.05bdf2p-120f, 0x1.1fb2f2p-13f, 0x1.d0659cp-104f, 0.0f, 0.0f, 0x1.e5b588p-38f,
     0x1.91e59cp-27f, 0.0f, 0.0f, 0x1.436594p-122f, 0x1.83393cp-50f, 0x1.b4287ap-73f,
     0.0f, 0x1.c557ecp-77f, 0x1.89dbfp-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7a0df4p-15f, 0x1.e0cb4p-46f, 0x1.22e93p-29f, 0x1.9d66d2p-79f, 0.0f,
     0x1.938a2ap-119f, 0.0f, 0.0f, 0.0f, 0x1.71495p-5f, 0.0f, 0.0f, 0.0f,
     0x1.d686cap-29f, 0x1.b55d12p-61f, 0.0f, 0x1.70e08cp-99f, 0x1.e3e6d4p-18f,
     0x1.e64e2ap-120f, 0.0f, 0.0f, 0x1.fcf8dcp-113f, 0x1.d867fp-33f, 0x1.ad55ccp-27f,
     0.0f, 0x1.e33c06p-75f, 0x1.f93104p-86f, 0.0f, 0x1.1c7ecap-41f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a110e4p-94f, 0x1.ddcd7p-114f, 0.0f, 0.0f, 0.0f, 0x1.25e44cp-78f,
     0.0f, 0x1.c3b7c2p-70f, 0.0f, 0x1.bf4908p-86f, 0.0f, 0x1.faebp-107f, 0.0f, 0.0f,
     0x1.ea2486p-37f, 0.0f, 0x1.d66e92p-15f, 0.0f, 0x1.5d3488p-76f, 0.0f,
     0x1.334e18p-53f, 0.0f, 0x1.4e9e0ep-3f, 0x1.85d846p-87f, 0x1.880c08p-36f, 0.0f,
     0.0f, 0x1.85093p-76f, 0x1.6eb634p-62f, 0x1.e0c80ep-17f, 0x1.af3242p-87f,
     0x1.aed512p-64f, 0.0f, 0.0f, 0x1.4ef074p-45f, 0.0f, 0x1.8bfcbap-51f, 0.0f, 0.0f,
     0x1.8d57ep-33f, 0x1.cc669cp-89f, 0x1.8c2a66p-44f, 0x1.e98cp-123f,
     0x1.48d14p-123f, 0x1.ade6b4p-40f, 0.0f, 0x1.2f070ap-5f, 0x1.a6c826p-24f,
     0x1.576b3p-101f, 0x1.ddf462p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9e1a82p-34f, 0.0f,
     0x1.093282p-110f, 0x1.4c627cp-27f, 0.0f, 0x1.7cb6acp-119f, 0.0f, 0x1.95755cp-1f,
     0x1.eacfeap-124f, 0.0f, 0x1.67e354p-19f, 0x1.59b5fep-100f, 0x1.4be42ep-73f,
     0x1.b6ff92p-54f, 0.0f, 0.0f, 0.0f, 0x1.a5eb08p-60f, 0x1.af78b2p-59f,
     0x1.bd52c2p-93f, 0.0f, 0x1.ecb0e4p-67f, 0x1.a3b1fep-75f, 0x1.4f3574p-38f, 0x1p0f,
     0x1.a206aep-113f, 0.0f, 0x1.23e166p-80f, 0x1.53987p-16f, 0x1.35058cp-33f, 0.0f,
     0.0f, 0.0f, 0x1.38524ep-35f, 0x1.ce459cp-26f, 0.0f, 0.0f, 0x1.ca500ep-40f, 0.0f,
     0.0f, 0.0f, 0x1.5677a8p-40f, 0.0f, 0.0f, 0.0f, 0x1.be22ap-72f, 0.0f,
     0x1.983bdep-47f, 0.0f, 0.0f, 0x1.106204p-5f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fadf9ap-78f, 0.0f, 0.0f, 0.0f, 0x1.9612cep-4f, 0.0f, 0x1.74548ap-92f, 0.0f,
     0x1.6e426ap-9f, 0.0f, 0x1.08245cp-76f, 0x1.daf1f2p-89f, 0.0f, 0.0f, 0.0f,
     0x1.7231aap-111f, 0x1.fad7aep-113f, 0.0f, 0x1.9a16c2p-10f, 0.0f, 0.0f,
     0x1.39ce5cp-63f, 0x1.5b0308p-28f, 0x1.7b6408p-93f, 0.0f, 0.0f, 0.0f,
     0x1.d6ef7p-19f, 0x1.df8092p-117f, 0.0f, 0x1.635d2ep-79f, 0x1.a14206p-30f, 0.0f,
     0x1.59e6acp-77f, 0x1.338c16p-34f, 0x1.7e8316p-70f, 0x1.bded84p-85f,
     0x1.3b9efap-18f, 0.0f, 0.0f, 0x1.614a08p-23f, 0x1.ecb548p-103f, 0.0f, 0.0f, 0.0f,
     0x1.876156p-18f, 0x1.acc2aep-91f, 0.0f, 0x1.513732p-54f, 0x1.bbfc2cp-61f, 0.0f,
     0.0f, 0.0f, 0x1.17d5b6p-36f, 0.0f, 0x1.2b28e6p-119f, 0.0f, 0x1.738a2cp-116f,
     0.0f, 0x1.96018p-25f, 0x1.b64c4ap-122f, 0.0f, 0x1.6b448ap-90f, 0x1.e17a98p-82f,
     0x1.9e15bcp-22f, 0x1.b03a08p-119f, 0x1.4d2674p-117f, 0.0f, 0x1.0fba14p-10f,
     0x1.97325ap-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.afb4e6p-66f, 0.0f, 0.0f, 0.0f,
     0x1.241562p-67f, 0x1.02f42p-10f, 0x1.5ee0eap-123f, 0x1.bfdb12p-28f,
     0x1.26b05ap-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bcd4dep-37f, 0x1.6e0abap-60f,
     0x1.9c109ep-8f, 0.0f, 0.0f, 0x1.b548f8p-43f, 0x1.58136p-25f, 0x1.8c4c82p-31f,
     0.0f, 0.0f, 0x1.0493a2p-110f, 0x1.b2f7cap-60f, 0.0f, 0.0f, 0x1.435772p-2f, 0.0f,
     0x1.e4f5bap-111f, 0.0f, 0x1.0d951cp-61f, 0.0f, 0.0f, 0x1.43514cp-18f,
     0x1.48defcp-84f, 0x1.905296p-53f, 0.0f, 0x1.6f40eap-10f, 0x1.a64c5ap-4f,
     0x1.d46d7cp-42f, 0.0f, 0.0f, 0x1.e0ddp-94f, 0.0f, 0.0f, 0x1.12f7e8p-30f,
     0x1.5a1d98p-68f, 0x1.dc5048p-20f, 0.0f, 0x1.e7b002p-58f, 0x1.688ad8p-113f,
     0x1p0f, 0x1.ac66aap-114f, 0x1.32fbb4p-3f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b4ad1ep-27f, 0.0f, 0x1.e271eep-20f, 0.0f, 0.0f, 0.0f, 0x1.6493acp-102f,
     0x1.3141f6p-27f, 0.0f, 0.0f, 0x1.13132ep-86f, 0x1.4798cep-42f, 0x1.1d4e2cp-68f,
     0.0f, 0.0f, 0.0f, 0x1.7eae3ep-9f, 0x1.232f3p-117f, 0x1.a6f1c2p-29f, 0.0f, 0.0f,
     0.0f, 0x1.ce79cep-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.080e22p-17f, 0.0f,
     0x1.c4ecb8p-55f, 0x1.eed2f6p-56f, 0.0f, 0x1.892394p-27f, 0.0f, 0x1.40d58p-71f,
     0x1.3ea306p-19f, 0x1.051c72p-26f, 0x1.49e5dap-8f, 0.0f, 0x1.0d0d7p-87f, 0.0f,
     0x1.e9a9cp-65f, 0.0f, 0.0f, 0x1.a874c8p-98f, 0.0f, 0.0f, 0x1.fc517ap-45f, 0.0f,
     0x1.35ab16p-95f, 0x1.efa64ep-34f, 0.0f, 0.0f, 0x1.ebed92p-39f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1p0f, 0x1.f7e006p-117f, 0x1.f81cf8p-69f, 0.0f, 0.0f, 0.0f,
     0x1.e640d6p-77f, 0.0f, 0.0f, 0x1.1db5aap-78f, 0.0f, 0x1.bc202cp-33f,
     0x1.3d64cep-9f, 0x1.5172e4p-63f, 0.0f, 0.0f, 0x1.1d611p-4f, 0x1.88cd9ap-25f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ebac9ep-96f, 0x1.868958p-58f, 0.0f,
     0x1.dbe106p-75f, 0.0f, 0x1.7812aap-42f, 0x1.20f6cap-92f, 0x1.9520e2p-29f, 0.0f,
     0x1.845cdap-53f, 0.0f, 0x1.e0204ep-32f, 0x1.600d7p-97f, 0.0f, 0.0f,
     0x1.61c47ap-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c383f6p-87f, 0x1p0f, 0.0f,
     0x1.3c5948p-94f, 0.0f, 0.0f, 0x1.d3b2dcp-60f, 0.0f, 0.0f, 0.0f, 0x1.a2d31p-14f,
     0.0f, 0.0f, 0x1.0704b2p-40f, 0x1.8d4a6ap-33f, 0x1.db1178p-100f, 0x1.1e834ap-35f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b9d3b6p-124f, 0x1.223566p-65f, 0.0f, 0.0f,
     0x1.7ef2b8p-84f, 0x1.8986eep-14f, 0x1.a0b428p-99f, 0x1.2abb1p-85f, 0.0f, 0.0f,
     0x1.390dbcp-30f, 0x1.7d0f38p-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8225fp-113f,
     0x1.53349p-94f, 0.0f, 0.0f, 0.0f, 0x1.4176bp-84f, 0x1.f0807cp-45f, 0.0f,
     0x1.98e8f2p-25f, 0x1.af3d94p-74f, 0.0f, 0.0f, 0x1.bdc6a4p-72f, 0.0f, 0.0f,
     0x1.7f17p-54f, 0x1.fd4dd4p-59f, 0.0f, 0.0f, 0.0f, 0x1.5a40bap-34f,
     0x1.43ec12p-35f, 0x1.e495f4p-15f, 0x1.96ab1p-51f, 0.0f, 0x1.bba15cp-46f,
     0x1.9d10cep-3f, 0x1.48a312p-98f, 0x1.31decep-103f, 0.0f, 0x1.d2e2a4p-2f,
     0x1.e0eedap-49f, 0x1.50c932p-14f, 0x1.97924p-16f, 0.0f, 0.0f, 0x1.36f28ep-115f,
     0.0f, 0x1.6d7102p-29f, 0x1.77069p-43f, 0x1.f1a8f6p-8f, 0x1.65f0ap-44f, 0.0f,
     0x1.baacbep-79f, 0.0f, 0x1.8fce5p-109f, 0x1.9e35dap-67f, 0x1.231936p-105f,
     0x1.79efep-74f, 0x1.a4e5f8p-76f, 0.0f, 0.0f, 0.0f, 0x1.748e4p-37f, 0.0f,
     0x1.c485dap-51f, 0x1.271824p-5f, 0.0f, 0x1.f0f378p-46f, 0.0f, 0.0f,
     0x1.cfddd4p-18f, 0.0f, 0.0f, 0x1.9bab28p-124f, 0.0f, 0x1.41e7d6p-36f,
     0x1.27eabcp-77f, 0.0f, 0x1.4aa416p-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.118e5p-94f, 0.0f, 0x1.16df9p-90f, 0.0f, 0.0f, 0.0f, 0x1.2de25ap-116f,
     0x1.94e294p-84f, 0.0f, 0x1.100208p-113f, 0.0f, 0x1.e420dcp-52f, 0x1.1925c4p-113f,
     0x1.58c062p-76f, 0.0f, 0.0f, 0x1.cd926ap-63f, 0x1.7c8ebap-21f, 0.0f, 0.0f,
     0x1.03059cp-16f, 0.0f, 0.0f, 0x1.acdf86p-110f, 0x1.5564c4p-116f, 0.0f,
     0x1.5f53c4p-110f, 0.0f, 0x1.69f42p-100f, 0.0f, 0.0f, 0.0f, 0x1.b375bp-36f, 0.0f,
     0.0f, 0.0f, 0x1.298492p-122f, 0x1.0d50fep-11f, 0.0f, 0x1.3cb55ap-63f, 0.0f,
     0x1.1264c4p-33f, 0.0f, 0.0f, 0x1.f01fa4p-85f, 0.0f, 0x1.ec8e54p-95f, 0.0f, 0.0f,
     0x1.c88364p-50f, 0x1.820034p-46f, 0.0f, 0x1.57b3bep-63f, 0.0f, 0.0f, 0.0f,
     0x1.8d6824p-64f, 0.0f, 0.0f, 0x1.512816p-3f, 0.0f, 0.0f, 0x1.65ab2cp-115f,
     0x1.e0a49ep-120f, 0.0f, 0.0f, 0x1.76509p-21f, 0.0f, 0x1.a92e5p-92f, 0.0f, 0.0f,
     0.0f, 0x1.a8c852p-35f, 0x1.bdaf06p-120f, 0.0f, 0x1.3102dcp-98f, 0x1.055832p-93f,
     0x1.9ba1dap-111f, 0x1.9c188cp-72f, 0x1.78f98ep-123f, 0.0f, 0x1.336248p-15f, 0.0f,
     0x1.a9a406p-14f, 0x1.a8b126p-117f, 0x1.8aa27ep-103f, 0.0f, 0.0f, 0.0f,
     0x1.7c2394p-89f, 0.0f, 0.0f, 0.0f, 0x1.0850cep-98f, 0.0f, 0.0f, 0x1.1bf812p-4f,
     0x1.565f3ep-73f, 0.0f, 0.0f, 0.0f, 0x1.b8b03ep-78f, 0.0f, 0x1.88ab5ap-41f,
     0x1.45cbfp-37f, 0.0f, 0x1.62f446p-24f, 0.0f, 0x1.8c9ea6p-49f, 0x1.4f336ep-6f,
     0x1.898904p-119f, 0x1.702d6cp-3f, 0x1.0b7588p-14f, 0x1.58735ap-64f, 0.0f, 0.0f,
     0.0f, 0x1.d9bb08p-116f, 0x1.5d3986p-96f, 0x1.ae5844p-92f, 0.0f, 0.0f, 0.0f,
     0x1.86f806p-24f, 0x1.45d352p-101f, 0x1.8397e8p-34f, 0.0f, 0x1.cd8036p-28f,
     0x1.6985ep-12f, 0.0f, 0.0f, 0x1.cc8a7ep-45f, 0.0f, 0x1.bd0074p-41f,
     0x1.f4b6bep-109f, 0.0f, 0.0f, 0x1.ce17dep-94f, 0x1.8ba9b6p-57f, 0x1.294c98p-118f,
     0.0f, 0x1.56a5dcp-29f, 0.0f, 0x1.d3c8e8p-9f, 0.0f, 0x1.1117fcp-101f,
     0x1.97077cp-106f, 0x1.d988e4p-32f, 0.0f, 0x1.29eeb4p-61f, 0x1.bc8f3ap-53f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.88e038p-72f, 0.0f
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
            ml_float4_t tmp3;
            ml_float4_t tmp4;
            int32_t tmp5;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            memcpy(&tmp1, ((ml_float4_t*)(external_bench_wrapper_input_table_arg1+ i)), 16);
            memcpy(&tmp2, ((ml_float4_t*)(external_bench_wrapper_input_table_arg2+ i)), 16);
            tmp3 = Sleef_fmaf4_avx2128(tmp0, tmp1, tmp2);
            memcpy(((ml_float4_t*)(external_bench_wrapper_output_table+ i)), &(tmp3), 16);
            tmp4 = local_acc + tmp3;
            local_acc = tmp4;
            tmp5 = i + INT32_C(4);
            i = tmp5;
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
    printf("Sleef_fmaf4_avx2128 %"PRIi64" elts over [[0;1], [0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_fmaf4_avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
