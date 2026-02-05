/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sqrtf4_kvx.c --function Sleef_finz_sqrtf4_kvx \
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
     0x1.3a227cp-122f, 0.0f, 0.0f, 0x1.6b8e9p-116f, 0.0f, 0.0f, 0x1.24cd5ap-23f,
     0x1.3d9b2p-56f, 0x1.16164p-35f, 0x1.17404ep-61f, 0x1.23496ep-33f, 0.0f,
     0x1.91e818p-37f, 0x1.50ea34p-126f, 0.0f, 0x1.4c32c4p-74f, 0x1.cee248p-47f,
     0x1.477f2p-21f, 0x1.0cf90ap-15f, 0x1.66c94ep-107f, 0.0f, 0x1.1dd95p-7f,
     0x1.24c31ep-75f, 0.0f, 0.0f, 0x1.4059dp-66f, 0x1.118038p-112f, 0x1.a2129ap-34f,
     0.0f, 0x1.980ep-78f, 0x1.26f828p-67f, 0x1.83390ap-86f, 0.0f, 0.0f, 0.0f,
     0x1.6d6ea2p-37f, 0x1.390ffcp-55f, 0x1.60eccep-108f, 0x1.d188p-48f, 0.0f, 0.0f,
     0x1.6fdc26p-26f, 0x1.a0c5ap-111f, 0x1.cb7ba6p-101f, 0x1.6b3f48p-114f, 0x1p0f,
     0x1.69440ap-87f, 0x1.3a877cp-100f, 0x1.73905p-84f, 0x1.670242p-13f, 0.0f, 0.0f,
     0x1.c6d30ep-100f, 0x1.5179fp-79f, 0.0f, 0x1.830a92p-38f, 0x1.8ff328p-28f,
     0x1.1506ccp-9f, 0x1.5b6d5cp-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d8ea32p-61f,
     0x1.f26982p-101f, 0x1.1e7178p-93f, 0x1.b35684p-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.68d4b4p-70f, 0.0f, 0.0f, 0x1.d3b03p-40f, 0x1.f0181p-38f, 0x1.c6f572p-114f,
     0.0f, 0x1.1e5356p-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.482f3cp-24f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c29382p-85f, 0.0f, 0.0f, 0x1.753642p-23f,
     0x1.4717f8p-14f, 0x1.d3cbb8p-109f, 0x1.a6f636p-64f, 0.0f, 0x1.fc604p-82f,
     0x1.e1224p-66f, 0x1.5dc1f4p-75f, 0x1.6393d4p-24f, 0.0f, 0x1.42e508p-47f,
     0x1.c75a8p-74f, 0.0f, 0x1.39211cp-90f, 0x1.b178b6p-6f, 0x1.a1e2bp-126f,
     0x1.c6f27ep-22f, 0x1.af4e9cp-91f, 0.0f, 0.0f, 0x1.89c3ap-125f, 0x1.8b8e9p-7f,
     0x1.8b348ep-54f, 0.0f, 0x1.d0385ap-110f, 0x1.01e21ep-88f, 0.0f, 0x1.457efcp-27f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6fdb32p-24f, 0x1.087554p-49f, 0.0f, 0.0f,
     0x1.43e694p-113f, 0.0f, 0.0f, 0.0f, 0x1.5303cep-80f, 0.0f, 0x1.0396cp-3f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.85b7bap-25f, 0.0f, 0x1.95ffp-32f, 0.0f, 0.0f,
     0x1.05cf58p-11f, 0x1.19e0ap-39f, 0x1.2bdeecp-4f, 0x1.b4abb8p-62f, 0.0f,
     0x1.09f836p-118f, 0.0f, 0.0f, 0x1p0f, 0x1.a099p-97f, 0x1.9d78fcp-38f, 0.0f, 0.0f,
     0.0f, 0x1.1284b6p-85f, 0x1.bc8d82p-123f, 0x1.89d584p-72f, 0x1.c3ffd2p-89f, 0.0f,
     0x1.ec7e98p-14f, 0x1p0f, 0x1.c7107p-86f, 0.0f, 0.0f, 0x1.bface2p-91f,
     0x1.0db6f2p-32f, 0x1p0f, 0.0f, 0x1.894624p-70f, 0x1.9cfebcp-19f, 0x1.9c46d8p-88f,
     0x1.5ead1p-102f, 0x1.f57c8cp-80f, 0x1.803ec2p-120f, 0x1.a01c8cp-16f,
     0x1.ce6572p-102f, 0x1.aebf74p-42f, 0.0f, 0x1.edd9f4p-28f, 0x1.c8cabap-38f,
     0x1.b092a2p-93f, 0x1.9b6128p-48f, 0x1.eb8ap-107f, 0.0f, 0x1.455a34p-15f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c2cc9ep-81f, 0x1.56c06p-6f, 0x1.a07c4p-41f,
     0x1.0aa73cp-59f, 0.0f, 0x1.a11e8cp-59f, 0x1.910406p-80f, 0.0f, 0x1.3e631ep-73f,
     0x1.12b4dap-119f, 0.0f, 0x1.0405f6p-80f, 0x1.8cc75cp-14f, 0.0f, 0x1.7d1b92p-108f,
     0x1.a3f8bep-76f, 0x1.800a76p-75f, 0x1.aee02cp-11f, 0.0f, 0x1.4eec96p-7f,
     0x1.b79decp-124f, 0.0f, 0x1.b202cp-87f, 0.0f, 0.0f, 0x1.52618ap-105f,
     0x1.fba762p-22f, 0x1.bb73ap-95f, 0x1.688f02p-40f, 0.0f, 0.0f, 0.0f,
     0x1.519f26p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.52439ap-65f,
     0x1.3405cep-64f, 0x1.044a1p-31f, 0x1.da8d94p-5f, 0.0f, 0.0f, 0x1.7cf404p-44f,
     0x1.5b4f4cp-30f, 0.0f, 0x1.8308e4p-72f, 0.0f, 0.0f, 0.0f, 0x1.8927f8p-51f,
     0x1.888f5ep-62f, 0.0f, 0x1.c7fefep-39f, 0x1.5008dcp-83f, 0x1.94998ep-100f,
     0x1.8b34b2p-12f, 0.0f, 0x1.390102p-121f, 0.0f, 0x1.d63102p-49f, 0x1.2923dcp-3f,
     0x1.99c13p-125f, 0x1.ba4318p-79f, 0x1.06fcc6p-55f, 0x1.0650ap-5f, 0.0f,
     0x1.ac1c0ap-57f, 0.0f, 0.0f, 0x1.174786p-58f, 0.0f, 0x1.89523p-60f,
     0x1.7721a2p-89f, 0x1.cbeb0ep-91f, 0x1.a13ddap-39f, 0.0f, 0x1.2f442p-51f,
     0x1.65165cp-44f, 0.0f, 0x1.2d8f58p-46f, 0x1.a8efb4p-23f, 0.0f, 0x1.cc8184p-95f,
     0.0f, 0x1.2e9b6ap-109f, 0x1.690152p-51f, 0.0f, 0.0f, 0x1.0beb2ep-118f, 0.0f,
     0.0f, 0.0f, 0x1.fdff22p-117f, 0.0f, 0x1.a9182ap-124f, 0x1.647146p-31f, 0.0f,
     0.0f, 0.0f, 0x1.d0bf0ap-116f, 0.0f, 0x1.cf5bc2p-111f, 0x1.45573p-31f,
     0x1.69d4ccp-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b12b7cp-84f, 0.0f, 0.0f, 0.0f,
     0x1.861d72p-125f, 0.0f, 0x1.c72fc8p-35f, 0.0f, 0x1.8a3c34p-52f, 0.0f,
     0x1.77a9d8p-77f, 0x1.5ed38ep-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2bcf1ep-58f,
     0x1.03edd2p-56f, 0x1.10056ep-88f, 0x1.3a30eep-29f, 0x1.b29ddep-97f, 0.0f,
     0x1.a79024p-100f, 0.0f, 0x1.aa426ep-116f, 0.0f, 0.0f, 0x1.cce1e4p-115f,
     0x1.bcade2p-65f, 0.0f, 0.0f, 0.0f, 0x1.83515ep-6f, 0x1.2503bep-103f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.85a838p-22f, 0x1.668ccp-107f, 0.0f, 0x1.bdff8ap-63f, 0.0f,
     0.0f, 0x1p0f, 0x1.0e4542p-85f, 0.0f, 0x1.1c5e7ap-39f, 0.0f, 0x1.897742p-118f,
     0x1.3d833p-100f, 0x1.e25e9ap-52f, 0.0f, 0x1.0f9142p-92f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ff7a46p-49f, 0x1.d3afbcp-103f, 0.0f, 0.0f, 0.0f, 0x1.cf0efap-91f,
     0x1.ae8734p-126f, 0x1.e562b8p-46f, 0x1.eda78p-101f, 0x1.0ef9f6p-100f,
     0x1.8e9b3ap-35f, 0.0f, 0x1.263686p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d19358p-113f, 0x1.94ba74p-100f, 0.0f, 0.0f, 0.0f, 0x1.481ff2p-98f, 0x1p0f,
     0.0f, 0x1.aac078p-44f, 0.0f, 0x1.8467eep-119f, 0x1.735adap-13f, 0.0f,
     0x1.2c9126p-101f, 0.0f, 0.0f, 0x1.1b8b92p-123f, 0.0f, 0.0f, 0.0f,
     0x1.f77446p-29f, 0x1.80e748p-107f, 0x1.24fc14p-20f, 0x1.89f9dap-41f,
     0x1.e838a8p-97f, 0x1.b460f4p-97f, 0x1.924676p-13f, 0x1.136ccap-65f, 0.0f,
     0x1.2a2bep-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6de8fep-106f, 0x1.4ce23ap-118f,
     0.0f, 0x1.05e1cep-57f, 0.0f, 0x1.e985a8p-57f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.60b65ap-62f, 0x1.6952a2p-48f, 0.0f, 0.0f, 0x1.b44afep-96f, 0x1p0f,
     0x1.bf1852p-9f, 0x1.ca5304p-21f, 0.0f, 0x1.1b5f44p-39f, 0.0f, 0.0f,
     0x1.38802ap-89f, 0.0f, 0x1.6263dap-50f, 0.0f, 0x1.57d348p-84f, 0.0f, 0.0f,
     0x1.5cdedap-96f, 0x1.e35e2cp-76f, 0x1.e59362p-58f, 0x1.3dff14p-13f, 0.0f,
     0x1.72220cp-70f, 0x1.a74c92p-50f, 0x1.52ce2ap-80f, 0x1.5b4902p-69f,
     0x1.0e6b72p-16f, 0.0f, 0.0f, 0.0f, 0x1.120b46p-10f, 0x1.56eeb8p-54f,
     0x1.f24aap-118f, 0x1.34a38cp-98f, 0x1.7c32fep-53f, 0x1.10699ap-40f,
     0x1.48fef6p-30f, 0.0f, 0x1.1b043ep-12f, 0.0f, 0.0f, 0x1.58f976p-26f, 0.0f, 0.0f,
     0x1.f76b2ap-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b8b684p-83f, 0.0f,
     0x1.a2becap-44f, 0x1.bcee8ap-19f, 0x1.c7e662p-83f, 0.0f, 0x1.8eeb88p-82f,
     0x1.60cd62p-107f, 0.0f, 0x1.a175c8p-74f, 0x1.1fb8d2p-31f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b8b0ccp-80f, 0x1.af82a8p-105f, 0x1.4b2354p-71f, 0x1.ae0182p-69f, 0.0f,
     0.0f, 0x1.a6c8e6p-61f, 0.0f, 0.0f, 0.0f, 0x1.92acccp-84f, 0x1.1e7a46p-13f, 0.0f,
     0x1.63a1a4p-74f, 0.0f, 0x1.c3e204p-52f, 0x1.3c0b04p-54f, 0.0f, 0.0f, 0.0f,
     0x1.a83ec6p-86f, 0.0f, 0x1.74bbdap-119f, 0x1.7bb244p-70f, 0x1.a6c176p-26f,
     0x1.7d5e82p-94f, 0x1.b5f54cp-111f, 0x1.a169fcp-55f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c44d34p-2f, 0x1.8be43cp-23f, 0x1.24b674p-79f, 0x1.b99278p-70f, 0.0f, 0.0f,
     0.0f, 0x1.4f8b5ap-101f, 0.0f, 0x1p0f, 0x1.8847bep-97f, 0x1.ce56b2p-117f, 0.0f,
     0x1.0a2bbep-36f, 0x1.053cap-107f, 0x1.999b5ep-7f, 0x1.c51efp-9f, 0.0f,
     0x1.564fa2p-87f, 0.0f, 0x1.014f26p-34f, 0.0f, 0.0f, 0x1.20b78cp-7f,
     0x1.8a3216p-17f, 0.0f, 0x1.04151ap-53f, 0.0f, 0.0f, 0.0f, 0x1.a61a38p-88f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.af801cp-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b4911cp-76f, 0.0f, 0x1.b7a814p-83f, 0x1.e08ac6p-9f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.cc0184p-69f, 0.0f, 0.0f, 0x1.93b346p-120f, 0.0f,
     0x1.3cfcd4p-110f, 0.0f, 0x1.5aeb52p-15f, 0.0f, 0x1.829854p-65f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.df38b8p-65f, 0.0f, 0x1.314e86p-79f, 0.0f, 0.0f, 0.0f, 0x1.7c393ap-72f,
     0x1.c2d9bap-24f, 0x1.be028ep-104f, 0.0f, 0x1.dd82f4p-111f, 0x1.98bf08p-60f,
     0x1.42267p-1f, 0x1.4dd508p-37f, 0x1.80d862p-55f, 0x1.6dd9e4p-86f, 0.0f, 0.0f,
     0.0f, 0x1.ebbb02p-17f, 0x1.58685cp-116f, 0x1.1b2f32p-104f, 0.0f, 0.0f, 0.0f,
     0x1.86192ep-51f, 0.0f, 0.0f, 0x1.584adep-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9e1ef2p-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6f636p-30f, 0.0f, 0x1.65421ep-117f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.66dc56p-60f, 0x1.2c99e4p-30f, 0x1.ea584cp-62f, 0.0f,
     0.0f, 0x1.c19958p-5f, 0.0f, 0.0f, 0x1.26a756p-70f, 0.0f, 0.0f, 0.0f,
     0x1.30a57ep-60f, 0x1.8dd78cp-105f, 0x1.c229b8p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8a425cp-6f, 0.0f, 0x1.cc256ap-116f, 0x1.dc62f4p-53f, 0x1.0d0598p-58f,
     0x1.d9936ep-122f, 0.0f, 0.0f, 0x1.27d7e4p-93f, 0.0f, 0x1.d585dep-63f, 0.0f, 0.0f,
     0x1.fb564cp-103f, 0x1.4229ap-38f, 0x1.99ed1p-37f, 0x1.a7d9bap-49f, 0.0f, 0.0f,
     0x1.07f1a2p-123f, 0.0f, 0x1.727dbp-113f, 0x1.4468f2p-8f, 0.0f, 0x1.7cfef2p-65f,
     0x1.dd5f22p-74f, 0x1.8ed01cp-35f, 0x1.a1dc32p-37f, 0x1.863fcap-76f, 0.0f, 0.0f,
     0.0f, 0x1.3d0968p-126f, 0.0f, 0x1.1a822p-124f, 0x1.d1544p-108f, 0x1.5919fap-25f,
     0.0f, 0.0f, 0x1.25a8eap-99f, 0.0f, 0.0f, 0.0f, 0x1.c2b1eep-64f, 0x1.1e407cp-106f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.196164p-77f, 0.0f, 0.0f, 0x1.2ae5bcp-57f, 0.0f,
     0x1.49b89ep-90f, 0.0f, 0.0f, 0.0f, 0x1.96948cp-21f, 0.0f, 0x1.be3436p-27f,
     0x1.24321cp-21f, 0x1.4261d8p-113f, 0x1.4a4ab4p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.59c8p-105f, 0x1.a744f4p-37f, 0x1.5d0ed2p-39f, 0.0f, 0.0f, 0x1.cf7edcp-114f,
     0x1.193942p-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.13063ep-50f, 0x1.fe45c4p-55f, 0.0f,
     0.0f, 0.0f, 0x1.ef658ap-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e9d08p-70f, 0.0f, 0x1.bd0eb8p-61f, 0.0f, 0.0f, 0.0f, 0x1.c521a8p-13f, 0.0f,
     0x1.325826p-24f, 0x1.0f9a0ap-122f, 0.0f, 0.0f, 0x1.511488p-126f, 0x1.75482ep-71f,
     0.0f, 0x1.6853ap-23f, 0x1.e0fca6p-68f, 0x1.2a11c4p-86f, 0x1.6dc126p-62f,
     0x1.90dd2ap-111f, 0.0f, 0.0f, 0x1.9657ap-124f, 0.0f, 0x1.51ce0cp-82f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.112f14p-71f, 0.0f, 0x1.eedbp-115f, 0x1.8031d8p-45f, 0.0f, 0.0f,
     0x1.aff518p-80f, 0x1.88e54ep-54f, 0.0f, 0x1.cddef2p-35f, 0.0f, 0.0f, 0.0f,
     0x1.459ccp-10f, 0x1.bc8ebp-23f, 0x1.ab8fe2p-124f, 0.0f, 0.0f, 0x1.cc9c3ep-83f,
     0.0f, 0x1.11d024p-39f, 0.0f, 0.0f, 0.0f, 0x1.be5c08p-71f, 0x1.18db6ep-44f, 0.0f,
     0x1.fba8bap-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f659a6p-23f, 0.0f,
     0x1.44676ep-5f, 0.0f, 0x1.e5360cp-82f, 0x1.d14576p-69f, 0x1.510c08p-90f,
     0x1.2efec2p-65f, 0x1.7d9138p-10f, 0x1.81d38ep-64f, 0x1.9ac41ap-93f,
     0x1.939d9ap-16f, 0.0f, 0.0f, 0x1.592446p-84f, 0.0f, 0.0f, 0x1.e1c0ep-28f, 0.0f,
     0.0f, 0x1.51f7c8p-48f, 0x1.b683aap-38f, 0x1.1465cp-32f, 0.0f, 0.0f, 0.0f,
     0x1.1f9b4ep-98f, 0.0f, 0.0f, 0x1.401096p-46f, 0x1.036e3ap-32f, 0x1.c0e7dap-102f,
     0.0f, 0.0f, 0.0f, 0x1.37ea6ep-57f, 0.0f, 0x1.a21aap-111f, 0x1.97f412p-55f,
     0x1.63c22cp-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d64e2p-63f, 0x1.de979p-19f,
     0.0f, 0x1.867dd8p-28f, 0x1.7ded7cp-80f, 0.0f, 0x1.39559ap-45f, 0x1.627ac6p-85f,
     0.0f, 0.0f, 0.0f, 0x1.88f87p-23f, 0x1.6e42d2p-48f, 0.0f, 0x1.22eb0ap-79f,
     0x1.03508ep-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1af72p-38f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.48f06cp-114f, 0.0f, 0x1.d35ce2p-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a0c76ep-7f,
     0.0f, 0x1.85e264p-51f, 0x1.c16268p-26f, 0.0f, 0.0f, 0x1.849f58p-15f, 0.0f,
     0x1.a39f4p-57f, 0x1.87f3d8p-7f, 0x1.210e18p-68f, 0x1.daaa68p-118f, 0.0f, 0.0f,
     0x1.64fd5ap-18f, 0x1.cbd644p-7f, 0x1.dea91p-20f, 0.0f, 0.0f, 0x1.61fefep-7f,
     0x1.8f5c3cp-79f, 0.0f, 0x1.dd1062p-2f, 0x1.80a8e2p-84f, 0x1.ff188ap-107f, 0.0f,
     0x1.869c56p-74f, 0x1.1574f6p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4d46c2p-50f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f52c2ap-86f, 0.0f, 0.0f, 0x1.c1ec06p-86f, 0x1.61101ep-68f,
     0x1.dd1e8p-68f, 0x1.7545e4p-91f, 0x1.6cfdbap-124f, 0x1.385a6ep-19f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e5ed56p-78f, 0.0f, 0x1.058598p-22f, 0.0f, 0x1.06b328p-95f, 0.0f,
     0x1.36d3cep-69f, 0x1.e802c6p-48f, 0x1.2716a6p-109f, 0x1.283b8cp-31f, 0.0f, 0.0f,
     0.0f, 0x1.cc8b6ap-48f, 0x1.dcb744p-63f, 0x1.ea61cap-52f, 0.0f, 0.0f,
     0x1.c94ec2p-9f, 0x1.a9ebep-75f, 0.0f, 0x1.29343p-72f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.0dc1a4p-50f, 0x1.f04c48p-107f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ea500ep-106f, 0x1.592d48p-39f,
     0.0f, 0x1.ac3154p-120f, 0.0f, 0x1.561cbap-22f, 0x1.eb562cp-59f, 0x1.32f368p-121f,
     0x1.ff2ca2p-69f, 0x1.e8cef8p-67f, 0x1.44645p-103f, 0x1.70305ap-9f
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
            tmp1 = Sleef_finz_sqrtf4_kvx(tmp0);
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
    printf("Sleef_finz_sqrtf4_kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_sqrtf4_kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
