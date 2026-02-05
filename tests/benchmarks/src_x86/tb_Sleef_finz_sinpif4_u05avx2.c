/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sinpif4_u05avx2128.c --function \
 *     Sleef_finz_sinpif4_u05avx2128 --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0.0f, 0.0f, 0x1.b56184p-106f, 0x1.aba7e4p-118f, 0x1.97780ep-7f, 0.0f,
     0x1.cc831p-100f, 0.0f, 0x1.2e0552p-116f, 0.0f, 0.0f, 0x1.897a8cp-95f, 0.0f,
     0x1.4285a8p-96f, 0.0f, 0.0f, 0x1.9fffd4p-65f, 0x1.52b45ap-69f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.590bcap-30f, 0x1.5805e8p-25f, 0x1.40e008p-12f, 0x1.22458p-42f,
     0x1.ed78bap-90f, 0x1.293e08p-53f, 0.0f, 0x1.0a22a2p-14f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.29ab5cp-44f, 0.0f, 0x1.4b7452p-31f, 0.0f, 0.0f, 0.0f, 0x1.50eb28p-71f, 0.0f,
     0.0f, 0x1.0f6586p-58f, 0.0f, 0.0f, 0.0f, 0x1.5eb20cp-77f, 0x1.578c9p-4f, 0.0f,
     0x1.aca4b8p-52f, 0.0f, 0.0f, 0x1.d0785ap-107f, 0.0f, 0.0f, 0x1.228c86p-58f, 0.0f,
     0x1.25ebe8p-122f, 0.0f, 0.0f, 0.0f, 0x1.ed4682p-91f, 0x1.19312p-64f,
     0x1.a070b4p-38f, 0.0f, 0x1.eae1bep-72f, 0.0f, 0x1.dde1ep-53f, 0.0f,
     0x1.bbd59ap-95f, 0x1.76afacp-108f, 0x1.5b3504p-41f, 0x1.dbe0f4p-45f,
     0x1.42d842p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.64f8ecp-21f, 0.0f, 0.0f,
     0x1.d3c0dap-71f, 0.0f, 0x1.2578e6p-62f, 0x1.c160a6p-94f, 0x1.6fcd08p-61f,
     0x1.521bfcp-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.41ee0cp-2f,
     0x1.6589dap-113f, 0.0f, 0x1.76ce9cp-8f, 0x1.420e2ep-82f, 0x1.91cc74p-40f, 0.0f,
     0.0f, 0x1.6da322p-34f, 0x1.641ad8p-89f, 0.0f, 0x1.9d50b6p-100f, 0.0f, 0.0f,
     0x1.b4517ep-71f, 0x1.e08758p-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8a5fb6p-82f, 0.0f,
     0x1.184962p-61f, 0x1.8aa176p-49f, 0.0f, 0x1.8a127ep-95f, 0x1.7098aep-99f,
     0x1.ee120ap-88f, 0.0f, 0.0f, 0x1.baa826p-114f, 0x1.47119p-71f, 0x1.277e9p-113f,
     0.0f, 0x1.0e475ep-110f, 0x1.045f6ep-37f, 0x1.f5645p-20f, 0x1.511c0cp-82f,
     0x1.4b49d4p-85f, 0x1.898de6p-113f, 0x1.66ce3ap-68f, 0.0f, 0x1.33cd64p-95f,
     0x1.1ad3ccp-93f, 0.0f, 0.0f, 0x1.43c9bp-103f, 0x1.ea9cb8p-31f, 0x1.b7f0ep-8f,
     0x1.853ffcp-58f, 0x1.e5e97p-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d3c0b2p-82f, 0.0f,
     0x1.ba886ap-61f, 0.0f, 0x1.b80132p-11f, 0x1.7fd55ap-104f, 0x1.2a048cp-60f,
     0x1.e7d67ap-73f, 0.0f, 0.0f, 0.0f, 0x1.d9b4f4p-58f, 0.0f, 0.0f, 0x1.be997cp-117f,
     0x1.043d3ap-40f, 0.0f, 0x1.0b5b26p-35f, 0.0f, 0x1.10529cp-55f, 0.0f,
     0x1.355bb2p-117f, 0.0f, 0x1.58ebb6p-65f, 0.0f, 0x1.fff70ep-102f, 0x1.a31904p-28f,
     0.0f, 0x1.ee19dcp-121f, 0x1.50dba8p-18f, 0x1.f83c24p-112f, 0x1.bd2db6p-62f, 0.0f,
     0.0f, 0x1.9a0efcp-70f, 0.0f, 0.0f, 0.0f, 0x1.749768p-103f, 0.0f, 0x1.339e4cp-13f,
     0x1.633f62p-81f, 0x1.6907bcp-42f, 0.0f, 0.0f, 0.0f, 0x1.4f0f5ep-5f,
     0x1.28194ap-4f, 0.0f, 0x1.9f1876p-89f, 0x1.71c854p-21f, 0x1.46eb12p-123f,
     0x1.92407ep-25f, 0x1.1d25b2p-83f, 0.0f, 0x1.ab1ba6p-38f, 0x1.0ebb94p-75f,
     0x1.cbc0d6p-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.277632p-88f, 0.0f, 0x1.b604p-110f,
     0x1.359ddap-61f, 0x1.c0055cp-63f, 0.0f, 0.0f, 0x1.eaca58p-115f, 0x1.27e6bep-102f,
     0.0f, 0x1.03b6e6p-50f, 0x1.2a69a8p-116f, 0.0f, 0.0f, 0x1.b6da54p-18f,
     0x1.bf1c5cp-12f, 0.0f, 0x1.eaf12p-84f, 0.0f, 0x1.4c12f2p-126f, 0x1.729c8ap-125f,
     0x1.a967a6p-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6e0432p-59f,
     0x1.78fbf8p-121f, 0.0f, 0x1.812bfep-57f, 0.0f, 0x1.4f954p-44f, 0.0f, 0.0f,
     0x1.e115eep-96f, 0.0f, 0x1.e291fap-59f, 0.0f, 0x1.a2d24cp-54f, 0x1.5640a6p-86f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.082a7cp-44f, 0x1.36588ep-77f,
     0x1.17c96cp-125f, 0x1.c6cc0ap-43f, 0x1.692716p-94f, 0.0f, 0.0f, 0.0f,
     0x1.d81702p-95f, 0x1.ae186cp-9f, 0.0f, 0x1.902c5cp-16f, 0x1.607db4p-18f, 0.0f,
     0x1.6f6814p-82f, 0.0f, 0x1.babf9ep-50f, 0.0f, 0x1.b5b3ccp-84f, 0.0f, 0.0f, 0.0f,
     0x1.d59718p-112f, 0.0f, 0x1.11b83cp-37f, 0.0f, 0.0f, 0.0f, 0x1.f850ccp-10f,
     0x1.5efb5ep-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.beea2p-33f,
     0x1.d5ec2ep-116f, 0x1.5b7088p-39f, 0.0f, 0x1.7f0552p-29f, 0.0f, 0x1.b5710cp-21f,
     0.0f, 0.0f, 0.0f, 0x1.d0da5ap-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8461ccp-101f, 0x1.37221ap-24f, 0.0f, 0.0f, 0.0f, 0x1.07322p-36f, 0.0f,
     0x1.1c3192p-47f, 0x1.4689cp-123f, 0.0f, 0.0f, 0.0f, 0x1.2cea22p-71f, 0.0f,
     0x1.a98ed4p-40f, 0.0f, 0.0f, 0x1.4438a8p-35f, 0x1.7660f4p-123f, 0.0f, 0.0f,
     0x1.83b50ap-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.631338p-33f, 0.0f,
     0x1.434cf4p-35f, 0.0f, 0x1.f82b4ap-76f, 0x1.21b6ap-2f, 0.0f, 0.0f,
     0x1.993afap-32f, 0x1.2892bap-15f, 0.0f, 0.0f, 0.0f, 0x1.341968p-42f,
     0x1.2a7f2ep-101f, 0.0f, 0x1.560e1cp-114f, 0x1.8d2538p-20f, 0x1.ad17eap-108f,
     0x1.0649fap-99f, 0.0f, 0.0f, 0x1.62bcf2p-7f, 0x1.e49b2ap-65f, 0.0f, 0.0f,
     0x1.6acfeap-76f, 0.0f, 0x1.776514p-101f, 0.0f, 0.0f, 0x1.2af2p-82f,
     0x1.7ed008p-94f, 0.0f, 0x1.bd4fd8p-10f, 0.0f, 0.0f, 0x1.67d3e4p-107f, 0.0f, 0.0f,
     0x1.6a5688p-41f, 0x1.925166p-15f, 0x1.d26474p-9f, 0.0f, 0x1.8646f4p-21f,
     0x1.3e332cp-42f, 0x1p0f, 0.0f, 0x1.34c7a4p-119f, 0x1.0e55f2p-17f,
     0x1.e667b6p-92f, 0x1.eeff5cp-54f, 0.0f, 0x1.87dd86p-56f, 0.0f, 0.0f, 0.0f,
     0x1p0f, 0x1.b24b76p-68f, 0.0f, 0.0f, 0x1.d88018p-121f, 0.0f, 0x1.bb826cp-65f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.796452p-41f, 0x1.d8e47ap-101f,
     0x1.528f96p-100f, 0.0f, 0x1.a4fe52p-102f, 0x1.a27bfcp-126f, 0x1p0f, 0.0f,
     0x1.39fb54p-86f, 0x1.cc8498p-105f, 0.0f, 0x1.3a91f2p-18f, 0x1.0b3044p-53f, 0.0f,
     0x1.483978p-52f, 0.0f, 0x1.138db4p-60f, 0.0f, 0x1.ec5088p-122f, 0x1.b1c48p-56f,
     0x1.1bb2dcp-101f, 0.0f, 0x1.5b1c52p-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bb0348p-53f, 0x1.2e2ce2p-1f, 0x1.f75042p-123f, 0.0f, 0.0f, 0x1.67c7d6p-68f,
     0.0f, 0x1.cf9fbap-117f, 0.0f, 0x1.a7dceap-88f, 0x1.e6f45ep-44f, 0x1.024f58p-37f,
     0x1.3bcf22p-26f, 0.0f, 0.0f, 0x1.263318p-99f, 0.0f, 0.0f, 0x1p0f,
     0x1.8b9daap-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2e9e68p-6f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7045f2p-120f, 0x1.3a82cep-36f, 0.0f, 0x1.b14d5ap-78f, 0.0f, 0.0f,
     0x1.44962p-53f, 0x1.645e7p-23f, 0.0f, 0x1.e604dap-100f, 0x1.705446p-46f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c15e6p-12f, 0x1.c12d6ap-84f, 0x1.fcea3p-53f,
     0x1.2fad0ep-97f, 0x1.53091ep-104f, 0x1.221412p-83f, 0x1.1f09eap-123f,
     0x1.311edap-56f, 0x1.fcf04p-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0be6bap-43f,
     0x1.30b944p-13f, 0.0f, 0x1.ed8488p-95f, 0.0f, 0.0f, 0.0f, 0x1.add1c4p-106f, 0.0f,
     0x1.3ab9a8p-85f, 0x1.59be1p-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9539b8p-74f, 0.0f, 0.0f, 0x1.70fd82p-44f, 0.0f, 0.0f, 0x1.ae998ep-122f,
     0x1.d7a4dp-28f, 0x1.34822ap-25f, 0x1.42c138p-23f, 0.0f, 0.0f, 0x1.9f5fdep-45f,
     0x1.570c76p-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6ff83ap-37f, 0.0f, 0x1.86430ep-76f,
     0.0f, 0x1.ae0466p-8f, 0.0f, 0.0f, 0x1.28ce62p-23f, 0x1.afbda4p-111f,
     0x1.b68be6p-111f, 0x1.bfe062p-17f, 0.0f, 0.0f, 0.0f, 0x1.89d3b8p-30f, 0.0f,
     0x1.548bd4p-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3d6efap-28f, 0.0f, 0.0f,
     0x1.43f8fcp-40f, 0.0f, 0.0f, 0x1.8da702p-31f, 0x1.8db7d2p-67f, 0.0f,
     0x1.b8d7dap-19f, 0.0f, 0x1.d1d052p-28f, 0.0f, 0x1.a27588p-3f, 0.0f, 0.0f, 0.0f,
     0x1.3f6a3p-121f, 0x1.077034p-64f, 0x1.c1f096p-58f, 0.0f, 0x1.e75178p-68f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.65bbbp-79f, 0x1.11b0ecp-72f, 0x1.61b438p-118f,
     0x1.88bd8ap-56f, 0x1.4ec4d2p-105f, 0.0f, 0x1.c0c59p-70f, 0x1.7e608ap-76f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.989ed6p-61f, 0x1.831b78p-53f, 0.0f, 0x1.96308ap-101f,
     0x1.708de4p-23f, 0.0f, 0x1.ca7566p-126f, 0.0f, 0x1.6deeacp-64f, 0x1.08fdc4p-79f,
     0x1.5afab2p-23f, 0x1.8f9756p-55f, 0x1.3c7bb6p-1f, 0x1.ef63ecp-22f, 0.0f, 0.0f,
     0x1.27db6p-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.98d3e4p-76f, 0.0f, 0x1.dd41b8p-32f,
     0.0f, 0x1.46cfap-61f, 0.0f, 0x1.832352p-71f, 0x1.5bf6ep-106f, 0x1.bfa11ep-50f,
     0x1.c10106p-62f, 0.0f, 0x1.2592b2p-17f, 0x1.c173ccp-38f, 0.0f, 0x1.2342fcp-60f,
     0.0f, 0x1.cbdf1cp-124f, 0x1.b62704p-49f, 0x1.ce648ep-42f, 0.0f, 0.0f,
     0x1.f38d06p-70f, 0x1.5cbb1ep-52f, 0x1.0186b2p-12f, 0.0f, 0.0f, 0x1.385c6ep-45f,
     0x1.576aa2p-25f, 0.0f, 0x1.28e8aep-85f, 0x1.f80adep-2f, 0x1p-116f,
     0x1.a642ep-20f, 0x1.fb9d36p-97f, 0.0f, 0x1.b03e2ap-70f, 0x1.1b681cp-36f, 0.0f,
     0x1.8ee9b8p-83f, 0x1.1d34ap-117f, 0x1.ae1198p-79f, 0x1.3fccp-68f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0feae6p-99f, 0x1.75808ap-3f, 0x1.e65084p-46f,
     0.0f, 0x1.210a1ap-113f, 0.0f, 0x1.c0c5d8p-28f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2da512p-4f, 0x1.9bcd8ep-25f, 0x1.f80cdp-88f, 0.0f, 0x1.47d134p-49f,
     0x1.bc978p-27f, 0.0f, 0x1.1a7be4p-122f, 0x1.56576ep-10f, 0.0f, 0.0f,
     0x1.384a04p-8f, 0.0f, 0x1.5c00bcp-29f, 0x1.365132p-34f, 0x1.75189ep-116f, 0.0f,
     0x1.b2058cp-37f, 0x1.bdfba4p-14f, 0.0f, 0x1.d79172p-125f, 0x1.192c78p-71f,
     0x1.07608p-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cb6a54p-125f, 0.0f, 0.0f,
     0x1.300f6ep-88f, 0x1.647038p-94f, 0x1.796af8p-45f, 0x1.70f466p-59f, 0.0f,
     0x1.cc94bep-23f, 0x1.361d18p-76f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d1037ep-103f, 0.0f, 0.0f, 0x1.f58f94p-93f, 0.0f, 0x1.75f22p-11f, 0.0f,
     0x1.1ae008p-28f, 0.0f, 0.0f, 0x1.10fbdap-56f, 0.0f, 0x1.64b65ap-40f, 0.0f, 0.0f,
     0.0f, 0x1.eb7bbep-8f, 0x1.1ca42ap-77f, 0x1.1ba29ap-71f, 0x1.097c2cp-11f, 0.0f,
     0.0f, 0x1.2abf3ap-68f, 0.0f, 0.0f, 0.0f, 0x1.13475p-107f, 0.0f, 0x1.98b942p-125f,
     0x1.b4b76p-98f, 0.0f, 0x1.ffa5bp-39f, 0x1.846d42p-47f, 0x1.451b7p-8f,
     0x1.cad96ep-33f, 0.0f, 0x1.dce5b8p-112f, 0x1.7321dap-26f, 0.0f, 0.0f, 0.0f,
     0x1.f81fa8p-76f, 0.0f, 0.0f, 0.0f, 0x1.77ea6cp-18f, 0.0f, 0x1.b10f2p-99f, 0.0f,
     0x1.20a7ap-99f, 0.0f, 0.0f, 0.0f, 0x1.45a8a6p-84f, 0x1.b97d7ep-94f, 0.0f,
     0x1.7db68ap-56f, 0.0f, 0.0f, 0.0f, 0x1.1bbf2p-83f, 0x1.90260ap-107f,
     0x1.99bd44p-2f, 0.0f, 0x1.92b4b2p-83f, 0.0f, 0x1.b77d3cp-80f, 0x1.de72b8p-34f,
     0.0f, 0x1.34f632p-80f, 0x1.e84ddap-6f, 0x1.5de18ep-70f, 0.0f, 0.0f,
     0x1.e10ce4p-94f, 0x1.87f98p-78f, 0x1.a2809cp-57f, 0x1.d87d94p-104f,
     0x1.22b364p-57f, 0.0f, 0.0f, 0x1.ce3da4p-61f, 0x1.1fdab4p-79f, 0.0f, 0.0f,
     0x1.b8c29p-126f, 0.0f, 0.0f, 0x1.2beadcp-82f, 0x1.e7592cp-46f, 0x1.18d2ecp-19f,
     0.0f, 0x1.6030dp-58f, 0.0f, 0.0f, 0.0f, 0x1.83e102p-89f, 0.0f, 0x1.9d282p-101f,
     0x1.3d520ep-7f, 0.0f, 0x1.902dacp-42f, 0.0f, 0.0f, 0x1.d5d3eep-102f,
     0x1.3a75a4p-48f, 0x1.caed82p-64f, 0x1p0f, 0x1.bb7b96p-115f, 0x1.0685eep-37f,
     0.0f, 0.0f, 0x1.63ad1p-85f, 0.0f, 0x1.c1490ep-101f, 0x1.334448p-98f, 0.0f, 0.0f,
     0.0f, 0x1.c6ed42p-101f, 0.0f, 0.0f, 0x1.604fcp-70f, 0.0f, 0.0f, 0x1.63b7bep-111f,
     0x1.347b7cp-42f, 0x1.f12604p-9f, 0.0f, 0x1.a2f294p-40f, 0x1.baf9ecp-91f, 0.0f,
     0x1.b5fd6cp-26f, 0x1.102d8ap-20f, 0x1.9ce5aap-94f, 0x1.c69424p-12f, 0.0f,
     0x1.76014ep-100f, 0x1.7c0106p-52f, 0x1.5ce9f8p-91f, 0.0f, 0.0f, 0x1.69168p-39f,
     0.0f, 0.0f, 0.0f, 0x1.c417d6p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.98ad74p-117f, 0.0f, 0x1.07bd2ep-118f, 0x1.2a53eep-85f, 0x1.5e38b6p-72f,
     0x1.3dd784p-81f, 0.0f, 0x1.335188p-44f, 0.0f, 0.0f, 0x1.0bbdcep-16f,
     0x1.376092p-103f, 0x1.9381c4p-29f, 0.0f, 0x1.575b8ap-20f, 0.0f, 0x1.3fdf8ap-55f,
     0.0f, 0.0f, 0.0f, 0x1.345f08p-97f, 0x1.bd4202p-41f, 0x1.975b82p-32f,
     0x1.d246a2p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0b2a64p-109f, 0.0f, 0x1.9b4b5cp-82f,
     0x1.458d5ap-19f, 0x1.f2485ep-58f, 0.0f, 0x1.3afd16p-32f, 0.0f, 0x1.4cde8ap-89f,
     0x1.7a0bdp-16f, 0x1.44029p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6fe704p-113f,
     0x1.12e852p-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dff2dap-85f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cd9cb2p-84f, 0.0f, 0x1.dc53e2p-122f, 0x1.dd0556p-43f, 0.0f, 0.0f,
     0x1.309cap-85f, 0x1.3cb21cp-97f, 0.0f, 0x1.43bc5ap-116f, 0x1.fbc9f2p-96f, 0.0f,
     0x1.8b1bd4p-105f, 0.0f, 0.0f, 0x1.126458p-78f, 0.0f, 0x1.ef35ap-66f,
     0x1.ba409p-25f, 0.0f, 0.0f, 0x1.9adcep-123f, 0.0f, 0.0f, 0x1.64dcf6p-84f, 0.0f,
     0.0f, 0x1.38ed34p-76f, 0x1.f674e4p-19f, 0.0f, 0.0f, 0x1.c772bp-82f,
     0x1.ae94f6p-17f, 0.0f, 0x1.7cd182p-123f, 0x1.b8f3ecp-8f, 0x1.df2f1ap-114f, 0.0f,
     0x1.51165ep-122f, 0x1.e25f84p-76f, 0x1.898d52p-64f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.528376p-96f, 0.0f, 0.0f, 0.0f, 0x1.d61072p-114f, 0.0f, 0x1.a300d8p-25f, 0.0f,
     0.0f, 0.0f, 0x1.8c78ecp-16f, 0x1.c6baecp-75f, 0x1.55d6dp-104f, 0.0f,
     0x1.cf43ccp-15f, 0.0f, 0.0f, 0x1.85cea2p-86f, 0x1.390c2ep-55f, 0.0f,
     0x1.843dbp-74f, 0.0f, 0.0f, 0x1.b1610ap-107f, 0x1.d9b838p-117f, 0x1.c84e1p-115f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5a6124p-62f, 0.0f, 0.0f
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
            tmp1 = Sleef_finz_sinpif4_u05avx2128(tmp0);
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
    printf("Sleef_finz_sinpif4_u05avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_sinpif4_u05avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
