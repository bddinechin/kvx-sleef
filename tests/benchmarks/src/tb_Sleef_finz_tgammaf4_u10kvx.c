/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_tgammaf4_u10kvx.c --function \
 *     Sleef_finz_tgammaf4_u10kvx --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0x1.329472p-27f, 0.0f, 0x1.bf8a86p-75f, 0x1.a7c43ap-51f, 0x1.46157ep-55f,
     0x1.7457p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.85082ap-118f, 0.0f,
     0x1.6ad496p-24f, 0.0f, 0x1.be4332p-16f, 0x1.32b912p-41f, 0x1.fbd5bep-103f, 0.0f,
     0.0f, 0x1.1ba884p-112f, 0.0f, 0x1.1140d4p-66f, 0x1.d4dc02p-89f, 0.0f, 0.0f, 0.0f,
     0x1.527f0ep-45f, 0x1.98333cp-26f, 0x1.f4dfep-51f, 0x1.9843d2p-117f, 0.0f, 0.0f,
     0.0f, 0x1.25d8cap-92f, 0.0f, 0x1.d94efep-4f, 0.0f, 0.0f, 0x1.573b0ap-116f,
     0x1.bc4e2ep-4f, 0.0f, 0.0f, 0x1.4ec69ap-96f, 0.0f, 0x1.d2c438p-81f,
     0x1.8d8916p-25f, 0x1.51e22cp-61f, 0.0f, 0x1.992e24p-58f, 0x1.1dca2ap-125f, 0.0f,
     0.0f, 0x1.ea4f2cp-22f, 0x1.14d984p-45f, 0x1.fdfaa4p-63f, 0x1.77aac6p-2f, 0.0f,
     0x1.9a3f1ap-64f, 0x1.0a3e84p-21f, 0x1.c96364p-19f, 0x1.410976p-106f, 0.0f, 0.0f,
     0x1.5f010cp-51f, 0.0f, 0x1.086868p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8982eep-108f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4c1d5p-3f, 0x1.ab66aap-21f, 0x1.fed974p-123f,
     0x1.c131aep-47f, 0.0f, 0x1.dac7fp-93f, 0x1.72fc7ap-107f, 0.0f, 0x1.99d05ep-36f,
     0x1.454fa8p-34f, 0x1.d88fa6p-59f, 0x1.92206ep-75f, 0x1.d3cd52p-56f, 0.0f,
     0x1.6cb7c2p-39f, 0x1.a57884p-88f, 0x1.86c148p-14f, 0x1.4e6c12p-109f, 0.0f,
     0x1.23ec82p-58f, 0.0f, 0.0f, 0x1.bcda4p-122f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b87dc6p-11f, 0.0f, 0x1.594926p-22f, 0.0f, 0x1.14f806p-30f, 0x1.99d598p-100f,
     0x1.74bdfcp-48f, 0.0f, 0x1.0353dap-17f, 0x1.8bdd3p-117f, 0x1.ec1a26p-74f, 0.0f,
     0.0f, 0x1.610524p-78f, 0x1.472576p-102f, 0.0f, 0.0f, 0x1.2950e8p-43f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b62fb6p-41f, 0x1.a5f75ap-33f, 0x1.a74bb4p-73f, 0.0f,
     0x1.5b2ef4p-125f, 0x1.ac7a1ap-90f, 0x1.1c37bep-30f, 0x1.ed0ad2p-103f, 0.0f, 0.0f,
     0x1.aa329ep-74f, 0.0f, 0.0f, 0.0f, 0x1.04433ap-38f, 0x1.83a878p-9f,
     0x1.6d1192p-100f, 0.0f, 0x1.3159f2p-82f, 0.0f, 0x1.9961cep-104f, 0x1.63a41ep-11f,
     0x1.ee90eep-56f, 0x1.c81c5ap-81f, 0x1.8d0986p-63f, 0x1.6d3766p-42f, 0.0f,
     0x1.0d168ep-99f, 0.0f, 0.0f, 0.0f, 0x1.3cec5ap-50f, 0x1.d7d08ep-67f,
     0x1.725392p-34f, 0x1.348a84p-33f, 0.0f, 0x1.bceb1cp-23f, 0x1.b01842p-74f, 0.0f,
     0x1.a976f8p-95f, 0.0f, 0.0f, 0.0f, 0x1.fd0a56p-49f, 0x1.4eb2d4p-2f,
     0x1.275d64p-26f, 0x1.d8b51cp-123f, 0.0f, 0.0f, 0x1.10b0eep-4f, 0x1.ad9356p-41f,
     0x1.b41c7ap-119f, 0x1.4d03fcp-123f, 0x1.9d5b22p-3f, 0.0f, 0.0f, 0x1.aa136ap-55f,
     0x1.586be2p-70f, 0x1.1333dcp-126f, 0x1.bd187ep-6f, 0.0f, 0x1.af281ep-123f,
     0x1.fe1e9p-76f, 0x1.b80cf6p-82f, 0x1.1e2afap-94f, 0x1.71d0acp-81f, 0.0f, 0.0f,
     0x1.691414p-66f, 0x1.12ed68p-48f, 0x1.283eaap-67f, 0.0f, 0x1.b0338cp-2f, 0.0f,
     0.0f, 0x1.48df04p-61f, 0x1.ac4d52p-18f, 0x1.a6fa96p-17f, 0x1.ecf6bp-40f,
     0x1.c1af78p-71f, 0x1.0708fcp-93f, 0x1.bdcd48p-63f, 0x1.a3d7fcp-81f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fbdff2p-73f, 0x1.fc439cp-51f,
     0x1.48957cp-63f, 0x1.9ec284p-112f, 0x1.52419cp-80f, 0x1.d7cedap-32f, 0.0f,
     0x1.4fe8dep-97f, 0x1.60b838p-96f, 0.0f, 0.0f, 0.0f, 0x1.79373p-2f,
     0x1.b7e138p-11f, 0x1.50e768p-113f, 0.0f, 0x1.21f2dap-3f, 0x1.1586f8p-100f, 0.0f,
     0.0f, 0x1.597994p-22f, 0.0f, 0.0f, 0.0f, 0x1.23dab6p-53f, 0.0f, 0x1.1051fap-77f,
     0.0f, 0.0f, 0x1.35bfcep-17f, 0x1.05aa78p-42f, 0x1.4dfaa6p-5f, 0x1.39c48ap-57f,
     0x1.af0942p-2f, 0x1.c09b04p-119f, 0.0f, 0x1.ce8d2cp-79f, 0x1.d7e03cp-29f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e64da6p-117f, 0x1.36809ep-79f, 0.0f, 0x1.0ac2f2p-26f,
     0x1.e2d09p-36f, 0.0f, 0x1.3cf7c6p-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.05362p-99f,
     0.0f, 0x1.22ff34p-71f, 0x1.4b6e0cp-3f, 0x1.d33188p-40f, 0x1.911f7p-12f,
     0x1.2d81c8p-88f, 0x1.6be338p-47f, 0x1.2358aap-35f, 0x1.55cc22p-20f, 0.0f, 0.0f,
     0x1.682c5ep-9f, 0.0f, 0x1.d65864p-56f, 0.0f, 0x1.ba80c2p-57f, 0.0f,
     0x1.6239eep-77f, 0.0f, 0.0f, 0x1.98e612p-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e58d64p-22f, 0.0f, 0.0f, 0x1.515e02p-33f, 0x1.31f7c6p-86f, 0.0f,
     0x1.620a0ep-65f, 0x1.0c60d4p-86f, 0x1.c5b24ep-29f, 0x1.48e394p-103f,
     0x1.12a106p-16f, 0x1.046ee4p-50f, 0x1.493172p-72f, 0x1.967abep-116f,
     0x1.1ddb58p-24f, 0x1.3a821cp-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b70af8p-12f,
     0x1.9d89b4p-102f, 0x1.702cbep-46f, 0x1.5dde3ap-57f, 0x1.b25404p-118f, 0.0f,
     0x1.09e608p-48f, 0x1.481478p-15f, 0x1.13c75ap-22f, 0x1.325282p-101f,
     0x1.390aacp-6f, 0x1.003a86p-58f, 0x1.c8571ap-101f, 0.0f, 0.0f, 0.0f,
     0x1.78894ep-28f, 0.0f, 0x1.1cabd6p-118f, 0.0f, 0x1.0cbbb4p-111f, 0.0f,
     0x1.0e524cp-55f, 0.0f, 0.0f, 0x1.158d6ep-55f, 0.0f, 0.0f, 0x1.83346ep-2f,
     0x1.b499ccp-21f, 0.0f, 0x1.6051a8p-83f, 0x1.89e58ap-76f, 0x1.798918p-34f,
     0x1.874cf6p-37f, 0x1.58daf8p-20f, 0x1.cf679ep-57f, 0x1.16deacp-122f, 0.0f,
     0x1.291efep-85f, 0x1.f2ccbap-45f, 0x1p0f, 0x1.15665p-22f, 0x1.35aae8p-97f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.fe35dp-102f, 0.0f, 0x1.575bd2p-53f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.7c72c8p-34f, 0x1.a0735p-96f, 0.0f, 0.0f, 0.0f,
     0x1.fc28e6p-103f, 0x1.ea4e8ap-3f, 0x1.728146p-68f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.239b44p-16f, 0x1.06894p-58f, 0.0f, 0.0f, 0x1.71b17ap-88f, 0.0f,
     0x1.a44078p-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fa8f94p-4f, 0x1.d1062cp-57f, 0.0f,
     0x1.a5726p-80f, 0.0f, 0.0f, 0.0f, 0x1.aab66cp-20f, 0.0f, 0x1.cdbe82p-87f,
     0x1.e4c954p-52f, 0x1.7b2f98p-38f, 0x1.997d5ep-7f, 0x1.e4208p-79f, 0.0f,
     0x1.8c759ap-69f, 0.0f, 0x1.1fc1ap-42f, 0.0f, 0x1.5ab3dap-21f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.8c6516p-86f, 0.0f, 0x1.fb54a4p-11f, 0.0f, 0.0f, 0x1.f72864p-4f,
     0x1.de0ee8p-118f, 0.0f, 0x1.2541e4p-3f, 0.0f, 0.0f, 0.0f, 0x1.9fb0a4p-42f, 0.0f,
     0x1.c066b2p-57f, 0x1.3051bap-13f, 0x1.de6724p-13f, 0x1.a84116p-81f,
     0x1.a11dbep-118f, 0.0f, 0.0f, 0.0f, 0x1.3ad8ap-99f, 0x1.f7d368p-31f, 0.0f,
     0x1.d630b6p-13f, 0.0f, 0x1.8a9a0cp-51f, 0x1.1bbfcap-79f, 0.0f, 0x1.62d9c8p-32f,
     0.0f, 0x1.317f7ep-14f, 0.0f, 0x1.f756d4p-41f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8e4c18p-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a457cp-29f, 0.0f,
     0x1.331e92p-18f, 0x1.b51d4cp-34f, 0.0f, 0x1.47a956p-59f, 0.0f, 0x1.a70f64p-97f,
     0.0f, 0x1.fdf30ep-89f, 0.0f, 0x1.9a0e6ep-23f, 0.0f, 0.0f, 0x1.377fcep-1f, 0.0f,
     0x1.d5fec4p-28f, 0.0f, 0x1.81d0d6p-85f, 0.0f, 0.0f, 0x1.c646d6p-66f, 0.0f, 0.0f,
     0.0f, 0x1.aa25b8p-9f, 0.0f, 0.0f, 0x1.b96b06p-63f, 0.0f, 0x1.62dd92p-79f,
     0x1.0fada6p-110f, 0.0f, 0.0f, 0x1.8103e8p-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6e27cep-96f, 0x1.683b4ap-98f, 0.0f, 0.0f, 0.0f, 0x1.d6409ep-48f,
     0x1.48ecb2p-28f, 0.0f, 0.0f, 0x1.6f8534p-118f, 0.0f, 0.0f, 0x1.babe98p-89f,
     0x1.f41814p-2f, 0x1.3f52cap-25f, 0.0f, 0.0f, 0x1.0f2a96p-58f, 0x1.770ee2p-60f,
     0.0f, 0.0f, 0x1.49d682p-120f, 0x1.b448b2p-46f, 0.0f, 0x1.6f594ep-100f,
     0x1.decdeep-42f, 0.0f, 0x1.738844p-50f, 0.0f, 0x1.58f672p-80f, 0.0f, 0.0f, 0.0f,
     0x1.f37f58p-106f, 0x1.276fa8p-99f, 0x1.4a395p-112f, 0.0f, 0.0f, 0x1.11f10ap-36f,
     0x1.f29b2cp-73f, 0x1.b7b4e4p-30f, 0.0f, 0x1.d68626p-68f, 0.0f, 0x1.b560fp-66f,
     0x1.ef3cd8p-24f, 0x1.f82e44p-115f, 0x1.8d031p-53f, 0.0f, 0x1.4b01a2p-116f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.bc35a4p-38f, 0x1.95b09ap-77f, 0.0f, 0x1.9db978p-123f,
     0x1.07a9d6p-35f, 0x1.8ebe6cp-104f, 0.0f, 0.0f, 0x1.b2383p-111f, 0.0f,
     0x1.1eb318p-36f, 0.0f, 0.0f, 0x1.885p-75f, 0.0f, 0x1.5a6072p-100f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c6550ep-92f, 0.0f, 0x1.e9f2bep-64f, 0.0f, 0x1.475b6p-41f,
     0x1.26199ep-78f, 0.0f, 0.0f, 0.0f, 0x1.69fd9ap-98f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a1b91ap-111f, 0.0f, 0.0f, 0.0f, 0x1.4ccf26p-2f, 0x1.0b84eep-86f, 0.0f, 0.0f,
     0x1.6d30b6p-3f, 0.0f, 0.0f, 0x1.2a452cp-115f, 0.0f, 0.0f, 0x1.120caep-55f, 0.0f,
     0x1.114796p-95f, 0x1.c0d43ap-44f, 0.0f, 0x1.90fa1cp-95f, 0x1.4c019ep-52f,
     0x1.33ad56p-101f, 0.0f, 0.0f, 0.0f, 0x1.5cf1ep-6f, 0x1.dbd37cp-113f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.85f66cp-51f, 0.0f, 0x1.ae29fap-56f, 0x1.a18166p-99f, 0.0f,
     0x1.453d26p-63f, 0x1.705668p-126f, 0x1.0f14a4p-34f, 0.0f, 0x1.32a4b6p-78f,
     0x1.64db7ep-88f, 0x1.f7766ep-95f, 0.0f, 0.0f, 0x1.f56daap-25f, 0.0f, 0.0f, 0.0f,
     0x1.e60542p-80f, 0.0f, 0x1.e72468p-6f, 0x1.ac6c26p-69f, 0x1.e5a60ap-91f,
     0x1.4decbcp-48f, 0x1.7869e8p-2f, 0.0f, 0.0f, 0x1.df2f6ap-119f, 0.0f, 0.0f,
     0x1.ce22a2p-37f, 0x1.3c0d24p-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9758f6p-4f,
     0x1.c008b4p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f52ce2p-40f, 0.0f, 0.0f,
     0x1.3def6ap-3f, 0.0f, 0x1.f051e2p-45f, 0.0f, 0x1.d398f4p-83f, 0.0f,
     0x1.d108cp-42f, 0x1.bc390cp-83f, 0.0f, 0.0f, 0.0f, 0x1.6df244p-55f, 0.0f,
     0x1.3cff0cp-83f, 0.0f, 0.0f, 0x1.eaf028p-51f, 0.0f, 0x1.146306p-125f,
     0x1.ec1244p-115f, 0.0f, 0x1.8b3a1p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.37b9c8p-33f, 0x1.903abap-121f, 0.0f, 0.0f, 0.0f, 0x1.6c11dep-117f, 0.0f,
     0x1.08d4e8p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.d37d58p-27f, 0.0f,
     0x1.148968p-8f, 0.0f, 0.0f, 0.0f, 0x1.c7ca6ep-40f, 0x1.947f6ep-121f,
     0x1.d8effcp-62f, 0.0f, 0.0f, 0x1.aa6d94p-101f, 0.0f, 0.0f, 0.0f, 0x1.34f78ap-4f,
     0.0f, 0x1.96ddecp-113f, 0.0f, 0.0f, 0x1.0350b2p-123f, 0.0f, 0x1.7fbde4p-102f,
     0.0f, 0.0f, 0x1.56c598p-70f, 0.0f, 0.0f, 0x1.a111e6p-18f, 0x1.be7096p-119f,
     0x1.8baa8cp-74f, 0x1.c879c4p-54f, 0.0f, 0.0f, 0x1.ffa7aap-52f, 0.0f,
     0x1.82fd82p-119f, 0.0f, 0x1.94c12ap-47f, 0.0f, 0.0f, 0x1.42b41ap-27f, 0x1p0f,
     0x1.9e80fcp-13f, 0x1.852f02p-116f, 0.0f, 0x1.a8ba7cp-11f, 0.0f, 0.0f,
     0x1.95c26ap-108f, 0.0f, 0x1.36d0f6p-122f, 0.0f, 0x1.7b812p-1f, 0x1.1502e6p-67f,
     0.0f, 0x1.09dc78p-87f, 0.0f, 0x1.8459a4p-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.92d9e8p-10f, 0.0f, 0x1.7f12c6p-107f, 0.0f, 0x1.f1d53ep-49f, 0.0f,
     0x1.fa8d3p-110f, 0x1.000bd2p-16f, 0x1.1f7d06p-29f, 0x1.a6446cp-103f,
     0x1.605a3ap-50f, 0x1.2a686cp-22f, 0.0f, 0x1.360b4ap-9f, 0.0f, 0.0f, 0.0f,
     0x1.a69af4p-90f, 0x1.e943d2p-68f, 0.0f, 0x1.2c1c7ap-92f, 0.0f, 0.0f,
     0x1.23354ap-8f, 0x1.77fa22p-58f, 0.0f, 0.0f, 0x1.4741d2p-110f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ab84aap-26f, 0x1.cd550cp-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6f9644p-57f, 0.0f, 0x1.acd4d6p-88f, 0x1.5f4ab8p-48f, 0x1.bc20bap-18f, 0.0f,
     0.0f, 0x1.44db4p-79f, 0.0f, 0x1.e70158p-15f, 0.0f, 0x1.fe1bcep-18f,
     0x1.acc004p-79f, 0.0f, 0x1.36a3eep-75f, 0.0f, 0x1.316d64p-57f, 0x1.1dcce6p-36f,
     0x1.96f2e8p-119f, 0.0f, 0x1.ea89dep-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4750bcp-94f,
     0.0f, 0.0f, 0.0f, 0x1.35285p-28f, 0x1.7c142ap-85f, 0x1.8ec8e6p-41f,
     0x1.04c31cp-93f, 0x1.c118b2p-92f, 0x1.5ca7bcp-70f, 0x1.6ef278p-107f,
     0x1.840f9cp-124f, 0x1.f9a7a4p-114f, 0.0f, 0.0f, 0x1.058712p-60f, 0.0f,
     0x1.af31f6p-29f, 0x1.5386bep-117f, 0x1.a053fap-90f, 0x1p0f, 0x1.f402ap-87f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0e9a26p-54f,
     0x1.01aafp-35f, 0x1.8b635p-47f, 0x1.022c64p-33f, 0x1.066a94p-18f,
     0x1.c2e0c2p-76f, 0x1.1cae88p-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4d6c3cp-102f,
     0x1.3efed8p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f1c124p-88f,
     0x1.1f7abp-81f, 0.0f, 0.0f, 0x1.70c50cp-47f, 0.0f, 0.0f, 0.0f, 0x1.d7de0ep-107f,
     0x1.63a20ep-81f, 0.0f, 0x1.093b2ap-10f, 0x1.63ace2p-71f, 0x1.ded40ep-14f, 0.0f,
     0x1.9063dap-101f, 0x1.17b96ap-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f,
     0x1.875d08p-52f, 0.0f, 0.0f, 0x1.269614p-22f, 0.0f, 0.0f, 0.0f, 0x1.1e49e4p-57f,
     0x1.a7508p-107f, 0x1.052a6ap-105f, 0x1.38c0dcp-120f, 0x1.3ca70cp-105f, 0.0f,
     0x1.e58c16p-34f, 0.0f, 0.0f, 0x1.0cd18ep-101f, 0x1.6ebb4ap-111f,
     0x1.3a017ap-126f, 0x1.32973cp-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2f8564p-6f,
     0x1.85ce68p-80f, 0x1.fa6d1ap-95f, 0x1.d1d41ap-99f, 0.0f, 0x1.f2784cp-104f, 0.0f,
     0.0f, 0.0f, 0x1.2bea82p-50f, 0x1.10605p-88f, 0x1.febe22p-96f, 0.0f,
     0x1.126946p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0f91b4p-52f, 0.0f, 0.0f,
     0x1.8bfa48p-36f, 0.0f, 0x1.ae903ep-21f, 0.0f, 0.0f, 0x1.6e8714p-124f,
     0x1.c0ea0ap-120f, 0.0f, 0x1.27336p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1d87e2p-15f,
     0x1.7d03e4p-44f, 0x1.f27af4p-35f, 0x1.dff52ap-10f, 0x1.e29e08p-45f, 0.0f,
     0x1.643b2ep-124f, 0.0f, 0x1.74996p-92f, 0x1.fc4bacp-125f, 0.0f, 0x1.b47ac4p-120f,
     0x1.0106cep-45f, 0x1.436dd8p-120f, 0x1.fc5ea6p-120f, 0.0f, 0.0f, 0.0f,
     0x1.832c5ep-12f
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
            tmp1 = Sleef_finz_tgammaf4_u10kvx(tmp0);
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
    printf("Sleef_finz_tgammaf4_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_tgammaf4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
