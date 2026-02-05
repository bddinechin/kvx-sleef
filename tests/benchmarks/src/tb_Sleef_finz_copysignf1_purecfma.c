/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_copysignf1_purecfma.c --function \
 *     Sleef_finz_copysignf1_purecfma --arity 2 --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary32,binary32 --bench \
 *     --no-embedded-bin --target kv3
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
     0x1.a763bp-16f, 0x1.5c5e84p-14f, 0x1.de567ap-107f, 0x1.e4ff5p-109f, 0.0f,
     0x1.e92a4ep-124f, 0.0f, 0.0f, 0x1.5edc76p-106f, 0x1.6aa74cp-44f, 0.0f, 0.0f,
     0x1.18c40ap-97f, 0x1.99b0e4p-64f, 0x1.3a99b2p-98f, 0.0f, 0.0f, 0x1.f88c22p-90f,
     0.0f, 0.0f, 0.0f, 0x1.2cf26ap-20f, 0x1.0ab6e8p-43f, 0x1.27069p-74f, 0.0f,
     0x1.cb921ep-19f, 0.0f, 0x1.a937f8p-66f, 0.0f, 0.0f, 0.0f, 0x1.511ac4p-95f,
     0x1.6f0626p-80f, 0x1.91727cp-86f, 0x1.448128p-20f, 0.0f, 0x1.5e4946p-26f,
     0x1.ca57dp-30f, 0.0f, 0.0f, 0x1.63e61ap-119f, 0x1.c1799cp-94f, 0.0f,
     0x1.8ef4cep-45f, 0x1.28445ep-53f, 0x1.1639fp-1f, 0.0f, 0x1.cc381cp-112f,
     0x1.65af36p-126f, 0x1.36550cp-49f, 0x1.f5c528p-99f, 0.0f, 0x1.f24d86p-117f,
     0x1.285434p-65f, 0.0f, 0x1.9a67ccp-97f, 0.0f, 0.0f, 0x1.dac20ap-5f,
     0x1.5ad7fep-94f, 0x1.99977p-29f, 0.0f, 0.0f, 0.0f, 0x1.43c40cp-81f,
     0x1.f3a4bap-87f, 0.0f, 0.0f, 0x1.a9fc2p-54f, 0x1.2122e6p-40f, 0x1.33eccp-18f,
     0x1.91ac04p-75f, 0.0f, 0x1.96de4p-47f, 0.0f, 0.0f, 0.0f, 0x1.820882p-82f, 0.0f,
     0x1.5657a8p-21f, 0x1.6f6736p-12f, 0.0f, 0x1.f84c84p-118f, 0.0f, 0.0f,
     0x1.deb52cp-70f, 0x1.b63ccap-35f, 0x1.57e354p-123f, 0x1.99261ap-114f,
     0x1.385648p-123f, 0x1.2d8abep-9f, 0.0f, 0x1.56e784p-85f, 0.0f, 0.0f,
     0x1.f134ap-122f, 0.0f, 0x1.5554fcp-37f, 0x1.003ebp-46f, 0.0f, 0.0f, 0.0f,
     0x1.f13cp-123f, 0.0f, 0.0f, 0.0f, 0x1.ebb1f6p-82f, 0.0f, 0.0f, 0x1.631a72p-102f,
     0x1.9750bcp-30f, 0x1.e959dap-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c579c2p-88f, 0.0f,
     0x1.11f0e2p-25f, 0.0f, 0.0f, 0.0f, 0x1.de3448p-102f, 0x1.73552p-125f, 0.0f,
     0x1.fd045cp-111f, 0x1.0f6d0ep-27f, 0x1.c122bp-51f, 0.0f, 0x1.68b716p-81f, 0.0f,
     0.0f, 0x1.9a5324p-101f, 0x1.e5eep-12f, 0x1.58229ap-53f, 0.0f, 0x1.889db2p-78f,
     0x1.881ac8p-123f, 0x1.8b82b6p-69f, 0x1.352e36p-50f, 0.0f, 0.0f, 0x1.b8fefap-38f,
     0.0f, 0x1.9daebep-89f, 0x1.5a048p-114f, 0.0f, 0.0f, 0x1.88e5f8p-57f, 0.0f,
     0x1.afe042p-99f, 0x1.da228ap-45f, 0x1.45b09ep-115f, 0.0f, 0.0f, 0.0f,
     0x1.9f0aep-26f, 0.0f, 0.0f, 0.0f, 0x1.87fc72p-108f, 0x1.09dab2p-116f,
     0x1.be298p-91f, 0.0f, 0x1.6a7af8p-88f, 0x1.61593cp-34f, 0x1.9323d4p-97f, 0.0f,
     0.0f, 0x1.6113a4p-68f, 0x1.c4b364p-35f, 0.0f, 0.0f, 0.0f, 0x1.f7bc78p-52f, 0.0f,
     0x1.d41d82p-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8cc708p-44f,
     0x1.11eap-101f, 0x1.4fadecp-90f, 0.0f, 0.0f, 0.0f, 0x1.28e41ep-16f, 0.0f,
     0x1.8714bep-109f, 0.0f, 0x1.10e51p-23f, 0x1.942c0cp-119f, 0.0f, 0x1.7fd016p-86f,
     0.0f, 0x1.710522p-84f, 0.0f, 0.0f, 0x1.bc4aaap-103f, 0.0f, 0.0f, 0x1.2b0ceep-51f,
     0.0f, 0.0f, 0x1.4d6a6p-88f, 0x1.c647c2p-37f, 0.0f, 0x1.6e9478p-18f, 0.0f,
     0x1.fe558p-62f, 0.0f, 0x1.71e974p-23f, 0x1.e5b3acp-52f, 0.0f, 0x1.f78efp-41f,
     0.0f, 0x1.310d84p-31f, 0x1.345f7ep-65f, 0.0f, 0x1.0b5298p-11f, 0.0f,
     0x1.6d89b8p-48f, 0x1.cadf4p-58f, 0x1.8a563p-24f, 0.0f, 0x1.fcd8bp-44f, 0.0f,
     0.0f, 0.0f, 0x1.a5f56p-110f, 0x1.9f4f68p-124f, 0x1.662a64p-4f, 0x1.1b428cp-65f,
     0x1.7ba056p-114f, 0.0f, 0.0f, 0x1.85893cp-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4be558p-115f, 0.0f, 0.0f, 0x1.1fff88p-121f, 0.0f, 0.0f, 0x1.b4629cp-90f,
     0.0f, 0.0f, 0x1.1deec2p-61f, 0x1.b60848p-47f, 0.0f, 0x1.01eefcp-37f, 0.0f, 0.0f,
     0.0f, 0x1.9d4a3p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c3017ep-40f, 0.0f, 0.0f,
     0x1.2e8f84p-31f, 0.0f, 0x1.5e20ep-24f, 0.0f, 0x1.8e1182p-71f, 0x1.b45ef2p-39f,
     0.0f, 0.0f, 0x1.edeadcp-104f, 0x1.efdadp-102f, 0.0f, 0x1.896b78p-18f,
     0x1.e7cb78p-50f, 0.0f, 0x1.06d956p-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bcd334p-95f, 0x1.291a96p-46f, 0x1.20fcfap-28f, 0.0f, 0.0f, 0x1.9ccd3ep-104f,
     0.0f, 0x1.c58d5p-5f, 0x1.10cd9ep-16f, 0x1.1005ep-86f, 0x1.9b701cp-21f, 0.0f,
     0x1.9331c2p-18f, 0x1.a68e9ep-89f, 0.0f, 0x1.7137ccp-47f, 0x1.670bfp-78f, 0.0f,
     0x1.b7d54p-10f, 0.0f, 0.0f, 0.0f, 0x1.5b9fp-38f, 0.0f, 0x1.622748p-112f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.fcb3fap-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c5897cp-72f,
     0.0f, 0x1.48dabp-92f, 0.0f, 0x1.4c50a2p-34f, 0.0f, 0.0f, 0x1.38f114p-51f, 0.0f,
     0x1.9d92d6p-2f, 0.0f, 0x1.63fb82p-92f, 0x1.88f84p-120f, 0.0f, 0.0f,
     0x1.1c491cp-119f, 0.0f, 0x1.db162ap-31f, 0.0f, 0x1.416cd6p-106f, 0.0f, 0.0f,
     0x1.174604p-117f, 0x1.5d0f3cp-90f, 0x1.f7d278p-85f, 0.0f, 0.0f, 0x1.16d3acp-53f,
     0x1.c9f794p-90f, 0.0f, 0.0f, 0.0f, 0x1.6e2d1ap-22f, 0x1.78c92ap-93f, 0.0f, 0.0f,
     0x1.28da7cp-41f, 0x1.1cbdd8p-65f, 0x1.58fc8ep-25f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f28832p-73f, 0.0f, 0.0f, 0x1.1cc964p-30f, 0x1.004934p-109f, 0.0f,
     0x1.f4571ep-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bb8a4p-51f, 0.0f, 0.0f, 0.0f,
     0x1.3c53c6p-125f, 0x1.672968p-102f, 0x1.b0c1ecp-120f, 0x1.6a88fcp-105f, 0.0f,
     0x1.fe5ebep-60f, 0x1.9ec6aep-93f, 0.0f, 0.0f, 0x1.aa8268p-27f, 0.0f,
     0x1.c0a2eap-79f, 0x1.39a1e2p-79f, 0.0f, 0.0f, 0x1.f2afa2p-37f, 0x1.3bf6fp-66f,
     0x1.412ff6p-10f, 0.0f, 0x1.9ce372p-88f, 0x1.d5156ep-90f, 0.0f, 0x1.99241cp-42f,
     0.0f, 0x1.fbf094p-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2d419ap-29f, 0.0f, 0.0f,
     0x1.799dcp-122f, 0.0f, 0x1.e5f06cp-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f7d41p-28f,
     0x1.0c5af8p-79f, 0.0f, 0.0f, 0.0f, 0x1.950b4p-58f, 0.0f, 0.0f, 0x1.92c2b6p-19f,
     0.0f, 0.0f, 0x1.3d53a8p-68f, 0x1.a2b09cp-94f, 0.0f, 0x1.7dded4p-59f, 0.0f,
     0x1.7d2aeap-20f, 0x1.39a32ap-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b5ece4p-74f,
     0x1.7ded98p-37f, 0x1.9ce9dep-14f, 0x1.43d4c2p-89f, 0x1.2feb1ap-45f, 0.0f,
     0x1.869ee8p-58f, 0.0f, 0.0f, 0x1.dc27e6p-44f, 0.0f, 0.0f, 0x1.b23f1cp-66f,
     0x1.97badcp-119f, 0x1.07bd9ap-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.54bda2p-33f, 0.0f,
     0.0f, 0x1.abfa9ap-2f, 0.0f, 0.0f, 0.0f, 0x1.7d13d2p-82f, 0x1.ca1f1ep-2f, 0.0f,
     0x1.33f514p-60f, 0x1.2fa0d2p-58f, 0x1.17a1fep-8f, 0.0f, 0.0f, 0x1.a65674p-104f,
     0.0f, 0.0f, 0x1.955698p-95f, 0.0f, 0.0f, 0x1.99d28ap-79f, 0.0f, 0.0f,
     0x1.59117cp-50f, 0.0f, 0x1.a1b6fap-66f, 0.0f, 0.0f, 0x1.625b3ap-43f,
     0x1.04a438p-82f, 0.0f, 0.0f, 0.0f, 0x1.877188p-124f, 0.0f, 0.0f, 0x1.7bd758p-24f,
     0x1.624e0cp-22f, 0x1.762838p-90f, 0.0f, 0.0f, 0x1.e20574p-115f, 0x1.902f24p-41f,
     0.0f, 0x1.57b03cp-53f, 0x1.d1239cp-39f, 0.0f, 0.0f, 0.0f, 0x1.72081ap-51f, 0.0f,
     0.0f, 0x1.de765ep-64f, 0.0f, 0x1.42ebc2p-49f, 0x1.de524ep-39f, 0x1.f46538p-23f,
     0x1.4a647ep-17f, 0.0f, 0.0f, 0x1.f9c6f4p-43f, 0x1.1ecf86p-13f, 0x1.99ffa8p-12f,
     0x1.8325b8p-29f, 0.0f, 0x1.03ae5cp-89f, 0x1.f5aee6p-21f, 0.0f, 0x1.f692dcp-101f,
     0x1.4b91a8p-56f, 0.0f, 0x1.c52eaap-115f, 0.0f, 0x1.614652p-44f, 0x1.ef7224p-56f,
     0.0f, 0.0f, 0.0f, 0x1.c1c99ep-106f, 0x1.99b11ap-32f, 0x1.e62e9p-34f, 0.0f,
     0x1.8eb34cp-72f, 0.0f, 0x1.dfdf3ep-82f, 0.0f, 0x1.2580acp-26f, 0.0f, 0.0f,
     0x1.b17538p-79f, 0x1.ae9364p-62f, 0.0f, 0x1.313852p-62f, 0x1.b8722cp-56f, 0.0f,
     0x1.4810d4p-94f, 0x1.e7dc98p-67f, 0x1.a5e74p-57f, 0x1.a10032p-49f,
     0x1.18fc1ap-47f, 0.0f, 0x1.45e9cep-110f, 0.0f, 0.0f, 0.0f, 0x1.e17e02p-123f,
     0.0f, 0.0f, 0x1.2745f4p-6f, 0x1.770d1ep-67f, 0.0f, 0x1.dcd348p-96f,
     0x1.f16684p-98f, 0.0f, 0x1.e55754p-96f, 0x1.c93a9cp-9f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.fc995p-123f, 0.0f, 0x1.eb911p-39f, 0.0f, 0.0f, 0x1.1e83d4p-4f,
     0x1.12aafp-76f, 0.0f, 0x1.a5fa88p-110f, 0x1.a6182ep-91f, 0.0f, 0.0f, 0.0f,
     0x1.5ba3d8p-39f, 0x1.0e0fb4p-25f, 0.0f, 0.0f, 0x1.1c6c42p-70f, 0x1.ccf3eep-90f,
     0x1.b9376p-37f, 0.0f, 0x1.9a14ap-20f, 0x1.18bfap-2f, 0x1.161dcp-1f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.3aef4p-16f, 0.0f, 0.0f, 0x1.c8c238p-93f, 0.0f, 0x1.52940ep-53f,
     0.0f, 0x1.36d2p-41f, 0x1.414c3cp-122f, 0.0f, 0x1.a2a4e6p-116f, 0.0f,
     0x1.4aba32p-105f, 0x1.96511cp-90f, 0x1.eb2a5ap-33f, 0x1.0b8504p-106f, 0.0f,
     0x1.2844c4p-53f, 0x1.94019ap-51f, 0x1.6cb906p-102f, 0x1.16014ap-8f,
     0x1.490e36p-50f, 0.0f, 0.0f, 0.0f, 0x1.134ac8p-17f, 0x1.83d1c4p-99f, 0.0f,
     0x1.580d36p-91f, 0x1.eecc66p-34f, 0.0f, 0.0f, 0.0f, 0x1.fa0c1ap-86f, 0.0f,
     0x1.8831b2p-123f, 0x1.e99094p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1e65a2p-105f,
     0x1.ed6cd4p-81f, 0.0f, 0x1.e7580cp-58f, 0.0f, 0x1.773678p-23f, 0x1.dcb14ap-36f,
     0x1.dd2dc2p-35f, 0.0f, 0.0f, 0.0f, 0x1.30009cp-107f, 0x1.7dec84p-102f,
     0x1.d98738p-118f, 0x1.72acf6p-93f, 0x1.34bb76p-35f, 0.0f, 0.0f, 0x1.aa2416p-52f,
     0x1.2b5df4p-57f, 0.0f, 0.0f, 0x1.56c8c4p-21f, 0x1.468026p-106f, 0x1.d6a0b8p-52f,
     0.0f, 0.0f, 0.0f, 0x1.2b1bc2p-51f, 0.0f, 0.0f, 0x1.4290cap-114f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.c8e366p-8f, 0x1.a4cdf6p-125f, 0x1.ac946ep-47f, 0x1.855918p-10f,
     0.0f, 0.0f, 0x1.88bdcep-77f, 0x1.9086bcp-27f, 0x1.ff671cp-92f, 0.0f, 0.0f,
     0x1p0f, 0.0f, 0x1.1ff796p-70f, 0.0f, 0x1.11aad4p-14f, 0x1.789274p-27f,
     0x1.978c76p-92f, 0x1.cd807p-13f, 0.0f, 0x1.3ae248p-76f, 0x1.8a0cf2p-4f,
     0x1.6def6p-62f, 0x1.b44064p-95f, 0x1.9b6c96p-15f, 0x1.733e32p-44f,
     0x1.7dc7d4p-41f, 0x1.7d41p-93f, 0x1.416fb4p-22f, 0x1.c7bb88p-101f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.1c7716p-63f, 0x1.5dce5cp-44f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4225a2p-73f, 0x1.fb320ep-39f, 0.0f, 0x1.651042p-29f, 0.0f, 0.0f,
     0x1.d06842p-68f, 0x1.1ba5eep-99f, 0.0f, 0x1.2fd3fp-89f, 0.0f, 0.0f,
     0x1.b9d59p-5f, 0.0f, 0.0f, 0x1.1156bap-3f, 0.0f, 0x1.8542f2p-75f,
     0x1.ca9366p-47f, 0x1.b612e4p-112f, 0.0f, 0x1.aea562p-119f, 0x1.482e38p-3f, 0.0f,
     0x1.2b428ep-52f, 0x1.f19606p-109f, 0x1.e35eb2p-94f, 0.0f, 0x1.ee6ef4p-23f,
     0x1.2e9eep-11f, 0x1.45a232p-42f, 0x1.47b9b2p-119f, 0x1.ea8b48p-100f,
     0x1.22e1a6p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.94c648p-2f,
     0x1.5e1ae4p-120f, 0.0f, 0x1.a5c746p-63f, 0x1.b55d76p-64f, 0.0f, 0x1.6ba066p-35f,
     0.0f, 0.0f, 0.0f, 0x1.a1edp-71f, 0x1.ec3f8cp-48f, 0.0f, 0x1.dfafc2p-123f, 0.0f,
     0x1.3270fep-98f, 0.0f, 0.0f, 0.0f, 0x1.581602p-104f, 0.0f, 0x1.6befa4p-44f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1b0de4p-71f,
     0x1.11253p-4f, 0x1.9893f8p-33f, 0.0f, 0.0f, 0x1.075f7p-88f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.1038f8p-118f, 0x1.94e6ccp-100f, 0x1.2e265cp-99f, 0x1.a5ff76p-55f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.943fcap-96f, 0x1.b4c6a4p-108f, 0.0f, 0.0f, 0.0f,
     0x1.848bbcp-106f, 0.0f, 0.0f, 0x1.1a27e4p-122f, 0.0f, 0x1.b172a6p-11f, 0.0f,
     0x1.b7ab08p-68f, 0.0f, 0.0f, 0x1.160398p-74f, 0.0f, 0x1.82ba2ep-69f,
     0x1.5e6aacp-112f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.db3fc2p-122f, 0.0f,
     0x1.3a92bep-46f, 0.0f, 0.0f, 0.0f, 0x1.e4ea58p-102f, 0.0f, 0.0f, 0.0f,
     0x1.f37b6p-54f, 0x1.0bbc48p-3f, 0x1.c2061p-69f, 0x1.500becp-88f, 0.0f,
     0x1.a0b56ep-116f, 0.0f, 0x1.935a16p-25f, 0x1.1fd066p-90f, 0x1.db9604p-68f,
     0x1.ae3544p-43f, 0.0f, 0.0f, 0x1.e5d258p-91f, 0x1.003534p-52f, 0.0f, 0.0f,
     0x1.ea4026p-25f, 0.0f, 0x1.81b112p-98f, 0x1.bb3352p-61f, 0.0f, 0x1.bd6ca6p-110f,
     0x1.f8263cp-68f, 0x1.581986p-61f, 0x1.23b034p-106f, 0x1.f97286p-103f, 0.0f,
     0x1.c7edbap-52f, 0.0f, 0x1.060f1cp-94f, 0x1.58abfap-40f, 0x1.d76e58p-73f, 0.0f,
     0x1.30281ep-13f, 0x1.e0adf8p-13f, 0.0f, 0x1.2c3b0ap-6f, 0.0f, 0.0f,
     0x1.18e734p-76f, 0x1.2f17eep-21f, 0.0f, 0x1.e7bc16p-9f, 0.0f, 0x1.c811a8p-105f,
     0x1.848c94p-118f, 0.0f, 0.0f, 0x1.ff974cp-125f, 0.0f, 0x1.80d0ep-69f,
     0x1.6fcec4p-90f, 0x1.b33c2cp-38f, 0x1.2d2becp-20f, 0x1.371c98p-9f,
     0x1.01b9d4p-104f, 0.0f, 0x1.d3496ep-7f, 0.0f, 0.0f, 0x1.0e4e8ap-114f, 0.0f,
     0x1p0f, 0.0f, 0x1.446c02p-26f, 0.0f, 0.0f, 0.0f, 0x1.056666p-41f, 0.0f, 0.0f,
     0.0f, 0x1.4d5ad4p-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4e03ecp-79f, 0.0f,
     0x1.fa2ca6p-33f, 0x1.b8586p-112f, 0.0f, 0x1.8df482p-76f, 0.0f, 0.0f, 0.0f,
     0x1.f6cc3ep-64f, 0x1.fd488ep-116f, 0.0f, 0.0f, 0x1.7cb284p-91f, 0.0f, 0.0f,
     0x1.82c174p-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.252686p-10f, 0x1.0fe178p-3f,
     0x1.a4e4dep-106f, 0x1.91207p-4f, 0x1.c36fb4p-36f, 0x1.8ac704p-45f,
     0x1.1e48aep-23f, 0x1.d32f7cp-48f, 0x1.f0e6f6p-18f, 0.0f, 0x1.ea47c6p-125f,
     0x1.7295e2p-110f, 0.0f, 0.0f, 0.0f, 0x1.d8644p-122f, 0.0f, 0x1.e90824p-116f,
     0x1.7b8aacp-48f, 0.0f, 0x1.b98be8p-82f, 0.0f, 0.0f, 0.0f, 0x1.48b328p-13f,
     0x1.a8af94p-61f, 0.0f, 0x1.055a84p-57f, 0x1.796f24p-86f, 0.0f, 0.0f,
     0x1.5388aap-69f, 0.0f, 0x1.83f32p-52f, 0x1.f37a96p-58f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f
};
static const float external_bench_wrapper_input_table_arg1[1001]  = {
     0x1.57107cp-112f, 0.0f, 0.0f, 0.0f, 0x1.40dcc2p-81f, 0.0f, 0x1.bd9716p-81f,
     0x1.14380ep-90f, 0.0f, 0x1.ed88cep-7f, 0.0f, 0x1.a6ba28p-47f, 0x1.bbcbf2p-69f,
     0x1.56fd0ep-65f, 0x1.b0be66p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4e017ep-77f,
     0x1.ae9a34p-94f, 0.0f, 0.0f, 0.0f, 0x1.8c432p-8f, 0.0f, 0x1.cd706ap-55f, 0.0f,
     0.0f, 0x1.79d79cp-12f, 0x1.427d2ep-60f, 0x1.1902a4p-35f, 0x1.687b02p-63f, 0.0f,
     0x1.59bdb4p-63f, 0x1.4c9daep-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5c9bb2p-114f,
     0.0f, 0x1.753a5p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0bd8eap-38f, 0x1.2371a6p-13f,
     0x1.dc258ep-18f, 0.0f, 0x1.965a1ep-58f, 0.0f, 0.0f, 0x1.dfa1f8p-119f, 0.0f, 0.0f,
     0x1.605944p-105f, 0x1.5922ccp-60f, 0x1.4273fap-16f, 0x1.9de74ap-43f,
     0x1.3faf0cp-20f, 0.0f, 0x1.04d078p-42f, 0x1.f06458p-20f, 0x1.e85b8ap-107f, 0.0f,
     0.0f, 0x1.ff0d0ap-73f, 0.0f, 0.0f, 0x1.e9477ep-71f, 0.0f, 0.0f, 0.0f,
     0x1.73662p-39f, 0x1.ec3a92p-111f, 0x1.da26b2p-19f, 0.0f, 0.0f, 0x1.121314p-59f,
     0x1.7ae5e2p-2f, 0.0f, 0.0f, 0x1.614a86p-90f, 0x1.9ba736p-17f, 0.0f,
     0x1.e61dap-6f, 0x1.a07784p-54f, 0.0f, 0.0f, 0x1.792d44p-26f, 0x1.021feep-25f,
     0.0f, 0x1.d8d78cp-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0f16ecp-36f, 0.0f,
     0x1.bb16b2p-50f, 0.0f, 0x1.749152p-12f, 0x1.956ae4p-84f, 0.0f, 0.0f, 0.0f,
     0x1.810d1ep-48f, 0.0f, 0x1.98421cp-118f, 0x1.2f70fep-96f, 0x1.95b674p-90f, 0.0f,
     0x1.fd2d8ep-114f, 0.0f, 0.0f, 0x1.32c9a4p-5f, 0x1.3c90acp-125f, 0.0f,
     0x1.548b5ap-75f, 0x1.1d1314p-15f, 0.0f, 0.0f, 0.0f, 0x1.202e58p-25f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d719bep-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.560b8ap-34f, 0.0f, 0.0f, 0.0f, 0x1.f3dd88p-37f,
     0.0f, 0.0f, 0.0f, 0x1.8de18p-32f, 0x1.e0637ep-13f, 0.0f, 0x1.f78c44p-59f, 0.0f,
     0x1.b7a9c8p-114f, 0.0f, 0.0f, 0x1.178caep-37f, 0x1.c8c148p-47f, 0.0f, 0.0f, 0.0f,
     0x1.82ce08p-14f, 0.0f, 0x1.7547dcp-123f, 0x1.94be2ap-62f, 0x1.847e3p-126f, 0.0f,
     0.0f, 0x1.aefc9cp-24f, 0x1.0e0aaap-71f, 0x1.3f233ep-113f, 0.0f, 0x1.cbad36p-72f,
     0.0f, 0x1.bec52p-20f, 0x1.599a1ep-84f, 0.0f, 0x1.00e4a2p-126f, 0.0f,
     0x1.7a70aep-94f, 0.0f, 0.0f, 0x1.f23ap-43f, 0.0f, 0x1.fcf93cp-4f,
     0x1.8d6e54p-17f, 0.0f, 0x1.fd4198p-1f, 0.0f, 0.0f, 0x1.b62d82p-77f,
     0x1.e5f6cap-93f, 0.0f, 0.0f, 0x1.4dae3ep-29f, 0x1.41cefcp-122f, 0x1.764514p-7f,
     0.0f, 0.0f, 0x1.370066p-18f, 0.0f, 0.0f, 0x1.6cc2e8p-33f, 0x1.e54f56p-78f, 0.0f,
     0.0f, 0x1.a5cbc6p-94f, 0.0f, 0x1.fdf7fp-72f, 0.0f, 0.0f, 0x1.51ba2ep-75f,
     0x1.4aa4aep-13f, 0.0f, 0.0f, 0.0f, 0x1.d38b02p-107f, 0x1.8230eep-85f,
     0x1.f6db34p-76f, 0.0f, 0x1.e9366ep-66f, 0.0f, 0x1.acdfa4p-84f, 0x1.44a42p-102f,
     0x1.d9edacp-12f, 0.0f, 0.0f, 0x1.a4f75ep-44f, 0x1.d849f6p-11f, 0.0f, 0.0f,
     0x1.6b750ap-68f, 0x1.7df2c2p-29f, 0x1.e88c34p-68f, 0.0f, 0.0f, 0.0f,
     0x1.1394aap-107f, 0x1.1096acp-65f, 0.0f, 0x1.7bf5a8p-53f, 0.0f, 0x1.6cd7fcp-11f,
     0x1.430de2p-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d66b98p-51f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.9df988p-67f, 0x1.2ec43ep-99f, 0x1.2b0eeep-10f, 0x1.df62b2p-92f, 0.0f,
     0x1.937bf6p-13f, 0x1.3f4524p-49f, 0.0f, 0.0f, 0x1.4d07a6p-28f, 0x1.15eb18p-29f,
     0x1.12fd66p-52f, 0.0f, 0x1.2baa64p-10f, 0x1.111022p-43f, 0.0f, 0x1.abf282p-78f,
     0.0f, 0x1.7e88f4p-16f, 0x1.b5996cp-117f, 0x1.72309ap-43f, 0x1.09988p-41f, 0.0f,
     0x1.4663cap-16f, 0.0f, 0.0f, 0x1.9a3e3ap-25f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.85ab46p-63f, 0.0f, 0x1.b0a3d6p-25f, 0.0f,
     0x1.2d0ff2p-89f, 0x1.3e3d26p-33f, 0x1.58d75p-9f, 0.0f, 0.0f, 0x1.658ce2p-90f,
     0x1.4d9e9p-74f, 0x1.356bep-34f, 0.0f, 0x1.db03bp-26f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.2ef086p-93f, 0x1.ab97a6p-57f, 0x1.5ea396p-112f, 0x1.e06bp-106f,
     0x1.5f1528p-121f, 0.0f, 0.0f, 0.0f, 0x1.568efp-72f, 0.0f, 0x1.696d08p-8f,
     0x1.0b669ap-118f, 0.0f, 0.0f, 0.0f, 0x1.d6bdf4p-35f, 0.0f, 0.0f, 0.0f,
     0x1.3b2664p-19f, 0x1.cbe536p-17f, 0x1.4604dp-48f, 0x1.48e85ap-83f,
     0x1.ff1a6ep-120f, 0.0f, 0x1.be10a6p-89f, 0x1.1f7356p-57f, 0x1.46c4cp-88f,
     0x1.4c23d2p-53f, 0.0f, 0.0f, 0x1.0c2dfep-30f, 0x1.69a066p-30f, 0.0f,
     0x1.85101cp-92f, 0x1.039924p-111f, 0x1.e8d6d6p-67f, 0x1.e1b894p-26f,
     0x1.330196p-36f, 0x1.67fd18p-101f, 0x1.0c8906p-25f, 0x1.95ee0ep-16f,
     0x1.8600dap-48f, 0x1.49b412p-106f, 0x1.32bdd2p-28f, 0x1.c8eeb2p-121f,
     0x1.d15802p-95f, 0.0f, 0x1.3f9ca4p-15f, 0.0f, 0.0f, 0.0f, 0x1.ec57f6p-121f, 0.0f,
     0x1.5a83eap-81f, 0x1.53704ap-54f, 0.0f, 0x1.7a9138p-94f, 0x1.5247b6p-22f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.6c3814p-83f, 0x1.c02d4ap-24f, 0x1.df45ecp-52f,
     0x1.8377fp-2f, 0x1.e2d7a6p-36f, 0x1.3da8b8p-60f, 0.0f, 0x1.4b5fep-77f, 0.0f,
     0x1.1773f4p-12f, 0x1.cf98cp-58f, 0.0f, 0x1.a59c0ep-34f, 0.0f, 0.0f,
     0x1.d58b34p-72f, 0x1.5a4cbcp-46f, 0.0f, 0x1.35ba5ap-106f, 0x1.cf6872p-37f,
     0x1.d62ap-99f, 0x1.7a31d6p-21f, 0.0f, 0.0f, 0.0f, 0x1.eea53ep-106f,
     0x1.61398cp-104f, 0.0f, 0x1.af83c8p-18f, 0x1.76a616p-23f, 0.0f, 0x1.444466p-20f,
     0.0f, 0.0f, 0x1.67b774p-70f, 0.0f, 0.0f, 0.0f, 0x1.dc48a4p-6f, 0.0f, 0.0f, 0.0f,
     0x1p0f, 0.0f, 0x1.e0103ap-96f, 0x1.30dbcap-121f, 0x1.b0cc12p-4f, 0.0f, 0.0f,
     0x1.7cf764p-109f, 0.0f, 0x1.21ec28p-20f, 0x1.ad53fep-94f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.5b50acp-97f, 0.0f, 0x1.4769e4p-50f, 0x1.6b68dcp-50f, 0x1.0c1036p-74f,
     0.0f, 0.0f, 0.0f, 0x1.00ef06p-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.09e096p-33f,
     0.0f, 0.0f, 0x1.8fc4c6p-79f, 0.0f, 0x1.0fd138p-60f, 0.0f, 0.0f, 0x1.a07612p-29f,
     0.0f, 0.0f, 0x1.65bdecp-67f, 0x1.f89302p-59f, 0.0f, 0x1.3b3ef2p-90f,
     0x1.8618ecp-88f, 0.0f, 0x1.9d3662p-34f, 0x1.9fda12p-101f, 0.0f, 0.0f,
     0x1.0a68a8p-83f, 0x1.0100bap-28f, 0.0f, 0.0f, 0x1.41035p-14f, 0.0f, 0.0f,
     0x1.7a0adp-123f, 0x1.237c46p-78f, 0x1.e35ad2p-40f, 0x1.22c49p-91f, 0.0f, 0.0f,
     0x1p0f, 0.0f, 0x1.d25fdep-54f, 0x1.b2576cp-66f, 0x1.8c927p-35f, 0x1.254378p-86f,
     0.0f, 0x1.37f784p-3f, 0.0f, 0x1.6fb184p-7f, 0x1.22247p-29f, 0x1.316fccp-67f,
     0.0f, 0.0f, 0x1.dfc048p-47f, 0x1.273954p-5f, 0.0f, 0x1.b64eaap-124f,
     0x1.f3d904p-122f, 0x1.59325cp-53f, 0.0f, 0.0f, 0x1.545716p-24f, 0x1.d958aep-80f,
     0.0f, 0x1.a7a686p-100f, 0.0f, 0.0f, 0x1.c01402p-123f, 0.0f, 0.0f, 0.0f,
     0x1.6bbd74p-17f, 0x1.eda82ap-48f, 0.0f, 0.0f, 0x1.d5e1b2p-101f, 0.0f, 0.0f,
     0x1.00f1acp-74f, 0x1.1c6624p-110f, 0x1.aff9f8p-105f, 0x1.1b4a6p-93f,
     0x1.303dccp-102f, 0.0f, 0.0f, 0.0f, 0x1.026d6ep-73f, 0x1.ceeb82p-47f,
     0x1.4e5e7ap-104f, 0x1.70b084p-7f, 0.0f, 0x1.40d246p-24f, 0x1.e27522p-27f, 0.0f,
     0.0f, 0.0f, 0x1.7e9ed2p-116f, 0.0f, 0x1.15849p-32f, 0.0f, 0x1.c5891ep-117f, 0.0f,
     0x1.1025cap-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1eb3cp-125f, 0x1.ce0f78p-31f,
     0x1.a381f4p-78f, 0x1.d26f5ep-36f, 0.0f, 0.0f, 0x1.5ddd7ap-2f, 0x1.c3669p-100f,
     0x1.12872p-25f, 0x1.b2458cp-119f, 0x1.9f9992p-76f, 0x1.384cb4p-85f, 0.0f, 0.0f,
     0.0f, 0x1.7e36bp-85f, 0x1.1c8964p-89f, 0x1.1c6e8cp-108f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3fdf32p-79f, 0x1.efa65p-88f, 0x1.832882p-114f, 0x1.1671acp-116f,
     0x1.44dcdep-67f, 0x1.924d38p-52f, 0.0f, 0.0f, 0.0f, 0x1.da3f9p-81f,
     0x1.016cf6p-24f, 0x1.4e989ep-56f, 0x1.15df2p-125f, 0x1.10c73cp-76f, 0.0f, 0.0f,
     0.0f, 0x1.3eb2eep-122f, 0x1.085608p-44f, 0x1.11ade2p-78f, 0x1.ca2eeep-24f,
     0x1.71290cp-16f, 0x1.bd1b38p-37f, 0.0f, 0x1.1100e8p-23f, 0x1.b4ba98p-59f,
     0x1.46c66ep-29f, 0x1.2d8262p-67f, 0.0f, 0.0f, 0x1.e7274ap-6f, 0x1.32314cp-7f,
     0.0f, 0.0f, 0.0f, 0x1.65024cp-19f, 0x1.9cf9bap-83f, 0x1.4a883cp-52f, 0.0f,
     0x1.cfd9fap-99f, 0.0f, 0x1.2d666ap-82f, 0x1.db9958p-102f, 0x1.d2741ap-115f,
     0x1.9afb6ap-31f, 0.0f, 0.0f, 0x1.88745p-108f, 0x1.c4b6d6p-67f, 0.0f, 0.0f,
     0x1.4f1026p-82f, 0.0f, 0.0f, 0x1.0852e8p-117f, 0.0f, 0.0f, 0.0f, 0x1.058cdcp-66f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.aa9396p-15f, 0x1.aa7068p-118f, 0.0f,
     0x1.a4f9e2p-26f, 0x1.f7dda2p-2f, 0x1.9c96b4p-51f, 0x1.a2847ep-17f,
     0x1.3dd878p-26f, 0.0f, 0x1.e8d79cp-39f, 0x1.737908p-109f, 0.0f, 0x1.963e4p-37f,
     0x1.de19ccp-22f, 0.0f, 0.0f, 0x1.38dbfcp-119f, 0x1.d6039ap-44f, 0.0f, 0.0f, 0.0f,
     0x1.02d6bep-8f, 0.0f, 0x1.36df9ap-34f, 0x1.b70d2ap-44f, 0.0f, 0.0f, 0.0f,
     0x1.9bff2ap-25f, 0.0f, 0x1.5f3a0cp-116f, 0.0f, 0.0f, 0.0f, 0x1.4e4c46p-67f,
     0x1.dd2f44p-66f, 0x1.513fb2p-48f, 0.0f, 0.0f, 0x1.717aa4p-7f, 0.0f,
     0x1.2518f8p-22f, 0.0f, 0.0f, 0.0f, 0x1.a5007ep-15f, 0.0f, 0x1.2485cap-55f,
     0x1.eaf2dp-117f, 0.0f, 0.0f, 0x1.418e94p-64f, 0x1.8ae57cp-38f, 0x1.dab0fp-22f,
     0x1.06ac1p-12f, 0x1.b83d2cp-120f, 0.0f, 0x1.ad654ap-42f, 0.0f, 0.0f, 0.0f,
     0x1.f281b4p-66f, 0.0f, 0.0f, 0.0f, 0x1.520dbcp-109f, 0x1.5ac8f8p-4f,
     0x1.5bd5e2p-18f, 0.0f, 0.0f, 0x1.afb77cp-57f, 0.0f, 0x1.7dd214p-64f, 0.0f,
     0x1p0f, 0.0f, 0.0f, 0x1.3056bcp-53f, 0.0f, 0.0f, 0x1.9728b8p-34f, 0.0f, 0.0f,
     0x1.6c4adep-67f, 0x1.e8b018p-31f, 0x1.d8d30ep-57f, 0.0f, 0x1.40fb76p-112f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.19ec9cp-22f, 0x1.afcf14p-87f, 0.0f, 0x1.0cb0f6p-39f,
     0x1.01ccacp-115f, 0.0f, 0x1.5018cep-31f, 0x1.e28a64p-89f, 0.0f, 0.0f,
     0x1.21baaep-5f, 0.0f, 0x1.0e97dap-50f, 0x1.a0ae62p-75f, 0x1.7e9102p-124f,
     0x1.1da814p-100f, 0x1.4b3ef4p-9f, 0x1.b2c6f8p-81f, 0.0f, 0.0f, 0x1.a09cdep-6f,
     0x1.dfa19ap-35f, 0x1.6057dcp-1f, 0x1.d0afcap-104f, 0x1.ff294ep-85f,
     0x1.e929cap-93f, 0.0f, 0x1.c0cd34p-105f, 0.0f, 0x1.4f807ep-44f, 0.0f,
     0x1.58254ap-58f, 0x1.7f48a4p-73f, 0.0f, 0x1.92e5ep-25f, 0x1.10f9d4p-76f, 0.0f,
     0x1.c89a22p-119f, 0.0f, 0.0f, 0x1.361124p-33f, 0x1.b55752p-37f, 0x1.af4844p-5f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b3054cp-103f, 0.0f, 0.0f, 0.0f, 0x1.05a746p-32f,
     0.0f, 0x1.2021a2p-33f, 0x1.bb97fep-33f, 0.0f, 0x1.554e26p-41f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.771cp-114f, 0.0f, 0x1.4892dcp-123f, 0x1.c1c5fp-96f,
     0x1.31695ep-50f, 0.0f, 0.0f, 0x1.489d4p-21f, 0x1.ec3b1ap-70f, 0.0f,
     0x1.b285e2p-41f, 0x1.c665d8p-25f, 0x1.6c1856p-26f, 0.0f, 0.0f, 0.0f,
     0x1.d729c6p-118f, 0.0f, 0x1.9c2312p-60f, 0.0f, 0x1p0f, 0x1.97d4cp-68f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ce9c78p-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2f2db6p-105f, 0x1.3cd2cap-114f, 0.0f, 0x1.f8bd64p-22f, 0x1.96a95ep-90f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.80112ap-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8bb6f6p-69f, 0.0f,
     0x1.734d4cp-78f, 0x1.1e6118p-109f, 0.0f, 0.0f, 0.0f, 0x1.c6eee8p-106f,
     0x1.89951p-49f, 0.0f, 0x1.213bap-52f, 0x1.77e07ep-96f, 0x1.9fc6ecp-103f,
     0x1.436daap-84f, 0x1.d6ccfep-82f, 0x1.ec0cb4p-77f, 0x1.ce5202p-126f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.135c0ap-50f, 0x1.a36f76p-117f, 0x1.fe021cp-80f, 0x1.371f68p-114f,
     0x1.03e12ap-58f, 0.0f, 0x1.7cf6dap-23f, 0.0f, 0x1.07f93p-65f, 0.0f, 0.0f,
     0x1.e08a6p-117f, 0x1.a4d5f6p-47f, 0x1.d1605ep-33f, 0x1.e087eap-105f, 0.0f,
     0x1.dfe77ap-124f, 0x1.76571ap-8f, 0.0f, 0.0f, 0x1.f1491cp-21f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.02fdap-43f, 0.0f,
     0x1.047cdcp-49f, 0x1.bf521cp-119f, 0x1.cac69p-110f, 0.0f, 0x1.f66a2p-106f, 0.0f,
     0.0f, 0x1.f676b4p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1e4e48p-30f, 0.0f, 0.0f,
     0x1.4ed99cp-34f, 0x1.8217aap-66f, 0x1.1b63d2p-63f, 0x1.8b021ap-5f,
     0x1.e1fe92p-61f, 0x1.80dc8cp-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bb9dcp-87f, 0x1.47301ep-102f, 0x1.64bab2p-101f, 0x1.31b54cp-8f,
     0x1.0e41dep-103f, 0x1.3ac59ep-35f, 0x1.e5c5fep-117f, 0x1.be81aap-96f, 0.0f, 0.0f,
     0x1.ef2936p-96f, 0.0f, 0x1.a8db76p-5f, 0.0f, 0.0f, 0x1.1e9c94p-119f, 0.0f, 0.0f,
     0.0f, 0x1.6282f8p-28f, 0x1.ad62cap-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.80dd2ep-43f, 0.0f, 0x1.ae720cp-12f, 0x1.cfccfap-103f, 0x1.bd4d76p-57f,
     0x1.15ba7ap-100f, 0.0f, 0.0f, 0x1.a5e8bp-9f, 0.0f, 0x1.2e662ap-54f, 0.0f,
     0x1.5a9618p-48f, 0x1.0a2978p-84f, 0x1.934b3p-32f, 0.0f, 0.0f, 0.0f,
     0x1.e510fp-110f, 0x1.92874ap-18f, 0.0f, 0.0f, 0.0f, 0x1.7086f6p-95f, 0.0f, 0.0f,
     0.0f, 0x1.4a29b2p-27f, 0.0f, 0x1.1ca328p-70f, 0x1.f0a308p-26f, 0x1.0c8e7ap-9f,
     0.0f, 0.0f, 0.0f, 0x1.9a2258p-2f, 0x1.211d7ep-32f, 0.0f, 0x1.e606acp-93f, 0.0f,
     0.0f, 0.0f, 0x1.e99766p-86f, 0x1.9e2e24p-98f, 0.0f, 0.0f, 0.0f, 0x1.5206cap-69f,
     0x1.48fdfap-38f, 0.0f, 0x1.ed2906p-89f
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
            tmp2 = Sleef_finz_copysignf1_purecfma(tmp0, tmp1);
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
    printf("Sleef_finz_copysignf1_purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_copysignf1_purecfma bench acc %a\n", global_bench_acc);
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
