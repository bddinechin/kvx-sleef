/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_exp2f8_u10kvx.c --function \
 *     Sleef_finz_exp2f8_u10kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 8 --function-input-vector-size \
 *     8 --bench --no-embedded-bin --target kv3
 *
 */
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float8_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float8_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1008];
static const float external_bench_wrapper_input_table_arg0[1008]  = {
     0x1.853b0ep-14f, 0.0f, 0x1.f72b16p-28f, 0.0f, 0x1.9bb062p-7f, 0.0f,
     0x1.565af6p-6f, 0.0f, 0x1.ffc24cp-56f, 0x1.e01662p-114f, 0.0f, 0x1.c3d5ep-65f,
     0.0f, 0.0f, 0x1.32072ep-20f, 0.0f, 0x1.322a8cp-5f, 0x1.cd2386p-38f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.bce024p-19f, 0x1.3c87dap-25f, 0.0f, 0x1.f0b30cp-56f, 0.0f, 0.0f,
     0x1.35d87ep-70f, 0.0f, 0x1.3c5cc2p-119f, 0.0f, 0.0f, 0x1.ed863ap-64f, 0.0f,
     0x1.ee7beep-96f, 0x1.b14196p-54f, 0.0f, 0x1.0a2b3p-107f, 0x1.569d74p-117f, 0.0f,
     0x1.147948p-76f, 0.0f, 0.0f, 0x1.98d7fp-15f, 0x1.047e44p-54f, 0x1.7cbe76p-8f,
     0x1.7b505ap-82f, 0x1.c9cd88p-123f, 0x1.ecf3a6p-58f, 0.0f, 0x1.10f3ep-110f, 0.0f,
     0x1.9c0c56p-88f, 0.0f, 0x1.b5e8fap-53f, 0.0f, 0.0f, 0x1.eba1a4p-41f,
     0x1.e9cee2p-91f, 0.0f, 0.0f, 0.0f, 0x1.9d9476p-82f, 0x1.fa8d8cp-120f, 0.0f,
     0x1.e16562p-42f, 0.0f, 0.0f, 0x1.ab995p-55f, 0.0f, 0.0f, 0x1.085ee4p-57f,
     0x1.139bd8p-16f, 0.0f, 0x1.b98c3cp-4f, 0.0f, 0.0f, 0.0f, 0x1.a39bc2p-15f,
     0x1.78869ep-84f, 0x1.3687a4p-124f, 0x1.1de55ep-12f, 0x1.ccac58p-16f,
     0x1.22abb4p-73f, 0x1.4b42b6p-113f, 0.0f, 0.0f, 0x1.f1954cp-4f, 0x1.ec0b9ap-80f,
     0x1.c08e88p-50f, 0.0f, 0x1.e9013p-72f, 0x1.295a4cp-27f, 0x1.0cb0a6p-93f, 0.0f,
     0.0f, 0x1.0edbb2p-65f, 0.0f, 0.0f, 0.0f, 0x1.187d6cp-97f, 0.0f, 0x1.47dbf6p-41f,
     0x1.992df4p-8f, 0x1.ab3266p-59f, 0.0f, 0.0f, 0x1.435f54p-40f, 0.0f, 0.0f, 0.0f,
     0x1.ce2884p-19f, 0x1.4c0146p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0b8df4p-78f, 0x1.ed589cp-81f, 0x1.69ae88p-106f, 0x1.9e3ccap-44f, 0.0f, 0.0f,
     0x1.ba0e5ep-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7657d8p-46f, 0.0f, 0.0f, 0.0f,
     0x1.ca00fep-105f, 0x1.0342fcp-124f, 0.0f, 0x1.c6889ep-11f, 0x1.6adb98p-21f, 0.0f,
     0.0f, 0x1.aead28p-120f, 0.0f, 0x1.fc9e94p-12f, 0x1.f3cb6ep-35f, 0x1.d0c21ep-33f,
     0x1.17867ep-64f, 0x1.f6d676p-14f, 0.0f, 0x1.b876e2p-29f, 0x1.a36222p-20f,
     0x1.0ae354p-46f, 0.0f, 0x1.8b1952p-21f, 0.0f, 0x1.6cc926p-68f, 0x1.7a4b5cp-43f,
     0.0f, 0.0f, 0.0f, 0x1.a96254p-13f, 0x1.f8db24p-101f, 0.0f, 0.0f, 0x1.c3fc76p-14f,
     0.0f, 0.0f, 0x1.04d0aep-86f, 0x1.c727ccp-42f, 0.0f, 0x1.6a92fcp-34f, 0.0f, 0.0f,
     0.0f, 0x1.27c7c8p-64f, 0x1.a2a292p-20f, 0x1.7778aep-50f, 0x1.2c111ap-45f, 0.0f,
     0x1.4f8762p-106f, 0x1.1a8188p-68f, 0.0f, 0x1.61f406p-108f, 0.0f,
     0x1.63d74cp-117f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.93bc8cp-86f, 0x1.f00e52p-27f, 0x1.d60aep-46f,
     0.0f, 0.0f, 0x1.0139aep-52f, 0.0f, 0x1.37c114p-43f, 0x1.28e978p-53f,
     0x1.24d402p-6f, 0x1.34631cp-76f, 0.0f, 0x1p0f, 0x1.c9899p-30f, 0x1.3b8a54p-63f,
     0x1.0c1a6ap-77f, 0x1.a842d2p-20f, 0.0f, 0x1.530fc6p-39f, 0x1.fca92cp-41f, 0.0f,
     0.0f, 0x1.31f236p-68f, 0x1.824f7ep-115f, 0x1.d5be92p-53f, 0.0f, 0.0f,
     0x1.b06ddap-35f, 0x1.857418p-108f, 0x1.a9b106p-80f, 0.0f, 0.0f, 0x1.91bec8p-11f,
     0.0f, 0.0f, 0x1.ca4b26p-110f, 0x1.5ed246p-29f, 0x1.1abac8p-27f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.398e26p-69f, 0x1.c86daap-52f, 0x1p0f, 0x1.9612e8p-89f, 0.0f,
     0x1.4265a6p-66f, 0x1.1c2d02p-72f, 0.0f, 0x1.74a398p-104f, 0x1.f3d054p-51f, 0.0f,
     0x1.466dcep-75f, 0x1.05b19ap-108f, 0x1.30a3c4p-71f, 0x1.148af6p-7f,
     0x1.840402p-22f, 0.0f, 0x1.08d55p-13f, 0x1.99abep-6f, 0x1.89dbb4p-121f, 0.0f,
     0.0f, 0.0f, 0x1.ee840ep-54f, 0.0f, 0x1.52975p-126f, 0.0f, 0.0f, 0x1.9fd2e6p-63f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.33583ep-99f, 0.0f, 0x1.7f4382p-95f,
     0x1.e4fa64p-70f, 0x1.3f89a6p-84f, 0.0f, 0.0f, 0x1.dc7ac2p-28f, 0x1.3b57f6p-70f,
     0x1.9156b6p-46f, 0.0f, 0x1.b41342p-87f, 0x1.9ab51cp-17f, 0.0f, 0.0f, 0.0f,
     0x1.df1e5cp-81f, 0.0f, 0x1.977b5ep-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.af6fb8p-69f,
     0x1.9d009cp-13f, 0x1.1ac2ep-1f, 0x1.46f5p-58f, 0x1.62ca76p-110f, 0.0f, 0.0f,
     0.0f, 0x1.b24502p-38f, 0.0f, 0x1.e26d82p-79f, 0.0f, 0x1.d0018cp-92f,
     0x1.8831cep-52f, 0x1.75e99p-89f, 0.0f, 0.0f, 0x1.832f6ap-93f, 0x1.1f07b2p-28f,
     0.0f, 0x1.8516ecp-32f, 0x1.a244acp-70f, 0.0f, 0.0f, 0x1.f0947ap-73f,
     0x1.a50fa4p-49f, 0x1.8be8bp-8f, 0.0f, 0.0f, 0.0f, 0x1.3d80bcp-87f, 0.0f, 0.0f,
     0.0f, 0x1.11757cp-19f, 0x1.1e99p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c65324p-107f,
     0.0f, 0x1.07ec3cp-82f, 0.0f, 0.0f, 0x1.6ef9ecp-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e1ad7cp-78f, 0x1.33ffe2p-114f, 0x1.173082p-87f, 0x1.df1502p-34f,
     0x1.adaf9p-24f, 0x1.935d58p-19f, 0.0f, 0x1.1908cp-115f, 0x1.bb603ap-58f, 0.0f,
     0.0f, 0.0f, 0x1.c7f2eep-87f, 0.0f, 0.0f, 0.0f, 0x1.97c236p-101f, 0.0f, 0.0f,
     0.0f, 0x1.2a1af8p-105f, 0.0f, 0.0f, 0x1.0bc56ap-93f, 0x1.94e77ap-80f,
     0x1.560018p-121f, 0.0f, 0x1.8c3092p-96f, 0.0f, 0x1.38287ap-36f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9a2386p-113f, 0.0f, 0.0f, 0x1.c5b2cep-117f, 0.0f, 0.0f,
     0x1.aba152p-74f, 0.0f, 0.0f, 0.0f, 0x1.58eef8p-75f, 0.0f, 0x1.004a2ap-84f,
     0x1.8ed6acp-92f, 0.0f, 0.0f, 0x1.3e14acp-110f, 0x1.57224p-6f, 0.0f,
     0x1.ffe6eap-124f, 0x1.d3ab44p-37f, 0.0f, 0.0f, 0.0f, 0x1.7db22ap-12f, 0.0f, 0.0f,
     0x1.746126p-70f, 0.0f, 0.0f, 0x1.64b61ep-25f, 0x1.927852p-52f, 0.0f,
     0x1.321438p-6f, 0.0f, 0x1.c65d42p-58f, 0.0f, 0x1.1fa4f6p-97f, 0x1.778fecp-105f,
     0.0f, 0x1.9bcf0cp-48f, 0.0f, 0.0f, 0.0f, 0x1.ce913ep-46f, 0x1.17a3f8p-76f,
     0x1.7d6d46p-48f, 0x1.75759ep-2f, 0x1.194daep-74f, 0x1.5e10acp-52f, 0.0f, 0.0f,
     0.0f, 0x1.9ef2dp-107f, 0.0f, 0x1.cc47aep-22f, 0.0f, 0x1.0bba5p-79f, 0.0f,
     0x1.2d94dp-46f, 0x1.45dccap-33f, 0x1.88115cp-69f, 0.0f, 0x1.db9b3cp-73f,
     0x1.8f54e2p-96f, 0x1.bfbcdap-117f, 0x1.d059ap-95f, 0x1.6abea2p-121f, 0.0f,
     0x1.19ea02p-79f, 0.0f, 0.0f, 0.0f, 0x1.de3484p-57f, 0.0f, 0x1.42061p-68f, 0.0f,
     0x1.315c4p-8f, 0x1.d25cc8p-19f, 0.0f, 0x1.e7b11p-13f, 0x1.d7844ap-39f, 0.0f,
     0x1.758c48p-14f, 0.0f, 0.0f, 0.0f, 0x1.4c7006p-12f, 0.0f, 0x1.3c124p-77f,
     0x1.5dbc02p-65f, 0.0f, 0.0f, 0x1.04086ap-4f, 0.0f, 0x1.28ca3p-8f, 0x1.143e2ep-2f,
     0x1.33ae0ep-95f, 0x1.a148fp-47f, 0x1.db1246p-101f, 0x1.5ddf66p-70f, 0.0f,
     0x1.4ec76ap-89f, 0.0f, 0x1.bd181cp-21f, 0.0f, 0.0f, 0.0f, 0x1.ad8768p-59f,
     0x1.bc58d8p-14f, 0.0f, 0.0f, 0x1.15e334p-97f, 0.0f, 0x1.589bfep-119f, 0.0f,
     0x1.dc510ep-1f, 0.0f, 0x1.e966b2p-117f, 0x1.7d0c48p-5f, 0x1.ec9e32p-68f, 0.0f,
     0x1.b74cf6p-42f, 0x1.4f8db6p-109f, 0x1.22d564p-122f, 0.0f, 0x1.186f2ap-15f,
     0x1.7ca572p-61f, 0x1.b04636p-94f, 0x1.687ed4p-49f, 0.0f, 0x1.a0dap-31f,
     0x1.a29b04p-118f, 0.0f, 0x1.199094p-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8a06p-22f, 0x1.dae04p-109f, 0x1.b14686p-89f, 0.0f, 0x1.07140ep-88f,
     0x1.56b408p-115f, 0.0f, 0.0f, 0x1.04c17ep-38f, 0.0f, 0x1.31718ep-89f,
     0x1.e263a4p-49f, 0.0f, 0.0f, 0x1.4fe408p-125f, 0x1.69f556p-107f, 0x1.97dfap-18f,
     0.0f, 0.0f, 0x1.418022p-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fe07e8p-126f, 0.0f,
     0x1.529cf2p-30f, 0.0f, 0.0f, 0x1.0db6b6p-39f, 0.0f, 0x1.d0027cp-96f, 0.0f,
     0x1.5d5934p-77f, 0.0f, 0.0f, 0.0f, 0x1.753eacp-40f, 0.0f, 0x1.053614p-52f, 0.0f,
     0x1.071ddep-106f, 0x1.58522p-56f, 0.0f, 0x1.22d9aap-49f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ebd1c4p-33f, 0.0f, 0.0f, 0x1.e23a6ep-67f, 0.0f, 0.0f, 0.0f,
     0x1.914572p-67f, 0.0f, 0.0f, 0x1.39643p-85f, 0.0f, 0.0f, 0x1.36f074p-2f,
     0x1.950e64p-78f, 0.0f, 0x1.838838p-51f, 0x1.732838p-31f, 0.0f, 0.0f, 0.0f,
     0x1.e61538p-71f, 0x1.196146p-116f, 0x1.a94ce6p-80f, 0x1.b6f996p-65f,
     0x1.24e55ap-20f, 0x1.7ef764p-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8f3368p-12f,
     0x1.986c9cp-122f, 0.0f, 0x1.33fd0cp-71f, 0x1.c08302p-88f, 0.0f, 0.0f,
     0x1.8f587p-77f, 0.0f, 0.0f, 0x1.92fe6ap-53f, 0.0f, 0x1.5e021ep-23f, 0.0f, 0.0f,
     0x1.e19734p-22f, 0x1.6b3f9p-94f, 0.0f, 0.0f, 0.0f, 0x1.9e67fap-120f,
     0x1.1d2a22p-66f, 0x1.73275ep-105f, 0x1.67c0aap-16f, 0x1.419a26p-81f, 0.0f, 0.0f,
     0x1.c84ef4p-63f, 0x1.4fac52p-2f, 0.0f, 0x1.c310fp-6f, 0.0f, 0x1.f06178p-49f,
     0x1.c06d92p-40f, 0x1.965abep-29f, 0.0f, 0x1.a3e82cp-30f, 0.0f, 0.0f,
     0x1.e80988p-59f, 0.0f, 0x1.df8628p-45f, 0.0f, 0.0f, 0x1.20b82cp-7f,
     0x1.499bb2p-108f, 0.0f, 0x1.25700ap-62f, 0.0f, 0x1.99eab6p-88f, 0x1.7c4b18p-107f,
     0x1.acb176p-108f, 0.0f, 0x1.e1e284p-84f, 0.0f, 0.0f, 0x1.7373e8p-78f, 0x1p0f,
     0x1.0e5ecp-25f, 0x1.893db8p-94f, 0.0f, 0.0f, 0x1.8914eep-57f, 0x1.bd8d06p-2f,
     0.0f, 0x1.fee952p-90f, 0.0f, 0x1.6cbd62p-72f, 0x1.c97eb2p-110f, 0x1.7b0cfap-26f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.074aa4p-67f, 0.0f, 0x1.9d3af4p-117f, 0x1.d8b4c8p-53f,
     0x1.6825eap-54f, 0x1.cbf904p-71f, 0x1.f46c4ap-92f, 0.0f, 0x1.413f3p-85f, 0.0f,
     0.0f, 0.0f, 0x1.3d781p-67f, 0.0f, 0x1.feee14p-61f, 0.0f, 0x1.8467p-34f,
     0x1.dbcdaep-23f, 0.0f, 0x1.020a6ep-119f, 0x1.a07f82p-75f, 0x1.4509dep-103f,
     0x1.b5efdep-32f, 0x1.14f8f4p-85f, 0.0f, 0.0f, 0x1.1cb4b8p-73f, 0x1.568828p-88f,
     0x1.c43928p-119f, 0x1.393eb2p-50f, 0x1.955c46p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.364712p-20f, 0.0f, 0x1.dfc63p-71f, 0x1.817af4p-99f, 0x1.da2c5p-4f,
     0x1.8739a4p-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eba28ep-61f, 0.0f, 0.0f, 0.0f,
     0x1.9e6a46p-103f, 0.0f, 0.0f, 0x1.0709aep-124f, 0.0f, 0x1.efd5b2p-59f, 0.0f,
     0.0f, 0.0f, 0x1.45231p-39f, 0x1.b14d86p-1f, 0x1.0802dap-79f, 0.0f, 0.0f,
     0x1.9957c2p-23f, 0x1.dd9286p-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8324ecp-84f,
     0x1.100bd6p-120f, 0.0f, 0x1.ba688ap-7f, 0x1.153d6ep-38f, 0x1.6608e4p-113f,
     0x1.3c170ep-4f, 0x1.f74586p-124f, 0.0f, 0x1.b4d15ap-11f, 0x1.d8ac12p-25f, 0.0f,
     0x1.27c99cp-115f, 0x1.2968fep-45f, 0x1.88bc56p-113f, 0x1.c2294ep-20f, 0.0f,
     0x1.d97c8p-74f, 0.0f, 0.0f, 0x1.be4c88p-6f, 0.0f, 0x1.ce8586p-57f,
     0x1.8527bep-107f, 0.0f, 0x1.2f7a52p-28f, 0x1.e16966p-37f, 0x1.14fb62p-82f, 0.0f,
     0.0f, 0x1.aac2bcp-88f, 0x1.41f198p-36f, 0x1.c0551ep-28f, 0x1.ac9812p-20f, 0.0f,
     0.0f, 0.0f, 0x1.0b4fd6p-96f, 0x1.1bcd5p-28f, 0x1.bd423ep-89f, 0x1.340ebcp-82f,
     0.0f, 0x1.a2a7e8p-9f, 0x1.870142p-29f, 0.0f, 0.0f, 0.0f, 0x1.7216a6p-47f, 0.0f,
     0x1.fb6772p-21f, 0x1.fddd3p-57f, 0x1.6fc322p-95f, 0x1.6274b4p-3f, 0.0f,
     0x1.162d6cp-19f, 0.0f, 0x1.41fc96p-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5bceccp-119f, 0.0f, 0.0f, 0x1.1223fcp-40f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.94113cp-10f, 0x1.74716ep-38f, 0x1.1f737p-41f, 0x1.8a8114p-96f,
     0x1.de36d2p-14f, 0.0f, 0.0f, 0.0f, 0x1.b8de0ap-1f, 0x1.5b4622p-16f, 0.0f,
     0x1.ade9ccp-47f, 0x1.28b32p-5f, 0.0f, 0.0f, 0.0f, 0x1.05837cp-99f, 0.0f, 0.0f,
     0x1.0627fcp-95f, 0x1.ca37b6p-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d8988cp-15f,
     0.0f, 0.0f, 0.0f, 0x1.f73342p-37f, 0x1.718a76p-110f, 0x1.d0a01ap-103f,
     0x1.2af9e2p-72f, 0x1.8f616cp-60f, 0.0f, 0.0f, 0x1.50d128p-111f, 0.0f, 0.0f, 0.0f,
     0x1.67225p-121f, 0x1.21a43p-123f, 0x1.78254ap-86f, 0.0f, 0x1.048c7p-117f, 0.0f,
     0.0f, 0x1.a615dap-53f, 0x1.30792p-109f, 0x1.67beacp-31f, 0.0f, 0x1.7bae92p-113f,
     0x1.2dcf28p-28f, 0.0f, 0x1.10beccp-121f, 0.0f, 0x1.9f35ccp-23f, 0.0f, 0.0f,
     0x1.8a4e22p-4f, 0x1.ed3ebep-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bd4e98p-9f,
     0.0f, 0x1.bf4c78p-38f, 0.0f, 0x1.075106p-114f, 0x1.36b0c8p-125f,
     0x1.b6c754p-110f, 0x1.9f8352p-81f, 0.0f, 0x1.40b664p-117f, 0.0f, 0.0f,
     0x1.eb8186p-87f, 0.0f, 0.0f, 0.0f, 0x1.a6f89p-112f, 0x1.694fe4p-107f,
     0x1.4a0034p-52f, 0.0f, 0x1.1ec15cp-101f, 0.0f, 0.0f, 0x1.788c0ap-101f, 0.0f,
     0x1.e33516p-71f, 0.0f, 0.0f, 0x1.69c02ap-78f, 0x1.5e80d4p-69f, 0.0f,
     0x1.b46794p-38f, 0x1.261eeap-51f, 0.0f, 0x1.2eb7e6p-52f, 0x1.afb4fep-80f,
     0x1.85530cp-81f, 0x1.ec676ap-47f, 0.0f, 0.0f, 0x1.5192aap-85f, 0x1.ce5fd4p-114f,
     0.0f, 0x1.f4597p-33f, 0x1.45b9aep-12f, 0x1.982766p-44f, 0.0f, 0.0f,
     0x1.7b8c02p-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e2de24p-120f, 0.0f, 0.0f, 0.0f,
     0x1.9bedc6p-57f, 0.0f, 0.0f, 0x1.1ee516p-82f, 0x1.56435ep-79f, 0x1.4085a2p-4f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.6b7dbp-110f, 0x1.b4b7aep-26f, 0x1.b712fcp-26f,
     0x1.d0e2fap-49f, 0x1.4557e2p-23f, 0.0f, 0x1.f00f6ap-63f, 0.0f, 0x1.1551ecp-118f,
     0.0f, 0x1.11ab16p-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.582446p-68f, 0.0f,
     0x1.d41f7cp-49f, 0.0f, 0x1.8427b2p-77f, 0.0f, 0.0f, 0x1.986bdcp-72f,
     0x1.faa0fep-43f, 0.0f, 0x1.ce734p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.32c3f6p-4f, 0x1.de0ed4p-79f, 0x1.442cdp-115f, 0x1.404168p-26f,
     0x1.6c7b64p-119f, 0.0f, 0.0f, 0x1.6c4376p-48f, 0.0f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_float8_t global_bench_acc;
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
        ml_float8_t local_acc;
        int32_t i;
        ml_float8_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1008));){
            ml_float8_t tmp0;
            ml_float8_t tmp1;
            ml_float8_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_float8_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            tmp1 = Sleef_finz_exp2f8_u10kvx(tmp0);
            memcpy(((ml_float8_t*)(external_bench_wrapper_output_table+ i)), &(tmp1), 32);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(8);
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
    cpe_measure = id_tmp / 10080000.0;
    printf("Sleef_finz_exp2f8_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_finz_exp2f8_u10kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
