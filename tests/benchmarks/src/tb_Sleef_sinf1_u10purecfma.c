/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sinf1_u10purecfma.c --function Sleef_sinf1_u10purecfma \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 --bench \
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
     0x1.5edb88p-83f, 0x1.22d94ep-5f, 0x1.be0ba4p-1f, 0.0f, 0.0f, 0x1.70c70ep-84f,
     0x1.ebb57p-72f, 0x1.8b577ap-41f, 0x1.00883ep-88f, 0.0f, 0.0f, 0x1.764c58p-56f,
     0x1.1e2fe8p-38f, 0x1.c23ec4p-102f, 0.0f, 0x1.db36ecp-7f, 0.0f, 0x1.80b99p-3f,
     0.0f, 0x1.15ce8cp-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d5044ep-14f, 0x1.294eeep-90f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.4c3f14p-5f, 0.0f, 0x1.41c104p-78f, 0.0f,
     0x1.e07372p-76f, 0x1.637808p-107f, 0x1.a59b8p-12f, 0x1.b469fp-38f, 0.0f, 0.0f,
     0x1.8e834ep-26f, 0x1.d2b838p-80f, 0x1.ea615ap-15f, 0.0f, 0x1.28c9acp-3f,
     0x1.536d06p-92f, 0x1.2f5f4ep-61f, 0x1.613548p-109f, 0x1.28a3d4p-107f, 0.0f,
     0x1.80b41ep-76f, 0.0f, 0.0f, 0.0f, 0x1.281f5cp-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.474268p-38f, 0x1.99111cp-81f, 0x1.8d8ffep-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ea8b8p-94f, 0x1.87ce8ap-94f, 0.0f, 0.0f, 0x1.8893dcp-58f,
     0x1.6480d4p-79f, 0x1.5d44aep-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f66f7cp-25f, 0x1.a15232p-61f, 0x1.b8ee24p-8f, 0x1.b2011cp-119f,
     0x1.138ed2p-43f, 0x1.38a23ep-124f, 0.0f, 0.0f, 0.0f, 0x1.8fb8ecp-46f,
     0x1.4f2eecp-79f, 0.0f, 0x1.b4881cp-54f, 0x1.11304p-70f, 0.0f, 0.0f,
     0x1.a36216p-55f, 0x1.0b6764p-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.51bc3p-49f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.06ede2p-46f, 0x1.68f9cep-114f, 0.0f,
     0x1.cb4352p-77f, 0x1.798b52p-90f, 0.0f, 0x1.4092bap-125f, 0x1.3f2932p-44f, 0.0f,
     0.0f, 0x1.26aa8cp-22f, 0x1.705ap-88f, 0x1.ca1d96p-33f, 0x1.c2f876p-108f,
     0x1.a4afc4p-112f, 0.0f, 0x1.894bb6p-101f, 0.0f, 0.0f, 0x1.f841c2p-4f, 0.0f,
     0x1.c6eab8p-53f, 0x1.c70246p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.04c17cp-47f, 0.0f,
     0x1.8e1564p-38f, 0x1.8476e4p-115f, 0.0f, 0x1.3e344cp-95f, 0x1.d1c19ep-35f, 0.0f,
     0x1.ef75f2p-68f, 0.0f, 0.0f, 0x1.4b974p-109f, 0.0f, 0x1.a19db8p-108f, 0.0f, 0.0f,
     0x1.e8e4e6p-121f, 0.0f, 0x1.2388ecp-124f, 0.0f, 0.0f, 0.0f, 0x1.6e9c5p-74f,
     0x1.fa38dcp-126f, 0x1.aff2aap-80f, 0.0f, 0.0f, 0x1.2e554ep-15f, 0.0f, 0.0f, 0.0f,
     0x1.97c41cp-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.21b946p-53f, 0.0f,
     0.0f, 0.0f, 0x1.1f7b5ep-12f, 0x1.b5ff92p-8f, 0x1.4a6328p-5f, 0x1.0370c8p-117f,
     0x1.391d0cp-5f, 0.0f, 0.0f, 0x1.9097d6p-90f, 0x1.cb4582p-83f, 0.0f,
     0x1.ac76bp-18f, 0x1.aaed7ap-91f, 0x1.3a2152p-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a4f328p-111f, 0x1.f7980ep-113f, 0x1.3de438p-2f, 0x1.51cc62p-40f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f2cd7p-16f, 0.0f, 0x1.6d653ep-88f, 0x1.917b8p-120f,
     0x1.8e7decp-120f, 0x1.f93614p-17f, 0.0f, 0.0f, 0x1.e914cep-106f,
     0x1.3c1272p-107f, 0.0f, 0x1.5a6df6p-30f, 0x1.2eddfap-15f, 0.0f, 0x1.65a072p-60f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.99286ep-122f, 0.0f, 0x1.9bca4ep-95f, 0.0f,
     0x1.18215cp-77f, 0x1.b420cap-78f, 0.0f, 0.0f, 0.0f, 0x1.5f9968p-112f,
     0x1.7182dp-27f, 0.0f, 0x1.22e2e8p-38f, 0x1.ab887ep-63f, 0.0f, 0x1.501cd4p-74f,
     0.0f, 0.0f, 0.0f, 0x1.33352cp-120f, 0x1.534ddep-114f, 0x1.a9444cp-34f,
     0x1.7bb07cp-1f, 0.0f, 0x1.526c4ap-45f, 0x1.88d1eep-93f, 0x1.7775f8p-9f,
     0x1.a42412p-33f, 0.0f, 0x1.e71e4ep-112f, 0x1.3fb614p-64f, 0.0f, 0x1.35cd8p-23f,
     0.0f, 0x1.0d895ap-14f, 0.0f, 0x1.13d918p-22f, 0x1.d55ef6p-48f, 0.0f,
     0x1.2e1e54p-76f, 0.0f, 0.0f, 0x1.a8cf66p-116f, 0.0f, 0.0f, 0x1.59bb1ap-71f, 0.0f,
     0x1.d2c256p-95f, 0.0f, 0.0f, 0x1.aecf4ap-47f, 0x1.750ff6p-114f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f1e8fp-112f, 0.0f, 0x1.5e0198p-26f, 0.0f, 0x1.faba1ep-96f, 0.0f,
     0x1.a60a0ap-81f, 0x1.64afc8p-78f, 0x1.b27ap-68f, 0x1.f4726ep-94f,
     0x1.379714p-76f, 0.0f, 0x1.a5f66ep-87f, 0.0f, 0.0f, 0x1.9ebcc6p-116f, 0.0f,
     0x1.ceb01p-5f, 0x1.1d5ep-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.932292p-95f,
     0.0f, 0.0f, 0.0f, 0x1.be1658p-16f, 0.0f, 0.0f, 0x1.b04bc2p-91f, 0.0f, 0.0f,
     0x1.9d34a2p-73f, 0x1.ef4044p-33f, 0.0f, 0.0f, 0x1.28736cp-16f, 0.0f, 0.0f,
     0x1.9987a8p-101f, 0.0f, 0.0f, 0x1.31b47ep-46f, 0.0f, 0.0f, 0.0f, 0x1.5733f6p-45f,
     0x1.44430ap-81f, 0.0f, 0x1.a5eda6p-126f, 0.0f, 0.0f, 0.0f, 0x1.a2002ep-51f,
     0x1.6e617ep-106f, 0.0f, 0.0f, 0x1.36f1e4p-15f, 0.0f, 0.0f, 0.0f, 0x1.e5dfaep-77f,
     0x1.ff398cp-96f, 0x1.26e6f8p-41f, 0.0f, 0x1.e2b846p-69f, 0x1.79171ep-66f, 0.0f,
     0.0f, 0.0f, 0x1.37919p-34f, 0x1.1fbd14p-89f, 0x1.bce19p-104f, 0.0f,
     0x1.26462cp-83f, 0x1.e9b4cap-23f, 0.0f, 0x1.76e6ecp-78f, 0.0f, 0x1.544698p-89f,
     0.0f, 0x1.56553p-105f, 0x1.ab33bcp-35f, 0x1.8b5ce8p-16f, 0x1.f82038p-107f, 0.0f,
     0.0f, 0.0f, 0x1.983e6cp-37f, 0.0f, 0x1.47f0d4p-113f, 0.0f, 0x1p0f, 0.0f, 0.0f,
     0.0f, 0x1.491982p-1f, 0x1.db85dp-46f, 0.0f, 0x1.df1024p-37f, 0.0f,
     0x1.e5096p-71f, 0x1.232c4cp-75f, 0x1.b07a7ep-88f, 0x1.f2d656p-106f, 0.0f, 0.0f,
     0x1.f978c2p-81f, 0x1.37a3a8p-12f, 0.0f, 0x1.c8c824p-50f, 0.0f, 0x1.0e1ca2p-28f,
     0.0f, 0.0f, 0.0f, 0x1.66016ap-116f, 0x1.e7ce12p-94f, 0.0f, 0x1.d02fcep-79f,
     0x1.64b5fap-115f, 0.0f, 0.0f, 0x1.e974acp-37f, 0x1.dc1ab6p-99f, 0x1.ef692ep-60f,
     0.0f, 0x1.44ca0ap-73f, 0x1.1740e2p-23f, 0x1.8ca298p-15f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.17e37p-73f, 0x1.3715eep-97f, 0.0f, 0.0f, 0.0f, 0x1.13d264p-64f, 0.0f, 0.0f,
     0.0f, 0x1.c41094p-15f, 0.0f, 0x1.bcb08p-117f, 0.0f, 0x1.0a40a8p-13f,
     0x1.973d1ep-123f, 0x1.bd84bep-25f, 0x1.5ac434p-123f, 0x1.f27bacp-12f,
     0x1.b6d4e2p-26f, 0x1.bec852p-69f, 0x1.1a54d6p-22f, 0.0f, 0x1.834a2cp-49f,
     0x1.28509p-97f, 0.0f, 0x1.c92a9ep-64f, 0.0f, 0.0f, 0.0f, 0x1.4ef612p-49f,
     0x1.034ab2p-103f, 0.0f, 0x1.28e5dp-109f, 0x1.ced28p-78f, 0x1.bc601ap-108f, 0.0f,
     0.0f, 0.0f, 0x1.0d8a26p-59f, 0.0f, 0.0f, 0x1.5fd396p-125f, 0.0f, 0.0f,
     0x1.a3c91cp-94f, 0.0f, 0.0f, 0.0f, 0x1.d4b416p-7f, 0.0f, 0x1.bd237p-55f, 0.0f,
     0.0f, 0x1.70a408p-27f, 0.0f, 0x1.03da0cp-60f, 0x1.c172bap-69f, 0x1.9ec784p-25f,
     0.0f, 0x1.1f7db2p-97f, 0.0f, 0.0f, 0x1.8e7d4cp-45f, 0.0f, 0x1.ba5afcp-5f,
     0x1.cb29dap-72f, 0x1.f84eap-52f, 0.0f, 0x1.f4c476p-12f, 0.0f, 0x1.d43a6ap-73f,
     0x1.2dee1p-79f, 0x1.18d9f6p-26f, 0x1.ddb504p-116f, 0x1.a5071ep-99f,
     0x1.5d609ap-68f, 0x1.e222c6p-116f, 0.0f, 0.0f, 0x1.3b6674p-124f, 0.0f,
     0x1.3f61ecp-31f, 0x1.539292p-116f, 0.0f, 0x1.5c26cp-80f, 0x1.b83fcap-47f, 0.0f,
     0.0f, 0.0f, 0x1.3f782ap-86f, 0.0f, 0x1.abc93ap-71f, 0.0f, 0x1.62a6d2p-32f,
     0x1.b23046p-24f, 0x1.b245bep-98f, 0.0f, 0.0f, 0x1.c97304p-32f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f2c542p-14f, 0x1.b706ccp-25f, 0x1.0b18c8p-61f, 0x1.e71de2p-100f, 0.0f,
     0x1.00953cp-65f, 0.0f, 0.0f, 0x1.43fc04p-35f, 0.0f, 0.0f, 0x1.232356p-13f,
     0x1.8a07ep-75f, 0.0f, 0x1.c27ea6p-28f, 0.0f, 0x1.98d672p-34f, 0.0f, 0.0f,
     0x1.f3951cp-50f, 0x1.abb024p-17f, 0x1.86be54p-15f, 0.0f, 0.0f, 0x1.c833c6p-32f,
     0x1.a0a7acp-41f, 0.0f, 0.0f, 0x1.71621p-107f, 0x1.1598c2p-42f, 0x1.c6305cp-106f,
     0x1.a48fccp-119f, 0.0f, 0x1.6f8c1ap-54f, 0x1.9b2362p-109f, 0x1.e25d92p-67f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.2c19b2p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.28fa72p-67f, 0.0f, 0x1.4beec8p-42f, 0.0f, 0.0f, 0x1.7b6fdcp-64f,
     0x1.32aadap-93f, 0.0f, 0.0f, 0x1.4ed586p-65f, 0x1.6af87ep-44f, 0.0f, 0.0f,
     0x1.d339d6p-13f, 0x1.40f4f2p-88f, 0x1.e10564p-68f, 0x1p0f, 0.0f, 0.0f,
     0x1.f2c92ap-32f, 0x1.8293ccp-43f, 0.0f, 0x1.431e14p-6f, 0.0f, 0.0f, 0.0f,
     0x1.682098p-24f, 0.0f, 0x1.5e0574p-22f, 0.0f, 0.0f, 0.0f, 0x1.9fda04p-83f, 0.0f,
     0x1.b43866p-96f, 0x1.4deb26p-22f, 0.0f, 0x1.4f1606p-102f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6d79bep-53f, 0x1.79c352p-32f,
     0x1.469f4ep-44f, 0.0f, 0.0f, 0x1.d48c24p-97f, 0.0f, 0x1.19af3ap-24f,
     0x1.143bdcp-104f, 0.0f, 0.0f, 0x1.58da4ep-25f, 0.0f, 0x1.1a873ap-115f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.aad81ep-36f, 0.0f, 0.0f, 0x1.4fccecp-33f,
     0x1.6aba3cp-110f, 0.0f, 0.0f, 0x1.5e1d4ep-24f, 0x1.996caap-101f, 0x1.21dcd4p-85f,
     0.0f, 0x1.5c5e54p-5f, 0x1.a9a30ep-15f, 0x1.601622p-4f, 0.0f, 0.0f,
     0x1.04e6bcp-59f, 0.0f, 0x1.e7cep-51f, 0.0f, 0.0f, 0.0f, 0x1.30ff4p-80f, 0.0f,
     0.0f, 0x1.0f8c42p-3f, 0x1.e1be5ap-47f, 0x1.3eedfp-119f, 0x1.5f86aep-17f,
     0x1.9c902ap-32f, 0.0f, 0x1.e90b26p-99f, 0.0f, 0x1.7df0a6p-21f, 0x1.605832p-98f,
     0x1.95b6bp-122f, 0x1.b1be34p-105f, 0.0f, 0.0f, 0x1.3c693ap-33f, 0.0f,
     0x1.c14776p-27f, 0x1.c39516p-97f, 0.0f, 0.0f, 0.0f, 0x1.728aa4p-21f,
     0x1.2f94c2p-116f, 0.0f, 0.0f, 0.0f, 0x1.1a9854p-25f, 0x1.816796p-59f, 0.0f, 0.0f,
     0.0f, 0x1.27eb82p-47f, 0.0f, 0x1.07e7bcp-51f, 0x1.c0db6p-100f, 0.0f,
     0x1.4ab21cp-80f, 0x1.94f50ap-61f, 0x1.8034aep-16f, 0x1.33f868p-14f, 0.0f, 0.0f,
     0.0f, 0x1.f8e614p-118f, 0.0f, 0x1.dd47c8p-125f, 0x1.291984p-125f, 0.0f, 0.0f,
     0x1.09e75ep-47f, 0x1.d6ec9cp-31f, 0x1.07aa98p-25f, 0.0f, 0x1.23fc04p-116f,
     0x1.0c100cp-68f, 0.0f, 0.0f, 0x1.cc53f6p-48f, 0.0f, 0x1.3bcea2p-116f,
     0x1.b2bf8p-43f, 0x1.7dbf4ep-50f, 0.0f, 0x1.fc7508p-36f, 0.0f, 0x1.c79bdp-8f,
     0x1.7fa164p-91f, 0x1.9abeep-116f, 0.0f, 0.0f, 0x1.d8abdep-101f, 0x1.a725a2p-28f,
     0x1.70e1d6p-113f, 0.0f, 0.0f, 0x1.2f7ed8p-3f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.072ec4p-123f, 0x1.e33408p-86f, 0.0f, 0x1.8b591p-84f, 0x1.f1928cp-2f,
     0x1.40ee46p-88f, 0x1.33ea4cp-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7a37dap-106f, 0.0f,
     0x1.595618p-97f, 0x1.c6597p-31f, 0.0f, 0x1.4dd316p-76f, 0x1.4f8334p-39f,
     0x1.fcedfcp-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bccba4p-102f, 0x1.2e3b02p-12f, 0.0f,
     0x1.9196f2p-98f, 0.0f, 0.0f, 0x1.02093p-49f, 0.0f, 0x1.7c1362p-104f, 0.0f, 0.0f,
     0.0f, 0x1.d6f26ap-7f, 0.0f, 0x1.214a0ap-99f, 0.0f, 0.0f, 0x1.b96242p-9f, 0.0f,
     0.0f, 0.0f, 0x1.f26c68p-80f, 0.0f, 0.0f, 0x1.837d5p-123f, 0x1.c9e67ap-4f,
     0x1.70768ap-19f, 0x1.e283c6p-114f, 0.0f, 0x1.bf38bcp-110f, 0.0f, 0x1.352b26p-21f,
     0x1.664bfp-89f, 0.0f, 0x1.1c9694p-87f, 0x1.273402p-37f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.06ba38p-77f, 0x1.aee76ep-70f, 0.0f, 0x1.a2e69p-1f, 0x1.a4db9ap-29f,
     0x1.be1aeap-109f, 0x1.7f9decp-18f, 0x1.afbef2p-62f, 0x1.579a4cp-46f, 0.0f,
     0x1.66decap-83f, 0.0f, 0.0f, 0x1.d65dp-95f, 0x1.8a3714p-79f, 0.0f, 0.0f,
     0x1.09db84p-96f, 0.0f, 0x1.747a12p-121f, 0x1.6aac4ap-21f, 0.0f, 0.0f, 0.0f,
     0x1.601d84p-80f, 0x1.b6b422p-56f, 0.0f, 0x1.1882cap-12f, 0x1.82af54p-117f, 0.0f,
     0.0f, 0.0f, 0x1.26ce8ap-37f, 0.0f, 0x1.3be59p-69f, 0x1.0d122p-107f,
     0x1.5fc9e4p-44f, 0.0f, 0.0f, 0.0f, 0x1.ff056cp-45f, 0x1.857fe4p-13f,
     0x1.84917cp-108f, 0x1.16786p-114f, 0.0f, 0x1.3c0db8p-101f, 0x1.d60286p-101f,
     0x1.abe0b4p-31f, 0.0f, 0x1.56d994p-36f, 0.0f, 0x1.cf41p-98f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e13574p-11f, 0.0f, 0.0f, 0x1.50a05ep-11f, 0x1.d60b12p-48f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1f8f84p-61f, 0.0f, 0.0f, 0x1.d1c8b4p-62f, 0x1.a35798p-118f,
     0x1.1683c6p-51f, 0.0f, 0x1.2d77aep-112f, 0.0f, 0.0f, 0.0f, 0x1.ad51p-18f,
     0x1.3ca5dcp-26f, 0x1.449706p-90f, 0.0f, 0x1.e9d8aep-33f, 0x1.bc6a8cp-103f,
     0x1.87f91cp-19f, 0.0f, 0.0f, 0.0f, 0x1.bb73e8p-71f, 0x1.d76b7p-105f, 0.0f, 0.0f,
     0x1.afa5e8p-52f, 0.0f, 0x1.a73412p-97f, 0x1.9f32c4p-91f, 0x1.871db6p-123f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a9686ep-17f, 0x1.7af3ep-100f, 0x1.178cbap-7f,
     0x1.643558p-92f, 0x1.6e9ab6p-76f, 0x1.b7fe86p-26f, 0x1.9de1dap-78f, 0.0f,
     0x1.cd9b76p-117f, 0.0f, 0x1.62bea8p-22f, 0.0f, 0.0f, 0x1.87e1bp-66f, 0.0f,
     0x1.cf56fp-76f, 0x1.ba2e76p-66f, 0.0f, 0x1.7f1cep-58f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ad0164p-103f, 0x1.e75e62p-92f, 0x1.6c60ep-37f, 0.0f, 0x1.7eac24p-9f, 0.0f,
     0x1.b6cda8p-125f, 0.0f, 0.0f, 0x1.596988p-90f, 0.0f, 0.0f, 0.0f, 0x1.f6921p-42f,
     0x1.5038f8p-120f, 0x1.f5e09cp-49f, 0x1.a7c79p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.44b5b2p-72f, 0.0f, 0.0f, 0.0f, 0x1.bbd16p-54f, 0x1.925d22p-31f, 0.0f,
     0x1.b6d734p-83f, 0x1.0ad1a4p-19f, 0x1.741be6p-115f, 0.0f, 0x1.915d26p-73f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f5da4ep-102f, 0.0f, 0x1.c7aa26p-72f, 0x1.627c06p-53f, 0.0f,
     0.0f, 0x1.53e9c6p-75f, 0.0f, 0.0f, 0x1.1fd048p-31f, 0.0f, 0x1.c223d8p-59f,
     0x1.439e3ap-100f, 0x1.809bb4p-30f, 0x1.70d558p-78f, 0x1.7a4296p-75f, 0.0f, 0.0f,
     0x1.ce05cap-21f, 0.0f, 0x1.b61f32p-41f, 0x1.998e0cp-75f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.eec05cp-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.78a152p-43f, 0x1.bba91cp-111f, 0.0f
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
            tmp1 = Sleef_sinf1_u10purecfma(tmp0);
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
    printf("Sleef_sinf1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_sinf1_u10purecfma bench acc %a\n", global_bench_acc);
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
