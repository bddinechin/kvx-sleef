/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_cosf1_u35purecfma.c --function Sleef_cosf1_u35purecfma \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 --bench \
 *     --no-embedded-bin --target x86_sse2
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
     0.0f, 0x1.2ec6eep-48f, 0x1.434878p-86f, 0x1.0a244cp-12f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e0cc6cp-58f, 0.0f, 0x1.9d615ep-107f, 0.0f, 0x1.0767ap-80f, 0x1.1814a2p-81f,
     0.0f, 0.0f, 0x1.390596p-6f, 0.0f, 0.0f, 0x1.d9a274p-86f, 0.0f, 0.0f,
     0x1.c069f6p-95f, 0.0f, 0.0f, 0x1.849c7p-75f, 0x1.1771a4p-109f, 0x1.e9909ep-28f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a931a4p-36f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c51feap-115f, 0.0f, 0.0f, 0x1.a2ae9p-73f, 0x1.a5d7bp-100f, 0x1.e91a26p-123f,
     0x1.c374bp-75f, 0.0f, 0x1.74abcep-110f, 0x1.c0f9d6p-6f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b6c198p-87f, 0.0f, 0x1.21b064p-39f, 0x1.4b7ee2p-7f, 0.0f,
     0x1.28e6f4p-121f, 0.0f, 0x1.542574p-106f, 0.0f, 0x1p0f, 0.0f, 0x1.6bbf3p-20f,
     0x1.f025fcp-12f, 0x1.5c020ap-31f, 0.0f, 0x1.c8cc26p-110f, 0.0f, 0x1.0afd94p-19f,
     0.0f, 0x1.99b252p-25f, 0x1.40e1ccp-89f, 0.0f, 0x1.b7926cp-99f, 0.0f,
     0x1.f3a97p-70f, 0x1.90caf4p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3ebabep-91f, 0x1.261542p-10f, 0x1.4c426cp-117f, 0x1.233b12p-20f,
     0x1.f42698p-8f, 0x1.73f694p-44f, 0x1.de6042p-69f, 0.0f, 0.0f, 0.0f,
     0x1.63a834p-34f, 0x1.c9c436p-42f, 0x1.585986p-38f, 0.0f, 0x1.2c811ap-24f, 0.0f,
     0x1.e62e22p-110f, 0.0f, 0.0f, 0x1.224258p-118f, 0.0f, 0.0f, 0x1.1cf374p-43f,
     0x1.8ef65cp-25f, 0x1.af514p-13f, 0x1.8d6c04p-10f, 0.0f, 0x1.fd447p-125f, 0.0f,
     0x1.df46bcp-76f, 0.0f, 0.0f, 0.0f, 0x1.429d0cp-82f, 0x1.0f75a6p-35f, 0.0f, 0.0f,
     0x1.62619ep-35f, 0.0f, 0.0f, 0.0f, 0x1.efba72p-54f, 0x1.21effcp-10f,
     0x1.5478b8p-16f, 0.0f, 0x1.6499ep-13f, 0x1.d8975cp-124f, 0x1.27d7f2p-45f, 0.0f,
     0.0f, 0x1.c96602p-38f, 0x1.1a67bap-13f, 0.0f, 0x1.afaa06p-11f, 0x1.6d69f6p-19f,
     0.0f, 0x1.09a6e8p-21f, 0x1.ce0f12p-25f, 0.0f, 0.0f, 0.0f, 0x1.cf39c6p-117f, 0.0f,
     0x1.95a518p-58f, 0x1.3511dep-18f, 0x1.883d1p-107f, 0x1.135912p-28f, 0.0f,
     0x1.e5795ap-84f, 0.0f, 0.0f, 0x1.aa5b3p-63f, 0x1.ff6284p-77f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.9f4378p-73f, 0x1.ab59e4p-109f, 0.0f, 0.0f, 0.0f, 0x1.830606p-16f, 0.0f,
     0.0f, 0x1.9abe94p-71f, 0.0f, 0.0f, 0.0f, 0x1.919aeap-121f, 0.0f, 0x1.dd806ep-15f,
     0x1.9ce682p-68f, 0x1.dde796p-105f, 0x1.473374p-102f, 0x1.082272p-11f,
     0x1.f36752p-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0716f2p-13f, 0x1.8d053ap-7f, 0.0f,
     0x1.023f9ep-16f, 0x1.d7de46p-126f, 0x1.14d59ap-2f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.eb9082p-34f, 0x1.5dc2ecp-126f, 0.0f, 0x1.ddd38ap-46f, 0x1.fe1a9ep-20f,
     0x1.a7e63ap-107f, 0x1.9530cp-51f, 0.0f, 0.0f, 0x1.009202p-19f, 0.0f, 0.0f, 0.0f,
     0x1.c670a6p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3c8c9ap-68f, 0x1.551f66p-28f,
     0x1.d9d982p-58f, 0.0f, 0x1.2cae82p-80f, 0x1.01c5d2p-44f, 0x1.b0df92p-23f, 0.0f,
     0.0f, 0.0f, 0x1.388866p-64f, 0x1.e643f2p-85f, 0.0f, 0.0f, 0x1.da8fe2p-39f, 0.0f,
     0.0f, 0.0f, 0x1.52f5ccp-52f, 0.0f, 0.0f, 0x1.d464c2p-77f, 0x1.4a8522p-67f, 0.0f,
     0x1.0cbe06p-30f, 0x1.554516p-92f, 0x1.4365f4p-125f, 0x1.d92b18p-30f,
     0x1.a2ae2ap-77f, 0x1.cfa38ap-119f, 0.0f, 0.0f, 0.0f, 0x1.eba73cp-45f,
     0x1.61e8e6p-29f, 0x1.a6335ap-111f, 0x1.93b5ecp-39f, 0x1.6a5e12p-99f,
     0x1.cf58dp-41f, 0.0f, 0x1.9c01ecp-22f, 0x1.bda658p-69f, 0x1.32e584p-11f,
     0x1.a33fp-19f, 0.0f, 0.0f, 0x1.cbdfd2p-54f, 0x1.d4dad8p-50f, 0x1.01c8a4p-100f,
     0x1.f701b6p-32f, 0.0f, 0x1.c81b1cp-77f, 0x1.c4d366p-40f, 0.0f, 0.0f,
     0x1.419cd2p-3f, 0x1.e8004p-85f, 0.0f, 0x1.88fd2ap-115f, 0x1p0f, 0x1.34a5d2p-105f,
     0.0f, 0.0f, 0x1.beca6cp-45f, 0.0f, 0x1.1ffb32p-1f, 0.0f, 0x1.6fa90ep-27f,
     0x1.1dd1b4p-102f, 0x1.2cedbp-37f, 0.0f, 0x1.ced9f8p-38f, 0x1.25f304p-86f, 0.0f,
     0.0f, 0x1.d568a6p-51f, 0.0f, 0.0f, 0.0f, 0x1.2c7ac4p-72f, 0.0f, 0.0f, 0.0f,
     0x1.93089cp-19f, 0x1.17f72cp-60f, 0x1.249376p-16f, 0x1.59e76ap-86f,
     0x1.288704p-10f, 0x1.14129ap-5f, 0.0f, 0.0f, 0x1.3a538ap-112f, 0x1.fdfccap-66f,
     0x1.b2f01ep-104f, 0.0f, 0.0f, 0.0f, 0x1.d33354p-36f, 0.0f, 0x1.815db2p-123f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.25f338p-113f, 0.0f, 0x1.8911aep-27f, 0x1.2a4d64p-13f,
     0.0f, 0.0f, 0x1.7fe026p-32f, 0.0f, 0x1.5d841p-90f, 0x1.c82a14p-48f, 0.0f,
     0x1.3a0a2p-97f, 0x1.05ad92p-60f, 0.0f, 0x1.532ed8p-5f, 0x1.ca728p-39f,
     0x1.b3dd22p-35f, 0.0f, 0.0f, 0x1.ab7f3cp-35f, 0x1.d19ab2p-3f, 0.0f,
     0x1.736bbep-6f, 0.0f, 0x1.857912p-102f, 0x1.de2fb4p-28f, 0x1.40f6ap-94f,
     0x1.30d94ap-67f, 0.0f, 0x1.7fd9e6p-57f, 0.0f, 0x1.838714p-112f, 0x1.3e1caap-80f,
     0x1.785a32p-62f, 0x1.466fbap-120f, 0.0f, 0.0f, 0.0f, 0x1.3a1dfcp-94f,
     0x1.8f9cf4p-2f, 0.0f, 0x1.52bf16p-81f, 0.0f, 0x1.7076f8p-12f, 0x1.03c8f6p-94f,
     0.0f, 0x1.0915fcp-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.69af7p-120f, 0.0f,
     0x1.86edccp-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d1c6b6p-88f, 0x1.97fcc2p-24f,
     0x1.f2e18p-90f, 0.0f, 0x1.ccd6ccp-100f, 0x1.b0ccccp-22f, 0.0f, 0.0f,
     0x1.b7f94ap-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.78485ep-46f, 0x1.b88cbep-50f, 0.0f,
     0x1.6ceadcp-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4a8382p-13f, 0x1.8476e4p-93f,
     0x1.b53a94p-25f, 0.0f, 0x1.17d82cp-105f, 0x1.f569cep-103f, 0x1.a41d3ep-17f, 0.0f,
     0.0f, 0.0f, 0x1.92b30cp-25f, 0.0f, 0.0f, 0x1.9b1778p-34f, 0x1.faa53cp-18f,
     0x1.5addb6p-24f, 0.0f, 0x1.0381c6p-20f, 0.0f, 0x1.c221e4p-86f, 0.0f,
     0x1.30313p-42f, 0x1.dc0a24p-119f, 0.0f, 0.0f, 0x1.d3324p-103f, 0x1.47925p-26f,
     0x1.a8da3cp-90f, 0x1.5ef2fep-109f, 0x1.7223e6p-115f, 0x1.e3827cp-43f, 0.0f,
     0x1.520bd2p-48f, 0.0f, 0x1.3286d2p-30f, 0.0f, 0x1.30fd26p-52f, 0.0f,
     0x1.ad39cap-7f, 0.0f, 0x1.5242bap-24f, 0.0f, 0x1.b6a2dap-82f, 0.0f, 0.0f, 0.0f,
     0x1.96ddd4p-95f, 0.0f, 0.0f, 0.0f, 0x1.2fc912p-15f, 0x1.3c0d64p-16f, 0.0f, 0.0f,
     0.0f, 0x1.f2a554p-61f, 0x1.52105cp-63f, 0x1.52fa92p-51f, 0.0f, 0.0f,
     0x1.3d3abap-87f, 0x1.00ab06p-84f, 0.0f, 0.0f, 0x1.214976p-32f, 0.0f, 0.0f,
     0x1.c82e76p-20f, 0.0f, 0x1.4d78d2p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6989b6p-86f, 0x1.243864p-81f, 0x1.ca79dp-87f, 0.0f, 0x1.e9c1d8p-47f, 0.0f,
     0.0f, 0x1.621c78p-43f, 0.0f, 0.0f, 0x1.4fd54ep-10f, 0x1.731fc8p-121f, 0.0f,
     0x1.f3bdb4p-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5c8a3p-70f, 0x1.cfd43ap-84f,
     0.0f, 0x1.627992p-68f, 0.0f, 0x1.40757p-47f, 0x1.4dcdfcp-35f, 0.0f, 0.0f,
     0x1.994514p-18f, 0x1.2ac124p-65f, 0x1.f552d2p-70f, 0.0f, 0.0f, 0x1.5729dep-38f,
     0.0f, 0.0f, 0.0f, 0x1.5c671ep-98f, 0.0f, 0x1.c93f66p-106f, 0.0f, 0x1.b83584p-82f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.1f8c68p-81f, 0x1.31978ep-3f, 0x1.5c0026p-16f,
     0x1.3012p-28f, 0x1.32bbf6p-76f, 0.0f, 0x1.b6f9fep-49f, 0x1.3dc568p-64f, 0.0f,
     0x1.34b00cp-123f, 0x1.21b2cap-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.02b83p-106f,
     0x1.cf332p-75f, 0x1.9d00a8p-119f, 0x1.6363f8p-116f, 0x1.f53974p-88f,
     0x1.c062b8p-48f, 0x1.b5ba32p-59f, 0x1.f0c46p-56f, 0x1.c9d75cp-16f, 0.0f, 0.0f,
     0x1.be5144p-74f, 0.0f, 0x1.88c7bp-54f, 0x1.2d272ap-108f, 0.0f, 0.0f,
     0x1.d37e54p-34f, 0x1.ea2fa6p-38f, 0.0f, 0x1.a1557ap-10f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a5ac6cp-117f, 0x1.2ed43cp-65f, 0x1.df7dap-124f, 0x1.384d28p-15f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.6fb038p-59f, 0x1.603676p-99f, 0x1.f686eep-3f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.242f46p-90f, 0.0f, 0x1.46a638p-51f, 0x1.5abe84p-31f,
     0x1.3fb498p-46f, 0x1.37c926p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.73fc4ap-121f, 0.0f,
     0.0f, 0x1.285f5ep-65f, 0.0f, 0x1.8490fep-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3755fcp-82f, 0x1.fffcbp-111f, 0.0f, 0.0f, 0.0f, 0x1.5f48a2p-110f,
     0x1.4c126p-32f, 0x1.5f6ca4p-86f, 0x1.3278e4p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d3fa5ep-35f, 0x1.7aba3p-29f, 0x1.a2657ap-39f, 0x1.b5fb44p-101f,
     0x1.55ecc8p-62f, 0x1.3bd252p-45f, 0.0f, 0x1.dd24a8p-57f, 0.0f, 0.0f, 0.0f,
     0x1.5a469cp-86f, 0x1.07ba58p-88f, 0x1.6a15a2p-76f, 0.0f, 0.0f, 0.0f,
     0x1.80c30cp-11f, 0.0f, 0.0f, 0.0f, 0x1.738866p-1f, 0x1.e6d672p-87f, 0.0f, 0.0f,
     0.0f, 0x1.657cf6p-62f, 0x1.b3632cp-47f, 0.0f, 0x1.3d4bd2p-45f, 0x1.5dc2e4p-13f,
     0x1.7d45eap-19f, 0x1.172386p-95f, 0x1.574edep-38f, 0.0f, 0x1.179452p-100f,
     0x1.a8292p-51f, 0.0f, 0x1.699238p-73f, 0.0f, 0.0f, 0x1.19389ap-24f,
     0x1.423e46p-118f, 0x1.ed4c5ap-120f, 0x1.876cf8p-24f, 0.0f, 0x1.9c7c78p-28f, 0.0f,
     0.0f, 0x1.1736fp-73f, 0.0f, 0.0f, 0x1.5799cep-87f, 0.0f, 0x1.3729dp-86f,
     0x1.fff9bcp-54f, 0x1.120a76p-77f, 0.0f, 0.0f, 0.0f, 0x1.b5f9ep-110f,
     0x1.b32b9p-10f, 0x1.253e16p-118f, 0.0f, 0.0f, 0x1.c407eap-84f, 0.0f, 0.0f, 0.0f,
     0x1.de148cp-32f, 0.0f, 0x1.6820d6p-97f, 0x1.a8982ap-39f, 0.0f, 0x1.8b7f3ap-107f,
     0x1.90b64p-41f, 0x1.22da26p-37f, 0x1.19a0b8p-75f, 0x1.8cdbfap-104f,
     0x1.f2f59cp-63f, 0.0f, 0x1.755488p-55f, 0x1.868f0ep-43f, 0x1.29a8acp-94f,
     0x1.a993e4p-21f, 0x1.30d8ep-70f, 0.0f, 0x1.fd71aep-123f, 0x1.c63668p-97f,
     0x1.c9ec5ep-18f, 0.0f, 0.0f, 0.0f, 0x1.d425p-87f, 0.0f, 0.0f, 0x1.651ec8p-121f,
     0.0f, 0.0f, 0x1.b89df6p-2f, 0.0f, 0.0f, 0.0f, 0x1.d0d23ap-37f, 0x1.efc6aap-47f,
     0.0f, 0.0f, 0.0f, 0x1.504768p-119f, 0.0f, 0x1.b87c2cp-90f, 0.0f,
     0x1.678516p-103f, 0x1.12b398p-66f, 0x1.93bf3cp-29f, 0.0f, 0.0f, 0.0f,
     0x1.96b826p-88f, 0x1.ea328ep-94f, 0.0f, 0.0f, 0x1.f37adp-48f, 0x1.13ae88p-58f,
     0x1.12f5d2p-12f, 0x1.846316p-90f, 0x1.c649bp-26f, 0.0f, 0x1.aa3774p-108f,
     0x1.bbec08p-105f, 0x1.cf53d8p-21f, 0.0f, 0x1.c40ee2p-44f, 0.0f, 0x1.6b40d8p-71f,
     0x1.8a1ae6p-28f, 0x1.e290aap-9f, 0.0f, 0.0f, 0x1.e82776p-49f, 0x1.b814e6p-47f,
     0.0f, 0x1.174d92p-38f, 0.0f, 0x1.34d9c6p-29f, 0x1.e432d8p-63f, 0x1.8527acp-52f,
     0x1.c8e1e6p-107f, 0x1p0f, 0.0f, 0x1.19f4f6p-56f, 0.0f, 0.0f, 0x1.eaf9d6p-21f,
     0.0f, 0x1.a27204p-96f, 0x1.a3b354p-29f, 0.0f, 0x1.c9fe02p-19f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.221362p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4ea046p-101f,
     0.0f, 0.0f, 0x1.549d8p-101f, 0.0f, 0x1.3f9cb4p-63f, 0x1.29efeap-31f, 0.0f,
     0x1.8824b4p-93f, 0x1.7a4228p-59f, 0x1.f466dp-51f, 0.0f, 0x1.cbe0f2p-63f, 0.0f,
     0x1.a63e66p-34f, 0.0f, 0.0f, 0x1.4a89d2p-66f, 0x1.9eb57ap-112f, 0.0f, 0.0f, 0.0f,
     0x1.f29c8cp-102f, 0x1.6c4e08p-39f, 0.0f, 0x1.f8b782p-14f, 0x1.0e2672p-80f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.356e92p-84f, 0x1.bc9a42p-97f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.334e58p-73f, 0x1.bc0b82p-71f, 0x1.18c466p-91f, 0.0f, 0.0f, 0.0f,
     0x1.20b68cp-66f, 0x1.3db88cp-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ad3bdap-41f,
     0.0f, 0.0f, 0.0f, 0x1.e4ba3ap-62f, 0x1.b33742p-110f, 0x1.b23698p-71f, 0.0f, 0.0f,
     0x1.de0be8p-32f, 0x1.71d34ep-1f, 0.0f, 0x1.3db25ap-74f, 0x1.09d42ap-84f, 0.0f,
     0.0f, 0x1.6c75bp-117f, 0.0f, 0x1.7390c8p-11f, 0x1.902628p-39f, 0.0f,
     0x1.d777d8p-62f, 0x1.a9d99ap-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2ea272p-49f, 0.0f,
     0x1.e52374p-2f, 0x1.7b1126p-119f, 0x1.e51a3ap-76f, 0.0f, 0.0f, 0.0f,
     0x1.dcf92ap-29f, 0x1.9cd126p-79f, 0.0f, 0x1.08882p-93f, 0x1.1303b6p-27f, 0.0f,
     0.0f, 0.0f, 0x1.bb76fp-39f, 0x1.003d1cp-23f, 0.0f, 0.0f, 0.0f, 0x1.89b198p-83f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.003bf6p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.84a892p-87f,
     0.0f, 0x1.29e846p-51f, 0x1p0f, 0x1.e85ac6p-8f, 0x1.57e20cp-40f, 0.0f, 0.0f, 0.0f,
     0x1.4c625ep-80f, 0.0f, 0x1.8e14b6p-55f, 0x1.9edb42p-8f, 0.0f, 0.0f,
     0x1.a6ecf2p-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e861bap-116f,
     0x1.ab1314p-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f837d8p-41f, 0x1.a7ab5ep-24f, 0.0f,
     0x1.5c3c64p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4c80dp-22f,
     0x1.4a5d3ap-56f, 0.0f, 0x1.a6478cp-121f, 0.0f, 0x1.cebbap-12f, 0.0f,
     0x1.acca22p-69f, 0.0f, 0x1.bf064cp-92f, 0.0f, 0.0f, 0x1.aa72dap-25f,
     0x1.3705ap-84f, 0.0f, 0.0f, 0x1.6a4742p-61f, 0.0f, 0x1.5c114p-63f,
     0x1.20911p-92f, 0.0f, 0x1.b55fe8p-8f, 0x1.66373ep-107f, 0x1.adb3e6p-114f, 0.0f,
     0.0f, 0x1.e3fa94p-59f, 0x1.ab8918p-97f, 0.0f, 0.0f, 0.0f, 0x1.7c7b76p-66f, 0.0f,
     0x1.05a0fap-116f, 0x1.002936p-82f, 0.0f, 0x1.5ddb3ep-71f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.019a94p-111f, 0x1.9a95b6p-93f, 0.0f, 0x1.49a654p-85f, 0x1.8f0a92p-59f, 0.0f,
     0.0f, 0.0f, 0x1.96dbccp-89f, 0x1.1e91dep-113f, 0.0f, 0.0f, 0x1.05973ap-38f,
     0x1.4f2052p-23f, 0x1.ce3794p-69f, 0.0f, 0x1.c7a142p-107f, 0x1.7188f8p-126f, 0.0f,
     0x1.8b546cp-76f, 0.0f, 0x1.05ee7ep-119f, 0.0f, 0.0f, 0.0f, 0x1.c39f84p-36f,
     0x1.489cbap-104f, 0x1.a19014p-112f, 0.0f, 0.0f, 0.0f, 0x1.b527a4p-113f
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
            tmp1 = Sleef_cosf1_u35purecfma(tmp0);
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
    printf("Sleef_cosf1_u35purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_cosf1_u35purecfma bench acc %a\n", global_bench_acc);
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
