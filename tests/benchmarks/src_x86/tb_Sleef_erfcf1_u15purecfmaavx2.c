/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_erfcf1_u15purecfma.c --function \
 *     Sleef_erfcf1_u15purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --bench --no-embedded-bin --target x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <xmmintrin.h>
#include <stdio.h>
#include <inttypes.h>


volatile float external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.94dda6p-12f, 0x1.48df0ep-68f, 0x1.80c1bp-124f, 0.0f, 0x1.f0e3bp-69f,
     0x1.0b741p-59f, 0.0f, 0x1.d2a7d2p-6f, 0x1.392024p-99f, 0x1.6524b6p-9f,
     0x1.97d40ep-115f, 0x1.57efep-53f, 0.0f, 0x1.9d72e8p-81f, 0.0f, 0.0f,
     0x1.cf294cp-31f, 0.0f, 0x1.d36732p-6f, 0x1.5008bap-126f, 0x1.61488p-114f,
     0x1.30e244p-36f, 0x1.2a9e78p-87f, 0.0f, 0x1.3191bap-3f, 0.0f, 0.0f,
     0x1.8121c6p-30f, 0.0f, 0.0f, 0.0f, 0x1.6a451p-77f, 0.0f, 0.0f, 0x1.51f73cp-14f,
     0x1.12386cp-56f, 0x1.9a4d88p-84f, 0.0f, 0x1.efae08p-2f, 0.0f, 0x1.f76216p-102f,
     0.0f, 0x1.169f2ap-41f, 0.0f, 0x1.d349fep-103f, 0x1.73eeacp-36f, 0x1.1512cap-25f,
     0x1.11701p-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c3b95ap-22f, 0.0f, 0.0f,
     0x1.e489dap-101f, 0x1.1adcaep-53f, 0x1.c8792p-14f, 0.0f, 0.0f, 0x1.73bd6ap-14f,
     0.0f, 0.0f, 0x1.385592p-81f, 0x1.cbac3ep-23f, 0x1.b90dfp-57f, 0x1.8a2182p-94f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cd70ap-85f, 0.0f, 0x1.bac67ep-37f,
     0x1.0f7aa8p-35f, 0.0f, 0.0f, 0.0f, 0x1.927284p-122f, 0x1.f60508p-70f,
     0x1.8ed1eap-10f, 0x1.247766p-52f, 0x1.8080aap-33f, 0.0f, 0x1.c43a08p-91f, 0.0f,
     0.0f, 0.0f, 0x1.c8dd7ep-38f, 0x1.a4e0dp-60f, 0.0f, 0x1.c2a24ep-72f,
     0x1.d3ffap-45f, 0x1.11170ep-6f, 0x1.d8f218p-105f, 0x1.b8f76p-98f,
     0x1.33a5b6p-110f, 0.0f, 0x1.593e18p-118f, 0.0f, 0x1.c84486p-51f, 0x1.c72096p-46f,
     0.0f, 0.0f, 0.0f, 0x1.1dac88p-114f, 0x1.4940dcp-20f, 0x1.b4c75ap-1f,
     0x1.638fd6p-82f, 0x1.97149ap-37f, 0.0f, 0x1.76b1e8p-76f, 0x1.f6c04ep-96f, 0.0f,
     0x1.baec56p-88f, 0.0f, 0.0f, 0x1.c4841cp-11f, 0.0f, 0.0f, 0x1.a7da6p-57f, 0.0f,
     0x1.b1160ap-42f, 0.0f, 0x1.d20102p-45f, 0.0f, 0x1.ab9a4cp-93f, 0x1.fd1248p-106f,
     0x1.9d2f76p-86f, 0x1.5ac022p-52f, 0x1.af84b8p-20f, 0.0f, 0x1.1d12e2p-32f,
     0x1.b11068p-41f, 0x1.721a2p-123f, 0.0f, 0.0f, 0x1.bca12ap-43f, 0x1.c77f5p-37f,
     0.0f, 0x1.db6f4cp-94f, 0x1.c5f07cp-58f, 0.0f, 0.0f, 0.0f, 0x1.ae544ap-16f, 0.0f,
     0x1.62db8ep-86f, 0.0f, 0.0f, 0x1.b54d18p-83f, 0.0f, 0.0f, 0x1.69d77p-27f, 0.0f,
     0.0f, 0x1.a4a1a8p-73f, 0x1.582142p-115f, 0x1.16357ap-5f, 0.0f, 0x1.1fed54p-125f,
     0.0f, 0x1.e01d7p-15f, 0x1.84aabep-22f, 0.0f, 0x1.64737p-110f, 0x1.17bd66p-100f,
     0x1.ff37bep-72f, 0.0f, 0x1.11c848p-119f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e1272ap-121f, 0x1.b449ap-78f, 0.0f, 0x1.02eeeap-26f, 0.0f, 0.0f,
     0x1.3f838ep-31f, 0.0f, 0x1.615d4ap-26f, 0.0f, 0x1.fc027cp-93f, 0x1.894f4ap-47f,
     0.0f, 0.0f, 0x1.81c566p-24f, 0.0f, 0.0f, 0x1.42cbf4p-91f, 0x1.5c6c9ep-13f, 0.0f,
     0.0f, 0x1.d09f3p-7f, 0x1.e5e9bap-12f, 0x1.4db862p-62f, 0x1.c6f7f2p-83f, 0.0f,
     0.0f, 0.0f, 0x1.32226p-72f, 0.0f, 0.0f, 0x1.7c63bp-38f, 0x1.d9fc32p-22f, 0.0f,
     0.0f, 0x1.52454ap-85f, 0x1.b16c66p-16f, 0x1.b86a9ap-30f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.488c26p-12f, 0.0f, 0.0f, 0x1.69b036p-42f,
     0x1.b26868p-45f, 0.0f, 0x1.6f9838p-112f, 0x1.c415dap-86f, 0x1.6bf48cp-86f,
     0x1.59982cp-18f, 0x1.b7b0ccp-78f, 0.0f, 0x1.05e79ap-30f, 0.0f, 0.0f, 0.0f,
     0x1.ce85d2p-81f, 0x1.422508p-122f, 0.0f, 0.0f, 0x1.d4a2a2p-27f, 0x1.d7eeb8p-11f,
     0.0f, 0x1.68fd0ap-69f, 0x1.f2357cp-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1bb4fap-72f,
     0x1.845adp-120f, 0x1.e98018p-75f, 0.0f, 0.0f, 0.0f, 0x1.8ddf3ap-116f, 0.0f,
     0x1.cc0354p-71f, 0x1p0f, 0x1.a8731p-19f, 0.0f, 0.0f, 0x1.ebbd6ep-106f,
     0x1.15d0a2p-115f, 0x1.a29eecp-48f, 0.0f, 0.0f, 0x1.fe455cp-36f, 0.0f, 0.0f, 0.0f,
     0x1.b1d3f2p-6f, 0.0f, 0.0f, 0x1.ec1304p-91f, 0x1.23d318p-31f, 0x1.1f047ep-61f,
     0x1.8aed0ep-42f, 0.0f, 0x1.28f7e6p-124f, 0.0f, 0.0f, 0.0f, 0x1.54314cp-124f,
     0x1.29a3cp-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.908fecp-76f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.878808p-57f, 0x1.5d764cp-83f, 0x1.ee8672p-2f, 0x1.3f4a6p-18f, 0.0f,
     0.0f, 0x1p0f, 0x1.66b52cp-23f, 0.0f, 0x1.6fa842p-27f, 0x1.4c4cf6p-15f,
     0x1.e9b186p-14f, 0.0f, 0.0f, 0.0f, 0x1.e54b0cp-87f, 0x1.3a03bap-82f,
     0x1.e97fbp-56f, 0.0f, 0.0f, 0x1.09a99cp-69f, 0x1.487dcap-70f, 0.0f, 0.0f,
     0x1.51a7a6p-86f, 0.0f, 0.0f, 0.0f, 0x1.849976p-14f, 0x1.026bap-78f,
     0x1.493d38p-114f, 0x1.6f3c5p-107f, 0x1.c3bdccp-112f, 0x1.9ed13p-79f,
     0x1.19cf58p-47f, 0.0f, 0x1.a84892p-62f, 0.0f, 0x1.34b84ep-60f, 0.0f,
     0x1.4cd572p-67f, 0x1.969a9ep-43f, 0.0f, 0.0f, 0x1.f9876p-111f, 0x1.900978p-73f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.722e92p-82f, 0.0f,
     0x1.deb252p-113f, 0.0f, 0x1.3c1014p-55f, 0.0f, 0x1.3b4ec2p-36f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.6be502p-100f, 0x1.1ac96ep-89f, 0.0f, 0.0f, 0x1.0036e8p-59f,
     0x1.579a34p-33f, 0x1.902aa4p-11f, 0x1.75b216p-74f, 0.0f, 0x1.796886p-118f, 0.0f,
     0x1.fcacd2p-118f, 0.0f, 0.0f, 0x1.0c2dbap-1f, 0x1.002b2cp-50f, 0x1.ecb516p-10f,
     0x1.1b263ap-85f, 0x1.ec95eap-90f, 0x1.cb1136p-111f, 0.0f, 0.0f, 0x1.d562a6p-28f,
     0x1.bc3a18p-54f, 0.0f, 0.0f, 0x1.d5bdf6p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fa97c2p-113f, 0x1.d0c1fp-18f, 0x1.ff42ccp-68f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e2540ap-112f, 0.0f, 0x1.9110d8p-18f, 0x1.4749b2p-20f, 0x1.6567aap-72f,
     0x1.030ad4p-43f, 0.0f, 0x1.305292p-104f, 0.0f, 0x1.b7e11ep-84f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.bfcd8p-13f, 0.0f, 0x1.36ad3cp-94f, 0x1.2e2df4p-66f,
     0x1.c66734p-33f, 0.0f, 0.0f, 0x1.196376p-40f, 0x1.68945p-102f, 0x1.5965p-63f,
     0.0f, 0x1.1fb9d8p-88f, 0x1.7e86e8p-44f, 0.0f, 0.0f, 0x1.059e52p-20f,
     0x1.bedad8p-44f, 0.0f, 0.0f, 0x1.e2611cp-17f, 0x1.d451b6p-96f, 0.0f,
     0x1.f45d8ep-61f, 0x1.61123cp-77f, 0x1p0f, 0.0f, 0.0f, 0x1.11cb3p-51f,
     0x1.f1602cp-93f, 0.0f, 0x1.f5224ap-84f, 0.0f, 0x1.6603f4p-22f, 0x1.adba42p-111f,
     0x1.85f572p-76f, 0x1.58bc98p-6f, 0.0f, 0.0f, 0x1.ab29dcp-56f, 0x1.52d52cp-101f,
     0x1.22606cp-107f, 0.0f, 0.0f, 0.0f, 0x1.a72604p-46f, 0.0f, 0x1.bba9d8p-44f,
     0x1.1b1b06p-21f, 0.0f, 0.0f, 0.0f, 0x1.97f816p-60f, 0.0f, 0.0f, 0x1.0c698ep-24f,
     0.0f, 0x1.14269cp-94f, 0x1.ccd34ep-4f, 0x1.596046p-92f, 0.0f, 0x1.4ebdc4p-25f,
     0x1.f1b2f4p-45f, 0x1.9e73a8p-70f, 0x1.65abb6p-95f, 0.0f, 0x1.2b818ep-53f,
     0x1.fad8e4p-35f, 0.0f, 0x1.b912bp-91f, 0.0f, 0x1.8487bcp-112f, 0x1.644b3p-87f,
     0x1.c3dedp-16f, 0x1.c66e1cp-25f, 0x1.0921a8p-19f, 0.0f, 0x1.45318ep-11f,
     0x1.2d40d6p-44f, 0x1.d8b176p-72f, 0.0f, 0.0f, 0x1.303628p-56f, 0x1.64eeb2p-27f,
     0.0f, 0.0f, 0x1.270cdep-59f, 0x1.4a9a06p-86f, 0.0f, 0x1.4470dcp-24f,
     0x1.39cbf6p-117f, 0.0f, 0x1.3b8d4cp-68f, 0.0f, 0.0f, 0x1.c73c6ep-26f,
     0x1.0a4302p-103f, 0.0f, 0x1.e58a26p-74f, 0.0f, 0.0f, 0x1.a57934p-77f, 0.0f,
     0x1.264004p-106f, 0x1.7a7106p-11f, 0x1.bc889cp-77f, 0.0f, 0x1.e67722p-57f,
     0x1.0c3cb8p-105f, 0.0f, 0x1.930626p-71f, 0x1.bb0e22p-47f, 0x1.4cb866p-45f, 0.0f,
     0x1.4bddd4p-76f, 0x1.bc23p-96f, 0x1.01f6ap-111f, 0x1.eafddap-104f, 0.0f, 0.0f,
     0x1.9e71e2p-101f, 0x1.2a3404p-17f, 0x1.f2b966p-108f, 0.0f, 0.0f, 0x1.66a338p-30f,
     0.0f, 0x1.33b24cp-1f, 0x1.35cp-76f, 0x1.feccd4p-69f, 0.0f, 0x1.9af8dap-92f,
     0x1.6e9014p-12f, 0.0f, 0x1.7830a2p-48f, 0.0f, 0x1.ffcf4ap-15f, 0.0f,
     0x1.5d306ep-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f89bc4p-36f, 0x1.35329cp-96f,
     0x1.c5bca8p-95f, 0x1.0cc29ep-8f, 0x1.cf8e3ep-107f, 0.0f, 0.0f, 0x1.b73d1ap-91f,
     0x1.0e38fp-113f, 0.0f, 0.0f, 0.0f, 0x1.09bbc2p-22f, 0.0f, 0x1.e11736p-30f, 0.0f,
     0.0f, 0.0f, 0x1.fe82aap-26f, 0x1.654c88p-29f, 0x1.9ce6acp-83f, 0x1.f965cap-125f,
     0.0f, 0x1.1e2fa2p-62f, 0x1.984578p-105f, 0.0f, 0x1.f6c8a8p-94f, 0.0f, 0.0f,
     0x1.4190ecp-98f, 0x1.01ce8ap-10f, 0.0f, 0x1.440d4cp-67f, 0.0f, 0x1.9ef0dcp-54f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ba188p-14f, 0.0f,
     0x1.a50e6ap-11f, 0x1.f2eb46p-55f, 0x1.af5052p-82f, 0.0f, 0x1.d1f888p-20f, 0.0f,
     0.0f, 0x1.42bcbap-94f, 0x1.d9f714p-95f, 0.0f, 0.0f, 0x1.23ebe8p-50f,
     0x1.bd3b3ep-122f, 0.0f, 0x1.c22522p-35f, 0x1.6edc88p-117f, 0.0f, 0x1.dcbf08p-56f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.89c11ap-18f, 0x1.5f71dap-122f, 0x1.fc21b4p-75f, 0.0f,
     0x1.dadc32p-59f, 0.0f, 0x1.723e06p-105f, 0x1.eb0c7ep-100f, 0x1.f4e64cp-126f,
     0.0f, 0.0f, 0x1.4ae7fap-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2fa15ap-39f, 0.0f,
     0x1.eda632p-103f, 0x1.8f74c6p-121f, 0.0f, 0x1.5e3782p-16f, 0.0f, 0.0f, 0.0f,
     0x1.dc076ep-66f, 0.0f, 0.0f, 0x1.2d6d3cp-62f, 0.0f, 0.0f, 0x1.7dd1c4p-59f,
     0x1.b08c7cp-99f, 0x1.a9c4bep-86f, 0x1.d7a088p-31f, 0x1.54e28ap-1f,
     0x1.54cc14p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dc856ep-81f, 0x1.534876p-98f,
     0x1.48d1e8p-40f, 0.0f, 0.0f, 0x1.f1f63ap-74f, 0.0f, 0x1.daff44p-82f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.44f6fap-50f, 0.0f, 0x1.25baeep-108f, 0x1.2cdfecp-110f, 0.0f,
     0x1.5b9b16p-15f, 0x1.aeacb6p-85f, 0x1.36a36ap-69f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.160164p-42f, 0x1.c1fbc4p-19f, 0x1.901ac4p-83f, 0x1.d86aep-46f, 0.0f,
     0x1.0b86fep-60f, 0.0f, 0x1.ee2c1cp-25f, 0x1.dfbf6ap-121f, 0.0f, 0.0f,
     0x1.9e7946p-67f, 0.0f, 0.0f, 0.0f, 0x1.6fb8b8p-116f, 0x1.f84358p-32f, 0.0f,
     0x1.ead6d2p-45f, 0x1.b4d196p-52f, 0.0f, 0.0f, 0.0f, 0x1.4e48ep-56f, 0.0f,
     0x1.9b2a8p-29f, 0.0f, 0x1.5b5e52p-51f, 0.0f, 0x1.7571aep-47f, 0.0f,
     0x1.312e62p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a42db2p-66f, 0x1.922b18p-29f, 0.0f,
     0.0f, 0x1.e07538p-115f, 0x1.a01b96p-59f, 0.0f, 0x1.5755eap-6f, 0.0f, 0.0f,
     0x1.180412p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f265c4p-17f, 0.0f, 0.0f,
     0x1.fb8a3ap-96f, 0x1.3fa8ccp-40f, 0.0f, 0x1.faca9cp-67f, 0x1.646818p-126f, 0.0f,
     0.0f, 0x1.899566p-97f, 0.0f, 0.0f, 0x1.15408cp-90f, 0.0f, 0x1.603a54p-121f, 0.0f,
     0.0f, 0x1.4c4422p-56f, 0x1.3c175p-23f, 0x1.63b0f8p-115f, 0x1.870adcp-67f,
     0x1.1cb76cp-69f, 0x1.8a93a4p-117f, 0x1.a989eap-95f, 0.0f, 0x1.cb981cp-71f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c65a88p-57f, 0.0f, 0x1.a0c9fap-92f, 0.0f, 0.0f,
     0x1.8379c4p-44f, 0.0f, 0x1.111482p-89f, 0x1.5331f2p-22f, 0.0f, 0x1.33b9d2p-13f,
     0.0f, 0x1.417772p-52f, 0.0f, 0.0f, 0x1.18def8p-40f, 0x1.6afab4p-66f, 0.0f, 0.0f,
     0x1.dea766p-21f, 0x1.08cadp-42f, 0x1.1a0242p-124f, 0.0f, 0x1.803c2ap-38f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.885ef6p-2f, 0x1.8f6eap-61f, 0.0f,
     0x1.2bfdbep-57f, 0x1.653a6ap-100f, 0x1.980e06p-106f, 0x1.d98bap-104f,
     0x1.3534c4p-23f, 0.0f, 0.0f, 0x1.3f2968p-106f, 0x1.c463eap-45f, 0.0f, 0.0f,
     0x1.9d8e1cp-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6a1af6p-23f,
     0x1.ee9a5p-99f, 0x1.a5bb54p-48f, 0.0f, 0x1.5fd4e4p-39f, 0x1.4d2cc8p-18f,
     0x1.ea8516p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4b304cp-24f, 0.0f, 0.0f, 0.0f,
     0x1.a2ab4ep-98f, 0.0f, 0x1.3a9f36p-23f, 0.0f, 0x1.533c58p-75f, 0.0f,
     0x1.f13e2p-5f, 0x1.26d098p-47f, 0.0f, 0x1.70b2aep-13f, 0x1.5eba4cp-32f, 0.0f,
     0x1.f55038p-11f, 0x1.d839ep-107f, 0.0f, 0x1.937f8ep-121f, 0.0f, 0x1.80d188p-37f,
     0.0f, 0x1.f34186p-56f, 0.0f, 0x1.57f7f4p-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e019cap-112f, 0x1.c8578p-26f, 0.0f, 0x1.80224p-91f, 0x1.4bed2p-123f,
     0x1.187828p-104f, 0x1.081444p-80f, 0x1.8224d4p-64f, 0.0f, 0x1.4b99cp-83f, 0.0f,
     0.0f, 0x1.d5c448p-29f, 0.0f, 0.0f, 0.0f, 0x1.7842ep-115f, 0x1.2b7d14p-73f,
     0x1.a8ea8ap-37f, 0x1.3626d8p-83f, 0.0f, 0x1.c4f1acp-38f, 0.0f, 0x1.ba5eeep-13f,
     0.0f, 0x1.27c7e4p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.96c7bep-121f,
     0x1.62d99ap-120f, 0x1.30214p-90f, 0x1.a81b66p-126f, 0x1.2c77cep-91f,
     0x1.c9c618p-103f, 0.0f, 0.0f, 0x1.b7cf88p-65f, 0.0f, 0x1.afc52ep-69f, 0.0f,
     0x1.cd45f2p-30f, 0x1.14be9ep-8f, 0x1.153646p-45f, 0.0f, 0x1.122122p-101f, 0.0f,
     0.0f, 0.0f, 0x1.842482p-70f, 0.0f, 0x1.2e9166p-1f, 0x1.79a176p-50f,
     0x1.48d664p-115f, 0.0f, 0.0f, 0x1.d9923p-51f, 0x1.1ca006p-52f, 0.0f, 0.0f,
     0x1.e4ab0ep-109f, 0x1.0dc1d8p-73f, 0x1.509704p-104f, 0.0f, 0x1.8f0c06p-112f,
     0.0f, 0.0f, 0x1.4a4768p-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.23df2ep-8f, 0.0f,
     0x1.dbf338p-51f, 0x1.93ec3cp-68f, 0.0f, 0.0f, 0x1.e55604p-6f, 0.0f, 0.0f,
     0x1.737e7ep-23f, 0x1.c03c44p-108f, 0.0f, 0.0f, 0x1.e5417ep-6f, 0x1.41927ap-103f,
     0.0f, 0.0f, 0x1.0197ccp-95f, 0x1.bd02ccp-17f, 0x1.e035aap-104f, 0.0f, 0.0f,
     0x1.f5d444p-77f, 0x1.079acep-85f, 0x1.8fb91ep-74f, 0x1.c9925cp-59f, 0.0f, 0.0f,
     0.0f, 0x1.154c9ap-126f, 0x1.810e76p-12f, 0x1.58888p-125f, 0x1.403284p-14f, 0.0f,
     0x1.2f192cp-85f, 0x1.19f3e4p-57f, 0.0f, 0x1.0cff56p-1f, 0x1.a0898ep-1f,
     0x1.065168p-62f, 0x1.d3578ap-5f, 0x1.eff8a2p-89f, 0.0f, 0x1.4f5616p-30f,
     0x1.3b245ap-34f, 0.0f, 0.0f, 0.0f, 0x1.1fcf2cp-67f, 0x1.5fcd9p-40f, 0.0f,
     0x1.ff7544p-51f, 0.0f, 0.0f
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
    
    global_bench_acc = 0.0f;
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
        float bench_acc;
        int32_t i;
        __m128 carg;
        __m128 carg1;
        __m128 carg2;
        float tmp0;
        int32_t tmp1;

        i = INT32_C(0);
        bench_acc = 0.0f;

        for (;(i < INT32_C(1001));){
            float tmp0;
            float tmp1;
            __m128 carg;
            __m128 carg1;
            __m128 carg2;
            float tmp2;
            int32_t tmp3;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_erfcf1_u15purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            carg = _mm_set_ss(bench_acc);
            carg1 = _mm_set_ss(tmp1);
            carg2 = _mm_add_ss(carg, carg1);
            tmp2 = _mm_cvtss_f32(carg2);
            bench_acc = tmp2;
            tmp3 = i + INT32_C(1);
            i = tmp3;
        }
        carg = _mm_set_ss(global_bench_acc);
        carg1 = _mm_set_ss(bench_acc);
        carg2 = _mm_add_ss(carg, carg1);
        tmp0 = _mm_cvtss_f32(carg2);
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
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_erfcf1_u15purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_erfcf1_u15purecfma bench acc %a\n", global_bench_acc);
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
