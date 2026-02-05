/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_rintf8_kvx.c --function Sleef_rintf8_kvx --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary32 --vector-size 8 \
 *     --function-input-vector-size 8 --bench --no-embedded-bin --target kv3
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
     0x1.ab729ep-98f, 0x1.aa56b4p-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.72be4p-126f,
     0x1.1014eap-82f, 0x1.a0cce4p-2f, 0.0f, 0.0f, 0x1.c7e02p-116f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ba6648p-110f, 0x1.f61378p-16f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.251eb2p-70f, 0x1.fb53b2p-38f, 0.0f, 0.0f, 0x1.e6d6fcp-46f, 0.0f,
     0x1.41838ep-69f, 0x1.0392e4p-98f, 0x1.b41d78p-56f, 0.0f, 0x1.5bc00ap-113f,
     0x1.ba5e8cp-40f, 0x1.394272p-97f, 0.0f, 0.0f, 0x1.4a8f6ap-126f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.32eb5cp-71f, 0x1.3660b6p-48f, 0x1.bfc4b4p-82f,
     0.0f, 0x1.0d6854p-103f, 0.0f, 0.0f, 0x1.3f5e24p-20f, 0x1.62323ep-8f,
     0x1.906282p-97f, 0.0f, 0.0f, 0x1.de8be6p-27f, 0x1.d502b4p-110f, 0x1.dbead2p-115f,
     0.0f, 0.0f, 0x1.13ad7p-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9543f6p-20f,
     0x1.8ae076p-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.67da62p-37f, 0.0f,
     0.0f, 0.0f, 0x1.86e80ap-30f, 0x1.634b34p-17f, 0.0f, 0x1.331e98p-39f, 0.0f,
     0x1.e7793p-45f, 0x1.029da6p-118f, 0.0f, 0.0f, 0.0f, 0x1.334aaap-43f, 0.0f,
     0x1.d4a034p-47f, 0x1.754a7ap-32f, 0x1.59745p-65f, 0.0f, 0x1.acb296p-59f,
     0x1.fbef3cp-112f, 0x1.9b8812p-57f, 0x1.d19576p-27f, 0.0f, 0x1.291eecp-77f,
     0x1.776b74p-116f, 0x1.81e284p-77f, 0.0f, 0.0f, 0x1.c7eb5ap-41f, 0.0f, 0.0f,
     0x1.969b84p-89f, 0.0f, 0.0f, 0.0f, 0x1.537c4ep-23f, 0x1.3ebccap-3f, 0.0f, 0.0f,
     0x1.349178p-8f, 0x1.697712p-58f, 0x1.3c2352p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a37104p-2f, 0.0f, 0x1.c25b8p-80f, 0.0f, 0.0f, 0x1.2f5356p-125f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4a02fep-63f, 0x1.36862cp-72f, 0x1.4ad6eep-16f, 0x1.c81962p-37f,
     0.0f, 0x1.c5afc2p-44f, 0.0f, 0.0f, 0.0f, 0x1.f4748cp-124f, 0x1.4a9618p-96f,
     0x1.8664e8p-14f, 0x1.ad439ep-26f, 0x1.3cd458p-93f, 0x1.bfe3a2p-59f,
     0x1.5d222ap-17f, 0.0f, 0.0f, 0x1.6e8e22p-39f, 0.0f, 0x1.8440c8p-17f,
     0x1.a2b0cep-96f, 0x1.838778p-94f, 0.0f, 0x1.281542p-74f, 0x1.e4d598p-112f,
     0x1.c03732p-69f, 0x1.7e4662p-7f, 0x1.aaa4bep-41f, 0x1.61e06cp-79f, 0.0f, 0.0f,
     0x1.569096p-69f, 0x1.b7017p-125f, 0x1.e5059ep-18f, 0.0f, 0x1.07861ap-48f, 0.0f,
     0.0f, 0.0f, 0x1.c6912ep-34f, 0x1.dcdc98p-115f, 0.0f, 0.0f, 0x1.9e94d6p-103f,
     0.0f, 0.0f, 0.0f, 0x1.070becp-109f, 0.0f, 0x1.5a56aep-105f, 0x1.8aab8p-11f,
     0x1.9c3f14p-97f, 0x1.bd4976p-84f, 0.0f, 0.0f, 0.0f, 0x1.06231p-125f,
     0x1.497f18p-16f, 0x1.c631f4p-38f, 0x1.53b904p-80f, 0.0f, 0x1.ad2cfcp-39f,
     0x1.dcc204p-82f, 0x1.ce9a3ep-48f, 0x1.cd070cp-120f, 0x1.3bd8fap-115f,
     0x1.a01c9cp-16f, 0x1.fbb002p-63f, 0x1.a93a4p-46f, 0.0f, 0x1.217d8ap-84f, 0.0f,
     0.0f, 0.0f, 0x1.13238ep-67f, 0x1.42ef8ap-11f, 0x1.aa4376p-54f, 0.0f,
     0x1.83d818p-32f, 0x1.3b06dep-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b4f1ccp-43f,
     0x1.5a3382p-31f, 0x1.ef0c28p-71f, 0.0f, 0x1.01c5acp-66f, 0x1.f3608cp-39f,
     0x1.3da54p-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.451edp-51f,
     0x1.d38b3p-103f, 0x1.7347cep-55f, 0.0f, 0.0f, 0.0f, 0x1.fe585ep-46f, 0.0f, 0.0f,
     0x1.2a501p-87f, 0x1.eec6e8p-53f, 0.0f, 0x1.41c3ccp-17f, 0x1.9f73bep-11f,
     0x1.b98bdap-79f, 0.0f, 0x1.e87adp-46f, 0x1.347476p-36f, 0.0f, 0.0f,
     0x1.992992p-51f, 0x1.e1e18ep-54f, 0.0f, 0x1.64243p-63f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2d0d58p-104f, 0.0f, 0x1.d7f4fap-97f, 0.0f, 0x1.a863ccp-7f, 0.0f,
     0x1.f4b436p-72f, 0.0f, 0.0f, 0.0f, 0x1.7bc722p-37f, 0x1.6be7ep-52f, 0.0f, 0.0f,
     0.0f, 0x1.7af426p-126f, 0.0f, 0x1.06bb62p-78f, 0x1.99eb3ep-113f, 0.0f, 0.0f,
     0x1.f817bap-46f, 0.0f, 0x1.0c30ap-117f, 0.0f, 0x1.83de9ap-5f, 0.0f,
     0x1.c786b2p-27f, 0x1.6e9e34p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f8d342p-4f,
     0x1.80fc62p-76f, 0.0f, 0.0f, 0.0f, 0x1.809946p-90f, 0.0f, 0x1.caa872p-46f, 0.0f,
     0x1.cbd39p-41f, 0x1.413878p-114f, 0x1.3220fap-103f, 0.0f, 0x1.a675aep-92f, 0.0f,
     0x1.fb1fb4p-93f, 0x1.2b9158p-57f, 0.0f, 0.0f, 0x1.0ddff2p-38f, 0.0f,
     0x1.db1f16p-66f, 0x1.a26bbp-58f, 0x1.f30348p-34f, 0.0f, 0.0f, 0x1.0363c8p-51f,
     0x1p0f, 0x1.8369a2p-21f, 0.0f, 0.0f, 0.0f, 0x1.2a9cep-35f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a4b0cap-70f, 0x1.b26136p-67f, 0x1.78a02ap-11f, 0.0f, 0x1.7de308p-119f,
     0x1.c1afdap-119f, 0.0f, 0.0f, 0x1.07f2d2p-125f, 0.0f, 0x1.ca127cp-111f,
     0x1.b9544ap-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.47cdcap-59f, 0.0f, 0.0f,
     0x1.8b681ep-76f, 0.0f, 0.0f, 0x1.c8b9dep-64f, 0.0f, 0x1.499d2ap-107f,
     0x1.ee691cp-61f, 0x1.78e8ep-59f, 0.0f, 0x1.560d1ap-115f, 0x1.36ebe6p-88f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.5dcba8p-45f, 0x1.4f5b32p-112f, 0x1.992502p-93f, 0.0f,
     0x1.6a5ab2p-12f, 0x1.d16f62p-19f, 0.0f, 0x1.e512e6p-15f, 0.0f, 0x1.e53a8ap-49f,
     0.0f, 0.0f, 0x1.ccfdd6p-27f, 0x1.f2ca18p-57f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.231b74p-41f, 0.0f, 0.0f, 0.0f, 0x1.16875ep-98f, 0x1.285026p-101f, 0.0f, 0.0f,
     0x1.e03af8p-66f, 0x1.4b5e44p-51f, 0x1.c5e528p-49f, 0x1.132612p-35f,
     0x1.6c4724p-23f, 0.0f, 0x1.048882p-41f, 0.0f, 0.0f, 0.0f, 0x1.71cafcp-46f,
     0x1.1e7ce8p-11f, 0x1.3de804p-34f, 0x1.3fd8p-84f, 0x1.daf6a2p-116f, 0.0f, 0.0f,
     0x1.cb9592p-118f, 0x1.868352p-13f, 0x1.8ac72p-46f, 0.0f, 0.0f, 0x1.fcc736p-57f,
     0.0f, 0.0f, 0x1.367274p-100f, 0x1.947eb2p-25f, 0.0f, 0x1.7c1bdap-24f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ee545ep-6f, 0.0f, 0x1.e212d2p-18f, 0x1.a66904p-23f, 0.0f,
     0x1.ede4cep-59f, 0x1.120694p-119f, 0.0f, 0.0f, 0.0f, 0x1.2eff96p-115f, 0.0f,
     0x1.f61dbep-44f, 0.0f, 0x1.35869ep-53f, 0x1.e5de4cp-31f, 0.0f, 0x1.c75128p-7f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.aff17ap-66f, 0x1.c6b76ap-117f, 0.0f, 0x1.caacbp-109f,
     0x1.d0f91cp-60f, 0.0f, 0x1.55749p-67f, 0x1.330dap-113f, 0.0f, 0x1.aa54cap-50f,
     0.0f, 0.0f, 0.0f, 0x1.eb7962p-92f, 0x1.e0dc1ap-11f, 0x1.81ff78p-115f,
     0x1.689b48p-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.924d9ep-35f, 0x1.fc8d9cp-14f,
     0x1.a21cecp-97f, 0.0f, 0.0f, 0x1.846b14p-27f, 0.0f, 0x1.05b3ccp-100f,
     0x1.bdf2fp-41f, 0.0f, 0x1.1a467p-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.88e734p-122f,
     0x1.01e7a6p-83f, 0x1.62f6d6p-49f, 0.0f, 0.0f, 0x1.35b0ap-35f, 0x1.f8b91ap-80f,
     0x1.8cdb16p-84f, 0.0f, 0.0f, 0x1.d7d18cp-112f, 0.0f, 0.0f, 0.0f, 0x1.6f6574p-61f,
     0x1.b80f12p-47f, 0.0f, 0x1.f5624p-25f, 0x1.2beafep-1f, 0x1.fab42p-83f,
     0x1.fb8e3ep-27f, 0.0f, 0.0f, 0x1.f733ep-55f, 0x1.ab3aaep-66f, 0.0f,
     0x1.ccac52p-63f, 0x1.2dbdeep-33f, 0x1.0f0276p-49f, 0x1.189a22p-107f, 0.0f,
     0x1.26472ep-16f, 0x1.6d832cp-67f, 0x1.7356e4p-114f, 0x1.41b294p-67f, 0.0f,
     0x1.737fcp-89f, 0.0f, 0x1.507d3ep-7f, 0x1.5a2ceap-107f, 0x1.1886dap-118f,
     0x1.e96928p-41f, 0x1.6cfbcep-125f, 0.0f, 0.0f, 0x1.212e42p-35f, 0x1.9e279cp-21f,
     0x1.3cdfe8p-26f, 0x1.5831f4p-109f, 0x1.a688bcp-84f, 0.0f, 0x1.8db42p-87f,
     0x1.ccc6ccp-36f, 0x1.5f7692p-92f, 0.0f, 0.0f, 0.0f, 0x1.fb7c56p-35f, 0.0f, 0.0f,
     0x1.09aaa8p-85f, 0.0f, 0x1.4ca06cp-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.10311ep-118f,
     0.0f, 0x1.d3e61p-77f, 0.0f, 0.0f, 0x1.379d5p-67f, 0x1.086316p-124f, 0.0f,
     0x1.caaaap-90f, 0x1.1e810ap-17f, 0.0f, 0.0f, 0.0f, 0x1.7838dep-82f,
     0x1.1ac05ep-24f, 0.0f, 0x1.6ed332p-45f, 0.0f, 0.0f, 0.0f, 0x1.630132p-67f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.27818cp-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.066738p-97f, 0.0f, 0x1.8cd356p-112f, 0x1.c2cadp-17f, 0x1.f52aaep-55f, 0.0f,
     0x1.e62fe2p-77f, 0.0f, 0.0f, 0x1.2b8128p-56f, 0x1.d75512p-105f, 0x1.964b82p-11f,
     0x1.4766d6p-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bd471ep-1f, 0x1.14589ap-56f, 0.0f,
     0x1.a4709ep-8f, 0x1.4ece96p-61f, 0x1p0f, 0.0f, 0x1.aed898p-49f, 0.0f,
     0x1.b471dcp-114f, 0x1.b0aefap-67f, 0.0f, 0.0f, 0x1.4a1124p-122f, 0.0f,
     0x1.558ea4p-98f, 0.0f, 0.0f, 0x1.2c3616p-25f, 0.0f, 0x1.0ca8fcp-122f,
     0x1.104e3cp-24f, 0.0f, 0.0f, 0.0f, 0x1.c2e7f4p-112f, 0.0f, 0x1.b54c1ep-101f,
     0.0f, 0x1.e0939ap-42f, 0.0f, 0.0f, 0.0f, 0x1.e7ab9cp-16f, 0.0f, 0x1.ee9c6p-100f,
     0x1.67345ap-90f, 0x1.8d5414p-4f, 0x1.a000dp-10f, 0x1.cbf732p-104f, 0.0f, 0.0f,
     0x1.55f614p-40f, 0.0f, 0.0f, 0x1.e4c7fcp-40f, 0x1p0f, 0x1.091c6cp-47f,
     0x1.112d1cp-19f, 0.0f, 0x1.abcb5ap-10f, 0x1.2fed2cp-27f, 0x1.b9cbb2p-126f, 0.0f,
     0x1.a7ffa6p-122f, 0x1.04204ap-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7937fep-62f,
     0x1.512702p-122f, 0.0f, 0x1.2fd3aep-104f, 0.0f, 0x1.159488p-57f, 0x1.16365ep-95f,
     0.0f, 0x1.ac45b4p-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.deb2aep-88f, 0.0f, 0.0f, 0x1.305372p-20f, 0x1.b3bd44p-66f, 0.0f, 0.0f, 0.0f,
     0x1.c4b1c2p-113f, 0x1.8a0d8ep-50f, 0x1.e0ccep-54f, 0x1.e448a6p-60f, 0.0f,
     0x1.8fb48p-110f, 0x1.e80278p-50f, 0x1.c675aep-121f, 0x1.8ec85ap-41f,
     0x1.e6f9a6p-45f, 0.0f, 0x1.9a9ap-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e6e6cep-12f, 0x1.853016p-126f, 0.0f, 0x1.625cbcp-97f, 0.0f, 0x1.90005p-105f,
     0x1.6f8876p-25f, 0x1.a5e028p-21f, 0.0f, 0x1.8c5664p-109f, 0.0f, 0x1.c9678cp-112f,
     0.0f, 0.0f, 0x1.b79474p-89f, 0x1.285276p-119f, 0.0f, 0x1.2fac9p-95f, 0.0f, 0.0f,
     0.0f, 0x1.4b2a72p-69f, 0x1.daedp-93f, 0.0f, 0x1.dc6cfap-32f, 0x1.85099p-8f,
     0x1.dd16d4p-61f, 0.0f, 0.0f, 0x1.67b328p-85f, 0x1.6ec9bp-70f, 0.0f, 0.0f, 0.0f,
     0x1.8bd266p-110f, 0x1.b0bcc8p-71f, 0x1.cc8fa2p-17f, 0.0f, 0x1.1a7a1ep-93f,
     0x1.dd39aep-95f, 0x1.ec2802p-52f, 0.0f, 0x1.8b04f6p-14f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.38839cp-116f, 0.0f, 0x1.0734ecp-5f, 0.0f, 0.0f, 0x1.c562a6p-44f,
     0x1.c49b38p-110f, 0.0f, 0x1.a72132p-30f, 0x1.7275p-117f, 0.0f, 0x1.3aaaa6p-6f,
     0x1.b8cd28p-86f, 0.0f, 0x1.3c47e4p-35f, 0.0f, 0.0f, 0x1.56f83ap-67f, 0.0f,
     0x1.1f0372p-32f, 0.0f, 0x1.f3de28p-55f, 0.0f, 0x1.d696aap-7f, 0.0f, 0.0f, 0.0f,
     0x1.9f096ap-76f, 0.0f, 0x1.e52a6ep-95f, 0x1.302416p-92f, 0x1.698af4p-80f,
     0x1.8ff9a8p-95f, 0x1.21c83ep-106f, 0x1.e85b52p-44f, 0x1.68a9p-94f, 0.0f,
     0x1.ac4684p-86f, 0x1.8f0b6cp-115f, 0.0f, 0.0f, 0.0f, 0x1.0cb28p-28f,
     0x1.acfa2cp-80f, 0.0f, 0.0f, 0.0f, 0x1.fd9ddp-120f, 0.0f, 0x1.fb416ep-90f,
     0x1.d896d4p-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8a693cp-84f, 0x1.65a654p-37f, 0.0f,
     0.0f, 0.0f, 0x1.ebbcd8p-33f, 0.0f, 0x1.16ea6ep-95f, 0x1.3bb35ep-80f,
     0x1.428af8p-108f, 0.0f, 0.0f, 0x1.ccf2b8p-87f, 0.0f, 0.0f, 0x1.cc07bp-27f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.0371a4p-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.65a144p-80f,
     0x1.903852p-26f, 0.0f, 0.0f, 0.0f, 0x1.f52e64p-125f, 0.0f, 0.0f, 0.0f,
     0x1.9fb8e8p-90f, 0x1.6bdd32p-34f, 0x1.5961cep-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.28a6b4p-95f, 0x1p0f, 0x1.664adap-63f, 0x1.5a26a8p-84f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.3328c8p-80f, 0.0f, 0.0f, 0x1.ace116p-31f, 0x1.bfe772p-75f, 0.0f, 0.0f,
     0x1.c5dc9cp-21f, 0x1.91d8eap-104f, 0.0f, 0x1.2e7acp-108f, 0.0f, 0x1.7cb1b4p-4f,
     0.0f, 0.0f, 0x1.fecb2ap-5f, 0.0f, 0x1.7a10f6p-67f, 0x1.e39568p-90f, 0.0f,
     0x1.dc27dp-6f, 0.0f, 0.0f, 0x1.a51944p-35f, 0x1.4f3c9cp-1f, 0.0f, 0.0f, 0.0f,
     0x1.49622cp-94f, 0x1.e7fb4ap-2f, 0x1.09279cp-79f, 0.0f, 0x1.85df16p-82f,
     0x1.a41e4cp-92f, 0x1.a55e8p-26f, 0x1.3d0586p-88f, 0x1.d398dep-63f, 0.0f, 0.0f,
     0.0f, 0x1.1415eap-52f, 0.0f, 0x1.7977e6p-58f, 0.0f, 0.0f, 0.0f, 0x1.8fa804p-1f,
     0.0f, 0.0f, 0.0f, 0x1.5df098p-102f, 0x1.f5f104p-62f, 0x1.26f85ap-68f,
     0x1.2f4d14p-86f, 0x1.202e1ap-76f, 0.0f, 0x1.d5ff42p-98f, 0.0f, 0.0f, 0.0f,
     0x1.dd6fbap-39f, 0.0f, 0.0f, 0x1.d321aap-68f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1dc8d2p-67f, 0x1.145c56p-42f, 0.0f, 0x1.f95c16p-60f, 0.0f, 0.0f,
     0x1.154692p-20f, 0x1.40e45p-101f, 0.0f, 0.0f, 0x1.1596c2p-122f, 0x1.b04714p-36f,
     0x1.c5a73ap-106f, 0.0f, 0x1.98a3ep-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.292db4p-41f, 0x1.bec1dap-6f, 0.0f, 0x1.eeab0ap-70f, 0x1.d78982p-45f,
     0x1.b93112p-104f, 0x1.f6fd2ep-89f, 0x1.86d95ep-64f, 0.0f, 0x1.c2634ep-40f, 0.0f,
     0x1.d0cd3ap-37f, 0.0f, 0x1.5c236ap-23f, 0.0f, 0x1.986e16p-77f, 0.0f, 0.0f, 0.0f,
     0x1.37a9c4p-78f, 0x1.8ac456p-77f, 0x1.8fc3p-123f, 0.0f, 0x1.78775ap-19f,
     0x1.779c04p-122f, 0.0f, 0x1.a57d04p-28f, 0x1.60e59ap-57f, 0x1.c9678ap-122f, 0.0f,
     0.0f, 0.0f, 0x1.69e642p-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.130eb4p-17f,
     0x1.a0641ep-66f, 0x1.9aef44p-119f, 0.0f, 0x1.401e68p-123f, 0x1.438ab2p-78f, 0.0f,
     0x1.f7ec3p-58f, 0.0f, 0.0f, 0.0f, 0x1.a2797ap-93f, 0.0f, 0.0f, 0.0f,
     0x1.7759cp-66f, 0.0f, 0.0f, 0.0f, 0x1.5d6d9ep-64f
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
            tmp1 = Sleef_rintf8_kvx(tmp0);
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
    printf("Sleef_rintf8_kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_rintf8_kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
