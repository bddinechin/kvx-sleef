/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_asinf1_u35purecfma.c --function \
 *     Sleef_finz_asinf1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f0e6bep-74f, 0x1.c89fd6p-2f, 0.0f, 0.0f,
     0x1.a77feep-12f, 0x1.60865ap-102f, 0x1.3f1d3ap-55f, 0x1.95edecp-31f,
     0x1.6bc434p-64f, 0x1.af3174p-79f, 0.0f, 0.0f, 0x1.f63882p-16f, 0x1.a3b2d2p-66f,
     0.0f, 0.0f, 0x1.b7726cp-54f, 0x1.087c3cp-69f, 0.0f, 0.0f, 0x1.cb7deap-112f,
     0x1.1ffa5ep-53f, 0.0f, 0.0f, 0.0f, 0x1.9159eep-24f, 0.0f, 0x1.ba86eep-33f, 0.0f,
     0x1.911954p-54f, 0x1.61c962p-105f, 0x1.51a8aep-11f, 0.0f, 0x1.70d018p-84f,
     0x1.305626p-28f, 0.0f, 0x1.bed1bap-50f, 0.0f, 0x1.d11526p-67f, 0.0f,
     0x1.d423a8p-116f, 0x1.d55ce4p-53f, 0.0f, 0.0f, 0.0f, 0x1.c842f8p-72f,
     0x1.223b1ep-119f, 0.0f, 0x1.fd6558p-22f, 0x1.648fep-78f, 0.0f, 0.0f,
     0x1.9b416ep-53f, 0x1p0f, 0x1.d154cp-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.90dafp-92f,
     0.0f, 0x1.e9f0e6p-63f, 0.0f, 0x1.b2e792p-49f, 0x1.005d88p-78f, 0.0f,
     0x1.fffe94p-85f, 0x1.d199d8p-8f, 0.0f, 0x1.bca08ep-50f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b7864cp-49f, 0x1.15a4f2p-60f, 0.0f, 0x1.ec72b8p-17f, 0x1.7ba056p-21f, 0.0f,
     0.0f, 0x1.848bf2p-104f, 0x1.cdd87p-25f, 0.0f, 0.0f, 0x1p0f, 0x1.4e88dap-44f,
     0x1.3adcbep-111f, 0.0f, 0.0f, 0x1.848218p-113f, 0.0f, 0x1.27004ep-16f,
     0x1.7a0df8p-20f, 0.0f, 0x1.7f477cp-6f, 0x1.652d12p-78f, 0x1.f0fb04p-44f,
     0x1.8a00b8p-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1dc5f4p-20f,
     0x1.5e46d6p-26f, 0x1.286afap-5f, 0.0f, 0x1.477b28p-31f, 0x1.b040b8p-113f,
     0x1.8597e6p-38f, 0.0f, 0.0f, 0x1.d8b462p-33f, 0.0f, 0.0f, 0x1.39137p-92f, 0.0f,
     0.0f, 0x1.689654p-57f, 0x1.fc34aap-17f, 0x1.95e72p-12f, 0x1.25f33ep-51f,
     0x1.f7c262p-47f, 0.0f, 0.0f, 0.0f, 0x1.5cef88p-97f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b847f6p-13f, 0.0f, 0x1.887dbp-112f, 0.0f, 0x1.7859acp-75f, 0x1.bd0606p-27f,
     0.0f, 0x1.a7f99ep-106f, 0.0f, 0x1.c974ccp-86f, 0.0f, 0x1.d85026p-72f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.52b2f6p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9f0df2p-17f,
     0x1.f7910ep-16f, 0x1.6797f6p-96f, 0.0f, 0.0f, 0.0f, 0x1.a0153cp-99f,
     0x1.80d064p-39f, 0x1.1ec8ecp-64f, 0.0f, 0.0f, 0x1.78c9b8p-17f, 0x1.a530eap-98f,
     0x1.93b642p-38f, 0x1.1009p-3f, 0x1.b84bd4p-102f, 0x1.1d231ap-31f, 0.0f,
     0x1.982ec6p-27f, 0x1.f3029ap-113f, 0x1.4d4d88p-6f, 0x1.c702f6p-67f,
     0x1.80fc16p-37f, 0x1.ae2362p-48f, 0.0f, 0x1.5f288cp-80f, 0.0f, 0.0f,
     0x1.ad2688p-122f, 0x1.2d8f52p-51f, 0x1.85c346p-59f, 0x1.2b747p-49f, 0.0f,
     0x1.eb7b92p-61f, 0.0f, 0x1.4d2d42p-90f, 0.0f, 0x1.cd77f4p-16f, 0.0f,
     0x1.41375ap-95f, 0.0f, 0x1.77f69p-37f, 0x1.a9db0ap-101f, 0x1.c22114p-47f,
     0x1.c39b42p-54f, 0.0f, 0x1.c457a8p-20f, 0x1.bdd548p-28f, 0x1.53f6bp-35f,
     0x1.cc371cp-78f, 0x1.aa390cp-115f, 0x1.ee8feap-67f, 0x1.f46014p-110f,
     0x1.c738f6p-99f, 0.0f, 0.0f, 0.0f, 0x1.991966p-59f, 0.0f, 0.0f, 0x1.32170cp-108f,
     0.0f, 0.0f, 0.0f, 0x1.09993cp-7f, 0.0f, 0.0f, 0x1.6a94bap-40f, 0.0f,
     0x1.67b99ep-77f, 0x1.489622p-9f, 0x1.38fc0ep-18f, 0x1.f5ec9ap-35f,
     0x1.c0702cp-62f, 0x1.7af49p-77f, 0x1.99e05ep-73f, 0.0f, 0.0f, 0x1.a6957p-39f,
     0x1.2df90ep-74f, 0x1.71a15ap-10f, 0x1.43d8f2p-63f, 0.0f, 0x1.407756p-52f,
     0x1.86cddp-34f, 0x1.b99f4ep-52f, 0x1.93199p-111f, 0x1.e574f8p-103f,
     0x1.0f63ep-110f, 0x1.2587fp-16f, 0x1.8118dep-101f, 0.0f, 0x1.4ca0d4p-113f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b809dep-104f, 0x1.fa5ffap-10f, 0.0f, 0x1.b36c12p-60f,
     0.0f, 0.0f, 0x1.d8e7d4p-33f, 0.0f, 0.0f, 0.0f, 0x1.b1d94cp-49f, 0.0f, 0.0f,
     0x1.cb9996p-53f, 0x1.1db0bap-12f, 0x1.28ce6ep-85f, 0x1.3caf6cp-100f,
     0x1.c33f16p-47f, 0.0f, 0x1.5599fcp-10f, 0x1.2e2b2ep-37f, 0x1.2cbbe6p-98f,
     0x1.2ff428p-126f, 0.0f, 0x1.88d26ep-71f, 0.0f, 0x1.41662p-71f, 0x1.fe8c9p-13f,
     0.0f, 0x1.dc7a3ap-62f, 0x1.6165acp-22f, 0.0f, 0.0f, 0x1.52a44p-82f,
     0x1.ff28ecp-123f, 0x1.f22bcp-76f, 0.0f, 0x1.a67b92p-3f, 0.0f, 0.0f, 0.0f,
     0x1.fb74bcp-62f, 0x1.94f62cp-109f, 0.0f, 0x1.65d91p-74f, 0x1.3b5aaep-13f, 0.0f,
     0x1.0effd6p-87f, 0x1.08db4p-39f, 0.0f, 0x1.f790d2p-32f, 0.0f, 0.0f, 0.0f,
     0x1.365e58p-26f, 0.0f, 0x1.5a54e6p-65f, 0x1.386f78p-53f, 0.0f, 0.0f,
     0x1.705a6ep-31f, 0x1.d6aa96p-67f, 0x1.f6032ap-109f, 0x1.d9d3cep-62f,
     0x1.5fecacp-73f, 0.0f, 0.0f, 0.0f, 0x1.0e9486p-109f, 0x1.965d04p-4f,
     0x1.50bd84p-62f, 0x1.5bda0ep-102f, 0.0f, 0.0f, 0x1.347b46p-79f, 0x1.c10e78p-61f,
     0.0f, 0.0f, 0x1.62250ep-67f, 0x1.e526fp-66f, 0x1.f25bb8p-68f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.9a8924p-81f, 0x1.f027b4p-79f, 0.0f, 0.0f, 0.0f, 0x1.316e72p-63f,
     0.0f, 0.0f, 0x1.17197cp-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.805486p-20f, 0x1.5999fp-12f, 0x1.565774p-120f, 0x1.e572c8p-49f, 0.0f,
     0x1.c9a43cp-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7e31b8p-68f, 0x1.6266d6p-65f, 0.0f,
     0x1.b71254p-37f, 0x1.76ef48p-7f, 0.0f, 0.0f, 0.0f, 0x1.e24d48p-73f,
     0x1.82d68ap-62f, 0x1.072df4p-78f, 0.0f, 0.0f, 0x1.6a5ebep-7f, 0x1.c2fe92p-86f,
     0x1.478bccp-107f, 0x1.2fbc66p-42f, 0x1.edc342p-48f, 0.0f, 0x1.993516p-55f,
     0x1.5210d4p-3f, 0.0f, 0x1.27578cp-117f, 0x1.1db6aap-102f, 0x1.6ef798p-122f, 0.0f,
     0x1.cffa7cp-87f, 0x1.5acb42p-9f, 0x1.3967bp-27f, 0.0f, 0x1.60e7a8p-63f, 0.0f,
     0x1.c36a34p-100f, 0.0f, 0x1.ca54dcp-120f, 0x1.6e8accp-102f, 0x1.f1443p-21f, 0.0f,
     0x1.6efeb2p-36f, 0x1.2ee2fp-22f, 0x1.e809e8p-97f, 0.0f, 0.0f, 0.0f,
     0x1.b524b4p-126f, 0x1.03573ap-43f, 0x1.c26aa8p-57f, 0x1.a1befp-119f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.dcfb94p-84f, 0x1.0c1244p-15f, 0.0f, 0.0f, 0x1.0578ecp-41f, 0.0f,
     0.0f, 0x1.3a5c32p-13f, 0.0f, 0x1.6c977p-90f, 0x1.4a20c4p-29f, 0x1.9af73cp-11f,
     0.0f, 0.0f, 0.0f, 0x1.69b044p-97f, 0x1.fb98aap-124f, 0.0f, 0x1.6f2cfp-25f, 0.0f,
     0x1.293682p-45f, 0x1.30a8aep-64f, 0.0f, 0x1.b92596p-92f, 0x1.a94d3ep-2f, 0.0f,
     0x1.2522fp-82f, 0.0f, 0.0f, 0x1.5b6aa2p-28f, 0.0f, 0.0f, 0x1.e54958p-49f, 0.0f,
     0.0f, 0.0f, 0x1.b0b9fep-123f, 0x1.221b3p-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4c8f08p-110f, 0x1.61e322p-117f, 0.0f, 0.0f, 0x1.08eb64p-103f,
     0.0f, 0x1.4a1ad4p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.49441ep-102f, 0x1.f23852p-24f,
     0.0f, 0x1.076ccep-99f, 0x1.1982c2p-73f, 0x1.bcf2e8p-114f, 0x1.e32246p-17f,
     0x1.730ceep-30f, 0x1.156354p-85f, 0x1.6ceeeep-118f, 0.0f, 0.0f, 0x1.330cc6p-117f,
     0x1.fdaffap-111f, 0.0f, 0x1.91f89p-45f, 0x1.3901dep-113f, 0.0f, 0x1.0d2c1ep-74f,
     0.0f, 0x1.b44a08p-63f, 0x1.2c6c0ep-54f, 0x1.84e10ap-41f, 0.0f, 0.0f,
     0x1.87e2bap-6f, 0x1.e2c158p-32f, 0.0f, 0x1.2fabdep-70f, 0x1.00e6a6p-62f,
     0x1.8fdc62p-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.341142p-125f, 0x1.4da624p-28f,
     0x1.64b8a2p-54f, 0x1.7c3fdep-63f, 0.0f, 0.0f, 0x1.1d4b08p-108f, 0.0f,
     0x1.c5ff1cp-102f, 0.0f, 0x1.67cbecp-49f, 0x1.3d3cep-23f, 0.0f, 0x1.db542p-26f,
     0x1.691e82p-113f, 0.0f, 0x1.123166p-3f, 0.0f, 0.0f, 0.0f, 0x1.f553ap-92f,
     0x1.0e3ed6p-93f, 0x1.5b0852p-3f, 0x1.cf5adep-26f, 0x1.a4f074p-44f,
     0x1.c21504p-44f, 0x1.9bdf2ap-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.73a984p-14f,
     0x1.bd825ap-91f, 0x1.90bab2p-114f, 0.0f, 0x1.83afbap-90f, 0.0f, 0.0f, 0.0f,
     0x1.fb24cep-112f, 0.0f, 0x1.7f5d2p-7f, 0x1.a146ap-60f, 0x1.e7bc4cp-8f,
     0x1.154828p-49f, 0x1.32325ep-20f, 0.0f, 0x1.62a106p-102f, 0.0f, 0x1.48bec8p-53f,
     0.0f, 0x1.2a9f8p-48f, 0x1.632dcap-2f, 0x1.d726bap-12f, 0x1.0668c4p-21f,
     0x1.de304cp-79f, 0.0f, 0.0f, 0x1.a445aap-91f, 0x1.f873b8p-80f, 0x1.602dbap-126f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.1a3122p-116f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.44a9f6p-42f, 0.0f, 0x1.b15602p-76f, 0x1.6b071ap-12f, 0.0f, 0.0f, 0.0f,
     0x1.5b90b6p-125f, 0.0f, 0.0f, 0x1.6fc5dap-100f, 0x1.5423e2p-23f, 0x1.9a9a8p-78f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.73d9bap-16f, 0x1.2686cap-26f, 0.0f, 0.0f,
     0x1.46045ap-116f, 0x1.0199dep-33f, 0.0f, 0x1.1810d4p-107f, 0x1.d83a4ep-21f, 0.0f,
     0x1.7a12d6p-73f, 0x1.87b38ap-21f, 0.0f, 0x1.6f5604p-64f, 0x1.5ae958p-8f,
     0x1.e0863ap-40f, 0x1.af901cp-126f, 0.0f, 0.0f, 0x1.ba29b2p-80f, 0x1.31f2dep-79f,
     0x1.267d7cp-85f, 0.0f, 0x1.4fc122p-60f, 0x1.e98c5cp-13f, 0.0f, 0x1.56086p-26f,
     0x1.01527ap-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e545cap-54f, 0.0f, 0x1.0b1364p-117f, 0x1.ede06ap-70f, 0.0f, 0.0f,
     0x1.f7ffdcp-106f, 0x1.53a164p-1f, 0.0f, 0.0f, 0x1.89e80cp-123f, 0x1.dd9c54p-79f,
     0.0f, 0x1.0f6538p-28f, 0.0f, 0x1.0557f8p-85f, 0x1.53cffep-54f, 0.0f,
     0x1.29f46cp-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.084518p-109f, 0.0f, 0.0f,
     0x1.f5927cp-29f, 0x1.2d9792p-5f, 0x1.ebb386p-115f, 0x1.028f1ap-31f, 0.0f, 0.0f,
     0x1.db3216p-55f, 0x1.8ffc82p-3f, 0.0f, 0x1.0d431p-29f, 0x1.016be2p-74f,
     0x1.538cd6p-85f, 0x1.2bdb6p-103f, 0.0f, 0x1.7e4ee6p-106f, 0.0f, 0x1.67bb4ep-111f,
     0x1.495df8p-1f, 0x1.851bd6p-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3edf4ap-102f, 0.0f,
     0x1.7425c6p-110f, 0.0f, 0x1.805ca8p-2f, 0x1.6ef788p-35f, 0x1.08b9e4p-93f,
     0x1.44a114p-66f, 0x1.5c113cp-67f, 0x1.5abb5ep-20f, 0.0f, 0.0f, 0x1.c74288p-31f,
     0x1.4b1556p-60f, 0.0f, 0.0f, 0x1.31b88cp-96f, 0.0f, 0.0f, 0x1.70073cp-97f,
     0x1.9fee7p-39f, 0x1.cde61cp-73f, 0.0f, 0x1.e7e744p-122f, 0x1.11dbeap-126f, 0.0f,
     0x1.7f7604p-16f, 0x1.f145ccp-103f, 0.0f, 0x1.1c3b5cp-72f, 0x1.62a92ap-82f, 0.0f,
     0x1.aefdd6p-12f, 0.0f, 0.0f, 0x1.abb638p-86f, 0x1.30fab2p-40f, 0x1.1efdb8p-11f,
     0x1.2d0306p-65f, 0.0f, 0x1.0e7ae4p-3f, 0x1.c1078ap-60f, 0x1.7d0cdep-120f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.77b30cp-62f, 0.0f, 0.0f, 0.0f, 0x1.de3348p-112f,
     0x1.4d790ep-59f, 0.0f, 0x1.cfe25ep-55f, 0x1.dcacaep-78f, 0x1.0ba0f4p-44f,
     0x1.d6d52ep-120f, 0x1.1cfc54p-70f, 0x1.fbb994p-72f, 0.0f, 0x1.8d6e6p-117f,
     0x1.6c7e04p-102f, 0.0f, 0x1.1104e6p-57f, 0x1.c02e76p-5f, 0x1.644b26p-32f, 0.0f,
     0x1.df28bcp-110f, 0.0f, 0.0f, 0x1.b64ebcp-32f, 0.0f, 0x1.b2757ap-4f, 0.0f, 0.0f,
     0x1.31c4bp-108f, 0x1.611dd4p-90f, 0x1.d5274ap-48f, 0x1.892c68p-117f,
     0x1.0fac1cp-51f, 0x1.1cfa2ep-55f, 0.0f, 0.0f, 0.0f, 0x1.23b1b4p-120f, 0.0f, 0.0f,
     0x1.1a8162p-10f, 0x1.01a45ap-35f, 0.0f, 0.0f, 0x1.4922d6p-3f, 0.0f,
     0x1.9e2014p-28f, 0.0f, 0x1.ae7a2ep-20f, 0.0f, 0x1.7ffd16p-15f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.818a5ep-23f, 0x1.6eed7ep-86f, 0x1.c4fac2p-55f, 0.0f, 0.0f,
     0x1.07dc46p-52f, 0.0f, 0.0f, 0x1.b57c56p-107f, 0x1.ac9faap-87f, 0x1.7af11p-86f,
     0.0f, 0x1.564cbcp-100f, 0x1.c9fcccp-30f, 0x1.a912d4p-69f, 0x1.ff3342p-91f,
     0x1.e58422p-112f, 0.0f, 0x1.6877cep-88f, 0x1.3f20c2p-65f, 0.0f, 0x1.5ab4e4p-64f,
     0.0f, 0x1.df455cp-31f, 0x1.734b68p-4f, 0x1.e2b12cp-116f, 0.0f, 0.0f,
     0x1.cf72bp-29f, 0.0f, 0x1.96e23cp-5f, 0x1.ecbde8p-77f, 0x1.1d4eb6p-111f,
     0x1.2ca2f2p-92f, 0.0f, 0x1.3a7fd4p-31f, 0x1.864c5ap-39f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.84cc6ap-117f, 0x1.733992p-46f, 0.0f, 0.0f, 0.0f, 0x1.8fd0eep-15f,
     0x1.6d528p-56f, 0.0f, 0.0f, 0.0f, 0x1.5de1f4p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.4a1a4ep-110f, 0.0f, 0.0f, 0x1.bc55d8p-41f, 0x1.48de6ep-27f,
     0x1.7dbf0cp-44f, 0.0f, 0x1.74d358p-78f, 0.0f, 0.0f, 0x1.b56a2cp-3f, 0.0f,
     0x1.7c8a5p-83f, 0x1.94331p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8e1eep-1f, 0x1.5e8ca2p-22f, 0.0f, 0.0f, 0x1.d6285ep-79f, 0x1.f924dap-84f,
     0.0f, 0x1.4c3b68p-87f, 0x1.4950c6p-52f, 0x1.b71b1p-78f, 0.0f, 0.0f, 0.0f,
     0x1.9feea8p-21f, 0.0f, 0x1.124a64p-37f, 0x1.989602p-120f, 0.0f, 0.0f,
     0x1.e7ba16p-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.18a636p-29f, 0x1.6593aap-49f, 0.0f,
     0x1.ec3ab2p-22f, 0.0f, 0.0f, 0.0f, 0x1.8f84bap-49f, 0x1.efa5cap-72f, 0.0f,
     0x1.e218bap-68f, 0.0f, 0x1.c102e4p-58f, 0.0f, 0x1.db14cep-51f, 0x1.cb4418p-106f,
     0.0f, 0.0f, 0x1.18d6b4p-18f, 0.0f, 0x1.f5d8e8p-52f, 0.0f, 0x1.8f95dp-47f,
     0x1.4a2ecap-100f, 0x1.1e064ap-7f, 0.0f, 0x1.b983ap-53f, 0x1.1a0954p-98f, 0.0f,
     0x1.404892p-7f, 0.0f, 0x1.c92424p-16f, 0x1.dbf53p-41f, 0x1.a4f142p-101f,
     0x1.57aa76p-124f, 0.0f, 0.0f, 0.0f, 0x1.baf4b2p-22f, 0x1.067b62p-11f, 0.0f, 0.0f,
     0.0f, 0x1.e3703cp-39f, 0.0f, 0x1.3fc7bep-55f, 0x1.a4e5f6p-34f, 0x1.1163fp-119f,
     0x1.5eedep-76f, 0x1.5b9a4p-79f, 0.0f, 0x1.c4ae8cp-72f, 0.0f, 0x1.106c14p-118f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.2802e8p-17f, 0x1.136a44p-23f, 0x1.a54fa8p-104f,
     0x1.26aa8cp-13f, 0x1.f553b2p-30f, 0.0f, 0x1.fde3ap-125f, 0x1.777764p-83f, 0.0f,
     0x1.166ff8p-104f, 0x1.8ff444p-41f, 0.0f, 0x1.150b82p-28f, 0.0f, 0x1.549cf2p-65f,
     0x1.51eba4p-120f, 0.0f, 0x1.78dbeap-34f, 0.0f, 0x1.5ea14p-3f, 0x1.a1275ep-64f,
     0x1.de37d4p-8f, 0.0f, 0.0f, 0x1.8339aap-2f, 0.0f, 0x1.992bd2p-48f,
     0x1.39871p-28f, 0x1.c7d4a8p-109f, 0x1.d26cc4p-72f, 0.0f, 0x1.3d2a8cp-120f,
     0x1.cc8094p-112f, 0x1.7ce45p-15f, 0x1.860132p-62f, 0x1.887aacp-105f, 0.0f, 0.0f,
     0x1.ec443p-122f, 0x1.13016cp-55f, 0.0f, 0x1.f97d38p-50f, 0x1.8fda2p-88f,
     0x1.194956p-86f, 0.0f
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
            tmp1 = Sleef_finz_asinf1_u35purecfma(tmp0);
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
    printf("Sleef_finz_asinf1_u35purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_asinf1_u35purecfma bench acc %a\n", global_bench_acc);
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
