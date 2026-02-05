/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_tanf4_u10avx2128.c --function Sleef_finz_tanf4_u10avx2128 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 4 --function-input-vector-size 4 --bench \
 *     --no-embedded-bin --target x86_avx2128
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
     0x1.edd58p-109f, 0.0f, 0x1.1be3f4p-50f, 0x1.64cb0ap-60f, 0.0f, 0x1.cd3ea8p-35f,
     0.0f, 0.0f, 0.0f, 0x1.627086p-2f, 0x1.c0f3d8p-104f, 0.0f, 0x1.4d82c2p-117f, 0.0f,
     0.0f, 0.0f, 0x1.bc7e6ep-1f, 0.0f, 0.0f, 0x1.eaffc6p-110f, 0.0f, 0.0f, 0.0f,
     0x1.4f21bap-5f, 0x1.6adda4p-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.617156p-20f,
     0.0f, 0.0f, 0x1.2c20f6p-19f, 0x1.21542cp-41f, 0.0f, 0x1.1d7246p-51f,
     0x1.a1617ep-28f, 0.0f, 0x1.58ee92p-12f, 0x1.a1a16cp-37f, 0x1.fc17dp-126f, 0.0f,
     0x1.8bd1dcp-61f, 0.0f, 0.0f, 0.0f, 0x1.84cfdcp-28f, 0x1.a3cb5ep-35f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.21d62ap-52f, 0.0f, 0.0f, 0.0f, 0x1.6e9cf8p-47f, 0.0f, 0.0f,
     0x1.26237ap-80f, 0.0f, 0x1p0f, 0x1.87d73p-115f, 0x1.1da0c4p-53f, 0x1.472deep-69f,
     0x1.b9a4dp-97f, 0.0f, 0x1.2649cp-34f, 0x1.91be6cp-8f, 0.0f, 0x1.346e0ap-45f,
     0x1.d38bc8p-11f, 0x1.f10764p-59f, 0.0f, 0x1.c164f6p-67f, 0x1.a66316p-43f,
     0x1.5b0d4cp-60f, 0x1.6d3a26p-8f, 0.0f, 0.0f, 0.0f, 0x1.58eccep-72f, 0.0f,
     0x1.06d066p-44f, 0.0f, 0.0f, 0.0f, 0x1.7d3f36p-45f, 0.0f, 0.0f, 0x1.604a46p-4f,
     0x1.9d4838p-85f, 0x1.f53544p-7f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.04e92cp-125f,
     0x1.0d49acp-48f, 0x1.f599a4p-100f, 0x1.4b98c2p-86f, 0.0f, 0x1.ad129cp-72f,
     0x1.739004p-73f, 0x1.e5d006p-46f, 0.0f, 0.0f, 0x1.00910ap-99f, 0.0f,
     0x1.a96bep-58f, 0.0f, 0.0f, 0x1.f84098p-45f, 0x1.2d9da2p-94f, 0.0f, 0.0f,
     0x1.54d87ep-22f, 0x1.a702eap-45f, 0x1.0f081p-50f, 0.0f, 0x1.64e256p-19f,
     0x1.b96bd2p-118f, 0.0f, 0x1.eb2bbcp-55f, 0.0f, 0.0f, 0x1.6171ccp-60f,
     0x1.26637cp-97f, 0x1.8fb60cp-66f, 0x1.d0fdacp-30f, 0x1.b5dad6p-27f, 0.0f,
     0x1.ec581ap-97f, 0x1.a965cep-41f, 0.0f, 0x1.66cb5ap-105f, 0x1.0e7822p-99f, 0.0f,
     0.0f, 0.0f, 0x1.823e1ap-108f, 0.0f, 0x1.efe276p-96f, 0x1.9bdc48p-111f, 0.0f,
     0.0f, 0x1.1f774ep-91f, 0.0f, 0.0f, 0x1.9b2a66p-60f, 0.0f, 0.0f, 0.0f,
     0x1.a710eep-78f, 0.0f, 0x1.671e94p-22f, 0.0f, 0x1.7dc9b6p-107f, 0x1.500042p-101f,
     0x1.09d592p-102f, 0x1.d0577p-31f, 0x1.56988cp-53f, 0.0f, 0x1.e52cb2p-11f, 0.0f,
     0.0f, 0x1.179588p-26f, 0x1.6a249ap-91f, 0x1.69e5ccp-49f, 0x1.82a46ap-70f, 0.0f,
     0.0f, 0x1.c9b50cp-53f, 0x1.2e8126p-88f, 0.0f, 0.0f, 0x1p0f, 0.0f,
     0x1.4bf44p-101f, 0x1.b70e42p-89f, 0.0f, 0x1.fc09cp-70f, 0.0f, 0.0f, 0.0f,
     0x1.a8b77p-24f, 0x1.dd90a2p-51f, 0x1.41dab8p-108f, 0x1.83162ap-27f, 0.0f,
     0x1.2caec4p-113f, 0x1.fe0fc6p-48f, 0x1.11b134p-52f, 0.0f, 0.0f, 0x1.e5964p-86f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.028494p-96f, 0x1.be9f1ep-52f, 0.0f,
     0x1.a45ef4p-63f, 0.0f, 0x1.cc8a02p-126f, 0.0f, 0x1.79b6fp-110f, 0.0f,
     0x1.611d06p-81f, 0x1.f2781ap-22f, 0.0f, 0x1.8fe77p-12f, 0.0f, 0.0f, 0.0f,
     0x1.5ac008p-38f, 0x1.905efp-17f, 0.0f, 0x1.db93fcp-57f, 0.0f, 0x1.55656cp-96f,
     0x1.4eeb14p-75f, 0x1.c1943ap-74f, 0.0f, 0x1.fe5326p-49f, 0x1.dfec92p-45f, 0.0f,
     0.0f, 0.0f, 0x1.86c6ep-123f, 0x1.cf1516p-120f, 0.0f, 0x1.a6897ap-16f, 0.0f, 0.0f,
     0x1.6eb894p-49f, 0x1.7d5e8ep-78f, 0x1.496p-96f, 0x1.7f32f8p-42f, 0.0f, 0.0f,
     0x1.6d5666p-83f, 0x1.499eacp-29f, 0x1.50904cp-64f, 0.0f, 0.0f, 0x1.80b86p-121f,
     0.0f, 0.0f, 0x1.23d8a4p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8ce5cp-88f, 0.0f,
     0x1.b2252ep-11f, 0x1.b3aeb8p-40f, 0x1.6ab0a2p-59f, 0x1.a5476ap-23f,
     0x1.11c3f6p-53f, 0.0f, 0x1.9bec94p-13f, 0x1.fc66a8p-125f, 0x1.a9fc8cp-24f,
     0x1.9c19aep-60f, 0x1.f4575p-51f, 0x1.f7f9ep-8f, 0.0f, 0x1.e9dbfcp-18f,
     0x1.d06078p-73f, 0.0f, 0x1.728bf2p-115f, 0x1.f8ae3ap-5f, 0x1.cb61cp-22f, 0.0f,
     0.0f, 0x1.ca8f52p-50f, 0.0f, 0.0f, 0.0f, 0x1.c5664cp-94f, 0x1.e08904p-120f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f73c76p-72f, 0.0f, 0x1.7994d4p-43f, 0.0f, 0.0f,
     0x1.8d5204p-110f, 0x1.c53d6cp-123f, 0.0f, 0x1.e313bp-113f, 0x1.7e3ea2p-47f, 0.0f,
     0x1.249ed6p-5f, 0x1.b0b478p-65f, 0.0f, 0x1.2092e8p-38f, 0x1.0b710ap-44f,
     0x1.9819dap-114f, 0.0f, 0x1.e3ab04p-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8d7db6p-8f, 0.0f, 0x1.604cdcp-94f, 0x1.4a517ep-8f, 0x1.7f7e5cp-6f,
     0x1.b196f8p-30f, 0.0f, 0x1.93293ep-66f, 0.0f, 0x1.f0b69p-40f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.62fd0cp-44f, 0x1.72ac18p-2f, 0.0f, 0.0f, 0x1.2eb25ap-93f,
     0x1.3c6c1cp-40f, 0x1.4ba596p-2f, 0.0f, 0.0f, 0x1.7182eep-77f, 0x1.03c146p-82f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a7943cp-123f, 0x1.817e46p-35f,
     0x1.8d2586p-69f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.fb1146p-86f, 0x1.9dda5cp-120f,
     0.0f, 0.0f, 0x1.bb48f8p-113f, 0.0f, 0x1.db60eep-64f, 0.0f, 0.0f, 0.0f,
     0x1.d2871p-45f, 0.0f, 0x1.4d819ep-14f, 0x1.aa3e02p-16f, 0x1.c4a816p-69f,
     0x1.8bb2aep-108f, 0x1.e79a78p-69f, 0.0f, 0x1.c765f2p-50f, 0.0f, 0x1.773a4p-25f,
     0.0f, 0.0f, 0x1.dbf574p-56f, 0.0f, 0.0f, 0x1.da88cap-108f, 0.0f, 0.0f, 0.0f,
     0x1.00726cp-63f, 0.0f, 0x1.5bf922p-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bc9c14p-63f,
     0x1.5d9a54p-63f, 0x1.0f0212p-34f, 0.0f, 0.0f, 0x1.f6119ap-103f, 0.0f,
     0x1.944548p-51f, 0x1.337ad4p-114f, 0x1.f33302p-19f, 0x1.956b3ep-59f, 0.0f,
     0x1.415ff2p-75f, 0.0f, 0.0f, 0x1.98cedap-114f, 0x1.be95e2p-82f, 0x1.ab467ep-14f,
     0x1.c193d8p-53f, 0.0f, 0x1.685f7ep-47f, 0.0f, 0x1.9ea77p-112f, 0.0f,
     0x1.ea3e3ap-69f, 0x1.16491ap-121f, 0x1.29f338p-79f, 0x1.a523b4p-101f,
     0x1.90e61ap-108f, 0.0f, 0.0f, 0x1.584ccap-15f, 0x1.c454b6p-117f, 0x1.83028cp-88f,
     0x1.1f8472p-32f, 0.0f, 0x1.31fe3ep-95f, 0.0f, 0x1.14bc2ep-5f, 0.0f, 0.0f,
     0x1.dad3bcp-81f, 0x1.baecaep-13f, 0.0f, 0.0f, 0.0f, 0x1.f24232p-107f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.751796p-37f, 0.0f, 0x1.00695cp-110f, 0.0f,
     0x1.906856p-29f, 0x1.8aec16p-116f, 0x1.9a2c76p-92f, 0.0f, 0x1.369fdp-96f, 0.0f,
     0.0f, 0.0f, 0x1.b076e6p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.af571ap-124f,
     0x1.f3df5ap-76f, 0x1.1a30bap-60f, 0x1.4df5dp-118f, 0x1.fdef3p-69f, 0.0f,
     0x1.faa9eep-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.be123cp-20f, 0.0f, 0x1.e10d88p-114f,
     0x1.3ef22cp-88f, 0.0f, 0.0f, 0.0f, 0x1.c6cb2ep-78f, 0.0f, 0.0f, 0x1.f971a8p-94f,
     0x1.4c7c2ep-40f, 0x1.996312p-82f, 0.0f, 0x1.3dc0c8p-84f, 0x1.8d6386p-81f,
     0x1.e39c3ep-19f, 0.0f, 0.0f, 0x1.c738b4p-116f, 0x1.2d5d7ap-108f, 0.0f,
     0x1.878b8ap-24f, 0x1.b0ca88p-96f, 0.0f, 0x1.d59504p-114f, 0.0f, 0x1.04e852p-67f,
     0.0f, 0x1.8d9c24p-14f, 0x1.01475p-61f, 0x1.dafeacp-21f, 0.0f, 0.0f,
     0x1.faf3bcp-117f, 0x1.5d70d2p-14f, 0x1.cb56c4p-71f, 0x1.8f0dfap-87f,
     0x1.8880c2p-43f, 0x1.1f2c08p-14f, 0x1.054988p-119f, 0x1.0c9ce2p-45f,
     0x1.795bcp-101f, 0x1.ddf3dep-113f, 0x1.3528a2p-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b5b9dep-119f, 0x1.274118p-19f, 0x1.21e77ap-25f, 0x1.71babcp-78f, 0.0f,
     0x1.46f196p-47f, 0x1.563534p-124f, 0x1.7c9308p-109f, 0x1.59a5b4p-46f,
     0x1.a387c2p-6f, 0x1.1af918p-35f, 0.0f, 0x1.41e5bp-80f, 0x1.45d2e8p-99f,
     0x1.5bb1a8p-77f, 0x1.9803bcp-73f, 0.0f, 0.0f, 0.0f, 0x1.68be74p-125f, 0.0f, 0.0f,
     0x1.4c4d34p-83f, 0x1.7557b2p-26f, 0x1.b7046ep-23f, 0.0f, 0.0f, 0x1.fa50e8p-76f,
     0.0f, 0.0f, 0x1.92b86ep-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cb1946p-115f,
     0x1.ae6968p-102f, 0.0f, 0x1.6d9f28p-81f, 0x1.0f2822p-13f, 0.0f, 0.0f, 0.0f,
     0x1.15cb18p-7f, 0x1.0f8406p-75f, 0.0f, 0x1.36404ep-28f, 0x1.ae7caep-16f, 0.0f,
     0x1.12f52p-100f, 0.0f, 0x1.14f296p-99f, 0x1.dc266ap-125f, 0.0f, 0x1.44d522p-88f,
     0.0f, 0x1.4aa204p-48f, 0.0f, 0x1.0637eap-46f, 0x1.8c7ae6p-70f, 0.0f,
     0x1.2b517cp-8f, 0.0f, 0.0f, 0x1.e923f2p-99f, 0.0f, 0x1.d9f032p-125f, 0.0f, 0.0f,
     0x1.d77268p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.af16aap-13f, 0x1.8dfe58p-95f,
     0.0f, 0x1.ed7038p-78f, 0.0f, 0.0f, 0x1.a172f2p-114f, 0.0f, 0x1.4debd4p-50f,
     0x1.ee84a2p-71f, 0.0f, 0x1.a4edf6p-81f, 0x1.b9f768p-87f, 0x1.7d53e8p-123f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.0320fep-9f, 0x1.b28a3cp-4f, 0x1.9f2d3ep-32f, 0.0f, 0.0f,
     0x1.97b902p-64f, 0.0f, 0x1.50894ep-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.489764p-106f, 0x1.24395ep-4f, 0x1.ae94cap-78f, 0.0f, 0.0f, 0x1.3da64cp-66f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b9963ep-5f, 0.0f, 0x1.10439ep-124f, 0x1.2587fep-106f,
     0.0f, 0x1.d57fd4p-126f, 0x1.d1a59ep-35f, 0.0f, 0.0f, 0.0f, 0x1.28bcecp-115f,
     0x1.e0e64ep-1f, 0x1.f87684p-86f, 0x1.c84aep-82f, 0.0f, 0x1.433cep-4f,
     0x1.399ab6p-56f, 0x1.c8e0c2p-47f, 0x1.916734p-58f, 0x1.f52e5ap-122f,
     0x1.718a7cp-68f, 0x1.d7cdd8p-17f, 0x1.74298cp-90f, 0x1.4c7218p-58f,
     0x1.aa6a3ap-80f, 0.0f, 0.0f, 0.0f, 0x1.1718dcp-121f, 0x1.6e7952p-107f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.162cf2p-73f, 0x1.2e1502p-5f,
     0x1.6e912cp-54f, 0x1.c43e5ap-126f, 0x1.5c0e6cp-68f, 0x1.35ac0ap-94f,
     0x1.fccbc2p-10f, 0.0f, 0.0f, 0.0f, 0x1.3600a4p-15f, 0x1.303afep-41f,
     0x1.6f2e72p-51f, 0.0f, 0x1.14d7dcp-107f, 0x1.d87f9cp-73f, 0x1.85e0dap-87f,
     0x1.976c8cp-19f, 0x1.3011cap-22f, 0.0f, 0x1.369176p-111f, 0.0f, 0.0f, 0.0f,
     0x1.5b60bap-101f, 0x1.54937cp-69f, 0x1.04f6eep-4f, 0x1.3be9c2p-65f,
     0x1.a1eeb8p-112f, 0.0f, 0x1.56b36ep-46f, 0.0f, 0x1.1b2bb2p-62f, 0x1.b425a4p-91f,
     0x1.9c2eacp-124f, 0.0f, 0.0f, 0.0f, 0x1.5f27ccp-30f, 0.0f, 0.0f, 0.0f,
     0x1.e95b68p-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ece82ep-26f,
     0x1.1755d2p-53f, 0x1.870c36p-33f, 0x1.e1cf08p-112f, 0x1.abe0c4p-121f,
     0x1.f1d3fcp-8f, 0.0f, 0x1.e799dp-32f, 0.0f, 0x1.5ac316p-7f, 0.0f,
     0x1.c65814p-45f, 0.0f, 0.0f, 0.0f, 0x1.fd77d6p-28f, 0.0f, 0x1.15ddeep-100f, 0.0f,
     0x1.37da56p-121f, 0x1.b91b6cp-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b3b438p-78f, 0.0f, 0.0f, 0x1.36e7a8p-12f, 0x1.c68f24p-107f, 0.0f, 0.0f, 0.0f,
     0x1.12d3b2p-55f, 0x1.39ab28p-1f, 0.0f, 0.0f, 0x1.c0fff6p-48f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.fb0f76p-24f, 0x1.11e0b4p-55f, 0.0f, 0.0f, 0.0f, 0x1.458256p-89f,
     0.0f, 0x1.d99a0ap-115f, 0x1.0a604ep-37f, 0.0f, 0.0f, 0x1.6450c8p-74f, 0.0f, 0.0f,
     0x1.d2f48ap-96f, 0.0f, 0x1.f3bcaap-40f, 0.0f, 0x1.54a9cep-44f, 0x1.76933p-113f,
     0.0f, 0.0f, 0.0f, 0x1.1341acp-5f, 0x1.1663cp-118f, 0.0f, 0x1.e34fa2p-108f, 0.0f,
     0.0f, 0.0f, 0x1.fd6f92p-9f, 0.0f, 0.0f, 0x1.be34ep-60f, 0x1.c4b976p-39f,
     0x1.d60f22p-30f, 0.0f, 0.0f, 0x1.80e1a4p-78f, 0x1.030922p-20f, 0x1.7d0d28p-28f,
     0x1.a8b434p-104f, 0.0f, 0.0f, 0.0f, 0x1.17c816p-102f, 0.0f, 0x1.3bc4d4p-85f,
     0x1.1dbc52p-119f, 0.0f, 0x1.4cec72p-2f, 0.0f, 0x1.e02a42p-45f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9511d8p-125f, 0.0f, 0.0f, 0x1.9c9b98p-56f,
     0x1.b1623ep-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ecf5ep-121f, 0.0f, 0.0f,
     0x1.dfa256p-52f, 0x1.fb0a2ep-93f, 0x1.a6aacp-58f, 0x1.7f5ab2p-57f,
     0x1.eb8e66p-109f, 0x1.730808p-24f, 0.0f, 0x1.00b192p-15f, 0.0f, 0.0f,
     0x1.11774cp-97f, 0x1.f24da8p-6f, 0x1.25475p-44f, 0.0f, 0x1.40b912p-104f, 0.0f,
     0.0f, 0x1.fc0292p-7f, 0x1.57f2d2p-50f, 0.0f, 0.0f, 0x1.ef4cap-38f,
     0x1.090462p-91f, 0.0f, 0.0f, 0x1.4b327p-93f, 0.0f, 0x1.9680fcp-113f, 0x1p0f,
     0x1.7a34e8p-31f, 0.0f, 0.0f, 0.0f, 0x1.c51c36p-86f, 0x1.c95e66p-15f, 0.0f,
     0x1.2582fep-43f, 0.0f, 0.0f, 0.0f, 0x1.b66ca8p-30f, 0.0f, 0x1.3a3f52p-93f,
     0x1.d700dep-84f, 0.0f, 0.0f, 0x1.c99cc4p-79f, 0x1.798e72p-78f, 0.0f,
     0x1.e1739cp-27f, 0x1.0d902ap-122f, 0.0f, 0x1.3d89ap-114f, 0x1.d25f02p-8f,
     0x1.ff8fb4p-51f, 0.0f, 0x1.229ed2p-83f, 0.0f, 0.0f, 0.0f, 0x1.0ed8fep-81f,
     0x1.554c86p-52f, 0x1.945d38p-50f, 0.0f, 0.0f, 0x1.6bd14p-50f, 0x1.7b1ce2p-83f,
     0.0f, 0.0f, 0.0f, 0x1.a5708ap-16f, 0.0f, 0x1.6ae02p-107f, 0.0f, 0x1.b17278p-34f,
     0.0f, 0x1.32480ap-102f, 0x1.b1a39ap-63f, 0.0f, 0.0f, 0.0f, 0x1.315feep-64f, 0.0f,
     0.0f, 0x1.cfed32p-95f, 0x1.ef57bcp-20f, 0.0f, 0x1.1e6316p-4f, 0.0f, 0.0f, 0.0f,
     0x1.53d148p-91f, 0.0f, 0x1.83f1ap-107f, 0x1.5da85cp-98f, 0.0f, 0.0f, 0.0f,
     0x1.ceda54p-16f, 0.0f, 0x1.ebbd9ep-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8f0262p-32f,
     0.0f, 0.0f, 0.0f, 0x1.c8b9e2p-42f, 0.0f, 0x1.9a35ecp-100f, 0.0f, 0.0f, 0.0f,
     0x1.6f5366p-38f, 0x1.0d21f6p-82f, 0x1.44c5a8p-38f, 0x1.444258p-5f,
     0x1.8b769cp-10f, 0.0f, 0x1.175e12p-107f, 0x1.e47f78p-84f, 0.0f, 0x1.660ep-124f,
     0x1.e8aaeap-39f, 0x1.f2d22cp-34f, 0.0f, 0.0f, 0x1.29cdfcp-87f, 0.0f,
     0x1.30bd8ep-54f, 0.0f, 0.0f, 0.0f, 0x1.cdaf7cp-66f, 0.0f, 0x1.84a64ep-15f,
     0x1.50298p-108f, 0.0f, 0x1.2626f4p-34f, 0.0f, 0.0f, 0x1.c88c0cp-27f, 0.0f,
     0x1.22c768p-103f, 0.0f, 0x1.8ff2dep-93f, 0.0f, 0x1.7125a2p-16f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.745be4p-112f
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
            tmp1 = Sleef_finz_tanf4_u10avx2128(tmp0);
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
    printf("Sleef_finz_tanf4_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_tanf4_u10avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
