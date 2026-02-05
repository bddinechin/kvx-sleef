/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_exp2f1_u10purecfma.c --function \
 *     Sleef_exp2f1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.d13d0ap-123f, 0x1.f0bf32p-107f, 0.0f, 0.0f, 0x1.73fcd2p-40f,
     0x1.ff4eb6p-105f, 0x1.6495f6p-68f, 0x1.f5058cp-92f, 0x1.1912fap-38f, 0.0f,
     0x1.5e2d94p-77f, 0x1.3f4b2cp-108f, 0x1.928b8ep-6f, 0.0f, 0x1.d06fdap-119f, 0.0f,
     0x1.d2359cp-114f, 0.0f, 0x1.769c24p-49f, 0.0f, 0x1.3a0c18p-51f, 0.0f, 0.0f, 0.0f,
     0x1.b57e8cp-71f, 0x1.5af68ep-119f, 0.0f, 0.0f, 0x1.4e398ap-110f, 0x1.92bf8cp-41f,
     0.0f, 0x1.60df4ap-6f, 0x1.4ca1fcp-40f, 0.0f, 0x1.e8f596p-82f, 0x1.4169ep-48f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7759cep-69f, 0x1.6e72acp-102f, 0x1.9bc874p-52f,
     0x1.634756p-13f, 0.0f, 0x1.2d724cp-112f, 0.0f, 0x1.409d9cp-57f, 0x1.8f7ec2p-69f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.346e7p-107f, 0.0f, 0x1.b66688p-10f, 0x1.86339ap-106f,
     0.0f, 0.0f, 0x1.87e9fcp-71f, 0x1.56071cp-7f, 0x1.581ccp-118f, 0x1.25382p-78f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c6e6fep-126f, 0.0f,
     0x1.028254p-31f, 0.0f, 0.0f, 0x1.1312ecp-84f, 0x1.d4ecc8p-55f, 0.0f, 0.0f,
     0x1.5ca84p-92f, 0.0f, 0x1.377fbcp-88f, 0.0f, 0.0f, 0x1.1a615cp-25f, 0.0f,
     0x1.281e4cp-124f, 0.0f, 0x1.acad4p-80f, 0.0f, 0x1.fa2af2p-113f, 0.0f, 0.0f, 0.0f,
     0x1.4e2b06p-14f, 0.0f, 0x1.fd4df2p-15f, 0.0f, 0.0f, 0x1.94d326p-45f,
     0x1.3b15f2p-118f, 0.0f, 0x1.d77d5cp-5f, 0x1.a17668p-57f, 0x1.babec2p-69f,
     0x1.d4c9f6p-109f, 0.0f, 0.0f, 0.0f, 0x1.49808ap-115f, 0x1.5d0dd2p-83f, 0.0f,
     0x1.91a69ep-21f, 0.0f, 0.0f, 0.0f, 0x1.3767a6p-66f, 0x1.a4c0d4p-74f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.36231ep-106f, 0x1.5ef94ap-38f, 0x1.0557acp-45f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c0b77p-103f, 0.0f, 0x1.bbec0cp-53f, 0x1.69b1fcp-12f, 0x1.60cf24p-102f,
     0.0f, 0x1.2f945cp-79f, 0.0f, 0x1.a376e6p-91f, 0x1.51e668p-79f, 0.0f, 0.0f,
     0x1.0c663cp-117f, 0.0f, 0x1.ab572ep-81f, 0x1.7f28ecp-93f, 0.0f, 0x1.a6fb7cp-93f,
     0x1.a97228p-107f, 0x1.8ae3dcp-61f, 0x1.028f14p-11f, 0.0f, 0x1.6d2058p-19f, 0.0f,
     0.0f, 0.0f, 0x1.43327ep-56f, 0.0f, 0x1.9b2786p-122f, 0.0f, 0x1.132022p-90f, 0.0f,
     0.0f, 0.0f, 0x1.dd66dap-114f, 0.0f, 0.0f, 0x1.439a04p-69f, 0x1.6ce6cep-105f,
     0.0f, 0.0f, 0x1.ac343cp-121f, 0x1.d4411ep-62f, 0x1.198a3p-10f, 0x1.e919f6p-99f,
     0.0f, 0x1.6f398cp-48f, 0.0f, 0.0f, 0x1.512cdap-78f, 0x1.3c5794p-58f, 0.0f,
     0x1.da671ep-25f, 0.0f, 0.0f, 0x1.d2200ap-75f, 0.0f, 0x1.05365cp-41f,
     0x1.254766p-21f, 0x1.abd74cp-75f, 0x1.5e7852p-102f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b7d75ep-100f, 0.0f, 0x1.af6ce6p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6e6e9ap-25f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.4e6634p-28f, 0x1.95eab4p-18f, 0x1.d05e48p-107f,
     0x1.737f7p-25f, 0.0f, 0x1.e0666cp-42f, 0x1.29a47ep-50f, 0.0f, 0x1.71a6eep-106f,
     0x1.f30af6p-46f, 0x1.c39014p-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6da102p-66f, 0.0f,
     0.0f, 0x1.d6089ap-86f, 0.0f, 0x1.791362p-8f, 0x1.3f5994p-11f, 0x1.fb718ep-14f,
     0.0f, 0x1.7fd60ep-56f, 0x1.58084ap-1f, 0x1.7ebde4p-46f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4e33dap-90f, 0.0f, 0x1.386fbep-101f,
     0x1.a120dap-36f, 0.0f, 0x1.e3849ep-87f, 0.0f, 0x1.4681ep-45f, 0x1.7e91fap-51f,
     0.0f, 0x1.5f2c98p-111f, 0.0f, 0x1.488642p-64f, 0x1.9addcp-39f, 0x1.78d236p-61f,
     0.0f, 0.0f, 0.0f, 0x1.a9248ap-11f, 0.0f, 0x1.cfe3c8p-106f, 0x1.530484p-4f, 0.0f,
     0x1.3918bp-67f, 0.0f, 0.0f, 0.0f, 0x1.a6ded4p-39f, 0.0f, 0x1.abb38cp-22f, 0.0f,
     0x1.8005b8p-78f, 0.0f, 0.0f, 0x1.492166p-72f, 0.0f, 0x1.96e314p-38f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.241f4ep-33f, 0.0f, 0x1.de8a46p-107f,
     0.0f, 0x1.1719ep-10f, 0.0f, 0x1.35a0f6p-49f, 0x1.b9b25cp-97f, 0x1.a173a2p-46f,
     0x1.7ad5bep-37f, 0.0f, 0x1.836d2p-106f, 0.0f, 0x1.26022ap-112f, 0.0f, 0.0f,
     0x1.78249cp-36f, 0.0f, 0.0f, 0x1.52411p-65f, 0.0f, 0x1.f5f28ep-109f, 0.0f,
     0x1.7a44c6p-61f, 0x1.30fc14p-57f, 0x1.7c99f6p-112f, 0x1.c48338p-58f,
     0x1.983eeep-125f, 0.0f, 0.0f, 0x1.3364cap-35f, 0x1.417508p-23f, 0x1.dc63c2p-36f,
     0.0f, 0x1.4c7478p-37f, 0x1.f4c50ep-88f, 0.0f, 0x1.f9bd3ep-63f, 0.0f, 0.0f,
     0x1.902214p-49f, 0x1.baefcp-29f, 0x1.d4f298p-120f, 0.0f, 0x1.c8dbcp-58f, 0.0f,
     0x1.b191dep-68f, 0.0f, 0x1.8084c8p-94f, 0.0f, 0x1.50cbaep-95f, 0x1.0d0a2ap-50f,
     0.0f, 0.0f, 0.0f, 0x1.6f9cd4p-76f, 0x1.569edep-12f, 0x1.f108ecp-126f, 0.0f, 0.0f,
     0x1.a6b422p-116f, 0.0f, 0.0f, 0x1.2cebb2p-93f, 0x1.4ebb58p-50f, 0.0f, 0.0f, 0.0f,
     0x1.3050fap-14f, 0x1.8d3484p-121f, 0.0f, 0x1.dea444p-3f, 0x1.5e8852p-57f,
     0x1.109e2cp-124f, 0x1.54b48ap-4f, 0x1.07882p-16f, 0.0f, 0.0f, 0x1.1e1c22p-85f,
     0x1.e16a8ap-29f, 0x1p0f, 0.0f, 0.0f, 0x1.65b716p-30f, 0x1.d14776p-82f, 0.0f,
     0x1.01b75p-59f, 0.0f, 0.0f, 0x1.7599ccp-5f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.608532p-111f, 0x1.9e12a4p-123f, 0.0f, 0x1.4e6cd8p-120f, 0.0f,
     0x1.e67adep-41f, 0x1.36f966p-28f, 0x1.374354p-61f, 0x1.38e654p-77f, 0.0f,
     0x1.0eeb9p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a36d98p-101f, 0x1.8c9618p-3f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.893becp-46f, 0.0f, 0x1.b14912p-25f, 0x1.f4317ap-34f,
     0x1.201604p-115f, 0x1.0a35p-95f, 0x1.1e1efp-42f, 0.0f, 0x1.c45342p-43f, 0.0f,
     0x1.5bdfacp-61f, 0.0f, 0.0f, 0.0f, 0x1.af035ap-10f, 0.0f, 0.0f, 0.0f,
     0x1.cf46d4p-35f, 0.0f, 0x1.388288p-97f, 0.0f, 0.0f, 0.0f, 0x1.a6e9bp-10f, 0.0f,
     0x1.d3393ap-8f, 0.0f, 0x1.ec075p-92f, 0x1.22b32cp-65f, 0x1.165fcap-102f, 0.0f,
     0.0f, 0x1.65165cp-5f, 0x1.c1d9bcp-54f, 0.0f, 0x1.53b6f2p-115f, 0.0f, 0.0f,
     0x1.a4b13ap-75f, 0.0f, 0x1.ed3336p-112f, 0x1.0edbe6p-51f, 0.0f, 0x1.f83096p-111f,
     0x1.0a7528p-61f, 0.0f, 0x1.52c99p-109f, 0.0f, 0x1.8f968ep-30f, 0.0f,
     0x1.c3661ap-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.659ac8p-68f,
     0.0f, 0x1.22a8ecp-55f, 0x1.7c19c8p-109f, 0.0f, 0.0f, 0.0f, 0x1.722826p-118f,
     0x1.0e6604p-2f, 0.0f, 0x1.3fc942p-98f, 0.0f, 0.0f, 0x1.72e262p-119f, 0.0f,
     0x1.746e56p-126f, 0.0f, 0x1.852192p-18f, 0.0f, 0x1.d278c6p-3f, 0x1.c613c2p-40f,
     0.0f, 0.0f, 0x1.dda0a6p-84f, 0x1.d08424p-46f, 0x1.88b03p-19f, 0.0f,
     0x1.906f2p-16f, 0x1.53527ep-10f, 0x1.71cd12p-88f, 0x1.eac1d4p-24f,
     0x1.42d238p-65f, 0.0f, 0x1.160b32p-83f, 0.0f, 0x1.ca2dp-105f, 0.0f, 0.0f, 0.0f,
     0x1.288f9cp-123f, 0x1.bf48c2p-9f, 0.0f, 0.0f, 0x1.a0b272p-81f, 0.0f,
     0x1.0b2e9ep-16f, 0.0f, 0.0f, 0x1.043a18p-123f, 0x1.170104p-84f, 0.0f,
     0x1.9385eep-82f, 0x1.87a5a8p-78f, 0x1.005a12p-53f, 0.0f, 0x1.5522e4p-27f, 0.0f,
     0x1.ae4f68p-2f, 0.0f, 0x1.d4f39ap-57f, 0x1.205842p-37f, 0x1.50dff4p-99f,
     0x1.9e74dcp-23f, 0x1.bfb4ccp-93f, 0.0f, 0x1.f38c06p-4f, 0x1.fe6eacp-54f, 0.0f,
     0.0f, 0x1.91c116p-7f, 0x1.0e829p-85f, 0.0f, 0x1.669d34p-27f, 0x1.ad717ap-105f,
     0x1.6b9402p-33f, 0.0f, 0x1.2b72p-113f, 0.0f, 0.0f, 0x1.924672p-56f, 0.0f, 0.0f,
     0x1.c83334p-106f, 0.0f, 0x1.c26678p-109f, 0x1.8e8ba6p-113f, 0x1.93971ap-52f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3238e8p-118f, 0.0f, 0.0f, 0.0f, 0x1.06a778p-86f,
     0x1.8def08p-75f, 0x1.3987dep-32f, 0.0f, 0.0f, 0.0f, 0x1.83aa12p-95f,
     0x1.231accp-2f, 0x1.dd962ep-4f, 0x1.b0f59p-82f, 0x1.d4f13cp-94f, 0.0f, 0.0f,
     0.0f, 0x1.2ec3c4p-91f, 0.0f, 0.0f, 0x1.6e0158p-119f, 0x1.52f8fcp-111f, 0.0f,
     0x1.b59418p-69f, 0.0f, 0x1p0f, 0.0f, 0x1.01b238p-13f, 0.0f, 0.0f,
     0x1.e932c2p-71f, 0.0f, 0x1.a3c864p-38f, 0x1.209342p-60f, 0x1.fc8d14p-35f,
     0x1.420d4cp-83f, 0x1.000732p-49f, 0x1.2048aep-91f, 0x1.8aba36p-50f, 0.0f, 0.0f,
     0x1.8b9e4ap-3f, 0.0f, 0x1.80661cp-76f, 0x1.7fd81ap-26f, 0.0f, 0x1.6f4662p-115f,
     0.0f, 0x1.2746e2p-20f, 0.0f, 0x1.b969b6p-71f, 0.0f, 0x1.2cae14p-102f, 0.0f, 0.0f,
     0x1.19f776p-124f, 0.0f, 0x1.15e1bap-39f, 0x1.bdd3cap-100f, 0x1.454af4p-112f,
     0x1.ac19e4p-69f, 0x1.9f9aa6p-121f, 0x1p0f, 0.0f, 0.0f, 0x1.627478p-94f, 0.0f,
     0.0f, 0.0f, 0x1.ee42a6p-77f, 0x1.82ef54p-49f, 0.0f, 0.0f, 0x1.a05304p-27f, 0.0f,
     0x1.216032p-104f, 0.0f, 0x1.63ee34p-1f, 0.0f, 0.0f, 0.0f, 0x1.4ce3ep-37f,
     0x1.cc3e76p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.27ff2cp-47f, 0x1.c034d6p-91f,
     0x1.630e46p-77f, 0x1.1d0a3p-84f, 0.0f, 0x1.c60894p-57f, 0.0f, 0.0f,
     0x1.21d7fap-103f, 0.0f, 0.0f, 0x1.e00e02p-97f, 0x1.bbdb3cp-97f, 0x1.b8502ap-34f,
     0x1.2fd3f8p-26f, 0x1.d6518ap-83f, 0x1.088f0ap-48f, 0.0f, 0x1.af32dep-106f, 0.0f,
     0.0f, 0.0f, 0x1.c6474ep-4f, 0x1.05f5b6p-109f, 0.0f, 0.0f, 0x1.4ae7fep-104f, 0.0f,
     0x1.73f5c6p-43f, 0.0f, 0.0f, 0x1.8ad084p-26f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.52a914p-52f, 0x1.21abe6p-106f, 0x1.1792c4p-39f, 0.0f, 0x1.ec6dbep-43f,
     0x1.db7f2cp-15f, 0x1.7c7fa6p-73f, 0.0f, 0x1.f47ed6p-36f, 0x1.9f5792p-117f, 0.0f,
     0.0f, 0.0f, 0x1.dc2bdp-7f, 0.0f, 0x1.ca9498p-72f, 0.0f, 0.0f, 0x1p0f,
     0x1.4207c2p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.674d2ap-105f, 0.0f, 0x1.05f66p-100f,
     0.0f, 0x1.91c344p-63f, 0x1.374d4cp-37f, 0.0f, 0x1.de471p-3f, 0x1.c38aa6p-14f,
     0.0f, 0x1.8bb6b2p-88f, 0.0f, 0.0f, 0x1.d7317ap-119f, 0.0f, 0x1.6e9a22p-63f,
     0x1.a6998ap-76f, 0.0f, 0.0f, 0x1.28c09cp-11f, 0.0f, 0x1.abbae2p-55f, 0.0f,
     0x1.db3dcp-60f, 0x1.487a3cp-35f, 0x1.db6b88p-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.16c6a2p-64f, 0x1.03b7dap-61f, 0x1.76a16cp-116f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.486596p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a2c818p-114f, 0x1.8430bcp-102f,
     0.0f, 0x1.e8655ap-65f, 0x1.687564p-87f, 0.0f, 0x1.b3d3a4p-61f, 0x1.c303bcp-96f,
     0.0f, 0.0f, 0.0f, 0x1.43217cp-110f, 0.0f, 0.0f, 0.0f, 0x1.d4943ap-88f, 0.0f,
     0x1.e550dcp-37f, 0.0f, 0.0f, 0x1.161af6p-64f, 0.0f, 0.0f, 0x1.b57deep-28f,
     0x1.9dd194p-5f, 0x1p0f, 0x1.1ffa1p-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.172a52p-55f, 0.0f, 0.0f, 0x1.b83826p-17f, 0.0f, 0x1.b06b44p-36f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ff196p-2f, 0.0f, 0x1.1e5302p-48f, 0.0f, 0.0f, 0.0f,
     0x1.e5e6cap-33f, 0.0f, 0x1.08200ep-14f, 0x1.cb23cap-116f, 0.0f, 0x1.a010f8p-114f,
     0x1.ef20b4p-45f, 0x1.f4eed4p-69f, 0x1.f7588cp-115f, 0x1.45b27p-71f,
     0x1.ec2a0cp-104f, 0.0f, 0x1.2b164p-5f, 0x1.c8d126p-97f, 0x1.4cd1bcp-45f, 0.0f,
     0.0f, 0x1.0d89cap-48f, 0x1.3f48dcp-98f, 0x1.a04898p-7f, 0x1.6e3a06p-118f, 0.0f,
     0x1.02e0c2p-63f, 0x1.fd601cp-21f, 0x1.753646p-78f, 0.0f, 0.0f, 0x1.15b8b4p-57f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.c1598p-48f,
     0.0f, 0.0f, 0.0f, 0x1.f2caa6p-51f, 0x1.86072p-57f, 0.0f, 0.0f, 0x1.ebcaeap-30f,
     0.0f, 0.0f, 0.0f, 0x1.69480ep-101f, 0x1.4b2048p-15f, 0x1.562338p-22f,
     0x1.2bea82p-106f, 0x1.f43c4ap-48f, 0.0f, 0x1.e2217ap-22f, 0.0f, 0x1.fc0654p-124f,
     0.0f, 0x1.a27ddp-53f, 0.0f, 0.0f, 0x1.5e4296p-80f, 0.0f, 0x1.d4581p-121f, 0.0f,
     0.0f, 0.0f, 0x1.641c3ap-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8b0668p-3f,
     0x1.63f7eap-88f, 0.0f, 0x1.5d532p-88f, 0x1.e2eae6p-27f, 0x1.effab6p-82f, 0.0f,
     0x1.9c4ebep-25f, 0.0f, 0.0f, 0.0f, 0x1.3dd328p-9f, 0x1.3eb732p-98f, 0.0f, 0.0f,
     0.0f, 0x1.56d4f4p-82f, 0x1.020c52p-92f, 0.0f, 0.0f, 0x1.5ccc9cp-94f,
     0x1.5c6302p-57f, 0.0f, 0x1.e17792p-124f, 0.0f, 0.0f, 0.0f, 0x1.2354eep-104f,
     0x1.66ae44p-60f, 0.0f, 0.0f, 0x1.52d2p-101f, 0.0f, 0.0f, 0x1.579244p-60f, 0.0f,
     0x1.4eb4eep-118f, 0.0f, 0.0f, 0x1.934cd2p-111f, 0x1.bce662p-39f, 0x1.524198p-65f,
     0.0f, 0.0f, 0.0f, 0x1.216d5ap-27f, 0x1.f17122p-46f, 0.0f, 0x1.618a5cp-87f, 0.0f,
     0x1.53847cp-21f, 0.0f, 0x1.748deap-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2b3944p-82f,
     0.0f, 0.0f, 0x1.7b49fep-67f, 0.0f, 0x1.514bdp-57f, 0x1.977c9ep-97f, 0.0f,
     0x1.2a349ap-22f, 0x1.04ae16p-54f, 0x1.45999cp-47f, 0x1.637be8p-26f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.dc87e2p-119f, 0.0f, 0.0f, 0x1.08e15ap-70f, 0x1.8f1a7ap-43f, 0.0f,
     0.0f, 0.0f, 0x1.8efe42p-53f, 0.0f, 0.0f, 0x1.07e1fep-118f, 0x1.278662p-113f,
     0x1.4b6a68p-1f, 0.0f, 0.0f, 0x1.4a747ep-55f, 0.0f, 0x1.d6ef98p-108f, 0.0f,
     0x1.d4e6dep-10f, 0.0f, 0.0f, 0x1.502442p-33f, 0.0f, 0x1.ddee4cp-104f, 0.0f, 0.0f,
     0x1.deab8cp-4f, 0.0f, 0x1.d04fe4p-64f, 0x1.b353ap-101f, 0x1.1d2cfp-47f,
     0x1.da23ccp-44f, 0x1.0e9a16p-81f, 0.0f, 0.0f, 0x1.40234cp-52f, 0.0f, 0.0f,
     0x1.99dd78p-89f, 0x1.84137ep-42f, 0x1.04d7c2p-92f, 0x1.979f14p-84f,
     0x1.cd69p-66f, 0.0f, 0.0f, 0.0f, 0x1.ade526p-80f, 0.0f, 0.0f, 0.0f,
     0x1.f68108p-50f, 0x1.3443eep-56f, 0.0f, 0.0f, 0x1.f372ap-2f, 0.0f
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
            tmp1 = Sleef_exp2f1_u10purecfma(tmp0);
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
    printf("Sleef_exp2f1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_exp2f1_u10purecfma bench acc %a\n", global_bench_acc);
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
