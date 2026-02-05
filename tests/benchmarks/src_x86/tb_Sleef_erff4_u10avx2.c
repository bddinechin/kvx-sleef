/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_erff4_u10avx2128.c --function Sleef_erff4_u10avx2128 --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary32 --vector-size 4 \
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
     0.0f, 0.0f, 0.0f, 0x1.22d93ep-40f, 0.0f, 0x1.c3653cp-9f, 0.0f, 0.0f,
     0x1.0d2244p-19f, 0x1.5b41cp-24f, 0.0f, 0.0f, 0x1.13f76p-117f, 0x1.b70ffap-97f,
     0.0f, 0x1.1c0c52p-30f, 0x1.9d341p-84f, 0.0f, 0x1.e6c108p-104f, 0.0f, 0.0f, 0.0f,
     0x1.09797cp-73f, 0x1.c05cccp-32f, 0.0f, 0x1.3f606cp-2f, 0.0f, 0.0f, 0.0f,
     0x1.2a526p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f60792p-94f, 0x1.a7164ep-85f, 0.0f,
     0x1.7e743ep-72f, 0.0f, 0x1.1c3882p-43f, 0x1.ac9102p-77f, 0x1.606752p-26f, 0.0f,
     0.0f, 0.0f, 0x1.bb2082p-50f, 0x1.85562ep-80f, 0x1.649bbcp-5f, 0.0f,
     0x1.dfc1e8p-113f, 0.0f, 0x1.6e93dep-4f, 0x1.dcc3bep-20f, 0.0f, 0x1.85b71ap-93f,
     0x1.63c82ep-72f, 0x1.b69484p-68f, 0.0f, 0.0f, 0.0f, 0x1.335deap-7f,
     0x1.aed44ap-38f, 0x1.fbb38ep-70f, 0x1.269a8cp-12f, 0x1.9f453cp-108f,
     0x1.d7ecfap-49f, 0.0f, 0x1.1cc6f6p-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.67ee3ap-121f, 0x1.546ac4p-103f, 0x1.c3158ap-12f, 0x1.fbdc9ap-76f, 0x1p0f,
     0x1.bab9cp-55f, 0x1.c22fdcp-89f, 0x1.6d10d6p-110f, 0.0f, 0x1.28cafep-60f, 0.0f,
     0x1.d7726ep-116f, 0x1.e423dap-100f, 0.0f, 0x1.a641cap-32f, 0.0f, 0x1.93544p-78f,
     0.0f, 0.0f, 0x1.328f98p-90f, 0x1.df3f1cp-51f, 0.0f, 0x1.642ccep-115f, 0.0f,
     0x1.00c4ecp-17f, 0x1.3ba3cap-74f, 0x1.673464p-31f, 0x1.5b2558p-2f, 0.0f, 0.0f,
     0x1.f8f6b8p-37f, 0.0f, 0x1.533d46p-78f, 0.0f, 0.0f, 0x1.f10296p-94f, 0.0f, 0.0f,
     0x1.3619p-94f, 0.0f, 0.0f, 0x1.674da2p-64f, 0x1.347346p-101f, 0x1.6f05fap-103f,
     0x1.0d46aap-30f, 0.0f, 0x1.f74298p-33f, 0x1.a1ac6ap-87f, 0x1.493864p-2f, 0.0f,
     0x1.e3b656p-90f, 0.0f, 0.0f, 0.0f, 0x1.65a9d6p-122f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3200f4p-52f, 0x1.11cd04p-36f, 0.0f, 0x1.d112d2p-19f, 0x1.5989d2p-52f,
     0x1.c286c2p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.40c45cp-12f, 0.0f,
     0x1.215db6p-100f, 0x1.0b40dp-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7c5c4cp-85f, 0.0f, 0.0f, 0.0f, 0x1.d26e28p-11f, 0x1.8d647ap-70f, 0.0f, 0.0f,
     0.0f, 0x1.d4551ap-31f, 0.0f, 0x1.bdd86cp-7f, 0x1.d6f18p-116f, 0.0f,
     0x1.4e6288p-77f, 0.0f, 0x1.bac1c8p-21f, 0x1.64baaep-34f, 0x1.0c72b4p-106f, 0.0f,
     0.0f, 0x1.c3e5ecp-14f, 0x1.2cd3aap-120f, 0.0f, 0x1.056f82p-116f, 0x1.0bc0fcp-71f,
     0.0f, 0x1.eae5d2p-23f, 0x1.7dec24p-113f, 0.0f, 0.0f, 0x1.b2929ap-39f,
     0x1.140c32p-45f, 0x1.83a4dap-109f, 0x1.be1ea8p-47f, 0x1.04d628p-118f,
     0x1.2ac4aep-82f, 0.0f, 0x1.5d1abcp-36f, 0.0f, 0x1.5c8fc8p-39f, 0x1.d4c43cp-114f,
     0x1.caff0cp-3f, 0x1.1f6484p-126f, 0x1.abcbbcp-8f, 0.0f, 0x1.169d22p-59f, 0.0f,
     0.0f, 0x1.6a1688p-34f, 0.0f, 0.0f, 0.0f, 0x1.aca6fcp-93f, 0.0f, 0x1.2787ep-123f,
     0x1.43a6fep-66f, 0x1.f79acep-64f, 0x1.3cf912p-125f, 0x1.4349b8p-56f, 0.0f,
     0x1.ebb09cp-58f, 0.0f, 0x1.36294cp-94f, 0.0f, 0.0f, 0.0f, 0x1.2826d2p-101f, 0.0f,
     0x1.b0bc88p-111f, 0x1.0b345ep-99f, 0x1.a04e58p-1f, 0x1.91cb3p-1f, 0x1.cfeae6p-7f,
     0x1.93f524p-105f, 0x1.8a535p-14f, 0x1.6dd88p-33f, 0.0f, 0x1.c088dp-2f, 0.0f,
     0x1.4a5b0ap-115f, 0x1.127b5p-89f, 0.0f, 0x1.e1e39ep-8f, 0x1.a1239p-67f,
     0x1.240076p-36f, 0x1.63f32cp-113f, 0.0f, 0x1.a5d42ep-120f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.8b3562p-48f, 0x1.930ba6p-2f, 0x1.83e568p-7f, 0x1.6ac1c2p-76f,
     0x1.f9a646p-29f, 0x1.eeb2f4p-6f, 0.0f, 0x1.43cd5ap-89f, 0.0f, 0x1.8c2308p-69f,
     0x1.13f648p-74f, 0x1.6d3ccp-43f, 0.0f, 0.0f, 0x1.c074p-41f, 0.0f,
     0x1.7c35c8p-92f, 0x1.28861p-84f, 0x1.580a38p-79f, 0.0f, 0x1.b7c24ep-22f,
     0x1.48c7b8p-45f, 0x1.894bep-98f, 0x1.b35ec4p-77f, 0x1.342fc8p-16f, 0.0f, 0.0f,
     0x1.e9558ep-45f, 0x1.42aed2p-4f, 0.0f, 0.0f, 0x1.7c3236p-119f, 0.0f, 0.0f, 0.0f,
     0x1.17c138p-124f, 0.0f, 0.0f, 0x1.758c96p-49f, 0.0f, 0x1.43cd94p-70f,
     0x1.6064d2p-109f, 0x1.d1c332p-47f, 0.0f, 0x1.fc7bb4p-62f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.275cdap-43f, 0.0f, 0x1.74741cp-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d94c4ep-14f, 0.0f, 0x1.0c1d4p-16f, 0.0f, 0x1.39031ap-57f, 0.0f, 0.0f,
     0x1.a29bep-91f, 0x1.80420ap-59f, 0x1.527292p-32f, 0x1.e2139cp-94f,
     0x1.650fbp-88f, 0x1.25d568p-111f, 0.0f, 0x1.ab5d3ap-59f, 0.0f, 0x1.2c9fb6p-124f,
     0.0f, 0.0f, 0x1.16a92ep-34f, 0x1.29c69ap-24f, 0x1.3481b2p-115f, 0x1.266d48p-89f,
     0x1.54df02p-61f, 0.0f, 0.0f, 0.0f, 0x1.c40b4p-73f, 0x1.825d24p-113f, 0.0f,
     0x1.7fc9b6p-32f, 0x1.0e42p-37f, 0.0f, 0.0f, 0x1.3e43cap-112f, 0.0f, 0.0f, 0.0f,
     0x1.c0e1c6p-115f, 0x1.2596f6p-78f, 0x1.5e845p-100f, 0.0f, 0.0f, 0x1.fce094p-123f,
     0x1.9fba62p-13f, 0.0f, 0.0f, 0x1.9d1c9cp-38f, 0.0f, 0x1.6a36d6p-115f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2d72c2p-75f, 0.0f, 0x1.d856d2p-27f,
     0x1.b0c42cp-84f, 0x1.b39eccp-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0394a6p-113f, 0.0f,
     0x1.85f512p-85f, 0.0f, 0.0f, 0.0f, 0x1.a0ca3p-31f, 0.0f, 0.0f, 0x1.5a8d22p-62f,
     0.0f, 0x1.3127c2p-20f, 0x1.ac9836p-86f, 0x1.c1c9acp-65f, 0x1.9d2974p-42f,
     0x1.1ad38ep-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2e016p-20f,
     0x1.5beb74p-34f, 0.0f, 0x1.0e9d7p-43f, 0x1.e7b09p-97f, 0.0f, 0x1.a6dcb2p-6f,
     0x1.cd08f6p-77f, 0.0f, 0x1.e3dd82p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d75c96p-80f, 0x1.28096ap-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.db634ep-122f,
     0.0f, 0x1.c89724p-123f, 0.0f, 0x1.b7918cp-8f, 0.0f, 0x1.8df0cep-1f, 0.0f, 0.0f,
     0x1.d21da2p-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b50c8p-17f,
     0x1.9a0254p-58f, 0.0f, 0.0f, 0x1.981c58p-65f, 0.0f, 0.0f, 0x1.949f3cp-17f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.157be8p-85f, 0.0f,
     0x1.069e2ap-52f, 0x1.b9892cp-111f, 0x1.d8f50ap-57f, 0x1.3d37fap-23f,
     0x1.5e1abp-99f, 0x1.1906d6p-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c71894p-113f,
     0x1.4fd58ep-78f, 0.0f, 0.0f, 0.0f, 0x1.292caep-32f, 0.0f, 0x1.1a9058p-114f, 0.0f,
     0.0f, 0x1.8f3e84p-1f, 0x1.f2d918p-114f, 0x1.d48c98p-54f, 0.0f, 0.0f,
     0x1.f4149p-67f, 0x1.162abcp-41f, 0.0f, 0x1.4bab72p-84f, 0x1.7bab36p-52f,
     0x1.303f72p-34f, 0.0f, 0x1.b0a116p-56f, 0x1.43433cp-33f, 0.0f, 0.0f,
     0x1.743fb6p-59f, 0.0f, 0x1.e2d672p-119f, 0x1.29dd52p-107f, 0x1.2899b8p-94f,
     0x1.203386p-8f, 0x1.047014p-4f, 0.0f, 0x1.5458ap-91f, 0.0f, 0.0f,
     0x1.ae38ccp-111f, 0.0f, 0.0f, 0x1.4eee4p-90f, 0.0f, 0x1.fcb64ap-23f,
     0x1.7cafcep-11f, 0.0f, 0x1.cae972p-90f, 0x1.4dcc64p-5f, 0x1.69b862p-25f, 0.0f,
     0.0f, 0x1.0b429ap-70f, 0x1.a2361p-24f, 0x1.008404p-94f, 0.0f, 0.0f, 0.0f,
     0x1.32c9bap-107f, 0.0f, 0x1.127bcep-88f, 0.0f, 0x1.494404p-38f, 0.0f,
     0x1.32458cp-14f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.7defcep-40f, 0x1.087912p-69f,
     0x1.10765ep-1f, 0x1.ef60a6p-86f, 0.0f, 0.0f, 0.0f, 0x1.32a96ap-82f,
     0x1.484218p-7f, 0.0f, 0x1.fff82ep-93f, 0x1.bc73e4p-19f, 0x1.31d588p-14f, 0.0f,
     0.0f, 0x1.d0e20cp-78f, 0.0f, 0x1.99489ep-86f, 0.0f, 0x1.eabacp-47f,
     0x1.390212p-42f, 0x1.c6b3d6p-68f, 0x1.9e2d6ap-117f, 0x1.9ab55cp-23f,
     0x1.1453cep-66f, 0.0f, 0x1.a60fd6p-111f, 0x1.2ace9cp-35f, 0x1.4db14cp-29f,
     0x1.ff6044p-20f, 0x1.a5d592p-116f, 0x1.21a88ep-98f, 0x1.2b5df2p-41f,
     0x1.443c46p-109f, 0x1.1234cap-34f, 0.0f, 0x1.8e4072p-116f, 0.0f,
     0x1.4cb606p-102f, 0x1.0d2d32p-125f, 0x1.96fbap-108f, 0.0f, 0x1.b4b4bap-34f,
     0x1.340adp-40f, 0x1.7b2fep-67f, 0.0f, 0x1.62f754p-63f, 0x1.83a7eep-109f, 0.0f,
     0.0f, 0.0f, 0x1.83266p-89f, 0x1.48efb6p-8f, 0x1.61b3f6p-59f, 0.0f, 0.0f, 0.0f,
     0x1.f08242p-22f, 0x1.00e13cp-3f, 0x1.78029p-37f, 0x1.e22c6ep-8f,
     0x1.6076fcp-101f, 0x1.392796p-31f, 0.0f, 0x1.af3fb2p-26f, 0x1.688fa4p-107f,
     0x1.693b42p-119f, 0.0f, 0.0f, 0x1.2407f2p-17f, 0.0f, 0.0f, 0.0f, 0x1.c2822p-34f,
     0.0f, 0x1.1d398p-105f, 0.0f, 0.0f, 0.0f, 0x1.5d5c6p-15f, 0x1.32ae14p-36f, 0.0f,
     0x1.f75ae6p-15f, 0.0f, 0x1.052436p-28f, 0x1.41a48ap-62f, 0x1.d29f68p-62f,
     0x1.a336a8p-98f, 0x1.1f4b1ep-69f, 0.0f, 0.0f, 0.0f, 0x1.8a5c88p-84f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d563d4p-3f, 0.0f, 0x1.e021ep-51f, 0.0f,
     0x1.5c35c6p-123f, 0x1.a1241ep-74f, 0.0f, 0.0f, 0.0f, 0x1.aa206ap-83f,
     0x1.81b46ep-3f, 0.0f, 0.0f, 0x1.f3138cp-116f, 0.0f, 0x1.de117ap-10f,
     0x1.fde656p-17f, 0x1.cb3168p-115f, 0.0f, 0.0f, 0.0f, 0x1.dcbbc4p-108f,
     0x1.447ceep-43f, 0.0f, 0.0f, 0x1.1dcbp-57f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2147fep-44f, 0x1.a8df24p-116f, 0.0f, 0.0f, 0x1.cbb134p-105f, 0.0f, 0.0f,
     0x1.9cf0a6p-75f, 0x1.b8d69ap-26f, 0.0f, 0x1.fe73acp-4f, 0x1.3c074ap-112f,
     0x1.8776e8p-7f, 0x1.4965fep-39f, 0.0f, 0.0f, 0x1.9ad76p-12f, 0.0f, 0.0f,
     0x1.99ce2p-86f, 0x1.fcfa3ap-19f, 0.0f, 0.0f, 0.0f, 0x1.76e892p-74f, 0.0f,
     0x1.4bfba4p-113f, 0x1.bb465p-10f, 0.0f, 0.0f, 0.0f, 0x1.2157p-105f, 0.0f,
     0x1.1a37bep-23f, 0.0f, 0x1.fd1ab6p-16f, 0x1.c18e3cp-37f, 0.0f, 0x1.fd855p-89f,
     0.0f, 0.0f, 0.0f, 0x1.b9004ap-11f, 0x1.560c4ep-27f, 0.0f, 0x1.6f3906p-87f,
     0x1.4c7c58p-46f, 0x1.5e1284p-95f, 0.0f, 0x1.c58c28p-102f, 0x1.bb74fap-106f,
     0x1.e104p-83f, 0.0f, 0x1.4dc4bcp-61f, 0x1.52b0ep-80f, 0.0f, 0x1.f54f82p-18f,
     0x1.841e5cp-32f, 0x1.589e0ep-4f, 0x1.98518ap-45f, 0x1.1af6bp-17f,
     0x1.5b6d08p-93f, 0x1.64b138p-3f, 0.0f, 0x1.a87c44p-114f, 0x1.63862p-101f,
     0x1.1d890ap-73f, 0.0f, 0x1.6b3ce4p-97f, 0x1.bc5934p-57f, 0.0f, 0.0f,
     0x1.b1cef8p-75f, 0x1.1e1a32p-24f, 0x1.086808p-19f, 0x1.14ef0ap-106f,
     0x1.85c05ap-89f, 0.0f, 0x1.a63114p-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5f2b6ap-15f, 0x1.c58eb6p-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5cfe82p-89f, 0.0f,
     0x1.f724dap-32f, 0x1.04eb06p-19f, 0x1.0cd9cep-104f, 0x1.34f7aep-78f,
     0x1.678668p-30f, 0x1.45f21ep-19f, 0.0f, 0.0f, 0x1.2f76b6p-54f, 0.0f,
     0x1.caed92p-46f, 0x1.2f6476p-10f, 0x1.527318p-123f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.61f9c4p-35f, 0.0f, 0x1.3b41acp-10f, 0x1.ed031cp-98f, 0x1.6c193ap-42f, 0.0f,
     0.0f, 0.0f, 0x1.e8a45p-91f, 0x1.a8187ap-109f, 0.0f, 0x1.9ab112p-46f,
     0x1.24f88p-75f, 0x1.f54d96p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5fc7d8p-124f, 0.0f,
     0.0f, 0.0f, 0x1.add05p-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a31358p-38f, 0.0f, 0.0f,
     0.0f, 0x1.687a52p-53f, 0.0f, 0x1.c39e2cp-115f, 0x1.e41422p-81f, 0.0f, 0.0f, 0.0f,
     0x1.c0a74ap-126f, 0.0f, 0x1.007944p-24f, 0.0f, 0.0f, 0x1.5d6d5ep-68f, 0.0f,
     0x1.7453dcp-84f, 0x1.8240bcp-114f, 0.0f, 0x1.d0c6fap-35f, 0x1.6a6912p-101f,
     0x1.e71866p-37f, 0.0f, 0x1.6333f8p-86f, 0.0f, 0x1.1f3576p-41f, 0.0f, 0.0f, 0.0f,
     0x1.3afc26p-108f, 0.0f, 0x1.c99e4cp-47f, 0.0f, 0x1.d5f934p-110f, 0x1.3d78fp-48f,
     0.0f, 0x1.d09e8ap-25f, 0.0f, 0x1.85ae68p-60f, 0x1.cb8ffcp-39f, 0.0f,
     0x1.baaaap-121f, 0x1.0846cap-31f, 0x1.ad1c4cp-9f, 0x1.220af2p-50f,
     0x1.b3d892p-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e4652p-81f, 0x1.5dbdp-75f,
     0x1.13eaf6p-100f, 0.0f, 0x1.df3faep-103f, 0.0f, 0x1.ad7d6ap-25f,
     0x1.f87ef8p-115f, 0.0f, 0x1.8dd994p-62f, 0x1.0315e4p-22f, 0x1.b48dc4p-30f, 0.0f,
     0x1.0ac566p-16f, 0.0f, 0x1.4ef0eep-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.eef5acp-102f, 0x1.df5da8p-74f, 0x1.659398p-43f, 0.0f, 0x1.21809ep-89f,
     0x1.73d172p-80f, 0x1.80e52cp-47f, 0.0f, 0x1.da55eap-117f, 0.0f, 0x1.6b7446p-104f,
     0.0f, 0x1.488dc2p-13f, 0x1.7cacc8p-54f, 0x1.68b07ap-112f, 0.0f, 0x1.5f6212p-6f,
     0x1.1cb644p-80f, 0x1.5f9298p-32f, 0x1.83e918p-107f, 0x1.503d26p-64f, 0.0f,
     0x1.f10d38p-122f, 0.0f, 0.0f, 0.0f, 0x1.7de39ep-97f, 0x1.16bd28p-96f, 0.0f,
     0x1.bc9a6ep-76f, 0.0f, 0x1.f23298p-4f, 0.0f, 0x1.a3a9dap-13f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.bc4446p-85f, 0x1.4101fp-35f, 0x1.811826p-78f, 0x1.17da8p-110f,
     0x1.a65fcp-7f, 0.0f, 0.0f, 0x1.5bcafp-29f, 0x1.586b7ep-51f, 0x1.637672p-89f,
     0.0f, 0.0f, 0x1.53566p-86f, 0x1.bd7166p-92f, 0x1.968c92p-119f, 0.0f,
     0x1.8621ap-19f, 0.0f, 0x1.703a7ap-80f, 0x1.b580d6p-61f, 0x1.a2defap-61f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.db4958p-91f, 0.0f, 0.0f, 0.0f, 0x1.08ee3p-87f,
     0x1.3a668p-88f, 0x1.c7f886p-119f, 0x1.f82aecp-29f, 0x1.93db66p-101f,
     0x1.d785d6p-126f, 0x1.b38d12p-96f, 0.0f, 0x1.c8bb08p-120f, 0x1.93d5a6p-78f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f61a58p-114f, 0x1.46a892p-19f, 0.0f, 0.0f,
     0x1.4db846p-86f, 0.0f, 0.0f, 0x1.c0e66ep-45f, 0.0f, 0x1.f7b214p-81f,
     0x1.115fc4p-54f, 0x1.1b7cdp-112f, 0.0f, 0x1.e16646p-72f, 0.0f, 0x1.5de914p-61f,
     0.0f, 0x1.fca1b6p-69f, 0x1.4792dep-101f, 0x1.e40a74p-97f, 0.0f, 0x1.61a262p-40f,
     0x1.2427c2p-42f, 0.0f, 0.0f, 0x1.9a66f4p-120f, 0x1.3d6ba8p-66f, 0.0f,
     0x1.2d3d7cp-52f, 0.0f, 0x1.e1cd1p-123f, 0.0f, 0.0f, 0x1.e2715p-119f, 0.0f,
     0x1.1b35e6p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a058eep-67f,
     0x1.794b8cp-60f, 0x1.26a3fap-61f, 0x1.37836p-91f, 0x1.3cc676p-26f,
     0x1.475276p-62f, 0.0f, 0x1.6efeb4p-101f, 0.0f
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
            tmp1 = Sleef_erff4_u10avx2128(tmp0);
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
    printf("Sleef_erff4_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_erff4_u10avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
