/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sinf1_u35purecfma.c --function \
 *     Sleef_finz_sinf1_u35purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile float external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.cc7b2p-55f, 0.0f, 0.0f, 0x1.1be778p-62f, 0.0f, 0x1.d7c25cp-68f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.93ebfap-123f, 0x1.511772p-105f, 0x1.336ac8p-42f, 0.0f,
     0x1.9e8ba8p-52f, 0x1.5396d6p-17f, 0x1.11da02p-29f, 0x1.c650a8p-122f, 0.0f, 0.0f,
     0x1.cefd44p-50f, 0.0f, 0.0f, 0.0f, 0x1.6865d8p-91f, 0.0f, 0x1.1e7d9cp-69f, 0.0f,
     0x1.5be912p-21f, 0.0f, 0x1.401842p-1f, 0x1.83d4ccp-100f, 0x1.3b98bp-75f,
     0x1.041cap-65f, 0x1.dde83cp-23f, 0x1.377f0ep-44f, 0x1.36554ep-86f, 0.0f, 0.0f,
     0.0f, 0x1.9f906ap-34f, 0x1.bb22fap-8f, 0.0f, 0.0f, 0.0f, 0x1.802fdp-77f, 0.0f,
     0.0f, 0x1.e1c64p-18f, 0x1.e2bc9cp-105f, 0.0f, 0x1.659dep-36f, 0.0f,
     0x1.3ad786p-8f, 0x1.3beb7cp-28f, 0x1.61dc5p-18f, 0x1.d55264p-39f,
     0x1.b78dccp-27f, 0x1.78f00cp-101f, 0x1.c82146p-76f, 0.0f, 0x1.d8e6b6p-36f,
     0x1.b570f8p-42f, 0.0f, 0.0f, 0x1.1cf94p-39f, 0.0f, 0.0f, 0.0f, 0x1.4b395cp-43f,
     0x1.88e70ep-4f, 0x1.2ffbb6p-75f, 0.0f, 0x1.c1003ap-85f, 0x1.bd7f4ap-111f, 0.0f,
     0x1.22fab2p-97f, 0x1.e13d26p-96f, 0.0f, 0x1.eeb86ep-35f, 0x1.bc828cp-70f,
     0x1.e9533ep-32f, 0x1.539c8p-112f, 0x1.af0c94p-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.38ad0ap-23f, 0x1.b40aa4p-30f, 0x1.af3ff2p-84f, 0x1.f19902p-13f,
     0x1.d60128p-95f, 0x1.b64424p-57f, 0x1.63d6p-39f, 0x1.777e8ep-99f,
     0x1.1f4158p-37f, 0.0f, 0.0f, 0x1.fbe252p-7f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b2dbeep-126f, 0.0f, 0x1.d62904p-103f, 0.0f, 0.0f, 0.0f, 0x1.23025ap-77f,
     0x1.4da88ep-13f, 0x1.43b824p-99f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.189174p-15f, 0x1.c34be8p-104f, 0.0f, 0.0f, 0.0f, 0x1.e19396p-26f, 0.0f,
     0x1.e5957p-80f, 0.0f, 0.0f, 0x1.bca1fep-15f, 0x1.42da14p-85f, 0x1.3572e6p-76f,
     0.0f, 0.0f, 0x1.20e66cp-123f, 0x1.4b794ap-31f, 0.0f, 0.0f, 0.0f, 0x1.b4822p-23f,
     0.0f, 0x1.9abd24p-100f, 0.0f, 0.0f, 0x1.ddba2cp-106f, 0.0f, 0x1.bcd436p-52f,
     0x1.0aebb2p-48f, 0.0f, 0x1.61ee84p-17f, 0x1.f15676p-4f, 0x1.7be0eep-47f, 0.0f,
     0.0f, 0.0f, 0x1.645f56p-58f, 0x1.c27b14p-27f, 0.0f, 0x1.d0e01p-46f,
     0x1.42cd6ep-109f, 0.0f, 0.0f, 0x1.22c3aap-66f, 0x1.75b01ap-7f, 0.0f,
     0x1.c6b11p-54f, 0.0f, 0x1.963b4p-44f, 0.0f, 0x1.f72e5ep-115f, 0x1.040c34p-85f,
     0.0f, 0x1.beff38p-119f, 0x1.5218b2p-88f, 0x1.947e16p-30f, 0x1.f768b6p-98f, 0.0f,
     0.0f, 0x1.8f146cp-79f, 0x1.01684ep-110f, 0.0f, 0x1p0f, 0.0f, 0x1.b5d29ep-63f,
     0.0f, 0.0f, 0x1.621ce8p-96f, 0.0f, 0.0f, 0x1.244cc8p-67f, 0.0f, 0.0f, 0.0f,
     0x1.f183b4p-83f, 0x1.5188d4p-18f, 0x1.7b5204p-9f, 0x1.45b826p-21f, 0.0f,
     0x1.fac696p-106f, 0.0f, 0.0f, 0x1.edec0cp-90f, 0.0f, 0.0f, 0.0f, 0x1.aa8ecap-40f,
     0x1.7dfbdep-53f, 0.0f, 0x1.9ba2c8p-9f, 0.0f, 0.0f, 0x1.f18844p-94f,
     0x1.494ebp-46f, 0.0f, 0x1.4bff78p-88f, 0.0f, 0x1.c9487cp-62f, 0.0f,
     0x1.c4ee2ep-40f, 0x1.ed915cp-7f, 0x1.bb439ep-75f, 0x1.c1ad7p-101f,
     0x1.48aef8p-59f, 0x1.1db318p-100f, 0.0f, 0x1.6f5648p-99f, 0.0f, 0x1.9f7578p-39f,
     0x1.b0f756p-26f, 0x1.7dd1aep-73f, 0x1.b7584cp-25f, 0x1.951036p-57f,
     0x1.2ff9b4p-107f, 0.0f, 0x1.bf5acp-104f, 0.0f, 0x1.eb3152p-66f, 0x1.d366f4p-100f,
     0x1.f7f402p-25f, 0x1.68fa98p-63f, 0.0f, 0.0f, 0x1.053adap-25f, 0.0f,
     0x1.ace98ap-4f, 0x1.bc5518p-64f, 0x1.49ff38p-110f, 0.0f, 0x1.17b114p-41f, 0.0f,
     0x1.0b9bdp-112f, 0.0f, 0.0f, 0.0f, 0x1.9ef7eap-37f, 0.0f, 0x1.716ee8p-13f, 0.0f,
     0x1.013596p-108f, 0.0f, 0.0f, 0x1.323e46p-116f, 0x1.5b4f2ep-124f, 0.0f,
     0x1.a95766p-4f, 0x1.f59baep-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a1613ep-100f,
     0x1.5378ccp-54f, 0x1.1fb2c6p-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ad60c8p-79f,
     0x1.4fc162p-44f, 0.0f, 0.0f, 0x1.362098p-108f, 0.0f, 0x1.a4f2dap-21f,
     0x1.8571p-106f, 0.0f, 0.0f, 0x1.ce5e28p-13f, 0.0f, 0x1.0148bap-48f,
     0x1.a71a0ap-2f, 0.0f, 0x1.bcbf2ep-76f, 0x1.b70b32p-64f, 0x1.b2176cp-28f, 0.0f,
     0.0f, 0x1.91c0d8p-87f, 0x1.1691ccp-111f, 0.0f, 0.0f, 0x1.ebaf8p-22f,
     0x1.6b051p-85f, 0x1.5600e6p-114f, 0.0f, 0x1.dfaf5ep-68f, 0.0f, 0x1.05cc4ap-1f,
     0.0f, 0x1.2e38f4p-112f, 0.0f, 0x1.b607p-83f, 0x1.7c16dcp-121f, 0.0f, 0.0f,
     0x1.27eefep-41f, 0.0f, 0.0f, 0x1.45eb8cp-34f, 0.0f, 0.0f, 0x1.092292p-74f, 0.0f,
     0x1.050de8p-86f, 0x1.2aa7b4p-10f, 0x1.063c28p-122f, 0x1.00ef98p-111f,
     0x1.e3d156p-68f, 0x1.bd3aecp-69f, 0x1.931fbcp-96f, 0.0f, 0x1.2bbedp-124f,
     0x1.d01fd6p-76f, 0x1.269fbap-73f, 0.0f, 0x1.10a496p-114f, 0x1.b2c954p-93f,
     0x1.6b8ca4p-39f, 0.0f, 0x1.542c0cp-44f, 0.0f, 0x1.74d9eep-4f, 0x1.c1539p-5f,
     0.0f, 0.0f, 0x1.1155d8p-56f, 0.0f, 0.0f, 0x1.fd43fcp-1f, 0x1.0e40cp-97f,
     0x1.0023d8p-11f, 0x1.f321d8p-50f, 0.0f, 0x1.5be81ap-105f, 0.0f, 0.0f,
     0x1.babd1p-16f, 0.0f, 0x1.7af1bep-91f, 0x1.8c9d6ap-9f, 0x1.7e429ap-125f,
     0x1.676dap-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2bc27cp-28f, 0x1.95ee3p-70f, 0.0f,
     0x1.a55d3ap-117f, 0.0f, 0x1.c44a34p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1e73d4p-49f, 0.0f, 0x1.0d1018p-80f, 0.0f, 0x1.46e0dcp-20f, 0.0f,
     0x1.c20638p-16f, 0x1.15f34ep-87f, 0x1.37b874p-16f, 0.0f, 0.0f, 0x1.7890aap-120f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ffa374p-54f, 0x1.15ff94p-86f, 0.0f, 0x1.6751b2p-33f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f6582p-122f, 0.0f, 0.0f, 0.0f,
     0x1.5c9528p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1f67f8p-66f, 0.0f, 0.0f, 0.0f,
     0x1.d99cp-72f, 0x1.0282cap-10f, 0.0f, 0x1.0def3p-108f, 0.0f, 0x1.1fe0bp-47f,
     0x1.51b8d2p-4f, 0x1.2020a2p-85f, 0x1.ad2e9ap-42f, 0x1.69743p-15f,
     0x1.c3f672p-108f, 0.0f, 0x1.7b0cdap-90f, 0x1.3a06acp-77f, 0x1.01b99cp-62f, 0.0f,
     0x1.f4497ep-23f, 0.0f, 0x1.c8d922p-121f, 0.0f, 0.0f, 0.0f, 0x1.563e46p-32f,
     0x1.e7f58cp-6f, 0.0f, 0x1.f1ed8ep-77f, 0x1.c4c394p-94f, 0x1.eef074p-114f,
     0x1.1453aap-41f, 0x1.8134bcp-112f, 0x1.abc888p-78f, 0x1.7f87f2p-115f,
     0x1.4775ep-65f, 0x1.cb8fb8p-116f, 0.0f, 0.0f, 0.0f, 0x1.7e98dap-46f,
     0x1.359086p-74f, 0x1.dd1ae4p-84f, 0.0f, 0.0f, 0.0f, 0x1.7b989ap-19f, 0.0f,
     0x1.78cec2p-9f, 0.0f, 0x1.277fe2p-55f, 0.0f, 0x1.91cda8p-14f, 0x1.7e6b28p-73f,
     0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.811cd8p-111f, 0x1.92f7dp-107f, 0.0f, 0.0f,
     0x1.607f56p-27f, 0x1.296652p-12f, 0x1.6a5cc6p-19f, 0x1.8ea57cp-49f, 0.0f, 0.0f,
     0x1.a9bdc4p-122f, 0x1.32555cp-8f, 0x1.2aa286p-94f, 0x1.3d5efp-90f,
     0x1.c25328p-123f, 0.0f, 0.0f, 0.0f, 0x1.b03bc8p-48f, 0.0f, 0x1.478c6cp-66f,
     0x1.6773ap-12f, 0x1.38fcdp-95f, 0x1.49916ep-1f, 0.0f, 0x1.4b4b7ap-51f, 0.0f,
     0.0f, 0.0f, 0x1.11a0f4p-107f, 0x1.f94c3ep-102f, 0.0f, 0x1.6fffep-58f, 0.0f,
     0x1.cb819ep-112f, 0.0f, 0x1.8c71bcp-110f, 0x1.6830b8p-95f, 0x1.80a714p-87f,
     0x1.954a88p-118f, 0x1.607fp-103f, 0.0f, 0.0f, 0.0f, 0x1.91e6dap-117f,
     0x1.a0e54cp-72f, 0.0f, 0.0f, 0.0f, 0x1.347312p-27f, 0.0f, 0x1.50f46ep-106f, 0.0f,
     0.0f, 0x1.451d9cp-120f, 0x1.d4f55p-43f, 0x1.21932cp-15f, 0.0f, 0.0f, 0.0f,
     0x1.68de06p-5f, 0.0f, 0x1.2f4aa8p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.32bcfp-93f, 0x1.e00d9ep-52f, 0.0f, 0x1.a1348p-58f, 0.0f, 0x1.ffde16p-18f,
     0.0f, 0x1.02d41ep-44f, 0x1.5cf962p-51f, 0x1.dce036p-1f, 0.0f, 0.0f, 0.0f,
     0x1.44eef2p-78f, 0.0f, 0x1.09eba4p-24f, 0x1.e22b4ep-60f, 0.0f, 0.0f, 0.0f,
     0x1.ff4f9ep-81f, 0x1.a6d952p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b6835p-61f, 0.0f, 0x1.21525ep-78f, 0x1.9ed79ap-59f, 0.0f, 0x1.4d1bbep-54f,
     0x1.89c812p-82f, 0x1.2d15ap-51f, 0x1.b034b8p-85f, 0x1.21626p-12f, 0.0f,
     0x1.4d816ep-69f, 0.0f, 0x1.28bfe4p-45f, 0.0f, 0x1.4e327p-112f, 0.0f, 0.0f,
     0x1.7bb744p-87f, 0.0f, 0x1.2d3a0ep-49f, 0.0f, 0x1.c1bcd2p-67f, 0x1.7092e6p-52f,
     0x1.eec9fep-89f, 0.0f, 0.0f, 0.0f, 0x1.643258p-84f, 0x1.7b21d4p-113f,
     0x1.05174cp-82f, 0x1.692b3ep-79f, 0x1.ad53dap-17f, 0.0f, 0.0f, 0x1.b7cd58p-83f,
     0.0f, 0x1.0a38eap-117f, 0.0f, 0.0f, 0x1.7d543ep-107f, 0.0f, 0x1.77f7a8p-12f,
     0x1.581896p-55f, 0.0f, 0x1.e96c2ap-39f, 0.0f, 0x1.f58d7ap-28f, 0.0f, 0.0f,
     0x1.1741dcp-109f, 0.0f, 0.0f, 0x1.eba83p-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.10abb4p-15f, 0x1.0b9f2cp-65f, 0.0f, 0.0f, 0.0f, 0x1.4b631ap-34f,
     0x1.5674f6p-37f, 0x1.307308p-60f, 0.0f, 0x1.07fbd6p-92f, 0.0f, 0x1.f8e4d2p-2f,
     0x1.571c64p-82f, 0x1.33049ep-16f, 0x1.c50f6ep-67f, 0.0f, 0x1.015182p-39f, 0.0f,
     0.0f, 0.0f, 0x1.f481b6p-85f, 0x1.46abcep-28f, 0x1.55a8fp-119f, 0.0f,
     0x1.e79ddap-35f, 0x1.d62d44p-43f, 0x1.6c8acap-50f, 0.0f, 0x1.6fa0acp-50f, 0.0f,
     0.0f, 0x1.dd3cc6p-119f, 0x1.5d739ep-71f, 0x1.9da686p-63f, 0x1.97895ep-35f,
     0x1.0b65acp-82f, 0x1.ea8bb4p-93f, 0.0f, 0x1.f8ef04p-70f, 0.0f, 0x1.dedf2ep-40f,
     0x1.9b31ep-126f, 0.0f, 0x1.7726bp-51f, 0x1.132356p-5f, 0.0f, 0.0f,
     0x1.5b5686p-108f, 0x1.6fbc1cp-50f, 0x1.6bb126p-33f, 0x1.901388p-9f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.3b3cbap-114f, 0.0f, 0.0f, 0.0f, 0x1.2f83d8p-70f, 0x1.323e4cp-90f,
     0x1.49240ap-26f, 0.0f, 0.0f, 0x1.0a7b3ep-118f, 0.0f, 0.0f, 0x1.1014c8p-16f, 0.0f,
     0.0f, 0x1.6092d4p-39f, 0.0f, 0.0f, 0x1.4b6532p-106f, 0x1.366154p-65f, 0.0f, 0.0f,
     0.0f, 0x1.cfaf34p-77f, 0x1.58bd3cp-77f, 0.0f, 0.0f, 0x1.440142p-52f, 0.0f,
     0x1.5106fap-62f, 0x1.bd9f2cp-106f, 0.0f, 0.0f, 0x1.05fbaap-33f, 0x1.3c18f8p-35f,
     0.0f, 0x1.a2c046p-97f, 0x1.170314p-116f, 0.0f, 0.0f, 0x1.43c2eep-88f,
     0x1.2529f2p-77f, 0x1.af7c4ap-88f, 0x1.9f570ap-24f, 0.0f, 0.0f, 0x1.db06bap-120f,
     0x1.fd07d6p-97f, 0x1.32c078p-59f, 0x1.bc1bc8p-32f, 0.0f, 0x1.c67d4ep-110f, 0.0f,
     0.0f, 0x1.20f44cp-82f, 0.0f, 0x1.17b99cp-35f, 0x1.d0cd7ep-105f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.eea0f2p-108f, 0x1.045b7cp-76f, 0x1.a3671ap-105f,
     0x1.0c6a4p-11f, 0.0f, 0x1.fa0fb6p-108f, 0x1.2aaa0ep-77f, 0x1.1249fcp-1f,
     0x1.149272p-80f, 0x1.c686dp-24f, 0.0f, 0.0f, 0x1.acf17ap-96f, 0.0f,
     0x1.3c08bcp-4f, 0x1.310428p-34f, 0x1.07eba2p-75f, 0x1.1797e8p-88f,
     0x1.cc30f2p-37f, 0x1.a37714p-25f, 0x1.b73f4ap-10f, 0.0f, 0x1.251c2p-68f, 0.0f,
     0x1.301588p-50f, 0x1.27440ap-115f, 0.0f, 0.0f, 0x1.d57646p-70f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.1ab9c6p-30f, 0.0f, 0.0f, 0x1.cb306p-40f, 0x1.9f23e8p-50f, 0.0f,
     0x1.b7e13cp-29f, 0.0f, 0x1.cd2032p-86f, 0.0f, 0x1.7b719ep-54f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c68b2ap-77f, 0x1.68133p-74f, 0x1.e83974p-86f, 0x1.60458cp-119f,
     0x1.a35996p-90f, 0.0f, 0.0f, 0.0f, 0x1.95e89p-123f, 0x1.0bcdep-21f, 0.0f, 0.0f,
     0x1.776476p-1f, 0x1.fc483ep-29f, 0.0f, 0x1.c54c2cp-101f, 0x1.04a2a8p-9f,
     0x1.0d8554p-15f, 0.0f, 0.0f, 0.0f, 0x1.43e694p-40f, 0x1.828b98p-96f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d8d242p-73f, 0.0f, 0x1.dc6adep-101f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f435c4p-15f, 0x1.9065f6p-91f, 0x1.e429p-107f, 0x1.5959d8p-89f,
     0.0f, 0.0f, 0x1.3a4d6ep-121f, 0x1.300374p-66f, 0.0f, 0x1.58e542p-82f,
     0x1.55567cp-3f, 0.0f, 0x1.25078p-82f, 0x1.8320ep-51f, 0.0f, 0.0f,
     0x1.6c17b4p-31f, 0.0f, 0x1.17ea4ap-49f, 0x1.dffp-37f, 0x1.878be2p-37f, 0.0f,
     0x1.e3cc5cp-71f, 0.0f, 0x1.ad86fp-101f, 0.0f, 0x1.5cce18p-44f, 0.0f, 0.0f,
     0x1.b2a2e6p-86f, 0.0f, 0.0f, 0x1.2b8c14p-57f, 0.0f, 0.0f, 0x1.31f8dap-51f, 0.0f,
     0.0f, 0.0f, 0x1.ba6eccp-5f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.03af78p-121f,
     0x1.fdcc4p-20f, 0.0f, 0.0f, 0x1.aa5248p-88f, 0x1.6be8b8p-120f, 0x1.8ea0dep-84f,
     0.0f, 0.0f, 0.0f, 0x1.7fad0ep-123f, 0.0f, 0x1.3bff6ap-1f, 0.0f, 0x1.582694p-19f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3996e4p-106f, 0x1.0f9aa4p-33f, 0x1.e2bc0ap-54f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.1d9bcap-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3bf2acp-73f, 0.0f,
     0x1.a9fe64p-19f, 0x1.d1ac78p-1f, 0x1.d66f04p-107f, 0x1.26396ap-71f, 0.0f, 0.0f,
     0x1.c46a7ap-25f, 0.0f, 0x1.91a1e8p-115f, 0.0f, 0.0f, 0.0f, 0x1.47f0cep-119f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.584162p-34f, 0x1.ba88f6p-79f, 0.0f, 0.0f, 0.0f,
     0x1.0bf2cp-74f, 0.0f, 0.0f, 0.0f, 0x1.fe184cp-95f, 0x1.26667cp-117f,
     0x1.7e7c26p-68f, 0x1.1fc98cp-35f, 0.0f, 0.0f, 0x1.ad329ep-89f, 0.0f, 0.0f,
     0x1.198e8ap-101f, 0.0f, 0.0f, 0x1.520128p-17f, 0x1.e1e7cep-98f, 0x1.76cd2ep-68f,
     0.0f, 0.0f, 0.0f, 0x1.8fc9a2p-97f, 0x1.95428cp-72f, 0x1.a7cf7ep-12f,
     0x1.f3bb7cp-98f, 0x1.8212f2p-102f, 0.0f, 0x1.c88d36p-9f, 0x1.540de4p-49f, 0.0f,
     0.0f, 0x1.163742p-47f, 0.0f, 0x1.812c5ap-47f, 0x1.e161fep-25f, 0.0f,
     0x1.a5736p-83f, 0x1.bc6f34p-120f, 0.0f, 0x1.7c70b8p-15f, 0.0f, 0x1.f8511ap-112f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.6b957p-95f, 0x1.afacacp-75f, 0x1.91c282p-69f,
     0x1.122396p-31f, 0.0f, 0x1.9a0cb2p-30f, 0.0f, 0.0f, 0x1.61ab56p-112f, 0.0f,
     0x1.6e36e2p-48f, 0.0f, 0.0f, 0x1.b9484ap-33f, 0x1.c1dc26p-30f, 0.0f,
     0x1.27b57cp-33f, 0.0f
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
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = 0.0f;
    tmp = __cos_counter_num(0);
    timer = tmp;
    j = INT32_C(0);

    for (;(j < INT32_C(10000));){
        float bench_acc;
        int32_t i;
        float tmp0;
        int32_t tmp1;

        i = INT32_C(0);
        bench_acc = 0.0f;

        for (;(i < INT32_C(1001));){
            float tmp0;
            float tmp1;
            float tmp2;
            int32_t tmp3;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_finz_sinf1_u35purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = bench_acc + tmp1;
            bench_acc = tmp2;
            tmp3 = i + INT32_C(1);
            i = tmp3;
        }
        tmp0 = global_bench_acc + bench_acc;
        global_bench_acc = tmp0;
        tmp1 = j + INT32_C(1);
        j = tmp1;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_finz_sinf1_u35purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_sinf1_u35purecfma bench acc %a\n", global_bench_acc);
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
