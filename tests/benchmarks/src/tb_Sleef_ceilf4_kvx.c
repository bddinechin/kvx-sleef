/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_ceilf4_kvx.c --function Sleef_ceilf4_kvx --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary32 --vector-size 4 \
 *     --function-input-vector-size 4 --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float4_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float4_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0.0f, 0.0f, 0.0f, 0x1.a81062p-10f, 0.0f, 0.0f, 0x1.343b48p-111f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.9e7bc6p-86f, 0x1.14f716p-30f, 0.0f, 0.0f, 0x1.2c93fap-34f, 0.0f,
     0.0f, 0.0f, 0x1.a6e6f8p-77f, 0.0f, 0x1.3df756p-96f, 0x1.d169c8p-55f, 0.0f,
     0x1.f3a174p-123f, 0x1.b0c90ep-14f, 0.0f, 0x1.a5f59ep-37f, 0.0f, 0.0f, 0.0f,
     0x1.1dcfdap-111f, 0.0f, 0.0f, 0x1.c41618p-60f, 0x1.88ffaep-94f, 0.0f,
     0x1.312648p-53f, 0.0f, 0.0f, 0x1.e4f9c6p-5f, 0x1.62a794p-34f, 0.0f,
     0x1.1f63f4p-63f, 0x1.147f5cp-101f, 0.0f, 0x1.0596ap-90f, 0x1.d77db4p-92f, 0.0f,
     0x1.a7f93ep-28f, 0x1.c98c74p-35f, 0.0f, 0x1.51c168p-72f, 0.0f, 0x1.f98e16p-51f,
     0.0f, 0x1.b7d99ep-35f, 0x1.5193a6p-107f, 0.0f, 0x1.04558p-121f, 0.0f, 0.0f,
     0x1.5217fep-2f, 0.0f, 0x1.15ea16p-65f, 0x1.27a91ap-46f, 0x1.9e187ep-34f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c15c4ep-76f, 0.0f, 0x1.7bd1ap-100f, 0x1.545e44p-105f,
     0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.430f72p-123f,
     0x1.877d12p-96f, 0x1.048ep-41f, 0x1.0f9658p-107f, 0.0f, 0x1.048bcep-124f,
     0x1.be4962p-110f, 0x1.53362ep-94f, 0.0f, 0x1.7a6604p-23f, 0x1.e4367cp-50f, 0.0f,
     0.0f, 0.0f, 0x1.ee46dep-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6ecb9cp-34f,
     0x1.472352p-53f, 0.0f, 0.0f, 0x1.d1f1d4p-13f, 0x1.ac584ap-16f, 0.0f, 0.0f,
     0x1.b299dcp-65f, 0x1.b23946p-18f, 0x1.f7d73cp-35f, 0x1.ebd4eep-35f, 0x1p0f,
     0x1.353038p-45f, 0.0f, 0x1.51c2a6p-4f, 0x1.cc2362p-24f, 0x1.7a0d48p-9f, 0.0f,
     0x1.ca3adcp-110f, 0x1.3a0a88p-95f, 0.0f, 0.0f, 0x1.6eb3a4p-2f, 0x1.493d56p-114f,
     0.0f, 0x1.2c7c2ap-110f, 0.0f, 0.0f, 0.0f, 0x1.b9942ep-58f, 0.0f, 0x1.34e078p-76f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.6fa0eep-46f, 0x1.0dd29ap-93f, 0x1.6a83f4p-73f,
     0x1.ed22e8p-18f, 0x1.a2b4ccp-94f, 0.0f, 0x1.b1983ap-46f, 0x1.e0505cp-4f,
     0x1.9ed5fep-20f, 0x1.a8499ep-85f, 0x1.69727cp-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.197148p-78f, 0x1.246604p-23f, 0x1.c9c4bep-70f, 0.0f,
     0.0f, 0x1.e270c6p-96f, 0x1.8c5e3ap-123f, 0.0f, 0x1.b0405p-57f, 0.0f,
     0x1.d07006p-2f, 0x1.0cc13ap-19f, 0.0f, 0.0f, 0x1.cb07dap-48f, 0.0f,
     0x1.7b937ap-3f, 0.0f, 0.0f, 0x1.a56e4cp-58f, 0x1.3ac1b8p-66f, 0x1.eb886cp-21f,
     0.0f, 0.0f, 0.0f, 0x1.048602p-96f, 0x1.1f36f8p-82f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7ccb64p-116f, 0.0f, 0x1.9daa6ap-40f, 0x1.b95d04p-16f, 0x1.78f314p-85f, 0.0f,
     0x1.ddffacp-95f, 0x1.f0fbf6p-106f, 0x1.c04ea6p-24f, 0.0f, 0.0f, 0x1.485cecp-93f,
     0.0f, 0.0f, 0.0f, 0x1.4a8706p-76f, 0x1.197eb6p-93f, 0x1.3bc33cp-102f, 0.0f,
     0x1.42d4p-19f, 0x1.cc50a2p-5f, 0.0f, 0x1.c9e64cp-24f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.dc4df6p-72f, 0.0f, 0x1.a0ac6ep-63f, 0x1.636bbcp-6f,
     0.0f, 0x1.edeeb4p-38f, 0x1.7c3abep-2f, 0.0f, 0.0f, 0x1.cac44ep-66f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a4eb48p-24f, 0x1.4b3586p-101f, 0x1.d5146ep-33f,
     0x1.2fd07ep-23f, 0.0f, 0x1.440892p-32f, 0x1.4837fep-118f, 0.0f, 0.0f, 0.0f,
     0x1.92c564p-106f, 0.0f, 0.0f, 0.0f, 0x1.2bbf96p-26f, 0x1.20897p-22f, 0.0f, 0.0f,
     0.0f, 0x1.1dc83ep-68f, 0.0f, 0.0f, 0.0f, 0x1.6a736cp-85f, 0.0f, 0.0f, 0.0f,
     0x1.5ac1fep-91f, 0x1.f7f0f4p-11f, 0.0f, 0.0f, 0x1.26c918p-64f, 0.0f, 0.0f, 0.0f,
     0x1.666a9ap-14f, 0x1.0d0ba4p-25f, 0x1.4e6ca4p-117f, 0.0f, 0.0f, 0x1.32eb6ap-124f,
     0x1.4531cep-89f, 0x1.b60bcep-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1c7796p-110f,
     0x1.43e046p-51f, 0.0f, 0x1.c49268p-12f, 0x1.f770bp-34f, 0.0f, 0x1.b90354p-4f,
     0.0f, 0x1.336172p-99f, 0.0f, 0.0f, 0x1.92f144p-6f, 0x1.259dbap-44f, 0.0f, 0.0f,
     0.0f, 0x1.5eec8p-96f, 0x1.234c2ap-79f, 0x1.b1588ap-34f, 0.0f, 0.0f,
     0x1.b2ea1ap-114f, 0x1.f6d998p-126f, 0x1.5b68dp-99f, 0x1.4a8bd6p-80f,
     0x1.23cb6ap-92f, 0x1.b4de2cp-67f, 0.0f, 0x1.e6f2dp-8f, 0x1.50f654p-16f,
     0x1.73393ap-25f, 0x1.7a3776p-123f, 0.0f, 0x1.d7a542p-100f, 0x1.8f5084p-125f,
     0x1.2afd0cp-19f, 0.0f, 0x1.edd88cp-91f, 0x1.1a26bep-91f, 0.0f, 0x1.42a2cep-47f,
     0x1.52492p-19f, 0x1.47f066p-6f, 0x1.1638c6p-105f, 0x1.8394d6p-94f, 0.0f, 0.0f,
     0x1.d562c2p-120f, 0x1.d77a88p-77f, 0x1.89c828p-63f, 0x1.64bfbp-43f,
     0x1.947862p-73f, 0x1.4df61p-80f, 0.0f, 0x1.499d28p-7f, 0x1.2a667ap-45f,
     0x1.56816ep-44f, 0x1.55b658p-18f, 0x1.b45656p-125f, 0.0f, 0x1.8ee616p-54f,
     0x1.ce265ap-88f, 0.0f, 0x1.fd47e8p-39f, 0x1.9806a8p-103f, 0x1.fa19f4p-111f,
     0x1.009016p-66f, 0x1.e4558cp-88f, 0x1.a7e7dap-28f, 0.0f, 0x1.81fc8ep-66f,
     0x1.6c4482p-72f, 0.0f, 0x1.82649ap-85f, 0x1.9ef75ap-6f, 0x1.98a04ep-16f,
     0x1.61014ap-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c994f4p-82f, 0x1.2bf454p-3f,
     0x1.7510c6p-6f, 0x1.751d08p-79f, 0.0f, 0.0f, 0x1.eb7954p-74f, 0.0f, 0.0f,
     0x1.dde75p-92f, 0x1.d16ec8p-70f, 0x1.a1685p-68f, 0x1.b2b9cp-105f,
     0x1.c0eec6p-114f, 0.0f, 0x1.b440e6p-102f, 0.0f, 0.0f, 0x1.60deb8p-78f, 0.0f,
     0.0f, 0x1.24184cp-3f, 0x1.094fa4p-7f, 0x1.5e2432p-26f, 0.0f, 0x1.0eb63ep-92f,
     0x1.8949c6p-41f, 0.0f, 0.0f, 0x1.9dc306p-46f, 0.0f, 0x1.3de564p-36f, 0.0f, 0.0f,
     0x1.dac3c6p-102f, 0x1.c9368p-93f, 0.0f, 0x1.a4a06ap-8f, 0.0f, 0.0f,
     0x1.26c2c4p-104f, 0.0f, 0x1.7be71ap-35f, 0x1.4adaf2p-80f, 0.0f, 0.0f,
     0x1.44224p-17f, 0x1.cffaccp-78f, 0.0f, 0x1.7855eap-49f, 0.0f, 0.0f, 0.0f,
     0x1.878c9ap-35f, 0x1.a9c114p-109f, 0x1.40fa92p-107f, 0x1.4ce2fap-48f, 0x1p0f,
     0.0f, 0.0f, 0x1.bd9938p-47f, 0.0f, 0x1.ff24dcp-17f, 0x1.b5c942p-54f, 0.0f,
     0x1.90ec76p-111f, 0.0f, 0.0f, 0x1.d65fb8p-118f, 0x1.ce7146p-113f, 0.0f,
     0x1.e9daa2p-88f, 0.0f, 0x1.f4cac4p-50f, 0.0f, 0x1.10039ep-47f, 0.0f, 0.0f,
     0x1.5683f4p-123f, 0x1.084acep-84f, 0.0f, 0x1.b1ae66p-119f, 0x1.4ce9e4p-116f,
     0x1.abf456p-12f, 0.0f, 0.0f, 0.0f, 0x1.b72be6p-98f, 0x1p0f, 0x1.2d67b2p-6f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e1134ep-118f, 0x1.def992p-66f, 0.0f, 0.0f, 0.0f,
     0x1.6588bp-44f, 0.0f, 0x1.885bcp-108f, 0.0f, 0x1.e270b8p-101f, 0.0f,
     0x1.8a1788p-102f, 0x1.06d1e6p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a90b36p-91f,
     0x1.c0de58p-63f, 0x1.e882cap-88f, 0x1.368e14p-17f, 0x1.f10ba4p-87f,
     0x1.d7a16cp-57f, 0x1.d99108p-124f, 0.0f, 0x1.84be16p-92f, 0.0f, 0x1.010c9cp-63f,
     0.0f, 0x1.6f834ep-107f, 0.0f, 0x1.1ea8e6p-77f, 0x1.20561p-116f, 0x1.5cf5aep-26f,
     0x1.fe468ep-92f, 0x1.34ddd2p-24f, 0x1.b2b1c6p-89f, 0.0f, 0.0f, 0x1.56576p-30f,
     0x1.f4fb72p-72f, 0.0f, 0.0f, 0x1.403a8ep-111f, 0.0f, 0.0f, 0x1.3b6338p-64f,
     0x1.48304cp-75f, 0x1.7221acp-104f, 0.0f, 0x1.35cc6p-82f, 0.0f, 0.0f,
     0x1.bc820cp-95f, 0x1.48e3ap-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4caadcp-105f, 0.0f, 0x1.f68c7p-78f, 0.0f, 0x1.b87088p-15f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.323108p-25f, 0x1.c6f43p-125f, 0.0f, 0.0f,
     0x1.ce4416p-17f, 0.0f, 0.0f, 0.0f, 0x1.82ce5ap-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.30c3c8p-82f, 0.0f, 0x1.19175ap-122f, 0x1.33d06ep-27f, 0x1.994374p-15f,
     0x1.e41dap-113f, 0x1.01aa48p-118f, 0.0f, 0.0f, 0.0f, 0x1.50c628p-9f,
     0x1.35ba5ep-60f, 0.0f, 0x1.1c05eep-6f, 0x1.947a26p-71f, 0.0f, 0x1.10ad2p-116f,
     0.0f, 0x1.899ecp-24f, 0x1.f3033ap-126f, 0.0f, 0x1.ac195ep-28f, 0.0f, 0.0f,
     0x1.5e9802p-6f, 0x1.621c32p-71f, 0x1.96a096p-61f, 0.0f, 0x1.3fc164p-120f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e1c868p-105f, 0.0f, 0x1.24b078p-108f, 0x1.b111cep-119f,
     0.0f, 0.0f, 0.0f, 0x1.a1f288p-5f, 0.0f, 0.0f, 0.0f, 0x1.74787cp-113f,
     0x1.05c904p-74f, 0x1.9d4556p-15f, 0.0f, 0x1.0961bcp-92f, 0x1.efc344p-21f,
     0x1.b0096p-12f, 0x1.b93d0cp-95f, 0.0f, 0x1.9f6428p-42f, 0x1.f70e8ap-15f,
     0x1.0835a2p-50f, 0x1.41106cp-91f, 0x1.8cb5fap-103f, 0x1.5aee9ep-95f,
     0x1.ae8f6ep-50f, 0x1.869fe8p-78f, 0x1.54d15cp-86f, 0.0f, 0x1.186cf4p-46f, 0.0f,
     0.0f, 0x1.5dd97p-78f, 0.0f, 0x1.040ceep-60f, 0x1.4a9d04p-123f, 0x1.c3d7cp-2f,
     0x1.a03a4p-79f, 0.0f, 0.0f, 0x1.97e422p-2f, 0x1.dfab96p-120f, 0.0f, 0.0f, 0.0f,
     0x1.7e972ap-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fafa6p-19f, 0.0f, 0x1.ebc718p-73f,
     0x1.435d44p-15f, 0x1.ac3158p-68f, 0.0f, 0.0f, 0x1.aece54p-90f, 0x1.03f2bp-9f,
     0.0f, 0x1.b1a678p-115f, 0.0f, 0.0f, 0x1.60c63ep-73f, 0.0f, 0.0f, 0.0f,
     0x1.5d48d8p-26f, 0x1.ec1044p-93f, 0.0f, 0.0f, 0x1.1b03e4p-79f, 0.0f,
     0x1.56d236p-24f, 0.0f, 0x1.3b72b2p-79f, 0x1.22aadep-105f, 0.0f, 0x1.018fecp-7f,
     0x1.0b3cbap-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1fb5a8p-111f, 0.0f, 0x1.af8dfcp-77f,
     0.0f, 0.0f, 0x1.c72472p-71f, 0x1.021d36p-18f, 0.0f, 0.0f, 0x1.0c5ddep-92f, 0.0f,
     0x1.9a1f98p-50f, 0x1.260f1p-126f, 0.0f, 0.0f, 0.0f, 0x1.f1f602p-34f,
     0x1.15a6cep-99f, 0x1.2f6a0ep-26f, 0x1.5960cp-68f, 0.0f, 0x1.519a9p-104f,
     0x1.b8be38p-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.15591p-40f, 0.0f, 0x1.32ecfp-28f,
     0x1.9909fcp-93f, 0.0f, 0x1.7cf076p-20f, 0.0f, 0.0f, 0x1.d729f6p-78f,
     0x1.84f0ep-58f, 0.0f, 0x1.8c8b6ep-33f, 0x1.d29b8cp-108f, 0x1.fffff2p-125f, 0.0f,
     0x1.81d6d8p-89f, 0x1.897a3cp-15f, 0.0f, 0.0f, 0x1.1ded1ep-54f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.75ba9ep-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.df44c2p-13f, 0x1.9cf38ep-22f, 0.0f, 0.0f, 0.0f, 0x1.e3041cp-101f,
     0x1.9b156cp-8f, 0.0f, 0x1.674b22p-63f, 0x1.ccd79cp-73f, 0x1.37fc9cp-70f,
     0x1.260c14p-8f, 0x1.5f20b6p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cd39c6p-79f, 0x1.da2ee2p-104f, 0.0f, 0x1.9f837ap-10f, 0.0f, 0x1.1171fcp-35f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.af15f8p-22f, 0.0f, 0.0f, 0.0f, 0x1.99452p-61f,
     0x1.4a8a74p-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.daa7d6p-41f, 0x1.32851p-84f, 0.0f,
     0x1.f69168p-121f, 0x1.353a1cp-101f, 0x1.6924f6p-57f, 0.0f, 0.0f,
     0x1.c4557cp-103f, 0.0f, 0.0f, 0x1.64ddc2p-4f, 0x1.a8a94ep-104f, 0x1.e8026p-121f,
     0x1.a04848p-60f, 0x1.0856e2p-15f, 0.0f, 0.0f, 0x1.4a3e36p-84f, 0.0f, 0.0f,
     0x1.a7f11cp-50f, 0x1.338caap-56f, 0.0f, 0x1.65eac4p-87f, 0.0f, 0x1.57afbcp-29f,
     0x1.3689e4p-5f, 0x1.1dce2ap-14f, 0x1.8f59bap-16f, 0.0f, 0x1p0f, 0x1.002466p-6f,
     0.0f, 0x1.d9f05ep-25f, 0x1.a3cf02p-94f, 0.0f, 0x1.c98edap-88f, 0.0f, 0.0f,
     0x1.01de2p-32f, 0x1.b34b5cp-82f, 0x1.ce6ee2p-78f, 0.0f, 0x1.a3d9fep-126f,
     0x1.d91dd2p-113f, 0.0f, 0x1.ee710cp-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1489fap-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.64ade8p-41f, 0x1.7362c6p-52f,
     0x1.8c45p-38f, 0x1p0f, 0x1.61425p-111f, 0x1.da19d8p-43f, 0x1.685ce8p-65f, 0.0f,
     0x1.90b9bap-66f, 0x1.f4a0b8p-26f, 0.0f, 0x1.108d78p-119f, 0x1.c9e3ep-99f,
     0x1.8d44e4p-5f, 0x1.0122dap-7f, 0.0f, 0x1.d601f6p-123f, 0.0f, 0x1.da4986p-57f,
     0x1.364d4p-74f, 0.0f, 0.0f, 0x1.f6116cp-95f, 0.0f, 0.0f, 0x1.3315eap-63f, 0.0f,
     0.0f, 0x1.fb6d2ap-120f, 0.0f, 0.0f, 0x1.3d2b72p-97f, 0.0f, 0x1.ef9284p-102f,
     0.0f, 0x1.271c0ep-52f, 0.0f, 0x1.c99b4ap-120f, 0.0f, 0.0f, 0x1.885e96p-108f,
     0x1.9dafdap-88f, 0.0f, 0.0f, 0x1.765878p-43f, 0.0f, 0.0f, 0.0f, 0x1.57c4f8p-45f,
     0x1.2cda66p-37f, 0.0f, 0x1.49c8cp-88f, 0x1.9fa084p-101f, 0.0f, 0x1.76cd7ep-62f,
     0.0f, 0.0f, 0x1.ab4224p-18f, 0x1.4c7032p-41f, 0.0f, 0.0f, 0x1.5672dep-94f, 0.0f,
     0.0f, 0x1.9982c6p-93f, 0x1.6f440ap-97f, 0.0f, 0x1.2d2e4p-20f, 0x1.a506p-12f,
     0x1.d38c98p-125f, 0x1.7fb75ep-102f, 0x1.f2c204p-104f, 0.0f, 0.0f,
     0x1.b1362ep-115f, 0x1.81035p-36f, 0x1.718f26p-81f, 0.0f, 0x1.551c88p-65f,
     0x1.d4d9c8p-113f, 0x1.bdf93ep-21f, 0x1.f9344ap-38f, 0.0f, 0.0f, 0x1.0a139ep-106f,
     0x1.57a4a6p-89f, 0.0f, 0x1.6ff096p-40f, 0x1.34cedep-119f, 0x1.914d78p-82f, 0.0f,
     0.0f, 0x1.194c8ap-76f, 0x1.38843p-111f, 0.0f, 0.0f, 0x1.b17f52p-34f,
     0x1.ddb79ap-70f, 0x1.6f0448p-81f, 0x1.e4426p-43f, 0.0f, 0.0f, 0x1.40f844p-49f,
     0x1.7b5c88p-70f, 0x1.bd06cp-6f, 0.0f, 0x1.1e2e1p-46f, 0.0f, 0x1.ba1814p-104f,
     0.0f, 0.0f, 0.0f, 0x1.2754aep-60f, 0.0f, 0x1.5923cap-125f, 0.0f, 0.0f, 0.0f,
     0x1.cfc59cp-91f, 0x1.779324p-42f, 0x1.d019a2p-79f, 0x1.224876p-44f, 0.0f,
     0x1.0f213ap-50f, 0.0f, 0.0f, 0x1.8033c2p-106f, 0.0f, 0x1.94d98cp-84f,
     0x1.2ed412p-121f, 0x1.1d1b5ep-42f, 0x1.79af86p-118f, 0x1.16de86p-33f,
     0x1.33212p-32f, 0x1.955dccp-50f, 0.0f, 0x1.2ce2eap-42f, 0x1.d073d4p-16f, 0.0f,
     0x1.5d655p-62f, 0x1.ef812p-121f, 0x1.8a5676p-92f, 0x1.2e37fp-21f, 0.0f,
     0x1.e4e448p-3f, 0x1.9e6986p-52f, 0.0f, 0x1.7fb6aap-77f, 0x1.3a5118p-51f, 0.0f,
     0.0f, 0x1.a8f6eep-11f, 0x1.91bb7cp-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.43cf1p-114f, 0.0f, 0.0f, 0.0f, 0x1.c22972p-14f, 0.0f, 0x1.775234p-22f,
     0x1.133394p-19f, 0.0f, 0x1.7ece38p-74f, 0.0f, 0.0f, 0.0f, 0x1.813c8ap-75f, 0.0f,
     0x1.dfcb88p-102f, 0x1.8ea8cep-11f, 0x1.5f73ccp-123f, 0x1.16fdcep-27f,
     0x1.b65b46p-75f
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
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = external_bench_wrapper_cst;
    tmp = __cos_counter_num(0);
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
            tmp1 = Sleef_ceilf4_kvx(tmp0);
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
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_ceilf4_kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_ceilf4_kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
