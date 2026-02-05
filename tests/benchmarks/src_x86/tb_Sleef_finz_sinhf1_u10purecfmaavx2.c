/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sinhf1_u10purecfma.c --function \
 *     Sleef_finz_sinhf1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0x1.9f8966p-76f, 0x1.abad06p-54f, 0.0f, 0x1.27b12p-101f, 0.0f, 0.0f, 0.0f,
     0x1.cf8f24p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ab7748p-45f,
     0x1.3ebf5p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.17a8f6p-41f,
     0x1.572ap-115f, 0x1.0b639p-57f, 0x1.f7a35ap-87f, 0.0f, 0.0f, 0.0f,
     0x1.9f21c8p-115f, 0.0f, 0x1.083976p-87f, 0x1.89c4cp-19f, 0x1.1a1128p-73f,
     0x1.fe2f9cp-82f, 0x1.8bd194p-45f, 0x1.94333ap-44f, 0x1.22e38cp-61f,
     0x1.f579cep-39f, 0x1.18af62p-99f, 0x1.788acap-86f, 0x1.e7173cp-88f, 0.0f,
     0x1.a44232p-32f, 0x1.86263ep-88f, 0x1.2ec172p-64f, 0.0f, 0x1.c1daaap-99f, 0.0f,
     0x1.c8fdbep-66f, 0x1.e1ff84p-97f, 0.0f, 0x1.a603cep-30f, 0.0f, 0x1.64723ap-10f,
     0x1.2134f6p-55f, 0x1.7675c6p-115f, 0x1.a74dbcp-49f, 0.0f, 0x1.e8d5aep-114f, 0.0f,
     0x1.a99fa4p-118f, 0x1.40d17ep-28f, 0x1.315724p-79f, 0.0f, 0x1.4be95cp-100f,
     0x1.c7714p-103f, 0.0f, 0x1.78612cp-9f, 0.0f, 0x1.33310cp-67f, 0.0f, 0.0f,
     0x1.a0141cp-100f, 0x1.2d6e54p-115f, 0x1.7de6b6p-110f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.06da5ap-32f, 0.0f, 0.0f, 0x1.b9e626p-100f, 0.0f, 0.0f, 0.0f,
     0x1.751364p-71f, 0x1.cbd33p-23f, 0x1.df71fep-40f, 0.0f, 0x1.6b1c98p-52f,
     0x1.09c554p-116f, 0.0f, 0.0f, 0.0f, 0x1.1e0a74p-31f, 0.0f, 0.0f, 0x1.90bc94p-32f,
     0.0f, 0x1.6b6f12p-8f, 0.0f, 0x1.224f7cp-118f, 0x1.c31c9cp-107f, 0.0f,
     0x1.30fcb4p-110f, 0x1.4886fep-31f, 0.0f, 0.0f, 0x1.f00cbep-67f, 0.0f, 0.0f,
     0x1.b2a9ecp-11f, 0.0f, 0x1.6a0bcep-53f, 0.0f, 0.0f, 0x1.d8f174p-83f, 0.0f,
     0x1.63344ep-123f, 0x1.6c682p-46f, 0.0f, 0x1.dba72p-34f, 0x1.c2afa8p-117f,
     0x1.5c789ap-86f, 0x1.35b8eap-89f, 0x1.edd888p-46f, 0x1.c0ccb8p-36f, 0.0f, 0.0f,
     0.0f, 0x1.a9654ap-112f, 0.0f, 0.0f, 0x1.6012aap-20f, 0x1.44f0fep-19f, 0.0f, 0.0f,
     0.0f, 0x1.9a91ccp-45f, 0.0f, 0.0f, 0x1.d1d8ep-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.607fa2p-63f, 0x1.0984eep-32f, 0.0f, 0x1.2ab98ep-105f, 0.0f, 0.0f, 0.0f,
     0x1.4a3beep-90f, 0x1.8454ap-50f, 0x1.6c2cf4p-92f, 0x1.bbd092p-1f, 0.0f,
     0x1.99cd6p-70f, 0x1.9f9392p-43f, 0x1.ef7cbep-30f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3ca526p-67f, 0.0f, 0x1.39d0c4p-48f, 0.0f, 0.0f, 0x1.51a2c6p-75f, 0.0f,
     0x1.7d29d6p-44f, 0x1.53b1eap-23f, 0.0f, 0x1.6df06ap-37f, 0x1.9b8bdcp-109f,
     0x1.4d171ep-86f, 0.0f, 0x1.84743cp-47f, 0.0f, 0x1.d97274p-110f, 0x1.9d853ep-25f,
     0x1.38fcecp-41f, 0.0f, 0x1.d66594p-38f, 0x1.963d92p-61f, 0.0f, 0x1.681efp-40f,
     0x1.ffdedcp-91f, 0x1.b0a81ep-15f, 0.0f, 0.0f, 0x1.32144ep-98f, 0x1.b8adbcp-88f,
     0x1.1a3bb8p-5f, 0x1.f983a6p-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b461bap-55f,
     0x1.ea167p-65f, 0x1.09e476p-22f, 0.0f, 0.0f, 0x1.8a7cecp-115f, 0.0f,
     0x1.4b57d4p-111f, 0x1.d7a692p-107f, 0x1.5e7beap-102f, 0.0f, 0x1.e4a914p-48f,
     0.0f, 0x1.da55f6p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b3f51p-95f, 0.0f, 0.0f, 0.0f,
     0x1.2f1136p-106f, 0x1.548ad2p-60f, 0.0f, 0.0f, 0x1.7dc0d4p-21f, 0.0f, 0.0f,
     0x1.43ac06p-15f, 0.0f, 0x1.c54dccp-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1223e4p-126f,
     0x1.71751p-23f, 0x1.d4885cp-2f, 0x1.c9eb54p-18f, 0.0f, 0x1.1e0ee2p-84f, 0.0f,
     0x1.9aa9f6p-85f, 0.0f, 0.0f, 0x1.24acd2p-22f, 0x1.189deep-72f, 0.0f,
     0x1.60dfccp-98f, 0.0f, 0x1.75e5c4p-70f, 0.0f, 0.0f, 0.0f, 0x1.1bd116p-32f, 0.0f,
     0x1.9e0966p-81f, 0x1.8469ap-60f, 0x1.63e9a4p-99f, 0x1.ee1f3cp-115f,
     0x1.3cda7cp-107f, 0x1.d55d2cp-56f, 0x1.1a26fap-20f, 0.0f, 0x1.2130ccp-93f,
     0x1.394d52p-27f, 0x1.8d07f8p-14f, 0x1.35850ep-38f, 0.0f, 0.0f, 0.0f,
     0x1.cda4eap-57f, 0.0f, 0.0f, 0x1.0fef6cp-25f, 0x1.7c532p-37f, 0x1.e43e34p-90f,
     0x1.fc2a6p-89f, 0x1.6dbe2cp-114f, 0.0f, 0.0f, 0.0f, 0x1.4097cap-38f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7eb272p-81f, 0x1.c25126p-35f, 0x1.1f423p-6f, 0.0f,
     0x1.1bf6e6p-109f, 0x1.c3c7fp-48f, 0.0f, 0x1.8e522ep-91f, 0.0f, 0x1.cc98b2p-112f,
     0.0f, 0x1.679604p-111f, 0x1.ae44b2p-6f, 0x1.47c1bp-14f, 0.0f, 0.0f,
     0x1.3b715ap-81f, 0x1.3b1aaep-120f, 0x1.27be0ap-21f, 0x1.32fa0cp-43f, 0.0f,
     0x1.e78bf4p-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.88b08ep-18f, 0x1.9b0d0ap-55f, 0.0f,
     0x1.bb4b96p-118f, 0.0f, 0x1.67decap-28f, 0.0f, 0x1.d6982ep-101f, 0.0f, 0.0f,
     0.0f, 0x1.8acbacp-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f5372cp-96f,
     0x1.bfb182p-37f, 0x1.5e567ep-11f, 0x1.c0391cp-31f, 0x1.01bbe6p-32f, 0.0f, 0.0f,
     0x1.8e9aa6p-51f, 0.0f, 0.0f, 0x1.5d6ca4p-61f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ce0f9cp-53f, 0.0f, 0.0f, 0x1.94ca1ap-105f, 0x1.da89fep-98f, 0x1.207804p-125f,
     0.0f, 0x1.7b3b06p-89f, 0.0f, 0x1.c9c51ep-26f, 0x1.8c0f14p-13f, 0.0f,
     0x1.3cd7e6p-12f, 0.0f, 0.0f, 0x1.b4e83ap-44f, 0x1.004cfep-65f, 0x1.bcb06cp-120f,
     0.0f, 0.0f, 0x1.21p-79f, 0x1.72a34ap-19f, 0.0f, 0x1.758fe2p-57f, 0.0f, 0.0f,
     0x1.fd6a4ap-24f, 0x1.b238acp-14f, 0x1.e04588p-92f, 0x1.6ece66p-4f, 0.0f, 0.0f,
     0.0f, 0x1.224864p-83f, 0x1.118c9cp-49f, 0x1.f1a13p-54f, 0x1.21fc1ep-83f, 0.0f,
     0x1.e2cb2ep-23f, 0.0f, 0.0f, 0x1.e3daf6p-59f, 0.0f, 0x1.e99f5p-121f,
     0x1.edf1aap-32f, 0x1.4549a8p-25f, 0x1.207626p-5f, 0x1.51594p-3f, 0.0f, 0.0f,
     0.0f, 0x1.d76938p-52f, 0.0f, 0.0f, 0.0f, 0x1.d4cd0cp-18f, 0.0f, 0x1.837c1ep-8f,
     0x1.818ffep-124f, 0x1.6b711cp-78f, 0.0f, 0x1.4c797ep-56f, 0x1.2e5a9p-81f,
     0x1.e45fa8p-68f, 0x1.8f2ee8p-107f, 0x1.a08dfep-26f, 0.0f, 0x1.42041ep-59f,
     0x1.bfe2b6p-96f, 0x1.8440dcp-50f, 0x1.59476ep-42f, 0x1.aac5acp-86f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4f78fcp-51f, 0.0f, 0.0f, 0x1.262d52p-28f, 0.0f, 0x1.037b48p-2f,
     0.0f, 0x1.57311ep-21f, 0.0f, 0x1.f2bb32p-18f, 0.0f, 0.0f, 0.0f, 0x1.c6a01ep-100f,
     0.0f, 0x1.c3c31ap-12f, 0x1.c60038p-59f, 0x1.3c5fe6p-3f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.aeba36p-50f, 0x1.a70212p-41f, 0x1.337ca4p-52f, 0.0f, 0x1.760c78p-91f,
     0x1.dfcd1p-32f, 0.0f, 0.0f, 0x1.e6e3acp-39f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e124dcp-118f, 0.0f, 0.0f, 0.0f, 0x1.54a632p-53f, 0.0f, 0.0f, 0.0f,
     0x1.9fa05ep-121f, 0x1.0e5612p-61f, 0x1.3c28b2p-42f, 0.0f, 0.0f, 0.0f,
     0x1.e39f72p-103f, 0.0f, 0x1.88fc68p-3f, 0x1.2452a4p-70f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a379c8p-24f, 0.0f, 0x1.f57d64p-102f, 0.0f, 0.0f, 0x1.ecda48p-25f, 0.0f,
     0x1.8418aep-3f, 0x1.dfdd74p-103f, 0.0f, 0.0f, 0x1.281afep-106f, 0x1.b2ce48p-65f,
     0x1.d6b46ep-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.13518ep-59f, 0x1.9720aep-71f, 0.0f,
     0.0f, 0.0f, 0x1.bec68cp-122f, 0x1.85afd8p-16f, 0x1.ba628p-2f, 0.0f,
     0x1.e36e76p-13f, 0.0f, 0.0f, 0.0f, 0x1.be153ap-83f, 0.0f, 0.0f, 0x1.9c7048p-90f,
     0.0f, 0x1.05b3a8p-123f, 0x1.b91a1ep-95f, 0x1.87ccd8p-91f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d500dcp-122f, 0x1.326784p-106f, 0.0f, 0x1.c28416p-74f,
     0x1.cb903cp-20f, 0.0f, 0x1.fbab14p-41f, 0.0f, 0.0f, 0x1.be0a6cp-64f,
     0x1.20cef6p-66f, 0x1.888208p-107f, 0.0f, 0x1.21f5c2p-96f, 0x1.99bea8p-107f, 0.0f,
     0.0f, 0.0f, 0x1.1a9114p-119f, 0x1.c49eap-9f, 0x1.b04ff8p-59f, 0x1.a74634p-122f,
     0.0f, 0x1.8f17acp-11f, 0x1.bcb2e6p-75f, 0.0f, 0.0f, 0x1.c7b528p-64f, 0.0f,
     0x1.96202p-50f, 0x1.10fbbp-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ec4d24p-26f, 0x1.6dc3c6p-42f, 0.0f, 0.0f, 0.0f, 0x1.0f9f12p-101f,
     0x1.cc727p-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0f669cp-76f, 0.0f, 0x1.72dbb8p-106f,
     0x1.0aba4ep-114f, 0x1.3c1922p-124f, 0.0f, 0x1.a3cd56p-68f, 0.0f, 0.0f,
     0x1.7e84f2p-110f, 0.0f, 0.0f, 0.0f, 0x1.0e9488p-49f, 0.0f, 0x1.68a326p-110f,
     0.0f, 0.0f, 0x1.180d46p-35f, 0.0f, 0.0f, 0x1.a1a506p-56f, 0x1.c44512p-91f,
     0x1.81bf06p-104f, 0.0f, 0x1.0bdf3ap-20f, 0.0f, 0x1.1ac6ap-98f, 0.0f, 0.0f,
     0x1.9b39a8p-39f, 0x1.67cab8p-65f, 0.0f, 0.0f, 0x1.59c908p-116f, 0x1.19d796p-70f,
     0x1.4c4adap-63f, 0x1p0f, 0x1.17dbdcp-110f, 0x1.f3ff7cp-78f, 0x1.3e494ep-2f,
     0x1.a5b5d4p-99f, 0.0f, 0x1.6befeap-72f, 0.0f, 0x1.a4bac2p-96f, 0x1.74f832p-95f,
     0x1.f6c352p-37f, 0x1.02a16cp-30f, 0x1.b12ce4p-19f, 0.0f, 0x1.cc5b58p-14f,
     0x1.22c9a4p-101f, 0.0f, 0x1.97ccfep-110f, 0.0f, 0.0f, 0x1.2239eap-47f,
     0x1.8080dp-90f, 0.0f, 0x1.8262cp-102f, 0x1.ef3b18p-114f, 0.0f, 0x1.b047cep-24f,
     0.0f, 0.0f, 0x1.b0918ep-116f, 0x1.15e4aep-125f, 0.0f, 0.0f, 0x1.55bc56p-81f,
     0.0f, 0x1.57bfb8p-90f, 0x1.c9cdccp-112f, 0x1.848f7cp-39f, 0.0f, 0.0f,
     0x1.f7105cp-68f, 0.0f, 0x1.4ffe98p-88f, 0x1.459822p-19f, 0.0f, 0x1.b495ecp-111f,
     0x1.cf56f8p-122f, 0x1.5f132ep-16f, 0x1.85f5d8p-94f, 0x1.9d0afcp-44f, 0.0f, 0.0f,
     0x1.ead65ep-20f, 0.0f, 0x1.6d0c6cp-124f, 0x1.9be1f4p-88f, 0x1.1828d8p-118f, 0.0f,
     0x1.9d3d0cp-57f, 0x1.c34db2p-45f, 0.0f, 0.0f, 0x1.2dd692p-15f, 0.0f, 0.0f, 0.0f,
     0x1.715336p-105f, 0x1.59ca28p-115f, 0.0f, 0.0f, 0x1.fd42ccp-114f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.98f8ecp-19f, 0x1.1d977cp-104f, 0.0f, 0x1.988c3cp-53f,
     0x1.288eccp-100f, 0.0f, 0x1.ecbb44p-82f, 0.0f, 0x1.8912e8p-50f, 0x1.765d1ep-23f,
     0x1.697b6p-31f, 0.0f, 0x1.c7f9bap-35f, 0.0f, 0x1.6b0568p-13f, 0.0f,
     0x1.ef3176p-87f, 0x1.7efbdcp-46f, 0.0f, 0x1.b3c728p-65f, 0x1.f2de82p-7f, 0.0f,
     0x1.467696p-2f, 0x1.c3b86p-105f, 0x1.ccf9e2p-97f, 0.0f, 0x1.637042p-95f, 0.0f,
     0x1.449f4p-55f, 0.0f, 0x1.5cb44p-43f, 0x1.f15c96p-98f, 0.0f, 0.0f, 0.0f,
     0x1.a5032ap-88f, 0.0f, 0x1.601fbp-92f, 0x1.b7d866p-72f, 0.0f, 0x1.1f29d2p-78f,
     0x1.cf9364p-14f, 0.0f, 0.0f, 0x1.e1827ep-37f, 0.0f, 0x1.10450ap-49f,
     0x1.bf3d5ap-33f, 0.0f, 0.0f, 0x1.936f8ap-50f, 0x1.7dae48p-48f, 0.0f,
     0x1.414cdcp-111f, 0x1.aa064p-49f, 0x1.b5268ep-94f, 0x1.c6e3bp-62f,
     0x1.fe82f2p-19f, 0.0f, 0.0f, 0.0f, 0x1.de154ep-82f, 0.0f, 0x1.bb2b88p-126f,
     0x1.3f802p-124f, 0.0f, 0x1.d9d7fep-25f, 0x1.f21544p-24f, 0.0f, 0.0f, 0.0f,
     0x1.124fd4p-113f, 0x1.aecfc8p-57f, 0.0f, 0x1.a11b6ap-114f, 0.0f, 0.0f, 0.0f,
     0x1.1f1caap-71f, 0x1.50635cp-59f, 0x1.4a8024p-15f, 0x1.3854c2p-87f,
     0x1.72554ap-40f, 0.0f, 0.0f, 0.0f, 0x1.e9d46p-32f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ee68bep-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bfd68ep-2f, 0.0f, 0x1.006a3p-35f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1c1248p-66f, 0.0f, 0.0f,
     0.0f, 0x1.b2ff52p-103f, 0x1.b34238p-92f, 0.0f, 0x1.6fec24p-94f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.0fa35ep-13f, 0.0f, 0.0f, 0x1.0d8b66p-124f, 0x1.743f4ap-47f,
     0x1.f64868p-21f, 0x1.8c2e18p-11f, 0x1.69e106p-48f, 0.0f, 0x1.ae035ep-63f,
     0x1.d2fdep-15f, 0.0f, 0.0f, 0.0f, 0x1.6d957ep-115f, 0x1.ae600ep-94f,
     0x1.1ceaf6p-54f, 0x1.543bd8p-25f, 0x1.4026dp-47f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.83e45ap-63f, 0x1.722ffcp-73f, 0.0f, 0x1.821b98p-98f, 0x1.bb2e7cp-89f,
     0x1.ede788p-123f, 0x1.7f8cap-33f, 0x1.0d85c2p-120f, 0x1.f21466p-116f,
     0x1.fa947ap-103f, 0x1.6873c8p-54f, 0.0f, 0.0f, 0.0f, 0x1.3f23ccp-37f,
     0x1.78ad1ap-4f, 0.0f, 0x1.b360cap-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d67c0ap-98f, 0.0f, 0x1.c8ba6cp-24f, 0x1.5ef74ap-98f, 0.0f, 0.0f,
     0x1.bebcdp-54f, 0x1.65ed3ep-28f, 0.0f, 0x1.9b7dd8p-16f, 0.0f, 0.0f,
     0x1.65c272p-122f, 0x1.c03298p-2f, 0.0f, 0.0f, 0x1.b0a12p-62f, 0.0f,
     0x1.f91ffep-77f, 0.0f, 0x1.3372fap-59f, 0.0f, 0x1.0c6cf6p-12f, 0x1.673ff2p-53f,
     0x1.d1a5eap-120f, 0x1.322152p-114f, 0.0f, 0.0f, 0x1.9eb422p-63f, 0x1.532bfp-59f,
     0x1.c74p-67f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.5d0048p-3f, 0x1.b22758p-39f,
     0x1.6abddep-36f, 0.0f, 0x1.7561c2p-90f, 0x1.273698p-28f, 0x1.6f5616p-49f,
     0x1.7490c8p-88f, 0.0f, 0.0f, 0.0f, 0x1.f9c054p-84f, 0x1.55aebep-7f, 0.0f, 0.0f,
     0.0f, 0x1.1eb582p-68f, 0.0f, 0.0f, 0x1.8a5416p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.06814p-94f, 0.0f, 0.0f, 0.0f, 0x1.ae4848p-8f, 0.0f, 0.0f, 0.0f,
     0x1.1f7ab8p-10f, 0.0f, 0x1.b7b9f6p-81f, 0.0f, 0x1.bd07dp-87f, 0x1.d54d2ep-27f,
     0x1.4db67ep-1f, 0.0f, 0x1.284772p-35f, 0.0f, 0x1.ca7ffep-30f, 0.0f,
     0x1.a2d572p-6f, 0.0f, 0.0f, 0x1.3d9916p-93f, 0.0f, 0.0f, 0x1.3e623ap-57f, 0.0f,
     0.0f, 0x1.f4e308p-7f, 0x1.dc30ap-2f, 0x1.9155c8p-76f, 0x1.f152dep-71f, 0.0f,
     0x1.f6738ep-121f, 0x1.a5fbd6p-69f, 0x1.36e42ep-81f, 0.0f, 0.0f, 0.0f,
     0x1.bf504p-70f, 0.0f, 0x1.997a1p-22f, 0.0f, 0x1.f1c682p-38f, 0.0f,
     0x1.5f98eep-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d96294p-57f,
     0x1.80948p-50f, 0x1.6f6808p-47f, 0.0f, 0x1.4f5f2ep-75f, 0x1.32665cp-121f,
     0x1.dc9e82p-13f, 0x1.59835p-12f, 0.0f, 0x1.0da5d4p-7f, 0.0f, 0.0f,
     0x1.56e464p-89f, 0x1.585162p-53f, 0x1.988c7ep-49f, 0.0f, 0.0f, 0.0f,
     0x1.e2e96p-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.39288cp-26f, 0.0f
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
            tmp1 = Sleef_finz_sinhf1_u10purecfma(tmp0);
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
    printf("Sleef_finz_sinhf1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_sinhf1_u10purecfma bench acc %a\n", global_bench_acc);
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
