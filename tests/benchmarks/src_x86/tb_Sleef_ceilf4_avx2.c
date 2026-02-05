/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_ceilf4_avx2128.c --function Sleef_ceilf4_avx2128 --headers \
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
     0x1.05b16cp-83f, 0x1.8da9c8p-38f, 0x1.8c0564p-33f, 0x1.ea6fe6p-60f,
     0x1.5acee2p-40f, 0x1.06f60ap-66f, 0x1.e28a6ap-77f, 0x1.4c1328p-9f,
     0x1.da6aap-102f, 0.0f, 0.0f, 0x1.8e8b5cp-107f, 0x1.405952p-48f, 0.0f,
     0x1.b71c0ep-15f, 0x1.3f2d46p-121f, 0.0f, 0x1.f078bp-96f, 0x1.ccf4e2p-57f, 0.0f,
     0x1.693d3cp-54f, 0x1.836928p-7f, 0x1.745566p-46f, 0x1.c411aap-14f, 0.0f,
     0x1.25a34cp-86f, 0x1.a20f46p-60f, 0.0f, 0.0f, 0x1.daa808p-79f, 0.0f,
     0x1.659836p-14f, 0x1.891fb8p-17f, 0x1.6e5a84p-33f, 0.0f, 0.0f, 0x1.b77b9cp-124f,
     0.0f, 0.0f, 0.0f, 0x1.470f2ap-32f, 0x1.6ff03p-87f, 0x1.4720a4p-96f,
     0x1.c9ea0ep-81f, 0.0f, 0.0f, 0x1.490384p-74f, 0x1.b3ae7ep-39f, 0x1.68723ep-68f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.99377ap-51f, 0x1.c22e1cp-2f, 0.0f, 0x1.6c4c5ep-55f,
     0.0f, 0x1.dea87cp-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b88646p-15f,
     0x1.4c15d4p-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cbb1bep-116f, 0x1.d6c5cep-90f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.205bdcp-126f, 0.0f, 0x1.9723cep-77f, 0.0f,
     0x1.7ed542p-66f, 0x1.67bcb4p-3f, 0.0f, 0.0f, 0.0f, 0x1.a7687cp-44f, 0.0f, 0.0f,
     0x1.1da4fcp-79f, 0.0f, 0x1.eec5f8p-67f, 0x1.853f2ap-55f, 0x1.780ba2p-76f,
     0x1.8309eep-103f, 0.0f, 0x1.e98436p-20f, 0x1.3df1d4p-77f, 0x1.a947eap-20f, 0.0f,
     0.0f, 0x1.5ab53ep-104f, 0.0f, 0.0f, 0x1.6e846p-75f, 0.0f, 0x1.25b6d2p-104f,
     0x1.4badd8p-82f, 0x1.09aff4p-119f, 0.0f, 0.0f, 0x1.855be4p-9f, 0x1.5e5394p-94f,
     0.0f, 0.0f, 0x1.fc8dc4p-22f, 0x1.dc6c1ep-91f, 0.0f, 0.0f, 0.0f, 0x1.045a48p-6f,
     0.0f, 0x1.80fcc6p-90f, 0x1.93de22p-12f, 0.0f, 0.0f, 0x1.867d68p-90f, 0.0f,
     0x1.ce0422p-91f, 0x1.ef0f5ap-122f, 0.0f, 0x1.53cf4cp-122f, 0.0f, 0.0f, 0.0f,
     0x1.c6f94ap-86f, 0x1.9d9eap-64f, 0.0f, 0x1.f4ed0ep-73f, 0x1.eab75p-66f,
     0x1.88d71ap-39f, 0.0f, 0.0f, 0x1.f6adbep-66f, 0x1.caf63cp-51f, 0.0f, 0.0f,
     0x1.6a2d98p-27f, 0.0f, 0x1.854f2ap-7f, 0.0f, 0.0f, 0.0f, 0x1.644908p-57f, 0.0f,
     0x1.d83c54p-61f, 0.0f, 0.0f, 0.0f, 0x1.a732a6p-50f, 0x1.456146p-108f,
     0x1.4f239ap-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bced2cp-90f,
     0x1.869d8ap-109f, 0x1.905766p-64f, 0.0f, 0x1.9b48d6p-95f, 0x1.1251cap-73f,
     0x1.e64a1cp-26f, 0.0f, 0x1.28b606p-106f, 0.0f, 0x1.38a2e4p-66f, 0x1.29387cp-42f,
     0.0f, 0.0f, 0x1.ff6dd8p-85f, 0.0f, 0.0f, 0x1.260f58p-108f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.533eb4p-20f, 0x1.ddbc18p-39f, 0x1.1333d6p-62f, 0x1.3fe2c8p-27f,
     0x1.0630fp-31f, 0x1.0a251ep-104f, 0.0f, 0x1.697d98p-57f, 0x1.01aebp-99f,
     0x1.9f2968p-50f, 0x1.4b11fp-100f, 0.0f, 0x1.82e2a8p-96f, 0x1.904112p-69f, 0.0f,
     0.0f, 0x1.f8a56p-101f, 0.0f, 0.0f, 0x1.c0dddcp-16f, 0x1.7831f4p-48f,
     0x1.1cafa2p-119f, 0.0f, 0x1.1cb35ep-48f, 0.0f, 0x1.e73d2ap-8f, 0x1.8b60eep-59f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.6952a4p-22f, 0x1.2402a2p-91f, 0x1.40ed26p-8f, 0.0f,
     0.0f, 0x1.6d0e24p-101f, 0.0f, 0x1.594096p-35f, 0.0f, 0x1.b0f50cp-109f, 0.0f,
     0x1.8bc426p-32f, 0x1.683a26p-50f, 0x1.47cb8cp-103f, 0.0f, 0x1.6bc7ep-93f,
     0x1.a6c08ap-73f, 0x1.edee36p-94f, 0.0f, 0x1.79c554p-126f, 0.0f, 0x1.30160ep-94f,
     0.0f, 0.0f, 0.0f, 0x1.afd1a4p-121f, 0.0f, 0.0f, 0x1.02c708p-52f, 0.0f,
     0x1.3de68p-44f, 0x1.b66c7cp-118f, 0.0f, 0x1.08d936p-41f, 0.0f, 0x1.d68a28p-1f,
     0x1.fd8d2ap-86f, 0x1.cff3cp-40f, 0x1.8ab8d8p-82f, 0x1.8534fp-82f, 0.0f,
     0x1.a118c8p-72f, 0.0f, 0x1.7764eap-85f, 0.0f, 0x1.a7673cp-7f, 0x1.dd51a2p-96f,
     0.0f, 0x1.8c3a96p-95f, 0x1.3e29e4p-95f, 0.0f, 0x1.fda35ap-51f, 0.0f,
     0x1.8af01ep-28f, 0.0f, 0x1.828014p-110f, 0x1.f6d10cp-39f, 0x1.6a8ba4p-107f,
     0x1.f7c2c2p-21f, 0x1.37330cp-21f, 0.0f, 0x1.333d9p-55f, 0.0f, 0x1.f1cf62p-10f,
     0x1.4a5e7ep-22f, 0x1p0f, 0x1.46d254p-47f, 0.0f, 0.0f, 0x1.43535cp-126f, 0.0f,
     0.0f, 0x1.4d736ep-72f, 0.0f, 0.0f, 0x1.291e9cp-49f, 0.0f, 0.0f, 0x1.d296c2p-89f,
     0.0f, 0x1.6c586cp-87f, 0x1.4543bep-59f, 0x1.403222p-11f, 0.0f, 0x1.a1ac8cp-69f,
     0x1.d6232ep-42f, 0x1.d151p-95f, 0x1.f53d84p-39f, 0x1.a78f4ep-39f, 0.0f, 0.0f,
     0x1.ffa708p-105f, 0x1.3e320ep-7f, 0.0f, 0.0f, 0x1.b91028p-36f, 0.0f,
     0x1.03195cp-24f, 0.0f, 0x1.eaeb8p-57f, 0.0f, 0x1.53f04p-23f, 0.0f, 0.0f,
     0x1.e30732p-116f, 0x1.202a12p-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.56f48ep-71f, 0.0f,
     0x1.a36ap-30f, 0x1.d4f5f6p-55f, 0.0f, 0x1.70002cp-53f, 0x1.586d6cp-46f,
     0x1.a41326p-77f, 0.0f, 0x1.174626p-89f, 0x1.9ee4bep-95f, 0x1.198b9ap-68f, 0.0f,
     0x1.5cf296p-86f, 0x1.a1372cp-86f, 0.0f, 0x1.423b8p-38f, 0x1.27f6acp-50f, 0.0f,
     0.0f, 0x1.278fap-65f, 0.0f, 0x1.f45026p-109f, 0.0f, 0.0f, 0.0f, 0x1.d570bcp-109f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.99b37p-33f, 0.0f,
     0x1.e4c184p-55f, 0x1.38af2cp-102f, 0.0f, 0.0f, 0x1.123a8ep-118f, 0.0f,
     0x1.7cd41cp-12f, 0x1.5ea184p-55f, 0.0f, 0.0f, 0.0f, 0x1.1204d2p-111f, 0.0f,
     0x1.fc1102p-32f, 0.0f, 0x1.17fcdep-59f, 0.0f, 0x1.d7ea7cp-89f, 0x1.e9a93ap-84f,
     0x1.666ba2p-26f, 0.0f, 0x1.45e458p-31f, 0.0f, 0x1.c5488ap-22f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.51c04cp-17f, 0x1.d3edbcp-53f, 0x1.e1a46ep-50f, 0x1.49291ep-110f, 0.0f,
     0.0f, 0.0f, 0x1.59436ep-95f, 0.0f, 0.0f, 0x1.426e04p-121f, 0x1.6f153ap-49f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f37292p-55f, 0.0f, 0x1.8ae45cp-9f, 0x1.4a6f5cp-34f,
     0.0f, 0.0f, 0.0f, 0x1.6353d6p-103f, 0.0f, 0.0f, 0x1.b93ed4p-27f, 0x1.9bdf2ap-83f,
     0.0f, 0x1.eeac5ep-97f, 0x1.d82f94p-45f, 0.0f, 0.0f, 0x1.83b6a6p-37f, 0.0f,
     0x1.1c91c8p-52f, 0x1.e8e934p-113f, 0x1.10c4b8p-13f, 0.0f, 0.0f, 0x1.3bbb6cp-82f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.14edf4p-96f, 0x1.47fb5cp-115f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.cc9cfp-98f, 0x1.13f82cp-33f, 0x1.dde3bcp-3f, 0.0f, 0x1.5170cp-26f,
     0x1.7ce0dp-119f, 0.0f, 0.0f, 0.0f, 0x1.d3ca1ap-55f, 0x1.073ebcp-76f, 0.0f,
     0x1.47266ep-83f, 0.0f, 0.0f, 0x1.b9ce6p-67f, 0x1.95db2p-97f, 0.0f,
     0x1.04e6ecp-17f, 0.0f, 0x1.88832ep-79f, 0.0f, 0.0f, 0x1.fc2596p-42f,
     0x1.896adap-89f, 0.0f, 0.0f, 0.0f, 0x1.49bdc8p-109f, 0x1.810414p-86f, 0.0f,
     0x1.800fdap-14f, 0x1.3f86a8p-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6bbcbep-4f, 0x1.1e9718p-112f, 0x1.8da4e8p-78f, 0x1.06ccccp-33f,
     0x1.0efbfep-23f, 0x1.10996p-117f, 0x1.5d38b2p-124f, 0.0f, 0x1.b3af88p-104f, 0.0f,
     0x1.28acb2p-114f, 0.0f, 0x1.eed81cp-26f, 0.0f, 0x1.141c88p-37f, 0x1.756812p-19f,
     0x1.ea2ed4p-20f, 0.0f, 0.0f, 0x1.cacddp-10f, 0x1.9d5172p-56f, 0x1.0b751p-37f,
     0.0f, 0.0f, 0.0f, 0x1.2a64e6p-30f, 0.0f, 0.0f, 0x1.3ed038p-81f, 0.0f, 0.0f,
     0x1.b32116p-29f, 0x1.d7305ep-76f, 0x1.33c808p-10f, 0x1.25b58ep-125f,
     0x1.1eca18p-121f, 0.0f, 0.0f, 0.0f, 0x1.6e7882p-112f, 0x1.e9529ep-66f,
     0x1.310bfap-63f, 0x1.31e0dcp-29f, 0x1.dfaa1ap-88f, 0.0f, 0x1.94fb94p-93f, 0.0f,
     0x1.bbf2f6p-77f, 0.0f, 0x1.5c9058p-26f, 0x1.e73cb4p-79f, 0x1.568a64p-36f, 0.0f,
     0.0f, 0.0f, 0x1.457e5p-36f, 0.0f, 0.0f, 0x1.5284dcp-117f, 0.0f, 0.0f, 0.0f,
     0x1.e9353p-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d89508p-31f, 0x1.a494b8p-96f, 0.0f,
     0x1.49cb94p-75f, 0x1.b2dffp-107f, 0x1.29985p-65f, 0.0f, 0x1.da192ap-75f,
     0x1.ae3bdp-14f, 0x1.1d2abp-125f, 0.0f, 0x1.d415d6p-10f, 0x1.13c1ecp-106f, 0.0f,
     0.0f, 0.0f, 0x1.4b1d1cp-122f, 0.0f, 0x1.36a82p-98f, 0.0f, 0.0f, 0x1.b8e248p-122f,
     0.0f, 0.0f, 0x1.2bb00ap-58f, 0x1.46c23ap-42f, 0x1p0f, 0.0f, 0x1.c4d11ep-88f,
     0.0f, 0x1.4d6754p-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4e9edap-56f, 0x1.86d09ap-53f,
     0.0f, 0x1.8367b2p-46f, 0.0f, 0x1.00e1dap-68f, 0x1.0f4474p-76f, 0.0f,
     0x1.ed073ep-60f, 0.0f, 0x1.10dadp-42f, 0.0f, 0x1.ff5f92p-24f, 0.0f,
     0x1.090248p-87f, 0x1.1db67p-81f, 0x1.d06d2ap-98f, 0x1.df74ep-108f,
     0x1.e3ec5ap-8f, 0x1.f77634p-45f, 0x1.684b2ep-32f, 0.0f, 0x1.ee6b2ep-47f,
     0x1.eeb6cap-60f, 0x1.759fd6p-8f, 0.0f, 0x1.07984ep-51f, 0x1.adff9ap-22f, 0.0f,
     0x1.3dada6p-122f, 0.0f, 0.0f, 0x1.8ae556p-122f, 0.0f, 0.0f, 0.0f,
     0x1.4b814ap-23f, 0x1.34ee5p-124f, 0.0f, 0x1.e8d5aap-14f, 0x1.4c6432p-81f, 0.0f,
     0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.c225ccp-103f, 0.0f, 0x1.b1dc4ap-77f,
     0x1.f3672cp-63f, 0x1.1c8bbap-64f, 0.0f, 0x1.3e6d9p-71f, 0x1.be2c4p-70f,
     0x1.2684f6p-65f, 0x1.eac1dcp-8f, 0x1.66457p-119f, 0x1.85aeaap-108f, 0.0f,
     0x1.bf37aap-97f, 0x1.84134p-43f, 0x1.50350cp-31f, 0x1.49b84cp-48f,
     0x1.c30e56p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c2b12ep-87f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.18e6e8p-103f, 0x1.72e53cp-33f, 0.0f, 0.0f, 0x1.f04678p-70f, 0.0f, 0.0f,
     0.0f, 0x1.f473b8p-40f, 0x1.ec00bcp-78f, 0.0f, 0.0f, 0x1.912baep-80f,
     0x1.9e1fe8p-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.43ab7cp-56f,
     0x1.8042b8p-106f, 0.0f, 0.0f, 0x1.eb1f98p-90f, 0.0f, 0.0f, 0x1.ed33p-118f,
     0x1.fe8dccp-43f, 0x1.c9ddacp-12f, 0x1.51e9d8p-109f, 0.0f, 0x1.d0d51p-64f,
     0x1.cd8cf4p-60f, 0x1.e321dap-118f, 0.0f, 0.0f, 0.0f, 0x1.9a8768p-108f,
     0x1.a14acep-47f, 0.0f, 0.0f, 0x1.1cf576p-36f, 0.0f, 0x1.e274fp-57f,
     0x1.d2060cp-120f, 0.0f, 0x1.c0219ap-72f, 0x1.dc01c8p-69f, 0.0f, 0x1.d7e316p-96f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c2c426p-37f, 0x1.c3085cp-16f, 0x1.8d0838p-89f,
     0x1.018b0ep-102f, 0x1.608d8cp-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.96c00ap-119f, 0x1.40a2a2p-81f, 0x1.16af72p-48f, 0.0f, 0x1.9ad9c4p-8f,
     0x1.d993c2p-120f, 0.0f, 0.0f, 0x1.e1d20ap-37f, 0.0f, 0x1.f431aep-16f,
     0x1.2fd4e6p-106f, 0.0f, 0x1.d42fap-32f, 0x1.caadbap-71f, 0x1.b1786ep-12f, 0.0f,
     0x1.b0486cp-100f, 0x1.6fbb38p-34f, 0.0f, 0x1.c2627p-52f, 0x1.919998p-13f, 0.0f,
     0.0f, 0x1.f6b03p-19f, 0.0f, 0.0f, 0.0f, 0x1.3855b6p-108f, 0.0f, 0x1.d46574p-91f,
     0x1.7ebf7p-36f, 0x1.024d8cp-75f, 0.0f, 0x1.db867p-11f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fb169p-86f, 0x1.772e9cp-23f, 0x1.007088p-4f, 0x1.c04abcp-6f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.acb494p-104f, 0x1.d796d2p-54f, 0x1.ef2e34p-81f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3c1f6ap-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.4b4ec2p-53f, 0.0f, 0x1.13c986p-119f, 0.0f, 0.0f, 0x1.fe141p-33f,
     0x1.fb8734p-92f, 0.0f, 0x1.5afe9ep-77f, 0x1.d577f2p-13f, 0x1.0c0822p-53f,
     0x1.b50b16p-2f, 0x1.686f62p-40f, 0.0f, 0x1.2234a6p-25f, 0.0f, 0.0f, 0.0f,
     0x1.957988p-46f, 0.0f, 0.0f, 0x1.29e90cp-52f, 0x1.46405ep-95f, 0.0f, 0.0f,
     0x1.454dd4p-9f, 0x1.76b464p-123f, 0x1.7ad7fcp-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c72f12p-37f, 0x1.9f6836p-78f, 0.0f, 0x1.c92596p-115f, 0.0f, 0x1p0f,
     0x1.1e0b82p-64f, 0x1.733008p-116f, 0x1.8c2ba4p-96f, 0x1.c755ccp-120f, 0.0f,
     0x1.629f54p-52f, 0x1.a161d6p-60f, 0x1.d46ffp-46f, 0.0f, 0.0f, 0x1.c66ffp-55f,
     0x1.8068c6p-81f, 0.0f, 0.0f, 0.0f, 0x1.3a06f2p-35f, 0.0f, 0.0f, 0x1.fbaee2p-20f,
     0.0f, 0x1.e4fedap-106f, 0x1.738bf6p-33f, 0x1.79f8e4p-44f, 0x1.254b7ap-4f,
     0x1.4638cep-73f, 0.0f, 0x1.962bbcp-109f, 0.0f, 0x1.8380a4p-38f, 0.0f, 0.0f,
     0x1.fa29ap-69f, 0.0f, 0x1.bd09dcp-62f, 0x1.065e28p-6f, 0x1.730222p-22f, 0.0f,
     0x1.fecc72p-17f, 0x1.c22bdap-71f, 0.0f, 0.0f, 0x1.9985dep-100f, 0x1.caf2ep-43f,
     0.0f, 0x1.c5108ap-125f, 0.0f, 0x1.2997a6p-54f, 0x1.d46902p-118f,
     0x1.2d39eap-124f, 0x1.d13dfap-28f, 0.0f, 0x1.1a287ap-73f, 0x1.17d51ep-106f, 0.0f,
     0.0f, 0.0f, 0x1.744d7p-71f, 0.0f, 0.0f, 0x1.b9506cp-80f, 0x1.2524b8p-3f,
     0x1.cd5e9ep-56f, 0x1.94e9fp-77f, 0x1.1cbb4ep-39f, 0.0f, 0x1.8bc666p-16f,
     0x1.c18f62p-114f, 0x1.d77192p-86f, 0.0f, 0x1.090bb4p-67f, 0x1.8298ep-13f,
     0x1.6e3532p-118f, 0.0f, 0.0f, 0x1.18deb4p-53f, 0.0f, 0x1.18707ep-123f,
     0x1.49c70cp-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a98992p-119f, 0x1.48ab0ap-85f,
     0x1.f3755ep-78f, 0x1.c1f712p-40f, 0.0f, 0.0f, 0x1.d0cdbep-30f, 0x1.85dcfcp-71f,
     0.0f, 0x1.e3c2bap-53f, 0x1.a7a69p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3fe292p-115f,
     0.0f, 0.0f, 0x1.16d7f6p-62f, 0.0f, 0.0f, 0.0f, 0x1.11fd22p-17f, 0.0f,
     0x1.346634p-20f, 0x1.c576dp-12f, 0x1.64da84p-29f, 0x1.0ad9cp-80f, 0.0f,
     0x1.c9a238p-46f, 0.0f, 0.0f, 0x1.8eace6p-115f, 0.0f, 0.0f, 0x1.0823ccp-7f, 0.0f,
     0.0f, 0.0f, 0x1.57b0ecp-45f, 0x1.70100cp-26f, 0x1.c3aa14p-123f, 0x1.682eccp-105f,
     0x1.1ee0dap-7f, 0x1.f7b648p-69f, 0x1.3a6b98p-17f, 0x1.1b2118p-15f, 0.0f,
     0x1.11287ep-101f, 0x1.aeb926p-102f, 0.0f, 0.0f, 0x1.27332cp-77f,
     0x1.1f3f1ep-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dd1abep-111f, 0.0f, 0.0f,
     0.0f, 0x1.3b73f4p-87f, 0.0f, 0x1.c68e4p-43f, 0.0f, 0.0f, 0x1.281abap-91f, 0.0f,
     0x1.c603a4p-103f, 0x1.d9cebap-72f, 0x1.ecde54p-50f, 0x1.3d3718p-16f, 0.0f,
     0x1.bca82cp-121f, 0.0f, 0x1.abc558p-25f, 0x1.d99eep-1f, 0.0f, 0.0f,
     0x1.1611e4p-113f, 0x1.93979ep-29f
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
            tmp1 = Sleef_ceilf4_avx2128(tmp0);
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
    printf("Sleef_ceilf4_avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_ceilf4_avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
