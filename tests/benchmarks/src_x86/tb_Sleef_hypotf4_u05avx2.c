/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_hypotf4_u05avx2128.c --function Sleef_hypotf4_u05avx2128 \
 *     --arity 2 --headers sleef.h,ml_support_lib.h --input-formats \
 *     binary32,binary32 --vector-size 4 --function-input-vector-size 4 \
 *     --bench --no-embedded-bin --target x86_avx2128
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
     0.0f, 0.0f, 0x1.7e7506p-126f, 0x1.d2b658p-44f, 0x1.9f3f8ep-78f, 0.0f,
     0x1.bc1afp-13f, 0x1.64ff8p-41f, 0.0f, 0.0f, 0x1p0f, 0x1.ff34c4p-20f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.5fe5b4p-20f, 0x1.8273d4p-54f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5bda1p-123f, 0.0f, 0.0f, 0x1.42b2e6p-72f, 0x1.05a07ap-107f, 0x1.a9e01ep-88f,
     0.0f, 0x1.22e942p-26f, 0x1.7b5bbep-120f, 0x1.623bdap-27f, 0.0f, 0.0f, 0.0f,
     0x1.972f96p-54f, 0x1.b7430cp-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.df1db4p-113f,
     0.0f, 0.0f, 0x1.e11cbp-111f, 0.0f, 0x1.a80e5ep-86f, 0x1.016dd6p-107f, 0.0f, 0.0f,
     0x1.55ad9cp-75f, 0.0f, 0.0f, 0x1.706416p-107f, 0.0f, 0x1.47eac8p-46f,
     0x1.bbe968p-57f, 0.0f, 0x1.9feccap-54f, 0.0f, 0.0f, 0x1.6308b6p-115f, 0x1p0f,
     0.0f, 0x1.a3b482p-120f, 0x1.eef1a2p-99f, 0x1.09057cp-115f, 0.0f, 0x1.f98e38p-4f,
     0x1.79bbb6p-100f, 0.0f, 0.0f, 0x1.28dc9ap-9f, 0x1.8380fep-110f, 0x1.8f7f28p-82f,
     0x1.a9f676p-84f, 0x1.cb1caep-53f, 0.0f, 0x1.3452d8p-92f, 0x1.2630aep-85f, 0.0f,
     0x1.27a058p-27f, 0.0f, 0.0f, 0x1.7af0ep-9f, 0x1.07dba6p-107f, 0x1.267f8cp-74f,
     0x1.a7a888p-80f, 0x1.05ae48p-54f, 0x1.9e6d7p-125f, 0x1.5f19bep-74f,
     0x1.5c519p-40f, 0.0f, 0.0f, 0x1.86e5d4p-2f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.39832cp-107f, 0.0f, 0.0f, 0x1.d1a1f2p-45f, 0x1.d58fc4p-87f, 0x1.abeb2ap-46f,
     0.0f, 0x1.f6018cp-78f, 0x1.d136ap-26f, 0.0f, 0x1.e840acp-64f, 0x1.7de93p-122f,
     0.0f, 0.0f, 0x1.ce5362p-22f, 0.0f, 0x1.3d4656p-39f, 0x1.2e3f96p-88f, 0.0f,
     0x1.45ea72p-1f, 0x1.7d378cp-64f, 0.0f, 0x1.8da852p-97f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.1e14cap-68f, 0x1.c312cap-101f, 0.0f, 0.0f, 0x1.6ba9fp-94f,
     0x1.4cc5d6p-2f, 0.0f, 0x1.bfe90ap-10f, 0.0f, 0.0f, 0x1.d280a6p-63f,
     0x1.99b2b8p-36f, 0x1.6c3a1ap-121f, 0.0f, 0.0f, 0.0f, 0x1.b863ep-55f,
     0x1.f9b422p-119f, 0x1.3b2db6p-25f, 0.0f, 0x1.0c713ep-59f, 0.0f, 0x1.c0d226p-61f,
     0.0f, 0x1.a16724p-72f, 0.0f, 0x1.1c84dp-50f, 0x1.420ecp-31f, 0.0f, 0.0f,
     0x1.e9916cp-27f, 0x1.db80d8p-12f, 0x1.88ee8p-126f, 0.0f, 0.0f, 0x1.6f2be2p-18f,
     0x1.0603cp-49f, 0.0f, 0x1.942feap-19f, 0x1.f7f91p-39f, 0x1.19defep-94f, 0.0f,
     0.0f, 0.0f, 0x1.b34666p-121f, 0x1.6c4c1cp-95f, 0.0f, 0x1.dfa668p-9f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cd2f22p-109f, 0x1.053446p-99f,
     0x1.0e732cp-122f, 0.0f, 0.0f, 0.0f, 0x1.176726p-92f, 0x1.f4292ep-67f, 0.0f, 0.0f,
     0x1.c04e16p-45f, 0x1.f7f92p-113f, 0x1.cb85f6p-21f, 0x1.f2aa64p-103f,
     0x1.bfa77ep-10f, 0x1.b4df86p-84f, 0x1.a402acp-77f, 0x1.75c008p-69f,
     0x1.283d64p-15f, 0x1.33ea5cp-103f, 0.0f, 0x1.94436ap-10f, 0x1.8d1f3ap-103f,
     0x1.5bf1dap-51f, 0.0f, 0x1.a4b612p-12f, 0x1.e147e8p-80f, 0.0f, 0x1.314bb8p-118f,
     0.0f, 0.0f, 0x1.4b9ef6p-104f, 0.0f, 0x1.489d1ep-123f, 0x1.1b8edp-70f, 0.0f,
     0x1.1f373cp-41f, 0.0f, 0.0f, 0.0f, 0x1.8c79cap-11f, 0.0f, 0x1.431d1cp-55f,
     0x1.0d1c58p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.96e36p-20f, 0.0f, 0.0f, 0.0f,
     0x1.d54828p-41f, 0x1.be7a3ep-23f, 0x1.aa7a6ep-21f, 0.0f, 0.0f, 0x1.3577f2p-80f,
     0.0f, 0.0f, 0x1.00e4e8p-49f, 0x1.253b04p-67f, 0x1.41a9bep-92f, 0x1.ae4aacp-62f,
     0.0f, 0x1.8c6cecp-110f, 0.0f, 0.0f, 0x1.ae3c34p-58f, 0x1.3d6816p-51f,
     0x1.7c9e58p-58f, 0.0f, 0x1.aa784cp-66f, 0x1.45eb5p-67f, 0x1.be80dep-41f, 0.0f,
     0.0f, 0x1.382fccp-89f, 0x1.6e0062p-106f, 0x1.a048bcp-120f, 0x1.9958c2p-125f,
     0x1.4ed69ap-111f, 0x1.37f22p-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.776894p-8f,
     0x1.786438p-74f, 0x1.ca6052p-107f, 0x1.2a1846p-65f, 0.0f, 0x1.fb093p-18f, 0.0f,
     0.0f, 0x1.ea40eap-48f, 0.0f, 0.0f, 0.0f, 0x1.4f29dp-76f, 0x1.25b5d4p-42f,
     0x1.87555ap-114f, 0.0f, 0.0f, 0.0f, 0x1.379278p-66f, 0x1.5e5ebcp-91f,
     0x1.3d8452p-108f, 0x1.46c7cap-71f, 0x1.b7938ap-14f, 0x1.0e769p-71f,
     0x1.454cfep-126f, 0.0f, 0.0f, 0x1.48fca8p-4f, 0x1.b0a0e4p-33f, 0x1.c1895ep-74f,
     0x1.33cb82p-87f, 0.0f, 0.0f, 0x1.943fb6p-108f, 0x1.85ab34p-60f, 0.0f, 0.0f,
     0x1.1eca62p-88f, 0x1.5b6792p-7f, 0x1.7ce606p-89f, 0x1.719ac8p-64f, 0.0f, 0.0f,
     0x1.a78df8p-104f, 0.0f, 0.0f, 0x1.d7cdc2p-57f, 0.0f, 0.0f, 0x1.cb3972p-44f, 0.0f,
     0.0f, 0.0f, 0x1.85efeap-96f, 0.0f, 0.0f, 0.0f, 0x1.0db68p-37f, 0x1.5c21e4p-79f,
     0x1.8bfb58p-9f, 0x1.c14fbcp-42f, 0x1.1c6feep-100f, 0.0f, 0x1.9eff9ep-4f,
     0x1.60e1cap-124f, 0.0f, 0x1.9f8386p-80f, 0x1.525302p-28f, 0x1.cdccaap-98f,
     0x1.4d8b8ep-81f, 0x1.5f3a98p-37f, 0.0f, 0.0f, 0x1.a1ed64p-21f, 0x1.144758p-82f,
     0.0f, 0.0f, 0.0f, 0x1.d04432p-64f, 0.0f, 0.0f, 0x1.55bb22p-10f, 0.0f,
     0x1.14f458p-57f, 0.0f, 0x1.bd0deep-107f, 0x1.736c42p-63f, 0x1.ec985ep-53f,
     0x1.a13dc2p-27f, 0x1.5ac7f6p-95f, 0.0f, 0.0f, 0.0f, 0x1.d7f604p-22f,
     0x1.cdace2p-121f, 0x1.d2687p-40f, 0.0f, 0x1.bb12f8p-112f, 0x1.d5e888p-101f,
     0x1.781a2ep-102f, 0x1.62a0e2p-35f, 0x1.a6b244p-29f, 0.0f, 0.0f, 0x1.811b58p-24f,
     0.0f, 0x1.1d6a78p-65f, 0.0f, 0.0f, 0.0f, 0x1.7c43f4p-49f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e1691ap-86f, 0.0f, 0.0f, 0.0f, 0x1.f2fa52p-40f, 0.0f,
     0x1.8beb18p-35f, 0.0f, 0.0f, 0.0f, 0x1.84ec04p-100f, 0x1.2d0864p-120f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.dcfcap-77f, 0.0f, 0.0f, 0x1.b9a648p-118f, 0x1.5ead6ep-65f,
     0x1.3088eep-14f, 0.0f, 0.0f, 0.0f, 0x1.c334ecp-63f, 0.0f, 0.0f, 0.0f,
     0x1.6baf3ap-8f, 0x1.0ec8p-59f, 0.0f, 0x1.38b4fep-42f, 0.0f, 0x1.80addep-48f,
     0x1.ef26e4p-124f, 0.0f, 0x1.c5b204p-31f, 0.0f, 0x1.4df9cep-87f, 0.0f,
     0x1.065422p-76f, 0.0f, 0.0f, 0.0f, 0x1.bb228ep-89f, 0x1.a5d7dap-66f, 0.0f,
     0x1.2e0e7ep-84f, 0x1.2ce386p-76f, 0x1.520be6p-72f, 0x1.e24ad4p-59f, 0.0f,
     0x1.5f980cp-114f, 0.0f, 0x1.ad71eap-49f, 0.0f, 0.0f, 0x1.24442cp-111f,
     0x1.d8bc8ep-73f, 0.0f, 0x1.76ec7ep-104f, 0.0f, 0x1.fd8792p-60f, 0.0f,
     0x1.6e5d46p-37f, 0x1.1d9c74p-43f, 0.0f, 0.0f, 0x1.27a19ep-123f, 0x1.ee18dep-38f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.089d88p-6f, 0.0f, 0x1.7f118ap-77f, 0x1.413414p-52f,
     0.0f, 0x1.7c7f18p-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.90408ep-125f, 0.0f,
     0.0f, 0.0f, 0x1.bc0e42p-121f, 0x1.afaa26p-121f, 0.0f, 0.0f, 0x1.9473aep-104f,
     0.0f, 0.0f, 0x1.dc8c3ap-49f, 0x1.b22286p-57f, 0x1.3b63d8p-19f, 0.0f,
     0x1.c60d2ap-87f, 0x1.0c8392p-78f, 0.0f, 0.0f, 0x1.37c48p-88f, 0.0f, 0.0f, 0.0f,
     0x1.dbb132p-107f, 0x1.71a9ap-60f, 0.0f, 0.0f, 0x1.11ae32p-54f, 0x1.01a8bep-125f,
     0x1.66df74p-19f, 0x1.e4bdc4p-37f, 0x1.688638p-123f, 0x1.a354a4p-31f, 0.0f, 0.0f,
     0x1.0bafb2p-2f, 0x1.4d1706p-126f, 0x1.cdfbcap-119f, 0.0f, 0.0f, 0x1.051692p-106f,
     0x1.07d6aep-79f, 0x1.8cfa74p-21f, 0.0f, 0x1.4f749cp-11f, 0.0f, 0.0f,
     0x1.036174p-14f, 0.0f, 0.0f, 0x1.e6d1dep-6f, 0.0f, 0x1.9d736cp-95f,
     0x1.ea933ap-104f, 0x1.672caap-46f, 0x1.da0ce4p-2f, 0x1.10c8c8p-31f,
     0x1.e51e76p-102f, 0x1.c422ccp-43f, 0x1.6ac0f4p-94f, 0x1.fbac74p-62f, 0.0f, 0.0f,
     0.0f, 0x1.fb5d9ap-99f, 0x1.183378p-123f, 0.0f, 0x1.05f8fcp-15f, 0x1.025ecp-16f,
     0x1.2c03eap-10f, 0.0f, 0.0f, 0.0f, 0x1.74e644p-2f, 0x1.9803aap-40f,
     0x1.5df32ap-83f, 0x1.7eda46p-94f, 0x1.2c09e2p-75f, 0x1.105ff6p-64f,
     0x1.5f4764p-25f, 0.0f, 0.0f, 0x1.f20db6p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f,
     0x1.131eep-69f, 0x1.36b85p-65f, 0x1.d473a4p-68f, 0.0f, 0x1.4b8cccp-118f, 0.0f,
     0x1.13df2cp-6f, 0.0f, 0x1.94cd54p-125f, 0.0f, 0x1.a78b6ap-3f, 0.0f, 0.0f, 0.0f,
     0x1.fe8b9cp-44f, 0x1.33dc4ep-123f, 0.0f, 0x1.442c6ep-63f, 0.0f, 0x1.2ecaa8p-85f,
     0x1.8b310ep-113f, 0.0f, 0.0f, 0x1.802caep-124f, 0.0f, 0.0f, 0.0f,
     0x1.c5a412p-80f, 0.0f, 0x1.0baa82p-2f, 0x1.e43974p-81f, 0x1.2d0726p-33f,
     0x1.37c88ap-38f, 0x1.6232c6p-61f, 0x1.f967a6p-22f, 0x1.835a64p-9f, 0.0f, 0.0f,
     0x1.66135ep-111f, 0.0f, 0x1.b9aa36p-26f, 0.0f, 0.0f, 0.0f, 0x1.67119ap-110f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c4af3ep-50f, 0.0f, 0x1.0e4528p-24f, 0.0f,
     0x1.b689bcp-3f, 0x1.592ebp-27f, 0x1.48da64p-40f, 0.0f, 0x1.ff95c8p-124f, 0.0f,
     0x1.3d1306p-59f, 0x1.f516d8p-100f, 0x1.283912p-46f, 0x1.ff00cp-124f,
     0x1.bb1976p-115f, 0x1.9a541p-71f, 0x1.89b56ap-46f, 0x1.4dec72p-45f,
     0x1.89ba3p-38f, 0.0f, 0.0f, 0x1.f1becep-31f, 0.0f, 0.0f, 0x1.cfad0cp-17f,
     0x1.450388p-51f, 0x1.3a302ap-29f, 0x1.98c93ap-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.fb8ad2p-39f, 0.0f, 0x1.cb234cp-98f, 0.0f, 0x1.0e1778p-32f,
     0x1.9052b2p-33f, 0.0f, 0x1.720182p-56f, 0.0f, 0x1.b78ac4p-61f, 0.0f,
     0x1.da4684p-103f, 0x1.3a2eb4p-69f, 0x1.3a255ep-106f, 0x1.6ef7bep-61f, 0.0f, 0.0f,
     0.0f, 0x1.9c5b4cp-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9acfbep-40f, 0x1.81d04p-14f,
     0x1.363096p-23f, 0x1.e1e95ap-43f, 0x1.4c371cp-99f, 0.0f, 0.0f, 0x1.bbc856p-50f,
     0.0f, 0.0f, 0x1.730b7ap-61f, 0x1p0f, 0x1.5ba42ap-9f, 0.0f, 0x1.67138ap-104f,
     0x1.e975c6p-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c30c62p-36f, 0x1.3570bep-7f, 0x1p0f,
     0x1.ffadf4p-10f, 0.0f, 0x1.0c9a64p-83f, 0.0f, 0x1.eba47ep-82f, 0.0f, 0.0f,
     0x1.87fc0cp-112f, 0x1.f85604p-43f, 0x1.220e0ap-3f, 0x1.bb89ap-95f,
     0x1.54fcfap-72f, 0.0f, 0x1.510d3ep-87f, 0.0f, 0x1.4081c6p-114f, 0.0f, 0.0f,
     0x1.7ac6a4p-57f, 0x1.d18dc4p-2f, 0.0f, 0x1.ab69e2p-41f, 0x1.359542p-38f, 0.0f,
     0x1.1cecd2p-107f, 0x1.c06ba6p-29f, 0x1.c9e9d2p-45f, 0.0f, 0.0f, 0x1.0c9cbap-114f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.031eep-100f, 0.0f, 0x1.1d3424p-63f, 0x1.101436p-24f,
     0x1.b8a24cp-125f, 0.0f, 0x1.9f055ep-125f, 0.0f, 0.0f, 0.0f, 0x1.9a366ap-89f,
     0x1.ea4574p-52f, 0.0f, 0.0f, 0.0f, 0x1.867ab2p-109f, 0x1.304cb8p-4f,
     0x1.733268p-22f, 0.0f, 0x1.f0541cp-89f, 0x1.b2c5acp-115f, 0.0f, 0x1.75cd48p-26f,
     0x1.d38f68p-29f, 0.0f, 0.0f, 0.0f, 0x1.532468p-104f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ae254cp-36f, 0x1.72473cp-79f, 0.0f, 0x1.1cb448p-79f, 0.0f, 0x1.47823cp-79f,
     0.0f, 0.0f, 0x1.01620ap-36f, 0.0f, 0.0f, 0x1.dc7ad4p-31f, 0.0f, 0.0f,
     0x1.76f1cap-111f, 0x1.b66b6p-37f, 0.0f, 0x1.508a8ep-107f, 0x1.87494cp-99f, 0.0f,
     0x1.d52edp-104f, 0.0f, 0.0f, 0x1.dff8e8p-22f, 0x1.d93d32p-125f, 0.0f,
     0x1.37cb76p-50f, 0.0f, 0x1.931d4ep-80f, 0x1.7b59bap-19f, 0x1.3f2acap-61f, 0.0f,
     0x1.bef8f8p-48f, 0.0f, 0x1.565424p-24f, 0x1.7db348p-81f, 0x1.1b6f26p-103f, 0.0f,
     0x1.5572b4p-115f, 0.0f, 0x1.a2f80ap-74f, 0.0f, 0x1.12edbp-24f, 0x1.702142p-96f,
     0x1.5c6402p-58f, 0.0f, 0.0f, 0x1.56bcdep-87f, 0.0f, 0.0f, 0.0f, 0x1.c4332p-89f,
     0x1.3a87fp-29f, 0.0f, 0x1.6f585ep-42f, 0x1.3049dap-36f, 0x1.ae196p-96f,
     0x1.e74ec2p-40f, 0x1.ee2cb4p-31f, 0.0f, 0x1.a19356p-56f, 0x1.738ef4p-80f,
     0x1.9a16b4p-80f, 0x1.27ede2p-109f, 0.0f, 0.0f, 0x1.289f7p-119f, 0.0f,
     0x1.ca449p-10f, 0x1.38cee8p-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5e172p-39f, 0x1.6fe766p-57f, 0.0f, 0.0f, 0x1.f8adccp-108f, 0.0f, 0.0f,
     0x1.cf2904p-46f, 0x1.a31beep-107f, 0x1.0a4eeep-44f, 0x1.dacd4p-118f,
     0x1.9deab2p-112f, 0x1.ddfe3ap-17f, 0.0f, 0.0f, 0.0f, 0x1.dba722p-40f,
     0x1.03c55cp-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f123bcp-5f, 0x1.a92a44p-23f,
     0.0f, 0.0f, 0x1.24d51cp-16f, 0.0f, 0x1.a669cap-59f, 0x1.ecba38p-4f,
     0x1.506a7ep-67f, 0x1.0fe96ep-101f, 0x1.627ee6p-40f, 0x1.d3bed2p-122f,
     0x1.5a883ap-106f, 0x1.35acb2p-22f, 0x1.a22a68p-73f, 0x1.d189a2p-16f,
     0x1.1906eap-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1e044cp-123f, 0x1.27bda2p-61f,
     0x1.135c12p-61f, 0x1.256a6ap-68f, 0.0f, 0x1.66b6ep-85f, 0.0f, 0.0f,
     0x1.281086p-105f, 0x1.00711p-81f, 0.0f, 0.0f, 0.0f, 0x1.4ecc16p-80f,
     0x1.502fe4p-119f, 0x1.db521ep-50f, 0x1.389298p-28f, 0x1.c22f4p-34f, 0.0f,
     0x1.e6ad5p-83f, 0x1.944a7p-41f, 0.0f, 0x1.9343cep-91f, 0x1.3619aap-56f,
     0x1.78827ap-87f, 0x1.0d1022p-32f, 0.0f, 0x1.ec3f98p-117f, 0x1.678c2p-105f,
     0x1.e8302cp-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5014p-18f, 0.0f, 0.0f,
     0x1.6f385p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c93378p-126f, 0.0f,
     0x1.8af48p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3312c8p-58f, 0x1.9a5762p-77f,
     0x1.e22824p-3f, 0x1.0cf0aap-27f, 0x1.01a11ap-85f, 0.0f, 0x1.c5d7acp-101f,
     0x1.b8cecp-25f, 0.0f, 0x1.7b7564p-76f, 0x1.3f7aecp-15f, 0.0f, 0.0f,
     0x1.970eeep-118f, 0x1.944044p-30f, 0x1.d5eecp-73f, 0x1.591752p-7f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9faa24p-67f, 0.0f, 0.0f, 0x1.7f2bcep-51f, 0x1.7ef432p-44f,
     0.0f, 0x1.39a308p-66f, 0x1.e1ba06p-7f, 0x1.ffe2cap-112f, 0x1.0bd9aep-106f, 0.0f,
     0x1.b3984p-107f, 0.0f, 0.0f, 0.0f, 0x1.fef44cp-60f, 0x1.99e526p-21f,
     0x1.c1cceep-88f, 0.0f, 0.0f, 0x1.46fb06p-92f, 0x1.8f1982p-30f, 0x1.76094ep-16f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.721ff2p-38f, 0.0f, 0.0f, 0x1.ef25fep-9f, 0.0f,
     0x1.196936p-81f, 0x1.38c844p-84f, 0.0f, 0.0f, 0x1.868478p-64f, 0.0f,
     0x1.bbaf62p-8f, 0x1.4b7846p-123f, 0x1.28a376p-124f, 0x1.ecd73cp-38f,
     0x1.b255cp-89f, 0x1.9226dp-26f, 0.0f, 0x1.529486p-126f, 0x1.f9ba4cp-29f,
     0x1.6bdep-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d3ebfap-110f
};
static const float external_bench_wrapper_input_table_arg1[1004]  = {
     0x1.6e7f7ep-84f, 0x1.8bf93p-23f, 0x1.21d41ap-16f, 0x1.68bf04p-115f, 0.0f,
     0x1.878f3cp-111f, 0x1.28b0acp-36f, 0.0f, 0x1.2d2072p-105f, 0.0f, 0x1.475074p-33f,
     0x1.694994p-17f, 0x1.b1840ep-125f, 0x1.b1b99cp-44f, 0x1.4b8f88p-43f, 0.0f, 0.0f,
     0x1.01363cp-13f, 0x1.bab558p-27f, 0.0f, 0x1.8ecf42p-71f, 0x1.5f1c7cp-114f, 0.0f,
     0x1.b3168p-102f, 0x1.76b9f2p-81f, 0.0f, 0x1.cf6d94p-59f, 0x1.10ba2cp-21f, 0.0f,
     0.0f, 0.0f, 0x1.17d08ap-75f, 0.0f, 0x1.fc22fp-71f, 0.0f, 0.0f, 0x1.3a019cp-71f,
     0x1.4ea7ccp-38f, 0.0f, 0x1.0f73p-15f, 0.0f, 0.0f, 0.0f, 0x1.a7b3a4p-116f,
     0x1.fb3bacp-104f, 0.0f, 0.0f, 0.0f, 0x1.1c500ep-8f, 0x1.45f588p-11f,
     0x1.7048dcp-115f, 0.0f, 0.0f, 0.0f, 0x1.cbed84p-54f, 0x1.58058p-99f, 0.0f,
     0x1.00508ep-45f, 0x1.d44b2ep-59f, 0.0f, 0.0f, 0x1.59a6bep-5f, 0x1.4533b4p-53f,
     0x1.44283ap-99f, 0x1.d400fp-91f, 0.0f, 0.0f, 0x1.44bebap-22f, 0x1.1b4c2ep-110f,
     0x1.3ec604p-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d77106p-97f, 0x1.4c5b86p-7f,
     0x1.3ead68p-61f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.60d308p-49f,
     0x1.50300ep-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.59e314p-40f, 0x1.97cc7ep-29f, 0.0f,
     0x1.93fb76p-109f, 0x1.966756p-99f, 0x1.2bcb4cp-79f, 0x1.f31d9p-68f, 0.0f,
     0x1.10429ep-28f, 0x1.7380d2p-32f, 0.0f, 0.0f, 0x1.bb69c8p-5f, 0x1.76f778p-112f,
     0x1.edf458p-105f, 0.0f, 0.0f, 0.0f, 0x1.f55e86p-28f, 0x1.57b4cap-67f, 0.0f, 0.0f,
     0x1.372724p-8f, 0.0f, 0.0f, 0.0f, 0x1.573978p-107f, 0.0f, 0.0f, 0x1.9adfeep-21f,
     0.0f, 0.0f, 0x1.62ebdcp-19f, 0.0f, 0.0f, 0x1.9cb2dcp-75f, 0x1.f00c5p-26f, 0.0f,
     0.0f, 0x1.c9f4cep-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1966c8p-26f, 0.0f, 0.0f,
     0x1.935e32p-61f, 0x1.5cbaf2p-51f, 0x1.44cb7ep-92f, 0.0f, 0x1.48d4aep-77f,
     0x1.cad7cap-15f, 0.0f, 0x1.3bd91cp-40f, 0.0f, 0.0f, 0x1.b765bcp-68f,
     0x1.970546p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1ef1d6p-75f, 0x1.32311cp-54f, 0.0f,
     0x1.b4d03p-93f, 0x1.bcaf02p-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d100ap-12f, 0.0f,
     0x1.189af4p-23f, 0.0f, 0.0f, 0.0f, 0x1.fa2ac4p-15f, 0x1.6eb12ep-86f, 0.0f,
     0x1.dbb5f4p-57f, 0.0f, 0x1.5b0994p-65f, 0.0f, 0.0f, 0x1.34db06p-43f,
     0x1.5f805cp-12f, 0.0f, 0x1.cb0618p-77f, 0x1.22b51p-10f, 0x1.5b578ep-117f,
     0x1.5a50cep-86f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.45dd88p-102f, 0x1.944b1p-126f,
     0x1.5158b2p-36f, 0x1.3357ap-27f, 0.0f, 0x1.f78cbp-91f, 0.0f, 0.0f,
     0x1.a0846cp-32f, 0x1.600f3ap-101f, 0x1.ad1314p-94f, 0x1.3a515ap-24f, 0.0f,
     0x1.1a4822p-37f, 0x1.7911ccp-106f, 0.0f, 0x1.37087cp-4f, 0x1.d6307ep-106f, 0.0f,
     0x1.23e648p-19f, 0x1.8d945ap-55f, 0.0f, 0.0f, 0x1.5c852cp-12f, 0.0f,
     0x1.50f456p-120f, 0.0f, 0x1.e9ba56p-84f, 0.0f, 0.0f, 0x1.5dfc5cp-48f, 0.0f, 0.0f,
     0x1.d1803cp-35f, 0.0f, 0.0f, 0.0f, 0x1.59f23ep-13f, 0x1.130bd6p-61f, 0x1p0f,
     0x1.8e2196p-61f, 0x1.5027ccp-54f, 0.0f, 0.0f, 0x1.3027dcp-105f, 0x1.672e4ep-85f,
     0.0f, 0x1.85ed3cp-97f, 0.0f, 0x1.d492dp-48f, 0x1.e2242p-59f, 0x1.b4eb96p-92f,
     0.0f, 0.0f, 0x1.68c444p-85f, 0x1.22a88ep-89f, 0x1.914fcap-121f, 0x1.22e0acp-118f,
     0x1.77387ap-116f, 0.0f, 0x1.b28a9ep-26f, 0.0f, 0.0f, 0.0f, 0x1.1f4322p-20f,
     0x1.6759e6p-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.36219cp-107f, 0x1.b7a0fp-107f, 0.0f,
     0x1.00cfa8p-45f, 0x1.7b9ceep-72f, 0x1.cf319ep-79f, 0x1.065ed2p-106f, 0.0f, 0.0f,
     0x1.99a594p-100f, 0.0f, 0.0f, 0x1.04b312p-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d74e1ep-89f, 0.0f, 0.0f, 0x1.633a0ap-44f, 0x1.0e5414p-11f, 0x1.3dea7ep-100f,
     0x1.e9421p-102f, 0x1.c0a8d4p-96f, 0.0f, 0.0f, 0x1.bbedc2p-97f, 0.0f,
     0x1.3cd9p-93f, 0.0f, 0.0f, 0x1.93ab6p-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.57209p-48f,
     0.0f, 0.0f, 0x1.f31f26p-66f, 0.0f, 0.0f, 0x1.0370b4p-113f, 0.0f, 0.0f,
     0x1.ef0b02p-71f, 0.0f, 0x1.fc2e8ep-117f, 0.0f, 0.0f, 0x1.debdc6p-43f,
     0x1.c6074ap-112f, 0x1.7619aep-97f, 0.0f, 0x1.2c6532p-50f, 0.0f, 0x1.36bda2p-104f,
     0x1.52a79ep-37f, 0x1.6bee4cp-23f, 0x1.b43472p-41f, 0x1.dedf3p-67f, 0.0f,
     0x1.5683f4p-50f, 0.0f, 0x1.c78246p-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.35873ep-114f,
     0.0f, 0.0f, 0.0f, 0x1.611858p-120f, 0.0f, 0x1.ffb84ap-37f, 0.0f, 0.0f, 0.0f,
     0x1.ae1c44p-82f, 0x1.8f7b16p-12f, 0.0f, 0x1.6f4decp-73f, 0x1.0d55f8p-112f, 0.0f,
     0x1.c8db5ep-53f, 0.0f, 0x1.168612p-21f, 0.0f, 0.0f, 0.0f, 0x1.56db0ap-47f,
     0x1.ff3d9cp-45f, 0.0f, 0x1.6048cap-68f, 0x1.f14f66p-41f, 0x1.97ac6p-98f, 0.0f,
     0.0f, 0x1.cbd504p-26f, 0.0f, 0x1.6bd4c4p-115f, 0.0f, 0.0f, 0x1.cab786p-99f,
     0x1.a78c46p-92f, 0.0f, 0.0f, 0.0f, 0x1.f2dc6cp-125f, 0x1.14de4p-74f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.3bbfeep-43f, 0x1.5e11dcp-76f, 0x1.028592p-123f, 0x1.4e064ap-119f,
     0.0f, 0.0f, 0.0f, 0x1.e9a362p-3f, 0.0f, 0x1.6bf206p-26f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.0c8a86p-95f, 0.0f, 0.0f, 0x1.150a6cp-107f, 0.0f, 0x1.b6d1p-76f,
     0x1.5a5132p-101f, 0x1.5be83ep-22f, 0.0f, 0.0f, 0x1.5ae3bcp-61f, 0.0f, 0.0f,
     0x1.a281dap-19f, 0x1.708aep-122f, 0x1.03983cp-69f, 0x1.3d979ap-67f, 0.0f, 0.0f,
     0x1.67a77ep-45f, 0x1.534f9ap-16f, 0x1.58462cp-66f, 0.0f, 0.0f, 0.0f,
     0x1.beda1ap-122f, 0x1.c8c8d4p-12f, 0x1.dc30cp-16f, 0.0f, 0x1.1b19fap-44f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.2fd12ep-108f, 0x1.d6c106p-122f, 0x1.17c78ap-81f, 0.0f,
     0.0f, 0x1.ea3988p-18f, 0.0f, 0x1.b971ecp-45f, 0x1.fa117cp-46f, 0x1.5bc33ap-28f,
     0.0f, 0.0f, 0.0f, 0x1.bcce9ap-119f, 0.0f, 0.0f, 0x1.3d7d9ep-70f, 0x1.2abb5cp-81f,
     0.0f, 0.0f, 0x1.bf562ap-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3ad624p-68f,
     0x1.6f0128p-45f, 0.0f, 0x1.f35bdep-31f, 0.0f, 0.0f, 0x1.9cf124p-90f,
     0x1.d7273cp-90f, 0x1.c7c826p-38f, 0.0f, 0.0f, 0x1.a24ecep-17f, 0x1.f5edfp-92f,
     0x1.c55b5p-18f, 0x1.9ec7c8p-3f, 0.0f, 0x1.8b4ba6p-111f, 0.0f, 0.0f, 0.0f,
     0x1.e1dfap-98f, 0.0f, 0x1.69696p-19f, 0.0f, 0.0f, 0x1.a792e8p-53f, 0.0f, 0.0f,
     0x1.a02bc8p-89f, 0x1.628796p-14f, 0.0f, 0.0f, 0x1.163e5ap-98f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.40c27cp-55f, 0x1.86596ap-37f, 0.0f, 0.0f, 0x1.223404p-97f,
     0x1.fe08a4p-88f, 0.0f, 0x1.999aeep-54f, 0x1.2498dap-98f, 0x1.448296p-43f,
     0x1.47a51cp-15f, 0x1.e30426p-9f, 0x1.500484p-6f, 0x1.33963ap-84f, 0.0f,
     0x1.a27f16p-18f, 0x1.eae21ep-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.d4d112p-28f, 0.0f, 0x1.e18c04p-85f, 0.0f, 0x1.46efecp-30f, 0.0f,
     0x1.e503cp-49f, 0x1.079dc4p-87f, 0x1.7fcf56p-56f, 0.0f, 0x1.1f2036p-63f, 0.0f,
     0.0f, 0.0f, 0x1.37ecp-87f, 0.0f, 0.0f, 0.0f, 0x1.574ecap-17f, 0x1.6f98d6p-72f,
     0x1.5fd8a2p-12f, 0x1.4507c8p-102f, 0.0f, 0.0f, 0x1.ec561cp-34f, 0.0f, 0.0f,
     0x1.9ca944p-84f, 0.0f, 0x1.37acd8p-95f, 0x1.365c9cp-117f, 0.0f, 0x1.7fd66cp-102f,
     0.0f, 0.0f, 0x1.cf9e06p-40f, 0x1.3e9c68p-45f, 0x1.73895ap-94f, 0.0f,
     0x1.e86836p-112f, 0x1.20e714p-100f, 0x1.7c512p-37f, 0x1.81e348p-54f, 0.0f, 0.0f,
     0.0f, 0x1.abd4dp-84f, 0x1.0be4fap-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0042fep-86f, 0.0f, 0.0f, 0.0f, 0x1.9f08cap-55f, 0x1.b8243ap-32f,
     0x1.f6ec4p-40f, 0x1.9687a4p-106f, 0x1.a53858p-125f, 0x1.dda168p-15f,
     0x1.68a3a2p-27f, 0.0f, 0x1.92468ep-123f, 0x1.21583ap-58f, 0x1.157eb6p-23f,
     0x1.4b1462p-23f, 0x1.505144p-62f, 0x1.8b0d9p-72f, 0.0f, 0.0f, 0x1.31b4ecp-73f,
     0x1.d1777p-28f, 0.0f, 0x1.a820dcp-72f, 0x1.fb9b9p-12f, 0.0f, 0.0f,
     0x1.8bd238p-18f, 0x1.dc39e8p-48f, 0x1.662088p-125f, 0.0f, 0x1p0f, 0.0f, 0.0f,
     0.0f, 0x1.ef0f1p-110f, 0.0f, 0.0f, 0.0f, 0x1.10844ep-118f, 0x1.2ca9p-91f,
     0x1.a98568p-84f, 0.0f, 0.0f, 0.0f, 0x1.5f448p-96f, 0.0f, 0.0f, 0.0f,
     0x1.545278p-106f, 0x1.10d96ap-96f, 0.0f, 0x1.7305fp-109f, 0x1.3722d2p-79f, 0.0f,
     0x1.4a2f02p-40f, 0x1.16e5ep-54f, 0x1.bfa054p-17f, 0.0f, 0x1.30fcccp-117f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.21631cp-60f, 0.0f, 0x1.3bcb9ep-27f, 0.0f,
     0x1.6cd1c2p-76f, 0.0f, 0x1.9e1d7cp-27f, 0.0f, 0.0f, 0x1.7de864p-52f, 0.0f, 0.0f,
     0x1.3fd60cp-113f, 0x1.cf23cp-116f, 0x1.424d36p-61f, 0.0f, 0x1.4853eap-30f,
     0x1.dde6c2p-9f, 0x1.8b37bap-89f, 0x1.ba3b5p-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fd50cep-83f, 0x1.14622cp-6f, 0x1.e61d0ep-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d75088p-124f, 0x1.fb891ap-93f, 0.0f, 0x1.a79d8ep-30f, 0.0f, 0x1.d764d6p-2f,
     0x1.c5cbf6p-93f, 0.0f, 0x1.b99e9cp-78f, 0.0f, 0.0f, 0x1.741ep-116f,
     0x1.d8f72ap-85f, 0x1.a0a488p-49f, 0x1.eb6904p-75f, 0.0f, 0x1.5b59e6p-99f, 0.0f,
     0.0f, 0x1.b3a172p-55f, 0.0f, 0.0f, 0x1.810f9ep-73f, 0x1.94bd2ap-106f, 0.0f, 0.0f,
     0x1.a02912p-20f, 0x1p0f, 0.0f, 0x1.e884cap-54f, 0.0f, 0.0f, 0x1.7c08a6p-61f,
     0.0f, 0.0f, 0x1.56c6eep-17f, 0x1.d7bfc2p-33f, 0.0f, 0.0f, 0x1.8bb6eap-116f, 0.0f,
     0x1.f8ecb4p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c2d87ep-3f, 0.0f, 0x1.78ece6p-122f,
     0x1.19b42cp-27f, 0.0f, 0.0f, 0x1.5b4f0cp-102f, 0.0f, 0.0f, 0.0f, 0x1.916372p-43f,
     0x1.80668cp-116f, 0.0f, 0x1.c5b5bp-8f, 0x1.ac6038p-54f, 0.0f, 0.0f,
     0x1.1cdb04p-83f, 0x1.b19fd4p-47f, 0.0f, 0.0f, 0x1.ee0bc8p-126f, 0x1.ba7c8ep-43f,
     0x1.bc40e8p-5f, 0x1.2e3d0ap-18f, 0x1.f2778cp-66f, 0.0f, 0x1.10f81cp-67f,
     0x1.c86fc6p-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c53284p-14f, 0.0f,
     0x1.c9f6e8p-41f, 0.0f, 0.0f, 0x1.a29684p-25f, 0.0f, 0x1.30e40ep-109f,
     0x1.253628p-52f, 0.0f, 0x1.a3fdb2p-8f, 0x1.d81044p-86f, 0x1.cbf8b2p-26f, 0.0f,
     0.0f, 0x1.58cd6cp-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cd7d4ap-123f, 0x1.0735eap-22f,
     0.0f, 0x1.5be1e8p-82f, 0.0f, 0.0f, 0x1.a86b16p-68f, 0.0f, 0.0f, 0.0f,
     0x1.ce089ap-59f, 0x1.f1aeacp-69f, 0.0f, 0x1.0d974ep-71f, 0x1.553872p-13f,
     0x1.28bc5cp-117f, 0.0f, 0x1.ae1d2ap-105f, 0.0f, 0x1.e75978p-16f, 0.0f,
     0x1.0a3ep-37f, 0x1.37a408p-101f, 0x1.5f9244p-52f, 0x1.0d216cp-91f,
     0x1.b88d34p-58f, 0.0f, 0x1.c302ccp-81f, 0.0f, 0.0f, 0.0f, 0x1.b479fep-95f, 0.0f,
     0.0f, 0.0f, 0x1.31d88ap-97f, 0.0f, 0.0f, 0.0f, 0x1.35ecb6p-123f, 0.0f, 0.0f,
     0x1.ef98c4p-71f, 0x1.7781c6p-37f, 0x1.72ae2ep-28f, 0x1.804f32p-10f, 0.0f,
     0x1.37485ap-44f, 0x1.ab6492p-92f, 0x1.dfe2b6p-80f, 0.0f, 0.0f, 0x1.20ac66p-54f,
     0.0f, 0.0f, 0.0f, 0x1.73c6f8p-73f, 0x1.11d3c8p-23f, 0x1.3962c2p-82f,
     0x1.4fffe2p-29f, 0x1.74071ap-97f, 0x1.c9ebaep-22f, 0.0f, 0.0f, 0x1.4b81e2p-123f,
     0.0f, 0x1.4d12dcp-25f, 0.0f, 0x1.94a3p-77f, 0x1.1bce8p-63f, 0x1.e71416p-68f,
     0x1.fc26ccp-28f, 0.0f, 0x1.1b0376p-58f, 0.0f, 0x1.f0e2f4p-1f, 0.0f,
     0x1.ccf48ep-101f, 0.0f, 0.0f, 0x1.397ef8p-124f, 0x1.69d98ap-108f, 0x1.368d22p-6f,
     0x1.9c03e4p-30f, 0x1.229504p-20f, 0x1.2e7444p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4f7372p-67f, 0x1.ead8eep-105f, 0x1.5ccfaep-13f, 0x1.f2a8f4p-34f, 0.0f,
     0x1.0767fap-103f, 0x1.7d990ap-48f, 0x1.da9f08p-112f, 0.0f, 0x1.6e133cp-102f,
     0.0f, 0x1.2f773p-89f, 0.0f, 0x1.5bc8eap-109f, 0x1.af1632p-103f, 0.0f,
     0x1.8c4e8ap-51f, 0.0f, 0x1.951daep-111f, 0x1.0927a6p-103f, 0.0f, 0.0f,
     0x1.b85b0cp-86f, 0x1.3ad7aep-83f, 0x1.ff135ap-5f, 0x1.2ed438p-39f,
     0x1.5f6492p-13f, 0x1.3165p-62f, 0.0f, 0x1.91802p-31f, 0x1.c478p-114f,
     0x1.da9c1ap-22f, 0.0f, 0x1.567472p-47f, 0x1.6ff554p-22f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.70847cp-92f, 0.0f, 0x1.bea77ap-73f, 0x1.762078p-105f,
     0x1.4b221ep-87f, 0.0f, 0x1.0d232cp-12f, 0.0f, 0.0f, 0x1.837038p-123f, 0.0f, 0.0f,
     0x1.359534p-3f, 0x1.3b4d48p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ed94d2p-48f, 0.0f,
     0.0f, 0x1.3ee0ap-75f, 0x1.a08f9p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ea756ep-105f, 0.0f, 0x1.933d22p-23f, 0x1.ebe61cp-107f, 0x1.08c412p-28f, 0.0f,
     0.0f, 0.0f, 0x1.7ebe32p-31f, 0x1.ab4d12p-76f, 0.0f, 0x1.81e44ap-40f,
     0x1.0e18a4p-40f, 0x1.6a2316p-24f, 0.0f, 0.0f, 0x1.4551f2p-77f, 0x1.60ec9cp-40f,
     0.0f, 0x1.d68f0cp-8f, 0.0f, 0x1.b16dc4p-13f, 0x1.2c8d26p-77f, 0.0f, 0.0f,
     0x1.bed062p-39f, 0x1.1d5994p-59f, 0x1.55e322p-84f, 0.0f, 0x1.da4d2ap-30f,
     0x1.cf9178p-30f, 0.0f, 0x1.24de8p-84f, 0x1.e5fb28p-53f, 0.0f, 0x1.dae8fap-86f,
     0x1.dcfaeap-25f, 0x1.089d6p-51f, 0x1.2630bep-65f, 0.0f, 0x1.0dddc8p-78f, 0.0f,
     0x1.8f42f4p-26f, 0x1.dc5f38p-96f, 0x1.3601bap-33f, 0.0f, 0x1.1f3fccp-123f,
     0x1.71c0b8p-11f, 0.0f, 0.0f, 0x1.0ef62cp-10f, 0x1.9302bp-17f, 0x1.1a79d4p-50f,
     0x1.a76e62p-57f, 0.0f, 0.0f, 0.0f, 0x1.965844p-66f, 0x1.07fdecp-121f, 0.0f,
     0x1.132a3ep-33f, 0x1.2fa4b2p-125f, 0x1.b4311ep-63f, 0.0f, 0.0f, 0x1.e40de6p-67f,
     0.0f, 0x1.1457a2p-55f, 0.0f, 0.0f, 0x1.76c602p-59f, 0.0f, 0x1.3a0508p-99f,
     0x1.5d2ef4p-71f, 0.0f, 0.0f, 0x1.56d8p-40f, 0.0f
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
            ml_float4_t tmp3;
            int32_t tmp4;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            memcpy(&tmp1, ((ml_float4_t*)(external_bench_wrapper_input_table_arg1+ i)), 16);
            tmp2 = Sleef_hypotf4_u05avx2128(tmp0, tmp1);
            memcpy(((ml_float4_t*)(external_bench_wrapper_output_table+ i)), &(tmp2), 16);
            tmp3 = local_acc + tmp2;
            local_acc = tmp3;
            tmp4 = i + INT32_C(4);
            i = tmp4;
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
    printf("Sleef_hypotf4_u05avx2128 %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_hypotf4_u05avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
