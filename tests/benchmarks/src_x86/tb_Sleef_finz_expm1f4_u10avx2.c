/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_expm1f4_u10avx2128.c --function \
 *     Sleef_finz_expm1f4_u10avx2128 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 4 --function-input-vector-size \
 *     4 --bench --no-embedded-bin --target x86_avx2128
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
     0x1.3b9b0ap-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f,
     0x1.1480a8p-82f, 0.0f, 0x1.81343cp-38f, 0.0f, 0.0f, 0x1.5b6acp-42f, 0.0f, 0.0f,
     0x1.f8c7a2p-59f, 0x1.d6945ap-125f, 0x1.d1b35p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e92a84p-90f, 0x1.2fb958p-17f, 0.0f, 0x1.8ada96p-115f, 0.0f, 0.0f, 0.0f,
     0x1.6c25a6p-124f, 0.0f, 0.0f, 0x1.5c582ap-23f, 0x1.8e1736p-21f, 0x1.a59404p-93f,
     0.0f, 0.0f, 0x1.312bd2p-87f, 0x1.c819b4p-107f, 0.0f, 0.0f, 0.0f, 0x1.6d78cp-18f,
     0.0f, 0x1.1febcap-114f, 0x1.b4a9d6p-48f, 0x1.c926c6p-72f, 0x1.f76372p-43f, 0.0f,
     0.0f, 0x1.df0d48p-4f, 0.0f, 0x1.61cce6p-98f, 0.0f, 0x1.be8068p-105f,
     0x1.8a033p-70f, 0x1.3b9866p-96f, 0x1.68e28p-62f, 0x1.71e46ap-43f, 0.0f,
     0x1.f2eceap-97f, 0x1.60fc0ap-55f, 0.0f, 0.0f, 0x1.c37034p-77f, 0.0f, 0.0f, 0.0f,
     0x1.08e8fp-75f, 0x1.3172acp-48f, 0.0f, 0.0f, 0.0f, 0x1.c267d2p-83f, 0.0f, 0.0f,
     0x1.a86a8cp-109f, 0.0f, 0.0f, 0.0f, 0x1.e87602p-70f, 0x1.fa3ba4p-106f, 0.0f,
     0.0f, 0.0f, 0x1.b369f4p-58f, 0x1.760c18p-9f, 0x1.26a888p-80f, 0x1.76eee8p-38f,
     0x1.b2262cp-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0f539ep-26f, 0.0f, 0.0f,
     0x1.f066ecp-20f, 0.0f, 0.0f, 0x1.d81c88p-36f, 0x1.a41554p-85f, 0x1.33702ap-37f,
     0x1.dc85dep-24f, 0x1.819796p-56f, 0.0f, 0x1.420ad4p-61f, 0x1.fc327p-112f,
     0x1.9f998p-20f, 0.0f, 0x1.8d66fp-113f, 0.0f, 0.0f, 0x1.cd23f8p-126f, 0.0f, 0.0f,
     0x1.342ae2p-101f, 0x1.61ed7cp-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.27a688p-120f,
     0x1.8d2e24p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.944b76p-89f, 0.0f,
     0x1.ea8806p-47f, 0.0f, 0x1.cbdf64p-26f, 0x1.9836aep-40f, 0x1.85bd42p-28f,
     0x1.76476cp-57f, 0x1.e545d2p-6f, 0.0f, 0.0f, 0x1.3d5e64p-46f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.4c9accp-13f, 0x1.5a8276p-51f, 0x1.53015p-76f, 0.0f, 0x1.4b43ap-64f,
     0x1.ccb61ep-66f, 0x1.b67abap-36f, 0.0f, 0x1.5c62b6p-13f, 0.0f, 0x1.8383bep-71f,
     0x1.d5423ap-116f, 0x1.59193p-82f, 0x1.0fcef8p-63f, 0x1.d81468p-74f, 0.0f,
     0x1.385c56p-115f, 0.0f, 0.0f, 0x1.cf39b2p-15f, 0.0f, 0x1.14bb68p-114f,
     0x1.26934ep-114f, 0x1.b7a376p-79f, 0.0f, 0.0f, 0.0f, 0x1.923472p-54f,
     0x1.776a76p-32f, 0x1.b27f2ap-28f, 0x1.1e72dep-29f, 0x1.935082p-34f,
     0x1.1730c2p-53f, 0x1.f70adep-70f, 0.0f, 0x1.ed1278p-73f, 0.0f, 0.0f, 0.0f,
     0x1.516512p-101f, 0x1.7cea32p-18f, 0.0f, 0x1.b9b2cep-27f, 0.0f, 0x1.b476a2p-84f,
     0x1.da3ea6p-28f, 0.0f, 0x1.46193p-46f, 0x1.71c1a6p-15f, 0.0f, 0x1.c4180cp-71f,
     0x1.8b972ap-118f, 0x1.32720ap-27f, 0x1.9a3d86p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f29fap-15f, 0x1.cab074p-125f, 0x1.566d98p-33f, 0.0f, 0x1.98cad8p-68f,
     0x1.db13d8p-126f, 0.0f, 0x1.64b652p-21f, 0x1.57b8c4p-37f, 0.0f, 0x1.1276a6p-123f,
     0x1.c5e40cp-16f, 0x1.eb53fp-80f, 0.0f, 0x1.9584f8p-8f, 0.0f, 0x1.241e54p-53f,
     0x1.89bd14p-63f, 0.0f, 0x1.3d761ap-91f, 0.0f, 0x1.319d7p-17f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.3d319ap-43f, 0x1.daef9cp-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.98e8ecp-6f, 0.0f, 0.0f, 0x1.5bf6bcp-55f, 0.0f, 0x1.58f354p-24f,
     0x1.4cd658p-113f, 0x1.80ad9p-59f, 0.0f, 0x1.cc7e1p-107f, 0.0f, 0.0f,
     0x1.ee91d4p-25f, 0x1.b6c36ep-30f, 0x1.6a632ap-75f, 0x1.e68dcep-61f, 0.0f,
     0x1.cdc26p-41f, 0x1.30e136p-42f, 0.0f, 0.0f, 0x1.5d6d9cp-16f, 0x1.b3549p-52f,
     0x1.14f38ep-72f, 0.0f, 0x1.e5a718p-74f, 0.0f, 0.0f, 0x1.4b441cp-57f,
     0x1.6c1218p-19f, 0x1.79ce24p-53f, 0.0f, 0x1.5b1386p-94f, 0x1.827cdep-61f,
     0x1.4de9c6p-91f, 0x1.224586p-9f, 0.0f, 0.0f, 0x1.a0d34cp-62f, 0x1.3537bap-36f,
     0x1.9a8588p-29f, 0x1.1b576ap-125f, 0.0f, 0x1.110ce4p-92f, 0.0f, 0.0f,
     0x1.a90d5ep-76f, 0x1.6071dcp-59f, 0x1.a1d60ep-116f, 0.0f, 0.0f, 0.0f,
     0x1.0981fp-92f, 0x1.968364p-69f, 0x1.00205ep-49f, 0x1.26cc5cp-21f, 0.0f,
     0x1.67b05p-8f, 0.0f, 0.0f, 0x1.2490a8p-54f, 0x1.c657e6p-49f, 0x1.51693cp-99f,
     0.0f, 0.0f, 0.0f, 0x1.0073ap-43f, 0x1.adfa32p-36f, 0x1.ac6cd2p-28f,
     0x1.512708p-95f, 0x1.2076eep-70f, 0.0f, 0.0f, 0.0f, 0x1.8f2642p-111f,
     0x1.fdd202p-57f, 0.0f, 0.0f, 0x1.9df5fep-28f, 0x1.ec268ap-34f, 0.0f, 0.0f, 0.0f,
     0x1.d25892p-90f, 0.0f, 0x1.b08746p-20f, 0x1.3354cap-4f, 0.0f, 0x1.9e4db2p-21f,
     0.0f, 0x1.8b825ep-93f, 0.0f, 0x1.e1fe62p-34f, 0.0f, 0.0f, 0.0f, 0x1.5689f2p-14f,
     0.0f, 0.0f, 0x1.9d2054p-18f, 0.0f, 0x1.d4217ep-95f, 0x1.312af4p-10f, 0.0f, 0.0f,
     0x1.c72a6cp-77f, 0.0f, 0.0f, 0x1.957becp-121f, 0x1.761a1cp-55f, 0.0f,
     0x1.506b6ap-94f, 0.0f, 0x1.a7a998p-79f, 0x1.8e0e4ep-121f, 0.0f, 0x1.c91d4ep-31f,
     0x1.3186b6p-4f, 0.0f, 0x1.41de7ap-41f, 0x1.8be5fep-121f, 0x1.2bf03p-16f, 0.0f,
     0.0f, 0.0f, 0x1.e705ep-62f, 0x1.946a0ep-33f, 0x1.01e1b4p-59f, 0.0f,
     0x1.604bd4p-74f, 0x1.e45096p-64f, 0x1.8948ecp-111f, 0.0f, 0.0f, 0.0f,
     0x1.7588bcp-2f, 0.0f, 0.0f, 0x1.d5822ap-39f, 0x1.86ddc4p-61f, 0x1.a885e8p-1f,
     0.0f, 0.0f, 0x1.17d60cp-59f, 0x1.2b6a36p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.5a30d6p-116f, 0.0f, 0.0f, 0.0f, 0x1.cd9c24p-67f, 0x1.428d5p-76f,
     0x1.982a82p-5f, 0x1.84403p-10f, 0x1.2c27d6p-43f, 0x1.5e79e6p-64f,
     0x1.0074bcp-33f, 0x1.a29eeep-95f, 0x1.b87ba8p-73f, 0x1.8bc33cp-116f, 0.0f,
     0x1.1aa698p-26f, 0x1.fa26eap-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.993c94p-17f, 0x1.fe700ap-94f, 0x1.98ae4p-45f, 0.0f, 0.0f, 0.0f,
     0x1.d6228p-43f, 0x1.d62b3cp-77f, 0x1.4c9c2ap-69f, 0x1.202616p-10f, 0.0f,
     0x1.1d516ep-45f, 0.0f, 0x1.9df1aap-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.613676p-118f, 0.0f, 0.0f, 0x1.500ad6p-42f, 0x1.b70522p-89f, 0.0f,
     0x1.9924fep-51f, 0x1.058a06p-126f, 0x1.252a0ep-57f, 0x1.5c710cp-48f,
     0x1.283546p-115f, 0x1.2e56d4p-90f, 0x1.c5e0a6p-46f, 0.0f, 0x1.1ec502p-20f, 0.0f,
     0x1.d341b6p-57f, 0x1.5f5566p-93f, 0x1.15dc02p-19f, 0.0f, 0.0f, 0x1.e63d8cp-84f,
     0.0f, 0x1.95aadep-19f, 0x1.3bae06p-43f, 0x1.1af9aap-107f, 0.0f, 0x1.0232e6p-88f,
     0x1.db552ep-37f, 0.0f, 0.0f, 0.0f, 0x1.0f3244p-50f, 0x1.3dd97p-35f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.84027p-91f, 0.0f, 0.0f,
     0x1.06c0b4p-113f, 0x1.d192a8p-62f, 0.0f, 0.0f, 0x1.007004p-76f, 0x1.0275d2p-46f,
     0x1.15edd6p-25f, 0.0f, 0x1.9261b6p-43f, 0.0f, 0x1.e03eecp-86f, 0.0f,
     0x1.dcbf0ep-88f, 0x1.486264p-44f, 0x1.92bcdep-70f, 0x1.556784p-33f,
     0x1.427672p-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8ed5a6p-53f,
     0x1.8e0afp-89f, 0x1.2f01d2p-67f, 0x1.4417f4p-36f, 0x1.93e63ep-20f,
     0x1.4f35b8p-33f, 0.0f, 0x1.a442f2p-66f, 0x1.edf2b2p-22f, 0x1.ce14a6p-66f,
     0x1.fff7cep-114f, 0x1.cb7576p-50f, 0x1.4afe4p-53f, 0x1.28e53cp-74f, 0.0f, 0.0f,
     0.0f, 0x1.217434p-87f, 0.0f, 0.0f, 0x1.e785ep-65f, 0x1.dd2b76p-19f,
     0x1.818f3ep-106f, 0.0f, 0.0f, 0.0f, 0x1.a63946p-79f, 0x1.cdccdep-123f,
     0x1.bca3bcp-112f, 0.0f, 0x1.22c7aap-86f, 0x1.82175p-82f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.15ac5ap-86f, 0.0f, 0.0f, 0.0f, 0x1.e3897p-106f, 0x1.e6a744p-49f,
     0x1.cdcf88p-10f, 0x1.d9c6b8p-48f, 0x1.fa5c88p-125f, 0.0f, 0x1.298a86p-23f,
     0x1.cd2266p-34f, 0.0f, 0x1.93071ap-125f, 0.0f, 0.0f, 0x1.74e50ep-87f, 0.0f, 0.0f,
     0x1.039a3cp-39f, 0.0f, 0x1.503502p-82f, 0x1.4a3794p-117f, 0.0f, 0.0f, 0.0f,
     0x1.2f6b4ep-31f, 0.0f, 0x1.64ee2ep-116f, 0.0f, 0.0f, 0.0f, 0x1.719f34p-113f,
     0.0f, 0x1.89d774p-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2619eep-12f, 0.0f,
     0x1.dbdbd8p-15f, 0x1.f1daf6p-81f, 0x1.5cfbd4p-1f, 0.0f, 0x1.3b3602p-89f,
     0x1.c6c88ap-126f, 0.0f, 0x1.fb4e12p-26f, 0x1.4a2862p-118f, 0x1.23903ap-106f,
     0x1.4cd9dap-93f, 0x1.44d34ep-2f, 0.0f, 0x1.3456a2p-99f, 0x1.f06a74p-95f, 0.0f,
     0.0f, 0.0f, 0x1.9d6284p-22f, 0.0f, 0x1.80333ap-81f, 0x1.8ddc48p-123f,
     0x1.8143d8p-58f, 0.0f, 0.0f, 0.0f, 0x1.11b26p-110f, 0x1.0653bp-92f, 0.0f, 0.0f,
     0.0f, 0x1.98b9dp-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7335a6p-65f, 0.0f,
     0x1.7e786ep-10f, 0.0f, 0.0f, 0x1.fe8592p-110f, 0x1.76e308p-62f, 0x1.be0f48p-119f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.02ba82p-98f, 0.0f, 0.0f,
     0.0f, 0x1.4da19cp-86f, 0x1.e71ef4p-69f, 0.0f, 0x1.4c013p-108f, 0x1.f40a64p-103f,
     0x1.7621dcp-62f, 0.0f, 0x1.b99e7p-5f, 0.0f, 0x1.97d762p-76f, 0.0f, 0.0f,
     0x1.2995ccp-40f, 0x1.eebea2p-44f, 0x1.41dc6ap-19f, 0x1.d70f82p-32f, 0.0f, 0.0f,
     0x1.62ee48p-92f, 0.0f, 0x1.84425ep-9f, 0x1.8cabc4p-118f, 0x1.551b5cp-90f, 0.0f,
     0.0f, 0x1.a98b84p-59f, 0.0f, 0.0f, 0x1.d2daf4p-97f, 0x1.5b6024p-65f,
     0x1.a7e8d6p-25f, 0x1.798deep-75f, 0.0f, 0x1.04d3fp-90f, 0x1.f2406p-85f,
     0x1.da3bfep-4f, 0x1.c79b5cp-22f, 0x1.e01d2p-28f, 0x1.7213a4p-72f, 0x1.bb49dp-59f,
     0.0f, 0x1p0f, 0.0f, 0x1.8905aep-115f, 0x1.99885ep-16f, 0x1.eb13d8p-105f, 0.0f,
     0x1.728794p-63f, 0.0f, 0.0f, 0.0f, 0x1.5d0ad8p-105f, 0.0f, 0.0f, 0x1.a05cdp-54f,
     0x1.09086p-119f, 0.0f, 0.0f, 0x1.2905c6p-91f, 0.0f, 0x1.207baep-94f, 0.0f, 0.0f,
     0.0f, 0x1.a9969p-34f, 0.0f, 0x1.78ae84p-120f, 0x1.9af2c8p-50f, 0x1.31f292p-10f,
     0.0f, 0x1.be9bb6p-69f, 0x1.34002ep-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3b1b58p-57f, 0.0f, 0.0f, 0x1.c3710ep-15f, 0.0f, 0x1p0f, 0.0f, 0.0f,
     0x1.cad75ep-89f, 0.0f, 0x1.0987bep-38f, 0.0f, 0x1.a4df76p-2f, 0x1.2c51eap-108f,
     0x1.018106p-122f, 0.0f, 0.0f, 0x1.a4f92ep-117f, 0x1.d6279p-105f, 0.0f,
     0x1.bf648cp-74f, 0.0f, 0x1.d37348p-48f, 0x1.b1203cp-52f, 0x1.477eb2p-55f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e6489p-72f, 0x1.a7b534p-60f, 0x1.2e669ap-31f, 0.0f, 0.0f,
     0.0f, 0x1.b331eep-39f, 0x1.93b198p-53f, 0.0f, 0x1.092b1ep-27f, 0.0f, 0.0f,
     0x1.6caca2p-61f, 0.0f, 0.0f, 0x1.8c0beap-117f, 0x1.35a83ep-96f, 0x1.ab2c7ep-93f,
     0x1.3925bp-106f, 0.0f, 0.0f, 0x1.4401f6p-122f, 0.0f, 0.0f, 0x1.c0f30ap-11f,
     0x1.5d2204p-80f, 0x1.99c05ap-61f, 0x1.5523d2p-61f, 0.0f, 0x1.f76478p-86f, 0.0f,
     0x1.3edb7ap-57f, 0.0f, 0.0f, 0x1.513cccp-21f, 0x1.4fa822p-120f, 0.0f, 0.0f,
     0x1.60616ep-90f, 0.0f, 0.0f, 0x1.d41e52p-55f, 0x1.33fac8p-3f, 0x1.f383bap-3f,
     0.0f, 0.0f, 0x1.425caap-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f89b2cp-37f, 0.0f,
     0x1.748e3ap-11f, 0.0f, 0x1.c4f4aap-39f, 0x1p0f, 0x1.6d0b74p-82f, 0x1.8ed44cp-85f,
     0x1.785f6ap-65f, 0.0f, 0x1.6e5f54p-95f, 0x1.6644aap-9f, 0x1.cd0ad4p-80f,
     0x1.2b0866p-116f, 0.0f, 0.0f, 0x1.6cc4ap-69f, 0x1.16805ap-92f, 0x1.c10c36p-86f,
     0x1.973368p-18f, 0.0f, 0.0f, 0x1.5c0d22p-80f, 0x1.cf0f5p-59f, 0x1.b2472ep-45f,
     0.0f, 0.0f, 0x1.c09ff2p-40f, 0x1.c38e34p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.437dd4p-23f, 0.0f, 0.0f, 0x1.e307e8p-31f, 0.0f, 0x1.d3c208p-112f,
     0x1.39b23ep-100f, 0.0f, 0.0f, 0x1.1285a8p-23f, 0.0f, 0x1.d11778p-72f,
     0x1.9f345cp-68f, 0x1.01d106p-68f, 0.0f, 0x1.846faap-119f, 0.0f, 0x1.c4077ep-111f,
     0x1.0ead22p-4f, 0x1.3083d2p-47f, 0.0f, 0x1.852f72p-54f, 0.0f, 0.0f,
     0x1.a565eep-102f, 0x1.3c03eap-7f, 0.0f, 0.0f, 0.0f, 0x1.01dcep-119f,
     0x1.72e674p-25f, 0x1.66416cp-9f, 0.0f, 0x1.0f48d8p-54f, 0x1.74aff2p-2f,
     0x1.215c5ep-33f, 0.0f, 0x1.767036p-90f, 0.0f, 0x1.49a58ep-3f, 0.0f, 0.0f,
     0x1.e5ffe4p-82f, 0.0f, 0x1.9ef99cp-68f, 0.0f, 0x1.c47ccap-94f, 0x1.ab976p-37f,
     0x1.a8489ap-11f, 0.0f, 0x1.4d8734p-95f, 0x1.1dfb48p-12f, 0x1.b2b2d4p-7f,
     0x1.4c4f5cp-17f, 0.0f, 0x1.9fabep-72f, 0x1p0f, 0.0f, 0x1.4012bap-40f, 0.0f,
     0x1.aa57cap-44f, 0x1.8ea174p-81f, 0.0f, 0x1.014adp-12f, 0x1.a9465cp-68f,
     0x1.322246p-56f, 0x1.c6b6a6p-9f, 0.0f, 0.0f, 0.0f, 0x1.1f0596p-77f, 0.0f,
     0x1.c97dep-68f, 0.0f, 0x1.6b754ap-47f, 0x1.c2f5bcp-47f, 0x1.28c17ep-79f, 0.0f,
     0x1.136b64p-82f, 0x1.a64458p-93f, 0.0f, 0x1.4f8cecp-117f, 0.0f, 0x1.6ce046p-106f,
     0x1.a41232p-103f, 0x1.00e49p-116f, 0x1.69d8dp-15f, 0x1.5433f6p-23f,
     0x1.b9dc5ep-34f, 0x1.2c77b4p-83f, 0x1.0deaa2p-35f, 0x1.45a0eep-83f,
     0x1.f45eeap-56f, 0.0f, 0x1.05dbc8p-73f, 0.0f, 0x1.babcfcp-39f, 0x1.600fe8p-84f,
     0.0f, 0.0f, 0.0f, 0x1.560b2ep-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0fe01p-111f,
     0x1.f3120ep-3f, 0.0f, 0x1.a43522p-71f, 0.0f, 0x1.77e10cp-41f, 0.0f,
     0x1.e860a2p-24f, 0.0f, 0.0f, 0x1.8e3f18p-73f, 0x1.f660e6p-99f, 0.0f, 0.0f,
     0x1.d389a2p-1f, 0x1.f67c5ap-61f, 0x1.76b13p-98f, 0.0f, 0x1.0f6ec8p-74f, 0.0f,
     0.0f, 0x1.baed2ap-45f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.bfe2d8p-77f, 0.0f, 0.0f,
     0x1.c4a97ep-79f, 0x1.1bcd82p-26f, 0x1.2f9e3cp-8f, 0x1.d1182cp-110f,
     0x1.13dddap-95f, 0x1.a8672ep-17f, 0.0f, 0.0f, 0x1.692018p-104f, 0x1.9eb286p-118f,
     0x1.074d18p-75f, 0.0f, 0x1.5c49cep-57f, 0.0f, 0.0f, 0x1.b51a78p-43f, 0.0f, 0.0f,
     0.0f, 0x1.e0ac82p-122f, 0.0f, 0x1.486edcp-110f, 0x1.1574ecp-107f,
     0x1.c482c4p-29f, 0.0f, 0.0f, 0x1.3d307cp-105f, 0.0f, 0.0f, 0x1.54556ep-103f,
     0.0f, 0x1.dc7304p-54f, 0.0f, 0x1.57ef22p-27f
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
            tmp1 = Sleef_finz_expm1f4_u10avx2128(tmp0);
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
    printf("Sleef_finz_expm1f4_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_expm1f4_u10avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
