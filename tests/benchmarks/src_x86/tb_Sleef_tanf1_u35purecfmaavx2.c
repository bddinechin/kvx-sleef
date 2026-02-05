/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_tanf1_u35purecfma.c --function Sleef_tanf1_u35purecfma \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 --bench \
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
     0.0f, 0.0f, 0x1.62370cp-81f, 0x1.120cep-97f, 0x1.1cb096p-35f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a8a7eep-85f, 0.0f, 0x1.4760b2p-105f, 0.0f, 0x1.b75862p-14f,
     0x1.7a4a96p-79f, 0x1.8774aap-32f, 0x1.d54504p-55f, 0.0f, 0x1.4b19e6p-24f, 0.0f,
     0x1.6d101ep-78f, 0.0f, 0x1.fda76cp-126f, 0.0f, 0x1.57f33ep-80f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.3b9164p-91f, 0x1.73a5f2p-68f, 0x1.be4b6cp-37f, 0x1.ea762cp-85f,
     0x1.92b7cep-122f, 0x1.90e93ap-49f, 0x1.87875cp-70f, 0.0f, 0.0f, 0x1.cd4c56p-58f,
     0x1.91fdaap-27f, 0.0f, 0x1.cf3caep-37f, 0x1.0ec7ccp-123f, 0x1.fd8d2ap-23f,
     0x1.62d6b4p-42f, 0x1.7f3752p-119f, 0x1.cb3b3cp-38f, 0.0f, 0x1.c0fp-62f,
     0x1.51f23ap-34f, 0.0f, 0x1.db2a5ap-47f, 0.0f, 0.0f, 0x1.feb924p-48f, 0.0f,
     0x1.4a8fb2p-3f, 0.0f, 0.0f, 0.0f, 0x1.6d4c0cp-2f, 0.0f, 0x1.16e902p-105f, 0.0f,
     0x1.f6f228p-46f, 0.0f, 0x1.ab0eacp-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7ce5bap-4f, 0x1.7e55ap-30f, 0.0f, 0x1.f2874p-96f, 0.0f, 0.0f, 0x1.42a66p-89f,
     0x1.b8509ap-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6e38bep-85f, 0.0f, 0x1.c01d7cp-115f,
     0.0f, 0x1.8002b8p-120f, 0.0f, 0.0f, 0x1.78107ep-33f, 0x1.0e795p-126f,
     0x1.13bd38p-45f, 0.0f, 0.0f, 0x1.8f0ac2p-72f, 0.0f, 0.0f, 0.0f, 0x1.5b25bep-37f,
     0x1.e27e9ap-22f, 0x1.aefceep-16f, 0x1.cbe118p-69f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.be0a1ap-42f, 0.0f, 0x1.40f72ap-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a32728p-88f,
     0x1.4bfc98p-27f, 0.0f, 0.0f, 0.0f, 0x1.cc125cp-4f, 0x1.5c66e4p-47f, 0.0f,
     0x1.6e8b06p-80f, 0x1.8e6562p-26f, 0.0f, 0x1.d65c1ap-43f, 0.0f, 0.0f, 0.0f,
     0x1.ea2c1p-34f, 0x1.079b48p-99f, 0x1.421224p-79f, 0x1.827b88p-47f,
     0x1.028286p-93f, 0x1.12fe94p-36f, 0x1.41dc12p-6f, 0.0f, 0x1.911122p-86f,
     0x1.eaebdep-40f, 0.0f, 0x1.574b7p-125f, 0.0f, 0x1.f07d4cp-38f, 0x1.91ed84p-103f,
     0x1.da0e12p-79f, 0x1p0f, 0x1.d57d96p-88f, 0x1.b35f22p-91f, 0.0f, 0.0f,
     0x1.d02ffcp-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2c9e2cp-92f, 0.0f, 0.0f, 0.0f,
     0x1.c5e974p-31f, 0.0f, 0x1.df4ff6p-52f, 0x1.bf61ap-15f, 0x1.9795fp-98f, 0.0f,
     0x1.f322e2p-49f, 0.0f, 0x1.8abf12p-5f, 0x1.84353ep-79f, 0x1.e5b47cp-84f, 0.0f,
     0x1.7e84e4p-113f, 0.0f, 0x1.4faea6p-110f, 0.0f, 0x1.aa662p-28f, 0x1.5440bp-56f,
     0x1.a50cacp-67f, 0x1.4193p-80f, 0.0f, 0x1.071e22p-7f, 0x1.82de24p-18f,
     0x1.bf125ap-57f, 0x1.b56956p-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b28c28p-11f,
     0x1.21af1ap-97f, 0.0f, 0x1.36426cp-56f, 0x1.c135ep-12f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c99ac4p-112f, 0.0f, 0x1.7ca5bep-126f, 0.0f, 0x1.6e4ad2p-24f, 0x1.3e5e38p-73f,
     0x1.1b877ap-114f, 0x1.62c436p-5f, 0.0f, 0x1.941578p-33f, 0x1.83e3a4p-11f,
     0x1.d3df7cp-113f, 0.0f, 0.0f, 0.0f, 0x1.f764dcp-53f, 0x1.d9318p-47f,
     0x1.c47df8p-38f, 0x1.f4c836p-23f, 0x1.2277dap-40f, 0.0f, 0x1p0f, 0.0f,
     0x1.94dd0cp-103f, 0x1.9a6a5p-71f, 0.0f, 0.0f, 0x1.278e1p-85f, 0x1.0dd12ap-7f,
     0.0f, 0.0f, 0x1.31b9d8p-83f, 0.0f, 0x1.3997fep-123f, 0.0f, 0.0f, 0x1.5fc68cp-69f,
     0x1.9fb99ep-84f, 0x1.e32958p-41f, 0.0f, 0x1.77642cp-16f, 0.0f, 0.0f,
     0x1.1a96a8p-8f, 0x1.f92e86p-58f, 0x1.051a36p-62f, 0.0f, 0x1.344d16p-88f, 0.0f,
     0x1.a84cbcp-11f, 0.0f, 0x1.a9650ep-62f, 0x1.93430ap-30f, 0x1.acbe54p-66f, 0.0f,
     0x1.8f5594p-97f, 0x1.b886c4p-58f, 0x1.274696p-50f, 0x1.63fa32p-5f,
     0x1.001816p-49f, 0x1.13eb2cp-17f, 0.0f, 0x1.03e2aep-63f, 0x1.01370cp-111f, 0.0f,
     0x1.5d0a9ap-57f, 0.0f, 0.0f, 0x1.852bf8p-99f, 0x1.e4f0dap-42f, 0.0f,
     0x1.8abffcp-100f, 0.0f, 0.0f, 0x1.d6c786p-37f, 0x1.1dd876p-121f, 0.0f,
     0x1.84d866p-23f, 0x1.d519e4p-26f, 0x1.d92b72p-48f, 0.0f, 0.0f, 0x1.991f3ep-107f,
     0.0f, 0.0f, 0x1.4a912cp-72f, 0.0f, 0x1.e8787cp-74f, 0x1.6428acp-46f,
     0x1.02259ap-48f, 0.0f, 0.0f, 0x1.6edd5ap-122f, 0x1.73b56p-95f, 0x1.7872e6p-101f,
     0x1.07093p-103f, 0.0f, 0.0f, 0x1.7866e6p-111f, 0x1.264f36p-78f, 0x1.2ba0cep-123f,
     0x1.2107e6p-3f, 0.0f, 0x1.5434f6p-96f, 0x1.12681ap-97f, 0x1.eb22e6p-35f,
     0x1.49e90cp-2f, 0.0f, 0x1.32b124p-122f, 0x1.be8442p-117f, 0.0f, 0.0f, 0.0f,
     0x1.4d0a48p-20f, 0x1.88f39ep-82f, 0.0f, 0x1.66015p-24f, 0x1.571218p-116f,
     0x1.4b0b5cp-98f, 0x1.03452p-2f, 0.0f, 0.0f, 0x1.ec26c2p-52f, 0.0f, 0.0f,
     0x1.772c2ap-28f, 0x1.832626p-15f, 0.0f, 0x1.4584cep-63f, 0x1.64746ep-29f,
     0x1.774c8ap-24f, 0.0f, 0x1.99a39ep-19f, 0.0f, 0.0f, 0x1.2139cap-93f, 0.0f,
     0x1.b770eap-29f, 0.0f, 0.0f, 0.0f, 0x1.99f3fcp-69f, 0x1.9f2d0ap-38f,
     0x1.7681p-79f, 0x1.a8f5cap-28f, 0x1.95700ap-76f, 0.0f, 0.0f, 0x1.74088ap-89f,
     0.0f, 0x1.d1929ep-112f, 0.0f, 0.0f, 0.0f, 0x1.752ae8p-21f, 0.0f, 0.0f, 0.0f,
     0x1.dede7ep-3f, 0x1.f4c582p-50f, 0.0f, 0x1.0bc202p-17f, 0x1.772cdcp-11f,
     0x1.1d647ep-23f, 0.0f, 0x1.528becp-121f, 0.0f, 0.0f, 0x1.136dccp-33f, 0.0f, 0.0f,
     0x1.d60b1ap-75f, 0x1.1fddb4p-37f, 0x1.5feeb8p-122f, 0.0f, 0x1.6bb32ap-55f,
     0x1.f24578p-90f, 0.0f, 0.0f, 0x1.9868fp-120f, 0x1.41a5f4p-56f, 0x1.3c4e8p-37f,
     0.0f, 0.0f, 0.0f, 0x1.f656fep-53f, 0.0f, 0x1.e50862p-102f, 0.0f, 0x1.54b0fap-92f,
     0x1.87c7a6p-110f, 0x1.3c91fcp-16f, 0x1.623996p-69f, 0.0f, 0.0f, 0.0f,
     0x1.b0b7f2p-93f, 0x1.cb2414p-61f, 0x1.f50a9p-89f, 0.0f, 0x1.3713b4p-6f, 0.0f,
     0x1.6d6abp-101f, 0.0f, 0x1.280bf8p-95f, 0x1.025f22p-50f, 0x1.7915d6p-61f,
     0x1.8008c4p-70f, 0.0f, 0x1.a3014ap-18f, 0.0f, 0x1.7b6d8ep-16f, 0.0f, 0.0f,
     0x1.9e2448p-13f, 0.0f, 0x1.07492ep-30f, 0.0f, 0.0f, 0x1.e299a2p-27f,
     0x1.dc3036p-93f, 0.0f, 0.0f, 0.0f, 0x1.d6ed9ep-95f, 0x1.030f44p-73f,
     0x1.d42b52p-67f, 0x1.66256ap-95f, 0x1.a68906p-90f, 0x1.951052p-125f,
     0x1.3496c4p-29f, 0.0f, 0.0f, 0x1.7f47d2p-17f, 0x1.2c3a8cp-11f, 0.0f, 0.0f,
     0x1.6a680ap-69f, 0x1.79f252p-122f, 0x1.c9d388p-33f, 0.0f, 0.0f, 0x1.2b316ep-74f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.52df3ep-83f, 0x1.1124c8p-24f,
     0x1.932056p-113f, 0.0f, 0x1.532beap-105f, 0.0f, 0x1.34109ap-29f, 0.0f,
     0x1.61ef42p-15f, 0x1.d4c826p-31f, 0.0f, 0.0f, 0x1.60c4b6p-42f, 0.0f, 0.0f,
     0x1.c2e6f8p-31f, 0.0f, 0.0f, 0.0f, 0x1.9e9ea8p-94f, 0x1.1e17c8p-78f, 0.0f,
     0x1.f65242p-72f, 0x1.cecc44p-115f, 0x1.e80522p-77f, 0.0f, 0.0f, 0.0f,
     0x1.aa66dcp-63f, 0.0f, 0x1.3c211cp-47f, 0.0f, 0x1.a7d294p-125f, 0.0f,
     0x1.5933ccp-42f, 0.0f, 0.0f, 0.0f, 0x1.06b7bp-15f, 0.0f, 0x1.c35cdep-126f,
     0x1.8af9bep-49f, 0.0f, 0x1.7ea33ap-112f, 0.0f, 0x1.96209ap-56f, 0x1p0f, 0.0f,
     0.0f, 0x1.8c35acp-66f, 0.0f, 0.0f, 0.0f, 0x1.edeeeep-42f, 0x1.9c9652p-100f, 0.0f,
     0x1.c67318p-17f, 0x1.d1dfbap-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.18dd6ep-46f, 0.0f,
     0.0f, 0x1.3fd272p-123f, 0.0f, 0.0f, 0x1.f842f6p-84f, 0x1.b0f368p-21f,
     0x1.f55c4ap-112f, 0.0f, 0.0f, 0.0f, 0x1.f5e95ap-1f, 0.0f, 0x1.6de1b6p-77f,
     0x1.a64a3ap-93f, 0.0f, 0x1.fd8c4cp-89f, 0.0f, 0x1.dd241cp-99f, 0.0f, 0.0f, 0.0f,
     0x1.2666c6p-83f, 0.0f, 0.0f, 0.0f, 0x1.e37b22p-96f, 0.0f, 0x1.c45ff4p-9f,
     0x1.c2fb08p-5f, 0x1.7fa65cp-115f, 0x1.7e5e7ap-116f, 0x1.3213e6p-23f, 0.0f,
     0x1.8155e2p-91f, 0.0f, 0x1.5d52a2p-108f, 0x1.681e92p-31f, 0x1.6b3768p-112f,
     0x1.6e3d38p-5f, 0.0f, 0x1.6abddap-65f, 0.0f, 0x1.fefad2p-41f, 0x1.369106p-90f,
     0x1.98beacp-26f, 0.0f, 0x1.fcb15p-91f, 0.0f, 0x1.6cae04p-9f, 0.0f,
     0x1.74953ap-112f, 0x1.69273cp-38f, 0.0f, 0.0f, 0.0f, 0x1.de92c6p-92f,
     0x1.50200ep-107f, 0x1.3def2cp-29f, 0.0f, 0x1.0f1a8ap-5f, 0x1.59afdp-65f, 0.0f,
     0.0f, 0x1.74e42ep-126f, 0x1.095a7ep-123f, 0.0f, 0.0f, 0.0f, 0x1.f272fcp-5f,
     0x1.c859e6p-104f, 0.0f, 0.0f, 0x1.1af618p-121f, 0.0f, 0.0f, 0x1.2fc6b8p-18f,
     0x1.edb3d4p-115f, 0.0f, 0x1.b7b508p-54f, 0x1.2ee372p-70f, 0.0f, 0.0f, 0.0f,
     0x1.a0669cp-12f, 0.0f, 0.0f, 0x1.a55b2ep-118f, 0x1p0f, 0.0f, 0x1.eab32ep-32f,
     0.0f, 0.0f, 0x1.03eb6cp-34f, 0.0f, 0.0f, 0x1.798578p-125f, 0.0f, 0.0f,
     0x1.e8971p-23f, 0.0f, 0.0f, 0x1.82bf9ep-58f, 0x1.581ce2p-11f, 0.0f,
     0x1.d2f35p-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f72b7ep-7f, 0x1.1aa5fp-28f, 0.0f,
     0.0f, 0x1.6a4aa6p-96f, 0.0f, 0x1.7ea052p-6f, 0x1.0ae55ep-97f, 0.0f, 0.0f,
     0x1.075154p-21f, 0.0f, 0.0f, 0x1.9f8c62p-57f, 0.0f, 0x1.c3437ap-31f,
     0x1.fbabc6p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.981ef4p-34f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a85806p-48f, 0x1.21cd5ap-95f, 0.0f, 0x1.7c2152p-102f,
     0x1.c0dedcp-119f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.b8f632p-108f, 0.0f,
     0x1.5423f2p-97f, 0.0f, 0x1.176e82p-33f, 0.0f, 0x1.8d56bp-29f, 0.0f,
     0x1.964b4ap-22f, 0.0f, 0.0f, 0x1.fb5f32p-121f, 0x1.116db6p-74f, 0x1.67b3f2p-41f,
     0.0f, 0.0f, 0x1.ba0ab6p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.713b6ap-47f,
     0.0f, 0x1.8a8b4ap-86f, 0x1.2ebcb8p-42f, 0.0f, 0.0f, 0x1.806c0ep-57f,
     0x1.d5fc6cp-57f, 0x1.dc3786p-58f, 0.0f, 0x1.6edd9p-121f, 0x1.0f0822p-52f, 0.0f,
     0x1.4522e6p-103f, 0x1.1c38d6p-82f, 0x1.ab0e8ap-50f, 0x1.9bf66ep-122f, 0.0f,
     0x1.e5574p-63f, 0.0f, 0x1.37d7c6p-24f, 0x1.a6e334p-39f, 0.0f, 0x1.63d7b8p-70f,
     0x1.b56dbcp-98f, 0.0f, 0x1.a73102p-42f, 0x1.232daap-44f, 0.0f, 0.0f, 0.0f,
     0x1.e5337p-42f, 0x1.9dd13ep-50f, 0.0f, 0.0f, 0x1.565916p-27f, 0x1.ee2f24p-115f,
     0x1.5ddbeap-30f, 0x1.afbddep-4f, 0.0f, 0x1.7dd534p-66f, 0.0f, 0x1.91eabap-120f,
     0x1.a8dd66p-67f, 0x1.14cf34p-37f, 0x1.8d2748p-51f, 0.0f, 0x1.46f6cep-98f, 0.0f,
     0.0f, 0x1.2401ep-107f, 0.0f, 0x1.76cdcap-39f, 0.0f, 0.0f, 0.0f, 0x1.ecf662p-33f,
     0.0f, 0x1.670a66p-6f, 0.0f, 0x1.315ca6p-50f, 0.0f, 0x1.5c8128p-37f,
     0x1.5bc7b6p-19f, 0x1.55b73ap-70f, 0.0f, 0.0f, 0x1.ab508cp-113f, 0x1.369b46p-61f,
     0.0f, 0x1.0cdd7cp-87f, 0.0f, 0.0f, 0x1.febb8ep-6f, 0.0f, 0.0f, 0.0f,
     0x1.e8f0bap-21f, 0.0f, 0x1.b711f2p-113f, 0x1.4e3068p-93f, 0x1.4dc4d4p-19f, 0.0f,
     0.0f, 0.0f, 0x1.19dcb8p-39f, 0x1.243e8p-103f, 0x1.f6e712p-48f, 0.0f,
     0x1.69ed54p-37f, 0.0f, 0.0f, 0.0f, 0x1.5739c8p-80f, 0x1.be932cp-41f,
     0x1.bffeccp-13f, 0.0f, 0x1.939d98p-71f, 0x1.fed14cp-42f, 0x1.12521cp-2f, 0.0f,
     0.0f, 0x1.c62a44p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0e9268p-81f, 0x1.f576a6p-60f,
     0.0f, 0.0f, 0x1.5d57f8p-82f, 0x1.da6cep-126f, 0x1.53d50ap-2f, 0x1p0f, 0.0f,
     0x1.920736p-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.852f7p-12f, 0x1.1ef77ap-28f,
     0x1.db83b8p-30f, 0.0f, 0x1.a95dc4p-119f, 0x1.37349p-95f, 0x1.fda66ap-100f, 0.0f,
     0x1.4552f4p-10f, 0x1.38ffbep-1f, 0.0f, 0x1.88a3f8p-76f, 0.0f, 0x1.97f106p-84f,
     0x1.1774fcp-72f, 0x1.0b576p-85f, 0x1.2db88ap-46f, 0x1.4ccb12p-11f,
     0x1.7b41dep-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9f044cp-33f, 0.0f, 0.0f,
     0x1.2a3a64p-66f, 0.0f, 0.0f, 0x1.1a96f2p-113f, 0.0f, 0x1.dc128ap-24f,
     0x1.df3902p-71f, 0.0f, 0.0f, 0x1.024c7cp-16f, 0x1.0bf2c4p-28f, 0x1.bffbbcp-16f,
     0.0f, 0.0f, 0x1.67938p-86f, 0x1.9023e8p-100f, 0.0f, 0.0f, 0.0f, 0x1.4c904p-43f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f6bc68p-114f, 0.0f, 0.0f,
     0x1.de2366p-61f, 0.0f, 0.0f, 0x1.4606a4p-100f, 0.0f, 0x1.c2ad3ep-93f,
     0x1.0e6fp-69f, 0.0f, 0x1.86083ep-11f, 0x1.63e40cp-72f, 0x1.178986p-115f,
     0x1.0f687ep-89f, 0x1.756b68p-97f, 0.0f, 0x1.b7e6cep-9f, 0x1.fa7efcp-97f, 0.0f,
     0.0f, 0.0f, 0x1.1cc4bep-43f, 0.0f, 0.0f, 0x1.53dab6p-114f, 0.0f, 0.0f,
     0x1.82f1acp-1f, 0.0f, 0.0f, 0x1.606094p-103f, 0.0f, 0.0f, 0x1.06c754p-126f, 0.0f,
     0x1.8db2b2p-23f, 0x1.32884cp-15f, 0.0f, 0x1.68b1f6p-75f, 0x1.69d92ap-13f, 0.0f,
     0x1.7e599ep-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.959c14p-22f, 0.0f, 0.0f, 0.0f,
     0x1.c99d12p-48f, 0.0f, 0x1.af97c8p-66f, 0x1.9fe9cap-94f, 0.0f, 0x1.200b92p-1f,
     0x1.8cf6c8p-89f, 0x1.3aa476p-26f, 0x1.d207dp-89f, 0x1.69c92ep-25f,
     0x1.d58cdp-61f, 0x1.bfa1eep-112f, 0x1.df0a4ap-118f, 0x1.feb8d8p-20f,
     0x1.3a896ep-105f, 0x1.7b0aa8p-61f, 0x1.4cc8fp-96f, 0x1.7e2666p-91f,
     0x1.179b4ep-117f, 0x1.dc8462p-29f, 0x1.b884f2p-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.9c6eb2p-52f, 0x1.7cfb7ep-100f, 0x1.01000cp-88f, 0.0f, 0.0f, 0.0f,
     0x1.e0a588p-62f, 0x1.f43p-112f, 0x1.a09bb2p-62f, 0.0f, 0x1.e344f4p-34f, 0.0f,
     0x1.25ab4cp-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4453c6p-39f, 0.0f, 0.0f,
     0x1.3b6be2p-86f, 0x1.7e41ap-68f, 0.0f, 0.0f, 0.0f, 0x1.dcbaecp-17f,
     0x1.020fbcp-109f, 0.0f, 0x1.6d2696p-69f, 0x1.7d6818p-9f, 0x1.fe60ep-58f, 0.0f,
     0x1.516bc6p-97f, 0.0f, 0x1.548e1ep-16f, 0x1.ef7ccep-22f, 0.0f, 0x1.e88f34p-88f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.76543cp-31f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.30f186p-102f, 0.0f, 0x1.d145dep-89f, 0x1.9d9546p-52f, 0.0f, 0x1.b7d028p-29f,
     0x1.cc2a12p-110f, 0x1.f865b2p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1886f2p-97f
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
            tmp1 = Sleef_tanf1_u35purecfma(tmp0);
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
    printf("Sleef_tanf1_u35purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_tanf1_u35purecfma bench acc %a\n", global_bench_acc);
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
