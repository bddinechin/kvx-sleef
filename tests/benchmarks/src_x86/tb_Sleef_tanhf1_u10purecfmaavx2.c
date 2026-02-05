/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_tanhf1_u10purecfma.c --function \
 *     Sleef_tanhf1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0x1.070ff4p-28f, 0x1.7f9bb6p-35f, 0.0f, 0x1.e69cb4p-74f, 0.0f,
     0x1.29af16p-21f, 0.0f, 0x1.e821a2p-54f, 0x1.d7e1cp-69f, 0x1.6f090ep-45f, 0x1p0f,
     0x1.e65f56p-92f, 0.0f, 0x1.60e30cp-31f, 0x1.99408ep-97f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0a9ecp-33f, 0x1.03c056p-124f, 0.0f, 0x1.047dbap-117f, 0.0f, 0.0f, 0.0f,
     0x1.a7c99p-99f, 0x1.39d5f6p-62f, 0x1.800bd8p-52f, 0x1.b4bfc8p-80f, 0.0f,
     0x1.c39c5p-66f, 0x1.fda766p-16f, 0x1.2ef786p-102f, 0.0f, 0.0f, 0x1.ce5828p-47f,
     0.0f, 0.0f, 0x1.98b246p-40f, 0.0f, 0.0f, 0x1.c58edp-18f, 0.0f, 0.0f, 0x1p0f,
     0.0f, 0.0f, 0x1.f713eep-71f, 0.0f, 0x1.d08bb8p-102f, 0x1.4f9c62p-71f, 0.0f,
     0x1.4542fcp-76f, 0x1.95e6fp-58f, 0x1.494f1ep-115f, 0x1.b7cb2ap-9f, 0.0f, 0.0f,
     0.0f, 0x1.7efb5ap-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.42f008p-50f,
     0x1.fd6d1cp-56f, 0.0f, 0.0f, 0.0f, 0x1.c4e9c6p-72f, 0x1.a7bb6p-44f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.51624ap-39f, 0.0f, 0.0f, 0.0f, 0x1.9af4c4p-122f,
     0x1.5b2e84p-61f, 0x1.c1fe84p-82f, 0.0f, 0x1.51673p-109f, 0.0f, 0x1.259eap-12f,
     0x1.75642ap-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.19a88ap-93f, 0x1.18bb62p-99f,
     0.0f, 0x1p0f, 0x1.70c0d2p-39f, 0x1.f1775ap-123f, 0x1.fdada8p-83f,
     0x1.6d542ap-74f, 0x1.e7f3e2p-105f, 0.0f, 0x1.8dd378p-107f, 0x1.b6985ep-45f,
     0x1.424a94p-1f, 0.0f, 0x1.4807f6p-55f, 0x1.d3da1ep-63f, 0x1.f2eb78p-102f, 0.0f,
     0x1.7228cp-112f, 0x1.9a1488p-112f, 0x1.a74f9cp-14f, 0.0f, 0.0f, 0x1.0661a4p-12f,
     0.0f, 0x1.48d4a4p-1f, 0x1.809466p-25f, 0x1.20a3p-68f, 0.0f, 0.0f, 0.0f,
     0x1.2172d8p-105f, 0x1.6ef16ap-55f, 0x1.9ab15p-46f, 0x1.e94bd8p-22f,
     0x1.d1a4d2p-45f, 0x1.955aap-59f, 0.0f, 0x1.e40606p-91f, 0x1.2d665p-83f, 0.0f,
     0.0f, 0x1.dfe45cp-113f, 0x1.93196p-107f, 0.0f, 0.0f, 0x1.8227fcp-69f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.6a8698p-73f, 0x1.ecbfcp-23f, 0.0f, 0.0f, 0.0f, 0x1.f51772p-40f,
     0x1.fa29f8p-33f, 0x1.2fb29ap-64f, 0.0f, 0.0f, 0.0f, 0x1.2cda56p-10f, 0.0f,
     0x1.40efdep-103f, 0x1.971eeap-63f, 0.0f, 0x1.ca9c02p-43f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.26822ap-37f, 0.0f, 0x1.1f8p-31f, 0x1.7ed68ep-48f, 0.0f, 0x1.f9a63ep-33f,
     0x1.360834p-124f, 0x1.bd910ap-46f, 0x1.581efep-16f, 0.0f, 0.0f, 0x1.7bb05cp-16f,
     0.0f, 0x1.155862p-75f, 0.0f, 0x1.46ad44p-56f, 0x1.32888ap-27f, 0.0f,
     0x1.eac6c2p-59f, 0.0f, 0x1.026b5p-101f, 0x1.26e788p-77f, 0x1.257bb8p-51f,
     0x1.5dde7ep-55f, 0.0f, 0.0f, 0.0f, 0x1.3e84fap-17f, 0x1.98044ep-51f, 0.0f, 0.0f,
     0x1.be3136p-47f, 0.0f, 0.0f, 0.0f, 0x1.71da3cp-112f, 0.0f, 0.0f, 0x1.e1e97ap-95f,
     0x1.6264fp-18f, 0x1.78a94cp-29f, 0.0f, 0x1.51fcaep-91f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fb585cp-38f, 0x1.19c41p-121f, 0x1.35403ep-121f, 0x1.c5d44ep-57f, 0.0f,
     0x1.7da51ap-72f, 0x1.8c4c52p-36f, 0x1.3c671ep-108f, 0x1.8e274ep-106f,
     0x1.f5a2f4p-29f, 0x1.f2cfaep-29f, 0.0f, 0x1.63d53cp-27f, 0.0f, 0.0f,
     0x1.515ea8p-51f, 0.0f, 0.0f, 0.0f, 0x1.af371p-25f, 0x1.eca2f4p-13f,
     0x1.6620d4p-107f, 0x1.26f3ap-39f, 0.0f, 0.0f, 0x1.05d168p-119f, 0.0f, 0.0f,
     0x1.33e6aap-29f, 0.0f, 0.0f, 0.0f, 0x1.1d2d4cp-21f, 0.0f, 0x1.aec10ap-79f, 0.0f,
     0x1.862334p-13f, 0.0f, 0.0f, 0.0f, 0x1.569692p-123f, 0x1.fac36cp-8f,
     0x1.ba9adep-40f, 0.0f, 0x1.39c57ep-81f, 0x1.182a8ep-125f, 0x1.78512p-54f, 0.0f,
     0x1.ed9878p-24f, 0x1.b6ba26p-94f, 0x1.41026p-7f, 0.0f, 0x1.27f53cp-4f,
     0x1.1d1116p-99f, 0x1.bba568p-2f, 0.0f, 0.0f, 0x1.3e7b1ap-99f, 0.0f,
     0x1.f74146p-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7d3ac4p-31f, 0.0f,
     0x1.c6cb02p-16f, 0.0f, 0x1.f605aap-79f, 0.0f, 0.0f, 0x1.79bee8p-18f,
     0x1.f58d36p-76f, 0x1.7fe1d2p-115f, 0.0f, 0x1.6a8456p-49f, 0.0f, 0x1.ded89cp-1f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b0c69p-7f, 0.0f, 0.0f, 0x1.0a029p-45f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.139e66p-62f, 0x1.88de34p-110f, 0.0f, 0.0f,
     0.0f, 0x1.d91edep-71f, 0.0f, 0.0f, 0x1.7811fp-29f, 0.0f, 0x1.971244p-10f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.6dd498p-17f, 0.0f, 0.0f, 0x1.768b76p-85f, 0.0f,
     0x1.151488p-118f, 0.0f, 0x1.66ccf2p-110f, 0.0f, 0x1.f2a442p-59f, 0x1.041d46p-19f,
     0x1.697e7cp-49f, 0.0f, 0.0f, 0.0f, 0x1.a51e08p-97f, 0x1.98764ap-15f,
     0x1.921cbap-21f, 0.0f, 0x1.36cca4p-66f, 0x1.f0e032p-106f, 0x1.02b034p-23f, 0.0f,
     0x1.87d102p-20f, 0.0f, 0x1.ba9b1p-27f, 0x1.522f92p-40f, 0x1.a1586ep-29f,
     0x1.6566eep-78f, 0x1.e7639ap-104f, 0.0f, 0x1.2d69c6p-31f, 0.0f, 0x1.1cb3ccp-116f,
     0.0f, 0x1.376a02p-9f, 0.0f, 0x1.ac75c4p-18f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a418acp-113f, 0.0f, 0x1.2c878p-64f, 0x1.28a462p-101f, 0.0f, 0.0f, 0.0f,
     0x1.f067f8p-46f, 0x1.e88b6ep-120f, 0.0f, 0x1.bedeccp-5f, 0x1.898624p-110f,
     0x1.4bdb7p-26f, 0.0f, 0.0f, 0x1.aa41c8p-91f, 0x1.8661d8p-103f, 0x1.8191a4p-91f,
     0x1.08bc66p-95f, 0x1.7f4a2cp-35f, 0.0f, 0.0f, 0.0f, 0x1.1474f8p-116f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.316354p-9f, 0x1.bb849ep-97f, 0.0f, 0.0f, 0x1.904ebp-124f,
     0x1.f9ff7cp-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.98f03p-63f,
     0x1.19b45p-53f, 0.0f, 0.0f, 0.0f, 0x1.d2ec5p-84f, 0.0f, 0.0f, 0x1.9e5c3p-14f,
     0.0f, 0x1.42f8a8p-72f, 0.0f, 0x1.ac7dap-43f, 0x1.cc2324p-13f, 0.0f, 0.0f, 0.0f,
     0x1.7527p-1f, 0.0f, 0x1.6cb9fp-84f, 0.0f, 0x1.010a64p-43f, 0x1.037528p-32f,
     0x1.7fb998p-38f, 0.0f, 0.0f, 0x1.2acd68p-24f, 0x1.6465ap-81f, 0.0f, 0.0f,
     0x1.6a6828p-79f, 0x1.94a9acp-45f, 0x1.98a2d6p-89f, 0x1.fe78dcp-107f,
     0x1.c0154p-48f, 0x1.dcc62ep-32f, 0.0f, 0x1.da4046p-34f, 0.0f, 0.0f,
     0x1.4d744cp-67f, 0x1.af8304p-19f, 0.0f, 0x1.f121ep-113f, 0.0f, 0.0f,
     0x1.6cb872p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.db76f2p-97f,
     0x1.2806dap-47f, 0.0f, 0.0f, 0x1.c54ea8p-50f, 0x1.bfa52cp-79f, 0.0f, 0.0f,
     0x1.e7468ap-123f, 0.0f, 0x1.e2400ap-7f, 0x1.7a4592p-24f, 0.0f, 0x1.667adap-57f,
     0.0f, 0.0f, 0x1.08eba8p-86f, 0.0f, 0.0f, 0x1.e928e6p-43f, 0.0f, 0.0f, 0.0f,
     0x1.52a246p-86f, 0x1.228a18p-31f, 0x1.aedcd8p-19f, 0x1.085786p-76f,
     0x1.ec983ap-111f, 0.0f, 0.0f, 0.0f, 0x1.134ccep-55f, 0x1.3a74d6p-117f, 0.0f,
     0.0f, 0.0f, 0x1.cb2e2cp-88f, 0x1.ab6836p-56f, 0.0f, 0x1.3a6588p-84f, 0.0f, 0.0f,
     0x1.ac66c4p-38f, 0x1.308c2cp-15f, 0.0f, 0x1.f1299ep-62f, 0x1.a64454p-101f, 0.0f,
     0.0f, 0x1.8829fap-106f, 0.0f, 0x1.6cf114p-37f, 0x1.356862p-67f, 0x1p0f, 0.0f,
     0x1.845ca2p-42f, 0x1.a9872p-4f, 0x1.e5f33cp-89f, 0x1.396378p-95f, 0.0f,
     0x1.3af6bcp-52f, 0x1.8076a4p-57f, 0.0f, 0.0f, 0.0f, 0x1.7b4936p-13f, 0x1p0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3b78p-52f, 0.0f, 0.0f, 0.0f,
     0x1.6c6ba6p-94f, 0x1.31f342p-41f, 0x1.48d288p-4f, 0.0f, 0.0f, 0x1.da8384p-123f,
     0x1.bfedbcp-13f, 0.0f, 0.0f, 0x1.749704p-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.9e406ap-29f, 0.0f, 0x1.a4469cp-5f, 0.0f, 0x1.e6d344p-41f,
     0x1.1fa70ep-31f, 0x1.407898p-19f, 0.0f, 0.0f, 0x1.e9360ap-49f, 0.0f,
     0x1.580c78p-126f, 0.0f, 0x1.6bc7a8p-120f, 0.0f, 0.0f, 0.0f, 0x1.04b25ep-5f, 0.0f,
     0x1.a129f4p-15f, 0.0f, 0x1.b43268p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.89d2d6p-19f,
     0.0f, 0.0f, 0x1.541e74p-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a1209ap-22f, 0.0f, 0.0f,
     0.0f, 0x1.756e52p-122f, 0x1.8e5902p-35f, 0.0f, 0.0f, 0.0f, 0x1.67111cp-85f, 0.0f,
     0.0f, 0x1.9359cap-45f, 0x1.b3e046p-36f, 0.0f, 0x1.1f56d4p-104f, 0x1.595cdp-13f,
     0.0f, 0x1.98ecaap-70f, 0x1.bb273ep-10f, 0.0f, 0x1.fa7482p-102f, 0.0f,
     0x1.703588p-81f, 0x1.04b33ap-122f, 0.0f, 0.0f, 0x1.c9e07p-67f, 0.0f,
     0x1.9ce7bcp-42f, 0.0f, 0.0f, 0x1.836784p-45f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f146d8p-119f, 0.0f, 0x1.cf5e9ap-73f, 0x1.0275f4p-113f, 0.0f, 0x1.c93eb4p-84f,
     0x1.35be42p-120f, 0.0f, 0.0f, 0x1.bb71ap-24f, 0x1.c10ccap-59f, 0.0f,
     0x1.988bbp-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fe790ap-100f, 0.0f,
     0x1.24d2c8p-9f, 0x1.f45706p-64f, 0.0f, 0x1.30509ep-117f, 0x1.543d74p-18f, 0.0f,
     0x1.122f4ap-108f, 0x1.82a986p-51f, 0.0f, 0.0f, 0x1.c40ae6p-33f, 0x1.687a2cp-61f,
     0.0f, 0x1.6f2bcp-49f, 0x1.c8352cp-32f, 0x1.327f4p-41f, 0.0f, 0.0f,
     0x1.e8b67p-91f, 0x1.0e9436p-77f, 0x1.e56a5p-14f, 0.0f, 0x1.56865ap-14f,
     0x1.c9c244p-42f, 0x1.df6298p-63f, 0x1.1bc6eep-88f, 0x1.aed86p-60f, 0.0f, 0.0f,
     0.0f, 0x1.0e55f6p-115f, 0x1.eb1c12p-98f, 0x1.ef5a2ep-13f, 0x1.cb7d4ep-97f,
     0x1.9b9efep-94f, 0.0f, 0x1.46f0cap-117f, 0x1.dc39b2p-102f, 0.0f, 0x1.cbbbf2p-17f,
     0.0f, 0x1.2b9a8p-47f, 0.0f, 0x1.5b36cep-26f, 0.0f, 0.0f, 0x1.ed2ea8p-25f,
     0x1.76bf58p-11f, 0.0f, 0x1.eb19fcp-24f, 0.0f, 0x1.9593ccp-26f, 0.0f, 0.0f, 0.0f,
     0x1.4d1754p-34f, 0x1.d9cd84p-88f, 0x1.617478p-102f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bf8e64p-118f, 0.0f, 0.0f, 0x1.a26feap-70f, 0x1.7a1b4ap-23f, 0.0f, 0.0f,
     0x1.fe2fb4p-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.997a42p-53f, 0.0f, 0.0f,
     0x1.fd4082p-124f, 0x1.d22bcp-14f, 0x1.8812d6p-18f, 0.0f, 0x1.1fed5cp-97f, 0.0f,
     0x1.5c3f2cp-22f, 0x1.e3f0b6p-103f, 0x1.1d778cp-123f, 0x1.89c29cp-74f,
     0x1.af1a78p-112f, 0x1.45b88ep-126f, 0x1.a37faep-84f, 0.0f, 0.0f, 0.0f,
     0x1.13ed28p-45f, 0x1.630f6ap-29f, 0x1.af59fp-112f, 0.0f, 0x1.5b5312p-1f, 0.0f,
     0x1.f5266ep-19f, 0x1.99415p-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.84f074p-76f,
     0x1.5fb354p-7f, 0x1.ce1a1ep-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c9c256p-4f, 0.0f, 0x1.1d9f32p-4f, 0x1.16c43p-112f, 0x1.4b759ap-56f, 0.0f,
     0.0f, 0x1.3229e8p-39f, 0x1.c5f16ep-88f, 0x1.eb3a4p-57f, 0.0f, 0x1.8c920ep-72f,
     0x1.5845e6p-11f, 0x1.e838a2p-67f, 0x1.2541ep-53f, 0x1.d311bp-112f,
     0x1.02bfdap-2f, 0x1.651612p-79f, 0.0f, 0.0f, 0.0f, 0x1.d70ed6p-88f,
     0x1.acf74ep-100f, 0x1.f9a7b2p-32f, 0x1.5957acp-58f, 0.0f, 0.0f, 0x1.153708p-1f,
     0.0f, 0x1.8c4804p-101f, 0.0f, 0.0f, 0.0f, 0x1.7800f2p-116f, 0x1.1117b2p-63f,
     0x1.adbebp-29f, 0x1.8a4b94p-125f, 0x1.3e342ap-15f, 0.0f, 0.0f, 0x1.9a08bp-34f,
     0.0f, 0x1.7f7412p-91f, 0.0f, 0x1.8c6158p-120f, 0x1.d26ab2p-88f, 0.0f, 0.0f,
     0x1.cc56a6p-49f, 0x1.be5658p-102f, 0x1.45312p-84f, 0.0f, 0.0f, 0.0f,
     0x1.501a78p-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9073c6p-53f, 0.0f, 0.0f,
     0x1.65cb5cp-70f, 0x1.3ba23ep-100f, 0x1.f0e342p-62f, 0.0f, 0.0f, 0x1.3c4806p-2f,
     0x1.714304p-63f, 0.0f, 0x1.d1c1a6p-58f, 0x1.a65764p-76f, 0x1.452136p-8f,
     0x1.514108p-34f, 0.0f, 0x1.4d53cap-117f, 0.0f, 0.0f, 0.0f, 0x1.944946p-35f, 0.0f,
     0.0f, 0x1.4f8158p-117f, 0x1.a3a01ep-26f, 0.0f, 0x1.9131d4p-116f, 0x1.7242bp-66f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.526ddep-75f, 0.0f, 0x1.7f1f22p-120f, 0.0f,
     0x1.0c310cp-35f, 0.0f, 0.0f, 0x1.7da866p-83f, 0.0f, 0.0f, 0x1.9368d2p-88f, 0.0f,
     0x1.54be3ap-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.012ed6p-68f, 0.0f, 0.0f, 0.0f,
     0x1.1eb16p-126f, 0.0f, 0x1.636cc2p-68f, 0.0f, 0.0f, 0x1.7e9448p-46f, 0.0f, 0.0f,
     0.0f, 0x1.8ba94ep-109f, 0x1.9a2104p-46f, 0.0f, 0.0f, 0x1.9ac19cp-41f, 0.0f,
     0x1.5b6604p-19f, 0x1.bcfa44p-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c6245p-25f, 0.0f,
     0x1.ab384cp-117f, 0x1.750f42p-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.35c8aep-35f, 0.0f,
     0.0f, 0x1.8d08dep-123f, 0.0f, 0.0f, 0x1.1243c6p-29f, 0.0f, 0x1.31ccecp-25f, 0.0f,
     0.0f, 0.0f, 0x1.e6d148p-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1a7e5cp-63f,
     0x1.9700fp-118f, 0x1.f6c63ap-34f, 0.0f, 0.0f, 0x1.9f2fd4p-79f, 0.0f,
     0x1.1a22e4p-51f, 0x1.5db7acp-113f, 0x1.fedf04p-7f, 0x1.dc7328p-20f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ed39d8p-80f, 0x1.4fdb08p-66f, 0x1.7d630cp-38f, 0.0f, 0.0f,
     0x1.c869e8p-49f, 0.0f, 0x1.a1e90ep-100f, 0.0f, 0.0f, 0x1.45ba1p-4f, 0.0f, 0.0f,
     0x1.6481f6p-115f, 0.0f, 0.0f, 0x1.ac576ap-126f, 0x1.cba426p-108f, 0.0f, 0.0f,
     0x1.52eea4p-44f, 0x1.1bb36p-2f, 0x1.201f9cp-9f, 0.0f, 0x1.8cb62p-21f, 0.0f,
     0x1.a3f92p-109f, 0x1.f79f2ep-42f, 0x1.b5e936p-7f, 0.0f, 0x1.d453eep-30f,
     0x1.74ebf6p-30f, 0.0f, 0.0f, 0x1.c948c2p-62f, 0.0f, 0.0f, 0.0f, 0x1.2a6532p-14f,
     0.0f, 0x1.cff304p-97f, 0x1.9152bep-58f, 0.0f, 0.0f, 0x1.e619a4p-62f, 0.0f,
     0x1.5a800ep-15f, 0.0f, 0x1.55ff14p-47f, 0.0f, 0.0f, 0x1.62541ep-80f,
     0x1.c07a8p-106f, 0.0f, 0x1.7c1322p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.124f7cp-60f, 0.0f
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
            tmp1 = Sleef_tanhf1_u10purecfma(tmp0);
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
    printf("Sleef_tanhf1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_tanhf1_u10purecfma bench acc %a\n", global_bench_acc);
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
