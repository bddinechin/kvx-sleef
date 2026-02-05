/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_hypotf8_u35kvx.c --function Sleef_hypotf8_u35kvx \
 *     --arity 2 --headers sleef.h,ml_support_lib.h --input-formats \
 *     binary32,binary32 --vector-size 8 --function-input-vector-size 8 \
 *     --bench --no-embedded-bin --target kv3
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
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a53152p-63f, 0.0f, 0x1.756006p-95f,
     0x1.8b6c98p-108f, 0x1.59aa78p-86f, 0x1.55f4c2p-4f, 0x1.8f048ep-18f,
     0x1.bc143ap-52f, 0x1.721a02p-1f, 0x1.e93106p-84f, 0.0f, 0x1.032ddap-100f,
     0x1.6eb8c8p-89f, 0x1.794376p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.76e474p-104f, 0.0f,
     0.0f, 0.0f, 0x1.78ea18p-57f, 0.0f, 0.0f, 0.0f, 0x1.2ccbaap-7f, 0x1.89b99p-45f,
     0.0f, 0.0f, 0x1.a6342p-85f, 0x1.046dfcp-4f, 0x1.2b0dep-122f, 0.0f,
     0x1.65d114p-100f, 0x1.e6f688p-102f, 0.0f, 0x1.50223cp-85f, 0.0f, 0x1.443ccap-39f,
     0.0f, 0.0f, 0.0f, 0x1.be0516p-91f, 0.0f, 0x1.6c759p-93f, 0x1.085d5p-36f, 0.0f,
     0x1.da25fp-83f, 0x1.5fd398p-84f, 0x1.a211eap-73f, 0x1.1a143ep-35f,
     0x1.20dba6p-59f, 0.0f, 0.0f, 0.0f, 0x1.cdf74ap-36f, 0x1.fd9782p-79f,
     0x1.7d3b2p-13f, 0x1.d1d12ep-49f, 0x1.97b49ap-15f, 0x1.be53f4p-102f,
     0x1.1d74d6p-118f, 0.0f, 0.0f, 0.0f, 0x1.cef12cp-19f, 0.0f, 0x1.fd9fdp-98f, 0.0f,
     0x1.1ca04ep-45f, 0.0f, 0.0f, 0.0f, 0x1.354052p-85f, 0.0f, 0x1.e93feep-118f,
     0x1.cf6fa6p-106f, 0.0f, 0x1.1b12e8p-66f, 0.0f, 0x1.e04cb6p-73f, 0x1.834cd4p-82f,
     0x1.7fb3bap-41f, 0.0f, 0x1.671deep-6f, 0.0f, 0x1.0d3b8p-108f, 0x1.409f78p-98f,
     0.0f, 0x1.e2481p-81f, 0x1.98c3aep-18f, 0x1.ba2baep-37f, 0.0f, 0x1.71554ap-28f,
     0x1.e0c124p-46f, 0.0f, 0x1.d05a1ep-5f, 0.0f, 0x1.f1a8f2p-53f, 0x1.eaec62p-13f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c87d2cp-119f, 0.0f, 0.0f, 0x1.6c486ap-41f,
     0x1.d1a4ep-53f, 0x1.871e92p-84f, 0.0f, 0x1.62fe88p-124f, 0x1.abd238p-93f,
     0x1.fbf62p-8f, 0.0f, 0.0f, 0x1.00db2p-3f, 0x1.5b9f2ep-64f, 0.0f, 0x1.152144p-5f,
     0x1.33273p-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8d853p-58f,
     0x1.c2b1cep-38f, 0.0f, 0.0f, 0x1.62c0a8p-48f, 0x1.7dd038p-49f, 0x1.99d258p-15f,
     0.0f, 0.0f, 0.0f, 0x1.dca02p-93f, 0.0f, 0.0f, 0.0f, 0x1.d20ddp-25f, 0.0f,
     0x1.e08f8ep-18f, 0x1.f1d17cp-92f, 0.0f, 0x1.aab2a2p-62f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1f9a7cp-60f, 0.0f, 0.0f, 0x1.182a76p-5f, 0x1p0f, 0x1.a9d316p-13f,
     0.0f, 0x1.ad9abp-91f, 0x1.5d758p-51f, 0.0f, 0x1.4a508cp-86f, 0.0f, 0.0f,
     0x1.0a175p-124f, 0.0f, 0x1.a9931p-56f, 0x1.afa48ep-94f, 0x1.d6867cp-47f,
     0x1.37fc02p-60f, 0x1.ea8e7ap-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.aa55b6p-7f, 0.0f,
     0x1.a88612p-102f, 0x1.be1b56p-80f, 0.0f, 0.0f, 0x1.14921ap-3f, 0x1.4b6642p-70f,
     0x1.8c5b48p-82f, 0x1.51e052p-45f, 0.0f, 0.0f, 0.0f, 0x1.643b48p-72f,
     0x1.36eaecp-42f, 0x1p0f, 0x1.1a356ap-75f, 0.0f, 0x1.d3d5b6p-16f, 0x1.fed3e2p-35f,
     0.0f, 0.0f, 0.0f, 0x1.e3650ep-91f, 0x1.a70aap-118f, 0.0f, 0x1.6cda8p-21f,
     0x1.ae1d5ap-37f, 0.0f, 0x1.768db4p-83f, 0x1.2e29cp-1f, 0x1.f2cc06p-8f,
     0x1.38f552p-23f, 0x1.4123dcp-76f, 0x1.490728p-58f, 0.0f, 0.0f, 0.0f,
     0x1.747994p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e4ae2cp-42f, 0.0f, 0.0f,
     0x1.9ee982p-118f, 0.0f, 0x1.0a2998p-102f, 0x1.db81c6p-107f, 0x1.8f06d4p-93f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8d9b02p-73f, 0.0f, 0x1.01ffeap-79f,
     0x1.aca60ap-49f, 0.0f, 0x1.ed22aap-123f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b53cf6p-102f, 0.0f, 0.0f, 0x1.2c8efcp-17f, 0x1.de3a46p-118f, 0x1.6d1814p-57f,
     0.0f, 0x1.89e5dp-120f, 0x1.7cc26p-97f, 0x1.b66696p-111f, 0x1.d5f1f6p-14f, 0.0f,
     0.0f, 0x1.494678p-30f, 0.0f, 0x1.d66b26p-85f, 0x1.02b062p-23f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f398f8p-41f, 0x1.f4ca64p-79f, 0.0f, 0.0f, 0x1.5612b4p-22f, 0.0f,
     0x1.cb4e12p-3f, 0.0f, 0x1.b29508p-41f, 0.0f, 0x1.9c247cp-67f, 0x1.5edc4p-59f,
     0.0f, 0x1.60bd6cp-119f, 0.0f, 0x1.d99782p-120f, 0.0f, 0x1.d6b504p-71f, 0.0f,
     0.0f, 0x1.5eddaap-3f, 0x1.d0b6aap-12f, 0x1.d1a5d8p-64f, 0x1.02e3e4p-58f,
     0x1.211d24p-24f, 0.0f, 0x1.7d966ap-44f, 0x1.d682aep-46f, 0x1.efddbep-74f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.6881acp-63f, 0.0f, 0x1.dfd39p-122f, 0x1.c765d2p-81f,
     0x1.c57676p-67f, 0x1.6cf704p-103f, 0x1.2ecf28p-35f, 0x1.c137bap-28f,
     0x1.b706fcp-62f, 0x1.de16fp-47f, 0x1.4ac4fp-83f, 0x1.5a3db8p-77f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.dc6838p-45f, 0.0f, 0x1.ed385cp-84f, 0x1.a4ce8ep-67f, 0.0f,
     0x1.e2fd2p-82f, 0x1.ac28aap-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b958d6p-80f,
     0x1.bc904p-104f, 0.0f, 0.0f, 0.0f, 0x1.8618aap-101f, 0.0f, 0x1.6f94ecp-91f, 0.0f,
     0.0f, 0x1.1bc46cp-61f, 0.0f, 0x1.59a65ep-79f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c06ebap-26f, 0x1.202068p-29f, 0.0f, 0.0f, 0.0f, 0x1.36a412p-19f,
     0x1.dad8cp-69f, 0.0f, 0x1.330e66p-31f, 0.0f, 0x1.ad9ce8p-94f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.8580cap-68f, 0.0f, 0.0f, 0x1.aa2612p-82f, 0.0f, 0x1.a51c3ap-42f,
     0x1.265e7ap-125f, 0x1.6f41f4p-58f, 0.0f, 0x1.b2fdd8p-98f, 0x1.764b9ap-110f,
     0x1.8b57c4p-14f, 0x1.18a7ecp-25f, 0.0f, 0x1.ab44a6p-61f, 0x1.264568p-109f, 0.0f,
     0.0f, 0x1.e5469p-101f, 0x1.ff5708p-52f, 0x1.bc41d4p-74f, 0x1.0d705ep-34f,
     0x1.462a5cp-25f, 0.0f, 0.0f, 0x1.e08078p-123f, 0.0f, 0x1.56732ep-87f,
     0x1.913ff4p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.14b2b4p-17f, 0.0f, 0.0f, 0.0f,
     0x1.00306ap-42f, 0.0f, 0x1p0f, 0.0f, 0x1.ab76e4p-107f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4fcc8p-77f, 0.0f, 0x1.2a2e84p-18f, 0.0f, 0.0f, 0.0f, 0x1.5f508p-109f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.5e6324p-68f, 0.0f, 0x1.e5c8dep-3f, 0.0f,
     0x1.39dc5ap-9f, 0x1.cbd608p-57f, 0x1.9821fap-24f, 0x1.75b8bcp-105f, 0.0f, 0.0f,
     0x1.0d54acp-84f, 0x1.15ffaap-57f, 0.0f, 0x1.ac27ecp-60f, 0.0f, 0.0f,
     0x1.8c405ap-9f, 0x1.776de8p-73f, 0.0f, 0x1.a345c6p-94f, 0x1.99f3bep-62f,
     0x1.37f614p-92f, 0.0f, 0x1.c720ecp-51f, 0.0f, 0x1.bc3f24p-4f, 0.0f,
     0x1.90a30cp-43f, 0x1.d9fbf2p-5f, 0x1.38f42p-16f, 0x1.a5ae8p-11f, 0x1.f2da5p-68f,
     0.0f, 0.0f, 0.0f, 0x1.453b0ep-117f, 0.0f, 0x1.c846e6p-3f, 0x1.4ae8b4p-49f,
     0x1.98a68ep-8f, 0x1.8779f4p-42f, 0x1.e5c6e8p-111f, 0x1.9230f6p-48f,
     0x1.f937d2p-121f, 0x1.c684fp-67f, 0x1.9a5b16p-82f, 0x1.ae71d4p-61f,
     0x1.63ee32p-98f, 0x1.95d1eap-124f, 0.0f, 0x1.6d0934p-69f, 0x1.dbd666p-108f,
     0x1.17e5bp-7f, 0x1.f581aep-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d229a2p-54f, 0x1.389894p-113f, 0x1.a94cc8p-37f, 0x1.f1285ep-59f,
     0x1.72e984p-101f, 0x1.e42268p-97f, 0x1.649316p-73f, 0x1.5b56cep-46f,
     0x1.a10412p-49f, 0.0f, 0.0f, 0x1.b10de4p-30f, 0x1.7434aap-103f, 0.0f, 0.0f,
     0x1.210bbcp-27f, 0x1.90fdc2p-69f, 0x1.b1d592p-90f, 0x1.23b702p-25f,
     0x1.dabbeep-119f, 0.0f, 0.0f, 0x1.1f6ffp-42f, 0.0f, 0x1.c0f2a2p-34f,
     0x1.a0db9cp-71f, 0.0f, 0x1.a5ce8ep-42f, 0.0f, 0.0f, 0.0f, 0x1.3952dp-58f, 0.0f,
     0.0f, 0x1.4cc726p-96f, 0x1.1e2562p-66f, 0.0f, 0.0f, 0x1.127cc4p-54f, 0.0f,
     0x1.3fe914p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d0cf1p-49f, 0.0f, 0x1.cf05b4p-105f,
     0x1.e221eep-60f, 0x1.6b86c6p-95f, 0.0f, 0.0f, 0x1.c5429p-14f, 0x1.49b5dap-32f,
     0x1.7e5af4p-64f, 0.0f, 0.0f, 0x1.4626fap-84f, 0x1.fca062p-126f, 0.0f,
     0x1.6bf57ap-70f, 0x1.4aa9c8p-40f, 0x1.23aebcp-11f, 0.0f, 0x1.374afep-101f,
     0x1.db10fep-24f, 0x1.025184p-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.122d3cp-93f,
     0x1.e43de2p-37f, 0x1.5e862cp-122f, 0.0f, 0x1.20adbap-126f, 0.0f, 0x1.daedf8p-80f,
     0.0f, 0.0f, 0x1.32c58ap-61f, 0x1p0f, 0.0f, 0x1.fbe5c6p-89f, 0.0f,
     0x1.f72adcp-69f, 0x1.c27bbp-117f, 0.0f, 0.0f, 0x1.47d4cep-28f, 0.0f,
     0x1.4e69fcp-82f, 0x1.43665ep-108f, 0.0f, 0x1.aa2c6p-14f, 0.0f, 0x1.bc32dep-95f,
     0x1.7f4292p-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b0bb46p-34f, 0x1.9166eep-15f,
     0x1.230458p-59f, 0.0f, 0x1.ea4d16p-54f, 0.0f, 0.0f, 0x1.8a87b4p-92f, 0.0f,
     0x1.22ec8ep-122f, 0.0f, 0x1.28751p-120f, 0x1.b0b004p-43f, 0x1.705fb6p-15f,
     0x1.c05d28p-112f, 0.0f, 0x1.1837cp-82f, 0.0f, 0.0f, 0x1.4f4442p-94f, 0.0f,
     0x1.32a77p-93f, 0x1.ca612cp-50f, 0.0f, 0.0f, 0x1.29c7d6p-26f, 0x1.5f31e2p-117f,
     0x1.acb228p-72f, 0.0f, 0.0f, 0x1.b6163ep-48f, 0x1.1d357p-6f, 0x1.fd4bfcp-12f,
     0x1.7afba6p-29f, 0x1.e36d04p-103f, 0x1.13e61ap-112f, 0.0f, 0.0f, 0.0f,
     0x1.1d063ap-56f, 0.0f, 0.0f, 0.0f, 0x1.82f64cp-2f, 0x1.77b8d6p-102f, 0.0f, 0.0f,
     0.0f, 0x1.5a3e08p-123f, 0x1.6edb52p-68f, 0x1.766c1p-58f, 0.0f, 0x1.736a2p-44f,
     0.0f, 0.0f, 0x1.175d46p-13f, 0.0f, 0.0f, 0x1.b28996p-95f, 0.0f, 0x1.ff77aep-52f,
     0.0f, 0.0f, 0x1.7f8c1cp-126f, 0.0f, 0x1.ae68d2p-41f, 0x1.e09894p-52f,
     0x1.52f5dap-54f, 0x1.5b2032p-101f, 0.0f, 0x1.5884ep-54f, 0.0f, 0x1.c3312p-26f,
     0x1.d83d8ep-29f, 0x1.090c6cp-113f, 0.0f, 0x1.0bc30ep-94f, 0.0f, 0.0f, 0.0f,
     0x1.4f5884p-2f, 0x1.13cdecp-15f, 0x1.e79a2p-66f, 0x1.aacffap-56f,
     0x1.57aa82p-98f, 0x1.35feb8p-56f, 0.0f, 0.0f, 0.0f, 0x1.a13c3cp-17f, 0.0f, 0.0f,
     0x1.9b629ap-58f, 0.0f, 0x1.b2dde6p-63f, 0x1.e6fe5ep-59f, 0x1.3c4908p-108f, 0.0f,
     0.0f, 0x1.591d6p-84f, 0.0f, 0.0f, 0.0f, 0x1.8d548p-45f, 0.0f, 0.0f,
     0x1.91f60cp-4f, 0x1.7c2ca2p-53f, 0x1.e34806p-18f, 0.0f, 0.0f, 0x1.79f616p-103f,
     0x1.eb327ep-96f, 0x1.a12fbcp-124f, 0x1.4019b4p-53f, 0x1.73695cp-41f, 0.0f, 0.0f,
     0x1.f9ae6p-107f, 0.0f, 0.0f, 0x1.c5969ep-2f, 0x1.070ba4p-81f, 0x1.831476p-73f,
     0x1.0a6814p-28f, 0.0f, 0.0f, 0x1.3c645p-117f, 0x1.a7590ap-113f, 0.0f,
     0x1.8ee97ap-104f, 0.0f, 0x1.d1f576p-26f, 0.0f, 0.0f, 0x1.d87aa4p-114f, 0.0f,
     0.0f, 0x1.5c91aep-19f, 0.0f, 0.0f, 0.0f, 0x1.4a3632p-41f, 0.0f, 0.0f,
     0x1.5279p-124f, 0x1.7d3bbcp-8f, 0x1.e45414p-48f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.87b5bp-59f, 0.0f, 0.0f, 0x1.c909aep-1f, 0x1.6dd5ccp-106f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.32ae6cp-87f, 0.0f, 0.0f, 0.0f, 0x1.c555c6p-62f, 0.0f, 0.0f,
     0x1.82ae16p-20f, 0.0f, 0x1.953e92p-21f, 0.0f, 0x1.d43396p-116f, 0.0f,
     0x1.bc62dep-104f, 0x1.e687c8p-13f, 0x1.f3fc6ep-19f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7cb15ap-29f, 0x1.e23ce8p-8f, 0x1.05b6c6p-26f, 0x1.5b0362p-40f,
     0x1.a54682p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5594c8p-29f, 0.0f, 0x1.671862p-121f,
     0.0f, 0x1.6df34ep-42f, 0.0f, 0.0f, 0.0f, 0x1.da6e42p-31f, 0.0f, 0x1.f2cb9ap-13f,
     0x1.356ffp-93f, 0.0f, 0x1.068f14p-83f, 0.0f, 0.0f, 0.0f, 0x1.b05b2ep-80f, 0.0f,
     0x1.09f464p-16f, 0.0f, 0x1.19e472p-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.70f8d6p-104f, 0x1.90e1eap-42f, 0x1.0e065p-28f, 0x1.94699ep-76f,
     0x1.6fa40ap-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7e05f8p-23f, 0x1.3359dp-40f,
     0x1.f2a5ecp-76f, 0.0f, 0.0f, 0.0f, 0x1.e1a9a4p-57f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.66c93cp-4f, 0x1.84caecp-67f, 0x1.c0c0b4p-17f, 0.0f, 0.0f, 0x1.f3424ap-21f,
     0x1.9ec96cp-67f, 0.0f, 0x1.e0ad0cp-51f, 0x1.7a238cp-24f, 0x1.ed5f56p-4f, 0.0f,
     0x1.df5c6ap-49f, 0x1.eb6feep-94f, 0x1.91f66ap-99f, 0.0f, 0x1.db1a52p-115f, 0.0f,
     0x1.0a189cp-91f, 0.0f, 0.0f, 0x1.38442p-17f, 0x1.dc4208p-65f, 0x1.9c7942p-79f,
     0x1.b5c55ep-15f, 0.0f, 0.0f, 0x1.24d21p-110f, 0x1.acab34p-44f, 0x1.221808p-126f,
     0.0f, 0x1.d7ce14p-58f, 0x1.226466p-30f, 0x1.039af6p-68f, 0x1.79917cp-111f,
     0x1.1cc6b2p-72f, 0x1.c0364p-61f, 0x1.5474c8p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ebc046p-111f, 0.0f, 0x1.f11db8p-8f, 0x1.cdc078p-39f, 0.0f, 0.0f,
     0x1.9415p-26f, 0x1.65ac4cp-85f, 0x1.311fc4p-57f, 0x1.363216p-27f,
     0x1.a6042ep-25f, 0x1.1881d2p-60f, 0x1.6eb1dp-70f, 0.0f, 0x1.7b5406p-90f, 0.0f,
     0x1.316368p-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e135cep-119f, 0x1.bb7b48p-27f, 0.0f, 0x1.cef576p-100f, 0x1.bf0742p-101f,
     0x1.d4a56ap-114f, 0x1.c08e7cp-126f, 0x1.06d6e6p-42f, 0.0f, 0x1.b73726p-100f,
     0.0f, 0x1.c744cep-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.77b8ccp-69f, 0x1.f0263cp-105f,
     0.0f, 0x1.f639eep-101f, 0x1.e742dp-121f, 0x1.2c3a3p-26f, 0x1.7ea6f8p-45f, 0.0f,
     0.0f, 0.0f, 0x1.915fbcp-78f, 0.0f, 0x1.51fe6ep-104f, 0x1.73f91cp-65f, 0.0f,
     0x1.bc8942p-27f, 0x1.9e2e08p-89f, 0.0f, 0.0f, 0.0f, 0x1.1da968p-7f, 0.0f,
     0x1.e9191ap-38f, 0x1.7519acp-50f, 0x1.d0ffb6p-38f, 0x1.3c35ecp-92f, 0.0f, 0.0f,
     0x1.f0c4e2p-65f, 0.0f, 0x1.4e93b6p-22f, 0x1.ce01f4p-111f, 0.0f, 0x1.268792p-16f,
     0.0f, 0x1.5c0938p-23f, 0x1.030b06p-87f, 0.0f, 0x1.a757d4p-103f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.255904p-67f, 0x1.43c90ap-93f, 0.0f, 0x1.32792p-84f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ba6824p-31f, 0x1.1bf622p-17f, 0x1.663cc8p-34f, 0x1.29804p-72f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d15f9p-48f, 0.0f, 0x1.8edba6p-34f, 0x1.4ed3bap-22f,
     0x1.c0108ap-106f, 0.0f, 0.0f, 0.0f, 0x1.0db0a2p-117f, 0x1.2393p-113f,
     0x1.cef63ep-71f, 0.0f, 0.0f, 0x1.d88c68p-49f, 0x1.e3495ap-58f, 0x1.162472p-55f,
     0.0f, 0.0f, 0x1.b1218ap-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.160328p-15f,
     0x1.ad1408p-42f, 0.0f, 0.0f, 0x1.3f10c2p-86f, 0.0f, 0x1.8afc1cp-2f, 0.0f
};
static const float external_bench_wrapper_input_table_arg1[1008]  = {
     0x1.9a314cp-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f9e704p-72f, 0.0f, 0.0f,
     0x1.9a7314p-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.93c3c8p-12f, 0x1.5a01f6p-123f,
     0.0f, 0x1.aefe36p-71f, 0.0f, 0.0f, 0x1.8c839cp-83f, 0x1.52aa6ep-41f, 0x1p0f,
     0.0f, 0x1.f7c1ecp-22f, 0x1.ed6fdp-29f, 0.0f, 0x1.5f87c2p-84f, 0.0f,
     0x1.7005eep-15f, 0.0f, 0x1.877968p-41f, 0.0f, 0.0f, 0x1.529836p-119f, 0.0f, 0.0f,
     0x1.46b886p-51f, 0x1.5b15acp-13f, 0.0f, 0x1.49a0d4p-63f, 0x1.60ffa6p-25f,
     0x1.f1a668p-68f, 0x1.2733fep-10f, 0.0f, 0x1.52248ep-102f, 0.0f, 0x1.41a628p-108f,
     0x1.42ac36p-98f, 0x1.b4f656p-59f, 0.0f, 0.0f, 0x1.ae5298p-104f, 0x1.65542ep-86f,
     0.0f, 0.0f, 0x1.bd8dfep-62f, 0.0f, 0x1.821a3cp-49f, 0x1.b23658p-83f,
     0x1.c83d62p-87f, 0.0f, 0x1.602ab8p-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6a919ep-34f,
     0.0f, 0x1.f1c3aap-76f, 0x1.a6a08ep-74f, 0.0f, 0x1.e1a0b2p-72f, 0.0f,
     0x1.df2104p-4f, 0x1.55da2p-22f, 0.0f, 0x1.ad1e7ap-54f, 0.0f, 0x1.52f404p-111f,
     0.0f, 0x1.e4c192p-93f, 0x1.50643p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.008aeep-93f,
     0x1.bbdab2p-38f, 0.0f, 0x1.a259e8p-11f, 0x1.7bd274p-23f, 0.0f, 0x1.7c74fep-40f,
     0.0f, 0x1.7af082p-116f, 0x1.8aa032p-45f, 0.0f, 0.0f, 0x1.5b782ap-96f, 0.0f, 0.0f,
     0x1.73598p-2f, 0.0f, 0.0f, 0x1.ebfca6p-109f, 0x1.eb38bcp-11f, 0x1.3cc8ep-89f,
     0x1.c8c0e8p-42f, 0.0f, 0.0f, 0x1.67102ep-86f, 0x1.7ab2f2p-101f, 0x1.407362p-28f,
     0.0f, 0.0f, 0x1.3c3222p-34f, 0x1.9f9a7ep-42f, 0.0f, 0x1.aa4042p-67f, 0.0f,
     0x1.b86394p-42f, 0.0f, 0x1.ab9dp-51f, 0.0f, 0x1.2ae384p-70f, 0x1.307494p-113f,
     0.0f, 0.0f, 0x1.278c32p-77f, 0.0f, 0x1.d68b5p-32f, 0x1.2b3abep-92f,
     0x1.23949ap-112f, 0x1.83319p-66f, 0.0f, 0.0f, 0x1.9e8e74p-55f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.d66062p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0d85dcp-117f,
     0x1.ed2d1cp-82f, 0x1.cf5374p-25f, 0.0f, 0.0f, 0.0f, 0x1.92cc3p-85f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1786fp-55f, 0x1.c25858p-53f, 0x1.4d8f88p-67f, 0.0f,
     0x1.d71c28p-9f, 0.0f, 0.0f, 0x1.e009a4p-116f, 0x1.29bed4p-65f, 0x1.82d11ap-107f,
     0x1.ef41eep-104f, 0.0f, 0x1.dea98ap-113f, 0.0f, 0x1.0a9a06p-94f, 0x1.652214p-65f,
     0.0f, 0x1.83cf34p-24f, 0.0f, 0.0f, 0.0f, 0x1.a0c6p-27f, 0x1.2e14e6p-26f, 0.0f,
     0x1.80598ap-46f, 0.0f, 0x1.ff46b6p-117f, 0.0f, 0x1.c35c82p-54f, 0x1.76b07p-24f,
     0.0f, 0x1.55c848p-62f, 0x1.d29b24p-2f, 0x1.507582p-107f, 0x1.6e4076p-56f, 0.0f,
     0.0f, 0.0f, 0x1.14502ap-14f, 0x1.eac98p-1f, 0.0f, 0.0f, 0x1.2b6bb4p-74f, 0.0f,
     0x1.c37af6p-117f, 0x1.aaafaep-68f, 0x1.fa7f82p-125f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c007eap-109f, 0x1.63650cp-98f, 0x1.a92e26p-100f, 0.0f, 0x1p0f, 0.0f,
     0x1.bdf884p-72f, 0x1p0f, 0x1.196926p-47f, 0x1.e2ab82p-5f, 0.0f, 0x1.ab5b74p-107f,
     0x1.ab8fc2p-105f, 0.0f, 0.0f, 0x1.7c7ccp-121f, 0.0f, 0x1.4abc64p-48f, 0.0f,
     0x1.25fdd6p-82f, 0x1.0b45c6p-99f, 0x1.54caaap-30f, 0.0f, 0.0f, 0.0f,
     0x1.0e1482p-42f, 0.0f, 0.0f, 0x1.54aefep-45f, 0.0f, 0x1.824a0ap-70f,
     0x1.12a394p-46f, 0.0f, 0x1.a80196p-114f, 0x1.df6244p-68f, 0.0f, 0x1.c6e76ep-64f,
     0.0f, 0x1.e7edcap-7f, 0x1.f1b95ep-6f, 0x1.9df444p-42f, 0.0f, 0.0f, 0.0f,
     0x1.d7afd6p-125f, 0x1.57c4bap-8f, 0.0f, 0x1.cb7ffcp-120f, 0.0f, 0.0f,
     0x1.af5f56p-58f, 0.0f, 0x1.448c3ep-53f, 0x1.72f2a2p-119f, 0x1.c38f76p-48f,
     0x1.c8403cp-18f, 0x1.64c93cp-38f, 0x1.422f5cp-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.086604p-78f, 0x1.4936b8p-49f, 0.0f, 0.0f, 0x1.85821cp-7f, 0.0f,
     0x1.010ac8p-105f, 0x1.4f67b2p-82f, 0.0f, 0.0f, 0.0f, 0x1.00ddfap-4f,
     0x1.fb710ep-100f, 0x1.96b078p-22f, 0x1.117ae8p-11f, 0x1.513cecp-36f,
     0x1.595afcp-121f, 0x1.309326p-92f, 0x1.d21cdep-13f, 0.0f, 0x1.9cb438p-53f,
     0x1.82b888p-119f, 0x1.8f91d6p-38f, 0.0f, 0.0f, 0.0f, 0x1.8cdedcp-116f,
     0x1.d8fabep-32f, 0x1.311aa6p-30f, 0.0f, 0x1.8a6d78p-96f, 0x1.7dff7p-104f, 0.0f,
     0.0f, 0x1.380184p-50f, 0x1.0f106cp-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.49c2bcp-70f,
     0.0f, 0.0f, 0x1.c9b4c4p-87f, 0.0f, 0.0f, 0x1.787d0cp-83f, 0.0f, 0.0f,
     0x1.ddb06ap-100f, 0x1.f2ddfap-109f, 0.0f, 0x1.6c1cd6p-23f, 0x1.58c9a6p-47f,
     0x1.7c8dbcp-32f, 0.0f, 0.0f, 0x1.a7deaep-80f, 0x1.29ef26p-87f, 0.0f,
     0x1.365c78p-66f, 0x1.240476p-101f, 0x1.c758e8p-61f, 0.0f, 0x1.fa850ep-125f,
     0x1.9951f6p-102f, 0.0f, 0x1.21aa8ep-12f, 0.0f, 0x1.23195p-117f, 0.0f,
     0x1.a9381cp-123f, 0x1.a9fb14p-38f, 0x1.1c2d0cp-49f, 0x1.252a6p-90f, 0.0f, 0.0f,
     0x1.b10472p-68f, 0x1.206f66p-89f, 0.0f, 0.0f, 0x1.03c95p-72f, 0.0f, 0.0f, 0.0f,
     0x1.ad328cp-9f, 0x1.9bddc4p-69f, 0.0f, 0.0f, 0x1.df49a2p-62f, 0.0f,
     0x1.49bfb2p-14f, 0x1.395536p-107f, 0x1.d3b534p-92f, 0.0f, 0.0f, 0x1.7decc2p-120f,
     0.0f, 0x1.9c4ddep-37f, 0x1.74987ap-77f, 0x1.dbdc9ap-7f, 0x1.2b78c4p-42f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ae1c86p-118f, 0x1.452ffcp-62f, 0.0f, 0.0f, 0.0f,
     0x1.4c88bap-89f, 0.0f, 0x1.2af754p-6f, 0x1.e5c196p-50f, 0x1.4197c4p-43f, 0.0f,
     0.0f, 0.0f, 0x1.bc361p-119f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.dcfa18p-71f,
     0x1.ba96aap-77f, 0.0f, 0x1.cdcacap-88f, 0x1.3aaeap-40f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.013564p-16f, 0.0f, 0.0f, 0x1.0cb25cp-73f, 0.0f, 0x1.6b308ep-79f,
     0x1.bc0168p-32f, 0.0f, 0x1.194ab6p-87f, 0.0f, 0.0f, 0x1.828acep-107f, 0.0f, 0.0f,
     0.0f, 0x1.5c92ap-52f, 0.0f, 0x1.51c3bep-97f, 0x1.366ed4p-103f, 0x1.d50946p-115f,
     0.0f, 0.0f, 0x1.01b916p-124f, 0x1.71808p-34f, 0.0f, 0.0f, 0.0f, 0x1.118734p-53f,
     0.0f, 0x1.265d5p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ac0878p-50f, 0.0f,
     0x1.65e71p-58f, 0x1.4284f6p-112f, 0.0f, 0x1.f2348p-32f, 0.0f, 0x1.2bb5a2p-73f,
     0.0f, 0x1.f117a6p-49f, 0x1.c593c2p-88f, 0.0f, 0x1.485fdcp-33f, 0x1.f6e5e2p-68f,
     0.0f, 0.0f, 0x1.5965f4p-49f, 0x1.639d94p-28f, 0.0f, 0.0f, 0x1.6ac74cp-47f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e182c8p-19f, 0x1.4b5e6p-53f, 0x1.eab922p-118f,
     0.0f, 0x1.04c9d8p-47f, 0x1.1b83f6p-20f, 0x1.df2ceep-85f, 0.0f, 0x1.4d76fap-126f,
     0.0f, 0.0f, 0x1.28cb2cp-6f, 0.0f, 0x1.610fa2p-121f, 0x1.d90544p-67f,
     0x1.87de62p-95f, 0x1.84a91ep-113f, 0.0f, 0x1.ffde9ap-91f, 0x1.cc4448p-47f, 0.0f,
     0x1.54325cp-2f, 0.0f, 0.0f, 0.0f, 0x1.26f0f4p-68f, 0x1.45b7eap-37f,
     0x1.96abe4p-74f, 0x1.d72facp-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4b90cap-76f, 0.0f,
     0x1.cadb9ap-69f, 0x1.da41fcp-58f, 0x1.b6ee12p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5630f8p-97f, 0.0f, 0x1.ed55d2p-88f, 0x1.f3854p-6f, 0x1.154814p-120f,
     0x1.38bc8ep-34f, 0.0f, 0x1.10dc0ep-39f, 0x1.4a1e6p-14f, 0x1.3708a8p-91f, 0.0f,
     0x1.fe2986p-76f, 0x1.16d358p-75f, 0.0f, 0.0f, 0x1.eeb124p-7f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.178768p-121f, 0.0f, 0.0f, 0.0f, 0x1.d9ac18p-21f,
     0.0f, 0.0f, 0x1.2ff8a4p-107f, 0x1.c9cb38p-17f, 0x1.24e83ep-9f, 0.0f, 0.0f,
     0x1.791518p-79f, 0x1.21c314p-50f, 0.0f, 0x1.cc5d2cp-90f, 0.0f, 0x1.174e1cp-8f,
     0x1.99e024p-46f, 0.0f, 0x1.bbc1f2p-88f, 0.0f, 0x1.470b8p-20f, 0x1.477f28p-42f,
     0.0f, 0.0f, 0x1.e55a9p-52f, 0.0f, 0x1.be1044p-51f, 0x1.44f01cp-61f, 0.0f,
     0x1.da7946p-48f, 0x1.7df244p-117f, 0x1.09762ap-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5bda66p-104f, 0x1.57d61p-39f, 0.0f, 0x1.c0a3fp-28f, 0x1.697454p-24f, 0.0f,
     0x1.cd9fp-126f, 0.0f, 0x1.14e3dp-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c0966cp-48f,
     0x1.8c509p-20f, 0x1.d66ea2p-108f, 0.0f, 0.0f, 0x1.3465bap-96f, 0x1.ec221ap-119f,
     0x1.8c71cep-47f, 0x1.4928f4p-101f, 0x1.50fcdep-14f, 0.0f, 0x1.b58326p-19f,
     0x1.3d4afp-62f, 0.0f, 0x1.67b96ap-90f, 0.0f, 0x1.02cf0ap-84f, 0x1.6edbb4p-55f,
     0.0f, 0.0f, 0x1.b13ed8p-100f, 0x1.eea2cp-44f, 0.0f, 0.0f, 0x1.c9c6eep-110f,
     0x1.ac46dp-21f, 0x1.e8e792p-32f, 0x1.574756p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f5657ap-54f, 0x1p0f, 0x1.64164ap-18f, 0.0f, 0.0f, 0.0f, 0x1.f842p-72f,
     0x1.639044p-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0b4788p-57f, 0x1.2d32ep-106f,
     0x1.63b8f2p-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b1095ep-43f, 0x1.f87006p-69f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.842b4p-78f, 0x1.e26522p-64f, 0.0f, 0.0f, 0x1.c79f2ep-15f,
     0x1.727722p-26f, 0x1.c69a54p-109f, 0x1.7a9a62p-14f, 0x1.7c173cp-19f, 0.0f,
     0x1.062522p-79f, 0.0f, 0.0f, 0x1.abb90cp-22f, 0x1.cc095p-89f, 0.0f,
     0x1.683f16p-84f, 0.0f, 0.0f, 0.0f, 0x1.33de2ap-76f, 0.0f, 0x1.771c7ep-60f, 0.0f,
     0.0f, 0x1.2aa116p-52f, 0x1.118f44p-57f, 0.0f, 0.0f, 0x1.9f3172p-85f, 0.0f, 0.0f,
     0x1.ca0c4ep-99f, 0.0f, 0x1.bb258ep-37f, 0x1.5c00aep-15f, 0x1.af8ddap-39f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.8f2dc4p-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.65e00cp-92f, 0.0f, 0x1.d7a846p-28f, 0.0f, 0x1.eb0456p-57f, 0x1.47582p-21f,
     0x1.3a538ap-97f, 0.0f, 0x1.89b614p-112f, 0.0f, 0x1.f17cbp-97f, 0.0f,
     0x1.b972b6p-114f, 0x1.f75dd4p-4f, 0.0f, 0x1.9a216ap-31f, 0x1.8d19a8p-90f,
     0x1.2581bp-58f, 0x1.b43566p-89f, 0.0f, 0.0f, 0x1.5d9a58p-28f, 0.0f,
     0x1.3a0c2p-95f, 0x1p0f, 0.0f, 0.0f, 0x1.de428p-52f, 0.0f, 0x1.fbe03p-112f, 0.0f,
     0.0f, 0.0f, 0x1.27a2f6p-8f, 0.0f, 0x1.c0a7b8p-81f, 0x1.c6d9d6p-15f,
     0x1.c12d2p-85f, 0x1.2b6754p-11f, 0x1.13022ep-37f, 0x1.43ac5ap-26f,
     0x1.752062p-110f, 0.0f, 0x1.0e0c58p-21f, 0x1.cae88ep-88f, 0.0f, 0.0f, 0.0f,
     0x1.08ed52p-23f, 0.0f, 0.0f, 0x1.998cd4p-29f, 0x1.c4b3d8p-119f, 0x1.ffcc12p-30f,
     0x1.8238c4p-54f, 0.0f, 0x1.a23728p-34f, 0.0f, 0x1.834162p-6f, 0.0f,
     0x1.e8b56ap-45f, 0.0f, 0.0f, 0x1.b1a5bap-63f, 0x1.ca7e6ap-41f, 0.0f,
     0x1.b5c8f4p-117f, 0x1.47177ep-14f, 0.0f, 0x1.a3a628p-20f, 0x1.d262eap-39f,
     0x1.9adb1p-113f, 0.0f, 0x1.1390fep-56f, 0x1.b00552p-6f, 0x1.403ac2p-3f, 0.0f,
     0.0f, 0x1.6b612ap-40f, 0x1.16e6c2p-5f, 0x1.b393bcp-41f, 0x1.b581e4p-57f,
     0x1.c24986p-52f, 0x1.da8b58p-76f, 0x1.6d624cp-22f, 0.0f, 0x1.fe8512p-18f,
     0x1.d7e8fcp-108f, 0x1.5a93d6p-102f, 0x1.3940fcp-60f, 0.0f, 0.0f, 0.0f,
     0x1.65424ep-54f, 0x1.8cc60ap-80f, 0.0f, 0.0f, 0x1.0e5704p-60f, 0x1.a6ed9ep-99f,
     0x1.974a4cp-9f, 0x1.7a6bbap-102f, 0x1.aaf0fap-33f, 0.0f, 0.0f, 0x1.606c06p-69f,
     0x1.497668p-99f, 0x1.d761ccp-79f, 0x1.316058p-73f, 0x1.d8d092p-45f,
     0x1.2a0b9ap-22f, 0.0f, 0.0f, 0x1.817adcp-48f, 0.0f, 0x1.4659a2p-83f, 0.0f, 0.0f,
     0x1.15808p-107f, 0.0f, 0x1.3394c6p-89f, 0.0f, 0x1.33c7e6p-46f, 0x1.cec7a8p-18f,
     0.0f, 0x1.f3ea42p-107f, 0.0f, 0x1.6493e8p-95f, 0x1.259d6p-46f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.d7500ep-100f, 0.0f, 0.0f, 0.0f, 0x1.a97d4cp-93f, 0x1.72ce6ap-21f,
     0x1.5d743cp-101f, 0x1.431e84p-91f, 0x1.1e4a9p-109f, 0.0f, 0x1.2b572ep-42f,
     0x1.db93bcp-82f, 0.0f, 0x1.8f7b8cp-71f, 0x1.714b9ap-39f, 0x1.bdcf6p-13f,
     0x1.2e89a8p-57f, 0.0f, 0x1.87d168p-117f, 0.0f, 0.0f, 0x1.ba52fcp-80f,
     0x1.c818aep-109f, 0x1.304698p-58f, 0x1.7ab8c4p-12f, 0.0f, 0x1.547c36p-23f,
     0x1.fca02ep-102f, 0.0f, 0x1.c31a92p-93f, 0x1.c9c50cp-16f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a7408ep-39f, 0x1.d3d8cap-23f, 0.0f, 0.0f, 0x1.a71702p-57f, 0x1.51bc46p-120f,
     0x1.52a41ep-12f, 0x1.74cd6ep-3f, 0.0f, 0x1.de9732p-25f, 0.0f, 0x1.82ad18p-15f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.8effcp-101f, 0.0f, 0.0f, 0.0f, 0x1.a6d488p-100f,
     0x1.ceb518p-39f, 0.0f, 0x1.9d955ap-36f, 0.0f, 0.0f, 0x1.8e4d24p-7f, 0.0f,
     0x1.b47072p-27f, 0x1.ea17f6p-32f, 0x1.b52764p-32f, 0x1.45211p-95f,
     0x1.73536cp-61f, 0.0f, 0x1.47cd08p-44f, 0.0f, 0x1.d26f3ep-61f, 0.0f, 0.0f,
     0x1.90706ep-104f, 0x1.c3c774p-47f, 0x1.586468p-116f, 0x1.d12da2p-10f,
     0x1.6ea78p-118f, 0x1.1f9cf8p-13f, 0x1.ab197ep-45f, 0x1.6dfd74p-9f,
     0x1.6cdf56p-27f, 0x1.c8ae06p-41f, 0x1.b6936cp-108f, 0x1.7a51d8p-126f, 0.0f,
     0x1.631094p-12f, 0x1.e5f576p-73f, 0x1.12ce4ap-65f, 0.0f, 0.0f, 0x1.f65e04p-100f,
     0.0f, 0x1.71b66ap-2f, 0x1.c15202p-83f, 0x1.512ef2p-103f, 0x1.a18254p-66f,
     0x1.6ad352p-73f, 0x1.dd8812p-87f, 0x1.bd151ap-107f, 0x1.a7931cp-59f,
     0x1.4bc08cp-70f, 0.0f, 0.0f, 0x1.5947b2p-24f, 0x1.2a085ap-39f, 0.0f, 0.0f,
     0x1.a21f42p-80f, 0x1.6c2a0ap-94f, 0x1.8f2acp-3f, 0x1.85013ap-59f,
     0x1.ea4098p-44f, 0x1.8d225ep-23f, 0.0f, 0.0f, 0x1.b4e01cp-15f, 0.0f, 0.0f,
     0x1p0f, 0.0f, 0x1.a174aap-31f, 0.0f, 0.0f, 0.0f, 0x1.f68a62p-64f,
     0x1.ca9d8ap-98f, 0x1.4dc10ep-23f, 0.0f, 0x1.1caf82p-46f, 0.0f, 0x1.57677p-15f,
     0x1.89bff2p-72f, 0x1.f2354cp-49f, 0.0f, 0.0f, 0x1.348fc2p-91f, 0x1.bf3434p-35f,
     0.0f, 0x1.7b7438p-96f, 0.0f, 0x1.51325ap-30f, 0.0f, 0.0f, 0.0f, 0x1.f6bc7ep-56f,
     0x1.bc4308p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e5e4cp-31f, 0.0f,
     0x1.92968p-75f, 0x1.65f72p-5f, 0x1.b42542p-79f, 0.0f, 0.0f, 0x1.779772p-106f,
     0x1.33616ep-123f, 0.0f, 0.0f, 0x1.85e2cp-37f, 0x1.7765e4p-8f, 0.0f,
     0x1.a7c1a2p-40f, 0x1.e4ea88p-113f, 0.0f, 0x1.00e05cp-110f, 0x1.e6cac4p-74f,
     0x1.88bd28p-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0e247cp-56f, 0x1.33dcfep-97f,
     0x1.a969a2p-78f, 0x1.641958p-120f, 0x1.cfabbp-42f
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
            ml_float8_t tmp3;
            int32_t tmp4;

            memcpy(&tmp0, ((ml_float8_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            memcpy(&tmp1, ((ml_float8_t*)(external_bench_wrapper_input_table_arg1+ i)), 32);
            tmp2 = Sleef_hypotf8_u35kvx(tmp0, tmp1);
            memcpy(((ml_float8_t*)(external_bench_wrapper_output_table+ i)), &(tmp2), 32);
            tmp3 = local_acc + tmp2;
            local_acc = tmp3;
            tmp4 = i + INT32_C(8);
            i = tmp4;
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
    printf("Sleef_hypotf8_u35kvx %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_hypotf8_u35kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
