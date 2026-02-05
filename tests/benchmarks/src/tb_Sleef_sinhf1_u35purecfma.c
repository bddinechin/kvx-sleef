/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sinhf1_u35purecfma.c --function \
 *     Sleef_sinhf1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0.0f, 0.0f, 0x1.6552bcp-48f, 0x1.421d12p-38f, 0x1.dc2388p-97f, 0.0f,
     0x1.71c4ep-62f, 0.0f, 0x1.4e4c76p-26f, 0.0f, 0.0f, 0x1.3bc172p-5f, 0.0f, 0.0f,
     0x1.bdf378p-92f, 0.0f, 0.0f, 0x1.ad7c28p-76f, 0.0f, 0.0f, 0.0f, 0x1.6d520cp-54f,
     0.0f, 0x1.26f948p-29f, 0.0f, 0x1.8bd23ap-123f, 0.0f, 0x1p0f, 0x1.e6cd7cp-53f,
     0x1.d4fd4p-86f, 0.0f, 0x1.12aa9cp-33f, 0x1.5cf852p-118f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.89d44ap-106f, 0.0f, 0x1.f3c2b2p-47f, 0x1.2038e6p-45f, 0x1.5d4818p-43f, 0.0f,
     0x1.fc513cp-37f, 0.0f, 0x1.c603bp-125f, 0.0f, 0x1.9d14eap-44f, 0x1.6b01e8p-15f,
     0x1.dd4d22p-33f, 0.0f, 0x1.ebab9cp-118f, 0x1.1e4c98p-64f, 0x1.e9e86ap-103f,
     0x1.6f26d6p-110f, 0x1.3fabc8p-58f, 0x1.813b4ap-32f, 0x1.d4419ep-61f,
     0x1.52959ap-54f, 0x1.3dd608p-27f, 0x1.7bf318p-106f, 0.0f, 0.0f, 0x1.d7baa8p-18f,
     0.0f, 0.0f, 0.0f, 0x1.515c22p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e7f37p-82f, 0x1.dd759ap-73f, 0.0f, 0x1.05234cp-91f, 0x1.9899c6p-21f,
     0.0f, 0.0f, 0x1.59c518p-40f, 0x1.5d0abcp-7f, 0x1.c59722p-82f, 0x1.de1e3ep-121f,
     0.0f, 0x1.f6517cp-82f, 0x1.dfafa6p-111f, 0x1.624116p-62f, 0.0f, 0x1.79cbep-6f,
     0x1.c99e16p-27f, 0.0f, 0x1.16560ep-6f, 0x1.cebd8cp-61f, 0.0f, 0.0f,
     0x1.5437d8p-47f, 0.0f, 0x1.17dd3cp-75f, 0x1.113e58p-88f, 0.0f, 0.0f, 0.0f,
     0x1.236876p-94f, 0x1.299e1ap-29f, 0.0f, 0x1.edc7bp-55f, 0.0f, 0x1.81f94ap-112f,
     0x1.92557ep-3f, 0.0f, 0x1.3c2a6p-25f, 0.0f, 0.0f, 0x1.8f26e6p-55f,
     0x1.b699e8p-78f, 0x1.78b31p-4f, 0x1.2d5d9ap-62f, 0.0f, 0x1.75f236p-31f,
     0x1.e39f88p-9f, 0x1.99df2ep-39f, 0x1.4db6cp-73f, 0.0f, 0.0f, 0.0f,
     0x1.7456c6p-106f, 0x1.3a495ep-20f, 0x1.8e5424p-43f, 0.0f, 0x1.8971acp-44f,
     0x1.bded9ap-72f, 0x1.8b5b8ep-112f, 0x1.c06cap-102f, 0x1.264d3ap-20f,
     0x1.a7641p-28f, 0.0f, 0.0f, 0x1.cd49eep-94f, 0x1.cbf456p-106f, 0x1.076ddap-11f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b1efdp-2f, 0x1.c36b4ap-17f,
     0x1.cc24aep-37f, 0x1.06f5d2p-88f, 0x1.cc4f2ap-85f, 0.0f, 0x1.01e8c8p-98f,
     0x1.cf176p-10f, 0.0f, 0.0f, 0x1.7cc582p-95f, 0.0f, 0x1.5b2c7cp-91f,
     0x1.f06578p-123f, 0x1.b1ef2ap-102f, 0x1.389d72p-17f, 0x1.61602ap-122f, 0.0f,
     0.0f, 0x1.61293ap-114f, 0.0f, 0.0f, 0x1.ea05fcp-126f, 0x1.9e013p-76f, 0.0f, 0.0f,
     0.0f, 0x1.6663cep-69f, 0x1.04b862p-96f, 0x1.d1fc74p-20f, 0.0f, 0x1.08dfcp-81f,
     0x1.f89e3cp-120f, 0x1.5ed928p-109f, 0.0f, 0x1.dae62ap-97f, 0.0f, 0.0f,
     0x1.72c7bap-106f, 0.0f, 0x1.55c722p-9f, 0x1.613e96p-57f, 0x1.dedcfp-93f,
     0x1.4f8d04p-31f, 0x1.b8c5c4p-24f, 0x1.5782d6p-33f, 0x1.35bacp-43f, 0.0f,
     0x1.cc2cd6p-42f, 0x1.00031ep-26f, 0x1.e88b7cp-43f, 0x1.d196eap-66f, 0.0f, 0.0f,
     0x1.7f2d06p-20f, 0.0f, 0x1.a30f2cp-114f, 0.0f, 0.0f, 0.0f, 0x1.e6262p-47f,
     0x1.a64062p-2f, 0x1.076a6ap-34f, 0x1.1b384cp-65f, 0x1.c8958ap-50f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.5dd2a2p-55f, 0x1.8746fp-68f, 0x1.b2e2cep-13f, 0x1.94e39cp-58f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f43882p-77f, 0.0f, 0.0f, 0x1.f86184p-68f, 0.0f, 0.0f,
     0x1.079e7cp-105f, 0x1.917fe4p-11f, 0x1.cc64d4p-21f, 0.0f, 0x1.91db6cp-16f, 0.0f,
     0.0f, 0x1.4c3b4p-62f, 0.0f, 0.0f, 0x1.5ceef2p-13f, 0.0f, 0x1.56296p-76f, 0.0f,
     0x1.e011a4p-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c0bd18p-38f, 0x1.6ce134p-94f,
     0x1.4233ccp-104f, 0x1.22a5fcp-79f, 0x1.855674p-94f, 0x1.7a2dc2p-120f,
     0x1.cfae6cp-12f, 0.0f, 0x1.1590cep-40f, 0.0f, 0x1.08bcb2p-28f, 0x1.894804p-65f,
     0x1.2cf4bap-1f, 0.0f, 0.0f, 0x1.d7da66p-72f, 0x1.243d7cp-37f, 0x1.7fc8p-1f,
     0x1.5457cap-125f, 0.0f, 0x1.672e4cp-10f, 0.0f, 0x1.7ef1bp-113f, 0x1.fa1c7ep-103f,
     0.0f, 0.0f, 0x1.338916p-92f, 0.0f, 0.0f, 0x1.a1802ep-82f, 0.0f, 0x1.12931cp-31f,
     0x1.5638f4p-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.19390ap-81f, 0.0f, 0.0f,
     0x1.1f53c6p-54f, 0x1.3eb26ap-36f, 0.0f, 0.0f, 0.0f, 0x1.aa726cp-41f, 0.0f,
     0x1.fa11e4p-53f, 0.0f, 0.0f, 0x1.9fe946p-114f, 0.0f, 0x1.a7596cp-120f,
     0x1.47d2c6p-32f, 0x1.918d8cp-63f, 0x1.5e2156p-103f, 0x1.3f29ep-46f, 0.0f,
     0x1.07a9f6p-99f, 0x1.55dcbep-6f, 0.0f, 0.0f, 0x1.5ea812p-117f, 0.0f, 0.0f,
     0x1.a704p-88f, 0x1.e4f2fcp-55f, 0x1.758dfp-14f, 0x1.388778p-87f, 0x1.e7cf32p-71f,
     0.0f, 0.0f, 0x1.f3e824p-79f, 0.0f, 0.0f, 0.0f, 0x1.c6071ep-122f, 0.0f, 0.0f,
     0x1.3ba482p-8f, 0.0f, 0.0f, 0x1.08b7aap-75f, 0x1.5d616cp-4f, 0.0f,
     0x1.8c22cap-29f, 0.0f, 0.0f, 0x1.6b535ap-126f, 0x1.c72edp-39f, 0x1.c9ed36p-116f,
     0x1.550618p-46f, 0x1.ea43dap-97f, 0.0f, 0x1.7c41a8p-9f, 0.0f, 0x1.bc64bp-97f,
     0x1.68decap-70f, 0x1.c8ffacp-39f, 0x1.5b688ap-15f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.acaf78p-49f, 0x1p0f, 0x1.ff93a6p-58f, 0.0f, 0x1.8903eap-53f, 0.0f,
     0x1.ad055p-99f, 0.0f, 0x1.52002ep-55f, 0x1.5b427cp-115f, 0x1.080ea2p-9f, 0.0f,
     0x1.605232p-5f, 0.0f, 0x1.09c944p-72f, 0.0f, 0.0f, 0.0f, 0x1.83bfbp-60f,
     0x1.70cecap-126f, 0.0f, 0.0f, 0x1.bebee4p-47f, 0x1.9ec60ep-71f, 0x1.4dcdb8p-118f,
     0x1.1a461ap-111f, 0x1.c040c4p-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.325b36p-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.663d06p-19f, 0x1.c0e06cp-62f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.7187cp-116f, 0x1.cdaef8p-101f, 0.0f, 0x1.7ca078p-122f,
     0x1.7849bp-19f, 0.0f, 0x1.882434p-67f, 0.0f, 0x1.c30352p-22f, 0.0f,
     0x1.aa7cb6p-92f, 0.0f, 0x1.f36f4p-14f, 0.0f, 0.0f, 0x1.61cddap-57f,
     0x1.b02034p-39f, 0x1.9b25d4p-70f, 0x1.123b32p-109f, 0x1.74fd9ep-116f,
     0x1.6d2c8ap-76f, 0x1.747944p-50f, 0x1.bf9374p-94f, 0.0f, 0x1.da9daap-92f,
     0x1.4de03ep-59f, 0.0f, 0x1.422292p-51f, 0x1.aa3fd4p-53f, 0.0f, 0.0f,
     0x1.adebep-12f, 0.0f, 0x1.f62b4p-104f, 0x1.f3dd6p-28f, 0x1.64bc0cp-123f, 0.0f,
     0.0f, 0.0f, 0x1.a67af8p-104f, 0.0f, 0.0f, 0x1.a4bb6cp-23f, 0x1.edb7f6p-54f,
     0x1.b9e4dep-104f, 0.0f, 0x1.c0fbe4p-58f, 0.0f, 0x1.40dd1ep-115f, 0.0f,
     0x1.136a0ap-42f, 0x1.3e7d8ep-21f, 0.0f, 0x1.36bba6p-26f, 0x1.b4bbacp-31f,
     0x1.663fbep-19f, 0x1.6c76a6p-95f, 0.0f, 0x1.c32d4cp-93f, 0x1.c473cep-124f, 0.0f,
     0.0f, 0x1.39abf2p-125f, 0x1.31d4dep-46f, 0x1.371c5ap-116f, 0x1.64ae2ap-87f, 0.0f,
     0.0f, 0x1.a5ca32p-9f, 0x1.2e2cb6p-23f, 0.0f, 0x1.fa8186p-33f, 0x1.dc702cp-26f,
     0x1.998bdep-96f, 0x1.9ea102p-47f, 0x1.a89dacp-96f, 0.0f, 0x1.6d2932p-78f,
     0x1.036d96p-49f, 0.0f, 0.0f, 0.0f, 0x1.a6f15p-117f, 0x1.529812p-10f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.c2f9d6p-89f, 0x1.297b3p-78f, 0x1.b91658p-110f, 0.0f, 0.0f,
     0x1.f7867cp-126f, 0.0f, 0x1.c50344p-45f, 0x1.5d9c32p-79f, 0x1.92d072p-21f, 0.0f,
     0x1.7af43ap-126f, 0.0f, 0x1.d368e8p-114f, 0x1.5b6912p-27f, 0x1.4aac9ep-105f,
     0x1.00bbecp-21f, 0x1.67dcc8p-5f, 0x1.b98b82p-3f, 0x1.be8194p-125f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.194dcp-112f, 0x1.97114ap-2f, 0x1.9dbb46p-1f, 0x1.3b806ep-100f,
     0.0f, 0x1.5f83d4p-81f, 0x1.ce7062p-4f, 0.0f, 0.0f, 0x1.cbba5p-43f,
     0x1.b0f426p-64f, 0x1.eae14ap-116f, 0x1.6167fep-76f, 0x1.80aab6p-45f,
     0x1.96910ap-10f, 0x1.e1921cp-6f, 0x1.1b0a68p-2f, 0x1.3596e6p-2f, 0x1.0fc368p-83f,
     0.0f, 0.0f, 0.0f, 0x1.ff9e86p-31f, 0x1.1463ep-100f, 0x1.2304b4p-15f,
     0x1.129a9ep-7f, 0.0f, 0.0f, 0x1.f2f946p-90f, 0.0f, 0.0f, 0x1.7a1492p-37f,
     0x1.261cd4p-123f, 0x1.f5b138p-18f, 0.0f, 0.0f, 0x1.fa022p-19f, 0.0f,
     0x1.b801dp-21f, 0.0f, 0x1.b68dfp-52f, 0x1.0038eep-30f, 0.0f, 0x1.54fb42p-67f,
     0x1.1c60b2p-12f, 0.0f, 0x1.db1286p-74f, 0.0f, 0.0f, 0x1.cc6912p-63f,
     0x1.2467cp-80f, 0x1.5f4362p-8f, 0x1.a7fb7cp-96f, 0x1.d2e53p-6f, 0x1.a21b6p-22f,
     0.0f, 0x1.fc4c64p-36f, 0x1.319dfap-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f5fedep-122f, 0.0f, 0x1.2268b2p-105f, 0.0f, 0.0f, 0x1.500bb4p-20f, 0.0f,
     0.0f, 0x1.fb465ep-117f, 0x1.c33508p-56f, 0x1.03aae4p-102f, 0.0f, 0x1.238288p-36f,
     0x1.2855bcp-23f, 0x1.0ab5ecp-32f, 0x1.dfa764p-108f, 0x1.49dfbap-93f, 0.0f,
     0x1.a8883p-26f, 0.0f, 0.0f, 0.0f, 0x1.4169bcp-126f, 0x1.367f28p-7f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.9d079ep-76f, 0.0f, 0.0f, 0.0f, 0x1.eed982p-3f, 0x1.841f12p-119f,
     0x1.e71ccap-109f, 0.0f, 0.0f, 0x1.9f99cep-91f, 0x1.de2b9ep-4f, 0.0f,
     0x1.79942ap-84f, 0.0f, 0.0f, 0x1.f2b6cp-104f, 0x1.1621b6p-68f, 0x1.125d1ap-125f,
     0.0f, 0.0f, 0x1.6906c8p-115f, 0x1.4bdc7ap-96f, 0.0f, 0.0f, 0x1.fb7d9cp-1f, 0.0f,
     0.0f, 0x1.f14a92p-77f, 0x1.e41efep-23f, 0.0f, 0.0f, 0x1.49df82p-52f,
     0x1.822c4p-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2fb29cp-106f, 0x1.69474ep-47f,
     0x1.79b024p-26f, 0.0f, 0x1.002358p-52f, 0x1.87b788p-115f, 0.0f, 0x1.92366cp-33f,
     0.0f, 0x1.eb7332p-101f, 0x1.1203b6p-108f, 0.0f, 0x1.93ac68p-38f, 0x1.ad938p-36f,
     0x1.fe3bf6p-62f, 0.0f, 0.0f, 0x1.3a4676p-38f, 0x1.898e3cp-115f, 0.0f, 0.0f,
     0x1.98014ap-7f, 0x1.eb18a4p-63f, 0.0f, 0.0f, 0.0f, 0x1.f9944ap-107f, 0.0f, 0.0f,
     0x1.02e61ap-83f, 0.0f, 0x1.9d39bp-85f, 0.0f, 0.0f, 0x1.4de28ep-95f,
     0x1.f5ccf8p-24f, 0x1.d6be76p-31f, 0x1.c6e536p-85f, 0x1.c47ea4p-63f, 0.0f,
     0x1.46befap-54f, 0.0f, 0x1.9b3436p-46f, 0.0f, 0x1.910a26p-68f, 0x1.d01afcp-71f,
     0.0f, 0x1.a92fbap-47f, 0.0f, 0x1.36937ep-91f, 0x1.07d9e2p-12f, 0.0f, 0.0f,
     0x1.09d36ep-74f, 0x1.607f5ep-44f, 0x1.a3ceeep-120f, 0.0f, 0.0f, 0.0f,
     0x1.c100fap-65f, 0x1.a57582p-32f, 0.0f, 0.0f, 0.0f, 0x1.60c72cp-40f,
     0x1.e425f2p-59f, 0.0f, 0.0f, 0.0f, 0x1.dce91ep-3f, 0.0f, 0x1.ecddbap-33f, 0.0f,
     0x1.4d9324p-48f, 0.0f, 0x1.1944bcp-12f, 0x1.f913dcp-41f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.114ebcp-71f, 0.0f, 0.0f, 0.0f, 0x1.672344p-91f, 0x1.0b2ba2p-84f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.e5783cp-39f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.513e56p-12f, 0.0f, 0x1.5ce2c2p-60f, 0.0f, 0.0f, 0x1.6c8a7ep-92f,
     0x1.9ef27ap-63f, 0.0f, 0.0f, 0.0f, 0x1.46dfacp-49f, 0x1.423544p-70f,
     0x1.654916p-49f, 0.0f, 0x1.aefa38p-62f, 0x1.16f718p-109f, 0.0f, 0.0f, 0.0f,
     0x1.bbaa3p-119f, 0x1.690d4ap-54f, 0.0f, 0x1.f4a284p-94f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.41948p-126f, 0.0f, 0x1.eb6778p-76f, 0.0f, 0x1.5e85d8p-83f,
     0x1.8a224p-33f, 0.0f, 0.0f, 0x1.2ebf7ep-21f, 0x1.6a78fp-98f, 0.0f,
     0x1.dbb03p-123f, 0x1.c6d41cp-111f, 0.0f, 0x1.a97ddcp-85f, 0x1.f727b8p-55f,
     0x1.b2a794p-31f, 0x1.74159p-34f, 0x1.dc4d9p-81f, 0.0f, 0x1.1ccc78p-75f, 0.0f,
     0x1.085c32p-13f, 0x1.3b49fp-93f, 0x1.430e0cp-7f, 0x1.889d3ep-23f,
     0x1.3bcecap-123f, 0x1.01a5dcp-61f, 0.0f, 0x1.3b9ebep-70f, 0x1.eaafdep-7f,
     0x1.d7626p-78f, 0.0f, 0.0f, 0x1.9bd458p-50f, 0.0f, 0x1.5b000cp-75f, 0.0f, 0.0f,
     0.0f, 0x1.04192ep-73f, 0.0f, 0.0f, 0x1.0dbe3p-97f, 0.0f, 0x1.6b5496p-12f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.690dacp-48f, 0.0f, 0x1.31c93cp-15f, 0.0f, 0.0f,
     0x1.efc432p-93f, 0x1.aec346p-29f, 0.0f, 0x1.aa96bep-61f, 0x1.d691e8p-12f,
     0x1.1d63bap-119f, 0.0f, 0.0f, 0.0f, 0x1.e83e5ep-123f, 0.0f, 0x1.f10ac8p-65f,
     0x1.d9aa9p-87f, 0x1.649298p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7ab96p-84f, 0.0f,
     0x1.643142p-31f, 0.0f, 0.0f, 0x1.5e173ep-80f, 0.0f, 0x1.672f3ep-18f,
     0x1.d8f9dp-43f, 0.0f, 0x1.53dc7ap-120f, 0x1.84fdcp-111f, 0.0f, 0x1.995a62p-53f,
     0x1.686b7ap-51f, 0x1.d3e4a2p-19f, 0x1.df8f22p-26f, 0x1.168d5p-121f,
     0x1.d085c8p-81f, 0.0f, 0x1.9388fep-85f, 0.0f, 0x1.46288ep-103f, 0x1.6b66d8p-64f,
     0x1.c40f04p-106f, 0.0f, 0x1.6d26a8p-38f, 0x1.f08bf8p-106f, 0x1.3723dep-111f,
     0x1.a0819cp-23f, 0.0f, 0.0f, 0x1.9a9baap-103f, 0x1.1eef56p-7f, 0x1.c062f6p-48f,
     0.0f, 0x1.5e0ac6p-4f, 0x1.7e6878p-48f, 0x1.66bc56p-109f, 0x1.de9284p-72f, 0.0f,
     0.0f, 0x1.bb2d42p-55f, 0x1.c5e22cp-98f, 0x1.a318b6p-80f, 0x1.2e0c3cp-65f, 0.0f,
     0x1.02b442p-46f, 0.0f, 0x1.fc8e94p-59f, 0x1.2f828ap-17f, 0x1.e0b8d4p-21f, 0.0f,
     0.0f, 0.0f, 0x1.f44c8p-15f, 0.0f, 0.0f, 0.0f, 0x1.b9de8ap-17f, 0x1.a33efcp-79f,
     0x1.9aeb9ep-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.149dbap-15f,
     0x1.90bdf8p-63f, 0x1.fa34c2p-2f, 0x1.e8eb42p-53f, 0x1.a3e242p-99f,
     0x1.4cd98p-35f, 0.0f, 0x1.eb8b6p-103f, 0.0f, 0x1.cd65bcp-24f, 0.0f,
     0x1.0063f8p-105f, 0.0f, 0x1.4ced68p-45f, 0x1.c7e7cap-121f, 0x1.c8337cp-126f,
     0.0f, 0x1.839b34p-105f, 0.0f, 0.0f, 0x1.909e4cp-84f, 0.0f, 0x1.ed16b2p-119f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.16802ep-13f, 0x1.ea74dap-13f,
     0x1.d4103ep-4f, 0.0f, 0.0f, 0x1.7f7c26p-72f, 0x1.2d10d8p-108f, 0x1.4d28aap-7f,
     0.0f, 0x1.fe79ep-46f, 0x1.c4fb28p-44f, 0.0f, 0.0f, 0x1.20efbp-73f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a76a62p-60f, 0.0f, 0x1.97773p-116f,
     0x1.e18cccp-73f, 0.0f, 0.0f, 0x1.67738ap-124f, 0.0f, 0x1.6656ep-31f, 0.0f,
     0x1.cf8224p-53f, 0x1.8d5714p-64f, 0x1.66059ap-83f, 0x1.debe4ep-118f,
     0x1.84b0e4p-13f, 0x1.7bd03ep-18f, 0.0f, 0.0f, 0x1.48bc1cp-40f, 0.0f, 0.0f,
     0x1.816592p-22f, 0x1.b1094cp-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c607aap-100f,
     0.0f, 0x1.4ec41ap-88f, 0.0f, 0x1.199b6ap-51f, 0.0f, 0x1.3c574ap-17f,
     0x1.30039ap-40f, 0x1.71a1f4p-16f, 0x1.93c65ep-70f, 0x1.ad529ap-30f
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
            tmp1 = Sleef_sinhf1_u35purecfma(tmp0);
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
    printf("Sleef_sinhf1_u35purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_sinhf1_u35purecfma bench acc %a\n", global_bench_acc);
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
