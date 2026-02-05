/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sinpif1_u05purecfma.c --function \
 *     Sleef_sinpif1_u05purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.303da8p-44f, 0.0f, 0x1.69cd16p-11f, 0x1.fdfec2p-59f, 0.0f, 0.0f, 0.0f,
     0x1.5533b6p-103f, 0x1.7c35f2p-17f, 0x1.3b38fap-113f, 0x1.b66ad6p-9f,
     0x1.1e0c9cp-72f, 0.0f, 0x1.39613ep-48f, 0.0f, 0.0f, 0x1.078ffep-39f, 0.0f,
     0x1.482556p-53f, 0.0f, 0x1.2675aep-113f, 0.0f, 0x1.f1e9b8p-98f, 0.0f,
     0x1.569636p-37f, 0x1.2f487cp-59f, 0.0f, 0x1.7fc794p-37f, 0.0f, 0.0f, 0.0f,
     0x1.0e9efap-45f, 0.0f, 0x1.3bf836p-109f, 0x1.a94deap-60f, 0.0f, 0x1.ffb596p-9f,
     0x1.309104p-4f, 0.0f, 0.0f, 0x1.536ccep-87f, 0.0f, 0.0f, 0.0f, 0x1.f5ba9ap-79f,
     0x1.7b59eap-87f, 0.0f, 0x1.ea6dd6p-22f, 0.0f, 0x1.c23b58p-29f, 0x1.fe9ca8p-1f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.6d902ep-97f, 0.0f, 0x1.1a603cp-96f, 0.0f,
     0x1.9274ecp-49f, 0.0f, 0x1.bbd90ep-71f, 0.0f, 0x1.5ee49p-8f, 0x1.1e6384p-126f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.5bce46p-86f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.89660ap-120f, 0.0f, 0x1.1895c8p-74f, 0x1.4a4ee6p-21f, 0x1.484116p-35f,
     0x1.45469ep-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d842fp-86f, 0x1.8e6aa2p-115f, 0.0f,
     0x1.2b9ae4p-54f, 0.0f, 0.0f, 0x1.ee6d2ap-87f, 0x1.f20ac8p-21f, 0.0f,
     0x1.aaaea8p-46f, 0x1.5ba67p-97f, 0x1.c2d1ap-120f, 0x1.087afep-71f,
     0x1.4c576ep-74f, 0x1.14c24p-37f, 0x1.183762p-18f, 0.0f, 0.0f, 0x1.adc60ep-92f,
     0x1.a0e99ep-78f, 0.0f, 0x1.bcf8b8p-56f, 0x1.1ac6d4p-56f, 0x1.77602ep-71f, 0.0f,
     0.0f, 0.0f, 0x1.459dd6p-100f, 0x1.6ecf1ep-6f, 0x1.312c8p-50f, 0.0f,
     0x1.afa2ap-56f, 0.0f, 0.0f, 0x1.23a9acp-68f, 0.0f, 0x1.19fc82p-3f,
     0x1.a1695p-112f, 0.0f, 0.0f, 0x1.20f79ap-106f, 0x1.3419d2p-123f, 0.0f,
     0x1.ba9e48p-28f, 0x1.f9f8a6p-92f, 0.0f, 0.0f, 0.0f, 0x1.91868ep-14f,
     0x1.951a9ep-30f, 0x1.4848bap-48f, 0.0f, 0x1.809c98p-116f, 0x1.4e7bcep-55f, 0.0f,
     0x1.d2a1f8p-122f, 0.0f, 0x1.c5fe82p-32f, 0.0f, 0.0f, 0x1.a7e13ap-97f,
     0x1.19ed7cp-82f, 0x1.0bb90cp-80f, 0.0f, 0.0f, 0x1.714444p-94f, 0x1.c4793ep-93f,
     0.0f, 0.0f, 0.0f, 0x1.05a432p-2f, 0x1.50ca18p-123f, 0.0f, 0.0f, 0x1.eaf0cap-114f,
     0.0f, 0.0f, 0x1.ce9236p-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.623172p-115f,
     0x1.347076p-124f, 0.0f, 0.0f, 0x1.9c9c5ep-123f, 0x1.e53bc4p-97f, 0.0f, 0.0f,
     0.0f, 0x1.ba9adep-36f, 0x1.effa9cp-122f, 0x1.a3d8e6p-38f, 0.0f, 0x1.284fdep-108f,
     0.0f, 0.0f, 0x1.67e59cp-90f, 0x1.6f43b6p-53f, 0x1.8209ap-19f, 0x1.c90b2ap-83f,
     0x1.cf23fap-69f, 0x1.216c96p-75f, 0x1.3cf16ep-5f, 0x1.814cfap-2f, 0.0f, 0.0f,
     0x1.19773cp-48f, 0.0f, 0x1.c722cp-23f, 0x1.691b96p-107f, 0x1.ab93c8p-96f, 0.0f,
     0.0f, 0x1.44188cp-63f, 0.0f, 0x1.95bccap-94f, 0.0f, 0x1.4031f8p-75f,
     0x1.3e063ap-66f, 0.0f, 0x1.c44462p-11f, 0x1.6636f4p-59f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.1cbep-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1349ep-122f,
     0x1.a07522p-102f, 0x1.efd45cp-6f, 0x1.a9f10ap-125f, 0x1.7089cp-81f, 0.0f,
     0x1.9361e8p-97f, 0.0f, 0x1.828416p-2f, 0.0f, 0x1.f071fp-10f, 0.0f,
     0x1.bb2016p-85f, 0.0f, 0.0f, 0x1.887bccp-103f, 0x1.f8e284p-96f, 0.0f,
     0x1.5a65b4p-85f, 0.0f, 0.0f, 0.0f, 0x1.b344aep-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.25c8c2p-8f, 0x1.21468ap-35f, 0x1.3357dep-4f, 0.0f, 0x1.cc3edp-108f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0bca6ap-29f, 0x1.11082cp-98f, 0.0f,
     0.0f, 0.0f, 0x1.316354p-121f, 0x1.38881ap-5f, 0x1.4c80fp-31f, 0.0f,
     0x1.840eeep-84f, 0x1.778ce2p-60f, 0x1.8171dap-39f, 0.0f, 0.0f, 0x1.ef2e2ap-98f,
     0.0f, 0.0f, 0x1.7ce008p-119f, 0x1.b2461ap-81f, 0.0f, 0.0f, 0.0f, 0x1p0f,
     0x1.4e72fp-77f, 0x1.1fd004p-93f, 0.0f, 0.0f, 0x1.eff9b4p-21f, 0.0f, 0.0f, 0.0f,
     0x1.67d342p-86f, 0.0f, 0x1.90349cp-80f, 0.0f, 0.0f, 0.0f, 0x1.0b910ap-75f, 0.0f,
     0x1.7adafcp-76f, 0x1.f73642p-96f, 0.0f, 0.0f, 0.0f, 0x1.85f694p-111f, 0.0f,
     0x1.9d3c7cp-65f, 0x1.5b847ep-87f, 0x1.fe619cp-30f, 0x1.a3603ap-13f,
     0x1.c12f6p-92f, 0.0f, 0x1.dcdca2p-60f, 0.0f, 0x1.34f1e4p-4f, 0x1.b8b5f6p-11f,
     0x1.b8f2dp-27f, 0.0f, 0.0f, 0x1.6a10e4p-62f, 0.0f, 0x1.0a8a4p-94f,
     0x1.0d888ap-4f, 0x1.581e5ep-24f, 0x1.84154cp-85f, 0x1.88624ep-54f,
     0x1.609964p-123f, 0x1.9e0f4ep-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.85dp-43f,
     0x1.a1d8aep-103f, 0x1.d846ap-64f, 0.0f, 0.0f, 0.0f, 0x1.9c56c6p-38f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e82054p-28f, 0x1.9878c2p-4f, 0x1.a4d3cap-3f, 0x1.2ec294p-118f,
     0.0f, 0x1.4a6f36p-30f, 0.0f, 0.0f, 0x1.fd49fap-83f, 0.0f, 0.0f, 0.0f,
     0x1.153234p-107f, 0.0f, 0x1.e2209cp-83f, 0.0f, 0.0f, 0x1.fdb6b6p-124f,
     0x1.23f436p-59f, 0x1.2a5896p-84f, 0x1.fee9acp-110f, 0x1.197ea4p-65f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.77d21p-82f, 0x1.ec0b3ap-4f, 0.0f, 0.0f, 0.0f, 0x1.6ae72p-76f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c59d78p-21f, 0.0f, 0.0f, 0x1.56d386p-16f,
     0x1.8b1d44p-103f, 0.0f, 0x1.72a932p-111f, 0.0f, 0x1.50f932p-9f, 0x1.15fbp-23f,
     0x1.20f6b4p-38f, 0.0f, 0.0f, 0x1.93aaeep-117f, 0.0f, 0x1.a4f094p-121f,
     0x1.f1115ep-38f, 0x1.a946cep-102f, 0x1.60ebfep-94f, 0x1.8b9b2p-47f,
     0x1.5bcfbp-39f, 0.0f, 0x1.d8566cp-34f, 0.0f, 0x1.0d65a8p-66f, 0.0f, 0.0f, 0.0f,
     0x1.93987ap-92f, 0.0f, 0x1.81d9a6p-46f, 0x1.594902p-121f, 0.0f, 0.0f,
     0x1.da543cp-39f, 0.0f, 0x1.fc5afcp-35f, 0.0f, 0.0f, 0x1.62f9bep-48f, 0.0f, 0.0f,
     0.0f, 0x1.9df0c2p-118f, 0.0f, 0x1.d790d6p-42f, 0x1.b884a2p-5f, 0.0f,
     0x1.66d782p-43f, 0x1.aa5e3ap-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f76346p-45f, 0x1.485974p-102f, 0.0f, 0.0f, 0x1.d1236ap-11f, 0x1.96c656p-31f,
     0x1.6bdd72p-114f, 0x1.6ed4d4p-33f, 0x1.39d5ep-66f, 0.0f, 0.0f, 0.0f,
     0x1.b6c57p-88f, 0x1.1c4cdap-115f, 0x1.c4dc5ap-25f, 0x1.052334p-83f,
     0x1.82a26ep-79f, 0x1.bf3602p-54f, 0.0f, 0x1.c87746p-14f, 0x1.de5d96p-7f,
     0x1.ca794ap-109f, 0x1.80a04p-26f, 0.0f, 0x1.d503fep-47f, 0x1.b4f0e4p-77f,
     0x1.92c4fap-97f, 0.0f, 0.0f, 0.0f, 0x1.7ab5b6p-89f, 0.0f, 0.0f, 0x1.629428p-4f,
     0x1.770762p-93f, 0x1.61259p-69f, 0.0f, 0x1.6ad38ep-60f, 0x1.9f042p-79f, 0.0f,
     0x1.93c524p-97f, 0x1.d82126p-99f, 0x1.b6de56p-89f, 0.0f, 0x1.845e48p-91f,
     0x1.3e8ce2p-41f, 0.0f, 0.0f, 0x1.34e01ap-22f, 0x1.b4fcd6p-43f, 0x1.135898p-54f,
     0x1.e5429cp-89f, 0x1.5304f8p-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.444fcp-121f,
     0x1.f5591cp-66f, 0.0f, 0.0f, 0x1.fbd822p-10f, 0.0f, 0x1.2cc928p-65f,
     0x1.96d60cp-107f, 0.0f, 0x1.14b3fcp-14f, 0.0f, 0.0f, 0x1.19ec2ep-25f,
     0x1.31fb94p-122f, 0x1.024cbp-38f, 0x1.e39e52p-59f, 0.0f, 0x1.fdabep-47f, 0.0f,
     0x1.786526p-63f, 0.0f, 0x1.b79a6ap-32f, 0.0f, 0.0f, 0x1.e6ffacp-83f, 0.0f,
     0x1.1d77d8p-86f, 0.0f, 0.0f, 0x1.78a938p-51f, 0x1.93b614p-96f, 0x1.0b070cp-39f,
     0x1.12500cp-71f, 0.0f, 0.0f, 0x1.206dd8p-87f, 0.0f, 0.0f, 0x1.01a78ap-37f, 0.0f,
     0.0f, 0x1.c4587ep-85f, 0.0f, 0x1.e1d098p-13f, 0.0f, 0.0f, 0x1.ca5f62p-43f,
     0x1.d0bdfp-9f, 0.0f, 0x1.4f71ecp-13f, 0.0f, 0x1.6fb03p-87f, 0.0f, 0.0f,
     0x1.81432ap-100f, 0x1.f0a388p-93f, 0.0f, 0x1.d34deap-28f, 0.0f, 0x1.70b4d2p-71f,
     0x1.c6fc42p-97f, 0.0f, 0.0f, 0x1.d0c9e8p-110f, 0x1.018a6cp-28f, 0x1.c7e286p-4f,
     0x1.5fe776p-69f, 0x1.833cecp-30f, 0.0f, 0x1.ed728ep-35f, 0.0f, 0.0f, 0.0f,
     0x1.f5a9ep-97f, 0x1.8bbe6ep-28f, 0x1.9d1e92p-114f, 0.0f, 0.0f, 0x1.bbc708p-19f,
     0x1.4b675p-81f, 0.0f, 0x1.e94676p-87f, 0x1.31818ep-52f, 0.0f, 0x1.e50298p-95f,
     0x1.13e30ep-79f, 0x1.80b39p-77f, 0.0f, 0.0f, 0.0f, 0x1.dda46ep-61f,
     0x1.70df62p-23f, 0.0f, 0.0f, 0.0f, 0x1.df04cap-87f, 0.0f, 0.0f, 0x1.79d3ap-85f,
     0.0f, 0x1.bca4d6p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cb734ep-35f, 0.0f, 0.0f,
     0x1.669922p-94f, 0.0f, 0.0f, 0x1.b2a994p-105f, 0.0f, 0.0f, 0x1.dc178ap-13f,
     0x1.36b6cep-47f, 0.0f, 0.0f, 0x1.201c34p-110f, 0x1.6f6146p-22f, 0.0f, 0.0f,
     0x1.a13e9ap-116f, 0x1.3085b2p-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b1cc92p-40f,
     0.0f, 0.0f, 0.0f, 0x1.299792p-10f, 0x1p0f, 0.0f, 0x1.a708ap-5f, 0x1.5c00b6p-37f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.30b498p-20f, 0x1.0f72f2p-110f, 0.0f, 0x1.8e17fcp-11f,
     0x1.54fd9ap-89f, 0x1.83875p-58f, 0.0f, 0.0f, 0.0f, 0x1.e495aep-97f, 0.0f,
     0x1.88a1d2p-110f, 0.0f, 0.0f, 0.0f, 0x1.3d39f2p-56f, 0.0f, 0x1.03e03cp-34f, 0.0f,
     0x1.fa3b96p-81f, 0x1.c3e0c4p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ee2e68p-71f,
     0x1.ddfa12p-97f, 0x1.2a5386p-68f, 0.0f, 0.0f, 0x1.05b494p-18f, 0.0f,
     0x1.00839cp-80f, 0x1.c67b78p-104f, 0x1.601e8p-68f, 0x1.16e2fcp-94f,
     0x1.f8c386p-59f, 0.0f, 0.0f, 0.0f, 0x1.4b817cp-51f, 0.0f, 0.0f, 0x1.fa0026p-98f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e51746p-108f, 0x1.17d10ep-44f, 0x1.1886c6p-56f, 0.0f,
     0x1.f6bbc2p-9f, 0.0f, 0.0f, 0x1.3a1a5cp-7f, 0x1.af89fep-116f, 0x1.d2d976p-54f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.0a2262p-113f, 0x1.ceadf4p-87f, 0.0f, 0x1.c9fc46p-74f,
     0x1.7ea62ep-19f, 0.0f, 0.0f, 0.0f, 0x1.ac2c82p-116f, 0.0f, 0x1.7ecc54p-12f,
     0x1.c5516p-75f, 0x1.d8a3b2p-73f, 0x1.72a6ccp-88f, 0.0f, 0x1.50339ap-104f,
     0x1.97252ep-13f, 0.0f, 0.0f, 0x1.a32b28p-75f, 0.0f, 0.0f, 0.0f, 0x1.c83becp-15f,
     0x1.afd962p-2f, 0.0f, 0x1.3ad77ap-101f, 0.0f, 0x1.e2b1fp-117f, 0x1.0ef1aep-94f,
     0x1.6c1488p-22f, 0.0f, 0x1.8696c6p-62f, 0x1.1ddfc4p-90f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cd01b8p-23f, 0x1.6a52e2p-112f, 0x1.f4d468p-55f, 0x1.4efaf6p-49f,
     0x1.d9882ap-61f, 0.0f, 0x1.3ffe4ep-29f, 0x1.1a2382p-107f, 0.0f, 0.0f, 0.0f,
     0x1.f147d6p-9f, 0.0f, 0.0f, 0x1.be0eeep-83f, 0.0f, 0x1.385b36p-101f, 0.0f, 0.0f,
     0x1.5215e6p-37f, 0x1.3b7b5cp-76f, 0.0f, 0x1.89782ap-113f, 0.0f, 0x1.217f8ap-119f,
     0x1.67c5fcp-80f, 0.0f, 0x1.e6d7c6p-41f, 0x1.518444p-108f, 0.0f, 0x1.1f0216p-118f,
     0x1.b7b504p-50f, 0x1.46bbdep-30f, 0x1.8a3f66p-96f, 0x1.435e1ap-68f, 0.0f,
     0x1.f04246p-42f, 0x1.d0c40ap-112f, 0.0f, 0.0f, 0.0f, 0x1.ccd79p-67f,
     0x1.bed59ap-49f, 0.0f, 0.0f, 0x1.ff812ap-3f, 0x1.e01e7cp-123f, 0.0f, 0.0f,
     0x1.228eccp-45f, 0.0f, 0.0f, 0x1.bbb1f2p-44f, 0.0f, 0.0f, 0x1.26092ep-6f, 0.0f,
     0x1.70500cp-117f, 0x1.5963f2p-73f, 0.0f, 0x1.2b9e2ap-111f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b2e5bep-68f, 0x1.4dd57cp-74f, 0.0f, 0x1.491214p-46f, 0x1p0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.360c6ep-40f, 0.0f, 0x1.999d8p-86f, 0x1.ed8a6ap-106f,
     0x1.ffad26p-89f, 0x1.9f1c8cp-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3bcdd8p-89f, 0.0f, 0x1.9747acp-92f, 0.0f, 0x1.afef46p-52f, 0.0f, 0.0f, 0.0f,
     0x1.f8e948p-8f, 0x1p0f, 0.0f, 0x1.7b4e68p-58f, 0.0f, 0.0f, 0x1.03fe2ep-108f,
     0x1.6b2ecp-21f, 0x1.cf6504p-78f, 0x1.9f854p-47f, 0.0f, 0.0f, 0.0f,
     0x1.0e5a82p-85f, 0x1.88807p-61f, 0.0f, 0.0f, 0x1.87ae7ap-115f, 0x1.f04d96p-19f,
     0.0f, 0x1.2d047ep-116f, 0.0f, 0.0f, 0x1.daf0ecp-59f, 0.0f, 0.0f, 0x1.6d00fp-8f,
     0x1.e21672p-95f, 0x1.204552p-114f, 0x1.90338ap-113f, 0.0f, 0x1.9c9856p-60f, 0.0f,
     0.0f, 0x1.7678cap-113f, 0.0f, 0.0f, 0x1.30b27p-68f, 0.0f, 0x1.8f9844p-121f, 0.0f,
     0x1.387d0ep-11f, 0x1.412a32p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4b9fbcp-51f,
     0x1.c60156p-73f, 0x1.313f66p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.584066p-86f,
     0x1.faad28p-34f, 0x1.2c7436p-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.90a7f4p-12f,
     0x1.942fbp-55f, 0x1.6a8b56p-45f, 0.0f, 0x1.8aaa18p-16f, 0.0f, 0x1.d65854p-51f,
     0.0f, 0x1.bbdd18p-34f, 0x1.c7d7fp-104f, 0.0f, 0x1.2dc602p-100f, 0x1.b6f7b8p-11f,
     0.0f, 0.0f, 0.0f, 0x1.a2bdfcp-43f, 0x1.8d1ba6p-114f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.857d8cp-56f, 0x1.7e26f8p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.3b78e2p-117f, 0x1.04f614p-112f, 0x1.633746p-125f, 0x1.d20748p-14f,
     0x1.2b3b4cp-25f, 0x1.5d1164p-80f, 0x1.1d75e2p-10f, 0.0f, 0.0f, 0x1.faca62p-66f,
     0x1.4e179ep-47f, 0.0f, 0x1p0f, 0x1.c67ac4p-4f, 0.0f, 0.0f, 0x1.9ce17ep-120f,
     0x1.9769p-37f, 0x1.ecc15ap-57f, 0.0f, 0x1.eaab1cp-3f, 0x1.c2ffa6p-91f, 0.0f,
     0x1.c704b6p-52f, 0.0f, 0x1.010818p-65f, 0.0f, 0.0f, 0x1.896f5cp-114f,
     0x1.f1464ep-72f, 0x1.ff68b4p-83f, 0.0f, 0x1.5a2bdap-56f, 0.0f, 0x1.f9095ap-84f,
     0x1.df54a6p-63f, 0.0f, 0.0f, 0x1.0e4ccep-63f, 0.0f, 0x1.10e182p-11f,
     0x1.12ae8cp-88f, 0x1.cf48f6p-30f, 0x1.e8a5a2p-87f, 0x1.401738p-74f, 0.0f, 0.0f,
     0x1.76f2bp-18f, 0.0f, 0.0f, 0x1.fdc45ap-55f, 0.0f, 0x1.5937c4p-98f,
     0x1.cb94c8p-30f, 0x1.e6923ep-29f, 0x1.be1e94p-94f, 0.0f, 0.0f, 0x1.022226p-69f,
     0x1.2faae4p-62f, 0x1.90d0eep-41f, 0x1.16b9bp-7f, 0.0f, 0x1.f385a6p-43f,
     0x1.26a866p-108f, 0x1.4c6efcp-36f, 0x1.f651d6p-12f, 0x1.a80ffep-103f, 0.0f, 0.0f,
     0.0f, 0x1.d3a75ap-110f, 0x1.31ea9cp-51f, 0x1.77892ap-109f
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
            tmp1 = Sleef_sinpif1_u05purecfma(tmp0);
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
    printf("Sleef_sinpif1_u05purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_sinpif1_u05purecfma bench acc %a\n", global_bench_acc);
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
