/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_cospif4_u05avx2128.c --function \
 *     Sleef_finz_cospif4_u05avx2128 --headers sleef.h,ml_support_lib.h \
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
     0x1.249c54p-99f, 0x1.52ea24p-98f, 0.0f, 0x1.c8752ap-94f, 0.0f, 0.0f,
     0x1.0fd4aap-30f, 0x1.a2ce1cp-86f, 0x1.099176p-38f, 0x1.dffb5ap-94f, 0.0f, 0.0f,
     0x1.3bbf4cp-34f, 0.0f, 0x1.8febbp-77f, 0x1.92304p-92f, 0x1.3eca14p-89f,
     0x1.62284ep-118f, 0x1.5802bep-31f, 0x1.79cdf8p-34f, 0.0f, 0x1.509e32p-90f, 0.0f,
     0x1.43406cp-35f, 0.0f, 0.0f, 0x1.37d788p-14f, 0.0f, 0x1.737ef8p-95f, 0.0f, 0.0f,
     0.0f, 0x1.713c02p-103f, 0x1.9de68cp-59f, 0.0f, 0x1.da5014p-99f, 0x1.5df0d2p-89f,
     0x1.3a57dcp-99f, 0.0f, 0x1.fc01a6p-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.06038p-24f,
     0x1.0bcb02p-50f, 0x1.9dfbcap-111f, 0.0f, 0.0f, 0.0f, 0x1.5698bep-28f,
     0x1.777ba6p-16f, 0x1.ae77bp-47f, 0x1.a6ebc2p-113f, 0.0f, 0x1.0038cep-62f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a1b95ap-71f, 0x1.9ffa88p-10f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.6d991ap-19f, 0.0f, 0x1.b9b362p-64f, 0.0f, 0.0f, 0x1.e39676p-110f, 0.0f,
     0.0f, 0x1.f118dcp-67f, 0x1.6cd21cp-20f, 0.0f, 0.0f, 0.0f, 0x1.c31f82p-88f, 0.0f,
     0.0f, 0.0f, 0x1.68a83p-46f, 0x1.90c47p-76f, 0.0f, 0.0f, 0.0f, 0x1.78afdep-42f,
     0x1.7f3e58p-110f, 0.0f, 0x1.8a369cp-7f, 0.0f, 0x1.c4f78ep-11f, 0x1.c1051ap-60f,
     0.0f, 0.0f, 0x1.839184p-12f, 0.0f, 0x1.980968p-29f, 0x1.507f52p-84f, 0.0f,
     0x1.b402fap-103f, 0x1.cd2928p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3767dap-63f, 0.0f,
     0x1.0353a4p-113f, 0.0f, 0x1.02abb2p-18f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.44722ap-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dbf4d4p-69f, 0x1.557504p-1f,
     0.0f, 0x1.caa51ep-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4b1e32p-29f,
     0x1.ee606ep-70f, 0.0f, 0.0f, 0.0f, 0x1.1a1ba6p-116f, 0x1.fe0754p-115f, 0.0f,
     0x1.af2f22p-82f, 0.0f, 0x1.23ca7ap-109f, 0.0f, 0x1.fc63aap-25f, 0.0f,
     0x1.6d5512p-43f, 0.0f, 0x1.4b15f4p-47f, 0x1.be1578p-17f, 0x1.44ff2cp-83f,
     0x1.de960ap-45f, 0x1.060b5ap-82f, 0.0f, 0x1.b12082p-58f, 0.0f, 0.0f,
     0x1.123948p-70f, 0.0f, 0.0f, 0x1.4a6fc6p-62f, 0.0f, 0x1.ae312ep-7f,
     0x1.3187e4p-78f, 0x1.e2976ep-91f, 0.0f, 0.0f, 0x1.4ca05p-95f, 0x1.31a9b2p-32f,
     0.0f, 0.0f, 0.0f, 0x1.fa085ap-23f, 0x1.5ff228p-104f, 0x1.e4124ep-5f,
     0x1.289cccp-64f, 0.0f, 0.0f, 0.0f, 0x1.2f785ap-7f, 0.0f, 0.0f, 0x1.38166cp-109f,
     0x1.a93a4ap-90f, 0.0f, 0.0f, 0.0f, 0x1.8d062cp-25f, 0x1.8ede72p-37f, 0.0f,
     0x1.38ffa4p-64f, 0.0f, 0x1.6e30dep-29f, 0x1.1b6608p-13f, 0x1.da3ddp-100f, 0.0f,
     0.0f, 0x1.f081f4p-34f, 0x1.6df842p-41f, 0x1.82043ep-45f, 0x1.13f3c4p-75f, 0.0f,
     0x1.da9278p-117f, 0x1.fd5e1ap-90f, 0x1.778796p-39f, 0x1.956e1cp-79f, 0.0f,
     0x1.baae86p-125f, 0.0f, 0.0f, 0x1.ff101cp-108f, 0.0f, 0x1.28d3c6p-116f,
     0x1.820a1cp-83f, 0x1.47d9eep-22f, 0.0f, 0.0f, 0.0f, 0x1.bfaa4cp-51f, 0.0f, 0.0f,
     0x1.868d92p-69f, 0.0f, 0.0f, 0.0f, 0x1.27354cp-69f, 0.0f, 0x1.a3707p-104f, 0.0f,
     0.0f, 0x1.699a88p-80f, 0.0f, 0x1.8866fep-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.8c0eb2p-66f, 0x1.1334b4p-105f, 0.0f, 0.0f, 0x1.0f1e6ep-70f, 0.0f,
     0.0f, 0x1.a900bap-38f, 0.0f, 0x1.0f96fp-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fce908p-26f, 0.0f, 0x1.47b826p-88f, 0.0f, 0x1.252ec4p-4f, 0.0f, 0.0f,
     0x1.0a5ccp-33f, 0x1.eba05p-70f, 0x1.14331ep-108f, 0x1.6d5dep-4f, 0x1.7e4f66p-98f,
     0x1.9c410cp-4f, 0x1.33dbbp-76f, 0x1.d85cb6p-33f, 0x1.c91174p-107f, 0.0f,
     0x1.140f56p-52f, 0x1.f431e6p-32f, 0x1.c12a6ap-29f, 0.0f, 0x1.836d5ap-51f, 0.0f,
     0.0f, 0x1.473b38p-94f, 0x1.7474e4p-97f, 0.0f, 0x1.586d56p-65f, 0x1.89d7b6p-116f,
     0.0f, 0.0f, 0x1.20f29ep-111f, 0x1.2d0baap-67f, 0x1.5f8048p-18f, 0x1.478044p-76f,
     0x1.ccff84p-46f, 0.0f, 0x1.5eb12ep-83f, 0x1.2e9d2ep-6f, 0.0f, 0.0f,
     0x1.b585a2p-79f, 0x1.ea708p-89f, 0.0f, 0x1.c7f39ep-40f, 0.0f, 0x1p0f,
     0x1.37179p-22f, 0x1.0820fcp-123f, 0.0f, 0.0f, 0x1.39decp-46f, 0x1.1b70fp-22f,
     0x1.eec91ep-14f, 0x1.0e9486p-1f, 0x1.7a5f32p-71f, 0.0f, 0.0f, 0.0f,
     0x1.e52cdp-78f, 0.0f, 0x1.bf429cp-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ae73e2p-90f,
     0.0f, 0.0f, 0.0f, 0x1.bf1f24p-51f, 0x1.bbd38ap-112f, 0x1.29fc1p-30f, 0.0f,
     0x1.c25182p-93f, 0.0f, 0.0f, 0x1.2d98c6p-86f, 0x1.9098ap-123f, 0.0f,
     0x1.084d76p-76f, 0x1.ab2428p-58f, 0x1.fbe28cp-115f, 0x1.f2141ep-90f,
     0x1.88f9dap-44f, 0x1.450472p-80f, 0x1.fc8e68p-18f, 0x1.69b8ap-19f, 0.0f,
     0x1.3e16c8p-121f, 0.0f, 0.0f, 0x1.daf68p-94f, 0x1.3d2868p-17f, 0x1.7cecc2p-62f,
     0x1.86004ap-117f, 0.0f, 0x1.d88caep-121f, 0x1.ac298ep-14f, 0x1.ef53a6p-114f,
     0x1.728d82p-1f, 0.0f, 0.0f, 0x1.0e09f6p-36f, 0x1.673a8cp-53f, 0.0f,
     0x1.019496p-104f, 0.0f, 0.0f, 0.0f, 0x1.ad421cp-103f, 0x1.c6a006p-104f, 0.0f,
     0x1.ac1388p-122f, 0x1.12764cp-31f, 0x1.6efcdep-66f, 0x1.17730ep-31f, 0.0f, 0.0f,
     0x1.55aa2p-47f, 0x1.18a714p-124f, 0.0f, 0.0f, 0x1.492026p-50f, 0x1.bcfe18p-13f,
     0x1.896512p-9f, 0.0f, 0x1.d2a9c6p-94f, 0.0f, 0x1.cef752p-46f, 0x1.4351dep-16f,
     0.0f, 0x1.6a616p-50f, 0x1.c84468p-66f, 0x1.dbbe88p-50f, 0x1.e798ccp-40f, 0.0f,
     0.0f, 0x1.554682p-11f, 0x1.be6cbep-84f, 0x1.e43834p-5f, 0x1.d597a8p-4f,
     0x1.2d948cp-9f, 0x1.30f8c8p-35f, 0x1.391e14p-109f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6fdb1cp-23f, 0.0f, 0x1.00d788p-115f, 0x1.a8a14p-44f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.48aa18p-68f, 0.0f, 0x1.e6a168p-109f, 0.0f, 0.0f, 0x1.1dd5c4p-102f, 0.0f,
     0.0f, 0x1.1c2beep-5f, 0.0f, 0.0f, 0.0f, 0x1.520586p-106f, 0x1.11d06p-10f, 0.0f,
     0x1.d3b564p-31f, 0.0f, 0.0f, 0x1.d594fep-24f, 0.0f, 0.0f, 0.0f, 0x1.9b0a3ep-43f,
     0.0f, 0.0f, 0.0f, 0x1.55ad8ep-95f, 0.0f, 0x1.0b2cc6p-87f, 0.0f, 0x1.b2c18ap-83f,
     0x1.3b7f24p-82f, 0x1.bc3844p-48f, 0x1.5e3a1cp-40f, 0.0f, 0.0f, 0x1.555f94p-84f,
     0x1.901084p-8f, 0.0f, 0x1.8f5606p-113f, 0.0f, 0x1.e62334p-115f, 0.0f,
     0x1.e931c2p-57f, 0.0f, 0.0f, 0x1.aa2d1ap-95f, 0x1.e40c88p-91f, 0x1.7c887cp-35f,
     0.0f, 0x1.d4084ep-3f, 0x1.b79032p-21f, 0.0f, 0x1.238342p-77f, 0x1.931b1cp-115f,
     0.0f, 0x1.dd345ap-84f, 0.0f, 0x1.03dafep-36f, 0.0f, 0.0f, 0x1.98df2cp-8f, 0.0f,
     0.0f, 0x1.b8919ep-76f, 0x1.05384ep-69f, 0.0f, 0x1.3bc3c6p-39f, 0x1.d089ap-5f,
     0x1.4f665cp-110f, 0.0f, 0.0f, 0x1.4d7a4ap-27f, 0.0f, 0.0f, 0.0f, 0x1.72cb9p-82f,
     0x1.9aff12p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.47bf6ep-51f, 0.0f, 0x1.61e0dap-9f,
     0x1.c75916p-31f, 0x1.bd1738p-121f, 0x1.fa09a2p-7f, 0.0f, 0x1.c502p-51f,
     0x1.9db86ep-59f, 0x1.d36562p-45f, 0x1.dd305p-111f, 0.0f, 0x1.461e16p-7f, 0.0f,
     0x1.4379acp-67f, 0.0f, 0x1.781d86p-6f, 0.0f, 0.0f, 0x1.d32c8ap-85f, 0.0f,
     0x1.54123cp-3f, 0.0f, 0x1.9e3684p-65f, 0.0f, 0x1.2c4cb4p-95f, 0.0f,
     0x1.5d7f2ep-50f, 0.0f, 0x1.7ab75p-23f, 0.0f, 0.0f, 0.0f, 0x1.7407b8p-5f,
     0x1.4cabbap-61f, 0.0f, 0.0f, 0x1.46909ep-28f, 0.0f, 0x1.d4297ap-67f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.559994p-47f, 0x1.9f976ap-13f, 0x1.39f6e8p-66f, 0x1.295c7ap-42f,
     0.0f, 0x1.c6e2c8p-24f, 0x1.78f1c8p-26f, 0.0f, 0x1.5d7a5ep-54f, 0x1.c68e66p-32f,
     0.0f, 0.0f, 0x1.af63acp-83f, 0.0f, 0x1.b20436p-44f, 0x1.43eb64p-55f,
     0x1.8bb1cap-81f, 0.0f, 0.0f, 0.0f, 0x1.98757cp-74f, 0x1.8afd22p-114f,
     0x1.92ebbcp-79f, 0x1.550e06p-90f, 0.0f, 0.0f, 0.0f, 0x1.0c8a52p-3f, 0.0f,
     0x1.56232ep-106f, 0.0f, 0.0f, 0.0f, 0x1.3d3b38p-5f, 0x1.040318p-67f,
     0x1.381b08p-19f, 0x1.80c278p-64f, 0.0f, 0x1.87b336p-4f, 0x1.01a152p-108f,
     0x1.5ea95p-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.aea5a6p-126f, 0.0f, 0.0f,
     0x1.b16b52p-80f, 0.0f, 0.0f, 0x1.d34234p-111f, 0x1.d4e6d2p-65f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.45ef32p-33f, 0x1.cdf3c8p-105f, 0x1.d73bf8p-77f, 0x1.3cfebp-30f,
     0x1.594f7ep-54f, 0x1.aa5dacp-78f, 0.0f, 0x1.0a2e7ep-95f, 0.0f, 0.0f, 0.0f,
     0x1.4a23f8p-11f, 0x1.403ecp-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5d2292p-65f, 0.0f,
     0x1.ae9008p-89f, 0x1.01bb7p-34f, 0.0f, 0x1.31e02p-11f, 0x1.e6ccdp-102f, 0.0f,
     0.0f, 0x1.0eadd4p-7f, 0.0f, 0x1.00a0b6p-66f, 0x1.88221p-67f, 0.0f,
     0x1.7a962p-118f, 0.0f, 0x1.0ff0dcp-39f, 0.0f, 0x1.dbcffp-48f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ef928ep-118f, 0.0f, 0.0f, 0x1.85ede2p-95f, 0.0f, 0.0f, 0x1.98d2f2p-33f,
     0.0f, 0.0f, 0.0f, 0x1.90064cp-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.93195cp-58f, 0.0f, 0x1.8aa16ap-105f, 0x1.6ff9d6p-30f, 0.0f, 0.0f,
     0x1.f2aee8p-97f, 0.0f, 0x1.1d92cap-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7abc8ep-71f, 0x1.44cd9ap-26f, 0.0f, 0.0f, 0.0f, 0x1.db6d3cp-52f,
     0x1.361182p-117f, 0.0f, 0x1.f36d88p-116f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6c329ap-106f, 0x1.fdea28p-21f, 0x1.acd8ecp-67f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2852c8p-9f, 0x1.bbbfcp-124f, 0x1.aacbep-25f, 0x1.534f28p-117f,
     0x1.a2c476p-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.393e3cp-86f, 0.0f,
     0x1.564f3p-16f, 0.0f, 0.0f, 0x1.678f6cp-37f, 0.0f, 0x1.2caaf4p-63f,
     0x1.196436p-85f, 0.0f, 0x1.5d54dcp-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9342b8p-68f,
     0.0f, 0.0f, 0.0f, 0x1.091736p-49f, 0.0f, 0x1.96813cp-39f, 0x1.0e9094p-92f, 0.0f,
     0x1.54987cp-80f, 0.0f, 0.0f, 0x1.6bf022p-77f, 0x1.a95696p-85f, 0.0f,
     0x1.eea266p-44f, 0.0f, 0.0f, 0x1.0f7deap-75f, 0x1.952342p-65f, 0.0f, 0.0f,
     0x1.5c4ed8p-48f, 0x1.02ff32p-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.35e4c4p-19f,
     0x1.eb3d6ap-65f, 0x1.709a64p-44f, 0x1.a37668p-100f, 0.0f, 0x1.42623cp-66f,
     0x1.1b5edcp-40f, 0x1.f2054ap-66f, 0.0f, 0.0f, 0x1.5c21acp-107f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.8eec9p-82f, 0.0f, 0.0f, 0.0f, 0x1.49a9dp-98f, 0.0f, 0.0f, 0.0f,
     0x1.cc1912p-102f, 0.0f, 0x1.3672d2p-126f, 0.0f, 0x1.e3cb94p-111f,
     0x1.f1850ep-110f, 0.0f, 0x1.d75d28p-52f, 0x1.e08c06p-23f, 0.0f, 0x1.39c0aap-96f,
     0x1.2c208ep-66f, 0.0f, 0.0f, 0.0f, 0x1.853e6ap-39f, 0x1.4cb054p-33f,
     0x1.664adcp-5f, 0.0f, 0x1.dba444p-66f, 0x1.22e3b2p-107f, 0x1.2cdb84p-121f,
     0x1.8c685ap-37f, 0x1.d66e36p-107f, 0.0f, 0.0f, 0x1.6325c6p-28f, 0x1.7b617cp-113f,
     0.0f, 0x1.4f5c9ep-99f, 0.0f, 0x1.f8909cp-36f, 0x1.b62bcp-124f, 0x1.20d5a6p-62f,
     0.0f, 0.0f, 0x1.427c8ep-116f, 0x1.831b06p-11f, 0x1.4762dp-28f, 0.0f, 0.0f,
     0x1.78224p-11f, 0x1.c8ee68p-111f, 0.0f, 0x1.b5dadep-110f, 0x1.2f7734p-80f, 0.0f,
     0x1.516a94p-36f, 0x1.f6f1b8p-88f, 0.0f, 0.0f, 0x1.3ec1c4p-126f, 0.0f,
     0x1.5ffe8ep-110f, 0x1.5b5ab6p-119f, 0x1.9b655ap-21f, 0x1.3a7d52p-26f,
     0x1.ee623ep-33f, 0.0f, 0x1.c428a2p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.0c3cc2p-44f, 0.0f, 0.0f, 0x1.ac5e76p-21f, 0x1.6d7d9ep-108f, 0.0f, 0.0f,
     0x1.9ae878p-83f, 0.0f, 0x1.8a83e6p-18f, 0.0f, 0x1.cf77a8p-52f, 0.0f, 0.0f,
     0x1.de2db2p-52f, 0.0f, 0x1.1b3656p-46f, 0x1.26c834p-101f, 0x1.b69822p-115f,
     0x1.a6efe8p-64f, 0x1.15876cp-6f, 0x1.a6e63cp-69f, 0x1.801156p-57f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d98248p-92f, 0x1.ad4608p-112f, 0.0f, 0.0f,
     0x1.7efb5cp-82f, 0x1.141b7ap-15f, 0x1.15f24cp-24f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fffdbep-119f, 0x1.c444ecp-23f, 0x1.bffa56p-19f, 0x1.d057c6p-111f,
     0x1.18d348p-89f, 0.0f, 0.0f, 0.0f, 0x1.0024ccp-93f, 0x1.193b84p-27f, 0.0f, 0.0f,
     0x1.e1a676p-83f, 0.0f, 0x1.6d5602p-125f, 0x1.1bd7a2p-17f, 0x1.fb1a02p-108f, 0.0f,
     0x1.af7ccap-106f, 0x1.9ecb5p-105f, 0.0f, 0x1.381a9p-58f, 0.0f, 0x1.2c467ap-124f,
     0.0f, 0x1.bc279p-118f, 0.0f, 0.0f, 0x1.b775d4p-66f, 0x1.0b9a62p-88f,
     0x1.4c7a78p-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2fff08p-60f, 0x1.92eaaap-124f,
     0x1.dac548p-51f, 0x1.2c193ep-103f, 0.0f, 0.0f, 0x1.37d9bap-80f, 0x1.3081aep-10f,
     0x1.8e16d4p-20f, 0x1.a3e19p-59f, 0.0f, 0x1.f8bbap-90f, 0x1.a3e774p-69f, 0.0f,
     0.0f, 0x1.700056p-18f, 0x1.fb45cep-8f, 0.0f, 0.0f, 0.0f, 0x1.cd6a52p-51f,
     0x1.69ca7p-123f, 0x1.fce40ep-14f, 0x1.24263ep-107f, 0.0f, 0x1.87a4a2p-43f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.bd7c14p-92f, 0x1.713742p-53f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.fc27b2p-41f, 0.0f, 0x1.5d7f7ep-106f, 0x1.658f56p-20f, 0.0f,
     0x1.0a6044p-103f, 0.0f, 0.0f, 0x1.ca84aep-88f, 0x1.710e5ap-30f, 0.0f,
     0x1.cb5e88p-115f, 0x1.38e31p-28f, 0x1.8c909ap-32f, 0x1.e8491ap-77f,
     0x1.713044p-28f, 0.0f, 0x1.d68282p-18f, 0.0f, 0x1.8b0bb8p-75f, 0x1.90fedap-10f,
     0.0f, 0x1.cd2304p-36f, 0x1.ba3806p-31f, 0x1.588d08p-60f, 0x1.24a25ap-107f,
     0x1.b52abcp-23f, 0.0f, 0.0f, 0x1.463208p-84f, 0x1.45975ep-97f, 0x1.e4cccap-91f,
     0x1.7b2652p-87f, 0.0f, 0.0f, 0x1.7327bcp-38f, 0.0f, 0.0f, 0x1.b7be9cp-74f, 0.0f,
     0x1.531b4ep-41f, 0x1.9b4a24p-43f, 0x1.82a0a8p-114f, 0.0f, 0.0f, 0.0f,
     0x1.414454p-84f, 0x1.355a84p-44f, 0x1.b60c5p-89f, 0.0f, 0x1.45db78p-15f,
     0x1.d1b482p-25f, 0x1.5a06acp-120f
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
            tmp1 = Sleef_finz_cospif4_u05avx2128(tmp0);
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
    printf("Sleef_finz_cospif4_u05avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_cospif4_u05avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
