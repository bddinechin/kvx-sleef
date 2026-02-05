/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_atanf1_u35purecfma.c --function \
 *     Sleef_atanf1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0x1.f2705p-109f, 0.0f, 0x1.36f0c2p-65f, 0x1.d91fdep-83f, 0x1.87a2b8p-52f,
     0x1.96ecbap-38f, 0x1.89192ep-101f, 0.0f, 0x1.58b4a4p-96f, 0.0f, 0.0f,
     0x1.7c731cp-72f, 0.0f, 0x1.d00a5ep-30f, 0x1.120202p-100f, 0.0f, 0x1.b78332p-55f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.124152p-120f, 0.0f, 0.0f,
     0x1.79e334p-42f, 0.0f, 0x1.5f1046p-85f, 0.0f, 0.0f, 0.0f, 0x1.f1e7bap-42f, 0.0f,
     0.0f, 0x1.d049aap-64f, 0.0f, 0.0f, 0x1.5997fap-91f, 0.0f, 0x1.e1b6d4p-78f,
     0x1.eab516p-92f, 0x1.0c348p-62f, 0x1.71e7bcp-43f, 0.0f, 0x1.e6bc2ap-80f, 0.0f,
     0x1.eaaaf6p-32f, 0.0f, 0x1.b5543ap-75f, 0x1.3bab26p-91f, 0.0f, 0x1.71a1c2p-97f,
     0.0f, 0x1.8f83c8p-121f, 0x1.2aa7bcp-53f, 0x1.726b7cp-78f, 0x1.6bdf5ep-62f,
     0x1.666d9cp-22f, 0.0f, 0x1.dfdebp-2f, 0x1.2d3ed4p-116f, 0.0f, 0x1.7e875p-110f,
     0x1.f27ee6p-87f, 0.0f, 0.0f, 0.0f, 0x1.478048p-117f, 0.0f, 0.0f, 0.0f,
     0x1.d3c39p-97f, 0x1.69ee8cp-49f, 0x1.81727ap-28f, 0.0f, 0x1.aa4bccp-27f,
     0x1.c99c02p-58f, 0.0f, 0x1.420048p-32f, 0x1.d34a28p-37f, 0.0f, 0.0f, 0.0f,
     0x1.a1f39ep-20f, 0.0f, 0.0f, 0.0f, 0x1.8c33fcp-33f, 0.0f, 0.0f, 0x1.ab2f84p-41f,
     0x1.dc986cp-72f, 0x1.02ce18p-30f, 0.0f, 0x1.8419fep-105f, 0x1.3721fep-80f,
     0x1.78e8dcp-38f, 0x1.70cc2ep-6f, 0x1.ec265ap-36f, 0.0f, 0x1.cd7218p-77f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.451ep-114f, 0.0f, 0x1.80144cp-112f, 0.0f,
     0x1.445a5cp-67f, 0x1.14f444p-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d0552ap-33f,
     0x1.9d305ap-99f, 0x1.21ef06p-42f, 0.0f, 0x1.1cd846p-108f, 0.0f, 0.0f,
     0x1.17f3ap-114f, 0.0f, 0x1.5fd2c2p-19f, 0x1.df91b2p-5f, 0.0f, 0x1.062852p-84f,
     0x1.890646p-41f, 0x1.f15568p-121f, 0.0f, 0.0f, 0x1.b968b4p-34f, 0x1.6429b6p-78f,
     0x1.ccb71ep-100f, 0.0f, 0x1.14e6a6p-76f, 0x1.aa6db4p-46f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.8441acp-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f73f4ap-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fec1c2p-20f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.14ad62p-47f, 0.0f, 0x1.a03d14p-80f, 0.0f, 0.0f, 0x1p0f,
     0x1.74dffap-75f, 0x1.7080e2p-75f, 0.0f, 0.0f, 0x1.5348c6p-9f, 0x1.9d97d4p-107f,
     0x1.49de7ep-75f, 0x1.e1af0ep-98f, 0x1.2282e6p-62f, 0x1.e3aa3p-42f,
     0x1.5e5634p-107f, 0.0f, 0.0f, 0x1.dc1bd4p-62f, 0x1.b2bc7cp-102f, 0.0f, 0.0f,
     0x1.bbbab6p-105f, 0.0f, 0x1.d59afp-126f, 0x1.ec96fcp-64f, 0.0f, 0x1.30c99p-125f,
     0.0f, 0.0f, 0.0f, 0x1.901204p-97f, 0.0f, 0x1.5577dcp-40f, 0.0f, 0.0f, 0.0f,
     0x1.9332p-2f, 0.0f, 0x1.8ab7e8p-70f, 0x1.a44fep-91f, 0.0f, 0x1.d426a8p-27f,
     0x1.d1251p-89f, 0.0f, 0.0f, 0x1.d5fb96p-118f, 0.0f, 0.0f, 0x1.d2c0d4p-123f, 0.0f,
     0x1.764aacp-111f, 0x1.a4b442p-33f, 0x1.7d78d8p-97f, 0x1.0ededp-82f, 0.0f, 0.0f,
     0x1.6ddea8p-102f, 0.0f, 0x1.8c317ap-102f, 0.0f, 0x1.bf9f96p-106f, 0.0f,
     0x1.bd3d2p-52f, 0x1.055fccp-104f, 0.0f, 0x1.04d3a2p-104f, 0.0f, 0x1.9a931ep-27f,
     0x1.6279f2p-44f, 0.0f, 0.0f, 0x1.b49564p-82f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.68791ap-73f, 0x1.c5107ep-99f, 0x1.338c1ap-33f, 0.0f, 0x1.3f7e22p-20f, 0.0f,
     0x1.c2e7eep-121f, 0x1.bdb928p-53f, 0.0f, 0.0f, 0x1.8ccc62p-111f, 0x1.f2cfeep-57f,
     0.0f, 0x1.c5142p-30f, 0.0f, 0.0f, 0x1.9f671p-48f, 0.0f, 0x1.29d458p-102f,
     0x1.2eec4ep-34f, 0x1.7f1694p-62f, 0.0f, 0x1.edac98p-104f, 0.0f, 0.0f, 0.0f,
     0x1.143056p-3f, 0.0f, 0.0f, 0.0f, 0x1.e8d69cp-19f, 0.0f, 0.0f, 0x1.48bda4p-88f,
     0.0f, 0x1.bca8f2p-109f, 0x1.35ac3ep-51f, 0.0f, 0.0f, 0x1.8b94dp-124f,
     0x1.cd761ap-39f, 0.0f, 0x1.f3d684p-52f, 0.0f, 0x1.42502ap-59f, 0.0f,
     0x1.f10eeep-31f, 0x1.f4c9cp-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.afb974p-69f, 0x1.e9f192p-11f, 0.0f, 0x1.3a7d24p-8f, 0.0f, 0x1.a8c858p-76f,
     0x1.cba2cp-110f, 0.0f, 0x1.6f5df6p-55f, 0.0f, 0x1.86caccp-108f, 0.0f,
     0x1.c950cep-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5e8d14p-32f, 0.0f, 0.0f,
     0x1.c6bb1p-12f, 0.0f, 0x1.28252ap-63f, 0.0f, 0x1.8c443cp-74f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.472484p-115f, 0.0f, 0x1.e68b22p-85f, 0.0f, 0x1.7071a8p-81f, 0.0f,
     0.0f, 0x1.2bf78ep-69f, 0x1.789bfp-34f, 0x1.044556p-110f, 0x1.c5321p-77f,
     0x1.2c738ap-24f, 0.0f, 0x1.3d4bf4p-29f, 0.0f, 0x1.0ebb78p-64f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.4431d2p-84f, 0.0f, 0x1.5cfb2ap-84f, 0.0f, 0x1.2d0644p-24f, 0.0f,
     0x1.fcc476p-115f, 0x1.72054ap-32f, 0.0f, 0.0f, 0x1.804506p-100f, 0.0f,
     0x1.e21de4p-96f, 0x1.23efacp-1f, 0.0f, 0.0f, 0.0f, 0x1.dc7896p-2f,
     0x1.c0aac8p-62f, 0x1.233f1p-76f, 0x1.2c751p-126f, 0x1.3c83ep-102f, 0.0f,
     0x1.efc0bep-119f, 0.0f, 0x1.46a842p-6f, 0x1.6238cap-123f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.be7a14p-70f, 0x1.031912p-105f, 0.0f, 0.0f, 0x1.e8b722p-106f, 0.0f, 0.0f,
     0.0f, 0x1.f32becp-95f, 0.0f, 0.0f, 0.0f, 0x1.cc000cp-10f, 0.0f, 0.0f, 0.0f,
     0x1.14dbcp-112f, 0.0f, 0x1.84d192p-24f, 0.0f, 0.0f, 0x1.12d618p-17f,
     0x1.c0130ap-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.9d7182p-15f,
     0.0f, 0.0f, 0x1.4e3d7cp-94f, 0.0f, 0x1.720f5ep-55f, 0x1.826f0cp-59f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.721332p-125f, 0x1.9e7346p-38f, 0x1.b13c6p-49f,
     0x1.f64268p-43f, 0.0f, 0x1.246966p-96f, 0.0f, 0.0f, 0x1.5d217ep-3f, 0.0f, 0.0f,
     0x1.4bd30cp-51f, 0x1.73373ap-16f, 0.0f, 0x1.ca55e8p-118f, 0.0f, 0x1.d7938ap-111f,
     0.0f, 0x1.20f6eep-19f, 0x1.117586p-91f, 0x1.24bbeap-27f, 0x1.98c466p-67f,
     0x1.ad9f3ap-112f, 0.0f, 0x1.91a2b6p-60f, 0x1.4f3f3ap-19f, 0.0f, 0x1.3dfdf2p-123f,
     0x1.1917b6p-42f, 0.0f, 0.0f, 0x1.1bcdacp-65f, 0x1.19c8bap-32f, 0x1.dbb46cp-5f,
     0x1.1d0ed8p-102f, 0x1.5cdebap-46f, 0x1.3f97d6p-25f, 0.0f, 0.0f, 0x1.dde2f2p-104f,
     0.0f, 0.0f, 0x1.e1bbc6p-78f, 0.0f, 0x1.102682p-87f, 0x1.dcaca8p-31f, 0.0f, 0.0f,
     0x1.4ced34p-105f, 0.0f, 0.0f, 0.0f, 0x1.d32854p-126f, 0.0f, 0x1.021768p-84f,
     0.0f, 0.0f, 0x1.937fe2p-46f, 0.0f, 0x1.aa2c3ap-74f, 0x1.5ebc7ap-82f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.64826ep-110f, 0x1.066aeep-122f, 0.0f, 0.0f, 0.0f,
     0x1.0b11d8p-56f, 0.0f, 0x1.dd000cp-95f, 0.0f, 0x1.48e3bp-66f, 0x1.92e006p-53f,
     0x1.b8e42p-98f, 0.0f, 0x1.13c88cp-56f, 0x1.428f48p-116f, 0x1.850924p-74f,
     0x1.3e1ab8p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.1d446p-121f, 0.0f,
     0x1.0d4d82p-117f, 0x1.63c5cep-83f, 0.0f, 0x1.27d368p-88f, 0x1.335e04p-30f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.9211a4p-95f, 0x1.1bd08p-18f, 0x1.cc9788p-77f,
     0x1.1d431p-62f, 0x1.054f5ep-73f, 0x1.4872aap-9f, 0.0f, 0.0f, 0x1.660deep-95f,
     0.0f, 0x1.5042bcp-16f, 0x1.e7b8fap-41f, 0x1.c94e82p-71f, 0.0f, 0x1.43e6dcp-75f,
     0x1.676998p-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e5297cp-17f, 0.0f, 0.0f, 0.0f,
     0x1.d4d65p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7421a6p-45f, 0x1.292734p-6f,
     0x1.7b3a8ep-53f, 0x1.9c8d92p-80f, 0x1.05e60ap-111f, 0.0f, 0x1.46ede8p-90f,
     0x1.ee6b28p-21f, 0.0f, 0.0f, 0x1.3fbf54p-43f, 0x1.f863b6p-81f, 0x1.ebdf8ep-13f,
     0.0f, 0.0f, 0.0f, 0x1.ee2274p-33f, 0.0f, 0.0f, 0.0f, 0x1.7e34fep-6f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.6b2166p-46f, 0.0f, 0x1.edd826p-11f, 0.0f, 0x1.581f4p-106f,
     0x1.db95a4p-4f, 0.0f, 0.0f, 0x1.25e504p-84f, 0x1.a9dedcp-49f, 0x1.2aa4b4p-50f,
     0.0f, 0x1.40773ep-45f, 0x1.5e1da4p-8f, 0.0f, 0x1.c4ed1ap-2f, 0x1.51435ep-71f,
     0x1.4ff756p-76f, 0x1.645b3ap-124f, 0.0f, 0x1.e387b8p-61f, 0x1.f0f424p-51f,
     0x1.bd014p-112f, 0.0f, 0x1.a9efeep-58f, 0x1.60fe2ep-20f, 0x1.4d70cp-3f,
     0x1.81de7ap-116f, 0x1.257772p-78f, 0x1.a03a24p-56f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3c34bcp-106f, 0x1.133552p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.07b6e2p-83f, 0.0f, 0.0f, 0x1.6830a2p-56f, 0.0f, 0x1.47eb24p-49f, 0.0f, 0.0f,
     0.0f, 0x1.cb76e6p-9f, 0.0f, 0x1.ade67ep-41f, 0.0f, 0.0f, 0x1.78566cp-125f, 0.0f,
     0x1.8f286p-74f, 0.0f, 0x1.cb8b06p-99f, 0.0f, 0x1.7f7b8ap-60f, 0.0f, 0.0f, 0.0f,
     0x1.4907bap-115f, 0x1.f8472ep-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.73f568p-37f,
     0x1.0e06bep-83f, 0x1.7cce74p-76f, 0.0f, 0x1.3c32d8p-86f, 0x1.4ead4ep-79f, 0.0f,
     0x1.b7fcdcp-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b4c556p-113f, 0.0f,
     0x1.782dc4p-125f, 0.0f, 0.0f, 0x1.1359c8p-87f, 0x1.22c464p-62f, 0.0f,
     0x1.e7237p-26f, 0.0f, 0.0f, 0x1.7ba0a6p-126f, 0.0f, 0x1.3af4c2p-121f,
     0x1.c7dfb8p-25f, 0x1.32869ap-46f, 0.0f, 0.0f, 0.0f, 0x1.935b7cp-88f,
     0x1.a0f49ap-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dcc17ap-37f, 0.0f,
     0x1.b9bc5cp-53f, 0.0f, 0.0f, 0.0f, 0x1.f0afe4p-54f, 0x1.ba9c66p-101f,
     0x1.19e9a4p-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4c6a54p-56f, 0.0f,
     0x1.821198p-120f, 0x1.0bdc2cp-95f, 0x1.0f2edcp-83f, 0.0f, 0x1.c9d24p-3f, 0.0f,
     0x1.8b63b4p-102f, 0.0f, 0.0f, 0x1.5a2fcp-37f, 0.0f, 0x1.16209ap-33f, 0.0f,
     0x1.1e665ep-59f, 0.0f, 0x1.d9af34p-3f, 0.0f, 0x1.6f8ee2p-115f, 0.0f, 0.0f,
     0x1.5d1e18p-62f, 0x1.0798ap-21f, 0x1.2bcb1p-88f, 0x1.031e44p-113f, 0.0f,
     0x1.cff152p-31f, 0.0f, 0.0f, 0x1.700a48p-37f, 0.0f, 0.0f, 0.0f, 0x1.969ca4p-62f,
     0.0f, 0x1.97d1cp-84f, 0x1.92de86p-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e97cfap-88f,
     0.0f, 0x1.6ec2ccp-21f, 0x1.8c1c2ep-31f, 0.0f, 0.0f, 0x1.70332ep-1f, 0.0f, 0.0f,
     0x1.0003ccp-118f, 0x1.bdffecp-108f, 0x1.86a908p-1f, 0x1.b38a0ap-112f, 0.0f,
     0x1.34018ap-92f, 0.0f, 0x1.78cef4p-25f, 0x1.3093e2p-18f, 0x1.0b5a84p-64f, 0.0f,
     0x1.1c4ca6p-43f, 0.0f, 0.0f, 0x1.f4f74ep-19f, 0x1.7ca004p-52f, 0.0f, 0.0f, 0.0f,
     0x1.23216ep-58f, 0x1.64d576p-41f, 0x1.5c33dp-37f, 0.0f, 0.0f, 0x1.7932bap-31f,
     0x1.c4d156p-46f, 0x1.b3ee78p-107f, 0.0f, 0x1.9d4c22p-59f, 0x1.23b5fcp-34f,
     0x1.3f49e2p-12f, 0x1.7658f2p-96f, 0.0f, 0x1.8f28p-24f, 0.0f, 0x1.fffd9cp-94f,
     0x1.a53338p-87f, 0x1.b6ce1p-30f, 0x1.be490ep-37f, 0.0f, 0x1.9df09ap-15f, 0.0f,
     0x1.a30d98p-84f, 0x1.1fbd96p-11f, 0.0f, 0.0f, 0x1.302fb2p-52f, 0.0f,
     0x1.82ba2ap-35f, 0.0f, 0.0f, 0x1.05d1d4p-106f, 0.0f, 0x1.0bdafp-31f,
     0x1.5ad524p-37f, 0.0f, 0x1.108f56p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3eaf0cp-93f,
     0.0f, 0x1.02ceacp-1f, 0x1.ec8e34p-91f, 0x1.2e30e8p-81f, 0x1.5d0dcap-53f,
     0x1.420bcp-109f, 0.0f, 0x1.ddb03p-4f, 0x1.f7df82p-97f, 0.0f, 0.0f, 0.0f,
     0x1.7f2286p-83f, 0x1.e3b472p-125f, 0.0f, 0.0f, 0.0f, 0x1.727a84p-7f,
     0x1.ec4daap-94f, 0x1.e977b6p-33f, 0x1.93b012p-2f, 0.0f, 0x1.db3ac2p-92f,
     0x1.ba8adp-85f, 0x1.096cb4p-89f, 0x1.80bbfap-90f, 0x1.aa46d2p-31f,
     0x1.452bcp-49f, 0x1p0f, 0.0f, 0x1.c4179ep-110f, 0.0f, 0x1.5b3efep-20f,
     0x1.3b01e4p-57f, 0x1.2df7bcp-29f, 0x1.c5c5fep-74f, 0x1.77e40ap-87f,
     0x1.f2d7aap-56f, 0.0f, 0x1.c21eb8p-86f, 0x1.a47702p-88f, 0.0f, 0.0f, 0.0f,
     0x1.cc7674p-41f, 0x1.1cdb58p-19f, 0x1.032eb2p-69f, 0x1.19bc38p-96f,
     0x1.465ddep-109f, 0.0f, 0.0f, 0x1.9b0d44p-64f, 0x1.c2b274p-103f,
     0x1.b7e64ap-117f, 0x1.467754p-116f, 0.0f, 0x1.9d5ba8p-95f, 0x1.386e84p-112f,
     0x1.7200b6p-65f, 0x1.e748ccp-112f, 0.0f, 0.0f, 0x1.a0374ep-103f, 0.0f,
     0x1.e97e68p-35f, 0.0f, 0x1.af633p-69f, 0.0f, 0.0f, 0.0f, 0x1.928ffap-72f, 0.0f,
     0x1.04132cp-118f, 0x1.459662p-50f, 0x1.bf0766p-101f, 0.0f, 0.0f, 0x1.07d516p-54f,
     0.0f, 0x1.dc5908p-3f, 0x1.7e6c6cp-95f, 0.0f, 0x1.eaeeb4p-56f, 0x1.dfe906p-101f,
     0.0f, 0x1.2341b8p-70f, 0.0f, 0.0f, 0x1.1eaffap-39f, 0x1.b256c8p-57f, 0.0f, 0.0f,
     0x1.d79ae2p-64f, 0.0f, 0.0f, 0x1.fa306p-18f, 0x1.f4b12cp-66f, 0.0f,
     0x1.01716cp-47f, 0x1.adf73cp-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d6cd02p-85f, 0.0f,
     0x1.0655b6p-7f, 0x1.52b582p-36f, 0.0f, 0.0f, 0x1.f3452p-78f, 0.0f, 0.0f, 0.0f,
     0x1.b28806p-99f, 0x1.82ed88p-98f, 0x1.b9ff44p-46f, 0x1.a736b6p-69f, 0.0f,
     0x1.1a1e3ap-83f, 0x1.b6531p-83f, 0x1.baa97ap-22f, 0.0f, 0x1.ce3564p-76f,
     0x1.6782c2p-43f, 0.0f, 0x1.c3f81ap-97f, 0.0f, 0x1.a74fcep-68f, 0x1.1f315ap-27f,
     0x1.e0d6e8p-19f, 0x1.137384p-92f, 0.0f, 0.0f, 0x1.421c1ap-9f, 0x1.56d30ap-113f,
     0x1.7e5f9ep-13f, 0x1.18c888p-2f, 0.0f, 0x1.b787cp-30f, 0x1.7830f6p-37f,
     0x1.512f54p-81f, 0x1.1fc86ep-37f, 0x1.7ca4dap-82f, 0x1.70044ep-74f,
     0x1.0f9becp-47f, 0x1.852186p-114f, 0.0f, 0x1.c4d52ep-46f, 0x1.07a25ap-91f,
     0x1.502ebp-9f, 0x1.032a46p-81f, 0x1.ec029ep-35f, 0x1.242b46p-41f, 0.0f,
     0x1.ccf012p-60f, 0.0f, 0.0f, 0x1.698b3ap-62f, 0.0f, 0x1.c3b002p-78f, 0.0f,
     0x1.1bf47cp-14f, 0.0f, 0.0f, 0x1.e88a1ep-50f, 0.0f, 0x1.a3916ep-59f,
     0x1.435a54p-58f, 0x1.a59398p-20f, 0.0f, 0x1.72985ap-4f, 0x1.d094f6p-107f, 0.0f,
     0.0f, 0x1.72f07cp-56f, 0x1.3ae526p-65f, 0x1.b16b68p-109f, 0.0f, 0x1.0063a4p-14f,
     0x1.e04b44p-93f, 0.0f, 0x1.d49adep-62f, 0x1.c59478p-113f, 0x1.8a717ap-31f
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
            tmp1 = Sleef_atanf1_u35purecfma(tmp0);
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
    printf("Sleef_atanf1_u35purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_atanf1_u35purecfma bench acc %a\n", global_bench_acc);
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
