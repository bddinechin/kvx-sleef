/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_tgammaf1_u10purecfma.c --function \
 *     Sleef_tgammaf1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0.0f, 0x1.90d71cp-18f, 0x1.edeb14p-121f, 0x1.f44f4cp-39f, 0.0f,
     0x1.1d5b1ap-63f, 0x1.0b5e72p-125f, 0x1.534caep-21f, 0x1p0f, 0.0f, 0.0f, 0.0f,
     0x1.065198p-47f, 0x1.ed278p-40f, 0x1.64f41ap-48f, 0.0f, 0x1.ee1e42p-39f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.4538d2p-27f, 0x1.e02e56p-86f, 0.0f, 0.0f,
     0x1.a36dbp-102f, 0x1.4f34a6p-15f, 0.0f, 0.0f, 0.0f, 0x1.84756p-30f,
     0x1.308adap-96f, 0x1.8d3cf8p-115f, 0.0f, 0x1.f72b5ep-61f, 0x1.13cafap-37f, 0.0f,
     0.0f, 0.0f, 0x1.5f9d18p-15f, 0x1.5af81cp-59f, 0x1.0c15eap-48f, 0.0f, 0.0f, 0.0f,
     0x1.8fa4a4p-30f, 0.0f, 0x1.58c44ap-79f, 0x1.963572p-123f, 0.0f, 0x1.46656p-93f,
     0x1.5781fap-77f, 0x1.c75a28p-71f, 0.0f, 0x1.ff268p-4f, 0.0f, 0.0f, 0.0f,
     0x1.7d5048p-39f, 0x1.e6d774p-47f, 0x1.ad27a2p-87f, 0x1.f8cecap-125f,
     0x1.830e0cp-90f, 0.0f, 0.0f, 0.0f, 0x1.8a1fdap-55f, 0x1.a9a9bp-111f, 0.0f,
     0x1.5e301cp-18f, 0x1.669accp-108f, 0.0f, 0.0f, 0x1.e6f8b2p-28f, 0.0f,
     0x1.f45638p-77f, 0x1.a77492p-95f, 0.0f, 0x1.6fad54p-47f, 0x1.bb4a0cp-59f, 0.0f,
     0.0f, 0x1.8d32dep-65f, 0x1.a07426p-24f, 0.0f, 0x1.f94dc6p-35f, 0x1.6142dp-52f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.154c4cp-42f, 0x1.2bab38p-1f, 0x1.57a006p-92f, 0.0f,
     0x1.a04f9cp-120f, 0x1.530642p-95f, 0x1.1a35d4p-77f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.61894cp-108f, 0.0f, 0x1.de6d2p-47f, 0.0f, 0x1.85eddcp-98f, 0x1.f79ae8p-15f,
     0x1.3d4fbep-4f, 0x1.34033p-125f, 0.0f, 0.0f, 0x1.fcb26cp-2f, 0.0f, 0x1.60aacp-3f,
     0.0f, 0.0f, 0x1.3d3bd2p-124f, 0x1.1e15d2p-47f, 0x1.5723f2p-86f, 0x1.eb35d6p-106f,
     0.0f, 0.0f, 0.0f, 0x1.bb33aap-10f, 0x1.6042f2p-52f, 0x1.8c5cb8p-82f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.30e93ap-111f, 0.0f, 0.0f, 0x1.57dbfcp-47f, 0.0f, 0.0f,
     0x1.d2c09p-7f, 0.0f, 0x1.d34a3ep-97f, 0x1.850d9ap-108f, 0x1.4070acp-94f, 0.0f,
     0.0f, 0.0f, 0x1.71464cp-74f, 0.0f, 0.0f, 0x1.3388f4p-21f, 0x1.6cf8bep-62f,
     0x1.97125ep-102f, 0x1.034396p-90f, 0x1.229486p-67f, 0.0f, 0x1.4f72ep-47f, 0.0f,
     0.0f, 0.0f, 0x1.b288dcp-32f, 0x1.93eccp-91f, 0.0f, 0x1.8ccb2ap-103f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.268a56p-6f, 0.0f, 0x1.5ab1p-18f, 0.0f, 0.0f, 0.0f,
     0x1.e72248p-118f, 0.0f, 0x1.538f54p-118f, 0x1.0d095cp-29f, 0.0f,
     0x1.7cda88p-126f, 0x1.fc26e8p-59f, 0.0f, 0x1.bbd4b4p-19f, 0x1.9fb736p-95f,
     0x1.44402ep-73f, 0.0f, 0.0f, 0x1.0ea52ap-53f, 0x1.567a78p-8f, 0x1.bfad9ep-38f,
     0.0f, 0x1.b4045ap-31f, 0x1.c2f9e4p-107f, 0.0f, 0x1.666ed4p-126f, 0x1.5bbcaep-20f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c56dp-28f, 0.0f, 0x1.e78a34p-64f, 0.0f,
     0x1.24aa68p-22f, 0.0f, 0x1.62ee3cp-31f, 0.0f, 0x1.0b4046p-110f, 0.0f,
     0x1.a47eb2p-49f, 0x1.93cc6ep-65f, 0.0f, 0x1.8f2f2cp-74f, 0x1.f4eb3ep-5f,
     0x1.db4144p-82f, 0x1.9f9d9cp-39f, 0.0f, 0.0f, 0.0f, 0x1.db7a42p-117f, 0.0f,
     0x1.734984p-101f, 0.0f, 0x1.7cff76p-23f, 0x1.013418p-31f, 0.0f, 0x1.4aa13p-6f,
     0.0f, 0x1.59db0ap-62f, 0.0f, 0.0f, 0x1.14becp-28f, 0x1.86b734p-35f,
     0x1.0ab174p-87f, 0.0f, 0.0f, 0x1.edbc86p-31f, 0x1.0efe96p-61f, 0x1.25818p-61f,
     0.0f, 0.0f, 0x1.2b3ba4p-16f, 0.0f, 0x1.88a302p-8f, 0.0f, 0.0f, 0.0f,
     0x1.33d50cp-70f, 0x1.80560ep-22f, 0x1.c8d4e6p-31f, 0x1.c1bb62p-110f,
     0x1.5d05f2p-63f, 0x1.3300a4p-103f, 0x1.f259a8p-110f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d9acfcp-11f, 0.0f, 0x1.5993e2p-79f, 0.0f, 0.0f, 0.0f,
     0x1.6cff48p-79f, 0x1.61069ap-59f, 0x1.0e90c2p-66f, 0x1.73a832p-26f, 0.0f, 0.0f,
     0x1.5ad8bap-120f, 0x1.73b2dp-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7a541p-94f,
     0.0f, 0.0f, 0x1.ed7f4p-24f, 0x1.861264p-33f, 0x1.45f6acp-125f, 0.0f, 0.0f,
     0x1.40d78ap-69f, 0x1.bbf2fp-7f, 0.0f, 0.0f, 0x1.088852p-106f, 0.0f,
     0x1.678e5ap-106f, 0.0f, 0.0f, 0x1.18e5cap-18f, 0.0f, 0x1.b18558p-103f,
     0x1.166e7ep-4f, 0.0f, 0x1.5c1256p-52f, 0x1.549742p-31f, 0.0f, 0.0f, 0.0f,
     0x1.b6ed58p-30f, 0x1.626df2p-57f, 0.0f, 0x1.e68ac2p-36f, 0.0f, 0x1.07a7e6p-13f,
     0x1.d76684p-1f, 0x1.01bf18p-81f, 0x1.eda3d4p-48f, 0.0f, 0x1.c9d554p-54f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.70b354p-71f, 0.0f, 0.0f, 0x1.85f5bcp-56f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c0e96cp-96f, 0x1.002d58p-108f, 0.0f, 0.0f,
     0x1.e3d226p-113f, 0x1.2bffcep-83f, 0.0f, 0.0f, 0x1.6673f4p-23f, 0.0f,
     0x1.6b9d16p-60f, 0.0f, 0x1.862876p-21f, 0.0f, 0x1.d0569cp-83f, 0.0f,
     0x1.f7bc9p-84f, 0x1.2802a8p-87f, 0.0f, 0.0f, 0x1.549862p-111f, 0.0f,
     0x1.c5c03p-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4cdbb8p-99f, 0x1.fa3316p-15f,
     0x1.f3d506p-120f, 0x1.0fbf4cp-9f, 0x1.316874p-109f, 0.0f, 0x1.77a5b4p-35f, 0.0f,
     0.0f, 0x1.48028p-27f, 0.0f, 0x1.0e303ep-21f, 0.0f, 0x1.c7889ep-15f,
     0x1.2f270ap-61f, 0x1.d703d8p-4f, 0x1.2b2ae4p-70f, 0.0f, 0x1.103a2p-82f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.54e028p-4f, 0x1.7847a6p-45f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.4a7afap-101f, 0.0f, 0.0f, 0x1.46e068p-77f, 0x1.554fd4p-76f,
     0x1.a2ac7ep-76f, 0.0f, 0x1.bff024p-63f, 0.0f, 0.0f, 0x1.fc7b38p-81f,
     0x1.d10402p-81f, 0x1.e6433cp-124f, 0x1.86dceap-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.32b656p-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.068144p-65f,
     0x1.b2434p-88f, 0x1.292a1ap-43f, 0x1.965022p-30f, 0x1.61f504p-45f, 0.0f,
     0x1.22f3ecp-75f, 0.0f, 0x1.e6b60cp-125f, 0x1.71bfcap-46f, 0x1.217f0ep-72f,
     0x1.1b2dd6p-87f, 0x1.17abfcp-73f, 0.0f, 0x1.a9e586p-39f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.86079ep-15f, 0x1.90bd12p-72f, 0.0f, 0x1.c12254p-51f, 0x1.98ad12p-73f,
     0x1.e03622p-19f, 0x1.67c584p-78f, 0.0f, 0x1.f2a1f2p-77f, 0.0f, 0x1.45120ep-96f,
     0x1.7b38bcp-56f, 0.0f, 0.0f, 0.0f, 0x1.26d1c4p-113f, 0x1.f0aae4p-50f, 0.0f,
     0x1.48a2d6p-36f, 0.0f, 0x1.0aee5cp-77f, 0x1.2f3374p-35f, 0.0f, 0x1.a4335p-106f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.62e798p-43f, 0.0f, 0x1.2fceaap-5f, 0.0f, 0.0f,
     0x1.e87658p-68f, 0x1.c8a438p-19f, 0x1.930ab4p-74f, 0x1.b3d8dcp-28f,
     0x1.aebb6ap-124f, 0x1.31b0eap-99f, 0.0f, 0.0f, 0x1.bf6cp-75f, 0x1.b833aap-34f,
     0x1.fbb2fcp-57f, 0x1.73b5b8p-52f, 0x1.9b06ecp-12f, 0.0f, 0.0f, 0.0f,
     0x1.87716ep-115f, 0.0f, 0.0f, 0x1.63a8b4p-53f, 0.0f, 0.0f, 0x1.74e1fp-100f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.6ffd14p-123f, 0.0f, 0x1.992548p-60f, 0x1.a6979cp-7f,
     0x1.2245fap-3f, 0x1.6d1d8cp-55f, 0.0f, 0x1.765056p-121f, 0.0f, 0.0f,
     0x1.61ee92p-125f, 0x1.2ac296p-107f, 0x1.d91e46p-53f, 0.0f, 0.0f,
     0x1.446b48p-115f, 0.0f, 0x1.025fd6p-39f, 0x1.b58ebap-87f, 0x1.6b4b3cp-9f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a8f788p-83f, 0x1.f10904p-18f, 0x1.d379a4p-88f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.8f2c52p-71f, 0x1.7e052p-72f, 0x1.b792bap-20f, 0.0f,
     0x1.d1857ap-100f, 0.0f, 0.0f, 0.0f, 0x1.ef542p-4f, 0x1.60ac84p-63f,
     0x1.f1a4ecp-59f, 0.0f, 0.0f, 0x1.a62674p-57f, 0x1.9cdc5cp-59f, 0.0f, 0.0f, 0.0f,
     0x1.4a14a8p-45f, 0x1.edd5b2p-8f, 0x1.a8dde4p-26f, 0x1.1a832p-79f, 0.0f,
     0x1.268b3ep-103f, 0.0f, 0.0f, 0x1.c2f74ep-112f, 0x1.350cd2p-14f, 0.0f,
     0x1.1398p-126f, 0.0f, 0.0f, 0.0f, 0x1.aa4dfcp-121f, 0x1.a6296cp-29f,
     0x1.4b3f72p-75f, 0x1.c68ba4p-70f, 0x1.2ca80cp-27f, 0x1.35e8a8p-34f, 0.0f,
     0x1.97f3c6p-120f, 0.0f, 0.0f, 0x1.5aa1f2p-49f, 0x1.02fe1p-52f, 0.0f,
     0x1.73e058p-52f, 0.0f, 0.0f, 0x1.9dcb68p-72f, 0.0f, 0x1.1eda6cp-39f, 0.0f,
     0x1.d78f1cp-57f, 0x1.a53c1cp-1f, 0x1.0ac714p-44f, 0x1.748ccep-25f,
     0x1.4cff5ap-58f, 0x1.56d2acp-52f, 0x1.217b48p-123f, 0x1.fd82d4p-111f,
     0x1.5f4808p-44f, 0.0f, 0.0f, 0.0f, 0x1.26eae6p-62f, 0.0f, 0x1.c56ed6p-110f,
     0x1.9a952ep-107f, 0x1.d8f234p-66f, 0x1.4aee14p-8f, 0x1.70b434p-34f, 0.0f,
     0x1.e88802p-43f, 0.0f, 0.0f, 0.0f, 0x1.69fa6ep-83f, 0.0f, 0.0f, 0x1.42786ap-102f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eda35cp-62f, 0.0f, 0.0f,
     0x1.bca93ep-120f, 0x1.8efc08p-33f, 0.0f, 0x1.59d9b8p-18f, 0x1.f7334cp-20f, 0.0f,
     0.0f, 0x1.f73a82p-51f, 0.0f, 0x1.ffdc16p-108f, 0.0f, 0.0f, 0.0f, 0x1.353e76p-93f,
     0.0f, 0x1.3902b2p-6f, 0.0f, 0x1.3b481ap-1f, 0.0f, 0x1.57f568p-70f,
     0x1.25fbe2p-17f, 0.0f, 0x1.2883acp-80f, 0.0f, 0.0f, 0.0f, 0x1.8786d2p-101f, 0.0f,
     0x1.425086p-114f, 0x1.b88be8p-16f, 0x1.4ca1aap-22f, 0x1.c5a268p-102f, 0.0f, 0.0f,
     0x1.5ca988p-39f, 0.0f, 0x1.525076p-39f, 0x1.a5088p-126f, 0.0f, 0x1.7623eep-70f,
     0.0f, 0.0f, 0x1.7813b4p-1f, 0x1.fd1b7ap-98f, 0x1.58b17ep-22f, 0x1.05e8b4p-23f,
     0x1.a7f096p-65f, 0.0f, 0.0f, 0x1.276208p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4a52cp-102f, 0.0f, 0x1.80cecap-82f, 0x1.f53b9ap-25f, 0.0f, 0.0f,
     0x1.e2a7b4p-27f, 0.0f, 0x1.def52cp-31f, 0x1.17ee5ap-92f, 0.0f, 0.0f,
     0x1.c71a86p-105f, 0.0f, 0.0f, 0x1.644bf4p-81f, 0x1.eebab4p-34f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.29c8e4p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.db6c6ep-69f, 0x1.c35cd8p-68f, 0x1.39246p-16f, 0.0f, 0x1.6c3d76p-65f,
     0x1.452cecp-4f, 0x1.844c3p-110f, 0.0f, 0x1.1d86a6p-83f, 0.0f, 0.0f,
     0x1.7f645cp-88f, 0.0f, 0.0f, 0.0f, 0x1.57cf56p-7f, 0x1.b8f52ep-77f,
     0x1.4a8ff6p-14f, 0x1.9124bep-7f, 0.0f, 0x1.be0ac6p-83f, 0.0f, 0x1.e58732p-94f,
     0.0f, 0x1.1224a6p-12f, 0.0f, 0x1.4ad9d6p-20f, 0.0f, 0x1.2ea9dep-118f, 0.0f, 0.0f,
     0x1.e2d7f2p-65f, 0.0f, 0x1.b23a7ap-11f, 0x1.dfcabap-76f, 0.0f, 0x1.922e72p-75f,
     0.0f, 0.0f, 0x1.a9d29ap-53f, 0.0f, 0.0f, 0x1.f92b74p-75f, 0x1.61a5e4p-9f,
     0x1.a7312ep-110f, 0.0f, 0x1.4b00bep-53f, 0x1.fe2aep-54f, 0x1.34ac1ap-87f,
     0x1.ebc08ep-37f, 0x1.3d6456p-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3ffcbep-123f, 0x1.d9202ap-23f, 0x1.87eabcp-102f, 0x1.c9b1c6p-88f, 0.0f, 0.0f,
     0x1.4f8eap-97f, 0x1.afaf82p-96f, 0x1.21186ap-12f, 0x1.ae3542p-15f, 0.0f,
     0x1.ae0eap-82f, 0.0f, 0x1.066afep-116f, 0x1.766416p-79f, 0x1.53f542p-104f,
     0x1.016f9cp-105f, 0.0f, 0.0f, 0x1.8d34ap-106f, 0x1.227852p-28f, 0x1.9693aep-47f,
     0.0f, 0x1.312014p-47f, 0.0f, 0x1.5a2172p-29f, 0x1.f874fap-74f, 0x1.1de988p-23f,
     0x1.4fe6bep-106f, 0x1.689ef4p-124f, 0x1.ac093p-39f, 0.0f, 0x1.230de8p-59f,
     0x1.e0c4e8p-46f, 0.0f, 0.0f, 0x1.e3bb32p-23f, 0.0f, 0x1.e04d56p-5f, 0.0f, 0.0f,
     0x1.fbc5d6p-60f, 0.0f, 0.0f, 0x1.9b13f4p-107f, 0x1.b97836p-75f, 0.0f,
     0x1.95b07ap-85f, 0x1.b013b2p-35f, 0x1p0f, 0.0f, 0x1.f4ded6p-88f, 0x1.7e79e4p-47f,
     0.0f, 0x1.181d44p-107f, 0x1.761256p-41f, 0.0f, 0.0f, 0.0f, 0x1.b02c46p-19f,
     0x1.516a6ep-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.71e35ap-21f,
     0x1.14e0b8p-80f, 0.0f, 0.0f, 0.0f, 0x1.d7cb9ap-85f, 0x1.72e18ep-96f,
     0x1.9de13p-21f, 0x1.f6698ap-74f, 0.0f, 0.0f, 0.0f, 0x1.692068p-21f, 0.0f,
     0x1.b386f6p-35f, 0x1.fa6824p-79f, 0x1.bf651ap-16f, 0x1.331824p-57f,
     0x1.cd6fd6p-104f, 0x1.2e3d7ep-70f, 0x1.230e0cp-98f, 0x1.e9d56cp-1f, 0.0f,
     0x1.597454p-117f, 0x1.dbdfe8p-32f, 0x1.68a1ccp-21f, 0x1.4b04e2p-23f, 0.0f, 0.0f,
     0x1.40fdeap-62f, 0.0f, 0x1.84d386p-103f, 0.0f, 0x1.f7a908p-28f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ce134p-77f, 0.0f, 0.0f, 0.0f, 0x1.51d656p-35f, 0.0f, 0.0f, 0.0f,
     0x1.16537ap-90f, 0x1.b1edfcp-21f, 0x1.b8ad78p-8f, 0x1.d0440ap-96f,
     0x1.5194dep-65f, 0x1.d4a2ccp-121f, 0.0f, 0x1.7443b4p-108f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c29824p-71f, 0x1.23570ep-69f, 0.0f, 0x1.ef42d4p-47f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.130c7ep-16f, 0x1.4f6954p-22f, 0x1p0f, 0.0f,
     0x1.b6ff44p-70f, 0x1.c5a4dap-24f, 0.0f, 0.0f, 0x1.1c8da8p-122f, 0.0f, 0.0f, 0.0f,
     0x1.3e1fb6p-95f, 0x1.fad9e4p-71f, 0x1.86c402p-20f, 0.0f, 0x1.2917a2p-102f,
     0x1.6209d2p-42f, 0x1.bfb438p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7065bap-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8beed4p-41f, 0x1.fb9e44p-15f,
     0x1.66da9cp-79f, 0.0f, 0x1.d979ecp-41f, 0.0f, 0.0f, 0x1.467a7ap-90f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.99447ap-110f, 0x1.0b9b52p-60f, 0.0f, 0.0f, 0x1.385fdep-5f,
     0x1.818884p-126f, 0x1.9afbbep-42f, 0x1.c33988p-29f, 0x1.7e9f7p-30f,
     0x1.6327ecp-103f, 0x1.9d89fep-3f, 0.0f, 0.0f, 0x1.3bed18p-58f, 0.0f,
     0x1.67fa62p-17f, 0.0f, 0x1.aadf7ep-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.560726p-122f,
     0x1.282c1ep-109f, 0x1.fd807ep-80f, 0.0f, 0x1.7a5b34p-109f, 0.0f, 0x1.389d72p-93f,
     0.0f, 0.0f, 0x1.9f7e6p-51f, 0.0f, 0x1.458246p-15f, 0x1.a7dff6p-117f,
     0x1.2aea48p-80f, 0.0f, 0.0f, 0.0f, 0x1.3609e8p-1f, 0x1.617b6ep-58f, 0.0f, 0.0f,
     0x1.0c67b6p-115f, 0.0f, 0x1.b80124p-110f, 0x1.18c572p-65f, 0.0f, 0.0f, 0.0f,
     0x1.638458p-2f, 0x1.7dd48p-34f, 0x1.26a17ep-68f, 0x1.547a5p-86f
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
            tmp1 = Sleef_tgammaf1_u10purecfma(tmp0);
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
    printf("Sleef_tgammaf1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_tgammaf1_u10purecfma bench acc %a\n", global_bench_acc);
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
