/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_fastcosf8_u3500kvx.c --function \
 *     Sleef_fastcosf8_u3500kvx --headers sleef.h,ml_support_lib.h \
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
     0x1.98a862p-112f, 0.0f, 0.0f, 0.0f, 0x1.1d07eep-70f, 0x1.affc56p-62f, 0.0f,
     0x1.bffc5ep-89f, 0x1.155cp-33f, 0.0f, 0x1.59a62p-9f, 0.0f, 0x1.89f6cp-25f, 0.0f,
     0x1.48fd52p-38f, 0x1.f65d44p-80f, 0.0f, 0.0f, 0x1.389bbep-107f, 0x1.22bb98p-22f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5b0252p-65f, 0.0f, 0.0f, 0.0f,
     0x1.9cf7c6p-121f, 0x1.d35504p-106f, 0x1.b0e9dep-77f, 0.0f, 0x1.05ed9cp-69f, 0.0f,
     0x1.4501ccp-77f, 0x1.1a3358p-125f, 0x1.4894c2p-100f, 0x1.23229p-86f, 0.0f, 0.0f,
     0x1.eebe34p-64f, 0x1.ba37e4p-21f, 0.0f, 0.0f, 0x1.c7e03ap-125f, 0x1.da6236p-122f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.4c4da2p-115f, 0.0f, 0x1.106cbep-7f, 0.0f, 0.0f,
     0x1.9ba356p-120f, 0x1.4d12dep-21f, 0.0f, 0x1.50f30ap-59f, 0.0f, 0.0f, 0.0f,
     0x1.cc0e8p-22f, 0.0f, 0x1.e4214cp-118f, 0x1.467a9ap-103f, 0.0f, 0x1.9ffc6ep-87f,
     0.0f, 0.0f, 0x1.6622dcp-112f, 0.0f, 0x1.4c8efp-53f, 0.0f, 0x1.ce1984p-10f, 0.0f,
     0x1.fb1ad4p-91f, 0x1.ed8f52p-54f, 0.0f, 0.0f, 0.0f, 0x1.29381ap-24f,
     0x1.4a376cp-81f, 0x1.0a5362p-46f, 0x1.959938p-58f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.efb8dep-12f, 0x1.6e122p-96f, 0.0f, 0x1.67bb82p-48f, 0x1.ec371ep-103f,
     0x1.14277ep-123f, 0x1.7eae42p-41f, 0x1.75d022p-26f, 0.0f, 0.0f, 0x1.182d82p-46f,
     0x1.c50914p-95f, 0.0f, 0x1.c57a6ep-92f, 0x1.0f163cp-74f, 0.0f, 0.0f,
     0x1.efa2bp-73f, 0x1.310e26p-48f, 0.0f, 0x1.0b12c4p-25f, 0x1.f34a98p-100f,
     0x1.589fcp-17f, 0x1.f887p-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c16fecp-6f,
     0x1.0a1b2ep-117f, 0x1.932d72p-58f, 0.0f, 0.0f, 0.0f, 0x1.80b11ep-39f, 0.0f,
     0x1.8ad63ap-24f, 0.0f, 0x1.1ba962p-8f, 0x1.e85afp-67f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.cbb514p-61f, 0x1.384d8ep-108f, 0x1.c49046p-117f, 0x1.5e54e4p-15f,
     0x1.c82c84p-86f, 0x1.a1b6f2p-17f, 0x1.fa7c44p-83f, 0.0f, 0.0f, 0x1.c65f9ep-104f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f60472p-80f, 0.0f, 0.0f, 0x1.717c7p-58f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.29a5fp-115f, 0.0f, 0.0f, 0.0f, 0x1.fef008p-79f,
     0.0f, 0x1.bd7ac8p-59f, 0.0f, 0.0f, 0x1.1b130cp-31f, 0.0f, 0x1.32b426p-43f, 0.0f,
     0x1.944684p-27f, 0x1.0e4a58p-74f, 0.0f, 0.0f, 0.0f, 0x1.40b4fap-39f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.c69008p-64f, 0.0f, 0.0f, 0x1.128086p-90f, 0.0f, 0.0f,
     0x1.5d771p-114f, 0x1.245668p-95f, 0x1.214ac4p-45f, 0x1.ccd414p-75f,
     0x1.7e0104p-55f, 0.0f, 0x1.599d1cp-85f, 0x1.a2be9ep-2f, 0.0f, 0.0f,
     0x1.90739ap-120f, 0x1.191dbcp-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d339acp-12f,
     0x1.00278p-95f, 0.0f, 0x1.d7cf1p-27f, 0.0f, 0.0f, 0x1.5c6768p-47f,
     0x1.d2768ap-69f, 0.0f, 0.0f, 0.0f, 0x1.d297bp-89f, 0x1.7570d4p-27f,
     0x1.1eeb74p-35f, 0.0f, 0x1.466dbp-84f, 0.0f, 0.0f, 0x1.528302p-58f, 0.0f, 0.0f,
     0x1.c872cap-25f, 0x1.707312p-21f, 0x1.0b5c58p-47f, 0.0f, 0x1.1304c4p-46f,
     0x1.b0712ep-108f, 0.0f, 0x1.1839bp-107f, 0.0f, 0x1.ab2602p-11f, 0x1.84f73cp-110f,
     0.0f, 0x1.aba1c6p-2f, 0.0f, 0x1.a32c98p-15f, 0.0f, 0x1.c3fddep-111f,
     0x1.b4156cp-123f, 0x1.ee97dep-10f, 0.0f, 0x1.ff8a14p-98f, 0.0f, 0.0f,
     0x1.47119cp-26f, 0.0f, 0.0f, 0x1.8f8e1ep-14f, 0x1.f9cbcp-116f, 0x1.729bd2p-90f,
     0x1.dd0494p-92f, 0x1.da752ap-7f, 0.0f, 0.0f, 0x1.e0a89cp-4f, 0.0f,
     0x1.05a62ap-10f, 0.0f, 0.0f, 0x1.fde396p-69f, 0x1.005076p-100f, 0x1.29951ep-86f,
     0x1.3758c8p-4f, 0.0f, 0.0f, 0.0f, 0x1.d1687p-54f, 0.0f, 0.0f, 0.0f,
     0x1.7d1c9cp-55f, 0.0f, 0.0f, 0x1.c413ap-70f, 0.0f, 0.0f, 0x1.11a628p-53f,
     0x1.8f7f9ap-83f, 0x1.90fab4p-55f, 0x1.4c0f68p-85f, 0x1p0f, 0.0f, 0.0f,
     0x1.b262d8p-108f, 0.0f, 0x1.a67fb8p-55f, 0.0f, 0.0f, 0x1.6c025ep-65f, 0.0f,
     0x1.3a1612p-112f, 0x1.bff71p-84f, 0x1.5d391p-120f, 0.0f, 0.0f, 0x1.89f3a6p-46f,
     0x1.c029fep-68f, 0x1.a1227ap-104f, 0x1.4fe856p-30f, 0x1.91115ep-58f, 0.0f, 0.0f,
     0.0f, 0x1.4a6e4cp-80f, 0x1.d08be8p-91f, 0.0f, 0x1.4d0adcp-29f, 0x1.44b87ap-113f,
     0.0f, 0.0f, 0x1.04b976p-51f, 0x1.fb2ceep-53f, 0x1.81999ep-121f, 0.0f, 0.0f, 0.0f,
     0x1.a330dep-18f, 0x1.ac911cp-7f, 0.0f, 0x1.9a601ap-18f, 0x1.d2818cp-82f,
     0x1.18faf8p-101f, 0.0f, 0x1.d6c43cp-108f, 0x1.e46a76p-66f, 0x1.1a5524p-77f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.6fab1ep-103f, 0x1.a6744cp-11f, 0.0f, 0.0f,
     0x1.61c044p-36f, 0x1.2d7fc6p-123f, 0x1.05f414p-98f, 0x1.e89aep-19f,
     0x1.1225dp-40f, 0.0f, 0.0f, 0x1.04cc7p-59f, 0x1.38cb64p-50f, 0x1.f5f858p-126f,
     0.0f, 0.0f, 0x1.783a46p-80f, 0x1.ce7ddap-27f, 0x1.5d418p-8f, 0x1.e9a11ap-101f,
     0x1.7b5eeap-54f, 0x1.804796p-75f, 0x1.c3ec1cp-84f, 0.0f, 0x1.83878p-64f, 0.0f,
     0x1.2c2cf8p-14f, 0x1.56ee6ep-21f, 0.0f, 0x1.0dfc26p-28f, 0x1.ce5ff4p-4f, 0.0f,
     0x1.32a6e8p-17f, 0x1.3b1068p-38f, 0x1.0f0a8ep-106f, 0x1.55414ap-77f,
     0x1.f18e54p-80f, 0.0f, 0x1.258a5ep-2f, 0x1.8e3104p-99f, 0.0f, 0x1.24ef56p-102f,
     0x1.74ca6cp-24f, 0.0f, 0.0f, 0.0f, 0x1.a9ca36p-73f, 0.0f, 0.0f, 0.0f,
     0x1.ac777p-114f, 0x1.d295aep-90f, 0x1.57ecbp-6f, 0x1.1be20cp-125f,
     0x1.c0d976p-115f, 0.0f, 0x1.e63382p-93f, 0.0f, 0.0f, 0x1.13468ep-108f,
     0x1.61fb2ap-23f, 0.0f, 0x1.4d67dap-72f, 0.0f, 0.0f, 0x1.69fdf8p-107f, 0.0f, 0.0f,
     0x1.cf45a4p-14f, 0x1.4a6068p-34f, 0.0f, 0x1.1c14cep-86f, 0x1.a9b3ap-20f, 0.0f,
     0x1.7fe926p-64f, 0x1.a5288ep-72f, 0.0f, 0x1.ea3a54p-117f, 0.0f, 0.0f, 0.0f,
     0x1.7014fcp-104f, 0.0f, 0.0f, 0x1.bc10f6p-39f, 0.0f, 0x1.a7a38ep-67f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.613d64p-34f, 0x1.a9b4b8p-87f, 0.0f, 0x1.3cc054p-48f, 0.0f,
     0x1.4bb4eep-116f, 0x1.e8e662p-91f, 0x1.38021ep-70f, 0x1.97dcf4p-63f,
     0x1.1b772ap-46f, 0x1.9a88fcp-80f, 0.0f, 0x1.a51d8ep-49f, 0x1.048eeep-8f, 0.0f,
     0.0f, 0.0f, 0x1.817cccp-6f, 0.0f, 0.0f, 0x1.cbd2aap-11f, 0x1.ee222ep-68f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.371fbap-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.638314p-122f,
     0.0f, 0x1.d30ac4p-19f, 0.0f, 0.0f, 0x1.fd8d7p-3f, 0x1.963b3cp-14f,
     0x1.d86fe6p-36f, 0x1.45c532p-35f, 0x1.183248p-78f, 0.0f, 0x1.9629bap-96f,
     0x1.1e585cp-22f, 0.0f, 0.0f, 0x1.6f003cp-3f, 0x1.e8a7dap-28f, 0x1.33c918p-23f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6a26aep-57f, 0.0f,
     0x1.174b14p-122f, 0.0f, 0.0f, 0x1.e0cebap-97f, 0x1.ea6c3ap-75f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b3933ap-109f, 0x1.e9c37cp-41f, 0x1.59277ep-117f, 0x1.418d7p-114f, 0.0f,
     0.0f, 0x1.0d4e82p-96f, 0.0f, 0x1.bb60ecp-55f, 0.0f, 0.0f, 0x1.586bb6p-69f, 0.0f,
     0x1.a5743ep-78f, 0x1.a7c432p-79f, 0x1.e286ccp-70f, 0.0f, 0.0f, 0.0f,
     0x1.1f6c0ep-82f, 0x1.f4588ep-11f, 0x1.2990ep-18f, 0x1.5aa12cp-69f, 0.0f,
     0x1.ce4dbcp-49f, 0.0f, 0x1.ce299ep-89f, 0x1.d3131cp-123f, 0x1.62e524p-67f,
     0x1.0eb932p-12f, 0x1.9db07p-106f, 0.0f, 0x1.6c87d8p-13f, 0.0f, 0.0f, 0.0f,
     0x1.e8c76ep-99f, 0x1.fd1228p-61f, 0x1.5e7882p-118f, 0.0f, 0x1.df6f28p-5f,
     0x1.ec1eb8p-116f, 0x1.0da1b4p-19f, 0x1.0deffp-117f, 0x1.ec6cfep-46f, 0.0f, 0.0f,
     0.0f, 0x1.159672p-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ff64d4p-10f, 0.0f,
     0x1.3a614cp-87f, 0.0f, 0.0f, 0.0f, 0x1.699a0cp-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3401ecp-80f, 0x1.fef062p-27f, 0.0f, 0x1.b7861ep-29f, 0.0f, 0x1.8126ccp-37f,
     0.0f, 0.0f, 0x1.7dbabap-78f, 0.0f, 0x1.3d1732p-38f, 0x1.f6b99ap-126f,
     0x1.8863c6p-19f, 0x1.933102p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.17fd4p-51f,
     0x1.e3ac6ep-107f, 0x1.c05d3ap-13f, 0x1.e240a8p-62f, 0x1.6b8614p-70f,
     0x1.1ccfaap-46f, 0.0f, 0.0f, 0x1.ebfa0ep-82f, 0.0f, 0x1.720344p-85f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.42e684p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.15407cp-60f, 0x1.07406cp-12f, 0x1.b156c8p-28f, 0x1p0f, 0.0f,
     0x1.625cdap-95f, 0x1.5bbdacp-94f, 0x1.e7e448p-87f, 0.0f, 0.0f, 0x1.af2b9ep-88f,
     0.0f, 0.0f, 0x1.755d6ap-61f, 0.0f, 0x1.9498b4p-106f, 0.0f, 0x1.80998cp-55f,
     0x1.14566p-75f, 0x1.ae14f4p-59f, 0.0f, 0.0f, 0.0f, 0x1.76e196p-78f, 0.0f,
     0x1.f2e4bp-57f, 0x1.ad3d76p-59f, 0.0f, 0x1.9c94c2p-14f, 0x1.b37892p-42f,
     0x1.55452ep-64f, 0.0f, 0.0f, 0x1.7707f2p-124f, 0x1.4c3076p-42f, 0.0f,
     0x1.57c892p-19f, 0.0f, 0.0f, 0x1.4b921p-45f, 0.0f, 0x1.b273a8p-50f,
     0x1.4a5b12p-67f, 0x1.8bc2f8p-106f, 0.0f, 0.0f, 0x1.4894bap-49f, 0x1.60967p-123f,
     0x1.2b0b7ap-104f, 0x1.9bc9fp-1f, 0.0f, 0x1.9d0964p-103f, 0x1.95de4cp-54f, 0.0f,
     0x1.d1f3f2p-8f, 0x1.c7e0eep-99f, 0.0f, 0x1.ad2678p-16f, 0.0f, 0x1.f4c8eep-2f,
     0x1.e012dap-71f, 0.0f, 0x1.6cc2dap-10f, 0.0f, 0x1.ccb4ep-86f, 0x1.411de4p-4f,
     0x1.b5b3dp-5f, 0x1.665258p-48f, 0x1.2a83b2p-65f, 0.0f, 0.0f, 0.0f,
     0x1.a77d7ap-41f, 0.0f, 0.0f, 0x1.40a472p-116f, 0x1.daa7aap-9f, 0.0f,
     0x1.516094p-115f, 0.0f, 0x1.1b2b84p-95f, 0x1.ea77b4p-44f, 0x1.7abc78p-91f,
     0x1.fdde2p-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a2ddd6p-40f, 0.0f, 0.0f, 0.0f,
     0x1.a4c11cp-104f, 0x1.371ddp-69f, 0x1.9e8dc4p-78f, 0x1.4677e6p-72f,
     0x1.d4ab36p-117f, 0x1.21951ap-37f, 0.0f, 0.0f, 0.0f, 0x1.60df5ap-61f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1dd682p-24f, 0x1.6020bap-52f, 0.0f, 0x1.54a402p-9f,
     0x1.ac586cp-3f, 0.0f, 0x1.8c1874p-40f, 0.0f, 0x1.30b056p-45f, 0.0f,
     0x1.8b8f6cp-36f, 0.0f, 0.0f, 0x1.d2ee96p-98f, 0.0f, 0x1.3e12b2p-125f,
     0x1.342ea2p-14f, 0.0f, 0x1.921fa8p-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b6a036p-14f, 0.0f, 0x1.9d623ap-37f, 0x1.266e5p-113f, 0x1.484ebep-37f,
     0x1.868954p-89f, 0x1.94d9dep-15f, 0x1.f08196p-125f, 0.0f, 0.0f, 0x1.855fc4p-10f,
     0.0f, 0x1.48f23ep-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b05afp-118f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.85193ep-45f, 0x1.31c6aep-69f,
     0.0f, 0x1.07331p-67f, 0x1.e449acp-12f, 0x1.224ebp-79f, 0x1.a252fap-95f, 0.0f,
     0.0f, 0.0f, 0x1.52f77p-110f, 0x1.a51a5p-24f, 0x1.e10fb6p-50f, 0x1.655acap-52f,
     0x1.33779ap-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.54b93p-104f, 0.0f,
     0.0f, 0x1.6b9bcp-50f, 0.0f, 0.0f, 0x1.6330c4p-91f, 0x1.4ee92cp-16f,
     0x1.f10f2ap-21f, 0.0f, 0x1.28ef66p-120f, 0x1.5c7ddcp-63f, 0x1.cc41acp-56f,
     0x1.80f36ap-64f, 0x1.9fb33ep-17f, 0x1.d0d88p-123f, 0.0f, 0x1.026decp-65f, 0.0f,
     0.0f, 0x1.860448p-109f, 0.0f, 0x1.253042p-113f, 0x1.54654p-36f, 0.0f, 0.0f,
     0x1.9d4fe4p-34f, 0x1.e8b0d4p-110f, 0x1.6e1038p-58f, 0x1.55720ep-8f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d4e57ep-6f, 0.0f, 0x1.94d20ap-56f, 0.0f, 0x1.52d188p-56f,
     0.0f, 0x1.6b676ap-53f, 0.0f, 0x1.76b7d4p-93f, 0x1.ce3ef4p-12f, 0.0f,
     0x1.60c0aep-45f, 0x1.f75d34p-34f, 0.0f, 0.0f, 0x1.71e554p-9f, 0x1.0e5f5ap-59f,
     0x1.a4e49p-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0ab88ep-68f, 0x1.6f0a36p-55f, 0.0f,
     0.0f, 0x1.4ebc44p-52f, 0x1.89d014p-100f, 0.0f, 0.0f, 0x1.95964cp-78f, 0.0f, 0.0f,
     0.0f, 0x1.7b5266p-63f, 0.0f, 0x1.2ed048p-58f, 0x1.93eab2p-113f, 0.0f, 0.0f,
     0x1.bac2bap-6f, 0.0f, 0x1.b40fa6p-119f, 0x1.dec1b4p-76f, 0x1.5f41a8p-85f, 0.0f,
     0.0f, 0x1.634488p-79f, 0.0f, 0.0f, 0x1.89955p-82f, 0x1.3b87d4p-14f,
     0x1.77c2a4p-79f, 0.0f, 0x1.51e62p-50f, 0.0f, 0.0f, 0x1.7ed6ep-61f,
     0x1.9e6d2p-109f, 0x1.7ebaf8p-75f, 0x1.d48d38p-109f, 0.0f, 0x1.c8edp-123f,
     0x1.52e7c8p-98f, 0.0f, 0.0f, 0x1.e8b5e6p-85f, 0.0f, 0x1.9bb1b8p-113f,
     0x1.756394p-45f, 0.0f, 0x1.8163bcp-97f, 0.0f, 0x1.a4ad3ap-14f, 0x1.f8e54cp-120f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e3f98ep-119f, 0.0f, 0x1.25554p-37f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9034cp-108f, 0.0f, 0x1.b8d2c2p-43f, 0.0f, 0x1.11be78p-66f,
     0x1.18b284p-113f, 0x1.65646ap-73f, 0.0f, 0.0f, 0.0f, 0x1.4fecb8p-10f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4fd256p-26f, 0.0f, 0x1.dc2b98p-105f, 0.0f, 0x1.b657aep-58f,
     0x1.547616p-69f, 0x1.9f580ap-18f, 0.0f, 0x1.feed38p-79f, 0.0f, 0x1.25b498p-40f,
     0x1.fdcc0ep-105f, 0x1.6c7abep-19f, 0x1.fd9db4p-105f, 0.0f, 0.0f, 0x1.3f47b2p-46f,
     0x1.a4f03cp-85f, 0.0f, 0x1.e731b2p-101f, 0x1.bf4fcp-108f, 0x1.abc7e6p-34f, 0.0f,
     0.0f, 0x1.f817b2p-79f, 0.0f, 0.0f, 0x1.030348p-33f, 0.0f, 0.0f, 0.0f,
     0x1.c66756p-29f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0efcc6p-65f,
     0x1.97a828p-17f, 0x1.f9d904p-23f, 0x1.b7fcacp-54f, 0.0f, 0x1.d0d49ep-23f,
     0x1.f6c32ap-10f, 0x1.fa824p-10f, 0.0f, 0.0f, 0x1.8461f4p-70f, 0.0f, 0.0f,
     0x1.3fa6fap-109f, 0.0f, 0.0f, 0x1.6bb86ep-8f, 0x1.f8b944p-66f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.bfb5bep-51f, 0x1.dbdb1ep-111f, 0x1.7bcb8p-58f, 0x1.fc06eap-74f, 0.0f,
     0x1.d6ad96p-60f, 0x1.ed26b8p-76f, 0x1.26c1c2p-120f, 0.0f, 0x1.82b8bep-12f,
     0x1.692bp-36f, 0x1.9cc632p-72f, 0x1.655b4ep-30f, 0.0f, 0x1.aeae0ap-81f, 0.0f,
     0x1.27b042p-6f, 0.0f, 0x1.b6839p-100f
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
            tmp1 = Sleef_fastcosf8_u3500kvx(tmp0);
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
    printf("Sleef_fastcosf8_u3500kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_fastcosf8_u3500kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
