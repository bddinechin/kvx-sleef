/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_hypotf1_u05purecfma.c --function \
 *     Sleef_finz_hypotf1_u05purecfma --arity 2 --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary32,binary32 --bench \
 *     --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile float external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.025cd4p-65f, 0x1.27429p-85f, 0x1.28ac96p-43f, 0x1.048a7ep-35f,
     0x1.e08ac6p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.47955p-80f, 0x1.348d34p-60f, 0.0f,
     0x1.e35d5ap-96f, 0.0f, 0.0f, 0x1.1d8774p-6f, 0x1.ae8bap-97f, 0x1.328768p-72f,
     0.0f, 0x1.8ca286p-8f, 0.0f, 0.0f, 0x1.2dea82p-93f, 0x1.f0c6d4p-28f, 0.0f,
     0x1.38258p-50f, 0.0f, 0.0f, 0x1.0b753cp-102f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a0a6eep-3f, 0.0f, 0.0f, 0x1.4a8848p-41f, 0.0f, 0.0f, 0x1.c9594cp-50f, 0.0f,
     0.0f, 0x1.4fe6c4p-111f, 0x1.66f928p-11f, 0.0f, 0x1.fcdc9ep-48f, 0.0f, 0.0f,
     0x1.1be9a2p-84f, 0x1.2281f6p-22f, 0.0f, 0.0f, 0x1.b3abc6p-68f, 0x1.4f1b9ep-109f,
     0.0f, 0.0f, 0x1.445922p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a8771ep-10f,
     0x1.a746fcp-4f, 0.0f, 0x1.3717a4p-94f, 0x1.ec2b4p-106f, 0x1.3b512ap-47f,
     0x1.ce151ap-102f, 0.0f, 0x1.8bfd3ap-59f, 0.0f, 0.0f, 0x1.9e044cp-33f, 0.0f,
     0x1.4dcbccp-8f, 0x1.d92004p-102f, 0x1.34be5p-32f, 0.0f, 0x1.69d876p-82f, 0.0f,
     0.0f, 0x1.79a016p-53f, 0.0f, 0.0f, 0x1.b30858p-16f, 0x1.4e8b32p-103f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.0fa81p-87f, 0x1.551cc2p-61f, 0x1.6dc2f4p-93f, 0.0f, 0.0f,
     0x1.85e2a8p-97f, 0.0f, 0.0f, 0x1.dfbbcep-64f, 0.0f, 0.0f, 0.0f, 0x1.3e6e5ep-87f,
     0x1.8d5538p-56f, 0x1.44f918p-47f, 0.0f, 0x1.f66568p-93f, 0.0f, 0x1.03a568p-99f,
     0x1.6fea22p-117f, 0x1.31ebp-25f, 0.0f, 0.0f, 0.0f, 0x1.428426p-54f, 0.0f,
     0x1.8c342ep-122f, 0.0f, 0.0f, 0x1.5e617cp-30f, 0.0f, 0x1.c00958p-38f, 0.0f,
     0x1.befff8p-21f, 0x1.8264c4p-49f, 0x1.935b46p-106f, 0x1.f5a27p-35f,
     0x1.cc654cp-5f, 0.0f, 0x1.c3bc48p-38f, 0x1.a7ccccp-6f, 0x1p0f, 0x1.4e39ap-13f,
     0.0f, 0x1.a9841p-125f, 0x1.e2a31ap-55f, 0.0f, 0x1.6b2562p-35f, 0x1.97dcd8p-13f,
     0x1.cee6c8p-81f, 0.0f, 0x1.cd8b26p-98f, 0x1.cf4d68p-87f, 0.0f, 0x1.8d001p-78f,
     0x1.e49d72p-24f, 0.0f, 0x1.5e9948p-116f, 0.0f, 0x1.3fe6e4p-68f, 0x1p0f, 0.0f,
     0x1.12683cp-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4377ep-2f, 0.0f, 0.0f,
     0x1.2b5298p-29f, 0x1.7f77dp-52f, 0x1.5f0a86p-3f, 0.0f, 0.0f, 0x1.2e5f3ap-29f,
     0x1.e2f1b2p-99f, 0.0f, 0.0f, 0.0f, 0x1.96e24p-115f, 0x1.7411e8p-39f, 0.0f, 0.0f,
     0.0f, 0x1.7895dap-85f, 0.0f, 0.0f, 0x1.cb1f46p-121f, 0.0f, 0x1.9b0092p-71f,
     0x1.1dfb76p-34f, 0.0f, 0.0f, 0.0f, 0x1.e23f36p-34f, 0.0f, 0x1.a322e2p-115f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.282d36p-1f, 0x1.7029dap-28f, 0.0f, 0x1.b6b5d2p-83f, 0.0f,
     0x1.b20f0ep-68f, 0x1.979318p-50f, 0.0f, 0.0f, 0x1.d4d43cp-111f, 0x1.53b70ap-74f,
     0x1.b3da5ep-75f, 0.0f, 0.0f, 0x1.4f86bap-1f, 0x1.25c60ep-1f, 0.0f, 0.0f,
     0x1.da3a0ap-41f, 0.0f, 0x1.8fbbfap-41f, 0x1.ddb792p-55f, 0.0f, 0.0f,
     0x1.2e293cp-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c5f0f8p-72f, 0x1.10dfbep-14f, 0.0f,
     0.0f, 0x1.a9a12ap-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e0f8p-59f, 0x1.fc967ap-50f,
     0x1.4364f8p-47f, 0.0f, 0.0f, 0.0f, 0x1.9a116cp-52f, 0.0f, 0.0f, 0.0f,
     0x1.a6f9dp-100f, 0.0f, 0.0f, 0x1.31c692p-38f, 0.0f, 0.0f, 0.0f, 0x1.5025dcp-72f,
     0.0f, 0x1.8e3262p-20f, 0x1.c1349ap-112f, 0x1.409434p-116f, 0.0f, 0.0f,
     0x1.8cc37p-116f, 0x1.aa3a5cp-9f, 0x1.aa769cp-122f, 0.0f, 0x1.44824ap-109f, 0.0f,
     0.0f, 0x1.7bfd84p-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ff844ep-121f,
     0x1.871134p-4f, 0x1.4e8ff6p-14f, 0x1.b658eep-116f, 0.0f, 0x1.107c44p-115f,
     0x1.81558ap-104f, 0.0f, 0x1.775e38p-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7d296ep-79f, 0.0f, 0x1.a22488p-22f, 0.0f, 0x1.6c4c8ap-46f, 0.0f, 0.0f,
     0x1.6ed57p-53f, 0.0f, 0.0f, 0.0f, 0x1.8535c2p-5f, 0.0f, 0x1.a948fep-89f, 0.0f,
     0x1.1a93f8p-88f, 0.0f, 0x1.8f59f8p-12f, 0.0f, 0x1.fdb5d8p-24f, 0.0f, 0.0f, 0.0f,
     0x1.21e968p-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ef1008p-24f, 0x1.8275aap-54f,
     0x1.fce45p-31f, 0.0f, 0.0f, 0x1.c25f2p-22f, 0x1.faefbep-17f, 0.0f,
     0x1.c8f43ap-125f, 0.0f, 0x1.271cfcp-93f, 0x1.7a60bep-63f, 0.0f, 0.0f,
     0x1.073e34p-10f, 0x1.ebb432p-53f, 0x1.00bfacp-26f, 0.0f, 0.0f, 0.0f,
     0x1.2974e8p-36f, 0.0f, 0x1.bb2a76p-91f, 0x1.39a918p-19f, 0.0f, 0.0f,
     0x1.90a2d8p-51f, 0.0f, 0.0f, 0x1.754ad6p-11f, 0.0f, 0.0f, 0x1.e82446p-1f,
     0x1.98f834p-72f, 0.0f, 0.0f, 0x1.9647a6p-2f, 0x1.95c56cp-87f, 0.0f, 0.0f,
     0x1.d3df98p-62f, 0.0f, 0x1.7dfca8p-53f, 0x1.e9bd5p-125f, 0.0f, 0x1.09aebcp-86f,
     0x1.4c52d4p-95f, 0.0f, 0x1.56cdcap-60f, 0.0f, 0.0f, 0.0f, 0x1.f9fa98p-100f, 0.0f,
     0.0f, 0x1.841478p-111f, 0x1.eecadcp-95f, 0.0f, 0x1.39f438p-9f, 0x1.c45e32p-51f,
     0x1.4873c6p-37f, 0x1.1bb93ep-19f, 0x1.323fb8p-45f, 0.0f, 0.0f, 0x1.e4572ep-105f,
     0x1.53e0a8p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4a995ep-96f,
     0x1.5f4c34p-58f, 0x1.53531p-126f, 0x1.4ce39ap-91f, 0x1.0af90ep-36f, 0.0f,
     0x1.43c8a6p-73f, 0.0f, 0x1.00cd7p-93f, 0.0f, 0x1.afd24ap-21f, 0x1.9688f4p-93f,
     0x1.7c522ap-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.17381cp-53f, 0x1.d5c63ap-58f, 0.0f,
     0x1.a1625ap-90f, 0.0f, 0.0f, 0x1.588b9p-90f, 0.0f, 0x1.938d1p-57f, 0.0f, 0.0f,
     0x1.dd93eep-3f, 0x1.7a7a28p-123f, 0x1.d68e2ep-3f, 0x1.d28f7cp-88f, 0.0f,
     0x1.67326ep-76f, 0x1.30d138p-58f, 0x1.b58b4ap-28f, 0.0f, 0.0f, 0x1.1f2eep-9f,
     0x1.00bb58p-48f, 0x1.bd58fp-52f, 0.0f, 0x1.f405cep-41f, 0.0f, 0x1.acf52ap-17f,
     0x1.76aa6p-38f, 0.0f, 0x1.96b062p-16f, 0.0f, 0x1.f157e2p-20f, 0.0f,
     0x1.95a9ecp-110f, 0.0f, 0x1.2807c4p-87f, 0.0f, 0x1.358468p-124f, 0.0f, 0.0f,
     0x1.cd2e0ap-32f, 0.0f, 0.0f, 0.0f, 0x1.050d5ap-58f, 0.0f, 0x1.b15a24p-57f, 0.0f,
     0.0f, 0x1.1c9744p-96f, 0.0f, 0x1.c21b0cp-123f, 0x1.6b907p-52f, 0.0f, 0.0f,
     0x1.19796ep-57f, 0.0f, 0.0f, 0.0f, 0x1.c3603p-44f, 0x1.a52d6ep-37f,
     0x1.38a882p-50f, 0x1.d1960cp-31f, 0x1.4969f4p-121f, 0.0f, 0.0f, 0.0f,
     0x1.b90bfap-69f, 0x1.3f70cep-75f, 0x1.3fff4cp-125f, 0.0f, 0x1.47f662p-36f, 0.0f,
     0x1.92e85p-59f, 0.0f, 0x1.acade8p-29f, 0.0f, 0x1.438f78p-88f, 0.0f,
     0x1.6d7d08p-82f, 0x1.d04bdep-19f, 0x1.8336e4p-20f, 0.0f, 0x1.ac073ep-28f,
     0x1.e22148p-85f, 0.0f, 0x1.9c09b6p-83f, 0.0f, 0x1.ea33d2p-37f, 0x1.33067ap-87f,
     0x1.a9c116p-52f, 0x1.53f172p-48f, 0.0f, 0x1.fc33c2p-54f, 0x1.c3bc88p-12f, 0.0f,
     0.0f, 0x1.e36e64p-82f, 0.0f, 0x1.e6a88ap-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.155f08p-89f, 0.0f, 0x1.e8eb7cp-78f, 0.0f, 0x1.3307c6p-104f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.7c7fcep-99f, 0.0f, 0x1.55c616p-113f, 0x1.fa66bp-106f,
     0x1.3c0388p-123f, 0x1.5b17cp-109f, 0x1.5561ccp-81f, 0.0f, 0x1.e3f038p-24f,
     0x1.9231ecp-3f, 0x1.7c7d6ap-79f, 0.0f, 0.0f, 0.0f, 0x1.9c6322p-118f,
     0x1.2fed2ap-2f, 0.0f, 0.0f, 0.0f, 0x1.6b19f2p-51f, 0x1.130d18p-124f,
     0x1.67b46ep-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b09aeap-10f, 0.0f,
     0x1.66dc1ep-59f, 0.0f, 0x1.46bcdep-4f, 0.0f, 0.0f, 0x1.d9eaa2p-108f,
     0x1.8967dap-80f, 0x1.fbd3e2p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7ca04ep-104f, 0.0f,
     0.0f, 0x1.d8a942p-109f, 0.0f, 0x1.94f336p-109f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3815e4p-34f, 0.0f, 0x1.6b115cp-80f, 0x1.2d0f1p-112f, 0x1.505502p-79f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.7f5b2ep-21f, 0x1.6bb868p-68f, 0.0f, 0x1.958cb4p-49f, 0.0f,
     0.0f, 0x1.a760b2p-113f, 0x1.119ddcp-85f, 0.0f, 0.0f, 0x1.a90beap-90f, 0.0f,
     0x1.be5c96p-48f, 0x1p0f, 0x1.094cb6p-91f, 0.0f, 0x1.46d572p-22f, 0x1.6db244p-51f,
     0x1.a3beecp-61f, 0x1.0de42cp-78f, 0.0f, 0x1.935b28p-50f, 0.0f, 0x1.5f902ep-93f,
     0x1.03b1f6p-6f, 0.0f, 0x1.9f80ccp-22f, 0x1.b7d34ep-120f, 0x1.ffabfp-105f,
     0x1.953574p-74f, 0x1.19e784p-22f, 0x1.903c2p-26f, 0.0f, 0x1.a6387ep-74f, 0.0f,
     0.0f, 0x1.2cc1f6p-62f, 0x1.835b3p-123f, 0x1.fc0e7ap-98f, 0x1.bcac92p-62f,
     0x1.551f1p-30f, 0x1.4084eap-86f, 0x1.221c1p-120f, 0x1.c8014ep-13f, 0.0f, 0.0f,
     0.0f, 0x1.ee96d4p-53f, 0x1.dc8146p-93f, 0x1.b1a95ep-22f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.5cbf3ap-26f, 0x1.42e5c2p-61f, 0x1.19b7ep-39f, 0.0f, 0x1.4584a8p-37f,
     0.0f, 0x1.9c319ep-83f, 0.0f, 0.0f, 0.0f, 0x1.7c785ep-72f, 0x1.340646p-74f, 0.0f,
     0.0f, 0x1.c475cap-37f, 0x1.d98882p-61f, 0x1.25d96ap-53f, 0x1.4e091cp-32f, 0.0f,
     0x1.7b52f6p-68f, 0x1.556592p-105f, 0x1.f9b2fp-66f, 0x1.0afce6p-44f, 0.0f, 0.0f,
     0x1.4ccf72p-17f, 0x1p0f, 0x1.385792p-119f, 0.0f, 0x1.5465acp-29f,
     0x1.a46cbcp-46f, 0.0f, 0x1.59aabap-120f, 0x1.5ccaep-117f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d393bcp-102f, 0.0f, 0.0f, 0x1.aaa70cp-68f, 0x1.dec4dap-10f, 0x1.e2f3a2p-69f,
     0.0f, 0.0f, 0x1.bcaeb2p-33f, 0.0f, 0.0f, 0x1.2b952p-32f, 0x1.282de2p-113f,
     0x1.31a568p-52f, 0.0f, 0.0f, 0.0f, 0x1.efdd14p-71f, 0.0f, 0x1.260b04p-1f, 0.0f,
     0x1.7d83fap-118f, 0x1.2ca3c8p-39f, 0.0f, 0.0f, 0x1.b0ae44p-80f, 0x1.21c50ap-32f,
     0.0f, 0x1.329326p-53f, 0x1.7dae8p-122f, 0x1.33fc44p-58f, 0x1.dfcb38p-106f,
     0x1.a9f3dcp-98f, 0.0f, 0x1.38022ep-56f, 0x1.9e0d26p-96f, 0.0f, 0.0f,
     0x1.b0cf86p-17f, 0x1.ac0fa4p-94f, 0x1.412d6p-27f, 0.0f, 0x1.5e2a46p-10f, 0x1p0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.cf1a6ep-15f, 0x1.44aac2p-19f, 0x1.2583f8p-28f, 0.0f,
     0x1.d374bap-39f, 0.0f, 0x1.eb9c8cp-20f, 0x1.0453fcp-47f, 0x1.7043f2p-9f,
     0x1.2b9824p-30f, 0x1.92356ap-101f, 0.0f, 0x1.892566p-61f, 0x1.5258ccp-40f, 0.0f,
     0.0f, 0x1.f9d668p-54f, 0.0f, 0x1.d6782p-52f, 0x1.3d805p-92f, 0.0f, 0.0f, 0.0f,
     0x1.921e9cp-84f, 0.0f, 0x1.7af66ep-96f, 0x1.1ca782p-25f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.dece52p-93f, 0.0f, 0.0f, 0x1.770476p-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fbb256p-63f, 0x1.cba80cp-103f, 0x1.4d1f16p-108f, 0.0f, 0.0f, 0.0f,
     0x1.039dd4p-7f, 0x1.7b5114p-67f, 0.0f, 0.0f, 0.0f, 0x1.5f9004p-48f, 0.0f,
     0x1.47ed5cp-124f, 0.0f, 0x1.0412bcp-98f, 0x1.e0d81ap-6f, 0x1.d79b84p-125f,
     0x1.c0a98p-123f, 0x1.a1d664p-30f, 0x1.0b931p-93f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4c13f6p-95f, 0.0f, 0x1.17eb44p-35f, 0x1.0ca9acp-57f, 0.0f, 0.0f, 0.0f,
     0x1.e0421p-116f, 0x1.508d98p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ddb9dp-46f, 0.0f,
     0x1.71249ep-53f, 0.0f, 0x1.85bd1ap-44f, 0.0f, 0.0f, 0x1.301654p-35f,
     0x1.b5d1d2p-119f, 0x1.3b9166p-2f, 0x1.742522p-93f, 0x1.b45ac8p-85f, 0.0f, 0.0f,
     0.0f, 0x1.6f112ap-123f, 0.0f, 0.0f, 0x1.a54d5ep-22f, 0.0f, 0x1.2851a2p-48f,
     0x1.b428cap-29f, 0x1.15edb2p-44f, 0x1.44e198p-25f, 0.0f, 0x1.13ad1cp-34f, 0.0f,
     0x1.02b4fcp-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.54fbc2p-118f,
     0x1.c1fd6ap-20f, 0.0f, 0x1.625032p-28f, 0.0f, 0x1.9c3a14p-85f, 0x1.db9564p-7f,
     0.0f, 0x1.cb24e4p-73f, 0x1.6f89d2p-106f, 0.0f, 0x1.ec1728p-83f, 0.0f, 0.0f,
     0x1.1f88a2p-76f, 0.0f, 0x1.a1c952p-66f, 0.0f, 0.0f, 0x1.aca472p-125f, 0.0f, 0.0f,
     0.0f, 0x1.362404p-50f, 0x1.78cdf6p-9f, 0.0f, 0.0f, 0x1.8e04f6p-69f,
     0x1.0477ccp-73f, 0.0f, 0x1.7784bep-65f, 0x1.9b0a6ap-67f, 0.0f, 0.0f,
     0x1.d4b79ep-91f, 0.0f, 0.0f, 0.0f, 0x1.4ee03ap-44f, 0.0f, 0.0f, 0.0f,
     0x1.9fe5dep-49f, 0.0f, 0.0f, 0x1.fefbcap-75f, 0.0f, 0.0f, 0x1.94fd38p-51f,
     0x1.b85f78p-70f, 0x1.7f941ep-52f, 0x1.d617b6p-125f, 0x1.032322p-103f,
     0x1.67d14ap-105f, 0x1.ef993ep-34f, 0x1.cf054ap-66f, 0x1.09cdbcp-48f,
     0x1.04b9a2p-92f, 0.0f, 0x1.19304ep-69f, 0.0f, 0x1.16135cp-117f, 0x1.7e0dc8p-102f,
     0.0f, 0x1.5c44eep-67f, 0x1.454638p-99f, 0.0f, 0x1.4ef3e4p-77f, 0.0f, 0.0f,
     0x1.fca01p-118f, 0.0f, 0.0f, 0x1.8321b4p-85f, 0.0f, 0x1.35881ap-69f,
     0x1.8a1f9p-116f, 0x1.7b6a34p-25f, 0x1.4a794ap-122f, 0.0f, 0x1.e2e8p-51f,
     0x1.0e0348p-8f, 0x1.f832fcp-68f, 0.0f, 0x1.33c6bep-49f, 0x1.e1f99p-113f, 0.0f,
     0x1.a41bb8p-61f, 0.0f, 0.0f, 0x1.ad917ap-105f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b0007ep-108f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.dbd266p-112f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.eb532ep-39f, 0x1.c07a74p-33f, 0x1.3a166cp-55f, 0.0f, 0.0f, 0.0f,
     0x1.ca27dcp-36f, 0x1.7d936ap-105f, 0x1.553846p-1f, 0x1.9719c2p-53f, 0.0f,
     0x1.63a502p-57f, 0.0f, 0x1.22a88cp-51f, 0x1.435078p-94f, 0.0f, 0x1.66bb9p-22f,
     0x1p0f, 0x1.0031dep-56f, 0.0f, 0.0f, 0.0f, 0x1.1e8664p-121f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.3caa24p-54f, 0.0f, 0.0f, 0.0f, 0x1.7fa42p-117f, 0x1.7a0254p-92f,
     0x1.119e78p-11f, 0x1.4c0ep-110f, 0.0f, 0x1.80831cp-100f, 0x1.6b5de6p-41f, 0.0f,
     0x1.6e6512p-29f, 0.0f, 0x1.5cb686p-62f, 0.0f, 0x1.c4e61p-123f, 0x1.ee8cf4p-118f,
     0x1.1cf6bap-85f, 0x1.8d0bacp-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a9d0eap-13f,
     0.0f, 0x1.ba54d6p-96f, 0x1.7ce742p-111f, 0x1.7ebb26p-111f, 0.0f, 0.0f,
     0x1.837d2ap-80f, 0.0f
};
static const float external_bench_wrapper_input_table_arg1[1001]  = {
     0x1.f63df4p-84f, 0.0f, 0x1.90a4b6p-119f, 0.0f, 0x1.bcf5fap-23f, 0.0f,
     0x1.221d5cp-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dd436p-3f,
     0x1.6e6e1p-83f, 0x1.ea6fd6p-25f, 0.0f, 0.0f, 0x1.3f99e8p-110f, 0x1.910584p-8f,
     0x1.ed30cap-61f, 0x1.9abb8cp-45f, 0.0f, 0.0f, 0x1.160c42p-34f, 0.0f,
     0x1.a8bd6ap-13f, 0x1.23a99ap-116f, 0x1.ac09ecp-106f, 0x1.e3949cp-110f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.35b8d4p-71f, 0x1.ea94f4p-88f, 0x1.06a4ap-126f,
     0x1.bf445ap-126f, 0.0f, 0.0f, 0x1.ea91d4p-25f, 0x1.6e4848p-115f, 0.0f, 0.0f,
     0.0f, 0x1.862348p-82f, 0.0f, 0.0f, 0x1.85e558p-10f, 0x1.2d6c44p-32f,
     0x1.a47b48p-40f, 0x1.2ea118p-99f, 0x1.0c9c52p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.7e3254p-101f, 0x1.c6f632p-37f, 0x1.a85a54p-42f, 0.0f, 0x1.447862p-66f,
     0.0f, 0.0f, 0.0f, 0x1.4dfbbep-19f, 0.0f, 0x1.1b05e6p-35f, 0x1.8de436p-89f, 0.0f,
     0.0f, 0.0f, 0x1.627868p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4917c4p-113f, 0.0f,
     0x1.87ffc4p-6f, 0.0f, 0.0f, 0.0f, 0x1.7cc00ep-48f, 0.0f, 0.0f, 0x1.3cd71p-82f,
     0.0f, 0.0f, 0x1.a43c5ep-26f, 0x1.a339f8p-35f, 0x1.0a7106p-3f, 0.0f,
     0x1.a40a7cp-38f, 0x1.9329fep-54f, 0.0f, 0x1.65f2fap-89f, 0x1.4288bep-119f,
     0x1.526032p-44f, 0.0f, 0x1.d5ada8p-62f, 0x1.390308p-116f, 0x1.4e0868p-96f,
     0x1.61ca7p-89f, 0.0f, 0.0f, 0x1.f823d8p-34f, 0x1.ff79c4p-88f, 0.0f, 0x1.98dp-63f,
     0x1.2b9cb8p-56f, 0.0f, 0x1.f63344p-91f, 0x1.40a4ccp-33f, 0.0f, 0.0f,
     0x1.552256p-91f, 0x1.c70096p-6f, 0x1.fefe94p-110f, 0x1.8dfd42p-74f,
     0x1.5e859ep-36f, 0x1.c034bcp-66f, 0.0f, 0x1.d2a048p-61f, 0x1.0c5206p-100f, 0.0f,
     0x1.94bde4p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fc4c34p-94f, 0x1.d38adap-105f,
     0x1.e06da4p-112f, 0x1.c896bp-75f, 0.0f, 0x1.5c4a5p-75f, 0x1.e2981cp-53f,
     0x1.08fa98p-26f, 0x1.d865f6p-41f, 0.0f, 0.0f, 0.0f, 0x1.ff9baep-79f,
     0x1.cabd34p-13f, 0x1.66ee16p-66f, 0.0f, 0x1.45b08ep-118f, 0x1.c60752p-91f,
     0x1.2fe174p-119f, 0.0f, 0x1.af1508p-80f, 0.0f, 0x1.0f254p-33f, 0x1.263968p-80f,
     0x1.b6bdcep-98f, 0x1.a2121cp-78f, 0.0f, 0.0f, 0.0f, 0x1.93427p-40f,
     0x1.e89448p-107f, 0.0f, 0x1.153562p-21f, 0x1.86d8p-59f, 0.0f, 0.0f,
     0x1.76f2ep-58f, 0x1.936774p-85f, 0x1.1a2faep-101f, 0.0f, 0x1.0f01acp-77f,
     0x1.b38cecp-15f, 0x1.4f843ep-3f, 0.0f, 0.0f, 0x1.a9e576p-107f, 0.0f,
     0x1.cc4714p-120f, 0x1.25cc14p-25f, 0x1.d0afe6p-37f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.804c0cp-8f, 0x1.42233p-4f, 0.0f, 0.0f, 0x1.a4a3e8p-59f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.27eb98p-67f, 0x1.71156ep-120f, 0.0f, 0x1.f42b44p-64f, 0.0f,
     0x1.5e378ep-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.07a8a4p-86f, 0.0f, 0.0f,
     0x1.9f9122p-33f, 0.0f, 0x1.7c1de6p-82f, 0x1.db9e5ap-4f, 0.0f, 0.0f,
     0x1.137b4ep-90f, 0.0f, 0x1.71082ap-57f, 0x1.6fb7f8p-8f, 0x1.a673e2p-17f,
     0x1.860832p-114f, 0x1.26b7e4p-23f, 0.0f, 0.0f, 0.0f, 0x1.235276p-52f,
     0x1.bc8f6ep-69f, 0x1.8daa62p-121f, 0x1.ab2b5ap-32f, 0.0f, 0.0f, 0x1.d0b3f6p-23f,
     0x1.7f6d5cp-87f, 0x1.6b4b54p-80f, 0x1.987472p-70f, 0.0f, 0x1.ba557ap-32f,
     0x1.d2201ep-58f, 0x1.22226p-125f, 0x1.13f4c4p-88f, 0x1.d3ecd8p-111f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8f8f86p-118f, 0.0f,
     0x1.52303ep-95f, 0x1.b45edp-10f, 0.0f, 0.0f, 0x1.af08d8p-52f, 0.0f, 0.0f,
     0x1.f83c64p-65f, 0x1.fb98ap-11f, 0x1.28d45ap-79f, 0x1.722c34p-2f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.12221p-68f, 0.0f, 0x1.a92f28p-110f, 0x1.efff08p-86f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a7651ap-16f, 0.0f, 0x1.098662p-41f,
     0x1.312c4cp-85f, 0.0f, 0x1.6cc85ap-124f, 0x1.073cb4p-34f, 0x1.d92ac6p-1f,
     0x1.cebc02p-62f, 0x1.3b6596p-98f, 0.0f, 0x1.6bfe4p-56f, 0.0f, 0x1.abcfd6p-18f,
     0x1.94ba26p-89f, 0.0f, 0x1.0f8e38p-118f, 0x1.0e503p-2f, 0.0f, 0x1.e4aff6p-75f,
     0x1.79760ep-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.98149cp-32f, 0.0f, 0.0f,
     0x1.803616p-60f, 0x1.2fe41ap-81f, 0x1.6af2c8p-111f, 0.0f, 0x1.0ef854p-19f, 0.0f,
     0x1.45ad72p-90f, 0x1.f3cc58p-96f, 0.0f, 0x1.2ff7bap-64f, 0x1.401278p-75f,
     0x1.6a8b54p-90f, 0.0f, 0x1.d8d044p-46f, 0.0f, 0x1.a2a8fep-90f, 0x1.0b48a8p-68f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a00d6cp-74f, 0.0f, 0x1.ad27e2p-56f, 0x1.097faep-109f,
     0.0f, 0.0f, 0x1.6e8dd8p-49f, 0.0f, 0x1.03fa1p-122f, 0x1.ac9c36p-16f, 0.0f,
     0x1.cde0eep-6f, 0x1.a8af78p-24f, 0x1.31751cp-96f, 0x1.8241d2p-71f,
     0x1.a4fb74p-105f, 0x1.c6409ep-11f, 0x1.6e94bap-26f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f87fd4p-20f, 0x1.18be6cp-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e6d7cap-78f, 0.0f, 0.0f, 0x1.e839ecp-22f, 0x1.7f8b7p-100f, 0.0f,
     0x1.395dfap-98f, 0x1.6b899p-98f, 0.0f, 0x1.919fd2p-12f, 0.0f, 0x1.df16cep-17f,
     0.0f, 0.0f, 0x1.35ad46p-38f, 0.0f, 0.0f, 0x1.e9b9d2p-115f, 0x1.14072p-27f, 0.0f,
     0.0f, 0x1.e2a394p-83f, 0.0f, 0.0f, 0x1.e0d992p-57f, 0x1.b6cddp-114f,
     0x1.6a4a62p-25f, 0.0f, 0x1.1e6bb2p-25f, 0.0f, 0x1.79fa94p-107f, 0.0f,
     0x1.28ba6cp-36f, 0.0f, 0x1.acf6d4p-119f, 0.0f, 0.0f, 0x1.fab6p-101f,
     0x1.f07acp-120f, 0x1.c03cb8p-89f, 0x1.a8f54p-120f, 0x1.cee6bap-126f, 0.0f,
     0x1.373cbep-3f, 0x1.208e3cp-83f, 0x1.960dd4p-35f, 0.0f, 0.0f, 0x1.3af20cp-22f,
     0.0f, 0x1.a0f66cp-9f, 0x1.d5ff64p-40f, 0x1.d11cf8p-42f, 0x1.207204p-8f,
     0x1.2b4ae2p-54f, 0x1.46c338p-50f, 0x1.68c258p-38f, 0x1.006e48p-98f, 0.0f, 0.0f,
     0x1.fda5aep-36f, 0.0f, 0.0f, 0x1.eef576p-65f, 0x1.edaf4ep-91f, 0.0f,
     0x1.025a1ep-9f, 0.0f, 0.0f, 0x1.9e191ap-67f, 0x1.223de2p-15f, 0x1.bb7fdcp-95f,
     0x1.77197ep-48f, 0.0f, 0.0f, 0.0f, 0x1.e59a4p-104f, 0x1.0ccbb6p-21f, 0.0f, 0.0f,
     0x1.952608p-60f, 0.0f, 0.0f, 0x1.f6201ep-96f, 0x1.c3c70ep-48f, 0.0f,
     0x1.d1199ep-12f, 0x1p0f, 0x1.f2042cp-97f, 0x1.6878p-39f, 0x1.7af16ep-105f,
     0x1.095854p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.35f3d6p-16f,
     0x1.fd4e68p-94f, 0.0f, 0.0f, 0x1.61027p-74f, 0.0f, 0x1.106af4p-97f,
     0x1.7d01bep-6f, 0x1.10a8acp-121f, 0x1.22e1cep-105f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0acb68p-72f, 0.0f, 0x1.a7fd94p-6f, 0x1.8fc72ep-116f, 0.0f, 0x1.724b48p-64f,
     0.0f, 0x1.e62a84p-113f, 0x1.1e3312p-97f, 0.0f, 0x1.636d54p-119f, 0.0f, 0.0f,
     0.0f, 0x1.841228p-88f, 0x1p0f, 0x1.ab1ccep-105f, 0.0f, 0x1.dd7d6ap-68f,
     0x1.a168acp-107f, 0x1.e1f88p-35f, 0x1.47b65ep-77f, 0x1.cd5ea2p-115f,
     0x1.2c4a4ap-49f, 0x1.353cf6p-110f, 0.0f, 0.0f, 0x1.615782p-5f, 0x1.f3bd7p-52f,
     0x1.0815aap-103f, 0x1.09cfbap-61f, 0.0f, 0.0f, 0.0f, 0x1.4100a2p-20f,
     0x1.31eb6ep-57f, 0x1.f3fe4cp-52f, 0x1.051e52p-89f, 0x1.fda9d8p-48f, 0.0f,
     0x1.8d98ccp-112f, 0.0f, 0x1.66b298p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9336fp-91f,
     0x1.3fd782p-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a7885cp-9f, 0.0f, 0x1.ab35aap-41f,
     0.0f, 0x1.9258dep-68f, 0.0f, 0.0f, 0.0f, 0x1.ec5166p-96f, 0x1.a8f926p-90f, 0.0f,
     0x1.fd05cp-116f, 0x1.868ep-20f, 0.0f, 0.0f, 0.0f, 0x1.268d24p-81f, 0.0f,
     0x1.2bf85p-89f, 0.0f, 0x1.8b8538p-2f, 0.0f, 0x1.8032acp-125f, 0.0f, 0x1p0f,
     0x1.daf0ap-30f, 0x1.c269ccp-57f, 0x1.a8283ep-58f, 0x1.29509cp-41f, 0.0f,
     0x1.a35948p-25f, 0x1.0103bp-73f, 0x1.2be522p-29f, 0x1.9011b4p-9f,
     0x1.c94048p-109f, 0x1.d5b1c4p-15f, 0x1.e4e8a8p-37f, 0.0f, 0x1.16f492p-38f, 0.0f,
     0.0f, 0x1.8f3f9ap-5f, 0.0f, 0x1.003a1cp-15f, 0x1.d34054p-91f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ab8c2ep-45f, 0x1.c165eap-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4ba6d8p-121f,
     0x1.01916p-58f, 0.0f, 0x1.01c94p-27f, 0.0f, 0x1.8053eap-6f, 0x1.b7f6eep-14f,
     0x1.a3bfccp-94f, 0x1.7eeb3ap-92f, 0x1.159a16p-23f, 0x1.f36e14p-34f,
     0x1.c665ccp-44f, 0.0f, 0x1.e1048ep-67f, 0.0f, 0x1.cc73bep-13f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.11ce12p-7f, 0x1.4b850ap-70f, 0.0f, 0x1.249c94p-117f, 0x1.d524d8p-47f,
     0x1.4c8e56p-61f, 0x1.62621ep-25f, 0.0f, 0.0f, 0.0f, 0x1.fc4e22p-12f, 0.0f,
     0x1.16cff2p-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bdfb4cp-62f,
     0x1.5aafaep-77f, 0x1.db772ap-12f, 0x1.d0f8fp-112f, 0.0f, 0x1.27b05ap-106f, 0.0f,
     0x1.9d6fa2p-38f, 0.0f, 0.0f, 0x1.cf9d9cp-26f, 0x1.ecf0a4p-54f, 0x1.ac8cc8p-108f,
     0.0f, 0.0f, 0x1.769892p-67f, 0x1.c93696p-21f, 0x1.fa33bcp-122f, 0x1.996f52p-46f,
     0x1.db7a14p-26f, 0x1.149942p-115f, 0x1.b95ddcp-111f, 0.0f, 0.0f, 0x1.c56cc6p-57f,
     0x1.212b86p-61f, 0.0f, 0x1.ed0c7cp-71f, 0x1.fe032cp-31f, 0x1.f25776p-56f,
     0x1.b2ea26p-103f, 0x1.448a86p-77f, 0x1.2ba98cp-32f, 0.0f, 0.0f, 0.0f,
     0x1.eeed6ap-11f, 0x1.a1210ap-18f, 0x1.2aeaep-58f, 0x1.76bc02p-79f, 0.0f,
     0x1.94fa16p-114f, 0x1.c707d8p-119f, 0.0f, 0x1.49b388p-18f, 0x1.f85162p-24f, 0.0f,
     0x1.c0e448p-84f, 0.0f, 0x1.0cb6cep-110f, 0x1.dd2cap-25f, 0x1.32bc98p-50f, 0.0f,
     0x1.750f92p-71f, 0.0f, 0.0f, 0.0f, 0x1.f2c0e6p-106f, 0x1.c004e4p-110f,
     0x1.51d36p-41f, 0.0f, 0x1.d417d2p-100f, 0x1.032fcep-112f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.4c6b3cp-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.22de32p-114f,
     0x1.3281dap-47f, 0.0f, 0x1.c0daecp-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.df451ep-80f,
     0x1.01b298p-100f, 0x1.124f64p-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5ffbf6p-11f, 0.0f,
     0x1.198e96p-80f, 0.0f, 0x1.531d62p-71f, 0.0f, 0x1.78c942p-46f, 0.0f, 0.0f, 0.0f,
     0x1.9b8328p-35f, 0.0f, 0x1.fdba6ap-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d9113ap-5f,
     0x1.c5ab2ep-125f, 0.0f, 0.0f, 0.0f, 0x1.a795f6p-10f, 0.0f, 0x1.0797p-102f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.01ca34p-36f, 0x1.272b42p-44f, 0.0f,
     0x1.16e97p-67f, 0.0f, 0x1.e3ad1p-22f, 0.0f, 0x1.fa9538p-61f, 0x1.44adccp-76f,
     0.0f, 0x1.1c17e6p-80f, 0.0f, 0x1.6f38cap-25f, 0x1.503f94p-117f, 0.0f,
     0x1.07a666p-87f, 0.0f, 0.0f, 0.0f, 0x1.50c494p-38f, 0.0f, 0.0f, 0x1.03812ap-97f,
     0x1.13c0bep-12f, 0x1.c60b4cp-121f, 0.0f, 0x1.76071cp-119f, 0.0f, 0x1.6e752ap-85f,
     0.0f, 0x1.c48728p-57f, 0x1.9738cep-93f, 0x1.1f37dap-57f, 0x1.18e156p-64f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.4424bep-93f, 0.0f, 0.0f, 0.0f, 0x1.e5bad6p-93f,
     0x1.608b1cp-19f, 0.0f, 0.0f, 0x1.a897aep-126f, 0.0f, 0.0f, 0.0f, 0x1.307efp-23f,
     0.0f, 0x1.fd4864p-12f, 0.0f, 0.0f, 0x1.a8b1a4p-99f, 0x1p0f, 0x1.a16834p-10f,
     0x1.5ecbecp-76f, 0.0f, 0x1.451f0ep-85f, 0x1.0e3c94p-71f, 0.0f, 0.0f,
     0x1.02d992p-75f, 0.0f, 0x1.d8a146p-70f, 0.0f, 0.0f, 0x1.e96bdap-8f, 0.0f, 0.0f,
     0.0f, 0x1.6aa042p-8f, 0x1.89297p-103f, 0x1.20e92p-32f, 0.0f, 0.0f, 0.0f,
     0x1.72221ap-45f, 0.0f, 0x1.cd9bacp-126f, 0x1.396f14p-78f, 0x1.0fc6bep-117f,
     0x1.16e112p-67f, 0.0f, 0x1.1cef9ep-77f, 0x1.e6dd5ep-105f, 0x1.7adcd8p-59f,
     0x1.9ff744p-54f, 0x1.e13fb4p-111f, 0x1.d18d8p-91f, 0.0f, 0x1.ec8d4cp-122f, 0.0f,
     0x1.b96becp-59f, 0x1.3845b4p-6f, 0x1.ed97f8p-51f, 0x1.5ed722p-82f, 0.0f,
     0x1.2a6d5p-19f, 0.0f, 0.0f, 0.0f, 0x1.1427dp-34f, 0x1.1254cp-10f, 0.0f,
     0x1.b1cd3ap-27f, 0.0f, 0x1.5454d4p-36f, 0x1.0bd01ap-57f, 0x1.62aeeap-61f, 0.0f,
     0.0f, 0x1.db8e08p-91f, 0.0f, 0.0f, 0x1.4b10a8p-24f, 0x1.db85aep-107f, 0.0f,
     0x1.b4a61ap-7f, 0.0f, 0.0f, 0x1.ef35ecp-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cc2e36p-123f, 0.0f, 0.0f, 0x1.93d0aep-93f, 0x1.7e2cb4p-98f, 0x1.03ab12p-71f,
     0.0f, 0x1.1ef5dap-11f, 0.0f, 0x1.ce7956p-49f, 0x1.43a98p-87f, 0x1.b89be2p-67f,
     0x1.2cd1ep-34f, 0x1.b164d2p-23f, 0x1.de46eep-59f, 0x1.175fep-12f, 0.0f,
     0x1.c063c8p-85f, 0x1.3d9ddep-92f, 0x1.bfe2b8p-23f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a62a3ep-3f, 0x1.72993ep-90f, 0x1.55ec48p-122f, 0.0f, 0x1.dd4004p-26f,
     0x1.5a6b14p-8f, 0.0f, 0x1.66e6cep-67f, 0.0f, 0.0f, 0.0f, 0x1.89dee6p-94f,
     0x1.24796ap-29f, 0x1.f39b0cp-103f, 0.0f, 0x1.35d028p-65f, 0x1.154172p-74f,
     0x1.23d91cp-15f, 0.0f, 0x1.cc1e9p-100f, 0x1.4d9e24p-108f, 0.0f, 0x1.e950b8p-40f,
     0x1.105c6ep-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d7f91ap-72f,
     0x1.d44568p-75f, 0x1.78a3dap-61f, 0.0f, 0x1.44e5ecp-106f, 0x1.bf841ap-57f, 0.0f,
     0.0f, 0x1.f2c8a6p-5f, 0x1.c00aap-90f, 0x1.412eb6p-55f, 0x1.ccba62p-11f,
     0x1.cce6p-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.91edfap-15f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9c8d36p-92f, 0.0f, 0x1.a51dp-112f, 0.0f, 0x1.303a9ap-100f, 0x1.760694p-94f,
     0.0f, 0.0f, 0x1.396b88p-65f, 0.0f, 0x1.1ce98ap-46f, 0x1.271684p-62f,
     0x1.11c858p-56f, 0.0f, 0x1.0b3616p-104f, 0.0f, 0x1.0f3e72p-26f, 0x1.8b1948p-126f,
     0x1.aa26e4p-28f, 0.0f, 0.0f, 0.0f, 0x1.0e7748p-16f, 0x1.99d98cp-42f,
     0x1.87364ep-116f, 0x1.545d8ap-43f, 0.0f, 0x1.017732p-5f, 0x1.e82b1p-121f, 0.0f,
     0x1.7ef696p-10f, 0.0f, 0x1.b82f78p-6f, 0.0f, 0x1.f98ad8p-20f, 0.0f,
     0x1.a45cdep-51f, 0x1.b74d5p-53f, 0x1.fd433ep-53f, 0x1.c4e98ap-86f, 0.0f, 0.0f,
     0x1.5fb8c8p-74f, 0.0f, 0x1.da7058p-10f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    float global_bench_acc;
    int64_t timer;
    int64_t tmp;
    int32_t j;
    int64_t tmp1;
    int64_t tmp2;
    double id_tmp;
    double cpe_measure;
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = 0.0f;
    tmp = __cos_counter_num(0);
    timer = tmp;
    j = INT32_C(0);

    for (;(j < INT32_C(10000));){
        float bench_acc;
        int32_t i;
        float tmp0;
        int32_t tmp1;

        i = INT32_C(0);
        bench_acc = 0.0f;

        for (;(i < INT32_C(1001));){
            float tmp0;
            float tmp1;
            float tmp2;
            float tmp3;
            int32_t tmp4;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = external_bench_wrapper_input_table_arg1[i];
            tmp2 = Sleef_finz_hypotf1_u05purecfma(tmp0, tmp1);
            external_bench_wrapper_output_table[i] = tmp2;
            tmp3 = bench_acc + tmp2;
            bench_acc = tmp3;
            tmp4 = i + INT32_C(1);
            i = tmp4;
        }
        tmp0 = global_bench_acc + bench_acc;
        global_bench_acc = tmp0;
        tmp1 = j + INT32_C(1);
        j = tmp1;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_finz_hypotf1_u05purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_hypotf1_u05purecfma bench acc %a\n", global_bench_acc);
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
