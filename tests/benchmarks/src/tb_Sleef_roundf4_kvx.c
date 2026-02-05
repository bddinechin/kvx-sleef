/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_roundf4_kvx.c --function Sleef_roundf4_kvx --headers \
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
     0x1.c06c84p-41f, 0.0f, 0.0f, 0.0f, 0x1.2704e2p-126f, 0x1.73f62p-108f,
     0x1.fc4cdap-90f, 0.0f, 0x1.4b4c06p-1f, 0x1.358e34p-67f, 0.0f, 0.0f,
     0x1.00ecc4p-47f, 0x1.0406eap-9f, 0x1.2f23ecp-112f, 0.0f, 0x1.70f932p-37f,
     0x1.845772p-99f, 0x1.37ed9cp-65f, 0x1.47282p-54f, 0x1.59157cp-123f,
     0x1.96f4bep-101f, 0.0f, 0.0f, 0.0f, 0x1.36968ap-33f, 0x1.51d4a2p-48f,
     0x1.0e551ap-2f, 0.0f, 0.0f, 0x1.9cf63ap-32f, 0.0f, 0.0f, 0x1.ec1d0cp-33f,
     0x1.5b0a42p-91f, 0.0f, 0.0f, 0x1.95d0a2p-31f, 0x1.303fd6p-37f, 0x1.5bf5d6p-79f,
     0x1.e22eb8p-100f, 0.0f, 0x1.8168f2p-22f, 0.0f, 0.0f, 0x1.682a6cp-71f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.5c15c8p-126f, 0x1.be242ap-12f, 0.0f, 0x1.1d87dp-32f,
     0x1.48cbdap-12f, 0.0f, 0.0f, 0x1.015ddap-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.92c7d2p-12f, 0x1.aadac2p-117f, 0x1.795458p-16f, 0x1.4a258cp-103f, 0.0f, 0.0f,
     0x1.090982p-52f, 0.0f, 0.0f, 0x1.fb75d2p-115f, 0.0f, 0.0f, 0x1.be299cp-60f, 0.0f,
     0.0f, 0.0f, 0x1.f1cb08p-112f, 0.0f, 0.0f, 0x1.363406p-7f, 0.0f, 0x1.27d43ep-16f,
     0.0f, 0.0f, 0x1.a16324p-19f, 0.0f, 0x1.e6dc68p-112f, 0.0f, 0x1.f4f352p-55f, 0.0f,
     0.0f, 0x1.3d88f8p-88f, 0.0f, 0.0f, 0x1.3bca2cp-126f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ae3304p-68f, 0x1.584616p-101f, 0.0f, 0x1.a08262p-112f, 0.0f,
     0x1.eda6aap-19f, 0.0f, 0x1.5ad28ap-104f, 0x1.4f2152p-26f, 0.0f, 0.0f, 0.0f,
     0x1.4cdaa8p-54f, 0.0f, 0x1.23791ep-45f, 0.0f, 0x1.7e2f96p-88f, 0x1p0f,
     0x1.ac64f6p-86f, 0.0f, 0x1.90836ap-17f, 0.0f, 0.0f, 0x1.57607cp-8f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.14be6p-112f, 0x1.a3a078p-55f, 0x1.58be5p-48f, 0x1.625308p-25f,
     0x1.922ffep-85f, 0x1.61cfccp-19f, 0x1.e640f4p-59f, 0x1.24512p-18f, 0.0f,
     0x1.7ccad6p-117f, 0.0f, 0.0f, 0x1.1c0c6ap-49f, 0x1.c9fedep-34f, 0.0f,
     0x1.f7b104p-125f, 0x1.55cd3ep-4f, 0x1.0a3f5ap-78f, 0x1.1b27ecp-72f,
     0x1.e91794p-121f, 0x1.a2f9c8p-81f, 0x1.c2b94ap-66f, 0x1.497564p-84f, 0.0f, 0.0f,
     0x1.55c33p-100f, 0.0f, 0.0f, 0x1.989adp-2f, 0x1.e44a2cp-28f, 0x1.74fd86p-50f,
     0x1.59a198p-106f, 0x1.0cdfd4p-100f, 0.0f, 0.0f, 0x1.782994p-62f, 0.0f, 0.0f,
     0x1.783f68p-119f, 0.0f, 0x1.39a6a2p-117f, 0.0f, 0.0f, 0x1.bffc66p-18f, 0.0f,
     0x1.7a7962p-71f, 0x1.3211aap-75f, 0x1.eefb5ap-40f, 0.0f, 0x1.1d4a9ep-101f,
     0x1.37aa94p-39f, 0x1.42d928p-55f, 0x1.bf6f06p-67f, 0.0f, 0x1.dd0c92p-54f,
     0x1.eaf0b4p-78f, 0.0f, 0x1.9fe8bcp-43f, 0x1.be6164p-113f, 0x1.2f83aep-5f,
     0x1.dd3246p-119f, 0x1.00df54p-114f, 0x1.f0cbf6p-14f, 0x1.7aa26cp-41f,
     0x1.6b3d12p-112f, 0.0f, 0x1.079c98p-9f, 0x1.68e24p-57f, 0.0f, 0.0f, 0.0f,
     0x1.31d108p-23f, 0x1.0487cap-59f, 0x1.0b544ep-14f, 0.0f, 0x1.9bff82p-108f, 0.0f,
     0.0f, 0x1.1fde2ep-38f, 0.0f, 0x1.ad46dcp-10f, 0.0f, 0x1.33996p-18f, 0.0f, 0.0f,
     0.0f, 0x1.dd928cp-42f, 0x1.8f6394p-103f, 0.0f, 0.0f, 0x1.c72636p-74f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.368d4ap-98f, 0x1.f6e36p-85f, 0.0f, 0.0f, 0.0f,
     0x1.d63b36p-106f, 0x1.f31126p-99f, 0x1.905f76p-5f, 0.0f, 0x1.a1595cp-30f,
     0x1.dece7ep-10f, 0.0f, 0x1.cfc5f6p-28f, 0.0f, 0x1.3ea96ap-74f, 0x1.59777ep-74f,
     0.0f, 0.0f, 0x1.2d39p-6f, 0.0f, 0.0f, 0.0f, 0x1.9b274p-99f, 0x1.1fc80ep-79f,
     0x1.cadf06p-33f, 0x1.61c3ecp-7f, 0x1.3e086ep-35f, 0x1.219e46p-116f,
     0x1.4f41f8p-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b8d896p-93f, 0x1.594568p-16f, 0.0f,
     0x1.912ba4p-52f, 0.0f, 0.0f, 0x1.fea06cp-1f, 0.0f, 0.0f, 0x1.c51ab2p-72f,
     0x1.80c1ap-99f, 0x1.546b8cp-22f, 0.0f, 0x1.5f46cp-63f, 0x1.250864p-81f,
     0x1.23cp-79f, 0.0f, 0x1.b03ce4p-102f, 0x1.5b59fap-51f, 0x1.d78024p-99f, 0.0f,
     0x1.d57c06p-49f, 0x1.de651ap-49f, 0.0f, 0x1.23d7a2p-54f, 0x1.b5a286p-70f,
     0x1.f79fb6p-51f, 0.0f, 0x1.740d36p-32f, 0.0f, 0.0f, 0x1.04851ep-116f, 0.0f, 0.0f,
     0x1.ac34c2p-111f, 0.0f, 0x1.10d67cp-68f, 0x1.181bc6p-40f, 0x1.f07896p-24f,
     0x1.e0b814p-99f, 0x1.8ec822p-113f, 0x1.cf9c24p-30f, 0x1.1c7182p-2f,
     0x1.154fecp-52f, 0x1.040c92p-48f, 0x1.c5696p-73f, 0.0f, 0x1.28eb04p-84f,
     0x1.3a36f8p-85f, 0x1.848c8ap-56f, 0x1.77e29ap-101f, 0.0f, 0.0f, 0x1.8d85f4p-36f,
     0x1.664e66p-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a68918p-88f, 0.0f, 0.0f,
     0x1.cc933ap-15f, 0.0f, 0x1.9afeep-64f, 0x1.c2c5b6p-88f, 0x1.2652bap-16f, 0.0f,
     0x1.a752dep-40f, 0x1.1cefp-118f, 0x1.ce1aep-96f, 0.0f, 0x1.2f489p-80f,
     0x1.27e4eap-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.91ed22p-27f, 0.0f, 0x1.0990d6p-109f,
     0.0f, 0x1.e8ad2p-17f, 0.0f, 0x1.6f234cp-38f, 0.0f, 0x1.b4be88p-34f,
     0x1.661b0cp-42f, 0.0f, 0x1.b6b04p-99f, 0x1.364862p-14f, 0x1.8c5456p-39f, 0.0f,
     0x1.cbfeaap-92f, 0.0f, 0x1.5a81dap-48f, 0x1.66396p-82f, 0.0f, 0x1.83eb8ep-123f,
     0x1.6684eap-120f, 0x1.91d34p-52f, 0x1.1ecc58p-7f, 0x1.fada9ap-102f, 0.0f, 0.0f,
     0x1p0f, 0x1.38e7fap-29f, 0.0f, 0x1.428c78p-45f, 0x1.30f2e8p-1f, 0x1.5b70ep-65f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.54592p-111f, 0x1.b9fa08p-114f, 0x1.208a7ap-58f,
     0x1.99d216p-89f, 0.0f, 0x1.d53338p-67f, 0.0f, 0x1.ba4828p-26f, 0.0f,
     0x1.4c0576p-84f, 0x1.023e64p-106f, 0.0f, 0.0f, 0.0f, 0x1.f7d716p-81f, 0.0f,
     0x1.0fabe4p-92f, 0x1.de9148p-56f, 0x1.bf947p-34f, 0.0f, 0x1.c3f876p-5f,
     0x1.6f04c2p-120f, 0x1.04da04p-75f, 0x1.d9b0ecp-22f, 0x1.5ebb4cp-105f, 0.0f, 0.0f,
     0.0f, 0x1.2cc4cep-123f, 0x1.88e172p-44f, 0x1.7bf6bep-89f, 0.0f, 0x1.6dd3d4p-113f,
     0.0f, 0x1.2d779ap-112f, 0.0f, 0x1.82a66p-114f, 0.0f, 0x1.c476dcp-40f, 0.0f,
     0x1.7b254ap-114f, 0x1.8ec8d4p-22f, 0.0f, 0.0f, 0x1.01e7ep-50f, 0.0f, 0.0f, 0.0f,
     0x1.9c9256p-3f, 0x1.ee36a2p-20f, 0.0f, 0.0f, 0x1.a0e34ap-71f, 0.0f, 0.0f, 0.0f,
     0x1.fa1328p-118f, 0x1.20630ap-59f, 0.0f, 0.0f, 0x1.e375f8p-92f, 0.0f,
     0x1.2142a4p-66f, 0.0f, 0.0f, 0.0f, 0x1.173eb4p-90f, 0x1.d4f6d4p-63f,
     0x1.22faeap-15f, 0x1.7b49fep-11f, 0x1.31cff2p-33f, 0.0f, 0.0f, 0x1.68b18cp-23f,
     0.0f, 0.0f, 0x1.c71a36p-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fcd46p-101f, 0.0f,
     0x1.c7794cp-113f, 0x1.7714eep-1f, 0x1.5809fcp-117f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0e1a36p-17f, 0x1.a5ae68p-15f, 0.0f, 0x1.703e22p-95f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.eacfeap-123f, 0.0f, 0.0f, 0x1.cc19fcp-96f, 0x1.1ea418p-46f,
     0x1.4ae16cp-11f, 0x1.b67a84p-109f, 0x1.360bd6p-80f, 0.0f, 0.0f, 0.0f,
     0x1.8e664ap-7f, 0.0f, 0x1.2a80d6p-107f, 0x1.99537cp-49f, 0.0f, 0x1.e8a0a6p-30f,
     0x1.10c5d8p-50f, 0.0f, 0.0f, 0x1.8d4696p-38f, 0.0f, 0x1p0f, 0.0f, 0x1.a8122p-90f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.50b792p-49f, 0x1.1bf852p-92f, 0.0f,
     0x1.53fa08p-20f, 0.0f, 0.0f, 0.0f, 0x1.2f4d22p-114f, 0x1.3e0694p-56f, 0.0f, 0.0f,
     0x1.4476fcp-96f, 0.0f, 0.0f, 0x1.2315bp-45f, 0x1.3b28bcp-6f, 0.0f, 0.0f,
     0x1.cfc72ep-36f, 0x1.b488eap-80f, 0x1.9fddfap-96f, 0.0f, 0.0f, 0.0f,
     0x1.05dd08p-44f, 0.0f, 0.0f, 0x1.936c2ap-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d89a88p-11f, 0.0f, 0.0f, 0x1.1ef79p-104f, 0.0f, 0x1.b80fa2p-115f,
     0x1.bc9ad8p-51f, 0x1.efe0dcp-88f, 0.0f, 0.0f, 0x1.489bf8p-9f, 0x1.13721p-50f,
     0.0f, 0.0f, 0x1.088164p-57f, 0.0f, 0x1.bbeb56p-49f, 0.0f, 0.0f, 0.0f,
     0x1.9ff8a8p-30f, 0.0f, 0.0f, 0x1.70cedep-82f, 0.0f, 0x1.e5cb6p-70f, 0.0f,
     0x1.0ee2c4p-21f, 0x1.27d62ep-25f, 0x1.548a8cp-119f, 0.0f, 0x1.74397ap-43f,
     0x1.c2f8cp-35f, 0x1.f3db26p-13f, 0.0f, 0x1.8c00f6p-57f, 0.0f, 0x1.38f6eap-80f,
     0x1.20dc7ep-122f, 0x1.7780eap-22f, 0.0f, 0.0f, 0.0f, 0x1.d5dadcp-40f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.31abc6p-40f, 0.0f, 0x1.6d8cfap-123f, 0x1.665c5ap-49f, 0.0f,
     0x1.4c9688p-21f, 0x1.e91cdcp-78f, 0x1.6e455ep-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.be38e8p-40f, 0.0f, 0.0f, 0x1.94c404p-101f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1f93c8p-44f, 0x1.4c3514p-20f, 0.0f, 0x1.651bccp-95f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.234b24p-65f, 0.0f, 0.0f, 0x1.7c9584p-60f, 0.0f,
     0x1.5d245ep-118f, 0.0f, 0.0f, 0x1.b570dep-99f, 0x1.fe4d1ap-73f, 0.0f, 0.0f,
     0x1.cd6772p-60f, 0x1.da55cp-59f, 0x1.d333fp-64f, 0x1.2a068cp-62f, 0.0f,
     0x1.ab653ap-101f, 0.0f, 0x1.8260bap-44f, 0x1.6619fep-76f, 0x1.55f02cp-33f, 0.0f,
     0x1.6e86cep-81f, 0x1.c1612ap-60f, 0.0f, 0x1.f70018p-67f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.0d64p-23f, 0.0f, 0.0f, 0x1.d0505ep-96f, 0x1.c59a9ep-30f, 0.0f,
     0x1.b9b202p-41f, 0x1.d6d948p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1b9c78p-60f,
     0.0f, 0x1.8968e2p-44f, 0x1.842a1cp-26f, 0x1.ce0e04p-69f, 0x1.253b34p-101f,
     0x1.c6c7d8p-126f, 0.0f, 0.0f, 0x1.005c26p-46f, 0x1.3b969cp-41f, 0x1.3ee828p-103f,
     0.0f, 0.0f, 0x1.dd1664p-118f, 0x1.8a03p-12f, 0.0f, 0.0f, 0x1.e7ba86p-101f,
     0x1.28221p-11f, 0x1.eabedp-57f, 0.0f, 0x1.8ebc4ep-25f, 0x1.1bfd3cp-63f, 0.0f,
     0x1.2dd14ep-11f, 0x1.c10d04p-28f, 0x1.e013eap-114f, 0x1.1ed8b2p-23f, 0.0f,
     0x1.08d3fcp-78f, 0x1.71a1dep-103f, 0.0f, 0x1.d3337cp-125f, 0x1.49b3f8p-48f, 0.0f,
     0x1.ed90aap-57f, 0x1.fd1882p-84f, 0.0f, 0x1.26100ep-89f, 0.0f, 0x1.827088p-84f,
     0x1.47e8d2p-85f, 0x1.91588cp-15f, 0x1.be1942p-42f, 0x1.730b16p-19f,
     0x1.f24022p-109f, 0x1.95ac5ep-83f, 0x1.e8a454p-2f, 0x1.b0b258p-63f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.441bd6p-38f, 0x1.1c424ep-49f, 0.0f, 0x1.bf3ed8p-7f,
     0x1.d893ep-61f, 0.0f, 0.0f, 0x1.68bca4p-87f, 0x1.b582d8p-26f, 0.0f,
     0x1.d3f502p-31f, 0x1.dda044p-8f, 0.0f, 0.0f, 0x1.45baeap-74f, 0.0f,
     0x1.0c70d4p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dd5d4cp-115f, 0x1.9ec194p-48f,
     0.0f, 0.0f, 0x1.66c234p-88f, 0x1.9633c4p-43f, 0x1.b4b8d4p-16f, 0.0f, 0.0f,
     0x1.ac0cfap-108f, 0x1.90be5p-70f, 0x1.69a1b4p-39f, 0x1.992d8p-97f,
     0x1.f89cbep-80f, 0.0f, 0x1.e20b2p-94f, 0x1.1d034cp-25f, 0x1.04ca96p-100f, 0.0f,
     0x1.d03196p-39f, 0x1.a16b12p-53f, 0.0f, 0x1.e400eap-44f, 0.0f, 0.0f, 0.0f,
     0x1.26e314p-40f, 0x1.a0a17ep-104f, 0.0f, 0x1.00226p-69f, 0.0f, 0.0f, 0.0f,
     0x1.d6fd94p-67f, 0.0f, 0x1.4c781ap-30f, 0.0f, 0.0f, 0x1.8e3p-29f, 0.0f,
     0x1.030e42p-21f, 0x1.4a78p-65f, 0.0f, 0x1.0d5794p-24f, 0x1.44a53p-113f, 0.0f,
     0x1.bb5822p-48f, 0x1.42457p-74f, 0x1.835c34p-71f, 0x1.7132c8p-80f, 0.0f,
     0x1.c3af9ep-9f, 0x1.ab0c94p-21f, 0x1.9e668ap-14f, 0x1.b491c8p-70f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d8bf16p-65f, 0x1.3314dp-12f, 0x1.58051ap-9f, 0.0f,
     0x1.9af212p-34f, 0x1.0f827p-47f, 0x1.3ca29cp-116f, 0x1.622182p-122f,
     0x1.7d4774p-83f, 0.0f, 0.0f, 0x1.0ddfc8p-90f, 0x1.2e7b66p-63f, 0x1.13a6f8p-68f,
     0x1.e7f87cp-36f, 0.0f, 0x1.910f78p-101f, 0x1.df3866p-96f, 0.0f, 0x1.179b42p-87f,
     0.0f, 0.0f, 0x1.29d9c8p-97f, 0x1.342324p-29f, 0.0f, 0.0f, 0x1.f87778p-88f, 0.0f,
     0.0f, 0.0f, 0x1.3564fap-34f, 0.0f, 0x1.b0dc22p-79f, 0x1.2d2182p-117f,
     0x1.a7c9ep-75f, 0x1.8dcba6p-90f, 0x1.754248p-124f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5a3952p-37f, 0x1.505218p-16f, 0x1.715bp-65f, 0x1.26c696p-79f, 0x1.c5d60ep-8f,
     0x1.d1ac44p-12f, 0x1.957586p-96f, 0x1.ca9458p-97f, 0.0f, 0x1.46795ap-68f, 0.0f,
     0.0f, 0x1.8a5372p-121f, 0.0f, 0x1.1c9026p-118f, 0.0f, 0.0f, 0x1.f10d46p-66f,
     0x1.7a702ap-60f, 0x1.72955ap-79f, 0.0f, 0.0f, 0x1.88279ap-102f, 0.0f,
     0x1.d337a2p-62f, 0x1.3f5776p-104f, 0.0f, 0.0f, 0x1.c63cbap-62f, 0x1.3ea2fep-119f,
     0x1.74d0dp-18f, 0.0f, 0x1.7fdd7ep-26f, 0.0f, 0x1.35f654p-14f, 0x1.24112cp-69f,
     0x1.67e344p-14f, 0.0f, 0x1.04ef12p-54f, 0.0f, 0.0f, 0.0f, 0x1.d6af1ap-112f,
     0x1.d50528p-63f, 0.0f, 0x1.0f3c92p-33f, 0.0f, 0.0f, 0x1.e414aep-90f, 0.0f,
     0x1.983b6ep-78f, 0.0f, 0x1.6128fep-76f, 0.0f, 0x1.a1536ap-25f, 0.0f, 0.0f,
     0x1.38d6a6p-5f, 0x1.bcf70ap-95f, 0x1.e508acp-82f, 0x1p0f, 0.0f, 0.0f,
     0x1.55a17ap-121f, 0x1.405138p-9f, 0x1.417ecep-78f, 0x1.818e76p-79f, 0.0f,
     0x1.822b18p-11f, 0.0f, 0x1.f6b428p-7f, 0x1.1e213ep-95f, 0x1.8131ep-106f,
     0x1.936f7ep-40f, 0x1.14df4ap-81f, 0x1.d6d2cep-12f, 0x1.37c84ep-63f, 0.0f, 0.0f,
     0x1.422e2p-7f, 0.0f, 0x1.f45646p-98f, 0.0f, 0x1.03970cp-105f, 0.0f, 0.0f,
     0x1.c605acp-91f, 0x1.343bfp-1f, 0x1.de143cp-86f, 0.0f, 0.0f, 0x1.a276e4p-51f,
     0.0f, 0.0f, 0x1.8b87p-12f, 0x1.c94c7ep-115f, 0x1.cb9062p-30f, 0x1.2fc812p-27f,
     0.0f, 0x1.ab140ap-68f, 0.0f, 0x1.669e6cp-89f, 0x1.b46f48p-118f, 0.0f,
     0x1.3a5292p-75f, 0x1.30c414p-65f, 0.0f, 0.0f, 0.0f, 0x1.54be74p-75f, 0.0f,
     0x1.3ffef2p-58f, 0x1.770884p-126f, 0.0f, 0.0f, 0x1.187976p-62f, 0.0f,
     0x1.5d080ep-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.11b81p-93f, 0x1.13fe0cp-107f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.4838fp-93f, 0x1.f1415ap-111f, 0x1.5f827cp-51f,
     0x1.889f14p-91f, 0.0f, 0x1.b7572ep-125f, 0x1.4496fp-78f, 0x1.73549ap-76f,
     0x1.b47fa2p-27f, 0.0f, 0x1.9940c6p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ab6decp-92f,
     0x1.c5e4a4p-104f, 0.0f, 0x1.59caeap-58f, 0x1.c2375ep-4f, 0.0f, 0x1.ef3cep-65f,
     0x1.d1fd96p-116f, 0.0f, 0.0f, 0.0f, 0x1.baa3dep-104f, 0x1.966acp-29f, 0.0f, 0.0f,
     0x1.1100a6p-25f
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
            tmp1 = Sleef_roundf4_kvx(tmp0);
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
    printf("Sleef_roundf4_kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_roundf4_kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
