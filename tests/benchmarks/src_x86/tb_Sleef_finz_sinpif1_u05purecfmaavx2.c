/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sinpif1_u05purecfma.c --function \
 *     Sleef_finz_sinpif1_u05purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.11f698p-61f, 0x1.84b496p-73f, 0.0f, 0.0f, 0x1.d4a922p-62f, 0.0f,
     0x1.e18a0ep-109f, 0.0f, 0x1.09efc8p-100f, 0.0f, 0x1.c2a272p-3f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b86f1ap-100f, 0.0f, 0x1.601ddap-38f, 0.0f, 0.0f, 0.0f,
     0x1.31e3e8p-124f, 0.0f, 0.0f, 0x1.0dd5e8p-115f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.34854ap-14f, 0x1.308a58p-37f, 0x1.2ea2cep-82f, 0.0f, 0.0f, 0x1.094f0cp-73f,
     0x1.69d4cp-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.507f32p-125f, 0x1.0c7fc8p-45f, 0.0f,
     0.0f, 0x1.bba824p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.edc986p-12f, 0.0f, 0.0f, 0.0f, 0x1.b516b2p-7f, 0x1.fa4802p-34f, 0.0f,
     0x1.7bc726p-111f, 0x1.2ed9bep-16f, 0.0f, 0.0f, 0.0f, 0x1.5685p-123f, 0.0f, 0.0f,
     0x1.64796ep-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.79e40ap-5f, 0.0f, 0x1.325e8ap-18f,
     0x1.255792p-37f, 0x1.b6e02ap-37f, 0.0f, 0x1.c81bdap-123f, 0.0f, 0x1.2db906p-30f,
     0.0f, 0x1.e940c4p-13f, 0.0f, 0.0f, 0x1.7e0836p-46f, 0x1.8d7138p-43f,
     0x1.c0b31p-54f, 0.0f, 0x1.090a84p-98f, 0x1.11fc7ap-34f, 0.0f, 0x1.29a2d6p-68f,
     0.0f, 0.0f, 0.0f, 0x1.fd1edep-4f, 0x1.ba714ep-99f, 0x1.be82fep-114f,
     0x1.ea1294p-35f, 0.0f, 0.0f, 0.0f, 0x1.647908p-37f, 0x1.dcad3ap-41f,
     0x1.49eacep-80f, 0x1.fcbd44p-109f, 0.0f, 0.0f, 0x1.6247dap-40f, 0.0f, 0.0f,
     0x1.bcf002p-64f, 0.0f, 0.0f, 0.0f, 0x1.4d0eaap-29f, 0x1.2cb97ap-60f, 0.0f, 0.0f,
     0x1.f9c8fcp-11f, 0x1.7bd8a6p-18f, 0.0f, 0.0f, 0x1.191e74p-59f, 0x1.98d5fcp-11f,
     0x1p0f, 0x1.267646p-44f, 0x1.1446c4p-101f, 0.0f, 0.0f, 0x1.620f1ep-99f,
     0x1.2a575ap-53f, 0x1.674f46p-64f, 0x1.c8cc36p-42f, 0x1.2731b2p-45f,
     0x1.63492ep-31f, 0x1.1ccf76p-37f, 0.0f, 0.0f, 0.0f, 0x1.688d24p-10f, 0.0f,
     0x1.b50e98p-118f, 0.0f, 0.0f, 0x1.0acc6p-2f, 0x1.6b0336p-68f, 0.0f,
     0x1.ac900ep-100f, 0x1.0092c8p-81f, 0x1.8e17ap-92f, 0x1.a2c844p-126f, 0.0f,
     0x1.defd7p-9f, 0x1.7a9172p-99f, 0.0f, 0.0f, 0x1.72d4b2p-76f, 0x1.af946ap-109f,
     0x1.2ede3ep-68f, 0.0f, 0x1.5cc5bap-75f, 0.0f, 0.0f, 0x1.d857cap-95f,
     0x1.393312p-76f, 0x1.be1f66p-60f, 0.0f, 0.0f, 0x1.0596b4p-21f, 0.0f, 0.0f, 0.0f,
     0x1.dd6006p-20f, 0x1.3b51bep-8f, 0x1.82c5f8p-125f, 0x1.5fa68ep-57f, 0.0f,
     0x1.3dccbap-123f, 0x1.78f7a8p-120f, 0.0f, 0.0f, 0x1.6fc404p-4f, 0x1.c22e52p-52f,
     0x1.6791f2p-98f, 0.0f, 0x1.acc15cp-94f, 0.0f, 0x1.d8c8a6p-65f, 0.0f, 0.0f,
     0x1.d5febap-68f, 0.0f, 0.0f, 0x1.2574dep-53f, 0.0f, 0x1.eff08ep-85f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.bc6da8p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6b664ep-53f,
     0x1.617732p-51f, 0x1.7b4e6ap-88f, 0x1.897a68p-70f, 0.0f, 0x1p0f, 0.0f,
     0x1.d1dbf6p-51f, 0.0f, 0x1.01bb26p-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6823b2p-69f, 0.0f, 0.0f, 0x1.4a78f6p-23f, 0x1.b0d1bcp-79f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d87f92p-5f, 0.0f, 0.0f, 0x1.0d779ep-111f, 0.0f, 0x1.64fe88p-72f,
     0x1.8e9872p-20f, 0.0f, 0x1.4536d8p-7f, 0.0f, 0x1.4d9bb6p-35f, 0.0f, 0x1p0f,
     0x1.eaf4cap-88f, 0.0f, 0.0f, 0x1.b3ff78p-126f, 0x1.12883ep-78f, 0x1.aba2bcp-107f,
     0x1.c15552p-59f, 0.0f, 0.0f, 0x1.621a6ep-124f, 0x1.75fd5ap-114f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.41afd6p-96f, 0.0f, 0x1.e8017cp-125f, 0x1.2f7ee8p-18f, 0.0f,
     0x1.7903fep-34f, 0x1.824fd2p-92f, 0.0f, 0.0f, 0x1.163e92p-75f, 0x1.b11b66p-89f,
     0.0f, 0.0f, 0x1.162df8p-9f, 0.0f, 0x1.a8288ap-120f, 0x1.4eb9b6p-71f,
     0x1.ea673ap-18f, 0x1.45b18ap-91f, 0x1.a1aa68p-44f, 0x1.761daep-125f,
     0x1.38b478p-108f, 0x1.463a9ap-78f, 0.0f, 0.0f, 0x1.aeb0e4p-101f, 0.0f, 0.0f,
     0x1.0b49ep-115f, 0.0f, 0.0f, 0x1.f7afd2p-18f, 0x1.e9e462p-94f, 0x1.8159aap-50f,
     0x1.fb3afap-43f, 0x1.f6772cp-75f, 0.0f, 0x1.339ed8p-57f, 0x1.3cc274p-73f, 0.0f,
     0x1.46dc48p-121f, 0.0f, 0x1.f03622p-3f, 0.0f, 0x1.d5924p-66f, 0.0f,
     0x1.2a154ep-51f, 0x1.4e0a0ap-26f, 0.0f, 0.0f, 0.0f, 0x1.b3d0dap-30f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.97ef5ap-74f, 0.0f, 0x1.f50a86p-113f, 0.0f, 0x1.7f93dep-11f,
     0x1.96b5cap-40f, 0x1.ca8918p-106f, 0x1.1c8406p-98f, 0.0f, 0.0f, 0x1.f7503cp-89f,
     0.0f, 0x1.bd9fbep-35f, 0.0f, 0.0f, 0.0f, 0x1.a0671p-22f, 0x1.1f124ep-54f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.50b41ap-63f, 0x1.65ca1cp-48f, 0x1.3509aap-107f, 0.0f,
     0x1.60605ep-57f, 0.0f, 0.0f, 0x1.8b5decp-105f, 0x1.b01d1cp-123f, 0x1.280d84p-18f,
     0.0f, 0x1.9815a6p-94f, 0.0f, 0x1.ba7f3ap-68f, 0.0f, 0x1.26b7b2p-126f,
     0x1.5664d8p-14f, 0.0f, 0x1.336e2ep-100f, 0.0f, 0x1.3baaeep-48f, 0x1.acff26p-53f,
     0.0f, 0.0f, 0x1.07505cp-53f, 0x1.5e6b8ap-70f, 0x1.6cec02p-22f, 0x1.7ba77p-66f,
     0.0f, 0.0f, 0.0f, 0x1.1e1b4ep-106f, 0x1.502eecp-14f, 0x1.88afb6p-103f,
     0x1.b63574p-100f, 0x1.0be85ep-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7340aap-42f,
     0.0f, 0x1.303f28p-42f, 0.0f, 0.0f, 0.0f, 0x1.c2214p-89f, 0.0f, 0.0f, 0.0f,
     0x1.2ec9e2p-75f, 0.0f, 0.0f, 0x1.83a426p-53f, 0x1.71e79cp-103f, 0x1.80ad6ap-27f,
     0x1.548502p-114f, 0.0f, 0.0f, 0x1.63179ap-16f, 0x1.1d1c04p-28f, 0.0f,
     0x1.ee7938p-90f, 0x1.e7f856p-1f, 0x1.8df076p-23f, 0.0f, 0x1.83d6a4p-23f, 0.0f,
     0.0f, 0x1.c7b91cp-41f, 0x1.595ceap-42f, 0x1.785d44p-41f, 0.0f, 0.0f,
     0x1.0f702ep-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3e65cep-47f,
     0.0f, 0.0f, 0.0f, 0x1.2340fap-116f, 0x1.06285p-106f, 0x1.258c1p-118f,
     0x1.da70a8p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fd522cp-108f,
     0x1.4c2c96p-19f, 0x1.3d4dap-106f, 0.0f, 0x1.7a09a4p-42f, 0x1.bc9268p-36f, 0.0f,
     0x1.f20a8p-26f, 0.0f, 0.0f, 0x1.9f5a6cp-103f, 0.0f, 0x1.8dff2p-63f,
     0x1.a516e6p-3f, 0.0f, 0.0f, 0.0f, 0x1.4c99ccp-102f, 0x1.1f6806p-41f,
     0x1.4304fap-111f, 0.0f, 0x1.b63e98p-36f, 0x1.b854c6p-92f, 0.0f, 0x1.10687p-118f,
     0x1.4d8b6ap-88f, 0x1.791deap-14f, 0x1.9a07c8p-41f, 0x1.8ae13p-117f, 0.0f, 0.0f,
     0x1.725686p-41f, 0x1.2f3e64p-78f, 0x1.d5178ap-114f, 0x1.5f2b48p-96f,
     0x1.70346ep-88f, 0x1.c4f482p-35f, 0x1.5ab0c2p-19f, 0x1.82029cp-69f,
     0x1.0aecbcp-122f, 0x1.ab3774p-94f, 0.0f, 0x1.ef651p-101f, 0.0f, 0x1.5aa804p-16f,
     0.0f, 0.0f, 0x1.b7c928p-104f, 0.0f, 0.0f, 0x1.6eb05ep-68f, 0x1.0270b4p-1f, 0.0f,
     0.0f, 0x1.0325eep-14f, 0x1.fbaf4ep-34f, 0x1.d2bafp-104f, 0x1.cd6b9ep-113f, 0.0f,
     0x1.488dc8p-98f, 0x1.d1cfbep-80f, 0x1.cfcce6p-36f, 0.0f, 0x1.f2ec2ap-84f, 0.0f,
     0x1.067838p-90f, 0.0f, 0x1.39a51ep-12f, 0.0f, 0x1.5b299ep-71f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e14f34p-70f, 0x1.1a5638p-40f, 0x1.8802cep-58f,
     0x1.7e3ddep-107f, 0.0f, 0x1.88cdd8p-94f, 0.0f, 0x1.61c2d8p-124f, 0.0f,
     0x1.dfc638p-32f, 0x1.37ec72p-98f, 0x1.04fbbp-80f, 0x1.26119ep-99f,
     0x1.5bc162p-78f, 0x1.dcf7ep-114f, 0.0f, 0.0f, 0x1.7e1062p-117f, 0.0f,
     0x1.70885ep-9f, 0x1.2ee16ap-75f, 0x1.f77f6ep-69f, 0.0f, 0x1.6375b6p-57f, 0.0f,
     0x1.d12bfp-112f, 0x1.34a354p-14f, 0x1.b570f2p-69f, 0.0f, 0.0f, 0x1.63811p-67f,
     0x1.e301c4p-122f, 0x1p0f, 0x1.c3b9d2p-22f, 0.0f, 0.0f, 0.0f, 0x1.aed578p-12f,
     0.0f, 0x1.9ef604p-119f, 0.0f, 0.0f, 0x1.cc4cc6p-111f, 0x1.964f5ep-28f, 0.0f,
     0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.3ce9eap-49f, 0.0f, 0x1.931f62p-77f, 0.0f,
     0x1.4f9692p-10f, 0.0f, 0x1.b21114p-64f, 0.0f, 0x1.a347fap-89f, 0x1.b8663cp-81f,
     0.0f, 0.0f, 0x1.91f9aep-89f, 0.0f, 0.0f, 0.0f, 0x1.486c64p-19f, 0.0f,
     0x1.1d643cp-79f, 0.0f, 0x1.5dcf8p-38f, 0.0f, 0.0f, 0.0f, 0x1.ed1a7cp-89f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.5ee5aap-83f, 0x1.18f856p-97f, 0.0f, 0.0f, 0.0f,
     0x1.2850b4p-33f, 0x1.7763p-70f, 0x1.2e057cp-98f, 0x1.01b6f8p-113f,
     0x1.5d3842p-31f, 0.0f, 0x1.90addap-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.1d9584p-83f, 0.0f, 0x1.108b04p-124f, 0x1.67aabep-54f,
     0x1.47d2ccp-99f, 0x1.ec655ap-98f, 0x1.cda924p-32f, 0x1.b811d8p-123f,
     0x1.8f98fp-50f, 0x1.c2ad5cp-77f, 0x1.b1d308p-49f, 0.0f, 0x1.a51842p-121f,
     0x1.1b23e6p-38f, 0x1.9442aap-87f, 0.0f, 0x1.59d89ap-100f, 0x1.9bbddcp-107f, 0.0f,
     0x1.eebb88p-32f, 0.0f, 0x1.5ace34p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4eaf5ap-14f, 0.0f, 0x1.5b247p-122f, 0.0f, 0x1.905026p-1f, 0.0f,
     0x1.b9dd42p-89f, 0.0f, 0x1.624a66p-79f, 0.0f, 0.0f, 0.0f, 0x1.176cb4p-81f, 0.0f,
     0.0f, 0x1.b24b6ep-34f, 0x1.905afcp-102f, 0.0f, 0x1.c8bd52p-59f, 0.0f,
     0x1.e2394cp-40f, 0x1.7f439cp-6f, 0.0f, 0x1.fa179ap-112f, 0x1.964886p-35f,
     0x1.d63792p-45f, 0x1.ca87dcp-25f, 0.0f, 0.0f, 0x1.50a686p-31f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4316bap-66f, 0x1.6cbd26p-122f, 0x1.473ef2p-16f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.7b69ep-99f, 0.0f, 0.0f, 0.0f, 0x1.b07d9p-48f, 0x1.bdda54p-120f, 0.0f,
     0.0f, 0.0f, 0x1.9be3eep-11f, 0x1.77f75ep-85f, 0.0f, 0x1.98fcdcp-119f, 0.0f, 0.0f,
     0x1.b544d2p-8f, 0x1.26e18cp-26f, 0x1.ab7112p-95f, 0x1.56c59ep-59f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f6e48ep-25f,
     0.0f, 0x1.090f3cp-41f, 0.0f, 0.0f, 0.0f, 0x1.5c89eap-10f, 0.0f, 0x1.adc33ep-60f,
     0x1.6a7772p-5f, 0x1.694b4p-28f, 0x1.f53e0cp-76f, 0.0f, 0x1.e42b34p-103f,
     0x1.4fa26ap-78f, 0x1.54cb4cp-48f, 0x1.e6ca74p-82f, 0.0f, 0x1.90ee1p-81f,
     0x1.e25654p-39f, 0x1.ba0f22p-31f, 0x1.77eeb6p-74f, 0.0f, 0x1.d7fd68p-74f, 0.0f,
     0x1.34a208p-96f, 0x1.988d3ep-20f, 0x1.662b3cp-56f, 0.0f, 0x1.6f808ap-65f,
     0x1.b3a234p-80f, 0x1.beff06p-123f, 0x1.f2229ep-56f, 0.0f, 0.0f, 0x1.e1a488p-64f,
     0x1.12f974p-100f, 0x1.c93aaap-20f, 0x1.e5571ap-58f, 0x1.0207c6p-69f, 0.0f,
     0x1.677feep-40f, 0.0f, 0x1.a3e55ep-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.48e28cp-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.72da42p-2f, 0.0f, 0x1.a21624p-55f,
     0x1.4ff516p-6f, 0x1.20bd7ep-28f, 0.0f, 0.0f, 0x1.8ac86cp-6f, 0x1.f54b74p-54f,
     0x1.965988p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ba2ccp-33f, 0x1.d18186p-72f, 0.0f,
     0.0f, 0x1.fef552p-71f, 0x1.01ab66p-103f, 0.0f, 0.0f, 0x1.bc2076p-14f, 0.0f,
     0x1.0d327cp-73f, 0x1.f53f36p-37f, 0.0f, 0.0f, 0x1.dcbe26p-112f, 0x1.8e57a6p-58f,
     0x1.fb41eep-7f, 0.0f, 0.0f, 0x1.651e1p-100f, 0.0f, 0x1.929facp-11f,
     0x1.5fb4ep-3f, 0x1.ed4c72p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c45a58p-16f, 0.0f,
     0.0f, 0x1.96e4acp-1f, 0.0f, 0.0f, 0.0f, 0x1.2d3048p-89f, 0x1.fe4d3p-99f,
     0x1.dbeb1cp-66f, 0.0f, 0x1.84b06cp-96f, 0.0f, 0x1.e7c44p-114f, 0x1.92e228p-49f,
     0x1.00c316p-6f, 0.0f, 0.0f, 0.0f, 0x1.366e06p-109f, 0x1.3de2cep-109f,
     0x1.996e2ap-49f, 0x1.b5d00ap-8f, 0x1.9dc386p-58f, 0.0f, 0.0f, 0.0f,
     0x1.8c7d4cp-56f, 0.0f, 0x1.9501c2p-112f, 0x1.1607fp-11f, 0.0f, 0.0f, 0.0f,
     0x1.f34342p-84f, 0x1.c3131ep-30f, 0.0f, 0.0f, 0.0f, 0x1.7b7b92p-96f, 0.0f, 0.0f,
     0x1.549c16p-10f, 0.0f, 0.0f, 0.0f, 0x1.abd9c2p-16f, 0x1.94f2ap-43f, 0.0f, 0.0f,
     0x1.6e307p-50f, 0x1.d10bbap-59f, 0x1.ea2288p-37f, 0.0f, 0x1.2b1294p-95f, 0.0f,
     0.0f, 0x1.233c9p-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.550e34p-58f, 0.0f,
     0x1.a705d6p-83f, 0.0f, 0x1.cb75eap-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.972adep-54f,
     0.0f, 0.0f, 0.0f, 0x1.c5ab72p-50f, 0x1.88c67p-62f, 0.0f, 0.0f, 0x1.215e36p-52f,
     0.0f, 0x1.f85b18p-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ea1b46p-93f, 0.0f, 0x1.bb3c4cp-117f, 0.0f, 0.0f, 0x1.c0242ap-41f,
     0x1.53ea5ap-88f, 0.0f, 0.0f, 0x1.1a27a6p-15f, 0x1p0f, 0.0f, 0.0f, 0.0f,
     0x1.5b218ap-82f, 0x1.8e5204p-118f, 0.0f, 0.0f, 0.0f, 0x1.c13f6ap-65f, 0.0f,
     0x1.2403cep-15f, 0.0f, 0x1.f8dd5ap-49f, 0x1.65f1f6p-2f, 0x1.efaad4p-42f, 0.0f,
     0x1.29db7cp-84f, 0.0f, 0x1.4d134cp-67f, 0.0f, 0x1.e60accp-116f, 0x1.9360c8p-18f,
     0.0f, 0x1.7a70d4p-32f, 0x1.50faap-33f, 0x1.70f85cp-20f, 0.0f, 0.0f, 0.0f,
     0x1.2e58cap-17f, 0.0f, 0x1.c755a6p-14f, 0x1.e0f268p-19f, 0x1.c9f1eep-116f,
     0x1.81e2eep-51f, 0x1.97eb38p-95f, 0.0f, 0x1.544a8p-66f, 0x1.f61d12p-10f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.4ddffep-101f, 0.0f, 0.0f, 0x1.7a91dap-53f, 0.0f,
     0x1.6e08bep-3f, 0.0f, 0.0f, 0x1.c8c0e2p-52f, 0.0f, 0.0f, 0.0f, 0x1.f1a9d4p-10f,
     0.0f, 0x1.0b379cp-4f, 0x1.928ce6p-84f, 0x1.4df98ap-8f, 0.0f, 0.0f, 0.0f,
     0x1.96f482p-79f, 0.0f, 0.0f, 0.0f, 0x1.404764p-22f, 0x1.ade4bp-31f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.93e798p-29f, 0.0f, 0.0f, 0.0f, 0x1.8ed61ap-111f,
     0.0f, 0x1.c1b4c2p-102f, 0.0f
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
            tmp1 = Sleef_finz_sinpif1_u05purecfma(tmp0);
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
    printf("Sleef_finz_sinpif1_u05purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_sinpif1_u05purecfma bench acc %a\n", global_bench_acc);
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
