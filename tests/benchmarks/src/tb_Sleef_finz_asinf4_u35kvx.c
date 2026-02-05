/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_asinf4_u35kvx.c --function \
 *     Sleef_finz_asinf4_u35kvx --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0x1.4b3dd4p-67f, 0x1.242d28p-65f, 0x1.042c52p-61f, 0x1.5be8e4p-111f,
     0x1.3b0fd2p-89f, 0.0f, 0.0f, 0x1.2e7de8p-27f, 0x1.0a874cp-67f, 0x1.622ed6p-24f,
     0.0f, 0x1.8b7e6ep-25f, 0.0f, 0x1.418d3ep-102f, 0x1.7a20f8p-32f, 0x1.e98f16p-60f,
     0x1.f0fdccp-119f, 0x1.900d6ap-50f, 0x1.09794ep-11f, 0x1.e8680ap-20f, 0.0f,
     0x1.27ed56p-80f, 0.0f, 0x1.c8033ap-82f, 0.0f, 0x1.04b81cp-29f, 0x1.6c273p-3f,
     0x1.f71fcep-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dbb73ap-111f,
     0x1.1c54f2p-106f, 0x1.efe5c4p-107f, 0x1.53316ap-83f, 0x1.81f522p-10f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.aaee14p-73f, 0x1.4d466cp-113f, 0.0f, 0.0f, 0x1.5a25b2p-10f,
     0x1.abab36p-83f, 0.0f, 0.0f, 0.0f, 0x1.bab8ccp-3f, 0.0f, 0x1.b6ac8ap-95f,
     0x1.2a69dcp-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b975fcp-113f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b64d7p-4f, 0.0f, 0.0f, 0x1.f24008p-33f,
     0x1.f70066p-41f, 0x1.a63178p-79f, 0x1.ee6beap-4f, 0x1.2792bp-15f,
     0x1.d04d34p-123f, 0.0f, 0.0f, 0.0f, 0x1.126d9p-88f, 0.0f, 0x1.dad5bep-2f,
     0x1.f9bb06p-62f, 0x1.1a99acp-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f27856p-53f,
     0x1.b8d8a4p-17f, 0.0f, 0x1.918f42p-120f, 0x1.08350ep-40f, 0x1.1a5704p-111f,
     0x1.a132acp-119f, 0.0f, 0.0f, 0.0f, 0x1.7ab076p-90f, 0.0f, 0x1.28e448p-89f,
     0x1.0a7764p-88f, 0x1.1f031cp-87f, 0x1.f9a5c4p-18f, 0x1.688f34p-106f, 0.0f, 0.0f,
     0x1.1793bcp-28f, 0x1.d56a46p-85f, 0.0f, 0x1.f29f8ap-53f, 0x1.3b6a6cp-62f,
     0x1.75ccbp-97f, 0.0f, 0.0f, 0x1.9fe16p-110f, 0.0f, 0.0f, 0.0f, 0x1.6ce3bp-44f,
     0.0f, 0x1.4eb0eep-15f, 0x1.be8f64p-82f, 0x1.88eda6p-11f, 0.0f, 0.0f,
     0x1.32bddcp-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a8ecfp-53f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.07855ap-10f, 0.0f, 0x1.e7dbaap-25f, 0.0f, 0x1.9488b2p-110f, 0.0f,
     0.0f, 0x1.13368ap-66f, 0x1.9d72c8p-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.88ed02p-68f,
     0.0f, 0.0f, 0.0f, 0x1.f599cep-82f, 0x1.e5605p-31f, 0x1.3baffep-120f,
     0x1.1a8bcp-33f, 0x1.9f0812p-114f, 0x1.f38248p-37f, 0x1.65e82ep-59f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.0183b2p-59f, 0x1.73db52p-31f, 0x1.b8f894p-124f,
     0x1.2e3b1ap-86f, 0x1.04edfap-44f, 0.0f, 0.0f, 0x1.288826p-97f, 0.0f, 0.0f,
     0x1.983e24p-62f, 0.0f, 0x1.fd824cp-103f, 0x1.61c306p-126f, 0x1.763d7p-64f,
     0x1.3776b2p-51f, 0.0f, 0.0f, 0x1.0a4aa8p-85f, 0x1.5dee6ap-62f, 0x1.f6a67p-101f,
     0x1.7da8dcp-76f, 0x1.21addap-70f, 0x1.d58a68p-125f, 0x1.fee158p-7f,
     0x1.a6568cp-69f, 0.0f, 0x1.8380c2p-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.6798dep-75f, 0x1.1234fep-77f, 0x1.ca55p-3f, 0x1.feebacp-22f,
     0x1.38e378p-111f, 0.0f, 0x1.dddc62p-82f, 0x1.5fe84cp-124f, 0.0f, 0x1.5897a8p-5f,
     0x1.b3c492p-65f, 0.0f, 0x1.77a11cp-74f, 0x1.354d36p-90f, 0x1.ae5a0cp-116f,
     0x1.a36bd2p-59f, 0x1.3c7972p-7f, 0x1.45fd58p-115f, 0.0f, 0.0f, 0.0f,
     0x1.f2e18cp-118f, 0x1.2cb076p-11f, 0.0f, 0.0f, 0.0f, 0x1.71cbf4p-39f,
     0x1.801516p-74f, 0.0f, 0.0f, 0.0f, 0x1.248b4ap-92f, 0x1.5abe64p-79f, 0.0f,
     0x1.7c3c26p-121f, 0x1.da0a22p-73f, 0x1.b62758p-84f, 0.0f, 0x1.76483p-5f,
     0x1.bf5b4ap-84f, 0x1.82cd48p-54f, 0x1.642a7p-96f, 0.0f, 0x1.9305dap-14f,
     0x1.d91e3ap-65f, 0x1.abcdcap-14f, 0x1.030142p-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5f33fp-59f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e526c6p-105f, 0.0f, 0x1.258996p-70f, 0x1.7bd5bp-106f, 0.0f, 0x1.c50ac4p-71f,
     0.0f, 0x1.bd62a8p-37f, 0x1.a448fep-4f, 0.0f, 0x1.1bf7ap-102f, 0x1.d7a14cp-16f,
     0.0f, 0.0f, 0x1.5b6c56p-31f, 0x1.74b8f4p-58f, 0x1.41523cp-111f, 0.0f, 0.0f, 0.0f,
     0x1.e29e74p-89f, 0.0f, 0x1.45ef28p-11f, 0.0f, 0x1.9c0de4p-33f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.0b46eap-38f, 0x1.d1885ap-38f, 0.0f, 0.0f, 0.0f, 0x1.6d5c54p-6f,
     0x1.a7e9e6p-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3e5764p-121f, 0x1.36d46p-58f,
     0x1.400f3cp-97f, 0.0f, 0x1.00aaa6p-16f, 0.0f, 0x1.6412f2p-111f, 0.0f,
     0x1.4b1eep-74f, 0.0f, 0x1.56c40ap-95f, 0x1.33f39ep-31f, 0.0f, 0x1.56f20ep-114f,
     0.0f, 0x1.24ae04p-3f, 0.0f, 0x1.9b420cp-122f, 0.0f, 0x1.55a9ecp-82f, 0.0f,
     0x1.ed62d2p-108f, 0.0f, 0x1.38cp-90f, 0x1.a7d3f4p-68f, 0x1.384664p-62f, 0.0f,
     0x1.b2cfcp-3f, 0.0f, 0x1.84653cp-70f, 0.0f, 0x1.55475p-20f, 0x1.d4be36p-8f, 0.0f,
     0.0f, 0.0f, 0x1.6f306cp-84f, 0x1.74ee62p-84f, 0x1.740696p-124f, 0.0f,
     0x1.25c1b2p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.753faep-27f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.07cbe8p-115f, 0.0f, 0x1.410424p-125f, 0.0f, 0x1.32199cp-9f, 0x1.111dfp-105f,
     0x1.bc4c6ap-68f, 0.0f, 0.0f, 0x1.340b14p-109f, 0x1.3ecf9ap-48f, 0x1.8f3e22p-99f,
     0x1.d9ea32p-75f, 0.0f, 0.0f, 0.0f, 0x1.eea774p-7f, 0x1.75fe6p-6f, 0.0f,
     0x1.c58a1p-17f, 0.0f, 0x1.501ff2p-69f, 0.0f, 0x1.5a61bp-64f, 0x1.e177e4p-79f,
     0x1.545992p-95f, 0x1.781d7cp-51f, 0x1.f46a3cp-11f, 0x1.aa4944p-60f,
     0x1.1f505ap-69f, 0.0f, 0.0f, 0x1.8dd62ep-5f, 0x1.77a2c4p-51f, 0.0f, 0.0f,
     0x1.794a26p-104f, 0x1.e3ac34p-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.58a6c2p-106f,
     0.0f, 0x1.d77516p-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e7ab42p-102f, 0.0f,
     0x1.a3ab46p-62f, 0.0f, 0x1.64dd38p-114f, 0x1.972ecep-29f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.9b586cp-2f, 0x1.79553cp-52f, 0.0f, 0.0f, 0x1.46ae74p-121f, 0.0f,
     0x1.95c976p-79f, 0.0f, 0x1.c1f7fcp-41f, 0.0f, 0x1.3593fep-87f, 0x1.83c14ep-85f,
     0x1.a31b54p-37f, 0x1.c7c512p-11f, 0x1.28e7ep-53f, 0.0f, 0x1.98af94p-119f,
     0x1.1e8f7p-16f, 0.0f, 0.0f, 0x1.984492p-74f, 0.0f, 0x1.6da2dap-7f,
     0x1.8ab67ap-96f, 0x1.6f081cp-118f, 0.0f, 0x1.da9b78p-93f, 0.0f, 0.0f,
     0x1.5e9dcp-11f, 0.0f, 0.0f, 0x1.ac7504p-76f, 0.0f, 0x1.aae854p-79f,
     0x1.2ec04cp-112f, 0.0f, 0.0f, 0x1.b2213p-85f, 0.0f, 0x1.d1e45ap-17f,
     0x1.afcdf6p-103f, 0x1.666db4p-60f, 0.0f, 0x1.9ae5dp-68f, 0.0f, 0x1.8180b6p-49f,
     0x1.a32e6p-123f, 0.0f, 0.0f, 0.0f, 0x1.a4136ep-76f, 0x1.1b1986p-109f,
     0x1.2d8366p-39f, 0.0f, 0.0f, 0.0f, 0x1.6cad4ap-69f, 0.0f, 0x1.0bf79ap-19f,
     0x1.5678ecp-94f, 0x1.b98884p-82f, 0x1.bd03cp-94f, 0x1.001d2ep-49f,
     0x1.ee1762p-27f, 0.0f, 0.0f, 0x1.ce1858p-23f, 0.0f, 0x1.660d76p-18f, 0.0f, 0.0f,
     0.0f, 0x1.bae7fep-108f, 0x1.5e75c6p-97f, 0x1.396fdcp-98f, 0x1.0ae8fcp-26f, 0.0f,
     0.0f, 0.0f, 0x1.4df042p-2f, 0.0f, 0.0f, 0x1.f2502ep-80f, 0.0f, 0.0f,
     0x1.2d09p-109f, 0.0f, 0x1.f0c448p-58f, 0x1.18afc8p-107f, 0.0f, 0.0f,
     0x1.7a6eep-64f, 0x1.b5dd9p-112f, 0.0f, 0.0f, 0x1.463aeep-44f, 0.0f, 0.0f, 0.0f,
     0x1.c60096p-107f, 0.0f, 0.0f, 0x1.5aece8p-3f, 0x1.e56cf6p-32f, 0.0f,
     0x1.b6c81cp-51f, 0x1.5c0066p-100f, 0.0f, 0.0f, 0x1.7cbba4p-38f, 0.0f, 0.0f,
     0x1.5aa102p-64f, 0.0f, 0x1.70fe1ap-106f, 0x1.df31ap-16f, 0.0f, 0x1.23805ap-111f,
     0x1.524ac2p-108f, 0x1.82aa48p-104f, 0.0f, 0x1.658e4cp-27f, 0x1.092f7cp-93f,
     0x1.19a68ap-84f, 0x1.361a5cp-113f, 0x1.7969fep-115f, 0x1.b4f2dap-103f,
     0x1.cea138p-56f, 0x1.00af6cp-124f, 0.0f, 0x1.594d0ap-66f, 0x1.9d3a74p-119f,
     0x1.938f2cp-25f, 0x1.b26c5cp-24f, 0.0f, 0.0f, 0x1.f1251p-65f, 0x1.5a8eacp-37f,
     0.0f, 0.0f, 0x1.9ee586p-39f, 0x1p0f, 0x1.9d6ed6p-24f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.33ddp-2f, 0.0f, 0x1.a51be8p-63f, 0.0f, 0x1.0fb64ap-92f,
     0x1.a6f13p-81f, 0.0f, 0.0f, 0x1.89d7dep-124f, 0x1.fbd0d6p-81f, 0.0f,
     0x1.d3802ap-87f, 0x1.0961a4p-90f, 0x1.c572f4p-64f, 0x1.7c9ab6p-100f,
     0x1.24f3d4p-107f, 0x1.961804p-43f, 0.0f, 0x1.25db84p-48f, 0.0f, 0.0f,
     0x1.bcd7cep-7f, 0x1.147cf8p-9f, 0.0f, 0.0f, 0.0f, 0x1.e549bcp-64f, 0.0f,
     0x1.ede2eap-57f, 0.0f, 0.0f, 0x1.f803a2p-18f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9c7802p-105f, 0.0f, 0x1.9ed4b2p-4f, 0.0f, 0.0f, 0x1.58837ap-115f, 0.0f, 0.0f,
     0x1.4d008cp-12f, 0.0f, 0x1.7f4ap-49f, 0.0f, 0.0f, 0x1.af2fb2p-56f,
     0x1.a93e6cp-5f, 0x1.465078p-120f, 0x1.f97e14p-96f, 0x1.b75e3ep-123f,
     0x1.7046a8p-65f, 0x1.8edbbep-106f, 0.0f, 0x1.bcf026p-109f, 0x1.bcb6f2p-94f,
     0x1.fbd966p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0acf44p-32f, 0.0f,
     0x1.abc3c4p-16f, 0.0f, 0.0f, 0.0f, 0x1.65cf1ep-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.883ff2p-47f, 0x1.304d56p-96f, 0.0f, 0.0f, 0x1p0f, 0.0f,
     0x1.7bce52p-87f, 0x1.a70988p-21f, 0x1.46acfap-64f, 0.0f, 0x1.54d04ap-15f,
     0x1.38246ep-82f, 0x1.f6277ep-52f, 0x1.f5137ap-31f, 0x1.4a71d2p-33f,
     0x1.5c0fc8p-114f, 0.0f, 0.0f, 0x1.82b7d2p-21f, 0x1.fd504ap-49f, 0.0f, 0.0f,
     0x1.29a7eap-16f, 0x1.61176ap-112f, 0x1.f6c9f4p-121f, 0.0f, 0.0f, 0x1.f2a7d6p-80f,
     0.0f, 0x1.ea09e4p-100f, 0.0f, 0x1.6f9474p-3f, 0.0f, 0x1.0730b2p-62f, 0.0f,
     0x1.115ee2p-105f, 0.0f, 0.0f, 0.0f, 0x1.49a918p-94f, 0x1.fe491ap-65f,
     0x1.4e7f14p-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7f83fep-43f, 0.0f, 0.0f,
     0x1.cbbda8p-48f, 0.0f, 0.0f, 0.0f, 0x1.b37d22p-109f, 0x1.3449b4p-56f,
     0x1.fa81a4p-42f, 0x1.85236ap-15f, 0x1.90b55ep-119f, 0.0f, 0x1.cc6b1ep-124f,
     0x1.28d628p-96f, 0.0f, 0x1.49261cp-119f, 0.0f, 0.0f, 0x1.b1107ap-37f,
     0x1.d1966p-12f, 0.0f, 0.0f, 0x1.a451b4p-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c8917ep-39f, 0.0f, 0x1.6b1d1cp-101f, 0.0f, 0x1.6d283p-119f, 0x1.1904p-86f,
     0.0f, 0x1.03c974p-120f, 0x1.931f92p-21f, 0x1.41eeb8p-12f, 0x1.752284p-86f, 0.0f,
     0.0f, 0x1.e07164p-120f, 0x1.b3d142p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.aa7d6p-88f,
     0.0f, 0.0f, 0x1.d6d8fep-115f, 0.0f, 0x1.b96d9ep-49f, 0x1.909ffep-118f, 0.0f,
     0.0f, 0x1.d88222p-116f, 0.0f, 0.0f, 0x1.7013aap-12f, 0x1.8da26ep-69f, 0.0f, 0.0f,
     0x1.feacf6p-97f, 0.0f, 0x1.e125dp-4f, 0.0f, 0.0f, 0x1.aba2eep-59f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.651c44p-110f, 0.0f, 0.0f, 0x1.ad4a74p-51f, 0x1.78d442p-35f, 0.0f,
     0x1.769bbap-108f, 0x1.8668b8p-15f, 0x1.3f079ep-72f, 0x1.e56292p-105f, 0.0f,
     0x1.c7faecp-119f, 0.0f, 0x1.8d3cccp-115f, 0x1.ac3776p-23f, 0x1.078cb2p-113f,
     0x1.9e694ap-100f, 0x1.4ce3cp-115f, 0x1.cdaa2ep-68f, 0x1.52fb24p-71f,
     0x1.983634p-49f, 0.0f, 0.0f, 0x1.1689eep-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.99744ep-77f, 0x1.a3f04ap-114f, 0.0f, 0x1.705686p-33f, 0x1.0d586cp-126f,
     0x1.88aabep-35f, 0x1.f6fea6p-7f, 0x1.b7ee32p-38f, 0x1.dccp-85f, 0.0f,
     0x1.95072p-4f, 0.0f, 0.0f, 0.0f, 0x1.c35b2ep-113f, 0x1.e75af4p-6f,
     0x1.4bc9c2p-2f, 0.0f, 0.0f, 0x1.527a8ep-65f, 0.0f, 0x1.956c0ep-3f, 0.0f,
     0x1.ee942ap-1f, 0.0f, 0.0f, 0.0f, 0x1.f34f32p-121f, 0x1.04d81ap-32f, 0.0f,
     0x1.64cb1ap-35f, 0.0f, 0.0f, 0x1.0d4742p-94f, 0x1.cacaccp-110f, 0x1.8ba2fep-55f,
     0.0f, 0x1.f00304p-27f, 0x1.c671e2p-26f, 0.0f, 0x1.26f534p-32f, 0.0f, 0.0f,
     0x1.d7a15ap-5f, 0x1.79e26p-114f, 0x1.f86346p-41f, 0x1.475efcp-93f,
     0x1.841b34p-29f, 0.0f, 0x1.536c4cp-70f, 0.0f, 0.0f, 0x1.e37c8ep-117f, 0.0f, 0.0f,
     0.0f, 0x1.f2f89cp-54f, 0x1.cdb3aap-126f, 0x1.09cac8p-26f, 0x1.6d4bbcp-118f, 0.0f,
     0x1.66041cp-39f, 0.0f, 0.0f, 0x1.098ecp-74f, 0x1.aaebp-47f, 0.0f, 0.0f, 0.0f,
     0x1.d423eep-63f, 0x1.91d5e6p-83f, 0x1.4a4b4ep-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e30ab2p-23f, 0.0f, 0.0f, 0x1.4aed3cp-126f, 0x1.982d8ep-20f, 0.0f,
     0x1.a4e31p-122f, 0.0f, 0.0f, 0x1.253ec8p-18f, 0.0f, 0x1.71aa68p-66f,
     0x1.b5ab68p-13f, 0x1.c56f46p-38f, 0x1.dae112p-4f, 0x1.72521ap-30f, 0.0f, 0.0f,
     0x1.788398p-94f, 0.0f, 0.0f, 0x1.8a5146p-81f, 0x1.b5662cp-21f, 0x1.187b4ep-75f,
     0x1.49610ep-97f, 0.0f, 0x1.39944p-113f, 0x1.09e86ap-56f, 0x1.00234cp-81f, 0.0f,
     0x1.cdf12p-114f, 0.0f, 0.0f, 0x1.ff1c92p-42f, 0.0f, 0x1.391554p-2f, 0.0f, 0.0f,
     0x1.41fd0cp-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4eb6bep-11f, 0.0f, 0.0f, 0.0f,
     0x1.a75722p-39f, 0x1.d4edd8p-93f, 0x1.0263a8p-23f, 0x1.57682p-28f,
     0x1.2403bep-61f, 0x1.fac678p-56f, 0.0f, 0x1.311f02p-82f, 0x1.fe9d18p-82f, 0.0f,
     0.0f, 0x1.bcd9d8p-100f, 0x1.dc9f3ap-14f, 0.0f, 0.0f, 0.0f, 0x1.e5161ap-36f, 0.0f,
     0.0f, 0x1.4b2c68p-108f, 0.0f, 0.0f, 0.0f, 0x1.a1e40ap-24f, 0.0f, 0x1.3b4c5p-24f,
     0.0f, 0x1.38f952p-66f, 0x1.2f7e6cp-83f, 0x1.773826p-86f, 0.0f, 0x1.9e5eb6p-98f,
     0x1.2b27c4p-16f, 0.0f, 0.0f, 0.0f, 0x1.389eccp-35f, 0x1.a7985ap-107f,
     0x1.5a4882p-82f, 0x1.c007d6p-35f, 0.0f, 0.0f, 0x1.e5d2eep-120f, 0.0f,
     0x1.8460fep-82f, 0.0f, 0.0f, 0x1.7ebfd2p-63f, 0x1.b6d1fep-39f, 0x1.e60daep-82f,
     0.0f, 0x1.ba4242p-21f, 0x1.1d2c46p-89f, 0x1.db5fe4p-63f, 0x1.c710d4p-49f, 0.0f,
     0.0f, 0x1.bb64aep-90f, 0x1.90308cp-124f, 0x1.571ab4p-85f, 0.0f, 0x1.e1916p-24f,
     0x1.7809c8p-13f, 0.0f, 0x1.4fe358p-16f, 0x1.2d25fcp-115f, 0x1.a03434p-77f, 0.0f,
     0.0f, 0x1.68286ep-109f, 0.0f, 0.0f, 0x1.c265d6p-19f, 0.0f, 0.0f, 0x1.3220dp-12f,
     0x1.88a5d2p-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.30394p-39f, 0.0f
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
            tmp1 = Sleef_finz_asinf4_u35kvx(tmp0);
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
    printf("Sleef_finz_asinf4_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_asinf4_u35kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
