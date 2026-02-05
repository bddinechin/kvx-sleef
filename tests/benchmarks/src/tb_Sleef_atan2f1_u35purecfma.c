/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_atan2f1_u35purecfma.c --function \
 *     Sleef_atan2f1_u35purecfma --arity 2 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32,binary32 --bench --no-embedded-bin --target \
 *     kv3
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
     0x1.003a18p-28f, 0x1.339d98p-94f, 0.0f, 0.0f, 0x1.a794fp-68f, 0x1.468d14p-123f,
     0.0f, 0x1.c5b3bep-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e37cd8p-90f,
     0x1.8d063ep-83f, 0.0f, 0x1.f9b4b2p-103f, 0x1.78cc14p-61f, 0x1.58b4fcp-55f,
     0x1.7d2994p-51f, 0x1.b6f6a6p-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a7a9dap-107f,
     0x1.9b0ffep-89f, 0.0f, 0x1.b0e388p-103f, 0x1.7736bcp-30f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.de27bp-16f, 0.0f, 0x1.0fdb3cp-52f, 0.0f, 0.0f, 0x1.994e72p-74f, 0.0f,
     0x1.480ea6p-96f, 0.0f, 0x1.89ae42p-43f, 0.0f, 0.0f, 0x1.bc4912p-61f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.885cbep-58f, 0x1.91e9fap-111f, 0.0f,
     0x1.49d0b2p-111f, 0.0f, 0.0f, 0x1.0782dp-105f, 0x1.da844cp-123f, 0.0f,
     0x1.021408p-103f, 0.0f, 0x1.d85df2p-39f, 0.0f, 0x1.c5ba68p-43f, 0.0f,
     0x1.699fc8p-105f, 0x1.49a47cp-18f, 0.0f, 0x1.9bb834p-10f, 0x1.c348f4p-15f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4d2b0ep-5f, 0.0f, 0x1.67029ep-10f, 0.0f, 0.0f,
     0x1.e10f2ap-76f, 0x1.c2a282p-95f, 0.0f, 0.0f, 0x1.6f8f1ap-29f, 0x1.9f41bcp-115f,
     0x1.f84dfap-106f, 0x1.cb039p-88f, 0.0f, 0.0f, 0x1.b92c34p-98f, 0x1.f68ffap-26f,
     0x1.54b38ep-30f, 0.0f, 0x1.87a584p-88f, 0.0f, 0.0f, 0x1.6686b2p-55f, 0.0f,
     0x1.8225dp-92f, 0.0f, 0x1.f2e55ap-22f, 0x1p0f, 0.0f, 0.0f, 0x1.66789ap-49f,
     0x1.0989ecp-47f, 0x1.c007cap-49f, 0x1.319232p-71f, 0x1p0f, 0x1.a6e8fcp-125f,
     0x1.34f2d8p-84f, 0.0f, 0x1.844512p-8f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.3ea4acp-93f, 0.0f, 0x1.9bb28p-113f, 0.0f, 0.0f, 0.0f,
     0x1.7123a2p-48f, 0.0f, 0.0f, 0x1.ef6a02p-29f, 0x1.9a4b1ep-102f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a91458p-108f, 0.0f, 0.0f, 0x1.a4593ep-121f, 0.0f,
     0x1.5b672p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5df358p-124f, 0x1.c3432cp-100f, 0.0f,
     0.0f, 0x1.ebf41p-121f, 0x1.725554p-71f, 0.0f, 0x1.5481dap-17f, 0.0f, 0.0f, 0.0f,
     0x1.bcc59cp-34f, 0x1.946ff6p-56f, 0.0f, 0.0f, 0x1.7f3f56p-1f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.25dd7cp-50f, 0x1.fc0feap-126f, 0x1.d9753p-75f, 0.0f,
     0x1.f6266ap-122f, 0.0f, 0.0f, 0x1.d0fbb4p-88f, 0x1.1bb444p-67f, 0x1.0a5d7ep-71f,
     0x1.6e505p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.620966p-83f,
     0x1.d1620ap-16f, 0x1.968d92p-21f, 0.0f, 0.0f, 0x1.98e52ap-57f, 0.0f, 0.0f,
     0x1.5596ecp-1f, 0.0f, 0x1.a8886cp-23f, 0.0f, 0.0f, 0.0f, 0x1.f4ffb8p-125f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.30b1f8p-4f, 0x1.a2c054p-63f, 0.0f, 0.0f, 0.0f,
     0x1.c6e19ep-61f, 0x1.cfe1b8p-71f, 0x1.d812a8p-52f, 0.0f, 0.0f, 0.0f,
     0x1.2d0fe8p-75f, 0x1.8f6bb6p-83f, 0x1.4d0f8ep-67f, 0x1.e3e252p-111f, 0.0f, 0.0f,
     0.0f, 0x1.d7c9a4p-61f, 0x1.2f8cb6p-43f, 0x1.9469aep-7f, 0.0f, 0.0f,
     0x1.8269c4p-85f, 0.0f, 0x1.98d6b8p-56f, 0x1.79896cp-117f, 0.0f, 0x1.5ef716p-103f,
     0x1.a12beep-123f, 0.0f, 0x1.0234ccp-15f, 0x1.95ddf4p-46f, 0x1.0c1bf4p-116f,
     0x1.a9dc6cp-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.63f812p-23f, 0x1.6cf128p-120f,
     0x1.60dab4p-123f, 0.0f, 0x1.0c3ab2p-100f, 0x1.36644p-53f, 0.0f, 0.0f, 0.0f,
     0x1.e76f38p-62f, 0.0f, 0.0f, 0.0f, 0x1.889bf4p-25f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.73401ep-106f, 0x1.60f03cp-48f, 0.0f, 0x1.eccef6p-122f, 0x1.c22268p-3f, 0.0f,
     0x1.868888p-73f, 0x1.12a0e4p-55f, 0x1.7fd892p-52f, 0x1.5c39dp-27f,
     0x1.441beap-125f, 0.0f, 0.0f, 0x1.b36282p-29f, 0.0f, 0x1.2c029ap-14f,
     0x1.444fcap-69f, 0x1.bd5262p-122f, 0x1.7e6b82p-32f, 0x1.1be89p-15f,
     0x1.94244ap-56f, 0x1.8e03cp-39f, 0.0f, 0x1.383808p-74f, 0x1.b2a19p-58f,
     0x1.ef66a4p-49f, 0.0f, 0x1.e1f33p-4f, 0.0f, 0x1.9172acp-5f, 0.0f, 0.0f,
     0x1.7e2654p-90f, 0.0f, 0x1.828536p-45f, 0x1p0f, 0.0f, 0x1.316978p-109f, 0.0f,
     0x1.59f224p-36f, 0.0f, 0x1.899874p-91f, 0x1.38fd2ap-25f, 0.0f, 0x1.53277ap-33f,
     0.0f, 0x1.7712e6p-124f, 0x1.5a8968p-61f, 0.0f, 0x1.e758e8p-50f, 0.0f, 0.0f,
     0x1.889ad2p-108f, 0x1.65204ep-61f, 0x1.f9229ap-75f, 0x1.670fc4p-36f,
     0x1.d48286p-22f, 0.0f, 0x1.fa755p-82f, 0.0f, 0x1.952166p-89f, 0.0f,
     0x1.451e72p-52f, 0x1.7b3bfap-73f, 0x1.99032p-37f, 0x1.659018p-124f, 0.0f,
     0x1.7ff354p-58f, 0.0f, 0x1.7ec83cp-32f, 0.0f, 0x1.ec6468p-9f, 0.0f,
     0x1.00510cp-5f, 0x1.855336p-11f, 0.0f, 0.0f, 0.0f, 0x1.f0aa0ep-84f, 0.0f,
     0x1.1c11fcp-98f, 0x1.7d642cp-99f, 0x1.c7ee0cp-71f, 0x1.c6d0d4p-44f, 0.0f, 0.0f,
     0x1.45c5c8p-55f, 0x1.99811p-95f, 0x1.978758p-66f, 0.0f, 0x1.79973ap-28f, 0.0f,
     0.0f, 0x1.67663cp-108f, 0x1.bb0ee2p-41f, 0.0f, 0.0f, 0x1.7e405ap-115f,
     0x1.05ba8ep-36f, 0x1.2b3f8ap-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.951332p-119f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.712376p-35f, 0x1.39d484p-22f, 0x1.6a8f12p-114f, 0.0f,
     0x1.497822p-97f, 0.0f, 0.0f, 0x1.94b858p-112f, 0.0f, 0x1.cf588cp-62f, 0.0f,
     0x1.90fc42p-30f, 0.0f, 0.0f, 0.0f, 0x1.9bae54p-102f, 0x1.3d9f6ep-20f,
     0x1.17acbep-121f, 0x1.997c0ep-119f, 0x1.ce1f14p-48f, 0x1.b70a34p-77f,
     0x1.43d972p-12f, 0x1.0640e4p-103f, 0x1.4ab53ap-59f, 0x1.94ff2ep-117f, 0.0f,
     0x1.6c6dfp-120f, 0.0f, 0x1.8232d6p-102f, 0.0f, 0.0f, 0.0f, 0x1.45b21ap-48f,
     0x1.962d6ap-86f, 0x1.9fd124p-90f, 0x1.68f3f8p-121f, 0x1.40bbb4p-10f, 0.0f, 0.0f,
     0x1.c6278ep-38f, 0x1.ca919cp-9f, 0.0f, 0.0f, 0.0f, 0x1.b5ebc6p-86f,
     0x1.be346p-42f, 0x1.7a6472p-12f, 0.0f, 0x1.0903fcp-74f, 0.0f, 0.0f, 0.0f,
     0x1.9f5fep-21f, 0.0f, 0x1.7acc3cp-119f, 0.0f, 0x1.e946ccp-34f, 0x1.ef17eep-117f,
     0.0f, 0x1.70e534p-92f, 0.0f, 0x1.4f653cp-102f, 0.0f, 0x1.bf5c8p-15f, 0.0f,
     0x1.e9645cp-76f, 0x1.ec15d6p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.131eaap-59f, 0.0f,
     0x1.4df2b2p-58f, 0x1.3b3984p-12f, 0x1.5f2d02p-86f, 0.0f, 0.0f, 0x1.8127d4p-81f,
     0x1.fd6b64p-34f, 0x1.2219bep-59f, 0.0f, 0.0f, 0.0f, 0x1.dad4a8p-7f, 0.0f,
     0x1.9b553ap-89f, 0x1.15356cp-2f, 0x1.ac3abap-79f, 0x1.9097acp-122f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d9eadcp-94f, 0x1.44657ep-32f, 0x1.14472ap-69f, 0.0f,
     0x1.1ba1d6p-86f, 0x1.1c96c2p-66f, 0x1.6a660ep-55f, 0x1.6f8b56p-17f, 0.0f,
     0x1.1ce15ap-63f, 0.0f, 0x1.ea6686p-23f, 0x1.19d912p-122f, 0x1.e13da4p-82f, 0.0f,
     0x1.d8e294p-69f, 0.0f, 0.0f, 0x1.059de8p-67f, 0.0f, 0x1.d9d174p-12f, 0.0f,
     0x1.5fd35ap-97f, 0x1.46152p-85f, 0x1.2d846ep-4f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4fa11p-108f, 0.0f, 0.0f, 0x1.b5211cp-11f, 0x1.e43f26p-82f, 0x1.d1544ep-4f,
     0x1.7bcadep-81f, 0.0f, 0x1.c46f84p-27f, 0.0f, 0.0f, 0.0f, 0x1.ede4cep-9f,
     0x1.c3c27ap-109f, 0x1.ccd9b6p-89f, 0x1.a143fp-57f, 0.0f, 0x1.30d54cp-73f,
     0x1.9c05b6p-90f, 0x1.dbdfacp-126f, 0.0f, 0.0f, 0.0f, 0x1.ab2d8ep-91f, 0.0f,
     0x1.e7071cp-106f, 0x1.201ddcp-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.15ed16p-75f,
     0x1.23bb9ap-16f, 0x1.151eecp-73f, 0.0f, 0x1.546c5ap-97f, 0.0f, 0.0f, 0.0f,
     0x1.eabd42p-42f, 0.0f, 0x1.2c5254p-47f, 0x1.b86344p-18f, 0.0f, 0x1.e2fe96p-61f,
     0.0f, 0.0f, 0.0f, 0x1.b072b4p-66f, 0x1.d380dap-77f, 0.0f, 0x1.7355dp-32f, 0.0f,
     0x1.120388p-18f, 0.0f, 0x1.ba354ap-93f, 0x1.7f7c4cp-52f, 0x1.b301ccp-1f,
     0x1.d6c528p-73f, 0x1.ddb76ap-45f, 0x1.67c7bcp-114f, 0x1.3832c4p-104f,
     0x1.d0b54ap-76f, 0x1.12b5cp-26f, 0x1.a2bd9cp-36f, 0.0f, 0x1.ae8136p-110f, 0.0f,
     0x1.65df56p-126f, 0.0f, 0.0f, 0x1.20d7fcp-87f, 0.0f, 0x1.b70e78p-40f, 0.0f, 0.0f,
     0x1.f89be4p-68f, 0.0f, 0x1.6fac1p-97f, 0.0f, 0.0f, 0x1.6f1e54p-18f,
     0x1.29eb06p-94f, 0x1.4c9174p-66f, 0.0f, 0.0f, 0.0f, 0x1.72331p-71f,
     0x1.1d5b24p-11f, 0x1.fe341ap-86f, 0x1.520c92p-86f, 0x1.53ef1cp-107f, 0.0f,
     0x1.261ce4p-48f, 0.0f, 0x1.25f608p-74f, 0x1.fe3bb8p-121f, 0.0f, 0x1.8ccfp-34f,
     0.0f, 0.0f, 0.0f, 0x1.e03576p-13f, 0x1.b6ed46p-110f, 0.0f, 0.0f,
     0x1.feb1fep-110f, 0x1.ba0f32p-82f, 0x1.429d6cp-80f, 0x1.9fc082p-37f, 0.0f,
     0x1.3e0f3ap-63f, 0x1.8076eep-34f, 0x1.8ead2cp-14f, 0x1.21f034p-49f, 0.0f,
     0x1.1cf4aap-51f, 0.0f, 0x1.8ffdb4p-43f, 0.0f, 0x1.1ba4c8p-29f, 0x1.53b5d8p-38f,
     0.0f, 0x1.7e436p-38f, 0.0f, 0x1.27fbfp-62f, 0.0f, 0.0f, 0x1.d63fcp-112f,
     0x1.2d1254p-109f, 0x1.33e25ap-7f, 0.0f, 0x1.d1e12cp-55f, 0x1.1a77d4p-100f, 0.0f,
     0x1.e5a7ccp-56f, 0x1.06c39ep-78f, 0x1.27360ep-53f, 0.0f, 0.0f, 0x1.26b6fcp-63f,
     0.0f, 0x1.f09d04p-48f, 0x1.9f4804p-64f, 0.0f, 0x1.ca385ap-69f, 0.0f,
     0x1.d5fb6p-36f, 0x1.fbd34ap-74f, 0x1.e2ed2cp-10f, 0x1.0b97fp-106f, 0.0f, 0.0f,
     0x1.7345acp-57f, 0.0f, 0.0f, 0x1.1d1278p-77f, 0x1.595994p-71f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.630a7ap-60f, 0x1.eadd06p-83f, 0x1.75dc18p-60f,
     0x1.26cb2ap-38f, 0.0f, 0.0f, 0x1.6cb7b2p-104f, 0.0f, 0x1.b81e8ep-117f,
     0x1.03f9aep-38f, 0.0f, 0x1.c1c28cp-101f, 0.0f, 0x1.4ba24ap-121f, 0.0f,
     0x1.f3333ap-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e967b6p-94f, 0.0f, 0x1.be7edep-30f,
     0.0f, 0x1.e683f8p-121f, 0x1.191672p-95f, 0.0f, 0x1.ae8dd6p-47f, 0x1.465a6cp-94f,
     0.0f, 0x1.e3ddd6p-37f, 0x1.4204a2p-35f, 0.0f, 0x1.f2bfcep-120f, 0.0f, 0.0f,
     0x1.1a3396p-108f, 0.0f, 0x1.023e0ep-3f, 0.0f, 0x1.969988p-110f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.76b05ep-13f, 0x1.d4769cp-65f, 0.0f, 0.0f, 0x1.13f3a6p-14f, 0.0f, 0.0f,
     0x1.b548e6p-20f, 0x1.e5d3aap-82f, 0x1.69d966p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f79d26p-41f, 0x1.388626p-117f, 0.0f, 0x1.6edea4p-41f, 0x1.4740e2p-114f,
     0x1.a621ap-88f, 0x1.1c0c68p-62f, 0.0f, 0x1.656988p-53f, 0x1.b2ed52p-98f, 0.0f,
     0.0f, 0x1.520ffep-76f, 0x1.9bbc0cp-10f, 0x1.3efae8p-43f, 0.0f, 0x1.04d3b6p-111f,
     0x1.5b0b4p-17f, 0.0f, 0x1.c00de2p-80f, 0x1.2f11d8p-51f, 0.0f, 0x1.73f4f6p-83f,
     0.0f, 0.0f, 0.0f, 0x1.53e946p-43f, 0.0f, 0x1.55884ep-72f, 0.0f, 0x1.d0239ep-47f,
     0x1.225a28p-104f, 0.0f, 0.0f, 0x1.96d8bcp-104f, 0x1.75c9e4p-43f, 0x1.d83682p-58f,
     0.0f, 0x1.f2e40cp-2f, 0.0f, 0x1.d6a868p-39f, 0x1.23bd6p-119f, 0x1.f7658ap-3f,
     0x1.3fe0c8p-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d6694ap-12f, 0.0f, 0.0f,
     0x1.c1a8ccp-64f, 0.0f, 0.0f, 0x1.637adep-26f, 0x1.f690dep-78f, 0x1.5f320cp-103f,
     0x1.cc4a88p-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.477baep-105f, 0x1.a8a03cp-79f,
     0x1.cb4f9p-8f, 0.0f, 0.0f, 0.0f, 0x1.afdf7p-5f, 0.0f, 0.0f, 0x1.cb7af8p-108f,
     0x1.bc03eap-76f, 0x1.ca5ffap-63f, 0x1.daab8cp-53f, 0x1.0dbb4p-39f,
     0x1.94eb56p-75f, 0x1.cbcb6p-56f, 0x1.cd935ep-105f, 0.0f, 0x1.caf066p-41f,
     0x1.d1a544p-103f, 0.0f, 0x1.05e99ep-79f, 0x1.be330ep-91f, 0.0f, 0x1.97eaeap-10f,
     0.0f, 0x1.e3ec54p-112f, 0.0f, 0x1.dd7002p-110f, 0.0f, 0x1.bfee94p-2f, 0.0f,
     0x1.087d6ap-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d0151ep-105f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9dde3ep-43f, 0x1.ea27d4p-58f, 0.0f, 0.0f, 0x1.8dae1cp-54f, 0x1.903dbep-77f,
     0.0f, 0.0f, 0x1.0154b4p-29f, 0.0f, 0.0f, 0.0f, 0x1.2f1bacp-92f, 0x1.8463f8p-18f,
     0.0f, 0x1.fde536p-18f, 0x1.0a5bc6p-1f, 0x1.4ec5ep-114f, 0x1.df904ap-87f, 0.0f,
     0x1.9ea7aep-44f, 0.0f, 0.0f, 0x1.390d2ep-61f, 0x1.65f62p-29f, 0.0f,
     0x1.563766p-4f, 0.0f, 0.0f, 0x1.9f705cp-70f, 0.0f, 0x1.967d94p-102f,
     0x1.6b717p-105f, 0.0f, 0x1.d082bap-92f, 0.0f, 0x1.a46dbcp-11f, 0.0f,
     0x1.240d54p-79f, 0x1.aa6748p-61f, 0x1.ccf99ap-116f, 0x1.1c9aeap-72f, 0.0f,
     0x1.b5a36p-35f, 0.0f, 0.0f, 0.0f, 0x1.35dea6p-98f, 0x1.b3f56cp-126f,
     0x1.1c59eap-12f, 0.0f, 0x1.d5f196p-22f, 0.0f, 0.0f, 0x1.578b2ep-68f, 0.0f, 0.0f,
     0x1.853964p-115f, 0x1.3c842ap-41f, 0x1.87d3cep-23f, 0.0f, 0.0f, 0x1.1181cap-73f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9a0bbep-40f, 0.0f, 0.0f,
     0x1.c1771cp-123f, 0x1.cc62acp-126f, 0.0f, 0x1.1c2e2p-98f, 0x1.acc3eep-61f,
     0x1.535ccap-66f, 0x1.fd677p-100f, 0.0f, 0x1.d80dfap-125f, 0.0f, 0x1.1afab2p-92f,
     0x1.d3155p-100f, 0.0f, 0.0f, 0x1.5d3c9cp-44f, 0x1.1506f8p-90f, 0x1.aa988cp-95f,
     0x1.5b93d4p-40f, 0.0f, 0.0f, 0x1.8c54dp-88f, 0x1.91c244p-98f, 0x1.e1f264p-97f,
     0.0f, 0x1.1673c4p-123f, 0x1.62377cp-5f, 0.0f, 0x1.12dccep-96f, 0x1.57edeep-49f,
     0x1.8290dp-92f, 0.0f, 0.0f, 0x1.1be83p-80f, 0.0f, 0.0f, 0x1.158ceap-76f, 0.0f,
     0.0f, 0x1.099232p-119f, 0x1.48a53ep-66f, 0x1.02945ap-84f, 0.0f, 0.0f,
     0x1.cc6fdcp-57f, 0.0f, 0x1.66b226p-123f, 0.0f, 0.0f, 0x1.d10c48p-46f, 0.0f,
     0x1.b854c2p-88f, 0.0f, 0.0f, 0x1.e01f5p-54f, 0.0f, 0x1.41215p-116f, 0.0f,
     0x1.2c3764p-21f, 0.0f, 0.0f, 0x1.a2ee9cp-49f, 0.0f, 0x1.22366p-8f,
     0x1.88503cp-13f, 0.0f, 0x1.8549c2p-32f, 0.0f, 0.0f, 0x1.ff53bap-56f,
     0x1.48c89ap-65f, 0.0f, 0.0f, 0.0f, 0x1.03bb5ap-100f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.454bep-57f, 0.0f, 0x1.882424p-74f, 0.0f, 0.0f, 0.0f,
     0x1.361dc4p-17f, 0.0f, 0.0f, 0x1.512bd2p-47f, 0x1.bd2398p-42f, 0x1.b6cf0ep-25f,
     0.0f, 0.0f
};
static const float external_bench_wrapper_input_table_arg1[1001]  = {
     0.0f, 0.0f, 0x1.2e9712p-96f, 0.0f, 0.0f, 0x1.43e8bap-45f, 0.0f, 0.0f,
     0x1.6dadeap-42f, 0.0f, 0.0f, 0.0f, 0x1.ab257ep-68f, 0.0f, 0x1.5e8d8ep-108f, 0.0f,
     0x1.e8b7e8p-74f, 0x1.acb242p-43f, 0.0f, 0.0f, 0x1.9ed3dep-65f, 0x1.6f7486p-60f,
     0.0f, 0.0f, 0x1.928bc6p-29f, 0x1.ec2b88p-16f, 0.0f, 0x1.010e84p-55f,
     0x1.0911dcp-9f, 0x1.2e0dd4p-22f, 0x1.9cda3ep-69f, 0x1.c4fc4ep-17f,
     0x1.73158ap-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0833c4p-44f, 0.0f, 0.0f, 0.0f,
     0x1.cff9eep-86f, 0x1.cbbf38p-69f, 0x1.f90ad4p-63f, 0.0f, 0x1.b3131cp-117f,
     0x1.67bfb6p-121f, 0.0f, 0x1.fb8bdcp-98f, 0x1.53770cp-36f, 0.0f, 0.0f, 0.0f,
     0x1.d3ca2cp-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.585c24p-57f, 0.0f,
     0x1.74c31cp-117f, 0.0f, 0.0f, 0x1.bd86aep-24f, 0x1.af1142p-64f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.0580b4p-123f, 0x1.92c4d6p-62f, 0.0f, 0.0f, 0x1.4ca16ap-50f, 0.0f,
     0x1.310d74p-63f, 0.0f, 0x1.a0898ap-83f, 0.0f, 0.0f, 0.0f, 0x1.f2dcf2p-19f, 0.0f,
     0x1.f45242p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cf43d2p-72f, 0.0f,
     0x1.ed8454p-91f, 0x1.2bd036p-59f, 0.0f, 0x1.6cd538p-12f, 0.0f, 0.0f,
     0x1.cb2d5cp-96f, 0x1.69f56ap-119f, 0.0f, 0x1.a2605ep-17f, 0x1.3bfdbcp-75f, 0.0f,
     0x1.23e9cp-59f, 0.0f, 0.0f, 0x1.59198p-33f, 0x1.5282eap-23f, 0.0f,
     0x1.4e70c8p-12f, 0.0f, 0.0f, 0x1.8609fep-54f, 0.0f, 0x1.cd4328p-73f,
     0x1.687ec2p-44f, 0.0f, 0.0f, 0.0f, 0x1.37421cp-58f, 0.0f, 0x1.044f2ep-17f,
     0x1.cd940ep-2f, 0x1.2729bap-30f, 0.0f, 0x1.cc5574p-40f, 0x1.3da0e4p-11f,
     0x1.e638d2p-110f, 0x1.c8215ep-102f, 0x1.a9b51ep-31f, 0x1.61b5aep-114f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d627bap-30f, 0x1.7414d8p-15f, 0.0f, 0x1.f4ae4p-24f,
     0.0f, 0.0f, 0.0f, 0x1.92e14ap-8f, 0x1.4953f2p-33f, 0.0f, 0x1.43fc12p-12f,
     0x1.94bf4cp-63f, 0x1.e5185ep-107f, 0.0f, 0.0f, 0.0f, 0x1.ac4edp-85f,
     0x1.98a3e6p-87f, 0.0f, 0x1.5208d4p-33f, 0x1.f0b26cp-24f, 0.0f, 0.0f, 0.0f,
     0x1.713ce8p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fee6d6p-58f, 0.0f, 0.0f,
     0.0f, 0x1.5f456ep-42f, 0x1.ff13aap-26f, 0x1.399b5p-50f, 0x1.34c834p-84f, 0.0f,
     0x1.317608p-120f, 0.0f, 0.0f, 0x1.265d06p-6f, 0.0f, 0.0f, 0x1.f28042p-56f, 0.0f,
     0.0f, 0.0f, 0x1.79bf3p-84f, 0x1.c83e56p-118f, 0x1.a8167ep-68f, 0x1.b240bap-10f,
     0.0f, 0.0f, 0x1.afe894p-66f, 0x1.c48194p-68f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f0650cp-123f, 0x1.c7486ap-72f, 0.0f, 0x1.e9cd88p-20f, 0x1.bbf3d2p-81f,
     0x1.dd699ep-6f, 0x1.4b0464p-71f, 0.0f, 0.0f, 0x1.c93cc2p-56f, 0.0f, 0.0f,
     0x1.108d74p-10f, 0x1.4fdb26p-107f, 0.0f, 0.0f, 0x1.b60a9ep-52f, 0.0f,
     0x1.f5ffaep-121f, 0x1.31a788p-56f, 0x1.164be6p-7f, 0.0f, 0.0f, 0x1.f7f272p-14f,
     0x1.90334ap-6f, 0.0f, 0x1.74848ep-2f, 0.0f, 0.0f, 0x1.a651fcp-92f, 0.0f, 0.0f,
     0x1.3b212ep-92f, 0.0f, 0.0f, 0x1.4161ap-110f, 0x1.7cf6e8p-99f, 0x1.3a7f74p-77f,
     0x1.2b369p-100f, 0.0f, 0x1.f6c79cp-63f, 0x1.ba603ap-113f, 0.0f, 0x1.118022p-76f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.17ba2cp-44f, 0.0f, 0.0f, 0x1.4d40fap-48f,
     0x1.3cb022p-1f, 0.0f, 0.0f, 0.0f, 0x1.62a512p-30f, 0x1.310a0cp-2f, 0.0f,
     0x1.8e7cb2p-91f, 0.0f, 0x1.a46c36p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9e1924p-33f,
     0x1.e1463ap-19f, 0x1.c03e48p-7f, 0.0f, 0.0f, 0x1.1ff3ep-60f, 0.0f, 0.0f, 0.0f,
     0x1.0fe1acp-98f, 0x1.8a0186p-120f, 0x1.eff3dap-68f, 0.0f, 0.0f, 0.0f,
     0x1.e603a2p-27f, 0x1.a19aecp-80f, 0x1.19b62ep-112f, 0.0f, 0x1.6fd172p-114f, 0.0f,
     0x1.0ad226p-73f, 0x1.4c512cp-59f, 0.0f, 0.0f, 0x1.319f5ap-126f, 0x1.0a3268p-42f,
     0x1.dd6a7ap-93f, 0.0f, 0x1.0d0026p-44f, 0.0f, 0x1.861e86p-68f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.2c9944p-43f, 0.0f, 0.0f, 0.0f, 0x1.a3977ep-58f, 0.0f, 0x1.e5f2f4p-106f,
     0.0f, 0.0f, 0x1.c09754p-118f, 0.0f, 0x1.ccb59p-30f, 0x1.c1fa8cp-47f,
     0x1.de75c6p-43f, 0x1.519434p-113f, 0x1.995d54p-89f, 0.0f, 0x1.a884b2p-102f,
     0x1.7d1ef6p-67f, 0x1.335ca4p-73f, 0x1.67fc6ap-42f, 0x1.486f52p-117f,
     0x1.c2f45p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c6357ap-75f, 0.0f, 0.0f, 0.0f,
     0x1.c2d5d2p-96f, 0.0f, 0x1.1f313ep-79f, 0x1.7b838ep-52f, 0x1.1977aep-123f,
     0x1.a4ccc8p-21f, 0x1.0933bp-123f, 0x1.6c6022p-79f, 0.0f, 0x1.8408d8p-26f,
     0x1.7e9ce6p-113f, 0x1.34b8d6p-31f, 0x1.92966cp-14f, 0.0f, 0x1.eb0912p-80f,
     0x1.cb08e2p-39f, 0x1.0fe8b6p-65f, 0.0f, 0x1.bedcdp-80f, 0x1.5d0d8p-69f, 0.0f,
     0x1.d90748p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3f5652p-83f, 0.0f, 0.0f,
     0x1.d5f926p-84f, 0x1.da6ac4p-16f, 0x1.d0f12ep-75f, 0x1.1d3874p-31f, 0.0f,
     0x1.1d991ap-86f, 0x1.5f79aep-70f, 0x1.0d603p-101f, 0x1.62790ep-86f,
     0x1.8fd8b6p-119f, 0.0f, 0x1.cdccd4p-85f, 0.0f, 0x1.41192cp-47f, 0.0f, 0.0f, 0.0f,
     0x1.9f5edep-29f, 0x1.ff491cp-19f, 0x1.681a4p-96f, 0x1.721f68p-55f, 0.0f,
     0x1.194c4ap-57f, 0x1.7de4dap-27f, 0x1.565c54p-77f, 0.0f, 0x1.7c251ap-114f, 0.0f,
     0.0f, 0.0f, 0x1.81999p-115f, 0x1.80b8cep-79f, 0.0f, 0.0f, 0x1.f5b2fp-65f,
     0x1.78baep-73f, 0x1.d81a68p-122f, 0x1.fdd422p-28f, 0.0f, 0x1.a42afep-107f,
     0x1.3fdef6p-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6cdf32p-58f, 0x1.407a4p-28f,
     0.0f, 0.0f, 0x1.14860cp-72f, 0x1.ea6fd8p-125f, 0.0f, 0x1.853dfep-68f,
     0x1.c9cfd2p-42f, 0.0f, 0x1.24eda4p-106f, 0x1.1b226cp-92f, 0x1.801cc8p-117f, 0.0f,
     0.0f, 0x1.572bd8p-91f, 0x1.c1c5bp-123f, 0x1.21903p-96f, 0x1.3e8086p-13f, 0.0f,
     0.0f, 0x1.3ac0ep-22f, 0x1.f6f316p-73f, 0x1.2f425cp-70f, 0x1.c230eep-66f,
     0x1.8413a2p-62f, 0x1.6ef92ep-39f, 0.0f, 0x1.56375cp-61f, 0x1.25476ep-24f,
     0x1.f49a8cp-124f, 0.0f, 0.0f, 0x1.0729b8p-97f, 0x1.ad429ap-2f, 0x1.9e48ep-6f,
     0x1.8bee08p-101f, 0x1.a8801ep-46f, 0.0f, 0.0f, 0x1.b47446p-123f, 0.0f, 0.0f,
     0x1.a8a6fcp-47f, 0x1.d1aca8p-86f, 0x1.edb59p-15f, 0.0f, 0x1.23cbd2p-34f, 0.0f,
     0x1.bf6a4cp-110f, 0x1.3e9586p-119f, 0x1.d59d74p-50f, 0x1.b8fbep-1f,
     0x1.c9d13ep-23f, 0x1.8bd4p-50f, 0x1.919f6ep-11f, 0x1.3e5368p-83f,
     0x1.bae8fap-26f, 0x1.d0af5ap-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6b5d68p-122f,
     0.0f, 0.0f, 0x1.cd5fbcp-8f, 0.0f, 0x1.817182p-125f, 0x1.1f9cdap-126f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c6e7dp-105f, 0x1.bc5c6p-120f, 0x1.9b79d4p-78f, 0.0f, 0.0f,
     0x1.b5b46cp-50f, 0x1.3f351cp-4f, 0.0f, 0x1.4dba7ep-70f, 0x1.856eeep-120f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.7863aep-71f, 0.0f, 0.0f, 0x1.14d796p-78f, 0.0f, 0.0f, 0.0f,
     0x1.aa8608p-84f, 0.0f, 0x1.0a5fd2p-65f, 0.0f, 0.0f, 0.0f, 0x1.fae6f2p-55f, 0.0f,
     0x1.199a0ap-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f0a62p-77f, 0.0f, 0.0f,
     0x1.de4c74p-44f, 0x1.0df2ccp-68f, 0.0f, 0x1.f596dp-88f, 0x1.9aa81ep-80f,
     0x1.621ab8p-9f, 0x1.7caee2p-97f, 0x1.b4ab92p-32f, 0x1.37bcf2p-43f,
     0x1.89fc34p-61f, 0x1.9baeeep-46f, 0.0f, 0.0f, 0x1.e88fecp-34f, 0.0f,
     0x1.191794p-26f, 0x1.b181a4p-93f, 0x1.f6e3d8p-104f, 0x1.2c8e02p-38f, 0.0f, 0.0f,
     0x1.3b73cep-104f, 0x1.770c56p-48f, 0x1.51d676p-113f, 0.0f, 0.0f, 0x1.2a5406p-28f,
     0x1.e7daf6p-36f, 0x1.b145e8p-36f, 0x1.2ec79p-32f, 0.0f, 0.0f, 0x1.ce4412p-118f,
     0x1.586032p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.79d3fp-20f, 0x1.cf3a8cp-41f,
     0x1.968466p-116f, 0x1.7d6392p-109f, 0.0f, 0.0f, 0x1.46add6p-13f, 0x1.cf4378p-62f,
     0x1.1d05aep-21f, 0x1.999942p-56f, 0.0f, 0x1.272014p-97f, 0x1.674f4ap-15f, 0.0f,
     0.0f, 0x1.41836ap-60f, 0.0f, 0.0f, 0.0f, 0x1.2a4b2p-2f, 0.0f, 0.0f,
     0x1.97b9bep-112f, 0.0f, 0.0f, 0x1.083b28p-19f, 0.0f, 0x1.c4bafep-74f, 0.0f,
     0x1.27a844p-86f, 0.0f, 0x1.445422p-117f, 0x1.28f192p-114f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.313d5ap-87f, 0.0f, 0.0f, 0.0f, 0x1.e2314ap-113f, 0.0f, 0x1.cb5328p-16f,
     0x1.37b028p-47f, 0x1.3227e2p-50f, 0x1.f987e8p-11f, 0x1.0408c6p-93f, 0.0f, 0.0f,
     0x1.6d7976p-23f, 0x1.63398ep-98f, 0.0f, 0x1.ccee92p-93f, 0.0f, 0x1.44ac36p-93f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.27621p-75f, 0x1.9d75c6p-67f, 0x1.0d97cp-103f,
     0.0f, 0.0f, 0.0f, 0x1.3c108ap-41f, 0x1.e5994cp-76f, 0x1.024a5cp-59f, 0.0f,
     0x1.5af12p-115f, 0.0f, 0.0f, 0.0f, 0x1.f22a24p-108f, 0.0f, 0x1.a9914ap-34f, 0.0f,
     0.0f, 0x1.5a24e2p-101f, 0.0f, 0x1.565e98p-103f, 0.0f, 0x1.7231f2p-45f,
     0x1.af093ap-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fdc52ep-92f, 0x1.63416cp-13f,
     0x1.cfa3ap-39f, 0.0f, 0x1.30f1ep-32f, 0.0f, 0.0f, 0x1.17919cp-117f,
     0x1.4a5e62p-118f, 0x1.468bdap-110f, 0x1.a463ecp-39f, 0.0f, 0.0f, 0x1.a29bp-2f,
     0.0f, 0.0f, 0x1.442b7ap-1f, 0.0f, 0x1.047ce8p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b2f88ep-21f, 0.0f, 0.0f, 0.0f, 0x1.4dcadcp-75f, 0x1.30d5ap-126f, 0.0f,
     0.0f, 0x1.d14d52p-14f, 0x1.9c096ap-37f, 0.0f, 0x1.3a0118p-6f, 0.0f,
     0x1.6919cep-84f, 0.0f, 0x1.2c9812p-79f, 0.0f, 0x1.dbb4fp-20f, 0.0f,
     0x1.7a934cp-62f, 0x1.c18cf4p-119f, 0x1.dbef36p-111f, 0x1.021ffap-31f,
     0x1.683c6cp-5f, 0.0f, 0x1.0542fap-4f, 0x1.db4a24p-97f, 0.0f, 0x1.c694bap-86f,
     0x1.53c3b4p-61f, 0.0f, 0.0f, 0.0f, 0x1.5c899ap-5f, 0.0f, 0x1.559b6ap-55f,
     0x1.fab84cp-46f, 0.0f, 0.0f, 0x1.d91f92p-62f, 0x1.200ebp-43f, 0x1.54075ap-15f,
     0x1.77e7f6p-62f, 0.0f, 0.0f, 0x1.3ba604p-73f, 0x1.ccad44p-22f, 0.0f,
     0x1.27d906p-70f, 0x1.b5c362p-89f, 0x1.83988cp-92f, 0.0f, 0x1.e608eap-37f,
     0x1.203718p-7f, 0x1.34934p-109f, 0x1.5683b6p-38f, 0x1.4f83f2p-49f, 0.0f,
     0x1.5a685p-56f, 0x1.546a94p-19f, 0.0f, 0.0f, 0x1.23291ap-71f, 0.0f, 0.0f,
     0x1.3a12f4p-58f, 0.0f, 0x1.d8ce8ap-63f, 0x1.68569p-67f, 0x1.028428p-101f,
     0x1.e92cdep-83f, 0x1.1c376cp-85f, 0.0f, 0x1.a8b016p-5f, 0x1.f70d3ap-31f,
     0x1.dc7f46p-72f, 0.0f, 0x1.1e6f5cp-79f, 0.0f, 0x1.dc8736p-87f, 0x1.359338p-5f,
     0x1.8c780ap-53f, 0.0f, 0.0f, 0x1.19363ap-13f, 0.0f, 0x1.4764dcp-21f, 0.0f,
     0x1.452cbap-114f, 0x1.096964p-59f, 0x1.f85138p-62f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.019fc4p-92f, 0x1.5d763p-101f, 0.0f, 0x1.b228bcp-121f, 0.0f, 0.0f, 0.0f,
     0x1.075236p-20f, 0x1.6d1322p-60f, 0x1.dbf1a8p-61f, 0.0f, 0x1.17c7e8p-103f,
     0x1.5c2c54p-91f, 0.0f, 0x1.89f492p-26f, 0.0f, 0x1.fce1dp-90f, 0.0f, 0.0f,
     0x1.73eab2p-107f, 0.0f, 0.0f, 0x1.065372p-126f, 0x1.d8261p-3f, 0.0f, 0.0f,
     0x1.06513cp-81f, 0.0f, 0x1.41d1a6p-14f, 0x1.b8f574p-33f, 0x1.c9202p-109f,
     0x1.737f1p-114f, 0x1.23a98cp-56f, 0x1.b218eep-121f, 0x1.5c8d26p-90f, 0.0f, 0.0f,
     0x1.a354e8p-34f, 0.0f, 0.0f, 0x1.989e74p-4f, 0x1.0450a4p-87f, 0x1.ab53d2p-61f,
     0x1.5bc5a4p-61f, 0x1.82b46cp-13f, 0.0f, 0x1.837b6ep-76f, 0x1.0acb18p-13f, 0.0f,
     0.0f, 0.0f, 0x1.f7da44p-1f, 0.0f, 0x1.9db2d2p-103f, 0x1.b44ae8p-27f,
     0x1.3a9328p-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.52c5dap-83f, 0.0f,
     0x1.4f737p-40f, 0x1.cd46e8p-5f, 0x1.6dab08p-79f, 0x1.8f471p-17f, 0.0f,
     0x1.55f7a6p-1f, 0.0f, 0.0f, 0x1.9868eep-70f, 0x1.2982cep-86f, 0.0f,
     0x1.75f482p-60f, 0x1.3db3a2p-28f, 0.0f, 0.0f, 0x1.3d01p-67f, 0.0f, 0.0f, 0.0f,
     0x1.f6e4bap-71f, 0x1.e37ec8p-105f, 0.0f, 0.0f, 0.0f, 0x1.cb0ff6p-126f, 0.0f,
     0x1.438ee8p-84f, 0x1.fd6f4ap-116f, 0x1.78ac04p-95f, 0.0f, 0x1.22a7bep-103f, 0.0f,
     0.0f, 0x1.c0f194p-79f, 0.0f, 0.0f, 0.0f, 0x1.648e94p-74f, 0.0f, 0x1.0c2bf6p-5f,
     0x1.33efc4p-103f, 0.0f, 0.0f, 0.0f, 0x1.59852cp-33f, 0.0f, 0.0f, 0x1.a623cp-21f,
     0x1.3c25a6p-125f, 0x1.c17836p-35f, 0.0f, 0.0f, 0x1.f75cc4p-34f, 0.0f, 0.0f,
     0x1.de265ap-85f, 0x1.c2e672p-49f, 0.0f, 0x1.176598p-19f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3fb9d4p-104f, 0x1.470d12p-50f, 0x1.74784p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.488ed2p-8f, 0x1.7f54d4p-47f, 0.0f, 0x1.59e2bep-100f, 0x1.ee9cf4p-64f,
     0x1.26f112p-106f, 0x1.71fe0ep-124f, 0x1.51761ap-11f, 0.0f, 0.0f, 0.0f,
     0x1.755becp-7f, 0.0f, 0.0f, 0.0f, 0x1.62f12p-18f, 0.0f, 0x1.a3787ap-20f, 0.0f,
     0.0f, 0x1.e0c678p-104f, 0x1.995f42p-109f, 0.0f, 0x1.3bd12cp-126f, 0.0f,
     0x1.2ac6bcp-114f, 0x1.0b7f04p-24f, 0.0f, 0.0f, 0x1.3f1c0cp-122f, 0x1.e688fep-40f,
     0.0f, 0x1.fe035ep-48f, 0.0f, 0x1.f8918p-78f, 0x1.19d38p-126f, 0x1.bcc2a2p-115f,
     0.0f, 0x1.936dc2p-40f, 0x1.347f44p-111f, 0.0f, 0x1.a988fap-121f, 0x1.02128p-95f,
     0x1.2c6bcap-90f, 0.0f, 0.0f, 0.0f, 0x1.ad8648p-94f, 0x1.76d87p-82f,
     0x1.83aaf8p-12f, 0.0f, 0.0f, 0x1.2337ap-103f, 0.0f, 0x1.ddcdd4p-3f, 0.0f,
     0x1.f250fap-5f, 0x1.3abf9ep-102f, 0.0f, 0x1.08e6c2p-41f, 0x1.5b4a6cp-109f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b14192p-99f, 0.0f, 0.0f, 0.0f, 0x1.747524p-75f,
     0x1.beb6bcp-117f, 0x1.8d745p-64f, 0.0f, 0x1.e1aabap-58f, 0.0f, 0x1.abf788p-118f,
     0.0f, 0x1.984a4ap-15f, 0.0f, 0x1.992b34p-64f, 0x1.179094p-62f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.95ab28p-31f, 0x1.d2f844p-38f, 0x1.ac8c9cp-27f,
     0x1.261236p-43f, 0x1.499c1cp-114f, 0x1.054804p-113f, 0.0f
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
            float tmp3;
            int32_t tmp4;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = external_bench_wrapper_input_table_arg1[i];
            tmp2 = Sleef_atan2f1_u35purecfma(tmp0, tmp1);
            external_bench_wrapper_output_table[i] = tmp2;
            tmp3 = bench_acc + tmp2;
            bench_acc = tmp3;
            tmp4 = i + INT32_C(1);
            i = tmp4;
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
    printf("Sleef_atan2f1_u35purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_atan2f1_u35purecfma bench acc %a\n", global_bench_acc);
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
