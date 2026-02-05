/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_acosf8_u10kvx.c --function Sleef_acosf8_u10kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 8 --function-input-vector-size 8 --bench \
 *     --no-embedded-bin --target kv3
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
     0.0f, 0x1.323a3ep-56f, 0.0f, 0.0f, 0.0f, 0x1.822f7cp-108f, 0x1.ac6f18p-60f,
     0x1.979cc4p-76f, 0.0f, 0x1.67b6p-88f, 0.0f, 0.0f, 0.0f, 0x1.6172a2p-80f, 0.0f,
     0.0f, 0x1.d9dde8p-39f, 0x1.3bdb94p-90f, 0.0f, 0.0f, 0x1.ccbbb6p-110f, 0.0f, 0.0f,
     0x1.f9241cp-44f, 0.0f, 0x1.dba1eep-88f, 0x1.149d94p-123f, 0x1.9bf348p-59f,
     0x1.903a26p-33f, 0x1.b35e28p-79f, 0.0f, 0x1.87e442p-31f, 0.0f, 0.0f,
     0x1.350b3p-121f, 0x1.0bfafep-5f, 0x1.500656p-57f, 0.0f, 0.0f, 0.0f,
     0x1.1104cap-83f, 0.0f, 0x1.604c36p-120f, 0x1.272562p-12f, 0x1.398dep-87f,
     0x1.c18c52p-36f, 0x1.330a98p-60f, 0x1.2c1d1ep-105f, 0x1.067d68p-115f,
     0x1.eef4d6p-99f, 0x1.d1988ep-2f, 0x1.5f2b8cp-37f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9a2b7cp-82f, 0.0f, 0.0f, 0x1.34c522p-50f, 0.0f, 0.0f, 0x1.f8bcecp-74f,
     0x1.465a2ep-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8d2a1ep-7f, 0.0f, 0.0f,
     0x1.13d62ap-1f, 0x1.33c5fap-35f, 0.0f, 0x1.f6b3c6p-81f, 0x1.5a505p-19f, 0.0f,
     0.0f, 0x1.dca4ep-83f, 0x1.d17fc6p-99f, 0x1.142834p-71f, 0x1.fd3682p-72f, 0.0f,
     0.0f, 0x1.aab7bp-51f, 0.0f, 0.0f, 0.0f, 0x1.15adaep-81f, 0x1.adf83ep-75f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.db394ep-85f, 0x1.ce4564p-115f, 0x1.ed6f68p-15f, 0.0f,
     0x1.fc94e2p-30f, 0x1.1daafep-109f, 0x1.2049dcp-25f, 0x1.16748ap-109f, 0.0f, 0.0f,
     0x1.5de17ap-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d1c7a6p-22f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.414894p-105f, 0x1.b83588p-73f, 0x1.1c88bap-77f, 0x1.eae69ap-10f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d39b06p-25f, 0x1.620524p-119f, 0.0f, 0.0f, 0.0f,
     0x1.91c3ep-73f, 0x1.d5606ep-121f, 0x1.b4d1a6p-78f, 0.0f, 0x1.080786p-88f,
     0x1.acb07p-21f, 0.0f, 0.0f, 0x1.71841p-33f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.20f7f2p-118f, 0.0f, 0x1.f3f41cp-8f, 0.0f, 0x1.db6556p-18f, 0x1.272d52p-91f,
     0x1.80266ep-42f, 0x1.2e0336p-92f, 0.0f, 0x1.1c1c5cp-18f, 0.0f, 0.0f, 0.0f,
     0x1.9e1eaap-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.087c18p-84f, 0.0f,
     0x1.42701p-15f, 0.0f, 0x1.d9f88p-53f, 0.0f, 0.0f, 0x1.7ecd0cp-78f, 0.0f, 0.0f,
     0x1.05c4cap-101f, 0.0f, 0.0f, 0x1.cbb12cp-116f, 0.0f, 0x1.2b0bdap-123f,
     0x1.9f9a3ap-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3a5804p-44f, 0.0f, 0.0f,
     0x1.cc4a54p-106f, 0x1.98d476p-10f, 0x1.2398ccp-62f, 0x1.30f6a2p-56f, 0.0f,
     0x1.3a7282p-87f, 0.0f, 0.0f, 0x1.892126p-85f, 0x1.673acap-25f, 0.0f, 0.0f,
     0x1.a82e06p-125f, 0.0f, 0.0f, 0x1.10b168p-48f, 0x1.4189ccp-120f, 0x1.84098cp-96f,
     0x1.dcbb8cp-42f, 0.0f, 0.0f, 0.0f, 0x1.8d307ep-109f, 0x1.95fe06p-106f,
     0x1.bf9712p-88f, 0x1.fc946cp-40f, 0x1.d5fea6p-27f, 0.0f, 0x1.e6cf86p-78f, 0.0f,
     0x1.f4d1a4p-25f, 0x1.8bfaf2p-3f, 0x1p0f, 0x1.f2a468p-48f, 0.0f, 0.0f,
     0x1.da7a9p-42f, 0.0f, 0x1.981a12p-61f, 0x1.b19fb6p-101f, 0.0f, 0.0f, 0.0f,
     0x1.63af36p-35f, 0x1.6727d4p-12f, 0x1.404bc2p-92f, 0x1.a13994p-4f, 0.0f, 0.0f,
     0.0f, 0x1.7c6fbep-91f, 0.0f, 0x1.1742cap-1f, 0x1.262e86p-49f, 0.0f,
     0x1.9a6ec6p-39f, 0.0f, 0.0f, 0.0f, 0x1.1ca82cp-85f, 0x1.f7e47p-78f, 0.0f, 0.0f,
     0x1.ef118cp-122f, 0.0f, 0.0f, 0x1.68b23ap-15f, 0x1.240e34p-83f, 0.0f,
     0x1.cee068p-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.3f7242p-12f, 0x1.0f01acp-34f, 0.0f, 0.0f, 0.0f,
     0x1.647666p-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.41599ap-24f, 0x1.ddf35cp-116f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.90cbccp-60f, 0x1.29e2ecp-43f, 0.0f, 0x1.3e3c1ep-61f,
     0.0f, 0x1.d911dp-93f, 0.0f, 0x1.299a78p-104f, 0x1.8e12bcp-123f, 0.0f, 0.0f, 0.0f,
     0x1.de66a2p-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2220e6p-96f,
     0.0f, 0.0f, 0x1.ae46cp-55f, 0.0f, 0.0f, 0x1.afddbep-40f, 0x1.12c51ap-104f,
     0x1.124252p-49f, 0x1.3f2fap-90f, 0x1.cffb72p-42f, 0x1.b49896p-43f, 0.0f,
     0x1.c457e2p-44f, 0x1.9c493ap-11f, 0x1.d2bdp-70f, 0.0f, 0x1.3010a8p-72f, 0.0f,
     0x1.05c7d4p-96f, 0.0f, 0.0f, 0x1.b1b982p-98f, 0x1.abd6f2p-16f, 0.0f,
     0x1.8a6576p-100f, 0.0f, 0.0f, 0x1.ca1176p-112f, 0x1.7b9826p-121f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.21f5b2p-68f, 0.0f, 0.0f, 0.0f, 0x1.64395p-54f,
     0x1.24b3acp-23f, 0x1.87be7ap-85f, 0x1.8a53d8p-99f, 0x1.5c5d8cp-123f,
     0x1.88204cp-23f, 0x1.a46bb4p-121f, 0x1.f0e838p-77f, 0.0f, 0x1.5e434ap-82f,
     0x1.038a94p-17f, 0x1.caeda6p-82f, 0.0f, 0x1.6473ep-10f, 0x1.f78cbap-65f, 0.0f,
     0x1.b72a62p-53f, 0.0f, 0.0f, 0x1.af5dc2p-17f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.55678ap-17f, 0.0f, 0.0f, 0x1.311b72p-3f, 0x1.5fd13ep-95f, 0x1.b7e248p-9f,
     0x1.443beap-122f, 0.0f, 0.0f, 0x1.2f79dep-21f, 0x1.31521cp-13f, 0.0f,
     0x1.944b02p-7f, 0.0f, 0.0f, 0x1.aa2f02p-8f, 0x1.02713ep-66f, 0.0f, 0.0f, 0.0f,
     0x1.7c5158p-126f, 0x1.956fp-2f, 0.0f, 0x1.39e742p-86f, 0.0f, 0x1.e2bc38p-60f,
     0x1.c0fa36p-59f, 0.0f, 0.0f, 0x1.981974p-105f, 0x1.02b28p-109f, 0.0f, 0.0f,
     0x1.766a8cp-17f, 0x1.56ed12p-104f, 0.0f, 0x1.edbd6cp-18f, 0.0f, 0.0f, 0.0f,
     0x1.b0f0c2p-113f, 0x1.af78aep-29f, 0x1.50b21ep-111f, 0.0f, 0x1.e00798p-117f,
     0x1.d9dcd8p-102f, 0.0f, 0.0f, 0x1.6afc8cp-110f, 0.0f, 0x1.1cc384p-64f, 0.0f,
     0.0f, 0x1.59b6e8p-116f, 0x1.33536p-100f, 0.0f, 0.0f, 0x1.c67e2cp-83f,
     0x1.6133a6p-89f, 0.0f, 0x1.d05d3cp-5f, 0x1.d3b3d6p-116f, 0x1.5714ap-4f,
     0x1.4333f6p-22f, 0x1.01cb2cp-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.50d292p-17f, 0.0f,
     0x1.8b8ab8p-107f, 0x1.d13b0ap-6f, 0.0f, 0x1.7fb0cp-115f, 0x1.a21dd8p-21f, 0.0f,
     0x1.a19ccap-13f, 0x1.60d738p-25f, 0x1.217becp-68f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1p0f, 0.0f, 0.0f, 0x1.2f8b76p-97f, 0x1.9f911ep-62f, 0x1.8d8178p-6f,
     0x1.d5b63ep-19f, 0x1.872efap-2f, 0x1.ff2da8p-1f, 0.0f, 0x1.5433cap-79f,
     0x1.16ba16p-15f, 0.0f, 0x1.e01886p-54f, 0.0f, 0.0f, 0x1.3c2fe4p-101f, 0.0f,
     0x1.59c1cep-2f, 0.0f, 0.0f, 0.0f, 0x1.4f8b78p-24f, 0x1.5b2e5ep-74f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.449d88p-104f, 0x1.78db6cp-98f, 0.0f, 0.0f, 0x1.b6cd1ap-42f,
     0.0f, 0x1.b324dp-48f, 0.0f, 0x1.b956eep-119f, 0.0f, 0x1.fcad38p-7f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f0582p-99f, 0x1.c63528p-52f, 0x1.f341eap-64f, 0.0f,
     0x1.29bb4ep-32f, 0.0f, 0x1.edf1bcp-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.87cf36p-64f,
     0x1.3548cap-82f, 0x1.aaad3ep-22f, 0x1.d43ep-32f, 0.0f, 0x1.c08c7ep-115f, 0.0f,
     0x1.e43646p-106f, 0x1.a1e38p-87f, 0x1.ef7cf2p-71f, 0x1.cf65d6p-47f,
     0x1.d7aa6p-82f, 0.0f, 0.0f, 0.0f, 0x1.40cadap-101f, 0.0f, 0.0f, 0x1.7812b6p-69f,
     0x1.88a4a8p-59f, 0x1.502774p-60f, 0.0f, 0.0f, 0x1.22dacap-13f, 0x1.5036a6p-111f,
     0x1.c3141cp-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b3d72p-107f,
     0x1.4b5f1cp-84f, 0x1.bf39cep-11f, 0.0f, 0x1.e2ee6ep-30f, 0x1.ed9ba8p-63f,
     0x1.38cb18p-111f, 0.0f, 0x1.ee671p-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7e5b3p-76f, 0x1.2fa6d4p-79f, 0.0f, 0x1.12bc0ep-30f, 0.0f, 0.0f, 0.0f,
     0x1.b1f3fp-88f, 0.0f, 0x1.5f6f94p-23f, 0.0f, 0x1.1b919p-67f, 0x1.9dbe3p-89f,
     0.0f, 0x1.6e3e26p-30f, 0x1.8f55dcp-57f, 0.0f, 0x1.f895a4p-66f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c2905ap-77f, 0x1.fb8d8ep-16f, 0x1.376db6p-1f, 0.0f,
     0x1.c29678p-110f, 0x1.863958p-49f, 0x1.fd2082p-2f, 0.0f, 0.0f, 0.0f, 0x1p0f,
     0x1.3f553ep-109f, 0x1.1735b4p-31f, 0.0f, 0x1.c2c448p-97f, 0.0f, 0x1.feafc2p-41f,
     0.0f, 0x1.3f97e2p-74f, 0.0f, 0.0f, 0x1.959caap-36f, 0x1.2fcedp-93f,
     0x1.167a38p-39f, 0.0f, 0.0f, 0.0f, 0x1.a2052p-103f, 0.0f, 0x1.5fe0d4p-45f, 0.0f,
     0.0f, 0x1.9a7a8cp-119f, 0x1.ef951p-50f, 0.0f, 0.0f, 0x1.aa0b16p-74f, 0.0f, 0.0f,
     0.0f, 0x1.63a0fp-20f, 0x1.86099cp-20f, 0.0f, 0.0f, 0x1.febc5cp-56f, 0.0f,
     0x1.37f04cp-69f, 0.0f, 0x1.123b2cp-14f, 0x1.cfa2ecp-120f, 0x1.a4bb02p-117f, 0.0f,
     0.0f, 0x1.f9eacp-65f, 0x1.e2f024p-59f, 0x1.e1306ap-114f, 0.0f, 0x1.33a84ap-26f,
     0x1.37e8eap-99f, 0.0f, 0x1.6b01dep-17f, 0x1.6e1f48p-42f, 0.0f, 0.0f,
     0x1.7717cap-43f, 0.0f, 0x1.bf681ep-98f, 0x1.e7cb42p-63f, 0.0f, 0x1.3877ecp-11f,
     0x1.5196bep-109f, 0x1.db99c6p-38f, 0x1.31714ap-39f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b7ac8ap-67f, 0x1.588ceap-114f, 0x1.8b48e2p-106f, 0.0f, 0.0f, 0x1.187ecep-97f,
     0.0f, 0x1.1c2004p-89f, 0.0f, 0x1.63301cp-83f, 0.0f, 0.0f, 0x1.92ad94p-18f,
     0x1.648666p-96f, 0.0f, 0.0f, 0.0f, 0x1.a2949p-115f, 0x1.d5f7ccp-124f,
     0x1.31de78p-80f, 0.0f, 0.0f, 0x1.7d2406p-102f, 0x1.644d74p-69f, 0.0f, 0.0f, 0.0f,
     0x1.6db522p-61f, 0x1.a86e58p-10f, 0x1.afb48cp-98f, 0.0f, 0x1.fcb79ep-11f,
     0x1.46537ap-12f, 0.0f, 0x1.d44bbcp-33f, 0.0f, 0x1.6ee328p-85f, 0x1.e12e4cp-42f,
     0x1.613a78p-41f, 0x1p0f, 0.0f, 0x1.af7bc6p-87f, 0.0f, 0x1.f7d9b6p-54f,
     0x1.778f72p-10f, 0x1.75414ep-47f, 0.0f, 0x1.af18e8p-126f, 0.0f, 0.0f,
     0x1.b7b34cp-1f, 0x1.192692p-102f, 0x1.64a48ap-55f, 0.0f, 0x1.d19042p-42f, 0.0f,
     0x1.912842p-115f, 0.0f, 0x1.42fdcep-119f, 0x1.f89468p-112f, 0x1.a4566ap-22f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.11bc8cp-46f, 0x1.9a0e1ap-39f, 0.0f, 0x1.9a39dp-88f,
     0x1.7428b8p-106f, 0x1.e460b8p-84f, 0.0f, 0x1.66e498p-11f, 0x1.48900cp-26f,
     0x1.9df58ep-118f, 0x1.2639ccp-80f, 0x1.429d92p-30f, 0.0f, 0x1.f26ff6p-52f,
     0x1.c2dab6p-49f, 0x1.832c62p-98f, 0x1.9bdf88p-15f, 0x1.6f4fd4p-34f, 0.0f,
     0x1.b82b26p-73f, 0x1.9398dp-102f, 0x1.240356p-14f, 0.0f, 0.0f, 0x1.d8d3f6p-38f,
     0.0f, 0x1.205216p-19f, 0.0f, 0x1.9240eap-48f, 0x1.5aab82p-100f, 0.0f, 0.0f, 0.0f,
     0x1.78ba26p-98f, 0x1.d057c2p-101f, 0x1.0de49ep-48f, 0x1.1aa97ep-21f, 0.0f, 0.0f,
     0.0f, 0x1.9ec29ep-65f, 0x1.8f8574p-50f, 0.0f, 0x1.70d5a8p-45f, 0.0f,
     0x1.253a02p-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8ea8e2p-50f, 0x1.68629ap-44f,
     0x1.dad406p-124f, 0x1.f6ee14p-81f, 0.0f, 0x1.bee016p-63f, 0x1.a0215ap-61f,
     0x1.6501bp-87f, 0.0f, 0.0f, 0.0f, 0x1.022a7ep-97f, 0.0f, 0.0f, 0.0f,
     0x1.58c52ep-90f, 0x1.7fb528p-109f, 0.0f, 0.0f, 0x1.5bd7e2p-106f, 0x1.207248p-79f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.758e3cp-16f, 0x1.728fdp-56f, 0x1.b05ba4p-97f, 0.0f,
     0x1.836d58p-26f, 0.0f, 0x1.efc3cp-29f, 0.0f, 0x1.2721dcp-48f, 0x1.3f9612p-100f,
     0x1.6f0658p-71f, 0.0f, 0x1.b405b4p-16f, 0x1.e4141ep-113f, 0.0f, 0x1.ad24ap-123f,
     0.0f, 0x1p0f, 0x1.58d8ecp-3f, 0.0f, 0.0f, 0x1.3dea28p-123f, 0x1.d989d4p-54f,
     0x1.276174p-72f, 0x1.877f7ap-25f, 0.0f, 0x1.fb7414p-42f, 0x1.2d5ecep-12f,
     0x1.3d5f64p-50f, 0x1.221238p-39f, 0x1.7a06dcp-28f, 0x1.8bd844p-44f, 0.0f, 0.0f,
     0x1.86f64ep-36f, 0.0f, 0x1.98f256p-71f, 0.0f, 0.0f, 0x1.f2d36ep-51f, 0.0f,
     0x1.813168p-3f, 0x1.aefd7ep-25f, 0.0f, 0.0f, 0x1.ab02c8p-112f, 0.0f, 0.0f, 0.0f,
     0x1.0fb57ap-28f, 0.0f, 0x1.8e300cp-112f, 0.0f, 0.0f, 0x1.dfa4d8p-74f,
     0x1.911f28p-113f, 0x1.9882bcp-116f, 0.0f, 0.0f, 0.0f, 0x1.d6e96ep-57f,
     0x1.c05caep-100f, 0.0f, 0.0f, 0x1.c4199cp-50f, 0x1.c47f18p-115f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.86c162p-78f, 0x1.9692fap-5f, 0.0f, 0.0f, 0x1.ea2d0ep-4f,
     0x1.a0b582p-71f, 0x1.c18db2p-126f, 0x1.e42f02p-65f, 0x1.4b5478p-33f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.238fc6p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f64272p-19f, 0.0f, 0x1.be2e58p-63f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.da078ap-77f, 0x1.27b4aep-58f, 0x1.22b05cp-106f, 0x1.12a46ep-87f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.02f8aap-62f, 0.0f, 0.0f, 0x1.77c1cep-58f,
     0x1.d853cap-97f, 0.0f, 0x1.561a8ap-98f, 0.0f, 0x1.0602f8p-44f, 0x1.37c9bep-11f,
     0x1.58b63ap-79f, 0x1.c1c09p-24f, 0x1.9d93d4p-46f, 0x1.f7a0ap-108f,
     0x1.1c475ap-27f, 0.0f, 0.0f, 0.0f, 0x1.2fbd5cp-88f, 0.0f, 0x1.c01994p-87f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e5ea52p-95f, 0.0f, 0x1.a7f3b2p-77f, 0x1.5bafccp-71f, 0.0f,
     0x1.a68066p-9f, 0.0f, 0x1.bf8f1cp-109f, 0x1.9f8864p-66f, 0.0f, 0x1.be55c2p-44f,
     0.0f, 0.0f, 0x1.ed70e4p-125f, 0.0f, 0x1.c766ep-25f, 0.0f, 0.0f, 0x1.7fac78p-25f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.8c86aap-59f, 0.0f, 0x1.d1797ep-93f, 0x1.a704e8p-96f,
     0x1.41cf2ap-56f, 0x1.b58f34p-104f, 0.0f, 0.0f, 0.0f, 0x1.81958p-99f,
     0x1.c1af08p-4f, 0x1.7b19dap-30f, 0.0f, 0x1.5e8f0ap-20f, 0.0f, 0.0f, 0.0f,
     0x1.c83e2p-106f, 0.0f, 0x1.ade062p-87f, 0x1.517074p-44f, 0.0f, 0x1.397c26p-4f,
     0.0f, 0x1.73dee4p-16f, 0x1.bc0fb2p-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3496bep-28f,
     0x1.104982p-99f, 0x1.e6f51ap-115f, 0.0f, 0.0f, 0x1.0ef984p-106f,
     0x1.1cefd6p-110f, 0x1.bd7de8p-74f, 0.0f, 0x1.c763p-79f, 0.0f, 0.0f,
     0x1.6b695cp-117f, 0.0f, 0x1.108c1ap-109f
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
            tmp1 = Sleef_acosf8_u10kvx(tmp0);
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
    printf("Sleef_acosf8_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_acosf8_u10kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
