/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_acoshf1_u10purecfma.c --function \
 *     Sleef_finz_acoshf1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0.0f, 0.0f, 0x1.d601b6p-73f, 0x1.0de0e4p-8f, 0.0f, 0x1.2f6e82p-22f,
     0x1.aef736p-30f, 0x1.215fbcp-110f, 0.0f, 0.0f, 0x1.ca9caap-125f, 0x1.1e0138p-21f,
     0x1.9f560cp-51f, 0x1.496032p-66f, 0.0f, 0x1.7cc04ap-108f, 0x1.17a954p-121f,
     0x1.eae4aep-17f, 0x1.13dc26p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2673b6p-31f, 0x1.2e5352p-73f, 0.0f, 0.0f, 0.0f, 0x1.26e9ap-43f,
     0x1.7881ep-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.441b4cp-46f, 0x1.6f036ep-11f,
     0x1.201026p-117f, 0.0f, 0.0f, 0x1.252da2p-90f, 0.0f, 0x1.a610d6p-47f, 0.0f,
     0x1.6171b2p-14f, 0.0f, 0x1.5f002cp-23f, 0.0f, 0x1.cc2cc4p-75f, 0.0f, 0.0f,
     0x1.e827eap-101f, 0x1.eec9dep-30f, 0x1.41bfe8p-108f, 0.0f, 0x1.189a4cp-62f,
     0x1.c0c646p-41f, 0.0f, 0x1.44d7b4p-23f, 0.0f, 0x1.868ffcp-69f, 0x1.67eab8p-120f,
     0x1.9b4464p-98f, 0x1.cb07a4p-44f, 0.0f, 0x1.be63ep-58f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.eb2686p-63f, 0x1.b16dp-85f, 0x1.d0f702p-102f, 0x1.df1a5ap-28f,
     0x1.23905cp-85f, 0.0f, 0.0f, 0x1.a6d046p-42f, 0x1.2c8632p-6f, 0x1.28aa16p-125f,
     0.0f, 0x1.35dfe8p-81f, 0x1.f50e56p-54f, 0x1.ad911p-6f, 0x1.10ce52p-3f,
     0x1.a41514p-1f, 0x1.c22822p-126f, 0.0f, 0.0f, 0x1.1abaa8p-57f, 0x1.06ac24p-108f,
     0.0f, 0x1.82a67ap-66f, 0x1.fb49b2p-124f, 0.0f, 0.0f, 0x1.e5cca8p-64f,
     0x1.83284p-48f, 0x1.d600c8p-114f, 0x1.e0d326p-86f, 0.0f, 0x1.df6a6cp-25f, 0.0f,
     0x1.b1aa6ep-63f, 0x1.cf83eep-38f, 0x1.3e924ap-78f, 0x1.b71e38p-66f,
     0x1.a8cf4cp-57f, 0x1.643a6p-59f, 0.0f, 0.0f, 0x1.bd1436p-101f, 0x1.fe848ep-100f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7474f6p-8f, 0.0f, 0x1.66f4a8p-59f, 0.0f,
     0x1.2108aap-21f, 0x1.2097c2p-80f, 0x1.caf2d2p-6f, 0x1.2de546p-74f,
     0x1.95b14ep-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2778ep-78f, 0.0f, 0.0f,
     0x1.b0c324p-104f, 0x1.8b36cep-121f, 0.0f, 0x1.2d605cp-71f, 0.0f, 0.0f, 0.0f,
     0x1.919faap-85f, 0x1.9d94fap-83f, 0x1.47997cp-36f, 0x1.0ccfd4p-72f,
     0x1.a045c8p-112f, 0.0f, 0.0f, 0x1.f2c8c2p-58f, 0.0f, 0.0f, 0.0f,
     0x1.40e882p-120f, 0x1.a820dep-63f, 0x1.9bafd2p-56f, 0.0f, 0.0f, 0.0f,
     0x1.ba1beap-36f, 0x1.691ad4p-22f, 0.0f, 0.0f, 0.0f, 0x1.1d63b4p-39f,
     0x1.cf176ap-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4c0316p-122f, 0.0f, 0x1.033e96p-55f,
     0x1.58b8acp-4f, 0.0f, 0.0f, 0.0f, 0x1.92b592p-80f, 0x1.6abc0cp-102f,
     0x1.0a5128p-113f, 0.0f, 0x1.a44a4ap-115f, 0x1.a7fe56p-15f, 0.0f, 0x1.7b1876p-42f,
     0x1.38b20ap-88f, 0x1.92c042p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.16d908p-43f,
     0x1.deeebap-106f, 0.0f, 0x1.5fac1ep-25f, 0x1.0f2902p-48f, 0.0f, 0.0f, 0.0f,
     0x1.6437dep-111f, 0.0f, 0.0f, 0.0f, 0x1.a9b796p-11f, 0x1.6eb75p-88f, 0.0f,
     0x1.e76686p-113f, 0.0f, 0.0f, 0x1.fdb124p-126f, 0.0f, 0.0f, 0.0f,
     0x1.ef9d5cp-68f, 0.0f, 0x1.3dec7ap-116f, 0x1.ed65f6p-18f, 0.0f, 0.0f, 0.0f,
     0x1.f523aep-61f, 0x1.973f88p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.29ac5p-35f,
     0x1.fb445ep-7f, 0x1.b06cd6p-122f, 0x1.516a98p-26f, 0x1.580fc8p-83f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.998db8p-111f, 0.0f, 0x1.667648p-16f, 0.0f,
     0x1.40ea4ap-111f, 0.0f, 0.0f, 0x1.8aa342p-26f, 0.0f, 0x1.7a9cb2p-99f, 0.0f, 0.0f,
     0.0f, 0x1.801cacp-117f, 0.0f, 0.0f, 0x1.8c1f26p-18f, 0.0f, 0x1.38dc48p-109f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c3027ep-36f, 0x1.ff7bcep-1f, 0x1.aa8cb4p-123f,
     0x1.b74966p-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5c52bcp-114f,
     0.0f, 0x1.bc7caep-20f, 0.0f, 0x1.ad281cp-70f, 0x1.9aed8ep-37f, 0x1.686ecp-16f,
     0.0f, 0.0f, 0x1.d60f46p-15f, 0x1.b4653cp-98f, 0x1.934618p-81f, 0x1.6d2df8p-77f,
     0.0f, 0x1.04c368p-38f, 0.0f, 0x1.fc1b5ap-103f, 0x1.4f0a9p-69f, 0x1.b72638p-38f,
     0.0f, 0.0f, 0.0f, 0x1.03a21cp-102f, 0.0f, 0x1.5e3b56p-54f, 0.0f, 0.0f,
     0x1.84a86ap-65f, 0.0f, 0x1.112a1cp-111f, 0x1.3f65fp-110f, 0.0f, 0x1.0ac724p-15f,
     0.0f, 0.0f, 0x1.530f1cp-14f, 0x1.320c3ep-26f, 0x1.b2ee1ap-79f, 0x1.7c4a94p-23f,
     0x1.e07e6cp-110f, 0x1.5e39a6p-54f, 0x1.a61d8p-109f, 0x1.293262p-78f, 0.0f, 0.0f,
     0x1.7300dcp-126f, 0x1.dd8364p-29f, 0x1.140246p-82f, 0.0f, 0.0f, 0.0f,
     0x1.c91948p-81f, 0.0f, 0x1.915d14p-45f, 0x1.d619fap-78f, 0.0f, 0.0f,
     0x1.b3b93p-10f, 0x1.6cb506p-113f, 0.0f, 0x1.e3fb94p-102f, 0x1.5a8922p-84f, 0.0f,
     0x1.a54dd4p-22f, 0.0f, 0x1.356f34p-44f, 0.0f, 0x1.68b5acp-117f, 0x1.31caecp-78f,
     0.0f, 0x1.6c8fa6p-16f, 0x1.623b12p-63f, 0.0f, 0x1.bfd388p-88f, 0x1.b9f7bep-122f,
     0x1.9d5528p-3f, 0x1.c9f384p-108f, 0x1.8a5574p-97f, 0.0f, 0.0f, 0x1.ff07f2p-50f,
     0x1.39a968p-112f, 0x1.bf5674p-95f, 0x1.ca809ep-13f, 0.0f, 0x1.251d78p-105f, 0.0f,
     0x1.2ab20ep-47f, 0.0f, 0x1.1478c4p-35f, 0.0f, 0.0f, 0x1.2a77f4p-22f,
     0x1.a9694ap-93f, 0.0f, 0x1.952abp-12f, 0x1.4d5ee6p-36f, 0x1.27c89p-1f,
     0x1.35020ap-67f, 0x1.c1996cp-87f, 0x1.06b1c8p-107f, 0x1.356a68p-62f,
     0x1.93819p-23f, 0x1.fef5ap-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e39628p-11f,
     0.0f, 0.0f, 0x1.932eecp-52f, 0x1.a8b3acp-86f, 0x1.6add16p-30f, 0.0f, 0.0f, 0.0f,
     0x1.7f0006p-73f, 0.0f, 0x1.cf4d3ep-79f, 0x1.3e63a8p-45f, 0x1.abfba8p-107f, 0.0f,
     0.0f, 0.0f, 0x1.4b5602p-15f, 0.0f, 0x1.ac54dp-74f, 0x1.9d3754p-35f, 0.0f,
     0x1.fcd7e2p-4f, 0x1.9232cep-50f, 0.0f, 0x1.4073p-37f, 0x1p0f, 0x1.7bff56p-122f,
     0x1.7aaf66p-88f, 0x1.a815e6p-74f, 0.0f, 0.0f, 0x1.0062bep-74f, 0x1.bf9daep-34f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.55c202p-70f, 0.0f, 0.0f, 0.0f, 0x1.a7a874p-47f,
     0x1.ce5a88p-105f, 0x1.8fbe4ep-97f, 0x1.b6ca7cp-92f, 0x1.72e38cp-69f, 0.0f, 0.0f,
     0x1.d3f54p-55f, 0x1.59342ap-55f, 0x1.d8ef62p-48f, 0x1.4ff52ap-28f, 0.0f,
     0x1.615942p-82f, 0.0f, 0x1.f50f62p-14f, 0.0f, 0.0f, 0.0f, 0x1.980cbcp-98f, 0.0f,
     0x1.c8a004p-107f, 0x1.e5c5dp-109f, 0x1.dc3bc4p-89f, 0.0f, 0.0f, 0x1.54d19p-91f,
     0x1.a6ed4ap-27f, 0.0f, 0.0f, 0x1.69dbfcp-73f, 0x1.18ca02p-126f, 0.0f,
     0x1.0c43b2p-101f, 0.0f, 0.0f, 0.0f, 0x1.895274p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b4cc96p-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f793e2p-111f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.98fcaep-39f, 0.0f, 0x1.6798c2p-63f, 0x1.2f11e4p-53f,
     0x1.ef4f92p-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.032f22p-76f, 0x1.5eb39p-89f,
     0x1.8136cp-11f, 0x1.93554cp-70f, 0x1.c493bcp-116f, 0x1.1a1f1p-57f, 0.0f,
     0x1.800adp-50f, 0.0f, 0x1.83c404p-38f, 0x1.630ee8p-125f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ac5cbap-46f, 0.0f, 0.0f, 0x1.769172p-107f, 0x1.7287fap-102f, 0.0f,
     0.0f, 0x1.66c1c6p-91f, 0x1.443f6cp-36f, 0x1.08d872p-52f, 0x1.f8ac6ep-76f,
     0x1.740c94p-117f, 0x1.3282dp-68f, 0x1.5be10ep-77f, 0.0f, 0.0f, 0.0f,
     0x1.bba862p-23f, 0.0f, 0x1.e41858p-65f, 0x1.4e14e6p-80f, 0.0f, 0x1.3d968cp-121f,
     0x1.383ef4p-61f, 0.0f, 0x1.4fa508p-7f, 0x1.f6f8dcp-18f, 0.0f, 0x1.0d2bd4p-58f,
     0x1.2d1daap-69f, 0x1.f93818p-13f, 0.0f, 0x1.abc152p-24f, 0.0f, 0x1.19060ap-122f,
     0.0f, 0x1.7cacecp-109f, 0.0f, 0x1.442006p-90f, 0.0f, 0x1.2f4816p-86f,
     0x1.f6707ap-53f, 0.0f, 0x1.d9529ap-91f, 0.0f, 0x1.7d2cb4p-40f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4635cep-113f, 0.0f, 0.0f, 0.0f, 0x1.f0b906p-69f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.25348cp-108f, 0.0f, 0x1.a8ebcap-93f, 0x1.631e68p-42f, 0x1.06535p-114f,
     0x1.ffe3fap-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d2762p-66f, 0x1.b86346p-78f, 0.0f,
     0x1.c2f88ap-17f, 0x1.cbda3p-94f, 0x1.99222cp-113f, 0x1.4683a2p-111f, 0.0f,
     0x1.5bfcaep-47f, 0x1.94513ep-45f, 0.0f, 0.0f, 0x1.fc5de4p-66f, 0.0f, 0.0f,
     0x1.61b442p-82f, 0.0f, 0x1.5b3f0ap-99f, 0x1.c759a4p-27f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.5a60ccp-61f, 0x1.b96938p-107f, 0x1.27db9ep-69f, 0x1.31f84ep-48f,
     0x1.2326e6p-73f, 0x1.be50fep-109f, 0x1.86f57ep-32f, 0.0f, 0x1.381e38p-80f, 0.0f,
     0x1.ea96d8p-121f, 0x1.31e78cp-26f, 0x1.74684ap-119f, 0x1.fa5c04p-10f, 0.0f,
     0x1.dd918cp-74f, 0.0f, 0x1.c1c02ap-72f, 0x1.7a7f3p-81f, 0x1.484c98p-35f,
     0x1.8bdc46p-89f, 0.0f, 0x1.c1ac46p-111f, 0x1.552ef4p-7f, 0.0f, 0x1.2c6c4ep-68f,
     0.0f, 0x1.c56d4ap-100f, 0.0f, 0.0f, 0x1.ffa524p-68f, 0.0f, 0x1.3df2e8p-33f, 0.0f,
     0.0f, 0x1.8f2fbep-9f, 0.0f, 0x1.1a3238p-95f, 0x1.27cb94p-10f, 0.0f, 0.0f,
     0x1.72a362p-64f, 0.0f, 0x1.705cc2p-109f, 0.0f, 0x1.0e8e52p-77f, 0x1.563b4ap-68f,
     0.0f, 0x1.ff3466p-33f, 0x1.ce428cp-106f, 0.0f, 0.0f, 0x1.1e5204p-89f, 0.0f, 0.0f,
     0x1.e0f8f2p-126f, 0.0f, 0x1.725f82p-126f, 0.0f, 0.0f, 0x1.82be8ep-18f,
     0x1.cc648cp-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8e387ap-67f, 0.0f, 0.0f,
     0.0f, 0x1.a477p-10f, 0.0f, 0.0f, 0x1.738de8p-32f, 0.0f, 0x1.2bbf26p-20f, 0.0f,
     0.0f, 0x1.0b8b4ap-98f, 0.0f, 0.0f, 0x1.76738ap-102f, 0x1.dd4f22p-36f,
     0x1.25bef6p-49f, 0x1.e2f4cp-48f, 0x1.176538p-85f, 0.0f, 0x1.7673aep-109f, 0.0f,
     0.0f, 0x1.cbffaep-35f, 0x1.c2e4e2p-48f, 0.0f, 0x1.cc156p-31f, 0.0f,
     0x1.ac5782p-100f, 0x1.36cf26p-66f, 0.0f, 0x1.212382p-91f, 0x1.7df454p-102f, 0.0f,
     0x1.914122p-111f, 0.0f, 0x1.87dc9p-32f, 0x1p0f, 0x1.128754p-33f, 0x1.53baeep-11f,
     0x1.8f16a8p-29f, 0.0f, 0x1.4b3d34p-31f, 0.0f, 0.0f, 0x1.b29b08p-30f,
     0x1.61dad2p-117f, 0x1.13e098p-118f, 0.0f, 0.0f, 0x1.d46116p-70f, 0x1.e6e5c2p-56f,
     0x1.eb8254p-114f, 0x1.e05416p-30f, 0x1.91846cp-93f, 0.0f, 0x1.5cfea2p-12f, 0.0f,
     0.0f, 0.0f, 0x1.9e001cp-42f, 0x1.1a025ep-112f, 0x1.33c868p-120f, 0.0f, 0.0f,
     0x1.77b958p-61f, 0x1.c46852p-5f, 0x1.290b44p-104f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e60094p-117f, 0.0f, 0x1.3bd3f6p-22f, 0x1.94203cp-74f, 0x1.0aa52cp-79f,
     0x1.426d98p-15f, 0x1.b99a5p-9f, 0.0f, 0.0f, 0x1.9356c6p-121f, 0.0f, 0.0f,
     0x1.b3d128p-119f, 0x1.edf4f4p-117f, 0.0f, 0x1.8432ap-39f, 0x1.2b5184p-43f,
     0x1.6ab96p-4f, 0x1.050e5cp-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d86c08p-42f,
     0.0f, 0x1.b9bb88p-39f, 0x1.bfa95ep-121f, 0.0f, 0x1.96669ep-15f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.996fcap-29f, 0.0f, 0x1.a4d176p-97f, 0x1.2b9888p-109f, 0x1.9db71ap-69f,
     0.0f, 0x1.a18d8p-22f, 0.0f, 0.0f, 0.0f, 0x1.b3ace8p-69f, 0.0f, 0.0f,
     0x1.e2d73ap-27f, 0x1.0b3f6ep-32f, 0.0f, 0.0f, 0x1.e66a3ap-21f, 0x1.8af794p-34f,
     0x1.100744p-70f, 0x1.971b46p-17f, 0x1.09a28ap-5f, 0.0f, 0x1.3732b6p-111f, 0.0f,
     0x1.9cc82ap-68f, 0x1.0fb22p-117f, 0x1.4a16a2p-115f, 0x1.14f466p-86f, 0.0f, 0.0f,
     0.0f, 0x1.66ae42p-55f, 0.0f, 0.0f, 0.0f, 0x1.df8e62p-122f, 0.0f, 0.0f,
     0x1.83be44p-52f, 0x1.6d0a78p-47f, 0.0f, 0x1.72e974p-123f, 0x1.76b4ap-87f, 0.0f,
     0x1.d7e158p-94f, 0.0f, 0.0f, 0.0f, 0x1.74f9bap-97f, 0x1.3f6976p-12f,
     0x1.cad58ap-19f, 0x1.f3d68p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.94ae3cp-59f,
     0x1.db5bc8p-79f, 0x1.a2bbaap-121f, 0x1.ae5f04p-59f, 0.0f, 0x1.e41112p-93f,
     0x1.db4ddep-101f, 0.0f, 0.0f, 0x1.a03a72p-43f, 0x1.8419dp-87f, 0x1.c1a91cp-9f,
     0x1.ade586p-4f, 0x1.946ddep-95f, 0.0f, 0x1.e20f2p-52f, 0.0f, 0x1.56fd6p-8f, 0.0f,
     0x1.465056p-37f, 0.0f, 0x1.e1dde8p-101f, 0.0f, 0.0f, 0.0f, 0x1.cd3ad8p-38f,
     0x1.9e972ap-26f, 0.0f, 0x1.bdd0aep-40f, 0x1.67361p-28f, 0.0f, 0.0f,
     0x1.962d1cp-95f, 0.0f, 0x1.0dfccap-44f, 0x1.b45c46p-105f, 0x1.28e2p-29f, 0.0f,
     0.0f, 0.0f, 0x1.f9e8a6p-63f, 0x1.4c5d4ap-79f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c1227p-36f, 0x1.95298cp-120f, 0.0f, 0.0f, 0.0f, 0x1.909222p-27f,
     0x1.1bf3c8p-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9b32d8p-111f, 0x1.4a7bb2p-34f,
     0x1.8d54bp-109f, 0.0f, 0x1p0f, 0.0f, 0x1.a70d72p-110f, 0x1.8d6bd6p-123f, 0.0f,
     0x1.6f75bcp-79f, 0.0f, 0.0f, 0.0f, 0x1.d5cbc6p-107f, 0.0f, 0x1.5de5dap-56f, 0.0f,
     0.0f, 0x1.4959dcp-121f, 0.0f, 0x1.c40ef4p-17f, 0.0f, 0.0f, 0x1.e87e3cp-103f,
     0.0f, 0x1.83b498p-48f, 0x1.12dc36p-82f, 0.0f, 0x1.05ff68p-58f, 0x1.28b1c8p-107f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.81e86p-10f, 0.0f, 0x1.8c8a1ap-72f,
     0.0f, 0.0f, 0.0f, 0x1.915c52p-106f, 0.0f, 0.0f, 0.0f, 0x1.b18e96p-102f, 0.0f,
     0x1.056788p-35f, 0.0f, 0x1.96a354p-101f, 0.0f, 0.0f, 0.0f, 0x1.861f24p-53f,
     0x1.36f85ep-106f, 0.0f, 0x1.7a97fcp-37f, 0x1.246966p-86f, 0x1.7c2156p-94f, 0.0f,
     0.0f, 0x1.fa0a68p-65f, 0.0f, 0.0f, 0x1.590e02p-15f, 0.0f, 0x1.3edddep-42f, 0.0f,
     0x1.d85ceap-99f, 0.0f, 0x1.e043aep-75f, 0.0f, 0x1.d8fc46p-15f, 0.0f, 0.0f,
     0x1.cf4bdap-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b9cf1p-99f, 0.0f,
     0x1.170942p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f6d1f4p-24f,
     0x1.54d734p-83f
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
            tmp1 = Sleef_finz_acoshf1_u10purecfma(tmp0);
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
    printf("Sleef_finz_acoshf1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_acoshf1_u10purecfma bench acc %a\n", global_bench_acc);
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
