/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_asinhf1_u10purecfma.c --function \
 *     Sleef_finz_asinhf1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0x1.d9e80cp-46f, 0.0f, 0.0f, 0x1.f3783ep-52f, 0x1.81146ap-32f, 0.0f,
     0x1.5fc14ap-55f, 0.0f, 0x1.b4f528p-20f, 0.0f, 0x1.98a294p-80f, 0.0f,
     0x1.da79d6p-45f, 0x1.60a802p-23f, 0.0f, 0.0f, 0x1.4dd69p-101f, 0x1.ad725cp-90f,
     0.0f, 0x1.6447d4p-30f, 0.0f, 0.0f, 0x1.e8e24p-112f, 0.0f, 0x1.436d54p-90f,
     0x1.e4a38p-30f, 0.0f, 0.0f, 0.0f, 0x1.fc41d4p-73f, 0.0f, 0x1.6fdef2p-105f, 0.0f,
     0x1.24fb24p-77f, 0.0f, 0x1.fbeb28p-106f, 0x1.be54d6p-100f, 0x1.695a7p-68f, 0.0f,
     0x1.9e5202p-7f, 0x1.af47f6p-115f, 0.0f, 0x1.b53bfcp-25f, 0x1.0cb4c2p-73f,
     0x1.492eecp-31f, 0x1.6acbaap-20f, 0.0f, 0x1.1a9e66p-45f, 0x1.e49fcap-43f,
     0x1.202a0ep-62f, 0x1.8fc2dcp-55f, 0x1.43557ep-104f, 0.0f, 0.0f, 0.0f,
     0x1.ebb85ap-111f, 0x1.00d4b6p-33f, 0x1.f8348p-33f, 0.0f, 0x1.ecae0ap-39f, 0.0f,
     0.0f, 0.0f, 0x1.2387acp-71f, 0x1.d3db38p-116f, 0.0f, 0x1.5d6c08p-106f,
     0x1.6fae4ap-23f, 0.0f, 0x1.4dc7a6p-97f, 0.0f, 0x1.dffebep-9f, 0x1.acb156p-108f,
     0.0f, 0.0f, 0.0f, 0x1.4fc62ap-120f, 0.0f, 0x1.6c4824p-72f, 0.0f, 0.0f,
     0x1.4784b2p-10f, 0x1.c3e1acp-58f, 0x1.2769cep-103f, 0.0f, 0.0f, 0x1.1ecdb8p-94f,
     0.0f, 0x1.d05d6ap-12f, 0x1.4a258ap-44f, 0.0f, 0.0f, 0x1.0df24ep-119f, 0.0f, 0.0f,
     0.0f, 0x1.c35b2ep-3f, 0.0f, 0.0f, 0x1.d359a4p-47f, 0.0f, 0x1.b6843p-66f, 0.0f,
     0x1.0cfa44p-92f, 0x1.cd8e98p-66f, 0x1.df85p-88f, 0x1.a36a6ap-41f,
     0x1.054332p-57f, 0x1.d742dcp-37f, 0x1.ef5eep-62f, 0.0f, 0.0f, 0x1.6bfdd2p-84f,
     0x1.477ee2p-53f, 0x1.3fe62cp-11f, 0x1.cff8a8p-58f, 0x1.30a29ep-23f,
     0x1.a45eb8p-26f, 0x1.0c577ep-58f, 0.0f, 0.0f, 0x1.2c320cp-35f, 0x1.53720ep-58f,
     0x1.714328p-100f, 0.0f, 0x1.c9eb9ep-112f, 0x1.e027bep-81f, 0x1.400baap-72f, 0.0f,
     0x1.431cb6p-73f, 0x1.1da10ep-66f, 0x1.c114c2p-124f, 0.0f, 0x1.0603f2p-51f, 0.0f,
     0x1.9eeap-71f, 0.0f, 0x1.4eb81ap-117f, 0.0f, 0x1.b44968p-74f, 0.0f, 0.0f,
     0x1.169286p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.350bb4p-20f, 0.0f, 0.0f, 0.0f,
     0x1.0b0bf8p-96f, 0x1.dfd68cp-21f, 0x1.be555p-102f, 0x1.8c56f2p-45f,
     0x1.c2d17cp-53f, 0.0f, 0.0f, 0x1.887f34p-71f, 0.0f, 0x1.52126ep-76f,
     0x1.97fb4p-4f, 0x1.c62674p-123f, 0x1.b84542p-80f, 0x1.afd6a8p-72f,
     0x1.4b7394p-60f, 0x1.de103ep-72f, 0x1.41dfc2p-75f, 0x1.cbd6eep-85f,
     0x1.bd84dap-123f, 0x1.b953bp-51f, 0x1.0fc89cp-105f, 0.0f, 0.0f, 0.0f,
     0x1.cb0086p-120f, 0.0f, 0x1.94cb5ep-12f, 0x1.09c306p-111f, 0.0f, 0x1.0f660ep-15f,
     0.0f, 0x1.b14bdcp-89f, 0.0f, 0x1.2d6ddep-68f, 0.0f, 0.0f, 0x1.ab74ep-56f, 0.0f,
     0x1.4be166p-36f, 0x1.579bc2p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.011158p-66f, 0.0f,
     0x1.43e348p-30f, 0.0f, 0.0f, 0x1.5d599p-66f, 0.0f, 0.0f, 0x1.702cd4p-73f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.abf92p-126f, 0.0f, 0.0f, 0x1.d77fcap-99f, 0.0f,
     0x1.6aa5bep-117f, 0.0f, 0x1.491fd6p-51f, 0x1.2d8e1cp-34f, 0x1.c0091p-2f, 0.0f,
     0x1.4b4534p-54f, 0.0f, 0.0f, 0x1.c2a454p-36f, 0x1.218aa4p-84f, 0x1.0069d8p-125f,
     0x1.ff3ee4p-123f, 0x1.5f10a2p-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c25e2ep-64f,
     0.0f, 0x1.0cbaecp-125f, 0x1.3132c6p-7f, 0.0f, 0x1.bfd342p-124f, 0.0f, 0.0f,
     0x1.7c9f68p-41f, 0x1.8843e4p-48f, 0x1.13d5bap-37f, 0.0f, 0.0f, 0x1.11d2f8p-120f,
     0.0f, 0.0f, 0x1.045eacp-60f, 0.0f, 0x1.4e1516p-86f, 0.0f, 0x1.28b81cp-122f, 0.0f,
     0.0f, 0x1.7933cep-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f3c50ap-1f, 0.0f, 0.0f,
     0x1.62e82p-76f, 0.0f, 0.0f, 0.0f, 0x1.271108p-34f, 0.0f, 0x1.89df0ap-10f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.3d732p-122f, 0x1.fca988p-65f, 0.0f, 0x1.38809ep-72f,
     0x1.620bb4p-78f, 0.0f, 0x1.76f8bp-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cebbfep-54f, 0x1.fa3f8ep-100f, 0x1.53ba6ap-75f, 0x1.b27f74p-56f, 0.0f,
     0x1.3d67fcp-18f, 0x1.ca83fp-114f, 0x1.52827cp-125f, 0x1.d385aep-117f,
     0x1.674f44p-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.caa3a8p-55f, 0.0f,
     0x1.b485e8p-69f, 0x1.4acf2p-116f, 0.0f, 0x1.76fc6cp-96f, 0x1.43d034p-19f,
     0x1.624792p-79f, 0.0f, 0.0f, 0x1.60a86cp-56f, 0x1.863e2ep-29f, 0.0f, 0.0f,
     0x1.394e1ap-48f, 0x1.1e0f86p-82f, 0.0f, 0.0f, 0.0f, 0x1.e691a6p-77f, 0.0f,
     0x1.695d72p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.082b9ap-28f, 0.0f,
     0x1.7b048cp-100f, 0x1.e60bcep-63f, 0x1.1edf7ep-90f, 0.0f, 0x1.335e12p-116f, 0.0f,
     0.0f, 0x1.a22d5ap-29f, 0x1.d9ce3p-62f, 0x1.00e5acp-60f, 0.0f, 0x1.6d8ac4p-25f,
     0x1.85f6b2p-9f, 0.0f, 0x1.627338p-48f, 0.0f, 0.0f, 0.0f, 0x1.9a2962p-41f, 0.0f,
     0x1.1b1292p-61f, 0x1.d8b494p-114f, 0x1.476402p-7f, 0.0f, 0.0f, 0x1.1b3ebcp-51f,
     0x1.1d3ccap-110f, 0.0f, 0.0f, 0x1.0609bcp-70f, 0x1.e5209ap-122f, 0.0f, 0.0f,
     0x1.124b1ap-57f, 0x1.4fffecp-56f, 0.0f, 0x1.a18aa6p-45f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ed388ep-126f, 0.0f, 0.0f,
     0x1.db4ed8p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.90e28ep-112f, 0x1.cbc89ep-81f,
     0x1.646a6ep-111f, 0.0f, 0x1.d08f5cp-125f, 0x1.6b948cp-7f, 0.0f, 0.0f,
     0x1.84a942p-114f, 0.0f, 0.0f, 0.0f, 0x1.9b46f2p-44f, 0.0f, 0x1.9e130ap-79f,
     0x1.9f6008p-113f, 0x1.1bef06p-49f, 0.0f, 0.0f, 0x1.21b07p-119f, 0x1.a8437ap-3f,
     0x1.96e558p-34f, 0x1.449abp-100f, 0.0f, 0.0f, 0.0f, 0x1.52f09cp-2f,
     0x1.dd461ep-112f, 0x1.62ec82p-51f, 0.0f, 0x1.5ad332p-28f, 0.0f, 0x1.2925c6p-7f,
     0x1.e13b88p-30f, 0x1.4416d6p-115f, 0x1.465922p-124f, 0x1.eca0f2p-71f, 0.0f, 0.0f,
     0x1.4db254p-15f, 0.0f, 0.0f, 0x1.95259ep-59f, 0x1.7870f6p-101f, 0.0f,
     0x1.490142p-27f, 0.0f, 0.0f, 0.0f, 0x1.0194dcp-36f, 0.0f, 0x1.ceb5b8p-87f,
     0x1.a18664p-97f, 0x1.50185p-82f, 0.0f, 0x1.22eccap-118f, 0.0f, 0x1.f30336p-69f,
     0x1.7ef2d8p-2f, 0.0f, 0x1.89a2a4p-126f, 0x1.887866p-9f, 0x1.17aa3ap-45f,
     0x1.6c50eep-111f, 0x1.175c34p-73f, 0.0f, 0x1.fdacf4p-7f, 0x1.ca110ap-39f,
     0x1.f6c912p-12f, 0x1.a170b2p-58f, 0.0f, 0.0f, 0.0f, 0x1.ededdap-95f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a34e2ep-103f, 0.0f, 0x1.a1cc84p-27f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.86089cp-2f, 0.0f, 0x1.b6a10ap-36f, 0.0f, 0x1.6ee82p-65f, 0.0f, 0.0f, 0.0f,
     0x1.6088ccp-120f, 0.0f, 0x1.337dd4p-21f, 0x1.fe004ap-53f, 0.0f, 0.0f,
     0x1.9bbc22p-43f, 0.0f, 0x1.8d99cap-71f, 0.0f, 0x1.b15e06p-67f, 0x1.cddb74p-21f,
     0x1.871f92p-5f, 0.0f, 0x1.84298ep-90f, 0.0f, 0x1.da3dp-85f, 0.0f, 0.0f,
     0x1.65041ap-2f, 0.0f, 0x1.6e9cbcp-34f, 0.0f, 0.0f, 0.0f, 0x1.3c8cc4p-26f, 0.0f,
     0.0f, 0x1.25ad1cp-96f, 0x1.7cb5f4p-26f, 0.0f, 0x1.002f36p-92f, 0.0f,
     0x1.24691ap-17f, 0.0f, 0x1.4f2edep-13f, 0x1.e62b9ep-45f, 0x1.c7339ep-41f,
     0x1.50626ap-15f, 0.0f, 0x1.9ff724p-68f, 0.0f, 0x1.9248a6p-105f, 0x1.69f544p-76f,
     0x1.48ec7cp-92f, 0.0f, 0x1.aa6d04p-76f, 0x1.398a38p-34f, 0.0f, 0.0f,
     0x1.71d458p-77f, 0x1.6f2fccp-58f, 0.0f, 0.0f, 0x1.8a294p-56f, 0.0f,
     0x1.3d5724p-109f, 0x1.cefb66p-99f, 0.0f, 0.0f, 0x1.ae5da6p-118f, 0x1.54c234p-64f,
     0x1.f0dee6p-49f, 0x1.c5421ep-90f, 0x1.aa52c2p-122f, 0.0f, 0.0f, 0x1.278fe8p-88f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.6e2e98p-27f, 0.0f, 0x1.f8356ap-51f, 0x1.630938p-11f,
     0.0f, 0x1.42d858p-114f, 0.0f, 0x1.c77762p-58f, 0.0f, 0x1.1ec46ep-48f,
     0x1.7758dcp-67f, 0.0f, 0x1.fbb018p-65f, 0.0f, 0x1.77010cp-117f, 0.0f, 0.0f,
     0x1.7ae442p-96f, 0x1.a72c42p-124f, 0.0f, 0.0f, 0.0f, 0x1.f785fap-94f,
     0x1.aef0b4p-70f, 0.0f, 0x1.df3d3ep-84f, 0x1.dec682p-97f, 0x1.d357d8p-62f,
     0x1.962912p-69f, 0.0f, 0x1.576672p-102f, 0x1.a9bc3ap-106f, 0.0f, 0x1.e9b3a2p-67f,
     0x1.74745p-43f, 0.0f, 0x1.1ab1b6p-28f, 0.0f, 0x1.d14158p-31f, 0x1.51c02ap-13f,
     0.0f, 0x1.85c0ecp-107f, 0x1.98adc6p-109f, 0.0f, 0x1.24fddap-27f, 0x1.95c97ap-84f,
     0x1.9c941cp-19f, 0x1.d6b8ap-40f, 0x1.8bc44p-6f, 0x1.9510a4p-12f, 0.0f,
     0x1.f853a2p-32f, 0x1.4561bap-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.21564cp-108f,
     0x1.273122p-123f, 0x1.594dep-114f, 0x1.ec488ep-109f, 0x1.f951d2p-51f, 0.0f,
     0x1.ef20aap-35f, 0.0f, 0x1.d5cbfap-115f, 0.0f, 0x1.6ee988p-47f, 0.0f, 0.0f, 0.0f,
     0x1.32ae48p-49f, 0.0f, 0.0f, 0x1.ffee0ep-28f, 0x1.90a53cp-5f, 0x1.06098p-85f,
     0.0f, 0.0f, 0x1.33600ep-21f, 0x1.bb1f68p-2f, 0x1.04f2cp-87f, 0x1.996526p-18f,
     0x1.45cabcp-69f, 0x1.207e06p-90f, 0.0f, 0.0f, 0x1.50a476p-122f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.0760b8p-99f, 0x1.caaa0ap-67f, 0.0f, 0.0f, 0x1.f741ccp-46f, 0.0f, 0.0f,
     0x1.0a77f2p-55f, 0x1.bc79b8p-121f, 0x1.b7ccecp-89f, 0.0f, 0.0f, 0x1.a34f2cp-56f,
     0x1.cbf9b2p-73f, 0x1.a449b4p-93f, 0x1.228624p-41f, 0.0f, 0x1.915e8ep-6f,
     0x1.075e44p-33f, 0x1.34ce2p-56f, 0x1.d421a4p-26f, 0x1.12c5b4p-40f,
     0x1.b6c0aep-117f, 0.0f, 0.0f, 0x1.85d04cp-44f, 0.0f, 0.0f, 0.0f, 0x1.f67f3cp-50f,
     0x1.ee569cp-88f, 0x1.3b15b6p-19f, 0.0f, 0.0f, 0.0f, 0x1.412f38p-51f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.87cd1p-77f, 0.0f, 0x1.d32674p-79f, 0.0f,
     0x1.5688e4p-89f, 0x1.caddeap-37f, 0x1.f0339ep-29f, 0.0f, 0.0f, 0x1.3e7faep-22f,
     0.0f, 0x1.3955f2p-4f, 0.0f, 0x1.06bdc8p-25f, 0x1.b2f78ap-115f, 0.0f,
     0x1.97ef64p-19f, 0x1.c4c69cp-81f, 0x1.153092p-120f, 0.0f, 0.0f, 0x1.297e88p-67f,
     0.0f, 0x1.ed66c8p-22f, 0x1.78db8ep-38f, 0x1.76c3f6p-40f, 0.0f, 0x1.9c157ap-106f,
     0.0f, 0x1.ca1244p-35f, 0.0f, 0x1.9477fcp-88f, 0x1.a67e12p-44f, 0x1.e9fb86p-97f,
     0x1.dfcfecp-117f, 0.0f, 0x1.c6607ep-10f, 0.0f, 0x1.d181ecp-89f, 0x1.220c58p-16f,
     0x1.2e7c8cp-112f, 0x1.321344p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a803fap-18f,
     0.0f, 0.0f, 0x1.27a09p-101f, 0x1.00cf72p-114f, 0.0f, 0x1.0881ccp-83f,
     0x1.540412p-16f, 0x1.440f3ep-120f, 0.0f, 0.0f, 0.0f, 0x1.c1087p-31f, 0.0f,
     0x1.e31088p-40f, 0x1.56742cp-108f, 0.0f, 0.0f, 0x1.674adap-11f, 0.0f,
     0x1.44ccap-89f, 0.0f, 0x1.f9c692p-38f, 0x1.74a78cp-27f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e0b816p-57f, 0.0f, 0.0f, 0x1.77c2e2p-36f, 0.0f, 0.0f, 0.0f,
     0x1.0c66dcp-114f, 0x1.a12ac4p-60f, 0x1.5be9aep-37f, 0.0f, 0x1.970b2ap-97f,
     0x1.2523bap-117f, 0.0f, 0.0f, 0x1.dfc90cp-33f, 0x1.b1b472p-120f, 0.0f,
     0x1.3a60aep-84f, 0x1.e9937ep-20f, 0.0f, 0x1.04ef0ap-96f, 0x1.e26214p-58f, 0.0f,
     0x1.a60f2p-95f, 0.0f, 0x1.b3e3e8p-110f, 0x1.eea6b8p-103f, 0.0f, 0.0f,
     0x1.3c762cp-75f, 0x1.2426eap-47f, 0.0f, 0.0f, 0.0f, 0x1.85d928p-23f,
     0x1.6ce7fep-102f, 0.0f, 0x1.5207eap-12f, 0.0f, 0x1.8123d8p-48f, 0.0f, 0.0f, 0.0f,
     0x1.1fe07ap-28f, 0x1.0e7a9ep-29f, 0x1.abf68ap-19f, 0x1.4e0f36p-31f,
     0x1.3167b4p-78f, 0.0f, 0.0f, 0.0f, 0x1.92bef2p-24f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ff316p-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.908626p-34f, 0x1.d7bbe8p-76f,
     0x1.020e4p-90f, 0.0f, 0.0f, 0x1.a431dap-10f, 0.0f, 0x1.0e517cp-53f, 0.0f, 0.0f,
     0x1.9b9daep-33f, 0x1.21f26ep-117f, 0x1.919bd6p-101f, 0.0f, 0.0f, 0x1.43bfep-71f,
     0.0f, 0.0f, 0x1.efcc2p-46f, 0.0f, 0.0f, 0x1.887128p-90f, 0x1.6b406ep-42f,
     0x1.329ee8p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.97619ep-98f, 0x1.0c180ep-22f,
     0x1.1d8162p-119f, 0x1.3580a6p-111f, 0.0f, 0.0f, 0x1.4fb0bep-23f, 0.0f,
     0x1.4e4f5p-99f, 0x1.a9d406p-69f, 0x1.2ab284p-97f, 0x1.e5d106p-104f,
     0x1.215616p-103f, 0x1.b217fcp-35f, 0.0f, 0x1.b46edap-4f, 0x1.b91c7ep-32f,
     0x1.10b0a4p-111f, 0.0f, 0x1.f13abep-67f, 0x1.40571p-26f, 0x1.69e5a4p-81f, 0.0f,
     0x1.8e34a8p-84f, 0.0f, 0x1.ae91bp-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a3fdd8p-14f,
     0.0f, 0x1.4ae7e6p-81f, 0x1.0a21e4p-8f, 0.0f, 0.0f, 0x1.ae5f58p-74f,
     0x1.ba886ap-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c1d066p-5f, 0x1.63daaap-102f,
     0x1.73d256p-83f, 0.0f, 0.0f, 0.0f, 0x1.21f914p-62f, 0.0f, 0x1.30b1dep-10f,
     0x1.994236p-37f, 0x1.67923cp-109f, 0x1.075caep-58f, 0x1.4b5cdep-15f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.746bf8p-61f, 0.0f, 0x1.84cd7cp-26f,
     0x1.44d04p-29f, 0x1.759fdep-40f, 0x1.95be26p-79f, 0x1.ed36bcp-113f,
     0x1.47e1e4p-25f, 0x1.7d0646p-18f, 0x1.aee592p-49f, 0.0f, 0x1.b693dap-35f, 0.0f,
     0x1.0bced4p-116f, 0x1.4ceec8p-105f, 0x1.f7d6ap-115f, 0x1.993c42p-84f,
     0x1.f36218p-40f, 0x1.55236cp-99f, 0x1.3a2d56p-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a036dcp-45f, 0.0f, 0.0f, 0.0f, 0x1.236512p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8f8936p-44f, 0.0f, 0.0f,
     0.0f, 0x1.837cdcp-30f, 0x1.4009aep-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2c8c36p-24f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.86715cp-114f, 0.0f, 0x1.88b478p-26f, 0.0f,
     0x1.396ab4p-68f, 0x1.4c200ep-65f, 0.0f, 0.0f, 0x1.0c3f32p-36f, 0.0f,
     0x1.680eap-69f, 0x1.883676p-84f, 0x1.bacdbp-41f, 0.0f, 0.0f, 0.0f, 0x1.ae6dp-66f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c162c6p-28f, 0x1.ba05c8p-93f, 0x1.032e04p-80f
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
            tmp1 = Sleef_finz_asinhf1_u10purecfma(tmp0);
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
    printf("Sleef_finz_asinhf1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_asinhf1_u10purecfma bench acc %a\n", global_bench_acc);
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
