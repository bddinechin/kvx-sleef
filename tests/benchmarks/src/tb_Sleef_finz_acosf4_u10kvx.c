/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_acosf4_u10kvx.c --function \
 *     Sleef_finz_acosf4_u10kvx --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f8b844p-24f, 0x1.b3563ep-65f, 0.0f, 0x1.2156b2p-57f,
     0x1.e3e6fap-74f, 0x1.1a4f02p-40f, 0x1.39d8e2p-72f, 0x1.3cc656p-67f,
     0x1.5705cap-58f, 0x1.5cb84ep-38f, 0x1.7a55cp-14f, 0x1.71cdf2p-11f,
     0x1.e6837ap-33f, 0x1.2b68f6p-81f, 0.0f, 0x1.32c62ap-75f, 0x1.7226fap-66f,
     0x1.ee157cp-41f, 0.0f, 0.0f, 0x1.58858cp-125f, 0.0f, 0x1.01e1b6p-23f,
     0x1.9da07cp-36f, 0.0f, 0x1.4208c6p-95f, 0x1.a55296p-65f, 0x1.92afdap-61f,
     0x1.658564p-112f, 0x1.1d4e3ep-122f, 0x1.abada6p-103f, 0.0f, 0x1.a0d15ap-70f,
     0.0f, 0.0f, 0x1.fd0a98p-59f, 0.0f, 0x1.7ed1ap-9f, 0x1.20df46p-90f, 0.0f, 0.0f,
     0x1.632e58p-84f, 0x1.121602p-77f, 0.0f, 0x1.8afc8ep-92f, 0x1.e7d4aap-63f, 0.0f,
     0.0f, 0x1.fe14f4p-23f, 0x1.5b3056p-100f, 0.0f, 0x1.37c3b8p-14f, 0x1.38934cp-102f,
     0.0f, 0x1.e505bp-46f, 0.0f, 0x1.7f7702p-40f, 0.0f, 0x1.7d73a4p-22f, 0.0f,
     0x1.1350dp-27f, 0.0f, 0x1.f76acep-78f, 0.0f, 0.0f, 0x1.eaf782p-85f,
     0x1.630bdcp-52f, 0x1.55145ap-124f, 0x1.d8506cp-100f, 0.0f, 0.0f, 0x1.cffffep-89f,
     0x1.a208cep-39f, 0.0f, 0x1.143b6ap-63f, 0x1.f5418cp-22f, 0x1.3956b4p-61f,
     0x1.2bbd0ep-22f, 0x1.265c8p-102f, 0.0f, 0x1.748b2ep-87f, 0x1.a5928ep-49f,
     0x1.778efep-8f, 0x1.92c416p-49f, 0x1.8de2acp-62f, 0x1.a69f8p-68f,
     0x1.6aa506p-35f, 0x1.54079ep-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.361bcep-64f, 0.0f,
     0.0f, 0.0f, 0x1.427944p-20f, 0x1.b7007ep-15f, 0.0f, 0.0f, 0x1.26e936p-120f, 0.0f,
     0.0f, 0x1.b7b638p-84f, 0.0f, 0.0f, 0x1.5bdca8p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.39b62ep-51f, 0x1.bd6c72p-18f, 0x1.f61046p-85f, 0.0f, 0x1.f8af94p-108f, 0.0f,
     0x1.cfa104p-22f, 0x1.193d38p-91f, 0x1.4e4bp-2f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.59ec4p-75f, 0.0f, 0.0f, 0.0f, 0x1.6abd18p-14f, 0.0f, 0x1.5d0bbcp-10f, 0.0f,
     0x1.6c225p-52f, 0.0f, 0x1.ad66b6p-81f, 0.0f, 0x1.6038ep-28f, 0.0f,
     0x1.0f7e4cp-23f, 0x1.fb328ap-86f, 0.0f, 0x1.a421c8p-5f, 0.0f, 0x1.1a8c74p-10f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.fb0218p-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6892f4p-48f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.108d36p-71f, 0x1.7108c8p-103f, 0.0f,
     0x1.960ff6p-23f, 0.0f, 0x1.da5a8cp-48f, 0.0f, 0.0f, 0x1.d8c04ep-21f, 0.0f,
     0x1.2dc4c8p-99f, 0.0f, 0.0f, 0x1.1be5f6p-92f, 0x1.7d9ea6p-42f, 0.0f,
     0x1.fcbb08p-117f, 0x1.64742p-45f, 0.0f, 0.0f, 0.0f, 0x1.78e454p-14f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.494c6p-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.717476p-3f,
     0.0f, 0x1.a1d008p-53f, 0.0f, 0x1.8c4d48p-43f, 0.0f, 0x1.6656fp-17f,
     0x1.3f83c2p-37f, 0.0f, 0.0f, 0x1.306726p-47f, 0x1.fb3492p-6f, 0.0f, 0.0f,
     0x1.2627f2p-48f, 0.0f, 0.0f, 0x1.38384p-23f, 0.0f, 0x1.f9ec7ep-108f,
     0x1.11c45p-9f, 0x1.297096p-89f, 0x1.7e84fcp-85f, 0x1.091898p-124f,
     0x1.449c14p-122f, 0.0f, 0x1.ef0d2ap-91f, 0x1.38dfcp-45f, 0.0f, 0x1.655e16p-91f,
     0.0f, 0x1.ba855ap-38f, 0x1.c5134cp-61f, 0.0f, 0x1.7691a8p-79f, 0x1.5273a8p-15f,
     0x1.0b0f4p-14f, 0.0f, 0x1.10b9ccp-20f, 0.0f, 0x1.9b3cbp-8f, 0x1.d11c0ap-23f,
     0.0f, 0x1.052f6cp-44f, 0x1.3b090ap-80f, 0x1.5db94p-1f, 0x1.af8eb2p-26f,
     0x1.042c66p-60f, 0x1.b03b72p-95f, 0x1.3e3ef4p-55f, 0.0f, 0x1.8246a6p-115f, 0.0f,
     0x1.8bf07ap-78f, 0.0f, 0.0f, 0.0f, 0x1.a72668p-54f, 0x1.f48dbap-12f,
     0x1.28bc6p-56f, 0.0f, 0.0f, 0x1.60d15p-43f, 0.0f, 0x1.edf8ccp-45f,
     0x1.c1b228p-22f, 0.0f, 0x1.27efecp-53f, 0.0f, 0x1.792e36p-85f, 0x1.db802p-101f,
     0.0f, 0x1.89c48ap-56f, 0x1.c90cep-2f, 0.0f, 0x1.360112p-44f, 0.0f,
     0x1.6af96p-46f, 0x1.8d9f62p-22f, 0x1.a72222p-114f, 0x1.a3d0d6p-111f, 0.0f,
     0x1.5af5f8p-94f, 0x1.6d6892p-58f, 0x1.c49348p-108f, 0.0f, 0x1.51367ep-14f,
     0x1.38838cp-98f, 0.0f, 0x1.89b53ep-57f, 0.0f, 0.0f, 0x1.6964f6p-102f,
     0x1.9c3e42p-48f, 0x1.d93e6ep-23f, 0.0f, 0.0f, 0x1.0ea53ep-115f, 0x1.14695cp-14f,
     0x1.e0d1c2p-86f, 0x1.dc8f0ap-19f, 0.0f, 0.0f, 0x1.a2147ep-94f, 0.0f,
     0x1.c24d22p-99f, 0.0f, 0x1.1e2148p-8f, 0x1.cc57f8p-73f, 0.0f, 0x1.b47e3p-112f,
     0.0f, 0.0f, 0x1.7befap-122f, 0x1.eb4058p-50f, 0.0f, 0x1.02ce1ep-44f,
     0x1.18cdb4p-83f, 0.0f, 0.0f, 0x1.2b96a8p-13f, 0x1.60f842p-105f, 0.0f, 0.0f,
     0x1.64cabp-37f, 0x1.e3c856p-94f, 0x1.8515fep-49f, 0x1.74ab0ep-4f,
     0x1.51335cp-23f, 0x1.ccb7bp-15f, 0.0f, 0.0f, 0x1.3da68cp-38f, 0x1.5a28bp-101f,
     0x1.04c1e2p-10f, 0x1.0fb46ap-93f, 0x1.e1d7eep-106f, 0x1p0f, 0x1.072dc8p-57f,
     0x1.54f96cp-47f, 0x1.0adf42p-107f, 0.0f, 0.0f, 0x1.b3572cp-83f, 0x1.69bb12p-105f,
     0.0f, 0x1.bd7656p-57f, 0x1.f5594ep-22f, 0x1.dcc3cep-76f, 0.0f, 0.0f, 0.0f,
     0x1.16e9dap-87f, 0x1.b503fcp-32f, 0.0f, 0x1.14d8b2p-96f, 0x1.f1dfep-101f, 0.0f,
     0.0f, 0.0f, 0x1.088728p-48f, 0x1.fcf38ap-104f, 0x1.ba1254p-46f, 0x1.e816a2p-97f,
     0x1.bf55b2p-69f, 0x1.955e9cp-126f, 0x1.719f4ap-88f, 0x1.c42636p-33f, 0.0f,
     0x1.e3f6dcp-65f, 0x1.f02aa2p-117f, 0.0f, 0.0f, 0x1.87efd2p-13f, 0.0f, 0.0f,
     0x1.be0a72p-10f, 0x1.317bcp-45f, 0.0f, 0.0f, 0.0f, 0x1.3a6bd8p-103f, 0.0f,
     0x1.3b1d7p-12f, 0.0f, 0.0f, 0x1.196434p-35f, 0.0f, 0x1.4c89dap-9f, 0.0f,
     0x1.72b1e4p-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.be0756p-100f, 0x1.9db368p-74f,
     0x1.015f28p-109f, 0.0f, 0x1.87718ep-34f, 0x1.01634p-103f, 0x1.9c284ep-54f, 0.0f,
     0x1.6245dap-33f, 0x1.075268p-80f, 0x1.e7df2ap-11f, 0x1.83f1c2p-92f, 0.0f,
     0x1.42f648p-102f, 0x1.4d07f8p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9c1898p-47f, 0.0f, 0.0f, 0x1.bcfdfap-87f, 0x1.a8899ep-1f, 0x1.d1d996p-73f,
     0.0f, 0.0f, 0.0f, 0x1.c161fp-5f, 0x1.d6e088p-66f, 0.0f, 0.0f, 0x1.5b3dc6p-35f,
     0.0f, 0x1.ec0fecp-97f, 0.0f, 0.0f, 0x1.e96946p-125f, 0x1.a7e53cp-25f, 0.0f,
     0x1.deeaacp-40f, 0.0f, 0x1.1f287ap-121f, 0.0f, 0x1.3db7p-48f, 0x1.cd99b2p-110f,
     0x1.62ccfcp-115f, 0.0f, 0.0f, 0x1.e716cap-82f, 0x1.3cd68cp-33f, 0x1.38c5e6p-70f,
     0.0f, 0x1.103d8p-47f, 0.0f, 0.0f, 0x1.5f5edep-37f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0d6cccp-58f, 0x1.091fbep-3f, 0.0f, 0.0f, 0x1.e757c4p-46f, 0.0f,
     0x1.ef8b0ap-57f, 0.0f, 0.0f, 0x1.2866d4p-88f, 0.0f, 0.0f, 0.0f, 0x1.0fb058p-21f,
     0x1.8a247p-27f, 0x1.c22182p-3f, 0x1.c2ebe2p-84f, 0.0f, 0.0f, 0x1.74eec4p-98f,
     0x1.d7268ap-20f, 0.0f, 0x1.d2112ep-31f, 0.0f, 0x1.79ff54p-100f, 0x1.fe996cp-37f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.83dp-40f, 0.0f, 0.0f, 0.0f,
     0x1.b94366p-89f, 0.0f, 0x1.80d15ap-125f, 0x1.b76fc6p-98f, 0.0f, 0x1.982de6p-56f,
     0x1.bce622p-96f, 0.0f, 0x1.ef41a2p-97f, 0x1.cbc59cp-12f, 0.0f, 0x1.904ac4p-100f,
     0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.eee4fep-18f, 0x1.6d085ap-48f,
     0x1.e24314p-104f, 0.0f, 0x1.23b0f6p-108f, 0x1.6d7fap-34f, 0.0f, 0x1.c466bp-6f,
     0x1.ea0d5p-62f, 0.0f, 0.0f, 0x1.f5d7fcp-111f, 0.0f, 0x1.4a5aap-106f,
     0x1.f000bap-6f, 0x1.4054cep-36f, 0x1.cc2196p-26f, 0x1.b1ffdcp-102f,
     0x1.90037ep-34f, 0x1.b6a12p-80f, 0x1.410188p-82f, 0x1.4baf4cp-47f,
     0x1.3ba096p-101f, 0.0f, 0x1.e713d6p-75f, 0.0f, 0.0f, 0.0f, 0x1.ab9c58p-95f, 0.0f,
     0x1.50eda6p-36f, 0x1.dccb42p-100f, 0x1.a69b2cp-13f, 0.0f, 0.0f, 0x1.5848e2p-75f,
     0x1.3d6338p-20f, 0x1.89d2a8p-23f, 0x1.465e7ap-124f, 0x1.fb6cf4p-82f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c47b3ap-77f, 0x1.4d58bcp-66f, 0x1.72cc1p-27f,
     0x1.f88f72p-9f, 0x1.a91db8p-83f, 0.0f, 0.0f, 0x1.8bc3b2p-40f, 0.0f,
     0x1.10e58ap-72f, 0.0f, 0x1.37b944p-121f, 0x1.919fc2p-6f, 0.0f, 0x1.76edcp-92f,
     0.0f, 0x1.ac9834p-115f, 0x1.63a9aep-67f, 0x1.284f42p-52f, 0x1.4841cp-60f,
     0x1.e0bb94p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e0fad6p-96f, 0x1.5eaedcp-23f,
     0x1.a53d6cp-42f, 0.0f, 0x1.421234p-91f, 0x1.6bbed4p-92f, 0.0f, 0x1.6aa0fap-103f,
     0.0f, 0x1.1dc6ep-52f, 0.0f, 0.0f, 0.0f, 0x1.c35baap-58f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.99ce98p-19f, 0.0f, 0.0f, 0.0f, 0x1.4f5e26p-9f, 0.0f, 0.0f, 0.0f,
     0x1.0c0d32p-124f, 0.0f, 0x1.415dacp-104f, 0.0f, 0.0f, 0x1.4284dep-84f,
     0x1.2bd16cp-55f, 0.0f, 0x1.b99c8ap-17f, 0.0f, 0x1.988bcap-103f, 0x1.596f14p-56f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5d3534p-15f, 0x1.9d3c52p-12f, 0x1.29cb18p-99f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5b97dcp-76f, 0x1.0d9022p-29f, 0.0f,
     0x1.111cdep-75f, 0.0f, 0.0f, 0.0f, 0x1.cad094p-106f, 0.0f, 0x1.ba7ebap-4f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.275484p-81f, 0.0f, 0.0f, 0x1.707d1ap-89f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5b5554p-122f, 0x1.951066p-100f,
     0x1.07b472p-60f, 0x1.762836p-89f, 0x1.d02b5p-33f, 0x1.6ee084p-95f, 0.0f,
     0x1.1fabc6p-19f, 0x1.f92ea4p-101f, 0x1.8c7f3p-4f, 0.0f, 0x1.3755bap-30f,
     0x1.dd052p-119f, 0x1.252472p-95f, 0x1.bc57f8p-94f, 0x1.0bf1bep-119f, 0.0f,
     0x1.6d3cd4p-80f, 0.0f, 0x1.0b32b6p-124f, 0.0f, 0x1.29f59p-97f, 0x1.8e119p-102f,
     0.0f, 0.0f, 0x1.036a64p-14f, 0x1.dd783ep-1f, 0.0f, 0.0f, 0x1.da4fb4p-31f, 0.0f,
     0x1.1cf62cp-55f, 0x1.0e8986p-67f, 0.0f, 0.0f, 0x1.6cfb08p-94f, 0x1.1c1d32p-71f,
     0.0f, 0x1.e3dba4p-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b1b8aap-71f, 0x1.0341a6p-28f, 0x1.6ffe86p-41f, 0x1.24b276p-79f,
     0x1.380b78p-98f, 0x1.322296p-26f, 0x1.653e4p-13f, 0x1.a1d01ap-12f,
     0x1.91a98ap-48f, 0x1.1503b8p-47f, 0x1.bdce4cp-84f, 0x1.1ae1e8p-67f,
     0x1.4d9f02p-85f, 0.0f, 0x1.e1464cp-44f, 0.0f, 0x1.515eccp-4f, 0x1.5242e6p-112f,
     0.0f, 0x1.b57c4cp-115f, 0x1.5e098p-103f, 0x1.228d2p-26f, 0.0f, 0x1.f3c746p-39f,
     0x1.c3c112p-81f, 0.0f, 0x1.c1161ap-78f, 0.0f, 0x1.fba2fp-12f, 0x1.8ea02ap-28f,
     0x1.3fe808p-62f, 0x1.5cee86p-101f, 0x1.58d8bep-35f, 0.0f, 0x1.e940aap-81f, 0.0f,
     0x1.eff3aap-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a28d5ep-56f,
     0.0f, 0x1.df2352p-3f, 0x1.717482p-122f, 0.0f, 0.0f, 0x1.c5f4e4p-111f,
     0x1.42c626p-25f, 0.0f, 0x1.d8c7cap-9f, 0x1.a6ccb6p-66f, 0x1.6a5158p-49f, 0.0f,
     0.0f, 0.0f, 0x1.ff57a8p-111f, 0x1.37a536p-42f, 0.0f, 0.0f, 0x1.6e3086p-73f, 0.0f,
     0.0f, 0.0f, 0x1.ba5be4p-104f, 0x1.ffcb14p-62f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5c5fbcp-90f, 0x1.cc5fb2p-42f, 0x1.a0fa14p-80f, 0x1.c82d8cp-93f,
     0x1.8770bp-40f, 0x1.cc65b4p-18f, 0x1.87002p-84f, 0.0f, 0.0f, 0.0f,
     0x1.c87ccap-70f, 0x1.d4ad8ap-23f, 0x1.c1c17cp-51f, 0x1.de8cf8p-114f,
     0x1.3cacf8p-41f, 0x1.c24c5ep-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a04e36p-70f, 0.0f, 0.0f, 0x1.404be6p-71f, 0x1.bc8802p-88f, 0x1.a07b0ap-89f,
     0.0f, 0.0f, 0x1.c056dap-87f, 0x1.4e98c8p-46f, 0x1.9cc50ep-97f, 0x1.beed8ep-29f,
     0x1.e1d4e6p-26f, 0.0f, 0x1.f3359ep-95f, 0.0f, 0x1.d5905p-122f, 0x1.16edeap-68f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f0236cp-102f, 0.0f, 0.0f, 0.0f, 0x1.cf69bp-64f,
     0x1.9cac7ap-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ccc2cep-72f, 0.0f, 0.0f,
     0x1.8d0d58p-15f, 0x1.fea4cp-61f, 0x1.2b1758p-76f, 0x1.ee8e76p-8f, 0.0f,
     0x1.9c3d72p-71f, 0x1.56a32cp-44f, 0x1.6a67cp-6f, 0x1.421c1ep-79f, 0x1.12b1acp-6f,
     0.0f, 0.0f, 0.0f, 0x1.98e15cp-87f, 0x1.d90bdcp-121f, 0x1.60d376p-69f,
     0x1.3ed1dp-65f, 0x1.ee795ep-70f, 0.0f, 0.0f, 0x1.4ee034p-12f, 0.0f,
     0x1.0e4b2ep-31f, 0x1.ae868p-38f, 0x1.66849ap-60f, 0.0f, 0x1.50d418p-37f,
     0x1.a57c4cp-123f, 0.0f, 0x1.3f503ap-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.51a314p-76f, 0x1.91c3ecp-56f, 0.0f, 0.0f, 0.0f, 0x1.58215ep-23f,
     0x1.7e3e3ep-47f, 0x1.1b3fe4p-7f, 0x1.91b668p-73f, 0x1.b67e52p-36f,
     0x1.f9cfep-31f, 0.0f, 0x1.40ce24p-113f, 0x1.1cb198p-59f, 0.0f, 0.0f,
     0x1.177fa6p-90f, 0x1.62bd28p-7f, 0x1.969e9cp-84f, 0.0f, 0x1.1fcaap-110f, 0.0f,
     0x1.3e4a54p-22f, 0.0f, 0x1.f76068p-89f, 0.0f, 0.0f, 0.0f, 0x1.e25bd6p-117f,
     0x1.ab44acp-77f, 0x1.69bd8ep-92f, 0x1.ff1a32p-60f, 0.0f, 0.0f, 0x1.92f4aap-93f,
     0x1.f277dp-89f, 0.0f, 0.0f, 0.0f, 0x1.51bb7cp-28f, 0x1.53e0ecp-73f,
     0x1.fb7ac2p-3f, 0.0f, 0x1.8e536ep-6f, 0x1.c953ap-11f, 0x1.1dfbc8p-80f, 0.0f,
     0.0f, 0x1.71fe8ap-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c6feb8p-50f, 0.0f, 0.0f,
     0x1.f5ad74p-105f, 0x1.f8691cp-31f, 0.0f, 0.0f, 0x1.b35a3cp-125f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.936948p-2f, 0.0f, 0x1.147846p-90f, 0.0f, 0.0f, 0.0f,
     0x1.ac0906p-105f, 0.0f, 0.0f, 0x1.72cd5ap-77f, 0x1.508d52p-92f, 0.0f, 0.0f, 0.0f,
     0x1.0cfb18p-16f, 0x1.31226cp-52f, 0x1.acabf4p-97f, 0x1.99443ap-95f, 0.0f,
     0x1.20060ap-42f, 0x1.b91e58p-73f, 0x1.d7e60ep-50f, 0x1.31d014p-121f,
     0x1.7fb648p-113f, 0.0f, 0x1.866e88p-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7fb73ep-56f, 0x1.e0e70cp-28f, 0x1.a49006p-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b88624p-61f, 0.0f, 0x1.c92142p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3ee02p-111f,
     0.0f, 0x1.3f3ddcp-113f, 0x1.b0a772p-80f, 0.0f, 0x1.3fc15p-21f, 0.0f,
     0x1.78ed9ap-27f, 0.0f, 0.0f, 0x1.0f158ap-96f, 0x1.a91e1p-77f, 0x1.79123cp-41f,
     0.0f, 0x1.4b3f36p-91f, 0x1.af2faap-17f, 0.0f, 0x1p0f
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
            tmp1 = Sleef_finz_acosf4_u10kvx(tmp0);
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
    printf("Sleef_finz_acosf4_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_acosf4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
