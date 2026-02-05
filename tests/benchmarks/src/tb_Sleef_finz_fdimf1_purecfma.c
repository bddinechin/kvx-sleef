/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_fdimf1_purecfma.c --function \
 *     Sleef_finz_fdimf1_purecfma --arity 2 --headers \
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
     0x1.5cdc84p-75f, 0x1.ee5c12p-76f, 0.0f, 0x1.2366f8p-97f, 0x1.83fb6p-72f,
     0x1.dfb64p-77f, 0.0f, 0.0f, 0.0f, 0x1.d7018ap-27f, 0x1.646bfcp-2f,
     0x1.ea4d42p-92f, 0.0f, 0x1.9603f2p-61f, 0x1.c54a2p-15f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ef9656p-72f, 0x1.0cf0dp-79f, 0x1.f9c148p-95f, 0x1.349626p-3f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.44f40ap-51f, 0.0f, 0x1.5c5908p-18f, 0x1.4b554cp-78f,
     0x1.39fa16p-56f, 0x1.8df64cp-91f, 0x1.f40054p-89f, 0x1.ad22b8p-46f, 0.0f,
     0x1.afae7ap-51f, 0.0f, 0x1.da32acp-97f, 0.0f, 0x1.bbfd2ep-43f, 0.0f,
     0x1.3d6e16p-60f, 0.0f, 0x1.4e6904p-100f, 0x1.b22556p-15f, 0x1.fa04d4p-92f,
     0x1.e28ac4p-12f, 0x1.a7028p-124f, 0.0f, 0x1.421862p-71f, 0.0f, 0.0f,
     0x1.93d46p-54f, 0x1.bec204p-75f, 0.0f, 0.0f, 0.0f, 0x1.46326ap-84f,
     0x1.b809a8p-27f, 0.0f, 0x1.f0905cp-41f, 0x1.d98024p-101f, 0x1.c2516ep-42f, 0.0f,
     0x1.9c3b74p-37f, 0x1.0278f4p-65f, 0.0f, 0x1.2c84f2p-86f, 0x1.ec7794p-45f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.fde004p-39f, 0x1.9f8192p-84f, 0x1.f60174p-87f, 0.0f, 0.0f,
     0.0f, 0x1.855b0cp-9f, 0x1.036fa2p-5f, 0.0f, 0.0f, 0.0f, 0x1.e948cep-96f,
     0x1.84de92p-39f, 0x1.6a69d4p-49f, 0x1.95ef8cp-6f, 0.0f, 0x1p0f, 0x1.835dap-51f,
     0.0f, 0.0f, 0x1.d7510ap-119f, 0x1.1b9b28p-83f, 0.0f, 0x1.7dbafap-76f,
     0x1.9e1926p-18f, 0.0f, 0.0f, 0x1.9bf102p-69f, 0.0f, 0x1.f52404p-39f, 0.0f, 0.0f,
     0x1.680a26p-56f, 0x1.61819ep-47f, 0x1.2f7916p-64f, 0x1.66f6acp-21f, 0.0f, 0.0f,
     0.0f, 0x1.e1e60cp-59f, 0x1.a66edp-118f, 0x1.7f1758p-88f, 0x1.a62fb6p-116f,
     0x1.c72cacp-51f, 0x1.b09f8p-34f, 0x1.6e7ff8p-8f, 0.0f, 0.0f, 0x1.38c734p-62f,
     0x1.90a696p-56f, 0.0f, 0x1.cd4d4p-54f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f,
     0x1.ea132ap-111f, 0x1.c85154p-120f, 0.0f, 0x1.4049ep-11f, 0.0f, 0.0f, 0.0f,
     0x1.cb628ap-66f, 0.0f, 0.0f, 0x1.e1c95ap-51f, 0x1.7b51c6p-61f, 0x1.f36ca4p-17f,
     0x1.46718ap-19f, 0.0f, 0x1.b91252p-122f, 0x1.f48f24p-75f, 0x1.6288aep-2f, 0.0f,
     0.0f, 0x1.e0748ep-6f, 0x1.af49a4p-88f, 0x1.a2d0eap-65f, 0.0f, 0x1.81c262p-112f,
     0.0f, 0.0f, 0x1.4e8402p-97f, 0x1.f5d59p-109f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f9b0dap-95f, 0x1.921974p-109f, 0.0f, 0x1.3ad072p-104f, 0x1.f48fb4p-24f, 0.0f,
     0x1.ae4becp-38f, 0x1.5492dap-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8510b6p-125f,
     0x1.045efp-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e43ef6p-29f, 0.0f, 0.0f,
     0.0f, 0x1.f066ap-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cbdcdcp-16f, 0.0f, 0.0f,
     0x1.9d2a64p-70f, 0x1.e75182p-20f, 0.0f, 0x1.361f2ep-124f, 0.0f, 0x1.e26e3ap-20f,
     0.0f, 0.0f, 0x1.c6a012p-3f, 0.0f, 0x1.46ad8cp-125f, 0.0f, 0.0f, 0x1.cb92cap-69f,
     0x1.9f8294p-102f, 0x1.6542e2p-51f, 0.0f, 0x1.da173ap-42f, 0x1.32e032p-51f, 0.0f,
     0x1.28491p-9f, 0x1.a316cap-100f, 0.0f, 0.0f, 0.0f, 0x1.47d626p-3f, 0.0f, 0.0f,
     0.0f, 0x1.2f500cp-42f, 0.0f, 0.0f, 0.0f, 0x1.a7727p-2f, 0.0f, 0x1.7b9f9p-100f,
     0x1.20a464p-29f, 0.0f, 0x1.ea418cp-109f, 0.0f, 0x1.0983aep-43f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.bf4c36p-19f, 0.0f, 0x1.6300ccp-121f, 0.0f, 0x1.13d70cp-27f, 0.0f, 0.0f,
     0x1.84f948p-123f, 0x1.6811ecp-36f, 0x1.307822p-71f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d95626p-35f, 0.0f, 0x1.b264b6p-123f, 0.0f, 0x1.2939b6p-38f, 0x1.bbbfdep-15f,
     0x1.5e37ccp-66f, 0x1.b49524p-83f, 0x1.2b64d2p-32f, 0.0f, 0x1.39fc28p-77f,
     0x1.3241d4p-25f, 0.0f, 0x1.6e076ap-26f, 0x1.c4272ap-64f, 0x1.c7350cp-84f, 0.0f,
     0.0f, 0x1.872154p-34f, 0.0f, 0.0f, 0x1.dfaaecp-44f, 0.0f, 0.0f, 0x1.218612p-98f,
     0x1.05879cp-43f, 0x1.687c94p-62f, 0.0f, 0.0f, 0.0f, 0x1.6371bp-20f, 0.0f,
     0x1.249a7cp-105f, 0.0f, 0.0f, 0x1.84f89ep-68f, 0.0f, 0x1.90bd02p-9f, 0.0f,
     0x1.674a54p-79f, 0.0f, 0.0f, 0.0f, 0x1.ee1168p-111f, 0x1.890f3ep-101f,
     0x1.35a804p-61f, 0x1.6823p-23f, 0.0f, 0x1.6e9e06p-114f, 0x1.7bde2p-90f,
     0x1.6f3d9ap-95f, 0.0f, 0x1.400c4cp-49f, 0x1.3ed61cp-83f, 0.0f, 0.0f,
     0x1.91f384p-63f, 0.0f, 0.0f, 0x1.6c42fap-12f, 0x1.aa77e4p-65f, 0x1.1907f2p-79f,
     0.0f, 0x1.cb2b4ap-118f, 0x1.d914a4p-111f, 0.0f, 0x1.ccee88p-121f,
     0x1.e5895ap-96f, 0x1.3bff68p-24f, 0x1.3d3c2ep-109f, 0x1.24ee72p-59f, 0.0f, 0.0f,
     0x1.f4efdap-33f, 0x1.6c38eep-113f, 0x1.0b8ec2p-80f, 0.0f, 0.0f, 0.0f,
     0x1.b3da36p-100f, 0x1.a3a196p-113f, 0x1.8d0642p-62f, 0.0f, 0x1.647894p-41f, 0.0f,
     0x1.df6ab4p-65f, 0x1.c914aap-56f, 0.0f, 0.0f, 0x1.b12ebcp-102f, 0.0f, 0.0f,
     0x1.33bd2ap-14f, 0x1.c90a34p-69f, 0.0f, 0x1.bcc54cp-84f, 0x1.156a4ap-116f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.06bbfep-115f, 0.0f, 0.0f, 0x1.cc4be2p-78f,
     0.0f, 0x1.272128p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0db838p-57f, 0.0f, 0.0f,
     0x1p0f, 0x1.d920dcp-55f, 0.0f, 0.0f, 0x1.8aa7dap-122f, 0x1.eb3426p-74f,
     0x1.df9ca6p-5f, 0.0f, 0.0f, 0x1.919182p-63f, 0x1.56726cp-72f, 0x1.c8225cp-49f,
     0x1.3b291ap-37f, 0x1.f8033cp-45f, 0x1.a070ecp-33f, 0.0f, 0x1.5b4a6p-118f, 0.0f,
     0x1.e4dc76p-95f, 0x1.67e64ap-24f, 0x1.1f4e8cp-11f, 0x1.daa11p-98f, 0x1.4abbfp-9f,
     0x1.ef6b98p-8f, 0.0f, 0x1.b62d6cp-107f, 0x1.a0f23ap-25f, 0.0f, 0.0f, 0.0f,
     0x1.cdb88p-64f, 0.0f, 0x1.48c7cap-74f, 0.0f, 0x1.485a38p-123f, 0.0f,
     0x1.80a496p-1f, 0.0f, 0x1.6a73a8p-87f, 0.0f, 0.0f, 0x1.c8d9c8p-61f, 0.0f, 0.0f,
     0x1.0230a6p-19f, 0x1.886e26p-43f, 0.0f, 0x1.2b1362p-22f, 0x1.46380ep-94f, 0.0f,
     0x1.1baaf2p-123f, 0x1.a0cba6p-61f, 0.0f, 0.0f, 0.0f, 0x1.5575a8p-22f, 0.0f,
     0x1.80d368p-71f, 0.0f, 0x1.977002p-57f, 0x1.68ef5ap-114f, 0x1.6982c2p-33f, 0.0f,
     0x1.b5ab24p-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1daab4p-14f,
     0x1.1f0a5ep-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.25e5a8p-3f, 0.0f, 0x1.3e5d4ep-97f, 0.0f, 0.0f, 0.0f, 0x1.e244a8p-61f,
     0x1.46cb48p-90f, 0x1.d1c126p-78f, 0x1.bf0e48p-103f, 0.0f, 0x1.b84b4ep-16f, 0.0f,
     0.0f, 0x1.d755e6p-113f, 0x1.9cf072p-111f, 0x1.9ae6e4p-70f, 0.0f, 0x1.775158p-10f,
     0x1.9be356p-59f, 0x1.de8428p-63f, 0x1.172248p-28f, 0x1.4bc4c4p-41f, 0.0f, 0.0f,
     0x1.72ad26p-62f, 0x1.f2e08ap-70f, 0.0f, 0.0f, 0x1.8b13b2p-74f, 0x1.74ba16p-10f,
     0.0f, 0x1.244b5ep-64f, 0.0f, 0.0f, 0x1.fc561ap-51f, 0x1.776ab2p-17f, 0.0f,
     0x1.d6f5c4p-8f, 0.0f, 0.0f, 0.0f, 0x1.688c9cp-117f, 0.0f, 0x1.2a7758p-2f, 0.0f,
     0.0f, 0x1.1da778p-60f, 0x1.5d61f2p-121f, 0.0f, 0x1.f254bep-72f, 0x1.4d1e26p-106f,
     0x1.b226a6p-83f, 0.0f, 0x1p0f, 0.0f, 0x1.f1da06p-114f, 0.0f, 0.0f, 0.0f,
     0x1.7bda74p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.53eecp-111f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e1ad86p-108f, 0.0f, 0.0f, 0.0f, 0x1.378532p-26f, 0.0f, 0.0f,
     0x1.e4ee04p-116f, 0.0f, 0.0f, 0x1.a86abep-112f, 0x1.4312ecp-57f, 0.0f, 0.0f,
     0x1.33554p-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9c5c56p-78f, 0.0f, 0.0f,
     0x1.76f63p-27f, 0.0f, 0x1.5ea482p-17f, 0.0f, 0.0f, 0x1.a73098p-60f, 0.0f, 0.0f,
     0x1.941396p-110f, 0x1.57c8e2p-25f, 0x1.a860b4p-49f, 0x1.a141b6p-79f,
     0x1.66608p-108f, 0.0f, 0x1.bff194p-21f, 0x1.50c874p-115f, 0x1.722514p-93f,
     0x1.94a9p-120f, 0x1.037b1ap-97f, 0.0f, 0.0f, 0x1.a3756p-30f, 0x1.82e214p-18f,
     0x1.77eb68p-1f, 0x1.e3f5b4p-13f, 0x1.ace19p-24f, 0x1.19d8ccp-111f, 0.0f, 0.0f,
     0x1.cbf934p-23f, 0.0f, 0.0f, 0x1.8f6688p-52f, 0.0f, 0x1.5d0acap-18f, 0.0f,
     0x1.9912aep-114f, 0.0f, 0x1.492942p-48f, 0x1.c4043ap-85f, 0x1.e5c76cp-22f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.83712p-78f, 0.0f, 0.0f, 0x1.767ce6p-29f, 0.0f,
     0x1.869744p-116f, 0.0f, 0x1.253c3ep-120f, 0.0f, 0.0f, 0x1.03d5p-121f, 0.0f, 0.0f,
     0x1.a5b956p-13f, 0x1.2f6ffap-97f, 0.0f, 0x1.b78bf8p-59f, 0x1.7cc83cp-4f,
     0x1.fc56eap-116f, 0x1.1b2074p-68f, 0x1.06cdaap-35f, 0.0f, 0.0f, 0x1.8e6438p-114f,
     0.0f, 0.0f, 0x1.49520ep-64f, 0.0f, 0x1.4e7ec2p-57f, 0.0f, 0x1.4d8ffap-12f, 0.0f,
     0x1.8cc8c6p-68f, 0.0f, 0.0f, 0x1.7bc05ep-125f, 0.0f, 0x1.baaf9ap-47f,
     0x1.213782p-90f, 0.0f, 0.0f, 0.0f, 0x1.50fba8p-27f, 0x1.a85cf6p-92f,
     0x1.6b3766p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c03e8ep-97f, 0x1.f6e11ap-80f, 0.0f,
     0.0f, 0x1.6ab4bep-54f, 0x1.ebef8ap-124f, 0.0f, 0.0f, 0.0f, 0x1.d07a98p-83f,
     0x1.14a77p-44f, 0x1.67194cp-116f, 0x1.2a4de2p-51f, 0x1.4b5d52p-122f, 0.0f,
     0x1.c7e832p-114f, 0x1.c679d4p-34f, 0x1.cc62e8p-86f, 0x1.3c4754p-113f,
     0x1.57239ep-98f, 0x1.a3c6dep-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a0f3b8p-89f, 0x1.54107ap-102f, 0.0f, 0x1.0b0f74p-108f, 0x1.6ccd74p-4f,
     0x1.1cc84ap-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.923dcp-113f, 0.0f, 0x1.fd603ap-4f, 0x1.f92b18p-109f, 0x1.e28896p-43f,
     0x1.03fc22p-76f, 0.0f, 0.0f, 0x1.36a168p-47f, 0.0f, 0.0f, 0x1.00f0fap-1f, 0.0f,
     0x1.c059e2p-114f, 0.0f, 0x1.7edadcp-42f, 0.0f, 0.0f, 0x1.3bee78p-111f,
     0x1.ea95bep-89f, 0.0f, 0x1.2add62p-115f, 0x1.bab2a8p-77f, 0.0f, 0x1.ecdb68p-50f,
     0.0f, 0.0f, 0x1.b3e3fap-16f, 0x1.53f28ap-42f, 0.0f, 0.0f, 0x1.b4e10ep-10f, 0.0f,
     0.0f, 0x1.1e4402p-107f, 0.0f, 0x1.83abb4p-76f, 0.0f, 0.0f, 0x1.0af78ap-94f, 0.0f,
     0x1.7df64ap-42f, 0.0f, 0x1.03acdap-49f, 0x1.0d5166p-49f, 0x1.c643b2p-124f, 0.0f,
     0.0f, 0.0f, 0x1.41c072p-104f, 0.0f, 0x1.a4901cp-35f, 0x1.b2965p-22f,
     0x1.7e69a4p-64f, 0x1.0376f2p-84f, 0.0f, 0x1.46c12p-59f, 0x1.9aa084p-108f, 0.0f,
     0x1.c3148ap-35f, 0x1.e3d3dap-126f, 0x1.af8b8p-97f, 0x1.fc34bap-81f,
     0x1.41e16cp-52f, 0.0f, 0x1.62e996p-74f, 0x1.c25856p-75f, 0x1.6f9196p-43f, 0.0f,
     0.0f, 0.0f, 0x1.5df63p-118f, 0.0f, 0x1.e3462ap-99f, 0x1.6f75fap-103f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5d51f2p-18f, 0x1.a6857cp-76f,
     0x1.26efc8p-56f, 0.0f, 0.0f, 0x1.57e0d6p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b6aebcp-43f, 0.0f, 0.0f, 0.0f, 0x1.4c812ep-111f, 0.0f,
     0x1.54b954p-59f, 0x1.527cdp-62f, 0.0f, 0.0f, 0.0f, 0x1.eb36bep-73f,
     0x1.c1d546p-118f, 0x1.18f6d2p-101f, 0.0f, 0.0f, 0.0f, 0x1.9ad1a4p-32f,
     0x1.e54a62p-29f, 0x1.2dd80ap-99f, 0x1.f8f2a6p-77f, 0.0f, 0x1.5cbfaap-4f, 0.0f,
     0x1.a0cf3ap-104f, 0.0f, 0.0f, 0x1.dde80cp-33f, 0.0f, 0x1.e58ef6p-4f,
     0x1.429c64p-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4891cp-56f, 0.0f,
     0x1.9c843ap-32f, 0x1.0d96cap-117f, 0x1.a1880ap-39f, 0.0f, 0x1.733a0ap-80f,
     0x1.2c714cp-87f, 0x1.8901dp-81f, 0x1.d25e28p-99f, 0x1.4101acp-87f, 0.0f,
     0x1.3823ccp-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7c0282p-73f, 0.0f, 0x1.aa77p-34f,
     0x1.fbab48p-90f, 0x1.76de56p-67f, 0.0f, 0.0f, 0x1.cf37ccp-39f, 0x1.a2b4f4p-71f,
     0.0f, 0x1.7da8fap-53f, 0.0f, 0.0f, 0x1.68443ap-19f, 0x1.ca8ebap-7f, 0.0f, 0.0f,
     0.0f, 0x1.8c0a5ep-73f, 0x1.916956p-42f, 0x1.405baep-19f, 0x1.669cb6p-102f,
     0x1.719178p-18f, 0x1.34cb38p-126f, 0x1.347db4p-116f, 0x1.952c1p-116f, 0.0f, 0.0f,
     0x1.dc9abp-71f, 0x1.6bc8d4p-29f, 0.0f, 0x1.5aeda8p-39f, 0x1.5aa7ap-26f, 0.0f,
     0.0f, 0x1.4512ccp-67f, 0x1.d8764cp-76f, 0x1.7e5ccap-95f, 0.0f, 0x1.6247f6p-31f,
     0x1.709272p-2f, 0x1.d655ecp-44f, 0.0f, 0.0f, 0.0f, 0x1.178becp-31f,
     0x1.f30694p-27f, 0.0f, 0x1.9bc7d2p-116f, 0x1.a44276p-84f, 0x1.681c52p-59f, 0.0f,
     0.0f, 0x1.6b217cp-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.affc74p-37f, 0.0f, 0.0f, 0.0f,
     0x1.77b344p-22f, 0.0f, 0.0f, 0x1.1933dap-12f, 0.0f, 0x1.9b4934p-105f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.38a8dp-63f, 0.0f, 0x1.d2ebaap-19f, 0.0f,
     0x1p0f, 0.0f, 0x1.61fe9p-114f, 0x1.9bf064p-13f, 0x1.0b5f08p-12f, 0x1.db86d4p-65f,
     0.0f, 0x1.24d6e4p-83f, 0x1.cefecap-66f, 0x1.13b568p-42f, 0x1.4bb17p-46f, 0.0f,
     0.0f, 0x1.04b95cp-110f, 0.0f, 0.0f, 0x1.ecafc8p-96f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.86180cp-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b0ed82p-65f, 0x1.09783ap-22f, 0.0f,
     0x1.ff04a2p-18f, 0x1.04a31ep-88f, 0.0f, 0.0f, 0x1.68813ap-125f, 0x1.679efep-91f,
     0.0f, 0.0f, 0x1.190604p-48f, 0.0f, 0x1.0d7adcp-95f, 0x1.68b83p-76f,
     0x1.7c2b6p-95f, 0x1.eb6666p-12f, 0.0f, 0.0f, 0x1.6d61c4p-65f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.cfd036p-15f, 0x1.233a76p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5c56ecp-62f, 0.0f, 0.0f, 0.0f, 0x1.ac9ecp-48f, 0.0f, 0x1.cbb614p-33f, 0.0f,
     0x1.ae4c18p-100f, 0x1.e2a5bp-124f, 0.0f, 0x1.641e5cp-2f, 0x1.1071cap-81f,
     0x1.914cf4p-33f, 0x1.579b1p-34f, 0x1.033dfcp-31f, 0.0f, 0x1.83004p-4f,
     0x1.2d0c2ep-29f, 0.0f, 0.0f, 0x1.4041aep-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f
};
static const float external_bench_wrapper_input_table_arg1[1001]  = {
     0x1.14ee82p-15f, 0.0f, 0x1.7618ap-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.57f32cp-87f, 0x1.955b38p-106f, 0.0f, 0.0f, 0.0f, 0x1.cec9a2p-123f,
     0.0f, 0x1.fe9a96p-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.97f6p-2f,
     0.0f, 0x1.61ba2ep-87f, 0x1.adf5e4p-5f, 0x1.0a9794p-88f, 0.0f, 0.0f,
     0x1.3195b6p-90f, 0.0f, 0x1.3c9784p-98f, 0x1.92060cp-109f, 0.0f, 0.0f,
     0x1.0b8848p-112f, 0x1.dfec72p-100f, 0x1.b701a2p-19f, 0x1.25e586p-18f, 0.0f, 0.0f,
     0x1.0f1c58p-39f, 0.0f, 0x1.794dc2p-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1f2bbep-98f,
     0x1.e4f1dap-103f, 0.0f, 0x1.33c7fap-123f, 0x1.f8d63cp-115f, 0x1.7ea326p-117f,
     0x1.b69b9p-125f, 0.0f, 0.0f, 0.0f, 0x1.35144ap-113f, 0x1.b3ab2ap-62f,
     0x1.2ea9c6p-68f, 0x1.051738p-83f, 0x1.1567dep-43f, 0x1.b9a614p-106f,
     0x1.362522p-28f, 0x1.addcf4p-122f, 0x1.6fd144p-37f, 0x1.5fc23cp-91f, 0.0f, 0.0f,
     0x1.a7031ep-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6db6cp-107f, 0.0f,
     0x1.d2e764p-80f, 0.0f, 0.0f, 0.0f, 0x1.d760a8p-87f, 0x1.3f20e2p-44f, 0.0f, 0.0f,
     0x1.5e7322p-39f, 0.0f, 0x1.692c2cp-86f, 0x1.2b53d2p-87f, 0.0f, 0x1.059b88p-101f,
     0.0f, 0.0f, 0x1.93e45ep-1f, 0.0f, 0x1.3a2af8p-80f, 0.0f, 0.0f, 0x1.2b72d6p-18f,
     0x1.eaec0ap-8f, 0x1.aa621p-113f, 0.0f, 0x1.591474p-91f, 0.0f, 0x1.fb1acp-67f,
     0x1.03fbdcp-112f, 0x1.e56b16p-123f, 0.0f, 0.0f, 0x1.0505e2p-115f, 0.0f, 0.0f,
     0x1.af9538p-38f, 0.0f, 0x1.6a2198p-3f, 0.0f, 0.0f, 0x1.87b114p-14f,
     0x1.a67ca4p-10f, 0x1.5632a6p-4f, 0x1.98b004p-117f, 0x1.c53f38p-35f, 0.0f, 0.0f,
     0x1.388c22p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6dfb56p-43f, 0.0f, 0.0f,
     0x1.cedceep-121f, 0.0f, 0x1.0684eap-23f, 0.0f, 0.0f, 0.0f, 0x1.77e892p-100f,
     0.0f, 0x1.c4babep-60f, 0x1.1a959ap-115f, 0.0f, 0x1.5b9fc8p-97f, 0.0f, 0.0f,
     0x1.025dacp-9f, 0x1.243892p-58f, 0x1.e6062p-102f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.95d7ecp-47f, 0.0f, 0x1.d3f2c4p-85f, 0.0f, 0.0f, 0x1.8bf2f8p-43f,
     0x1.1052f8p-120f, 0x1.7dcfc6p-116f, 0x1.9e2ae6p-25f, 0x1.fbdaaap-50f,
     0x1.9a5e74p-80f, 0.0f, 0x1.d5fcc8p-21f, 0.0f, 0.0f, 0x1.366d24p-84f,
     0x1.07c2e6p-55f, 0x1.835494p-67f, 0x1.ea9564p-25f, 0.0f, 0x1.dc7bcap-70f,
     0x1.fd4bfap-2f, 0.0f, 0x1.28a6f8p-105f, 0x1.74c83p-19f, 0x1.ca1dc6p-17f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.5875d4p-79f, 0x1.2144c2p-86f, 0.0f, 0x1.7548acp-111f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f85c42p-19f, 0x1.a12214p-77f, 0.0f, 0x1.f95074p-85f,
     0x1.cf687p-93f, 0x1.66c6aep-33f, 0x1.5b964cp-32f, 0x1.996c5ap-24f,
     0x1.96c50ap-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0bd428p-125f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.2ac0c2p-68f, 0.0f, 0.0f, 0.0f, 0x1.b12bd8p-60f,
     0x1.10585ep-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.054fd2p-43f, 0x1.f02f58p-14f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.641efcp-21f, 0.0f, 0.0f, 0.0f, 0x1.8d8be4p-112f,
     0x1.44f794p-101f, 0.0f, 0.0f, 0.0f, 0x1.8d195p-116f, 0.0f, 0x1.446554p-65f, 0.0f,
     0.0f, 0.0f, 0x1.cfe63cp-118f, 0x1.27a80cp-97f, 0x1.b1b1f6p-43f, 0.0f,
     0x1.1b660ap-63f, 0.0f, 0x1.7c5c26p-81f, 0.0f, 0.0f, 0x1.ae57e2p-120f,
     0x1.ff012p-108f, 0x1.9484eep-68f, 0x1.8e8ea8p-52f, 0x1.433adap-44f, 0.0f,
     0x1.5461ecp-85f, 0x1.5da30ep-20f, 0.0f, 0x1.8a50fep-68f, 0x1.c93184p-84f,
     0x1.1a40fcp-100f, 0.0f, 0.0f, 0x1.50cbd8p-37f, 0.0f, 0x1.8569aap-67f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.93639p-28f, 0x1.cb721ep-58f, 0x1.17627cp-126f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.249a12p-92f, 0.0f, 0.0f, 0x1.4e497cp-122f,
     0.0f, 0x1.90b8c4p-37f, 0x1.2990dep-34f, 0.0f, 0.0f, 0x1.45084ep-92f, 0.0f, 0.0f,
     0x1.5e9d6ap-16f, 0x1.2f5b04p-77f, 0x1.16f0ap-46f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a58f4cp-61f, 0x1.ad0c8ep-23f, 0.0f, 0.0f, 0.0f, 0x1.213952p-72f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.344baep-102f, 0.0f, 0x1.230122p-107f, 0x1.c32f66p-13f,
     0x1.107b96p-49f, 0x1.5eac2cp-13f, 0x1.cffed2p-14f, 0.0f, 0x1.438812p-1f, 0.0f,
     0.0f, 0x1.645a3ep-49f, 0.0f, 0x1.f7e944p-68f, 0x1.bedd9ep-18f, 0x1.55e442p-65f,
     0x1.51efep-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d84958p-22f, 0.0f,
     0x1.b4b5aep-94f, 0x1.4e117p-34f, 0x1.771d1ep-78f, 0x1.dd5a36p-6f,
     0x1.6bcf2ap-108f, 0.0f, 0.0f, 0x1.91031cp-59f, 0x1.5b20bcp-86f, 0.0f,
     0x1.388948p-117f, 0x1.86948p-84f, 0x1.f704ap-67f, 0x1.178b56p-124f,
     0x1.75085p-84f, 0x1.bbcb3p-70f, 0.0f, 0x1.96c41ap-4f, 0x1.fd721cp-50f, 0.0f,
     0.0f, 0x1.1312cep-65f, 0.0f, 0.0f, 0x1.70f27cp-4f, 0x1.b82d54p-21f, 0.0f,
     0x1.4e5426p-38f, 0x1.5ea40ap-35f, 0.0f, 0x1.80836ep-103f, 0x1.124b56p-106f,
     0x1.8b7a42p-73f, 0.0f, 0x1.8c53f2p-59f, 0x1.c87d68p-121f, 0.0f, 0x1.027bf2p-70f,
     0x1.9142eap-35f, 0x1.c3de96p-68f, 0.0f, 0x1.4b1adap-99f, 0x1.3914a4p-71f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a0521ep-94f, 0x1.c651a4p-64f, 0.0f, 0x1.c23384p-110f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.70425ep-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.75f396p-10f, 0x1.977476p-80f, 0x1.eae304p-36f, 0x1.b66a94p-70f,
     0x1.f5f838p-92f, 0x1.312818p-74f, 0x1.ede98cp-47f, 0x1.67efaap-6f, 0.0f,
     0x1.a2b3p-120f, 0x1.ef536cp-6f, 0x1.ead752p-105f, 0.0f, 0x1.35c2e4p-18f, 0.0f,
     0x1.683118p-26f, 0x1.b22a7ap-4f, 0x1.774d2cp-42f, 0x1.0626e6p-86f,
     0x1.58fc18p-60f, 0x1.755ff4p-80f, 0.0f, 0.0f, 0.0f, 0x1.003928p-98f, 0.0f, 0.0f,
     0x1.d136ecp-84f, 0.0f, 0.0f, 0x1.968d42p-81f, 0.0f, 0x1.bd403ap-109f,
     0x1.e4389ep-78f, 0.0f, 0x1.f76104p-96f, 0.0f, 0x1.630d02p-65f, 0x1.c15ccap-6f,
     0x1.e9a9dp-6f, 0.0f, 0x1.66d9d6p-25f, 0x1.e56c42p-48f, 0x1.16ea26p-107f,
     0x1.7d99d8p-66f, 0x1.245dfp-64f, 0x1.3d4a48p-31f, 0.0f, 0.0f, 0x1.37034ep-115f,
     0x1.fcaa9ap-56f, 0.0f, 0.0f, 0x1.18cb32p-4f, 0x1.f6cb6ep-90f, 0x1.61c712p-59f,
     0.0f, 0.0f, 0.0f, 0x1.b46acep-77f, 0x1.19fb24p-92f, 0x1.631d42p-76f, 0.0f,
     0x1.0becep-11f, 0x1.c073d2p-123f, 0.0f, 0x1.dc8e64p-70f, 0.0f, 0x1.7acbc2p-33f,
     0.0f, 0.0f, 0x1.016ca6p-42f, 0x1.c5839ep-17f, 0x1.b83236p-99f, 0.0f,
     0x1.463632p-104f, 0.0f, 0x1.3dded8p-85f, 0x1.43c0e2p-85f, 0x1.3c594ep-81f, 0.0f,
     0x1.3e516ep-5f, 0.0f, 0x1.d3905cp-79f, 0x1.96841ap-1f, 0.0f, 0x1.1e3f08p-57f,
     0.0f, 0x1.dbea2p-126f, 0.0f, 0x1.446d7ep-87f, 0x1.d799ap-125f, 0x1.ee23a4p-46f,
     0.0f, 0.0f, 0.0f, 0x1.befc0ap-23f, 0x1.eb5f2cp-58f, 0.0f, 0x1.ce17dep-106f,
     0x1.45b93p-39f, 0.0f, 0x1.b10ca8p-104f, 0x1.03b0a8p-118f, 0x1.c107a6p-92f, 0.0f,
     0x1.8fa1fp-67f, 0x1.4c875cp-41f, 0x1.4cd6aap-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.de6b1ap-108f, 0.0f, 0x1.41052ap-53f, 0x1.0e00ap-12f, 0x1.177c4cp-74f, 0.0f,
     0x1.e8225ep-16f, 0.0f, 0.0f, 0x1.def53ap-63f, 0x1.6a07c6p-31f, 0.0f,
     0x1.de8a18p-32f, 0x1.3d831p-33f, 0x1.de2d8ep-57f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e31a62p-9f, 0.0f, 0.0f, 0x1.708d7ap-57f, 0.0f, 0.0f, 0.0f, 0x1.03f63ap-23f,
     0.0f, 0x1.e1aaf2p-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fe5f6p-34f,
     0.0f, 0.0f, 0.0f, 0x1.e2b5e2p-80f, 0x1.0d209ap-108f, 0.0f, 0x1.fb839ep-105f,
     0.0f, 0.0f, 0x1.939748p-42f, 0.0f, 0.0f, 0x1.ec66ecp-38f, 0.0f, 0.0f, 0.0f,
     0x1.af1f9ap-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bd9602p-114f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.4510dcp-66f, 0.0f, 0.0f, 0.0f, 0x1.312084p-46f, 0.0f, 0.0f,
     0.0f, 0x1.d0993p-54f, 0x1.377efcp-109f, 0.0f, 0.0f, 0.0f, 0x1.d3ed14p-122f,
     0x1.7abd7ap-93f, 0.0f, 0.0f, 0x1.477788p-39f, 0x1.de81fp-1f, 0x1.78dbdcp-79f,
     0x1.86a62p-113f, 0.0f, 0x1.062c6ep-42f, 0.0f, 0x1.5daa8cp-31f, 0.0f,
     0x1.66c588p-11f, 0x1.7634ap-38f, 0x1.0a896cp-87f, 0.0f, 0x1.68ba42p-106f,
     0x1.6f6172p-90f, 0x1.657142p-100f, 0.0f, 0.0f, 0x1.21fb7cp-50f, 0x1.873bep-46f,
     0x1.8b61ecp-1f, 0.0f, 0.0f, 0x1.50fa12p-96f, 0.0f, 0.0f, 0x1.9d8abp-7f,
     0x1.b3e33cp-96f, 0x1.044f9ap-57f, 0.0f, 0.0f, 0x1.8f7952p-24f, 0x1.ea7556p-113f,
     0x1.1e0eb4p-28f, 0x1.3f2272p-22f, 0.0f, 0.0f, 0.0f, 0x1.51c4aep-6f, 0.0f,
     0x1.a68c74p-119f, 0.0f, 0.0f, 0.0f, 0x1.cc78ep-124f, 0x1.8dba5p-67f, 0.0f,
     0x1.53b3e2p-15f, 0x1.b54956p-118f, 0x1.a9fc3p-115f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d4d862p-52f, 0x1.08a74cp-31f, 0.0f, 0.0f, 0.0f, 0x1.232ba8p-122f, 0.0f,
     0x1.553876p-44f, 0x1.2596cep-61f, 0x1.4c9e92p-93f, 0x1.027d3cp-108f, 0.0f,
     0x1.fd5c98p-101f, 0.0f, 0x1.acfcbap-82f, 0.0f, 0x1.f6eccp-68f, 0.0f,
     0x1.290daap-106f, 0.0f, 0.0f, 0.0f, 0x1.10deeep-121f, 0.0f, 0.0f,
     0x1.263ce6p-24f, 0x1.73873ap-17f, 0.0f, 0.0f, 0x1.5ae13ep-118f, 0x1.8f6182p-104f,
     0.0f, 0.0f, 0x1.59f2eep-15f, 0x1.742b78p-41f, 0.0f, 0x1.c258fcp-34f, 0.0f, 0.0f,
     0x1.5e26b4p-68f, 0x1.5c97bp-51f, 0.0f, 0x1.57b128p-83f, 0x1.3646f8p-33f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.92837ap-96f, 0x1.a0d93ep-109f, 0x1.2c6a72p-112f,
     0x1.205cc2p-112f, 0x1.87ce5ep-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f197dap-13f,
     0.0f, 0x1.60fe7ep-54f, 0.0f, 0x1.012bbap-118f, 0.0f, 0.0f, 0x1.c41708p-120f,
     0x1.47d0d4p-36f, 0x1.c5c4cap-5f, 0x1.e80126p-97f, 0x1.0df4p-35f, 0.0f, 0.0f,
     0.0f, 0x1.6d91cap-82f, 0x1.a38b14p-3f, 0x1.079afp-111f, 0.0f, 0x1.f70308p-105f,
     0.0f, 0x1.bcbcf4p-35f, 0.0f, 0x1.cb8ce8p-49f, 0x1.678244p-52f, 0x1.bde64p-118f,
     0.0f, 0.0f, 0.0f, 0x1.bf654p-124f, 0.0f, 0.0f, 0x1.2f122cp-99f, 0x1.a445b6p-87f,
     0x1.5f5db2p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6ce096p-120f, 0.0f, 0x1.65d568p-61f,
     0x1.01c5b2p-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cdd60cp-64f,
     0x1.99107p-102f, 0.0f, 0x1.8480d2p-69f, 0.0f, 0x1.db8f12p-112f, 0x1.681a04p-52f,
     0.0f, 0x1.9a9146p-30f, 0x1.6d73cep-118f, 0x1.6880ep-43f, 0x1.ca32e4p-4f,
     0x1.919e48p-1f, 0x1.0d0a7cp-104f, 0.0f, 0.0f, 0x1.e87ecap-115f, 0.0f,
     0x1.7ee386p-111f, 0.0f, 0x1.1917b8p-49f, 0x1.598d2ep-57f, 0.0f, 0x1.e381dap-70f,
     0.0f, 0x1.745536p-33f, 0x1.5bfa58p-106f, 0x1.ff5deap-4f, 0x1.e2f876p-99f, 0.0f,
     0x1.3101bp-123f, 0.0f, 0x1.ab7708p-10f, 0x1.48d292p-43f, 0.0f, 0x1.85a40ap-20f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c92776p-28f, 0.0f, 0.0f, 0x1.abdb36p-14f,
     0x1.65ef74p-46f, 0.0f, 0x1.7e160cp-72f, 0x1.98ecfp-92f, 0x1.190a5p-63f,
     0x1.915bd8p-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.944c3cp-61f, 0.0f, 0.0f,
     0x1.10bdd4p-106f, 0.0f, 0.0f, 0x1.0ae026p-92f, 0x1.49b494p-1f, 0.0f, 0.0f, 0.0f,
     0x1.bbc09ap-64f, 0x1.b08ccp-92f, 0x1.c7726ap-2f, 0x1.828956p-113f,
     0x1.1dd014p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.54e3b4p-55f, 0.0f, 0x1.f2defcp-68f,
     0x1.b5c868p-85f, 0.0f, 0x1.cbd046p-30f, 0x1.7fba5ap-1f, 0.0f, 0.0f, 0.0f,
     0x1.188776p-61f, 0x1.54e648p-61f, 0.0f, 0.0f, 0.0f, 0x1.7dd924p-95f, 0.0f,
     0x1.92476ep-22f, 0.0f, 0.0f, 0x1.60cb8cp-25f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.531b62p-62f, 0.0f, 0x1.6593c6p-121f, 0x1.fe3e48p-33f, 0x1.8bfbeep-123f, 0.0f,
     0x1.da6cc2p-35f, 0x1.a6c7cep-23f, 0.0f, 0x1.ac7e0cp-59f, 0.0f, 0.0f,
     0x1.110a6p-90f, 0x1.797716p-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.8c8c6p-122f, 0x1.53246ep-40f, 0.0f, 0.0f, 0.0f, 0x1.01b24cp-72f, 0.0f,
     0x1.d0459ep-90f, 0x1.cfee12p-61f, 0x1.af0d76p-105f, 0x1.483076p-32f, 0.0f,
     0x1.8a38c6p-33f, 0.0f, 0.0f, 0.0f, 0x1.3edefap-124f, 0x1.e9ca94p-49f, 0.0f,
     0x1.9c075cp-84f, 0.0f, 0.0f, 0x1.966c4cp-31f, 0.0f, 0x1.4ebdeep-55f,
     0x1.cb852ep-84f, 0.0f, 0x1.41828cp-49f, 0.0f, 0.0f, 0.0f, 0x1.33e9e8p-86f, 0.0f,
     0x1.ea604p-5f, 0x1.5432d4p-124f, 0x1.e1b6d6p-54f, 0.0f, 0.0f, 0x1.3725bp-47f,
     0x1.da4ddap-74f, 0.0f, 0x1.51b1eep-2f, 0x1.04e0ccp-55f, 0.0f, 0x1.99c6a8p-31f,
     0x1.e31698p-80f, 0.0f, 0x1.22e8bcp-14f, 0x1.fbd7aep-48f, 0.0f, 0.0f,
     0x1.14f27ap-84f, 0x1.6ee804p-19f, 0x1.573208p-91f, 0x1.060326p-28f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.28f12p-5f, 0x1.2296a4p-38f,
     0x1.d172f2p-125f, 0x1.d63e76p-34f, 0x1.4d6bc4p-108f, 0.0f, 0x1.2438a8p-85f, 0.0f,
     0x1.8240b8p-57f, 0x1.fe6cfep-12f, 0x1.d29584p-20f, 0x1.98110cp-125f, 0.0f,
     0x1.09dc94p-116f, 0.0f, 0.0f, 0x1.213bd4p-55f, 0.0f, 0x1.eb200ap-54f,
     0x1.d964aap-85f, 0.0f, 0.0f, 0x1.b03fd6p-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cb848ap-63f, 0x1.d002ccp-88f, 0.0f, 0.0f, 0.0f, 0x1.d05b54p-58f,
     0x1.fa52eap-119f, 0x1.43c436p-126f, 0.0f, 0x1.9484e8p-4f, 0x1.545484p-77f,
     0x1.9d7038p-62f, 0.0f, 0x1.991284p-66f, 0.0f, 0x1.92edcep-3f, 0.0f, 0.0f, 0.0f,
     0.0f
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
            tmp2 = Sleef_finz_fdimf1_purecfma(tmp0, tmp1);
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
    printf("Sleef_finz_fdimf1_purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_fdimf1_purecfma bench acc %a\n", global_bench_acc);
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
