/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_lgammaf4_u10kvx.c --function Sleef_lgammaf4_u10kvx \
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
     0x1.6d34dcp-69f, 0x1.00eea8p-48f, 0.0f, 0.0f, 0x1.76a834p-123f, 0x1.5128aap-34f,
     0x1.c56e1cp-99f, 0x1.25c2e6p-114f, 0.0f, 0x1.076ae6p-42f, 0.0f, 0x1.a64b2p-60f,
     0.0f, 0x1.9d370ep-84f, 0.0f, 0.0f, 0x1.247e72p-52f, 0.0f, 0.0f, 0x1.deca36p-60f,
     0x1.602df8p-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9b61fep-9f, 0x1.79aadep-20f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e99dbcp-23f, 0x1.6126eap-16f, 0x1.66f588p-68f,
     0x1.92c19ep-51f, 0.0f, 0x1.2c6cap-34f, 0.0f, 0.0f, 0x1.822bd8p-6f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.683a4cp-121f, 0x1.061384p-89f, 0.0f, 0.0f, 0x1.d16682p-61f,
     0x1.4a9b7p-83f, 0.0f, 0.0f, 0x1.85172ep-96f, 0x1.6c1dd2p-52f, 0x1.cfc31p-120f,
     0x1.261662p-49f, 0x1.13c18ep-52f, 0x1.8acbd6p-115f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0bfb6ep-57f, 0x1.5ef338p-3f, 0x1.db1b8ep-73f, 0x1.604b62p-5f, 0.0f,
     0x1.4f1566p-44f, 0x1.b01084p-88f, 0.0f, 0x1.547d3cp-103f, 0.0f, 0.0f, 0.0f,
     0x1.e6b1eep-120f, 0x1.7187p-99f, 0.0f, 0.0f, 0x1.a54b26p-118f, 0x1.46666cp-55f,
     0x1.1e5ff4p-4f, 0x1.aa3248p-82f, 0x1.846b3ep-58f, 0x1.626dcp-36f,
     0x1.d1f24ep-46f, 0x1.b6f072p-125f, 0.0f, 0x1.a85e0ep-98f, 0x1.840072p-33f,
     0x1.120d1ap-3f, 0.0f, 0x1.a6135cp-20f, 0.0f, 0x1.8ef996p-91f, 0x1.a8a9aep-69f,
     0.0f, 0.0f, 0.0f, 0x1.2bf8eap-50f, 0x1.a342f6p-37f, 0x1.a1be9p-16f,
     0x1.22eed2p-111f, 0x1.416c54p-25f, 0x1.da1726p-118f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ca7b24p-47f, 0x1.d753dcp-29f, 0.0f,
     0.0f, 0x1.6d712cp-120f, 0.0f, 0x1.ed2d68p-16f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.2fd77cp-103f, 0x1.ea0b96p-60f, 0x1.4fac9cp-105f,
     0x1.4c54b4p-15f, 0x1.96bb0cp-51f, 0.0f, 0x1.d361b4p-83f, 0x1.c34c3ep-26f, 0.0f,
     0x1.43a122p-31f, 0.0f, 0.0f, 0x1.d63b2p-108f, 0.0f, 0x1.2d6854p-99f, 0.0f, 0.0f,
     0x1.26ceb8p-11f, 0x1.093406p-80f, 0.0f, 0x1.780ce4p-14f, 0.0f, 0x1.4256ecp-7f,
     0x1.7d2b8p-21f, 0.0f, 0.0f, 0x1.14021p-45f, 0x1.ce0424p-62f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.2a41f4p-26f, 0.0f, 0x1.161dap-19f, 0x1.03c99cp-62f,
     0x1.c6c39ep-101f, 0.0f, 0x1.58719ep-35f, 0x1.bec534p-87f, 0.0f, 0x1.1c0f9p-82f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e7453ep-4f, 0.0f, 0x1.6d861ep-10f,
     0x1.5d338ep-119f, 0x1.05cb64p-35f, 0x1.306136p-96f, 0x1.740928p-8f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f9549cp-32f, 0x1.7f0d82p-9f, 0.0f, 0.0f, 0x1.5761e6p-40f, 0.0f,
     0x1.8c865cp-33f, 0.0f, 0.0f, 0x1.7daaa6p-94f, 0x1.03b49ap-101f, 0x1.8946cp-50f,
     0x1.06b738p-103f, 0x1.fe6cbp-12f, 0x1.1f7a6ep-10f, 0x1.2dd6c2p-68f,
     0x1.b4d232p-121f, 0x1.b9f532p-7f, 0x1.e639fep-53f, 0.0f, 0x1.25dbcp-82f,
     0x1.215dd8p-95f, 0.0f, 0x1.cac65ap-60f, 0.0f, 0.0f, 0.0f, 0x1.20030ep-70f, 0.0f,
     0x1.82d2dep-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9ece94p-126f,
     0.0f, 0.0f, 0x1.e9dbb6p-57f, 0x1.4a6c4cp-60f, 0x1.99a30cp-19f, 0x1.edca92p-31f,
     0x1.151c92p-6f, 0.0f, 0x1.8c57a6p-22f, 0x1.d17748p-103f, 0.0f, 0.0f,
     0x1.ee9de8p-93f, 0x1.0325ccp-18f, 0.0f, 0x1.96ae2p-23f, 0.0f, 0x1.536a36p-54f,
     0.0f, 0.0f, 0x1.fd489p-122f, 0.0f, 0x1.d138ep-8f, 0x1.2b2172p-126f,
     0x1.df17e6p-46f, 0.0f, 0.0f, 0.0f, 0x1.ef9bfap-59f, 0.0f, 0.0f, 0.0f,
     0x1.14016ap-59f, 0.0f, 0.0f, 0x1.7e9846p-48f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fa04bp-95f, 0.0f, 0x1.aa278ep-77f, 0.0f, 0x1.86d88cp-59f, 0.0f,
     0x1.dec382p-47f, 0x1.d03efp-50f, 0.0f, 0x1.285b78p-79f, 0x1.f10468p-12f,
     0x1.d29b72p-18f, 0.0f, 0x1.e3dcdap-51f, 0.0f, 0.0f, 0x1.3c0c9ep-100f, 0.0f,
     0x1.7918fcp-97f, 0.0f, 0x1.778c66p-108f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.25b9a6p-126f, 0x1.eb3e7ap-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eb02c2p-26f,
     0.0f, 0x1.92b09cp-118f, 0.0f, 0x1.615936p-70f, 0x1.42375ep-22f, 0.0f, 0.0f, 0.0f,
     0x1.e4c11ep-117f, 0x1.7dc89ep-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8933a8p-67f,
     0x1.fab98ap-99f, 0.0f, 0x1.d8c52ap-123f, 0.0f, 0.0f, 0.0f, 0x1.cdac1cp-20f,
     0x1.0732acp-17f, 0.0f, 0x1.4c5866p-101f, 0x1.93cf9cp-89f, 0x1.fbea38p-98f,
     0x1.cb09e6p-89f, 0.0f, 0x1.41fdeap-8f, 0.0f, 0x1.0f054cp-60f, 0.0f,
     0x1.554c1p-44f, 0x1.128818p-36f, 0.0f, 0x1.701338p-51f, 0x1.67f6eap-5f, 0.0f,
     0.0f, 0.0f, 0x1.3c5f42p-54f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f,
     0x1.f2309cp-1f, 0.0f, 0x1.c7aa9p-65f, 0x1.488a56p-103f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.73108cp-65f, 0.0f, 0.0f, 0x1.d9613p-79f, 0x1.239f0ap-32f, 0.0f, 0.0f,
     0.0f, 0x1.3d7914p-118f, 0.0f, 0x1.e312eep-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.629f04p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4ac0c6p-54f, 0.0f,
     0x1.c64be8p-112f, 0.0f, 0x1.8ad20ep-71f, 0.0f, 0.0f, 0x1.23a51ap-12f,
     0x1.466f3ap-62f, 0x1.689fa4p-89f, 0x1.dfcce4p-26f, 0.0f, 0x1.3178c4p-39f,
     0x1.be0236p-65f, 0x1.7cf4fep-115f, 0x1.14a97ap-90f, 0x1.798e1cp-100f, 0.0f, 0.0f,
     0x1.9d99dp-120f, 0.0f, 0x1.82adfap-88f, 0.0f, 0.0f, 0x1.593892p-78f,
     0x1.379afcp-41f, 0.0f, 0.0f, 0x1.efbd44p-120f, 0.0f, 0x1.96a1dep-2f, 0.0f, 0.0f,
     0x1.f1246p-34f, 0x1.ce7cp-31f, 0x1.fe8b3ep-97f, 0.0f, 0x1.9cd10cp-109f, 0.0f,
     0.0f, 0x1.0666bp-4f, 0.0f, 0.0f, 0x1.760024p-109f, 0x1.c68034p-7f, 0.0f,
     0x1.aca484p-24f, 0.0f, 0x1.736f9ap-28f, 0.0f, 0x1.56630ep-118f, 0x1.3c12b2p-73f,
     0.0f, 0x1.7ea9ecp-6f, 0x1.6ee83cp-118f, 0.0f, 0.0f, 0.0f, 0x1.e71142p-119f,
     0x1.fec7dep-67f, 0x1.d6e2ccp-20f, 0.0f, 0x1.db9e86p-23f, 0x1.2c901ep-18f, 0.0f,
     0x1.a00676p-15f, 0.0f, 0.0f, 0x1.311db4p-46f, 0x1.d38308p-4f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.5a2e3ap-40f, 0.0f, 0.0f, 0x1.0ee3aep-96f, 0x1.14752ap-38f,
     0x1.7f56bap-43f, 0.0f, 0x1.9340ccp-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b0c1c8p-64f,
     0.0f, 0x1.4503e6p-26f, 0.0f, 0x1.4cdcdap-77f, 0x1.99ba0ap-126f, 0.0f, 0.0f,
     0x1.09d256p-5f, 0x1.4d5daep-119f, 0x1.a37474p-59f, 0x1.f152b2p-89f, 0.0f,
     0x1.e87906p-41f, 0.0f, 0x1.5279aap-52f, 0x1.270b0ep-22f, 0x1.340f0ap-27f, 0.0f,
     0x1.e64776p-88f, 0x1.2ccb2ap-41f, 0.0f, 0x1.2f5624p-80f, 0x1.ffea4ep-38f, 0.0f,
     0x1.b480acp-3f, 0.0f, 0x1.a9214ep-55f, 0.0f, 0x1.9e85b6p-89f, 0x1.27d348p-114f,
     0x1.7b7cd2p-102f, 0x1.ba155ap-81f, 0.0f, 0x1.ee4d16p-78f, 0x1.c0974ap-1f, 0.0f,
     0x1.edb492p-20f, 0x1.fe390ep-73f, 0.0f, 0.0f, 0x1.0681cap-112f, 0.0f, 0.0f,
     0x1.e2b3fep-59f, 0x1.fc340cp-1f, 0.0f, 0x1.f8aee4p-58f, 0.0f, 0x1.d0f72cp-112f,
     0x1.e7bd14p-29f, 0x1.55e598p-18f, 0x1.87d66cp-87f, 0.0f, 0.0f, 0x1.8ce1eep-114f,
     0x1.723822p-69f, 0x1.0043f8p-40f, 0x1.92ed3p-7f, 0.0f, 0.0f, 0x1.3a72p-27f, 0.0f,
     0.0f, 0.0f, 0x1.47105p-40f, 0x1.151ab8p-48f, 0x1.4f677cp-37f, 0.0f,
     0x1.a7b7c6p-117f, 0x1.dbf99p-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.935c2cp-98f, 0.0f, 0.0f, 0.0f, 0x1.a7237cp-20f, 0.0f, 0x1.47337p-32f,
     0x1.248f42p-72f, 0x1.7bb58p-107f, 0x1.dfc68ap-79f, 0.0f, 0x1.24a87ep-75f,
     0x1.63ffe4p-25f, 0.0f, 0.0f, 0x1.08c69ap-118f, 0.0f, 0x1.39b38cp-1f,
     0x1.70ff96p-57f, 0x1.7199ecp-126f, 0.0f, 0.0f, 0x1.f9acbp-126f, 0x1.58db3ap-46f,
     0.0f, 0x1.6414cp-15f, 0.0f, 0x1.8b942ep-109f, 0x1.96c98ep-73f, 0x1.d930fap-41f,
     0.0f, 0x1.9590e8p-94f, 0x1.00ca3p-112f, 0.0f, 0.0f, 0.0f, 0x1.2ed062p-67f, 0.0f,
     0.0f, 0.0f, 0x1.92a838p-44f, 0.0f, 0x1.af0e44p-90f, 0x1.41e2cep-125f, 0.0f,
     0x1.8f01ccp-78f, 0.0f, 0x1.b49a6p-125f, 0x1.ade1e2p-69f, 0x1.6454a6p-45f,
     0x1.a78752p-27f, 0.0f, 0.0f, 0.0f, 0x1.c1a3fcp-122f, 0x1.409706p-78f,
     0x1.d74c54p-8f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.3a3e4p-41f, 0.0f,
     0x1.5ee8b2p-67f, 0x1.ad6a76p-122f, 0x1.c9e6c6p-22f, 0x1.8c6c58p-89f, 0.0f,
     0x1.eb99e4p-11f, 0x1.bdf36cp-26f, 0.0f, 0.0f, 0.0f, 0x1.043cfp-11f, 0.0f,
     0x1.7a9d34p-59f, 0x1.8e9246p-109f, 0.0f, 0.0f, 0x1.d10544p-79f, 0x1.eae49ep-38f,
     0x1.c0f13cp-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e50122p-59f,
     0.0f, 0x1.bc35b6p-36f, 0.0f, 0.0f, 0x1.d16b1cp-17f, 0.0f, 0.0f, 0.0f,
     0x1.0dff8p-122f, 0.0f, 0x1.1997dcp-126f, 0.0f, 0.0f, 0x1.03f6aap-77f,
     0x1.a2ad5cp-14f, 0x1.123f52p-106f, 0.0f, 0.0f, 0x1.1c1b84p-7f, 0x1.6acc7cp-37f,
     0x1.ee4d48p-97f, 0.0f, 0x1.5918b8p-35f, 0x1.f42578p-102f, 0x1.03c25p-82f, 0.0f,
     0x1.e95d08p-124f, 0.0f, 0x1.8c6fe8p-46f, 0x1.6b86a2p-39f, 0x1.c87816p-68f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.62f09p-42f, 0.0f, 0.0f, 0.0f, 0x1.a3c586p-101f, 0.0f, 0.0f,
     0x1.bfc3e8p-96f, 0.0f, 0x1.a728a4p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.42c6aep-6f, 0.0f, 0x1.1155f2p-42f, 0.0f, 0x1.758ac8p-23f, 0x1.5ed95ap-19f,
     0x1.8ac67cp-115f, 0.0f, 0x1.c8bbep-108f, 0x1.f356c2p-76f, 0x1.a73b46p-125f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.364ef4p-54f, 0.0f, 0.0f,
     0x1.b296fep-123f, 0x1.fc21bcp-66f, 0.0f, 0x1.cf5fcp-81f, 0x1.fe07cap-39f,
     0x1.05bd26p-75f, 0.0f, 0x1.12b12ap-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4fafc6p-37f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.6fcbap-85f, 0.0f, 0x1.18f0cep-70f, 0.0f,
     0x1.738db6p-94f, 0x1.7fc2c6p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.416714p-64f,
     0x1.43ac4p-32f, 0x1.9f2422p-105f, 0x1.dd4948p-25f, 0.0f, 0.0f, 0x1.0754cep-42f,
     0x1.19396cp-58f, 0.0f, 0.0f, 0x1.a667d4p-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c0f72cp-106f, 0.0f, 0x1.d29c56p-39f, 0.0f, 0.0f, 0.0f, 0x1.1c0116p-75f,
     0x1.8802dep-107f, 0.0f, 0x1.068becp-23f, 0x1.6860fcp-99f, 0.0f, 0.0f,
     0x1.520a72p-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.221e7cp-48f,
     0x1.c87de6p-36f, 0x1.04cccap-50f, 0x1.f819a2p-15f, 0.0f, 0x1.80d90cp-102f,
     0x1.3b6424p-107f, 0x1.2d06f2p-29f, 0.0f, 0x1.dd299ep-81f, 0x1.b84542p-79f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.79494ap-91f, 0x1.278f14p-36f, 0.0f, 0.0f, 0x1.13d7a8p-110f,
     0.0f, 0.0f, 0.0f, 0x1.6bf86cp-84f, 0.0f, 0.0f, 0x1.160b76p-86f, 0.0f,
     0x1.21ce8ap-5f, 0.0f, 0x1.fcee46p-43f, 0.0f, 0.0f, 0x1.822bccp-58f, 0.0f,
     0x1.4a6662p-83f, 0.0f, 0.0f, 0x1.14aae6p-102f, 0.0f, 0x1.45844p-45f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b74028p-98f, 0.0f, 0x1.1a1c76p-30f, 0.0f, 0.0f, 0.0f,
     0x1.c9fcb4p-44f, 0x1.842a84p-17f, 0.0f, 0x1.6a7efp-38f, 0.0f, 0x1.0a2208p-115f,
     0x1.54ff5ep-78f, 0x1.5829f6p-53f, 0.0f, 0.0f, 0x1.3983fap-33f, 0.0f,
     0x1.53136cp-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.aae556p-70f, 0x1.dca544p-90f,
     0.0f, 0.0f, 0x1.9bfe5p-80f, 0x1.227d8cp-43f, 0x1.b4551cp-125f, 0x1.56eb3ap-25f,
     0x1.af82acp-14f, 0x1.05ac24p-107f, 0.0f, 0x1.dfb162p-100f, 0.0f, 0x1.f50a86p-42f,
     0x1.7c0e84p-96f, 0x1.84d13ep-76f, 0.0f, 0x1.1e8e7p-19f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a3eef8p-110f, 0.0f, 0x1.fe32bp-75f, 0x1.487df6p-65f, 0.0f,
     0x1.d4dfaep-118f, 0.0f, 0x1.40d586p-78f, 0.0f, 0.0f, 0.0f, 0x1.a3978p-116f,
     0x1.d127d4p-16f, 0.0f, 0.0f, 0x1.1ddbbap-41f, 0.0f, 0.0f, 0x1.0aff72p-62f, 0.0f,
     0x1.a448bep-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d856e4p-19f, 0.0f,
     0x1.b8ab02p-103f, 0x1.2d70ap-82f, 0x1.88dc4ap-109f, 0x1.7af1a2p-64f,
     0x1.b016d6p-53f, 0.0f, 0.0f, 0.0f, 0x1.1c5c1cp-14f, 0x1.548c4p-22f,
     0x1.4adafep-61f, 0.0f, 0.0f, 0.0f, 0x1.4e2586p-10f, 0.0f, 0x1.a0fda6p-52f,
     0x1.11d0eap-122f, 0.0f, 0x1.3b2904p-60f, 0.0f, 0x1.a9e144p-35f, 0x1.031c7ep-30f,
     0x1.5032c8p-109f, 0.0f, 0.0f, 0x1.353a82p-95f, 0.0f, 0.0f, 0x1.b3d484p-62f, 0.0f,
     0.0f, 0x1.dea60cp-28f, 0x1.625b96p-118f, 0.0f, 0x1.f4a848p-23f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.549acp-38f, 0x1.8d9834p-115f, 0.0f, 0.0f, 0x1.8d4edep-61f,
     0x1.5f2c2ap-47f, 0.0f, 0.0f, 0x1.131f0ap-119f, 0.0f, 0x1.2f40bap-86f,
     0x1.6e22bap-97f, 0.0f, 0x1.b0ef7ap-67f, 0x1.e4fcc2p-94f, 0x1.0f030ap-11f, 0.0f,
     0.0f, 0x1.e6cd5ep-31f, 0.0f, 0.0f, 0x1.ded3d2p-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.4d73fap-97f, 0.0f, 0.0f, 0.0f, 0x1.140d14p-2f, 0x1.316c28p-109f,
     0x1.b15e8cp-20f, 0.0f, 0x1.aae694p-77f, 0.0f, 0.0f, 0x1.2c165cp-11f, 0.0f, 0.0f,
     0.0f, 0x1.e3d928p-18f, 0.0f, 0x1.6779ecp-48f, 0x1.37fbp-50f, 0x1.3c99d2p-121f,
     0.0f, 0x1.f20c14p-44f, 0x1.c4417ep-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8bbe52p-46f, 0.0f, 0x1.82ec56p-27f, 0x1.fc853p-83f, 0.0f, 0x1.48613ap-102f,
     0.0f, 0x1.d3429ep-30f, 0.0f, 0.0f, 0.0f, 0x1.864752p-74f
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
            tmp1 = Sleef_lgammaf4_u10kvx(tmp0);
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
    printf("Sleef_lgammaf4_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_lgammaf4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
