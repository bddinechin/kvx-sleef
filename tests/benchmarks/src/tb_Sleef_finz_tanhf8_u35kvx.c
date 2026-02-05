/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_tanhf8_u35kvx.c --function \
 *     Sleef_finz_tanhf8_u35kvx --headers sleef.h,ml_support_lib.h \
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
     0x1.673b4p-9f, 0x1.f8da26p-43f, 0x1.66eb7ep-108f, 0.0f, 0.0f, 0x1.a47334p-118f,
     0x1.315p-43f, 0x1.e73b8ap-21f, 0.0f, 0x1.615696p-43f, 0x1.e5ed5ap-35f,
     0x1.703e5ap-106f, 0.0f, 0x1.22028cp-100f, 0.0f, 0x1.e8be88p-91f, 0x1.793642p-17f,
     0x1.15d5p-13f, 0.0f, 0.0f, 0x1.5c0784p-117f, 0.0f, 0x1.09b8d8p-84f, 0.0f,
     0x1.9b7decp-8f, 0.0f, 0.0f, 0x1.1cbc7p-60f, 0.0f, 0x1.ed5a2p-101f,
     0x1.a9d604p-3f, 0x1.5c456ep-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9366d6p-68f,
     0.0f, 0x1.91fd2ap-33f, 0.0f, 0x1.99659ap-125f, 0x1.43d3acp-44f, 0x1.239f7ep-88f,
     0.0f, 0x1.a44676p-52f, 0x1.9877b4p-15f, 0x1.cd99b8p-117f, 0x1.c316d4p-99f,
     0x1.e83d62p-4f, 0.0f, 0x1.b8217ep-33f, 0.0f, 0.0f, 0x1.ee396ep-8f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e4ae88p-47f, 0x1.63cd74p-59f, 0.0f, 0.0f, 0x1.c58bf6p-32f, 0.0f,
     0x1.8cbd7cp-95f, 0.0f, 0.0f, 0x1.1a61cap-42f, 0.0f, 0.0f, 0x1.f69556p-75f, 0.0f,
     0x1.368b58p-126f, 0x1.6c83fcp-104f, 0x1.ec6dfp-108f, 0.0f, 0x1.741e46p-73f,
     0x1.b4358ap-29f, 0x1.2fabc8p-53f, 0.0f, 0.0f, 0x1.b5545cp-85f, 0x1.24058p-68f,
     0x1.c895acp-4f, 0x1.49a8a8p-30f, 0x1.92e4a2p-16f, 0x1.2d1cfcp-45f, 0.0f, 0.0f,
     0.0f, 0x1p0f, 0.0f, 0x1.6e1b06p-111f, 0x1.e8b218p-10f, 0.0f, 0.0f, 0.0f,
     0x1.34a156p-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.daf1p-94f, 0.0f, 0.0f,
     0x1.e27ddep-10f, 0x1.ea6ac8p-112f, 0x1.8f96a2p-75f, 0x1.561be4p-111f,
     0x1.d44ebp-11f, 0x1.765fe6p-11f, 0x1.6bb63ep-54f, 0x1.138b68p-86f,
     0x1.c8d0acp-98f, 0.0f, 0.0f, 0.0f, 0x1.6872d2p-79f, 0.0f, 0x1.4e0d9ap-9f,
     0x1.ed5764p-107f, 0.0f, 0.0f, 0.0f, 0x1.915482p-43f, 0x1.f4d00ep-60f, 0.0f,
     0x1.961876p-23f, 0.0f, 0.0f, 0x1.0fdacep-114f, 0x1.4cc3eep-73f, 0.0f,
     0x1.f805bep-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.08729p-38f, 0.0f,
     0.0f, 0x1.38413p-79f, 0x1.795996p-28f, 0.0f, 0x1.7055ecp-84f, 0x1.42dad4p-69f,
     0.0f, 0.0f, 0.0f, 0x1.498938p-79f, 0.0f, 0x1.be4e6cp-120f, 0x1.8cb2e4p-59f,
     0x1.de2c44p-87f, 0x1.3c3b94p-85f, 0x1.6beb4ap-122f, 0x1.96ca74p-115f, 0.0f, 0.0f,
     0x1.ec7818p-16f, 0.0f, 0x1.9f0c46p-80f, 0.0f, 0x1.f16db6p-3f, 0x1.13b414p-45f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.898074p-115f, 0.0f, 0x1.761798p-15f, 0x1.396374p-74f,
     0x1.3d43d6p-6f, 0.0f, 0.0f, 0x1.40acd8p-116f, 0.0f, 0x1.06278ep-16f,
     0x1.7d7cbep-97f, 0.0f, 0x1.b8892ep-34f, 0x1.9cd978p-98f, 0x1.05a86ep-31f,
     0x1.8ea3cep-13f, 0.0f, 0x1.5c8a84p-91f, 0.0f, 0.0f, 0.0f, 0x1.111906p-68f, 0.0f,
     0.0f, 0x1.e3055ap-57f, 0.0f, 0x1.04e7f2p-48f, 0x1.ea4eeap-70f, 0x1.6b0f82p-23f,
     0.0f, 0x1.47d516p-80f, 0.0f, 0x1.2a13cep-21f, 0x1.4a259cp-48f, 0x1.f430bcp-116f,
     0x1.a3e084p-73f, 0.0f, 0.0f, 0.0f, 0x1.1cdd4cp-43f, 0x1.c8a1fap-11f,
     0x1.0a3a8ep-93f, 0.0f, 0.0f, 0x1.ed499cp-64f, 0x1.15ea3ep-53f, 0x1.648ff6p-94f,
     0.0f, 0x1.1b4fe4p-105f, 0.0f, 0x1.d861cp-26f, 0.0f, 0x1.9d6b4cp-71f,
     0x1.85093ap-22f, 0x1.32a0bcp-103f, 0x1.46013ap-108f, 0.0f, 0x1.59fd88p-121f,
     0.0f, 0.0f, 0.0f, 0x1.5d0c7p-73f, 0.0f, 0x1.b9572p-57f, 0x1.959d14p-31f,
     0x1.a26f2ep-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b0d5bcp-120f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.2a77d4p-26f, 0.0f, 0x1.40389p-101f, 0x1.a376e4p-17f,
     0x1.8fe144p-109f, 0x1.25c25cp-75f, 0.0f, 0x1.12a4a8p-19f, 0.0f, 0.0f,
     0x1.8100c2p-12f, 0.0f, 0.0f, 0.0f, 0x1.d7cbd6p-32f, 0.0f, 0.0f, 0x1.fbf916p-88f,
     0.0f, 0x1.30191cp-25f, 0x1.5fc3cep-98f, 0.0f, 0x1.da58dp-85f, 0.0f, 0.0f,
     0x1.72b6ap-93f, 0.0f, 0.0f, 0x1.4e69dep-77f, 0x1.5fc80ap-73f, 0.0f, 0.0f, 0.0f,
     0x1.3ee65cp-86f, 0x1.0637c8p-61f, 0x1.2f9324p-56f, 0x1.2c2582p-40f,
     0x1.441efcp-12f, 0x1.0e7666p-72f, 0x1.f87356p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b23e8ep-74f, 0x1.c9c816p-45f, 0x1.1bb792p-7f,
     0x1.3c6cp-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.59073ap-25f,
     0x1.30a1f4p-117f, 0.0f, 0.0f, 0x1.1517aap-36f, 0x1.08dd8ep-77f, 0x1.caf5e2p-104f,
     0x1.357a88p-47f, 0.0f, 0x1.68bf7cp-77f, 0.0f, 0.0f, 0.0f, 0x1.5cdd22p-24f, 0.0f,
     0x1.41353ap-2f, 0.0f, 0.0f, 0.0f, 0x1.14ee8ap-108f, 0.0f, 0.0f, 0x1.b55dfcp-15f,
     0x1.8c03bcp-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a9d686p-1f, 0.0f,
     0x1.7c3d4ep-32f, 0.0f, 0x1.c998b8p-17f, 0x1.e3f938p-35f, 0x1.2436c6p-31f, 0.0f,
     0x1.a880a8p-35f, 0.0f, 0.0f, 0x1.4eea6cp-4f, 0.0f, 0.0f, 0x1.549958p-89f, 0.0f,
     0.0f, 0.0f, 0x1.3bf11ep-111f, 0x1.fcdd48p-73f, 0x1.d35106p-14f, 0x1.c4273cp-57f,
     0x1.2f5956p-82f, 0.0f, 0.0f, 0.0f, 0x1.70763p-71f, 0.0f, 0x1.5fed8cp-26f, 0.0f,
     0.0f, 0x1.e52352p-76f, 0x1.c28546p-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c70c1ap-125f,
     0.0f, 0.0f, 0x1.0c513cp-107f, 0x1.cc0f4ep-9f, 0.0f, 0x1.fb987ap-124f, 0.0f, 0.0f,
     0.0f, 0x1.c6d444p-115f, 0x1.6020a8p-8f, 0.0f, 0x1.d42c42p-100f, 0x1.353bcp-5f,
     0x1.254614p-58f, 0.0f, 0x1.59a9acp-91f, 0x1.44368ap-14f, 0x1.328a44p-57f, 0.0f,
     0x1.55bf54p-28f, 0x1.ced20cp-104f, 0.0f, 0.0f, 0x1.99e1d2p-19f, 0x1.18474ap-46f,
     0x1.8da194p-124f, 0x1.07b60ep-63f, 0.0f, 0x1.454fp-46f, 0x1.e2b7fp-44f,
     0x1.44db1p-85f, 0x1.a20c8p-117f, 0x1.3588c6p-41f, 0x1.5a3e3cp-31f,
     0x1.3fa104p-40f, 0.0f, 0x1.71d486p-117f, 0.0f, 0.0f, 0x1.5c0e6p-65f, 0.0f,
     0x1.af6e8ep-1f, 0x1.5e0174p-121f, 0.0f, 0x1.86f26ep-5f, 0x1.3df93ap-6f,
     0x1.e7adaap-41f, 0.0f, 0x1.21ba54p-52f, 0x1.ef8f52p-4f, 0x1.cfcdfap-47f,
     0x1.ddd038p-6f, 0.0f, 0x1.375f7p-26f, 0x1.f31ad4p-38f, 0.0f, 0x1.e60942p-123f,
     0x1.f5a886p-65f, 0.0f, 0x1.af34ecp-13f, 0x1.a145d2p-49f, 0x1.f14c44p-46f, 0.0f,
     0x1.79935ap-67f, 0.0f, 0x1.835ae4p-44f, 0.0f, 0x1.0fb912p-3f, 0x1.5e1408p-70f,
     0.0f, 0x1.63bedcp-91f, 0.0f, 0x1.ddbc8ep-61f, 0.0f, 0x1.1404bep-25f,
     0x1.f2173p-112f, 0x1.b28eacp-87f, 0.0f, 0x1.912608p-81f, 0x1.8780bcp-68f,
     0x1.94cd3ep-18f, 0x1.8da01ep-63f, 0x1.bcda2p-26f, 0x1.8e6922p-73f,
     0x1.d21f16p-17f, 0x1.6fe656p-85f, 0.0f, 0x1.48592p-92f, 0.0f, 0.0f,
     0x1.13bb06p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2fbcd2p-121f, 0x1.f5123ep-13f,
     0x1.9b7c9ap-4f, 0.0f, 0x1.15b8d6p-121f, 0x1.d1dd34p-68f, 0x1.7ba74ap-32f,
     0x1.21a0bap-62f, 0.0f, 0.0f, 0x1.60144ap-48f, 0x1.61402p-28f, 0x1.7da2aep-116f,
     0x1.f5fd3p-113f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.07c3a6p-36f, 0.0f,
     0x1.830deap-13f, 0x1.9ed3dap-90f, 0.0f, 0.0f, 0.0f, 0x1.039434p-122f,
     0x1.e38a84p-39f, 0.0f, 0x1.f1abeap-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.11e662p-125f, 0.0f, 0x1.3dfe68p-40f, 0x1.340acep-15f, 0.0f,
     0x1.b9d2ap-1f, 0x1.372d68p-25f, 0x1.929196p-17f, 0x1.3760a4p-69f,
     0x1.a970c2p-79f, 0x1.6fa41cp-100f, 0x1.50ccb4p-31f, 0x1.099746p-19f, 0.0f, 0.0f,
     0.0f, 0x1.dda81p-19f, 0.0f, 0x1.72a108p-54f, 0.0f, 0x1.1c63f8p-35f, 0.0f,
     0x1.e9136ap-105f, 0.0f, 0x1.6414dap-29f, 0.0f, 0.0f, 0x1.5cadbcp-12f, 0.0f, 0.0f,
     0x1.4f411cp-57f, 0.0f, 0x1.0d39cp-73f, 0x1.31eed2p-64f, 0x1.b69dbep-76f,
     0x1.53d1aap-42f, 0x1.efdd86p-11f, 0.0f, 0.0f, 0.0f, 0x1.d4c9e6p-42f, 0.0f, 0.0f,
     0x1p0f, 0x1.384272p-113f, 0.0f, 0x1.1dc5cap-66f, 0.0f, 0x1.1b4d3ep-122f, 0.0f,
     0x1.e77abap-52f, 0.0f, 0x1.67e696p-70f, 0.0f, 0x1.2b1336p-90f, 0.0f,
     0x1.f7cb6ap-97f, 0x1.706a6ep-109f, 0x1.c263fcp-36f, 0.0f, 0x1.49970ep-102f,
     0x1.cb511cp-73f, 0.0f, 0.0f, 0x1.a4817p-121f, 0.0f, 0.0f, 0.0f, 0x1.2b4a38p-106f,
     0x1.13a7a6p-113f, 0x1.88fa4ap-53f, 0x1.031c2ap-50f, 0x1.72d17ap-18f, 0.0f,
     0x1.b53dd8p-100f, 0x1.5fcd42p-75f, 0.0f, 0x1.c76a48p-122f, 0x1.47a99cp-94f, 0.0f,
     0x1.c44f78p-111f, 0.0f, 0x1.8dc618p-28f, 0.0f, 0x1.cb02ap-76f, 0.0f, 0.0f,
     0x1.708bc2p-22f, 0x1.99b4eep-4f, 0x1.cb26eep-89f, 0.0f, 0.0f, 0.0f,
     0x1.289ebp-94f, 0x1.d86d54p-27f, 0x1.290e2p-39f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7b888p-107f, 0x1.8e80a6p-31f, 0.0f, 0.0f, 0x1.33121cp-118f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.3d7daep-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.76d8bap-87f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.6c5f6ep-54f, 0x1.044acep-54f, 0x1.5e93ep-24f, 0.0f, 0.0f,
     0.0f, 0x1.e0d306p-95f, 0x1.b59c3ap-57f, 0x1.5fbd72p-78f, 0x1.968834p-96f,
     0x1.ba290cp-91f, 0x1.16d014p-124f, 0.0f, 0x1.3986e6p-67f, 0.0f, 0.0f,
     0x1.11593p-32f, 0x1.2d0d9ap-110f, 0.0f, 0x1.07bbe2p-124f, 0.0f, 0.0f,
     0x1.e9075ap-3f, 0x1.7ebd48p-45f, 0.0f, 0x1.e275d8p-21f, 0x1.4d6bbcp-95f, 0.0f,
     0x1.a0fe0cp-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5bd426p-8f, 0.0f, 0x1.c2f3b4p-34f,
     0.0f, 0x1.a786ap-117f, 0x1.d0adacp-22f, 0.0f, 0x1.b3c5b4p-43f, 0x1.f82e86p-68f,
     0x1.18e7d6p-32f, 0.0f, 0.0f, 0x1.70b5b2p-41f, 0.0f, 0x1.f48de4p-53f,
     0x1.f97824p-83f, 0x1.a212b2p-15f, 0x1.9307e6p-85f, 0.0f, 0.0f, 0x1.80493cp-94f,
     0.0f, 0x1.31c354p-98f, 0x1p0f, 0x1.aa0896p-53f, 0x1.fec6b2p-10f, 0.0f, 0.0f,
     0x1.df5082p-24f, 0.0f, 0x1.84b1cp-88f, 0.0f, 0x1.eaf9bap-54f, 0x1.06d2fap-125f,
     0x1.accc24p-92f, 0x1.e20b8ep-67f, 0.0f, 0x1.74c338p-31f, 0x1.341fc8p-77f, 0.0f,
     0x1.c3ecc8p-9f, 0x1.dc2626p-2f, 0x1.cceb12p-47f, 0x1.4b1506p-65f,
     0x1.c60adep-31f, 0.0f, 0.0f, 0x1.0e4ba4p-44f, 0.0f, 0.0f, 0x1.f46aa4p-32f, 0.0f,
     0.0f, 0.0f, 0x1.f8f5acp-106f, 0x1.389bc2p-45f, 0x1.de9266p-89f, 0x1.fe2934p-101f,
     0x1.c51f6p-22f, 0x1.a15314p-16f, 0.0f, 0.0f, 0.0f, 0x1.b70e86p-51f, 0.0f,
     0x1.7b3434p-34f, 0x1.7bf304p-34f, 0.0f, 0x1.5ccf5ep-85f, 0x1p0f, 0x1.a06d6ap-95f,
     0x1.816b6cp-70f, 0.0f, 0x1.7ecb92p-73f, 0x1.829e84p-108f, 0x1.655fd4p-17f,
     0x1.e4db66p-84f, 0x1.8da244p-85f, 0.0f, 0x1.7e43c6p-76f, 0.0f, 0.0f, 0.0f,
     0x1.5554a4p-4f, 0.0f, 0x1.5f649p-55f, 0x1.b0de1cp-81f, 0x1.b18374p-6f, 0.0f,
     0.0f, 0x1.5c52e2p-20f, 0x1.172dd8p-102f, 0x1.957bc8p-95f, 0x1.e8ffe2p-109f,
     0x1.46acb2p-36f, 0.0f, 0.0f, 0x1.b7225ap-12f, 0.0f, 0.0f, 0x1.50b61ap-28f,
     0x1.501822p-119f, 0x1.50efap-82f, 0x1.126446p-87f, 0.0f, 0.0f, 0x1.48943p-96f,
     0x1.570b5p-99f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cc8e8ap-125f, 0x1.9a9b1p-2f, 0x1.14f9cep-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.0c370ap-81f, 0x1.4834dep-37f, 0x1.1a92bap-11f, 0.0f, 0.0f,
     0x1.ab349cp-120f, 0.0f, 0x1.fe52fcp-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.df7d58p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eb8356p-4f, 0x1.aa1b82p-64f,
     0x1.36f1c6p-21f, 0x1.4bff12p-52f, 0.0f, 0x1.dfef7ep-15f, 0x1.d936e6p-21f,
     0x1.57becep-37f, 0x1.0f4ebep-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b89ep-89f, 0.0f, 0x1.1d16ep-2f, 0x1.e1a884p-30f, 0x1.3f721ep-18f,
     0x1.0c777p-27f, 0x1.1e1bc2p-12f, 0.0f, 0.0f, 0x1.f113b2p-85f, 0.0f, 0.0f, 0.0f,
     0x1p0f, 0x1.6fc626p-24f, 0x1.25da3ep-16f, 0.0f, 0x1.e56b3p-125f, 0.0f, 0.0f,
     0x1.58de64p-90f, 0x1.86df1p-52f, 0x1.5979dap-47f, 0.0f, 0.0f, 0.0f,
     0x1.5014aap-60f, 0.0f, 0x1.6cef3ap-77f, 0.0f, 0.0f, 0x1.521f26p-84f,
     0x1.dc8c46p-61f, 0x1.f3e21cp-66f, 0x1.64864ep-12f, 0.0f, 0.0f, 0.0f,
     0x1.066f22p-102f, 0.0f, 0x1.775e0cp-75f, 0x1.801a1ep-1f, 0.0f, 0x1.20805ep-2f,
     0x1.adfcd8p-75f, 0x1.b1714ep-41f, 0x1.52425ep-3f, 0x1.956f8ep-74f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.4b2a86p-84f, 0.0f, 0x1.faace2p-120f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.057d72p-40f, 0.0f, 0x1.0743bep-46f, 0x1.71daccp-50f, 0x1.740c62p-94f,
     0.0f, 0x1.468bd8p-108f, 0.0f, 0x1.fc3f3ap-102f, 0.0f, 0x1.cb2dfp-72f,
     0x1.a67696p-23f, 0.0f, 0.0f, 0x1.fe48f6p-125f, 0.0f, 0x1.a22836p-91f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.6fd944p-70f, 0x1.faf09cp-80f, 0.0f, 0x1.c054e4p-117f,
     0.0f, 0.0f, 0.0f, 0x1.e43ebcp-124f, 0x1.cbaeb8p-81f, 0x1.10300cp-30f,
     0x1.b0b55ap-82f, 0.0f, 0x1.158fdep-29f, 0x1.43c284p-43f, 0.0f, 0.0f,
     0x1.a8d93p-121f, 0x1.c77328p-104f, 0x1.4a9ab2p-9f, 0x1.42a6c2p-20f, 0.0f, 0.0f,
     0.0f, 0x1.77707ap-30f, 0.0f, 0x1.bc8592p-83f, 0x1.188028p-16f, 0.0f, 0.0f,
     0x1.1e6c8ap-71f, 0x1.52eb82p-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.224de8p-15f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.91c53cp-108f, 0x1.66f598p-113f, 0.0f, 0x1.28e46p-28f,
     0x1.50654cp-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fedbfap-12f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f021f8p-97f, 0x1.0d3e5p-29f, 0x1.d8e22p-118f, 0.0f, 0x1.797b7cp-15f,
     0x1.07b0f4p-84f, 0x1.737ee6p-121f, 0x1.9bbf12p-63f, 0x1.c5bcfcp-126f,
     0x1.87964p-41f, 0x1.97d882p-13f, 0x1.bf5bfep-27f, 0x1.56fc8cp-9f,
     0x1.708ed8p-71f, 0.0f, 0.0f, 0x1.4ce7c2p-27f, 0.0f, 0x1.710b2p-116f, 0x1p0f,
     0.0f, 0x1.73ec5p-19f, 0.0f, 0x1.fb1d2ep-75f, 0x1.85951cp-95f, 0.0f, 0.0f,
     0x1.e7296ap-124f, 0.0f, 0x1.beb4c4p-16f, 0x1.640db4p-60f, 0.0f, 0x1.04142p-61f,
     0x1.324062p-15f, 0.0f, 0x1.6b40dep-78f, 0x1.7cb6c2p-102f, 0.0f, 0x1.064d9ep-21f,
     0x1.108d6ap-62f, 0.0f, 0x1.144ecep-56f, 0x1.f75adep-21f, 0.0f, 0x1.05ac0ap-63f,
     0.0f, 0.0f
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
            tmp1 = Sleef_finz_tanhf8_u35kvx(tmp0);
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
    printf("Sleef_finz_tanhf8_u35kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_finz_tanhf8_u35kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
