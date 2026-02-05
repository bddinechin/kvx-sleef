/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_nextafterf4_kvx.c --function Sleef_nextafterf4_kvx \
 *     --arity 2 --headers sleef.h,ml_support_lib.h --input-formats \
 *     binary32,binary32 --vector-size 4 --function-input-vector-size 4 \
 *     --bench --no-embedded-bin --target kv3
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
     0x1.a3b0dcp-89f, 0x1.e3d488p-121f, 0x1.d4c732p-5f, 0.0f, 0.0f, 0.0f,
     0x1.168dap-28f, 0x1.741104p-22f, 0x1.4abe2ep-109f, 0.0f, 0.0f, 0.0f,
     0x1.0edd4ep-91f, 0.0f, 0.0f, 0x1.e1e768p-123f, 0.0f, 0x1.478ba2p-98f,
     0x1.20120ep-86f, 0.0f, 0x1.e1e5fp-69f, 0.0f, 0.0f, 0.0f, 0x1.9ef39ep-11f,
     0x1.f03666p-101f, 0.0f, 0x1.5e5ff8p-109f, 0x1.09668cp-117f, 0x1.da288ap-56f,
     0x1.ce3a7p-15f, 0x1.ca9bbp-75f, 0.0f, 0x1.e840ecp-48f, 0x1.e44a44p-88f,
     0x1.22da3p-34f, 0x1.348b14p-77f, 0x1.42fcb8p-83f, 0x1.66faaep-27f,
     0x1.08c67p-59f, 0.0f, 0.0f, 0x1.33358cp-77f, 0x1.d7288p-93f, 0x1.981e08p-62f,
     0x1.996cc2p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fdbfbep-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e2e08ep-4f, 0.0f, 0x1.ed2688p-112f,
     0x1.7be37ap-84f, 0x1.b398aep-79f, 0x1.5d7868p-40f, 0x1.763994p-105f,
     0x1.f6778ap-86f, 0.0f, 0.0f, 0.0f, 0x1.4ceda2p-32f, 0x1.3a80f6p-25f, 0.0f, 0.0f,
     0x1.8ad2dcp-60f, 0x1.abba0cp-50f, 0.0f, 0.0f, 0x1.89adap-7f, 0x1.46f4a4p-57f,
     0.0f, 0x1.a759ap-73f, 0.0f, 0.0f, 0x1.7480dep-15f, 0.0f, 0x1.195c48p-92f,
     0x1.cff9f2p-119f, 0.0f, 0x1.ca0b2p-78f, 0x1.0ad49ap-63f, 0x1.9821f8p-123f,
     0x1.6214d6p-42f, 0x1.1c7eaep-53f, 0x1.c21792p-85f, 0.0f, 0.0f, 0x1.a6ecf8p-111f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f4a7b6p-113f, 0x1.6f4ccp-82f, 0.0f, 0x1.bbf91ep-97f,
     0x1.b8c308p-32f, 0x1.ef7328p-112f, 0x1.d4e1bp-8f, 0.0f, 0.0f, 0x1.d9dda4p-91f,
     0x1.ad890ep-14f, 0x1.092fe2p-60f, 0.0f, 0x1.191a1cp-55f, 0x1.df618ep-21f,
     0x1.85c3f8p-110f, 0.0f, 0x1.ec5246p-65f, 0.0f, 0x1.c50192p-101f, 0.0f,
     0x1.35e05cp-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.541ad8p-36f, 0.0f,
     0x1.34f4bp-8f, 0.0f, 0.0f, 0x1.50283p-80f, 0.0f, 0x1.d9a25ap-64f, 0.0f,
     0x1.b5a02cp-18f, 0x1.2228eep-32f, 0.0f, 0x1.313f3p-47f, 0x1.5d6ff2p-77f,
     0x1.eab5c8p-105f, 0x1.8411ep-38f, 0x1.295c8ep-58f, 0x1.c430f4p-80f,
     0x1.aa964p-63f, 0.0f, 0.0f, 0.0f, 0x1.107ebep-51f, 0.0f, 0.0f, 0x1.5bb24ep-31f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.81117ap-90f, 0x1.583526p-76f, 0.0f,
     0x1.7d0ca6p-68f, 0.0f, 0x1.70855p-60f, 0.0f, 0x1.3c460cp-64f, 0x1.ad18d6p-24f,
     0x1.f5d1dcp-24f, 0.0f, 0x1.d6094ep-34f, 0x1.c05fb6p-13f, 0x1.b8a47p-124f,
     0x1.75e844p-117f, 0x1.3c33dep-50f, 0.0f, 0x1.6d842ep-36f, 0.0f, 0.0f,
     0x1.bb51dcp-33f, 0.0f, 0.0f, 0x1.292e0ap-26f, 0x1.528ddp-121f, 0x1.d4353cp-98f,
     0x1.7d6646p-49f, 0x1.d63328p-25f, 0.0f, 0x1.058c76p-28f, 0x1.69f268p-25f,
     0x1.2cb332p-59f, 0x1.334dd6p-47f, 0.0f, 0x1.df3f34p-33f, 0.0f, 0x1.9fc22p-113f,
     0x1.0ffacap-101f, 0x1.252c2cp-34f, 0.0f, 0x1.0752bcp-16f, 0.0f, 0.0f,
     0x1.eabd4ap-106f, 0x1.688d32p-121f, 0.0f, 0.0f, 0x1.e63d6ap-43f, 0.0f, 0.0f,
     0x1.c192bp-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3599a8p-1f, 0.0f,
     0x1.41b466p-35f, 0x1.fe1a02p-35f, 0x1p0f, 0.0f, 0x1.af9932p-64f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a1aed2p-86f, 0.0f, 0x1.f8ced2p-46f, 0.0f, 0x1.982af2p-88f,
     0x1.2e0a5ap-1f, 0x1.8132e6p-64f, 0x1.e963ap-87f, 0.0f, 0x1.62b566p-67f, 0.0f,
     0.0f, 0x1.28cf86p-93f, 0.0f, 0x1.0af3acp-3f, 0x1.826f02p-95f, 0x1.cc73ecp-10f,
     0.0f, 0.0f, 0x1.7e2b72p-40f, 0x1.57c89ep-53f, 0.0f, 0.0f, 0.0f, 0x1.275c68p-98f,
     0.0f, 0.0f, 0x1.5c662p-118f, 0.0f, 0.0f, 0x1.70c432p-25f, 0x1.809ad4p-91f,
     0x1.4f6decp-39f, 0.0f, 0x1.0bc432p-14f, 0.0f, 0.0f, 0x1.f10e7p-3f,
     0x1.5b1108p-58f, 0.0f, 0.0f, 0x1.470a1p-109f, 0.0f, 0x1.f0f90cp-28f,
     0x1.348702p-15f, 0.0f, 0.0f, 0x1.0e02bp-28f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c67102p-16f, 0.0f, 0x1.dcfe9ap-62f, 0.0f, 0.0f, 0x1.75927ep-48f,
     0x1.a497ap-112f, 0x1.bc1064p-68f, 0x1.9be6bcp-113f, 0.0f, 0.0f, 0.0f,
     0x1.34389ap-28f, 0.0f, 0.0f, 0x1.e70396p-35f, 0.0f, 0x1.399a54p-94f, 0.0f,
     0x1.87ce3ep-113f, 0.0f, 0x1.68c3bp-88f, 0.0f, 0x1.7f1056p-112f, 0.0f,
     0x1.a6ce6cp-71f, 0x1.1236ap-119f, 0.0f, 0.0f, 0x1.b295ecp-6f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.65778ep-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.732c94p-24f,
     0x1.b04a1cp-105f, 0.0f, 0.0f, 0.0f, 0x1.b69918p-50f, 0.0f, 0.0f,
     0x1.f798a4p-122f, 0x1.24f892p-112f, 0.0f, 0.0f, 0.0f, 0x1.558a64p-45f,
     0x1.a35da2p-49f, 0x1.b2d08cp-55f, 0x1.6ddbdcp-125f, 0x1.97b53ep-17f, 0.0f, 0.0f,
     0.0f, 0x1.dc13a4p-115f, 0x1.2a1baap-88f, 0.0f, 0x1.faf316p-3f, 0x1.e42022p-6f,
     0.0f, 0x1.83be18p-3f, 0x1.089682p-89f, 0.0f, 0x1.047d0ap-9f, 0x1.b3502ap-111f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.99de4cp-1f, 0x1.7c70d4p-94f, 0.0f,
     0x1.b81a8cp-57f, 0.0f, 0.0f, 0x1.c149bcp-9f, 0.0f, 0.0f, 0.0f, 0x1.61c98ep-102f,
     0.0f, 0x1.a9ba3ap-30f, 0x1.b99418p-96f, 0x1.0599p-10f, 0x1.16bbdep-21f, 0.0f,
     0x1.45f048p-51f, 0x1.a08d6p-22f, 0.0f, 0.0f, 0x1.49f11ap-6f, 0.0f,
     0x1.eddaf2p-7f, 0x1.e0993p-90f, 0x1.d598b2p-124f, 0.0f, 0x1.f79d28p-59f, 0.0f,
     0x1.7f82b2p-2f, 0x1.0ff1bap-62f, 0x1.fb428ep-63f, 0.0f, 0x1.e4d866p-16f,
     0x1.cee518p-33f, 0x1.8b733ap-97f, 0x1.45dfe2p-94f, 0x1.46f174p-3f,
     0x1.9f97aep-54f, 0.0f, 0x1.e580a8p-99f, 0.0f, 0.0f, 0x1.485fd2p-64f,
     0x1.f26ap-51f, 0.0f, 0x1.1ea9cap-63f, 0x1.dbfe78p-52f, 0x1.8e35a4p-9f, 0.0f,
     0.0f, 0x1.fecb34p-72f, 0.0f, 0x1.7b11dep-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a8bcb6p-46f, 0.0f, 0.0f, 0x1.4b6f04p-122f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d8cf2ep-124f, 0x1.3c249p-73f, 0.0f, 0.0f, 0.0f, 0x1.31fc64p-61f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.141298p-68f, 0x1.e240ccp-87f, 0x1.1fba3p-104f, 0x1.a9d722p-113f,
     0x1.e0c478p-59f, 0.0f, 0.0f, 0x1.2e5856p-117f, 0x1.3ba27cp-15f, 0x1.42cf2ap-27f,
     0x1.898c22p-52f, 0.0f, 0x1.0eccdap-25f, 0x1.7943f4p-80f, 0x1.2696bcp-49f,
     0x1.1f518p-110f, 0x1.56c49ap-14f, 0x1.f06b22p-93f, 0.0f, 0.0f, 0x1.909768p-126f,
     0x1.d9a352p-67f, 0.0f, 0x1.45462ep-78f, 0x1.244d74p-106f, 0.0f, 0x1.357136p-69f,
     0x1.92658p-25f, 0x1.b040bp-12f, 0.0f, 0x1.32ee44p-15f, 0.0f, 0x1.3a3a6cp-91f,
     0.0f, 0x1.c11ae8p-8f, 0x1.3ede1ep-23f, 0.0f, 0.0f, 0x1.7c2a1cp-109f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.068362p-73f, 0x1.f958b2p-66f, 0x1.908dfcp-32f, 0x1.eacebcp-90f,
     0x1.c9cf1ap-85f, 0.0f, 0.0f, 0x1.137d32p-56f, 0.0f, 0x1.dadddcp-51f, 0.0f,
     0x1.92c5fep-45f, 0x1.565572p-49f, 0x1.68a842p-74f, 0.0f, 0x1.35db1cp-94f, 0.0f,
     0x1.c39c1ep-31f, 0.0f, 0.0f, 0.0f, 0x1.2188ap-3f, 0x1.1ad33p-42f,
     0x1.a7153ap-81f, 0x1.788daap-17f, 0x1.a68b4ep-21f, 0.0f, 0x1.f5523ap-62f,
     0x1.47c5a2p-28f, 0.0f, 0x1.75951ep-9f, 0.0f, 0x1.080b9ep-126f, 0x1.c6dd48p-20f,
     0.0f, 0.0f, 0x1.cffaf2p-79f, 0.0f, 0x1.848b98p-41f, 0.0f, 0x1.a7e66ep-99f,
     0x1.6a45b6p-66f, 0x1.961b1ap-96f, 0x1.8e644p-51f, 0x1.0a090cp-106f,
     0x1.6a8ea8p-126f, 0x1.1af446p-79f, 0.0f, 0.0f, 0x1.d2f0d8p-105f, 0x1.924f5cp-67f,
     0.0f, 0.0f, 0x1.3949bcp-37f, 0x1.12a284p-97f, 0.0f, 0.0f, 0.0f, 0x1.82f7eep-94f,
     0x1.87982ap-47f, 0.0f, 0x1.f61f06p-103f, 0x1.075752p-29f, 0.0f, 0x1.732512p-67f,
     0.0f, 0.0f, 0x1.6f8eeap-36f, 0x1.b7bccp-7f, 0.0f, 0x1.bed62cp-115f,
     0x1.67130cp-68f, 0x1.6a1866p-38f, 0x1.9eadf6p-77f, 0x1.591a7ap-48f,
     0x1.0ec826p-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8aca36p-63f, 0.0f, 0.0f, 0.0f,
     0x1.1f87f4p-122f, 0x1.efc1fcp-103f, 0x1.ef218ep-21f, 0.0f, 0.0f, 0x1.c115cep-28f,
     0x1.ebd67ep-46f, 0.0f, 0x1.9abdfep-2f, 0.0f, 0.0f, 0x1.b0ce6cp-104f, 0.0f,
     0x1.03b1dap-10f, 0x1.84edcp-13f, 0.0f, 0x1.e4ae8cp-98f, 0x1.ae53aep-78f,
     0x1.c4567p-14f, 0.0f, 0x1.1797cep-73f, 0.0f, 0.0f, 0.0f, 0x1.e29a22p-122f,
     0x1.b182bep-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.97d4b2p-49f, 0x1.7b94p-93f,
     0x1.f5bc98p-33f, 0.0f, 0.0f, 0.0f, 0x1.d5534ap-69f, 0.0f, 0x1.55623ep-73f, 0.0f,
     0x1.395a34p-1f, 0x1.f4d7e2p-114f, 0.0f, 0x1.1488dp-56f, 0.0f, 0x1.d982cep-35f,
     0.0f, 0.0f, 0.0f, 0x1.31f4e4p-60f, 0x1.8dc94ap-88f, 0.0f, 0x1.5e60c8p-55f,
     0x1.61313cp-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e08044p-44f, 0.0f,
     0x1.f64cecp-109f, 0x1.76084ep-42f, 0x1.31cd1ep-31f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b01324p-15f, 0.0f, 0x1.4d7ea2p-121f, 0x1.6dfbd6p-17f, 0.0f, 0.0f,
     0x1.637f14p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.114426p-123f, 0.0f, 0x1.a6036ep-20f,
     0.0f, 0.0f, 0.0f, 0x1.601606p-123f, 0.0f, 0.0f, 0x1.e718cep-116f,
     0x1.445f6ep-65f, 0.0f, 0.0f, 0x1.f683aep-6f, 0x1.fe5038p-109f, 0.0f, 0.0f, 0.0f,
     0x1.9b567ap-120f, 0x1.a95a34p-111f, 0.0f, 0.0f, 0x1.39e2bp-118f, 0x1.e38a68p-37f,
     0x1.018b2cp-32f, 0.0f, 0.0f, 0.0f, 0x1.79c1dcp-23f, 0x1.eeff4cp-125f, 0.0f,
     0x1.8e8e06p-109f, 0.0f, 0x1.e0369ap-35f, 0x1.2d11dcp-57f, 0x1.b8e7dep-103f, 0.0f,
     0x1.aaa8ap-71f, 0.0f, 0.0f, 0x1.073bdcp-48f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.975024p-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0c2ec2p-66f, 0.0f, 0.0f,
     0x1.6dfdcap-118f, 0.0f, 0.0f, 0.0f, 0x1.2e2666p-32f, 0x1.c4827p-71f, 0.0f, 0.0f,
     0x1.8c9672p-1f, 0x1.7ae3e4p-113f, 0.0f, 0x1.242184p-58f, 0x1.5669ccp-45f, 0.0f,
     0.0f, 0.0f, 0x1.502e12p-67f, 0.0f, 0.0f, 0.0f, 0x1.c955dep-57f, 0x1.b0868p-116f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0910a2p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.228626p-90f, 0x1.e7414cp-86f, 0.0f, 0.0f, 0.0f, 0x1.4ee498p-45f, 0.0f,
     0x1.3695f4p-75f, 0.0f, 0.0f, 0x1.124f0cp-35f, 0x1.d59dc8p-8f, 0.0f, 0.0f,
     0x1.bb4926p-82f, 0x1.4914cap-16f, 0.0f, 0.0f, 0.0f, 0x1.b42442p-41f, 0.0f,
     0x1.24271cp-23f, 0.0f, 0.0f, 0.0f, 0x1.86efc2p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f7e00ep-109f, 0.0f, 0.0f, 0x1.3d278ap-2f, 0.0f, 0.0f, 0.0f, 0x1.8fce78p-99f,
     0x1.f14504p-28f, 0x1.9c574ep-23f, 0x1.1f7b64p-87f, 0.0f, 0x1.66fb8cp-31f,
     0x1.c29b56p-29f, 0x1.381bd4p-44f, 0x1.850cf2p-105f, 0.0f, 0x1.62019cp-80f, 0.0f,
     0x1.aa9d9ap-115f, 0x1.cf85cap-26f, 0x1.7667e6p-59f, 0x1.e90a54p-3f, 0.0f,
     0x1.8b2658p-65f, 0x1.c3895p-3f, 0.0f, 0x1.27b072p-112f, 0x1.6a1e5cp-93f,
     0x1.d5f458p-84f, 0x1.85c22cp-19f, 0.0f, 0.0f, 0x1.3ac308p-1f, 0x1.61e5acp-81f,
     0x1p0f, 0x1.24edbp-119f, 0.0f, 0x1.59ab52p-81f, 0.0f, 0x1.d578fap-19f, 0.0f,
     0x1.7371c4p-38f, 0.0f, 0x1.0a6f64p-107f, 0x1.a63d24p-10f, 0x1.00c68p-126f,
     0x1.de5c46p-55f, 0x1.636ce2p-52f, 0x1.211a58p-38f, 0x1.f4142ep-108f, 0.0f,
     0x1.136372p-116f, 0x1.a3dd3p-96f, 0.0f, 0.0f, 0x1.d2b566p-48f, 0.0f,
     0x1.e9859ap-1f, 0x1.1e5ffcp-42f, 0x1.a751a2p-40f, 0x1.af1036p-95f, 0.0f, 0.0f,
     0.0f, 0x1.a74888p-8f, 0x1.14e00ep-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7f330ap-102f, 0x1.63e976p-36f, 0x1.e3baeap-22f, 0x1.b9fa4ep-63f, 0.0f,
     0x1.2fd36cp-76f, 0x1.bb6b12p-35f, 0.0f, 0x1.3dcbacp-55f, 0x1.f1e14ap-46f, 0x1p0f,
     0.0f, 0x1.fe2116p-61f, 0x1.29fe62p-69f, 0.0f, 0x1.5c9d8ap-58f, 0.0f,
     0x1.eeef5cp-83f, 0x1.0fe196p-120f, 0.0f, 0x1.e225f6p-70f, 0x1.58379p-82f, 0.0f,
     0x1.d0ec8p-4f, 0.0f, 0x1.7fa224p-119f, 0.0f, 0.0f, 0x1.e3bd4ap-56f,
     0x1.022dccp-65f, 0.0f, 0.0f, 0.0f, 0x1.45af98p-101f, 0x1.f866bap-71f,
     0x1.2a5162p-86f, 0x1.38e886p-59f, 0x1.a943f6p-68f, 0x1.673e38p-43f,
     0x1.742312p-53f, 0x1.71fb1ap-27f, 0.0f, 0.0f, 0.0f, 0x1.8e5d0ap-100f, 0.0f,
     0x1.ca91a8p-44f, 0x1.ee1b54p-120f, 0x1.550bfcp-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.17627p-114f, 0.0f, 0x1.7194e2p-12f, 0x1.ced062p-8f, 0.0f, 0x1.c20eb2p-124f,
     0.0f, 0x1.c60314p-101f, 0.0f, 0x1.b1676ap-75f, 0x1.4d9adap-5f, 0x1.1cbd76p-44f,
     0x1.ccc9aap-89f, 0.0f, 0.0f, 0x1.5cc49p-38f, 0.0f, 0x1.244ffap-12f,
     0x1.888702p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c80acap-80f, 0.0f, 0x1.7eb86cp-35f,
     0.0f, 0.0f, 0x1.0c27f2p-89f, 0x1.3ee7d6p-43f, 0x1.63bdd8p-2f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.22f50ap-22f, 0x1.ad58ep-92f, 0.0f, 0.0f, 0x1.fb4d64p-21f,
     0x1.3cfa9p-54f, 0x1.8d3aecp-14f, 0x1.b99a98p-47f, 0x1.ad1b6ap-44f, 0.0f, 0.0f,
     0x1.ead8b6p-80f, 0.0f, 0x1.f12d74p-68f, 0x1.8d2304p-120f, 0x1.3c8e9ap-75f,
     0x1.0069e4p-16f, 0x1.edb166p-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.808a88p-64f,
     0x1.a34122p-34f, 0x1.db9e6ap-15f, 0x1.7e07fcp-39f, 0.0f, 0.0f, 0.0f,
     0x1.0d7afap-86f, 0.0f, 0x1.1f7992p-23f, 0.0f, 0x1.22c9b2p-46f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.59cbe2p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fdd4e6p-66f, 0.0f,
     0x1.db261ep-81f, 0x1.c99e5ap-121f, 0.0f, 0.0f, 0x1.a1a25p-77f, 0x1.3d1884p-88f,
     0x1.9cac36p-38f, 0x1.69daa2p-82f, 0.0f, 0x1.5a3b5ep-79f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f7c61p-97f, 0.0f, 0x1.476df2p-101f, 0x1.1561a2p-61f, 0x1.8e75f6p-121f, 0.0f,
     0.0f, 0x1.bf274cp-75f, 0.0f, 0x1.bba3ecp-51f, 0.0f, 0x1.30d7aep-84f,
     0x1.05a48p-99f, 0.0f, 0.0f, 0.0f, 0x1.a7fee2p-69f, 0x1.d02f4cp-74f
};
static const float external_bench_wrapper_input_table_arg1[1004]  = {
     0x1.1a5b64p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0a91cep-92f,
     0x1.49efcap-41f, 0x1.83053p-99f, 0.0f, 0.0f, 0x1.559c36p-125f, 0.0f, 0.0f, 0.0f,
     0x1.b53a4p-125f, 0x1.ef503ep-54f, 0x1.0b2eeap-98f, 0.0f, 0x1.2c5964p-26f,
     0x1.57fc2p-82f, 0x1.2c886ap-28f, 0.0f, 0.0f, 0x1.d812eap-13f, 0.0f,
     0x1.bb495cp-73f, 0x1.2304c2p-37f, 0.0f, 0x1.befebp-11f, 0.0f, 0x1.834f1ap-29f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.951516p-83f, 0x1.40dd64p-4f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bfa3bcp-23f, 0x1.2439d4p-76f, 0x1.80d892p-34f, 0.0f, 0x1.133214p-28f,
     0x1.5fee02p-19f, 0x1.34ff9p-125f, 0.0f, 0x1.0927bp-7f, 0x1.efc9e2p-6f,
     0x1.20daaep-40f, 0.0f, 0x1.83de5ep-125f, 0.0f, 0x1.ca70aap-73f, 0x1.6e5a6ap-83f,
     0x1.08fae2p-89f, 0.0f, 0.0f, 0x1.693566p-38f, 0.0f, 0x1.880a86p-90f,
     0x1.e4d996p-51f, 0.0f, 0.0f, 0x1.0e4738p-120f, 0.0f, 0.0f, 0.0f, 0x1.ae4d84p-74f,
     0x1.ab7dfp-83f, 0x1.142412p-108f, 0.0f, 0.0f, 0x1.a6fd44p-14f, 0.0f, 0.0f,
     0x1.5e95dcp-99f, 0.0f, 0x1.8446c4p-125f, 0.0f, 0.0f, 0x1.1fb2eep-28f, 0.0f,
     0x1.1ba234p-76f, 0x1.2edab2p-62f, 0x1.a02e8ep-113f, 0.0f, 0.0f, 0x1.209216p-106f,
     0x1.715d7p-25f, 0.0f, 0x1.acbd7p-108f, 0x1.8e17ep-60f, 0x1.2c56p-14f, 0.0f,
     0x1.f43f6p-67f, 0x1.080064p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5fb696p-76f,
     0x1.9e1d22p-19f, 0.0f, 0x1.ba3b0ep-80f, 0x1.d4408p-102f, 0.0f, 0.0f,
     0x1.bcd316p-104f, 0x1.99b126p-97f, 0.0f, 0.0f, 0.0f, 0x1.0dc516p-100f, 0.0f,
     0.0f, 0.0f, 0x1.2fb07p-65f, 0.0f, 0.0f, 0.0f, 0x1.1b142ep-80f, 0.0f, 0.0f,
     0x1.4106ap-63f, 0.0f, 0x1.a66dd2p-94f, 0x1.c2a924p-14f, 0x1.ef51cp-23f,
     0x1.0759bep-85f, 0.0f, 0.0f, 0.0f, 0x1.9742e2p-67f, 0x1.688d34p-74f,
     0x1.f4bcc2p-68f, 0.0f, 0.0f, 0x1.326028p-32f, 0x1.9cdf4cp-27f, 0.0f,
     0x1.46243ep-63f, 0.0f, 0x1.e880ccp-92f, 0x1p0f, 0x1.e79196p-72f, 0x1.8bc3eep-29f,
     0.0f, 0x1.048302p-93f, 0.0f, 0.0f, 0x1.44fed2p-108f, 0x1.41c22ep-33f,
     0x1.10b158p-64f, 0.0f, 0x1.8f53ccp-111f, 0.0f, 0.0f, 0x1.44e66ep-60f, 0.0f, 0.0f,
     0x1.8a56d4p-18f, 0.0f, 0.0f, 0x1.b8cb6p-56f, 0.0f, 0x1.af021ep-75f,
     0x1.77f426p-75f, 0.0f, 0x1.d2ea4p-94f, 0.0f, 0x1.062ed2p-27f, 0x1.dbb892p-67f,
     0.0f, 0x1.10c75p-104f, 0x1.30acdcp-34f, 0x1.844e98p-123f, 0.0f, 0x1.aff1ecp-88f,
     0x1.cfea1ap-87f, 0x1.d2c4dcp-84f, 0.0f, 0.0f, 0.0f, 0x1.05dc92p-100f, 0.0f, 0.0f,
     0x1.70812ep-41f, 0x1.04764p-78f, 0x1.bb4108p-51f, 0x1.3aad62p-11f, 0.0f,
     0x1.91ac0ep-104f, 0x1.1b0ddcp-86f, 0.0f, 0.0f, 0x1.598122p-119f, 0.0f, 0.0f,
     0x1.09a49ep-23f, 0x1.956c2cp-65f, 0.0f, 0.0f, 0x1.6c8662p-25f, 0x1.b68bdp-93f,
     0x1.2d4eecp-101f, 0.0f, 0x1.713c26p-70f, 0x1.d3ec5ap-36f, 0x1.e90aaep-17f,
     0x1.78b2dap-117f, 0.0f, 0x1.dcd652p-18f, 0x1.b63ab2p-105f, 0.0f, 0x1.35f484p-81f,
     0x1.bb13c2p-10f, 0x1.4b55f8p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.00fe74p-114f, 0.0f,
     0x1.4aaf4cp-103f, 0.0f, 0.0f, 0x1.dde49cp-86f, 0x1.5a571ep-25f, 0x1p0f,
     0x1.814206p-100f, 0x1.6052eep-113f, 0x1.a5469ap-1f, 0x1.65f0f2p-89f,
     0x1.3da4dcp-38f, 0x1.6d08f4p-49f, 0.0f, 0x1.98f36p-103f, 0.0f, 0.0f,
     0x1.13d64ep-76f, 0x1.8d605p-103f, 0.0f, 0x1.132f42p-22f, 0x1.75f942p-104f,
     0x1.0165c2p-114f, 0x1.0b1dbcp-97f, 0.0f, 0x1.c9fe3cp-61f, 0x1.ccd824p-15f, 0.0f,
     0x1.3d9d7cp-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c9521p-104f, 0.0f, 0x1.cdc6e2p-112f,
     0.0f, 0x1.f01b66p-69f, 0x1.53c546p-106f, 0.0f, 0x1.36ebd8p-87f, 0.0f,
     0x1.2d008ap-124f, 0.0f, 0x1.d44666p-61f, 0x1.e3ac62p-25f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d08574p-7f, 0x1.2d997ap-82f, 0x1.616c7cp-110f, 0.0f,
     0x1.6f955cp-4f, 0.0f, 0x1.63409cp-50f, 0.0f, 0x1.f1f69ep-39f, 0x1.f1c732p-123f,
     0.0f, 0x1.a02e48p-103f, 0x1.fbc7a6p-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7afe1ep-53f,
     0x1.e64e34p-67f, 0x1.2fee4ap-72f, 0x1.38dc7ep-93f, 0x1.881972p-106f,
     0x1.86c05p-30f, 0x1.cb0bb2p-15f, 0.0f, 0.0f, 0.0f, 0x1.3de0f8p-15f,
     0x1.9fa0a2p-13f, 0x1.0135c4p-49f, 0x1.534b24p-46f, 0x1.bb70cap-28f, 0.0f,
     0x1.964decp-55f, 0.0f, 0x1.5051d6p-17f, 0.0f, 0x1.a3fb2ap-112f, 0.0f, 0.0f,
     0x1.b04664p-4f, 0x1.8b2576p-106f, 0x1.914d8ep-89f, 0x1.0a31e2p-26f, 0.0f, 0.0f,
     0.0f, 0x1.d77e4ap-36f, 0x1.26059cp-117f, 0x1.1ffd64p-89f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.06359p-84f, 0x1.f1a398p-107f, 0.0f, 0x1.e2f106p-92f, 0x1.54b2a4p-67f, 0.0f,
     0x1.b85754p-65f, 0.0f, 0x1.006f6ep-22f, 0.0f, 0.0f, 0x1.b689acp-115f, 0.0f,
     0x1.45d66cp-98f, 0x1.57a518p-83f, 0.0f, 0x1.8d9aa8p-113f, 0.0f, 0x1.2e703cp-36f,
     0.0f, 0x1.e46272p-114f, 0x1.8f532ep-112f, 0x1.7cd1aap-87f, 0x1.1372d8p-29f, 0.0f,
     0.0f, 0x1.11b864p-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.95d9fep-115f, 0.0f,
     0.0f, 0x1.2d3268p-11f, 0.0f, 0x1.ff9f3p-81f, 0x1.fa1f32p-124f, 0x1.d78a0ep-24f,
     0x1.3cacaep-24f, 0x1.f66c2cp-44f, 0x1.fc4494p-16f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4441fep-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ae1bdp-25f, 0.0f, 0.0f,
     0x1.6b45f4p-88f, 0.0f, 0.0f, 0x1.de468p-108f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a4953ap-17f, 0x1.6d0c0ep-28f, 0.0f, 0x1.371f6ap-98f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9c7c92p-100f, 0.0f, 0.0f, 0x1.c2d71ap-31f, 0.0f, 0.0f, 0.0f, 0x1.b5bd8ep-70f,
     0x1.da8cd2p-111f, 0x1.467f2ap-1f, 0.0f, 0x1.592ed8p-11f, 0x1.a53b72p-80f, 0.0f,
     0x1.cd9574p-82f, 0x1.c0e3d6p-37f, 0.0f, 0x1.4ca4a2p-38f, 0.0f, 0.0f,
     0x1.e2b8bep-119f, 0.0f, 0.0f, 0.0f, 0x1.69c9cp-20f, 0.0f, 0x1.bb4dcap-96f,
     0x1.b6273ap-98f, 0.0f, 0x1.fbbcf4p-43f, 0.0f, 0x1.af70bep-59f, 0x1.54a2aap-106f,
     0.0f, 0x1.70f3ccp-103f, 0.0f, 0.0f, 0x1.3db7ccp-120f, 0x1.bea0f8p-60f,
     0x1.09c608p-25f, 0x1.d8c8c2p-101f, 0x1.ca4c02p-38f, 0x1.3c628ap-94f,
     0x1.8b6518p-95f, 0x1.4915b2p-84f, 0x1.aa69cep-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bef5aep-93f, 0.0f, 0x1.bdf8cep-31f, 0.0f, 0.0f, 0x1.2135e8p-27f,
     0x1.c917c6p-72f, 0.0f, 0x1.6c4592p-99f, 0x1.167628p-89f, 0.0f, 0x1.5c63a6p-68f,
     0.0f, 0.0f, 0x1.d78af4p-93f, 0.0f, 0.0f, 0x1.f97146p-121f, 0.0f, 0.0f, 0.0f,
     0x1.9eae22p-96f, 0x1.9389b8p-101f, 0x1.f1e368p-53f, 0.0f, 0.0f, 0x1.543a6ap-94f,
     0x1.cdf71ep-102f, 0x1p0f, 0x1.c6d402p-68f, 0.0f, 0x1.8872a2p-115f,
     0x1.c405acp-48f, 0.0f, 0x1.475a32p-80f, 0.0f, 0.0f, 0x1.95c7dep-113f, 0.0f,
     0x1.2b464cp-63f, 0.0f, 0.0f, 0.0f, 0x1.56fc34p-120f, 0x1.a04e78p-77f,
     0x1.a3c36cp-92f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.b07952p-18f,
     0x1.ac86acp-97f, 0x1.ea295ep-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b0bb5p-75f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2857dcp-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bf3546p-106f, 0.0f, 0x1.b35b62p-13f, 0x1.9613dcp-69f, 0.0f, 0x1.bf7f9ep-97f,
     0x1.c298a6p-8f, 0x1.fb5dfep-123f, 0.0f, 0.0f, 0x1.e01e9cp-46f, 0x1.94e73cp-13f,
     0x1.95686cp-89f, 0.0f, 0.0f, 0.0f, 0x1.80129cp-89f, 0.0f, 0x1.24a4c8p-58f,
     0x1.1b074ep-19f, 0.0f, 0x1.6a736ap-18f, 0x1.e09774p-82f, 0x1.9d304p-116f,
     0x1.fc212ap-61f, 0x1.7dbd52p-46f, 0x1.c0e28p-119f, 0x1.86c078p-75f,
     0x1.524724p-45f, 0.0f, 0x1.f4a5ap-26f, 0x1.ed4c6p-119f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.5bd1d2p-5f, 0.0f, 0.0f, 0.0f, 0x1.341f86p-99f,
     0x1.8377c4p-113f, 0.0f, 0.0f, 0.0f, 0x1.50337ep-118f, 0.0f, 0x1.8166dcp-78f,
     0.0f, 0x1p0f, 0.0f, 0x1.ff35bep-38f, 0x1.e0a86p-35f, 0.0f, 0x1.16416cp-53f,
     0x1.b355cap-57f, 0.0f, 0x1.1db3bep-63f, 0.0f, 0x1.941492p-92f, 0x1.6b7454p-5f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.bc6c1ap-30f, 0x1.7beb62p-65f, 0x1.cd63cap-76f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.3f3b32p-85f, 0x1.087d22p-89f, 0x1.dd1524p-83f, 0.0f, 0.0f,
     0x1.51442p-15f, 0x1.fadec8p-5f, 0x1.af469ep-103f, 0.0f, 0x1.e23dcep-88f, 0.0f,
     0.0f, 0.0f, 0x1.57bd28p-52f, 0.0f, 0x1.d850b8p-43f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.47e5f4p-46f, 0x1.05b9f4p-8f, 0x1.f67cf4p-10f, 0x1.06fdb8p-29f,
     0x1.63e56ap-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.82b7c6p-119f, 0x1.210f66p-78f,
     0x1.ebe0acp-100f, 0x1.ba86bp-53f, 0.0f, 0x1.f55fccp-19f, 0x1.a93854p-68f,
     0x1.e63f6cp-63f, 0x1.c15008p-51f, 0.0f, 0.0f, 0x1.1222eep-46f, 0x1.62c5f2p-56f,
     0x1.1d34bcp-70f, 0x1.320b72p-122f, 0x1.8a72f2p-16f, 0x1.0703f8p-124f, 0.0f,
     0x1.27920ap-2f, 0.0f, 0x1.5a91dap-114f, 0x1.84ace8p-31f, 0x1.8f7cb8p-82f,
     0x1.dd124cp-102f, 0.0f, 0x1.ff9424p-11f, 0x1.895012p-44f, 0.0f, 0x1.a3ea68p-50f,
     0.0f, 0x1.894ddep-10f, 0x1.00f304p-56f, 0.0f, 0x1.c708a2p-101f, 0.0f,
     0x1.bc058ep-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fee53ap-96f, 0x1.43535cp-16f,
     0x1.02983ep-100f, 0.0f, 0x1.51434ap-105f, 0x1.72265p-114f, 0.0f, 0.0f, 0.0f,
     0x1.1ef0c2p-107f, 0.0f, 0.0f, 0x1.58218cp-80f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.86cd7ap-69f, 0x1.6b0588p-29f, 0x1.3601p-85f, 0x1.cb4376p-89f, 0.0f,
     0x1.77ec06p-98f, 0.0f, 0.0f, 0x1.91e3a6p-20f, 0x1.474958p-126f, 0.0f,
     0x1.556d5ep-80f, 0x1.05f374p-123f, 0.0f, 0x1.e9369p-45f, 0x1.935baap-70f, 0.0f,
     0x1.232924p-23f, 0x1.eccd24p-105f, 0.0f, 0x1.21bb36p-5f, 0.0f, 0x1.9b27dcp-9f,
     0x1.9af838p-50f, 0.0f, 0.0f, 0x1.1b2d5p-97f, 0.0f, 0.0f, 0x1.b043c2p-4f, 0.0f,
     0.0f, 0x1.3cde52p-103f, 0x1.af9b1ep-52f, 0x1.f5828ep-99f, 0.0f, 0.0f, 0.0f,
     0x1.e66bdp-124f, 0x1.e562dp-76f, 0x1.fab906p-19f, 0.0f, 0.0f, 0.0f,
     0x1.923522p-25f, 0x1.467944p-70f, 0x1.695bdcp-60f, 0.0f, 0x1.a20fb4p-55f,
     0x1.540a1ep-35f, 0x1.10de2ap-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.73e8dcp-19f, 0.0f,
     0.0f, 0x1.81d72p-43f, 0x1.9ba53ap-108f, 0x1.801958p-82f, 0x1.97e14ap-105f, 0.0f,
     0x1.4e286p-34f, 0.0f, 0x1.ba92c8p-22f, 0x1.b9d234p-25f, 0.0f, 0x1.105d6cp-16f,
     0x1.96a488p-104f, 0x1.7f3bfp-100f, 0.0f, 0x1.b4696cp-126f, 0.0f, 0.0f, 0.0f,
     0x1.bc813cp-113f, 0x1.860406p-4f, 0.0f, 0x1.ffd9d2p-118f, 0x1.c12516p-90f,
     0x1.48f386p-107f, 0x1.32fe2p-23f, 0.0f, 0x1.bd51bep-68f, 0.0f, 0.0f,
     0x1.592f62p-83f, 0.0f, 0x1.043bc8p-61f, 0x1p0f, 0x1.b89502p-59f, 0.0f,
     0x1.9d5fa8p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.38e9p-2f, 0x1.005972p-114f,
     0x1.79d23cp-46f, 0.0f, 0x1.8a7ba6p-11f, 0.0f, 0x1.5745f4p-81f, 0.0f,
     0x1.98ec2ep-79f, 0.0f, 0x1.5b1c08p-9f, 0x1.869178p-118f, 0x1.14ff2ap-6f,
     0x1.8d103cp-76f, 0.0f, 0.0f, 0x1.799724p-112f, 0x1.cb9734p-52f, 0.0f,
     0x1.9a130cp-106f, 0x1.ac7b9p-119f, 0.0f, 0x1.df441ap-80f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.62a11cp-36f, 0x1.115bd8p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bc638p-108f,
     0x1.517fa8p-23f, 0.0f, 0x1.055d1ap-108f, 0.0f, 0x1.40b15ap-19f, 0.0f,
     0x1.c6d7dp-80f, 0x1.5e3c38p-82f, 0x1.9dddc8p-92f, 0.0f, 0x1.01bf02p-21f, 0.0f,
     0.0f, 0x1.d5aa5cp-26f, 0.0f, 0x1.3f85c6p-27f, 0.0f, 0x1.ae6ddep-74f, 0.0f, 0.0f,
     0x1.7820e4p-77f, 0x1.b65eecp-69f, 0x1.35324ep-60f, 0x1.3043a8p-107f, 0.0f, 0.0f,
     0x1.e4d7bcp-105f, 0.0f, 0x1.8ffe2p-83f, 0x1.8a5996p-33f, 0x1.986728p-99f,
     0x1.4a5594p-44f, 0x1.4d778ep-97f, 0x1.6985aep-5f, 0.0f, 0x1.a21c8p-45f,
     0x1.0c70d6p-88f, 0x1.10df9ap-77f, 0x1.587558p-87f, 0x1.d2e016p-35f, 0.0f, 0.0f,
     0x1.7ede96p-106f, 0.0f, 0x1.a3826ap-82f, 0x1.ceba74p-3f, 0.0f, 0x1.3a559ep-121f,
     0.0f, 0x1.e68e6ep-8f, 0.0f, 0.0f, 0x1.b910a8p-58f, 0.0f, 0x1.2429c6p-123f, 0.0f,
     0x1.e75f98p-54f, 0x1.0a500cp-44f, 0.0f, 0x1.61fff2p-105f, 0.0f, 0x1.827dfcp-23f,
     0x1.e27d58p-44f, 0.0f, 0x1.4a023ep-83f, 0.0f, 0.0f, 0.0f, 0x1.1b028ep-91f,
     0x1.b29bd4p-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.30eb34p-6f, 0x1.0f8cb8p-56f,
     0x1.c9b332p-68f, 0x1.a1a8bcp-1f, 0x1.bec77ep-23f, 0.0f, 0.0f, 0x1.e729d8p-91f,
     0x1.134142p-33f, 0.0f, 0x1.9389f4p-54f, 0x1.5f554ap-82f, 0.0f, 0.0f,
     0x1.430a6cp-112f, 0x1.bc6b9p-99f, 0x1.2feb54p-68f, 0.0f, 0.0f, 0.0f,
     0x1.004652p-39f, 0x1.de9196p-32f, 0x1.d365acp-57f, 0.0f, 0x1.0f839cp-63f, 0.0f,
     0x1.d62218p-19f, 0x1.75ad58p-14f, 0x1.d5d95cp-114f, 0x1.7b11dap-54f,
     0x1.f02934p-53f, 0x1.51c3fep-27f, 0.0f, 0.0f, 0.0f, 0x1.ec34a4p-107f,
     0x1.8af43p-122f, 0.0f, 0x1.a05cap-71f, 0x1.692a64p-123f, 0.0f, 0x1.37f7d6p-57f,
     0.0f, 0.0f, 0.0f, 0x1.58029cp-18f, 0x1.f2f44ep-115f, 0x1.b81256p-68f, 0.0f, 0.0f,
     0x1.16c22cp-43f, 0.0f, 0.0f, 0x1.5af96p-25f, 0x1.6577f6p-120f, 0.0f,
     0x1.04a226p-72f, 0x1.7917fep-81f, 0.0f, 0x1.79fb08p-84f, 0.0f, 0x1.0ac82p-55f,
     0.0f, 0x1.d54a02p-101f, 0x1.9f1052p-46f, 0x1.2b2ccp-106f, 0.0f, 0x1.ebc778p-19f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a548cap-110f, 0.0f, 0x1.0a099cp-52f, 0x1.e7ca6p-34f,
     0x1.19b61ap-107f, 0.0f, 0.0f, 0.0f, 0x1.141d0ap-104f, 0.0f, 0x1.acb8dep-116f,
     0.0f, 0x1.67de64p-54f, 0x1.d66844p-53f, 0.0f, 0x1.f9bb7p-120f, 0.0f,
     0x1.cd6e26p-119f, 0.0f, 0x1.491a82p-20f, 0x1.54c992p-76f, 0.0f, 0x1.89177ap-100f,
     0.0f, 0.0f, 0.0f, 0x1.82fa34p-15f, 0x1.a4d55ep-42f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fb307cp-84f
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
            ml_float4_t tmp3;
            int32_t tmp4;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            memcpy(&tmp1, ((ml_float4_t*)(external_bench_wrapper_input_table_arg1+ i)), 16);
            tmp2 = Sleef_nextafterf4_kvx(tmp0, tmp1);
            memcpy(((ml_float4_t*)(external_bench_wrapper_output_table+ i)), &(tmp2), 16);
            tmp3 = local_acc + tmp2;
            local_acc = tmp3;
            tmp4 = i + INT32_C(4);
            i = tmp4;
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
    printf("Sleef_nextafterf4_kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_nextafterf4_kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
