/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sincosf8_u35kvx.c --function \
 *     Sleef_finz_sincosf8_u35kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 4 --function-input-vector-size \
 *     4 --precision sleef_sf2 --bench --no-embedded-bin --target kv3
 *
 */
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <string.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef_float32x8_t_2 external_bench_wrapper_cst = {.x = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f},.y = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f}};
static const Sleef_float32x8_t_2 external_bench_wrapper_cst1 = {.x = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f},.y = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f}};
volatile Sleef_float32x8_t_2 external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0.0f, 0x1.f69682p-79f, 0.0f, 0x1.082096p-86f, 0x1.9daca4p-65f, 0.0f, 0.0f,
     0x1.010d4ep-24f, 0x1.0032cp-9f, 0x1.5e033ap-1f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d22868p-18f, 0.0f, 0x1.be091ep-63f, 0x1.45128ap-29f, 0.0f, 0x1.2936ccp-1f,
     0x1.754d2p-41f, 0.0f, 0.0f, 0.0f, 0x1.783fbap-1f, 0.0f, 0.0f, 0.0f,
     0x1.92566cp-42f, 0.0f, 0x1.5ca078p-105f, 0x1.02ecc6p-115f, 0x1.8c5ffcp-39f,
     0x1p0f, 0x1.2c6188p-32f, 0x1.4beba6p-83f, 0.0f, 0x1.54b34ap-81f,
     0x1.ae3c3cp-105f, 0x1.2c382cp-51f, 0.0f, 0.0f, 0x1.a13cecp-84f, 0.0f,
     0x1.ac3beep-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.08a9c6p-53f,
     0x1.f20174p-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.842fd6p-101f, 0x1.2ed75p-32f, 0.0f,
     0.0f, 0x1.f0a7dcp-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.af25dp-56f, 0x1.f20c0ap-96f,
     0x1.ba04a8p-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a43128p-124f,
     0x1.d67226p-14f, 0.0f, 0.0f, 0.0f, 0x1.9d6c06p-3f, 0x1.f0adfap-93f,
     0x1.06e566p-100f, 0x1.f15c8ap-82f, 0x1.b0b938p-26f, 0.0f, 0.0f, 0x1.4f2426p-20f,
     0x1.c3cc36p-62f, 0x1.116c14p-63f, 0.0f, 0x1.d00cacp-11f, 0.0f, 0.0f,
     0x1.f1bfecp-96f, 0.0f, 0.0f, 0x1.272766p-62f, 0x1.4e8c5ep-57f, 0x1.8d0b6ep-38f,
     0.0f, 0x1.9f0f1ep-105f, 0x1.8518f4p-126f, 0x1.6cf938p-13f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.138f32p-110f, 0x1.dc325cp-84f, 0.0f, 0x1.cd73f8p-1f, 0x1.d2a1fcp-94f,
     0x1.58a6ecp-15f, 0x1.1861c4p-79f, 0.0f, 0.0f, 0.0f, 0x1.7f134p-1f,
     0x1.1d5bfep-46f, 0.0f, 0x1.55657ap-60f, 0.0f, 0.0f, 0.0f, 0x1.d8999ep-79f,
     0x1.c47c2ep-120f, 0x1.b546dep-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a5436cp-125f,
     0x1.5f05bp-57f, 0.0f, 0x1.1acb3cp-36f, 0.0f, 0x1.2ed292p-105f, 0.0f, 0.0f,
     0x1.b1e674p-117f, 0x1.0f356ep-38f, 0x1.08f222p-25f, 0x1.e6e012p-126f, 0.0f, 0.0f,
     0x1.9ac754p-55f, 0x1.9bae88p-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0ab662p-88f, 0.0f,
     0.0f, 0x1.84f3c6p-112f, 0x1.ab8c22p-36f, 0.0f, 0x1.371c44p-126f, 0.0f, 0.0f,
     0.0f, 0x1.09c27ap-10f, 0x1.f33742p-123f, 0.0f, 0.0f, 0.0f, 0x1.f5b918p-113f,
     0x1.7ef756p-56f, 0.0f, 0x1.67f1b6p-29f, 0.0f, 0.0f, 0x1.5eb264p-81f,
     0x1.3858e2p-50f, 0x1.1c7bf4p-62f, 0.0f, 0x1.97cbdap-125f, 0.0f, 0.0f,
     0x1.cd0102p-93f, 0.0f, 0x1.43054ep-62f, 0.0f, 0.0f, 0x1.c2d0eep-50f,
     0x1.943ed4p-105f, 0.0f, 0x1.1d18aep-15f, 0.0f, 0x1.3e0ea6p-41f, 0x1.b9095cp-56f,
     0.0f, 0x1.f2516ep-84f, 0.0f, 0.0f, 0x1.398504p-123f, 0x1.136c6ap-43f,
     0x1.882c4p-66f, 0x1.285b1p-49f, 0.0f, 0x1.ea5556p-78f, 0x1.754388p-44f,
     0x1.90c97ep-68f, 0.0f, 0.0f, 0.0f, 0x1.a7e238p-92f, 0x1.059102p-34f, 0.0f,
     0x1.71b70cp-110f, 0x1.2664c8p-79f, 0x1.e57616p-68f, 0x1.d72c3ep-77f,
     0x1.3c9822p-5f, 0x1.9cde12p-47f, 0.0f, 0x1.56fd16p-4f, 0.0f, 0.0f, 0.0f,
     0x1.7c9ec4p-84f, 0x1.430aa6p-91f, 0x1.af534ep-18f, 0.0f, 0.0f, 0x1.ce28dap-11f,
     0x1.f51314p-58f, 0x1.cf3f38p-66f, 0x1.8c0868p-117f, 0.0f, 0x1.47a8e2p-18f,
     0x1.77f912p-44f, 0x1.493506p-64f, 0x1.f32f7ap-61f, 0x1.04138ep-61f, 0.0f, 0.0f,
     0.0f, 0x1.12ca06p-30f, 0x1.72f052p-84f, 0.0f, 0.0f, 0.0f, 0x1.438d5ep-103f, 0.0f,
     0x1.47f2f2p-23f, 0.0f, 0.0f, 0x1.3a1d3cp-83f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.106892p-104f, 0.0f, 0.0f, 0.0f, 0x1.207fd2p-70f, 0x1.5ed906p-20f,
     0x1.c7468p-77f, 0.0f, 0x1.c74ae8p-48f, 0x1.a71e2cp-82f, 0.0f, 0x1.4f15d2p-29f,
     0x1.b64064p-48f, 0x1.9bf84ap-19f, 0x1.ea01eap-97f, 0.0f, 0.0f, 0x1.a4abfep-111f,
     0.0f, 0.0f, 0x1.7191fep-120f, 0.0f, 0x1.4beafcp-107f, 0.0f, 0.0f,
     0x1.5697eep-44f, 0x1.cb4f28p-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1557aap-52f,
     0x1.6ca4a8p-33f, 0.0f, 0.0f, 0x1.7e3a4ap-40f, 0x1.bce9a6p-38f, 0x1.aa494p-77f,
     0x1.9215b6p-124f, 0.0f, 0.0f, 0.0f, 0x1.12bebcp-56f, 0x1.aff804p-72f,
     0x1.c54274p-54f, 0.0f, 0.0f, 0x1.bc3beep-43f, 0.0f, 0.0f, 0x1.22e988p-111f,
     0x1.8434dp-38f, 0x1.623db2p-50f, 0.0f, 0x1.e5d3b4p-116f, 0.0f, 0.0f,
     0x1.672f66p-4f, 0.0f, 0x1.b93b1cp-73f, 0x1.adb85ap-66f, 0.0f, 0x1.8a752cp-97f,
     0.0f, 0.0f, 0x1.83a59cp-100f, 0.0f, 0x1.5efd2ep-90f, 0x1.e081e4p-114f, 0.0f,
     0x1.1ac9eap-56f, 0.0f, 0x1.a27394p-112f, 0x1.7612a2p-81f, 0.0f, 0x1.03e32ap-25f,
     0x1.0992f8p-35f, 0x1.5dececp-30f, 0.0f, 0.0f, 0x1.b255c4p-11f, 0.0f,
     0x1.1a1eep-112f, 0x1.1bf22ap-109f, 0x1.2fe74ep-114f, 0.0f, 0.0f, 0.0f,
     0x1.380276p-85f, 0.0f, 0x1.fc1d8cp-105f, 0x1.c6a25ep-78f, 0x1.a2a60cp-86f,
     0x1.d8b1e6p-9f, 0.0f, 0.0f, 0x1.4b1a5p-104f, 0x1.00361ep-96f, 0x1.00f25ep-27f,
     0x1.5c6b66p-61f, 0x1.5cf53ep-101f, 0x1.2a1bbep-92f, 0x1.221802p-7f, 0.0f,
     0x1.282162p-32f, 0x1.023dbep-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c7da0ap-126f, 0x1.93a648p-44f, 0x1.4ead12p-122f, 0.0f, 0x1.c45206p-117f,
     0.0f, 0.0f, 0x1.c825aap-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ffe368p-15f, 0.0f,
     0x1.48dbeep-24f, 0x1.c993e8p-46f, 0.0f, 0.0f, 0x1.4a602p-105f, 0x1.32ee7p-82f,
     0.0f, 0x1.3be0fcp-111f, 0.0f, 0.0f, 0x1.05beacp-87f, 0.0f, 0x1.683a9ep-90f,
     0x1.b852a4p-120f, 0.0f, 0x1.9f0018p-59f, 0.0f, 0x1.40b36ap-86f, 0x1.3f1908p-113f,
     0.0f, 0x1.74bbc2p-70f, 0x1.d51bbcp-5f, 0x1.f38196p-80f, 0x1.d8d788p-64f,
     0x1.a35bbp-101f, 0x1.9a71fap-121f, 0x1.e2c98ap-38f, 0x1.36a172p-40f, 0.0f,
     0x1.7738c8p-25f, 0.0f, 0x1.8ee974p-121f, 0.0f, 0.0f, 0x1.bc9114p-65f, 0.0f, 0.0f,
     0x1.791f44p-24f, 0.0f, 0x1.17d15ap-75f, 0x1.4b251cp-111f, 0x1.5160fep-39f, 0.0f,
     0.0f, 0x1.5f171ap-33f, 0.0f, 0.0f, 0x1.61b19ep-118f, 0.0f, 0x1.fe123ap-67f,
     0x1.e200bp-99f, 0x1.60c74p-33f, 0.0f, 0.0f, 0x1.8ba968p-88f, 0.0f, 0.0f,
     0x1.2f5c8ap-45f, 0.0f, 0x1.087f48p-65f, 0x1.401872p-3f, 0.0f, 0.0f,
     0x1.4d3844p-24f, 0x1.927bcep-70f, 0.0f, 0.0f, 0.0f, 0x1.3a19b4p-17f,
     0x1.b34734p-121f, 0x1.a548e6p-71f, 0x1.5abb9ep-93f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.459516p-20f, 0x1.21d316p-82f, 0x1.fa7aa6p-35f, 0.0f, 0x1.1e8a18p-119f, 0.0f,
     0.0f, 0x1.733ea8p-7f, 0.0f, 0x1.e791f8p-115f, 0x1.b4b4p-76f, 0.0f, 0.0f, 0.0f,
     0x1.988982p-53f, 0x1.6bd1ep-76f, 0x1.f82b0ap-125f, 0.0f, 0x1.45634ep-96f, 0.0f,
     0x1.c8f3c2p-91f, 0x1.af78b2p-113f, 0.0f, 0x1.ff9048p-75f, 0x1.96680ep-25f, 0.0f,
     0x1.0818b6p-76f, 0x1.f4e222p-123f, 0.0f, 0.0f, 0x1.d97656p-80f, 0x1.04fa84p-88f,
     0.0f, 0.0f, 0x1.eff734p-23f, 0.0f, 0x1.f6291ap-59f, 0x1.fafb2ep-124f, 0.0f, 0.0f,
     0x1.9ef616p-18f, 0.0f, 0.0f, 0.0f, 0x1.0c04e6p-2f, 0.0f, 0.0f, 0.0f,
     0x1.de2416p-103f, 0x1.fa541ap-118f, 0x1.76f094p-90f, 0.0f, 0x1.6ac958p-32f, 0.0f,
     0.0f, 0x1.7b8a14p-3f, 0.0f, 0.0f, 0x1.6e7f2ap-83f, 0.0f, 0.0f, 0x1.20a792p-29f,
     0.0f, 0.0f, 0x1.886226p-18f, 0.0f, 0x1.f938ep-57f, 0.0f, 0.0f, 0.0f,
     0x1.692f2p-35f, 0x1.9d0d8p-42f, 0.0f, 0x1.4fe25p-106f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.afb18p-80f, 0.0f, 0x1.8cdf8ap-16f, 0.0f, 0x1.a855e8p-77f, 0.0f,
     0x1.184ebep-33f, 0x1.be02ep-26f, 0.0f, 0.0f, 0x1.00fa52p-8f, 0.0f, 0.0f, 0.0f,
     0x1.34687cp-75f, 0x1.cf31fcp-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.062866p-121f,
     0.0f, 0x1.31273ap-103f, 0.0f, 0.0f, 0x1.f72694p-93f, 0x1.2f0f36p-65f,
     0x1.8b6268p-105f, 0.0f, 0x1.51927ep-89f, 0x1.b15d14p-123f, 0x1.c344b2p-5f,
     0x1.04cd36p-88f, 0.0f, 0x1.dcaaaep-51f, 0x1.043afcp-63f, 0x1.9c5a46p-81f, 0.0f,
     0.0f, 0x1.c63bbp-118f, 0.0f, 0.0f, 0x1.84a736p-74f, 0.0f, 0.0f, 0x1.527878p-13f,
     0x1.e9814ap-50f, 0.0f, 0x1.53527ep-104f, 0.0f, 0.0f, 0x1.c0be44p-30f, 0.0f,
     0x1.754c78p-112f, 0.0f, 0x1.35c4bap-88f, 0.0f, 0x1.5ff1b4p-12f, 0x1.8f4138p-23f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e8cf68p-32f, 0x1.edb7eep-101f,
     0x1.2f9efp-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.83c25cp-61f, 0.0f,
     0x1.fb0992p-41f, 0.0f, 0x1.2d893ap-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.55b2d2p-80f,
     0.0f, 0x1.412f9ep-46f, 0x1.5cc1f6p-63f, 0x1.58b882p-53f, 0x1.5fb4bp-9f,
     0x1.21f1b8p-105f, 0.0f, 0x1.a62068p-1f, 0.0f, 0x1.287cf4p-14f, 0x1.de2254p-47f,
     0x1.db75cap-88f, 0x1.be1968p-30f, 0x1.e6ebdp-39f, 0.0f, 0x1.ce8a66p-98f, 0.0f,
     0x1.cb0adcp-23f, 0.0f, 0x1.9e6372p-80f, 0x1.db509ap-94f, 0x1.f7de4cp-101f,
     0x1.902a82p-60f, 0.0f, 0.0f, 0.0f, 0x1.7ce48cp-83f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0f4fdp-40f, 0.0f, 0.0f, 0x1.ce77fcp-110f, 0.0f, 0x1.f486cep-101f, 0.0f, 0.0f,
     0.0f, 0x1.840b8ap-82f, 0x1.ab8618p-22f, 0.0f, 0.0f, 0x1.6297fp-45f, 0.0f, 0.0f,
     0x1.15a46ap-125f, 0x1.90a72p-53f, 0x1.46b4ap-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.05d1ap-121f, 0.0f, 0x1.32e34ep-5f, 0.0f,
     0.0f, 0x1.d55a96p-112f, 0.0f, 0.0f, 0x1.6a2286p-7f, 0.0f, 0x1.b7a648p-36f, 0.0f,
     0x1.b71166p-108f, 0x1.845ee8p-56f, 0x1.0b5be6p-48f, 0x1.b398ep-16f, 0.0f,
     0x1.7fdf1p-11f, 0.0f, 0.0f, 0.0f, 0x1.a6e696p-116f, 0.0f, 0.0f, 0.0f,
     0x1.fff1bep-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ecd082p-1f, 0.0f, 0.0f,
     0x1.9aa95cp-100f, 0.0f, 0x1.a9372cp-17f, 0x1.c1fb6ap-32f, 0x1.6af38ep-89f, 0.0f,
     0.0f, 0x1.d0b164p-104f, 0.0f, 0x1.36e37ep-121f, 0.0f, 0.0f, 0.0f,
     0x1.6d1398p-83f, 0.0f, 0.0f, 0x1.e36364p-46f, 0.0f, 0x1.ed3f12p-90f, 0.0f, 0.0f,
     0x1.eaf12p-108f, 0x1.ecbfa8p-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ba0088p-35f, 0.0f, 0.0f, 0x1.fdfcb6p-6f, 0x1.215a46p-112f,
     0.0f, 0x1.d3fcbcp-41f, 0x1.8b0c36p-14f, 0.0f, 0x1.0fbbap-37f, 0x1.27190ap-9f,
     0x1.c6f42p-105f, 0x1.d92754p-75f, 0x1.5d1728p-121f, 0.0f, 0x1.23d848p-76f,
     0x1.954ec8p-21f, 0.0f, 0.0f, 0x1.eb228ep-64f, 0.0f, 0.0f, 0.0f, 0x1.3c4ae2p-94f,
     0.0f, 0x1.afd788p-40f, 0.0f, 0x1.54621ep-6f, 0x1.527124p-65f, 0x1.3ee9f2p-64f,
     0x1.eb5ff8p-7f, 0.0f, 0x1.e0964ap-118f, 0x1.3e9d72p-122f, 0x1.ebbd08p-55f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.28cfc2p-4f, 0x1.b3c01ep-8f, 0x1.3f63c4p-103f, 0.0f,
     0x1.297e8ap-37f, 0x1.c9c24ap-20f, 0.0f, 0.0f, 0.0f, 0x1.451f9ep-105f, 0.0f,
     0x1.d7531cp-78f, 0x1.3579ecp-114f, 0.0f, 0.0f, 0.0f, 0x1.0cbc2p-100f, 0.0f,
     0x1.30645cp-67f, 0x1.e61574p-68f, 0x1.841624p-10f, 0x1.ad9f02p-70f,
     0x1.e4565ep-13f, 0.0f, 0x1.9d602p-29f, 0x1.086f88p-84f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.0678ccp-26f, 0x1.ae137ap-82f, 0x1.943508p-72f,
     0x1.5d1ce4p-70f, 0x1.ea8acp-99f, 0.0f, 0.0f, 0x1.ffe1f4p-51f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b41dd2p-83f, 0.0f, 0x1.bc33dcp-8f, 0.0f, 0x1.45879cp-91f,
     0x1.da0e2p-36f, 0.0f, 0x1.372ee4p-75f, 0.0f, 0x1.09dc2ap-89f, 0x1.334c9cp-52f,
     0.0f, 0.0f, 0.0f, 0x1.7e27f8p-4f, 0x1.9ece2cp-69f, 0.0f, 0.0f, 0x1.ebb43cp-17f,
     0.0f, 0.0f, 0x1.9184a8p-29f, 0.0f, 0.0f, 0x1.127c82p-71f, 0.0f, 0x1.9fa57ap-50f,
     0x1.cf399ap-111f, 0x1.0d5622p-78f, 0x1.f2a942p-100f, 0.0f, 0.0f, 0.0f,
     0x1.79a324p-94f, 0x1p0f, 0.0f, 0x1.1ecc7ap-89f, 0.0f, 0x1.73a03ep-125f,
     0x1.c90322p-60f, 0x1.67c2fep-72f, 0.0f, 0x1.538638p-43f, 0x1.b4436ep-123f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.9abb2ap-22f, 0x1.55a116p-106f, 0x1.fce64ap-22f,
     0x1.ed7e1ep-41f, 0x1.42488p-34f, 0x1.e77742p-4f, 0x1.d2b58ep-121f, 0.0f, 0.0f,
     0x1.79408cp-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3e66cap-65f, 0.0f, 0x1.1e302cp-70f,
     0.0f, 0x1.2c5388p-55f, 0.0f, 0x1.cc47ecp-47f, 0x1.225ccep-13f, 0x1.badff8p-54f,
     0x1.2583dp-92f, 0.0f, 0x1.8f2f98p-102f, 0.0f, 0x1.e6ca8ap-29f, 0x1.f6f05ep-38f,
     0x1.681088p-79f, 0x1.bdd354p-109f, 0x1.39f56ep-102f, 0x1.78f324p-82f, 0.0f,
     0x1.1c0de8p-63f, 0x1.0fef96p-10f, 0x1.cf63a8p-26f, 0x1.ad10fep-88f, 0.0f,
     0x1.aca574p-82f, 0x1.395172p-122f, 0x1.c538bap-17f, 0.0f, 0x1.bccc58p-103f,
     0x1.6aab98p-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ea7ebap-71f,
     0x1.10f6bap-124f, 0x1.bb7f1ap-69f, 0x1.525e1cp-25f, 0x1.ac60f2p-8f,
     0x1.4e5572p-96f, 0x1.41fe98p-51f, 0.0f, 0x1.6292b6p-15f, 0x1.b6b6cep-53f,
     0x1.da571ap-103f, 0.0f, 0x1.893bb2p-40f, 0x1.4f5b64p-38f, 0.0f, 0x1.0ee6f2p-119f,
     0.0f, 0x1.da1d6ap-53f, 0x1.aa5912p-14f, 0.0f, 0x1.4e971ap-92f, 0x1.fe7cdep-55f,
     0x1.941dc8p-28f, 0x1.34e0fep-3f, 0.0f, 0.0f, 0x1.bf0426p-52f, 0.0f,
     0x1.793ca4p-35f, 0x1.d789ccp-34f, 0.0f, 0x1.3986d4p-121f, 0x1.5682cep-118f, 0.0f,
     0.0f, 0x1.dc957cp-68f, 0x1.a09a54p-17f, 0x1.c4f02ap-117f, 0x1.09c75ap-20f,
     0x1.bf9e4p-92f, 0x1.6f3cdep-14f, 0x1.13a254p-104f, 0x1.9e330cp-9f, 0.0f, 0.0f,
     0x1.33a69ap-99f, 0.0f, 0.0f, 0x1.37cc3ep-23f, 0.0f, 0x1.c24c12p-65f,
     0x1.234b82p-105f, 0x1.be68d4p-123f, 0x1.40fbf8p-71f, 0x1.f18126p-32f,
     0x1.d59beep-74f, 0x1.4a340ap-16f, 0.0f, 0x1.93a2b8p-83f, 0.0f, 0x1.824272p-117f,
     0x1.5b028ep-70f, 0x1.5e0af2p-14f, 0x1.327c78p-65f, 0x1.81ea8ap-109f,
     0x1.124376p-65f, 0.0f, 0.0f, 0.0f, 0.0f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef_float32x8_t_2 global_bench_acc;
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
        Sleef_float32x8_t_2 local_acc;
        int32_t i;
        ml_float8_t tmp0;
        ml_float8_t tmp1;
        ml_float8_t tmp2;
        ml_float8_t tmp3;
        ml_float8_t tmp4;
        ml_float8_t tmp5;
        Sleef_float32x8_t_2 tmp6;
        int32_t tmp7;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1004));){
            ml_float8_t tmp0;
            Sleef_float32x8_t_2 tmp1;
            ml_float8_t tmp2;
            ml_float8_t tmp3;
            ml_float8_t tmp4;
            ml_float8_t tmp5;
            ml_float8_t tmp6;
            ml_float8_t tmp7;
            Sleef_float32x8_t_2 tmp8;
            int32_t tmp9;

            memcpy(&tmp0, ((ml_float8_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            tmp1 = Sleef_finz_sincosf8_u35kvx(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = local_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = local_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef_float32x8_t_2) {.x=tmp4, .y=tmp7});
            local_acc = tmp8;
            tmp9 = i + INT32_C(8);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = local_acc.x;
        tmp2 = tmp0 + tmp1;
        tmp3 = global_bench_acc.y;
        tmp4 = local_acc.y;
        tmp5 = tmp3 + tmp4;
        tmp6 = ((Sleef_float32x8_t_2) {.x=tmp2, .y=tmp5});
        global_bench_acc = tmp6;
        tmp7 = j + INT32_C(1);
        j = tmp7;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_finz_sincosf8_u35kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_sincosf8_u35kvx bench acc {.x=[%a, %a, %a, %a], .y=[%a, %a, %a, %a]}\n", global_bench_acc.x[0], global_bench_acc.x[1], global_bench_acc.x[2], global_bench_acc.x[3], global_bench_acc.y[0], global_bench_acc.y[1], global_bench_acc.y[2], global_bench_acc.y[3]);
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
