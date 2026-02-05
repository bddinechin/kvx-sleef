/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_atan2f4_u10avx2128.c --function \
 *     Sleef_finz_atan2f4_u10avx2128 --arity 2 --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0x1.746fd6p-122f, 0x1.7628d4p-105f, 0x1.8f1e9ep-68f, 0.0f,
     0x1.5c464ep-43f, 0x1.944b5ap-48f, 0x1.a9973p-40f, 0.0f, 0x1.df7cfcp-65f, 0.0f,
     0x1.b7f02p-51f, 0x1.bc4dd2p-29f, 0x1.cb330ap-45f, 0.0f, 0.0f, 0x1.895982p-48f,
     0x1.11ea2ep-120f, 0x1.512f1ep-12f, 0x1.6b301ap-21f, 0x1.47efdp-115f,
     0x1.3a37b8p-54f, 0x1.b057eep-11f, 0x1.5e5e42p-78f, 0.0f, 0x1.c275ecp-122f,
     0x1.760eccp-99f, 0.0f, 0.0f, 0x1.1781bap-49f, 0.0f, 0.0f, 0.0f, 0x1.e39024p-106f,
     0.0f, 0x1.13db06p-67f, 0x1.d51102p-76f, 0x1.51eac6p-1f, 0x1.62b22ap-77f, 0.0f,
     0.0f, 0.0f, 0x1.4fd83p-91f, 0x1.9571dcp-94f, 0.0f, 0x1.006da2p-52f, 0.0f,
     0x1.e1809ap-40f, 0x1.c1a7bcp-91f, 0x1.a9eaeap-31f, 0x1.90aa8ep-19f, 0.0f, 0.0f,
     0x1.105b28p-6f, 0x1.0400c6p-120f, 0x1.f792cp-93f, 0x1.fdedf8p-28f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.5cd78ap-10f, 0.0f, 0x1.88efdp-90f, 0x1.b138eep-96f, 0.0f,
     0x1.d1a264p-75f, 0.0f, 0x1.b9cf78p-91f, 0.0f, 0.0f, 0.0f, 0x1.bcfaaap-7f, 0.0f,
     0.0f, 0x1.55a686p-126f, 0x1.7ec438p-73f, 0x1.231848p-47f, 0x1.4eea46p-35f,
     0x1.fcf74ep-45f, 0x1.fb883ep-79f, 0x1.024d7p-88f, 0.0f, 0x1.1f79b6p-54f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9062acp-38f, 0.0f, 0x1.c29298p-4f, 0x1.a35beap-21f,
     0x1.bc9062p-87f, 0x1.59ee08p-40f, 0x1.bc8b2ap-50f, 0.0f, 0.0f, 0x1.0aa6c4p-96f,
     0x1.624c8ep-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e4f276p-121f,
     0x1.1abcb4p-45f, 0x1.3be4dep-39f, 0x1.0cd4fep-115f, 0.0f, 0.0f, 0x1.f0eaa8p-71f,
     0.0f, 0x1.40818ap-121f, 0.0f, 0.0f, 0x1.f780cap-69f, 0x1.79cd64p-10f, 0.0f,
     0x1.dbde82p-111f, 0.0f, 0.0f, 0.0f, 0x1.931e1ap-69f, 0x1.a5b8fap-115f,
     0x1.360f82p-88f, 0.0f, 0x1.fdef14p-9f, 0x1.7a4d6p-18f, 0x1.cc06c6p-110f,
     0x1.2719ep-79f, 0.0f, 0.0f, 0.0f, 0x1.28d18p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.eca38cp-19f, 0.0f, 0x1.628c4cp-27f, 0x1.0b69ccp-73f, 0x1.e8beeap-111f,
     0x1.f38d44p-83f, 0x1.e82e02p-34f, 0x1.ad0df2p-1f, 0x1.b13662p-65f,
     0x1.ad9a52p-50f, 0x1.32a71ep-75f, 0.0f, 0.0f, 0x1.f3416ap-61f, 0.0f,
     0x1.6dfed4p-106f, 0.0f, 0x1.a7bab8p-18f, 0.0f, 0.0f, 0.0f, 0x1.8c787ep-66f,
     0x1.04cb68p-103f, 0.0f, 0.0f, 0x1.61f204p-83f, 0.0f, 0x1.b938e4p-118f, 0.0f,
     0.0f, 0x1.91f21ep-11f, 0x1.78b4f2p-115f, 0.0f, 0x1.2865e4p-95f, 0x1.7a3c04p-28f,
     0.0f, 0x1.651d3ap-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2eb58ap-97f, 0x1.f8bf0cp-44f, 0.0f, 0.0f, 0.0f, 0x1.27086cp-114f,
     0x1.d6c8f6p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1347b8p-114f, 0x1.88c9c6p-126f,
     0.0f, 0x1.969454p-20f, 0.0f, 0.0f, 0x1.b997cp-20f, 0.0f, 0x1.a060e4p-122f, 0.0f,
     0x1.78347cp-70f, 0x1.27c8ap-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0b3f22p-25f, 0.0f,
     0.0f, 0x1.30df1ap-6f, 0x1.940bcp-27f, 0.0f, 0x1.f504d8p-33f, 0.0f,
     0x1.004e8p-101f, 0x1.eec0cap-50f, 0x1.18105cp-14f, 0.0f, 0x1.d17ae2p-126f, 0.0f,
     0.0f, 0x1.f8853ep-47f, 0x1.78933ap-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.aa0254p-40f, 0.0f, 0x1.d9dc5p-26f, 0x1.47e678p-55f, 0.0f, 0x1.689dep-28f,
     0x1.8a09e2p-69f, 0x1.26de42p-31f, 0.0f, 0.0f, 0x1.db3e58p-28f, 0.0f,
     0x1.bb2968p-34f, 0x1.02e4f2p-90f, 0x1.397d9p-96f, 0x1.7ff4p-68f, 0.0f,
     0x1.299324p-21f, 0x1.a7831p-16f, 0.0f, 0x1.962fdap-70f, 0.0f, 0x1.e7d328p-94f,
     0x1.0b2f82p-125f, 0x1.cfd5fap-22f, 0.0f, 0x1.fe16fcp-26f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d825a2p-47f, 0x1.93990cp-88f, 0x1.7158b4p-66f,
     0.0f, 0.0f, 0x1.e37986p-4f, 0x1.269782p-75f, 0x1.4c04a8p-45f, 0x1.6e7106p-70f,
     0x1.c841b4p-2f, 0.0f, 0x1.73a99ep-45f, 0.0f, 0x1.96fddep-76f, 0x1.2576fep-16f,
     0x1.8e9398p-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7ae4e8p-29f, 0x1.1c3bd8p-13f, 0.0f,
     0x1.ff02ecp-67f, 0x1.ecd6a2p-86f, 0x1.5f6fdcp-64f, 0x1.ddd656p-16f,
     0x1.d28bfep-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e4052p-5f, 0x1.e6dce2p-66f, 0.0f,
     0.0f, 0x1.139964p-106f, 0.0f, 0.0f, 0x1.be6c02p-86f, 0x1.9b0e82p-118f,
     0x1.c7a29cp-102f, 0x1.90779p-50f, 0.0f, 0.0f, 0.0f, 0x1.e9ab36p-28f,
     0x1.b07d66p-90f, 0.0f, 0x1.b02c4ep-120f, 0.0f, 0x1.ca9398p-3f, 0.0f,
     0x1.e9b2cp-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0bcde2p-12f, 0.0f, 0.0f,
     0x1.cb5abp-100f, 0.0f, 0x1.a8bf8p-10f, 0x1.c0ebe8p-35f, 0.0f, 0x1.8ba252p-19f,
     0.0f, 0.0f, 0x1.c727d4p-63f, 0x1.ebf75cp-56f, 0x1.b077ecp-32f, 0x1.7d00b8p-48f,
     0.0f, 0.0f, 0x1.1b9188p-60f, 0x1.e52aacp-107f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a8b1dep-122f, 0.0f, 0x1.670df6p-102f, 0.0f, 0.0f, 0.0f, 0x1.815f96p-88f,
     0.0f, 0.0f, 0.0f, 0x1.5f63fcp-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.be22b6p-114f, 0.0f, 0x1.7f26p-79f, 0x1.3c5104p-46f, 0.0f, 0x1.2b9728p-62f,
     0x1.f8bb58p-15f, 0x1.1c4ea6p-120f, 0x1.0dee9ap-25f, 0.0f, 0x1.a1492p-11f,
     0x1.fbf7cep-16f, 0x1.1b17c4p-113f, 0x1.0d9cacp-46f, 0.0f, 0x1.52d896p-109f,
     0x1.b90594p-82f, 0.0f, 0x1.29b5d6p-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b0f17ap-16f, 0.0f, 0.0f, 0.0f, 0x1.0acd22p-29f, 0.0f, 0x1.049df4p-77f,
     0x1.9a9ebp-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c5dc92p-89f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.7448e4p-98f, 0.0f, 0x1.3204bep-33f, 0x1.01e32cp-37f,
     0x1.6da29ep-5f, 0x1.004834p-14f, 0x1.ce5186p-69f, 0x1.fcc814p-67f,
     0x1.3ace62p-83f, 0.0f, 0x1.f2c2bep-102f, 0x1.dd7418p-60f, 0.0f, 0.0f,
     0x1.6454bep-55f, 0x1.5ad06ep-47f, 0.0f, 0x1.b19d04p-93f, 0x1.286b14p-93f, 0.0f,
     0x1.d2fedcp-50f, 0.0f, 0.0f, 0x1.281d8p-36f, 0.0f, 0x1.fbe948p-123f,
     0x1.10e412p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ec3bfap-65f, 0.0f, 0.0f,
     0x1.b34ab6p-11f, 0x1.6489eap-77f, 0x1.6a5c0ep-42f, 0x1.619afp-55f, 0.0f,
     0x1.59ee28p-43f, 0.0f, 0x1.3c5816p-17f, 0.0f, 0.0f, 0x1.ef3a42p-27f, 0.0f, 0.0f,
     0.0f, 0x1.b20fd6p-86f, 0x1.ff665ap-113f, 0.0f, 0x1.6afa24p-121f, 0x1.10fd1p-61f,
     0x1.fb5a74p-73f, 0.0f, 0x1.fbe3d2p-57f, 0x1.46f0f4p-46f, 0x1.8bdad2p-85f,
     0x1.631a9ap-17f, 0.0f, 0x1.3319ap-117f, 0x1.4b8a1p-66f, 0x1.df5c44p-80f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.6f3ffp-113f, 0.0f, 0.0f, 0.0f, 0x1.da85d8p-82f, 0.0f,
     0x1.e7a4d6p-80f, 0.0f, 0.0f, 0.0f, 0x1.f953aap-109f, 0.0f, 0.0f, 0x1.b51c38p-30f,
     0x1.8ee9ap-21f, 0.0f, 0.0f, 0x1.d3d00cp-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e841f2p-114f, 0.0f, 0.0f, 0x1.5b5886p-40f, 0.0f, 0x1.db5bf8p-60f, 0.0f, 0.0f,
     0.0f, 0x1.cbda7p-20f, 0.0f, 0x1p0f, 0.0f, 0x1.b897ep-103f, 0x1.2787dep-123f,
     0x1.e28302p-102f, 0x1.3b833ap-49f, 0.0f, 0.0f, 0.0f, 0x1.4121d4p-53f,
     0x1.b166cap-113f, 0.0f, 0x1.c8b0eep-119f, 0x1.7ac3ccp-63f, 0x1.767c24p-50f,
     0x1.f8eda2p-63f, 0x1.e94f34p-36f, 0x1.32fa98p-67f, 0x1.400b52p-48f,
     0x1.a4ed12p-63f, 0x1.6fb33ep-42f, 0x1.362076p-113f, 0x1.60c852p-72f,
     0x1.02590cp-98f, 0x1.26cecp-11f, 0x1.52d3ep-34f, 0x1.458f96p-48f, 0x1.996c2p-56f,
     0x1.70e85ep-79f, 0.0f, 0x1.9516c2p-31f, 0.0f, 0x1.96c592p-86f, 0.0f, 0.0f,
     0x1.260afp-21f, 0.0f, 0.0f, 0.0f, 0x1.f329b6p-2f, 0x1.b67be6p-13f, 0.0f,
     0x1.1b3aaep-54f, 0x1.06de56p-94f, 0x1.3e9c6p-31f, 0.0f, 0.0f, 0.0f,
     0x1.3747ap-31f, 0x1.cc07bep-5f, 0x1.d66024p-82f, 0x1.7a6562p-24f,
     0x1.aad898p-116f, 0x1.af87fcp-48f, 0x1.8e3232p-84f, 0.0f, 0x1.5126b6p-81f, 0.0f,
     0x1.c54168p-35f, 0x1.6b22c4p-8f, 0.0f, 0.0f, 0x1.b81f52p-80f, 0.0f,
     0x1.89c9f8p-19f, 0.0f, 0.0f, 0x1.fa94bep-12f, 0x1.6d31cep-71f, 0x1.1fc2ep-122f,
     0x1.2643cap-12f, 0x1.a84b98p-86f, 0.0f, 0.0f, 0x1.41d6d6p-87f, 0x1.a3875p-32f,
     0.0f, 0.0f, 0.0f, 0x1.6ddc3ap-65f, 0x1.baa31ap-20f, 0x1.d26966p-15f,
     0x1.43341ep-1f, 0x1.871e28p-106f, 0.0f, 0x1.8ddd22p-113f, 0x1.dfcb7ep-126f,
     0x1.bafa86p-61f, 0.0f, 0x1.5ecd32p-61f, 0.0f, 0x1.18674cp-105f, 0.0f, 0.0f,
     0x1.2b11a4p-122f, 0x1.da6a52p-116f, 0x1.83880ap-118f, 0x1.d144e8p-11f,
     0x1.727a8cp-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.651962p-26f, 0x1.43dceep-23f,
     0x1.5ba974p-30f, 0.0f, 0x1.bf1bc2p-102f, 0.0f, 0.0f, 0.0f, 0x1.8ec54ep-119f,
     0x1.b7f498p-99f, 0.0f, 0x1.d8a8f2p-94f, 0x1.fed904p-26f, 0.0f, 0x1.4d5e26p-93f,
     0.0f, 0.0f, 0x1.63533ep-84f, 0x1.9c24c8p-37f, 0.0f, 0.0f, 0x1.a499cp-15f,
     0x1.ba6a42p-90f, 0.0f, 0.0f, 0x1.9fc4cp-34f, 0.0f, 0.0f, 0.0f, 0x1.feddeap-115f,
     0x1.63484ap-96f, 0x1.7929d8p-114f, 0x1.e27af8p-115f, 0x1.571164p-125f,
     0x1.60987cp-89f, 0x1.e46338p-17f, 0x1.3d1b4p-18f, 0.0f, 0.0f, 0x1.9768f8p-119f,
     0x1.2e23d4p-88f, 0x1.9fe584p-1f, 0.0f, 0.0f, 0x1.4df688p-105f, 0x1.20540ap-36f,
     0.0f, 0.0f, 0.0f, 0x1.426b98p-4f, 0x1.9a5c96p-40f, 0x1.39174ap-29f, 0.0f, 0.0f,
     0x1.68423cp-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7ab972p-60f, 0.0f,
     0x1.4d3e96p-84f, 0x1.b75ebp-87f, 0.0f, 0.0f, 0.0f, 0x1.bfcf52p-106f,
     0x1.f4be42p-16f, 0x1.b6b3fep-38f, 0x1.295304p-49f, 0x1.423542p-35f,
     0x1.8de94ap-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.163902p-24f, 0x1.f1495p-96f,
     0.0f, 0.0f, 0x1.6dc5ap-93f, 0.0f, 0x1.4bf5b6p-43f, 0x1.a9ebcep-84f, 0.0f, 0.0f,
     0x1.452c94p-60f, 0x1.93fa74p-99f, 0x1.8e4a7ap-90f, 0.0f, 0.0f, 0x1.3a6d88p-71f,
     0.0f, 0.0f, 0x1.61c666p-36f, 0x1.3467dep-112f, 0x1.022e28p-69f, 0.0f,
     0x1.221262p-10f, 0x1.a981fp-84f, 0x1.64218ep-33f, 0x1.2200c8p-104f, 0.0f,
     0x1.d3b51ep-20f, 0.0f, 0x1.82ad3p-7f, 0x1.4fb676p-44f, 0.0f, 0x1.f82616p-16f,
     0.0f, 0x1.6c72ep-53f, 0x1.c99a0ep-11f, 0x1.02a15ep-80f, 0.0f, 0.0f,
     0x1.eaeab8p-53f, 0x1.fd8174p-36f, 0.0f, 0.0f, 0x1.e27a4ep-67f, 0.0f,
     0x1.9185ap-117f, 0x1.90f2fcp-12f, 0.0f, 0x1.33b01p-97f, 0.0f, 0x1.e1f2e6p-71f,
     0x1.c3766ap-86f, 0.0f, 0.0f, 0x1.da797cp-122f, 0x1.061c2cp-79f, 0x1.1039c6p-113f,
     0.0f, 0x1.e6fcap-54f, 0.0f, 0x1.9c0fp-24f, 0x1.d8826ep-124f, 0.0f,
     0x1.c98682p-88f, 0.0f, 0.0f, 0x1.2c6de2p-120f, 0x1.e9c664p-19f, 0x1.423a1cp-23f,
     0x1.9a2e64p-63f, 0.0f, 0.0f, 0.0f, 0x1.183b9cp-23f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3e1b8ap-90f, 0x1.52f69p-31f, 0.0f, 0x1.7087ap-112f, 0.0f, 0x1.9343b4p-23f,
     0.0f, 0.0f, 0x1.3abd7cp-4f, 0.0f, 0x1.492d0ep-4f, 0x1.b73668p-40f,
     0x1.a8992ap-12f, 0.0f, 0.0f, 0.0f, 0x1.c9bfa2p-78f, 0x1.589442p-34f,
     0x1.083c6cp-113f, 0.0f, 0.0f, 0x1.1f0fd8p-39f, 0.0f, 0.0f, 0x1.c8107cp-31f,
     0x1.b57214p-73f, 0.0f, 0x1.bfb692p-25f, 0.0f, 0x1.a9cedap-88f, 0.0f,
     0x1.6f0584p-71f, 0x1.554d96p-44f, 0.0f, 0.0f, 0x1.1677fep-51f, 0x1.f75decp-39f,
     0.0f, 0.0f, 0x1.e431e2p-15f, 0x1.1692dcp-7f, 0.0f, 0x1.98d4p-67f, 0x1.ec4cdp-90f,
     0x1.4152f8p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f01a38p-126f, 0x1.d96474p-66f,
     0x1.f44d7p-32f, 0x1.3b1a1ep-99f, 0x1.5f0dbap-59f, 0.0f, 0.0f, 0.0f,
     0x1.c511f6p-60f, 0x1.35571ep-72f, 0x1.e05db4p-113f, 0.0f, 0x1.ce1c9p-107f,
     0x1.d65ecep-100f, 0x1.b6ce5p-56f, 0x1.d5f602p-76f, 0x1.0fac7ep-72f,
     0x1.b1be26p-2f, 0.0f, 0x1.8f786ap-107f, 0x1.2ec7dep-23f, 0x1.b8e244p-36f,
     0x1.a35844p-19f, 0.0f, 0.0f, 0.0f, 0x1.bad4c6p-72f, 0x1.6fa7aep-40f,
     0x1.04422ap-63f, 0.0f, 0.0f, 0.0f, 0x1.2ac44cp-8f, 0x1.2510d8p-23f, 0.0f,
     0x1.735b2p-66f, 0x1.ce4202p-89f, 0x1.5180f2p-16f, 0.0f, 0x1.751cd4p-116f,
     0x1.7e734ep-11f, 0x1.622d7ep-2f, 0x1.ce808ep-75f, 0x1.74db4cp-32f,
     0x1.9274bcp-114f, 0x1.bbc7b2p-47f, 0x1.180c08p-124f, 0x1.1e4ep-38f,
     0x1.85bb52p-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5a62eep-23f, 0.0f, 0.0f,
     0x1.753354p-51f, 0x1.a5fc4p-57f, 0.0f, 0x1.1a513cp-80f, 0.0f, 0x1.240cecp-69f,
     0x1.e3bbe2p-16f, 0.0f, 0.0f, 0.0f, 0x1.2405acp-71f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5eaae6p-48f, 0x1.76d602p-11f, 0x1.a04b3cp-24f, 0x1.dfb13ep-16f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.15eb0cp-61f, 0x1.027f9cp-120f, 0x1.cf2182p-7f, 0.0f,
     0.0f, 0x1.d49864p-3f, 0x1.95b60ep-75f, 0x1.f6e66p-122f, 0.0f, 0x1.fc4c14p-68f,
     0x1.88a06cp-43f, 0.0f, 0x1.e36c86p-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8d8b76p-50f,
     0.0f, 0.0f, 0.0f, 0x1.09664p-67f, 0.0f, 0x1.c2126cp-92f, 0x1.e015b4p-125f,
     0x1.173ecp-54f, 0.0f, 0x1.6203f8p-4f, 0x1.a14018p-105f, 0.0f, 0.0f,
     0x1.2459ecp-78f, 0.0f, 0x1.47254cp-120f, 0.0f, 0x1.eaf284p-82f, 0x1.fd4f9cp-93f,
     0.0f, 0x1.bf41ap-107f, 0x1.bc5b32p-73f, 0x1.01b32ep-25f, 0.0f, 0x1.92d92ep-17f,
     0x1.b46d16p-24f, 0.0f, 0x1.174f58p-64f, 0.0f, 0.0f, 0.0f, 0x1.73f6acp-39f, 0.0f,
     0x1.2e3f3ap-90f, 0x1.967adcp-54f, 0.0f, 0x1.efebe2p-71f, 0x1.506c64p-79f,
     0x1.520e44p-17f, 0x1.ca9e7cp-49f, 0x1.157dc2p-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.176fd8p-45f, 0x1.58076cp-83f, 0x1.2132dap-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.4a67ecp-49f, 0x1.1b6dd2p-52f, 0.0f, 0x1.083a3ep-24f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.170224p-86f, 0.0f, 0x1.c7a2ep-40f, 0.0f, 0x1.337682p-56f,
     0.0f, 0.0f, 0x1.7fe7c6p-124f, 0x1.d3f2acp-110f, 0.0f, 0.0f, 0x1.5899f2p-126f,
     0x1.7b76b6p-22f, 0.0f
};
static const float external_bench_wrapper_input_table_arg1[1004]  = {
     0.0f, 0x1.519f6cp-51f, 0x1.683afep-3f, 0.0f, 0x1.6f40b8p-118f, 0x1.2e9678p-69f,
     0.0f, 0.0f, 0x1.da1f1ep-78f, 0.0f, 0.0f, 0.0f, 0x1.410258p-49f, 0.0f,
     0x1.fc4566p-1f, 0x1.2bc9e8p-85f, 0.0f, 0x1.96a8b4p-25f, 0.0f, 0x1.89f0dp-50f,
     0.0f, 0.0f, 0x1.d38182p-111f, 0.0f, 0.0f, 0x1.99e9a2p-107f, 0x1.0796b2p-111f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f982c4p-80f, 0.0f, 0x1.fc810cp-75f, 0x1.722e38p-94f,
     0x1.03af12p-35f, 0.0f, 0x1.87f7bp-78f, 0x1.6de4d2p-116f, 0x1.48a9p-29f, 0.0f,
     0x1.2481d6p-4f, 0.0f, 0x1.a404c8p-122f, 0x1.0704c4p-1f, 0x1.e421bep-7f,
     0x1.529a18p-126f, 0x1.877752p-88f, 0.0f, 0x1.f1a24cp-53f, 0x1.d2e93p-33f, 0.0f,
     0.0f, 0x1.af8e8cp-8f, 0.0f, 0x1.67f282p-69f, 0.0f, 0.0f, 0x1.10e4bap-28f,
     0x1.d745e6p-102f, 0x1.ff40c4p-107f, 0x1.6f1f34p-62f, 0x1.4c8e08p-11f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.82fcbcp-19f, 0x1.b1cdaap-116f, 0.0f, 0x1.658268p-57f, 0.0f,
     0x1.07da58p-44f, 0x1.bf6548p-7f, 0.0f, 0x1.53ffcap-5f, 0x1.c9d9c6p-54f, 0.0f,
     0.0f, 0x1.18b266p-123f, 0x1.2cffa8p-15f, 0.0f, 0.0f, 0x1.b68d5ap-12f, 0.0f, 0.0f,
     0x1.fe9eap-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9dde1ap-92f, 0.0f, 0x1.39c422p-58f,
     0x1.8df206p-86f, 0.0f, 0.0f, 0x1.ffe8fp-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d96312p-32f, 0x1.2a107ap-110f, 0x1.02ed02p-7f, 0x1.2914e4p-29f,
     0x1.6da42cp-16f, 0x1.4e8048p-1f, 0x1.96d9ecp-54f, 0.0f, 0.0f, 0x1.50234cp-78f,
     0.0f, 0x1.ee55c4p-2f, 0x1.0b3beep-97f, 0x1.a5ba38p-77f, 0.0f, 0x1.402a16p-55f,
     0.0f, 0x1.90e67cp-29f, 0.0f, 0.0f, 0.0f, 0x1.db958cp-95f, 0x1.ad690cp-109f, 0.0f,
     0.0f, 0x1.b81f7p-94f, 0x1.73a166p-21f, 0x1.facf2ep-46f, 0x1.92dc4p-17f,
     0x1.b3c06ap-118f, 0x1.7d8b94p-103f, 0x1.b4d03ep-49f, 0x1.794d5cp-11f, 0.0f,
     0x1.b517bp-5f, 0.0f, 0x1.4529e4p-92f, 0.0f, 0.0f, 0.0f, 0x1.2d3e58p-102f,
     0x1.11b3bcp-109f, 0.0f, 0.0f, 0.0f, 0x1.5723f2p-100f, 0x1.b36a22p-42f, 0.0f,
     0x1.2bd75ap-4f, 0x1.fda53ep-74f, 0.0f, 0.0f, 0.0f, 0x1.101174p-88f,
     0x1.7d51c2p-117f, 0x1.37c296p-125f, 0.0f, 0x1.410a98p-45f, 0.0f,
     0x1.e26c22p-109f, 0.0f, 0.0f, 0x1.2814e6p-24f, 0x1.0f5814p-45f, 0x1.6d182ap-9f,
     0x1.a89688p-85f, 0x1.50d5b6p-4f, 0x1.7dcb94p-19f, 0x1.f05bc8p-86f, 0.0f,
     0x1.69a4c4p-1f, 0x1.f80056p-26f, 0x1.210474p-103f, 0x1.32f6fcp-61f,
     0x1.205c56p-121f, 0x1.22308p-60f, 0.0f, 0.0f, 0.0f, 0x1.15bbf4p-16f, 0.0f,
     0x1.a83e08p-92f, 0x1.546612p-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dcdff2p-91f,
     0x1.d26668p-112f, 0x1.e9639p-6f, 0.0f, 0x1.cd1bcp-31f, 0x1.ce63fp-12f,
     0x1.247c66p-37f, 0.0f, 0.0f, 0x1.11e524p-24f, 0.0f, 0x1.36a8a8p-33f, 0.0f,
     0x1.466f6cp-50f, 0x1.f0426p-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.14fa78p-37f, 0.0f,
     0x1.d4984cp-18f, 0x1.6d8d82p-115f, 0x1.5e2c0cp-51f, 0.0f, 0.0f, 0.0f,
     0x1.f1adb4p-57f, 0x1.06835ep-23f, 0.0f, 0.0f, 0x1.0e0dccp-90f, 0x1.21b8cep-98f,
     0x1.731df2p-73f, 0x1.5c98a2p-50f, 0x1.318b1ep-77f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c24238p-94f, 0.0f, 0.0f, 0x1.afb486p-55f, 0x1.f88ac8p-78f, 0.0f, 0.0f, 0.0f,
     0x1.bfc106p-114f, 0x1.378cf6p-98f, 0x1.7d6f68p-66f, 0.0f, 0x1.b26bfcp-20f, 0.0f,
     0.0f, 0x1.ea63d8p-36f, 0.0f, 0.0f, 0.0f, 0x1.1dece6p-111f, 0x1.f3b7bcp-15f, 0.0f,
     0x1.4434c4p-83f, 0x1.35eb82p-117f, 0.0f, 0x1.8c8306p-21f, 0.0f, 0x1.7a243ep-14f,
     0.0f, 0.0f, 0.0f, 0x1.2fb63ep-120f, 0.0f, 0x1.9afea8p-9f, 0x1.d814f8p-100f,
     0x1.13750ep-62f, 0.0f, 0.0f, 0.0f, 0x1.ebf00cp-38f, 0.0f, 0.0f, 0.0f,
     0x1.100128p-31f, 0.0f, 0.0f, 0x1.69830ep-108f, 0x1.61cabcp-90f, 0.0f, 0.0f,
     0x1.642276p-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e1a9d4p-79f, 0.0f, 0x1.848102p-54f,
     0x1.b0f6ecp-1f, 0x1.8bdbeap-16f, 0x1.6acb6ap-8f, 0x1.b9a1e6p-68f, 0.0f,
     0x1.3e617ap-38f, 0.0f, 0x1.2340ccp-3f, 0x1.4c65f2p-58f, 0x1.e5b96ep-32f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.86dad6p-67f, 0.0f, 0.0f, 0x1.629664p-100f,
     0x1.c05144p-119f, 0.0f, 0.0f, 0x1.c87944p-17f, 0x1.c627b6p-108f, 0.0f,
     0x1.cbe8f4p-45f, 0.0f, 0.0f, 0x1.bda8c8p-121f, 0x1.f51b8p-92f, 0.0f,
     0x1.343496p-31f, 0x1.d19d44p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.01c122p-72f,
     0x1.da8242p-116f, 0x1.9b4e6ap-6f, 0.0f, 0x1.9483a6p-25f, 0x1.0705fap-88f,
     0x1.14f60ap-92f, 0x1.10a86cp-20f, 0x1.b25d9ap-81f, 0x1.3df46ap-50f,
     0x1.56ca04p-92f, 0x1.8d78dap-19f, 0x1.31a01cp-21f, 0.0f, 0.0f, 0x1.7d98fep-23f,
     0x1.e578aap-107f, 0x1.8ac226p-108f, 0.0f, 0x1.2539bep-41f, 0x1.fbffe2p-40f,
     0x1.15536p-122f, 0x1.bc89c6p-92f, 0x1.be8c74p-103f, 0.0f, 0x1.59e60ap-102f, 0.0f,
     0x1.fcf28ep-112f, 0x1.a3ee16p-121f, 0.0f, 0.0f, 0x1.0c880ap-43f, 0x1.eea87p-73f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.747c94p-118f, 0.0f, 0x1.a85fb8p-20f, 0x1.6edd8cp-52f,
     0.0f, 0.0f, 0x1.77e2dp-104f, 0x1.8af1eap-124f, 0x1.821a08p-14f, 0x1.76704cp-105f,
     0x1.771e94p-120f, 0x1.82609cp-16f, 0.0f, 0.0f, 0x1.3a67fp-3f, 0x1.54e2dep-100f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.0a44d4p-55f, 0.0f, 0x1.742c2p-26f, 0x1.642226p-112f,
     0x1.84539cp-126f, 0.0f, 0.0f, 0.0f, 0x1.c6a5a6p-64f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.738286p-52f, 0.0f, 0x1.645698p-32f, 0x1.6bde94p-37f, 0x1.3efaf6p-1f,
     0x1.03a324p-52f, 0.0f, 0.0f, 0x1.b938aep-112f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6c0af8p-107f, 0x1.b79e78p-110f, 0x1.5dd278p-26f, 0x1.1ca064p-23f,
     0x1.3cb342p-62f, 0x1.c1143ap-9f, 0.0f, 0x1.7c6274p-8f, 0x1.9b580cp-78f,
     0x1.4550ap-113f, 0.0f, 0.0f, 0x1.fd20fp-36f, 0x1.517d64p-71f, 0x1.a2a05ep-10f,
     0.0f, 0x1.d5a79ap-108f, 0.0f, 0x1.18a788p-32f, 0x1.b43f76p-75f, 0.0f,
     0x1.838b5p-94f, 0x1.5fab06p-12f, 0x1.486ffcp-90f, 0.0f, 0x1.0b2c6ap-32f, 0.0f,
     0x1.6e0842p-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7244ecp-20f, 0x1.d045fcp-99f, 0.0f, 0x1.5b3eecp-48f, 0x1.b38346p-117f,
     0x1.061e4ep-86f, 0.0f, 0.0f, 0x1.7a2858p-58f, 0x1.be051ep-104f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.be6004p-1f, 0.0f, 0x1.1993dep-73f, 0.0f, 0x1.ccaf7ep-33f,
     0.0f, 0.0f, 0.0f, 0x1.4dcdf4p-105f, 0.0f, 0x1.d10022p-104f, 0.0f,
     0x1.6bcb12p-101f, 0.0f, 0x1.98c732p-20f, 0.0f, 0.0f, 0x1.915d86p-116f,
     0x1.ae3ad8p-26f, 0x1.cd0dccp-6f, 0.0f, 0.0f, 0x1.e9ab5ep-76f, 0.0f,
     0x1.3e0b58p-71f, 0.0f, 0x1.ecea06p-106f, 0.0f, 0x1.3e39f6p-44f, 0x1.d5880cp-39f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.574044p-99f, 0x1.58bf24p-7f, 0x1.b5cdaep-107f,
     0x1.757844p-70f, 0.0f, 0x1.0ec0ap-92f, 0x1.2f42b8p-126f, 0x1.a3a80ep-118f, 0.0f,
     0x1.089e02p-8f, 0.0f, 0.0f, 0x1.74755ap-63f, 0x1.e0c64ap-66f, 0x1.2c9048p-122f,
     0.0f, 0x1.cd1f4p-80f, 0x1.cedd0ap-21f, 0.0f, 0x1.35a148p-59f, 0x1.bc9a2ep-32f,
     0.0f, 0.0f, 0x1.2c083ap-61f, 0x1.e816f2p-14f, 0x1.f26cb4p-34f, 0x1.d922dap-102f,
     0x1.c5bb46p-73f, 0.0f, 0x1.95996cp-96f, 0x1.8ac3dcp-1f, 0.0f, 0x1.48c64ap-61f,
     0.0f, 0.0f, 0.0f, 0x1.7c8618p-104f, 0.0f, 0x1.9784b8p-64f, 0.0f, 0x1.22ddfp-82f,
     0x1.bff87ap-119f, 0x1.30a928p-42f, 0.0f, 0x1.3167c4p-10f, 0.0f, 0x1.a8d726p-53f,
     0x1.ed151cp-25f, 0x1p0f, 0x1.caffcap-68f, 0.0f, 0x1.ee84fcp-63f, 0.0f,
     0x1.fd9942p-109f, 0.0f, 0x1.11a02p-121f, 0.0f, 0.0f, 0x1.d2b248p-102f,
     0x1.3a05f6p-72f, 0x1.ed71f2p-51f, 0.0f, 0.0f, 0x1.843e92p-126f, 0x1.d5951ep-22f,
     0.0f, 0x1.ec6f98p-73f, 0x1.e032fcp-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ea3408p-123f,
     0.0f, 0x1.2ecef6p-104f, 0x1.823876p-72f, 0x1.005778p-61f, 0.0f, 0.0f, 0.0f,
     0x1.3035d8p-85f, 0.0f, 0x1.dc3f1p-116f, 0x1.1c0562p-14f, 0.0f, 0.0f,
     0x1.cffa32p-74f, 0x1.b5f2ecp-78f, 0.0f, 0x1.0e9bc4p-116f, 0.0f, 0x1.b8e02cp-85f,
     0x1.7e9094p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.78e4fcp-78f, 0x1.e4d994p-100f, 0.0f,
     0.0f, 0x1.4653fap-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.38c72cp-70f, 0.0f, 0.0f,
     0x1.de275p-52f, 0x1.1c3414p-11f, 0.0f, 0.0f, 0.0f, 0x1.1aaf1cp-7f,
     0x1.4f9a6p-78f, 0x1.58a768p-111f, 0.0f, 0.0f, 0.0f, 0x1.3bfc38p-121f, 0.0f,
     0x1.29e7dep-29f, 0.0f, 0x1.fdf3bep-14f, 0.0f, 0.0f, 0x1.f51978p-52f, 0.0f,
     0x1.abf18p-1f, 0.0f, 0x1.51f9f6p-111f, 0.0f, 0x1.684a62p-1f, 0x1.d23166p-73f,
     0x1.05cbe8p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1bf2ep-74f, 0x1.04b63p-72f,
     0x1.9a44aep-26f, 0.0f, 0x1.96815p-33f, 0x1.6773c2p-6f, 0.0f, 0.0f,
     0x1.c6ccf6p-44f, 0.0f, 0.0f, 0.0f, 0x1.70b182p-15f, 0x1.e48bf4p-124f,
     0x1.60e0fap-68f, 0.0f, 0.0f, 0.0f, 0x1.e377a2p-54f, 0.0f, 0.0f, 0x1.9c80bep-68f,
     0.0f, 0.0f, 0x1.e267a2p-88f, 0.0f, 0x1.309de6p-97f, 0.0f, 0.0f, 0x1.bb472ep-64f,
     0.0f, 0x1.78abfcp-48f, 0x1.43b9a6p-26f, 0x1.c633b2p-100f, 0x1.4e9d7p-7f,
     0x1.5a2248p-17f, 0.0f, 0x1.74f904p-70f, 0.0f, 0x1.744988p-56f, 0.0f, 0.0f,
     0x1.d08e28p-27f, 0x1.af4d3cp-112f, 0x1.ae13c4p-57f, 0.0f, 0x1.34bdbp-37f, 0.0f,
     0.0f, 0x1.4bc6bap-100f, 0x1.5ae03ep-117f, 0x1.584374p-109f, 0x1.ba0b8cp-27f,
     0.0f, 0x1.a8d96ep-105f, 0x1.1d81aap-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ec8e78p-78f,
     0x1.0854aap-46f, 0.0f, 0x1.0477d2p-120f, 0x1.774428p-60f, 0.0f, 0x1.284a94p-3f,
     0x1.77ab9cp-5f, 0.0f, 0.0f, 0x1.354f1p-103f, 0x1.cff90ep-9f, 0.0f,
     0x1.469aa6p-87f, 0.0f, 0x1.94824ap-104f, 0.0f, 0x1.42bb22p-124f, 0.0f,
     0x1.021cap-83f, 0x1.b7da36p-110f, 0x1.3d32b2p-103f, 0x1.fb4f98p-108f,
     0x1.465962p-3f, 0x1.6df596p-97f, 0.0f, 0x1.cf185ap-43f, 0x1.be2c16p-75f,
     0x1.f07f86p-51f, 0x1.c6ccf6p-97f, 0x1.9521a2p-16f, 0.0f, 0.0f, 0x1.4331a4p-111f,
     0x1.bde04cp-5f, 0x1.b4c2eep-72f, 0x1.d1675ap-122f, 0x1.68980ap-21f,
     0x1.61773ep-6f, 0x1.210f5p-68f, 0x1.1a19cep-5f, 0.0f, 0.0f, 0x1.3a5506p-56f,
     0.0f, 0.0f, 0x1.099e96p-100f, 0x1.c39ad2p-81f, 0.0f, 0x1.7360cp-111f,
     0x1.7c21c8p-52f, 0.0f, 0x1.d18fap-90f, 0x1.f91e86p-53f, 0x1.513dd4p-8f, 0.0f,
     0x1.5accd6p-34f, 0.0f, 0.0f, 0.0f, 0x1.67005ap-73f, 0.0f, 0.0f, 0.0f,
     0x1.59fa24p-15f, 0x1.877cc6p-58f, 0.0f, 0.0f, 0x1.6cd652p-52f, 0.0f,
     0x1.1e865cp-109f, 0.0f, 0x1.c9e28p-55f, 0x1.5ad1eep-125f, 0x1.13f32ap-40f, 0.0f,
     0x1.8922dap-35f, 0x1.d73056p-66f, 0.0f, 0x1.626328p-63f, 0x1.5e0286p-69f, 0.0f,
     0x1.f3213ap-15f, 0x1.91ca46p-61f, 0x1.09573p-21f, 0.0f, 0.0f, 0x1.6aa834p-120f,
     0.0f, 0x1.198c0ap-74f, 0.0f, 0.0f, 0x1.8cea06p-100f, 0x1.dc6ep-11f,
     0x1.63105p-8f, 0x1.8b6b84p-118f, 0.0f, 0.0f, 0x1.1503f8p-114f, 0.0f, 0.0f,
     0x1.1a664ep-63f, 0.0f, 0x1.18b398p-41f, 0.0f, 0x1.5eec0ep-4f, 0.0f,
     0x1.d48b04p-23f, 0.0f, 0.0f, 0x1.63b9e8p-77f, 0x1.39bcfp-64f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.0cacb2p-12f, 0x1.646494p-38f, 0.0f, 0.0f,
     0x1.3f7182p-126f, 0.0f, 0x1.5919b4p-101f, 0x1.6503e4p-92f, 0.0f, 0x1.03dfc4p-69f,
     0x1.8bbe16p-73f, 0x1.41966cp-124f, 0.0f, 0x1.ecb3e8p-115f, 0x1.fc9b44p-50f,
     0x1.57d702p-80f, 0.0f, 0.0f, 0.0f, 0x1.bdd25p-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cab94ep-85f, 0x1.44922p-91f, 0.0f, 0.0f, 0.0f, 0x1.de449ep-99f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1bfebap-67f, 0.0f, 0.0f, 0.0f, 0x1.d308fep-36f, 0x1.3075d2p-124f,
     0.0f, 0x1.491f28p-77f, 0.0f, 0x1.354a98p-50f, 0x1.dff8fap-91f, 0x1.8a50e8p-81f,
     0.0f, 0.0f, 0x1.a4646cp-74f, 0.0f, 0x1.6103ap-57f, 0x1.6b97c8p-110f,
     0x1.79f6bep-109f, 0x1.3012fcp-82f, 0x1.0cdc8ap-69f, 0.0f, 0x1.762ed4p-28f, 0.0f,
     0x1.6145a4p-54f, 0.0f, 0.0f, 0.0f, 0x1.5f6a9ap-124f, 0.0f, 0x1.d8837ep-48f, 0.0f,
     0.0f, 0x1.bf1fdep-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a303bcp-88f,
     0x1.c7d0cap-121f, 0x1.429e14p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fa46fep-116f, 0x1.11c25cp-120f, 0x1.570ef2p-92f, 0.0f, 0x1.5423b8p-29f, 0.0f,
     0.0f, 0x1.a03c0ap-24f, 0.0f, 0x1.49645cp-110f, 0x1.6b837ep-95f, 0x1.23a13cp-80f,
     0.0f, 0.0f, 0x1.3fefbp-123f, 0x1.6399b4p-68f, 0x1.e1c69ap-86f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.0c77d2p-42f, 0.0f, 0x1.806e86p-30f, 0.0f, 0.0f, 0x1.14a6ap-13f,
     0x1.0ba61ep-38f, 0.0f, 0.0f, 0x1.c56b14p-88f, 0.0f, 0x1.bbb4f8p-33f, 0.0f, 0.0f,
     0x1.f337d2p-2f, 0x1.3347fep-113f, 0x1.174112p-38f, 0x1.9c4c94p-33f, 0.0f,
     0x1.d846f2p-87f, 0.0f, 0x1.d08e56p-75f, 0x1.60500cp-46f, 0x1.6f4b5p-66f,
     0x1.e318e4p-32f, 0x1.f6fabp-100f, 0.0f, 0.0f, 0.0f, 0x1.669354p-74f, 0.0f,
     0x1.12442cp-124f, 0.0f, 0.0f, 0x1.ef3d2p-69f, 0.0f, 0x1.b8d344p-83f,
     0x1.267ed2p-56f, 0.0f, 0x1.6ef266p-84f, 0x1.7b549ep-43f, 0x1.0f2af2p-12f, 0.0f,
     0x1.706ffap-106f, 0.0f, 0x1.39f3f6p-44f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.48d78cp-117f, 0.0f, 0x1.ee700cp-64f, 0x1.5bcc6p-3f, 0x1.f7ad7cp-17f, 0.0f,
     0.0f, 0x1.c92722p-83f, 0x1.2d17dep-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.80da4cp-47f,
     0.0f, 0x1.a0e5e2p-5f, 0x1.47cf12p-58f, 0x1.ab6c28p-32f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4304b2p-96f, 0.0f, 0.0f, 0x1.e28006p-48f, 0x1.6c2894p-52f, 0.0f, 0.0f,
     0x1.41bcap-37f, 0x1.0da1a6p-85f, 0.0f, 0.0f, 0.0f, 0x1.b60fbcp-50f, 0.0f
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
            tmp2 = Sleef_finz_atan2f4_u10avx2128(tmp0, tmp1);
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
    printf("Sleef_finz_atan2f4_u10avx2128 %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_atan2f4_u10avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
