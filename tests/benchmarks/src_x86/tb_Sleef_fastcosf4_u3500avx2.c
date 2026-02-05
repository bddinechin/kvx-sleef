/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_fastcosf4_u3500avx2128.c --function \
 *     Sleef_fastcosf4_u3500avx2128 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 4 --function-input-vector-size \
 *     4 --bench --no-embedded-bin --target x86_avx2128
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
     0.0f, 0.0f, 0x1.03ac5p-111f, 0x1.14f42ep-38f, 0.0f, 0x1.6a2ea4p-126f, 0.0f,
     0.0f, 0x1.ed6828p-110f, 0.0f, 0x1.744a36p-31f, 0x1.58672ep-118f, 0x1.68f7e2p-65f,
     0x1.0b785p-4f, 0x1.240fdep-45f, 0x1.2153acp-123f, 0.0f, 0x1.eee246p-108f,
     0x1.2ac308p-3f, 0x1.8fecbcp-35f, 0.0f, 0x1.dba432p-109f, 0.0f, 0x1.15dea4p-17f,
     0.0f, 0x1.b0cc5ep-67f, 0x1.42fcecp-49f, 0x1.5c799cp-114f, 0.0f, 0x1.c38646p-51f,
     0x1.cd59a2p-40f, 0.0f, 0.0f, 0x1.2fad58p-68f, 0x1.9b1362p-75f, 0x1.f2e9dep-70f,
     0x1.bbe768p-53f, 0x1.df4b54p-22f, 0.0f, 0.0f, 0.0f, 0x1.996786p-106f,
     0x1.8d4b8ep-10f, 0x1.f69a76p-37f, 0x1.99c1cap-101f, 0.0f, 0.0f, 0x1.aead78p-38f,
     0.0f, 0x1p0f, 0.0f, 0x1.7380f2p-54f, 0.0f, 0.0f, 0x1.17e844p-82f, 0.0f,
     0x1.e87ce2p-112f, 0.0f, 0x1.be7a1ap-39f, 0x1.68c036p-48f, 0.0f, 0x1.5d2a7cp-41f,
     0.0f, 0x1.c4833cp-29f, 0x1.610a7p-73f, 0.0f, 0.0f, 0x1.a32c4ap-104f,
     0x1.b4c7acp-7f, 0x1.bc98a2p-68f, 0.0f, 0x1.7794eap-75f, 0.0f, 0.0f, 0.0f,
     0x1.3696e8p-66f, 0x1.f92f7ap-5f, 0.0f, 0.0f, 0.0f, 0x1.9da77ep-49f,
     0x1.9fff4ap-50f, 0x1.ea7a82p-27f, 0.0f, 0x1.eb1ce2p-81f, 0.0f, 0.0f,
     0x1.3a8ebep-27f, 0x1.de2068p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b7f2dp-28f,
     0.0f, 0x1.2522cp-96f, 0.0f, 0.0f, 0x1.7611aap-119f, 0.0f, 0.0f, 0.0f,
     0x1.3f14eep-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.56efecp-22f, 0.0f,
     0x1.a3323cp-24f, 0.0f, 0x1.43c4aep-111f, 0.0f, 0x1.66f492p-105f, 0x1.7dcdccp-53f,
     0x1.88cceep-98f, 0x1.55e24ap-99f, 0x1.ee84dp-67f, 0x1.f243dp-19f, 0.0f,
     0x1.e8dd28p-26f, 0x1.032076p-57f, 0x1.a7c67p-68f, 0x1.9b51cap-105f, 0.0f,
     0x1.a3f7a4p-112f, 0x1.24e186p-89f, 0x1.483778p-109f, 0x1.395dfap-115f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c8ec8p-65f, 0x1.b37de6p-123f, 0.0f, 0x1.e0202p-29f,
     0.0f, 0x1.9f32e2p-115f, 0.0f, 0.0f, 0.0f, 0x1.1cc794p-79f, 0.0f, 0x1.c0a216p-53f,
     0.0f, 0x1.98d668p-43f, 0x1.7e14f2p-91f, 0.0f, 0.0f, 0.0f, 0x1.7288dp-33f, 0.0f,
     0.0f, 0x1.1776b6p-28f, 0x1.030d56p-14f, 0x1.4c9904p-44f, 0x1.e249c6p-4f, 0x1p0f,
     0x1.25eb4ep-54f, 0x1.a25abap-81f, 0x1.3c0972p-118f, 0.0f, 0x1.633e56p-122f, 0.0f,
     0.0f, 0.0f, 0x1.f0e592p-65f, 0x1.1dc24cp-77f, 0.0f, 0.0f, 0x1.b51d5p-25f,
     0x1.1d0b1cp-53f, 0.0f, 0x1.29e142p-34f, 0.0f, 0x1.27b546p-71f, 0.0f,
     0x1.89030ap-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6c115p-54f, 0.0f, 0.0f,
     0x1.5fa1p-119f, 0x1.45916ap-18f, 0.0f, 0x1.df810ap-76f, 0x1.b23786p-68f, 0.0f,
     0.0f, 0x1.d3cc02p-58f, 0x1.952ab2p-108f, 0x1.7698aep-80f, 0x1.f4142ap-13f,
     0x1.296c8ap-103f, 0.0f, 0.0f, 0x1.10b992p-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.5ecbe6p-76f, 0x1.bbebdcp-114f, 0.0f, 0.0f, 0.0f, 0x1.5b22f2p-26f,
     0x1.0edae2p-69f, 0.0f, 0x1.3d2e68p-122f, 0x1.08c8eep-36f, 0.0f, 0x1.102e3p-30f,
     0.0f, 0x1.1a91c2p-83f, 0x1.e26126p-122f, 0x1.5edb44p-70f, 0x1.4f90a6p-18f, 0.0f,
     0x1.adb1f8p-60f, 0x1.fd5386p-59f, 0x1.79df1cp-3f, 0.0f, 0x1.7340cp-120f,
     0x1.deeb44p-56f, 0.0f, 0x1.61606ap-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.324336p-102f,
     0.0f, 0.0f, 0x1.06e63ap-33f, 0.0f, 0x1.e9092ap-93f, 0.0f, 0x1.3f5d8ep-121f, 0.0f,
     0.0f, 0x1.7bbee8p-24f, 0.0f, 0x1.ca4406p-38f, 0.0f, 0.0f, 0.0f, 0x1.c062f4p-27f,
     0x1p0f, 0x1.f3818p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e6b2eep-66f, 0.0f,
     0x1.8747dp-28f, 0.0f, 0x1.ffda16p-7f, 0.0f, 0x1.5647e8p-64f, 0.0f, 0.0f, 0.0f,
     0x1.600206p-18f, 0x1.af081ep-52f, 0x1.90a6bp-105f, 0.0f, 0.0f, 0x1.f4de98p-39f,
     0x1.1b8d7ap-42f, 0x1.f93452p-120f, 0x1.976e4cp-98f, 0.0f, 0.0f, 0x1.bbad8p-120f,
     0x1.932a96p-117f, 0x1.af10fcp-14f, 0x1.43ac7ep-82f, 0.0f, 0.0f, 0x1.d414a8p-64f,
     0.0f, 0x1.f08e94p-52f, 0x1.7d3962p-25f, 0x1.82b4e2p-92f, 0x1.20c7a2p-125f,
     0x1.fdcefep-71f, 0x1.dada24p-19f, 0x1.7b5d26p-69f, 0x1.53636p-79f, 0.0f,
     0x1.7f1276p-9f, 0.0f, 0x1.86955ep-120f, 0x1.a328dp-32f, 0x1.c77358p-9f, 0.0f,
     0x1.24c474p-104f, 0.0f, 0x1.11c64ep-57f, 0.0f, 0.0f, 0x1.4919ep-106f, 0.0f,
     0x1.d77c46p-85f, 0x1.8a80aap-9f, 0.0f, 0x1.c03e82p-51f, 0x1.2423e6p-123f, 0.0f,
     0.0f, 0x1.a3d5fp-45f, 0.0f, 0x1.f97142p-1f, 0.0f, 0x1.64afaep-14f,
     0x1.bea312p-18f, 0.0f, 0x1.d402d8p-23f, 0.0f, 0x1.71fa26p-77f, 0x1.ddec78p-57f,
     0.0f, 0.0f, 0x1.8148aep-34f, 0.0f, 0x1.4fa2acp-60f, 0x1.68ced2p-46f,
     0x1.724ab6p-7f, 0.0f, 0x1.70eb7cp-101f, 0.0f, 0x1.ff48f6p-51f, 0x1.d06ceap-99f,
     0.0f, 0.0f, 0x1.548676p-66f, 0x1.7bb7b6p-126f, 0.0f, 0x1.cbcfbp-91f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.edd276p-107f, 0x1.3be39ap-105f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.264348p-81f, 0.0f, 0x1.1741bep-41f, 0.0f, 0x1.87406cp-102f,
     0x1.8a7504p-63f, 0.0f, 0x1.1da63cp-57f, 0.0f, 0x1.556f4p-114f, 0x1.439ba4p-24f,
     0x1.77395cp-51f, 0.0f, 0x1.a5604cp-96f, 0.0f, 0x1.f54b88p-54f, 0.0f, 0.0f, 0.0f,
     0x1.7434a6p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.99be84p-17f,
     0x1.f1ae9p-42f, 0x1.aa570ap-40f, 0x1.95be08p-35f, 0.0f, 0x1.0a505ap-32f,
     0x1.338d3p-53f, 0.0f, 0x1.f78c0ep-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.35284cp-100f,
     0.0f, 0x1.9450f8p-76f, 0.0f, 0x1.4a0576p-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e2ed8cp-45f, 0x1.e6df38p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a33232p-81f,
     0x1.e0bb98p-108f, 0.0f, 0x1.60c92ap-110f, 0.0f, 0x1.de2a92p-36f,
     0x1.b76ce6p-116f, 0.0f, 0.0f, 0x1.1b5844p-9f, 0x1.2a2dccp-42f, 0.0f,
     0x1.6b1e84p-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c7491ep-59f, 0.0f, 0.0f, 0.0f,
     0x1.e2563ep-78f, 0.0f, 0.0f, 0.0f, 0x1.6bf982p-17f, 0x1.9b4a92p-1f, 0.0f, 0.0f,
     0.0f, 0x1.58e036p-58f, 0.0f, 0x1.f90a38p-77f, 0x1.3ade1ep-1f, 0x1.6838bp-79f,
     0x1.e331b8p-70f, 0.0f, 0x1.4cf1c8p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.be579cp-91f,
     0x1.05bda8p-76f, 0.0f, 0x1.654b5ap-72f, 0.0f, 0x1.c151b8p-100f, 0x1.d23e32p-100f,
     0x1.d6aa4ap-63f, 0x1.6430c4p-106f, 0.0f, 0.0f, 0x1.34d7fap-56f, 0x1.a7c862p-48f,
     0x1.9ef1f2p-13f, 0.0f, 0x1.9f6c0ap-89f, 0.0f, 0x1.c0ebc4p-72f, 0x1.ddb502p-35f,
     0x1.52d1bep-94f, 0.0f, 0.0f, 0.0f, 0x1.c80abap-16f, 0x1.b54bf4p-109f, 0.0f,
     0x1.030718p-43f, 0x1.134014p-71f, 0.0f, 0.0f, 0x1.6f974p-120f, 0x1.1ca2eap-19f,
     0.0f, 0.0f, 0x1.5e7adcp-42f, 0.0f, 0.0f, 0x1.4540eap-85f, 0x1.32ee14p-34f, 0.0f,
     0x1.a677fap-31f, 0x1.e31b9ep-125f, 0x1.980bfap-124f, 0.0f, 0x1.346972p-104f,
     0x1.e7483cp-83f, 0x1.f95dc2p-24f, 0.0f, 0x1.566a48p-40f, 0.0f, 0x1.df03fap-78f,
     0.0f, 0x1.14a39ap-63f, 0.0f, 0x1.7a6cdep-45f, 0.0f, 0.0f, 0.0f, 0x1.fead84p-10f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d6c4aap-22f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e103fap-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a54e8p-49f,
     0x1.d3da2p-8f, 0x1.5f40a8p-103f, 0x1.78ce72p-21f, 0.0f, 0x1.6b12e6p-123f,
     0x1.74395p-34f, 0.0f, 0x1.50c62p-52f, 0x1.762b06p-114f, 0.0f, 0x1.09c6ep-43f,
     0.0f, 0x1.c56974p-21f, 0.0f, 0x1.3e57f2p-25f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.386e16p-67f, 0x1.8ef23ap-41f, 0.0f, 0x1.c7ffb6p-68f, 0x1.93aa5p-81f,
     0x1.110db6p-35f, 0x1.fffeb6p-69f, 0.0f, 0x1.97aa7p-85f, 0x1.01ace8p-92f, 0.0f,
     0x1.bfefb4p-60f, 0x1.7e6d42p-48f, 0.0f, 0.0f, 0x1.3345f2p-23f, 0.0f,
     0x1.c68408p-103f, 0.0f, 0x1.aad716p-48f, 0x1.1639c4p-55f, 0x1.187c1p-18f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.77b19cp-101f, 0x1.9d899cp-87f, 0x1.6cb96ep-29f, 0.0f,
     0x1.0f93a2p-29f, 0.0f, 0x1.88741ep-88f, 0.0f, 0.0f, 0.0f, 0x1.8c9a8ep-96f,
     0x1.b8e64ap-101f, 0.0f, 0x1.2fce0ap-38f, 0.0f, 0.0f, 0x1.93995cp-84f,
     0x1.16002ap-118f, 0.0f, 0.0f, 0x1.9e6836p-109f, 0.0f, 0x1.7d3b4cp-95f,
     0x1.ec124ep-87f, 0x1.74b7aep-56f, 0x1.8f88aep-106f, 0x1.6a8f72p-69f, 0.0f, 0.0f,
     0.0f, 0x1.8a595p-18f, 0x1.41dfaap-120f, 0.0f, 0x1.207492p-100f, 0x1.a9924cp-60f,
     0x1.acc362p-75f, 0x1.db0edcp-76f, 0x1.9ab01cp-14f, 0.0f, 0x1.de16fap-34f,
     0x1.c767eap-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ac85c8p-107f, 0x1.3e8adp-46f,
     0x1.ffdf76p-121f, 0.0f, 0.0f, 0x1.4e3e9cp-67f, 0x1.f6b234p-105f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e84c54p-17f, 0.0f, 0x1.bfed28p-54f, 0.0f, 0x1.af8f86p-79f,
     0.0f, 0.0f, 0.0f, 0x1.03c29ap-10f, 0.0f, 0x1.4fa62p-120f, 0.0f, 0.0f,
     0x1.1c173p-113f, 0.0f, 0x1.4539fp-37f, 0.0f, 0x1.2573dcp-39f, 0.0f, 0.0f, 0.0f,
     0x1.5e776cp-47f, 0x1.af1962p-114f, 0.0f, 0x1.df45b6p-113f, 0x1.8b7174p-16f,
     0x1.e920bap-73f, 0x1.50346ap-6f, 0.0f, 0x1.0e9c52p-57f, 0x1.0d19c4p-34f,
     0x1.8e79bep-34f, 0x1.2c6252p-106f, 0.0f, 0x1.c79914p-85f, 0x1.17128cp-81f,
     0x1.67a9acp-60f, 0.0f, 0.0f, 0x1.4be43ap-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fe552p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1a4e02p-111f, 0x1.a6da7p-2f,
     0x1.f8c31cp-4f, 0x1.dbe24ep-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a3304ep-37f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.87ffe8p-110f, 0x1.5c5332p-44f, 0.0f, 0x1.08ef5ep-30f,
     0.0f, 0.0f, 0.0f, 0x1.18ae3ap-112f, 0x1.3c1c8ep-81f, 0.0f, 0.0f, 0x1.1257a6p-42f,
     0x1.5ca234p-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8625f4p-24f,
     0x1.ba2932p-69f, 0x1.7407a8p-65f, 0.0f, 0x1.27407cp-53f, 0.0f, 0x1.1d9c7cp-115f,
     0.0f, 0.0f, 0x1.8b0f54p-91f, 0x1.3ba188p-81f, 0.0f, 0x1.efa858p-72f, 0.0f,
     0x1.1c5256p-56f, 0x1.987da2p-14f, 0x1.78137ap-97f, 0.0f, 0.0f, 0x1.13541cp-34f,
     0x1.949f0ap-42f, 0x1.ae64c6p-56f, 0x1.71564ep-63f, 0x1.a7963cp-125f,
     0x1.0c26e8p-9f, 0.0f, 0.0f, 0.0f, 0x1.815434p-78f, 0.0f, 0x1.226e36p-97f, 0.0f,
     0x1.d54cd2p-118f, 0.0f, 0x1.0c318cp-28f, 0.0f, 0x1.0f4bdcp-72f, 0.0f, 0.0f, 0.0f,
     0x1.76b7d6p-101f, 0.0f, 0x1.792622p-87f, 0.0f, 0x1.442d6ap-8f, 0x1.0edac8p-28f,
     0x1.1e8edp-68f, 0.0f, 0x1.6945bep-111f, 0x1.b0dc8ap-78f, 0x1.d45b6ap-10f, 0.0f,
     0x1.9e9baep-23f, 0x1.c551b6p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.575caep-94f, 0.0f,
     0.0f, 0.0f, 0x1.fcac48p-35f, 0x1.4889bcp-29f, 0.0f, 0.0f, 0x1.35833ep-4f, 0x1p0f,
     0x1.3fd2c2p-73f, 0x1.3f50dep-69f, 0.0f, 0.0f, 0.0f, 0x1.ff938p-109f, 0.0f, 0.0f,
     0x1.d8983cp-16f, 0.0f, 0.0f, 0x1.2a0bfep-103f, 0x1.9705acp-32f, 0.0f, 0.0f,
     0x1.0ba08p-52f, 0x1.5e5d1ap-49f, 0x1.031126p-96f, 0x1.6cdc5ep-12f,
     0x1.cbd818p-107f, 0.0f, 0.0f, 0x1.2a8092p-28f, 0.0f, 0.0f, 0x1.887bbp-21f, 0.0f,
     0.0f, 0.0f, 0x1.535a4ep-36f, 0.0f, 0.0f, 0x1.efdc38p-58f, 0x1.5aaa3ap-109f,
     0x1.01c82ap-92f, 0.0f, 0.0f, 0.0f, 0x1.d5cdfp-93f, 0.0f, 0x1.0a65ep-42f, 0.0f,
     0x1.23da28p-40f, 0.0f, 0x1.ff74b4p-31f, 0x1.685332p-48f, 0.0f, 0x1.277144p-33f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.1a1a18p-55f, 0x1.9dabf4p-38f, 0x1.f6ae8ap-83f,
     0x1.7996c6p-35f, 0.0f, 0.0f, 0x1.a0fea6p-18f, 0.0f, 0x1.8b1128p-3f, 0.0f, 0.0f,
     0x1.99afecp-100f, 0.0f, 0.0f, 0.0f, 0x1.ad3902p-93f, 0x1.da1744p-115f, 0.0f,
     0.0f, 0x1.ec0c2ap-8f, 0.0f, 0x1.0a7d82p-40f, 0.0f, 0x1.f49ee8p-55f, 0.0f,
     0x1.9e0c3p-16f, 0.0f, 0.0f, 0x1.f426a2p-37f, 0x1.36021p-19f, 0.0f, 0.0f, 0.0f,
     0x1.b390e4p-87f, 0.0f, 0x1.2ebe82p-18f, 0.0f, 0x1.cab136p-76f, 0x1.1db3bp-47f,
     0.0f, 0x1.18f48ap-42f, 0.0f, 0x1.df7c74p-87f, 0x1.c56e12p-9f, 0x1.608f36p-3f,
     0.0f, 0x1.e3a3a4p-72f, 0.0f, 0.0f, 0x1.2a3d44p-3f, 0x1.4bdfbp-120f, 0.0f,
     0x1.d10a82p-101f, 0.0f, 0x1.998f5p-13f, 0.0f, 0x1.f9e648p-60f, 0.0f, 0.0f, 0.0f,
     0x1.2ec6dp-12f, 0x1.c5f44p-118f, 0x1.144ddcp-37f, 0x1.ca5c34p-54f, 0.0f, 0.0f,
     0x1.12b3acp-94f, 0.0f, 0.0f, 0x1.c734fp-79f, 0x1.7de3e8p-10f, 0x1.eb1ef4p-3f,
     0x1.11d096p-96f, 0x1.89c3cap-125f, 0.0f, 0x1.9d4cfep-94f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.36faa6p-10f, 0.0f, 0x1.6a5634p-116f, 0x1.8ed62ep-83f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2db2e4p-32f, 0x1.d6cda2p-88f, 0x1.58a2e2p-69f, 0x1.c0b902p-39f, 0.0f,
     0x1.2c9848p-14f, 0x1.c27fap-3f, 0x1.896cc2p-80f, 0x1.9e6c96p-98f, 0.0f,
     0x1.169bc6p-78f, 0.0f, 0x1.d6779ap-43f, 0x1.aa2158p-86f, 0.0f, 0.0f, 0.0f,
     0x1.7c775p-89f, 0x1.515334p-58f, 0.0f, 0x1.e21008p-122f, 0.0f, 0x1.3e5e08p-66f,
     0.0f, 0x1.e3ec04p-32f, 0.0f, 0x1.0f6edcp-16f, 0.0f, 0x1.77d0d4p-72f,
     0x1.b6254cp-4f, 0.0f, 0x1.f85a46p-20f, 0x1.f72e1ep-74f, 0.0f, 0.0f, 0.0f,
     0x1.a9ec72p-10f, 0.0f, 0.0f, 0x1.0f099ep-101f, 0x1.cba51p-124f, 0x1.96f2d8p-126f,
     0.0f, 0x1.d680dp-35f, 0.0f, 0.0f, 0x1.314c5ap-46f, 0x1.5c985cp-93f,
     0x1.7c5136p-117f, 0.0f, 0x1.d31872p-122f, 0.0f, 0.0f
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
            tmp1 = Sleef_fastcosf4_u3500avx2128(tmp0);
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
    printf("Sleef_fastcosf4_u3500avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_fastcosf4_u3500avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
