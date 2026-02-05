/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_fastpowf8_u3500kvx.c --function \
 *     Sleef_fastpowf8_u3500kvx --arity 2 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32,binary32 --vector-size 8 \
 *     --function-input-vector-size 8 --bench --no-embedded-bin --target kv3
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
     0x1.48dafp-71f, 0.0f, 0.0f, 0.0f, 0x1.83dec2p-94f, 0.0f, 0x1.4461cp-89f,
     0x1.5ccaa8p-3f, 0.0f, 0x1.f4a27ep-59f, 0x1.64a334p-9f, 0.0f, 0x1.be3d74p-117f,
     0.0f, 0x1.44836ep-37f, 0x1.a9e264p-10f, 0.0f, 0x1.6634bcp-39f, 0x1.3f987ep-14f,
     0x1.96aba2p-92f, 0.0f, 0x1.44e70ap-91f, 0.0f, 0x1.ce8992p-60f, 0.0f,
     0x1.bfa104p-73f, 0.0f, 0x1.8cd09ap-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5be11p-15f,
     0x1.772554p-24f, 0x1.e6a354p-35f, 0.0f, 0x1.55b892p-44f, 0x1.258f34p-94f,
     0x1.75d1b4p-21f, 0x1.629b4ap-30f, 0x1.d08e42p-58f, 0.0f, 0x1.664782p-103f,
     0x1.310a58p-44f, 0x1.dd2978p-34f, 0.0f, 0x1.d6c27ep-1f, 0x1.e80d12p-10f,
     0x1.3d833cp-102f, 0x1.403b48p-88f, 0.0f, 0x1.9317d8p-89f, 0.0f, 0x1.46fbccp-85f,
     0.0f, 0x1.ffcb6ap-105f, 0x1.22fb66p-12f, 0.0f, 0x1.fa5ff8p-96f, 0.0f,
     0x1.ba332ep-45f, 0x1.7abe22p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a3616ep-72f, 0.0f,
     0x1.69e33ep-82f, 0.0f, 0x1.ff3a42p-42f, 0x1.fc2af6p-82f, 0.0f, 0x1.702b8cp-53f,
     0x1.7e7082p-57f, 0.0f, 0.0f, 0x1.499eeep-14f, 0x1.08d99ap-59f, 0.0f,
     0x1.99a976p-65f, 0x1.18a2e8p-91f, 0x1.ea6142p-40f, 0x1.08b7a4p-126f, 0.0f,
     0x1.1444fap-15f, 0.0f, 0x1.b1e828p-63f, 0.0f, 0x1.547a14p-82f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.5cae32p-95f, 0x1.4276cp-70f, 0x1.987dbcp-5f, 0.0f, 0x1.6bf09p-18f,
     0x1.399456p-95f, 0.0f, 0x1.010946p-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9981f4p-66f, 0.0f, 0.0f, 0x1.2ef0a6p-109f, 0x1.73d652p-28f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e1893ep-24f, 0.0f, 0.0f, 0x1.d00b3ap-106f,
     0x1.e59bbap-103f, 0.0f, 0.0f, 0.0f, 0x1.eccf8ep-49f, 0.0f, 0.0f, 0x1.a13666p-97f,
     0.0f, 0x1.97743ep-109f, 0x1.8f5532p-24f, 0x1.0bd024p-98f, 0x1.9a49dp-5f, 0.0f,
     0.0f, 0.0f, 0x1.85b966p-8f, 0x1.4b8facp-55f, 0.0f, 0x1.623b48p-76f, 0.0f,
     0x1.6994e4p-80f, 0.0f, 0x1.1a8e42p-89f, 0.0f, 0x1.722aap-113f, 0x1.527dfap-27f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a88062p-39f, 0.0f, 0x1.843fc6p-112f, 0.0f, 0.0f,
     0x1.0cee52p-115f, 0.0f, 0x1.aa79b4p-67f, 0.0f, 0.0f, 0x1.cbd736p-103f,
     0x1.c1b27ep-115f, 0.0f, 0x1.da5322p-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ed7222p-43f,
     0x1.03b228p-88f, 0x1.0c295ap-31f, 0x1.9f5f5p-61f, 0.0f, 0x1.13d08ap-126f, 0.0f,
     0.0f, 0x1.f9f8e8p-46f, 0x1.fa1f2cp-97f, 0.0f, 0x1.e6e1a6p-15f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.438968p-106f, 0x1.963e2ap-64f, 0x1.0f55c2p-85f, 0.0f, 0x1.f133c4p-105f,
     0.0f, 0.0f, 0.0f, 0x1.b159e6p-11f, 0.0f, 0.0f, 0x1.3ed1fp-122f, 0x1.6f0a7cp-76f,
     0x1.32a38p-11f, 0x1.982872p-53f, 0.0f, 0.0f, 0x1.54cb66p-33f, 0x1.a347aap-90f,
     0x1.c06512p-29f, 0x1.60d04p-55f, 0.0f, 0x1.e1b7aep-65f, 0.0f, 0x1.594ea6p-31f,
     0.0f, 0x1.0d2bc6p-93f, 0.0f, 0.0f, 0x1.5d0e3cp-71f, 0.0f, 0x1.609cbp-43f,
     0x1.411f96p-89f, 0x1.33f39ep-22f, 0.0f, 0.0f, 0x1.c896ccp-95f, 0.0f, 0.0f, 0.0f,
     0x1.2faccep-30f, 0.0f, 0x1.1e4046p-96f, 0x1.f595f2p-110f, 0x1.07858ap-54f,
     0x1.df5606p-103f, 0.0f, 0x1.8addd2p-83f, 0x1.522842p-108f, 0x1.b478f2p-26f,
     0x1.ce0c5p-54f, 0.0f, 0x1.89539cp-109f, 0.0f, 0.0f, 0x1.975976p-67f,
     0x1.b29bb8p-109f, 0.0f, 0.0f, 0x1.43cae6p-15f, 0.0f, 0x1.3cee9cp-13f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.1fda0ep-49f,
     0x1.d0e0a2p-101f, 0.0f, 0.0f, 0x1.ceeafep-113f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.891e9cp-57f, 0.0f, 0.0f, 0x1.4cca74p-63f, 0.0f, 0.0f, 0x1.13ed4p-123f,
     0x1.d0b6e8p-39f, 0x1.a9fc98p-81f, 0.0f, 0x1.b9834ap-38f, 0x1.c6e144p-98f, 0.0f,
     0.0f, 0x1.b5cb96p-39f, 0x1.866caap-33f, 0x1.8f3688p-61f, 0x1.d9cc02p-54f, 0.0f,
     0.0f, 0.0f, 0x1.be0444p-114f, 0x1.9057cap-107f, 0.0f, 0x1.d5623cp-98f, 0.0f,
     0x1.96c2bcp-114f, 0.0f, 0.0f, 0.0f, 0x1.bdc0b8p-46f, 0.0f, 0.0f, 0.0f,
     0x1.bcd1d2p-52f, 0.0f, 0x1.5db1f4p-1f, 0.0f, 0x1.1cae8ap-6f, 0x1.b0e844p-45f,
     0x1.38304p-53f, 0.0f, 0x1.306c9ap-68f, 0x1.4bb024p-104f, 0x1.11d33ep-33f,
     0x1.dc4ae6p-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2d610cp-74f, 0x1.9ea5a2p-46f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1a8abcp-2f, 0.0f, 0.0f, 0.0f,
     0x1.e683dep-69f, 0x1.fe736ep-1f, 0.0f, 0.0f, 0x1.6cdc06p-77f, 0x1.d3c5aap-15f,
     0.0f, 0x1.d7a314p-87f, 0x1.167acep-90f, 0x1.ff525p-33f, 0x1.9d233p-49f, 0.0f,
     0x1.164cb4p-87f, 0.0f, 0x1.54f5p-8f, 0x1.0f83bp-115f, 0x1.9af142p-62f, 0.0f,
     0.0f, 0x1.24db8ep-76f, 0.0f, 0.0f, 0.0f, 0x1.db89dap-10f, 0x1.3b268ap-87f, 0.0f,
     0.0f, 0x1.6ec192p-89f, 0.0f, 0x1.aa4bd8p-46f, 0x1.aad6d2p-20f, 0x1.dfa4cp-62f,
     0x1.e72dbap-87f, 0x1.57e0f6p-53f, 0x1.7aad3ap-24f, 0.0f, 0x1.59e8cp-88f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.8a1078p-125f, 0.0f, 0x1.8b9e6ap-104f, 0.0f,
     0x1.85f636p-69f, 0x1.c8c87ap-103f, 0.0f, 0.0f, 0x1.0cdcaep-68f, 0.0f,
     0x1.0babcep-52f, 0.0f, 0x1.ab2e6ep-121f, 0x1.adf37p-22f, 0.0f, 0.0f,
     0x1.86670ap-54f, 0.0f, 0.0f, 0.0f, 0x1.87002ep-10f, 0x1.c99348p-53f,
     0x1.1b0736p-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0c9342p-23f, 0.0f, 0.0f,
     0x1.f0861ap-113f, 0x1.d2e094p-93f, 0.0f, 0x1.d6c61ep-94f, 0x1.e2b1e2p-47f, 0.0f,
     0x1.5f689p-83f, 0x1.c55ad4p-104f, 0x1.f6d42ep-49f, 0x1.eb4c44p-112f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.0ab95ep-120f, 0x1.abadd8p-54f, 0x1.3828ap-26f,
     0x1.52342p-71f, 0x1p0f, 0x1.78227p-6f, 0.0f, 0.0f, 0.0f, 0x1.53e4d2p-22f,
     0x1.bf934ep-97f, 0.0f, 0.0f, 0x1.de0538p-20f, 0x1.8d95d8p-22f, 0.0f,
     0x1.ea4d02p-63f, 0x1.a0b172p-79f, 0.0f, 0x1.fe936p-58f, 0x1.8e2ebap-125f,
     0x1.4a9072p-26f, 0.0f, 0.0f, 0.0f, 0x1.6d54acp-49f, 0.0f, 0x1.72252ap-88f, 0.0f,
     0x1.50bb16p-98f, 0.0f, 0.0f, 0x1.511eep-110f, 0.0f, 0.0f, 0x1.95d744p-39f,
     0x1.00f52ep-113f, 0x1.6914eep-41f, 0.0f, 0x1p0f, 0.0f, 0x1.d8a39ap-36f,
     0x1.863236p-2f, 0.0f, 0x1.14f4fap-51f, 0.0f, 0x1.1ccf9ap-86f, 0.0f, 0.0f,
     0x1.ea87fp-40f, 0x1.c77f7cp-18f, 0x1.ef7fa2p-113f, 0.0f, 0.0f, 0.0f,
     0x1.7b1696p-104f, 0.0f, 0x1.d51708p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ae5b0ep-125f, 0.0f, 0.0f, 0x1.827828p-59f, 0x1.5de208p-94f, 0.0f,
     0x1.a7ac64p-16f, 0.0f, 0.0f, 0.0f, 0x1.e20ef2p-121f, 0x1.8ef5e6p-121f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b2c39cp-47f, 0.0f, 0x1.e2280cp-95f, 0.0f, 0x1.174b8cp-25f,
     0x1.52bd2ep-30f, 0x1.01de96p-87f, 0.0f, 0x1.bc6b9ep-71f, 0x1.f5c1e8p-69f,
     0x1.f9dd96p-121f, 0.0f, 0x1.7f61ecp-73f, 0.0f, 0x1.27468ep-121f, 0x1.c0fa92p-47f,
     0x1.18b62ap-123f, 0x1.ddcbf4p-4f, 0x1.c427dep-84f, 0.0f, 0x1.001e06p-73f,
     0x1.7a24dep-22f, 0x1.3cfc04p-43f, 0.0f, 0x1.4b0a2p-64f, 0x1.45b746p-55f, 0.0f,
     0x1.f777ccp-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3aa692p-42f, 0x1.d64706p-34f,
     0x1.6e1072p-59f, 0.0f, 0.0f, 0x1.5de6c6p-52f, 0x1.3b933p-93f, 0.0f,
     0x1.0357fp-59f, 0.0f, 0.0f, 0.0f, 0x1.804066p-72f, 0.0f, 0x1.8e5a3ep-18f,
     0x1.2b6f22p-93f, 0.0f, 0.0f, 0.0f, 0x1.7f4b76p-91f, 0.0f, 0.0f, 0.0f,
     0x1.28117cp-76f, 0x1.8d80dcp-68f, 0.0f, 0x1.4dcfa4p-26f, 0x1.751f9cp-124f,
     0x1.c9821ap-94f, 0x1.d99bfcp-53f, 0x1.bb1adcp-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9fe89ep-21f, 0x1.ca5b8p-13f, 0.0f, 0x1.729ebcp-4f, 0x1.e8e10ep-57f,
     0x1.839fc8p-57f, 0x1.84aa92p-91f, 0.0f, 0.0f, 0x1.beab88p-89f, 0x1.3a8b6p-125f,
     0x1.82652cp-58f, 0x1.43d0bap-37f, 0x1.450dfp-98f, 0.0f, 0.0f, 0x1.b0cdaap-56f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.027a54p-49f, 0x1.195648p-115f,
     0x1.913472p-15f, 0x1.754a7cp-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8b9c6ep-72f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.65df6p-60f, 0.0f, 0.0f,
     0x1.0d7c9p-11f, 0.0f, 0x1.b37a3p-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.be723ep-73f, 0.0f, 0.0f, 0x1.aa8ed6p-70f, 0.0f, 0x1.9c6b8cp-20f,
     0x1.8448eap-105f, 0x1.a5025cp-71f, 0.0f, 0x1.95c672p-28f, 0.0f, 0.0f,
     0x1.458bp-68f, 0.0f, 0x1.6b773ap-57f, 0.0f, 0x1.604cf6p-4f, 0x1.790708p-81f,
     0x1.f96312p-46f, 0x1.9a9a1cp-5f, 0.0f, 0x1.e61416p-46f, 0x1.63ad84p-95f,
     0x1.8885c2p-79f, 0x1.906b1ep-47f, 0x1.b83f62p-9f, 0x1.ef8b06p-36f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.de95ccp-79f, 0x1.245fdp-110f, 0x1.b613acp-52f,
     0x1.809d8cp-91f, 0x1.3e1c3cp-48f, 0.0f, 0.0f, 0x1.c72ed4p-87f, 0x1.ed5f06p-34f,
     0.0f, 0.0f, 0.0f, 0x1.c4c38p-77f, 0.0f, 0.0f, 0x1.fe9d62p-69f, 0.0f,
     0x1.9c3c12p-37f, 0.0f, 0x1.c99b44p-105f, 0x1.06d2fep-73f, 0x1.a9cbecp-18f, 0.0f,
     0x1.afa106p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3d95f4p-1f, 0.0f,
     0x1.3e96aap-55f, 0.0f, 0x1.6edb3p-126f, 0.0f, 0.0f, 0.0f, 0x1.c2ca14p-45f,
     0x1.43680ap-121f, 0.0f, 0x1.4e33e2p-60f, 0.0f, 0.0f, 0.0f, 0x1.86fb24p-125f,
     0.0f, 0x1.08db7p-48f, 0x1.79b98p-24f, 0.0f, 0.0f, 0x1.6e7ac8p-88f, 0.0f,
     0x1.4a203ep-97f, 0.0f, 0x1.a5d75ap-91f, 0x1.2b5eeap-59f, 0.0f, 0.0f,
     0x1.cb45b8p-106f, 0x1.924b1cp-79f, 0.0f, 0x1.7b7782p-121f, 0.0f, 0.0f, 0.0f,
     0x1.ef1b04p-35f, 0x1.62d792p-27f, 0.0f, 0x1.d18e08p-1f, 0x1.f7cc6p-58f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d4003ap-65f, 0x1.4476d8p-84f, 0.0f, 0.0f, 0x1.603beap-91f,
     0.0f, 0x1.302b5ep-92f, 0.0f, 0.0f, 0x1.eecc06p-88f, 0x1.779158p-65f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.977a0ep-42f, 0x1.eb11ep-49f, 0x1.39ece6p-50f, 0x1.e7975cp-53f,
     0x1.cc3066p-24f, 0.0f, 0x1.e63466p-78f, 0x1.882a7p-123f, 0.0f, 0x1.263448p-31f,
     0x1.94e1cap-2f, 0.0f, 0x1.41d118p-92f, 0x1.d640bap-119f, 0.0f, 0x1.8941a4p-84f,
     0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a836bep-104f, 0x1.99ae56p-53f,
     0x1.5b4c7p-22f, 0.0f, 0x1.909feep-18f, 0.0f, 0.0f, 0x1.4bed24p-56f, 0.0f, 0.0f,
     0x1.da12d2p-47f, 0.0f, 0x1.6534aap-125f, 0.0f, 0x1.4dafbcp-82f, 0x1.cfab64p-19f,
     0.0f, 0.0f, 0x1.155c96p-66f, 0.0f, 0.0f, 0.0f, 0x1.6227a8p-107f, 0x1.6da1c8p-95f,
     0x1.6ce66ep-50f, 0.0f, 0.0f, 0x1.fdfda2p-109f, 0.0f, 0.0f, 0.0f, 0x1.487c72p-49f,
     0.0f, 0.0f, 0.0f, 0x1.7b8dc6p-21f, 0x1.b96e7ap-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.791dp-121f, 0.0f, 0.0f, 0x1.3a6f42p-44f, 0x1.08c72ep-26f, 0x1.9bd276p-91f,
     0.0f, 0.0f, 0x1.f4912p-91f, 0.0f, 0x1.5e58bcp-33f, 0.0f, 0x1.2f0958p-51f, 0.0f,
     0x1.45938ep-110f, 0x1.270384p-50f, 0.0f, 0.0f, 0x1.b35ccp-37f, 0x1.ab98d4p-82f,
     0.0f, 0.0f, 0.0f, 0x1.74bb2p-64f, 0.0f, 0.0f, 0x1.443192p-63f, 0.0f,
     0x1.63830ep-97f, 0.0f, 0x1.97ebf2p-77f, 0x1.059322p-28f, 0.0f, 0.0f, 0.0f,
     0x1.a769f4p-41f, 0x1.27a874p-65f, 0x1.747df4p-72f, 0x1.18b9cep-67f, 0.0f, 0.0f,
     0.0f, 0x1.97089ap-9f, 0x1.7ba9aap-92f, 0x1.34d254p-77f, 0.0f, 0x1.00752p-32f,
     0.0f, 0.0f, 0x1.2d9b14p-79f, 0.0f, 0.0f, 0x1.586fdep-59f, 0x1.e07958p-18f, 0.0f,
     0.0f, 0x1.0529a2p-69f, 0.0f, 0.0f, 0x1.4fb31cp-111f, 0x1.b39e8ep-61f, 0.0f, 0.0f,
     0.0f, 0x1.604836p-116f, 0x1.aea3cp-105f, 0x1.4ad072p-116f, 0x1.5d5304p-122f,
     0x1.1aebb6p-10f, 0.0f, 0.0f, 0.0f, 0x1.48a9a6p-4f, 0.0f, 0.0f, 0x1.9acab6p-108f,
     0x1.93d94cp-100f, 0.0f, 0x1.aacc42p-95f, 0x1.d9e73cp-22f, 0x1.fd02fap-1f,
     0x1.ae31e2p-32f, 0x1.7edcap-31f, 0.0f, 0.0f, 0x1.a03ac6p-81f, 0x1.7c43f2p-72f,
     0x1.1f7c3p-86f, 0x1.9e76aap-46f, 0x1.616992p-50f, 0x1.7e9146p-91f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.9286eap-83f, 0.0f, 0.0f, 0x1.fd77ccp-3f, 0.0f, 0.0f, 0.0f,
     0x1.941658p-9f, 0.0f, 0.0f, 0x1.dc0878p-10f, 0x1.18d7bap-76f, 0.0f, 0.0f,
     0x1.1b69b4p-19f, 0x1.facd9p-103f, 0x1.397a3cp-91f, 0x1.5b328p-7f,
     0x1.b9e4d2p-97f, 0x1.518beep-95f, 0.0f, 0x1.ab711ap-106f, 0x1.007572p-63f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.20ce7ep-4f, 0.0f, 0x1.0657eap-40f, 0x1.e53a8p-82f,
     0x1.aa488cp-35f, 0.0f, 0.0f, 0x1.1abe66p-103f, 0x1.71a80ap-32f, 0.0f, 0.0f, 0.0f,
     0x1.9476c6p-28f, 0x1.987762p-45f, 0x1.6b035cp-117f, 0x1.cd4dacp-99f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.2fb49ep-58f, 0x1.0f4b54p-73f, 0.0f, 0x1.966c5p-8f, 0.0f, 0.0f,
     0x1.5f70c8p-42f, 0x1.44e5ccp-101f, 0.0f, 0.0f, 0x1.c3d008p-14f, 0x1.31dcep-20f,
     0.0f, 0x1.5fbd5ep-75f, 0x1.bc6d8ap-25f, 0.0f, 0.0f, 0x1.a6efc8p-92f, 0.0f,
     0x1.56f59ep-85f, 0x1.a09b74p-79f, 0x1.1674dep-81f, 0x1.aeb95ep-41f,
     0x1.59862ep-125f, 0x1.cb23c4p-66f, 0.0f, 0x1.9fe3a4p-88f, 0x1.4476a8p-22f, 0.0f,
     0.0f, 0.0f, 0x1.f763b8p-63f, 0.0f, 0.0f, 0x1.35a7a2p-3f, 0x1.32306cp-43f,
     0x1.1a8d08p-96f, 0x1.2ee8d8p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2767a8p-126f,
     0x1.87f08cp-71f, 0.0f, 0x1.a7ffe8p-52f, 0x1.832d66p-54f, 0x1.76c966p-51f,
     0x1.114dc2p-67f, 0.0f, 0x1.5a4a92p-42f, 0x1.d36118p-67f, 0x1.7c3274p-116f,
     0x1.217b6ep-51f, 0.0f
};
static const float external_bench_wrapper_input_table_arg1[1008]  = {
     0x1.b06f3p-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0e6502p-48f, 0.0f,
     0x1.56ae3cp-97f, 0.0f, 0x1.bffb54p-45f, 0x1.eadedp-124f, 0x1.01294ap-79f,
     0x1.4722fap-82f, 0x1.7d78acp-110f, 0x1.23dcd2p-63f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.130814p-110f, 0.0f, 0x1.cc45c8p-107f, 0x1.e8693ap-21f, 0.0f, 0x1.09d22p-64f,
     0x1.5a9d08p-55f, 0.0f, 0x1.c3ba0ep-49f, 0x1.b8fbfap-123f, 0x1.7384d2p-21f,
     0x1.1231f6p-54f, 0.0f, 0.0f, 0x1.f187p-126f, 0.0f, 0x1.8aac74p-84f, 0.0f,
     0x1.5ba0fap-67f, 0x1.c2b826p-18f, 0.0f, 0x1.abc5a8p-96f, 0.0f, 0x1.f6521p-95f,
     0.0f, 0x1.01a952p-38f, 0x1.b9927p-45f, 0.0f, 0x1.3b15e4p-117f, 0.0f,
     0x1.ead392p-12f, 0.0f, 0x1.500e74p-109f, 0.0f, 0x1.71bf0ap-111f, 0.0f,
     0x1.da8454p-52f, 0x1.a08c94p-59f, 0x1.1ca3d8p-85f, 0x1.2f9e16p-56f, 0.0f, 0.0f,
     0x1.3fccf8p-91f, 0x1.399e1ap-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.77cdccp-64f,
     0.0f, 0x1.28779ap-61f, 0x1.f963b8p-120f, 0.0f, 0.0f, 0.0f, 0x1.4488f8p-20f,
     0x1.a3c44ap-91f, 0.0f, 0x1.d91f9ep-88f, 0x1.e2e78p-35f, 0x1.69b0c8p-27f, 0.0f,
     0.0f, 0x1.306f5ap-70f, 0.0f, 0x1.1bcdfap-69f, 0x1.28041ep-9f, 0.0f,
     0x1.8d5242p-55f, 0.0f, 0x1.c43bfp-87f, 0x1.9d92dep-105f, 0x1.e877ccp-24f,
     0x1.b15d1p-68f, 0x1.701d32p-119f, 0x1.fbb12ep-86f, 0x1.372cd2p-60f, 0.0f,
     0x1.1d317ep-70f, 0x1.d0c194p-102f, 0.0f, 0.0f, 0x1.e243aap-62f, 0x1.d237eep-65f,
     0x1.dd8428p-79f, 0.0f, 0.0f, 0.0f, 0x1.2dc87ap-60f, 0x1.85c26ap-93f, 0.0f, 0.0f,
     0.0f, 0x1.aceb6ap-104f, 0.0f, 0.0f, 0.0f, 0x1.cb3fe8p-84f, 0x1.48f3c6p-85f, 0.0f,
     0.0f, 0x1.a655b4p-22f, 0.0f, 0x1.c0bca8p-48f, 0x1.dc1c1ap-5f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f94d24p-101f, 0.0f, 0x1.afe6cp-32f, 0.0f, 0x1.6d9276p-106f,
     0.0f, 0.0f, 0.0f, 0x1.b81b7ap-67f, 0.0f, 0.0f, 0x1.a997b4p-58f, 0.0f,
     0x1.fefe34p-72f, 0x1.bb1a58p-99f, 0x1.41d86ap-126f, 0.0f, 0x1.bedb8cp-65f, 0.0f,
     0x1.52c7p-5f, 0.0f, 0.0f, 0x1.9d5236p-86f, 0.0f, 0x1.1f6ebep-11f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.434034p-10f, 0x1.b8aabcp-41f, 0x1.18f316p-13f, 0x1.312856p-103f,
     0.0f, 0.0f, 0x1.8174c4p-10f, 0x1.386fc4p-45f, 0x1.c8f31ep-65f, 0.0f,
     0x1.66a5p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.73a15p-121f,
     0x1.8d53aep-73f, 0x1.fecfd2p-106f, 0x1.07e9c4p-48f, 0x1.baa66ep-89f, 0.0f, 0.0f,
     0x1.ed340ep-67f, 0x1.78d194p-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.773406p-14f, 0.0f,
     0x1.238bdap-64f, 0.0f, 0.0f, 0.0f, 0x1.d36ccp-115f, 0.0f, 0.0f, 0.0f,
     0x1.4def26p-43f, 0.0f, 0.0f, 0.0f, 0x1.0f92cep-8f, 0.0f, 0x1.2d009p-81f,
     0x1.e0efeep-63f, 0x1.c36bbp-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e02746p-103f, 0.0f,
     0x1.245b44p-112f, 0x1.b2672ep-11f, 0x1.fc3b9p-95f, 0x1.82233p-77f, 0.0f, 0.0f,
     0x1.1f3bfep-99f, 0x1p0f, 0x1.f1846p-94f, 0x1.dc40dap-72f, 0x1.34cfaep-76f, 0.0f,
     0x1.4294c8p-9f, 0x1.fa0484p-61f, 0.0f, 0x1.64017p-1f, 0x1.52c6ep-76f, 0.0f, 0.0f,
     0x1.27cfb4p-17f, 0x1.b70cf6p-55f, 0x1.ed1782p-93f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5ab47p-56f, 0.0f, 0.0f, 0x1.e2b436p-119f, 0.0f, 0.0f, 0x1.a0b6b4p-17f, 0.0f,
     0x1.7690b2p-46f, 0x1.a0f486p-23f, 0x1.b21b4ep-3f, 0x1.70f866p-123f,
     0x1.488a6ap-25f, 0.0f, 0.0f, 0x1.30adecp-9f, 0x1.45c82ap-109f, 0x1.38a85ep-68f,
     0x1.5580cp-30f, 0x1.7ced2ap-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.082146p-59f, 0.0f,
     0x1.e8527ep-57f, 0.0f, 0.0f, 0.0f, 0x1.ce54fp-60f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e2caap-124f, 0.0f, 0.0f, 0x1.33f48cp-27f, 0.0f, 0x1.372fdap-5f, 0.0f, 0.0f,
     0x1.f66dd4p-76f, 0x1.0dec66p-58f, 0x1.f0a4dap-40f, 0.0f, 0.0f, 0x1.47383cp-3f,
     0.0f, 0x1.da9654p-80f, 0.0f, 0x1.ee947ep-96f, 0.0f, 0x1.cb0a9ep-120f,
     0x1.8af768p-101f, 0.0f, 0.0f, 0x1.4320e8p-18f, 0.0f, 0x1.079518p-62f,
     0x1.3ac104p-11f, 0x1.ab055ep-109f, 0x1.4e387ap-51f, 0x1.ef4fc2p-21f,
     0x1.facaa6p-64f, 0.0f, 0.0f, 0.0f, 0x1.4182cp-87f, 0x1.580864p-8f,
     0x1.227cdcp-114f, 0x1.a1e7aap-19f, 0.0f, 0x1.97277ep-38f, 0.0f, 0x1.b89ba4p-65f,
     0x1.e5e8a6p-117f, 0x1.e49baap-117f, 0.0f, 0x1.9c3cc2p-4f, 0.0f, 0.0f, 0.0f,
     0x1.913b48p-17f, 0.0f, 0.0f, 0x1.486ccap-37f, 0.0f, 0.0f, 0x1.d4746p-64f,
     0x1.447c56p-63f, 0x1.4f7904p-75f, 0.0f, 0x1.be29a4p-20f, 0x1.942cfcp-83f,
     0x1.060af6p-110f, 0.0f, 0x1.31378ep-62f, 0x1.79926ep-82f, 0x1.3a16a4p-48f,
     0x1.1d0704p-120f, 0x1.e6fb8p-33f, 0.0f, 0x1.d94bb2p-126f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e14424p-1f, 0x1.ebdae8p-42f, 0x1.f79c38p-66f, 0.0f,
     0x1.d3e43p-59f, 0.0f, 0x1.745758p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.45d33p-18f,
     0.0f, 0x1.c7f244p-42f, 0x1.7f3b3p-115f, 0x1.fae0dap-78f, 0x1.466d9ap-14f, 0.0f,
     0.0f, 0.0f, 0x1.d50f4ap-25f, 0.0f, 0x1.c3847ap-115f, 0x1.225b3ep-57f,
     0x1.72a86ap-97f, 0.0f, 0.0f, 0x1.e4c2a8p-13f, 0x1.4459fp-14f, 0.0f, 0.0f,
     0x1.aa0402p-96f, 0.0f, 0x1.4dcep-119f, 0x1.40ae6ap-31f, 0.0f, 0.0f, 0.0f,
     0x1.8c1b68p-106f, 0x1.18846cp-114f, 0x1.fd4bd2p-88f, 0.0f, 0.0f, 0.0f,
     0x1.0c24c6p-26f, 0.0f, 0x1.a3ca34p-33f, 0x1.b7ec7ap-30f, 0x1.75bb2ap-22f,
     0x1.2a8e62p-47f, 0x1.5977f2p-32f, 0.0f, 0x1.0004fcp-40f, 0.0f, 0x1.d3d558p-69f,
     0.0f, 0x1.ac99fp-9f, 0x1.3c73cp-48f, 0x1.cf213p-83f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.7e88d4p-19f, 0x1.88f094p-50f, 0x1.0dffd4p-98f, 0x1.468afap-9f,
     0x1.376a72p-88f, 0x1.f95f7cp-122f, 0.0f, 0.0f, 0.0f, 0x1.7a60dp-107f, 0.0f, 0.0f,
     0x1.a4bc04p-4f, 0.0f, 0x1.fb1fdp-11f, 0x1.175988p-111f, 0x1.4e4e4ep-102f,
     0x1.fd9d48p-74f, 0x1.e2ef5ep-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d07d82p-122f, 0x1.22d246p-47f, 0.0f, 0.0f, 0x1.460b72p-51f, 0x1.21fc9p-40f,
     0.0f, 0x1.34b948p-89f, 0.0f, 0.0f, 0x1.3700e6p-60f, 0x1.182adcp-23f, 0.0f,
     0x1.908a58p-63f, 0x1.c5a12cp-123f, 0.0f, 0.0f, 0x1.e9f84ep-14f, 0.0f, 0.0f,
     0x1.4f59dcp-1f, 0x1.24c664p-1f, 0.0f, 0x1.890a82p-4f, 0.0f, 0x1.c56546p-67f,
     0.0f, 0x1.92b8e2p-43f, 0x1.cfc61p-103f, 0.0f, 0x1.b8938cp-48f, 0.0f,
     0x1.71d1f4p-72f, 0.0f, 0.0f, 0x1.8b6a78p-3f, 0x1.ebe2c8p-42f, 0x1.df0be4p-35f,
     0x1.699c9p-119f, 0.0f, 0x1.2b8702p-36f, 0.0f, 0x1.83cf02p-42f, 0x1.2694dcp-56f,
     0.0f, 0x1.1e593ep-117f, 0.0f, 0.0f, 0.0f, 0x1.ca32eap-28f, 0.0f, 0x1.34a8fep-57f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.1c3b36p-22f, 0.0f, 0x1.6c95cep-76f, 0x1.67f3d8p-100f,
     0x1.213242p-43f, 0x1.117738p-23f, 0.0f, 0.0f, 0x1.a0da52p-77f, 0.0f,
     0x1.a3f54ap-22f, 0.0f, 0.0f, 0x1.eb5a66p-6f, 0.0f, 0x1.389e5ap-105f,
     0x1.47edfcp-2f, 0.0f, 0.0f, 0x1.72e222p-18f, 0.0f, 0x1.9af1eap-84f,
     0x1.1ef3a8p-109f, 0x1.b9f5bp-61f, 0x1.e5a69cp-44f, 0x1.1d147cp-51f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.2a052p-83f, 0.0f, 0x1.934fdep-109f, 0x1.260c86p-86f,
     0.0f, 0.0f, 0x1.40ebd4p-53f, 0.0f, 0x1.fe5cbap-40f, 0x1.40d1bep-50f,
     0x1.c1c0c6p-11f, 0.0f, 0x1.84f2e2p-108f, 0x1.6a7d84p-92f, 0x1.51286p-1f, 0.0f,
     0x1.6a5d58p-27f, 0.0f, 0.0f, 0x1.a2e2ecp-91f, 0.0f, 0.0f, 0.0f, 0x1.06a448p-91f,
     0.0f, 0.0f, 0x1.58d69cp-82f, 0x1.42cf2p-25f, 0x1.458716p-21f, 0.0f, 0.0f,
     0x1.b67cd8p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b6ce78p-77f, 0x1.a9921cp-74f,
     0x1.4846f2p-51f, 0x1.ee9498p-8f, 0.0f, 0x1.983cc8p-11f, 0x1.9693bcp-87f,
     0x1.642d4ep-88f, 0.0f, 0x1.891d0ep-30f, 0x1.08468p-31f, 0.0f, 0x1.d62b0ap-118f,
     0x1.817a08p-107f, 0x1.939836p-111f, 0.0f, 0.0f, 0x1.5972cep-39f, 0x1.919688p-70f,
     0.0f, 0.0f, 0x1.f2a852p-17f, 0.0f, 0x1.9efd4ap-60f, 0.0f, 0x1.405104p-84f,
     0x1.338614p-81f, 0.0f, 0.0f, 0x1.6f4e7p-41f, 0x1.9feb82p-24f, 0x1.1e7374p-122f,
     0.0f, 0x1.c5ced8p-109f, 0x1.3860e2p-93f, 0x1.cc50b6p-43f, 0x1.52f3d6p-112f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.735ca4p-98f, 0x1.33d79p-89f, 0.0f, 0x1.0dd132p-23f, 0.0f,
     0.0f, 0.0f, 0x1.0f7e32p-44f, 0x1.4ce22cp-65f, 0.0f, 0.0f, 0x1.3969d6p-2f, 0.0f,
     0.0f, 0.0f, 0x1.aef40cp-106f, 0.0f, 0x1.e80eb4p-126f, 0x1.1b5748p-13f,
     0x1.def51cp-66f, 0x1.d19ca6p-56f, 0.0f, 0x1.df1412p-12f, 0.0f, 0.0f,
     0x1.b594c6p-72f, 0.0f, 0x1.465d7ep-113f, 0.0f, 0x1.137e3p-123f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d99b3p-15f, 0x1.48be6p-94f, 0.0f, 0x1.c66a88p-91f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.028dcp-8f, 0.0f, 0.0f, 0.0f, 0x1.a56196p-14f, 0.0f,
     0.0f, 0x1.c1d1dep-55f, 0.0f, 0x1.9e16dep-68f, 0x1.fd7a16p-9f, 0x1.52df76p-19f,
     0x1.a55c7p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1fb25ap-113f, 0.0f, 0.0f,
     0x1.34d83cp-112f, 0x1.e1964ap-31f, 0.0f, 0x1.a4672p-65f, 0.0f, 0x1.8e246cp-120f,
     0.0f, 0x1.e22e08p-112f, 0.0f, 0x1.025d78p-74f, 0x1.65025p-122f, 0x1.ae9f4p-93f,
     0.0f, 0x1.3ae91cp-58f, 0.0f, 0.0f, 0x1.74bcdap-7f, 0.0f, 0x1.a80ac8p-113f,
     0x1.43dadp-64f, 0x1.dd8b2ap-34f, 0x1.0161d4p-79f, 0.0f, 0.0f, 0x1.96b422p-29f,
     0x1.1a1e32p-9f, 0.0f, 0x1.8f17b6p-69f, 0x1.36283ap-55f, 0x1.e7d1e6p-120f,
     0x1.e659dp-12f, 0.0f, 0.0f, 0x1p0f, 0x1.20d0acp-74f, 0x1.39b7dp-111f,
     0x1.555084p-38f, 0x1.b85cc4p-122f, 0x1.f9b196p-2f, 0.0f, 0x1.cc4676p-99f, 0.0f,
     0.0f, 0x1.183526p-115f, 0x1.b03ad2p-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.06a8f6p-51f, 0x1.7ee5ap-49f, 0.0f, 0x1.6f9582p-41f, 0x1.5a98dep-72f, 0.0f,
     0.0f, 0.0f, 0x1.a4381ap-57f, 0x1.051034p-9f, 0x1.3f957p-37f, 0x1.21a14ap-35f,
     0x1.f134d4p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0ebe42p-6f,
     0x1.6748c6p-122f, 0.0f, 0.0f, 0.0f, 0x1.b5bbbap-93f, 0.0f, 0x1.4484acp-47f, 0.0f,
     0.0f, 0.0f, 0x1.2f63c8p-40f, 0.0f, 0x1.758e74p-56f, 0.0f, 0x1.d55ff4p-18f, 0.0f,
     0x1.ce4fb6p-49f, 0.0f, 0x1.4be1fp-29f, 0.0f, 0.0f, 0x1.744326p-125f,
     0x1.67b012p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.493896p-62f, 0.0f, 0x1.8e303ep-74f,
     0x1.0abcb8p-98f, 0x1.9889c2p-14f, 0.0f, 0.0f, 0.0f, 0x1.3423dp-124f, 0.0f,
     0x1.570c24p-123f, 0.0f, 0x1.cf9156p-103f, 0x1.7f9642p-33f, 0.0f, 0x1.3fb08cp-19f,
     0.0f, 0x1.935656p-42f, 0.0f, 0x1.610282p-24f, 0x1.23ea46p-65f, 0x1.ea3bd8p-38f,
     0x1.3acbf8p-11f, 0.0f, 0.0f, 0x1.1c8314p-80f, 0.0f, 0x1.53c0a4p-82f,
     0x1.7f2fd6p-35f, 0.0f, 0x1.4b1e78p-113f, 0x1.46b0a8p-62f, 0x1.390c94p-16f,
     0x1.d56d68p-16f, 0x1.996c72p-75f, 0.0f, 0x1.23e2eap-115f, 0.0f, 0.0f, 0.0f,
     0x1.3fde1cp-91f, 0.0f, 0x1.fad24ap-102f, 0x1.b6f0dep-98f, 0x1.e474eep-67f, 0.0f,
     0x1.8eb79p-88f, 0.0f, 0.0f, 0x1.a330c6p-96f, 0x1.908548p-68f, 0x1.00df7cp-27f,
     0x1.73bdp-86f, 0x1.91b6e8p-55f, 0x1.854e7cp-94f, 0x1.28e28p-53f, 0x1.f9deaap-36f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7df694p-100f, 0.0f, 0.0f, 0x1.c40208p-83f, 0.0f, 0.0f, 0.0f,
     0x1.52665ep-120f, 0.0f, 0x1.aec26ap-2f, 0x1.63d5bp-42f, 0.0f, 0x1.5287b8p-91f,
     0.0f, 0.0f, 0x1.945ae6p-84f, 0x1.e33952p-41f, 0.0f, 0.0f, 0x1.92923cp-80f, 0.0f,
     0.0f, 0x1.81c86p-5f, 0.0f, 0x1.6edd98p-34f, 0x1p0f, 0x1.9d2b94p-12f, 0.0f,
     0x1.519192p-40f, 0x1.1c52d6p-89f, 0x1.e00e7ep-113f, 0.0f, 0x1.082916p-18f,
     0x1.e7c17p-12f, 0x1.6b5deep-112f, 0x1.abe4aap-89f, 0.0f, 0x1.a1e8bep-47f, 0.0f,
     0x1.f208e6p-20f, 0x1.c1cf2ep-60f, 0.0f, 0x1.a201a2p-34f, 0.0f, 0.0f,
     0x1.03babep-29f, 0x1.4e4492p-32f, 0x1.54124cp-16f, 0.0f, 0x1.2b58bap-117f,
     0x1.13b8a8p-90f, 0.0f, 0.0f, 0.0f, 0x1.ffb1c2p-45f, 0x1.78a4a2p-120f, 0.0f,
     0x1.60424ep-108f, 0x1.261516p-68f, 0.0f, 0.0f, 0x1.00595ap-51f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f2a108p-55f, 0x1.07e7fep-90f, 0x1.39ed2p-71f,
     0x1.8dfabcp-71f, 0.0f, 0x1.4537f8p-87f, 0.0f, 0.0f, 0.0f, 0x1.7bc48cp-23f, 0.0f,
     0x1p0f, 0x1.ad268cp-89f, 0.0f, 0.0f, 0.0f, 0x1.292ccap-82f, 0.0f, 0x1.cecebp-45f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0ebb6cp-5f, 0.0f, 0.0f, 0x1.dda31ep-10f, 0.0f,
     0x1.f928fcp-30f, 0x1.8c88a8p-83f, 0.0f, 0x1.1ffaf4p-38f, 0x1.e10dd4p-113f, 0.0f,
     0x1.358abap-126f, 0.0f, 0x1.247a56p-95f, 0.0f, 0x1.ff6908p-79f, 0x1.322c1cp-63f,
     0x1.a75b0ep-51f, 0x1.d6d6bap-58f, 0.0f, 0.0f, 0x1.66dd86p-53f, 0x1.5a44c2p-65f,
     0x1.a6346cp-88f, 0.0f, 0x1.cf0674p-118f, 0.0f, 0x1.0759cep-76f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b54f3ep-57f, 0x1.830edap-1f, 0x1.dd1e92p-106f, 0.0f, 0.0f,
     0x1.ca1522p-107f, 0.0f, 0x1.215fp-120f, 0x1.ad4842p-117f, 0x1.51e116p-31f,
     0x1.793aa2p-22f, 0.0f, 0x1.ea5cf6p-48f, 0x1.75ea46p-98f, 0.0f, 0x1.64e048p-120f,
     0.0f, 0x1.57f576p-123f, 0.0f, 0.0f, 0.0f, 0x1.e7290cp-88f, 0x1.09f04ep-23f, 0.0f,
     0x1.88b3b6p-23f, 0x1.aff132p-84f, 0.0f, 0.0f, 0.0f, 0x1.336cb2p-122f, 0x1p0f,
     0.0f, 0x1.09562cp-116f, 0x1.9a4bfcp-94f, 0.0f, 0.0f, 0x1.ae0b92p-85f, 0.0f
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
            ml_float8_t tmp3;
            int32_t tmp4;

            memcpy(&tmp0, ((ml_float8_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            memcpy(&tmp1, ((ml_float8_t*)(external_bench_wrapper_input_table_arg1+ i)), 32);
            tmp2 = Sleef_fastpowf8_u3500kvx(tmp0, tmp1);
            memcpy(((ml_float8_t*)(external_bench_wrapper_output_table+ i)), &(tmp2), 32);
            tmp3 = local_acc + tmp2;
            local_acc = tmp3;
            tmp4 = i + INT32_C(8);
            i = tmp4;
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
    printf("Sleef_fastpowf8_u3500kvx %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_fastpowf8_u3500kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
