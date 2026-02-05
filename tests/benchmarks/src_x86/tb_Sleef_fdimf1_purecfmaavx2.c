/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_fdimf1_purecfma.c --function Sleef_fdimf1_purecfma \
 *     --arity 2 --headers sleef.h,ml_support_lib.h --input-formats \
 *     binary32,binary32 --bench --no-embedded-bin --target x86_sse2
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
     0.0f, 0x1.ed431ap-44f, 0x1.3e59fep-58f, 0x1.55c9d8p-85f, 0.0f, 0x1.a0e81ep-42f,
     0x1.e1c774p-87f, 0x1.c53542p-123f, 0x1.04184p-109f, 0x1.33b3ap-116f, 0.0f,
     0x1.a3be2cp-87f, 0.0f, 0.0f, 0x1.d9a91ap-65f, 0.0f, 0x1.ed502p-70f, 0.0f,
     0x1.c29426p-53f, 0x1.3fa732p-3f, 0x1.395e6ep-63f, 0.0f, 0x1.efc1f4p-8f,
     0x1.5038bp-70f, 0x1.13fb04p-12f, 0x1.1f86dep-72f, 0.0f, 0.0f, 0x1.130308p-87f,
     0x1.545518p-26f, 0x1.4ffa58p-48f, 0.0f, 0x1.0827d6p-82f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1468dep-43f, 0.0f, 0x1.2b721ap-109f, 0.0f, 0x1.2165aep-53f, 0.0f, 0.0f, 0.0f,
     0x1.d0c7e2p-119f, 0.0f, 0.0f, 0x1.befbb6p-117f, 0.0f, 0x1.c502aep-114f, 0.0f,
     0.0f, 0x1.35b83cp-16f, 0x1.3e6eap-27f, 0.0f, 0x1.ad7562p-2f, 0x1.de0a84p-65f,
     0.0f, 0x1.31d13cp-24f, 0x1.3d93ep-52f, 0.0f, 0x1.b8dcacp-78f, 0.0f,
     0x1.f6f976p-23f, 0x1.061136p-84f, 0.0f, 0x1.761f1p-18f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cdfcbp-22f, 0x1.eece3ep-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e7e55ep-22f,
     0x1.4d546p-126f, 0.0f, 0x1.09e918p-44f, 0x1.6a1046p-52f, 0x1.f39b16p-45f,
     0x1.baa7f2p-74f, 0.0f, 0.0f, 0.0f, 0x1.17dde6p-40f, 0.0f, 0.0f, 0x1.6a1d44p-31f,
     0.0f, 0.0f, 0x1.119712p-86f, 0x1.9c8cfcp-75f, 0x1.cc8f74p-76f, 0x1.3e97a4p-117f,
     0.0f, 0.0f, 0x1.c28b26p-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.92683cp-68f,
     0x1.91d7f2p-55f, 0x1.67af98p-83f, 0.0f, 0x1.44a25ap-19f, 0x1.1089e6p-36f, 0.0f,
     0.0f, 0.0f, 0x1.3183fep-103f, 0.0f, 0x1.d4974p-40f, 0.0f, 0.0f, 0x1.bd5708p-71f,
     0.0f, 0x1.fc6414p-122f, 0.0f, 0x1.25ea0ap-99f, 0x1.ac7ebap-54f, 0x1.d46984p-51f,
     0x1.7aaa68p-61f, 0.0f, 0x1.79d6eap-13f, 0x1.759d56p-68f, 0x1.d012f4p-118f, 0.0f,
     0x1.d23b42p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e54cd6p-62f, 0.0f, 0.0f,
     0x1.fa59eap-119f, 0x1.9b8a3cp-98f, 0.0f, 0x1.62d1e4p-102f, 0x1.44b1c8p-54f,
     0x1.f4dfcp-100f, 0x1.d69144p-8f, 0.0f, 0x1.bcf3c4p-117f, 0x1.3a7ae2p-51f,
     0x1.bef7ep-41f, 0.0f, 0x1.3acd5cp-98f, 0x1.66f9cp-110f, 0.0f, 0x1.7ea248p-90f,
     0x1.ebaa86p-84f, 0.0f, 0.0f, 0x1.fd55a8p-69f, 0.0f, 0x1.268f4ep-67f,
     0x1.9b0684p-105f, 0.0f, 0x1.459636p-56f, 0.0f, 0.0f, 0.0f, 0x1.94189ep-2f,
     0x1.8aca78p-126f, 0x1.6eae5ap-5f, 0.0f, 0x1.411204p-59f, 0.0f, 0x1.04803p-78f,
     0.0f, 0.0f, 0.0f, 0x1.408254p-20f, 0x1.594f6cp-70f, 0.0f, 0.0f, 0.0f,
     0x1.c2b42ap-33f, 0x1.af281ep-26f, 0x1.d15324p-76f, 0.0f, 0x1.3c0896p-124f,
     0x1.2c3f36p-108f, 0x1.ac2aa6p-104f, 0x1.f56bd2p-31f, 0.0f, 0.0f, 0x1.8e967p-56f,
     0x1.1df4c8p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8ce516p-102f, 0.0f, 0.0f,
     0x1.409448p-90f, 0.0f, 0.0f, 0x1.16c5c6p-42f, 0.0f, 0x1.e0d3bep-8f, 0.0f,
     0x1.bbbc7ep-45f, 0x1.105d58p-15f, 0x1.f52e1p-52f, 0.0f, 0x1.b14c08p-112f,
     0x1.a5af3p-29f, 0x1.b219ep-16f, 0.0f, 0x1.d69e08p-37f, 0.0f, 0.0f,
     0x1.7029b4p-44f, 0x1.048e9ep-97f, 0x1.ad994p-123f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4008f8p-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.932856p-75f, 0.0f, 0x1.61caacp-69f,
     0x1.3c2064p-55f, 0.0f, 0x1.acc7cap-86f, 0.0f, 0x1.62270ap-46f, 0.0f, 0.0f,
     0x1.96ebaap-88f, 0.0f, 0.0f, 0x1p0f, 0x1.9a948ep-66f, 0x1.60ae24p-105f,
     0x1.5745ecp-77f, 0.0f, 0x1.a2d0cep-40f, 0.0f, 0x1.31fecep-54f, 0.0f,
     0x1.ded886p-50f, 0.0f, 0x1.3811c2p-56f, 0.0f, 0x1.21cfeap-5f, 0x1.a3d784p-125f,
     0.0f, 0x1p0f, 0x1.87878cp-52f, 0.0f, 0.0f, 0x1.f0a44cp-88f, 0.0f, 0.0f,
     0x1.d8788ap-104f, 0.0f, 0x1.deaep-36f, 0x1.b73508p-89f, 0.0f, 0x1.e3f078p-88f,
     0.0f, 0x1.35a326p-120f, 0.0f, 0x1.d3b2d8p-71f, 0x1.29d892p-2f, 0x1.3c680ap-2f,
     0.0f, 0.0f, 0x1.3fb11ap-125f, 0.0f, 0x1.47a80cp-18f, 0.0f, 0x1.537af8p-35f,
     0x1.af8dc2p-31f, 0x1.bf4a02p-77f, 0x1.119356p-69f, 0x1.3a67fap-4f, 0.0f, 0.0f,
     0.0f, 0x1.0bf94cp-81f, 0.0f, 0x1.e3ff66p-114f, 0x1.4c7682p-113f, 0x1.74bad4p-83f,
     0x1.ac4c08p-103f, 0x1.c3c8c2p-51f, 0.0f, 0.0f, 0x1.2fe62ap-11f, 0.0f,
     0x1.aaffdp-7f, 0x1.4a8b88p-61f, 0.0f, 0.0f, 0.0f, 0x1.b17842p-38f,
     0x1.0adee6p-63f, 0.0f, 0.0f, 0x1.11719ap-35f, 0x1.aab89ep-56f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a005f8p-51f, 0x1.641608p-32f, 0x1.c6b544p-107f, 0x1.682e64p-49f,
     0x1.6623aap-89f, 0.0f, 0.0f, 0x1.0ee3f2p-21f, 0.0f, 0x1.4ac4d4p-43f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4c630ap-115f, 0x1.1b2982p-88f, 0.0f, 0.0f, 0x1.5374dp-50f, 0.0f,
     0.0f, 0x1.f7d4e6p-29f, 0x1.36d296p-45f, 0x1.d2fd8ep-62f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.fa3246p-6f, 0.0f, 0.0f, 0.0f, 0x1.aa5356p-72f, 0x1.c3ef9p-68f,
     0.0f, 0x1.d92788p-29f, 0.0f, 0x1.d2dbe4p-76f, 0.0f, 0x1.9fc8dcp-65f,
     0x1.18a3c2p-102f, 0x1.479886p-11f, 0.0f, 0.0f, 0x1.72b636p-19f, 0.0f,
     0x1.34f59ap-106f, 0.0f, 0x1.750644p-114f, 0x1.481372p-101f, 0x1.b02f2p-99f, 0.0f,
     0x1.8cb382p-22f, 0.0f, 0.0f, 0.0f, 0x1.51b69ep-31f, 0.0f, 0x1.34ae82p-72f,
     0x1.dde48ep-10f, 0.0f, 0x1.a49112p-57f, 0x1.1c281ep-120f, 0.0f, 0x1.cd9ac2p-113f,
     0.0f, 0x1.d9f4eep-95f, 0.0f, 0x1.27fbf8p-3f, 0x1.5d787cp-59f, 0.0f,
     0x1.d98dd2p-73f, 0x1.4c7e0cp-88f, 0.0f, 0x1.0bc9d6p-90f, 0x1.717c94p-23f, 0.0f,
     0x1.fcb43cp-57f, 0x1.afb454p-101f, 0.0f, 0.0f, 0x1.432672p-115f, 0x1.95e97ap-72f,
     0x1.893c5ep-41f, 0.0f, 0x1.5ca83cp-54f, 0x1.90f896p-42f, 0.0f, 0x1.027a98p-113f,
     0.0f, 0x1.a0271cp-5f, 0x1.474dccp-9f, 0x1.4187acp-64f, 0.0f, 0x1.4f3e66p-6f,
     0x1.5f2c7p-70f, 0x1.90ddfp-43f, 0.0f, 0x1.a98ce6p-18f, 0.0f, 0.0f,
     0x1.96809ap-54f, 0x1.4ffd08p-9f, 0x1.f441p-91f, 0.0f, 0x1.9291fap-90f,
     0x1.fee596p-75f, 0x1.c4f448p-97f, 0.0f, 0x1.063ae8p-38f, 0.0f, 0x1.90b3eap-49f,
     0x1.5ff908p-116f, 0.0f, 0x1.f89134p-3f, 0.0f, 0.0f, 0x1.e6a5bap-46f,
     0x1.541538p-105f, 0x1.c66e96p-12f, 0x1.59eebcp-98f, 0x1.58a1bep-65f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.bf620ep-120f, 0x1.7aac52p-63f, 0x1.13cdacp-55f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.fc43aap-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7ad87p-117f, 0.0f,
     0.0f, 0x1.1801e6p-50f, 0x1.46e4a2p-24f, 0x1.a3b41ap-76f, 0x1.131686p-68f,
     0x1.24f612p-66f, 0.0f, 0.0f, 0.0f, 0x1.c0e0d2p-8f, 0x1.ac23fep-89f, 0.0f,
     0x1.24af7cp-114f, 0x1.921fc6p-123f, 0.0f, 0x1.b7396p-2f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c5595cp-38f, 0.0f, 0x1.104f62p-121f, 0.0f, 0x1.ea3a0ap-124f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6602f8p-57f, 0.0f, 0.0f, 0x1.ec9dfap-122f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a6455p-94f, 0x1.00367cp-107f, 0.0f, 0x1.8871e4p-66f,
     0x1.0ac64p-33f, 0.0f, 0x1.1d9ebp-98f, 0x1.4d355cp-44f, 0x1.4da702p-79f,
     0x1.23797ap-13f, 0x1.5560eep-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5193f4p-124f,
     0.0f, 0x1.c244dep-3f, 0x1.3f06ep-62f, 0.0f, 0x1.50d504p-97f, 0.0f,
     0x1.39d6c2p-65f, 0.0f, 0x1.a7a5ccp-39f, 0.0f, 0.0f, 0x1.f21356p-3f, 0.0f, 0.0f,
     0x1.29f3e8p-51f, 0x1.64b9f6p-52f, 0x1.323d46p-126f, 0.0f, 0.0f, 0x1.cae48cp-57f,
     0x1.a60d54p-126f, 0x1.2655ap-52f, 0x1.3028f2p-102f, 0.0f, 0x1.1f9a54p-24f,
     0x1.b8b742p-43f, 0.0f, 0x1.2f3b66p-71f, 0.0f, 0x1.814146p-100f, 0x1.f88958p-42f,
     0.0f, 0x1.cd7f8ap-73f, 0.0f, 0.0f, 0x1.4b2d8p-108f, 0x1.434428p-30f,
     0x1.d0666cp-26f, 0.0f, 0.0f, 0x1.f53204p-77f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b7b996p-126f, 0x1.88c33cp-100f, 0x1.f5c7ap-123f, 0x1.2bdba8p-25f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f23e92p-126f, 0x1.622b54p-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c3c658p-101f, 0x1.7e1406p-47f, 0x1.6f2774p-100f, 0x1.ce3fdcp-16f, 0.0f,
     0x1.04a0b4p-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ad5f64p-109f, 0x1.67a3f4p-123f,
     0.0f, 0x1.5e45fp-113f, 0x1.02553cp-93f, 0.0f, 0.0f, 0.0f, 0x1p0f,
     0x1.8c10e4p-48f, 0.0f, 0x1.fdff3ep-67f, 0x1.bb56aep-43f, 0.0f, 0x1.529cfp-13f,
     0x1.5985b8p-107f, 0x1.67be7ap-14f, 0x1.22b414p-53f, 0.0f, 0.0f, 0x1.674264p-110f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.26d86cp-109f, 0x1.8b4d76p-57f, 0x1.2b19c4p-49f,
     0.0f, 0.0f, 0.0f, 0x1.1183a6p-5f, 0.0f, 0x1.c79d4cp-91f, 0x1.d4f3e6p-102f,
     0x1.c0b128p-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1b95c2p-69f, 0.0f,
     0x1.06cbdap-111f, 0.0f, 0x1.afda06p-118f, 0.0f, 0x1.bbc01p-61f, 0.0f,
     0x1.ec5d7cp-65f, 0x1.046fbap-44f, 0x1.295724p-44f, 0x1.75c772p-55f,
     0x1.e64332p-61f, 0.0f, 0.0f, 0x1.7c924ep-86f, 0x1.97ad2p-80f, 0.0f,
     0x1.b476a2p-117f, 0.0f, 0.0f, 0x1.b65608p-114f, 0x1.a0a33cp-34f, 0.0f,
     0x1.008614p-82f, 0x1.287eaep-62f, 0x1.9fb522p-26f, 0x1.48cdbap-112f, 0.0f,
     0x1.a226b6p-1f, 0x1.7b764cp-77f, 0.0f, 0.0f, 0x1.623632p-19f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.2b3162p-116f, 0x1.9d6ddp-22f, 0.0f, 0x1.9580a6p-99f,
     0x1.1da1aap-57f, 0x1.022c26p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cc5b18p-12f, 0.0f,
     0x1.705d12p-5f, 0.0f, 0x1.70a532p-11f, 0.0f, 0x1.3fd71p-60f, 0.0f,
     0x1.cf80d8p-95f, 0.0f, 0.0f, 0.0f, 0x1.a0688p-108f, 0.0f, 0x1.cde0acp-44f,
     0x1.9d0ddap-71f, 0x1.2b6ddcp-63f, 0.0f, 0.0f, 0x1.404bcap-125f, 0x1.01eefep-120f,
     0x1.43cee2p-56f, 0.0f, 0x1.01908cp-98f, 0x1.30291ap-81f, 0x1.16a136p-91f,
     0x1.e93744p-60f, 0.0f, 0x1.9aacfp-110f, 0.0f, 0x1.39868ep-103f, 0x1.5c8a72p-96f,
     0x1.eba9cap-47f, 0.0f, 0.0f, 0.0f, 0x1.3800a8p-86f, 0x1.b48878p-110f, 0.0f, 0.0f,
     0x1.06bccap-49f, 0.0f, 0x1.598a2ap-19f, 0.0f, 0.0f, 0x1.b9fe26p-48f, 0.0f, 0.0f,
     0.0f, 0x1.b0b254p-78f, 0x1.344c92p-22f, 0.0f, 0.0f, 0.0f, 0x1.4a8edap-90f,
     0x1.3685d8p-2f, 0x1.7a666ep-80f, 0x1.c10952p-29f, 0x1.85b2bp-32f, 0x1.63a30ap-1f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.22eaa2p-88f, 0x1.d10d9cp-112f, 0x1.a319dep-120f,
     0.0f, 0.0f, 0x1.4b9f5cp-111f, 0.0f, 0x1.9c2d08p-42f, 0x1.f8099cp-94f, 0.0f,
     0x1.8af42ep-59f, 0x1.57774ap-120f, 0.0f, 0.0f, 0.0f, 0x1.742daap-42f,
     0x1.44e636p-99f, 0x1.89c442p-114f, 0x1.06bd54p-52f, 0x1.7f6e88p-51f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4c5ef8p-12f, 0.0f, 0.0f, 0x1.a86712p-74f, 0x1.73814ap-43f, 0.0f,
     0x1.92be16p-106f, 0.0f, 0x1.9c0e88p-42f, 0x1.9b492cp-90f, 0x1.a9a4d8p-33f, 0.0f,
     0x1.2a32e4p-89f, 0.0f, 0x1.3d906p-104f, 0.0f, 0x1.d2393ep-19f, 0x1.3e2ea6p-66f,
     0x1.23a57ap-40f, 0x1.ccc3c6p-61f, 0x1.3e6436p-19f, 0.0f, 0.0f, 0x1.34a18p-124f,
     0.0f, 0x1.340f44p-73f, 0.0f, 0.0f, 0x1.ab7224p-11f, 0.0f, 0x1.c72a4p-38f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b815dap-125f, 0.0f, 0.0f, 0x1.588bc4p-12f, 0x1.46d9dcp-70f,
     0x1.f369f6p-84f, 0.0f, 0x1.f33f04p-97f, 0.0f, 0x1.0f5202p-108f, 0.0f, 0.0f, 0.0f,
     0x1.6f5c24p-106f, 0x1.000362p-107f, 0x1.90e956p-10f, 0x1.501e4ep-34f,
     0x1.ebfdacp-101f, 0x1.ce571cp-117f, 0.0f, 0.0f, 0.0f, 0x1.0dbdf8p-85f, 0.0f,
     0x1.265042p-53f, 0x1.859056p-83f, 0x1.ad1bdep-6f, 0x1.3110ap-28f, 0.0f,
     0x1.62d6b8p-103f, 0x1.e76052p-35f, 0x1.191c14p-65f, 0x1.784084p-124f, 0.0f, 0.0f,
     0x1.fdcb5p-5f, 0x1.6bf788p-1f, 0x1.98f3b8p-82f, 0x1.29c432p-72f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bf543ap-13f, 0.0f,
     0x1.4259a6p-124f, 0x1.73bf1cp-16f, 0.0f, 0x1.d59bccp-19f, 0.0f, 0x1.eb5792p-14f,
     0.0f, 0x1.120534p-54f, 0.0f, 0.0f, 0.0f, 0x1.4921e2p-123f, 0x1.dd4ffap-63f,
     0x1.38106p-117f, 0.0f, 0x1.44cbacp-97f, 0.0f, 0.0f, 0x1.0544acp-25f, 0.0f,
     0x1.1b87fap-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f0a5eap-57f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.1f7a6ap-114f, 0x1.095a8p-55f, 0x1.530d76p-107f, 0.0f, 0x1.b506e4p-9f,
     0.0f, 0x1.b0eb08p-105f, 0.0f, 0x1.7a9022p-79f, 0x1.2e81ecp-124f, 0.0f,
     0x1.75aa32p-24f, 0x1.df20f8p-23f, 0x1.f27ddp-51f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4613cep-107f, 0x1.951a82p-112f, 0x1.693cap-90f, 0.0f, 0.0f, 0x1.895c48p-83f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.06f268p-89f, 0.0f, 0x1.480f42p-100f, 0.0f,
     0x1.c30522p-103f, 0.0f, 0x1.958af2p-110f, 0x1.58aa86p-15f, 0.0f, 0x1.9232e6p-65f,
     0.0f, 0.0f, 0.0f, 0x1.605fcep-35f, 0.0f, 0.0f, 0x1.818b28p-85f, 0x1.e55a3p-32f,
     0x1.b8b6dap-51f, 0x1.f7809ep-119f, 0.0f, 0x1.8a7f92p-77f, 0x1.7216fp-9f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a60dbap-22f, 0x1.52904ap-27f, 0x1.be4894p-116f, 0.0f, 0.0f,
     0.0f, 0x1.296bcap-13f, 0.0f, 0.0f, 0x1.42dc3ep-51f, 0.0f, 0x1.b596bp-108f,
     0x1.e0d564p-48f, 0.0f, 0.0f, 0x1.1a55ap-86f, 0x1.fa7e58p-42f, 0.0f, 0.0f, 0.0f,
     0x1.5420aep-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e9b5dp-22f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.aefd1cp-88f, 0.0f, 0.0f, 0x1.e6644ep-12f, 0.0f, 0.0f,
     0x1.68f388p-30f, 0.0f, 0.0f, 0x1.86f144p-71f, 0x1.18de1ap-17f, 0.0f, 0.0f,
     0x1.54ffd2p-89f, 0.0f, 0.0f, 0x1.b7e7bep-28f, 0.0f, 0x1.5fceap-88f, 0.0f, 0.0f,
     0.0f, 0x1.8ab03ap-117f, 0x1.3fc072p-2f, 0x1.af3352p-85f
};
static const float external_bench_wrapper_input_table_arg1[1001]  = {
     0.0f, 0.0f, 0.0f, 0x1.e62c3p-114f, 0.0f, 0.0f, 0x1.2a7eap-34f, 0x1.24b5a6p-118f,
     0.0f, 0x1.816b2ep-47f, 0x1.e655c4p-64f, 0.0f, 0x1.57d2dep-94f, 0.0f,
     0x1.8380bap-40f, 0.0f, 0x1.c36304p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5dca3ep-32f,
     0x1.f1eae4p-18f, 0x1.312b92p-41f, 0.0f, 0.0f, 0.0f, 0x1.0aba32p-118f,
     0x1.aca77ap-33f, 0x1.82cd58p-112f, 0.0f, 0x1.121ec8p-98f, 0.0f, 0.0f,
     0x1.ceba9ep-30f, 0.0f, 0.0f, 0x1.62d846p-79f, 0.0f, 0.0f, 0.0f, 0x1.6d6974p-44f,
     0x1.7bd066p-19f, 0x1.45467ep-13f, 0.0f, 0x1.b29726p-101f, 0x1.75b0eap-68f,
     0x1.e559d4p-94f, 0x1.93781cp-96f, 0.0f, 0.0f, 0x1.d29fdcp-57f, 0.0f,
     0x1.67eb94p-53f, 0.0f, 0.0f, 0.0f, 0x1.c1dbc2p-14f, 0x1.0b841cp-67f, 0.0f,
     0x1.721d66p-22f, 0x1.82cddap-55f, 0x1.23c4bcp-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.6f921p-67f, 0.0f, 0x1.980476p-28f, 0x1.ced8c2p-58f, 0x1.59f9b8p-14f,
     0x1.b84d3ep-6f, 0x1.954682p-108f, 0x1.602102p-74f, 0.0f, 0x1.bae3c4p-104f, 0.0f,
     0.0f, 0x1.8a0758p-86f, 0.0f, 0x1.264168p-112f, 0x1.e9e52ep-104f, 0x1.d5486ap-49f,
     0x1.1b1ebap-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1980dp-3f, 0.0f, 0x1.f70a38p-53f,
     0x1.d9f652p-101f, 0x1.2a96f4p-65f, 0.0f, 0.0f, 0x1.c61522p-94f, 0x1.ddbedep-72f,
     0.0f, 0x1.dd1c1ep-93f, 0x1.2f3b42p-124f, 0x1.29132cp-4f, 0.0f, 0.0f,
     0x1.3fc6d4p-35f, 0x1.fa48acp-48f, 0x1.29bc76p-88f, 0x1.1ab986p-1f,
     0x1.e66cdep-5f, 0x1.cb8058p-86f, 0.0f, 0x1.34bddp-69f, 0x1.058cd4p-107f, 0.0f,
     0x1.50ab42p-73f, 0x1.91df5ep-36f, 0x1.0df1e2p-47f, 0.0f, 0.0f, 0.0f,
     0x1.5a7d4ep-86f, 0.0f, 0.0f, 0x1.eb0a74p-15f, 0.0f, 0x1.8968c2p-53f, 0.0f, 0.0f,
     0x1.4f47e8p-122f, 0.0f, 0x1.575ca8p-73f, 0.0f, 0.0f, 0x1.5ee3a6p-35f, 0.0f,
     0x1.93b864p-104f, 0.0f, 0.0f, 0x1.50299p-59f, 0.0f, 0x1.1634c6p-68f,
     0x1.038108p-43f, 0x1.100a6cp-38f, 0x1.11576ep-30f, 0.0f, 0x1.0dffdep-34f, 0.0f,
     0.0f, 0x1.d7d4fp-108f, 0x1.e7c8e4p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.dcbc12p-79f, 0x1.df75fap-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7eecdap-105f, 0x1.f0ed4cp-79f, 0.0f, 0x1.23c1ep-8f, 0x1.05feb8p-70f,
     0x1.b6cabap-53f, 0.0f, 0x1.2dec46p-100f, 0x1.bf64bep-80f, 0x1.423c42p-5f,
     0x1.552c5ep-112f, 0x1.fb06d2p-55f, 0.0f, 0.0f, 0x1.2deb0cp-6f, 0.0f,
     0x1.b75638p-13f, 0x1.724ec4p-11f, 0x1.f24a48p-83f, 0.0f, 0.0f, 0x1.bb25f8p-111f,
     0.0f, 0.0f, 0x1.cfd2d2p-83f, 0x1.f58006p-4f, 0.0f, 0.0f, 0x1.1f658ep-100f,
     0x1.a46f96p-15f, 0x1.dd8a52p-91f, 0.0f, 0.0f, 0.0f, 0x1.8f8bacp-97f, 0.0f,
     0x1.312d54p-91f, 0x1.3277aap-52f, 0.0f, 0.0f, 0.0f, 0x1.3e6166p-104f, 0.0f,
     0x1.58c018p-119f, 0.0f, 0x1.3f5b76p-38f, 0x1.522fbap-25f, 0x1.c7904p-6f,
     0x1.d30f7p-51f, 0.0f, 0.0f, 0x1.b36f54p-23f, 0.0f, 0.0f, 0.0f, 0x1.fbf2a6p-37f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.03cc12p-46f, 0.0f, 0.0f,
     0x1.46598ap-58f, 0x1.ee87fcp-23f, 0.0f, 0.0f, 0.0f, 0x1.c1addp-98f, 0.0f,
     0x1.efa514p-53f, 0x1.63379p-42f, 0x1.7e8d12p-34f, 0.0f, 0.0f, 0x1.c3bf3p-65f,
     0.0f, 0x1.48b24p-53f, 0.0f, 0x1.b5e846p-74f, 0x1.d1babep-87f, 0x1.8e9782p-91f,
     0.0f, 0x1.6ec76cp-38f, 0.0f, 0.0f, 0.0f, 0x1.3df97cp-74f, 0.0f, 0.0f, 0.0f,
     0x1.606ad8p-98f, 0.0f, 0x1.35fdb6p-23f, 0x1.7015fap-25f, 0x1.4d828ap-27f, 0.0f,
     0x1.8908bap-84f, 0.0f, 0x1.ca05a6p-46f, 0x1.a1e5f2p-34f, 0x1.2a01e4p-13f, 0.0f,
     0.0f, 0x1.fda23ap-32f, 0.0f, 0.0f, 0x1.f806c8p-21f, 0.0f, 0x1.5c0adep-30f,
     0x1.416cfcp-2f, 0x1.95cb98p-60f, 0x1.fc6ep-78f, 0x1.f03c24p-80f, 0x1.301f52p-90f,
     0x1.0248ep-63f, 0.0f, 0x1.e8d32ap-121f, 0x1.b74db2p-55f, 0x1.adf84ap-6f,
     0x1.fc524ap-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0085ecp-33f, 0x1.880e8cp-97f,
     0x1.872746p-91f, 0x1.ef9944p-109f, 0x1.4a90c2p-36f, 0.0f, 0x1p0f, 0.0f,
     0x1.84ab76p-98f, 0.0f, 0.0f, 0x1.35716p-74f, 0.0f, 0.0f, 0x1.0a5d68p-121f,
     0x1.4a084p-33f, 0.0f, 0.0f, 0x1.7b061ep-83f, 0x1.aebce2p-24f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.2f6f1cp-110f, 0.0f, 0x1.76755ap-57f, 0.0f, 0x1.9dfc34p-55f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.cee4dep-67f, 0x1.f7ae9ep-95f, 0.0f, 0x1.3d4acep-99f,
     0.0f, 0x1.0bdec6p-105f, 0x1.588db4p-25f, 0x1.1d26d4p-116f, 0x1.3154bap-41f,
     0x1.ca6472p-22f, 0x1.d8ef6ap-71f, 0.0f, 0x1.ce8bfap-66f, 0.0f, 0x1.185feap-120f,
     0x1.65bc24p-42f, 0x1.ed10cp-93f, 0x1.c6e99p-74f, 0.0f, 0x1.d9e932p-13f,
     0x1.1f3e0cp-122f, 0.0f, 0x1.e67d88p-76f, 0.0f, 0.0f, 0x1.ce0a04p-17f,
     0x1.7681aap-69f, 0.0f, 0x1.ffdccep-86f, 0.0f, 0x1.2eac8ap-6f, 0.0f,
     0x1.9100f4p-39f, 0.0f, 0x1.30a478p-20f, 0x1.1fb3e4p-104f, 0x1.4cd1dp-22f,
     0x1.9646a8p-98f, 0.0f, 0x1.4a226ap-53f, 0x1.da627ap-87f, 0x1.089072p-30f, 0.0f,
     0x1.4508eap-71f, 0x1.588828p-20f, 0.0f, 0x1.cc8e02p-66f, 0x1.3d0632p-83f, 0.0f,
     0.0f, 0.0f, 0x1.a895ecp-95f, 0.0f, 0.0f, 0x1.2e27c2p-57f, 0x1.743888p-6f, 0.0f,
     0x1.b5ee2p-55f, 0.0f, 0.0f, 0x1.0559p-67f, 0.0f, 0x1.c83b3p-13f, 0.0f, 0.0f,
     0x1.60f03cp-66f, 0x1.017458p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3163b4p-24f, 0.0f,
     0x1.129b72p-63f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.4948e2p-101f, 0x1.926abap-49f,
     0x1.9ecbdap-36f, 0.0f, 0.0f, 0.0f, 0x1.c94e7ap-64f, 0x1.d25ed6p-9f, 0.0f, 0.0f,
     0x1.11a748p-10f, 0x1.3191e2p-46f, 0.0f, 0.0f, 0.0f, 0x1.33c8b2p-99f,
     0x1.5e6d8ep-71f, 0.0f, 0.0f, 0.0f, 0x1.9e16bep-118f, 0x1.23f386p-118f,
     0x1.c5c47cp-97f, 0x1.260b1cp-118f, 0x1.129554p-87f, 0.0f, 0x1.87f942p-6f,
     0x1.3fdd86p-118f, 0.0f, 0x1.ee21b6p-75f, 0x1.8aac86p-35f, 0x1.1d8128p-7f, 0.0f,
     0x1.2b301ep-7f, 0x1.1e447ep-120f, 0.0f, 0.0f, 0x1.2e9b72p-12f, 0x1.19d48cp-99f,
     0x1.0f96d8p-38f, 0x1.654d0cp-39f, 0x1.44fd58p-86f, 0.0f, 0.0f, 0x1.3dfcb8p-54f,
     0.0f, 0.0f, 0.0f, 0x1.df24c2p-110f, 0x1.e1ac66p-11f, 0.0f, 0x1.d6558cp-18f,
     0x1.d4f57cp-34f, 0x1.e34d1ap-88f, 0x1.2d9d28p-3f, 0.0f, 0x1.4c785ap-104f,
     0x1.41535ap-42f, 0x1.c1781p-66f, 0.0f, 0x1.5ea8fcp-55f, 0.0f, 0.0f,
     0x1.ab55f6p-6f, 0x1.0ab11ap-68f, 0x1.1aee18p-73f, 0x1.37f04p-109f, 0.0f, 0.0f,
     0x1.8d2732p-33f, 0x1.c4e5a2p-13f, 0x1.168dfap-54f, 0.0f, 0x1.97c7c6p-62f,
     0x1.ce1156p-12f, 0.0f, 0x1.07bd12p-20f, 0x1.f9f31p-90f, 0.0f, 0.0f,
     0x1.a496fap-1f, 0x1.d16564p-125f, 0.0f, 0x1.a820b4p-78f, 0.0f, 0.0f,
     0x1.a3baf2p-61f, 0.0f, 0x1.c6dcfp-36f, 0x1p0f, 0.0f, 0x1.75606p-83f, 0.0f, 0.0f,
     0x1.e9d00ep-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3f20bp-34f, 0x1.373b94p-102f, 0.0f, 0.0f, 0.0f, 0x1.f2a2fap-94f,
     0x1.cbf6d6p-69f, 0.0f, 0x1.2c7288p-73f, 0.0f, 0.0f, 0x1.a34432p-126f,
     0x1.5225aep-78f, 0x1.294d6ep-38f, 0.0f, 0.0f, 0x1.94839p-12f, 0.0f, 0.0f,
     0x1.4c920ap-45f, 0x1.eb0724p-35f, 0x1.6bd3eap-65f, 0x1p0f, 0x1.850f4ep-81f,
     0x1.03f96p-14f, 0x1.d2a56ep-7f, 0x1.2c762cp-76f, 0x1.e37ae6p-104f,
     0x1.a5090ap-33f, 0x1.d3fbep-93f, 0x1.4c242p-48f, 0.0f, 0x1.3d0bcap-83f, 0.0f,
     0.0f, 0x1.b14b92p-84f, 0x1.724b32p-21f, 0x1.d71bf6p-75f, 0x1.0a8e7p-37f, 0.0f,
     0.0f, 0.0f, 0x1.fd6a12p-98f, 0.0f, 0.0f, 0x1.792c22p-59f, 0.0f, 0.0f,
     0x1.2f45ccp-41f, 0x1.2de66ap-48f, 0x1.ec2772p-38f, 0.0f, 0x1.e8c634p-96f,
     0x1.e99be8p-122f, 0.0f, 0x1.691e64p-79f, 0x1.72d3b8p-68f, 0x1.f22d84p-113f, 0.0f,
     0x1.325034p-24f, 0.0f, 0.0f, 0x1.c0a536p-79f, 0.0f, 0.0f, 0.0f, 0x1.c51b3ep-33f,
     0.0f, 0x1.f50fd6p-60f, 0.0f, 0x1.136e88p-45f, 0x1.d25d06p-59f, 0x1.bc68f2p-39f,
     0x1.f2faaap-82f, 0x1.4ccc28p-99f, 0.0f, 0.0f, 0.0f, 0x1.483f02p-109f, 0.0f, 0.0f,
     0.0f, 0x1.6ef2cep-11f, 0x1.e5b86ap-116f, 0.0f, 0x1.696484p-12f, 0.0f, 0.0f,
     0x1.ceca12p-7f, 0x1.a1ab82p-123f, 0x1.e8afccp-106f, 0x1.efae26p-33f,
     0x1.2e6a26p-57f, 0.0f, 0x1.97e1eap-57f, 0x1.fac552p-55f, 0.0f, 0.0f, 0.0f,
     0x1.93004ep-77f, 0x1.c23118p-9f, 0.0f, 0x1.1cfaeep-33f, 0.0f, 0x1.2dba7ap-75f,
     0x1.f7c1fcp-14f, 0.0f, 0x1.d7f22p-2f, 0.0f, 0.0f, 0x1.604eb8p-106f, 0.0f,
     0x1.d9c1e2p-32f, 0.0f, 0.0f, 0x1.906b38p-62f, 0x1.f4e5cp-106f, 0x1.dba072p-89f,
     0x1.52dd9ap-92f, 0.0f, 0x1.2aeb18p-86f, 0.0f, 0.0f, 0.0f, 0x1.05c9bep-50f,
     0x1.d7aed8p-23f, 0x1.44a31cp-94f, 0.0f, 0x1.42cc3ep-90f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.04481p-116f, 0.0f, 0x1.a67ba2p-31f, 0x1.fc3e48p-90f, 0x1.66fafp-121f, 0.0f,
     0.0f, 0.0f, 0x1.d9deccp-59f, 0x1.1c56e6p-81f, 0.0f, 0.0f, 0x1.e7b52p-9f,
     0x1.961ep-111f, 0x1.8f1c92p-32f, 0.0f, 0x1.5d5956p-17f, 0.0f, 0x1.14f392p-7f,
     0x1.d1233ep-100f, 0x1.ab96b4p-93f, 0x1.0faa18p-67f, 0x1.6edd6p-54f,
     0x1.ec341ep-105f, 0x1.fcd19p-82f, 0x1.17054p-39f, 0.0f, 0x1.e7d51cp-40f, 0.0f,
     0.0f, 0.0f, 0x1.803b56p-77f, 0x1.b4d64ep-105f, 0x1.719dccp-121f, 0.0f, 0.0f,
     0.0f, 0x1.4f6f7ap-121f, 0x1.d27792p-107f, 0x1.d74324p-113f, 0.0f,
     0x1.e5a43cp-41f, 0.0f, 0x1.f20e0ep-107f, 0.0f, 0x1.c57476p-37f, 0.0f, 0.0f, 0.0f,
     0x1.3c02f8p-86f, 0.0f, 0x1.6225eap-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.516bfep-94f,
     0.0f, 0x1.289158p-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.040a1p-89f, 0x1.fe96d4p-26f,
     0.0f, 0.0f, 0.0f, 0x1.3641f6p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.67abaap-27f, 0x1.e2dab4p-51f, 0.0f, 0x1.01d408p-97f, 0x1.cc0602p-105f, 0.0f,
     0.0f, 0x1.82ac5ap-74f, 0.0f, 0.0f, 0x1.400ec6p-13f, 0x1.be90f6p-13f, 0.0f,
     0x1.766bb2p-105f, 0.0f, 0x1.d0d89cp-116f, 0x1.d1b5e2p-25f, 0.0f, 0.0f,
     0x1.d71dcap-97f, 0.0f, 0x1.a44bd4p-38f, 0x1.d81c9ep-105f, 0x1.e77d54p-65f,
     0x1.7a5434p-108f, 0x1.5d1774p-120f, 0.0f, 0.0f, 0x1.43e448p-114f, 0.0f, 0.0f,
     0x1.d7680cp-105f, 0.0f, 0x1.298804p-31f, 0.0f, 0.0f, 0x1.7993ap-41f, 0.0f, 0.0f,
     0x1.045e92p-125f, 0.0f, 0x1.21d476p-44f, 0.0f, 0x1.47a686p-42f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1c577ap-126f, 0x1.19d53ep-69f, 0.0f, 0.0f, 0x1.dab73cp-122f,
     0.0f, 0.0f, 0x1.265fe8p-23f, 0x1.8a3d0ap-1f, 0.0f, 0x1.8e1726p-75f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.85a584p-83f, 0x1.07b0fp-4f, 0.0f, 0.0f, 0.0f,
     0x1.34adap-76f, 0.0f, 0x1.cfa3ecp-116f, 0.0f, 0x1.ce168ep-6f, 0x1.e83c4ap-37f,
     0.0f, 0x1.460ae2p-60f, 0.0f, 0.0f, 0.0f, 0x1.e2e59p-7f, 0.0f, 0x1.a16e1p-103f,
     0x1.0dee5ep-16f, 0x1.c58a88p-53f, 0x1.fcb606p-59f, 0x1.b7fe52p-28f, 0.0f,
     0x1.32cf0cp-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2a0a3ep-83f, 0.0f, 0x1.562e8ep-93f,
     0x1.310314p-43f, 0x1.fd9bbp-99f, 0x1.ebcbaap-111f, 0.0f, 0.0f, 0.0f,
     0x1.864da4p-39f, 0x1.b1428cp-15f, 0x1.b6d352p-13f, 0x1.9649fcp-21f, 0.0f,
     0x1.d3663ap-123f, 0.0f, 0.0f, 0x1.4c0bacp-102f, 0x1.d31138p-93f, 0x1.e2939ep-84f,
     0x1.6cd3dap-79f, 0x1.b30ap-66f, 0x1.41b9c8p-1f, 0.0f, 0x1.290bccp-1f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.40abfap-116f, 0.0f, 0x1.8cd37ap-94f, 0.0f, 0.0f,
     0x1.56a8b6p-112f, 0.0f, 0x1.fcba9p-61f, 0.0f, 0x1.b1909p-67f, 0.0f,
     0x1.1f141p-7f, 0.0f, 0x1.1cc29ap-75f, 0x1.9ada2cp-78f, 0x1.c60dcep-38f,
     0x1.cf309ap-51f, 0x1.ab6d28p-45f, 0x1.cee5dcp-14f, 0.0f, 0.0f, 0x1.c4992ap-114f,
     0x1.a3598ep-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.909f2ep-22f, 0.0f,
     0x1.0dc014p-27f, 0.0f, 0.0f, 0x1.02a15ap-68f, 0.0f, 0x1.a2a862p-109f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bd25ap-119f, 0x1.69a47ep-19f,
     0x1.b79216p-63f, 0.0f, 0.0f, 0.0f, 0x1.fa5ce6p-90f, 0.0f, 0.0f, 0x1.a44ddp-111f,
     0x1.925986p-69f, 0x1.056a46p-102f, 0.0f, 0x1.46cde6p-107f, 0.0f, 0.0f,
     0x1.6a1458p-52f, 0x1.907ccep-83f, 0.0f, 0.0f, 0x1.adf3b6p-23f, 0x1.f19c8cp-27f,
     0.0f, 0.0f, 0.0f, 0x1.608248p-88f, 0x1.4862c6p-73f, 0.0f, 0.0f, 0.0f,
     0x1.ff518ap-45f, 0.0f, 0.0f, 0.0f, 0x1.da0ee2p-91f, 0x1.dcfcfp-124f, 0.0f,
     0x1.77d854p-6f, 0.0f, 0x1.68eacp-90f, 0.0f, 0x1.eb624ap-90f, 0x1.161a6ep-59f,
     0x1.54aa68p-9f, 0.0f, 0x1.be78c8p-101f, 0x1.c6c604p-20f, 0.0f, 0x1.b7488ap-44f,
     0x1.cf9adp-59f, 0.0f, 0.0f, 0x1.6265bp-29f, 0x1.1af46ap-74f, 0.0f,
     0x1.653cc2p-16f, 0.0f, 0x1.8293b4p-77f, 0.0f, 0.0f, 0.0f, 0x1.624b0ap-44f,
     0x1.324042p-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0df46p-11f, 0.0f,
     0x1.eaa4f8p-41f, 0.0f, 0x1.9a8958p-8f, 0.0f, 0x1.e3dc0ep-121f, 0x1.b5354cp-65f,
     0.0f, 0x1.e0dfdp-4f, 0.0f, 0.0f, 0x1.96a9a8p-78f, 0x1.0b268ap-38f, 0.0f, 0.0f,
     0x1.3d6944p-86f, 0.0f, 0.0f, 0x1.81c612p-112f, 0x1.5e5e88p-31f, 0x1.a3d8ap-66f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.783136p-122f, 0x1.644e5ap-34f, 0x1.5ed0a6p-70f,
     0.0f, 0x1.991544p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.18f3c6p-108f, 0.0f,
     0x1.90ed5ap-45f, 0x1.327054p-32f, 0x1.264ea2p-120f, 0x1.d2f0fap-31f,
     0x1.e1269ep-49f, 0.0f, 0.0f
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
            tmp2 = Sleef_fdimf1_purecfma(tmp0, tmp1);
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
    printf("Sleef_fdimf1_purecfma %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_fdimf1_purecfma bench acc %a\n", global_bench_acc);
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
