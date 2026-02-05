/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_frfrexpf4_avx2128.c --function \
 *     Sleef_finz_frfrexpf4_avx2128 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 4 --function-input-vector-size \
 *     4 --bench --no-embedded-bin --target x86_avx2128
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
     0x1.1cdcf4p-101f, 0x1.2bff12p-123f, 0x1.78b826p-107f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7224eap-125f, 0x1.ef8e5cp-27f, 0.0f, 0.0f, 0.0f, 0x1.82b12ap-89f,
     0x1.e3bbbap-108f, 0.0f, 0.0f, 0x1.aa0932p-125f, 0x1.bbcbc6p-117f,
     0x1.88fa92p-19f, 0.0f, 0.0f, 0x1.2e9b3cp-117f, 0x1.a53f88p-29f, 0.0f,
     0x1.b6f072p-70f, 0x1.eacd0ep-76f, 0x1.555d3ap-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.5f33dcp-121f, 0x1.9e1644p-32f, 0x1.3bbbep-15f, 0.0f,
     0x1.7f894ap-105f, 0x1.cf3074p-83f, 0x1.0fb836p-110f, 0x1.217622p-105f,
     0x1.b9c316p-88f, 0x1.3f8afep-92f, 0x1.9398b8p-51f, 0.0f, 0.0f, 0.0f,
     0x1.1d33a4p-63f, 0x1.3bc36ap-101f, 0x1.705f24p-63f, 0.0f, 0.0f, 0x1.e3a884p-94f,
     0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.474a96p-96f, 0x1.882a92p-60f, 0x1.b35cf6p-33f,
     0.0f, 0x1.f5d79p-34f, 0.0f, 0.0f, 0.0f, 0x1.c7195cp-121f, 0.0f, 0x1.ffde22p-52f,
     0.0f, 0.0f, 0x1.9697fap-82f, 0.0f, 0.0f, 0x1.508cf4p-123f, 0x1.1261f6p-41f,
     0x1.b5c3aap-49f, 0.0f, 0x1.1fa60ap-90f, 0.0f, 0.0f, 0x1.9e10acp-49f, 0.0f,
     0x1.191436p-19f, 0.0f, 0.0f, 0x1.3bbd1ap-56f, 0.0f, 0.0f, 0x1.5b71aep-55f,
     0x1.9be88ap-46f, 0.0f, 0x1.6e919ep-28f, 0x1.f5f3fap-83f, 0x1.e4b7b2p-38f, 0.0f,
     0x1.68e712p-9f, 0.0f, 0x1.eed87cp-86f, 0.0f, 0.0f, 0.0f, 0x1.c992c6p-85f,
     0x1.d5c7dap-114f, 0x1.efa8b6p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a8300ep-51f, 0.0f,
     0x1.1bd286p-7f, 0.0f, 0x1.c246a4p-43f, 0x1.886c22p-121f, 0x1.e94856p-36f, 0.0f,
     0.0f, 0.0f, 0x1.b09a7p-48f, 0x1.b3e35p-66f, 0x1.9e29dcp-90f, 0x1.fc109ap-125f,
     0.0f, 0x1.f53c16p-109f, 0x1.1b1d24p-81f, 0x1.705236p-94f, 0.0f, 0x1.a6523ep-66f,
     0x1.5c724ep-102f, 0x1.db4a2ap-68f, 0.0f, 0.0f, 0x1.cf1ceep-36f, 0x1.23a7c2p-83f,
     0x1.2b6b3cp-52f, 0.0f, 0x1.907432p-117f, 0x1.27d9fap-120f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.5424cep-102f, 0.0f, 0x1.4b6f46p-49f, 0x1.a970f4p-35f, 0.0f, 0.0f, 0.0f,
     0x1.46a8d4p-35f, 0.0f, 0.0f, 0x1.c09246p-64f, 0.0f, 0x1.c9714ap-112f, 0.0f, 0.0f,
     0x1.507268p-107f, 0.0f, 0x1.278e4p-29f, 0x1.ca72dep-64f, 0x1.39bcbep-78f,
     0x1.c22cacp-28f, 0.0f, 0x1.df78ap-11f, 0x1.23702p-89f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.106912p-94f, 0x1.e118c8p-2f, 0.0f, 0.0f, 0x1.9669dp-16f, 0x1.6f8806p-25f,
     0x1.4c2ad4p-89f, 0x1.0c00dep-40f, 0.0f, 0x1.f45eep-22f, 0.0f, 0.0f,
     0x1.653e52p-77f, 0x1.ca3786p-97f, 0.0f, 0.0f, 0.0f, 0x1.44a1eap-52f,
     0x1.9d6b5ap-61f, 0.0f, 0.0f, 0.0f, 0x1.708e6ap-57f, 0.0f, 0.0f, 0x1.fa0508p-111f,
     0.0f, 0x1.c9f7fap-16f, 0x1.048aa6p-1f, 0x1.e63448p-67f, 0.0f, 0x1.25bfdap-122f,
     0.0f, 0x1.e8a4b8p-48f, 0x1.acd048p-55f, 0x1.9c0016p-107f, 0.0f, 0x1.c75a4p-43f,
     0x1.944048p-89f, 0.0f, 0.0f, 0.0f, 0x1.6d4032p-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.9981cap-26f, 0x1.034d76p-19f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f,
     0x1.16961ap-28f, 0.0f, 0.0f, 0x1.99b9eep-97f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8e3d6cp-40f, 0.0f, 0.0f, 0.0f, 0x1.cc0e38p-84f, 0.0f, 0.0f, 0x1.802928p-4f,
     0x1.0462dp-83f, 0x1.6ff5bap-93f, 0.0f, 0.0f, 0.0f, 0x1.6de5cap-122f,
     0x1.60c01p-88f, 0x1.260df4p-22f, 0.0f, 0.0f, 0x1.05ea68p-93f, 0x1.19090ap-54f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3ceafep-29f, 0.0f, 0x1.55242ap-41f, 0.0f, 0.0f,
     0.0f, 0x1.0bd74p-12f, 0.0f, 0.0f, 0x1.04c604p-6f, 0x1.cb058ep-12f,
     0x1.b1f3ccp-38f, 0.0f, 0.0f, 0x1.6cb6b6p-106f, 0.0f, 0x1.c65792p-71f,
     0x1.8ef9ecp-37f, 0x1.470704p-107f, 0x1.faf5f4p-52f, 0x1.9b27p-37f, 0.0f,
     0x1.3315ccp-90f, 0.0f, 0x1.5f8694p-37f, 0.0f, 0.0f, 0.0f, 0x1.1cdf22p-11f,
     0x1.2ae702p-56f, 0x1.0dac8ap-96f, 0.0f, 0.0f, 0.0f, 0x1.660e46p-70f, 0.0f,
     0x1.1e404p-38f, 0.0f, 0x1.5e230ap-69f, 0x1.84bdep-97f, 0x1.7f4c4cp-89f,
     0x1.4c3a4cp-32f, 0.0f, 0.0f, 0x1.27e72p-20f, 0x1.94f21p-51f, 0.0f,
     0x1.925ff4p-124f, 0x1.0b76fap-83f, 0x1.00d5a6p-106f, 0.0f, 0x1.af4b6ap-92f,
     0x1.0c07bp-88f, 0.0f, 0.0f, 0.0f, 0x1.2aa71cp-19f, 0x1.af0e24p-115f,
     0x1.98033p-111f, 0.0f, 0x1.d8f664p-74f, 0x1.d28312p-60f, 0.0f, 0.0f,
     0x1.0ed7acp-105f, 0.0f, 0x1.e363aap-28f, 0x1.b50c9cp-124f, 0x1.547d5ep-34f,
     0x1.342be2p-111f, 0x1.e08cc4p-91f, 0x1.e04856p-8f, 0x1.bfa0acp-54f,
     0x1.cfb05ap-52f, 0.0f, 0x1.f248acp-89f, 0x1.3eb0bp-110f, 0x1.6b9eb6p-120f, 0.0f,
     0.0f, 0x1.6b1b3cp-25f, 0x1.b6cffep-2f, 0.0f, 0x1.d571b6p-93f, 0.0f, 0.0f,
     0x1.add93ap-20f, 0x1.1f8c6cp-120f, 0.0f, 0.0f, 0x1.f22f2ep-7f, 0.0f,
     0x1.9a85bcp-94f, 0x1.382086p-97f, 0x1.68769ap-125f, 0x1.377f3ep-14f, 0.0f,
     0x1.f32362p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b226b4p-81f, 0x1.4e5acap-54f,
     0x1.10cfcap-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a170eep-83f,
     0x1.fb4f4ep-96f, 0x1.56f27ap-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bc472cp-59f, 0x1.a37fdp-15f, 0.0f, 0x1.20a88p-122f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.8b7c16p-65f, 0.0f, 0x1.f641cp-87f, 0x1.d3136ep-76f, 0.0f, 0.0f,
     0x1.4f2774p-42f, 0.0f, 0x1.f9a2aap-65f, 0.0f, 0x1.27abbcp-125f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.896e2cp-71f, 0x1.af1794p-6f, 0.0f, 0.0f, 0x1.2422p-58f, 0.0f, 0.0f,
     0x1.1011e2p-10f, 0.0f, 0x1.f1f7f4p-67f, 0.0f, 0x1.c511acp-21f, 0.0f,
     0x1.9f8d3ep-57f, 0.0f, 0x1.a2fa9cp-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5fb3f4p-76f, 0.0f, 0x1.1ba2f6p-15f, 0x1.5316cap-57f, 0x1.db8c54p-106f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e9920ep-107f, 0.0f, 0x1.8cab1ep-123f,
     0x1.39434ap-110f, 0.0f, 0x1.92b3ep-109f, 0x1.2f0b6ap-85f, 0.0f, 0.0f,
     0x1.d8bed2p-60f, 0x1.27aed6p-27f, 0x1.b425bep-80f, 0x1.9905cp-33f, 0.0f, 0.0f,
     0x1.3f617p-48f, 0x1.6227c8p-70f, 0x1.ef5658p-74f, 0x1.36e922p-7f, 0.0f, 0.0f,
     0x1.f38a6ap-8f, 0x1.4342a8p-9f, 0x1.c4ebfep-119f, 0.0f, 0x1.818724p-111f,
     0x1.3e60b6p-64f, 0x1.49c80cp-74f, 0x1.9bb886p-92f, 0.0f, 0.0f, 0x1.6370cap-13f,
     0.0f, 0.0f, 0x1.44257ep-22f, 0x1.078a38p-43f, 0.0f, 0.0f, 0.0f, 0x1.86628ep-3f,
     0.0f, 0.0f, 0x1.02ddc8p-115f, 0x1.2a4b98p-100f, 0.0f, 0.0f, 0.0f,
     0x1.295f9ap-24f, 0.0f, 0x1.b51396p-124f, 0.0f, 0x1.a966fcp-60f, 0x1.3f57cap-4f,
     0.0f, 0x1.3c00c8p-93f, 0x1.c9d62p-94f, 0.0f, 0.0f, 0.0f, 0x1.5e507p-54f,
     0x1.6f85dap-29f, 0x1.edae58p-27f, 0.0f, 0x1.ab8d52p-93f, 0x1.637c1cp-37f,
     0x1.a17d5ep-18f, 0.0f, 0x1.13ddbep-23f, 0.0f, 0x1.d083ap-80f, 0.0f,
     0x1.937ef6p-86f, 0x1.f74658p-124f, 0x1.3a082ap-118f, 0x1.ca3696p-56f,
     0x1.01b552p-101f, 0x1.0a0d5ep-53f, 0x1.c0c46cp-59f, 0x1.5008c2p-93f,
     0x1.430986p-113f, 0.0f, 0x1.e9f4bp-101f, 0x1.ca9a36p-8f, 0.0f, 0.0f,
     0x1.9b3a58p-106f, 0x1.9e6ab8p-108f, 0.0f, 0.0f, 0x1.631124p-103f, 0.0f,
     0x1.8a14fp-56f, 0x1.bc3326p-113f, 0x1.7e9c4ep-46f, 0.0f, 0x1.68a262p-23f, 0.0f,
     0.0f, 0x1.6d2f64p-2f, 0.0f, 0.0f, 0x1.add07ep-84f, 0.0f, 0.0f, 0x1.604342p-16f,
     0x1.19ec14p-14f, 0.0f, 0.0f, 0x1.282b9p-56f, 0.0f, 0.0f, 0x1.c34c08p-20f,
     0x1.1a5a4cp-91f, 0x1.fda754p-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2bfddap-21f,
     0x1.986ebep-87f, 0x1.18ed76p-93f, 0.0f, 0.0f, 0x1.07c644p-62f, 0x1.f2db12p-47f,
     0.0f, 0x1.daef3p-115f, 0x1.20ebaap-87f, 0x1.ea585cp-106f, 0.0f, 0x1.fef4bcp-106f,
     0.0f, 0.0f, 0.0f, 0x1.feed94p-74f, 0x1.5fd018p-52f, 0.0f, 0x1.eb7acp-80f, 0.0f,
     0x1.d34332p-47f, 0x1.6b543p-90f, 0.0f, 0x1.a839d4p-20f, 0.0f, 0.0f,
     0x1.63cb78p-53f, 0.0f, 0.0f, 0.0f, 0x1.b09418p-27f, 0.0f, 0x1.1aeab4p-22f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.70febep-28f, 0.0f, 0x1.25aee6p-107f,
     0x1.7d789ep-2f, 0x1.80f3b4p-20f, 0.0f, 0x1.6f1eeep-37f, 0x1.8bab5ep-98f,
     0x1.a18618p-121f, 0.0f, 0.0f, 0x1.f243d8p-24f, 0x1.9e0148p-75f, 0.0f, 0.0f,
     0x1.2bbc98p-71f, 0.0f, 0.0f, 0.0f, 0x1.6ac46cp-117f, 0x1.5eefe8p-56f, 0.0f,
     0x1.fd2bfp-72f, 0.0f, 0.0f, 0x1.4160b2p-70f, 0x1.9188d4p-43f, 0x1.f3b2b6p-63f,
     0.0f, 0.0f, 0x1.c7382p-68f, 0.0f, 0x1.0e9016p-69f, 0x1.6bbf2ap-72f,
     0x1.e6044p-113f, 0.0f, 0.0f, 0.0f, 0x1.d711ecp-86f, 0.0f, 0.0f, 0x1.f49bap-6f,
     0x1.c9c9bap-119f, 0x1.504d96p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.154fc8p-45f, 0x1.5e1756p-32f, 0x1.61ebfap-7f, 0.0f, 0x1.c1e5ap-35f,
     0x1.ced64ep-47f, 0.0f, 0x1.7b533ep-19f, 0x1.69b98ep-37f, 0.0f, 0.0f,
     0x1.94ca9ep-81f, 0x1.06d08p-84f, 0x1.7bcce8p-76f, 0x1.cf033ap-28f, 0.0f,
     0x1.6355eap-85f, 0.0f, 0x1.4be07p-116f, 0.0f, 0.0f, 0x1.0b01a2p-96f,
     0x1.ce0c4ep-5f, 0x1.d2f32ep-119f, 0.0f, 0x1.a4d29ep-93f, 0.0f, 0x1.c4b304p-5f,
     0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.81439ap-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.8f6056p-2f, 0.0f, 0x1.4fce8ap-15f, 0.0f, 0.0f, 0.0f,
     0x1.627f38p-80f, 0x1.83f2ccp-119f, 0x1.88b956p-69f, 0x1.71ec8cp-15f, 0.0f, 0.0f,
     0.0f, 0x1.e4401ap-11f, 0x1.4e063p-109f, 0.0f, 0.0f, 0x1.ce5b26p-10f, 0.0f,
     0x1.53566cp-52f, 0x1.e8e6fap-46f, 0.0f, 0x1.92f706p-108f, 0x1.0a11d2p-120f,
     0x1.fae3ecp-83f, 0.0f, 0x1.aba21p-31f, 0.0f, 0x1.93ba78p-18f, 0x1.6b0344p-52f,
     0x1.c9e678p-77f, 0.0f, 0.0f, 0x1.a32984p-57f, 0x1.4ba48ap-12f, 0x1.fd71a8p-29f,
     0x1.2c97aep-74f, 0x1.220578p-84f, 0.0f, 0x1.a24412p-50f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.969274p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6e4574p-44f,
     0x1.f93948p-90f, 0.0f, 0.0f, 0x1.88d8eap-116f, 0.0f, 0.0f, 0.0f, 0x1.343d98p-94f,
     0.0f, 0x1.5fe97p-116f, 0.0f, 0.0f, 0x1.e9901cp-41f, 0x1.0d9d38p-47f, 0.0f,
     0x1.c5e38ep-46f, 0.0f, 0.0f, 0x1.1b4ccep-109f, 0x1.701d1cp-61f, 0.0f, 0.0f,
     0x1.14334p-52f, 0.0f, 0x1.007814p-33f, 0x1.521732p-39f, 0.0f, 0x1.52c12cp-92f,
     0.0f, 0x1.b5fd98p-44f, 0.0f, 0x1.9f44e4p-109f, 0x1.758d88p-53f, 0.0f, 0.0f,
     0x1.6b51bp-45f, 0.0f, 0x1.90be32p-17f, 0x1.87146ap-33f, 0x1.17f282p-109f,
     0x1.3fc7b6p-116f, 0x1.04a546p-72f, 0.0f, 0x1.a1696cp-115f, 0.0f,
     0x1.5d3596p-112f, 0.0f, 0.0f, 0.0f, 0x1.cbe7eap-63f, 0x1.30e3a6p-86f,
     0x1.f2d31cp-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.afb572p-11f, 0.0f, 0x1.02b35p-29f,
     0x1.bcca4p-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2265dp-61f,
     0x1.f0bc4ep-44f, 0.0f, 0x1.457a1p-101f, 0.0f, 0x1.4ef83ep-76f, 0.0f,
     0x1.fb83eap-12f, 0x1.24115cp-112f, 0x1.566b1p-74f, 0x1.d6c078p-29f,
     0x1.46b1e6p-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ed13a6p-105f, 0.0f,
     0.0f, 0x1.8afe3cp-94f, 0.0f, 0x1.83fc5ap-70f, 0x1.8c92ap-33f, 0.0f,
     0x1.c594e6p-53f, 0x1.d7c6ccp-32f, 0x1.07f2b6p-106f, 0x1.2fad98p-91f,
     0x1.4aa3bp-5f, 0x1.fa6abcp-32f, 0.0f, 0.0f, 0x1.8de6acp-78f, 0.0f,
     0x1.23450cp-27f, 0.0f, 0.0f, 0.0f, 0x1.aff612p-64f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.892ebcp-5f, 0.0f, 0x1.08dff2p-96f, 0.0f, 0.0f, 0x1.bb9dd4p-62f, 0.0f,
     0x1.272624p-78f, 0x1.61f13ep-23f, 0.0f, 0x1.8961f2p-55f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f7dca4p-107f, 0x1.e42e3p-11f, 0.0f, 0.0f,
     0x1.8ac66ap-66f, 0x1.2fb5b8p-63f, 0.0f, 0.0f, 0x1.d9bee2p-15f, 0x1.5f3be2p-94f,
     0.0f, 0x1.23c4a2p-50f, 0x1.e2da6p-90f, 0x1.2ffbdp-28f, 0x1.3ab3dp-77f, 0.0f,
     0x1.f45762p-115f, 0x1.4ee7bap-64f, 0x1.69dbcp-62f, 0x1.9dcc1ap-49f,
     0x1.46e266p-6f, 0.0f, 0x1.6be778p-43f, 0.0f, 0x1.e1762p-76f, 0.0f,
     0x1.3424f8p-13f, 0x1.1bc104p-11f, 0x1.3eeda4p-118f, 0x1.69563cp-47f,
     0x1.13b0a6p-66f, 0x1.25f0c6p-31f, 0x1.8cce92p-85f, 0x1.cbbe12p-98f,
     0x1.fddb6ap-48f, 0.0f, 0x1.60de3p-43f, 0x1.f1299p-89f, 0.0f, 0.0f,
     0x1.169f96p-66f, 0.0f, 0x1.75a48cp-123f, 0x1.14dffap-80f, 0x1.838d26p-35f, 0.0f,
     0.0f, 0.0f, 0x1.8cac2cp-19f, 0x1.94ebbap-10f, 0x1.96bb06p-1f, 0x1.095938p-123f,
     0x1.7c1d68p-36f, 0.0f, 0x1.6d89a2p-118f, 0.0f, 0.0f, 0x1.38eddcp-33f,
     0x1.fbe16p-124f, 0.0f, 0.0f, 0x1.e86c32p-58f, 0x1.31a57ap-113f, 0.0f, 0.0f, 0.0f,
     0x1.f01e8p-71f, 0.0f, 0x1.88717cp-38f, 0x1.869846p-2f, 0x1.768512p-61f,
     0x1.e4a91cp-116f, 0x1.740a36p-9f, 0.0f, 0.0f, 0x1.87d63ap-101f, 0x1.dfd87cp-20f,
     0.0f, 0x1.ebb44ap-29f, 0.0f, 0.0f, 0.0f, 0x1.d78b4ap-29f, 0x1.8acfb6p-4f,
     0x1.65d0fep-59f, 0x1.ada47p-99f, 0x1.780c46p-1f, 0x1.d5befap-10f, 0.0f, 0.0f,
     0x1.cfc4f4p-108f, 0x1.ad9544p-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4b8afp-72f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.6b08c2p-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.dc10ccp-105f, 0x1.22cb22p-30f, 0x1.a1bdc2p-88f, 0.0f, 0.0f, 0x1.2c993ep-101f,
     0x1.3565c4p-103f, 0x1.ec6536p-106f, 0x1.fa7866p-39f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4d2e7ep-13f, 0.0f, 0x1.50e398p-96f, 0x1.211036p-115f, 0.0f, 0x1.2fe44ap-10f,
     0x1.87d93p-1f, 0x1.407fp-78f, 0.0f
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
            tmp1 = Sleef_finz_frfrexpf4_avx2128(tmp0);
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
    printf("Sleef_finz_frfrexpf4_avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_frfrexpf4_avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
