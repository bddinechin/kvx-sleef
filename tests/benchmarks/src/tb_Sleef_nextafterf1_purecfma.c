/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_nextafterf1_purecfma.c --function \
 *     Sleef_nextafterf1_purecfma --arity 2 --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary32,binary32 --bench \
 *     --no-embedded-bin --target kv3
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
     0x1.6617fap-47f, 0.0f, 0.0f, 0.0f, 0x1.3aeb6cp-91f, 0x1.9092e2p-64f,
     0x1.fe3a84p-14f, 0x1.8e7cbep-90f, 0.0f, 0.0f, 0x1.ede21ap-115f, 0.0f,
     0x1.e6638ap-102f, 0x1.02fafap-87f, 0.0f, 0.0f, 0x1.7d194ap-117f, 0x1.abb294p-44f,
     0x1.163cb2p-51f, 0.0f, 0.0f, 0.0f, 0x1.6fda9p-10f, 0x1.9e8386p-60f,
     0x1.950364p-92f, 0.0f, 0.0f, 0x1.e1323ap-113f, 0.0f, 0x1.727b56p-35f,
     0x1.2eb86p-31f, 0x1.68242cp-34f, 0x1.1a3b28p-39f, 0.0f, 0x1.03b6dcp-35f, 0.0f,
     0x1.0f536cp-2f, 0.0f, 0.0f, 0x1.defe44p-76f, 0x1.912b8p-80f, 0.0f,
     0x1.bddb7cp-102f, 0.0f, 0.0f, 0x1.dbd73cp-67f, 0.0f, 0.0f, 0x1.fed63ap-55f, 0.0f,
     0x1.1cd0d4p-120f, 0.0f, 0.0f, 0.0f, 0x1.fbced2p-12f, 0x1.7ea6f2p-108f, 0.0f,
     0x1.663d78p-53f, 0x1.e639cep-54f, 0.0f, 0.0f, 0x1.438e3p-120f, 0.0f,
     0x1.483ad2p-72f, 0x1.c90536p-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8438ep-14f, 0.0f,
     0.0f, 0x1.dd8b0ep-30f, 0.0f, 0x1.73f628p-59f, 0x1.b73404p-109f, 0x1.9c73f6p-6f,
     0.0f, 0.0f, 0.0f, 0x1.1cd616p-99f, 0.0f, 0.0f, 0x1.220ffp-57f, 0.0f,
     0x1.e3add4p-78f, 0x1.28497cp-32f, 0x1.9a730ap-35f, 0x1.425c68p-88f, 0.0f,
     0x1.4f7826p-43f, 0x1.6f3d38p-90f, 0x1.b28b3p-49f, 0.0f, 0x1.e3b2acp-84f, 0.0f,
     0.0f, 0x1.3f904p-117f, 0.0f, 0x1.783908p-19f, 0x1.2190a8p-124f, 0.0f, 0.0f,
     0x1.a9e924p-68f, 0x1.6a444cp-126f, 0x1.261be8p-30f, 0.0f, 0x1.a26f66p-61f,
     0x1.a9c68ap-45f, 0x1.968feap-67f, 0x1.90184p-60f, 0.0f, 0.0f, 0.0f,
     0x1.412108p-101f, 0x1.9df926p-16f, 0x1.a1f652p-122f, 0.0f, 0x1.a07c3ap-56f,
     0x1.9a2aeep-41f, 0x1.2d2fd2p-17f, 0.0f, 0x1.fc74ep-56f, 0.0f, 0.0f,
     0x1.e06018p-116f, 0x1.f5ae9cp-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c1c4cp-58f,
     0.0f, 0x1.307b36p-61f, 0x1.97f492p-46f, 0.0f, 0.0f, 0x1.b8c944p-67f, 0.0f, 0.0f,
     0x1.9ca58ap-18f, 0x1.cee884p-35f, 0x1.f1b378p-7f, 0.0f, 0.0f, 0x1.9c1cecp-7f,
     0x1.0e6cb8p-94f, 0x1.c1b564p-34f, 0.0f, 0x1.d1b37ap-21f, 0.0f, 0.0f,
     0x1.e6c882p-6f, 0x1.23825ap-97f, 0.0f, 0x1.c6a0d8p-49f, 0x1.0c76c4p-115f,
     0x1.3454cap-104f, 0.0f, 0.0f, 0x1.6c01e4p-105f, 0.0f, 0x1.18e42ep-96f,
     0x1.a53ca8p-37f, 0.0f, 0x1.fc8e7ep-85f, 0x1.33dc24p-82f, 0.0f, 0x1.87a728p-17f,
     0x1.daaafp-24f, 0x1.5d9f94p-14f, 0.0f, 0.0f, 0.0f, 0x1.ffb262p-92f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6d9466p-89f, 0x1.795e64p-117f,
     0x1.ead0f2p-8f, 0x1.af780ap-56f, 0x1.3ce7f8p-50f, 0.0f, 0.0f, 0x1.79d414p-22f,
     0x1.e55a94p-110f, 0.0f, 0.0f, 0x1.e6abb2p-27f, 0x1.801834p-14f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.06c9d6p-122f, 0x1.d9600cp-80f, 0x1.fe2b38p-61f, 0x1.91817ep-13f, 0.0f,
     0x1.44bcc8p-95f, 0x1.9acf1ap-43f, 0x1.a6684p-2f, 0x1.8c071ep-48f, 0x1.251ccp-56f,
     0.0f, 0.0f, 0x1.cb0c56p-109f, 0x1.008ca6p-49f, 0.0f, 0.0f, 0x1.87e276p-124f,
     0x1.e054fcp-29f, 0x1.efa754p-103f, 0.0f, 0x1.65808cp-114f, 0x1.31fb5ap-1f, 0.0f,
     0x1.96d84p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.33cd3ap-119f, 0x1.45dae6p-15f,
     0.0f, 0.0f, 0x1.90749ep-99f, 0x1.150798p-96f, 0.0f, 0.0f, 0x1.379cfcp-73f, 0.0f,
     0x1.87a9cep-28f, 0x1.0ef84cp-63f, 0.0f, 0x1.3b19dap-37f, 0x1.bbc51ap-100f, 0.0f,
     0.0f, 0.0f, 0x1.1f6342p-50f, 0.0f, 0.0f, 0.0f, 0x1.f02332p-49f, 0.0f,
     0x1.97e116p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6a1adep-36f, 0x1.b21ddap-82f,
     0x1.30875p-44f, 0.0f, 0.0f, 0x1.f11c7ap-118f, 0x1.625732p-51f, 0.0f,
     0x1.d78cd6p-90f, 0.0f, 0.0f, 0x1.317e2ap-29f, 0x1.0202acp-54f, 0.0f, 0.0f,
     0x1.105e92p-44f, 0x1.f0c3d2p-3f, 0x1.a7a116p-23f, 0.0f, 0.0f, 0.0f,
     0x1.c6162ap-69f, 0x1.ae7b04p-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4c1362p-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f4a0b2p-112f, 0.0f, 0.0f,
     0x1.c1939ep-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.439b7ap-4f, 0.0f,
     0x1.671f1ep-74f, 0.0f, 0x1.12d9f6p-87f, 0.0f, 0x1.5386c2p-54f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.31dff4p-75f, 0x1.6ef78cp-109f, 0.0f, 0x1.2deb7ap-93f, 0.0f, 0.0f, 0.0f,
     0x1.80d404p-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b33a68p-49f, 0.0f, 0.0f,
     0x1.fa1336p-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cead7ap-58f, 0.0f, 0.0f, 0.0f,
     0x1.f325e4p-7f, 0x1.50dd2ap-40f, 0.0f, 0.0f, 0x1.40ef78p-32f, 0.0f,
     0x1.2f6cbep-73f, 0.0f, 0x1.422ef2p-100f, 0.0f, 0x1.bce362p-92f, 0x1.71a53p-46f,
     0x1.f5e8bcp-35f, 0x1.e3ea02p-54f, 0x1.ea0136p-59f, 0x1.14e2e4p-11f, 0.0f,
     0x1.3b2bap-53f, 0.0f, 0x1.2b4958p-31f, 0.0f, 0.0f, 0x1.f5c43ep-37f, 0.0f, 0.0f,
     0.0f, 0x1.7429fcp-111f, 0.0f, 0x1.c248aep-105f, 0x1.e65112p-51f, 0x1.a95072p-91f,
     0.0f, 0x1.7e035p-43f, 0x1.3275c8p-102f, 0.0f, 0.0f, 0x1.77abbp-20f,
     0x1.041c5cp-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.61b932p-25f, 0.0f, 0x1.16a7aap-111f,
     0x1.79fdcep-101f, 0.0f, 0x1.3238e6p-21f, 0x1.15076ep-40f, 0x1.ef252cp-33f, 0.0f,
     0.0f, 0x1.0c321p-30f, 0x1.7ba45ep-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.47b642p-24f, 0x1.b27deep-116f, 0x1p0f, 0x1.7dc3fap-98f, 0.0f, 0.0f, 0.0f,
     0x1.eb111ep-73f, 0.0f, 0.0f, 0x1.4bb3cap-71f, 0x1.e12c8ep-5f, 0.0f,
     0x1.fa30dcp-47f, 0.0f, 0x1.e952ecp-7f, 0x1.a09006p-105f, 0.0f, 0x1.47d16ep-106f,
     0.0f, 0x1.327ae8p-13f, 0x1.b00a14p-45f, 0x1.cd54f4p-51f, 0.0f, 0x1.cf7bb6p-9f,
     0.0f, 0x1.6ad2ecp-105f, 0x1.fcd31p-29f, 0x1.d98a0ep-98f, 0x1.ae1c98p-107f,
     0x1.5bdb72p-2f, 0x1.4c0b9ep-23f, 0x1.67fe34p-22f, 0.0f, 0.0f, 0x1.daa48ep-46f,
     0x1.1149d6p-94f, 0x1.a79206p-107f, 0x1.71c2a8p-46f, 0.0f, 0.0f, 0.0f,
     0x1.1ab4fep-107f, 0x1.2a926ap-85f, 0x1.b13c76p-33f, 0x1.0deccp-27f, 0.0f, 0.0f,
     0.0f, 0x1.941632p-4f, 0.0f, 0x1p0f, 0x1.26bf9ap-62f, 0x1.9f4478p-106f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c89074p-34f, 0.0f, 0.0f, 0x1.3af17ap-1f, 0.0f, 0.0f,
     0x1.51a3aap-5f, 0.0f, 0x1.4331fp-120f, 0x1.2c326ep-20f, 0x1.c823f8p-48f,
     0x1.d79754p-70f, 0.0f, 0.0f, 0x1.19756ep-87f, 0.0f, 0.0f, 0.0f, 0x1.ea61ap-13f,
     0.0f, 0x1.f6ed3ap-121f, 0.0f, 0.0f, 0.0f, 0x1.cbc99ap-56f, 0x1.a41ac8p-117f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f59d4ep-40f, 0x1.a641cap-32f, 0x1.1d4a3ap-37f,
     0x1.59a48p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f32b4cp-18f, 0x1.ce28ccp-94f,
     0x1.1abfe8p-65f, 0x1.f395c2p-124f, 0.0f, 0x1.cfa42ep-55f, 0.0f, 0x1.a5877ep-27f,
     0x1.70628cp-75f, 0x1.bdc422p-53f, 0x1.b1b99ep-75f, 0.0f, 0x1.228afp-47f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.6450fcp-28f, 0.0f, 0x1.62fc84p-88f, 0.0f,
     0x1.60c3fep-88f, 0x1.a8a9bap-34f, 0x1.72f544p-70f, 0x1.5fb3ccp-113f,
     0x1.6c5386p-55f, 0.0f, 0x1.33f796p-4f, 0x1.9418cap-78f, 0.0f, 0x1.dcaa3ep-36f,
     0x1.110ba4p-107f, 0x1.2527e8p-76f, 0.0f, 0x1.a318ccp-123f, 0.0f, 0x1p0f,
     0x1.a261cap-121f, 0x1.b3d98cp-93f, 0x1.658a24p-6f, 0x1.e26b14p-10f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4b704p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.087304p-40f,
     0x1.34d0b2p-106f, 0x1.03fc76p-31f, 0x1.014e1p-1f, 0x1.af84cap-80f,
     0x1.c6e6bap-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b7ae18p-34f, 0x1.2d95aep-58f,
     0x1.5274d2p-104f, 0x1.c66834p-123f, 0x1.c11316p-45f, 0x1.67570ap-18f, 0.0f, 0.0f,
     0x1.43c1acp-43f, 0.0f, 0x1.4efb26p-110f, 0x1.f3e44cp-29f, 0.0f, 0.0f,
     0x1.94777p-48f, 0.0f, 0x1.45f6cep-97f, 0x1.7586f4p-49f, 0x1.cd98b2p-43f,
     0x1.5fa7fep-63f, 0x1.161aeap-106f, 0.0f, 0x1.674522p-30f, 0.0f, 0.0f,
     0x1.3a48dcp-45f, 0x1.9c221ap-88f, 0x1.2a1b3p-84f, 0.0f, 0x1.d9738cp-120f,
     0x1.b5c174p-124f, 0.0f, 0x1.6e3bd6p-77f, 0.0f, 0x1.38025cp-107f, 0.0f, 0.0f,
     0x1.0d5564p-9f, 0.0f, 0x1.a1cb6ap-126f, 0x1.9f7b7cp-27f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c2ef66p-32f, 0.0f, 0x1.25ef58p-44f, 0x1.e9ab44p-26f, 0.0f, 0.0f, 0.0f,
     0x1.65afbcp-126f, 0x1.1c42ccp-86f, 0x1.015a4ep-95f, 0x1.a650ep-86f,
     0x1.77c3aep-60f, 0.0f, 0.0f, 0x1.1f784p-107f, 0.0f, 0x1.7b9edp-23f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.baf01cp-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a9441cp-74f,
     0x1.22577p-5f, 0x1.753e8p-33f, 0.0f, 0.0f, 0.0f, 0x1.0e29f8p-83f,
     0x1.a6cab8p-63f, 0x1.a31116p-60f, 0.0f, 0.0f, 0x1.0ac16ap-71f, 0x1.d0f85p-9f,
     0x1.bb2602p-23f, 0.0f, 0x1.db4beep-49f, 0x1.0ef9b4p-103f, 0.0f, 0.0f,
     0x1.e55742p-97f, 0.0f, 0x1.c5034ep-78f, 0x1.2cc0e8p-86f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f4b7bep-83f, 0x1.d457a8p-23f, 0x1.0944aep-109f, 0x1.11bfbep-106f, 0.0f,
     0x1.9e7366p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b245dap-118f,
     0x1.39443ap-52f, 0x1.4c33a4p-89f, 0.0f, 0.0f, 0.0f, 0x1.dc836cp-94f, 0.0f,
     0x1.8d074p-121f, 0.0f, 0.0f, 0.0f, 0x1.30b62cp-52f, 0x1.eea9f4p-82f, 0.0f,
     0x1.b903e4p-42f, 0.0f, 0x1.d5a248p-1f, 0.0f, 0x1.efe3cap-45f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.415194p-49f, 0x1.2930a4p-84f, 0.0f, 0x1.e553a8p-59f, 0.0f,
     0x1.944e94p-91f, 0.0f, 0x1.2461e2p-24f, 0x1.a1c5cep-79f, 0x1.f967eap-59f,
     0x1.79fc7cp-28f, 0x1.9914f6p-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1dc61ep-39f, 0.0f,
     0.0f, 0.0f, 0x1.3424b8p-76f, 0.0f, 0x1.6e85b6p-63f, 0.0f, 0x1.f2833cp-125f, 0.0f,
     0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.61a0f4p-84f, 0.0f, 0.0f, 0x1.1145a6p-89f,
     0.0f, 0.0f, 0x1.b41d0ep-90f, 0.0f, 0.0f, 0.0f, 0x1.79c72p-79f, 0.0f, 0.0f, 0.0f,
     0x1.efb74ep-95f, 0x1.0afb24p-16f, 0.0f, 0x1.c220bep-79f, 0.0f, 0.0f, 0.0f,
     0x1.26abd2p-45f, 0.0f, 0x1.bafde8p-69f, 0.0f, 0x1.4a737ap-13f, 0x1.55755p-50f,
     0.0f, 0.0f, 0x1.605296p-123f, 0x1.fd865ep-21f, 0x1.2adcd8p-65f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.3a3da2p-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8198f4p-73f, 0x1.03fee8p-48f,
     0.0f, 0x1.737c84p-86f, 0x1.4efff6p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b2cc46p-19f, 0x1.c364cap-114f, 0x1.73f6ccp-90f, 0.0f, 0x1.3e4f4p-66f, 0.0f,
     0x1.ed536ep-67f, 0.0f, 0x1.9430c2p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e0c692p-52f,
     0.0f, 0.0f, 0x1.04a78cp-84f, 0.0f, 0.0f, 0x1.669f58p-107f, 0x1.f2419ep-106f,
     0.0f, 0x1.26d26cp-92f, 0x1.11a318p-41f, 0x1.e82606p-121f, 0.0f, 0x1.fbf64ep-111f,
     0x1.dcd69cp-94f, 0.0f, 0.0f, 0x1.513fd6p-74f, 0.0f, 0.0f, 0.0f, 0x1.99133ep-84f,
     0x1.f7bc9ep-85f, 0x1.aac632p-120f, 0.0f, 0x1.05608ap-115f, 0x1.89e228p-93f,
     0x1.417e54p-16f, 0.0f, 0x1.ce1f94p-88f, 0x1.fbe0cep-26f, 0x1.ba0e2ap-7f, 0x1p0f,
     0.0f, 0x1.3b1c4cp-30f, 0x1.aec2e8p-17f, 0.0f, 0x1.8aca1ep-87f, 0x1.74e50ap-58f,
     0x1.6e6dbap-71f, 0x1.0f16dp-96f, 0.0f, 0.0f, 0.0f, 0x1.5168d4p-57f, 0.0f, 0.0f,
     0x1.1246a4p-22f, 0x1.b89d66p-72f, 0.0f, 0x1.35ce24p-106f, 0x1.3dbf14p-66f, 0.0f,
     0x1.d6cffep-11f, 0x1.c8ba86p-86f, 0.0f, 0.0f, 0x1.2f2cc4p-99f, 0x1.302d44p-123f,
     0x1.bd8dfep-72f, 0x1.afdd5ap-113f, 0x1.20ddaap-84f, 0.0f, 0.0f, 0x1.62cafp-17f,
     0.0f, 0x1.2da0dap-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6527bcp-2f,
     0x1.2e377p-117f, 0x1.5a5562p-72f, 0.0f, 0x1.329d14p-45f, 0x1.1b7f6p-9f,
     0x1.bd090ep-78f, 0x1.e592e8p-114f, 0.0f, 0.0f, 0.0f, 0x1.5cb0d4p-49f, 0.0f,
     0x1.f04b66p-30f, 0x1.d3e01ap-40f, 0.0f, 0.0f, 0.0f, 0x1.b082fp-17f, 0.0f, 0.0f,
     0x1.e46d0ep-28f, 0x1.642faap-80f, 0x1.c3cab4p-70f, 0x1.91fd0cp-68f, 0.0f, 0.0f,
     0x1.f8561ap-110f, 0x1.732d32p-51f, 0x1.54a21ep-114f, 0.0f, 0x1.8516ap-115f,
     0x1.54077ap-10f, 0.0f, 0x1.49092ep-38f, 0x1.00657ep-73f, 0x1.29b5e2p-123f, 0.0f,
     0x1.ba0d36p-33f, 0x1.4407acp-80f, 0x1.7652dcp-111f, 0x1.698444p-90f,
     0x1.ad4b6ap-40f, 0x1.530fa4p-61f, 0.0f, 0.0f, 0x1.cd0204p-20f, 0x1.3506d8p-37f,
     0x1.2a59c4p-26f, 0x1.2c7494p-107f, 0.0f, 0.0f, 0.0f, 0x1.ee7f68p-39f,
     0x1.4a90ecp-107f, 0x1.4bd74cp-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.67818ep-13f, 0.0f, 0.0f, 0x1.266828p-19f, 0x1.6544bp-23f, 0x1.ca0beep-124f,
     0x1.fd554ap-117f, 0.0f, 0x1.2904c4p-44f, 0.0f, 0.0f, 0x1.ca3ca2p-50f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.3e51cap-55f, 0x1.34206ep-61f, 0x1.62ea6ep-9f, 0.0f, 0.0f,
     0x1.5b8e74p-41f, 0x1.5d6836p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.26d85ep-37f,
     0x1.938d9cp-87f, 0.0f, 0.0f, 0x1.984404p-36f, 0.0f, 0x1.18edb2p-68f,
     0x1.33c00cp-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b10ed8p-56f, 0x1.95190cp-95f,
     0x1.976f6cp-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4ee914p-98f, 0.0f, 0x1.ec91aap-1f,
     0.0f, 0.0f, 0x1p0f, 0x1.f60c48p-84f, 0x1.6c48a8p-126f, 0x1.a9ade2p-82f,
     0x1.c3a62ap-122f, 0.0f, 0x1.a272a2p-25f, 0.0f, 0.0f, 0.0f, 0x1.6d4c8ap-71f, 0.0f,
     0x1.9bebb2p-72f, 0.0f, 0x1.e7a8f8p-78f, 0.0f, 0x1.c86452p-117f, 0x1.2c4178p-28f,
     0x1.675978p-64f, 0x1.e2f31ep-27f, 0x1.97a3ep-54f, 0.0f, 0.0f, 0x1.fe50d2p-118f,
     0.0f
};
static const float external_bench_wrapper_input_table_arg1[1001]  = {
     0.0f, 0x1.5ab93ep-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eb82dcp-90f, 0.0f,
     0x1.bff56p-39f, 0.0f, 0x1.ad480cp-104f, 0.0f, 0x1.77bfd4p-119f, 0x1.243d78p-46f,
     0x1.5db1dep-57f, 0x1.865c4cp-70f, 0x1.d9aefp-119f, 0x1.48f692p-119f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.8b0b32p-17f, 0.0f, 0x1.56dcb8p-116f, 0x1.b62a94p-49f,
     0x1.88b084p-79f, 0.0f, 0x1.3f89c8p-5f, 0x1.62cddap-87f, 0x1.9ce758p-48f,
     0x1.cf148ep-118f, 0.0f, 0x1.6344b2p-118f, 0.0f, 0.0f, 0x1.d1b112p-85f, 0.0f,
     0.0f, 0x1.01ef7ap-93f, 0.0f, 0x1.822f44p-80f, 0.0f, 0x1.2335b6p-76f, 0.0f, 0.0f,
     0x1.0b2c6ep-96f, 0.0f, 0x1.8cc786p-118f, 0.0f, 0x1.26785ep-26f, 0x1.06d004p-104f,
     0.0f, 0x1.e5337ap-63f, 0x1.d0acf6p-121f, 0x1.3666a4p-21f, 0.0f, 0.0f,
     0x1.832832p-36f, 0x1.e656a2p-20f, 0x1p0f, 0x1.5f5966p-45f, 0x1.e7f3ecp-107f,
     0.0f, 0.0f, 0x1.2530e8p-47f, 0x1.f94e8ep-58f, 0x1.b24974p-57f, 0.0f, 0.0f, 0.0f,
     0x1.46aeeep-73f, 0x1.601004p-79f, 0.0f, 0x1.d901e6p-62f, 0x1.25ec62p-103f,
     0x1.08c5ecp-93f, 0.0f, 0x1.2e4376p-35f, 0x1.2522bap-72f, 0.0f, 0.0f,
     0x1.345cc2p-92f, 0x1.e5dca2p-49f, 0x1.58cc86p-15f, 0x1.6916dep-59f, 0.0f, 0.0f,
     0.0f, 0x1.46e242p-73f, 0x1.f08ba8p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.46d66ep-59f,
     0x1.f757dep-26f, 0x1.3e7092p-41f, 0.0f, 0.0f, 0.0f, 0x1.cce084p-38f,
     0x1.5f5b92p-2f, 0.0f, 0.0f, 0.0f, 0x1.d3b364p-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.41623ap-123f, 0.0f, 0x1.92043p-100f, 0.0f, 0x1.900a42p-115f,
     0x1.241436p-56f, 0x1.86e06p-10f, 0x1.cc5caep-58f, 0x1.6fcd42p-73f,
     0x1.a363e2p-124f, 0.0f, 0x1.2913b4p-4f, 0x1.7ba182p-122f, 0x1.2457fep-50f, 0.0f,
     0.0f, 0x1.14f184p-24f, 0x1.c59e6cp-76f, 0.0f, 0.0f, 0x1.ea6642p-115f, 0.0f,
     0x1.db6e98p-63f, 0.0f, 0.0f, 0.0f, 0x1.b0869ep-52f, 0.0f, 0.0f, 0x1.a49ce2p-58f,
     0x1.c59daap-57f, 0x1.19e46cp-45f, 0x1.a593c6p-25f, 0x1.c70bf6p-70f,
     0x1.e08438p-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.39df8ap-113f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.1226a6p-77f, 0.0f, 0.0f, 0x1.066aaap-64f, 0x1.6554f2p-8f,
     0x1.d39b28p-68f, 0x1.df6ea4p-25f, 0x1.2a04dp-68f, 0.0f, 0x1.8c8134p-85f,
     0x1.b18f7cp-38f, 0.0f, 0.0f, 0.0f, 0x1.59386p-62f, 0.0f, 0x1.36e67cp-72f, 0.0f,
     0x1.5a8c0cp-86f, 0x1.66f3c4p-104f, 0x1.68de1p-22f, 0x1.a08644p-10f, 0.0f,
     0x1.1ccf2ap-120f, 0x1.ea947cp-72f, 0.0f, 0x1.89ee2cp-119f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.54c87cp-36f, 0x1.c61dcp-44f, 0.0f, 0x1.97f122p-33f, 0.0f,
     0x1.5bd31cp-56f, 0.0f, 0x1.dd055p-103f, 0x1.5a2ebep-110f, 0.0f, 0x1.ebd84ap-105f,
     0x1.386628p-7f, 0x1.87195cp-76f, 0.0f, 0x1.13df86p-102f, 0x1.f53416p-3f, 0.0f,
     0x1.f65826p-93f, 0x1.87064ap-1f, 0.0f, 0x1.f59246p-19f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c850a2p-82f, 0.0f, 0.0f, 0x1.95ebep-5f,
     0x1.e11f9cp-113f, 0.0f, 0.0f, 0.0f, 0x1.c1f85p-89f, 0.0f, 0.0f, 0x1.90b1cap-104f,
     0.0f, 0.0f, 0x1.d9ff92p-119f, 0.0f, 0x1.9b0114p-78f, 0x1.796cbp-42f, 0.0f,
     0x1.1b824cp-109f, 0x1.a6bd62p-102f, 0.0f, 0.0f, 0.0f, 0x1.0c55dep-79f, 0.0f,
     0x1.24358ap-63f, 0.0f, 0x1.cee4cap-22f, 0.0f, 0x1.396c08p-36f, 0x1.06ca16p-116f,
     0.0f, 0x1.7b6112p-85f, 0x1.06a7f4p-98f, 0.0f, 0.0f, 0.0f, 0x1.7d17a6p-53f, 0.0f,
     0x1.69f5bp-3f, 0.0f, 0x1.d1235ap-107f, 0.0f, 0x1.21a678p-106f, 0x1.69bd08p-40f,
     0.0f, 0.0f, 0.0f, 0x1.b2cb76p-60f, 0x1.a85f08p-93f, 0x1.475e3cp-112f, 0.0f,
     0x1.cdd0fp-78f, 0x1.f21f88p-16f, 0.0f, 0.0f, 0.0f, 0x1.3eb236p-5f,
     0x1.d0a0e4p-92f, 0.0f, 0x1.293252p-48f, 0x1.d88b5cp-64f, 0.0f, 0x1.37a64p-92f,
     0.0f, 0.0f, 0.0f, 0x1.65c19cp-102f, 0.0f, 0x1.d9a874p-13f, 0x1.8127fcp-37f, 0.0f,
     0.0f, 0x1.1ebb6cp-83f, 0x1.31a182p-60f, 0x1.4d15a8p-40f, 0x1.b36862p-27f,
     0x1.c87608p-12f, 0x1.a38d06p-93f, 0.0f, 0.0f, 0x1.444c5p-39f, 0x1.2db244p-119f,
     0.0f, 0.0f, 0x1.62990ap-119f, 0.0f, 0.0f, 0.0f, 0x1.f6f4c6p-14f,
     0x1.5631f6p-120f, 0.0f, 0.0f, 0x1.bc9f56p-85f, 0x1.1d046p-123f, 0x1.f517b8p-88f,
     0.0f, 0.0f, 0.0f, 0x1.d63de8p-72f, 0.0f, 0.0f, 0x1.1c0d04p-7f, 0x1.e1f9d2p-119f,
     0.0f, 0x1.c37734p-86f, 0.0f, 0.0f, 0.0f, 0x1.946afep-41f, 0.0f, 0.0f, 0.0f,
     0x1.1537d6p-118f, 0.0f, 0.0f, 0x1.a1b2b6p-32f, 0.0f, 0x1.cba87p-81f,
     0x1.da8016p-62f, 0x1.0dd2c8p-112f, 0x1.3b7b5p-42f, 0x1.8c384cp-89f, 0.0f,
     0x1.91afe4p-35f, 0.0f, 0x1.045f84p-111f, 0x1.6adbcap-4f, 0.0f, 0.0f, 0.0f,
     0x1.5de9b2p-69f, 0.0f, 0.0f, 0.0f, 0x1.0f9fc2p-97f, 0.0f, 0x1.1049ap-8f,
     0x1.10a45ep-119f, 0x1.ba0992p-69f, 0x1.1e5f6ep-110f, 0.0f, 0x1.f5580ep-52f, 0.0f,
     0x1.11184p-17f, 0.0f, 0x1.9f19a8p-108f, 0x1p0f, 0.0f, 0x1.74cd8cp-13f,
     0x1.967a18p-113f, 0.0f, 0x1.702d74p-35f, 0x1.ea9c3ap-99f, 0x1.092056p-71f,
     0x1.1351ap-54f, 0x1.7eb82p-85f, 0.0f, 0x1.360ba4p-89f, 0.0f, 0.0f,
     0x1.e2b68ap-31f, 0x1.455738p-52f, 0x1.3523d8p-9f, 0x1.ec4bf2p-113f, 0.0f, 0.0f,
     0.0f, 0x1.aa21e2p-99f, 0.0f, 0.0f, 0x1.a7f4d6p-11f, 0x1.b1aeccp-48f,
     0x1.f73082p-75f, 0.0f, 0.0f, 0.0f, 0x1.a7cd3ep-117f, 0x1.dda108p-95f, 0.0f, 0.0f,
     0x1.ef1dccp-58f, 0.0f, 0x1.a2edfp-61f, 0x1.03d6p-47f, 0.0f, 0.0f,
     0x1.e0ae56p-23f, 0x1.6a0dc4p-19f, 0x1.12943cp-89f, 0.0f, 0x1.2aaef6p-108f,
     0x1.2489f4p-109f, 0x1.8f27cap-94f, 0.0f, 0.0f, 0x1.cb1e72p-53f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.df5146p-108f, 0x1.24789p-40f, 0.0f, 0x1.a95116p-80f, 0.0f, 0.0f,
     0x1.1df42p-58f, 0.0f, 0x1.58d12cp-37f, 0x1.87c168p-26f, 0x1.dbfc8ep-28f,
     0x1.27b828p-58f, 0.0f, 0x1.22027cp-3f, 0x1.0961p-19f, 0.0f, 0.0f,
     0x1.2a2adcp-12f, 0x1.ab2b42p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.df0b4cp-9f, 0x1.c21f36p-13f, 0x1.58b62cp-10f, 0x1.4ca444p-124f,
     0x1.1bec6ep-92f, 0x1.2bb27p-68f, 0x1.6f928p-52f, 0.0f, 0.0f, 0.0f,
     0x1.8968ccp-115f, 0x1.dec042p-97f, 0.0f, 0x1.ff1254p-96f, 0x1.fc13c6p-37f, 0.0f,
     0x1.2ce1bep-7f, 0x1.c63736p-21f, 0x1.631d48p-91f, 0.0f, 0.0f, 0x1.34303p-122f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.18fda4p-8f, 0x1.b3a7f2p-114f, 0.0f, 0x1.f5f1ap-19f,
     0.0f, 0x1.b71392p-64f, 0.0f, 0x1.b967ccp-106f, 0x1.c9b8fep-83f, 0x1.c2423cp-45f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.57cb68p-78f, 0x1.0da92cp-17f,
     0x1.1e76f4p-87f, 0x1.2500eap-86f, 0.0f, 0x1.5a5b6ap-104f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.dd47ecp-53f, 0.0f, 0x1.8413ap-40f, 0x1.895b16p-94f, 0.0f, 0.0f, 0.0f,
     0x1.94d0a2p-60f, 0.0f, 0x1.638358p-96f, 0.0f, 0x1.4b9b4ap-38f, 0x1.ce1d56p-16f,
     0.0f, 0x1.85219p-85f, 0x1.ac65fp-12f, 0x1.4f4986p-40f, 0x1.29b604p-78f,
     0x1.0dffa4p-73f, 0x1.0eb26ep-9f, 0x1.6f72fep-50f, 0.0f, 0.0f, 0x1.ab9d1ep-116f,
     0.0f, 0x1.83ab0ep-56f, 0.0f, 0x1.7b61a8p-36f, 0.0f, 0x1.a4fb0ap-82f,
     0x1.0a6fbep-13f, 0.0f, 0x1.d7b92cp-7f, 0.0f, 0.0f, 0.0f, 0x1.c50842p-103f,
     0x1.9822a4p-30f, 0.0f, 0.0f, 0x1.830f66p-99f, 0.0f, 0.0f, 0x1.d9a172p-116f, 0.0f,
     0x1.fb95cap-70f, 0.0f, 0.0f, 0.0f, 0x1.ada7bcp-79f, 0.0f, 0.0f, 0.0f,
     0x1.20f5ccp-67f, 0x1.b17682p-60f, 0x1.32a8d4p-102f, 0.0f, 0.0f, 0.0f,
     0x1.84d95cp-40f, 0.0f, 0.0f, 0x1.964696p-89f, 0x1.2affb2p-104f, 0x1.bdd458p-23f,
     0x1.21cdb4p-112f, 0x1.2fbf0cp-93f, 0x1.69e9ep-70f, 0x1.64656p-35f, 0.0f,
     0x1.109fb4p-96f, 0x1.72f94ep-87f, 0x1.9345aep-9f, 0.0f, 0.0f, 0.0f,
     0x1.b81826p-21f, 0x1.26dc2p-71f, 0.0f, 0x1.4fe69ap-114f, 0x1.f357bap-18f,
     0x1.e827bap-66f, 0.0f, 0.0f, 0x1.b38b1ep-104f, 0x1p0f, 0.0f, 0x1.1ec1p-15f,
     0x1.fc1794p-114f, 0.0f, 0x1.1236bcp-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.4a9eb6p-71f, 0x1.a964aap-121f, 0x1.76e76p-59f, 0x1.40ba86p-58f,
     0x1.05ef3cp-16f, 0x1.b97f84p-114f, 0x1.07840cp-110f, 0x1.f6905ap-74f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a3b622p-61f, 0x1.8461p-18f, 0.0f, 0x1.7057d4p-86f, 0.0f,
     0.0f, 0x1.6d0498p-11f, 0x1.8cdd38p-85f, 0.0f, 0.0f, 0x1.3989fp-61f, 0.0f, 0.0f,
     0x1.f6d506p-3f, 0.0f, 0x1.2bebe6p-13f, 0x1.762ff2p-63f, 0x1.912c2ep-32f, 0.0f,
     0x1.ff9bccp-25f, 0x1.7da2a6p-85f, 0x1.aaa4a6p-37f, 0x1.157eaap-123f, 0.0f, 0.0f,
     0.0f, 0x1.aeb436p-108f, 0x1.faf046p-105f, 0x1.95fa2p-59f, 0x1.5d2132p-95f,
     0x1.5bfd1p-80f, 0x1.cf814ap-14f, 0.0f, 0x1.2e3858p-105f, 0x1.d29b42p-16f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8794f6p-83f, 0.0f, 0x1.021c48p-53f, 0.0f, 0.0f,
     0.0f, 0x1.5ec31cp-52f, 0x1.fec23ep-114f, 0.0f, 0x1.7e4f76p-49f, 0.0f,
     0x1.f7729cp-58f, 0.0f, 0.0f, 0x1.7d02f6p-111f, 0x1.d1458p-85f, 0x1.7879e4p-33f,
     0x1.2f243cp-90f, 0.0f, 0x1.4c988p-71f, 0.0f, 0x1.a9df74p-29f, 0.0f,
     0x1.e3ff0ap-28f, 0x1.434d1p-83f, 0.0f, 0.0f, 0x1.04053ep-112f, 0x1.b8296ap-97f,
     0x1.93c72p-81f, 0.0f, 0x1.13b69cp-41f, 0.0f, 0.0f, 0x1.1ef54ap-109f,
     0x1.3bc22ep-106f, 0x1.97cc18p-5f, 0x1.d7ba7p-16f, 0x1.6f29aap-43f,
     0x1.aecadp-95f, 0x1.44a834p-64f, 0.0f, 0x1.bf1102p-17f, 0x1.88901ep-88f, 0.0f,
     0.0f, 0.0f, 0x1.0d39f8p-10f, 0.0f, 0.0f, 0x1.45bdbep-123f, 0x1.558e02p-2f,
     0x1p0f, 0.0f, 0.0f, 0x1.2572dap-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b08c5ep-46f, 0x1.c0a982p-7f, 0.0f, 0x1.916c74p-124f, 0.0f, 0.0f, 0.0f,
     0x1.941478p-4f, 0x1.db0c1p-83f, 0.0f, 0x1.7ef50ap-92f, 0.0f, 0x1.4de5p-63f,
     0x1.a178aep-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fe2858p-27f, 0x1.649cd8p-79f,
     0x1.d4b44ep-76f, 0.0f, 0x1.1f7b94p-45f, 0x1.c840fcp-87f, 0x1.77cc1ep-124f,
     0x1.705f7cp-34f, 0.0f, 0x1.ea15a4p-87f, 0x1.9290c8p-8f, 0.0f, 0x1.d0c63ap-43f,
     0.0f, 0x1.00afcp-15f, 0.0f, 0x1.9787p-20f, 0x1.e4c554p-33f, 0x1.331bb2p-125f,
     0x1.df28d6p-32f, 0x1.adf208p-85f, 0x1.ac53fep-69f, 0.0f, 0.0f, 0x1.98b85cp-106f,
     0x1.66436cp-123f, 0x1.6c4536p-84f, 0x1.090fdp-118f, 0x1.c1ec78p-65f,
     0x1.664ee8p-54f, 0.0f, 0.0f, 0x1.1e723p-124f, 0.0f, 0x1.52ff88p-66f,
     0x1.7d6f0cp-3f, 0.0f, 0.0f, 0x1.c2bb12p-19f, 0x1.c8fd2p-75f, 0x1.e1aa7p-90f,
     0x1.37a3b6p-113f, 0x1.23253ap-124f, 0x1.555e7ep-83f, 0.0f, 0x1.87d59p-55f,
     0x1.bcad4p-12f, 0x1.d5dd88p-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a33a08p-11f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.181958p-102f, 0.0f, 0x1.c02f96p-27f, 0x1p0f, 0.0f,
     0x1.9d74cep-95f, 0x1.4c88d2p-60f, 0x1.ab264cp-62f, 0x1.edc098p-41f, 0.0f,
     0x1.6c841cp-40f, 0x1.f46874p-20f, 0x1.13780ep-116f, 0.0f, 0.0f, 0x1.3dfd5p-81f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.aeeb52p-125f, 0.0f, 0x1.011654p-71f, 0x1.ff3064p-84f,
     0x1.e8b062p-119f, 0.0f, 0.0f, 0x1.a8c788p-38f, 0.0f, 0.0f, 0x1.747ffep-90f, 0.0f,
     0x1.7823cp-16f, 0x1.32246cp-115f, 0x1.edb5fp-112f, 0x1.4a9994p-59f,
     0x1.84f7b8p-105f, 0.0f, 0.0f, 0x1.6de99ap-26f, 0x1.85765ep-23f, 0x1.d9d178p-70f,
     0x1.6ef096p-120f, 0x1.96311ap-12f, 0.0f, 0x1.506f96p-1f, 0.0f, 0.0f,
     0x1.ded706p-26f, 0.0f, 0x1.dd155cp-16f, 0x1.4e065ep-44f, 0.0f, 0.0f,
     0x1.da9406p-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3fdfd6p-50f, 0x1.775ae4p-74f,
     0x1.e59386p-5f, 0x1.9eeae6p-47f, 0x1.ee074ap-64f, 0.0f, 0.0f, 0.0f,
     0x1.7fe82ep-76f, 0.0f, 0.0f, 0.0f, 0x1.803d84p-41f, 0x1.dd5856p-27f,
     0x1.009adcp-76f, 0x1.0ab536p-1f, 0.0f, 0x1.d3cd54p-61f, 0x1.9365e6p-37f, 0.0f,
     0.0f, 0x1.5d450ap-103f, 0.0f, 0.0f, 0.0f, 0x1.97c03ep-65f, 0.0f, 0.0f,
     0x1.87c19ap-67f, 0x1.bf67ccp-126f, 0x1.8f339cp-113f, 0x1.21e53ep-59f,
     0x1.61d19cp-85f, 0x1.677abep-46f, 0x1.201c64p-60f, 0.0f, 0.0f, 0x1.c910fap-34f,
     0.0f, 0x1.f4529ep-32f, 0x1.87076cp-53f, 0x1.5efd56p-96f, 0x1.aa888p-59f,
     0x1.3d5794p-42f, 0x1.1db0b2p-29f, 0x1.358fd8p-27f, 0x1.d2d16p-98f,
     0x1.b1cf5cp-117f, 0x1.0326ccp-78f, 0.0f, 0.0f, 0.0f, 0x1.e5160ap-62f, 0.0f,
     0x1.1c5faep-40f, 0.0f, 0x1.5f256cp-60f, 0x1.e14aeap-112f, 0x1.23683p-52f,
     0x1.59e942p-87f, 0.0f, 0.0f, 0x1.83758p-125f, 0.0f, 0.0f, 0x1.bf4f2ep-80f,
     0x1.402c2cp-93f, 0.0f, 0x1.b5f89ep-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c36df6p-71f, 0x1.2ec5f8p-2f, 0.0f, 0x1.81534ap-112f, 0.0f, 0x1.93cd1p-18f,
     0x1.bad03cp-52f, 0x1.505386p-61f, 0.0f, 0.0f, 0.0f, 0x1.5925ccp-60f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.09ea44p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.780f8ep-40f, 0.0f,
     0.0f, 0.0f, 0x1.56cdd4p-121f, 0.0f, 0.0f, 0x1.9fcedep-91f, 0.0f, 0.0f,
     0x1.0e1ef8p-79f, 0.0f, 0x1.7922dap-13f, 0.0f, 0.0f, 0x1.68a14ap-67f,
     0x1.80a608p-65f, 0x1.6d8614p-42f, 0x1.548336p-13f, 0x1.72c01cp-74f,
     0x1.5192aap-85f, 0.0f, 0x1.a4b78p-67f, 0.0f, 0x1.3f6cbcp-32f, 0.0f,
     0x1.2fb034p-69f, 0x1.c3af4cp-88f, 0x1.1bf234p-107f, 0.0f, 0.0f, 0.0f,
     0x1.465fep-42f, 0.0f, 0.0f, 0.0f, 0x1.2ac5bp-118f, 0.0f, 0.0f, 0x1.48da14p-93f,
     0.0f, 0x1.8a6a16p-102f, 0x1.375284p-29f, 0.0f, 0x1.c51b4ep-80f, 0.0f,
     0x1.678092p-5f, 0x1.f850e6p-96f, 0.0f, 0x1.d5f70cp-49f, 0x1.76d364p-40f,
     0x1.87fb8p-56f, 0x1.043938p-30f
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
            float tmp3;
            int32_t tmp4;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = external_bench_wrapper_input_table_arg1[i];
            tmp2 = Sleef_nextafterf1_purecfma(tmp0, tmp1);
            external_bench_wrapper_output_table[i] = tmp2;
            tmp3 = bench_acc + tmp2;
            bench_acc = tmp3;
            tmp4 = i + INT32_C(1);
            i = tmp4;
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
    printf("Sleef_nextafterf1_purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_nextafterf1_purecfma bench acc %a\n", global_bench_acc);
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
