/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_acosf4_u35kvx.c --function \
 *     Sleef_finz_acosf4_u35kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 4 --function-input-vector-size \
 *     4 --bench --no-embedded-bin --target kv3
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
     0x1.b57d64p-6f, 0x1.8527dap-125f, 0x1.600ec6p-41f, 0.0f, 0.0f, 0x1.6a2894p-10f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ea85cap-3f, 0x1.cb86e8p-126f, 0.0f, 0.0f,
     0x1.2b0264p-15f, 0.0f, 0x1.dc74fp-2f, 0x1.d235b4p-45f, 0.0f, 0x1.1cb03ep-29f,
     0x1.351c68p-118f, 0x1.030e72p-9f, 0.0f, 0x1.4e2f56p-103f, 0x1.d02598p-23f, 0.0f,
     0x1.38a772p-16f, 0x1.21989p-41f, 0x1.95973ep-50f, 0.0f, 0.0f, 0.0f,
     0x1.2fcd8p-55f, 0x1.83c6aep-30f, 0x1.b5cba8p-38f, 0.0f, 0.0f, 0x1.9419b8p-126f,
     0.0f, 0x1.3340cap-55f, 0.0f, 0.0f, 0.0f, 0x1.2456c2p-37f, 0.0f, 0.0f,
     0x1.37f532p-60f, 0x1.2332dap-37f, 0.0f, 0.0f, 0x1.bd321cp-42f, 0x1.49ee74p-26f,
     0.0f, 0x1.054454p-46f, 0x1.3cd34ap-92f, 0x1.97f41cp-68f, 0.0f, 0.0f,
     0x1.d9e8dep-110f, 0.0f, 0.0f, 0x1.97ab16p-90f, 0.0f, 0.0f, 0x1.75e2bp-105f, 0.0f,
     0.0f, 0x1.2882bcp-95f, 0x1.c61504p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.db15c6p-32f,
     0.0f, 0x1.6f241p-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.74ecfcp-114f,
     0.0f, 0.0f, 0.0f, 0x1.f80b42p-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6c6a28p-22f, 0.0f, 0.0f, 0x1.02d026p-14f, 0x1.0f33bp-101f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.2fea9ep-26f, 0.0f, 0.0f, 0x1.e5a1cep-82f, 0x1.63d0dp-60f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.0c81ap-98f, 0.0f, 0x1.29ebf6p-11f, 0.0f,
     0x1.86c346p-33f, 0.0f, 0.0f, 0.0f, 0x1.d0f086p-18f, 0x1.b18ba2p-7f, 0.0f,
     0x1.48a98p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8628e4p-106f, 0.0f, 0x1.b17c02p-77f,
     0.0f, 0x1.551926p-88f, 0x1.eb3b74p-113f, 0x1.34bd9p-43f, 0x1.dad80cp-67f,
     0x1.c46c96p-67f, 0x1.465136p-110f, 0.0f, 0.0f, 0.0f, 0x1.f619d8p-79f, 0.0f,
     0x1.a374d2p-79f, 0.0f, 0.0f, 0x1.5b8f8cp-57f, 0.0f, 0.0f, 0x1.174b0cp-112f, 0.0f,
     0.0f, 0x1.6f1b3p-67f, 0.0f, 0.0f, 0x1.ebf218p-106f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4a1f3ap-94f, 0x1.452adap-64f, 0.0f, 0.0f, 0.0f, 0x1.e0cca8p-14f, 0.0f,
     0x1.033f76p-22f, 0.0f, 0.0f, 0x1.b5acap-42f, 0.0f, 0x1.b96b26p-29f, 0.0f, 0.0f,
     0x1.081a26p-43f, 0x1.2c2198p-124f, 0x1.973edp-123f, 0.0f, 0.0f, 0x1.a048b6p-48f,
     0.0f, 0x1.026ac8p-109f, 0.0f, 0x1.6d7d76p-117f, 0.0f, 0x1.69ea3ap-114f,
     0x1.cf4f24p-111f, 0x1.d0a138p-30f, 0.0f, 0x1.169598p-58f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9f9be8p-86f, 0.0f, 0.0f, 0x1.ed313ep-43f, 0.0f, 0x1.44058ep-3f,
     0x1.7e324cp-76f, 0.0f, 0.0f, 0.0f, 0x1.4f6a74p-99f, 0x1.cbdc0ap-19f, 0.0f,
     0x1.600f7cp-112f, 0.0f, 0.0f, 0x1.c9086ap-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.119be4p-81f, 0x1.2a4266p-77f, 0x1.f581f6p-71f,
     0x1.28a162p-97f, 0x1.1be4f2p-54f, 0.0f, 0.0f, 0x1.3e98bep-24f, 0x1.e4ea3ap-39f,
     0x1.cc49f6p-45f, 0.0f, 0.0f, 0.0f, 0x1.335ffap-77f, 0.0f, 0x1.bbec14p-23f,
     0x1.aaf664p-67f, 0x1.8acdp-32f, 0.0f, 0x1.032e2cp-33f, 0.0f, 0x1.91155ap-40f,
     0.0f, 0.0f, 0x1.6a4642p-50f, 0.0f, 0x1.7db218p-121f, 0x1.c393bp-90f, 0.0f,
     0x1.acb39ap-42f, 0.0f, 0x1.5cd5aap-124f, 0x1.000a9p-101f, 0x1.dc75d6p-85f,
     0x1.7443bep-58f, 0x1.1e4ecep-25f, 0.0f, 0.0f, 0x1.399c78p-95f, 0x1.df1e54p-111f,
     0.0f, 0x1.182bbap-47f, 0x1.9ac2dap-105f, 0x1.1dcf68p-45f, 0x1.8dce1ep-59f,
     0x1.11f352p-28f, 0x1.315cbcp-33f, 0.0f, 0x1.674a36p-44f, 0.0f, 0x1.d7efd2p-55f,
     0x1.c3b0d8p-98f, 0x1.3e5658p-26f, 0x1.fadf68p-5f, 0x1.e259a4p-87f,
     0x1.fb3f1p-80f, 0.0f, 0x1.d7bcf2p-31f, 0.0f, 0x1.c334d6p-62f, 0.0f,
     0x1.3b2c5ep-87f, 0x1.64be7ep-116f, 0x1.419de6p-103f, 0x1.f155bep-31f, 0.0f,
     0x1.b7d046p-90f, 0.0f, 0.0f, 0x1.4aa7d2p-59f, 0.0f, 0x1.02796cp-60f,
     0x1.bc7258p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.516336p-58f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.aba69ap-102f, 0x1.2a449p-35f, 0.0f, 0x1.0840eap-107f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.7d34dap-64f, 0x1.154d8ep-74f, 0x1.2369fp-31f, 0x1.162676p-59f,
     0x1.33cc22p-38f, 0.0f, 0x1.9a2e38p-76f, 0x1.95b6c6p-105f, 0x1.9029e6p-73f,
     0x1.03adeap-101f, 0.0f, 0.0f, 0x1.cee16cp-118f, 0.0f, 0x1.2c3ec8p-81f,
     0x1.ad93fap-61f, 0x1.66145ap-59f, 0x1.1a064cp-3f, 0.0f, 0x1.c60dfp-68f,
     0x1.9e7f8cp-85f, 0x1.dc0b92p-67f, 0.0f, 0x1p0f, 0x1.6921d8p-64f, 0x1.e39a42p-5f,
     0x1.3de064p-28f, 0x1.07151p-117f, 0.0f, 0.0f, 0x1.a2aebep-37f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.c9305p-119f, 0x1.50c50ap-115f, 0x1.9767ccp-117f, 0.0f, 0.0f,
     0.0f, 0x1.ff1652p-24f, 0.0f, 0x1.a1274p-119f, 0.0f, 0x1.406e28p-125f,
     0x1.924e72p-9f, 0.0f, 0x1.2a319p-23f, 0x1.8ce0cap-3f, 0x1.1a15f4p-103f, 0.0f,
     0.0f, 0x1.4616fap-104f, 0x1.4f7ef2p-72f, 0x1.b6489p-13f, 0x1.7bfe9p-15f,
     0x1.2df85ep-47f, 0.0f, 0x1.cabcecp-73f, 0x1.deed94p-57f, 0.0f, 0x1.62f67ap-75f,
     0.0f, 0.0f, 0x1.265b7ap-35f, 0.0f, 0.0f, 0x1.9b707p-103f, 0x1.b4fae8p-30f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.0e4172p-10f, 0.0f, 0.0f, 0.0f, 0x1.e37e9ep-29f,
     0x1.fedbacp-21f, 0.0f, 0.0f, 0.0f, 0x1.58142cp-112f, 0x1.bcdep-114f,
     0x1.6f003ep-108f, 0.0f, 0.0f, 0.0f, 0x1.ae8ab4p-105f, 0x1.41272ap-1f,
     0x1.c99bb4p-34f, 0x1.0e632ep-31f, 0.0f, 0x1.10af4ep-6f, 0.0f, 0x1.34b9bp-28f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f79b4p-103f, 0.0f, 0x1.6319a6p-76f,
     0x1.1dd89p-50f, 0.0f, 0.0f, 0x1.00361p-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.945fe6p-87f, 0x1.701684p-18f, 0x1.86afd6p-5f, 0x1.3025ccp-81f, 0.0f, 0.0f,
     0x1.ab824ep-115f, 0x1.8d2f5cp-94f, 0x1.8b8134p-101f, 0x1.bb2e9ap-40f,
     0x1.acc5eap-96f, 0x1.d6c3acp-106f, 0.0f, 0.0f, 0x1.0cd246p-103f, 0.0f,
     0x1.492014p-32f, 0.0f, 0.0f, 0.0f, 0x1.6e9a22p-60f, 0x1.6e8448p-45f,
     0x1.04d15ap-65f, 0.0f, 0x1.97036ap-115f, 0x1.687f86p-34f, 0.0f, 0.0f,
     0x1.fb3fc6p-42f, 0.0f, 0x1.3a2202p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.48598p-124f, 0.0f, 0.0f, 0x1.a5789cp-11f, 0x1.a80318p-95f, 0x1.85bdcap-55f,
     0.0f, 0.0f, 0x1.f98836p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.09821ap-60f, 0.0f,
     0x1.95e95ap-102f, 0.0f, 0.0f, 0.0f, 0x1.3306p-48f, 0x1.9baa56p-64f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.31ccdcp-10f, 0x1.639d6p-111f,
     0x1.b1b5dp-111f, 0x1.b58aa6p-58f, 0x1.522744p-42f, 0.0f, 0x1.d5e82p-116f,
     0x1.8f22cep-100f, 0.0f, 0.0f, 0.0f, 0x1.333eaap-48f, 0.0f, 0x1.fa726cp-2f,
     0x1.22d814p-85f, 0.0f, 0x1.2327b6p-62f, 0.0f, 0x1.3b3414p-36f, 0x1.92967cp-24f,
     0.0f, 0.0f, 0x1.8909dcp-26f, 0.0f, 0.0f, 0.0f, 0x1.df4c96p-73f, 0x1.892f5p-106f,
     0x1.d7130ap-82f, 0.0f, 0x1.54b50ep-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2c33ccp-115f, 0x1.74e7dcp-34f, 0.0f, 0x1.7b2b46p-35f, 0x1.5a16bep-26f,
     0x1.e6791ep-76f, 0x1.7c685ep-29f, 0x1.2a4948p-126f, 0.0f, 0.0f, 0x1.a13c3p-64f,
     0.0f, 0.0f, 0.0f, 0x1.af7a0ap-55f, 0.0f, 0x1.84e0c8p-9f, 0.0f, 0x1.a672eap-115f,
     0x1.617d4cp-61f, 0x1.9ad9fap-8f, 0x1.80a282p-82f, 0x1.ca2bp-103f, 0.0f, 0.0f,
     0x1.769002p-60f, 0x1.dc3e74p-24f, 0x1.ef0b3cp-70f, 0x1.0b401ap-20f, 0.0f, 0.0f,
     0.0f, 0x1.6a5956p-60f, 0x1.2fb23ap-50f, 0.0f, 0.0f, 0x1.02f7bap-1f, 0.0f,
     0x1.af352ap-121f, 0x1.e17684p-43f, 0.0f, 0x1.e7a118p-73f, 0.0f, 0x1.61c25ep-91f,
     0.0f, 0x1.1ebbd8p-114f, 0x1.839f88p-11f, 0x1.cb22d8p-60f, 0x1.b3f7dap-43f, 0.0f,
     0x1.54d1d6p-7f, 0.0f, 0x1.99a4cep-121f, 0x1.4935e8p-68f, 0.0f, 0x1.604768p-31f,
     0x1.996674p-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.df4398p-92f, 0x1.9f7fb4p-112f,
     0x1.3ae798p-38f, 0x1.d7778cp-97f, 0x1.baa37ap-10f, 0x1.19ae06p-69f,
     0x1.55f0aap-80f, 0.0f, 0.0f, 0x1.d629b8p-115f, 0.0f, 0.0f, 0x1.1242bp-91f, 0.0f,
     0x1.4a4366p-16f, 0x1.f589f2p-64f, 0x1.ab7296p-28f, 0.0f, 0x1.1b8f84p-1f, 0.0f,
     0x1.53e682p-13f, 0.0f, 0.0f, 0x1.8b9d28p-59f, 0.0f, 0.0f, 0.0f, 0x1.dd9366p-15f,
     0x1.c7ba8ep-2f, 0x1.e3ae72p-44f, 0x1.1e7fbep-80f, 0.0f, 0x1.5ea9acp-6f,
     0x1.e11c2ap-13f, 0.0f, 0.0f, 0x1.1d1e46p-108f, 0x1.4d1dd8p-66f, 0.0f,
     0x1.830e52p-33f, 0.0f, 0x1.2f269cp-72f, 0.0f, 0.0f, 0.0f, 0x1.eef16ap-102f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.456bep-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a2333ep-119f,
     0.0f, 0x1.b02378p-69f, 0x1.568ebp-72f, 0.0f, 0.0f, 0x1.1f06ap-81f,
     0x1.34d554p-68f, 0.0f, 0.0f, 0.0f, 0x1.2e71eap-2f, 0x1.64026ep-62f, 0.0f,
     0x1.171596p-72f, 0x1.f0c8dcp-3f, 0x1.af417ep-35f, 0.0f, 0.0f, 0x1.44e20cp-23f,
     0x1.5e4454p-41f, 0x1.f04578p-66f, 0x1.876dc8p-99f, 0.0f, 0.0f, 0.0f,
     0x1.4a064ep-90f, 0.0f, 0x1.a5d0aep-11f, 0x1.bbe068p-102f, 0x1.5fa3d8p-36f,
     0x1.bab35ap-111f, 0x1.3c189cp-63f, 0x1.034778p-45f, 0.0f, 0.0f, 0.0f,
     0x1.26fc16p-22f, 0x1.6379dcp-101f, 0x1.3dc9fcp-108f, 0.0f, 0.0f, 0x1.1b4402p-46f,
     0x1.cba15cp-79f, 0.0f, 0x1.bd8182p-48f, 0.0f, 0x1.3c6134p-2f, 0x1.b9b0b6p-102f,
     0.0f, 0.0f, 0x1.84dce6p-98f, 0x1.4da4f4p-52f, 0.0f, 0.0f, 0x1.0dfd2ep-63f,
     0x1.f6c6ecp-109f, 0x1.6b2cc4p-82f, 0.0f, 0x1.fea60ep-74f, 0.0f, 0x1.66854p-99f,
     0.0f, 0.0f, 0.0f, 0x1.cbfe6cp-60f, 0x1.64f60cp-126f, 0x1.085614p-66f,
     0x1.add3a8p-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.db2fdap-56f, 0x1.6e4e6cp-80f,
     0x1.b09a6cp-49f, 0x1.d19eaep-121f, 0.0f, 0.0f, 0x1.312af2p-120f, 0x1.24f5eep-15f,
     0x1.c298e8p-73f, 0x1.0b4286p-120f, 0.0f, 0x1.26403ep-97f, 0.0f, 0x1.b1d81p-53f,
     0.0f, 0x1.5dbd7ep-67f, 0x1.581c82p-50f, 0x1.c5d716p-105f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.54c8b6p-119f, 0x1.a5a6a2p-70f, 0x1.02db44p-97f, 0x1.5267e2p-71f,
     0x1.fac768p-67f, 0.0f, 0x1.d88806p-82f, 0.0f, 0x1.00316p-90f, 0x1.d31d22p-57f,
     0.0f, 0x1.0de29cp-112f, 0.0f, 0x1.3da35ep-120f, 0x1.bda666p-87f, 0x1.e3608cp-78f,
     0x1.9f082p-102f, 0.0f, 0.0f, 0.0f, 0x1.a9d122p-39f, 0x1.3ef916p-120f,
     0x1.933afap-110f, 0x1.054ca6p-45f, 0.0f, 0.0f, 0.0f, 0x1.ef8b54p-70f,
     0x1.3f657cp-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8f67e8p-35f,
     0x1.e5fdccp-45f, 0.0f, 0.0f, 0x1.703648p-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.12acaep-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d09e32p-43f, 0.0f,
     0x1.24a846p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.183884p-43f, 0x1.1fa6a4p-54f, 0.0f,
     0.0f, 0.0f, 0x1.beffc8p-34f, 0.0f, 0x1p0f, 0x1.aaf1a2p-60f, 0.0f,
     0x1.bd2672p-41f, 0x1.f6bfcap-9f, 0x1.f1c5b2p-86f, 0x1.af6e3ap-22f,
     0x1.4c2542p-118f, 0.0f, 0.0f, 0.0f, 0x1.181962p-36f, 0x1.ac373p-92f, 0.0f,
     0x1.cc5828p-13f, 0x1.87cf3cp-63f, 0x1.9fa9ccp-69f, 0.0f, 0.0f, 0x1.eff9cap-68f,
     0x1.b28542p-76f, 0.0f, 0x1.2a74e6p-38f, 0x1.77c87ep-85f, 0.0f, 0.0f,
     0x1.187dccp-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0d2d0ap-59f, 0x1.bffa74p-114f,
     0x1.9bd85ep-52f, 0x1.29c6f6p-50f, 0x1.3fbf06p-55f, 0.0f, 0x1.f4dcacp-84f, 0.0f,
     0x1.17bbb6p-38f, 0x1.4569f8p-86f, 0.0f, 0.0f, 0.0f, 0x1.62a09cp-101f,
     0x1.ad3a3cp-44f, 0.0f, 0.0f, 0x1.e585a2p-119f, 0.0f, 0x1.b70dbep-62f, 0.0f,
     0x1.1d5414p-105f, 0.0f, 0.0f, 0x1.587052p-19f, 0x1.309ff4p-6f, 0x1.3f4252p-76f,
     0.0f, 0x1.91aea2p-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ae0246p-82f, 0.0f,
     0x1.a8480cp-67f, 0.0f, 0.0f, 0.0f, 0x1.2e0922p-106f, 0x1p0f, 0.0f,
     0x1.3c899ap-31f, 0.0f, 0.0f, 0x1.a349bep-120f, 0.0f, 0x1.b303a4p-91f,
     0x1.015646p-31f, 0.0f, 0x1.065644p-7f, 0.0f, 0x1.de54e6p-36f, 0.0f, 0.0f,
     0x1.057bp-89f, 0x1.a8bcap-114f, 0x1.5a4812p-29f, 0.0f, 0x1.760176p-82f, 0.0f,
     0.0f, 0x1.01213p-83f, 0x1.e299aap-64f, 0x1.8e65a4p-119f, 0x1.7e0924p-17f, 0.0f,
     0x1.004ff2p-85f, 0.0f, 0x1.7f2a36p-101f, 0.0f, 0.0f, 0x1.35c17ap-78f,
     0x1.84fa92p-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a11c2ap-60f, 0.0f, 0.0f, 0x1p0f,
     0x1.177e84p-110f, 0.0f, 0x1.27911ap-57f, 0x1.e262d4p-73f, 0.0f, 0x1.871f68p-90f,
     0.0f, 0x1.9f7c06p-75f, 0x1.d8e374p-76f, 0.0f, 0x1.d7b248p-48f, 0.0f,
     0x1.287188p-95f, 0x1.a5e3c8p-84f, 0.0f, 0x1.eb392cp-98f, 0x1.81e26ap-54f, 0.0f,
     0x1.fecba2p-125f, 0.0f, 0.0f, 0x1.3feac6p-123f, 0.0f, 0.0f, 0x1.c512aap-25f,
     0x1.9aecp-2f, 0.0f, 0x1.7313f4p-39f, 0x1.884234p-82f, 0x1.42834ep-43f,
     0x1.3ea0bcp-18f, 0.0f, 0.0f, 0x1.4121c6p-75f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.835fcap-44f, 0x1.885938p-44f, 0.0f, 0.0f, 0.0f, 0x1.f85846p-118f,
     0x1.ec2f64p-85f, 0x1.9e458ep-124f, 0x1.025b06p-100f, 0x1.839a6cp-31f,
     0x1.c3c17p-53f, 0.0f, 0.0f, 0x1.1edabp-74f, 0.0f, 0.0f, 0x1.4eee3cp-105f,
     0x1.38f3fp-94f, 0x1.c95a82p-36f, 0.0f, 0x1.9a3516p-64f, 0x1.388162p-95f,
     0x1.b18ea2p-18f, 0.0f, 0x1.8d055cp-6f, 0.0f, 0x1.9287eap-52f, 0.0f, 0.0f,
     0x1.283ea2p-109f, 0x1.2de536p-78f, 0.0f, 0x1.420bd6p-108f, 0.0f, 0x1.8bcdeep-77f,
     0.0f, 0x1.b2d972p-89f, 0x1.c85c76p-25f, 0x1.7f59a2p-75f, 0x1.4c2522p-53f,
     0x1.103dfap-40f, 0x1.860674p-103f, 0x1.1cb514p-8f
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
            tmp1 = Sleef_finz_acosf4_u35kvx(tmp0);
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
    printf("Sleef_finz_acosf4_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_acosf4_u35kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
