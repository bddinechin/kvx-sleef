/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_expm1f8_u10kvx.c --function \
 *     Sleef_finz_expm1f8_u10kvx --headers sleef.h,ml_support_lib.h \
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
     0x1.457ad4p-71f, 0.0f, 0.0f, 0x1.b928a2p-57f, 0.0f, 0.0f, 0.0f, 0x1.4cceecp-38f,
     0x1.1b3e9ep-13f, 0.0f, 0x1.304f58p-59f, 0x1.2e6d2cp-25f, 0x1.5d7058p-20f, 0.0f,
     0.0f, 0.0f, 0x1.f79a18p-14f, 0.0f, 0x1.b5cfc2p-100f, 0.0f, 0x1.6a3644p-43f,
     0x1.b71d62p-71f, 0.0f, 0.0f, 0x1.19473ap-121f, 0x1.8c2cf8p-73f, 0x1.943f44p-118f,
     0x1.fc029cp-50f, 0.0f, 0.0f, 0x1.77c466p-51f, 0.0f, 0x1.b764c4p-97f, 0.0f,
     0x1.9762aap-100f, 0.0f, 0.0f, 0.0f, 0x1.5f37bcp-62f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.279818p-91f, 0x1.efb90cp-37f, 0.0f, 0.0f, 0x1.ec58p-48f, 0.0f, 0.0f,
     0x1.c4e89cp-121f, 0x1.75ed62p-59f, 0.0f, 0x1.2835b4p-36f, 0x1.c24764p-65f,
     0x1.99aa8ep-87f, 0x1.b6640cp-116f, 0x1.dab3bep-25f, 0.0f, 0x1.eb1e26p-47f, 0.0f,
     0.0f, 0x1.1ddbd2p-83f, 0x1.c39716p-23f, 0x1.a2112ep-91f, 0.0f, 0x1.62295ap-96f,
     0.0f, 0.0f, 0.0f, 0x1.4bbbd6p-36f, 0x1.170232p-72f, 0.0f, 0.0f, 0x1.1a2c3p-60f,
     0.0f, 0x1.d03e22p-41f, 0x1.b0de58p-39f, 0x1.488084p-92f, 0x1.6fb32ep-104f,
     0x1.e5e418p-85f, 0x1.166d2p-64f, 0.0f, 0x1.66a1b4p-84f, 0x1.448fbep-68f, 0.0f,
     0.0f, 0.0f, 0x1.946866p-102f, 0.0f, 0x1.5533dcp-118f, 0x1.f70ffcp-21f, 0.0f,
     0.0f, 0.0f, 0x1.d63e52p-88f, 0.0f, 0.0f, 0x1.132bbp-77f, 0x1.8c568p-50f,
     0x1.e3e89cp-63f, 0.0f, 0.0f, 0x1.3cbb6p-33f, 0.0f, 0x1.5f8b5ep-42f, 0.0f, 0.0f,
     0.0f, 0x1.6881ap-102f, 0.0f, 0.0f, 0x1.410c58p-50f, 0x1.9bdec8p-76f,
     0x1.a970dp-72f, 0x1.4dca9cp-126f, 0.0f, 0x1.ead54ep-101f, 0x1.6841ep-91f, 0.0f,
     0x1.10aba4p-113f, 0x1.fb9338p-92f, 0.0f, 0.0f, 0x1.1a377cp-46f, 0.0f,
     0x1.833ef6p-108f, 0.0f, 0.0f, 0x1.6ab344p-40f, 0.0f, 0.0f, 0x1.e3b284p-80f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0117f8p-23f, 0x1.036baap-22f, 0.0f, 0.0f,
     0x1.56453cp-32f, 0x1.8d02c2p-107f, 0.0f, 0x1.20736ep-18f, 0x1.26064ap-91f, 0.0f,
     0.0f, 0x1.c9f2dap-80f, 0x1.8240f4p-45f, 0x1.6b0612p-53f, 0.0f, 0.0f, 0.0f,
     0x1.a22a66p-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1e3de2p-26f, 0x1.7a3a3ap-71f,
     0x1.eda53cp-126f, 0x1.4d7f62p-25f, 0x1.81656ep-18f, 0.0f, 0x1.1d905p-111f,
     0x1.d10bf2p-99f, 0.0f, 0x1.e7fbf2p-25f, 0x1.421d7p-78f, 0x1.c629dcp-31f, 0.0f,
     0x1.32cc18p-111f, 0x1.8a787ep-105f, 0.0f, 0x1.71eda8p-50f, 0.0f, 0.0f,
     0x1.32d1b6p-58f, 0.0f, 0x1.7e3e1ep-56f, 0x1.5ea734p-85f, 0.0f, 0x1.86e352p-59f,
     0.0f, 0x1.c9d89p-13f, 0.0f, 0.0f, 0.0f, 0x1.adeba6p-94f, 0.0f, 0x1.8b111ap-80f,
     0.0f, 0x1.e30048p-73f, 0.0f, 0x1.d107aep-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7d164p-16f, 0.0f, 0x1.64ea04p-85f, 0x1.39f3e8p-42f, 0.0f, 0.0f, 0.0f,
     0x1.1d9fa4p-115f, 0.0f, 0x1.ba9558p-66f, 0.0f, 0.0f, 0.0f, 0x1.d3d4bep-41f,
     0x1.aa96d2p-110f, 0x1.2f3896p-20f, 0.0f, 0.0f, 0x1.2713b2p-105f, 0.0f,
     0x1.ee1f04p-112f, 0.0f, 0x1.ea7832p-41f, 0.0f, 0x1.d217eap-2f, 0.0f,
     0x1.e8b78ap-40f, 0.0f, 0x1.03f986p-105f, 0x1.b79232p-39f, 0x1.5283b8p-60f,
     0x1.e7b0b2p-115f, 0x1.a419e2p-55f, 0x1.94c47cp-103f, 0.0f, 0.0f,
     0x1.49512ep-115f, 0x1.5630bp-50f, 0.0f, 0x1.510f9ap-92f, 0x1.5c5268p-34f,
     0x1.7a20f4p-19f, 0x1.e01766p-59f, 0.0f, 0x1.8ad768p-118f, 0.0f, 0x1.34d732p-86f,
     0x1.a1b748p-93f, 0.0f, 0.0f, 0x1.305d64p-60f, 0x1.a3c61cp-42f, 0x1.732dc2p-88f,
     0.0f, 0x1.f9afb2p-115f, 0x1.75c754p-41f, 0x1.43a10ep-37f, 0x1.862ea8p-121f, 0.0f,
     0.0f, 0x1.e395eap-4f, 0x1.d4bfep-10f, 0.0f, 0x1.5e5d0cp-102f, 0.0f,
     0x1.cc359p-25f, 0x1.0a2cbcp-122f, 0.0f, 0x1.8bd9e2p-42f, 0x1.6ee86p-53f, 0.0f,
     0x1.22a112p-26f, 0.0f, 0x1.e66354p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a78c7ep-92f,
     0x1.00e612p-126f, 0.0f, 0x1.68718cp-125f, 0x1.2ccd7p-2f, 0.0f, 0x1.f87a94p-32f,
     0x1.716218p-27f, 0x1.48c536p-107f, 0.0f, 0.0f, 0x1.cae4bp-62f, 0.0f, 0.0f,
     0x1.386f0ap-126f, 0.0f, 0.0f, 0x1.8882ecp-47f, 0x1.dcf36p-61f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.0f9536p-17f, 0x1.e780e8p-72f, 0x1.ac8ap-48f, 0.0f, 0.0f,
     0x1.d58864p-75f, 0.0f, 0.0f, 0x1.caa82ep-59f, 0x1.b9aa58p-95f, 0x1.18514ap-73f,
     0.0f, 0x1.00438cp-45f, 0.0f, 0x1.87c97ap-126f, 0.0f, 0.0f, 0x1.6a3e82p-116f,
     0x1.ca1f84p-77f, 0x1.bf5078p-52f, 0x1.115514p-57f, 0.0f, 0x1.170a6cp-103f, 0.0f,
     0x1.3bfe26p-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e4a784p-117f,
     0x1.2baff4p-55f, 0.0f, 0.0f, 0x1.754f6cp-100f, 0x1.5bfe1cp-39f, 0.0f,
     0x1.1b90fcp-21f, 0x1.bf2e2cp-49f, 0.0f, 0x1.d94994p-10f, 0x1.b6cebap-89f,
     0x1.37a888p-49f, 0.0f, 0.0f, 0.0f, 0x1.5a21e4p-3f, 0x1.bbcc94p-25f,
     0x1.963536p-51f, 0x1.662078p-25f, 0x1.7f9fb2p-87f, 0x1.633c5ep-39f,
     0x1.f4e0cap-36f, 0x1p0f, 0x1.e3ba94p-115f, 0x1.6d7128p-2f, 0x1.89e2d4p-27f,
     0x1.ec123ep-38f, 0.0f, 0x1.58b608p-41f, 0.0f, 0x1.b1a0e8p-11f, 0x1.f2cfdep-39f,
     0x1.e60bf6p-103f, 0x1.83be6ap-62f, 0.0f, 0x1.ae3a56p-13f, 0x1.fdfca4p-85f, 0.0f,
     0x1.944d64p-80f, 0x1.e930f4p-93f, 0.0f, 0x1.388c16p-100f, 0x1.30d29ap-21f,
     0x1.6acc32p-17f, 0x1.f696dep-15f, 0x1.f237d6p-23f, 0.0f, 0.0f, 0x1.4352e6p-39f,
     0.0f, 0x1.ef7938p-97f, 0x1.736e8ap-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.53993cp-41f,
     0x1.4dcfa8p-70f, 0x1.842c46p-120f, 0x1.ed775ep-29f, 0x1.5d43d8p-91f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b2ee98p-2f, 0.0f, 0x1.d2a216p-29f,
     0x1.62309ap-56f, 0x1.26fc26p-20f, 0x1.989efcp-42f, 0.0f, 0x1.669f08p-87f,
     0x1.0906cap-6f, 0.0f, 0.0f, 0.0f, 0x1.bfa7f8p-86f, 0.0f, 0x1.a2a7a4p-122f, 0.0f,
     0x1.22df64p-61f, 0.0f, 0.0f, 0.0f, 0x1.40a2e2p-54f, 0.0f, 0x1.f02ea4p-49f, 0.0f,
     0.0f, 0x1.15d40cp-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.313e86p-72f, 0x1.8b8a1ep-80f,
     0.0f, 0x1.9a00aap-123f, 0x1.1bcef6p-76f, 0.0f, 0x1.ca39cep-90f, 0x1.dc452cp-37f,
     0.0f, 0x1.9e4716p-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cdc5c2p-21f,
     0x1.0e1cfcp-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9b39dcp-39f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.992c26p-107f, 0x1.87a518p-60f, 0x1.b0d724p-99f, 0x1.5fd458p-77f, 0.0f, 0.0f,
     0.0f, 0x1.83edf6p-64f, 0x1.1ea016p-8f, 0.0f, 0x1.283bd8p-89f, 0x1.539fe6p-80f,
     0.0f, 0x1.0c1e72p-3f, 0x1.717d42p-67f, 0.0f, 0x1.040ddap-124f, 0x1.08997ap-105f,
     0x1.f14456p-6f, 0.0f, 0x1.cf9a74p-88f, 0x1.180318p-41f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.221122p-64f, 0x1.2ce9fap-2f, 0x1.4b4af6p-95f, 0x1.3f43d8p-39f,
     0.0f, 0x1.392f6p-92f, 0.0f, 0x1.fd796ep-94f, 0x1.b45a5p-101f, 0.0f, 0.0f,
     0x1.bcf0d6p-121f, 0.0f, 0x1.7c1a22p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c5201ep-96f, 0x1.be9608p-92f, 0.0f, 0x1.4fd358p-67f, 0.0f, 0.0f,
     0x1.c46daap-26f, 0.0f, 0x1.9450e2p-120f, 0x1.8389b4p-116f, 0.0f, 0x1.141222p-69f,
     0x1.a0bfd2p-125f, 0.0f, 0.0f, 0.0f, 0x1.ef9b12p-41f, 0.0f, 0.0f, 0.0f,
     0x1.0fbf86p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5bd91ep-33f, 0.0f, 0.0f,
     0x1.cc5e98p-2f, 0.0f, 0.0f, 0x1.a7f1e6p-21f, 0.0f, 0x1.b2142ep-98f, 0.0f,
     0x1.70f7cep-40f, 0x1.ade3ccp-23f, 0x1.f80438p-33f, 0.0f, 0.0f, 0.0f,
     0x1.ffcad6p-118f, 0.0f, 0x1.aad7p-101f, 0.0f, 0x1.0dfbcep-22f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.bed5ep-39f, 0.0f, 0.0f, 0x1.e3438ap-95f, 0x1.024688p-120f, 0.0f, 0.0f,
     0.0f, 0x1.8ab7a8p-71f, 0x1.2ce582p-17f, 0.0f, 0.0f, 0.0f, 0x1.0cd832p-98f,
     0x1.b01ccp-79f, 0x1.519cbp-1f, 0.0f, 0x1.c906f2p-52f, 0.0f, 0.0f,
     0x1.0f3e46p-52f, 0x1.493d2p-85f, 0x1.3a1718p-64f, 0.0f, 0x1.c91126p-26f,
     0x1.7fd10ep-54f, 0x1.79b81ep-19f, 0x1.12fbb4p-100f, 0.0f, 0x1.55b0d8p-20f, 0.0f,
     0x1.dffa2ep-9f, 0.0f, 0.0f, 0.0f, 0x1.8b8c0ep-19f, 0x1.86aae2p-119f, 0.0f,
     0x1.11a566p-81f, 0.0f, 0x1.438d08p-36f, 0.0f, 0x1.a36e56p-76f, 0.0f,
     0x1.8e46bcp-103f, 0.0f, 0x1.da9106p-119f, 0x1.7f994ap-91f, 0.0f, 0x1.827c92p-8f,
     0.0f, 0x1.6be374p-104f, 0.0f, 0.0f, 0.0f, 0x1.d992d8p-1f, 0.0f, 0x1.29ec52p-80f,
     0.0f, 0.0f, 0x1.691b7cp-11f, 0.0f, 0.0f, 0x1.f3bd4ap-28f, 0x1.d1eb34p-88f, 0.0f,
     0.0f, 0x1.9d6f64p-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5f0db2p-13f, 0.0f,
     0.0f, 0x1.4dbb18p-107f, 0x1.0e617p-48f, 0.0f, 0x1.cd921ap-99f, 0x1.1e47ecp-103f,
     0.0f, 0x1.667a2cp-91f, 0.0f, 0x1.74bf16p-20f, 0x1.c4d6acp-15f, 0x1.f4dc0cp-24f,
     0.0f, 0x1.52bd9ap-29f, 0.0f, 0x1.e1a0b8p-80f, 0x1.080a82p-28f, 0.0f, 0.0f,
     0x1.7b4aeap-45f, 0x1.20941cp-14f, 0x1.59bf22p-107f, 0x1.32f96ep-66f, 0.0f,
     0x1p0f, 0.0f, 0.0f, 0x1.8cf5bap-20f, 0.0f, 0x1.3731a2p-63f, 0x1.d3e06cp-90f,
     0.0f, 0.0f, 0x1.af7e52p-54f, 0.0f, 0x1.218f2ap-51f, 0.0f, 0.0f, 0.0f,
     0x1.a8831ep-67f, 0x1.a7a8p-118f, 0x1.462ab2p-22f, 0x1.a4fe96p-107f, 0.0f,
     0x1.7075d8p-11f, 0.0f, 0x1.04dd6cp-16f, 0x1.5021b2p-20f, 0x1.1d3dbap-95f,
     0x1.6e5bc2p-100f, 0.0f, 0.0f, 0.0f, 0x1.ad058ap-18f, 0.0f, 0x1.f44594p-120f,
     0x1.6893f4p-49f, 0.0f, 0x1.730422p-54f, 0x1.9ac8a4p-67f, 0x1.2bef62p-25f, 0.0f,
     0x1.3186acp-84f, 0.0f, 0.0f, 0x1.84ba72p-30f, 0x1.5faf32p-104f, 0.0f,
     0x1.44a716p-123f, 0x1.3394bp-30f, 0.0f, 0x1.7978b2p-60f, 0x1.26fafap-48f,
     0x1.b0eb74p-41f, 0x1.c36c26p-15f, 0.0f, 0x1.612512p-75f, 0.0f, 0x1.972ff4p-91f,
     0x1.fafaccp-22f, 0.0f, 0x1.61ee7ap-107f, 0.0f, 0x1.5fa13ap-111f, 0.0f,
     0x1.2382cep-50f, 0x1.f0749ap-108f, 0x1.57355ap-45f, 0x1.a2679cp-86f,
     0x1.882e0ep-29f, 0x1.1b0eaap-24f, 0.0f, 0x1.83c242p-3f, 0x1.c77ed4p-115f, 0.0f,
     0x1.315d02p-112f, 0x1.41f368p-79f, 0x1.1f9036p-75f, 0x1.a4f328p-35f,
     0x1.01411ap-6f, 0.0f, 0x1.d442f8p-120f, 0x1.fc9162p-14f, 0.0f, 0x1.d7b0c8p-90f,
     0x1.c61aeep-51f, 0.0f, 0x1.635d46p-16f, 0x1.e4b62ep-23f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bd4d28p-38f, 0x1.5d968cp-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.34f1e4p-2f, 0x1.1c28eap-107f, 0x1.b7c3aap-39f, 0.0f, 0x1.7cddfcp-71f,
     0x1.90d066p-32f, 0x1.c2c3a2p-65f, 0.0f, 0x1.ee06e4p-21f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cf77cep-75f, 0.0f, 0x1.30fc08p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ed59c8p-114f, 0x1.3efa78p-78f, 0.0f, 0x1.6e64f8p-48f, 0x1.1eb80ap-91f,
     0x1.70f614p-75f, 0.0f, 0x1.c6f9dp-78f, 0x1.b5406ep-123f, 0.0f, 0x1.14284ap-105f,
     0x1.e03078p-42f, 0.0f, 0x1.628ecp-20f, 0x1.e233f4p-85f, 0.0f, 0x1.8107b6p-17f,
     0.0f, 0x1.f4f8f2p-122f, 0x1.a3fd1p-60f, 0.0f, 0x1.5eec3p-116f, 0.0f, 0.0f,
     0x1.838fdcp-88f, 0.0f, 0.0f, 0x1.28bbdep-71f, 0.0f, 0x1.b6b096p-107f,
     0x1.7d3774p-86f, 0x1.2d30b6p-70f, 0.0f, 0.0f, 0x1.06a05ep-4f, 0.0f, 0.0f,
     0x1.d4439cp-54f, 0x1.665516p-84f, 0x1.6cec2cp-61f, 0.0f, 0x1.0017ccp-70f, 0.0f,
     0x1.619002p-58f, 0x1.008ae6p-24f, 0.0f, 0x1.685554p-106f, 0x1.a6b438p-105f,
     0x1.0210a6p-27f, 0x1.5389bp-72f, 0x1.900516p-33f, 0x1.183abap-91f,
     0x1.be30dp-105f, 0.0f, 0.0f, 0x1.2c0608p-17f, 0x1.e61df8p-6f, 0.0f, 0.0f, 0.0f,
     0x1.b02ed4p-126f, 0.0f, 0.0f, 0.0f, 0x1.062e74p-35f, 0.0f, 0.0f, 0x1.88786ep-16f,
     0.0f, 0x1.886ec4p-7f, 0x1.d78b36p-40f, 0x1.aded14p-77f, 0.0f, 0x1.e1454p-65f,
     0x1.655e4p-81f, 0x1.431c9p-23f, 0.0f, 0.0f, 0x1.51d222p-23f, 0.0f, 0.0f,
     0x1.57cfep-35f, 0.0f, 0x1.ff5102p-85f, 0.0f, 0x1.9bc3eep-10f, 0.0f, 0.0f, 0.0f,
     0x1.80a032p-83f, 0.0f, 0x1.f5aa08p-111f, 0.0f, 0.0f, 0.0f, 0x1.9a8722p-124f,
     0x1.e0e85ap-25f, 0.0f, 0.0f, 0x1.1c2e74p-53f, 0.0f, 0x1.6d0638p-106f, 0.0f, 0.0f,
     0.0f, 0x1.8512e4p-121f, 0x1.4bb978p-88f, 0x1.a1d50cp-34f, 0.0f, 0x1.ca5b14p-72f,
     0.0f, 0x1.a0b38ep-1f, 0.0f, 0x1.5f53e8p-42f, 0.0f, 0.0f, 0x1.b646bep-57f, 0.0f,
     0x1.718b1cp-30f, 0x1.10862ap-33f, 0x1.340c5ap-54f, 0x1.07cc5ep-42f, 0.0f,
     0x1.77153ap-119f, 0.0f, 0.0f, 0x1.42ae94p-122f, 0x1.dd5384p-85f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a85fbap-14f, 0x1.c94694p-29f, 0x1.1ac3b4p-3f,
     0x1.6895e8p-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.53ed32p-36f, 0x1.deae7ap-83f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.448fbcp-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cd0f22p-92f, 0.0f,
     0.0f, 0x1.c0cb5p-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c04ba4p-39f, 0x1.de3e96p-110f,
     0.0f, 0x1.953f06p-81f, 0.0f, 0.0f, 0.0f, 0x1.99f4f6p-1f, 0.0f, 0.0f,
     0x1.9502a4p-32f, 0x1.3ab37ep-115f, 0x1.fde9a8p-27f, 0x1.2b10b2p-46f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.acac32p-121f, 0x1.1a0eb4p-46f, 0.0f, 0x1.2646a4p-55f, 0.0f,
     0x1.ea056ap-105f, 0x1.752e14p-105f, 0x1.ec7aaep-74f, 0x1.2511acp-102f, 0.0f,
     0x1.e61efcp-105f, 0x1.f65fbp-99f, 0x1.e727eep-34f, 0x1.aa664cp-75f,
     0x1.ed3996p-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8080e2p-77f, 0x1.5346fcp-97f, 0.0f,
     0.0f, 0x1.b5acdp-54f, 0x1.033352p-1f, 0x1.cffa4cp-74f, 0x1.447516p-79f,
     0x1.9fcfd8p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d22e4cp-50f,
     0x1.02ed64p-78f, 0.0f, 0x1.77bb82p-31f, 0.0f, 0.0f, 0x1.324da8p-51f, 0.0f, 0.0f,
     0x1.f55ef8p-119f, 0.0f, 0.0f, 0.0f, 0x1.0d221ep-98f, 0.0f, 0.0f, 0x1.3a288ap-79f
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
            tmp1 = Sleef_finz_expm1f8_u10kvx(tmp0);
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
    printf("Sleef_finz_expm1f8_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_finz_expm1f8_u10kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
