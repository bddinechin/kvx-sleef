/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_frfrexpf1_purecfma.c --function \
 *     Sleef_finz_frfrexpf1_purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.c1bf6ep-83f, 0x1.40223ep-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.abcc9p-11f,
     0x1.ed52f4p-95f, 0.0f, 0x1.e35c6ep-58f, 0x1.453c9ep-57f, 0x1.ee3acp-70f, 0.0f,
     0.0f, 0x1.ca363cp-123f, 0x1.749192p-22f, 0x1.0abf34p-106f, 0x1.172528p-123f,
     0.0f, 0.0f, 0x1.e2f3d4p-106f, 0x1.23faap-81f, 0x1.ca7cdap-90f, 0x1.47cd62p-120f,
     0.0f, 0x1.774b94p-56f, 0.0f, 0.0f, 0x1.54c676p-43f, 0.0f, 0.0f, 0x1.5cf1b4p-3f,
     0x1.4bbf2ap-59f, 0x1.4b72a6p-12f, 0x1.a5c5fp-58f, 0x1.a3ae5ep-59f,
     0x1.82ca6ap-113f, 0.0f, 0.0f, 0.0f, 0x1.42cbe8p-104f, 0.0f, 0.0f, 0.0f,
     0x1.ab7782p-36f, 0.0f, 0x1.27b2aap-56f, 0.0f, 0.0f, 0.0f, 0x1.ffe8b4p-63f, 0.0f,
     0.0f, 0x1.8ed8e6p-75f, 0x1.97458p-108f, 0x1.822374p-98f, 0.0f, 0x1.ca6f64p-5f,
     0x1.ce879ap-55f, 0x1.cd1f74p-101f, 0x1.3fe904p-122f, 0.0f, 0x1.5d5efp-49f, 0.0f,
     0x1.96ab28p-49f, 0x1.262p-40f, 0.0f, 0x1.b26beap-49f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a22192p-3f, 0x1.316f9cp-111f, 0.0f, 0.0f, 0.0f,
     0x1.06f3dep-41f, 0x1.b7c164p-4f, 0x1.9040ecp-4f, 0.0f, 0x1.f4c122p-18f, 0.0f,
     0.0f, 0x1.04027ep-16f, 0x1.a9cee2p-120f, 0.0f, 0x1.96fb24p-126f, 0.0f, 0.0f,
     0x1.d670f2p-72f, 0x1.f68ef4p-73f, 0.0f, 0x1.d2734ep-36f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.396cf8p-115f, 0x1.5e2ccp-106f, 0x1.acf67cp-111f,
     0x1.8f51d2p-57f, 0x1.1a9b88p-87f, 0.0f, 0x1.8bc778p-90f, 0x1.a196fep-26f, 0.0f,
     0.0f, 0x1.70b814p-31f, 0x1.9d54aep-62f, 0.0f, 0x1.47003cp-35f, 0x1.acbb94p-120f,
     0x1.3c192cp-62f, 0x1.e4421p-112f, 0.0f, 0.0f, 0x1.6fedeap-44f, 0x1.5a3f3cp-11f,
     0.0f, 0x1.6a3d78p-122f, 0.0f, 0x1.e60cfcp-13f, 0x1.f84a7cp-47f, 0x1.3c016ap-115f,
     0.0f, 0.0f, 0x1.8f78aap-97f, 0x1.681972p-22f, 0.0f, 0.0f, 0.0f, 0x1.db7682p-58f,
     0x1.6890a4p-98f, 0x1.1147a4p-13f, 0x1.ca9878p-85f, 0x1.2b138p-119f, 0.0f,
     0x1.5358d8p-39f, 0x1.ad63b4p-124f, 0x1.9df8a8p-19f, 0x1.22f24ap-2f,
     0x1.4cd146p-25f, 0.0f, 0x1.8f904p-80f, 0x1.74446ap-34f, 0.0f, 0.0f,
     0x1.9b565ep-35f, 0x1.fcf79ap-27f, 0x1.7539e4p-61f, 0.0f, 0x1.16d8fap-62f, 0.0f,
     0x1.b0823cp-22f, 0.0f, 0.0f, 0.0f, 0x1.d0840ep-97f, 0x1.9a305ap-80f,
     0x1.a87738p-105f, 0.0f, 0.0f, 0x1.077f36p-94f, 0.0f, 0x1.5e9accp-87f,
     0x1.cc29fcp-25f, 0.0f, 0x1.1e135ap-91f, 0x1.05b484p-65f, 0.0f, 0.0f, 0.0f,
     0x1.79fd0cp-14f, 0x1.41b7ap-60f, 0x1.8d2cf2p-79f, 0x1.36a222p-101f,
     0x1.0b8828p-88f, 0x1.ab3442p-67f, 0.0f, 0x1.3fe14ap-26f, 0x1.a07cf8p-103f,
     0x1.9fd5cap-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7e0774p-60f, 0x1.34b8b4p-26f,
     0x1.371bep-94f, 0x1.a59fc2p-55f, 0x1.f7ddfp-87f, 0.0f, 0x1.d42c9ep-1f, 0.0f,
     0.0f, 0x1.970e44p-56f, 0.0f, 0x1.9af9acp-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ea24dcp-9f, 0x1.e352c6p-104f, 0x1.5b7c44p-52f, 0.0f,
     0x1.bdf15ap-2f, 0.0f, 0x1.07ac36p-16f, 0.0f, 0.0f, 0.0f, 0x1.169036p-87f, 0.0f,
     0.0f, 0.0f, 0x1.1f7208p-59f, 0.0f, 0x1.1fa854p-92f, 0.0f, 0x1.b6636p-120f,
     0x1.5209acp-95f, 0x1.c9394p-90f, 0x1.ab5a08p-28f, 0.0f, 0x1.24dd0ep-23f, 0.0f,
     0x1.28e08cp-58f, 0.0f, 0x1.8f1708p-123f, 0x1.f6d21ep-97f, 0x1.468026p-90f,
     0x1.6dcfaep-90f, 0.0f, 0x1.d3b25cp-24f, 0x1.98af0cp-26f, 0x1.816596p-105f,
     0x1.3e884p-67f, 0.0f, 0.0f, 0x1.11c5dcp-34f, 0.0f, 0x1.3397aap-43f, 0.0f, 0.0f,
     0.0f, 0x1.e39028p-49f, 0x1.17505ap-62f, 0.0f, 0x1.6a90ep-104f, 0.0f,
     0x1.89f4a2p-19f, 0x1.1f126p-45f, 0x1.3bac94p-4f, 0x1.68d6e2p-90f,
     0x1.b6e9a2p-72f, 0.0f, 0x1.1f99f2p-114f, 0.0f, 0.0f, 0x1.da207cp-77f,
     0x1.77f136p-111f, 0x1.26faa8p-89f, 0.0f, 0.0f, 0x1.60923p-87f, 0.0f,
     0x1.d5be3ep-98f, 0x1.5811c2p-57f, 0.0f, 0x1.c98532p-108f, 0x1.aab58ep-31f, 0.0f,
     0x1.82f1e2p-65f, 0.0f, 0x1.9461bep-65f, 0.0f, 0.0f, 0x1.0149dep-26f,
     0x1.022a82p-24f, 0.0f, 0x1.561ec8p-36f, 0.0f, 0.0f, 0x1.0b2642p-109f, 0.0f, 0.0f,
     0x1.9dd25cp-12f, 0x1.dc4b94p-81f, 0x1.bd0344p-12f, 0x1.84b1f2p-96f, 0.0f,
     0x1.96e55ep-64f, 0x1.0b0c5ap-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.79a7eap-30f,
     0x1.54f7dep-43f, 0x1.9f58e8p-10f, 0x1.b3477ap-109f, 0.0f, 0.0f, 0x1.ce6906p-2f,
     0x1.d7d7p-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.12977ap-66f, 0.0f, 0x1.399ceap-23f,
     0.0f, 0x1.bc726ap-52f, 0.0f, 0.0f, 0x1.08cddep-56f, 0.0f, 0x1.f46f8cp-67f, 0.0f,
     0x1.8b248p-112f, 0x1.d85f78p-78f, 0.0f, 0.0f, 0x1.dff90cp-101f, 0.0f,
     0x1.0f6e78p-108f, 0.0f, 0x1.c6d6c4p-60f, 0.0f, 0x1.03d18ep-41f, 0x1.f4a592p-29f,
     0x1.7fa89cp-63f, 0x1.13ca6ep-32f, 0.0f, 0.0f, 0.0f, 0x1.373072p-123f,
     0x1.e52dd6p-108f, 0.0f, 0.0f, 0.0f, 0x1.6bb7b8p-65f, 0.0f, 0.0f, 0.0f,
     0x1.a3dd8ep-8f, 0x1p0f, 0.0f, 0x1.3df2dp-36f, 0.0f, 0.0f, 0.0f, 0x1.51d1dp-42f,
     0x1.34d2f4p-33f, 0.0f, 0.0f, 0x1.5ffc84p-116f, 0.0f, 0x1.14389p-17f,
     0x1.2a8208p-31f, 0.0f, 0x1.958262p-42f, 0x1.d0e26cp-122f, 0x1.dba036p-83f, 0.0f,
     0.0f, 0x1.30f7fcp-24f, 0.0f, 0.0f, 0x1.b74332p-58f, 0x1.25871p-50f,
     0x1.c09754p-25f, 0x1.351182p-112f, 0.0f, 0x1.305ceap-115f, 0.0f, 0x1.71a954p-1f,
     0.0f, 0x1.92ec3ap-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.800912p-67f, 0x1.ba4cb4p-32f,
     0.0f, 0.0f, 0x1.f630a8p-61f, 0.0f, 0x1.af8326p-122f, 0x1.590b2cp-105f, 0.0f,
     0.0f, 0x1.d472bcp-71f, 0x1.b373fap-55f, 0.0f, 0x1.8495bcp-19f, 0x1.7577bep-48f,
     0x1.4540b4p-90f, 0x1.c5fd08p-20f, 0x1.49e12ep-4f, 0x1.359924p-46f,
     0x1.dcf424p-37f, 0.0f, 0.0f, 0x1.712528p-70f, 0x1.86cfeap-85f, 0x1.311708p-49f,
     0x1.a9fbd6p-36f, 0x1.fc8fdp-51f, 0.0f, 0x1.ce10e8p-111f, 0.0f, 0x1.23f99ep-17f,
     0.0f, 0x1.76342ap-62f, 0x1.f8d05cp-43f, 0.0f, 0.0f, 0x1.a587cap-74f,
     0x1.f0b722p-87f, 0.0f, 0.0f, 0x1.9277d2p-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bbbe48p-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e49a9ep-7f, 0x1.de135ep-65f, 0.0f,
     0.0f, 0.0f, 0x1.108796p-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1b5ea2p-88f, 0x1.a5f9dp-69f, 0.0f, 0.0f, 0x1.d71986p-15f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.0df634p-54f, 0x1.7fc1b2p-126f, 0x1.39a67ep-19f, 0.0f, 0x1.95d0dep-41f,
     0.0f, 0.0f, 0x1.ce8a9cp-118f, 0x1.cea8ecp-27f, 0.0f, 0.0f, 0x1.9d3762p-71f,
     0x1.65ba7ep-107f, 0.0f, 0x1.24037ap-39f, 0x1.0da45ap-16f, 0.0f, 0.0f,
     0x1.161b9cp-94f, 0.0f, 0x1.e02f24p-34f, 0.0f, 0.0f, 0.0f, 0x1.3528b8p-90f,
     0x1.0fd954p-66f, 0x1.e0872ap-104f, 0x1.16fefcp-62f, 0x1.9fcf54p-69f,
     0x1.6c5566p-76f, 0x1.89b58ap-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.52aa48p-121f, 0x1.18e08ap-89f, 0.0f, 0x1.3aca38p-11f, 0x1.b65dc4p-67f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ae4216p-97f, 0x1.936ebap-45f, 0x1.33afdp-117f,
     0x1.a28304p-110f, 0x1.2c4184p-73f, 0x1.87132p-35f, 0x1.762bdp-11f,
     0x1.5efc5ap-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.14be5ap-35f, 0.0f, 0x1.c5105p-75f,
     0.0f, 0x1.66eb82p-116f, 0x1.fb6358p-111f, 0.0f, 0.0f, 0x1.9625fp-33f,
     0x1.42bc8ep-19f, 0.0f, 0.0f, 0.0f, 0x1.b50a66p-18f, 0.0f, 0x1.5f59e8p-100f,
     0x1.527fd6p-51f, 0x1.e04294p-2f, 0x1.f5dde4p-15f, 0x1.a5b59ep-20f,
     0x1.f68a44p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f9cbd6p-23f,
     0x1.fee0a8p-61f, 0.0f, 0x1.31a198p-108f, 0x1.831056p-113f, 0x1.ee5d4ep-124f,
     0.0f, 0.0f, 0x1.ccd8c8p-82f, 0.0f, 0x1.a84576p-109f, 0.0f, 0x1.e04f5cp-90f,
     0x1.49fe22p-32f, 0x1.58634ep-93f, 0.0f, 0x1.b9af7ap-17f, 0x1.8da8eep-96f,
     0x1.b7a196p-1f, 0.0f, 0.0f, 0x1.cd0f92p-72f, 0.0f, 0.0f, 0.0f, 0x1.21d582p-39f,
     0.0f, 0.0f, 0.0f, 0x1.522646p-109f, 0.0f, 0.0f, 0x1.fd280cp-1f, 0.0f,
     0x1.06d1a8p-103f, 0x1.a624a2p-28f, 0.0f, 0.0f, 0x1.dec30ep-49f, 0x1.5ebed8p-111f,
     0x1.141c28p-106f, 0.0f, 0x1.7b775cp-6f, 0x1.65a576p-63f, 0x1.f65606p-38f, 0.0f,
     0.0f, 0x1.93d8eep-106f, 0.0f, 0.0f, 0x1.b47e7ap-32f, 0x1.58f11ep-124f,
     0x1.200878p-86f, 0x1.96fcep-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2dde66p-61f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.4d71bep-123f, 0.0f, 0x1.58651cp-18f, 0x1.37f834p-83f, 0.0f,
     0.0f, 0x1.2530d6p-40f, 0x1.3383a8p-106f, 0x1.b84084p-102f, 0.0f, 0.0f, 0.0f,
     0x1.daf28ep-88f, 0x1.2fcdc6p-89f, 0x1.672d78p-55f, 0x1.7ad7eap-91f,
     0x1.f83354p-11f, 0.0f, 0x1.a5ebdp-43f, 0.0f, 0.0f, 0x1.6a95cep-88f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.532132p-82f, 0.0f, 0x1.203bfap-22f, 0.0f, 0.0f,
     0x1.ceea56p-65f, 0.0f, 0x1.5329cp-82f, 0x1.a5c3b6p-99f, 0.0f, 0.0f,
     0x1.4f360ap-90f, 0x1.5f7204p-58f, 0.0f, 0x1.ed7aa8p-52f, 0x1.d3d3dcp-94f, 0.0f,
     0x1.64df1ap-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.363fe2p-49f, 0x1.f4dd12p-33f, 0.0f,
     0.0f, 0x1.26a308p-36f, 0x1.88509ep-60f, 0.0f, 0.0f, 0x1.03b7ccp-120f, 0.0f,
     0x1.ad31bep-52f, 0.0f, 0x1.1847ecp-54f, 0x1.26f368p-15f, 0x1.7bff72p-126f,
     0x1p0f, 0x1.9d1b44p-17f, 0.0f, 0.0f, 0x1.b372ccp-109f, 0.0f, 0.0f,
     0x1.8ae86ap-31f, 0x1.5112c8p-105f, 0x1.468e62p-97f, 0x1.89f296p-12f,
     0x1.a83c16p-3f, 0x1.d3aa6ap-46f, 0.0f, 0.0f, 0.0f, 0x1.75a0b4p-19f, 0.0f,
     0x1.2371e8p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8b089ep-27f, 0x1.7a2fc2p-50f,
     0x1.9ef36ep-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5cd012p-90f, 0x1.f65dd6p-122f,
     0x1.cc432cp-98f, 0.0f, 0.0f, 0.0f, 0x1.7c6f6p-95f, 0x1.46277ap-1f, 0.0f, 0.0f,
     0x1.5a0298p-8f, 0.0f, 0x1.c6062ep-32f, 0.0f, 0.0f, 0x1.e56dcep-104f,
     0x1.d126d6p-62f, 0x1.7327f8p-116f, 0.0f, 0.0f, 0x1.ac807cp-74f, 0.0f,
     0x1.91bc3ep-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d576fep-29f, 0x1.43bc5p-16f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.68d1cp-95f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.054774p-82f, 0.0f, 0x1.6c505ep-82f, 0x1.c4a7bep-73f, 0.0f, 0.0f, 0.0f,
     0x1.f92c44p-17f, 0.0f, 0x1.3582p-60f, 0.0f, 0x1.c4f204p-120f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.acb2b8p-26f, 0x1.24dad6p-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0d6158p-7f,
     0.0f, 0x1.efb664p-73f, 0.0f, 0.0f, 0x1.5d448ep-96f, 0x1.d43324p-79f, 0.0f, 0.0f,
     0x1.baadbap-69f, 0.0f, 0x1.ef1354p-9f, 0x1.dee59ep-86f, 0.0f, 0.0f,
     0x1.53ffe6p-48f, 0.0f, 0x1.923982p-100f, 0.0f, 0.0f, 0x1.b703d2p-42f,
     0x1.ed12c2p-80f, 0x1.b2393ap-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0c9b94p-103f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.094becp-37f, 0x1.7c984ap-110f, 0x1.fc6b98p-32f, 0.0f, 0x1.76bb9cp-105f, 0.0f,
     0x1.78019p-2f, 0x1.61f73ep-15f, 0x1.8226a8p-80f, 0x1.e993f2p-13f, 0.0f,
     0x1.4041e4p-63f, 0x1.30f14ep-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7ce944p-14f,
     0x1.c89eeep-76f, 0.0f, 0x1.48dae2p-117f, 0x1.ce730ap-25f, 0.0f, 0x1.55d674p-75f,
     0x1.a41ebcp-68f, 0x1.12f82p-106f, 0x1.3b225ap-80f, 0x1.b57744p-80f, 0.0f,
     0x1.db37ccp-13f, 0.0f, 0x1.8589f6p-115f, 0.0f, 0.0f, 0x1.fafc1cp-43f,
     0x1.f7033ep-3f, 0.0f, 0.0f, 0x1.8fbf8ap-18f, 0x1.f0bf8p-111f, 0x1.e99aa4p-59f,
     0x1.3f4bf8p-60f, 0x1.b461d4p-39f, 0x1.7ffacep-15f, 0.0f, 0x1.0d697p-114f,
     0x1.79502cp-117f, 0x1.217c82p-93f, 0.0f, 0x1.67e974p-109f, 0x1.6c0fd8p-96f, 0.0f,
     0x1.fe442ep-38f, 0.0f, 0x1.bc633p-66f, 0x1.56e17ap-85f, 0x1.97922ep-90f,
     0x1.fb6622p-71f, 0.0f, 0x1.eeb0ccp-122f, 0.0f, 0.0f, 0x1.3e7b3p-110f, 0.0f, 0.0f,
     0x1.64c13ap-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ff7676p-79f, 0x1.dfceb2p-84f, 0.0f,
     0.0f, 0x1.0781c2p-21f, 0x1.df13f6p-30f, 0x1.fe4b4ep-48f, 0.0f, 0x1.dc1e44p-27f,
     0x1.67360ep-61f, 0.0f, 0.0f, 0.0f, 0x1.dbbeecp-101f, 0x1.0e531ep-96f,
     0x1.8d7436p-27f, 0x1.5ea4e6p-63f, 0.0f, 0.0f, 0x1.cfa5b2p-77f, 0.0f,
     0x1.e30af6p-46f, 0x1.60e66ap-105f, 0x1.78b9f4p-27f, 0x1.aa3f86p-121f, 0.0f,
     0x1.cb752p-72f, 0.0f, 0x1.f3a4f4p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7a7a24p-42f,
     0x1.52c70cp-124f, 0x1.ba65p-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4d89f6p-105f, 0x1.e5f854p-8f, 0.0f, 0x1.5b563p-18f, 0x1.971deap-124f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.85ce3ep-5f, 0.0f, 0x1.2ef8f6p-90f, 0.0f,
     0x1.8b412ap-18f, 0.0f, 0x1.a3b0a4p-101f, 0.0f, 0.0f, 0x1.c96164p-80f,
     0x1.98ba4ep-70f, 0x1.85d272p-89f, 0.0f, 0x1.4384cp-92f, 0x1.9a8e16p-47f, 0.0f,
     0.0f, 0.0f, 0x1.e32096p-66f, 0x1.eb5e78p-104f, 0x1.d52792p-15f, 0.0f,
     0x1.a7c9f8p-120f, 0.0f, 0.0f, 0x1.de36d2p-45f, 0x1.7a815cp-18f, 0.0f,
     0x1.296426p-77f, 0.0f, 0x1.6cf44ap-126f, 0x1.786678p-9f, 0.0f, 0.0f,
     0x1.0ace02p-18f, 0.0f, 0.0f, 0x1.fb0ca8p-103f, 0x1.05f1f2p-38f, 0x1.8b18f2p-75f,
     0x1.e54fe8p-74f, 0.0f, 0x1.5bc33ep-83f, 0x1.c9bfd4p-38f, 0x1.cfad7cp-90f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b4da82p-55f, 0.0f, 0x1.d354f4p-116f, 0.0f
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
            tmp1 = Sleef_finz_frfrexpf1_purecfma(tmp0);
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
    printf("Sleef_finz_frfrexpf1_purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_frfrexpf1_purecfma bench acc %a\n", global_bench_acc);
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
