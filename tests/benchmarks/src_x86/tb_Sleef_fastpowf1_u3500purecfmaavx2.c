/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_fastpowf1_u3500purecfma.c --function \
 *     Sleef_fastpowf1_u3500purecfma --arity 2 --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary32,binary32 --bench \
 *     --no-embedded-bin --target x86_sse2
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
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.05fd66p-70f, 0.0f, 0x1.7a816ep-76f, 0.0f,
     0x1.159e7p-10f, 0x1.820386p-66f, 0.0f, 0x1.8fa91cp-28f, 0.0f, 0.0f,
     0x1.d6bebep-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.75bd36p-119f, 0.0f, 0.0f,
     0x1.30ea0ap-112f, 0x1.2c2ab4p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.2b3edap-13f, 0x1.c7729ap-97f, 0.0f, 0x1.32f4p-109f, 0x1.1af516p-1f,
     0x1.2d8d16p-88f, 0.0f, 0.0f, 0x1.7aa77ap-121f, 0x1.cc806ap-33f, 0x1.0d01p-15f,
     0.0f, 0x1.1cc8dap-80f, 0x1.1b9a12p-110f, 0x1.b3a192p-78f, 0.0f, 0.0f, 0.0f,
     0x1.0fb856p-22f, 0.0f, 0x1.eba21ep-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1b0756p-25f, 0.0f, 0.0f, 0x1.cec9ep-5f, 0x1.503f4cp-71f, 0x1.f23f48p-82f,
     0x1.370becp-121f, 0.0f, 0x1.b26ba4p-58f, 0.0f, 0.0f, 0x1.a52f9ep-98f,
     0x1.1cf3c4p-11f, 0.0f, 0.0f, 0x1.980dp-118f, 0x1.10b76p-48f, 0x1.cef984p-69f,
     0.0f, 0x1.f868e4p-103f, 0.0f, 0.0f, 0x1.451a0ap-120f, 0x1.aa4578p-4f, 0.0f,
     0x1.e413p-59f, 0.0f, 0x1.642c06p-81f, 0.0f, 0.0f, 0x1.af83b8p-74f,
     0x1.f1055cp-17f, 0x1.ace9p-25f, 0x1.50b86cp-77f, 0x1.d60c94p-86f, 0.0f,
     0x1.b2879p-16f, 0x1.ce58f6p-44f, 0.0f, 0x1.d18bccp-6f, 0x1.0c821ap-12f,
     0x1.ae6346p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f0a2fap-102f, 0.0f,
     0x1.8da3bep-124f, 0.0f, 0x1.4f8b2ap-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5d5894p-17f, 0.0f, 0.0f, 0.0f, 0x1.2ff9e2p-102f, 0.0f, 0x1.a82456p-114f,
     0.0f, 0.0f, 0.0f, 0x1.b16acap-40f, 0x1.966f7cp-74f, 0x1.66c3fep-99f,
     0x1.40020cp-37f, 0x1.a267f2p-81f, 0.0f, 0x1.1300a4p-36f, 0x1.87a378p-19f, 0.0f,
     0x1.81f58ep-57f, 0.0f, 0x1.f9344ep-59f, 0.0f, 0x1.9a5518p-34f, 0x1.cb5118p-26f,
     0x1.5cd7c2p-14f, 0.0f, 0.0f, 0x1.9daa7ep-11f, 0.0f, 0x1.1342f4p-13f,
     0x1.ce4106p-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e62064p-19f, 0.0f, 0.0f, 0.0f,
     0x1.a7134ap-110f, 0x1.8d6c84p-69f, 0x1.892b22p-11f, 0.0f, 0.0f, 0x1.d9eda6p-125f,
     0.0f, 0x1.441c94p-33f, 0x1.070372p-67f, 0.0f, 0x1.49121cp-118f, 0x1.326874p-47f,
     0.0f, 0.0f, 0x1.f9458cp-101f, 0.0f, 0x1.c3b7f6p-96f, 0x1.dc9384p-60f,
     0x1.d434eep-31f, 0x1.e681b6p-60f, 0x1.a6ddaep-90f, 0x1.c980ep-111f, 0.0f, 0.0f,
     0.0f, 0x1.d10b7ap-41f, 0.0f, 0x1.bfa7a6p-105f, 0x1.550e5ep-105f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.808e06p-45f, 0x1.9bbd08p-12f, 0.0f, 0.0f, 0x1.32a9b4p-80f,
     0.0f, 0.0f, 0.0f, 0x1.69ce4p-81f, 0.0f, 0x1.e671dap-78f, 0.0f, 0x1.88b2d8p-47f,
     0.0f, 0x1.98e5dp-95f, 0x1.3248aap-79f, 0.0f, 0.0f, 0x1.1a52dp-51f, 0.0f, 0.0f,
     0x1.b53bb6p-23f, 0.0f, 0x1.5187cep-90f, 0x1.3f40dap-122f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a0ffe8p-76f, 0x1.9c41f4p-107f, 0.0f, 0x1p0f, 0.0f, 0x1.75a9eap-28f, 0.0f,
     0x1.04a2c6p-9f, 0.0f, 0x1.f10e12p-112f, 0.0f, 0.0f, 0.0f, 0x1.6f7d12p-21f, 0.0f,
     0x1.569a36p-29f, 0x1.e23b9ap-13f, 0x1.ec0774p-36f, 0x1.98b70ap-29f, 0.0f, 0.0f,
     0x1.b9c354p-50f, 0.0f, 0.0f, 0.0f, 0x1.ea0322p-86f, 0.0f, 0.0f, 0.0f,
     0x1.0722a4p-105f, 0.0f, 0x1.b52b18p-17f, 0.0f, 0x1.de8ea8p-49f, 0x1.134b82p-78f,
     0x1.a995a2p-121f, 0.0f, 0x1.8e1fa4p-66f, 0.0f, 0x1.32307ep-13f, 0x1.2da5dcp-11f,
     0x1.49a79cp-2f, 0x1.fba4fp-36f, 0.0f, 0.0f, 0x1.c3d7d6p-112f, 0x1.295c8ep-28f,
     0x1.d2597p-18f, 0x1.b95bfp-75f, 0.0f, 0.0f, 0x1.72c78cp-54f, 0.0f, 0.0f,
     0x1.99b234p-49f, 0.0f, 0.0f, 0x1.825524p-101f, 0x1.0ae624p-11f, 0x1.a65a94p-5f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.8db05cp-91f, 0x1.45d68ep-71f, 0.0f, 0.0f,
     0x1.7c27f6p-45f, 0.0f, 0x1.4e159ep-1f, 0x1.5cea26p-73f, 0.0f, 0.0f,
     0x1.8527acp-75f, 0x1.0f01p-43f, 0.0f, 0x1.3efa52p-120f, 0.0f, 0x1.584e3cp-47f,
     0x1.907988p-59f, 0x1.ff327cp-51f, 0x1.659cfep-41f, 0x1.3d4912p-116f, 0.0f, 0.0f,
     0x1.f2efe4p-75f, 0x1.ffbb38p-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.da5f42p-109f,
     0x1.2497ecp-125f, 0.0f, 0x1.f602f2p-54f, 0.0f, 0.0f, 0x1.18ba58p-23f,
     0x1.63a928p-88f, 0.0f, 0.0f, 0x1.e900d8p-62f, 0.0f, 0.0f, 0.0f, 0x1.3744fcp-11f,
     0.0f, 0x1.1d8572p-61f, 0.0f, 0x1.a6f116p-1f, 0x1.330fbep-14f, 0.0f,
     0x1.157c2ap-53f, 0x1.bf37aep-17f, 0x1.fca1dp-65f, 0.0f, 0x1.a181eap-33f, 0.0f,
     0.0f, 0x1.1f300cp-68f, 0.0f, 0.0f, 0x1.5a4cap-23f, 0.0f, 0x1.b06b32p-115f,
     0x1.5dced4p-54f, 0x1.43319p-105f, 0x1.e9ce64p-103f, 0x1.844268p-23f,
     0x1.47e15ep-32f, 0x1.13b8ep-45f, 0.0f, 0.0f, 0x1.09a92p-27f, 0x1.0cc1f8p-87f,
     0.0f, 0x1.f4468cp-67f, 0x1.26ec96p-97f, 0x1.496d9ap-6f, 0x1.da7b7ap-11f, 0.0f,
     0x1.d10894p-12f, 0x1.3d9106p-61f, 0x1p0f, 0x1.0e995cp-104f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.7f9a16p-72f, 0.0f, 0x1.b5512ep-42f, 0x1.fb6886p-106f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.833d82p-26f, 0x1.57e976p-51f, 0.0f, 0.0f, 0x1.88a41p-37f,
     0x1.72c66ep-55f, 0.0f, 0.0f, 0x1.19e904p-2f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e5088p-115f, 0x1.517c8p-58f, 0.0f, 0.0f, 0x1.dee586p-110f, 0.0f,
     0x1.feb1b6p-39f, 0x1.941376p-120f, 0.0f, 0.0f, 0x1.37c69cp-84f, 0.0f, 0.0f,
     0x1.abd36p-78f, 0x1.7d375ap-120f, 0.0f, 0x1.665e64p-76f, 0.0f, 0x1.f0e2cap-85f,
     0x1.c7222ap-94f, 0x1.a46f02p-7f, 0x1.3d20ap-60f, 0x1.8e5e82p-37f, 0.0f,
     0x1.bf44bp-51f, 0x1.2525ecp-43f, 0x1.6e8378p-2f, 0x1.e23fccp-79f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ce8abcp-85f, 0x1.4ad762p-87f, 0.0f, 0.0f,
     0x1.f0d528p-5f, 0.0f, 0x1.34e7b6p-96f, 0x1.c165fap-92f, 0x1.e5964ap-107f,
     0x1.577fbcp-1f, 0x1.fcccfap-89f, 0.0f, 0.0f, 0.0f, 0x1.fb3c7ep-43f,
     0x1.12f0eap-93f, 0.0f, 0x1.38339ep-28f, 0.0f, 0x1.b607bap-109f, 0.0f,
     0x1.aedc1ep-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d6ee56p-52f, 0x1.47f4acp-25f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b44be2p-108f, 0.0f, 0x1.a7d486p-79f, 0.0f, 0x1.793fc8p-25f,
     0x1.80c68ap-47f, 0x1.e559cp-73f, 0x1.116ffep-21f, 0x1.dfbe76p-45f, 0.0f,
     0x1.d8e658p-91f, 0.0f, 0x1.314298p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6824bcp-110f, 0x1.ae6e16p-61f, 0.0f, 0x1.007928p-78f, 0x1.6e1b7ap-59f,
     0x1.77e94ep-99f, 0.0f, 0.0f, 0x1.d611cap-66f, 0x1.04e856p-27f, 0x1.ad7c6p-44f,
     0.0f, 0.0f, 0.0f, 0x1.9f6528p-63f, 0x1.7d34acp-50f, 0x1.da1552p-66f, 0.0f,
     0x1.186de6p-26f, 0.0f, 0x1.f1b6e2p-59f, 0x1.3e0e3p-87f, 0x1.7b86cap-69f, 0.0f,
     0x1.6228b2p-123f, 0x1.a3c21ap-92f, 0.0f, 0.0f, 0x1.78cb1cp-71f, 0.0f, 0.0f,
     0x1.14ccdp-20f, 0x1.d63d5p-17f, 0x1.bb182cp-73f, 0x1.dde63ep-18f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.24eaap-5f, 0x1.0c6bb4p-69f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1cc184p-58f, 0.0f, 0x1.fdf52cp-90f, 0x1.c10d26p-91f, 0.0f, 0x1.ce95b8p-55f,
     0.0f, 0x1.b0e55p-94f, 0x1.28478ep-8f, 0x1.139782p-48f, 0.0f, 0.0f, 0.0f,
     0x1.580eacp-122f, 0x1.373742p-69f, 0.0f, 0.0f, 0x1.de5446p-84f, 0x1.2e6884p-87f,
     0x1.bbb00ap-21f, 0x1.fc8f62p-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f,
     0x1.d22bd4p-49f, 0x1.87f818p-104f, 0.0f, 0.0f, 0x1.c0e3bcp-104f, 0.0f, 0.0f,
     0x1.938672p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dad56ep-8f,
     0x1.553d46p-81f, 0x1.a33c38p-86f, 0.0f, 0.0f, 0.0f, 0x1.a70d48p-31f, 0.0f,
     0x1.a67deep-1f, 0x1.7e19ccp-11f, 0.0f, 0x1.044ddap-3f, 0.0f, 0x1.4b661ap-115f,
     0x1.f64ecep-49f, 0.0f, 0.0f, 0.0f, 0x1.0a9bdep-98f, 0.0f, 0x1.b137fp-59f,
     0x1.2a06c6p-109f, 0.0f, 0x1.68675p-6f, 0x1.d4f6b6p-54f, 0x1.d756bcp-23f, 0.0f,
     0.0f, 0x1.7511c4p-21f, 0.0f, 0x1.9db55p-33f, 0.0f, 0.0f, 0x1.02e8ccp-107f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.294948p-105f, 0x1.f53b8p-117f, 0x1.50139ap-65f,
     0x1.288eap-98f, 0x1.aa112p-44f, 0x1.06dabep-104f, 0.0f, 0x1.d40da8p-26f,
     0x1.9727c6p-104f, 0x1.b11a2ap-69f, 0x1.2f120ep-80f, 0.0f, 0x1.d85f5ep-103f,
     0x1.943036p-103f, 0.0f, 0x1.d38a8ap-82f, 0x1.8758cep-29f, 0.0f, 0x1.dc153ap-83f,
     0x1.4ccc2cp-44f, 0x1.08dd5p-119f, 0.0f, 0.0f, 0x1.d3103p-2f, 0.0f, 0.0f, 0.0f,
     0x1.1afe02p-61f, 0.0f, 0x1.badaecp-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c20aaep-111f, 0.0f, 0x1.74afc2p-93f, 0.0f, 0.0f, 0.0f, 0x1.e69b68p-118f,
     0.0f, 0x1.7f6336p-75f, 0.0f, 0x1.19ec56p-69f, 0.0f, 0x1.a61b52p-124f,
     0x1.2f68a4p-75f, 0x1.13ea12p-42f, 0.0f, 0.0f, 0x1.8550fap-68f, 0x1.c59f0cp-106f,
     0x1.b54608p-1f, 0x1.817fc6p-17f, 0x1.d7d5f6p-113f, 0.0f, 0.0f, 0x1.1715p-31f,
     0x1.e364fcp-54f, 0.0f, 0x1.50f0fp-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.363b74p-115f,
     0.0f, 0x1.fdad0cp-65f, 0.0f, 0x1.88e046p-115f, 0x1.f6c1e8p-54f, 0.0f,
     0x1.63448cp-63f, 0.0f, 0x1.f10e4cp-61f, 0x1.5741a8p-69f, 0.0f, 0x1.a706eap-104f,
     0.0f, 0.0f, 0x1.4fa6f4p-25f, 0.0f, 0x1.298ea2p-36f, 0x1.8d3a0cp-54f, 0.0f,
     0x1.63affep-93f, 0x1.4ad4cap-59f, 0.0f, 0.0f, 0x1.3d87cp-94f, 0.0f, 0.0f, 0.0f,
     0x1.bc17f8p-71f, 0.0f, 0.0f, 0x1.792c58p-52f, 0.0f, 0x1.18aaaep-28f,
     0x1.0e707p-62f, 0x1.42ef18p-86f, 0.0f, 0.0f, 0x1.1793a4p-50f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.d217c4p-57f, 0.0f, 0x1.a4262ep-38f, 0.0f, 0x1.399bb8p-74f,
     0x1.c75c6p-65f, 0x1.9df4cp-26f, 0.0f, 0x1.41c39ap-55f, 0.0f, 0.0f,
     0x1.737a08p-93f, 0.0f, 0x1.dcff0ep-71f, 0x1.d6fb34p-116f, 0x1.a1d0fap-6f, 0.0f,
     0x1.15c318p-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7be0dcp-64f, 0.0f, 0.0f, 0.0f,
     0x1.fed3bcp-90f, 0x1.12783ep-81f, 0.0f, 0.0f, 0.0f, 0x1.f3f944p-54f, 0.0f, 0.0f,
     0x1.275106p-120f, 0.0f, 0.0f, 0x1.a0b146p-56f, 0x1.16838p-47f, 0x1.d472d6p-114f,
     0.0f, 0x1.24883p-115f, 0.0f, 0x1.a5155p-49f, 0x1.25406ap-65f, 0.0f,
     0x1.eb7c6p-96f, 0x1p0f, 0x1.558f54p-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f6c498p-64f, 0x1.b64ef2p-13f, 0.0f, 0x1.4b70b4p-88f, 0.0f, 0x1.24646cp-26f,
     0.0f, 0x1.84a5ecp-63f, 0x1.d88e3p-18f, 0.0f, 0.0f, 0x1.a7d654p-25f, 0.0f, 0.0f,
     0.0f, 0x1.5e198ap-71f, 0.0f, 0x1.7fb3b6p-70f, 0.0f, 0x1.1c7608p-65f,
     0x1.a38642p-52f, 0x1.1848c8p-76f, 0x1.0d8cd2p-48f, 0x1.558214p-54f,
     0x1.32f428p-24f, 0x1.f00062p-120f, 0x1.5a6996p-21f, 0.0f, 0x1.8eb13cp-8f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.8531f6p-105f, 0.0f, 0.0f, 0.0f, 0x1.38191p-52f, 0.0f,
     0x1.bfc062p-3f, 0.0f, 0.0f, 0.0f, 0x1.093692p-58f, 0.0f, 0.0f, 0x1.f888e4p-20f,
     0.0f, 0x1.a79a78p-55f, 0x1.2b2bb2p-73f, 0.0f, 0.0f, 0x1.98e814p-101f, 0.0f,
     0x1.7f15bap-115f, 0x1.c6cd58p-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.149542p-83f, 0.0f,
     0x1.db8d18p-79f, 0.0f, 0x1.ed093ap-3f, 0.0f, 0.0f, 0x1.fa6382p-41f, 0.0f, 0.0f,
     0x1.4939d4p-8f, 0x1.cadcbap-123f, 0x1.8f0426p-74f, 0.0f, 0.0f, 0x1.d188dap-113f,
     0.0f, 0x1.e2343p-59f, 0x1.4c72c8p-19f, 0.0f, 0.0f, 0.0f, 0x1.6704eep-74f, 0.0f,
     0x1.96b388p-55f, 0.0f, 0.0f, 0x1.36e38ap-78f, 0.0f, 0x1.c58e24p-54f, 0.0f, 0.0f,
     0x1.52aa08p-18f, 0x1.afdb44p-13f, 0x1.e492b4p-71f, 0.0f, 0x1.992696p-18f,
     0x1.8c89e6p-8f, 0x1.5e252p-48f, 0.0f, 0x1.7e1b82p-110f, 0x1.4c7458p-59f, 0.0f,
     0x1.f2c244p-83f, 0x1.141064p-79f, 0x1.b32164p-57f, 0x1.826d1cp-113f, 0.0f,
     0x1.55780ep-36f, 0x1.727a6ap-109f, 0x1.6edeeep-85f, 0x1.2995ecp-91f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cf74e6p-10f, 0x1.abb16ap-88f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.480dep-6f, 0x1.f23922p-11f, 0.0f, 0.0f, 0x1.c23f48p-71f,
     0x1.713ce4p-110f, 0x1.512486p-115f, 0.0f, 0x1.6a355cp-14f, 0.0f, 0.0f,
     0x1.a5acbep-23f, 0.0f, 0.0f, 0.0f, 0x1.7a6d94p-113f, 0x1.65086ap-112f,
     0x1.2aa94ep-46f, 0x1.d53684p-123f, 0.0f, 0.0f, 0x1.283daap-26f, 0.0f,
     0x1.08dcd8p-68f, 0.0f, 0.0f, 0.0f, 0x1.afd1bp-41f, 0x1.724588p-60f, 0.0f, 0.0f,
     0x1.af73dp-9f, 0.0f, 0x1.162bccp-94f, 0.0f, 0x1.0a8d32p-84f, 0.0f, 0.0f,
     0x1.b30d9cp-41f, 0x1.875e86p-53f, 0x1.5b6422p-4f, 0.0f, 0x1.91e672p-11f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.86535cp-40f, 0.0f, 0.0f, 0x1.f67456p-114f,
     0.0f, 0x1.a3898ap-51f, 0x1.193f8p-89f, 0.0f, 0.0f, 0x1.e2c4e8p-30f, 0.0f, 0.0f,
     0x1.cf5d94p-66f, 0.0f, 0x1.5982fcp-24f, 0.0f, 0x1.c2d8e2p-59f, 0.0f, 0.0f,
     0x1.ea333p-43f, 0x1.b90202p-38f, 0.0f, 0.0f, 0x1.e3ac5p-31f, 0x1.d4c832p-126f,
     0.0f, 0x1.84980ep-23f, 0.0f, 0.0f, 0x1.c27c8p-20f, 0x1.c84c6ap-125f, 0.0f, 0.0f,
     0x1.10e078p-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.80a938p-74f,
     0x1.a48dcp-91f, 0x1.af0fa4p-49f, 0x1.9964fap-40f, 0.0f, 0x1.d46652p-95f, 0.0f,
     0.0f, 0x1.c57eb6p-24f, 0x1.75bb84p-64f, 0.0f, 0x1.f2b5bap-81f, 0.0f, 0.0f,
     0x1.b0418ep-68f, 0x1.2524d4p-21f, 0x1.7f2da8p-72f, 0x1.565404p-56f
};
static const float external_bench_wrapper_input_table_arg1[1001]  = {
     0x1.9b3d6p-84f, 0x1.bce72cp-116f, 0x1.772454p-13f, 0x1.132c9p-54f,
     0x1.5de9aap-118f, 0.0f, 0.0f, 0x1.e43bc8p-114f, 0.0f, 0x1.f3092cp-47f, 0.0f,
     0x1.509bcep-101f, 0x1.43c3a4p-17f, 0.0f, 0x1.cce50ap-110f, 0.0f, 0x1.d8faaep-58f,
     0.0f, 0x1.2bfa4ep-39f, 0.0f, 0.0f, 0x1.17e47p-99f, 0x1.800cf8p-74f, 0.0f,
     0x1.150024p-103f, 0x1.d31602p-120f, 0.0f, 0.0f, 0x1.74523ep-32f, 0x1.044b3p-118f,
     0.0f, 0x1.3faf6ep-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d08a02p-30f, 0.0f,
     0x1.e11b38p-54f, 0x1.1c0242p-67f, 0.0f, 0x1.92d95p-35f, 0x1.4041ecp-39f,
     0x1.4de942p-122f, 0.0f, 0x1.1d03fcp-83f, 0.0f, 0x1.349e66p-26f, 0.0f, 0.0f,
     0x1.5019d6p-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.19bcbcp-4f, 0x1.769fc2p-94f,
     0x1.8f51bcp-33f, 0x1.489a36p-73f, 0.0f, 0.0f, 0x1.76b8f2p-75f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.525f7ep-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.18575ap-59f,
     0.0f, 0x1.b06c3ap-41f, 0x1.84e17cp-77f, 0x1.86fee4p-36f, 0x1.5c5bfap-37f,
     0x1.307c22p-39f, 0x1.a5f1eap-60f, 0.0f, 0x1.c453acp-36f, 0.0f, 0x1.678d38p-54f,
     0.0f, 0.0f, 0x1.302552p-2f, 0x1.497ad6p-104f, 0x1.5d41acp-30f, 0x1.bec454p-80f,
     0x1.1ae08cp-125f, 0.0f, 0.0f, 0x1.9ea09cp-82f, 0x1.80eac4p-97f, 0.0f,
     0x1.0a9f6ap-57f, 0x1.5d0d08p-94f, 0x1.586a1ap-42f, 0.0f, 0x1.69e926p-56f,
     0x1.9dca4ep-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5b3ddp-115f, 0.0f, 0.0f,
     0x1.d13188p-42f, 0.0f, 0.0f, 0x1.e3b6acp-18f, 0.0f, 0x1.f0da44p-71f,
     0x1.1dfb8ep-95f, 0.0f, 0x1.c6aaaap-106f, 0.0f, 0x1.f7c9cep-14f, 0x1.d4f45cp-7f,
     0x1.253198p-81f, 0x1.d44bd2p-114f, 0x1.a7acc4p-38f, 0.0f, 0x1.94ae2ap-100f,
     0x1.452edep-125f, 0.0f, 0x1.b4ed6ap-15f, 0x1.a8c022p-32f, 0.0f, 0x1.69a902p-80f,
     0.0f, 0x1.ad7944p-27f, 0x1.c1328ep-19f, 0.0f, 0x1.d83506p-73f, 0x1.b44baap-3f,
     0.0f, 0x1.2befbap-64f, 0x1.b2198ap-26f, 0.0f, 0x1.277794p-50f, 0x1.9a46aep-104f,
     0x1.813d7ep-42f, 0x1.3c2edap-73f, 0x1.510f6cp-20f, 0x1.50dda2p-14f, 0.0f, 0.0f,
     0x1.ed3f7ap-86f, 0x1.9eee82p-112f, 0x1.45299ep-95f, 0x1.41784ap-25f, 0.0f, 0.0f,
     0x1.081f78p-114f, 0x1.cd843ep-110f, 0x1.0a5818p-63f, 0.0f, 0x1.1b04dep-2f, 0.0f,
     0x1.031986p-5f, 0.0f, 0x1.6097d6p-64f, 0x1.3bf2c8p-77f, 0x1.6ba59ep-28f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6eb0bep-39f,
     0x1.df0312p-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f0215ep-3f,
     0x1.27e14p-1f, 0.0f, 0x1.0ba1d6p-82f, 0.0f, 0x1.caf20ap-118f, 0.0f,
     0x1.97ba32p-59f, 0x1.b88252p-94f, 0x1.24635ap-73f, 0.0f, 0x1.ffc65ep-57f, 0.0f,
     0x1.99d482p-83f, 0.0f, 0.0f, 0x1.4894dcp-93f, 0.0f, 0x1.0cc676p-107f, 0.0f, 0.0f,
     0.0f, 0x1.794c54p-1f, 0x1.a65e04p-119f, 0x1.9ce044p-126f, 0x1.384916p-71f, 0.0f,
     0x1.f9157p-124f, 0.0f, 0.0f, 0x1.26bc64p-22f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d880a8p-121f, 0.0f, 0.0f, 0x1.4ff102p-7f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1649ecp-74f, 0.0f, 0x1.db9e9p-39f, 0x1.12d87cp-35f, 0x1.a1b9p-114f,
     0x1.b81384p-111f, 0x1.cb2058p-27f, 0.0f, 0x1.9e547ep-47f, 0x1.7e1352p-34f,
     0x1.6202eep-10f, 0.0f, 0x1.c2f07ap-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.011178p-27f,
     0x1.6bd22cp-22f, 0.0f, 0.0f, 0x1.6fef32p-39f, 0.0f, 0x1.2d5ddp-86f, 0.0f, 0.0f,
     0x1.43eaa4p-58f, 0x1p0f, 0.0f, 0x1.2426b6p-112f, 0.0f, 0x1.302672p-123f,
     0x1.37217cp-35f, 0x1.bb1cbp-52f, 0.0f, 0.0f, 0.0f, 0x1.4877e6p-51f, 0.0f, 0.0f,
     0.0f, 0x1.4e4b28p-45f, 0.0f, 0.0f, 0x1.4d603cp-75f, 0x1.f7edd8p-15f,
     0x1.d4f5fp-83f, 0x1.7a91a4p-80f, 0.0f, 0.0f, 0x1.6796c6p-29f, 0x1.caec56p-94f,
     0.0f, 0.0f, 0x1.0f88e6p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.98f1d8p-28f,
     0x1.29b38ap-27f, 0.0f, 0.0f, 0x1.b10cbcp-37f, 0x1.e16a66p-119f, 0.0f,
     0x1.6c8236p-113f, 0x1.48f6dp-85f, 0.0f, 0x1.ff0326p-93f, 0x1.7eb318p-63f,
     0x1.f47964p-54f, 0.0f, 0.0f, 0x1.6d288cp-1f, 0x1.9d9ab8p-73f, 0.0f, 0.0f,
     0x1.22817p-105f, 0.0f, 0.0f, 0x1.15a03ap-53f, 0x1.dc034ap-116f, 0x1.d3d8dcp-123f,
     0.0f, 0x1.5897f6p-44f, 0x1.03a712p-112f, 0.0f, 0.0f, 0x1.297f52p-100f,
     0x1.0e31dep-60f, 0.0f, 0.0f, 0x1.28e774p-67f, 0x1.ebd8e2p-79f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.98edacp-61f, 0x1.4d2d32p-2f, 0.0f, 0.0f, 0.0f, 0x1.f2528ap-106f, 0.0f,
     0.0f, 0.0f, 0x1.26085p-43f, 0.0f, 0.0f, 0x1.fc1684p-97f, 0x1.0f934cp-91f, 0.0f,
     0.0f, 0x1.07e318p-96f, 0x1.43ad96p-125f, 0.0f, 0x1.9cfb9ep-87f, 0.0f, 0.0f,
     0x1.f09bbp-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.98c1ecp-32f, 0x1.b999f8p-26f,
     0x1.162346p-75f, 0.0f, 0.0f, 0x1.d118b2p-8f, 0.0f, 0.0f, 0x1.bd2bdcp-37f,
     0x1.759e58p-25f, 0x1.7b8f4p-82f, 0.0f, 0x1.8c861ap-81f, 0x1.90dcc4p-121f,
     0x1.1c6886p-91f, 0.0f, 0x1.261ed4p-8f, 0x1.0845eep-45f, 0x1.ecfb54p-43f, 0.0f,
     0.0f, 0x1.b81adap-58f, 0x1.7760d8p-95f, 0.0f, 0.0f, 0x1.359a74p-70f,
     0x1.5c29e8p-118f, 0.0f, 0x1.4a793ap-67f, 0x1.eab5a6p-42f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.283798p-98f, 0.0f, 0x1.e92e46p-104f, 0x1.0e72fcp-95f,
     0x1.afa896p-33f, 0x1.ab4c8p-50f, 0x1.da8e56p-63f, 0.0f, 0x1.7214bep-60f, 0.0f,
     0.0f, 0.0f, 0x1.de29ecp-43f, 0.0f, 0.0f, 0x1.ddcaf6p-121f, 0.0f, 0.0f,
     0x1.6166f4p-99f, 0.0f, 0x1.67819p-11f, 0x1.bec4ecp-97f, 0x1.cd0b06p-40f,
     0x1.d146e2p-42f, 0.0f, 0.0f, 0x1.0a3506p-19f, 0x1.33ae02p-41f, 0.0f,
     0x1.f45472p-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dabe9cp-105f, 0.0f, 0.0f, 0.0f,
     0x1.bf63ap-62f, 0x1.b01edcp-34f, 0x1.06b99p-51f, 0.0f, 0x1.85c4c2p-41f, 0.0f,
     0x1.e6fdfap-13f, 0.0f, 0.0f, 0.0f, 0x1.27df42p-43f, 0x1.e581e6p-115f,
     0x1.5cfffap-4f, 0.0f, 0x1.04bdcp-114f, 0.0f, 0.0f, 0x1.5e3fbep-103f, 0.0f, 0.0f,
     0.0f, 0x1.4c53ap-5f, 0x1.f8e29ep-30f, 0.0f, 0.0f, 0x1.845dfep-38f, 0.0f,
     0x1.7da272p-6f, 0x1.8b60dep-22f, 0x1.890c92p-100f, 0x1.d87422p-80f,
     0x1.64210ap-21f, 0x1.21eed6p-31f, 0.0f, 0.0f, 0x1.dba214p-31f, 0x1.186f1p-100f,
     0x1.f93138p-62f, 0x1.19a40cp-83f, 0.0f, 0.0f, 0x1.8849dep-14f, 0x1.b3137p-126f,
     0x1.911528p-40f, 0.0f, 0x1.bbcbp-108f, 0.0f, 0x1.3e7a06p-102f, 0x1.944182p-19f,
     0x1.03d94ep-84f, 0.0f, 0.0f, 0x1.1f84f2p-22f, 0.0f, 0x1.2ff85ep-72f, 0.0f,
     0x1.72b11ep-10f, 0.0f, 0.0f, 0x1.8c871p-80f, 0x1.0381bap-26f, 0x1.1a3348p-125f,
     0x1.729416p-2f, 0.0f, 0.0f, 0x1.d151b6p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3879ecp-25f, 0.0f, 0x1.82ce1p-115f, 0x1.4fe584p-26f, 0.0f, 0.0f, 0.0f,
     0x1.1364a4p-70f, 0.0f, 0x1.589b1cp-106f, 0.0f, 0.0f, 0x1.ec1df4p-18f,
     0x1.1f43fap-50f, 0.0f, 0x1.8dddcep-68f, 0x1.7cfb1ap-87f, 0.0f, 0.0f,
     0x1.3295b8p-40f, 0.0f, 0x1.7e72fp-28f, 0.0f, 0.0f, 0x1.f7d7ap-105f,
     0x1.1f9bf2p-112f, 0x1.9a422ep-47f, 0.0f, 0.0f, 0x1.08737p-80f, 0.0f,
     0x1.b583f4p-79f, 0x1.543b0ep-62f, 0.0f, 0.0f, 0x1.cb1f88p-46f, 0.0f, 0.0f,
     0x1.32b492p-14f, 0x1.03a2ap-74f, 0.0f, 0x1.edfd96p-33f, 0x1.cb8514p-24f, 0.0f,
     0.0f, 0x1.79acbp-50f, 0x1.156d7ep-10f, 0x1.3c9034p-15f, 0.0f, 0.0f,
     0x1.8df87ep-33f, 0.0f, 0x1.f5004p-123f, 0.0f, 0x1.8c5b14p-14f, 0.0f, 0.0f, 0.0f,
     0x1.f492a6p-98f, 0.0f, 0.0f, 0x1.15a6d4p-28f, 0x1.d77204p-124f, 0.0f,
     0x1.c4f0c6p-70f, 0.0f, 0x1.36ed8ep-31f, 0.0f, 0x1.94c434p-45f, 0x1.ea392ep-19f,
     0x1.1e1c82p-66f, 0.0f, 0x1.1a0218p-113f, 0x1.7e3a2ep-15f, 0.0f, 0x1.9d6708p-77f,
     0.0f, 0x1.1c04ecp-38f, 0x1.b77722p-42f, 0x1.2a7452p-121f, 0x1.45c7cp-54f, 0.0f,
     0x1.01fec6p-34f, 0x1.a86adcp-114f, 0x1.0e50a8p-117f, 0.0f, 0x1.37361ep-91f,
     0x1.57d7ep-76f, 0.0f, 0x1.0fc542p-3f, 0x1.0b9612p-7f, 0.0f, 0.0f,
     0x1.f559a6p-101f, 0.0f, 0x1.c39048p-70f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d05ed4p-121f, 0x1.da61c8p-86f, 0.0f, 0x1.699e48p-83f, 0x1.f18536p-85f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a2c836p-22f, 0x1.3cca6p-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1b1364p-82f, 0.0f, 0x1.b29c6cp-115f, 0.0f, 0.0f, 0x1.442bb4p-92f, 0.0f, 0.0f,
     0x1.e8b9bap-56f, 0.0f, 0.0f, 0x1.19efc6p-45f, 0x1.64fdf6p-61f, 0x1.5907f6p-8f,
     0.0f, 0x1.671406p-47f, 0x1.eb2c3p-116f, 0x1.511468p-49f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9decbap-52f, 0.0f, 0x1.bd567ep-72f, 0x1.230f8ap-7f,
     0x1.b0fd3ep-123f, 0x1.27e976p-47f, 0.0f, 0.0f, 0.0f, 0x1.c228cp-18f,
     0x1.afb862p-48f, 0.0f, 0x1.61480ep-7f, 0x1.a8db18p-21f, 0x1.87fd44p-64f, 0.0f,
     0x1.855c78p-88f, 0x1.50f942p-10f, 0.0f, 0.0f, 0x1.ce737ap-15f, 0.0f, 0.0f,
     0x1.6aca46p-66f, 0x1.8c1ae4p-109f, 0.0f, 0x1.963b44p-48f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.452fap-91f, 0.0f, 0x1.77f706p-20f, 0.0f, 0.0f, 0x1.5e4018p-33f,
     0x1.69409ap-70f, 0.0f, 0.0f, 0x1.ed931cp-88f, 0x1.43b0c4p-14f, 0.0f,
     0x1.9705dp-30f, 0.0f, 0.0f, 0x1.29f956p-68f, 0x1.2c033ap-118f, 0.0f, 0.0f,
     0x1.438ce6p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.37fe0ep-29f, 0x1.dc6258p-110f,
     0x1.7616c6p-59f, 0.0f, 0x1.d88cbap-78f, 0x1.ac4b62p-38f, 0x1.8fb7c4p-28f, 0.0f,
     0.0f, 0.0f, 0x1.1273f6p-108f, 0.0f, 0.0f, 0x1.44392cp-74f, 0.0f, 0.0f,
     0x1.223b1ep-34f, 0x1.c66f06p-42f, 0x1.389fd4p-54f, 0x1.283142p-71f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9c3cdep-20f, 0x1.b09a16p-99f,
     0x1.94258p-23f, 0.0f, 0x1.28cdbep-88f, 0x1.cb2c56p-43f, 0x1.d08d84p-6f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ec3feap-1f,
     0x1.21d076p-95f, 0x1.0740c4p-101f, 0x1.6afc22p-70f, 0x1.dd882ep-52f, 0.0f,
     0x1.549238p-34f, 0x1.7b1994p-108f, 0x1.4e6314p-38f, 0.0f, 0x1.931fe2p-36f, 0.0f,
     0.0f, 0.0f, 0x1.00fd6ap-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6de104p-14f, 0.0f, 0.0f,
     0x1.07b9e8p-4f, 0.0f, 0x1.dc06aap-3f, 0x1.a3a49cp-10f, 0x1.74a6ecp-88f, 0.0f,
     0.0f, 0x1.dd73eep-10f, 0.0f, 0.0f, 0x1.4a019cp-102f, 0x1.aff02p-98f, 0.0f,
     0x1.430624p-120f, 0.0f, 0x1.195498p-89f, 0.0f, 0x1.7401d4p-18f, 0x1.2f8b34p-62f,
     0x1.76d23p-18f, 0.0f, 0x1.2efd42p-37f, 0x1.2105ep-13f, 0.0f, 0.0f,
     0x1.66e6bcp-97f, 0.0f, 0x1.a95edap-49f, 0x1.994a86p-25f, 0.0f, 0x1.d2ea4cp-31f,
     0x1.955424p-119f, 0.0f, 0x1.21bf8ap-117f, 0.0f, 0.0f, 0.0f, 0x1.fd4762p-1f,
     0x1.2cbdbcp-8f, 0.0f, 0.0f, 0x1.80d298p-97f, 0.0f, 0x1.4bdc94p-67f,
     0x1.0063b6p-81f, 0.0f, 0x1.7b22b6p-120f, 0.0f, 0.0f, 0.0f, 0x1.0e3d6cp-31f,
     0x1.1832b4p-74f, 0.0f, 0x1.265fcap-105f, 0x1.84e0bap-3f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.96ba14p-42f, 0x1.6b5b0ap-59f, 0.0f, 0x1.3bced8p-100f, 0x1.5fb3dp-61f,
     0.0f, 0.0f, 0.0f, 0x1.c4d1c8p-123f, 0x1.630514p-72f, 0.0f, 0.0f, 0x1.2ec92ep-10f,
     0x1.7dc8cep-30f, 0.0f, 0.0f, 0x1.d7d178p-107f, 0x1.40152ep-49f, 0.0f, 0.0f,
     0x1.ab5cbcp-66f, 0x1.963ae8p-32f, 0.0f, 0.0f, 0x1.69fc12p-3f, 0.0f, 0.0f,
     0x1.f3c9f4p-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9fb492p-29f, 0x1.a4c68cp-80f,
     0.0f, 0.0f, 0x1.f7662ap-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ceab2ep-6f, 0.0f,
     0.0f, 0x1.4ff1ccp-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.087f22p-8f, 0.0f,
     0x1.b7ea34p-67f, 0x1.5f1306p-82f, 0.0f, 0.0f, 0.0f, 0x1.e0f3a6p-76f, 0.0f, 0.0f,
     0x1.617eb8p-16f, 0.0f, 0x1.b3684ap-13f, 0x1.56ebep-119f, 0.0f, 0.0f, 0.0f,
     0x1.6ef5f8p-7f, 0.0f, 0.0f, 0x1.17a726p-72f, 0.0f, 0.0f, 0x1.1dd8fep-74f,
     0x1.5b66acp-72f, 0.0f, 0x1p0f, 0x1.5646eep-113f, 0.0f, 0x1.559afap-102f, 0.0f,
     0x1.f8a37cp-1f, 0.0f, 0x1.fa2b9p-124f, 0.0f, 0x1p0f, 0.0f, 0x1.391922p-18f, 0.0f,
     0x1.31a424p-74f, 0x1.766152p-36f, 0x1.3148fep-1f, 0.0f, 0x1.5c2ab6p-58f, 0.0f,
     0x1.af6ff6p-48f, 0.0f, 0.0f, 0x1.78f124p-59f, 0.0f, 0x1.196ccap-65f, 0.0f,
     0x1.ebc932p-51f, 0.0f, 0.0f, 0.0f, 0x1.e59552p-54f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.008f06p-90f, 0x1.6d0cc2p-117f, 0x1.6e6a06p-23f, 0.0f, 0x1.1fb638p-106f, 0.0f,
     0x1p0f, 0.0f, 0x1.612cf8p-26f, 0x1.0b0322p-19f, 0.0f, 0.0f, 0.0f,
     0x1.d95b56p-99f, 0.0f, 0.0f, 0x1.69c00cp-3f, 0.0f, 0x1.255c52p-47f,
     0x1.55b60ap-4f, 0.0f, 0x1.7a078ep-83f, 0x1.ca8fc6p-31f, 0.0f, 0x1.951a48p-90f,
     0.0f, 0x1.ab05dcp-91f, 0x1.cb326p-80f, 0.0f, 0.0f, 0.0f, 0x1.7409bp-110f, 0.0f,
     0x1.5b210cp-27f, 0x1.4feeep-62f, 0x1.172ed6p-54f, 0x1.9df458p-55f,
     0x1.a16d0ep-42f, 0x1.1e9d48p-26f, 0x1.39c892p-101f, 0.0f, 0x1.0ad942p-109f, 0.0f,
     0x1.7a69acp-105f, 0.0f, 0.0f, 0x1.176cd2p-20f, 0x1.48e7b4p-100f, 0x1.92459cp-11f,
     0x1.9ac8bp-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9f3772p-12f, 0.0f,
     0x1.75009ap-26f, 0.0f, 0x1.2eb7fap-42f, 0x1.b0951cp-42f
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
            float tmp2;
            __m128 carg;
            __m128 carg1;
            __m128 carg2;
            float tmp3;
            int32_t tmp4;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = external_bench_wrapper_input_table_arg1[i];
            tmp2 = Sleef_fastpowf1_u3500purecfma(tmp0, tmp1);
            external_bench_wrapper_output_table[i] = tmp2;
            carg = _mm_set_ss(bench_acc);
            carg1 = _mm_set_ss(tmp2);
            carg2 = _mm_add_ss(carg, carg1);
            tmp3 = _mm_cvtss_f32(carg2);
            bench_acc = tmp3;
            tmp4 = i + INT32_C(1);
            i = tmp4;
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
    printf("Sleef_fastpowf1_u3500purecfma %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_fastpowf1_u3500purecfma bench acc %a\n", global_bench_acc);
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
