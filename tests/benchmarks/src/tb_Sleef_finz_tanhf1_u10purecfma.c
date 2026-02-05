/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_tanhf1_u10purecfma.c --function \
 *     Sleef_finz_tanhf1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.5c006p-67f, 0x1.206a62p-105f, 0x1.7f97f6p-21f, 0x1.4687dcp-109f, 0.0f,
     0x1.3e8902p-24f, 0.0f, 0x1.ae62cep-34f, 0x1.f22048p-10f, 0.0f, 0x1.cc0dap-10f,
     0x1.fff23ap-63f, 0x1.daf68p-9f, 0x1.b6e8c4p-24f, 0.0f, 0x1.bc5588p-36f, 0.0f,
     0x1.b7d9cep-49f, 0x1.23d60ep-37f, 0.0f, 0x1.36fdaap-100f, 0x1.92386cp-49f, 0.0f,
     0x1.dcb548p-81f, 0.0f, 0x1.b5c4f8p-62f, 0.0f, 0x1.665204p-113f, 0x1.0eaa82p-94f,
     0.0f, 0x1.4b21ep-22f, 0x1.24d63ep-19f, 0.0f, 0x1.50ca6ep-65f, 0.0f,
     0x1.ea2c94p-126f, 0x1.5faf7ep-66f, 0.0f, 0.0f, 0x1.350feep-41f, 0x1.0531c2p-43f,
     0x1.ba63f4p-93f, 0.0f, 0x1.4c11e2p-63f, 0.0f, 0.0f, 0x1.f88c08p-11f,
     0x1.c7e1dap-47f, 0x1.e1085p-13f, 0.0f, 0x1.ae0334p-39f, 0x1.22c972p-43f, 0.0f,
     0x1.f86cp-67f, 0.0f, 0.0f, 0.0f, 0x1.c2f712p-58f, 0x1.2a84f4p-62f, 0.0f,
     0x1.641356p-3f, 0.0f, 0x1.2a485cp-74f, 0.0f, 0x1.51306p-101f, 0.0f, 0.0f, 0.0f,
     0x1.1201bp-24f, 0.0f, 0.0f, 0x1.4c7822p-85f, 0.0f, 0.0f, 0.0f, 0x1.1c9584p-111f,
     0.0f, 0.0f, 0.0f, 0x1.230e6ep-22f, 0.0f, 0x1.e7e7cp-68f, 0.0f, 0x1.8234fap-27f,
     0x1.b1a17p-69f, 0.0f, 0.0f, 0x1.425e9cp-4f, 0.0f, 0x1.ad3ceap-58f, 0.0f, 0.0f,
     0x1.a02dc2p-73f, 0x1.b38cb8p-10f, 0x1.33909cp-97f, 0x1.6011e2p-81f,
     0x1.4f829ep-123f, 0x1.e91de4p-107f, 0.0f, 0x1.cca38ap-54f, 0x1.282138p-6f,
     0x1.b95196p-70f, 0.0f, 0x1.73aab4p-97f, 0x1.78351ep-82f, 0x1.440c8ap-20f, 0.0f,
     0x1.80b38ap-67f, 0x1.38ea5p-109f, 0x1.dd41b4p-3f, 0.0f, 0x1.78fb2ep-66f, 0.0f,
     0x1.91e8acp-52f, 0x1.7d30e4p-18f, 0x1.770114p-77f, 0x1.301a3p-104f, 0.0f,
     0x1.bc8ef8p-65f, 0.0f, 0x1.25bd5cp-10f, 0.0f, 0x1.e1f7cep-108f, 0.0f, 0.0f, 0.0f,
     0x1.eea1fp-10f, 0x1.093d7ap-28f, 0.0f, 0x1.11486ap-50f, 0x1.bdae22p-18f, 0.0f,
     0x1.27dd5ep-12f, 0x1.214dd8p-94f, 0.0f, 0.0f, 0.0f, 0x1.095e9ep-3f,
     0x1.a3c536p-92f, 0.0f, 0x1.87cbdap-96f, 0.0f, 0x1.62461ep-29f, 0x1.6b10ap-45f,
     0.0f, 0.0f, 0.0f, 0x1.e1eff4p-84f, 0.0f, 0x1.865b0ep-59f, 0x1.9204fap-66f, 0.0f,
     0x1.d951cp-119f, 0.0f, 0.0f, 0.0f, 0x1.12e0e6p-97f, 0x1.6c0964p-35f,
     0x1.233f1ep-23f, 0x1.665f8ep-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bfe588p-99f, 0.0f,
     0x1.cc631cp-87f, 0.0f, 0x1.bed366p-123f, 0.0f, 0x1.42af42p-86f, 0x1.9e777cp-49f,
     0.0f, 0.0f, 0x1.fbea7ep-41f, 0.0f, 0.0f, 0x1.edbe9p-68f, 0.0f, 0x1.c42302p-125f,
     0x1.59fad8p-25f, 0.0f, 0.0f, 0x1.24c93ep-90f, 0x1.870886p-35f, 0.0f,
     0x1.d0b8c4p-17f, 0.0f, 0x1.d106aep-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.516a58p-25f,
     0.0f, 0x1.067044p-11f, 0.0f, 0x1.28b1eap-27f, 0.0f, 0x1.6af058p-11f, 0.0f,
     0x1.c9854ep-63f, 0x1.6ac9cp-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.88739ep-99f,
     0x1.ecaea2p-48f, 0x1.0c2ae8p-126f, 0x1.95253ep-58f, 0.0f, 0x1.b646f2p-17f, 0.0f,
     0x1.3031cp-59f, 0x1.3d70e6p-25f, 0x1.a697fep-116f, 0x1.1b8abep-50f, 0.0f, 0.0f,
     0x1.d88e1cp-102f, 0x1.cb021cp-17f, 0x1.15f87ep-75f, 0x1.a3a97ep-61f, 0.0f, 0.0f,
     0x1.09be32p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5931d2p-48f, 0.0f, 0.0f,
     0x1.8f7f72p-126f, 0x1.db5bd4p-39f, 0.0f, 0x1.4001c2p-75f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.58d4c8p-107f, 0x1.c9d44cp-27f, 0x1.e78b7ep-6f, 0x1.a1e9cp-31f,
     0x1.38b424p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a336f2p-90f, 0.0f, 0x1.809682p-104f,
     0x1.568856p-23f, 0.0f, 0x1.88a186p-3f, 0x1.b8479p-40f, 0x1.8cae74p-93f, 0.0f,
     0.0f, 0x1.2c20f8p-126f, 0.0f, 0.0f, 0.0f, 0x1.6e8f6ap-29f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.72ff38p-57f, 0x1.26f5acp-57f, 0.0f, 0x1.5e6dfep-13f, 0.0f,
     0x1.ecd41cp-50f, 0.0f, 0x1.37d822p-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.fb45fep-31f, 0.0f, 0.0f, 0x1.9a65d8p-19f, 0x1.38975p-124f,
     0x1.14d828p-2f, 0x1.00f35ap-98f, 0.0f, 0x1.e77786p-44f, 0x1.eaaa3p-2f, 0.0f,
     0x1.b2d6eap-23f, 0.0f, 0x1.29b6b8p-76f, 0x1.9adc24p-35f, 0.0f, 0x1.c324ccp-58f,
     0x1.e6c05cp-54f, 0.0f, 0x1.ebbdb6p-60f, 0x1.cc437cp-34f, 0.0f, 0.0f,
     0x1.b0153cp-47f, 0.0f, 0.0f, 0x1.bf1b1ap-23f, 0.0f, 0.0f, 0.0f, 0x1.9a07acp-51f,
     0x1.ce57d6p-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f19558p-53f, 0.0f, 0x1.409d3ep-113f, 0.0f, 0.0f, 0.0f, 0x1.23fdbp-58f, 0.0f,
     0x1.1fd14cp-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9d3ba2p-94f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d1e66p-61f, 0x1.246p-57f, 0.0f, 0.0f, 0x1.7fac2ep-100f,
     0.0f, 0.0f, 0x1.91a1dcp-65f, 0x1.691592p-35f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3875f4p-55f, 0.0f, 0x1.f2ef68p-4f, 0.0f, 0.0f, 0x1.87cd1ap-61f,
     0x1.41690cp-52f, 0x1.d7cce2p-73f, 0.0f, 0x1.b915ap-62f, 0x1.4dd116p-26f, 0.0f,
     0x1.e779dap-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.451d1p-14f, 0.0f,
     0x1.306c02p-103f, 0x1.88b9e6p-107f, 0x1.cc7872p-95f, 0.0f, 0.0f, 0.0f,
     0x1.22e06p-1f, 0x1.a61a34p-24f, 0x1.5c068cp-39f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.96b88p-108f, 0x1.92beap-112f, 0x1.363686p-88f, 0.0f, 0x1.00bffep-73f,
     0x1.cf29f6p-112f, 0.0f, 0.0f, 0x1.dc8cecp-111f, 0.0f, 0.0f, 0x1.9d851ep-43f,
     0.0f, 0.0f, 0x1.c3bf42p-32f, 0.0f, 0x1.1d6d72p-1f, 0.0f, 0x1.695952p-90f, 0.0f,
     0.0f, 0x1.1b764p-52f, 0.0f, 0.0f, 0x1.09f472p-72f, 0.0f, 0.0f, 0x1.efd804p-57f,
     0x1.a75a34p-78f, 0.0f, 0x1.f227bap-26f, 0x1.3ac9f4p-92f, 0x1.e57efep-103f,
     0x1.3ad9aep-112f, 0.0f, 0.0f, 0x1.95b6ep-106f, 0x1.7c0b62p-14f, 0.0f,
     0x1.1594dcp-95f, 0.0f, 0x1.197d9ap-67f, 0.0f, 0x1.a93be4p-96f, 0.0f,
     0x1.6c4078p-56f, 0x1.7fe36cp-94f, 0.0f, 0.0f, 0x1.8bccaep-107f, 0x1.39f48ap-10f,
     0x1.ab4258p-37f, 0.0f, 0x1.c05f7ep-8f, 0x1.bb5408p-87f, 0x1.ed9b46p-65f,
     0x1.7ab4aep-39f, 0x1.d5eab6p-81f, 0x1.87cbfp-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b80ffp-30f, 0.0f, 0x1.a98bdep-107f, 0.0f, 0x1.4cc06ap-11f, 0x1.fef7bep-2f,
     0x1.7c5c24p-97f, 0.0f, 0.0f, 0x1.c0016p-52f, 0x1.4d4d96p-8f, 0x1.ef99dp-28f,
     0.0f, 0x1.1eaa32p-117f, 0.0f, 0x1.de577cp-19f, 0x1.79375ap-12f, 0x1p0f, 0.0f,
     0x1.643382p-59f, 0.0f, 0x1.b1342cp-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f0735p-81f,
     0x1.fa329cp-116f, 0.0f, 0.0f, 0x1.40fa9p-61f, 0x1.213f5p-59f, 0.0f, 0.0f, 0.0f,
     0x1.0929b2p-70f, 0x1.d2b864p-25f, 0.0f, 0.0f, 0x1.613d52p-114f, 0x1.7d7d88p-18f,
     0x1.47aa02p-44f, 0.0f, 0x1.7c58f2p-81f, 0x1.35b88p-39f, 0.0f, 0x1.655aaap-33f,
     0.0f, 0.0f, 0x1.555894p-118f, 0x1.8009c8p-81f, 0.0f, 0x1.5b31c8p-83f,
     0x1.0750d6p-98f, 0x1.fc00bp-16f, 0.0f, 0.0f, 0.0f, 0x1.630976p-40f,
     0x1.66a5c8p-50f, 0x1.a0375ep-33f, 0x1.648adcp-100f, 0x1.07a202p-118f,
     0x1.d59b64p-56f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.e2bfbp-32f, 0.0f, 0.0f,
     0x1.bed874p-53f, 0x1.24684ap-110f, 0x1.deefe8p-1f, 0.0f, 0x1.83e6fap-72f,
     0x1.9e6b62p-96f, 0.0f, 0.0f, 0x1.766546p-113f, 0x1.0833fp-82f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.64813p-56f, 0.0f, 0x1.def9e4p-114f, 0.0f, 0x1.b902d4p-35f,
     0x1.cc43e2p-121f, 0x1.757b06p-113f, 0.0f, 0x1.110d6ep-120f, 0x1.432e8ap-10f,
     0.0f, 0x1.e35aa6p-110f, 0.0f, 0x1.8bdea2p-2f, 0.0f, 0x1.7553aap-122f,
     0x1.f173d8p-64f, 0.0f, 0.0f, 0x1.9fa624p-44f, 0x1.71ec76p-125f, 0.0f,
     0x1.8c7fcap-48f, 0x1.8d082ap-109f, 0x1.01c5b2p-77f, 0x1.94ab16p-62f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.fc4152p-19f, 0x1.a0c19ep-96f, 0x1.e455d6p-97f, 0.0f, 0.0f,
     0x1.0234acp-88f, 0.0f, 0x1.19e26p-40f, 0.0f, 0x1.c831acp-14f, 0x1.e22d4ep-79f,
     0x1.e25e12p-86f, 0.0f, 0.0f, 0x1.8db678p-95f, 0.0f, 0x1.32aebp-5f,
     0x1.0806eep-63f, 0x1.c7a368p-126f, 0x1.ba2234p-34f, 0x1.9ab916p-82f, 0.0f, 0.0f,
     0x1.ae4296p-46f, 0x1.b246bp-95f, 0.0f, 0x1.758da4p-111f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4e8048p-125f, 0.0f, 0.0f, 0x1.edd472p-6f, 0x1.d1ac74p-116f, 0.0f,
     0x1.f325b4p-73f, 0.0f, 0.0f, 0.0f, 0x1.07273ep-77f, 0.0f, 0x1.3be178p-62f, 0.0f,
     0.0f, 0x1.b9cf1ep-54f, 0x1.336076p-120f, 0x1.00326cp-47f, 0x1.7e9508p-41f, 0.0f,
     0x1.46242ap-31f, 0x1.a877aap-43f, 0x1.b4b0c8p-89f, 0x1.96edfp-78f,
     0x1.56915p-36f, 0.0f, 0.0f, 0x1.fc5182p-7f, 0x1.c40f28p-78f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f3ae78p-64f, 0x1.6d6528p-48f, 0.0f, 0.0f, 0x1.ef1e02p-51f,
     0x1.03d8acp-122f, 0.0f, 0x1.b9ddecp-114f, 0.0f, 0x1.abaa7ep-38f, 0x1.3e9474p-89f,
     0.0f, 0x1.3d8f72p-9f, 0x1.3b1f52p-105f, 0.0f, 0.0f, 0x1.ab3b1ap-3f,
     0x1.c9ce7p-92f, 0x1.4ee606p-69f, 0.0f, 0x1.7eee5ep-82f, 0.0f, 0x1.f59e18p-78f,
     0.0f, 0x1.ec0894p-6f, 0x1.c38ce4p-63f, 0x1.42768p-103f, 0x1.9a7c42p-93f,
     0x1.2cc428p-43f, 0.0f, 0x1.4f43f4p-26f, 0x1.759e06p-94f, 0.0f, 0.0f,
     0x1.047e08p-50f, 0.0f, 0x1.03bba8p-27f, 0x1.01da32p-44f, 0.0f, 0x1.89cbp-55f,
     0x1.2674fp-103f, 0x1.083434p-27f, 0.0f, 0x1.4a6078p-89f, 0.0f, 0x1.5b5938p-85f,
     0x1.296448p-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e50774p-98f,
     0x1.068f32p-110f, 0x1.265732p-90f, 0.0f, 0.0f, 0.0f, 0x1.1d37f4p-66f,
     0x1.1064e2p-20f, 0x1.efc618p-114f, 0.0f, 0x1.8df1fcp-77f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ef5ed4p-104f, 0.0f, 0x1.5d4a2ap-96f, 0x1.1bcd58p-43f, 0.0f,
     0x1.ec37bcp-90f, 0x1.6c06bep-27f, 0x1.f5105ap-125f, 0x1.b867e2p-64f, 0.0f, 0.0f,
     0x1.91023ep-92f, 0x1.9c257ap-122f, 0x1.68a68p-40f, 0.0f, 0x1.f22322p-111f, 0.0f,
     0x1.3df09p-75f, 0.0f, 0x1.175098p-119f, 0.0f, 0x1.01e192p-84f, 0x1.5ef4b4p-22f,
     0x1.c5eeb8p-39f, 0.0f, 0x1.0b159ap-27f, 0.0f, 0.0f, 0x1.d79ccp-73f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.9cacap-114f, 0.0f, 0.0f, 0x1.3ecef8p-85f, 0x1.67a50ap-62f,
     0x1.f7e248p-55f, 0x1.e9f958p-97f, 0.0f, 0.0f, 0x1.746edp-100f, 0.0f, 0.0f, 0.0f,
     0x1.f36fc4p-65f, 0x1.9f2b1ep-75f, 0.0f, 0x1.972d4p-115f, 0.0f, 0x1.f1adf2p-15f,
     0x1.5b3aa4p-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.426d3p-6f, 0.0f, 0.0f,
     0x1.beccf4p-23f, 0.0f, 0x1.981208p-12f, 0x1.85874ap-118f, 0.0f, 0x1.8c040ep-40f,
     0x1.83af5ap-56f, 0x1.da8348p-59f, 0x1.43f5ep-105f, 0x1.eec52cp-6f, 0.0f,
     0x1.937c9ep-61f, 0x1.877e14p-25f, 0x1.b2c67ap-75f, 0x1.aac3f6p-120f,
     0x1.534dcp-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6c6a24p-16f, 0x1.25aea4p-8f,
     0x1.506d9ap-43f, 0x1.830d1ep-76f, 0x1.5404ecp-94f, 0.0f, 0x1.8e7b38p-1f,
     0x1.77a624p-23f, 0x1.5c2d8cp-72f, 0x1.e008e4p-44f, 0x1.4d3528p-122f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.fc20e2p-40f, 0.0f, 0.0f, 0x1.cf30a6p-6f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.8d60b8p-51f, 0x1.aa94ccp-17f, 0.0f, 0x1.9af4acp-118f, 0.0f,
     0x1.a3cea8p-46f, 0.0f, 0x1.6f783cp-82f, 0.0f, 0.0f, 0.0f, 0x1.a6bfa2p-40f, 0.0f,
     0.0f, 0x1.b3f506p-55f, 0x1.499ca2p-88f, 0.0f, 0.0f, 0x1.c968f4p-30f,
     0x1.e5f20cp-11f, 0.0f, 0x1.a18548p-40f, 0x1.b8273ep-34f, 0x1.caeac4p-93f, 0.0f,
     0.0f, 0x1.61db76p-117f, 0x1.fd363p-34f, 0x1.d602ecp-90f, 0x1.d5cc5p-122f,
     0x1.3d9ba4p-99f, 0x1.3e979cp-52f, 0x1.1447ecp-84f, 0x1.eb64acp-63f, 0.0f,
     0x1.65cceap-94f, 0.0f, 0x1.9edc24p-73f, 0x1.3f7b2cp-70f, 0.0f, 0.0f, 0.0f,
     0x1.cf5352p-73f, 0.0f, 0x1.5e0628p-108f, 0.0f, 0.0f, 0x1.13e24ep-40f,
     0x1.9f9cf2p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7ba0c4p-16f, 0x1.5cd4ecp-98f,
     0x1.517e96p-119f, 0x1.eb5afcp-108f, 0.0f, 0x1.d0eb2cp-81f, 0.0f,
     0x1.815cd4p-116f, 0x1.5d9064p-114f, 0.0f, 0.0f, 0x1.7003dep-15f, 0x1.bc4518p-70f,
     0.0f, 0x1p0f, 0.0f, 0x1.99c58cp-120f, 0x1.6a607cp-110f, 0.0f, 0x1.4abe06p-57f,
     0x1.b1db3cp-38f, 0.0f, 0.0f, 0x1.ed814p-39f, 0.0f, 0x1.d77cp-113f,
     0x1.68b6cp-49f, 0x1.da8b7cp-9f, 0.0f, 0.0f, 0.0f, 0x1.814cc2p-86f,
     0x1.c752cap-30f, 0.0f, 0x1.669aa8p-86f, 0x1.18a2dap-24f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.bb72bap-26f, 0.0f, 0.0f, 0.0f, 0x1.06b426p-115f, 0x1.a513bap-29f, 0.0f,
     0.0f, 0.0f, 0x1.105486p-72f, 0.0f, 0x1.bd7ac4p-29f, 0x1.4c9b96p-113f,
     0x1.95153ap-13f, 0x1.1d998ep-20f, 0x1.a82dcp-101f, 0.0f, 0.0f, 0.0f,
     0x1.59a978p-53f, 0.0f, 0x1.c94188p-49f, 0x1.2927dcp-17f, 0.0f, 0.0f,
     0x1.d24178p-40f, 0x1.ac0a86p-21f, 0x1.9c4346p-64f, 0x1.269ce4p-20f,
     0x1.4ba9fcp-12f, 0x1.be5ca4p-24f, 0x1.363b5ep-40f, 0x1.c628c2p-55f,
     0x1.23c57ap-48f, 0.0f, 0x1.eb57cp-121f, 0x1.7256b8p-73f, 0.0f, 0x1.891a18p-4f,
     0x1.368d5ap-93f, 0x1.f8c952p-46f, 0x1.82268p-11f, 0.0f, 0x1.76a832p-9f,
     0x1.110eb8p-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.142f28p-33f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.dcf34ep-111f, 0.0f, 0x1.5156fp-70f, 0.0f, 0x1.a9752ap-58f, 0.0f,
     0x1.2dfef6p-11f, 0.0f, 0x1.de101cp-112f, 0.0f, 0.0f, 0.0f, 0x1.f7b0bp-72f, 0.0f,
     0x1.5d3f14p-16f, 0x1.f5e206p-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.73571cp-79f,
     0x1.2d0bbep-77f, 0x1.76d748p-68f, 0x1.1705ep-38f, 0x1.0b25f2p-13f, 0.0f,
     0x1.345e66p-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8fe976p-7f
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
            tmp1 = Sleef_finz_tanhf1_u10purecfma(tmp0);
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
    printf("Sleef_finz_tanhf1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_tanhf1_u10purecfma bench acc %a\n", global_bench_acc);
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
