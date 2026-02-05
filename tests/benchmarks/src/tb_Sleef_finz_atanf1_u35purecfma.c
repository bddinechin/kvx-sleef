/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_atanf1_u35purecfma.c --function \
 *     Sleef_finz_atanf1_u35purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --bench --no-embedded-bin --target kv3
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
     0.0f, 0.0f, 0.0f, 0x1.4a4378p-2f, 0x1.f13d14p-43f, 0.0f, 0.0f, 0.0f,
     0x1.2cc3d4p-43f, 0x1.e1670cp-2f, 0.0f, 0.0f, 0x1.5076a2p-3f, 0x1.a499b4p-3f,
     0x1.7d7b28p-60f, 0.0f, 0.0f, 0.0f, 0x1.ba74c6p-86f, 0x1p0f, 0x1.b23696p-98f,
     0x1.ea3414p-74f, 0x1.9a1bc2p-124f, 0.0f, 0.0f, 0x1.869d5ap-13f, 0x1.631e56p-38f,
     0.0f, 0x1.667d06p-102f, 0.0f, 0.0f, 0.0f, 0x1.e601b6p-61f, 0x1.dd66ap-41f, 0.0f,
     0x1.4841ep-37f, 0.0f, 0.0f, 0.0f, 0x1.09c694p-66f, 0x1.d364b6p-12f, 0.0f,
     0x1.c7326ap-12f, 0x1.438c2p-102f, 0x1.8e6a7p-93f, 0x1.7b4254p-9f, 0.0f,
     0x1.158d44p-32f, 0.0f, 0x1.0f9fc8p-83f, 0.0f, 0.0f, 0x1.4d14f4p-105f,
     0x1.4897ap-75f, 0.0f, 0.0f, 0x1.f7bf7cp-57f, 0x1.f2aec4p-59f, 0.0f,
     0x1.fb98e2p-77f, 0.0f, 0x1.66ec1ap-45f, 0.0f, 0x1.556ccp-36f, 0.0f, 0.0f,
     0x1.cb001p-108f, 0x1.6813eep-75f, 0.0f, 0x1.22961p-114f, 0.0f, 0.0f,
     0x1.dc3f6p-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b9f3ap-86f, 0.0f, 0.0f,
     0x1.3faeb4p-62f, 0.0f, 0.0f, 0x1.5d290ap-122f, 0.0f, 0.0f, 0.0f, 0x1.aad61p-60f,
     0.0f, 0x1.924b56p-91f, 0.0f, 0x1.7f8002p-22f, 0.0f, 0x1.ffa782p-41f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.839268p-108f, 0.0f, 0.0f, 0.0f, 0x1.546768p-61f,
     0.0f, 0.0f, 0.0f, 0x1.a84b72p-69f, 0.0f, 0x1.5aea6ep-33f, 0x1.e88f1cp-79f,
     0x1.4ae6ccp-95f, 0x1.7fc36ep-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a22b3p-33f,
     0x1.19bfa8p-64f, 0.0f, 0.0f, 0x1.a4bep-50f, 0.0f, 0x1.bb72c2p-46f,
     0x1.5810fp-15f, 0.0f, 0x1.cf276cp-103f, 0x1.262e2p-49f, 0.0f, 0.0f, 0.0f,
     0x1.1ee31cp-83f, 0x1.41d9c4p-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.17c452p-119f, 0.0f, 0.0f, 0x1.213a88p-48f, 0.0f, 0.0f, 0x1.e5b26p-65f, 0.0f,
     0x1.16e2dap-92f, 0x1.c9f3a6p-66f, 0x1.ea0e8ap-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.124f28p-66f, 0.0f, 0x1.82e05ap-84f, 0.0f, 0x1.1cfe72p-111f, 0x1.5c529ep-121f,
     0x1.a234p-70f, 0.0f, 0x1.b7772p-105f, 0.0f, 0x1.2397fep-31f, 0.0f,
     0x1.3e073ap-31f, 0.0f, 0.0f, 0x1.0f44cp-12f, 0x1.9a35aep-126f, 0x1.a02e1p-57f,
     0.0f, 0x1.390f9p-72f, 0x1.74a502p-104f, 0.0f, 0.0f, 0x1.78fd8cp-88f,
     0x1.f2faacp-106f, 0.0f, 0x1.43e60ep-10f, 0x1.cccbfep-45f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.141ca2p-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.17516p-123f, 0.0f, 0.0f,
     0x1.887e5cp-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.20f2b4p-123f, 0x1.71ae0ep-3f, 0.0f, 0x1.07c3bep-90f, 0x1.3a5bb8p-77f, 0.0f,
     0x1.af1e92p-63f, 0x1.1eae58p-2f, 0x1.28018p-27f, 0.0f, 0.0f, 0x1.b205ccp-9f,
     0x1.8a7226p-77f, 0.0f, 0x1.09fd8ap-56f, 0x1.f0629p-79f, 0x1.cc4552p-87f,
     0x1.770b98p-68f, 0x1.3127c2p-104f, 0x1.af570ap-86f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.75166p-70f, 0.0f, 0x1.035d6ap-56f, 0x1.040382p-115f, 0x1.2bd91p-61f, 0.0f,
     0.0f, 0x1.0be30ep-88f, 0x1.a5dc98p-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.981342p-120f, 0.0f, 0.0f, 0x1p0f, 0x1.042c16p-54f,
     0x1.10760ep-111f, 0.0f, 0x1.cd382ap-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ae927ap-6f, 0x1.3ea83ap-81f, 0x1.7a512ep-42f, 0x1.519762p-114f,
     0x1.2a7642p-99f, 0x1.ff3192p-75f, 0.0f, 0x1.f67b54p-75f, 0x1.262c2p-71f,
     0x1.ba9c38p-73f, 0.0f, 0.0f, 0.0f, 0x1.84225p-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.5d2318p-113f, 0.0f, 0.0f, 0x1.2fbc7cp-84f, 0x1.7cc362p-105f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e939dp-75f, 0x1.930e8p-70f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5e6b3ep-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2d66dep-59f, 0x1.92b712p-119f,
     0x1.319a46p-57f, 0.0f, 0.0f, 0x1.d4efd6p-2f, 0x1.1f1312p-96f, 0x1.0f313ap-102f,
     0x1.f79c72p-121f, 0.0f, 0.0f, 0x1.4b6f76p-71f, 0.0f, 0x1.4df3a4p-40f, 0.0f, 0.0f,
     0.0f, 0x1.b9c598p-77f, 0.0f, 0x1.5fe0bcp-111f, 0.0f, 0x1.bd867ep-23f,
     0x1.d7cb7ep-69f, 0x1.074e92p-77f, 0x1.5364fep-106f, 0x1.8d60eap-82f, 0.0f, 0.0f,
     0x1.00829ep-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f7b71cp-115f, 0x1.28977ap-10f,
     0.0f, 0x1.3118ecp-34f, 0x1.414bb6p-41f, 0x1.a37442p-78f, 0x1.2289f4p-25f,
     0x1.01075p-24f, 0x1.30766ep-117f, 0x1.320422p-9f, 0.0f, 0x1.87739cp-117f,
     0x1.09bde6p-67f, 0x1.e430fcp-117f, 0x1.08d71ep-110f, 0x1.605cdap-61f,
     0x1.bbe0cep-9f, 0.0f, 0x1.49d4dap-10f, 0.0f, 0x1.2cd75cp-78f, 0x1.3b7efep-69f,
     0.0f, 0x1.17fccap-44f, 0x1.b8afcp-119f, 0.0f, 0x1.62a8d4p-88f, 0.0f, 0.0f, 0.0f,
     0x1p0f, 0.0f, 0x1.24292cp-100f, 0.0f, 0.0f, 0x1.ad6d6p-69f, 0.0f,
     0x1.15054cp-40f, 0x1.c12a34p-70f, 0.0f, 0x1.56f40ap-76f, 0.0f, 0x1.a98604p-56f,
     0.0f, 0x1.aeda1cp-67f, 0.0f, 0.0f, 0x1.c42c66p-12f, 0x1.3e7812p-97f,
     0x1.0d1712p-126f, 0.0f, 0.0f, 0.0f, 0x1.62dc04p-4f, 0.0f, 0.0f, 0x1.70f09p-21f,
     0.0f, 0x1.5c24bp-58f, 0x1.903938p-37f, 0x1.3dc5bp-72f, 0.0f, 0x1.3b0e74p-20f,
     0.0f, 0x1.78ab98p-70f, 0x1.0799ecp-88f, 0x1.105c7p-83f, 0.0f, 0.0f, 0.0f,
     0x1.a52ba4p-95f, 0.0f, 0.0f, 0x1.f0cb8cp-48f, 0x1.9227dap-120f, 0.0f, 0.0f,
     0x1.a89fcp-55f, 0.0f, 0x1.5462p-59f, 0x1.1a5096p-4f, 0.0f, 0x1.090e42p-24f,
     0x1.004e98p-66f, 0.0f, 0x1.6810eep-9f, 0x1.3a8b4p-110f, 0x1.ac0b4ap-78f, 0.0f,
     0.0f, 0x1p0f, 0x1.4c8e1ap-78f, 0.0f, 0x1.bcb9a4p-78f, 0.0f, 0.0f,
     0x1.16545ep-104f, 0x1.d2fcd6p-95f, 0.0f, 0x1.c573fep-36f, 0.0f, 0.0f, 0.0f,
     0x1.7b87c4p-107f, 0x1.a4381cp-76f, 0x1.c2dca6p-74f, 0.0f, 0x1.f5016ap-78f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.564b3ap-43f, 0x1.55aa92p-34f, 0.0f, 0x1.d13cc6p-125f,
     0x1.0558cp-29f, 0x1.7b212ep-60f, 0x1.f9c588p-25f, 0x1.45bbf4p-111f,
     0x1.52684p-121f, 0.0f, 0x1.acef4cp-23f, 0x1.836982p-43f, 0x1.4ae0b4p-35f, 0.0f,
     0x1.c40dc8p-15f, 0x1.b9decp-18f, 0x1.27f7ap-94f, 0.0f, 0x1.324824p-43f,
     0x1.50097p-66f, 0x1.723088p-96f, 0.0f, 0x1.a5fb44p-104f, 0x1.5b07dap-72f,
     0x1.88df7p-67f, 0.0f, 0.0f, 0.0f, 0x1.509dcep-126f, 0x1.3a572ep-7f, 0.0f,
     0x1.b2e7f8p-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.109a74p-119f, 0.0f, 0.0f, 0.0f,
     0x1.477edep-71f, 0x1.5f20d2p-51f, 0x1.e81c78p-68f, 0x1.ec2eb2p-101f,
     0x1.6ec6cap-119f, 0.0f, 0x1.fcd092p-41f, 0.0f, 0x1.55c3a4p-126f, 0x1.49b44ep-30f,
     0x1.f43f2cp-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d23b8ap-33f, 0.0f,
     0x1.05fd5ap-11f, 0x1.a60fdep-36f, 0.0f, 0x1.8d34dap-90f, 0.0f, 0.0f,
     0x1.7011fep-12f, 0x1.4af41p-3f, 0.0f, 0.0f, 0x1.296a4p-43f, 0x1.96e2bcp-97f,
     0.0f, 0x1.28263ep-44f, 0x1.98a638p-108f, 0x1.6af7c2p-99f, 0x1.72ea3cp-82f,
     0x1.48a37p-76f, 0x1.b0f5d4p-96f, 0x1.aefbp-19f, 0x1.7afc38p-119f,
     0x1.bb59d8p-78f, 0.0f, 0.0f, 0x1.bc0e1p-114f, 0.0f, 0x1.2d674cp-58f,
     0x1.5752fcp-61f, 0.0f, 0x1.46c32ap-96f, 0.0f, 0.0f, 0x1.020068p-21f, 0.0f,
     0x1.09909ap-105f, 0.0f, 0.0f, 0x1.ed960ep-34f, 0.0f, 0.0f, 0x1.56feep-31f,
     0x1.7b38b8p-107f, 0.0f, 0.0f, 0x1.e74e76p-56f, 0.0f, 0.0f, 0.0f, 0x1.42e2cap-69f,
     0x1.aa31d8p-43f, 0.0f, 0x1.a4ccep-111f, 0.0f, 0.0f, 0x1.a33fdcp-8f, 0.0f, 0.0f,
     0x1.1902bap-8f, 0.0f, 0x1.95b1acp-57f, 0.0f, 0x1.360ea6p-30f, 0x1.8e643cp-33f,
     0x1.c7238ap-117f, 0.0f, 0.0f, 0x1.847bdap-53f, 0x1.be99f2p-101f, 0x1.16dfb2p-73f,
     0x1.f2859ap-117f, 0x1.0e0998p-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.afa28p-25f, 0.0f,
     0x1.b333e6p-23f, 0.0f, 0.0f, 0x1.5afbf2p-41f, 0x1.01fcb8p-53f, 0.0f,
     0x1.d43812p-99f, 0.0f, 0x1.714862p-45f, 0.0f, 0x1.9ffd4ap-71f, 0x1.af1808p-28f,
     0x1.12aef6p-70f, 0x1.4b92aep-68f, 0x1.22235ap-83f, 0.0f, 0x1.1ea4cp-119f,
     0x1.30335p-19f, 0.0f, 0x1.04ac6p-123f, 0.0f, 0.0f, 0x1.bec536p-68f,
     0x1.f0e08ep-79f, 0x1.bd46fp-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d594p-39f, 0.0f,
     0x1.470fbp-110f, 0.0f, 0.0f, 0x1.267604p-3f, 0x1.96183p-89f, 0x1.525546p-80f,
     0.0f, 0x1.35f65ap-97f, 0.0f, 0.0f, 0.0f, 0x1.4ba2e2p-6f, 0.0f, 0x1.6556bcp-92f,
     0.0f, 0.0f, 0x1.b54af8p-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5046b4p-86f, 0.0f,
     0x1.39f026p-59f, 0x1.a6fe84p-19f, 0.0f, 0.0f, 0x1.42a3b8p-38f, 0.0f,
     0x1.f07abcp-22f, 0x1.f18accp-51f, 0.0f, 0x1.9b08ap-21f, 0.0f, 0x1.a37e0ap-126f,
     0x1.271fbp-121f, 0.0f, 0.0f, 0.0f, 0x1.2a3faap-119f, 0x1.fb2c36p-22f, 0.0f,
     0x1.6426dap-51f, 0x1.cf104cp-124f, 0.0f, 0x1.b76d0ep-35f, 0x1.0b31fcp-114f, 0.0f,
     0x1.dce216p-92f, 0.0f, 0x1.6946a6p-5f, 0x1.6d5d08p-1f, 0.0f, 0.0f,
     0x1.92e46ep-60f, 0x1.a66de6p-95f, 0.0f, 0x1.74b67ep-15f, 0.0f, 0x1.33d7dep-37f,
     0.0f, 0.0f, 0x1.e1f708p-97f, 0x1.18c944p-67f, 0.0f, 0x1.64775ap-61f, 0.0f,
     0x1.c9d262p-116f, 0.0f, 0.0f, 0x1.372c08p-100f, 0x1.bf3498p-121f, 0.0f, 0.0f,
     0x1.34f4dcp-108f, 0.0f, 0x1.2b0fb8p-119f, 0x1.0dff82p-21f, 0x1.270876p-37f, 0.0f,
     0x1.5c0e64p-86f, 0x1.b6ebap-54f, 0x1.b2f798p-98f, 0x1.7ba2a4p-110f,
     0x1.ef8488p-30f, 0.0f, 0x1.53dbfap-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.03a54cp-67f,
     0x1.64b85p-7f, 0x1.39f5cep-26f, 0x1.41926cp-26f, 0x1.5f3da8p-114f,
     0x1.84a622p-46f, 0.0f, 0x1.a26d7ap-66f, 0x1.ce1f02p-66f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fc32f4p-26f, 0.0f, 0x1.35fcap-125f, 0.0f, 0x1.88335cp-60f, 0x1.edbee4p-113f,
     0x1.349094p-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.db4ee2p-75f, 0x1.679142p-47f, 0x1.e914c2p-15f, 0.0f, 0.0f, 0.0f,
     0x1.63edfp-62f, 0.0f, 0x1.8e03c8p-47f, 0.0f, 0x1.8f0a02p-2f, 0x1.efaa8cp-21f,
     0x1.2c3836p-13f, 0x1.828f7ap-125f, 0x1.0c0a8cp-14f, 0x1.93cdd2p-112f, 0.0f, 0.0f,
     0x1.386a92p-8f, 0x1.1c7d44p-78f, 0x1.47c358p-106f, 0.0f, 0x1.bd36bp-74f,
     0x1.dfe278p-60f, 0.0f, 0.0f, 0.0f, 0x1.b6faep-116f, 0x1.ac7f54p-82f,
     0x1.419b7ap-120f, 0x1.2256e4p-106f, 0.0f, 0.0f, 0x1.1bd73ap-26f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.0e5fe4p-49f, 0.0f, 0x1.562e8p-86f, 0.0f, 0x1.67480ap-42f,
     0x1.a177d4p-93f, 0x1.cc5b88p-57f, 0x1.946ff6p-64f, 0x1.b9342ep-58f,
     0x1.abc694p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.782caep-36f, 0.0f,
     0x1.d66504p-120f, 0.0f, 0.0f, 0.0f, 0x1.01e378p-70f, 0.0f, 0.0f, 0.0f,
     0x1.ed7f6ep-57f, 0x1.8d6848p-72f, 0x1.49a9dcp-94f, 0x1.00f314p-64f, 0.0f, 0.0f,
     0x1.18f76p-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.131294p-42f, 0x1.5c08a6p-70f,
     0x1.85ba06p-21f, 0.0f, 0.0f, 0x1.115e3p-122f, 0x1.f2a8fap-21f, 0x1.49f8dap-88f,
     0.0f, 0x1.021188p-123f, 0x1.58d556p-27f, 0x1.ca93f6p-12f, 0x1.452fc4p-110f,
     0x1.af388ep-102f, 0.0f, 0.0f, 0x1.e5eda2p-121f, 0.0f, 0.0f, 0x1.86b71ap-36f,
     0x1.b0ae34p-95f, 0.0f, 0.0f, 0.0f, 0x1.5ca424p-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.9caf94p-90f, 0.0f, 0.0f, 0.0f, 0x1.c91e9ap-80f, 0.0f,
     0x1.0f2cdcp-117f, 0x1.6597f8p-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.532fap-71f,
     0x1.f85038p-116f, 0x1.b2e14ap-62f, 0x1.6403ecp-1f, 0.0f, 0x1.1f73bcp-8f,
     0x1.8f6cp-80f, 0.0f, 0x1.e31ecep-44f, 0x1.846242p-33f, 0.0f, 0x1.95a9cap-27f,
     0x1.9960bep-58f, 0.0f, 0.0f, 0x1.e94142p-9f, 0x1.f3542ap-57f, 0x1.759672p-108f,
     0.0f, 0.0f, 0x1.ae4d66p-87f, 0x1.37ef32p-47f, 0x1.f82aa6p-45f, 0x1.9ba3a2p-96f,
     0.0f, 0x1.098e8ap-73f, 0x1.334fap-90f, 0.0f, 0x1.381d24p-54f, 0x1.d76a9ep-96f,
     0.0f, 0.0f, 0x1.ae09p-10f, 0x1.c1233ep-24f, 0.0f, 0.0f, 0x1.41a50ap-21f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f950bp-62f, 0.0f, 0x1.39f6f2p-65f, 0.0f, 0x1.563f4cp-61f,
     0x1.f1f8cp-89f, 0x1.92aef4p-104f, 0x1.13e6aap-39f, 0.0f, 0.0f, 0.0f,
     0x1.f43c36p-64f, 0x1.525674p-40f, 0.0f, 0x1.39bbf8p-99f, 0x1.4ab7bcp-99f,
     0x1.30df3cp-123f, 0.0f, 0x1.107c72p-21f, 0x1.f5bf3ap-69f, 0.0f, 0.0f,
     0x1.3cdbd8p-120f, 0x1.f8e8ecp-6f, 0x1.c99658p-122f, 0.0f, 0.0f, 0x1.0ee144p-29f,
     0x1.682f66p-23f, 0x1.947308p-102f, 0.0f, 0x1.dd2162p-120f, 0.0f, 0.0f,
     0x1.8dcdcep-49f, 0.0f, 0x1.607568p-105f, 0.0f, 0.0f, 0x1.b5e126p-1f, 0.0f, 0.0f,
     0.0f, 0x1.cb4f7ep-11f, 0x1.10d4b6p-29f, 0.0f, 0.0f, 0x1.909aacp-72f, 0.0f,
     0x1.edc49p-121f, 0x1.5d8636p-56f, 0x1.9a6552p-38f, 0.0f, 0x1.e14fc6p-3f,
     0x1.912808p-108f, 0x1.0578bp-99f, 0x1.d3616cp-104f, 0x1.2d73c6p-4f,
     0x1.00470ap-33f, 0x1.fa7582p-51f, 0.0f, 0.0f, 0x1.b2d9d8p-30f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.7f07c4p-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4c8518p-89f,
     0.0f, 0x1.c1ad18p-87f, 0x1.52d29cp-26f, 0x1.7f8a44p-52f, 0x1.ebd954p-79f, 0.0f,
     0.0f, 0x1.84a1dp-68f, 0x1.e416a6p-50f, 0x1.a13212p-98f, 0.0f, 0x1.fdf894p-124f,
     0x1.31748ap-31f, 0x1.cdc258p-63f, 0x1.7303f2p-104f, 0x1.0dc4e8p-43f
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
            int32_t tmp3;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_finz_atanf1_u35purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = bench_acc + tmp1;
            bench_acc = tmp2;
            tmp3 = i + INT32_C(1);
            i = tmp3;
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
    printf("Sleef_finz_atanf1_u35purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_atanf1_u35purecfma bench acc %a\n", global_bench_acc);
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
