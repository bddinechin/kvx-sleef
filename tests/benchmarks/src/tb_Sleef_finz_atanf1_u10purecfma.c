/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_atanf1_u10purecfma.c --function \
 *     Sleef_finz_atanf1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.a852a6p-70f, 0.0f, 0.0f, 0.0f, 0x1.a0c5e4p-37f, 0x1.d0ce66p-124f,
     0x1.eae248p-37f, 0x1.414624p-79f, 0.0f, 0.0f, 0.0f, 0x1.c8eaa8p-99f, 0.0f,
     0x1.226166p-95f, 0.0f, 0.0f, 0x1.b075a6p-89f, 0.0f, 0x1.55e3f8p-11f,
     0x1.41f1d2p-111f, 0x1.cfb062p-58f, 0.0f, 0.0f, 0x1.3321cp-46f, 0.0f,
     0x1.2b7aeep-38f, 0.0f, 0x1.48aed2p-29f, 0.0f, 0x1.37ce38p-59f, 0x1.632cbep-95f,
     0x1.d3aa3p-50f, 0x1.9b5ab2p-106f, 0.0f, 0x1.37a5d8p-3f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4448a8p-25f, 0x1.3a151ap-25f, 0.0f, 0x1.16800ep-35f,
     0x1.274bbcp-82f, 0.0f, 0x1.40f4a6p-47f, 0x1.900c1cp-94f, 0x1.658a4p-110f,
     0x1.ee9f62p-85f, 0x1.e5ebe2p-102f, 0x1.eaf1fcp-55f, 0x1.36eeb6p-81f, 0.0f,
     0x1.2e624ap-35f, 0x1.d1b6f2p-63f, 0x1.7820d8p-50f, 0x1.0eb812p-55f, 0.0f, 0.0f,
     0x1.2e35bap-103f, 0.0f, 0x1.c4979p-78f, 0x1.9967c2p-100f, 0.0f, 0x1.3c8eb4p-108f,
     0x1.057de4p-108f, 0x1.38a148p-123f, 0.0f, 0.0f, 0x1.102eeep-10f, 0x1.87499p-63f,
     0.0f, 0x1.518f4ap-63f, 0x1.8316b4p-17f, 0x1.5c1a6p-80f, 0.0f, 0x1.4b063cp-94f,
     0.0f, 0.0f, 0.0f, 0x1.b316e2p-109f, 0x1.1c9e1ep-66f, 0x1.0f4656p-46f, 0.0f, 0.0f,
     0x1.3dcb24p-37f, 0x1.8065dep-27f, 0x1.da83c2p-100f, 0x1.780612p-60f,
     0x1.3a0a04p-44f, 0x1.68f706p-83f, 0.0f, 0x1.9351e8p-26f, 0.0f, 0.0f, 0.0f,
     0x1.f27ab2p-11f, 0.0f, 0.0f, 0.0f, 0x1.e519f6p-9f, 0x1.1f90d4p-2f,
     0x1.496712p-66f, 0x1.daccacp-18f, 0x1.cfad04p-39f, 0x1.a992b4p-116f, 0.0f, 0.0f,
     0x1.7d3d6p-7f, 0.0f, 0.0f, 0x1p0f, 0x1.7e34f4p-79f, 0x1.82004cp-17f,
     0x1.b2e9c4p-114f, 0.0f, 0.0f, 0x1.2872f4p-68f, 0.0f, 0.0f, 0x1.f66636p-75f,
     0x1.2f68ecp-118f, 0x1.2fe2cp-63f, 0x1.e7d73ep-43f, 0x1.cf0c52p-45f, 0.0f, 0.0f,
     0x1.a8dcb8p-57f, 0x1.1ec1ccp-28f, 0.0f, 0.0f, 0x1.f8a87ep-17f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.34fc86p-67f, 0x1.0047ccp-36f, 0.0f,
     0x1.d8826cp-26f, 0x1.56ad94p-33f, 0.0f, 0.0f, 0.0f, 0x1.5a587ap-46f, 0.0f, 0.0f,
     0x1.2cfe08p-85f, 0x1.15b476p-23f, 0x1.05403ep-118f, 0x1.d9fcdep-116f,
     0x1.7d8f14p-107f, 0x1.09de7cp-97f, 0x1.5a19dcp-37f, 0x1.3ee32ap-109f,
     0x1.63c788p-120f, 0.0f, 0x1.c1ea92p-87f, 0x1.da8662p-86f, 0.0f, 0.0f,
     0x1.a7b104p-120f, 0x1.8f048ap-36f, 0.0f, 0.0f, 0x1.329d9ep-112f, 0x1.7dcb08p-57f,
     0.0f, 0x1.be7facp-2f, 0.0f, 0.0f, 0.0f, 0x1.920286p-125f, 0x1.73f8dap-35f,
     0x1.974f56p-123f, 0x1p0f, 0.0f, 0.0f, 0x1.a5da98p-78f, 0.0f, 0.0f,
     0x1.11753cp-101f, 0x1.fbafbcp-112f, 0x1.3bc56p-92f, 0.0f, 0.0f, 0.0f,
     0x1.aa19bap-6f, 0x1.1ae5f2p-26f, 0.0f, 0x1.e86b5cp-71f, 0x1.09747ep-24f, 0x1p0f,
     0.0f, 0x1.33fa2cp-85f, 0x1.ad0d4ep-21f, 0.0f, 0.0f, 0x1.90d30ep-16f, 0.0f,
     0x1.6354dap-106f, 0x1.ff24d6p-49f, 0x1.9e83ecp-33f, 0x1.c92946p-114f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.c8f62p-45f, 0.0f, 0x1.f14ac2p-47f, 0.0f, 0.0f, 0x1.0d7f22p-65f,
     0x1.966636p-44f, 0.0f, 0x1.b728e4p-118f, 0x1.66f376p-81f, 0x1.fc7e06p-74f,
     0x1.a2165ap-15f, 0.0f, 0x1.fcfe2ep-96f, 0.0f, 0x1.c6a1dp-91f, 0x1.240fd4p-110f,
     0x1.1eb198p-53f, 0x1.c41b1ep-120f, 0x1.3a3d54p-66f, 0.0f, 0x1.31834p-76f,
     0x1.82690ap-25f, 0x1.e58afp-85f, 0x1.1cd87cp-34f, 0x1.2ba308p-7f,
     0x1.d5472cp-73f, 0.0f, 0.0f, 0x1.e9a28p-74f, 0.0f, 0.0f, 0x1.394af6p-2f,
     0x1.191f2p-50f, 0x1.92d2e8p-17f, 0x1.41d712p-93f, 0x1.d3416cp-21f,
     0x1.1d4f0ep-7f, 0.0f, 0x1.c6e974p-5f, 0.0f, 0.0f, 0x1.39bcfp-99f, 0.0f,
     0x1.49ea46p-38f, 0x1.b95bf2p-79f, 0.0f, 0x1.582798p-12f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c070dp-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.705fa8p-31f, 0x1.8df6e4p-97f,
     0x1.e236c8p-3f, 0x1.9315aap-83f, 0x1.caf89cp-54f, 0.0f, 0.0f, 0x1.f1adfcp-50f,
     0.0f, 0x1.bdad18p-107f, 0.0f, 0x1.228326p-126f, 0x1.49a50ep-54f, 0.0f,
     0x1.6817bp-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f482c8p-98f, 0.0f, 0x1.df7d98p-36f,
     0.0f, 0.0f, 0x1.dccd1cp-58f, 0x1.5319cp-12f, 0x1.7e6a84p-99f, 0x1.6c4634p-14f,
     0.0f, 0.0f, 0x1.34d708p-43f, 0.0f, 0.0f, 0x1.30b5b2p-98f, 0x1.3b56f6p-65f, 0.0f,
     0x1.90b894p-89f, 0x1.7c3d46p-87f, 0x1.f2937cp-53f, 0x1.9f9178p-20f, 0.0f,
     0x1.e67c8p-98f, 0.0f, 0x1.36a4dcp-28f, 0x1.0a4172p-120f, 0x1.fe33fcp-14f,
     0x1.29bfdp-63f, 0.0f, 0.0f, 0x1.c3fffap-79f, 0.0f, 0x1.f72152p-126f,
     0x1.4db59ep-84f, 0x1.2de438p-116f, 0.0f, 0.0f, 0.0f, 0x1.536632p-34f,
     0x1.70ae16p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6f45cep-5f, 0.0f, 0.0f, 0.0f,
     0x1.08c95p-13f, 0.0f, 0.0f, 0x1.c37fa6p-76f, 0.0f, 0.0f, 0.0f, 0x1.cdb6d6p-10f,
     0x1.a36ef2p-42f, 0x1.a154c2p-125f, 0x1.034a1p-103f, 0.0f, 0x1.fd4754p-29f,
     0x1.8985c6p-12f, 0.0f, 0.0f, 0.0f, 0x1.930538p-76f, 0.0f, 0x1.1e6a6ap-15f, 0.0f,
     0x1.15dfaep-38f, 0.0f, 0x1.483accp-90f, 0.0f, 0.0f, 0x1.0c8d16p-126f,
     0x1.6708p-26f, 0x1.fa8e4cp-121f, 0x1.b307b2p-72f, 0x1.463d02p-125f,
     0x1.0e389ep-15f, 0x1.715a36p-52f, 0.0f, 0x1.2b9194p-31f, 0x1.e3f4ccp-46f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.6972b8p-64f, 0x1.b74192p-65f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.7283eep-93f, 0.0f, 0x1.21e1a2p-7f, 0.0f, 0.0f, 0.0f, 0x1.75553cp-17f,
     0.0f, 0x1.51ded4p-95f, 0x1.f28a7ep-19f, 0x1.b1eebep-110f, 0x1.01054ep-118f,
     0x1.6b8f26p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d0543ep-27f, 0x1.7417fep-113f,
     0x1.97484ep-33f, 0.0f, 0.0f, 0x1.96dc46p-30f, 0x1.f88444p-74f, 0x1.5ea22ep-111f,
     0x1.e15e5ap-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bf8d94p-36f, 0.0f, 0.0f,
     0x1.8e2da4p-59f, 0x1.1d0d2p-44f, 0x1.84dd74p-88f, 0x1.66366ep-53f,
     0x1.1a9064p-6f, 0x1.4c07f4p-68f, 0x1.20abcp-57f, 0.0f, 0.0f, 0x1.222aa4p-60f,
     0.0f, 0.0f, 0.0f, 0x1.1b11b8p-25f, 0.0f, 0x1.78dfc4p-5f, 0x1.fe8828p-87f, 0.0f,
     0x1.6063b6p-42f, 0.0f, 0.0f, 0x1.ea413p-70f, 0x1.fd6796p-67f, 0x1.bea61ep-53f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.cbffaap-110f, 0.0f, 0x1.075d9p-33f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.8e6e2ap-67f, 0.0f, 0x1.d6d6ap-53f, 0x1.37d92ep-58f,
     0x1.800982p-50f, 0.0f, 0.0f, 0x1.6185e2p-118f, 0x1.e2c9a8p-18f, 0.0f,
     0x1.458592p-73f, 0x1.c3b7acp-100f, 0.0f, 0x1.017caap-44f, 0x1.267c7cp-15f,
     0x1.51571ep-27f, 0.0f, 0x1.a7728ep-48f, 0.0f, 0x1.16093ap-45f, 0x1.7f451ap-23f,
     0.0f, 0x1.fab31ep-75f, 0.0f, 0x1.544f1ep-108f, 0.0f, 0.0f, 0x1.3120fap-94f,
     0x1.e1d744p-76f, 0.0f, 0x1.651706p-121f, 0x1.cb854p-76f, 0x1.f98b36p-46f, 0.0f,
     0.0f, 0.0f, 0x1.0ce7d8p-13f, 0x1.e6e172p-112f, 0.0f, 0x1.ec16fp-1f, 0.0f, 0.0f,
     0.0f, 0x1.decb62p-105f, 0.0f, 0x1.4b2d94p-87f, 0x1.86635cp-89f, 0.0f, 0.0f,
     0x1.9e84dap-87f, 0x1.79466ap-17f, 0.0f, 0x1.2c726p-101f, 0.0f, 0x1.35ba6cp-42f,
     0x1.ba73eap-3f, 0x1.e0d786p-69f, 0x1.ce8e1ep-73f, 0x1.094af8p-5f, 0.0f,
     0x1.f7da78p-19f, 0.0f, 0.0f, 0x1.8259ap-63f, 0.0f, 0.0f, 0x1.a922ep-123f,
     0x1.0117b6p-21f, 0x1.5f3ceap-77f, 0x1.25ff9ap-41f, 0x1.c3bf9cp-5f,
     0x1.57f68cp-23f, 0.0f, 0x1.e53384p-79f, 0x1.daad22p-35f, 0x1.daefbcp-50f,
     0x1.04f8c8p-93f, 0.0f, 0x1.6e7b22p-121f, 0x1.ff5c62p-16f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e5802ep-125f, 0x1.29295ap-47f, 0x1.4a0ca4p-29f, 0x1.3b0aeap-25f,
     0x1.546f78p-96f, 0x1.115ba4p-71f, 0x1.408396p-57f, 0x1.d86ecp-55f, 0.0f,
     0x1.d8cf0cp-114f, 0.0f, 0x1.db930cp-60f, 0x1.97a286p-10f, 0.0f, 0x1.f4044ap-107f,
     0x1.f7157ap-96f, 0x1.e498d2p-13f, 0.0f, 0.0f, 0.0f, 0x1.50f678p-57f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ebdedep-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.311062p-82f, 0.0f,
     0x1.c8b072p-108f, 0x1.b38ae4p-36f, 0x1.6bb66ap-83f, 0x1.57abbcp-65f, 0.0f,
     0x1.19252ep-53f, 0x1.94c1e2p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ec009ap-42f,
     0x1.e13b42p-21f, 0.0f, 0x1.264846p-24f, 0x1.43e2bep-94f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.000d82p-116f, 0.0f, 0.0f, 0.0f, 0x1.d1848p-71f, 0x1.101b68p-121f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.14621p-91f, 0.0f, 0.0f, 0.0f, 0x1.5ec9fep-54f,
     0x1.4c1e3ap-96f, 0x1.5f17d8p-62f, 0x1.7c5786p-16f, 0.0f, 0.0f, 0x1.3741b2p-125f,
     0.0f, 0x1.a86fd2p-109f, 0x1.3b32fep-93f, 0x1.a205b8p-62f, 0.0f, 0x1.f05194p-108f,
     0.0f, 0x1.df60ep-86f, 0x1.0c6054p-50f, 0x1.1e137p-20f, 0.0f, 0x1.1a9fb8p-54f,
     0.0f, 0x1.8edd78p-17f, 0x1.c6a8fep-124f, 0x1.e51684p-19f, 0.0f, 0.0f,
     0x1.8481dep-100f, 0.0f, 0x1.57ab16p-12f, 0x1.bc8278p-80f, 0.0f, 0x1.0b6d9ep-122f,
     0.0f, 0.0f, 0.0f, 0x1.315586p-16f, 0x1.dfff8cp-73f, 0x1.0b6b5cp-54f,
     0x1.f3318ap-18f, 0x1.9b2e6p-96f, 0.0f, 0x1.87f41p-38f, 0x1.38f474p-68f,
     0x1.8d2c1p-25f, 0x1.c7bb3ap-24f, 0.0f, 0.0f, 0.0f, 0x1.2bc956p-20f,
     0x1.cf4cd2p-112f, 0x1.ed8c3p-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4dafcep-95f,
     0.0f, 0x1.0133bcp-46f, 0x1.1322acp-11f, 0.0f, 0x1.1d14ep-99f, 0x1.1759c8p-60f,
     0x1.fe0714p-79f, 0x1.6505d6p-119f, 0x1.4ce802p-114f, 0.0f, 0x1.9df20ap-69f, 0.0f,
     0x1.815596p-97f, 0x1.4bdd2cp-84f, 0x1.47005ap-25f, 0.0f, 0.0f, 0x1.31506cp-81f,
     0.0f, 0x1.4dc286p-8f, 0.0f, 0.0f, 0x1.5328bap-95f, 0.0f, 0x1.8b78fep-46f, 0.0f,
     0x1.e69fcp-13f, 0.0f, 0x1.4a3224p-7f, 0x1.c33abp-89f, 0x1.cc0844p-18f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.6079f4p-16f, 0.0f, 0x1.fc4a98p-20f, 0.0f, 0x1.119c34p-22f,
     0x1.d48c2ap-90f, 0x1.6c68fep-44f, 0x1.3938fp-74f, 0x1.e987p-47f, 0x1.e11618p-43f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3b2a8ap-22f, 0x1.ef403cp-10f, 0x1.9c583cp-2f,
     0x1.91afa2p-43f, 0x1.dbcf8ap-15f, 0x1.ba442ep-120f, 0.0f, 0.0f, 0x1.ea81bcp-96f,
     0.0f, 0.0f, 0.0f, 0x1.a2a448p-24f, 0.0f, 0.0f, 0x1.e1fc4ap-110f,
     0x1.112b2ep-115f, 0.0f, 0x1.4498a8p-88f, 0.0f, 0x1.04dd4ep-27f, 0x1.e65c6ep-112f,
     0.0f, 0x1.0a1628p-7f, 0x1.840f46p-32f, 0.0f, 0.0f, 0x1.809b5p-97f, 0.0f, 0.0f,
     0x1.66e9c2p-96f, 0x1.3794c8p-91f, 0.0f, 0x1.b6697ep-118f, 0x1.eeb706p-24f, 0.0f,
     0.0f, 0x1.4e1e02p-86f, 0x1.535606p-108f, 0x1.ce046cp-95f, 0x1.668632p-82f,
     0x1.ec9b8cp-50f, 0x1.65e0aap-65f, 0.0f, 0.0f, 0x1.5da27cp-32f, 0x1.deff86p-36f,
     0x1.327e6ap-50f, 0.0f, 0.0f, 0.0f, 0x1.f5b378p-97f, 0.0f, 0.0f, 0x1.a00a1ap-58f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3b4e1cp-45f, 0.0f, 0x1.401738p-121f, 0x1.e8c20ap-61f,
     0x1.6da1ecp-78f, 0.0f, 0x1.077272p-31f, 0x1.974aeap-97f, 0x1.5ec71p-16f,
     0x1.c3745p-79f, 0x1.081052p-113f, 0.0f, 0x1.6131aep-55f, 0x1.dcea42p-26f,
     0x1.b8a986p-80f, 0.0f, 0x1.d5235ep-29f, 0x1.4bad36p-63f, 0x1.e90cdep-52f,
     0x1.213f6ep-47f, 0.0f, 0x1.ad76b4p-50f, 0.0f, 0x1.718fe4p-37f, 0.0f, 0.0f,
     0x1.5ea692p-104f, 0x1.a2758ep-113f, 0.0f, 0.0f, 0x1.f07116p-72f,
     0x1.36a61ap-102f, 0x1.806f76p-75f, 0x1.646c3ap-48f, 0x1.810254p-89f,
     0x1.58522cp-12f, 0x1.917ap-56f, 0x1p0f, 0.0f, 0x1.8b8b2ep-29f, 0x1.73070cp-5f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6642acp-108f, 0x1.450a6p-43f,
     0x1.fa792p-90f, 0.0f, 0.0f, 0.0f, 0x1.217192p-100f, 0.0f, 0x1.bf2f8cp-36f,
     0x1.f7f3cp-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.99be8p-49f, 0x1.09bb0cp-37f,
     0x1.aee40cp-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e49832p-40f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.53d3dcp-38f, 0x1.d06c4ep-41f, 0x1.c9508cp-59f, 0.0f, 0.0f,
     0.0f, 0x1.a519bcp-27f, 0x1.de2a66p-124f, 0.0f, 0x1.88722ap-47f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f5069ep-51f, 0.0f, 0.0f, 0x1.902e52p-8f, 0x1.098e3ap-9f, 0x1.e652fep-40f,
     0x1.7f0d1cp-21f, 0x1.2fd68ep-78f, 0x1.d15a2p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.938a4cp-89f, 0x1.395756p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d54ef2p-22f,
     0.0f, 0x1.9d2e54p-121f, 0.0f, 0x1.ae4214p-115f, 0x1.af9e7p-49f, 0.0f,
     0x1.a6ff8p-31f, 0.0f, 0x1.a7c5f2p-15f, 0x1.153c22p-77f, 0x1.9cee36p-69f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.4ecc84p-106f, 0.0f, 0x1.04779cp-84f, 0x1.5a0778p-34f, 0.0f,
     0x1.7f549ap-26f, 0x1.45c1bep-106f, 0x1.34ece2p-41f, 0x1.f23f88p-21f, 0.0f, 0.0f,
     0x1.f1c956p-115f, 0x1.a00df6p-2f, 0.0f, 0x1.c50a14p-102f, 0.0f, 0.0f,
     0x1.0d4bd8p-120f, 0.0f, 0.0f, 0x1.bfc79cp-86f, 0.0f, 0x1.4166eep-93f,
     0x1.cb52b6p-7f, 0.0f, 0x1.f6c31cp-109f, 0.0f, 0.0f, 0x1.ef01f2p-23f,
     0x1.17513cp-21f, 0.0f, 0.0f, 0.0f, 0x1.55e8aep-30f, 0x1.162a4ap-95f, 0.0f,
     0x1.09096p-6f, 0x1.ea081p-39f, 0x1.a11e06p-33f, 0.0f, 0x1.9d2862p-64f,
     0x1.31b502p-87f, 0.0f, 0.0f, 0x1.f0467ep-84f, 0x1.3c2504p-113f, 0.0f,
     0x1.4e6fb8p-3f, 0x1.6092b8p-39f, 0x1.7c323p-84f, 0.0f, 0x1.62da6p-17f,
     0x1.d6f1cp-105f, 0.0f, 0x1.c8fafep-27f, 0.0f, 0.0f, 0x1.c61aecp-100f, 0.0f, 0.0f,
     0x1.188c9ep-74f, 0x1.f8ab54p-50f, 0x1.e483e8p-105f, 0.0f, 0.0f, 0x1.5e9d7p-116f,
     0x1.22704ap-81f, 0.0f, 0x1.1ae7e8p-102f, 0x1.ff1f44p-106f, 0x1.792846p-1f,
     0x1.074be8p-116f, 0.0f, 0x1.a3f44ap-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f9d2bep-94f,
     0.0f, 0.0f, 0x1.e3ad62p-50f, 0x1.2dabaep-45f, 0x1.359daap-42f, 0.0f, 0.0f, 0.0f,
     0x1.5f28bp-114f
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
            tmp1 = Sleef_finz_atanf1_u10purecfma(tmp0);
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
    printf("Sleef_finz_atanf1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_atanf1_u10purecfma bench acc %a\n", global_bench_acc);
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
