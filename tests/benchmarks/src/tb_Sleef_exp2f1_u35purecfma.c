/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_exp2f1_u35purecfma.c --function \
 *     Sleef_exp2f1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0x1.63f8d2p-15f, 0x1.889744p-94f, 0x1.4446ep-105f, 0x1.cbe3dcp-120f,
     0x1.1ba062p-85f, 0x1.60fc02p-49f, 0.0f, 0x1.32ace6p-110f, 0x1.ae1826p-112f, 0.0f,
     0.0f, 0.0f, 0x1.d00936p-59f, 0.0f, 0x1.60b212p-18f, 0x1.0b8e8ep-112f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.388fc4p-10f, 0x1.0fee5cp-62f, 0x1.513602p-113f,
     0x1.4d02a2p-51f, 0.0f, 0.0f, 0x1.44cc68p-72f, 0.0f, 0x1.b30704p-61f, 0.0f, 0.0f,
     0.0f, 0x1.6206fp-47f, 0x1.066dep-20f, 0.0f, 0x1.41016ap-24f, 0.0f,
     0x1.42b958p-28f, 0.0f, 0.0f, 0x1.99f52p-6f, 0.0f, 0.0f, 0x1.9f048cp-122f,
     0x1.f35ef2p-36f, 0.0f, 0x1.1ef752p-109f, 0x1.e6e6c2p-126f, 0x1.90183cp-62f,
     0x1.15867ep-87f, 0x1.3a1266p-126f, 0x1.d53a76p-120f, 0.0f, 0x1.d3a534p-8f, 0.0f,
     0x1.ba8c1cp-42f, 0x1.efda1ap-19f, 0.0f, 0x1.ef02c8p-24f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ae47fep-44f, 0x1.86f8fcp-10f, 0x1.1ffe26p-126f, 0x1.05c7eep-5f, 0.0f,
     0.0f, 0x1.65c57ap-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.667714p-50f,
     0x1.f118e2p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.426686p-91f, 0.0f, 0.0f, 0.0f,
     0x1.fb778p-67f, 0x1.1ef45ap-38f, 0x1.fb35d4p-15f, 0.0f, 0x1.7af26ap-84f, 0.0f,
     0x1.b7e6dcp-22f, 0x1.07131p-70f, 0x1p0f, 0.0f, 0x1.1ce58ap-64f, 0.0f, 0.0f,
     0x1.b93c82p-89f, 0x1.f3df1p-20f, 0.0f, 0x1.76103ep-23f, 0.0f, 0x1.ecf8f8p-4f,
     0.0f, 0.0f, 0x1.88e154p-75f, 0x1.3a5684p-36f, 0.0f, 0.0f, 0x1.91cfdcp-97f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.55dd48p-47f, 0x1.0f0f06p-58f, 0x1.0750eap-75f, 0.0f,
     0x1.ba54f2p-100f, 0.0f, 0x1.d5d05ep-64f, 0x1.06b368p-7f, 0x1.877782p-66f,
     0x1.5db8fp-76f, 0x1.2a138ap-51f, 0.0f, 0x1.8089fcp-108f, 0.0f, 0x1.0c60e8p-32f,
     0.0f, 0x1.7fca7p-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f54624p-25f, 0x1.f1c8ep-24f,
     0.0f, 0x1.cc8162p-102f, 0x1.989248p-59f, 0x1.93f55cp-91f, 0.0f, 0.0f, 0.0f,
     0x1.52b21ep-90f, 0.0f, 0x1.ca2a1ap-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.69ef5ap-31f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b829f4p-118f, 0.0f, 0x1.c551aep-47f, 0.0f,
     0x1.bbd91ap-101f, 0x1.40e6dp-35f, 0x1.f8973ep-48f, 0x1.5e51dep-59f, 0.0f,
     0x1.e44d3ap-47f, 0.0f, 0x1.4cf7ap-2f, 0.0f, 0.0f, 0x1.935c4p-5f, 0x1.c7e8f6p-42f,
     0.0f, 0x1.77451ep-11f, 0x1.ec8986p-108f, 0x1.e9b876p-85f, 0.0f, 0x1.5c3a3cp-107f,
     0x1.e4b874p-7f, 0.0f, 0.0f, 0x1.0a0c4ep-103f, 0x1p0f, 0x1.e0e7dp-18f,
     0x1.085c2ap-117f, 0.0f, 0x1.f1c40cp-92f, 0.0f, 0x1.030572p-125f, 0.0f, 0.0f,
     0x1.113db2p-22f, 0x1.25df58p-93f, 0x1.45a86cp-1f, 0x1.a44a4p-72f,
     0x1.4f5e88p-17f, 0.0f, 0x1.472b36p-13f, 0x1.d34f92p-60f, 0.0f, 0.0f,
     0x1.2a9056p-107f, 0.0f, 0x1.15ba3cp-51f, 0x1.01d8aap-57f, 0x1.d43184p-35f,
     0x1.ac709ap-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dd2188p-15f, 0.0f, 0x1.78be6ap-70f,
     0x1.8b864ep-105f, 0.0f, 0.0f, 0x1.c630b2p-3f, 0x1.239078p-97f, 0x1.889a3ep-43f,
     0x1.933af6p-117f, 0.0f, 0x1.eaee5p-122f, 0x1.acb74ap-105f, 0.0f,
     0x1.efd4c2p-121f, 0x1.d2116ep-64f, 0.0f, 0x1.cdb766p-111f, 0x1.ffdd8ap-120f,
     0.0f, 0x1.d25e8cp-105f, 0x1.897cccp-112f, 0x1.27d72ep-111f, 0.0f, 0x1.1fdbc8p-8f,
     0x1.42f8aep-113f, 0x1.f5577p-106f, 0.0f, 0.0f, 0x1.7a999cp-2f, 0x1.b52d7p-103f,
     0x1.6bd08ap-83f, 0.0f, 0x1.970408p-36f, 0x1.4638a6p-106f, 0.0f, 0.0f, 0.0f,
     0x1.dd27ap-114f, 0.0f, 0.0f, 0x1.09a2d6p-102f, 0.0f, 0.0f, 0.0f, 0x1.daeccp-11f,
     0.0f, 0.0f, 0.0f, 0x1.3e9c68p-107f, 0x1.77e928p-53f, 0.0f, 0x1.9b631p-78f, 0.0f,
     0x1.62952ap-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0744a2p-68f, 0x1.635504p-55f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.36089p-86f, 0x1.67953p-6f, 0.0f, 0.0f,
     0x1.14e90ap-118f, 0x1.f26704p-37f, 0x1.49df78p-59f, 0x1.573f7cp-10f,
     0x1.702178p-73f, 0x1.f09eaep-68f, 0.0f, 0x1.79f80cp-49f, 0x1.9ba854p-88f,
     0x1.49ee6ep-75f, 0.0f, 0.0f, 0x1.8fa684p-42f, 0.0f, 0.0f, 0x1.8d2cep-53f,
     0x1.c01374p-28f, 0x1.2ff40ep-66f, 0x1.d14e36p-74f, 0.0f, 0.0f, 0x1.d344aep-90f,
     0x1.11c4c8p-83f, 0.0f, 0x1.10eef4p-55f, 0x1.418c42p-84f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.20acf4p-120f, 0.0f, 0x1.212d3ap-26f, 0x1.132302p-70f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.103392p-35f, 0x1.9fe198p-88f, 0.0f, 0.0f, 0x1.4c6b9ap-104f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.825ec4p-69f, 0x1.716522p-64f, 0x1.f70566p-11f, 0.0f, 0.0f,
     0x1.18c43cp-70f, 0.0f, 0.0f, 0x1.532c94p-42f, 0x1.6e3ceep-81f, 0x1.4c54ecp-124f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a622cap-64f, 0.0f, 0.0f, 0x1.9c6accp-56f,
     0x1.3a0122p-101f, 0x1.798b7p-112f, 0x1.4a5358p-109f, 0x1.23647p-47f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a63046p-76f, 0.0f, 0.0f, 0x1.080efp-74f, 0x1.09e576p-121f,
     0x1.59b1cep-91f, 0.0f, 0.0f, 0.0f, 0x1.3eef5ep-13f, 0.0f, 0x1.6beee8p-114f, 0.0f,
     0x1.b12f56p-12f, 0.0f, 0.0f, 0x1.ec09ecp-21f, 0x1.0141cp-68f, 0.0f, 0.0f,
     0x1.9dbb8p-107f, 0.0f, 0.0f, 0.0f, 0x1.472f04p-9f, 0x1.11f526p-47f,
     0x1.3f10a8p-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b6c2ap-8f, 0.0f, 0.0f, 0x1.6b0baep-90f, 0.0f, 0.0f, 0x1.7f941p-3f,
     0.0f, 0.0f, 0.0f, 0x1.b51614p-54f, 0.0f, 0.0f, 0.0f, 0x1.5cbfc6p-38f,
     0x1.bfa9ccp-63f, 0.0f, 0.0f, 0x1.d4b268p-29f, 0.0f, 0x1.93d85p-124f,
     0x1.87ce4p-58f, 0x1.05352p-96f, 0.0f, 0.0f, 0x1.9b2bc2p-27f, 0x1.1ab496p-55f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.31582cp-116f, 0.0f, 0.0f, 0x1.dea3ap-124f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.82d5aap-119f, 0.0f, 0x1.231084p-124f,
     0x1.fd7d4p-71f, 0x1.550bf8p-84f, 0.0f, 0x1.d8af18p-95f, 0.0f, 0.0f,
     0x1.4cf3b6p-6f, 0x1.dc0df6p-21f, 0.0f, 0x1.731adap-19f, 0x1.7fc962p-117f, 0x1p0f,
     0.0f, 0.0f, 0.0f, 0x1.9e43bp-72f, 0x1.86ab24p-38f, 0.0f, 0.0f, 0.0f,
     0x1.d66aa8p-65f, 0.0f, 0x1.5c03f4p-106f, 0x1.068852p-98f, 0x1.b99ec4p-81f,
     0x1.8364f6p-14f, 0x1.70a8f6p-52f, 0x1.78b322p-33f, 0.0f, 0x1.e4628p-111f,
     0x1.100b5p-72f, 0.0f, 0x1.4dbcb6p-8f, 0x1.d96278p-15f, 0x1.74455cp-71f,
     0x1.18fe96p-112f, 0.0f, 0x1.f6c45ep-52f, 0x1.9a8436p-103f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.18ab32p-81f, 0.0f, 0.0f, 0x1.fb6a5ap-31f, 0x1.c31e4cp-94f,
     0.0f, 0x1.322cf4p-98f, 0.0f, 0.0f, 0.0f, 0x1.c8fc5cp-52f, 0.0f, 0x1.65a628p-106f,
     0.0f, 0.0f, 0x1.517e3p-11f, 0.0f, 0.0f, 0x1.609a34p-35f, 0x1.ab04ccp-68f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.3bf2b8p-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.689824p-117f,
     0.0f, 0x1.fe8a1ap-108f, 0.0f, 0x1.fca17ep-54f, 0x1.20c7e2p-108f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.49922cp-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.306486p-91f,
     0x1.2e024p-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.79c7fp-113f, 0x1.ddcda8p-46f,
     0x1.6ca1bp-112f, 0x1.cf8588p-86f, 0.0f, 0.0f, 0.0f, 0x1.6cc166p-22f,
     0x1.60bc56p-17f, 0.0f, 0x1.37d74cp-65f, 0x1.1ddba8p-57f, 0.0f, 0.0f, 0.0f,
     0x1.794a42p-57f, 0x1.6dab5ep-117f, 0.0f, 0x1.ee7e76p-119f, 0x1.b4215ap-107f,
     0.0f, 0x1.c998bep-104f, 0.0f, 0.0f, 0x1.8db1fp-19f, 0x1.2ffd0ap-121f, 0.0f,
     0x1.b7fdf4p-35f, 0.0f, 0.0f, 0.0f, 0x1.ccd0b6p-74f, 0x1.f582d8p-53f, 0.0f, 0.0f,
     0.0f, 0x1.10cc84p-32f, 0x1.d461p-16f, 0.0f, 0x1.d743eep-85f, 0.0f, 0.0f, 0.0f,
     0x1.d4a758p-89f, 0x1.f86062p-85f, 0.0f, 0x1.8f2f6ap-126f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cf7b5ap-44f, 0x1.240e16p-35f, 0x1.0d8c14p-75f, 0.0f, 0.0f, 0x1.616d8cp-67f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f6609cp-109f, 0x1.d16dbp-50f, 0.0f, 0x1.be7398p-8f,
     0.0f, 0x1.2c869ap-28f, 0.0f, 0.0f, 0.0f, 0x1.a2101ap-58f, 0.0f, 0x1.94c1bcp-9f,
     0.0f, 0.0f, 0x1.27c40ap-5f, 0.0f, 0x1.bc7848p-17f, 0x1.9c4414p-115f,
     0x1.ea271cp-33f, 0x1.f2a97ap-19f, 0.0f, 0x1.846418p-111f, 0.0f, 0x1.497552p-57f,
     0x1.5e44d6p-61f, 0.0f, 0x1.978c9ep-89f, 0.0f, 0.0f, 0.0f, 0x1.bb144p-87f, 0.0f,
     0x1.60db1ep-119f, 0x1.fc3abp-113f, 0.0f, 0x1.5aff6ep-103f, 0x1.49119ap-25f, 0.0f,
     0x1.38b4a6p-117f, 0.0f, 0x1.ad252cp-90f, 0x1.d558ap-1f, 0.0f, 0.0f,
     0x1.44971p-122f, 0x1.6122cp-53f, 0.0f, 0x1.adfe82p-45f, 0x1.018af4p-17f, 0.0f,
     0x1.fe685cp-87f, 0x1.e39fb6p-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.db416ep-82f,
     0.0f, 0x1.8443e8p-95f, 0.0f, 0x1.18a17cp-119f, 0.0f, 0.0f, 0.0f, 0x1.4c616cp-30f,
     0.0f, 0x1.586a1ap-51f, 0.0f, 0x1.266914p-74f, 0.0f, 0x1.35d214p-39f, 0.0f,
     0x1.6034acp-83f, 0x1.564216p-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c0427cp-35f,
     0x1.83c214p-56f, 0.0f, 0x1.16d844p-64f, 0.0f, 0.0f, 0x1.b20e9ap-46f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1dad28p-25f, 0x1.f696b4p-11f, 0x1.96a2f4p-86f, 0.0f,
     0x1.fc4a7ep-44f, 0x1.a257f6p-76f, 0x1.f92606p-120f, 0.0f, 0.0f, 0x1.f786dap-81f,
     0x1.ff27bp-82f, 0.0f, 0.0f, 0x1.85802ep-71f, 0.0f, 0x1.4dc02cp-120f, 0.0f,
     0x1.3a3afcp-32f, 0x1.5584fep-104f, 0x1.38afe6p-24f, 0.0f, 0.0f, 0x1.f7af86p-90f,
     0x1.b9a282p-34f, 0.0f, 0x1.c84788p-10f, 0.0f, 0.0f, 0.0f, 0x1.0dfaa2p-4f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e0c5dep-14f, 0.0f, 0.0f, 0.0f, 0x1.640e14p-31f, 0.0f,
     0x1.d06124p-80f, 0.0f, 0.0f, 0x1.8d82d6p-13f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6f4026p-37f, 0.0f, 0x1.d1e828p-46f, 0x1.124a26p-81f, 0x1.fe4adcp-46f, 0.0f,
     0x1.967bc2p-73f, 0x1.d84396p-64f, 0x1.8ec222p-21f, 0x1.378daap-48f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a7d83ap-33f, 0x1.0ed27p-84f, 0x1.60e3fcp-121f, 0.0f,
     0.0f, 0x1.9e92ep-51f, 0.0f, 0x1.6647e6p-2f, 0.0f, 0.0f, 0x1.945a04p-68f, 0.0f,
     0.0f, 0x1.f5f982p-114f, 0.0f, 0.0f, 0x1.b74bc8p-84f, 0.0f, 0x1.d65124p-94f, 0.0f,
     0.0f, 0x1.059808p-1f, 0.0f, 0.0f, 0.0f, 0x1.5245b8p-113f, 0x1.fd9244p-20f,
     0x1.50754p-73f, 0x1.9771ep-51f, 0.0f, 0.0f, 0.0f, 0x1.750a2cp-90f,
     0x1.db3894p-5f, 0.0f, 0x1.f07fd6p-79f, 0.0f, 0x1.7ed098p-4f, 0.0f,
     0x1.b2d47ap-41f, 0x1.2cce72p-42f, 0x1.c46f4p-101f, 0x1.6a64bp-113f, 0x1p0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.491068p-113f, 0.0f,
     0x1.4f9224p-49f, 0x1.99351ap-2f, 0.0f, 0.0f, 0x1.1282c2p-63f, 0.0f,
     0x1.3bf152p-36f, 0.0f, 0x1.2adbf8p-112f, 0x1.a49024p-67f, 0.0f, 0.0f, 0.0f,
     0x1.6f9594p-56f, 0x1.8e1626p-71f, 0.0f, 0x1.ae656p-5f, 0.0f, 0x1.2ed4cep-68f,
     0.0f, 0.0f, 0x1.5790d4p-7f, 0x1.c761d6p-74f, 0.0f, 0x1.7be744p-108f, 0.0f, 0.0f,
     0x1.02b19ep-102f, 0x1.772bf6p-102f, 0.0f, 0x1.f7efbcp-37f, 0x1.702268p-124f,
     0.0f, 0x1.932a54p-89f, 0.0f, 0x1.b17e2p-62f, 0x1.df87ap-124f, 0x1.2b35e2p-44f,
     0x1.d71c06p-52f, 0x1.72fb1cp-116f, 0x1.ac85e4p-85f, 0.0f, 0.0f, 0.0f,
     0x1.45a8bep-53f, 0.0f, 0x1.d518acp-89f, 0.0f, 0x1.72c3dcp-25f, 0x1.6181c6p-62f,
     0x1.4a3612p-112f, 0x1.79704p-27f, 0.0f, 0x1.08dec2p-100f, 0x1.1b4c2p-79f, 0.0f,
     0.0f, 0x1.d0732ep-26f, 0.0f, 0.0f, 0.0f, 0x1.4676f2p-61f, 0.0f, 0.0f,
     0x1.f22a7p-1f, 0.0f, 0x1.64fb2cp-29f, 0x1.4a3c3ep-23f, 0x1.99a0b2p-105f,
     0x1.bb85ecp-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6a789p-46f, 0.0f, 0.0f,
     0x1.a4c9dcp-98f, 0.0f, 0x1.ad69cp-99f, 0.0f, 0.0f, 0x1.95e79cp-61f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.742d32p-32f, 0x1.80548cp-78f, 0.0f, 0x1.ba786ep-41f,
     0x1.5c3064p-80f, 0.0f, 0x1.c41c8cp-43f, 0x1.e6716ap-107f, 0x1.8703a6p-112f, 0.0f,
     0.0f, 0.0f, 0x1.e7ee34p-7f, 0x1.4c099p-70f, 0x1.47fa2p-3f, 0.0f,
     0x1.5a095ep-119f, 0x1.c917bep-89f, 0x1.dbc196p-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.deb8fap-81f, 0.0f, 0x1.0df4bp-75f, 0x1.6ada96p-89f, 0.0f, 0.0f, 0.0f,
     0x1.a3bdc2p-28f, 0x1.9e68cp-33f, 0x1.281bdep-40f, 0x1.e9e9a8p-4f,
     0x1.32652ap-112f, 0x1.a99accp-86f, 0x1.f8bccp-101f, 0.0f, 0.0f, 0x1.01983ap-5f,
     0.0f, 0x1.2138dep-77f, 0x1.08687ep-99f, 0x1.671ee4p-59f, 0.0f, 0x1.89c954p-113f,
     0x1.b60efap-1f, 0.0f, 0.0f, 0.0f, 0x1.51d07ap-89f, 0.0f, 0x1.4c11c6p-67f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c92826p-58f, 0x1.f43b1p-101f, 0x1.acf6eep-6f, 0.0f,
     0x1.61f038p-117f, 0x1.3f033cp-76f, 0x1.b85686p-49f, 0x1.ee3456p-87f, 0.0f, 0.0f,
     0x1.5bfa28p-61f, 0.0f, 0.0f, 0x1.35d354p-102f, 0.0f, 0.0f, 0.0f, 0x1.27c2d4p-63f,
     0.0f, 0x1.b4bab6p-53f, 0.0f, 0x1.11ed9p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.50cea4p-36f, 0x1.f32854p-112f, 0x1.a0f4b8p-96f, 0x1.9c668p-79f,
     0x1.bade0ep-28f, 0x1.dac5acp-42f, 0.0f, 0.0f, 0x1.b91168p-9f, 0x1.75e696p-124f,
     0x1.e83ca8p-11f
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
            tmp1 = Sleef_exp2f1_u35purecfma(tmp0);
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
    printf("Sleef_exp2f1_u35purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_exp2f1_u35purecfma bench acc %a\n", global_bench_acc);
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
