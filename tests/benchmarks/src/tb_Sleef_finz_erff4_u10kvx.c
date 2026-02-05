/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_erff4_u10kvx.c --function Sleef_finz_erff4_u10kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 4 --function-input-vector-size 4 --bench \
 *     --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float4_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float4_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0.0f, 0.0f, 0x1.6f8f8p-88f, 0.0f, 0.0f, 0x1.3c6634p-33f, 0x1.157fe2p-34f, 0.0f,
     0x1.49733ep-94f, 0x1.03312ap-55f, 0x1.2a1612p-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.7c9204p-85f, 0.0f, 0.0f, 0.0f, 0x1.c4f49ap-48f, 0x1.27ea56p-114f,
     0x1.e1e168p-50f, 0x1.7cf062p-55f, 0.0f, 0.0f, 0x1.fd8314p-4f, 0.0f,
     0x1.443c2cp-4f, 0x1.deed1ap-116f, 0x1.6fe80cp-22f, 0.0f, 0x1.08157cp-93f,
     0x1.7b68bap-16f, 0.0f, 0x1.d71f64p-33f, 0x1.749fecp-42f, 0.0f, 0x1.8d3f52p-51f,
     0x1.e70694p-35f, 0.0f, 0x1.ff84bep-50f, 0x1.667cf6p-112f, 0x1.543192p-61f,
     0x1.b35908p-117f, 0.0f, 0x1.fb1efep-16f, 0x1.94d4eep-109f, 0.0f, 0.0f,
     0x1.34386p-76f, 0x1.d8c8bp-17f, 0x1.83afa6p-38f, 0x1.44f5e2p-83f,
     0x1.df442cp-87f, 0.0f, 0.0f, 0.0f, 0x1.365a52p-42f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a706fp-97f, 0.0f, 0x1.5d037p-115f, 0x1.825166p-88f, 0x1.fb5298p-80f, 0.0f,
     0.0f, 0.0f, 0x1.3ee2bcp-39f, 0x1.270b84p-20f, 0.0f, 0x1.c0c3f8p-39f,
     0x1.8bd152p-69f, 0.0f, 0x1.633924p-41f, 0x1.cd2648p-78f, 0x1.c5e58ep-77f,
     0x1.1e3622p-19f, 0.0f, 0x1.0f29c6p-32f, 0x1.1c2a7p-18f, 0.0f, 0.0f,
     0x1.ae65e6p-12f, 0.0f, 0x1.aae338p-8f, 0.0f, 0.0f, 0x1.2b0974p-106f,
     0x1.bfdd78p-86f, 0x1.485adp-63f, 0.0f, 0x1.87f27ep-44f, 0x1.0a2178p-98f,
     0x1.7c6f36p-5f, 0.0f, 0.0f, 0x1.d3fb3cp-77f, 0.0f, 0.0f, 0x1.86301p-23f,
     0x1.0bcc1ep-4f, 0x1.029f84p-66f, 0.0f, 0x1.840d86p-29f, 0.0f, 0x1.029fa4p-26f,
     0.0f, 0.0f, 0.0f, 0x1.a48e92p-19f, 0x1.716d2cp-4f, 0.0f, 0x1.6ccf38p-69f, 0.0f,
     0.0f, 0x1.f817cap-104f, 0.0f, 0x1.045bfp-120f, 0.0f, 0x1.5d1806p-82f,
     0x1.2066bcp-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fc0e96p-87f, 0x1.a90fap-75f,
     0x1.558dacp-99f, 0x1.9463c6p-82f, 0.0f, 0.0f, 0x1.63a492p-47f, 0.0f,
     0x1.ad5becp-49f, 0x1.437af4p-116f, 0.0f, 0x1.23ad9p-25f, 0.0f, 0x1.a96266p-53f,
     0x1.81e34ep-125f, 0.0f, 0x1.be1df4p-34f, 0x1.f6f8f6p-121f, 0.0f, 0.0f,
     0x1.6a4d84p-99f, 0.0f, 0.0f, 0.0f, 0x1.d2441ep-42f, 0.0f, 0x1.6234aep-64f,
     0x1.95249cp-13f, 0.0f, 0.0f, 0x1.c9efe6p-64f, 0.0f, 0.0f, 0x1.a8ee6cp-75f,
     0x1.054a6cp-5f, 0.0f, 0x1.e3491ap-6f, 0.0f, 0x1.39636ep-106f, 0.0f, 0.0f, 0.0f,
     0x1.be497ep-20f, 0.0f, 0x1.94d3fp-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.176326p-22f, 0x1.7cc92p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c66af4p-81f, 0x1.cadc62p-17f, 0x1.58cb62p-82f, 0.0f, 0.0f, 0.0f,
     0x1.ed5f38p-118f, 0x1.4a2b2ap-87f, 0x1.d82ce6p-122f, 0.0f, 0x1.09c31ep-13f, 0.0f,
     0.0f, 0.0f, 0x1.560548p-72f, 0.0f, 0x1.a9eaep-37f, 0.0f, 0x1.fa01a2p-31f,
     0x1.3ec3e6p-71f, 0x1.b920f2p-74f, 0x1.6f43e8p-14f, 0.0f, 0x1.de866ep-109f,
     0x1.0cb64ap-26f, 0.0f, 0x1.648244p-33f, 0.0f, 0.0f, 0x1.89f8c4p-36f,
     0x1.2b4294p-13f, 0.0f, 0x1.b50086p-105f, 0x1.e2c97ap-38f, 0.0f, 0.0f,
     0x1.befb32p-44f, 0x1.823e3ap-104f, 0x1.4bade8p-10f, 0.0f, 0.0f, 0x1.7e6a04p-115f,
     0.0f, 0x1.5f8e4ep-4f, 0.0f, 0.0f, 0x1.3de94p-16f, 0x1.eb5e3p-97f,
     0x1.65c612p-67f, 0.0f, 0x1.900424p-38f, 0x1.347372p-99f, 0x1.b3301ep-126f, 0.0f,
     0x1.1fa036p-27f, 0x1.40d22p-100f, 0x1.22a594p-116f, 0x1.cb60b2p-5f,
     0x1.aa4792p-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3c1ebcp-97f, 0x1.6fa20ap-121f,
     0.0f, 0.0f, 0x1.a1b812p-35f, 0x1.8e5fcep-52f, 0x1.891dep-64f, 0.0f,
     0x1.80fa42p-87f, 0x1.930902p-122f, 0x1.1bc8cp-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.358e22p-72f, 0x1.f92502p-65f, 0.0f, 0x1.13a57cp-111f,
     0.0f, 0x1.af1d64p-56f, 0x1.f4bfcp-11f, 0x1.4b89ecp-62f, 0.0f, 0x1.27e974p-49f,
     0.0f, 0x1.029dc2p-85f, 0x1.e96f4p-86f, 0x1.64f26p-40f, 0x1.5eda6cp-2f,
     0x1.57ad1ep-55f, 0x1.b932f2p-56f, 0x1.93d588p-14f, 0x1.6fd966p-110f, 0.0f,
     0x1.d05626p-37f, 0.0f, 0x1.9413ap-11f, 0x1.7e9c3ap-60f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ec31ccp-104f, 0x1.c88f7ep-38f, 0.0f, 0.0f, 0.0f, 0x1.dd8434p-34f, 0.0f,
     0x1.8e7e86p-14f, 0.0f, 0x1.5b431p-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.75d55ap-2f,
     0x1.cfcc5ep-35f, 0.0f, 0.0f, 0x1.dc79d8p-2f, 0x1.5bddbp-87f, 0.0f, 0.0f,
     0x1.a7ae9ap-33f, 0x1.063522p-121f, 0x1.16658ep-111f, 0x1.2c860ep-30f,
     0x1.546f26p-107f, 0x1.2c30fap-76f, 0x1.b18614p-60f, 0x1.de9c72p-93f, 0.0f,
     0x1.7bda56p-9f, 0.0f, 0.0f, 0.0f, 0x1.7b1192p-107f, 0.0f, 0.0f, 0x1.afc9b4p-35f,
     0x1.b49442p-13f, 0x1.edb32ep-7f, 0x1.d1d72p-6f, 0x1.0e707ap-90f, 0x1.a4d624p-52f,
     0x1.ded5cap-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f309d4p-78f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.63da72p-18f, 0x1.504b7cp-29f, 0.0f, 0.0f, 0.0f, 0x1.911cb6p-11f,
     0x1.76c36ap-5f, 0x1.cc30ap-89f, 0.0f, 0x1.51fb06p-96f, 0x1.2fcf3cp-102f,
     0x1.235f92p-106f, 0x1.737202p-41f, 0x1.8dbc94p-73f, 0x1.bcc9fcp-113f, 0.0f, 0.0f,
     0.0f, 0x1.4f818ap-121f, 0x1.fc566p-52f, 0x1.958542p-59f, 0x1.6a1becp-61f, 0.0f,
     0x1.6b131ap-98f, 0.0f, 0.0f, 0x1.a0156cp-40f, 0x1.37fce4p-109f, 0.0f, 0.0f, 0.0f,
     0x1.7a14c8p-96f, 0.0f, 0.0f, 0x1.23a39ep-109f, 0.0f, 0.0f, 0x1.a91fdap-97f,
     0x1.8e7d48p-22f, 0.0f, 0x1.cb234cp-70f, 0x1.755b14p-20f, 0.0f, 0.0f,
     0x1.18ef8p-13f, 0x1.0aec0ep-24f, 0x1.241d34p-21f, 0.0f, 0.0f, 0x1.72f6c4p-86f,
     0x1.4cb02ep-65f, 0x1.f1bcc6p-73f, 0x1.21f0dap-107f, 0.0f, 0x1.2e248p-97f,
     0x1.3f9242p-113f, 0.0f, 0.0f, 0x1.2af40ep-59f, 0.0f, 0.0f, 0x1.0954c6p-44f,
     0x1.452ffcp-63f, 0x1.7627e4p-114f, 0x1.9dfadp-101f, 0x1.e2b812p-3f, 0.0f,
     0x1.84254cp-34f, 0.0f, 0x1.3849cap-35f, 0x1.d1c09cp-43f, 0.0f, 0x1.07ffdap-51f,
     0.0f, 0x1.99428ap-120f, 0x1.7c6672p-102f, 0x1.c067cep-94f, 0.0f, 0.0f, 0.0f,
     0x1.b96886p-118f, 0.0f, 0x1.e32b88p-27f, 0.0f, 0x1.d33c92p-4f, 0x1.005a9cp-96f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ff19b8p-58f, 0.0f, 0x1.900acap-115f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.4abfccp-54f, 0.0f, 0.0f, 0.0f, 0x1.4e782ap-105f,
     0x1.db11e8p-38f, 0x1.124fa4p-105f, 0.0f, 0x1.eec88p-64f, 0x1.d42822p-25f,
     0x1.409154p-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b8113ap-92f, 0.0f, 0x1.1c8bc6p-4f,
     0x1.b68a84p-3f, 0x1.83324p-40f, 0x1.879b4ep-65f, 0x1.5e21a4p-69f, 0.0f,
     0x1.8c674ap-15f, 0x1.1f8bb4p-35f, 0.0f, 0.0f, 0x1.31ef32p-106f, 0.0f,
     0x1.aa7cfcp-48f, 0.0f, 0x1.6ee42ap-50f, 0x1.567f9ep-43f, 0.0f, 0x1.c9a21p-49f,
     0x1.e5fd3cp-113f, 0x1.e431f6p-95f, 0.0f, 0.0f, 0x1.e9bfep-99f, 0.0f,
     0x1.f6c5b6p-117f, 0.0f, 0.0f, 0x1.060126p-19f, 0x1.db5a34p-22f, 0x1.f65ce8p-60f,
     0.0f, 0x1.941caap-1f, 0x1.3f8f68p-54f, 0.0f, 0x1.53e0bap-36f, 0.0f,
     0x1.c427e8p-38f, 0x1.b7b4c2p-70f, 0x1.22e4ccp-71f, 0.0f, 0x1.aed39p-121f, 0.0f,
     0x1.32b4cep-104f, 0x1.50903cp-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2f5286p-78f, 0.0f, 0.0f, 0x1.4c712cp-72f, 0x1.4b60cp-6f, 0x1.6a40d4p-40f,
     0.0f, 0x1.d098d6p-88f, 0.0f, 0.0f, 0.0f, 0x1.bcb3cep-100f, 0.0f, 0.0f,
     0x1.8bbc4cp-15f, 0x1.093026p-118f, 0.0f, 0x1.444a7cp-58f, 0x1.b0954ap-44f, 0.0f,
     0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.f42012p-76f, 0x1.d6ee24p-12f, 0x1.188aecp-44f,
     0x1.a11abep-88f, 0.0f, 0x1.413c1ep-78f, 0.0f, 0x1.dd7cb6p-95f, 0.0f,
     0x1.d7cf4ap-118f, 0x1.644672p-83f, 0x1.19ea2ap-26f, 0.0f, 0x1.f3444p-43f, 0.0f,
     0.0f, 0.0f, 0x1.7d251ap-99f, 0x1.79814ap-100f, 0.0f, 0.0f, 0.0f, 0x1.1dacccp-90f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2bd71p-84f, 0.0f, 0x1.a1028cp-2f,
     0.0f, 0.0f, 0x1.142a72p-95f, 0x1.c718ecp-13f, 0x1.9877e8p-55f, 0x1.6a5a4p-87f,
     0x1.505c08p-95f, 0x1.130aap-70f, 0x1.d3e1b2p-64f, 0x1.a9788ap-111f,
     0x1.6ab5dcp-11f, 0.0f, 0x1.7aa334p-114f, 0.0f, 0x1.da17c2p-9f, 0.0f,
     0x1.f1708p-64f, 0.0f, 0.0f, 0x1.0be87cp-10f, 0x1.d0e338p-31f, 0x1.f29002p-86f,
     0x1.d19662p-126f, 0x1p0f, 0.0f, 0x1.e146dap-12f, 0.0f, 0.0f, 0x1.93afd8p-94f,
     0x1.cc402ep-66f, 0x1.266f8cp-3f, 0.0f, 0x1.227a7cp-24f, 0.0f, 0x1.3d7a2ep-100f,
     0x1.3df25ap-62f, 0.0f, 0x1.8086dap-4f, 0x1.7474f8p-91f, 0x1.da3a1p-82f,
     0x1.b845a4p-60f, 0x1.28a0d6p-61f, 0.0f, 0.0f, 0x1.f12f26p-61f, 0x1.034454p-48f,
     0.0f, 0.0f, 0x1.d8d52p-52f, 0x1.902d5cp-47f, 0x1.271c26p-6f, 0.0f,
     0x1.e8d456p-23f, 0.0f, 0x1.9f303ep-61f, 0x1.51d4c8p-101f, 0x1.17018ep-99f, 0.0f,
     0.0f, 0.0f, 0x1.73a1fep-75f, 0.0f, 0x1.8e08dap-69f, 0.0f, 0x1.e3d13cp-15f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.08f982p-53f, 0.0f, 0x1.c5767p-44f, 0x1.9363e8p-4f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9560dp-94f, 0x1.70ab38p-99f, 0.0f, 0x1.099efcp-36f,
     0x1.e45ebcp-103f, 0.0f, 0.0f, 0.0f, 0x1.2c1a16p-88f, 0x1.e2e766p-92f,
     0x1.8cdf4ep-103f, 0x1.75af44p-4f, 0x1.648d6cp-66f, 0x1.e9cc1ap-92f,
     0x1.a07164p-38f, 0x1.3ebe8ep-86f, 0x1.656d9ep-31f, 0x1.4bec5p-17f,
     0x1.ac5ad6p-57f, 0.0f, 0x1.75e09cp-2f, 0x1.eef7ecp-71f, 0x1.aa18b4p-41f,
     0x1.4b11bcp-63f, 0.0f, 0x1.6cdca4p-67f, 0x1.ce4322p-64f, 0.0f, 0x1.789944p-85f,
     0.0f, 0x1.08c234p-18f, 0x1.d5fcp-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.aa0408p-26f,
     0.0f, 0.0f, 0.0f, 0x1.dd6946p-118f, 0.0f, 0x1.b6275p-15f, 0x1.0a5174p-111f, 0.0f,
     0x1.5e76c8p-115f, 0x1.0d3ed4p-121f, 0x1.7f0d1cp-23f, 0x1.4633fep-42f, 0.0f,
     0x1.4430a2p-114f, 0x1.bbab16p-66f, 0x1.59c588p-58f, 0.0f, 0x1.abcb1ep-54f, 0.0f,
     0.0f, 0.0f, 0x1.f74b86p-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.dd5a68p-58f, 0x1.95337p-105f, 0.0f, 0.0f, 0x1.e9cf0ep-48f, 0x1.27ec2cp-22f,
     0x1.038382p-49f, 0x1.b9327cp-97f, 0x1.ea60aap-71f, 0x1.99048ep-37f,
     0x1.b11b22p-120f, 0x1.96c032p-32f, 0x1.61e328p-102f, 0.0f, 0x1.c6f4dap-95f,
     0x1.a57d7cp-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6ac2bp-91f, 0x1.c91c8ep-19f,
     0x1.78ed58p-10f, 0.0f, 0.0f, 0x1.a1d208p-101f, 0.0f, 0.0f, 0x1.218eb8p-38f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f1261cp-113f, 0x1.729626p-111f, 0.0f, 0x1.5723c2p-77f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7b3ecp-109f, 0.0f, 0x1.b33dccp-84f, 0.0f, 0.0f,
     0x1.2447fap-95f, 0.0f, 0x1.a6e352p-97f, 0.0f, 0.0f, 0x1.b9f0dep-48f, 0.0f, 0.0f,
     0x1.74405cp-101f, 0.0f, 0.0f, 0.0f, 0x1.06366cp-24f, 0x1p0f, 0.0f, 0.0f,
     0x1.3f87e8p-17f, 0.0f, 0x1.a5c55ap-121f, 0x1.817fdcp-9f, 0x1.a1f09p-95f,
     0x1.1e5eecp-114f, 0x1.1bdcc8p-8f, 0.0f, 0x1.c8bd84p-72f, 0x1.179cc8p-28f, 0.0f,
     0.0f, 0x1.4fdbep-80f, 0x1.a099fcp-124f, 0x1.07c09cp-43f, 0.0f, 0.0f, 0.0f,
     0x1.2a081cp-60f, 0.0f, 0x1.1bddc8p-29f, 0.0f, 0x1.2a9a24p-21f, 0x1.92e252p-80f,
     0x1.5311b4p-81f, 0x1.160e1p-37f, 0x1.4a122cp-39f, 0.0f, 0x1.6ffabap-63f, 0.0f,
     0x1.ca05cap-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0badb2p-33f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.160526p-56f, 0x1.56f39p-108f, 0x1.c74738p-12f, 0.0f,
     0x1.fd94f2p-102f, 0x1.1f06fap-53f, 0x1.516364p-30f, 0.0f, 0.0f, 0x1.12fe04p-11f,
     0.0f, 0.0f, 0x1.ab81acp-122f, 0.0f, 0.0f, 0x1.58e52cp-31f, 0.0f, 0x1.017c5ap-19f,
     0.0f, 0x1.43f0ccp-67f, 0.0f, 0.0f, 0.0f, 0x1.5a9c16p-25f, 0x1.442fe4p-88f, 0.0f,
     0x1.2611fp-65f, 0x1.742992p-87f, 0x1.38de1ap-19f, 0x1.2633bcp-79f,
     0x1.1d90fap-17f, 0x1.e656c4p-99f, 0.0f, 0x1.1b2892p-46f, 0x1.8b84fep-33f,
     0x1.892c0ap-36f, 0x1.97651ep-89f, 0x1.d37856p-94f, 0.0f, 0.0f, 0x1.6bd57ep-47f,
     0x1.eb1a74p-113f, 0x1p0f, 0x1.7b7eacp-90f, 0.0f, 0.0f, 0x1.355498p-9f,
     0x1.06b9eap-33f, 0x1.6a585p-13f, 0x1.6e6dbcp-4f, 0.0f, 0.0f, 0x1.8ae154p-55f,
     0.0f, 0x1.fe12aep-75f, 0.0f, 0x1.243dd2p-57f, 0.0f, 0x1.3e96f2p-83f,
     0x1.fc9d7ep-101f, 0x1.947cdap-16f, 0.0f, 0x1.df4192p-94f, 0.0f, 0x1.bcfa98p-86f,
     0x1.9a7266p-106f, 0.0f, 0.0f, 0.0f, 0x1.3f2b96p-111f, 0.0f, 0x1.19746ep-115f,
     0.0f, 0x1.cfc258p-59f, 0x1.906066p-70f, 0x1.8ae68ap-93f, 0x1.b201cap-115f,
     0x1.d93a7ep-125f, 0x1.67e74cp-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.533282p-70f, 0.0f,
     0.0f, 0.0f, 0x1.68719ap-36f, 0.0f, 0.0f, 0.0f, 0x1.971da6p-24f, 0x1.6850e8p-30f,
     0x1.9c4c6ap-68f, 0.0f, 0.0f, 0x1.98ae14p-105f, 0.0f, 0x1.ec06bcp-32f, 0.0f, 0.0f,
     0.0f, 0x1.2f857ep-18f, 0.0f, 0.0f, 0.0f, 0x1.7750b2p-71f, 0x1.43866cp-57f, 0.0f,
     0x1.e587c2p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7a9f4ap-69f, 0.0f,
     0.0f, 0x1.029dap-21f, 0.0f, 0.0f, 0x1.b1f8bap-40f, 0x1.dd7064p-37f, 0.0f, 0.0f,
     0x1.22b348p-8f, 0x1.cde286p-18f, 0x1.dfa124p-81f, 0x1.c13bap-16f, 0.0f,
     0x1.16620ep-20f, 0.0f, 0x1.aee3cap-75f, 0x1.9228c8p-13f, 0x1.69db78p-38f, 0.0f,
     0x1.718902p-25f, 0.0f, 0.0f, 0x1.d459c4p-41f, 0x1.cd8d6cp-34f, 0.0f, 0.0f,
     0x1.750452p-5f, 0.0f, 0x1.002b96p-84f, 0x1.879ceap-92f, 0.0f, 0.0f,
     0x1.198068p-62f, 0.0f, 0x1.5cd7fap-20f, 0.0f, 0.0f, 0.0f, 0x1.e4dea6p-86f,
     0x1.c8908ap-62f, 0x1.44a9dcp-3f, 0.0f, 0x1.b7444p-82f, 0.0f, 0x1.1f31dcp-78f,
     0.0f, 0.0f, 0x1.eb99e8p-101f, 0x1.858e52p-86f, 0.0f, 0.0f, 0x1.2e874ep-122f,
     0x1.33ebf4p-114f, 0x1.9e263ap-105f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_float4_t global_bench_acc;
    int64_t timer;
    int64_t tmp;
    int32_t j;
    int64_t tmp1;
    int64_t tmp2;
    double id_tmp;
    double cpe_measure;
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = external_bench_wrapper_cst;
    tmp = __cos_counter_num(0);
    timer = tmp;
    j = INT32_C(0);

    for (;(j < INT32_C(10000));){
        ml_float4_t local_acc;
        int32_t i;
        ml_float4_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1004));){
            ml_float4_t tmp0;
            ml_float4_t tmp1;
            ml_float4_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_finz_erff4_u10kvx(tmp0);
            memcpy(((ml_float4_t*)(external_bench_wrapper_output_table+ i)), &(tmp1), 16);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(4);
            i = tmp3;
        }
        tmp0 = global_bench_acc + local_acc;
        global_bench_acc = tmp0;
        tmp1 = j + INT32_C(1);
        j = tmp1;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_finz_erff4_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_erff4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
