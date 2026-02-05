/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_fastsinf8_u3500kvx.c --function \
 *     Sleef_fastsinf8_u3500kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 8 --function-input-vector-size \
 *     8 --bench --no-embedded-bin --target kv3
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
     0.0f, 0x1.224556p-63f, 0.0f, 0.0f, 0.0f, 0x1.a63194p-48f, 0x1.50743ap-20f, 0.0f,
     0.0f, 0.0f, 0x1.476db8p-27f, 0.0f, 0x1.f7ce7ep-95f, 0.0f, 0x1.286386p-126f, 0.0f,
     0x1.c6325p-83f, 0.0f, 0.0f, 0x1.acb34p-7f, 0x1.f287a6p-50f, 0x1.5a44ccp-44f,
     0x1.8283c6p-9f, 0x1.3442e4p-13f, 0.0f, 0x1.c6b0ap-121f, 0.0f, 0.0f,
     0x1.f7b61ep-83f, 0.0f, 0.0f, 0x1.714d1ep-65f, 0.0f, 0x1.831056p-74f,
     0x1.68d65p-112f, 0.0f, 0.0f, 0.0f, 0x1.5eef78p-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6e99e8p-50f, 0x1.c4338p-107f, 0x1.52a18ap-50f, 0x1.f63942p-115f,
     0x1.8fd82cp-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2304bp-44f, 0.0f, 0x1.a64c98p-95f,
     0.0f, 0x1.b5004ap-34f, 0x1.84f9d8p-79f, 0.0f, 0x1.bf17dcp-82f, 0.0f,
     0x1.c00636p-46f, 0.0f, 0x1.ca03f8p-27f, 0x1.907aecp-93f, 0.0f, 0x1.d927ecp-39f,
     0x1.09cac2p-90f, 0x1.04611p-49f, 0.0f, 0.0f, 0.0f, 0x1.5383aap-89f, 0.0f,
     0x1.3252e2p-10f, 0.0f, 0x1.cf035ep-91f, 0x1.c9dc96p-114f, 0.0f, 0.0f, 0.0f,
     0x1.d5859ep-70f, 0.0f, 0x1.a8e524p-97f, 0.0f, 0x1.89fa78p-76f, 0.0f, 0.0f,
     0x1.e5bcp-41f, 0.0f, 0.0f, 0x1.8c93dcp-78f, 0x1.75963p-19f, 0.0f, 0.0f,
     0x1.67f3a8p-66f, 0x1.f89872p-99f, 0x1.13abap-59f, 0.0f, 0x1.0aacb2p-12f,
     0x1.f3d418p-112f, 0x1p0f, 0x1.62a9ep-84f, 0.0f, 0x1.04badep-10f, 0.0f, 0.0f,
     0x1.0d0dccp-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.024722p-88f, 0.0f, 0x1.2286eep-117f,
     0x1.52784ep-33f, 0.0f, 0.0f, 0x1.a465bap-18f, 0.0f, 0x1.bcec06p-40f, 0.0f, 0.0f,
     0.0f, 0x1.4b0bf8p-19f, 0.0f, 0.0f, 0.0f, 0x1.42ab08p-112f, 0x1.f60a1ep-115f,
     0x1.d58b34p-90f, 0x1.ba6c3cp-45f, 0.0f, 0.0f, 0x1.55d0ccp-107f, 0.0f,
     0x1.1afe5p-1f, 0x1.a055dp-65f, 0x1.f68e1p-83f, 0.0f, 0.0f, 0x1.0dfe86p-31f,
     0x1.1d148cp-86f, 0.0f, 0.0f, 0.0f, 0x1.da980ep-103f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.6e0b76p-101f, 0x1.30398p-44f, 0x1.7c2b7cp-100f,
     0x1.6a7c9cp-44f, 0.0f, 0x1.c97a08p-19f, 0x1.3ff2d6p-35f, 0x1.4b8b68p-43f,
     0x1.c7d0b4p-49f, 0x1.32627ap-108f, 0.0f, 0.0f, 0x1.846b0ap-29f, 0x1.96929p-13f,
     0.0f, 0x1.c14f6ap-70f, 0x1.d19276p-125f, 0.0f, 0x1.7988p-19f, 0.0f,
     0x1.e3e0b6p-58f, 0.0f, 0x1.66aaa8p-61f, 0.0f, 0x1.a73c88p-89f, 0x1.2e606ep-31f,
     0.0f, 0x1.8101dap-90f, 0x1.b450c8p-67f, 0.0f, 0x1.cfaecp-102f, 0x1.b9df06p-42f,
     0x1.901bc8p-114f, 0.0f, 0.0f, 0x1.9015ccp-38f, 0.0f, 0.0f, 0x1.a83e94p-52f,
     0x1.ea02d6p-75f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.7a6eacp-18f, 0.0f,
     0x1.29ce04p-96f, 0.0f, 0.0f, 0x1.d9f7e2p-30f, 0x1.62e7d8p-50f, 0.0f, 0.0f, 0.0f,
     0x1.c8261ap-76f, 0x1.70dffp-49f, 0.0f, 0.0f, 0x1.8ab654p-105f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e252bcp-92f, 0x1.210d34p-78f, 0x1.2d1a88p-11f, 0.0f,
     0x1.edbe94p-49f, 0x1.aa4692p-34f, 0.0f, 0x1.8c5d78p-35f, 0.0f, 0x1.ef7574p-15f,
     0x1.7d4bap-107f, 0x1.0daddp-65f, 0.0f, 0.0f, 0x1.0ceac6p-6f, 0x1.5a7696p-109f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.5fce3ep-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.143546p-29f, 0.0f, 0x1.29b768p-80f, 0x1.607318p-24f, 0x1.188a92p-97f,
     0.0f, 0.0f, 0x1.651112p-113f, 0.0f, 0.0f, 0x1.ad5c4ap-44f, 0x1.4f139ep-21f, 0.0f,
     0x1.c5871p-96f, 0.0f, 0.0f, 0x1.491c98p-99f, 0.0f, 0x1.b9bb96p-78f, 0.0f, 0.0f,
     0.0f, 0x1.7c3282p-16f, 0x1.f0c20ep-90f, 0x1.ae9d02p-121f, 0.0f, 0.0f,
     0x1.6f9b64p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.22b226p-26f, 0.0f, 0.0f,
     0x1.297d28p-10f, 0x1.3856dep-52f, 0.0f, 0x1.3b33dp-111f, 0x1.795bd2p-2f,
     0x1.e8ca72p-33f, 0x1.49cd08p-27f, 0x1.f696b2p-10f, 0x1.752b88p-71f, 0.0f,
     0x1.933dfep-7f, 0x1.db5c2ep-69f, 0.0f, 0.0f, 0x1.a2af9cp-13f, 0.0f, 0.0f,
     0x1.28b096p-116f, 0.0f, 0.0f, 0.0f, 0x1.4e61b2p-52f, 0x1.5fb06cp-42f,
     0x1.8d6272p-52f, 0.0f, 0.0f, 0x1.ac8c8p-40f, 0x1.22355ep-101f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.72be2ap-49f, 0.0f, 0.0f, 0x1.63e3bap-108f, 0x1.6772b4p-30f, 0.0f,
     0x1.55efaap-43f, 0x1.991ae2p-31f, 0x1.264046p-20f, 0x1.8c10cp-73f, 0.0f, 0.0f,
     0.0f, 0x1.e798fp-101f, 0x1.69b62cp-57f, 0.0f, 0.0f, 0x1.c11694p-97f,
     0x1.df24c2p-111f, 0x1.b736d4p-44f, 0x1.508414p-29f, 0.0f, 0.0f, 0x1.7623f4p-52f,
     0.0f, 0x1.4f11f2p-38f, 0x1.e598b2p-104f, 0.0f, 0.0f, 0.0f, 0x1.bb28fep-53f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.213324p-10f, 0.0f, 0.0f, 0x1.e625f6p-31f, 0.0f, 0.0f, 0.0f,
     0x1.0b417p-37f, 0x1.9b5e6ap-56f, 0x1.f879b6p-23f, 0x1.df03ccp-115f, 0.0f,
     0x1.690f6ap-115f, 0.0f, 0.0f, 0.0f, 0x1.9c9ddcp-123f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.576732p-102f, 0x1.3dbafep-84f, 0.0f, 0x1.fa2962p-83f, 0.0f, 0.0f,
     0x1.8a857cp-81f, 0.0f, 0.0f, 0.0f, 0x1.386706p-13f, 0x1.4bb68ap-96f,
     0x1.95485cp-57f, 0.0f, 0x1.f5d2bep-5f, 0x1.8c7f6ep-126f, 0x1.5ea0acp-28f,
     0x1.3190f6p-23f, 0x1.7dc014p-67f, 0x1.72346cp-14f, 0.0f, 0x1.648d62p-34f,
     0x1.f3d934p-32f, 0x1.4e7452p-49f, 0.0f, 0x1.60e08p-31f, 0x1.58faf4p-98f,
     0x1.a03caep-8f, 0.0f, 0.0f, 0x1.9e3de4p-87f, 0x1.c91038p-10f, 0x1.7f1286p-70f,
     0.0f, 0x1.66105p-82f, 0x1.7f3d4p-13f, 0x1.57c1eap-43f, 0x1.adb39p-92f,
     0x1.2f2de4p-119f, 0.0f, 0.0f, 0x1.dd74b6p-25f, 0x1.ab5bbcp-67f, 0.0f,
     0x1.187076p-84f, 0.0f, 0x1.8fa06p-40f, 0x1.4b643p-45f, 0x1.07791p-120f,
     0x1.820b18p-27f, 0.0f, 0.0f, 0x1.f024c4p-123f, 0.0f, 0x1.c4b78cp-96f,
     0x1.59b3f2p-11f, 0x1.72dbe4p-88f, 0x1.c0a69p-19f, 0x1.370938p-117f,
     0x1.76b618p-88f, 0x1.d50f34p-61f, 0.0f, 0.0f, 0x1.54a7cep-85f, 0x1.bbbb62p-37f,
     0.0f, 0.0f, 0.0f, 0x1.0cc212p-91f, 0.0f, 0.0f, 0x1.98783ap-120f, 0.0f,
     0x1.bcc7f8p-83f, 0x1.5e36d6p-51f, 0x1.7d8fb2p-23f, 0x1.93133ap-107f, 0.0f,
     0x1.f8ee6cp-69f, 0x1.3e343ap-20f, 0x1.e941dap-74f, 0.0f, 0x1.a0d5fap-64f, 0.0f,
     0x1.0fe41p-2f, 0x1.e0b5eep-12f, 0.0f, 0x1.a1178ep-12f, 0x1.a4c334p-47f, 0.0f,
     0x1.bcbfb2p-19f, 0.0f, 0.0f, 0x1.de670ap-106f, 0x1.1ac27ap-40f, 0.0f,
     0x1.de7f9p-107f, 0x1.ce36bp-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0dc31cp-23f,
     0x1.eaa9ccp-76f, 0.0f, 0.0f, 0x1.8457dcp-92f, 0.0f, 0x1.16deccp-69f, 0.0f,
     0x1.adb084p-95f, 0x1.a4bdd4p-38f, 0.0f, 0.0f, 0x1.6425ccp-111f, 0x1.e5d4d6p-9f,
     0x1.4305fap-113f, 0x1.3be6b8p-11f, 0.0f, 0x1.e8ed5p-51f, 0x1.574bd6p-50f,
     0x1.028b8cp-36f, 0x1.e978cp-2f, 0.0f, 0.0f, 0x1.5f7086p-113f, 0.0f,
     0x1.9bdcf6p-100f, 0x1.d33afep-99f, 0x1.81e75ep-83f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f14816p-110f, 0x1.f07252p-80f, 0x1.d45344p-13f, 0x1.2c43e2p-88f, 0.0f,
     0x1.208bccp-44f, 0.0f, 0.0f, 0x1.a625p-17f, 0x1.687b14p-43f, 0x1.60e226p-64f,
     0.0f, 0x1.5508ep-38f, 0x1.efee2p-33f, 0.0f, 0x1.c75e16p-55f, 0.0f,
     0x1.4b424ap-118f, 0.0f, 0x1.d36c1ap-91f, 0x1.e29496p-40f, 0x1.c9da3cp-103f, 0.0f,
     0.0f, 0.0f, 0x1.3a60f8p-46f, 0x1.ea3088p-104f, 0.0f, 0x1.fb0758p-123f,
     0x1.742f9ep-55f, 0x1.4d2c5ep-74f, 0x1.afd84cp-22f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7b15d6p-102f, 0.0f, 0.0f, 0.0f, 0x1.8149c4p-60f, 0.0f, 0x1.0a69aap-124f,
     0.0f, 0x1.d0ef94p-40f, 0.0f, 0x1.e6ad8ap-26f, 0.0f, 0.0f, 0.0f, 0x1.16e302p-96f,
     0.0f, 0x1.61ff92p-47f, 0x1.770f7p-115f, 0x1.3ac2ap-92f, 0.0f, 0.0f,
     0x1.040922p-68f, 0.0f, 0x1.e82828p-36f, 0.0f, 0.0f, 0x1.661742p-92f,
     0x1.5f7492p-125f, 0.0f, 0x1.a4c586p-83f, 0x1.2dd8d6p-64f, 0.0f, 0x1.6b511p-2f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e1d5b4p-23f, 0.0f, 0x1.e40fccp-30f,
     0x1.33d43ap-61f, 0.0f, 0x1.c08d8ap-88f, 0x1.d4e56cp-37f, 0x1.714fbp-63f, 0.0f,
     0x1.7a8eaep-25f, 0x1.543018p-21f, 0x1.5841ep-119f, 0x1.afa94ep-35f, 0.0f,
     0x1.a6b222p-50f, 0.0f, 0.0f, 0x1.62f076p-104f, 0.0f, 0.0f, 0x1.d30624p-14f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.77bf3p-113f, 0x1.e0dad2p-10f, 0.0f, 0.0f, 0x1.2b122ep-4f,
     0.0f, 0x1.e87ca6p-40f, 0x1.825d9ap-24f, 0.0f, 0x1.48658ap-32f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.7c2998p-3f, 0.0f, 0x1.404de6p-3f, 0.0f, 0.0f, 0x1.8a0f88p-8f,
     0x1.faf87cp-78f, 0x1.0087dcp-119f, 0x1.91ab74p-107f, 0.0f, 0x1.d31072p-38f, 0.0f,
     0x1.0d715p-87f, 0.0f, 0.0f, 0x1.18192p-85f, 0.0f, 0.0f, 0x1.6c9bccp-60f,
     0x1.21de32p-121f, 0.0f, 0x1.f8e6d2p-23f, 0x1.114e48p-105f, 0.0f, 0.0f,
     0x1.e088a2p-115f, 0.0f, 0x1.5ed2e4p-21f, 0.0f, 0.0f, 0x1.92ad88p-32f,
     0x1.85d598p-61f, 0.0f, 0x1.78b392p-38f, 0.0f, 0x1.bb3bb4p-52f, 0x1.672de6p-9f,
     0x1.838cep-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1eded2p-56f, 0x1.1de786p-26f, 0.0f,
     0.0f, 0.0f, 0x1.7b730ap-123f, 0x1.07cb7p-125f, 0x1.738288p-59f, 0x1.88314p-32f,
     0x1p0f, 0.0f, 0.0f, 0x1.874b16p-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3d1348p-53f,
     0x1.17277ep-6f, 0.0f, 0.0f, 0.0f, 0x1.1c5b1ep-84f, 0x1.a64b58p-29f, 0.0f,
     0x1.c829aep-120f, 0x1.de7f8ep-109f, 0.0f, 0.0f, 0.0f, 0x1.21c36ap-87f, 0.0f,
     0x1.6b06b6p-100f, 0x1.0b9426p-92f, 0x1.c46b9ap-20f, 0x1.3d347ap-21f, 0.0f,
     0x1.8036ccp-94f, 0.0f, 0x1.9a9e8ep-18f, 0x1.198f0ep-18f, 0x1.f0b3f2p-20f,
     0x1.e9f3dp-71f, 0x1.37b964p-45f, 0.0f, 0x1.3c497ap-75f, 0.0f, 0.0f,
     0x1.eba0c8p-17f, 0.0f, 0.0f, 0x1.20b312p-111f, 0x1.959e4p-34f, 0.0f,
     0x1.46ef7ep-23f, 0x1.0ff85ep-109f, 0.0f, 0x1.7c41bap-71f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ff26fcp-67f, 0x1.68b288p-97f, 0.0f, 0x1.45912p-107f, 0x1.aa55cap-68f, 0.0f,
     0.0f, 0.0f, 0x1.72189cp-100f, 0.0f, 0x1.505ceap-69f, 0.0f, 0x1.953712p-68f,
     0x1.02ec82p-81f, 0.0f, 0.0f, 0.0f, 0x1.cd0e7p-41f, 0.0f, 0x1.8067ecp-48f, 0.0f,
     0x1.a06c86p-16f, 0.0f, 0.0f, 0x1.4f68eap-52f, 0.0f, 0x1.3c8392p-26f,
     0x1.49bf1cp-61f, 0x1.43f13p-25f, 0.0f, 0.0f, 0.0f, 0x1.ebc614p-70f, 0.0f, 0.0f,
     0x1.fffe0ap-91f, 0.0f, 0.0f, 0x1.f9ad54p-8f, 0x1.9d97f4p-31f, 0.0f, 0.0f, 0.0f,
     0x1.86accap-126f, 0x1.dd773cp-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.359592p-124f,
     0x1.75400cp-95f, 0x1.464ee6p-102f, 0x1.ddc4ecp-9f, 0.0f, 0x1.898deap-113f, 0.0f,
     0x1.697442p-86f, 0x1.e4811p-73f, 0x1.c6c0c8p-94f, 0.0f, 0x1.4471fcp-84f,
     0x1.1ac508p-14f, 0.0f, 0.0f, 0.0f, 0x1.c8e798p-54f, 0.0f, 0x1.f50e9p-34f,
     0x1.74717cp-65f, 0.0f, 0.0f, 0.0f, 0x1.6b55d6p-56f, 0x1.3b0d9ap-23f, 0.0f,
     0x1.56d13p-46f, 0.0f, 0x1.599528p-82f, 0x1.0c7614p-95f, 0x1.0c91bap-104f,
     0x1.0c2aecp-113f, 0.0f, 0.0f, 0x1.39b044p-90f, 0x1.4a79f8p-39f, 0x1.c1f204p-59f,
     0x1.119a3ap-71f, 0.0f, 0x1.1f34f8p-64f, 0.0f, 0x1.e23e4cp-101f, 0.0f,
     0x1.fc4bfep-71f, 0x1.d3a6cap-120f, 0.0f, 0.0f, 0x1.ab6fap-43f, 0x1.c10ebep-61f,
     0x1.b6074ep-67f, 0x1.578818p-26f, 0.0f, 0x1.be8c88p-53f, 0x1.70ba72p-45f, 0.0f,
     0x1.bc132cp-52f, 0x1.d57b7p-68f, 0x1.07bf2ap-6f, 0x1.477af2p-22f, 0.0f,
     0x1.8699cep-124f, 0.0f, 0.0f, 0x1.a85aap-120f, 0.0f, 0x1.0a0c6ap-52f,
     0x1.11ee16p-64f, 0.0f, 0x1.79576p-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4870bcp-73f,
     0.0f, 0x1.e42cd2p-29f, 0x1.87633ep-59f, 0.0f, 0x1p0f, 0x1.b7e2d8p-27f,
     0x1.5654f2p-109f, 0x1.ebe79cp-38f, 0x1.7dfc52p-88f, 0x1.f31dd2p-97f, 0.0f, 0.0f,
     0x1.557b8ap-84f, 0.0f, 0.0f, 0.0f, 0x1.e7aeb4p-6f, 0.0f, 0x1.bf36b2p-46f, 0.0f,
     0x1.79ec8cp-22f, 0.0f, 0x1.b37768p-80f, 0.0f, 0x1.a95a6ap-107f, 0x1.f0e668p-84f,
     0x1.748becp-114f, 0.0f, 0x1.e1ad7p-123f, 0.0f, 0x1.b2d362p-74f, 0x1.cb12e6p-82f,
     0x1.826e68p-75f, 0x1.2ccd04p-61f, 0.0f, 0.0f, 0.0f, 0x1.068fb2p-43f, 0.0f,
     0x1.29c322p-19f, 0x1.c3dbdcp-63f, 0.0f, 0x1.dfabdap-25f, 0.0f, 0x1.4f809p-115f,
     0.0f, 0.0f, 0x1.48a956p-27f, 0.0f, 0x1.48e884p-49f, 0x1.012f6p-49f,
     0x1.51fe1p-77f, 0.0f, 0x1.3564e6p-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.688c7ep-120f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3abb26p-32f, 0x1.f645a6p-12f, 0.0f,
     0x1.e88e56p-46f, 0.0f, 0.0f, 0x1.d17762p-78f, 0x1.71bf0ap-94f, 0.0f, 0.0f, 0.0f,
     0x1.2a1806p-28f, 0.0f, 0x1.68a6fcp-98f, 0x1.229fccp-30f, 0x1.a2111p-71f,
     0x1.824dd6p-89f, 0.0f, 0x1.22a176p-54f, 0x1.b299a2p-8f, 0.0f, 0x1.9f7a74p-8f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.775d92p-12f, 0x1.b6507p-22f,
     0x1.2bb946p-51f, 0x1.03c066p-55f, 0.0f, 0x1.fc63dap-9f, 0.0f, 0x1.28d01ep-76f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e7a862p-33f, 0x1.474aep-102f, 0x1.51eb1ep-90f, 0.0f,
     0.0f, 0x1.7590a4p-4f, 0.0f, 0x1.0df69cp-28f, 0.0f, 0x1.8bf4dap-78f,
     0x1.3e947p-17f, 0x1.6ef774p-100f, 0.0f, 0.0f, 0x1.938812p-92f, 0x1.33625ep-103f,
     0x1.4aac1ap-38f, 0.0f, 0x1.59b526p-7f, 0.0f, 0x1.8635f6p-103f, 0x1.599f06p-6f,
     0.0f, 0x1.44033ep-11f, 0x1.385e92p-8f, 0x1.2feac4p-94f, 0.0f, 0x1.1dc436p-8f,
     0.0f, 0.0f, 0.0f, 0x1.8f1b46p-7f, 0x1.d449bep-75f, 0.0f, 0.0f, 0x1.47154cp-31f,
     0.0f, 0.0f, 0.0f, 0x1.c2775cp-11f, 0.0f, 0x1.2acf4ep-48f, 0x1.0fa5fep-75f, 0.0f,
     0x1.3a9a8p-43f, 0x1.f289d2p-18f, 0.0f, 0x1.732e42p-83f, 0.0f, 0x1.c82d14p-108f,
     0.0f, 0.0f, 0.0f, 0x1.be311cp-67f, 0x1.c4a18p-94f
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
            tmp1 = Sleef_fastsinf8_u3500kvx(tmp0);
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
    printf("Sleef_fastsinf8_u3500kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_fastsinf8_u3500kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
