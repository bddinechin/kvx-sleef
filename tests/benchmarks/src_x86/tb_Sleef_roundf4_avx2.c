/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_roundf4_avx2128.c --function Sleef_roundf4_avx2128 --headers \
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
     0.0f, 0.0f, 0x1.591f78p-45f, 0.0f, 0.0f, 0x1.51f3bp-46f, 0.0f, 0x1.aa3318p-24f,
     0x1.9fa0fcp-60f, 0x1.21d5acp-33f, 0x1.9ab3ccp-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.034772p-59f, 0.0f, 0x1.d2bc0ep-13f, 0x1.d44ccap-76f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.30752p-23f, 0.0f, 0x1.77feeep-98f, 0.0f, 0.0f, 0.0f, 0x1.d9d456p-30f, 0.0f,
     0x1.46f3dap-55f, 0.0f, 0.0f, 0x1.97226p-5f, 0x1.b3e9f4p-63f, 0x1.e066d6p-96f,
     0x1.e6e2cep-114f, 0x1.5ed234p-44f, 0.0f, 0x1.a9628p-79f, 0x1.41f944p-99f, 0.0f,
     0x1.503b52p-94f, 0.0f, 0.0f, 0.0f, 0x1.c4f76cp-118f, 0x1.fe78c4p-88f,
     0x1.852548p-100f, 0.0f, 0x1.2fe118p-8f, 0.0f, 0.0f, 0x1.8b804cp-92f, 0.0f, 0.0f,
     0x1.5599f2p-3f, 0x1.8a3cap-38f, 0.0f, 0x1.183028p-95f, 0x1.9348bep-82f, 0.0f,
     0x1.eb1136p-94f, 0x1.d38e08p-90f, 0.0f, 0.0f, 0x1.10a856p-17f, 0.0f,
     0x1.1a0c7ap-29f, 0x1.cde896p-10f, 0x1.2d2d1ap-56f, 0x1.b9b51ap-54f, 0.0f,
     0x1.dfd206p-17f, 0x1.5230ap-90f, 0.0f, 0.0f, 0.0f, 0x1.15cb44p-85f, 0.0f, 0.0f,
     0x1.a0daaep-28f, 0x1.174b0ep-62f, 0.0f, 0.0f, 0x1.a17bb6p-86f, 0.0f,
     0x1.602ea8p-41f, 0x1.0be1cep-83f, 0.0f, 0x1.9c113cp-67f, 0x1.f7cafp-89f, 0.0f,
     0.0f, 0x1.5e2468p-119f, 0.0f, 0x1.1f38c6p-18f, 0.0f, 0.0f, 0x1.3db322p-22f,
     0x1.00fda8p-107f, 0x1.6236p-31f, 0.0f, 0x1.cc2264p-125f, 0x1.ab9382p-114f,
     0x1.f83d72p-80f, 0x1.506b1ep-1f, 0x1.df6222p-30f, 0.0f, 0x1.f4d006p-81f,
     0x1.c94facp-76f, 0.0f, 0.0f, 0.0f, 0x1.7ae358p-13f, 0x1.06362cp-124f, 0.0f,
     0x1.f9c33ap-93f, 0.0f, 0x1.0bbbb8p-30f, 0x1.a880d8p-100f, 0x1.119826p-83f, 0.0f,
     0x1.d6f694p-99f, 0x1.0f81a2p-64f, 0x1.fca2d4p-78f, 0x1p0f, 0x1.f2f1a8p-104f,
     0.0f, 0.0f, 0x1.e18f12p-126f, 0x1.2f0752p-17f, 0.0f, 0x1.bbc074p-84f,
     0x1.f56a34p-124f, 0x1.1d32acp-62f, 0x1.42a76p-100f, 0x1.1bd766p-34f, 0.0f,
     0x1.9940d6p-81f, 0x1.997342p-47f, 0x1.b74b2ap-63f, 0x1.ed22c8p-72f,
     0x1.5f26d6p-89f, 0x1.9a107ap-37f, 0.0f, 0x1.948a1p-79f, 0x1.a8d128p-14f, 0.0f,
     0.0f, 0x1.1e1b88p-75f, 0x1.3d2036p-105f, 0.0f, 0x1.3a4854p-76f, 0.0f, 0.0f, 0.0f,
     0x1.32303cp-13f, 0.0f, 0x1.635ebp-76f, 0x1.d7cc64p-3f, 0x1.5f8958p-16f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.38de12p-12f, 0.0f, 0x1.15f52ap-104f,
     0x1.1b712ap-117f, 0x1.518a36p-36f, 0.0f, 0x1.47657p-30f, 0.0f, 0.0f, 0.0f,
     0x1.f889d8p-10f, 0.0f, 0.0f, 0.0f, 0x1.cde578p-121f, 0.0f, 0x1.df8588p-3f, 0.0f,
     0x1.7fbf9p-93f, 0x1.1d294ap-17f, 0x1.332c34p-33f, 0x1.e6654ap-84f, 0.0f,
     0x1.d0c7f4p-25f, 0.0f, 0x1.d5bc3p-8f, 0.0f, 0x1.eb8956p-54f, 0x1.123b08p-10f,
     0.0f, 0x1.c4db22p-96f, 0x1.52bb14p-16f, 0x1.53a15p-55f, 0x1.421172p-27f,
     0x1.39378cp-88f, 0x1.93f2f6p-121f, 0x1.f528f6p-112f, 0x1.fbb06ep-25f,
     0x1.7c1daap-106f, 0x1.083dbep-65f, 0x1.c3eb06p-84f, 0x1.3f37f8p-112f, 0.0f, 0.0f,
     0x1.7bca28p-64f, 0.0f, 0.0f, 0x1.0201a4p-84f, 0x1.071ecep-38f, 0.0f, 0.0f,
     0x1.a0be96p-7f, 0x1.ce195cp-65f, 0.0f, 0.0f, 0x1.2193e8p-18f, 0.0f,
     0x1.a3326ep-45f, 0.0f, 0.0f, 0x1.786416p-114f, 0.0f, 0.0f, 0.0f, 0x1.a73ef2p-44f,
     0x1.7bd50ap-114f, 0.0f, 0.0f, 0.0f, 0x1.df1e3cp-3f, 0x1.e6f37ap-117f,
     0x1.39d3c4p-93f, 0.0f, 0.0f, 0x1.971bbcp-102f, 0.0f, 0.0f, 0.0f, 0x1.737dc2p-11f,
     0x1.9f9ca8p-85f, 0x1.44f362p-118f, 0x1.194cf4p-100f, 0.0f, 0x1.f179f4p-64f, 0.0f,
     0x1.65743cp-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4d4b6ap-69f, 0.0f, 0.0f,
     0x1.21fac8p-55f, 0.0f, 0x1.08b7d2p-97f, 0x1.f0c1c6p-107f, 0.0f, 0.0f,
     0x1.d3eaecp-97f, 0.0f, 0x1.3e4fb2p-55f, 0x1.1b60d4p-115f, 0x1.6dc7bcp-122f,
     0x1.a2d4dep-40f, 0x1.2b170ap-32f, 0.0f, 0x1.fb76e6p-11f, 0.0f, 0x1.b762dcp-17f,
     0x1.92780ap-119f, 0.0f, 0x1.2c09fp-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4c34ap-9f,
     0x1.5f121p-50f, 0x1.622a5ap-91f, 0.0f, 0x1.3e077cp-41f, 0x1.293ebep-19f, 0.0f,
     0x1.920becp-14f, 0x1.59add2p-64f, 0.0f, 0.0f, 0x1.fdbd9ep-39f, 0.0f,
     0x1.b9e744p-98f, 0.0f, 0.0f, 0x1.6b9f9ep-115f, 0x1.06304ep-118f, 0.0f,
     0x1.b0cac2p-113f, 0x1.694c44p-111f, 0.0f, 0x1.1dc1bap-55f, 0.0f, 0x1.9406c4p-72f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.1afd68p-91f, 0.0f, 0x1.7bad86p-116f, 0x1.52c146p-1f,
     0x1.a6325cp-18f, 0x1.58359ep-118f, 0x1.c2a566p-64f, 0.0f, 0.0f, 0x1.489526p-101f,
     0x1.ff55a6p-122f, 0x1.c677dap-56f, 0.0f, 0.0f, 0x1.d675f2p-69f, 0x1.b9f5fep-34f,
     0x1.86b7c2p-54f, 0.0f, 0x1.0fca08p-100f, 0.0f, 0x1.cfca4ap-27f, 0x1.909aeep-13f,
     0x1.278086p-113f, 0.0f, 0x1.5650fap-102f, 0x1.26b288p-12f, 0.0f, 0.0f,
     0x1.330fcp-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.139248p-61f, 0.0f, 0.0f, 0.0f,
     0x1.10cc54p-88f, 0x1.b0236p-82f, 0x1.4a1ffep-97f, 0x1.b9e2eap-121f,
     0x1.85e4f6p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.91cdbep-23f, 0x1.a7de8ep-78f,
     0x1.57dafcp-70f, 0x1.51ca08p-51f, 0x1.6a5db4p-87f, 0x1.f355fep-10f,
     0x1.b812c6p-69f, 0.0f, 0x1.3ceca2p-59f, 0x1.c8ade4p-23f, 0.0f, 0x1.253994p-68f,
     0.0f, 0.0f, 0.0f, 0x1.caf46p-9f, 0x1.3e3e14p-89f, 0x1.f30ad6p-72f,
     0x1.476f36p-39f, 0.0f, 0.0f, 0x1.41f786p-15f, 0.0f, 0x1.9f1804p-5f, 0.0f,
     0x1.f39432p-46f, 0.0f, 0.0f, 0.0f, 0x1.c0af4cp-12f, 0x1.8b980ap-55f, 0.0f, 0.0f,
     0x1.d91758p-75f, 0x1.b895c4p-9f, 0x1.bc12b6p-103f, 0.0f, 0x1.7d589ap-15f,
     0x1.0048p-14f, 0x1.9c02dcp-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.28005ap-18f,
     0x1.fcacc8p-77f, 0.0f, 0x1.d2c338p-71f, 0.0f, 0x1.5b3fb6p-33f, 0.0f, 0.0f,
     0x1.b54122p-47f, 0x1.99ba9cp-114f, 0.0f, 0.0f, 0.0f, 0x1.a663b2p-103f,
     0x1.a0eceap-116f, 0x1.daeb18p-76f, 0.0f, 0.0f, 0.0f, 0x1.2d15c8p-19f,
     0x1.144d5p-81f, 0.0f, 0x1.546106p-23f, 0x1.9af376p-26f, 0x1.a3271ep-125f, 0.0f,
     0.0f, 0.0f, 0x1.c88028p-95f, 0x1.de2a7cp-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.0f65dep-95f, 0x1.8f5d2ap-110f, 0.0f, 0x1.88e79ep-43f, 0.0f,
     0.0f, 0x1.d9a2fap-83f, 0x1.a7d6cap-39f, 0.0f, 0x1.fe5dcap-121f, 0.0f,
     0x1.54b62ap-36f, 0x1.36f954p-125f, 0x1.6a89bcp-44f, 0.0f, 0.0f, 0.0f,
     0x1.d29848p-57f, 0.0f, 0x1.0371f8p-100f, 0.0f, 0.0f, 0x1.f9231cp-22f,
     0x1.6e72e8p-101f, 0x1.3cc3b2p-90f, 0x1.1ce158p-13f, 0.0f, 0x1.b5e994p-15f,
     0x1.fa2892p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.aa9ca8p-23f, 0x1.768fcep-14f, 0.0f,
     0x1.4a9084p-14f, 0x1.a7f654p-13f, 0x1.8cd6cep-116f, 0x1.fcec08p-66f,
     0x1.6be5cep-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bd686ep-93f, 0.0f, 0.0f,
     0x1.260878p-70f, 0x1.95550cp-20f, 0.0f, 0x1.51e57ap-126f, 0x1.8b6418p-75f,
     0x1.1c77c2p-72f, 0x1.89914cp-108f, 0x1.b38cdp-20f, 0.0f, 0.0f, 0x1.e87c62p-10f,
     0x1.fdd094p-119f, 0x1.01dc7p-100f, 0.0f, 0.0f, 0x1.6f54ecp-75f, 0x1.97dfcep-89f,
     0.0f, 0.0f, 0.0f, 0x1.d0a32cp-30f, 0.0f, 0x1.b6133ep-3f, 0x1.733606p-122f,
     0x1.8261f6p-47f, 0.0f, 0x1.f3e8acp-124f, 0.0f, 0x1.a84cf8p-22f, 0.0f,
     0x1.72e9b6p-12f, 0x1.e20d68p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.16391ap-20f, 0.0f, 0x1.a82d46p-4f, 0x1.e05d72p-35f, 0x1.af27eap-96f,
     0x1.7f62eep-33f, 0x1.b5923cp-73f, 0.0f, 0x1.805718p-24f, 0.0f, 0x1.4b7f52p-19f,
     0x1.9b20a8p-106f, 0.0f, 0x1.c6f07cp-109f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e88d1ap-35f, 0x1.39c0f2p-78f, 0.0f, 0.0f, 0.0f, 0x1.a8733ap-3f, 0.0f, 0.0f,
     0.0f, 0x1.52a50ep-65f, 0.0f, 0x1.6e2622p-10f, 0x1.fe890ap-44f, 0x1.1d740cp-37f,
     0x1.072f1ep-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8e90ccp-92f, 0.0f,
     0x1.af3a5p-78f, 0.0f, 0.0f, 0.0f, 0x1.73e662p-45f, 0.0f, 0x1.e22178p-13f,
     0x1.a64fa4p-66f, 0x1.33ba42p-53f, 0.0f, 0.0f, 0x1.e87714p-43f, 0x1.c38972p-92f,
     0x1.a4266p-109f, 0x1.0e2486p-81f, 0x1.5448a8p-114f, 0x1.0e2e3ap-115f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.30127p-4f, 0x1.bf7ecap-92f, 0x1.60015p-20f, 0x1.7fafeep-12f,
     0x1.01f464p-71f, 0.0f, 0x1.35f382p-31f, 0x1.702d8cp-79f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fc051ap-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b0bca2p-61f, 0x1.5575b6p-10f,
     0x1.b0cf02p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d82f7p-68f, 0x1.c92ep-51f,
     0x1.849f9ep-14f, 0.0f, 0.0f, 0x1.3e7914p-60f, 0x1.99ba22p-93f, 0x1.44bcc6p-87f,
     0x1.3c8a16p-8f, 0.0f, 0x1.9d56a4p-46f, 0x1.dbe1aap-27f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.dd37b8p-17f, 0x1.8589d4p-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.56e6dp-17f, 0.0f,
     0x1.db4c02p-79f, 0.0f, 0x1.4d9b5ep-73f, 0x1.16b3bp-26f, 0.0f, 0x1.92906p-55f,
     0.0f, 0.0f, 0.0f, 0x1.c175c6p-17f, 0x1.879576p-48f, 0x1.899e8ep-115f,
     0x1.4e4a7ap-63f, 0x1.c35fd6p-28f, 0.0f, 0.0f, 0x1.1b46acp-34f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.0245bcp-39f, 0x1.87ad3ap-86f, 0x1.4113b4p-110f, 0x1.8797p-92f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9eae5p-68f, 0.0f, 0x1.b0df6ep-42f, 0.0f, 0.0f,
     0x1.5155d2p-22f, 0x1.052eacp-124f, 0x1.48d7e8p-118f, 0.0f, 0x1.322e12p-14f, 0.0f,
     0.0f, 0x1.d92fd6p-11f, 0.0f, 0.0f, 0x1.4f4dfep-84f, 0x1.f6b448p-30f,
     0x1.f7fd38p-4f, 0.0f, 0x1.2d73d4p-17f, 0x1.86db2ap-87f, 0.0f, 0x1.1010eap-11f,
     0.0f, 0.0f, 0.0f, 0x1.8dc5f8p-75f, 0.0f, 0.0f, 0x1.522fd2p-18f, 0x1.f7ed42p-92f,
     0x1.deb598p-81f, 0x1.2d243cp-31f, 0x1.1e2012p-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.8ac99p-90f, 0x1.3e6fbap-67f, 0.0f, 0.0f, 0x1.c058b8p-8f,
     0x1.1f12b4p-28f, 0x1.a1f626p-8f, 0.0f, 0x1.56a3bep-52f, 0x1.dec096p-69f,
     0x1.78b9bp-20f, 0x1.1e4388p-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.67dbep-63f, 0.0f,
     0x1.82648p-106f, 0x1.6311dep-25f, 0.0f, 0x1.dea2b2p-93f, 0x1.713d14p-25f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a01eaap-53f, 0.0f, 0.0f,
     0x1.e904cep-106f, 0.0f, 0.0f, 0.0f, 0x1.906006p-109f, 0x1.e75c52p-13f, 0.0f,
     0.0f, 0x1.83e07cp-109f, 0x1.e5aacep-92f, 0x1.906282p-56f, 0.0f, 0.0f,
     0x1.9fdc4ap-7f, 0x1.412a7p-87f, 0x1.dc33d4p-110f, 0.0f, 0.0f, 0.0f,
     0x1.93e3c4p-89f, 0x1.269e8ap-82f, 0x1.36a556p-46f, 0.0f, 0x1.0fdc6ap-110f, 0.0f,
     0x1.d2bb62p-77f, 0.0f, 0x1.95d0fep-12f, 0.0f, 0x1.6aaa7ep-42f, 0.0f,
     0x1.2b1cfep-43f, 0.0f, 0.0f, 0x1.4e3f3cp-73f, 0x1.e7cc4ap-89f, 0.0f,
     0x1.a6b12p-126f, 0x1.bb22b6p-13f, 0x1.1cda32p-53f, 0x1.6ec4d6p-78f, 0.0f,
     0x1.9adf88p-54f, 0x1.1806aep-87f, 0.0f, 0x1.99792cp-95f, 0.0f, 0.0f,
     0x1.e73cap-27f, 0.0f, 0x1.6d32cp-41f, 0x1.38d2e2p-74f, 0.0f, 0.0f,
     0x1.2cac16p-54f, 0x1.7cad14p-96f, 0.0f, 0.0f, 0x1.dbe14p-126f, 0.0f,
     0x1.8deab8p-49f, 0.0f, 0x1.6fb388p-32f, 0x1.e0b016p-31f, 0x1.7a0992p-67f,
     0x1.ce5caap-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2643p-8f,
     0x1.d1a90ep-87f, 0.0f, 0.0f, 0x1.1c4acap-19f, 0.0f, 0.0f, 0x1.0aa7eap-114f, 0.0f,
     0x1.2205cap-98f, 0x1.da11ecp-111f, 0x1.ab233p-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.9f8e7ap-91f, 0x1.1f8ac4p-37f, 0.0f, 0.0f, 0.0f, 0x1.176cecp-122f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.30f428p-103f, 0.0f, 0.0f, 0x1.8828dp-21f, 0x1.1c2594p-45f,
     0x1.1b39e8p-104f, 0x1.a29298p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.314552p-38f, 0x1.308846p-105f, 0x1.b664f2p-69f, 0.0f, 0x1.c753fp-37f, 0.0f,
     0x1.b9d226p-26f, 0.0f, 0.0f, 0x1.52e5ap-51f, 0x1.122deep-5f, 0x1.4d22bp-46f,
     0.0f, 0x1.8efdf2p-59f, 0.0f, 0.0f, 0x1.10985cp-123f, 0x1.89077p-10f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.79ddd8p-18f,
     0.0f, 0.0f, 0.0f, 0x1.46cee4p-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a2a37ep-64f,
     0x1.82211cp-33f, 0.0f, 0.0f, 0x1.e9cc18p-103f, 0.0f, 0x1.95cd52p-50f,
     0x1.b4ffbep-54f, 0x1.c69862p-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.374eb4p-103f, 0.0f, 0x1.e2b97ap-52f, 0x1.4ba7fp-52f, 0x1.c9f8ap-91f, 0.0f,
     0.0f, 0x1.1f238ep-102f, 0.0f, 0.0f, 0x1.865afcp-95f, 0x1.8c8e56p-70f, 0.0f, 0.0f,
     0.0f, 0x1.e6ba8p-41f, 0x1.21176ap-4f, 0.0f, 0.0f, 0x1.e01f26p-121f, 0.0f, 0.0f,
     0x1.8e2dbp-37f, 0x1.d25ee8p-51f, 0.0f, 0.0f, 0x1.baf854p-74f, 0x1.6fa3aep-84f,
     0x1.fa939ap-57f, 0x1.6649d6p-62f, 0.0f, 0x1.88e7acp-27f, 0x1.fa08dp-99f, 0.0f,
     0.0f, 0.0f, 0x1.6506a2p-76f, 0.0f, 0x1.4661f8p-94f, 0x1.21ca7ep-125f, 0.0f, 0.0f,
     0x1.bce55ap-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.070b58p-63f, 0x1.7dc79cp-36f,
     0x1.0fa5aap-124f, 0x1.4fced4p-100f, 0x1.41112ap-78f, 0x1.c19b04p-77f, 0.0f, 0.0f,
     0.0f, 0x1.891282p-25f, 0.0f, 0.0f, 0.0f, 0x1.41b7c2p-11f, 0x1.9c2a28p-126f, 0.0f,
     0x1.fd4f08p-60f, 0x1.a4379ap-21f, 0x1.d4d1fcp-84f, 0x1.37fc6ap-109f,
     0x1.219cf8p-66f, 0.0f, 0x1.cee2aep-7f, 0x1.21a0d6p-53f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9de944p-108f, 0.0f, 0x1.cdb8fcp-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.725aap-19f, 0.0f, 0.0f, 0x1.0a5c24p-33f, 0.0f
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
            tmp1 = Sleef_roundf4_avx2128(tmp0);
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
    printf("Sleef_roundf4_avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_roundf4_avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
