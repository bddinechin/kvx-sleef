/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sinhf4_u10kvx.c --function Sleef_sinhf4_u10kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 4 --function-input-vector-size 4 --bench \
 *     --no-embedded-bin --target kv3
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
     0.0f, 0x1.01ad56p-105f, 0x1.5c7c36p-89f, 0.0f, 0x1.28fa54p-24f, 0.0f,
     0x1.3921d2p-95f, 0x1.c1c7bap-75f, 0.0f, 0x1.b7d9bp-51f, 0x1.a808acp-59f,
     0x1.887cd6p-51f, 0x1.4462bep-36f, 0.0f, 0.0f, 0x1.92b9bcp-125f, 0x1.cf6c06p-101f,
     0x1.ab8462p-75f, 0x1p0f, 0x1.5b4de6p-18f, 0.0f, 0.0f, 0x1.3d497cp-89f, 0.0f,
     0.0f, 0x1.8f6fbep-110f, 0x1.a1ebd4p-114f, 0.0f, 0x1.85307ep-29f, 0.0f,
     0x1.fbd7b6p-95f, 0x1.f5aeb4p-124f, 0.0f, 0.0f, 0x1.30188ap-107f, 0.0f, 0.0f,
     0x1.06daeep-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9e1834p-89f, 0x1.ad8806p-111f,
     0x1.8d781cp-92f, 0x1.cd63fcp-68f, 0x1.ca90e4p-3f, 0x1.c8b02ap-114f,
     0x1.6d251ap-64f, 0x1.f0b596p-15f, 0x1.b645f6p-100f, 0x1.289202p-13f,
     0x1.41abfcp-33f, 0.0f, 0.0f, 0x1.b8b74cp-123f, 0.0f, 0.0f, 0x1.a39e68p-124f,
     0.0f, 0x1.4b1beep-60f, 0.0f, 0.0f, 0.0f, 0x1.14332p-27f, 0x1.c0487ep-90f, 0.0f,
     0x1.6590f4p-13f, 0.0f, 0.0f, 0x1.2778fap-57f, 0.0f, 0x1.ecddcp-103f, 0.0f, 0.0f,
     0.0f, 0x1.3b6802p-89f, 0x1.176384p-54f, 0x1.93982cp-103f, 0.0f, 0x1.5f023ap-96f,
     0.0f, 0x1.2161d8p-80f, 0x1.1699b2p-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.7b71ep-64f, 0x1.ba3df8p-73f, 0x1.838128p-110f, 0.0f,
     0x1.921b3ap-34f, 0.0f, 0.0f, 0.0f, 0x1.308448p-104f, 0.0f, 0x1.96538ep-69f,
     0x1.734f3cp-104f, 0x1.afa8dep-16f, 0x1.683232p-73f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.eb1d22p-9f, 0x1.b74dc2p-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0d5f62p-96f, 0.0f,
     0x1.b52312p-15f, 0.0f, 0x1.f59864p-31f, 0.0f, 0x1.5589e4p-18f, 0x1.b57c4ap-73f,
     0.0f, 0x1.e6e13cp-94f, 0x1.2ed73p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f,
     0x1.721bf4p-125f, 0x1.04a51p-74f, 0x1.51a388p-106f, 0x1.b48fbp-24f, 0.0f,
     0x1.1c2e32p-125f, 0.0f, 0x1.d73d7ap-40f, 0.0f, 0x1.1b223ap-1f, 0.0f,
     0x1.d84c08p-93f, 0x1.ab9676p-61f, 0x1.036ab8p-54f, 0.0f, 0x1.c0f9f8p-102f,
     0x1.bbe61cp-63f, 0.0f, 0.0f, 0.0f, 0x1.59f94cp-62f, 0x1.05acb4p-90f,
     0x1.a106a6p-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.de80a4p-80f,
     0x1.af2a8p-106f, 0.0f, 0x1.9a612cp-125f, 0x1.5cd08p-35f, 0x1.5f18a4p-102f,
     0x1.61b9aap-95f, 0x1.0773fcp-88f, 0.0f, 0x1.61706ep-92f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.38f63p-50f, 0x1.806fd2p-92f, 0x1.daf6dep-29f, 0.0f, 0.0f,
     0x1.f90d46p-91f, 0.0f, 0.0f, 0.0f, 0x1.beb0dcp-21f, 0.0f, 0.0f, 0x1.9d81a2p-116f,
     0.0f, 0.0f, 0.0f, 0x1.b071cap-126f, 0x1.24016cp-123f, 0.0f, 0x1.6b0b7ep-86f,
     0x1.b93aep-90f, 0.0f, 0x1.8a6324p-31f, 0.0f, 0x1.7e037ap-5f, 0.0f,
     0x1.1ecadep-104f, 0.0f, 0x1.12088p-30f, 0x1.faaaa8p-77f, 0x1.2fd54ep-65f,
     0x1.e0d332p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.29cc0ep-93f, 0x1.8e8566p-81f,
     0x1.222b66p-58f, 0.0f, 0x1.926ep-27f, 0.0f, 0.0f, 0x1.9f7c1cp-63f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.52d518p-85f, 0x1.3c6cep-17f, 0x1.4cf5a8p-45f, 0x1.568e54p-11f,
     0x1.accce8p-87f, 0.0f, 0x1.949a4cp-75f, 0.0f, 0x1.8da936p-9f, 0x1.490bc6p-51f,
     0x1.fd7cc2p-85f, 0x1.e66f2ep-62f, 0.0f, 0x1.9d627ap-93f, 0.0f, 0x1.2c6da8p-20f,
     0.0f, 0x1.5b03cep-7f, 0x1.2bd8f8p-75f, 0x1.d96c64p-11f, 0x1.9e49f8p-37f, 0.0f,
     0.0f, 0.0f, 0x1.73c4acp-92f, 0x1.b33eeap-71f, 0x1.b816aep-46f, 0.0f, 0.0f, 0.0f,
     0x1.74556ap-91f, 0x1.4a8312p-52f, 0x1.5534c6p-63f, 0.0f, 0x1.80fe4cp-69f,
     0x1.cef544p-30f, 0.0f, 0x1.b17ecp-81f, 0.0f, 0.0f, 0x1.e2e4a4p-78f,
     0x1.0ea4a4p-67f, 0.0f, 0x1.021e1ep-49f, 0.0f, 0.0f, 0.0f, 0x1.3a7c0cp-71f,
     0x1.8c7a0ap-78f, 0.0f, 0.0f, 0x1.68af5ep-103f, 0.0f, 0x1.f08054p-101f, 0.0f,
     0.0f, 0x1.9c1bbap-21f, 0.0f, 0x1.a89388p-28f, 0.0f, 0x1.c60becp-61f,
     0x1.51f226p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bd14a6p-47f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.5e8ff8p-77f, 0x1.1a9c58p-79f, 0x1.407e6ap-65f, 0x1.3a0d52p-27f,
     0x1.90818p-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f51818p-2f, 0x1.779d08p-77f,
     0.0f, 0x1.a560eap-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.220e08p-62f, 0.0f,
     0x1.bfc2c2p-121f, 0.0f, 0.0f, 0.0f, 0x1.463c28p-58f, 0x1.12cf72p-8f,
     0x1.8ce4f4p-48f, 0x1.77353p-9f, 0.0f, 0x1.d451dap-86f, 0x1.b085p-77f, 0.0f,
     0x1.d83b66p-106f, 0.0f, 0.0f, 0x1.ab5042p-38f, 0x1.3ff64ap-101f,
     0x1.95758ep-104f, 0x1.4119ap-57f, 0x1.2319b4p-69f, 0x1.2caa6p-37f, 0.0f, 0.0f,
     0x1.b06ff6p-54f, 0x1.3458b4p-10f, 0.0f, 0x1.da13e8p-74f, 0x1.45d312p-102f,
     0x1.3c9ee4p-119f, 0x1.76572ep-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a9c592p-113f,
     0.0f, 0x1.c59608p-78f, 0x1.1a429cp-119f, 0x1.eff046p-16f, 0x1.8c92f6p-50f, 0.0f,
     0x1.8c193p-7f, 0.0f, 0x1.9f7c8cp-98f, 0x1.e7856ap-61f, 0x1.f8e77ep-52f, 0.0f,
     0x1.f5d86p-61f, 0x1.284a0ap-41f, 0.0f, 0x1.65c066p-12f, 0x1.0fbcccp-13f,
     0x1.b742d8p-11f, 0.0f, 0.0f, 0x1.08088ep-97f, 0x1.d04f9cp-12f, 0x1.ffbb5ep-18f,
     0.0f, 0.0f, 0x1.20f94p-16f, 0.0f, 0x1.2e1d0ap-108f, 0.0f, 0.0f, 0.0f,
     0x1.c3c26cp-28f, 0.0f, 0.0f, 0.0f, 0x1.5a8132p-16f, 0x1.359fdcp-99f, 0.0f, 0.0f,
     0x1.074f62p-33f, 0x1.86b206p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d0fe5ap-45f, 0x1.b95a92p-34f, 0.0f, 0x1.434278p-56f, 0x1.f3ac4ep-39f,
     0x1.3c42b4p-47f, 0.0f, 0.0f, 0x1.68850ep-9f, 0x1.259a28p-67f, 0x1.f43edap-75f,
     0x1.b2523p-121f, 0.0f, 0.0f, 0x1.fad94p-21f, 0.0f, 0.0f, 0.0f, 0x1.573ee2p-120f,
     0.0f, 0x1.eac9bep-22f, 0x1.235e4ap-50f, 0.0f, 0x1.a2fc2p-58f, 0.0f,
     0x1.530744p-18f, 0.0f, 0x1.4321aap-33f, 0.0f, 0x1.7637d8p-55f, 0.0f, 0.0f, 0.0f,
     0x1.dcf6c8p-72f, 0x1.5acd8ep-9f, 0x1.1c7b34p-74f, 0x1.1b4264p-52f,
     0x1.d1bef4p-51f, 0.0f, 0.0f, 0x1.aedc88p-12f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fce1b6p-29f, 0x1.7ca3b6p-66f, 0.0f, 0.0f, 0x1.004c3ep-121f, 0.0f,
     0x1.dc6442p-42f, 0x1.b38e14p-113f, 0x1.53e8a4p-67f, 0x1.99fcc4p-85f,
     0x1.d8d79ep-115f, 0x1.ef623ap-57f, 0.0f, 0x1.6958fcp-80f, 0x1.6fe7eap-118f, 0.0f,
     0.0f, 0x1.52158cp-93f, 0x1.27cd26p-52f, 0.0f, 0x1.8b485ap-105f, 0x1.82c2dep-110f,
     0x1.b8cc4ep-40f, 0x1.b4fea2p-124f, 0x1.4e7716p-108f, 0.0f, 0.0f, 0x1.78129ap-62f,
     0.0f, 0x1.080de2p-6f, 0.0f, 0.0f, 0.0f, 0x1.2a642ep-93f, 0x1.98b6ep-4f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.5c80ccp-36f, 0.0f, 0x1.00ec78p-68f, 0x1.95fcd8p-23f,
     0.0f, 0.0f, 0x1.ee956cp-108f, 0x1.82af04p-74f, 0.0f, 0x1.76f3eep-28f, 0.0f, 0.0f,
     0x1.4e0428p-111f, 0x1.938938p-93f, 0.0f, 0x1.28ee2ep-19f, 0.0f, 0x1.71c04ep-36f,
     0.0f, 0.0f, 0x1.96d81ep-70f, 0x1.fdc5fcp-112f, 0x1.442618p-79f, 0x1.55eb2ep-114f,
     0.0f, 0.0f, 0x1.13ae8ap-101f, 0.0f, 0x1.35adep-14f, 0x1.e39d0cp-89f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a026aap-101f, 0x1.7ab24p-69f, 0x1.f1e9ccp-46f, 0.0f,
     0x1.9bc15ap-6f, 0x1.f7dcd8p-13f, 0.0f, 0x1.873208p-113f, 0.0f, 0.0f,
     0x1.a7448ep-35f, 0x1.ad9f2cp-61f, 0.0f, 0.0f, 0x1.92be92p-6f, 0x1.dc0dcap-17f,
     0x1.6923ccp-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ce582ap-93f,
     0x1.8c872cp-64f, 0.0f, 0x1.795d0ep-63f, 0x1.1bc168p-95f, 0x1.7cddfp-68f, 0.0f,
     0.0f, 0x1.fe2e8cp-70f, 0x1.890f28p-1f, 0.0f, 0x1.b6ecbap-75f, 0.0f,
     0x1.b5eb6cp-107f, 0x1.d63524p-102f, 0x1.823aa6p-125f, 0x1.a5ccdp-101f,
     0x1.7a68fcp-40f, 0x1.44b896p-1f, 0x1.6ee39p-87f, 0.0f, 0x1.4f8198p-3f, 0.0f,
     0x1.0be6bcp-43f, 0x1.732456p-56f, 0x1.7e7ab8p-73f, 0.0f, 0x1.5de6bap-73f,
     0x1.e361bap-40f, 0x1.2ce1a8p-123f, 0.0f, 0x1.49fae2p-5f, 0x1.5d0c58p-41f, 0.0f,
     0.0f, 0x1.deeb7ep-84f, 0x1.9e7c66p-121f, 0.0f, 0x1.ec213p-58f, 0.0f,
     0x1.f3447ap-112f, 0x1.b0ddb4p-83f, 0.0f, 0x1.6f7ceap-72f, 0x1.0e8322p-125f,
     0x1.41dda6p-106f, 0.0f, 0x1.947e78p-103f, 0.0f, 0x1.9c57c4p-39f, 0x1.d8f33cp-44f,
     0x1.29f78ep-24f, 0.0f, 0x1.116924p-63f, 0x1.7176a2p-14f, 0.0f, 0.0f,
     0x1.154152p-20f, 0.0f, 0x1.951a4ap-80f, 0.0f, 0x1.23048cp-19f, 0.0f,
     0x1.b3c4e6p-11f, 0.0f, 0.0f, 0x1.4d7d18p-116f, 0x1.8a463ep-70f, 0.0f, 0.0f, 0.0f,
     0x1.00492ap-85f, 0.0f, 0x1.fe0842p-89f, 0x1.5eaa1cp-91f, 0.0f, 0.0f,
     0x1.ff2ad6p-71f, 0.0f, 0.0f, 0x1.ff4cb8p-50f, 0x1.cb8078p-7f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.c14958p-58f, 0.0f, 0x1.6ade7ep-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8e47bcp-14f, 0x1.d91d5ap-2f, 0x1.7b7d38p-7f, 0.0f, 0x1.d9be7cp-49f,
     0x1.de1ccp-1f, 0x1.c4d356p-76f, 0.0f, 0.0f, 0.0f, 0x1.c3145ap-2f,
     0x1.a269a4p-26f, 0.0f, 0.0f, 0.0f, 0x1.cb64dp-118f, 0x1.63154ep-112f,
     0x1.518f84p-44f, 0.0f, 0x1.02fc0ep-55f, 0x1.25c164p-34f, 0.0f, 0x1.552b32p-27f,
     0x1.7ef14p-120f, 0x1.0c2baap-30f, 0x1.8c6bcep-5f, 0.0f, 0x1.9194e6p-41f,
     0x1.dccc8p-41f, 0x1.4e318p-40f, 0.0f, 0.0f, 0.0f, 0x1.a1add2p-17f,
     0x1.a30d26p-41f, 0.0f, 0x1.84467ap-71f, 0x1.d1ce08p-96f, 0.0f, 0.0f,
     0x1.69c6cp-84f, 0.0f, 0x1.04d172p-72f, 0.0f, 0x1.403bd4p-48f, 0.0f,
     0x1.5fb96ep-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dcf7ep-76f,
     0x1.23e8p-81f, 0.0f, 0x1.a3325cp-65f, 0x1.730602p-123f, 0.0f, 0x1.66bbcap-45f,
     0x1.4ec39ap-50f, 0.0f, 0x1.297218p-25f, 0x1.5d4c8cp-120f, 0x1.df055ap-19f, 0.0f,
     0x1.d88084p-92f, 0x1.6adbf6p-74f, 0.0f, 0x1.01353ep-68f, 0.0f, 0x1.a89602p-78f,
     0.0f, 0x1.60251cp-21f, 0x1.9e9e9p-21f, 0.0f, 0x1.4826a4p-68f, 0x1.c701fep-43f,
     0x1.fb885ep-68f, 0x1.7009dep-106f, 0x1.2f309p-23f, 0.0f, 0.0f, 0x1.f99d4p-116f,
     0x1.0b6d38p-69f, 0x1.34d774p-65f, 0x1.06c9acp-116f, 0x1.46a822p-90f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f63b5ap-39f, 0.0f, 0.0f, 0x1.97847ap-92f, 0x1.dc77fcp-21f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.32d98ep-113f, 0x1.3295ap-72f, 0x1.aa765ap-53f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.000506p-63f, 0x1.a5b0e8p-22f, 0.0f, 0x1.f44a4cp-86f,
     0.0f, 0.0f, 0.0f, 0x1.93a752p-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d6a076p-11f,
     0.0f, 0.0f, 0x1.8fda04p-42f, 0.0f, 0.0f, 0x1.e77ac8p-67f, 0.0f, 0.0f, 0.0f,
     0x1.c609c4p-73f, 0x1.75fb7ap-24f, 0.0f, 0.0f, 0x1.fb65b6p-106f, 0.0f, 0.0f,
     0x1.dfda0ap-34f, 0.0f, 0.0f, 0.0f, 0x1.ed13eep-120f, 0.0f, 0x1.776198p-122f,
     0x1.19d3bcp-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.648052p-65f, 0x1.28afbap-77f, 0.0f,
     0x1.28ddcep-47f, 0x1.1d5c0ap-5f, 0x1.767cc4p-125f, 0x1.371078p-78f,
     0x1.c4d0e2p-105f, 0.0f, 0.0f, 0x1.ecb7d6p-77f, 0.0f, 0.0f, 0x1.f9e8a6p-93f,
     0x1.1b75d8p-54f, 0x1.6fdaeap-13f, 0.0f, 0.0f, 0x1.bdb8bp-31f, 0.0f, 0.0f,
     0x1.c1bb8ap-91f, 0x1.9f5c9cp-86f, 0.0f, 0.0f, 0.0f, 0x1.e47f18p-72f, 0.0f, 0.0f,
     0.0f, 0x1.2cc26ep-57f, 0.0f, 0x1.fbdc4ap-104f, 0.0f, 0x1.0977dcp-67f, 0.0f,
     0x1p0f, 0.0f, 0.0f, 0x1.0176a4p-66f, 0x1.18d5f8p-118f, 0x1.afd136p-120f, 0.0f,
     0x1.d9a7b6p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cb17f6p-83f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f8057ep-51f, 0.0f, 0.0f, 0x1.ff246p-46f, 0x1.1e9a5p-99f,
     0x1.b0426ep-39f, 0.0f, 0.0f, 0x1.7eada6p-73f, 0.0f, 0.0f, 0x1.86d434p-40f, 0.0f,
     0x1.2ec5b2p-43f, 0x1.9787b8p-25f, 0.0f, 0.0f, 0.0f, 0x1.248602p-66f,
     0x1.dee4b6p-15f, 0x1.31a326p-82f, 0.0f, 0.0f, 0.0f, 0x1.a0c088p-21f, 0.0f,
     0x1.8cc73ap-125f, 0x1.6b87fcp-33f, 0.0f, 0x1.cbdb1ep-59f, 0x1.3c1a8p-7f,
     0x1.6a511p-32f, 0x1p0f, 0.0f, 0x1.515eb4p-10f, 0x1.b3fab2p-69f, 0.0f, 0.0f,
     0x1.e4461ep-111f, 0.0f, 0.0f, 0.0f, 0x1.dd00a6p-40f, 0x1.2c2a3ap-14f, 0.0f, 0.0f,
     0.0f, 0x1.51fb4cp-37f, 0.0f, 0x1.f49058p-54f, 0x1.f360f4p-68f, 0x1.96b284p-61f,
     0.0f, 0x1.549858p-45f, 0.0f, 0.0f, 0x1.4f9494p-75f, 0.0f, 0.0f, 0.0f,
     0x1.6698e4p-98f, 0.0f, 0x1.be0604p-71f, 0.0f, 0x1.aab204p-89f, 0.0f,
     0x1.9908bep-10f, 0x1.2e907cp-124f, 0x1.5bd064p-17f, 0x1.aa430cp-28f, 0.0f, 0.0f,
     0.0f, 0x1.6a2e0cp-22f, 0x1.a95388p-70f, 0x1.5cb5a8p-97f, 0.0f, 0.0f,
     0x1.c48214p-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4bfecp-60f, 0x1.237b26p-44f, 0.0f,
     0x1.e53098p-108f, 0x1.ffc95cp-64f, 0x1.1cae4ap-3f, 0.0f, 0x1.c6c516p-29f, 0.0f,
     0x1.6d92cp-52f, 0.0f, 0x1.b2769ep-61f, 0.0f, 0.0f, 0x1.e5bd1cp-121f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f19d2p-114f, 0x1.a80d2cp-28f, 0x1.25738p-109f,
     0x1.be5154p-37f, 0x1.04f06ap-81f, 0x1.b47058p-77f, 0.0f, 0x1.e246e6p-7f, 0.0f,
     0x1.152ad8p-17f, 0.0f, 0x1.2365aep-6f, 0x1.4514a6p-85f, 0x1.822d8ap-104f,
     0x1.69563p-95f, 0.0f, 0x1.c62164p-92f, 0x1.6f767cp-85f, 0x1.7b3d32p-8f,
     0x1.bd2e9p-126f, 0x1.2d714p-57f, 0x1.41fb84p-96f, 0x1.bc5428p-42f, 0.0f,
     0x1.ce1ad6p-67f, 0.0f, 0.0f, 0x1.1ab73p-8f, 0x1.2f0228p-32f, 0x1.06e016p-36f,
     0.0f, 0x1.094a2ep-44f, 0x1.469e5ep-112f, 0.0f, 0.0f, 0x1.29b358p-120f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.cffbaap-10f, 0.0f, 0x1.38ab54p-7f, 0.0f, 0x1.ac10b8p-30f,
     0.0f, 0.0f, 0.0f, 0x1.e6737ep-40f, 0x1.60002cp-96f, 0.0f, 0x1.f4edc8p-89f,
     0x1.9d400ap-108f, 0x1.872356p-33f, 0.0f, 0.0f
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
            tmp1 = Sleef_sinhf4_u10kvx(tmp0);
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
    printf("Sleef_sinhf4_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_sinhf4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
