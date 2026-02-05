/**
 * generated using metalibm 1.1
 * sha1 git: b'"3425a70973ff93e510359b9b2fa45754ebf43279"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_coshf.c --function coshf --headers math.h,ml_support_lib.h \
 *     --input-formats binary32 --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <math.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile float external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.03181ap-64f, 0.0f, 0x1.b1a694p-79f, 0x1.ffa7dep-118f, 0.0f, 0.0f,
     0x1.66433p-110f, 0.0f, 0.0f, 0x1.2b8418p-51f, 0.0f, 0x1.9d328cp-117f, 0.0f,
     0x1.421da8p-77f, 0.0f, 0.0f, 0x1.e356ecp-106f, 0x1.2db866p-15f, 0.0f, 0.0f,
     0x1.c7e2e8p-94f, 0x1.864c8ap-79f, 0.0f, 0x1.d4c8dp-118f, 0.0f, 0x1.7b55c2p-5f,
     0x1.9f9856p-101f, 0.0f, 0.0f, 0.0f, 0x1.89a948p-104f, 0x1.26ef68p-16f,
     0x1.7882c8p-35f, 0x1.5cd81p-123f, 0x1.313078p-66f, 0.0f, 0x1.d71154p-36f, 0.0f,
     0.0f, 0x1.b9b0b2p-25f, 0.0f, 0x1.1a8dd4p-92f, 0x1.1eb78ep-26f, 0.0f,
     0x1.af3ca6p-34f, 0x1.4ce7dcp-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.47c5b2p-1f, 0.0f, 0x1.9076eap-34f, 0x1.934502p-115f, 0.0f,
     0x1.d7619cp-124f, 0x1.82d85cp-63f, 0x1.adf976p-8f, 0x1.2bf524p-12f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.603dc2p-91f, 0.0f, 0x1.c27ebap-47f, 0x1.8c3cbap-11f,
     0x1.5eed8cp-22f, 0.0f, 0x1.41881p-97f, 0.0f, 0.0f, 0.0f, 0x1.d6bd14p-64f, 0.0f,
     0.0f, 0x1.f01ab6p-84f, 0x1.8d0718p-66f, 0x1.939698p-122f, 0x1.a78a78p-63f, 0.0f,
     0.0f, 0x1.a754fp-92f, 0x1.e681acp-83f, 0x1.d491b8p-34f, 0x1.092c8cp-96f,
     0x1.520dfep-104f, 0x1.e03c88p-35f, 0.0f, 0.0f, 0.0f, 0x1.42175cp-124f, 0.0f,
     0x1.c2d96ap-46f, 0x1.ca3b0cp-10f, 0x1.a054f4p-110f, 0x1.d7e534p-1f,
     0x1.5f09c8p-91f, 0x1.8f9f4p-33f, 0x1.f677fap-84f, 0x1.8cd72p-60f, 0.0f,
     0x1.4d163ep-126f, 0x1.3af69cp-34f, 0.0f, 0x1.366638p-94f, 0x1.9eb6eep-92f,
     0x1.06f44ap-102f, 0x1.9dad84p-60f, 0x1.15cfd6p-59f, 0x1.19acaap-60f, 0.0f, 0.0f,
     0x1.0e819cp-109f, 0.0f, 0x1.29f6c4p-51f, 0x1.e0199cp-62f, 0.0f, 0.0f,
     0x1.61f13p-64f, 0.0f, 0.0f, 0.0f, 0x1.58bddap-73f, 0x1.4b495ap-3f,
     0x1.1468ap-67f, 0x1.1cc1e2p-16f, 0x1.0160c4p-91f, 0x1.edf232p-108f, 0.0f,
     0x1.9d1b14p-12f, 0.0f, 0.0f, 0x1.aa6336p-117f, 0.0f, 0.0f, 0.0f, 0x1.b626ecp-14f,
     0.0f, 0.0f, 0x1.fb4562p-28f, 0x1.6bdc48p-117f, 0x1.f4b4d6p-79f, 0.0f, 0.0f, 0.0f,
     0x1.597d0ep-86f, 0x1.2a784cp-27f, 0.0f, 0x1.f1c4ap-3f, 0x1.70384p-18f, 0.0f,
     0x1.cc7606p-12f, 0.0f, 0.0f, 0x1.4bc3c2p-102f, 0.0f, 0.0f, 0.0f, 0x1.3fb0b4p-29f,
     0x1.eb0bc2p-26f, 0x1.34bb92p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.05887p-2f,
     0x1.52940ap-41f, 0.0f, 0x1.bc1918p-80f, 0x1.b95d2cp-120f, 0x1.96f15ep-26f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.fc1e0cp-101f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.52099ap-23f, 0.0f, 0x1.d24b58p-74f, 0x1.eb9136p-7f, 0x1.e5cfaap-109f, 0.0f,
     0.0f, 0x1.55a08cp-69f, 0.0f, 0x1.513282p-44f, 0x1.2f724cp-113f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.00946ep-37f, 0.0f, 0.0f, 0x1.092bacp-122f, 0.0f, 0.0f, 0x1.2f4b18p-87f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7599f2p-11f, 0.0f, 0.0f, 0x1.6c8806p-78f, 0.0f,
     0.0f, 0x1.e4a6f2p-71f, 0x1.2ef932p-25f, 0x1.9b59dap-114f, 0x1.48e8bcp-46f,
     0x1.2a12f2p-91f, 0.0f, 0x1.9367b6p-33f, 0.0f, 0.0f, 0x1.aba314p-83f,
     0x1.5c59a6p-109f, 0x1.008274p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4a8e76p-93f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b0d3d8p-11f,
     0.0f, 0.0f, 0x1.74a84ap-8f, 0x1.717d6ep-62f, 0.0f, 0x1.eed554p-13f,
     0x1.ae544ap-31f, 0.0f, 0.0f, 0x1.acf338p-87f, 0x1.7bc132p-74f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e023cap-72f, 0.0f, 0x1.5c1f3cp-40f, 0.0f, 0x1.83e7bap-96f, 0.0f,
     0x1.84a91ap-35f, 0x1.113b44p-105f, 0x1.6fb6e8p-80f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c9d9fp-81f, 0.0f, 0.0f, 0x1.a6c758p-24f, 0.0f, 0x1.3ef2e6p-110f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.468b5p-117f, 0x1.9e7beep-116f, 0.0f, 0x1.c8c1fp-74f,
     0x1.906d3p-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0fb864p-66f, 0x1.b37142p-11f, 0.0f,
     0.0f, 0x1.d8da6cp-33f, 0x1.0efe34p-91f, 0x1.4a52c8p-38f, 0.0f, 0x1.055c14p-45f,
     0.0f, 0x1.f0aa4ep-77f, 0.0f, 0.0f, 0x1.346d04p-33f, 0x1.174bd6p-16f, 0.0f, 0.0f,
     0.0f, 0x1.5c5d6cp-84f, 0x1.d3ac04p-34f, 0.0f, 0x1.d1fbe2p-5f, 0.0f, 0.0f,
     0x1.eaaa06p-117f, 0x1.3ac72ap-15f, 0x1.31e2cap-78f, 0.0f, 0x1.90aed6p-37f,
     0x1.add52ap-72f, 0.0f, 0.0f, 0x1.841796p-116f, 0x1.03b466p-75f, 0x1.d6c63p-47f,
     0x1.4ab464p-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a659b2p-19f, 0x1.6c17c4p-80f,
     0.0f, 0.0f, 0x1.ad8924p-38f, 0x1.8ce2bp-62f, 0x1.c356ap-108f, 0x1.7911d4p-79f,
     0.0f, 0x1.657fbcp-14f, 0x1.70ddf8p-91f, 0.0f, 0.0f, 0x1.dfb30cp-62f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.cd4e36p-126f, 0x1.63f3cep-110f, 0.0f, 0.0f, 0.0f,
     0x1.7d5c58p-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.02e81p-33f, 0x1.5335dep-123f,
     0x1.ecaa86p-56f, 0x1.4e2802p-102f, 0x1.44048p-67f, 0x1.6a28fap-109f, 0.0f, 0.0f,
     0.0f, 0x1.b98776p-115f, 0.0f, 0x1.f6babep-6f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.86f3aep-60f, 0x1.e7e284p-13f, 0x1.60e35ap-45f, 0.0f, 0.0f, 0x1.49c98p-58f,
     0x1.9a11c6p-60f, 0.0f, 0x1.99ee1p-113f, 0x1.024922p-124f, 0.0f, 0.0f,
     0x1.b3d8ecp-114f, 0x1.49d6dcp-102f, 0x1.bc6282p-58f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.4aea54p-120f, 0x1.6ad4dp-69f, 0x1.9f766ap-42f,
     0x1.1ed32ap-5f, 0x1.a418a6p-116f, 0.0f, 0.0f, 0.0f, 0x1.62ac0ap-122f,
     0x1.08ee36p-71f, 0x1.7afeep-18f, 0.0f, 0x1.8dc984p-2f, 0.0f, 0.0f,
     0x1.9eb2bcp-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4489cep-86f,
     0x1.9dca3p-114f, 0x1.8cb94p-39f, 0.0f, 0.0f, 0.0f, 0x1.ae2d0ep-81f, 0.0f,
     0x1.ec3fb8p-74f, 0.0f, 0.0f, 0x1.c0d87ep-76f, 0.0f, 0x1p0f, 0.0f, 0.0f,
     0x1.ba8c04p-4f, 0.0f, 0x1.acff2cp-54f, 0.0f, 0.0f, 0x1.cfa8c8p-111f,
     0x1.33e05ep-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5bcadep-9f, 0x1.420ac6p-101f,
     0x1.2a935p-8f, 0.0f, 0x1.3800ecp-86f, 0.0f, 0.0f, 0.0f, 0x1.abc522p-105f,
     0x1.feacc8p-75f, 0x1.498b14p-41f, 0.0f, 0x1.553f0cp-51f, 0.0f, 0.0f, 0.0f,
     0x1.a1ac72p-48f, 0x1.35cf9p-47f, 0x1.77a73cp-86f, 0x1.ead404p-28f,
     0x1.9508c2p-93f, 0.0f, 0x1.04e674p-36f, 0x1.5386b2p-96f, 0.0f, 0x1.2fb6f2p-9f,
     0.0f, 0.0f, 0.0f, 0x1.a0db0ap-120f, 0x1.7c68fp-33f, 0.0f, 0.0f, 0.0f,
     0x1.7d411ap-8f, 0.0f, 0.0f, 0.0f, 0x1.cee7fap-102f, 0.0f, 0x1.0757aep-16f,
     0x1.9adc94p-52f, 0.0f, 0x1.91cc5cp-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6d98d6p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c2a648p-79f, 0.0f, 0.0f, 0.0f,
     0x1.0dbe06p-51f, 0x1.ccfa96p-88f, 0.0f, 0x1.89ef88p-36f, 0x1.7344fp-26f,
     0x1.07ae52p-77f, 0.0f, 0.0f, 0x1.fb4f9ep-5f, 0x1.6690e2p-8f, 0x1.e2b6e2p-46f,
     0x1.32ebd8p-94f, 0.0f, 0.0f, 0.0f, 0x1.f01d12p-100f, 0x1.9f2484p-120f, 0.0f,
     0x1.d8af34p-93f, 0x1.8f0b76p-4f, 0x1.b63332p-107f, 0x1.49ad4cp-111f,
     0x1.e72fb8p-11f, 0.0f, 0x1.c1a3d2p-105f, 0.0f, 0x1.a73e8cp-47f, 0x1.60e99ap-59f,
     0x1.6f426cp-42f, 0x1.b7fc6cp-88f, 0x1.40a194p-15f, 0x1.802182p-103f,
     0x1.82c9aap-102f, 0x1.42eaccp-94f, 0x1.d7bbcp-109f, 0.0f, 0x1.f47f8cp-72f,
     0x1.a9a41ap-57f, 0x1.57c86ap-67f, 0.0f, 0x1.63108ap-2f, 0.0f, 0.0f,
     0x1.06aa48p-97f, 0.0f, 0x1.b5532ap-114f, 0x1.733782p-27f, 0.0f, 0x1.7a9006p-97f,
     0.0f, 0x1.18554p-57f, 0x1.2a3edp-86f, 0.0f, 0x1.10bf64p-23f, 0x1.03f798p-30f,
     0.0f, 0x1.1c6466p-25f, 0.0f, 0x1.43c9p-95f, 0x1.83ea04p-76f, 0x1.c6f07ep-19f,
     0x1.bff844p-55f, 0x1.c6d264p-114f, 0.0f, 0x1.b1a9ap-86f, 0x1.76a71ap-113f, 0.0f,
     0x1.200a2cp-33f, 0x1.735af8p-22f, 0.0f, 0x1.0656dap-104f, 0x1.c5ef84p-96f, 0.0f,
     0.0f, 0x1.22193cp-59f, 0.0f, 0x1.deaa1cp-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.dc4874p-62f, 0x1.8aeefep-95f, 0.0f, 0x1.c73148p-28f, 0.0f, 0x1.6310dcp-10f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4db4aep-23f, 0.0f, 0.0f,
     0x1.6623c6p-107f, 0.0f, 0.0f, 0.0f, 0x1.93296ep-46f, 0.0f, 0x1.31a75ap-50f, 0.0f,
     0.0f, 0x1.654ffcp-63f, 0x1.139eccp-39f, 0x1.3c1994p-62f, 0x1.29c8dcp-64f, 0.0f,
     0x1.8ae5eap-112f, 0x1.e8e41p-105f, 0.0f, 0x1.31f4c4p-35f, 0.0f, 0x1.6f9e4ap-84f,
     0x1p0f, 0.0f, 0x1.1c5bcap-119f, 0x1.66e584p-22f, 0.0f, 0.0f, 0x1.b617eap-47f,
     0.0f, 0.0f, 0x1.6a050ep-12f, 0.0f, 0x1.69604p-36f, 0.0f, 0.0f, 0x1.53cc98p-105f,
     0x1.258468p-17f, 0.0f, 0x1.1e0bdap-80f, 0x1.2d125ap-55f, 0.0f, 0.0f,
     0x1.9598fp-34f, 0.0f, 0x1.97a686p-13f, 0x1.deef66p-96f, 0.0f, 0x1.dd2724p-121f,
     0.0f, 0.0f, 0.0f, 0x1.09039ap-100f, 0.0f, 0.0f, 0.0f, 0x1.a67b78p-116f,
     0x1.a95432p-84f, 0.0f, 0x1.17e578p-17f, 0x1.e0347p-101f, 0x1.3adc7ap-110f,
     0x1.20f34cp-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.52fa4ap-124f, 0.0f,
     0x1.230db6p-66f, 0x1.15b90ap-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e32bc2p-60f,
     0x1.1ee67cp-71f, 0x1.df255p-123f, 0.0f, 0x1.9c0e8ep-9f, 0.0f, 0.0f,
     0x1.753cdep-90f, 0x1.5b5a56p-88f, 0x1.07301ep-108f, 0.0f, 0x1.6e36c6p-61f, 0.0f,
     0x1.c93a26p-112f, 0.0f, 0x1.a5a89p-117f, 0x1.130c42p-73f, 0x1.e1ce68p-99f, 0.0f,
     0.0f, 0x1.b8eb5p-93f, 0.0f, 0.0f, 0.0f, 0x1.e842ccp-113f, 0.0f, 0x1.efb68cp-31f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.0775e2p-75f, 0x1.a6eb1p-41f, 0.0f, 0.0f,
     0x1.0eb6a4p-58f, 0.0f, 0.0f, 0x1.321e9p-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.208b66p-41f, 0x1.6edd7p-105f, 0.0f, 0.0f, 0x1.b69f24p-56f,
     0x1.d488a4p-109f, 0.0f, 0.0f, 0.0f, 0x1.93725ep-77f, 0.0f, 0x1.6809e4p-86f,
     0x1.fe1b16p-56f, 0x1.2867fp-99f, 0.0f, 0.0f, 0x1.d7ecfep-17f, 0x1.d73122p-122f,
     0x1.e4eda6p-100f, 0.0f, 0.0f, 0x1.9f322cp-66f, 0.0f, 0x1.35741ap-19f,
     0x1.512f1ap-84f, 0.0f, 0x1.04e378p-51f, 0.0f, 0.0f, 0x1.2c00acp-73f,
     0x1.e5e08cp-64f, 0.0f, 0x1.c2e0c4p-122f, 0.0f, 0.0f, 0.0f, 0x1.584b06p-100f,
     0x1.a0697p-66f, 0x1.86f6d2p-106f, 0.0f, 0x1.d86f02p-84f, 0.0f, 0x1.9e4a16p-96f,
     0x1.d0a7f8p-14f, 0.0f, 0x1.189454p-73f, 0.0f, 0.0f, 0.0f, 0x1.4ba3ecp-50f,
     0x1.db1e06p-76f, 0x1.5e73b6p-72f, 0.0f, 0x1.287682p-93f, 0x1.e1b354p-117f,
     0x1.277938p-32f, 0.0f, 0x1.2c4886p-57f, 0x1.b6f284p-122f, 0.0f, 0x1.ccca66p-9f,
     0.0f, 0x1.72454ep-59f, 0x1.ad531ep-68f, 0.0f, 0x1.9b12bep-109f, 0.0f,
     0x1.f1ccc4p-54f, 0.0f, 0x1.e7c78p-117f, 0x1.a30a5cp-110f, 0x1.e320d8p-85f, 0.0f,
     0.0f, 0x1.0932d6p-8f, 0x1.a142p-123f, 0x1.1251bcp-110f, 0x1.006ed2p-35f, 0.0f,
     0x1.e0f32p-7f, 0.0f, 0x1.8a483ap-101f, 0.0f, 0.0f, 0.0f, 0x1.4d5aa8p-108f,
     0x1.7057fp-79f, 0x1.7e957p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.44083cp-49f, 0x1.e884dep-37f, 0.0f, 0x1.47816cp-75f, 0.0f, 0x1.87fe3p-72f,
     0.0f, 0.0f, 0.0f, 0x1.de9da8p-87f, 0x1.af7a22p-41f, 0x1.553242p-100f,
     0x1.da99c8p-94f, 0.0f, 0x1.f61cf4p-76f, 0.0f, 0.0f, 0x1.4746a8p-118f, 0.0f, 0.0f,
     0x1.316d08p-84f, 0x1.53e512p-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a51a4ap-35f,
     0x1.d5d94ep-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0e21b2p-11f, 0.0f,
     0x1.266becp-71f, 0x1.26cf0ap-126f, 0x1.f7772ap-48f, 0x1.f55298p-126f, 0.0f, 0.0f,
     0x1.255d4ap-50f, 0x1.1aa7d2p-95f, 0.0f, 0x1.4929ccp-73f, 0.0f, 0x1.6da75ep-25f,
     0.0f, 0.0f, 0x1.30cbfep-110f, 0.0f, 0x1.744b2ep-108f, 0x1.6e998ep-16f, 0.0f,
     0x1.fc7fc4p-67f, 0.0f, 0.0f, 0x1.3e647ep-73f, 0.0f, 0.0f, 0x1.3c6aa8p-115f,
     0x1.173e9ap-33f, 0.0f, 0x1.a40322p-22f, 0x1.51305ap-109f, 0x1.b8ba72p-125f,
     0x1.d6ca72p-17f, 0x1.64e5bp-114f, 0x1.aec112p-81f, 0.0f, 0.0f, 0x1.a3e32cp-53f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7df0bap-109f, 0.0f, 0.0f, 0x1.83d7a6p-32f,
     0x1.c70844p-14f, 0.0f, 0.0f, 0x1.39ee7p-90f, 0.0f, 0x1.bc49dcp-44f, 0.0f, 0.0f,
     0x1.c5702p-125f, 0x1.3ba744p-70f, 0x1.510ebep-43f, 0x1.e2911cp-109f,
     0x1.4b873cp-25f, 0.0f, 0x1.0a115cp-37f, 0x1.d245cep-75f, 0x1.dfd69cp-103f, 0.0f,
     0x1.80bbcep-105f, 0x1.e6707ap-56f, 0.0f, 0x1.56515ap-34f, 0x1.fe3b3cp-20f, 0.0f,
     0.0f, 0x1.9a574cp-121f, 0x1.25c07ap-78f, 0x1.b77602p-36f, 0x1.650e2ap-27f,
     0x1.59c316p-105f, 0x1.1ea5acp-23f, 0.0f, 0.0f, 0x1.1c07cp-30f, 0.0f, 0.0f,
     0x1.ad4a9p-81f, 0.0f, 0x1.0c3c5cp-71f, 0x1.de4b84p-63f, 0x1.ce533p-124f,
     0x1.dbb71p-79f, 0.0f, 0x1.4b629p-106f, 0x1.671e6ap-23f, 0.0f, 0.0f,
     0x1.a333dcp-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.27798cp-116f, 0x1.acb25ep-89f,
     0x1.e6f566p-65f, 0.0f, 0x1.221c28p-12f, 0.0f, 0x1.c406e4p-71f, 0x1.b2284ep-115f,
     0.0f, 0x1.34c5f2p-107f, 0.0f, 0x1.b24d48p-19f, 0x1.32148cp-3f, 0x1.9002a2p-60f,
     0x1.bb6a2cp-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.6b172ap-60f, 0x1.d62f76p-45f, 0x1.5b782cp-1f, 0x1.228fe8p-44f, 0.0f,
     0x1.7655bp-47f, 0.0f, 0.0f, 0x1.5da82ap-8f, 0x1.f5a11ap-31f, 0x1.d2d7fp-77f,
     0.0f
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
            tmp1 = coshf(tmp0);
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
    printf("coshf %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("coshf bench acc %a\n", global_bench_acc);
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
