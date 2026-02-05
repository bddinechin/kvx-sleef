/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_logf8_u10kvx.c --function Sleef_finz_logf8_u10kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 8 --function-input-vector-size 8 --bench \
 *     --no-embedded-bin --target kv3
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
     0.0f, 0.0f, 0x1.941af2p-103f, 0.0f, 0x1.ed60a6p-87f, 0x1.831e04p-43f,
     0x1.ce61cep-18f, 0x1.3a5806p-80f, 0.0f, 0x1.ebb538p-37f, 0x1.3f9f8cp-66f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f2a416p-62f, 0x1.2d3062p-119f, 0x1.60e662p-121f, 0.0f,
     0x1.40f134p-121f, 0.0f, 0x1.0aca2p-93f, 0x1.7ae8d4p-81f, 0x1.e71358p-87f,
     0x1.0fccfcp-34f, 0.0f, 0.0f, 0x1.0a736p-56f, 0x1.283fbcp-103f, 0.0f,
     0x1.9f4966p-72f, 0x1.19e7f2p-17f, 0.0f, 0x1.1f3fe2p-30f, 0x1.cee9cep-38f, 0.0f,
     0.0f, 0x1.f59c44p-72f, 0.0f, 0x1.ad639cp-67f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.225adp-76f, 0x1.0ce44ep-38f, 0x1.271012p-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.efc62p-80f, 0x1.ea815ap-84f, 0x1.485052p-79f, 0.0f, 0x1.858196p-31f,
     0x1.55b4acp-20f, 0.0f, 0x1.4e4fcap-74f, 0.0f, 0x1.ff3a76p-49f, 0.0f,
     0x1.74d5cap-88f, 0x1.acc416p-83f, 0.0f, 0.0f, 0.0f, 0x1.805e6ep-38f, 0.0f, 0.0f,
     0x1.69c40ap-31f, 0.0f, 0x1.8ac4aep-56f, 0x1.46f676p-31f, 0.0f, 0x1.a783fcp-50f,
     0x1.a38e1p-43f, 0x1.a273c4p-79f, 0.0f, 0x1.b8cc6cp-52f, 0x1.2cd702p-11f, 0.0f,
     0.0f, 0x1.0a67d4p-102f, 0.0f, 0x1.fef1a6p-4f, 0x1.d927a8p-6f, 0.0f, 0.0f, 0.0f,
     0x1.f46f06p-18f, 0.0f, 0x1.3b0af6p-35f, 0.0f, 0.0f, 0.0f, 0x1.c212dep-48f,
     0x1.2aa46p-33f, 0x1.fddd76p-126f, 0.0f, 0.0f, 0x1.a0f212p-101f, 0.0f,
     0x1.1131e4p-5f, 0x1.cabdb4p-6f, 0x1.a29a68p-98f, 0x1.259bdp-96f, 0.0f, 0.0f,
     0x1.327732p-24f, 0.0f, 0.0f, 0x1.3294b2p-72f, 0.0f, 0x1.c896e8p-39f, 0.0f,
     0x1.724602p-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.087d7ep-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5b30cp-8f, 0x1.b705c4p-24f,
     0x1.341932p-95f, 0x1.d278dep-49f, 0.0f, 0.0f, 0x1.cf6c76p-67f, 0.0f,
     0x1.4b37fap-22f, 0x1.d683aep-92f, 0.0f, 0.0f, 0x1.f69e3cp-43f, 0x1.808a8ap-31f,
     0.0f, 0x1.f8456ep-81f, 0.0f, 0.0f, 0x1.bc1926p-4f, 0x1.237c1ep-78f, 0.0f, 0.0f,
     0.0f, 0x1.cfa9ep-25f, 0.0f, 0x1.e3f37ap-120f, 0x1.1548e2p-99f, 0.0f,
     0x1.a6bcb4p-13f, 0.0f, 0x1.7b1a72p-33f, 0.0f, 0x1.09d95ep-79f, 0.0f,
     0x1.48496p-109f, 0.0f, 0.0f, 0x1.46e95ep-46f, 0.0f, 0x1.4fd426p-80f,
     0x1.ac52e4p-105f, 0x1.959e6ap-17f, 0x1.af4e26p-18f, 0.0f, 0.0f, 0x1.05c954p-7f,
     0x1.6112a6p-35f, 0x1.245f88p-24f, 0.0f, 0.0f, 0x1.01a9f2p-126f, 0x1.ccd688p-95f,
     0x1.5ca516p-83f, 0.0f, 0.0f, 0x1.e771bap-2f, 0x1.ff01dp-101f, 0x1.a9f98cp-52f,
     0.0f, 0x1.f2be5ap-52f, 0.0f, 0.0f, 0x1.822c06p-3f, 0x1.e5ba38p-109f,
     0x1.e0627p-24f, 0.0f, 0x1.488e54p-109f, 0.0f, 0.0f, 0.0f, 0x1.9f990ap-24f, 0.0f,
     0x1.d2cc74p-1f, 0x1.8a4adap-35f, 0.0f, 0.0f, 0x1.b8b9cap-120f, 0x1.3b38ep-2f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ce013ap-46f, 0.0f, 0x1.479df6p-51f,
     0x1.e386b4p-54f, 0.0f, 0x1.e006eep-108f, 0.0f, 0x1.af1ac4p-67f, 0x1.109a9ep-17f,
     0.0f, 0x1.753d58p-101f, 0.0f, 0x1.83734ap-34f, 0x1.3ac09ep-49f, 0x1.16eb38p-61f,
     0x1.0c814ep-68f, 0x1.8e6afep-110f, 0x1.f9599cp-89f, 0x1.74da16p-55f, 0.0f,
     0x1.8f883p-58f, 0.0f, 0x1.095afp-32f, 0.0f, 0x1.0220fp-105f, 0x1.e4ee88p-58f,
     0.0f, 0x1.94361ap-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1caa46p-110f, 0x1.bebfep-38f, 0x1.1879a8p-104f, 0x1.3dd1c2p-27f,
     0x1.d3c32cp-73f, 0x1.b46e72p-28f, 0x1.93c288p-43f, 0x1.c76478p-109f,
     0x1.5e6fdp-124f, 0x1.bb0192p-8f, 0.0f, 0x1.a4a4bap-96f, 0.0f, 0x1.c40c78p-1f,
     0.0f, 0x1.abbffcp-114f, 0x1.4d988cp-52f, 0x1.852cc2p-7f, 0x1.ca7da6p-38f, 0.0f,
     0x1.effc44p-102f, 0x1.fbaeb4p-18f, 0.0f, 0x1.1f1bbap-65f, 0x1.7df6ecp-42f, 0.0f,
     0.0f, 0x1.adc04cp-38f, 0.0f, 0x1.8772c6p-95f, 0x1.15b3c2p-102f, 0x1.361128p-56f,
     0.0f, 0.0f, 0x1.d81b7p-80f, 0.0f, 0x1.e74ff8p-92f, 0.0f, 0.0f, 0.0f,
     0x1.7aa22ap-77f, 0x1.5573b2p-59f, 0.0f, 0.0f, 0.0f, 0x1.554a12p-32f,
     0x1.20d18cp-2f, 0x1.943888p-86f, 0.0f, 0.0f, 0.0f, 0x1.682becp-29f,
     0x1.76609ap-90f, 0.0f, 0x1.ab7136p-19f, 0x1.c33184p-51f, 0x1.7c552p-93f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ce9e1p-103f, 0.0f, 0.0f, 0x1.38caf8p-19f, 0.0f, 0.0f,
     0x1.feaae2p-76f, 0x1.583638p-89f, 0x1.60ab58p-40f, 0.0f, 0.0f, 0.0f,
     0x1.5103a2p-5f, 0x1.2d473cp-4f, 0x1.67039cp-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6add4ep-20f, 0.0f, 0x1.40976ap-109f, 0x1.540dcp-99f, 0.0f, 0.0f, 0.0f,
     0x1.405cbcp-98f, 0x1.c4803ep-24f, 0x1.ff82ap-22f, 0x1.6d4b2cp-6f,
     0x1.9eca12p-112f, 0x1.0934a4p-78f, 0x1.ce38a2p-70f, 0x1.11d968p-27f,
     0x1.bbf47cp-27f, 0x1.a7a4c2p-80f, 0x1.b94fd8p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.06666ap-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.48d042p-122f,
     0x1.f2b72ep-102f, 0.0f, 0x1.b77026p-46f, 0.0f, 0x1.bbf81p-126f, 0.0f,
     0x1.3355e8p-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.af9702p-93f, 0x1p0f, 0x1.f19cap-4f,
     0x1.358c5cp-91f, 0x1.a7202ap-126f, 0x1.f75b2cp-37f, 0.0f, 0x1.d39368p-4f, 0.0f,
     0.0f, 0x1.f89652p-76f, 0x1.ab2e84p-40f, 0x1.5a42f2p-56f, 0.0f, 0.0f,
     0x1.87c9e2p-96f, 0x1.77e126p-91f, 0x1.b481f6p-24f, 0x1.752abap-76f, 0.0f,
     0x1.ade78ap-87f, 0x1.6df4fp-80f, 0x1.09fd9cp-2f, 0.0f, 0.0f, 0x1p0f,
     0x1.4c9306p-101f, 0x1.34f5d8p-5f, 0.0f, 0.0f, 0.0f, 0x1.805424p-94f, 0.0f,
     0x1.dbdc5cp-118f, 0x1.261e92p-4f, 0.0f, 0x1.a738p-111f, 0x1.65f8ecp-76f,
     0x1.fe6836p-5f, 0.0f, 0x1.ac70dp-109f, 0.0f, 0x1.f44706p-107f, 0x1.94dceap-91f,
     0x1.8599dep-63f, 0x1.0c6eep-108f, 0.0f, 0x1.4d4604p-39f, 0x1.c97e0ap-39f,
     0x1.8366ep-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c3d7c2p-77f, 0.0f, 0.0f, 0.0f,
     0x1.d48f96p-9f, 0x1.5f923ap-89f, 0.0f, 0x1.b01b28p-94f, 0x1.2b87c2p-48f, 0.0f,
     0x1.2d6e8p-74f, 0.0f, 0x1.0bf4c6p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9e4ea8p-18f,
     0x1.b2c42ep-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e35c92p-20f, 0x1.d40b38p-87f, 0x1.f8ecd4p-109f, 0x1.71df9cp-108f,
     0x1.f61d2ep-16f, 0x1.135634p-65f, 0.0f, 0x1.a69ce2p-57f, 0x1.00af38p-66f, 0.0f,
     0x1.98b3f8p-93f, 0x1.9d478ap-81f, 0x1.a6100ep-26f, 0.0f, 0x1.399e22p-124f,
     0x1.66f336p-20f, 0x1.2e28a6p-86f, 0x1.0c703p-60f, 0x1.8b394ap-78f,
     0x1.bbfb62p-88f, 0.0f, 0x1.b2a95ep-61f, 0.0f, 0.0f, 0x1.5d5fa8p-76f,
     0x1.da59aap-7f, 0x1.619adp-107f, 0.0f, 0x1.763ad2p-103f, 0.0f, 0.0f,
     0x1.beeda8p-26f, 0x1.123278p-27f, 0x1.524392p-53f, 0x1.bc2d2ap-29f, 0.0f, 0.0f,
     0.0f, 0x1.016a5ep-114f, 0.0f, 0x1.af3f8cp-18f, 0x1.27834ap-106f, 0.0f, 0.0f,
     0.0f, 0x1.7e7952p-2f, 0x1.82bce2p-14f, 0.0f, 0.0f, 0x1.062cb6p-82f, 0.0f,
     0x1.de711ap-54f, 0.0f, 0.0f, 0x1.cfc248p-14f, 0.0f, 0.0f, 0.0f, 0x1.3fc05p-49f,
     0x1.ead7bap-96f, 0.0f, 0.0f, 0x1.4fcf12p-85f, 0x1.6fabdap-30f, 0x1.3fcdeep-18f,
     0x1.22971p-86f, 0.0f, 0.0f, 0x1.6661bap-26f, 0x1.20fd96p-110f, 0.0f, 0.0f,
     0x1.b39da4p-19f, 0.0f, 0x1.e2c658p-99f, 0.0f, 0.0f, 0x1.4b8086p-45f,
     0x1.78c4a2p-119f, 0.0f, 0.0f, 0x1.dd4fbep-11f, 0.0f, 0.0f, 0x1.9593c8p-38f, 0.0f,
     0x1.7af814p-108f, 0.0f, 0.0f, 0x1.a58b0cp-54f, 0x1.ca535ep-78f, 0x1.31638cp-63f,
     0.0f, 0x1.08f7aap-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.297b02p-35f, 0x1.fd7b06p-5f,
     0x1.1f8388p-118f, 0x1.e0128p-75f, 0.0f, 0x1.9fa662p-65f, 0.0f, 0.0f, 0.0f,
     0x1.78f9cap-55f, 0x1.46da0cp-39f, 0.0f, 0x1.83fcacp-41f, 0x1.e4792ep-49f,
     0x1.f502bep-5f, 0x1.9436aap-65f, 0x1.9077f2p-67f, 0x1.9e2934p-1f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.331eep-21f, 0x1.c2665cp-9f, 0x1.9fbf62p-46f, 0x1.c9e88cp-37f,
     0.0f, 0.0f, 0x1.844cfap-30f, 0x1.c1807ep-110f, 0x1.21abf8p-53f, 0x1.17c892p-47f,
     0x1.7854fep-17f, 0x1.58a4bp-90f, 0x1.9298d6p-11f, 0.0f, 0x1.fbac8ep-11f, 0.0f,
     0x1.4d814cp-110f, 0.0f, 0.0f, 0.0f, 0x1.c89478p-32f, 0.0f, 0x1.0ac2ep-84f, 0.0f,
     0.0f, 0.0f, 0x1.65e05p-25f, 0.0f, 0.0f, 0x1.4d0fa4p-108f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.239294p-15f, 0.0f, 0x1.c22e2ap-22f, 0x1.a440c6p-72f, 0x1.2477aap-33f,
     0.0f, 0x1.e67ac2p-55f, 0.0f, 0.0f, 0x1.2085ap-75f, 0x1.1147dcp-73f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.303c54p-45f, 0x1.f717c2p-33f, 0x1.7e54eep-45f, 0x1.c65c4ep-54f,
     0x1.91093ap-38f, 0.0f, 0x1.a30048p-10f, 0x1.e8e72cp-65f, 0.0f, 0x1.dbec6cp-26f,
     0x1.bad32ap-39f, 0x1.976bfep-82f, 0.0f, 0.0f, 0x1.7f9382p-9f, 0.0f,
     0x1.eccf1p-11f, 0.0f, 0x1.ef8dfap-100f, 0.0f, 0.0f, 0x1.36bf48p-18f, 0.0f, 0.0f,
     0x1.425b1ap-34f, 0.0f, 0.0f, 0.0f, 0x1.b36f34p-73f, 0x1.b9896ap-94f, 0.0f,
     0x1.f15aeap-106f, 0x1.e75eccp-94f, 0.0f, 0.0f, 0x1.5a7ac8p-34f, 0x1.5807p-116f,
     0.0f, 0.0f, 0.0f, 0x1.b03818p-126f, 0x1.39eb58p-115f, 0.0f, 0.0f, 0.0f,
     0x1.65c526p-39f, 0x1.c2e46ap-50f, 0x1.e973aap-116f, 0x1.fb866ap-11f,
     0x1.f094e8p-4f, 0.0f, 0.0f, 0.0f, 0x1.ccd61ep-55f, 0x1.dc027ap-92f, 0.0f, 0.0f,
     0.0f, 0x1.000206p-93f, 0x1.8ebc5ep-29f, 0x1.7f8842p-120f, 0x1.2c5bacp-2f,
     0x1.7c408cp-84f, 0.0f, 0x1.863286p-70f, 0x1.d1a0fep-101f, 0.0f, 0x1.d7579p-111f,
     0.0f, 0.0f, 0.0f, 0x1.cc3262p-96f, 0x1.d7c9c4p-25f, 0x1.82408ep-18f,
     0x1.05fbb6p-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9da9bep-108f, 0.0f, 0.0f,
     0x1.a14fd2p-9f, 0.0f, 0.0f, 0x1.c24864p-23f, 0x1.e72a56p-89f, 0x1.e7ee44p-13f,
     0.0f, 0.0f, 0x1.9a2122p-37f, 0x1.eea588p-119f, 0.0f, 0.0f, 0.0f,
     0x1.cd68ecp-118f, 0.0f, 0.0f, 0x1.ebd468p-26f, 0.0f, 0x1.283b94p-52f,
     0x1.871c02p-106f, 0.0f, 0x1.2e18fap-107f, 0x1.17198cp-56f, 0.0f, 0x1.8b299ap-49f,
     0x1.d0ff82p-73f, 0x1.0989bep-87f, 0x1.4f4588p-48f, 0.0f, 0x1.488268p-5f,
     0x1.d99a7cp-26f, 0x1.e88186p-95f, 0.0f, 0.0f, 0x1.ebc46p-24f, 0x1.5a97ecp-13f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a8fe42p-17f, 0x1.67dep-33f, 0x1.fa923p-47f, 0.0f,
     0.0f, 0x1.a89fd2p-24f, 0.0f, 0x1.073e2cp-7f, 0.0f, 0x1.561b0ap-93f, 0.0f,
     0x1.c3a5c6p-122f, 0x1.675dd4p-30f, 0x1.f21f1p-99f, 0.0f, 0x1.d28206p-100f,
     0x1.c3df78p-67f, 0x1.14d274p-46f, 0.0f, 0x1.b639a4p-11f, 0x1.42f244p-81f, 0.0f,
     0.0f, 0x1.5eb4dep-64f, 0.0f, 0.0f, 0x1.7dc37cp-79f, 0.0f, 0.0f, 0x1.ca07fcp-73f,
     0x1.b3e028p-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.10843ep-76f, 0.0f, 0x1.5d2792p-64f,
     0x1.c5f63ep-50f, 0x1.ee429cp-12f, 0.0f, 0x1.51f5e4p-49f, 0x1.d2e85cp-86f,
     0x1.1d84b8p-62f, 0x1.7f86b2p-8f, 0.0f, 0x1.7e442ap-24f, 0x1.c1efd2p-18f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.5c8d18p-49f, 0x1.76b606p-81f, 0.0f, 0.0f,
     0x1.10b4b6p-92f, 0.0f, 0x1.30c2eap-87f, 0x1.27ebd4p-43f, 0x1.68aa78p-103f, 0.0f,
     0x1.06be32p-47f, 0x1.548758p-94f, 0x1.0f97cep-24f, 0x1.b3fd74p-51f, 0.0f,
     0x1.5c40f8p-48f, 0.0f, 0x1.d3a73ep-123f, 0x1.d5d28ap-112f, 0x1.6c0b46p-15f,
     0x1.df1bbcp-72f, 0x1.68d2f2p-89f, 0x1.86c9e8p-5f, 0x1.c52222p-1f, 0.0f, 0.0f,
     0x1.c11132p-107f, 0x1.586b9cp-13f, 0.0f, 0x1.138998p-86f, 0.0f, 0x1.90814p-82f,
     0.0f, 0x1.0599dp-41f, 0.0f, 0.0f, 0.0f, 0x1.083c86p-61f, 0x1.3f1f02p-82f,
     0x1.e4b37cp-126f, 0x1.6f7b9cp-8f, 0x1.6c9f1ep-68f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cb692cp-53f, 0x1.a65f8cp-104f, 0.0f, 0x1.81a688p-22f, 0x1.16ac78p-117f,
     0x1.945abep-124f, 0.0f, 0x1.fc17acp-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.baa6bcp-124f, 0x1.22318cp-95f, 0.0f, 0x1.009c46p-48f, 0.0f, 0x1.d20412p-20f,
     0x1.4649p-96f, 0.0f, 0.0f, 0x1.fd980ap-21f, 0.0f, 0.0f, 0x1.ff441ap-19f,
     0x1.300b1ap-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ac94f8p-66f, 0.0f, 0.0f,
     0x1.f30e4p-61f, 0.0f, 0x1.74d682p-17f, 0.0f, 0x1.ed8a14p-97f, 0x1.fab88ap-109f,
     0.0f, 0x1.7b0dfap-101f, 0.0f, 0.0f, 0x1.2536dcp-24f, 0x1.138bdcp-63f, 0.0f, 0.0f,
     0x1.1c29dep-13f, 0x1.1bfafp-115f, 0x1.11f4ecp-40f, 0x1.217eep-14f, 0.0f,
     0x1.031ed2p-117f, 0x1.de2498p-58f, 0.0f, 0.0f, 0.0f, 0x1.c892dp-37f,
     0x1.14a5bcp-52f, 0x1.2face6p-93f, 0.0f, 0x1.9372b4p-30f, 0.0f, 0.0f,
     0x1.465ceap-12f, 0.0f, 0.0f, 0x1.767868p-122f, 0.0f, 0x1.5162fp-109f, 0.0f,
     0x1.aba6aap-122f, 0x1.9c9c68p-114f, 0.0f, 0x1.aaf026p-35f, 0x1.549d86p-88f,
     0x1.257c34p-119f, 0x1.7cbca2p-6f, 0.0f, 0.0f, 0x1.61c3c4p-64f, 0.0f, 0.0f,
     0x1.6e87ap-13f, 0.0f, 0.0f, 0.0f, 0x1.4a546ap-46f, 0x1.7c3862p-20f,
     0x1.e2282p-121f, 0x1.72f596p-119f, 0x1.01625ep-116f, 0.0f, 0x1.693f34p-59f,
     0x1.fd435ap-47f, 0x1.0708bcp-107f, 0x1.0dcc94p-69f, 0.0f, 0x1.2faf7p-67f,
     0x1.1f4edep-120f, 0x1.4e454cp-104f, 0.0f, 0x1.7106cep-31f, 0x1.d82fb4p-9f,
     0x1.473a4p-108f, 0x1.81c3d6p-95f, 0x1.99b508p-120f, 0.0f, 0x1.66e81ap-56f,
     0x1.84fd38p-67f, 0x1.609f94p-97f, 0x1.ee23eap-108f, 0x1.61af6cp-23f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.fba66ep-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5c8b6cp-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.49b1aap-3f, 0x1.14225ep-68f,
     0x1.b5097ep-73f, 0.0f, 0x1.e9c2c8p-69f, 0x1.bc53bcp-50f, 0x1.099f16p-52f, 0.0f,
     0x1.6dec9ep-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.99e224p-104f, 0.0f,
     0x1.bf37ccp-75f, 0x1.c0f464p-88f, 0.0f, 0.0f
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
            tmp1 = Sleef_finz_logf8_u10kvx(tmp0);
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
    printf("Sleef_finz_logf8_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_finz_logf8_u10kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
