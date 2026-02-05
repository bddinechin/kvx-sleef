/**
 * generated using metalibm 1.1
 * sha1 git: b'"3425a70973ff93e510359b9b2fa45754ebf43279"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_floorf.c --function floorf --headers math.h,ml_support_lib.h \
 *     --input-formats binary32 --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <math.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile float external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.42414ep-57f, 0.0f, 0x1.fa6cbcp-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e7b34ap-99f, 0x1.c1a6c6p-92f, 0x1.3df8eep-119f, 0.0f, 0x1.a9a27ep-3f,
     0x1.80641ep-19f, 0.0f, 0.0f, 0x1.c74d38p-71f, 0.0f, 0.0f, 0.0f, 0x1.8ef6dp-11f,
     0.0f, 0x1.f903a2p-105f, 0x1.f905e6p-116f, 0x1.60ae64p-120f, 0x1.4e04c4p-12f,
     0.0f, 0.0f, 0.0f, 0x1.64573ep-69f, 0.0f, 0.0f, 0x1.82e5e4p-90f, 0x1.5f93a4p-63f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e7117cp-36f, 0x1.5ea3bcp-43f, 0x1.8360bep-126f, 0.0f,
     0x1.29052p-72f, 0x1.20b444p-60f, 0x1.4e7218p-111f, 0.0f, 0.0f, 0.0f,
     0x1.1391a2p-123f, 0.0f, 0.0f, 0x1.64db7p-16f, 0x1.92f752p-74f, 0.0f,
     0x1.7a69f8p-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d4f684p-107f, 0x1.f345fcp-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d3c062p-90f,
     0x1.3e8bfep-41f, 0.0f, 0.0f, 0x1.0950aap-47f, 0x1.3aff98p-122f, 0x1.dc2496p-32f,
     0.0f, 0x1.01c4e8p-65f, 0x1.16e506p-106f, 0.0f, 0x1.c69a02p-89f, 0x1.1802fcp-12f,
     0.0f, 0x1.2c1c52p-19f, 0x1.61bc66p-110f, 0.0f, 0x1.5af5f6p-85f, 0.0f,
     0x1.0ceda2p-52f, 0x1.82e09ep-47f, 0x1.5b16bcp-35f, 0.0f, 0.0f, 0x1.5f7152p-49f,
     0.0f, 0.0f, 0.0f, 0x1.92804ep-114f, 0x1.ec1142p-110f, 0.0f, 0.0f,
     0x1.7a7886p-52f, 0x1.e36162p-96f, 0.0f, 0.0f, 0x1.f4950cp-76f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.9bb954p-46f, 0x1.67c81ap-50f, 0x1.92815p-109f, 0.0f,
     0x1.839bb6p-16f, 0.0f, 0x1.79a1d6p-38f, 0x1.fef6fap-80f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.9b8756p-123f, 0.0f, 0x1.68f994p-61f, 0x1.cf9a2ap-103f, 0x1.80d94ap-73f,
     0x1.80f356p-35f, 0.0f, 0x1.08a03cp-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6937c2p-30f,
     0x1.6d1246p-65f, 0.0f, 0x1.3d58fp-101f, 0.0f, 0.0f, 0x1.3c705cp-31f,
     0x1.f3085ap-50f, 0.0f, 0x1.58d318p-52f, 0x1.491b44p-34f, 0x1.35bc42p-106f, 0.0f,
     0.0f, 0x1.ba92cp-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e23608p-51f, 0.0f, 0.0f, 0.0f,
     0x1.8df65p-35f, 0.0f, 0x1.ac755cp-86f, 0x1.52cf08p-92f, 0x1.3e51c4p-68f,
     0x1.b92d88p-100f, 0.0f, 0.0f, 0.0f, 0x1.1ba7fep-114f, 0.0f, 0.0f, 0.0f,
     0x1.5d6302p-65f, 0x1.90a936p-43f, 0.0f, 0.0f, 0.0f, 0x1.59c27ap-88f, 0.0f, 0.0f,
     0x1.f2c3ecp-25f, 0.0f, 0x1.327c0ap-68f, 0.0f, 0x1.4d6a5p-45f, 0.0f, 0.0f,
     0x1.3b1858p-40f, 0.0f, 0.0f, 0x1.668276p-18f, 0x1.5304fp-15f, 0.0f,
     0x1.924c76p-13f, 0.0f, 0x1.b5bcap-37f, 0x1.7af066p-109f, 0x1.c59276p-15f,
     0x1.746d96p-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e0a32p-7f, 0.0f, 0.0f,
     0x1.356346p-98f, 0x1.1e23e4p-42f, 0x1.2eb862p-108f, 0x1.2d4b44p-25f,
     0x1.5b1676p-113f, 0x1.4a9574p-7f, 0x1.a27f82p-86f, 0x1.7dd432p-89f, 0.0f,
     0x1.7d123cp-60f, 0x1.1f2596p-42f, 0.0f, 0.0f, 0x1.d6b09p-42f, 0x1.e2d8aep-53f,
     0x1.4d6c74p-31f, 0.0f, 0x1.31fa3ap-2f, 0.0f, 0x1.ecee14p-13f, 0.0f,
     0x1.8d5676p-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e291d2p-61f, 0.0f, 0x1.048c18p-126f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.0c4518p-101f, 0x1.41544p-4f, 0x1.85938p-85f, 0.0f,
     0x1.1a690ap-24f, 0.0f, 0.0f, 0x1.02b03p-112f, 0.0f, 0.0f, 0.0f, 0x1.7127fp-118f,
     0x1.263614p-6f, 0x1.b0d224p-113f, 0x1.07ae1p-122f, 0.0f, 0x1.ae2288p-126f,
     0x1.4d0cbep-25f, 0x1.5e6152p-88f, 0x1.48337p-26f, 0.0f, 0x1.cde9e6p-121f,
     0x1.fa92cap-42f, 0x1.ca24c8p-121f, 0.0f, 0.0f, 0x1.a297dcp-122f, 0.0f, 0.0f,
     0x1.f9610ep-4f, 0.0f, 0.0f, 0x1.dcdfbep-79f, 0x1.d263eep-46f, 0x1.cdd2d4p-31f,
     0.0f, 0x1.7c7ac8p-62f, 0x1.fee674p-123f, 0.0f, 0x1.1dd074p-18f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.2fc08ep-2f, 0x1.e3e11p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.12c324p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2543aap-7f, 0.0f,
     0x1.2a083cp-93f, 0x1.8bd842p-108f, 0.0f, 0x1.881d74p-70f, 0.0f, 0.0f,
     0x1.1979ep-36f, 0x1.ae3baap-106f, 0x1.4a963ap-52f, 0x1.81e5f8p-40f, 0.0f, 0.0f,
     0x1.af487ep-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.72b044p-88f, 0.0f,
     0.0f, 0x1.aec774p-92f, 0x1.0fec4ap-26f, 0.0f, 0x1.edfb64p-103f, 0x1.2b17ap-78f,
     0x1.266012p-28f, 0x1.29de8p-42f, 0x1.5b6898p-111f, 0.0f, 0.0f, 0x1.2197c2p-63f,
     0x1.8bb4d6p-120f, 0x1.e1addep-23f, 0.0f, 0x1.4f93eep-18f, 0x1.14dd7p-67f,
     0x1.4eb4eap-89f, 0.0f, 0x1.c9da62p-94f, 0.0f, 0x1.936662p-84f, 0x1.e958ccp-80f,
     0x1.1256e6p-5f, 0x1.f56834p-67f, 0.0f, 0x1.0212dp-12f, 0.0f, 0x1.1422c6p-111f,
     0x1.3012ecp-35f, 0.0f, 0x1.e84a2ap-123f, 0x1.e79b84p-5f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3cc946p-73f, 0x1.b064d8p-91f, 0x1.6348e8p-38f, 0x1.ccd2e6p-48f,
     0x1.61a4dcp-2f, 0x1.be7a5ep-33f, 0x1.a9baacp-47f, 0.0f, 0.0f, 0x1.23953ap-56f,
     0x1.9a2572p-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7c8bc2p-77f, 0.0f, 0.0f,
     0x1.6c49c6p-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7f6616p-6f,
     0x1.204374p-36f, 0x1.b6f888p-76f, 0x1.ea3546p-27f, 0.0f, 0x1.e4eeb4p-44f, 0.0f,
     0x1.71f2f8p-38f, 0x1.1623dap-51f, 0x1.22a8cp-46f, 0x1.a86728p-30f,
     0x1.2d312p-118f, 0x1.08c698p-71f, 0x1.e7f962p-108f, 0.0f, 0x1.3dd8fap-105f,
     0x1.83c668p-3f, 0.0f, 0.0f, 0x1.a51e36p-13f, 0x1.b7d4bep-97f, 0.0f,
     0x1.e1144p-98f, 0x1.6ae654p-20f, 0x1.bb23bcp-11f, 0x1.fbae6ep-52f,
     0x1.2583a2p-4f, 0x1.52df64p-70f, 0x1.bab0fcp-21f, 0.0f, 0x1.2502ap-41f, 0.0f,
     0.0f, 0x1.7b1dcap-34f, 0x1.8fde56p-56f, 0x1.9cc8a6p-66f, 0x1.684a98p-39f,
     0x1.4b2da6p-39f, 0.0f, 0x1.23c13ep-102f, 0.0f, 0.0f, 0x1.7a3c4ap-90f, 0.0f,
     0x1.22eea2p-111f, 0x1.b7796cp-33f, 0.0f, 0x1.856d76p-105f, 0.0f, 0x1.879012p-3f,
     0x1.6d72dcp-51f, 0x1.95bf72p-101f, 0.0f, 0x1.8c01eep-58f, 0.0f, 0.0f,
     0x1.ff3236p-30f, 0.0f, 0x1.a26bf4p-22f, 0.0f, 0.0f, 0x1.5ce43cp-106f, 0.0f,
     0x1.7d5736p-90f, 0x1.481c86p-126f, 0.0f, 0.0f, 0.0f, 0x1.067f14p-39f,
     0x1.ea1862p-56f, 0x1p0f, 0x1.741bdap-20f, 0.0f, 0.0f, 0.0f, 0x1.c29c72p-48f,
     0x1.656884p-14f, 0.0f, 0.0f, 0x1.2c39ap-59f, 0.0f, 0.0f, 0x1.666506p-98f,
     0x1.6212f2p-55f, 0x1.fb612ep-47f, 0x1.0d63e2p-22f, 0.0f, 0.0f, 0.0f,
     0x1.c27c14p-43f, 0.0f, 0x1.81d108p-55f, 0x1.9f964cp-71f, 0x1.13470cp-112f,
     0x1.16a6bp-13f, 0x1.2ff272p-95f, 0x1.96043ep-102f, 0x1.a32df4p-8f,
     0x1.ed656ep-48f, 0.0f, 0x1.0e9e9ep-47f, 0.0f, 0x1.ed0c66p-42f, 0x1.e02466p-87f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f897d8p-105f, 0x1.27aa08p-114f, 0.0f, 0.0f,
     0x1.ab3bb4p-27f, 0x1.ff7f82p-37f, 0.0f, 0.0f, 0x1.8fa13ap-58f, 0.0f,
     0x1.c1beccp-1f, 0.0f, 0.0f, 0x1.6b0aecp-81f, 0x1.dd2984p-34f, 0.0f, 0.0f,
     0x1.179468p-90f, 0x1.fbd586p-23f, 0.0f, 0.0f, 0x1.c7d99ep-85f, 0.0f,
     0x1.7f5866p-122f, 0.0f, 0.0f, 0.0f, 0x1.a32034p-5f, 0x1.3c67eap-13f, 0.0f, 0.0f,
     0x1.7505f6p-48f, 0x1.0b7476p-92f, 0x1.85970ep-44f, 0.0f, 0x1.7ca5bep-104f, 0.0f,
     0x1.fbe5e8p-62f, 0.0f, 0x1.4a477ap-48f, 0.0f, 0.0f, 0x1.943e98p-76f,
     0x1.2f983ep-97f, 0.0f, 0x1.7025d6p-26f, 0.0f, 0.0f, 0.0f, 0x1.e2117ap-63f, 0.0f,
     0x1.0f9b8ap-13f, 0x1.0e8cb4p-126f, 0x1.829aa2p-29f, 0.0f, 0x1.e8fbaap-12f,
     0x1.ed3c64p-106f, 0.0f, 0x1.b66474p-67f, 0x1.5e6d3ap-29f, 0.0f, 0x1.f0e858p-102f,
     0x1.d3042ap-80f, 0x1.afd066p-107f, 0.0f, 0x1.9043p-110f, 0x1.8c6f3cp-79f,
     0x1.dae408p-95f, 0.0f, 0.0f, 0.0f, 0x1.209a9cp-43f, 0.0f, 0x1.5357aap-126f,
     0x1.394ba8p-122f, 0.0f, 0.0f, 0x1.5ad862p-17f, 0x1.b12d26p-29f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ca832ap-112f, 0x1.61f0b6p-114f, 0.0f, 0.0f, 0x1.77b63ep-9f,
     0x1.935caap-108f, 0x1.b4d19ep-99f, 0x1.029abp-19f, 0.0f, 0x1.462798p-80f, 0.0f,
     0x1.dfc426p-28f, 0.0f, 0.0f, 0x1.a862b4p-10f, 0x1.30db86p-86f, 0x1.5ff276p-41f,
     0.0f, 0x1.6acb06p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1861ccp-62f, 0.0f, 0.0f,
     0x1.f49e54p-75f, 0.0f, 0x1.8a2ebp-29f, 0.0f, 0x1.8335d2p-11f, 0.0f,
     0x1.cff77ep-45f, 0.0f, 0x1.678344p-125f, 0x1.b0d518p-33f, 0.0f, 0.0f,
     0x1.128ac6p-51f, 0x1.b5c35ap-111f, 0.0f, 0x1.e165f2p-118f, 0x1.f20b2ep-90f,
     0x1.a3d1acp-20f, 0x1.b15834p-66f, 0.0f, 0.0f, 0.0f, 0x1.c2894ep-102f,
     0x1.3b11b4p-89f, 0x1.8be6p-72f, 0.0f, 0.0f, 0.0f, 0x1.6aef9cp-46f,
     0x1.cf88f6p-67f, 0.0f, 0x1.98ce28p-39f, 0.0f, 0x1.7da39ep-91f, 0x1.3be24p-101f,
     0x1.4c1b16p-86f, 0x1.dca8ccp-13f, 0x1.81c1eap-14f, 0x1.28467cp-65f, 0.0f,
     0x1.aa149ap-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.283a32p-56f, 0.0f, 0.0f,
     0.0f, 0x1.2b59ep-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f362b8p-55f, 0x1.975a24p-50f,
     0.0f, 0x1.609702p-115f, 0.0f, 0x1.d5e992p-1f, 0.0f, 0x1.c90a4ap-40f,
     0x1.4e535p-12f, 0.0f, 0.0f, 0.0f, 0x1.f948cp-41f, 0x1.f27d18p-59f,
     0x1.072a14p-26f, 0x1.5b741ep-124f, 0.0f, 0.0f, 0x1.b35096p-51f, 0.0f, 0.0f,
     0x1.cbed08p-32f, 0x1.5a7794p-80f, 0.0f, 0x1.cd121p-108f, 0x1.760d3ap-5f, 0x1p0f,
     0.0f, 0.0f, 0.0f, 0x1.5d87b6p-93f, 0x1.9439c2p-14f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c538dp-97f, 0x1.0b2a34p-114f, 0.0f, 0.0f, 0x1.4c494p-32f, 0x1.cb8fbap-21f,
     0.0f, 0.0f, 0x1.29201p-103f, 0.0f, 0x1p0f, 0x1.5c6cbep-42f, 0x1.df50f4p-70f,
     0.0f, 0.0f, 0x1.cb058p-121f, 0x1.9179e8p-34f, 0.0f, 0.0f, 0.0f, 0x1.c6bc3cp-18f,
     0x1.9f535ap-109f, 0x1.cd39c4p-117f, 0.0f, 0x1.e7cd84p-56f, 0.0f, 0.0f,
     0x1.1489acp-85f, 0x1.1244f6p-79f, 0.0f, 0.0f, 0x1.bb69b8p-76f, 0x1.132d1ap-5f,
     0.0f, 0.0f, 0.0f, 0x1.dc914ep-125f, 0x1.fa46e4p-71f, 0.0f, 0x1.22883ep-62f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.2ce638p-33f, 0x1.1369cap-75f, 0.0f, 0x1.748814p-96f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a917f8p-56f, 0.0f, 0.0f, 0x1.b86936p-124f,
     0.0f, 0.0f, 0x1.9facd4p-100f, 0x1.54a2acp-44f, 0x1.cb6d0cp-116f, 0x1.63d9e8p-70f,
     0.0f, 0.0f, 0x1.e232a2p-37f, 0.0f, 0x1.8a2dep-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4aef58p-103f, 0x1.142b2p-98f, 0.0f, 0x1.68755p-8f, 0.0f, 0.0f,
     0x1.1b22fep-77f, 0.0f, 0.0f, 0x1.da3ae8p-117f, 0x1.78dabep-126f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.068bb6p-25f, 0x1.bcc23ap-1f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a5754cp-54f, 0.0f, 0.0f, 0x1.00b0a8p-59f, 0x1.636dd4p-105f, 0x1.03e166p-47f,
     0.0f, 0x1.866bdp-18f, 0x1.057f72p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4c3494p-51f, 0.0f, 0x1.eab166p-125f, 0.0f, 0.0f, 0x1.0fe1bp-5f,
     0x1.2dff4cp-28f, 0.0f, 0x1.7cce5cp-15f, 0.0f, 0x1.1a83bp-70f, 0x1.296b9ep-18f,
     0x1.521f84p-56f, 0.0f, 0.0f, 0.0f, 0x1.7bc23cp-59f, 0.0f, 0.0f, 0x1.b3ec84p-94f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0a7756p-102f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a94974p-46f, 0x1.6973e6p-52f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.793ac4p-26f, 0.0f, 0x1.68716ap-37f, 0x1.cd14a4p-38f, 0.0f,
     0x1.fca398p-72f, 0x1.f472c6p-31f, 0x1.79ae76p-44f, 0.0f, 0x1.61f682p-103f, 0.0f,
     0x1.ee77ap-120f, 0x1.797dd6p-79f, 0.0f, 0x1p0f, 0x1.707254p-10f,
     0x1.11dec2p-125f, 0x1.4a0c18p-30f, 0.0f, 0.0f, 0x1.5dc944p-54f, 0.0f, 0.0f,
     0x1.cd0d8ap-51f, 0.0f, 0x1.d320fap-112f, 0x1.d37c7ap-44f, 0x1.b37772p-12f,
     0x1.b34bf6p-116f, 0x1.e727bcp-66f, 0.0f, 0x1.823d4p-102f, 0x1.3713e8p-38f,
     0x1.fa6a32p-104f, 0.0f, 0.0f, 0x1.2ab2ep-26f, 0x1.6f3434p-29f, 0x1.1d7682p-68f,
     0.0f, 0x1.a852cp-95f, 0.0f, 0x1.69ca26p-126f, 0.0f, 0x1.ca4f66p-117f, 0.0f, 0.0f,
     0x1.066628p-89f, 0x1.acd2bep-37f, 0.0f, 0x1.427f52p-51f, 0x1.d1abf8p-55f,
     0x1.077e78p-102f, 0.0f, 0.0f, 0.0f, 0x1.9abd5ep-66f, 0.0f, 0.0f, 0.0f,
     0x1.8c808ap-101f, 0x1.7b9b52p-12f, 0x1.4dae4cp-81f, 0x1.7b7f6cp-96f,
     0x1.d17cf6p-31f, 0x1.b2851p-50f, 0x1.33e548p-100f, 0.0f, 0x1.9ad8b4p-109f, 0.0f,
     0.0f, 0x1.251f36p-95f, 0x1.c71e1ap-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a7f12ap-109f, 0.0f, 0x1.158b3p-43f, 0.0f, 0x1.cae3bep-118f, 0.0f,
     0x1.3a09d4p-67f, 0.0f, 0.0f, 0x1.f6d3f2p-22f, 0x1.67b986p-11f, 0x1.bbb548p-88f,
     0.0f, 0.0f, 0.0f, 0x1.4c33ccp-42f, 0x1.b5927cp-74f, 0x1.131308p-49f, 0.0f, 0.0f,
     0x1.38ff3ap-43f, 0x1.c12f0ap-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.aa284ap-94f, 0.0f,
     0x1.20692p-114f, 0x1.26c22p-100f, 0.0f, 0.0f, 0x1.fafdaap-38f, 0.0f,
     0x1.89d866p-9f, 0.0f, 0.0f, 0.0f, 0x1.c7025ap-34f, 0.0f, 0x1.78fba4p-114f,
     0x1.629c44p-58f, 0.0f, 0x1.1fe58ep-20f, 0.0f, 0.0f, 0x1.aba788p-99f, 0x1p0f,
     0.0f, 0x1.5db5eap-113f, 0x1.2c6058p-15f, 0.0f, 0.0f, 0.0f, 0x1.c52cecp-41f, 0.0f,
     0x1.c9637cp-11f, 0.0f, 0.0f, 0x1.866944p-72f, 0.0f, 0x1.8e9598p-85f,
     0x1.f8e0aep-21f, 0x1.323acp-65f, 0x1.630834p-59f, 0.0f, 0.0f, 0.0f,
     0x1.48b89cp-6f, 0x1.a4a0c6p-39f
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
            tmp1 = floorf(tmp0);
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
    printf("floorf %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("floorf bench acc %a\n", global_bench_acc);
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
