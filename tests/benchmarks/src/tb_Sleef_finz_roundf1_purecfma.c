/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_roundf1_purecfma.c --function \
 *     Sleef_finz_roundf1_purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0.0f, 0x1.1492a8p-95f, 0.0f, 0x1.6b85b4p-1f, 0x1.0f2fdcp-7f,
     0x1.002b3ap-108f, 0.0f, 0x1.b2115ep-79f, 0.0f, 0.0f, 0x1.4b837ap-67f,
     0x1.b91698p-12f, 0.0f, 0.0f, 0x1.dbee4cp-76f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2cd91p-33f, 0x1.fe46a2p-96f, 0.0f, 0x1.670daap-52f, 0.0f, 0.0f,
     0x1.dcb452p-67f, 0x1.135dfcp-20f, 0.0f, 0x1.d6071ep-40f, 0x1.99527cp-64f,
     0x1.c9679ap-5f, 0x1.e2dd78p-64f, 0.0f, 0.0f, 0x1.405106p-81f, 0.0f, 0.0f, 0.0f,
     0x1.5f98c2p-44f, 0.0f, 0x1.b2558cp-115f, 0x1.2e1d56p-12f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cbdd0ap-78f, 0x1.b34d86p-103f, 0x1.37ff94p-46f, 0.0f, 0x1.b0a8b8p-117f,
     0x1.d2c8ep-54f, 0x1.8b9c52p-123f, 0x1.f7dbc4p-9f, 0.0f, 0.0f, 0x1.d7530ep-10f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.1a97fap-33f, 0.0f, 0.0f, 0x1.85e23cp-64f, 0.0f,
     0x1.b88b26p-90f, 0.0f, 0x1.371f1ep-45f, 0x1.054d68p-6f, 0.0f, 0x1.3b6134p-109f,
     0x1.b1481ep-58f, 0.0f, 0.0f, 0x1.73947ep-126f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cdb544p-106f, 0x1.24a048p-76f, 0.0f, 0.0f, 0.0f, 0x1.41e4e2p-75f, 0.0f,
     0x1.25b30ep-51f, 0x1.2aa622p-6f, 0.0f, 0.0f, 0x1.b26d6p-56f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.7d2ff4p-42f, 0.0f, 0.0f, 0x1.e140acp-18f, 0x1.7d5342p-35f,
     0x1.09b71p-58f, 0.0f, 0x1.bcbceap-109f, 0.0f, 0x1.ae6ae8p-118f, 0.0f, 0.0f, 0.0f,
     0x1.446048p-22f, 0x1.5745d6p-63f, 0.0f, 0x1.c939b4p-101f, 0.0f, 0x1.c5a73ap-111f,
     0x1.452b8cp-34f, 0.0f, 0.0f, 0x1.7ad97cp-112f, 0.0f, 0x1.8ccdep-90f,
     0x1.7304eep-20f, 0.0f, 0x1.0c97bcp-84f, 0.0f, 0x1.a2b0dap-116f, 0.0f,
     0x1.5d570ap-95f, 0.0f, 0x1.eae3f4p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f6b5acp-3f,
     0x1.b5a45ap-114f, 0x1.625974p-21f, 0.0f, 0.0f, 0.0f, 0x1.e526b4p-20f,
     0x1.58ab1ap-106f, 0x1.6e1fb6p-85f, 0.0f, 0x1.fc30a4p-89f, 0.0f, 0x1.c57768p-16f,
     0.0f, 0x1.918cf8p-4f, 0.0f, 0.0f, 0.0f, 0x1.40e2bp-67f, 0.0f, 0x1.ff735ap-34f,
     0x1.9f4cdcp-3f, 0x1.e3221p-123f, 0.0f, 0.0f, 0.0f, 0x1.f89ee4p-37f, 0.0f,
     0x1.bb1692p-21f, 0.0f, 0.0f, 0x1.062eaap-107f, 0x1.c5d412p-8f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a38d56p-93f, 0.0f, 0x1.38411ep-118f, 0.0f,
     0x1.7159acp-26f, 0x1.6fda78p-47f, 0.0f, 0x1.4e3b1cp-93f, 0x1.d49716p-70f, 0.0f,
     0.0f, 0x1.325928p-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.74c722p-110f, 0x1.c1517p-15f,
     0x1.0287a4p-86f, 0x1.9149dp-60f, 0.0f, 0x1.3cfcaap-7f, 0.0f, 0x1.14447ep-119f,
     0x1.b448c8p-28f, 0.0f, 0x1.4391d6p-110f, 0x1.03c3cp-65f, 0.0f, 0x1.ae0138p-99f,
     0.0f, 0x1.4459d2p-106f, 0.0f, 0x1.88f3p-79f, 0.0f, 0.0f, 0x1.201b18p-92f, 0.0f,
     0x1.5e9996p-8f, 0.0f, 0.0f, 0.0f, 0x1.6bcc3p-5f, 0.0f, 0x1.beade8p-47f,
     0x1.ee3b7cp-11f, 0.0f, 0.0f, 0.0f, 0x1.12aa14p-64f, 0x1.48fc92p-45f,
     0x1.1f9922p-116f, 0.0f, 0x1.544742p-43f, 0x1.397eb2p-2f, 0x1.9ea5bcp-24f,
     0x1.2fcf7ap-116f, 0.0f, 0.0f, 0x1.cfecbep-14f, 0.0f, 0.0f, 0x1.57089ep-15f, 0.0f,
     0x1.03a9acp-83f, 0.0f, 0.0f, 0.0f, 0x1.85a63cp-117f, 0x1.1503aep-84f, 0.0f,
     0x1.b21f54p-105f, 0x1.826404p-40f, 0x1.bd3deap-50f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d5857ap-87f, 0x1.4c02aap-109f, 0x1.6b225cp-84f, 0x1.4fd516p-60f,
     0x1.2ea5p-84f, 0x1.e7aefep-103f, 0x1.94b46p-61f, 0.0f, 0.0f, 0x1.64c6ep-9f,
     0x1.d23acap-76f, 0.0f, 0x1.8080eap-20f, 0x1.b5230ap-71f, 0x1.531a26p-2f,
     0x1.180188p-76f, 0.0f, 0x1.ead334p-102f, 0.0f, 0.0f, 0.0f, 0x1.26b486p-6f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.52a758p-62f, 0.0f, 0.0f, 0x1.c754aap-81f, 0x1.f76252p-47f,
     0.0f, 0x1.a64fc8p-59f, 0.0f, 0.0f, 0x1.9168d8p-47f, 0.0f, 0.0f, 0x1.dc7f3p-26f,
     0.0f, 0x1.3f03p-26f, 0.0f, 0.0f, 0x1.438f8p-43f, 0x1.fc7d64p-2f, 0.0f,
     0x1.7910a8p-100f, 0x1.f3c942p-61f, 0.0f, 0x1.b64e88p-23f, 0.0f, 0x1.5f6c08p-91f,
     0x1.353e38p-54f, 0.0f, 0.0f, 0x1.a831cap-34f, 0x1.873934p-50f, 0.0f, 0.0f,
     0x1.284a26p-99f, 0x1.5f05ccp-31f, 0x1.e79fc8p-34f, 0x1.7dd158p-1f,
     0x1.d39588p-90f, 0.0f, 0x1.cdd3d4p-18f, 0.0f, 0.0f, 0.0f, 0x1.7f2beep-2f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e9458ep-2f, 0x1.4eb5aep-120f, 0x1.1c7472p-37f, 0.0f,
     0x1.9a08aap-35f, 0x1.e26154p-98f, 0x1.1bb62cp-79f, 0.0f, 0x1.e2847p-124f, 0.0f,
     0x1.bab928p-93f, 0.0f, 0.0f, 0.0f, 0x1.cd9e64p-26f, 0x1.41de14p-53f,
     0x1.6aaca2p-13f, 0x1.cb72ccp-32f, 0x1.596ef2p-47f, 0x1.3d3f18p-3f,
     0x1.1f479cp-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6d7bcap-119f,
     0x1.fabc98p-83f, 0x1.163b02p-51f, 0.0f, 0x1.86c594p-6f, 0x1.5d2e3cp-55f,
     0x1.2cd24ap-98f, 0x1.4cf0c4p-73f, 0x1.b628fap-43f, 0.0f, 0x1.763bap-102f,
     0x1.9b9572p-116f, 0x1.2a824cp-71f, 0.0f, 0x1.ba6516p-98f, 0.0f, 0x1.ad82p-15f,
     0x1.33d0ap-51f, 0x1.c647ap-30f, 0x1.408e7cp-95f, 0.0f, 0x1.2f338cp-87f,
     0x1.c72bc8p-117f, 0.0f, 0x1.8c59dep-61f, 0.0f, 0.0f, 0x1.75b7c6p-69f, 0.0f, 0.0f,
     0x1.ceebdep-55f, 0x1.ed420cp-32f, 0.0f, 0.0f, 0.0f, 0x1.01d468p-83f,
     0x1.856652p-12f, 0.0f, 0.0f, 0x1.f097b8p-26f, 0.0f, 0x1.d79e7p-75f, 0.0f, 0.0f,
     0x1.fa299ep-30f, 0x1.268382p-5f, 0.0f, 0.0f, 0x1.d4a168p-58f, 0.0f,
     0x1.38c262p-113f, 0x1.65a278p-30f, 0x1.9d29cep-32f, 0.0f, 0.0f, 0x1.5df0cp-11f,
     0x1.8504f2p-95f, 0x1.2811acp-91f, 0x1.bfbc04p-7f, 0x1.14f0c4p-102f, 0.0f,
     0x1.280b3cp-31f, 0.0f, 0.0f, 0x1.1b3b1cp-17f, 0x1.beebeep-38f, 0.0f, 0.0f,
     0x1.050116p-33f, 0.0f, 0x1.4c10d2p-64f, 0x1.ffc0fp-64f, 0x1.34d96p-5f, 0.0f,
     0x1.a005acp-87f, 0.0f, 0x1.15f9eep-10f, 0x1.c9511cp-79f, 0x1.62e51p-99f, 0.0f,
     0x1.5affa2p-121f, 0.0f, 0x1.8c1264p-56f, 0.0f, 0x1.5a6912p-73f, 0x1.ab6dfap-126f,
     0.0f, 0.0f, 0.0f, 0x1.6e149ep-30f, 0.0f, 0x1.65c274p-99f, 0x1.23dcbap-1f,
     0x1.ca681ap-114f, 0x1.51fd94p-58f, 0x1.42e07ep-69f, 0x1.da9278p-98f,
     0x1.660f5cp-39f, 0.0f, 0x1.eaaaf2p-33f, 0x1.bbcdbcp-89f, 0.0f, 0x1.572b96p-8f,
     0x1.aa1766p-70f, 0.0f, 0x1.c7198p-4f, 0x1.afca54p-124f, 0.0f, 0x1.0420a8p-98f,
     0.0f, 0.0f, 0x1.3bf0a6p-121f, 0x1.ec34bap-88f, 0x1.b88882p-40f, 0.0f,
     0x1.a95d34p-68f, 0x1.e5845ap-63f, 0.0f, 0x1.7cd186p-75f, 0x1.56004ep-88f, 0.0f,
     0.0f, 0.0f, 0x1.955e06p-48f, 0.0f, 0.0f, 0x1.a0c29p-75f, 0.0f, 0x1.1cf4ap-32f,
     0.0f, 0x1.10ca8ap-11f, 0x1.effcdp-79f, 0.0f, 0.0f, 0.0f, 0x1.2bf81ep-28f,
     0x1.938904p-67f, 0x1.0b42e8p-4f, 0x1.a5fa2ep-67f, 0x1.6d1adp-100f,
     0x1.f51d2ep-19f, 0.0f, 0.0f, 0x1.e436fp-46f, 0.0f, 0x1.a38fcep-109f,
     0x1.617ca8p-51f, 0.0f, 0x1.675692p-112f, 0x1.774318p-53f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.53ddbep-13f, 0x1.d6f16p-71f, 0x1.02e1bap-126f, 0.0f, 0.0f, 0x1.539068p-119f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e2301cp-48f, 0.0f, 0.0f, 0.0f, 0x1.0b8e26p-71f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.94d4c6p-47f, 0.0f, 0x1.9b9c38p-21f,
     0x1.1927c8p-121f, 0x1.3b7facp-93f, 0x1.46f0aap-89f, 0x1.4721e4p-58f,
     0x1.d831fcp-16f, 0x1.bfd28ep-13f, 0.0f, 0x1.c8b9eap-39f, 0.0f, 0x1.913f54p-122f,
     0.0f, 0x1.e8cfaap-66f, 0.0f, 0x1.732586p-61f, 0.0f, 0.0f, 0x1.24d25cp-56f, 0.0f,
     0x1.33ff6ep-25f, 0x1.20da0cp-42f, 0x1.721e18p-83f, 0.0f, 0.0f, 0x1.2c7014p-30f,
     0x1.e463c2p-70f, 0x1.427f8cp-103f, 0x1.e99faap-70f, 0x1.1be522p-36f, 0.0f, 0.0f,
     0x1.1edd18p-66f, 0.0f, 0x1.5beb1cp-106f, 0x1.810beep-54f, 0x1.6b75p-84f,
     0x1.2acae2p-31f, 0.0f, 0x1.6a4fb6p-94f, 0x1.c6869ap-64f, 0.0f, 0x1.7bac5ap-82f,
     0.0f, 0.0f, 0x1.2a64a8p-67f, 0.0f, 0x1.8096b4p-99f, 0.0f, 0.0f, 0x1.e16d58p-91f,
     0.0f, 0.0f, 0x1.16ecfap-95f, 0x1.b30c48p-7f, 0.0f, 0.0f, 0x1.eb2ed8p-76f, 0.0f,
     0x1.ba389p-24f, 0x1.80a0ecp-7f, 0.0f, 0.0f, 0.0f, 0x1.3cdbe2p-112f,
     0x1.11e374p-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c3e5eep-26f, 0.0f, 0.0f, 0.0f,
     0x1.ac6df4p-51f, 0.0f, 0x1.0ec6ecp-79f, 0x1.3e9e12p-53f, 0x1.0833a8p-54f, 0.0f,
     0x1.290a76p-18f, 0.0f, 0.0f, 0.0f, 0x1.2863c6p-72f, 0.0f, 0.0f, 0x1.f20e12p-78f,
     0.0f, 0x1.e5847ep-53f, 0x1.5d101cp-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ca19aep-77f,
     0x1.7d004ap-15f, 0.0f, 0x1.b53966p-72f, 0.0f, 0x1.97c41ep-8f, 0x1.ef2264p-92f,
     0.0f, 0x1.b8045ap-23f, 0x1.e9e58cp-102f, 0x1.ca7732p-4f, 0x1.8c667cp-97f, 0.0f,
     0x1.eec6d4p-124f, 0x1.dc18d6p-74f, 0.0f, 0.0f, 0x1.d830fcp-112f, 0.0f,
     0x1.92e5e6p-45f, 0x1.b8d1eep-10f, 0.0f, 0.0f, 0x1.2fef06p-118f, 0x1.579238p-60f,
     0x1.af4852p-31f, 0x1.15ff98p-125f, 0.0f, 0.0f, 0x1.74246ap-97f, 0.0f,
     0x1.d6ef14p-74f, 0x1.f5a5f6p-80f, 0.0f, 0x1.85d7eep-126f, 0x1.1a798ap-91f,
     0x1.39370cp-26f, 0.0f, 0x1.21781cp-58f, 0x1.56d954p-100f, 0.0f, 0.0f, 0.0f,
     0x1.039cd6p-41f, 0x1.ea25fep-116f, 0x1.8ff25ep-44f, 0.0f, 0x1.7020bep-80f, 0.0f,
     0x1.ccabaep-41f, 0.0f, 0x1.9f0054p-94f, 0x1.18396ep-26f, 0.0f, 0x1.038bep-65f,
     0.0f, 0x1.d2c7dep-110f, 0x1.30819cp-3f, 0x1.f6d448p-44f, 0.0f, 0x1.9bf80ap-84f,
     0x1.64ef8ap-29f, 0x1.29f64ep-6f, 0.0f, 0x1.12cbbap-101f, 0.0f, 0.0f,
     0x1.6cd1bap-75f, 0.0f, 0x1.12e65ep-15f, 0.0f, 0x1.93f6e2p-88f, 0x1.f25e48p-120f,
     0x1.47db1ep-111f, 0.0f, 0.0f, 0x1.3653ap-11f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.149e1cp-27f, 0x1.73c814p-8f, 0x1.0d7864p-34f, 0.0f, 0.0f, 0x1.305c94p-113f,
     0.0f, 0.0f, 0x1.9d052ap-28f, 0.0f, 0.0f, 0.0f, 0x1.04497cp-97f, 0.0f, 0.0f,
     0x1.46c96cp-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6f01a8p-68f, 0.0f, 0x1.85e948p-13f,
     0.0f, 0x1.1d0a56p-17f, 0x1.0e5e9ep-88f, 0.0f, 0x1.e8ea7ep-40f, 0x1.6ccd26p-4f,
     0.0f, 0x1.4d451ap-72f, 0x1.f3fc1cp-49f, 0.0f, 0.0f, 0x1.74d98cp-53f,
     0x1.c342ap-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c3aa96p-25f,
     0.0f, 0x1.e893bap-79f, 0x1.637bfcp-92f, 0.0f, 0.0f, 0x1.53be34p-94f, 0x1p0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.64e1eep-105f, 0x1.846768p-16f, 0.0f, 0.0f,
     0x1.e56cacp-71f, 0x1.a2dd5cp-59f, 0.0f, 0x1.7672d2p-47f, 0.0f, 0.0f,
     0x1.c1651cp-60f, 0.0f, 0.0f, 0x1.16a946p-42f, 0x1.b16c7ep-94f, 0.0f,
     0x1.c6c3f8p-85f, 0.0f, 0x1.a14f3cp-104f, 0.0f, 0.0f, 0x1.942ae6p-57f,
     0x1.21840ep-88f, 0x1.20495ep-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.364c96p-110f, 0x1.a594e8p-16f, 0.0f, 0.0f, 0x1.1c254ap-112f,
     0x1.249884p-126f, 0.0f, 0x1.c40ce6p-106f, 0.0f, 0.0f, 0x1.6adb7ap-91f,
     0x1.eafddp-27f, 0x1.f9da38p-83f, 0x1.4aacd8p-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e848ccp-68f, 0.0f, 0.0f, 0x1.0ca084p-5f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4b0a2p-81f, 0.0f, 0.0f, 0.0f, 0x1.5f3be6p-90f,
     0x1.3d38p-22f, 0.0f, 0x1.0b692p-75f, 0.0f, 0.0f, 0x1.fd3026p-118f, 0.0f,
     0x1.163d5ep-77f, 0x1.7c5792p-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.31fee6p-64f,
     0x1.045ab2p-45f, 0.0f, 0x1.c0a2c6p-99f, 0.0f, 0x1.b5506cp-28f, 0.0f, 0.0f,
     0x1.b6241ep-75f, 0x1.de387p-81f, 0.0f, 0x1.ec5dc2p-126f, 0x1.98b6e6p-63f, 0.0f,
     0x1.54a95cp-16f, 0x1.f367d8p-100f, 0x1.5fb8dap-81f, 0x1.8cecaap-3f, 0.0f,
     0x1.db938cp-12f, 0x1.e42faap-40f, 0x1.05adp-103f, 0.0f, 0x1.e88032p-25f,
     0x1.cb80b2p-70f, 0x1.87ee6cp-13f, 0.0f, 0.0f, 0.0f, 0x1.ad9996p-32f,
     0x1.151a46p-79f, 0x1.b0a38ep-71f, 0x1.d8f0acp-38f, 0x1.72903p-111f,
     0x1.84dba8p-114f, 0x1.bda94cp-38f, 0.0f, 0.0f, 0.0f, 0x1.b22b0ep-105f, 0.0f,
     0x1.c92ep-85f, 0x1.939d56p-13f, 0x1.e80bfcp-17f, 0x1.697c18p-100f, 0.0f, 0.0f,
     0x1.100eap-97f, 0x1.e27576p-122f, 0x1.8acabp-113f, 0.0f, 0.0f, 0.0f,
     0x1.4648a4p-23f, 0.0f, 0x1.1bcf24p-85f, 0.0f, 0.0f, 0x1.dfc53p-58f, 0.0f,
     0x1.1bef7cp-110f, 0x1.d51368p-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.77058p-119f, 0x1.19dbc4p-68f, 0x1.5279acp-78f, 0x1.cd2d38p-96f,
     0x1.d0f81p-12f, 0x1.32f7dap-52f, 0.0f, 0x1.793e38p-6f, 0x1.a1e78cp-41f,
     0x1.5203ap-78f, 0x1.8c9616p-97f, 0x1.b93f28p-87f, 0x1.666656p-3f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.dcf532p-11f, 0x1.029c72p-71f, 0.0f, 0x1.823aa8p-11f, 0.0f,
     0x1.6ec18cp-44f, 0.0f, 0x1.ed780ap-63f, 0.0f, 0x1.135cfcp-59f, 0x1.be5e0ap-55f,
     0x1.673822p-115f, 0x1.cc9f1ep-21f, 0x1.f89232p-113f, 0.0f, 0x1.ff77d8p-58f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ff58dep-84f, 0.0f, 0.0f, 0x1.cb999ep-1f,
     0x1.06a3fep-33f, 0.0f, 0x1.2b67aap-3f, 0x1.1c8688p-10f, 0.0f, 0x1.cc51eep-99f,
     0x1.76fd1cp-69f, 0x1.79bcdp-54f, 0x1.3df8dcp-55f, 0x1.a4b518p-58f,
     0x1.c0a694p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f84c56p-97f, 0x1.8cefe6p-73f,
     0x1.d264e2p-90f, 0.0f, 0x1.1d191ap-102f, 0x1.361b7p-2f, 0.0f, 0.0f, 0.0f,
     0x1.86cc96p-95f, 0x1.e6626ep-80f, 0.0f, 0.0f, 0x1.0ebdf2p-81f, 0x1.353a62p-46f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ca52a4p-63f
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
            tmp1 = Sleef_finz_roundf1_purecfma(tmp0);
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
    printf("Sleef_finz_roundf1_purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_roundf1_purecfma bench acc %a\n", global_bench_acc);
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
