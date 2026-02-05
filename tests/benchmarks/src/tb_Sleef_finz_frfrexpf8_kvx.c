/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_frfrexpf8_kvx.c --function \
 *     Sleef_finz_frfrexpf8_kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 8 --function-input-vector-size \
 *     8 --bench --no-embedded-bin --target kv3
 *
 */
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float8_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float8_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1008];
static const float external_bench_wrapper_input_table_arg0[1008]  = {
     0x1.5422cp-112f, 0x1.f8a396p-84f, 0x1.9d607ep-89f, 0x1.b7ee36p-123f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.2ea258p-3f, 0x1.0f70a6p-77f, 0.0f, 0x1.d66c32p-54f,
     0x1.4bb352p-70f, 0.0f, 0x1.4e6486p-39f, 0x1.f41f46p-43f, 0.0f, 0.0f, 0.0f,
     0x1.7c2cbcp-78f, 0x1.c17634p-67f, 0x1.b9dd4ap-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.19886ep-27f, 0x1.d24df4p-109f, 0x1.4d14d6p-69f, 0x1.417f34p-2f, 0.0f,
     0.0f, 0x1.4a7d96p-60f, 0x1.c993b6p-45f, 0x1.505d48p-18f, 0.0f, 0x1.bd320ep-93f,
     0.0f, 0x1.971954p-25f, 0.0f, 0x1.0c1994p-68f, 0.0f, 0x1.c16928p-2f, 0.0f,
     0x1.b528p-113f, 0x1.a9950ep-37f, 0.0f, 0x1.858c8p-30f, 0x1.7ea84ap-51f, 0.0f,
     0.0f, 0x1.7428c2p-19f, 0x1.eae9ecp-57f, 0.0f, 0.0f, 0x1.86449p-99f,
     0x1.50dc08p-104f, 0.0f, 0x1.379d7p-118f, 0x1.d80eacp-43f, 0x1.dfa438p-86f, 0.0f,
     0.0f, 0x1.73ec4p-98f, 0.0f, 0.0f, 0.0f, 0x1.02fe5p-68f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ee5592p-15f, 0x1.95370ap-63f, 0x1.0ab78ap-31f, 0x1.e63028p-38f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.42bf12p-49f, 0.0f, 0x1.d13f44p-66f, 0x1.d81b66p-33f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d1b584p-6f, 0.0f, 0x1.99cd8cp-96f, 0.0f,
     0x1.824204p-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8dbc9cp-119f, 0x1p0f,
     0x1.141e2ep-97f, 0x1.1e634cp-46f, 0x1.bb35fep-47f, 0.0f, 0x1.0dc03p-116f, 0.0f,
     0x1.267752p-87f, 0.0f, 0.0f, 0.0f, 0x1.61b98ep-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f60fp-82f, 0x1.d5eedcp-36f, 0x1.6bfa2p-11f, 0.0f, 0.0f, 0.0f,
     0x1.12bb6ep-115f, 0.0f, 0x1.ea32ecp-108f, 0.0f, 0.0f, 0x1.57408p-112f,
     0x1.58a216p-54f, 0x1.f88e56p-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e999e8p-26f,
     0x1.47c8f6p-77f, 0x1.e1781cp-69f, 0x1.a522d2p-119f, 0.0f, 0.0f, 0x1.25c644p-50f,
     0x1.0c7ddcp-38f, 0.0f, 0.0f, 0x1.90351p-122f, 0.0f, 0x1.b7607ap-46f,
     0x1.c4acep-9f, 0.0f, 0x1.e7641ap-122f, 0x1.fae892p-52f, 0.0f, 0.0f,
     0x1.e36a9ep-100f, 0x1.12d9eap-104f, 0.0f, 0x1.a097e2p-57f, 0x1.498af4p-123f,
     0x1.ecf9f8p-86f, 0x1.1b6eeap-55f, 0x1.cbb6e6p-34f, 0x1.ce4d5p-33f,
     0x1.368538p-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d35be8p-80f, 0.0f,
     0x1.fed454p-118f, 0.0f, 0.0f, 0x1.a9c5eep-49f, 0x1.792f1p-120f, 0.0f,
     0x1.c0f64cp-13f, 0.0f, 0.0f, 0x1.d94e1ep-7f, 0x1.81827ap-17f, 0.0f,
     0x1.fd1526p-26f, 0x1.08776ep-102f, 0.0f, 0x1.7b6ac4p-63f, 0x1.fe1fcp-10f, 0.0f,
     0.0f, 0x1.f96404p-50f, 0.0f, 0x1.436b8cp-82f, 0.0f, 0.0f, 0x1.1772p-123f,
     0x1.d3cf94p-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2623e6p-46f, 0.0f,
     0x1.56dba4p-56f, 0.0f, 0x1.9e765ap-68f, 0.0f, 0x1.59824ep-93f, 0.0f,
     0x1.de6ff8p-73f, 0x1.93351cp-102f, 0x1.5deddep-101f, 0.0f, 0.0f,
     0x1.c037f6p-116f, 0.0f, 0.0f, 0x1.540eaep-72f, 0.0f, 0x1.dd63f6p-123f,
     0x1.107774p-30f, 0.0f, 0x1.51ef4ap-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e3ef4p-98f, 0.0f, 0x1.82aeb2p-67f, 0.0f, 0x1.69bdfp-31f, 0x1.bcca2ep-7f,
     0x1p0f, 0.0f, 0.0f, 0x1.3be146p-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3c2ea8p-109f,
     0x1.eedf6ep-53f, 0x1.8bd4ap-46f, 0x1.42bd3p-100f, 0x1.d7cd8p-59f, 0.0f, 0.0f,
     0x1.36ffcep-4f, 0.0f, 0x1.01adccp-82f, 0.0f, 0x1.4c8304p-79f, 0.0f,
     0x1.343168p-40f, 0.0f, 0x1.ee6f16p-90f, 0x1.8cd9cep-50f, 0x1.4eac0ap-32f,
     0x1.cbe16ep-77f, 0.0f, 0x1.19a5a8p-54f, 0x1.2c1a16p-70f, 0.0f, 0x1.5c0c7cp-64f,
     0.0f, 0.0f, 0x1.c8287p-22f, 0x1.1ad97ap-17f, 0.0f, 0.0f, 0.0f, 0x1.d6cb42p-107f,
     0x1.d67c7ap-53f, 0.0f, 0x1.b9362p-53f, 0.0f, 0x1.161686p-58f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c2971p-72f, 0x1.15f4ccp-125f, 0.0f, 0x1.fcb7cep-55f, 0x1.73e9fap-65f,
     0.0f, 0.0f, 0.0f, 0x1.9574a4p-113f, 0.0f, 0.0f, 0.0f, 0x1.fe8198p-91f, 0.0f,
     0x1.346692p-51f, 0.0f, 0.0f, 0x1.30775cp-16f, 0.0f, 0.0f, 0x1.43838ap-95f, 0.0f,
     0.0f, 0.0f, 0x1.e6152p-1f, 0.0f, 0x1.04ea1ap-91f, 0x1.55cf42p-5f, 0.0f, 0.0f,
     0x1.3df41ep-73f, 0x1.0057bp-123f, 0x1.65cefap-58f, 0.0f, 0.0f, 0x1.a23ae2p-29f,
     0.0f, 0x1.8fdab4p-79f, 0x1.7fc2b4p-118f, 0.0f, 0x1.9c50cep-57f, 0x1.21c3f2p-17f,
     0x1.990384p-83f, 0.0f, 0.0f, 0x1.b0e38ep-49f, 0.0f, 0x1.dca3fp-109f,
     0x1.64414p-74f, 0x1.9f1fbap-104f, 0x1.aa3596p-83f, 0.0f, 0x1.83ccbp-15f, 0.0f,
     0x1.317dacp-62f, 0.0f, 0x1.46dec4p-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.45931p-30f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b2aa6p-110f,
     0.0f, 0x1.ba2b04p-30f, 0x1.a81b7ap-51f, 0.0f, 0x1.390bc2p-82f, 0.0f,
     0x1.ea58c8p-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.26951cp-102f, 0x1.76356cp-24f, 0.0f,
     0x1.cd3056p-81f, 0x1.3c54e8p-110f, 0x1.630aaep-15f, 0.0f, 0x1.9ac57ap-91f, 0.0f,
     0.0f, 0x1.c4bf26p-65f, 0.0f, 0.0f, 0.0f, 0x1.191778p-93f, 0.0f, 0x1.67eebep-20f,
     0x1.346a1p-99f, 0x1.01c5d6p-25f, 0.0f, 0.0f, 0.0f, 0x1.ee1d0ap-110f, 0.0f,
     0x1.54c292p-2f, 0.0f, 0x1.089c7ep-103f, 0x1.372ef4p-86f, 0x1.f3791p-20f, 0.0f,
     0x1.66c89cp-82f, 0x1.d72fe2p-72f, 0x1p0f, 0x1.ac69d8p-117f, 0x1.6b9d9p-33f,
     0x1.055accp-29f, 0x1.076p-87f, 0x1.aa91d4p-77f, 0x1.1fb306p-59f, 0.0f,
     0x1.db8e5cp-28f, 0.0f, 0.0f, 0x1.c08462p-16f, 0x1.ee21f2p-11f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1p0f, 0x1.507194p-37f, 0x1.97a9fap-91f, 0.0f, 0x1.06665p-47f,
     0x1.309p-42f, 0x1.b0441p-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.81ac1cp-93f, 0.0f, 0x1.4f7486p-117f, 0x1.6baa9ap-95f, 0x1.76785ap-32f,
     0x1.5377fcp-111f, 0x1.79f25ep-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f29f72p-15f,
     0x1.07ec56p-100f, 0x1.38bffcp-107f, 0x1.41476p-91f, 0.0f, 0.0f, 0x1.70e1ecp-72f,
     0x1.9c6506p-124f, 0x1.f68804p-39f, 0x1.c65b76p-66f, 0.0f, 0x1.eb107p-26f,
     0x1.96301cp-50f, 0x1.b64a24p-94f, 0.0f, 0x1.c53bc2p-49f, 0x1.3d4756p-73f, 0.0f,
     0.0f, 0x1.0c23ecp-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3bbd6ap-43f, 0x1.7aa266p-58f,
     0x1.51c556p-11f, 0.0f, 0x1.1fc182p-108f, 0x1.108f38p-103f, 0.0f, 0.0f,
     0x1.22ce0cp-13f, 0x1.06063p-74f, 0x1.fabf7cp-20f, 0.0f, 0x1.f6a282p-122f, 0.0f,
     0x1.f79578p-107f, 0x1.f578ap-120f, 0x1.fd0c2ep-90f, 0.0f, 0x1.fdf6e4p-107f, 0.0f,
     0x1.5d2298p-102f, 0x1.ae7704p-25f, 0x1.417a26p-46f, 0.0f, 0x1.f99e72p-64f, 0.0f,
     0x1.fe1b5cp-95f, 0x1.b1e6d2p-122f, 0.0f, 0x1.215fcp-83f, 0.0f, 0x1.f78a12p-78f,
     0x1.6460ap-82f, 0.0f, 0x1.ed1494p-105f, 0.0f, 0x1.466ebep-52f, 0.0f,
     0x1.d7faf8p-14f, 0.0f, 0x1.341dd8p-23f, 0x1.2a421ep-107f, 0x1.12b8a2p-62f,
     0x1.d2ee4p-51f, 0x1.3da7fp-31f, 0.0f, 0x1.5edf5ap-33f, 0x1.54916ep-20f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.2d2144p-3f, 0x1.cf7bccp-111f, 0x1.0bb03p-80f,
     0x1.62e5f6p-73f, 0.0f, 0x1.b76e48p-78f, 0x1.456176p-66f, 0x1.400b64p-94f,
     0x1.aeef72p-63f, 0x1p0f, 0.0f, 0x1.2caf64p-59f, 0x1.3a22d4p-44f, 0x1.317962p-87f,
     0.0f, 0x1.823d3cp-56f, 0x1.594b44p-58f, 0.0f, 0x1.7cf204p-119f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c12428p-55f, 0x1.c2a3d6p-87f, 0x1.d5ba02p-120f, 0.0f, 0x1.032a1ep-119f,
     0.0f, 0x1.5ee2a2p-15f, 0x1.78fbacp-97f, 0x1.66c82cp-16f, 0.0f, 0x1.68b1a6p-9f,
     0.0f, 0.0f, 0.0f, 0x1.89f464p-88f, 0.0f, 0x1.b703bp-28f, 0.0f, 0x1.846d1ep-113f,
     0x1.8c0034p-68f, 0x1.802638p-89f, 0.0f, 0.0f, 0x1.997f4ap-100f, 0.0f,
     0x1.5a60d6p-5f, 0.0f, 0x1.afcafep-24f, 0.0f, 0x1.bf0d82p-96f, 0.0f,
     0x1.ce4bfcp-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.73701ap-72f,
     0x1.21e836p-109f, 0x1.cb8684p-88f, 0.0f, 0.0f, 0x1.619734p-115f, 0x1.ffb84p-59f,
     0x1.102106p-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3330e2p-121f, 0x1.af417cp-90f,
     0x1.44d974p-50f, 0.0f, 0.0f, 0x1.49dc3p-43f, 0x1.63ce4ap-45f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.cff762p-13f, 0x1.511d84p-53f, 0x1.80988p-105f,
     0x1.952c5cp-27f, 0x1.a3e7a8p-60f, 0x1.495ffap-62f, 0.0f, 0x1.44db46p-42f,
     0x1.4a6f72p-82f, 0x1.949ec2p-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.81e4d8p-95f, 0x1.c6e1dep-23f, 0x1.5cbc8ap-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f8f19ep-14f, 0x1.05b996p-65f, 0x1.49f418p-87f, 0.0f, 0x1.4191dap-58f, 0.0f,
     0x1.bf1dd2p-110f, 0.0f, 0x1.ccea7ap-107f, 0x1.b2642p-33f, 0x1.5ba8f2p-92f,
     0x1.dcabf8p-68f, 0.0f, 0x1.25c12ap-122f, 0.0f, 0.0f, 0x1.e9ae6p-31f, 0.0f, 0.0f,
     0x1.aa88b6p-44f, 0x1.519b9ep-78f, 0x1.697f52p-78f, 0.0f, 0x1.646d98p-70f, 0.0f,
     0x1.db3662p-47f, 0x1.04a4aap-10f, 0.0f, 0.0f, 0x1.c6b3c4p-7f, 0x1.9596b8p-9f,
     0x1.4e458cp-119f, 0.0f, 0x1.21692ap-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.485c7cp-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4e5fd2p-48f, 0.0f, 0.0f,
     0x1.7c258ep-85f, 0x1.8bcd64p-20f, 0x1.7eeb62p-95f, 0.0f, 0.0f, 0x1.2b54a2p-94f,
     0.0f, 0.0f, 0x1.ec711ep-43f, 0.0f, 0x1.b946f6p-98f, 0.0f, 0.0f, 0x1.f76762p-84f,
     0.0f, 0x1.e6ce1cp-54f, 0x1.4adb16p-91f, 0.0f, 0x1.d2a1e2p-42f, 0.0f, 0.0f,
     0x1.dcccaap-67f, 0x1.c7f57cp-35f, 0.0f, 0x1.79645ep-37f, 0x1.d13326p-79f, 0.0f,
     0.0f, 0x1.a78744p-106f, 0.0f, 0.0f, 0.0f, 0x1.8b707p-92f, 0x1.cb171ap-64f,
     0x1.70bap-71f, 0.0f, 0.0f, 0x1.e1f89ep-64f, 0x1.7aeab8p-126f, 0.0f, 0.0f,
     0x1.2f5fe4p-18f, 0.0f, 0.0f, 0x1.87feb4p-109f, 0x1.2bbce2p-112f, 0.0f,
     0x1.594768p-74f, 0x1.90e5a8p-116f, 0x1.abbecap-59f, 0.0f, 0.0f, 0.0f,
     0x1.e05ca6p-76f, 0.0f, 0x1.a7b67p-12f, 0.0f, 0.0f, 0.0f, 0x1.15e012p-80f, 0.0f,
     0.0f, 0x1.d47bap-65f, 0.0f, 0x1.0c1378p-73f, 0.0f, 0x1.adda92p-90f, 0.0f,
     0x1.48dcc4p-95f, 0x1.729f44p-74f, 0.0f, 0x1.85ea28p-1f, 0x1.03a1bep-14f, 0.0f,
     0x1.3e85c6p-80f, 0x1.3c2314p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bb0e46p-116f, 0.0f, 0.0f, 0.0f, 0x1.66d12ep-84f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.04b392p-114f, 0.0f, 0x1.bce02cp-65f, 0x1.e7c218p-18f, 0x1.081e12p-5f, 0.0f,
     0.0f, 0x1.d96734p-29f, 0x1.23d93cp-125f, 0x1.eaf4dap-28f, 0x1.1b1b88p-114f,
     0x1.eb5cd8p-83f, 0.0f, 0x1.d1738p-76f, 0.0f, 0.0f, 0x1.6ea1e8p-88f, 0.0f, 0.0f,
     0x1p0f, 0.0f, 0x1.465e74p-114f, 0x1.3f8e0ap-7f, 0x1.ff3426p-38f, 0x1.e6236ep-32f,
     0.0f, 0x1.16eaf2p-8f, 0.0f, 0.0f, 0.0f, 0x1.40ccdp-84f, 0x1.345a4ap-77f, 0.0f,
     0.0f, 0.0f, 0x1.cc803ap-104f, 0x1.0893aep-57f, 0x1.605eaap-110f, 0.0f, 0.0f,
     0x1.6d9c26p-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fa3a08p-126f, 0x1.b3f14cp-66f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.861428p-7f, 0.0f, 0x1.f1cebp-14f, 0x1.ba1aap-35f,
     0x1.39c9eep-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.baa19ep-29f, 0x1.95a2ecp-7f,
     0x1.a90f1p-54f, 0x1.16ccc2p-87f, 0x1.15082p-107f, 0.0f, 0.0f, 0.0f,
     0x1.984228p-39f, 0.0f, 0.0f, 0.0f, 0x1.326558p-118f, 0.0f, 0x1.b59802p-80f,
     0x1.4cf896p-66f, 0x1.1faa8ep-52f, 0.0f, 0x1.2d3c8ep-70f, 0.0f, 0x1.d7ec2ep-77f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.56309p-77f, 0.0f, 0.0f, 0.0f, 0x1.73219p-9f,
     0x1.52da5ep-87f, 0.0f, 0.0f, 0x1.26db72p-38f, 0x1.986734p-54f, 0.0f, 0x1p0f,
     0.0f, 0.0f, 0.0f, 0x1.c8fbc4p-94f, 0x1.05ab8ap-75f, 0.0f, 0x1.1d8376p-20f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.cba4d8p-94f, 0x1.1bf87p-105f, 0x1.d11af2p-38f, 0.0f,
     0x1.51b74p-1f, 0x1.5883c8p-98f, 0.0f, 0.0f, 0x1.89dd3cp-77f, 0x1.484544p-35f,
     0.0f, 0x1.aabb5cp-29f, 0.0f, 0x1.32bd02p-84f, 0x1.6287dap-107f, 0.0f,
     0x1.155decp-2f, 0.0f, 0x1.62dbc8p-10f, 0x1.eef754p-4f, 0x1.1fb15cp-36f,
     0x1.bf392ap-54f, 0.0f, 0.0f, 0x1.512a6ap-36f, 0.0f, 0x1.e93c78p-97f, 0.0f,
     0x1.bd9a7cp-1f, 0.0f, 0.0f, 0.0f, 0x1.c00b4p-36f, 0.0f, 0.0f, 0x1.353126p-105f,
     0x1.9a4062p-96f, 0x1.f583bap-24f, 0.0f, 0x1.780ed2p-72f, 0.0f, 0x1.039034p-32f,
     0.0f, 0.0f, 0x1.be21bp-22f, 0x1.67571p-99f, 0x1.cd6e48p-34f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.3a7f2p-100f, 0x1.3643cap-43f, 0x1.3349fcp-5f, 0.0f, 0x1.8cff2cp-50f,
     0.0f, 0x1.085a2p-31f, 0x1.25e854p-7f, 0.0f, 0x1.b7d6c8p-102f, 0x1.fd56bp-15f,
     0.0f, 0.0f, 0x1.402488p-105f, 0.0f, 0.0f, 0.0f, 0x1.56375ap-31f, 0x1.6ea028p-10f,
     0x1.bc4adap-97f, 0x1.23ffbcp-28f, 0.0f, 0x1.b488d4p-95f, 0x1.8294e8p-15f,
     0x1.a1bef4p-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d8a0f8p-82f, 0x1.022952p-47f,
     0x1.7a459cp-85f, 0.0f, 0.0f, 0.0f, 0x1.4d8bd8p-56f, 0x1.7c0c5cp-2f, 0.0f,
     0x1.6c453ep-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.347c34p-46f, 0x1.9bab2cp-118f, 0.0f, 0x1.fd24cap-89f, 0.0f, 0x1.138fbap-62f,
     0x1.f423c6p-102f, 0x1.7ad866p-55f, 0x1.ed130ap-23f, 0x1.cc198p-116f,
     0x1.88fd54p-1f, 0x1.6cf102p-90f, 0.0f, 0.0f, 0x1.fa7c9cp-1f, 0x1.2caaeep-91f,
     0x1.f715e2p-17f, 0.0f, 0.0f, 0x1.ff1f62p-28f, 0.0f, 0.0f, 0.0f, 0x1.38e764p-37f,
     0x1.6ad1aep-120f, 0.0f, 0.0f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_float8_t global_bench_acc;
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
        ml_float8_t local_acc;
        int32_t i;
        ml_float8_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1008));){
            ml_float8_t tmp0;
            ml_float8_t tmp1;
            ml_float8_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_float8_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            tmp1 = Sleef_finz_frfrexpf8_kvx(tmp0);
            memcpy(((ml_float8_t*)(external_bench_wrapper_output_table+ i)), &(tmp1), 32);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(8);
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
    cpe_measure = id_tmp / 10080000.0;
    printf("Sleef_finz_frfrexpf8_kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_finz_frfrexpf8_kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
