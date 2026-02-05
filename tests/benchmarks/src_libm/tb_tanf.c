/**
 * generated using metalibm 1.1
 * sha1 git: b'"3425a70973ff93e510359b9b2fa45754ebf43279"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_tanf.c --function tanf --headers math.h,ml_support_lib.h \
 *     --input-formats binary32 --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <math.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile float external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.d52dp-121f, 0.0f, 0x1.f59b98p-124f, 0x1.b666p-71f, 0x1.e877ccp-30f, 0.0f,
     0.0f, 0x1.8d094p-107f, 0.0f, 0x1.fde2p-68f, 0x1.602d44p-6f, 0x1.92c6a6p-42f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a491b8p-120f, 0.0f, 0.0f, 0x1.dee1ep-95f,
     0x1.26e9p-109f, 0x1.28c75cp-108f, 0x1.ea1b2cp-76f, 0.0f, 0x1.2d456cp-8f, 0.0f,
     0.0f, 0.0f, 0x1.be6438p-54f, 0x1.508a8ep-101f, 0x1.18406cp-41f, 0.0f, 0.0f,
     0x1.96e99ep-27f, 0x1.a745ccp-89f, 0x1.d50ceep-50f, 0x1.604e2ep-44f,
     0x1.cee2d6p-63f, 0.0f, 0x1.bc539ap-115f, 0.0f, 0.0f, 0x1.143d52p-124f,
     0x1.60d512p-51f, 0.0f, 0x1p0f, 0x1.2bb9b4p-56f, 0x1.a0a008p-69f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ca43ccp-126f, 0.0f, 0x1.4bb2e4p-63f, 0x1.830768p-84f,
     0x1.ae234cp-17f, 0.0f, 0x1.db8c24p-108f, 0.0f, 0x1.d69944p-53f, 0x1.cc7e34p-60f,
     0.0f, 0.0f, 0.0f, 0x1.4b5fb4p-51f, 0.0f, 0x1.30a35ep-71f, 0x1.23e916p-106f,
     0x1.baf0fap-84f, 0x1.e73d7cp-20f, 0.0f, 0.0f, 0x1.b3f3ap-100f, 0.0f, 0.0f, 0.0f,
     0x1.22b17p-61f, 0x1.c58806p-73f, 0.0f, 0.0f, 0x1.d42c9ap-19f, 0.0f, 0.0f,
     0x1.056184p-84f, 0.0f, 0x1.eba29ap-52f, 0x1.bdecb6p-95f, 0.0f, 0x1.edaa02p-116f,
     0.0f, 0x1.e8a212p-50f, 0x1.d17186p-104f, 0.0f, 0.0f, 0.0f, 0x1.5eab1ep-57f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.5ac4bep-11f, 0.0f, 0x1.6a5de2p-86f, 0x1.98a0fap-19f,
     0.0f, 0x1.821e8p-6f, 0x1.d6a9eep-29f, 0x1.49e3ccp-6f, 0.0f, 0x1.1f9232p-109f,
     0.0f, 0.0f, 0.0f, 0x1.3e116ap-13f, 0x1.d525dep-117f, 0x1.0408e2p-37f,
     0x1.43f0ap-126f, 0x1.90b89cp-103f, 0x1.19ff52p-117f, 0.0f, 0x1.583ef2p-23f, 0.0f,
     0.0f, 0x1.7a518p-43f, 0x1.c17998p-38f, 0.0f, 0x1.451664p-124f, 0x1.096524p-107f,
     0x1.20575cp-41f, 0x1.406026p-109f, 0.0f, 0x1.064becp-37f, 0.0f, 0x1.58d52ep-47f,
     0.0f, 0x1.b18bdep-12f, 0x1.450f82p-81f, 0.0f, 0.0f, 0x1.fc155ap-58f,
     0x1.ccd41cp-79f, 0x1.dbfd1ep-47f, 0.0f, 0x1.692f34p-108f, 0.0f, 0x1.3dfa68p-7f,
     0x1.ae4bf8p-91f, 0x1.32e9c8p-50f, 0x1.74c40ap-77f, 0.0f, 0x1.e080b2p-94f,
     0x1.d8c9f2p-112f, 0.0f, 0.0f, 0x1.8cfc2ep-103f, 0x1.8ebba2p-86f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.6d6e84p-43f, 0.0f, 0.0f, 0x1.aa7428p-38f, 0.0f,
     0x1.0c711ap-91f, 0x1.2e813p-58f, 0.0f, 0x1.3135a8p-42f, 0.0f, 0x1.b96fa2p-48f,
     0x1.c10baap-12f, 0.0f, 0x1.512afep-58f, 0.0f, 0.0f, 0x1.0fae7cp-102f,
     0x1.3c7b4p-62f, 0x1.f46792p-55f, 0x1.ddbeeep-56f, 0x1.5ce35ep-2f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.fe74fcp-44f, 0x1.41f4ep-92f, 0x1.9e9a52p-40f, 0.0f,
     0x1.3a09e6p-85f, 0.0f, 0x1.1d1fecp-104f, 0.0f, 0.0f, 0x1.9e611ap-98f, 0.0f,
     0x1.d58d52p-48f, 0x1.204e56p-63f, 0x1.d6e4f8p-80f, 0.0f, 0x1.43583ap-6f, 0.0f,
     0.0f, 0.0f, 0x1.080becp-32f, 0x1.eb78dep-39f, 0.0f, 0x1.4b2f6p-112f,
     0x1.121b52p-123f, 0.0f, 0x1.1a8564p-83f, 0x1.26e448p-8f, 0.0f, 0x1.e6f554p-14f,
     0x1.d63346p-77f, 0x1p0f, 0x1.eef0e8p-79f, 0.0f, 0x1.67f28p-106f, 0.0f, 0.0f,
     0x1.446e2ap-86f, 0x1.ddef56p-35f, 0x1.bcdd7p-94f, 0.0f, 0x1.e9fa48p-2f,
     0x1.7aff84p-94f, 0x1.9575bcp-34f, 0.0f, 0.0f, 0x1.9a134ap-11f, 0x1.d4083cp-9f,
     0x1.b3a468p-121f, 0x1.1c24dcp-4f, 0x1.adb5dap-83f, 0.0f, 0x1.079654p-9f,
     0x1.5a955ap-110f, 0.0f, 0.0f, 0x1.2ca6f2p-47f, 0.0f, 0x1.24f3e8p-117f,
     0x1.1f3b16p-52f, 0x1.0d0a9cp-88f, 0.0f, 0.0f, 0x1.d2048ep-98f, 0x1.7c75a2p-113f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e03c36p-67f, 0x1.d611a4p-114f,
     0x1.e4f2dp-77f, 0x1.46f462p-55f, 0x1.d5c78ap-24f, 0.0f, 0.0f, 0x1.6484fep-81f,
     0x1.43aa4cp-65f, 0.0f, 0x1.e0b0b2p-82f, 0.0f, 0.0f, 0x1.1dda48p-47f, 0.0f, 0.0f,
     0x1.80f3f2p-76f, 0.0f, 0.0f, 0.0f, 0x1.1af9f4p-78f, 0x1.6a99b6p-9f, 0.0f, 0.0f,
     0x1.7d94eep-92f, 0x1.15e5ecp-116f, 0.0f, 0x1.c21238p-24f, 0.0f, 0x1.5ec636p-46f,
     0.0f, 0x1.b9fa1ap-102f, 0x1.fed79ap-16f, 0x1.4fa61p-106f, 0x1.56dd22p-32f, 0.0f,
     0x1.f38874p-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bc341ep-96f, 0x1.205144p-112f,
     0.0f, 0.0f, 0x1.053f9p-8f, 0x1.45624cp-111f, 0x1.6eb2b4p-52f, 0.0f, 0.0f, 0.0f,
     0x1.c2845p-25f, 0.0f, 0.0f, 0x1.87f144p-29f, 0.0f, 0x1.13ae8ep-94f, 0.0f, 0.0f,
     0x1.ac196p-91f, 0x1.604cfcp-8f, 0x1.5ed60cp-21f, 0x1.cbfbdcp-47f, 0.0f,
     0x1.f22682p-89f, 0x1.271c24p-10f, 0x1.84419cp-19f, 0.0f, 0.0f, 0x1.7da1dep-117f,
     0x1.79ffbep-50f, 0x1.245f08p-6f, 0x1.8b54ccp-69f, 0x1.08e9acp-9f,
     0x1.1db8c4p-52f, 0.0f, 0x1.eeea78p-21f, 0.0f, 0x1.3aaa0ap-120f, 0x1.fa3d06p-2f,
     0x1.8b2a44p-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.092ad6p-107f, 0.0f,
     0x1.420056p-42f, 0x1.a1b566p-101f, 0.0f, 0x1.d2b414p-13f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.215daap-63f, 0.0f, 0.0f, 0.0f,
     0x1.d1f6e2p-115f, 0x1.96150ep-106f, 0.0f, 0x1.e8f076p-78f, 0.0f, 0.0f,
     0x1.f98842p-70f, 0x1.91289p-54f, 0.0f, 0.0f, 0x1.bc6b5cp-119f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.7d610cp-114f, 0.0f, 0x1.3e89e8p-116f, 0x1.56a2aep-27f,
     0x1.d06718p-9f, 0x1.41a0d8p-39f, 0x1.a76cbcp-10f, 0.0f, 0.0f, 0x1.080272p-99f,
     0.0f, 0.0f, 0x1.6a9dd2p-19f, 0x1.654a66p-116f, 0x1.6e79e8p-112f, 0.0f,
     0x1.d1f0cep-52f, 0.0f, 0.0f, 0x1.2252c8p-65f, 0.0f, 0.0f, 0x1.65a36cp-21f, 0.0f,
     0x1.98a02cp-11f, 0x1.2724f2p-76f, 0.0f, 0x1.fcfd26p-11f, 0.0f, 0x1.5f6ccap-9f,
     0x1.ce44c2p-117f, 0.0f, 0x1.028982p-27f, 0.0f, 0.0f, 0x1.1c4e92p-83f,
     0x1.3f2b7ap-27f, 0.0f, 0.0f, 0.0f, 0x1.b1c70cp-80f, 0x1.e5f796p-108f,
     0x1.5d5732p-76f, 0x1.1a0dbep-65f, 0.0f, 0.0f, 0x1.557a0cp-108f, 0.0f,
     0x1.9a81bep-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4310fcp-34f, 0.0f,
     0x1.9b55b2p-115f, 0.0f, 0.0f, 0.0f, 0x1.ed93cp-106f, 0x1.aee57cp-113f, 0.0f,
     0.0f, 0.0f, 0x1.02019ap-87f, 0.0f, 0x1.87716ep-34f, 0.0f, 0x1.d38298p-100f,
     0x1.e2a104p-35f, 0.0f, 0.0f, 0x1.ade6d4p-73f, 0.0f, 0x1.98d23cp-65f, 0.0f, 0.0f,
     0x1.1f51acp-108f, 0.0f, 0.0f, 0x1.15b032p-77f, 0x1.372a38p-62f, 0x1.2239fap-47f,
     0.0f, 0.0f, 0x1.4c9fecp-4f, 0x1.01abeep-121f, 0x1.f305f6p-116f, 0.0f,
     0x1.040178p-11f, 0x1.a2ff28p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3399c4p-80f,
     0x1.f1a74ap-124f, 0x1.748032p-79f, 0.0f, 0.0f, 0.0f, 0x1.9c11b2p-84f,
     0x1.6db0fcp-82f, 0.0f, 0x1.924b18p-45f, 0x1.b1bc74p-118f, 0x1.9b9b94p-6f,
     0x1.2b798p-48f, 0.0f, 0.0f, 0.0f, 0x1.cae27ep-1f, 0x1.c11d2ep-96f, 0.0f, 0.0f,
     0x1.abe176p-30f, 0.0f, 0x1.63c64ep-18f, 0x1.50a8cp-114f, 0x1.c3538ap-46f, 0.0f,
     0x1.46af06p-79f, 0.0f, 0x1.115cep-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f57a56p-59f, 0.0f, 0x1.27de6ap-65f, 0.0f, 0x1.2aa108p-33f, 0.0f,
     0x1.0a0ebap-72f, 0.0f, 0x1.6f18d8p-93f, 0x1.951f58p-68f, 0x1.bd4dbep-16f,
     0x1.4db54p-121f, 0x1.e2387p-34f, 0.0f, 0.0f, 0.0f, 0x1.d491c4p-100f,
     0x1.b1d688p-118f, 0x1.63d946p-62f, 0.0f, 0.0f, 0.0f, 0x1.c60d9p-122f,
     0x1.a122ccp-76f, 0x1.a300b2p-55f, 0.0f, 0x1.02eb42p-47f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.3aa9ap-30f, 0.0f, 0.0f, 0x1.7c444cp-118f, 0.0f, 0x1.4c2592p-70f, 0.0f,
     0x1.bcd4fcp-45f, 0x1.e3cf96p-64f, 0x1.4fd358p-107f, 0.0f, 0x1.f7627ap-88f,
     0x1.7a3bdcp-22f, 0.0f, 0x1.506902p-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.330282p-9f,
     0.0f, 0x1.55164ap-72f, 0x1.318b08p-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.771a7ep-52f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b1f406p-63f, 0x1.bb977p-17f, 0.0f, 0.0f, 0.0f,
     0x1.6e9cd8p-55f, 0.0f, 0.0f, 0x1.8813acp-108f, 0x1.eededep-43f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.267c76p-106f, 0.0f, 0.0f, 0x1.055d74p-49f, 0.0f, 0x1.2c48c6p-18f,
     0x1.5d377ep-121f, 0.0f, 0x1.eb7c7p-126f, 0.0f, 0.0f, 0x1.c14c46p-7f, 0.0f,
     0x1.40929p-33f, 0.0f, 0.0f, 0x1.b22bf6p-93f, 0x1.3bd076p-51f, 0x1.aa7c0ep-16f,
     0x1.5062b4p-14f, 0x1.6581fp-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.86ce64p-19f,
     0x1.0516c8p-34f, 0x1.dff258p-1f, 0.0f, 0.0f, 0x1.92cc78p-71f, 0.0f, 0.0f,
     0x1.17dfbcp-9f, 0x1.5e1f3ep-47f, 0.0f, 0.0f, 0x1.22c1b2p-63f, 0.0f, 0.0f,
     0x1.21976cp-61f, 0x1.da326ep-83f, 0x1.a29fe6p-51f, 0.0f, 0x1.7b80fcp-28f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.567c7p-15f, 0.0f, 0x1.7fd562p-96f, 0.0f, 0x1.b5f77ep-96f,
     0x1.897b08p-35f, 0x1.abb7f8p-5f, 0x1p0f, 0x1.e3e97cp-111f, 0x1.999b74p-77f, 0.0f,
     0x1.c4b4eep-55f, 0.0f, 0x1.c2e3cp-116f, 0x1.2ac80cp-67f, 0.0f, 0.0f,
     0x1.be503ap-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2d0ac4p-66f, 0.0f, 0.0f,
     0x1.1ff64ep-101f, 0x1.d0c2c4p-44f, 0x1.09984p-78f, 0x1.9cf3a2p-51f, 0.0f, 0.0f,
     0.0f, 0x1.2d437cp-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.668abep-93f, 0x1.e168b4p-57f,
     0x1.1baa68p-75f, 0x1.43153ap-84f, 0x1.a781f8p-44f, 0x1.d8d8e4p-4f,
     0x1.186f34p-101f, 0.0f, 0x1.d870cap-78f, 0.0f, 0x1.f9ad9p-34f, 0.0f,
     0x1.fbb3f6p-59f, 0x1.2bbcf4p-54f, 0.0f, 0.0f, 0x1.579cb6p-8f, 0.0f,
     0x1.e4ad1p-72f, 0x1.2c2ba6p-91f, 0x1.15f046p-71f, 0x1.6597ecp-57f,
     0x1.eae57ep-75f, 0x1.d6c8f4p-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6ee72p-117f, 0.0f,
     0.0f, 0x1.b63bc2p-88f, 0.0f, 0.0f, 0x1.fa919ep-63f, 0x1.c7cc06p-38f, 0.0f, 0.0f,
     0.0f, 0x1.42cdecp-124f, 0.0f, 0x1.df301ap-62f, 0x1.5d230ep-72f, 0x1.73eb4p-80f,
     0.0f, 0.0f, 0x1.bc2f3ep-98f, 0.0f, 0x1.a711d8p-1f, 0.0f, 0x1.3a48fep-102f,
     0x1.5753fcp-71f, 0.0f, 0.0f, 0x1.deff3cp-37f, 0x1.77d40ep-16f, 0.0f,
     0x1.bba064p-121f, 0.0f, 0x1.eacbf4p-32f, 0x1.4d2c32p-18f, 0x1.6700e8p-25f,
     0x1.e116b6p-51f, 0.0f, 0x1.9144a6p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.111276p-4f,
     0x1.eddc4p-111f, 0x1.69971cp-116f, 0.0f, 0x1.5e5a4ep-80f, 0x1.42bdcp-71f,
     0x1.ffe85cp-70f, 0.0f, 0.0f, 0.0f, 0x1.b0014p-96f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.046bb2p-19f, 0x1.9de89ep-25f, 0x1.d04864p-11f, 0.0f, 0.0f, 0.0f,
     0x1.760fd4p-94f, 0.0f, 0.0f, 0x1.d4815cp-80f, 0.0f, 0x1.e3459p-21f, 0.0f, 0.0f,
     0.0f, 0x1.ad498cp-12f, 0.0f, 0.0f, 0x1.8466c4p-86f, 0x1.437e7ep-82f, 0x1p0f,
     0.0f, 0x1.1047ccp-85f, 0.0f, 0.0f, 0x1.ebf46p-82f, 0x1.cde0a8p-24f, 0.0f,
     0x1.ed6a74p-93f, 0.0f, 0x1.f253a4p-85f, 0x1.9080cap-116f, 0x1.8656a6p-25f, 0.0f,
     0x1.7e2d88p-122f, 0x1.fe5eb2p-61f, 0.0f, 0.0f, 0.0f, 0x1.1d5812p-12f,
     0x1.3bc1a8p-64f, 0x1.f58876p-95f, 0x1.62d4a8p-75f, 0.0f, 0x1.224996p-14f,
     0x1.ae876ep-48f, 0.0f, 0x1.52e57cp-68f, 0x1.f36b56p-2f, 0.0f, 0.0f,
     0x1.f9f856p-74f, 0x1.36e86p-43f, 0x1.28ed64p-80f, 0.0f, 0x1.4d2d0ep-50f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ec032cp-7f, 0.0f, 0.0f, 0.0f, 0x1.311caep-103f,
     0x1.032d54p-25f, 0x1.ddd11ep-80f, 0.0f, 0x1.0e85ep-51f, 0.0f, 0.0f, 0x1p0f,
     0x1.0a01fap-86f, 0x1.d09984p-20f, 0.0f, 0x1.22fce2p-82f, 0.0f, 0.0f,
     0x1.e1dac4p-15f, 0.0f, 0.0f, 0x1.e4e30ap-85f, 0x1.1171cp-78f, 0.0f,
     0x1.0d65fap-9f, 0.0f, 0.0f, 0.0f, 0x1.70915cp-47f, 0.0f, 0x1.d527d6p-49f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.304a06p-2f, 0.0f, 0x1.136674p-15f,
     0x1.d32274p-63f, 0x1.a8e3dcp-34f, 0.0f, 0x1.d56da6p-93f, 0x1.f9ce3ep-36f,
     0x1.d17c72p-72f, 0x1.0e834p-26f, 0x1.55fd58p-103f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.312dep-1f, 0.0f, 0.0f, 0x1.3fd25ep-116f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.287a72p-90f, 0x1.415e0ap-111f, 0.0f, 0x1.85404p-9f, 0x1.27feaap-6f,
     0x1.513d58p-87f, 0x1.ce0234p-92f, 0.0f, 0x1.d6457p-3f, 0.0f, 0.0f,
     0x1.1524d6p-75f, 0x1.e683d2p-105f, 0x1.a0c38p-50f, 0x1.3837f2p-74f,
     0x1.988ca4p-33f, 0x1.65456ep-45f, 0x1.38ec0ep-101f, 0x1.0f526ep-39f,
     0x1.7879bcp-33f, 0.0f, 0.0f, 0x1.52b70ap-97f, 0.0f, 0x1.4448dp-109f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b12df4p-120f, 0x1.e67e66p-17f, 0x1.ff6568p-14f, 0.0f,
     0x1.a7ba94p-86f, 0.0f, 0.0f, 0.0f, 0x1.c2d428p-67f, 0x1.a84a82p-23f,
     0x1.b4c5bep-118f, 0x1.fdd664p-108f, 0x1.2eba66p-79f, 0x1.457992p-7f, 0.0f, 0.0f,
     0x1.71109cp-75f, 0x1.9addb2p-62f, 0.0f, 0x1.48f92ep-42f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4e63bap-80f, 0.0f, 0x1.929eecp-76f, 0x1.fa3336p-30f, 0.0f, 0x1.44018ep-21f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e099b8p-119f, 0x1.c2fce8p-11f, 0x1.413886p-56f,
     0x1.acb986p-121f, 0.0f, 0.0f, 0x1.722e3p-69f, 0.0f, 0x1.5025d6p-59f, 0.0f,
     0x1.1322bap-3f, 0.0f, 0x1p0f, 0x1.efa6c4p-20f, 0x1.cae1cp-65f, 0x1.51ed88p-90f,
     0x1.b7cf6cp-44f, 0x1.dc17cp-119f, 0x1.a52fap-22f, 0x1.d6914cp-94f,
     0x1.9aab56p-89f, 0.0f, 0x1.2c97f6p-21f, 0x1.a930ap-24f, 0x1.aa9df4p-111f, 0.0f,
     0x1.1c92bep-37f, 0x1.63cc6ep-40f, 0.0f, 0x1.ade78ep-73f, 0x1.baae6ap-42f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.87a6ccp-94f, 0x1.3cd938p-22f, 0.0f, 0x1.ebb14ap-111f,
     0.0f, 0.0f, 0.0f, 0x1.5778e2p-53f, 0x1.fde6e8p-25f, 0x1.49ba1cp-85f,
     0x1.87142p-38f, 0x1.02f2acp-23f, 0x1.15edeap-33f, 0.0f, 0x1.fd6ef4p-18f, 0.0f,
     0x1.192024p-118f, 0.0f, 0x1.c583d6p-69f
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
            tmp1 = tanf(tmp0);
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
    printf("tanf %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("tanf bench acc %a\n", global_bench_acc);
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
