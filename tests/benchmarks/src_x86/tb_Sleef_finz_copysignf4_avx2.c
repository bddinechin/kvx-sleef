/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_copysignf4_avx2128.c --function \
 *     Sleef_finz_copysignf4_avx2128 --arity 2 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32,binary32 --vector-size 4 \
 *     --function-input-vector-size 4 --bench --no-embedded-bin --target \
 *     x86_avx2128
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
     0.0f, 0x1.2187acp-84f, 0.0f, 0.0f, 0.0f, 0x1.2c8e8ep-50f, 0.0f, 0.0f, 0x1p0f,
     0.0f, 0x1.347c66p-66f, 0x1.e074e6p-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.711048p-9f, 0x1.cc8ddep-92f, 0.0f, 0x1.404298p-77f, 0x1.ff49c6p-123f,
     0x1.999d32p-23f, 0x1.75d8aap-103f, 0x1.437ccp-99f, 0.0f, 0.0f, 0x1.3dd2a6p-100f,
     0x1.3f540ep-107f, 0x1.fc0222p-50f, 0.0f, 0x1.cc191p-28f, 0x1.eb82dp-119f,
     0x1.c399ap-57f, 0x1.1d12a6p-56f, 0x1.fe718ep-14f, 0x1.ecb1c2p-13f,
     0x1.fcf04p-111f, 0x1.e024a6p-33f, 0x1.3f2b9ep-103f, 0.0f, 0x1.ad15dep-107f, 0.0f,
     0x1.32ce64p-84f, 0x1.7729c8p-98f, 0x1.e96a72p-71f, 0.0f, 0x1.ae8146p-38f,
     0x1.62abfep-32f, 0x1.b8b6e2p-44f, 0x1.15e01p-31f, 0x1.4e8c4cp-46f, 0.0f,
     0x1.eb5b9p-63f, 0x1.f74084p-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.683eacp-92f, 0.0f,
     0x1.acc75ap-48f, 0.0f, 0x1.34ee4p-62f, 0.0f, 0.0f, 0x1.b4dff2p-76f,
     0x1.977858p-9f, 0.0f, 0.0f, 0x1.cc5dfcp-43f, 0x1.c1c604p-85f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e3ab9cp-29f, 0x1.ec6b88p-96f,
     0x1.ef7b0cp-34f, 0x1.0aae88p-37f, 0.0f, 0.0f, 0.0f, 0x1.0f7e34p-42f, 0.0f,
     0x1.384cd2p-66f, 0.0f, 0.0f, 0.0f, 0x1.33999ep-78f, 0.0f, 0.0f, 0x1.cc5664p-64f,
     0x1.b1a44ep-88f, 0x1.4e7674p-28f, 0.0f, 0x1.ed84dap-2f, 0.0f, 0.0f, 0.0f,
     0x1.fe772cp-70f, 0.0f, 0.0f, 0x1.458344p-120f, 0.0f, 0x1.434632p-51f, 0.0f, 0.0f,
     0x1.409a18p-87f, 0x1.4915fp-54f, 0x1.3c8778p-7f, 0.0f, 0.0f, 0.0f,
     0x1.b9bea8p-24f, 0x1.f6a88p-81f, 0x1.42fef6p-114f, 0.0f, 0x1.24fd9cp-106f,
     0x1.4f8994p-103f, 0x1.0e7b7p-111f, 0.0f, 0.0f, 0x1.b9085p-81f, 0x1.e76dap-52f,
     0x1.4a44p-50f, 0.0f, 0.0f, 0.0f, 0x1.5579c4p-111f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.df579p-89f, 0.0f, 0x1.ca8698p-38f, 0x1.9d4dc4p-71f, 0.0f, 0.0f,
     0x1.39879ep-97f, 0.0f, 0x1.c0afep-69f, 0x1.83fd72p-89f, 0x1.c37ecep-14f,
     0x1.6cf77ep-106f, 0x1.19a7cp-51f, 0x1.17da9ep-2f, 0.0f, 0.0f, 0.0f,
     0x1.e2841ap-25f, 0.0f, 0x1.5c5526p-25f, 0.0f, 0.0f, 0.0f, 0x1.b8b57cp-20f, 0.0f,
     0.0f, 0x1.398b36p-98f, 0.0f, 0x1.531a7cp-45f, 0.0f, 0.0f, 0x1.7eb9e8p-13f, 0.0f,
     0x1.2d9736p-68f, 0x1.8b1c7ap-23f, 0.0f, 0.0f, 0x1.cafac8p-1f, 0x1.045f78p-19f,
     0.0f, 0x1.2417b8p-77f, 0.0f, 0x1.422b36p-46f, 0.0f, 0.0f, 0x1.3ec30ep-122f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.04d024p-74f, 0.0f, 0x1.604432p-106f, 0.0f, 0x1.bd627ap-87f,
     0x1.bf3686p-119f, 0x1.092eccp-69f, 0.0f, 0.0f, 0x1.4414b6p-117f, 0x1.82589cp-54f,
     0x1.64ed54p-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.67cee6p-56f, 0x1.2a85bap-35f, 0.0f,
     0x1.bcf472p-102f, 0x1.ec22d2p-51f, 0.0f, 0.0f, 0.0f, 0x1.4b15bp-114f, 0.0f,
     0x1.4e9d64p-108f, 0x1.f3e238p-96f, 0x1.4b9ddcp-29f, 0x1.1cbc8cp-56f,
     0x1.76f846p-70f, 0x1.46176ep-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8ea954p-25f,
     0x1.add6e2p-105f, 0x1p0f, 0x1.d3506cp-19f, 0.0f, 0x1.20c9ep-85f, 0.0f,
     0x1.3ed7c2p-84f, 0x1.4459b4p-37f, 0x1.77772cp-81f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9be7d8p-50f, 0x1.640606p-122f, 0x1.3f9594p-18f, 0.0f, 0x1.e98edep-4f,
     0x1.e7345cp-22f, 0x1.faecb8p-20f, 0.0f, 0x1.5fbf0cp-46f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.17ed28p-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e76cdcp-68f,
     0.0f, 0.0f, 0.0f, 0x1.64a6f2p-95f, 0x1.19476ep-65f, 0.0f, 0x1.e27f22p-121f, 0.0f,
     0x1.8e5cdp-91f, 0x1.a998bep-1f, 0.0f, 0x1.06dc5ap-89f, 0.0f, 0.0f, 0.0f,
     0x1.b2dfaap-34f, 0x1.234a5ap-104f, 0.0f, 0.0f, 0x1.384eacp-4f, 0.0f, 0.0f, 0.0f,
     0x1.f2dc4ep-115f, 0x1.80b3a8p-16f, 0.0f, 0.0f, 0x1.9a8b6p-39f, 0x1.ec6e72p-91f,
     0x1.f1c694p-111f, 0x1.117786p-26f, 0x1.8ac49cp-89f, 0x1.65a82ap-111f, 0.0f,
     0x1.3940b2p-84f, 0.0f, 0x1.ac6a8cp-119f, 0.0f, 0x1.55a056p-74f, 0x1.be96acp-67f,
     0x1.af76dp-32f, 0.0f, 0x1.32f728p-94f, 0.0f, 0x1.65d2aep-8f, 0.0f, 0.0f,
     0x1.5c59e2p-16f, 0.0f, 0x1.748874p-37f, 0x1.a6cceap-19f, 0x1.a4c264p-34f,
     0x1.f4b7c2p-112f, 0x1.09962ep-117f, 0x1.809aa8p-72f, 0.0f, 0x1.12895p-51f, 0.0f,
     0.0f, 0x1.252d9cp-72f, 0.0f, 0x1.b1c5p-5f, 0.0f, 0.0f, 0x1.a79fd4p-113f, 0.0f,
     0x1.875668p-116f, 0.0f, 0x1.f3b7b4p-62f, 0x1.599d98p-94f, 0x1.16a496p-49f, 0.0f,
     0x1.7e4b24p-105f, 0x1.030cecp-29f, 0.0f, 0x1.eca69cp-27f, 0.0f, 0.0f,
     0x1.d8fc62p-40f, 0x1.3bccep-56f, 0x1.325b82p-100f, 0x1.a4b47cp-87f,
     0x1.5e20bcp-47f, 0x1.4b4b08p-106f, 0.0f, 0x1.f2e086p-98f, 0.0f, 0.0f,
     0x1.84228cp-112f, 0x1.8a99d4p-9f, 0.0f, 0.0f, 0.0f, 0x1.fc3214p-120f, 0.0f, 0.0f,
     0.0f, 0x1.510d72p-31f, 0.0f, 0.0f, 0x1.094b86p-38f, 0.0f, 0x1.a1ba0ap-105f, 0.0f,
     0x1.c8608ap-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9073c8p-119f, 0x1.86085ap-22f, 0.0f,
     0x1.965f3ap-87f, 0.0f, 0x1.7ea35p-63f, 0x1.558994p-115f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bd7252p-120f, 0x1.b3034ep-70f, 0.0f, 0.0f, 0x1.8a4ce8p-61f, 0x1.6159f6p-64f,
     0.0f, 0.0f, 0x1.310636p-47f, 0x1.7f9a36p-12f, 0x1.aeccbap-90f, 0.0f,
     0x1.3c5ea6p-59f, 0x1.5adba4p-44f, 0.0f, 0x1.8a58p-108f, 0x1.9ff73p-117f, 0.0f,
     0.0f, 0x1.375322p-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d228ap-29f, 0x1.b989fcp-43f,
     0x1.15ac6ap-99f, 0x1.78404cp-74f, 0x1.ad496p-81f, 0.0f, 0.0f, 0.0f,
     0x1.10aa48p-60f, 0x1.49943p-57f, 0.0f, 0.0f, 0x1.0f6c3ap-87f, 0x1.099516p-67f,
     0x1.2c16f6p-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e0e8bap-105f, 0.0f, 0x1.f7098ep-18f,
     0x1.d7c284p-28f, 0.0f, 0x1.e4c4d2p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0a746p-111f, 0.0f, 0x1.eb037ap-96f, 0.0f, 0.0f, 0x1.244bbp-4f, 0.0f, 0.0f,
     0x1.6ed89p-35f, 0.0f, 0.0f, 0x1.ec09b2p-4f, 0x1.96aec2p-55f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.cef3b8p-104f, 0x1.8dbec2p-71f, 0x1.307eaap-91f, 0x1.38914cp-75f,
     0x1.6604f8p-64f, 0x1.91f102p-80f, 0x1.66b04ep-38f, 0.0f, 0.0f, 0.0f,
     0x1.2d315cp-100f, 0x1.10dabap-111f, 0.0f, 0x1.4659ap-80f, 0x1.5826b2p-111f,
     0x1.e296acp-18f, 0.0f, 0x1.456596p-13f, 0x1.07bcbap-49f, 0x1.d542cep-15f, 0.0f,
     0x1.f79786p-11f, 0x1.939b36p-2f, 0x1.455fdep-39f, 0.0f, 0.0f, 0x1p0f,
     0x1.694f58p-56f, 0.0f, 0x1.26efbcp-39f, 0.0f, 0.0f, 0x1.2d87aep-29f,
     0x1.79ae32p-6f, 0.0f, 0x1.ff3beap-15f, 0x1.64feeap-41f, 0x1.e98166p-104f, 0.0f,
     0x1.9f1ee6p-79f, 0x1.66b7c4p-9f, 0.0f, 0x1.2aeab2p-101f, 0x1.e1e108p-37f, 0.0f,
     0x1.40077cp-109f, 0.0f, 0x1.d3a21ep-46f, 0x1.199b66p-121f, 0x1.65983cp-22f,
     0x1.2bcb08p-124f, 0.0f, 0.0f, 0x1.914f2ep-39f, 0.0f, 0x1.d1386p-117f,
     0x1.33e3f8p-98f, 0.0f, 0x1.154894p-16f, 0x1.02d106p-90f, 0x1.db1f74p-36f, 0.0f,
     0x1.a47318p-118f, 0x1.aa861ap-44f, 0.0f, 0.0f, 0x1.7a041p-4f, 0.0f, 0.0f,
     0x1.0be9b2p-102f, 0.0f, 0.0f, 0.0f, 0x1.e85cap-48f, 0.0f, 0.0f, 0x1.829468p-1f,
     0x1.81362p-45f, 0.0f, 0.0f, 0x1.10d52ap-2f, 0.0f, 0.0f, 0x1.64ea44p-9f, 0.0f,
     0x1.e682f4p-97f, 0x1.0feda2p-122f, 0.0f, 0.0f, 0x1.e3aa96p-29f, 0x1.461d1ep-88f,
     0x1.ba20d8p-74f, 0.0f, 0.0f, 0x1.81ff8cp-62f, 0.0f, 0.0f, 0x1.b3a524p-61f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.51397ep-91f, 0.0f, 0x1.74095cp-73f, 0x1.44c902p-49f,
     0x1.9c73aep-44f, 0.0f, 0.0f, 0.0f, 0x1.581512p-2f, 0x1.d1dac8p-118f, 0.0f,
     0x1.46ceb6p-107f, 0.0f, 0x1.be2b46p-97f, 0x1.8c3826p-31f, 0x1.58075p-108f, 0.0f,
     0x1.6591a4p-59f, 0x1.0f58f4p-38f, 0.0f, 0.0f, 0x1.2ac84ap-12f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.bb2b02p-63f, 0x1.caf078p-126f, 0.0f, 0x1.de157cp-42f,
     0x1.732334p-118f, 0x1.ccaf3ap-88f, 0x1.244a1cp-123f, 0.0f, 0x1.f6c61p-24f, 0.0f,
     0.0f, 0x1.5a6feap-76f, 0.0f, 0x1.b6565ep-4f, 0.0f, 0x1.a444cep-41f,
     0x1.221782p-47f, 0.0f, 0x1.9d2f58p-47f, 0x1.53a24cp-26f, 0.0f, 0x1.167486p-62f,
     0x1.8db628p-9f, 0x1.b1c6eap-72f, 0x1.c50f74p-2f, 0x1.1cd1c4p-61f, 0.0f,
     0x1.9d80fap-59f, 0.0f, 0.0f, 0x1.55fb12p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.d0d662p-125f, 0x1.9690b6p-125f, 0x1.049afcp-50f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f1f50ep-74f, 0x1.e48f1p-59f, 0x1.305f28p-61f, 0x1.8e45f2p-114f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.85c37cp-68f, 0.0f, 0.0f, 0x1.ccda0cp-68f, 0.0f,
     0x1.ca9a32p-32f, 0x1.6fcd2cp-21f, 0.0f, 0x1.d987bep-5f, 0.0f, 0.0f,
     0x1.db2caep-41f, 0x1.f35058p-105f, 0x1.765c72p-92f, 0x1.e5406p-72f, 0.0f,
     0x1.a5ddf6p-52f, 0x1.714302p-107f, 0.0f, 0.0f, 0x1.3f03ccp-42f, 0.0f, 0.0f, 0.0f,
     0x1.11d4b2p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ca2524p-81f, 0x1.28c824p-10f, 0.0f,
     0x1.4e9658p-108f, 0x1.232d18p-104f, 0.0f, 0x1.098a7ep-35f, 0x1.c71418p-99f,
     0x1.a0bed6p-122f, 0.0f, 0.0f, 0.0f, 0x1.dcf7bep-69f, 0x1.8e5bf8p-46f,
     0x1.8b12dcp-58f, 0.0f, 0.0f, 0.0f, 0x1.b51088p-14f, 0x1.08245ep-13f, 0.0f,
     0x1.a6f766p-13f, 0x1.64cc9ap-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e7a1p-57f, 0x1.1b126p-100f, 0.0f, 0x1.f7b6c4p-103f,
     0.0f, 0x1.6ccep-67f, 0.0f, 0.0f, 0x1.8e652cp-103f, 0x1.eaac7ap-86f,
     0x1.f160f2p-79f, 0x1.38dc04p-72f, 0x1.1aaef8p-60f, 0x1.126044p-3f, 0.0f, 0.0f,
     0x1.18227p-99f, 0.0f, 0x1.983c34p-26f, 0x1.0c9808p-31f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.866a9ap-119f, 0.0f, 0x1.4abd26p-96f, 0x1.b33ff4p-80f, 0.0f,
     0x1.ba24fcp-106f, 0x1.8adf4ep-12f, 0.0f, 0x1.83a022p-25f, 0x1.370d12p-48f,
     0x1.930c2ep-57f, 0x1.617c06p-81f, 0x1.84fd54p-14f, 0x1.c4bdap-45f,
     0x1.c540eap-14f, 0x1p0f, 0.0f, 0.0f, 0x1.237c7ap-53f, 0x1.f499fep-26f, 0.0f,
     0x1.6b79bp-4f, 0x1.4867ap-102f, 0x1.08bf42p-112f, 0x1.c40384p-90f,
     0x1.ea8bf2p-25f, 0.0f, 0.0f, 0x1.164ec8p-97f, 0.0f, 0x1.be2846p-38f, 0.0f, 0.0f,
     0x1.f6519ap-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f53cc4p-92f,
     0.0f, 0.0f, 0x1.c3ee78p-54f, 0x1.cc87f2p-30f, 0.0f, 0x1.a5dd48p-111f, 0.0f,
     0x1.9a9e06p-126f, 0x1.0d1702p-3f, 0x1.47e916p-5f, 0x1.e4c5aep-58f,
     0x1.18b296p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.32f004p-59f, 0x1.4961c8p-59f,
     0x1.3b9b9p-57f, 0.0f, 0x1.b34698p-46f, 0x1.1a5382p-113f, 0x1.1cfa7ep-123f,
     0x1.9621bcp-11f, 0x1.4586dcp-25f, 0.0f, 0x1.5fd034p-21f, 0x1.006028p-56f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.73d8fep-46f, 0.0f, 0x1.8a8cfep-47f, 0x1.3c6fd8p-22f, 0.0f,
     0x1.78e11ep-8f, 0x1.01cc06p-72f, 0.0f, 0x1.5b7746p-28f, 0x1.1b06e8p-115f,
     0x1.ec9e0ep-100f, 0x1.53c942p-110f, 0.0f, 0x1.1f0f4ep-81f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.bc5a4ep-121f, 0.0f, 0x1.5776e8p-71f, 0x1.e72f02p-124f, 0x1.708c2ep-66f,
     0.0f, 0.0f, 0x1.ec072p-119f, 0x1.ddaa8ap-83f, 0x1.916232p-113f, 0x1.259f46p-3f,
     0.0f, 0x1.2d3f18p-37f, 0.0f, 0x1.d8c7a4p-74f, 0x1.d7a98cp-62f, 0x1.bed76cp-38f,
     0.0f, 0.0f, 0x1.c4b2p-42f, 0x1.b5b22ap-3f, 0.0f, 0.0f, 0.0f, 0x1.034a6ap-48f,
     0.0f, 0x1.529e12p-10f, 0x1.478196p-108f, 0x1.cc8f04p-122f, 0x1.383bcp-122f, 0.0f,
     0.0f, 0.0f, 0x1.8ed718p-113f, 0x1.0a96fep-19f, 0x1.38b434p-42f, 0x1.3f677cp-88f,
     0x1.acea42p-59f, 0x1.775074p-64f, 0.0f, 0.0f, 0.0f, 0x1.9515c4p-80f, 0.0f,
     0x1.332ef8p-66f, 0.0f, 0.0f, 0.0f, 0x1.fc4a18p-118f, 0.0f, 0.0f, 0.0f,
     0x1.b8ec62p-54f, 0.0f, 0.0f, 0.0f, 0x1.ff090ap-98f, 0.0f, 0x1.a95efp-118f, 0.0f,
     0.0f, 0x1.007f38p-2f, 0x1p0f, 0x1.4f7b5ep-71f, 0.0f, 0x1.14f3cp-105f, 0.0f,
     0x1.e2b9dp-64f, 0x1.6eb6cap-88f, 0x1.9a2038p-68f, 0.0f, 0x1.b22d8ap-39f,
     0x1.1d9ab8p-21f, 0.0f, 0.0f, 0x1.50395cp-49f, 0.0f, 0.0f, 0x1.b9917cp-86f,
     0x1.c1066p-63f, 0.0f, 0.0f, 0x1.e59052p-71f, 0.0f, 0.0f, 0x1.0f3a3p-25f,
     0x1.fc45bap-10f, 0.0f, 0.0f, 0x1.c61c2p-44f, 0.0f, 0x1.7870e6p-75f, 0.0f,
     0x1.24e648p-93f, 0.0f, 0x1.c4895cp-124f, 0x1.e2aaccp-122f, 0.0f, 0x1.5845d8p-33f,
     0.0f, 0.0f, 0.0f, 0x1.6dae1p-10f, 0.0f, 0x1.27bebcp-111f, 0.0f, 0.0f,
     0x1.8d0aep-92f, 0.0f, 0.0f, 0x1.b7813ap-80f, 0x1.dd23bap-45f, 0.0f,
     0x1.03fa72p-113f, 0x1.2056fcp-54f, 0.0f, 0.0f, 0.0f, 0x1.be5d64p-1f, 0.0f,
     0x1.eccf3ep-29f, 0x1.74bbb2p-82f, 0.0f, 0x1.e32a64p-87f, 0.0f, 0.0f,
     0x1.50fd1cp-113f, 0.0f, 0x1.7c7dep-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.745a2cp-39f,
     0x1.0ff5eep-26f, 0.0f, 0.0f, 0x1.c4dc1ap-100f, 0x1.8fc644p-15f, 0.0f, 0.0f, 0.0f,
     0x1.c5e1d6p-17f, 0x1.ce534ep-59f, 0x1.4600cap-32f, 0x1.578168p-106f, 0.0f,
     0x1.2f0a6cp-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ef748ap-103f, 0x1.051ebep-125f,
     0x1.e93cbp-11f, 0x1.9820eap-91f, 0.0f, 0x1.168a3ap-26f, 0x1.13049ap-80f,
     0x1.fbf4e2p-32f, 0.0f, 0x1.77fecap-48f, 0x1.28016ap-65f, 0x1.a0411ep-42f, 0.0f,
     0x1.ae62dp-41f, 0.0f, 0x1.0885c6p-44f, 0.0f, 0.0f, 0x1.64c758p-56f, 0.0f,
     0x1.c0a7ccp-1f, 0.0f, 0.0f, 0.0f, 0x1.bbf238p-83f, 0x1.ccb8p-53f, 0.0f,
     0x1.271532p-86f, 0x1.a2e282p-122f, 0x1.2a66fep-108f, 0x1.feaf56p-60f,
     0x1.d824fp-24f, 0.0f, 0.0f
};
static const float external_bench_wrapper_input_table_arg1[1004]  = {
     0x1.1043a6p-96f, 0x1.663deep-95f, 0.0f, 0.0f, 0x1.b24aacp-58f, 0x1.b4e372p-68f,
     0.0f, 0.0f, 0.0f, 0x1.0e3cd2p-40f, 0x1.f377bep-1f, 0.0f, 0x1.7eb68p-70f, 0.0f,
     0.0f, 0x1.5a1182p-34f, 0x1.280258p-68f, 0x1.493a9p-84f, 0x1.78e824p-107f, 0.0f,
     0.0f, 0x1.b05404p-102f, 0x1.5d0e48p-114f, 0.0f, 0.0f, 0.0f, 0x1.c9b588p-13f,
     0x1.27f566p-83f, 0.0f, 0.0f, 0x1.f5665p-14f, 0.0f, 0.0f, 0x1.35322ap-81f,
     0x1.66a536p-100f, 0.0f, 0.0f, 0x1.b17a82p-34f, 0.0f, 0x1.91be4p-17f, 0.0f, 0.0f,
     0.0f, 0x1.d4a91p-45f, 0.0f, 0x1.d4cefp-87f, 0x1.00ea7p-24f, 0x1.ce4382p-61f,
     0x1.9d8b56p-102f, 0x1.e1c824p-1f, 0x1.685a36p-102f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.dcd4fp-77f, 0x1.457128p-80f, 0x1.9fec62p-46f, 0x1.18e936p-31f, 0.0f, 0.0f,
     0x1.1cfb16p-8f, 0.0f, 0.0f, 0x1.651a16p-118f, 0.0f, 0x1.f43b98p-105f, 0.0f, 0.0f,
     0x1.226a1ap-92f, 0x1.b25238p-37f, 0.0f, 0x1.9f6b9cp-15f, 0.0f, 0.0f,
     0x1.79d19ep-108f, 0x1.d1eb4ap-39f, 0x1.dcdd16p-120f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.fce9b2p-39f, 0.0f, 0.0f, 0x1.bb78eap-24f, 0x1.4a722cp-6f, 0.0f,
     0x1.ce4626p-96f, 0x1.c5b7a8p-1f, 0.0f, 0.0f, 0x1.e14cep-99f, 0x1.a89302p-22f,
     0x1.7dc04ap-5f, 0.0f, 0x1.2f4be2p-104f, 0x1.83a188p-15f, 0.0f, 0.0f, 0x1p0f,
     0x1.1b7c68p-88f, 0.0f, 0.0f, 0.0f, 0x1.e6eda6p-50f, 0x1.187422p-74f, 0.0f,
     0x1.fb0ce8p-88f, 0x1.26a8b2p-51f, 0x1.ad0c2ap-115f, 0.0f, 0x1.f59fa4p-47f,
     0x1.4134p-22f, 0x1.0b5354p-4f, 0.0f, 0x1.1df94p-4f, 0x1.67f87ep-82f,
     0x1.787a56p-29f, 0.0f, 0x1.51c418p-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5350e2p-107f, 0x1.0ad99cp-75f, 0x1.5cb6e8p-52f, 0x1.3b0704p-28f,
     0x1.e91f66p-4f, 0x1.f489e6p-42f, 0.0f, 0.0f, 0x1.d46d02p-52f, 0.0f, 0.0f,
     0x1.d7f758p-114f, 0x1.a2075ep-63f, 0.0f, 0x1.805068p-104f, 0x1.b69002p-2f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e252b8p-12f, 0.0f, 0x1.de957cp-17f, 0x1.061904p-25f, 0.0f,
     0x1.288dd2p-74f, 0.0f, 0x1.db6a1p-63f, 0.0f, 0x1.a7dc78p-17f, 0.0f,
     0x1.03584p-39f, 0.0f, 0x1.98b23ap-52f, 0x1.2b5208p-48f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a81f3ap-75f, 0.0f, 0x1.69f84p-121f, 0x1.c812dp-80f, 0.0f, 0.0f, 0.0f,
     0x1.2364acp-104f, 0.0f, 0.0f, 0.0f, 0x1.a47a76p-25f, 0x1.c20c7ap-7f, 0.0f, 0.0f,
     0x1.77d064p-108f, 0x1.6f7b56p-96f, 0x1.8a23ccp-99f, 0.0f, 0x1.b0d9bcp-92f,
     0x1.a7be1p-4f, 0x1.282242p-88f, 0x1.bb635ap-77f, 0x1.3ed9aap-75f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ed83f2p-73f, 0.0f, 0.0f, 0x1.ee096ep-89f, 0x1.fc4c3ap-101f, 0.0f,
     0x1.bdef2p-75f, 0.0f, 0x1.4fb91p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d97f26p-84f,
     0x1.f51948p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4b0b3p-124f, 0.0f,
     0x1.5ebcdep-16f, 0.0f, 0.0f, 0x1.83d164p-61f, 0.0f, 0.0f, 0.0f, 0x1.c25deep-90f,
     0.0f, 0x1.593f0cp-3f, 0x1.5915d6p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b4ec0ap-104f, 0.0f, 0.0f, 0x1.89995ap-122f, 0.0f, 0.0f, 0x1.f078fep-19f,
     0.0f, 0.0f, 0x1.1c6d68p-24f, 0.0f, 0.0f, 0x1.b09af8p-22f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.802f24p-96f, 0.0f, 0x1.62c2ecp-24f, 0x1.50236ep-34f, 0.0f, 0.0f, 0.0f,
     0x1.1cfaaep-41f, 0x1.5c1e16p-124f, 0x1.946432p-123f, 0x1.21f438p-97f, 0.0f,
     0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fa5a3ep-12f, 0.0f, 0x1.c3069p-87f,
     0x1.a2b5dep-16f, 0.0f, 0.0f, 0x1.04a598p-33f, 0.0f, 0x1.f8e0d2p-31f,
     0x1.b64094p-5f, 0.0f, 0x1.cef46p-30f, 0x1.5da43ap-35f, 0x1.b00908p-84f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.680644p-125f, 0x1.444d08p-4f, 0.0f,
     0x1.2b9e8p-48f, 0x1.c0100ep-106f, 0x1.fb49a4p-33f, 0x1.033738p-20f,
     0x1.f040dap-4f, 0.0f, 0x1.c0efdcp-91f, 0.0f, 0.0f, 0x1.7f697cp-94f, 0.0f, 0.0f,
     0x1.9ce062p-102f, 0x1.eefb7ap-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c24bc4p-91f,
     0x1.71cc8p-3f, 0.0f, 0.0f, 0x1.414952p-110f, 0x1.34123ap-17f, 0x1.2d5ceap-117f,
     0.0f, 0.0f, 0.0f, 0x1.1890b2p-8f, 0.0f, 0.0f, 0x1.d7dd1ep-50f, 0.0f, 0.0f,
     0x1.033e8ep-56f, 0.0f, 0.0f, 0.0f, 0x1.eba00ep-19f, 0x1.00d1e8p-116f,
     0x1.dc3c12p-14f, 0.0f, 0x1.f884bcp-105f, 0.0f, 0.0f, 0.0f, 0x1.f579aep-100f,
     0.0f, 0.0f, 0.0f, 0x1.d656b2p-111f, 0.0f, 0.0f, 0x1.15b41cp-86f, 0.0f,
     0x1.b77e84p-29f, 0x1.cc2e98p-106f, 0.0f, 0x1.a38796p-7f, 0x1.a949b6p-14f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5e2a44p-22f, 0.0f, 0.0f,
     0x1.b0e2d6p-103f, 0.0f, 0.0f, 0.0f, 0x1.781d38p-86f, 0.0f, 0x1.c1d6e4p-49f, 0.0f,
     0x1.ee08bcp-89f, 0.0f, 0x1.79be48p-18f, 0x1.f2980cp-26f, 0.0f, 0x1.1cd96cp-100f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ca40acp-23f, 0x1.5c2524p-45f, 0x1.13e664p-115f, 0.0f,
     0x1.66edc6p-57f, 0x1.f44e2ap-78f, 0.0f, 0x1.ef8d46p-65f, 0x1.35522ep-84f,
     0x1.4ede1p-34f, 0.0f, 0.0f, 0x1.f59d64p-3f, 0x1.c3b442p-47f, 0x1.da1dc2p-90f,
     0x1.86cddcp-6f, 0.0f, 0.0f, 0x1.5a6404p-32f, 0.0f, 0.0f, 0x1.e43a7cp-32f, 0.0f,
     0.0f, 0x1.5606c6p-78f, 0x1.9df952p-66f, 0x1.2506ap-31f, 0x1.b00c1ap-47f,
     0x1.a49096p-111f, 0x1.7272d6p-44f, 0x1.5e9c24p-119f, 0x1.eb4832p-11f,
     0x1.5c3708p-19f, 0x1.00eccap-70f, 0.0f, 0.0f, 0.0f, 0x1.81624ap-120f, 0.0f,
     0x1.c425d8p-104f, 0.0f, 0x1.9f7456p-25f, 0.0f, 0x1.31d1acp-99f, 0x1.f442d4p-126f,
     0x1.e914p-20f, 0.0f, 0.0f, 0x1.dc5df8p-89f, 0x1.01bab2p-104f, 0x1.d4351cp-56f,
     0.0f, 0.0f, 0.0f, 0x1.d9911ep-83f, 0x1.4a7caap-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.47e4b8p-103f, 0x1.f03bb8p-110f, 0x1.f03c96p-11f, 0x1p0f, 0.0f, 0.0f,
     0x1.73818cp-31f, 0.0f, 0.0f, 0x1.e4917p-126f, 0x1.cf248ap-89f, 0.0f,
     0x1.ecc4f8p-15f, 0x1.04563ap-63f, 0x1.a69422p-66f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.aca76p-68f, 0x1.588fe2p-120f, 0x1.aac1bp-73f, 0x1.e7ee7ap-107f, 0.0f,
     0x1.51f54ep-84f, 0x1.6530a2p-106f, 0x1.255a78p-55f, 0.0f, 0x1.e47a82p-70f, 0.0f,
     0x1.f284fcp-117f, 0x1.eb8eecp-75f, 0x1.c867fp-102f, 0x1.aa9fdep-5f,
     0x1.762946p-12f, 0x1.10314p-125f, 0x1.be02eap-96f, 0.0f, 0.0f, 0x1.cf852ep-47f,
     0.0f, 0x1.725272p-41f, 0.0f, 0.0f, 0x1.9f75a8p-124f, 0x1.bac12ap-63f, 0.0f,
     0x1.360dd2p-121f, 0x1.97f2c6p-74f, 0x1.82c5f2p-38f, 0.0f, 0.0f, 0.0f,
     0x1.d8ba2cp-39f, 0x1.03ac1p-1f, 0x1.4ec05cp-46f, 0.0f, 0x1.9a1f1ap-78f, 0.0f,
     0.0f, 0.0f, 0x1.2c0e3ep-117f, 0x1.3589eap-46f, 0.0f, 0x1.8a9ec4p-125f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.93c852p-23f, 0x1.b8c72p-94f, 0.0f, 0.0f, 0x1.c095aep-55f,
     0x1.349086p-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c6f326p-6f,
     0x1.cbaaccp-22f, 0.0f, 0x1.304c1p-84f, 0x1.137a4cp-125f, 0x1.686e8ap-79f, 0.0f,
     0x1.a89818p-7f, 0x1.b07d74p-68f, 0.0f, 0x1.03e6e8p-105f, 0x1.03478ep-81f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ddb98ap-84f, 0x1.37e4ecp-90f,
     0x1.fba2bap-38f, 0.0f, 0x1.0ddeb4p-58f, 0x1.631626p-76f, 0.0f, 0.0f,
     0x1.b68414p-97f, 0x1.4464dep-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0a3f5p-109f, 0.0f,
     0.0f, 0.0f, 0x1.ef23b4p-97f, 0.0f, 0x1.bd92fp-79f, 0.0f, 0.0f, 0.0f,
     0x1.857bb4p-118f, 0.0f, 0.0f, 0.0f, 0x1.80da18p-59f, 0.0f, 0.0f, 0x1.2aaf0ap-58f,
     0x1.1fa636p-117f, 0x1.1c89d4p-41f, 0.0f, 0.0f, 0x1.84a1e8p-48f, 0.0f,
     0x1.c9b01p-9f, 0x1.289f1p-118f, 0.0f, 0x1.415418p-69f, 0.0f, 0x1.166ff2p-49f,
     0.0f, 0x1.e4661p-90f, 0.0f, 0.0f, 0.0f, 0x1.2b292ap-70f, 0.0f, 0x1.78ab0ep-59f,
     0x1.89356cp-111f, 0x1.84eddap-39f, 0.0f, 0.0f, 0x1.4c91d2p-3f, 0.0f,
     0x1.a8fcd6p-49f, 0.0f, 0x1.9a859ap-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.caca1p-45f,
     0.0f, 0x1.073892p-74f, 0x1.016412p-118f, 0x1.4f5d8cp-63f, 0x1.c1ff78p-5f,
     0x1.1b3a5cp-96f, 0x1.dfdd4p-4f, 0.0f, 0.0f, 0x1.525ae2p-68f, 0x1.b779d6p-1f,
     0x1.4618a2p-24f, 0x1.144012p-38f, 0x1.ab471ap-59f, 0x1.1513e6p-51f,
     0x1.86b0bap-61f, 0.0f, 0.0f, 0x1.bddb08p-69f, 0.0f, 0x1.fd1ec8p-104f,
     0x1.18d8b4p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.71cd94p-40f, 0x1.688e66p-115f, 0.0f,
     0.0f, 0x1.1df698p-118f, 0.0f, 0.0f, 0x1.334fb2p-122f, 0.0f, 0.0f,
     0x1.20be02p-33f, 0x1.0b7b14p-53f, 0.0f, 0x1.cc3d6cp-15f, 0x1.0d7d3cp-86f,
     0x1.418a46p-126f, 0.0f, 0.0f, 0.0f, 0x1.9b43e2p-12f, 0x1.0e1a34p-72f, 0.0f, 0.0f,
     0x1.708fcp-90f, 0.0f, 0x1.132f7cp-66f, 0.0f, 0x1.f4d6fap-98f, 0x1.ca5ab4p-60f,
     0.0f, 0x1.1c8ad6p-70f, 0x1.8a7538p-9f, 0.0f, 0.0f, 0x1.595f76p-113f,
     0x1.1d7b48p-11f, 0x1.7581d8p-26f, 0x1.ac1556p-7f, 0x1.8656e4p-13f, 0.0f, 0.0f,
     0.0f, 0x1.30aa8ep-16f, 0x1.6aa5f4p-10f, 0.0f, 0x1.e0d4a8p-82f, 0.0f,
     0x1.554e9ep-120f, 0x1.fda702p-81f, 0.0f, 0x1.6140cap-84f, 0x1.614b1ep-55f,
     0x1.771c3ep-122f, 0x1.3f24c8p-116f, 0x1.939084p-53f, 0x1.9d02p-96f, 0.0f, 0.0f,
     0x1.a5a02p-13f, 0.0f, 0.0f, 0x1.cf7a78p-62f, 0x1.c99c66p-7f, 0.0f,
     0x1.aac8ccp-85f, 0x1.9edaep-116f, 0.0f, 0x1.5c1a2cp-66f, 0x1.dbb67ep-71f, 0.0f,
     0.0f, 0x1.4d5204p-11f, 0x1.e66274p-73f, 0x1.ba7486p-10f, 0.0f, 0x1.020f14p-37f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b8b4dep-41f, 0.0f, 0.0f, 0x1.071a02p-17f, 0.0f,
     0x1.6ba73p-25f, 0x1.5e4d32p-69f, 0x1.a8026ap-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5ff7d2p-61f, 0.0f, 0x1.8abca2p-31f, 0.0f, 0.0f, 0.0f, 0x1.044516p-35f,
     0x1.ee45c4p-43f, 0x1.7d6f6ap-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bfa4a2p-72f, 0.0f,
     0x1.0e5edap-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.aa7214p-25f, 0x1.e9f1eep-107f,
     0x1.af31dap-96f, 0.0f, 0x1.501e9cp-73f, 0x1.a5b58ep-25f, 0.0f, 0x1.add356p-63f,
     0.0f, 0.0f, 0.0f, 0x1.8d1f4ep-42f, 0x1.4e2f26p-95f, 0.0f, 0x1.90fa8p-90f, 0.0f,
     0x1.37c76cp-26f, 0.0f, 0.0f, 0x1.c9882p-34f, 0x1.7a3bb6p-15f, 0.0f,
     0x1.4f2d86p-68f, 0x1.b86d0ap-62f, 0.0f, 0x1.cbaea8p-109f, 0x1.8becaep-89f,
     0x1.911244p-64f, 0x1.e2427cp-107f, 0.0f, 0.0f, 0x1.2e1442p-105f,
     0x1.b9f094p-123f, 0x1.6e7f68p-2f, 0x1.da378p-91f, 0x1.ed6bacp-122f, 0.0f, 0.0f,
     0.0f, 0x1.6bc098p-125f, 0.0f, 0.0f, 0x1.0e4e02p-15f, 0x1.b58c94p-47f, 0.0f, 0.0f,
     0x1.85284cp-63f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.673854p-17f, 0x1p0f,
     0.0f, 0.0f, 0x1.6042ap-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7d2fp-6f,
     0x1.66387ap-7f, 0x1.e19deap-121f, 0x1.fd3042p-44f, 0x1.da9d92p-85f,
     0x1.a41ac8p-120f, 0x1.57cc4ep-12f, 0x1.3d392p-121f, 0.0f, 0x1.8ae0f4p-111f, 0.0f,
     0.0f, 0.0f, 0x1.71fd84p-12f, 0.0f, 0.0f, 0x1.8281fep-63f, 0.0f, 0x1.4c0c64p-13f,
     0x1.a0021cp-98f, 0x1.7bf08ap-108f, 0.0f, 0x1.c5c8ecp-61f, 0x1.20313p-67f, 0.0f,
     0x1.93358ep-35f, 0.0f, 0.0f, 0.0f, 0x1.363dep-77f, 0x1.0d0c02p-110f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a060bep-103f, 0x1.d41e6cp-12f, 0.0f, 0.0f, 0x1.bac616p-68f,
     0x1.a6aec8p-73f, 0.0f, 0x1.bff6bap-109f, 0x1.163b52p-21f, 0x1.33cfaap-121f,
     0x1.d03184p-1f, 0x1.75ee8ap-43f, 0x1.0b4eeap-94f, 0x1.b63a7p-40f, 0.0f,
     0x1.aa3a5ap-105f, 0x1.6c0b2ep-43f, 0x1.221c26p-13f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6ab194p-126f, 0.0f, 0x1.cc0e44p-115f, 0.0f, 0.0f, 0x1.d8f9dcp-34f,
     0x1.e81bcep-25f, 0x1.994e8p-55f, 0x1.658a08p-32f, 0x1.5369b6p-125f, 0.0f, 0.0f,
     0.0f, 0x1.78a65cp-79f, 0x1.e6702p-33f, 0x1.4e747cp-63f, 0x1.95d70cp-60f, 0.0f,
     0.0f, 0x1.51ff92p-65f, 0x1.da872p-96f, 0x1.6b15d2p-99f, 0x1.e22b4ap-54f,
     0x1.fa2beap-72f, 0.0f, 0.0f, 0x1.736aap-48f, 0.0f, 0x1.41e2c6p-71f, 0.0f,
     0x1.489028p-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1488e6p-10f, 0.0f, 0.0f, 0.0f,
     0x1.bc9fecp-60f, 0x1.474842p-10f, 0x1.5c1f96p-96f, 0.0f, 0x1.a12e16p-99f, 0.0f,
     0x1.caf1fcp-30f, 0.0f, 0.0f, 0x1.1d240ap-17f, 0x1.3429ep-90f, 0x1.35e1d2p-42f,
     0x1.86f5b4p-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cd86acp-109f, 0x1.401386p-1f,
     0x1.f159a6p-78f, 0.0f, 0.0f, 0x1.d98a84p-64f, 0x1.2e2f0ep-6f, 0x1.537d3p-118f,
     0.0f, 0x1.70ee3p-34f, 0x1.956f54p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.482e2ap-100f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.29cfcp-7f, 0.0f, 0x1.003d54p-24f, 0.0f,
     0x1.f88f8ep-104f, 0x1.f85c18p-53f, 0x1.cd501cp-121f, 0x1.339898p-83f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.5c50aap-114f, 0.0f, 0x1.aa82e4p-115f, 0.0f,
     0x1.f99ae2p-11f, 0x1.de64d4p-59f, 0x1.90d1p-75f, 0x1.5b01cep-45f, 0x1.475edp-2f,
     0.0f, 0.0f, 0x1.14897ap-43f, 0.0f, 0.0f, 0.0f, 0x1.33fb94p-119f, 0x1.2e3f9cp-93f,
     0x1.a3a352p-85f, 0.0f, 0.0f, 0.0f, 0x1.3364dp-104f, 0.0f, 0x1.764bbcp-110f,
     0x1.25cc0ep-121f, 0.0f, 0x1.7d6046p-55f, 0.0f, 0.0f, 0x1.f7278cp-115f,
     0x1.6b6dccp-85f, 0.0f, 0.0f, 0.0f, 0x1.f27836p-102f, 0x1.13f83cp-103f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.0d99c8p-5f, 0.0f, 0x1.49597ap-80f, 0x1.e79aaap-94f,
     0x1.0b46a6p-27f, 0x1.987d7ep-2f, 0.0f
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
            ml_float4_t tmp3;
            int32_t tmp4;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            memcpy(&tmp1, ((ml_float4_t*)(external_bench_wrapper_input_table_arg1+ i)), 16);
            tmp2 = Sleef_finz_copysignf4_avx2128(tmp0, tmp1);
            memcpy(((ml_float4_t*)(external_bench_wrapper_output_table+ i)), &(tmp2), 16);
            tmp3 = local_acc + tmp2;
            local_acc = tmp3;
            tmp4 = i + INT32_C(4);
            i = tmp4;
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
    printf("Sleef_finz_copysignf4_avx2128 %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_copysignf4_avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
