/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sinhf8_u35kvx.c --function \
 *     Sleef_finz_sinhf8_u35kvx --headers sleef.h,ml_support_lib.h \
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
     0x1.013452p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.044a46p-101f, 0.0f,
     0x1.eb5dbcp-39f, 0x1.ef2d4ap-106f, 0.0f, 0x1.5ea05ep-91f, 0x1.c429f2p-42f, 0.0f,
     0x1.a5290ap-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c78504p-43f, 0.0f, 0x1.c2c44ap-44f,
     0.0f, 0.0f, 0.0f, 0x1.e29886p-12f, 0x1.719c26p-74f, 0x1.f7241ap-8f, 0.0f,
     0x1.3bdcdep-56f, 0x1.225c8p-79f, 0.0f, 0.0f, 0x1.669e8ep-7f, 0.0f,
     0x1.0ee60ep-23f, 0x1.29b482p-100f, 0x1.6e9a6cp-30f, 0.0f, 0.0f, 0.0f,
     0x1.dc9486p-76f, 0.0f, 0x1.666d28p-65f, 0.0f, 0x1.d30d58p-71f, 0x1.107a7ep-9f,
     0.0f, 0.0f, 0.0f, 0x1.041a58p-112f, 0.0f, 0.0f, 0.0f, 0x1.ac042p-53f,
     0x1.a97d18p-44f, 0.0f, 0x1.7a9dep-56f, 0.0f, 0x1.422146p-61f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.49ce3ap-3f, 0x1.2e337ep-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c43f0cp-81f,
     0.0f, 0x1.630b04p-66f, 0x1.16bb12p-44f, 0x1.dca33cp-125f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.7d4bbcp-95f, 0x1.73dc36p-34f, 0.0f, 0x1.9ee8a4p-3f, 0.0f, 0.0f, 0.0f,
     0x1.4254fcp-14f, 0x1.0e119p-118f, 0x1.4cdc5cp-30f, 0.0f, 0x1.7f1226p-113f,
     0x1.7c0a22p-27f, 0x1.f33f02p-107f, 0x1.352bdap-66f, 0x1.b7dbc4p-51f, 0.0f, 0.0f,
     0x1.4982ccp-125f, 0.0f, 0x1.d8adf6p-94f, 0x1.7ffdccp-56f, 0.0f, 0x1.552176p-15f,
     0x1.058edp-6f, 0x1.f39546p-58f, 0x1.955efap-121f, 0x1.666d26p-43f,
     0x1.cd2fd2p-10f, 0.0f, 0.0f, 0x1.63a29ap-22f, 0x1.1a2deap-48f, 0x1.f9fb28p-104f,
     0.0f, 0.0f, 0x1.b3cc9ep-78f, 0.0f, 0x1.2415bp-54f, 0x1.ac417p-89f, 0.0f, 0.0f,
     0x1.9ee8cep-68f, 0.0f, 0x1.9525c8p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.45c2dp-40f,
     0.0f, 0.0f, 0.0f, 0x1.a8af14p-19f, 0.0f, 0x1.d0ffc4p-38f, 0.0f, 0.0f,
     0x1.6ae53p-93f, 0.0f, 0.0f, 0x1.a85accp-85f, 0.0f, 0x1.117324p-105f,
     0x1.7f5842p-67f, 0x1.523578p-37f, 0.0f, 0x1.8408fcp-123f, 0.0f, 0x1.8efdcp-65f,
     0x1.cc7382p-83f, 0x1.85d62ep-86f, 0x1.7b4facp-92f, 0x1.914452p-32f,
     0x1.48ed8p-22f, 0.0f, 0x1.939804p-120f, 0x1.0a787p-17f, 0x1.b66ceep-25f, 0.0f,
     0x1.fdde68p-67f, 0.0f, 0.0f, 0x1.8f0b84p-35f, 0.0f, 0.0f, 0x1.1f610cp-54f, 0.0f,
     0.0f, 0.0f, 0x1.3089b6p-3f, 0.0f, 0.0f, 0x1p0f, 0x1.c17264p-16f, 0x1.99d7fep-31f,
     0x1.0869a8p-67f, 0x1.0b4f6ap-98f, 0.0f, 0.0f, 0x1.14e6f4p-75f, 0x1.80a804p-85f,
     0x1.299e2p-94f, 0.0f, 0.0f, 0x1.5b0d94p-87f, 0.0f, 0x1.75960ap-46f,
     0x1.91322cp-68f, 0.0f, 0x1.ba005ap-51f, 0.0f, 0.0f, 0x1.f3b148p-37f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a4290cp-56f, 0.0f, 0x1.686372p-55f, 0x1.2572b8p-3f, 0.0f,
     0x1.32bc8cp-82f, 0.0f, 0.0f, 0x1.66c9e6p-29f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b38f16p-9f, 0x1.d3d6f6p-84f, 0x1.a74daep-42f, 0.0f, 0.0f, 0x1.6b2748p-3f,
     0x1.a0681ep-12f, 0x1.fc72ccp-38f, 0.0f, 0x1.ff4d66p-65f, 0x1.724726p-24f, 0.0f,
     0.0f, 0.0f, 0x1.621c02p-117f, 0.0f, 0x1.e08d96p-18f, 0.0f, 0x1.34642ap-67f,
     0x1.e43196p-27f, 0.0f, 0x1.15f1b8p-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5d4584p-41f, 0x1.1798b2p-5f, 0x1.1ea9ccp-29f, 0x1.4f2cd6p-97f, 0.0f,
     0x1.04669cp-65f, 0x1.af5474p-68f, 0.0f, 0x1.3bf228p-42f, 0x1.2706b2p-50f, 0.0f,
     0.0f, 0.0f, 0x1.b42c1ap-60f, 0.0f, 0.0f, 0x1.a3e04ep-15f, 0x1.307f4cp-86f, 0.0f,
     0x1.7e0966p-18f, 0.0f, 0.0f, 0x1.4715bcp-3f, 0.0f, 0.0f, 0x1.e284c4p-70f,
     0x1.f8a48ep-98f, 0.0f, 0.0f, 0x1.82bce8p-70f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bf8062p-12f, 0x1.8ca504p-28f, 0x1.8cb6b6p-13f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.55f04ep-63f, 0x1.b94c7p-57f, 0x1.60c49cp-59f, 0.0f, 0x1.852294p-59f, 0.0f,
     0x1.2e419cp-77f, 0.0f, 0x1.c45b44p-81f, 0x1.f25e1p-92f, 0x1.15b216p-66f,
     0x1.8d17fcp-7f, 0.0f, 0x1.02227cp-41f, 0.0f, 0x1.450e2p-29f, 0x1.771ef8p-45f,
     0x1.cc531p-33f, 0.0f, 0x1.9067bcp-23f, 0.0f, 0x1.565c8ep-54f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ba5e1ep-19f, 0x1.550d2cp-33f, 0x1.20eb86p-75f, 0.0f, 0.0f, 0.0f,
     0x1.19962cp-51f, 0.0f, 0x1.72999ap-124f, 0x1.a491a8p-34f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6863dap-21f, 0.0f, 0x1.da7538p-31f, 0.0f, 0x1.807b2cp-41f, 0.0f, 0.0f,
     0x1.5f343cp-50f, 0.0f, 0.0f, 0x1.429592p-106f, 0.0f, 0x1.52d78cp-15f,
     0x1.64e488p-24f, 0.0f, 0.0f, 0.0f, 0x1.cead3cp-12f, 0.0f, 0x1.e4e346p-5f,
     0x1.733e2p-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e6fcfep-65f, 0x1.2872f8p-86f,
     0x1.211daap-51f, 0x1.351128p-115f, 0x1.155068p-116f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1481eep-50f, 0x1.48466p-11f, 0x1.e52e66p-53f, 0.0f, 0.0f, 0x1.58e12ap-14f,
     0.0f, 0x1.e8d672p-23f, 0.0f, 0x1.641a58p-39f, 0x1.97f76ep-67f, 0x1.881204p-31f,
     0.0f, 0x1.591432p-12f, 0.0f, 0x1.c7a3e4p-119f, 0x1.1d47e6p-70f, 0x1.aefa3ap-103f,
     0.0f, 0x1.68753ap-51f, 0x1.070cfep-36f, 0.0f, 0x1.d31adp-125f, 0x1.255b4ap-42f,
     0x1.ca1fb8p-83f, 0.0f, 0x1.d021bap-76f, 0.0f, 0x1.1401fep-63f, 0x1.6f7c5cp-106f,
     0x1.0c2d28p-42f, 0.0f, 0.0f, 0x1.6287c6p-51f, 0.0f, 0.0f, 0x1.630fbcp-73f, 0.0f,
     0x1.2539aep-126f, 0.0f, 0.0f, 0x1.642acep-59f, 0.0f, 0x1.4ec96ep-27f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.cf85dcp-78f, 0.0f, 0x1.01278cp-49f, 0.0f, 0x1.46ed02p-126f,
     0x1.74bc9p-68f, 0.0f, 0x1.dd78dcp-74f, 0x1.a0b11p-109f, 0.0f, 0x1.2b98a4p-102f,
     0.0f, 0.0f, 0x1.05242ap-84f, 0x1.6eb13ap-116f, 0.0f, 0.0f, 0.0f, 0x1.4cbb7cp-87f,
     0x1.a2496p-63f, 0.0f, 0x1.6e4c48p-24f, 0.0f, 0.0f, 0x1.20ea14p-40f,
     0x1.190f2cp-97f, 0x1.4b8d8p-65f, 0x1.14828ap-9f, 0x1.18895cp-88f,
     0x1.6b9d78p-95f, 0.0f, 0x1.09cf22p-56f, 0.0f, 0.0f, 0.0f, 0x1.910f72p-6f, 0.0f,
     0x1.769dbap-5f, 0.0f, 0.0f, 0x1.43b666p-56f, 0.0f, 0.0f, 0.0f, 0x1.c61fbcp-23f,
     0.0f, 0.0f, 0x1.b384ccp-107f, 0.0f, 0x1.a409b4p-11f, 0.0f, 0.0f, 0x1.630e54p-16f,
     0.0f, 0.0f, 0x1.843206p-58f, 0x1.28207ep-7f, 0x1.7f3244p-89f, 0.0f, 0.0f, 0.0f,
     0x1.48a33ap-82f, 0.0f, 0x1.bd3578p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4f4b4ep-104f,
     0.0f, 0x1.77d83ap-5f, 0.0f, 0.0f, 0x1.1727eep-87f, 0.0f, 0x1.0c5ff8p-60f, 0.0f,
     0.0f, 0.0f, 0x1.9c3882p-107f, 0.0f, 0.0f, 0.0f, 0x1.c88e8ep-9f, 0.0f,
     0x1.0df07ap-84f, 0.0f, 0.0f, 0.0f, 0x1.cbc82ap-119f, 0.0f, 0x1.728acep-70f, 0.0f,
     0.0f, 0.0f, 0x1.e2f788p-38f, 0x1.4d216p-115f, 0x1.23e5cp-104f, 0x1.2b2c86p-2f,
     0x1.ff7e0cp-85f, 0.0f, 0.0f, 0.0f, 0x1.871b8ap-114f, 0.0f, 0x1.d75dc4p-9f,
     0x1.1e7d74p-23f, 0.0f, 0x1.7e276p-62f, 0.0f, 0x1.31bda6p-22f, 0x1.5aafbcp-112f,
     0x1.f96c4ap-18f, 0x1.6976c8p-32f, 0.0f, 0.0f, 0x1.6c43e4p-30f, 0x1.b10206p-31f,
     0x1.8edbf8p-87f, 0.0f, 0x1.d1ececp-16f, 0.0f, 0.0f, 0x1.2e1f26p-93f,
     0x1.d3fcccp-50f, 0x1.2cf09cp-70f, 0.0f, 0.0f, 0x1.439126p-30f, 0.0f, 0.0f, 0.0f,
     0x1.b07bf4p-53f, 0x1.0bab58p-2f, 0x1.f54892p-102f, 0.0f, 0.0f, 0.0f,
     0x1.347214p-5f, 0x1.100a56p-117f, 0x1.c56aaap-13f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a907a2p-17f, 0x1.2f517ep-31f, 0.0f, 0.0f, 0.0f, 0x1.e53c36p-11f, 0.0f, 0.0f,
     0.0f, 0x1.00858cp-88f, 0x1.c0424p-51f, 0.0f, 0x1.86b5ep-115f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.86b95p-68f, 0x1.5b4ab8p-125f, 0x1.871beep-26f, 0.0f,
     0x1.53713ap-120f, 0x1.6915dcp-35f, 0.0f, 0.0f, 0.0f, 0x1.1859aap-73f,
     0x1.aae654p-73f, 0x1.690926p-91f, 0x1.0adf9ap-110f, 0x1.6aa298p-29f,
     0x1.e37908p-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fdde56p-22f, 0.0f,
     0.0f, 0.0f, 0x1.88f314p-83f, 0x1.799feep-87f, 0.0f, 0.0f, 0x1p0f,
     0x1.411a44p-109f, 0.0f, 0.0f, 0.0f, 0x1.186864p-52f, 0.0f, 0.0f,
     0x1.6d6ac8p-124f, 0x1.885146p-67f, 0x1.f41da2p-19f, 0.0f, 0.0f, 0x1.8a8bdp-59f,
     0x1.2b2p-38f, 0.0f, 0x1.cec8c6p-69f, 0x1.b8e8acp-1f, 0.0f, 0x1p0f,
     0x1.abaa76p-86f, 0.0f, 0x1.873fb4p-34f, 0.0f, 0x1.2636cp-122f, 0.0f, 0.0f,
     0x1.0d67b6p-37f, 0.0f, 0x1.261a9ap-114f, 0.0f, 0x1.12ebcp-22f, 0.0f,
     0x1.ef7d74p-36f, 0.0f, 0x1.cf284p-98f, 0x1.16ac8ep-114f, 0x1.27ca44p-109f,
     0x1.7f14eap-23f, 0.0f, 0x1.75e7d8p-4f, 0x1.a80be4p-51f, 0x1.37eed6p-10f, 0.0f,
     0x1.da241cp-51f, 0.0f, 0x1.cce7cap-64f, 0x1.c5c088p-55f, 0.0f, 0x1.976e2ap-69f,
     0.0f, 0x1.ecd6fap-64f, 0.0f, 0x1.26b43ep-72f, 0.0f, 0.0f, 0x1.3b2848p-18f,
     0x1.253dfcp-4f, 0x1.7d588ap-37f, 0.0f, 0x1.94cadp-114f, 0.0f, 0.0f,
     0x1.16fe1ep-87f, 0.0f, 0x1.c1011ep-57f, 0x1.910924p-109f, 0x1.dee264p-25f,
     0x1.36409p-31f, 0x1.7c6ep-22f, 0x1.875cf8p-95f, 0x1.4c077p-6f, 0x1.60c966p-30f,
     0.0f, 0.0f, 0x1.184bc6p-37f, 0.0f, 0x1.a6cfacp-68f, 0.0f, 0.0f, 0x1.5c1a28p-109f,
     0.0f, 0x1.8f7b6ep-81f, 0x1.d5b184p-33f, 0x1.2fde08p-119f, 0.0f, 0.0f,
     0x1.b69a38p-112f, 0x1.106764p-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5afe06p-125f, 0.0f, 0x1.5bdd6ep-76f, 0.0f, 0x1.c5f962p-98f, 0x1.dc97e6p-114f,
     0x1.a96592p-47f, 0x1.ceca34p-40f, 0.0f, 0x1.ecbae8p-120f, 0.0f, 0x1.46825p-29f,
     0.0f, 0x1.0cc46cp-82f, 0x1.49ad34p-74f, 0x1.43bb98p-120f, 0.0f, 0.0f, 0.0f,
     0x1.528a7ep-46f, 0x1.03ee9cp-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.79fe3ap-69f,
     0.0f, 0x1.32b78p-59f, 0x1.de6838p-55f, 0x1.0063cap-43f, 0x1.b4ef74p-31f, 0.0f,
     0x1.4c45a4p-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.44fe58p-86f,
     0x1.b7b476p-125f, 0.0f, 0x1.c4f2eep-79f, 0x1.625bd6p-63f, 0x1.518948p-86f, 0.0f,
     0x1.8df738p-7f, 0x1.2beec4p-89f, 0.0f, 0.0f, 0.0f, 0x1.fa2fep-55f, 0.0f, 0.0f,
     0x1.a93904p-10f, 0x1.ae8c72p-46f, 0x1.5f12f6p-17f, 0.0f, 0.0f, 0x1.8af742p-45f,
     0x1.33b6aap-23f, 0.0f, 0.0f, 0x1.35f9c8p-4f, 0.0f, 0x1.1ae24p-109f,
     0x1.cdac88p-51f, 0x1.e2da82p-120f, 0.0f, 0.0f, 0.0f, 0x1.e4ad02p-105f,
     0x1.97cb58p-109f, 0.0f, 0.0f, 0x1.14f0dep-116f, 0.0f, 0x1.44681ap-126f,
     0x1.d5958cp-97f, 0.0f, 0x1.6e9936p-20f, 0x1.3ccee4p-56f, 0x1.44ee0cp-114f, 0.0f,
     0.0f, 0x1.41d16cp-104f, 0x1.eb75fep-2f, 0.0f, 0x1.c195e8p-102f, 0x1.3d72cep-72f,
     0.0f, 0.0f, 0.0f, 0x1.c0d256p-94f, 0x1.bdeb86p-4f, 0.0f, 0.0f, 0x1.d93252p-32f,
     0.0f, 0.0f, 0.0f, 0x1.d8be8ap-43f, 0.0f, 0.0f, 0.0f, 0x1.b1ef6p-66f,
     0x1.53753p-21f, 0.0f, 0.0f, 0.0f, 0x1.5d50dp-78f, 0x1.677d6ap-22f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c24c4ep-53f, 0.0f, 0x1.bb0c7cp-44f, 0x1.7ad48ap-40f, 0.0f,
     0x1.9e9738p-80f, 0x1.8f3144p-57f, 0.0f, 0x1.14a458p-122f, 0.0f, 0.0f,
     0x1.6881cap-59f, 0.0f, 0x1.0ec6b4p-73f, 0x1.a2f0ccp-125f, 0.0f, 0x1.498bf6p-33f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.9e0312p-79f, 0x1.e987dp-88f, 0.0f, 0.0f, 0.0f,
     0x1.8330a2p-75f, 0x1.0c6eb4p-59f, 0x1.e8ae0ep-88f, 0x1.1cef6ep-77f,
     0x1.666aa8p-94f, 0x1.8da1dcp-68f, 0x1.c53352p-5f, 0.0f, 0x1.d36c94p-57f, 0.0f,
     0x1.d683dcp-116f, 0.0f, 0.0f, 0x1.0ee138p-39f, 0.0f, 0x1.30fdf8p-2f,
     0x1.8fc552p-60f, 0.0f, 0x1.23065ep-73f, 0.0f, 0x1.c875ccp-12f, 0x1.d6c8bep-30f,
     0x1.526edep-77f, 0.0f, 0.0f, 0x1.b22094p-69f, 0x1.4beae8p-82f, 0.0f,
     0x1.3fe6b8p-76f, 0x1.b3184cp-75f, 0x1.6f73d2p-92f, 0x1.5f017p-6f,
     0x1.6df3acp-64f, 0x1.c229bap-90f, 0x1.a85f8ap-16f, 0.0f, 0.0f, 0x1.40c3fcp-32f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6bbcd2p-13f, 0.0f, 0.0f, 0x1.9adbb2p-31f,
     0x1.1884c8p-18f, 0x1.9c4adp-12f, 0.0f, 0.0f, 0x1.f5008ap-70f, 0.0f,
     0x1.f0633ap-114f, 0x1.283cfcp-33f, 0x1.988208p-68f, 0x1.885da8p-85f,
     0x1.b2debcp-17f, 0x1.8390e2p-59f, 0.0f, 0x1.21aa56p-3f, 0x1.cd428ep-89f, 0.0f,
     0x1.fa646ep-85f, 0.0f, 0.0f, 0x1.d0b71ep-120f, 0.0f, 0x1.0640b6p-8f,
     0x1.fca72p-121f, 0x1.0f2fa4p-57f, 0.0f, 0x1.719a8cp-125f, 0x1.017d78p-87f,
     0x1.6617c8p-31f, 0x1.f2514cp-14f, 0x1.7b0118p-2f, 0.0f, 0.0f, 0x1.a04a6ep-79f,
     0x1.a7d644p-111f, 0x1.a3bbb2p-67f, 0.0f, 0x1.705f28p-48f, 0x1.c9031cp-58f, 0.0f,
     0.0f, 0x1.a59652p-22f, 0.0f, 0x1.82f6d6p-21f, 0.0f, 0.0f, 0.0f, 0x1.0e341ap-71f,
     0x1.fb99ap-16f, 0x1.cb72a4p-63f, 0x1.b0f008p-105f, 0.0f, 0x1.1f970ep-58f,
     0x1.3f9814p-45f, 0x1.eba04ap-87f, 0.0f, 0.0f, 0x1.e2edfcp-90f, 0.0f, 0.0f,
     0x1.f663a8p-27f, 0x1.fe08ecp-7f, 0x1.8b17acp-39f, 0.0f, 0x1.d6d9eep-84f,
     0x1.5d248cp-62f, 0.0f, 0x1.4d4b74p-5f, 0.0f, 0x1.a99db2p-47f, 0.0f, 0.0f, 0.0f,
     0x1.06b0aap-47f, 0.0f, 0x1.eee8ap-49f, 0.0f, 0.0f, 0.0f, 0x1.a2aa4ep-125f,
     0x1.7ea93cp-24f, 0.0f, 0.0f, 0x1.805f04p-46f, 0.0f, 0x1.10e642p-10f,
     0x1.41fd5p-77f, 0x1.72ccc4p-100f, 0.0f, 0x1.a953eep-111f, 0.0f, 0.0f, 0.0f,
     0x1.53923ap-78f, 0x1.08a088p-35f, 0x1.9b02bap-121f, 0x1.24fd12p-107f,
     0x1.b83912p-82f, 0x1.99d26ep-54f, 0.0f, 0x1.725f5ap-51f, 0.0f, 0x1.2f234cp-39f,
     0x1.e9140cp-92f, 0.0f, 0x1.fd6b9ap-94f, 0.0f, 0.0f, 0x1.394e5ap-92f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.96957cp-115f, 0x1.a401c2p-6f, 0.0f, 0x1.74ec96p-116f,
     0x1.1f3bd2p-71f, 0x1.bc8a86p-45f, 0x1.9f39cp-64f, 0.0f, 0x1.e696f2p-55f,
     0x1.071e3p-70f, 0x1.6f6eecp-101f, 0.0f, 0x1.8f7eecp-101f, 0x1.7a2518p-29f, 0.0f
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
            tmp1 = Sleef_finz_sinhf8_u35kvx(tmp0);
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
    printf("Sleef_finz_sinhf8_u35kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_finz_sinhf8_u35kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
