/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_truncf1_purecfma.c --function Sleef_truncf1_purecfma \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 --bench \
 *     --no-embedded-bin --target x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <xmmintrin.h>
#include <stdio.h>
#include <inttypes.h>


volatile float external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0.0f, 0.0f, 0.0f, 0x1.8f805ep-5f, 0.0f, 0x1.a93cb8p-39f, 0.0f, 0x1.b2831ep-16f,
     0.0f, 0x1.be7e94p-87f, 0.0f, 0.0f, 0x1.7dc8bep-72f, 0.0f, 0x1.15effep-21f, 0.0f,
     0.0f, 0x1.cc417ap-109f, 0.0f, 0x1.e85a4p-113f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f3e254p-16f, 0.0f, 0x1.3e4f3p-87f, 0x1.88c406p-22f, 0x1.10bafcp-98f,
     0x1.b7baf4p-80f, 0x1.ecd0b6p-32f, 0x1.8879b4p-36f, 0x1.23d042p-105f, 0.0f, 0.0f,
     0x1.a08b86p-121f, 0x1.ac935p-40f, 0x1.26f748p-125f, 0x1.f3b2fp-4f, 0.0f, 0.0f,
     0x1.e137c6p-74f, 0x1.e8b908p-104f, 0x1.0f822p-35f, 0.0f, 0.0f, 0x1.84d094p-28f,
     0.0f, 0x1.49942ep-40f, 0x1.a6c81cp-101f, 0.0f, 0.0f, 0x1.4ddbaep-50f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.8d211cp-123f, 0x1.e77adap-75f, 0x1.2c76ecp-17f,
     0x1.a5dd8cp-84f, 0.0f, 0.0f, 0x1.8537bap-68f, 0x1.730f0cp-7f, 0.0f, 0.0f,
     0x1.bd9aaep-70f, 0.0f, 0.0f, 0x1.220e84p-122f, 0x1.4de2b6p-125f, 0x1.1e9b74p-43f,
     0.0f, 0x1.f9778p-97f, 0x1.4084a8p-60f, 0.0f, 0x1.83f8b4p-15f, 0.0f, 0.0f,
     0x1.24c74p-15f, 0x1.159d2ap-24f, 0.0f, 0x1.022768p-62f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.87458ap-113f, 0.0f, 0.0f, 0.0f, 0x1.3e7382p-54f, 0.0f, 0.0f,
     0x1.b1fffcp-105f, 0.0f, 0x1.2072ecp-11f, 0.0f, 0.0f, 0x1.0bdcf2p-20f,
     0x1.1c77bap-122f, 0x1.86b12ap-87f, 0x1.918dc6p-115f, 0.0f, 0x1.095988p-84f,
     0x1.acf5e2p-71f, 0.0f, 0.0f, 0x1.cadd88p-122f, 0.0f, 0x1.47f49ep-41f,
     0x1.811b04p-123f, 0x1.e765bep-80f, 0x1.b70414p-66f, 0x1.ff67bcp-84f, 0.0f, 0.0f,
     0x1.a855cap-57f, 0.0f, 0x1.626cf4p-14f, 0.0f, 0x1.dcdccap-86f, 0x1.0a3ba2p-24f,
     0.0f, 0x1.59b812p-25f, 0.0f, 0x1.9f863cp-103f, 0x1.9c4fc4p-85f, 0x1p0f,
     0x1.0589d4p-66f, 0x1.5676b2p-38f, 0.0f, 0x1.9b9f12p-34f, 0x1.379432p-111f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a3f6e2p-120f, 0x1.657638p-81f, 0.0f, 0.0f, 0x1.df3c56p-41f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ad7686p-5f, 0.0f, 0.0f, 0x1.6485ep-104f,
     0x1.fa68c6p-105f, 0x1.f38d24p-55f, 0.0f, 0x1.ab9fap-33f, 0.0f, 0x1.3ba512p-93f,
     0x1.4ff9a4p-61f, 0.0f, 0x1.0b97cp-35f, 0x1.f04e6ap-87f, 0.0f, 0x1.0f70acp-10f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.289c78p-4f, 0x1.0878c6p-59f, 0.0f, 0.0f,
     0x1.f9495ap-81f, 0.0f, 0x1.fb6dccp-4f, 0x1.e38068p-66f, 0.0f, 0x1.b713e6p-73f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.34a7a2p-36f, 0.0f, 0.0f, 0.0f, 0x1.af6e54p-81f,
     0x1.6b078cp-87f, 0x1.6438b6p-69f, 0x1.208a84p-20f, 0x1.6db7e8p-12f, 0.0f,
     0x1.e67876p-88f, 0x1.9dec56p-14f, 0.0f, 0x1.008be6p-1f, 0.0f, 0.0f,
     0x1.ad1ac8p-9f, 0.0f, 0x1.c90b32p-101f, 0x1.634ba6p-10f, 0.0f, 0x1.67941cp-92f,
     0.0f, 0x1.6f9864p-116f, 0x1.3761cap-81f, 0x1.441c2cp-39f, 0x1.e3e53cp-36f, 0.0f,
     0x1.19aa82p-113f, 0x1.f81376p-40f, 0x1.dc535cp-2f, 0x1.392144p-88f, 0.0f,
     0x1.3e6266p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eb4cccp-114f, 0x1.5646ap-11f,
     0x1p0f, 0x1.073a5cp-87f, 0x1.fe779ap-73f, 0.0f, 0.0f, 0x1.c60f46p-125f, 0.0f,
     0x1.68249p-83f, 0x1.642bccp-26f, 0.0f, 0.0f, 0x1.649228p-15f, 0.0f, 0.0f,
     0x1.57a8cp-7f, 0.0f, 0x1.6ee24ep-53f, 0.0f, 0x1.b84cc4p-122f, 0x1.fb2f7p-43f,
     0x1.5c933ep-65f, 0.0f, 0.0f, 0x1.d64504p-5f, 0.0f, 0.0f, 0x1.91eb9ap-30f,
     0x1.06b254p-30f, 0.0f, 0.0f, 0x1.c34d32p-89f, 0.0f, 0x1.12cf16p-43f, 0.0f, 0.0f,
     0x1.3b83p-11f, 0x1.c7092cp-16f, 0.0f, 0.0f, 0.0f, 0x1.fcb414p-116f, 0.0f, 0.0f,
     0.0f, 0x1.e1fea8p-51f, 0x1.c5ba1cp-104f, 0x1.b4a50ep-102f, 0.0f, 0.0f,
     0x1.4de67p-83f, 0.0f, 0x1.2a22c2p-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4cfc06p-71f, 0.0f, 0x1.a8e9a6p-6f, 0.0f, 0x1.4359fap-114f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f4549cp-56f, 0x1.7afa8cp-25f, 0.0f, 0x1.a2c9bp-16f, 0.0f,
     0x1.e2b33cp-52f, 0.0f, 0x1.124338p-10f, 0x1.918308p-37f, 0x1.66d2e6p-40f, 0.0f,
     0x1.f27edep-78f, 0.0f, 0.0f, 0.0f, 0x1.1813b6p-93f, 0.0f, 0x1.8ccca4p-18f,
     0x1.0ab81p-47f, 0.0f, 0.0f, 0.0f, 0x1.50c9e2p-5f, 0x1.98684p-87f, 0.0f,
     0x1.25a53p-50f, 0x1.347aa6p-49f, 0x1.6985b2p-12f, 0.0f, 0x1.ae0612p-114f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.23e8bep-106f, 0x1.5c5cap-106f, 0x1.e0a3fep-42f,
     0x1.bae1eap-42f, 0.0f, 0x1.501fdep-116f, 0x1.f458fap-13f, 0x1.dd6374p-102f,
     0x1.eb5262p-126f, 0.0f, 0x1p0f, 0x1.dfb05cp-88f, 0.0f, 0.0f, 0.0f,
     0x1.2608c8p-40f, 0x1.e2a6fap-122f, 0x1.dd7ea8p-92f, 0.0f, 0.0f, 0.0f,
     0x1.d494f2p-56f, 0x1.7a7218p-80f, 0.0f, 0.0f, 0.0f, 0x1.1724b8p-24f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.04ae64p-83f, 0x1.ae532ep-47f, 0x1.30f252p-32f,
     0x1.06df4ep-93f, 0.0f, 0.0f, 0x1.a5ccd8p-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5c305cp-76f, 0.0f, 0.0f, 0x1.dca89p-95f, 0.0f, 0.0f, 0.0f, 0x1.760a5ap-94f,
     0.0f, 0.0f, 0x1.6c3c3p-126f, 0.0f, 0.0f, 0x1.9e2c3cp-46f, 0x1.70df3p-14f, 0.0f,
     0.0f, 0x1.4fd804p-115f, 0.0f, 0x1.cddd6cp-35f, 0x1.94e21p-115f, 0x1.a1528ep-71f,
     0.0f, 0x1.06a5aap-123f, 0.0f, 0x1.7c64cep-67f, 0x1.d7e104p-46f, 0.0f, 0.0f,
     0x1.516abep-77f, 0.0f, 0x1.ac0ddep-46f, 0.0f, 0.0f, 0.0f, 0x1.3776cap-118f,
     0x1.b7447p-31f, 0.0f, 0x1.896106p-113f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.db9a68p-44f, 0.0f, 0.0f, 0x1.30c594p-85f, 0x1.f484cp-70f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.441c9ep-34f, 0.0f, 0.0f, 0x1.66d6ap-77f,
     0x1.68994cp-80f, 0x1.6cdcd4p-80f, 0.0f, 0x1.9dfb68p-35f, 0x1.16391ep-39f,
     0x1.749f72p-90f, 0x1.b0e92cp-22f, 0x1.6e9c2ap-8f, 0x1.d6a1ap-91f,
     0x1.74925cp-105f, 0x1.8650ecp-18f, 0x1.b6e626p-12f, 0x1.fbf93ep-69f,
     0x1.4d50bep-30f, 0.0f, 0.0f, 0x1.f5c21ep-125f, 0.0f, 0x1.13effap-100f,
     0x1.4b7ff6p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3b47ecp-46f, 0x1.c2c41ep-113f,
     0x1.11a088p-119f, 0x1.760178p-113f, 0x1.e8b8b2p-24f, 0.0f, 0x1.f01294p-7f, 0.0f,
     0x1.d8f7c2p-20f, 0.0f, 0x1.090b1cp-6f, 0x1.d84a24p-118f, 0.0f, 0x1.7e901ap-86f,
     0.0f, 0.0f, 0.0f, 0x1.63726cp-115f, 0.0f, 0x1.a0c53ap-119f, 0x1.0a2cf2p-52f,
     0x1.800b02p-38f, 0.0f, 0.0f, 0.0f, 0x1.e27bc6p-119f, 0x1.5a1bf2p-111f,
     0x1.4ecb6ep-95f, 0.0f, 0.0f, 0.0f, 0x1.b953bcp-77f, 0x1.e0c9b4p-82f,
     0x1.73e7c2p-108f, 0x1.32a19p-19f, 0.0f, 0x1.cd1da8p-91f, 0x1.2be23p-124f,
     0x1.4ccb4ap-69f, 0x1.28c60ep-16f, 0.0f, 0x1.92525ep-38f, 0x1.62faaep-48f,
     0x1.e8256ep-31f, 0x1.ccbb54p-48f, 0x1.cb8c2cp-122f, 0x1.0eb084p-117f, 0.0f,
     0x1.1ebdb6p-91f, 0x1.982c48p-36f, 0x1.b2c06p-126f, 0.0f, 0.0f, 0x1.71d5aap-90f,
     0x1.eb21a8p-82f, 0.0f, 0.0f, 0.0f, 0x1.3458e8p-20f, 0.0f, 0.0f, 0.0f,
     0x1.13bdfap-63f, 0.0f, 0.0f, 0x1.3beff4p-98f, 0.0f, 0x1.3db19p-31f,
     0x1.2c8c32p-98f, 0x1.0bf66ep-111f, 0x1.315e5p-24f, 0.0f, 0x1.fee31cp-30f,
     0x1.ec21cp-112f, 0x1.2d9cbp-33f, 0.0f, 0.0f, 0x1.16d4p-5f, 0x1.a2c754p-81f, 0.0f,
     0.0f, 0x1.8fccdap-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e006f4p-19f, 0.0f, 0.0f,
     0x1.76577ep-106f, 0x1.9402ap-108f, 0.0f, 0x1.f9b91ap-33f, 0x1.efd4e8p-4f, 0.0f,
     0.0f, 0x1.3ccf22p-4f, 0x1.3b5ddp-26f, 0.0f, 0.0f, 0.0f, 0x1.29cdfap-114f,
     0x1.8e90c6p-30f, 0x1.75401cp-55f, 0x1.64decep-54f, 0.0f, 0x1.d46d78p-36f, 0.0f,
     0.0f, 0.0f, 0x1.7f8278p-76f, 0x1.4aa214p-55f, 0x1.517bc8p-125f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c04a6cp-24f, 0.0f, 0x1.2d73b8p-120f, 0.0f, 0x1p0f, 0x1.0d095cp-39f,
     0.0f, 0.0f, 0x1.55c3aap-76f, 0.0f, 0x1.e15c7cp-97f, 0x1.c009a6p-63f,
     0x1.d549b6p-77f, 0x1.d1e4dap-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fdd9bcp-110f, 0.0f, 0x1.ba0d98p-14f, 0.0f, 0x1.6b7c4p-76f, 0x1.0b01b2p-49f,
     0.0f, 0x1.d249e8p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.46b6c8p-113f, 0x1.420728p-12f,
     0x1.49d86cp-79f, 0.0f, 0.0f, 0x1.e4d212p-49f, 0x1.30b50cp-114f, 0.0f, 0.0f, 0.0f,
     0x1.c401a2p-62f, 0.0f, 0.0f, 0.0f, 0x1.4232fp-100f, 0.0f, 0x1.94fb7cp-8f,
     0x1.a19998p-92f, 0.0f, 0.0f, 0.0f, 0x1.330a62p-57f, 0.0f, 0.0f, 0.0f,
     0x1.7e1dbap-48f, 0x1.aecb22p-21f, 0x1.a9a84ep-38f, 0x1.0e0fbcp-12f,
     0x1.1321a2p-14f, 0.0f, 0.0f, 0x1.8e3636p-21f, 0x1.e9c4cep-113f, 0x1.329db4p-49f,
     0x1.cb2e4ap-8f, 0x1.0978c4p-116f, 0x1.f5b09ap-89f, 0.0f, 0.0f, 0.0f,
     0x1.de15a6p-109f, 0.0f, 0x1.77dc16p-13f, 0x1.f23058p-1f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4f918p-105f, 0x1.a902ecp-2f, 0x1.409dd4p-28f, 0x1.701f84p-27f,
     0x1.a6c20ep-97f, 0x1.1358fap-106f, 0x1.dd1822p-60f, 0x1.9e4876p-92f,
     0x1.c9c5c8p-97f, 0x1.470fb6p-47f, 0.0f, 0x1.5f19acp-31f, 0x1.814c08p-17f, 0.0f,
     0.0f, 0x1.83b48cp-118f, 0.0f, 0x1.6d8132p-36f, 0.0f, 0.0f, 0x1.3b6196p-114f,
     0.0f, 0x1.7a5b2cp-11f, 0.0f, 0x1.ab610ap-30f, 0x1.c946d4p-94f, 0.0f,
     0x1.212b76p-52f, 0x1.63838ep-32f, 0x1.08d18cp-104f, 0x1.ee6736p-73f, 0.0f, 0.0f,
     0.0f, 0x1.fd41a2p-43f, 0.0f, 0.0f, 0.0f, 0x1.4c0ae8p-32f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.0eebc6p-52f, 0.0f, 0x1.33358ap-79f, 0x1.603772p-106f,
     0x1.0338b2p-102f, 0x1.829b7ap-118f, 0.0f, 0x1.947686p-7f, 0x1.783de4p-56f,
     0x1.4b493ep-106f, 0.0f, 0x1.59b0dap-97f, 0x1.4dbd4ap-36f, 0x1.b6b5cap-46f,
     0x1.8e940cp-23f, 0.0f, 0x1.904e22p-27f, 0x1.4b6eacp-93f, 0x1.696c0ep-14f,
     0x1.313434p-94f, 0x1.f24f68p-79f, 0x1.5a47a6p-107f, 0x1.372ddap-39f, 0.0f, 0.0f,
     0x1.48bb0cp-47f, 0.0f, 0x1.70ff04p-74f, 0x1.5dfca2p-38f, 0x1.0ddce2p-89f,
     0x1.63a4f6p-124f, 0x1.40f112p-27f, 0.0f, 0x1.63b69ap-76f, 0.0f, 0x1.02563ap-91f,
     0.0f, 0x1.dc52bap-126f, 0.0f, 0.0f, 0.0f, 0x1.ab6e8ap-59f, 0.0f, 0.0f,
     0x1.e17ffcp-100f, 0.0f, 0x1.be8fccp-43f, 0.0f, 0.0f, 0x1.84cc26p-72f,
     0x1.c17902p-27f, 0.0f, 0.0f, 0x1.2953d8p-88f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c9d6a8p-70f, 0.0f, 0x1.a77cf4p-20f, 0.0f, 0x1p0f, 0.0f, 0x1.93c8aap-91f,
     0x1.f794dap-84f, 0x1.64da4ap-56f, 0x1.405efep-103f, 0.0f, 0x1.44c2aep-122f,
     0x1.02d14cp-103f, 0.0f, 0.0f, 0.0f, 0x1.2697fp-110f, 0x1.4e2536p-105f, 0.0f,
     0x1.1fcd4p-99f, 0.0f, 0x1.797bb4p-118f, 0.0f, 0x1.2ce25ep-78f, 0.0f, 0.0f,
     0x1.9d680ep-37f, 0x1.139918p-121f, 0.0f, 0x1.ce9a28p-55f, 0.0f, 0.0f,
     0x1.6a0f18p-80f, 0x1.94015cp-6f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.49f994p-83f, 0.0f, 0.0f, 0x1.e137fcp-10f, 0.0f, 0x1.edf658p-25f,
     0x1.f123e8p-4f, 0x1.7794cp-18f, 0.0f, 0x1.b20024p-50f, 0x1.1f1978p-12f,
     0x1.0eaaaep-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8b5c06p-82f,
     0x1.36682p-110f, 0x1.70ed82p-76f, 0x1.6eb0dep-33f, 0.0f, 0x1.32f8b8p-80f, 0.0f,
     0.0f, 0x1.b9b46ep-109f, 0x1.f7cabcp-60f, 0x1.8ad896p-21f, 0x1.55e596p-24f,
     0x1.b5d022p-85f, 0x1.60ca9cp-9f, 0.0f, 0x1.1a1d8p-102f, 0x1.f3bf78p-2f,
     0x1.a4e3b8p-107f, 0.0f, 0.0f, 0x1.4ea29ep-119f, 0.0f, 0x1.a4c2bcp-56f,
     0x1.5a9f18p-24f, 0.0f, 0x1.69158ep-119f, 0.0f, 0x1.6361dp-71f, 0.0f, 0.0f,
     0x1.ee9d3ep-30f, 0x1.7b3628p-90f, 0x1.525b8ap-107f, 0x1.5c5e56p-37f, 0.0f,
     0x1.11b79ap-104f, 0.0f, 0.0f, 0x1.8c5e72p-93f, 0.0f, 0.0f, 0.0f, 0x1.7de532p-23f,
     0x1.58d964p-80f, 0.0f, 0x1.608348p-102f, 0.0f, 0x1.ad1e1ep-50f, 0.0f, 0.0f, 0.0f,
     0x1.c033e6p-73f, 0x1.b1ace8p-77f, 0x1.81e59ap-10f, 0x1.302dap-7f,
     0x1.a1c83ap-47f, 0.0f, 0.0f, 0x1.77659ap-51f, 0x1.298b3p-31f, 0x1.d6b426p-2f,
     0.0f, 0.0f, 0.0f, 0x1.6df10cp-32f, 0x1.69269ep-10f, 0.0f, 0.0f, 0x1.4458b4p-58f,
     0x1.be0498p-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4b401ap-50f, 0x1.5affc8p-4f,
     0x1.66dd7cp-66f, 0x1.a51f48p-27f, 0x1.663d48p-66f, 0x1.0f34bcp-72f,
     0x1.b4f2dcp-14f, 0x1.1749acp-110f, 0x1.b732ap-26f, 0.0f, 0.0f, 0x1.a0d10cp-113f,
     0.0f, 0x1.71e93cp-100f, 0.0f, 0x1.cac98ep-59f, 0.0f, 0x1.ab536p-13f,
     0x1.c5f738p-11f, 0.0f, 0.0f, 0x1.51db24p-43f, 0x1.383208p-72f, 0.0f,
     0x1.9ea7f8p-29f, 0.0f, 0.0f, 0.0f, 0x1.d4667ep-67f, 0x1.063c04p-120f, 0.0f,
     0x1.e56072p-2f, 0.0f, 0x1.d54b9cp-108f, 0x1.31707p-86f, 0x1.593046p-74f,
     0x1.d85c04p-76f, 0.0f, 0x1.496d8ep-56f, 0.0f, 0.0f, 0x1.fb69fp-84f,
     0x1.dcb3c8p-125f, 0.0f, 0.0f, 0x1.4037fp-13f, 0x1.486e8cp-118f, 0x1.ce72f2p-75f,
     0.0f, 0x1.6a154p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7d4058p-41f, 0x1.e28e08p-84f,
     0.0f, 0x1.3a2f1ap-48f, 0x1.b78a96p-96f, 0.0f, 0.0f, 0.0f, 0x1.12d0c6p-62f, 0.0f,
     0x1.089972p-81f, 0.0f, 0.0f, 0.0f, 0x1.b19916p-61f, 0.0f, 0x1.3e6eep-88f,
     0x1.9ffe0ep-29f, 0.0f, 0x1.92fe2p-23f, 0.0f, 0x1.3ef932p-92f, 0x1.145654p-31f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.16c172p-54f, 0.0f, 0x1.833012p-40f,
     0x1.7475ap-24f, 0x1.01deep-34f, 0.0f, 0x1.b248eep-54f, 0x1.cc41aep-31f, 0.0f,
     0.0f, 0.0f, 0x1.ff6114p-11f, 0.0f, 0x1.90baap-76f, 0x1.64356p-108f, 0.0f,
     0x1.0e00aep-61f, 0.0f, 0x1.0c1672p-16f, 0.0f, 0.0f, 0x1.32b2b4p-91f, 0.0f,
     0x1.7fcf5p-3f, 0x1.e70e98p-11f, 0x1.627aeep-20f, 0x1.79f43cp-98f
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
    
    global_bench_acc = 0.0f;
    {
        uint32_t cycles_hi = 0, cycles_lo = 0;
        asm volatile (
            "cpuid\n\t"
            "rdtsc\n\t"
            "mov %%edx, %0\n\t"
            "mov %%eax, %1\n\t"
            : "=r" (cycles_hi), "=r" (cycles_lo)
            :: "%rax", "%rbx", "%rcx", "%rdx");
        tmp = ((uint64_t) cycles_hi << 32) | cycles_lo;
    };
    timer = tmp;
    j = INT32_C(0);

    for (;(j < INT32_C(10000));){
        float bench_acc;
        int32_t i;
        __m128 carg;
        __m128 carg1;
        __m128 carg2;
        float tmp0;
        int32_t tmp1;

        i = INT32_C(0);
        bench_acc = 0.0f;

        for (;(i < INT32_C(1001));){
            float tmp0;
            float tmp1;
            __m128 carg;
            __m128 carg1;
            __m128 carg2;
            float tmp2;
            int32_t tmp3;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_truncf1_purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            carg = _mm_set_ss(bench_acc);
            carg1 = _mm_set_ss(tmp1);
            carg2 = _mm_add_ss(carg, carg1);
            tmp2 = _mm_cvtss_f32(carg2);
            bench_acc = tmp2;
            tmp3 = i + INT32_C(1);
            i = tmp3;
        }
        carg = _mm_set_ss(global_bench_acc);
        carg1 = _mm_set_ss(bench_acc);
        carg2 = _mm_add_ss(carg, carg1);
        tmp0 = _mm_cvtss_f32(carg2);
        global_bench_acc = tmp0;
        tmp1 = j + INT32_C(1);
        j = tmp1;
    }
    {
        uint32_t cycles_hi = 0, cycles_lo = 0;
        asm volatile (
            "cpuid\n\t"
            "rdtsc\n\t"
            "mov %%edx, %0\n\t"
            "mov %%eax, %1\n\t"
            : "=r" (cycles_hi), "=r" (cycles_lo)
            :: "%rax", "%rbx", "%rcx", "%rdx");
        tmp1 = ((uint64_t) cycles_hi << 32) | cycles_lo;
    };
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_truncf1_purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_truncf1_purecfma bench acc %a\n", global_bench_acc);
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
