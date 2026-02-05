/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_asinhf8_u10kvx.c --function Sleef_asinhf8_u10kvx \
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
     0x1.49e73p-35f, 0x1.d7a33ep-118f, 0x1.7061cp-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5a1e1ap-28f, 0x1.fa8506p-75f, 0x1.553bb4p-33f, 0.0f, 0x1.51d746p-46f, 0.0f,
     0x1.16095cp-34f, 0x1.abea28p-83f, 0.0f, 0.0f, 0x1.490a88p-55f, 0.0f, 0.0f,
     0x1.6cfe4ap-115f, 0.0f, 0x1.24c5b8p-4f, 0x1.937c7ep-67f, 0.0f, 0.0f, 0.0f,
     0x1.3b5be6p-19f, 0.0f, 0.0f, 0x1.8b057ap-17f, 0.0f, 0.0f, 0x1.895f6p-57f,
     0x1.353bacp-76f, 0.0f, 0.0f, 0.0f, 0x1.9693cp-98f, 0.0f, 0x1.5fe7eap-34f,
     0x1.0036d4p-69f, 0.0f, 0x1.5bebeap-122f, 0x1.383b96p-61f, 0x1.34cf76p-115f,
     0x1.5edf9cp-23f, 0x1.27bf1ep-120f, 0.0f, 0.0f, 0x1.472d2p-10f, 0x1.205baap-58f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a47092p-8f, 0x1.9f78f8p-45f, 0x1.55cab2p-67f,
     0x1.e63902p-14f, 0.0f, 0x1.f1cac4p-83f, 0x1.61c886p-67f, 0.0f, 0.0f,
     0x1.e0debp-9f, 0.0f, 0.0f, 0x1.4b13d6p-14f, 0x1.bccb34p-101f, 0x1.88332p-2f,
     0x1.5c8682p-35f, 0.0f, 0x1.690d18p-95f, 0x1.483208p-54f, 0.0f, 0x1.8cc75cp-122f,
     0x1.79c3eep-105f, 0x1.49029ep-101f, 0.0f, 0.0f, 0x1.5a1daap-108f,
     0x1.a1948ap-58f, 0x1.915b4p-67f, 0x1.8dfaecp-126f, 0.0f, 0x1.4c0fcp-105f, 0.0f,
     0x1.9abd66p-27f, 0x1.afb738p-83f, 0x1.7870aap-43f, 0.0f, 0.0f, 0.0f,
     0x1.de4ap-53f, 0x1.717242p-31f, 0x1.b158e2p-36f, 0.0f, 0x1.b4a5fp-65f,
     0x1.19ddb6p-46f, 0.0f, 0.0f, 0x1.7c4132p-87f, 0.0f, 0.0f, 0x1.56a29ep-109f, 0.0f,
     0x1.033046p-56f, 0.0f, 0x1.b4ac98p-66f, 0.0f, 0x1.cc3f84p-106f, 0x1.cce02p-89f,
     0.0f, 0.0f, 0x1.bde734p-58f, 0x1.ecb876p-6f, 0.0f, 0x1.e99eaep-20f,
     0x1.7c31e4p-9f, 0x1.cde47ep-81f, 0.0f, 0x1.46c266p-86f, 0.0f, 0.0f, 0.0f,
     0x1.9f61b6p-81f, 0x1.6ecc0ep-18f, 0.0f, 0x1.54f50ap-62f, 0.0f, 0.0f,
     0x1.b3e082p-119f, 0x1.94197cp-68f, 0x1.6871e2p-86f, 0x1.f02ecep-49f,
     0x1.155586p-78f, 0x1.a3d646p-8f, 0x1.e84566p-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e2fde6p-74f, 0x1.6add52p-69f, 0x1.33222ep-45f, 0.0f, 0.0f,
     0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.f89a54p-87f, 0x1.ed8bf4p-74f, 0.0f, 0x1.28f8ccp-3f,
     0x1.4679acp-104f, 0x1.545668p-70f, 0x1.e278cp-38f, 0.0f, 0x1.dbe726p-3f, 0.0f,
     0.0f, 0x1.1c3478p-106f, 0x1.1e1a4ep-20f, 0x1.6a48fap-26f, 0x1.34489ep-77f, 0.0f,
     0x1.7961dap-84f, 0x1.24d99ap-70f, 0x1.c4bcc8p-73f, 0.0f, 0x1.bd246p-43f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d3cb0cp-101f, 0.0f, 0x1.bf3172p-62f, 0x1.d179e2p-50f, 0.0f,
     0.0f, 0x1.4a3ed8p-109f, 0.0f, 0.0f, 0x1.c4016cp-77f, 0x1.302eacp-94f,
     0x1.b9c44ap-110f, 0x1.ea5b68p-29f, 0.0f, 0x1.6518ap-61f, 0x1.6e9776p-124f, 0.0f,
     0.0f, 0x1.f5de2p-120f, 0x1.bc178ap-13f, 0x1.a3277cp-12f, 0x1.ce3bc6p-44f, 0.0f,
     0x1.587d5cp-98f, 0x1.8cdb34p-30f, 0x1.cb458ap-116f, 0.0f, 0x1.c832bp-69f, 0.0f,
     0x1.5aa13ep-15f, 0x1.3314ecp-81f, 0.0f, 0x1.9b1daep-75f, 0.0f, 0x1.213d4ap-31f,
     0x1.4fb202p-104f, 0x1.a088d8p-102f, 0x1.e68148p-83f, 0x1.dae484p-122f, 0.0f,
     0.0f, 0.0f, 0x1.7b4b96p-57f, 0.0f, 0.0f, 0x1.772e56p-61f, 0.0f, 0x1.550c22p-94f,
     0x1.b475bp-75f, 0.0f, 0x1.8def0ep-14f, 0.0f, 0x1.41816ap-34f, 0x1.182f8ep-47f,
     0.0f, 0.0f, 0x1.6d7bbep-108f, 0x1.840804p-22f, 0x1.63eedp-111f, 0x1.15436ep-123f,
     0x1.2005c8p-98f, 0x1.a570bap-115f, 0.0f, 0x1.fcfd9ep-89f, 0.0f, 0x1.bbc12ep-91f,
     0x1.769074p-101f, 0x1.b78b14p-121f, 0.0f, 0x1.bc4a1cp-63f, 0x1.13c2fcp-47f,
     0x1.2d6094p-79f, 0x1.e27fep-2f, 0.0f, 0.0f, 0.0f, 0x1.9603b6p-13f, 0.0f,
     0x1.fed748p-33f, 0x1.023d7p-19f, 0.0f, 0.0f, 0.0f, 0x1.f1c35ap-6f, 0.0f,
     0x1.6c13ccp-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.619c62p-85f, 0.0f, 0x1.072da6p-97f,
     0.0f, 0x1.dd8806p-87f, 0x1.90c0b4p-4f, 0x1.3f8a52p-18f, 0x1.34cc92p-80f, 0.0f,
     0x1.75968ep-92f, 0x1.42851ep-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9b5ae2p-38f, 0.0f,
     0.0f, 0.0f, 0x1.a49e42p-118f, 0x1.9c4512p-19f, 0x1.57884cp-44f, 0.0f, 0.0f,
     0x1.74f82p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d64c0ep-97f,
     0x1.e3f1aap-35f, 0.0f, 0.0f, 0x1.99ec28p-109f, 0.0f, 0x1.fe0be4p-66f, 0.0f,
     0x1.62954cp-112f, 0.0f, 0x1.a0c718p-9f, 0x1.d1862p-117f, 0.0f, 0.0f, 0.0f,
     0x1.2d6c3p-39f, 0x1.c94f16p-39f, 0.0f, 0.0f, 0x1.90306p-69f, 0x1.2f28aap-118f,
     0x1.b6a016p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9ef01ep-117f, 0.0f,
     0x1.8e1a22p-10f, 0x1.d255aap-118f, 0x1.f139b2p-88f, 0x1.a35f6p-85f,
     0x1.b68f78p-38f, 0.0f, 0x1.e92c74p-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4817d4p-90f, 0.0f, 0x1.462512p-115f, 0x1.5d6b54p-33f, 0x1.a3f956p-77f, 0.0f,
     0.0f, 0x1.ce3934p-106f, 0x1.cbd454p-6f, 0x1.3a2d4p-50f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.79888ap-10f, 0.0f,
     0x1.e618bep-113f, 0.0f, 0.0f, 0x1.6d110ep-55f, 0x1.a88f0ap-7f, 0x1.4c1edcp-37f,
     0.0f, 0x1.2f53f2p-25f, 0x1.fe049ap-2f, 0x1.096ddap-19f, 0x1.96c52p-94f,
     0x1.77ccbcp-121f, 0x1.71b8a6p-75f, 0.0f, 0x1.335b04p-6f, 0x1.678e5ep-117f, 0.0f,
     0x1.8f6598p-84f, 0x1.225f16p-125f, 0.0f, 0.0f, 0x1.f26952p-48f, 0.0f,
     0x1.abd142p-18f, 0.0f, 0.0f, 0.0f, 0x1.1108c6p-5f, 0x1.446fc4p-41f,
     0x1.33fbe2p-71f, 0x1.d7ac8ap-36f, 0x1.a010fp-1f, 0.0f, 0.0f, 0.0f,
     0x1.e2b902p-93f, 0x1.8652eap-76f, 0x1.e4ebdcp-3f, 0x1.1dc7aep-79f,
     0x1.ba3466p-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3a8998p-76f, 0.0f, 0.0f,
     0x1.cd8908p-102f, 0x1.9ea7aap-15f, 0.0f, 0.0f, 0x1.d630b4p-53f, 0x1.a8863cp-86f,
     0x1.de82ecp-65f, 0x1.5bb9c2p-109f, 0.0f, 0x1.dfc052p-60f, 0x1.70367cp-47f, 0.0f,
     0x1.886f4p-31f, 0.0f, 0x1.e531c6p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9b94b2p-111f,
     0.0f, 0x1.3739dap-10f, 0.0f, 0.0f, 0.0f, 0x1.c240c4p-82f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ed0182p-48f, 0.0f, 0x1.b4e6dp-49f, 0.0f, 0x1.195ff4p-2f,
     0x1.98c07cp-73f, 0.0f, 0x1.b117aap-123f, 0x1.446cdep-74f, 0x1.b23df2p-14f,
     0x1.53834ap-125f, 0.0f, 0.0f, 0.0f, 0x1.a800c8p-94f, 0x1.ba1c8ap-83f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.fd4648p-114f, 0.0f, 0x1.a06576p-18f, 0.0f, 0.0f,
     0x1.ffdc94p-18f, 0.0f, 0x1.f50a02p-72f, 0x1.d5d6b8p-37f, 0x1.b4632ap-12f,
     0x1.1a710ep-37f, 0x1.b6dp-111f, 0.0f, 0x1.7d905p-11f, 0.0f, 0.0f,
     0x1.3b8ef8p-103f, 0x1.9159f4p-124f, 0.0f, 0.0f, 0x1.22ad06p-124f,
     0x1.cffbcap-33f, 0.0f, 0.0f, 0x1.8d001ap-111f, 0.0f, 0.0f, 0x1.b1e7dap-112f,
     0.0f, 0x1.5bf1e2p-51f, 0x1.c1a1c2p-37f, 0.0f, 0x1.7a432cp-112f, 0.0f, 0.0f,
     0x1.1862cp-71f, 0.0f, 0x1.ce44dap-74f, 0.0f, 0x1.d91b24p-30f, 0x1.d969d6p-99f,
     0x1.552adcp-124f, 0.0f, 0.0f, 0x1.6bebe6p-8f, 0.0f, 0x1.29d92p-92f, 0.0f,
     0x1.864602p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8e7e5cp-18f,
     0x1.8a50fp-98f, 0x1.14328ep-59f, 0x1.87045ep-36f, 0x1.9c589ap-106f, 0.0f,
     0x1.f04196p-71f, 0.0f, 0x1.f2101ap-102f, 0x1.d12374p-70f, 0.0f, 0.0f,
     0x1.63b436p-99f, 0.0f, 0x1.0b3d48p-125f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f98858p-103f, 0.0f, 0x1.d2b24ap-24f, 0.0f, 0x1.5bca4ep-8f, 0x1.89eed8p-69f,
     0.0f, 0x1.aec42ap-62f, 0.0f, 0x1.2aec6ep-14f, 0.0f, 0x1.cb7b32p-16f, 0x1p0f,
     0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.b52912p-69f, 0x1.fa3268p-21f, 0.0f,
     0x1.eb5104p-102f, 0x1.bd8602p-63f, 0x1.e3de82p-103f, 0.0f, 0.0f, 0x1.990064p-78f,
     0x1.0712f4p-40f, 0.0f, 0.0f, 0.0f, 0x1.427d7cp-24f, 0x1.097a86p-37f, 0.0f,
     0x1.565e8cp-80f, 0x1.3a2dbp-47f, 0.0f, 0x1.7abb34p-34f, 0.0f, 0.0f,
     0x1.6e2578p-33f, 0x1.d6a9b8p-8f, 0x1.8ff22ep-94f, 0x1.674528p-64f,
     0x1.81376cp-54f, 0.0f, 0x1.5660dp-89f, 0.0f, 0x1.8f2492p-5f, 0x1.51970ap-20f,
     0.0f, 0.0f, 0x1.4fbf64p-16f, 0x1.74d824p-112f, 0.0f, 0.0f, 0.0f,
     0x1.774864p-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.88d694p-47f, 0x1.7b9e9ap-34f,
     0x1.3f8dc4p-8f, 0x1.bdca16p-48f, 0x1.fc3434p-89f, 0x1.0feea6p-23f, 0.0f, 0.0f,
     0x1.1b6d1p-24f, 0x1.06230ap-60f, 0x1.455966p-61f, 0x1.389424p-19f,
     0x1.00c312p-18f, 0x1.a89f2ap-110f, 0x1.70e0dcp-73f, 0.0f, 0x1.3649a6p-98f, 0.0f,
     0x1.12f98p-84f, 0.0f, 0x1.61bd02p-108f, 0x1.048606p-73f, 0x1.2228f4p-85f,
     0x1.55b494p-46f, 0x1.5e772p-62f, 0.0f, 0x1.bcded8p-26f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5b06c6p-86f, 0x1.2df21ap-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b539b4p-19f,
     0.0f, 0.0f, 0.0f, 0x1.fe88dap-87f, 0.0f, 0.0f, 0.0f, 0x1.14e0dp-5f, 0.0f, 0.0f,
     0.0f, 0x1.dbfcbep-19f, 0x1.fb24f4p-62f, 0.0f, 0x1.47185ap-38f, 0x1.b50696p-28f,
     0.0f, 0.0f, 0.0f, 0x1.32c722p-37f, 0.0f, 0x1.c6eb9ep-81f, 0x1.67261ep-62f,
     0x1.e07c42p-118f, 0.0f, 0.0f, 0x1.18f7a8p-3f, 0x1.981cdp-89f, 0.0f,
     0x1.ac99e4p-3f, 0.0f, 0x1.25cf14p-111f, 0x1.a1baaep-76f, 0.0f, 0x1.649268p-31f,
     0x1.dad756p-63f, 0.0f, 0x1.cdbc16p-119f, 0.0f, 0x1.d09eaep-126f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.80514p-34f, 0.0f, 0x1.924ee4p-30f, 0.0f, 0x1.5664e8p-103f,
     0.0f, 0x1.23fa8cp-86f, 0x1.3ba29ap-108f, 0.0f, 0x1.d1bd48p-40f, 0.0f,
     0x1.82e56ep-94f, 0.0f, 0x1.812768p-118f, 0.0f, 0x1.938b64p-119f, 0.0f,
     0x1.6f9f3p-115f, 0.0f, 0x1.c21f6p-108f, 0x1.5f08f2p-81f, 0x1.9b2694p-33f, 0.0f,
     0x1.d2be74p-22f, 0x1.03fed8p-88f, 0.0f, 0x1.84004p-41f, 0.0f, 0x1p0f, 0.0f,
     0x1.bed7f2p-34f, 0.0f, 0.0f, 0.0f, 0x1.1b7ffep-42f, 0x1.02ce12p-33f,
     0x1.532b16p-100f, 0x1.12e03ap-94f, 0x1.8ae7c2p-8f, 0x1.0c63c4p-16f,
     0x1.0f88a8p-43f, 0x1.f95f92p-14f, 0.0f, 0.0f, 0.0f, 0x1.9f8df4p-77f, 0.0f, 0.0f,
     0.0f, 0x1.0e97ap-1f, 0x1.2c86dep-29f, 0x1.c2f1aap-42f, 0x1.bafff4p-107f,
     0x1.dd8378p-85f, 0x1.e12618p-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cd01a4p-60f,
     0x1.abf70cp-76f, 0x1.ef6ff6p-76f, 0x1.e8dcbep-57f, 0x1.2275cp-99f, 0.0f,
     0x1.3ccaep-95f, 0.0f, 0.0f, 0.0f, 0x1.df224p-88f, 0x1.3f84e8p-12f,
     0x1.0125d2p-104f, 0.0f, 0x1.47f5b8p-115f, 0x1.b8a502p-46f, 0x1.673bbcp-77f,
     0x1.8f98f8p-24f, 0x1.95174p-103f, 0x1.04f1b4p-86f, 0.0f, 0x1.45ca3cp-6f,
     0x1.c60e68p-96f, 0x1.a40716p-86f, 0.0f, 0x1.86dbcp-15f, 0.0f, 0x1.20affcp-84f,
     0.0f, 0x1.e02f9p-82f, 0.0f, 0x1.3ff352p-65f, 0x1.6ce6c8p-64f, 0.0f, 0.0f, 0.0f,
     0x1.d370e2p-71f, 0x1.9a1592p-43f, 0.0f, 0.0f, 0x1.471908p-13f, 0x1.e0a964p-124f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.faa2c2p-56f, 0.0f, 0x1.700208p-12f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.3e700ep-53f, 0x1.67ba1ap-52f, 0x1.c0188cp-119f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9a9ef4p-108f, 0x1.fa75eap-19f, 0.0f, 0.0f, 0x1.bff50ap-25f, 0.0f,
     0x1.a46efep-123f, 0.0f, 0.0f, 0x1.36dce4p-95f, 0x1.f754a6p-9f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.002bfep-100f, 0x1.7c649ep-8f, 0x1.58b924p-76f, 0x1.3439ep-27f,
     0x1.afa57ep-59f, 0x1.e6cbfp-31f, 0.0f, 0.0f, 0x1.c59002p-56f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.21c1a4p-72f, 0x1.22d55p-104f, 0.0f, 0.0f, 0.0f, 0x1.c4f094p-69f, 0.0f,
     0.0f, 0x1.2f1eeep-86f, 0x1.9eb522p-115f, 0.0f, 0x1.06c99p-68f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.cd68c2p-111f, 0x1.856ecep-1f, 0.0f, 0.0f, 0.0f, 0x1.fe4b74p-106f, 0.0f,
     0x1.2299d8p-24f, 0.0f, 0.0f, 0x1.fcb688p-49f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d2ac3ep-108f, 0.0f, 0.0f, 0x1.7c55bep-41f, 0x1.776236p-13f, 0.0f,
     0x1.524146p-51f, 0x1.82e046p-103f, 0x1.bce4fap-32f, 0.0f, 0.0f, 0x1.6be068p-115f,
     0x1.f4fffep-32f, 0.0f, 0.0f, 0.0f, 0x1.32be1cp-97f, 0x1.86f37p-120f, 0.0f, 0.0f,
     0x1.03b74p-93f, 0.0f, 0.0f, 0.0f, 0x1.84e9fap-106f, 0.0f, 0x1.11662p-61f, 0.0f,
     0x1.b91a12p-9f, 0x1.d4f272p-29f, 0x1.86ce1cp-2f, 0x1.5ed3d6p-76f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e04dep-115f, 0.0f, 0.0f, 0x1.83e218p-115f, 0.0f,
     0x1.57caecp-102f, 0.0f, 0.0f, 0x1.7f1352p-108f, 0.0f, 0x1.181214p-58f, 0.0f,
     0.0f, 0x1.d404fp-78f, 0.0f, 0x1.8aef84p-107f, 0.0f, 0.0f, 0x1.f3176cp-125f, 0.0f,
     0x1.49006ap-76f, 0.0f, 0x1.ff50a8p-4f, 0x1.ee599p-117f, 0x1.ad46a2p-73f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a7d0f6p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7e879p-18f, 0.0f,
     0.0f, 0x1.304de2p-26f, 0x1.abcd1ap-99f, 0.0f, 0.0f, 0x1.940e44p-59f, 0.0f, 0.0f,
     0x1.8c655cp-12f, 0.0f, 0.0f, 0x1.8d5d6ep-36f, 0.0f, 0.0f, 0.0f, 0x1.ca98ep-36f,
     0.0f, 0x1.62c8c8p-22f, 0x1.6b0006p-45f, 0x1.71b806p-64f, 0.0f, 0.0f, 0.0f,
     0x1.8cf06p-77f, 0x1.f35fap-44f, 0x1.ba06f4p-49f, 0x1.53f3bep-38f, 0.0f, 0.0f,
     0x1.a6d99ep-123f, 0.0f, 0x1.4997eap-37f, 0.0f, 0.0f, 0x1.cc5e4p-77f, 0.0f,
     0x1.a83428p-46f, 0.0f, 0x1.3c5ea2p-51f, 0x1.9ab7fep-32f, 0.0f, 0.0f, 0.0f,
     0x1.020de6p-66f, 0x1.ad8d08p-3f, 0.0f, 0x1.3e50fep-88f, 0.0f, 0.0f,
     0x1.4da44ap-28f, 0x1.63fc4ep-13f, 0.0f, 0.0f, 0x1.36c53ep-14f, 0x1.428852p-57f,
     0x1.65084cp-83f, 0x1.7b51b6p-68f, 0.0f, 0.0f, 0.0f, 0x1.06f5dp-20f,
     0x1.1ee55p-58f, 0x1.a51d9cp-79f, 0x1.559faap-117f, 0x1.b60b0ep-80f, 0.0f,
     0x1.8e4c36p-34f, 0.0f, 0x1.f94068p-67f
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
            tmp1 = Sleef_asinhf8_u10kvx(tmp0);
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
    printf("Sleef_asinhf8_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_asinhf8_u10kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
