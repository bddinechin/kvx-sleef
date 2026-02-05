/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_logf4_u35avx2128.c --function Sleef_finz_logf4_u35avx2128 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 4 --function-input-vector-size 4 --bench \
 *     --no-embedded-bin --target x86_avx2128
 * 
**/
#include <stdint.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float4_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float4_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0.0f, 0.0f, 0x1.e60de4p-8f, 0.0f, 0.0f, 0.0f, 0x1.fa93e2p-42f, 0.0f,
     0x1.8575e8p-92f, 0x1.12582ap-123f, 0x1.50720cp-71f, 0x1.475516p-35f,
     0x1.05e9e4p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2a74c2p-72f, 0x1.368c4cp-28f,
     0x1.6bd78p-111f, 0x1.e4a736p-15f, 0x1.f77418p-112f, 0x1.ce70ecp-67f, 0.0f,
     0x1.5986e2p-94f, 0.0f, 0x1.5ff59cp-84f, 0.0f, 0x1.0bb426p-49f, 0.0f,
     0x1.554c5cp-81f, 0.0f, 0.0f, 0x1.cb21cap-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.5dde74p-48f, 0x1.ca213ap-108f, 0.0f, 0x1.4c3e5cp-59f, 0x1.882b84p-105f,
     0.0f, 0.0f, 0.0f, 0x1.982c16p-92f, 0.0f, 0x1.65a2d2p-123f, 0.0f, 0.0f, 0.0f,
     0x1.188adp-103f, 0x1.077282p-83f, 0.0f, 0.0f, 0x1.e224c2p-48f, 0x1.75f1f4p-65f,
     0x1.41037p-102f, 0x1.7d6286p-37f, 0x1.1fa5d2p-33f, 0.0f, 0x1.bd06a4p-114f, 0.0f,
     0.0f, 0x1.da2d8ep-84f, 0x1.6ce5b6p-55f, 0.0f, 0.0f, 0x1.e9dd26p-44f, 0.0f,
     0x1.db8ec6p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.130764p-58f, 0.0f, 0.0f,
     0x1.6befdap-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.79c91ep-79f, 0x1.53b5dap-18f, 0.0f,
     0.0f, 0x1.05eb56p-37f, 0x1.612c44p-103f, 0x1.55db1ap-32f, 0x1.ddbd38p-107f,
     0x1.84a842p-110f, 0.0f, 0x1.64c0aep-41f, 0x1.077d54p-16f, 0x1.186c78p-36f, 0.0f,
     0.0f, 0x1.9c743cp-38f, 0.0f, 0x1.360f8p-19f, 0.0f, 0.0f, 0x1.e4f0f8p-55f,
     0x1.f5e7acp-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1a9a76p-100f, 0x1.dbe0b4p-112f,
     0x1.68c75cp-33f, 0x1.77873p-12f, 0.0f, 0x1.11e1acp-75f, 0x1.ae262p-24f, 0.0f,
     0x1.cbd6aap-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.91ec34p-5f, 0.0f, 0.0f,
     0x1.f0a492p-105f, 0x1.940ac4p-113f, 0x1.b42494p-107f, 0x1.31832ap-103f,
     0x1.05cc64p-61f, 0x1.299352p-25f, 0x1.d8cfeap-33f, 0.0f, 0.0f, 0x1.beaf9p-82f,
     0.0f, 0x1.dcca56p-89f, 0x1.15172ap-109f, 0.0f, 0x1.87e67p-71f, 0x1.824d5ap-84f,
     0.0f, 0.0f, 0x1.95028ep-75f, 0x1.d31f22p-12f, 0x1.5043c4p-109f, 0.0f,
     0x1.1fab2p-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e21472p-68f, 0.0f,
     0x1.b232b2p-43f, 0x1.13258p-14f, 0.0f, 0x1.1a59a8p-125f, 0x1.1e413ap-115f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.140c1p-98f, 0.0f, 0x1.fff66cp-56f, 0.0f, 0x1.0e4cp-106f,
     0x1.fd4c56p-112f, 0.0f, 0x1.529f48p-18f, 0x1.58e3fp-71f, 0x1.4cb69p-10f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.18cefap-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.be7cacp-10f, 0.0f,
     0x1.e89a16p-12f, 0.0f, 0x1.bba026p-107f, 0.0f, 0x1.4253b8p-41f, 0x1.c390dp-80f,
     0x1.525456p-12f, 0.0f, 0x1.da9878p-105f, 0x1.d89b88p-85f, 0.0f, 0x1.7086b8p-39f,
     0x1.843e2ep-61f, 0x1.085054p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d3541cp-12f, 0.0f,
     0x1.f5616ep-103f, 0.0f, 0.0f, 0.0f, 0x1.999a7p-101f, 0x1.2193ap-3f, 0.0f, 0.0f,
     0x1.8ea39p-8f, 0.0f, 0x1.0057d6p-117f, 0.0f, 0x1.3d80ep-109f, 0x1.da145ep-2f,
     0x1.14264cp-108f, 0.0f, 0x1.7435c8p-77f, 0.0f, 0x1.5545bp-43f, 0x1.af24b2p-80f,
     0.0f, 0.0f, 0x1.d90b78p-22f, 0x1.026042p-32f, 0x1.0c1a66p-72f, 0.0f,
     0x1.1c1298p-110f, 0x1.bc2b86p-102f, 0.0f, 0x1.54f988p-80f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.2f4d6ep-83f, 0x1.345652p-124f, 0x1.fb525cp-25f, 0x1.b12192p-103f,
     0x1.f2c244p-92f, 0x1.0c58dp-115f, 0.0f, 0x1.151a8ap-96f, 0x1.22882p-109f, 0.0f,
     0.0f, 0x1.e7d9c6p-3f, 0x1.78fd3ap-125f, 0x1.9da018p-95f, 0.0f, 0.0f, 0.0f,
     0x1.3be34cp-12f, 0x1.8a3918p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f4f076p-1f, 0x1.102862p-123f, 0x1.ae19dp-117f, 0x1.a3c076p-8f, 0.0f,
     0x1.6bbbc4p-104f, 0x1.86c874p-50f, 0.0f, 0x1.2060c2p-115f, 0.0f, 0x1.f45a52p-24f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.62fcdcp-40f, 0x1.4f826ap-5f, 0.0f,
     0x1.4faca8p-92f, 0.0f, 0x1.c32ee4p-62f, 0x1.3bda6cp-84f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.172512p-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.065b72p-123f, 0.0f,
     0x1.b810eap-94f, 0x1.9f80f4p-38f, 0.0f, 0.0f, 0x1.0ecca6p-39f, 0x1.c1aba8p-91f,
     0x1.1462aap-43f, 0x1.fd84fp-79f, 0x1.58decap-106f, 0x1.ff579cp-107f, 0.0f, 0.0f,
     0x1.669594p-47f, 0x1.519406p-65f, 0x1.65d722p-15f, 0x1.0f761p-114f,
     0x1.0d8c8p-125f, 0x1.e686e6p-45f, 0.0f, 0x1.30e96ep-6f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.72a0bep-23f, 0x1.52416p-118f, 0x1.30a3dcp-61f, 0.0f, 0x1.802cecp-23f,
     0x1.37327p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8c10ccp-72f,
     0x1.f22cccp-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.20d64p-118f, 0.0f, 0.0f,
     0x1.9829c4p-98f, 0x1.b81618p-13f, 0x1.ab719p-22f, 0.0f, 0x1.612a7ep-116f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3ac67ep-81f, 0.0f, 0.0f, 0.0f,
     0x1.d65a4cp-74f, 0x1.5d54c6p-121f, 0.0f, 0x1.366a4ep-24f, 0.0f, 0.0f, 0.0f,
     0x1.a7f736p-21f, 0.0f, 0.0f, 0x1.cce764p-48f, 0x1.34356ap-96f, 0.0f, 0.0f,
     0x1.c85748p-9f, 0x1.a01044p-83f, 0x1.44c3f8p-17f, 0x1.d443d4p-126f,
     0x1.17b01ap-21f, 0.0f, 0x1.2757e8p-86f, 0.0f, 0.0f, 0x1.b07a9ep-18f, 0.0f,
     0x1.26967cp-75f, 0.0f, 0.0f, 0.0f, 0x1.c9f458p-33f, 0.0f, 0x1p0f,
     0x1.ca8ae8p-80f, 0.0f, 0.0f, 0x1.4f91d6p-88f, 0x1.654a24p-104f, 0.0f,
     0x1.911756p-99f, 0x1.b54076p-45f, 0.0f, 0x1.0f50cp-100f, 0x1.837ba6p-81f, 0.0f,
     0.0f, 0x1.c5aee6p-77f, 0x1.0df162p-50f, 0.0f, 0.0f, 0x1.865944p-96f,
     0x1.7b50e8p-23f, 0x1.187afap-14f, 0x1.1eb2c4p-38f, 0.0f, 0.0f, 0x1.c54bep-39f,
     0.0f, 0x1.78262cp-68f, 0x1.20ba2cp-119f, 0.0f, 0.0f, 0x1.fb35bcp-105f, 0.0f,
     0.0f, 0x1.f58a86p-96f, 0.0f, 0x1.272674p-94f, 0x1.f045cap-102f, 0.0f, 0.0f, 0.0f,
     0x1.f5ea5p-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e0c3c6p-65f, 0x1.3ce85ap-117f,
     0x1.08d8dap-125f, 0.0f, 0x1.192d62p-107f, 0x1.ff0596p-92f, 0.0f, 0x1.4e034cp-36f,
     0x1.2e05f2p-68f, 0x1.dab35cp-2f, 0.0f, 0.0f, 0.0f, 0x1.bf59cap-102f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.64c76ep-126f, 0.0f, 0.0f, 0.0f, 0x1.04b092p-97f,
     0.0f, 0.0f, 0x1.67c27ep-14f, 0.0f, 0.0f, 0x1.4df258p-67f, 0.0f, 0x1.691612p-89f,
     0x1.193abap-88f, 0.0f, 0x1.e361fp-15f, 0x1.5a39f8p-15f, 0x1.ffe536p-126f, 0.0f,
     0x1.9cbd7ep-47f, 0x1.ee5c5ep-44f, 0.0f, 0x1.695a02p-3f, 0.0f, 0x1.8958dp-86f,
     0.0f, 0.0f, 0x1.279922p-32f, 0x1.056e3ap-46f, 0.0f, 0x1.41adaap-50f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.adf4dap-5f, 0x1.a87456p-121f, 0x1.d640dap-55f,
     0x1.351ef2p-98f, 0.0f, 0x1.e92886p-50f, 0.0f, 0.0f, 0x1.d82a16p-113f,
     0x1.b6c86ap-124f, 0x1.80432p-91f, 0x1.773e98p-51f, 0.0f, 0.0f, 0x1.bc3578p-75f,
     0x1.5f77b2p-55f, 0x1.2fe79cp-49f, 0.0f, 0.0f, 0x1.71e798p-10f, 0x1.6928ecp-32f,
     0.0f, 0x1.ef66bp-124f, 0.0f, 0.0f, 0.0f, 0x1.1d8ae8p-101f, 0.0f, 0x1.7d432ap-98f,
     0.0f, 0.0f, 0x1.55aefep-43f, 0x1.fbd528p-56f, 0x1.478cacp-123f, 0x1.93755cp-5f,
     0x1.bed22ep-47f, 0x1.fc944p-56f, 0.0f, 0.0f, 0x1.00192cp-63f, 0x1.dda72cp-27f,
     0.0f, 0x1.7a831ep-8f, 0.0f, 0.0f, 0x1.cb952cp-83f, 0x1.f748b8p-120f, 0.0f,
     0x1.3dc0d4p-86f, 0.0f, 0x1.0d5156p-78f, 0x1.b5fa3cp-115f, 0x1.1d291cp-112f, 0.0f,
     0x1.e21f26p-92f, 0x1.0860aap-113f, 0x1.a71b46p-103f, 0.0f, 0.0f, 0.0f,
     0x1.1e6c6ap-73f, 0x1.d24214p-63f, 0x1.7f8736p-29f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4f28dap-55f, 0x1.17c094p-1f, 0x1.2b65d6p-16f, 0x1.851516p-36f, 0.0f,
     0x1.7bb466p-110f, 0x1.3930ap-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1deabp-76f,
     0x1.8289ccp-13f, 0x1.05f58cp-2f, 0x1.b1271p-102f, 0.0f, 0x1.1e9e04p-33f, 0.0f,
     0x1.79a60ep-50f, 0x1.46a268p-77f, 0x1.62717p-23f, 0x1.524394p-113f,
     0x1.596888p-67f, 0x1.61722cp-41f, 0x1.d6dbb6p-4f, 0.0f, 0.0f, 0x1.9b0936p-40f,
     0x1.c1df9ep-21f, 0x1.b1948p-72f, 0.0f, 0.0f, 0.0f, 0x1.0cac8ap-114f, 0.0f, 0.0f,
     0.0f, 0x1.28d6f6p-110f, 0x1.773066p-65f, 0.0f, 0x1.c6ee66p-49f, 0x1.24058ep-81f,
     0x1.f93556p-51f, 0x1.d24bc8p-16f, 0.0f, 0.0f, 0x1.850c92p-84f, 0x1.01df32p-40f,
     0x1.67ca44p-103f, 0x1.08d1e4p-85f, 0x1.3dae64p-61f, 0x1.9a575p-98f, 0.0f,
     0x1.f07988p-35f, 0x1.4fa6cep-7f, 0.0f, 0.0f, 0x1.1c459cp-19f, 0x1.d7112ap-108f,
     0.0f, 0x1.b782fcp-125f, 0.0f, 0x1.25b4aep-33f, 0.0f, 0.0f, 0x1.1b8f18p-18f, 0.0f,
     0.0f, 0x1.5f1056p-83f, 0.0f, 0.0f, 0.0f, 0x1.cd790ep-54f, 0x1.f658dap-36f,
     0x1.7f7bd8p-70f, 0.0f, 0x1.baf25ep-82f, 0.0f, 0.0f, 0x1.3dfa6p-18f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.95ae1ap-56f, 0x1.6bc3acp-106f, 0.0f, 0.0f, 0.0f,
     0x1.f85106p-90f, 0.0f, 0.0f, 0x1.4413fcp-14f, 0x1.5022aap-122f, 0x1.fda842p-10f,
     0.0f, 0.0f, 0x1.6e07bap-38f, 0x1.222b3p-95f, 0x1.ea52e6p-111f, 0x1.088db6p-11f,
     0x1.38c82p-21f, 0.0f, 0x1.675fa4p-87f, 0x1.b3b5cep-116f, 0x1.a59c9cp-113f,
     0x1.192a86p-26f, 0x1.987decp-63f, 0.0f, 0.0f, 0x1.f453bcp-95f, 0x1.cb5492p-83f,
     0x1.edc024p-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8fee36p-36f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1p0f, 0x1.6cfe2cp-102f, 0x1.8138fep-105f, 0x1.0cf3fap-29f, 0x1.6eb7c8p-117f,
     0x1.6deddp-1f, 0x1.a521acp-125f, 0.0f, 0x1.a281c6p-86f, 0x1.bc98b6p-109f,
     0x1.2bc2dep-82f, 0.0f, 0.0f, 0.0f, 0x1.4bf25ap-49f, 0x1.af6d7ep-58f, 0.0f, 0.0f,
     0x1.22576ep-110f, 0x1.0832f8p-1f, 0.0f, 0x1.2958c6p-113f, 0x1.0d3b26p-39f,
     0x1.aa0892p-126f, 0.0f, 0x1.0cd1d4p-114f, 0.0f, 0x1.b7a81cp-99f, 0.0f,
     0x1.069c04p-95f, 0.0f, 0x1.722516p-30f, 0x1.a5125ap-99f, 0.0f, 0x1.6ad93cp-122f,
     0x1.25ac8p-92f, 0.0f, 0x1.812f66p-46f, 0.0f, 0x1.ccb1f6p-74f, 0.0f, 0.0f, 0.0f,
     0x1.aa46fcp-26f, 0x1.a0949p-102f, 0x1.19637ap-34f, 0.0f, 0x1.ffbe5cp-13f,
     0x1.66a86ap-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4896b4p-94f, 0.0f, 0.0f,
     0x1.5aa104p-115f, 0.0f, 0x1.6defc8p-20f, 0x1.8172e6p-125f, 0.0f, 0.0f,
     0x1.6dabcep-35f, 0x1.00aefap-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2098dep-124f,
     0x1.ca7374p-53f, 0.0f, 0x1.59269ep-120f, 0.0f, 0.0f, 0x1.aa909p-50f,
     0x1.2fd426p-113f, 0x1.a101eep-108f, 0.0f, 0.0f, 0.0f, 0x1.82fe8ep-109f,
     0x1.549e96p-13f, 0x1.5ad7a8p-116f, 0.0f, 0x1.8c839cp-106f, 0x1.837f28p-22f, 0.0f,
     0x1.c6868ap-116f, 0.0f, 0.0f, 0x1.4b3e46p-39f, 0x1.ca8254p-17f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.9964a4p-105f, 0.0f, 0x1.08d4e8p-19f, 0.0f, 0x1.bbf254p-104f, 0.0f,
     0.0f, 0x1.d2778cp-26f, 0x1.0ee816p-10f, 0x1.062446p-91f, 0x1.10cf86p-54f,
     0x1.023eacp-44f, 0x1.d25df4p-16f, 0.0f, 0x1.c80322p-61f, 0x1.f4c3b6p-121f, 0.0f,
     0x1.f78e3ep-88f, 0x1.375156p-34f, 0.0f, 0x1.57783p-75f, 0.0f, 0x1.4cc676p-19f,
     0x1.668496p-62f, 0.0f, 0.0f, 0x1.6e82aep-95f, 0x1.3bb23p-19f, 0x1.ddf69ep-122f,
     0.0f, 0.0f, 0.0f, 0x1.727d98p-85f, 0x1.1e0acep-59f, 0.0f, 0x1.f79aap-49f, 0.0f,
     0x1.51a444p-71f, 0x1.5bd162p-118f, 0.0f, 0.0f, 0x1.be9dp-115f, 0x1.dfdd7ap-100f,
     0.0f, 0.0f, 0x1.5fdaap-117f, 0x1.b9032cp-40f, 0x1.29cffep-106f, 0x1.09e19ap-115f,
     0x1.71e3c4p-34f, 0x1.bd8dd2p-107f, 0.0f, 0.0f, 0x1.68255ep-94f, 0x1.3347aep-126f,
     0x1.e53772p-87f, 0.0f, 0.0f, 0.0f, 0x1.4d7688p-67f, 0.0f, 0x1.5ee1d6p-4f,
     0x1.2a89e8p-120f, 0.0f, 0x1.8518cp-60f, 0.0f, 0x1.d52ee8p-55f, 0.0f,
     0x1.bc500cp-88f, 0x1.9e9932p-108f, 0.0f, 0.0f, 0.0f, 0x1.1ead2ap-75f, 0.0f, 0.0f,
     0x1.3eb94ep-71f, 0x1.1357ecp-27f, 0x1.4eea44p-126f, 0x1.45b2b8p-3f,
     0x1.490044p-67f, 0x1.9484b2p-103f, 0.0f, 0.0f, 0x1.493506p-102f, 0.0f,
     0x1.a198b2p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.668fa6p-68f, 0.0f, 0x1.ef9f9p-70f,
     0.0f, 0x1.e66c84p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d71c34p-5f, 0.0f,
     0x1.546706p-57f, 0x1.16188ap-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.484bdap-91f, 0x1.2b8fbap-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fe269p-88f,
     0x1.b12058p-89f, 0x1.064bcp-80f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f,
     0x1.a890ep-27f, 0.0f, 0x1.9a38e2p-70f, 0x1.265a4p-36f, 0.0f, 0.0f,
     0x1.7c2114p-101f, 0.0f, 0x1.dc8998p-104f, 0.0f, 0.0f, 0x1.abef9cp-46f, 0.0f,
     0x1.e2b05cp-107f, 0.0f, 0x1.9efbd4p-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d3481ep-92f, 0.0f, 0.0f, 0x1.aa35ep-25f, 0.0f, 0x1.110e3cp-45f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.316d0cp-113f,
     0x1.ddf768p-39f, 0.0f, 0x1.3b1938p-36f, 0x1.458ca4p-72f, 0.0f, 0.0f,
     0x1.a3389ap-57f, 0x1.0b0bc6p-63f, 0x1.c371cap-13f, 0.0f, 0x1.98e9d2p-125f,
     0x1.c2a144p-59f, 0.0f, 0.0f, 0.0f, 0x1.0d17dap-10f, 0x1.3fd3c8p-40f,
     0x1.128ff8p-61f, 0x1.c1826p-42f, 0.0f, 0x1.7d2c1ep-122f, 0x1.3e241ap-63f, 0.0f,
     0x1.6c48aap-66f, 0.0f, 0.0f, 0x1.49c05cp-1f, 0x1.d97168p-100f, 0x1.e03604p-72f,
     0.0f, 0x1.5240ep-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.047c08p-96f,
     0x1.b0919cp-37f, 0.0f, 0.0f, 0x1.907f48p-7f, 0.0f, 0x1.bba3dap-44f,
     0x1.6e4c32p-100f, 0x1.d8e16p-72f, 0x1.c3094ep-50f, 0x1.efda94p-22f
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
    
    global_bench_acc = external_bench_wrapper_cst;
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
            tmp1 = Sleef_finz_logf4_u35avx2128(tmp0);
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
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_finz_logf4_u35avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_logf4_u35avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
