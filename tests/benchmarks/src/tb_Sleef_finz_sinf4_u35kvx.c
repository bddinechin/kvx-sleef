/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sinf4_u35kvx.c --function Sleef_finz_sinf4_u35kvx \
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
     0.0f, 0.0f, 0x1.9a4b4p-44f, 0.0f, 0x1.36e388p-122f, 0.0f, 0x1.d5e658p-3f,
     0x1.73ac64p-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e4e2dep-89f, 0x1.02c31cp-45f,
     0x1.f792aep-75f, 0x1.be83fp-69f, 0.0f, 0x1.ef4056p-70f, 0x1.59b32p-54f,
     0x1.2fbc82p-45f, 0.0f, 0.0f, 0x1.cf44p-105f, 0.0f, 0x1.e0310ap-91f,
     0x1.c9636p-103f, 0x1.eee8cap-32f, 0.0f, 0.0f, 0x1.b99dap-104f, 0x1.91cdap-52f,
     0.0f, 0x1.acc13ap-65f, 0x1.b93ed4p-110f, 0x1.f08366p-41f, 0.0f, 0x1.785cdp-21f,
     0x1.e05146p-57f, 0x1.653786p-62f, 0.0f, 0.0f, 0.0f, 0x1.4b165cp-82f,
     0x1.38b822p-94f, 0.0f, 0x1.972cbp-105f, 0x1.a15e44p-34f, 0.0f, 0x1.1b63d8p-121f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.dc619cp-52f, 0.0f, 0x1.cd9cf6p-90f, 0x1.c25368p-11f,
     0x1.c3755ep-36f, 0.0f, 0x1.e38fc4p-59f, 0x1.08b4f2p-71f, 0x1.052714p-98f,
     0x1.30c976p-40f, 0.0f, 0x1.70cf66p-43f, 0x1.3c16b4p-82f, 0x1.d0cd4cp-27f,
     0x1.a09a7ep-60f, 0x1.da2046p-85f, 0x1.7d83b2p-25f, 0.0f, 0.0f, 0.0f,
     0x1.2821f8p-109f, 0x1.df684p-119f, 0.0f, 0.0f, 0x1.68bd9ap-124f, 0x1.0b1c84p-5f,
     0x1.9ca056p-23f, 0.0f, 0x1.d3038p-26f, 0.0f, 0x1.66a7b4p-100f, 0x1.58a236p-86f,
     0.0f, 0x1.5c1f8cp-4f, 0.0f, 0.0f, 0.0f, 0x1.d3d39cp-14f, 0.0f, 0x1.917f94p-106f,
     0x1.ddb9eap-53f, 0.0f, 0.0f, 0.0f, 0x1.ee7702p-96f, 0x1.d1f9d8p-67f,
     0x1.c98c0ep-104f, 0.0f, 0.0f, 0x1.332172p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c3d6fap-24f, 0x1.6a3bf4p-94f, 0.0f, 0x1.0bbce4p-98f, 0x1.86827ep-33f,
     0.0f, 0x1.e4a4c2p-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fde1ep-112f, 0.0f,
     0x1.caf076p-22f, 0x1.39c93ap-115f, 0x1.d95f7p-50f, 0.0f, 0x1.c43af2p-14f, 0.0f,
     0.0f, 0x1.ab6dd4p-10f, 0.0f, 0x1.17284cp-10f, 0x1.8b2c74p-43f, 0.0f, 0x1p0f,
     0.0f, 0x1.f16018p-23f, 0.0f, 0x1.0c3d4ep-21f, 0.0f, 0x1.30ecfap-80f,
     0x1.68d8dp-82f, 0.0f, 0.0f, 0x1.e05f88p-20f, 0x1.4ec3d2p-73f, 0.0f,
     0x1.51f3f4p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bc5bccp-53f, 0.0f, 0x1.a1b70ap-17f,
     0.0f, 0x1.1c5d76p-109f, 0.0f, 0.0f, 0x1.d7abaep-108f, 0.0f, 0x1.60fecap-10f,
     0x1.8c9a24p-103f, 0x1.5cdefcp-119f, 0x1.0d99e4p-43f, 0x1.376e3cp-106f, 0.0f,
     0x1.918d52p-6f, 0.0f, 0.0f, 0x1.916b3p-32f, 0.0f, 0x1.bcd136p-89f,
     0x1.82ca7ap-125f, 0x1.26293p-39f, 0.0f, 0.0f, 0x1.348bf6p-94f, 0.0f,
     0x1.2523e8p-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.93f9ep-76f, 0x1.c67078p-22f,
     0.0f, 0.0f, 0.0f, 0x1.3ef754p-119f, 0x1.7a5fdep-53f, 0.0f, 0.0f,
     0x1.43ad98p-117f, 0.0f, 0.0f, 0x1.731ae8p-26f, 0x1.fd150ap-63f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.5e5c02p-120f, 0x1.1df0eap-26f, 0.0f, 0.0f, 0x1.27ec66p-65f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.14d658p-18f, 0.0f, 0.0f, 0x1.0f0aep-46f, 0.0f, 0.0f,
     0x1.b8d544p-117f, 0x1.d664e6p-18f, 0x1.828332p-67f, 0.0f, 0x1.f379b2p-19f,
     0x1.d63b7p-20f, 0x1.55dbc8p-103f, 0.0f, 0.0f, 0.0f, 0x1.92d052p-78f, 0.0f, 0.0f,
     0x1.d2a498p-97f, 0.0f, 0.0f, 0x1.1b2f32p-120f, 0.0f, 0x1.cbf926p-96f,
     0x1.e2cc6ap-60f, 0x1.e18b16p-90f, 0.0f, 0x1.a17c7p-51f, 0.0f, 0.0f, 0.0f,
     0x1.0e38dcp-47f, 0x1.c1930cp-50f, 0.0f, 0x1.19bb3p-125f, 0x1.21b388p-94f, 0.0f,
     0.0f, 0x1.e2bba8p-86f, 0x1.d53372p-77f, 0x1.4de824p-35f, 0.0f, 0.0f, 0.0f,
     0x1.cccff2p-73f, 0x1.1e0a26p-26f, 0.0f, 0x1.cbf9bap-31f, 0x1.e0cb34p-90f,
     0x1.1f12b4p-60f, 0x1.7c21bep-114f, 0.0f, 0.0f, 0x1.9fe5c6p-116f, 0.0f,
     0x1.b856bp-61f, 0x1.2721bp-19f, 0x1.3868aep-56f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e993eep-105f, 0.0f, 0.0f, 0x1.7bf90cp-35f, 0x1.ba3d76p-58f, 0x1.7fe2fp-53f,
     0x1.81679cp-26f, 0.0f, 0x1.d5abe8p-43f, 0.0f, 0x1.085404p-117f, 0x1.76ff8p-80f,
     0x1.d94ea8p-90f, 0.0f, 0.0f, 0x1.8a9098p-101f, 0.0f, 0.0f, 0x1.a744eap-76f,
     0x1.19b262p-109f, 0.0f, 0.0f, 0.0f, 0x1.af9164p-114f, 0.0f, 0.0f, 0.0f,
     0x1.dfe51cp-57f, 0.0f, 0.0f, 0x1.30a896p-77f, 0x1.01b064p-83f, 0.0f, 0.0f,
     0x1.7884cap-83f, 0.0f, 0x1.9ab324p-110f, 0.0f, 0x1.6e21d2p-21f, 0.0f,
     0x1.7852e2p-117f, 0.0f, 0x1.242ca4p-119f, 0.0f, 0.0f, 0x1.f3555p-21f, 0.0f,
     0x1.606ec6p-111f, 0x1.f19ccap-53f, 0x1.4cb6d6p-84f, 0.0f, 0x1.e705fap-99f,
     0x1.97e0fap-80f, 0.0f, 0x1.fedc3p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.0a3554p-56f, 0x1.2a3c64p-13f, 0x1.3fa5f6p-58f, 0.0f, 0.0f,
     0x1.386af8p-99f, 0x1.a40314p-72f, 0.0f, 0.0f, 0.0f, 0x1.f84758p-2f, 0.0f,
     0x1.4eac82p-71f, 0x1.0c3dbcp-107f, 0.0f, 0x1.9cadbap-17f, 0.0f, 0.0f,
     0x1.9bc124p-50f, 0x1.546406p-89f, 0.0f, 0.0f, 0.0f, 0x1.8b2a8cp-110f,
     0x1.393ffap-14f, 0.0f, 0.0f, 0x1.2b2ab6p-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.05984p-4f, 0x1.83be0ap-119f, 0.0f, 0.0f, 0x1.9b70cap-96f, 0x1.8d58eap-22f,
     0x1.156106p-35f, 0.0f, 0.0f, 0x1.c7095cp-60f, 0x1.b60bc8p-58f, 0.0f,
     0x1.f418aap-73f, 0.0f, 0x1.b0f464p-122f, 0x1.d4acc4p-22f, 0x1.846b96p-59f,
     0x1.67408ap-88f, 0.0f, 0x1.581a16p-49f, 0x1.494864p-40f, 0.0f, 0x1.1c2d42p-2f,
     0x1.05fd3cp-89f, 0x1.27519p-62f, 0.0f, 0.0f, 0.0f, 0x1.2358bep-126f,
     0x1.1a811ap-52f, 0.0f, 0x1.894d4ep-13f, 0.0f, 0.0f, 0x1.6bd918p-34f,
     0x1.ff41c4p-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2db9a8p-41f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c4e94ep-75f, 0x1.9535f8p-49f, 0x1.08371ap-93f,
     0x1.d3a86ep-125f, 0.0f, 0x1.5be574p-44f, 0x1.72695ap-63f, 0x1.0f019p-42f,
     0x1.d92f92p-47f, 0x1.59c7b8p-16f, 0x1.65c9ep-39f, 0x1.ed1f98p-100f,
     0x1.fe598ep-28f, 0.0f, 0x1.a7e6a2p-104f, 0x1.c78b7cp-105f, 0x1.a6c556p-29f, 0.0f,
     0x1.68990ap-5f, 0.0f, 0.0f, 0.0f, 0x1.e9e1d6p-66f, 0.0f, 0x1.7abb44p-61f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.314722p-48f, 0.0f, 0.0f, 0x1.aef402p-23f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b82dcep-94f, 0.0f, 0x1.f9881p-21f, 0.0f, 0.0f, 0x1.5cfd2p-23f,
     0x1.9145b8p-14f, 0.0f, 0.0f, 0x1.ee803p-56f, 0.0f, 0x1.5f0e6p-76f, 0x1.14ef7p-8f,
     0.0f, 0x1.e171bcp-2f, 0.0f, 0x1.1b559ap-94f, 0.0f, 0x1.102a5p-19f,
     0x1.4bdd26p-43f, 0.0f, 0.0f, 0.0f, 0x1.7e8162p-26f, 0x1.bbfae2p-65f,
     0x1.628044p-104f, 0.0f, 0x1.f9d5c2p-117f, 0x1.18beaep-104f, 0.0f, 0.0f,
     0x1.5814a6p-100f, 0x1.4eed02p-11f, 0x1.806c48p-46f, 0x1.2d8714p-60f,
     0x1.36d30ep-8f, 0x1.dc4542p-100f, 0x1.53f818p-34f, 0x1.0e70fap-57f, 0.0f, 0.0f,
     0.0f, 0x1.449d46p-51f, 0.0f, 0.0f, 0x1.82afdp-31f, 0x1.a9e7c8p-73f,
     0x1.5c0f12p-14f, 0x1.5ded0ap-67f, 0.0f, 0x1.6814cep-123f, 0.0f, 0.0f,
     0x1.8d647ep-52f, 0.0f, 0.0f, 0.0f, 0x1.612944p-69f, 0x1.b2eab4p-45f,
     0x1.f64414p-14f, 0x1.6b2bdp-77f, 0.0f, 0x1.839f12p-87f, 0x1.4d5538p-39f,
     0x1.7067d2p-41f, 0.0f, 0x1.1f2abep-40f, 0x1.2785e8p-29f, 0x1.e25104p-8f,
     0x1.5a0ea2p-74f, 0x1.2f752ep-52f, 0x1.a4809cp-7f, 0.0f, 0x1.3016c6p-58f,
     0x1.4f8a4ep-72f, 0x1.509b86p-27f, 0.0f, 0.0f, 0x1.052108p-27f, 0.0f,
     0x1.9e84f2p-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.94841ep-53f,
     0x1.cc9192p-39f, 0.0f, 0.0f, 0x1.f9e694p-26f, 0x1.c12b8cp-92f, 0x1.f493f4p-33f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ff6b8p-115f, 0.0f, 0x1p0f,
     0x1.b3d68ep-29f, 0x1p0f, 0.0f, 0.0f, 0x1.3a6cd8p-63f, 0x1.ccb2c2p-117f,
     0x1.f8b2c2p-76f, 0x1.7b0092p-97f, 0.0f, 0x1.c1f0f2p-6f, 0x1.20402cp-35f,
     0x1.1bebf8p-98f, 0.0f, 0x1.1f1384p-109f, 0x1.e26e8ep-50f, 0x1.ae1b8ap-105f,
     0x1.a376d4p-12f, 0x1.156f9p-49f, 0x1.11c55ap-84f, 0.0f, 0.0f, 0.0f,
     0x1.be568cp-102f, 0.0f, 0x1.bbfb4ap-24f, 0x1.a6b996p-75f, 0x1.e099d4p-100f, 0.0f,
     0x1.5dddb6p-27f, 0x1.04fb56p-61f, 0x1.d2b338p-43f, 0.0f, 0.0f, 0x1.73f95ep-14f,
     0.0f, 0.0f, 0.0f, 0x1.6485fp-36f, 0x1.772898p-75f, 0.0f, 0.0f, 0.0f,
     0x1.f4d2dp-21f, 0x1.beb78cp-70f, 0x1.3c332ep-60f, 0.0f, 0x1.950b1ap-15f,
     0x1.d96adap-51f, 0.0f, 0.0f, 0.0f, 0x1.9e0192p-24f, 0.0f, 0.0f, 0.0f,
     0x1.e983f4p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.17f382p-48f, 0x1.371fccp-126f,
     0.0f, 0.0f, 0x1.095308p-20f, 0.0f, 0x1.abf734p-42f, 0.0f, 0x1.68b394p-56f, 0.0f,
     0.0f, 0x1.ba90dap-34f, 0x1.15541ep-125f, 0x1.e5061ep-27f, 0.0f, 0x1.9e0d08p-91f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.221244p-77f, 0.0f, 0.0f, 0x1.0f081ep-94f,
     0x1.6b28fcp-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c7adap-70f, 0.0f, 0.0f,
     0x1.042be8p-126f, 0.0f, 0x1.82e4dap-49f, 0x1.2e3fcp-109f, 0.0f, 0.0f, 0.0f,
     0x1.a0558ep-93f, 0.0f, 0x1.d948d6p-85f, 0x1.51e986p-70f, 0x1.34b8b4p-98f, 0.0f,
     0.0f, 0x1.b2c576p-85f, 0.0f, 0x1.27996cp-31f, 0x1.3c7886p-32f, 0.0f,
     0x1.d3544ep-101f, 0x1.96afa4p-53f, 0.0f, 0.0f, 0x1.fdcd94p-36f, 0.0f,
     0x1.dd475ep-70f, 0x1.6c947cp-49f, 0.0f, 0.0f, 0x1.5f3c2p-75f, 0.0f, 0.0f, 0.0f,
     0x1.949558p-102f, 0.0f, 0x1.6a6e4cp-124f, 0.0f, 0.0f, 0.0f, 0x1.dfdb64p-5f, 0.0f,
     0.0f, 0.0f, 0x1.5452d2p-88f, 0x1.401fa8p-15f, 0x1.8a883cp-93f, 0.0f, 0.0f,
     0x1.1060eap-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a03c92p-32f, 0.0f, 0.0f, 0.0f,
     0x1.9e92aep-33f, 0x1.573b74p-28f, 0x1.936e4cp-95f, 0.0f, 0x1.bb7f48p-14f,
     0x1.0914ep-70f, 0.0f, 0.0f, 0.0f, 0x1.418d88p-50f, 0.0f, 0x1.e262e4p-33f,
     0x1.2b7f1ap-47f, 0.0f, 0.0f, 0.0f, 0x1.50f7e6p-95f, 0.0f, 0.0f, 0x1.79a3eap-93f,
     0.0f, 0x1.9636e2p-61f, 0.0f, 0x1.a2b0bep-78f, 0.0f, 0x1.f48d7p-94f, 0.0f,
     0x1.ffa576p-7f, 0.0f, 0x1.66674p-49f, 0.0f, 0x1.94b348p-2f, 0x1.c4dce6p-107f,
     0.0f, 0.0f, 0.0f, 0x1.4f8ae2p-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ea2d24p-48f, 0.0f,
     0x1.4bf996p-95f, 0.0f, 0x1.889e2ep-86f, 0x1.674a8p-44f, 0x1.b631aap-10f, 0.0f,
     0.0f, 0x1.a731f8p-10f, 0.0f, 0.0f, 0x1.bd5e2cp-116f, 0.0f, 0.0f, 0.0f, 0x1p0f,
     0x1.5b17ccp-13f, 0.0f, 0.0f, 0x1.f66ecep-82f, 0x1.f469eep-120f, 0x1.29146p-88f,
     0.0f, 0x1.20cab8p-26f, 0.0f, 0x1.f8d6acp-42f, 0x1.ff9a0cp-90f, 0x1.9c073p-88f,
     0.0f, 0x1.b7009ep-6f, 0x1.02339p-18f, 0x1.9eb118p-109f, 0x1.0dbd76p-79f,
     0x1.9a9d46p-28f, 0x1.c1eb86p-20f, 0.0f, 0.0f, 0x1.404012p-65f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.36fed4p-46f, 0.0f, 0x1.afa2d8p-42f, 0.0f, 0x1.28d69p-52f,
     0.0f, 0x1.9d8152p-14f, 0x1.683dc6p-80f, 0x1.041712p-9f, 0.0f, 0x1.f966f8p-1f,
     0x1.6aa1dap-37f, 0.0f, 0x1.539222p-23f, 0x1.5a2478p-104f, 0x1.0fd6d8p-103f, 0.0f,
     0x1.9e8d64p-80f, 0.0f, 0x1.4575f4p-102f, 0.0f, 0.0f, 0x1.c43962p-54f,
     0x1.62cfep-122f, 0.0f, 0x1.9abb26p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5a063ap-43f,
     0x1.5fe30ep-123f, 0.0f, 0.0f, 0.0f, 0x1.fd1782p-99f, 0x1.ac6eecp-7f,
     0x1.33534p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.be2f2cp-30f, 0.0f, 0x1.efc53ep-70f,
     0.0f, 0.0f, 0x1.305b0cp-124f, 0x1.03a276p-26f, 0.0f, 0.0f, 0x1.4eb3fep-30f, 0.0f,
     0x1.82c8d4p-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.af12a2p-126f, 0x1.af615ep-32f, 0.0f,
     0x1.86429cp-31f, 0x1.36d982p-12f, 0x1.5bd676p-99f, 0.0f, 0x1.eb3844p-124f,
     0x1.f1e46ep-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fc4a2cp-72f, 0x1.03275cp-57f,
     0.0f, 0x1.bfeba6p-50f, 0x1.a7ea12p-50f, 0.0f, 0.0f, 0x1.c53218p-9f, 0.0f,
     0x1.c12b4ep-44f, 0x1.3902bap-10f, 0x1.b80a8cp-108f, 0x1.85b4e4p-81f,
     0x1.5ad446p-109f, 0.0f, 0.0f, 0.0f, 0x1.6a4f02p-13f, 0x1.2067ccp-59f,
     0x1.29dcc2p-41f, 0.0f, 0x1.d29b24p-16f, 0.0f, 0x1.ec0d3ep-44f, 0x1.059952p-74f,
     0.0f, 0.0f, 0x1.cf579p-93f, 0.0f, 0.0f, 0x1.b0edb2p-29f, 0.0f, 0x1.c808dp-3f,
     0x1.fd733ep-39f, 0x1.ea526cp-49f, 0x1.193b62p-73f, 0.0f, 0.0f, 0x1.068bf6p-63f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7ed4b4p-40f, 0x1.acf91ap-2f, 0.0f,
     0x1.c9fa02p-95f, 0.0f, 0x1.4f0e5p-46f, 0.0f, 0x1.839972p-46f, 0x1.df91fep-53f,
     0.0f, 0x1.540fa4p-13f, 0.0f, 0x1.8e1ed2p-55f, 0.0f, 0.0f, 0x1.62d64ep-59f, 0.0f,
     0x1.635fc6p-55f, 0.0f, 0x1.622d6ep-76f, 0x1.810688p-49f, 0.0f, 0x1.26c274p-6f,
     0x1.0aa21ep-64f, 0x1.5ac65ap-10f, 0x1.a43676p-34f, 0.0f, 0x1.55ed3ep-31f,
     0x1.477db8p-69f, 0x1.86220ep-57f, 0x1.9f2692p-16f, 0x1.238f98p-121f,
     0x1.6d4d5ap-102f, 0x1p0f, 0.0f, 0x1.e926bep-33f, 0x1.193feep-26f,
     0x1.4980fcp-73f, 0x1.2a392ep-114f, 0.0f, 0x1.b54ec6p-113f, 0.0f, 0.0f,
     0x1.c209fap-59f, 0x1.398e08p-30f, 0.0f, 0x1.fa2e7ap-117f, 0x1.096c6cp-122f, 0.0f,
     0x1.63834ap-8f, 0x1.f3ee8cp-109f, 0.0f, 0x1.9b176ep-8f, 0.0f, 0x1.218b44p-112f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.22e7f8p-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.80eefp-11f, 0.0f, 0x1.7e6cd8p-73f, 0.0f, 0x1.3af584p-83f, 0x1.f2da62p-30f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.8fb29p-121f, 0.0f, 0.0f, 0.0f, 0x1.211c4cp-97f, 0.0f,
     0x1.6c2c98p-51f, 0.0f, 0.0f, 0.0f, 0x1.e8c736p-106f, 0x1.01149cp-73f
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
            tmp1 = Sleef_finz_sinf4_u35kvx(tmp0);
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
    printf("Sleef_finz_sinf4_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_sinf4_u35kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
