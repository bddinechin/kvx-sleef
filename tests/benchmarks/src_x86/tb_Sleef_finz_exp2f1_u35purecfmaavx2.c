/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_exp2f1_u35purecfma.c --function \
 *     Sleef_finz_exp2f1_u35purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --bench --no-embedded-bin --target x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <xmmintrin.h>
#include <stdio.h>
#include <inttypes.h>


volatile float external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.a568bep-108f, 0x1.b1b0f6p-64f, 0.0f, 0x1.27770ap-51f, 0x1.b45a2cp-92f, 0.0f,
     0.0f, 0.0f, 0x1.7156e6p-65f, 0x1.decda2p-9f, 0.0f, 0.0f, 0x1.48b8bap-63f,
     0x1.f9916cp-97f, 0.0f, 0.0f, 0x1.102c38p-96f, 0x1.57e90cp-4f, 0x1.1b6de2p-126f,
     0x1.a84084p-119f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.d21ae4p-81f, 0.0f, 0.0f,
     0.0f, 0x1.5deb7cp-9f, 0.0f, 0x1.c8790cp-21f, 0x1.87e93ap-113f, 0x1.5a4b64p-86f,
     0.0f, 0.0f, 0.0f, 0x1.35f61ap-50f, 0x1.3f0fb4p-46f, 0x1.fdaa6cp-64f, 0.0f, 0.0f,
     0x1.0be8dap-111f, 0x1.7b07cap-70f, 0x1.a5630ep-9f, 0.0f, 0.0f, 0.0f,
     0x1.a0d6a2p-38f, 0x1.22c52cp-89f, 0x1.3e43fcp-36f, 0.0f, 0x1.8b8f2ep-102f,
     0x1.116544p-17f, 0.0f, 0.0f, 0.0f, 0x1.755d12p-110f, 0.0f, 0x1.2bb34ep-98f,
     0x1.04e2ap-82f, 0.0f, 0x1.79fe4cp-115f, 0.0f, 0.0f, 0.0f, 0x1.d6eda8p-15f,
     0x1.d0bda4p-57f, 0x1.48b9b8p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.108388p-96f, 0x1.266b66p-73f, 0x1.5579a4p-85f, 0x1.2fece2p-9f,
     0x1.5b1a46p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.705acep-120f, 0x1.4593cap-80f,
     0x1.231486p-64f, 0.0f, 0.0f, 0.0f, 0x1.82599ap-44f, 0.0f, 0.0f, 0.0f,
     0x1.2abbdap-12f, 0x1.a1e514p-80f, 0x1.5d8d26p-94f, 0x1.089d98p-38f, 0.0f,
     0x1.9b626ap-50f, 0.0f, 0.0f, 0.0f, 0x1.79e0fp-28f, 0.0f, 0.0f, 0x1.f4f4cep-9f,
     0x1.8b0064p-9f, 0.0f, 0x1.1953bcp-30f, 0x1.4b709ep-103f, 0.0f, 0x1.42ba1ap-124f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.68299ep-99f, 0x1.28544cp-87f, 0x1.75c778p-24f,
     0x1.b5508cp-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.de921ap-45f, 0.0f, 0x1.c51ea4p-18f,
     0x1.66c08ap-7f, 0x1.e6b914p-95f, 0x1.d078ecp-50f, 0.0f, 0x1.ce9894p-28f,
     0x1.c09fdep-23f, 0x1.4a54a8p-123f, 0.0f, 0x1.8e71fcp-86f, 0x1.cb9b2cp-54f,
     0x1.d8f68p-24f, 0x1.873f2ap-51f, 0x1.f3185ep-111f, 0x1.44fc92p-41f, 0.0f,
     0x1.8d4be4p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d25b02p-21f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.dc2aep-85f, 0.0f, 0x1.6a8df2p-123f, 0x1.c3f09cp-6f, 0.0f, 0x1.2524a6p-86f,
     0x1.ccf0dp-51f, 0.0f, 0.0f, 0.0f, 0x1.43fd84p-72f, 0x1.a5de7ap-69f,
     0x1.bfa936p-60f, 0.0f, 0x1.38b11ap-116f, 0x1.532594p-76f, 0x1.960bc8p-74f,
     0x1.10581ep-58f, 0x1.75e1d6p-65f, 0x1.67ed8ep-112f, 0.0f, 0.0f, 0x1.cb33ecp-57f,
     0x1.34b438p-113f, 0x1.81abfep-126f, 0x1.e98fcp-118f, 0.0f, 0x1.8b25a2p-23f,
     0x1.7ddb1p-61f, 0.0f, 0.0f, 0x1.8496c4p-97f, 0x1.840aacp-98f, 0x1.d6ffa8p-64f,
     0x1.962ecep-100f, 0.0f, 0x1.c0adc8p-70f, 0x1.475df6p-121f, 0x1.bd6944p-58f, 0.0f,
     0.0f, 0x1.4bd6dp-65f, 0x1.187ddcp-61f, 0x1.135d78p-68f, 0.0f, 0.0f,
     0x1.5af18ap-64f, 0x1.81abcp-16f, 0x1.1f10b2p-2f, 0.0f, 0x1.d476p-92f,
     0x1.2afbe6p-64f, 0.0f, 0.0f, 0x1.74bcc4p-45f, 0x1.dcb94ep-26f, 0.0f,
     0x1.6acf66p-74f, 0x1.c2a0dp-82f, 0.0f, 0x1.0e6c8ep-36f, 0.0f, 0.0f,
     0x1.d22626p-101f, 0x1.6347fep-125f, 0x1.e554bep-25f, 0x1.4c7d8cp-72f,
     0x1.516728p-26f, 0.0f, 0.0f, 0.0f, 0x1.5f628cp-21f, 0x1.1040e4p-16f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6d582ap-106f, 0x1.b95d94p-100f,
     0x1.7995fep-72f, 0x1.9e8e92p-36f, 0x1.7a66f4p-123f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ae7842p-109f, 0.0f, 0.0f, 0x1.bf4a18p-37f, 0x1.fba53cp-25f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.9376bcp-38f, 0.0f, 0x1.788c0ep-9f, 0x1.8bfa0cp-67f, 0.0f, 0.0f,
     0x1.f1d55ap-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.81e23ep-28f,
     0.0f, 0.0f, 0x1.9fc8ccp-59f, 0x1.a07b56p-89f, 0.0f, 0.0f, 0.0f, 0x1.a45f34p-52f,
     0.0f, 0.0f, 0x1.963a44p-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.545404p-32f,
     0x1.161eaap-106f, 0x1.a5cb7ep-39f, 0.0f, 0x1.b66792p-15f, 0x1.81a188p-12f, 0.0f,
     0.0f, 0x1.b03ea2p-7f, 0x1.2e5094p-114f, 0.0f, 0x1.504da2p-53f, 0x1.5eb1p-72f,
     0x1.9f660ep-33f, 0x1.13c1fap-43f, 0.0f, 0x1.e1c9bap-111f, 0.0f, 0x1.c1ddeap-43f,
     0.0f, 0.0f, 0x1.6e853cp-28f, 0x1.96a78p-27f, 0x1.dcc2bp-9f, 0.0f, 0x1.3074ep-26f,
     0x1.51e754p-31f, 0x1.ef82dap-121f, 0x1.94a1f6p-100f, 0.0f, 0x1.c7727ep-52f, 0.0f,
     0.0f, 0x1.53a3f8p-42f, 0.0f, 0.0f, 0x1.f1586ep-51f, 0x1.b4b086p-94f, 0.0f,
     0x1.46189p-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.29796cp-28f, 0x1.a99f76p-35f,
     0.0f, 0.0f, 0.0f, 0x1.66c0c2p-15f, 0.0f, 0.0f, 0x1.e4d44ap-108f, 0x1.4e93dp-67f,
     0.0f, 0x1.e38982p-125f, 0x1.b8cf28p-112f, 0.0f, 0x1.80ca0ep-67f, 0.0f,
     0x1.32acdep-97f, 0x1.57f554p-108f, 0x1.4fc30ep-118f, 0x1.4027b6p-88f,
     0x1.5a9a98p-95f, 0x1.8e484cp-61f, 0.0f, 0.0f, 0.0f, 0x1.26fe0cp-59f,
     0x1.80d914p-122f, 0x1.24ef4ep-120f, 0.0f, 0x1.79045ap-119f, 0x1.ffce14p-109f,
     0x1.fc71bap-84f, 0x1.9c98dp-99f, 0x1.79f6bap-99f, 0x1.316a42p-76f, 0.0f,
     0x1.20956ap-107f, 0x1.172218p-32f, 0.0f, 0x1.f670c2p-82f, 0.0f, 0x1.f5e90ap-93f,
     0x1.ebc664p-123f, 0x1.c5781ep-16f, 0x1.3408c6p-89f, 0x1p0f, 0x1.47dd0ap-92f,
     0.0f, 0.0f, 0.0f, 0x1.be5a28p-22f, 0.0f, 0.0f, 0.0f, 0x1.a53e68p-85f,
     0x1.6d4a48p-7f, 0.0f, 0x1.2eb3c4p-47f, 0x1.48e3eep-90f, 0.0f, 0x1.e9f866p-57f,
     0x1.325076p-112f, 0x1.c1482ep-117f, 0.0f, 0x1.d02c26p-57f, 0x1.6d664ap-57f, 0.0f,
     0x1.aefe9p-88f, 0.0f, 0x1.2614dep-125f, 0x1.a8dd0cp-79f, 0.0f, 0x1.309abep-2f,
     0.0f, 0.0f, 0x1.f1ff2cp-19f, 0x1.6a8784p-42f, 0.0f, 0x1.8768c4p-45f,
     0x1.d9e514p-38f, 0x1.22c9fep-1f, 0.0f, 0x1.ad702p-68f, 0x1.a6b2acp-33f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7b0e0ep-102f, 0x1.506098p-96f, 0x1.04a07cp-58f,
     0x1.52ab6p-105f, 0x1.80a3e6p-68f, 0.0f, 0.0f, 0x1.c7e47ep-105f, 0.0f, 0.0f,
     0x1.3416b4p-22f, 0x1.26a3c8p-23f, 0x1.9d6b4cp-74f, 0x1.562b4ap-58f,
     0x1.b25a5p-13f, 0x1.f1e218p-48f, 0.0f, 0.0f, 0x1.713784p-100f, 0x1.7f6c64p-87f,
     0.0f, 0x1.d2361ep-54f, 0x1.0c809ap-102f, 0.0f, 0.0f, 0x1.8936fep-74f,
     0x1.bd6704p-37f, 0x1.2c9feap-28f, 0.0f, 0.0f, 0x1.bfc98ep-92f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.c39d86p-83f, 0.0f, 0.0f, 0x1.50bac6p-98f, 0.0f, 0x1.551cc8p-118f,
     0x1.05cfcp-6f, 0.0f, 0.0f, 0x1.e5a38p-44f, 0x1.08f26cp-48f, 0x1.f8f572p-110f,
     0x1.47167p-27f, 0.0f, 0.0f, 0x1.85b644p-117f, 0.0f, 0x1.1dd01ap-126f,
     0x1.1d9738p-21f, 0.0f, 0x1.23b1cap-106f, 0.0f, 0x1.128e8ap-23f, 0.0f,
     0x1.76c78ep-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d88af4p-59f, 0.0f, 0x1.6f140cp-115f,
     0x1.a53b6cp-21f, 0.0f, 0.0f, 0x1.fdea62p-33f, 0x1.d5a43ep-89f, 0x1.3be21ap-39f,
     0.0f, 0.0f, 0x1.e04854p-51f, 0x1.b077c4p-31f, 0.0f, 0x1.61e7c2p-69f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.80ae64p-117f, 0x1.b0c15ap-104f, 0x1.98f18cp-66f,
     0x1.9f28b8p-106f, 0x1.f56p-44f, 0x1.8b2d7cp-71f, 0x1.992ef6p-26f,
     0x1.b1eac4p-57f, 0.0f, 0x1.f1ca1ap-78f, 0.0f, 0.0f, 0.0f, 0x1.9a1bbep-62f, 0.0f,
     0x1.e6b03cp-44f, 0x1.4981f2p-6f, 0x1.111602p-113f, 0x1.316e4ep-35f, 0.0f,
     0x1.0398f4p-67f, 0.0f, 0.0f, 0x1.d6484ep-39f, 0x1.aa130cp-3f, 0x1.2127bp-104f,
     0.0f, 0x1.fbcd1cp-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4dc3eep-98f, 0x1.84b246p-71f,
     0.0f, 0.0f, 0x1.8b37aep-110f, 0x1.806ef8p-29f, 0.0f, 0.0f, 0x1.2db534p-3f,
     0x1.e6eacep-54f, 0x1.cf2caep-101f, 0.0f, 0x1.e9703ap-102f, 0.0f, 0x1.b79f72p-81f,
     0x1.6a1d5cp-17f, 0.0f, 0x1.977deap-18f, 0.0f, 0x1.b9240ap-41f, 0.0f,
     0x1.31bbc6p-86f, 0x1.0ae4ecp-89f, 0x1.9db6a6p-11f, 0.0f, 0x1.fc7062p-12f,
     0x1.d174cap-35f, 0.0f, 0.0f, 0.0f, 0x1.8f5962p-96f, 0x1.19d51cp-18f, 0.0f, 0.0f,
     0x1.f17838p-104f, 0.0f, 0x1.8d8a54p-89f, 0.0f, 0x1.fe34b6p-113f, 0.0f, 0.0f,
     0.0f, 0x1.76783ap-124f, 0x1.8d3decp-66f, 0x1.00d104p-21f, 0.0f, 0x1.8be022p-64f,
     0.0f, 0x1.826f54p-85f, 0x1.26d17p-11f, 0.0f, 0x1.70afbp-67f, 0x1.59cfaep-64f,
     0x1.8c6512p-8f, 0.0f, 0x1.8ec346p-88f, 0.0f, 0.0f, 0.0f, 0x1.e67508p-71f,
     0x1.f5227p-66f, 0.0f, 0x1.43a29p-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ee0846p-119f, 0x1.dbf496p-22f, 0x1.bb2a1ap-68f, 0x1.48b1acp-5f,
     0x1.19cfeap-112f, 0.0f, 0.0f, 0.0f, 0x1.0d276cp-52f, 0x1.2be2dep-6f,
     0x1.f29d62p-93f, 0x1.d7435p-54f, 0.0f, 0.0f, 0x1.4c4cdap-49f, 0x1.4a1154p-55f,
     0.0f, 0x1.05a06ap-49f, 0x1.3e1d1ap-88f, 0x1.97f37p-67f, 0.0f, 0x1.efad8ap-91f,
     0.0f, 0x1.d5fefcp-92f, 0x1.3d6856p-63f, 0.0f, 0.0f, 0.0f, 0x1.6eaa62p-2f, 0.0f,
     0.0f, 0x1.f45fbap-95f, 0.0f, 0x1.ddbe92p-64f, 0.0f, 0.0f, 0.0f, 0x1.665f74p-81f,
     0x1.3645eep-97f, 0.0f, 0x1.9d3912p-96f, 0x1.686966p-123f, 0.0f, 0.0f, 0.0f,
     0x1.0f0beep-81f, 0.0f, 0.0f, 0x1.cc1828p-44f, 0.0f, 0.0f, 0x1.c0c9ap-97f,
     0x1.bce7cap-7f, 0.0f, 0x1.f8558ap-77f, 0.0f, 0x1.ae05b8p-76f, 0x1.f52eb2p-78f,
     0x1.56f12ap-66f, 0x1.df8f1ap-85f, 0x1.64d50ep-99f, 0.0f, 0.0f, 0x1.bca0bcp-112f,
     0.0f, 0.0f, 0.0f, 0x1.e3e694p-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4d6dc2p-8f,
     0x1.616648p-100f, 0.0f, 0x1.9469cp-96f, 0x1.c1280cp-114f, 0.0f, 0.0f,
     0x1.6281c2p-117f, 0x1.23495p-63f, 0.0f, 0x1.960948p-100f, 0.0f, 0x1.c30ae4p-125f,
     0.0f, 0.0f, 0x1.5b753cp-26f, 0x1.8462e4p-15f, 0x1.35e5cp-17f, 0.0f, 0.0f,
     0x1.513b98p-32f, 0.0f, 0x1.b6051p-40f, 0.0f, 0x1.87d18ap-46f, 0.0f,
     0x1.5e953ap-15f, 0.0f, 0x1.b2c616p-5f, 0x1.500546p-2f, 0.0f, 0x1.c584e6p-31f,
     0.0f, 0.0f, 0.0f, 0x1.e60042p-48f, 0.0f, 0.0f, 0x1.32effap-117f, 0x1.caeed4p-47f,
     0.0f, 0.0f, 0x1.dfce6ep-29f, 0x1.17a61p-97f, 0.0f, 0x1.add60ap-105f, 0.0f, 0.0f,
     0x1p0f, 0x1.da4228p-116f, 0x1.ec7b54p-30f, 0.0f, 0x1.03a1c8p-68f,
     0x1.3de66cp-50f, 0x1.7d540cp-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.84266ep-70f,
     0x1.1992c6p-73f, 0.0f, 0x1.9ca1cep-69f, 0x1.17fc52p-121f, 0.0f, 0x1.b897a4p-70f,
     0x1.ea4ccap-4f, 0.0f, 0x1.a28918p-29f, 0.0f, 0.0f, 0x1.01e9d8p-86f, 0.0f, 0.0f,
     0.0f, 0x1.8aaa48p-13f, 0.0f, 0x1.a3585p-85f, 0.0f, 0x1.f8d9d6p-13f, 0.0f,
     0x1.a55cb2p-63f, 0x1.183d82p-82f, 0.0f, 0x1.47873ap-69f, 0.0f, 0.0f, 0.0f,
     0x1.cbe7p-57f, 0x1.7c2ab6p-77f, 0.0f, 0x1.b73156p-47f, 0x1.91f53cp-74f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.2adb0ep-116f, 0x1.121454p-23f, 0x1.3ceedap-42f,
     0x1.68b2d4p-94f, 0.0f, 0x1.b332fap-102f, 0x1.e36718p-74f, 0.0f, 0x1.2250fep-102f,
     0x1.b487f4p-77f, 0x1.3d1fb4p-61f, 0.0f, 0x1.65560ep-69f, 0x1.e08948p-72f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.34d75p-101f, 0x1.b00c1ep-45f,
     0x1.9337f8p-77f, 0.0f, 0x1.5af772p-58f, 0.0f, 0.0f, 0x1.20cdcp-6f,
     0x1.36717ap-73f, 0x1.37c3eap-29f, 0.0f, 0x1.ed9a16p-123f, 0.0f, 0x1.e662eep-24f,
     0x1.2a6084p-45f, 0x1.31384cp-116f, 0x1.1afdeep-67f, 0x1.44dee4p-116f, 0.0f, 0.0f,
     0x1.22c9cep-41f, 0x1.12282p-41f, 0.0f, 0.0f, 0x1.c5328p-44f, 0.0f,
     0x1.7eeca4p-66f, 0x1.380eecp-47f, 0.0f, 0x1.0b27f2p-85f, 0x1.01a562p-90f, 0.0f,
     0.0f, 0x1.ac48d2p-42f, 0.0f, 0.0f, 0x1.9a978cp-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f74c62p-48f, 0x1.458adep-28f, 0.0f, 0x1.d9c4fap-116f, 0.0f, 0x1.678316p-42f,
     0.0f, 0.0f, 0x1.a48ae8p-110f, 0.0f, 0.0f, 0x1.864a84p-85f, 0.0f, 0.0f,
     0x1.1f78fcp-93f, 0x1.a8e012p-27f, 0x1.1387ecp-53f, 0x1.f1a90cp-29f,
     0x1.4d02dep-109f, 0.0f, 0x1.7f2c8ap-52f, 0.0f, 0.0f, 0.0f, 0x1.07d798p-77f,
     0x1.9aa4b4p-21f, 0x1.f754cp-90f, 0x1.427c3p-73f, 0.0f, 0x1.8b7062p-70f,
     0x1.427db2p-97f, 0.0f, 0x1.4856aep-50f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7664a2p-3f, 0x1.77dc3cp-4f, 0.0f, 0x1.55d772p-91f, 0x1.e9ad46p-7f,
     0x1.a828ccp-95f, 0x1.5b5d5cp-97f, 0x1.a37064p-9f, 0x1.66b0dap-107f, 0.0f, 0.0f,
     0x1.de31bp-72f, 0.0f, 0x1.250c42p-99f, 0.0f, 0.0f, 0.0f, 0x1.2c2876p-2f, 0.0f,
     0.0f, 0x1.e658dep-44f, 0x1.4a0136p-115f, 0x1.2282b4p-5f, 0.0f, 0.0f,
     0x1.a11768p-13f, 0.0f, 0.0f, 0.0f, 0x1.20bb72p-27f, 0x1.c04dbcp-76f,
     0x1.b26bc4p-3f, 0x1.d08bbcp-28f, 0.0f, 0x1.c0c024p-104f, 0.0f, 0.0f, 0.0f,
     0x1.4385f6p-24f, 0x1.63961ep-18f, 0x1.2a22d6p-62f, 0x1.72a8f8p-80f, 0.0f,
     0x1.2a1e6cp-8f, 0x1.152482p-110f, 0x1.624ff6p-12f, 0.0f, 0.0f, 0.0f,
     0x1.f6e502p-34f, 0x1.92512ep-10f, 0x1.66d628p-17f, 0.0f, 0.0f, 0.0f,
     0x1.983e46p-86f, 0x1.a02078p-124f, 0x1.275edp-19f, 0x1.0433b4p-102f, 0.0f,
     0x1.91f156p-4f, 0x1.e265p-24f, 0x1.06dad6p-23f, 0.0f, 0x1.44af7ep-123f,
     0x1.c525bp-28f, 0x1.0bf738p-51f, 0x1.f1617p-87f, 0x1.b58dfp-108f, 0.0f,
     0x1.a22394p-85f, 0.0f, 0.0f, 0x1.60d2e4p-105f, 0x1.46b9e4p-104f, 0x1.107bacp-24f,
     0x1.79f3cp-80f, 0x1.fe040ep-58f, 0x1.3a671cp-99f, 0.0f, 0.0f, 0x1.f685cap-56f,
     0.0f, 0x1.66ffap-101f, 0x1.e8cf9cp-34f, 0.0f, 0x1.3acc5ap-108f, 0x1.71b5fp-74f,
     0x1.1693f2p-73f, 0x1.569bd8p-27f, 0.0f, 0.0f, 0.0f, 0x1.31509ap-14f,
     0x1.a41b1p-46f, 0.0f, 0x1.60ac84p-117f, 0.0f, 0x1.3b3f4cp-14f, 0.0f,
     0x1.68a4b4p-20f, 0.0f, 0.0f, 0x1.43770ap-18f, 0.0f, 0.0f, 0.0f, 0x1.d39068p-11f,
     0x1.c79904p-79f, 0.0f, 0.0f, 0x1.0cef12p-37f, 0x1.67f858p-77f, 0.0f,
     0x1.c84898p-33f, 0x1.f74ebcp-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.434f42p-25f,
     0x1.fcbc5cp-75f, 0.0f, 0x1.682a9p-72f, 0x1.0c19a2p-111f
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
    
    global_bench_acc = 0.0f;
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
        float bench_acc;
        int32_t i;
        __m128 carg;
        __m128 carg1;
        __m128 carg2;
        float tmp0;
        int32_t tmp1;

        i = INT32_C(0);
        bench_acc = 0.0f;

        for (;(i < INT32_C(1001));){
            float tmp0;
            float tmp1;
            __m128 carg;
            __m128 carg1;
            __m128 carg2;
            float tmp2;
            int32_t tmp3;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_finz_exp2f1_u35purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            carg = _mm_set_ss(bench_acc);
            carg1 = _mm_set_ss(tmp1);
            carg2 = _mm_add_ss(carg, carg1);
            tmp2 = _mm_cvtss_f32(carg2);
            bench_acc = tmp2;
            tmp3 = i + INT32_C(1);
            i = tmp3;
        }
        carg = _mm_set_ss(global_bench_acc);
        carg1 = _mm_set_ss(bench_acc);
        carg2 = _mm_add_ss(carg, carg1);
        tmp0 = _mm_cvtss_f32(carg2);
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
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_finz_exp2f1_u35purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_exp2f1_u35purecfma bench acc %a\n", global_bench_acc);
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
