/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_floorf8_kvx.c --function Sleef_finz_floorf8_kvx \
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
     0x1.6e662ep-81f, 0x1.d57236p-117f, 0.0f, 0.0f, 0x1.bbaab8p-49f,
     0x1.5a5d26p-102f, 0.0f, 0.0f, 0x1.50338cp-69f, 0x1.182a3ap-46f, 0.0f,
     0x1.3cd33ap-121f, 0x1.156a0ap-66f, 0.0f, 0x1.6a38d2p-84f, 0.0f, 0x1.bcc2acp-118f,
     0.0f, 0x1.31b836p-36f, 0x1.8be2bap-91f, 0x1.2f8e14p-35f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.89def4p-99f, 0x1.7c8aa4p-47f, 0.0f, 0x1.f8adcap-95f,
     0x1.310a9p-14f, 0.0f, 0x1.9634d6p-73f, 0x1.b23942p-100f, 0.0f, 0.0f,
     0x1.6c112p-73f, 0x1.7e8c7ap-8f, 0x1.981286p-80f, 0.0f, 0x1.da211ep-92f, 0.0f,
     0x1.4a4592p-83f, 0.0f, 0x1.e93fdp-81f, 0x1.1d3248p-20f, 0.0f, 0x1.7476d8p-89f,
     0.0f, 0x1.57021ap-73f, 0.0f, 0x1.26ed16p-110f, 0x1.0c6354p-15f, 0.0f,
     0x1.bcf334p-68f, 0.0f, 0x1.608fdcp-122f, 0.0f, 0.0f, 0x1.e06194p-4f,
     0x1.37f458p-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5cd95ap-73f, 0x1.e949dap-31f,
     0x1.7b0766p-111f, 0x1.1ed39ep-7f, 0x1.bda68cp-17f, 0.0f, 0x1.d253fep-4f,
     0x1.b4b572p-81f, 0x1.5072b6p-63f, 0.0f, 0.0f, 0x1.4664fep-19f, 0.0f,
     0x1.d6edap-113f, 0.0f, 0.0f, 0.0f, 0x1.fa69acp-80f, 0x1.4604cp-65f, 0.0f, 0.0f,
     0x1.355c26p-33f, 0.0f, 0x1.7056d8p-66f, 0.0f, 0.0f, 0.0f, 0x1.82a044p-66f, 0.0f,
     0x1.9943fep-96f, 0x1.5031ecp-121f, 0.0f, 0.0f, 0.0f, 0x1.c8141ep-71f,
     0x1.5e7a56p-102f, 0x1.d5434ep-15f, 0x1.bc687ep-64f, 0x1.5e93cep-7f,
     0x1.1384fp-59f, 0x1.6b774p-54f, 0.0f, 0x1.39904ep-56f, 0.0f, 0x1.0b254ap-92f,
     0x1.a09346p-44f, 0x1.bbfc98p-35f, 0.0f, 0x1.1cfe8p-92f, 0.0f, 0x1.0eba42p-38f,
     0.0f, 0.0f, 0.0f, 0x1.d8965ep-5f, 0x1.e35a8ap-116f, 0.0f, 0x1.de916ap-102f,
     0x1.30c4eap-9f, 0.0f, 0.0f, 0x1.59aedp-102f, 0x1.c593fep-50f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.370312p-79f, 0x1.bd2462p-119f, 0x1.9d9c62p-61f, 0.0f, 0.0f, 0.0f,
     0x1.913046p-41f, 0.0f, 0.0f, 0.0f, 0x1.2e0a3cp-94f, 0x1.0aa574p-123f,
     0x1.3e4834p-90f, 0.0f, 0.0f, 0x1.26087ep-71f, 0.0f, 0x1.a4e05ap-65f,
     0x1.6bda9cp-121f, 0x1.7c0aa8p-80f, 0x1.42d588p-82f, 0.0f, 0x1.6eafa2p-1f, 0.0f,
     0.0f, 0x1.99f0b8p-70f, 0.0f, 0x1.49d232p-101f, 0.0f, 0x1.381a46p-95f,
     0x1.6f03ecp-30f, 0.0f, 0.0f, 0x1.b40ebcp-29f, 0x1.da0e28p-43f, 0.0f,
     0x1.cf604p-30f, 0x1.675bc8p-123f, 0.0f, 0.0f, 0x1.8a375cp-73f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d8fc1ep-24f, 0x1.b38a7cp-74f, 0x1.9390e8p-71f,
     0x1.6254ep-82f, 0.0f, 0x1.f3df12p-29f, 0x1.4a78a8p-82f, 0.0f, 0x1.bd5ee2p-38f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.cc6daap-56f, 0.0f, 0.0f, 0x1.437314p-47f, 0.0f, 0.0f,
     0.0f, 0x1.420f54p-98f, 0.0f, 0x1.4a5392p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e001cp-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d7abd2p-87f,
     0.0f, 0x1.8578cap-108f, 0x1.70aa1ap-33f, 0.0f, 0x1.56b88cp-71f, 0x1.53597cp-27f,
     0.0f, 0x1.ba5caep-78f, 0.0f, 0.0f, 0x1.dffd26p-18f, 0x1.782d2ep-83f, 0x1p0f,
     0.0f, 0.0f, 0.0f, 0x1.bf9ap-66f, 0.0f, 0x1.0dee2p-64f, 0x1.dbb76ap-14f,
     0x1.74c08ep-83f, 0.0f, 0.0f, 0.0f, 0x1.c050aep-57f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.987e5p-65f, 0.0f, 0x1.cdfeep-111f, 0x1.23ed12p-53f, 0x1.d02e7ep-91f,
     0x1.24b608p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9d4a06p-14f, 0.0f, 0.0f, 0.0f,
     0x1.6bd6e8p-15f, 0x1.8f4f2ap-52f, 0.0f, 0x1.59ae1ap-105f, 0.0f, 0x1.9a0898p-76f,
     0.0f, 0.0f, 0.0f, 0x1.483772p-52f, 0.0f, 0x1.d7ec88p-2f, 0x1.0ce0a4p-16f, 0.0f,
     0x1.e5e2e2p-12f, 0x1.e0c84ep-58f, 0x1.32c462p-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.28a008p-42f, 0.0f, 0.0f, 0.0f, 0x1.0303cp-5f, 0.0f, 0x1.bc1848p-69f, 0.0f,
     0.0f, 0x1.10a37ap-35f, 0x1.4df6fap-57f, 0x1.ab5ff2p-121f, 0x1.595f5ap-73f, 0.0f,
     0x1.90d066p-75f, 0x1.7776acp-4f, 0x1.deaf7p-54f, 0x1.5c0a82p-13f,
     0x1.358ae6p-16f, 0x1.36aa46p-36f, 0.0f, 0x1.0152c2p-123f, 0x1.9c48fap-7f, 0.0f,
     0.0f, 0x1.37e17p-110f, 0x1.3adc32p-34f, 0.0f, 0.0f, 0x1.b256c2p-14f,
     0x1.efa174p-34f, 0x1.8023a2p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.49208p-37f, 0.0f,
     0x1.d90c66p-16f, 0x1.f90334p-66f, 0.0f, 0x1.3e4abep-109f, 0x1.4fb12p-116f,
     0x1.895edap-83f, 0.0f, 0.0f, 0x1.3cd054p-28f, 0.0f, 0x1.3914cp-68f,
     0x1.2593bp-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b50cc6p-99f, 0.0f, 0.0f,
     0x1.d0b742p-117f, 0.0f, 0.0f, 0x1.8076d8p-104f, 0.0f, 0x1.97445p-110f,
     0x1.05fe72p-49f, 0x1.7a1c8p-92f, 0x1.3a01a8p-115f, 0.0f, 0.0f, 0x1.2d94f8p-68f,
     0x1.f94144p-99f, 0x1.37444ap-75f, 0x1.42cf4p-62f, 0x1.8a51ep-18f,
     0x1.2edfb6p-104f, 0.0f, 0x1.c7011ep-89f, 0x1.08082ap-31f, 0.0f, 0x1.31965p-97f,
     0x1.54f0bep-83f, 0x1.ac047p-30f, 0.0f, 0.0f, 0.0f, 0x1.c2bceap-71f, 0.0f,
     0x1.9f089ap-37f, 0x1.30ff96p-122f, 0.0f, 0.0f, 0.0f, 0x1.4cf9dep-48f, 0.0f,
     0x1.a37f36p-104f, 0x1.16e714p-62f, 0.0f, 0x1.2c34eep-3f, 0x1.fd1326p-20f, 0.0f,
     0.0f, 0.0f, 0x1.029bf2p-91f, 0x1.74fde8p-15f, 0x1.37af82p-33f, 0x1.0051e8p-27f,
     0x1.b55a4ep-100f, 0.0f, 0x1.4ae832p-14f, 0.0f, 0.0f, 0x1.4e34bap-73f,
     0x1.f78da6p-46f, 0x1.c3991cp-99f, 0.0f, 0.0f, 0.0f, 0x1.5d821cp-13f, 0.0f,
     0x1.6a76b6p-42f, 0x1.24d0f4p-91f, 0.0f, 0x1.4d24fap-40f, 0.0f, 0.0f, 0.0f,
     0x1.845fep-93f, 0x1.e35368p-38f, 0.0f, 0x1.4ead24p-20f, 0.0f, 0x1.5d1452p-10f,
     0x1.a4a87ap-63f, 0x1.ac1014p-26f, 0x1.c5e624p-102f, 0x1.c1796p-62f, 0.0f, 0.0f,
     0x1.16f5e6p-104f, 0.0f, 0.0f, 0x1.51062cp-119f, 0x1.701dc4p-37f, 0x1.bbdab8p-36f,
     0x1.23884ap-62f, 0.0f, 0.0f, 0x1.46b9e4p-83f, 0x1.f35bcep-4f, 0x1.624c6ep-115f,
     0x1.d6da7p-94f, 0x1.c0fb34p-33f, 0.0f, 0x1.000196p-31f, 0x1.985af8p-88f, 0.0f,
     0.0f, 0x1.8b278ep-66f, 0x1.36fe38p-72f, 0x1.4e95c4p-95f, 0x1.ee3cdp-105f, 0.0f,
     0.0f, 0.0f, 0x1.f4d97cp-125f, 0.0f, 0x1.ada69ap-58f, 0x1.a59d1ep-13f,
     0x1.0b46aep-1f, 0.0f, 0x1.e8e712p-9f, 0x1.1f51dep-27f, 0x1.1eecccp-67f,
     0x1.56446cp-71f, 0x1.675bf8p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0046eap-96f, 0.0f,
     0x1.32a84p-46f, 0.0f, 0x1.d36d4ep-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2b6b54p-121f, 0x1.5f1196p-83f, 0.0f, 0x1.47482p-8f, 0.0f, 0.0f,
     0x1.ad1efep-37f, 0x1.1de82ap-44f, 0x1.a3323cp-111f, 0.0f, 0.0f, 0.0f,
     0x1.52409ap-108f, 0x1.3c711ap-35f, 0x1.e88cd2p-85f, 0.0f, 0x1.2cea38p-9f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.26a2a2p-74f, 0.0f, 0x1.783364p-34f, 0x1.4b0fa8p-63f,
     0x1.d54a0ep-1f, 0x1.b2c8acp-36f, 0x1.c14f2cp-13f, 0.0f, 0x1.c9ba2ep-80f,
     0x1.f79d02p-99f, 0x1.6ec0c6p-124f, 0.0f, 0x1.a4d8e2p-52f, 0.0f, 0.0f,
     0x1.b6f13p-47f, 0.0f, 0x1.52d97ap-65f, 0x1.3e21aap-29f, 0.0f, 0x1.c704cap-96f,
     0x1.28ca7ep-82f, 0.0f, 0x1.8facecp-7f, 0x1.8b97f8p-78f, 0.0f, 0x1.75d3f4p-38f,
     0.0f, 0.0f, 0x1.cae7e2p-115f, 0.0f, 0x1.051114p-21f, 0x1.69f83ep-46f, 0.0f, 0.0f,
     0x1.3b36a4p-6f, 0.0f, 0.0f, 0x1.c77216p-1f, 0x1.b48d66p-109f, 0x1.25a11ap-58f,
     0x1.7b9146p-9f, 0.0f, 0.0f, 0x1.cccfc2p-25f, 0.0f, 0x1.5233cp-5f, 0.0f, 0.0f,
     0x1.87e5a8p-40f, 0.0f, 0.0f, 0x1.1bad36p-105f, 0x1.5b11ap-6f, 0x1.6cf63ep-31f,
     0x1.86f012p-108f, 0x1.9d87b6p-56f, 0.0f, 0.0f, 0x1.634fdep-20f, 0x1.5698fap-115f,
     0.0f, 0x1.fd616ap-112f, 0.0f, 0x1.77807ap-64f, 0.0f, 0.0f, 0.0f, 0x1.77ff38p-55f,
     0x1.232a38p-73f, 0.0f, 0.0f, 0.0f, 0x1.052d9cp-66f, 0x1.1292aep-30f,
     0x1.8d88bep-68f, 0.0f, 0.0f, 0x1.2c4ebcp-39f, 0x1.174366p-62f, 0.0f, 0.0f,
     0x1.c30f64p-120f, 0x1.e1f60ep-82f, 0.0f, 0x1.bb5f9ap-122f, 0.0f, 0x1.6dc812p-80f,
     0.0f, 0x1.68c92ap-81f, 0x1.6c6978p-52f, 0x1.1a7092p-123f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.77753cp-106f, 0x1.e2313ap-75f, 0x1.be2f82p-48f, 0.0f,
     0x1.e3751ep-45f, 0x1.e609e2p-92f, 0.0f, 0x1.f7bc6cp-81f, 0x1.b41d74p-33f,
     0x1.cc8dbcp-59f, 0x1.fc161p-21f, 0x1.264c2ap-41f, 0.0f, 0x1.abe82cp-87f, 0.0f,
     0.0f, 0x1.f3e7d6p-58f, 0.0f, 0x1.bdd658p-54f, 0x1.b30336p-109f, 0.0f, 0.0f,
     0x1.3e8c08p-25f, 0x1.d1c9d6p-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e1c088p-34f,
     0x1.25002cp-27f, 0x1.6fa832p-71f, 0x1.d8b96p-48f, 0.0f, 0x1.423872p-23f, 0.0f,
     0x1.ebf868p-37f, 0.0f, 0.0f, 0x1.e5693ap-21f, 0x1.03dcbcp-71f, 0.0f, 0.0f, 0.0f,
     0x1.5aff46p-80f, 0.0f, 0x1.820f42p-98f, 0x1.8f8e8ap-37f, 0x1.3a3c88p-25f,
     0x1.4ae2cp-63f, 0x1.e7ed2ap-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.01d1eep-87f, 0x1.e77e92p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9b7c4ep-13f, 0x1.259b5p-63f, 0x1.233818p-8f, 0.0f, 0.0f, 0x1.11ffcap-13f,
     0x1.c19a4p-61f, 0x1.0657ccp-27f, 0x1.73226ep-34f, 0.0f, 0x1.9b6ffap-63f,
     0x1.e49056p-14f, 0x1.f09168p-119f, 0.0f, 0.0f, 0x1.9f79ecp-73f, 0.0f, 0.0f,
     0x1.a3207ep-14f, 0.0f, 0.0f, 0.0f, 0x1.f15192p-48f, 0.0f, 0x1.e3a0e6p-83f, 0.0f,
     0x1.35cf62p-104f, 0x1.949474p-65f, 0x1.5b2532p-7f, 0.0f, 0.0f, 0x1.7f4f6ep-51f,
     0x1.47031p-85f, 0x1.6998eep-44f, 0.0f, 0.0f, 0x1.ad0e28p-15f, 0x1.396f72p-46f,
     0x1.ec5358p-86f, 0.0f, 0x1.23bb6p-117f, 0x1.5c3feap-52f, 0x1.b7f472p-26f, 0.0f,
     0x1.4045bep-22f, 0x1.85be12p-69f, 0.0f, 0x1.6b4dap-119f, 0x1.02659cp-29f, 0.0f,
     0x1.133b04p-58f, 0.0f, 0x1.c9533ep-42f, 0.0f, 0x1.5dd5acp-59f, 0.0f, 0.0f, 0.0f,
     0x1.70fe1p-118f, 0x1.230d08p-100f, 0.0f, 0x1.fecd78p-70f, 0x1.210a5ep-2f, 0.0f,
     0x1.486b54p-124f, 0.0f, 0x1.ca328ap-115f, 0x1.12ba9cp-1f, 0.0f, 0x1.fbdf92p-119f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cc4cbp-4f, 0.0f, 0.0f, 0x1.1cf2eep-81f, 0.0f,
     0x1.5bd816p-111f, 0x1.c22d7cp-68f, 0x1.bd5c1ap-3f, 0x1.3ba2ep-37f,
     0x1.5de77ap-118f, 0x1.e5942cp-15f, 0.0f, 0.0f, 0x1.8ae9ccp-92f, 0.0f,
     0x1.1db11ap-85f, 0.0f, 0x1.76e818p-120f, 0.0f, 0x1.fdc15ap-123f, 0x1p0f, 0.0f,
     0.0f, 0x1.531ba6p-27f, 0x1.1a32dp-32f, 0x1.b061cp-70f, 0x1.a8834p-12f, 0.0f,
     0x1.c720bcp-95f, 0x1.130092p-6f, 0.0f, 0x1.695e9ep-38f, 0.0f, 0.0f, 0.0f,
     0x1.13782p-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.49abbcp-54f, 0x1.e1d7b2p-74f,
     0x1.eb540ap-38f, 0.0f, 0x1.8d817cp-65f, 0x1.1c092ap-16f, 0x1.38363ap-119f,
     0x1.3d940cp-2f, 0.0f, 0x1.873372p-24f, 0.0f, 0.0f, 0.0f, 0x1.6cdebep-54f, 0.0f,
     0x1.9968b8p-122f, 0x1.372058p-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d4c8cap-66f, 0.0f,
     0x1.a5cafp-9f, 0.0f, 0.0f, 0x1.35fa96p-68f, 0x1.26bd74p-24f, 0x1.5b011cp-79f,
     0.0f, 0.0f, 0x1.5ff95ap-32f, 0.0f, 0x1.649cc2p-92f, 0x1.9dc542p-15f,
     0x1.35fd1p-119f, 0.0f, 0x1.9d265p-77f, 0.0f, 0x1.ecaedcp-82f, 0.0f,
     0x1.a4fa4cp-12f, 0x1.35e116p-125f, 0x1.b8c33ep-59f, 0.0f, 0x1.15e978p-7f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.32d194p-27f, 0.0f, 0.0f, 0x1.25a0ap-45f,
     0x1.b87c04p-33f, 0.0f, 0.0f, 0x1.4eccd6p-33f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f,
     0x1.497ddap-102f, 0x1.665f02p-80f, 0.0f, 0x1.95238ep-21f, 0x1.888116p-110f,
     0x1.047186p-46f, 0x1.3a86e4p-11f, 0.0f, 0x1.2bdf44p-28f, 0x1.a014cp-26f, 0.0f,
     0.0f, 0x1.b90168p-91f, 0x1.2c122ap-10f, 0.0f, 0x1.f96e38p-120f, 0.0f, 0.0f,
     0x1.b782c6p-51f, 0x1.6a74dep-54f, 0.0f, 0x1.43a6a6p-90f, 0.0f, 0.0f,
     0x1.ed7de4p-101f, 0x1.7fa60ap-95f, 0.0f, 0.0f, 0x1.0e955p-97f, 0.0f,
     0x1.555c5cp-72f, 0.0f, 0x1.c9abcep-44f, 0.0f, 0x1.9d661cp-115f, 0x1.7618bp-68f,
     0.0f, 0.0f, 0.0f, 0x1.b5be6ap-97f, 0.0f, 0.0f, 0x1.47d106p-122f, 0.0f, 0.0f,
     0x1.3fda84p-82f, 0x1.08e4eep-121f, 0x1.e5465p-113f, 0x1.9654a6p-103f, 0.0f, 0.0f,
     0.0f, 0x1.d2f458p-27f, 0.0f, 0.0f, 0x1.087966p-69f, 0.0f, 0.0f, 0x1.8ca3a2p-1f,
     0.0f, 0.0f, 0.0f, 0x1.c12bdp-85f, 0x1.c70b3ap-69f, 0.0f, 0x1.535e1cp-76f,
     0x1.6a5f52p-75f, 0.0f, 0.0f, 0x1.4dd244p-105f, 0x1.4700d4p-51f, 0.0f, 0.0f, 0.0f,
     0x1.e4db5cp-29f, 0x1.27301p-78f, 0x1.88ae06p-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e7265ap-78f, 0x1.71f112p-37f, 0x1.adbb32p-22f, 0.0f, 0x1.e91ed2p-89f,
     0.0f, 0.0f, 0x1.4fe3f8p-24f, 0.0f, 0.0f, 0x1.1d9a4cp-68f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.560cc8p-106f, 0.0f, 0.0f,
     0x1.80cc34p-61f, 0.0f, 0.0f, 0x1.63dcb6p-30f, 0x1.2d8aaep-76f, 0.0f,
     0x1.36de4p-45f, 0.0f, 0x1.3d45bp-29f, 0.0f, 0x1.268c3cp-82f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1539c2p-55f, 0.0f, 0.0f, 0.0f, 0x1.5f47eep-29f, 0x1.e0024p-107f,
     0x1.123b8p-113f, 0x1.576842p-8f, 0x1.3faadap-13f, 0.0f, 0.0f, 0x1.2c7c0ap-72f,
     0.0f, 0x1.8879fep-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bceb74p-27f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.936b02p-13f, 0x1.cc6f88p-4f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a3cab6p-111f, 0.0f, 0.0f, 0.0f, 0x1.287fa4p-65f, 0.0f, 0x1.c31e3p-31f, 0.0f,
     0x1.6ed0aep-51f, 0x1.52dd72p-41f, 0x1.252aacp-34f, 0.0f, 0.0f
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
            tmp1 = Sleef_finz_floorf8_kvx(tmp0);
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
    printf("Sleef_finz_floorf8_kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_finz_floorf8_kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
