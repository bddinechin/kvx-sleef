/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_rintf4_avx2128.c --function Sleef_finz_rintf4_avx2128 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 4 --function-input-vector-size 4 --bench \
 *     --no-embedded-bin --target x86_avx2128
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
     0.0f, 0x1.0cce92p-78f, 0.0f, 0.0f, 0x1.591baep-98f, 0.0f, 0x1.91c412p-113f,
     0x1.4ab8a4p-5f, 0.0f, 0.0f, 0.0f, 0x1.aee15ep-16f, 0.0f, 0.0f, 0x1.98e9a8p-41f,
     0x1.66938p-120f, 0.0f, 0.0f, 0x1.4e8aaep-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7db31ap-61f, 0x1.a3f314p-99f, 0.0f, 0x1.f01ffp-103f, 0x1.24a0d4p-40f, 0.0f,
     0x1.dbc402p-78f, 0.0f, 0x1.3ec296p-44f, 0.0f, 0.0f, 0x1.ea9cdep-77f,
     0x1.89c796p-60f, 0.0f, 0x1.22ca86p-26f, 0x1.9e9084p-81f, 0.0f, 0.0f, 0.0f,
     0x1.c7ad04p-101f, 0x1.6db5acp-26f, 0x1.744d46p-75f, 0x1.38f978p-85f, 0.0f, 0.0f,
     0x1.511508p-109f, 0.0f, 0.0f, 0x1.60fa46p-39f, 0x1.89b18ep-8f, 0.0f, 0.0f,
     0x1.0f5982p-89f, 0x1.dc3572p-23f, 0x1.c8c72cp-41f, 0.0f, 0x1.7e387ep-72f,
     0x1.7a291cp-24f, 0.0f, 0.0f, 0.0f, 0x1.574cb8p-19f, 0x1.d00516p-20f,
     0x1.12aa42p-26f, 0.0f, 0x1.aad8c2p-41f, 0.0f, 0x1.e5a2b6p-5f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.796a4cp-46f, 0.0f, 0.0f, 0x1.f2ec5cp-70f, 0x1.879e92p-92f,
     0x1.decf24p-116f, 0.0f, 0.0f, 0.0f, 0x1.e64288p-79f, 0.0f, 0.0f, 0.0f,
     0x1.a4b15p-89f, 0.0f, 0.0f, 0x1.eead02p-118f, 0x1.0db44ep-83f, 0.0f,
     0x1.f7afd6p-97f, 0x1.93bf0ep-75f, 0x1.910e88p-35f, 0x1.20c34ep-103f,
     0x1.82dcfp-61f, 0x1.ed9a48p-107f, 0x1.9ffe7p-13f, 0.0f, 0x1.0dbcd6p-47f,
     0x1.07ed82p-33f, 0x1.c287e6p-46f, 0x1.4cdae4p-52f, 0x1.5d1276p-9f,
     0x1.138e92p-121f, 0.0f, 0x1.acbe62p-13f, 0x1.c89558p-16f, 0x1.407754p-32f, 0.0f,
     0x1.9929c4p-72f, 0x1.ea693ap-54f, 0x1.937da8p-87f, 0x1.a04bdcp-115f,
     0x1.7d31e8p-86f, 0.0f, 0.0f, 0x1.c59702p-77f, 0x1.01f4c2p-113f, 0x1.cf7ebap-1f,
     0x1.1bee62p-63f, 0x1.df36ccp-52f, 0x1.9aa98ep-55f, 0.0f, 0x1.324188p-77f,
     0x1.63a7c8p-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6a0bdcp-27f, 0.0f, 0x1.d958eep-37f,
     0.0f, 0.0f, 0.0f, 0x1.cab4f8p-124f, 0.0f, 0.0f, 0x1.31d012p-67f, 0.0f, 0.0f,
     0x1.f42812p-10f, 0x1.d7a624p-68f, 0x1.26c4c2p-56f, 0x1.612c28p-74f,
     0x1.58695p-43f, 0x1.9459fp-61f, 0x1.568f1cp-8f, 0.0f, 0x1.906db2p-82f, 0.0f,
     0.0f, 0x1.85928ep-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e1c5fap-125f,
     0x1.0c1f8ep-8f, 0.0f, 0x1.bbc4cap-77f, 0x1.94c5ecp-44f, 0.0f, 0x1.2c97d6p-25f,
     0.0f, 0x1.3b62b8p-96f, 0.0f, 0x1.0d126p-56f, 0x1.26eb26p-17f, 0x1.01ac06p-98f,
     0x1.0ef97cp-108f, 0x1.f6dd2cp-36f, 0.0f, 0x1.1788bap-96f, 0.0f, 0x1.2ae4eap-6f,
     0.0f, 0x1.fc0cb2p-63f, 0x1.1f6758p-78f, 0.0f, 0x1.57ab38p-13f, 0x1.59e5ecp-95f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.4621ep-65f, 0.0f, 0.0f, 0x1.db94e2p-16f, 0.0f,
     0x1.d3ca9ap-19f, 0x1.1e4698p-120f, 0.0f, 0.0f, 0.0f, 0x1.b607ecp-1f, 0.0f, 0.0f,
     0x1.a1c214p-119f, 0.0f, 0.0f, 0x1.33513cp-41f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cd75eap-24f, 0.0f, 0x1.ce47d6p-12f, 0x1.e40614p-40f, 0x1.ad0abp-47f,
     0x1.be0f8ap-66f, 0.0f, 0.0f, 0x1.66bddcp-19f, 0.0f, 0.0f, 0x1.48039p-52f, 0.0f,
     0x1.dae2eep-116f, 0x1.deb648p-74f, 0.0f, 0x1.f7c484p-111f, 0x1.7f21bcp-37f, 0.0f,
     0x1.05656ap-89f, 0.0f, 0x1.8067bcp-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.18efccp-62f,
     0.0f, 0.0f, 0x1.e9ac4cp-23f, 0x1.3155a4p-113f, 0x1.b5216ep-78f, 0x1.2768eap-109f,
     0.0f, 0x1.e1eeeap-80f, 0.0f, 0.0f, 0x1.f71198p-85f, 0x1.f97e7cp-24f, 0.0f, 0.0f,
     0x1.ebd638p-102f, 0.0f, 0.0f, 0x1.7a4306p-59f, 0x1.50e73cp-41f, 0.0f,
     0x1.b41896p-99f, 0x1.b33aaap-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4a57a4p-70f, 0.0f,
     0x1.18be16p-104f, 0.0f, 0x1.639218p-89f, 0x1.baa0a2p-123f, 0.0f, 0.0f, 0.0f,
     0x1.9d166cp-25f, 0.0f, 0x1.807d08p-91f, 0x1.b94be8p-9f, 0.0f, 0x1.12a77ap-27f,
     0.0f, 0.0f, 0x1.201c6cp-35f, 0x1.407624p-33f, 0.0f, 0.0f, 0.0f, 0x1.5c3968p-51f,
     0.0f, 0.0f, 0.0f, 0x1.d14c8p-81f, 0x1.4219b4p-73f, 0.0f, 0.0f, 0x1.822f4ep-44f,
     0.0f, 0.0f, 0x1.bdcddap-55f, 0.0f, 0x1.d4dfb4p-41f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.90fc16p-4f, 0x1.dafba4p-63f, 0x1.f7c718p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.033d4cp-37f, 0.0f, 0x1.c286d8p-2f, 0x1.68250cp-124f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a7f16p-70f, 0.0f, 0.0f, 0x1.86ac34p-80f, 0.0f, 0.0f,
     0x1.91b162p-122f, 0.0f, 0x1.ca6406p-77f, 0.0f, 0x1.d326fep-85f, 0x1.866fe4p-52f,
     0.0f, 0x1.f3c11ep-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.06bbf6p-118f,
     0.0f, 0x1.0054e4p-24f, 0x1.41180ep-106f, 0x1.144642p-42f, 0x1.5d3488p-78f,
     0x1.0b072cp-43f, 0.0f, 0.0f, 0x1.d913cap-33f, 0x1.cc93aep-100f, 0.0f, 0.0f,
     0x1.d31554p-48f, 0.0f, 0x1.629b96p-29f, 0.0f, 0x1.29265p-24f, 0x1.587c36p-93f,
     0x1.78b39p-35f, 0.0f, 0.0f, 0.0f, 0x1.92c158p-119f, 0.0f, 0.0f, 0x1.150decp-92f,
     0x1.deceb2p-90f, 0.0f, 0.0f, 0x1.5ece2ep-48f, 0x1.5fa3d6p-45f, 0x1.83873ep-123f,
     0.0f, 0x1.bd56dap-19f, 0x1.8431b4p-126f, 0.0f, 0.0f, 0x1.e66754p-86f, 0.0f,
     0x1.e9a7fcp-77f, 0x1.9b447ap-24f, 0x1.a9704ep-104f, 0x1.30f082p-9f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4eee2cp-72f, 0.0f, 0x1.a6997cp-12f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d6fd96p-14f, 0x1.461488p-20f, 0.0f, 0x1.0d96c4p-118f, 0x1.5a6048p-73f,
     0x1.c4c644p-38f, 0.0f, 0x1.bc15b6p-112f, 0x1.3bc916p-91f, 0x1.6d237p-100f,
     0x1.a8fd74p-53f, 0.0f, 0.0f, 0.0f, 0x1.80195cp-66f, 0x1.af8424p-89f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.81b462p-111f, 0.0f, 0x1.13791cp-66f, 0x1.94e48p-32f, 0.0f,
     0.0f, 0x1.2451c6p-67f, 0.0f, 0.0f, 0x1.eb8a3p-92f, 0.0f, 0x1.266e86p-119f,
     0x1.63c31ep-4f, 0.0f, 0.0f, 0x1.d93bcep-18f, 0x1.d80308p-65f, 0.0f,
     0x1.1b14dap-61f, 0.0f, 0x1.a4e72ap-52f, 0x1.30d6cap-126f, 0x1.114054p-74f, 0.0f,
     0.0f, 0x1.6b2468p-16f, 0x1.10417ep-84f, 0x1.74e08ep-25f, 0.0f, 0.0f,
     0x1.97028ep-76f, 0x1.4cd384p-71f, 0.0f, 0x1.ca51bcp-25f, 0.0f, 0x1.eeb96cp-70f,
     0.0f, 0x1.a8044p-5f, 0x1.670abap-13f, 0.0f, 0.0f, 0x1.8abe36p-33f, 0.0f,
     0x1.1dfefcp-97f, 0x1.b59a18p-109f, 0.0f, 0x1.7ec746p-19f, 0x1.78f3b2p-54f,
     0x1.7d597cp-19f, 0x1.d18a56p-120f, 0.0f, 0.0f, 0.0f, 0x1.8fa8e8p-90f,
     0x1.8b32ccp-65f, 0.0f, 0.0f, 0x1.07b0fap-126f, 0.0f, 0.0f, 0x1.4b880cp-39f, 0.0f,
     0x1.42a85ap-21f, 0.0f, 0x1.fe67bap-35f, 0x1.f14682p-119f, 0.0f, 0x1.d47506p-121f,
     0.0f, 0x1.b45de4p-48f, 0.0f, 0x1.839ffcp-118f, 0.0f, 0x1.84753ep-49f, 0.0f, 0.0f,
     0.0f, 0x1.3dc78ap-11f, 0x1.5d68fcp-35f, 0.0f, 0.0f, 0x1.c9d1d8p-89f,
     0x1.4dd92p-107f, 0x1.985f52p-32f, 0x1p0f, 0x1.571cf8p-102f, 0.0f, 0.0f,
     0x1.115198p-33f, 0x1.0bfe6ap-90f, 0x1.d692e4p-24f, 0.0f, 0.0f, 0x1.090b62p-123f,
     0x1.9ba8fp-34f, 0.0f, 0x1.a159bep-62f, 0.0f, 0.0f, 0.0f, 0x1.f39072p-11f,
     0x1.dbefdap-74f, 0x1.77dfeep-102f, 0x1.58aad8p-81f, 0.0f, 0.0f, 0x1.4d6bfcp-26f,
     0.0f, 0x1.5e7248p-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b6f42ap-86f, 0.0f,
     0x1.89e62ep-96f, 0.0f, 0.0f, 0x1.61a488p-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1535dp-9f, 0.0f, 0x1.03f316p-125f, 0.0f, 0x1.cb0c44p-18f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.abeed4p-69f, 0.0f, 0.0f, 0.0f, 0x1.7ae288p-9f, 0.0f, 0x1.b2a654p-19f,
     0.0f, 0x1.761a02p-67f, 0.0f, 0x1.362562p-11f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e9328cp-43f, 0x1.28b7b8p-51f, 0.0f, 0x1.4fed6ep-111f, 0x1.8c4dc8p-88f, 0.0f,
     0.0f, 0.0f, 0x1.2d31ep-126f, 0x1.2349f2p-113f, 0.0f, 0x1.766026p-6f, 0.0f,
     0x1.970eb4p-2f, 0.0f, 0x1.9989e2p-111f, 0x1.cb9cdep-55f, 0x1.353d1ep-90f,
     0x1.d2f656p-44f, 0x1.d10c3ep-24f, 0x1.a1d5bap-57f, 0.0f, 0.0f, 0.0f,
     0x1.a4bdcep-8f, 0x1.f8dceep-41f, 0x1.f59514p-38f, 0x1.249bdap-82f, 0.0f, 0.0f,
     0.0f, 0x1.1e0d72p-35f, 0.0f, 0.0f, 0x1.c2e63ep-4f, 0x1.ea04d6p-76f, 0.0f, 0.0f,
     0.0f, 0x1.bd2032p-121f, 0.0f, 0x1.281304p-27f, 0.0f, 0.0f, 0x1.6bd85p-2f, 0.0f,
     0x1.6c7f5p-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9601fp-121f,
     0x1.7a289ep-35f, 0.0f, 0x1.22ff96p-75f, 0x1.2d664cp-48f, 0x1.95d344p-118f,
     0x1.370196p-68f, 0x1.d7f524p-106f, 0.0f, 0x1.813cap-113f, 0.0f, 0x1.aac778p-21f,
     0.0f, 0x1.cefb02p-32f, 0.0f, 0x1.4da17p-123f, 0x1.dcfac8p-110f, 0x1.d0414p-17f,
     0x1.3c4136p-92f, 0.0f, 0x1.163952p-7f, 0x1.68bf68p-35f, 0x1.8bd434p-87f, 0x1p0f,
     0x1.44552ap-78f, 0x1.5dd202p-92f, 0.0f, 0.0f, 0x1.e12868p-17f, 0.0f, 0.0f,
     0x1.02627p-23f, 0x1.6feb5cp-69f, 0x1.38d75ap-45f, 0x1.5e3ee8p-56f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.3a623ep-88f, 0.0f, 0x1.93bc5cp-55f, 0.0f, 0.0f, 0.0f,
     0x1.8fa7cap-75f, 0x1.7d5c5ep-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.554632p-73f, 0.0f, 0.0f, 0.0f, 0x1.15d164p-7f, 0.0f, 0.0f, 0x1.d25044p-96f,
     0x1.9ef1b2p-7f, 0x1.3081b6p-115f, 0x1.71f2dep-40f, 0.0f, 0.0f, 0x1.7e1ecp-120f,
     0x1.f5b07ap-119f, 0.0f, 0.0f, 0.0f, 0x1.0ab25ep-78f, 0x1.21fa98p-23f, 0.0f, 0.0f,
     0.0f, 0x1.77717p-40f, 0.0f, 0.0f, 0x1.556f48p-87f, 0.0f, 0.0f, 0x1.7e0e2ap-103f,
     0x1.5a3d24p-122f, 0.0f, 0.0f, 0x1.3c6a8p-107f, 0.0f, 0.0f, 0.0f, 0x1.4a272cp-31f,
     0x1.301e24p-19f, 0x1.e78cf2p-59f, 0.0f, 0x1.3c5a0ep-86f, 0.0f, 0.0f, 0.0f,
     0x1.a5a8cap-38f, 0.0f, 0.0f, 0x1.753a54p-116f, 0.0f, 0x1.bf25eep-43f, 0.0f, 0.0f,
     0x1.0b1e82p-101f, 0.0f, 0x1.89f624p-51f, 0x1.588bdcp-44f, 0.0f, 0.0f,
     0x1.4d6b6p-38f, 0x1.774298p-23f, 0.0f, 0x1.8e8818p-37f, 0.0f, 0x1.58a1e4p-20f,
     0.0f, 0x1.ceaa88p-74f, 0.0f, 0x1.7c1a44p-118f, 0.0f, 0x1.17df62p-125f,
     0x1.379faep-58f, 0x1.5d647ap-1f, 0.0f, 0x1.0d230cp-30f, 0.0f, 0.0f,
     0x1.c1f076p-20f, 0x1.4e38f8p-98f, 0x1.c88902p-40f, 0.0f, 0x1.a9414cp-114f, 0.0f,
     0x1.a83bbp-45f, 0x1.f93478p-61f, 0.0f, 0.0f, 0x1.d1bf6ep-72f, 0.0f, 0.0f, 0.0f,
     0x1.709066p-123f, 0x1.ad0d64p-11f, 0.0f, 0.0f, 0x1.a67224p-86f, 0x1.d646e6p-12f,
     0.0f, 0x1.6dfda4p-77f, 0x1.cd31f2p-92f, 0.0f, 0x1.aa8abap-63f, 0x1.0c118cp-120f,
     0x1.d9a022p-117f, 0.0f, 0.0f, 0.0f, 0x1.d1affp-23f, 0x1.587b2p-104f,
     0x1.aedc24p-35f, 0.0f, 0.0f, 0x1.6b8c2ap-4f, 0.0f, 0.0f, 0x1.4f5f1cp-77f,
     0x1.e56b4cp-78f, 0x1.e9e252p-43f, 0x1.4c2456p-47f, 0x1.aa1c86p-91f, 0.0f,
     0x1.2572eep-125f, 0x1.75adfep-90f, 0.0f, 0.0f, 0x1.71c25cp-125f, 0x1.cedcf4p-83f,
     0x1.ff6f6ep-105f, 0.0f, 0x1.549ba4p-18f, 0.0f, 0x1.77c0f4p-66f, 0.0f,
     0x1.cbb532p-72f, 0x1.9841dp-98f, 0x1.c4af8cp-107f, 0.0f, 0x1.adfeccp-60f, 0.0f,
     0x1.0789dcp-5f, 0x1.65d858p-33f, 0.0f, 0x1.0fa966p-123f, 0.0f, 0x1.a4920ap-51f,
     0.0f, 0.0f, 0x1.77babp-40f, 0x1.a38872p-106f, 0x1.4a125cp-108f, 0x1.d15e9ep-23f,
     0x1.acbd9ap-48f, 0.0f, 0x1.4840b4p-10f, 0.0f, 0.0f, 0x1.81a1ep-115f,
     0x1.34c942p-123f, 0x1.b36928p-73f, 0x1.9b8588p-22f, 0x1.e971c6p-16f,
     0x1.b8b82ap-27f, 0x1.32d09cp-101f, 0.0f, 0.0f, 0x1.c399e6p-109f, 0x1.7b43fp-18f,
     0x1.6982e4p-70f, 0x1.96d7fcp-76f, 0.0f, 0.0f, 0.0f, 0x1.39631ap-5f,
     0x1.a050a4p-8f, 0x1.1d3fc6p-82f, 0.0f, 0x1.0bf988p-31f, 0.0f, 0.0f,
     0x1.b67eaap-99f, 0.0f, 0.0f, 0x1.d865cep-94f, 0x1.c50928p-113f, 0x1.f4953ap-91f,
     0x1.c69ab4p-125f, 0.0f, 0.0f, 0.0f, 0x1.b0c0d4p-12f, 0x1.f9826p-78f, 0.0f,
     0x1.3c44f2p-25f, 0x1.ca0674p-63f, 0x1.b20bep-13f, 0.0f, 0.0f, 0x1.1de6acp-109f,
     0.0f, 0.0f, 0x1.5fd0ccp-76f, 0.0f, 0.0f, 0.0f, 0x1.245a92p-2f, 0x1.0a2938p-11f,
     0.0f, 0.0f, 0.0f, 0x1.98ddf2p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d0439cp-96f,
     0.0f, 0x1.b44704p-31f, 0.0f, 0.0f, 0.0f, 0x1.d5e2d2p-63f, 0x1.0a3826p-118f, 0.0f,
     0x1.177754p-110f, 0x1.d033ap-120f, 0x1.7cb59cp-6f, 0.0f, 0x1.c852cp-10f,
     0x1.59a308p-91f, 0.0f, 0x1.fd343ap-42f, 0.0f, 0.0f, 0.0f, 0x1.137bb6p-19f, 0.0f,
     0x1.21a456p-101f, 0.0f, 0.0f, 0x1.8cf22ap-60f, 0.0f, 0x1.f8ee5p-11f, 0.0f, 0.0f,
     0.0f, 0x1.6edbp-64f, 0.0f, 0x1.6fcd26p-69f, 0x1.cdfe4p-14f, 0x1.c438f6p-63f,
     0x1.0b618ap-40f, 0.0f, 0.0f, 0.0f, 0x1.97c70ap-77f, 0.0f, 0.0f, 0x1.2cf10ap-1f,
     0.0f, 0.0f, 0.0f, 0x1.e49f42p-122f, 0x1.492e8p-7f, 0.0f, 0x1.f66bp-113f,
     0x1.8e36d4p-102f, 0.0f, 0x1.6e1236p-60f, 0x1.aaee64p-85f, 0.0f, 0.0f,
     0x1.6688cap-126f, 0x1.40873cp-41f, 0.0f, 0.0f, 0x1.17e5a4p-4f, 0x1.3de49p-5f,
     0.0f, 0x1p0f, 0x1.7c89eep-118f, 0x1.51a098p-16f, 0.0f, 0x1.18d202p-60f, 0.0f,
     0x1.0ab55ep-19f, 0x1.f961aap-75f, 0x1.d0b228p-89f, 0x1.3f6436p-79f, 0.0f, 0.0f,
     0x1.a738fp-121f, 0x1.7de778p-53f, 0.0f, 0x1.3441dap-68f, 0x1.3491d4p-98f, 0.0f,
     0x1.4534bep-121f, 0x1.362bb6p-48f, 0x1.11385ap-93f, 0x1.a0407ap-78f, 0.0f, 0.0f,
     0.0f, 0x1.07f1d8p-70f, 0x1.63376ep-78f, 0.0f, 0.0f, 0x1.e15264p-66f, 0.0f,
     0x1.326a72p-10f, 0x1.f4ba1p-107f, 0.0f, 0x1.2d7ac6p-110f, 0x1.51ebbp-113f,
     0x1.f6da8ep-102f, 0x1.51d606p-51f, 0x1.50b2dap-76f, 0x1.d9e5ap-85f,
     0x1.49dbaap-39f, 0x1.d89938p-114f, 0.0f, 0x1.f77a04p-115f, 0x1.2ed7fep-93f, 0.0f,
     0.0f
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
            tmp1 = Sleef_finz_rintf4_avx2128(tmp0);
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
    printf("Sleef_finz_rintf4_avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_rintf4_avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
