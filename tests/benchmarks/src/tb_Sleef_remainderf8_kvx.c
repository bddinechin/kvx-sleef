/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_remainderf8_kvx.c --function Sleef_remainderf8_kvx \
 *     --arity 2 --headers sleef.h,ml_support_lib.h --input-formats \
 *     binary32,binary32 --vector-size 8 --function-input-vector-size 8 \
 *     --bench --no-embedded-bin --target kv3
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
     0x1.97a0dep-79f, 0.0f, 0.0f, 0.0f, 0x1.63dbc8p-107f, 0x1.dc499ep-6f,
     0x1.7b84dcp-93f, 0.0f, 0.0f, 0x1.dbffe4p-80f, 0x1.dd51fp-53f, 0.0f, 0.0f,
     0x1.fff82cp-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d0f61ep-79f, 0.0f, 0.0f,
     0x1.e425aep-85f, 0.0f, 0.0f, 0x1.7eb028p-66f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a3499p-30f, 0x1.35448cp-7f, 0.0f, 0x1.cc7a1ap-79f, 0x1.68018p-54f,
     0x1.042a08p-46f, 0x1.8eb87p-21f, 0.0f, 0x1.fe21ep-108f, 0.0f, 0x1.b0621p-105f,
     0x1.407efap-95f, 0x1.103b74p-60f, 0.0f, 0x1.b1a872p-30f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.041aecp-94f, 0x1.d8bf7ep-43f, 0.0f, 0.0f, 0.0f, 0x1.266f0ap-98f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.8e0c94p-87f, 0x1.c4e66p-106f, 0.0f, 0.0f, 0x1.1894ep-103f,
     0.0f, 0x1.c41d0ap-109f, 0x1.e3e218p-68f, 0.0f, 0x1.1c85acp-31f, 0x1.b0cd62p-106f,
     0.0f, 0.0f, 0.0f, 0x1.2be188p-57f, 0x1.46ecd6p-95f, 0x1.defe3cp-113f,
     0x1.988ecep-64f, 0.0f, 0.0f, 0x1.e0aa2cp-19f, 0x1.9df692p-85f, 0.0f,
     0x1.da00bcp-43f, 0x1.f60abp-56f, 0.0f, 0x1.c2a162p-116f, 0.0f, 0.0f, 0.0f,
     0x1.d560e4p-30f, 0.0f, 0x1.a3f8d8p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5d65f4p-14f, 0.0f, 0.0f, 0x1.eb533p-84f, 0.0f, 0.0f, 0x1.6a00cap-34f, 0.0f,
     0x1.73962cp-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cf881ap-72f, 0x1.f6eabap-60f,
     0x1.72ffbp-73f, 0x1.b9300ap-69f, 0.0f, 0x1.3104a6p-97f, 0.0f, 0x1.32d3e4p-93f,
     0x1.3d2a22p-10f, 0.0f, 0x1.536b9ep-108f, 0.0f, 0x1.6b7308p-115f, 0.0f,
     0x1.8a095p-11f, 0.0f, 0.0f, 0x1.5ce846p-113f, 0.0f, 0.0f, 0x1.c8822ep-65f, 0.0f,
     0.0f, 0x1.8f3736p-82f, 0x1.089772p-55f, 0.0f, 0x1.e2441p-113f, 0x1.66f0f8p-48f,
     0x1.78960cp-119f, 0x1.9e12dp-39f, 0.0f, 0x1.51c4acp-36f, 0.0f, 0x1.d8bfdp-73f,
     0x1.c3223ep-19f, 0x1.cf24d8p-55f, 0.0f, 0.0f, 0.0f, 0x1.c95dc6p-90f, 0.0f,
     0x1.6cec24p-5f, 0.0f, 0x1.4c0b9p-88f, 0x1.f5aedp-16f, 0.0f, 0x1.6c6fbep-22f,
     0.0f, 0.0f, 0x1.25cbf8p-19f, 0.0f, 0x1.523aap-111f, 0x1.e3e718p-23f,
     0x1.c684aap-8f, 0.0f, 0.0f, 0x1.b0ecd6p-81f, 0x1.427e2ep-62f, 0x1.adddfap-18f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.1b0b6ap-21f, 0x1.d5f6d8p-52f, 0.0f, 0.0f,
     0x1.5845d4p-22f, 0.0f, 0.0f, 0.0f, 0x1.e39a5ap-26f, 0x1.35a49ep-84f, 0.0f, 0.0f,
     0.0f, 0x1.d54e8ep-72f, 0x1.1fc526p-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.852e1cp-36f, 0x1.38a95ap-97f, 0x1.521034p-22f, 0x1.8c6702p-80f,
     0x1.b36c9p-67f, 0x1.ed952p-51f, 0x1.78ef9p-119f, 0.0f, 0x1.d3e7eap-125f,
     0x1.fe0a04p-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.67eaeap-69f, 0x1.d2da42p-16f,
     0x1.3a3a74p-74f, 0x1.c0701p-99f, 0.0f, 0x1.a7c612p-118f, 0x1.223cc8p-94f, 0.0f,
     0x1.4bce08p-57f, 0x1.ba7ce6p-111f, 0.0f, 0x1.f1e614p-121f, 0x1.9ffba2p-9f, 0.0f,
     0x1.7ba91ap-113f, 0x1.812f8p-74f, 0.0f, 0x1.51964ap-64f, 0x1.e6a0aep-68f,
     0x1.18cca8p-52f, 0x1.5b86b2p-82f, 0x1.59cdf2p-28f, 0x1.ca3ccep-75f, 0.0f, 0x1p0f,
     0.0f, 0x1.383c78p-103f, 0x1.35166ap-80f, 0.0f, 0x1.a60df6p-107f, 0.0f,
     0x1.8a7b48p-77f, 0x1.502402p-23f, 0.0f, 0.0f, 0.0f, 0x1.e86fep-107f, 0.0f,
     0x1.63365ap-8f, 0x1.c40e62p-9f, 0.0f, 0.0f, 0x1.8b6798p-11f, 0x1.75c75p-52f,
     0x1.004714p-54f, 0x1.7eaf98p-58f, 0x1.52f3c4p-72f, 0x1.759a1ep-64f,
     0x1.68df6p-103f, 0.0f, 0.0f, 0x1.50f43cp-42f, 0.0f, 0.0f, 0x1.95edd2p-116f,
     0x1.62f39p-99f, 0x1.97b8b6p-59f, 0x1.6b9e26p-108f, 0.0f, 0x1.d0a23ap-109f,
     0x1.6b5408p-65f, 0.0f, 0x1.673a84p-69f, 0x1.e0b46p-31f, 0.0f, 0.0f, 0.0f,
     0x1.4b57a4p-66f, 0.0f, 0.0f, 0x1.24443ep-21f, 0.0f, 0.0f, 0.0f, 0x1.7b11e8p-123f,
     0x1.ea34ccp-91f, 0x1.ad5cbep-117f, 0x1.f71854p-10f, 0x1.d4fa18p-74f, 0.0f,
     0x1.d9009ap-49f, 0x1.bfc2fep-74f, 0.0f, 0x1.08d84ep-53f, 0x1.52927ap-15f, 0.0f,
     0x1.f4d906p-110f, 0.0f, 0.0f, 0x1.269228p-107f, 0.0f, 0x1.f4d0fp-27f,
     0x1.206608p-66f, 0x1.a69c44p-121f, 0x1.b748dep-54f, 0x1.470dcep-74f,
     0x1.7dfadcp-101f, 0.0f, 0x1.1c4bf4p-126f, 0x1.6c5848p-13f, 0.0f, 0.0f,
     0x1.ee6cep-67f, 0x1.fac104p-6f, 0x1.e27a3cp-12f, 0.0f, 0x1.00778ap-30f,
     0x1.414b2ep-51f, 0x1.5b9592p-87f, 0.0f, 0x1.a2fa9cp-13f, 0x1.e50dc6p-35f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.028e68p-11f, 0.0f, 0.0f, 0.0f, 0x1.e8e8f4p-32f,
     0.0f, 0x1.71a14ap-78f, 0.0f, 0.0f, 0x1.efea08p-107f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b9fc58p-68f, 0x1.f440fcp-102f, 0.0f, 0.0f, 0x1.f317eap-62f, 0x1.b3097ap-68f,
     0x1.b7fff8p-54f, 0x1.b05e34p-122f, 0.0f, 0.0f, 0x1.69be56p-67f, 0.0f,
     0x1.7db1fap-4f, 0x1.6d80b4p-55f, 0x1.d667f8p-103f, 0.0f, 0x1.e06c38p-20f, 0.0f,
     0.0f, 0x1.0bc3c8p-30f, 0x1.a0e868p-45f, 0.0f, 0x1.d2d332p-88f, 0.0f, 0.0f,
     0x1.1fc6c4p-25f, 0.0f, 0x1.93b898p-98f, 0.0f, 0.0f, 0.0f, 0x1.487d6p-59f,
     0x1.3b14fcp-53f, 0x1.1381bap-108f, 0x1.92c2p-87f, 0.0f, 0.0f, 0x1.4dea7ep-104f,
     0x1.93c952p-61f, 0.0f, 0.0f, 0x1.a3e606p-46f, 0.0f, 0x1.924698p-68f, 0.0f, 0.0f,
     0x1.039f38p-6f, 0.0f, 0x1.e7566ep-12f, 0.0f, 0.0f, 0x1.ece7e8p-115f, 0.0f,
     0x1.4147c2p-35f, 0x1.022c36p-19f, 0.0f, 0x1.5f9a9ep-21f, 0x1.c50afp-20f,
     0x1.4f71eap-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.37a06cp-117f,
     0x1.a2d4dp-80f, 0x1.435678p-105f, 0.0f, 0.0f, 0x1.c60a8p-32f, 0.0f, 0.0f,
     0x1.0b79eap-46f, 0x1.6b2a1p-74f, 0x1.f755a8p-72f, 0.0f, 0x1.a431a8p-8f,
     0x1.b2bf74p-121f, 0x1.193a4ap-21f, 0x1.90e822p-79f, 0.0f, 0.0f, 0x1.3080acp-23f,
     0x1.6b4cc2p-84f, 0.0f, 0.0f, 0.0f, 0x1.3f8528p-120f, 0x1.d96e4ep-16f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f63b72p-115f, 0x1.789266p-87f, 0.0f, 0x1.43119ap-40f, 0.0f,
     0.0f, 0x1.b2bee6p-62f, 0.0f, 0x1.bfa43p-19f, 0x1.fca296p-57f, 0x1.9cfffep-94f,
     0x1.4f9a6cp-30f, 0x1.2f03f6p-105f, 0.0f, 0.0f, 0x1.aa3c62p-16f, 0.0f,
     0x1.ea9eap-54f, 0x1.4149ap-31f, 0x1.43cf8ep-44f, 0x1.626588p-34f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f2786cp-4f, 0x1.0ab6aep-37f,
     0x1.f0b042p-56f, 0.0f, 0.0f, 0x1.dab9a6p-101f, 0x1.527806p-87f, 0x1.68439ap-71f,
     0.0f, 0.0f, 0.0f, 0x1.e18c32p-101f, 0x1.cfd234p-59f, 0.0f, 0.0f, 0.0f,
     0x1.5a292p-75f, 0x1p0f, 0x1.34aa2ep-94f, 0.0f, 0.0f, 0x1.767c86p-98f,
     0x1.5b0ab2p-116f, 0x1.f2f8d6p-37f, 0.0f, 0x1.788c3cp-24f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.625cd4p-103f, 0.0f, 0.0f, 0x1.dfbe26p-99f, 0x1.a05ac6p-83f, 0.0f,
     0x1.99bf06p-90f, 0x1.77f608p-63f, 0x1.70eb5ap-75f, 0x1.78e96ap-8f,
     0x1.0de802p-20f, 0.0f, 0.0f, 0x1.9c2a7p-100f, 0x1.c3bc54p-66f, 0.0f, 0.0f,
     0x1.4b3376p-60f, 0.0f, 0.0f, 0x1.81a626p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f32fc2p-21f, 0x1.c28b7cp-110f, 0x1.f0065p-41f, 0.0f, 0x1.6b3d54p-59f, 0.0f,
     0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a1accep-118f,
     0x1.585f7cp-46f, 0.0f, 0.0f, 0.0f, 0x1.e01562p-68f, 0x1.775968p-95f, 0.0f, 0.0f,
     0x1.79a8a8p-90f, 0.0f, 0.0f, 0.0f, 0x1.614608p-107f, 0x1.3ad728p-76f, 0.0f,
     0x1.e7d7dcp-120f, 0.0f, 0x1.388428p-29f, 0x1.10652ap-120f, 0x1.e8d696p-19f,
     0x1.3395aap-56f, 0.0f, 0x1.4dedd6p-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.970694p-95f,
     0x1.0f1cb8p-66f, 0x1.e1e26ep-55f, 0x1.fe0f78p-24f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.353ebp-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a3c8fp-95f, 0.0f, 0.0f,
     0x1.b24a9ap-21f, 0x1.371452p-42f, 0x1.c1d6d2p-75f, 0.0f, 0x1.4f6d5cp-76f,
     0x1.86e0d4p-3f, 0x1.83d4f2p-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6b0b36p-45f,
     0x1.6d34bap-116f, 0.0f, 0.0f, 0x1.23d0b4p-103f, 0.0f, 0.0f, 0x1.d5293p-102f,
     0.0f, 0x1.37d30cp-93f, 0.0f, 0.0f, 0.0f, 0x1.11b9dep-9f, 0.0f, 0x1.d3454cp-122f,
     0x1.1188fcp-65f, 0x1.007ff2p-70f, 0.0f, 0x1.f3fd3p-118f, 0.0f, 0x1.66c70ap-14f,
     0.0f, 0x1.950a1ep-112f, 0.0f, 0x1.f2db9p-125f, 0.0f, 0x1.5ed4ecp-105f, 0.0f,
     0.0f, 0x1.cde88ap-94f, 0.0f, 0.0f, 0.0f, 0x1.aabe0cp-101f, 0.0f, 0.0f,
     0x1.f36fdp-108f, 0.0f, 0x1.3ba0d6p-67f, 0x1.b97a6ap-110f, 0x1.bef802p-95f, 0.0f,
     0.0f, 0x1.bb5494p-68f, 0x1.3dac1ep-39f, 0.0f, 0.0f, 0x1p0f, 0.0f,
     0x1.f05398p-115f, 0x1.bb7718p-47f, 0.0f, 0x1.58e3acp-36f, 0.0f, 0.0f, 0.0f,
     0x1.ca1eb6p-60f, 0x1.4dfb0ep-12f, 0x1.f7a8b4p-14f, 0x1.c6b5fcp-57f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.cf544cp-72f, 0x1.691b06p-81f, 0.0f, 0.0f, 0x1.f917e6p-91f,
     0x1.9583eep-62f, 0x1.977ee2p-13f, 0x1.d0032ep-50f, 0x1.926072p-95f,
     0x1.37484cp-40f, 0x1.504d3ep-113f, 0.0f, 0.0f, 0x1.8b225ep-115f, 0x1.b9ff0ep-94f,
     0x1.07cefcp-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bf64d6p-91f, 0x1.0fb916p-17f,
     0x1.c8ed4ap-26f, 0x1.9a9f74p-81f, 0x1.fbe21p-98f, 0.0f, 0x1.bd748ep-35f, 0.0f,
     0x1.81df2ep-80f, 0.0f, 0.0f, 0.0f, 0x1.324856p-81f, 0.0f, 0x1.02b54ap-1f,
     0x1.c02cfep-9f, 0.0f, 0.0f, 0x1.b9dfe8p-19f, 0x1.260dcap-113f, 0x1.1124bap-97f,
     0x1.efa4c6p-80f, 0x1.330b38p-64f, 0x1.a1f682p-20f, 0x1.7861eep-51f, 0.0f, 0.0f,
     0.0f, 0x1.bfc4cp-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.24f2b2p-40f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.d0408cp-96f, 0x1.eeee4ap-33f, 0.0f, 0x1.e64f2ap-30f, 0x1.dd2684p-86f,
     0.0f, 0.0f, 0x1.a71214p-28f, 0.0f, 0x1.5ed0ccp-14f, 0x1.73a80cp-8f, 0.0f,
     0x1.0c3f3cp-11f, 0x1.818814p-76f, 0x1.5ce9dcp-97f, 0x1.44e238p-11f, 0.0f,
     0x1.8a6c1cp-32f, 0x1.6850b6p-5f, 0.0f, 0x1.e91412p-111f, 0x1.48b1d8p-41f,
     0x1.a12fecp-114f, 0.0f, 0x1.366b64p-118f, 0x1.386cc2p-57f, 0.0f,
     0x1.7bdbf4p-113f, 0.0f, 0x1.9d829cp-81f, 0.0f, 0.0f, 0.0f, 0x1.0dd58p-58f, 0.0f,
     0.0f, 0.0f, 0x1.e226f2p-35f, 0.0f, 0x1.c542e4p-103f, 0.0f, 0.0f, 0.0f,
     0x1.4dfe2p-72f, 0x1.583c12p-90f, 0x1.10a15ap-123f, 0.0f, 0x1.7b1af2p-59f,
     0x1.55b636p-81f, 0x1.c81f7p-28f, 0.0f, 0.0f, 0x1.3077cap-121f, 0x1.5efeb2p-118f,
     0.0f, 0x1.a165f6p-115f, 0x1.a3744p-52f, 0x1.6a1cf2p-67f, 0.0f, 0.0f,
     0x1.4363c8p-38f, 0x1.68ce26p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c8127ap-31f, 0.0f,
     0x1.23853cp-115f, 0x1.efe474p-74f, 0.0f, 0.0f, 0x1.262972p-124f, 0.0f,
     0x1.fd03d6p-96f, 0.0f, 0x1.c0e052p-87f, 0x1.25d268p-37f, 0x1.40d1b2p-13f, 0.0f,
     0x1.6baa9ap-66f, 0.0f, 0.0f, 0x1.829ff2p-97f, 0.0f, 0x1.e20eecp-7f, 0.0f,
     0x1.458bc8p-23f, 0x1.f34fc2p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.74c6ccp-79f,
     0x1.0c570ap-2f, 0.0f, 0x1.80d39p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.659344p-95f, 0.0f, 0x1.e3055ep-66f, 0x1.e76d04p-90f, 0x1.f5591p-57f, 0.0f,
     0.0f, 0x1.eb8348p-46f, 0.0f, 0x1.8eea26p-64f, 0x1.ff5c3ap-29f, 0x1.9b9726p-50f,
     0x1.9bce5cp-46f, 0x1.3c912p-77f, 0.0f, 0x1.29fb3p-31f, 0x1.d20988p-96f, 0.0f,
     0x1.1c5ef6p-120f, 0x1.53bb7ap-91f, 0x1.4eb0bp-48f, 0x1.4c89dcp-97f, 0.0f,
     0x1.e87376p-13f, 0x1.879aep-84f, 0.0f, 0x1.a22362p-76f, 0.0f, 0x1.85f302p-102f,
     0x1.3acd94p-19f, 0.0f, 0x1.24b174p-71f, 0.0f, 0.0f, 0x1.9d79bp-49f, 0.0f, 0.0f,
     0x1.eccc2cp-40f, 0x1.69b76ap-73f, 0.0f, 0x1.d5da38p-13f, 0x1.30790cp-62f,
     0x1.85f78p-102f, 0.0f, 0x1.3e9468p-94f, 0x1.45a38ep-51f, 0.0f, 0.0f, 0.0f,
     0x1.3c7146p-53f, 0x1.d9ec22p-46f, 0.0f, 0x1.d8e02ap-40f, 0.0f, 0.0f, 0.0f,
     0x1.54d3a8p-15f, 0x1.2e76b4p-25f, 0x1.f3b22ep-33f, 0x1.0f3b64p-63f,
     0x1.872992p-88f, 0x1.61cd9ep-101f, 0.0f, 0x1.681516p-75f, 0x1.a4c8a8p-13f,
     0x1.4e368cp-86f, 0.0f, 0x1.ffaeeep-22f, 0.0f, 0.0f, 0.0f, 0x1.ad3b8cp-67f, 0.0f,
     0x1.bda6cap-102f, 0x1.f6cc0ap-88f, 0x1.5258e8p-36f, 0.0f, 0x1.d9b94ap-78f, 0.0f,
     0x1.96dc8ep-56f, 0.0f, 0.0f, 0x1.54d1ep-115f, 0x1.e9a74p-91f, 0.0f, 0.0f,
     0x1.51e94p-110f, 0.0f, 0x1.cf11b4p-60f, 0x1.33a04p-18f, 0.0f, 0x1.ad373p-106f,
     0x1.8aba6ep-24f, 0.0f, 0.0f, 0.0f, 0x1.90a96ep-31f, 0.0f, 0x1.8a6e2cp-38f, 0.0f,
     0.0f, 0x1.4d7618p-99f, 0.0f, 0x1.f5df96p-1f, 0.0f, 0x1.283e3cp-31f,
     0x1.fdccep-35f, 0.0f, 0.0f, 0x1.3ebd56p-67f, 0x1.ff68f8p-87f, 0.0f,
     0x1.85790cp-93f, 0x1.3d8402p-52f, 0x1.4ae97p-68f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3d7f88p-35f, 0.0f, 0x1.ee2a96p-26f, 0x1.0f4f0cp-124f, 0.0f, 0.0f,
     0x1.c765acp-52f, 0x1.5bc21ep-69f, 0.0f, 0.0f, 0x1.ceef9p-68f, 0x1.555278p-5f,
     0x1.704c62p-6f, 0.0f, 0.0f, 0.0f, 0x1.fef6d2p-31f, 0x1.d20184p-81f,
     0x1.f8d6dp-81f, 0.0f, 0.0f, 0x1.597ddcp-111f, 0x1.f56734p-66f, 0.0f,
     0x1.b953p-34f, 0.0f, 0.0f, 0x1.1ece9ap-56f, 0x1.f05306p-4f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.d8361ap-91f, 0.0f, 0.0f, 0.0f, 0x1.f1a95cp-41f, 0.0f, 0.0f,
     0x1.da3f68p-103f, 0x1.bafe8ep-61f, 0.0f, 0x1.80d03ep-116f, 0x1.4d4016p-42f,
     0x1.7cf58ap-81f, 0.0f, 0x1.e7b056p-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.42a32cp-122f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.1ef0cep-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.0211ap-19f, 0x1.75ff66p-121f
};
static const float external_bench_wrapper_input_table_arg1[1008]  = {
     0x1.2dd02p-10f, 0x1.e47dd4p-37f, 0x1.145474p-126f, 0x1.2fd5aap-66f, 0.0f,
     0x1.9ead9ep-6f, 0x1.e286a2p-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.08404ep-60f,
     0x1.fb0c34p-79f, 0x1.f8d8fp-42f, 0x1.5d7fb2p-9f, 0x1.83be68p-122f, 0.0f, 0.0f,
     0.0f, 0x1.1cf88ap-38f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.4a65b6p-87f, 0.0f, 0.0f,
     0x1.40d53cp-51f, 0x1.3373a2p-100f, 0.0f, 0x1.ff2644p-31f, 0x1.76a1fp-101f,
     0x1.48cb98p-110f, 0.0f, 0.0f, 0.0f, 0x1.f2f51cp-110f, 0.0f, 0x1.d61972p-18f,
     0x1.d56262p-98f, 0.0f, 0.0f, 0.0f, 0x1.8642c8p-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.73b018p-79f, 0x1.95b62cp-14f, 0x1.c550e6p-71f, 0x1.cb1ce2p-58f,
     0x1.222e5p-1f, 0x1.b19b04p-43f, 0.0f, 0x1.0ea9eep-72f, 0x1.8d5ff2p-105f, 0.0f,
     0x1.70d108p-67f, 0.0f, 0.0f, 0.0f, 0x1.46a30ep-7f, 0.0f, 0.0f, 0x1.64645cp-22f,
     0.0f, 0.0f, 0.0f, 0x1.eb3e7ap-14f, 0.0f, 0x1.2f3f8p-91f, 0x1.5285aap-22f,
     0x1.4583d2p-50f, 0.0f, 0.0f, 0x1.6a184ap-47f, 0x1.cf529ap-38f, 0x1.f1019p-7f,
     0.0f, 0x1.4cc602p-1f, 0.0f, 0.0f, 0x1.c03f2p-27f, 0x1.4d43b8p-31f,
     0x1.77529ap-18f, 0x1.6116a4p-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c568a4p-8f, 0.0f,
     0.0f, 0x1.cb1732p-104f, 0.0f, 0.0f, 0x1.b9b446p-86f, 0x1.0d0754p-13f,
     0x1.c33412p-24f, 0.0f, 0.0f, 0x1.ec556ep-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ad584p-1f, 0.0f, 0.0f, 0x1.8b692p-116f, 0.0f, 0.0f, 0x1.fd6fd2p-73f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.3c1692p-21f, 0.0f, 0x1.d95234p-23f, 0.0f, 0x1.dae832p-2f,
     0.0f, 0x1.7b1262p-10f, 0.0f, 0.0f, 0x1.5ac57p-10f, 0.0f, 0x1.f36b18p-107f,
     0x1.ba532ep-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.92932ap-113f, 0.0f,
     0x1.e91f5p-24f, 0.0f, 0x1.addce4p-111f, 0x1.f0225p-46f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.c2714p-27f, 0x1.08599p-89f, 0.0f, 0.0f, 0x1.ca7d42p-73f,
     0x1.9d151cp-54f, 0.0f, 0.0f, 0x1.be52cep-38f, 0x1.6583b4p-16f, 0.0f, 0.0f,
     0x1.6c1aa2p-75f, 0x1.e552dp-93f, 0.0f, 0x1.e8d404p-5f, 0x1.9fab1ap-5f,
     0x1.64446cp-62f, 0.0f, 0.0f, 0.0f, 0x1.5c1f0cp-28f, 0.0f, 0x1.bdba1p-73f, 0.0f,
     0.0f, 0x1.50101ap-59f, 0x1.8bf67ep-5f, 0x1.52e2eep-99f, 0x1.a7618ep-53f,
     0x1.f3486ep-20f, 0.0f, 0.0f, 0x1.2eb01cp-5f, 0.0f, 0x1.7e7004p-50f, 0.0f,
     0x1.49675ap-105f, 0.0f, 0.0f, 0.0f, 0x1.6a657ep-86f, 0.0f, 0.0f, 0x1.185d02p-82f,
     0.0f, 0.0f, 0.0f, 0x1.7d5db4p-98f, 0x1.ca37bap-21f, 0.0f, 0x1.0e3888p-22f,
     0x1.c6f358p-62f, 0x1.17ea14p-48f, 0.0f, 0.0f, 0x1.695a3ep-55f, 0x1.11652p-113f,
     0.0f, 0x1.90e074p-116f, 0.0f, 0x1.b92826p-34f, 0.0f, 0.0f, 0x1.5efff8p-41f, 0.0f,
     0x1.ea49f2p-78f, 0.0f, 0x1.c20a94p-31f, 0x1.04e866p-4f, 0.0f, 0x1.185cb8p-62f,
     0x1.643cb6p-44f, 0x1.bca8bap-126f, 0.0f, 0.0f, 0x1.9babep-59f, 0x1.76df06p-114f,
     0x1.5780aep-27f, 0.0f, 0.0f, 0x1.e5af82p-78f, 0.0f, 0.0f, 0x1.748a66p-93f,
     0x1.c4de7cp-80f, 0x1.03299ap-8f, 0x1.d381acp-43f, 0x1.0f6488p-39f, 0.0f, 0.0f,
     0.0f, 0x1.bc570ap-108f, 0.0f, 0.0f, 0.0f, 0x1.b3946cp-44f, 0x1.b51ae2p-80f,
     0x1.eae5bp-90f, 0.0f, 0x1.41cbb6p-10f, 0.0f, 0.0f, 0x1.fcaf1ap-31f,
     0x1.012c52p-58f, 0.0f, 0x1.13c592p-119f, 0.0f, 0.0f, 0x1.8ba5e8p-34f,
     0x1.b3c13ep-14f, 0.0f, 0x1.c5deecp-87f, 0x1.aad56cp-9f, 0.0f, 0.0f,
     0x1.3be928p-43f, 0x1.3f1328p-54f, 0x1.7c50a6p-85f, 0.0f, 0.0f, 0.0f,
     0x1.ab6a1cp-86f, 0x1.872ec8p-103f, 0.0f, 0x1.3d0ce6p-47f, 0x1.c57632p-48f, 0.0f,
     0x1.19e834p-27f, 0x1.851632p-69f, 0.0f, 0.0f, 0x1.85fedap-82f, 0.0f,
     0x1.b8d6e8p-7f, 0x1.f59b1ep-49f, 0.0f, 0x1.ad4362p-73f, 0.0f, 0x1.36d598p-5f,
     0x1.8eaedp-12f, 0.0f, 0x1.2fdebcp-126f, 0x1.9f642p-91f, 0x1.cf0e7p-24f, 0.0f,
     0.0f, 0x1.9f326ap-34f, 0.0f, 0x1.e1d89ap-69f, 0x1.d17a28p-94f, 0x1.22b4d8p-52f,
     0.0f, 0.0f, 0.0f, 0x1.200046p-67f, 0x1.6137ep-70f, 0.0f, 0x1.7050c4p-64f, 0.0f,
     0x1.2553a4p-55f, 0.0f, 0.0f, 0.0f, 0x1.8a0074p-123f, 0.0f, 0.0f,
     0x1.c70fd8p-112f, 0.0f, 0x1.16d34ap-97f, 0.0f, 0x1.f0810cp-63f, 0.0f,
     0x1.5d3648p-3f, 0x1.028e0ep-121f, 0x1.b5586p-87f, 0.0f, 0x1.5e77a6p-46f, 0.0f,
     0x1.440454p-66f, 0x1.718cc2p-6f, 0x1.429ecp-17f, 0x1.a1e8dep-114f, 0.0f,
     0x1.b587fcp-59f, 0.0f, 0.0f, 0x1.9c2f7ap-49f, 0x1.3b43a6p-125f, 0x1.f67634p-29f,
     0x1.8346ap-16f, 0.0f, 0.0f, 0x1.3c596ap-63f, 0.0f, 0x1.1201dap-104f, 0.0f,
     0x1.53e04cp-61f, 0x1.dbddc6p-105f, 0.0f, 0x1.30be92p-72f, 0.0f, 0x1.9d2ee4p-72f,
     0x1.254ab6p-20f, 0x1.e0cafcp-13f, 0.0f, 0x1.c13a18p-80f, 0.0f, 0x1.d2611ap-104f,
     0x1.78c33ep-55f, 0.0f, 0.0f, 0x1.41f18cp-62f, 0x1.74a65ep-102f, 0x1.3f4a8ep-5f,
     0x1.cb11bap-8f, 0x1.9a7154p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.34523cp-46f, 0.0f,
     0.0f, 0.0f, 0x1.809e6ep-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d74f36p-10f,
     0x1.caead4p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.daf8dep-32f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.614246p-119f, 0.0f, 0.0f, 0x1.55b9b6p-113f, 0.0f,
     0x1.bcadfap-2f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.8febacp-54f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.588a0ap-15f, 0x1.2564fap-107f, 0x1.6f3eecp-19f, 0.0f,
     0x1.2f30e4p-45f, 0.0f, 0.0f, 0x1.39fbd6p-100f, 0x1.5beae4p-61f, 0.0f,
     0x1.e5b69ap-124f, 0x1.88466p-48f, 0.0f, 0x1.696de8p-74f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fa4102p-98f, 0x1.1f838ap-50f, 0x1.0026fap-71f, 0x1.4ddd8ep-51f,
     0x1.f43664p-84f, 0.0f, 0.0f, 0x1.77a3c6p-112f, 0.0f, 0.0f, 0.0f, 0x1.367354p-33f,
     0x1.e278dep-100f, 0x1.17872cp-91f, 0.0f, 0.0f, 0.0f, 0x1.88ff5cp-20f,
     0x1.7ff0d2p-93f, 0x1.ee858ep-78f, 0.0f, 0.0f, 0x1.e19412p-2f, 0x1.2e92fap-37f,
     0.0f, 0.0f, 0x1.1a75b4p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2175cp-87f, 0.0f, 0.0f,
     0.0f, 0x1.a992aap-21f, 0x1.0dd156p-104f, 0.0f, 0x1.cb9f0ep-91f, 0x1.18322ap-38f,
     0.0f, 0.0f, 0x1.20da92p-79f, 0.0f, 0x1.8eacfp-103f, 0.0f, 0.0f, 0x1.36e464p-1f,
     0x1.715626p-115f, 0x1.31b5cap-84f, 0x1.6d1a9ap-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a47b4ap-81f, 0x1.91d136p-64f, 0x1.a81d18p-62f, 0x1.5e367ap-53f, 0.0f,
     0x1.11f262p-18f, 0x1.ca2beap-107f, 0.0f, 0.0f, 0x1.0d1866p-9f, 0x1.25a30ep-125f,
     0.0f, 0.0f, 0x1.31c15ep-8f, 0x1.88bfacp-58f, 0.0f, 0.0f, 0.0f, 0x1.6ea72ap-125f,
     0x1.e2d868p-47f, 0x1.bafed6p-39f, 0.0f, 0.0f, 0x1.21e854p-46f, 0.0f, 0.0f,
     0x1.7a911ep-22f, 0.0f, 0x1.35813ap-39f, 0.0f, 0x1.169cfap-14f, 0.0f, 0x1p0f,
     0.0f, 0.0f, 0x1.4eca58p-41f, 0x1.57c0dp-101f, 0x1.8cf0d2p-46f, 0.0f,
     0x1.36a50cp-44f, 0.0f, 0.0f, 0x1.38a0bep-108f, 0.0f, 0x1.376b4p-101f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ca4832p-70f, 0x1.47b72ep-101f, 0.0f, 0x1.95144ep-10f, 0.0f, 0.0f,
     0x1.a74102p-106f, 0x1.ad80fcp-17f, 0.0f, 0x1.4d80fp-20f, 0x1.83b53ap-106f,
     0x1.52a89p-74f, 0x1.b3fb0cp-84f, 0x1.09670cp-16f, 0.0f, 0x1p0f, 0.0f, 0.0f,
     0x1.39a08ap-24f, 0x1.9abca2p-100f, 0.0f, 0.0f, 0x1.69833p-36f, 0.0f,
     0x1.2066f8p-113f, 0x1.bb82bp-78f, 0.0f, 0x1.3e6dfap-11f, 0x1.f36b52p-29f, 0.0f,
     0x1.f9e2a2p-116f, 0x1.ef08a8p-68f, 0x1.d6146p-31f, 0x1.e6aa9ap-16f, 0.0f,
     0x1.a70718p-13f, 0x1.3aad6cp-77f, 0.0f, 0x1.41ce46p-91f, 0x1.4a1b48p-58f, 0.0f,
     0x1.92978ep-30f, 0.0f, 0x1.74c92p-113f, 0x1.c400f4p-10f, 0.0f, 0x1.aac864p-117f,
     0.0f, 0x1.20d124p-23f, 0x1.a55f26p-66f, 0x1.3c178ep-18f, 0x1.bc8ad4p-44f, 0.0f,
     0x1.2a06acp-46f, 0.0f, 0.0f, 0x1.50a47cp-118f, 0x1.84d77p-34f, 0x1.122498p-72f,
     0x1.5e27bp-50f, 0.0f, 0x1.c9dff4p-70f, 0x1.343978p-100f, 0.0f, 0x1.60c3f8p-67f,
     0x1.b68f8p-99f, 0x1.6fedbep-111f, 0x1.f6e4e2p-9f, 0x1.029c68p-95f,
     0x1.a157d4p-111f, 0x1.2a1dc8p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8897aap-11f,
     0.0f, 0.0f, 0.0f, 0x1.2eacfap-86f, 0x1.951cp-15f, 0x1.eea77ep-22f, 0.0f,
     0x1.8082f4p-70f, 0x1.b9c1p-36f, 0.0f, 0x1.f0bd6cp-20f, 0.0f, 0.0f,
     0x1.ba909cp-87f, 0x1.2c8b6cp-35f, 0.0f, 0.0f, 0x1.e7009p-85f, 0.0f,
     0x1.a519cp-7f, 0x1.81a41p-78f, 0x1.188f26p-37f, 0x1.3dacc4p-16f, 0x1.fc4646p-11f,
     0x1.abe68ap-54f, 0x1.9c3e08p-18f, 0x1.cf8e02p-79f, 0.0f, 0x1.eea9a6p-62f,
     0x1.74aa7cp-104f, 0x1.2442d4p-67f, 0x1.d7e4dcp-80f, 0.0f, 0.0f, 0x1.de6ec2p-56f,
     0x1.a0fdcap-58f, 0.0f, 0.0f, 0x1.6367aep-97f, 0x1.7b3e44p-78f, 0.0f,
     0x1.480732p-122f, 0x1.56769ep-48f, 0x1.2c0306p-67f, 0x1.78f022p-40f, 0.0f,
     0x1.870936p-61f, 0x1.94fc38p-120f, 0.0f, 0x1.40775ap-74f, 0.0f, 0x1.b42886p-21f,
     0x1.fa97e8p-58f, 0x1.fad9dep-22f, 0x1.3f8fcp-61f, 0x1.ea944p-26f, 0.0f,
     0x1.d7c46ap-121f, 0x1.32c46ap-71f, 0.0f, 0.0f, 0x1.f300dap-96f, 0.0f,
     0x1.1c8802p-19f, 0x1.f32ecp-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4fb336p-96f,
     0x1.1f107ap-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.d680ecp-59f, 0.0f, 0.0f,
     0x1.fbcef6p-28f, 0x1.10588ap-20f, 0x1.de04bap-45f, 0x1.9653fap-110f, 0.0f,
     0x1.0aea82p-14f, 0x1p0f, 0x1.71e332p-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.36b6b8p-2f,
     0x1.894136p-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.06384p-100f, 0x1.bdc3aap-18f,
     0x1.7873c6p-46f, 0x1.617822p-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ad6502p-86f, 0.0f, 0.0f, 0x1.ce0d8ap-105f, 0x1.cbe88p-49f, 0.0f,
     0x1.20973p-9f, 0x1.3c5d72p-9f, 0x1.9d9ba2p-19f, 0x1.4e3c6ap-52f, 0.0f,
     0x1.49cfeep-117f, 0.0f, 0.0f, 0x1.9d5bbep-124f, 0x1.d58058p-41f, 0x1.82a534p-35f,
     0x1.06937ap-43f, 0.0f, 0x1.a52b3p-80f, 0x1.888898p-39f, 0x1.b1ca12p-80f,
     0x1.3b5962p-53f, 0x1.eb543cp-87f, 0x1.d35742p-21f, 0x1.462ad6p-72f, 0.0f,
     0x1.5eb47ep-119f, 0x1.bae93ap-102f, 0.0f, 0.0f, 0x1.bfde38p-18f, 0.0f,
     0x1.1aa604p-62f, 0.0f, 0.0f, 0.0f, 0x1.6be328p-27f, 0.0f, 0.0f, 0.0f,
     0x1.9dfca2p-106f, 0x1.dc7d3ep-113f, 0.0f, 0x1.d52388p-95f, 0.0f, 0.0f,
     0x1.3f91fcp-46f, 0x1.fe9b82p-29f, 0x1.824cf8p-37f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7796dap-8f, 0x1.2453eap-25f, 0x1.1dd0fep-22f, 0.0f, 0x1.69ebp-79f, 0.0f,
     0.0f, 0.0f, 0x1.f5359ap-107f, 0.0f, 0x1.457ab2p-100f, 0x1.c9faacp-21f,
     0x1.2a91b6p-66f, 0.0f, 0.0f, 0x1.178934p-25f, 0.0f, 0.0f, 0x1.914d0ap-96f, 0.0f,
     0x1.6a6e08p-82f, 0x1.890362p-55f, 0.0f, 0.0f, 0.0f, 0x1.22b9bep-80f,
     0x1.101194p-101f, 0.0f, 0x1.2d2128p-12f, 0.0f, 0.0f, 0x1.7d55f2p-32f, 0.0f, 0.0f,
     0.0f, 0x1.f09014p-20f, 0.0f, 0x1.03be8cp-16f, 0x1.2c041ep-100f, 0x1.d8657cp-80f,
     0.0f, 0.0f, 0x1.b1c0b2p-68f, 0x1.f93516p-115f, 0x1.66a70ap-68f, 0.0f,
     0x1.8d5e38p-55f, 0x1.545826p-109f, 0x1.d1992cp-53f, 0x1.0569d4p-17f,
     0x1.bc4472p-122f, 0x1.225bc4p-68f, 0x1.7d20ecp-74f, 0.0f, 0.0f, 0.0f,
     0x1.17de48p-93f, 0x1.35ed66p-7f, 0x1.be7a22p-104f, 0.0f, 0x1.8f223ap-53f,
     0x1.1b066cp-49f, 0x1.ac3438p-113f, 0x1.e1d5a6p-81f, 0.0f, 0x1.f98c3p-100f,
     0x1.ce4c8ap-47f, 0x1.dbe794p-32f, 0x1.401fc2p-19f, 0x1.9f94dep-80f,
     0x1.77d1c8p-100f, 0x1.8feb88p-114f, 0.0f, 0x1.c357eep-96f, 0.0f, 0x1.58c49cp-77f,
     0x1.f7af04p-90f, 0.0f, 0x1.02dceap-78f, 0.0f, 0x1.15983cp-6f, 0.0f, 0.0f,
     0x1.62029ap-25f, 0.0f, 0x1.37b64p-15f, 0.0f, 0.0f, 0x1.4836p-123f,
     0x1.3fdc44p-115f, 0.0f, 0x1.6be52ep-112f, 0x1.3abef6p-54f, 0.0f, 0.0f, 0.0f,
     0x1.55ff98p-85f, 0x1.b4022ep-117f, 0.0f, 0x1.ca00e2p-75f, 0x1.cefa14p-120f, 0.0f,
     0.0f, 0x1.0e02fcp-34f, 0.0f, 0x1.fad984p-109f, 0x1.f68626p-47f, 0x1.082e18p-17f,
     0.0f, 0x1.f9c676p-36f, 0.0f, 0x1.1e4da4p-3f, 0x1.9504bap-86f, 0.0f, 0.0f, 0.0f,
     0x1.53c53ep-22f, 0.0f, 0x1.54769ap-102f, 0x1.c3cea2p-61f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.225624p-116f, 0.0f, 0.0f, 0x1.023008p-101f,
     0x1.ebf52cp-53f, 0.0f, 0x1.d600bap-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5f1bbep-54f, 0.0f, 0x1.3e6d54p-59f, 0x1.3fe7eap-84f, 0x1.5efcd4p-51f,
     0x1.fe4e5cp-21f, 0x1.11aec2p-118f, 0.0f, 0.0f, 0.0f, 0x1.ba8482p-116f, 0.0f,
     0x1.83ace2p-79f, 0x1.f2cca4p-98f, 0x1.eaa43cp-38f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4dec7ap-30f, 0x1.bda5d2p-50f, 0.0f, 0x1.d6c1fcp-37f, 0.0f, 0.0f, 0.0f,
     0x1.f77a0ep-60f, 0.0f, 0x1.50cfb2p-20f, 0.0f, 0x1.680878p-61f, 0.0f,
     0x1.d93c3p-101f, 0x1.0bc604p-25f, 0x1.3c928cp-34f, 0.0f, 0x1.eeb528p-106f,
     0x1.6e76dp-72f, 0x1.98ccacp-16f, 0x1.164432p-72f, 0x1.7a548ep-10f, 0.0f, 0.0f,
     0.0f, 0x1.d3bc58p-2f, 0.0f, 0.0f, 0x1.e1daa4p-98f, 0x1.7c0462p-50f, 0.0f, 0.0f,
     0.0f, 0x1.5cca64p-116f, 0x1.cada24p-11f, 0x1.ce155cp-67f, 0.0f, 0.0f,
     0x1.ef2b96p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a7c1bp-123f, 0x1.8ab2f4p-9f, 0x1p0f,
     0x1.c166cap-115f, 0.0f, 0x1.c7ec4cp-37f, 0.0f, 0.0f, 0x1.bac382p-59f,
     0x1.30827cp-36f, 0x1.7c2008p-122f, 0x1.5207acp-81f, 0x1.cec15cp-76f,
     0x1.9656cap-91f, 0x1.b7a38cp-48f, 0x1.266876p-48f, 0.0f, 0x1.f18fbep-48f, 0.0f,
     0x1.06b11p-19f, 0x1.891c6ep-32f, 0x1.18fed8p-24f, 0x1.ccc794p-51f, 0.0f,
     0x1.efbc7ep-46f, 0x1.2699ecp-93f, 0x1.184f04p-102f, 0x1.0d0b8ap-53f, 0.0f,
     0x1.e5deb2p-50f
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
            ml_float8_t tmp3;
            int32_t tmp4;

            memcpy(&tmp0, ((ml_float8_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            memcpy(&tmp1, ((ml_float8_t*)(external_bench_wrapper_input_table_arg1+ i)), 32);
            tmp2 = Sleef_remainderf8_kvx(tmp0, tmp1);
            memcpy(((ml_float8_t*)(external_bench_wrapper_output_table+ i)), &(tmp2), 32);
            tmp3 = local_acc + tmp2;
            local_acc = tmp3;
            tmp4 = i + INT32_C(8);
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
    cpe_measure = id_tmp / 10080000.0;
    printf("Sleef_remainderf8_kvx %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_remainderf8_kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
