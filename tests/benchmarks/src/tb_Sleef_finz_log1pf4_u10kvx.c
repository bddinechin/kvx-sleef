/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_log1pf4_u10kvx.c --function \
 *     Sleef_finz_log1pf4_u10kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 4 --function-input-vector-size \
 *     4 --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float4_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float4_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0x1.838c6ap-1f, 0.0f, 0x1.014594p-86f, 0x1.1c0c6ep-75f, 0x1.efb83cp-32f,
     0x1.25b756p-8f, 0.0f, 0x1.92955ap-88f, 0.0f, 0.0f, 0.0f, 0x1.68f3eep-7f,
     0x1.415d16p-96f, 0.0f, 0x1.767584p-120f, 0.0f, 0x1.c36dcap-65f, 0.0f,
     0x1.2e03fap-36f, 0x1.b51656p-70f, 0x1.8b000ep-126f, 0.0f, 0.0f, 0x1.ff6a06p-55f,
     0x1.40e596p-31f, 0.0f, 0x1.1a9004p-24f, 0.0f, 0.0f, 0x1.176cd8p-111f, 0.0f, 0.0f,
     0x1.db4f4ap-62f, 0x1.2c3bc6p-45f, 0.0f, 0x1.2e405ap-43f, 0.0f, 0.0f,
     0x1.ff38fep-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cfaf02p-69f, 0x1.66c7b4p-104f,
     0x1.83f81ep-121f, 0.0f, 0x1.a14eap-56f, 0.0f, 0.0f, 0x1.2d30fap-75f, 0.0f, 0.0f,
     0x1.1c3a48p-28f, 0x1.1b032p-82f, 0x1.db88a4p-33f, 0.0f, 0x1.41fd38p-55f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.2b7a4ep-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f01e9p-63f,
     0x1.dd8e42p-68f, 0x1.eb863ap-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4d4a46p-103f, 0.0f,
     0x1.b4102p-116f, 0.0f, 0x1.139474p-59f, 0.0f, 0.0f, 0x1.d6c4cep-54f, 0.0f,
     0x1.bb3f3cp-119f, 0.0f, 0.0f, 0.0f, 0x1.3cacbp-91f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c080bcp-24f, 0x1.a0d28cp-126f, 0x1.5137eep-91f, 0.0f, 0.0f, 0x1.855ba2p-45f,
     0.0f, 0x1.11e76ep-65f, 0x1.eb64e4p-119f, 0x1.b0851ep-3f, 0x1.c60e5ap-113f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7abbbcp-46f, 0.0f, 0x1.f21482p-104f, 0x1.34f62cp-4f,
     0.0f, 0x1.25a9p-71f, 0x1.42f72ep-44f, 0.0f, 0x1.698372p-12f, 0x1.7ee5c6p-125f,
     0x1.911f4ep-71f, 0x1.ac7f1cp-25f, 0x1.e8345ap-85f, 0.0f, 0x1.5c289ap-16f, 0.0f,
     0x1.9f7ac6p-89f, 0x1.3455dap-81f, 0.0f, 0x1.34f0f6p-65f, 0.0f, 0.0f,
     0x1.7038d2p-17f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4b7b8p-35f,
     0x1.dbc1f2p-96f, 0x1.92f9dep-5f, 0x1.487522p-117f, 0.0f, 0x1.470d46p-103f, 0.0f,
     0.0f, 0.0f, 0x1.bcad0cp-65f, 0x1.29dd28p-108f, 0x1.c71094p-42f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.9cc51cp-18f, 0.0f, 0.0f, 0x1.430a4ap-47f, 0x1.3b6d58p-88f, 0.0f,
     0.0f, 0x1.30dc9ep-97f, 0x1.7cb344p-57f, 0x1.e7aab8p-23f, 0x1.32570cp-38f, 0.0f,
     0x1.90281cp-27f, 0x1.3c6326p-3f, 0x1.b20216p-103f, 0.0f, 0x1.81c724p-100f,
     0x1.25ec4p-28f, 0.0f, 0.0f, 0x1.4f98fap-100f, 0x1.9bb27p-84f, 0x1.91bf2ap-120f,
     0.0f, 0x1.bcde4ep-81f, 0x1.430c68p-40f, 0x1.7a5e32p-109f, 0.0f, 0x1.486eb4p-124f,
     0x1.e88732p-48f, 0.0f, 0.0f, 0.0f, 0x1.b141bcp-126f, 0.0f, 0x1.9d3f4p-87f, 0.0f,
     0.0f, 0.0f, 0x1.dd4af2p-81f, 0x1.145606p-88f, 0x1.ebe928p-7f, 0.0f, 0.0f, 0.0f,
     0x1.6ec9a4p-106f, 0.0f, 0x1.052916p-45f, 0.0f, 0x1.b4334ep-91f, 0x1.46d17ep-105f,
     0.0f, 0.0f, 0x1.90494p-126f, 0.0f, 0x1.bcbad8p-18f, 0.0f, 0.0f, 0.0f,
     0x1.40751ep-57f, 0.0f, 0x1.f3d7a4p-66f, 0.0f, 0.0f, 0.0f, 0x1.33c15cp-115f,
     0x1.7ba29cp-117f, 0x1.136c6ep-1f, 0x1.9247dp-21f, 0.0f, 0.0f, 0.0f,
     0x1.99a568p-16f, 0x1.1a583p-66f, 0.0f, 0x1.3485fp-74f, 0.0f, 0.0f, 0.0f,
     0x1.1bd1f2p-11f, 0.0f, 0.0f, 0.0f, 0x1.78920cp-95f, 0.0f, 0x1.274288p-82f,
     0x1.5707b2p-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.726726p-105f, 0x1.2d022ap-48f,
     0x1.ce56cap-70f, 0x1.522f6p-10f, 0.0f, 0.0f, 0x1.511374p-113f, 0.0f, 0.0f,
     0x1.ee8a9ap-8f, 0x1.4e1e2cp-108f, 0.0f, 0x1.6314b8p-76f, 0x1.59958ap-78f, 0.0f,
     0.0f, 0x1.40af2p-101f, 0x1.36ace6p-103f, 0.0f, 0x1.5134c8p-98f, 0x1.cfd756p-60f,
     0x1.0f5d5ap-46f, 0.0f, 0x1.a531e6p-75f, 0x1.5f6838p-118f, 0.0f, 0x1.64882ep-58f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.0e603ep-97f, 0.0f, 0.0f, 0.0f, 0x1.1b736ap-104f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.525f3ap-126f, 0x1.6abf44p-108f, 0x1.48aac6p-82f,
     0x1.054ae8p-51f, 0.0f, 0.0f, 0x1.9d980ep-82f, 0x1.2b1134p-110f, 0.0f,
     0x1.f11e06p-51f, 0.0f, 0x1.8c9da4p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f51cb4p-85f,
     0x1.a848aep-86f, 0x1.5bca0ep-12f, 0x1.7f7ap-91f, 0.0f, 0x1.1c1502p-85f,
     0x1.a269c8p-101f, 0x1.a8df4ep-100f, 0.0f, 0.0f, 0.0f, 0x1.1fa15p-124f,
     0x1.ef2056p-77f, 0x1.909f02p-120f, 0x1.e2cda2p-22f, 0x1.c8c504p-12f, 0.0f,
     0x1.4be09ep-36f, 0x1.69db02p-25f, 0x1.150046p-49f, 0x1.960428p-34f,
     0x1.13145cp-91f, 0x1.6324aep-87f, 0x1.d37606p-82f, 0.0f, 0x1.37fb2ep-57f,
     0x1.11b646p-20f, 0x1.c0b1ep-16f, 0x1.9f37dep-44f, 0.0f, 0x1.80febep-13f, 0.0f,
     0x1.8b7ep-35f, 0.0f, 0.0f, 0.0f, 0x1.e13404p-114f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f73456p-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f3c9dcp-117f, 0.0f,
     0x1.249f12p-4f, 0.0f, 0.0f, 0.0f, 0x1.dcc1a4p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ec6c38p-37f, 0x1.2a923ap-27f, 0x1.25f3ap-81f, 0x1.20054ap-29f, 0.0f, 0.0f,
     0x1.e2f4a4p-73f, 0.0f, 0x1.3f161ap-54f, 0.0f, 0.0f, 0x1.f3465ep-16f, 0.0f,
     0x1.cd813ep-47f, 0.0f, 0x1.7f190ep-94f, 0x1.4533bap-89f, 0.0f, 0.0f, 0.0f,
     0x1.516468p-68f, 0x1.df36bap-90f, 0x1.350bbcp-55f, 0.0f, 0.0f, 0.0f,
     0x1.27642cp-94f, 0x1.4ab5a6p-14f, 0.0f, 0.0f, 0x1.b50e62p-121f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b75d86p-43f, 0.0f, 0x1.ea13d8p-36f, 0x1.46dc5ap-109f,
     0x1.44b94cp-53f, 0.0f, 0.0f, 0.0f, 0x1.cb3ee6p-19f, 0.0f, 0x1.72fd78p-16f, 0.0f,
     0x1.dd91c6p-96f, 0x1.2c12d2p-49f, 0x1.f816a4p-13f, 0x1.d4be2ap-3f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9581dcp-47f, 0.0f, 0.0f, 0x1.d69c4p-53f,
     0x1.4e4188p-89f, 0x1.f7ff9p-20f, 0.0f, 0.0f, 0x1.ae9b8p-120f, 0x1.f70d26p-11f,
     0x1.5678a4p-69f, 0x1.446268p-78f, 0x1.de3aeap-64f, 0.0f, 0x1.db46cap-123f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a2b856p-23f, 0x1.885a64p-62f, 0x1.fd6e84p-88f, 0.0f,
     0x1.456d56p-64f, 0x1.885328p-36f, 0.0f, 0x1.26e0dap-89f, 0x1.800d32p-15f, 0.0f,
     0x1.131fbap-41f, 0.0f, 0.0f, 0x1.2d5bf6p-107f, 0.0f, 0x1.2d08cep-37f, 0.0f,
     0x1.b8a41ep-5f, 0.0f, 0.0f, 0x1.785cdep-78f, 0x1.098a4ep-6f, 0.0f, 0.0f,
     0x1.12b7c2p-56f, 0x1.1264c6p-113f, 0.0f, 0.0f, 0x1.5a2daep-97f, 0x1.d2bb5p-63f,
     0.0f, 0x1.882204p-117f, 0.0f, 0x1.ea700ep-48f, 0x1.1de14ap-20f, 0.0f, 0.0f,
     0x1.46a898p-3f, 0x1.059f1p-13f, 0x1.cb6ee8p-77f, 0.0f, 0x1.6d51b4p-112f, 0.0f,
     0x1.f4734ap-107f, 0.0f, 0.0f, 0.0f, 0x1.a0797cp-56f, 0.0f, 0x1.312136p-15f,
     0x1.290c48p-46f, 0x1.94624p-95f, 0x1.219e26p-85f, 0.0f, 0x1.5ebb7ep-5f,
     0x1.a91bb4p-90f, 0.0f, 0x1.41dc06p-108f, 0.0f, 0x1.dec4d2p-92f, 0.0f, 0.0f, 0.0f,
     0x1.5e8224p-63f, 0.0f, 0.0f, 0x1.225c04p-38f, 0.0f, 0x1.5d7c6cp-19f,
     0x1.7097cap-64f, 0.0f, 0x1.7982c8p-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0a4b46p-9f,
     0x1.0f16cp-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.39709cp-24f, 0x1.213542p-124f, 0.0f,
     0.0f, 0x1.8ae476p-88f, 0.0f, 0.0f, 0x1.927d2p-31f, 0.0f, 0x1.c06672p-44f, 0.0f,
     0x1.b941f8p-48f, 0x1.fa4648p-54f, 0.0f, 0x1.30f698p-88f, 0x1.dc2cdap-118f, 0.0f,
     0.0f, 0x1.d72992p-111f, 0x1.52eb84p-72f, 0x1.ab967ep-85f, 0.0f, 0x1.c41872p-26f,
     0x1.96b942p-113f, 0x1.91ac68p-115f, 0.0f, 0x1.19dd3ep-56f, 0x1.397dd8p-64f,
     0x1.71f868p-19f, 0x1.23b202p-78f, 0.0f, 0x1.caa182p-117f, 0x1.dee9fp-97f,
     0x1.568e82p-87f, 0.0f, 0x1.71c4bep-21f, 0x1.b21a66p-13f, 0x1.5c015ep-43f, 0.0f,
     0x1.f7e214p-20f, 0x1.366c66p-124f, 0x1.f7e8dp-23f, 0x1.a9c208p-27f,
     0x1.193ffp-93f, 0.0f, 0.0f, 0x1.6f47bcp-37f, 0.0f, 0x1.e58ea2p-6f,
     0x1.c63222p-1f, 0.0f, 0x1.765b9p-28f, 0x1.4f68c8p-47f, 0.0f, 0x1.d66d84p-122f,
     0x1.09f012p-18f, 0x1.7171dap-84f, 0x1.2386dap-2f, 0.0f, 0x1.b1d3a2p-29f,
     0x1.eae14cp-40f, 0x1.79b2f2p-16f, 0.0f, 0.0f, 0x1.5e096p-101f, 0x1.5e6afap-121f,
     0x1.e9a47cp-42f, 0x1.aa2764p-56f, 0.0f, 0x1.f76f26p-75f, 0x1.ba1784p-88f,
     0x1.924656p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.96e86ep-63f, 0.0f, 0.0f,
     0x1.4713cp-65f, 0x1.11579cp-46f, 0.0f, 0x1.60871ep-68f, 0x1.96f502p-35f,
     0x1.735e98p-88f, 0x1.9e416ep-64f, 0x1.fdb19ap-53f, 0x1.6cfb58p-94f,
     0x1.986b54p-67f, 0.0f, 0x1.efb2ccp-105f, 0x1.320dbap-70f, 0.0f, 0.0f, 0.0f,
     0x1.9a2386p-71f, 0x1.0a72e2p-117f, 0x1.fe035ap-81f, 0.0f, 0x1.b83e22p-77f,
     0x1.195b0cp-6f, 0.0f, 0x1.3d0f2ep-66f, 0x1.3a96bep-85f, 0.0f, 0.0f, 0.0f,
     0x1.8eebeep-88f, 0x1.493d94p-24f, 0x1.b9a064p-8f, 0.0f, 0x1.3fa93cp-126f, 0.0f,
     0.0f, 0x1.587c7ep-125f, 0x1.640052p-24f, 0x1.344c5ap-72f, 0.0f, 0x1.d9d6a2p-122f,
     0x1.b0721cp-60f, 0.0f, 0.0f, 0.0f, 0x1.c5a742p-73f, 0.0f, 0x1.eec7c4p-23f, 0.0f,
     0x1.ad2e06p-25f, 0x1.2221e4p-112f, 0x1.96f3f6p-26f, 0.0f, 0x1.2b5e64p-122f,
     0x1.b3a9a8p-107f, 0x1.e9319cp-64f, 0.0f, 0.0f, 0.0f, 0x1.0dc0fep-43f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.144708p-106f, 0x1.5c4e64p-96f, 0x1.8f7eccp-117f, 0x1.6e2588p-34f,
     0x1.fd26e8p-76f, 0.0f, 0.0f, 0.0f, 0x1.0855fep-35f, 0x1.3abd86p-12f, 0.0f,
     0x1.d979dep-119f, 0.0f, 0.0f, 0.0f, 0x1.31fb66p-52f, 0.0f, 0.0f, 0.0f,
     0x1.47233ap-16f, 0x1.ca382ep-101f, 0x1.30b772p-34f, 0.0f, 0x1.185554p-33f, 0.0f,
     0.0f, 0x1.8e49ap-101f, 0x1.a05448p-45f, 0.0f, 0x1.dafadap-89f, 0x1.e1fdc8p-32f,
     0x1.e7d216p-86f, 0.0f, 0.0f, 0x1.1b2a32p-62f, 0.0f, 0.0f, 0x1.94894cp-32f,
     0x1.8fe8bep-89f, 0.0f, 0.0f, 0.0f, 0x1.e81e8cp-102f, 0x1.371ab4p-60f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3e278ap-68f, 0x1.9e39c4p-95f, 0x1.d326c6p-44f,
     0x1.da69cep-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5cc014p-115f, 0.0f, 0.0f, 0.0f,
     0x1.8c28bep-14f, 0x1.7974d8p-68f, 0x1.84eba6p-81f, 0x1p0f, 0x1.23ef8ep-122f,
     0.0f, 0x1.add432p-59f, 0.0f, 0x1.fee56ep-79f, 0x1.626544p-32f, 0x1.004038p-48f,
     0x1.86a366p-13f, 0.0f, 0x1.0825a4p-35f, 0x1.13ccf4p-49f, 0x1.c1584ep-2f,
     0x1.252e54p-9f, 0x1.3b7daap-53f, 0.0f, 0.0f, 0x1.a8c932p-72f, 0x1.19b1aap-106f,
     0.0f, 0x1.2923d4p-39f, 0x1.02ca6p-122f, 0.0f, 0x1.28c124p-105f, 0x1.4d8e88p-57f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.9eb95ap-111f, 0x1.ec93aap-67f, 0.0f,
     0x1.d0a022p-103f, 0x1.b7daf6p-42f, 0x1.47dbep-109f, 0x1.5664c2p-49f, 0.0f, 0.0f,
     0.0f, 0x1.f725fap-115f, 0x1.5d2944p-40f, 0x1.5f9b3p-82f, 0.0f, 0x1.ccdc6ep-88f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0bffe4p-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f674b4p-118f, 0x1.2178bep-75f, 0.0f, 0.0f, 0.0f, 0x1.5b869ap-32f,
     0x1.4fd38ep-79f, 0x1.2f650ap-78f, 0x1.80467ep-59f, 0x1.7503e6p-40f,
     0x1.8c6f16p-68f, 0x1.92a5bep-98f, 0x1.e26fc6p-27f, 0.0f, 0x1.2c9ec2p-102f,
     0x1.12fce4p-74f, 0.0f, 0.0f, 0x1.8e4bb8p-77f, 0x1.29291p-120f, 0x1.3bf4dp-56f,
     0x1.467b7p-79f, 0.0f, 0x1.052f9ep-58f, 0.0f, 0.0f, 0x1.0c03d4p-10f, 0.0f, 0.0f,
     0x1.18e9f4p-118f, 0x1.0b6896p-6f, 0x1.5ad31ap-89f, 0.0f, 0x1.5a01f6p-26f, 0.0f,
     0.0f, 0x1.16b17ap-124f, 0.0f, 0x1.ccd224p-52f, 0.0f, 0x1.3c57c4p-79f, 0.0f, 0.0f,
     0x1.7118c8p-3f, 0.0f, 0x1.d7ea92p-53f, 0.0f, 0.0f, 0x1.3557p-9f, 0x1.24ae08p-5f,
     0.0f, 0x1.5b0ff4p-63f, 0.0f, 0x1.5b8accp-19f, 0x1.4cda94p-36f, 0.0f,
     0x1.3a6bep-11f, 0.0f, 0x1.08aefep-84f, 0.0f, 0.0f, 0x1.1e908cp-34f,
     0x1.7bb5fcp-101f, 0x1.58f7f4p-25f, 0x1.fb7dc4p-91f, 0.0f, 0x1.9fcd78p-26f,
     0x1.ff15e6p-2f, 0.0f, 0x1.27938cp-125f, 0.0f, 0x1.e07e32p-22f, 0x1.f3f168p-126f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9fcd48p-78f, 0x1.f3e56cp-80f, 0.0f,
     0x1.e3ac32p-76f, 0x1.01514ep-99f, 0x1.90511ap-97f, 0.0f, 0.0f, 0.0f,
     0x1.ad6e78p-27f, 0x1.e866dp-77f, 0.0f, 0x1.e6d6acp-13f, 0x1.010eb8p-45f, 0.0f,
     0x1.5f79bp-9f, 0x1.684d78p-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.102352p-117f, 0.0f,
     0x1.d5c44ap-117f, 0.0f, 0x1.9382d8p-126f, 0x1.ac4bdcp-9f, 0.0f, 0x1.80f1e4p-40f,
     0x1.714de2p-88f, 0.0f, 0x1.4c2ec4p-87f, 0x1.aa116cp-103f, 0.0f, 0x1.901242p-36f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.17f88p-69f, 0x1.c695f8p-36f,
     0x1.ba7918p-86f, 0.0f, 0x1.ac6b2p-83f, 0x1.fe53b6p-20f, 0.0f, 0.0f,
     0x1.ab6ad6p-66f, 0.0f, 0x1.c21736p-54f, 0.0f, 0x1.ebe332p-113f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f2f636p-72f, 0.0f, 0x1.ec378ap-93f, 0x1.9d0242p-99f,
     0x1.e2aa9ep-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bc744cp-70f, 0x1.4d4b0cp-116f,
     0x1.6a86b6p-76f, 0.0f, 0x1.c0fff6p-71f, 0.0f, 0.0f, 0.0f, 0x1.89093ap-114f, 0.0f,
     0.0f, 0x1.d36964p-21f, 0x1.a1e81cp-11f, 0x1.813132p-67f, 0.0f, 0x1.b1f31ep-113f,
     0.0f, 0x1.824994p-70f, 0x1.421a5cp-95f, 0x1.587f3ep-109f, 0.0f, 0x1.b3d18p-106f,
     0.0f, 0x1.ec4a12p-53f, 0x1.6080dap-83f, 0x1.d468aap-48f, 0x1.8c5c1ap-26f,
     0x1.aee318p-81f, 0.0f, 0x1.1d33e6p-121f, 0x1.b56116p-46f, 0.0f, 0x1.e74efcp-61f,
     0.0f, 0.0f, 0.0f, 0x1.1f0448p-87f, 0x1.57834ap-32f, 0x1.0452aap-16f, 0.0f, 0.0f,
     0x1.6dcedp-43f, 0x1.2db13ap-34f, 0.0f, 0x1.8d4baep-75f, 0.0f, 0x1.e81d5ap-43f,
     0x1.4fbbcep-33f, 0x1.35c5e4p-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.36931ap-72f, 0.0f,
     0.0f, 0.0f, 0x1.ce5d8p-80f, 0x1.678404p-47f, 0.0f, 0.0f, 0x1.4c6b34p-113f, 0.0f,
     0x1.797074p-76f, 0.0f, 0x1.295478p-73f, 0.0f
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
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = external_bench_wrapper_cst;
    tmp = __cos_counter_num(0);
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
            tmp1 = Sleef_finz_log1pf4_u10kvx(tmp0);
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
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_finz_log1pf4_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_log1pf4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
